
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct util::Range<double> __thiscall LaserModule::GetLaserSpectraChartYRanges(void)const
    */

Range<double> * __thiscall
LaserModule::GetLaserSpectraChartYRanges(LaserModule *this,Range<double> *__return_storage_ptr__)

{
  int iVar1;
  bool bVar2;
  double dVar3;
  Material *local_18;
  Material *pMStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int local_8;
  
  if (*(char *)&(this->ArcLamp).PowerSupplied_W == '\0') {
    iVar1 = *(int *)&(this->ArcLamp).GetTotalPowerAcrossAllWavelengths_W_MemoizedValue.IsValidData;
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
                         IsValidData * 4) = Fleet::GetRemainingDeltaV_km__s_Clear;
    }
    dVar3 = ArcLampPumpSubModule::GetMaxPowerLine_W_MemoizedFunction
                      ((ArcLampPumpSubModule *)&(this->ArcLamp).GetMaxPowerLine_W_MemoizedValue);
    uStack_10 = CONCAT31(uStack_10._1_3_,1);
    local_18 = SUB84(dVar3,0);
    pMStack_14 = (Material *)((ulonglong)dVar3 >> 0x20);
    (this->ArcLamp).GasComposition = local_18;
    (this->ArcLamp).EnvelopeComposition = pMStack_14;
    *(undefined4 *)&(this->ArcLamp).PowerSupplied_W = uStack_10;
    *(undefined4 *)((int)&(this->ArcLamp).PowerSupplied_W + 4) = uStack_c;
    if (*(char *)&(this->ArcLamp).PowerSupplied_W == '\0') {
      util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  dVar3 = *(double *)&(this->ArcLamp).GasComposition;
  __return_storage_ptr__->Lower = 0.0;
  __return_storage_ptr__->Upper = dVar3;
  if (dVar3 < 0.0) {
    __return_storage_ptr__->Lower = dVar3;
    __return_storage_ptr__->Upper = 0.0;
  }
  return __return_storage_ptr__;
}

