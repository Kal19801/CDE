
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::Str<char> __thiscall LaserModule::GetAdvancedInfo(void)const  */

Str<char> * __thiscall
LaserModule::GetAdvancedInfo(LaserModule *this,Str<char> *__return_storage_ptr__)

{
  Maybe<double> *this_00;
  int iVar1;
  double *pdVar2;
  Material *pMVar3;
  Str<char> SVar4;
  Str<char> SVar5;
  Str<char> SVar6;
  Str<char> SVar7;
  Str<char> SVar8;
  Str<char> SVar9;
  Str<char> SVar10;
  Str<char> SVar11;
  Str<char> SVar12;
  Str<char> SVar13;
  Str<char> SVar14;
  Str<char> SVar15;
  bool bVar16;
  LocStr *pLVar17;
  Str<char> *pSVar18;
  Str<char> *pSVar19;
  code *pcVar20;
  int unaff_EDI;
  float10 fVar21;
  double dVar22;
  char *in_stack_fffffde0;
  int iVar23;
  char *pcVar24;
  char *pcVar25;
  void *local_208 [3];
  void *local_1fc;
  void *local_1f0 [3];
  void *local_1e4;
  Str<char> local_1d8;
  Str<char> local_1cc;
  Str<char> local_1c0;
  Str<char> local_1b4;
  Str<char> local_1a8;
  Str<char> local_19c;
  Str<char> local_190;
  Str<char> local_184;
  Str<char> local_178;
  Str<char> local_16c;
  Str<char> local_160;
  Str<char> local_154;
  Str<char> local_148;
  Str<char> local_13c;
  Str<char> *local_130;
  void *local_12c [3];
  Str<char> local_120;
  void *local_114 [3];
  Str<char> local_108;
  char *local_fc;
  char *local_f8;
  char *local_f4;
  char *local_f0;
  char *local_ec;
  char *local_e8;
  char *local_e4;
  char *local_e0;
  Str<char> local_dc;
  Str<char> local_d0;
  Str<char> local_c4;
  Str<char> local_b8;
  Str<char> local_ac;
  Str<char> local_a0;
  Str<char> local_94;
  Str<char> local_88;
  Str<char> local_7c;
  Str<char> local_70;
  Str<char> local_64;
  char *local_58;
  Str<char> local_54;
  Str<char> local_48;
  undefined1 local_3c [8];
  char *local_34;
  undefined1 local_30 [8];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 local_20 [8];
  char *local_18;
  undefined1 local_14 [8];
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_130 = __return_storage_ptr__;
  local_54.Data = (char *)0x0;
  local_54.Capacity = 0;
  local_54.Length = 0;
  if ((char)(this->SecondFrequencyDoubler).Data.NonlinearOptic._padding_ != '\0') {
    util::Str<char>::Str<char>(&local_d0,"\n");
    util::Str<char>::Str<char>(&local_7c,"FrequencyDoubler->GetTotalEfficiency_Percent()");
    util::Str<char>::Str<char>(&local_88,"Colon");
    util::Str<char>::Str<char>(&local_70,"InfoBox LaserFrequencyDoubler");
    if ((char)(this->SecondFrequencyDoubler).Data.NonlinearOptic._padding_ == '\0') {
      util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    local_30._4_4_ = (void *)0x0;
    uStack_28 = 0;
    uStack_24 = 0;
    local_64.Data = (char *)0x0;
    local_64.Capacity = 0;
    local_64.Length = 0;
    pLVar17 = (LocStr *)util::LocStr::LocStr((LocStr *)local_12c,&local_70,&local_64);
    pSVar18 = util::LocStr::operator*(pLVar17);
    pSVar19 = (Str<char> *)util::Str<char>::Str<char>(&local_94,"\t");
    local_18 = (char *)0x0;
    local_20._0_4_ = (Str<char> *)0x0;
    local_20._4_4_ = 0;
    util::Str<char>::Str<char>((Str<char> *)local_20,pSVar19);
    util::Str<char>::operator+=((Str<char> *)local_20,pSVar18);
    util::Str<char>::Str<char>(&local_a0,(Str<char> *)local_20);
    if ((Str<char> *)local_20._0_4_ != (Str<char> *)0x0) {
      operator_delete__((void *)local_20._0_4_);
      local_20._0_4_ = (Str<char> *)0x0;
    }
    in_stack_fffffde0 = (char *)0x63e796;
    pLVar17 = (LocStr *)
              util::LocStr::LocStr((LocStr *)local_114,&local_88,(Str<char> *)(local_30 + 4));
    pSVar18 = util::LocStr::operator*(pLVar17);
    local_c = 0;
    local_14._0_4_ = (Str<char> *)0x0;
    local_14._4_4_ = 0;
    util::Str<char>::Str<char>((Str<char> *)local_14,&local_a0);
    util::Str<char>::operator+=((Str<char> *)local_14,pSVar18);
    pSVar18 = (Str<char> *)local_14;
    iVar23 = 0x63e7d5;
    util::Str<char>::Str<char>(&local_c4,pSVar18);
    if ((Str<char> *)local_14._0_4_ != (Str<char> *)0x0) {
      iVar23 = 0x63e7e2;
      pSVar18 = (Str<char> *)local_14._0_4_;
      operator_delete__((void *)local_14._0_4_);
      local_14._0_4_ = (Str<char> *)0x0;
    }
    GetUnitsOfType((Str<char> *)&stack0xfffffde0,&local_7c);
    dVar22 = FrequencyDoublerSubModule::GetTotalEfficiency_Percent
                       ((FrequencyDoublerSubModule *)
                        &(this->FrequencyDoubler).Data.NonlinearOptic._padding_);
    SVar4.Capacity = (int)pSVar18;
    SVar4.Data = (char *)iVar23;
    SVar4.Length = unaff_EDI;
    pSVar18 = Print(&local_dc,(double)CONCAT44(in_stack_fffffde0,(int)((ulonglong)dVar22 >> 0x20)),
                    SVar4);
    local_34 = (char *)0x0;
    local_3c._0_4_ = (char *)0x0;
    local_3c._4_4_ = 0;
    util::Str<char>::Str<char>((Str<char> *)local_3c,&local_c4);
    util::Str<char>::operator+=((Str<char> *)local_3c,pSVar18);
    util::Str<char>::Str<char>(&local_ac,(Str<char> *)local_3c);
    if ((char *)local_3c._0_4_ != (char *)0x0) {
      operator_delete__((void *)local_3c._0_4_);
      local_3c._0_4_ = (char *)0x0;
    }
    local_48.Length = 0;
    local_48.Data = (char *)0x0;
    local_48.Capacity = 0;
    util::Str<char>::Str<char>(&local_48,&local_ac);
    util::Str<char>::operator+=(&local_48,&local_d0);
    util::Str<char>::Str<char>(&local_b8,&local_48);
    if (local_48.Data != (char *)0x0) {
      operator_delete__(local_48.Data);
      local_48._0_8_ = local_48._0_8_ & 0xffffffff00000000;
    }
    util::Str<char>::operator+=(&local_54,&local_b8);
    if (local_b8.Data != (char *)0x0) {
      operator_delete__(local_b8.Data);
    }
    if (local_ac.Data != (char *)0x0) {
      operator_delete__(local_ac.Data);
    }
    if (local_c4.Data != (char *)0x0) {
      operator_delete__(local_c4.Data);
    }
    if (local_a0.Data != (char *)0x0) {
      operator_delete__(local_a0.Data);
    }
    if (local_94.Data != (char *)0x0) {
      operator_delete__(local_94.Data);
      local_94.Data = (char *)0x0;
    }
    if (local_120.Data != (char *)0x0) {
      operator_delete__(local_120.Data);
      local_120.Data = (char *)0x0;
    }
    if (local_12c[0] != (void *)0x0) {
      operator_delete__(local_12c[0]);
      local_12c[0] = (void *)0x0;
    }
    if (local_64.Data != (char *)0x0) {
      operator_delete__(local_64.Data);
      local_64.Data = (char *)0x0;
    }
    if (local_108.Data != (char *)0x0) {
      operator_delete__(local_108.Data);
      local_108.Data = (char *)0x0;
    }
    if (local_114[0] != (void *)0x0) {
      operator_delete__(local_114[0]);
      local_114[0] = (void *)0x0;
    }
    if ((void *)local_30._4_4_ != (void *)0x0) {
      operator_delete__((void *)local_30._4_4_);
      local_30._4_4_ = (void *)0x0;
    }
    if (local_dc.Data != (char *)0x0) {
      operator_delete__(local_dc.Data);
      local_dc.Data = (char *)0x0;
    }
    if (local_70.Data != (char *)0x0) {
      operator_delete__(local_70.Data);
      local_70.Data = (char *)0x0;
    }
    if (local_88.Data != (char *)0x0) {
      operator_delete__(local_88.Data);
      local_88.Data = (char *)0x0;
    }
    if (local_7c.Data != (char *)0x0) {
      operator_delete__(local_7c.Data);
      local_7c.Data = (char *)0x0;
    }
    if (local_d0.Data != (char *)0x0) {
      operator_delete__(local_d0.Data);
    }
  }
  if (*(char *)&(this->FocusingMirror).Composition != '\0') {
    util::Str<char>::Str<char>(&local_d0,"\n");
    util::Str<char>::Str<char>(&local_70,"SecondFrequencyDoubler->GetTotalEfficiency_Percent()");
    util::Str<char>::Str<char>(&local_88,"Colon");
    util::Str<char>::Str<char>(&local_7c,"InfoBox LaserFrequencyDoubler2");
    if (*(char *)&(this->FocusingMirror).Composition == '\0') {
      util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    local_64.Data = (char *)0x0;
    local_64.Capacity = 0;
    local_64.Length = 0;
    local_30._4_4_ = (void *)0x0;
    uStack_28 = 0;
    uStack_24 = 0;
    pLVar17 = (LocStr *)
              util::LocStr::LocStr((LocStr *)local_12c,&local_7c,(Str<char> *)(local_30 + 4));
    pSVar18 = util::LocStr::operator*(pLVar17);
    pSVar19 = (Str<char> *)util::Str<char>::Str<char>(&local_94,"\t");
    local_48.Length = 0;
    local_48.Data = (char *)0x0;
    local_48.Capacity = 0;
    util::Str<char>::Str<char>(&local_48,pSVar19);
    util::Str<char>::operator+=(&local_48,pSVar18);
    util::Str<char>::Str<char>(&local_a0,&local_48);
    if (local_48.Data != (char *)0x0) {
      operator_delete__(local_48.Data);
      local_48._0_8_ = local_48._0_8_ & 0xffffffff00000000;
    }
    in_stack_fffffde0 = (char *)0x63eb70;
    pLVar17 = (LocStr *)util::LocStr::LocStr((LocStr *)local_114,&local_88,&local_64);
    pSVar18 = util::LocStr::operator*(pLVar17);
    local_18 = (char *)0x0;
    local_20._0_4_ = (Str<char> *)0x0;
    local_20._4_4_ = 0;
    util::Str<char>::Str<char>((Str<char> *)local_20,&local_a0);
    util::Str<char>::operator+=((Str<char> *)local_20,pSVar18);
    pSVar18 = (Str<char> *)local_20;
    iVar23 = 0x63ebaf;
    util::Str<char>::Str<char>(&local_c4,pSVar18);
    if ((Str<char> *)local_20._0_4_ != (Str<char> *)0x0) {
      iVar23 = 0x63ebbc;
      pSVar18 = (Str<char> *)local_20._0_4_;
      operator_delete__((void *)local_20._0_4_);
      local_20._0_4_ = (Str<char> *)0x0;
    }
    GetUnitsOfType((Str<char> *)&stack0xfffffde0,&local_70);
    dVar22 = FrequencyDoublerSubModule::GetTotalEfficiency_Percent
                       ((FrequencyDoublerSubModule *)
                        &(this->SecondFrequencyDoubler).Data.NonlinearOptic._padding_);
    SVar5.Capacity = (int)pSVar18;
    SVar5.Data = (char *)iVar23;
    SVar5.Length = unaff_EDI;
    pSVar18 = Print(&local_dc,(double)CONCAT44(in_stack_fffffde0,(int)((ulonglong)dVar22 >> 0x20)),
                    SVar5);
    local_c = 0;
    local_14._0_4_ = (Str<char> *)0x0;
    local_14._4_4_ = 0;
    util::Str<char>::Str<char>((Str<char> *)local_14,&local_c4);
    util::Str<char>::operator+=((Str<char> *)local_14,pSVar18);
    util::Str<char>::Str<char>(&local_ac,(Str<char> *)local_14);
    if ((Str<char> *)local_14._0_4_ != (Str<char> *)0x0) {
      operator_delete__((void *)local_14._0_4_);
      local_14._0_4_ = (Str<char> *)0x0;
    }
    local_34 = (char *)0x0;
    local_3c._0_4_ = (char *)0x0;
    local_3c._4_4_ = 0;
    util::Str<char>::Str<char>((Str<char> *)local_3c,&local_ac);
    util::Str<char>::operator+=((Str<char> *)local_3c,&local_d0);
    util::Str<char>::Str<char>(&local_b8,(Str<char> *)local_3c);
    if ((char *)local_3c._0_4_ != (char *)0x0) {
      operator_delete__((void *)local_3c._0_4_);
      local_3c._0_4_ = (char *)0x0;
    }
    util::Str<char>::operator+=(&local_54,&local_b8);
    if (local_b8.Data != (char *)0x0) {
      operator_delete__(local_b8.Data);
    }
    if (local_ac.Data != (char *)0x0) {
      operator_delete__(local_ac.Data);
    }
    if (local_c4.Data != (char *)0x0) {
      operator_delete__(local_c4.Data);
    }
    if (local_a0.Data != (char *)0x0) {
      operator_delete__(local_a0.Data);
    }
    if (local_94.Data != (char *)0x0) {
      operator_delete__(local_94.Data);
      local_94.Data = (char *)0x0;
    }
    if (local_120.Data != (char *)0x0) {
      operator_delete__(local_120.Data);
      local_120.Data = (char *)0x0;
    }
    if (local_12c[0] != (void *)0x0) {
      operator_delete__(local_12c[0]);
      local_12c[0] = (void *)0x0;
    }
    if ((void *)local_30._4_4_ != (void *)0x0) {
      operator_delete__((void *)local_30._4_4_);
      local_30._4_4_ = (void *)0x0;
    }
    if (local_108.Data != (char *)0x0) {
      operator_delete__(local_108.Data);
      local_108.Data = (char *)0x0;
    }
    if (local_114[0] != (void *)0x0) {
      operator_delete__(local_114[0]);
      local_114[0] = (void *)0x0;
    }
    if (local_64.Data != (char *)0x0) {
      operator_delete__(local_64.Data);
      local_64.Data = (char *)0x0;
    }
    if (local_dc.Data != (char *)0x0) {
      operator_delete__(local_dc.Data);
      local_dc.Data = (char *)0x0;
    }
    if (local_7c.Data != (char *)0x0) {
      operator_delete__(local_7c.Data);
      local_7c.Data = (char *)0x0;
    }
    if (local_88.Data != (char *)0x0) {
      operator_delete__(local_88.Data);
      local_88.Data = (char *)0x0;
    }
    if (local_70.Data != (char *)0x0) {
      operator_delete__(local_70.Data);
      local_70.Data = (char *)0x0;
    }
    if (local_d0.Data != (char *)0x0) {
      operator_delete__(local_d0.Data);
    }
  }
  util::Str<char>::Str<char>(&local_b8,"GetAmbientTemperature_K()");
  util::Str<char>::Str<char>(&local_ac,"GetPowerRequired_W()");
  util::Str<char>::Str<char>(&local_c4,"GetFinalOutputPower_W()");
  util::Str<char>::Str<char>(&local_a0,"InfoBox LaserAdvancedPowerOutput");
  util::Str<char>::Str<char>(&local_120,"\n");
  util::Str<char>::Str<char>(&local_94,"GetFocusingMirrorEfficiency_Percent()");
  util::Str<char>::Str<char>(&local_dc,"GetEmissionEfficiency_Percent()");
  util::Str<char>::Str<char>(&local_d0,"ArcLamp.GetCavityShapeEfficiency_Percent()");
  util::Str<char>::Str<char>(&local_154,"ArcLamp.GetCavityReflectanceEfficiency_Percent()");
  util::Str<char>::Str<char>(&local_148,"ArcLamp.GetCavityAbsorptionEfficiency_Percent()");
  util::Str<char>::Str<char>(&local_13c,"GetPumpingEfficiency_Percent()");
  util::Str<char>::Str<char>(&local_88,"GetWallPlugEfficiency_Percent()");
  pcVar25 = "InfoBox LaserAdvancedEfficiency";
  pcVar24 = (char *)0x63eefc;
  util::Str<char>::Str<char>(&local_7c,"InfoBox LaserAdvancedEfficiency");
  if ((this->GetMirrorFocalLengthLimit_m_MemoizedValue).IsValidData == false) {
    iVar23 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
    local_58 = (char *)(iVar23 + 1);
    util::Darray<struct_util::tuple2<enum_Order::Type,int>_>::SetSize
              ((Darray<struct_util::tuple2<enum_Order::Type,int>_> *)
               &this->GetFinalWavelength_nm_MemoizedValue,(int *)&local_58);
    pcVar24 = (char *)0x63ef30;
    bVar16 = util::Darray<void_(__thiscall_Fleet::*)(void)const_>::CheckSize
                       ((Darray<void_(__thiscall_Fleet::*)(void)const_> *)
                        &this->GetFinalWavelength_nm_MemoizedValue,iVar23);
    if (bVar16) {
      iVar23 = *(int *)((int)&(this->GetFinalWavelength_nm_MemoizedValue).Data + 4);
      iVar1 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
      *(code **)(iVar23 + -8 + iVar1 * 8) = GetFiringTemperatureJump_K_Clear;
      *(undefined4 *)(iVar23 + -4 + iVar1 * 8) = 0;
    }
    GetHeatGenerated_W_Memoize(this);
    pcVar20 = DebugBreak_exref;
    if ((this->GetHeatingRate_W_MemoizedValue).IsValidData == false) {
      pcVar24 = "IsValid()";
      in_stack_fffffde0 = (char *)0x13;
      util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      pcVar20 = DebugBreak_exref;
      DebugBreak();
    }
    pdVar2 = (this->ArcLamp).CachedPumpingBands_nm.Data;
    pcVar25 = (char *)0x63ef97;
    join_0x00001100_8_ =
         TurbopumpSubModule::GetMassFlowRate_kg__s
                   ((TurbopumpSubModule *)&(this->CoolantTurbopump).RotationalSpeed_RPM);
    unique0x10000f73 = join_0x00001100_8_ * pdVar2[0x12];
    uStack_28 = CONCAT31(uStack_28._1_3_,1);
    local_30 = (undefined1  [8])((this->GetHeatingRate_W_MemoizedValue).Data / unique0x10000f73);
    (this->GetMirrorFocalLengthLimit_m_MemoizedValue).Data = (double)local_30;
    *(undefined4 *)&(this->GetMirrorFocalLengthLimit_m_MemoizedValue).IsValidData = uStack_28;
    *(undefined4 *)&(this->GetMirrorFocalLengthLimit_m_MemoizedValue).field_0xc = uStack_24;
    if ((this->GetMirrorFocalLengthLimit_m_MemoizedValue).IsValidData == false) {
      pcVar24 = "IsValid()";
      in_stack_fffffde0 = (char *)0x13;
      util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      pcVar25 = (char *)0x63efe2;
      (*pcVar20)();
    }
  }
  unique0x10000aa1 =
       *(double *)&(this->FrequencyDoubler).Data.NonlinearOptic._padding_ +
       (this->GetMirrorFocalLengthLimit_m_MemoizedValue).Data;
  GetUnitsOfType((Str<char> *)&stack0xfffffde0,&local_b8);
  SVar6.Capacity = (int)pcVar25;
  SVar6.Data = pcVar24;
  SVar6.Length = unaff_EDI;
  pSVar18 = Print(&local_108,(double)CONCAT44(in_stack_fffffde0,local_18),SVar6);
  if (pSVar18->Capacity < 1) {
    local_f0 = "";
  }
  else {
    local_f0 = pSVar18->Data;
  }
  GetUnitsOfType((Str<char> *)&stack0xfffffde0,&local_ac);
  fVar21 = (float10)(**(code **)(this->_padding_ + 0x9c))();
  SVar7.Capacity = (int)pcVar25;
  SVar7.Data = pcVar24;
  SVar7.Length = unaff_EDI;
  pSVar18 = Print(&local_1d8,
                  (double)CONCAT44(in_stack_fffffde0,(int)((ulonglong)(double)fVar21 >> 0x20)),SVar7
                 );
  if (pSVar18->Capacity < 1) {
    local_f4 = "";
  }
  else {
    local_f4 = pSVar18->Data;
  }
  if ((this->GetHeatGenerated_W_MemoizedValue).IsValidData == false) {
    iVar23 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
    local_58 = (char *)(iVar23 + 1);
    util::Darray<struct_util::tuple2<enum_Order::Type,int>_>::SetSize
              ((Darray<struct_util::tuple2<enum_Order::Type,int>_> *)
               &this->GetFinalWavelength_nm_MemoizedValue,(int *)&local_58);
    pcVar24 = (char *)0x63f0c0;
    bVar16 = util::Darray<void_(__thiscall_Fleet::*)(void)const_>::CheckSize
                       ((Darray<void_(__thiscall_Fleet::*)(void)const_> *)
                        &this->GetFinalWavelength_nm_MemoizedValue,iVar23);
    if (bVar16) {
      iVar23 = *(int *)((int)&(this->GetFinalWavelength_nm_MemoizedValue).Data + 4);
      iVar1 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
      *(code **)(iVar23 + -8 + iVar1 * 8) = FixedOrbit::GetEccentricityPeriapsisRoot_Clear;
      *(undefined4 *)(iVar23 + -4 + iVar1 * 8) = 0;
    }
    pcVar25 = (char *)0x63f0e7;
    dVar22 = GetFinalOutputPower_W_MemoizedFunction(this);
    uStack_28 = CONCAT31(uStack_28._1_3_,1);
    (this->GetHeatGenerated_W_MemoizedValue).Data = dVar22;
    *(undefined4 *)&(this->GetHeatGenerated_W_MemoizedValue).IsValidData = uStack_28;
    *(undefined4 *)&(this->GetHeatGenerated_W_MemoizedValue).field_0xc = uStack_24;
    local_30 = (undefined1  [8])dVar22;
    if ((this->GetHeatGenerated_W_MemoizedValue).IsValidData == false) {
      pcVar24 = "IsValid()";
      in_stack_fffffde0 = (char *)0x13;
      util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      pcVar25 = (char *)0x63f11e;
      DebugBreak();
    }
  }
  GetUnitsOfType((Str<char> *)&stack0xfffffde0,&local_c4);
  SVar8.Capacity = (int)pcVar25;
  SVar8.Data = pcVar24;
  SVar8.Length = unaff_EDI;
  pSVar18 = Print(&local_1cc,
                  (double)CONCAT44(in_stack_fffffde0,
                                   (int)((ulonglong)(this->GetHeatGenerated_W_MemoizedValue).Data >>
                                        0x20)),SVar8);
  if (pSVar18->Capacity < 1) {
    local_f8 = "";
  }
  else {
    local_f8 = pSVar18->Data;
  }
  local_70.Data = (char *)0x0;
  local_70.Capacity = 0;
  local_70.Length = 0;
  pLVar17 = (LocStr *)util::LocStr::LocStr((LocStr *)local_208,&local_a0,&local_70);
  pSVar18 = util::LocStr::operator*(pLVar17);
  if (pSVar18->Capacity < 1) {
    local_58 = "";
  }
  else {
    local_58 = pSVar18->Data;
  }
  if ((this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData == false) {
    iVar23 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
    local_34 = (char *)(iVar23 + 1);
    util::Darray<struct_util::tuple2<enum_Order::Type,int>_>::SetSize
              ((Darray<struct_util::tuple2<enum_Order::Type,int>_> *)
               &this->GetFinalWavelength_nm_MemoizedValue,(int *)&local_34);
    bVar16 = util::Darray<void_(__thiscall_Fleet::*)(void)const_>::CheckSize
                       ((Darray<void_(__thiscall_Fleet::*)(void)const_> *)
                        &this->GetFinalWavelength_nm_MemoizedValue,iVar23);
    if (bVar16) {
      iVar23 = *(int *)((int)&(this->GetFinalWavelength_nm_MemoizedValue).Data + 4);
      iVar1 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
      *(code **)(iVar23 + -8 + iVar1 * 8) = FixedOrbit::GetEccentricityApoapsisRoot_Clear;
      *(undefined4 *)(iVar23 + -4 + iVar1 * 8) = 0;
    }
    if (*(char *)&(this->FocusingMirror).Composition == '\0') {
      if ((char)(this->SecondFrequencyDoubler).Data.NonlinearOptic._padding_ == '\0') {
        pMVar3 = (this->Mirror).Composition;
        if ((char)(pMVar3->MaterialMemoizationHandlerInstance).ResetFunctions._padding_ == '\0') {
          util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        local_30 = (undefined1  [8])(pMVar3->LasingMediumProperties).Data.SpontaneousLifetime_s;
      }
      else {
        local_30 = (undefined1  [8])
                   (*(double *)&(this->SecondFrequencyDoubler).Data._padding_ *
                   __real_3fe0000000000000);
      }
    }
    else {
      local_30 = (undefined1  [8])(*(double *)&this->FocusingMirror * __real_3fe0000000000000);
    }
    uStack_28 = CONCAT31(uStack_28._1_3_,1);
    (this->GetFiringTemperatureJump_K_MemoizedValue).Data = (double)local_30;
    *(undefined4 *)&(this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData = uStack_28;
    *(undefined4 *)&(this->GetFiringTemperatureJump_K_MemoizedValue).field_0xc = uStack_24;
    if ((this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData == false) {
      util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  dVar22 = (this->GetFiringTemperatureJump_K_MemoizedValue).Data;
  pcVar25 = SUB84(dVar22,0);
  iVar23 = (int)((ulonglong)dVar22 >> 0x20);
  pcVar24 = (char *)0x63f2bd;
  dVar22 = Material::GetReflectanceCoefficient
                     (*(Material **)&(this->FocusingMirror).CachedIsMirror,dVar22);
  local_20._4_4_ = SUB84(dVar22,0);
  local_18 = (char *)((ulonglong)dVar22 >> 0x20);
  GetUnitsOfType((Str<char> *)&stack0xfffffde0,&local_94);
  SVar9.Capacity = iVar23;
  SVar9.Data = pcVar25;
  SVar9.Length = unaff_EDI;
  pSVar18 = Print(&local_1b4,(double)CONCAT44(pcVar24,local_18),SVar9);
  if (pSVar18->Capacity < 1) {
    local_fc = "";
  }
  else {
    local_fc = pSVar18->Data;
  }
  local_18 = "";
  if (0 < local_54.Capacity) {
    local_18 = local_54.Data;
  }
  GetUnitsOfType((Str<char> *)&stack0xfffffde0,&local_dc);
  dVar22 = GetEmissionEfficiency_Percent(this);
  SVar10.Capacity = iVar23;
  SVar10.Data = pcVar25;
  SVar10.Length = unaff_EDI;
  pSVar18 = Print(&local_1a8,(double)CONCAT44(pcVar24,(int)((ulonglong)dVar22 >> 0x20)),SVar10);
  if (pSVar18->Capacity < 1) {
    local_e0 = "";
  }
  else {
    local_e0 = pSVar18->Data;
  }
  this_00 = &(this->ArcLamp).GetMaxPowerLine_W_MemoizedValue;
  GetUnitsOfType((Str<char> *)&stack0xfffffde0,&local_d0);
  dVar22 = ArcLampPumpSubModule::GetCavityShapeEfficiency_Percent((ArcLampPumpSubModule *)this_00);
  SVar11.Capacity = iVar23;
  SVar11.Data = pcVar25;
  SVar11.Length = unaff_EDI;
  pSVar18 = Print(&local_19c,(double)CONCAT44(pcVar24,(int)((ulonglong)dVar22 >> 0x20)),SVar11);
  if (pSVar18->Capacity < 1) {
    local_e4 = "";
  }
  else {
    local_e4 = pSVar18->Data;
  }
  GetUnitsOfType((Str<char> *)&stack0xfffffde0,&local_154);
  dVar22 = ArcLampPumpSubModule::GetCavityReflectanceEfficiency_Percent
                     ((ArcLampPumpSubModule *)this_00);
  SVar12.Capacity = iVar23;
  SVar12.Data = pcVar25;
  SVar12.Length = unaff_EDI;
  pSVar18 = Print(&local_190,(double)CONCAT44(pcVar24,(int)((ulonglong)dVar22 >> 0x20)),SVar12);
  if (pSVar18->Capacity < 1) {
    local_e8 = "";
  }
  else {
    local_e8 = pSVar18->Data;
  }
  GetUnitsOfType((Str<char> *)&stack0xfffffde0,&local_148);
  dVar22 = ArcLampPumpSubModule::GetCavityAbsorptionEfficiency_Percent
                     ((ArcLampPumpSubModule *)this_00);
  SVar13.Capacity = iVar23;
  SVar13.Data = pcVar25;
  SVar13.Length = unaff_EDI;
  pSVar18 = Print(&local_184,(double)CONCAT44(pcVar24,(int)((ulonglong)dVar22 >> 0x20)),SVar13);
  if (pSVar18->Capacity < 1) {
    local_ec = "";
  }
  else {
    local_ec = pSVar18->Data;
  }
  dVar22 = ArcLampPumpSubModule::GetCavityShapeEfficiency_Percent((ArcLampPumpSubModule *)this_00);
  local_14._4_4_ = SUB84(dVar22,0);
  local_c = (int)((ulonglong)dVar22 >> 0x20);
  dVar22 = ArcLampPumpSubModule::GetCavityReflectanceEfficiency_Percent
                     ((ArcLampPumpSubModule *)this_00);
  unique0x10001181 = dVar22 * (double)CONCAT44(local_c,local_14._4_4_);
  dVar22 = ArcLampPumpSubModule::GetCavityAbsorptionEfficiency_Percent
                     ((ArcLampPumpSubModule *)this_00);
  unique0x1000119d = dVar22 * stack0xfffffff0;
  iVar23 = 0x63f472;
  dVar22 = GetEmissionEfficiency_Percent(this);
  unique0x100011b9 = dVar22 * stack0xfffffff0;
  local_3c._4_4_ = 0;
  local_34 = (char *)0x0;
  unique0x1000225a = 0.0;
  if (0.0 < unique0x100011b9) {
    iVar23 = 0x63f48e;
    dVar22 = GetTotalLaserOutputPower_W(this);
    unique0x100011d9 = dVar22 / ((this->ArcLamp).CavitySemiminorAxis_m * stack0xfffffff0);
    unique0x10002262 = unique0x100011d9;
  }
  GetUnitsOfType((Str<char> *)&stack0xfffffde0,&local_13c);
  SVar14.Capacity = iVar23;
  SVar14.Data = pcVar25;
  SVar14.Length = unaff_EDI;
  pSVar18 = Print(&local_178,(double)CONCAT44(pcVar24,local_34),SVar14);
  if (pSVar18->Capacity < 1) {
    local_34 = "";
  }
  else {
    local_34 = pSVar18->Data;
  }
  if ((this->GetHeatGenerated_W_MemoizedValue).IsValidData == false) {
    iVar23 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
    local_c = iVar23 + 1;
    util::Darray<struct_util::tuple2<enum_Order::Type,int>_>::SetSize
              ((Darray<struct_util::tuple2<enum_Order::Type,int>_> *)
               &this->GetFinalWavelength_nm_MemoizedValue,&local_c);
    pcVar25 = (char *)0x63f523;
    bVar16 = util::Darray<void_(__thiscall_Fleet::*)(void)const_>::CheckSize
                       ((Darray<void_(__thiscall_Fleet::*)(void)const_> *)
                        &this->GetFinalWavelength_nm_MemoizedValue,iVar23);
    if (bVar16) {
      iVar23 = *(int *)((int)&(this->GetFinalWavelength_nm_MemoizedValue).Data + 4);
      iVar1 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
      *(code **)(iVar23 + -8 + iVar1 * 8) = FixedOrbit::GetEccentricityPeriapsisRoot_Clear;
      *(undefined4 *)(iVar23 + -4 + iVar1 * 8) = 0;
    }
    iVar23 = 0x63f54a;
    dVar22 = GetFinalOutputPower_W_MemoizedFunction(this);
    uStack_28 = CONCAT31(uStack_28._1_3_,1);
    (this->GetHeatGenerated_W_MemoizedValue).Data = dVar22;
    *(undefined4 *)&(this->GetHeatGenerated_W_MemoizedValue).IsValidData = uStack_28;
    *(undefined4 *)&(this->GetHeatGenerated_W_MemoizedValue).field_0xc = uStack_24;
    local_30 = (undefined1  [8])dVar22;
    if ((this->GetHeatGenerated_W_MemoizedValue).IsValidData == false) {
      pcVar25 = "IsValid()";
      pcVar24 = (char *)0x13;
      util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      iVar23 = 0x63f581;
      DebugBreak();
    }
  }
  unique0x10000b19 =
       (this->GetHeatGenerated_W_MemoizedValue).Data / (this->ArcLamp).CavitySemiminorAxis_m;
  GetUnitsOfType((Str<char> *)&stack0xfffffde0,&local_88);
  SVar15.Capacity = iVar23;
  SVar15.Data = pcVar25;
  SVar15.Length = unaff_EDI;
  pSVar18 = Print(&local_16c,(double)CONCAT44(pcVar24,local_c),SVar15);
  if (pSVar18->Capacity < 1) {
    pcVar24 = "";
  }
  else {
    pcVar24 = pSVar18->Data;
  }
  local_64.Data = (char *)0x0;
  local_64.Capacity = 0;
  local_64.Length = 0;
  pLVar17 = (LocStr *)util::LocStr::LocStr((LocStr *)local_1f0,&local_7c,&local_64);
  pSVar18 = util::LocStr::operator*(pLVar17);
  if (pSVar18->Capacity < 1) {
    pcVar25 = "";
  }
  else {
    pcVar25 = pSVar18->Data;
  }
  pSVar18 = util::Printf(&local_160,pcVar25,pcVar24,local_34,local_ec,local_e8,local_e4);
  local_48.Length = 0;
  local_48.Data = (char *)0x0;
  local_48.Capacity = 0;
  util::Str<char>::Str<char>(&local_48,pSVar18);
  util::Str<char>::operator+=(&local_48,&local_120);
  util::Str<char>::Str<char>((Str<char> *)local_20,&local_48);
  if (local_48.Data != (char *)0x0) {
    operator_delete__(local_48.Data);
    local_48._0_8_ = local_48._0_8_ & 0xffffffff00000000;
  }
  pSVar18 = util::Printf(&local_1c0,local_58);
  uStack_24 = 0;
  local_30._4_4_ = (void *)0x0;
  uStack_28 = 0;
  util::Str<char>::Str<char>((Str<char> *)(local_30 + 4),(Str<char> *)local_20);
  util::Str<char>::operator+=((Str<char> *)(local_30 + 4),pSVar18);
  pSVar18 = local_130;
  util::Str<char>::Str<char>(local_130,(Str<char> *)(local_30 + 4));
  if ((void *)local_30._4_4_ != (void *)0x0) {
    operator_delete__((void *)local_30._4_4_);
  }
  if ((Str<char> *)local_20._0_4_ != (Str<char> *)0x0) {
    operator_delete__((void *)local_20._0_4_);
  }
  if (local_160.Data != (char *)0x0) {
    operator_delete__(local_160.Data);
    local_160.Data = (char *)0x0;
  }
  if (local_1e4 != (void *)0x0) {
    operator_delete__(local_1e4);
    local_1e4 = (void *)0x0;
  }
  if (local_1f0[0] != (void *)0x0) {
    operator_delete__(local_1f0[0]);
    local_1f0[0] = (void *)0x0;
  }
  if (local_64.Data != (char *)0x0) {
    operator_delete__(local_64.Data);
    local_64.Data = (char *)0x0;
  }
  if (local_16c.Data != (char *)0x0) {
    operator_delete__(local_16c.Data);
    local_16c.Data = (char *)0x0;
  }
  if (local_178.Data != (char *)0x0) {
    operator_delete__(local_178.Data);
    local_178.Data = (char *)0x0;
  }
  if (local_184.Data != (char *)0x0) {
    operator_delete__(local_184.Data);
    local_184.Data = (char *)0x0;
  }
  if (local_190.Data != (char *)0x0) {
    operator_delete__(local_190.Data);
    local_190.Data = (char *)0x0;
  }
  if (local_19c.Data != (char *)0x0) {
    operator_delete__(local_19c.Data);
    local_19c.Data = (char *)0x0;
  }
  if (local_1a8.Data != (char *)0x0) {
    operator_delete__(local_1a8.Data);
    local_1a8.Data = (char *)0x0;
  }
  if (local_1b4.Data != (char *)0x0) {
    operator_delete__(local_1b4.Data);
    local_1b4.Data = (char *)0x0;
  }
  if (local_1c0.Data != (char *)0x0) {
    operator_delete__(local_1c0.Data);
    local_1c0.Data = (char *)0x0;
  }
  if (local_1fc != (void *)0x0) {
    operator_delete__(local_1fc);
    local_1fc = (void *)0x0;
  }
  if (local_208[0] != (void *)0x0) {
    operator_delete__(local_208[0]);
    local_208[0] = (void *)0x0;
  }
  if (local_70.Data != (char *)0x0) {
    operator_delete__(local_70.Data);
    local_70.Data = (char *)0x0;
  }
  if (local_1cc.Data != (char *)0x0) {
    operator_delete__(local_1cc.Data);
    local_1cc.Data = (char *)0x0;
  }
  if (local_1d8.Data != (char *)0x0) {
    operator_delete__(local_1d8.Data);
    local_1d8.Data = (char *)0x0;
  }
  if (local_108.Data != (char *)0x0) {
    operator_delete__(local_108.Data);
    local_108.Data = (char *)0x0;
  }
  if (local_7c.Data != (char *)0x0) {
    operator_delete__(local_7c.Data);
    local_7c.Data = (char *)0x0;
  }
  if (local_88.Data != (char *)0x0) {
    operator_delete__(local_88.Data);
    local_88.Data = (char *)0x0;
  }
  if (local_13c.Data != (char *)0x0) {
    operator_delete__(local_13c.Data);
    local_13c.Data = (char *)0x0;
  }
  if (local_148.Data != (char *)0x0) {
    operator_delete__(local_148.Data);
    local_148.Data = (char *)0x0;
  }
  if (local_154.Data != (char *)0x0) {
    operator_delete__(local_154.Data);
    local_154.Data = (char *)0x0;
  }
  if (local_d0.Data != (char *)0x0) {
    operator_delete__(local_d0.Data);
    local_d0.Data = (char *)0x0;
  }
  if (local_dc.Data != (char *)0x0) {
    operator_delete__(local_dc.Data);
    local_dc.Data = (char *)0x0;
  }
  if (local_94.Data != (char *)0x0) {
    operator_delete__(local_94.Data);
    local_94.Data = (char *)0x0;
  }
  if (local_120.Data != (char *)0x0) {
    operator_delete__(local_120.Data);
  }
  if (local_a0.Data != (char *)0x0) {
    operator_delete__(local_a0.Data);
    local_a0.Data = (char *)0x0;
  }
  if (local_c4.Data != (char *)0x0) {
    operator_delete__(local_c4.Data);
    local_c4.Data = (char *)0x0;
  }
  if (local_ac.Data != (char *)0x0) {
    operator_delete__(local_ac.Data);
    local_ac.Data = (char *)0x0;
  }
  if (local_b8.Data != (char *)0x0) {
    operator_delete__(local_b8.Data);
    local_b8.Data = (char *)0x0;
  }
  if (local_54.Data != (char *)0x0) {
    operator_delete__(local_54.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pSVar18;
}

