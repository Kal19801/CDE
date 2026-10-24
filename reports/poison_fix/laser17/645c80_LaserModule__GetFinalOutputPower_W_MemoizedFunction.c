
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: double __thiscall LaserModule::GetFinalOutputPower_W_MemoizedFunction(void)const  */

double __thiscall LaserModule::GetFinalOutputPower_W_MemoizedFunction(LaserModule *this)

{
  int iVar1;
  int iVar2;
  Material *pMVar3;
  undefined8 uVar4;
  double dVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined8 uStack_c;
  
  uVar7 = SUB84(__real_3ff0000000000000,0);
  uVar8 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  if ((char)(this->SecondFrequencyDoubler).Data.NonlinearOptic._padding_ == '\0') {
    uStack_c = __real_3ff0000000000000;
  }
  else {
    uStack_c = FrequencyDoublerSubModule::GetTotalEfficiency_Percent
                         ((FrequencyDoublerSubModule *)
                          &(this->FrequencyDoubler).Data.NonlinearOptic._padding_);
    uVar7 = SUB84(__real_3ff0000000000000,0);
    uVar8 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  }
  if (*(char *)&(this->FocusingMirror).Composition != '\0') {
    dVar9 = FrequencyDoublerSubModule::GetTotalEfficiency_Percent
                      ((FrequencyDoublerSubModule *)
                       &(this->SecondFrequencyDoubler).Data.NonlinearOptic._padding_);
    uVar7 = SUB84(dVar9,0);
    uVar8 = (undefined4)((ulonglong)dVar9 >> 0x20);
  }
  dVar9 = (double)CONCAT44(uVar8,uVar7) * uStack_c;
  if ((this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData == false) {
    iVar1 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
    uStack_c = (double)CONCAT44(iVar1 + 1,(undefined4)uStack_c);
    util::Darray<struct_util::tuple2<enum_Order::Type,int>_>::SetSize
              ((Darray<struct_util::tuple2<enum_Order::Type,int>_> *)
               &this->GetFinalWavelength_nm_MemoizedValue,(int *)((int)&uStack_c + 4));
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
    uVar4 = uStack_c;
    uStack_c = (double)CONCAT71(uStack_c._1_7_,1);
    dVar5 = uStack_c;
    local_14 = SUB84(dVar10,0);
    uStack_10 = (undefined4)((ulonglong)dVar10 >> 0x20);
    uStack_c._4_4_ = SUB84(uVar4,4);
    *(undefined4 *)&(this->GetFiringTemperatureJump_K_MemoizedValue).Data = local_14;
    *(undefined4 *)((int)&(this->GetFiringTemperatureJump_K_MemoizedValue).Data + 4) = uStack_10;
    *(undefined4 *)&(this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData =
         (undefined4)uStack_c;
    *(undefined4 *)&(this->GetFiringTemperatureJump_K_MemoizedValue).field_0xc = uStack_c._4_4_;
    uStack_c = dVar5;
    if ((this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData == false) {
      util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  uStack_c = Material::GetReflectanceCoefficient
                       (*(Material **)&(this->FocusingMirror).CachedIsMirror,
                        (this->GetFiringTemperatureJump_K_MemoizedValue).Data);
  dVar10 = GetTotalLaserOutputPower_W(this);
  return dVar10 * dVar9 * uStack_c;
}

