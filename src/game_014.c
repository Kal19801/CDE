// Auto-generated from Ghidra decompilation
#include "port_prelude.h"

//==== 00635220 GetGasExpansionPlume_Clear_00635220 ====

/* public: void __thiscall ConventionalGunModule__GetGasExpansionPlume_Clear(void)const  */

void __thiscall ConventionalGunModule__GetGasExpansionPlume_Clear(ConventionalGunModule *this)

{
  undefined **local_3c;
  void *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int local_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  undefined1 local_c;
  
  *(uint32_t *)&local_3c = (uint32_t)(uintptr_t)(&vftable_15);
  local_38 = (void *)0x0;
  local_34 = 0;
  local_30 = 0;
  *(uint32_t *)&local_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_c = 0;
  *(uint32_t *)&local_1c = 0;
  iStack_18 = 0;
  iStack_14 = 0;
  iStack_10 = 0;
  util__Darray_L_MaterialConstituent_G___op_assign
            ((Darray_L_MaterialConstituent_G_ *)
             &(this->GetGasExpansionPlume_MemoizedValue).Data.ExhaustVelocity_km__s,
             (Darray_L_struct_MaterialConstituent_G_ *)&local_3c);
  *(undefined1 *)&(this->Barrel).Composition = local_c;
  *(uint32_t *)&local_3c = (uint32_t)(uintptr_t)(&vftable_15);
  *(undefined4 *)&(this->GetGasExpansionPlume_MemoizedValue).Data.DisableShimmer = local_2c;
  *(undefined4 *)&(*(undefined4 *)((char *)&((this->GetGasExpansionPlume_MemoizedValue).Data) + 0x34)) = uStack_28;
  *(undefined4 *)&(this->GetGasExpansionPlume_MemoizedValue).IsValidData = uStack_24;
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetGasExpansionPlume_MemoizedValue)) + 0x3c)) = uStack_20;
  (this->Barrel)._pad_0x0_0 = local_1c;
  (this->Barrel)._pad_0x4_1 = iStack_18;
  (this->Barrel)._pad_0x8_2 = iStack_14;
  (this->Barrel)._pad_0xc_3 = iStack_10;
  if (local_38 != (void *)0x0) {
    port_op_delete(local_38);
  }
  *(undefined1 *)&(this->Barrel).Length_m = 0;
  return;
}

//==== 006352a0 GetGeneratedName_006352a0 ====


/* public: virtual class util__Str_L_char_G_ 
   ConventionalGunModule__GetGeneratedName(void)const  */

Str_L_char_G_ * 
ConventionalGunModule__GetGeneratedName
          (ConventionalGunModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined8 stack0xfffffffc;
  LocStr *pLVar1;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ *pSVar3;
  Str_L_char_G_ SStack_6c;
  Str_L_char_G_ SStack_60;
  void *apvStack_54 [3];
  void *pvStack_48;
  Str_L_char_G_ SStack_3c;
  undefined4 uStack_30;
  Str_L_char_G_ SStack_2c;
  Str_L_char_G_ SStack_20;
  Str_L_char_G_ SStack_14;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  SStack_14.Data = (char *)0x0;
  SStack_14.Capacity = 0;
  SStack_14.Length = 0;
  if (((char)((this->BarrelModel).Pointer != '\0') &&
     (1 < (int)((this->Turret).Data.field0_0x0)))) {
    util__Str_char___Str_char(&SStack_3c,"Dash");
    SStack_2c.Data = (char *)0x0;
    SStack_2c.Capacity = 0;
    SStack_2c.Length = 0;
    if ((char)((this->BarrelModel).Pointer == '\0')){
      uStack_30 = 1;
    }
    else {
      uStack_30 = *(undefined4 *)&(this->Turret).Data.field0_0x0;
    }
    pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_54,&SStack_3c,&SStack_2c);
    pSVar2 = util__LocStr__operator__o3(pLVar1);
    pSVar3 = util__Printf(&SStack_6c,(wchar_t*)("%i"),uStack_30);
    SStack_20.Length = 0;
    SStack_20.Data = (char *)0x0;
    SStack_20.Capacity = 0;
    util__Str_char___Str_char(&SStack_20,pSVar3);
    util__Str_char___operator__o10(&SStack_20,pSVar2);
    util__Str_char___Str_char(&SStack_60,&SStack_20);
    if (SStack_20.Data != (char *)0x0) {
      port_op_delete(SStack_20.Data);
      (*(uint64_t*)&(SStack_20)) = (*(uint64_t*)&(SStack_20)) & 0xffffffff00000000;
    }
    util__Str_char___operator__o10(&SStack_14,&SStack_60);
    if (SStack_60.Data != (char *)0x0) {
      port_op_delete(SStack_60.Data);
    }
    if (SStack_6c.Data != (char *)0x0) {
      port_op_delete(SStack_6c.Data);
      SStack_6c.Data = (char *)0x0;
    }
    if (pvStack_48 != (void *)0x0) {
      port_op_delete(pvStack_48);
      pvStack_48 = (void *)0x0;
    }
    if (apvStack_54[0] != (void *)0x0) {
      port_op_delete(apvStack_54[0]);
      apvStack_54[0] = (void *)0x0;
    }
    if (SStack_2c.Data != (char *)0x0) {
      port_op_delete(SStack_2c.Data);
      SStack_2c.Data = (char *)0x0;
    }
    if (SStack_3c.Data != (char *)0x0) {
      port_op_delete(SStack_3c.Data);
    }
  }
  util__Str_char___Str_char(&SStack_3c,"Weapon Cannon");
  SStack_2c.Data = (char *)0x0;
  SStack_2c.Capacity = 0;
  SStack_2c.Length = 0;
  pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_54,&SStack_3c,&SStack_2c);
  pSVar2 = util__LocStr__operator__o3(pLVar1);
  util__Str_char___operator__o10(&SStack_14,pSVar2);
  if (pvStack_48 != (void *)0x0) {
    port_op_delete(pvStack_48);
    pvStack_48 = (void *)0x0;
  }
  if (apvStack_54[0] != (void *)0x0) {
    port_op_delete(apvStack_54[0]);
    apvStack_54[0] = (void *)0x0;
  }
  if (SStack_2c.Data != (char *)0x0) {
    port_op_delete(SStack_2c.Data);
    SStack_2c.Data = (char *)0x0;
  }
  if (SStack_3c.Data != (char *)0x0) {
    port_op_delete(SStack_3c.Data);
  }
  MassProjectileSubModule__GetName
            ((MassProjectileSubModule *)&(this->Projectile).CachedPropellantComposition,
             __return_storage_ptr__,(bool)(this->BarrelModel).Pointer,
             (bool)(this->Turret).Data.field1_0x1,&SStack_14);
  if (SStack_14.Data != (char *)0x0) {
    port_op_delete(SStack_14.Data);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}





//==== 00635510 GetGunFlashColor_Clear ====


/* public: void __thiscall ConventionalGunModule__GetGunFlashColor_Clear(void)const  */

void __thiscall ConventionalGunModule__GetGunFlashColor_Clear(ConventionalGunModule *this)

{
  (this->GetGasExpansionPlume_MemoizedValue).Data.StartRadius_m = 0.0;
  *(undefined4 *)&(this->GetGasExpansionPlume_MemoizedValue).Data.StartTemperature_K = 0;
  *(undefined1 *)((int)&(this->GetGasExpansionPlume_MemoizedValue).Data.StartTemperature_K + 4) = 0;
  return;
}





//==== 00635540 GetHeatFromFire_J_00635540 ====


/* public: virtual double __thiscall ConventionalGunModule__GetHeatFromFire_J(double)const  */

double __thiscall
ConventionalGunModule__GetHeatFromFire_J(ConventionalGunModule *this,double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = Material__GetAdiabaticFlameTemperature_K((this->Projectile).Tracer);
  dVar2 = (this->Projectile).CachedPeakPressure_Pa;
  libm_sse2_pow_precise(0.0,0.0);
  dVar1 = *(double *)&this->BarrelProperties;
  dVar3 = (this->Projectile).CachedPeakPressure_Pa;
  libm_sse2_pow_precise(0.0,0.0);
  dVar4 = *(double *)&(this->Projectile).CachedMassStartsOutBeforeBarrel;
  libm_sse2_pow_precise(0.0,0.0);
  return (dVar2 * 10453.1 * dVar1 * dVar5) / ((dVar3 * 4119.47) / dVar4 + 1.0);
}





//==== 006355f0 GetIcon_006355f0 ====


/* public: virtual void (__cdecl*__thiscall ConventionalGunModule__GetIcon(void)const )(void) */

_func_void * __thiscall ConventionalGunModule__GetIcon(ConventionalGunModule *this)

{
  return Icons__Cannon;
}





//==== 00635600 GetInternalAmmo_00635600 ====

/* public: virtual int __thiscall ConventionalGunModule__GetInternalAmmo(void)const  */

int __thiscall ConventionalGunModule__GetInternalAmmo(ConventionalGunModule *this)

{
  if ((char)this[1].ConventionalGunModuleMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 !=
      '\0') {
    return this[1]._pad_0x10_4;
  }
  return 0;
}

//==== 00635620 GetMaxDeviationAngle_radians_00635620 ====


/* public: virtual double __thiscall ConventionalGunModule__GetMaxDeviationAngle_radians(void)const
    */

double __thiscall ConventionalGunModule__GetMaxDeviationAngle_radians(ConventionalGunModule *this)

{
  double dVar1;
  
  if ((char)((this->BarrelModel).Pointer != '\0')){
    if ((char)((this->BarrelModel).Pointer == '\0')){
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar1 = TurretSubModule__GetMaxDeviationAngle_radians
                      ((TurretSubModule *)&(this->Turret).Data.field4_0x4);
    return dVar1;
  }
  return 0.0;
}





//==== 00635680 GetMinimumOverheatTime_s_00635680 ====

/* public: virtual double __thiscall ConventionalGunModule__GetMinimumOverheatTime_s(void)const  */

double __thiscall ConventionalGunModule__GetMinimumOverheatTime_s(ConventionalGunModule *this)

{
  double dVar1;
  float10 fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar6 = Material__GetAdiabaticFlameTemperature_K((this->Projectile).Tracer);
  dVar3 = (this->Projectile).CachedPeakPressure_Pa;
  libm_sse2_pow_precise(0.0,0.0);
  dVar1 = *(double *)&this->BarrelProperties;
  dVar4 = (this->Projectile).CachedPeakPressure_Pa;
  libm_sse2_pow_precise(0.0,0.0);
  dVar5 = *(double *)&(this->Projectile).CachedMassStartsOutBeforeBarrel;
  libm_sse2_pow_precise(0.0,0.0);
  dVar7 = BallisticTubeSubModule__GetBarrelMass_kg
                    ((BallisticTubeSubModule *)&(this->Barrel).Thickness_m);
  dVar7 = Material__GetEnergyBudgetRemaining_J
                    (*(Material **)&(this->Barrel).CachedBreechThickness_m,2.7,dVar7);
  fVar2 = (float10)(**(code **)(this->_pad_0x0_0 + 0x1b8))();
  return (double)(fVar2 * (float10)(dVar7 / ((dVar3 * 10453.1 * dVar1 * dVar6) /
                                            ((dVar4 * 4119.47) / dVar5 + 1.0))));
}

//==== 006357f0 GetPayload_006357f0 ====


/* public: virtual class CraftBlueprint * __thiscall ConventionalGunModule__GetPayload(void)const
    */

CraftBlueprint * __thiscall ConventionalGunModule__GetPayload(ConventionalGunModule *this)

{
  return (CraftBlueprint *)((*(undefined4 *)((char *)&((this->Loader)) + 0xc)));
}





//==== 006358d0 GetHeatGenerated_W_Clear ====


/* public: void __thiscall LaserModule__GetHeatGenerated_W_Clear(void)const  */

void __thiscall LaserModule__GetHeatGenerated_W_Clear(LaserModule *this)

{
  (this->GetHeatingRate_W_MemoizedValue).IsValidData = false;
  (this->GetHeatingRate_W_MemoizedValue).Data = 0.0;
  return;
}





//==== 00635c30 GetPointerPropertyChoices_00635c30 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   SolidPropellantSubModule__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

ClassMember * 
SolidPropellantSubModule__GetPointerPropertyChoices
          (SolidPropellantSubModule *this,ClassMember *param_1,
          SerializationManagerInterface *param_2)

{
  char *pcVar1;
  SerializationManagerInterface SVar2;
  int in_stack_0000000c;
  
  if (*(int *)&param_2[1] < 1) {
    SVar2 = *(SerializationManagerInterface *)(uintptr_t)*(uint32_t *)&cde_l2_0b2b1c9f_NullString;
  }
  else {
    SVar2 = *param_2;
  }
  for (pcVar1 = "Composition"; (pcVar1[(int)(*(int *)&SVar2 + -0x91fc04)] != '\0' || (*pcVar1 != '\0'));
      pcVar1 = pcVar1 + 1) {
    if (pcVar1[(int)(*(int *)&SVar2 + -0x91fc04)] != *pcVar1) {
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





//==== 00635cb0 GetPressureChartXRanges ====


/* public: struct util__Range_L_double_G_ 
   ConventionalGunModule__GetPressureChartXRanges(void)const  */

Range_L_double_G_ * 
ConventionalGunModule__GetPressureChartXRanges
          (ConventionalGunModule *this,Range_L_double_G_ *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = *(double *)&this->BarrelProperties;
  __return_storage_ptr__->Lower = 0.0;
  __return_storage_ptr__->Upper = dVar1;
  if (dVar1 < 0.0) {
    __return_storage_ptr__->Lower = dVar1;
    __return_storage_ptr__->Upper = 0.0;
  }
  return __return_storage_ptr__;
}





//==== 00635ce0 GetPressureChartYRanges ====


/* public: struct util__Range_L_double_G_ 
   ConventionalGunModule__GetPressureChartYRanges(void)const  */

Range_L_double_G_ * 
ConventionalGunModule__GetPressureChartYRanges
          (ConventionalGunModule *this,Range_L_double_G_ *__return_storage_ptr__)

{
  double dVar1;
  
  GetPeakPressure_Pa_Memoize(this);
  if ((char)((this->GetGunFlashColor_MemoizedValue).Data.Z == '\0')){
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar1 = *(double *)&(this->GetGunFlashColor_MemoizedValue).Data / 1000000.0;
  __return_storage_ptr__->Lower = 0.0;
  __return_storage_ptr__->Upper = dVar1;
  if (dVar1 < 0.0) {
    __return_storage_ptr__->Lower = dVar1;
    __return_storage_ptr__->Upper = 0.0;
  }
  return __return_storage_ptr__;
}





//==== 00635d50 GetProjectileMinRadius_m_00635d50 ====


/* public: virtual double __thiscall ConventionalGunModule__GetProjectileMinRadius_m(void)const  */

double __thiscall ConventionalGunModule__GetProjectileMinRadius_m(ConventionalGunModule *this)

{
  CraftBlueprint *this_00;
  
  this_00 = *(CraftBlueprint * *)&(*(undefined4 *)((char *)&((this->Loader)) + 0xc));
  if (this_00 != (CraftBlueprint *)0x0) {
    CraftBlueprint__GetRadius_km_Memoize(this_00);
    if (*(char *)((this_00->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 6) == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    return (this_00->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data[5] * 1000.0;
  }
  return (this->Projectile).CachedPeakPressure_Pa;
}





//==== 00635d60 GetReflectionDependencies_00635d60 ====


/* public: virtual class util__Darray_L_classutil__Reflectable_P_G_ __thiscall
   ConventionalGunModule__GetReflectionDependencies(void)const  */

Darray_L_class_util__Reflectable_P_G_ * __thiscall
ConventionalGunModule__GetReflectionDependencies(ConventionalGunModule *this)

{
  undefined8 stack0x00000004;
  int iVar1;
  Darray_L_class_util__Reflectable_P_G_ *this_00;
  bool bVar2;
  Darray_L_class_util__Reflectable_P_G_ *in_stack_00000004;
  
  this_00 = in_stack_00000004;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = (undefined **)(&vftable_6);
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  iVar1 = *(int *)&(*(undefined4 *)((char *)&((this->Loader)) + 0xc));
  if (iVar1 != 0) {
    in_stack_00000004 = (Darray_L_class_util__Reflectable_P_G_ *)0x1;
    util__Darray_class_util__Reflectable____SetSize(this_00,(int *)&stack0x00000004);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)this_00,0);
    if (bVar2) {
      *(int *)(*(int *)(this_00 + 4) + -4 + *(int *)(this_00 + 8) * 4) = iVar1;
    }
  }
  return this_00;
}





//==== 00635dd0 GetReflectionInfo_00635dd0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   BallisticTubeSubModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall
BallisticTubeSubModule__GetReflectionInfo(BallisticTubeSubModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_59bfc237__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_59bfc237__thread_safe_static_guard_0__);
    if ( cde_l2_59bfc237__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_7ac2a776_ReflectionInfo) = &vftable_289;
      _Init_thread_footer(& cde_l2_59bfc237__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_7ac2a776_ReflectionInfo;
}





//==== 00635de0 GetReflectionInfo_00635de0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   ConventionalGunModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall
ConventionalGunModule__GetReflectionInfo(ConventionalGunModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_0791ae55__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_0791ae55__thread_safe_static_guard_0__);
    if ( cde_l2_0791ae55__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_e4c3fa45_ReflectionInfo) = &vftable_291;
      _Init_thread_footer(& cde_l2_0791ae55__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_e4c3fa45_ReflectionInfo;
}





//==== 00635df0 GetReflectionInfo_00635df0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   SolidPropellantSubModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall
SolidPropellantSubModule__GetReflectionInfo(SolidPropellantSubModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_44fcb259__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_44fcb259__thread_safe_static_guard_0__);
    if ( cde_l2_44fcb259__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_ed429763_ReflectionInfo) = &vftable_290;
      _Init_thread_footer(& cde_l2_44fcb259__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_ed429763_ReflectionInfo;
}





//==== 00635e00 GetReloadPower_W_00635e00 ====


/* public: virtual double __thiscall ConventionalGunModule__GetReloadPower_W(void)const  */

double __thiscall ConventionalGunModule__GetReloadPower_W(ConventionalGunModule *this)

{
  return (double)((this->Turret).Data.field2_0x2);
}





//==== 00635e10 GetReloadTime_s_00635e10 ====


/* public: virtual double __thiscall ConventionalGunModule__GetReloadTime_s(void)const  */

double __thiscall ConventionalGunModule__GetReloadTime_s(ConventionalGunModule *this)

{
  double dVar1;
  
  dVar1 = *(double *)&(this->Turret).Data.field0_0x0;
  dVar1 = dVar1 * dVar1;
  dVar1 = ((dVar1 + dVar1) * *(double *)&(this->Turret).Data.field3_0x3) /
          (*(double *)&(this->Turret).Data.field2_0x2 * 0.85);
  libm_sse2_pow_precise(0.0,0.0);
  return dVar1 * 10.0;
}





//==== 00635e20 GetShortName_00635e20 ====


/* public: virtual class util__Str_L_char_G_ __thiscall ConventionalGunModule__GetShortName(void)const
    */

Str_L_char_G_ * __thiscall
ConventionalGunModule__GetShortName(ConventionalGunModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  LocStr *this_00;
  Str_L_char_G_ *pSVar1;
  void *apvStack_34 [3];
  void *pvStack_28;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
  util__Str_char___Str_char(&SStack_1c,"Weapon Cannon");
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_34,&SStack_1c,&SStack_10);
  pSVar1 = util__LocStr__operator__o3(this_00);
  MassProjectileSubModule__GetShortName
            ((MassProjectileSubModule *)&(this->Projectile).CachedPropellantComposition,
             __return_storage_ptr__,pSVar1);
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





//==== 00635ee0 GetShotCreationOffset_m_00635ee0 ====


/* public: virtual double __thiscall ConventionalGunModule__GetShotCreationOffset_m(void)const  */

double __thiscall ConventionalGunModule__GetShotCreationOffset_m(ConventionalGunModule *this)

{
  int iVar1;
  code *pcVar2;
  float10 fVar3;
  double dVar4;
  double dVar5;
  
  if ((char)((this->BarrelModel).Pointer == '\0')){
    dVar5 = 0.0;
  }
  else {
    dVar5 = TurretSubModule__GetShotCreationOffset_m
                      ((TurretSubModule *)&(this->Turret).Data.field4_0x4);
  }
  dVar4 = 0.0;
  if ((this->Turret).Data.field1_0x1 != '\0') {
    return dVar5 + 0.0;
  }
  iVar1 = *(int *)&(this->BarrelProperties).CachedBoreRadius_m;
  if ((iVar1 != 0) &&
     (pcVar2 = *(code **)((int)&(this->BarrelProperties).CachedBoreRadius_m + 4),
     pcVar2 != (code *)0x0)) {
    fVar3 = (float10)(*pcVar2)(iVar1);
    dVar4 = (double)fVar3;
  }
  return *(double *)&this->BarrelProperties + dVar4 + dVar5;
}





//==== 00635f70 GetStatuses_00635f70 ====

/* public: virtual class DesignStatusBuffer  ConventionalGunModule__GetStatuses(class
   DataParser *)const  */

DesignStatusBuffer * 
ConventionalGunModule__GetStatuses
          (ConventionalGunModule *this,DesignStatusBuffer *__return_storage_ptr__,
          DataParser *param_1)

{
  undefined8 stack0xffffff7c;
  undefined8 stack0xffffff80;
  double *pdVar1;
  Str_L_char_G_ SVar2;
  Str_L_char_G_ SVar3;
  bool bVar4;
  Str_L_char_G_ *pSVar5;
  Str_L_char_G_ *pSVar6;
  double dVar7;
  char *pcVar8;
  Str_L_char_G_ *pSVar9;
  Str_L_char_G_ *pSVar10;
  Str_L_char_G_ *pSVar11;
  ModulePlacer *pMVar12;
  Str_L_char_G_ local_64;
  Str_L_char_G_ local_58;
  Str_L_char_G_ local_4c;
  Str_L_char_G_ local_40;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  undefined1 local_1c [4];
  undefined8 local_18;
  undefined1 local_10 [4];
  undefined8 local_c;
  
  __return_storage_ptr__->DataManager = (DataParser *)0x0;
  (__return_storage_ptr__->Messages)._pad_0x0_0 = 0;
  (__return_storage_ptr__->Messages).Data = (DesignStatusMessage *)0x0;
  (__return_storage_ptr__->Messages).Size = 0;
  *(undefined8 *)&(__return_storage_ptr__->Messages).Capacity = 0;
  WeaponModule__GetStatuses((WeaponModule *)this,__return_storage_ptr__,param_1);
  util__Str_char___Str_char(&local_40,"ConventionalGunGrainsTooLarge");
  dVar7 = (this->Projectile).CachedBarrelLength_m;
  pdVar1 = &(this->Projectile).CachedPeakPressure_Pa;
  local_28.Data = (char *)0x0;
  local_28.Capacity = 0;
  local_28.Length = 0;
  *(uint32_t *)&local_10 = (uint32_t)0x0;
  (*(uint32_t*)&(local_c)) = 0;
  (*(uint32_t*)((char*)&(local_c)+4)) = 0;
  *(uint32_t *)&local_1c = (uint32_t)0x0;
  (*(uint32_t*)&(local_18)) = 0;
  (*(uint32_t*)((char*)&(local_18)+4)) = 0;
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,*pdVar1 <= dVar7 && dVar7 != *pdVar1,&local_40,
             (Str_L_char_G_ *)local_1c,(Str_L_char_G_ *)local_10,&local_28,(ModulePlacer *)0x0);
  if (local_1c != (uint32_t)0x0) {
    port_op_delete((void *)local_1c);
    *(uint32_t *)&local_1c = (uint32_t)0x0;
  }
  if (local_10 != (uint32_t)0x0) {
    port_op_delete((void *)local_10);
    *(uint32_t *)&local_10 = (uint32_t)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_40.Data != (char *)0x0) {
    port_op_delete(local_40.Data);
  }
  util__Str_char___Str_char(&local_40,"ConventionalGunPropellantStillBurning");
  pMVar12 = (ModulePlacer *)0x0;
  pSVar11 = (Str_L_char_G_ *)local_10;
  *(uint32_t *)&local_10 = (uint32_t)0x0;
  pSVar10 = (Str_L_char_G_ *)local_1c;
  pSVar6 = &local_28;
  (*(uint32_t*)&(local_c)) = 0;
  (*(uint32_t*)((char*)&(local_c)+4)) = 0;
  pSVar9 = &local_40;
  *(uint32_t *)&local_1c = (uint32_t)0x0;
  (*(uint32_t*)&(local_18)) = 0;
  (*(uint32_t*)((char*)&(local_18)+4)) = 0;
  local_28.Data = (char *)0x0;
  local_28.Capacity = 0;
  local_28.Length = 0;
  bVar4 = BurnsAllPropellant(this);
  DesignStatusBuffer__CheckWarning
            (__return_storage_ptr__,!bVar4,pSVar9,pSVar6,pSVar10,pSVar11,pMVar12);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_1c != (uint32_t)0x0) {
    port_op_delete((void *)local_1c);
    *(uint32_t *)&local_1c = (uint32_t)0x0;
  }
  if (local_10 != (uint32_t)0x0) {
    port_op_delete((void *)local_10);
    *(uint32_t *)&local_10 = (uint32_t)0x0;
  }
  if (local_40.Data != (char *)0x0) {
    port_op_delete(local_40.Data);
  }
  util__Str_char___Str_char(&local_64,"GetPeakGasExpansionStress_Pa()");
  util__Str_char___Str_char(&local_40,"Barrel.Composition->GetYieldStrength_Pa()");
  util__Str_char___Str_char(&local_34,"ConventionalGunGasRupture");
  pMVar12 = (ModulePlacer *)0x0;
  pSVar11 = &local_28;
  local_28.Data = (char *)0x0;
  local_28.Capacity = 0;
  local_28.Length = 0;
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff80,&local_64);
  dVar7 = GetPeakGasExpansionStress_Pa(this);
  pcVar8 = (char *)((ulonglong)dVar7 >> 0x20);
  SVar3.Capacity = (int)pSVar10;
  SVar3.Data = (char *)pSVar6;
  SVar3.Length = (int)pSVar11;
  pSVar5 = Print(&local_58,(double)CONCAT44(pSVar9,pcVar8),SVar3);
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff7c,&local_40);
  dVar7 = Material__GetYieldStrength_Pa((Material *)&(this->Barrel).CachedBreechThickness_m);
  SVar2.Capacity = (int)pSVar6;
  SVar2.Data = (char *)pSVar9;
  SVar2.Length = (int)pSVar5;
  pSVar6 = Print(&local_4c,(double)CONCAT44(pcVar8,(int)((ulonglong)dVar7 >> 0x20)),SVar2);
  pSVar10 = &local_34;
  local_18 = Material__GetYieldStrength_Pa(*(Material **)&(this->Barrel).CachedBreechThickness_m);
  local_c = GetPeakGasExpansionStress_Pa(this);
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,local_18 < local_c,pSVar10,pSVar6,pSVar5,pSVar11,pMVar12);
  if (local_4c.Data != (char *)0x0) {
    port_op_delete(local_4c.Data);
    local_4c.Data = (char *)0x0;
  }
  if (local_58.Data != (char *)0x0) {
    port_op_delete(local_58.Data);
    local_58.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_40.Data != (char *)0x0) {
    port_op_delete(local_40.Data);
    local_40.Data = (char *)0x0;
  }
  if (local_64.Data != (char *)0x0) {
    port_op_delete(local_64.Data);
  }
  return __return_storage_ptr__;
}

//==== 00636290 GetTotalBarrelRadius_m ====


/* public: double __thiscall ConventionalGunModule__GetTotalBarrelRadius_m(void)const  */

double __thiscall ConventionalGunModule__GetTotalBarrelRadius_m(ConventionalGunModule *this)

{
  return *(double *)&(this->BarrelProperties).CachedPeakTemperatureJump_K.IsValidData +
         (this->BarrelProperties).CachedPeakPressure_Pa;
}





//==== 006362a0 GetTurningAngularVelocity_radians__s_006362a0 ====


/* public: virtual double __thiscall
   ConventionalGunModule__GetTurningAngularVelocity_radians__s(void)const  */

double __thiscall
ConventionalGunModule__GetTurningAngularVelocity_radians__s(ConventionalGunModule *this)

{
  double dVar1;
  
  if ((char)((this->BarrelModel).Pointer != '\0')){
    if ((char)((this->BarrelModel).Pointer == '\0')){
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar1 = TurretSubModule__GetRotationalSpeed_radians__s
                      ((TurretSubModule *)&(this->Turret).Data.field4_0x4);
    return dVar1;
  }
  return 0.0;
}





//==== 00636300 GetTurningPowerDrain_W_00636300 ====


/* public: virtual double __thiscall ConventionalGunModule__GetTurningPowerDrain_W(void)const  */

double __thiscall ConventionalGunModule__GetTurningPowerDrain_W(ConventionalGunModule *this)

{
  double dVar1;
  
  if ((char)((this->BarrelModel).Pointer != '\0')){
    if ((char)((this->BarrelModel).Pointer == '\0')){
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar1 = TurretSubModule__GetPowerConsumption_W
                      ((TurretSubModule *)&(this->Turret).Data.field4_0x4);
    return dVar1;
  }
  return 0.0;
}





//==== 006369b0 Render_006369b0 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void  ModuleDiagram_L_classConventionalGunModule_G___Render(void)const  */

void __thiscall
ModuleDiagram_class_ConventionalGunModule___Render(ModuleDiagram_L_class_ConventionalGunModule_G_ *this)

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
  ConventionalGunModule__RenderDiagram
            (*(ConventionalGunModule **)(this + 0x168),pMVar1,*(Vec2_L_int_G_ *)VVar3.X);
  Graphics__ShaderStack___ShaderStack(&SStack_9);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00636ae0 Render_00636ae0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall ConventionalGunModule__Render(struct util__Vec3_L_double_G_,double,bool)const
    */

void __thiscall
ConventionalGunModule__Render
          (ConventionalGunModule *this,Vec4_L_double_G_ param_1,double param_2,bool param_3)

{
  undefined8 stack0xfffffffc;
  ReferenceController *pRVar1;
  Vec4_L_double_G_ VVar2;
  Vec4_L_double_G_ VVar3;
  Quaternion_L_double_G_ QVar4;
  Vec4_L_double_G_ VVar5;
  Vec3_L_double_G_ VVar6;
  bool bVar7;
  Vec3_L_double_G_ *pVVar8;
  int iVar9;
  Vec2_L_double_G_ *pVVar10;
  int iVar11;
  float10 fVar12;
  double dVar13;
  Quaternion_L_double_G_ local_4c;
  undefined1 local_2c [16];
  double local_1c;
  double local_14;
  TransformStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((*(int *)&this[1].GetCentralBallisticParameter_MemoizedValue.Data != 0) &&
     (pRVar1 = *(ReferenceController **)
                ((int)&this[1].GetCentralBallisticParameter_MemoizedValue.Data + 4),
     pRVar1 != (ReferenceController *)0x0)) {
    bVar7 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (bVar7) {
      pRVar1 = *(ReferenceController **)
                ((int)&this[1].GetCentralBallisticParameter_MemoizedValue.Data + 4);
      if (pRVar1 != (ReferenceController *)0x0) {
        bVar7 = util__ReferenceController__IsDataStillValid(pRVar1);
        if (!bVar7) {
          *(undefined4 *)&this[1].GetCentralBallisticParameter_MemoizedValue.Data = 0;
        }
      }
      GameModel__Render(*(GameModel **)&this[1].GetCentralBallisticParameter_MemoizedValue.Data,0.0,
                        0.0,false);
    }
  }
  if ((char)((this->BarrelModel).Pointer != '\0')){
    pVVar8 = WeaponCompartment__GetDefaultTargetDirection((Vec3_L_double_G_ *)local_2c);
    VVar2.W = (int)((ulonglong)pVVar8->Z >> 0x20);
    (*(uint32_t *)((char *)&(VVar2) + 0)) = (uint32_t)(uintptr_t)(*(undefined1 (*) [20])pVVar8);
    TurretSubModule__RenderExtruderModel
              ((TurretSubModule *)&(this->Turret).Data.field4_0x4,VVar2,param_1,param_3,false);
  }
  fVar12 = (float10)(**(code **)(this->_pad_0x0_0 + 0x1b0))();
  *(uint64_t *)&local_1c = (double)(fVar12 / (float10)1000.0);
  VVar5.Z = SUB84(local_1c,0);
  VVar5.X = 0.0;
  VVar5.Y = 0.0;
  VVar5.W = (int)((ulonglong)local_1c >> 0x20);
  Graphics__Translate(VVar5);
  pVVar8 = WeaponCompartment__GetDefaultTargetDirection((Vec3_L_double_G_ *)local_2c);
  VVar3.W = (int)((ulonglong)pVVar8->Z >> 0x20);
  (*(uint32_t *)((char *)&(VVar3) + 0)) = (uint32_t)(uintptr_t)(*(undefined1 (*) [20])pVVar8);
  util__Quaternion_double___Quaternion_double(&local_4c,VVar3,param_1);
  QVar4.Y = local_4c.Y;
  QVar4.X = local_4c.X;
  QVar4.Y = local_4c.Y;
  QVar4.Z = local_4c.Z;
  QVar4.Z = local_4c.Z;
  QVar4.W = local_4c.W;
  QVar4.W = local_4c.W;
  (*(uint32_t *)((char *)&(QVar4.W) + 4)) = (*(uint32_t *)((char *)&(local_4c.W) + 4));
  Graphics__Rotate(QVar4);
  if ((*(int *)&this[1].GetCentralBallisticParameter_MemoizedValue.IsValidData != 0) &&
     (pRVar1 = *(ReferenceController **)
                &(*(undefined1 *)((char *)&(this[1].GetCentralBallisticParameter_MemoizedValue) + 0xc)),
     pRVar1 != (ReferenceController *)0x0)) {
    bVar7 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (bVar7) {
      pRVar1 = *(ReferenceController **)
                &(*(undefined1 *)((char *)&(this[1].GetCentralBallisticParameter_MemoizedValue) + 0xc));
      if (pRVar1 != (ReferenceController *)0x0) {
        bVar7 = util__ReferenceController__IsDataStillValid(pRVar1);
        if (!bVar7) {
          *(undefined4 *)&this[1].GetCentralBallisticParameter_MemoizedValue.IsValidData = 0;
        }
      }
      GameModel__Render(*(GameModel **)
                         &this[1].GetCentralBallisticParameter_MemoizedValue.IsValidData,0.0,0.0,
                        param_3);
    }
  }
  iVar11 = 0;
  while( true ) {
    if ((char)((this->BarrelModel).Pointer == '\0')){
      iVar9 = 1;
    }
    else {
      iVar9 = *(int *)&(this->Turret).Data.field0_0x0;
    }
    if (iVar9 <= iVar11) break;
    Graphics__TransformStack__TransformStack(&local_9,Style__Default);
    local_14 = BarrelArmorSubModule__GetArmorRadius_m
                         ((BarrelArmorSubModule *)&(this->BarrelProperties).CachedSize_m.Height);
    if ((char)((this->BarrelModel).Pointer == '\0')){
      iVar9 = 1;
    }
    else {
      iVar9 = *(int *)&(this->Turret).Data.field0_0x0;
    }
    pVVar10 = util__GetCirclePackingInACircleOffset_double
                        ((Vec2_L_double_G_ *)(local_2c + 8),iVar9,iVar11);
    dVar13 = (pVVar10->Y * local_14) / 1000.0;
    VVar6.Y = SUB84(dVar13,0);
    VVar6.X = (pVVar10->X * local_14) / 1000.0;
    VVar6.Z = (int)((ulonglong)dVar13 >> 0x20);
    VVar6.Z = 0.0;
    Graphics__Translate(VVar6);
    pRVar1 = *(ReferenceController **)
              ((int)&this[1].GetChargeBurnoutLength_m_MemoizedValue.Data + 4);
    if (pRVar1 != (ReferenceController *)0x0) {
      bVar7 = util__ReferenceController__IsDataStillValid(pRVar1);
      if (!bVar7) {
        *(undefined4 *)&this[1].GetChargeBurnoutLength_m_MemoizedValue.Data = 0;
      }
    }
    GameModel__Render(*(GameModel **)&this[1].GetChargeBurnoutLength_m_MemoizedValue.Data,param_2,
                      0.0,true);
    Graphics__TransformStack___TransformStack(&local_9);
    iVar11 = iVar11 + 1;
  }
  return;
}

//==== 006379e0 RenderInitialState_006379e0 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void  ConventionalGunModule__RenderInitialState(double,class
   CameraManager *,class util__Darray_L_classutil__SharedPtr_L_classArmorTextureHandler_G__G_ const
   &,double,struct util__Vec3_L_double_G_)const  */

void 
ConventionalGunModule__RenderInitialState
          (ConventionalGunModule *this,double param_1,CameraManager *param_2,
          Darray_L_class_util__SharedPtr_L_class_ArmorTextureHandler_G___G_ *param_3,double param_4,
          Vec3_L_double_G_ param_5)

{
  Vec4_L_double_G_ VVar1;
  int iVar2;
  double dVar3;
  double dStack_c;
  
  dStack_c = param_1 / 5.0;
  dVar3 = util__Floor(&dStack_c);
  dVar3 = param_1 - dVar3 * 5.0;
  if ((5.0 <= dVar3) || ((dVar3 < 0.0 && (dVar3 = dVar3 + 5.0, NAN(dVar3) != (dVar3 == 5.0))))) {
    dVar3 = 0.0;
  }
  param_1 = (dVar3 * 6.283185307179586) / 5.0;
  dVar3 = util__Cos(&param_1);
  param_1 = (dVar3 + 1.0) * 0.5;
  dStack_c = Material__GetSafeUseTemperature_K
                       ((Material *)&(this->Barrel).CachedBreechThickness_m);
  if (param_4 <= 0.0) {
    param_4 = (1.0 - param_1) * 2.7 + dStack_c * param_1;
  }
  iVar2 = (**(code **)(*(int *)param_3 + 0xc))();
  VVar1.Y = param_5.Y;
  VVar1.X = param_5.X;
  VVar1.Y = param_5.Y;
  VVar1.Z = param_5.Z;
  VVar1.Z = param_5.Z;
  Render(this,VVar1,param_4,0 < iVar2);
  return;
}





//==== 00637b00 RenderInitialStateSimple_00637b00 ====


/* public: virtual void __thiscall ConventionalGunModule__RenderInitialStateSimple(struct
   util__Vec3_L_double_G_)const  */

void __thiscall
ConventionalGunModule__RenderInitialStateSimple(ConventionalGunModule *this,Vec4_L_double_G_ param_1)

{
  RenderSimple(this,param_1,true);
  return;
}





//==== 00637b30 RenderInitialStateTransparent_00637b30 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void  ConventionalGunModule__RenderInitialStateTransparent(double,class
   CameraManager *,struct util__Vec3_L_double_G_)const  */

void 
ConventionalGunModule__RenderInitialStateTransparent
          (ConventionalGunModule *this,double param_1,CameraManager *param_2,Vec3_L_double_G_ param_3)

{
  undefined8 stack0xfffffffc;
  Vec4_L_double_G_ VVar1;
  Vec4_L_double_G_ VVar2;
  Vec4_L_double_G_ VVar3;
  Vec2_L_double_G_ *pVVar4;
  int iVar5;
  float10 fVar6;
  double dVar7;
  Vec2_L_double_G_ local_3c;
  Vec2_L_double_G_ local_2c;
  undefined8 local_1c;
  double local_14;
  TransformStack local_a;
  TransformStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_2c.Y = WeaponModule__GetReloadChargeTime_s((WeaponModule *)this);
  local_2c.Y = local_2c.Y + local_2c.Y;
  if ((char)((this->BarrelModel).Pointer == '\0')){
    iVar5 = 1;
  }
  else {
    iVar5 = *(int *)&(this->Turret).Data.field0_0x0;
  }
  *(uint32_t *)&local_1c = local_2c.Y;
  Interface__GetUITime_s((OptionsSection__Interface *)(param_2->Parent->Managers).Data);
  local_3c.Y = (double)iVar5 * local_1c;
  fVar6 = (float10)__CIfmod();
  *(uint64_t *)&local_14 = (double)fVar6;
  fVar6 = (float10)__CIfmod();
  local_3c.Y = (double)fVar6;
  fVar6 = (float10)(**(code **)(this->_pad_0x0_0 + 0x1b8))();
  local_2c.Y = (double)fVar6;
  local_9 = ({ __typeof__((local_3c.Y < local_2c.Y)) _t_ = (local_3c.Y < local_2c.Y); *(TransformStack *)&_t_; });
  if ((char)((this->BarrelModel).Pointer == '\0')){
    iVar5 = 1;
  }
  else {
    iVar5 = *(int *)&(this->Turret).Data.field0_0x0;
  }
  *(uint32_t *)&local_1c = (double)CONCAT44((int)(local_14 / local_1c) % iVar5,(undefined4)local_1c);
  fVar6 = (float10)(**(code **)(this->_pad_0x0_0 + 0x1ac))();
  local_2c.Y = (double)(fVar6 / (float10)1000.0);
  if (*(char *)&(local_9) != 0) {
    Graphics__TransformStack__TransformStack(&local_a,Style__Default);
    if ((char)((this->BarrelModel).Pointer == '\0')){
      dVar7 = 0.0;
    }
    else {
      dVar7 = TurretSubModule__GetExtruderLength_m
                        ((TurretSubModule *)&(this->Turret).Data.field4_0x4);
      *(uint32_t *)&local_14 = dVar7;
    }
    VVar1.Z = SUB84(dVar7 / 1000.0,0);
    VVar1.X = 0.0;
    VVar1.Y = 0.0;
    VVar1.W = (int)((ulonglong)(dVar7 / 1000.0) >> 0x20);
    Graphics__Translate(VVar1);
    Graphics__TransformStack__TransformStack(&local_9,Style__Default);
    local_14 = BarrelArmorSubModule__GetArmorRadius_m
                         ((BarrelArmorSubModule *)&(this->BarrelProperties).CachedSize_m.Height);
    if ((char)((this->BarrelModel).Pointer == '\0')){
      iVar5 = 1;
    }
    else {
      iVar5 = *(int *)&(this->Turret).Data.field0_0x0;
    }
    pVVar4 = util__GetCirclePackingInACircleOffset_double(&local_3c,iVar5,(*(uint32_t*)((char*)&(local_1c)+4)));
    dVar7 = (pVVar4->Y * local_14) / 1000.0 + 0.0;
    VVar2.Y = SUB84(dVar7,0);
    VVar2.X = (pVVar4->X * local_14) / 1000.0 + 0.0;
    VVar2.Z = (int)((ulonglong)dVar7 >> 0x20);
    VVar2.Z = SUB84(local_2c.Y + 0.0,0);
    VVar2.W = (int)((ulonglong)(local_2c.Y + 0.0) >> 0x20);
    Graphics__Translate(VVar2);
    RenderMuzzleFlash(this);
    Graphics__TransformStack___TransformStack(&local_9);
    Graphics__TransformStack___TransformStack(&local_a);
  }
  Graphics__TransformStack__TransformStack(&local_a,Style__Default);
  local_14 = BarrelArmorSubModule__GetArmorRadius_m
                       ((BarrelArmorSubModule *)&(this->BarrelProperties).CachedSize_m.Height);
  if ((char)((this->BarrelModel).Pointer == '\0')){
    iVar5 = 1;
  }
  else {
    iVar5 = *(int *)&(this->Turret).Data.field0_0x0;
  }
  pVVar4 = util__GetCirclePackingInACircleOffset_double(&local_2c,iVar5,(*(uint32_t*)((char*)&(local_1c)+4)));
  dVar7 = (pVVar4->Y * local_14) / 1000.0;
  VVar3.Y = SUB84(dVar7,0);
  VVar3.X = (pVVar4->X * local_14) / 1000.0;
  VVar3.Z = (int)((ulonglong)dVar7 >> 0x20);
  VVar3.Z = 0.0;
  Graphics__Translate(VVar3);
  MassProjectileSubModule__RenderForViewing
            ((MassProjectileSubModule *)&(this->Projectile).CachedPropellantComposition,param_1,
             param_2,(WeaponModule *)this);
  Graphics__TransformStack___TransformStack(&local_a);
  return;
}

//==== 00637db0 RenderMuzzleFlash_00637db0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall ConventionalGunModule__RenderMuzzleFlash(void)const  */

void __thiscall ConventionalGunModule__RenderMuzzleFlash(ConventionalGunModule *this)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  int iVar2;
  double dVar3;
  bool bVar4;
  ExhaustShader *pEVar5;
  float10 fVar6;
  double dVar7;
  Darray_L_MaterialConstituent_G_ local_9c;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int local_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  undefined1 local_6c;
  undefined1 local_64;
  Darray_L_MaterialConstituent_G_ local_5c;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined1 local_2c;
  Darray_L_MaterialConstituent_G_ local_24;
  undefined8 local_14;
  ShaderStack local_b;
  BlendStack local_a;
  CullStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((this[1].ConventionalGunModuleMemoizationHandlerInstance.ResetFunctions.Size != 0) &&
     (this[1].ConventionalGunModuleMemoizationHandlerInstance.ResetFunctions.Capacity != 0)) {
    pEVar5 = ExhaustShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_b,(Shader *)pEVar5);
    Graphics__BlendStack__BlendStack(&local_a,BlendMode__Sum);
    Graphics__CullStack__CullStack(&local_9,CullMode__Disabled);
    fVar6 = (float10)(**(code **)(this->_pad_0x0_0 + 0x154))();
    *(uint64_t *)&local_14 = (double)(fVar6 * (float10)100.0);
    pEVar5 = ExhaustShader__GetStatic();
    (**(code **)(pEVar5->_pad_0x0_0 + 0x54))(&local_14);
    if ((char)((this->Barrel).Length_m == '\0')){
      iVar1 = *(int *)&(this->GetChargeBurnoutLength_m_MemoizedValue).IsValidData;
      *(uint32_t *)&local_14 = (double)CONCAT44(iVar1 + 1,(undefined4)local_14);
      util__Darray_L_util__tuple2_L_Order__Type_Cint_G___G___SetSize
                ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)
                 &this->GetChargeBurnoutLength_m_MemoizedValue,(int *)((int)&local_14 + 4));
      bVar4 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                        ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                         &this->GetChargeBurnoutLength_m_MemoizedValue,iVar1);
      if (bVar4) {
        iVar1 = *(int *)((int)&(this->GetChargeBurnoutLength_m_MemoizedValue).Data + 4);
        iVar2 = *(int *)&(this->GetChargeBurnoutLength_m_MemoizedValue).IsValidData;
        *(code **)(iVar1 + -8 + iVar2 * 8) = (long long int (*)())(GetGasExpansionPlume_Clear);
        *(undefined4 *)(iVar1 + -4 + iVar2 * 8) = 0;
      }
      fVar6 = (float10)(**(code **)(this->_pad_0x0_0 + 0x154))();
      *(uint64_t *)&local_14 = (double)fVar6;
      dVar3 = (local_14 * 1000.0 * *(double *)&(this->Projectile).CachedMassStartsOutBeforeBarrel) /
              *(double *)&this->BarrelProperties;
      dVar7 = Material__GetAdiabaticFlameTemperature_K((this->Projectile).Tracer);
      Material__GetDecompositionProductsByMassPercent((this->Projectile).Tracer);
      *(uint32_t *)&local_14 = (this->Projectile).CachedPeakPressure_Pa;
      fVar6 = (float10)(**(code **)(this->_pad_0x0_0 + 0x154))();
      util__Darray_L_MaterialConstituent_G___Darray_L_MaterialConstituent_G_
                (&local_5c,(Darray_L_struct_MaterialConstituent_G_ *)&local_24);
      local_4c = local_14;
      *(uint32_t *)&local_2c = 1;
      local_24._pad_0x0_0 = (int)&vftable_15;
      uStack_44 = dVar7;
      *(uint64_t *)&local_3c = (double)fVar6;
      uStack_34 = dVar3;
      if (local_24.Data != (MaterialConstituent *)0x0) {
        port_op_delete(local_24.Data);
      }
      local_24.Data = (MaterialConstituent *)0x0;
      local_24._pad_0x0_0 = (int)&vftable;
      util__Darray_L_MaterialConstituent_G___Darray_L_MaterialConstituent_G_
                (&local_9c,(Darray_L_struct_MaterialConstituent_G_ *)&local_5c);
      memcpy(&local_6c, &local_2c, 16);
      local_8c = (undefined4)local_4c;
      uStack_88 = (*(uint32_t*)((char*)&(local_4c)+4));
      uStack_84 = (undefined4)uStack_44;
      uStack_80 = (*(uint32_t*)((char*)&(uStack_44)+4));
      local_64 = 1;
      local_7c = (int)local_3c;
      iStack_78 = (*(uint32_t*)((char*)&(local_3c)+4));
      iStack_74 = (int)uStack_34;
      iStack_70 = (*(uint32_t*)((char*)&(uStack_34)+4));
      util__Darray_L_MaterialConstituent_G___op_assign
                ((Darray_L_MaterialConstituent_G_ *)
                 &(this->GetGasExpansionPlume_MemoizedValue).Data.ExhaustVelocity_km__s,
                 (Darray_L_struct_MaterialConstituent_G_ *)&local_9c);
      *(undefined1 *)&(this->Barrel).Composition = local_6c;
      *(undefined4 *)&(this->GetGasExpansionPlume_MemoizedValue).Data.DisableShimmer = local_8c;
      *(undefined4 *)&(*(undefined4 *)((char *)&((this->GetGasExpansionPlume_MemoizedValue).Data) + 0x34)) = uStack_88;
      *(undefined4 *)&(this->GetGasExpansionPlume_MemoizedValue).IsValidData = uStack_84;
      *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetGasExpansionPlume_MemoizedValue)) + 0x3c)) = uStack_80;
      local_9c._pad_0x0_0 = (int)&vftable_15;
      (this->Barrel)._pad_0x0_0 = local_7c;
      (this->Barrel)._pad_0x4_1 = iStack_78;
      (this->Barrel)._pad_0x8_2 = iStack_74;
      (this->Barrel)._pad_0xc_3 = iStack_70;
      *(undefined1 *)&(this->Barrel).Length_m = local_64;
      if (local_9c.Data != (MaterialConstituent *)0x0) {
        port_op_delete(local_9c.Data);
      }
      local_9c.Data = (MaterialConstituent *)0x0;
      local_9c._pad_0x0_0 = (int)&vftable;
      local_5c._pad_0x0_0 = (int)&vftable_15;
      if (local_5c.Data != (MaterialConstituent *)0x0) {
        port_op_delete(local_5c.Data);
      }
      local_5c.Data = (MaterialConstituent *)0x0;
      local_5c._pad_0x0_0 = (int)&vftable;
      if ((char)((this->Barrel).Length_m == '\0')){
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
    }
    GasExpansionPlume__GetExhaustPlumeModelRatio
              ((GasExpansionPlume *)
               &(this->GetGasExpansionPlume_MemoizedValue).Data.ExhaustVelocity_km__s,0.0);
    pEVar5 = ExhaustShader__GetStatic();
    (**(code **)(pEVar5->_pad_0x0_0 + 0x5c))();
    GameColorModel__Render
              ((GameColorModel *)
               this[1].ConventionalGunModuleMemoizationHandlerInstance.ResetFunctions.Size);
    CullStack__dtor(&local_9);
    BlendStack__dtor(&local_a);
    Graphics__ShaderStack___ShaderStack(&local_b);
  }
  return;
}

//==== 006380e0 RenderSimple_006380e0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall ConventionalGunModule__RenderSimple(struct util__Vec3_L_double_G_,bool)const
    */

void __thiscall
ConventionalGunModule__RenderSimple(ConventionalGunModule *this,Vec4_L_double_G_ param_1,bool param_2)

{
  undefined8 stack0xfffffffc;
  ReferenceController *pRVar1;
  Vec4_L_double_G_ VVar2;
  Vec4_L_double_G_ VVar3;
  Quaternion_L_double_G_ QVar4;
  Vec4_L_double_G_ VVar5;
  Vec3_L_double_G_ VVar6;
  bool bVar7;
  Vec3_L_double_G_ *pVVar8;
  int iVar9;
  Vec2_L_double_G_ *pVVar10;
  int iVar11;
  float10 fVar12;
  double dVar13;
  Quaternion_L_double_G_ local_4c;
  undefined1 local_2c [16];
  double local_1c;
  double local_14;
  TransformStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((*(int *)&this[1].GetCentralBallisticParameter_MemoizedValue.Data != 0) &&
     (pRVar1 = *(ReferenceController **)
                ((int)&this[1].GetCentralBallisticParameter_MemoizedValue.Data + 4),
     pRVar1 != (ReferenceController *)0x0)) {
    bVar7 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (bVar7) {
      pRVar1 = *(ReferenceController **)
                ((int)&this[1].GetCentralBallisticParameter_MemoizedValue.Data + 4);
      if (pRVar1 != (ReferenceController *)0x0) {
        bVar7 = util__ReferenceController__IsDataStillValid(pRVar1);
        if (!bVar7) {
          *(undefined4 *)&this[1].GetCentralBallisticParameter_MemoizedValue.Data = 0;
        }
      }
      GameModel__RenderSimple
                (*(GameModel **)&this[1].GetCentralBallisticParameter_MemoizedValue.Data);
    }
  }
  if ((char)((this->BarrelModel).Pointer != '\0')){
    pVVar8 = WeaponCompartment__GetDefaultTargetDirection((Vec3_L_double_G_ *)local_2c);
    VVar2.W = (int)((ulonglong)pVVar8->Z >> 0x20);
    (*(uint32_t *)((char *)&(VVar2) + 0)) = (uint32_t)(uintptr_t)(*(undefined1 (*) [20])pVVar8);
    TurretSubModule__RenderExtruderModel
              ((TurretSubModule *)&(this->Turret).Data.field4_0x4,VVar2,param_1,false,true);
  }
  fVar12 = (float10)(**(code **)(this->_pad_0x0_0 + 0x1b0))();
  *(uint64_t *)&local_1c = (double)(fVar12 / (float10)1000.0);
  VVar5.Z = SUB84(local_1c,0);
  VVar5.X = 0.0;
  VVar5.Y = 0.0;
  VVar5.W = (int)((ulonglong)local_1c >> 0x20);
  Graphics__Translate(VVar5);
  pVVar8 = WeaponCompartment__GetDefaultTargetDirection((Vec3_L_double_G_ *)local_2c);
  VVar3.W = (int)((ulonglong)pVVar8->Z >> 0x20);
  (*(uint32_t *)((char *)&(VVar3) + 0)) = (uint32_t)(uintptr_t)(*(undefined1 (*) [20])pVVar8);
  util__Quaternion_double___Quaternion_double(&local_4c,VVar3,param_1);
  QVar4.Y = local_4c.Y;
  QVar4.X = local_4c.X;
  QVar4.Y = local_4c.Y;
  QVar4.Z = local_4c.Z;
  QVar4.Z = local_4c.Z;
  QVar4.W = local_4c.W;
  QVar4.W = local_4c.W;
  (*(uint32_t *)((char *)&(QVar4.W) + 4)) = (*(uint32_t *)((char *)&(local_4c.W) + 4));
  Graphics__Rotate(QVar4);
  if ((char)((this->BarrelModel).Pointer != '\0')){
    pRVar1 = (ReferenceController *)(uintptr_t) (*(undefined1 *)((char *)&(this[1].GetCentralBallisticParameter_MemoizedValue) + 0xc));
    if (pRVar1 != (ReferenceController *)0x0) {
      bVar7 = util__ReferenceController__IsDataStillValid(pRVar1);
      if (!bVar7) {
        *(undefined4 *)&this[1].GetCentralBallisticParameter_MemoizedValue.IsValidData = 0;
      }
    }
    GameModel__RenderSimple
              (*(GameModel **)&this[1].GetCentralBallisticParameter_MemoizedValue.IsValidData);
  }
  if (param_2) {
    iVar11 = 0;
    while( true ) {
      if ((char)((this->BarrelModel).Pointer == '\0')){
        iVar9 = 1;
      }
      else {
        iVar9 = *(int *)&(this->Turret).Data.field0_0x0;
      }
      if (iVar9 <= iVar11) break;
      Graphics__TransformStack__TransformStack(&local_9,Style__Default);
      local_14 = BarrelArmorSubModule__GetArmorRadius_m
                           ((BarrelArmorSubModule *)&(this->BarrelProperties).CachedSize_m.Height);
      if ((char)((this->BarrelModel).Pointer == '\0')){
        iVar9 = 1;
      }
      else {
        iVar9 = *(int *)&(this->Turret).Data.field0_0x0;
      }
      pVVar10 = util__GetCirclePackingInACircleOffset_double
                          ((Vec2_L_double_G_ *)(local_2c + 8),iVar9,iVar11);
      dVar13 = (pVVar10->Y * local_14) / 1000.0;
      VVar6.Y = SUB84(dVar13,0);
      VVar6.X = (pVVar10->X * local_14) / 1000.0;
      VVar6.Z = (int)((ulonglong)dVar13 >> 0x20);
      VVar6.Z = 0.0;
      Graphics__Translate(VVar6);
      pRVar1 = *(ReferenceController **)
                ((int)&this[1].GetChargeBurnoutLength_m_MemoizedValue.Data + 4);
      if (pRVar1 != (ReferenceController *)0x0) {
        bVar7 = util__ReferenceController__IsDataStillValid(pRVar1);
        if (!bVar7) {
          *(undefined4 *)&this[1].GetChargeBurnoutLength_m_MemoizedValue.Data = 0;
        }
      }
      GameModel__RenderSimple(*(GameModel **)&this[1].GetChargeBurnoutLength_m_MemoizedValue.Data);
      Graphics__TransformStack___TransformStack(&local_9);
      iVar11 = iVar11 + 1;
    }
  }
  return;
}

//==== 00638b30 StaticFactory_00638b30 ====

/* public: static class util__Reflectable * __cdecl
   BallisticTubeSubModule__ReflectionInfoStruct_struct_BallisticTubeSubModule___StaticFactory(void)
    */

Reflectable * __cdecl
BallisticTubeSubModule__ReflectionInfoStruct_struct_BallisticTubeSubModule___StaticFactory__o2(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x40));
  if (pRVar1 != (Reflectable *)0x0) {
    memset(pRVar1,0,0x40);
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_292;
    pRVar1[2].Name.Capacity = 0;
    pRVar1[2].Name.Length = 0;
    pRVar1[3]._pad_0x0_0 = 0;
    pRVar1[3].Name.Data = (char *)0x0;
    pRVar1[3].Name.Capacity = 0;
    pRVar1[3].Name.Length = 0;
  }
  return (Reflectable *)0x0;
}

//==== 00638ba0 StaticFactory_00638ba0 ====

/* public: static class util__Reflectable * __cdecl
   SolidPropellantSubModule__ReflectionInfoStruct_struct_SolidPropellantSubModule___StaticFactory(void) */

Reflectable * __cdecl
SolidPropellantSubModule__ReflectionInfoStruct_struct_SolidPropellantSubModule___StaticFactory__o2(void)

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
    pRVar1->_pad_0x0_0 = (int)&vftable_293;
  }
  return (Reflectable *)0x0;
}

//==== 00638be0 StaticFactory_00638be0 ====

/* public: static class util__Reflectable * __cdecl
   ConventionalGunModule__ReflectionInfoStruct_class_ConventionalGunModule___StaticFactory(void) */

Reflectable * __cdecl
ConventionalGunModule__ReflectionInfoStruct_class_ConventionalGunModule___StaticFactory__o2(void)

{
  pmf_27707b45 **pppVar1;
  Module *this;
  
  this = (Module *)(uintptr_t)(port_op_new(0x4a8));
  if (this != (Module *)0x0) {
    memset(this,0,0x4a8);
    Module__Module(this);
    *(undefined1 *)&this[1].GetTotalPowerUsage_W_MemoizedValue.Data = 0;
    pppVar1 = &this[4].ModuleMemoizationHandlerInstance.ResetFunctions.Data;
    *(undefined8 *)&this[1].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    *(undefined4 *)&this[1].GetTotalPowerUsage_W_MemoizedValue.IsValidData = 0;
  *(undefined4 *)((char *)&this[1].GetTotalPowerUsage_W_MemoizedValue + 0xc) = 0;
    this[1].Models._pad_0x0_0 = 0;
    this[1].Models.Data = (SharedPtr_L_GameModel_G_ *)0x0;
    *(undefined ***)&this[1].GetTotalPowerUsage_W_MemoizedValue.IsValidData =
         &vftable_166;
  *(undefined4 *)((char *)&this[1].GetTotalPowerUsage_W_MemoizedValue + 0xc) = 0;
    this[1].Models._pad_0x0_0 = 0;
    this[1].Models.Data = (SharedPtr_L_GameModel_G_ *)0x0;
    this[1].Models.Size = 0;
    this[1].Models.Capacity = 0;
    this[1].UsesCustomName = false;
    this[2]._pad_0x0_0 = 0;
    this[2]._pad_0x4_1 = 0;
    *(undefined1 *)&this[2]._pad_0x8_2 = 0;
    this->_pad_0x0_0 = (int)&vftable_for_EditorReflectable__30;
    *(undefined4 *)&(this->GetTotalPowerUsage_W_MemoizedValue).field_0xc = (undefined4)(uintptr_t)vftable_for_util__RTTIBaseClass__29;
    this[2].ModuleMemoizationHandlerInstance.ResetFunctions.Data = (pmf_27707b45 *)0x0;
    this[2].ModuleMemoizationHandlerInstance.ResetFunctions.Size = 0;
    this[2].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    *(undefined4 *)&this[2].ModuleMemoizationHandlerInstance = 0;
    this[2].ModuleMemoizationHandlerInstance.ResetFunctions.Data =
         (pmf_27707b45 *)&vftable_109;
    this[2].ModuleMemoizationHandlerInstance.ResetFunctions.Size = 0;
    this[2].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    *(undefined4 *)&this[2].ModuleMemoizationHandlerInstance = 0;
    this[2].GetTotalPowerUsage_W_MemoizedValue.Data = 0.0;
    this[2].GetTotalPowerUsage_W_MemoizedValue.IsValidData = false;
    this[2].Models._pad_0x0_0 = 0;
    this[2].Models.Data = (SharedPtr_L_GameModel_G_ *)0x0;
    *(undefined1 *)&this[2].Models.Size = 0;
    this[2].UsesCustomName = false;
    this[2].IsUserCreated = false;
  *(undefined6 *)((char *)&this[2] + 0x4a) = 0;
    *(undefined1 *)&this[3]._pad_0x0_0 = 0;
    this[3]._pad_0x8_2 = 0;
    this[3]._pad_0xc_3 = 0;
    *(undefined1 *)&this[3]._pad_0x10_4 = 0;
    this[3].ModuleMemoizationHandlerInstance.ResetFunctions.Data = (pmf_27707b45 *)0x0;
    this[3].ModuleMemoizationHandlerInstance.ResetFunctions.Size = 0;
    this[3].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    *(undefined4 *)&(this[3].ModuleMemoizationHandlerInstance) = 0;
    *(undefined ***)&this[3].GetTotalPowerUsage_W_MemoizedValue.Data = (undefined **)(&vftable_15);
    *(undefined4 *)((int)&this[3].GetTotalPowerUsage_W_MemoizedValue.Data + 4) = 0;
    *(undefined4 *)&this[3].GetTotalPowerUsage_W_MemoizedValue.IsValidData = 0;
  *(undefined4 *)((char *)&this[3].GetTotalPowerUsage_W_MemoizedValue + 0xc) = 0;
    this[3].Models._pad_0x0_0 = 0;
    this[3].Models.Data = (SharedPtr_L_GameModel_G_ *)0x0;
    this[3].Models.Size = 0;
    this[3].Models.Capacity = 0;
    *(undefined1 *)&this[4]._pad_0x8_2 = 0;
    this[3].UsesCustomName = false;
    this[3].IsUserCreated = false;
  *(undefined2 *)((char *)&this[3] + 0x4a) = 0;
  *(undefined4 *)((char *)&this[3] + 0x4c) = 0;
    this[4]._pad_0x0_0 = 0;
    this[4]._pad_0x4_1 = 0;
    *(undefined1 *)&this[4]._pad_0x10_4 = 0;
    memset(pppVar1,0,0x40);
    this[4].ModuleMemoizationHandlerInstance.ResetFunctions.Size = 0;
    this[4].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    *(undefined4 *)&this[4].ModuleMemoizationHandlerInstance = 0;
    *pppVar1 = (pmf_27707b45 *)&vftable_292;
    this[4].Models.Size = 0;
    this[4].Models.Capacity = 0;
    this[4].UsesCustomName = false;
    this[4].IsUserCreated = false;
  *(undefined2 *)((char *)&this[4] + 0x4a) = 0;
  *(undefined4 *)((char *)&this[4] + 0x4c) = 0;
    this[5]._pad_0x0_0 = 0;
    this[5]._pad_0x4_1 = 0;
    memset(&this[5]._pad_0x8_2,0,0x90);
    this[5]._pad_0xc_3 = 0;
    this[5]._pad_0x10_4 = 0;
    this[5].ModuleMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 = 0;
    this[5]._pad_0x8_2 = (int)&vftable_283;
    this[5].UsesCustomName = false;
    this[5].IsUserCreated = false;
  *(undefined2 *)((char *)&this[5] + 0x4a) = 0;
  *(undefined4 *)((char *)&this[5] + 0x4c) = 0;
    this[5].Models._pad_0x0_0 = 0;
    this[5].Models.Data = (SharedPtr_L_GameModel_G_ *)0x0;
    this[5].Models.Size = 0;
    this[5].Models.Capacity = 0;
    *(undefined1 *)&this[6].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    this[6].ModuleMemoizationHandlerInstance.ResetFunctions.Data = (pmf_27707b45 *)0x0;
    this[6].ModuleMemoizationHandlerInstance.ResetFunctions.Size = 0;
    *(undefined4 *)&this[6].GetTotalPowerUsage_W_MemoizedValue.Data = 0;
    *(undefined4 *)((int)&this[6].GetTotalPowerUsage_W_MemoizedValue.Data + 4) = 0;
    *(undefined4 *)&this[6].GetTotalPowerUsage_W_MemoizedValue.IsValidData = 0;
  *(undefined4 *)((char *)&this[6].GetTotalPowerUsage_W_MemoizedValue + 0xc) = 0;
    this[6].Models.Size = 0;
    this[6].Models.Capacity = 0;
    this[6].UsesCustomName = false;
    this[6].IsUserCreated = false;
  *(undefined2 *)((char *)&this[6] + 0x4a) = 0;
  *(undefined4 *)((char *)&this[6] + 0x4c) = 0;
    this[7]._pad_0x0_0 = 0;
    this[7]._pad_0x4_1 = 0;
    this[7]._pad_0x8_2 = 0;
    this[7]._pad_0xc_3 = 0;
    this[7]._pad_0x10_4 = 0;
    this[7].ModuleMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 = 0;
    this[7].ModuleMemoizationHandlerInstance.ResetFunctions.Data = (pmf_27707b45 *)0x0;
    this[7].ModuleMemoizationHandlerInstance.ResetFunctions.Size = 0;
  *(undefined4 *)((char *)&this[6] + 0x4c) = 0;
    this[7]._pad_0x0_0 = 0;
    this[7]._pad_0x4_1 = 0;
    *(undefined ***)&this[6].UsesCustomName = &vftable_293;
    MassProjectileSubModule__MassProjectileSubModule
              ((MassProjectileSubModule *)
               &this[7].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity);
  *(undefined4 *)((char *)&this[8].GetTotalPowerUsage_W_MemoizedValue + 0xc) = 0;
    this[8].Models._pad_0x0_0 = 0;
    this[8].Models.Data = (SharedPtr_L_GameModel_G_ *)0x0;
    *(undefined ***)&this[8].GetTotalPowerUsage_W_MemoizedValue.IsValidData =
         &vftable_211;
    this[8].Models.Size = 0;
    this[8].Models.Capacity = 0;
    TurretSubModule__TurretSubModule((TurretSubModule *)&this[9]._pad_0x10_4);
    this[9]._pad_0x10_4 = (int)&vftable_237;
    *(undefined1 *)&this[0xc].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    AmmoBaySubModule__AmmoBaySubModule
              ((AmmoBaySubModule *)&this[0xc].GetTotalPowerUsage_W_MemoizedValue);
    *(undefined1 *)&this[0xe].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    *(undefined4 *)&this[0xe].GetTotalPowerUsage_W_MemoizedValue.Data = 0;
    *(undefined4 *)((int)&this[0xe].GetTotalPowerUsage_W_MemoizedValue.Data + 4) = 0;
    *(undefined4 *)&this[0xe].GetTotalPowerUsage_W_MemoizedValue.IsValidData = 0;
    *(undefined4 *)&((*(undefined4 *)((char *)&(this[0xe].GetTotalPowerUsage_W_MemoizedValue) + 0xc))) = 0;
    this[0xe].Models._pad_0x0_0 = 0;
    this[0xe].Models.Data = (SharedPtr_L_GameModel_G_ *)0x0;
    this[0xe].Models.Size = 0;
    this[0xe].Models.Capacity = 0;
    return (Reflectable *)this;
  }
  return (Reflectable *)0x0;
}

//==== 00638c10 StaticGetMemberByIndex_00638c10 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   BallisticTubeSubModule__ReflectionInfoStruct_struct_BallisticTubeSubModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
BallisticTubeSubModule__ReflectionInfoStruct_struct_BallisticTubeSubModule___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_c40f72df__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_c40f72df__thread_safe_static_guard_0__);
    if ( cde_l2_c40f72df__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_46520ebc_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00975ec4 = 0;
      _DAT_00975ec8 = 0;
      _DAT_00975ecc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975ed0,"Unused");
      _DAT_00975edc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975ee0,"Composition");
      _DAT_00975eec = 8;
      _DAT_00975ef0 = 0x10;
      _DAT_00975ef4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975ef8,"Material");
      _DAT_00975f04 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975f08,"Length_m");
      _DAT_00975f14 = 4;
      _DAT_00975f18 = 0x18;
      _DAT_00975f1c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975f20,"double");
      _DAT_00975f2c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975f30,"Thickness_m");
      _DAT_00975f3c = 4;
      _DAT_00975f40 = 0x20;
      _DAT_00975f44 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975f48,"double");
      _DAT_00975f54 = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_BallisticTubeSubModule__ReflectionInfoStruct_struct_BallisticTubeSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_c40f72df__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_46520ebc_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_00975ec4 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_00975ec8 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_00975ecc + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_00975ed0 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_00975edc)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_00975edd)[iVar1];
  return __return_storage_ptr__;
}





//==== 00638dd0 StaticGetMemberByIndex_00638dd0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   SolidPropellantSubModule__ReflectionInfoStruct_struct_SolidPropellantSubModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
SolidPropellantSubModule__ReflectionInfoStruct_struct_SolidPropellantSubModule___StaticGetMemberByIndex(ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_e21072ca__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_e21072ca__thread_safe_static_guard_0__);
    if ( cde_l2_e21072ca__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_419239d1_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00975d74 = 0;
      _DAT_00975d78 = 0;
      _DAT_00975d7c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975d80,"Unused");
      _DAT_00975d8c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975d90,"Composition");
      _DAT_00975d9c = 8;
      _DAT_00975da0 = 0x10;
      _DAT_00975da4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975da8,"Material");
      _DAT_00975db4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975db8,"Mass_kg");
      _DAT_00975dc4 = 4;
      _DAT_00975dc8 = 0x18;
      _DAT_00975dcc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975dd0,"double");
      _DAT_00975ddc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975de0,"GrainRadius_m");
      _DAT_00975dec = 4;
      _DAT_00975df0 = 0x20;
      _DAT_00975df4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975df8,"double");
      _DAT_00975e04 = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_SolidPropellantSubModule__ReflectionInfoStruct_struct_SolidPropellantSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_e21072ca__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_419239d1_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_00975d74 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_00975d78 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_00975d7c + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_00975d80 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_00975d8c)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_00975d8d)[iVar1];
  return __return_storage_ptr__;
}





//==== 00638f90 StaticGetMemberByIndex_00638f90 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   ConventionalGunModule__ReflectionInfoStruct_class_ConventionalGunModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
ConventionalGunModule__ReflectionInfoStruct_class_ConventionalGunModule___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_3b7943fd__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_3b7943fd__thread_safe_static_guard_0__);
    if ( cde_l2_3b7943fd__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_2f440487_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00975a6c = 0;
      _DAT_00975a70 = 0;
      _DAT_00975a74 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975a78,"Unused");
      _DAT_00975a84 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975a88,"SteamWorkshopID");
      _DAT_00975a94 = 6;
      _DAT_00975a98 = 0x10;
      _DAT_00975a9c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975aa0,"AStr");
      _DAT_00975aac = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975ab0,"Description");
      _DAT_00975abc = 6;
      _DAT_00975ac0 = 0x20;
      _DAT_00975ac4 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975ac8,"AStr");
      _DAT_00975ad4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975ad8,"UsesCustomName");
      _DAT_00975ae4 = 1;
      _DAT_00975ae8 = 0x68;
      _DAT_00975aec = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975af0,"bool");
      _DAT_00975afc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975b00,"Barrel");
      _DAT_00975b0c = 10;
      _DAT_00975b10 = 0x158;
      _DAT_00975b14 = 0x40;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975b18,"BallisticTubeSubModule");
      _DAT_00975b24 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975b28,"BarrelArmor");
      _DAT_00975b34 = 10;
      _DAT_00975b38 = 0x198;
      _DAT_00975b3c = 0x90;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975b40,"BarrelArmorSubModule");
      _DAT_00975b4c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975b50,"Propellant");
      _DAT_00975b5c = 10;
      _DAT_00975b60 = 0x228;
      _DAT_00975b64 = 0x28;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975b68,"SolidPropellantSubModule");
      _DAT_00975b74 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975b78,"Projectile");
      _DAT_00975b84 = 10;
      _DAT_00975b88 = 0x250;
      _DAT_00975b8c = 0x60;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975b90,"MassProjectileSubModule");
      _DAT_00975b9c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975ba0,"Loader");
      _DAT_00975bac = 10;
      _DAT_00975bb0 = 0x2b0;
      _DAT_00975bb4 = 0x28;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975bb8,"LinearMotorSubModule");
      _DAT_00975bc4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975bc8,"ExternalMount");
      _DAT_00975bd4 = 1;
      _DAT_00975bd8 = 0x2d8;
      _DAT_00975bdc = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975be0,"bool");
      _DAT_00975bec = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975bf0,"InternalMount");
      _DAT_00975bfc = 1;
      _DAT_00975c00 = 0x2d9;
      _DAT_00975c04 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975c08,"bool");
      _DAT_00975c14 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975c18,"Turret");
      _DAT_00975c24 = 10;
      _DAT_00975c28 = 0x2e0;
      _DAT_00975c2c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975c30,"ExtrudableTurretSubModule");
      _DAT_00975c3c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975c40,"AttachedAmmoBay");
      _DAT_00975c4c = 10;
      _DAT_00975c50 = 1000;
      _DAT_00975c54 = 0x98;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975c58,"AmmoBaySubModule");
      _DAT_00975c64 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975c68,"TargetsShips");
      _DAT_00975c74 = 1;
      _DAT_00975c78 = 0xb0;
      _DAT_00975c7c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975c80,"bool");
      _DAT_00975c8c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975c90,"TargetsShots");
      _DAT_00975c9c = 1;
      _DAT_00975ca0 = 0xb1;
      _DAT_00975ca4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975ca8,"bool");
      _DAT_00975cb4 = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_ConventionalGunModule__ReflectionInfoStruct_class_ConventionalGunModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_3b7943fd__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_2f440487_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_00975a6c + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_00975a70 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_00975a74 + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_00975a78 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_00975a84)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_00975a85)[iVar1];
  return __return_storage_ptr__;
}





//==== 00639440 StaticGetMemberCount_00639440 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl BallisticTubeSubModule__ReflectionInfoStruct_struct_BallisticTubeSubModule___StaticGetMemberCount(void) */

int __cdecl
BallisticTubeSubModule__ReflectionInfoStruct_struct_BallisticTubeSubModule___StaticGetMemberCount
          (void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_da3cf37b__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_da3cf37b__thread_safe_static_guard_0__);
    if ( cde_l2_da3cf37b__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_ef1674c8_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00975e1c = 0;
      _DAT_00975e20 = 0;
      _DAT_00975e24 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975e28,"Unused");
      _DAT_00975e34 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975e38,"Composition");
      _DAT_00975e44 = 8;
      _DAT_00975e48 = 0x10;
      _DAT_00975e4c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975e50,"Material");
      _DAT_00975e5c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975e60,"Length_m");
      _DAT_00975e6c = 4;
      _DAT_00975e70 = 0x18;
      _DAT_00975e74 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975e78,"double");
      _DAT_00975e84 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975e88,"Thickness_m");
      _DAT_00975e94 = 4;
      _DAT_00975e98 = 0x20;
      _DAT_00975e9c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975ea0,"double");
      _DAT_00975eac = 0;
      atexit( private__static_int_const___cdecl_BallisticTubeSubModule__ReflectionInfoStruct_struct_BallisticTubeSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_da3cf37b__thread_safe_static_guard_0__);
    }
  }
  return 4;
}





//==== 006395b0 StaticGetMemberCount_006395b0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl SolidPropellantSubModule__ReflectionInfoStruct_struct_SolidPropellantSubModule___StaticGetMemberCount(void) */

int __cdecl
SolidPropellantSubModule__ReflectionInfoStruct_struct_SolidPropellantSubModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_48c86032__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_48c86032__thread_safe_static_guard_0__);
    if ( cde_l2_48c86032__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_ebaee73d_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00975ccc = 0;
      _DAT_00975cd0 = 0;
      _DAT_00975cd4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975cd8,"Unused");
      _DAT_00975ce4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975ce8,"Composition");
      _DAT_00975cf4 = 8;
      _DAT_00975cf8 = 0x10;
      _DAT_00975cfc = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975d00,"Material");
      _DAT_00975d0c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975d10,"Mass_kg");
      _DAT_00975d1c = 4;
      _DAT_00975d20 = 0x18;
      _DAT_00975d24 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975d28,"double");
      _DAT_00975d34 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975d38,"GrainRadius_m");
      _DAT_00975d44 = 4;
      _DAT_00975d48 = 0x20;
      _DAT_00975d4c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975d50,"double");
      _DAT_00975d5c = 0;
      atexit( private__static_int_const___cdecl_SolidPropellantSubModule__ReflectionInfoStruct_struct_SolidPropellantSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_48c86032__thread_safe_static_guard_0__);
    }
  }
  return 4;
}





//==== 00639720 StaticGetMemberCount_00639720 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl ConventionalGunModule__ReflectionInfoStruct_class_ConventionalGunModule___StaticGetMemberCount(void) */

int __cdecl
ConventionalGunModule__ReflectionInfoStruct_class_ConventionalGunModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_a057e976__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_a057e976__thread_safe_static_guard_0__);
    if ( cde_l2_a057e976__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_9f64a193_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0097580c = 0;
      _DAT_00975810 = 0;
      _DAT_00975814 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975818,"Unused");
      _DAT_00975824 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975828,"SteamWorkshopID");
      _DAT_00975834 = 6;
      _DAT_00975838 = 0x10;
      _DAT_0097583c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975840,"AStr");
      _DAT_0097584c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975850,"Description");
      _DAT_0097585c = 6;
      _DAT_00975860 = 0x20;
      _DAT_00975864 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975868,"AStr");
      _DAT_00975874 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975878,"UsesCustomName");
      _DAT_00975884 = 1;
      _DAT_00975888 = 0x68;
      _DAT_0097588c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975890,"bool");
      _DAT_0097589c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009758a0,"Barrel");
      _DAT_009758ac = 10;
      _DAT_009758b0 = 0x158;
      _DAT_009758b4 = 0x40;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009758b8,"BallisticTubeSubModule");
      _DAT_009758c4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009758c8,"BarrelArmor");
      _DAT_009758d4 = 10;
      _DAT_009758d8 = 0x198;
      _DAT_009758dc = 0x90;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009758e0,"BarrelArmorSubModule");
      _DAT_009758ec = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009758f0,"Propellant");
      _DAT_009758fc = 10;
      _DAT_00975900 = 0x228;
      _DAT_00975904 = 0x28;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975908,"SolidPropellantSubModule");
      _DAT_00975914 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975918,"Projectile");
      _DAT_00975924 = 10;
      _DAT_00975928 = 0x250;
      _DAT_0097592c = 0x60;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975930,"MassProjectileSubModule");
      _DAT_0097593c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975940,"Loader");
      _DAT_0097594c = 10;
      _DAT_00975950 = 0x2b0;
      _DAT_00975954 = 0x28;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975958,"LinearMotorSubModule");
      _DAT_00975964 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975968,"ExternalMount");
      _DAT_00975974 = 1;
      _DAT_00975978 = 0x2d8;
      _DAT_0097597c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975980,"bool");
      _DAT_0097598c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975990,"InternalMount");
      _DAT_0097599c = 1;
      _DAT_009759a0 = 0x2d9;
      _DAT_009759a4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009759a8,"bool");
      _DAT_009759b4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009759b8,"Turret");
      _DAT_009759c4 = 10;
      _DAT_009759c8 = 0x2e0;
      _DAT_009759cc = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009759d0,"ExtrudableTurretSubModule");
      _DAT_009759dc = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009759e0,"AttachedAmmoBay");
      _DAT_009759ec = 10;
      _DAT_009759f0 = 1000;
      _DAT_009759f4 = 0x98;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009759f8,"AmmoBaySubModule");
      _DAT_00975a04 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975a08,"TargetsShips");
      _DAT_00975a14 = 1;
      _DAT_00975a18 = 0xb0;
      _DAT_00975a1c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975a20,"bool");
      _DAT_00975a2c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975a30,"TargetsShots");
      _DAT_00975a3c = 1;
      _DAT_00975a40 = 0xb1;
      _DAT_00975a44 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975a48,"bool");
      _DAT_00975a54 = 0;
      atexit( private__static_int_const___cdecl_ConventionalGunModule__ReflectionInfoStruct_class_ConventionalGunModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_a057e976__thread_safe_static_guard_0__);
    }
  }
  return 0xf;
}





//==== 00639b80 StaticGetReflectionInfo_00639b80 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct BallisticTubeSubModule__ReflectionInfoStruct_L_structBallisticTubeSubModule_G_
   * __cdecl BallisticTubeSubModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_struct_BallisticTubeSubModule_G_ * __cdecl
BallisticTubeSubModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_59bfc237__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_59bfc237__thread_safe_static_guard_0__);
    if ( cde_l2_59bfc237__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_7ac2a776_ReflectionInfo) = &vftable_289;
      _Init_thread_footer(& cde_l2_59bfc237__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_7ac2a776_ReflectionInfo;
}





//==== 00639be0 StaticGetReflectionInfo_00639be0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct ConventionalGunModule__ReflectionInfoStruct_L_classConventionalGunModule_G_ *
   __cdecl ConventionalGunModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_ConventionalGunModule_G_ * __cdecl
ConventionalGunModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_0791ae55__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_0791ae55__thread_safe_static_guard_0__);
    if ( cde_l2_0791ae55__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_e4c3fa45_ReflectionInfo) = &vftable_291;
      _Init_thread_footer(& cde_l2_0791ae55__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_e4c3fa45_ReflectionInfo;
}





//==== 00639c40 StaticGetReflectionInfo_00639c40 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct SolidPropellantSubModule__ReflectionInfoStruct_L_struct_SolidPropellantSubModule_G_ * __cdecl SolidPropellantSubModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_struct_SolidPropellantSubModule_G_ * __cdecl
SolidPropellantSubModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_44fcb259__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_44fcb259__thread_safe_static_guard_0__);
    if ( cde_l2_44fcb259__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_ed429763_ReflectionInfo) = &vftable_290;
      _Init_thread_footer(& cde_l2_44fcb259__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_ed429763_ReflectionInfo;
}





//==== 00639ca0 GetComposition_00639ca0 ====

/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   LensSubModule__GetComposition(void)const  */

Darray_L_MaterialComposition_G_ * __thiscall
LensSubModule__GetComposition
          (LensSubModule *this,Darray_L_MaterialComposition_G_ *__return_storage_ptr__)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  Material *pMVar4;
  Darray_L_MaterialComposition_G_ *this_00;
  bool bVar5;
  MaterialComposition *pMVar6;
  MaterialComposition *pMVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  undefined4 uStack_20;
  undefined4 uStack_10;
  
  this_00 = __return_storage_ptr__;
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (MaterialComposition *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_75;
  __return_storage_ptr__->Data = (MaterialComposition *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 2;
  pMVar6 = (MaterialComposition *)(uintptr_t)(port_op_new(0x20));
  if (pMVar6 == (MaterialComposition *)0x0) {
    pMVar6 = (MaterialComposition *)0x0;
  }
  else {
    iVar8 = 2;
    pMVar7 = pMVar6;
    do {
      pMVar7->Type = (Material *)0x0;
      pMVar7->Mass_kg = 0.0;
      iVar8 = iVar8 + -1;
      pMVar7 = pMVar7 + 1;
    } while (iVar8 != 0);
  }
  this_00->Data = pMVar6;
  iVar8 = 0;
  if (0 < this_00->Capacity) {
    iVar9 = 0;
    do {
      iVar8 = iVar8 + 1;
      puVar1 = (undefined4 *)((int)&this_00->Data->Type + iVar9);
      *puVar1 = 0;
      puVar1[1] = uStack_10;
      puVar1[2] = 0;
      puVar1[3] = 0;
      iVar9 = iVar9 + 0x10;
    } while (iVar8 < this_00->Capacity);
  }
  dVar2 = this->CachedRadius_m;
  fVar10 = (float10)(**(code **)(this->_pad_0x0_0 + 0x7c))();
  pMVar4 = this->Composition;
  iVar8 = this_00->Size;
  dVar3 = pMVar4->Density_kg__m3;
  __return_storage_ptr__ = (Darray_L_MaterialComposition_G_ *)(iVar8 + 1);
  util__Darray_L_MaterialConstituent_G___SetSize
            ((Darray_L_MaterialConstituent_G_ *)this_00,(int *)&__return_storage_ptr__);
  bVar5 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                    ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar8);
  if (bVar5) {
    pMVar6 = this_00->Data + this_00->Size + -1;
    pMVar6->Type = pMVar4;
    *(undefined4 *)&(*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar6) + 0x4)) = uStack_20;
    pMVar6->Mass_kg = dVar2 * dVar2 * 3.141592653589793 * (double)fVar10 * dVar3;
  }
  return this_00;
}

//==== 00639db0 GetLensTypeName ====


/* public: virtual class util__Str_L_char_G_ __thiscall LensSubModule__GetLensTypeName(void)const  */

Str_L_char_G_ * __thiscall
LensSubModule__GetLensTypeName(LensSubModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  LocStr *pLVar1;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ *pSVar3;
  bool bVar4;
  void *apvStack_68 [3];
  void *pvStack_5c;
  void *apvStack_50 [3];
  void *pvStack_44;
  Str_L_char_G_ SStack_38;
  Str_L_char_G_ SStack_2c;
  Str_L_char_G_ SStack_20;
  Str_L_char_G_ SStack_14;
  undefined4 uStack_8;
  
  bVar4 = this->CachedIsMirror == false;
  uStack_8 = 0;
  if (bVar4) {
    util__Str_char___Str_char(&SStack_2c,"MaterialClass__Optic Lens");
    SStack_14.Data = (char *)0x0;
    pLVar1 = (LocStr *)apvStack_50;
    SStack_14.Capacity = 0;
    pSVar2 = &SStack_2c;
    SStack_14.Length = 0;
    pSVar3 = &SStack_14;
  }
  else {
    util__Str_char___Str_char(&SStack_38,"MaterialClass__Optic Mirror");
    SStack_20.Data = (char *)0x0;
    pLVar1 = (LocStr *)apvStack_68;
    SStack_20.Capacity = 0;
    pSVar2 = &SStack_38;
    SStack_20.Length = 0;
    pSVar3 = &SStack_20;
  }
  pLVar1 = (LocStr *)util__LocStr__LocStr(pLVar1,pSVar2,pSVar3);
  pSVar2 = util__LocStr__operator__o3(pLVar1);
  util__Str_char___Str_char(__return_storage_ptr__,pSVar2);
  if (bVar4) {
    if (pvStack_44 != (void *)0x0) {
      port_op_delete(pvStack_44);
      pvStack_44 = (void *)0x0;
    }
    if (apvStack_50[0] != (void *)0x0) {
      port_op_delete(apvStack_50[0]);
      apvStack_50[0] = (void *)0x0;
    }
  }
  if (bVar4) {
    if (SStack_14.Data != (char *)0x0) {
      port_op_delete(SStack_14.Data);
      SStack_14.Data = (char *)0x0;
    }
  }
  if (bVar4) {
    if (SStack_2c.Data != (char *)0x0) {
      port_op_delete(SStack_2c.Data);
      SStack_2c.Data = (char *)0x0;
    }
  }
  if (!bVar4) {
    if (pvStack_5c != (void *)0x0) {
      port_op_delete(pvStack_5c);
      pvStack_5c = (void *)0x0;
    }
    if (apvStack_68[0] != (void *)0x0) {
      port_op_delete(apvStack_68[0]);
      apvStack_68[0] = (void *)0x0;
    }
  }
  if (!bVar4) {
    if (SStack_20.Data != (char *)0x0) {
      port_op_delete(SStack_20.Data);
      SStack_20.Data = (char *)0x0;
    }
  }
  if ((SStack_38.Data != (char *)0x0) && (!bVar4)) {
    port_op_delete(SStack_38.Data);
  }
  return __return_storage_ptr__;
}





//==== 00639f30 GetLength_m_00639f30 ====


/* public: virtual double __thiscall LensSubModule__GetLength_m(void)const  */

double __thiscall LensSubModule__GetLength_m(LensSubModule *this)

{
  double dVar1;
  
  dVar1 = Material__GetOpaqueThickness_m(this->Composition,this->CachedWavelength_nm);
  if (this->CachedIsMirror != false) {
    if (dVar1 <= 0.001) {
      dVar1 = 0.001;
    }
    return dVar1;
  }
  if (0.001 <= dVar1) {
    dVar1 = 0.001;
  }
  return dVar1;
}





//==== 00639f90 GetStatuses_00639f90 ====

/* public: virtual class DesignStatusBuffer  LensSubModule__GetStatuses(class DataParser
   *)const  */

DesignStatusBuffer * 
LensSubModule__GetStatuses
          (LensSubModule *this,DesignStatusBuffer *__return_storage_ptr__,DataParser *param_1)

{
  undefined8 stack0xffffff78;
  undefined8 stack0xffffff7c;
  undefined8 stack0xffffff80;
  Str_L_char_G_ SVar1;
  Str_L_char_G_ SVar2;
  Str_L_char_G_ SVar3;
  Str_L_char_G_ SVar4;
  ModulePlacer *pMVar5;
  Str_L_char_G_ *pSVar6;
  Str_L_char_G_ *pSVar7;
  bool bVar8;
  double dVar9;
  char *pcVar10;
  Str_L_char_G_ *pSVar11;
  char *in_stack_ffffff80;
  char *pcVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  Str_L_char_G_ local_64;
  Str_L_char_G_ local_58;
  Str_L_char_G_ local_4c;
  Str_L_char_G_ local_40;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  double local_1c;
  double local_14;
  double local_c;
  
  __return_storage_ptr__->DataManager = (DataParser *)0x0;
  (__return_storage_ptr__->Messages)._pad_0x0_0 = 0;
  (__return_storage_ptr__->Messages).Data = (DesignStatusMessage *)0x0;
  (__return_storage_ptr__->Messages).Size = 0;
  *(undefined8 *)&(__return_storage_ptr__->Messages).Capacity = 0;
  DesignStatusBuffer__DesignStatusBuffer(__return_storage_ptr__,param_1);
  local_c = *(double *)&(this->Composition->LasingMediumProperties).Data._pad_0x8_2 *
            1000000000000.0;
  util__Str_char___Str_char(&local_64,"GetEntryDamage_W__m2()");
  util__Str_char___Str_char(&local_34,"LasingDamageThreshold_W__m2");
  util__Str_char___Str_char(&local_28,"LensEntryIntensity");
  *(uint32_t *)&local_14 = Material__GetIndexOfRefraction(this->Composition,this->CachedWavelength_nm);
  *(uint32_t *)&local_14 = local_14 + 1.0;
  local_1c = (this->CachedPower_W /
             (this->CachedRadius_m * 3.141592653589793 * this->CachedRadius_m * 0.5)) *
             (4.0 / (local_14 * local_14));
  iVar14 = SUB84(this->CachedWavelength_nm,0);
  iVar13 = 0x63a064;
  dVar9 = Material__GetIndexOfRefraction(this->Composition,this->CachedWavelength_nm);
  iVar15 = 0;
  local_14 = (this->CachedPower_W /
             (this->CachedRadius_m * 3.141592653589793 * this->CachedRadius_m * 0.5)) *
             (4.0 / ((dVar9 + 1.0) * (dVar9 + 1.0)));
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff80,&local_64);
  pcVar10 = (char *)((ulonglong)local_1c >> 0x20);
  SVar4.Capacity = iVar14;
  SVar4.Data = (char *)iVar13;
  SVar4.Length = iVar15;
  pMVar5 = (ModulePlacer *)Print(&local_58,(double)CONCAT44(in_stack_ffffff80,pcVar10),SVar4);
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff7c,&local_34);
  SVar2.Capacity = iVar13;
  SVar2.Data = in_stack_ffffff80;
  SVar2.Length = (int)pMVar5;
  pSVar6 = Print(&local_4c,(double)CONCAT44(pcVar10,(char *)((ulonglong)local_c >> 0x20)),SVar2);
  pSVar11 = &local_40;
  pSVar7 = (Str_L_char_G_ *)(**(code **)(this->_pad_0x0_0 + 0x78))();
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,local_c < local_14,&local_28,pSVar7,pSVar11,pSVar6,pMVar5);
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
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_64.Data != (char *)0x0) {
    port_op_delete(local_64.Data);
  }
  util__Str_char___Str_char(&local_40,"GetExitDamage_W__m2()");
  util__Str_char___Str_char(&local_28,"LasingDamageThreshold_W__m2");
  util__Str_char___Str_char(&local_34,"LensExitIntensity");
  if (this->CachedIsMirror == false) {
    *(uint32_t *)&local_1c = Material__GetIndexOfRefraction(this->Composition,this->CachedWavelength_nm);
    *(uint32_t *)&local_1c = local_1c + 1.0;
    dVar9 = Material__GetIndexOfRefraction(this->Composition,this->CachedWavelength_nm);
    *(uint32_t *)&local_1c = (dVar9 * 4.0) / (local_1c * local_1c);
    if (local_c < (this->CachedPower_W /
                  (this->CachedRadius_m * 3.141592653589793 * this->CachedRadius_m * 0.5)) *
                  local_1c * local_1c) {
      bVar8 = true;
      goto LAB_0063a25e;
    }
  }
  bVar8 = false;
LAB_0063a25e:
  *(uint32_t *)&local_1c = Material__GetIndexOfRefraction(this->Composition,this->CachedWavelength_nm);
  *(uint32_t *)&local_1c = local_1c + 1.0;
  iVar13 = SUB84(this->CachedWavelength_nm,0);
  pcVar12 = (char *)0x63a28f;
  dVar9 = Material__GetIndexOfRefraction(this->Composition,this->CachedWavelength_nm);
  iVar14 = 0;
  dVar9 = (dVar9 * 4.0) / (local_1c * local_1c);
  local_1c = (this->CachedPower_W /
             (this->CachedRadius_m * 3.141592653589793 * this->CachedRadius_m * 0.5)) *
             dVar9 * dVar9;
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff7c,&local_40);
  pcVar10 = (char *)((ulonglong)local_1c >> 0x20);
  SVar3.Capacity = iVar13;
  SVar3.Data = pcVar12;
  SVar3.Length = iVar14;
  pMVar5 = (ModulePlacer *)Print(&local_4c,(double)CONCAT44(pSVar7,pcVar10),SVar3);
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff78,&local_28);
  SVar1.Capacity = (int)pcVar12;
  SVar1.Data = (char *)pSVar7;
  SVar1.Length = (int)pMVar5;
  pSVar6 = Print(&local_58,(double)CONCAT44(pcVar10,(int)((ulonglong)local_c >> 0x20)),SVar1);
  pSVar11 = &local_64;
  pSVar7 = (Str_L_char_G_ *)(**(code **)(this->_pad_0x0_0 + 0x78))();
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,bVar8,&local_34,pSVar7,pSVar11,pSVar6,pMVar5);
  if (local_64.Data != (char *)0x0) {
    port_op_delete(local_64.Data);
    local_64.Data = (char *)0x0;
  }
  if (local_58.Data != (char *)0x0) {
    port_op_delete(local_58.Data);
    local_58.Data = (char *)0x0;
  }
  if (local_4c.Data != (char *)0x0) {
    port_op_delete(local_4c.Data);
    local_4c.Data = (char *)0x0;
  }
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_40.Data != (char *)0x0) {
    port_op_delete(local_40.Data);
  }
  return __return_storage_ptr__;
}

//==== 0063a3e0 GetPointerPropertyChoices_0063a3e0 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   LensSubModule__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

ClassMember * 
LensSubModule__GetPointerPropertyChoices
          (LensSubModule *this,ClassMember *param_1,SerializationManagerInterface *param_2)

{
  char *pcVar1;
  SerializationManagerInterface SVar2;
  int in_stack_0000000c;
  
  if (*(int *)&param_2[1] < 1) {
    SVar2 = *(SerializationManagerInterface *)(uintptr_t)*(uint32_t *)&cde_l2_0b2b1c9f_NullString;
  }
  else {
    SVar2 = *param_2;
  }
  for (pcVar1 = "Composition"; (pcVar1[(int)(*(int *)&SVar2 + -0x91fc04)] != '\0' || (*pcVar1 != '\0'));
      pcVar1 = pcVar1 + 1) {
    if (pcVar1[(int)(*(int *)&SVar2 + -0x91fc04)] != *pcVar1) {
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





//==== 0063a460 GetReflectionInfo_0063a460 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   LensSubModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall LensSubModule__GetReflectionInfo(LensSubModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_2113a09c__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_2113a09c__thread_safe_static_guard_0__);
    if ( cde_l2_2113a09c__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_017e884d_ReflectionInfo) = &vftable_297;
      _Init_thread_footer(& cde_l2_2113a09c__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_017e884d_ReflectionInfo;
}





//==== 0063a470 GetTypeName_0063a470 ====


/* public: virtual class util__Str_L_char_G_  LensSubModule__ReflectionInfoStruct_class_LensSubModule___GetTypeName(void)const  */

Str_L_char_G_ * 
LensSubModule__ReflectionInfoStruct_class_LensSubModule___GetTypeName
          (ReflectionInfoStruct_L_class_LensSubModule_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"LensSubModule");
  return __return_storage_ptr__;
}





//==== 0063a490 GetMembers_0063a490 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   LensSubModule__ReflectionInfoStruct_class_LensSubModule___GetMembers(void)const  */

undefined4 
LensSubModule__ReflectionInfoStruct_class_LensSubModule___GetMembers__o2
          (ReflectionInfoStruct_L_class_LensSubModule_G_ *this)

{
  undefined4 in_stack_00000004;
  
  StaticGetMembers();
}





//==== 0063a4b0 GetMember_0063a4b0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   LensSubModule__ReflectionInfoStruct_class_LensSubModule___GetMember(class util__Str_L_char_G_ const
   &)const  */

Str_L_char_G_ * 
LensSubModule__ReflectionInfoStruct_class_LensSubModule___GetMember__o2
          (ReflectionInfoStruct_L_class_LensSubModule_G_ *this,Str_L_char_G_ *param_1)

{
  StaticGetMember(param_1);
  return param_1;
}





//==== 0063a4d0 GetFactory_0063a4d0 ====


/* public: virtual class util__Reflectable * (__cdecl*
   LensSubModule__ReflectionInfoStruct_class_LensSubModule___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall LensSubModule__ReflectionInfoStruct_class_LensSubModule___GetFactory__o2
          (ReflectionInfoStruct_L_class_LensSubModule_G_ *this)

{
  return StaticFactory;
}





//==== 0063a4e0 GetLensTypeName_0063a4e0 ====


/* public: virtual class util__Str_L_char_G_ 
   NonlinearOpticSubModule__GetLensTypeName(void)const  */

Str_L_char_G_ * 
NonlinearOpticSubModule__GetLensTypeName
          (NonlinearOpticSubModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  LocStr *this_00;
  Str_L_char_G_ *pSVar1;
  void *apvStack_34 [3];
  void *pvStack_28;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
  util__Str_char___Str_char(&SStack_1c,"MaterialClass__Optic MaterialClass__NonlinearOptic");
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





//==== 0063a590 GetLength_m_0063a590 ====


/* public: virtual double __thiscall NonlinearOpticSubModule__GetLength_m(void)const  */

double __thiscall NonlinearOpticSubModule__GetLength_m(NonlinearOpticSubModule *this)

{
  return this->CachedNonlinearOpticLength_m;
}





//==== 0063a5a0 GetPointerPropertyChoices_0063a5a0 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   NonlinearOpticSubModule__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

ClassMember * 
NonlinearOpticSubModule__GetPointerPropertyChoices
          (NonlinearOpticSubModule *this,ClassMember *param_1,SerializationManagerInterface *param_2
          )

{
  char *pcVar1;
  SerializationManagerInterface SVar2;
  int in_stack_0000000c;
  
  if (*(int *)&param_2[1] < 1) {
    SVar2 = *(SerializationManagerInterface *)(uintptr_t)*(uint32_t *)&cde_l2_0b2b1c9f_NullString;
  }
  else {
    SVar2 = *param_2;
  }
  for (pcVar1 = "Composition"; (pcVar1[(int)(*(int *)&SVar2 + -0x91fc04)] != '\0' || (*pcVar1 != '\0'));
      pcVar1 = pcVar1 + 1) {
    if (pcVar1[(int)(*(int *)&SVar2 + -0x91fc04)] != *pcVar1) {
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





//==== 0063a620 GetReflectionInfo_0063a620 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   NonlinearOpticSubModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall
NonlinearOpticSubModule__GetReflectionInfo(NonlinearOpticSubModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_a5ae1511__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_a5ae1511__thread_safe_static_guard_0__);
    if ( cde_l2_a5ae1511__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_2fc78997_ReflectionInfo) = &vftable_299;
      _Init_thread_footer(& cde_l2_a5ae1511__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_2fc78997_ReflectionInfo;
}





//==== 0063a680 GetTypeName_0063a680 ====


/* public: virtual class util__Str_L_char_G_ 
   NonlinearOpticSubModule__ReflectionInfoStruct_class_NonlinearOpticSubModule___GetTypeName(void)const  */

Str_L_char_G_ * 
NonlinearOpticSubModule__ReflectionInfoStruct_class_NonlinearOpticSubModule___GetTypeName
          (ReflectionInfoStruct_L_class_NonlinearOpticSubModule_G_ *this,
          Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"NonlinearOpticSubModule");
  return __return_storage_ptr__;
}





//==== 0063a6a0 GetMembers_0063a6a0 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   NonlinearOpticSubModule__ReflectionInfoStruct_class_NonlinearOpticSubModule___GetMembers(void)const  */

undefined4 
NonlinearOpticSubModule__ReflectionInfoStruct_class_NonlinearOpticSubModule___GetMembers
          (ReflectionInfoStruct_L_class_NonlinearOpticSubModule_G_ *this)

{
  undefined4 in_stack_00000004;
  
  StaticGetMembers();
}





//==== 0063a6c0 GetMember_0063a6c0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   NonlinearOpticSubModule__ReflectionInfoStruct_class_NonlinearOpticSubModule___GetMember(class
   util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
NonlinearOpticSubModule__ReflectionInfoStruct_class_NonlinearOpticSubModule___GetMember__o2
          (ReflectionInfoStruct_L_class_NonlinearOpticSubModule_G_ *this,Str_L_char_G_ *param_1)

{
  StaticGetMember(param_1);
  return param_1;
}





//==== 0063a6e0 GetFactory_0063a6e0 ====


/* public: virtual class util__Reflectable * (__cdecl*
   NonlinearOpticSubModule__ReflectionInfoStruct_class_NonlinearOpticSubModule___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall NonlinearOpticSubModule__ReflectionInfoStruct_class_NonlinearOpticSubModule___GetFactory
          (ReflectionInfoStruct_L_class_NonlinearOpticSubModule_G_ *this)

{
  return StaticFactory;
}





//==== 0063a6f0 GetComposition_0063a6f0 ====

/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   FrequencyDoublerSubModule__GetComposition(void)const  */

Darray_L_MaterialComposition_G_ * __thiscall
FrequencyDoublerSubModule__GetComposition
          (FrequencyDoublerSubModule *this,Darray_L_MaterialComposition_G_ *__return_storage_ptr__)

{
  (**(code **)((this->MaterialClass__NonlinearOptic)._pad_0x0_0 + 0x68))(__return_storage_ptr__);
  return __return_storage_ptr__;
}

//==== 0063a710 GetStatuses_0063a710 ====

/* public: virtual class DesignStatusBuffer  FrequencyDoublerSubModule__GetStatuses(class
   DataParser *)const  */

DesignStatusBuffer * 
FrequencyDoublerSubModule__GetStatuses
          (FrequencyDoublerSubModule *this,DesignStatusBuffer *__return_storage_ptr__,
          DataParser *param_1)

{
  (**(code **)((this->MaterialClass__NonlinearOptic)._pad_0x0_0 + 100))(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

//==== 0063a730 GetReflectionInfo_0063a730 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   FrequencyDoublerSubModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall
FrequencyDoublerSubModule__GetReflectionInfo(FrequencyDoublerSubModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_4efb896f__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_4efb896f__thread_safe_static_guard_0__);
    if ( cde_l2_4efb896f__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_3c145fb1_ReflectionInfo) = &vftable_301;
      _Init_thread_footer(& cde_l2_4efb896f__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_3c145fb1_ReflectionInfo;
}





//==== 0063a740 scalar_deleting_destructor_0063a740 ====

/* public: virtual void * __thiscall FrequencyDoublerSubModule:: 0 scalardeletingdestructor(unsigned int) */

void * 
FrequencyDoublerSubModule___scalar_deleting_destructor
          (FrequencyDoublerSubModule *this,uint param_1)

{
  void *pvVar1;
  
  (this->MaterialClass__NonlinearOptic)._pad_0x0_0 = (int)&vftable_5;
  pvVar1 = (void *)(this->MaterialClass__NonlinearOptic)._pad_0x4_1;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->MaterialClass__NonlinearOptic)._pad_0x4_1 = 0;
  }
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x70);
  }
  return this;
}

//==== 0063a7a0 GetTypeName_0063a7a0 ====


/* public: virtual class util__Str_L_char_G_ 
   FrequencyDoublerSubModule__ReflectionInfoStruct_class_FrequencyDoublerSubModule___GetTypeName(void)const  */

Str_L_char_G_ * 
FrequencyDoublerSubModule__ReflectionInfoStruct_class_FrequencyDoublerSubModule___GetTypeName
          (ReflectionInfoStruct_L_class_FrequencyDoublerSubModule_G_ *this,
          Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"FrequencyDoublerSubModule");
  return __return_storage_ptr__;
}





//==== 0063a7c0 GetMembers_0063a7c0 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   FrequencyDoublerSubModule__ReflectionInfoStruct_class_FrequencyDoublerSubModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
FrequencyDoublerSubModule__ReflectionInfoStruct_class_FrequencyDoublerSubModule___GetMembers
          (ReflectionInfoStruct_L_class_FrequencyDoublerSubModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_ebbd568d__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_ebbd568d__thread_safe_static_guard_0__),
      cde_l2_ebbd568d__thread_safe_static_guard_0__ == -1)) {
     cde_l2_124412bd_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_ebbd568d__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_124412bd_Count);
  iVar3 = 0;
  if (0 <  cde_l2_124412bd_Count) {
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
    } while (iVar3 <  cde_l2_124412bd_Count);
  }
  return in_stack_00000004;
}





//==== 0063a900 GetMember_0063a900 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   FrequencyDoublerSubModule__ReflectionInfoStruct_class_FrequencyDoublerSubModule___GetMember(class
   util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
FrequencyDoublerSubModule__ReflectionInfoStruct_class_FrequencyDoublerSubModule___GetMember__o2
          (ReflectionInfoStruct_L_class_FrequencyDoublerSubModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_cf62cb4c__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_cf62cb4c__thread_safe_static_guard_0__),
      cde_l2_cf62cb4c__thread_safe_static_guard_0__ == -1)) {
     cde_l2_c926e6b1_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_cf62cb4c__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_c926e6b1_Count) {
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
LAB_0063a98d:
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
          if (cVar3 == '\0') goto LAB_0063a98d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_c926e6b1_Count);
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





//==== 0063aaa0 GetFactory_0063aaa0 ====


/* public: virtual class util__Reflectable * (__cdecl*
   FrequencyDoublerSubModule__ReflectionInfoStruct_class_FrequencyDoublerSubModule___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall FrequencyDoublerSubModule__ReflectionInfoStruct_class_FrequencyDoublerSubModule___GetFactory
          (ReflectionInfoStruct_L_class_FrequencyDoublerSubModule_G_ *this)

{
  return StaticFactory;
}





//==== 0063ace0 GetPowerUsage_0063ace0 ====


/* public: virtual class util__Darray_L_structPowerUsage_G_ __thiscall
   ArcLampPumpSubModule__GetPowerUsage(void)const  */

Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ * __thiscall
ArcLampPumpSubModule__GetPowerUsage(ArcLampPumpSubModule *this)

{
  undefined8 stack0x00000004;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ *pDVar1;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ *this_00;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  LocStr *this_01;
  int iVar5;
  Str_L_char_G_ *pSVar6;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ *in_stack_00000004;
  Str_L_char_G_ SStack_6c;
  undefined8 uStack_5c;
  void *apvStack_54 [3];
  void *pvStack_48;
  Str_L_char_G_ SStack_3c;
  Str_L_char_G_ SStack_30;
  Str_L_char_G_ SStack_24;
  Str_L_char_G_ SStack_18;
  undefined8 uStack_c;
  
  this_00 = in_stack_00000004;
  uStack_c = CONCAT44(this,(undefined4)uStack_c);
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
  pDVar1 = in_stack_00000004 + 0xc;
  *(undefined4 **)(in_stack_00000004 + 4) = puVar4;
  in_stack_00000004 = (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ *)0x0;
  if (0 < *(int *)pDVar1) {
    iVar5 = 0;
    do {
      pSVar6 = (Str_L_char_G_ *)(*(int *)(this_00 + 4) + iVar5);
      SStack_3c.Data = (char *)0x0;
      SStack_3c.Capacity = 0;
      SStack_3c.Length = 0;
      SStack_30.Capacity = 0;
      SStack_30.Length = 0;
      util__Str_char___operator__o8(pSVar6,&SStack_3c);
      in_stack_00000004 =
           (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ *)
           ((int)in_stack_00000004 + 1);
      pSVar6[1].Capacity = 0;
      pSVar6[1].Length = 0;
      iVar5 = iVar5 + 0x18;
    } while ((int)in_stack_00000004 < *(int *)(this_00 + 0xc));
  }
  util__Str_char___Str_char(&SStack_30,"PowerUse ArcLamp");
  SStack_18.Data = (char *)0x0;
  SStack_18.Capacity = 0;
  SStack_18.Length = 0;
  this_01 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_54,&SStack_30,&SStack_18);
  pSVar6 = util__LocStr__operator__o3(this_01);
  util__Str_char___Str_char(&SStack_24,pSVar6);
  uStack_c = *(undefined8 *)((*(uint32_t*)((char*)&(uStack_c)+4)) + 0x48);
  util__Str_char___Str_char(&SStack_6c,&SStack_24);
  uStack_5c = uStack_c;
  if (SStack_24.Data != (char *)0x0) {
    port_op_delete(SStack_24.Data);
  }
  iVar5 = *(int *)(this_00 + 8);
  in_stack_00000004 = (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ *)(iVar5 + 1);
  util__Darray_struct_util__tuple2_class_util__Str_char__double_____SetSize
            (this_00,(int *)&stack0x00000004);
  bVar2 = util__Darray_struct_PowerUsage___CheckSize((Darray_L_struct_PowerUsage_G_ *)this_00,iVar5);
  if (bVar2) {
    iVar5 = *(int *)(this_00 + 4) + *(int *)(this_00 + 8) * 0x18;
    util__Str_char___operator__o8((Str_L_char_G_ *)(iVar5 + -0x18),&SStack_6c);
    *(undefined8 *)(iVar5 + -8) = uStack_c;
  }
  if (SStack_6c.Data != (char *)0x0) {
    port_op_delete(SStack_6c.Data);
  }
  if (pvStack_48 != (void *)0x0) {
    port_op_delete(pvStack_48);
    pvStack_48 = (void *)0x0;
  }
  if (apvStack_54[0] != (void *)0x0) {
    port_op_delete(apvStack_54[0]);
    apvStack_54[0] = (void *)0x0;
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





//==== 0063b210 GetDecimalPropertyBoundaries_0063b210 ====


/* public: virtual class util__Maybe_L_structutil__Range_L_double_G__G_ __thiscall
   ArcLampPumpSubModule__GetDecimalPropertyBoundaries(struct util__ClassMember const &)const  */

void __thiscall
ArcLampPumpSubModule__GetDecimalPropertyBoundaries(ArcLampPumpSubModule *this,ClassMember *param_1)

{
  double dVar1;
  char *pcVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 *in_stack_00000008;
  char *pcStack_14;
  int iStack_10;
  char *pcStack_c;
  int iStack_8;
  
  if ((int)in_stack_00000008[1] < 1) {
    puVar3 = (undefined1 *)(&cde_l2_0b2b1c9f_NullString);
  }
  else {
    puVar3 = (undefined1 *)*in_stack_00000008;
  }
  for (pcVar2 = "CavitySemimajorAxis_m";
      (pcVar2[(int)(puVar3 + -0x92ee28)] != '\0' || (*pcVar2 != '\0')); pcVar2 = pcVar2 + 1) {
    if (pcVar2[(int)(puVar3 + -0x92ee28)] != *pcVar2) {
      if ((int)in_stack_00000008[1] < 1) {
        puVar3 = (undefined1 *)(&cde_l2_0b2b1c9f_NullString);
      }
      else {
        puVar3 = (undefined1 *)*in_stack_00000008;
      }
      for (pcVar2 = "CavitySemiminorAxis_m";
          (pcVar2[(int)(puVar3 + -0x92ee40)] != '\0' || (*pcVar2 != '\0')); pcVar2 = pcVar2 + 1) {
        if (pcVar2[(int)(puVar3 + -0x92ee40)] != *pcVar2) {
          (param_1->Name).Data = (char *)0x0;
          (param_1->Name).Capacity = 0;
          (param_1->Name).Length = 0;
          *(undefined4 *)&param_1->Type = 0;
          *(undefined1 *)&param_1->Offset = 0;
          return;
        }
      }
      pcVar2 = (char *)0x0;
      iVar4 = 0x40590000;
      dVar1 = this->CavitySemimajorAxis_m;
      if (dVar1 <= 100.0) {
        pcVar2 = (char *)(uintptr_t)(SUB84(dVar1,0));
        iVar4 = (int)((ulonglong)dVar1 >> 0x20);
      }
      pcStack_14 = (char *)0x47ae147b;
      iStack_10 = 0x3f847ae1;
      pcStack_c = pcVar2;
      iStack_8 = iVar4;
      if ((double)CONCAT44(iVar4,pcVar2) <= 0.01 && (double)CONCAT44(iVar4,pcVar2) != 0.01) {
        pcStack_c = (char *)0x47ae147b;
        iStack_8 = 0x3f847ae1;
        pcStack_14 = pcVar2;
        iStack_10 = iVar4;
      }
      (param_1->Name).Data = pcStack_14;
      (param_1->Name).Capacity = iStack_10;
      (param_1->Name).Length = (int)pcStack_c;
      *(int *)&param_1->Type = iStack_8;
      *(undefined1 *)&param_1->Offset = 1;
      return;
    }
  }
  pcVar2 = (char *)0x47ae147b;
  iVar4 = 0x3f847ae1;
  dVar1 = this->CavitySemiminorAxis_m;
  if (0.01 <= dVar1) {
    pcVar2 = (char *)(uintptr_t)(SUB84(dVar1,0));
    iVar4 = (int)((ulonglong)dVar1 >> 0x20);
  }
  pcStack_c = (char *)0x0;
  iStack_8 = 0x40590000;
  pcStack_14 = pcVar2;
  iStack_10 = iVar4;
  if (100.0 <= (double)CONCAT44(iVar4,pcVar2) && (double)CONCAT44(iVar4,pcVar2) != 100.0) {
    pcStack_14 = (char *)0x0;
    iStack_10 = 0x40590000;
    pcStack_c = pcVar2;
    iStack_8 = iVar4;
  }
  (param_1->Name).Data = pcStack_14;
  (param_1->Name).Capacity = iStack_10;
  (param_1->Name).Length = (int)pcStack_c;
  *(int *)&param_1->Type = iStack_8;
  *(undefined1 *)&param_1->Offset = 1;
  return;
}





//==== 0063b320 GetPointerPropertyChoices_0063b320 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   ArcLampPumpSubModule__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

ClassMember * 
ArcLampPumpSubModule__GetPointerPropertyChoices
          (ArcLampPumpSubModule *this,ClassMember *param_1,SerializationManagerInterface *param_2)

{
  bool bVar1;
  char *pcVar2;
  SerializationManagerInterface SVar3;
  int in_stack_0000000c;
  undefined1 uVar4;
  
  if (*(int *)&param_2[1] < 1) {
    SVar3 = *(SerializationManagerInterface *)(uintptr_t)*(uint32_t *)&cde_l2_0b2b1c9f_NullString;
  }
  else {
    SVar3 = *param_2;
  }
  pcVar2 = "GasComposition";
  while( true ) {
    if ((pcVar2[(int)(*(int *)&SVar3 + -0x92ed68)] == '\0') && (*pcVar2 == '\0')) {
      uVar4 = 0x11;
      goto LAB_0063b35a;
    }
    if (pcVar2[(int)(*(int *)&SVar3 + -0x92ed68)] != *pcVar2) break;
    pcVar2 = pcVar2 + 1;
  }
  if (*(int *)&param_2[1] < 1) {
    SVar3 = *(SerializationManagerInterface *)(uintptr_t)*(uint32_t *)&cde_l2_0b2b1c9f_NullString;
  }
  else {
    SVar3 = *param_2;
  }
  pcVar2 = "EnvelopeComposition";
  while( true ) {
    if ((pcVar2[(int)(*(int *)&SVar3 + -0x92ee58)] == '\0') && (*pcVar2 == '\0')) goto LAB_0063b3ac;
    if (pcVar2[(int)(*(int *)&SVar3 + -0x92ee58)] != *pcVar2) break;
    pcVar2 = pcVar2 + 1;
  }
  bVar1 = util__Str_char___operator__o9((Str_L_char_G_ *)param_2,"CavityWallComposition");
  if (bVar1) {
LAB_0063b3ac:
    uVar4 = 0xf;
  }
  else {
    bVar1 = util__Str_char___operator__o9((Str_L_char_G_ *)param_2,"CavityCoolantComposition");
    if (!bVar1) {
      (param_1->Name).Data =
           (char *)&vftable_85;
      (param_1->Name).Capacity = 0;
      (param_1->Name).Length = 0;
      *(undefined4 *)&param_1->Type = 0;
      return param_1;
    }
    uVar4 = 2;
  }
LAB_0063b35a:
  GetMaterials((DataParser *)param_1,in_stack_0000000c,(bool)uVar4);
  return param_1;
}





//==== 0063b3f0 GetReflectionInfo_0063b3f0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   ArcLampPumpSubModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall ArcLampPumpSubModule__GetReflectionInfo(ArcLampPumpSubModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_da96179d__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_da96179d__thread_safe_static_guard_0__);
    if ( cde_l2_da96179d__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_0d34b787_ReflectionInfo) = &vftable_303;
      _Init_thread_footer(& cde_l2_da96179d__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_0d34b787_ReflectionInfo;
}





//==== 0063b400 scalar_deleting_destructor_0063b400 ====


/* public: virtual void * __thiscall ArcLampPumpSubModule:: 0 scalardeletingdestructor(unsigned
   int) */

void * __thiscall
ArcLampPumpSubModule___scalar_deleting_destructor(ArcLampPumpSubModule *this,uint param_1)

{
  ArcLampPumpSubModule___ArcLampPumpSubModule(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x98);
  }
  return this;
}





//==== 0063b430 GetTypeName_0063b430 ====


/* public: virtual class util__Str_L_char_G_  ArcLampPumpSubModule__ReflectionInfoStruct_class_ArcLampPumpSubModule___GetTypeName(void)const  */

Str_L_char_G_ * 
ArcLampPumpSubModule__ReflectionInfoStruct_class_ArcLampPumpSubModule___GetTypeName
          (ReflectionInfoStruct_L_class_ArcLampPumpSubModule_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"ArcLampPumpSubModule");
  return __return_storage_ptr__;
}





//==== 0063b450 GetMembers_0063b450 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   ArcLampPumpSubModule__ReflectionInfoStruct_class_ArcLampPumpSubModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
ArcLampPumpSubModule__ReflectionInfoStruct_class_ArcLampPumpSubModule___GetMembers__o2
          (ReflectionInfoStruct_L_class_ArcLampPumpSubModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_81deb978__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_81deb978__thread_safe_static_guard_0__),
      cde_l2_81deb978__thread_safe_static_guard_0__ == -1)) {
     cde_l2_be9d9d9b_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_81deb978__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_be9d9d9b_Count);
  iVar3 = 0;
  if (0 <  cde_l2_be9d9d9b_Count) {
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
    } while (iVar3 <  cde_l2_be9d9d9b_Count);
  }
  return in_stack_00000004;
}





//==== 0063b590 GetMember_0063b590 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   ArcLampPumpSubModule__ReflectionInfoStruct_class_ArcLampPumpSubModule___GetMember(class
   util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
ArcLampPumpSubModule__ReflectionInfoStruct_class_ArcLampPumpSubModule___GetMember__o2
          (ReflectionInfoStruct_L_class_ArcLampPumpSubModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_69231200__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_69231200__thread_safe_static_guard_0__),
      cde_l2_69231200__thread_safe_static_guard_0__ == -1)) {
     cde_l2_2591aa16_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_69231200__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_2591aa16_Count) {
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
LAB_0063b61d:
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
          if (cVar3 == '\0') goto LAB_0063b61d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_2591aa16_Count);
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





//==== 0063b730 GetFactory_0063b730 ====


/* public: virtual class util__Reflectable * (__cdecl*
   ArcLampPumpSubModule__ReflectionInfoStruct_class_ArcLampPumpSubModule___GetFactory(void)const
   )(void) */

_func_Reflectable_ptr * 
__thiscall ArcLampPumpSubModule__ReflectionInfoStruct_class_ArcLampPumpSubModule___GetFactory__o2
          (ReflectionInfoStruct_L_class_ArcLampPumpSubModule_G_ *this)

{
  return StaticFactory;
}





//==== 0063b740 GetComposition_0063b740 ====


/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   FixedLaserMountSubModule__GetComposition(void)const  */

Darray_L_struct_MaterialConstituent_G_ * __thiscall
FixedLaserMountSubModule__GetComposition(FixedLaserMountSubModule *this)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  Material *pMVar4;
  double dVar5;
  bool bVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  Darray_L_struct_MaterialConstituent_G_ *in_stack_00000004;
  int iStack_24;
  undefined4 uStack_14;
  int iStack_8;
  
  dVar2 = this->CachedRadius_m;
  dVar5 = this->ArmorThickness_m + dVar2;
  pMVar4 = this->ArmorComposition;
  dVar3 = pMVar4->Density_kg__m3;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = (undefined **)(&vftable_75);
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 1;
  puVar7 = (undefined4 *)port_op_new(0x10);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    *puVar7 = 0;
    *(undefined8 *)(puVar7 + 2) = 0;
  }
  iVar9 = 0;
  *(undefined4 **)(in_stack_00000004 + 4) = puVar7;
  if (0 < *(int *)(in_stack_00000004 + 0xc)) {
    iVar8 = 0;
    do {
      iVar8 = iVar8 + 0x10;
      iVar9 = iVar9 + 1;
      puVar7 = (undefined4 *)(*(int *)(in_stack_00000004 + 4) + -0x10 + iVar8);
      *puVar7 = 0;
      puVar7[1] = uStack_14;
      puVar7[2] = 0;
      puVar7[3] = 0;
    } while (iVar9 < *(int *)(in_stack_00000004 + 0xc));
  }
  iVar9 = *(int *)(in_stack_00000004 + 8);
  iStack_8 = iVar9 + 1;
  util__Darray_struct_MaterialConstituent___SetSize(in_stack_00000004,&iStack_8);
  bVar6 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                    ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)in_stack_00000004,
                     iVar9);
  if (bVar6) {
    piVar1 = (int *)(*(int *)(in_stack_00000004 + 4) + -0x10 +
                    *(int *)(in_stack_00000004 + 8) * 0x10);
    *piVar1 = (int)pMVar4;
    piVar1[1] = iStack_24;
    *(double *)(piVar1 + 2) =
         (dVar5 * 3.141592653589793 * dVar5 - dVar2 * 3.141592653589793 * dVar2) * dVar2 * dVar3;
  }
  return in_stack_00000004;
}





//==== 0063b840 GetReflectionInfo_0063b840 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   FixedLaserMountSubModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall
FixedLaserMountSubModule__GetReflectionInfo(FixedLaserMountSubModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_78149c09__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_78149c09__thread_safe_static_guard_0__);
    if ( cde_l2_78149c09__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_e687c6a6_ReflectionInfo) = &vftable_305;
      _Init_thread_footer(& cde_l2_78149c09__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_e687c6a6_ReflectionInfo;
}





//==== 0063b850 GetTypeName_0063b850 ====


/* public: virtual class util__Str_L_char_G_ 
   FixedLaserMountSubModule__ReflectionInfoStruct_struct_FixedLaserMountSubModule___GetTypeName(void)const  */

Str_L_char_G_ * 
FixedLaserMountSubModule__ReflectionInfoStruct_struct_FixedLaserMountSubModule___GetTypeName
          (ReflectionInfoStruct_L_struct_FixedLaserMountSubModule_G_ *this,
          Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"FixedLaserMountSubModule");
  return __return_storage_ptr__;
}





//==== 0063b870 GetMembers_0063b870 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   FixedLaserMountSubModule__ReflectionInfoStruct_struct_FixedLaserMountSubModule___GetMembers(void)const  */

undefined4 
FixedLaserMountSubModule__ReflectionInfoStruct_struct_FixedLaserMountSubModule___GetMembers
          (ReflectionInfoStruct_L_struct_FixedLaserMountSubModule_G_ *this)

{
  undefined4 in_stack_00000004;
  
  StaticGetMembers();
}





//==== 0063b890 GetMember_0063b890 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   FixedLaserMountSubModule__ReflectionInfoStruct_struct_FixedLaserMountSubModule___GetMember(class
   util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
FixedLaserMountSubModule__ReflectionInfoStruct_struct_FixedLaserMountSubModule___GetMember__o2
          (ReflectionInfoStruct_L_struct_FixedLaserMountSubModule_G_ *this,Str_L_char_G_ *param_1)

{
  StaticGetMember(param_1);
  return param_1;
}





//==== 0063b8b0 GetFactory_0063b8b0 ====


/* public: virtual class util__Reflectable * (__cdecl*
   FixedLaserMountSubModule__ReflectionInfoStruct_struct_FixedLaserMountSubModule___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall FixedLaserMountSubModule__ReflectionInfoStruct_struct_FixedLaserMountSubModule___GetFactory
          (ReflectionInfoStruct_L_struct_FixedLaserMountSubModule_G_ *this)

{
  return StaticFactory;
}





//==== 0063b8c0 GetClassID_0063b8c0 ====


/* public: virtual unsigned long __thiscall LaserModule__GetClassID(void)const  */

ulong __thiscall LaserModule__GetClassID(LaserModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_92f62493__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_92f62493__thread_safe_static_guard_0__);
    if ( cde_l2_92f62493__thread_safe_static_guard_0__ == -1) {
       cde_l2_451fe096_ID =
           util__GetHash("LaserModule");
      _Init_thread_footer(& cde_l2_92f62493__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_451fe096_ID;
}





//==== 0063c550 GetIcon_0063c550 ====


/* public: virtual void (__cdecl*__thiscall LaserModule__GetIcon(void)const )(void) */

_func_void * __thiscall LaserModule__GetIcon(LaserModule *this)

{
  return Icons__LaserHazard;
}





//==== 0063c620 IsAttachingModule_0063c620 ====


/* public: virtual bool __thiscall LaserModule__IsAttachingModule(void)const  */

bool __thiscall LaserModule__IsAttachingModule(LaserModule *this)

{
  return (this->Turret).Data.field1_0x1 == '\0';
}





//==== 0063c630 GetArmorCarvingRadius_m_0063c630 ====

/* public: virtual class util__Maybe_L_double_G_ __thiscall
   LaserModule__GetArmorCarvingRadius_m(void)const  */

Maybe_L_double_G_ * __thiscall
LaserModule__GetArmorCarvingRadius_m(LaserModule *this,Maybe_L_double_G_ *__return_storage_ptr__)

{
  double dVar1;
  
  if ((char)this[1]._pad_0x38_14 != '\0') {
    if ((char)this[1]._pad_0x38_14 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar1 = TurretSubModule__GetOuterRadius_m((TurretSubModule *)&(this->Turret).Data.field0_0x0);
    __return_storage_ptr__->Data = dVar1;
    __return_storage_ptr__->IsValidData = true;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Data = (this->FocusingMirror).CachedRadius_m * 1.5;
  __return_storage_ptr__->IsValidData = true;
  return __return_storage_ptr__;
}

//==== 0063c6b0 GetHullRadius_m_0063c6b0 ====


/* public: virtual double __thiscall LaserModule__GetHullRadius_m(void)const  */

double __thiscall LaserModule__GetHullRadius_m(LaserModule *this)

{
  if ((this->Turret).Data.field1_0x1 != '\0') {
    return (double)((this->ArcLamp).CachedPumpingBands_nm.Size);
  }
  return 0.0;
}





//==== 0063c6f0 GetHullLength_m_0063c6f0 ====

/* public: virtual double __thiscall LaserModule__GetHullLength_m(void)const  */

double __thiscall LaserModule__GetHullLength_m(LaserModule *this)

{
  Material *pMVar1;
  
  if ((this->Turret).Data.field1_0x1 != '\0') {
    pMVar1 = (this->Mirror).Composition;
    if ((char)(pMVar1->MaterialMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    return (pMVar1->LasingMediumProperties).Data.SpontaneousLifetime_s * 1e-09 *
           (double)*(int *)((char *)&(this->Mirror) + 0x14);
  }
  return 0.0;
}

//==== 0063c770 GetCubicBoundingBox_m_0063c770 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual struct util__AABB_L_structutil__Vec3_L_double_G__G_ __thiscall
   LaserModule__GetCubicBoundingBox_m(void)const  */

AABB_L_util__Vec3_L_double_G___G_ * __thiscall
LaserModule__GetCubicBoundingBox_m
          (LaserModule *this,AABB_L_util__Vec3_L_double_G___G_ *__return_storage_ptr__)

{
  double dVar1;
  Material *pMVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double local_18;
  
  if ((this->Turret).Data.field1_0x1 != '\0') {
    Module__GetCubicBoundingBox_m((Module *)this,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  if ((char)this[1]._pad_0x38_14 == '\0') {
    *(uint32_t *)&local_18 = (this->FocusingMirror).CachedRadius_m * 1.5;
  }
  else {
    if ((char)this[1]._pad_0x38_14 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    local_18 = TurretSubModule__GetOuterRadius_m((TurretSubModule *)&(this->Turret).Data.field0_0x0)
    ;
  }
  pMVar2 = (this->Mirror).Composition;
  if ((char)(pMVar2->MaterialMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar4 = (this->ArcLamp).CachedLasingRodRadius_m;
  dVar1 = local_18;
  if (local_18 <= dVar4) {
    dVar1 = dVar4;
  }
  dVar4 = (pMVar2->LasingMediumProperties).Data.SpontaneousLifetime_s * 1e-09 *
          (double)*(int *)((char *)&(this->Mirror) + 0x14) * 0.5;
  if (local_18 <= dVar4) {
    *(uint32_t *)&local_18 = dVar4;
  }
  if ((char)this[1]._pad_0x38_14 == '\0') {
    dVar4 = 0.0;
  }
  else {
    if ((char)this[1]._pad_0x38_14 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar4 = TurretSubModule__GetOuterRadius_m((TurretSubModule *)&(this->Turret).Data.field0_0x0);
  }
  dVar8 = 0.0;
  dVar7 = *(double *)&(this->ArcLamp).CachedPumpingBands_nm.Size;
  dVar4 = dVar7 + dVar7 + dVar4;
  if ((char)this[1]._pad_0x38_14 == '\0') {
    if ((char)this[1]._pad_0x68_26 != '\0') {
      dVar8 = *(double *)&this[1]._pad_0x60_24;
    }
  }
  else {
    if ((char)this[1]._pad_0x38_14 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
      if ((char)this[1]._pad_0x38_14 == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
    }
    dVar7 = TurretSubModule__GetExtruderLength_m((TurretSubModule *)&(this->Turret).Data.field0_0x0)
    ;
    dVar8 = TurretSubModule__GetOuterRadius_m((TurretSubModule *)&(this->Turret).Data.field0_0x0);
    dVar8 = dVar8 + dVar7;
  }
  dVar6 = -dVar4;
  dVar7 = -local_18;
  if (-local_18 <= local_18) {
    dVar7 = local_18;
  }
  dVar3 = -local_18;
  if (local_18 <= -local_18) {
    dVar3 = local_18;
  }
  (__return_storage_ptr__->Lower).X = dVar3;
  dVar3 = -dVar1;
  if (dVar1 <= -dVar1) {
    dVar3 = dVar1;
  }
  dVar5 = -dVar1;
  if (-dVar1 <= dVar1) {
    dVar5 = dVar1;
  }
  (__return_storage_ptr__->Lower).Y = dVar3;
  dVar4 = -dVar4;
  if (dVar8 <= dVar4) {
    dVar4 = dVar8;
  }
  if (dVar6 <= dVar8) {
    dVar6 = dVar8;
  }
  (__return_storage_ptr__->Lower).Z = dVar4;
  (__return_storage_ptr__->Upper).X = dVar7;
  (__return_storage_ptr__->Upper).Y = dVar5;
  (__return_storage_ptr__->Upper).Z = dVar6;
  return __return_storage_ptr__;
}

//==== 0063c9f0 GetComposition_0063c9f0 ====

/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   LaserModule__GetComposition(void)const  */

Darray_L_MaterialComposition_G_ * __thiscall
LaserModule__GetComposition(LaserModule *this,Darray_L_MaterialComposition_G_ *__return_storage_ptr__)

{
  MaterialComposition *pMVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  Material *pMVar5;
  int iVar6;
  int iVar7;
  Darray_L_MaterialComposition_G_ *this_00;
  bool bVar8;
  Material *pMVar9;
  undefined4 uStack_10;
  
  this_00 = __return_storage_ptr__;
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (MaterialComposition *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  Module__GetComposition((Module *)this,__return_storage_ptr__);
  pMVar5 = (this->Mirror).Composition;
  pMVar9 = pMVar5;
  if ((char)(pMVar5->MaterialMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
    pMVar9 = (this->Mirror).Composition;
  }
  iVar6 = *(int *)((char *)&(this->Mirror) + 0x14);
  dVar2 = (this->Mirror).CachedRadius_m;
  dVar3 = (pMVar5->LasingMediumProperties).Data.SpontaneousLifetime_s;
  iVar7 = this_00->Size;
  dVar4 = pMVar9->Density_kg__m3;
  __return_storage_ptr__ = (Darray_L_MaterialComposition_G_ *)(iVar7 + 1);
  util__Darray_L_MaterialConstituent_G___SetSize
            ((Darray_L_MaterialConstituent_G_ *)this_00,(int *)&__return_storage_ptr__);
  bVar8 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                    ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar7);
  if (bVar8) {
    pMVar1 = this_00->Data + this_00->Size + -1;
    pMVar1->Type = pMVar9;
    *(undefined4 *)&(*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar1) + 0x4)) = uStack_10;
    pMVar1->Mass_kg = dVar3 * 1e-09 * (double)iVar6 * dVar2 * dVar2 * 3.141592653589793 * dVar4;
  }
  return this_00;
}

//==== 0063cac0 GetCrewRequired_0063cac0 ====

/* public: virtual class util__Darray_L_structCrewJob_G_ __thiscall
   LaserModule__GetCrewRequired(void)const  */

Darray_L_CrewJob_G_ * __thiscall
LaserModule__GetCrewRequired(LaserModule *this,Darray_L_CrewJob_G_ *__return_storage_ptr__)

{
  bool bVar1;
  Str_L_char_G_ *pSVar2;
  LocStr *pLVar3;
  char *pcVar4;
  char *pcVar5;
  float10 fVar6;
  CrewJob local_7c;
  void *local_5c [3];
  void *local_50;
  Str_L_char_G_ local_44;
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  double local_14;
  double local_c;
  
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (CrewJob *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_120;
  __return_storage_ptr__->Data = (CrewJob *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  fVar6 = (float10)(**(code **)(this->_pad_0x0_0 + 0x198))();
  *(uint32_t *)&local_14 = 0.2;
  if (((double)fVar6 <= 0.0) ||
     (fVar6 = (float10)(**(code **)(this->_pad_0x0_0 + 0x19c))(), (double)fVar6 <= 0.0)) {
    bVar1 = false;
    local_c = 0.2;
  }
  else {
    bVar1 = true;
    local_c = 0.3;
  }
  util__Str_char___Str_char(&local_44,"CrewTechnician");
  pSVar2 = Module__GetQuickName((Module *)this,&local_38);
  if (pSVar2->Capacity < 1) {
    pcVar5 = "";
  }
  else {
    pcVar5 = pSVar2->Data;
  }
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  local_20.Length = 0;
  pLVar3 = (LocStr *)util__LocStr__LocStr((LocStr *)local_5c,&local_44,&local_20);
  pSVar2 = util__LocStr__operator__o3(pLVar3);
  if (pSVar2->Capacity < 1) {
    pcVar4 = "";
  }
  else {
    pcVar4 = pSVar2->Data;
  }
  util__Printf(&local_2c,(wchar_t*)(pcVar4),pcVar5);
  local_7c.Dept = CrewDepartment__Engineering;
  util__Str_char___Str_char(&local_7c.Name,&local_2c);
  local_7c.CrewRequired = local_c;
  local_7c.WatchRequired = false;
  if (local_2c.Data != (char *)0x0) {
    port_op_delete(local_2c.Data);
    local_2c.Data = (char *)0x0;
  }
  util__Darray_L_CrewJob_G___Add(__return_storage_ptr__,&local_7c);
  if (local_7c.Name.Data != (char *)0x0) {
    port_op_delete(local_7c.Name.Data);
  }
  if (local_50 != (void *)0x0) {
    port_op_delete(local_50);
    *(uint32_t *)&local_50 = (uint32_t)(uintptr_t)((void *)0x0);
  }
  if (local_5c[0] != (void *)0x0) {
    port_op_delete(local_5c[0]);
    local_5c[0] = (void *)0x0;
  }
  if (local_20.Data != (char *)0x0) {
    port_op_delete(local_20.Data);
    local_20.Data = (char *)0x0;
  }
  if (local_38.Data != (char *)0x0) {
    port_op_delete(local_38.Data);
    local_38.Data = (char *)0x0;
  }
  if (local_44.Data != (char *)0x0) {
    port_op_delete(local_44.Data);
  }
  if ((this->Turret).Data.field1_0x1 == '\0') {
    if (bVar1) {
      *(uint32_t *)&local_14 = 0.4;
    }
    util__Str_char___Str_char(&local_38,"CrewGunner");
    pSVar2 = Module__GetQuickName((Module *)this,&local_44);
    if (pSVar2->Capacity < 1) {
      pcVar5 = "";
    }
    else {
      pcVar5 = pSVar2->Data;
    }
    local_20.Data = (char *)0x0;
    local_20.Capacity = 0;
    local_20.Length = 0;
    pLVar3 = (LocStr *)util__LocStr__LocStr((LocStr *)local_5c,&local_38,&local_20);
    pSVar2 = util__LocStr__operator__o3(pLVar3);
    if (pSVar2->Capacity < 1) {
      pcVar4 = "";
    }
    else {
      pcVar4 = pSVar2->Data;
    }
    util__Printf(&local_2c,(wchar_t*)(pcVar4),pcVar5);
    local_7c.Dept = CrewDepartment__Weapons;
    util__Str_char___Str_char(&local_7c.Name,&local_2c);
    local_7c.CrewRequired = local_14;
    local_7c.WatchRequired = false;
    if (local_2c.Data != (char *)0x0) {
      port_op_delete(local_2c.Data);
      local_2c.Data = (char *)0x0;
    }
    util__Darray_L_CrewJob_G___Add(__return_storage_ptr__,&local_7c);
    if (local_7c.Name.Data != (char *)0x0) {
      port_op_delete(local_7c.Name.Data);
    }
    if (local_50 != (void *)0x0) {
      port_op_delete(local_50);
      *(uint32_t *)&local_50 = (uint32_t)(uintptr_t)((void *)0x0);
    }
    if (local_5c[0] != (void *)0x0) {
      port_op_delete(local_5c[0]);
      local_5c[0] = (void *)0x0;
    }
    if (local_20.Data != (char *)0x0) {
      port_op_delete(local_20.Data);
      local_20.Data = (char *)0x0;
    }
    if (local_44.Data != (char *)0x0) {
      port_op_delete(local_44.Data);
      local_44.Data = (char *)0x0;
    }
    if (local_38.Data != (char *)0x0) {
      port_op_delete(local_38.Data);
    }
  }
  return __return_storage_ptr__;
}

//==== 0063cdf0 GetEngagementRange_km_0063cdf0 ====

/* public: virtual class util__Maybe_L_double_G_ 
   LaserModule__GetEngagementRange_km(double)const  */

Maybe_L_double_G_ * 
LaserModule__GetEngagementRange_km
          (LaserModule *this,Maybe_L_double_G_ *__return_storage_ptr__,double param_1)

{
  if ((this->Turret).Data.field1_0x1 != '\0') {
    __return_storage_ptr__->Data = 0.0;
    __return_storage_ptr__->IsValidData = true;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Data = *(double *)&this[1]._pad_0x70_28;
  __return_storage_ptr__->IsValidData = true;
  return __return_storage_ptr__;
}

//==== 0063ce30 GetFiringVelocity_km__s_0063ce30 ====


/* public: virtual double __thiscall StandaloneLaserMountModule__GetFiringVelocity_km__s(void)const
    */

double __thiscall
StandaloneLaserMountModule__GetFiringVelocity_km__s(StandaloneLaserMountModule *this)

{
  return 299792.458;
}





//==== 0063ce40 GetMaxDeviationAngle_radians_0063ce40 ====

/* public: virtual double __thiscall LaserModule__GetMaxDeviationAngle_radians(void)const  */

double __thiscall LaserModule__GetMaxDeviationAngle_radians(LaserModule *this)

{
  double dVar1;
  
  if ((char)this[1]._pad_0x38_14 != '\0') {
    if ((char)this[1]._pad_0x38_14 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar1 = TurretSubModule__GetMaxDeviationAngle_radians
                      ((TurretSubModule *)&(this->Turret).Data.field0_0x0);
    return dVar1;
  }
  return 0.0;
}

//==== 0063cea0 GetTurningAngularVelocity_radians__s_0063cea0 ====

/* public: virtual double __thiscall LaserModule__GetTurningAngularVelocity_radians__s(void)const
    */

double __thiscall LaserModule__GetTurningAngularVelocity_radians__s(LaserModule *this)

{
  double dVar1;
  
  if ((char)this[1]._pad_0x38_14 != '\0') {
    if ((char)this[1]._pad_0x38_14 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar1 = TurretSubModule__GetRotationalSpeed_radians__s
                      ((TurretSubModule *)&(this->Turret).Data.field0_0x0);
    return dVar1;
  }
  return 0.0;
}

//==== 0063cf00 GetTurningPowerDrain_W_0063cf00 ====

/* public: virtual double __thiscall LaserModule__GetTurningPowerDrain_W(void)const  */

double __thiscall LaserModule__GetTurningPowerDrain_W(LaserModule *this)

{
  double dVar1;
  
  if ((char)this[1]._pad_0x38_14 != '\0') {
    if ((char)this[1]._pad_0x38_14 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar1 = TurretSubModule__GetPowerConsumption_W
                      ((TurretSubModule *)&(this->Turret).Data.field0_0x0);
    return dVar1;
  }
  return 0.0;
}

//==== 0063cf60 GetShotCreationOffset_m_0063cf60 ====

/* public: virtual double __thiscall LaserModule__GetShotCreationOffset_m(void)const  */

double __thiscall LaserModule__GetShotCreationOffset_m(LaserModule *this)

{
  float10 fVar1;
  double dVar2;
  
  if ((char)this[1]._pad_0x38_14 == '\0') {
    dVar2 = 0.0;
  }
  else {
    dVar2 = TurretSubModule__GetOuterRadius_m((TurretSubModule *)&(this->Turret).Data.field0_0x0);
  }
  fVar1 = (float10)(**(code **)(*(int *)&(this->FocusingMirror).CachedWavelength_nm + 0x7c))();
  return (double)(fVar1 + (float10)dVar2);
}

//==== 0063cfb0 GetCenterExtrusionOffset_m_0063cfb0 ====

/* public: virtual double __thiscall LaserModule__GetCenterExtrusionOffset_m(void)const  */

double __thiscall LaserModule__GetCenterExtrusionOffset_m(LaserModule *this)

{
  double dVar1;
  
  if ((char)this[1]._pad_0x38_14 != '\0') {
    if ((char)this[1]._pad_0x38_14 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar1 = TurretSubModule__GetExtruderLength_m((TurretSubModule *)&(this->Turret).Data.field0_0x0)
    ;
    return dVar1;
  }
  return 0.0;
}

//==== 0063d3c0 CanOnlyFeedAnotherWeapon ====


/* public: virtual bool __thiscall LaserModule__CanOnlyFeedAnotherWeapon(void)const  */

bool __thiscall LaserModule__CanOnlyFeedAnotherWeapon(LaserModule *this)

{
  return (bool)(this->Turret).Data.field1_0x1;
}





//==== 0063d3d0 GetEnergyNeededToFire_J_0063d3d0 ====


/* public: virtual double __thiscall LaserModule__GetEnergyNeededToFire_J(double)const  */

double __thiscall LaserModule__GetEnergyNeededToFire_J(LaserModule *this,double param_1)

{
  return (this->ArcLamp).CavitySemiminorAxis_m * param_1;
}





//==== 0063d3e0 GetHeatFromFire_J_0063d3e0 ====

/* public: virtual double __thiscall LaserModule__GetHeatFromFire_J(double)const  */

double __thiscall LaserModule__GetHeatFromFire_J(LaserModule *this,double param_1)

{
  double dVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int local_8;
  
  if ((char)(this->ArcLamp)._pad_0x8_2 == '\0') {
    iVar2 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
    local_8 = iVar2 + 1;
    util__Darray_L_util__tuple2_L_Order__Type_Cint_G___G___SetSize
              ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)&this->GetFinalWavelength_nm_MemoizedValue,
               &local_8);
    bVar4 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &this->GetFinalWavelength_nm_MemoizedValue,iVar2);
    if (bVar4) {
      iVar2 = *(int *)((int)&(this->GetFinalWavelength_nm_MemoizedValue).Data + 4);
      iVar3 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
      *(code **)(iVar2 + -8 + iVar3 * 8) = (long long int (*)())(GetHeatingRate_W_Clear);
      *(undefined4 *)(iVar2 + -4 + iVar3 * 8) = 0;
    }
    GetHeatGenerated_W_Memoize();
    if ((this->GetHeatingRate_W_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar1 = (this->GetHeatingRate_W_MemoizedValue).Data;
    iStack_10 = CONCAT31((*(uint24_t*)((char*)&(iStack_10)+1)),1);
    *(uint32_t *)&local_18 = SUB84(dVar1,0);
    iStack_14 = (int)((ulonglong)dVar1 >> 0x20);
    (this->ArcLamp)._pad_0x0_0 = local_18;
    (this->ArcLamp)._pad_0x4_1 = iStack_14;
    (this->ArcLamp)._pad_0x8_2 = iStack_10;
    (this->ArcLamp)._pad_0xc_3 = iStack_c;
    if ((char)(this->ArcLamp)._pad_0x8_2 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  return *(double *)&this->ArcLamp * param_1;
}

//==== 0063d4c0 GetCoolantProperties_0063d4c0 ====

/* public: virtual class util__Maybe_L_structModuleCoolantProperties_G_ __thiscall
   LaserModule__GetCoolantProperties(void)const  */

Maybe_L_ModuleCoolantProperties_G_ * __thiscall
LaserModule__GetCoolantProperties
          (LaserModule *this,Maybe_L_ModuleCoolantProperties_G_ *__return_storage_ptr__)

{
  undefined8 stack0xffffffe5;
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  double *pdVar6;
  Material *pMVar7;
  undefined8 uVar8;
  bool bVar9;
  double dVar10;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined8 local_c;
  
  uVar8 = _uStack_1c;
  GetHeatGenerated_W_Memoize();
  if ((this->GetHeatingRate_W_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if ((this->GetMirrorFocalLengthLimit_m_MemoizedValue).IsValidData == false) {
    iVar4 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
    local_c = (double)CONCAT44(iVar4 + 1,(undefined4)local_c);
    util__Darray_L_util__tuple2_L_Order__Type_Cint_G___G___SetSize
              ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)&this->GetFinalWavelength_nm_MemoizedValue,
               (int *)((int)&local_c + 4));
    bVar9 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &this->GetFinalWavelength_nm_MemoizedValue,iVar4);
    if (bVar9) {
      iVar4 = *(int *)((int)&(this->GetFinalWavelength_nm_MemoizedValue).Data + 4);
      iVar5 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
      *(code **)(iVar4 + -8 + iVar5 * 8) = (long long int (*)())(GetFiringTemperatureJump_K_Clear);
      *(undefined4 *)(iVar4 + -4 + iVar5 * 8) = 0;
    }
    GetHeatGenerated_W_Memoize();
    if ((this->GetHeatingRate_W_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    pdVar6 = (this->ArcLamp).CachedPumpingBands_nm.Data;
    local_c = TurbopumpSubModule__GetMassFlowRate_kg__s
                        ((TurbopumpSubModule *)&(this->CoolantTurbopump).RotationalSpeed_RPM);
    local_c = local_c * pdVar6[0x12];
    _uStack_1c = CONCAT71(stack0xffffffe5,1);
    uStack_18 = SUB84(uVar8,4);
    (this->GetMirrorFocalLengthLimit_m_MemoizedValue).Data =
         (this->GetHeatingRate_W_MemoizedValue).Data / local_c;
    *(undefined4 *)&(this->GetMirrorFocalLengthLimit_m_MemoizedValue).IsValidData = uStack_1c;
    *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetMirrorFocalLengthLimit_m_MemoizedValue)) + 0xc)) = uStack_18;
    if ((this->GetMirrorFocalLengthLimit_m_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  dVar1 = *(double *)&(this->FrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x8_2;
  dVar2 = (this->GetMirrorFocalLengthLimit_m_MemoizedValue).Data;
  bVar9 = ArcLampPumpSubModule__IsCavityShapeValid
                    ((ArcLampPumpSubModule *)&(this->ArcLamp).GetMaxPowerLine_W_MemoizedValue);
  if (bVar9) {
    local_c = ArcLampPumpSubModule__GetCavityArea_m2
                        ((ArcLampPumpSubModule *)&(this->ArcLamp).GetMaxPowerLine_W_MemoizedValue);
    local_c = local_c * *(double *)&(this->ArcLamp).CachedLasingRodComposition;
  }
  else {
    local_c = 0.0;
  }
  pMVar7 = (Material *)(this->ArcLamp).CachedPumpingBands_nm.Data;
  dVar10 = TurbopumpSubModule__GetMassFlowRate_kg__s
                     ((TurbopumpSubModule *)&(this->CoolantTurbopump).RotationalSpeed_RPM);
  dVar3 = (this->GetHeatingRate_W_MemoizedValue).Data;
  (__return_storage_ptr__->Data).Volume_m3 = local_c;
  (__return_storage_ptr__->Data).MassFlowRate_kg__s = dVar10;
  (__return_storage_ptr__->Data).Coolant = pMVar7;
  (__return_storage_ptr__->Data).PeakTemperature_K = dVar1 + dVar2;
  (__return_storage_ptr__->Data).HeatTransferRate_W = dVar3;
  __return_storage_ptr__->IsValidData = true;
  return __return_storage_ptr__;
}

//==== 0063d670 GetStatuses_0063d670 ====

/* public: virtual class DesignStatusBuffer  LaserModule__GetStatuses(class DataParser
   *)const  */

DesignStatusBuffer * 
LaserModule__GetStatuses
          (LaserModule *this,DesignStatusBuffer *__return_storage_ptr__,DataParser *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  double *pdVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  double dVar8;
  Str_L_char_G_ *pSVar9;
  Str_L_char_G_ *pSVar10;
  Str_L_char_G_ *pSVar11;
  Str_L_char_G_ *pSVar12;
  ModulePlacer *pMVar13;
  undefined1 local_50 [4];
  Str_L_char_G_ local_4c;
  Str_L_char_G_ local_40;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  undefined1 local_1c [8];
  undefined8 uStack_14;
  double local_c;
  
  __return_storage_ptr__->DataManager = (DataParser *)0x0;
  (__return_storage_ptr__->Messages)._pad_0x0_0 = 0;
  (__return_storage_ptr__->Messages).Data = (DesignStatusMessage *)0x0;
  (__return_storage_ptr__->Messages).Size = 0;
  *(undefined8 *)&(__return_storage_ptr__->Messages).Capacity = 0;
  WeaponModule__GetStatuses((WeaponModule *)this,__return_storage_ptr__,param_1);
  util__Str_char___Str_char(&local_40,"LaserOutputFluxZero");
  pMVar13 = (ModulePlacer *)0x0;
  pSVar12 = &local_34;
  local_34.Data = (char *)0x0;
  pSVar11 = &local_28;
  local_34.Capacity = 0;
  pSVar10 = (Str_L_char_G_ *)(local_1c + 4);
  local_34.Length = 0;
  pSVar9 = &local_40;
  local_28.Data = (char *)0x0;
  local_28.Capacity = 0;
  local_28.Length = 0;
  (*(uint32_t*)((char*)&(local_1c)+4)) = 0;
  uStack_14 = 0.0;
  local_c = GetTotalOutputPhotonFlux__s();
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,local_c <= 0.0,pSVar9,pSVar10,pSVar11,pSVar12,pMVar13);
  if ((void *)(*(uint32_t*)((char*)&(local_1c)+4)) != (void *)0x0) {
    port_op_delete((void *)(*(uint32_t*)((char*)&(local_1c)+4)));
    *(uint64_t *)&local_1c = (uint64_t)((ulonglong)local_1c & 0xffffffff);
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_40.Data != (char *)0x0) {
    port_op_delete(local_40.Data);
  }
  util__Str_char___Str_char(&local_40,"LaserBeamQualityFactorTooHigh");
  *(uint64_t *)&local_1c = (uint64_t)((ulonglong)local_1c & 0xffffffff);
  uStack_14 = 0.0;
  local_28.Data = (char *)0x0;
  local_28.Capacity = 0;
  local_28.Length = 0;
  local_34.Data = (char *)0x0;
  local_34.Capacity = 0;
  local_34.Length = 0;
  dVar8 = GetThermalLensingQualityFactor(this);
  local_c = dVar8 * dVar8 + 9.0;
  param_1 = (DataParser *)util__Sqrt((Maybe_L_double_G_ *)local_50,&local_c);
  if ((bool)param_1->field_0x8 == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  DesignStatusBuffer__CheckWarning
            (__return_storage_ptr__,10.0 < *(double *)param_1,&local_40,&local_34,&local_28,
             (Str_L_char_G_ *)(local_1c + 4),(ModulePlacer *)0x0);
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if ((void *)(*(uint32_t*)((char*)&(local_1c)+4)) != (void *)0x0) {
    port_op_delete((void *)(*(uint32_t*)((char*)&(local_1c)+4)));
    *(uint64_t *)&local_1c = (uint64_t)((ulonglong)local_1c & 0xffffffff);
  }
  if (local_40.Data != (char *)0x0) {
    port_op_delete(local_40.Data);
  }
  util__Str_char___Str_char(&local_4c,"LaserArcLampMelt");
  local_40.Data = (char *)0x0;
  local_40.Capacity = 0;
  local_40.Length = 0;
  local_28.Data = (char *)0x0;
  local_28.Capacity = 0;
  local_28.Length = 0;
  local_34.Data = (char *)0x0;
  local_34.Capacity = 0;
  local_34.Length = 0;
  if ((this->GetMirrorFocalLengthLimit_m_MemoizedValue).IsValidData == false) {
    iVar2 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
    param_1 = (DataParser *)(iVar2 + 1);
    util__Darray_L_util__tuple2_L_Order__Type_Cint_G___G___SetSize
              ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)&this->GetFinalWavelength_nm_MemoizedValue,
               (int *)&param_1);
    bVar7 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &this->GetFinalWavelength_nm_MemoizedValue,iVar2);
    if (bVar7) {
      iVar2 = *(int *)((int)&(this->GetFinalWavelength_nm_MemoizedValue).Data + 4);
      iVar3 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
      *(code **)(iVar2 + -8 + iVar3 * 8) = (long long int (*)())(GetFiringTemperatureJump_K_Clear);
      *(undefined4 *)(iVar2 + -4 + iVar3 * 8) = 0;
    }
    GetHeatGenerated_W_Memoize();
    if ((this->GetHeatingRate_W_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    pdVar4 = (this->ArcLamp).CachedPumpingBands_nm.Data;
    local_c = TurbopumpSubModule__GetMassFlowRate_kg__s
                        ((TurbopumpSubModule *)&(this->CoolantTurbopump).RotationalSpeed_RPM);
    uVar5 = uStack_14;
    local_c = local_c * pdVar4[0x12];
    uStack_14 = (double)CONCAT71((*(uint56_t*)((char*)&(uStack_14)+1)),1);
    uVar6 = uStack_14;
    *(uint32_t *)&local_1c = (uint64_t)((this->GetHeatingRate_W_MemoizedValue).Data / local_c);
    (*(uint32_t*)((char*)&(uStack_14)+4)) = SUB84(uVar5,4);
    (this->GetMirrorFocalLengthLimit_m_MemoizedValue).Data = (double)(uintptr_t)((double)(int)(uintptr_t)(local_1c));
    *(undefined4 *)&((this->GetMirrorFocalLengthLimit_m_MemoizedValue).IsValidData) = (undefined4)uStack_14;
    *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetMirrorFocalLengthLimit_m_MemoizedValue)) + 0xc)) = (*(uint32_t*)((char*)&(uStack_14)+4));
    uStack_14 = (double)uVar6;
    if ((this->GetMirrorFocalLengthLimit_m_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  pSVar12 = &local_40;
  local_c = (this->GetMirrorFocalLengthLimit_m_MemoizedValue).Data +
            *(double *)&(this->FrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x8_2;
  pMVar13 = (ModulePlacer *)0x0;
  pSVar11 = &local_28;
  pSVar10 = &local_34;
  pSVar9 = &local_4c;
  uStack_14 = Material__GetSafeUseTemperature_K
                        (*(Material **)((int)&(this->ArcLamp).CavitySemimajorAxis_m + 4));
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,uStack_14 <= local_c,pSVar9,pSVar10,pSVar11,pSVar12,pMVar13);
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_40.Data != (char *)0x0) {
    port_op_delete(local_40.Data);
    local_40.Data = (char *)0x0;
  }
  if (local_4c.Data != (char *)0x0) {
    port_op_delete(local_4c.Data);
  }
  util__Str_char___Str_char(&local_4c,"LaserOpticalCavityMelt");
  local_28.Data = (char *)0x0;
  local_28.Capacity = 0;
  local_28.Length = 0;
  local_34.Data = (char *)0x0;
  local_34.Capacity = 0;
  local_34.Length = 0;
  local_40.Data = (char *)0x0;
  local_40.Capacity = 0;
  local_40.Length = 0;
  if ((this->GetMirrorFocalLengthLimit_m_MemoizedValue).IsValidData == false) {
    iVar2 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
    param_1 = (DataParser *)(iVar2 + 1);
    util__Darray_L_util__tuple2_L_Order__Type_Cint_G___G___SetSize
              ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)&this->GetFinalWavelength_nm_MemoizedValue,
               (int *)&param_1);
    bVar7 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &this->GetFinalWavelength_nm_MemoizedValue,iVar2);
    if (bVar7) {
      iVar2 = *(int *)((int)&(this->GetFinalWavelength_nm_MemoizedValue).Data + 4);
      iVar3 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
      *(code **)(iVar2 + -8 + iVar3 * 8) = (long long int (*)())(GetFiringTemperatureJump_K_Clear);
      *(undefined4 *)(iVar2 + -4 + iVar3 * 8) = 0;
    }
    GetHeatGenerated_W_Memoize();
    if ((this->GetHeatingRate_W_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    pdVar4 = (this->ArcLamp).CachedPumpingBands_nm.Data;
    dVar8 = TurbopumpSubModule__GetMassFlowRate_kg__s
                      ((TurbopumpSubModule *)&(this->CoolantTurbopump).RotationalSpeed_RPM);
    dVar8 = dVar8 * pdVar4[0x12];
    *(uint32_t *)&local_1c = (uint64_t)((this->GetHeatingRate_W_MemoizedValue).Data / dVar8);
    (*(uint56_t*)((char*)&(uStack_14)+1)) = (undefined7)((ulonglong)dVar8 >> 8);
    uStack_14 = (double)CONCAT71((*(uint56_t*)((char*)&(uStack_14)+1)),1);
    uVar5 = uStack_14;
    (*(uint32_t*)((char*)&(uStack_14)+4)) = (undefined4)((ulonglong)dVar8 >> 0x20);
    (this->GetMirrorFocalLengthLimit_m_MemoizedValue).Data = (double)(uintptr_t)((double)(int)(uintptr_t)(local_1c));
    *(undefined4 *)&((this->GetMirrorFocalLengthLimit_m_MemoizedValue).IsValidData) = (undefined4)uStack_14;
    *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetMirrorFocalLengthLimit_m_MemoizedValue)) + 0xc)) = (*(uint32_t*)((char*)&(uStack_14)+4));
    if ((this->GetMirrorFocalLengthLimit_m_MemoizedValue).IsValidData == false) {
      uStack_14 = (double)uVar5;
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  pSVar12 = &local_28;
  uStack_14 = (this->GetMirrorFocalLengthLimit_m_MemoizedValue).Data +
              *(double *)&(this->FrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x8_2;
  pMVar13 = (ModulePlacer *)0x0;
  pSVar11 = &local_34;
  pSVar10 = &local_40;
  pSVar9 = &local_4c;
  local_c = Material__GetSafeUseTemperature_K
                      ((Material *)(this->ArcLamp).CachedPumpingBands_nm._pad_0x0_0);
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,local_c <= uStack_14,pSVar9,pSVar10,pSVar11,pSVar12,pMVar13);
  if (local_40.Data != (char *)0x0) {
    port_op_delete(local_40.Data);
    local_40.Data = (char *)0x0;
  }
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_4c.Data != (char *)0x0) {
    port_op_delete(local_4c.Data);
  }
  util__Str_char___Str_char(&local_4c,"LaserMirrorMelt");
  local_28.Data = (char *)0x0;
  local_28.Capacity = 0;
  local_28.Length = 0;
  local_34.Data = (char *)0x0;
  local_34.Capacity = 0;
  local_34.Length = 0;
  local_40.Data = (char *)0x0;
  local_40.Capacity = 0;
  local_40.Length = 0;
  if ((this->GetMirrorFocalLengthLimit_m_MemoizedValue).IsValidData == false) {
    iVar2 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
    param_1 = (DataParser *)(iVar2 + 1);
    util__Darray_L_util__tuple2_L_Order__Type_Cint_G___G___SetSize
              ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)&this->GetFinalWavelength_nm_MemoizedValue,
               (int *)&param_1);
    bVar7 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &this->GetFinalWavelength_nm_MemoizedValue,iVar2);
    if (bVar7) {
      iVar2 = *(int *)((int)&(this->GetFinalWavelength_nm_MemoizedValue).Data + 4);
      iVar3 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
      *(code **)(iVar2 + -8 + iVar3 * 8) = (long long int (*)())(GetFiringTemperatureJump_K_Clear);
      *(undefined4 *)(iVar2 + -4 + iVar3 * 8) = 0;
    }
    GetHeatGenerated_W_Memoize();
    if ((this->GetHeatingRate_W_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    pdVar4 = (this->ArcLamp).CachedPumpingBands_nm.Data;
    dVar8 = TurbopumpSubModule__GetMassFlowRate_kg__s
                      ((TurbopumpSubModule *)&(this->CoolantTurbopump).RotationalSpeed_RPM);
    dVar8 = dVar8 * pdVar4[0x12];
    *(uint32_t *)&local_1c = (uint64_t)((this->GetHeatingRate_W_MemoizedValue).Data / dVar8);
    (*(uint56_t*)((char*)&(uStack_14)+1)) = (undefined7)((ulonglong)dVar8 >> 8);
    uStack_14 = (double)CONCAT71((*(uint56_t*)((char*)&(uStack_14)+1)),1);
    uVar5 = uStack_14;
    (*(uint32_t*)((char*)&(uStack_14)+4)) = (undefined4)((ulonglong)dVar8 >> 0x20);
    (this->GetMirrorFocalLengthLimit_m_MemoizedValue).Data = (double)(uintptr_t)((double)(int)(uintptr_t)(local_1c));
    *(undefined4 *)&((this->GetMirrorFocalLengthLimit_m_MemoizedValue).IsValidData) = (undefined4)uStack_14;
    *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetMirrorFocalLengthLimit_m_MemoizedValue)) + 0xc)) = (*(uint32_t*)((char*)&(uStack_14)+4));
    if ((this->GetMirrorFocalLengthLimit_m_MemoizedValue).IsValidData == false) {
      uStack_14 = (double)uVar5;
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  pSVar12 = &local_28;
  uStack_14 = (this->GetMirrorFocalLengthLimit_m_MemoizedValue).Data +
              *(double *)&(this->FrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x8_2;
  pMVar13 = (ModulePlacer *)0x0;
  pSVar11 = &local_34;
  pSVar10 = &local_40;
  pSVar9 = &local_4c;
  local_c = Material__GetSafeUseTemperature_K((Material *)&(this->Mirror).CachedIsMirror);
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,local_c <= uStack_14,pSVar9,pSVar10,pSVar11,pSVar12,pMVar13);
  if (local_40.Data != (char *)0x0) {
    port_op_delete(local_40.Data);
    local_40.Data = (char *)0x0;
  }
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_4c.Data != (char *)0x0) {
    port_op_delete(local_4c.Data);
  }
  util__Str_char___Str_char(&local_4c,"LaserOutputCouplerMelt");
  local_28.Data = (char *)0x0;
  local_28.Capacity = 0;
  local_28.Length = 0;
  local_34.Data = (char *)0x0;
  local_34.Capacity = 0;
  local_34.Length = 0;
  local_40.Data = (char *)0x0;
  local_40.Capacity = 0;
  local_40.Length = 0;
  if ((this->GetMirrorFocalLengthLimit_m_MemoizedValue).IsValidData == false) {
    iVar2 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
    param_1 = (DataParser *)(iVar2 + 1);
    util__Darray_L_util__tuple2_L_Order__Type_Cint_G___G___SetSize
              ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)&this->GetFinalWavelength_nm_MemoizedValue,
               (int *)&param_1);
    bVar7 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &this->GetFinalWavelength_nm_MemoizedValue,iVar2);
    if (bVar7) {
      iVar2 = *(int *)((int)&(this->GetFinalWavelength_nm_MemoizedValue).Data + 4);
      iVar3 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
      *(code **)(iVar2 + -8 + iVar3 * 8) = (long long int (*)())(GetFiringTemperatureJump_K_Clear);
      *(undefined4 *)(iVar2 + -4 + iVar3 * 8) = 0;
    }
    GetHeatGenerated_W_Memoize();
    if ((this->GetHeatingRate_W_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    pdVar4 = (this->ArcLamp).CachedPumpingBands_nm.Data;
    dVar8 = TurbopumpSubModule__GetMassFlowRate_kg__s
                      ((TurbopumpSubModule *)&(this->CoolantTurbopump).RotationalSpeed_RPM);
    dVar8 = dVar8 * pdVar4[0x12];
    *(uint32_t *)&local_1c = (uint64_t)((this->GetHeatingRate_W_MemoizedValue).Data / dVar8);
    (*(uint56_t*)((char*)&(uStack_14)+1)) = (undefined7)((ulonglong)dVar8 >> 8);
    uStack_14 = (double)CONCAT71((*(uint56_t*)((char*)&(uStack_14)+1)),1);
    uVar5 = uStack_14;
    (*(uint32_t*)((char*)&(uStack_14)+4)) = (undefined4)((ulonglong)dVar8 >> 0x20);
    (this->GetMirrorFocalLengthLimit_m_MemoizedValue).Data = (double)(uintptr_t)((double)(int)(uintptr_t)(local_1c));
    *(undefined4 *)&((this->GetMirrorFocalLengthLimit_m_MemoizedValue).IsValidData) = (undefined4)uStack_14;
    *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetMirrorFocalLengthLimit_m_MemoizedValue)) + 0xc)) = (*(uint32_t*)((char*)&(uStack_14)+4));
    if ((this->GetMirrorFocalLengthLimit_m_MemoizedValue).IsValidData == false) {
      uStack_14 = (double)uVar5;
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  pSVar12 = &local_28;
  uStack_14 = (this->GetMirrorFocalLengthLimit_m_MemoizedValue).Data +
              *(double *)&(this->FrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x8_2;
  pMVar13 = (ModulePlacer *)0x0;
  pSVar11 = &local_34;
  pSVar10 = &local_40;
  pSVar9 = &local_4c;
  local_c = Material__GetSafeUseTemperature_K((Material *)&(this->OutputCoupler).CachedIsMirror);
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,local_c <= uStack_14,pSVar9,pSVar10,pSVar11,pSVar12,pMVar13);
  if (local_40.Data != (char *)0x0) {
    port_op_delete(local_40.Data);
    local_40.Data = (char *)0x0;
  }
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_4c.Data != (char *)0x0) {
    port_op_delete(local_4c.Data);
  }
  util__Str_char___Str_char(&local_4c,"LaserGainMediumMelt");
  local_28.Data = (char *)0x0;
  local_28.Capacity = 0;
  local_28.Length = 0;
  local_34.Data = (char *)0x0;
  local_34.Capacity = 0;
  local_34.Length = 0;
  local_40.Data = (char *)0x0;
  local_40.Capacity = 0;
  local_40.Length = 0;
  if ((this->GetMirrorFocalLengthLimit_m_MemoizedValue).IsValidData == false) {
    iVar2 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
    param_1 = (DataParser *)(iVar2 + 1);
    util__Darray_L_util__tuple2_L_Order__Type_Cint_G___G___SetSize
              ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)&this->GetFinalWavelength_nm_MemoizedValue,
               (int *)&param_1);
    bVar7 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &this->GetFinalWavelength_nm_MemoizedValue,iVar2);
    if (bVar7) {
      iVar2 = *(int *)((int)&(this->GetFinalWavelength_nm_MemoizedValue).Data + 4);
      iVar3 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
      *(code **)(iVar2 + -8 + iVar3 * 8) = (long long int (*)())(GetFiringTemperatureJump_K_Clear);
      *(undefined4 *)(iVar2 + -4 + iVar3 * 8) = 0;
    }
    GetHeatGenerated_W_Memoize();
    if ((this->GetHeatingRate_W_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    pdVar4 = (this->ArcLamp).CachedPumpingBands_nm.Data;
    dVar8 = TurbopumpSubModule__GetMassFlowRate_kg__s
                      ((TurbopumpSubModule *)&(this->CoolantTurbopump).RotationalSpeed_RPM);
    dVar8 = dVar8 * pdVar4[0x12];
    *(uint32_t *)&local_1c = (uint64_t)((this->GetHeatingRate_W_MemoizedValue).Data / dVar8);
    (*(uint56_t*)((char*)&(uStack_14)+1)) = (undefined7)((ulonglong)dVar8 >> 8);
    uStack_14 = (double)CONCAT71((*(uint56_t*)((char*)&(uStack_14)+1)),1);
    uVar5 = uStack_14;
    (*(uint32_t*)((char*)&(uStack_14)+4)) = (undefined4)((ulonglong)dVar8 >> 0x20);
    (this->GetMirrorFocalLengthLimit_m_MemoizedValue).Data = (double)(uintptr_t)((double)(int)(uintptr_t)(local_1c));
    *(undefined4 *)&((this->GetMirrorFocalLengthLimit_m_MemoizedValue).IsValidData) = (undefined4)uStack_14;
    *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetMirrorFocalLengthLimit_m_MemoizedValue)) + 0xc)) = (*(uint32_t*)((char*)&(uStack_14)+4));
    if ((this->GetMirrorFocalLengthLimit_m_MemoizedValue).IsValidData == false) {
      uStack_14 = (double)uVar5;
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  pSVar12 = &local_28;
  uStack_14 = *(double *)&(this->FrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x8_2 +
              (this->GetMirrorFocalLengthLimit_m_MemoizedValue).Data;
  pMVar13 = (ModulePlacer *)0x0;
  pSVar11 = &local_34;
  pSVar10 = &local_40;
  pSVar9 = &local_4c;
  local_c = Material__GetSafeUseTemperature_K((this->Mirror).Composition);
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,local_c <= uStack_14,pSVar9,pSVar10,pSVar11,pSVar12,pMVar13);
  if (local_40.Data != (char *)0x0) {
    port_op_delete(local_40.Data);
    local_40.Data = (char *)0x0;
  }
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_4c.Data != (char *)0x0) {
    port_op_delete(local_4c.Data);
  }
  util__Str_char___Str_char(&local_4c,"LaserCoolantFreeze");
  pSVar12 = &local_28;
  pMVar13 = (ModulePlacer *)0x0;
  pSVar11 = &local_34;
  local_28.Data = (char *)0x0;
  pSVar10 = &local_40;
  local_28.Capacity = 0;
  pSVar9 = &local_4c;
  local_28.Length = 0;
  local_34.Data = (char *)0x0;
  local_34.Capacity = 0;
  local_34.Length = 0;
  local_40.Data = (char *)0x0;
  local_40.Capacity = 0;
  local_40.Length = 0;
  uStack_14 = Material__GetSafeUseTemperature_K
                        ((Material *)(this->ArcLamp).CachedPumpingBands_nm.Data);
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,
             *(double *)&(this->FrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x8_2 <= uStack_14,pSVar9
             ,pSVar10,pSVar11,pSVar12,pMVar13);
  if (local_40.Data != (char *)0x0) {
    port_op_delete(local_40.Data);
    local_40.Data = (char *)0x0;
  }
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_4c.Data != (char *)0x0) {
    port_op_delete(local_4c.Data);
  }
  if ((char)this[1]._pad_0x38_14 != '\0') {
    util__Str_char___Str_char(&local_4c,"LaserLensTooBig");
    uStack_14 = (this->FocusingMirror).CachedRadius_m * 1.5;
    local_28.Data = (char *)0x0;
    local_28.Capacity = 0;
    local_28.Length = 0;
    local_34.Data = (char *)0x0;
    local_34.Capacity = 0;
    local_34.Length = 0;
    local_40.Data = (char *)0x0;
    local_40.Capacity = 0;
    local_40.Length = 0;
    if ((char)this[1]._pad_0x38_14 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    puVar1 = &(this->Turret).Data.field0_0x0;
    DesignStatusBuffer__CheckError
              (__return_storage_ptr__,
               *(double *)puVar1 <= uStack_14 && uStack_14 != *(double *)puVar1,&local_4c,&local_40,
               &local_34,&local_28,(ModulePlacer *)0x0);
    if (local_40.Data != (char *)0x0) {
      port_op_delete(local_40.Data);
      local_40.Data = (char *)0x0;
    }
    if (local_34.Data != (char *)0x0) {
      port_op_delete(local_34.Data);
      local_34.Data = (char *)0x0;
    }
    if (local_28.Data != (char *)0x0) {
      port_op_delete(local_28.Data);
      local_28.Data = (char *)0x0;
    }
    if (local_4c.Data != (char *)0x0) {
      port_op_delete(local_4c.Data);
    }
  }
  return __return_storage_ptr__;
}

//==== 0063e380 GetInfoBoxes_0063e380 ====


/* public: virtual class util__Darray_L_structInfoBox_G_ __thiscall
   LaserModule__GetInfoBoxes(void)const  */

Darray_L_struct_InfoBox_G_ * __thiscall LaserModule__GetInfoBoxes(LaserModule *this, Darray_L_struct_InfoBox_G_ *__return_buf__)

{
  Darray_L_struct_InfoBox_G_ *in_stack_00000004 = __return_buf__;
  undefined8 stack0xfffffffc;
  LocStr *pLVar1;
  Str_L_char_G_ *pSVar2;
  InfoBox *pIVar3;
  Darray_L_struct_InfoBox_G_ *pDVar4;
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
  util__Str_char___Str_char(&SStack_20,"InfoBox LaserVitals Tooltip");
  SStack_14.Data = (char *)0x0;
  SStack_14.Capacity = 0;
  SStack_14.Length = 0;
  pcStack_94 = (char *)0x63e3ee;
  pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_3c,&SStack_20,&SStack_14);
  pSVar2 = util__LocStr__operator__o3(pLVar1);
  uVar5 = 0;
  uVar6 = 0;
  util__Str_char___Str_char((Str_L_char_G_ *)&pcStack_94,pSVar2);
  pIVar3 = (InfoBox *)
           InfoBox__InfoBox(&IStack_74,Icons__Laser,this,(_func___cdecl_Str_L_char_G__void_ptr*)(util__DelegateFactory_class_LaserModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_LaserModule__GetLaserInfo_void_const__0),0,0,0,(void *)(uintptr_t)(uVar5),(_func___cdecl_Str_L_char_G__void_ptr*)(uVar6),0,0,0,(Delegate_L_bool_G_){0},0);
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
  pDVar4 = WeaponModule__GetInfoBoxes((WeaponModule *)this,pDVar4);
  util__Darray_struct_InfoBox___operator(in_stack_00000004,pDVar4);
  ppuStack_24 = &vftable_127;
  if ((InfoBox *)SStack_20.Data != (InfoBox *)0x0) {
    InfoBox___vector_deleting_destructor((InfoBox *)SStack_20.Data,3);
  }
  util__Str_char___Str_char(&SStack_20,"InfoBox LaserIntensity Tooltip");
  SStack_14.Data = (char *)0x0;
  SStack_14.Capacity = 0;
  SStack_14.Length = 0;
  pcStack_94 = (char *)0x63e53b;
  pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_3c,&SStack_20,&SStack_14);
  pSVar2 = util__LocStr__operator__o3(pLVar1);
  uVar5 = 0;
  uVar6 = 0;
  util__Str_char___Str_char((Str_L_char_G_ *)&pcStack_94,pSVar2);
  pIVar3 = (InfoBox *)
           InfoBox__InfoBox(&IStack_74,Icons__Sun,this,(_func___cdecl_Str_L_char_G__void_ptr*)(util__DelegateFactory_class_LaserModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_LaserModule__GetQuickFluenceInfo_void_const__0),0,0,0,(void *)(uintptr_t)(uVar5),(_func___cdecl_Str_L_char_G__void_ptr*)(uVar6),0,0,0,(Delegate_L_bool_G_){0},0);
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
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return in_stack_00000004;
}





//==== 0063faa0 GenerateQuickDiagrams_0063faa0 ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual class util__Darray_L_structUIWidget_P_G_ __thiscall
   LaserModule__GenerateQuickDiagrams(class Manager *)const  */

Manager * __thiscall LaserModule__GenerateQuickDiagrams(LaserModule *this,Manager *param_1)

{
  ActorHandler *pAVar1;
  bool bVar2;
  UIWidget *pUVar3;
  GameManager *pGVar4;
  int iVar5;
  Manager *in_stack_00000008;
  LaserModule *local_8;
  
  local_8 = this;
  pUVar3 = (UIWidget *)(uintptr_t)(GenerateDamageRangeChart(this,in_stack_00000008));
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
  local_8 = (LaserModule *)((int)&pAVar1->Parent + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)param_1,(int *)&local_8);
  bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)param_1,(int)pAVar1);
  if (bVar2) {
    *(UIWidget **)((int)param_1->Parent + (int)(param_1->ActorStore).Pointer * 4 + -4) = pUVar3;
  }
  return param_1;
}

//==== 0063fb50 GenerateDesignUI_0063fb50 ====

/* WARNING: Removing unreachable block (ram,0x00640117) */
/* WARNING: Removing unreachable block (ram,0x00640124) */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual struct UIWidget * __thiscall LaserModule__GenerateDesignUI(class Manager *)const
    */

UIWidget * __thiscall LaserModule__GenerateDesignUI(LaserModule *this,Manager *param_1)

{
  undefined8 stack0xfffff718;
  undefined8 stack0xfffff740;
  undefined8 stack0xfffff81c;
  undefined8 stack0xfffff850;
  undefined8 stack0xfffff888;
  Attribute_L_util__Color_G_ AVar1;
  UIAttributes UVar2;
  UIAttributes UVar3;
  LayoutAttributes LVar4;
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
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  UIWidget *pUVar20;
  LocStr *pLVar21;
  Str_L_char_G_ *pSVar22;
  Str_L_char_G_ *pSVar23;
  Str_L_char_G_ *pSVar24;
  Args *pAVar25;
  Color *pCVar26;
  UIAttributes *pUVar27;
  float *pfVar28;
  Data *pDVar29;
  undefined1 in_stack_fffff718 [32];
  float in_stack_fffff738;
  float in_stack_fffff73c;
  int iStack_7ec;
  undefined1 in_stack_fffff81c [44];
  undefined1 auVar30 [12];
  void *in_stack_fffff848;
  _func___cdecl_bool_void_ptr *in_stack_fffff84c;
  undefined1 auVar31 [12];
  undefined1 in_stack_fffff850 [28];
  int in_stack_fffff86c;
  void *in_stack_fffff870;
  _func___cdecl_bool_void_ptr *in_stack_fffff874;
  float in_stack_fffff878;
  void *in_stack_fffff87c;
  Str_L_char_G_ *pSVar32;
  _func___cdecl_bool_void_ptr *in_stack_fffff880;
  Args *in_stack_fffff884;
  Str_L_char_G_ *pSVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [44];
  undefined1 in_stack_fffff888 [220];
  float in_stack_fffff964;
  undefined4 in_stack_fffff968;
  float fVar40;
  void *in_stack_fffff96c;
  void *pvVar41;
  _func___cdecl_Color_void_ptr *in_stack_fffff970;
  _func___cdecl_Color_void_ptr *p_Var42;
  int in_stack_fffff974;
  float fVar43;
  int in_stack_fffff978;
  float fVar44;
  int in_stack_fffff97c;
  float fVar45;
  int in_stack_fffff980;
  float fVar46;
  float in_stack_fffff984;
  float fVar47;
  float in_stack_fffff988;
  float fVar48;
  float in_stack_fffff98c;
  float fVar49;
  float fVar50;
  float fVar51;
  Manager *pMVar52;
  UIAttributes local_65c;
  UIAttributes local_514;
  Args local_3cc [272];
  UIAttributes local_2bc;
  LayoutAttributes local_174;
  Color local_144;
  void *local_124 [3];
  void *local_118;
  void *local_10c [3];
  void *local_100;
  void *local_f4 [3];
  void *local_e8;
  LaserModule *local_dc;
  code *pcStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  Str_L_char_G_ local_c4;
  Str_L_char_G_ local_b8;
  Str_L_char_G_ local_ac;
  Str_L_char_G_ local_a0;
  Str_L_char_G_ local_94;
  Darray_L_util__SharedPtr_L_UIWidget_G___G_ local_88;
  Str_L_char_G_ local_78;
  Str_L_char_G_ local_6c;
  Str_L_char_G_ local_60;
  LaserModule *local_54;
  code *local_50;
  undefined **local_4c;
  void *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  void *local_38;
  Str_L_char_G_ SStack_34;
  LaserModule *local_28;
  code *pcStack_24;
  undefined8 uStack_20;
  undefined8 uStack_18;
  UIRowLayout *local_10;
  UIWidget *local_c;
  LineGraph *local_8;
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
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  *(uint32_t *)&local_10 = (uint32_t)(uintptr_t)((UIRowLayout *)0x0);
  *(uint32_t *)&local_10 = port_op_new(0x218);
  if (local_10 == (UIRowLayout *)0x0) {
    pUVar20 = (UIWidget *)0x0;
  }
  else {
    pUVar20 = (UIWidget *)(uintptr_t)(port_op_new(0x170));
    if (pUVar20 == (UIWidget *)0x0) {
      local_c = (UIWidget *)0x0;
    }
    else {
      fVar50 = 9.181979e-39;
      pMVar52 = param_1;
      local_c = pUVar20;
      UIAttributes__UIAttributes(&local_2bc,param_1);
      local_28 = (LaserModule *)0x0;
      uStack_20 = 0x3ff0000000000000;
      uStack_18 = 0x3ff0000000000000;
      pcStack_24 = (code *)0x0;
      local_2bc.FillProportion.Getter.Callee = (void *)0x0;
      local_2bc.FillProportion.Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0;
      local_2bc.FillProportion.Value.X = 0;
      local_2bc.FillProportion.Value.Y = 0x3ff00000;
      local_2bc.FillProportion.Value.Y = 1.0;
      in_stack_fffff848 = (void *)0x63fbdb;
      UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff850,&local_2bc);
      in_stack_fffff84c = (_func___cdecl_bool_void_ptr *)0x63fbe2;
      UVar3.Location.Value.Y = in_stack_fffff86c;
*(uint32_t *)&auVar31 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff850) + 4)));
      UVar3.Parent = (Manager *)(*(uint32_t*)&(in_stack_fffff850));
      UVar3.Tag.Data = (char *)(*(uint32_t*)&(auVar31));
      UVar3.Tag.Capacity = (*(uint32_t*)((char*)&(auVar31)+4));
      UVar3.Tag.Length = (*(uint32_t*)((char*)&(auVar31)+8));
      UVar3.Location.Getter.Callee = (void *)(int)(*(uint64_t *)((char *)&(in_stack_fffff850) + 16));
      UVar3.Location.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)(*(uint64_t *)((char *)&(in_stack_fffff850) + 16)) >> 0x20);
      UVar3.Location.Value.X = (*(uint32_t *)((char *)&(in_stack_fffff850) + 24));
      UVar3.Visible.Getter.Callee = in_stack_fffff870;
      UVar3.Visible.Getter.CallbackFunction = in_stack_fffff874;
      (*(uint32_t *)((char *)&(UVar3.Visible) + 8)) = in_stack_fffff878;
      UVar3.Enabled.Getter.Callee = in_stack_fffff87c;
      UVar3.Enabled.Getter.CallbackFunction = in_stack_fffff880;
      (*(uint32_t *)((char *)&(UVar3.Enabled) + 8)) = (uint32_t)(uintptr_t)(in_stack_fffff884);
*(uint32_t *)&auVar37 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff888) + 124)));
*(uint32_t *)&auVar38 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff888) + 140)));
      uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff888) + 0)),0);
      uVar35 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff888) + 0)),8);
      UVar3.DesiredSize.Getter.Callee = (void *)(int)uVar34;
      UVar3.DesiredSize.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar3.DesiredSize.Value.X = (int)uVar35;
      UVar3.DesiredSize.Value.Y = (int)((ulonglong)uVar35 >> 0x20);
      uVar34 = SUB248((*(uint32_t *)((char *)&(in_stack_fffff888) + 16)),0);
*(uint32_t *)&auVar36 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffff888) + 16)),8));
      UVar3.FillProportion.Getter.Callee = (void *)(int)uVar34;
      UVar3.FillProportion.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar3.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar36));
      UVar3.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar36)+8));
      uVar34 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff888) + 40)),0);
      UVar3.HitTestShape.Getter.Callee = (void *)(int)uVar34;
      UVar3.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)(int)((ulonglong)uVar34 >> 0x20));
      UVar3.HitTestShape.Value = SUB124((*(uint32_t *)((char *)&(in_stack_fffff888) + 40)),8);
      (*(uint32_t *)((char *)&(UVar3) + 108)) = (*(uint32_t *)((char *)&(in_stack_fffff888) + 52));
      uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff888) + 56)),0);
      UVar3.Depth.Getter.Callee = (void *)(int)uVar34;
      UVar3.Depth.Getter.CallbackFunction =
           (_func___cdecl_double_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar3.Depth.Value = (double)SUB168((*(uint32_t *)((char *)&(in_stack_fffff888) + 56)),8);
      uVar34 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff888) + 72)),0);
      UVar3.Icon.Getter.Callee = (void *)(int)uVar34;
      UVar3.Icon.Getter.CallbackFunction = (void (* (*)(void *))(void))((_func___cdecl__func___cdecl_void_ptr_void_ptr *)(int)((ulonglong)uVar34 >> 0x20));
      UVar3.Icon.Value = (_func___cdecl_void *)SUB124((*(uint32_t *)((char *)&(in_stack_fffff888) + 72)),8);
      uVar34 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff888) + 84)),0);
*(uint32_t *)&auVar31 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff888) + 84)),8));
      UVar3.Tooltip.Getter.Callee = (void *)(int)uVar34;
      UVar3.Tooltip.Getter.CallbackFunction =
           (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar3.Tooltip.Value.Data = (char *)(*(uint32_t*)&(auVar31));
      UVar3.Tooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar31)+4));
      UVar3.Tooltip.Value.Length = (*(uint32_t*)((char*)&(auVar31)+8));
      uVar34 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff888) + 104)),0);
*(uint32_t *)&auVar31 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff888) + 104)),8));
      UVar3.VerboseTooltip.Getter.Callee = (void *)(int)uVar34;
      UVar3.VerboseTooltip.Getter.CallbackFunction =
           (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar3.VerboseTooltip.Value.Data = (char *)(*(uint32_t*)&(auVar31));
      UVar3.VerboseTooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar31)+4));
      UVar3.VerboseTooltip.Value.Length = (*(uint32_t*)((char*)&(auVar31)+8));
      uVar34 = SUB128((*(uint32_t *)((char *)&(auVar37) + 0)),0);
      UVar3.TextFont.Data.Getter.Callee = (void *)(int)uVar34;
      UVar3.TextFont.Data.Getter.CallbackFunction =
           (_func___cdecl_Font_ptr_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar3.TextFont.Data.Value = (Font *)SUB124((*(uint32_t *)((char *)&(auVar37) + 0)),8);
      UVar3.TextFont.IsValidData = (bool)auVar37[0xc];
      (*(uint32_t *)((char *)&(UVar3.TextFont) + 13)) = (*(uint32_t *)((char *)&(auVar37) + 13));
      uVar34 = SUB408((*(uint32_t *)((char *)&(auVar38) + 0)),0);
*(uint32_t *)&auVar39 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar38) + 0)),8));
      UVar3.ForegroundColor.Data.Getter.Callee = (void *)(int)uVar34;
      UVar3.ForegroundColor.Data.Getter.CallbackFunction =
           (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
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
      UVar3.BackgroundColor.Data.Getter.Callee = (void *)(int)(*(uint64_t *)((char *)&(in_stack_fffff888) + 184));
      UVar3.BackgroundColor.Data.Getter.CallbackFunction =
           (_func___cdecl_Color_void_ptr *)(int)((ulonglong)(*(uint64_t *)((char *)&(in_stack_fffff888) + 184)) >> 0x20);
      UVar3.BackgroundColor.Data.Value._pad_0x0_0 = (*(uint32_t *)((char *)&(in_stack_fffff888) + 192));
      UVar3.BackgroundColor.Data.Value._pad_0x4_1 = (*(uint32_t *)((char *)&(in_stack_fffff888) + 196));
      UVar3.BackgroundColor.Data.Value._pad_0x8_2 = (*(uint32_t *)((char *)&(in_stack_fffff888) + 200));
      UVar3.BackgroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(in_stack_fffff888) + 204));
      UVar3.BackgroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(in_stack_fffff888) + 208));
      UVar3.BackgroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(in_stack_fffff888) + 212));
      UVar3.BackgroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(in_stack_fffff888) + 216));
      UVar3.BackgroundColor.Data.Value.Alpha = in_stack_fffff964;
      UVar3.BackgroundColor.IsValidData = SUB41(in_stack_fffff968,0);
      (*(uint32_t *)((char *)&(UVar3.BackgroundColor) + 41)) = SUB43(in_stack_fffff968,1);
      UVar3.TextColor.Data.Getter.Callee = in_stack_fffff96c;
      UVar3.TextColor.Data.Getter.CallbackFunction = in_stack_fffff970;
      UVar3.TextColor.Data.Value._pad_0x0_0 = in_stack_fffff974;
      UVar3.TextColor.Data.Value._pad_0x4_1 = in_stack_fffff978;
      UVar3.TextColor.Data.Value._pad_0x8_2 = in_stack_fffff97c;
      UVar3.TextColor.Data.Value._pad_0xc_3 = in_stack_fffff980;
      UVar3.TextColor.Data.Value.Hue_degrees = in_stack_fffff984;
      UVar3.TextColor.Data.Value.Saturation = in_stack_fffff988;
      UVar3.TextColor.Data.Value.Value = in_stack_fffff98c;
      UVar3.TextColor.Data.Value.Alpha = fVar50;
      (*(uint32_t *)((char *)&(UVar3.TextColor) + 40)) = (uint32_t)(uintptr_t)(pMVar52);
      UIWidget__UIWidget(pUVar20,UVar3);
      pUVar20->_pad_0x0_0 = (int)&vftable_308;
      pUVar20[1]._pad_0x0_0 = (int)this;
      UIAttributes___UIAttributes(&local_2bc);
    }
    local_8 = (LineGraph *)(uintptr_t)(port_op_new(0x278));
    if (local_8 == (LineGraph *)0x0) {
      local_8 = (LineGraph *)0x0;
    }
    else {
      util__Str_char___Str_char(&local_c4,"W");
      util__Str_char___Str_char(&local_ac,"LaserArcLampChart YAxis");
      util__Str_char___Str_char(&local_b8,"nm");
      util__Str_char___Str_char(&local_a0,"LaserArcLampChart XAxis");
      util__Str_char___Str_char(&local_94,"LaserArcLampChart Title");
      local_50 = util__DelegateFactory_L_LaserModule_Cutil__Darray_L_util__tuple2_L_double_Cutil__Vec3_L_double_G___G___G___G___MethodCallerConst_L__public__class_util__Darray_L_struct_util__tuple2_L_double_Cstruct_util__Vec3_L_double_G___G___G____thiscall_LaserModule__GetLaserPumpingBandsInChart_void_const__C0__G_
      ;
      pSVar33 = &local_c4;
      local_4c = (undefined **)(&vftable_229);
      local_48 = (void *)0x0;
      local_44 = 0;
      local_40 = 0;
      pcStack_24 = util__DelegateFactory_L_LaserModule_Cutil__Range_L_double_G___G___MethodCallerConst_L__public__struct_util__Range_L_double_G____thiscall_LaserModule__GetLaserSpectraChartYRanges_void_const__C0__G_
      ;
      uStack_20 = 0;
      uStack_18 = 0;
      pcStack_d8 = util__DelegateFactory_L_LaserModule_Cutil__Range_L_double_G___G___MethodCallerConst_L__public__struct_util__Range_L_double_G____thiscall_LaserModule__GetLaserSpectraChartXRanges_void_const__C0__G_
      ;
      uStack_d4 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      uStack_c8 = 0;
      local_78.Data = (char *)0x0;
      local_78.Capacity = 0;
      local_78.Length = 0;
      local_6c.Data = (char *)0x0;
      local_6c.Capacity = 0;
      local_6c.Length = 0;
      local_60.Data = (char *)0x0;
      local_60.Capacity = 0;
      local_60.Length = 0;
      local_dc = this;
      local_54 = this;
      local_28 = this;
      pLVar21 = (LocStr *)util__LocStr__LocStr((LocStr *)local_124,&local_ac,&local_78);
      pSVar22 = util__LocStr__operator__o3(pLVar21);
      pSVar32 = &local_b8;
      pLVar21 = (LocStr *)util__LocStr__LocStr((LocStr *)local_10c,&local_a0,&local_6c);
      pSVar23 = util__LocStr__operator__o3(pLVar21);
      *(uint32_t *)&in_stack_fffff86c = 0x63fd5b;
      pLVar21 = (LocStr *)util__LocStr__LocStr((LocStr *)local_f4,&local_94,&local_60);
      pSVar24 = util__LocStr__operator__o3(pLVar21);
      *(uint32_t *)&local_3c = 0;
      local_38 = (void *)0x0;
      util__Str_char___Str_char(&SStack_34,pSVar24);
      pAVar25 = (Args *)LineGraph__Args__Args__o3(local_3cc);
      *(undefined4 *)pAVar25 = local_3c;
      *(void **)(pAVar25 + 4) = local_38;
      in_stack_fffff870 = (void *)0x63fd9d;
      util__Str_char___operator__o8((Str_L_char_G_ *)(pAVar25 + 8),&SStack_34);
      if ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_34.Data !=
          (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0) {
        in_stack_fffff870 = (void *)0x63fdaa;
        port_op_delete(SStack_34.Data);
      }
      in_stack_fffff874 = (_func___cdecl_bool_void_ptr *)0x63fdb4;
      pAVar25 = LineGraph__Args__SetXAxis(pAVar25,pSVar23);
      in_stack_fffff878 = 9.182735e-39;
      pAVar25 = LineGraph__Args__SetXAxisUnits(pAVar25,pSVar32);
      in_stack_fffff87c = (void *)0x63fdc2;
      pAVar25 = LineGraph__Args__SetYAxis(pAVar25,pSVar22);
      in_stack_fffff884 = LineGraph__Args__SetYAxisUnits(pAVar25,pSVar33);
      *(LaserModule **)(in_stack_fffff884 + 0x68) = local_dc;
      *(code **)(uintptr_t)(in_stack_fffff884 + 0x6c) = pcStack_d8;
      *(undefined4 *)(in_stack_fffff884 + 0x70) = uStack_d4;
      *(undefined4 *)(in_stack_fffff884 + 0x74) = uStack_d0;
      *(LaserModule **)(in_stack_fffff884 + 0x9c) = this;
      *(ulonglong *)(in_stack_fffff884 + 0x78) = CONCAT44(uStack_c8,uStack_cc);
      *(code **)(uintptr_t)(in_stack_fffff884 + 0xa0) = (long long int (*)())(util__DelegateFactory_L_LaserModule_Cdouble_Cdouble_G___MethodCallerConst_L__private__double___thiscall_LaserModule__GetArclampSpectraIntensity_W_double_const__C0__G_);
      *(LaserModule **)(in_stack_fffff884 + 0x80) = (long long int (*)())(local_28);
      *(code **)(uintptr_t)(in_stack_fffff884 + 0x84) = pcStack_24;
      *(undefined4 *)(in_stack_fffff884 + 0x88) = (undefined4)uStack_20;
      *(undefined4 *)(in_stack_fffff884 + 0x8c) = (*(uint32_t*)((char*)&(uStack_20)+4));
      *(undefined8 *)(in_stack_fffff884 + 0x90) = uStack_18;
      *(LaserModule **)(in_stack_fffff884 + 0xe8) = local_54;
      *(code **)(uintptr_t)(in_stack_fffff884 + 0xec) = local_50;
      util__Darray_L_util__tuple2_L_double_Cutil__Vec3_L_double_G___G___G___op_assign
                ((Darray_L_util__tuple2_L_double_Cutil__Vec3_L_double_G___G___G_ *)(in_stack_fffff884 + 0xf0),
                 (Darray_L_struct_util__tuple2_L_double_Cstruct_util__Vec3_L_double_G___G___G_ *)&local_4c);
      local_4c = (undefined **)(&vftable_229);
      if (local_48 != (void *)0x0) {
        port_op_delete(local_48);
      }
      local_48 = (void *)0x0;
      local_4c = (undefined **)(&vftable);
      in_stack_fffff880 = (_func___cdecl_bool_void_ptr *)0x63fe59;
      LineGraph__Args__Args((Args *)&stack0xfffff888,in_stack_fffff884);
      pCVar26 = (Color *)util__Color__Color(&local_144,Preset__Green,1.0);
      util__Attribute_struct_util__Color___Attribute_struct_util__Color
                ((Attribute_L_util__Color_G_ *)&stack0xfffff718,pCVar26);
      local_38 = (void *)0x0;
      SStack_34.Data = (char *)0x0;
      SStack_34.Capacity = 0;
      SStack_34.Length = 200;
      pUVar27 = (UIAttributes *)UIAttributes__UIAttributes(&local_65c,param_1);
      local_28 = (LaserModule *)0x0;
      uStack_20 = 0x3ff0000000000000;
      uStack_18 = 0;
      pcStack_24 = (code *)0x0;
      (pUVar27->DesiredSize).Getter.Callee = local_38;
      (pUVar27->DesiredSize).Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_34.Data;
      (pUVar27->DesiredSize).Value.X = SStack_34.Capacity;
      (pUVar27->DesiredSize).Value.Y = SStack_34.Length;
      (pUVar27->FillProportion).Getter.Callee = (void *)0x0;
      (pUVar27->FillProportion).Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0
      ;
      *(undefined4 *)&(pUVar27->FillProportion).Value.X = 0;
      *(undefined4 *)((int)&(pUVar27->FillProportion).Value.X + 4) = 0x3ff00000;
      (pUVar27->FillProportion).Value.Y = 0.0;
      AVar1.Value.Value = in_stack_fffff738;
      AVar1.Getter.Callee = (void *)(int)(*(uint64_t*)&(in_stack_fffff718));
      AVar1.Getter.CallbackFunction =
           (_func___cdecl_Color_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(in_stack_fffff718)) >> 0x20);
      AVar1.Value._pad_0x0_0 = (*(uint32_t*)((char*)&(in_stack_fffff718)+8));
      AVar1.Value._pad_0x4_1 = (*(uint32_t *)((char *)&(in_stack_fffff718) + 12));
      AVar1.Value._pad_0x8_2 = (*(uint32_t *)((char *)&(in_stack_fffff718) + 16));
      AVar1.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(in_stack_fffff718) + 20));
      AVar1.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(in_stack_fffff718) + 24));
      AVar1.Value.Saturation = (float)(*(uint32_t *)((char *)&(in_stack_fffff718) + 28));
      AVar1.Value.Alpha = in_stack_fffff73c;
      pUVar27 = UIAttributes__SetForegroundColor(pUVar27,(*(Attribute_L_util__Color_G_ *)&((*(Attribute_L_util__Color_G_ *)&(AVar1)))));
      UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff740,pUVar27);
      local_8 = (LineGraph *)LineGraph__LineGraph(local_8);
      bVar18 = true;
      bVar17 = true;
      bVar16 = true;
      bVar15 = true;
      bVar14 = true;
      bVar13 = true;
      bVar11 = true;
      bVar10 = true;
      bVar9 = true;
      bVar8 = true;
      bVar7 = true;
      bVar6 = true;
      bVar5 = true;
    }
    local_88._pad_0x0_0 = (int)&vftable_48;
    bVar19 = true;
    bVar12 = true;
    local_88.Data = (SharedPtr_L_UIWidget_G_ *)0x0;
    local_88.Size = 0;
    local_88.Capacity = 0;
    pfVar28 = (float *)LayoutAttributes__LayoutAttributes(&local_174);
    *(undefined1 *)(pfVar28 + 0xb) = 1;
    pUVar27 = (UIAttributes *)UIAttributes__UIAttributes(&local_514,param_1);
    local_28 = (LaserModule *)0x0;
    uStack_20 = 0x3ff0000000000000;
    uStack_18 = 0x3ff0000000000000;
    pcStack_24 = (code *)0x0;
    (pUVar27->FillProportion).Getter.Callee = (void *)0x0;
    (pUVar27->FillProportion).Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0;
    *(undefined4 *)&(pUVar27->FillProportion).Value.X = 0;
    *(undefined4 *)((int)&(pUVar27->FillProportion).Value.X + 4) = 0x3ff00000;
    (pUVar27->FillProportion).Value.Y = 1.0;
    pUVar20 = local_c;
    pDVar29 = (Data *)(uintptr_t)(UILayout__Data__Add((Data *)&local_88,(UIWidget *)local_8));
    pDVar29 = (Data *)(uintptr_t)(UILayout__Data__Add(pDVar29,pUVar20));
    fVar50 = *pfVar28;
    fVar40 = pfVar28[1];
    pvVar41 = *(void **)&(pfVar28[2]);
    p_Var42 = *(_func___cdecl_Color_void_ptr *)&(pfVar28[3]);
    fVar43 = pfVar28[4];
    fVar44 = pfVar28[5];
    fVar45 = pfVar28[6];
    fVar46 = pfVar28[7];
    fVar47 = pfVar28[8];
    fVar48 = pfVar28[9];
    fVar49 = pfVar28[10];
    fVar51 = pfVar28[0xb];
    iStack_7ec = 0x63ffb7;
    UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff81c,pUVar27);
    UVar2.Enabled.Getter.Callee = in_stack_fffff848;
*(uint32_t *)&auVar31 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff81c) + 4)));
*(uint32_t *)&auVar30 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff81c) + 32)));
    UVar2.Parent = (Manager *)(*(uint32_t*)&(in_stack_fffff81c));
    UVar2.Tag.Data = (char *)(*(uint32_t*)&(auVar31));
    UVar2.Tag.Capacity = (*(uint32_t*)((char*)&(auVar31)+4));
    UVar2.Tag.Length = (*(uint32_t*)((char*)&(auVar31)+8));
    uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff81c) + 16)),0);
    uVar35 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff81c) + 16)),8);
    UVar2.Location.Getter.Callee = (void *)(int)uVar34;
    UVar2.Location.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar2.Location.Value.X = (int)uVar35;
    UVar2.Location.Value.Y = (int)((ulonglong)uVar35 >> 0x20);
    UVar2.Visible.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar30));
    UVar2.Visible.Getter.CallbackFunction =
         (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar30)) >> 0x20);
    UVar2.Visible.Value = (bool)auVar30[8];
    (*(uint24_t *)((char *)&(UVar2.Visible) + 9)) = (*(uint24_t*)((char*)&(auVar30)+9));
    UVar2.Enabled.Getter.CallbackFunction = in_stack_fffff84c;
    UVar2.Enabled.Value = (bool)in_stack_fffff850[0];
    (*(uint24_t *)((char *)&(UVar2.Enabled) + 9)) = (*(uint24_t*)((char*)&(in_stack_fffff850)+1));
    uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff850) + 4)),0);
    uVar35 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff850) + 4)),8);
    UVar2.DesiredSize.Getter.Callee = (void *)(int)uVar34;
    UVar2.DesiredSize.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar2.DesiredSize.Value.X = (int)uVar35;
    UVar2.DesiredSize.Value.Y = (int)((ulonglong)uVar35 >> 0x20);
    UVar2.FillProportion.Getter.Callee = (void *)(int)(*(uint64_t *)((char *)&(in_stack_fffff850) + 20));
    UVar2.FillProportion.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)(*(uint64_t *)((char *)&(in_stack_fffff850) + 20)) >> 0x20);
    UVar2.FillProportion.Value.X = in_stack_fffff86c;
    *(uint32_t *)&(UVar2.FillProportion.Value).Y = (uint32_t)(uintptr_t)in_stack_fffff870;
    *(uint32_t *)&(UVar2.FillProportion.Value).Y = (uint32_t)(uintptr_t)in_stack_fffff874;
    *(uint32_t *)((char *)&(UVar2.FillProportion.Value) + 16) = in_stack_fffff878;
    UVar2.HitTestShape.Getter.Callee = in_stack_fffff87c;
    UVar2.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)in_stack_fffff880);
    UVar2.HitTestShape.Value = (int)in_stack_fffff884;
    (*(uint32_t *)((char *)&(UVar2) + 108)) = (uint32_t)(uintptr_t)(in_stack_fffff888);
    LVar4.Margin.Getter.CallbackFunction = *(_func___cdecl_Vec2_L_int_G__void_ptr *)&(fVar40);
    LVar4.Margin.Getter.Callee = *(void **)&(fVar50);
    LVar4.Margin.Value.X = (int)pvVar41;
    LVar4.Margin.Value.Y = (int)p_Var42;
    LVar4.Padding.Getter.Callee = *(void **)&(fVar43);
    LVar4.Padding.Getter.CallbackFunction = *(_func___cdecl_int_void_ptr *)&(fVar44);
    LVar4.Padding.Value = (int)fVar45;
    LVar4.Background__HasBackground.Getter.Callee = *(void **)&(fVar46);
    LVar4.Background__HasBackground.Getter.CallbackFunction = *(_func___cdecl_bool_void_ptr *)&(fVar47);
    (*(uint32_t *)((char *)&(LVar4.Background__HasBackground) + 8)) = fVar48;
    (*(uint32_t *)((char *)&(LVar4) + 40)) = fVar49;
    (*(uint32_t *)((char *)&(LVar4) + 44)) = fVar51;
    pUVar20 = (UIWidget *)UIRowLayout__UIRowLayout(local_10,UVar2,LVar4,pDVar29);
  }
  if (bVar19) {
    UIAttributes___UIAttributes(&local_514);
  }
  if (bVar12) {
    Darray_L_util__SharedPtr_L_UIWidget_G___G___dtor(&local_88);
  }
  if (bVar13) {
    UIAttributes___UIAttributes(&local_65c);
  }
  if ((bVar14) &&
     (local_144._pad_0x0_0 = (int)&vftable_5,
     (void *)local_144._pad_0x4_1 != (void *)0x0)) {
    port_op_delete((void *)local_144._pad_0x4_1);
    local_144._pad_0x4_1 = 0;
  }
  if (bVar15) {
    LineGraph__Args___Args(local_3cc);
  }
  if (bVar16) {
    if (local_e8 != (void *)0x0) {
      port_op_delete(local_e8);
      local_e8 = (void *)0x0;
    }
    if (local_f4[0] != (void *)0x0) {
      port_op_delete(local_f4[0]);
      local_f4[0] = (void *)0x0;
    }
  }
  if ((bVar17) && (local_60.Data != (char *)0x0)) {
    port_op_delete(local_60.Data);
    local_60.Data = (char *)0x0;
  }
  if (bVar18) {
    if (local_100 != (void *)0x0) {
      port_op_delete(local_100);
      local_100 = (void *)0x0;
    }
    if (local_10c[0] != (void *)0x0) {
      port_op_delete(local_10c[0]);
      local_10c[0] = (void *)0x0;
    }
  }
  if (bVar6) {
    if (local_118 != (void *)0x0) {
      port_op_delete(local_118);
      local_118 = (void *)0x0;
    }
    if (local_124[0] != (void *)0x0) {
      port_op_delete(local_124[0]);
      local_124[0] = (void *)0x0;
    }
  }
  if ((bVar7) && (local_78.Data != (char *)0x0)) {
    port_op_delete(local_78.Data);
    local_78.Data = (char *)0x0;
  }
  if ((bVar8) && (local_94.Data != (char *)0x0)) {
    port_op_delete(local_94.Data);
    local_94.Data = (char *)0x0;
  }
  if ((bVar9) && (local_a0.Data != (char *)0x0)) {
    port_op_delete(local_a0.Data);
    local_a0.Data = (char *)0x0;
  }
  if ((bVar10) && (local_b8.Data != (char *)0x0)) {
    port_op_delete(local_b8.Data);
  }
  if ((bVar11) && (local_ac.Data != (char *)0x0)) {
    port_op_delete(local_ac.Data);
    local_ac.Data = (char *)0x0;
  }
  if ((local_c4.Data != (char *)0x0) && (bVar5)) {
    port_op_delete(local_c4.Data);
  }
  return pUVar20;
}

//==== 00640250 RenderInitialState_00640250 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void  LaserModule__RenderInitialState(double,class CameraManager
   *,class util__Darray_L_classutil__SharedPtr_L_classArmorTextureHandler_G__G_ const &,double,struct
   util__Vec3_L_double_G_)const  */

void 
LaserModule__RenderInitialState
          (LaserModule *this,double param_1,CameraManager *param_2,
          Darray_L_class_util__SharedPtr_L_class_ArmorTextureHandler_G___G_ *param_3,double param_4,
          Vec3_L_double_G_ param_5)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)param_3 + 0xc))();
  Render(this,param_5,true,false,0 < iVar1);
  return;
}





//==== 00640290 RenderInitialStateSimple_00640290 ====


/* public: virtual void __thiscall LaserModule__RenderInitialStateSimple(struct
   util__Vec3_L_double_G_)const  */

void __thiscall LaserModule__RenderInitialStateSimple(LaserModule *this,Vec4_L_double_G_ param_1)

{
  RenderSimple(this,param_1,true,true);
  return;
}





//==== 00641ba0 SetCachedData_00641ba0 ====

/* public: virtual void __thiscall LaserModule__SetCachedData(class DataParser *) */

void __thiscall LaserModule__SetCachedData(LaserModule *this,DataParser *param_1)

{
  Material *pMVar1;
  Attribute_L_double_G_ AVar2;
  Attribute_L_double_G_ AVar3;
  Attribute_L_double_G_ AVar4;
  Darray_L_double_G_ *pDVar5;
  char cVar6;
  double dVar7;
  void *pvVar8;
  _func___cdecl_double_void_ptr *p_Var9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 local_24 [16];
  double local_14;
  double local_c;
  
  pMVar1 = (this->Mirror).Composition;
  if ((char)(pMVar1->MaterialMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_14 = (double)*(int *)((char *)&(this->Mirror) + 0x14) *
             (pMVar1->LasingMediumProperties).Data.SpontaneousLifetime_s * 1e-09;
  pDVar5 = (Darray_L_double_G_ *)(uintptr_t)(GetPumpingBands_nm(this,(Darray_L_double_G_ *)local_24));
  local_c = (this->Mirror).CachedRadius_m;
  pMVar1 = (this->Mirror).Composition;
  *(double *)&(this->ArcLamp).CachedLasingRodComposition = local_14;
  util__Darray_double___operator((Darray_L_double_G_ *)&this->GainMedium,pDVar5);
  *(double *)&this->Mirror = local_c;
  (this->Mirror)._pad_0x8_2 = (int)pMVar1;
  (*(uint32_t*)&(local_24)) = (uint32_t)(uintptr_t)(&vftable_63);
  if ((double *)(*(uint32_t*)((char*)&(local_24)+4)) != (double *)0x0) {
    port_op_delete((void *)(*(uint32_t*)((char*)&(local_24)+4)));
  }
  cVar6 = (char)(this->SecondFrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x8_2;
  if (cVar6 != '\0') {
    pMVar1 = (this->Mirror).Composition;
    if ((char)(pMVar1->MaterialMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
      cVar6 = (char)(this->SecondFrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x8_2;
    }
    *(uint32_t *)&local_14 = (pMVar1->LasingMediumProperties).Data.SpontaneousLifetime_s;
    if (cVar6 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    local_c = GetTotalLaserOutputPower_W(this);
    dVar7 = *(double *)&(this->FrequencyDoubler).IsValidData;
    (this->FrequencyDoubler).Data.MaterialClass__NonlinearOptic.CachedNonlinearOpticLength_m =
         *(double *)&(this->SecondFrequencyDoubler).Data;
    (this->FrequencyDoubler).Data.OpticLength_m = local_14;
    (this->FrequencyDoubler).Data.OpticRadius_m = local_c;
    *(undefined1 *)&(this->FrequencyDoubler).Data.CachedWavelength_nm = 0;
    (this->FrequencyDoubler).Data.CachedPower_W = dVar7;
    *(double *)&(this->SecondFrequencyDoubler).Data._pad_0x8_2 = local_14;
    *(double *)&(this->SecondFrequencyDoubler).Data.MaterialClass__NonlinearOptic = local_c;
  }
  if ((char)((this->FocusingMirror).Composition != '\0')){
    if ((char)(this->SecondFrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x8_2 == '\0') {
      *(uint32_t *)&local_14 = 1.0;
      local_c = 1.0;
    }
    else {
      local_c = FrequencyDoublerSubModule__GetTotalEfficiency_Percent
                          ((FrequencyDoublerSubModule *)
                           &(this->FrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x10_4);
    }
    if ((char)(this->SecondFrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x8_2 == '\0') {
      pMVar1 = (this->Mirror).Composition;
      if ((char)(pMVar1->MaterialMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      *(uint32_t *)&local_14 = (pMVar1->LasingMediumProperties).Data.SpontaneousLifetime_s;
    }
    else {
      (uint32_t)(local_14 = *(double *)&(this->SecondFrequencyDoubler).Data._pad_0x8_2 * 0.5);
    }
    if ((char)((this->FocusingMirror).Composition == '\0')){
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar7 = GetTotalLaserOutputPower_W(this);
    local_c = dVar7 * local_c;
    dVar7 = *(double *)&(this->SecondFrequencyDoubler).IsValidData;
    (this->SecondFrequencyDoubler).Data.MaterialClass__NonlinearOptic.CachedNonlinearOpticLength_m =
         this->ApertureRadius_m;
    (this->SecondFrequencyDoubler).Data.OpticLength_m = local_14;
    (this->SecondFrequencyDoubler).Data.OpticRadius_m = local_c;
    *(undefined1 *)&(this->SecondFrequencyDoubler).Data.CachedWavelength_nm = 0;
    (this->SecondFrequencyDoubler).Data.CachedPower_W = dVar7;
    *(double *)&this->FocusingMirror = local_14;
    *(double *)&(this->FocusingMirror)._pad_0x8_2 = local_c;
  }
  pMVar1 = (this->Mirror).Composition;
  if ((char)(pMVar1->MaterialMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_c = (pMVar1->LasingMediumProperties).Data.SpontaneousLifetime_s;
  *(uint32_t *)&local_14 = (this->FocusingMirror).CachedRadius_m * 1.5;
  (*(uint64_t*)((char*)&(local_24)+8)) = GetTotalLaserOutputPower_W(this);
  *(double *)&this->Unmounted = local_14;
  *(double *)&(this->Turret).Data = local_c;
  *(undefined8 *)&(this->Turret).Data.field8_0x8 = (*(uint64_t*)((char*)&(local_24)+8));
  (this->Turret).Data.field0_0x0 = 1;
  pMVar1 = (this->Mirror).Composition;
  if ((char)(pMVar1->MaterialMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  *(uint32_t *)&local_14 = (pMVar1->LasingMediumProperties).Data.SpontaneousLifetime_s;
  (*(uint64_t*)((char*)&(local_24)+8)) = (this->FocusingMirror).CachedRadius_m;
  local_c = GetTotalLaserOutputPower_W(this);
  (this->OutputCoupler)._pad_0x0_0 = (*(uint32_t*)((char*)&(local_24)+8));
  (this->OutputCoupler)._pad_0x4_1 = (*(uint32_t *)((char *)&(local_24) + 12));
  *(double *)&(this->OutputCoupler)._pad_0x8_2 = local_14;
  *(double *)&(this->OutputCoupler).Composition = local_c;
  *(undefined1 *)&(this->OutputCoupler).CachedRadius_m = 1;
  pMVar1 = (this->Mirror).Composition;
  if ((char)(pMVar1->MaterialMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  *(uint32_t *)&local_14 = (pMVar1->LasingMediumProperties).Data.SpontaneousLifetime_s;
  (*(uint64_t*)((char*)&(local_24)+8)) = (this->FocusingMirror).CachedRadius_m;
  local_c = GetTotalLaserOutputPower_W(this);
  (this->CoolantTurbopump)._pad_0x0_0 = (*(uint32_t*)((char*)&(local_24)+8));
  (this->CoolantTurbopump)._pad_0x4_1 = (*(uint32_t *)((char *)&(local_24) + 12));
  *(double *)&(this->CoolantTurbopump)._pad_0x8_2 = local_14;
  *(double *)&(this->CoolantTurbopump).Composition = local_c;
  *(undefined1 *)&(this->CoolantTurbopump).PumpRadius_m = 0;
  if ((char)this[1]._pad_0x38_14 != '\0') {
    dVar7 = (this->FocusingMirror).CachedRadius_m * 1.5;
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uVar13 = 0;
    pvVar8 = (void *)0x0;
    p_Var9 = (_func___cdecl_double_void_ptr *)0x0;
    if ((char)this[1]._pad_0x38_14 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    AVar2.Getter.CallbackFunction = p_Var9;
    AVar2.Getter.Callee = pvVar8;
    AVar2.Value = dVar7;
    AVar3.Getter.CallbackFunction = (_func___cdecl_double_void_ptr *)uVar11;
    AVar3.Getter.Callee = (void *)uVar10;
    AVar3.Value = uVar12;
    (*(uint32_t *)((char *)&(AVar3.Value) + 4)) = uVar13;
    AVar4.Getter.CallbackFunction = (_func___cdecl_double_void_ptr *)uVar15;
    AVar4.Getter.Callee = (void *)uVar14;
    AVar4.Value = uVar16;
    (*(uint32_t *)((char *)&(AVar4.Value) + 4)) = uVar17;
    TurretSubModule__PassThroughCachedData
              ((TurretSubModule *)&(this->Turret).Data.field0_0x0,AVar2,AVar3,AVar4);
  }
  if ((char)this[1]._pad_0x68_26 != '\0') {
    *(double *)&this[1]._pad_0x60_24 = (this->FocusingMirror).CachedRadius_m * 1.5;
  }
  pMVar1 = (Material *)(this->ArcLamp).CachedPumpingBands_nm.Data;
  TurbopumpSubModule__PassThroughCachedData
            ((TurbopumpSubModule *)&(this->CoolantTurbopump).RotationalSpeed_RPM,
             pMVar1->Density_kg__m3,pMVar1,false);
  TurbopumpSubModule__PassThroughCachedData2
            ((TurbopumpSubModule *)&(this->CoolantTurbopump).RotationalSpeed_RPM,
             *(double *)&(this->FrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x8_2);
  return;
}

//==== 00642090 GetPointerPropertyChoices_00642090 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   LaserModule__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

ClassMember * 
LaserModule__GetPointerPropertyChoices
          (LaserModule *this,ClassMember *param_1,SerializationManagerInterface *param_2)

{
  char *pcVar1;
  SerializationManagerInterface SVar2;
  int in_stack_0000000c;
  
  if (*(int *)&param_2[1] < 1) {
    SVar2 = *(SerializationManagerInterface *)(uintptr_t)*(uint32_t *)&cde_l2_0b2b1c9f_NullString;
  }
  else {
    SVar2 = *param_2;
  }
  for (pcVar1 = "GainMedium"; (pcVar1[(int)(*(int *)&SVar2 + -0x92e7e8)] != '\0' || (*pcVar1 != '\0'));
      pcVar1 = pcVar1 + 1) {
    if (pcVar1[(int)(*(int *)&SVar2 + -0x92e7e8)] != *pcVar1) {
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





//==== 00642110 GetMutuallyExclusiveProperties_00642110 ====


/* public: virtual class util__Darray_L_classutil__Str_L_char_G__G_ __thiscall
   LaserModule__GetMutuallyExclusiveProperties(void)const  */

Darray_L_class_util__Str_L_char_G___G_ * __thiscall
LaserModule__GetMutuallyExclusiveProperties(LaserModule *this)

{
  undefined8 stack0x00000004;
  Darray_L_class_util__Str_L_char_G___G_ *this_00;
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  Darray_L_class_util__Str_L_char_G___G_ *in_stack_00000004;
  Str_L_char_G_ SStack_10;
  
  this_00 = in_stack_00000004;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = (undefined **)(&vftable_4);
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 3;
  puVar2 = (undefined4 *)port_op_new(0x28);
  if (puVar2 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = puVar2 + 1;
    *puVar2 = 3;
    iVar3 = 3;
    puVar2 = puVar4;
    do {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      iVar3 = iVar3 + -1;
      puVar2 = puVar2 + 3;
    } while (iVar3 != 0);
  }
  iVar3 = 0;
  *(undefined4 **)(in_stack_00000004 + 4) = puVar4;
  if (0 < *(int *)(in_stack_00000004 + 0xc)) {
    SStack_10.Data = (char *)0x0;
    iVar5 = 0;
    SStack_10.Capacity = 0;
    SStack_10.Length = 0;
    do {
      util__Str_char___operator__o8((Str_L_char_G_ *)(*(int *)(in_stack_00000004 + 4) + iVar5),&SStack_10);
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0xc;
    } while (iVar3 < *(int *)(in_stack_00000004 + 0xc));
  }
  util__Str_char___Str_char(&SStack_10,"Unmounted");
  iVar3 = *(int *)(in_stack_00000004 + 8);
  in_stack_00000004 = (Darray_L_class_util__Str_L_char_G___G_ *)(iVar3 + 1);
  util__Darray_class_util__Str_char_____SetSize(this_00,(int *)&stack0x00000004);
  bVar1 = util__Darray_class_util__Str_char_____CheckSize(this_00,iVar3);
  if (bVar1) {
    util__Str_char___operator__o8
              ((Str_L_char_G_ *)(*(int *)(this_00 + 4) + (*(int *)(this_00 + 8) * 3 + -3) * 4),
               &SStack_10);
  }
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  util__Str_char___Str_char(&SStack_10,"Turret");
  iVar3 = *(int *)(this_00 + 8);
  in_stack_00000004 = (Darray_L_class_util__Str_L_char_G___G_ *)(iVar3 + 1);
  util__Darray_class_util__Str_char_____SetSize(this_00,(int *)&stack0x00000004);
  bVar1 = util__Darray_class_util__Str_char_____CheckSize(this_00,iVar3);
  if (bVar1) {
    util__Str_char___operator__o8
              ((Str_L_char_G_ *)(*(int *)(this_00 + 4) + (*(int *)(this_00 + 8) * 3 + -3) * 4),
               &SStack_10);
  }
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  util__Str_char___Str_char(&SStack_10,"FixedMount");
  iVar3 = *(int *)(this_00 + 8);
  in_stack_00000004 = (Darray_L_class_util__Str_L_char_G___G_ *)(iVar3 + 1);
  util__Darray_class_util__Str_char_____SetSize(this_00,(int *)&stack0x00000004);
  bVar1 = util__Darray_class_util__Str_char_____CheckSize(this_00,iVar3);
  if (bVar1) {
    util__Str_char___operator__o8
              ((Str_L_char_G_ *)(*(int *)(this_00 + 4) + (*(int *)(this_00 + 8) * 3 + -3) * 4),
               &SStack_10);
  }
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return this_00;
}





//==== 006422c0 GetReflectionInfo_006422c0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   LaserModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall LaserModule__GetReflectionInfo(LaserModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_b3861a47__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_b3861a47__thread_safe_static_guard_0__);
    if ( cde_l2_b3861a47__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_57c7f4ca_ReflectionInfo) = &vftable_306;
      _Init_thread_footer(& cde_l2_b3861a47__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_57c7f4ca_ReflectionInfo;
}





//==== 006422d0 scalar_deleting_destructor_006422d0 ====


/* public: virtual void * __thiscall LaserModule:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall LaserModule___scalar_deleting_destructor(LaserModule *this,uint param_1)

{
  LaserModule___LaserModule(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x528);
  }
  return this;
}





//==== 00642300 GetTypeName_00642300 ====


/* public: virtual class util__Str_L_char_G_  LaserModule__ReflectionInfoStruct_class_LaserModule___GetTypeName(void)const  */

Str_L_char_G_ * 
LaserModule__ReflectionInfoStruct_class_LaserModule___GetTypeName
          (ReflectionInfoStruct_L_class_LaserModule_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"LaserModule");
  return __return_storage_ptr__;
}





//==== 00642320 GetMembers_00642320 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   LaserModule__ReflectionInfoStruct_class_LaserModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
LaserModule__ReflectionInfoStruct_class_LaserModule___GetMembers__o2
          (ReflectionInfoStruct_L_class_LaserModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_845c05d2__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_845c05d2__thread_safe_static_guard_0__),
      cde_l2_845c05d2__thread_safe_static_guard_0__ == -1)) {
     cde_l2_d7f18fa2_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_845c05d2__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_d7f18fa2_Count);
  iVar3 = 0;
  if (0 <  cde_l2_d7f18fa2_Count) {
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
    } while (iVar3 <  cde_l2_d7f18fa2_Count);
  }
  return in_stack_00000004;
}





//==== 00642460 GetMember_00642460 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   LaserModule__ReflectionInfoStruct_class_LaserModule___GetMember(class util__Str_L_char_G_ const
   &)const  */

Str_L_char_G_ * 
LaserModule__ReflectionInfoStruct_class_LaserModule___GetMember__o2
          (ReflectionInfoStruct_L_class_LaserModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_087b3b50__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_087b3b50__thread_safe_static_guard_0__),
      cde_l2_087b3b50__thread_safe_static_guard_0__ == -1)) {
     cde_l2_f12c41c6_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_087b3b50__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_f12c41c6_Count) {
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
LAB_006424ed:
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
          if (cVar3 == '\0') goto LAB_006424ed;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_f12c41c6_Count);
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





//==== 00642600 GetFactory_00642600 ====


/* public: virtual class util__Reflectable * (__cdecl*
   LaserModule__ReflectionInfoStruct_class_LaserModule___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall LaserModule__ReflectionInfoStruct_class_LaserModule___GetFactory__o2
          (ReflectionInfoStruct_L_class_LaserModule_G_ *this)

{
  return StaticFactory;
}





//==== 00642b80 MethodCallerConst__private__double___thiscall_LaserModule__GetArclampSpectraIntensity_W_double_const__0__ ====


/* public: static double __cdecl util__DelegateFactory_L_class_LaserModule_Cdouble_Cdouble_G___MethodCallerConst_L__private_double__thiscall_LaserModule__GetArclampSpectraIntensity_W_double_const_C0__G_(void const * const,double) */

double __cdecl
util__DelegateFactory_class_LaserModule_double_double___MethodCallerConst__private__double___thiscall_LaserModule__GetArclampSpectraIntensity_W_double_const__0
          (void *param_1,double param_2)

{
  double dVar1;
  undefined4 in_stack_00000008;
  
  dVar1 = LaserModule__GetArclampSpectraIntensity_W
                    ((LaserModule *)param_1,(double)CONCAT44((*(uint32_t*)&(param_2)),in_stack_00000008));
}





//==== 00642ba0 MethodCallerConst__private__double___thiscall_LaserModule__GetDamageChartIntensity_MW__m2_double_const__0__ ====


/* public: static double __cdecl util__DelegateFactory_L_class_LaserModule_Cdouble_Cdouble_G___MethodCallerConst_L__private_double__thiscall_LaserModule__GetDamageChartIntensity_MW__m2_double_const_C0__G_(void const * const,double) */

double __cdecl
util__DelegateFactory_class_LaserModule_double_double___MethodCallerConst__private__double___thiscall_LaserModule__GetDamageChartIntensity_MW__m2_double_const__0
          (void *param_1,double param_2)

{
  double dVar1;
  undefined4 in_stack_00000008;
  
  dVar1 = LaserModule__GetDamageChartIntensity_MW__m2
                    ((LaserModule *)param_1,(double)CONCAT44((*(uint32_t*)&(param_2)),in_stack_00000008));
}





//==== 00642bc0 MethodCallerConst__public__struct_util__Range_double____thiscall_LaserModule__GetLaserChartXRanges_void_const__0__ ====


/* public: static struct util__Range_L_double_G_ __cdecl util__DelegateFactory_L_classLaserModule_Cstruct_util__Range_L_double_G__G___MethodCallerConst_L__public_structutil__Range_L_double_G___thiscall_LaserModule__GetLaserChartXRanges_void_const_C0__G_(void const * const) */

Range_L_double_G_ * __cdecl
util__DelegateFactory_class_LaserModule_struct_util__Range_double_____MethodCallerConst__public__struct_util__Range_double____thiscall_LaserModule__GetLaserChartXRanges_void_const__0
          (Range_L_double_G_ *__return_storage_ptr__,void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Range_L_double_G_ *pRVar4;
  Range_L_double_G_ RStack_14;
  
  pRVar4 = LaserModule__GetLaserChartXRanges((LaserModule *)param_1,&RStack_14);
  uVar1 = *(undefined4 *)((int)&pRVar4->Lower + 4);
  uVar2 = *(undefined4 *)&pRVar4->Upper;
  uVar3 = *(undefined4 *)((int)&pRVar4->Upper + 4);
  *(undefined4 *)&__return_storage_ptr__->Lower = *(undefined4 *)&pRVar4->Lower;
  *(undefined4 *)((int)&__return_storage_ptr__->Lower + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Upper = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Upper + 4) = uVar3;
  return __return_storage_ptr__;
}





//==== 00642be0 MethodCallerConst__public__struct_util__Range_double____thiscall_LaserModule__GetLaserChartYRanges_void_const__0__ ====


/* public: static struct util__Range_L_double_G_ __cdecl util__DelegateFactory_L_classLaserModule_Cstruct_util__Range_L_double_G__G___MethodCallerConst_L__public_structutil__Range_L_double_G___thiscall_LaserModule__GetLaserChartYRanges_void_const_C0__G_(void const * const) */

Range_L_double_G_ * __cdecl
util__DelegateFactory_class_LaserModule_struct_util__Range_double_____MethodCallerConst__public__struct_util__Range_double____thiscall_LaserModule__GetLaserChartYRanges_void_const__0
          (Range_L_double_G_ *__return_storage_ptr__,void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Range_L_double_G_ *pRVar4;
  Range_L_double_G_ RStack_14;
  
  pRVar4 = LaserModule__GetLaserChartYRanges((LaserModule *)param_1,&RStack_14);
  uVar1 = *(undefined4 *)((int)&pRVar4->Lower + 4);
  uVar2 = *(undefined4 *)&pRVar4->Upper;
  uVar3 = *(undefined4 *)((int)&pRVar4->Upper + 4);
  *(undefined4 *)&__return_storage_ptr__->Lower = *(undefined4 *)&pRVar4->Lower;
  *(undefined4 *)((int)&__return_storage_ptr__->Lower + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Upper = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Upper + 4) = uVar3;
  return __return_storage_ptr__;
}





//==== 00642c00 MethodCallerConst__public__class_util__Str_char____thiscall_LaserModule__GetLaserInfo_void_const__0__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_classLaserModule_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__public_classutil__Str_L_char_G___thiscall_LaserModule__GetLaserInfo_void_const_C0__G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_class_LaserModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_LaserModule__GetLaserInfo_void_const__0
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(LaserModule__GetLaserInfo((LaserModule *)param_1,&SStack_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 00642c40 MethodCallerConst__public__class_util__Darray_struct_util__tuple2_double_struct_util__Vec3_double________thiscall_LaserModule__GetLaserPumpingBandsInChart_void_const__0__ ====


/* public: static class util__Darray_L_structutil__tuple2_L_double_Cstructutil__Vec3_L_double_G__G__G_
   __cdecl util__DelegateFactory_class_LaserModule_class_util__Darray_struct_util__tuple2_double_struct_util__Vec3_double_________MethodCallerConst__public__class_util__Darray_struct_util__tuple2_double_struct_util__Vec3_double________thiscall_LaserModule__GetLaserPumpingBandsInChart_void_const__0(void const * const) */

void * __cdecl
util__DelegateFactory_class_LaserModule_class_util__Darray_struct_util__tuple2_double_struct_util__Vec3_double_________MethodCallerConst__public__class_util__Darray_struct_util__tuple2_double_struct_util__Vec3_double________thiscall_LaserModule__GetLaserPumpingBandsInChart_void_const__0__o2
          (void *param_1)

{
  Darray_L_struct_Body__RadialImpulse_G_ *pDVar1;
  LaserModule *in_stack_00000008;
  undefined4 uStack_10;
  
  pDVar1 = (Darray_L_struct_Body__RadialImpulse_G_ *)
           LaserModule__GetLaserPumpingBandsInChart(in_stack_00000008,(((Darray_L_util__tuple2_L_double_Cutil__Vec3_L_double_G___G___G_ *)cde_rsp_slot())));
  Darray_L_struct_Body__RadialImpulse_G___Darray_L_struct_Body__RadialImpulse_G_
            ((Darray_L_struct_Body__RadialImpulse_G_ *)param_1,pDVar1);
  if (uStack_10 != (void *)0x0) {
    port_op_delete(uStack_10);
  }
  return param_1;
}





//==== 00642c80 MethodCallerConst__public__struct_util__Range_double____thiscall_LaserModule__GetLaserSpectraChartXRanges_void_const__0__ ====


/* public: static struct util__Range_L_double_G_ __cdecl util__DelegateFactory_L_classLaserModule_Cstruct_util__Range_L_double_G__G___MethodCallerConst_L__public_structutil__Range_L_double_G___thiscall_LaserModule__GetLaserSpectraChartXRanges_void_const_C0__G_(void const * const) */

Range_L_double_G_ * __cdecl
util__DelegateFactory_class_LaserModule_struct_util__Range_double_____MethodCallerConst__public__struct_util__Range_double____thiscall_LaserModule__GetLaserSpectraChartXRanges_void_const__0
          (Range_L_double_G_ *__return_storage_ptr__,void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Range_L_double_G_ *pRVar4;
  Range_L_double_G_ RStack_14;
  
  pRVar4 = LaserModule__GetLaserSpectraChartXRanges((LaserModule *)param_1,&RStack_14);
  uVar1 = *(undefined4 *)((int)&pRVar4->Lower + 4);
  uVar2 = *(undefined4 *)&pRVar4->Upper;
  uVar3 = *(undefined4 *)((int)&pRVar4->Upper + 4);
  *(undefined4 *)&__return_storage_ptr__->Lower = *(undefined4 *)&pRVar4->Lower;
  *(undefined4 *)((int)&__return_storage_ptr__->Lower + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Upper = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Upper + 4) = uVar3;
  return __return_storage_ptr__;
}





//==== 00642ca0 MethodCallerConst__public__struct_util__Range_double____thiscall_LaserModule__GetLaserSpectraChartYRanges_void_const__0__ ====


/* public: static struct util__Range_L_double_G_ __cdecl util__DelegateFactory_L_classLaserModule_Cstruct_util__Range_L_double_G__G___MethodCallerConst_L__public_structutil__Range_L_double_G___thiscall_LaserModule__GetLaserSpectraChartYRanges_void_const_C0__G_(void const * const) */

Range_L_double_G_ * __cdecl
util__DelegateFactory_class_LaserModule_struct_util__Range_double_____MethodCallerConst__public__struct_util__Range_double____thiscall_LaserModule__GetLaserSpectraChartYRanges_void_const__0
          (Range_L_double_G_ *__return_storage_ptr__,void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Range_L_double_G_ *pRVar4;
  Range_L_double_G_ RStack_14;
  
  pRVar4 = (Range_L_double_G_ *)(uintptr_t)(LaserModule__GetLaserSpectraChartYRanges((LaserModule *)param_1,&RStack_14));
  uVar1 = *(undefined4 *)((int)&pRVar4->Lower + 4);
  uVar2 = *(undefined4 *)&pRVar4->Upper;
  uVar3 = *(undefined4 *)((int)&pRVar4->Upper + 4);
  *(undefined4 *)&__return_storage_ptr__->Lower = *(undefined4 *)&pRVar4->Lower;
  *(undefined4 *)((int)&__return_storage_ptr__->Lower + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Upper = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Upper + 4) = uVar3;
  return __return_storage_ptr__;
}





//==== 00642cc0 MethodCallerConst__public__class_util__Str_char____thiscall_LaserModule__GetQuickFluenceInfo_void_const__0__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_classLaserModule_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__public_classutil__Str_L_char_G___thiscall_LaserModule__GetQuickFluenceInfo_void_const_C0__G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_class_LaserModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_LaserModule__GetQuickFluenceInfo_void_const__0
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(LaserModule__GetQuickFluenceInfo((LaserModule *)param_1,&SStack_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 00643020 ArcLampPumpSubModule ====

/* public: __thiscall ArcLampPumpSubModule__ArcLampPumpSubModule(void) */

ArcLampPumpSubModule * __thiscall
ArcLampPumpSubModule__ArcLampPumpSubModule(ArcLampPumpSubModule *this)

{
  this->_pad_0x4_1 = 0;
  this->_pad_0x8_2 = 0;
  this->_pad_0xc_3 = 0;
  this->_pad_0x0_0 = (int)&vftable_302;
  (this->ArcLampPumpSubModuleMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 = 0;
  (this->ArcLampPumpSubModuleMemoizationHandlerInstance).ResetFunctions.Data = (pmf_bdf1185d *)0x0;
  (this->ArcLampPumpSubModuleMemoizationHandlerInstance).ResetFunctions.Size = 0;
  (this->ArcLampPumpSubModuleMemoizationHandlerInstance).ResetFunctions.Capacity = 0;
  (this->ArcLampPumpSubModuleMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 =
       (int)&vftable_2;
  (this->ArcLampPumpSubModuleMemoizationHandlerInstance).ResetFunctions.Data = (pmf_bdf1185d *)0x0;
  (this->ArcLampPumpSubModuleMemoizationHandlerInstance).ResetFunctions.Size = 0;
  (this->ArcLampPumpSubModuleMemoizationHandlerInstance).ResetFunctions.Capacity = 0;
  (this->GetMaxPowerLine_W_MemoizedValue).Data = 0.0;
  (this->GetMaxPowerLine_W_MemoizedValue).IsValidData = false;
  (this->GetTotalPowerAcrossAllWavelengths_W_MemoizedValue).Data = 0.0;
  (this->GetTotalPowerAcrossAllWavelengths_W_MemoizedValue).IsValidData = false;
  (this->CachedPumpingBands_nm)._pad_0x0_0 = (int)&vftable_63;
  (this->CachedPumpingBands_nm).Data = (double *)0x0;
  (this->CachedPumpingBands_nm).Size = 0;
  (this->CachedPumpingBands_nm).Capacity = 0;
  return this;
}

//==== 006430a0 LaserModule ====

/* public: __thiscall LaserModule__LaserModule(void) */

LaserModule * __thiscall LaserModule__LaserModule(LaserModule *this)

{
  Module__Module((Module *)this);
  *(undefined1 *)&this->_pad_0x78_30 = 0;
  this->_pad_0x70_28 = 0;
  this->_pad_0x74_29 = 0;
  this->_pad_0x80_32 = 0;
  this->_pad_0x84_33 = 0;
  this->_pad_0x88_34 = 0;
  this->_pad_0x8c_35 = 0;
  this->_pad_0x80_32 = (int)&vftable_166;
  this->_pad_0x84_33 = 0;
  this->_pad_0x88_34 = 0;
  this->_pad_0x8c_35 = 0;
  this->_pad_0x90_36 = 0;
  this->_pad_0x94_37 = 0;
  *(undefined1 *)&(this->LaserModuleMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 = 0;
  (this->LaserModuleMemoizationHandlerInstance).ResetFunctions.Size = 0;
  (this->LaserModuleMemoizationHandlerInstance).ResetFunctions.Capacity = 0;
  *(undefined1 *)&(this->GetFinalOutputPower_W_MemoizedValue).Data = 0;
  this->_pad_0x0_0 = (int)&vftable_for_EditorReflectable__31;
  this->_pad_0x34_13 = (int)&vftable_for_util__RTTIBaseClass__30;
  *(undefined4 *)&(this->GetFinalWavelength_nm_MemoizedValue).Data = 0;
  *(undefined4 *)((int)&(this->GetFinalWavelength_nm_MemoizedValue).Data + 4) = 0;
  *(undefined4 *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData = 0;
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetFinalWavelength_nm_MemoizedValue)) + 0xc)) = 0;
  *(undefined ** *)&((this->GetFinalWavelength_nm_MemoizedValue).Data) =
       &vftable_109;
  *(undefined4 *)((int)&(this->GetFinalWavelength_nm_MemoizedValue).Data + 4) = 0;
  *(undefined4 *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData = 0;
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetFinalWavelength_nm_MemoizedValue)) + 0xc)) = 0;
  (this->GetHeatGenerated_W_MemoizedValue).Data = 0.0;
  (this->GetHeatGenerated_W_MemoizedValue).IsValidData = false;
  (this->GetFiringTemperatureJump_K_MemoizedValue).Data = 0.0;
  (this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData = false;
  (this->GetHeatingRate_W_MemoizedValue).Data = 0.0;
  (this->GetHeatingRate_W_MemoizedValue).IsValidData = false;
  (this->GetMirrorFocalLengthLimit_m_MemoizedValue).Data = 0.0;
  (this->GetMirrorFocalLengthLimit_m_MemoizedValue).IsValidData = false;
  (this->ArcLamp)._pad_0x0_0 = 0;
  (this->ArcLamp)._pad_0x4_1 = 0;
  *(undefined1 *)&(this->ArcLamp)._pad_0x8_2 = 0;
  (this->ArcLamp).ArcLampPumpSubModuleMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 = 0;
  (this->ArcLamp).ArcLampPumpSubModuleMemoizationHandlerInstance.ResetFunctions.Data =
       (pmf_bdf1185d *)0x0;
  *(undefined1 *)&((this->ArcLamp).ArcLampPumpSubModuleMemoizationHandlerInstance.ResetFunctions.Size) = 0;
  ArcLampPumpSubModule__ArcLampPumpSubModule
            ((ArcLampPumpSubModule *)&(this->ArcLamp).GetMaxPowerLine_W_MemoizedValue);
  *(undefined4 *)((int)&(this->Mirror).CachedWavelength_nm + 4) = 0;
  *(undefined4 *)&(this->Mirror).CachedPower_W = 0;
  *(undefined4 *)((int)&(this->Mirror).CachedPower_W + 4) = 0;
  *(undefined ** *)&(this->Mirror).CachedWavelength_nm = &vftable_296;
  *(undefined4 *)((int)&(this->OutputCoupler).CachedWavelength_nm + 4) = 0;
  *(undefined4 *)&(this->OutputCoupler).CachedPower_W = 0;
  *(undefined4 *)((int)&(this->OutputCoupler).CachedPower_W + 4) = 0;
  *(undefined ** *)&(this->OutputCoupler).CachedWavelength_nm = &vftable_296;
  TurbopumpSubModule__TurbopumpSubModule
            ((TurbopumpSubModule *)&(this->CoolantTurbopump).RotationalSpeed_RPM);
  (this->FrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x14_5 = 0;
  (this->FrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x18_6 = 0;
  (this->FrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x1c_7 = 0;
  (this->FrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x10_4 =
       (int)&vftable_300;
  (this->FrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x24_9 = 0;
  (this->FrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x28_10 = 0;
  (this->FrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x2c_11 = 0;
  (this->FrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x20_8 =
       (int)&vftable_298;
  *(undefined1 *)&(this->SecondFrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x8_2 = 0;
  (this->SecondFrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x14_5 = 0;
  (this->SecondFrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x18_6 = 0;
  (this->SecondFrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x1c_7 = 0;
  (this->SecondFrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x10_4 =
       (int)&vftable_300;
  (this->SecondFrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x24_9 = 0;
  (this->SecondFrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x28_10 = 0;
  (this->SecondFrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x2c_11 = 0;
  (this->SecondFrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x20_8 =
       (int)&vftable_298;
  *(undefined1 *)&(this->FocusingMirror).Composition = 0;
  *(undefined4 *)((int)&(this->FocusingMirror).CachedWavelength_nm + 4) = 0;
  *(undefined4 *)&(this->FocusingMirror).CachedPower_W = 0;
  *(undefined4 *)((int)&(this->FocusingMirror).CachedPower_W + 4) = 0;
  *(undefined ** *)&(this->FocusingMirror).CachedWavelength_nm = &vftable_296;
  TurretSubModule__TurretSubModule((TurretSubModule *)&(this->Turret).Data.field0_0x0);
  *(undefined ** *)&(this->Turret).Data.field0_0x0 = &vftable_239;
  *(undefined1 *)&this[1]._pad_0x38_14 = 0;
  this[1]._pad_0x40_16 = 0;
  this[1]._pad_0x44_17 = 0;
  this[1]._pad_0x48_18 = 0;
  this[1]._pad_0x4c_19 = 0;
  this[1]._pad_0x50_20 = 0;
  this[1]._pad_0x54_21 = 0;
  this[1]._pad_0x58_22 = 0;
  this[1]._pad_0x5c_23 = 0;
  this[1]._pad_0x60_24 = 0;
  this[1]._pad_0x64_25 = 0;
  this[1]._pad_0x44_17 = 0;
  this[1]._pad_0x48_18 = 0;
  this[1]._pad_0x4c_19 = 0;
  this[1]._pad_0x40_16 = (int)&vftable_304;
  *(undefined1 *)&this[1]._pad_0x68_26 = 0;
  this[1]._pad_0x78_30 = 0;
  this[1]._pad_0x7c_31 = 0;
  this[1]._pad_0x80_32 = 0;
  this[1]._pad_0x84_33 = 0;
  this[1]._pad_0x88_34 = 0;
  this[1]._pad_0x8c_35 = 0;
  this[1]._pad_0x90_36 = 0;
  this[1]._pad_0x94_37 = 0;
  return this;
}

//==== 00643390 ArcLampPumpSubModule_00643390 ====

/* public: virtual __thiscall ArcLampPumpSubModule___ArcLampPumpSubModule(void) */

void __thiscall ArcLampPumpSubModule___ArcLampPumpSubModule(ArcLampPumpSubModule *this)

{
  double *pdVar1;
  pmf_bdf1185d *ppVar2;
  
  pdVar1 = (this->CachedPumpingBands_nm).Data;
  (this->CachedPumpingBands_nm)._pad_0x0_0 = (int)&vftable_63;
  if (pdVar1 != (double *)0x0) {
    port_op_delete(pdVar1);
  }
  (this->CachedPumpingBands_nm).Data = (double *)0x0;
  (this->CachedPumpingBands_nm)._pad_0x0_0 = (int)&vftable;
  ppVar2 = (this->ArcLampPumpSubModuleMemoizationHandlerInstance).ResetFunctions.Data;
  (this->ArcLampPumpSubModuleMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 =
       (int)&vftable_2;
  if (ppVar2 != (pmf_bdf1185d *)0x0) {
    port_op_delete(ppVar2);
  }
  (this->ArcLampPumpSubModuleMemoizationHandlerInstance).ResetFunctions.Data = (pmf_bdf1185d *)0x0;
  (this->ArcLampPumpSubModuleMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 =
       (int)&vftable;
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  return;
}

//==== 00643400 LaserModule_00643400 ====

/* public: virtual __thiscall LaserModule___LaserModule(void) */

void __thiscall LaserModule___LaserModule(LaserModule *this)

{
  void *pvVar1;
  
  if ((ReferenceController *)this[1]._pad_0x94_37 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)this[1]._pad_0x94_37);
  }
  if ((ReferenceController *)this[1]._pad_0x8c_35 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)this[1]._pad_0x8c_35);
  }
  if ((ReferenceController *)this[1]._pad_0x84_33 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)this[1]._pad_0x84_33);
  }
  if ((ReferenceController *)this[1]._pad_0x7c_31 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)this[1]._pad_0x7c_31);
  }
  this[1]._pad_0x40_16 = (int)&vftable_5;
  if ((void *)this[1]._pad_0x44_17 != (void *)0x0) {
    port_op_delete((void *)this[1]._pad_0x44_17);
    this[1]._pad_0x44_17 = 0;
  }
  TurretSubModule___TurretSubModule((TurretSubModule *)&(this->Turret).Data.field0_0x0);
  *(undefined ** *)&(this->FocusingMirror).CachedWavelength_nm = &vftable_5;
  pvVar1 = *(void **)((int)&(this->FocusingMirror).CachedWavelength_nm + 4);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    *(undefined4 *)((int)&(this->FocusingMirror).CachedWavelength_nm + 4) = 0;
  }
  (this->SecondFrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x20_8 =
       (int)&vftable_5;
  pvVar1 = (void *)(this->SecondFrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x24_9;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->SecondFrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x24_9 = 0;
  }
  (this->SecondFrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x10_4 =
       (int)&vftable_5;
  pvVar1 = (void *)(this->SecondFrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x14_5;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->SecondFrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x14_5 = 0;
  }
  (this->FrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x20_8 = (int)&vftable_5;
  pvVar1 = (void *)(this->FrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x24_9;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->FrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x24_9 = 0;
  }
  (this->FrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x10_4 = (int)&vftable_5;
  pvVar1 = (void *)(this->FrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x14_5;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->FrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x14_5 = 0;
  }
  *(undefined ** *)&(this->CoolantTurbopump).RotationalSpeed_RPM = &vftable_5;
  pvVar1 = *(void **)((int)&(this->CoolantTurbopump).RotationalSpeed_RPM + 4);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    *(undefined4 *)((int)&(this->CoolantTurbopump).RotationalSpeed_RPM + 4) = 0;
  }
  *(undefined ** *)&(this->OutputCoupler).CachedWavelength_nm = &vftable_5;
  pvVar1 = *(void **)((int)&(this->OutputCoupler).CachedWavelength_nm + 4);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    *(undefined4 *)((int)&(this->OutputCoupler).CachedWavelength_nm + 4) = 0;
  }
  *(undefined ** *)&(this->Mirror).CachedWavelength_nm = &vftable_5;
  pvVar1 = *(void **)((int)&(this->Mirror).CachedWavelength_nm + 4);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    *(undefined4 *)((int)&(this->Mirror).CachedWavelength_nm + 4) = 0;
  }
  ArcLampPumpSubModule___ArcLampPumpSubModule((ArcLampPumpSubModule *)&(this->ArcLamp).GetMaxPowerLine_W_MemoizedValue);
  pvVar1 = *(void **)((int)&(this->GetFinalWavelength_nm_MemoizedValue).Data + 4);
*(uint32_t *)&((this->GetFinalWavelength_nm_MemoizedValue).Data) = (uint32_t)(uintptr_t)(&vftable_109);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
  }
  *(undefined4 *)((int)&(this->GetFinalWavelength_nm_MemoizedValue).Data + 4) = 0;
  (this->GetFinalWavelength_nm_MemoizedValue).Data = cde_ptr_as_double((void *)&vftable);
  this->_pad_0x80_32 = (int)&vftable_166;
  if ((void *)this->_pad_0x84_33 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x84_33);
  }
  this->_pad_0x84_33 = 0;
  this->_pad_0x80_32 = (int)&vftable;
  this->_pad_0x0_0 = (int)&vftable_for_EditorReflectable__3;
  this->_pad_0x34_13 = (int)&vftable_for_util__RTTIBaseClass__3;
  Darray_L_util__SharedPtr_L_GameModel_G___G___dtor((Darray_L_util__SharedPtr_L_GameModel_G___G_ *)&this->_pad_0x58_22);
  this->_pad_0x38_14 = (int)&vftable_166;
  if ((void *)this->_pad_0x3c_15 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x3c_15);
  }
  this->_pad_0x3c_15 = 0;
  this->_pad_0x38_14 = (int)&vftable;
  if ((void *)this->_pad_0x20_8 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x20_8);
    this->_pad_0x20_8 = 0;
  }
  if ((void *)this->_pad_0x10_4 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x10_4);
    this->_pad_0x10_4 = 0;
  }
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  return;
}

//==== 00643620 operator___00643620 ====


/* public: class Order *  util__Maybe_L_classOrder_G___op_arrow(void) */

Order * __thiscall util__Maybe_class_Order___operator(Maybe_L_class_Order_G_ *this)

{
  if (*(char *)&(this[0x28]) == 0) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,"IsValid()",
              (char *)0x0);
    DebugBreak();
  }
  return (Order *)this;
}





//==== 00644790 GenerateDamageRangeChart_00644790 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00644d55) */
/* WARNING: Removing unreachable block (ram,0x00644d62) */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: struct UIWidget * __thiscall LaserModule__GenerateDamageRangeChart(class Manager *)const
    */

UIWidget * __thiscall LaserModule__GenerateDamageRangeChart(LaserModule *this,Manager *param_1)

{
  undefined8 stack0xfffff9d4;
  undefined8 stack0xfffff9f0;
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
  LocStr *pLVar15;
  Str_L_char_G_ *pSVar16;
  Str_L_char_G_ *pSVar17;
  Args *pAVar18;
  UIAttributes *pUVar19;
  UIWidget *pUVar20;
  undefined4 *puVar21;
  int iVar22;
  int iVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined **ppuVar26;
  Str_L_char_G_ in_stack_fffff9d4;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  float fStack_4d4;
  Args aAStack_4c8 [264];
  undefined4 uStack_3c0;
  UIAttributes local_3ac;
  Args local_264 [272];
  Color local_154;
  void *local_134 [3];
  void *local_128;
  void *local_11c [3];
  void *local_110;
  void *local_104 [3];
  void *local_f8;
  LaserModule *local_ec;
  code *pcStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  Str_L_char_G_ local_d4;
  Str_L_char_G_ local_c8;
  Str_L_char_G_ local_bc;
  Str_L_char_G_ local_b0;
  Str_L_char_G_ local_a4;
  LaserModule *local_98;
  code *pcStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 local_7c;
  Darray_L_Body__RadialImpulse_G_ local_78;
  Str_L_char_G_ local_68;
  Str_L_char_G_ local_5c;
  Str_L_char_G_ local_50;
  Manager *local_44;
  Args *local_40;
  Str_L_char_G_ *local_3c;
  Str_L_char_G_ *local_38;
  Str_L_char_G_ *local_34;
  LineGraph *local_30;
  undefined4 local_2c;
  void *local_28;
  Str_L_char_G_ SStack_24;
  undefined **local_18;
  void *pvStack_14;
  undefined4 uStack_10;
  int iStack_c;
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
  local_44 = param_1;
  local_30 = (LineGraph *)0x0;
  *(uint32_t *)&local_18 = (uint32_t)(uintptr_t)(&vftable_229);
  pvStack_14 = (void *)0x0;
  uStack_10 = 0;
  iStack_c = 4;
  uStack_3c0 = 0x6447d8;
  pvStack_14 = (void *)(uintptr_t)(port_op_new(0x80));
  if (pvStack_14 == (void *)0x0) {
    pvStack_14 = (void *)0x0;
  }
  else {
    iVar23 = 4;
    puVar21 = (undefined4 *)((int)pvStack_14 + 0x18);
    do {
      puVar21[-6] = 0;
      puVar21[-5] = 0;
      puVar21[-4] = 0;
      puVar21[-3] = 0;
      puVar21[-2] = 0;
      puVar21[-1] = 0;
      *puVar21 = 0;
      puVar21[1] = 0;
      iVar23 = iVar23 + -1;
      puVar21 = puVar21 + 8;
    } while (iVar23 != 0);
  }
  iVar23 = 0;
  if (0 < iStack_c) {
    iVar22 = 0;
    do {
      puVar21 = (undefined4 *)(iVar22 + (int)pvStack_14);
      *puVar21 = 0;
      puVar21[1] = 0;
      puVar21[2] = 0;
      puVar21[3] = 0;
      iVar23 = iVar23 + 1;
      puVar21 = (undefined4 *)(iVar22 + 0x10 + (int)pvStack_14);
      *puVar21 = 0;
      puVar21[1] = 0;
      puVar21[2] = 0;
      puVar21[3] = 0;
      iVar22 = iVar22 + 0x20;
    } while (iVar23 < iStack_c);
  }
  uStack_3c0 = 0x644838;
  local_30 = (LineGraph *)(uintptr_t)(port_op_new(0x278));
  if (local_30 == (LineGraph *)0x0) {
    pUVar20 = (UIWidget *)0x0;
  }
  else {
    uStack_3c0 = 0x644856;
    util__Str_char___Str_char(&local_bc,"LaserIntensityChart YAxis");
    uStack_3c0 = 0x644866;
    util__Str_char___Str_char(&local_b0,"LaserIntensityChart XAxis");
    uStack_3c0 = 0x644876;
    util__Str_char___Str_char(&local_a4,"LaserIntensityChart Title");
    local_40 = aAStack_4c8;
    local_80 = 0;
    local_7c = 0;
    util__Darray_L_Body__RadialImpulse_G___Darray_L_Body__RadialImpulse_G_
              (&local_78,(Darray_L_struct_Body__RadialImpulse_G_ *)&local_18);
    pcStack_94 = util__DelegateFactory_L_LaserModule_Cutil__Range_L_double_G___G___MethodCallerConst_L__public__struct_util__Range_L_double_G____thiscall_LaserModule__GetLaserChartYRanges_void_const__C0__G_
    ;
    uStack_90 = 0;
    uStack_88 = 0;
    pcStack_e8 = util__DelegateFactory_L_LaserModule_Cutil__Range_L_double_G___G___MethodCallerConst_L__public__struct_util__Range_L_double_G____thiscall_LaserModule__GetLaserChartXRanges_void_const__C0__G_
    ;
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    uStack_d8 = 0;
    local_68.Data = (char *)0x0;
    local_68.Capacity = 0;
    local_68.Length = 0;
    local_5c.Data = (char *)0x0;
    local_5c.Capacity = 0;
    local_5c.Length = 0;
    local_50.Data = (char *)0x0;
    local_50.Capacity = 0;
    local_50.Length = 0;
    local_ec = this;
    local_98 = this;
    *(uint32_t *)&local_3c = (uint32_t)(uintptr_t)((Str_L_char_G_ *)util__Str_char___Str_char(&local_d4,"MW/m^2"));
    fStack_4d4 = 9.209745e-39;
    pLVar15 = (LocStr *)util__LocStr__LocStr((LocStr *)local_134,&local_bc,&local_68);
    local_38 = util__LocStr__operator__o3(pLVar15);
    local_34 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_c8,"km");
    fStack_4d4 = 9.209817e-39;
    pLVar15 = (LocStr *)util__LocStr__LocStr((LocStr *)local_11c,&local_b0,&local_5c);
    pSVar16 = util__LocStr__operator__o3(pLVar15);
    fStack_4d4 = 9.20986e-39;
    pLVar15 = (LocStr *)util__LocStr__LocStr((LocStr *)local_104,&local_a4,&local_50);
    pSVar17 = util__LocStr__operator__o3(pLVar15);
    *(uint32_t *)&local_2c = 0;
    local_28 = (void *)0x0;
    util__Str_char___Str_char(&SStack_24,pSVar17);
    pAVar18 = (Args *)LineGraph__Args__Args__o3(local_264);
    *(undefined4 *)pAVar18 = local_2c;
    *(void **)(pAVar18 + 4) = local_28;
    util__Str_char___operator__o8((Str_L_char_G_ *)(pAVar18 + 8),&SStack_24);
    if ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_24.Data !=
        (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0) {
      port_op_delete(SStack_24.Data);
    }
    *(uint32_t *)&local_2c = 0;
    local_28 = (void *)0x0;
    util__Str_char___Str_char(&SStack_24,pSVar16);
    *(undefined4 *)(pAVar18 + 0x14) = local_2c;
    *(void **)(pAVar18 + 0x18) = local_28;
    util__Str_char___operator__o8((Str_L_char_G_ *)(pAVar18 + 0x1c),&SStack_24);
    if ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_24.Data !=
        (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0) {
      port_op_delete(SStack_24.Data);
    }
    *(uint32_t *)&local_2c = 0;
    local_28 = (void *)0x0;
    util__Str_char___Str_char(&SStack_24,local_34);
    *(undefined4 *)(pAVar18 + 0x28) = local_2c;
    *(void **)(pAVar18 + 0x2c) = local_28;
    util__Str_char___operator__o8((Str_L_char_G_ *)(pAVar18 + 0x30),&SStack_24);
    if ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_24.Data !=
        (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0) {
      port_op_delete(SStack_24.Data);
    }
    *(uint32_t *)&local_2c = 0;
    local_28 = (void *)0x0;
    util__Str_char___Str_char(&SStack_24,local_38);
    *(undefined4 *)(pAVar18 + 0x3c) = local_2c;
    *(void **)(pAVar18 + 0x40) = local_28;
    util__Str_char___operator__o8((Str_L_char_G_ *)(pAVar18 + 0x44),&SStack_24);
    if ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_24.Data !=
        (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0) {
      port_op_delete(SStack_24.Data);
    }
    *(uint32_t *)&local_2c = 0;
    local_28 = (void *)0x0;
    util__Str_char___Str_char(&SStack_24,local_3c);
    *(undefined4 *)(pAVar18 + 0x50) = local_2c;
    *(void **)(pAVar18 + 0x54) = local_28;
    util__Str_char___operator__o8((Str_L_char_G_ *)(pAVar18 + 0x58),&SStack_24);
    if ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_24.Data !=
        (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0) {
      port_op_delete(SStack_24.Data);
    }
    *(LaserModule **)(pAVar18 + 0x9c) = this;
    *(code **)(uintptr_t)(pAVar18 + 0xa0) = (long long int (*)())(util__DelegateFactory_L_LaserModule_Cdouble_Cdouble_G___MethodCallerConst_L__private__double___thiscall_LaserModule__GetDamageChartIntensity_MW__m2_double_const__C0__G_);
    *(LaserModule **)(pAVar18 + 0x68) = local_ec;
    *(code **)(uintptr_t)(pAVar18 + 0x6c) = pcStack_e8;
    *(undefined4 *)(pAVar18 + 0x70) = (undefined4)(uintptr_t)(uStack_e4);
    *(undefined4 *)(pAVar18 + 0x74) = uStack_e0;
    pAVar18[0x98] = (Args)0x1;
    *(ulonglong *)(pAVar18 + 0x78) = CONCAT44(uStack_d8,uStack_dc);
    *(LaserModule **)(pAVar18 + 0x80) = local_98;
    *(code **)(uintptr_t)(pAVar18 + 0x84) = pcStack_94;
    *(undefined4 *)(pAVar18 + 0x88) = (undefined4)uStack_90;
    *(undefined4 *)(pAVar18 + 0x8c) = (*(uint32_t*)((char*)&(uStack_90)+4));
    *(undefined8 *)(pAVar18 + 0x90) = uStack_88;
    *(undefined4 *)(pAVar18 + 0xd0) = local_80;
    *(undefined4 *)(pAVar18 + 0xd4) = local_7c;
    util__Darray_L_util__tuple2_L_double_Cutil__Vec3_L_double_G___G___G___op_assign
              ((Darray_L_util__tuple2_L_double_Cutil__Vec3_L_double_G___G___G_ *)(pAVar18 + 0xd8),
               (Darray_L_struct_util__tuple2_L_double_Cstruct_util__Vec3_L_double_G___G___G_ *)&local_78);
    local_78._pad_0x0_0 = (int)&vftable_229;
    if (local_78.Data != (RadialImpulse *)0x0) {
      port_op_delete(local_78.Data);
    }
    local_78.Data = (RadialImpulse *)0x0;
    local_78._pad_0x0_0 = (int)&vftable;
    LineGraph__Args__Args(local_40,pAVar18);
    iVar23 = (int)(uintptr_t)util__Color__Color(&local_154,Preset__Green,1.0);
    uVar24 = 0;
    uVar25 = 0;
    util__Str_char___Str_char((Str_L_char_G_ *)&stack0xfffff9d4,(Str_L_char_G_ *)(iVar23 + 4));
    ppuVar26 = &vftable_59;
    uVar27 = *(undefined4 *)(iVar23 + 0x10);
    uVar28 = *(undefined4 *)(iVar23 + 0x14);
    uVar29 = *(undefined4 *)(iVar23 + 0x18);
    fVar30 = *(float *)(iVar23 + 0x1c);
    local_28 = (void *)0x0;
    SStack_24.Data = (char *)0x0;
    SStack_24.Capacity = 0;
    SStack_24.Length = 200;
    pUVar19 = (UIAttributes *)UIAttributes__UIAttributes(&local_3ac,local_44);
    local_98 = (LaserModule *)0x0;
    uStack_90 = 0x3ff0000000000000;
    uStack_88 = 0;
    pcStack_94 = (code *)0x0;
    (pUVar19->DesiredSize).Getter.Callee = local_28;
    (pUVar19->DesiredSize).Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_24.Data;
    (pUVar19->DesiredSize).Value.X = SStack_24.Capacity;
    (pUVar19->DesiredSize).Value.Y = SStack_24.Length;
    (pUVar19->FillProportion).Getter.Callee = (void *)0x0;
    (pUVar19->FillProportion).Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0;
    *(undefined4 *)&(pUVar19->FillProportion).Value.X = 0;
    *(undefined4 *)((int)&(pUVar19->FillProportion).Value.X + 4) = 0x3ff00000;
    (pUVar19->FillProportion).Value.Y = 0.0;
    AVar1.Getter.CallbackFunction = (_func___cdecl_Color_void_ptr *)uVar25;
    AVar1.Getter.Callee = (void *)uVar24;
    AVar1.Value._pad_0x0_0 = (int)ppuVar26;
    AVar1.Value._pad_0x4_1 = (int)in_stack_fffff9d4.Data;
    AVar1.Value._pad_0x8_2 = in_stack_fffff9d4.Capacity;
    AVar1.Value._pad_0xc_3 = in_stack_fffff9d4.Length;
    AVar1.Value.Hue_degrees = (float)uVar27;
    AVar1.Value.Saturation = (float)uVar28;
    AVar1.Value.Value = (float)uVar29;
    AVar1.Value.Alpha = fVar30;
    pUVar19 = UIAttributes__SetForegroundColor(pUVar19,(*(Attribute_L_util__Color_G_ *)&(AVar1)));
    UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff9f0,pUVar19);
    pUVar20 = (UIWidget *)LineGraph__LineGraph(local_30);
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
    UIAttributes___UIAttributes(&local_3ac);
  }
  if ((bVar10) &&
     (local_154._pad_0x0_0 = (int)&vftable_5,
     (void *)local_154._pad_0x4_1 != (void *)0x0)) {
    uStack_3c0 = 0x644c76;
    port_op_delete((void *)local_154._pad_0x4_1);
    local_154._pad_0x4_1 = 0;
  }
  if (bVar11) {
    LineGraph__Args___Args(local_264);
  }
  if (bVar12) {
    if (local_f8 != (void *)0x0) {
      uStack_3c0 = 0x644cba;
      port_op_delete(local_f8);
      local_f8 = (void *)0x0;
    }
    if (local_104[0] != (void *)0x0) {
      uStack_3c0 = 0x644cd7;
      port_op_delete(local_104[0]);
      local_104[0] = (void *)0x0;
    }
  }
  if ((bVar13) && (local_50.Data != (char *)0x0)) {
    uStack_3c0 = 0x644cff;
    port_op_delete(local_50.Data);
    local_50.Data = (char *)0x0;
  }
  if (bVar14) {
    if (local_110 != (void *)0x0) {
      uStack_3c0 = 0x644d27;
      port_op_delete(local_110);
      local_110 = (void *)0x0;
    }
    if (local_11c[0] != (void *)0x0) {
      uStack_3c0 = 0x644d44;
      port_op_delete(local_11c[0]);
      local_11c[0] = (void *)0x0;
    }
  }
  if ((bVar3) && (local_c8.Data != (char *)0x0)) {
    uStack_3c0 = 0x644d8a;
    port_op_delete(local_c8.Data);
    local_c8.Data = (char *)0x0;
  }
  if (bVar4) {
    if (local_128 != (void *)0x0) {
      uStack_3c0 = 0x644daf;
      port_op_delete(local_128);
      local_128 = (void *)0x0;
    }
    if (local_134[0] != (void *)0x0) {
      uStack_3c0 = 0x644dcc;
      port_op_delete(local_134[0]);
      local_134[0] = (void *)0x0;
    }
  }
  if ((bVar5) && (local_68.Data != (char *)0x0)) {
    uStack_3c0 = 0x644dee;
    port_op_delete(local_68.Data);
    local_68.Data = (char *)0x0;
  }
  if ((bVar6) && (local_d4.Data != (char *)0x0)) {
    uStack_3c0 = 0x644e10;
    port_op_delete(local_d4.Data);
    local_d4.Data = (char *)0x0;
  }
  if ((bVar7) && (local_a4.Data != (char *)0x0)) {
    uStack_3c0 = 0x644e35;
    port_op_delete(local_a4.Data);
    local_a4.Data = (char *)0x0;
  }
  if ((bVar8) && (local_b0.Data != (char *)0x0)) {
    uStack_3c0 = 0x644e5a;
    port_op_delete(local_b0.Data);
    local_b0.Data = (char *)0x0;
  }
  if ((local_bc.Data != (char *)0x0) && (bVar2)) {
    uStack_3c0 = 0x644e7c;
    port_op_delete(local_bc.Data);
    local_bc.Data = (char *)0x0;
  }
  *(uint32_t *)&local_18 = (uint32_t)(uintptr_t)(&vftable_229);
  if (pvStack_14 != (void *)0x0) {
    uStack_3c0 = 0x644e9d;
    port_op_delete(pvStack_14);
  }
  return pUVar20;
}

//==== 00644ec0 GenerateTextures_00644ec0 ====


/* public: virtual void __thiscall LaserCompartment__GenerateTextures(void) */

void __thiscall LaserCompartment__GenerateTextures(LaserCompartment *this)

{
  int iVar1;
  ReferenceController *this_00;
  ReferenceController *this_01;
  bool bVar2;
  undefined4 *puVar3;
  ReferenceControllerRegistry *pRVar4;
  ArmorTextureHandler *this_02;
  ArmorTextureHandler *pAStack_10;
  ReferenceController *pRStack_c;
  int iStack_8;
  
  iVar1 = *(int *)&this->field_0x38;
  if (*(char *)(iVar1 + 0x4c8) != '\0') {
    if (*(char *)(iVar1 + 0x4c8) == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    puVar3 = (undefined4 *)TurretSubModule__GenerateNewTexture((TurretSubModule *)(iVar1 + 0x3c8));
    iVar1 = *(int *)&this->field_0x54;
    iStack_8 = iVar1 + 1;
    util__Darray_class_util__SharedPtr_class_ArmorTextureHandler_____SetSize
              ((Darray_L_class_util__SharedPtr_L_class_ArmorTextureHandler_G___G_ *)&this->field_0x4c,
               &iStack_8);
    bVar2 = util__Darray_class_util__SharedPtr_class_ArmorTextureHandler_____CheckSize
                      ((Darray_L_class_util__SharedPtr_L_class_ArmorTextureHandler_G___G_ *)
                       &this->field_0x4c,iVar1);
    if (bVar2) {
      this_02 = *(ArmorTextureHandler **)
                 (*(int *)&this->field_0x50 + -8 + *(int *)&this->field_0x54 * 8);
      iVar1 = *(int *)&this->field_0x50 + *(int *)&this->field_0x54 * 8;
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
            ArmorTextureHandler___scalar_deleting_destructor(this_02,1);
          }
          pRVar4 = util__ReferenceControllerRegistry__Get();
          util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar4,this_02);
        }
      }
    }
    if (pRStack_c != (ReferenceController *)0x0) {
      bVar2 = util__ReferenceController__ReleaseStrongReference(pRStack_c);
      if (bVar2) {
        if (pAStack_10 != (ArmorTextureHandler *)0x0) {
          ArmorTextureHandler___scalar_deleting_destructor(pAStack_10,1);
        }
        pRVar4 = util__ReferenceControllerRegistry__Get();
        util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar4,pAStack_10);
      }
    }
  }
  return;
}





//==== 00645980 GetDamageChartIntensity_MW__m2_00645980 ====


/* private: double __thiscall LaserModule__GetDamageChartIntensity_MW__m2(double)const  */

double __thiscall LaserModule__GetDamageChartIntensity_MW__m2(LaserModule *this,double param_1)

{
  double dVar1;
  
  dVar1 = 0.1;
  if (0.1 <= param_1) {
    dVar1 = param_1;
  }
  dVar1 = GetIntensityAtRange_W__m2(this,dVar1);
  return dVar1 / 1000000.0;
}





//==== 006459b0 GetEfficiencyCoefficient ====

/* public: double __thiscall FrequencyDoublerSubModule__GetEfficiencyCoefficient(void)const  */

double __thiscall
FrequencyDoublerSubModule__GetEfficiencyCoefficient(FrequencyDoublerSubModule *this)

{
  Material *this_00;
  Maybe_L_double_G_ *pMVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double local_24;
  double local_1c;
  undefined1 local_14 [16];
  
  this_00 = (Material *)(this->MaterialClass__NonlinearOptic)._pad_0x10_4;
  (*(uint64_t*)((char*)&(local_14)+8)) = this_00->LasingDamageThreshold_TW__m2 * 1e-12;
  *(uint32_t *)&local_1c = this->CachedWavelength_nm * 1e-09;
  dVar4 = Material__GetIndexOfRefraction(this_00,this->CachedWavelength_nm);
  dVar3 = this->OpticRadius_m * 3.141592653589793;
  dVar2 = this->OpticLength_m;
  dVar4 = (((double)(*(uint64_t*)((char*)&(local_14)+8)) * (double)(*(uint64_t*)((char*)&(local_14)+8)) * 78.95683520871486) /
          (local_1c * local_1c * 0.0026544187292520845 * dVar4 * dVar4 * dVar4)) * dVar2 * dVar2 *
          (this->CachedPower_W / (dVar3 * this->OpticRadius_m * 0.5));
  if (dVar4 <= 0.0) {
    return 0.0;
  }
  dVar2 = ((this->CachedWavelength_nm * 1e-09) / (dVar3 + dVar3)) * 0.5 *
          *(double *)((this->MaterialClass__NonlinearOptic)._pad_0x10_4 + 0x140) * dVar2 * 0.5;
  *(uint32_t *)&local_1c = (dVar2 * dVar2) / (dVar4 + dVar4) + 1.0;
  *(uint32_t *)&local_24 = local_1c * local_1c - 1.0;
  pMVar1 = util__Sqrt((Maybe_L_double_G_ *)local_14,&local_24);
  if (pMVar1->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return local_1c - pMVar1->Data;
}

//==== 00645b20 GetEmissionEfficiency_Percent ====

/* public: double __thiscall LaserModule__GetEmissionEfficiency_Percent(void)const  */

double __thiscall LaserModule__GetEmissionEfficiency_Percent(LaserModule *this)

{
  Material *pMVar1;
  Material *pMVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  pMVar1 = (this->Mirror).Composition;
  if ((char)(pMVar1->MaterialMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar3 = (pMVar1->LasingMediumProperties).Data.SpontaneousLifetime_s * 1e-09 *
          (double)*(int *)((char *)&(this->Mirror) + 0x14);
  dVar4 = GetLossCoefficient__m(this);
  pMVar1 = (this->Mirror).Composition;
  pMVar2 = pMVar1;
  if ((char)(pMVar1->MaterialMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
    pMVar2 = (this->Mirror).Composition;
  }
  dVar6 = (pMVar1->LasingMediumProperties).Data.SpontaneousLifetime_s;
  pMVar1 = pMVar2;
  if ((char)(pMVar2->MaterialMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
    pMVar1 = (this->Mirror).Composition;
  }
  dVar5 = Material__GetIndexOfRefraction
                    (pMVar1,(pMVar2->LasingMediumProperties).Data.SpontaneousLifetime_s);
  dVar6 = Material__GetReflectanceCoefficient
                    ((Material *)&(this->OutputCoupler).CachedIsMirror,dVar6 / dVar5);
  dVar6 = 1.0 / dVar6;
  libm_sse2_log_precise(0.0);
  return dVar6 * (299792458.0 / (dVar3 + dVar3)) * (1.0 / (dVar4 * 299792458.0));
}

//==== 00645f00 GetFiringFlashOffset_m ====


/* public: double __thiscall LaserModule__GetFiringFlashOffset_m(void)const  */

double __thiscall LaserModule__GetFiringFlashOffset_m(LaserModule *this)

{
  float10 fVar1;
  
  fVar1 = (float10)(**(code **)(*(int *)&(this->FocusingMirror).CachedWavelength_nm + 0x7c))();
  return (double)(fVar1 + (float10)0.0);
}





//==== 00645f20 GetFocusingMirrorRadius_m ====


/* public: double __thiscall LaserModule__GetFocusingMirrorRadius_m(void)const  */

double __thiscall LaserModule__GetFocusingMirrorRadius_m(LaserModule *this)

{
  return (this->FocusingMirror).CachedRadius_m * 1.5;
}





//==== 00645f30 GetGasHotPressure_Pa ====


/* public: double __thiscall ArcLampPumpSubModule__GetGasHotPressure_Pa(void)const  */

double __thiscall ArcLampPumpSubModule__GetGasHotPressure_Pa(ArcLampPumpSubModule *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = this->Radius_m;
  dVar3 = this->CachedLength_m;
  dVar4 = Material__GetGasDensity_kg__m3
                    (this->GasComposition,this->GasComposition->ThermalExpansion__K,60000.0);
  dVar1 = 1.0;
  libm_sse2_pow_precise(0.0,0.0);
  dVar2 = this->PowerSupplied_W /
          (dVar1 * ((this->CachedLength_m * 1.27) / (this->Radius_m + this->Radius_m)));
  libm_sse2_pow_precise(0.0,0.0);
  dVar1 = this->Radius_m;
  dVar3 = dVar5 * dVar5 * 3.141592653589793 * dVar3;
  dVar4 = dVar1 * dVar1 * 3.141592653589793 * this->CachedLength_m * dVar4;
  dVar2 = dVar2 / (dVar1 * 3.141592653589793 * dVar1);
  libm_sse2_pow_precise(0.0,0.0);
  dVar5 = Material__GetGasPressure_Pa(this->GasComposition,dVar2 * 6185.0,dVar4,dVar3);
}





//==== 00646200 GetHeatingRate_W_Clear ====

/* public: void __thiscall LaserModule__GetHeatingRate_W_Clear(void)const  */

void __thiscall LaserModule__GetHeatingRate_W_Clear(LaserModule *this)

{
  *(undefined1 *)&(this->ArcLamp)._pad_0x8_2 = 0;
  (this->ArcLamp)._pad_0x0_0 = 0;
  (this->ArcLamp)._pad_0x4_1 = 0;
  return;
}

//==== 00646380 GetLaserChartXRanges_00646380 ====

/* public: struct util__Range_L_double_G_ __thiscall LaserModule__GetLaserChartXRanges(void)const  */

Range_L_double_G_ * __thiscall
LaserModule__GetLaserChartXRanges(LaserModule *this,Range_L_double_G_ *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = *(double *)&this[1]._pad_0x70_28;
  __return_storage_ptr__->Lower = 0.0;
  __return_storage_ptr__->Upper = dVar1;
  if (dVar1 < 0.0) {
    __return_storage_ptr__->Lower = dVar1;
    __return_storage_ptr__->Upper = 0.0;
  }
  return __return_storage_ptr__;
}

//==== 006463b0 GetLaserChartYRanges_006463b0 ====

/* public: struct util__Range_L_double_G_ __thiscall LaserModule__GetLaserChartYRanges(void)const  */

Range_L_double_G_ * __thiscall
LaserModule__GetLaserChartYRanges(LaserModule *this,Range_L_double_G_ *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar1 = *(double *)&this[1]._pad_0x70_28 * 0.1;
  dVar2 = 1.0;
  if (1.0 <= dVar1) {
    dVar2 = dVar1;
  }
  dVar2 = GetIntensityAtRange_W__m2(dVar2);
  dVar2 = dVar2 / 1000000.0;
  __return_storage_ptr__->Lower = 0.0;
  __return_storage_ptr__->Upper = dVar2;
  if (dVar2 < 0.0) {
    __return_storage_ptr__->Lower = dVar2;
    __return_storage_ptr__->Upper = 0.0;
  }
  return __return_storage_ptr__;
}

//==== 00646800 GetLaserPumpingBandsInChart ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: class util__Darray_L_structutil__tuple2_L_double_Cstructutil__Vec3_L_double_G__G__G_ __thiscall
   LaserModule__GetLaserPumpingBandsInChart(void)const  */

Darray_L_util__tuple2_L_double_Cutil__Vec3_L_double_G___G___G_ * __thiscall
LaserModule__GetLaserPumpingBandsInChart
          (LaserModule *this,
          Darray_L_util__tuple2_L_double_Cutil__Vec3_L_double_G___G___G_ *__return_storage_ptr__)

{
  undefined8 stack0xfffffffc;
  tuple2_L_double_Cutil__Vec3_L_double_G___G_ *ptVar1;
  undefined8 uVar2;
  tuple2_L_double_Cutil__Vec3_L_double_G___G_ *ptVar3;
  Vec3_L_double_G_ *pVVar4;
  bool bVar5;
  Darray_L_double_G_ *pDVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined4 local_40;
  undefined4 uStack_3c;
  Darray_L_double_G_ local_20;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (tuple2_L_double_Cutil__Vec3_L_double_G___G_ *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_229;
  __return_storage_ptr__->Data = (tuple2_L_double_Cutil__Vec3_L_double_G___G_ *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  pDVar6 = (Darray_L_double_G_ *)(uintptr_t)(GetPumpingBands_nm(this,&local_20));
  local_c = 0;
  iVar7 = (**(code **)(pDVar6->_pad_0x0_0 + 0xc))();
  if (local_c < iVar7) {
    do {
      puVar8 = (undefined8 *)(**(code **)pDVar6->_pad_0x0_0)(&local_c);
      iVar7 = __return_storage_ptr__->Size;
      uVar2 = *puVar8;
      *(uint32_t *)&local_10 = iVar7 + 1;
      util__Darray_L_util__Line2_L_double_G___G___SetSize
                ((Darray_L_util__Line2_L_double_G___G_ *)__return_storage_ptr__,&local_10);
      bVar5 = util__Darray_L_Body__RadialImpulse_G___CheckSize
                        ((Darray_L_Body__RadialImpulse_G_ *)__return_storage_ptr__,iVar7);
      if (bVar5) {
        iVar7 = __return_storage_ptr__->Size;
        ptVar3 = __return_storage_ptr__->Data;
        local_40 = (undefined4)uVar2;
        uStack_3c = (undefined4)((ulonglong)uVar2 >> 0x20);
        ptVar1 = ptVar3 + iVar7 + -1;
        *(undefined4 *)&ptVar1->Value1 = local_40;
        *(undefined4 *)((int)&ptVar1->Value1 + 4) = uStack_3c;
        *(undefined4 *)&(ptVar1->Value2).X = 0;
        *(undefined4 *)((int)&(ptVar1->Value2).X + 4) = 0x3ff00000;
        pVVar4 = &ptVar3[iVar7 + -1].Value2;
        *(undefined4 *)&pVVar4->Y = 0;
        *(undefined4 *)((int)&pVVar4->Y + 4) = 0;
        *(undefined4 *)&pVVar4->Z = 0;
        *(undefined4 *)((int)&pVVar4->Z + 4) = 0;
      }
      local_c = local_c + 1;
      iVar7 = (**(code **)(pDVar6->_pad_0x0_0 + 0xc))();
    } while (local_c < iVar7);
  }
  local_20._pad_0x0_0 = (int)&vftable_63;
  if (local_20.Data != (double *)0x0) {
    port_op_delete(local_20.Data);
  }
  return __return_storage_ptr__;
}

//==== 00646900 GetLaserSpectraChartXRanges ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: struct util__Range_L_double_G_ __thiscall LaserModule__GetLaserSpectraChartXRanges(void)const
    */

Range_L_double_G_ * __thiscall
LaserModule__GetLaserSpectraChartXRanges(LaserModule *this,Range_L_double_G_ *__return_storage_ptr__)

{
  undefined8 stack0xfffffffc;
  Darray_L_double_G_ *pDVar1;
  int iVar2;
  double *pdVar3;
  Darray_L_double_G_ local_28;
  undefined4 local_18;
  double local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pDVar1 = (Darray_L_double_G_ *)(uintptr_t)(GetPumpingBands_nm(this,&local_28));
  iVar2 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
  if (iVar2 == 0) {
    *(uint32_t *)&local_14 = 0.0;
  }
  else {
    *(uint32_t *)&local_18 = 0;
    pdVar3 = (double *)(**(code **)pDVar1->_pad_0x0_0)(&local_18);
    local_c = 0;
    *(uint32_t *)&local_14 = *pdVar3;
    iVar2 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
    if (local_c < iVar2) {
      do {
        pdVar3 = (double *)(**(code **)pDVar1->_pad_0x0_0)(&local_c);
        if (local_14 <= *pdVar3) {
          *(uint32_t *)&local_14 = *pdVar3;
        }
        local_c = local_c + 1;
        iVar2 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
      } while (local_c < iVar2);
    }
  }
  *(uint32_t *)&local_14 = local_14 + 100.0;
  local_28._pad_0x0_0 = (int)&vftable_63;
  if (local_28.Data != (double *)0x0) {
    port_op_delete(local_28.Data);
  }
  __return_storage_ptr__->Upper = local_14;
  __return_storage_ptr__->Lower = 0.0;
  if (local_14 < 0.0) {
    __return_storage_ptr__->Lower = local_14;
    __return_storage_ptr__->Upper = 0.0;
  }
  return __return_storage_ptr__;
}

//==== 00646aa0 GetLength_m_00646aa0 ====


/* public: double __thiscall FixedLaserMountSubModule__GetLength_m(void)const  */

double __thiscall FixedLaserMountSubModule__GetLength_m(FixedLaserMountSubModule *this)

{
  return this->CachedRadius_m;
}





//==== 00646ab0 GetLossCoefficient__m ====

/* public: double __thiscall LaserModule__GetLossCoefficient__m(void)const  */

double __thiscall LaserModule__GetLossCoefficient__m(LaserModule *this)

{
  Material *pMVar1;
  Material *pMVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  pMVar1 = (this->Mirror).Composition;
  pMVar2 = pMVar1;
  if ((char)(pMVar1->MaterialMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
    pMVar2 = (this->Mirror).Composition;
  }
  dVar3 = (pMVar1->LasingMediumProperties).Data.SpontaneousLifetime_s;
  pMVar1 = pMVar2;
  if ((char)(pMVar2->MaterialMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
    pMVar1 = (this->Mirror).Composition;
  }
  dVar4 = Material__GetIndexOfRefraction
                    (pMVar1,(pMVar2->LasingMediumProperties).Data.SpontaneousLifetime_s);
  pMVar1 = (this->Mirror).Composition;
  pMVar2 = pMVar1;
  if ((char)(pMVar1->MaterialMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
    pMVar2 = (this->Mirror).Composition;
  }
  dVar6 = (pMVar1->LasingMediumProperties).Data.SpontaneousLifetime_s;
  pMVar1 = pMVar2;
  if ((char)(pMVar2->MaterialMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
    pMVar1 = (this->Mirror).Composition;
  }
  dVar5 = Material__GetIndexOfRefraction
                    (pMVar1,(pMVar2->LasingMediumProperties).Data.SpontaneousLifetime_s);
  dVar6 = Material__GetReflectanceCoefficient
                    ((Material *)&(this->Mirror).CachedIsMirror,dVar6 / dVar5);
  pMVar1 = (this->Mirror).Composition;
  pMVar2 = pMVar1;
  if ((char)(pMVar1->MaterialMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
    pMVar2 = (this->Mirror).Composition;
  }
  dVar5 = (pMVar1->LasingMediumProperties).Data.SpontaneousLifetime_s;
  pMVar1 = pMVar2;
  if ((char)(pMVar2->MaterialMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
    pMVar1 = (this->Mirror).Composition;
  }
  dVar7 = Material__GetIndexOfRefraction
                    (pMVar1,(pMVar2->LasingMediumProperties).Data.SpontaneousLifetime_s);
  dVar5 = Material__GetReflectanceCoefficient
                    ((Material *)&(this->OutputCoupler).CachedIsMirror,dVar5 / dVar7);
  pMVar1 = (this->Mirror).Composition;
  pMVar2 = pMVar1;
  if ((char)(pMVar1->MaterialMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
    pMVar2 = (this->Mirror).Composition;
  }
  dVar7 = (pMVar1->LasingMediumProperties).Data.SpontaneousLifetime_s * 1e-09 *
          (double)*(int *)((char *)&(this->Mirror) + 0x14);
  dVar4 = Material__GetAbsorptionCoefficient__m(pMVar2,dVar3 / dVar4);
  dVar3 = 1.0 / (dVar5 * dVar6);
  libm_sse2_log_precise(0.0);
  return dVar3 / (dVar7 + dVar7) + dVar4;
}

//==== 00647080 GetPowerAtWavelength_W ====


/* public: double  ArcLampPumpSubModule__GetPowerAtWavelength_W(double,double)const  */

double 
ArcLampPumpSubModule__GetPowerAtWavelength_W
          (ArcLampPumpSubModule *this,double param_1,double param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = 1.0;
  libm_sse2_pow_precise(0.0,0.0);
  dVar1 = this->PowerSupplied_W /
          (dVar1 * ((this->CachedLength_m * 1.27) / (this->Radius_m + this->Radius_m)));
  libm_sse2_pow_precise(0.0,0.0);
  dVar1 = dVar1 / (this->Radius_m * 3.141592653589793 * this->Radius_m);
  libm_sse2_pow_precise(0.0,0.0);
  dVar2 = GetGasHotPressure_Pa(this);
  dVar2 = Material__GetGasDensity_kg__m3(this->GasComposition,dVar1 * 6185.0,dVar2);
  dVar3 = Material__GetSingleParticleMass_kg(this->GasComposition);
  dVar1 = Material__GetPowerEmittedForWavelength_W
                    (this->GasComposition,dVar1 * 6185.0,dVar2 / dVar3,
                     this->Radius_m * 6.283185307179586 * this->CachedLength_m * 1e-09,param_1,
                     param_2);
}





//==== 006471a0 GetPumpingBands_nm ====

/* public: class util__Darray_L_double_G_ const __thiscall LaserModule__GetPumpingBands_nm(void)const
    */

Darray_L_double_G_ * __thiscall
LaserModule__GetPumpingBands_nm(LaserModule *this,Darray_L_double_G_ *__return_storage_ptr__)

{
  Material *pMVar1;
  longlong lVar2;
  double *pdVar3;
  double *pdVar4;
  LaserModule *local_8;
  
  pMVar1 = (this->Mirror).Composition;
  local_8 = this;
  if ((char)(pMVar1->MaterialMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_63;
  __return_storage_ptr__->Data = (double *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity =
       *(int *)((int)&(pMVar1->LasingMediumProperties).Data.TransitionWavelength_nm + 4);
  local_8 = (LaserModule *)
            (**(code **)(*(int *)&(pMVar1->LasingMediumProperties).Data.IsThreeLevelPumpScheme + 0xc
                        ))();
  util__Darray_double___SetSize(__return_storage_ptr__,(int *)&local_8);
  lVar2 = (ulonglong)(uint)__return_storage_ptr__->Capacity * 8;
  local_8 = (LaserModule *)(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
  pdVar3 = (double *)(uintptr_t)(port_op_new((uint)local_8));
  if (pdVar3 == (double *)0x0) {
    pdVar3 = (double *)0x0;
  }
  else {
    memset(pdVar3,0,(size_t)(uintptr_t)((size_t)(uintptr_t)(local_8)));
  }
  __return_storage_ptr__->Data = pdVar3;
  pdVar4 = *(double * *)((char *)&((pMVar1->LasingMediumProperties).Data) + 0x24);
  if (pdVar4 != pdVar4 + (int)((pMVar1->LasingMediumProperties).Data.TransitionWavelength_nm)){
    do {
      *pdVar3 = *pdVar4;
      pdVar4 = pdVar4 + 1;
      pdVar3 = pdVar3 + 1;
    } while (pdVar4 != (double *)
                       ((int)((*(undefined1 *)((char *)&((pMVar1->LasingMediumProperties).Data) + 0x24)) +
                       *(int *)&(pMVar1->LasingMediumProperties).Data.TransitionWavelength_nm * 8)));
  }
  return __return_storage_ptr__;
}

//==== 00647bd0 GetTotalEfficiency_Percent ====

/* public: double __thiscall FrequencyDoublerSubModule__GetTotalEfficiency_Percent(void)const  */

double __thiscall
FrequencyDoublerSubModule__GetTotalEfficiency_Percent(FrequencyDoublerSubModule *this)

{
  Material *this_00;
  Maybe_L_double_G_ *pMVar1;
  double dVar2;
  Maybe_L_double_G_ local_34;
  double local_24;
  double local_1c;
  double local_14;
  double local_c;
  
  if ((0.0 < this->CachedPower_W /
             (this->OpticRadius_m * 3.141592653589793 * this->OpticRadius_m * 0.5)) &&
     (dVar2 = GetEfficiencyCoefficient(this), 0.0 < dVar2)) {
    this_00 = (Material *)(this->MaterialClass__NonlinearOptic)._pad_0x10_4;
    local_c = this_00->LasingDamageThreshold_TW__m2 * 1e-12;
    *(uint32_t *)&local_14 = this->CachedWavelength_nm * 1e-09;
    dVar2 = Material__GetIndexOfRefraction(this_00,this->CachedWavelength_nm);
    local_1c = ((local_c * local_c * 78.95683520871486) /
               (local_14 * local_14 * 0.0026544187292520845 * dVar2 * dVar2 * dVar2)) *
               this->OpticLength_m * this->OpticLength_m *
               (this->CachedPower_W /
               (this->OpticRadius_m * 3.141592653589793 * this->OpticRadius_m * 0.5));
    *(uint32_t *)&local_24 = GetEfficiencyCoefficient(this);
    *(uint32_t *)&local_24 = local_1c / local_24;
    pMVar1 = util__Sqrt(&local_34,&local_24);
    if (pMVar1->IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    *(uint32_t *)&local_14 = pMVar1->Data;
    *(uint32_t *)&local_1c = GetEfficiencyCoefficient(this);
    dVar2 = util__JacobianAM_L_double_G_(local_14,local_1c);
    *(uint32_t *)&local_1c = dVar2;
    libm_sse2_sin_precise(0.0);
    *(uint32_t *)&local_1c = dVar2;
    dVar2 = GetEfficiencyCoefficient(this);
    return dVar2 * local_1c * local_1c;
  }
  return 0.0;
}

//==== 00647e50 GetTotalLaserOutputPower_W ====

/* public: double __thiscall LaserModule__GetTotalLaserOutputPower_W(void)const  */

double __thiscall LaserModule__GetTotalLaserOutputPower_W(LaserModule *this)

{
  Material *pMVar1;
  double dVar2;
  double dVar3;
  
  pMVar1 = (this->Mirror).Composition;
  if ((char)(pMVar1->MaterialMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar2 = (pMVar1->LasingMediumProperties).Data.SpontaneousLifetime_s;
  dVar3 = GetTotalOutputPhotonFlux__s();
  dVar3 = (dVar3 * 6.62606957e-34 * 299792458.0) / (dVar2 * 1e-09);
  dVar2 = (this->ArcLamp).CavitySemiminorAxis_m;
  if (dVar3 <= dVar2) {
    dVar2 = dVar3;
  }
  return dVar2;
}

//==== 006481d0 GetTotalPowerAcrossAllWavelengths_W_MemoizedFunction ====


/* private: double 
   ArcLampPumpSubModule__GetTotalPowerAcrossAllWavelengths_W_MemoizedFunction(void)const  */

double 
ArcLampPumpSubModule__GetTotalPowerAcrossAllWavelengths_W_MemoizedFunction
          (ArcLampPumpSubModule *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dStack_24;
  double dStack_c;
  
  dStack_c = 5.0;
  dVar1 = 1.0;
  libm_sse2_pow_precise(0.0,0.0);
  dStack_24 = 0.0;
  do {
    dVar4 = this->CachedLength_m;
    dVar7 = this->Radius_m;
    dVar2 = this->PowerSupplied_W / (((dVar4 * 1.27) / (dVar7 + dVar7)) * dVar1);
    libm_sse2_pow_precise(0.0,0.0);
    dVar5 = Material__GetGasDensity_kg__m3
                      (this->GasComposition,this->GasComposition->ThermalExpansion__K,60000.0);
    dVar3 = this->PowerSupplied_W /
            (((this->CachedLength_m * 1.27) / (this->Radius_m + this->Radius_m)) * dVar1);
    libm_sse2_pow_precise(0.0,0.0);
    dVar4 = dVar7 * dVar7 * 3.141592653589793 * dVar4;
    dVar6 = this->Radius_m;
    dVar5 = dVar6 * dVar6 * 3.141592653589793 * this->CachedLength_m * dVar5;
    dVar3 = dVar3 / (dVar6 * 3.141592653589793 * dVar6);
    libm_sse2_pow_precise(0.0,0.0);
    dVar6 = Material__GetGasPressure_Pa(this->GasComposition,dVar3 * 6185.0,dVar5,dVar4);
    dVar4 = this->PowerSupplied_W /
            (((this->CachedLength_m * 1.27) / (this->Radius_m + this->Radius_m)) * dVar1);
    libm_sse2_pow_precise(0.0,0.0);
    dVar4 = dVar4 / (this->Radius_m * 3.141592653589793 * this->Radius_m);
    libm_sse2_pow_precise(0.0,0.0);
    dVar4 = Material__GetGasDensity_kg__m3(this->GasComposition,dVar4 * 6185.0,dVar6);
    dVar6 = Material__GetSingleParticleMass_kg(this->GasComposition);
    dVar4 = dVar4 / dVar6;
    dVar5 = 10.0;
    dVar6 = this->Radius_m * 6.283185307179586 * this->CachedLength_m * 1e-09;
    dVar2 = dVar2 / (dVar7 * 3.141592653589793 * dVar7);
    dVar7 = dStack_c;
    libm_sse2_pow_precise(0.0,0.0);
    dVar4 = Material__GetPowerEmittedForWavelength_W
                      (this->GasComposition,dVar2 * 6185.0,dVar4,dVar6,dVar7,dVar5);
    dStack_c = dStack_c + 10.0;
    dStack_24 = dVar4 + dStack_24;
  } while (dStack_c < 9999.999999999998);
}





//==== 00648b40 Render_00648b40 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void  ModuleDiagram_L_classLaserModule_G___Render(void)const  */

void __thiscall ModuleDiagram_class_LaserModule___Render(ModuleDiagram_L_class_LaserModule_G_ *this)

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
  LaserModule__RenderDiagram(*(LaserModule **)(this + 0x168),pMVar1,*(Vec4_L_int_G_ *)&VVar3);
  Graphics__ShaderStack___ShaderStack(&SStack_9);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00648c70 Render_00648c70 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall LaserModule__Render(struct util__Vec3_L_double_G_,bool,bool,bool)const  */

void __thiscall
LaserModule__Render(LaserModule *this,Vec4_L_double_G_ param_1,bool param_2,bool param_3,bool param_4)

{
  undefined8 stack0xfffffffc;
  Vec4_L_double_G_ VVar1;
  Vec4_L_double_G_ VVar2;
  Quaternion_L_double_G_ QVar3;
  Vec4_L_double_G_ VVar4;
  bool bVar5;
  Vec3_L_double_G_ *pVVar6;
  double dVar7;
  Vec4_L_double_G_ local_4c;
  Quaternion_L_double_G_ local_34;
  double local_14;
  TransformStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((ReferenceController *)this[1]._pad_0x94_37 != (ReferenceController *)0x0) {
    bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)this[1]._pad_0x94_37)
    ;
    if (!bVar5) {
      this[1]._pad_0x90_36 = 0;
    }
  }
  GameModel__Render((GameModel *)this[1]._pad_0x90_36,0.0,0.0,true);
  if ((char)this[1]._pad_0x38_14 != '\0') {
    pVVar6 = WeaponCompartment__GetDefaultTargetDirection(&local_4c);
    VVar1.W = (int)((ulonglong)pVVar6->Z >> 0x20);
    (*(uint32_t *)((char *)&(VVar1) + 0)) = (uint32_t)(uintptr_t)(*(undefined1 (*) [20])pVVar6);
    TurretSubModule__RenderExtruderModel
              ((TurretSubModule *)&(this->Turret).Data.field0_0x0,VVar1,param_1,param_4,false);
    Graphics__TransformStack__TransformStack(&local_9,Style__Default);
    if ((char)this[1]._pad_0x38_14 == '\0') {
      dVar7 = 0.0;
    }
    else {
      dVar7 = TurretSubModule__GetExtruderLength_m
                        ((TurretSubModule *)&(this->Turret).Data.field0_0x0);
      *(uint32_t *)&local_14 = dVar7;
    }
    VVar4.Z = SUB84(dVar7 / 1000.0,0);
    VVar4.X = 0.0;
    VVar4.Y = 0.0;
    VVar4.W = (int)((ulonglong)(dVar7 / 1000.0) >> 0x20);
    Graphics__Translate(VVar4);
    pVVar6 = WeaponCompartment__GetDefaultTargetDirection(&local_4c);
    VVar2.W = (int)((ulonglong)pVVar6->Z >> 0x20);
    (*(uint32_t *)((char *)&(VVar2) + 0)) = (uint32_t)(uintptr_t)(*(undefined1 (*) [20])pVVar6);
    util__Quaternion_double___Quaternion_double(&local_34,VVar2,param_1);
    QVar3.Y = local_34.Y;
    QVar3.X = local_34.X;
    QVar3.Y = local_34.Y;
    QVar3.Z = local_34.Z;
    QVar3.Z = local_34.Z;
    QVar3.W = local_34.W;
    QVar3.W = local_34.W;
    (*(uint32_t *)((char *)&(QVar3.W) + 4)) = (*(uint32_t *)((char *)&(local_34.W) + 4));
    Graphics__Rotate(QVar3);
    if (param_2) {
      if ((ReferenceController *)this[1]._pad_0x7c_31 != (ReferenceController *)0x0) {
        bVar5 = util__ReferenceController__IsDataStillValid
                          ((ReferenceController *)this[1]._pad_0x7c_31);
        if (!bVar5) {
          this[1]._pad_0x78_30 = 0;
        }
      }
      GameModel__Render((GameModel *)this[1]._pad_0x78_30,0.0,0.0,param_4);
    }
    if ((ReferenceController *)this[1]._pad_0x84_33 != (ReferenceController *)0x0) {
      bVar5 = util__ReferenceController__IsDataStillValid
                        ((ReferenceController *)this[1]._pad_0x84_33);
      if (!bVar5) {
        this[1]._pad_0x80_32 = 0;
      }
    }
    GameModel__Render((GameModel *)this[1]._pad_0x80_32,0.0,0.0,true);
    if (param_3) {
      if ((ReferenceController *)this[1]._pad_0x8c_35 != (ReferenceController *)0x0) {
        bVar5 = util__ReferenceController__IsDataStillValid
                          ((ReferenceController *)this[1]._pad_0x8c_35);
        if (!bVar5) {
          this[1]._pad_0x88_34 = 0;
        }
      }
      GameModel__Render((GameModel *)this[1]._pad_0x88_34,0.0,0.0,true);
    }
    Graphics__TransformStack___TransformStack(&local_9);
    return;
  }
  if ((char)this[1]._pad_0x68_26 != '\0') {
    if (param_2) {
      if ((ReferenceController *)this[1]._pad_0x7c_31 != (ReferenceController *)0x0) {
        bVar5 = util__ReferenceController__IsDataStillValid
                          ((ReferenceController *)this[1]._pad_0x7c_31);
        if (!bVar5) {
          this[1]._pad_0x78_30 = 0;
        }
      }
      GameModel__Render((GameModel *)this[1]._pad_0x78_30,0.0,0.0,true);
    }
    if ((ReferenceController *)this[1]._pad_0x84_33 != (ReferenceController *)0x0) {
      bVar5 = util__ReferenceController__IsDataStillValid
                        ((ReferenceController *)this[1]._pad_0x84_33);
      if (!bVar5) {
        this[1]._pad_0x80_32 = 0;
      }
    }
    GameModel__Render((GameModel *)this[1]._pad_0x80_32,0.0,0.0,true);
    if (param_3) {
      if ((ReferenceController *)this[1]._pad_0x8c_35 != (ReferenceController *)0x0) {
        bVar5 = util__ReferenceController__IsDataStillValid
                          ((ReferenceController *)this[1]._pad_0x8c_35);
        if (!bVar5) {
          this[1]._pad_0x88_34 = 0;
        }
      }
      GameModel__Render((GameModel *)this[1]._pad_0x88_34,0.0,0.0,true);
    }
  }
  return;
}

//==== 00648f40 RenderDiagram_00648f40 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall LaserModule__RenderDiagram(class Manager *,struct util__Vec2_L_int_G_)const
    */

void __thiscall LaserModule__RenderDiagram(LaserModule *this,Manager *param_1,Vec4_L_int_G_ param_2)

{
  undefined8 stack0xfffffe68;
  undefined8 stack0xfffffe7c;
  undefined8 stack0xfffffe8c;
  undefined8 stack0xffffffec;
  undefined8 stack0xfffffffc;
  double dVar1;
  double *pdVar2;
  Material *pMVar3;
  Color CVar4;
  Str_L_char_G_ SVar5;
  Maybe_L_util__Color_G_ MVar6;
  Vec3_L_double_G_ VVar7;
  Vec3_L_float_G_ VVar8;
  Vec3_L_float_G_ VVar9;
  Vec3_L_float_G_ VVar10;
  Vec3_L_float_G_ VVar11;
  bool bVar12;
  Maybe_L_double_G_ *pMVar13;
  Vec3_L_float_G_ *pVVar14;
  Color *this_00;
  Color *pCVar15;
  LocStr *pLVar16;
  Str_L_char_G_ *pSVar17;
  Str_L_char_G_ *pSVar18;
  int iVar19;
  double dVar20;
  int in_stack_fffffe68;
  int iVar21;
  char *pcVar22;
  float fVar23;
  undefined1 auVar24 [4];
  undefined **ppuVar25;
  Str_L_char_G_ in_stack_fffffe8c;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  Font *pFVar31;
  int TVar32;
  int TVar33;
  undefined4 uVar34;
  Verticality VVar35;
  undefined4 uVar36;
  Style SVar37;
  undefined4 uVar38;
  Color local_100;
  Color local_e0;
  void *local_c0 [3];
  void *local_b4;
  Str_L_char_G_ local_a8;
  Str_L_char_G_ local_9c;
  Str_L_char_G_ local_90;
  Str_L_char_G_ local_84;
  Str_L_char_G_ local_78;
  undefined1 local_6c [4];
  undefined1 auStack_68 [12];
  int local_5c;
  undefined1 local_58 [4];
  undefined8 local_54;
  undefined4 local_4c;
  Str_L_char_G_ SStack_48;
  undefined1 local_3c [12];
  void *pvStack_30;
  double local_2c;
  undefined1 local_24 [4];
  undefined8 uStack_20;
  undefined1 local_18 [8];
  float fStack_10;
  TransformStack local_a;
  TransformStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  uVar38 = 0x3f800000;
  glLineWidth();
  dVar20 = *(double *)&(this->ArcLamp).CachedPumpingBands_nm.Size;
  register0x00001280 = (double)(param_2.X / 2) / dVar20;
  local_5c = (int)(dVar20 * register0x00001280);
  iVar19 = (int)((this->ArcLamp).CachedLasingRodRadius_m * register0x00001280);
  (*(uint32_t*)((char*)&(uStack_20)+4)) = iVar19;
  Graphics__TransformStack__TransformStack(&local_a,Style__Default);
  local_4c = 0;
  SStack_48.Data = (char *)0x0;
  SStack_48.Capacity = 0;
  SStack_48.Length = 0;
  Graphics__Translate((double)(param_2.X / 2),(double)(param_2.Y / 2),0.0);
  if ((this->GetMirrorFocalLengthLimit_m_MemoizedValue).IsValidData == false) {
    iVar19 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
    (*(uint32_t*)((char*)&(local_54)+4)) = iVar19 + 1;
    util__Darray_L_util__tuple2_L_Order__Type_Cint_G___G___SetSize
              ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)&this->GetFinalWavelength_nm_MemoizedValue,
               (int *)((int)&local_54 + 4));
    bVar12 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                       ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                        &this->GetFinalWavelength_nm_MemoizedValue,iVar19);
    if (bVar12) {
      iVar19 = *(int *)((int)&(this->GetFinalWavelength_nm_MemoizedValue).Data + 4);
      iVar21 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
      *(code **)(iVar19 + -8 + iVar21 * 8) = (long long int (*)())(GetFiringTemperatureJump_K_Clear);
      *(undefined4 *)(iVar19 + -4 + iVar21 * 8) = 0;
    }
    GetHeatGenerated_W_Memoize();
    if ((this->GetHeatingRate_W_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    pdVar2 = (this->ArcLamp).CachedPumpingBands_nm.Data;
    local_54 = TurbopumpSubModule__GetMassFlowRate_kg__s
                         ((TurbopumpSubModule *)&(this->CoolantTurbopump).RotationalSpeed_RPM);
    iVar19 = (*(uint32_t*)((char*)&(uStack_20)+4));
    local_54 = local_54 * pdVar2[0x12];
    auStack_68[4] = true;
    _local_6c = (this->GetHeatingRate_W_MemoizedValue).Data / local_54;
    (this->GetMirrorFocalLengthLimit_m_MemoizedValue).Data = _local_6c;
    *(undefined4 *)&((this->GetMirrorFocalLengthLimit_m_MemoizedValue).IsValidData) = (*(uint32_t*)((char*)&(auStack_68)+4))
    ;
    *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetMirrorFocalLengthLimit_m_MemoizedValue)) + 0xc)) = (*(uint32_t*)((char*)&(auStack_68)+8));
    if ((this->GetMirrorFocalLengthLimit_m_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  GetFlowTemperatureColor
            ((Vec3_L_double_G_ *)local_3c,
             (double)CONCAT44(uVar38,(int)((ulonglong)
                                           (*(double *)
                                             &(this->FrequencyDoubler).Data.MaterialClass__NonlinearOptic.
                                              _pad_0x8_2 +
                                           (this->GetMirrorFocalLengthLimit_m_MemoizedValue).Data)
                                          >> 0x20)));
  VVar9.Y = (float)(double)CONCAT44(pvStack_30,(*(uint32_t*)((char*)&(local_3c)+8)));
  VVar9.X = (float)(double)CONCAT44((*(uint32_t*)((char*)&(local_3c)+4)),(*(uint32_t*)&(local_3c)));
  VVar9.Z = (float)local_2c;
  glColorVec(VVar9);
  DrawAntialiasedEllipse
            ((double)local_5c,(double)iVar19,0x48,true,1.0,(double)CONCAT44(SStack_48.Data,local_4c)
            );
  uVar38 = 0;
  glColor3d();
  DrawAntialiasedEllipse
            ((double)local_5c,(double)iVar19,0x48,false,1.0,
             (double)CONCAT44(SStack_48.Data,local_4c));
  dVar20 = *(double *)&(this->ArcLamp).CachedPumpingBands_nm.Size;
  dVar1 = (this->ArcLamp).CachedLasingRodRadius_m;
  uStack_20 = dVar20 * dVar20 - dVar1 * dVar1;
  pMVar13 = util__Sqrt((Maybe_L_double_G_ *)local_6c,(double *)&uStack_20);
  if (pMVar13->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  uStack_20 = pMVar13->Data * unique0x100010ef;
  Graphics__TransformStack__TransformStack(&local_9,Style__Default);
  Graphics__Translate(uStack_20 * 0.5,(double)CONCAT44(SStack_48.Data,local_4c),
                      (double)CONCAT44(SStack_48.Data,local_4c));
  pMVar3 = (this->Mirror).Composition;
  if ((char)(pMVar3->MaterialMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pVVar14 = (Vec3_L_float_G_ *)(uintptr_t)(Physics__GetFalseColorFromWavelength
                      ((Vec3_L_float_G_ *)(local_6c + 4),
                       (double)CONCAT44(uVar38,(int)((ulonglong)
                                                     (pMVar3->LasingMediumProperties).Data.
                                                     SpontaneousLifetime_s >> 0x20))));
  glColorVec(*pVVar14);
  DrawAntialiasedCircle
            ((this->Mirror).CachedRadius_m * stack0xffffffec,0x48,true,1.0,
             (double)CONCAT44(SStack_48.Data,local_4c));
  uVar38 = 0;
  glColor3d();
  DrawAntialiasedCircle
            ((this->Mirror).CachedRadius_m * stack0xffffffec,0x48,false,1.0,
             (double)CONCAT44(SStack_48.Data,local_4c));
  Graphics__TransformStack___TransformStack(&local_9);
  Graphics__TransformStack__TransformStack(&local_9,Style__Default);
  Graphics__Translate(uStack_20 * -0.5,(double)CONCAT44(SStack_48.Data,local_4c),
                      (double)CONCAT44(SStack_48.Data,local_4c));
  pMVar3 = *(Material **)((int)&(this->ArcLamp).CavitySemimajorAxis_m + 4);
  Material__GetReflectanceColor_Memoize(pMVar3);
  if ((char)((pMVar3->GetCost_CU__kg_MemoizedValue).Data == '\0')){
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  VVar10.X = (float)(pMVar3->GetEmissiveColors_MemoizedValue).Data._pad_0x0_0;
  VVar10.Y = (double)(uintptr_t)((float)(int)(uintptr_t)(pMVar3->GetEmissiveColors_MemoizedValue).Data.Data);
  VVar10.Z = (float)(pMVar3->GetEmissiveColors_MemoizedValue).Data.Size;
  glColorVec(VVar10);
  dVar20 = Material__GetYieldStrength_Pa
                     (*(Material **)((int)&(this->ArcLamp).CavitySemimajorAxis_m + 4));
  uVar34 = SUB84(dVar20,0);
  uVar36 = (undefined4)((ulonglong)dVar20 >> 0x20);
  dVar20 = ArcLampPumpSubModule__GetGasHotPressure_Pa
                     ((ArcLampPumpSubModule *)&(this->ArcLamp).GetMaxPowerLine_W_MemoizedValue);
  Mechanics__GetThicknessOfPressurizedTubeNeeded_m
            ((Maybe_L_double_G_ *)local_6c,
             (double)CONCAT44(SUB84(dVar20,0),
                              (int)((ulonglong)(this->ArcLamp).CachedLength_m >> 0x20)),
             (double)CONCAT44(uVar34,(int)((ulonglong)dVar20 >> 0x20)),
             (double)CONCAT44(uVar38,uVar36));
  dVar20 = _local_6c;
  if ((bool)auStack_68[4] == false) {
    dVar20 = (double)CONCAT44(SStack_48.Data,local_4c);
  }
  DrawAntialiasedCircle
            ((dVar20 + (this->ArcLamp).CachedLength_m) * stack0xffffffec,0x48,true,1.0,
             (double)CONCAT44(SStack_48.Data,local_4c));
  pMVar3 = *(Material * *)&(this->ArcLamp).CavitySemimajorAxis_m;
  Material__GetReflectanceColor_Memoize(pMVar3);
  if ((char)((pMVar3->GetCost_CU__kg_MemoizedValue).Data == '\0')){
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  VVar11.X = (float)(pMVar3->GetEmissiveColors_MemoizedValue).Data._pad_0x0_0;
  VVar11.Y = (double)(uintptr_t)((float)(int)(uintptr_t)(pMVar3->GetEmissiveColors_MemoizedValue).Data.Data);
  VVar11.Z = (float)(pMVar3->GetEmissiveColors_MemoizedValue).Data.Size;
  glColorVec(VVar11);
  DrawAntialiasedCircle
            ((this->ArcLamp).CachedLength_m * stack0xffffffec,0x48,true,1.0,
             (double)CONCAT44(SStack_48.Data,local_4c));
  Graphics__TransformStack___TransformStack(&local_9);
  Graphics__TransformStack___TransformStack(&local_a);
  Graphics__TransformStack__TransformStack(&local_a,Style__Default);
  *(uint32_t *)&VVar7.Y = (uint32_t)(uintptr_t)(SStack_48.Data);
  VVar7.X = local_4c;
  VVar7.Y = SUB84((double)(param_2.Y + 100),0);
  VVar7.Z = (int)((ulonglong)(double)(param_2.Y + 100) >> 0x20);
  Graphics__Translate(VVar7);
  VVar8.Z = 1.0;
  VVar8.X = 1.0;
  VVar8.Y = 1.0;
  glColorVec(VVar8);
  dVar20 = GetIntensityAtRange_W__m2(*(double *)&this[1]._pad_0x70_28);
  (*(uint32_t*)((char*)&(local_18)+4)) = SUB84(dVar20,0);
  fStack_10 = (float)((ulonglong)dVar20 >> 0x20);
  util__Str_char___Str_char((Str_L_char_G_ *)(local_6c + 4),"IntensityAtRange_W__m2");
  util__Str_char___Str_char(&local_9c,"Colon");
  util__Str_char___Str_char(&local_90,"LaserDamageAtEngagementRange");
  SVar37 = Style__Default;
  VVar35 = Verticality__Horizontal;
  TVar33 = FaceType__Top__V;
  TVar32 = FaceType__Left__V;
  pFVar31 = (Font *)0x0;
  fVar30 = 0.7;
  pCVar15 = &local_e0;
  this_00 = (Color *)util__Color__Color(&local_100,Preset__Black,1.0);
  pCVar15 = util__Color__ReAlphaed(this_00,pCVar15,fVar30);
  util__Str_char___Str_char((Str_L_char_G_ *)&stack0xfffffe8c,(Str_L_char_G_ *)&pCVar15->_pad_0x4_1);
  ppuVar25 = &vftable_59;
  fVar26 = pCVar15->Hue_degrees;
  fVar27 = pCVar15->Saturation;
  fVar28 = pCVar15->Value;
  fVar29 = pCVar15->Alpha;
  uVar38 = CONCAT31((int3)((uint)fVar30 >> 8),1);
  local_78.Data = (char *)0x0;
  local_78.Capacity = 0;
  local_78.Length = 0;
  *(uint32_t *)&local_58 = (uint32_t)0x0;
  (*(uint32_t*)&(local_54)) = 0;
  (*(uint32_t*)((char*)&(local_54)+4)) = 0;
  pLVar16 = (LocStr *)util__LocStr__LocStr((LocStr *)local_3c,&local_9c,&local_78);
  pSVar17 = util__LocStr__operator__o3(pLVar16);
  pcVar22 = (char *)0x64965f;
  pLVar16 = (LocStr *)util__LocStr__LocStr((LocStr *)local_c0,&local_90,(Str_L_char_G_ *)local_58);
  pSVar18 = util__LocStr__operator__o3(pLVar16);
  (*(uint32_t*)((char*)&(uStack_20)+4)) = 0;
  *(uint32_t *)&local_24 = (uint32_t)0x0;
  (*(uint32_t*)&(uStack_20)) = 0;
  util__Str_char___Str_char((Str_L_char_G_ *)local_24,pSVar18);
  util__Str_char___operator__o10((Str_L_char_G_ *)local_24,pSVar17);
  *(uint32_t *)&auVar24 = (uint32_t)local_24;
  fVar30 = 9.23757e-39;
  util__Str_char___Str_char(&local_a8,(Str_L_char_G_ *)auVar24);
  if (local_24 != (uint32_t)0x0) {
    fVar30 = 9.237588e-39;
    memcpy(&auVar24, &local_24, 16);
    port_op_delete((void *)local_24);
    *(uint32_t *)&local_24 = (uint32_t)0x0;
  }
  GetUnitsOfType((Str_L_char_G_ *)&stack0xfffffe7c,(Str_L_char_G_ *)(local_6c + 4));
  pSVar17 = &SStack_48;
  iVar21 = 0x6496cf;
  SVar5.Capacity = (int)auVar24;
  SVar5.Data = (char *)(uintptr_t)(*(char *)&(fVar30));
  SVar5.Length = (int)ppuVar25;
  iVar19 = (*(uint32_t*)((char*)&(local_18)+4));
  fVar30 = fStack_10;
  pSVar18 = Print(pSVar17,(double)CONCAT44(pcVar22,fStack_10),SVar5);
  fStack_10 = 0;
  (*(uint32_t*)&(local_18)) = (uint32_t)(uintptr_t)((Str_L_char_G_ *)0x0);
  (*(uint32_t*)((char*)&(local_18)+4)) = 0;
  util__Str_char___Str_char((Str_L_char_G_ *)local_18,&local_a8);
  util__Str_char___operator__o10((Str_L_char_G_ *)local_18,pSVar18);
  pSVar18 = (Str_L_char_G_ *)local_18;
  fVar23 = 9.237728e-39;
  util__Str_char___Str_char(&local_84,pSVar18);
  if ((Str_L_char_G_ *)(*(uint32_t*)&(local_18)) != (Str_L_char_G_ *)0x0) {
    fVar23 = 9.237746e-39;
    pSVar18 = (Str_L_char_G_ *)(*(uint32_t*)&(local_18));
    port_op_delete((void *)(*(uint32_t*)&(local_18)));
    (*(uint32_t*)&(local_18)) = (uint32_t)(uintptr_t)((Str_L_char_G_ *)0x0);
  }
  util__Color__Color((Color *)&stack0xfffffe68,Preset__White,1.0);
  CVar4._pad_0x4_1 = iVar21;
  CVar4._pad_0x0_0 = in_stack_fffffe68;
  CVar4._pad_0x8_2 = (int)pSVar17;
  CVar4._pad_0xc_3 = iVar19;
  CVar4.Hue_degrees = fVar30;
  CVar4.Saturation = (double)(uintptr_t)((float)(int)(uintptr_t)(pcVar22));
  CVar4.Value = fVar23;
  CVar4.Alpha = (double)(uintptr_t)((float)(int)(uintptr_t)(pSVar18));
  MVar6.Data._pad_0x4_1 = (int)in_stack_fffffe8c.Data;
  MVar6.Data._pad_0x8_2 = in_stack_fffffe8c.Capacity;
  MVar6.Data._pad_0xc_3 = in_stack_fffffe8c.Length;
  MVar6.Data._pad_0x0_0 = (int)ppuVar25;
  MVar6.Data.Hue_degrees = fVar26;
  MVar6.Data.Saturation = fVar27;
  MVar6.Data.Value = fVar28;
  MVar6.Data.Alpha = fVar29;
  (*(uint32_t *)((char *)&(MVar6) + 32)) = uVar38;
  UIStaticText__RenderLabel
            (({ Vec2_L_int_G_ _t; *(uint64_t *)&_t = 0xffffffe700000000ul; _t; }),&local_84,CVar4,MVar6,pFVar31,TVar32,TVar33,VVar35,SVar37
            );
  if (local_84.Data != (char *)0x0) {
    port_op_delete(local_84.Data);
    local_84.Data = (char *)0x0;
  }
  if (local_a8.Data != (char *)0x0) {
    port_op_delete(local_a8.Data);
  }
  if (local_b4 != (void *)0x0) {
    port_op_delete(local_b4);
    local_b4 = (void *)0x0;
  }
  if (local_c0[0] != (void *)0x0) {
    port_op_delete(local_c0[0]);
    local_c0[0] = (void *)0x0;
  }
  if (local_58 != (uint32_t)0x0) {
    port_op_delete((void *)local_58);
    *(uint32_t *)&local_58 = (uint32_t)0x0;
  }
  if (pvStack_30 != (void *)0x0) {
    port_op_delete(pvStack_30);
    pvStack_30 = (void *)0x0;
  }
  if ((void *)(*(uint32_t*)&(local_3c)) != (void *)0x0) {
    port_op_delete((void *)(*(uint32_t*)&(local_3c)));
    (*(uint32_t*)&(local_3c)) = (uint32_t)(uintptr_t)((void *)0x0);
  }
  if (local_78.Data != (char *)0x0) {
    port_op_delete(local_78.Data);
    local_78.Data = (char *)0x0;
  }
  if (SStack_48.Data != (char *)0x0) {
    port_op_delete(SStack_48.Data);
    SStack_48.Data = (char *)0x0;
  }
  local_e0._pad_0x0_0 = (int)&vftable_5;
  if ((void *)local_e0._pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)local_e0._pad_0x4_1);
    local_e0._pad_0x4_1 = 0;
  }
  local_100._pad_0x0_0 = (int)&vftable_5;
  if ((void *)local_100._pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)local_100._pad_0x4_1);
    local_100._pad_0x4_1 = 0;
  }
  if (local_90.Data != (char *)0x0) {
    port_op_delete(local_90.Data);
    local_90.Data = (char *)0x0;
  }
  if (local_9c.Data != (char *)0x0) {
    port_op_delete(local_9c.Data);
    local_9c.Data = (char *)0x0;
  }
  if ((void *)(*(uint32_t*)&(auStack_68)) != (void *)0x0) {
    port_op_delete((void *)(*(uint32_t*)&(auStack_68)));
  }
  Graphics__TransformStack___TransformStack(&local_a);
  return;
}

//==== 00649930 RenderSimple_00649930 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall LaserModule__RenderSimple(struct util__Vec3_L_double_G_,bool,bool)const  */

void __thiscall
LaserModule__RenderSimple(LaserModule *this,Vec4_L_double_G_ param_1,bool param_2,bool param_3)

{
  undefined8 stack0xfffffffc;
  Vec4_L_double_G_ VVar1;
  Vec4_L_double_G_ VVar2;
  Quaternion_L_double_G_ QVar3;
  Vec4_L_double_G_ VVar4;
  bool bVar5;
  Vec3_L_double_G_ *pVVar6;
  float10 fVar7;
  Quaternion_L_double_G_ local_44;
  Vec3_L_double_G_ local_24;
  TransformStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((ReferenceController *)this[1]._pad_0x94_37 != (ReferenceController *)0x0) {
    bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)this[1]._pad_0x94_37)
    ;
    if (!bVar5) {
      this[1]._pad_0x90_36 = 0;
    }
  }
  GameModel__RenderSimple((GameModel *)this[1]._pad_0x90_36);
  if ((char)this[1]._pad_0x38_14 != '\0') {
    pVVar6 = WeaponCompartment__GetDefaultTargetDirection(&local_24);
    VVar1.W = (int)((ulonglong)pVVar6->Z >> 0x20);
    (*(uint32_t *)((char *)&(VVar1) + 0)) = (uint32_t)(uintptr_t)(*(undefined1 (*) [20])pVVar6);
    TurretSubModule__RenderExtruderModel
              ((TurretSubModule *)&(this->Turret).Data.field0_0x0,VVar1,param_1,false,true);
    Graphics__TransformStack__TransformStack(&local_9,Style__Default);
    fVar7 = (float10)(**(code **)(this->_pad_0x0_0 + 0x1b0))();
    local_24.Z = (double)(fVar7 / (float10)1000.0);
    VVar4.Z = SUB84(local_24.Z,0);
    VVar4.X = 0.0;
    VVar4.Y = 0.0;
    VVar4.W = (int)((ulonglong)local_24.Z >> 0x20);
    Graphics__Translate(VVar4);
    pVVar6 = WeaponCompartment__GetDefaultTargetDirection(&local_24);
    VVar2.W = (int)((ulonglong)pVVar6->Z >> 0x20);
    (*(uint32_t *)((char *)&(VVar2) + 0)) = (uint32_t)(uintptr_t)(*(undefined1 (*) [20])pVVar6);
    util__Quaternion_double___Quaternion_double(&local_44,VVar2,param_1);
    QVar3.Y = local_44.Y;
    QVar3.X = local_44.X;
    QVar3.Y = local_44.Y;
    QVar3.Z = local_44.Z;
    QVar3.Z = local_44.Z;
    QVar3.W = local_44.W;
    QVar3.W = local_44.W;
    (*(uint32_t *)((char *)&(QVar3.W) + 4)) = (*(uint32_t *)((char *)&(local_44.W) + 4));
    Graphics__Rotate(QVar3);
    if (param_2) {
      if ((ReferenceController *)this[1]._pad_0x7c_31 != (ReferenceController *)0x0) {
        bVar5 = util__ReferenceController__IsDataStillValid
                          ((ReferenceController *)this[1]._pad_0x7c_31);
        if (!bVar5) {
          this[1]._pad_0x78_30 = 0;
        }
      }
      GameModel__RenderSimple((GameModel *)this[1]._pad_0x78_30);
    }
    if ((ReferenceController *)this[1]._pad_0x84_33 != (ReferenceController *)0x0) {
      bVar5 = util__ReferenceController__IsDataStillValid
                        ((ReferenceController *)this[1]._pad_0x84_33);
      if (!bVar5) {
        this[1]._pad_0x80_32 = 0;
      }
    }
    GameModel__RenderSimple((GameModel *)this[1]._pad_0x80_32);
    if (param_3) {
      if ((ReferenceController *)this[1]._pad_0x8c_35 != (ReferenceController *)0x0) {
        bVar5 = util__ReferenceController__IsDataStillValid
                          ((ReferenceController *)this[1]._pad_0x8c_35);
        if (!bVar5) {
          this[1]._pad_0x88_34 = 0;
        }
      }
      GameModel__RenderSimple((GameModel *)this[1]._pad_0x88_34);
    }
    Graphics__TransformStack___TransformStack(&local_9);
    return;
  }
  if ((char)this[1]._pad_0x68_26 != '\0') {
    if (param_2) {
      if ((ReferenceController *)this[1]._pad_0x7c_31 != (ReferenceController *)0x0) {
        bVar5 = util__ReferenceController__IsDataStillValid
                          ((ReferenceController *)this[1]._pad_0x7c_31);
        if (!bVar5) {
          this[1]._pad_0x78_30 = 0;
        }
      }
      GameModel__RenderSimple((GameModel *)this[1]._pad_0x78_30);
    }
    if ((ReferenceController *)this[1]._pad_0x84_33 != (ReferenceController *)0x0) {
      bVar5 = util__ReferenceController__IsDataStillValid
                        ((ReferenceController *)this[1]._pad_0x84_33);
      if (!bVar5) {
        this[1]._pad_0x80_32 = 0;
      }
    }
    GameModel__RenderSimple((GameModel *)this[1]._pad_0x80_32);
    if (param_3) {
      if ((ReferenceController *)this[1]._pad_0x8c_35 != (ReferenceController *)0x0) {
        bVar5 = util__ReferenceController__IsDataStillValid
                          ((ReferenceController *)this[1]._pad_0x8c_35);
        if (!bVar5) {
          this[1]._pad_0x88_34 = 0;
        }
      }
      GameModel__RenderSimple((GameModel *)this[1]._pad_0x88_34);
    }
  }
  return;
}

//==== 00649ba0 SetXAxis ====


/* public: struct LineGraph__Args & __thiscall LineGraph__Args__SetXAxis(class util__Str_L_char_G_ const
   &) */

Args * __thiscall LineGraph__Args__SetXAxis(Args *this,Str_L_char_G_ *param_1)

{
  Str_L_char_G_ SStack_10;
  
  util__Str_char___Str_char(&SStack_10,param_1);
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  util__Str_char___operator__o8((Str_L_char_G_ *)(this + 0x1c),&SStack_10);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return this;
}





//==== 00649c00 SetXAxisUnits ====


/* public: struct LineGraph__Args & __thiscall LineGraph__Args__SetXAxisUnits(class util__Str_L_char_G_
   const &) */

Args * __thiscall LineGraph__Args__SetXAxisUnits(Args *this,Str_L_char_G_ *param_1)

{
  Str_L_char_G_ SStack_10;
  
  util__Str_char___Str_char(&SStack_10,param_1);
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  util__Str_char___operator__o8((Str_L_char_G_ *)(this + 0x30),&SStack_10);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return this;
}





//==== 00649c60 SetYAxis ====


/* public: struct LineGraph__Args & __thiscall LineGraph__Args__SetYAxis(class util__Str_L_char_G_ const
   &) */

Args * __thiscall LineGraph__Args__SetYAxis(Args *this,Str_L_char_G_ *param_1)

{
  Str_L_char_G_ SStack_10;
  
  util__Str_char___Str_char(&SStack_10,param_1);
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  util__Str_char___operator__o8((Str_L_char_G_ *)(this + 0x44),&SStack_10);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return this;
}





//==== 00649cc0 SetYAxisUnits ====


/* public: struct LineGraph__Args & __thiscall LineGraph__Args__SetYAxisUnits(class util__Str_L_char_G_
   const &) */

Args * __thiscall LineGraph__Args__SetYAxisUnits(Args *this,Str_L_char_G_ *param_1)

{
  Str_L_char_G_ SStack_10;
  
  util__Str_char___Str_char(&SStack_10,param_1);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  util__Str_char___operator__o8((Str_L_char_G_ *)(this + 0x58),&SStack_10);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return this;
}





//==== 00649d20 StaticFactory_00649d20 ====

/* public: static class util__Reflectable * __cdecl
   FixedLaserMountSubModule__ReflectionInfoStruct_struct_FixedLaserMountSubModule___StaticFactory(void) */

Reflectable * __cdecl
FixedLaserMountSubModule__ReflectionInfoStruct_struct_FixedLaserMountSubModule___StaticFactory__o2(void)

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
    pRVar1->_pad_0x0_0 = (int)&vftable_304;
  }
  return (Reflectable *)0x0;
}

//==== 00649d60 StaticFactory_00649d60 ====

/* public: static class util__Reflectable * __cdecl ArcLampPumpSubModule__ReflectionInfoStruct_L_class_ArcLampPumpSubModule_G___StaticFactory(void) */

Reflectable * __cdecl
ArcLampPumpSubModule__ReflectionInfoStruct_class_ArcLampPumpSubModule___StaticFactory(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x98));
  if (pRVar1 != (Reflectable *)0x0) {
    memset(pRVar1,0,0x98);
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_302;
    pRVar1[1]._pad_0x0_0 = 0;
    pRVar1[1].Name.Data = (char *)0x0;
    pRVar1[1].Name.Capacity = 0;
    pRVar1[1].Name.Length = 0;
    pRVar1[1]._pad_0x0_0 = (int)&vftable_2;
    pRVar1[1].Name.Data = (char *)0x0;
    pRVar1[1].Name.Capacity = 0;
    pRVar1[1].Name.Length = 0;
    pRVar1[2]._pad_0x0_0 = 0;
    pRVar1[2].Name.Data = (char *)0x0;
    *(undefined1 *)&pRVar1[2].Name.Capacity = 0;
    pRVar1[3]._pad_0x0_0 = 0;
    pRVar1[3].Name.Data = (char *)0x0;
    *(undefined1 *)&pRVar1[3].Name.Capacity = 0;
    pRVar1[7].Name.Capacity = (int)&vftable_63;
    pRVar1[7].Name.Length = 0;
    pRVar1[8]._pad_0x0_0 = 0;
    pRVar1[8].Name.Data = (char *)0x0;
  }
  return (Reflectable *)0x0;
}

//==== 00649d90 StaticFactory_00649d90 ====

/* public: static class util__Reflectable * __cdecl
   FrequencyDoublerSubModule__ReflectionInfoStruct_class_FrequencyDoublerSubModule___StaticFactory(void) */

Reflectable * __cdecl
FrequencyDoublerSubModule__ReflectionInfoStruct_class_FrequencyDoublerSubModule___StaticFactory__o2(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x70));
  if (pRVar1 != (Reflectable *)0x0) {
    memset(pRVar1,0,0x70);
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_300;
    pRVar1[1].Name.Data = (char *)0x0;
    pRVar1[1].Name.Capacity = 0;
    pRVar1[1].Name.Length = 0;
    pRVar1[1]._pad_0x0_0 = (int)&vftable_298;
  }
  return (Reflectable *)0x0;
}

//==== 00649df0 StaticFactory_00649df0 ====

/* public: static class util__Reflectable * __cdecl LaserModule__ReflectionInfoStruct_L_class_LaserModule_G___StaticFactory(void) */

Reflectable * __cdecl LaserModule__ReflectionInfoStruct_class_LaserModule___StaticFactory(void)

{
  Module *this;
  
  this = (Module *)(uintptr_t)(port_op_new(0x528));
  if (this != (Module *)0x0) {
    memset(this,0,0x528);
    Module__Module(this);
    *(undefined1 *)&this[1].GetTotalPowerUsage_W_MemoizedValue.Data = 0;
    *(undefined8 *)&this[1].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    *(undefined4 *)&this[1].GetTotalPowerUsage_W_MemoizedValue.IsValidData = 0;
  *(undefined4 *)((char *)&this[1].GetTotalPowerUsage_W_MemoizedValue + 0xc) = 0;
    this[1].Models._pad_0x0_0 = 0;
    this[1].Models.Data = (SharedPtr_L_GameModel_G_ *)0x0;
    *(undefined ***)&this[1].GetTotalPowerUsage_W_MemoizedValue.IsValidData =
         &vftable_166;
  *(undefined4 *)((char *)&this[1].GetTotalPowerUsage_W_MemoizedValue + 0xc) = 0;
    this[1].Models._pad_0x0_0 = 0;
    this[1].Models.Data = (SharedPtr_L_GameModel_G_ *)0x0;
    this[1].Models.Size = 0;
    this[1].Models.Capacity = 0;
    this[1].UsesCustomName = false;
    this[2]._pad_0x0_0 = 0;
    this[2]._pad_0x4_1 = 0;
    *(undefined1 *)&this[2]._pad_0x8_2 = 0;
    this->_pad_0x0_0 = (int)&vftable_for_EditorReflectable__31;
    *(undefined4 *)&(this->GetTotalPowerUsage_W_MemoizedValue).field_0xc = (undefined4)(uintptr_t)vftable_for_util__RTTIBaseClass__30;
    this[2].ModuleMemoizationHandlerInstance.ResetFunctions.Data = (pmf_27707b45 *)0x0;
    this[2].ModuleMemoizationHandlerInstance.ResetFunctions.Size = 0;
    this[2].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    *(undefined4 *)&this[2].ModuleMemoizationHandlerInstance = 0;
    this[2].ModuleMemoizationHandlerInstance.ResetFunctions.Data = (undefined **)((pmf_27707b45 *)&vftable_109);
    this[2].ModuleMemoizationHandlerInstance.ResetFunctions.Size = 0;
    this[2].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    *(undefined4 *)&this[2].ModuleMemoizationHandlerInstance = 0;
    this[2].GetTotalPowerUsage_W_MemoizedValue.Data = 0.0;
    this[2].GetTotalPowerUsage_W_MemoizedValue.IsValidData = false;
    this[2].Models._pad_0x0_0 = 0;
    this[2].Models.Data = (SharedPtr_L_GameModel_G_ *)0x0;
    *(undefined1 *)&this[2].Models.Size = 0;
    this[2].UsesCustomName = false;
    this[2].IsUserCreated = false;
  *(undefined6 *)((char *)&this[2] + 0x4a) = 0;
    *(undefined1 *)&this[3]._pad_0x0_0 = 0;
    this[3]._pad_0x8_2 = 0;
    this[3]._pad_0xc_3 = 0;
    *(undefined1 *)&this[3]._pad_0x10_4 = 0;
    this[3].ModuleMemoizationHandlerInstance.ResetFunctions.Data = (pmf_27707b45 *)0x0;
    this[3].ModuleMemoizationHandlerInstance.ResetFunctions.Size = 0;
    *(undefined1 *)&this[3].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    this[3].GetTotalPowerUsage_W_MemoizedValue.Data = 0.0;
    this[3].GetTotalPowerUsage_W_MemoizedValue.IsValidData = false;
    ArcLampPumpSubModule__ArcLampPumpSubModule((ArcLampPumpSubModule *)&this[3].Models);
    this[5].Models.Capacity = 0;
    this[5].UsesCustomName = false;
    this[5].IsUserCreated = false;
  *(undefined2 *)((char *)&this[5] + 0x4a) = 0;
  *(undefined4 *)((char *)&this[5] + 0x4c) = 0;
    this[5].Models.Size = (int)&vftable_296;
    *(undefined4 *)((int)&this[6].GetTotalPowerUsage_W_MemoizedValue.Data + 4) = 0;
    *(undefined4 *)&this[6].GetTotalPowerUsage_W_MemoizedValue.IsValidData = 0;
  *(undefined4 *)((char *)&this[6].GetTotalPowerUsage_W_MemoizedValue + 0xc) = 0;
    *(undefined ***)&this[6].GetTotalPowerUsage_W_MemoizedValue.Data = &vftable_296;
    TurbopumpSubModule__TurbopumpSubModule((TurbopumpSubModule *)&this[7]._pad_0x10_4);
    this[8].ModuleMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 = 0;
    this[8].ModuleMemoizationHandlerInstance.ResetFunctions.Data = (pmf_27707b45 *)0x0;
    this[8].ModuleMemoizationHandlerInstance.ResetFunctions.Size = 0;
    this[8]._pad_0x10_4 = (int)&vftable_300;
    *(undefined4 *)&this[8].ModuleMemoizationHandlerInstance = 0;
    *(undefined4 *)&this[8].GetTotalPowerUsage_W_MemoizedValue.Data = 0;
    *(undefined4 *)((int)&this[8].GetTotalPowerUsage_W_MemoizedValue.Data + 4) = 0;
    this[8].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity =
         (int)&vftable_298;
    this[9].GetTotalPowerUsage_W_MemoizedValue.IsValidData = false;
    this[9].Models.Data = (SharedPtr_L_GameModel_G_ *)0x0;
    this[9].Models.Size = 0;
    this[9].Models.Capacity = 0;
    this[9].Models._pad_0x0_0 = (int)&vftable_300;
  *(undefined4 *)((char *)&this[9] + 0x4c) = 0;
    this[10]._pad_0x0_0 = 0;
    this[10]._pad_0x4_1 = 0;
    *(undefined ***)&this[9].UsesCustomName = &vftable_298;
    *(undefined1 *)&this[0xb]._pad_0x8_2 = 0;
    this[0xb].ModuleMemoizationHandlerInstance.ResetFunctions.Size = 0;
    this[0xb].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    *(undefined4 *)&this[0xb].ModuleMemoizationHandlerInstance = 0;
    this[0xb].ModuleMemoizationHandlerInstance.ResetFunctions.Data =
         (pmf_27707b45 *)&vftable_296;
    TurretSubModule__TurretSubModule((TurretSubModule *)&this[0xc]._pad_0x8_2);
    this[0xc]._pad_0x8_2 = (int)&vftable_239;
    *(undefined1 *)&this[0xf].ModuleMemoizationHandlerInstance.ResetFunctions.Data = 0;
    this[0xf].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    *(undefined4 *)&this[0xf].ModuleMemoizationHandlerInstance = 0;
    *(undefined4 *)&this[0xf].GetTotalPowerUsage_W_MemoizedValue.Data = 0;
    *(undefined4 *)((int)&this[0xf].GetTotalPowerUsage_W_MemoizedValue.Data + 4) = 0;
    *(undefined4 *)&this[0xf].GetTotalPowerUsage_W_MemoizedValue.IsValidData = 0;
    *(undefined4 *)&((*(undefined4 *)((char *)&(this[0xf].GetTotalPowerUsage_W_MemoizedValue) + 0xc))) = 0;
    this[0xf].Models._pad_0x0_0 = 0;
    this[0xf].Models.Data = (SharedPtr_L_GameModel_G_ *)0x0;
    this[0xf].Models.Size = 0;
    this[0xf].Models.Capacity = 0;
    *(undefined4 *)&this[0xf].ModuleMemoizationHandlerInstance = 0;
    *(undefined4 *)&this[0xf].GetTotalPowerUsage_W_MemoizedValue.Data = 0;
    *(undefined4 *)((int)&this[0xf].GetTotalPowerUsage_W_MemoizedValue.Data + 4) = 0;
    this[0xf].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity =
         (int)&vftable_304;
    this[0xf].UsesCustomName = false;
    this[0x10]._pad_0x8_2 = 0;
    this[0x10]._pad_0xc_3 = 0;
    this[0x10]._pad_0x10_4 = 0;
    this[0x10].ModuleMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 = 0;
    this[0x10].ModuleMemoizationHandlerInstance.ResetFunctions.Data = (pmf_27707b45 *)0x0;
    this[0x10].ModuleMemoizationHandlerInstance.ResetFunctions.Size = 0;
    this[0x10].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    *(undefined4 *)&this[0x10].ModuleMemoizationHandlerInstance = 0;
    return (Reflectable *)this;
  }
  return (Reflectable *)0x0;
}

//==== 00649e20 StaticFactory_00649e20 ====

/* public: static class util__Reflectable * __cdecl LensSubModule__ReflectionInfoStruct_L_class_LensSubModule_G___StaticFactory(void) */

Reflectable * __cdecl LensSubModule__ReflectionInfoStruct_class_LensSubModule___StaticFactory(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x38));
  if (pRVar1 != (Reflectable *)0x0) {
    memset(pRVar1,0,0x38);
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_296;
  }
  return (Reflectable *)0x0;
}

//==== 00649e70 StaticFactory_00649e70 ====

/* public: static class util__Reflectable * __cdecl
   NonlinearOpticSubModule__ReflectionInfoStruct_class_NonlinearOpticSubModule___StaticFactory(void)
    */

Reflectable * __cdecl
NonlinearOpticSubModule__ReflectionInfoStruct_class_NonlinearOpticSubModule___StaticFactory__o2(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x40));
  if (pRVar1 != (Reflectable *)0x0) {
    memset(pRVar1,0,0x40);
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_298;
  }
  return (Reflectable *)0x0;
}

//==== 00649ec0 StaticGetMember_00649ec0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class util__Maybe_L_structutil__ClassMember_G_ const __cdecl
   FixedLaserMountSubModule__ReflectionInfoStruct_struct_FixedLaserMountSubModule___StaticGetMember(class util__Str_L_char_G_ const &) */

Str_L_char_G_ * __cdecl
FixedLaserMountSubModule__ReflectionInfoStruct_struct_FixedLaserMountSubModule___StaticGetMember
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
        cde_l2_f798d2c4__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_f798d2c4__thread_safe_static_guard_0__),
      cde_l2_f798d2c4__thread_safe_static_guard_0__ == -1)) {
     cde_l2_f06dc066_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_f798d2c4__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_f06dc066_Count) {
    piVar7 = &DAT_00976d48;
    do {
      if ((*(int *)(iStack_c + 4) <
            cde_l2_226a0649__thread_safe_static_guard_0__) &&
         (_Init_thread_header(& cde_l2_226a0649__thread_safe_static_guard_0__),
          cde_l2_226a0649__thread_safe_static_guard_0__ == -1)) {
        util__Str_char___Str_char
                  ((Str_L_char_G_ *)
                   & cde_l2_e2b5ccda_StaticMembers,"DummyValue_DO_NOT_USE");
        DAT_00976d44 = 0;
        DAT_00976d48 = 0;
        DAT_00976d4c = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976d50,"Unused");
        _DAT_00976d5c = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976d60,"ArmorComposition");
        _DAT_00976d6c = 8;
        _DAT_00976d70 = 0x10;
        _DAT_00976d74 = 4;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976d78,"Material");
        _DAT_00976d84 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976d88,"ArmorThickness_m");
        _DAT_00976d94 = 4;
        _DAT_00976d98 = 0x18;
        _DAT_00976d9c = 8;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976da0,"double");
        _DAT_00976dac = 0;
        atexit( private__static_struct_util__ClassMember_const___cdecl_FixedLaserMountSubModule__ReflectionInfoStruct_struct_FixedLaserMountSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
        _Init_thread_footer(& cde_l2_226a0649__thread_safe_static_guard_0__);
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
LAB_00649f92:
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
          if (cVar3 == '\0') goto LAB_00649f92;
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
    } while (iVar6 <  cde_l2_f06dc066_Count);
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





//==== 0064a1b0 StaticGetMember_0064a1b0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class util__Maybe_L_structutil__ClassMember_G_ const __cdecl
   LensSubModule__ReflectionInfoStruct_class_LensSubModule___StaticGetMember(class util__Str_L_char_G_
   const &) */

Str_L_char_G_ * __cdecl
LensSubModule__ReflectionInfoStruct_class_LensSubModule___StaticGetMember__o2(Str_L_char_G_ *param_1)

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
        cde_l2_c8e2e125__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_c8e2e125__thread_safe_static_guard_0__),
      cde_l2_c8e2e125__thread_safe_static_guard_0__ == -1)) {
     cde_l2_408639b1_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_c8e2e125__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_408639b1_Count) {
    piVar7 = &DAT_00977300;
    do {
      if ((*(int *)(iStack_c + 4) <
            cde_l2_cdd06619__thread_safe_static_guard_0__) &&
         (_Init_thread_header(& cde_l2_cdd06619__thread_safe_static_guard_0__),
          cde_l2_cdd06619__thread_safe_static_guard_0__ == -1)) {
        util__Str_char___Str_char
                  ((Str_L_char_G_ *)
                   & cde_l2_2abed371_StaticMembers,"DummyValue_DO_NOT_USE");
        DAT_009772fc = 0;
        DAT_00977300 = 0;
        DAT_00977304 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977308,"Unused");
        _DAT_00977314 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977318,"Composition");
        _DAT_00977324 = 8;
        _DAT_00977328 = 0x10;
        _DAT_0097732c = 4;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977330,"Material");
        _DAT_0097733c = 0;
        atexit( private__static_struct_util__ClassMember_const___cdecl_LensSubModule__ReflectionInfoStruct_class_LensSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
        _Init_thread_footer(& cde_l2_cdd06619__thread_safe_static_guard_0__);
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
LAB_0064a282:
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
          if (cVar3 == '\0') goto LAB_0064a282;
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
    } while (iVar6 <  cde_l2_408639b1_Count);
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





//==== 0064a460 StaticGetMember_0064a460 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class util__Maybe_L_structutil__ClassMember_G_ const __cdecl
   NonlinearOpticSubModule__ReflectionInfoStruct_class_NonlinearOpticSubModule___StaticGetMember(class util__Str_L_char_G_ const &) */

Str_L_char_G_ * __cdecl
NonlinearOpticSubModule__ReflectionInfoStruct_class_NonlinearOpticSubModule___StaticGetMember
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
        cde_l2_7e467693__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_7e467693__thread_safe_static_guard_0__),
      cde_l2_7e467693__thread_safe_static_guard_0__ == -1)) {
     cde_l2_e8a821bf_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_7e467693__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_e8a821bf_Count) {
    piVar7 = &DAT_00977250;
    do {
      if ((*(int *)(iStack_c + 4) <
            cde_l2_7c649a02__thread_safe_static_guard_0__) &&
         (_Init_thread_header(& cde_l2_7c649a02__thread_safe_static_guard_0__),
          cde_l2_7c649a02__thread_safe_static_guard_0__ == -1)) {
        util__Str_char___Str_char
                  ((Str_L_char_G_ *)
                   & cde_l2_5286f4be_StaticMembers,"DummyValue_DO_NOT_USE");
        DAT_0097724c = 0;
        DAT_00977250 = 0;
        DAT_00977254 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977258,"Unused");
        _DAT_00977264 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977268,"Composition");
        _DAT_00977274 = 8;
        _DAT_00977278 = 0x10;
        _DAT_0097727c = 4;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977280,"Material");
        _DAT_0097728c = 0;
        atexit( private__static_struct_util__ClassMember_const___cdecl_NonlinearOpticSubModule__ReflectionInfoStruct_class_NonlinearOpticSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
        _Init_thread_footer(& cde_l2_7c649a02__thread_safe_static_guard_0__);
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
LAB_0064a532:
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
          if (cVar3 == '\0') goto LAB_0064a532;
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
    } while (iVar6 <  cde_l2_e8a821bf_Count);
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





//==== 0064a710 StaticGetMemberByIndex_0064a710 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   ArcLampPumpSubModule__ReflectionInfoStruct_class_ArcLampPumpSubModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
ArcLampPumpSubModule__ReflectionInfoStruct_class_ArcLampPumpSubModule___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_8f5ae1ea__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_8f5ae1ea__thread_safe_static_guard_0__);
    if ( cde_l2_8f5ae1ea__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_618bd102_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00976f34 = 0;
      _DAT_00976f38 = 0;
      _DAT_00976f3c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976f40,"Unused");
      _DAT_00976f4c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976f50,"GasComposition");
      _DAT_00976f5c = 8;
      _DAT_00976f60 = 0x40;
      _DAT_00976f64 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976f68,"Material");
      _DAT_00976f74 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976f78,"EnvelopeComposition");
      _DAT_00976f84 = 8;
      _DAT_00976f88 = 0x44;
      _DAT_00976f8c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976f90,"Material");
      _DAT_00976f9c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976fa0,"PowerSupplied_W");
      _DAT_00976fac = 4;
      _DAT_00976fb0 = 0x48;
      _DAT_00976fb4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976fb8,"double");
      _DAT_00976fc4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976fc8,"Radius_m");
      _DAT_00976fd4 = 4;
      _DAT_00976fd8 = 0x50;
      _DAT_00976fdc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976fe0,"double");
      _DAT_00976fec = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976ff0,"CavityWallComposition");
      _DAT_00976ffc = 8;
      _DAT_00977000 = 0x58;
      _DAT_00977004 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977008,"Material");
      _DAT_00977014 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977018,"CavityCoolantComposition");
      _DAT_00977024 = 8;
      _DAT_00977028 = 0x5c;
      _DAT_0097702c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977030,"Material");
      _DAT_0097703c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977040,"CavitySemimajorAxis_m");
      _DAT_0097704c = 4;
      _DAT_00977050 = 0x60;
      _DAT_00977054 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977058,"double");
      _DAT_00977064 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977068,"CavitySemiminorAxis_m");
      _DAT_00977074 = 4;
      _DAT_00977078 = 0x68;
      _DAT_0097707c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977080,"double");
      _DAT_0097708c = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_ArcLampPumpSubModule__ReflectionInfoStruct_class_ArcLampPumpSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_8f5ae1ea__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_618bd102_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_00976f34 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_00976f38 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_00976f3c + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_00976f40 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_00976f4c)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_00976f4d)[iVar1];
  return __return_storage_ptr__;
}





//==== 0064aa20 StaticGetMemberByIndex_0064aa20 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   FrequencyDoublerSubModule__ReflectionInfoStruct_class_FrequencyDoublerSubModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
FrequencyDoublerSubModule__ReflectionInfoStruct_class_FrequencyDoublerSubModule___StaticGetMemberByIndex(ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_98a07045__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_98a07045__thread_safe_static_guard_0__);
    if ( cde_l2_98a07045__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_e828d089_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0097714c = 0;
      _DAT_00977150 = 0;
      _DAT_00977154 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977158,"Unused");
      _DAT_00977164 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977168,"MaterialClass__NonlinearOptic");
      _DAT_00977174 = 10;
      _DAT_00977178 = 0x10;
      _DAT_0097717c = 0x38;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977180,"LensSubModule");
      _DAT_0097718c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977190,"OpticLength_m");
      _DAT_0097719c = 4;
      _DAT_009771a0 = 0x50;
      _DAT_009771a4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009771a8,"double");
      _DAT_009771b4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009771b8,"OpticRadius_m");
      _DAT_009771c4 = 4;
      _DAT_009771c8 = 0x58;
      _DAT_009771cc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009771d0,"double");
      _DAT_009771dc = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_FrequencyDoublerSubModule__ReflectionInfoStruct_class_FrequencyDoublerSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_98a07045__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_e828d089_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_0097714c + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_00977150 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_00977154 + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_00977158 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_00977164)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_00977165)[iVar1];
  return __return_storage_ptr__;
}





//==== 0064abf0 StaticGetMemberByIndex_0064abf0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl LaserModule__ReflectionInfoStruct_class_LaserModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
LaserModule__ReflectionInfoStruct_class_LaserModule___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_39ee57ac__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_39ee57ac__thread_safe_static_guard_0__);
    if ( cde_l2_39ee57ac__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_03c01c3f_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0097694c = 0;
      _DAT_00976950 = 0;
      _DAT_00976954 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976958,"Unused");
      _DAT_00976964 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976968,"SteamWorkshopID");
      _DAT_00976974 = 6;
      _DAT_00976978 = 0x10;
      _DAT_0097697c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976980,"AStr");
      _DAT_0097698c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976990,"Description");
      _DAT_0097699c = 6;
      _DAT_009769a0 = 0x20;
      _DAT_009769a4 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009769a8,"AStr");
      _DAT_009769b4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009769b8,"UsesCustomName");
      _DAT_009769c4 = 1;
      _DAT_009769c8 = 0x68;
      _DAT_009769cc = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009769d0,"bool");
      _DAT_009769dc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009769e0,"ArcLamp");
      _DAT_009769ec = 10;
      _DAT_009769f0 = 0x128;
      _DAT_009769f4 = 0x98;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009769f8,"ArcLampPumpSubModule");
      _DAT_00976a04 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976a08,"GainMedium");
      _DAT_00976a14 = 8;
      _DAT_00976a18 = 0x1c0;
      _DAT_00976a1c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976a20,"Material");
      _DAT_00976a2c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976a30,"OpticalNodes");
      _DAT_00976a3c = 2;
      _DAT_00976a40 = 0x1c4;
      _DAT_00976a44 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976a48,"int");
      _DAT_00976a54 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976a58,"LasingRodRadius_m");
      _DAT_00976a64 = 4;
      _DAT_00976a68 = 0x1c8;
      _DAT_00976a6c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976a70,"double");
      _DAT_00976a7c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976a80,"Mirror");
      _DAT_00976a8c = 10;
      _DAT_00976a90 = 0x1d0;
      _DAT_00976a94 = 0x38;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976a98,"LensSubModule");
      _DAT_00976aa4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976aa8,"OutputCoupler");
      _DAT_00976ab4 = 10;
      _DAT_00976ab8 = 0x208;
      _DAT_00976abc = 0x38;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976ac0,"LensSubModule");
      _DAT_00976acc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976ad0,"CoolantTurbopump");
      _DAT_00976adc = 10;
      _DAT_00976ae0 = 0x240;
      _DAT_00976ae4 = 0x48;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976ae8,"TurbopumpSubModule");
      _DAT_00976af4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976af8,"CoolantInletTemperature_K");
      _DAT_00976b04 = 4;
      _DAT_00976b08 = 0x288;
      _DAT_00976b0c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976b10,"double");
      _DAT_00976b1c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976b20,"FrequencyDoubler");
      _DAT_00976b2c = 10;
      _DAT_00976b30 = 0x290;
      _DAT_00976b34 = 0x70;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976b38,"FrequencyDoublerSubModule");
      _DAT_00976b44 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976b48,"SecondFrequencyDoubler");
      _DAT_00976b54 = 10;
      _DAT_00976b58 = 0x308;
      _DAT_00976b5c = 0x70;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976b60,"FrequencyDoublerSubModule");
      _DAT_00976b6c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976b70,"ApertureRadius_m");
      _DAT_00976b7c = 4;
      _DAT_00976b80 = 0x380;
      _DAT_00976b84 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976b88,"double");
      _DAT_00976b94 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976b98,"FocusingMirror");
      _DAT_00976ba4 = 10;
      _DAT_00976ba8 = 0x388;
      _DAT_00976bac = 0x38;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976bb0,"LensSubModule");
      _DAT_00976bbc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976bc0,"Unmounted");
      _DAT_00976bcc = 1;
      _DAT_00976bd0 = 0x3c0;
      _DAT_00976bd4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976bd8,"bool");
      _DAT_00976be4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976be8,"Turret");
      _DAT_00976bf4 = 10;
      _DAT_00976bf8 = 0x3c8;
      _DAT_00976bfc = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976c00,"ExtrudableSoloTurretSubModule");
      _DAT_00976c0c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976c10,"FixedMount");
      _DAT_00976c1c = 10;
      _DAT_00976c20 = 0x4d0;
      _DAT_00976c24 = 0x28;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976c28,"FixedLaserMountSubModule");
      _DAT_00976c34 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976c38,"EngagementRange_km");
      _DAT_00976c44 = 4;
      _DAT_00976c48 = 0x500;
      _DAT_00976c4c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976c50,"double");
      _DAT_00976c5c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976c60,"TargetsShips");
      _DAT_00976c6c = 1;
      _DAT_00976c70 = 0xb0;
      _DAT_00976c74 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976c78,"bool");
      _DAT_00976c84 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976c88,"TargetsShots");
      _DAT_00976c94 = 1;
      _DAT_00976c98 = 0xb1;
      _DAT_00976c9c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976ca0,"bool");
      _DAT_00976cac = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_LaserModule__ReflectionInfoStruct_class_LaserModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_39ee57ac__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_03c01c3f_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_0097694c + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_00976950 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_00976954 + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_00976958 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_00976964)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_00976965)[iVar1];
  return __return_storage_ptr__;
}





//==== 0064b280 StaticGetMemberCount_0064b280 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl FixedLaserMountSubModule__ReflectionInfoStruct_struct_FixedLaserMountSubModule___StaticGetMemberCount(void) */

int __cdecl
FixedLaserMountSubModule__ReflectionInfoStruct_struct_FixedLaserMountSubModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_b3593785__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_b3593785__thread_safe_static_guard_0__);
    if ( cde_l2_b3593785__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_680fd39d_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00976cc4 = 0;
      _DAT_00976cc8 = 0;
      _DAT_00976ccc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976cd0,"Unused");
      _DAT_00976cdc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976ce0,"ArmorComposition");
      _DAT_00976cec = 8;
      _DAT_00976cf0 = 0x10;
      _DAT_00976cf4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976cf8,"Material");
      _DAT_00976d04 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976d08,"ArmorThickness_m");
      _DAT_00976d14 = 4;
      _DAT_00976d18 = 0x18;
      _DAT_00976d1c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976d20,"double");
      _DAT_00976d2c = 0;
      atexit( private__static_int_const___cdecl_FixedLaserMountSubModule__ReflectionInfoStruct_struct_FixedLaserMountSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_b3593785__thread_safe_static_guard_0__);
    }
  }
  return 3;
}





//==== 0064b3b0 StaticGetMemberCount_0064b3b0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl ArcLampPumpSubModule__ReflectionInfoStruct_class_ArcLampPumpSubModule___StaticGetMemberCount(void) */

int __cdecl
ArcLampPumpSubModule__ReflectionInfoStruct_class_ArcLampPumpSubModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_ab712f53__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_ab712f53__thread_safe_static_guard_0__);
    if ( cde_l2_ab712f53__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_7e3afd2e_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00976dc4 = 0;
      _DAT_00976dc8 = 0;
      _DAT_00976dcc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976dd0,"Unused");
      _DAT_00976ddc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976de0,"GasComposition");
      _DAT_00976dec = 8;
      _DAT_00976df0 = 0x40;
      _DAT_00976df4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976df8,"Material");
      _DAT_00976e04 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976e08,"EnvelopeComposition");
      _DAT_00976e14 = 8;
      _DAT_00976e18 = 0x44;
      _DAT_00976e1c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976e20,"Material");
      _DAT_00976e2c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976e30,"PowerSupplied_W");
      _DAT_00976e3c = 4;
      _DAT_00976e40 = 0x48;
      _DAT_00976e44 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976e48,"double");
      _DAT_00976e54 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976e58,"Radius_m");
      _DAT_00976e64 = 4;
      _DAT_00976e68 = 0x50;
      _DAT_00976e6c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976e70,"double");
      _DAT_00976e7c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976e80,"CavityWallComposition");
      _DAT_00976e8c = 8;
      _DAT_00976e90 = 0x58;
      _DAT_00976e94 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976e98,"Material");
      _DAT_00976ea4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976ea8,"CavityCoolantComposition");
      _DAT_00976eb4 = 8;
      _DAT_00976eb8 = 0x5c;
      _DAT_00976ebc = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976ec0,"Material");
      _DAT_00976ecc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976ed0,"CavitySemimajorAxis_m");
      _DAT_00976edc = 4;
      _DAT_00976ee0 = 0x60;
      _DAT_00976ee4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976ee8,"double");
      _DAT_00976ef4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976ef8,"CavitySemiminorAxis_m");
      _DAT_00976f04 = 4;
      _DAT_00976f08 = 0x68;
      _DAT_00976f0c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976f10,"double");
      _DAT_00976f1c = 0;
      atexit( private__static_int_const___cdecl_ArcLampPumpSubModule__ReflectionInfoStruct_class_ArcLampPumpSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_ab712f53__thread_safe_static_guard_0__);
    }
  }
  return 9;
}





//==== 0064b680 StaticGetMemberCount_0064b680 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl FrequencyDoublerSubModule__ReflectionInfoStruct_class_FrequencyDoublerSubModule___StaticGetMemberCount(void) */

int __cdecl
FrequencyDoublerSubModule__ReflectionInfoStruct_class_FrequencyDoublerSubModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_1bf8558e__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_1bf8558e__thread_safe_static_guard_0__);
    if ( cde_l2_1bf8558e__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_b853daad_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_009770a4 = 0;
      _DAT_009770a8 = 0;
      _DAT_009770ac = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009770b0,"Unused");
      _DAT_009770bc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009770c0,"MaterialClass__NonlinearOptic");
      _DAT_009770cc = 10;
      _DAT_009770d0 = 0x10;
      _DAT_009770d4 = 0x38;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009770d8,"LensSubModule");
      _DAT_009770e4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009770e8,"OpticLength_m");
      _DAT_009770f4 = 4;
      _DAT_009770f8 = 0x50;
      _DAT_009770fc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977100,"double");
      _DAT_0097710c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977110,"OpticRadius_m");
      _DAT_0097711c = 4;
      _DAT_00977120 = 0x58;
      _DAT_00977124 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977128,"double");
      _DAT_00977134 = 0;
      atexit( private__static_int_const___cdecl_FrequencyDoublerSubModule__ReflectionInfoStruct_class_FrequencyDoublerSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_1bf8558e__thread_safe_static_guard_0__);
    }
  }
  return 4;
}





//==== 0064b7f0 StaticGetMemberCount_0064b7f0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl LaserModule__ReflectionInfoStruct_class_LaserModule___StaticGetMemberCount(void) */

int __cdecl LaserModule__ReflectionInfoStruct_class_LaserModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_1bd96316__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_1bd96316__thread_safe_static_guard_0__);
    if ( cde_l2_1bd96316__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_c46627d7_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_009765d4 = 0;
      _DAT_009765d8 = 0;
      _DAT_009765dc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009765e0,"Unused");
      _DAT_009765ec = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009765f0,"SteamWorkshopID");
      _DAT_009765fc = 6;
      _DAT_00976600 = 0x10;
      _DAT_00976604 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976608,"AStr");
      _DAT_00976614 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976618,"Description");
      _DAT_00976624 = 6;
      _DAT_00976628 = 0x20;
      _DAT_0097662c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976630,"AStr");
      _DAT_0097663c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976640,"UsesCustomName");
      _DAT_0097664c = 1;
      _DAT_00976650 = 0x68;
      _DAT_00976654 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976658,"bool");
      _DAT_00976664 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976668,"ArcLamp");
      _DAT_00976674 = 10;
      _DAT_00976678 = 0x128;
      _DAT_0097667c = 0x98;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976680,"ArcLampPumpSubModule");
      _DAT_0097668c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976690,"GainMedium");
      _DAT_0097669c = 8;
      _DAT_009766a0 = 0x1c0;
      _DAT_009766a4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009766a8,"Material");
      _DAT_009766b4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009766b8,"OpticalNodes");
      _DAT_009766c4 = 2;
      _DAT_009766c8 = 0x1c4;
      _DAT_009766cc = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009766d0,"int");
      _DAT_009766dc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009766e0,"LasingRodRadius_m");
      _DAT_009766ec = 4;
      _DAT_009766f0 = 0x1c8;
      _DAT_009766f4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009766f8,"double");
      _DAT_00976704 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976708,"Mirror");
      _DAT_00976714 = 10;
      _DAT_00976718 = 0x1d0;
      _DAT_0097671c = 0x38;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976720,"LensSubModule");
      _DAT_0097672c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976730,"OutputCoupler");
      _DAT_0097673c = 10;
      _DAT_00976740 = 0x208;
      _DAT_00976744 = 0x38;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976748,"LensSubModule");
      _DAT_00976754 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976758,"CoolantTurbopump");
      _DAT_00976764 = 10;
      _DAT_00976768 = 0x240;
      _DAT_0097676c = 0x48;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976770,"TurbopumpSubModule");
      _DAT_0097677c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976780,"CoolantInletTemperature_K");
      _DAT_0097678c = 4;
      _DAT_00976790 = 0x288;
      _DAT_00976794 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976798,"double");
      _DAT_009767a4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009767a8,"FrequencyDoubler");
      _DAT_009767b4 = 10;
      _DAT_009767b8 = 0x290;
      _DAT_009767bc = 0x70;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009767c0,"FrequencyDoublerSubModule");
      _DAT_009767cc = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009767d0,"SecondFrequencyDoubler");
      _DAT_009767dc = 10;
      _DAT_009767e0 = 0x308;
      _DAT_009767e4 = 0x70;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009767e8,"FrequencyDoublerSubModule");
      _DAT_009767f4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009767f8,"ApertureRadius_m");
      _DAT_00976804 = 4;
      _DAT_00976808 = 0x380;
      _DAT_0097680c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976810,"double");
      _DAT_0097681c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976820,"FocusingMirror");
      _DAT_0097682c = 10;
      _DAT_00976830 = 0x388;
      _DAT_00976834 = 0x38;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976838,"LensSubModule");
      _DAT_00976844 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976848,"Unmounted");
      _DAT_00976854 = 1;
      _DAT_00976858 = 0x3c0;
      _DAT_0097685c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976860,"bool");
      _DAT_0097686c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976870,"Turret");
      _DAT_0097687c = 10;
      _DAT_00976880 = 0x3c8;
      _DAT_00976884 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976888,"ExtrudableSoloTurretSubModule");
      _DAT_00976894 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976898,"FixedMount");
      _DAT_009768a4 = 10;
      _DAT_009768a8 = 0x4d0;
      _DAT_009768ac = 0x28;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009768b0,"FixedLaserMountSubModule");
      _DAT_009768bc = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009768c0,"EngagementRange_km");
      _DAT_009768cc = 4;
      _DAT_009768d0 = 0x500;
      _DAT_009768d4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009768d8,"double");
      _DAT_009768e4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009768e8,"TargetsShips");
      _DAT_009768f4 = 1;
      _DAT_009768f8 = 0xb0;
      _DAT_009768fc = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976900,"bool");
      _DAT_0097690c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976910,"TargetsShots");
      _DAT_0097691c = 1;
      _DAT_00976920 = 0xb1;
      _DAT_00976924 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976928,"bool");
      _DAT_00976934 = 0;
      atexit( private__static_int_const___cdecl_LaserModule__ReflectionInfoStruct_class_LaserModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_1bd96316__thread_safe_static_guard_0__);
    }
  }
  return 0x16;
}





//==== 0064be40 StaticGetMemberCount_0064be40 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl LensSubModule__ReflectionInfoStruct_class_LensSubModule___StaticGetMemberCount(void) */

int __cdecl LensSubModule__ReflectionInfoStruct_class_LensSubModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_b6c7bd33__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_b6c7bd33__thread_safe_static_guard_0__);
    if ( cde_l2_b6c7bd33__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_a3dd6fcf_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_009772a4 = 0;
      _DAT_009772a8 = 0;
      _DAT_009772ac = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009772b0,"Unused");
      _DAT_009772bc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009772c0,"Composition");
      _DAT_009772cc = 8;
      _DAT_009772d0 = 0x10;
      _DAT_009772d4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009772d8,"Material");
      _DAT_009772e4 = 0;
      atexit( private__static_int_const___cdecl_LensSubModule__ReflectionInfoStruct_class_LensSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_b6c7bd33__thread_safe_static_guard_0__);
    }
  }
  return 2;
}





//==== 0064bf20 StaticGetMemberCount_0064bf20 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl NonlinearOpticSubModule__ReflectionInfoStruct_class_NonlinearOpticSubModule___StaticGetMemberCount(void) */

int __cdecl
NonlinearOpticSubModule__ReflectionInfoStruct_class_NonlinearOpticSubModule___StaticGetMemberCount
          (void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_79f6603f__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_79f6603f__thread_safe_static_guard_0__);
    if ( cde_l2_79f6603f__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_b874db02_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_009771f4 = 0;
      _DAT_009771f8 = 0;
      _DAT_009771fc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977200,"Unused");
      _DAT_0097720c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977210,"Composition");
      _DAT_0097721c = 8;
      _DAT_00977220 = 0x10;
      _DAT_00977224 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977228,"Material");
      _DAT_00977234 = 0;
      atexit( private__static_int_const___cdecl_NonlinearOpticSubModule__ReflectionInfoStruct_class_NonlinearOpticSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_79f6603f__thread_safe_static_guard_0__);
    }
  }
  return 2;
}





//==== 0064c000 StaticGetMembers_0064c000 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class util__Darray_L_structutil__ClassMember_G_ const __cdecl
   FixedLaserMountSubModule__ReflectionInfoStruct_struct_FixedLaserMountSubModule___StaticGetMembers(void) */

Darray_L_struct_util__ClassMember_G_ * __cdecl
FixedLaserMountSubModule__ReflectionInfoStruct_struct_FixedLaserMountSubModule___StaticGetMembers
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
        cde_l2_5b05ada6__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_5b05ada6__thread_safe_static_guard_0__),
      cde_l2_5b05ada6__thread_safe_static_guard_0__ == -1)) {
     cde_l2_67af9122_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_5b05ada6__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_67af9122_Count);
  iVar3 = 0;
  if (0 <  cde_l2_67af9122_Count) {
    puVar4 = &DAT_00976d48;
    do {
      if ((*(int *)(iStack_c + 4) <
            cde_l2_226a0649__thread_safe_static_guard_0__) &&
         (_Init_thread_header(& cde_l2_226a0649__thread_safe_static_guard_0__),
          cde_l2_226a0649__thread_safe_static_guard_0__ == -1)) {
        util__Str_char___Str_char
                  ((Str_L_char_G_ *)
                   & cde_l2_e2b5ccda_StaticMembers,"DummyValue_DO_NOT_USE");
        DAT_00976d44 = 0;
        DAT_00976d48 = 0;
        DAT_00976d4c = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976d50,"Unused");
        _DAT_00976d5c = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976d60,"ArmorComposition");
        _DAT_00976d6c = 8;
        _DAT_00976d70 = 0x10;
        _DAT_00976d74 = 4;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976d78,"Material");
        _DAT_00976d84 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976d88,"ArmorThickness_m");
        _DAT_00976d94 = 4;
        _DAT_00976d98 = 0x18;
        _DAT_00976d9c = 8;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00976da0,"double");
        _DAT_00976dac = 0;
        atexit( private__static_struct_util__ClassMember_const___cdecl_FixedLaserMountSubModule__ReflectionInfoStruct_struct_FixedLaserMountSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
        _Init_thread_footer(& cde_l2_226a0649__thread_safe_static_guard_0__);
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
    } while (iVar3 <  cde_l2_67af9122_Count);
  }
  return in_stack_00000004;
}





//==== 0064c290 StaticGetMembers_0064c290 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class util__Darray_L_structutil__ClassMember_G_ const __cdecl
   LensSubModule__ReflectionInfoStruct_class_LensSubModule___StaticGetMembers(void) */

Darray_L_struct_util__ClassMember_G_ * __cdecl
LensSubModule__ReflectionInfoStruct_class_LensSubModule___StaticGetMembers__o2(void)

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
        cde_l2_981d33b5__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_981d33b5__thread_safe_static_guard_0__),
      cde_l2_981d33b5__thread_safe_static_guard_0__ == -1)) {
     cde_l2_a51317e6_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_981d33b5__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_a51317e6_Count);
  iVar3 = 0;
  if (0 <  cde_l2_a51317e6_Count) {
    puVar4 = &DAT_00977300;
    do {
      if ((*(int *)(iStack_c + 4) <
            cde_l2_cdd06619__thread_safe_static_guard_0__) &&
         (_Init_thread_header(& cde_l2_cdd06619__thread_safe_static_guard_0__),
          cde_l2_cdd06619__thread_safe_static_guard_0__ == -1)) {
        util__Str_char___Str_char
                  ((Str_L_char_G_ *)
                   & cde_l2_2abed371_StaticMembers,"DummyValue_DO_NOT_USE");
        DAT_009772fc = 0;
        DAT_00977300 = 0;
        DAT_00977304 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977308,"Unused");
        _DAT_00977314 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977318,"Composition");
        _DAT_00977324 = 8;
        _DAT_00977328 = 0x10;
        _DAT_0097732c = 4;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977330,"Material");
        _DAT_0097733c = 0;
        atexit( private__static_struct_util__ClassMember_const___cdecl_LensSubModule__ReflectionInfoStruct_class_LensSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
        _Init_thread_footer(& cde_l2_cdd06619__thread_safe_static_guard_0__);
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
    } while (iVar3 <  cde_l2_a51317e6_Count);
  }
  return in_stack_00000004;
}





//==== 0064c4e0 StaticGetMembers_0064c4e0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class util__Darray_L_structutil__ClassMember_G_ const __cdecl
   NonlinearOpticSubModule__ReflectionInfoStruct_class_NonlinearOpticSubModule___StaticGetMembers(void) */

Darray_L_struct_util__ClassMember_G_ * __cdecl
NonlinearOpticSubModule__ReflectionInfoStruct_class_NonlinearOpticSubModule___StaticGetMembers(void)

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
        cde_l2_56f8d442__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_56f8d442__thread_safe_static_guard_0__),
      cde_l2_56f8d442__thread_safe_static_guard_0__ == -1)) {
     cde_l2_33da5f73_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_56f8d442__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_33da5f73_Count);
  iVar3 = 0;
  if (0 <  cde_l2_33da5f73_Count) {
    puVar4 = &DAT_00977250;
    do {
      if ((*(int *)(iStack_c + 4) <
            cde_l2_7c649a02__thread_safe_static_guard_0__) &&
         (_Init_thread_header(& cde_l2_7c649a02__thread_safe_static_guard_0__),
          cde_l2_7c649a02__thread_safe_static_guard_0__ == -1)) {
        util__Str_char___Str_char
                  ((Str_L_char_G_ *)
                   & cde_l2_5286f4be_StaticMembers,"DummyValue_DO_NOT_USE");
        DAT_0097724c = 0;
        DAT_00977250 = 0;
        DAT_00977254 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977258,"Unused");
        _DAT_00977264 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977268,"Composition");
        _DAT_00977274 = 8;
        _DAT_00977278 = 0x10;
        _DAT_0097727c = 4;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977280,"Material");
        _DAT_0097728c = 0;
        atexit( private__static_struct_util__ClassMember_const___cdecl_NonlinearOpticSubModule__ReflectionInfoStruct_class_NonlinearOpticSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
        _Init_thread_footer(& cde_l2_7c649a02__thread_safe_static_guard_0__);
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
    } while (iVar3 <  cde_l2_33da5f73_Count);
  }
  return in_stack_00000004;
}





//==== 0064c730 StaticGetReflectionInfo_0064c730 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct ArcLampPumpSubModule__ReflectionInfoStruct_L_classArcLampPumpSubModule_G_ *
   __cdecl ArcLampPumpSubModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_ArcLampPumpSubModule_G_ * __cdecl
ArcLampPumpSubModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_da96179d__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_da96179d__thread_safe_static_guard_0__);
    if ( cde_l2_da96179d__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_0d34b787_ReflectionInfo) = &vftable_303;
      _Init_thread_footer(& cde_l2_da96179d__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_0d34b787_ReflectionInfo;
}





//==== 0064c790 StaticGetReflectionInfo_0064c790 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct FixedLaserMountSubModule__ReflectionInfoStruct_L_struct_FixedLaserMountSubModule_G_ * __cdecl FixedLaserMountSubModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_struct_FixedLaserMountSubModule_G_ * __cdecl
FixedLaserMountSubModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_78149c09__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_78149c09__thread_safe_static_guard_0__);
    if ( cde_l2_78149c09__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_e687c6a6_ReflectionInfo) = &vftable_305;
      _Init_thread_footer(& cde_l2_78149c09__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_e687c6a6_ReflectionInfo;
}





//==== 0064c7f0 StaticGetReflectionInfo_0064c7f0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct FrequencyDoublerSubModule__ReflectionInfoStruct_L_class_FrequencyDoublerSubModule_G_ * __cdecl FrequencyDoublerSubModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_FrequencyDoublerSubModule_G_ * __cdecl
FrequencyDoublerSubModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_4efb896f__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_4efb896f__thread_safe_static_guard_0__);
    if ( cde_l2_4efb896f__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_3c145fb1_ReflectionInfo) = &vftable_301;
      _Init_thread_footer(& cde_l2_4efb896f__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_3c145fb1_ReflectionInfo;
}





//==== 0064c850 StaticGetReflectionInfo_0064c850 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct LaserModule__ReflectionInfoStruct_L_classLaserModule_G_ * __cdecl
   LaserModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_LaserModule_G_ * __cdecl LaserModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_b3861a47__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_b3861a47__thread_safe_static_guard_0__);
    if ( cde_l2_b3861a47__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_57c7f4ca_ReflectionInfo) = &vftable_306;
      _Init_thread_footer(& cde_l2_b3861a47__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_57c7f4ca_ReflectionInfo;
}





//==== 0064c8b0 StaticGetReflectionInfo_0064c8b0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct LensSubModule__ReflectionInfoStruct_L_classLensSubModule_G_ * __cdecl
   LensSubModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_LensSubModule_G_ * __cdecl LensSubModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_2113a09c__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_2113a09c__thread_safe_static_guard_0__);
    if ( cde_l2_2113a09c__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_017e884d_ReflectionInfo) = &vftable_297;
      _Init_thread_footer(& cde_l2_2113a09c__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_017e884d_ReflectionInfo;
}





//==== 0064c910 MethodCaller__public__void___thiscall_LauncherSubCompartment__CancelLaunches_void__ ====


/* public: static void __cdecl util__DelegateFactory_L_struct_LauncherSubCompartment_Cvoid_G___MethodCaller_L__public_void__thiscall_LauncherSubCompartment__CancelLaunches_void__G_(void *) */

void __cdecl
util__DelegateFactory_struct_LauncherSubCompartment_void___MethodCaller__public__void___thiscall_LauncherSubCompartment__CancelLaunches_void(void *param_1)

{
  int iVar1;
  undefined4 uStack_8;
  
  uStack_8 = CONCAT31((*(uint24_t*)((char*)&(uStack_8)+1)),1);
                    /* WARNING: Load optimize_e__size is inaccurate */
  iVar1 = *(int *)param_1;
  *(undefined4 *)(iVar1 + 0x108) = 0;
  *(undefined4 *)(iVar1 + 0x10c) = uStack_8;
  return;
}





//==== 0064c940 MethodCaller__private__void___thiscall_LauncherSubCompartment__LaunchAll_void__ ====


/* public: static void __cdecl util__DelegateFactory_L_struct_LauncherSubCompartment_Cvoid_G___MethodCaller_L__private_void__thiscall_LauncherSubCompartment__LaunchAll_void__G_(void *) */

void __cdecl
util__DelegateFactory_struct_LauncherSubCompartment_void___MethodCaller__private__void___thiscall_LauncherSubCompartment__LaunchAll_void(void *param_1)

{
  int iVar1;
  undefined4 uStack_8;
  
  uStack_8 = uStack_8 & 0xffffff00;
                    /* WARNING: Load optimize_e__size is inaccurate */
  iVar1 = *(int *)param_1;
  *(undefined4 *)(iVar1 + 0x108) = 0;
  *(uint *)(iVar1 + 0x10c) = uStack_8;
  return;
}





//==== 0064c970 MethodCaller__private__void___thiscall_LauncherSubCompartment__LaunchFive_void__ ====


/* public: static void __cdecl util__DelegateFactory_L_struct_LauncherSubCompartment_Cvoid_G___MethodCaller_L__private_void__thiscall_LauncherSubCompartment__LaunchFive_void__G_(void *) */

void __cdecl
util__DelegateFactory_struct_LauncherSubCompartment_void___MethodCaller__private__void___thiscall_LauncherSubCompartment__LaunchFive_void(void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uStack_8;
  
                    /* WARNING: Load optimize_e__size is inaccurate */
  iVar2 = *(int *)param_1;
  if (*(char *)(iVar2 + 0x10c) != '\0') {
    piVar1 = (int *)(iVar2 + 0x108);
    if (*(char *)(iVar2 + 0x10c) == '\0') {
      LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,"IsValid()"
                ,(char *)0x0);
      DebugBreak();
                    /* WARNING: Load optimize_e__size is inaccurate */
      iVar2 = *(int *)param_1;
    }
    uStack_8 = CONCAT31((*(uint24_t*)((char*)&(uStack_8)+1)),1);
    *(int *)(iVar2 + 0x108) = *piVar1 + 5;
    *(undefined4 *)(iVar2 + 0x10c) = uStack_8;
  }
  return;
}





//==== 0064c9e0 MethodCaller__private__void___thiscall_LauncherSubCompartment__LaunchOne_void__ ====


/* public: static void __cdecl util__DelegateFactory_L_struct_LauncherSubCompartment_Cvoid_G___MethodCaller_L__private_void__thiscall_LauncherSubCompartment__LaunchOne_void__G_(void *) */

void __cdecl
util__DelegateFactory_struct_LauncherSubCompartment_void___MethodCaller__private__void___thiscall_LauncherSubCompartment__LaunchOne_void(void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uStack_8;
  
                    /* WARNING: Load optimize_e__size is inaccurate */
  iVar2 = *(int *)param_1;
  if (*(char *)(iVar2 + 0x10c) != '\0') {
    piVar1 = (int *)(iVar2 + 0x108);
    if (*(char *)(iVar2 + 0x10c) == '\0') {
      LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,"IsValid()"
                ,(char *)0x0);
      DebugBreak();
                    /* WARNING: Load optimize_e__size is inaccurate */
      iVar2 = *(int *)param_1;
    }
    uStack_8 = CONCAT31((*(uint24_t*)((char*)&(uStack_8)+1)),1);
    *(int *)(iVar2 + 0x108) = *piVar1 + 1;
    *(undefined4 *)(iVar2 + 0x10c) = uStack_8;
  }
  return;
}





//==== 0064ca40 MethodCaller__private__void___thiscall_LauncherSubCompartment__LaunchTwenty_void__ ====


/* public: static void __cdecl util__DelegateFactory_L_struct_LauncherSubCompartment_Cvoid_G___MethodCaller_L__private_void__thiscall_LauncherSubCompartment__LaunchTwenty_void__G_(void *) */

void __cdecl
util__DelegateFactory_struct_LauncherSubCompartment_void___MethodCaller__private__void___thiscall_LauncherSubCompartment__LaunchTwenty_void(void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uStack_8;
  
                    /* WARNING: Load optimize_e__size is inaccurate */
  iVar2 = *(int *)param_1;
  if (*(char *)(iVar2 + 0x10c) != '\0') {
    piVar1 = (int *)(iVar2 + 0x108);
    if (*(char *)(iVar2 + 0x10c) == '\0') {
      LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,"IsValid()"
                ,(char *)0x0);
      DebugBreak();
                    /* WARNING: Load optimize_e__size is inaccurate */
      iVar2 = *(int *)param_1;
    }
    uStack_8 = CONCAT31((*(uint24_t*)((char*)&(uStack_8)+1)),1);
    *(int *)(iVar2 + 0x108) = *piVar1 + 0x14;
    *(undefined4 *)(iVar2 + 0x10c) = uStack_8;
  }
  return;
}





//==== 0064ea60 GetTypeName_0064ea60 ====


/* public: virtual class util__Str_L_char_G_  RailsSubModule__ReflectionInfoStruct_struct_RailsSubModule___GetTypeName(void)const  */

Str_L_char_G_ * 
RailsSubModule__ReflectionInfoStruct_struct_RailsSubModule___GetTypeName
          (ReflectionInfoStruct_L_struct_RailsSubModule_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"RailsSubModule");
  return __return_storage_ptr__;
}





//==== 0064ea80 GetMembers_0064ea80 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   RailsSubModule__ReflectionInfoStruct_struct_RailsSubModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
RailsSubModule__ReflectionInfoStruct_struct_RailsSubModule___GetMembers__o2
          (ReflectionInfoStruct_L_struct_RailsSubModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_d6197028__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_d6197028__thread_safe_static_guard_0__),
      cde_l2_d6197028__thread_safe_static_guard_0__ == -1)) {
     cde_l2_d44836ed_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_d6197028__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_d44836ed_Count);
  iVar3 = 0;
  if (0 <  cde_l2_d44836ed_Count) {
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
    } while (iVar3 <  cde_l2_d44836ed_Count);
  }
  return in_stack_00000004;
}





//==== 0064ebc0 GetMember_0064ebc0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   RailsSubModule__ReflectionInfoStruct_struct_RailsSubModule___GetMember(class util__Str_L_char_G_
   const &)const  */

Str_L_char_G_ * 
RailsSubModule__ReflectionInfoStruct_struct_RailsSubModule___GetMember__o2
          (ReflectionInfoStruct_L_struct_RailsSubModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_7bb4ce75__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_7bb4ce75__thread_safe_static_guard_0__),
      cde_l2_7bb4ce75__thread_safe_static_guard_0__ == -1)) {
     cde_l2_7fee6028_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_7bb4ce75__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_7fee6028_Count) {
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
LAB_0064ec4d:
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
          if (cVar3 == '\0') goto LAB_0064ec4d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_7fee6028_Count);
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





//==== 0064ed60 GetFactory_0064ed60 ====


/* public: virtual class util__Reflectable * (__cdecl*
   RailsSubModule__ReflectionInfoStruct_struct_RailsSubModule___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall RailsSubModule__ReflectionInfoStruct_struct_RailsSubModule___GetFactory__o2
          (ReflectionInfoStruct_L_struct_RailsSubModule_G_ *this)

{
  return StaticFactory;
}





//==== 0064ed70 GetTypeName_0064ed70 ====


/* public: virtual class util__Str_L_char_G_  RailgunModule__ReflectionInfoStruct_class_RailgunModule___GetTypeName(void)const  */

Str_L_char_G_ * 
RailgunModule__ReflectionInfoStruct_class_RailgunModule___GetTypeName
          (ReflectionInfoStruct_L_class_RailgunModule_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"RailgunModule");
  return __return_storage_ptr__;
}





//==== 0064ed90 GetMembers_0064ed90 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   RailgunModule__ReflectionInfoStruct_class_RailgunModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
RailgunModule__ReflectionInfoStruct_class_RailgunModule___GetMembers__o2
          (ReflectionInfoStruct_L_class_RailgunModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_25b2b008__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_25b2b008__thread_safe_static_guard_0__),
      cde_l2_25b2b008__thread_safe_static_guard_0__ == -1)) {
     cde_l2_d1b6714a_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_25b2b008__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_d1b6714a_Count);
  iVar3 = 0;
  if (0 <  cde_l2_d1b6714a_Count) {
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
    } while (iVar3 <  cde_l2_d1b6714a_Count);
  }
  return in_stack_00000004;
}





//==== 0064eed0 GetMember_0064eed0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   RailgunModule__ReflectionInfoStruct_class_RailgunModule___GetMember(class util__Str_L_char_G_ const
   &)const  */

Str_L_char_G_ * 
RailgunModule__ReflectionInfoStruct_class_RailgunModule___GetMember__o2
          (ReflectionInfoStruct_L_class_RailgunModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_84a203a1__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_84a203a1__thread_safe_static_guard_0__),
      cde_l2_84a203a1__thread_safe_static_guard_0__ == -1)) {
     cde_l2_a3e1e76f_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_84a203a1__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_a3e1e76f_Count) {
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
LAB_0064ef5d:
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
          if (cVar3 == '\0') goto LAB_0064ef5d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_a3e1e76f_Count);
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





//==== 0064f070 GetFactory_0064f070 ====


/* public: virtual class util__Reflectable * (__cdecl*
   RailgunModule__ReflectionInfoStruct_class_RailgunModule___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall RailgunModule__ReflectionInfoStruct_class_RailgunModule___GetFactory__o2
          (ReflectionInfoStruct_L_class_RailgunModule_G_ *this)

{
  return StaticFactory;
}





//==== 0064fab0 MethodCallerConst__public__double___thiscall_RailsSubModule__GetBarrelMass_kg_void_const__ ====


/* public: static double __cdecl util__DelegateFactory_L_struct_RailsSubModule_Cdouble_G___MethodCallerConst_L__public_double__thiscall_RailsSubModule__GetBarrelMass_kg_void_const_G_(void const * const) */

double __cdecl
util__DelegateFactory_struct_RailsSubModule_double___MethodCallerConst__public__double___thiscall_RailsSubModule__GetBarrelMass_kg_void_const
          (void *param_1)

{
  bool bVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dStack_1c;
  double dStack_14;
  double dStack_c;
  
  dVar4 = *(double *)((int)param_1 + 0x28);
  dVar3 = *(double *)((int)param_1 + 0x18) + dVar4;
  dStack_14 = dVar3 * 3.141592653589793 * dVar3 - dVar4 * 3.141592653589793 * dVar4;
  dVar4 = dStack_14 * 0.5555555555555556 * 0.5;
  dStack_1c = dVar4 + dVar4 + dStack_14 * 0.4444444444444444;
  dStack_c = 1e-08;
  bVar1 = Equals_L_double_G_(&dStack_1c,&dStack_14,&dStack_c);
  if (!bVar1) {
    LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\modules\\weaponmodules\\railgunmodules.cpp"
              ,0x32,
              "Equals(GetSupportsArea_m2() + GetRailArea_m2() * 2, AnnulusArea(CachedBoreRadius_m, GetOuterRadius_m()))"
              ,(char *)0x0);
    DebugBreak();
  }
  dVar4 = *(double *)((int)param_1 + 0x28);
  dVar3 = *(double *)((int)param_1 + 0x18);
  if (((dVar3 + dVar4) * 3.141592653589793 * (dVar3 + dVar4) - dVar4 * 3.141592653589793 * dVar4) *
      0.5555555555555556 * 0.5 <= 0.0) {
    LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\modules\\weaponmodules\\railgunmodules.cpp"
              ,0x25,"GetRailArea_m2() > 0",(char *)0x0);
    DebugBreak();
    dVar4 = *(double *)((int)param_1 + 0x28);
    dVar3 = *(double *)((int)param_1 + 0x18);
  }
  dVar7 = *(double *)((int)param_1 + 0x20);
  iVar2 = *(int *)((int)param_1 + 0x10);
  dVar6 = (dVar3 + dVar4) * 3.141592653589793 * (dVar3 + dVar4) - dVar4 * 3.141592653589793 * dVar4;
  dVar5 = dVar6 * 0.5555555555555556 * 0.5;
  dStack_1c = (dVar5 + dVar5) * dVar7 * *(double *)(iVar2 + 0x30);
  if (dVar6 * 0.4444444444444444 <= 0.0) {
    LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\modules\\weaponmodules\\railgunmodules.cpp"
              ,0x2b,"GetSupportsArea_m2() > 0",(char *)0x0);
    DebugBreak();
    dVar4 = *(double *)((int)param_1 + 0x28);
    dVar3 = *(double *)((int)param_1 + 0x18);
    dVar7 = *(double *)((int)param_1 + 0x20);
    iVar2 = *(int *)((int)param_1 + 0x10);
  }
  return ((dVar4 + dVar3) * 3.141592653589793 * (dVar4 + dVar3) - dVar4 * 3.141592653589793 * dVar4)
         * 0.4444444444444444 * dVar7 * *(double *)(iVar2 + 0x30) + dStack_1c;
}





//==== 0064fac0 MethodCallerConst__public__struct_util__Range_double____thiscall_RailgunModule__GetAccelChartXLimits_void_const__0__ ====


/* public: static struct util__Range_L_double_G_ __cdecl util__DelegateFactory_L_class_RailgunModule_Cstructutil__Range_L_double_G__G___MethodCallerConst_L__public_structutil__Range_L_double_G____thiscallRailgunModule__GetAccelChartXLimits_void_const_C0__G_(void const * const) */

Range_L_double_G_ * __cdecl
util__DelegateFactory_class_RailgunModule_struct_util__Range_double_____MethodCallerConst__public__struct_util__Range_double____thiscall_RailgunModule__GetAccelChartXLimits_void_const__0
          (Range_L_double_G_ *__return_storage_ptr__,void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Range_L_double_G_ *pRVar4;
  Range_L_double_G_ RStack_14;
  
  pRVar4 = RailgunModule__GetAccelChartXLimits((RailgunModule *)param_1,&RStack_14);
  uVar1 = *(undefined4 *)((int)&pRVar4->Lower + 4);
  uVar2 = *(undefined4 *)&pRVar4->Upper;
  uVar3 = *(undefined4 *)((int)&pRVar4->Upper + 4);
  *(undefined4 *)&__return_storage_ptr__->Lower = *(undefined4 *)&pRVar4->Lower;
  *(undefined4 *)((int)&__return_storage_ptr__->Lower + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Upper = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Upper + 4) = uVar3;
  return __return_storage_ptr__;
}





//==== 0064fae0 MethodCallerConst__public__struct_util__Range_double____thiscall_RailgunModule__GetAccelChartYLimits_void_const__0__ ====


/* public: static struct util__Range_L_double_G_ __cdecl util__DelegateFactory_L_class_RailgunModule_Cstructutil__Range_L_double_G__G___MethodCallerConst_L__public_structutil__Range_L_double_G____thiscallRailgunModule__GetAccelChartYLimits_void_const_C0__G_(void const * const) */

Range_L_double_G_ * __cdecl
util__DelegateFactory_class_RailgunModule_struct_util__Range_double_____MethodCallerConst__public__struct_util__Range_double____thiscall_RailgunModule__GetAccelChartYLimits_void_const__0
          (Range_L_double_G_ *__return_storage_ptr__,void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Range_L_double_G_ *pRVar4;
  Range_L_double_G_ RStack_14;
  
  pRVar4 = RailgunModule__GetAccelChartYLimits((RailgunModule *)param_1,&RStack_14);
  uVar1 = *(undefined4 *)((int)&pRVar4->Lower + 4);
  uVar2 = *(undefined4 *)&pRVar4->Upper;
  uVar3 = *(undefined4 *)((int)&pRVar4->Upper + 4);
  *(undefined4 *)&__return_storage_ptr__->Lower = *(undefined4 *)&pRVar4->Lower;
  *(undefined4 *)((int)&__return_storage_ptr__->Lower + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Upper = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Upper + 4) = uVar3;
  return __return_storage_ptr__;
}





//==== 0064fb00 MethodCallerConst__public__int___thiscall_RailgunModule__GetBarrelCount_void_const__0__ ====


/* public: static int __cdecl util__DelegateFactory_L_class_RailgunModule_Cint_G___MethodCallerConst_L__public_int__thiscall_RailgunModule__GetBarrelCount_void_const_C0__G_(void const * const) */

int __cdecl
util__DelegateFactory_class_RailgunModule_int___MethodCallerConst__public__int___thiscall_RailgunModule__GetBarrelCount_void_const__0
          (void *param_1)

{
  if (*(char *)((int)param_1 + 0x3c8) != '\0') {
    return *(int *)((int)param_1 + 0x2f0);
  }
  return 1;
}





//==== 0064fb10 MethodCallerConst__public__double___thiscall_RailgunModule__GetChartAcceleration_m__s2_double_const__0__ ====


/* public: static double __cdecl util__DelegateFactory_L_class_RailgunModule_Cdouble_Cdouble_G___MethodCallerConst_L__public_double__thiscall_RailgunModule__GetChartAcceleration_m__s2_double_const_C0__G_(void const * const,double) */

double __cdecl
util__DelegateFactory_class_RailgunModule_double_double___MethodCallerConst__public__double___thiscall_RailgunModule__GetChartAcceleration_m__s2_double_const__0
          (void *param_1,double param_2)

{
  double dVar1;
  undefined4 in_stack_00000008;
  
  dVar1 = RailgunModule__GetChartAcceleration_m__s2
                    ((RailgunModule *)param_1,(double)CONCAT44((*(uint32_t*)&(param_2)),in_stack_00000008));
}





//==== 0064fb30 MethodCallerConst__public__double___thiscall_RailgunModule__GetRailsAndArmorRadius_m_void_const__0__ ====


/* public: static double __cdecl util__DelegateFactory_L_class_RailgunModule_Cdouble_G___MethodCallerConst_L__public_double__thiscall_RailgunModule__GetRailsAndArmorRadius_m_void_const_C0__G_(void const * const) */

double __cdecl
util__DelegateFactory_class_RailgunModule_double___MethodCallerConst__public__double___thiscall_RailgunModule__GetRailsAndArmorRadius_m_void_const__0
          (void *param_1)

{
  return *(double *)((int)param_1 + 0x140) + *(double *)((int)param_1 + 0x130) +
         *(double *)((int)param_1 + 0x160);
}





//==== 0064fb40 RailgunModule ====

/* public: __thiscall RailgunModule__RailgunModule(void) */

RailgunModule * __thiscall RailgunModule__RailgunModule(RailgunModule *this)

{
  double *pdVar1;
  Cylinder_L_double_G_ *pCVar2;
  Sarray_L_double_C500_G_ *this_00;
  double local_c;
  
  Module__Module((Module *)this);
  *(undefined1 *)&this->_pad_0x78_30 = 0;
  pdVar1 = &(this->Rails).Length_m;
  this->_pad_0x70_28 = 0;
  this->_pad_0x74_29 = 0;
  this->_pad_0x80_32 = 0;
  this->_pad_0x84_33 = 0;
  this->_pad_0x88_34 = 0;
  this->_pad_0x8c_35 = 0;
  this->_pad_0x80_32 = (int)&vftable_166;
  this->_pad_0x84_33 = 0;
  this->_pad_0x88_34 = 0;
  this->_pad_0x8c_35 = 0;
  this->_pad_0x90_36 = 0;
  this->_pad_0x94_37 = 0;
  *(undefined1 *)&(this->RailgunModuleMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 = 0;
  (this->RailgunModuleMemoizationHandlerInstance).ResetFunctions.Size = 0;
  (this->RailgunModuleMemoizationHandlerInstance).ResetFunctions.Capacity = 0;
  *(undefined1 *)&(this->GetCachedPowerUsed_W_MemoizedValue).Data = 0;
  this->_pad_0x0_0 = (int)&vftable_for_EditorReflectable__32;
  this->_pad_0x34_13 = (int)&vftable_for_util__RTTIBaseClass__31;
  *(undefined4 *)&(this->GetFiringCharacteristics_MemoizedValue).Data.Velocity_km__s = 0;
  *(undefined4 *)((int)&(this->GetFiringCharacteristics_MemoizedValue).Data.Velocity_km__s + 4) = 0;
  *(undefined4 *)&(this->GetFiringCharacteristics_MemoizedValue).Data.FiringTime_s = 0;
  *(undefined4 *)((int)&(this->GetFiringCharacteristics_MemoizedValue).Data.FiringTime_s + 4) = 0;
  *(undefined ** *)&((this->GetFiringCharacteristics_MemoizedValue).Data.Velocity_km__s) =
       &vftable_109;
  *(undefined4 *)((int)&(this->GetFiringCharacteristics_MemoizedValue).Data.Velocity_km__s + 4) = 0;
  *(undefined4 *)&(this->GetFiringCharacteristics_MemoizedValue).Data.FiringTime_s = 0;
  *(undefined4 *)((int)&(this->GetFiringCharacteristics_MemoizedValue).Data.FiringTime_s + 4) = 0;
  *(undefined8 *)&(this->GetFiringCharacteristics_MemoizedValue).IsValidData = 0;
  *(undefined1 *)&(this->GetArcEnergy_J_MemoizedValue).Data = 0;
  *(undefined4 *)&(this->GetArcEnergy_J_MemoizedValue).IsValidData = 0;
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetArcEnergy_J_MemoizedValue)) + 0xc)) = 0;
  *(undefined4 *)&(this->GetHeatGeneratedPerShot_J_MemoizedValue).Data = 0;
  *(undefined4 *)((int)&(this->GetHeatGeneratedPerShot_J_MemoizedValue).Data + 4) = 0;
  (this->GetHeatGeneratedPerShot_J_MemoizedValue).IsValidData = false;
  this->PowerConsumption_W = 0.0;
  *(undefined1 *)&(this->Rails)._pad_0x0_0 = 0;
  (this->Rails)._pad_0x8_2 = 0;
  (this->Rails)._pad_0xc_3 = 0;
  *(undefined1 *)&(this->Rails).Composition = 0;
  (this->Rails).Thickness_m = 0.0;
  memset(pdVar1,0,0x30);
  *(undefined4 *)((int)&(this->Rails).Length_m + 4) = 0;
  *(undefined4 *)&(this->Rails).CachedBoreRadius_m = 0;
  *(undefined4 *)((int)&(this->Rails).CachedBoreRadius_m + 4) = 0;
  *(undefined ***)pdVar1 = &vftable_311;
  pCVar2 = &(this->Barrel).CachedSize_m;
  memset(pCVar2,0,0x90);
  *(undefined4 *)((int)&(this->Barrel).CachedSize_m.Radius + 4) = 0;
  *(undefined4 *)&(this->Barrel).CachedSize_m.Height = 0;
  *(undefined4 *)((int)&(this->Barrel).CachedSize_m.Height + 4) = 0;
  *(undefined ***)&pCVar2->Radius = &vftable_283;
  *(undefined4 *)&(this->Barrel).CachedMantletSize_m.Radius = 0;
  *(undefined4 *)((int)&(this->Barrel).CachedMantletSize_m.Radius + 4) = 0;
  *(undefined4 *)&(this->Barrel).CachedPeakTemperatureJump_K.Data = 0;
  *(undefined4 *)((int)&(this->Barrel).CachedPeakTemperatureJump_K.Data + 4) = 0;
  *(undefined4 *)&(this->Barrel).CachedPeakTemperatureJump_K.IsValidData = 0;
  *(undefined4 *)&(*(undefined4 *)((char *)&((this->Barrel).CachedPeakTemperatureJump_K) + 0xc)) = 0;
  *(undefined1 *)&(this->Armature)._pad_0x8_2 = 0;
  (this->Armature)._pad_0x0_0 = 0;
  (this->Armature)._pad_0x4_1 = 0;
  (this->Armature).Composition = (Material *)0x0;
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->Armature)) + 0x14)) = 0;
  *(undefined4 *)&(this->Armature).BoreRadius_m = 0;
  *(undefined4 *)((int)&(this->Armature).BoreRadius_m + 4) = 0;
  (this->Armature).Tracer = (Material *)0x0;
  (this->Armature).ShipClass__Payload = (CraftBlueprint *)0x0;
  MassProjectileSubModule__MassProjectileSubModule
            ((MassProjectileSubModule *)&(this->Armature).CachedMassStartsOutBeforeBarrel);
  CapacitorBankSubModule__CapacitorBankSubModule
            ((CapacitorBankSubModule *)&(this->Capacitor).Data._pad_0x30_12);
  *(undefined1 *)&(this->Turret).Data = 0;
  *(undefined4 *)&(this->Turret).Data.field0_0x0 = 0;
  *(undefined4 *)&(this->Turret).Data.field0_0x0 = 0;
  *(undefined4 *)&(this->Turret).Data.field1_0x1 = 0;
  *(undefined ** *)&(this->Turret).Data.field8_0x8 = &vftable_211;
  *(undefined8 *)&(this->Turret).Data.field1_0x1 = 0;
  TurretSubModule__TurretSubModule((TurretSubModule *)&(this->Turret).Data.field3_0x3);
  *(undefined ** *)&(this->Turret).Data.field3_0x3 = &vftable_237;
  *(undefined1 *)&(this->TurretModel).Pointer = 0;
  AmmoBaySubModule__AmmoBaySubModule((AmmoBaySubModule *)&this->BarrelModel);
  *(undefined1 *)((this->ChartAcceleration_m__s).Data + 0x11) = 0;
  *(undefined4 *)((this->ChartAcceleration_m__s).Data + 0x12) = 0;
  *(undefined4 *)((int)(this->ChartAcceleration_m__s).Data + 0x94) = 0;
  *(undefined4 *)((this->ChartAcceleration_m__s).Data + 0x13) = 0;
  *(undefined4 *)((int)(this->ChartAcceleration_m__s).Data + 0x9c) = 0;
  this_00 = (Sarray_L_double_C500_G_ *)((this->ChartAcceleration_m__s).Data + 0x15);
  *(undefined4 *)((this->ChartAcceleration_m__s).Data + 0x14) = 0;
  *(undefined4 *)((int)(this->ChartAcceleration_m__s).Data + 0xa4) = 0;
  this_00->_pad_0x0_0 = (int)&vftable_286;
  local_c = 0.0;
  util__Sarray_double_500___SetAll(this_00,&local_c);
  return this;
}

//==== 0064fda0 RailgunModule_0064fda0 ====

/* public: virtual __thiscall RailgunModule___RailgunModule(void) */

void __thiscall RailgunModule___RailgunModule(RailgunModule *this)

{
  ReferenceController *pRVar1;
  void *pvVar2;
  
  *(undefined ***)((this->ChartAcceleration_m__s).Data + 0x15) =
       &vftable_286;
  pRVar1 = *(ReferenceController **)((int)(this->ChartAcceleration_m__s).Data + 0xa4);
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  pRVar1 = *(ReferenceController **)((int)(this->ChartAcceleration_m__s).Data + 0x9c);
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  pRVar1 = *(ReferenceController **)((int)(this->ChartAcceleration_m__s).Data + 0x94);
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  AmmoInfo___AmmoInfo((AmmoInfo *)((this->ChartAcceleration_m__s).Data + 2));
  (this->BarrelModel).Pointer = (GameModel *)&vftable_5;
  pRVar1 = (this->BarrelModel).Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    port_op_delete(pRVar1);
    (this->BarrelModel).Controller = (ReferenceController *)0x0;
  }
  TurretSubModule___TurretSubModule((TurretSubModule *)&(this->Turret).Data.field3_0x3);
  *(undefined ** *)&(this->Turret).Data.field8_0x8 = &vftable_5;
  pvVar2 = *(void * *)&(this->Turret).Data.field0_0x0;
  if (pvVar2 != (void *)0x0) {
    port_op_delete(pvVar2);
    *(undefined4 *)&(this->Turret).Data.field0_0x0 = 0;
  }
  pRVar1 = *(ReferenceController * *)&(this->Loader).CachedDistance_m;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  (this->Capacitor).Data._pad_0x30_12 = (int)&vftable_5;
  pvVar2 = (void *)(this->Capacitor).Data._pad_0x34_13;
  if (pvVar2 != (void *)0x0) {
    port_op_delete(pvVar2);
    (this->Capacitor).Data._pad_0x34_13 = 0;
  }
  *(undefined ** *)&(this->Armature).CachedMassStartsOutBeforeBarrel = &vftable_5;
  pvVar2 = *(void **)((char *)&(this->Armature) + 0x34);
  if (pvVar2 != (void *)0x0) {
    port_op_delete(pvVar2);
    *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->Armature)) + 0x34)) = 0;
  }
  *(undefined ** *)&(this->Barrel).CachedSize_m.Radius = &vftable_5;
  pvVar2 = *(void **)((int)&(this->Barrel).CachedSize_m.Radius + 4);
  if (pvVar2 != (void *)0x0) {
    port_op_delete(pvVar2);
    *(undefined4 *)((int)&(this->Barrel).CachedSize_m.Radius + 4) = 0;
  }
  *(undefined ** *)&(this->Rails).Length_m = &vftable_5;
  pvVar2 = *(void **)((int)&(this->Rails).Length_m + 4);
  if (pvVar2 != (void *)0x0) {
    port_op_delete(pvVar2);
    *(undefined4 *)((int)&(this->Rails).Length_m + 4) = 0;
  }
  pvVar2 = *(void **)((int)&(this->GetFiringCharacteristics_MemoizedValue).Data.Velocity_km__s + 4);
*(uint32_t *)&((this->GetFiringCharacteristics_MemoizedValue).Data.Velocity_km__s) = (uint32_t)(uintptr_t)(&vftable_109);
  if (pvVar2 != (void *)0x0) {
    port_op_delete(pvVar2);
  }
  *(undefined4 *)((int)&(this->GetFiringCharacteristics_MemoizedValue).Data.Velocity_km__s + 4) = 0;
  *(undefined ** *)&(this->GetFiringCharacteristics_MemoizedValue).Data.Velocity_km__s = (undefined **)(&vftable);
  this->_pad_0x80_32 = (int)&vftable_166;
  if ((void *)this->_pad_0x84_33 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x84_33);
  }
  this->_pad_0x84_33 = 0;
  this->_pad_0x80_32 = (int)&vftable;
  this->_pad_0x0_0 = (int)&vftable_for_EditorReflectable__3;
  this->_pad_0x34_13 = (int)&vftable_for_util__RTTIBaseClass__3;
  Darray_L_util__SharedPtr_L_GameModel_G___G___dtor((Darray_L_util__SharedPtr_L_GameModel_G___G_ *)&this->_pad_0x58_22);
  this->_pad_0x38_14 = (int)&vftable_166;
  if ((void *)this->_pad_0x3c_15 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x3c_15);
  }
  this->_pad_0x3c_15 = 0;
  this->_pad_0x38_14 = (int)&vftable;
  if ((void *)this->_pad_0x20_8 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x20_8);
    this->_pad_0x20_8 = 0;
  }
  if ((void *)this->_pad_0x10_4 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x10_4);
    this->_pad_0x10_4 = 0;
  }
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  return;
}

//==== 00650320 scalar_deleting_destructor_00650320 ====


/* public: virtual void * __thiscall RailgunModule:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall RailgunModule___scalar_deleting_destructor(RailgunModule *this,uint param_1)

{
  RailgunModule___RailgunModule(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x1430);
  }
  return this;
}





//==== 00651830 GenerateDesignUI_00651830 ====

/* WARNING: Removing unreachable block (ram,0x00652163) */
/* WARNING: Removing unreachable block (ram,0x00652170) */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual struct UIWidget * __thiscall RailgunModule__GenerateDesignUI(class Manager
   *)const  */

UIWidget * __thiscall RailgunModule__GenerateDesignUI(RailgunModule *this,Manager *param_1)

{
  undefined8 stack0xfffff724;
  undefined8 stack0xfffff800;
  undefined8 stack0xfffff834;
  undefined8 stack0xfffff86c;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  UIAttributes UVar4;
  UIAttributes UVar5;
  LayoutAttributes LVar6;
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
  undefined4 *puVar22;
  UIWidget *pUVar23;
  LocStr *pLVar24;
  Str_L_char_G_ *pSVar25;
  Str_L_char_G_ *pSVar26;
  undefined4 *puVar27;
  int iVar28;
  UIAttributes *pUVar29;
  float *pfVar30;
  Data *pDVar31;
  int iStack_808;
  undefined1 in_stack_fffff800 [44];
  void *in_stack_fffff82c;
  _func___cdecl_bool_void_ptr *in_stack_fffff830;
  undefined1 auVar32 [12];
  undefined1 in_stack_fffff834 [44];
  undefined1 auVar33 [12];
  void *in_stack_fffff860;
  _func___cdecl_bool_void_ptr *in_stack_fffff864;
  Darray_L_struct_Body__RadialImpulse_G_ *in_stack_fffff868;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [44];
  undefined1 in_stack_fffff86c [220];
  float in_stack_fffff948;
  undefined4 in_stack_fffff94c;
  float fVar40;
  void *in_stack_fffff950;
  void *pvVar41;
  _func___cdecl_Color_void_ptr *in_stack_fffff954;
  _func___cdecl_Color_void_ptr *p_Var42;
  int in_stack_fffff958;
  float fVar43;
  int in_stack_fffff95c;
  float fVar44;
  int in_stack_fffff960;
  float fVar45;
  int in_stack_fffff964;
  float fVar46;
  float in_stack_fffff968;
  float fVar47;
  float in_stack_fffff96c;
  float fVar48;
  float in_stack_fffff970;
  float fVar49;
  float fVar50;
  float fVar51;
  Manager *pMVar52;
  UIAttributes local_678;
  UIAttributes local_530;
  Args local_3e8 [272];
  UIAttributes local_2d8;
  LayoutAttributes local_190;
  Color local_160;
  void *local_140 [3];
  void *local_134;
  void *local_128 [3];
  void *local_11c;
  void *local_110 [3];
  void *local_104;
  Str_L_char_G_ local_f8;
  Str_L_char_G_ local_ec;
  Str_L_char_G_ local_e0;
  Str_L_char_G_ local_d4;
  Str_L_char_G_ local_c8;
  Darray_L_util__SharedPtr_L_UIWidget_G___G_ local_bc;
  void *local_ac;
  _func___cdecl_Color_void_ptr *local_a8;
  undefined **local_a4;
  Str_L_char_G_ local_a0;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  Str_L_char_G_ local_84;
  Str_L_char_G_ local_78;
  Str_L_char_G_ local_6c;
  LineGraph *local_60;
  void *local_5c;
  _func___cdecl_Color_void_ptr *local_58;
  undefined **local_54;
  Str_L_char_G_ local_50;
  code *pcStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  UIRowLayout *local_30;
  UIWidget *local_2c;
  float local_28;
  float local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  void *local_18;
  Str_L_char_G_ SStack_14;
  UIWidget *local_8;
  undefined1 auVar39 [32];
  
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
  local_30 = (UIRowLayout *)0x0;
  local_30 = (UIRowLayout *)(uintptr_t)(port_op_new(0x218));
  if (local_30 == (UIRowLayout *)0x0) {
    pUVar23 = (UIWidget *)0x0;
  }
  else {
    pUVar23 = (UIWidget *)(uintptr_t)(port_op_new(0x170));
    if (pUVar23 == (UIWidget *)0x0) {
      *(uint32_t *)&local_2c = (uint32_t)(uintptr_t)((UIWidget *)0x0);
    }
    else {
      fVar50 = 9.284173e-39;
      pMVar52 = param_1;
      *(uint32_t *)&local_2c = (uint32_t)(uintptr_t)(pUVar23);
      UIAttributes__UIAttributes(&local_2d8,param_1);
      local_50.Length = 0;
      uStack_40 = 0x3ff0000000000000;
      uStack_38 = 0x3ff0000000000000;
      pcStack_44 = (code *)0x0;
      local_2d8.FillProportion.Getter.Callee = (void *)0x0;
      local_2d8.FillProportion.Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0;
      local_2d8.FillProportion.Value.X = 0;
      local_2d8.FillProportion.Value.Y = 0x3ff00000;
      local_2d8.FillProportion.Value.Y = 1.0;
      in_stack_fffff82c = (void *)0x6518bb;
      UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff834,&local_2d8);
      in_stack_fffff830 = (_func___cdecl_bool_void_ptr *)0x6518c2;
      UVar5.Enabled.Getter.Callee = in_stack_fffff860;
*(uint32_t *)&auVar32 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff834) + 4)));
*(uint32_t *)&auVar33 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff834) + 32)));
      UVar5.Parent = (Manager *)(*(uint32_t*)&(in_stack_fffff834));
      UVar5.Tag.Data = (char *)(*(uint32_t*)&(auVar32));
      UVar5.Tag.Capacity = (*(uint32_t*)((char*)&(auVar32)+4));
      UVar5.Tag.Length = (*(uint32_t*)((char*)&(auVar32)+8));
      uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff834) + 16)),0);
      uVar35 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff834) + 16)),8);
      UVar5.Location.Getter.Callee = (void *)(int)uVar34;
      UVar5.Location.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar5.Location.Value.X = (int)uVar35;
      UVar5.Location.Value.Y = (int)((ulonglong)uVar35 >> 0x20);
      UVar5.Visible.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar33));
      UVar5.Visible.Getter.CallbackFunction =
           (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar33)) >> 0x20);
      UVar5.Visible.Value = (bool)auVar33[8];
      (*(uint24_t *)((char *)&(UVar5.Visible) + 9)) = (*(uint24_t*)((char*)&(auVar33)+9));
      UVar5.Enabled.Getter.CallbackFunction = in_stack_fffff864;
      (*(uint32_t *)((char *)&(UVar5.Enabled) + 8)) = (uint32_t)(uintptr_t)(in_stack_fffff868);
*(uint32_t *)&auVar37 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff86c) + 124)));
*(uint32_t *)&auVar38 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff86c) + 140)));
      uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff86c) + 0)),0);
      uVar35 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff86c) + 0)),8);
      UVar5.DesiredSize.Getter.Callee = (void *)(int)uVar34;
      UVar5.DesiredSize.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar5.DesiredSize.Value.X = (int)uVar35;
      UVar5.DesiredSize.Value.Y = (int)((ulonglong)uVar35 >> 0x20);
      uVar34 = SUB248((*(uint32_t *)((char *)&(in_stack_fffff86c) + 16)),0);
*(uint32_t *)&auVar36 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffff86c) + 16)),8));
      UVar5.FillProportion.Getter.Callee = (void *)(int)uVar34;
      UVar5.FillProportion.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar5.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar36));
      UVar5.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar36)+8));
      uVar34 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff86c) + 40)),0);
      UVar5.HitTestShape.Getter.Callee = (void *)(int)uVar34;
      UVar5.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)(int)((ulonglong)uVar34 >> 0x20));
      UVar5.HitTestShape.Value = SUB124((*(uint32_t *)((char *)&(in_stack_fffff86c) + 40)),8);
      (*(uint32_t *)((char *)&(UVar5) + 108)) = (*(uint32_t *)((char *)&(in_stack_fffff86c) + 52));
      uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff86c) + 56)),0);
      UVar5.Depth.Getter.Callee = (void *)(int)uVar34;
      UVar5.Depth.Getter.CallbackFunction =
           (_func___cdecl_double_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar5.Depth.Value = (double)SUB168((*(uint32_t *)((char *)&(in_stack_fffff86c) + 56)),8);
      uVar34 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff86c) + 72)),0);
      UVar5.Icon.Getter.Callee = (void *)(int)uVar34;
      UVar5.Icon.Getter.CallbackFunction = (void (* (*)(void *))(void))((_func___cdecl__func___cdecl_void_ptr_void_ptr *)(int)((ulonglong)uVar34 >> 0x20));
      UVar5.Icon.Value = (_func___cdecl_void *)SUB124((*(uint32_t *)((char *)&(in_stack_fffff86c) + 72)),8);
      uVar34 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff86c) + 84)),0);
*(uint32_t *)&auVar32 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff86c) + 84)),8));
      UVar5.Tooltip.Getter.Callee = (void *)(int)uVar34;
      UVar5.Tooltip.Getter.CallbackFunction =
           (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar5.Tooltip.Value.Data = (char *)(*(uint32_t*)&(auVar32));
      UVar5.Tooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar32)+4));
      UVar5.Tooltip.Value.Length = (*(uint32_t*)((char*)&(auVar32)+8));
      uVar34 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff86c) + 104)),0);
*(uint32_t *)&auVar32 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff86c) + 104)),8));
      UVar5.VerboseTooltip.Getter.Callee = (void *)(int)uVar34;
      UVar5.VerboseTooltip.Getter.CallbackFunction =
           (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar5.VerboseTooltip.Value.Data = (char *)(*(uint32_t*)&(auVar32));
      UVar5.VerboseTooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar32)+4));
      UVar5.VerboseTooltip.Value.Length = (*(uint32_t*)((char*)&(auVar32)+8));
      uVar34 = SUB128((*(uint32_t *)((char *)&(auVar37) + 0)),0);
      UVar5.TextFont.Data.Getter.Callee = (void *)(int)uVar34;
      UVar5.TextFont.Data.Getter.CallbackFunction =
           (_func___cdecl_Font_ptr_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar5.TextFont.Data.Value = (Font *)SUB124((*(uint32_t *)((char *)&(auVar37) + 0)),8);
      UVar5.TextFont.IsValidData = (bool)auVar37[0xc];
      (*(uint32_t *)((char *)&(UVar5.TextFont) + 13)) = (*(uint32_t *)((char *)&(auVar37) + 13));
      uVar34 = SUB408((*(uint32_t *)((char *)&(auVar38) + 0)),0);
*(uint32_t *)&auVar39 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar38) + 0)),8));
      UVar5.ForegroundColor.Data.Getter.Callee = (void *)(int)uVar34;
      UVar5.ForegroundColor.Data.Getter.CallbackFunction =
           (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar5.ForegroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar39));
      UVar5.ForegroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar39)+4));
      UVar5.ForegroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar39)+8));
      UVar5.ForegroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar39) + 12));
      UVar5.ForegroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar39) + 16));
      UVar5.ForegroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar39) + 20));
      UVar5.ForegroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar39) + 24));
      UVar5.ForegroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar39) + 28));
      UVar5.ForegroundColor.IsValidData = (bool)auVar38[0x28];
      (*(uint32_t *)((char *)&(UVar5.ForegroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar38) + 41));
      UVar5.BackgroundColor.Data.Getter.Callee = (void *)(int)(*(uint64_t *)((char *)&(in_stack_fffff86c) + 184));
      UVar5.BackgroundColor.Data.Getter.CallbackFunction =
           (_func___cdecl_Color_void_ptr *)(int)((ulonglong)(*(uint64_t *)((char *)&(in_stack_fffff86c) + 184)) >> 0x20);
      UVar5.BackgroundColor.Data.Value._pad_0x0_0 = (*(uint32_t *)((char *)&(in_stack_fffff86c) + 192));
      UVar5.BackgroundColor.Data.Value._pad_0x4_1 = (*(uint32_t *)((char *)&(in_stack_fffff86c) + 196));
      UVar5.BackgroundColor.Data.Value._pad_0x8_2 = (*(uint32_t *)((char *)&(in_stack_fffff86c) + 200));
      UVar5.BackgroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(in_stack_fffff86c) + 204));
      UVar5.BackgroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(in_stack_fffff86c) + 208));
      UVar5.BackgroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(in_stack_fffff86c) + 212));
      UVar5.BackgroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(in_stack_fffff86c) + 216));
      UVar5.BackgroundColor.Data.Value.Alpha = in_stack_fffff948;
      UVar5.BackgroundColor.IsValidData = SUB41(in_stack_fffff94c,0);
      (*(uint32_t *)((char *)&(UVar5.BackgroundColor) + 41)) = SUB43(in_stack_fffff94c,1);
      UVar5.TextColor.Data.Getter.Callee = in_stack_fffff950;
      UVar5.TextColor.Data.Getter.CallbackFunction = in_stack_fffff954;
      UVar5.TextColor.Data.Value._pad_0x0_0 = in_stack_fffff958;
      UVar5.TextColor.Data.Value._pad_0x4_1 = in_stack_fffff95c;
      UVar5.TextColor.Data.Value._pad_0x8_2 = in_stack_fffff960;
      UVar5.TextColor.Data.Value._pad_0xc_3 = in_stack_fffff964;
      UVar5.TextColor.Data.Value.Hue_degrees = in_stack_fffff968;
      UVar5.TextColor.Data.Value.Saturation = in_stack_fffff96c;
      UVar5.TextColor.Data.Value.Value = in_stack_fffff970;
      UVar5.TextColor.Data.Value.Alpha = fVar50;
      (*(uint32_t *)((char *)&(UVar5.TextColor) + 40)) = (uint32_t)(uintptr_t)(pMVar52);
      UIWidget__UIWidget(pUVar23,UVar5);
      pUVar23->_pad_0x0_0 = (int)&vftable_313;
      pUVar23[1]._pad_0x0_0 = (int)this;
      UIAttributes___UIAttributes(&local_2d8);
    }
    local_60 = (LineGraph *)(uintptr_t)(port_op_new(0x278));
    if (local_60 == (LineGraph *)0x0) {
      local_8 = (UIWidget *)0x0;
    }
    else {
      util__Str_char___Str_char(&local_f8,"m/s^2");
      util__Str_char___Str_char(&local_e0,"RailgunAccelerationChart YAxis");
      util__Str_char___Str_char(&local_ec,"m");
      util__Str_char___Str_char(&local_d4,"RailgunAccelerationChart XAxis");
      util__Str_char___Str_char(&local_c8,"RailgunAccelerationChart Title");
      local_20 = (undefined4 *)&stack0xfffff86c;
      pcStack_44 = util__DelegateFactory_L_RailgunModule_Cutil__Range_L_double_G___G___MethodCallerConst_L__public__struct_util__Range_L_double_G____thiscall_RailgunModule__GetAccelChartYLimits_void_const__C0__G_
      ;
      local_a0.Length =
           (int)util__DelegateFactory_L_RailgunModule_Cutil__Range_L_double_G___G___MethodCallerConst_L__public__struct_util__Range_L_double_G____thiscall_RailgunModule__GetAccelChartXLimits_void_const__C0__G_
      ;
      uStack_40 = 0;
      uStack_38 = 0;
      local_84.Data = (char *)0x0;
      fStack_94 = 0.0;
      fStack_90 = 0.0;
      fStack_8c = 0.0;
      fStack_88 = 0.0;
      local_84.Capacity = 0;
      local_84.Length = 0;
      local_78.Data = (char *)0x0;
      local_78.Capacity = 0;
      local_78.Length = 0;
      local_6c.Data = (char *)0x0;
      local_6c.Capacity = 0;
      local_6c.Length = 0;
      local_a0.Capacity = (int)this;
      local_50.Length = (int)this;
      pLVar24 = (LocStr *)util__LocStr__LocStr((LocStr *)local_140,&local_e0,&local_84);
      local_8 = (UIWidget *)util__LocStr__operator__o3(pLVar24);
      pLVar24 = (LocStr *)util__LocStr__LocStr((LocStr *)local_128,&local_d4,&local_78);
      pSVar25 = util__LocStr__operator__o3(pLVar24);
      in_stack_fffff860 = (void *)0x6519e7;
      pLVar24 = (LocStr *)util__LocStr__LocStr((LocStr *)local_110,&local_c8,&local_6c);
      pSVar26 = util__LocStr__operator__o3(pLVar24);
      *(uint32_t *)&local_1c = 0;
      *(uint32_t *)&local_18 = (uint32_t)(uintptr_t)((void *)0x0);
      util__Str_char___Str_char(&SStack_14,pSVar26);
      puVar27 = (undefined4 *)LineGraph__Args__Args__o3(local_3e8);
      *puVar27 = local_1c;
      puVar27[1] = (undefined4)(uintptr_t)(local_18);
      util__Str_char___operator__o8((Str_L_char_G_ *)(puVar27 + 2),&SStack_14);
      if ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_14.Data !=
          (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      *(uint32_t *)&local_1c = 0;
      *(uint32_t *)&local_18 = (uint32_t)(uintptr_t)((void *)0x0);
      util__Str_char___Str_char(&SStack_14,pSVar25);
      puVar27[5] = local_1c;
      puVar27[6] = (undefined4)(uintptr_t)(local_18);
      util__Str_char___operator__o8((Str_L_char_G_ *)(puVar27 + 7),&SStack_14);
      if ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_14.Data !=
          (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      *(uint32_t *)&local_1c = 0;
      *(uint32_t *)&local_18 = (uint32_t)(uintptr_t)((void *)0x0);
      util__Str_char___Str_char(&SStack_14,&local_ec);
      puVar27[10] = local_1c;
      puVar27[0xb] = (undefined4)(uintptr_t)(local_18);
      util__Str_char___operator__o8((Str_L_char_G_ *)(puVar27 + 0xc),&SStack_14);
      if ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_14.Data !=
          (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      *(uint32_t *)&local_1c = 0;
      *(uint32_t *)&local_18 = (uint32_t)(uintptr_t)((void *)0x0);
      util__Str_char___Str_char(&SStack_14,(Str_L_char_G_ *)local_8);
      puVar27[0xf] = local_1c;
      puVar27[0x10] = (undefined4)(uintptr_t)(local_18);
      util__Str_char___operator__o8((Str_L_char_G_ *)(puVar27 + 0x11),&SStack_14);
      if ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_14.Data !=
          (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      *(uint32_t *)&local_1c = 0;
      *(uint32_t *)&local_18 = (uint32_t)(uintptr_t)((void *)0x0);
      util__Str_char___Str_char(&SStack_14,&local_f8);
      puVar27[0x14] = local_1c;
      puVar27[0x15] = (undefined4)(uintptr_t)(local_18);
      util__Str_char___operator__o8((Str_L_char_G_ *)(puVar27 + 0x16),&SStack_14);
      if ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_14.Data !=
          (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      puVar22 = local_20;
      puVar27[0x27] = (undefined4)(uintptr_t)(this);
      puVar27[0x1a] = local_a0.Capacity;
      puVar27[0x1b] = local_a0.Length;
      puVar27[0x1c] = fStack_94;
      puVar27[0x1d] = fStack_90;
      puVar27[0x28] = (undefined4)(uintptr_t)(util__DelegateFactory_L_RailgunModule_Cdouble_Cdouble_G___MethodCallerConst_L__public__double___thiscall_RailgunModule__GetChartAcceleration_m__s2_double_const__C0__G_);
      *(ulonglong *)(puVar27 + 0x1e) = CONCAT44(fStack_88,fStack_8c);
      pSVar25 = (Str_L_char_G_ *)(local_20 + 2);
      *(undefined1 *)(puVar27 + 0x26) = 1;
      puVar27[0x20] = local_50.Length;
      puVar27[0x21] = (undefined4)(uintptr_t)(pcStack_44);
      puVar27[0x22] = (undefined4)(uintptr_t)((undefined4)uStack_40);
      puVar27[0x23] = (*(uint32_t*)((char*)&(uStack_40)+4));
      *(undefined8 *)(puVar27 + 0x24) = uStack_38;
      *local_20 = *puVar27;
      puVar22[1] = puVar27[1];
      util__Str_char___Str_char(pSVar25,(Str_L_char_G_ *)(puVar27 + 2));
      puVar22[5] = puVar27[5];
      puVar22[6] = puVar27[6];
      util__Str_char___Str_char((Str_L_char_G_ *)(puVar22 + 7),(Str_L_char_G_ *)(puVar27 + 7));
      puVar22[10] = puVar27[10];
      puVar22[0xb] = puVar27[0xb];
      util__Str_char___Str_char((Str_L_char_G_ *)(puVar22 + 0xc),(Str_L_char_G_ *)(puVar27 + 0xc));
      puVar22[0xf] = puVar27[0xf];
      puVar22[0x10] = puVar27[0x10];
      util__Str_char___Str_char((Str_L_char_G_ *)(puVar22 + 0x11),(Str_L_char_G_ *)(puVar27 + 0x11));
      puVar22[0x14] = puVar27[0x14];
      puVar22[0x15] = puVar27[0x15];
      util__Str_char___Str_char((Str_L_char_G_ *)(puVar22 + 0x16),(Str_L_char_G_ *)(puVar27 + 0x16));
      uVar1 = puVar27[0x1b];
      uVar2 = puVar27[0x1c];
      uVar3 = puVar27[0x1d];
      puVar22[0x1a] = puVar27[0x1a];
      puVar22[0x1b] = uVar1;
      puVar22[0x1c] = uVar2;
      puVar22[0x1d] = uVar3;
      *(undefined8 *)(puVar22 + 0x1e) = *(undefined8 *)(puVar27 + 0x1e);
      uVar1 = puVar27[0x21];
      uVar2 = puVar27[0x22];
      uVar3 = puVar27[0x23];
      puVar22[0x20] = puVar27[0x20];
      puVar22[0x21] = uVar1;
      puVar22[0x22] = uVar2;
      puVar22[0x23] = uVar3;
      *(undefined8 *)(puVar22 + 0x24) = *(undefined8 *)(puVar27 + 0x24);
      *(undefined1 *)(puVar22 + 0x26) = *(undefined1 *)(puVar27 + 0x26);
      *(undefined1 *)((int)puVar22 + 0x99) = *(undefined1 *)((int)puVar27 + 0x99);
      *(undefined1 *)((int)puVar22 + 0x9a) = *(undefined1 *)((int)puVar27 + 0x9a);
      puVar22[0x27] = puVar27[0x27];
      puVar22[0x28] = puVar27[0x28];
      puVar22[0x29] = puVar27[0x29];
      puVar22[0x2a] = puVar27[0x2a];
      *(undefined8 *)(puVar22 + 0x2b) = *(undefined8 *)(puVar27 + 0x2b);
      puVar22[0x2d] = puVar27[0x2d];
      puVar22[0x2e] = puVar27[0x2e];
      puVar22[0x2f] = puVar27[0x2f];
      util__Darray_L_util__Str_L_char_G___G___Darray_L_util__Str_L_char_G___G_
                ((Darray_L_util__Str_L_char_G___G_ *)(puVar22 + 0x30),
                 (Darray_L_class_util__Str_L_char_G___G_ *)(puVar27 + 0x30));
      puVar22[0x34] = puVar27[0x34];
      puVar22[0x35] = puVar27[0x35];
      util__Darray_L_Body__RadialImpulse_G___Darray_L_Body__RadialImpulse_G_
                ((Darray_L_Body__RadialImpulse_G_ *)(puVar22 + 0x36),
                 (Darray_L_struct_Body__RadialImpulse_G_ *)(puVar27 + 0x36));
      puVar22[0x3a] = puVar27[0x3a];
      puVar22[0x3b] = puVar27[0x3b];
      in_stack_fffff868 = (Darray_L_struct_Body__RadialImpulse_G_ *)(puVar27 + 0x3c);
      in_stack_fffff864 = (_func___cdecl_bool_void_ptr *)0x651d23;
      util__Darray_L_Body__RadialImpulse_G___Darray_L_Body__RadialImpulse_G_
                ((Darray_L_Body__RadialImpulse_G_ *)(puVar22 + 0x3c),in_stack_fffff868);
      puVar22[0x40] = puVar27[0x40];
      puVar22[0x41] = puVar27[0x41];
      puVar22[0x42] = puVar27[0x42];
      puVar22[0x43] = puVar27[0x43];
      iVar28 = (int)(uintptr_t)util__Color__Color(&local_160,Preset__Green,1.0);
      local_ac = (void *)0x0;
      local_a8 = (_func___cdecl_Color_void_ptr *)0x0;
      local_a4 = &vftable_5;
      util__Str_char___Str_char(&local_a0,(Str_L_char_G_ *)(iVar28 + 4));
      fStack_94 = *(float *)(iVar28 + 0x10);
      fStack_90 = *(float *)(iVar28 + 0x14);
      fStack_8c = *(float *)(iVar28 + 0x18);
      fStack_88 = *(float *)(iVar28 + 0x1c);
      local_a4 = &vftable_59;
      *(uint32_t *)&local_18 = (uint32_t)(uintptr_t)((void *)0x0);
      SStack_14.Data = (char *)0x0;
      SStack_14.Capacity = 0;
      SStack_14.Length = 200;
      local_28 = fStack_90;
      *(uint32_t *)&local_24 = fStack_94;
      local_20 = (undefined4 *)(uintptr_t)(*(undefined4 *)&(fStack_8c));
      local_8 = (UIWidget *)(uintptr_t)*(undefined4 *)&((fStack_88));
      pUVar29 = (UIAttributes *)UIAttributes__UIAttributes(&local_678,param_1);
      uStack_40 = 0x3ff0000000000000;
      uStack_38 = 0;
      local_50.Length = 0;
      (pUVar29->DesiredSize).Getter.Callee = local_18;
      (pUVar29->DesiredSize).Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_14.Data;
      (pUVar29->DesiredSize).Value.X = SStack_14.Capacity;
      (pUVar29->DesiredSize).Value.Y = SStack_14.Length;
      pcStack_44 = (code *)0x0;
      local_5c = local_ac;
      (pUVar29->FillProportion).Getter.Callee = (void *)0x0;
      (pUVar29->FillProportion).Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0
      ;
      *(undefined4 *)&(pUVar29->FillProportion).Value.X = 0;
      *(undefined4 *)((int)&(pUVar29->FillProportion).Value.X + 4) = 0x3ff00000;
      *(uint32_t *)&local_58 = (uint32_t)(uintptr_t)(local_a8);
      (pUVar29->FillProportion).Value.Y = 0.0;
      local_54 = &vftable_5;
      util__Str_char___Str_char(&local_50,&local_a0);
      pcStack_44 = *(code *)&(local_24);
      (pUVar29->ForegroundColor).Data.Getter.Callee = local_5c;
      (pUVar29->ForegroundColor).Data.Getter.CallbackFunction = local_58;
      uStack_40 = CONCAT44(local_20,local_28);
      local_54 = &vftable_59;
      (*(uint40_t*)&(uStack_38)) = CONCAT14(1,local_8);
      util__Str_char___operator__o8
                ((Str_L_char_G_ *)&(pUVar29->ForegroundColor).Data.Value._pad_0x4_1,&local_50);
      (pUVar29->ForegroundColor).Data.Value.Hue_degrees = local_24;
      (pUVar29->ForegroundColor).Data.Value.Saturation = local_28;
      (pUVar29->ForegroundColor).Data.Value.Value = (double)(uintptr_t)((float)(int)(uintptr_t)(local_20));
      (pUVar29->ForegroundColor).Data.Value.Alpha = (double)(uintptr_t)((float)(int)(uintptr_t)(local_8));
      (pUVar29->ForegroundColor).IsValidData = true;
      if (local_50.Data != (char *)0x0) {
        port_op_delete(local_50.Data);
      }
      if (local_a0.Data != (char *)0x0) {
        port_op_delete(local_a0.Data);
      }
      UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff724,pUVar29);
      local_8 = (UIWidget *)LineGraph__LineGraph(local_60);
      bVar20 = true;
      bVar19 = true;
      bVar18 = true;
      bVar17 = true;
      bVar16 = true;
      bVar15 = true;
      bVar13 = true;
      bVar12 = true;
      bVar11 = true;
      bVar10 = true;
      bVar9 = true;
      bVar8 = true;
      bVar7 = true;
    }
    local_bc._pad_0x0_0 = (int)&vftable_48;
    bVar21 = true;
    bVar14 = true;
    local_bc.Data = (SharedPtr_L_UIWidget_G_ *)0x0;
    local_bc.Size = 0;
    local_bc.Capacity = 0;
    pfVar30 = (float *)LayoutAttributes__LayoutAttributes(&local_190);
    *(undefined1 *)(pfVar30 + 0xb) = 1;
    pUVar29 = (UIAttributes *)UIAttributes__UIAttributes(&local_530,param_1);
    local_50.Length = 0;
    uStack_40 = 0x3ff0000000000000;
    uStack_38 = 0x3ff0000000000000;
    pcStack_44 = (code *)0x0;
    (pUVar29->FillProportion).Getter.Callee = (void *)0x0;
    (pUVar29->FillProportion).Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0;
    *(undefined4 *)&(pUVar29->FillProportion).Value.X = 0;
    *(undefined4 *)((int)&(pUVar29->FillProportion).Value.X + 4) = 0x3ff00000;
    (pUVar29->FillProportion).Value.Y = 1.0;
    pUVar23 = local_2c;
    pDVar31 = (Data *)(uintptr_t)(UILayout__Data__Add((Data *)&local_bc,local_8));
    pDVar31 = (Data *)(uintptr_t)(UILayout__Data__Add(pDVar31,pUVar23));
    fVar50 = *pfVar30;
    fVar40 = pfVar30[1];
    pvVar41 = *(void **)&(pfVar30[2]);
    p_Var42 = *(_func___cdecl_Color_void_ptr *)&(pfVar30[3]);
    fVar43 = pfVar30[4];
    fVar44 = pfVar30[5];
    fVar45 = pfVar30[6];
    fVar46 = pfVar30[7];
    fVar47 = pfVar30[8];
    fVar48 = pfVar30[9];
    fVar49 = pfVar30[10];
    fVar51 = pfVar30[0xb];
    iStack_808 = 0x652003;
    UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff800,pUVar29);
    UVar4.Enabled.Getter.Callee = in_stack_fffff82c;
*(uint32_t *)&auVar32 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff800) + 4)));
*(uint32_t *)&auVar33 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff800) + 32)));
    UVar4.Parent = (Manager *)(*(uint32_t*)&(in_stack_fffff800));
    UVar4.Tag.Data = (char *)(*(uint32_t*)&(auVar32));
    UVar4.Tag.Capacity = (*(uint32_t*)((char*)&(auVar32)+4));
    UVar4.Tag.Length = (*(uint32_t*)((char*)&(auVar32)+8));
    uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff800) + 16)),0);
    uVar35 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff800) + 16)),8);
    UVar4.Location.Getter.Callee = (void *)(int)uVar34;
    UVar4.Location.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar4.Location.Value.X = (int)uVar35;
    UVar4.Location.Value.Y = (int)((ulonglong)uVar35 >> 0x20);
    UVar4.Visible.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar33));
    UVar4.Visible.Getter.CallbackFunction =
         (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar33)) >> 0x20);
    UVar4.Visible.Value = (bool)auVar33[8];
    (*(uint24_t *)((char *)&(UVar4.Visible) + 9)) = (*(uint24_t*)((char*)&(auVar33)+9));
    UVar4.Enabled.Getter.CallbackFunction = in_stack_fffff830;
    UVar4.Enabled.Value = (bool)in_stack_fffff834[0];
    (*(uint24_t *)((char *)&(UVar4.Enabled) + 9)) = (*(uint24_t*)((char*)&(in_stack_fffff834)+1));
    uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff834) + 4)),0);
    uVar35 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff834) + 4)),8);
    UVar4.DesiredSize.Getter.Callee = (void *)(int)uVar34;
    UVar4.DesiredSize.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar4.DesiredSize.Value.X = (int)uVar35;
    UVar4.DesiredSize.Value.Y = (int)((ulonglong)uVar35 >> 0x20);
    uVar34 = SUB248((*(uint32_t *)((char *)&(in_stack_fffff834) + 20)),0);
*(uint32_t *)&auVar36 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffff834) + 20)),8));
    UVar4.FillProportion.Getter.Callee = (void *)(int)uVar34;
    UVar4.FillProportion.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar4.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar36));
    UVar4.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar36)+8));
    UVar4.HitTestShape.Getter.Callee = in_stack_fffff860;
    UVar4.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)in_stack_fffff864);
    UVar4.HitTestShape.Value = (int)in_stack_fffff868;
    (*(uint32_t *)((char *)&(UVar4) + 108)) = (uint32_t)(uintptr_t)(in_stack_fffff86c);
    LVar6.Margin.Getter.CallbackFunction = *(_func___cdecl_Vec2_L_int_G__void_ptr *)&(fVar40);
    LVar6.Margin.Getter.Callee = *(void **)&(fVar50);
    LVar6.Margin.Value.X = (int)pvVar41;
    LVar6.Margin.Value.Y = (int)p_Var42;
    LVar6.Padding.Getter.Callee = *(void **)&(fVar43);
    LVar6.Padding.Getter.CallbackFunction = *(_func___cdecl_int_void_ptr *)&(fVar44);
    LVar6.Padding.Value = (int)fVar45;
    LVar6.Background__HasBackground.Getter.Callee = *(void **)&(fVar46);
    LVar6.Background__HasBackground.Getter.CallbackFunction = *(_func___cdecl_bool_void_ptr *)&(fVar47);
    (*(uint32_t *)((char *)&(LVar6.Background__HasBackground) + 8)) = fVar48;
    (*(uint32_t *)((char *)&(LVar6) + 40)) = fVar49;
    (*(uint32_t *)((char *)&(LVar6) + 44)) = fVar51;
    pUVar23 = (UIWidget *)UIRowLayout__UIRowLayout(local_30,UVar4,LVar6,pDVar31);
  }
  if (bVar21) {
    UIAttributes___UIAttributes(&local_530);
  }
  if (bVar14) {
    Darray_L_util__SharedPtr_L_UIWidget_G___G___dtor(&local_bc);
  }
  if (bVar15) {
    UIAttributes___UIAttributes(&local_678);
  }
  if ((bVar16) &&
     (local_160._pad_0x0_0 = (int)&vftable_5,
     (void *)local_160._pad_0x4_1 != (void *)0x0)) {
    port_op_delete((void *)local_160._pad_0x4_1);
    local_160._pad_0x4_1 = 0;
  }
  if (bVar17) {
    LineGraph__Args___Args(local_3e8);
  }
  if (bVar18) {
    if (local_104 != (void *)0x0) {
      port_op_delete(local_104);
      local_104 = (void *)0x0;
    }
    if (local_110[0] != (void *)0x0) {
      port_op_delete(local_110[0]);
      local_110[0] = (void *)0x0;
    }
  }
  if ((bVar19) && (local_6c.Data != (char *)0x0)) {
    port_op_delete(local_6c.Data);
    local_6c.Data = (char *)0x0;
  }
  if (bVar20) {
    if (local_11c != (void *)0x0) {
      port_op_delete(local_11c);
      local_11c = (void *)0x0;
    }
    if (local_128[0] != (void *)0x0) {
      port_op_delete(local_128[0]);
      local_128[0] = (void *)0x0;
    }
  }
  if (bVar8) {
    if (local_134 != (void *)0x0) {
      port_op_delete(local_134);
      local_134 = (void *)0x0;
    }
    if (local_140[0] != (void *)0x0) {
      port_op_delete(local_140[0]);
      local_140[0] = (void *)0x0;
    }
  }
  if ((bVar9) && (local_84.Data != (char *)0x0)) {
    port_op_delete(local_84.Data);
    local_84.Data = (char *)0x0;
  }
  if ((bVar10) && (local_c8.Data != (char *)0x0)) {
    port_op_delete(local_c8.Data);
    local_c8.Data = (char *)0x0;
  }
  if ((bVar11) && (local_d4.Data != (char *)0x0)) {
    port_op_delete(local_d4.Data);
    local_d4.Data = (char *)0x0;
  }
  if ((bVar12) && (local_ec.Data != (char *)0x0)) {
    port_op_delete(local_ec.Data);
  }
  if ((bVar13) && (local_e0.Data != (char *)0x0)) {
    port_op_delete(local_e0.Data);
    local_e0.Data = (char *)0x0;
  }
  if ((local_f8.Data != (char *)0x0) && (bVar7)) {
    port_op_delete(local_f8.Data);
  }
  return pUVar23;
}

//==== 00652390 GetAccelChartXLimits_00652390 ====


/* public: struct util__Range_L_double_G_ __thiscall RailgunModule__GetAccelChartXLimits(void)const  */

Range_L_double_G_ * __thiscall
RailgunModule__GetAccelChartXLimits(RailgunModule *this,Range_L_double_G_ *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = *(double *)&(this->Barrel).CachedComposition;
  __return_storage_ptr__->Lower = 0.0;
  __return_storage_ptr__->Upper = dVar1;
  if (dVar1 < 0.0) {
    __return_storage_ptr__->Lower = dVar1;
    __return_storage_ptr__->Upper = 0.0;
  }
  return __return_storage_ptr__;
}





//==== 006523c0 GetAccelChartYLimits_006523c0 ====


/* public: struct util__Range_L_double_G_ __thiscall RailgunModule__GetAccelChartYLimits(void)const  */

Range_L_double_G_ * __thiscall
RailgunModule__GetAccelChartYLimits(RailgunModule *this,Range_L_double_G_ *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = GetChartAcceleration_m__s2(this,0.0);
  __return_storage_ptr__->Lower = 0.0;
  __return_storage_ptr__->Upper = dVar1;
  if (dVar1 < 0.0) {
    __return_storage_ptr__->Lower = dVar1;
    __return_storage_ptr__->Upper = 0.0;
  }
  return __return_storage_ptr__;
}





//==== 00652410 GetAccuracy_radians_00652410 ====


/* public: virtual double __thiscall RailgunModule__GetAccuracy_radians(void)const  */

double __thiscall RailgunModule__GetAccuracy_radians(RailgunModule *this)

{
  double dVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar6 = (this->Barrel).CachedPeakPressureLengthAlong_m;
  dVar5 = *(double *)&(this->Armature).Composition;
  dVar3 = dVar6 * 3.141592653589793 * dVar6;
  dVar1 = (this->Barrel).CachedMantletMass_kg;
  if (dVar5 <= 0.0) {
    dVar5 = (this->Barrel).CachedHeatEnergy_J + (this->Barrel).CachedPeakTemperatureJump_K.Data;
  }
  else {
    dVar4 = this->BarrelArmorThickness_m /
            *(double *)&(this->Barrel).CachedPeakTemperatureJump_K.IsValidData;
    dVar4 = dVar4 * dVar4;
    if (((dVar4 <= 0.0) && (1.0 <= dVar4)) || ((dVar4 <= 1.0 && (0.0 <= dVar4)))) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (!bVar2) {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\modules\\weaponmodules\\weaponsubmodules.cpp"
                      ,0x52,"IsSaturated(t)",(char *)0x0);
      DebugBreak();
      dVar5 = *(double *)&(this->Armature).Composition;
      dVar6 = (this->Barrel).CachedPeakPressureLengthAlong_m;
    }
    dVar5 = (1.0 - dVar4) * dVar5 + dVar4 * (this->Barrel).CachedPeakTemperatureJump_K.Data +
            (this->Barrel).CachedHeatEnergy_J;
  }
  dVar5 = Mechanics__AnnulusXAreaMomentOfInertia_m4(dVar6,dVar5);
  dVar6 = (this->Barrel).CachedHeatEnergy_J;
  dVar6 = dVar6 / ((dVar6 + (this->Barrel).CachedPeakTemperatureJump_K.Data) -
                  (this->Barrel).CachedPeakPressureLengthAlong_m);
  if (dVar6 <= 0.0) {
    dVar6 = 0.0;
  }
  if (1.0 <= dVar6) {
    dVar6 = 1.0;
  }
  dVar4 = Material__GetYoungsModulus_Pa
                    (*(Material **)((int)&(this->Barrel).CachedPeakPressure_Pa + 4));
  dVar7 = Material__GetYoungsModulus_Pa((Material *)&(this->Barrel).CachedMass_kg);
  dVar6 = Mechanics__GetDeflectionAngleOfAConcentratedLoadedCantileverBeam_radians
                    ((1.0 - dVar6) * dVar4 + dVar6 * dVar7,dVar5,
                     *(double *)&(this->Barrel).CachedPeakTemperatureJump_K.IsValidData,
                     dVar3 * dVar1,this->BarrelArmorThickness_m);
  return dVar6;
}





//==== 00652ac0 GetAmmoInfo_00652ac0 ====


/* public: virtual class util__Maybe_L_structAmmoInfo_G_ __thiscall
   RailgunModule__GetAmmoInfo(void)const  */

Str_L_char_G_ * __thiscall RailgunModule__GetAmmoInfo(RailgunModule *this)

{
  LocStr *this_00;
  Str_L_char_G_ *in_stack_00000004;
  void *apvStack_34 [3];
  void *pvStack_28;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
  util__Str_char___Str_char(&SStack_1c,"Weapon Railgun");
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_34,&SStack_1c,&SStack_10);
  util__LocStr__operator__o3(this_00);
  MassProjectileSubModule__GetAmmoInfo
            ((MassProjectileSubModule *)&(this->Armature).CachedMassStartsOutBeforeBarrel,
             in_stack_00000004);
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
  return in_stack_00000004;
}





//==== 00652b80 GetArcEnergy_J_Clear ====

/* public: void __thiscall RailgunModule__GetArcEnergy_J_Clear(void)const  */

void __thiscall RailgunModule__GetArcEnergy_J_Clear(RailgunModule *this)

{
  *(undefined1 *)&(this->Rails)._pad_0x0_0 = 0;
  this->PowerConsumption_W = 0.0;
  return;
}

//==== 00652ba0 GetArmorCarvingRadius_m_00652ba0 ====


/* public: virtual class util__Maybe_L_double_G_ __thiscall
   RailgunModule__GetArmorCarvingRadius_m(void)const  */

Maybe_L_double_G_ * __thiscall
RailgunModule__GetArmorCarvingRadius_m(RailgunModule *this,Maybe_L_double_G_ *__return_storage_ptr__)

{
  double dVar1;
  
  if ((char)((this->TurretModel).Pointer == '\0')){
    dVar1 = BarrelArmorSubModule__GetArmorRadius_m
                      ((BarrelArmorSubModule *)&(this->Barrel).CachedSize_m);
  }
  else {
    if ((char)((this->TurretModel).Pointer == '\0')){
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar1 = TurretSubModule__GetOuterRadius_m((TurretSubModule *)&(this->Turret).Data.field3_0x3);
  }
  __return_storage_ptr__->Data = dVar1;
  __return_storage_ptr__->IsValidData = true;
  return __return_storage_ptr__;
}





//==== 00652c10 GetBarrelCount_00652c10 ====


/* public: int __thiscall RailgunModule__GetBarrelCount(void)const  */

int __thiscall RailgunModule__GetBarrelCount(RailgunModule *this)

{
  if ((char)((this->TurretModel).Pointer != '\0')){
    return (int)((this->Turret).Data.field0_0x0);
  }
  return 1;
}





//==== 00652c30 GetBarrelMass_kg_00652c30 ====


/* public: double __thiscall RailsSubModule__GetBarrelMass_kg(void)const  */

double __thiscall RailsSubModule__GetBarrelMass_kg(RailsSubModule *this)

{
  bool bVar1;
  Material *pMVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dStack_1c;
  double dStack_14;
  double dStack_c;
  
  dVar4 = this->CachedBoreRadius_m;
  dVar3 = this->Thickness_m + dVar4;
  dStack_14 = dVar3 * 3.141592653589793 * dVar3 - dVar4 * 3.141592653589793 * dVar4;
  dVar4 = dStack_14 * 0.5555555555555556 * 0.5;
  dStack_1c = dVar4 + dVar4 + dStack_14 * 0.4444444444444444;
  dStack_c = 1e-08;
  bVar1 = util__Equals_double(&dStack_1c,&dStack_14,&dStack_c);
  if (!bVar1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\modules\\weaponmodules\\railgunmodules.cpp"
                    ,0x32,
                    "Equals(GetSupportsArea_m2() + GetRailArea_m2() * 2, AnnulusArea(CachedBoreRadius_m, GetOuterRadius_m()))"
                    ,(char *)0x0);
    DebugBreak();
  }
  dVar4 = this->CachedBoreRadius_m;
  dVar3 = this->Thickness_m;
  if (((dVar3 + dVar4) * 3.141592653589793 * (dVar3 + dVar4) - dVar4 * 3.141592653589793 * dVar4) *
      0.5555555555555556 * 0.5 <= 0.0) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\modules\\weaponmodules\\railgunmodules.cpp"
                    ,0x25,"GetRailArea_m2() > 0",(char *)0x0);
    DebugBreak();
    dVar4 = this->CachedBoreRadius_m;
    dVar3 = this->Thickness_m;
  }
  dVar7 = this->Length_m;
  pMVar2 = this->Composition;
  dVar6 = (dVar3 + dVar4) * 3.141592653589793 * (dVar3 + dVar4) - dVar4 * 3.141592653589793 * dVar4;
  dVar5 = dVar6 * 0.5555555555555556 * 0.5;
  dStack_1c = (dVar5 + dVar5) * dVar7 * pMVar2->Density_kg__m3;
  if (dVar6 * 0.4444444444444444 <= 0.0) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\modules\\weaponmodules\\railgunmodules.cpp"
                    ,0x2b,"GetSupportsArea_m2() > 0",(char *)0x0);
    DebugBreak();
    dVar4 = this->CachedBoreRadius_m;
    dVar3 = this->Thickness_m;
    dVar7 = this->Length_m;
    pMVar2 = this->Composition;
  }
  return ((dVar4 + dVar3) * 3.141592653589793 * (dVar4 + dVar3) - dVar4 * 3.141592653589793 * dVar4)
         * 0.4444444444444444 * dVar7 * pMVar2->Density_kg__m3 + dStack_1c;
}





//==== 00652e30 GetBothRailsEnergy_J ====

/* public: double __thiscall RailgunModule__GetBothRailsEnergy_J(void)const  */

double __thiscall RailgunModule__GetBothRailsEnergy_J(RailgunModule *this)

{
  Maybe_L_double_G_ *pMVar1;
  float10 fVar2;
  double dVar3;
  Maybe_L_double_G_ local_24;
  double local_14;
  double local_c;
  
  local_c = GetInductance_H__m(this);
  if (local_c <= 0.0) {
    return 0.0;
  }
  fVar2 = (float10)(**(code **)(this->_pad_0x0_0 + 0x154))();
  dVar3 = (double)(fVar2 * (float10)1000.0);
  local_c = dVar3 * dVar3 * dVar3 *
            *(double *)&(this->Barrel).CachedComposition * 1.2566370614359173e-06;
  dVar3 = Material__GetConductivity_S__m((Material *)(this->Barrel)._pad_0x0_0);
  *(uint32_t *)&local_14 = local_c / (dVar3 * 3.141592653589793);
  pMVar1 = util__Sqrt(&local_24,&local_14);
  if (pMVar1->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  *(uint32_t *)&local_14 = pMVar1->Data;
  dVar3 = MassProjectileSubModule__GetExitMass_kg
                    ((MassProjectileSubModule *)&(this->Armature).CachedMassStartsOutBeforeBarrel);
  *(uint32_t *)&local_14 = dVar3 * local_14 * 2.1333333333333333;
  dVar3 = GetInductance_H__m(this);
  (uint32_t)(local_14 = local_14 / (dVar3 * *(double *)&(this->Barrel)._pad_0x8_2));
  if ((!NAN(local_14)) && ((local_14 == 0.0 || (!NAN(local_14 / local_14))))) {
    return local_14;
  }
  return 0.0;
}

//==== 00652f70 GetCenterExtrusionOffset_m_00652f70 ====


/* public: virtual double __thiscall RailgunModule__GetCenterExtrusionOffset_m(void)const  */

double __thiscall RailgunModule__GetCenterExtrusionOffset_m(RailgunModule *this)

{
  double dVar1;
  
  if ((char)((this->TurretModel).Pointer != '\0')){
    if ((char)((this->TurretModel).Pointer == '\0')){
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar1 = TurretSubModule__GetExtruderLength_m((TurretSubModule *)&(this->Turret).Data.field3_0x3)
    ;
    return dVar1;
  }
  return 0.0;
}





//==== 00652fd0 GetChargingPower_W_00652fd0 ====


/* public: virtual double __thiscall RailgunModule__GetChargingPower_W(void)const  */

double __thiscall RailgunModule__GetChargingPower_W(RailgunModule *this)

{
  if ((char)(*(int *)&((this->Turret).Data) != 0)){
    return (this->Rails).Thickness_m;
  }
  return 0.0;
}





//==== 00653010 GetChargingTime_s_00653010 ====

/* public: virtual double __thiscall RailgunModule__GetChargingTime_s(void)const  */

double __thiscall RailgunModule__GetChargingTime_s(RailgunModule *this)

{
  double dVar1;
  
  if ((char)(*(int *)&((this->Turret).Data) != 0)){
    if ((char)(*(int *)&((this->Turret).Data) == 0)){
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar1 = CapacitorSubModule__GetChargeTime_s
                      ((CapacitorSubModule *)&(this->Capacitor).Data._pad_0x30_12);
    return dVar1;
  }
  return 0.0;
}

//==== 00653070 GetChartAcceleration_m__s2_00653070 ====


/* public: double __thiscall RailgunModule__GetChartAcceleration_m__s2(double)const  */

double __thiscall RailgunModule__GetChartAcceleration_m__s2(RailgunModule *this,double param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  
  dVar4 = param_1 / (*(double *)&(this->Barrel).CachedComposition / 500.0);
  iVar1 = (int)dVar4;
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  iVar2 = 499;
  if (iVar1 < 499) {
    iVar2 = iVar1;
  }
  iVar1 = iVar2 + 1;
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  iVar3 = 499;
  if (iVar1 < 499) {
    iVar3 = iVar1;
  }
  dVar4 = dVar4 - (double)iVar2;
  if ((iVar3 < 0) || (499 < iVar3)) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\sarray.inl",0x35,
                    "Index >= 0 && Index < Size",(char *)0x0);
    DebugBreak();
  }
  if ((iVar2 < 0) || (499 < iVar2)) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\sarray.inl",0x35,
                    "Index >= 0 && Index < Size",(char *)0x0);
    DebugBreak();
  }
  return (1.0 - dVar4) * (this->ChartAcceleration_m__s).Data[iVar2 + 0x16] +
         (this->ChartAcceleration_m__s).Data[iVar3 + 0x16] * dVar4;
}





//==== 00653160 GetClassID_00653160 ====


/* public: virtual unsigned long __thiscall RailgunModule__GetClassID(void)const  */

ulong __thiscall RailgunModule__GetClassID(RailgunModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_d1e67541__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_d1e67541__thread_safe_static_guard_0__);
    if ( cde_l2_d1e67541__thread_safe_static_guard_0__ == -1) {
       cde_l2_451fe096_ID =
           util__GetHash("RailgunModule");
      _Init_thread_footer(& cde_l2_d1e67541__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_451fe096_ID;
}





//==== 006531c0 GetComposition_006531c0 ====


/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   RailgunModule__GetComposition(void)const  */

Darray_L_struct_MaterialConstituent_G_ * __thiscall RailgunModule__GetComposition(RailgunModule *this,Darray_L_struct_MaterialConstituent_G_ * __return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Darray_L_struct_MaterialConstituent_G_ *pDVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;

  undefined **ppuStack_1c;
  void *pvStack_18;
  double *pdStack_c;
  int iStack_8;
  
  *(undefined4 *)__return_storage_ptr__ = 0;
  *(undefined4 *)(__return_storage_ptr__ + 4) = 0;
  *(undefined4 *)(__return_storage_ptr__ + 8) = 0;
  *(undefined4 *)(__return_storage_ptr__ + 0xc) = 0;
  Module__GetComposition((Module *)this,(Darray_L_MaterialComposition_G_ *)__return_storage_ptr__);
  if ((char)((this->TurretModel).Pointer == '\0')){
    iVar8 = 1;
  }
  else {
    iVar8 = *(int *)&(this->Turret).Data.field0_0x0;
  }
  iVar8 = iVar8 + -1;
  if (0 < iVar8) {
    pdStack_c = &(this->Rails).Length_m;
    do {
      pDVar5 = (Darray_L_struct_MaterialConstituent_G_ *)
               (**(code **)(*(int *)pdStack_c + 0x68))(&ppuStack_1c);
      if (*(int *)(__return_storage_ptr__ + 8) == 0) {
        util__Darray_struct_MaterialConstituent___operator(__return_storage_ptr__,pDVar5);
      }
      else {
        iVar6 = (**(code **)(*(int *)pDVar5 + 0xc))();
        if (iVar6 != 0) {
          iVar6 = *(int *)(__return_storage_ptr__ + 8);
          iStack_8 = (**(code **)(*(int *)pDVar5 + 0xc))();
          iStack_8 = iStack_8 + *(int *)(__return_storage_ptr__ + 8);
          util__Darray_struct_MaterialConstituent___SetSize(__return_storage_ptr__,&iStack_8);
          util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                    ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)__return_storage_ptr__,
                     iVar6);
          puVar7 = *(undefined4 **)(pDVar5 + 4);
          puVar9 = (undefined4 *)(iVar6 * 0x10 + *(int *)(__return_storage_ptr__ + 4));
          if (puVar9 != (undefined4 *)
                        (*(int *)(__return_storage_ptr__ + 8) * 0x10 + *(int *)(__return_storage_ptr__ + 4)))
          {
            do {
              uVar1 = *puVar7;
              uVar2 = puVar7[1];
              uVar3 = puVar7[2];
              uVar4 = puVar7[3];
              puVar7 = puVar7 + 4;
              *puVar9 = uVar1;
              puVar9[1] = uVar2;
              puVar9[2] = uVar3;
              puVar9[3] = uVar4;
              puVar9 = puVar9 + 4;
            } while (puVar9 != (undefined4 *)
                               (*(int *)(__return_storage_ptr__ + 8) * 0x10 +
                               *(int *)(__return_storage_ptr__ + 4)));
          }
        }
      }
      ppuStack_1c = (undefined **)(&vftable_75);
      if (pvStack_18 != (void *)0x0) {
        port_op_delete(pvStack_18);
      }
      iVar8 = iVar8 + -1;
      pvStack_18 = (void *)0x0;
      ppuStack_1c = (undefined **)(&vftable);
    } while (iVar8 != 0);
  }
  return __return_storage_ptr__;
}





//==== 006532c0 GetComposition_006532c0 ====


/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   RailsSubModule__GetComposition(void)const  */

Darray_L_struct_MaterialConstituent_G_ * __thiscall RailsSubModule__GetComposition(RailsSubModule *this)

{
  undefined8 stack0x00000004;
  Material *pMVar1;
  Darray_L_struct_MaterialConstituent_G_ *this_00;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  Darray_L_struct_MaterialConstituent_G_ *in_stack_00000004;
  undefined4 uStack_20;
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
  *(undefined4 *)(in_stack_00000004 + 0xc) = 1;
  puVar3 = (undefined4 *)port_op_new(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 0;
    *(undefined8 *)(puVar3 + 2) = 0;
  }
  iVar5 = 0;
  *(undefined4 **)(in_stack_00000004 + 4) = puVar3;
  if (0 < *(int *)(in_stack_00000004 + 0xc)) {
    iVar4 = 0;
    do {
      iVar4 = iVar4 + 0x10;
      iVar5 = iVar5 + 1;
      puVar3 = (undefined4 *)(*(int *)(in_stack_00000004 + 4) + -0x10 + iVar4);
      *puVar3 = 0;
      puVar3[1] = uStack_10;
      puVar3[2] = 0;
      puVar3[3] = 0;
    } while (iVar5 < *(int *)(in_stack_00000004 + 0xc));
  }
  dVar6 = GetBarrelMass_kg(this);
  pMVar1 = this->Composition;
  iVar5 = *(int *)(in_stack_00000004 + 8);
  in_stack_00000004 = (Darray_L_struct_MaterialConstituent_G_ *)(iVar5 + 1);
  util__Darray_struct_MaterialConstituent___SetSize(this_00,(int *)&stack0x00000004);
  bVar2 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                    ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar5);
  if (bVar2) {
    uStack_1c = SUB84(dVar6,0);
    uStack_18 = (undefined4)((ulonglong)dVar6 >> 0x20);
    puVar3 = (undefined4 *)(*(int *)(this_00 + 4) + -0x10 + *(int *)(this_00 + 8) * 0x10);
    *puVar3 = (undefined4)(uintptr_t)(pMVar1);
    puVar3[1] = uStack_20;
    puVar3[2] = uStack_1c;
    puVar3[3] = uStack_18;
  }
  return this_00;
}





//==== 006533a0 GetCooldownTime_s_006533a0 ====


/* public: virtual double __thiscall RailgunModule__GetCooldownTime_s(void)const  */

double __thiscall RailgunModule__GetCooldownTime_s(RailgunModule *this)

{
  Cylinder_L_double_G_ *this_00;
  double dVar1;
  
  this_00 = &(this->Barrel).CachedSize_m;
  dVar1 = BarrelArmorSubModule__GetBarrelRadiantCooling_W((BarrelArmorSubModule *)this_00);
  if (0.0 < dVar1) {
    dVar1 = BarrelArmorSubModule__GetBarrelRadiantCooling_W((BarrelArmorSubModule *)this_00);
    return (this->Barrel).CachedMantletSize_m.Height / dVar1;
  }
  return 0.0;
}





//==== 006533b0 GetCubicBoundingBox_m_006533b0 ====


/* public: virtual struct util__AABB_L_structutil__Vec3_L_double_G__G_ __thiscall
   RailgunModule__GetCubicBoundingBox_m(void)const  */

undefined4 __thiscall RailgunModule__GetCubicBoundingBox_m(RailgunModule *this)

{
  int iVar1;
  bool bVar2;
  double dVar3;
  undefined4 in_stack_00000004;
  Cylinder_L_double_G_ CStack_74;
  Cylinder_L_double_G_ CStack_64;
  Cylinder_L_double_G_ CStack_54;
  Cylinder_L_double_G_ CStack_44;
  double dStack_34;
  bool bStack_2c;
  double dStack_24;
  double dStack_1c;
  double dStack_14;
  Cylinder_L_double_G_ *pCStack_c;
  Cylinder_L_double_G_ *pCStack_8;
  
  if ((char)((this->TurretModel).Pointer == '\0')){
    dStack_14 = 0.0;
  }
  else {
    dStack_1c = TurretSubModule__GetExtruderLength_m
                          ((TurretSubModule *)&(this->Turret).Data.field3_0x3);
    dStack_14 = dStack_1c;
  }
  if ((char)((this->TurretModel).Pointer == '\0')){
    dStack_1c = 0.0;
  }
  else {
    dStack_1c = TurretSubModule__GetObjectOffsetFromTurret_m
                          ((TurretSubModule *)&(this->Turret).Data.field3_0x3);
  }
  if ((char)(*(int *)&((this->Turret).Data) == 0)){
    pCStack_8 = &CStack_44;
    CStack_44.Radius = 0;
    (*(uint32_t *)((char *)&(CStack_44.Radius) + 4)) = 0;
    CStack_44.Height = 0;
    (*(uint32_t *)((char *)&(CStack_44.Height) + 4)) = 0;
  }
  else {
    pCStack_8 = CapacitorSubModule__GetTotalDimensions_m
                          ((CapacitorSubModule *)&(this->Capacitor).Data._pad_0x30_12,&CStack_64);
  }
  if (*(char *)((this->ChartAcceleration_m__s).Data + 0x11) == '\0') {
    pCStack_c = &CStack_54;
    CStack_54.Radius = 0;
    (*(uint32_t *)((char *)&(CStack_54.Radius) + 4)) = 0;
    CStack_54.Height = 0;
    (*(uint32_t *)((char *)&(CStack_54.Height) + 4)) = 0;
  }
  else {
    pCStack_c = AmmoBaySubModule__GetArmoredDimensions_m
                          ((AmmoBaySubModule *)&this->BarrelModel,&CStack_74);
  }
  bVar2 = *(char *)&(this->TurretModel).Pointer == '\0';
  if (bVar2) {
    dStack_34 = 0.0;
  }
  else {
    dStack_34 = TurretSubModule__GetOuterRadius_m
                          ((TurretSubModule *)&(this->Turret).Data.field3_0x3);
  }
  bStack_2c = !bVar2;
  dStack_24 = (this->Barrel).CachedBoreRadius_m + *(double *)&(this->Barrel)._pad_0x8_2 +
              (this->Barrel).CachedHeatEnergy_J;
  if ((char)((this->TurretModel).Pointer == '\0')){
    iVar1 = 1;
  }
  else {
    iVar1 = *(int *)&(this->Turret).Data.field0_0x0;
  }
  dVar3 = util__GetCirclePackingInACircleRadius_double(iVar1);
  dStack_24 = dVar3 * dStack_24;
  TurretedGun__GetInitialBounds((undefined1 (*)[16])(in_stack_00000004),dStack_34,bStack_2c);
  return in_stack_00000004;
}





//==== 00653570 GetCurrentAtLengthAlong_A ====

/* public: double __thiscall RailgunModule__GetCurrentAtLengthAlong_A(double)const  */

double __thiscall RailgunModule__GetCurrentAtLengthAlong_A(RailgunModule *this,double param_1)

{
  double dVar1;
  Maybe_L_double_G_ *pMVar2;
  double dVar3;
  double dVar4;
  Maybe_L_double_G_ local_24;
  double local_14;
  double local_c;
  
  if ((char)(*(int *)&((this->Turret).Data) != 0)){
    local_14 = CapacitorSubModule__GetEffectiveVoltage_V
                         ((CapacitorSubModule *)&(this->Capacitor).Data._pad_0x30_12);
    dVar4 = GetMinResistance_Ohm(this);
    dVar1 = (this->Barrel).CachedBoreRadius_m;
    dVar3 = *(double *)&(this->Barrel)._pad_0x8_2 + dVar1;
    return local_14 /
           ((*(double *)((this->Barrel)._pad_0x0_0 + 0xb8) /
            ((dVar3 * 3.141592653589793 * dVar3 - dVar1 * 3.141592653589793 * dVar1) *
             0.5555555555555556 * 0.5)) * param_1 + dVar4);
  }
  *(uint32_t *)&local_14 = GetMinResistance_Ohm(this);
  dVar1 = (this->Barrel).CachedBoreRadius_m;
  dVar3 = *(double *)&(this->Barrel)._pad_0x8_2 + dVar1;
  local_c = (this->Rails).Thickness_m /
            ((*(double *)((this->Barrel)._pad_0x0_0 + 0xb8) /
             ((dVar3 * 3.141592653589793 * dVar3 - dVar1 * 3.141592653589793 * dVar1) *
              0.5555555555555556 * 0.5)) * param_1 + local_14);
  pMVar2 = util__Sqrt(&local_24,&local_c);
  if (pMVar2->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return pMVar2->Data;
}

//==== 00653930 GetEnergyNeededToFire_J_00653930 ====


/* public: virtual double __thiscall RailgunModule__GetEnergyNeededToFire_J(double)const  */

double __thiscall RailgunModule__GetEnergyNeededToFire_J(RailgunModule *this,double param_1)

{
  double dVar1;
  
  if ((char)(*(int *)&((this->Turret).Data) != 0)){
    return 0.0;
  }
  GetFiringCharacteristics_Memoize(this);
  if ((this->GetHeatGeneratedPerShot_J_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar1 = (this->GetHeatGeneratedPerShot_J_MemoizedValue).Data;
  if (param_1 <= dVar1) {
    dVar1 = param_1;
  }
  return dVar1 * (this->Rails).Thickness_m;
}





//==== 006539b0 GetFiringCharacteristics_Clear ====


/* public: void __thiscall RailgunModule__GetFiringCharacteristics_Clear(void)const  */

void __thiscall RailgunModule__GetFiringCharacteristics_Clear(RailgunModule *this)

{
  (this->GetHeatGeneratedPerShot_J_MemoizedValue).IsValidData = false;
  *(undefined4 *)&(this->GetArcEnergy_J_MemoizedValue).IsValidData = 0;
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetArcEnergy_J_MemoizedValue)) + 0xc)) = 0;
  *(undefined4 *)&(this->GetHeatGeneratedPerShot_J_MemoizedValue).Data = 0;
  *(undefined4 *)((int)&(this->GetHeatGeneratedPerShot_J_MemoizedValue).Data + 4) = 0;
  return;
}





//==== 006539d0 GetFiringCharacteristics_Memoize ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall RailgunModule__GetFiringCharacteristics_Memoize(void)const  */

void __thiscall RailgunModule__GetFiringCharacteristics_Memoize(RailgunModule *this)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  int iVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  double *local_3c;
  double *pdStack_38;
  undefined8 uStack_34;
  double local_2c;
  double local_24;
  double local_1c;
  double local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((this->GetHeatGeneratedPerShot_J_MemoizedValue).IsValidData == false) {
    iVar1 = *(int *)&(this->GetFiringCharacteristics_MemoizedValue).Data.FiringTime_s;
    local_c = iVar1 + 1;
    util__Darray_L_util__tuple2_L_Order__Type_Cint_G___G___SetSize
              ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)
               &this->GetFiringCharacteristics_MemoizedValue,&local_c);
    bVar3 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &this->GetFiringCharacteristics_MemoizedValue,iVar1);
    if (bVar3) {
      iVar1 = *(int *)((int)&(this->GetFiringCharacteristics_MemoizedValue).Data.Velocity_km__s + 4)
      ;
      iVar2 = *(int *)&(this->GetFiringCharacteristics_MemoizedValue).Data.FiringTime_s;
      *(code **)(iVar1 + -8 + iVar2 * 8) = (long long int (*)())(GetFiringCharacteristics_Clear);
      *(undefined4 *)(iVar1 + -4 + iVar2 * 8) = 0;
    }
    *(uint32_t *)&local_1c = GetMinResistance_Ohm(this);
    dVar5 = (this->Barrel).CachedBoreRadius_m;
    dVar4 = *(double *)&(this->Barrel)._pad_0x8_2 + dVar5;
    local_24 = *(double *)((this->Barrel)._pad_0x0_0 + 0xb8) /
               ((dVar4 * 3.141592653589793 * dVar4 - dVar5 * 3.141592653589793 * dVar5) *
                0.5555555555555556 * 0.5);
    dVar5 = LinearMotorSubModule__GetLauncherVelocity_km__s
                      ((LinearMotorSubModule *)&(this->Turret).Data.field8_0x8);
    uStack_4c = *(undefined8 *)&(this->Barrel).CachedComposition;
    *(uint32_t *)&local_14 = GetInductance_H__m(this);
    dVar4 = MassProjectileSubModule__GetExitMass_kg
                      ((MassProjectileSubModule *)&(this->Armature).CachedMassStartsOutBeforeBarrel)
    ;
    *(uint32_t *)&local_2c = local_14 / (dVar4 + dVar4);
    if ((char)(*(int *)&((this->Turret).Data) == 0)){
      *(uint32_t *)&local_3c = (uint32_t)(uintptr_t)(&local_1c);
      pdStack_38 = &local_24;
      uStack_34 = (double)CONCAT44(this,&local_2c);
      FUN_0064f5a0();
    }
    else {
      uStack_34 = *(double *)&(this->Barrel).CachedComposition /
                  (double)*(int *)&(this->Loader).CachedRoundMass_kg;
      if (uStack_34 <= 0.0) {
        util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\modules\\weaponmodules\\railgunmodules.cpp"
                        ,0x126,"SubLengths_m > 0",(char *)0x0);
        DebugBreak();
      }
      *(uint32_t *)&local_14 = 0.0;
      local_c = 1;
      FUN_0064f080(&local_54,uStack_4c,dVar5 * 1000.0,&local_c,&uStack_34,&local_14,&local_1c,
                   CONCAT44(this,&local_24),&local_2c,&local_14,&local_c,
                   (this->ChartAcceleration_m__s).Data + 0x15);
    }
    uStack_34 = (double)CONCAT71((*(uint56_t*)((char*)&(uStack_34)+1)),1);
    *(undefined4 *)&(this->GetArcEnergy_J_MemoizedValue).IsValidData = local_54;
    *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetArcEnergy_J_MemoizedValue)) + 0xc)) = uStack_50;
    *(undefined4 *)&(this->GetHeatGeneratedPerShot_J_MemoizedValue).Data = (undefined4)uStack_4c;
    *(undefined4 *)((int)&(this->GetHeatGeneratedPerShot_J_MemoizedValue).Data + 4) =
         (*(uint32_t*)((char*)&(uStack_4c)+4));
    *(double *)&(this->GetHeatGeneratedPerShot_J_MemoizedValue).IsValidData = uStack_34;
  }
  return;
}

//==== 00653c30 GetFiringVelocity_km__s_00653c30 ====


/* public: virtual double __thiscall RailgunModule__GetFiringVelocity_km__s(void)const  */

double __thiscall RailgunModule__GetFiringVelocity_km__s(RailgunModule *this)

{
  GetFiringCharacteristics_Memoize(this);
  if ((this->GetHeatGeneratedPerShot_J_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return (double)((this->GetArcEnergy_J_MemoizedValue).IsValidData);
}





//==== 00654130 GetHeatFromFire_J_00654130 ====

/* public: virtual double __thiscall RailgunModule__GetHeatFromFire_J(double)const  */

double __thiscall RailgunModule__GetHeatFromFire_J(RailgunModule *this,double param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  double dVar4;
  int local_18;
  int iStack_14;
  Material *pMStack_10;
  undefined4 uStack_c;
  int local_8;
  
  if ((char)((this->Rails).Composition == '\0')){
    iVar1 = *(int *)&(this->GetFiringCharacteristics_MemoizedValue).Data.FiringTime_s;
    local_8 = iVar1 + 1;
    util__Darray_L_util__tuple2_L_Order__Type_Cint_G___G___SetSize
              ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)
               &this->GetFiringCharacteristics_MemoizedValue,&local_8);
    bVar3 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &this->GetFiringCharacteristics_MemoizedValue,iVar1);
    if (bVar3) {
      iVar1 = *(int *)((int)&(this->GetFiringCharacteristics_MemoizedValue).Data.Velocity_km__s + 4)
      ;
      iVar2 = *(int *)&(this->GetFiringCharacteristics_MemoizedValue).Data.FiringTime_s;
      *(code **)(iVar1 + -8 + iVar2 * 8) = (long long int (*)())(GetHeatGeneratedPerShot_J_Clear);
      *(undefined4 *)(iVar1 + -4 + iVar2 * 8) = 0;
    }
    dVar4 = GetBothRailsEnergy_J(this);
    pMStack_10 = (Material *)CONCAT31((*(uint24_t*)((char*)&(pMStack_10)+1)),1);
    *(uint32_t *)&local_18 = SUB84(dVar4,0);
    iStack_14 = (int)((ulonglong)dVar4 >> 0x20);
    (this->Rails)._pad_0x8_2 = local_18;
    *(undefined4 *)&((this->Rails)._pad_0xc_3) = (undefined4)(uintptr_t)(iStack_14);
    (this->Rails).Composition = pMStack_10;
    *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->Rails)) + 0x14)) = uStack_c;
    if ((char)((this->Rails).Composition == '\0')){
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  return (double)((this->Rails)._pad_0x8_2);
}

//==== 006541e0 GetIcon_006541e0 ====


/* public: virtual void (__cdecl*__thiscall RailgunModule__GetIcon(void)const )(void) */

_func_void * __thiscall RailgunModule__GetIcon(RailgunModule *this)

{
  return (_func_void *)(uintptr_t) Icons__Railgun;
}





//==== 006541f0 GetInductance_H__m ====

/* public: double __thiscall RailgunModule__GetInductance_H__m(void)const  */

double __thiscall RailgunModule__GetInductance_H__m(RailgunModule *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double local_14;
  double local_c;
  
  if ((char)(*(int *)&((this->Turret).Data) == 0)){
    local_c = GetMinResistance_Ohm(this);
    dVar1 = MassProjectileSubModule__GetExitMass_kg
                      ((MassProjectileSubModule *)&(this->Armature).CachedMassStartsOutBeforeBarrel)
    ;
    local_c = dVar1 * 4.0 * local_c * local_c * local_c;
    (uint32_t)(local_14 = local_c / (*(double *)&(this->Barrel).CachedComposition * (this->Rails).Thickness_m));
    local_c = util__Cbrt(&local_14);
  }
  else {
    local_c = GetMinResistance_Ohm(this);
    local_c = local_c * local_c;
    if ((char)(*(int *)&((this->Turret).Data) == 0)){
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar3 = CapacitorSubModule__GetCapacitance_F
                      ((CapacitorSubModule *)&(this->Capacitor).Data._pad_0x30_12);
    dVar1 = *(double *)&(this->Barrel).CachedComposition;
    local_c = (dVar3 * local_c) / (dVar1 + dVar1);
  }
  dVar1 = (this->Barrel).CachedBoreRadius_m;
  dVar1 = dVar1 + dVar1;
  *(uint32_t *)&local_14 = 1.0 / (dVar1 * 100.0);
  dVar1 = *(double *)&(this->Barrel)._pad_0x8_2 / dVar1;
  libm_sse2_log_precise(0.0);
  dVar2 = dVar1 * dVar1;
  dVar3 = dVar1 * local_14;
  dVar3 = (((((((0.28119 - dVar1 * 0.088383) + local_14 * 0.540073 + dVar2 * 0.00476755) -
              local_14 * local_14 * 1.9731854) - dVar3 * 0.048983) + dVar2 * dVar1 * 0.0028816 +
            local_14 * local_14 * local_14 * 2.780857) - dVar3 * dVar3 * 0.012536) -
          dVar2 * local_14 * 0.0199827) * 1e-06;
  dVar1 = 0.0;
  if (0.0 <= dVar3) {
    dVar1 = dVar3;
  }
  dVar1 = -(dVar1 / local_c);
  libm_sse2_exp_precise(0.0);
  return (1.0 - dVar1) * local_c;
}

//==== 00654400 GetInternalAmmo_00654400 ====


/* public: virtual int __thiscall RailgunModule__GetInternalAmmo(void)const  */

int __thiscall RailgunModule__GetInternalAmmo(RailgunModule *this)

{
  if (*(char *)((this->ChartAcceleration_m__s).Data + 0x11) != '\0') {
    return *(int *)(this->ChartAcceleration_m__s).Data;
  }
  return 0;
}





//==== 00654420 GetMaxDeviationAngle_radians_00654420 ====


/* public: virtual double __thiscall RailgunModule__GetMaxDeviationAngle_radians(void)const  */

double __thiscall RailgunModule__GetMaxDeviationAngle_radians(RailgunModule *this)

{
  double dVar1;
  
  if ((char)((this->TurretModel).Pointer != '\0')){
    if ((char)((this->TurretModel).Pointer == '\0')){
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar1 = TurretSubModule__GetMaxDeviationAngle_radians
                      ((TurretSubModule *)&(this->Turret).Data.field3_0x3);
    return dVar1;
  }
  return 0.0;
}





//==== 006545e0 GetMinResistance_Ohm ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: double __thiscall RailgunModule__GetMinResistance_Ohm(void)const  */

double __thiscall RailgunModule__GetMinResistance_Ohm(RailgunModule *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  if (((this->Armature).CachedPropellantComposition)->RelativePermittivity <= 0.0) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\modules\\weaponmodules\\railgunmodules.cpp"
                    ,0xf8,"Armature.Composition->Resistivity_Ohm_m > 0",(char *)0x0);
    DebugBreak();
  }
  dVar7 = MassProjectileSubModule__GetMassLength_m
                    ((MassProjectileSubModule *)&(this->Armature).CachedMassStartsOutBeforeBarrel);
  dVar5 = *(double *)&(this->Barrel)._pad_0x8_2;
  dVar4 = (this->Barrel).CachedBoreRadius_m;
  dVar3 = dVar5 + dVar4;
  dVar1 = (this->Armature).CachedPropellantMass_kg;
  dVar2 = *(double *)((this->Barrel)._pad_0x0_0 + 0xb8);
  dVar6 = (dVar1 + dVar1) * dVar7;
  dVar5 = (dVar5 * dVar2) / dVar6;
  dVar4 = (dVar2 * dVar7) /
          ((dVar3 * 3.141592653589793 * dVar3 - dVar4 * 3.141592653589793 * dVar4) *
           0.5555555555555556 * 0.5);
  if (dVar5 <= dVar4) {
    dVar5 = dVar4;
  }
  return dVar5 + (dVar1 * 3.141592653589793 * 0.5 *
                 ((this->Armature).CachedPropellantComposition)->RelativePermittivity) / dVar6 +
                 _DAT_0095f3a8;
}

//==== 006546f0 GetMinimumOverheatTime_s_006546f0 ====

/* public: virtual double __thiscall RailgunModule__GetMinimumOverheatTime_s(void)const  */

double __thiscall RailgunModule__GetMinimumOverheatTime_s(RailgunModule *this)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  float10 fVar6;
  double dVar7;
  int local_18;
  int iStack_14;
  undefined8 uStack_10;
  int local_8;
  
  if ((char)((this->TurretModel).Pointer == '\0')){
    local_8 = 1;
  }
  else {
    local_8 = *(int *)&(this->Turret).Data.field0_0x0;
  }
  if ((char)((this->Rails).Composition == '\0')){
    iVar1 = *(int *)&(this->GetFiringCharacteristics_MemoizedValue).Data.FiringTime_s;
    uStack_10 = (double)CONCAT44(iVar1 + 1,(Material *)uStack_10);
    util__Darray_L_util__tuple2_L_Order__Type_Cint_G___G___SetSize
              ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)
               &this->GetFiringCharacteristics_MemoizedValue,(int *)((int)&uStack_10 + 4));
    bVar5 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &this->GetFiringCharacteristics_MemoizedValue,iVar1);
    if (bVar5) {
      iVar1 = *(int *)((int)&(this->GetFiringCharacteristics_MemoizedValue).Data.Velocity_km__s + 4)
      ;
      iVar2 = *(int *)&(this->GetFiringCharacteristics_MemoizedValue).Data.FiringTime_s;
      *(code **)(iVar1 + -8 + iVar2 * 8) = (long long int (*)())(GetHeatGeneratedPerShot_J_Clear);
      *(undefined4 *)(iVar1 + -4 + iVar2 * 8) = 0;
    }
    dVar7 = GetBothRailsEnergy_J(this);
    uVar3 = uStack_10;
    uStack_10 = (double)CONCAT71((*(uint56_t*)((char*)&(uStack_10)+1)),1);
    uVar4 = uStack_10;
    *(uint32_t *)&local_18 = SUB84(dVar7,0);
    iStack_14 = (undefined4)((int)((ulonglong)dVar7 >> 0x20));
    (*(uint32_t*)((char*)&(uStack_10)+4)) = SUB84(uVar3,4);
    (this->Rails)._pad_0x8_2 = local_18;
    (this->Rails)._pad_0xc_3 = iStack_14;
    (this->Rails).Composition = (Material *)uStack_10;
    *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->Rails)) + 0x14)) = (*(uint32_t*)((char*)&(uStack_10)+4));
    uStack_10 = (double)uVar4;
    if ((char)((this->Rails).Composition == '\0')){
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  dVar7 = RailsSubModule__GetBarrelMass_kg((RailsSubModule *)&(this->Rails).Length_m);
  uStack_10 = (double)local_8;
  dVar7 = Material__GetEnergyBudgetRemaining_J
                    ((Material *)(this->Barrel)._pad_0x0_0,2.7,dVar7 * uStack_10);
  uStack_10 = dVar7 / *(double *)&(this->Rails)._pad_0x8_2;
  fVar6 = (float10)(**(code **)(this->_pad_0x0_0 + 0x1b8))();
  return (double)(fVar6 * (float10)uStack_10);
}

//==== 006548a0 GetPayload_006548a0 ====


/* public: virtual class CraftBlueprint * __thiscall RailgunModule__GetPayload(void)const  */

CraftBlueprint * __thiscall RailgunModule__GetPayload(RailgunModule *this)

{
  return *(CraftBlueprint **)((int)&(this->Armature).CachedPeakPressure_Pa + 4);
}





//==== 006548b0 GetPowerUsage_006548b0 ====


/* public: virtual class util__Darray_L_structPowerUsage_G_ __thiscall
   RailgunModule__GetPowerUsage(void)const  */

Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ * __thiscall
RailgunModule__GetPowerUsage(RailgunModule *this,Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ * __return_storage_ptr__)

{
  undefined8 stack0x00000004;
  int iVar1;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ *this_00;
  bool bVar2;
  LocStr *this_01;
  Str_L_char_G_ *pSVar3;

  Str_L_char_G_ SStack_60;
  double dStack_50;
  void *apvStack_48 [3];
  void *pvStack_3c;
  Str_L_char_G_ SStack_30;
  Str_L_char_G_ SStack_24;
  Str_L_char_G_ SStack_18;
  double dStack_c;
  
  this_00 = __return_storage_ptr__;
  *(undefined4 *)__return_storage_ptr__ = 0;
  *(undefined4 *)(__return_storage_ptr__ + 4) = 0;
  *(undefined4 *)(__return_storage_ptr__ + 8) = 0;
  *(undefined4 *)(__return_storage_ptr__ + 0xc) = 0;
  Module__GetPowerUsage((Module *)this,(Darray_L_PowerUsage_G_ *)__return_storage_ptr__);
  if ((char)(*(int *)&((this->Turret).Data) == 0)){
    util__Str_char___Str_char(&SStack_30,"PowerUse Rails");
    SStack_18.Data = (char *)0x0;
    SStack_18.Capacity = 0;
    SStack_18.Length = 0;
    this_01 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_48,&SStack_30,&SStack_18);
    pSVar3 = util__LocStr__operator__o3(this_01);
    util__Str_char___Str_char(&SStack_24,pSVar3);
    dStack_c = (this->Rails).Thickness_m;
    util__Str_char___Str_char(&SStack_60,&SStack_24);
    dStack_50 = dStack_c;
    if (SStack_24.Data != (char *)0x0) {
      port_op_delete(SStack_24.Data);
    }
    iVar1 = *(int *)(__return_storage_ptr__ + 8);
    __return_storage_ptr__ = (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ *)(iVar1 + 1);
    util__Darray_struct_util__tuple2_class_util__Str_char__double_____SetSize
              (this_00,(int *)&stack0x00000004);
    bVar2 = util__Darray_struct_PowerUsage___CheckSize((Darray_L_struct_PowerUsage_G_ *)this_00,iVar1);
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
  }
  return this_00;
}





//==== 00654a00 GetProjectileMinRadius_m_00654a00 ====


/* public: virtual double __thiscall RailgunModule__GetProjectileMinRadius_m(void)const  */

double __thiscall RailgunModule__GetProjectileMinRadius_m(RailgunModule *this)

{
  CraftBlueprint *this_00;
  
  this_00 = *(CraftBlueprint **)((int)&(this->Armature).CachedPeakPressure_Pa + 4);
  if (this_00 != (CraftBlueprint *)0x0) {
    CraftBlueprint__GetRadius_km_Memoize(this_00);
    if (*(char *)((this_00->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 6) == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    return (this_00->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data[5] * 1000.0;
  }
  return (this->Armature).CachedPropellantMass_kg;
}





//==== 00654a10 GetRailgunPeakFiringTemperatureDelta_K ====

/* public: double __thiscall RailgunModule__GetRailgunPeakFiringTemperatureDelta_K(void)const  */

double __thiscall RailgunModule__GetRailgunPeakFiringTemperatureDelta_K(RailgunModule *this)

{
  double dVar1;
  int iVar2;
  float10 fVar3;
  double dVar4;
  double dVar5;
  
  fVar3 = (float10)(**(code **)(this->_pad_0x0_0 + 0x154))();
  if ((double)fVar3 <= 0.0) {
    return 0.0;
  }
  fVar3 = (float10)(**(code **)(this->_pad_0x0_0 + 0x154))();
  dVar1 = (this->Armature).CachedPropellantMass_kg;
  dVar4 = (*(double *)&(this->Barrel).CachedComposition * 8.0) /
          (*(double *)((this->Barrel)._pad_0x0_0 + 0x30) * 1.2566370614359173e-06 *
           (double)fVar3 * 1000.0 * dVar1 * dVar1);
  libm_sse2_log_precise(0.0);
  dVar5 = GetCurrentAtLengthAlong_A(this,0.0);
  dVar1 = *(double *)&(this->Barrel)._pad_0x8_2;
  iVar2 = (this->Barrel)._pad_0x0_0;
  return ((dVar5 * dVar5 * 1.2566370614359173e-06) /
         (dVar1 * dVar1 * 4.0 * *(double *)(iVar2 + 0x30) * *(double *)(iVar2 + 0x90))) * dVar4;
}

//==== 00654b00 GetRailsAndArmorRadius_m ====

/* public: double __thiscall RailgunModule__GetRailsAndArmorRadius_m(void)const  */

double __thiscall RailgunModule__GetRailsAndArmorRadius_m(RailgunModule *this)

{
  return (this->Barrel).CachedBoreRadius_m + *(double *)&(this->Barrel)._pad_0x8_2 +
         (this->Barrel).CachedHeatEnergy_J;
}

//==== 00654b20 GetReflectionDependencies_00654b20 ====


/* public: virtual class util__Darray_L_classutil__Reflectable_P_G_ __thiscall
   RailgunModule__GetReflectionDependencies(void)const  */

Darray_L_class_util__Reflectable_P_G_ * __thiscall
RailgunModule__GetReflectionDependencies(RailgunModule *this)

{
  undefined8 stack0x00000004;
  int iVar1;
  Darray_L_class_util__Reflectable_P_G_ *this_00;
  bool bVar2;
  Darray_L_class_util__Reflectable_P_G_ *in_stack_00000004;
  
  this_00 = in_stack_00000004;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = (undefined **)(&vftable_6);
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  iVar1 = *(int *)((int)&(this->Armature).CachedPeakPressure_Pa + 4);
  if (iVar1 != 0) {
    in_stack_00000004 = (Darray_L_class_util__Reflectable_P_G_ *)0x1;
    util__Darray_class_util__Reflectable____SetSize(this_00,(int *)&stack0x00000004);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)this_00,0);
    if (bVar2) {
      *(int *)(*(int *)(this_00 + 4) + -4 + *(int *)(this_00 + 8) * 4) = iVar1;
    }
  }
  return this_00;
}





//==== 00654b90 GetReflectionInfo_00654b90 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   RailgunModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall RailgunModule__GetReflectionInfo(RailgunModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_9c55e4cd__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_9c55e4cd__thread_safe_static_guard_0__);
    if ( cde_l2_9c55e4cd__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_f8ac6ea3_ReflectionInfo) = &vftable_310;
      _Init_thread_footer(& cde_l2_9c55e4cd__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_f8ac6ea3_ReflectionInfo;
}





//==== 00654ba0 GetReflectionInfo_00654ba0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   RailsSubModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall RailsSubModule__GetReflectionInfo(RailsSubModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_b8a0915b__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_b8a0915b__thread_safe_static_guard_0__);
    if ( cde_l2_b8a0915b__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_b8a0cdcd_ReflectionInfo) = &vftable_309;
      _Init_thread_footer(& cde_l2_b8a0915b__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_b8a0cdcd_ReflectionInfo;
}





//==== 00654bb0 GetReloadPower_W_00654bb0 ====


/* public: virtual double __thiscall RailgunModule__GetReloadPower_W(void)const  */

double __thiscall RailgunModule__GetReloadPower_W(RailgunModule *this)

{
  return (double)((this->Turret).Data.field1_0x1);
}





//==== 00654bc0 GetReloadTime_s_00654bc0 ====


/* public: virtual double __thiscall RailgunModule__GetReloadTime_s(void)const  */

double __thiscall RailgunModule__GetReloadTime_s(RailgunModule *this)

{
  double dVar1;
  
  dVar1 = *(double *)&(this->Turret).Data.field0_0x0;
  dVar1 = dVar1 * dVar1;
  dVar1 = ((dVar1 + dVar1) * *(double *)&(this->Turret).Data.field2_0x2) /
          (*(double *)&(this->Turret).Data.field1_0x1 * 0.85);
  libm_sse2_pow_precise(0.0,0.0);
  return dVar1 * 10.0;
}





//==== 00654bd0 GetShortName_00654bd0 ====


/* public: virtual class util__Str_L_char_G_ __thiscall RailgunModule__GetShortName(void)const  */

Str_L_char_G_ * __thiscall
RailgunModule__GetShortName(RailgunModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  LocStr *this_00;
  Str_L_char_G_ *pSVar1;
  void *apvStack_34 [3];
  void *pvStack_28;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
  util__Str_char___Str_char(&SStack_1c,"Weapon Railgun");
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_34,&SStack_1c,&SStack_10);
  pSVar1 = util__LocStr__operator__o3(this_00);
  MassProjectileSubModule__GetShortName
            ((MassProjectileSubModule *)&(this->Armature).CachedMassStartsOutBeforeBarrel,
             __return_storage_ptr__,pSVar1);
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





//==== 00654c90 GetShotCreationOffset_m_00654c90 ====


/* public: virtual double __thiscall RailgunModule__GetShotCreationOffset_m(void)const  */

double __thiscall RailgunModule__GetShotCreationOffset_m(RailgunModule *this)

{
  double dVar1;
  double dVar2;
  
  if ((char)((this->TurretModel).Pointer == '\0')){
    dVar2 = 0.0;
  }
  else {
    dVar2 = TurretSubModule__GetShotCreationOffset_m
                      ((TurretSubModule *)&(this->Turret).Data.field3_0x3);
  }
  dVar1 = 0.0;
  if ((this->Turret).Data.field1_0x1 == '\0') {
    dVar1 = *(double *)&(this->Barrel).CachedComposition;
  }
  return dVar2 + dVar1;
}





//==== 00654ce0 GetStatuses_00654ce0 ====

/* public: virtual class DesignStatusBuffer  RailgunModule__GetStatuses(class DataParser
   *)const  */

DesignStatusBuffer * 
RailgunModule__GetStatuses
          (RailgunModule *this,DesignStatusBuffer *__return_storage_ptr__,DataParser *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ *pSVar3;
  ModulePlacer *pMVar4;
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
  *(undefined8 *)&(__return_storage_ptr__->Messages).Capacity = 0;
  WeaponModule__GetStatuses((WeaponModule *)this,__return_storage_ptr__,param_1);
  util__Str_char___Str_char(&local_44,"RailgunProjectileMeltage");
  local_2c.Data = (char *)0x0;
  local_2c.Capacity = 0;
  local_2c.Length = 0;
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  local_20.Length = 0;
  local_c = GetMeltageThickness_m(this,(this->Armature).CachedPropellantComposition);
  *(uint32_t *)&local_14 = local_c / (this->Armature).CachedPropellantMass_kg;
  if (local_14 <= 0.0) {
    *(uint32_t *)&local_14 = 0.0;
  }
  if (1.0 <= local_14) {
    *(uint32_t *)&local_14 = 1.0;
  }
  local_c = GetMeltageThickness_m(this,(this->Armature).CachedPropellantComposition);
  pSVar3 = &local_2c;
  local_c = local_c / (this->Armature).CachedPropellantMass_kg;
  pMVar4 = (ModulePlacer *)0x0;
  pSVar2 = &local_20;
  if (local_c <= 0.0) {
    local_c = 0.0;
  }
  if (1.0 <= local_c) {
    local_c = 1.0;
  }
  pSVar1 = PrintPercent(&local_38,
                        (double)CONCAT44(pSVar2,(int)((ulonglong)(local_14 - 0.05) >> 0x20)));
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,0.05 < local_c,&local_44,pSVar1,pSVar2,pSVar3,pMVar4);
  if (local_38.Data != (char *)0x0) {
    port_op_delete(local_38.Data);
    local_38.Data = (char *)0x0;
  }
  if (local_20.Data != (char *)0x0) {
    port_op_delete(local_20.Data);
    local_20.Data = (char *)0x0;
  }
  if (local_2c.Data != (char *)0x0) {
    port_op_delete(local_2c.Data);
    local_2c.Data = (char *)0x0;
  }
  if (local_44.Data != (char *)0x0) {
    port_op_delete(local_44.Data);
  }
  util__Str_char___Str_char(&local_38,"RailgunRailsMeltage");
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  local_20.Length = 0;
  local_2c.Data = (char *)0x0;
  local_2c.Capacity = 0;
  local_2c.Length = 0;
  *(uint32_t *)&local_14 = GetMeltageThickness_m(this,(Material *)(this->Barrel)._pad_0x0_0);
  local_c = local_14 / *(double *)&(this->Barrel)._pad_0x8_2;
  if (local_c <= 0.0) {
    local_c = 0.0;
  }
  if (1.0 <= local_c) {
    local_c = 1.0;
  }
  *(uint32_t *)&local_14 = GetMeltageThickness_m(this,(Material *)(this->Barrel)._pad_0x0_0);
  pSVar3 = &local_20;
  (uint32_t)(local_14 = local_14 / *(double *)&(this->Barrel)._pad_0x8_2);
  pMVar4 = (ModulePlacer *)0x0;
  pSVar2 = &local_2c;
  if (local_14 <= 0.0) {
    *(uint32_t *)&local_14 = 0.0;
  }
  if (1.0 <= local_14) {
    *(uint32_t *)&local_14 = 1.0;
  }
  pSVar1 = PrintPercent(&local_44,
                        (double)CONCAT44(pSVar2,(int)((ulonglong)(local_c - 0.01) >> 0x20)));
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,0.01 < local_14,&local_38,pSVar1,pSVar2,pSVar3,pMVar4);
  if (local_44.Data != (char *)0x0) {
    port_op_delete(local_44.Data);
    local_44.Data = (char *)0x0;
  }
  if (local_2c.Data != (char *)0x0) {
    port_op_delete(local_2c.Data);
    local_2c.Data = (char *)0x0;
  }
  if (local_20.Data != (char *)0x0) {
    port_op_delete(local_20.Data);
    local_20.Data = (char *)0x0;
  }
  if (local_38.Data != (char *)0x0) {
    port_op_delete(local_38.Data);
  }
  return __return_storage_ptr__;
}

//==== 00654f80 GetTurningAngularVelocity_radians__s_00654f80 ====


/* public: virtual double __thiscall RailgunModule__GetTurningAngularVelocity_radians__s(void)const
    */

double __thiscall RailgunModule__GetTurningAngularVelocity_radians__s(RailgunModule *this)

{
  double dVar1;
  
  if ((char)((this->TurretModel).Pointer != '\0')){
    if ((char)((this->TurretModel).Pointer == '\0')){
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar1 = TurretSubModule__GetRotationalSpeed_radians__s
                      ((TurretSubModule *)&(this->Turret).Data.field3_0x3);
    return dVar1;
  }
  return 0.0;
}





//==== 00654fe0 GetTurningPowerDrain_W_00654fe0 ====


/* public: virtual double __thiscall RailgunModule__GetTurningPowerDrain_W(void)const  */

double __thiscall RailgunModule__GetTurningPowerDrain_W(RailgunModule *this)

{
  double dVar1;
  
  if ((char)((this->TurretModel).Pointer != '\0')){
    if ((char)((this->TurretModel).Pointer == '\0')){
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar1 = TurretSubModule__GetPowerConsumption_W
                      ((TurretSubModule *)&(this->Turret).Data.field3_0x3);
    return dVar1;
  }
  return 0.0;
}





//==== 00655460 Render_00655460 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void  ModuleDiagram_L_classRailgunModule_G___Render(void)const  */

void __thiscall ModuleDiagram_class_RailgunModule___Render(ModuleDiagram_L_class_RailgunModule_G_ *this)

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
  RailgunModule__RenderDiagram(*(RailgunModule **)(this + 0x168),pMVar1,*(Vec2_L_int_G_ *)VVar3.X);
  Graphics__ShaderStack___ShaderStack(&SStack_9);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00655590 Render_00655590 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall RailgunModule__Render(struct util__Vec3_L_double_G_,double,bool,bool)const
    */

void __thiscall
RailgunModule__Render
          (RailgunModule *this,Vec4_L_double_G_ param_1,double param_2,bool param_3,bool param_4)

{
  undefined8 stack0xfffffffc;
  ReferenceController *pRVar1;
  Vec4_L_double_G_ VVar2;
  Vec4_L_double_G_ VVar3;
  Quaternion_L_double_G_ QVar4;
  Vec4_L_double_G_ VVar5;
  Vec3_L_double_G_ VVar6;
  bool bVar7;
  Vec3_L_double_G_ *pVVar8;
  int iVar9;
  Vec2_L_double_G_ *pVVar10;
  int iVar11;
  float10 fVar12;
  double dVar13;
  Quaternion_L_double_G_ local_4c;
  undefined1 local_2c [16];
  double local_1c;
  double local_14;
  TransformStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((*(int *)((this->ChartAcceleration_m__s).Data + 0x12) != 0) &&
     (pRVar1 = *(ReferenceController **)((int)(this->ChartAcceleration_m__s).Data + 0x94),
     pRVar1 != (ReferenceController *)0x0)) {
    bVar7 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (bVar7) {
      pRVar1 = *(ReferenceController **)((int)(this->ChartAcceleration_m__s).Data + 0x94);
      if (pRVar1 != (ReferenceController *)0x0) {
        bVar7 = util__ReferenceController__IsDataStillValid(pRVar1);
        if (!bVar7) {
          *(undefined4 *)((this->ChartAcceleration_m__s).Data + 0x12) = 0;
        }
      }
      GameModel__Render(*(GameModel **)((this->ChartAcceleration_m__s).Data + 0x12),0.0,0.0,false);
    }
  }
  if ((char)(*(int *)&((this->Turret).Data) != 0)){
    CapacitorSubModule__Render((CapacitorSubModule *)&(this->Capacitor).Data._pad_0x30_12,false);
  }
  if ((char)((this->TurretModel).Pointer != '\0')){
    pVVar8 = WeaponCompartment__GetDefaultTargetDirection((Vec3_L_double_G_ *)local_2c);
    VVar2.W = (int)((ulonglong)pVVar8->Z >> 0x20);
    (*(uint32_t *)((char *)&(VVar2) + 0)) = (uint32_t)(uintptr_t)(*(undefined1 (*) [20])pVVar8);
    TurretSubModule__RenderExtruderModel
              ((TurretSubModule *)&(this->Turret).Data.field3_0x3,VVar2,param_1,param_4,false);
  }
  fVar12 = (float10)(**(code **)(this->_pad_0x0_0 + 0x1b0))();
  *(uint64_t *)&local_1c = (double)(fVar12 / (float10)1000.0);
  VVar5.Z = SUB84(local_1c,0);
  VVar5.X = 0.0;
  VVar5.Y = 0.0;
  VVar5.W = (int)((ulonglong)local_1c >> 0x20);
  Graphics__Translate(VVar5);
  pVVar8 = WeaponCompartment__GetDefaultTargetDirection((Vec3_L_double_G_ *)local_2c);
  VVar3.W = (int)((ulonglong)pVVar8->Z >> 0x20);
  (*(uint32_t *)((char *)&(VVar3) + 0)) = (uint32_t)(uintptr_t)(*(undefined1 (*) [20])pVVar8);
  util__Quaternion_double___Quaternion_double(&local_4c,VVar3,param_1);
  QVar4.Y = local_4c.Y;
  QVar4.X = local_4c.X;
  QVar4.Y = local_4c.Y;
  QVar4.Z = local_4c.Z;
  QVar4.Z = local_4c.Z;
  QVar4.W = local_4c.W;
  QVar4.W = local_4c.W;
  (*(uint32_t *)((char *)&(QVar4.W) + 4)) = (*(uint32_t *)((char *)&(local_4c.W) + 4));
  Graphics__Rotate(QVar4);
  if ((*(int *)((this->ChartAcceleration_m__s).Data + 0x13) != 0) &&
     (pRVar1 = *(ReferenceController **)((int)(this->ChartAcceleration_m__s).Data + 0x9c),
     pRVar1 != (ReferenceController *)0x0)) {
    bVar7 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (bVar7) {
      pRVar1 = *(ReferenceController **)((int)(this->ChartAcceleration_m__s).Data + 0x9c);
      if (pRVar1 != (ReferenceController *)0x0) {
        bVar7 = util__ReferenceController__IsDataStillValid(pRVar1);
        if (!bVar7) {
          *(undefined4 *)((this->ChartAcceleration_m__s).Data + 0x13) = 0;
        }
      }
      GameModel__Render(*(GameModel **)((this->ChartAcceleration_m__s).Data + 0x13),0.0,0.0,param_4)
      ;
    }
  }
  if (param_3) {
    iVar11 = 0;
    while( true ) {
      if ((char)((this->TurretModel).Pointer == '\0')){
        iVar9 = 1;
      }
      else {
        iVar9 = *(int *)&(this->Turret).Data.field0_0x0;
      }
      if (iVar9 <= iVar11) break;
      Graphics__TransformStack__TransformStack(&local_9,Style__Default);
      local_14 = (this->Barrel).CachedBoreRadius_m + *(double *)&(this->Barrel)._pad_0x8_2 +
                 (this->Barrel).CachedHeatEnergy_J;
      if ((char)((this->TurretModel).Pointer == '\0')){
        iVar9 = 1;
      }
      else {
        iVar9 = *(int *)&(this->Turret).Data.field0_0x0;
      }
      pVVar10 = util__GetCirclePackingInACircleOffset_double
                          ((Vec2_L_double_G_ *)(local_2c + 8),iVar9,iVar11);
      dVar13 = (pVVar10->Y * local_14) / 1000.0;
      VVar6.Y = SUB84(dVar13,0);
      VVar6.X = (local_14 * pVVar10->X) / 1000.0;
      VVar6.Z = (int)((ulonglong)dVar13 >> 0x20);
      VVar6.Z = 0.0;
      Graphics__Translate(VVar6);
      pRVar1 = *(ReferenceController **)((int)(this->ChartAcceleration_m__s).Data + 0xa4);
      if (pRVar1 != (ReferenceController *)0x0) {
        bVar7 = util__ReferenceController__IsDataStillValid(pRVar1);
        if (!bVar7) {
          *(undefined4 *)((this->ChartAcceleration_m__s).Data + 0x14) = 0;
        }
      }
      GameModel__Render(*(GameModel **)((this->ChartAcceleration_m__s).Data + 0x14),param_2,0.0,true
                       );
      Graphics__TransformStack___TransformStack(&local_9);
      iVar11 = iVar11 + 1;
    }
  }
  return;
}

//==== 00656160 RenderInitialState_00656160 ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void  RailgunModule__RenderInitialState(double,class CameraManager
   *,class util__Darray_L_classutil__SharedPtr_L_classArmorTextureHandler_G__G_ const &,double,struct
   util__Vec3_L_double_G_)const  */

void 
RailgunModule__RenderInitialState
          (RailgunModule *this,double param_1,CameraManager *param_2,
          Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G_ *param_3,double param_4,Vec3_L_double_G_ param_5
          )

{
  Vec4_L_double_G_ VVar1;
  int iVar2;
  double dVar3;
  double local_c;
  
  local_c = param_1 / 5.0;
  dVar3 = util__Floor(&local_c);
  dVar3 = param_1 - dVar3 * 5.0;
  if ((5.0 <= dVar3) || ((dVar3 < 0.0 && (dVar3 = dVar3 + 5.0, dVar3 == 5.0)))) {
    dVar3 = 0.0;
  }
  param_1 = (dVar3 * 6.283185307179586) / 5.0;
  dVar3 = util__Cos(&param_1);
  param_1 = (dVar3 + 1.0) * 0.5;
  local_c = Material__GetSafeUseTemperature_K((Material *)(this->Barrel)._pad_0x0_0);
  if (param_4 <= 0.0) {
    param_4 = (1.0 - param_1) * 2.7 + local_c * param_1;
  }
  iVar2 = (**(code **)(param_3->_pad_0x0_0 + 0xc))();
  VVar1.Y = param_5.Y;
  VVar1.X = param_5.X;
  VVar1.Y = param_5.Y;
  VVar1.Z = param_5.Z;
  VVar1.Z = param_5.Z;
  Render(this,VVar1,param_4,true,0 < iVar2);
  return;
}

//==== 00656280 RenderInitialStateSimple_00656280 ====


/* public: virtual void __thiscall RailgunModule__RenderInitialStateSimple(struct
   util__Vec3_L_double_G_)const  */

void __thiscall RailgunModule__RenderInitialStateSimple(RailgunModule *this,Vec4_L_double_G_ param_1)

{
  RenderSimple(this,param_1,true);
  return;
}





//==== 006564c0 RenderSimple_006564c0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall RailgunModule__RenderSimple(struct util__Vec3_L_double_G_,bool)const  */

void __thiscall RailgunModule__RenderSimple(RailgunModule *this,Vec4_L_double_G_ param_1,bool param_2)

{
  undefined8 stack0xfffffffc;
  ReferenceController *pRVar1;
  Vec4_L_double_G_ VVar2;
  Vec4_L_double_G_ VVar3;
  Quaternion_L_double_G_ QVar4;
  Vec4_L_double_G_ VVar5;
  Vec3_L_double_G_ VVar6;
  bool bVar7;
  Vec3_L_double_G_ *pVVar8;
  int iVar9;
  Vec2_L_double_G_ *pVVar10;
  int iVar11;
  float10 fVar12;
  double dVar13;
  Quaternion_L_double_G_ local_4c;
  undefined1 local_2c [16];
  double local_1c;
  double local_14;
  TransformStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((*(int *)((this->ChartAcceleration_m__s).Data + 0x12) != 0) &&
     (pRVar1 = *(ReferenceController **)((int)(this->ChartAcceleration_m__s).Data + 0x94),
     pRVar1 != (ReferenceController *)0x0)) {
    bVar7 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (bVar7) {
      pRVar1 = *(ReferenceController **)((int)(this->ChartAcceleration_m__s).Data + 0x94);
      if (pRVar1 != (ReferenceController *)0x0) {
        bVar7 = util__ReferenceController__IsDataStillValid(pRVar1);
        if (!bVar7) {
          *(undefined4 *)((this->ChartAcceleration_m__s).Data + 0x12) = 0;
        }
      }
      GameModel__RenderSimple(*(GameModel **)((this->ChartAcceleration_m__s).Data + 0x12));
    }
  }
  if ((char)(*(int *)&((this->Turret).Data) != 0)){
    CapacitorSubModule__Render((CapacitorSubModule *)&(this->Capacitor).Data._pad_0x30_12,true);
  }
  if ((char)((this->TurretModel).Pointer != '\0')){
    pVVar8 = WeaponCompartment__GetDefaultTargetDirection((Vec3_L_double_G_ *)local_2c);
    VVar2.W = (int)((ulonglong)pVVar8->Z >> 0x20);
    (*(uint32_t *)((char *)&(VVar2) + 0)) = (uint32_t)(uintptr_t)(*(undefined1 (*) [20])pVVar8);
    TurretSubModule__RenderExtruderModel
              ((TurretSubModule *)&(this->Turret).Data.field3_0x3,VVar2,param_1,false,true);
  }
  fVar12 = (float10)(**(code **)(this->_pad_0x0_0 + 0x1b0))();
  *(uint64_t *)&local_1c = (double)(fVar12 / (float10)1000.0);
  VVar5.Z = SUB84(local_1c,0);
  VVar5.X = 0.0;
  VVar5.Y = 0.0;
  VVar5.W = (int)((ulonglong)local_1c >> 0x20);
  Graphics__Translate(VVar5);
  pVVar8 = WeaponCompartment__GetDefaultTargetDirection((Vec3_L_double_G_ *)local_2c);
  VVar3.W = (int)((ulonglong)pVVar8->Z >> 0x20);
  (*(uint32_t *)((char *)&(VVar3) + 0)) = (uint32_t)(uintptr_t)(*(undefined1 (*) [20])pVVar8);
  util__Quaternion_double___Quaternion_double(&local_4c,VVar3,param_1);
  QVar4.Y = local_4c.Y;
  QVar4.X = local_4c.X;
  QVar4.Y = local_4c.Y;
  QVar4.Z = local_4c.Z;
  QVar4.Z = local_4c.Z;
  QVar4.W = local_4c.W;
  QVar4.W = local_4c.W;
  (*(uint32_t *)((char *)&(QVar4.W) + 4)) = (*(uint32_t *)((char *)&(local_4c.W) + 4));
  Graphics__Rotate(QVar4);
  if ((*(int *)((this->ChartAcceleration_m__s).Data + 0x13) != 0) &&
     (pRVar1 = *(ReferenceController **)((int)(this->ChartAcceleration_m__s).Data + 0x9c),
     pRVar1 != (ReferenceController *)0x0)) {
    bVar7 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (bVar7) {
      pRVar1 = *(ReferenceController **)((int)(this->ChartAcceleration_m__s).Data + 0x9c);
      if (pRVar1 != (ReferenceController *)0x0) {
        bVar7 = util__ReferenceController__IsDataStillValid(pRVar1);
        if (!bVar7) {
          *(undefined4 *)((this->ChartAcceleration_m__s).Data + 0x13) = 0;
        }
      }
      GameModel__RenderSimple(*(GameModel **)((this->ChartAcceleration_m__s).Data + 0x13));
    }
  }
  if (param_2) {
    iVar11 = 0;
    while( true ) {
      if ((char)((this->TurretModel).Pointer == '\0')){
        iVar9 = 1;
      }
      else {
        iVar9 = *(int *)&(this->Turret).Data.field0_0x0;
      }
      if (iVar9 <= iVar11) break;
      Graphics__TransformStack__TransformStack(&local_9,Style__Default);
      local_14 = (this->Barrel).CachedBoreRadius_m + *(double *)&(this->Barrel)._pad_0x8_2 +
                 (this->Barrel).CachedHeatEnergy_J;
      if ((char)((this->TurretModel).Pointer == '\0')){
        iVar9 = 1;
      }
      else {
        iVar9 = *(int *)&(this->Turret).Data.field0_0x0;
      }
      pVVar10 = util__GetCirclePackingInACircleOffset_double
                          ((Vec2_L_double_G_ *)(local_2c + 8),iVar9,iVar11);
      dVar13 = (pVVar10->Y * local_14) / 1000.0;
      VVar6.Y = SUB84(dVar13,0);
      VVar6.X = (pVVar10->X * local_14) / 1000.0;
      VVar6.Z = (int)((ulonglong)dVar13 >> 0x20);
      VVar6.Z = 0.0;
      Graphics__Translate(VVar6);
      pRVar1 = *(ReferenceController **)((int)(this->ChartAcceleration_m__s).Data + 0xa4);
      if (pRVar1 != (ReferenceController *)0x0) {
        bVar7 = util__ReferenceController__IsDataStillValid(pRVar1);
        if (!bVar7) {
          *(undefined4 *)((this->ChartAcceleration_m__s).Data + 0x14) = 0;
        }
      }
      GameModel__RenderSimple(*(GameModel **)((this->ChartAcceleration_m__s).Data + 0x14));
      Graphics__TransformStack___TransformStack(&local_9);
      iVar11 = iVar11 + 1;
    }
  }
  return;
}

//==== 00656cb0 StaticFactory_00656cb0 ====

/* public: static class util__Reflectable * __cdecl RailsSubModule__ReflectionInfoStruct_L_struct_RailsSubModule_G___StaticFactory(void) */

Reflectable * __cdecl RailsSubModule__ReflectionInfoStruct_struct_RailsSubModule___StaticFactory(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x30));
  if (pRVar1 != (Reflectable *)0x0) {
    memset(pRVar1,0,0x30);
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_311;
  }
  return (Reflectable *)0x0;
}

//==== 00656d00 StaticFactory_00656d00 ====

/* public: static class util__Reflectable * __cdecl RailgunModule__ReflectionInfoStruct_L_class_RailgunModule_G___StaticFactory(void) */

Reflectable * __cdecl RailgunModule__ReflectionInfoStruct_class_RailgunModule___StaticFactory(void)

{
  undefined8 stack0xfffffff4;
  Module *this;
  
  this = (Module *)(uintptr_t)(port_op_new(0x1430));
  if (this != (Module *)0x0) {
    memset(this,0,0);
    Module__Module(this);
    *(undefined1 *)&this[1].GetTotalPowerUsage_W_MemoizedValue.Data = 0;
    *(undefined8 *)&this[1].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    *(undefined4 *)&this[1].GetTotalPowerUsage_W_MemoizedValue.IsValidData = 0;
  *(undefined4 *)((char *)&this[1].GetTotalPowerUsage_W_MemoizedValue + 0xc) = 0;
    this[1].Models._pad_0x0_0 = 0;
    this[1].Models.Data = (SharedPtr_L_GameModel_G_ *)0x0;
    *(undefined ***)&this[1].GetTotalPowerUsage_W_MemoizedValue.IsValidData =
         &vftable_166;
  *(undefined4 *)((char *)&this[1].GetTotalPowerUsage_W_MemoizedValue + 0xc) = 0;
    this[1].Models._pad_0x0_0 = 0;
    this[1].Models.Data = (SharedPtr_L_GameModel_G_ *)0x0;
    this[1].Models.Size = 0;
    this[1].Models.Capacity = 0;
    this[1].UsesCustomName = false;
    this[2]._pad_0x0_0 = 0;
    this[2]._pad_0x4_1 = 0;
    *(undefined1 *)&this[2]._pad_0x8_2 = 0;
    this->_pad_0x0_0 = (int)&vftable_for_EditorReflectable__32;
    *(undefined4 *)&(this->GetTotalPowerUsage_W_MemoizedValue).field_0xc = (undefined4)(uintptr_t)vftable_for_util__RTTIBaseClass__31;
    this[2].ModuleMemoizationHandlerInstance.ResetFunctions.Data = (pmf_27707b45 *)0x0;
    this[2].ModuleMemoizationHandlerInstance.ResetFunctions.Size = 0;
    this[2].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    *(undefined4 *)&this[2].ModuleMemoizationHandlerInstance = 0;
    this[2].ModuleMemoizationHandlerInstance.ResetFunctions.Data =
         (pmf_27707b45 *)&vftable_109;
    this[2].ModuleMemoizationHandlerInstance.ResetFunctions.Size = 0;
    *(undefined4 *)&(this[2].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity) = 0;
    *(undefined4 *)&this[2].ModuleMemoizationHandlerInstance = 0;
    this[2].GetTotalPowerUsage_W_MemoizedValue.Data = 0.0;
    this[2].GetTotalPowerUsage_W_MemoizedValue.IsValidData = false;
    this[2].Models._pad_0x0_0 = 0;
    this[2].Models.Data = (SharedPtr_L_GameModel_G_ *)0x0;
    this[2].Models.Size = 0;
    this[2].Models.Capacity = 0;
    this[2].UsesCustomName = false;
    this[3]._pad_0x0_0 = 0;
    this[3]._pad_0x4_1 = 0;
    *(undefined1 *)&this[3]._pad_0x8_2 = 0;
    this[3]._pad_0x10_4 = 0;
    this[3].ModuleMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 = 0;
    *(undefined1 *)&this[3].ModuleMemoizationHandlerInstance.ResetFunctions.Data = 0;
    *(undefined8 *)&this[3].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    memset(&this[3].GetTotalPowerUsage_W_MemoizedValue,0,0x30);
    *(undefined4 *)((int)&this[3].GetTotalPowerUsage_W_MemoizedValue.Data + 4) = 0;
    *(undefined4 *)&this[3].GetTotalPowerUsage_W_MemoizedValue.IsValidData = 0;
  *(undefined4 *)((char *)&this[3].GetTotalPowerUsage_W_MemoizedValue + 0xc) = 0;
    *(undefined ***)&this[3].GetTotalPowerUsage_W_MemoizedValue.Data = &vftable_311;
    memset(&this[4]._pad_0x8_2,0,0x90);
    this[4]._pad_0xc_3 = 0;
    this[4]._pad_0x10_4 = 0;
    this[4].ModuleMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 = 0;
    this[4]._pad_0x8_2 = (int)&vftable_283;
    this[4].UsesCustomName = false;
    this[4].IsUserCreated = false;
  *(undefined2 *)((char *)&this[4] + 0x4a) = 0;
  *(undefined4 *)((char *)&this[4] + 0x4c) = 0;
    this[4].Models._pad_0x0_0 = 0;
    this[4].Models.Data = (SharedPtr_L_GameModel_G_ *)0x0;
    this[4].Models.Size = 0;
    this[4].Models.Capacity = 0;
    *(undefined1 *)&this[5].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    this[5].ModuleMemoizationHandlerInstance.ResetFunctions.Data = (pmf_27707b45 *)0x0;
    this[5].ModuleMemoizationHandlerInstance.ResetFunctions.Size = 0;
    *(undefined4 *)&this[5].GetTotalPowerUsage_W_MemoizedValue.Data = 0;
    *(undefined4 *)((int)&this[5].GetTotalPowerUsage_W_MemoizedValue.Data + 4) = 0;
    *(undefined4 *)&this[5].GetTotalPowerUsage_W_MemoizedValue.IsValidData = 0;
  *(undefined4 *)((char *)&this[5].GetTotalPowerUsage_W_MemoizedValue + 0xc) = 0;
    this[5].Models.Size = 0;
    this[5].Models.Capacity = 0;
    MassProjectileSubModule__MassProjectileSubModule
              ((MassProjectileSubModule *)&this[5].UsesCustomName);
    CapacitorBankSubModule__CapacitorBankSubModule((CapacitorBankSubModule *)&this[7]._pad_0x8_2);
    *(undefined1 *)&this[8]._pad_0x10_4 = 0;
    this[8].ModuleMemoizationHandlerInstance.ResetFunctions.Size = 0;
    this[8].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    *(undefined4 *)&this[8].ModuleMemoizationHandlerInstance = 0;
    this[8].ModuleMemoizationHandlerInstance.ResetFunctions.Data =
         (pmf_27707b45 *)&vftable_211;
    this[8].GetTotalPowerUsage_W_MemoizedValue.Data = 0.0;
    TurretSubModule__TurretSubModule((TurretSubModule *)&this[8].UsesCustomName);
    *(undefined ***)&this[8].UsesCustomName = &vftable_237;
    *(undefined1 *)&this[0xc]._pad_0x8_2 = 0;
    AmmoBaySubModule__AmmoBaySubModule((AmmoBaySubModule *)&this[0xc]._pad_0x10_4);
    *(undefined1 *)&this[0xe]._pad_0x8_2 = 0;
    this[0xe]._pad_0x10_4 = 0;
    this[0xe].ModuleMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 = 0;
    this[0xe].ModuleMemoizationHandlerInstance.ResetFunctions.Data = (pmf_27707b45 *)0x0;
    this[0xe].ModuleMemoizationHandlerInstance.ResetFunctions.Size = 0;
    this[0xe].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    *(undefined4 *)&this[0xe].ModuleMemoizationHandlerInstance = 0;
    *(undefined ***)&this[0xe].GetTotalPowerUsage_W_MemoizedValue.Data =
         &vftable_286;
    util__Sarray_double_500___SetAll
              ((Sarray_L_double_C500_G_ *)&this[0xe].GetTotalPowerUsage_W_MemoizedValue,
               (double *)&stack0xfffffff4);
    return (Reflectable *)this;
  }
  return (Reflectable *)0x0;
}

//==== 00656d30 StaticGetMemberByIndex_00656d30 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   RailsSubModule__ReflectionInfoStruct_struct_RailsSubModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
RailsSubModule__ReflectionInfoStruct_struct_RailsSubModule___StaticGetMemberByIndex__o2
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_fdf16bea__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_fdf16bea__thread_safe_static_guard_0__);
    if ( cde_l2_fdf16bea__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_4334c69e_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00977bf4 = 0;
      _DAT_00977bf8 = 0;
      _DAT_00977bfc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977c00,"Unused");
      _DAT_00977c0c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977c10,"Composition");
      _DAT_00977c1c = 8;
      _DAT_00977c20 = 0x10;
      _DAT_00977c24 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977c28,"Material");
      _DAT_00977c34 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977c38,"Thickness_m");
      _DAT_00977c44 = 4;
      _DAT_00977c48 = 0x18;
      _DAT_00977c4c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977c50,"double");
      _DAT_00977c5c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977c60,"Length_m");
      _DAT_00977c6c = 4;
      _DAT_00977c70 = 0x20;
      _DAT_00977c74 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977c78,"double");
      _DAT_00977c84 = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_RailsSubModule__ReflectionInfoStruct_struct_RailsSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_fdf16bea__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_4334c69e_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_00977bf4 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_00977bf8 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_00977bfc + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_00977c00 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_00977c0c)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_00977c0d)[iVar1];
  return __return_storage_ptr__;
}





//==== 00656f00 StaticGetMemberByIndex_00656f00 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl RailgunModule__ReflectionInfoStruct_class_RailgunModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
RailgunModule__ReflectionInfoStruct_class_RailgunModule___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_98c4a7d5__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_98c4a7d5__thread_safe_static_guard_0__);
    if ( cde_l2_98c4a7d5__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_4a4d29e5_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_009778c4 = 0;
      _DAT_009778c8 = 0;
      _DAT_009778cc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009778d0,"Unused");
      _DAT_009778dc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009778e0,"SteamWorkshopID");
      _DAT_009778ec = 6;
      _DAT_009778f0 = 0x10;
      _DAT_009778f4 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009778f8,"AStr");
      _DAT_00977904 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977908,"Description");
      _DAT_00977914 = 6;
      _DAT_00977918 = 0x20;
      _DAT_0097791c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977920,"AStr");
      _DAT_0097792c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977930,"UsesCustomName");
      _DAT_0097793c = 1;
      _DAT_00977940 = 0x68;
      _DAT_00977944 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977948,"bool");
      _DAT_00977954 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977958,"PowerConsumption_W");
      _DAT_00977964 = 4;
      _DAT_00977968 = 0x110;
      _DAT_0097796c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977970,"double");
      _DAT_0097797c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977980,"Capacitor");
      _DAT_0097798c = 10;
      _DAT_00977990 = 0x238;
      _DAT_00977994 = 0x58;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977998,"CapacitorBankSubModule");
      _DAT_009779a4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009779a8,"Rails");
      _DAT_009779b4 = 10;
      _DAT_009779b8 = 0x118;
      _DAT_009779bc = 0x30;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009779c0,"RailsSubModule");
      _DAT_009779cc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009779d0,"BarrelArmor");
      _DAT_009779dc = 10;
      _DAT_009779e0 = 0x148;
      _DAT_009779e4 = 0x90;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009779e8,"BarrelArmorSubModule");
      _DAT_009779f4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009779f8,"Armature");
      _DAT_00977a04 = 10;
      _DAT_00977a08 = 0x1d8;
      _DAT_00977a0c = 0x60;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977a10,"MassProjectileSubModule");
      _DAT_00977a1c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977a20,"Loader");
      _DAT_00977a2c = 10;
      _DAT_00977a30 = 0x298;
      _DAT_00977a34 = 0x28;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977a38,"LinearMotorSubModule");
      _DAT_00977a44 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977a48,"ExternalMount");
      _DAT_00977a54 = 1;
      _DAT_00977a58 = 0x2c0;
      _DAT_00977a5c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977a60,"bool");
      _DAT_00977a6c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977a70,"InternalMount");
      _DAT_00977a7c = 1;
      _DAT_00977a80 = 0x2c1;
      _DAT_00977a84 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977a88,"bool");
      _DAT_00977a94 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977a98,"Turret");
      _DAT_00977aa4 = 10;
      _DAT_00977aa8 = 0x2c8;
      _DAT_00977aac = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977ab0,"ExtrudableTurretSubModule");
      _DAT_00977abc = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977ac0,"AttachedAmmoBay");
      _DAT_00977acc = 10;
      _DAT_00977ad0 = 0x3d0;
      _DAT_00977ad4 = 0x98;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977ad8,"AmmoBaySubModule");
      _DAT_00977ae4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977ae8,"TargetsShips");
      _DAT_00977af4 = 1;
      _DAT_00977af8 = 0xb0;
      _DAT_00977afc = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977b00,"bool");
      _DAT_00977b0c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977b10,"TargetsShots");
      _DAT_00977b1c = 1;
      _DAT_00977b20 = 0xb1;
      _DAT_00977b24 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977b28,"bool");
      _DAT_00977b34 = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_RailgunModule__ReflectionInfoStruct_class_RailgunModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_98c4a7d5__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_4a4d29e5_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_009778c4 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_009778c8 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_009778cc + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_009778d0 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_009778dc)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_009778dd)[iVar1];
  return __return_storage_ptr__;
}





//==== 006573f0 StaticGetMemberCount_006573f0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl RailsSubModule__ReflectionInfoStruct_struct_RailsSubModule___StaticGetMemberCount(void) */

int __cdecl RailsSubModule__ReflectionInfoStruct_struct_RailsSubModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_64bdedc1__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_64bdedc1__thread_safe_static_guard_0__);
    if ( cde_l2_64bdedc1__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_6bbe78f1_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00977b4c = 0;
      _DAT_00977b50 = 0;
      _DAT_00977b54 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977b58,"Unused");
      _DAT_00977b64 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977b68,"Composition");
      _DAT_00977b74 = 8;
      _DAT_00977b78 = 0x10;
      _DAT_00977b7c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977b80,"Material");
      _DAT_00977b8c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977b90,"Thickness_m");
      _DAT_00977b9c = 4;
      _DAT_00977ba0 = 0x18;
      _DAT_00977ba4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977ba8,"double");
      _DAT_00977bb4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977bb8,"Length_m");
      _DAT_00977bc4 = 4;
      _DAT_00977bc8 = 0x20;
      _DAT_00977bcc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977bd0,"double");
      _DAT_00977bdc = 0;
      atexit( private__static_int_const___cdecl_RailsSubModule__ReflectionInfoStruct_struct_RailsSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_64bdedc1__thread_safe_static_guard_0__);
    }
  }
  return 4;
}





//==== 00657560 StaticGetMemberCount_00657560 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl RailgunModule__ReflectionInfoStruct_class_RailgunModule___StaticGetMemberCount(void) */

int __cdecl RailgunModule__ReflectionInfoStruct_class_RailgunModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_7881ad27__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_7881ad27__thread_safe_static_guard_0__);
    if ( cde_l2_7881ad27__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_ed3445a8_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0097763c = 0;
      _DAT_00977640 = 0;
      _DAT_00977644 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977648,"Unused");
      _DAT_00977654 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977658,"SteamWorkshopID");
      _DAT_00977664 = 6;
      _DAT_00977668 = 0x10;
      _DAT_0097766c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977670,"AStr");
      _DAT_0097767c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977680,"Description");
      _DAT_0097768c = 6;
      _DAT_00977690 = 0x20;
      _DAT_00977694 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977698,"AStr");
      _DAT_009776a4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009776a8,"UsesCustomName");
      _DAT_009776b4 = 1;
      _DAT_009776b8 = 0x68;
      _DAT_009776bc = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009776c0,"bool");
      _DAT_009776cc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009776d0,"PowerConsumption_W");
      _DAT_009776dc = 4;
      _DAT_009776e0 = 0x110;
      _DAT_009776e4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009776e8,"double");
      _DAT_009776f4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009776f8,"Capacitor");
      _DAT_00977704 = 10;
      _DAT_00977708 = 0x238;
      _DAT_0097770c = 0x58;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977710,"CapacitorBankSubModule");
      _DAT_0097771c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977720,"Rails");
      _DAT_0097772c = 10;
      _DAT_00977730 = 0x118;
      _DAT_00977734 = 0x30;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977738,"RailsSubModule");
      _DAT_00977744 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977748,"BarrelArmor");
      _DAT_00977754 = 10;
      _DAT_00977758 = 0x148;
      _DAT_0097775c = 0x90;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977760,"BarrelArmorSubModule");
      _DAT_0097776c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977770,"Armature");
      _DAT_0097777c = 10;
      _DAT_00977780 = 0x1d8;
      _DAT_00977784 = 0x60;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977788,"MassProjectileSubModule");
      _DAT_00977794 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977798,"Loader");
      _DAT_009777a4 = 10;
      _DAT_009777a8 = 0x298;
      _DAT_009777ac = 0x28;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009777b0,"LinearMotorSubModule");
      _DAT_009777bc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009777c0,"ExternalMount");
      _DAT_009777cc = 1;
      _DAT_009777d0 = 0x2c0;
      _DAT_009777d4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009777d8,"bool");
      _DAT_009777e4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009777e8,"InternalMount");
      _DAT_009777f4 = 1;
      _DAT_009777f8 = 0x2c1;
      _DAT_009777fc = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977800,"bool");
      _DAT_0097780c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977810,"Turret");
      _DAT_0097781c = 10;
      _DAT_00977820 = 0x2c8;
      _DAT_00977824 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977828,"ExtrudableTurretSubModule");
      _DAT_00977834 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977838,"AttachedAmmoBay");
      _DAT_00977844 = 10;
      _DAT_00977848 = 0x3d0;
      _DAT_0097784c = 0x98;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977850,"AmmoBaySubModule");
      _DAT_0097785c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977860,"TargetsShips");
      _DAT_0097786c = 1;
      _DAT_00977870 = 0xb0;
      _DAT_00977874 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977878,"bool");
      _DAT_00977884 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977888,"TargetsShots");
      _DAT_00977894 = 1;
      _DAT_00977898 = 0xb1;
      _DAT_0097789c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009778a0,"bool");
      _DAT_009778ac = 0;
      atexit( private__static_int_const___cdecl_RailgunModule__ReflectionInfoStruct_class_RailgunModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_7881ad27__thread_safe_static_guard_0__);
    }
  }
  return 0x10;
}





//==== 00657a10 StaticGetReflectionInfo_00657a10 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct RailgunModule__ReflectionInfoStruct_L_classRailgunModule_G_ * __cdecl
   RailgunModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_RailgunModule_G_ * __cdecl RailgunModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_9c55e4cd__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_9c55e4cd__thread_safe_static_guard_0__);
    if ( cde_l2_9c55e4cd__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_f8ac6ea3_ReflectionInfo) = &vftable_310;
      _Init_thread_footer(& cde_l2_9c55e4cd__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_f8ac6ea3_ReflectionInfo;
}





//==== 00657a70 StaticGetReflectionInfo_00657a70 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct RailsSubModule__ReflectionInfoStruct_L_structRailsSubModule_G_ * __cdecl
   RailsSubModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_struct_RailsSubModule_G_ * __cdecl RailsSubModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_b8a0915b__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_b8a0915b__thread_safe_static_guard_0__);
    if ( cde_l2_b8a0915b__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_b8a0cdcd_ReflectionInfo) = &vftable_309;
      _Init_thread_footer(& cde_l2_b8a0915b__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_b8a0cdcd_ReflectionInfo;
}





//==== 00657b20 GetClassID_00657b20 ====


/* public: virtual unsigned long __thiscall StandaloneLaserMountModule__GetClassID(void)const  */

ulong __thiscall StandaloneLaserMountModule__GetClassID(StandaloneLaserMountModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_6980b995__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_6980b995__thread_safe_static_guard_0__);
    if ( cde_l2_6980b995__thread_safe_static_guard_0__ == -1) {
       cde_l2_451fe096_ID = util__GetHash("StandaloneLaserMountModule");
      _Init_thread_footer(& cde_l2_6980b995__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_451fe096_ID;
}





//==== 00657b80 GetReflectionDependencies_00657b80 ====


/* public: virtual class util__Darray_L_classutil__Reflectable_P_G_ __thiscall
   StandaloneLaserMountModule__GetReflectionDependencies(void)const  */

Darray_L_class_util__Reflectable_P_G_ * __thiscall
StandaloneLaserMountModule__GetReflectionDependencies(StandaloneLaserMountModule *this)

{
  undefined8 stack0x00000004;
  undefined4 uVar1;
  Darray_L_class_util__Reflectable_P_G_ *this_00;
  bool bVar2;
  Darray_L_class_util__Reflectable_P_G_ *in_stack_00000004;
  
  this_00 = in_stack_00000004;
  in_stack_00000004 = (Darray_L_class_util__Reflectable_P_G_ *)0x1;
  *(undefined4 *)this_00 = 0;
  *(undefined4 *)(this_00 + 4) = 0;
  *(undefined4 *)(this_00 + 8) = 0;
  *(undefined4 *)(this_00 + 0xc) = 0;
  *(undefined ***)this_00 = (undefined **)(&vftable_6);
  *(undefined4 *)(this_00 + 4) = 0;
  *(undefined4 *)(this_00 + 8) = 0;
  *(undefined4 *)(this_00 + 0xc) = 0;
  uVar1 = *(undefined4 *)&(this->Turret).Data.field1_0x1;
  util__Darray_class_util__Reflectable____SetSize(this_00,(int *)&stack0x00000004);
  bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                    ((Darray_L_enum_GraphicsResource__Type_G_ *)this_00,0);
  if (bVar2) {
    *(undefined4 *)(*(int *)(this_00 + 4) + -4 + *(int *)(this_00 + 8) * 4) = uVar1;
  }
  return this_00;
}





//==== 00657be0 GetGeneratedName_00657be0 ====

/* public: virtual class util__Str_L_char_G_ 
   StandaloneLaserMountModule__GetGeneratedName(void)const  */

Str_L_char_G_ * 
StandaloneLaserMountModule__GetGeneratedName
          (StandaloneLaserMountModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined8 stack0xfffffd3c;
  int *piVar1;
  Str_L_char_G_ SVar2;
  LocStr *pLVar3;
  Str_L_char_G_ *__return_storage_ptr___00;
  Str_L_char_G_ *__return_storage_ptr___01;
  Str_L_char_G_ *__return_storage_ptr___02;
  Str_L_char_G_ *__return_storage_ptr___03;
  Str_L_char_G_ *__return_storage_ptr___04;
  Str_L_char_G_ *__return_storage_ptr___05;
  Str_L_char_G_ *pSVar4;
  Str_L_char_G_ *pSVar5;
  Str_L_char_G_ *this_00;
  Str_L_char_G_ *pSVar6;
  Str_L_char_G_ *pSVar7;
  Str_L_char_G_ *pSVar8;
  Str_L_char_G_ *pSVar9;
  Str_L_char_G_ *pSVar10;
  Str_L_char_G_ *pSVar11;
  Str_L_char_G_ *pSVar12;
  Str_L_char_G_ *pSVar13;
  Str_L_char_G_ *pSVar14;
  bool bVar15;
  char *in_stack_fffffd3c;
  int in_stack_fffffd40;
  int iVar16;
  Str_L_char_G_ *__return_storage_ptr___06;
  Str_L_char_G_ *__return_storage_ptr___07;
  Str_L_char_G_ *pSVar17;
  void *local_258 [3];
  void *local_24c;
  void *local_240 [3];
  void *local_234;
  void *local_228 [3];
  void *local_21c;
  void *local_210 [3];
  void *local_204;
  void *local_1f8 [3];
  void *local_1ec;
  void *local_1e0 [3];
  void *local_1d4;
  void *local_1c8 [3];
  void *local_1bc;
  void *local_1b0 [3];
  void *local_1a4;
  void *local_198 [3];
  void *local_18c;
  Str_L_char_G_ local_180;
  Str_L_char_G_ local_174;
  Str_L_char_G_ local_168;
  Str_L_char_G_ local_15c;
  Str_L_char_G_ local_150;
  Str_L_char_G_ local_144;
  Str_L_char_G_ local_138;
  Str_L_char_G_ local_12c;
  Str_L_char_G_ local_120;
  Str_L_char_G_ local_114;
  Str_L_char_G_ local_108;
  Str_L_char_G_ local_fc;
  Str_L_char_G_ local_f0;
  Str_L_char_G_ local_e4;
  Str_L_char_G_ local_d8;
  Str_L_char_G_ local_cc;
  Str_L_char_G_ local_c0;
  Str_L_char_G_ local_b4;
  Str_L_char_G_ local_a8;
  Str_L_char_G_ local_9c;
  Str_L_char_G_ local_90;
  Str_L_char_G_ local_84;
  Str_L_char_G_ local_78;
  Str_L_char_G_ local_6c;
  Str_L_char_G_ local_60;
  Str_L_char_G_ local_54;
  Str_L_char_G_ local_48;
  Str_L_char_G_ local_3c;
  Str_L_char_G_ local_30;
  Str_L_char_G_ local_24;
  Str_L_char_G_ local_18;
  Str_L_char_G_ *local_c;
  int local_8;
  
  local_8 = 0;
  util__Str_char___Str_char(&local_180,"Weapon Mount");
  util__Str_char___Str_char(&local_e4,"Space");
  bVar15 = (char)this[1]._pad_0x48_18 == '\0';
  if (bVar15) {
    util__Str_char___Str_char(&local_cc,"Weapon Fixed");
    local_6c.Data = (char *)0x0;
    pLVar3 = (LocStr *)local_240;
    local_6c.Capacity = 0;
    pSVar13 = &local_cc;
    local_6c.Length = 0;
    pSVar14 = &local_6c;
  }
  else {
    util__Str_char___Str_char(&local_d8,"Weapon Turret");
    local_78.Data = (char *)0x0;
    pLVar3 = (LocStr *)local_258;
    local_78.Capacity = 0;
    pSVar13 = &local_d8;
    local_78.Length = 0;
    pSVar14 = &local_78;
  }
  pLVar3 = (LocStr *)util__LocStr__LocStr(pLVar3,pSVar13,pSVar14);
  local_c = util__LocStr__operator__o3(pLVar3);
  util__Str_char___Str_char(&local_c0,"Space");
  util__Str_char___Str_char(&local_b4,"Weapon Laser");
  util__Str_char___Str_char(&local_a8,"Space");
  util__Str_char___Str_char(&local_9c,"Space");
  util__Str_char___Str_char(&local_90,"Space");
  util__Str_char___Str_char(&local_84,"LaserFeed->ArcLamp.PowerSupplied_W");
  iVar16 = *(int *)&(this->Turret).Data.field1_0x1;
  local_60.Data = (char *)0x0;
  local_60.Capacity = 0;
  local_60.Length = 0;
  local_54.Data = (char *)0x0;
  local_54.Capacity = 0;
  local_54.Length = 0;
  local_48.Data = (char *)0x0;
  local_48.Capacity = 0;
  local_48.Length = 0;
  local_3c.Data = (char *)0x0;
  local_3c.Capacity = 0;
  local_3c.Length = 0;
  local_30.Data = (char *)0x0;
  local_30.Capacity = 0;
  local_30.Length = 0;
  local_8 = iVar16;
  LaserModule__GetFinalWavelength_nm_Memoize();
  if (*(char *)(iVar16 + 0xe0) == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_24.Data = (char *)0x0;
  local_24.Capacity = 0;
  local_24.Length = 0;
  local_18.Data = (char *)0x0;
  local_18.Capacity = 0;
  local_18.Length = 0;
  piVar1 = *(int **)(*(int *)&(this->Turret).Data.field1_0x1 + 0x1c0);
  pLVar3 = (LocStr *)util__LocStr__LocStr((LocStr *)local_228,&local_180,&local_60);
  util__LocStr__operator__o3(pLVar3);
  pSVar17 = __return_storage_ptr__;
  pLVar3 = (LocStr *)util__LocStr__LocStr((LocStr *)local_210,&local_e4,&local_54);
  __return_storage_ptr___00 = util__LocStr__operator__o3(pLVar3);
  pSVar14 = &local_f0;
  pSVar13 = &local_fc;
  __return_storage_ptr___07 = local_c;
  pLVar3 = (LocStr *)util__LocStr__LocStr((LocStr *)local_1f8,&local_c0,&local_48);
  __return_storage_ptr___01 = util__LocStr__operator__o3(pLVar3);
  pSVar12 = &local_108;
  pLVar3 = (LocStr *)util__LocStr__LocStr((LocStr *)local_1e0,&local_b4,&local_3c);
  __return_storage_ptr___02 = util__LocStr__operator__o3(pLVar3);
  pSVar11 = &local_114;
  pLVar3 = (LocStr *)util__LocStr__LocStr((LocStr *)local_1c8,&local_a8,&local_30);
  __return_storage_ptr___03 = util__LocStr__operator__o3(pLVar3);
  pSVar10 = &local_120;
  __return_storage_ptr___04 =
       PrintWavelengthName(&local_174,
                           (double)CONCAT44(pSVar10,(int)((ulonglong)*(undefined8 *)(local_8 + 0xd8)
                                                         >> 0x20)));
  pSVar9 = &local_12c;
  pLVar3 = (LocStr *)util__LocStr__LocStr((LocStr *)local_1b0,&local_9c,&local_24);
  __return_storage_ptr___05 = util__LocStr__operator__o3(pLVar3);
  pSVar8 = &local_138;
  __return_storage_ptr___06 = &local_168;
  pSVar4 = (Str_L_char_G_ *)(**(code **)(uintptr_t)(*piVar1 + 0x48))();
  pSVar7 = &local_144;
  iVar16 = 0x657f0e;
  pLVar3 = (LocStr *)util__LocStr__LocStr((LocStr *)local_198,&local_90,&local_18);
  pSVar5 = util__LocStr__operator__o3(pLVar3);
  pSVar6 = &local_150;
  GetUnitsOfType((Str_L_char_G_ *)&stack0xfffffd3c,&local_84);
  SVar2.Capacity = iVar16;
  SVar2.Data = (char *)in_stack_fffffd40;
  SVar2.Length = (int)pSVar6;
  this_00 = Print(&local_15c,
                  (double)CONCAT44(in_stack_fffffd3c,
                                   (int)((ulonglong)
                                         *(undefined8 *)
                                          (*(int *)&(this->Turret).Data.field1_0x1 + 0x170) >> 0x20)
                                  ),SVar2);
  pSVar6 = util__Str_char___operator(this_00,pSVar6,pSVar5);
  pSVar7 = util__Str_char___operator(pSVar6,pSVar7,pSVar4);
  pSVar8 = util__Str_char___operator(pSVar7,__return_storage_ptr___06,pSVar8);
  pSVar9 = util__Str_char___operator(pSVar8,__return_storage_ptr___05,pSVar9);
  pSVar10 = util__Str_char___operator(pSVar9,__return_storage_ptr___04,pSVar10);
  pSVar11 = util__Str_char___operator(pSVar10,__return_storage_ptr___03,pSVar11);
  pSVar12 = util__Str_char___operator(pSVar11,__return_storage_ptr___02,pSVar12);
  pSVar13 = util__Str_char___operator(pSVar12,__return_storage_ptr___01,pSVar13);
  pSVar14 = util__Str_char___operator(pSVar13,__return_storage_ptr___07,pSVar14);
  util__Str_char___operator(pSVar14,__return_storage_ptr___00,pSVar17);
  if (local_f0.Data != (char *)0x0) {
    port_op_delete(local_f0.Data);
    local_f0.Data = (char *)0x0;
  }
  if (local_fc.Data != (char *)0x0) {
    port_op_delete(local_fc.Data);
    local_fc.Data = (char *)0x0;
  }
  if (local_108.Data != (char *)0x0) {
    port_op_delete(local_108.Data);
    local_108.Data = (char *)0x0;
  }
  if (local_114.Data != (char *)0x0) {
    port_op_delete(local_114.Data);
    local_114.Data = (char *)0x0;
  }
  if (local_120.Data != (char *)0x0) {
    port_op_delete(local_120.Data);
    local_120.Data = (char *)0x0;
  }
  if (local_12c.Data != (char *)0x0) {
    port_op_delete(local_12c.Data);
    local_12c.Data = (char *)0x0;
  }
  if (local_138.Data != (char *)0x0) {
    port_op_delete(local_138.Data);
    local_138.Data = (char *)0x0;
  }
  if (local_144.Data != (char *)0x0) {
    port_op_delete(local_144.Data);
    local_144.Data = (char *)0x0;
  }
  if (local_150.Data != (char *)0x0) {
    port_op_delete(local_150.Data);
    local_150.Data = (char *)0x0;
  }
  if (local_15c.Data != (char *)0x0) {
    port_op_delete(local_15c.Data);
    local_15c.Data = (char *)0x0;
  }
  if (local_18c != (void *)0x0) {
    port_op_delete(local_18c);
    local_18c = (void *)0x0;
  }
  if (local_198[0] != (void *)0x0) {
    port_op_delete(local_198[0]);
    local_198[0] = (void *)0x0;
  }
  if (local_18.Data != (char *)0x0) {
    port_op_delete(local_18.Data);
    local_18.Data = (char *)0x0;
  }
  if (local_168.Data != (char *)0x0) {
    port_op_delete(local_168.Data);
    local_168.Data = (char *)0x0;
  }
  if (local_1a4 != (void *)0x0) {
    port_op_delete(local_1a4);
    local_1a4 = (void *)0x0;
  }
  if (local_1b0[0] != (void *)0x0) {
    port_op_delete(local_1b0[0]);
    local_1b0[0] = (void *)0x0;
  }
  if (local_24.Data != (char *)0x0) {
    port_op_delete(local_24.Data);
    local_24.Data = (char *)0x0;
  }
  if (local_174.Data != (char *)0x0) {
    port_op_delete(local_174.Data);
    local_174.Data = (char *)0x0;
  }
  if (local_1bc != (void *)0x0) {
    port_op_delete(local_1bc);
    local_1bc = (void *)0x0;
  }
  if (local_1c8[0] != (void *)0x0) {
    port_op_delete(local_1c8[0]);
    local_1c8[0] = (void *)0x0;
  }
  if (local_30.Data != (char *)0x0) {
    port_op_delete(local_30.Data);
    local_30.Data = (char *)0x0;
  }
  if (local_1d4 != (void *)0x0) {
    port_op_delete(local_1d4);
    local_1d4 = (void *)0x0;
  }
  if (local_1e0[0] != (void *)0x0) {
    port_op_delete(local_1e0[0]);
    local_1e0[0] = (void *)0x0;
  }
  if (local_3c.Data != (char *)0x0) {
    port_op_delete(local_3c.Data);
    local_3c.Data = (char *)0x0;
  }
  if (local_1ec != (void *)0x0) {
    port_op_delete(local_1ec);
    local_1ec = (void *)0x0;
  }
  if (local_1f8[0] != (void *)0x0) {
    port_op_delete(local_1f8[0]);
    local_1f8[0] = (void *)0x0;
  }
  if (local_48.Data != (char *)0x0) {
    port_op_delete(local_48.Data);
    local_48.Data = (char *)0x0;
  }
  if (local_204 != (void *)0x0) {
    port_op_delete(local_204);
    local_204 = (void *)0x0;
  }
  if (local_210[0] != (void *)0x0) {
    port_op_delete(local_210[0]);
    local_210[0] = (void *)0x0;
  }
  if (local_54.Data != (char *)0x0) {
    port_op_delete(local_54.Data);
    local_54.Data = (char *)0x0;
  }
  if (local_21c != (void *)0x0) {
    port_op_delete(local_21c);
    local_21c = (void *)0x0;
  }
  if (local_228[0] != (void *)0x0) {
    port_op_delete(local_228[0]);
    local_228[0] = (void *)0x0;
  }
  if (local_60.Data != (char *)0x0) {
    port_op_delete(local_60.Data);
    local_60.Data = (char *)0x0;
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
  if (local_b4.Data != (char *)0x0) {
    port_op_delete(local_b4.Data);
    local_b4.Data = (char *)0x0;
  }
  if (local_c0.Data != (char *)0x0) {
    port_op_delete(local_c0.Data);
    local_c0.Data = (char *)0x0;
  }
  if (bVar15) {
    if (local_234 != (void *)0x0) {
      port_op_delete(local_234);
      local_234 = (void *)0x0;
    }
    if (local_240[0] != (void *)0x0) {
      port_op_delete(local_240[0]);
      local_240[0] = (void *)0x0;
    }
  }
  if (bVar15) {
    if (local_6c.Data != (char *)0x0) {
      port_op_delete(local_6c.Data);
      local_6c.Data = (char *)0x0;
    }
  }
  if (bVar15) {
    if (local_cc.Data != (char *)0x0) {
      port_op_delete(local_cc.Data);
      local_cc.Data = (char *)0x0;
    }
  }
  if (!bVar15) {
    if (local_24c != (void *)0x0) {
      port_op_delete(local_24c);
      local_24c = (void *)0x0;
    }
    if (local_258[0] != (void *)0x0) {
      port_op_delete(local_258[0]);
      local_258[0] = (void *)0x0;
    }
  }
  if (!bVar15) {
    if (local_78.Data != (char *)0x0) {
      port_op_delete(local_78.Data);
      local_78.Data = (char *)0x0;
    }
  }
  if ((local_d8.Data != (char *)0x0) && (!bVar15)) {
    port_op_delete(local_d8.Data);
    local_d8.Data = (char *)0x0;
  }
  if (local_e4.Data != (char *)0x0) {
    port_op_delete(local_e4.Data);
    local_e4.Data = (char *)0x0;
  }
  if (local_180.Data != (char *)0x0) {
    port_op_delete(local_180.Data);
  }
  return __return_storage_ptr__;
}

//==== 00658520 GetShortName_00658520 ====

/* public: virtual class util__Str_L_char_G_ 
   StandaloneLaserMountModule__GetShortName(void)const  */

Str_L_char_G_ * 
StandaloneLaserMountModule__GetShortName
          (StandaloneLaserMountModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined8 stack0xfffffdb8;
  int iVar1;
  Str_L_char_G_ SVar2;
  LocStr *pLVar3;
  Str_L_char_G_ *pSVar4;
  Str_L_char_G_ *pSVar5;
  Str_L_char_G_ *pSVar6;
  Str_L_char_G_ *pSVar7;
  Str_L_char_G_ *pSVar8;
  Str_L_char_G_ *pSVar9;
  Str_L_char_G_ *pSVar10;
  Str_L_char_G_ *this_00;
  Str_L_char_G_ *pSVar11;
  Str_L_char_G_ *pSVar12;
  Str_L_char_G_ *pSVar13;
  Str_L_char_G_ *pSVar14;
  Str_L_char_G_ *pSVar15;
  Str_L_char_G_ *pSVar16;
  Str_L_char_G_ *pSVar17;
  bool bVar18;
  char *in_stack_fffffdb8;
  int in_stack_fffffdbc;
  int iVar19;
  Str_L_char_G_ *pSVar20;
  Str_L_char_G_ *__return_storage_ptr___00;
  void *local_200 [3];
  void *local_1f4;
  void *local_1e8 [3];
  void *local_1dc;
  void *local_1d0 [3];
  void *local_1c4;
  void *local_1b8 [3];
  void *local_1ac;
  void *local_1a0 [3];
  void *local_194;
  void *local_188 [3];
  void *local_17c;
  void *local_170 [3];
  void *local_164;
  void *local_158 [3];
  void *local_14c;
  Str_L_char_G_ local_140;
  Str_L_char_G_ local_134;
  Str_L_char_G_ local_128;
  Str_L_char_G_ local_11c;
  Str_L_char_G_ local_110;
  Str_L_char_G_ local_104;
  Str_L_char_G_ local_f8;
  Str_L_char_G_ local_ec;
  Str_L_char_G_ local_e0;
  Str_L_char_G_ local_d4;
  Str_L_char_G_ local_c8;
  Str_L_char_G_ local_bc;
  Str_L_char_G_ local_b0;
  Str_L_char_G_ local_a4;
  Str_L_char_G_ local_98;
  Str_L_char_G_ local_8c;
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
  Str_L_char_G_ *local_8;
  
  local_8 = (Str_L_char_G_ *)0x0;
  util__Str_char___Str_char(&local_140,"Weapon Mount");
  util__Str_char___Str_char(&local_c8,"Space");
  bVar18 = (char)this[1]._pad_0x48_18 == '\0';
  if (bVar18) {
    util__Str_char___Str_char(&local_b0,"Weapon Fixed");
    local_5c.Data = (char *)0x0;
    pLVar3 = (LocStr *)local_1e8;
    local_5c.Capacity = 0;
    pSVar16 = &local_b0;
    local_5c.Length = 0;
    pSVar17 = &local_5c;
  }
  else {
    util__Str_char___Str_char(&local_bc,"Weapon Turret");
    local_68.Data = (char *)0x0;
    pLVar3 = (LocStr *)local_200;
    local_68.Capacity = 0;
    pSVar16 = &local_bc;
    local_68.Length = 0;
    pSVar17 = &local_68;
  }
  pLVar3 = (LocStr *)util__LocStr__LocStr(pLVar3,pSVar16,pSVar17);
  local_8 = util__LocStr__operator__o3(pLVar3);
  util__Str_char___Str_char(&local_a4,"Space");
  util__Str_char___Str_char(&local_98,"Weapon Laser");
  util__Str_char___Str_char(&local_8c,"Space");
  util__Str_char___Str_char(&local_80,"LaserFeed->ArcLamp.PowerSupplied_W");
  util__Str_char___Str_char(&local_74,"Space");
  iVar1 = *(int *)&(this->Turret).Data.field1_0x1;
  local_50.Data = (char *)0x0;
  local_50.Capacity = 0;
  local_50.Length = 0;
  local_44.Data = (char *)0x0;
  local_44.Capacity = 0;
  local_44.Length = 0;
  local_38.Data = (char *)0x0;
  local_38.Capacity = 0;
  local_38.Length = 0;
  local_2c.Data = (char *)0x0;
  local_2c.Capacity = 0;
  local_2c.Length = 0;
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  local_20.Length = 0;
  local_14.Data = (char *)0x0;
  local_14.Capacity = 0;
  local_14.Length = 0;
  LaserModule__GetFinalWavelength_nm_Memoize();
  if (*(char *)(iVar1 + 0xe0) == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pLVar3 = (LocStr *)util__LocStr__LocStr((LocStr *)local_1d0,&local_140,&local_50);
  pSVar4 = util__LocStr__operator__o3(pLVar3);
  __return_storage_ptr___00 = __return_storage_ptr__;
  pLVar3 = (LocStr *)util__LocStr__LocStr((LocStr *)local_1b8,&local_c8,&local_44);
  pSVar5 = util__LocStr__operator__o3(pLVar3);
  pSVar17 = &local_d4;
  pSVar16 = &local_e0;
  pSVar20 = local_8;
  pLVar3 = (LocStr *)util__LocStr__LocStr((LocStr *)local_1a0,&local_a4,&local_38);
  pSVar6 = util__LocStr__operator__o3(pLVar3);
  pSVar15 = &local_ec;
  pLVar3 = (LocStr *)util__LocStr__LocStr((LocStr *)local_188,&local_98,&local_2c);
  pSVar7 = util__LocStr__operator__o3(pLVar3);
  pSVar14 = &local_f8;
  iVar19 = 0x65878d;
  pLVar3 = (LocStr *)util__LocStr__LocStr((LocStr *)local_170,&local_8c,&local_20);
  pSVar8 = util__LocStr__operator__o3(pLVar3);
  pSVar13 = &local_104;
  GetUnitsOfType((Str_L_char_G_ *)&stack0xfffffdb8,&local_80);
  SVar2.Capacity = iVar19;
  SVar2.Data = (char *)in_stack_fffffdbc;
  SVar2.Length = (int)pSVar13;
  pSVar9 = Print(&local_134,
                 (double)CONCAT44(in_stack_fffffdb8,
                                  (int)((ulonglong)
                                        *(undefined8 *)
                                         (*(int *)&(this->Turret).Data.field1_0x1 + 0x170) >> 0x20))
                 ,SVar2);
  pSVar12 = &local_110;
  pLVar3 = (LocStr *)util__LocStr__LocStr((LocStr *)local_158,&local_74,&local_14);
  pSVar10 = util__LocStr__operator__o3(pLVar3);
  pSVar11 = &local_11c;
  this_00 = PrintWavelengthName(&local_128,
                                (double)CONCAT44(pSVar11,(int)((ulonglong)
                                                               *(undefined8 *)(iVar1 + 0xd8) >> 0x20
                                                              )));
  pSVar11 = util__Str_char___operator(this_00,pSVar11,pSVar10);
  pSVar12 = util__Str_char___operator(pSVar11,pSVar12,pSVar9);
  pSVar13 = util__Str_char___operator(pSVar12,pSVar13,pSVar8);
  pSVar14 = util__Str_char___operator(pSVar13,pSVar14,pSVar7);
  pSVar15 = util__Str_char___operator(pSVar14,pSVar15,pSVar6);
  pSVar16 = util__Str_char___operator(pSVar15,pSVar16,pSVar20);
  pSVar17 = util__Str_char___operator(pSVar16,pSVar17,pSVar5);
  util__Str_char___operator(pSVar17,__return_storage_ptr___00,pSVar4);
  if (local_d4.Data != (char *)0x0) {
    port_op_delete(local_d4.Data);
    local_d4.Data = (char *)0x0;
  }
  if (local_e0.Data != (char *)0x0) {
    port_op_delete(local_e0.Data);
    local_e0.Data = (char *)0x0;
  }
  if (local_ec.Data != (char *)0x0) {
    port_op_delete(local_ec.Data);
    local_ec.Data = (char *)0x0;
  }
  if (local_f8.Data != (char *)0x0) {
    port_op_delete(local_f8.Data);
    local_f8.Data = (char *)0x0;
  }
  if (local_104.Data != (char *)0x0) {
    port_op_delete(local_104.Data);
    local_104.Data = (char *)0x0;
  }
  if (local_110.Data != (char *)0x0) {
    port_op_delete(local_110.Data);
    local_110.Data = (char *)0x0;
  }
  if (local_11c.Data != (char *)0x0) {
    port_op_delete(local_11c.Data);
    local_11c.Data = (char *)0x0;
  }
  if (local_128.Data != (char *)0x0) {
    port_op_delete(local_128.Data);
    local_128.Data = (char *)0x0;
  }
  if (local_14c != (void *)0x0) {
    port_op_delete(local_14c);
    local_14c = (void *)0x0;
  }
  if (local_158[0] != (void *)0x0) {
    port_op_delete(local_158[0]);
    local_158[0] = (void *)0x0;
  }
  if (local_14.Data != (char *)0x0) {
    port_op_delete(local_14.Data);
    local_14.Data = (char *)0x0;
  }
  if (local_134.Data != (char *)0x0) {
    port_op_delete(local_134.Data);
    local_134.Data = (char *)0x0;
  }
  if (local_164 != (void *)0x0) {
    port_op_delete(local_164);
    local_164 = (void *)0x0;
  }
  if (local_170[0] != (void *)0x0) {
    port_op_delete(local_170[0]);
    local_170[0] = (void *)0x0;
  }
  if (local_20.Data != (char *)0x0) {
    port_op_delete(local_20.Data);
    local_20.Data = (char *)0x0;
  }
  if (local_17c != (void *)0x0) {
    port_op_delete(local_17c);
    local_17c = (void *)0x0;
  }
  if (local_188[0] != (void *)0x0) {
    port_op_delete(local_188[0]);
    local_188[0] = (void *)0x0;
  }
  if (local_2c.Data != (char *)0x0) {
    port_op_delete(local_2c.Data);
    local_2c.Data = (char *)0x0;
  }
  if (local_194 != (void *)0x0) {
    port_op_delete(local_194);
    local_194 = (void *)0x0;
  }
  if (local_1a0[0] != (void *)0x0) {
    port_op_delete(local_1a0[0]);
    local_1a0[0] = (void *)0x0;
  }
  if (local_38.Data != (char *)0x0) {
    port_op_delete(local_38.Data);
    local_38.Data = (char *)0x0;
  }
  if (local_1ac != (void *)0x0) {
    port_op_delete(local_1ac);
    local_1ac = (void *)0x0;
  }
  if (local_1b8[0] != (void *)0x0) {
    port_op_delete(local_1b8[0]);
    local_1b8[0] = (void *)0x0;
  }
  if (local_44.Data != (char *)0x0) {
    port_op_delete(local_44.Data);
    local_44.Data = (char *)0x0;
  }
  if (local_1c4 != (void *)0x0) {
    port_op_delete(local_1c4);
    local_1c4 = (void *)0x0;
  }
  if (local_1d0[0] != (void *)0x0) {
    port_op_delete(local_1d0[0]);
    local_1d0[0] = (void *)0x0;
  }
  if (local_50.Data != (char *)0x0) {
    port_op_delete(local_50.Data);
    local_50.Data = (char *)0x0;
  }
  if (local_74.Data != (char *)0x0) {
    port_op_delete(local_74.Data);
    local_74.Data = (char *)0x0;
  }
  if (local_80.Data != (char *)0x0) {
    port_op_delete(local_80.Data);
    local_80.Data = (char *)0x0;
  }
  if (local_8c.Data != (char *)0x0) {
    port_op_delete(local_8c.Data);
    local_8c.Data = (char *)0x0;
  }
  if (local_98.Data != (char *)0x0) {
    port_op_delete(local_98.Data);
    local_98.Data = (char *)0x0;
  }
  if (local_a4.Data != (char *)0x0) {
    port_op_delete(local_a4.Data);
    local_a4.Data = (char *)0x0;
  }
  if (bVar18) {
    if (local_1dc != (void *)0x0) {
      port_op_delete(local_1dc);
      local_1dc = (void *)0x0;
    }
    if (local_1e8[0] != (void *)0x0) {
      port_op_delete(local_1e8[0]);
      local_1e8[0] = (void *)0x0;
    }
  }
  if (bVar18) {
    if (local_5c.Data != (char *)0x0) {
      port_op_delete(local_5c.Data);
      local_5c.Data = (char *)0x0;
    }
  }
  if (bVar18) {
    if (local_b0.Data != (char *)0x0) {
      port_op_delete(local_b0.Data);
      local_b0.Data = (char *)0x0;
    }
  }
  if (!bVar18) {
    if (local_1f4 != (void *)0x0) {
      port_op_delete(local_1f4);
      local_1f4 = (void *)0x0;
    }
    if (local_200[0] != (void *)0x0) {
      port_op_delete(local_200[0]);
      local_200[0] = (void *)0x0;
    }
  }
  if (!bVar18) {
    if (local_68.Data != (char *)0x0) {
      port_op_delete(local_68.Data);
      local_68.Data = (char *)0x0;
    }
  }
  if ((local_bc.Data != (char *)0x0) && (!bVar18)) {
    port_op_delete(local_bc.Data);
    local_bc.Data = (char *)0x0;
  }
  if (local_c8.Data != (char *)0x0) {
    port_op_delete(local_c8.Data);
    local_c8.Data = (char *)0x0;
  }
  if (local_140.Data != (char *)0x0) {
    port_op_delete(local_140.Data);
  }
  return __return_storage_ptr__;
}

//==== 00658d10 GetIcon_00658d10 ====


/* public: virtual void (__cdecl*__thiscall StandaloneLaserMountModule__GetIcon(void)const )(void)
    */

_func_void * __thiscall StandaloneLaserMountModule__GetIcon(StandaloneLaserMountModule *this)

{
  return Icons__LaserMount;
}





//==== 00658e80 GetArmorCarvingRadius_m_00658e80 ====

/* public: virtual class util__Maybe_L_double_G_ 
   StandaloneLaserMountModule__GetArmorCarvingRadius_m(void)const  */

Maybe_L_double_G_ * 
StandaloneLaserMountModule__GetArmorCarvingRadius_m
          (StandaloneLaserMountModule *this,Maybe_L_double_G_ *__return_storage_ptr__)

{
  double dVar1;
  
  if ((char)this[1]._pad_0x48_18 == '\0') {
    dVar1 = LaserModule__GetFocusingMirrorRadius_m((LaserModule *)&(this->Turret).Data.field1_0x1)
    ;
  }
  else {
    if ((char)this[1]._pad_0x48_18 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar1 = TurretSubModule__GetOuterRadius_m((TurretSubModule *)&(this->Turret).Data.field0_0x0);
  }
  __return_storage_ptr__->Data = dVar1;
  __return_storage_ptr__->IsValidData = true;
  return __return_storage_ptr__;
}

//==== 00658ef0 GetCubicBoundingBox_m_00658ef0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual struct util__AABB_L_structutil__Vec3_L_double_G__G_ __thiscall
   StandaloneLaserMountModule__GetCubicBoundingBox_m(void)const  */

AABB_L_util__Vec3_L_double_G___G_ * __thiscall
StandaloneLaserMountModule__GetCubicBoundingBox_m
          (StandaloneLaserMountModule *this,AABB_L_util__Vec3_L_double_G___G_ *__return_storage_ptr__)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  if ((char)this[1]._pad_0x48_18 == '\0') {
    dVar8 = LaserModule__GetFocusingMirrorRadius_m((LaserModule *)&(this->Turret).Data.field1_0x1)
    ;
  }
  else {
    if ((char)this[1]._pad_0x48_18 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar8 = TurretSubModule__GetOuterRadius_m((TurretSubModule *)&(this->Turret).Data.field0_0x0);
  }
  if ((char)this[1]._pad_0x48_18 == '\0') {
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    if ((char)this[1]._pad_0x48_18 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar9 = TurretSubModule__GetOuterRadius_m((TurretSubModule *)&(this->Turret).Data.field0_0x0);
    uVar1 = SUB84(dVar9,0);
    uVar2 = (uint)((ulonglong)dVar9 >> 0x20);
  }
  if ((char)this[1]._pad_0x48_18 == '\0') {
    if ((char)this[1]._pad_0x78_30 == '\0') {
      dVar9 = 0.0;
    }
    else {
      dVar9 = FixedLaserMountSubModule__GetLength_m
                        ((FixedLaserMountSubModule *)&this[1]._pad_0x50_20);
    }
  }
  else {
    if ((char)this[1]._pad_0x48_18 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
      if ((char)this[1]._pad_0x48_18 == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
    }
    dVar10 = TurretSubModule__GetExtruderLength_m
                       ((TurretSubModule *)&(this->Turret).Data.field0_0x0);
    dVar9 = TurretSubModule__GetOuterRadius_m((TurretSubModule *)&(this->Turret).Data.field0_0x0);
    dVar9 = dVar9 + dVar10;
  }
  uVar4 = SUB84(dVar8,0);
  uVar5 = (uint)((ulonglong)dVar8 >> 0x20);
  uVar7 = uVar2 ^ 0x80000000;
  dVar10 = (double)CONCAT44(uVar2,uVar1);
  uVar3 = uVar5 ^ 0x80000000;
  if (dVar8 <= -dVar8) {
    uVar3 = uVar5;
  }
  uVar6 = uVar5 ^ 0x80000000;
  if (-dVar8 <= dVar8) {
    uVar6 = uVar5;
  }
  *(undefined4 *)&(__return_storage_ptr__->Lower).X = uVar4;
  *(uint *)((int)&(__return_storage_ptr__->Lower).X + 4) = uVar3;
  *(undefined4 *)&(__return_storage_ptr__->Lower).Y = uVar4;
  *(uint *)((int)&(__return_storage_ptr__->Lower).Y + 4) = uVar3;
  if (dVar9 <= -(double)CONCAT44(uVar2,uVar1)) {
    uVar1 = SUB84(dVar9,0);
    uVar7 = (uint)((ulonglong)dVar9 >> 0x20);
  }
  dVar8 = -dVar10;
  if (-dVar10 <= dVar9) {
    dVar8 = dVar9;
  }
  (__return_storage_ptr__->Lower).Z = (double)CONCAT44(uVar7,uVar1);
  *(undefined4 *)&(__return_storage_ptr__->Upper).X = uVar4;
  *(uint *)((int)&(__return_storage_ptr__->Upper).X + 4) = uVar6;
  *(undefined4 *)&(__return_storage_ptr__->Upper).Y = uVar4;
  *(uint *)((int)&(__return_storage_ptr__->Upper).Y + 4) = uVar6;
  (__return_storage_ptr__->Upper).Z = dVar8;
  return __return_storage_ptr__;
}

//==== 006590a0 GetComposition_006590a0 ====


/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   StandaloneLaserMountModule__GetComposition(void)const  */

Darray_L_struct_MaterialConstituent_G_ * __thiscall
StandaloneLaserMountModule__GetComposition(StandaloneLaserMountModule *this,Darray_L_struct_MaterialConstituent_G_ * __return_storage_ptr__)

{
  undefined8 stack0x00000004;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Darray_L_struct_MaterialConstituent_G_ *this_00;
  Darray_L_struct_MaterialConstituent_G_ *pDVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;

  undefined **ppuStack_14;
  void *pvStack_10;
  
  this_00 = __return_storage_ptr__;
  *(undefined4 *)__return_storage_ptr__ = 0;
  *(undefined4 *)(__return_storage_ptr__ + 4) = 0;
  *(undefined4 *)(__return_storage_ptr__ + 8) = 0;
  *(undefined4 *)(__return_storage_ptr__ + 0xc) = 0;
  Module__GetComposition((Module *)this,(Darray_L_MaterialComposition_G_ *)__return_storage_ptr__);
  pDVar5 = (Darray_L_struct_MaterialConstituent_G_ *)
           (**(code **)(*(int *)(*(int *)&(this->Turret).Data.field1_0x1 + 0x388) + 0x68))
                     (&ppuStack_14);
  if (*(int *)(this_00 + 8) == 0) {
    util__Darray_struct_MaterialConstituent___operator(this_00,pDVar5);
  }
  else {
    iVar6 = (**(code **)(*(int *)pDVar5 + 0xc))();
    if (iVar6 != 0) {
      iVar6 = *(int *)(this_00 + 8);
      iVar7 = (**(code **)(*(int *)pDVar5 + 0xc))();
      __return_storage_ptr__ = (Darray_L_struct_MaterialConstituent_G_ *)(iVar7 + *(int *)(this_00 + 8));
      util__Darray_struct_MaterialConstituent___SetSize(this_00,(int *)&stack0x00000004);
      util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar6);
      puVar8 = *(undefined4 **)(pDVar5 + 4);
      puVar9 = (undefined4 *)(iVar6 * 0x10 + *(int *)(this_00 + 4));
      if (puVar9 != (undefined4 *)(*(int *)(this_00 + 8) * 0x10 + *(int *)(this_00 + 4))) {
        do {
          uVar1 = *puVar8;
          uVar2 = puVar8[1];
          uVar3 = puVar8[2];
          uVar4 = puVar8[3];
          puVar8 = puVar8 + 4;
          *puVar9 = uVar1;
          puVar9[1] = uVar2;
          puVar9[2] = uVar3;
          puVar9[3] = uVar4;
          puVar9 = puVar9 + 4;
        } while (puVar9 != (undefined4 *)(*(int *)(this_00 + 8) * 0x10 + *(int *)(this_00 + 4)));
      }
    }
  }
  ppuStack_14 = (undefined **)(&vftable_75);
  if (pvStack_10 != (void *)0x0) {
    port_op_delete(pvStack_10);
  }
  return this_00;
}





//==== 00659160 GetCrewRequired_00659160 ====

/* public: virtual class util__Darray_L_structCrewJob_G_ __thiscall
   StandaloneLaserMountModule__GetCrewRequired(void)const  */

Darray_L_CrewJob_G_ * __thiscall
StandaloneLaserMountModule__GetCrewRequired
          (StandaloneLaserMountModule *this,Darray_L_CrewJob_G_ *__return_storage_ptr__)

{
  int iVar1;
  CrewJob *pCVar2;
  Darray_L_CrewJob_G_ *this_00;
  bool bVar3;
  Str_L_char_G_ *pSVar4;
  LocStr *this_01;
  char *pcVar5;
  char *pcVar6;
  float10 fVar7;
  undefined4 uVar8;
  Str_L_char_G_ local_70;
  double local_64;
  undefined1 local_5c;
  void *local_54 [3];
  void *local_48;
  Str_L_char_G_ local_3c;
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
  fVar7 = (float10)(**(code **)(this->_pad_0x0_0 + 0x198))();
  local_c = (double)fVar7;
  if (0.0 < local_c) {
    fVar7 = (float10)(**(code **)(this->_pad_0x0_0 + 0x19c))();
    if (0.0 < (double)fVar7) {
      uVar8 = 0x3fd99999;
      goto LAB_006591d8;
    }
  }
  uVar8 = 0x3fc99999;
LAB_006591d8:
  local_c = (double)CONCAT44(uVar8,0x9999999a);
  util__Str_char___Str_char(&local_3c,"CrewGunner");
  pSVar4 = Module__GetQuickName((Module *)this,&local_30);
  if (pSVar4->Capacity < 1) {
    pcVar6 = "";
  }
  else {
    pcVar6 = pSVar4->Data;
  }
  local_18.Data = (char *)0x0;
  local_18.Capacity = 0;
  local_18.Length = 0;
  this_01 = (LocStr *)util__LocStr__LocStr((LocStr *)local_54,&local_3c,&local_18);
  pSVar4 = util__LocStr__operator__o3(this_01);
  if (pSVar4->Capacity < 1) {
    pcVar5 = "";
  }
  else {
    pcVar5 = pSVar4->Data;
  }
  util__Printf(&local_24,pcVar5,pcVar6);
  util__Str_char___Str_char(&local_70,&local_24);
  local_64 = local_c * 0.5;
  local_5c = 0;
  local_c = local_64;
  if (local_24.Data != (char *)0x0) {
    port_op_delete(local_24.Data);
    local_24.Data = (char *)0x0;
  }
  iVar1 = this_00->Size;
  __return_storage_ptr__ = (Darray_L_CrewJob_G_ *)(iVar1 + 1);
  util__Darray_L_CrewJob_G___SetSize(this_00,(int *)&__return_storage_ptr__);
  bVar3 = util__Darray_L_CrewJob_G___CheckSize(this_00,iVar1);
  if (bVar3) {
    pCVar2 = this_00->Data;
    iVar1 = this_00->Size;
    pCVar2[iVar1 + -1].Dept = CrewDepartment__Weapons;
    util__Str_char___operator__o8(&pCVar2[iVar1 + -1].Name,&local_70);
    pCVar2[iVar1 + -1].CrewRequired = local_c;
    pCVar2[iVar1 + -1].WatchRequired = false;
  }
  if (local_70.Data != (char *)0x0) {
    port_op_delete(local_70.Data);
  }
  if (local_48 != (void *)0x0) {
    port_op_delete(local_48);
    local_48 = (void *)0x0;
  }
  if (local_54[0] != (void *)0x0) {
    port_op_delete(local_54[0]);
    local_54[0] = (void *)0x0;
  }
  if (local_18.Data != (char *)0x0) {
    port_op_delete(local_18.Data);
    local_18.Data = (char *)0x0;
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

//==== 00659370 GetEngagementRange_km_00659370 ====


/* public: virtual class util__Maybe_L_double_G_ 
   StandaloneLaserMountModule__GetEngagementRange_km(double)const  */

Maybe_L_double_G_ * 
StandaloneLaserMountModule__GetEngagementRange_km
          (StandaloneLaserMountModule *this,Maybe_L_double_G_ *__return_storage_ptr__,double param_1)

{
  __return_storage_ptr__->Data = *(double *)(*(int *)&(this->Turret).Data.field1_0x1 + 0x500);
  __return_storage_ptr__->IsValidData = true;
  return __return_storage_ptr__;
}





//==== 00659390 GetMaxDeviationAngle_radians_00659390 ====

/* public: virtual double __thiscall
   StandaloneLaserMountModule__GetMaxDeviationAngle_radians(void)const  */

double __thiscall
StandaloneLaserMountModule__GetMaxDeviationAngle_radians(StandaloneLaserMountModule *this)

{
  double dVar1;
  
  if ((char)this[1]._pad_0x48_18 != '\0') {
    if ((char)this[1]._pad_0x48_18 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar1 = TurretSubModule__GetMaxDeviationAngle_radians
                      ((TurretSubModule *)&(this->Turret).Data.field0_0x0);
    return dVar1;
  }
  return 0.0;
}

//==== 006593f0 GetTurningAngularVelocity_radians__s_006593f0 ====

/* public: virtual double __thiscall
   StandaloneLaserMountModule__GetTurningAngularVelocity_radians__s(void)const  */

double __thiscall
StandaloneLaserMountModule__GetTurningAngularVelocity_radians__s(StandaloneLaserMountModule *this)

{
  double dVar1;
  
  if ((char)this[1]._pad_0x48_18 != '\0') {
    if ((char)this[1]._pad_0x48_18 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar1 = TurretSubModule__GetRotationalSpeed_radians__s
                      ((TurretSubModule *)&(this->Turret).Data.field0_0x0);
    return dVar1;
  }
  return 0.0;
}

//==== 00659450 GetTurningPowerDrain_W_00659450 ====

/* public: virtual double __thiscall StandaloneLaserMountModule__GetTurningPowerDrain_W(void)const
    */

double __thiscall
StandaloneLaserMountModule__GetTurningPowerDrain_W(StandaloneLaserMountModule *this)

{
  double dVar1;
  
  if ((char)this[1]._pad_0x48_18 != '\0') {
    if ((char)this[1]._pad_0x48_18 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar1 = TurretSubModule__GetPowerConsumption_W
                      ((TurretSubModule *)&(this->Turret).Data.field0_0x0);
    return dVar1;
  }
  return 0.0;
}

//==== 006594b0 GetShotCreationOffset_m_006594b0 ====

/* public: virtual double __thiscall StandaloneLaserMountModule__GetShotCreationOffset_m(void)const
    */

double __thiscall
StandaloneLaserMountModule__GetShotCreationOffset_m(StandaloneLaserMountModule *this)

{
  float10 fVar1;
  double dVar2;
  
  if ((char)this[1]._pad_0x48_18 == '\0') {
    dVar2 = 0.0;
  }
  else {
    dVar2 = TurretSubModule__GetOuterRadius_m((TurretSubModule *)&(this->Turret).Data.field0_0x0);
  }
  fVar1 = (float10)(**(code **)(*(int *)(*(int *)&(this->Turret).Data.field1_0x1 + 0x388) + 0x7c))()
  ;
  return (double)(fVar1 + (float10)dVar2);
}

//==== 00659500 GetCenterExtrusionOffset_m_00659500 ====

/* public: virtual double __thiscall
   StandaloneLaserMountModule__GetCenterExtrusionOffset_m(void)const  */

double __thiscall
StandaloneLaserMountModule__GetCenterExtrusionOffset_m(StandaloneLaserMountModule *this)

{
  double dVar1;
  
  if ((char)this[1]._pad_0x48_18 != '\0') {
    if ((char)this[1]._pad_0x48_18 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar1 = TurretSubModule__GetExtruderLength_m((TurretSubModule *)&(this->Turret).Data.field0_0x0)
    ;
    return dVar1;
  }
  return 0.0;
}

//==== 00659560 GetRadiusAtDistance_m_00659560 ====


/* public: virtual double __thiscall StandaloneLaserMountModule__GetRadiusAtDistance_m(double)const
    */

double __thiscall
StandaloneLaserMountModule__GetRadiusAtDistance_m(StandaloneLaserMountModule *this,double param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)(**(code **)(*(int *)((this->Turret).Data.field1_0x1 + 0x160)))(param_1);
  return (double)fVar1;
}





//==== 00659590 GetEnergyNeededToFire_J_00659590 ====


/* public: virtual double __thiscall
   StandaloneLaserMountModule__GetEnergyNeededToFire_J(double)const  */

double __thiscall
StandaloneLaserMountModule__GetEnergyNeededToFire_J(StandaloneLaserMountModule *this,double param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)(**(code **)(*(int *)((this->Turret).Data.field1_0x1 + 400)))(param_1);
  return (double)fVar1;
}





//==== 006595c0 GetFeederWeaponType ====


/* public: virtual class WeaponModule * __thiscall
   StandaloneLaserMountModule__GetFeederWeaponType(void)const  */

WeaponModule * __thiscall
StandaloneLaserMountModule__GetFeederWeaponType(StandaloneLaserMountModule *this)

{
  return (WeaponModule *)((this->Turret).Data.field1_0x1);
}





//==== 006595d0 GetStatuses_006595d0 ====

/* public: virtual class DesignStatusBuffer  StandaloneLaserMountModule__GetStatuses(class
   DataParser *)const  */

DesignStatusBuffer * 
StandaloneLaserMountModule__GetStatuses
          (StandaloneLaserMountModule *this,DesignStatusBuffer *__return_storage_ptr__,
          DataParser *param_1)

{
  undefined1 *puVar1;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ *pSVar3;
  Str_L_char_G_ *pSVar4;
  Str_L_char_G_ *pSVar5;
  ModulePlacer *pMVar6;
  Str_L_char_G_ local_40;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  undefined1 local_10 [4];
  undefined8 local_c;
  
  __return_storage_ptr__->DataManager = (DataParser *)0x0;
  (__return_storage_ptr__->Messages)._pad_0x0_0 = 0;
  (__return_storage_ptr__->Messages).Data = (DesignStatusMessage *)0x0;
  (__return_storage_ptr__->Messages).Size = 0;
  *(undefined8 *)&(__return_storage_ptr__->Messages).Capacity = 0;
  WeaponModule__GetStatuses((WeaponModule *)this,__return_storage_ptr__,param_1);
  util__Str_char___Str_char(&local_34,"LaserMountHasNoFeed");
  local_28.Data = (char *)0x0;
  local_28.Capacity = 0;
  local_28.Length = 0;
  local_1c.Data = (char *)0x0;
  local_1c.Capacity = 0;
  local_1c.Length = 0;
  *(uint32_t *)&local_10 = (uint32_t)0x0;
  (*(uint32_t*)&(local_c)) = 0;
  (*(uint32_t*)((char*)&(local_c)+4)) = 0;
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,*(int *)&(this->Turret).Data.field1_0x1 == 0,&local_34,
             (Str_L_char_G_ *)local_10,&local_1c,&local_28,(ModulePlacer *)0x0);
  if (local_10 != (uint32_t)0x0) {
    port_op_delete((void *)local_10);
    *(uint32_t *)&local_10 = (uint32_t)0x0;
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
  if ((char)this[1]._pad_0x48_18 != '\0') {
    util__Str_char___Str_char(&local_40,"LaserLensTooBig");
    local_34.Data = (char *)0x0;
    local_34.Capacity = 0;
    local_34.Length = 0;
    local_1c.Data = (char *)0x0;
    local_1c.Capacity = 0;
    local_1c.Length = 0;
    local_28.Data = (char *)0x0;
    local_28.Capacity = 0;
    local_28.Length = 0;
    if ((char)this[1]._pad_0x48_18 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    pSVar5 = &local_34;
    pMVar6 = (ModulePlacer *)0x0;
    pSVar4 = &local_1c;
    pSVar3 = &local_28;
    pSVar2 = &local_40;
    local_c = LaserModule__GetFocusingMirrorRadius_m
                        ((LaserModule *)&(this->Turret).Data.field1_0x1);
    puVar1 = &(this->Turret).Data.field0_0x0;
    DesignStatusBuffer__CheckError
              (__return_storage_ptr__,*(double *)puVar1 <= local_c && local_c != *(double *)puVar1,
               pSVar2,pSVar3,pSVar4,pSVar5,pMVar6);
    if (local_28.Data != (char *)0x0) {
      port_op_delete(local_28.Data);
      local_28.Data = (char *)0x0;
    }
    if (local_1c.Data != (char *)0x0) {
      port_op_delete(local_1c.Data);
      local_1c.Data = (char *)0x0;
    }
    if (local_34.Data != (char *)0x0) {
      port_op_delete(local_34.Data);
      local_34.Data = (char *)0x0;
    }
    if (local_40.Data != (char *)0x0) {
      port_op_delete(local_40.Data);
    }
  }
  return __return_storage_ptr__;
}

//==== 006597e0 GetInfoBoxes_006597e0 ====


/* public: virtual class util__Darray_L_structInfoBox_G_ __thiscall
   StandaloneLaserMountModule__GetInfoBoxes(void)const  */

void __thiscall StandaloneLaserMountModule__GetInfoBoxes(StandaloneLaserMountModule *this)

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
  util__Str_char___Str_char(&SStack_20,"InfoBox LaserVitals Tooltip");
  SStack_14.Data = (char *)0x0;
  SStack_14.Capacity = 0;
  SStack_14.Length = 0;
  pcStack_94 = (char *)0x65984e;
  pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_3c,&SStack_20,&SStack_14);
  pSVar2 = util__LocStr__operator__o3(pLVar1);
  uVar5 = 0;
  uVar6 = 0;
  util__Str_char___Str_char((Str_L_char_G_ *)&pcStack_94,pSVar2);
  pIVar3 = (InfoBox *)
           InfoBox__InfoBox(&IStack_74,Icons__Laser,(void*)(*(undefined4 *)&(this->Turret).Data.field1_0x1),(_func___cdecl_Str_L_char_G__void_ptr*)(util__DelegateFactory_class_LaserModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_LaserModule__GetLaserInfo_void_const__0),0,0,0,(void *)(uintptr_t)(uVar5),(_func___cdecl_Str_L_char_G__void_ptr *)(uintptr_t)(uVar6),((Str_L_char_G_ *)&pcStack_94)->Data,((Str_L_char_G_ *)&pcStack_94)->Capacity,((Str_L_char_G_ *)&pcStack_94)->Length,(Delegate_L_bool_G_){0},1);
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
  pDVar4 = WeaponModule__GetInfoBoxes((WeaponModule *)this,pDVar4);
  util__Darray_struct_InfoBox___operator(in_stack_00000004,pDVar4);
  ppuStack_24 = &vftable_127;
  if ((InfoBox *)SStack_20.Data != (InfoBox *)0x0) {
    InfoBox___vector_deleting_destructor((InfoBox *)SStack_20.Data,3);
  }
  util__Str_char___Str_char(&SStack_20,"InfoBox LaserIntensity Tooltip");
  SStack_14.Data = (char *)0x0;
  SStack_14.Capacity = 0;
  SStack_14.Length = 0;
  pcStack_94 = (char *)0x6599a1;
  pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_3c,&SStack_20,&SStack_14);
  pSVar2 = util__LocStr__operator__o3(pLVar1);
  uVar5 = 0;
  uVar6 = 0;
  util__Str_char___Str_char((Str_L_char_G_ *)&pcStack_94,pSVar2);
  pIVar3 = (InfoBox *)
           InfoBox__InfoBox(&IStack_74,Icons__Sun,(void*)(*(undefined4 *)&(this->Turret).Data.field1_0x1),(_func___cdecl_Str_L_char_G__void_ptr*)(util__DelegateFactory_class_LaserModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_LaserModule__GetQuickFluenceInfo_void_const__0),0,0,0,(void *)(uintptr_t)(uVar5),(_func___cdecl_Str_L_char_G__void_ptr *)(uintptr_t)(uVar6),((Str_L_char_G_ *)&pcStack_94)->Data,((Str_L_char_G_ *)&pcStack_94)->Capacity,((Str_L_char_G_ *)&pcStack_94)->Length,(Delegate_L_bool_G_){0},1);
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
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00659aa0 GenerateQuickDiagrams_00659aa0 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual class util__Darray_L_structUIWidget_P_G_ __thiscall
   StandaloneLaserMountModule__GenerateQuickDiagrams(class Manager *)const  */

Manager * __thiscall
StandaloneLaserMountModule__GenerateQuickDiagrams(StandaloneLaserMountModule *this,Manager *param_1)

{
  (**(code **)(*(int *)((this->Turret).Data.field1_0x1 + 0xf0)))(param_1);
  return param_1;
}





//==== 00659ac0 RenderInitialState_00659ac0 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void  StandaloneLaserMountModule__RenderInitialState(double,class
   CameraManager *,class util__Darray_L_classutil__SharedPtr_L_classArmorTextureHandler_G__G_ const
   &,double,struct util__Vec3_L_double_G_)const  */

void 
StandaloneLaserMountModule__RenderInitialState
          (StandaloneLaserMountModule *this,double param_1,CameraManager *param_2,
          Darray_L_class_util__SharedPtr_L_class_ArmorTextureHandler_G___G_ *param_3,double param_4,
          Vec3_L_double_G_ param_5)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)param_3 + 0xc))();
  Render(this,param_5,true,false,0 < iVar1);
  return;
}





//==== 00659cc0 RenderInitialStateSimple_00659cc0 ====


/* public: virtual void __thiscall StandaloneLaserMountModule__RenderInitialStateSimple(struct
   util__Vec3_L_double_G_)const  */

void __thiscall
StandaloneLaserMountModule__RenderInitialStateSimple
          (StandaloneLaserMountModule *this,Vec4_L_double_G_ param_1)

{
  RenderSimple(this,param_1,true,true);
  return;
}





//==== 0065a9f0 SetCachedData_0065a9f0 ====

/* public: virtual void __thiscall StandaloneLaserMountModule__SetCachedData(class DataParser *) */

void __thiscall
StandaloneLaserMountModule__SetCachedData(StandaloneLaserMountModule *this,DataParser *param_1)

{
  int *piVar1;
  Attribute_L_double_G_ AVar2;
  Attribute_L_double_G_ AVar3;
  Attribute_L_double_G_ AVar4;
  double dVar5;
  void *pvVar6;
  _func___cdecl_double_void_ptr *p_Var7;
  void *pvVar8;
  _func___cdecl_double_void_ptr *p_Var9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  piVar1 = *(int * *)&(this->Turret).Data.field1_0x1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(uintptr_t)(*piVar1 + 0x144))(param_1);
  }
  if ((char)this[1]._pad_0x48_18 != '\0') {
    dVar5 = LaserModule__GetFocusingMirrorRadius_m((LaserModule *)&(this->Turret).Data.field1_0x1)
    ;
    uVar11 = 0;
    uVar12 = 0;
    uVar13 = 0;
    uVar14 = 0;
    pvVar8 = (void *)0x0;
    p_Var9 = (_func___cdecl_double_void_ptr *)0x0;
    dVar10 = 0.0;
    pvVar6 = (void *)0x0;
    p_Var7 = (_func___cdecl_double_void_ptr *)0x0;
    if ((char)this[1]._pad_0x48_18 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    AVar2.Getter.CallbackFunction = p_Var7;
    AVar2.Getter.Callee = pvVar6;
    AVar2.Value = dVar5;
    AVar3.Getter.CallbackFunction = p_Var9;
    AVar3.Getter.Callee = pvVar8;
    AVar3.Value = dVar10;
    AVar4.Getter.CallbackFunction = (_func___cdecl_double_void_ptr *)uVar12;
    AVar4.Getter.Callee = (void *)uVar11;
    AVar4.Value = uVar13;
    (*(uint32_t *)((char *)&(AVar4.Value) + 4)) = uVar14;
    TurretSubModule__PassThroughCachedData
              ((TurretSubModule *)&(this->Turret).Data.field0_0x0,AVar2,AVar3,AVar4);
  }
  if ((char)this[1]._pad_0x78_30 != '\0') {
    dVar5 = LaserModule__GetFocusingMirrorRadius_m((LaserModule *)&(this->Turret).Data.field1_0x1)
    ;
    FixedLaserMountSubModule__PassThroughCachedData
              ((FixedLaserMountSubModule *)&this[1]._pad_0x50_20,dVar5);
  }
  return;
}

//==== 0065aae0 GetPointerPropertyChoices_0065aae0 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   StandaloneLaserMountModule__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

ClassMember * 
StandaloneLaserMountModule__GetPointerPropertyChoices
          (StandaloneLaserMountModule *this,ClassMember *param_1,
          SerializationManagerInterface *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  SerializationManagerInterface SVar3;
  int *in_stack_0000000c;
  Str_L_char_G_ SStack_48;
  undefined **ppuStack_3c;
  void *pvStack_38;
  undefined **ppuStack_2c;
  void *pvStack_28;
  undefined **ppuStack_1c;
  void *pvStack_18;
  uint uStack_c;
  undefined1 auStack_8 [4];
  
  if (*(int *)&param_2[1] < 1) {
    SVar3 = *(SerializationManagerInterface *)(uintptr_t)*(uint32_t *)&cde_l2_0b2b1c9f_NullString;
  }
  else {
    SVar3 = *param_2;
  }
  for (pcVar1 = "LaserFeed"; (pcVar1[(int)(*(int *)&SVar3 + -0x930108)] != '\0' || (*pcVar1 != '\0'));
      pcVar1 = pcVar1 + 1) {
    if (pcVar1[(int)(*(int *)&SVar3 + -0x930108)] != *pcVar1) {
      (param_1->Name).Data =
           (char *)&vftable_85;
      (param_1->Name).Capacity = 0;
      (param_1->Name).Length = 0;
      *(undefined4 *)&param_1->Type = 0;
      return param_1;
    }
  }
  uStack_c = uStack_c & 0xffffff00;
  util__Str_char___Str_char(&SStack_48,"Module");
  uVar2 = (**(code **)(uintptr_t)(*in_stack_0000000c + 4))(&ppuStack_3c,&SStack_48,0,uStack_c);
  uVar2 = FUN_0065b160(&ppuStack_2c,uVar2);
  auStack_8[0] = 0;
  FUN_004f1250(&ppuStack_1c,uVar2,auStack_8);
  AsListing_class_util__Reflectable((Darray_L_class_util__Reflectable_P_G_ *)param_1);
  ppuStack_1c = (undefined **)(&vftable_6);
  if (pvStack_18 != (void *)0x0) {
    port_op_delete(pvStack_18);
  }
  pvStack_18 = (void *)0x0;
  ppuStack_1c = (undefined **)(&vftable);
  ppuStack_2c = (undefined **)(&vftable_6);
  if (pvStack_28 != (void *)0x0) {
    port_op_delete(pvStack_28);
  }
  pvStack_28 = (void *)0x0;
  ppuStack_2c = (undefined **)(&vftable);
  ppuStack_3c = (undefined **)(&vftable_6);
  if (pvStack_38 != (void *)0x0) {
    port_op_delete(pvStack_38);
  }
  pvStack_38 = (void *)0x0;
  ppuStack_3c = (undefined **)(&vftable);
  if (SStack_48.Data == (char *)0x0) {
    return param_1;
  }
  port_op_delete(SStack_48.Data);
  return param_1;
}





//==== 0065ac20 GetMutuallyExclusiveProperties_0065ac20 ====


/* public: virtual class util__Darray_L_classutil__Str_L_char_G__G_ __thiscall
   StandaloneLaserMountModule__GetMutuallyExclusiveProperties(void)const  */

Darray_L_class_util__Str_L_char_G___G_ * __thiscall
StandaloneLaserMountModule__GetMutuallyExclusiveProperties(StandaloneLaserMountModule *this)

{
  undefined8 stack0x00000004;
  Darray_L_class_util__Str_L_char_G___G_ *this_00;
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  Darray_L_class_util__Str_L_char_G___G_ *in_stack_00000004;
  Str_L_char_G_ SStack_10;
  
  this_00 = in_stack_00000004;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = (undefined **)(&vftable_4);
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 2;
  puVar2 = (undefined4 *)port_op_new(0x1c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = puVar2 + 1;
    *puVar2 = 2;
    iVar3 = 2;
    puVar2 = puVar4;
    do {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      iVar3 = iVar3 + -1;
      puVar2 = puVar2 + 3;
    } while (iVar3 != 0);
  }
  iVar3 = 0;
  *(undefined4 **)(in_stack_00000004 + 4) = puVar4;
  if (0 < *(int *)(in_stack_00000004 + 0xc)) {
    SStack_10.Data = (char *)0x0;
    iVar5 = 0;
    SStack_10.Capacity = 0;
    SStack_10.Length = 0;
    do {
      util__Str_char___operator__o8((Str_L_char_G_ *)(*(int *)(in_stack_00000004 + 4) + iVar5),&SStack_10);
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0xc;
    } while (iVar3 < *(int *)(in_stack_00000004 + 0xc));
  }
  util__Str_char___Str_char(&SStack_10,"Turret");
  iVar3 = *(int *)(in_stack_00000004 + 8);
  in_stack_00000004 = (Darray_L_class_util__Str_L_char_G___G_ *)(iVar3 + 1);
  util__Darray_class_util__Str_char_____SetSize(this_00,(int *)&stack0x00000004);
  bVar1 = util__Darray_class_util__Str_char_____CheckSize(this_00,iVar3);
  if (bVar1) {
    util__Str_char___operator__o8
              ((Str_L_char_G_ *)(*(int *)(this_00 + 4) + (*(int *)(this_00 + 8) * 3 + -3) * 4),
               &SStack_10);
  }
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  util__Str_char___Str_char(&SStack_10,"FixedMount");
  iVar3 = *(int *)(this_00 + 8);
  in_stack_00000004 = (Darray_L_class_util__Str_L_char_G___G_ *)(iVar3 + 1);
  util__Darray_class_util__Str_char_____SetSize(this_00,(int *)&stack0x00000004);
  bVar1 = util__Darray_class_util__Str_char_____CheckSize(this_00,iVar3);
  if (bVar1) {
    util__Str_char___operator__o8
              ((Str_L_char_G_ *)(*(int *)(this_00 + 4) + (*(int *)(this_00 + 8) * 3 + -3) * 4),
               &SStack_10);
  }
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return this_00;
}





//==== 0065ad80 GetReflectionInfo_0065ad80 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   StandaloneLaserMountModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall
StandaloneLaserMountModule__GetReflectionInfo(StandaloneLaserMountModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_0153dd9e__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_0153dd9e__thread_safe_static_guard_0__);
    if ( cde_l2_0153dd9e__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_0cd1f704_ReflectionInfo) = &vftable_314;
      _Init_thread_footer(& cde_l2_0153dd9e__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_0cd1f704_ReflectionInfo;
}





//==== 0065ad90 scalar_deleting_destructor_0065ad90 ====

/* public: virtual void * __thiscall StandaloneLaserMountModule:: 0 scalardeletingdestructor(unsigned int) */

void * 
StandaloneLaserMountModule___scalar_deleting_destructor__o2
          (StandaloneLaserMountModule *this,uint param_1)

{
  if ((ReferenceController *)this[1]._pad_0x94_37 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)this[1]._pad_0x94_37);
  }
  if ((ReferenceController *)this[1]._pad_0x8c_35 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)this[1]._pad_0x8c_35);
  }
  if ((ReferenceController *)this[1]._pad_0x84_33 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)this[1]._pad_0x84_33);
  }
  this[1]._pad_0x50_20 = (int)&vftable_5;
  if ((void *)this[1]._pad_0x54_21 != (void *)0x0) {
    port_op_delete((void *)this[1]._pad_0x54_21);
    this[1]._pad_0x54_21 = 0;
  }
  TurretSubModule___TurretSubModule((TurretSubModule *)&(this->Turret).Data.field0_0x0);
  this->_pad_0x80_32 = (int)&vftable_166;
  if ((void *)this->_pad_0x84_33 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x84_33);
  }
  this->_pad_0x84_33 = 0;
  this->_pad_0x80_32 = (int)&vftable;
  Module___Module((Module *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x210);
  }
  return this;
}

//==== 0065ae50 GetTypeName_0065ae50 ====


/* public: virtual class util__Str_L_char_G_ 
   StandaloneLaserMountModule__ReflectionInfoStruct_class_StandaloneLaserMountModule___GetTypeName(void)const  */

Str_L_char_G_ * 
StandaloneLaserMountModule__ReflectionInfoStruct_class_StandaloneLaserMountModule___GetTypeName
          (ReflectionInfoStruct_L_class_StandaloneLaserMountModule_G_ *this,
          Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"StandaloneLaserMountModule");
  return __return_storage_ptr__;
}





//==== 0065ae70 GetMembers_0065ae70 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   StandaloneLaserMountModule__ReflectionInfoStruct_class_StandaloneLaserMountModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
StandaloneLaserMountModule__ReflectionInfoStruct_class_StandaloneLaserMountModule___GetMembers
          (ReflectionInfoStruct_L_class_StandaloneLaserMountModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_d60ed552__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_d60ed552__thread_safe_static_guard_0__),
      cde_l2_d60ed552__thread_safe_static_guard_0__ == -1)) {
     cde_l2_c6575327_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_d60ed552__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_c6575327_Count);
  iVar3 = 0;
  if (0 <  cde_l2_c6575327_Count) {
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
    } while (iVar3 <  cde_l2_c6575327_Count);
  }
  return in_stack_00000004;
}





//==== 0065afb0 GetMember_0065afb0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   StandaloneLaserMountModule__ReflectionInfoStruct_class_StandaloneLaserMountModule___GetMember(class util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
StandaloneLaserMountModule__ReflectionInfoStruct_class_StandaloneLaserMountModule___GetMember
          (ReflectionInfoStruct_L_class_StandaloneLaserMountModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_9acf3244__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_9acf3244__thread_safe_static_guard_0__),
      cde_l2_9acf3244__thread_safe_static_guard_0__ == -1)) {
     cde_l2_207e6511_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_9acf3244__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_207e6511_Count) {
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
LAB_0065b03d:
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
          if (cVar3 == '\0') goto LAB_0065b03d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_207e6511_Count);
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





//==== 0065b150 GetFactory_0065b150 ====


/* public: virtual class util__Reflectable * (__cdecl*
   StandaloneLaserMountModule__ReflectionInfoStruct_class_StandaloneLaserMountModule___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall StandaloneLaserMountModule__ReflectionInfoStruct_class_StandaloneLaserMountModule___GetFactory
          (ReflectionInfoStruct_L_class_StandaloneLaserMountModule_G_ *this)

{
  return StaticFactory;
}





//==== 0065b2c0 WeaponModule ====

/* public: __thiscall WeaponModule__WeaponModule(void) */

WeaponModule * __thiscall WeaponModule__WeaponModule(WeaponModule *this)

{
  Module__Module((Module *)this);
  this->_pad_0x0_0 = (int)&vftable_for_EditorReflectable__25;
  this->_pad_0x34_13 = (int)&vftable_for_util__RTTIBaseClass__24;
  (this->GetAccuracyAngle_radians_MemoizedValue).Data = 0.0;
  (this->GetAccuracyAngle_radians_MemoizedValue).IsValidData = false;
  *(undefined4 *)&(this->GetFiringSpeed_km__s_MemoizedValue).Data = 0;
  *(undefined4 *)((int)&(this->GetFiringSpeed_km__s_MemoizedValue).Data + 4) = 0;
  *(undefined4 *)&(this->GetFiringSpeed_km__s_MemoizedValue).IsValidData = 0;
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetFiringSpeed_km__s_MemoizedValue)) + 0xc)) = 0;
  *(undefined ** *)&((this->GetFiringSpeed_km__s_MemoizedValue).Data) =
       &vftable_166;
  *(undefined4 *)((int)&(this->GetFiringSpeed_km__s_MemoizedValue).Data + 4) = 0;
  *(undefined4 *)&(this->GetFiringSpeed_km__s_MemoizedValue).IsValidData = 0;
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetFiringSpeed_km__s_MemoizedValue)) + 0xc)) = 0;
  this->TargetsShips = false;
  this->TargetsShots = false;
  *(undefined6 *)&(*(undefined6 *)(void *)((char *)(uintptr_t)(this) + 0x92)) = 0;
  *(undefined1 *)&this[1]._pad_0x0_0 = 0;
  this[1]._pad_0x8_2 = 0;
  this[1]._pad_0xc_3 = 0;
  *(undefined1 *)&this[1]._pad_0x10_4 = 0;
  return this;
}

//==== 0065c7d0 Render_0065c7d0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void  StandaloneLaserMountModule__Render(struct
   util__Vec3_L_double_G_,bool,bool,bool)const  */

void 
StandaloneLaserMountModule__Render
          (StandaloneLaserMountModule *this,Vec4_L_double_G_ param_1,bool param_2,bool param_3,
          bool param_4)

{
  undefined8 stack0xfffffffc;
  Vec4_L_double_G_ VVar1;
  Vec4_L_double_G_ VVar2;
  Quaternion_L_double_G_ QVar3;
  Vec4_L_double_G_ VVar4;
  bool bVar5;
  Vec3_L_double_G_ *pVVar6;
  double dVar7;
  Vec4_L_double_G_ local_4c;
  Quaternion_L_double_G_ local_34;
  double local_14;
  TransformStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((char)this[1]._pad_0x48_18 != '\0') {
    pVVar6 = WeaponCompartment__GetDefaultTargetDirection(&local_4c);
    VVar1.W = (int)((ulonglong)pVVar6->Z >> 0x20);
    (*(uint32_t *)((char *)&(VVar1) + 0)) = (uint32_t)(uintptr_t)(*(undefined1 (*) [20])pVVar6);
    TurretSubModule__RenderExtruderModel
              ((TurretSubModule *)&(this->Turret).Data.field0_0x0,VVar1,param_1,param_4,false);
    Graphics__TransformStack__TransformStack(&local_9,Style__Default);
    if ((char)this[1]._pad_0x48_18 == '\0') {
      dVar7 = 0.0;
    }
    else {
      dVar7 = TurretSubModule__GetExtruderLength_m
                        ((TurretSubModule *)&(this->Turret).Data.field0_0x0);
      *(uint32_t *)&local_14 = dVar7;
    }
    VVar4.Z = SUB84(dVar7 / 1000.0,0);
    VVar4.X = 0.0;
    VVar4.Y = 0.0;
    VVar4.W = (int)((ulonglong)(dVar7 / 1000.0) >> 0x20);
    Graphics__Translate(VVar4);
    pVVar6 = WeaponCompartment__GetDefaultTargetDirection(&local_4c);
    VVar2.W = (int)((ulonglong)pVVar6->Z >> 0x20);
    (*(uint32_t *)((char *)&(VVar2) + 0)) = (uint32_t)(uintptr_t)(*(undefined1 (*) [20])pVVar6);
    util__Quaternion_double___Quaternion_double(&local_34,VVar2,param_1);
    QVar3.Y = local_34.Y;
    QVar3.X = local_34.X;
    QVar3.Y = local_34.Y;
    QVar3.Z = local_34.Z;
    QVar3.Z = local_34.Z;
    QVar3.W = local_34.W;
    QVar3.W = local_34.W;
    (*(uint32_t *)((char *)&(QVar3.W) + 4)) = (*(uint32_t *)((char *)&(local_34.W) + 4));
    Graphics__Rotate(QVar3);
    if (param_2) {
      if ((ReferenceController *)this[1]._pad_0x84_33 != (ReferenceController *)0x0) {
        bVar5 = util__ReferenceController__IsDataStillValid
                          ((ReferenceController *)this[1]._pad_0x84_33);
        if (!bVar5) {
          this[1]._pad_0x80_32 = 0;
        }
      }
      GameModel__Render((GameModel *)this[1]._pad_0x80_32,0.0,0.0,param_4);
    }
    if ((ReferenceController *)this[1]._pad_0x8c_35 != (ReferenceController *)0x0) {
      bVar5 = util__ReferenceController__IsDataStillValid
                        ((ReferenceController *)this[1]._pad_0x8c_35);
      if (!bVar5) {
        this[1]._pad_0x88_34 = 0;
      }
    }
    GameModel__Render((GameModel *)this[1]._pad_0x88_34,0.0,0.0,true);
    if (param_3) {
      if ((ReferenceController *)this[1]._pad_0x94_37 != (ReferenceController *)0x0) {
        bVar5 = util__ReferenceController__IsDataStillValid
                          ((ReferenceController *)this[1]._pad_0x94_37);
        if (!bVar5) {
          this[1]._pad_0x90_36 = 0;
        }
      }
      GameModel__Render((GameModel *)this[1]._pad_0x90_36,0.0,0.0,true);
    }
    Graphics__TransformStack___TransformStack(&local_9);
    return;
  }
  if ((char)this[1]._pad_0x78_30 != '\0') {
    if (param_2) {
      if ((ReferenceController *)this[1]._pad_0x84_33 != (ReferenceController *)0x0) {
        bVar5 = util__ReferenceController__IsDataStillValid
                          ((ReferenceController *)this[1]._pad_0x84_33);
        if (!bVar5) {
          this[1]._pad_0x80_32 = 0;
        }
      }
      GameModel__Render((GameModel *)this[1]._pad_0x80_32,0.0,0.0,true);
    }
    if ((ReferenceController *)this[1]._pad_0x8c_35 != (ReferenceController *)0x0) {
      bVar5 = util__ReferenceController__IsDataStillValid
                        ((ReferenceController *)this[1]._pad_0x8c_35);
      if (!bVar5) {
        this[1]._pad_0x88_34 = 0;
      }
    }
    GameModel__Render((GameModel *)this[1]._pad_0x88_34,0.0,0.0,true);
    if (param_3) {
      if ((ReferenceController *)this[1]._pad_0x94_37 != (ReferenceController *)0x0) {
        bVar5 = util__ReferenceController__IsDataStillValid
                          ((ReferenceController *)this[1]._pad_0x94_37);
        if (!bVar5) {
          this[1]._pad_0x90_36 = 0;
        }
      }
      GameModel__Render((GameModel *)this[1]._pad_0x90_36,0.0,0.0,true);
    }
  }
  return;
}

//==== 0065cad0 RenderSimple_0065cad0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall StandaloneLaserMountModule__RenderSimple(struct
   util__Vec3_L_double_G_,bool,bool)const  */

void __thiscall
StandaloneLaserMountModule__RenderSimple
          (StandaloneLaserMountModule *this,Vec4_L_double_G_ param_1,bool param_2,bool param_3)

{
  undefined8 stack0xfffffffc;
  Vec4_L_double_G_ VVar1;
  Vec4_L_double_G_ VVar2;
  Quaternion_L_double_G_ QVar3;
  Vec4_L_double_G_ VVar4;
  bool bVar5;
  Vec3_L_double_G_ *pVVar6;
  float10 fVar7;
  Quaternion_L_double_G_ local_44;
  Vec3_L_double_G_ local_24;
  TransformStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((char)this[1]._pad_0x48_18 != '\0') {
    pVVar6 = WeaponCompartment__GetDefaultTargetDirection(&local_24);
    VVar1.W = (int)((ulonglong)pVVar6->Z >> 0x20);
    (*(uint32_t *)((char *)&(VVar1) + 0)) = (uint32_t)(uintptr_t)(*(undefined1 (*) [20])pVVar6);
    TurretSubModule__RenderExtruderModel
              ((TurretSubModule *)&(this->Turret).Data.field0_0x0,VVar1,param_1,false,true);
    Graphics__TransformStack__TransformStack(&local_9,Style__Default);
    fVar7 = (float10)(**(code **)(this->_pad_0x0_0 + 0x1b0))();
    local_24.Z = (double)(fVar7 / (float10)1000.0);
    VVar4.Z = SUB84(local_24.Z,0);
    VVar4.X = 0.0;
    VVar4.Y = 0.0;
    VVar4.W = (int)((ulonglong)local_24.Z >> 0x20);
    Graphics__Translate(VVar4);
    pVVar6 = WeaponCompartment__GetDefaultTargetDirection(&local_24);
    VVar2.W = (int)((ulonglong)pVVar6->Z >> 0x20);
    (*(uint32_t *)((char *)&(VVar2) + 0)) = (uint32_t)(uintptr_t)(*(undefined1 (*) [20])pVVar6);
    util__Quaternion_double___Quaternion_double(&local_44,VVar2,param_1);
    QVar3.Y = local_44.Y;
    QVar3.X = local_44.X;
    QVar3.Y = local_44.Y;
    QVar3.Z = local_44.Z;
    QVar3.Z = local_44.Z;
    QVar3.W = local_44.W;
    QVar3.W = local_44.W;
    (*(uint32_t *)((char *)&(QVar3.W) + 4)) = (*(uint32_t *)((char *)&(local_44.W) + 4));
    Graphics__Rotate(QVar3);
    if (param_2) {
      if ((ReferenceController *)this[1]._pad_0x84_33 != (ReferenceController *)0x0) {
        bVar5 = util__ReferenceController__IsDataStillValid
                          ((ReferenceController *)this[1]._pad_0x84_33);
        if (!bVar5) {
          this[1]._pad_0x80_32 = 0;
        }
      }
      GameModel__RenderSimple((GameModel *)this[1]._pad_0x80_32);
    }
    if ((ReferenceController *)this[1]._pad_0x8c_35 != (ReferenceController *)0x0) {
      bVar5 = util__ReferenceController__IsDataStillValid
                        ((ReferenceController *)this[1]._pad_0x8c_35);
      if (!bVar5) {
        this[1]._pad_0x88_34 = 0;
      }
    }
    GameModel__RenderSimple((GameModel *)this[1]._pad_0x88_34);
    if (param_3) {
      if ((ReferenceController *)this[1]._pad_0x94_37 != (ReferenceController *)0x0) {
        bVar5 = util__ReferenceController__IsDataStillValid
                          ((ReferenceController *)this[1]._pad_0x94_37);
        if (!bVar5) {
          this[1]._pad_0x90_36 = 0;
        }
      }
      GameModel__RenderSimple((GameModel *)this[1]._pad_0x90_36);
    }
    Graphics__TransformStack___TransformStack(&local_9);
    return;
  }
  if ((char)this[1]._pad_0x78_30 != '\0') {
    if (param_2) {
      if ((ReferenceController *)this[1]._pad_0x84_33 != (ReferenceController *)0x0) {
        bVar5 = util__ReferenceController__IsDataStillValid
                          ((ReferenceController *)this[1]._pad_0x84_33);
        if (!bVar5) {
          this[1]._pad_0x80_32 = 0;
        }
      }
      GameModel__RenderSimple((GameModel *)this[1]._pad_0x80_32);
    }
    if ((ReferenceController *)this[1]._pad_0x8c_35 != (ReferenceController *)0x0) {
      bVar5 = util__ReferenceController__IsDataStillValid
                        ((ReferenceController *)this[1]._pad_0x8c_35);
      if (!bVar5) {
        this[1]._pad_0x88_34 = 0;
      }
    }
    GameModel__RenderSimple((GameModel *)this[1]._pad_0x88_34);
    if (param_3) {
      if ((ReferenceController *)this[1]._pad_0x94_37 != (ReferenceController *)0x0) {
        bVar5 = util__ReferenceController__IsDataStillValid
                          ((ReferenceController *)this[1]._pad_0x94_37);
        if (!bVar5) {
          this[1]._pad_0x90_36 = 0;
        }
      }
      GameModel__RenderSimple((GameModel *)this[1]._pad_0x90_36);
    }
  }
  return;
}

//==== 0065cd10 StaticFactory_0065cd10 ====

/* public: static class util__Reflectable * __cdecl
   StandaloneLaserMountModule__ReflectionInfoStruct_class_StandaloneLaserMountModule___StaticFactory(void) */

Reflectable * __cdecl
StandaloneLaserMountModule__ReflectionInfoStruct_class_StandaloneLaserMountModule___StaticFactory__o2(void)

{
  WeaponModule *this;
  
  this = (WeaponModule *)(uintptr_t)(port_op_new(0x210));
  if (this != (WeaponModule *)0x0) {
    memset(this,0,0x210);
    WeaponModule__WeaponModule(this);
    this->_pad_0x0_0 = (int)&vftable_for_EditorReflectable__33;
    this->_pad_0x34_13 = (int)&vftable_for_util__RTTIBaseClass__32;
    TurretSubModule__TurretSubModule((TurretSubModule *)&this[1]._pad_0x28_10);
    this[1]._pad_0x28_10 = (int)&vftable_239;
    this[2].TargetsShips = false;
    this[3]._pad_0x0_0 = 0;
    this[3]._pad_0x4_1 = 0;
    this[3]._pad_0x8_2 = 0;
    this[3]._pad_0xc_3 = 0;
    this[3]._pad_0x10_4 = 0;
    this[3]._pad_0x14_5 = 0;
    this[3]._pad_0x18_6 = 0;
    this[3]._pad_0x1c_7 = 0;
    this[3]._pad_0x20_8 = 0;
    this[3]._pad_0x24_9 = 0;
    this[3]._pad_0x4_1 = 0;
    this[3]._pad_0x8_2 = 0;
    this[3]._pad_0xc_3 = 0;
    this[3]._pad_0x0_0 = (int)&vftable_304;
    *(undefined1 *)&this[3]._pad_0x28_10 = 0;
    this[3]._pad_0x30_12 = 0;
    this[3]._pad_0x34_13 = 0;
    this[3]._pad_0x38_14 = 0;
    this[3]._pad_0x3c_15 = 0;
    this[3]._pad_0x40_16 = 0;
    this[3]._pad_0x44_17 = 0;
    return (Reflectable *)this;
  }
  return (Reflectable *)0x0;
}

//==== 0065ce30 StaticGetMemberByIndex_0065ce30 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   StandaloneLaserMountModule__ReflectionInfoStruct_class_StandaloneLaserMountModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
StandaloneLaserMountModule__ReflectionInfoStruct_class_StandaloneLaserMountModule___StaticGetMemberByIndex(ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_b5f807d3__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_b5f807d3__thread_safe_static_guard_0__);
    if ( cde_l2_b5f807d3__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_fbc98604_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00978124 = 0;
      _DAT_00978128 = 0;
      _DAT_0097812c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978130,"Unused");
      _DAT_0097813c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978140,"SteamWorkshopID");
      _DAT_0097814c = 6;
      _DAT_00978150 = 0x10;
      _DAT_00978154 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978158,"AStr");
      _DAT_00978164 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978168,"Description");
      _DAT_00978174 = 6;
      _DAT_00978178 = 0x20;
      _DAT_0097817c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978180,"AStr");
      _DAT_0097818c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978190,"UsesCustomName");
      _DAT_0097819c = 1;
      _DAT_009781a0 = 0x68;
      _DAT_009781a4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009781a8,"bool");
      _DAT_009781b4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009781b8,"LaserFeed");
      _DAT_009781c4 = 8;
      _DAT_009781c8 = 0xb8;
      _DAT_009781cc = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009781d0,"Module");
      _DAT_009781dc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009781e0,"Turret");
      _DAT_009781ec = 10;
      _DAT_009781f0 = 0xc0;
      _DAT_009781f4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009781f8,"ExtrudableSoloTurretSubModule");
      _DAT_00978204 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978208,"FixedMount");
      _DAT_00978214 = 10;
      _DAT_00978218 = 0x1c8;
      _DAT_0097821c = 0x28;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978220,"FixedLaserMountSubModule");
      _DAT_0097822c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978230,"TargetsShips");
      _DAT_0097823c = 1;
      _DAT_00978240 = 0xb0;
      _DAT_00978244 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978248,"bool");
      _DAT_00978254 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978258,"TargetsShots");
      _DAT_00978264 = 1;
      _DAT_00978268 = 0xb1;
      _DAT_0097826c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978270,"bool");
      _DAT_0097827c = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_StandaloneLaserMountModule__ReflectionInfoStruct_class_StandaloneLaserMountModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_b5f807d3__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_fbc98604_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_00978124 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_00978128 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_0097812c + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_00978130 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0097813c)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0097813d)[iVar1];
  return __return_storage_ptr__;
}





//==== 0065d140 StaticGetMemberCount_0065d140 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl StandaloneLaserMountModule__ReflectionInfoStruct_class_StandaloneLaserMountModule___StaticGetMemberCount(void) */

int __cdecl
StandaloneLaserMountModule__ReflectionInfoStruct_class_StandaloneLaserMountModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_ae7b4901__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_ae7b4901__thread_safe_static_guard_0__);
    if ( cde_l2_ae7b4901__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_e319bd13_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00977fb4 = 0;
      _DAT_00977fb8 = 0;
      _DAT_00977fbc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977fc0,"Unused");
      _DAT_00977fcc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977fd0,"SteamWorkshopID");
      _DAT_00977fdc = 6;
      _DAT_00977fe0 = 0x10;
      _DAT_00977fe4 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977fe8,"AStr");
      _DAT_00977ff4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00977ff8,"Description");
      _DAT_00978004 = 6;
      _DAT_00978008 = 0x20;
      _DAT_0097800c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978010,"AStr");
      _DAT_0097801c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978020,"UsesCustomName");
      _DAT_0097802c = 1;
      _DAT_00978030 = 0x68;
      _DAT_00978034 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978038,"bool");
      _DAT_00978044 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978048,"LaserFeed");
      _DAT_00978054 = 8;
      _DAT_00978058 = 0xb8;
      _DAT_0097805c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978060,"Module");
      _DAT_0097806c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978070,"Turret");
      _DAT_0097807c = 10;
      _DAT_00978080 = 0xc0;
      _DAT_00978084 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978088,"ExtrudableSoloTurretSubModule");
      _DAT_00978094 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978098,"FixedMount");
      _DAT_009780a4 = 10;
      _DAT_009780a8 = 0x1c8;
      _DAT_009780ac = 0x28;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009780b0,"FixedLaserMountSubModule");
      _DAT_009780bc = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009780c0,"TargetsShips");
      _DAT_009780cc = 1;
      _DAT_009780d0 = 0xb0;
      _DAT_009780d4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009780d8,"bool");
      _DAT_009780e4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009780e8,"TargetsShots");
      _DAT_009780f4 = 1;
      _DAT_009780f8 = 0xb1;
      _DAT_009780fc = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978100,"bool");
      _DAT_0097810c = 0;
      atexit( private__static_int_const___cdecl_StandaloneLaserMountModule__ReflectionInfoStruct_class_StandaloneLaserMountModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_ae7b4901__thread_safe_static_guard_0__);
    }
  }
  return 9;
}





//==== 0065d410 StaticGetReflectionInfo_0065d410 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct StandaloneLaserMountModule__ReflectionInfoStruct_L_class_StandaloneLaserMountModule_G_ * __cdecl StandaloneLaserMountModule__StaticGetReflectionInfo(void)
    */

ReflectionInfoStruct_L_class_StandaloneLaserMountModule_G_ * __cdecl
StandaloneLaserMountModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_0153dd9e__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_0153dd9e__thread_safe_static_guard_0__);
    if ( cde_l2_0153dd9e__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_0cd1f704_ReflectionInfo) = &vftable_314;
      _Init_thread_footer(& cde_l2_0153dd9e__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_0cd1f704_ReflectionInfo;
}





//==== 0065d470 CalculateInterception_double_ ====


/* class util__Maybe_L_structutil__tuple3_L_structutil__Vec3_L_double_G__Cstructutil__Vec3_L_double_G__Cdouble_G___G_ __cdecl util__CalculateInterception_double(struct util__Vec3_L_double_G_,struct
   util__Vec3_L_double_G_,double) */

void __cdecl
util__CalculateInterception_double(Vec4_L_double_G_ param_1,Vec4_L_double_G_ param_2,double param_3)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  Vec3_L_double_G_ *pVVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 in_stack_0000003c;
  undefined1 auStack_cc [4];
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  undefined1 auStack_b0 [16];
  undefined1 auStack_98 [16];
  double dStack_88;
  double dStack_80;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  Vec3_L_double_G_ VStack_40;
  double dStack_28;
  double dStack_20;
  uint uStack_14;
  
  uStack_14 = __security_cookie ^ (uint)auStack_cc;
  dVar9 = (*(uint64_t*)((char*)&(param_1)+4));
  dStack_80 = (double)CONCAT44(param_2.X,param_1.W);
  dVar10 = (*(uint64_t *)((char *)&(param_1) + 12));
  if (((NAN(dVar9) != (dVar9 == 0.0)) && (NAN(dVar10) != (dVar10 == 0.0))) &&
     (NAN(dStack_80) != (dStack_80 == 0.0))) {
    uStack_68 = 0.0;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    *(undefined1 *)(*(uint32_t *)&param_1.X + 0xe) = 1;
    uStack_50 = 0.0;
    param_1.X = 0;
    ((double *)&(param_1.X))[1] = 0;
    ((double *)&(param_1.X))[2] = 0;
    ((double *)&(param_1.X))[3] = 0;
    ((double *)&(param_1.X))[4] = 0;
    ((double *)&(param_1.X))[5] = 0;
    ((double *)&(param_1.X))[6] = 0;
    ((double *)&(param_1.X))[7] = 0;
    ((double *)&(param_1.X))[8] = 0;
    ((double *)&(param_1.X))[9] = 0;
    ((double *)&(param_1.X))[10] = 0;
    ((double *)&(param_1.X))[0xb] = 0;
    *(undefined8 *)(*(uint32_t *)&param_1.X + 0xc) = 0;
    __security_check_cookie(uStack_14 ^ (uint)auStack_cc);
    return;
  }
  dStack_b8 = (double)CONCAT44((*(uint32_t*)&(param_3)),param_2.W);
  VStack_40.X = param_1.Y;
  VStack_40.Y = param_1.Y;
  VStack_40.Y = param_1.Z;
  VStack_40.Z = param_1.Z;
  *(uint32_t *)&(auStack_98) = (*(uint32_t *)((char *)&(param_2) + 4));
  dStack_c8 = dVar10 * dVar10 + dVar9 * dVar9 + dStack_80 * dStack_80;
  dVar8 = (*(uint64_t*)((char*)&(param_2)+4));
  dVar1 = (*(uint64_t *)((char *)&(param_2) + 12));
  dStack_28 = dVar1 * dVar1 + dVar8 * dVar8 + dStack_b8 * dStack_b8;
  dVar9 = dVar1 * dVar10 + dVar8 * dVar9 + dStack_b8 * dStack_80;
  dStack_20 = (double)CONCAT44(in_stack_0000003c,(*(uint32_t*)((char*)&(param_3)+4))) *
              (double)CONCAT44(in_stack_0000003c,(*(uint32_t*)((char*)&(param_3)+4)));
  dStack_c0 = 1e-08;
  (*(uint32_t*)((char*)&(auStack_b0)+8)) = param_2.Z;
  (*(uint64_t*)&(auStack_b0)) = dVar9 + dVar9;
  (*(uint32_t *)((char *)&(auStack_b0) + 12)) = param_2.Z;
  bVar6 = Equals_L_double_G_(&dStack_28,&dStack_20,&dStack_c0);
  if ((bVar6) || (dStack_c0 = dStack_28 - dStack_20, NAN(dStack_c0) != (dStack_c0 == 0.0))) {
    if (NAN((double)(*(uint64_t*)&(auStack_b0))) != ((double)(*(uint64_t*)&(auStack_b0)) == 0.0)) goto LAB_0065d7d7;
    dStack_c8 = -(dStack_c8 / (double)(*(uint64_t*)&(auStack_b0)));
    dVar9 = dStack_c8;
  }
  else {
    dVar9 = (double)(*(uint64_t*)&(auStack_b0)) * (double)(*(uint64_t*)&(auStack_b0)) - dStack_c0 * 4.0 * dStack_c8;
    if (dVar9 < 0.0) goto LAB_0065d7d7;
    libm_sse2_sqrt_precise(0.0);
    dVar10 = 1.0 / (dStack_c0 + dStack_c0);
    dStack_c8 = (dVar9 - (*(uint64_t*)&(auStack_b0))) * dVar10;
    dVar9 = (-(*(uint64_t*)&(auStack_b0)) - dVar9) * dVar10;
  }
  if (dStack_c8 < 0.0) {
    if (dVar9 < 0.0) {
      bVar6 = false;
      dStack_c8 = 0.0;
    }
    else {
      bVar6 = true;
      dStack_c8 = dVar9;
    }
  }
  else {
    bVar6 = true;
    if ((0.0 <= dVar9) && (dVar9 <= dStack_c8)) {
      dStack_c8 = dVar9;
    }
  }
  if (bVar6) {
    dVar10 = 1.0 / (dStack_c8 * (double)CONCAT44(in_stack_0000003c,(*(uint32_t*)((char*)&(param_3)+4))));
    dVar9 = (double)(*(uint64_t*)&(auStack_98)) * dStack_c8 +
            (double)CONCAT44(VStack_40.Y,VStack_40.X);
    dStack_c0 = (double)(*(uint64_t*)((char*)&(auStack_98)+8)) * dStack_c8 +
                (double)CONCAT44(VStack_40.Z,VStack_40.Y);
    dStack_b8 = dStack_b8 * dStack_c8 + dStack_80;
    (*(uint64_t*)((char*)&(auStack_b0)+8)) = 0;
    (*(uint64_t*)&(auStack_b0)) = dVar9;
    dStack_88 = dVar10 * dStack_b8;
    (*(uint64_t*)((char*)&(auStack_98)+8)) = dStack_c0 * dVar10;
    (*(uint64_t*)&(auStack_98)) = dVar9 * dVar10;
    pVVar7 = (Vec3_L_double_G_ *)(uintptr_t)(Vec3_L_double_G___Normalized((Vec3_L_double_G_ *)auStack_98,&VStack_40));
    dVar9 = pVVar7->Z;
    uVar2 = *(undefined4 *)&pVVar7->X;
    uVar3 = *(undefined4 *)((int)&pVVar7->X + 4);
    uVar4 = *(undefined4 *)&pVVar7->Y;
    uVar5 = *(undefined4 *)((int)&pVVar7->Y + 4);
    *(undefined1 *)(*(uint32_t *)&param_1.X + 0xe) = 1;
    uStack_58 = SUB84(dStack_c0,0);
    uStack_54 = (undefined4)((ulonglong)dStack_c0 >> 0x20);
    uStack_60 = (*(uint32_t*)&(auStack_b0));
    uStack_5c = (*(uint32_t*)((char*)&(auStack_b0)+4));
    (*(uint32_t*)&(uStack_68)) = SUB84(dVar9,0);
    (*(uint32_t*)((char*)&(uStack_68)+4)) = (undefined4)((ulonglong)dVar9 >> 0x20);
    param_1.X = uVar2;
    ((double *)&(param_1.X))[1] = uVar3;
    ((double *)&(param_1.X))[2] = uVar4;
    ((double *)&(param_1.X))[3] = uVar5;
    ((double *)&(param_1.X))[4] = (undefined4)uStack_68;
    ((double *)&(param_1.X))[5] = (*(uint32_t*)((char*)&(uStack_68)+4));
    ((double *)&(param_1.X))[6] = (*(uint32_t*)&(auStack_b0));
    ((double *)&(param_1.X))[7] = (*(uint32_t*)((char*)&(auStack_b0)+4));
    uStack_50 = dStack_b8;
    dVar10 = uStack_50;
    (*(uint32_t*)&(uStack_50)) = SUB84(dStack_b8,0);
    (*(uint32_t*)((char*)&(uStack_50)+4)) = (undefined4)((ulonglong)dStack_b8 >> 0x20);
    ((double *)&(param_1.X))[8] = uStack_58;
    ((double *)&(param_1.X))[9] = uStack_54;
    ((double *)&(param_1.X))[10] = (undefined4)uStack_50;
    ((undefined4 *)&(param_1.X))[0xb] = (*(uint32_t*)((char*)&(uStack_50)+4));
    *(double *)(*(uint32_t *)&param_1.X + 0xc) = dStack_c8;
    uStack_68 = dVar9;
    uStack_50 = dVar10;
    __security_check_cookie(uStack_14 ^ (uint)auStack_cc);
    return;
  }
LAB_0065d7d7:
  param_1.X = 0;
  ((double *)&(param_1.X))[1] = 0;
  ((double *)&(param_1.X))[2] = 0;
  ((double *)&(param_1.X))[3] = 0;
  ((double *)&(param_1.X))[4] = 0;
  ((double *)&(param_1.X))[5] = 0;
  ((double *)&(param_1.X))[6] = 0;
  ((double *)&(param_1.X))[7] = 0;
  ((double *)&(param_1.X))[8] = 0;
  ((double *)&(param_1.X))[9] = 0;
  ((double *)&(param_1.X))[10] = 0;
  ((double *)&(param_1.X))[0xb] = 0;
  *(undefined8 *)(*(uint32_t *)&param_1.X + 0xc) = 0;
  *(undefined1 *)(*(uint32_t *)&param_1.X + 0xe) = 0;
  __security_check_cookie(uStack_14 ^ (uint)auStack_cc);
  return;
}





//==== 0065d810 Cast_ModuleCompartment_ ====


/* public: class util__WeakPtr_L_structModuleCompartment_G_  util__WeakPtr_L_struct_WeaponCompartment_G___Cast_L_structModuleCompartment_G_(void)const  */

undefined4 * 
util__WeakPtr_struct_WeaponCompartment___Cast_struct_ModuleCompartment
          (WeakPtr_L_struct_WeaponCompartment_G_ *this)

{
  ReferenceController *this_00;
  undefined4 *in_stack_00000004;
  
  this_00 = *(ReferenceController **)(this + 4);
  *in_stack_00000004 = *(undefined4 *)this;
  in_stack_00000004[1] = (undefined4)(uintptr_t)(this_00);
  if (this_00 != (ReferenceController *)0x0) {
    util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(this_00);
  }
  return in_stack_00000004;
}





//==== 0065dbe0 Max_int_ ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* int __cdecl util__Max_int(class util__Darray_L_int_G_ const &) */

int __cdecl util__Max_int(Darray_L_int_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar1 = (**(code **)(param_1->_pad_0x0_0 + 0xc))();
  if (iVar1 == 0) {
    return 0;
  }
  *(uint32_t *)&local_10 = 0;
  piVar2 = (int *)(**(code **)param_1->_pad_0x0_0)(&local_10);
  local_c = 0;
  iVar1 = *piVar2;
  iVar3 = (**(code **)(param_1->_pad_0x0_0 + 0xc))();
  if (local_c < iVar3) {
    do {
      piVar2 = (int *)(**(code **)param_1->_pad_0x0_0)(&local_c);
      if (iVar1 <= *piVar2) {
        iVar1 = *piVar2;
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(param_1->_pad_0x0_0 + 0xc))();
    } while (local_c < iVar3);
  }
  return iVar1;
}

//==== 0065dc70 MethodCallerConst___thunk_____thiscall_WeaponModule__vcall_384__flat_____0__ ====


/* public: static bool __cdecl util__DelegateFactory_L_class_WeaponModule_Cbool_G___MethodCallerConst_L___thunk____thiscallWeaponModule____PUNK_P_vcall_384_C_flat_______C0__G_(void const * const) */

bool __cdecl
util__DelegateFactory_class_WeaponModule_bool___MethodCallerConst___thunk_____thiscall_WeaponModule___vcall__384__flat_______0(void *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Load optimize_e__size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x005b19a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(uintptr_t)(*(int *)param_1 + 0x180))();
  return (bool)uVar1;
}





//==== 0065dc80 MethodCallerConst__public__double___thiscall_WeaponModule__GetChartAccurateTargetRange_km_double_const__0__ ====


/* public: static double __cdecl util__DelegateFactory_L_class_WeaponModule_Cdouble_Cdouble_G___MethodCallerConst_L__public_double__thiscall_WeaponModule__GetChartAccurateTargetRange_km_double_const_C0__G_(void const * const,double) */

double __cdecl
util__DelegateFactory_class_WeaponModule_double_double___MethodCallerConst__public__double___thiscall_WeaponModule__GetChartAccurateTargetRange_km_double_const__0
          (void *param_1,double param_2)

{
  double dVar1;
  undefined4 in_stack_00000008;
  
  dVar1 = WeaponModule__GetChartAccurateTargetRange_km
                    ((WeaponModule *)param_1,(double)CONCAT44((*(uint32_t*)&(param_2)),in_stack_00000008));
}





//==== 0065dca0 MethodCallerConst__public__struct_util__Range_double____thiscall_WeaponModule__GetChartXRanges_void_const__0__ ====


/* public: static struct util__Range_L_double_G_ __cdecl util__DelegateFactory_L_classWeaponModule_Cstruct_util__Range_L_double_G__G___MethodCallerConst_L__public_structutil__Range_L_double_G___thiscall_WeaponModule__GetChartXRanges_void_const_C0__G_(void const * const) */

Range_L_double_G_ * __cdecl
util__DelegateFactory_class_WeaponModule_struct_util__Range_double_____MethodCallerConst__public__struct_util__Range_double____thiscall_WeaponModule__GetChartXRanges_void_const__0
          (Range_L_double_G_ *__return_storage_ptr__,void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Range_L_double_G_ *pRVar4;
  Range_L_double_G_ RStack_14;
  
  pRVar4 = WeaponModule__GetChartXRanges((WeaponModule *)param_1,&RStack_14);
  uVar1 = *(undefined4 *)((int)&pRVar4->Lower + 4);
  uVar2 = *(undefined4 *)&pRVar4->Upper;
  uVar3 = *(undefined4 *)((int)&pRVar4->Upper + 4);
  *(undefined4 *)&__return_storage_ptr__->Lower = *(undefined4 *)&pRVar4->Lower;
  *(undefined4 *)((int)&__return_storage_ptr__->Lower + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Upper = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Upper + 4) = uVar3;
  return __return_storage_ptr__;
}





//==== 0065dcc0 MethodCallerConst__public__struct_util__Range_double____thiscall_WeaponModule__GetChartYRanges_void_const__0__ ====


/* public: static struct util__Range_L_double_G_ __cdecl util__DelegateFactory_L_classWeaponModule_Cstruct_util__Range_L_double_G__G___MethodCallerConst_L__public_structutil__Range_L_double_G___thiscall_WeaponModule__GetChartYRanges_void_const_C0__G_(void const * const) */

Range_L_double_G_ * __cdecl
util__DelegateFactory_class_WeaponModule_struct_util__Range_double_____MethodCallerConst__public__struct_util__Range_double____thiscall_WeaponModule__GetChartYRanges_void_const__0
          (Range_L_double_G_ *__return_storage_ptr__,void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Range_L_double_G_ *pRVar4;
  Range_L_double_G_ RStack_14;
  
  pRVar4 = WeaponModule__GetChartYRanges((WeaponModule *)param_1,&RStack_14);
  uVar1 = *(undefined4 *)((int)&pRVar4->Lower + 4);
  uVar2 = *(undefined4 *)&pRVar4->Upper;
  uVar3 = *(undefined4 *)((int)&pRVar4->Upper + 4);
  *(undefined4 *)&__return_storage_ptr__->Lower = *(undefined4 *)&pRVar4->Lower;
  *(undefined4 *)((int)&__return_storage_ptr__->Lower + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Upper = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Upper + 4) = uVar3;
  return __return_storage_ptr__;
}





//==== 0065dce0 MethodCallerConst__public__class_util__Str_char____thiscall_WeaponModule__GetRangeInfo_void_const__0__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_classWeaponModule_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__public_classutil__Str_L_char_G___thiscall_WeaponModule__GetRangeInfo_void_const_C0__G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_class_WeaponModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_WeaponModule__GetRangeInfo_void_const__0
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(WeaponModule__GetRangeInfo((WeaponModule *)param_1,&SStack_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 0065dd20 MethodCallerConst__public__class_util__Str_char____thiscall_WeaponModule__GetReloadInfo_void_const__0__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_classWeaponModule_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__public_classutil__Str_L_char_G___thiscall_WeaponModule__GetReloadInfo_void_const_C0__G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_class_WeaponModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_WeaponModule__GetReloadInfo_void_const__0
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(WeaponModule__GetReloadInfo((WeaponModule *)param_1,&SStack_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 0065dd60 MethodCallerConst__public__class_util__Str_char____thiscall_WeaponModule__GetShotInfo_void_const__0__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_classWeaponModule_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__public_classutil__Str_L_char_G___thiscall_WeaponModule__GetShotInfo_void_const_C0__G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_class_WeaponModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_WeaponModule__GetShotInfo_void_const__0
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(WeaponModule__GetShotInfo((WeaponModule *)param_1,&SStack_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 0065dda0 MethodCallerConst__public__class_util__Str_char____thiscall_WeaponModule__GetTurretInfo_void_const__0__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_classWeaponModule_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__public_classutil__Str_L_char_G___thiscall_WeaponModule__GetTurretInfo_void_const_C0__G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_class_WeaponModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_WeaponModule__GetTurretInfo_void_const__0
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(WeaponModule__GetTurretInfo((WeaponModule *)param_1,&SStack_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 0065dde0 MethodCallerConst__public__bool___thiscall_WeaponModule__IsTurreted_void_const__0__ ====


/* public: static bool __cdecl util__DelegateFactory_L_class_WeaponModule_Cbool_G___MethodCallerConst_L__public_bool__thiscall_WeaponModule__IsTurreted_void_const_C0__G_(void const * const) */

bool __cdecl
util__DelegateFactory_class_WeaponModule_bool___MethodCallerConst__public__bool___thiscall_WeaponModule__IsTurreted_void_const__0(void *param_1)

{
  float10 fVar1;
  
                    /* WARNING: Load optimize_e__size is inaccurate */
  fVar1 = (float10)(**(code **)(uintptr_t)(*(int *)param_1 + 0x198))();
  if (0.0 < (double)fVar1) {
                    /* WARNING: Load optimize_e__size is inaccurate */
    fVar1 = (float10)(**(code **)(uintptr_t)(*(int *)param_1 + 0x19c))();
    if (0.0 < (double)fVar1) {
      return true;
    }
  }
  return false;
}





//==== 0065ddf0 MethodCallerConst__public__bool___thiscall_WeaponModule__RequiresReloading_void_const__0__ ====


/* public: static bool __cdecl util__DelegateFactory_L_class_WeaponModule_Cbool_G___MethodCallerConst_L__public_bool__thiscall_WeaponModule__RequiresReloading_void_const_C0__G_(void const * const) */

bool __cdecl
util__DelegateFactory_class_WeaponModule_bool___MethodCallerConst__public__bool___thiscall_WeaponModule__RequiresReloading_void_const__0
          (void *param_1)

{
  float10 fVar1;
  
                    /* WARNING: Load optimize_e__size is inaccurate */
  fVar1 = (float10)(**(code **)(uintptr_t)(*(int *)param_1 + 0x1b8))();
  if ((double)fVar1 <= 0.0) {
                    /* WARNING: Load optimize_e__size is inaccurate */
    fVar1 = (float10)(**(code **)(uintptr_t)(*(int *)param_1 + 0x1c4))();
    if ((double)fVar1 <= 0.0) {
                    /* WARNING: Load optimize_e__size is inaccurate */
      fVar1 = (float10)(**(code **)(uintptr_t)(*(int *)param_1 + 0x1c0))();
      if ((double)fVar1 <= 0.0) {
        return false;
      }
    }
  }
  return true;
}





//==== 0065e17e vcall_408__flat____ ====

/* [thunk]: __thiscall WeaponModule:: 0 vcall{408,{flat}}' }' */

void __thiscall WeaponModule___vcall__408__flat(WeaponModule *this)

{
                    /* WARNING: Could not recover jumptable at 0x0065e180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_pad_0x0_0 + 0x198))();
  return;
}

//==== 0065e186 vcall_412__flat____ ====

/* [thunk]: __thiscall WeaponModule:: 0 vcall{412,{flat}}' }' */

void __thiscall WeaponModule___vcall__412__flat(WeaponModule *this)

{
                    /* WARNING: Could not recover jumptable at 0x0065e188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_pad_0x0_0 + 0x19c))();
  return;
}

//==== 0065e18e vcall_416__flat____ ====

/* [thunk]: __thiscall WeaponModule:: 0 vcall{416,{flat}}' }' */

void __thiscall WeaponModule___vcall__416__flat(WeaponModule *this)

{
                    /* WARNING: Could not recover jumptable at 0x0065e190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_pad_0x0_0 + 0x1a0))();
  return;
}

//==== 0065e196 vcall_436__flat____ ====

/* [thunk]: __thiscall WeaponModule:: 0 vcall{436,{flat}}' }' */

void __thiscall WeaponModule___vcall__436__flat(WeaponModule *this)

{
                    /* WARNING: Could not recover jumptable at 0x0065e198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_pad_0x0_0 + 0x1b4))();
  return;
}

//==== 0065e19e vcall_440__flat____ ====

/* [thunk]: __thiscall WeaponModule:: 0 vcall{440,{flat}}' }' */

void __thiscall WeaponModule___vcall__440__flat(WeaponModule *this)

{
                    /* WARNING: Could not recover jumptable at 0x0065e1a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_pad_0x0_0 + 0x1b8))();
  return;
}

//==== 0065e1a6 vcall_444__flat____ ====

/* [thunk]: __thiscall WeaponModule:: 0 vcall{444,{flat}}' }' */

void __thiscall WeaponModule___vcall__444__flat(WeaponModule *this)

{
                    /* WARNING: Could not recover jumptable at 0x0065e1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_pad_0x0_0 + 0x1bc))();
  return;
}

//==== 0065e1ae vcall_448__flat____ ====

/* [thunk]: __thiscall WeaponModule:: 0 vcall{448,{flat}}' }' */

void __thiscall WeaponModule___vcall__448__flat(WeaponModule *this)

{
                    /* WARNING: Could not recover jumptable at 0x0065e1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_pad_0x0_0 + 0x1c0))();
  return;
}

//==== 0065e1b6 vcall_452__flat____ ====

/* [thunk]: __thiscall WeaponModule:: 0 vcall{452,{flat}}' }' */

void __thiscall WeaponModule___vcall__452__flat(WeaponModule *this)

{
                    /* WARNING: Could not recover jumptable at 0x0065e1b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_pad_0x0_0 + 0x1c4))();
  return;
}

//==== 0065e1be vcall_460__flat____ ====

/* [thunk]: __thiscall WeaponModule:: 0 vcall{460,{flat}}' }' */

void __thiscall WeaponModule___vcall__460__flat(WeaponModule *this)

{
                    /* WARNING: Could not recover jumptable at 0x0065e1c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_pad_0x0_0 + 0x1cc))();
  return;
}

