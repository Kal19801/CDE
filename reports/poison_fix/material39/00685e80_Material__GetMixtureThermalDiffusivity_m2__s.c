// decompiled by BatchDecomp @ 00685e80 name=GetMixtureThermalDiffusivity_m2__s conv=__cdecl body=309

/* public: static double __cdecl Material::GetMixtureThermalDiffusivity_m2__s(class
   util::Darray<struct MaterialConstituent> const &) */

double __cdecl
Material::GetMixtureThermalDiffusivity_m2__s(Darray<struct_MaterialConstituent> *param_1)

{
  int iVar1;
  int *piVar2;
  float10 extraout_ST0;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
  if (local_c < iVar1) {
    do {
      piVar2 = (int *)(*(code *)**(undefined4 **)param_1)(&local_c);
      iVar1 = *piVar2;
      if (((*(double *)(iVar1 + 0xa8) <= 0.0) || (*(double *)(iVar1 + 0x90) <= 0.0)) ||
         (*(double *)(iVar1 + 0x30) <= 0.0)) {
        util::LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\materials.cpp",
                        0x134,
                        "ThermalConductivity_W__m_K > 0 && SpecificHeat_J__kg_K > 0 && Density_kg__m3 > 0"
                        ,(char *)0x0);
        DebugBreak();
      }
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

