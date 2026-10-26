
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::Str<char> __thiscall LaserModule::GetShortName(void)const  */

Str<char> * __thiscall
LaserModule::GetShortName(LaserModule *this,Str<char> *__return_storage_ptr__)

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
  Str<char> *__return_storage_ptr___00;
  int iVar9;
  void *local_11c [3];
  void *local_110;
  void *local_104 [3];
  void *local_f8;
  void *local_ec [3];
  void *local_e0;
  Str<char> local_d4;
  Str<char> local_c8;
  Str<char> local_bc;
  Str<char> local_b0;
  Str<char> local_a4;
  Str<char> local_98;
  Str<char> local_8c;
  Str<char> local_80;
  undefined1 local_74 [8];
  undefined4 uStack_6c;
  undefined4 uStack_68;
  Str<char> local_64;
  Str<char> local_58;
  Str<char> local_4c;
  int local_3c;
  Str<char> local_38;
  Str<char> local_2c;
  Str<char> local_20;
  Str<char> local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  util::Str<char>::Str<char>(&local_d4,"Weapon Laser");
  util::Str<char>::Str<char>(&local_98,"Space");
  util::Str<char>::Str<char>(&local_8c,"ArcLamp.PowerSupplied_W");
  util::Str<char>::Str<char>(&local_80,"Space");
  local_64.Data = (char *)0x0;
  local_64.Capacity = 0;
  local_64.Length = 0;
  local_58.Data = (char *)0x0;
  local_58.Capacity = 0;
  local_58.Length = 0;
  local_4c.Data = (char *)0x0;
  local_4c.Capacity = 0;
  local_4c.Length = 0;
  if ((this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData == false) {
    iVar9 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
    local_3c = iVar9 + 1;
    util::Darray<struct_util::tuple2<enum_Order::Type,int>_>::SetSize
              ((Darray<struct_util::tuple2<enum_Order::Type,int>_> *)
               &this->GetFinalWavelength_nm_MemoizedValue,&local_3c);
    bVar5 = util::Darray<void_(__thiscall_Fleet::*)(void)const_>::CheckSize
                      ((Darray<void_(__thiscall_Fleet::*)(void)const_> *)
                       &this->GetFinalWavelength_nm_MemoizedValue,iVar9);
    if (bVar5) {
      iVar9 = *(int *)((int)&(this->GetFinalWavelength_nm_MemoizedValue).Data + 4);
      iVar1 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
      *(code **)(iVar9 + -8 + iVar1 * 8) = FixedOrbit::GetEccentricityApoapsisRoot_Clear;
      *(undefined4 *)(iVar9 + -4 + iVar1 * 8) = 0;
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
    uStack_6c = CONCAT31(uStack_6c._1_3_,1);
    local_74._0_4_ = SUB84(dVar3,0);
    local_74._4_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
    *(undefined4 *)&(this->GetFiringTemperatureJump_K_MemoizedValue).Data = local_74._0_4_;
    *(undefined4 *)((int)&(this->GetFiringTemperatureJump_K_MemoizedValue).Data + 4) =
         local_74._4_4_;
    *(undefined4 *)&(this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData = uStack_6c;
    *(undefined4 *)&(this->GetFiringTemperatureJump_K_MemoizedValue).field_0xc = uStack_68;
    local_74 = (undefined1  [8])dVar3;
    if ((this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData == false) {
      util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  pLVar6 = (LocStr *)util::LocStr::LocStr((LocStr *)local_ec,&local_80,&local_4c);
  pSVar7 = util::LocStr::operator*(pLVar6);
  __return_storage_ptr___00 = &local_bc;
  pSVar8 = PrintWavelengthName(__return_storage_ptr___00,
                               (double)CONCAT44(unaff_EDI,
                                                (int)((ulonglong)
                                                      (this->
                                                  GetFiringTemperatureJump_K_MemoizedValue).Data >>
                                                  0x20)));
  local_14.Length = 0;
  local_14.Data = (char *)0x0;
  local_14.Capacity = 0;
  util::Str<char>::Str<char>(&local_14,pSVar8);
  util::Str<char>::operator+=(&local_14,pSVar7);
  pSVar7 = &local_14;
  iVar9 = 0x63c215;
  util::Str<char>::Str<char>((Str<char> *)(local_74 + 4),pSVar7);
  if ((Str<char> *)local_14.Data != (Str<char> *)0x0) {
    iVar9 = 0x63c222;
    pSVar7 = (Str<char> *)local_14.Data;
    operator_delete__(local_14.Data);
    local_14._0_8_ = local_14._0_8_ & 0xffffffff00000000;
  }
  GetUnitsOfType((Str<char> *)&stack0xfffffecc,&local_8c);
  SVar4.Capacity = (int)pSVar7;
  SVar4.Data = (char *)iVar9;
  SVar4.Length = unaff_EDI;
  pSVar7 = Print(&local_c8,
                 (double)CONCAT44(__return_storage_ptr___00,
                                  (int)((ulonglong)(this->ArcLamp).CavitySemiminorAxis_m >> 0x20)),
                 SVar4);
  local_20.Length = 0;
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  util::Str<char>::Str<char>(&local_20,(Str<char> *)(local_74 + 4));
  util::Str<char>::operator+=(&local_20,pSVar7);
  util::Str<char>::Str<char>(&local_b0,&local_20);
  if (local_20.Data != (char *)0x0) {
    operator_delete__(local_20.Data);
    local_20._0_8_ = local_20._0_8_ & 0xffffffff00000000;
  }
  pLVar6 = (LocStr *)util::LocStr::LocStr((LocStr *)local_104,&local_98,&local_58);
  pSVar7 = util::LocStr::operator*(pLVar6);
  local_2c.Length = 0;
  local_2c.Data = (char *)0x0;
  local_2c.Capacity = 0;
  util::Str<char>::Str<char>(&local_2c,&local_b0);
  util::Str<char>::operator+=(&local_2c,pSVar7);
  util::Str<char>::Str<char>(&local_a4,&local_2c);
  if (local_2c.Data != (char *)0x0) {
    operator_delete__(local_2c.Data);
    local_2c._0_8_ = local_2c._0_8_ & 0xffffffff00000000;
  }
  pLVar6 = (LocStr *)util::LocStr::LocStr((LocStr *)local_11c,&local_d4,&local_64);
  pSVar7 = util::LocStr::operator*(pLVar6);
  local_38.Length = 0;
  local_38.Data = (char *)0x0;
  local_38.Capacity = 0;
  util::Str<char>::Str<char>(&local_38,&local_a4);
  util::Str<char>::operator+=(&local_38,pSVar7);
  util::Str<char>::Str<char>(__return_storage_ptr__,&local_38);
  if (local_38.Data != (char *)0x0) {
    operator_delete__(local_38.Data);
  }
  if (local_a4.Data != (char *)0x0) {
    operator_delete__(local_a4.Data);
  }
  if (local_b0.Data != (char *)0x0) {
    operator_delete__(local_b0.Data);
  }
  if ((void *)local_74._4_4_ != (void *)0x0) {
    operator_delete__((void *)local_74._4_4_);
  }
  if (local_bc.Data != (char *)0x0) {
    operator_delete__(local_bc.Data);
    local_bc.Data = (char *)0x0;
  }
  if (local_e0 != (void *)0x0) {
    operator_delete__(local_e0);
    local_e0 = (void *)0x0;
  }
  if (local_ec[0] != (void *)0x0) {
    operator_delete__(local_ec[0]);
    local_ec[0] = (void *)0x0;
  }
  if (local_4c.Data != (char *)0x0) {
    operator_delete__(local_4c.Data);
    local_4c.Data = (char *)0x0;
  }
  if (local_c8.Data != (char *)0x0) {
    operator_delete__(local_c8.Data);
    local_c8.Data = (char *)0x0;
  }
  if (local_f8 != (void *)0x0) {
    operator_delete__(local_f8);
    local_f8 = (void *)0x0;
  }
  if (local_104[0] != (void *)0x0) {
    operator_delete__(local_104[0]);
    local_104[0] = (void *)0x0;
  }
  if (local_58.Data != (char *)0x0) {
    operator_delete__(local_58.Data);
    local_58.Data = (char *)0x0;
  }
  if (local_110 != (void *)0x0) {
    operator_delete__(local_110);
    local_110 = (void *)0x0;
  }
  if (local_11c[0] != (void *)0x0) {
    operator_delete__(local_11c[0]);
    local_11c[0] = (void *)0x0;
  }
  if (local_64.Data != (char *)0x0) {
    operator_delete__(local_64.Data);
    local_64.Data = (char *)0x0;
  }
  if (local_80.Data != (char *)0x0) {
    operator_delete__(local_80.Data);
    local_80.Data = (char *)0x0;
  }
  if (local_8c.Data != (char *)0x0) {
    operator_delete__(local_8c.Data);
    local_8c.Data = (char *)0x0;
  }
  if (local_98.Data != (char *)0x0) {
    operator_delete__(local_98.Data);
    local_98.Data = (char *)0x0;
  }
  if (local_d4.Data != (char *)0x0) {
    operator_delete__(local_d4.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}

