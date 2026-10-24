// decompiled by BatchDecomp @ 00685810 name=GetMicroscopicNeutronTotalCrossSection_b conv=__thiscall body=224

/* public: double __thiscall Material::GetMicroscopicNeutronTotalCrossSection_b(enum
   FissionType,double)const  */

double __thiscall
Material::GetMicroscopicNeutronTotalCrossSection_b
          (Material *this,FissionType param_1,double param_2)

{
  Element *pEVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  Element *this_00;
  float10 extraout_ST0;
  void *local_28;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar2 = (int *)GetElements(this);
  local_c = 0;
  iVar3 = (**(code **)(*piVar2 + 0xc))();
  if (local_c < iVar3) {
    do {
      piVar4 = (int *)(**(code **)*piVar2)(&local_c);
      pEVar1 = ((Element *)*piVar4)->UnenrichedElement;
      this_00 = (Element *)*piVar4;
      if (pEVar1 != (Element *)0x0) {
        this_00 = pEVar1;
      }
      Element::GetMicroscopicNeutronTotalCrossSection_b(this_00,param_1);
      Element::GetMicroscopicNeutronTotalCrossSection_b((Element *)*piVar4,param_1);
      local_c = local_c + 1;
      iVar3 = (**(code **)(*piVar2 + 0xc))();
    } while (local_c < iVar3);
  }
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}

