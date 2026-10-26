// decompiled by BatchDecomp @ 00684ef0 name=GetMacroscopicNeutronScatteringCrossSection__m conv=__thiscall body=302

/* public: double __thiscall Material::GetMacroscopicNeutronScatteringCrossSection__m(enum
   FissionType,double)const  */

double __thiscall
Material::GetMacroscopicNeutronScatteringCrossSection__m
          (Material *this,FissionType param_1,double param_2)

{
  Element *pEVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  Element *this_00;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  float10 extraout_ST0;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 in_stack_00000008;
  undefined8 uVar8;
  void *local_34;
  double local_28;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  uVar8 = CONCAT44(unaff_ESI,unaff_EDI);
  dVar5 = this->Density_kg__m3 * Physics::AvogadroConstant__mol;
  dVar6 = GetMolarMass_kg__mol(this);
  dVar5 = dVar5 / dVar6;
  piVar2 = (int *)GetElements(this);
  local_c = 0;
  local_28 = 0.0;
  iVar3 = (**(code **)(*piVar2 + 0xc))(uVar8,dVar5);
  if (local_c < iVar3) {
    do {
      piVar4 = (int *)(**(code **)*piVar2)(&local_c);
      pEVar1 = ((Element *)*piVar4)->UnenrichedElement;
      this_00 = (Element *)*piVar4;
      if (pEVar1 != (Element *)0x0) {
        this_00 = pEVar1;
      }
      dVar6 = Element::GetMicroscopicNeutronScatteringCrossSection_b(this_00,param_1);
      dVar5 = __real_3ff0000000000000 - (double)CONCAT44(param_2._0_4_,in_stack_00000008);
      dVar7 = Element::GetMicroscopicNeutronScatteringCrossSection_b((Element *)*piVar4,param_1);
      local_c = local_c + 1;
      local_28 = *(double *)(piVar4 + 2) *
                 (dVar7 * (double)CONCAT44(param_2._0_4_,in_stack_00000008) + dVar6 * dVar5) +
                 local_28;
      iVar3 = (**(code **)(*piVar2 + 0xc))();
    } while (local_c < iVar3);
  }
  if (local_34 != (void *)0x0) {
    operator_delete__(local_34);
  }
  b_to_m2(local_28);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}

