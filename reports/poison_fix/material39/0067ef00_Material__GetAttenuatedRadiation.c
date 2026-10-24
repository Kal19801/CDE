// decompiled by BatchDecomp @ 0067ef00 name=GetAttenuatedRadiation conv=__thiscall body=496

/* public: struct Radiation __thiscall Material::GetAttenuatedRadiation(struct
   Radiation,double)const  */

Radiation * __thiscall
Material::GetAttenuatedRadiation
          (Material *this,Radiation *__return_storage_ptr__,Radiation param_1,double param_2)

{
  Radiation RVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 unaff_EDI;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 in_stack_00000008;
  void *local_28;
  double local_18;
  undefined8 local_10;
  uint local_8;
  
  RVar1 = param_1;
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = Physics::AvogadroConstant__mol * this->Density_kg__m3;
  dVar5 = GetMolarMass_kg__mol(this);
  dVar5 = local_10 / dVar5;
  dVar6 = GetMicroscopicNeutronAbsorptionCrossSection_b
                    (this,Thermal,
                     (double)CONCAT44(unaff_EDI,(int)((ulonglong)__real_3ff0000000000000 >> 0x20)));
  dVar6 = b_to_m2(dVar6);
  dVar7 = GetMacroscopicNeutronScatteringCrossSection__m
                    (this,Thermal,
                     (double)CONCAT44(unaff_EDI,(int)((ulonglong)__real_3ff0000000000000 >> 0x20)));
  dVar5 = (dVar7 + dVar6 * dVar5) * (double)CONCAT44(param_2._0_4_,param_1.GammaRays_W._4_4_);
  dVar5 = (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) ^
                           __xmm_80000000000000008000000000000000._4_4_,
                           SUB84(dVar5,0) ^ (uint)__xmm_80000000000000008000000000000000);
  libm_sse2_exp_precise();
  dVar5 = dVar5 * (double)CONCAT44(param_1.ThermalNeutrons_W._0_4_,in_stack_00000008);
  in_stack_00000008 = SUB84(dVar5,0);
  param_1.ThermalNeutrons_W._0_4_ = (undefined4)((ulonglong)dVar5 >> 0x20);
  local_10 = Physics::AvogadroConstant__mol * this->Density_kg__m3;
  dVar5 = GetMolarMass_kg__mol(this);
  dVar5 = local_10 / dVar5;
  dVar6 = GetMicroscopicNeutronAbsorptionCrossSection_b
                    (this,Fast,
                     (double)CONCAT44(unaff_EDI,(int)((ulonglong)__real_3ff0000000000000 >> 0x20)));
  dVar6 = b_to_m2(dVar6);
  dVar7 = GetMacroscopicNeutronScatteringCrossSection__m
                    (this,Fast,
                     (double)CONCAT44(unaff_EDI,(int)((ulonglong)__real_3ff0000000000000 >> 0x20)));
  dVar5 = (dVar7 + dVar6 * dVar5) * (double)CONCAT44(param_2._0_4_,param_1.GammaRays_W._4_4_);
  dVar5 = (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) ^
                           __xmm_80000000000000008000000000000000._4_4_,
                           SUB84(dVar5,0) ^ (uint)__xmm_80000000000000008000000000000000);
  libm_sse2_exp_precise();
  piVar2 = (int *)GetElements(this);
  local_10 = (double)((ulonglong)local_10 & 0xffffffff);
  local_18 = 0.0;
  iVar3 = (**(code **)(*piVar2 + 0xc))();
  if (local_10._4_4_ < iVar3) {
    do {
      piVar4 = (int *)(**(code **)*piVar2)((int)&local_10 + 4);
      local_10 = (double)CONCAT44(local_10._4_4_ + 1,(undefined4)local_10);
      local_18 = *(double *)(piVar4 + 2) * *(double *)(*piVar4 + 200) + local_18;
      iVar3 = (**(code **)(*piVar2 + 0xc))();
    } while (local_10._4_4_ < iVar3);
  }
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  dVar6 = ((local_18 * __real_408f400000000000) / __real_40c3880000000000) *
          (double)CONCAT44(param_2._0_4_,param_1.GammaRays_W._4_4_) * this->Density_kg__m3;
  dVar6 = (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) ^
                           __xmm_80000000000000008000000000000000._4_4_,
                           SUB84(dVar6,0) ^ (uint)__xmm_80000000000000008000000000000000);
  libm_sse2_exp_precise();
  *(undefined4 *)&__return_storage_ptr__->ThermalNeutrons_W = in_stack_00000008;
  *(undefined4 *)((int)&__return_storage_ptr__->ThermalNeutrons_W + 4) =
       param_1.ThermalNeutrons_W._0_4_;
  __return_storage_ptr__->FastNeutrons_W = dVar5 * RVar1._4_8_;
  __return_storage_ptr__->GammaRays_W = dVar6 * (double)param_1._12_8_;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}

