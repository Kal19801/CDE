// decompiled by BatchDecomp @ 006859e0 name=GetMixtureIndexOfRefraction conv=__cdecl body=243

/* public: static double __cdecl Material::GetMixtureIndexOfRefraction(class util::Darray<struct
   MaterialConstituent> const &,double) */

double __cdecl
Material::GetMixtureIndexOfRefraction(Darray<struct_MaterialConstituent> *param_1,double param_2)

{
  int iVar1;
  int *piVar2;
  IndexOfRefraction *pIVar3;
  float10 extraout_ST0;
  double dVar4;
  int *piVar5;
  IndexOfRefraction local_38;
  double local_28;
  double local_20;
  double local_18;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_28 = 0.0;
  local_20 = 0.0;
  local_c = 0;
  iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
  if (local_c < iVar1) {
    do {
      piVar5 = &local_c;
      piVar2 = (int *)(*(code *)**(undefined4 **)param_1)();
      local_18 = *(double *)(piVar2 + 2);
      dVar4 = __real_3ff0000000000000;
      if (*(RefractiveIndexSpectrum **)(*piVar2 + 0x134) != (RefractiveIndexSpectrum *)0x0) {
        pIVar3 = RefractiveIndexSpectrum::GetIndexOfRefraction
                           (*(RefractiveIndexSpectrum **)(*piVar2 + 0x134),&local_38,
                            (double)CONCAT44(piVar5,param_2._0_4_));
        dVar4 = pIVar3->RefractionIndex;
      }
      local_c = local_c + 1;
      local_20 = dVar4 * local_18 + local_20;
      iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
    } while (local_c < iVar1);
  }
  local_18 = 0.0;
  local_10 = 0;
  iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
  if (local_10 < iVar1) {
    do {
      iVar1 = (*(code *)**(undefined4 **)param_1)(&local_10);
      local_28 = *(double *)(iVar1 + 8) + local_28;
      local_10 = local_10 + 1;
      local_18 = local_28;
      iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
    } while (local_10 < iVar1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}

