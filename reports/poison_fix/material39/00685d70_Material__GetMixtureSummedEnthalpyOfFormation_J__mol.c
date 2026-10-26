// decompiled by BatchDecomp @ 00685d70 name=GetMixtureSummedEnthalpyOfFormation_J__mol conv=__cdecl body=128

/* public: static double __cdecl Material::GetMixtureSummedEnthalpyOfFormation_J__mol(class
   util::Darray<struct MaterialConstituent> const &) */

double __cdecl
Material::GetMixtureSummedEnthalpyOfFormation_J__mol(Darray<struct_MaterialConstituent> *param_1)

{
  int iVar1;
  float10 extraout_ST0;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
  if (local_c < iVar1) {
    do {
      (*(code *)**(undefined4 **)param_1)(&local_c);
      local_c = local_c + 1;
      iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
    } while (local_c < iVar1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}

