// decompiled by BatchDecomp @ 00685140 name=GetMacroscopicSlowingDownPower conv=__thiscall body=44

/* public: double __thiscall Material::GetMacroscopicSlowingDownPower(double)const  */

double __thiscall Material::GetMacroscopicSlowingDownPower(Material *this,double param_1)

{
  undefined4 unaff_ESI;
  double dVar1;
  double dVar2;
  
  dVar1 = GetMacroscopicNeutronScatteringCrossSection__m
                    (this,Fast,(double)CONCAT44(unaff_ESI,(int)((ulonglong)param_1 >> 0x20)));
  dVar2 = GetLogarithmicEnergyDecrement(this);
  return dVar2 * dVar1;
}

