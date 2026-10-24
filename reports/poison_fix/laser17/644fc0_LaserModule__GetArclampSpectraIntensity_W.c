
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: double __thiscall LaserModule::GetArclampSpectraIntensity_W(double)const  */

double __thiscall LaserModule::GetArclampSpectraIntensity_W(LaserModule *this,double param_1)

{
  Maybe<double> *this_00;
  int iVar1;
  bool bVar2;
  double dVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  Material *pMStack_10;
  Material *pMStack_c;
  int local_8;
  
  dVar3 = 0.0;
  if (0.0 < param_1) {
    this_00 = &(this->ArcLamp).GetMaxPowerLine_W_MemoizedValue;
    if (*(char *)&(this->ArcLamp).CavityWallComposition == '\0') {
      iVar1 = *(int *)&(this->ArcLamp).GetTotalPowerAcrossAllWavelengths_W_MemoizedValue.IsValidData
      ;
      local_8 = iVar1 + 1;
      util::Darray<class_util::Reflectable*>::SetSize
                ((Darray<class_util::Reflectable*> *)
                 &(this->ArcLamp).GetTotalPowerAcrossAllWavelengths_W_MemoizedValue,&local_8);
      bVar2 = util::Darray<enum_GraphicsResource::Type>::CheckSize
                        ((Darray<enum_GraphicsResource::Type> *)
                         &(this->ArcLamp).GetTotalPowerAcrossAllWavelengths_W_MemoizedValue,iVar1);
      if (bVar2) {
        *(code **)(*(int *)((int)&(this->ArcLamp).GetTotalPowerAcrossAllWavelengths_W_MemoizedValue.
                                  Data + 4) + -4 +
                  *(int *)&(this->ArcLamp).GetTotalPowerAcrossAllWavelengths_W_MemoizedValue.
                           IsValidData * 4) = Fleet::GetOriginalDeltaV_km__s_Clear;
      }
      dVar3 = ArcLampPumpSubModule::GetTotalPowerAcrossAllWavelengths_W_MemoizedFunction
                        ((ArcLampPumpSubModule *)this_00);
      pMStack_10 = (Material *)CONCAT31(pMStack_10._1_3_,1);
      local_18 = SUB84(dVar3,0);
      uStack_14 = (undefined4)((ulonglong)dVar3 >> 0x20);
      *(undefined4 *)&(this->ArcLamp).Radius_m = local_18;
      *(undefined4 *)((int)&(this->ArcLamp).Radius_m + 4) = uStack_14;
      (this->ArcLamp).CavityWallComposition = pMStack_10;
      (this->ArcLamp).CavityCoolantComposition = pMStack_c;
      if (*(char *)&(this->ArcLamp).CavityWallComposition == '\0') {
        util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
    }
    dVar3 = ArcLampPumpSubModule::GetPowerAtWavelength_W
                      ((ArcLampPumpSubModule *)this_00,param_1,__real_403e000000000000);
    dVar3 = (dVar3 * (this->ArcLamp).CavitySemiminorAxis_m) / (this->ArcLamp).Radius_m;
  }
  return dVar3;
}

