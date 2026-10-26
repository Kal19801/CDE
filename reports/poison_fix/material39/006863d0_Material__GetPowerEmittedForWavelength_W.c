// decompiled by BatchDecomp @ 006863d0 name=GetPowerEmittedForWavelength_W conv=__thiscall body=256

/* public: double __thiscall
   Material::GetPowerEmittedForWavelength_W(double,double,double,double,double)const  */

double __thiscall
Material::GetPowerEmittedForWavelength_W
          (Material *this,double param_1,double param_2,double param_3,double param_4,double param_5
          )

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
        EmissionSpectrum::GetPowerEmittedForWavelength_W
                  (*(EmissionSpectrum **)(*piVar3 + 0xe8),param_1,param_2,param_3,param_4,param_5);
      }
      local_c = local_c + 1;
      iVar2 = (**(code **)(*piVar1 + 0xc))();
    } while (local_c < iVar2);
  }
  util::Sum<double>(&this->ElementCount);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}

