// decompiled by BatchDecomp @ 0067f280 name=GetBareSphereCriticalRadius_m conv=__thiscall body=603

/* public: double __thiscall Material::GetBareSphereCriticalRadius_m(void)const  */

double __thiscall Material::GetBareSphereCriticalRadius_m(Material *this)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  Element *this_00;
  Maybe<double> *pMVar5;
  Element *this_01;
  undefined4 unaff_ESI;
  float10 extraout_ST0;
  double dVar6;
  Maybe<double> local_4c;
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
    local_2c = &util::Darray<struct_MaterialComposition>::_vftable_;
    if (local_28 != (void *)0x0) {
      operator_delete__(local_28);
    }
    local_28 = (void *)0x0;
    local_2c = &util::IArray<enum_CrewDepartment::Type>::_vftable_;
    dVar6 = GetMacroscopicNeutronScatteringCrossSection__m
                      (this,Fast,
                       (double)CONCAT44(unaff_ESI,(int)((ulonglong)__real_3ff0000000000000 >> 0x20))
                      );
    local_14 = __real_3ff0000000000000 /
               (dVar6 * (__real_3ff0000000000000 -
                        __real_4000000000000000 / (local_14 * __real_4008000000000000)) *
               __real_4008000000000000);
    local_1c = this->Density_kg__m3 * Physics::AvogadroConstant__mol;
    dVar6 = GetMolarMass_kg__mol(this);
    local_1c = local_1c / dVar6;
    dVar6 = GetMicroscopicNeutronAbsorptionCrossSection_b
                      (this,Fast,
                       (double)CONCAT44(unaff_ESI,(int)((ulonglong)__real_3ff0000000000000 >> 0x20))
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
      local_1c = Element::GetAverageNeutronsProducedPerFission(this_01,Fast);
      local_1c = local_1c * __real_0000000000000000;
      local_14 = Element::GetAverageNeutronsProducedPerFission(this_00,Fast);
      local_14 = local_14 + local_1c;
    }
    local_1c = GetMicroscopicNeutronFissionCrossSection_b
                         (this,Fast,
                          (double)CONCAT44(unaff_ESI,
                                           (int)((ulonglong)__real_3ff0000000000000 >> 0x20)));
    local_1c = local_1c * local_14;
    local_14 = GetMicroscopicNeutronAbsorptionCrossSection_b
                         (this,Fast,
                          (double)CONCAT44(unaff_ESI,
                                           (int)((ulonglong)__real_3ff0000000000000 >> 0x20)));
    local_3c = local_34 / (local_1c / local_14 - __real_3ff0000000000000);
    pMVar5 = util::Sqrt(&local_4c,&local_3c);
    if (pMVar5->IsValidData == false) {
      util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    local_14 = pMVar5->Data * __real_400921fb54442d18;
  }
  else {
    local_14 = 0.0;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}

