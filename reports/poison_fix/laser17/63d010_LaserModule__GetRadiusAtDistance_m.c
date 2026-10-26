
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual double __thiscall LaserModule::GetRadiusAtDistance_m(double)const  */

double __thiscall LaserModule::GetRadiusAtDistance_m(LaserModule *this,double param_1)

{
  int iVar1;
  int iVar2;
  Material *pMVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  Maybe<double> *pMVar7;
  float10 fVar8;
  double dVar9;
  double dVar10;
  Maybe<double> local_64;
  undefined8 local_54;
  undefined8 uStack_4c;
  double local_44;
  undefined8 uStack_3c;
  double local_34;
  double local_2c;
  undefined1 local_24 [16];
  double local_14;
  undefined8 local_c;
  
  local_c = GetThermalLensingQualityFactor(this);
  local_14 = local_c * local_c + __real_4022000000000000;
  pMVar7 = util::Sqrt(&local_64,&local_14);
  if (pMVar7->IsValidData == false) {
    util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_24._8_8_ = pMVar7->Data;
  if ((this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData == false) {
    iVar1 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
    local_c = (double)CONCAT44(iVar1 + 1,(undefined4)local_c);
    util::Darray<struct_util::tuple2<enum_Order::Type,int>_>::SetSize
              ((Darray<struct_util::tuple2<enum_Order::Type,int>_> *)
               &this->GetFinalWavelength_nm_MemoizedValue,(int *)((int)&local_c + 4));
    bVar6 = util::Darray<void_(__thiscall_Fleet::*)(void)const_>::CheckSize
                      ((Darray<void_(__thiscall_Fleet::*)(void)const_> *)
                       &this->GetFinalWavelength_nm_MemoizedValue,iVar1);
    if (bVar6) {
      iVar1 = *(int *)((int)&(this->GetFinalWavelength_nm_MemoizedValue).Data + 4);
      iVar2 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
      *(code **)(iVar1 + -8 + iVar2 * 8) = FixedOrbit::GetEccentricityApoapsisRoot_Clear;
      *(undefined4 *)(iVar1 + -4 + iVar2 * 8) = 0;
    }
    if (*(char *)&(this->FocusingMirror).Composition == '\0') {
      if ((char)(this->SecondFrequencyDoubler).Data.NonlinearOptic._padding_ == '\0') {
        pMVar3 = (this->Mirror).Composition;
        if ((char)(pMVar3->MaterialMemoizationHandlerInstance).ResetFunctions._padding_ == '\0') {
          util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        dVar10 = (pMVar3->LasingMediumProperties).Data.SpontaneousLifetime_s;
      }
      else {
        dVar10 = *(double *)&(this->SecondFrequencyDoubler).Data._padding_ * __real_3fe0000000000000
        ;
      }
    }
    else {
      dVar10 = *(double *)&this->FocusingMirror * __real_3fe0000000000000;
    }
    uVar4 = uStack_4c;
    uStack_4c = (double)CONCAT71(uStack_4c._1_7_,1);
    uVar5 = uStack_4c;
    local_54._0_4_ = SUB84(dVar10,0);
    local_54._4_4_ = (undefined4)((ulonglong)dVar10 >> 0x20);
    uStack_4c._4_4_ = SUB84(uVar4,4);
    *(undefined4 *)&(this->GetFiringTemperatureJump_K_MemoizedValue).Data = (undefined4)local_54;
    *(undefined4 *)((int)&(this->GetFiringTemperatureJump_K_MemoizedValue).Data + 4) =
         local_54._4_4_;
    *(undefined4 *)&(this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData =
         (undefined4)uStack_4c;
    *(undefined4 *)&(this->GetFiringTemperatureJump_K_MemoizedValue).field_0xc = uStack_4c._4_4_;
    local_54 = dVar10;
    uStack_4c = (double)uVar5;
    if ((this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData == false) {
      util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  dVar9 = Physics::GetDiffractionLimitedAngle_radians
                    ((this->GetFiringTemperatureJump_K_MemoizedValue).Data,
                     (this->FocusingMirror).CachedRadius_m);
  dVar10 = param_1 * __real_408f400000000000;
  local_2c = dVar9 * (double)local_24._8_8_ * __real_3fe0000000000000;
  local_24._8_8_ = dVar10;
  uStack_4c = util::Tan(&local_2c);
  uStack_4c = uStack_4c * (double)local_24._8_8_;
  if ((char)(this->ArcLamp).ArcLampPumpSubModuleMemoizationHandlerInstance.ResetFunctions.Size ==
      '\0') {
    iVar1 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
    local_c = (double)CONCAT44(iVar1 + 1,(undefined4)local_c);
    util::Darray<struct_util::tuple2<enum_Order::Type,int>_>::SetSize
              ((Darray<struct_util::tuple2<enum_Order::Type,int>_> *)
               &this->GetFinalWavelength_nm_MemoizedValue,(int *)((int)&local_c + 4));
    bVar6 = util::Darray<void_(__thiscall_Fleet::*)(void)const_>::CheckSize
                      ((Darray<void_(__thiscall_Fleet::*)(void)const_> *)
                       &this->GetFinalWavelength_nm_MemoizedValue,iVar1);
    if (bVar6) {
      iVar1 = *(int *)((int)&(this->GetFinalWavelength_nm_MemoizedValue).Data + 4);
      iVar2 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
      *(code **)(iVar1 + -8 + iVar2 * 8) = GetMirrorFocalLengthLimit_m_Clear;
      *(undefined4 *)(iVar1 + -4 + iVar2 * 8) = 0;
    }
    local_c = Material::GetPoissonsRatio(*(Material **)&(this->FocusingMirror).CachedIsMirror);
    fVar8 = (float10)(**(code **)(*(int *)&(this->FocusingMirror).CachedWavelength_nm + 0x7c))();
    local_34 = *(double *)&this->Unmounted;
    local_24._8_8_ = (undefined8)fVar8;
    uStack_3c = Material::GetYoungsModulus_Pa(*(Material **)&(this->FocusingMirror).CachedIsMirror);
    local_24._8_8_ = (double)local_24._8_8_ * (double)local_24._8_8_ * (double)local_24._8_8_;
    uStack_3c = uStack_3c * (double)local_24._8_8_;
    local_24._8_8_ =
         Material::GetYieldStrength_Pa(*(Material **)&(this->FocusingMirror).CachedIsMirror);
    dVar9 = uStack_3c;
    uStack_3c = (double)CONCAT71(uStack_3c._1_7_,1);
    uVar4 = uStack_3c;
    local_44 = (dVar9 / ((double)local_24._8_8_ *
                         (__real_3ff0000000000000 - local_c * local_c) * __real_4028000000000000 *
                         ___real_3f90000000000000 * __real_4010000000000000 * local_34 * local_34 *
                        ((local_c + __real_4008000000000000) / (local_c + __real_3ff0000000000000)))
               ) * __real_3fe0000000000000;
    uStack_3c._4_4_ = SUB84(dVar9,4);
    *(double *)&(this->ArcLamp).ArcLampPumpSubModuleMemoizationHandlerInstance.ResetFunctions =
         local_44;
    (this->ArcLamp).ArcLampPumpSubModuleMemoizationHandlerInstance.ResetFunctions.Size =
         (int)uStack_3c;
    (this->ArcLamp).ArcLampPumpSubModuleMemoizationHandlerInstance.ResetFunctions.Capacity =
         uStack_3c._4_4_;
    if ((char)(this->ArcLamp).ArcLampPumpSubModuleMemoizationHandlerInstance.ResetFunctions.Size ==
        '\0') {
      uStack_3c = (double)uVar4;
      util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  dVar9 = *(double *)&(this->ArcLamp).ArcLampPumpSubModuleMemoizationHandlerInstance.ResetFunctions;
  if (dVar10 <= dVar9) {
    dVar10 = dVar9;
  }
  uStack_3c = (this->FocusingMirror).CachedRadius_m / dVar10;
  dVar9 = GetBeamWaistRadius_m(this,dVar10);
  uStack_3c = 0.0 / (dVar9 / uStack_3c);
  local_34 = uStack_3c * uStack_3c + __real_3ff0000000000000;
  pMVar7 = util::Sqrt((Maybe<double> *)local_24,&local_34);
  if (pMVar7->IsValidData == false) {
    util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar10 = GetBeamWaistRadius_m(this,dVar10);
  return dVar10 * pMVar7->Data + uStack_4c;
}

