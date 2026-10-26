// decompiled by BatchDecomp @ 00684310 name=GetGammaDecay_W__kg conv=__thiscall body=324

/* public: double __thiscall Material::GetGammaDecay_W__kg(void)const  */

double __thiscall Material::GetGammaDecay_W__kg(Material *this)

{
  int *piVar1;
  int iVar2;
  float10 extraout_ST0;
  double dVar3;
  void *local_34;
  undefined8 local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  dVar3 = __real_4000000000000000;
  libm_sse2_log_precise();
  local_10 = dVar3;
  dVar3 = GetHalfLife_s(this);
  if (0.0 < dVar3 / local_10) {
    GetHalfLife_s(this);
  }
  piVar1 = (int *)GetElements(this);
  local_10 = (double)((ulonglong)local_10 & 0xffffffff);
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  if (local_10._4_4_ < iVar2) {
    do {
      (**(code **)*piVar1)((int)&local_10 + 4);
      local_10 = (double)CONCAT44(local_10._4_4_ + 1,(undefined4)local_10);
      iVar2 = (**(code **)(*piVar1 + 0xc))();
    } while (local_10._4_4_ < iVar2);
  }
  util::Sum<double>(&this->ElementCount);
  if (local_34 != (void *)0x0) {
    operator_delete__(local_34);
  }
  GetMolarMass_kg__mol(this);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}

