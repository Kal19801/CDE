// decompiled by BatchDecomp @ 00684930 name=GetHalfLife_s conv=__thiscall body=263

/* public: double __thiscall Material::GetHalfLife_s(void)const  */

double __thiscall Material::GetHalfLife_s(Material *this)

{
  Darray<Element_*> *pDVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  float10 extraout_ST0;
  Darray<double> local_28;
  undefined8 local_18;
  undefined1 local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pDVar1 = &this->Elements;
  bVar3 = false;
  local_18 = (double)(ulonglong)(uint)local_18;
  iVar4 = (**(code **)(pDVar1->_padding_ + 0xc))();
  if (iVar4 == 0) {
    local_18 = 0.0;
  }
  else {
    local_10 = 0;
    local_28._padding_ = 0;
    local_28.Data = (double *)0x0;
    local_28.Size = 0;
    local_28.Capacity = 0;
    iVar4 = (**(code **)(pDVar1->_padding_ + 0xc))();
    util::Darray<double>::Darray<double>(&local_28,iVar4);
    local_c = 0;
    iVar4 = (**(code **)(pDVar1->_padding_ + 0xc))();
    if (local_c < iVar4) {
      do {
        piVar5 = (int *)(**(code **)pDVar1->_padding_)(&local_c);
        iVar4 = local_28.Size;
        dVar2 = *(double *)(*piVar5 + 0x40);
        if (0.0 < dVar2) {
          local_18 = (double)CONCAT44(local_28.Size + 1,(uint)local_18);
          util::Darray<double>::SetSize(&local_28,(int *)((int)&local_18 + 4));
          bVar3 = util::Darray<double>::CheckSize(&local_28,iVar4);
          if (bVar3) {
            local_28.Data[local_28.Size + -1] = dVar2;
          }
        }
        local_c = local_c + 1;
        iVar4 = (**(code **)(pDVar1->_padding_ + 0xc))();
      } while (local_c < iVar4);
    }
    local_18 = util::Min<double>(&local_28);
    bVar3 = true;
  }
  if ((bVar3) &&
     (local_28._padding_ = (int)&util::Darray<double>::_vftable_, local_28.Data != (double *)0x0)) {
    operator_delete__(local_28.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}

