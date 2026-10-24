// pilot_032_laser17.c - Laser 17 batch pilot (p89): 14/17 poison-fixed decompiles
// assembled by scripts/pilot032_assemble.py v2 from decomp2c v2 output.
// deferred (next round): GetAdvancedInfo / RenderInitialStateTransparent /
//   GetThermalLensingQualityFactor -- slice+unaff+vftable tail, VAs in log
// Honest TODOs inline; fix log: reports/poison_fix/laser17_pilot032_log.txt
#include "port_prelude.h"
typedef union {
  undefined1 raw[32];
} slice_view;
/* ---- externs: stub-oracle names (K&R; ret types by call site) ---- */
extern int util_Sum_double(); /* K&R stub; ret by call site (honest TODO: stub is void) */

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

