// decompiled by BatchDecomp @ 00685bc0 name=GetMixtureSpecificGasConstant_J__kg_K conv=__cdecl body=221

/* public: static double __cdecl Material::GetMixtureSpecificGasConstant_J__kg_K(class
   util::Darray<struct MaterialConstituent> const &) */

double __cdecl
Material::GetMixtureSpecificGasConstant_J__kg_K(Darray<struct_MaterialConstituent> *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  float10 extraout_ST0;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
  if (local_c < iVar1) {
    do {
      puVar2 = (undefined4 *)(*(code *)**(undefined4 **)param_1)(&local_c);
      GetMolarMass_kg__mol((Material *)*puVar2);
      local_c = local_c + 1;
      iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
    } while (local_c < iVar1);
  }
  local_10 = 0;
  iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
  if (local_10 < iVar1) {
    do {
      (*(code *)**(undefined4 **)param_1)(&local_10);
      local_10 = local_10 + 1;
      iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
    } while (local_10 < iVar1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}

