// decompiled by BatchDecomp @ 00680c60 name=GetDefaultInfo conv=__thiscall body=6849

/* WARNING: Removing unreachable block (ram,0x00681c1f) */
/* WARNING: Removing unreachable block (ram,0x00681ad6) */
/* WARNING: Removing unreachable block (ram,0x0068195c) */
/* WARNING: Removing unreachable block (ram,0x006817e2) */
/* WARNING: Removing unreachable block (ram,0x00681757) */
/* WARNING: Removing unreachable block (ram,0x006818d1) */
/* WARNING: Removing unreachable block (ram,0x00681a4b) */
/* WARNING: Removing unreachable block (ram,0x00681b94) */
/* WARNING: Removing unreachable block (ram,0x006825ef) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: class util::Str<char> __thiscall Material::GetDefaultInfo(bool)const  */

Str<char> * __thiscall
Material::GetDefaultInfo(Material *this,Str<char> *__return_storage_ptr__,bool param_1)

{
  Category CVar1;
  bool bVar2;
  int iVar3;
  Maybe<double> *pMVar4;
  ChemicalReaction *pCVar5;
  Element *pEVar6;
  LocStr *pLVar7;
  Str<char> *pSVar8;
  LasingMedium *pLVar9;
  float fVar10;
  int unaff_EDI;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  char *pcVar15;
  char *pcVar16;
  Darray<double> *pDVar17;
  LocStr local_70 [8];
  undefined1 local_68 [4];
  Str<char> SStack_64;
  undefined1 local_58 [8];
  char *pcStack_50;
  char local_4b;
  char local_4a;
  char local_49;
  Str<char> *local_48;
  char *local_44;
  undefined8 local_40;
  Str<char> *local_38;
  char *local_34;
  Str<char> local_30;
  undefined1 local_24 [8];
  float fStack_1c;
  undefined1 local_18 [4];
  undefined8 uStack_14;
  char local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_24._4_4_ = 0;
  fStack_1c = 0.0;
  if ((0.0 < this->Density_kg__m3) &&
     (iVar3 = (**(code **)((this->Elements)._padding_ + 0xc))(), 0 < iVar3)) {
    local_30.Data = (char *)0x0;
    local_30.Capacity = 0;
    local_30.Length = 0;
    local_9 = '\0';
    local_49 = IsAFluid(this);
    local_4a = IsStructural(this);
    if ((this->Remanence_T - __real_3ff0000000000000 <= 0.0) ||
       (((this->BandGap_eV <= 0.0 || (bVar2 = IsAStructuralMaterial(this), !bVar2)) ||
        (local_4b = '\x01', this->ThermoelectricSensitivity_V__K <= __real_0000000000000000)))) {
      local_4b = '\0';
    }
    local_48 = &local_30;
    local_44 = &local_9;
    stack0xffffffac = (double)CONCAT44(&local_9,&local_30);
    local_38 = &local_30;
    local_34 = &local_9;
    pcVar16 = SUB84(this->Density_kg__m3,0);
    PrintSigFigures((Str<char> *)(local_68 + 4),
                    (double)CONCAT44(2,(int)((ulonglong)this->Density_kg__m3 >> 0x20)),unaff_EDI);
    util::Printf((Str<char> *)&stack0xffffff74,"%s kg/m^3");
    util::Str<char>::Str<char>((Str<char> *)&stack0xffffff60,"Density_kg__m3");
    FUN_0067db10();
    if (SStack_64.Data != (char *)0x0) {
      operator_delete__(SStack_64.Data);
    }
    bVar2 = (char)this[1].Elements._padding_ == '\0';
    if (bVar2) {
      CVar1 = (this->GetCategory_MemoizedValue).Data;
      local_40 = (double)CONCAT44(CVar1 + Nonmetal,(undefined4)local_40);
      util::Darray<class_util::Reflectable*>::SetSize
                ((Darray<class_util::Reflectable*> *)&(this->GetClasses_MemoizedValue).Data.Capacity
                 ,(int *)((int)&local_40 + 4));
      bVar2 = util::Darray<enum_GraphicsResource::Type>::CheckSize
                        ((Darray<enum_GraphicsResource::Type> *)
                         &(this->GetClasses_MemoizedValue).Data.Capacity,CVar1);
      if (bVar2) {
        *(code **)(*(int *)&(this->GetClasses_MemoizedValue).IsValidData + -4 +
                  (this->GetCategory_MemoizedValue).Data * 4) = GetCost_c__kg_Clear;
      }
      dVar13 = GetCost_c__kg_MemoizedFunction(this);
      SStack_64.Capacity = CONCAT31(SStack_64.Capacity._1_3_,1);
      local_68 = SUB84(dVar13,0);
      SStack_64.Data = (char *)((ulonglong)dVar13 >> 0x20);
      this[1]._padding_ = (int)local_68;
      this[1]._padding_ = (int)SStack_64.Data;
      this[1].Elements._padding_ = SStack_64.Capacity;
      this[1].Elements.Data = (Element **)SStack_64.Length;
      bVar2 = (char)this[1].Elements._padding_ == '\0';
      _local_68 = dVar13;
    }
    if (bVar2) {
      pcVar16 = (char *)0x13;
      util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    util::Str<char>::Str<char>((Str<char> *)&stack0xffffff74,"c/kg");
    util::Str<char>::Str<char>((Str<char> *)&stack0xffffff60,"Cost_c__kg");
    FUN_0067e0a0();
    if (local_9 != '\0') {
      util::Str<char>::Str<char>((Str<char> *)local_18,"\n");
      util::Str<char>::operator+=(&local_30,(Str<char> *)local_18);
      if (local_18 != (undefined1  [4])0x0) {
        operator_delete__((void *)local_18);
      }
      local_9 = '\0';
    }
    uStack_14 = this->YieldStrength_MPa * __real_412e848000000000;
    util::Str<char>::Str<char>((Str<char> *)&stack0xffffff74,"Pa");
    util::Str<char>::Str<char>((Str<char> *)&stack0xffffff60,"YieldStrength_MPa");
    FUN_0067e0a0();
    uStack_14 = this->UltimateTensileStrength_MPa * __real_412e848000000000;
    util::Str<char>::Str<char>((Str<char> *)&stack0xffffff74,"Pa");
    util::Str<char>::Str<char>((Str<char> *)&stack0xffffff60,"UltimateTensileStrength_MPa");
    FUN_0067e0a0();
    if (local_9 != '\0') {
      util::Str<char>::Str<char>((Str<char> *)local_18,"\n");
      util::Str<char>::operator+=(&local_30,(Str<char> *)local_18);
      if (local_18 != (undefined1  [4])0x0) {
        operator_delete__((void *)local_18);
      }
      local_9 = '\0';
    }
    uStack_14 = this->YoungsModulus_GPa * __real_41cdcd6500000000;
    util::Str<char>::Str<char>((Str<char> *)&stack0xffffff74,"Pa");
    util::Str<char>::Str<char>((Str<char> *)&stack0xffffff60,"YoungsModulus_GPa");
    FUN_0067e0a0();
    uStack_14 = this->ShearModulus_GPa * __real_41cdcd6500000000;
    util::Str<char>::Str<char>((Str<char> *)&stack0xffffff74,"Pa");
    util::Str<char>::Str<char>((Str<char> *)&stack0xffffff60,"ShearModulus_GPa");
    FUN_0067e0a0();
    util::Str<char>::Str<char>((Str<char> *)&stack0xffffff74,"Pa");
    GetBulkModulus_Pa(this);
    util::Str<char>::Str<char>((Str<char> *)&stack0xffffff60,"BulkModulus_GPa");
    FUN_0067e0a0();
    util::Str<char>::Str<char>((Str<char> *)&stack0xffffff6c,"PoissonsRatio");
    FUN_0067e3b0();
    if (local_9 != '\0') {
      util::Str<char>::Str<char>((Str<char> *)local_18,"\n");
      util::Str<char>::operator+=(&local_30,(Str<char> *)local_18);
      if (local_18 != (undefined1  [4])0x0) {
        operator_delete__((void *)local_18);
      }
      local_9 = '\0';
    }
    dVar13 = this->ThermalConductivity_W__m_K * __real_3fee666666666666;
    dVar14 = 0.0;
    if (0.0 <= dVar13) {
      dVar14 = dVar13;
    }
    uStack_14._4_4_ = (int)((ulonglong)dVar14 >> 0x20);
    uStack_14._0_4_ = SUB84(dVar14,0);
    PrintTemperature((Str<char> *)&stack0xffffff74,(double)CONCAT44(pcVar16,uStack_14._4_4_));
    util::Str<char>::Str<char>((Str<char> *)&stack0xffffff60,"SafeUseTemperature");
    FUN_0067db10();
    PrintTemperature((Str<char> *)&stack0xffffff74,
                     (double)CONCAT44(pcVar16,(int)((ulonglong)this->ThermalConductivity_W__m_K >>
                                                   0x20)));
    util::Str<char>::Str<char>((Str<char> *)&stack0xffffff60,"MeltingPoint_K");
    FUN_0067db10();
    PrintTemperature((Str<char> *)&stack0xffffff74,
                     (double)CONCAT44(pcVar16,(int)((ulonglong)this->ThermalExpansion__K >> 0x20)));
    util::Str<char>::Str<char>((Str<char> *)&stack0xffffff60,"BoilingPoint_K");
    FUN_0067db10();
    util::Str<char>::Str<char>((Str<char> *)&stack0xffffff74,"J/kg K");
    util::Str<char>::Str<char>((Str<char> *)&stack0xffffff60,"SpecificHeat_J__kg_K");
    FUN_0067e0a0();
    util::Str<char>::Str<char>((Str<char> *)&stack0xffffff74,"W/m K");
    util::Str<char>::Str<char>((Str<char> *)&stack0xffffff60,"ThermalConductivity_W__m_K");
    FUN_0067e0a0();
    util::Str<char>::Str<char>((Str<char> *)&stack0xffffff74,"K^-1");
    util::Str<char>::Str<char>((Str<char> *)&stack0xffffff60,"ThermalExpansion__K");
    FUN_0067e0a0();
    if (!param_1) {
      if (local_9 != '\0') {
        util::Str<char>::Str<char>((Str<char> *)local_18,"\n");
        util::Str<char>::operator+=(&local_30,(Str<char> *)local_18);
        if (local_18 != (undefined1  [4])0x0) {
          operator_delete__((void *)local_18);
        }
        local_9 = '\0';
      }
      dVar13 = GetMolarMass_kg__mol(this);
      uStack_14._0_4_ = SUB84(dVar13,0);
      uStack_14._4_4_ = (int)((ulonglong)dVar13 >> 0x20);
      dVar13 = dVar13 * __real_408f400000000000;
      PrintSigFigures((Str<char> *)(local_68 + 4),
                      (double)CONCAT44(2,(int)((ulonglong)dVar13 >> 0x20)),unaff_EDI);
      dVar14 = GetMolarMass_kg__mol(this);
      uStack_14._0_4_ = SUB84(dVar14,0);
      uStack_14._4_4_ = (int)((ulonglong)dVar14 >> 0x20);
      util::Printf((Str<char> *)&stack0xffffff74,"%s g/mol");
      util::Str<char>::Str<char>((Str<char> *)&stack0xffffff60,"MolarMass");
      FUN_0067db10();
      pcVar16 = SUB84(dVar13,0);
      if (SStack_64.Data != (char *)0x0) {
        operator_delete__(SStack_64.Data);
        dVar13 = (double)ZEXT48(pcVar16);
      }
      util::Str<char>::Str<char>((Str<char> *)&stack0xffffff74,"s");
      GetHalfLife_s(this);
      util::Str<char>::Str<char>((Str<char> *)&stack0xffffff60,"HalfLife_s");
      FUN_0067e0a0();
      util::Str<char>::Str<char>((Str<char> *)&stack0xffffff74,"W/kg");
      GetRadioactiveSpecificPower_W__kg(this);
      util::Str<char>::Str<char>((Str<char> *)&stack0xffffff60,"RadioactiveDecaySpecificPower");
      FUN_0067e0a0();
      dVar14 = GetFirstIonizationEnergy_kJ__mol(this);
      uStack_14 = ((dVar14 * __real_408f400000000000) / Physics::AvogadroConstant__mol) /
                  Physics::JoulesInAnElectronVolt_J__eV;
      util::Str<char>::Str<char>((Str<char> *)&stack0xffffff74,"eV");
      util::Str<char>::Str<char>((Str<char> *)&stack0xffffff60,"WorkFunction");
      FUN_0067e0a0();
      dVar14 = GetFirstIonizationEnergy_kJ__mol(this);
      uStack_14._0_4_ = SUB84(dVar14,0);
      uStack_14._4_4_ = (int)((ulonglong)dVar14 >> 0x20);
      util::Str<char>::Str<char>((Str<char> *)&stack0xffffff74,"J/mol");
      util::Str<char>::Str<char>((Str<char> *)&stack0xffffff60,"FirstIonizationEnergy_kJ__mol");
      FUN_0067e0a0();
      util::Str<char>::Str<char>((Str<char> *)&stack0xffffff74,"eV");
      util::Str<char>::Str<char>((Str<char> *)&stack0xffffff60,"BandGap_eV");
      FUN_0067e0a0();
      pcVar16 = SUB84(dVar13,0);
      if (local_9 != '\0') {
        util::Str<char>::Str<char>((Str<char> *)local_18,"\n");
        util::Str<char>::operator+=(&local_30,(Str<char> *)local_18);
        if (local_18 != (undefined1  [4])0x0) {
          operator_delete__((void *)local_18);
        }
        dVar13 = (double)ZEXT48(pcVar16);
        local_9 = '\0';
      }
      pcVar16 = SUB84(dVar13,0);
      if (local_49 != '\0') {
        if ((this->GetReflectanceColor_MemoizedValue).IsValidData == false) {
          CVar1 = (this->GetCategory_MemoizedValue).Data;
          local_40 = (double)CONCAT44(CVar1 + Nonmetal,(undefined4)local_40);
          util::Darray<class_util::Reflectable*>::SetSize
                    ((Darray<class_util::Reflectable*> *)
                     &(this->GetClasses_MemoizedValue).Data.Capacity,(int *)((int)&local_40 + 4));
          bVar2 = util::Darray<enum_GraphicsResource::Type>::CheckSize
                            ((Darray<enum_GraphicsResource::Type> *)
                             &(this->GetClasses_MemoizedValue).Data.Capacity,CVar1);
          if (bVar2) {
            *(code **)(*(int *)&(this->GetClasses_MemoizedValue).IsValidData + -4 +
                      (this->GetCategory_MemoizedValue).Data * 4) = GetHeatCapacityRatio_Clear;
          }
          if (this->BoilingPoint_K <= __real_0000000000000000) {
            pcVar16 = (char *)0xdb;
            util::LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\materials.cpp"
                            ,0xdb,"SpecificHeat_J__kg_K > 0",(char *)0x0);
            DebugBreak();
          }
          uStack_14 = GetMolarMass_kg__mol(this);
          uStack_14 = Physics::IdealGasConstant_J__mol_K / uStack_14;
          dVar13 = this->BoilingPoint_K;
          uVar11 = SUB84(dVar13,0);
          uVar12 = (undefined4)((ulonglong)dVar13 >> 0x20);
          if (dVar13 <= uStack_14) {
            _local_68 = dVar13 * __real_3fe0000000000000;
          }
          else {
            dVar13 = GetMolarMass_kg__mol(this);
            uStack_14 = Physics::IdealGasConstant_J__mol_K / dVar13;
            _local_68 = this->BoilingPoint_K;
            uVar11 = SUB84(_local_68,0);
            uVar12 = (undefined4)((ulonglong)_local_68 >> 0x20);
            _local_68 = _local_68 - uStack_14;
          }
          _local_68 = (double)CONCAT44(uVar12,uVar11) / _local_68;
          SStack_64.Capacity = CONCAT31(SStack_64.Capacity._1_3_,1);
          *(double *)&(this->GetReflectanceColor_MemoizedValue).Data.Value2.Y = _local_68;
          *(int *)&(this->GetReflectanceColor_MemoizedValue).IsValidData = SStack_64.Capacity;
          (this->GetEmissivePowers_W_MemoizedValue).Data._padding_ = SStack_64.Length;
          if ((this->GetReflectanceColor_MemoizedValue).IsValidData == false) {
            pcVar16 = (char *)0x13;
            util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13
                            ,"IsValid()",(char *)0x0);
            DebugBreak();
          }
        }
        util::Str<char>::Str<char>((Str<char> *)&stack0xffffff6c,"AdiabaticIndex");
        FUN_0067e3b0();
        dVar13 = (double)ZEXT48(pcVar16);
      }
      if (local_4a != '\0') {
        pcVar15 = (char *)0x2;
        pcVar16 = "m^2/s";
        dVar14 = GetThermalDiffusivity_m2__s(this);
        PrintUnits((Str<char> *)&stack0xffffff74,
                   (double)CONCAT44(pcVar16,(int)((ulonglong)dVar14 >> 0x20)),pcVar15,
                   (int)SUB84(dVar13,0));
        GetThermalDiffusivity_m2__s(this);
        util::Str<char>::Str<char>((Str<char> *)&stack0xffffff60,"ThermalDiffusivity");
        FUN_0067db10();
      }
      if (local_49 != '\0') {
        util::Str<char>::Str<char>((Str<char> *)&stack0xffffff74,"Pa s");
        util::Str<char>::Str<char>((Str<char> *)&stack0xffffff60,"Viscosity_Pa_s");
        FUN_0067e0a0();
      }
      if ((local_4a != '\0') || (local_49 != '\0')) {
        if (this->Density_kg__m3 <= __real_0000000000000000) {
          util::LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\materials.cpp"
                          ,0xf1,"Density_kg__m3 > 0",(char *)0x0);
          DebugBreak();
        }
        dVar13 = GetBulkModulus_Pa(this);
        uStack_14 = dVar13 / this->Density_kg__m3;
        pcVar16 = (char *)0x681661;
        pMVar4 = util::Sqrt((Maybe<double> *)local_68,(double *)&uStack_14);
        if (pMVar4->IsValidData == false) {
          pcVar16 = (char *)0x13;
          util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        local_40 = pMVar4->Data;
        util::Str<char>::Str<char>((Str<char> *)&stack0xffffff74,"m/s");
        util::Str<char>::Str<char>((Str<char> *)&stack0xffffff60,"SpeedOfSound");
        FUN_0067e0a0();
        dVar13 = (double)ZEXT48(pcVar16);
      }
      pcVar16 = SUB84(dVar13,0);
      if (local_9 != '\0') {
        util::Str<char>::Str<char>((Str<char> *)local_18,"\n");
        util::Str<char>::operator+=(&local_30,(Str<char> *)local_18);
        if (local_18 != (undefined1  [4])0x0) {
          operator_delete__((void *)local_18);
        }
        dVar13 = (double)ZEXT48(pcVar16);
        local_9 = '\0';
      }
      pcVar16 = SUB84(dVar13,0);
      if ((char)this[1].Elements.Capacity == '\0') {
        CVar1 = (this->GetCategory_MemoizedValue).Data;
        local_40 = (double)CONCAT44(CVar1 + Nonmetal,(undefined4)local_40);
        util::Darray<class_util::Reflectable*>::SetSize
                  ((Darray<class_util::Reflectable*> *)
                   &(this->GetClasses_MemoizedValue).Data.Capacity,(int *)((int)&local_40 + 4));
        bVar2 = util::Darray<enum_GraphicsResource::Type>::CheckSize
                          ((Darray<enum_GraphicsResource::Type> *)
                           &(this->GetClasses_MemoizedValue).Data.Capacity,CVar1);
        if (bVar2) {
          *(code **)(*(int *)&(this->GetClasses_MemoizedValue).IsValidData + -4 +
                    (this->GetCategory_MemoizedValue).Data * 4) = GetDecompositionReaction_Clear;
        }
        pCVar5 = GetDecompositionReaction_MemoizedFunction(this);
        dVar13 = (double)ZEXT48(pcVar16);
        uStack_14._4_4_ = CONCAT31(uStack_14._5_3_,1);
        this[1].Elements.Size = (int)pCVar5;
        this[1].Elements.Capacity = uStack_14._4_4_;
      }
      pcVar16 = SUB84(dVar13,0);
      if (this[1].Elements.Size == 0) {
        local_40._0_4_ = 0;
        local_40._4_4_ = 0;
      }
      else {
        if ((char)this[1].Elements.Capacity == '\0') {
          CVar1 = (this->GetCategory_MemoizedValue).Data;
          local_40 = (double)CONCAT44(CVar1 + Nonmetal,(undefined4)local_40);
          util::Darray<class_util::Reflectable*>::SetSize
                    ((Darray<class_util::Reflectable*> *)
                     &(this->GetClasses_MemoizedValue).Data.Capacity,(int *)((int)&local_40 + 4));
          bVar2 = util::Darray<enum_GraphicsResource::Type>::CheckSize
                            ((Darray<enum_GraphicsResource::Type> *)
                             &(this->GetClasses_MemoizedValue).Data.Capacity,CVar1);
          if (bVar2) {
            *(code **)(*(int *)&(this->GetClasses_MemoizedValue).IsValidData + -4 +
                      (this->GetCategory_MemoizedValue).Data * 4) = GetDecompositionReaction_Clear;
          }
          pCVar5 = GetDecompositionReaction_MemoizedFunction(this);
          dVar13 = (double)ZEXT48(pcVar16);
          uStack_14._4_4_ = CONCAT31(uStack_14._5_3_,1);
          this[1].Elements.Size = (int)pCVar5;
          this[1].Elements.Capacity = uStack_14._4_4_;
        }
        pCVar5 = (ChemicalReaction *)this[1].Elements.Size;
        ChemicalReaction::GetDetonationVelocity_m__s_Memoize(pCVar5);
        if ((pCVar5->GetDetonationVelocity_m__s_MemoizedValue).IsValidData == false) {
          pcVar16 = (char *)0x13;
          util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
          dVar13 = (double)ZEXT48(pcVar16);
        }
        dVar14 = (pCVar5->GetDetonationVelocity_m__s_MemoizedValue).Data;
        local_40._0_4_ = SUB84(dVar14,0);
        local_40._4_4_ = (int)((ulonglong)dVar14 >> 0x20);
      }
      util::Str<char>::Str<char>((Str<char> *)&stack0xffffff74,"m/s");
      util::Str<char>::Str<char>((Str<char> *)&stack0xffffff60,"DetonationVelocity");
      FUN_0067e0a0();
      pcVar16 = SUB84(dVar13,0);
      if ((char)this[1].Elements.Capacity == '\0') {
        CVar1 = (this->GetCategory_MemoizedValue).Data;
        local_40._4_4_ = CVar1 + Nonmetal;
        util::Darray<class_util::Reflectable*>::SetSize
                  ((Darray<class_util::Reflectable*> *)
                   &(this->GetClasses_MemoizedValue).Data.Capacity,(int *)((int)&local_40 + 4));
        bVar2 = util::Darray<enum_GraphicsResource::Type>::CheckSize
                          ((Darray<enum_GraphicsResource::Type> *)
                           &(this->GetClasses_MemoizedValue).Data.Capacity,CVar1);
        if (bVar2) {
          *(code **)(*(int *)&(this->GetClasses_MemoizedValue).IsValidData + -4 +
                    (this->GetCategory_MemoizedValue).Data * 4) = GetDecompositionReaction_Clear;
        }
        pCVar5 = GetDecompositionReaction_MemoizedFunction(this);
        dVar13 = (double)ZEXT48(pcVar16);
        uStack_14._4_4_ = CONCAT31(uStack_14._5_3_,1);
        this[1].Elements.Size = (int)pCVar5;
        this[1].Elements.Capacity = uStack_14._4_4_;
      }
      pcVar16 = SUB84(dVar13,0);
      if (this[1].Elements.Size == 0) {
        uVar11 = 0;
        uVar12 = 0;
      }
      else {
        if ((char)this[1].Elements.Capacity == '\0') {
          CVar1 = (this->GetCategory_MemoizedValue).Data;
          local_40._4_4_ = CVar1 + Nonmetal;
          util::Darray<class_util::Reflectable*>::SetSize
                    ((Darray<class_util::Reflectable*> *)
                     &(this->GetClasses_MemoizedValue).Data.Capacity,(int *)((int)&local_40 + 4));
          bVar2 = util::Darray<enum_GraphicsResource::Type>::CheckSize
                            ((Darray<enum_GraphicsResource::Type> *)
                             &(this->GetClasses_MemoizedValue).Data.Capacity,CVar1);
          if (bVar2) {
            *(code **)(*(int *)&(this->GetClasses_MemoizedValue).IsValidData + -4 +
                      (this->GetCategory_MemoizedValue).Data * 4) = GetDecompositionReaction_Clear;
          }
          pCVar5 = GetDecompositionReaction_MemoizedFunction(this);
          dVar13 = (double)ZEXT48(pcVar16);
          uStack_14._4_4_ = CONCAT31(uStack_14._5_3_,1);
          this[1].Elements.Size = (int)pCVar5;
          this[1].Elements.Capacity = uStack_14._4_4_;
        }
        pCVar5 = (ChemicalReaction *)this[1].Elements.Size;
        ChemicalReaction::GetEnergyDensity_J__kg_Memoize(pCVar5);
        if ((pCVar5->GetEnergyDensity_J__kg_MemoizedValue).IsValidData == false) {
          pcVar16 = (char *)0x13;
          util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
          dVar13 = (double)ZEXT48(pcVar16);
        }
        dVar14 = (pCVar5->GetEnergyDensity_J__kg_MemoizedValue).Data;
        uVar11 = SUB84(dVar14,0);
        uVar12 = (undefined4)((ulonglong)dVar14 >> 0x20);
      }
      local_40 = (double)CONCAT44(uVar12,uVar11);
      util::Str<char>::Str<char>((Str<char> *)&stack0xffffff74,"J/kg");
      util::Str<char>::Str<char>((Str<char> *)&stack0xffffff60,"EnergyDensity");
      FUN_0067e0a0();
      pcVar16 = SUB84(dVar13,0);
      if ((char)this[1].Elements.Capacity == '\0') {
        CVar1 = (this->GetCategory_MemoizedValue).Data;
        local_40 = (double)CONCAT44(CVar1 + Nonmetal,(undefined4)local_40);
        util::Darray<class_util::Reflectable*>::SetSize
                  ((Darray<class_util::Reflectable*> *)
                   &(this->GetClasses_MemoizedValue).Data.Capacity,(int *)((int)&local_40 + 4));
        bVar2 = util::Darray<enum_GraphicsResource::Type>::CheckSize
                          ((Darray<enum_GraphicsResource::Type> *)
                           &(this->GetClasses_MemoizedValue).Data.Capacity,CVar1);
        if (bVar2) {
          *(code **)(*(int *)&(this->GetClasses_MemoizedValue).IsValidData + -4 +
                    (this->GetCategory_MemoizedValue).Data * 4) = GetDecompositionReaction_Clear;
        }
        pCVar5 = GetDecompositionReaction_MemoizedFunction(this);
        dVar13 = (double)ZEXT48(pcVar16);
        uStack_14._4_4_ = CONCAT31(uStack_14._5_3_,1);
        this[1].Elements.Size = (int)pCVar5;
        this[1].Elements.Capacity = uStack_14._4_4_;
      }
      pcVar16 = SUB84(dVar13,0);
      if (this[1].Elements.Size == 0) {
        uStack_14._0_4_ = 0;
        uStack_14._4_4_ = 0;
      }
      else {
        if ((char)this[1].Elements.Capacity == '\0') {
          CVar1 = (this->GetCategory_MemoizedValue).Data;
          local_40 = (double)CONCAT44(CVar1 + Nonmetal,(undefined4)local_40);
          util::Darray<class_util::Reflectable*>::SetSize
                    ((Darray<class_util::Reflectable*> *)
                     &(this->GetClasses_MemoizedValue).Data.Capacity,(int *)((int)&local_40 + 4));
          bVar2 = util::Darray<enum_GraphicsResource::Type>::CheckSize
                            ((Darray<enum_GraphicsResource::Type> *)
                             &(this->GetClasses_MemoizedValue).Data.Capacity,CVar1);
          if (bVar2) {
            *(code **)(*(int *)&(this->GetClasses_MemoizedValue).IsValidData + -4 +
                      (this->GetCategory_MemoizedValue).Data * 4) = GetDecompositionReaction_Clear;
          }
          pCVar5 = GetDecompositionReaction_MemoizedFunction(this);
          dVar13 = (double)ZEXT48(pcVar16);
          uStack_14._4_4_ = CONCAT31(uStack_14._5_3_,1);
          this[1].Elements.Size = (int)pCVar5;
          this[1].Elements.Capacity = uStack_14._4_4_;
        }
        pCVar5 = (ChemicalReaction *)this[1].Elements.Size;
        ChemicalReaction::GetAdiabaticFlameTemperature_K_Memoize(pCVar5);
        if ((pCVar5->GetAdiabaticFlameTemperature_K_MemoizedValue).IsValidData == false) {
          pcVar16 = (char *)0x13;
          util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
          dVar13 = (double)ZEXT48(pcVar16);
        }
        dVar14 = (pCVar5->GetAdiabaticFlameTemperature_K_MemoizedValue).Data;
        uStack_14._0_4_ = SUB84(dVar14,0);
        uStack_14._4_4_ = (int)((ulonglong)dVar14 >> 0x20);
      }
      pcVar16 = SUB84(dVar13,0);
      if ((char)this[1].Elements.Capacity == '\0') {
        CVar1 = (this->GetCategory_MemoizedValue).Data;
        local_40 = (double)CONCAT44(CVar1 + Nonmetal,(undefined4)local_40);
        util::Darray<class_util::Reflectable*>::SetSize
                  ((Darray<class_util::Reflectable*> *)
                   &(this->GetClasses_MemoizedValue).Data.Capacity,(int *)((int)&local_40 + 4));
        bVar2 = util::Darray<enum_GraphicsResource::Type>::CheckSize
                          ((Darray<enum_GraphicsResource::Type> *)
                           &(this->GetClasses_MemoizedValue).Data.Capacity,CVar1);
        if (bVar2) {
          *(code **)(*(int *)&(this->GetClasses_MemoizedValue).IsValidData + -4 +
                    (this->GetCategory_MemoizedValue).Data * 4) = GetDecompositionReaction_Clear;
        }
        pCVar5 = GetDecompositionReaction_MemoizedFunction(this);
        dVar13 = (double)ZEXT48(pcVar16);
        local_40._0_5_ = CONCAT14(1,(undefined4)local_40);
        this[1].Elements.Size = (int)pCVar5;
        this[1].Elements.Capacity = local_40._4_4_;
      }
      pcVar16 = SUB84(dVar13,0);
      if (this[1].Elements.Size == 0) {
        uVar11 = 0;
        uVar12 = 0;
      }
      else {
        if ((char)this[1].Elements.Capacity == '\0') {
          CVar1 = (this->GetCategory_MemoizedValue).Data;
          local_40 = (double)CONCAT44(CVar1 + Nonmetal,(undefined4)local_40);
          util::Darray<class_util::Reflectable*>::SetSize
                    ((Darray<class_util::Reflectable*> *)
                     &(this->GetClasses_MemoizedValue).Data.Capacity,(int *)((int)&local_40 + 4));
          bVar2 = util::Darray<enum_GraphicsResource::Type>::CheckSize
                            ((Darray<enum_GraphicsResource::Type> *)
                             &(this->GetClasses_MemoizedValue).Data.Capacity,CVar1);
          if (bVar2) {
            *(code **)(*(int *)&(this->GetClasses_MemoizedValue).IsValidData + -4 +
                      (this->GetCategory_MemoizedValue).Data * 4) = GetDecompositionReaction_Clear;
          }
          pCVar5 = GetDecompositionReaction_MemoizedFunction(this);
          dVar13 = (double)ZEXT48(pcVar16);
          local_40._0_5_ = CONCAT14(1,(undefined4)local_40);
          this[1].Elements.Size = (int)pCVar5;
          this[1].Elements.Capacity = local_40._4_4_;
        }
        pCVar5 = (ChemicalReaction *)this[1].Elements.Size;
        ChemicalReaction::GetAdiabaticFlameTemperature_K_Memoize(pCVar5);
        if ((pCVar5->GetAdiabaticFlameTemperature_K_MemoizedValue).IsValidData == false) {
          pcVar16 = (char *)0x13;
          util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
          dVar13 = (double)ZEXT48(pcVar16);
        }
        dVar14 = (pCVar5->GetAdiabaticFlameTemperature_K_MemoizedValue).Data;
        uVar11 = SUB84(dVar14,0);
        uVar12 = (undefined4)((ulonglong)dVar14 >> 0x20);
      }
      local_40 = (double)CONCAT44(uVar12,uVar11);
      PrintTemperature((Str<char> *)&stack0xffffff74,
                       (double)CONCAT44(SUB84(dVar13,0),uStack_14._4_4_));
      util::Str<char>::Str<char>((Str<char> *)&stack0xffffff60,"AdiabaticFlameTemperature");
      FUN_0067db10();
      pcVar16 = SUB84(dVar13,0);
      if (local_9 != '\0') {
        util::Str<char>::Str<char>((Str<char> *)local_18,"\n");
        util::Str<char>::operator+=(&local_30,(Str<char> *)local_18);
        if (local_18 != (undefined1  [4])0x0) {
          operator_delete__((void *)local_18);
        }
        dVar13 = (double)ZEXT48(pcVar16);
        local_9 = '\0';
      }
      pEVar6 = GetFissileElement(this);
      if (pEVar6 == (Element *)0x0) {
        uStack_14._0_4_ = 0;
        uStack_14._4_4_ = 0;
      }
      else {
        uStack_14._0_4_ = SUB84(pEVar6->FissionEnergy_MeV,0);
        uStack_14._4_4_ = (int)((ulonglong)pEVar6->FissionEnergy_MeV >> 0x20);
      }
      util::Str<char>::Str<char>((Str<char> *)&stack0xffffff74,"eV");
      util::Str<char>::Str<char>((Str<char> *)&stack0xffffff60,"FissionEnergy_MeV");
      FUN_0067e0a0();
      pcVar16 = SUB84(dVar13,0);
      if (local_9 != '\0') {
        util::Str<char>::Str<char>((Str<char> *)local_18,"\n");
        util::Str<char>::operator+=(&local_30,(Str<char> *)local_18);
        if (local_18 != (undefined1  [4])0x0) {
          operator_delete__((void *)local_18);
        }
        dVar13 = (double)ZEXT48(pcVar16);
        local_9 = '\0';
      }
      util::Str<char>::Str<char>((Str<char> *)&stack0xffffff74,"Ohm m");
      util::Str<char>::Str<char>((Str<char> *)&stack0xffffff60,"Resistivity_Ohm_m");
      FUN_0067e0a0();
      if (this->RelativePermittivity <= 0.0) {
        uStack_14 = 0.0;
      }
      else {
        uStack_14 = __real_3ff0000000000000 / this->RelativePermittivity;
      }
      util::Str<char>::Str<char>((Str<char> *)&stack0xffffff74,"Sv/m");
      util::Str<char>::Str<char>((Str<char> *)&stack0xffffff60,"Conductivity");
      FUN_0067e0a0();
      uStack_14 = this->RelativePermeability * __real_412e848000000000;
      util::Str<char>::Str<char>((Str<char> *)&stack0xffffff74,"V/m");
      util::Str<char>::Str<char>((Str<char> *)&stack0xffffff60,"DielectricStrength_MV__m");
      FUN_0067e0a0();
      util::Str<char>::Str<char>((Str<char> *)&stack0xffffff74,"V/K");
      util::Str<char>::Str<char>((Str<char> *)&stack0xffffff60,"ThermoelectricSensitivity_V__K");
      pDVar17 = SUB84(dVar13,0);
      FUN_0067e0a0();
      util::Str<char>::Str<char>((Str<char> *)&stack0xffffff6c,"RelativePermittivity");
      FUN_0067e3b0();
      if (local_9 != '\0') {
        util::Str<char>::Str<char>((Str<char> *)local_18,"\n");
        util::Str<char>::operator+=(&local_30,(Str<char> *)local_18);
        if (local_18 != (undefined1  [4])0x0) {
          operator_delete__((void *)local_18);
        }
        local_9 = '\0';
      }
      util::Str<char>::Str<char>((Str<char> *)&stack0xffffff6c,"RelativePermeability");
      FUN_0067e3b0();
      if (local_4b != '\0') {
        util::Str<char>::Str<char>((Str<char> *)&stack0xffffff6c,"MagneticSusceptibility");
        FUN_0067e3b0();
        util::Str<char>::Str<char>((Str<char> *)&stack0xffffff74,"T");
        util::Str<char>::Str<char>((Str<char> *)&stack0xffffff60,"Remanence_T");
        FUN_0067e0a0();
        dVar13 = this->Remanence_T;
        if ((NAN(dVar13) || NAN(__real_0000000000000000)) == (dVar13 == __real_0000000000000000)) {
          register0x00001240 = this->BandGap_eV / (Physics::VacuumPermeability_H__m * dVar13);
        }
        util::Str<char>::Str<char>((Str<char> *)&stack0xffffff74,"A/m");
        util::Str<char>::Str<char>((Str<char> *)&stack0xffffff60,"Coercivity");
        FUN_0067e0a0();
        if ((char)(this->GetEmissivePowers_W_MemoizedValue).Data.Capacity == '\0') {
          CVar1 = (this->GetCategory_MemoizedValue).Data;
          local_40 = (double)CONCAT44(CVar1 + Nonmetal,(undefined4)local_40);
          util::Darray<class_util::Reflectable*>::SetSize
                    ((Darray<class_util::Reflectable*> *)
                     &(this->GetClasses_MemoizedValue).Data.Capacity,(int *)((int)&local_40 + 4));
          bVar2 = util::Darray<enum_GraphicsResource::Type>::CheckSize
                            ((Darray<enum_GraphicsResource::Type> *)
                             &(this->GetClasses_MemoizedValue).Data.Capacity,CVar1);
          if (bVar2) {
            *(code **)(*(int *)&(this->GetClasses_MemoizedValue).IsValidData + -4 +
                      (this->GetCategory_MemoizedValue).Data * 4) =
                 GetSaturationMagnetization_A__m_Clear;
          }
          unique0x100012ee = Physics::AvogadroConstant__mol * this->Density_kg__m3;
          dVar13 = GetMolarMass_kg__mol(this);
          unique0x10001f71 = stack0xffffffac / dVar13;
          SStack_64.Capacity = CONCAT31(SStack_64.Capacity._1_3_,1);
          _local_68 = Physics::BohrMagneton_J__T * unique0x10001f71 *
                      this->ThermoelectricSensitivity_V__K;
          *(double *)&(this->GetEmissivePowers_W_MemoizedValue).Data.Data = _local_68;
          (this->GetEmissivePowers_W_MemoizedValue).Data.Capacity = SStack_64.Capacity;
          *(int *)&(this->GetEmissivePowers_W_MemoizedValue).IsValidData = SStack_64.Length;
          if ((char)(this->GetEmissivePowers_W_MemoizedValue).Data.Capacity == '\0') {
            pDVar17 = (Darray<double> *)0x13;
            util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13
                            ,"IsValid()",(char *)0x0);
            DebugBreak();
          }
        }
        util::Str<char>::Str<char>((Str<char> *)&stack0xffffff74,"A/m");
        util::Str<char>::Str<char>((Str<char> *)&stack0xffffff60,"SaturationMagnetization");
        FUN_0067e0a0();
        if ((char)(this->GetEmissivePowers_W_MemoizedValue).Data.Capacity == '\0') {
          CVar1 = (this->GetCategory_MemoizedValue).Data;
          local_40 = (double)CONCAT44(CVar1 + Nonmetal,(undefined4)local_40);
          util::Darray<class_util::Reflectable*>::SetSize
                    ((Darray<class_util::Reflectable*> *)
                     &(this->GetClasses_MemoizedValue).Data.Capacity,(int *)((int)&local_40 + 4));
          bVar2 = util::Darray<enum_GraphicsResource::Type>::CheckSize
                            ((Darray<enum_GraphicsResource::Type> *)
                             &(this->GetClasses_MemoizedValue).Data.Capacity,CVar1);
          if (bVar2) {
            *(code **)(*(int *)&(this->GetClasses_MemoizedValue).IsValidData + -4 +
                      (this->GetCategory_MemoizedValue).Data * 4) =
                 GetSaturationMagnetization_A__m_Clear;
          }
          unique0x1000131e = Physics::AvogadroConstant__mol * this->Density_kg__m3;
          dVar13 = GetMolarMass_kg__mol(this);
          unique0x10001fd3 = stack0xffffffac / dVar13;
          SStack_64.Capacity = CONCAT31(SStack_64.Capacity._1_3_,1);
          _local_68 = Physics::BohrMagneton_J__T * unique0x10001fd3 *
                      this->ThermoelectricSensitivity_V__K;
          *(double *)&(this->GetEmissivePowers_W_MemoizedValue).Data.Data = _local_68;
          (this->GetEmissivePowers_W_MemoizedValue).Data.Capacity = SStack_64.Capacity;
          *(int *)&(this->GetEmissivePowers_W_MemoizedValue).IsValidData = SStack_64.Length;
          if ((char)(this->GetEmissivePowers_W_MemoizedValue).Data.Capacity == '\0') {
            pDVar17 = (Darray<double> *)0x13;
            util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13
                            ,"IsValid()",(char *)0x0);
            DebugBreak();
          }
        }
        unique0x10001346 =
             Physics::VacuumPermeability_H__m *
             *(double *)&(this->GetEmissivePowers_W_MemoizedValue).Data.Data;
        util::Str<char>::Str<char>((Str<char> *)&stack0xffffff74,"T");
        util::Str<char>::Str<char>((Str<char> *)&stack0xffffff60,"MagneticSaturationFluxDensity");
        FUN_0067e0a0();
      }
      if (local_9 != '\0') {
        util::Str<char>::Str<char>((Str<char> *)local_24,"\n");
        util::Str<char>::operator+=(&local_30,(Str<char> *)local_24);
        if ((char *)local_24._0_4_ != (char *)0x0) {
          operator_delete__((void *)local_24._0_4_);
        }
        local_9 = '\0';
      }
      unique0x1000135e =
           *(double *)&(this->LasingMediumProperties).Data._padding_ * __real_426d1a94a2000000;
      util::Str<char>::Str<char>((Str<char> *)&stack0xffffff74,"W/m^2");
      util::Str<char>::Str<char>((Str<char> *)&stack0xffffff60,"LasingDamageThreshold_TW__m2");
      FUN_0067e0a0();
      unique0x10001376 = this->LasingDamageThreshold_TW__m2 * ___real_3d719799812dea11;
      util::Str<char>::Str<char>((Str<char> *)&stack0xffffff74,"m/V");
      util::Str<char>::Str<char>
                ((Str<char> *)&stack0xffffff60,"OpticalNonlinearityCoefficient_pm__V");
      FUN_0067e0a0();
      util::Str<char>::Str<char>((Str<char> *)&stack0xffffff74,"m/radian");
      util::Str<char>::Str<char>
                ((Str<char> *)&stack0xffffff60,"ExternalAngularSensitivity__m_radians");
      FUN_0067e0a0();
      if ((char)(this->MaterialMemoizationHandlerInstance).ResetFunctions._padding_ != '\0') {
        PrintWavelength((Str<char> *)&stack0xffffff74,
                        (double)CONCAT44(pDVar17,(int)((ulonglong)
                                                       (this->LasingMediumProperties).Data.
                                                       SpontaneousLifetime_s >> 0x20)));
        util::Str<char>::Str<char>((Str<char> *)&stack0xffffff60,"TransitionWavelength");
        FUN_0067db10();
        if ((char)(this->MaterialMemoizationHandlerInstance).ResetFunctions._padding_ == '\0') {
          pDVar17 = (Darray<double> *)0x18;
          util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        iVar3 = (**(code **)(*(int *)&(this->LasingMediumProperties).Data.IsThreeLevelPumpScheme +
                            0xc))();
        if (0 < iVar3) {
          util::Str<char>::Str<char>((Str<char> *)local_58,"Material PumpingBands");
          local_24._0_4_ = (char *)0x0;
          local_24._4_4_ = 0;
          fStack_1c = 0.0;
          pLVar7 = (LocStr *)
                   util::LocStr::LocStr(local_70,(Str<char> *)local_58,(Str<char> *)local_24);
          util::LocStr::operator*(pLVar7);
          pSVar8 = util::Printf((Str<char> *)local_18,"\n%s");
          util::Str<char>::operator+=(&local_30,pSVar8);
          if (local_18 != (undefined1  [4])0x0) {
            operator_delete__((void *)local_18);
            local_18 = (undefined1  [4])0x0;
          }
          util::LocStr::~LocStr(local_70);
          if ((char *)local_24._0_4_ != (char *)0x0) {
            operator_delete__((void *)local_24._0_4_);
            local_24._0_4_ = (char *)0x0;
          }
          if ((char *)local_58._0_4_ != (char *)0x0) {
            operator_delete__((void *)local_58._0_4_);
          }
          pLVar9 = util::Maybe<struct_LasingMedium>::operator->
                             ((Maybe<struct_LasingMedium> *)
                              &(this->LasingMediumProperties).Data.PumpingBands_nm);
          pDVar17 = &pLVar9->PumpingBands_nm;
          FUN_0067c870();
        }
        if ((char)(this->MaterialMemoizationHandlerInstance).ResetFunctions._padding_ == '\0') {
          pDVar17 = (Darray<double> *)0x18;
          util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                          "IsValid()",(char *)0x0);
          DebugBreak();
          if ((char)(this->MaterialMemoizationHandlerInstance).ResetFunctions._padding_ == '\0') {
            pDVar17 = (Darray<double> *)0x18;
            util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18
                            ,"IsValid()",(char *)0x0);
            DebugBreak();
          }
        }
        PrintUnits((Str<char> *)&stack0xffffff74,
                   (double)CONCAT44("m2",(int)((ulonglong)
                                               (this->LasingMediumProperties).Data.
                                               AtomicLasingDensity__m3 >> 0x20)),(char *)0x2,
                   (int)pDVar17);
        util::Str<char>::Str<char>((Str<char> *)&stack0xffffff60,"TransitionCrossSection");
        FUN_0067db10();
        if ((char)(this->MaterialMemoizationHandlerInstance).ResetFunctions._padding_ == '\0') {
          util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        util::Str<char>::Str<char>((Str<char> *)&stack0xffffff74,"s");
        util::Str<char>::Str<char>((Str<char> *)&stack0xffffff60,"SpontaneousLifetime");
        FUN_0067e0a0();
        if ((char)(this->MaterialMemoizationHandlerInstance).ResetFunctions._padding_ == '\0') {
          util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        PrintSigFigures((Str<char> *)(local_68 + 4),
                        (double)CONCAT44(GlobalSignificantFigures,
                                         (int)((ulonglong)
                                               *(undefined8 *)
                                                &(this->LasingMediumProperties).IsValidData >> 0x20)
                                        ),unaff_EDI);
        if ((char)(this->MaterialMemoizationHandlerInstance).ResetFunctions._padding_ == '\0') {
          util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        util::Printf((Str<char> *)&stack0xffffff74,"%s m^-3");
        util::Str<char>::Str<char>((Str<char> *)&stack0xffffff60,"AtomicLasingDensity");
        FUN_0067e0a0();
        if (SStack_64.Data != (char *)0x0) {
          operator_delete__(SStack_64.Data);
        }
      }
    }
    util::Str<char>::Str<char>((Str<char> *)(local_68 + 4),"\n");
    if (*(char *)&(this->GetReflectanceColor_MemoizedValue).Data.Value2.X == '\0') {
      CVar1 = (this->GetCategory_MemoizedValue).Data;
      local_40 = (double)CONCAT44(CVar1 + Nonmetal,(undefined4)local_40);
      util::Darray<class_util::Reflectable*>::SetSize
                ((Darray<class_util::Reflectable*> *)&(this->GetClasses_MemoizedValue).Data.Capacity
                 ,(int *)((int)&local_40 + 4));
      bVar2 = util::Darray<enum_GraphicsResource::Type>::CheckSize
                        ((Darray<enum_GraphicsResource::Type> *)
                         &(this->GetClasses_MemoizedValue).Data.Capacity,CVar1);
      if (bVar2) {
        *(code **)(*(int *)&(this->GetClasses_MemoizedValue).IsValidData + -4 +
                  (this->GetCategory_MemoizedValue).Data * 4) = GetCategory_Clear;
      }
      fVar10 = (float)GetCategory_MemoizedFunction(this);
      fStack_1c = (float)CONCAT31(fStack_1c._1_3_,1);
      (this->GetReflectanceColor_MemoizedValue).Data.Value1.Z = fVar10;
      (this->GetReflectanceColor_MemoizedValue).Data.Value2.X = fStack_1c;
    }
    local_44 = (char *)(this->GetReflectanceColor_MemoizedValue).Data.Value1.Z;
    pLVar7 = (LocStr *)(*(code *)*DAT_0097a614)();
    pSVar8 = util::LocStr::operator*(pLVar7);
    fStack_1c = 0.0;
    local_24._0_4_ = (char *)0x0;
    local_24._4_4_ = 0;
    util::Str<char>::Str<char>((Str<char> *)local_24,pSVar8);
    util::Str<char>::operator+=((Str<char> *)local_24,(Str<char> *)(local_68 + 4));
    util::Str<char>::Str<char>((Str<char> *)local_58,(Str<char> *)local_24);
    if ((char *)local_24._0_4_ != (char *)0x0) {
      operator_delete__((void *)local_24._0_4_);
      local_24._0_4_ = (char *)0x0;
    }
    uStack_14._4_4_ = 0;
    local_18 = (undefined1  [4])0x0;
    uStack_14._0_4_ = 0;
    util::Str<char>::Str<char>((Str<char> *)local_18,(Str<char> *)local_58);
    util::Str<char>::operator+=((Str<char> *)local_18,&local_30);
    util::Str<char>::Str<char>(__return_storage_ptr__,(Str<char> *)local_18);
    if (local_18 != (undefined1  [4])0x0) {
      operator_delete__((void *)local_18);
    }
    if ((char *)local_58._0_4_ != (char *)0x0) {
      operator_delete__((void *)local_58._0_4_);
    }
    if (SStack_64.Data != (char *)0x0) {
      operator_delete__(SStack_64.Data);
    }
    if (local_30.Data != (char *)0x0) {
      operator_delete__(local_30.Data);
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Data = (char *)0x0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->Length = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}

