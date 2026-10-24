// pilot_032_laser17.c - Laser 17 batch pilot (p89): 14/17 poison-fixed decompiles
// assembled by scripts/pilot032_assemble.py v2 from decomp2c v2 output.
// deferred (next round): GetAdvancedInfo / RenderInitialStateTransparent /
//   GetThermalLensingQualityFactor -- slice+unaff+vftable tail, VAs in log
// Honest TODOs inline; fix log: reports/poison_fix/laser17_pilot032_log.txt
#include "port_prelude.h"
typedef union {
  struct {
    undefined8 _8_8_;
  };
  struct {
    undefined1 _0_5_[5];
  };
  struct {
    undefined4 _0_4_;
    undefined4 _4_4_;
  };
  struct {
    undefined1 _5_3_[3];
  };
  undefined1 raw[32];
} slice_view;
/* ---- externs: stub-oracle names (K&R; ret types by call site) ---- */
extern double util_Min_double(); /* PDB ret double; stub era returns 0.0 */
extern double util_Sum_double(); /* PDB ret double; stub era returns 0.0 */

//==== 0067ebd0 67ebd0_Material__GetAbsorptionCrossSection_m2 ====
// decompiled by BatchDecomp @ 0067ebd0 name=GetAbsorptionCrossSection_m2 conv=__thiscall body=119

/* public: double __thiscall Material__GetAbsorptionCrossSection_m2(double)const  */

double __thiscall Material__GetAbsorptionCrossSection_m2(Material *this,double param_1)

{
  RefractiveIndexSpectrum *this_00;
  IndexOfRefraction *pIVar1;
  undefined4 unaff_ESI;
  double dVar2;
  IndexOfRefraction local_1c;
  double local_c;
  
  this_00 = *(RefractiveIndexSpectrum **)((int)&this->ExternalAngularSensitivity__m_radians + 4);
  if (this_00 == (RefractiveIndexSpectrum *)0x0) {
    local_c = 0.0;
  }
  else {
    pIVar1 = RefractiveIndexSpectrum__GetIndexOfRefraction(this_00,&local_1c,
                        (double)CONCAT44(unaff_ESI,(int)((ulonglong)param_1 >> 0x20)));
    local_c = pIVar1->ExtinctionCoefficient;
  }
  dVar2 = GetMolarMass_kg__mol(this);
  return (dVar2 * (((local_c * /*402921fb54442d18*/12.566370614359172) / (param_1 * /*3e112e0be826d695*/1e-09)) /
                  this->Density_kg__m3)) / AvogadroConstant__mol;
}


//==== 0067ee40 67ee40_Material__GetAtomicMass_amu ====
// decompiled by BatchDecomp @ 0067ee40 name=GetAtomicMass_amu conv=__thiscall body=161

/* public: double __thiscall Material__GetAtomicMass_amu(void)const  */

double __thiscall Material__GetAtomicMass_amu(Material *this)

