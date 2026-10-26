// decompiled by BatchDecomp @ 00685020 name=GetMacroscopicResonanceIntegralAbsorptionCrossSection__m conv=__thiscall body=286

/* public: double __thiscall
   Material::GetMacroscopicResonanceIntegralAbsorptionCrossSection__m(double)const  */

double __thiscall
Material::GetMacroscopicResonanceIntegralAbsorptionCrossSection__m(Material *this,double param_1)

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
  dVar6 = this->Density_kg__m3 * Physics::AvogadroConstant__mol;
  dVar7 = GetMolarMass_kg__mol(this);
  dVar2 = __real_3ff0000000000000;
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
      dVar7 = Element::GetResonanceIntegralAbsorptionCrossSection_b(this_00);
      dVar6 = __real_3ff0000000000000 - dVar2;
      dVar8 = Element::GetResonanceIntegralAbsorptionCrossSection_b((Element *)*piVar5);
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

