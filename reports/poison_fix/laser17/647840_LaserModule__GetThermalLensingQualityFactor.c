
/* public: double __thiscall LaserModule::GetThermalLensingQualityFactor(void)const  */

double __thiscall LaserModule::GetThermalLensingQualityFactor(LaserModule *this)

{
  int iVar1;
  bool bVar2;
  Darray<double> *pDVar3;
  int iVar4;
  double *pdVar5;
  Material *pMVar6;
  Material *pMVar7;
  float10 extraout_ST0;
  double dVar8;
  Maybe<double> local_4c;
  double local_3c;
  undefined8 local_34;
  int iStack_2c;
  int iStack_28;
  double local_24;
  Maybe<double> *local_1c;
  Material *local_18;
  double local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pMVar7 = (this->Mirror).Composition;
  if ((char)(pMVar7->MaterialMemoizationHandlerInstance).ResetFunctions._padding_ == '\0') {
    util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar8 = pMVar7->RoughnessCoefficient;
  local_14 = 0.0;
  if (NAN(dVar8) != (dVar8 == 0.0)) {
    util::LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\modules\\weaponmodules\\lasermodules.cpp"
                    ,0x38a,"GainMedium->LasingMediumProperties->ThermoopticCoefficient__K != 0.",
                    (char *)0x0);
    DebugBreak();
  }
  pMVar7 = (this->Mirror).Composition;
  local_3c = __real_4000000000000000;
  if ((char)(pMVar7->MaterialMemoizationHandlerInstance).ResetFunctions._padding_ == '\0') {
    util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_24 = (this->Mirror).CachedRadius_m /
             ((pMVar7->LasingMediumProperties).Data.SpontaneousLifetime_s * __real_3e112e0be826d695
             * (double)*(int *)&(this->Mirror).field_0x14);
  local_1c = util::Sqrt(&local_4c,&local_3c);
  if (local_1c->IsValidData == false) {
    util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if ((char)(this->ArcLamp)._padding_ == '\0') {
    iVar4 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
    local_c = iVar4 + 1;
    util::Darray<struct_util::tuple2<enum_Order::Type,int>_>::SetSize
              ((Darray<struct_util::tuple2<enum_Order::Type,int>_> *)
               &this->GetFinalWavelength_nm_MemoizedValue,&local_c);
    bVar2 = util::Darray<void_(__thiscall_Fleet::*)(void)const_>::CheckSize
                      ((Darray<void_(__thiscall_Fleet::*)(void)const_> *)
                       &this->GetFinalWavelength_nm_MemoizedValue,iVar4);
    if (bVar2) {
      iVar4 = *(int *)((int)&(this->GetFinalWavelength_nm_MemoizedValue).Data + 4);
      iVar1 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
      *(code **)(iVar4 + -8 + iVar1 * 8) = GetHeatingRate_W_Clear;
      *(undefined4 *)(iVar4 + -4 + iVar1 * 8) = 0;
    }
    GetHeatGenerated_W_Memoize(this);
    if ((this->GetHeatingRate_W_MemoizedValue).IsValidData == false) {
      util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar8 = (this->GetHeatingRate_W_MemoizedValue).Data;
    iStack_2c = CONCAT31(iStack_2c._1_3_,1);
    local_34._0_4_ = SUB84(dVar8,0);
    local_34._4_4_ = (double *)((ulonglong)dVar8 >> 0x20);
    (this->ArcLamp)._padding_ = (int)local_34;
    (this->ArcLamp)._padding_ = (int)local_34._4_4_;
    (this->ArcLamp)._padding_ = iStack_2c;
    (this->ArcLamp)._padding_ = iStack_28;
    local_34 = dVar8;
    if ((char)(this->ArcLamp)._padding_ == '\0') {
      util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  pDVar3 = GetPumpingBands_nm(this,(Darray<double> *)&local_34);
  local_18 = (Material *)(**(code **)(pDVar3->_padding_ + 0xc))();
  if ((int)local_18 < 1) {
    local_14 = 0.0;
  }
  else {
    local_c = 0;
    iVar4 = (**(code **)(pDVar3->_padding_ + 0xc))();
    if (local_c < iVar4) {
      do {
        pdVar5 = (double *)(**(code **)pDVar3->_padding_)();
        local_14 = *pdVar5 + local_14;
        local_c = local_c + 1;
        iVar4 = (**(code **)(pDVar3->_padding_ + 0xc))();
      } while (local_c < iVar4);
    }
    local_14 = local_14 / (double)(int)local_18;
  }
  local_34._0_4_ = (int)&util::Darray<double>::_vftable_;
  if (local_34._4_4_ != (double *)0x0) {
    operator_delete__(local_34._4_4_);
  }
  local_34._0_4_ = 0x919488;
  local_34._4_4_ = (double *)0x0;
  local_14 = Physics::GetFrequency_Hz(local_14);
  pMVar7 = (this->Mirror).Composition;
  if ((char)(pMVar7->MaterialMemoizationHandlerInstance).ResetFunctions._padding_ == '\0') {
    util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar8 = Physics::GetFrequency_Hz((pMVar7->LasingMediumProperties).Data.SpontaneousLifetime_s);
  pMVar7 = (this->Mirror).Composition;
  local_14 = (local_14 - dVar8) / local_14;
  local_18 = pMVar7;
  if ((char)(pMVar7->MaterialMemoizationHandlerInstance).ResetFunctions._padding_ == '\0') {
    util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
    pMVar7 = (this->Mirror).Composition;
  }
  pMVar6 = pMVar7;
  if ((char)(pMVar7->MaterialMemoizationHandlerInstance).ResetFunctions._padding_ == '\0') {
    util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
    pMVar6 = (this->Mirror).Composition;
  }
  local_24 = ((local_1c->Data * *(double *)&this->ArcLamp * local_14 *
              local_18->RoughnessCoefficient) /
             ((pMVar7->LasingMediumProperties).Data.SpontaneousLifetime_s * __real_3e112e0be826d695
             * pMVar6->Resistivity_Ohm_m)) * local_24 * local_24 * local_24 * local_24;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}

