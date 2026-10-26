// decompiled by BatchDecomp @ 00684d80 name=GetLogarithmicEnergyDecrement conv=__thiscall body=171

/* public: double __thiscall Material::GetLogarithmicEnergyDecrement(void)const  */

double __thiscall Material::GetLogarithmicEnergyDecrement(Material *this)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 extraout_ST0;
  void *local_20;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar1 = (int *)GetElements(this);
  local_c = 0;
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  if (local_c < iVar2) {
    do {
      puVar3 = (undefined4 *)(**(code **)*piVar1)(&local_c);
      Element::GetLogarithmicEnergyDecrement((Element *)*puVar3);
      local_c = local_c + 1;
      iVar2 = (**(code **)(*piVar1 + 0xc))();
    } while (local_c < iVar2);
  }
  util::Sum<double>(&this->ElementCount);
  if (local_20 != (void *)0x0) {
    operator_delete__(local_20);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}

