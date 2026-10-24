// decompiled by BatchDecomp @ 006865a0 name=GetProbabilityOfFissionUponAbsorption conv=__thiscall body=66

/* public: double __thiscall Material::GetProbabilityOfFissionUponAbsorption(enum
   FissionType,double)const  */

double __thiscall
Material::GetProbabilityOfFissionUponAbsorption(Material *this,FissionType param_1,double param_2)

{
  undefined4 unaff_EDI;
  double dVar1;
  double dVar2;
  
  dVar1 = GetMicroscopicNeutronFissionCrossSection_b
                    (this,param_1,(double)CONCAT44(unaff_EDI,param_2._0_4_));
  dVar2 = GetMicroscopicNeutronAbsorptionCrossSection_b
                    (this,param_1,(double)CONCAT44(unaff_EDI,param_2._0_4_));
  return dVar1 / dVar2;
}

