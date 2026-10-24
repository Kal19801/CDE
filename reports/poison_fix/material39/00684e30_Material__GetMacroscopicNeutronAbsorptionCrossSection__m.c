// decompiled by BatchDecomp @ 00684e30 name=GetMacroscopicNeutronAbsorptionCrossSection__m conv=__thiscall body=85

/* public: double __thiscall Material::GetMacroscopicNeutronAbsorptionCrossSection__m(enum
   FissionType,double)const  */

double __thiscall
Material::GetMacroscopicNeutronAbsorptionCrossSection__m
          (Material *this,FissionType param_1,double param_2)

{
  undefined4 unaff_ESI;
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = this->Density_kg__m3 * Physics::AvogadroConstant__mol;
  dVar2 = GetMolarMass_kg__mol(this);
  dVar3 = GetMicroscopicNeutronAbsorptionCrossSection_b
                    (this,param_1,(double)CONCAT44(unaff_ESI,param_2._0_4_));
  dVar3 = b_to_m2(dVar3);
  return dVar3 * (dVar1 / dVar2);
}

