// decompiled by BatchDecomp @ 006803d0 name=GetCost_c__kg_MemoizedFunction conv=__thiscall body=718

/* private: double __thiscall Material::GetCost_c__kg_MemoizedFunction(void)const  */

double __thiscall Material::GetCost_c__kg_MemoizedFunction(Material *this)

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
      util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x12,
                      "IsValid()",(char *)0x0);
      DebugBreak();
      local_10 = *(double *)&this->Parent;
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return (double)extraout_ST0;
  }
  if ((0.0 < this->Density_kg__m3) &&
     (iVar1 = (**(code **)((this->Elements)._padding_ + 0xc))(), 0 < iVar1)) {
    iVar1 = (**(code **)((this->Elements)._padding_ + 0xc))();
    if (iVar1 == 0) {
      local_28 = 0.0;
    }
    else {
      piVar2 = (int *)GetElements(this);
      local_10 = (double)((ulonglong)local_10 & 0xffffffff);
      local_28 = 0.0;
      local_18 = 0.0;
      iVar1 = (**(code **)(*piVar2 + 0xc))();
      if (local_10._4_4_ < iVar1) {
        do {
          puVar3 = (undefined4 *)(**(code **)*piVar2)((int)&local_10 + 4);
          dVar6 = Element::GetEffectiveSolarAbundance((Element *)*puVar3);
          if (dVar6 <= 0.0) {
            dVar6 = 0.0;
          }
          else {
            dVar6 = __real_3ff0000000000000 / dVar6;
          }
          local_10 = (double)CONCAT44(local_10._4_4_ + 1,(undefined4)local_10);
          local_28 = *(double *)(puVar3 + 2) * dVar6 + local_28;
          iVar1 = (**(code **)(*piVar2 + 0xc))();
          pcVar4 = DebugBreak_exref;
          local_18 = local_28;
        } while (local_10._4_4_ < iVar1);
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
      dVar5 = Physics::SecondsInAJulianYear_s * __real_4014000000000000;
      dVar7 = GetHalfLife_s(this);
      dVar6 = __real_3fe0000000000000;
      libm_sse2_log_precise();
      dVar8 = __real_3fefae147ae147ae;
      libm_sse2_log_precise();
      dVar6 = dVar5 / (dVar7 / (dVar6 / dVar8)) - __real_3ff0000000000000;
      local_18 = 0.0;
      if (0.0 <= dVar6) {
        local_18 = dVar6;
      }
    }
    dVar8 = GetStorageCost_c__kg(this);
    dVar6 = GetProductionCost_c__kg(this);
    dVar6 = dVar6 + dVar8 + local_18 + local_28;
    if (dVar6 <= 0.0) {
      util::LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\materials.cpp",
                      0x462,"TotalCost_c__kg > 0.",(char *)0x0);
      (*pcVar4)();
    }
    if ((NAN(dVar6)) || ((NAN(dVar6) == (dVar6 == 0.0) && (NAN(dVar6 / dVar6))))) {
      util::LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\materials.cpp",
                      0x463,"IsNumericallyValid(TotalCost_c__kg)",(char *)0x0);
      (*pcVar4)();
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return (double)extraout_ST0_00;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0_01;
}

