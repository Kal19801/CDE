// decompiled by BatchDecomp @ 00686070 name=GetNeutronAttenuation conv=__thiscall body=145

/* public: double __thiscall Material::GetNeutronAttenuation(double,enum FissionType)const  */

double __thiscall Material::GetNeutronAttenuation(Material *this,double param_1,FissionType param_2)

{
  undefined4 unaff_EDI;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = this->Density_kg__m3 * Physics::AvogadroConstant__mol;
  dVar2 = GetMolarMass_kg__mol(this);
  dVar3 = GetMicroscopicNeutronAbsorptionCrossSection_b
                    (this,param_2,
                     (double)CONCAT44(unaff_EDI,(int)((ulonglong)__real_3ff0000000000000 >> 0x20)));
  dVar3 = b_to_m2(dVar3);
  dVar4 = GetMacroscopicNeutronScatteringCrossSection__m
                    (this,param_2,
                     (double)CONCAT44(unaff_EDI,(int)((ulonglong)__real_3ff0000000000000 >> 0x20)));
  dVar1 = (dVar4 + dVar3 * (dVar1 / dVar2)) * param_1;
  dVar1 = (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^
                           __xmm_80000000000000008000000000000000._4_4_,
                           SUB84(dVar1,0) ^ (uint)__xmm_80000000000000008000000000000000);
  libm_sse2_exp_precise();
  return dVar1;
}

