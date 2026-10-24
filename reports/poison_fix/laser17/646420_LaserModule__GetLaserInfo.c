
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Str<char> __thiscall LaserModule::GetLaserInfo(void)const  */

Str<char> * __thiscall
LaserModule::GetLaserInfo(LaserModule *this,Str<char> *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  Material *pMVar3;
  double dVar4;
  Str<char> SVar5;
  Str<char> SVar6;
  double dVar7;
  undefined8 uVar8;
  bool bVar9;
  Maybe<double> *pMVar10;
  Str<char> *pSVar11;
  LocStr *this_00;
  int unaff_EDI;
  double dVar12;
  char *pcVar13;
  char *pcVar14;
  int iVar15;
  Maybe<double> local_a0;
  void *local_90 [3];
  void *local_84;
  Str<char> local_78;
  Str<char> local_6c;
  Str<char> local_60;
  Str<char> local_54;
  double local_48;
  Str<char> local_40;
  Str<char> local_34;
  Str<char> local_28;
  undefined8 local_1c;
  undefined8 uStack_14;
  char *local_c;
  char *local_8;
  
  util::Str<char>::Str<char>(&local_78,"GetFinalWavelength_nm()");
  util::Str<char>::Str<char>(&local_40,"GetFinalOutputPower_W()");
  util::Str<char>::Str<char>(&local_34,"InfoBox LaserVitals");
  uStack_14 = GetThermalLensingQualityFactor(this);
  local_48 = uStack_14 * uStack_14 + __real_4022000000000000;
  pMVar10 = util::Sqrt(&local_a0,&local_48);
  if (pMVar10->IsValidData == false) {
    util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pcVar13 = SUB84(pMVar10->Data,0);
  pcVar14 = (char *)((ulonglong)pMVar10->Data >> 0x20);
  iVar15 = GlobalSignificantFigures;
  pSVar11 = PrintSigFigures(&local_6c,(double)CONCAT44(GlobalSignificantFigures,pcVar14),unaff_EDI);
  if (pSVar11->Capacity < 1) {
    local_c = "";
  }
  else {
    local_c = pSVar11->Data;
  }
  if ((this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData == false) {
    iVar15 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
    local_8 = (char *)(iVar15 + 1);
    util::Darray<struct_util::tuple2<enum_Order::Type,int>_>::SetSize
              ((Darray<struct_util::tuple2<enum_Order::Type,int>_> *)
               &this->GetFinalWavelength_nm_MemoizedValue,(int *)&local_8);
    pcVar14 = (char *)0x646514;
    bVar9 = util::Darray<void_(__thiscall_Fleet::*)(void)const_>::CheckSize
                      ((Darray<void_(__thiscall_Fleet::*)(void)const_> *)
                       &this->GetFinalWavelength_nm_MemoizedValue,iVar15);
    if (bVar9) {
      iVar1 = *(int *)((int)&(this->GetFinalWavelength_nm_MemoizedValue).Data + 4);
      iVar2 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
      *(code **)(iVar1 + -8 + iVar2 * 8) = FixedOrbit::GetEccentricityApoapsisRoot_Clear;
      *(undefined4 *)(iVar1 + -4 + iVar2 * 8) = 0;
    }
    if (*(char *)&(this->FocusingMirror).Composition == '\0') {
      if ((char)(this->SecondFrequencyDoubler).Data.NonlinearOptic._padding_ == '\0') {
        pMVar3 = (this->Mirror).Composition;
        if ((char)(pMVar3->MaterialMemoizationHandlerInstance).ResetFunctions._padding_ == '\0') {
          pcVar14 = "IsValid()";
          pcVar13 = (char *)0x17;
          util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                          "IsValid()",(char *)0x0);
          iVar15 = 0x646591;
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
    dVar12 = uStack_14;
    uStack_14 = (double)CONCAT71(uStack_14._1_7_,1);
    dVar7 = uStack_14;
    local_1c._0_4_ = SUB84(dVar4,0);
    local_1c._4_4_ = (undefined4)((ulonglong)dVar4 >> 0x20);
    uStack_14._4_4_ = SUB84(dVar12,4);
    *(undefined4 *)&(this->GetFiringTemperatureJump_K_MemoizedValue).Data = (undefined4)local_1c;
    *(undefined4 *)((int)&(this->GetFiringTemperatureJump_K_MemoizedValue).Data + 4) =
         local_1c._4_4_;
    *(undefined4 *)&(this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData =
         (undefined4)uStack_14;
    *(undefined4 *)&(this->GetFiringTemperatureJump_K_MemoizedValue).field_0xc = uStack_14._4_4_;
    local_1c = dVar4;
    uStack_14 = dVar7;
    if ((this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData == false) {
      pcVar14 = "IsValid()";
      pcVar13 = (char *)0x13;
      util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      iVar15 = 0x6465ce;
      DebugBreak();
    }
  }
  GetUnitsOfType((Str<char> *)&stack0xffffff48,&local_78);
  SVar5.Capacity = iVar15;
  SVar5.Data = pcVar14;
  SVar5.Length = unaff_EDI;
  pSVar11 = Print(&local_60,
                  (double)CONCAT44(pcVar13,(int)((ulonglong)
                                                 (this->GetFiringTemperatureJump_K_MemoizedValue).
                                                 Data >> 0x20)),SVar5);
  if (pSVar11->Capacity < 1) {
    local_8 = "";
  }
  else {
    local_8 = pSVar11->Data;
  }
  if ((this->GetHeatGenerated_W_MemoizedValue).IsValidData == false) {
    iVar15 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
    uStack_14 = (double)CONCAT44(iVar15 + 1,(undefined4)uStack_14);
    util::Darray<struct_util::tuple2<enum_Order::Type,int>_>::SetSize
              ((Darray<struct_util::tuple2<enum_Order::Type,int>_> *)
               &this->GetFinalWavelength_nm_MemoizedValue,(int *)((int)&uStack_14 + 4));
    pcVar14 = (char *)0x64663e;
    bVar9 = util::Darray<void_(__thiscall_Fleet::*)(void)const_>::CheckSize
                      ((Darray<void_(__thiscall_Fleet::*)(void)const_> *)
                       &this->GetFinalWavelength_nm_MemoizedValue,iVar15);
    if (bVar9) {
      iVar15 = *(int *)((int)&(this->GetFinalWavelength_nm_MemoizedValue).Data + 4);
      iVar1 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
      *(code **)(iVar15 + -8 + iVar1 * 8) = FixedOrbit::GetEccentricityPeriapsisRoot_Clear;
      *(undefined4 *)(iVar15 + -4 + iVar1 * 8) = 0;
    }
    iVar15 = 0x646665;
    dVar12 = GetFinalOutputPower_W_MemoizedFunction(this);
    uVar8 = uStack_14;
    uStack_14 = (double)CONCAT71(uStack_14._1_7_,1);
    dVar4 = uStack_14;
    local_1c._0_4_ = SUB84(dVar12,0);
    local_1c._4_4_ = (undefined4)((ulonglong)dVar12 >> 0x20);
    uStack_14._4_4_ = SUB84(uVar8,4);
    *(undefined4 *)&(this->GetHeatGenerated_W_MemoizedValue).Data = (undefined4)local_1c;
    *(undefined4 *)((int)&(this->GetHeatGenerated_W_MemoizedValue).Data + 4) = local_1c._4_4_;
    *(undefined4 *)&(this->GetHeatGenerated_W_MemoizedValue).IsValidData = (undefined4)uStack_14;
    *(undefined4 *)&(this->GetHeatGenerated_W_MemoizedValue).field_0xc = uStack_14._4_4_;
    local_1c = dVar12;
    uStack_14 = dVar4;
    if ((this->GetHeatGenerated_W_MemoizedValue).IsValidData == false) {
      pcVar14 = "IsValid()";
      pcVar13 = (char *)0x13;
      util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      iVar15 = 0x646698;
      DebugBreak();
    }
  }
  GetUnitsOfType((Str<char> *)&stack0xffffff48,&local_40);
  SVar6.Capacity = iVar15;
  SVar6.Data = pcVar14;
  SVar6.Length = unaff_EDI;
  Print(&local_54,
        (double)CONCAT44(pcVar13,(int)((ulonglong)(this->GetHeatGenerated_W_MemoizedValue).Data >>
                                      0x20)),SVar6);
  local_28.Data = (char *)0x0;
  local_28.Capacity = 0;
  local_28.Length = 0;
  this_00 = (LocStr *)util::LocStr::LocStr((LocStr *)local_90,&local_34,&local_28);
  pSVar11 = util::LocStr::operator*(this_00);
  if (pSVar11->Capacity < 1) {
    pcVar13 = "";
  }
  else {
    pcVar13 = pSVar11->Data;
  }
  util::Printf(__return_storage_ptr__,pcVar13);
  if (local_84 != (void *)0x0) {
    operator_delete__(local_84);
    local_84 = (void *)0x0;
  }
  if (local_90[0] != (void *)0x0) {
    operator_delete__(local_90[0]);
    local_90[0] = (void *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    operator_delete__(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_54.Data != (char *)0x0) {
    operator_delete__(local_54.Data);
    local_54.Data = (char *)0x0;
  }
  if (local_60.Data != (char *)0x0) {
    operator_delete__(local_60.Data);
    local_60.Data = (char *)0x0;
  }
  if (local_6c.Data != (char *)0x0) {
    operator_delete__(local_6c.Data);
    local_6c.Data = (char *)0x0;
  }
  if (local_34.Data != (char *)0x0) {
    operator_delete__(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_40.Data != (char *)0x0) {
    operator_delete__(local_40.Data);
    local_40.Data = (char *)0x0;
  }
  if (local_78.Data != (char *)0x0) {
    operator_delete__(local_78.Data);
  }
  return __return_storage_ptr__;
}

