
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall LaserModule::GetBeamWaistRadius_m(double)const  */

double __thiscall LaserModule::GetBeamWaistRadius_m(LaserModule *this,double param_1)

{
  int iVar1;
  int iVar2;
  Material *pMVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  Maybe<double> *pMVar8;
  Maybe<double> local_34;
  double local_24;
  double local_1c;
  undefined8 local_14;
  undefined8 uStack_c;
  
  uStack_c = GetThermalLensingQualityFactor(this);
  local_1c = uStack_c * uStack_c + __real_4022000000000000;
  pMVar8 = util::Sqrt(&local_34,&local_1c);
  if (pMVar8->IsValidData == false) {
    util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_24 = pMVar8->Data;
  if ((this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData == false) {
    iVar1 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
    uStack_c = (double)CONCAT44(iVar1 + 1,(undefined4)uStack_c);
    util::Darray<struct_util::tuple2<enum_Order::Type,int>_>::SetSize
              ((Darray<struct_util::tuple2<enum_Order::Type,int>_> *)
               &this->GetFinalWavelength_nm_MemoizedValue,(int *)((int)&uStack_c + 4));
    bVar7 = util::Darray<void_(__thiscall_Fleet::*)(void)const_>::CheckSize
                      ((Darray<void_(__thiscall_Fleet::*)(void)const_> *)
                       &this->GetFinalWavelength_nm_MemoizedValue,iVar1);
    if (bVar7) {
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
        dVar4 = (pMVar3->LasingMediumProperties).Data.SpontaneousLifetime_s;
      }
      else {
        dVar4 = *(double *)&(this->SecondFrequencyDoubler).Data._padding_ * __real_3fe0000000000000;
      }
    }
    else {
      dVar4 = *(double *)&this->FocusingMirror * __real_3fe0000000000000;
    }
    uVar5 = uStack_c;
    uStack_c = (double)CONCAT71(uStack_c._1_7_,1);
    uVar6 = uStack_c;
    local_14._0_4_ = SUB84(dVar4,0);
    local_14._4_4_ = (undefined4)((ulonglong)dVar4 >> 0x20);
    uStack_c._4_4_ = SUB84(uVar5,4);
    *(undefined4 *)&(this->GetFiringTemperatureJump_K_MemoizedValue).Data = (undefined4)local_14;
    *(undefined4 *)((int)&(this->GetFiringTemperatureJump_K_MemoizedValue).Data + 4) =
         local_14._4_4_;
    *(undefined4 *)&(this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData =
         (undefined4)uStack_c;
    *(undefined4 *)&(this->GetFiringTemperatureJump_K_MemoizedValue).field_0xc = uStack_c._4_4_;
    if ((this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData == false) {
      local_14 = dVar4;
      uStack_c = (double)uVar6;
      util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  return ((this->GetFiringTemperatureJump_K_MemoizedValue).Data * __real_3e112e0be826d695 * local_24
         ) / (((this->FocusingMirror).CachedRadius_m / param_1) * __real_400921fb54442d18);
}

