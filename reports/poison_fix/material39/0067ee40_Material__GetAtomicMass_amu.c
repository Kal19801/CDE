// decompiled by BatchDecomp @ 0067ee40 name=GetAtomicMass_amu conv=__thiscall body=161

/* public: double __thiscall Material::GetAtomicMass_amu(void)const  */

double __thiscall Material::GetAtomicMass_amu(Material *this)

{
  int *piVar1;
  int iVar2;
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
      (**(code **)*piVar1)(&local_c);
      local_c = local_c + 1;
      iVar2 = (**(code **)(*piVar1 + 0xc))();
    } while (local_c < iVar2);
  }
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}

