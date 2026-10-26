// decompiled by BatchDecomp @ 006865f0 name=GetProductionCost_c__kg conv=__thiscall body=1582

/* WARNING: Removing unreachable block (ram,0x00686a1f) */
/* WARNING: Removing unreachable block (ram,0x00686ab0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: double __thiscall Material::GetProductionCost_c__kg(void)const  */

double __thiscall Material::GetProductionCost_c__kg(Material *this)

{
  Darray<double> *pDVar1;
  Category CVar2;
  bool bVar3;
  int iVar4;
  double *pdVar5;
  int iVar6;
  ChemicalReaction *pCVar7;
  Maybe<double> *pMVar8;
  float10 extraout_ST0;
  double dVar9;
  double dVar10;
  undefined1 local_34 [16];
  undefined8 local_24;
  int local_1c;
  double local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pDVar1 = &this->ElementCount;
  dVar9 = this->ThermalConductivity_W__m_K - Physics::RoomTemperature_K;
  dVar10 = 0.0;
  if (0.0 <= dVar9) {
    dVar10 = dVar9;
  }
  local_18 = 0.0;
  if (0.0 <= dVar10 * __real_3f747ae147ae147b) {
    local_18 = dVar10 * __real_3f747ae147ae147b;
  }
  local_18 = local_18 + 0.0;
  iVar4 = (**(code **)((this->Elements)._padding_ + 0xc))();
  if (iVar4 == 1) {
    local_10 = (double)((ulonglong)local_10 & 0xffffffff);
    pdVar5 = (double *)(**(code **)pDVar1->_padding_)((int)&local_10 + 4);
    if ((NAN(*pdVar5) || NAN(__real_3ff0000000000000)) != (*pdVar5 == __real_3ff0000000000000))
    goto LAB_006868f2;
  }
  bVar3 = IsAFluid(this);
  if (!bVar3) {
    local_34._8_8_ = util::Min<double>(pDVar1);
    dVar10 = util::Sum<double>(pDVar1);
    local_34._8_8_ = (double)local_34._8_8_ / dVar10;
    local_24 = (double)local_34._8_8_;
    if ((double)local_34._8_8_ <= __real_0000000000000000) {
      local_24 = __real_0000000000000000;
    }
    if (__real_3ff0000000000000 <= local_24) {
      local_24 = __real_3ff0000000000000;
    }
    iVar4 = (**(code **)((this->ElementCount)._padding_ + 0xc))();
    if (iVar4 == 0) {
      local_34._8_8_ = 0.0;
    }
    else {
      local_1c = 0;
      pdVar5 = (double *)(**(code **)(this->ElementCount)._padding_)(&local_1c);
      local_10 = (double)((ulonglong)local_10 & 0xffffffff);
      local_34._8_8_ = *pdVar5;
      iVar4 = (**(code **)((this->ElementCount)._padding_ + 0xc))();
      if (local_10._4_4_ < iVar4) {
        do {
          pdVar5 = (double *)(**(code **)(this->ElementCount)._padding_)((int)&local_10 + 4);
          if ((double)local_34._8_8_ <= *pdVar5) {
            local_34._8_8_ = *pdVar5;
          }
          local_10 = (double)CONCAT44(local_10._4_4_ + 1,(undefined4)local_10);
          iVar4 = (**(code **)((this->ElementCount)._padding_ + 0xc))();
        } while (local_10._4_4_ < iVar4);
      }
    }
    dVar10 = util::Sum<double>(pDVar1);
    local_34._8_8_ = (double)local_34._8_8_ / dVar10;
    dVar10 = (double)local_34._8_8_;
    if ((double)local_34._8_8_ <= __real_0000000000000000) {
      dVar10 = __real_0000000000000000;
    }
    if (__real_3ff0000000000000 <= dVar10) {
      dVar10 = __real_3ff0000000000000;
    }
    dVar10 = local_24 / dVar10;
    libm_sse2_pow_precise();
    local_24 = dVar10;
    bVar3 = IsAnAlloy(this);
    dVar10 = __real_4054000000000000;
    if (bVar3) {
      dVar10 = __real_4039000000000000;
    }
    local_18 = local_24 * 0.0 + (__real_3ff0000000000000 - local_24) * dVar10 + local_18;
  }
  if (((char)(this->MaterialMemoizationHandlerInstance).ResetFunctions._padding_ != '\0') ||
     (((0.0 < *(double *)&(this->LasingMediumProperties).Data._padding_ &&
       (0.0 < this->LasingDamageThreshold_TW__m2)) &&
      (0.0 < *(double *)&(this->LasingMediumProperties).Data)))) {
    local_18 = local_18 + __real_4044000000000000;
  }
  if (((0.0 < this->Remanence_T - __real_3ff0000000000000) && (0.0 < this->BandGap_eV)) &&
     ((bVar3 = IsAStructuralMaterial(this), bVar3 &&
      (dVar10 = 0.0, 0.0 < this->ThermoelectricSensitivity_V__K)))) {
    dVar9 = this->Remanence_T;
    if (NAN(dVar9) == (dVar9 == 0.0)) {
      dVar10 = this->BandGap_eV / (dVar9 * Physics::VacuumPermeability_H__m);
    }
    iVar4 = 4;
    local_24 = dVar10;
    do {
      local_24 = local_24 * dVar10;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    dVar9 = dVar9 - __real_3ff0000000000000;
    libm_sse2_pow_precise();
    dVar9 = dVar9 * __real_4020000000000000 + local_24 * ___real_3a2fb0f6be506019;
    dVar10 = 0.0;
    if (0.0 <= dVar9) {
      dVar10 = dVar9;
    }
    local_18 = dVar10 + local_18;
  }
  bVar3 = IsStructural(this);
  if (bVar3) {
    local_18 = this->UltimateTensileStrength_MPa * __real_3f60624dd2f1a9fc + local_18;
  }
LAB_006868f2:
  iVar6 = (**(code **)((this->ElementCount)._padding_ + 0xc))();
  iVar4 = 0;
  if (-1 < iVar6 + -1) {
    iVar4 = iVar6 + -1;
  }
  bVar3 = (char)this[1].Elements.Capacity == '\0';
  dVar10 = 0.0;
  if (0.0 <= (double)iVar4 * __real_3fe0000000000000) {
    dVar10 = (double)iVar4 * __real_3fe0000000000000;
  }
  local_18 = dVar10 + local_18;
  local_10 = local_18;
  if (bVar3) {
    CVar2 = (this->GetCategory_MemoizedValue).Data;
    local_1c = CVar2 + Nonmetal;
    util::Darray<class_util::Reflectable*>::SetSize
              ((Darray<class_util::Reflectable*> *)&(this->GetClasses_MemoizedValue).Data.Capacity,
               &local_1c);
    bVar3 = util::Darray<enum_GraphicsResource::Type>::CheckSize
                      ((Darray<enum_GraphicsResource::Type> *)
                       &(this->GetClasses_MemoizedValue).Data.Capacity,CVar2);
    if (bVar3) {
      *(code **)(*(int *)&(this->GetClasses_MemoizedValue).IsValidData + -4 +
                (this->GetCategory_MemoizedValue).Data * 4) = GetDecompositionReaction_Clear;
    }
    pCVar7 = GetDecompositionReaction_MemoizedFunction(this);
    local_24._0_5_ = CONCAT14(1,(undefined4)local_24);
    this[1].Elements.Size = (int)pCVar7;
    bVar3 = false;
    this[1].Elements.Capacity = local_24._4_4_;
  }
  if (bVar3) {
    util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if (this[1].Elements.Size != 0) {
    if ((char)this[1].Elements.Capacity == '\0') {
      CVar2 = (this->GetCategory_MemoizedValue).Data;
      local_1c = CVar2 + Nonmetal;
      util::Darray<class_util::Reflectable*>::SetSize
                ((Darray<class_util::Reflectable*> *)&(this->GetClasses_MemoizedValue).Data.Capacity
                 ,&local_1c);
      bVar3 = util::Darray<enum_GraphicsResource::Type>::CheckSize
                        ((Darray<enum_GraphicsResource::Type> *)
                         &(this->GetClasses_MemoizedValue).Data.Capacity,CVar2);
      if (bVar3) {
        *(code **)(*(int *)&(this->GetClasses_MemoizedValue).IsValidData + -4 +
                  (this->GetCategory_MemoizedValue).Data * 4) = GetDecompositionReaction_Clear;
      }
      pCVar7 = GetDecompositionReaction_MemoizedFunction(this);
      local_24._0_5_ = CONCAT14(1,(undefined4)local_24);
      this[1].Elements.Size = (int)pCVar7;
      this[1].Elements.Capacity = local_24._4_4_;
    }
    bVar3 = ChemicalReaction::IsExplosiveComposition((ChemicalReaction *)this[1].Elements.Size);
    if (bVar3) {
      if ((char)this[1].Elements.Capacity == '\0') {
        CVar2 = (this->GetCategory_MemoizedValue).Data;
        local_1c = CVar2 + Nonmetal;
        util::Darray<class_util::Reflectable*>::SetSize
                  ((Darray<class_util::Reflectable*> *)
                   &(this->GetClasses_MemoizedValue).Data.Capacity,&local_1c);
        bVar3 = util::Darray<enum_GraphicsResource::Type>::CheckSize
                          ((Darray<enum_GraphicsResource::Type> *)
                           &(this->GetClasses_MemoizedValue).Data.Capacity,CVar2);
        if (bVar3) {
          *(code **)(*(int *)&(this->GetClasses_MemoizedValue).IsValidData + -4 +
                    (this->GetCategory_MemoizedValue).Data * 4) = GetDecompositionReaction_Clear;
        }
        pCVar7 = GetDecompositionReaction_MemoizedFunction(this);
        local_24 = (double)CONCAT35(local_24._5_3_,0x100000000);
        this[1].Elements.Size = (int)pCVar7;
        this[1].Elements.Capacity = local_24._4_4_;
      }
      local_24 = *(double *)(this[1].Elements.Size + 0x68) - this->ThermalConductivity_W__m_K;
      if (local_24 <= __real_0000000000000000) {
        util::LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\materials.cpp",
                        0x410,"SafetyTemperatureGap_K > 0",(char *)0x0);
        DebugBreak();
      }
      dVar10 = local_24 / __real_406f400000000000;
      if (local_24 / __real_406f400000000000 <= __real_0000000000000000) {
        dVar10 = __real_0000000000000000;
      }
      if (__real_3ff0000000000000 <= dVar10) {
        dVar10 = __real_3ff0000000000000;
      }
      local_18 = local_10 +
                 (__real_3ff0000000000000 - dVar10) * __real_4059000000000000 +
                 dVar10 * __real_0000000000000000;
      local_10 = local_18;
    }
  }
  if (this->IsABiomaterial == false) {
    dVar10 = local_10;
    if ((__real_0000000000000000 < this->Density_kg__m3) &&
       (iVar4 = (**(code **)((this->Elements)._padding_ + 0xc))(), dVar10 = local_10, 0 < iVar4)) {
      local_24 = GetMolarMass_kg__mol(this);
      local_24 = local_24 * __real_408f400000000000;
      pMVar8 = util::Sqrt((Maybe<double> *)local_34,(double *)&local_24);
      if (pMVar8->IsValidData == false) {
        util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      dVar10 = pMVar8->Data * __real_3f947ae147ae147b;
      local_18 = 0.0;
      if (0.0 <= dVar10) {
        local_18 = dVar10;
      }
      local_18 = local_18 + local_10;
      dVar10 = local_18;
    }
    if ((this->IsPorous != false) || (this->IsFibrous != false)) {
      dVar10 = dVar10 * __real_4018000000000000;
      local_18 = dVar10;
    }
    if (this->IsNanostructured != false) {
      local_18 = dVar10 * __real_4034000000000000;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}

