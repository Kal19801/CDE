
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall LaserModule::GetTotalOutputPhotonFlux__s(void)const  */

double __thiscall LaserModule::GetTotalOutputPhotonFlux__s(LaserModule *this)

{
  Maybe<double> *this_00;
  int iVar1;
  undefined8 uVar2;
  Material *pMVar3;
  Material *pMVar4;
  bool bVar5;
  float10 fVar6;
  float10 extraout_ST0;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 local_30;
  undefined4 uStack_2c;
  Material *pMStack_28;
  Material *pMStack_24;
  undefined8 local_20;
  double local_18;
  double local_10;
  uint local_8;
  
  uVar2 = _pMStack_28;
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar5 = *(char *)&(this->ArcLamp).CavityWallComposition == '\0';
  this_00 = &(this->ArcLamp).GetMaxPowerLine_W_MemoizedValue;
  if (bVar5) {
    iVar1 = *(int *)&(this->ArcLamp).GetTotalPowerAcrossAllWavelengths_W_MemoizedValue.IsValidData;
    local_20 = (double)CONCAT44(iVar1 + 1,(undefined4)local_20);
    util::Darray<class_util::Reflectable*>::SetSize
              ((Darray<class_util::Reflectable*> *)
               &(this->ArcLamp).GetTotalPowerAcrossAllWavelengths_W_MemoizedValue,
               (int *)((int)&local_20 + 4));
    bVar5 = util::Darray<enum_GraphicsResource::Type>::CheckSize
                      ((Darray<enum_GraphicsResource::Type> *)
                       &(this->ArcLamp).GetTotalPowerAcrossAllWavelengths_W_MemoizedValue,iVar1);
    if (bVar5) {
      *(code **)(*(int *)((int)&(this->ArcLamp).GetTotalPowerAcrossAllWavelengths_W_MemoizedValue.
                                Data + 4) + -4 +
                *(int *)&(this->ArcLamp).GetTotalPowerAcrossAllWavelengths_W_MemoizedValue.
                         IsValidData * 4) = Fleet::GetOriginalDeltaV_km__s_Clear;
    }
    dVar9 = ArcLampPumpSubModule::GetTotalPowerAcrossAllWavelengths_W_MemoizedFunction
                      ((ArcLampPumpSubModule *)this_00);
    _pMStack_28 = CONCAT71(stack0xffffffd9,1);
    local_30 = SUB84(dVar9,0);
    uStack_2c = (undefined4)((ulonglong)dVar9 >> 0x20);
    pMStack_24 = SUB84(uVar2,4);
    *(undefined4 *)&(this->ArcLamp).Radius_m = local_30;
    *(undefined4 *)((int)&(this->ArcLamp).Radius_m + 4) = uStack_2c;
    (this->ArcLamp).CavityWallComposition = pMStack_28;
    (this->ArcLamp).CavityCoolantComposition = pMStack_24;
    bVar5 = *(char *)&(this->ArcLamp).CavityWallComposition == '\0';
  }
  if (bVar5) {
    util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_10 = (this->ArcLamp).CavitySemiminorAxis_m / (this->ArcLamp).Radius_m;
  fVar6 = (float10)FUN_00642d00(&this->GainMedium,this_00);
  local_18 = (double)fVar6;
  local_20 = ArcLampPumpSubModule::GetCavityAbsorptionEfficiency_Percent
                       ((ArcLampPumpSubModule *)this_00);
  dVar9 = ArcLampPumpSubModule::GetCavityReflectanceEfficiency_Percent
                    ((ArcLampPumpSubModule *)this_00);
  local_20 = dVar9 * local_20;
  dVar9 = ArcLampPumpSubModule::GetCavityShapeEfficiency_Percent((ArcLampPumpSubModule *)this_00);
  pMVar4 = (this->Mirror).Composition;
  dVar9 = dVar9 * local_20 * local_18;
  pMVar3 = pMVar4;
  if ((char)(pMVar4->MaterialMemoizationHandlerInstance).ResetFunctions._padding_ == '\0') {
    local_20._4_4_ = pMVar4;
    util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
    pMVar3 = (this->Mirror).Composition;
  }
  iVar1 = *(int *)&(this->Mirror).field_0x14;
  dVar7 = (this->Mirror).CachedRadius_m;
  dVar8 = (pMVar4->LasingMediumProperties).Data.SpontaneousLifetime_s * __real_3e112e0be826d695;
  dVar7 = dVar7 * dVar7 * __real_400921fb54442d18;
  local_20._4_4_ = pMVar3;
  if ((char)(pMVar3->MaterialMemoizationHandlerInstance).ResetFunctions._padding_ == '\0') {
    util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
    pMVar3 = (this->Mirror).Composition;
  }
  local_18 = ((local_20._4_4_)->LasingMediumProperties).Data.SpontaneousLifetime_s;
  pMVar4 = pMVar3;
  if ((char)(pMVar3->MaterialMemoizationHandlerInstance).ResetFunctions._padding_ == '\0') {
    util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
    pMVar4 = (this->Mirror).Composition;
  }
  dVar10 = Material::GetIndexOfRefraction
                     (pMVar4,(pMVar3->LasingMediumProperties).Data.SpontaneousLifetime_s);
  local_18 = (local_18 / dVar10) * __real_3e112e0be826d695;
  dVar10 = GetLossCoefficient__m(this);
  pMVar4 = (this->Mirror).Composition;
  local_18 = (dVar10 * __real_401921fb54442d18) / (local_18 * local_18);
  local_20._4_4_ = pMVar4;
  if ((char)(pMVar4->MaterialMemoizationHandlerInstance).ResetFunctions._padding_ == '\0') {
    util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
    pMVar4 = (this->Mirror).Composition;
  }
  local_18 = dVar9 / (dVar8 * (double)iVar1 * dVar7) -
             local_18 / ((local_20._4_4_)->LasingMediumProperties).Data.ThermoopticCoefficient__K;
  if (local_18 <= __real_0000000000000000) {
    local_18 = __real_0000000000000000;
  }
  if ((char)(pMVar4->MaterialMemoizationHandlerInstance).ResetFunctions._padding_ == '\0') {
    util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  GetEmissionEfficiency_Percent(this);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}

