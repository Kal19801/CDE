
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall LaserModule::GetFinalWavelength_nm_Memoize(void)const  */

void __thiscall LaserModule::GetFinalWavelength_nm_Memoize(LaserModule *this)

{
  int iVar1;
  int iVar2;
  Material *pMVar3;
  double dVar4;
  bool bVar5;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int local_8;
  
  if ((this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData == false) {
    iVar1 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
    local_8 = iVar1 + 1;
    util::Darray<struct_util::tuple2<enum_Order::Type,int>_>::SetSize
              ((Darray<struct_util::tuple2<enum_Order::Type,int>_> *)
               &this->GetFinalWavelength_nm_MemoizedValue,&local_8);
    bVar5 = util::Darray<void_(__thiscall_Fleet::*)(void)const_>::CheckSize
                      ((Darray<void_(__thiscall_Fleet::*)(void)const_> *)
                       &this->GetFinalWavelength_nm_MemoizedValue,iVar1);
    if (bVar5) {
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
    uStack_10 = CONCAT31(uStack_10._1_3_,1);
    local_18 = SUB84(dVar4,0);
    uStack_14 = (undefined4)((ulonglong)dVar4 >> 0x20);
    *(undefined4 *)&(this->GetFiringTemperatureJump_K_MemoizedValue).Data = local_18;
    *(undefined4 *)((int)&(this->GetFiringTemperatureJump_K_MemoizedValue).Data + 4) = uStack_14;
    *(undefined4 *)&(this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData = uStack_10;
    *(undefined4 *)&(this->GetFiringTemperatureJump_K_MemoizedValue).field_0xc = uStack_c;
  }
  return;
}

