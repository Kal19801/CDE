
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall LaserModule::GetHeatGenerated_W_Memoize(void)const  */

void __thiscall LaserModule::GetHeatGenerated_W_Memoize(LaserModule *this)

{
  Maybe<double> *this_00;
  int iVar1;
  int iVar2;
  bool bVar3;
  double dVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int local_8;
  
  if ((this->GetHeatingRate_W_MemoizedValue).IsValidData == false) {
    iVar1 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
    this_00 = &this->GetFinalWavelength_nm_MemoizedValue;
    local_8 = iVar1 + 1;
    util::Darray<struct_util::tuple2<enum_Order::Type,int>_>::SetSize
              ((Darray<struct_util::tuple2<enum_Order::Type,int>_> *)this_00,&local_8);
    bVar3 = util::Darray<void_(__thiscall_Fleet::*)(void)const_>::CheckSize
                      ((Darray<void_(__thiscall_Fleet::*)(void)const_> *)this_00,iVar1);
    if (bVar3) {
      iVar1 = *(int *)((int)&(this->GetFinalWavelength_nm_MemoizedValue).Data + 4);
      iVar2 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
      *(code **)(iVar1 + -8 + iVar2 * 8) = GetHeatGenerated_W_Clear;
      *(undefined4 *)(iVar1 + -4 + iVar2 * 8) = 0;
    }
    bVar3 = (this->GetHeatGenerated_W_MemoizedValue).IsValidData == false;
    if (bVar3) {
      iVar1 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
      local_8 = iVar1 + 1;
      util::Darray<struct_util::tuple2<enum_Order::Type,int>_>::SetSize
                ((Darray<struct_util::tuple2<enum_Order::Type,int>_> *)this_00,&local_8);
      bVar3 = util::Darray<void_(__thiscall_Fleet::*)(void)const_>::CheckSize
                        ((Darray<void_(__thiscall_Fleet::*)(void)const_> *)this_00,iVar1);
      if (bVar3) {
        iVar1 = *(int *)((int)&(this->GetFinalWavelength_nm_MemoizedValue).Data + 4);
        iVar2 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
        *(code **)(iVar1 + -8 + iVar2 * 8) = FixedOrbit::GetEccentricityPeriapsisRoot_Clear;
        *(undefined4 *)(iVar1 + -4 + iVar2 * 8) = 0;
      }
      dVar4 = GetFinalOutputPower_W_MemoizedFunction(this);
      uStack_10 = CONCAT31(uStack_10._1_3_,1);
      local_18 = SUB84(dVar4,0);
      uStack_14 = (undefined4)((ulonglong)dVar4 >> 0x20);
      *(undefined4 *)&(this->GetHeatGenerated_W_MemoizedValue).Data = local_18;
      *(undefined4 *)((int)&(this->GetHeatGenerated_W_MemoizedValue).Data + 4) = uStack_14;
      *(undefined4 *)&(this->GetHeatGenerated_W_MemoizedValue).IsValidData = uStack_10;
      *(undefined4 *)&(this->GetHeatGenerated_W_MemoizedValue).field_0xc = uStack_c;
      bVar3 = (this->GetHeatGenerated_W_MemoizedValue).IsValidData == false;
    }
    if (bVar3) {
      util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if ((this->ArcLamp).CavitySemiminorAxis_m < (this->GetHeatGenerated_W_MemoizedValue).Data) {
      util::LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\modules\\weaponmodules\\lasermodules.cpp"
                      ,0x338,"ArcLamp.PowerSupplied_W >= GetFinalOutputPower_W()",(char *)0x0);
      DebugBreak();
    }
    if ((this->GetHeatGenerated_W_MemoizedValue).IsValidData == false) {
      iVar1 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
      local_8 = iVar1 + 1;
      util::Darray<struct_util::tuple2<enum_Order::Type,int>_>::SetSize
                ((Darray<struct_util::tuple2<enum_Order::Type,int>_> *)this_00,&local_8);
      bVar3 = util::Darray<void_(__thiscall_Fleet::*)(void)const_>::CheckSize
                        ((Darray<void_(__thiscall_Fleet::*)(void)const_> *)this_00,iVar1);
      if (bVar3) {
        iVar1 = *(int *)((int)&(this->GetFinalWavelength_nm_MemoizedValue).Data + 4);
        iVar2 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
        *(code **)(iVar1 + -8 + iVar2 * 8) = FixedOrbit::GetEccentricityPeriapsisRoot_Clear;
        *(undefined4 *)(iVar1 + -4 + iVar2 * 8) = 0;
      }
      dVar4 = GetFinalOutputPower_W_MemoizedFunction(this);
      uStack_10 = CONCAT31(uStack_10._1_3_,1);
      local_18 = SUB84(dVar4,0);
      uStack_14 = (undefined4)((ulonglong)dVar4 >> 0x20);
      *(undefined4 *)&(this->GetHeatGenerated_W_MemoizedValue).Data = local_18;
      *(undefined4 *)((int)&(this->GetHeatGenerated_W_MemoizedValue).Data + 4) = uStack_14;
      *(undefined4 *)&(this->GetHeatGenerated_W_MemoizedValue).IsValidData = uStack_10;
      *(undefined4 *)&(this->GetHeatGenerated_W_MemoizedValue).field_0xc = uStack_c;
      if ((this->GetHeatGenerated_W_MemoizedValue).IsValidData == false) {
        util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
    }
    uStack_10 = CONCAT31(uStack_10._1_3_,1);
    (this->GetHeatingRate_W_MemoizedValue).Data =
         (this->ArcLamp).CavitySemiminorAxis_m - (this->GetHeatGenerated_W_MemoizedValue).Data;
    *(undefined4 *)&(this->GetHeatingRate_W_MemoizedValue).IsValidData = uStack_10;
    *(undefined4 *)&(this->GetHeatingRate_W_MemoizedValue).field_0xc = uStack_c;
  }
  return;
}