{
  int *piVar1;
  int iVar2;
  float10 extraout_ST0;
  void *local_28;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar1 = (int *)GetElements(this);
  local_c = 0;
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  if (local_c < iVar2) {
    do {
      (**(code **)*piVar1)(&local_c);
      local_c = local_c + 1;
      iVar2 = (**(code **)(*piVar1 + 0xc))();
    } while (local_c < iVar2);
  }
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 0067ef00 67ef00_Material__GetAttenuatedRadiation ====
// decompiled by BatchDecomp @ 0067ef00 name=GetAttenuatedRadiation conv=__thiscall body=496

/* public: struct Radiation __thiscall Material__GetAttenuatedRadiation(struct
   Radiation,double)const  */

Radiation *__thiscall
Material__GetAttenuatedRadiation(Material *this,Radiation *__return_storage_ptr__,Radiation param_1,
          double param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  double dVar5;
  double dVar6;
  double dVar7;
  double local_10;
  double local_18;
  void *local_20;
  int local_c;
  uint local_8;

  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_18 = AvogadroConstant__mol * this->Density_kg__m3;
  dVar5 = local_18 / GetMolarMass_kg__mol(this);
  dVar6 = GetMicroscopicNeutronAbsorptionCrossSection_b(this,Thermal,1.0);
  dVar6 = b_to_m2(dVar6);
  dVar7 = GetMacroscopicNeutronScatteringCrossSection__m(this,Thermal,1.0);
  param_1.ThermalNeutrons_W =
     libm_sse2_exp_precise(-((dVar7 + dVar6 * dVar5) * param_2)) *
     param_1.ThermalNeutrons_W;
  dVar5 = local_18 / GetMolarMass_kg__mol(this);
  dVar6 = GetMicroscopicNeutronAbsorptionCrossSection_b(this,Fast,1.0);
  dVar6 = b_to_m2(dVar6);
  dVar7 = GetMacroscopicNeutronScatteringCrossSection__m(this,Fast,1.0);
  param_1.FastNeutrons_W =
     libm_sse2_exp_precise(-((dVar7 + dVar6 * dVar5) * param_2)) *
     param_1.FastNeutrons_W;
  piVar1 = (int *)GetElements(this);
  local_c = 0;
  local_10 = 0.0;
  iVar3 = (**(code **)(*piVar1 + 0xc))();
  if (local_c < iVar3) {
    do {
      puVar2 = (undefined4 *)(**(code **)*piVar1)(&local_c);
      local_10 = *(double *)(*puVar2 + 0xc8) * *(double *)(puVar2 + 2) + local_10;
      local_c = local_c + 1;
      iVar3 = (**(code **)(*piVar1 + 0xc))();
    } while (local_c < iVar3);
  }
  if (local_20 != (void *)0x0) {
    operator_delete__(local_20);
  }
  __return_storage_ptr__->ThermalNeutrons_W = param_1.ThermalNeutrons_W;
  __return_storage_ptr__->FastNeutrons_W = param_1.FastNeutrons_W;
  __return_storage_ptr__->GammaRays_W =
     libm_sse2_exp_precise
       (-((local_10 * /*408f400000000000*/1000.0 / /*40c3880000000000*/10000.0) *
          param_2 * this->Density_kg__m3)) * param_1.GammaRays_W;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}

//==== 0067f160 67f160_Material__GetAverageScatteringCosineComplement ====
// decompiled by BatchDecomp @ 0067f160 name=GetAverageScatteringCosineComplement conv=__thiscall body=189

/* public: double __thiscall Material__GetAverageScatteringCosineComplement(void)const  */

double __thiscall Material__GetAverageScatteringCosineComplement(Material *this)

{
  int *piVar1;
  int iVar2;
  float10 extraout_ST0;
  void *local_20;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar1 = (int *)GetElements(this);
  local_c = 0;
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  if (local_c < iVar2) {
    do {
      (**(code **)*piVar1)(&local_c);
      local_c = local_c + 1;
      iVar2 = (**(code **)(*piVar1 + 0xc))();
    } while (local_c < iVar2);
  }
  if (local_20 != (void *)0x0) {
    operator_delete__(local_20);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 0067f280 67f280_Material__GetBareSphereCriticalRadius_m ====
// decompiled by BatchDecomp @ 0067f280 name=GetBareSphereCriticalRadius_m conv=__thiscall body=603

/* public: double __thiscall Material__GetBareSphereCriticalRadius_m(void)const  */

double __thiscall Material__GetBareSphereCriticalRadius_m(Material *this)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  Element *this_00;
  Maybe_L_double_G_ *pMVar5;
  Element *this_01;
  double dVar6;
  Maybe_L_double_G_ local_4c;
  double local_3c;
  double local_34;
  undefined **local_2c;
  void *local_28;
  double local_1c;
  double local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar1 = IsAFissile(this);
  if (bVar1) {
    piVar2 = (int *)GetElements(this);
    local_c = 0;
    local_14 = 0.0;
    iVar3 = (**(code **)(*piVar2 + 0xc))();
    if (local_c < iVar3) {
      do {
        piVar4 = (int *)(**(code **)*piVar2)(&local_c);
        local_c = local_c + 1;
        local_14 = (double)*(int *)(*piVar4 + 0x1c) * *(double *)(piVar4 + 2) + local_14;
        iVar3 = (**(code **)(*piVar2 + 0xc))();
      } while (local_c < iVar3);
    }
    local_2c = (undefined **)0x91e0dc;
    if (local_28 != (void *)0x0) {
      operator_delete__(local_28);
    }
    local_28 = (void *)0x0;
    local_2c = (undefined **)0x919488;
    dVar6 = GetMacroscopicNeutronScatteringCrossSection__m
                      (this,Fast,
                       /*3ff0000000000000*/1.0
                      );
    local_14 = /*3ff0000000000000*/1.0 /
               (dVar6 * (/*3ff0000000000000*/1.0 -
                        /*4000000000000000*/2.0 / (local_14 * /*4008000000000000*/3.0)) *
               /*4008000000000000*/3.0);
    local_1c = this->Density_kg__m3 * AvogadroConstant__mol;
    dVar6 = GetMolarMass_kg__mol(this);
    local_1c = local_1c / dVar6;
    dVar6 = GetMicroscopicNeutronAbsorptionCrossSection_b
                      (this,Fast,
                       /*3ff0000000000000*/1.0
                      );
    dVar6 = b_to_m2(dVar6);
    local_34 = local_14 / (dVar6 * local_1c);
    this_00 = GetFissileElement(this);
    if ((this_00 == (Element *)0x0) ||
       (this_01 = this_00->UnenrichedElement, this_00->UnenrichedElement == (Element *)0x0)) {
      this_01 = this_00;
    }
    if (this_00 == (Element *)0x0) {
      local_1c = 0.0;
      local_14 = 0.0;
    }
    else {
      local_1c = Element__GetAverageNeutronsProducedPerFission(this_01,Fast);
      local_1c = local_1c * /*0000000000000000*/0.0;
      local_14 = Element__GetAverageNeutronsProducedPerFission(this_00,Fast);
      local_14 = local_14 + local_1c;
    }
    local_1c = GetMicroscopicNeutronFissionCrossSection_b
                         (this,Fast,
                          /*3ff0000000000000*/1.0);
    local_1c = local_1c * local_14;
    local_14 = GetMicroscopicNeutronAbsorptionCrossSection_b
                         (this,Fast,
                          /*3ff0000000000000*/1.0);
    local_3c = local_34 / (local_1c / local_14 - /*3ff0000000000000*/1.0);
    pMVar5 = util__Sqrt(&local_4c,&local_3c);
    if (pMVar5->IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    local_14 = pMVar5->Data * /*400921fb54442d18*/3.141592653589793;
  }
  else {
    local_14 = 0.0;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return local_14;
}


//==== 006803d0 6803d0_Material__GetCost_c__kg_MemoizedFunction ====
// decompiled by BatchDecomp @ 006803d0 name=GetCost_c__kg_MemoizedFunction conv=__thiscall body=718

/* private: double __thiscall Material__GetCost_c__kg_MemoizedFunction(void)const  */

double __thiscall Material__GetCost_c__kg_MemoizedFunction(Material *this)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  code *pcVar4;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  void *local_3c;
  double local_28;
  double local_18;
  undefined8 local_10;
  uint local_8;
  
  pcVar4 = DebugBreak_exref;
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((*(char *)&(this->GetClasses_MemoizedValue).Data.Data != '\0') &&
     (dVar6 = *(double *)&this->Parent, 0.0 < dVar6)) {
    local_10 = dVar6;
    if (*(char *)&(this->GetClasses_MemoizedValue).Data.Data == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x12,
                      "IsValid()",(char *)0x0);
      DebugBreak();
      local_10 = *(double *)&this->Parent;
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return local_10;
  }
  if ((0.0 < this->Density_kg__m3) &&
     (iVar1 = (**(code **)(*(int *)&this->Elements + 0xc))(), 0 < iVar1)) {
    iVar1 = (**(code **)(*(int *)&this->Elements + 0xc))();
    if (iVar1 == 0) {
      local_28 = 0.0;
    }
    else {
      piVar2 = (int *)GetElements(this);
      local_10 = (double)((ulonglong)local_10 & 0xffffffff);
      local_28 = 0.0;
      local_18 = 0.0;
      iVar1 = (**(code **)(*piVar2 + 0xc))();
      if (((slice_view *)&local_10)->_4_4_ < iVar1) {
        do {
          puVar3 = (undefined4 *)(**(code **)*piVar2)((int)&local_10 + 4);
          dVar6 = Element__GetEffectiveSolarAbundance((Element *)*puVar3);
          if (dVar6 <= 0.0) {
            dVar6 = 0.0;
          }
          else {
            dVar6 = /*3ff0000000000000*/1.0 / dVar6;
          }
          local_10 = (double)CONCAT44(((slice_view *)&local_10)->_4_4_ + 1,(undefined4)local_10);
          local_28 = *(double *)(puVar3 + 2) * dVar6 + local_28;
          iVar1 = (**(code **)(*piVar2 + 0xc))();
          pcVar4 = DebugBreak_exref;
          local_18 = local_28;
        } while (((slice_view *)&local_10)->_4_4_ < iVar1);
      }
      local_28 = GetMolarMass_kg__mol(this);
      local_28 = local_18 / local_28;
      if (local_3c != (void *)0x0) {
        operator_delete__(local_3c);
      }
    }
    local_18 = 0.0;
    dVar6 = GetHalfLife_s(this);
    if (0.0 < dVar6) {
      dVar5 = SecondsInAJulianYear_s * /*4014000000000000*/5.0;
      dVar7 = GetHalfLife_s(this);
      dVar6 = libm_sse2_log_precise(/*3fe0000000000000*/0.5);
      dVar8 = libm_sse2_log_precise(/*3fefae147ae147ae*/0.99);
      dVar6 = dVar5 / (dVar7 / (dVar6 / dVar8)) - /*3ff0000000000000*/1.0;
      local_18 = 0.0;
      if (0.0 <= dVar6) {
        local_18 = dVar6;
      }
    }
    dVar8 = GetStorageCost_c__kg(this);
    dVar6 = GetProductionCost_c__kg(this);
    dVar6 = dVar6 + dVar8 + local_18 + local_28;
    if (dVar6 <= 0.0) {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\materials.cpp",
                      0x462,"TotalCost_c__kg > 0.",(char *)0x0);
      (*pcVar4)();
    }
    if ((NAN(dVar6)) || ((NAN(dVar6) == (dVar6 == 0.0) && (NAN(dVar6 / dVar6))))) {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\materials.cpp",
                      0x463,"IsNumericallyValid(TotalCost_c__kg)",(char *)0x0);
      (*pcVar4)();
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return dVar6;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return 0.0;
}


//==== 00680860 680860_Material__GetDecayEnergy_eV ====
// decompiled by BatchDecomp @ 00680860 name=GetDecayEnergy_eV conv=__thiscall body=176

/* public: double __thiscall Material__GetDecayEnergy_eV(void)const  */

double __thiscall Material__GetDecayEnergy_eV(Material *this)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 extraout_ST0;
  void *local_20;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar1 = (int *)GetElements(this);
  local_c = 0;
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  if (local_c < iVar2) {
    do {
      puVar3 = (undefined4 *)(**(code **)*piVar1)(&local_c);
      Element__GetTotalDecayEnergy_eV((Element *)*puVar3);
      local_c = local_c + 1;
      iVar2 = (**(code **)(*piVar1 + 0xc))();
    } while (local_c < iVar2);
  }
  util_Sum_double(&this->ElementCount);
  if (local_20 != (void *)0x0) {
    operator_delete__(local_20);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00682bf0 682bf0_Material__GetDissociationFraction ====
// decompiled by BatchDecomp @ 00682bf0 name=GetDissociationFraction conv=__thiscall body=65

/* public: double __thiscall Material__GetDissociationFraction(double,double)const  */

double __thiscall Material__GetDissociationFraction(Material *this,double param_1,double param_2)

{
  undefined4 unaff_EDI;
  double dVar1;
  
  if (*(char *)&this->ExternalAngularSensitivity__m_radians != '\0') {
    dVar1 = DissociationReaction__GetDissociationFraction((DissociationReaction *)&(this->Dissociation).Data.Products,this,
                       (double)CONCAT44(SUB84(param_2,0),(int)((ulonglong)param_1 >> 0x20)),
                       (double)CONCAT44(unaff_EDI,(int)((ulonglong)param_2 >> 0x20)));
    return dVar1;
  }
  return 0.0;
}


//==== 006830b0 6830b0_Material__GetEmissionPower_W ====
// decompiled by BatchDecomp @ 006830b0 name=GetEmissionPower_W conv=__thiscall body=724

/* public: double __thiscall Material__GetEmissionPower_W(double,double)const  */

double __thiscall Material__GetEmissionPower_W(Material *this,double param_1,double param_2)

{
  Category CVar1;
  bool bVar2;
  int iVar3;
  Darray_L_double_G_ *pDVar4;
  Darray_L_double_G_ *pDVar5;
  double *pdVar6;
  code *pcVar7;
  float10 extraout_ST0;
  Darray_L_double_G_ local_3c;
  bool local_2c;
  undefined1 local_28[8];
  undefined8 local_20;
  int local_18;
  int local_14;
  double local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar3 = (int)((param_1 / /*40b3880000000000*/5000.0) * /*4049000000000000*/50.0);
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  local_18 = 0x32;
  if (iVar3 < 0x32) {
    local_18 = iVar3;
  }
  iVar3 = local_18 + 1;
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  local_14 = 0x32;
  if (iVar3 < 0x32) {
    local_14 = iVar3;
  }
  local_10 = (param_1 - (double)local_18 * /*4059000000000000*/100.0) / /*4059000000000000*/100.0;
  if (local_10 <= /*0000000000000000*/0.0) {
    local_10 = /*0000000000000000*/0.0;
  }
  if (/*3ff0000000000000*/1.0 <= local_10) {
    local_10 = /*3ff0000000000000*/1.0;
  }
  bVar2 = HasEmissionSpectra(this);
  if (bVar2) {
    if ((this->GetDecompositionReaction_MemoizedValue).IsValidData == false) {
      CVar1 = (this->GetCategory_MemoizedValue).Data;
      ((slice_view *)&local_20)->_4_4_ = CVar1 + Nonmetal;
      util__Darray_class_util__Reflectable____SetSize
                ((Darray_L_util__Reflectable_P_G_ *)&(this->GetClasses_MemoizedValue).Data.Capacity
                 ,(int *)((int)&local_20 + 4));
      bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                        ((Darray_L_GraphicsResource__Type_G_ *)
                         &(this->GetClasses_MemoizedValue).Data.Capacity,CVar1);
      if (bVar2) {
        *(code **)(*(int *)&(this->GetClasses_MemoizedValue).IsValidData + -4 +
                  (this->GetCategory_MemoizedValue).Data * 4) = Material__GetEmissivePowers_W_Clear;
      }
      pDVar4 = GetEmissivePowers_W_MemoizedFunction(this,(Darray_L_double_G_ *)local_28);
      util__Darray_double___Darray_double(&local_3c,pDVar4);
      local_2c = true;
      util__Darray_double___operator
                ((Darray_L_double_G_ *)((int)&(this->GetCost_CU__kg_MemoizedValue).Data + 4),&local_3c);
      (this->GetDecompositionReaction_MemoizedValue).IsValidData = local_2c;
      local_3c._pad_0x0_0 = 0x91da54;
      if (local_3c.Data != (double *)0x0) {
        operator_delete__(local_3c.Data);
      }
      local_3c.Data = (double *)0x0;
      local_3c._pad_0x0_0 = 0x919488;
      ((slice_view *)&local_28)->_0_4_ = 0x91da54;
      if ((double *)((slice_view *)&local_28)->_4_4_ != (double *)0x0) {
        operator_delete__((void *)((slice_view *)&local_28)->_4_4_);
      }
      ((slice_view *)&local_28)->_4_4_ = (double *)0x0;
      ((slice_view *)&local_28)->_0_4_ = 0x919488;
    }
    pcVar7 = DebugBreak_exref;
    pDVar4 = (Darray_L_double_G_ *)((int)&(this->GetCost_CU__kg_MemoizedValue).Data + 4);
    if ((this->GetDecompositionReaction_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if ((this->GetDecompositionReaction_MemoizedValue).IsValidData == false) {
      CVar1 = (this->GetCategory_MemoizedValue).Data;
      ((slice_view *)&local_20)->_4_4_ = CVar1 + Nonmetal;
      util__Darray_class_util__Reflectable____SetSize
                ((Darray_L_util__Reflectable_P_G_ *)&(this->GetClasses_MemoizedValue).Data.Capacity
                 ,(int *)((int)&local_20 + 4));
      bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                        ((Darray_L_GraphicsResource__Type_G_ *)
                         &(this->GetClasses_MemoizedValue).Data.Capacity,CVar1);
      if (bVar2) {
        *(code **)(*(int *)&(this->GetClasses_MemoizedValue).IsValidData + -4 +
                  (this->GetCategory_MemoizedValue).Data * 4) = Material__GetEmissivePowers_W_Clear;
      }
      pDVar5 = GetEmissivePowers_W_MemoizedFunction(this,(Darray_L_double_G_ *)local_28);
      util__Darray_double___Darray_double(&local_3c,pDVar5);
      local_2c = true;
      util__Darray_double___operator(pDVar4,&local_3c);
      (this->GetDecompositionReaction_MemoizedValue).IsValidData = local_2c;
      local_3c._pad_0x0_0 = 0x91da54;
      if (local_3c.Data != (double *)0x0) {
        operator_delete__(local_3c.Data);
      }
      local_3c.Data = (double *)0x0;
      local_3c._pad_0x0_0 = 0x919488;
      ((slice_view *)&local_28)->_0_4_ = 0x91da54;
      if ((double *)((slice_view *)&local_28)->_4_4_ != (double *)0x0) {
        operator_delete__((void *)((slice_view *)&local_28)->_4_4_);
      }
      ((slice_view *)&local_28)->_4_4_ = (double *)0x0;
      ((slice_view *)&local_28)->_0_4_ = 0x919488;
      pcVar7 = DebugBreak_exref;
    }
    if ((this->GetDecompositionReaction_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      (*pcVar7)();
    }
    pdVar6 = (double *)(**(code **)*(int *)pDVar4)(&local_18);
    local_20 = *pdVar6;
    pdVar6 = (double *)(**(code **)*(int *)pDVar4)(&local_14);
    local_20 = ((/*3ff0000000000000*/1.0 - local_10) * local_20 + *pdVar6 * local_10) * param_2;
  }
  else {
    local_20 = 0.0;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00683a20 683a20_Material__GetEmissiveRadiativeColor ====
// decompiled by BatchDecomp @ 00683a20 name=GetEmissiveRadiativeColor conv=__thiscall body=373

/* public: struct util::Vec3<float> __thiscall
   Material__GetEmissiveRadiativeColor(double,double,double)const  */

Vec3_L_float_G_ *__thiscall
Material__GetEmissiveRadiativeColor(Material *this,Vec3_L_float_G_ *__return_storage_ptr__,
          double param_1,double param_2,double param_3)

{
  double dVar1;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar2;
  float fVar3;
  Vec3_L_float_G_ local_44;
  Vec3_L_float_G_ local_38;

  dVar5 = Physics__GetBlackbodyRadiation_W(param_2,/*3ff0000000000000*/1.0,param_1);
  dVar1 = param_2 * param_3;
  dVar6 = GetEmissionPower_W(this,param_1,dVar1);
  dVar7 = Physics__GetBlackbodyRadiation_W(param_2,/*3ff0000000000000*/1.0,param_1);
  fVar2 = (float)(dVar5 / (dVar6 + dVar7));
  Physics__GetBlackbodyRadiationColor(&local_38,param_1);
  Material__GetEmissionColor(this,&local_44,param_1,dVar1);
  fVar3 = /*3f800000*/1.0f - fVar2;
  __return_storage_ptr__->X = fVar3 * local_44.X + local_38.X * fVar2;
  __return_storage_ptr__->Y = fVar3 * local_44.Y + local_38.Y * fVar2;
  __return_storage_ptr__->Z = fVar3 * local_44.Z + local_38.Z * fVar2;
  return __return_storage_ptr__;
}

//==== 00684000 684000_Material__GetFirstIonizationEnergy_kJ__mol ====
// decompiled by BatchDecomp @ 00684000 name=GetFirstIonizationEnergy_kJ__mol conv=__thiscall body=178

/* public: double __thiscall Material__GetFirstIonizationEnergy_kJ__mol(void)const  */

double __thiscall Material__GetFirstIonizationEnergy_kJ__mol(Material *this)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  double local_10;
  void *local_28;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar1 = (int *)GetElements(this);
  local_c = 0;
  local_10 = 0.0;
  iVar3 = (**(code **)(*piVar1 + 0xc))();
  if (local_c < iVar3) {
    do {
      puVar2 = (undefined4 *)(**(code **)*piVar1)(&local_c);
      local_10 = *(double *)(*puVar2 + 0x38) * *(double *)(puVar2 + 2) + local_10;
      local_c = local_c + 1;
      iVar3 = (**(code **)(*piVar1 + 0xc))();
    } while (local_c < iVar3);
  }
  local_10 = local_10 / util_Sum_double(&this->ElementCount);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return local_10;
}


//==== 00684230 684230_Material__GetGammaAttenuation ====
// decompiled by BatchDecomp @ 00684230 name=GetGammaAttenuation conv=__thiscall body=210

/* public: double __thiscall Material__GetGammaAttenuation(double)const  */

double __thiscall Material__GetGammaAttenuation(Material *this,double param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  double local_10;
  void *local_20;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar1 = (int *)GetElements(this);
  local_c = 0;
  local_10 = 0.0;
  iVar3 = (**(code **)(*piVar1 + 0xc))();
  if (local_c < iVar3) {
    do {
      puVar2 = (undefined4 *)(**(code **)*piVar1)(&local_c);
      local_10 = *(double *)(*puVar2 + 0xc8) * *(double *)(puVar2 + 2) + local_10;
      local_c = local_c + 1;
      iVar3 = (**(code **)(*piVar1 + 0xc))();
    } while (local_c < iVar3);
  }
  if (local_20 != (void *)0x0) {
    operator_delete__(local_20);
  }
  local_10 = libm_sse2_exp_precise(
    -(local_10 * /*408f400000000000*/1000.0 / /*40c3880000000000*/10000.0 * param_1 *
      this->Density_kg__m3));
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return local_10;
}


//==== 00684310 684310_Material__GetGammaDecay_W__kg ====
// decompiled by BatchDecomp @ 00684310 name=GetGammaDecay_W__kg conv=__thiscall body=324

/* public: double __thiscall Material__GetGammaDecay_W__kg(void)const  */

double __thiscall Material__GetGammaDecay_W__kg(Material *this)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  double dVar4;
  double local_14;
  double local_1c;
  double local_24;
  double local_10;
  void *local_34;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = libm_sse2_log_precise(/*4000000000000000*/2.0);
  dVar4 = GetHalfLife_s(this);
  local_14 = dVar4 / local_10;
  if (0.0 < local_14) {
    local_14 = 1.0 / (GetHalfLife_s(this) / local_10);
  }
  else {
    local_14 = 0.0;
  }
  piVar1 = (int *)GetElements(this);
  local_c = 0;
  local_24 = 0.0;
  local_1c = 0.0;
  iVar3 = (**(code **)(*piVar1 + 0xc))();
  if (local_c < iVar3) {
    do {
      puVar2 = (undefined4 *)(**(code **)*piVar1)(&local_c);
      local_24 = *(double *)(*puVar2 + 0x58) * /*408f400000000000*/1000.0 *
                 *(double *)(puVar2 + 2) + local_24;
      local_1c = local_24;
      local_c = local_c + 1;
      iVar3 = (**(code **)(*piVar1 + 0xc))();
    } while (local_c < iVar3);
  }
  local_1c = local_1c / util_Sum_double(&this->ElementCount);
  if (local_34 != (void *)0x0) {
    operator_delete__(local_34);
  }
  local_1c = local_1c * local_14;
  local_14 = local_1c * JoulesInAnElectronVolt_J__eV * AvogadroConstant__mol;
  return local_14 / GetMolarMass_kg__mol(this);
}


//==== 00684930 684930_Material__GetHalfLife_s ====
// decompiled by BatchDecomp @ 00684930 name=GetHalfLife_s conv=__thiscall body=263

/* public: double __thiscall Material__GetHalfLife_s(void)const  */

double __thiscall Material__GetHalfLife_s(Material *this)

{
  Darray_L_Element__P_G_ *pDVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  float10 extraout_ST0;
  Darray_L_double_G_ local_28;
  undefined8 local_18;
  undefined1 local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pDVar1 = &this->Elements;
  bVar3 = false;
  local_18 = (double)(ulonglong)(uint)local_18;
  iVar4 = (**(code **)(*(int *)pDVar1 + 0xc))();
  if (iVar4 == 0) {
    local_18 = 0.0;
  }
  else {
    local_10 = 0;
    local_28._pad_0x0_0 = 0;
    local_28.Data = (double *)0x0;
    local_28.Size = 0;
    local_28.Capacity = 0;
    iVar4 = (**(code **)(*(int *)pDVar1 + 0xc))();
    util__Darray_double___Darray_double(&local_28,iVar4);
    local_c = 0;
    iVar4 = (**(code **)(*(int *)pDVar1 + 0xc))();
    if (local_c < iVar4) {
      do {
        piVar5 = (int *)(**(code **)*(int *)pDVar1)(&local_c);
        iVar4 = local_28.Size;
        dVar2 = *(double *)(*piVar5 + 0x40);
        if (0.0 < dVar2) {
          local_18 = (double)CONCAT44(local_28.Size + 1,(uint)local_18);
          util__Darray_double___SetSize(&local_28,(int *)((int)&local_18 + 4));
          bVar3 = util__Darray_double___CheckSize(&local_28,iVar4);
          if (bVar3) {
            local_28.Data[local_28.Size + -1] = dVar2;
          }
        }
        local_c = local_c + 1;
        iVar4 = (**(code **)(*(int *)pDVar1 + 0xc))();
      } while (local_c < iVar4);
    }
    local_18 = util_Min_double(&local_28);
    bVar3 = true;
  }
  if ((bVar3) &&
     (local_28._pad_0x0_0 = 0x91da54, local_28.Data != (double *)0x0)) {
    operator_delete__(local_28.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return local_18;
}


//==== 00684d80 684d80_Material__GetLogarithmicEnergyDecrement ====
// decompiled by BatchDecomp @ 00684d80 name=GetLogarithmicEnergyDecrement conv=__thiscall body=171

/* public: double __thiscall Material__GetLogarithmicEnergyDecrement(void)const  */

double __thiscall Material__GetLogarithmicEnergyDecrement(Material *this)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 extraout_ST0;
  void *local_20;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar1 = (int *)GetElements(this);
  local_c = 0;
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  if (local_c < iVar2) {
    do {
      puVar3 = (undefined4 *)(**(code **)*piVar1)(&local_c);
      Element__GetLogarithmicEnergyDecrement((Element *)*puVar3);
      local_c = local_c + 1;
      iVar2 = (**(code **)(*piVar1 + 0xc))();
    } while (local_c < iVar2);
  }
  util_Sum_double(&this->ElementCount);
  if (local_20 != (void *)0x0) {
    operator_delete__(local_20);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00684e30 684e30_Material__GetMacroscopicNeutronAbsorptionCrossSection__m ====
// decompiled by BatchDecomp @ 00684e30 name=GetMacroscopicNeutronAbsorptionCrossSection__m conv=__thiscall body=85

/* public: double __thiscall Material__GetMacroscopicNeutronAbsorptionCrossSection__m(enum
   FissionType,double)const  */

double __thiscall
Material__GetMacroscopicNeutronAbsorptionCrossSection__m(Material *this,FissionType param_1,double param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = this->Density_kg__m3 * AvogadroConstant__mol;
  dVar2 = GetMolarMass_kg__mol(this);
  dVar3 = GetMicroscopicNeutronAbsorptionCrossSection_b
                    (this,param_1,param_2);
  dVar3 = b_to_m2(dVar3);
  return dVar3 * (dVar1 / dVar2);
}


//==== 00684e90 684e90_Material__GetMacroscopicNeutronFissionCrossSection__m ====
// decompiled by BatchDecomp @ 00684e90 name=GetMacroscopicNeutronFissionCrossSection__m conv=__thiscall body=85

/* public: double __thiscall Material__GetMacroscopicNeutronFissionCrossSection__m(enum
   FissionType,double)const  */

double __thiscall
Material__GetMacroscopicNeutronFissionCrossSection__m(Material *this,FissionType param_1,double param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = this->Density_kg__m3 * AvogadroConstant__mol;
  dVar2 = GetMolarMass_kg__mol(this);
  dVar3 = GetMicroscopicNeutronFissionCrossSection_b
                    (this,param_1,param_2);
  dVar3 = b_to_m2(dVar3);
  return dVar3 * (dVar1 / dVar2);
}


//==== 00684ef0 684ef0_Material__GetMacroscopicNeutronScatteringCrossSection__m ====
// decompiled by BatchDecomp @ 00684ef0 name=GetMacroscopicNeutronScatteringCrossSection__m conv=__thiscall body=302

/* public: double __thiscall Material__GetMacroscopicNeutronScatteringCrossSection__m(enum
   FissionType,double)const  */

double __thiscall
Material__GetMacroscopicNeutronScatteringCrossSection__m(Material *this,FissionType param_1,double param_2)

{
  Element *pEVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  Element *this_00;
  double dVar5;
  double dVar6;
  double dVar7;
  void *local_34;
  double local_28;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  dVar5 = this->Density_kg__m3 * AvogadroConstant__mol;
  dVar6 = GetMolarMass_kg__mol(this);
  dVar5 = dVar5 / dVar6;
  piVar2 = (int *)GetElements(this);
  local_c = 0;
  local_28 = 0.0;
  iVar3 = (**(code **)(*piVar2 + 0xc))();
  if (local_c < iVar3) {
    do {
      piVar4 = (int *)(**(code **)*piVar2)(&local_c);
      pEVar1 = ((Element *)*piVar4)->UnenrichedElement;
      this_00 = (Element *)*piVar4;
      if (pEVar1 != (Element *)0x0) {
        this_00 = pEVar1;
      }
      dVar6 = Element__GetMicroscopicNeutronScatteringCrossSection_b(this_00,param_1);
      dVar5 = /*3ff0000000000000*/1.0 - param_2;
      dVar7 = Element__GetMicroscopicNeutronScatteringCrossSection_b((Element *)*piVar4,param_1);
      local_c = local_c + 1;
      local_28 = *(double *)(piVar4 + 2) *
                 (dVar7 * param_2 + dVar6 * dVar5) +
                 local_28;
      iVar3 = (**(code **)(*piVar2 + 0xc))();
    } while (local_c < iVar3);
  }
  if (local_34 != (void *)0x0) {
    operator_delete__(local_34);
  }
  return b_to_m2(local_28) * dVar5;
}


//==== 00685020 685020_Material__GetMacroscopicResonanceIntegralAbsorptionCrossSection__m ====
// decompiled by BatchDecomp @ 00685020 name=GetMacroscopicResonanceIntegralAbsorptionCrossSection__m conv=__thiscall body=286

/* public: double __thiscall
   Material__GetMacroscopicResonanceIntegralAbsorptionCrossSection__m(double)const  */

double __thiscall
Material__GetMacroscopicResonanceIntegralAbsorptionCrossSection__m(Material *this,double param_1)

{
  Element *pEVar1;
  double dVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  Element *this_00;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  float10 extraout_ST0;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  void *local_30;
  double local_24;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  uVar9 = CONCAT44(unaff_ESI,unaff_EDI);
  dVar6 = this->Density_kg__m3 * AvogadroConstant__mol;
  dVar7 = GetMolarMass_kg__mol(this);
  dVar2 = /*3ff0000000000000*/1.0;
  dVar6 = dVar6 / dVar7;
  piVar3 = (int *)GetElements(this);
  local_c = 0;
  local_24 = 0.0;
  iVar4 = (**(code **)(*piVar3 + 0xc))(uVar9,dVar6);
  if (local_c < iVar4) {
    do {
      piVar5 = (int *)(**(code **)*piVar3)(&local_c);
      pEVar1 = ((Element *)*piVar5)->UnenrichedElement;
      this_00 = (Element *)*piVar5;
      if (pEVar1 != (Element *)0x0) {
        this_00 = pEVar1;
      }
      dVar7 = Element__GetResonanceIntegralAbsorptionCrossSection_b(this_00);
      dVar6 = /*3ff0000000000000*/1.0 - dVar2;
      dVar8 = Element__GetResonanceIntegralAbsorptionCrossSection_b((Element *)*piVar5);
      local_c = local_c + 1;
      local_24 = *(double *)(piVar5 + 2) * (dVar8 * dVar2 + dVar7 * dVar6) + local_24;
      iVar4 = (**(code **)(*piVar3 + 0xc))();
    } while (local_c < iVar4);
  }
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
  }
  b_to_m2(local_24);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00685140 685140_Material__GetMacroscopicSlowingDownPower ====
// decompiled by BatchDecomp @ 00685140 name=GetMacroscopicSlowingDownPower conv=__thiscall body=44

/* public: double __thiscall Material__GetMacroscopicSlowingDownPower(double)const  */

double __thiscall Material__GetMacroscopicSlowingDownPower(Material *this,double param_1)

{
  undefined4 unaff_ESI;
  double dVar1;
  double dVar2;
  
  dVar1 = GetMacroscopicNeutronScatteringCrossSection__m
                    (this,Fast,(double)CONCAT44(unaff_ESI,(int)((ulonglong)param_1 >> 0x20)));
  dVar2 = GetLogarithmicEnergyDecrement(this);
  return dVar2 * dVar1;
}


//==== 00685570 685570_Material__GetMicroscopicNeutronAbsorptionCrossSection_b ====
// decompiled by BatchDecomp @ 00685570 name=GetMicroscopicNeutronAbsorptionCrossSection_b conv=__thiscall body=224

/* public: double __thiscall Material__GetMicroscopicNeutronAbsorptionCrossSection_b(enum
   FissionType,double)const  */

double __thiscall
Material__GetMicroscopicNeutronAbsorptionCrossSection_b(Material *this,FissionType param_1,double param_2)

{
  Element *pEVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  Element *this_00;
  float10 extraout_ST0;
  void *local_28;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar2 = (int *)GetElements(this);
  local_c = 0;
  iVar3 = (**(code **)(*piVar2 + 0xc))();
  if (local_c < iVar3) {
    do {
      piVar4 = (int *)(**(code **)*piVar2)(&local_c);
      pEVar1 = ((Element *)*piVar4)->UnenrichedElement;
      this_00 = (Element *)*piVar4;
      if (pEVar1 != (Element *)0x0) {
        this_00 = pEVar1;
      }
      Element__GetMicroscopicNeutronAbsorptionCrossSection_b(this_00,param_1);
      Element__GetMicroscopicNeutronAbsorptionCrossSection_b((Element *)*piVar4,param_1);
      local_c = local_c + 1;
      iVar3 = (**(code **)(*piVar2 + 0xc))();
    } while (local_c < iVar3);
  }
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00685650 685650_Material__GetMicroscopicNeutronFissionCrossSection_b ====
// decompiled by BatchDecomp @ 00685650 name=GetMicroscopicNeutronFissionCrossSection_b conv=__thiscall body=224

/* public: double __thiscall Material__GetMicroscopicNeutronFissionCrossSection_b(enum
   FissionType,double)const  */

double __thiscall
Material__GetMicroscopicNeutronFissionCrossSection_b(Material *this,FissionType param_1,double param_2)

{
  Element *pEVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  Element *this_00;
  float10 extraout_ST0;
  void *local_28;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar2 = (int *)GetElements(this);
  local_c = 0;
  iVar3 = (**(code **)(*piVar2 + 0xc))();
  if (local_c < iVar3) {
    do {
      piVar4 = (int *)(**(code **)*piVar2)(&local_c);
      pEVar1 = ((Element *)*piVar4)->UnenrichedElement;
      this_00 = (Element *)*piVar4;
      if (pEVar1 != (Element *)0x0) {
        this_00 = pEVar1;
      }
      Element__GetMicroscopicNeutronFissionCrossSection_b(this_00,param_1);
      Element__GetMicroscopicNeutronFissionCrossSection_b((Element *)*piVar4,param_1);
      local_c = local_c + 1;
      iVar3 = (**(code **)(*piVar2 + 0xc))();
    } while (local_c < iVar3);
  }
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00685730 685730_Material__GetMicroscopicNeutronScatteringCrossSection_b ====
// decompiled by BatchDecomp @ 00685730 name=GetMicroscopicNeutronScatteringCrossSection_b conv=__thiscall body=224

/* public: double __thiscall Material__GetMicroscopicNeutronScatteringCrossSection_b(enum
   FissionType,double)const  */

double __thiscall
Material__GetMicroscopicNeutronScatteringCrossSection_b(Material *this,FissionType param_1,double param_2)

{
  Element *pEVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  Element *this_00;
  float10 extraout_ST0;
  void *local_28;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar2 = (int *)GetElements(this);
  local_c = 0;
  iVar3 = (**(code **)(*piVar2 + 0xc))();
  if (local_c < iVar3) {
    do {
      piVar4 = (int *)(**(code **)*piVar2)(&local_c);
      pEVar1 = ((Element *)*piVar4)->UnenrichedElement;
      this_00 = (Element *)*piVar4;
      if (pEVar1 != (Element *)0x0) {
        this_00 = pEVar1;
      }
      Element__GetMicroscopicNeutronScatteringCrossSection_b(this_00,param_1);
      Element__GetMicroscopicNeutronScatteringCrossSection_b((Element *)*piVar4,param_1);
      local_c = local_c + 1;
      iVar3 = (**(code **)(*piVar2 + 0xc))();
    } while (local_c < iVar3);
  }
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00685810 685810_Material__GetMicroscopicNeutronTotalCrossSection_b ====
// decompiled by BatchDecomp @ 00685810 name=GetMicroscopicNeutronTotalCrossSection_b conv=__thiscall body=224

/* public: double __thiscall Material__GetMicroscopicNeutronTotalCrossSection_b(enum
   FissionType,double)const  */

double __thiscall
Material__GetMicroscopicNeutronTotalCrossSection_b(Material *this,FissionType param_1,double param_2)

{
  Element *pEVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  Element *this_00;
  float10 extraout_ST0;
  void *local_28;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar2 = (int *)GetElements(this);
  local_c = 0;
  iVar3 = (**(code **)(*piVar2 + 0xc))();
  if (local_c < iVar3) {
    do {
      piVar4 = (int *)(**(code **)*piVar2)(&local_c);
      pEVar1 = ((Element *)*piVar4)->UnenrichedElement;
      this_00 = (Element *)*piVar4;
      if (pEVar1 != (Element *)0x0) {
        this_00 = pEVar1;
      }
      Element__GetMicroscopicNeutronTotalCrossSection_b(this_00,param_1);
      Element__GetMicroscopicNeutronTotalCrossSection_b((Element *)*piVar4,param_1);
      local_c = local_c + 1;
      iVar3 = (**(code **)(*piVar2 + 0xc))();
    } while (local_c < iVar3);
  }
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00685910 685910_Material__GetMixtureDensity_kg__m3 ====
// decompiled by BatchDecomp @ 00685910 name=GetMixtureDensity_kg__m3 conv=__cdecl body=196

/* public: static double __cdecl Material__GetMixtureDensity_kg__m3(class util::Darray<struct
   MaterialConstituent> const &) */

double __cdecl Material__GetMixtureDensity_kg__m3(Darray_L_struct_MaterialConstituent_G_ *param_1)

{
  int iVar1;
  float10 extraout_ST0;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
  if (local_c < iVar1) {
    do {
      (*(code *)**(undefined4 **)param_1)(&local_c);
      local_c = local_c + 1;
      iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
    } while (local_c < iVar1);
  }
  local_10 = 0;
  iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
  if (local_10 < iVar1) {
    do {
      (*(code *)**(undefined4 **)param_1)(&local_10);
      local_10 = local_10 + 1;
      iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
    } while (local_10 < iVar1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 006859e0 6859e0_Material__GetMixtureIndexOfRefraction ====
// decompiled by BatchDecomp @ 006859e0 name=GetMixtureIndexOfRefraction conv=__cdecl body=243

/* public: static double __cdecl Material__GetMixtureIndexOfRefraction(class util::Darray<struct
   MaterialConstituent> const &,double) */

double __cdecl
Material__GetMixtureIndexOfRefraction(Darray_L_struct_MaterialConstituent_G_ *param_1,double param_2)

{
  int iVar1;
  int *piVar2;
  IndexOfRefraction *pIVar3;
  double dVar4;
  int *piVar5;
  IndexOfRefraction local_38;
  double local_28;
  double local_20;
  double local_18;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_28 = 0.0;
  local_20 = 0.0;
  local_c = 0;
  iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
  if (local_c < iVar1) {
    do {
      piVar5 = &local_c;
      piVar2 = (int *)(*(code *)**(undefined4 **)param_1)(piVar5);
      local_18 = *(double *)(piVar2 + 2);
      dVar4 = /*3ff0000000000000*/1.0;
      if (*(RefractiveIndexSpectrum **)(*piVar2 + 0x134) != (RefractiveIndexSpectrum *)0x0) {
        pIVar3 = RefractiveIndexSpectrum__GetIndexOfRefraction(*(RefractiveIndexSpectrum **)(*piVar2 + 0x134),&local_38,
                            param_2);
        dVar4 = pIVar3->RefractionIndex;
      }
      local_c = local_c + 1;
      local_20 = dVar4 * local_18 + local_20;
      iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
    } while (local_c < iVar1);
  }
  local_18 = 0.0;
  local_10 = 0;
  iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
  if (local_10 < iVar1) {
    do {
      iVar1 = (*(code *)**(undefined4 **)param_1)(&local_10);
      local_28 = *(double *)(iVar1 + 8) + local_28;
      local_10 = local_10 + 1;
      local_18 = local_28;
      iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
    } while (local_10 < iVar1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return local_20 / local_18;
}


//==== 00685ae0 685ae0_Material__GetMixtureMolarMass_kg__mol ====
// decompiled by BatchDecomp @ 00685ae0 name=GetMixtureMolarMass_kg__mol conv=__cdecl body=215

/* public: static double __cdecl Material__GetMixtureMolarMass_kg__mol(class util::Darray<struct
   MaterialConstituent> const &) */

double __cdecl Material__GetMixtureMolarMass_kg__mol(Darray_L_struct_MaterialConstituent_G_ *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  float10 extraout_ST0;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
  if (local_c < iVar1) {
    do {
      puVar2 = (undefined4 *)(*(code *)**(undefined4 **)param_1)(&local_c);
      GetMolarMass_kg__mol((Material *)*puVar2);
      local_c = local_c + 1;
      iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
    } while (local_c < iVar1);
  }
  local_10 = 0;
  iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
  if (local_10 < iVar1) {
    do {
      (*(code *)**(undefined4 **)param_1)(&local_10);
      local_10 = local_10 + 1;
      iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
    } while (local_10 < iVar1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00685bc0 685bc0_Material__GetMixtureSpecificGasConstant_J__kg_K ====
// decompiled by BatchDecomp @ 00685bc0 name=GetMixtureSpecificGasConstant_J__kg_K conv=__cdecl body=221

/* public: static double __cdecl Material__GetMixtureSpecificGasConstant_J__kg_K(class
   util::Darray<struct MaterialConstituent> const &) */

double __cdecl
Material__GetMixtureSpecificGasConstant_J__kg_K(Darray_L_struct_MaterialConstituent_G_ *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  float10 extraout_ST0;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
  if (local_c < iVar1) {
    do {
      puVar2 = (undefined4 *)(*(code *)**(undefined4 **)param_1)(&local_c);
      GetMolarMass_kg__mol((Material *)*puVar2);
      local_c = local_c + 1;
      iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
    } while (local_c < iVar1);
  }
  local_10 = 0;
  iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
  if (local_10 < iVar1) {
    do {
      (*(code *)**(undefined4 **)param_1)(&local_10);
      local_10 = local_10 + 1;
      iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
    } while (local_10 < iVar1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00685ca0 685ca0_Material__GetMixtureSpecificHeat_J__kg_K ====
// decompiled by BatchDecomp @ 00685ca0 name=GetMixtureSpecificHeat_J__kg_K conv=__cdecl body=199

/* public: static double __cdecl Material__GetMixtureSpecificHeat_J__kg_K(class util::Darray<struct
   MaterialConstituent> const &) */

double __cdecl Material__GetMixtureSpecificHeat_J__kg_K(Darray_L_struct_MaterialConstituent_G_ *param_1)

{
  int iVar1;
  float10 extraout_ST0;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
  if (local_c < iVar1) {
    do {
      (*(code *)**(undefined4 **)param_1)(&local_c);
      local_c = local_c + 1;
      iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
    } while (local_c < iVar1);
  }
  local_10 = 0;
  iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
  if (local_10 < iVar1) {
    do {
      (*(code *)**(undefined4 **)param_1)(&local_10);
      local_10 = local_10 + 1;
      iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
    } while (local_10 < iVar1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00685d70 685d70_Material__GetMixtureSummedEnthalpyOfFormation_J__mol ====
// decompiled by BatchDecomp @ 00685d70 name=GetMixtureSummedEnthalpyOfFormation_J__mol conv=__cdecl body=128

/* public: static double __cdecl Material__GetMixtureSummedEnthalpyOfFormation_J__mol(class
   util::Darray<struct MaterialConstituent> const &) */

double __cdecl
Material__GetMixtureSummedEnthalpyOfFormation_J__mol(Darray_L_struct_MaterialConstituent_G_ *param_1)

{
  int iVar1;
  float10 extraout_ST0;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
  if (local_c < iVar1) {
    do {
      (*(code *)**(undefined4 **)param_1)(&local_c);
      local_c = local_c + 1;
      iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
    } while (local_c < iVar1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00685df0 685df0_Material__GetMixtureSummedGibbsFreeEnergyOfFormation_J__mol ====
// decompiled by BatchDecomp @ 00685df0 name=GetMixtureSummedGibbsFreeEnergyOfFormation_J__mol conv=__cdecl body=131

/* public: static double __cdecl Material__GetMixtureSummedGibbsFreeEnergyOfFormation_J__mol(class
   util::Darray<struct MaterialConstituent> const &) */

double __cdecl
Material__GetMixtureSummedGibbsFreeEnergyOfFormation_J__mol(Darray_L_struct_MaterialConstituent_G_ *param_1)

{
  int iVar1;
  float10 extraout_ST0;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
  if (local_c < iVar1) {
    do {
      (*(code *)**(undefined4 **)param_1)(&local_c);
      local_c = local_c + 1;
      iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
    } while (local_c < iVar1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00685e80 685e80_Material__GetMixtureThermalDiffusivity_m2__s ====
// decompiled by BatchDecomp @ 00685e80 name=GetMixtureThermalDiffusivity_m2__s conv=__cdecl body=309

/* public: static double __cdecl Material__GetMixtureThermalDiffusivity_m2__s(class
   util::Darray<struct MaterialConstituent> const &) */

double __cdecl
Material__GetMixtureThermalDiffusivity_m2__s(Darray_L_struct_MaterialConstituent_G_ *param_1)

{
  int iVar1;
  int *piVar2;
  float10 extraout_ST0;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
  if (local_c < iVar1) {
    do {
      piVar2 = (int *)(*(code *)**(undefined4 **)param_1)(&local_c);
      iVar1 = *piVar2;
      if (((*(double *)(iVar1 + 0xa8) <= 0.0) || (*(double *)(iVar1 + 0x90) <= 0.0)) ||
         (*(double *)(iVar1 + 0x30) <= 0.0)) {
        util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\materials.cpp",
                        0x134,
                        "ThermalConductivity_W__m_K > 0 && SpecificHeat_J__kg_K > 0 && Density_kg__m3 > 0"
                        ,(char *)0x0);
        DebugBreak();
      }
      local_c = local_c + 1;
      iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
    } while (local_c < iVar1);
  }
  local_10 = 0;
  iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
  if (local_10 < iVar1) {
    do {
      (*(code *)**(undefined4 **)param_1)(&local_10);
      local_10 = local_10 + 1;
      iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
    } while (local_10 < iVar1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00685fc0 685fc0_Material__GetMolarMass_kg__mol ====
// decompiled by BatchDecomp @ 00685fc0 name=GetMolarMass_kg__mol conv=__thiscall body=161

/* public: double __thiscall Material__GetMolarMass_kg__mol(void)const  */

double __thiscall Material__GetMolarMass_kg__mol(Material *this)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  double local_10;
  void *local_20;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar1 = (int *)GetElements(this);
  local_c = 0;
  local_10 = 0.0;
  iVar3 = (**(code **)(*piVar1 + 0xc))();
  if (local_c < iVar3) {
    do {
      puVar2 = (undefined4 *)(**(code **)*piVar1)(&local_c);
      local_10 = *(double *)(*puVar2 + 0x28) * *(double *)(puVar2 + 2) + local_10;
      local_c = local_c + 1;
      iVar3 = (**(code **)(*piVar1 + 0xc))();
    } while (local_c < iVar3);
  }
  local_10 = local_10 / /*408f400000000000*/1000.0;
  if (local_20 != (void *)0x0) {
    operator_delete__(local_20);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return local_10;
}


//==== 00686070 686070_Material__GetNeutronAttenuation ====
// decompiled by BatchDecomp @ 00686070 name=GetNeutronAttenuation conv=__thiscall body=145

/* public: double __thiscall Material__GetNeutronAttenuation(double,enum FissionType)const  */

double __thiscall Material__GetNeutronAttenuation(Material *this,double param_1,FissionType param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = this->Density_kg__m3 * AvogadroConstant__mol;
  dVar2 = GetMolarMass_kg__mol(this);
  dVar3 = GetMicroscopicNeutronAbsorptionCrossSection_b
                    (this,param_2,
                     /*3ff0000000000000*/1.0);
  dVar3 = b_to_m2(dVar3);
  dVar4 = GetMacroscopicNeutronScatteringCrossSection__m
                    (this,param_2,
                     /*3ff0000000000000*/1.0);
  dVar1 = (dVar4 + dVar3 * (dVar1 / dVar2)) * param_1;
  return libm_sse2_exp_precise(-dVar1);
}


//==== 006863d0 6863d0_Material__GetPowerEmittedForWavelength_W ====
// decompiled by BatchDecomp @ 006863d0 name=GetPowerEmittedForWavelength_W conv=__thiscall body=256

/* public: double __thiscall
   Material__GetPowerEmittedForWavelength_W(double,double,double,double,double)const  */

double __thiscall
Material__GetPowerEmittedForWavelength_W(Material *this,double param_1,double param_2,double param_3,double param_4,double param_5)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  float10 extraout_ST0;
  void *local_28;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar1 = (int *)GetElements(this);
  local_c = 0;
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  if (local_c < iVar2) {
    do {
      piVar3 = (int *)(**(code **)*piVar1)(&local_c);
      if (*(EmissionSpectrum **)(*piVar3 + 0xe8) != (EmissionSpectrum *)0x0) {
        EmissionSpectrum__GetPowerEmittedForWavelength_W(*(EmissionSpectrum **)(*piVar3 + 0xe8),param_1,param_2,param_3,param_4,param_5);
      }
      local_c = local_c + 1;
      iVar2 = (**(code **)(*piVar1 + 0xc))();
    } while (local_c < iVar2);
  }
  util_Sum_double(&this->ElementCount);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 006865a0 6865a0_Material__GetProbabilityOfFissionUponAbsorption ====
// decompiled by BatchDecomp @ 006865a0 name=GetProbabilityOfFissionUponAbsorption conv=__thiscall body=66

/* public: double __thiscall Material__GetProbabilityOfFissionUponAbsorption(enum
   FissionType,double)const  */

double __thiscall
Material__GetProbabilityOfFissionUponAbsorption(Material *this,FissionType param_1,double param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = GetMicroscopicNeutronFissionCrossSection_b
                    (this,param_1,param_2);
  dVar2 = GetMicroscopicNeutronAbsorptionCrossSection_b
                    (this,param_1,param_2);
  return dVar1 / dVar2;
}


//==== 006865f0 6865f0_Material__GetProductionCost_c__kg ====
// decompiled by BatchDecomp @ 006865f0 name=GetProductionCost_c__kg conv=__thiscall body=1582

/* WARNING: Removing unreachable block (ram,0x00686a1f) */
/* WARNING: Removing unreachable block (ram,0x00686ab0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: double __thiscall Material__GetProductionCost_c__kg(void)const  */

double __thiscall Material__GetProductionCost_c__kg(Material *this)

{
  Darray_L_double_G_ *pDVar1;
  Category CVar2;
  bool bVar3;
  int iVar4;
  double *pdVar5;
  int iVar6;
  ChemicalReaction *pCVar7;
  Maybe_L_double_G_ *pMVar8;
  float10 extraout_ST0;
  double dVar9;
  double dVar10;
  undefined1 local_34[16];
  undefined8 local_24;
  int local_1c;
  double local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pDVar1 = &this->ElementCount;
  dVar9 = this->ThermalConductivity_W__m_K - RoomTemperature_K;
  dVar10 = 0.0;
  if (0.0 <= dVar9) {
    dVar10 = dVar9;
  }
  local_18 = 0.0;
  if (0.0 <= dVar10 * /*3f747ae147ae147b*/0.005) {
    local_18 = dVar10 * /*3f747ae147ae147b*/0.005;
  }
  local_18 = local_18 + 0.0;
  iVar4 = (**(code **)(*(int *)&this->Elements + 0xc))();
  if (iVar4 == 1) {
    local_10 = (double)((ulonglong)local_10 & 0xffffffff);
    pdVar5 = (double *)(**(code **)*(int *)pDVar1)((int)&local_10 + 4);
    if ((NAN(*pdVar5) || NAN(/*3ff0000000000000*/1.0)) != (*pdVar5 == /*3ff0000000000000*/1.0))
    goto LAB_006868f2;
  }
  bVar3 = IsAFluid(this);
  if (!bVar3) {
    ((slice_view *)&local_34)->_8_8_ = util_Min_double(pDVar1);
    dVar10 = util_Sum_double(pDVar1);
    ((slice_view *)&local_34)->_8_8_ = (double)((slice_view *)&local_34)->_8_8_ / dVar10;
    local_24 = (double)((slice_view *)&local_34)->_8_8_;
    if ((double)((slice_view *)&local_34)->_8_8_ <= /*0000000000000000*/0.0) {
      local_24 = /*0000000000000000*/0.0;
    }
    if (/*3ff0000000000000*/1.0 <= local_24) {
      local_24 = /*3ff0000000000000*/1.0;
    }
    iVar4 = (**(code **)(*(int *)&this->ElementCount + 0xc))();
    if (iVar4 == 0) {
      ((slice_view *)&local_34)->_8_8_ = 0.0;
    }
    else {
      local_1c = 0;
      pdVar5 = (double *)(**(code **)*(int *)&this->ElementCount)(&local_1c);
      local_10 = (double)((ulonglong)local_10 & 0xffffffff);
      ((slice_view *)&local_34)->_8_8_ = *pdVar5;
      iVar4 = (**(code **)(*(int *)&this->ElementCount + 0xc))();
      if (((slice_view *)&local_10)->_4_4_ < iVar4) {
        do {
          pdVar5 = (double *)(**(code **)*(int *)&this->ElementCount)((int)&local_10 + 4);
          if ((double)((slice_view *)&local_34)->_8_8_ <= *pdVar5) {
            ((slice_view *)&local_34)->_8_8_ = *pdVar5;
          }
          local_10 = (double)CONCAT44(((slice_view *)&local_10)->_4_4_ + 1,(undefined4)local_10);
          iVar4 = (**(code **)(*(int *)&this->ElementCount + 0xc))();
        } while (((slice_view *)&local_10)->_4_4_ < iVar4);
      }
    }
    dVar10 = util_Sum_double(pDVar1);
    ((slice_view *)&local_34)->_8_8_ = (double)((slice_view *)&local_34)->_8_8_ / dVar10;
    dVar10 = (double)((slice_view *)&local_34)->_8_8_;
    if ((double)((slice_view *)&local_34)->_8_8_ <= /*0000000000000000*/0.0) {
      dVar10 = /*0000000000000000*/0.0;
    }
    if (/*3ff0000000000000*/1.0 <= dVar10) {
      dVar10 = /*3ff0000000000000*/1.0;
    }
    dVar10 = local_24 / dVar10;
    local_24 = libm_sse2_pow_precise(dVar10, /*3fd0000000000000*/0.25);
    bVar3 = IsAnAlloy(this);
    dVar10 = /*4054000000000000*/80.0;
    if (bVar3) {
      dVar10 = /*4039000000000000*/25.0;
    }
    local_18 = local_24 * 0.0 + (/*3ff0000000000000*/1.0 - local_24) * dVar10 + local_18;
  }
  if (((char)(this->MaterialMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 != '\0') ||
     (((0.0 < *(double *)&(this->LasingMediumProperties).Data._pad_0x0_0 &&
       (0.0 < this->LasingDamageThreshold_TW__m2)) &&
      (0.0 < *(double *)&(this->LasingMediumProperties).Data)))) {
    local_18 = local_18 + /*4044000000000000*/40.0;
  }
  if (((0.0 < this->Remanence_T - /*3ff0000000000000*/1.0) && (0.0 < this->BandGap_eV)) &&
     ((bVar3 = IsAStructuralMaterial(this), bVar3 &&
      (dVar10 = 0.0, 0.0 < this->ThermoelectricSensitivity_V__K)))) {
    dVar9 = this->Remanence_T;
    if (NAN(dVar9) == (dVar9 == 0.0)) {
      dVar10 = this->BandGap_eV / (dVar9 * VacuumPermeability_H__m);
    }
    iVar4 = 4;
    local_24 = dVar10;
    do {
      local_24 = local_24 * dVar10;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    dVar9 = libm_sse2_pow_precise(dVar9 - /*3ff0000000000000*/1.0, /*3fd3333333333333*/0.3);
    dVar9 = dVar9 * /*4020000000000000*/8.0 + local_24 * /*3a2fb0f6be506019*/2e-28;
    dVar10 = 0.0;
    if (0.0 <= dVar9) {
      dVar10 = dVar9;
    }
    local_18 = dVar10 + local_18;
  }
  bVar3 = IsStructural(this);
  if (bVar3) {
    local_18 = this->UltimateTensileStrength_MPa * /*3f60624dd2f1a9fc*/0.002 + local_18;
  }
LAB_006868f2:
  iVar6 = (**(code **)(*(int *)&this->ElementCount + 0xc))();
  iVar4 = 0;
  if (-1 < iVar6 + -1) {
    iVar4 = iVar6 + -1;
  }
  bVar3 = (char)this[1].Elements.Capacity == '\0';
  dVar10 = 0.0;
  if (0.0 <= (double)iVar4 * /*3fe0000000000000*/0.5) {
    dVar10 = (double)iVar4 * /*3fe0000000000000*/0.5;
  }
  local_18 = dVar10 + local_18;
  local_10 = local_18;
  if (bVar3) {
    CVar2 = (this->GetCategory_MemoizedValue).Data;
    local_1c = CVar2 + Nonmetal;
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&(this->GetClasses_MemoizedValue).Data.Capacity,
               &local_1c);
    bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &(this->GetClasses_MemoizedValue).Data.Capacity,CVar2);
    if (bVar3) {
      *(code **)(*(int *)&(this->GetClasses_MemoizedValue).IsValidData + -4 +
                (this->GetCategory_MemoizedValue).Data * 4) = Material__GetDecompositionReaction_Clear;
    }
    pCVar7 = GetDecompositionReaction_MemoizedFunction(this);
    ((undefined1 *)&local_24)[4] = 1;
    this[1].Elements.Size = (int)pCVar7;
    bVar3 = false;
    this[1].Elements.Capacity = ((slice_view *)&local_24)->_4_4_;
  }
  if (bVar3) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if (this[1].Elements.Size != 0) {
    if ((char)this[1].Elements.Capacity == '\0') {
      CVar2 = (this->GetCategory_MemoizedValue).Data;
      local_1c = CVar2 + Nonmetal;
      util__Darray_class_util__Reflectable____SetSize
                ((Darray_L_util__Reflectable_P_G_ *)&(this->GetClasses_MemoizedValue).Data.Capacity
                 ,&local_1c);
      bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize
                        ((Darray_L_GraphicsResource__Type_G_ *)
                         &(this->GetClasses_MemoizedValue).Data.Capacity,CVar2);
      if (bVar3) {
        *(code **)(*(int *)&(this->GetClasses_MemoizedValue).IsValidData + -4 +
                  (this->GetCategory_MemoizedValue).Data * 4) = Material__GetDecompositionReaction_Clear;
      }
      pCVar7 = GetDecompositionReaction_MemoizedFunction(this);
      ((undefined1 *)&local_24)[4] = 1;
      this[1].Elements.Size = (int)pCVar7;
      this[1].Elements.Capacity = ((slice_view *)&local_24)->_4_4_;
    }
    bVar3 = ChemicalReaction__IsExplosiveComposition((ChemicalReaction *)this[1].Elements.Size);
    if (bVar3) {
      if ((char)this[1].Elements.Capacity == '\0') {
        CVar2 = (this->GetCategory_MemoizedValue).Data;
        local_1c = CVar2 + Nonmetal;
        util__Darray_class_util__Reflectable____SetSize
                  ((Darray_L_util__Reflectable_P_G_ *)
                   &(this->GetClasses_MemoizedValue).Data.Capacity,&local_1c);
        bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize
                          ((Darray_L_GraphicsResource__Type_G_ *)
                           &(this->GetClasses_MemoizedValue).Data.Capacity,CVar2);
        if (bVar3) {
          *(code **)(*(int *)&(this->GetClasses_MemoizedValue).IsValidData + -4 +
                    (this->GetCategory_MemoizedValue).Data * 4) = Material__GetDecompositionReaction_Clear;
        }
        pCVar7 = GetDecompositionReaction_MemoizedFunction(this);
        local_24 = (double)CONCAT35(((slice_view *)&local_24)->_5_3_,0x100000000);
        this[1].Elements.Size = (int)pCVar7;
        this[1].Elements.Capacity = ((slice_view *)&local_24)->_4_4_;
      }
      local_24 = *(double *)(this[1].Elements.Size + 0x68) - this->ThermalConductivity_W__m_K;
      if (local_24 <= /*0000000000000000*/0.0) {
        util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\materials.cpp",
                        0x410,"SafetyTemperatureGap_K > 0",(char *)0x0);
        DebugBreak();
      }
      dVar10 = local_24 / /*406f400000000000*/250.0;
      if (local_24 / /*406f400000000000*/250.0 <= /*0000000000000000*/0.0) {
        dVar10 = /*0000000000000000*/0.0;
      }
      if (/*3ff0000000000000*/1.0 <= dVar10) {
        dVar10 = /*3ff0000000000000*/1.0;
      }
      local_18 = local_10 +
                 (/*3ff0000000000000*/1.0 - dVar10) * /*4059000000000000*/100.0 +
                 dVar10 * /*0000000000000000*/0.0;
      local_10 = local_18;
    }
  }
  if (this->IsABiomaterial == false) {
    dVar10 = local_10;
    if ((/*0000000000000000*/0.0 < this->Density_kg__m3) &&
       (iVar4 = (**(code **)(*(int *)&this->Elements + 0xc))(), dVar10 = local_10, 0 < iVar4)) {
      local_24 = GetMolarMass_kg__mol(this);
      local_24 = local_24 * /*408f400000000000*/1000.0;
      pMVar8 = util__Sqrt((Maybe_L_double_G_ *)local_34,(double *)&local_24);
      if (pMVar8->IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      dVar10 = pMVar8->Data * /*3f947ae147ae147b*/0.02;
      local_18 = 0.0;
      if (0.0 <= dVar10) {
        local_18 = dVar10;
      }
      local_18 = local_18 + local_10;
      dVar10 = local_18;
    }
    if ((this->IsPorous != false) || (this->IsFibrous != false)) {
      dVar10 = dVar10 * /*4018000000000000*/6.0;
      local_18 = dVar10;
    }
    if (this->IsNanostructured != false) {
      local_18 = dVar10 * /*4034000000000000*/20.0;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00686e00 686e00_Material__GetReflectanceColor_MemoizedFunction ====
// decompiled by BatchDecomp @ 00686e00 name=GetReflectanceColor_MemoizedFunction conv=__thiscall body=691

/* private: struct util::tuple2<struct util::Vec3<float>,struct util::Vec3<float> > __thiscall
   Material__GetReflectanceColor_MemoizedFunction(void)const  */

void __thiscall Material__GetReflectanceColor_MemoizedFunction(Material *this)

{
  RefractiveIndexSpectrum *pRVar1;
  undefined4 unaff_EDI;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  undefined8 *in_stack_00000004;
  float local_50;
  double local_3c;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  Vec3_L_float_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (*(int *)((int)&this->ExternalAngularSensitivity__m_radians + 4) != 0) {
    fVar7 = 0.0;
    fVar3 = 0.0;
    fVar8 = 0.0;
    local_34 = 0.0;
    local_20 = 0.0;
    fVar2 = 0.0;
    local_18 = 0.0;
    fVar6 = 0.0;
    local_28 = 0.0;
    fVar9 = 0.0;
    local_2c = 0.0;
    local_30 = 0.0;
    local_50 = 0.0;
    local_24 = 0.0;
    local_1c = 0.0;
    local_3c = VisibleLightWavelengthRange_nm.Lower;
    if (VisibleLightWavelengthRange_nm.Lower <=
        VisibleLightWavelengthRange_nm.Upper) {
      do {
        Physics__GetVisibleColorFromWavelength(&local_14,(double)CONCAT44(1,(int)((ulonglong)local_3c >> 0x20)),
                   SUB41(unaff_EDI,0));
        pRVar1 = *(RefractiveIndexSpectrum **)
                  ((int)&this->ExternalAngularSensitivity__m_radians + 4);
        if (pRVar1 == (RefractiveIndexSpectrum *)0x0) {
          dVar10 = 0.0;
          pRVar1 = (RefractiveIndexSpectrum *)0x0;
        }
        else {
          dVar10 = RefractiveIndexSpectrum__GetReflectanceCoefficient(pRVar1,local_3c);
          pRVar1 = *(RefractiveIndexSpectrum **)
                    ((int)&this->ExternalAngularSensitivity__m_radians + 4);
        }
        fVar3 = (float)dVar10;
        fVar2 = fVar3 * local_14.X + local_28;
        fVar6 = fVar3 * local_14.Y + local_2c;
        fVar9 = fVar3 * local_14.Z + local_30;
        if (pRVar1 == (RefractiveIndexSpectrum *)0x0) {
          dVar10 = 0.0;
        }
        else {
          dVar10 = RefractiveIndexSpectrum__GetReflectanceCoefficient(pRVar1,local_3c);
        }
        dVar5 = dVar10 + dVar10 + /*3ff0000000000000*/1.0;
        fVar4 = (float)((dVar10 * dVar10 * /*4008000000000000*/3.0 +
                        dVar10 * /*4018000000000000*/6.0) / (dVar5 * dVar5));
        fVar7 = local_14.X + local_34;
        fVar3 = fVar4 * local_14.X + local_50;
        local_18 = local_14.Z + local_18;
        fVar8 = fVar4 * local_14.Z + local_1c;
        local_20 = local_14.Y + local_20;
        local_24 = fVar4 * local_14.Y + local_24;
        local_3c = local_3c + /*4024000000000000*/10.0;
        local_34 = fVar7;
        local_30 = fVar9;
        local_2c = fVar6;
        local_28 = fVar2;
        local_1c = fVar8;
        local_50 = fVar3;
      } while (local_3c <= VisibleLightWavelengthRange_nm.Upper);
    }
    local_14.Z = fVar8 / local_18;
    *in_stack_00000004 = CONCAT44(local_24 / local_20,fVar3 / fVar7);
    *(float *)(in_stack_00000004 + 1) = local_14.Z;
    *(ulonglong *)((int)in_stack_00000004 + 0xc) = CONCAT44(fVar6 / local_20,fVar2 / fVar7);
    *(float *)((int)in_stack_00000004 + 0x14) = fVar9 / local_18;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_14.Z = 0.0;
  *in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 1) = 0;
  *(undefined8 *)((int)in_stack_00000004 + 0xc) = 0;
  *(undefined4 *)((int)in_stack_00000004 + 0x14) = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

