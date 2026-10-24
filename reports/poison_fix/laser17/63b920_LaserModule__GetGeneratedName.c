
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::Str<char> __thiscall LaserModule::GetGeneratedName(void)const  */

Str<char> * __thiscall
LaserModule::GetGeneratedName(LaserModule *this,Str<char> *__return_storage_ptr__)

{
  int iVar1;
  Material *pMVar2;
  double dVar3;
  Str<char> SVar4;
  bool bVar5;
  LocStr *pLVar6;
  Str<char> *pSVar7;
  Str<char> *pSVar8;
  int unaff_EDI;
  char *pcVar9;
  int iVar10;
  void **ppvVar11;
  void *local_188 [3];
  void *local_17c;
  void *local_170 [3];
  void *local_164;
  void *local_158 [3];
  void *local_14c;
  void *local_140 [3];
  void *local_134;
  Str<char> local_128;
  Str<char> local_11c;
  void *local_110 [3];
  Str<char> local_104;
  Str<char> local_f8;
  Str<char> local_ec;
  Str<char> local_e0;
  Str<char> local_d4;
  Str<char> local_c8;
  Str<char> local_bc;
  Str<char> local_b0;
  Str<char> local_a4;
  undefined1 local_98 [8];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  Str<char> local_88;
  Str<char> local_7c;
  Str<char> local_70;
  Str<char> local_64;
  int local_54;
  Str<char> local_50;
  Str<char> local_44;
  Str<char> local_38;
  Str<char> local_2c;
  Str<char> local_20;
  Str<char> local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  util::Str<char>::Str<char>(&local_128,"Weapon Laser");
  util::Str<char>::Str<char>(&local_c8,"Space");
  util::Str<char>::Str<char>(&local_bc,"Space");
  util::Str<char>::Str<char>(&local_b0,"Space");
  util::Str<char>::Str<char>(&local_a4,"ArcLamp.PowerSupplied_W");
  local_88.Data = (char *)0x0;
  local_88.Capacity = 0;
  local_88.Length = 0;
  local_7c.Data = (char *)0x0;
  local_7c.Capacity = 0;
  local_7c.Length = 0;
  if ((this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData == false) {
    iVar10 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
    local_54 = iVar10 + 1;
    util::Darray<struct_util::tuple2<enum_Order::Type,int>_>::SetSize
              ((Darray<struct_util::tuple2<enum_Order::Type,int>_> *)
               &this->GetFinalWavelength_nm_MemoizedValue,&local_54);
    bVar5 = util::Darray<void_(__thiscall_Fleet::*)(void)const_>::CheckSize
                      ((Darray<void_(__thiscall_Fleet::*)(void)const_> *)
                       &this->GetFinalWavelength_nm_MemoizedValue,iVar10);
    if (bVar5) {
      iVar10 = *(int *)((int)&(this->GetFinalWavelength_nm_MemoizedValue).Data + 4);
      iVar1 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
      *(code **)(iVar10 + -8 + iVar1 * 8) = FixedOrbit::GetEccentricityApoapsisRoot_Clear;
      *(undefined4 *)(iVar10 + -4 + iVar1 * 8) = 0;
    }
    if (*(char *)&(this->FocusingMirror).Composition == '\0') {
      if ((char)(this->SecondFrequencyDoubler).Data.NonlinearOptic._padding_ == '\0') {
        pMVar2 = (this->Mirror).Composition;
        if ((char)(pMVar2->MaterialMemoizationHandlerInstance).ResetFunctions._padding_ == '\0') {
          util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        dVar3 = (pMVar2->LasingMediumProperties).Data.SpontaneousLifetime_s;
      }
      else {
        dVar3 = *(double *)&(this->SecondFrequencyDoubler).Data._padding_ * __real_3fe0000000000000;
      }
    }
    else {
      dVar3 = *(double *)&this->FocusingMirror * __real_3fe0000000000000;
    }
    uStack_90 = CONCAT31(uStack_90._1_3_,1);
    local_98._0_4_ = SUB84(dVar3,0);
    local_98._4_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
    *(undefined4 *)&(this->GetFiringTemperatureJump_K_MemoizedValue).Data = local_98._0_4_;
    *(undefined4 *)((int)&(this->GetFiringTemperatureJump_K_MemoizedValue).Data + 4) =
         local_98._4_4_;
    *(undefined4 *)&(this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData = uStack_90;
    *(undefined4 *)&(this->GetFiringTemperatureJump_K_MemoizedValue).field_0xc = uStack_8c;
    local_98 = (undefined1  [8])dVar3;
    if ((this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData == false) {
      util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  local_70.Data = (char *)0x0;
  pSVar8 = &local_b0;
  local_70.Capacity = 0;
  local_70.Length = 0;
  local_64.Data = (char *)0x0;
  local_64.Capacity = 0;
  local_64.Length = 0;
  pcVar9 = (char *)0x63baf7;
  pLVar6 = (LocStr *)util::LocStr::LocStr((LocStr *)local_140,pSVar8,&local_64);
  iVar10 = 0x63bafe;
  pSVar7 = util::LocStr::operator*(pLVar6);
  GetUnitsOfType((Str<char> *)&stack0xfffffe60,&local_a4);
  SVar4.Capacity = iVar10;
  SVar4.Data = (char *)pSVar8;
  SVar4.Length = unaff_EDI;
  pSVar8 = Print(&local_104,
                 (double)CONCAT44(pcVar9,(int)((ulonglong)(this->ArcLamp).CavitySemiminorAxis_m >>
                                              0x20)),SVar4);
  local_14.Length = 0;
  local_14.Data = (char *)0x0;
  local_14.Capacity = 0;
  util::Str<char>::Str<char>(&local_14,pSVar8);
  util::Str<char>::operator+=(&local_14,pSVar7);
  util::Str<char>::Str<char>((Str<char> *)(local_98 + 4),&local_14);
  if (local_14.Data != (char *)0x0) {
    operator_delete__(local_14.Data);
    local_14._0_8_ = local_14._0_8_ & 0xffffffff00000000;
  }
  ppvVar11 = local_110;
  pSVar8 = (Str<char> *)(**(code **)(((this->Mirror).Composition)->_padding_ + 0x48))();
  local_20.Length = 0;
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  util::Str<char>::Str<char>(&local_20,(Str<char> *)(local_98 + 4));
  util::Str<char>::operator+=(&local_20,pSVar8);
  util::Str<char>::Str<char>(&local_f8,&local_20);
  if (local_20.Data != (char *)0x0) {
    operator_delete__(local_20.Data);
    local_20._0_8_ = local_20._0_8_ & 0xffffffff00000000;
  }
  pLVar6 = (LocStr *)util::LocStr::LocStr((LocStr *)local_158,&local_bc,&local_70);
  pSVar8 = util::LocStr::operator*(pLVar6);
  local_2c.Length = 0;
  local_2c.Data = (char *)0x0;
  local_2c.Capacity = 0;
  util::Str<char>::Str<char>(&local_2c,&local_f8);
  util::Str<char>::operator+=(&local_2c,pSVar8);
  util::Str<char>::Str<char>(&local_ec,&local_2c);
  if (local_2c.Data != (char *)0x0) {
    operator_delete__(local_2c.Data);
    local_2c._0_8_ = local_2c._0_8_ & 0xffffffff00000000;
  }
  pSVar8 = PrintWavelengthName(&local_11c,
                               (double)CONCAT44(ppvVar11,(int)((ulonglong)
                                                               (this->
                                                  GetFiringTemperatureJump_K_MemoizedValue).Data >>
                                                  0x20)));
  local_38.Length = 0;
  local_38.Data = (char *)0x0;
  local_38.Capacity = 0;
  util::Str<char>::Str<char>(&local_38,&local_ec);
  util::Str<char>::operator+=(&local_38,pSVar8);
  util::Str<char>::Str<char>(&local_e0,&local_38);
  if (local_38.Data != (char *)0x0) {
    operator_delete__(local_38.Data);
    local_38._0_8_ = local_38._0_8_ & 0xffffffff00000000;
  }
  pLVar6 = (LocStr *)util::LocStr::LocStr((LocStr *)local_170,&local_c8,&local_7c);
  pSVar8 = util::LocStr::operator*(pLVar6);
  local_44.Length = 0;
  local_44.Data = (char *)0x0;
  local_44.Capacity = 0;
  util::Str<char>::Str<char>(&local_44,&local_e0);
  util::Str<char>::operator+=(&local_44,pSVar8);
  util::Str<char>::Str<char>(&local_d4,&local_44);
  if (local_44.Data != (char *)0x0) {
    operator_delete__(local_44.Data);
    local_44._0_8_ = local_44._0_8_ & 0xffffffff00000000;
  }
  pLVar6 = (LocStr *)util::LocStr::LocStr((LocStr *)local_188,&local_128,&local_88);
  pSVar8 = util::LocStr::operator*(pLVar6);
  local_50.Length = 0;
  local_50.Data = (char *)0x0;
  local_50.Capacity = 0;
  util::Str<char>::Str<char>(&local_50,&local_d4);
  util::Str<char>::operator+=(&local_50,pSVar8);
  util::Str<char>::Str<char>(__return_storage_ptr__,&local_50);
  if (local_50.Data != (char *)0x0) {
    operator_delete__(local_50.Data);
  }
  if (local_d4.Data != (char *)0x0) {
    operator_delete__(local_d4.Data);
  }
  if (local_e0.Data != (char *)0x0) {
    operator_delete__(local_e0.Data);
  }
  if (local_ec.Data != (char *)0x0) {
    operator_delete__(local_ec.Data);
  }
  if (local_f8.Data != (char *)0x0) {
    operator_delete__(local_f8.Data);
  }
  if ((void *)local_98._4_4_ != (void *)0x0) {
    operator_delete__((void *)local_98._4_4_);
  }
  if (local_104.Data != (char *)0x0) {
    operator_delete__(local_104.Data);
    local_104.Data = (char *)0x0;
  }
  if (local_134 != (void *)0x0) {
    operator_delete__(local_134);
    local_134 = (void *)0x0;
  }
  if (local_140[0] != (void *)0x0) {
    operator_delete__(local_140[0]);
    local_140[0] = (void *)0x0;
  }
  if (local_64.Data != (char *)0x0) {
    operator_delete__(local_64.Data);
    local_64.Data = (char *)0x0;
  }
  if (local_110[0] != (void *)0x0) {
    operator_delete__(local_110[0]);
    local_110[0] = (void *)0x0;
  }
  if (local_14c != (void *)0x0) {
    operator_delete__(local_14c);
    local_14c = (void *)0x0;
  }
  if (local_158[0] != (void *)0x0) {
    operator_delete__(local_158[0]);
    local_158[0] = (void *)0x0;
  }
  if (local_70.Data != (char *)0x0) {
    operator_delete__(local_70.Data);
    local_70.Data = (char *)0x0;
  }
  if (local_11c.Data != (char *)0x0) {
    operator_delete__(local_11c.Data);
    local_11c.Data = (char *)0x0;
  }
  if (local_164 != (void *)0x0) {
    operator_delete__(local_164);
    local_164 = (void *)0x0;
  }
  if (local_170[0] != (void *)0x0) {
    operator_delete__(local_170[0]);
    local_170[0] = (void *)0x0;
  }
  if (local_7c.Data != (char *)0x0) {
    operator_delete__(local_7c.Data);
    local_7c.Data = (char *)0x0;
  }
  if (local_17c != (void *)0x0) {
    operator_delete__(local_17c);
    local_17c = (void *)0x0;
  }
  if (local_188[0] != (void *)0x0) {
    operator_delete__(local_188[0]);
    local_188[0] = (void *)0x0;
  }
  if (local_88.Data != (char *)0x0) {
    operator_delete__(local_88.Data);
    local_88.Data = (char *)0x0;
  }
  if (local_a4.Data != (char *)0x0) {
    operator_delete__(local_a4.Data);
    local_a4.Data = (char *)0x0;
  }
  if (local_b0.Data != (char *)0x0) {
    operator_delete__(local_b0.Data);
    local_b0.Data = (char *)0x0;
  }
  if (local_bc.Data != (char *)0x0) {
    operator_delete__(local_bc.Data);
    local_bc.Data = (char *)0x0;
  }
  if (local_c8.Data != (char *)0x0) {
    operator_delete__(local_c8.Data);
    local_c8.Data = (char *)0x0;
  }
  if (local_128.Data != (char *)0x0) {
    operator_delete__(local_128.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}

