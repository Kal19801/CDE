// pilot_032_laser17.c - Laser 17 batch pilot (p89): 14/17 poison-fixed decompiles
// assembled by scripts/pilot032_assemble.py v2 from decomp2c v2 output.
// deferred (next round): GetAdvancedInfo / RenderInitialStateTransparent /
//   GetThermalLensingQualityFactor -- slice+unaff+vftable tail, VAs in log
// Honest TODOs inline; fix log: reports/poison_fix/laser17_pilot032_log.txt
#include "port_prelude.h"

undefined4 _pMStack_28; /* auto: stack pointer slot */
undefined1 stack0xfffffe60[16]; /* auto: dynamic stack slot */
undefined1 stack0xfffffecc[16]; /* auto: dynamic stack slot */
undefined1 stack0xffffff08[16]; /* auto: dynamic stack slot */
undefined1 stack0xffffff48[16]; /* auto: dynamic stack slot */
undefined1 stack0xffffffd9[16]; /* auto: dynamic stack slot */
typedef union {
  struct {
    undefined8 _0_8_;
    undefined8 _4_8_;
    undefined8 _8_8_;
  };
  struct {
    undefined1 _1_7_[7];
  };
  struct {
    undefined4 _0_4_;
    undefined4 _4_4_;
  };
  struct {
    undefined1 _1_3_[3];
  };
  undefined1 raw[32];
} slice_view;
/* ---- externs: stub-oracle names (K&R; ret types by call site) ---- */
extern int FixedOrbit_GetEccentricityApoapsisRoot_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int FixedOrbit_GetEccentricityPeriapsisRoot_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Fleet_GetOriginalDeltaV_km_s_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Fleet_GetRemainingDeltaV_km_s_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */

//==== 0063b920 63b920_LaserModule__GetGeneratedName ====

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::Str<char> __thiscall LaserModule__GetGeneratedName(void)const  */

Str_L_char_G_ * __thiscall
LaserModule__GetGeneratedName(LaserModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  int iVar1;
  Material *pMVar2;
  double dVar3;
  Str_L_char_G_ SVar4;
  bool bVar5;
  LocStr *pLVar6;
  Str_L_char_G_ *pSVar7;
  Str_L_char_G_ *pSVar8;
  int unaff_EDI;
  char *pcVar9;
  int iVar10;
  void **ppvVar11;
  void *local_188[3];
  void *local_17c;
  void *local_170[3];
  void *local_164;
  void *local_158[3];
  void *local_14c;
  void *local_140[3];
  void *local_134;
  Str_L_char_G_ local_128;
  Str_L_char_G_ local_11c;
  void *local_110[3];
  Str_L_char_G_ local_104;
  Str_L_char_G_ local_f8;
  Str_L_char_G_ local_ec;
  Str_L_char_G_ local_e0;
  Str_L_char_G_ local_d4;
  Str_L_char_G_ local_c8;
  Str_L_char_G_ local_bc;
  Str_L_char_G_ local_b0;
  Str_L_char_G_ local_a4;
  undefined1 local_98[8];
  undefined8 uStack_90;
  undefined4 uStack_8c;
  Str_L_char_G_ local_88;
  Str_L_char_G_ local_7c;
  Str_L_char_G_ local_70;
  Str_L_char_G_ local_64;
  int local_54;
  Str_L_char_G_ local_50;
  Str_L_char_G_ local_44;
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  util__Str_char___Str_char__o5(&local_128,"Weapon Laser");
  util__Str_char___Str_char__o5(&local_c8,"Space");
  util__Str_char___Str_char__o5(&local_bc,"Space");
  util__Str_char___Str_char__o5(&local_b0,"Space");
  util__Str_char___Str_char__o5(&local_a4,"ArcLamp.PowerSupplied_W");
  local_88.Data = (char *)0x0;
  local_88.Capacity = 0;
  local_88.Length = 0;
  local_7c.Data = (char *)0x0;
  local_7c.Capacity = 0;
  local_7c.Length = 0;
  if ((this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData == false) {
    iVar10 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
    local_54 = iVar10 + 1;
    util__Darray_struct_util__tuple2_enum_Order__Type_int_____SetSize
              ((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)
               &this->GetFinalWavelength_nm_MemoizedValue,&local_54);
    bVar5 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &this->GetFinalWavelength_nm_MemoizedValue,iVar10);
    if (bVar5) {
      iVar10 = *(int *)((int)&(this->GetFinalWavelength_nm_MemoizedValue).Data + 4);
      iVar1 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
      *(code **)(iVar10 + -8 + iVar1 * 8) = FixedOrbit_GetEccentricityApoapsisRoot_Clear;
      *(undefined4 *)(iVar10 + -4 + iVar1 * 8) = 0;
    }
    if (*(char *)&(this->FocusingMirror).Composition == '\0') {
      if ((char)(this->SecondFrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x0_0 == '\0') {
        pMVar2 = (this->Mirror).Composition;
        if ((char)(pMVar2->MaterialMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        dVar3 = (pMVar2->LasingMediumProperties).Data.SpontaneousLifetime_s;
      }
      else {
        dVar3 = *(double *)&(this->SecondFrequencyDoubler).Data._pad_0x0_0 * /*3fe0000000000000*/0.5;
      }
    }
    else {
      dVar3 = *(double *)&this->FocusingMirror * /*3fe0000000000000*/0.5;
    }
    ((slice_view *)&uStack_90)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_90)->_1_3_[0] | (((slice_view *)&uStack_90)->_1_3_[1] << 8) | (((slice_view *)&uStack_90)->_1_3_[2] << 16)) << 8));
    ((slice_view *)&local_98)->_0_4_ = *(undefined4 *)&dVar3;
    ((slice_view *)&local_98)->_4_4_ = *(undefined4 *)((char *)&dVar3 + 4);
    *(undefined4 *)&(this->GetFiringTemperatureJump_K_MemoizedValue).Data = ((slice_view *)&local_98)->_0_4_;
    *(undefined4 *)((int)&(this->GetFiringTemperatureJump_K_MemoizedValue).Data + 4) =
         ((slice_view *)&local_98)->_4_4_;
    *(undefined4 *)&(this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData = uStack_90;
    *(undefined4 *)((char *)&(this->GetFiringTemperatureJump_K_MemoizedValue) + 0xc) = uStack_8c;
    *(double *)&local_98 = dVar3;
    if ((this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
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
  pLVar6 = (LocStr *)util__LocStr__LocStr((LocStr *)local_140,pSVar8,&local_64);
  iVar10 = 0x63bafe;
  pSVar7 = util__LocStr__operator__o3(pLVar6);
  GetUnitsOfType((Str_L_char_G_ *)&stack0xfffffe60,&local_a4);
  SVar4.Capacity = iVar10;
  SVar4.Data = (char *)pSVar8;
  SVar4.Length = unaff_EDI;
  pSVar8 = Print(&local_104,
                 (double)CONCAT44(pcVar9,(int)((ulonglong)(this->ArcLamp).CavitySemiminorAxis_m >>
                                              0x20)),SVar4);
  local_14.Length = 0;
  local_14.Data = (char *)0x0;
  local_14.Capacity = 0;
  util__Str_char___Str_char(&local_14,pSVar8);
  util__Str_char___operator__o10(&local_14,pSVar7);
  util__Str_char___Str_char((Str_L_char_G_ *)(local_98 + 4),&local_14);
  if (local_14.Data != (char *)0x0) {
    operator_delete__(local_14.Data);
    ((slice_view *)&local_14)->_0_8_ = ((slice_view *)&local_14)->_0_8_ & 0xffffffff00000000;
  }
  ppvVar11 = local_110;
  pSVar8 = (Str_L_char_G_ *)(**(code **)(((this->Mirror).Composition)->_pad_0x0_0 + 0x48))();
  local_20.Length = 0;
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  util__Str_char___Str_char(&local_20,(Str_L_char_G_ *)(local_98 + 4));
  util__Str_char___operator__o10(&local_20,pSVar8);
  util__Str_char___Str_char(&local_f8,&local_20);
  if (local_20.Data != (char *)0x0) {
    operator_delete__(local_20.Data);
    ((slice_view *)&local_20)->_0_8_ = ((slice_view *)&local_20)->_0_8_ & 0xffffffff00000000;
  }
  pLVar6 = (LocStr *)util__LocStr__LocStr((LocStr *)local_158,&local_bc,&local_70);
  pSVar8 = util__LocStr__operator__o3(pLVar6);
  local_2c.Length = 0;
  local_2c.Data = (char *)0x0;
  local_2c.Capacity = 0;
  util__Str_char___Str_char(&local_2c,&local_f8);
  util__Str_char___operator__o10(&local_2c,pSVar8);
  util__Str_char___Str_char(&local_ec,&local_2c);
  if (local_2c.Data != (char *)0x0) {
    operator_delete__(local_2c.Data);
    ((slice_view *)&local_2c)->_0_8_ = ((slice_view *)&local_2c)->_0_8_ & 0xffffffff00000000;
  }
  pSVar8 = PrintWavelengthName(&local_11c,
                               (double)CONCAT44(ppvVar11,(int)((ulonglong)
                                                               (this->
                                                  GetFiringTemperatureJump_K_MemoizedValue).Data >>
                                                  0x20)));
  local_38.Length = 0;
  local_38.Data = (char *)0x0;
  local_38.Capacity = 0;
  util__Str_char___Str_char(&local_38,&local_ec);
  util__Str_char___operator__o10(&local_38,pSVar8);
  util__Str_char___Str_char(&local_e0,&local_38);
  if (local_38.Data != (char *)0x0) {
    operator_delete__(local_38.Data);
    ((slice_view *)&local_38)->_0_8_ = ((slice_view *)&local_38)->_0_8_ & 0xffffffff00000000;
  }
  pLVar6 = (LocStr *)util__LocStr__LocStr((LocStr *)local_170,&local_c8,&local_7c);
  pSVar8 = util__LocStr__operator__o3(pLVar6);
  local_44.Length = 0;
  local_44.Data = (char *)0x0;
  local_44.Capacity = 0;
  util__Str_char___Str_char(&local_44,&local_e0);
  util__Str_char___operator__o10(&local_44,pSVar8);
  util__Str_char___Str_char(&local_d4,&local_44);
  if (local_44.Data != (char *)0x0) {
    operator_delete__(local_44.Data);
    ((slice_view *)&local_44)->_0_8_ = ((slice_view *)&local_44)->_0_8_ & 0xffffffff00000000;
  }
  pLVar6 = (LocStr *)util__LocStr__LocStr((LocStr *)local_188,&local_128,&local_88);
  pSVar8 = util__LocStr__operator__o3(pLVar6);
  local_50.Length = 0;
  local_50.Data = (char *)0x0;
  local_50.Capacity = 0;
  util__Str_char___Str_char(&local_50,&local_d4);
  util__Str_char___operator__o10(&local_50,pSVar8);
  util__Str_char___Str_char(__return_storage_ptr__,&local_50);
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
  if ((void *)((slice_view *)&local_98)->_4_4_ != (void *)0x0) {
    operator_delete__((void *)((slice_view *)&local_98)->_4_4_);
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


//==== 0063c020 63c020_LaserModule__GetShortName ====

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::Str<char> __thiscall LaserModule__GetShortName(void)const  */

Str_L_char_G_ * __thiscall
LaserModule__GetShortName(LaserModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  int iVar1;
  Material *pMVar2;
  double dVar3;
  Str_L_char_G_ SVar4;
  bool bVar5;
  LocStr *pLVar6;
  Str_L_char_G_ *pSVar7;
  Str_L_char_G_ *pSVar8;
  int unaff_EDI;
  Str_L_char_G_ *__return_storage_ptr___00;
  int iVar9;
  void *local_11c[3];
  void *local_110;
  void *local_104[3];
  void *local_f8;
  void *local_ec[3];
  void *local_e0;
  Str_L_char_G_ local_d4;
  Str_L_char_G_ local_c8;
  Str_L_char_G_ local_bc;
  Str_L_char_G_ local_b0;
  Str_L_char_G_ local_a4;
  Str_L_char_G_ local_98;
  Str_L_char_G_ local_8c;
  Str_L_char_G_ local_80;
  undefined1 local_74[8];
  undefined8 uStack_6c;
  undefined4 uStack_68;
  Str_L_char_G_ local_64;
  Str_L_char_G_ local_58;
  Str_L_char_G_ local_4c;
  int local_3c;
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  util__Str_char___Str_char__o5(&local_d4,"Weapon Laser");
  util__Str_char___Str_char__o5(&local_98,"Space");
  util__Str_char___Str_char__o5(&local_8c,"ArcLamp.PowerSupplied_W");
  util__Str_char___Str_char__o5(&local_80,"Space");
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
    util__Darray_struct_util__tuple2_enum_Order__Type_int_____SetSize
              ((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)
               &this->GetFinalWavelength_nm_MemoizedValue,&local_3c);
    bVar5 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &this->GetFinalWavelength_nm_MemoizedValue,iVar9);
    if (bVar5) {
      iVar9 = *(int *)((int)&(this->GetFinalWavelength_nm_MemoizedValue).Data + 4);
      iVar1 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
      *(code **)(iVar9 + -8 + iVar1 * 8) = FixedOrbit_GetEccentricityApoapsisRoot_Clear;
      *(undefined4 *)(iVar9 + -4 + iVar1 * 8) = 0;
    }
    if (*(char *)&(this->FocusingMirror).Composition == '\0') {
      if ((char)(this->SecondFrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x0_0 == '\0') {
        pMVar2 = (this->Mirror).Composition;
        if ((char)(pMVar2->MaterialMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        dVar3 = (pMVar2->LasingMediumProperties).Data.SpontaneousLifetime_s;
      }
      else {
        dVar3 = *(double *)&(this->SecondFrequencyDoubler).Data._pad_0x0_0 * /*3fe0000000000000*/0.5;
      }
    }
    else {
      dVar3 = *(double *)&this->FocusingMirror * /*3fe0000000000000*/0.5;
    }
    ((slice_view *)&uStack_6c)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_6c)->_1_3_[0] | (((slice_view *)&uStack_6c)->_1_3_[1] << 8) | (((slice_view *)&uStack_6c)->_1_3_[2] << 16)) << 8));
    ((slice_view *)&local_74)->_0_4_ = *(undefined4 *)&dVar3;
    ((slice_view *)&local_74)->_4_4_ = *(undefined4 *)((char *)&dVar3 + 4);
    *(undefined4 *)&(this->GetFiringTemperatureJump_K_MemoizedValue).Data = ((slice_view *)&local_74)->_0_4_;
    *(undefined4 *)((int)&(this->GetFiringTemperatureJump_K_MemoizedValue).Data + 4) =
         ((slice_view *)&local_74)->_4_4_;
    *(undefined4 *)&(this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData = uStack_6c;
    *(undefined4 *)((char *)&(this->GetFiringTemperatureJump_K_MemoizedValue) + 0xc) = uStack_68;
    *(double *)&local_74 = dVar3;
    if ((this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  pLVar6 = (LocStr *)util__LocStr__LocStr((LocStr *)local_ec,&local_80,&local_4c);
  pSVar7 = util__LocStr__operator__o3(pLVar6);
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
  util__Str_char___Str_char(&local_14,pSVar8);
  util__Str_char___operator__o10(&local_14,pSVar7);
  pSVar7 = &local_14;
  iVar9 = 0x63c215;
  util__Str_char___Str_char((Str_L_char_G_ *)(local_74 + 4),pSVar7);
  if ((Str_L_char_G_ *)local_14.Data != (Str_L_char_G_ *)0x0) {
    iVar9 = 0x63c222;
    pSVar7 = (Str_L_char_G_ *)local_14.Data;
    operator_delete__(local_14.Data);
    ((slice_view *)&local_14)->_0_8_ = ((slice_view *)&local_14)->_0_8_ & 0xffffffff00000000;
  }
  GetUnitsOfType((Str_L_char_G_ *)&stack0xfffffecc,&local_8c);
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
  util__Str_char___Str_char(&local_20,(Str_L_char_G_ *)(local_74 + 4));
  util__Str_char___operator__o10(&local_20,pSVar7);
  util__Str_char___Str_char(&local_b0,&local_20);
  if (local_20.Data != (char *)0x0) {
    operator_delete__(local_20.Data);
    ((slice_view *)&local_20)->_0_8_ = ((slice_view *)&local_20)->_0_8_ & 0xffffffff00000000;
  }
  pLVar6 = (LocStr *)util__LocStr__LocStr((LocStr *)local_104,&local_98,&local_58);
  pSVar7 = util__LocStr__operator__o3(pLVar6);
  local_2c.Length = 0;
  local_2c.Data = (char *)0x0;
  local_2c.Capacity = 0;
  util__Str_char___Str_char(&local_2c,&local_b0);
  util__Str_char___operator__o10(&local_2c,pSVar7);
  util__Str_char___Str_char(&local_a4,&local_2c);
  if (local_2c.Data != (char *)0x0) {
    operator_delete__(local_2c.Data);
    ((slice_view *)&local_2c)->_0_8_ = ((slice_view *)&local_2c)->_0_8_ & 0xffffffff00000000;
  }
  pLVar6 = (LocStr *)util__LocStr__LocStr((LocStr *)local_11c,&local_d4,&local_64);
  pSVar7 = util__LocStr__operator__o3(pLVar6);
  local_38.Length = 0;
  local_38.Data = (char *)0x0;
  local_38.Capacity = 0;
  util__Str_char___Str_char(&local_38,&local_a4);
  util__Str_char___operator__o10(&local_38,pSVar7);
  util__Str_char___Str_char(__return_storage_ptr__,&local_38);
  if (local_38.Data != (char *)0x0) {
    operator_delete__(local_38.Data);
  }
  if (local_a4.Data != (char *)0x0) {
    operator_delete__(local_a4.Data);
  }
  if (local_b0.Data != (char *)0x0) {
    operator_delete__(local_b0.Data);
  }
  if ((void *)((slice_view *)&local_74)->_4_4_ != (void *)0x0) {
    operator_delete__((void *)((slice_view *)&local_74)->_4_4_);
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


//==== 0063d010 63d010_LaserModule__GetRadiusAtDistance_m ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual double __thiscall LaserModule__GetRadiusAtDistance_m(double)const  */

double __thiscall LaserModule__GetRadiusAtDistance_m(LaserModule *this,double param_1)

{
  int iVar1;
  int iVar2;
  Material *pMVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  Maybe_L_double_G_ *pMVar7;
  float10 fVar8;
  double dVar9;
  double dVar10;
  Maybe_L_double_G_ local_64;
  undefined8 local_54;
  undefined8 uStack_4c;
  double local_44;
  undefined8 uStack_3c;
  double local_34;
  double local_2c;
  undefined1 local_24[16];
  double local_14;
  undefined8 local_c;
  
  local_c = GetThermalLensingQualityFactor(this);
  local_14 = local_c * local_c + /*4022000000000000*/9.0;
  pMVar7 = util__Sqrt(&local_64,&local_14);
  if (pMVar7->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  ((slice_view *)&local_24)->_8_8_ = pMVar7->Data;
  if ((this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData == false) {
    iVar1 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
    local_c = (double)CONCAT44(iVar1 + 1,(undefined4)local_c);
    util__Darray_struct_util__tuple2_enum_Order__Type_int_____SetSize
              ((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)
               &this->GetFinalWavelength_nm_MemoizedValue,(int *)((int)&local_c + 4));
    bVar6 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &this->GetFinalWavelength_nm_MemoizedValue,iVar1);
    if (bVar6) {
      iVar1 = *(int *)((int)&(this->GetFinalWavelength_nm_MemoizedValue).Data + 4);
      iVar2 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
      *(code **)(iVar1 + -8 + iVar2 * 8) = FixedOrbit_GetEccentricityApoapsisRoot_Clear;
      *(undefined4 *)(iVar1 + -4 + iVar2 * 8) = 0;
    }
    if (*(char *)&(this->FocusingMirror).Composition == '\0') {
      if ((char)(this->SecondFrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x0_0 == '\0') {
        pMVar3 = (this->Mirror).Composition;
        if ((char)(pMVar3->MaterialMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        dVar10 = (pMVar3->LasingMediumProperties).Data.SpontaneousLifetime_s;
      }
      else {
        dVar10 = *(double *)&(this->SecondFrequencyDoubler).Data._pad_0x0_0 * /*3fe0000000000000*/0.5
        ;
      }
    }
    else {
      dVar10 = *(double *)&this->FocusingMirror * /*3fe0000000000000*/0.5;
    }
    uVar4 = uStack_4c;
    uStack_4c = (double)CONCAT71(((slice_view *)&uStack_4c)->_1_7_,1);
    uVar5 = uStack_4c;
    ((slice_view *)&local_54)->_0_4_ = *(undefined4 *)&dVar10;
    ((slice_view *)&local_54)->_4_4_ = *(undefined4 *)((char *)&dVar10 + 4);
    ((slice_view *)&uStack_4c)->_4_4_ = SUB84(uVar4,4);
    *(undefined4 *)&(this->GetFiringTemperatureJump_K_MemoizedValue).Data = (undefined4)local_54;
    *(undefined4 *)((int)&(this->GetFiringTemperatureJump_K_MemoizedValue).Data + 4) =
         ((slice_view *)&local_54)->_4_4_;
    *(undefined4 *)&(this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData =
         (undefined4)uStack_4c;
    *(undefined4 *)((char *)&(this->GetFiringTemperatureJump_K_MemoizedValue) + 0xc) = ((slice_view *)&uStack_4c)->_4_4_;
    local_54 = dVar10;
    uStack_4c = (double)uVar5;
    if ((this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  dVar9 = Physics__GetDiffractionLimitedAngle_radians((this->GetFiringTemperatureJump_K_MemoizedValue).Data,
                     (this->FocusingMirror).CachedRadius_m);
  dVar10 = param_1 * /*408f400000000000*/1000.0;
  local_2c = dVar9 * (double)((slice_view *)&local_24)->_8_8_ * /*3fe0000000000000*/0.5;
  ((slice_view *)&local_24)->_8_8_ = dVar10;
  uStack_4c = util__Tan(&local_2c);
  uStack_4c = uStack_4c * (double)((slice_view *)&local_24)->_8_8_;
  if ((char)(this->ArcLamp).ArcLampPumpSubModuleMemoizationHandlerInstance.ResetFunctions.Size ==
      '\0') {
    iVar1 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
    local_c = (double)CONCAT44(iVar1 + 1,(undefined4)local_c);
    util__Darray_struct_util__tuple2_enum_Order__Type_int_____SetSize
              ((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)
               &this->GetFinalWavelength_nm_MemoizedValue,(int *)((int)&local_c + 4));
    bVar6 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &this->GetFinalWavelength_nm_MemoizedValue,iVar1);
    if (bVar6) {
      iVar1 = *(int *)((int)&(this->GetFinalWavelength_nm_MemoizedValue).Data + 4);
      iVar2 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
      *(code **)(iVar1 + -8 + iVar2 * 8) = LaserModule__GetMirrorFocalLengthLimit_m_Clear;
      *(undefined4 *)(iVar1 + -4 + iVar2 * 8) = 0;
    }
    local_c = Material__GetPoissonsRatio(*(Material **)&(this->FocusingMirror).CachedIsMirror);
    fVar8 = (float10)(**(code **)(*(int *)&(this->FocusingMirror).CachedWavelength_nm + 0x7c))();
    local_34 = *(double *)&this->Unmounted;
    ((slice_view *)&local_24)->_8_8_ = (undefined8)fVar8;
    uStack_3c = Material__GetYoungsModulus_Pa(*(Material **)&(this->FocusingMirror).CachedIsMirror);
    ((slice_view *)&local_24)->_8_8_ = (double)((slice_view *)&local_24)->_8_8_ * (double)((slice_view *)&local_24)->_8_8_ * (double)((slice_view *)&local_24)->_8_8_;
    uStack_3c = uStack_3c * (double)((slice_view *)&local_24)->_8_8_;
    ((slice_view *)&local_24)->_8_8_ =
         Material__GetYieldStrength_Pa(*(Material **)&(this->FocusingMirror).CachedIsMirror);
    dVar9 = uStack_3c;
    uStack_3c = (double)CONCAT71(((slice_view *)&uStack_3c)->_1_7_,1);
    uVar4 = uStack_3c;
    local_44 = (dVar9 / ((double)((slice_view *)&local_24)->_8_8_ *
                         (/*3ff0000000000000*/1.0 - local_c * local_c) * /*4028000000000000*/12.0 *
                         /*3f90000000000000*/0.015625 * /*4010000000000000*/4.0 * local_34 * local_34 *
                        ((local_c + /*4008000000000000*/3.0) / (local_c + /*3ff0000000000000*/1.0)))
               ) * /*3fe0000000000000*/0.5;
    ((slice_view *)&uStack_3c)->_4_4_ = SUB84(dVar9,4);
    *(double *)&(this->ArcLamp).ArcLampPumpSubModuleMemoizationHandlerInstance.ResetFunctions =
         local_44;
    (this->ArcLamp).ArcLampPumpSubModuleMemoizationHandlerInstance.ResetFunctions.Size =
         (int)uStack_3c;
    (this->ArcLamp).ArcLampPumpSubModuleMemoizationHandlerInstance.ResetFunctions.Capacity =
         ((slice_view *)&uStack_3c)->_4_4_;
    if ((char)(this->ArcLamp).ArcLampPumpSubModuleMemoizationHandlerInstance.ResetFunctions.Size ==
        '\0') {
      uStack_3c = (double)uVar4;
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  dVar9 = *(double *)&(this->ArcLamp).ArcLampPumpSubModuleMemoizationHandlerInstance.ResetFunctions;
  if (dVar10 <= dVar9) {
    dVar10 = dVar9;
  }
  uStack_3c = (this->FocusingMirror).CachedRadius_m / dVar10;
  dVar9 = GetBeamWaistRadius_m(this,dVar10);
  uStack_3c = 0.0 / (dVar9 / uStack_3c);
  local_34 = uStack_3c * uStack_3c + /*3ff0000000000000*/1.0;
  pMVar7 = util__Sqrt((Maybe_L_double_G_ *)local_24,&local_34);
  if (pMVar7->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar10 = GetBeamWaistRadius_m(this,dVar10);
  return dVar10 * pMVar7->Data + uStack_4c;
}


//==== 00644fc0 644fc0_LaserModule__GetArclampSpectraIntensity_W ====
#undef CavityWallComposition /* auto(v2): compat 僵尸宏撞成员名 */
#undef CavityCoolantComposition /* auto(v2): compat 僵尸宏撞成员名 */


/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: double __thiscall LaserModule__GetArclampSpectraIntensity_W(double)const  */

double __thiscall LaserModule__GetArclampSpectraIntensity_W(LaserModule *this,double param_1)

{
  Maybe_L_double_G_ *this_00;
  int iVar1;
  bool bVar2;
  double dVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  Material *pMStack_10;
  Material *pMStack_c;
  int local_8;
  
  dVar3 = 0.0;
  if (0.0 < param_1) {
    this_00 = &(this->ArcLamp).GetMaxPowerLine_W_MemoizedValue;
    if (*(char *)&(this->ArcLamp).CavityWallComposition == '\0') {
      iVar1 = *(int *)&(this->ArcLamp).GetTotalPowerAcrossAllWavelengths_W_MemoizedValue.IsValidData
      ;
      local_8 = iVar1 + 1;
      util__Darray_class_util__Reflectable____SetSize
                ((Darray_L_util__Reflectable_P_G_ *)
                 &(this->ArcLamp).GetTotalPowerAcrossAllWavelengths_W_MemoizedValue,&local_8);
      bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                        ((Darray_L_GraphicsResource__Type_G_ *)
                         &(this->ArcLamp).GetTotalPowerAcrossAllWavelengths_W_MemoizedValue,iVar1);
      if (bVar2) {
        *(code **)(*(int *)((int)&(this->ArcLamp).GetTotalPowerAcrossAllWavelengths_W_MemoizedValue.
                                  Data + 4) + -4 +
                  *(int *)&(this->ArcLamp).GetTotalPowerAcrossAllWavelengths_W_MemoizedValue.
                           IsValidData * 4) = Fleet_GetOriginalDeltaV_km_s_Clear;
      }
      dVar3 = ArcLampPumpSubModule__GetTotalPowerAcrossAllWavelengths_W_MemoizedFunction((ArcLampPumpSubModule *)this_00);
      ((slice_view *)&pMStack_10)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&pMStack_10)->_1_3_[0] | (((slice_view *)&pMStack_10)->_1_3_[1] << 8) | (((slice_view *)&pMStack_10)->_1_3_[2] << 16)) << 8));
      local_18 = *(undefined4 *)&dVar3;
      uStack_14 = *(undefined4 *)((char *)&dVar3 + 4);
      *(undefined4 *)&(this->ArcLamp).Radius_m = local_18;
      *(undefined4 *)((int)&(this->ArcLamp).Radius_m + 4) = uStack_14;
      (this->ArcLamp).CavityWallComposition = pMStack_10;
      (this->ArcLamp).CavityCoolantComposition = pMStack_c;
      if (*(char *)&(this->ArcLamp).CavityWallComposition == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
    }
    dVar3 = ArcLampPumpSubModule__GetPowerAtWavelength_W((ArcLampPumpSubModule *)this_00,param_1,/*403e000000000000*/30.0);
    dVar3 = (dVar3 * (this->ArcLamp).CavitySemiminorAxis_m) / (this->ArcLamp).Radius_m;
  }
  return dVar3;
}


//==== 006450a0 6450a0_LaserModule__GetBeamWaistRadius_m ====

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall LaserModule__GetBeamWaistRadius_m(double)const  */

double __thiscall LaserModule__GetBeamWaistRadius_m(LaserModule *this,double param_1)

{
  int iVar1;
  int iVar2;
  Material *pMVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  Maybe_L_double_G_ *pMVar8;
  Maybe_L_double_G_ local_34;
  double local_24;
  double local_1c;
  undefined8 local_14;
  undefined8 uStack_c;
  
  uStack_c = GetThermalLensingQualityFactor(this);
  local_1c = uStack_c * uStack_c + /*4022000000000000*/9.0;
  pMVar8 = util__Sqrt(&local_34,&local_1c);
  if (pMVar8->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_24 = pMVar8->Data;
  if ((this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData == false) {
    iVar1 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
    uStack_c = (double)CONCAT44(iVar1 + 1,(undefined4)uStack_c);
    util__Darray_struct_util__tuple2_enum_Order__Type_int_____SetSize
              ((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)
               &this->GetFinalWavelength_nm_MemoizedValue,(int *)((int)&uStack_c + 4));
    bVar7 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &this->GetFinalWavelength_nm_MemoizedValue,iVar1);
    if (bVar7) {
      iVar1 = *(int *)((int)&(this->GetFinalWavelength_nm_MemoizedValue).Data + 4);
      iVar2 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
      *(code **)(iVar1 + -8 + iVar2 * 8) = FixedOrbit_GetEccentricityApoapsisRoot_Clear;
      *(undefined4 *)(iVar1 + -4 + iVar2 * 8) = 0;
    }
    if (*(char *)&(this->FocusingMirror).Composition == '\0') {
      if ((char)(this->SecondFrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x0_0 == '\0') {
        pMVar3 = (this->Mirror).Composition;
        if ((char)(pMVar3->MaterialMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        dVar4 = (pMVar3->LasingMediumProperties).Data.SpontaneousLifetime_s;
      }
      else {
        dVar4 = *(double *)&(this->SecondFrequencyDoubler).Data._pad_0x0_0 * /*3fe0000000000000*/0.5;
      }
    }
    else {
      dVar4 = *(double *)&this->FocusingMirror * /*3fe0000000000000*/0.5;
    }
    uVar5 = uStack_c;
    uStack_c = (double)CONCAT71(((slice_view *)&uStack_c)->_1_7_,1);
    uVar6 = uStack_c;
    ((slice_view *)&local_14)->_0_4_ = *(undefined4 *)&dVar4;
    ((slice_view *)&local_14)->_4_4_ = *(undefined4 *)((char *)&dVar4 + 4);
    ((slice_view *)&uStack_c)->_4_4_ = SUB84(uVar5,4);
    *(undefined4 *)&(this->GetFiringTemperatureJump_K_MemoizedValue).Data = (undefined4)local_14;
    *(undefined4 *)((int)&(this->GetFiringTemperatureJump_K_MemoizedValue).Data + 4) =
         ((slice_view *)&local_14)->_4_4_;
    *(undefined4 *)&(this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData =
         (undefined4)uStack_c;
    *(undefined4 *)((char *)&(this->GetFiringTemperatureJump_K_MemoizedValue) + 0xc) = ((slice_view *)&uStack_c)->_4_4_;
    if ((this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData == false) {
      local_14 = dVar4;
      uStack_c = (double)uVar6;
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  return ((this->GetFiringTemperatureJump_K_MemoizedValue).Data * /*3e112e0be826d695*/1e-09 * local_24
         ) / (((this->FocusingMirror).CachedRadius_m / param_1) * /*400921fb54442d18*/3.141592653589793);
}


//==== 00645c80 645c80_LaserModule__GetFinalOutputPower_W_MemoizedFunction ====

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: double __thiscall LaserModule__GetFinalOutputPower_W_MemoizedFunction(void)const  */

double __thiscall LaserModule__GetFinalOutputPower_W_MemoizedFunction(LaserModule *this)

{
  int iVar1;
  int iVar2;
  Material *pMVar3;
  undefined8 uVar4;
  double dVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined8 uStack_c;
  
  uVar7 = 0x00000000u;
  uVar8 = (undefined4)((ulonglong)/*3ff0000000000000*/1.0 >> 0x20);
  if ((char)(this->SecondFrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x0_0 == '\0') {
    uStack_c = /*3ff0000000000000*/1.0;
  }
  else {
    uStack_c = FrequencyDoublerSubModule__GetTotalEfficiency_Percent((FrequencyDoublerSubModule *)
                          &(this->FrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x0_0);
    uVar7 = 0x00000000u;
    uVar8 = (undefined4)((ulonglong)/*3ff0000000000000*/1.0 >> 0x20);
  }
  if (*(char *)&(this->FocusingMirror).Composition != '\0') {
    dVar9 = FrequencyDoublerSubModule__GetTotalEfficiency_Percent((FrequencyDoublerSubModule *)
                       &(this->SecondFrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x0_0);
    uVar7 = *(undefined4 *)&dVar9;
    uVar8 = *(undefined4 *)((char *)&dVar9 + 4);
  }
  dVar9 = (double)CONCAT44(uVar8,uVar7) * uStack_c;
  if ((this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData == false) {
    iVar1 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
    uStack_c = (double)CONCAT44(iVar1 + 1,(undefined4)uStack_c);
    util__Darray_struct_util__tuple2_enum_Order__Type_int_____SetSize
              ((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)
               &this->GetFinalWavelength_nm_MemoizedValue,(int *)((int)&uStack_c + 4));
    bVar6 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &this->GetFinalWavelength_nm_MemoizedValue,iVar1);
    if (bVar6) {
      iVar1 = *(int *)((int)&(this->GetFinalWavelength_nm_MemoizedValue).Data + 4);
      iVar2 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
      *(code **)(iVar1 + -8 + iVar2 * 8) = FixedOrbit_GetEccentricityApoapsisRoot_Clear;
      *(undefined4 *)(iVar1 + -4 + iVar2 * 8) = 0;
    }
    if (*(char *)&(this->FocusingMirror).Composition == '\0') {
      if ((char)(this->SecondFrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x0_0 == '\0') {
        pMVar3 = (this->Mirror).Composition;
        if ((char)(pMVar3->MaterialMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        dVar10 = (pMVar3->LasingMediumProperties).Data.SpontaneousLifetime_s;
      }
      else {
        dVar10 = *(double *)&(this->SecondFrequencyDoubler).Data._pad_0x0_0 * /*3fe0000000000000*/0.5
        ;
      }
    }
    else {
      dVar10 = *(double *)&this->FocusingMirror * /*3fe0000000000000*/0.5;
    }
    uVar4 = uStack_c;
    uStack_c = (double)CONCAT71(((slice_view *)&uStack_c)->_1_7_,1);
    dVar5 = uStack_c;
    local_14 = *(undefined4 *)&dVar10;
    uStack_10 = *(undefined4 *)((char *)&dVar10 + 4);
    ((slice_view *)&uStack_c)->_4_4_ = SUB84(uVar4,4);
    *(undefined4 *)&(this->GetFiringTemperatureJump_K_MemoizedValue).Data = local_14;
    *(undefined4 *)((int)&(this->GetFiringTemperatureJump_K_MemoizedValue).Data + 4) = uStack_10;
    *(undefined4 *)&(this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData =
         (undefined4)uStack_c;
    *(undefined4 *)((char *)&(this->GetFiringTemperatureJump_K_MemoizedValue) + 0xc) = ((slice_view *)&uStack_c)->_4_4_;
    uStack_c = dVar5;
    if ((this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  uStack_c = Material__GetReflectanceCoefficient(*(Material **)&(this->FocusingMirror).CachedIsMirror,
                        (this->GetFiringTemperatureJump_K_MemoizedValue).Data);
  dVar10 = GetTotalLaserOutputPower_W(this);
  return dVar10 * dVar9 * uStack_c;
}


//==== 00645e10 645e10_LaserModule__GetFinalWavelength_nm_Memoize ====

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall LaserModule__GetFinalWavelength_nm_Memoize(void)const  */

void __thiscall LaserModule__GetFinalWavelength_nm_Memoize(LaserModule *this)

{
  int iVar1;
  int iVar2;
  Material *pMVar3;
  double dVar4;
  bool bVar5;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  undefined4 uStack_c;
  int local_8;
  
  if ((this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData == false) {
    iVar1 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
    local_8 = iVar1 + 1;
    util__Darray_struct_util__tuple2_enum_Order__Type_int_____SetSize
              ((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)
               &this->GetFinalWavelength_nm_MemoizedValue,&local_8);
    bVar5 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &this->GetFinalWavelength_nm_MemoizedValue,iVar1);
    if (bVar5) {
      iVar1 = *(int *)((int)&(this->GetFinalWavelength_nm_MemoizedValue).Data + 4);
      iVar2 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
      *(code **)(iVar1 + -8 + iVar2 * 8) = FixedOrbit_GetEccentricityApoapsisRoot_Clear;
      *(undefined4 *)(iVar1 + -4 + iVar2 * 8) = 0;
    }
    if (*(char *)&(this->FocusingMirror).Composition == '\0') {
      if ((char)(this->SecondFrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x0_0 == '\0') {
        pMVar3 = (this->Mirror).Composition;
        if ((char)(pMVar3->MaterialMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        dVar4 = (pMVar3->LasingMediumProperties).Data.SpontaneousLifetime_s;
      }
      else {
        dVar4 = *(double *)&(this->SecondFrequencyDoubler).Data._pad_0x0_0 * /*3fe0000000000000*/0.5;
      }
    }
    else {
      dVar4 = *(double *)&this->FocusingMirror * /*3fe0000000000000*/0.5;
    }
    ((slice_view *)&uStack_10)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_10)->_1_3_[0] | (((slice_view *)&uStack_10)->_1_3_[1] << 8) | (((slice_view *)&uStack_10)->_1_3_[2] << 16)) << 8));
    local_18 = *(undefined4 *)&dVar4;
    uStack_14 = *(undefined4 *)((char *)&dVar4 + 4);
    *(undefined4 *)&(this->GetFiringTemperatureJump_K_MemoizedValue).Data = local_18;
    *(undefined4 *)((int)&(this->GetFiringTemperatureJump_K_MemoizedValue).Data + 4) = uStack_14;
    *(undefined4 *)&(this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData = uStack_10;
    *(undefined4 *)((char *)&(this->GetFiringTemperatureJump_K_MemoizedValue) + 0xc) = uStack_c;
  }
  return;
}


//==== 00646050 646050_LaserModule__GetHeatGenerated_W_Memoize ====

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall LaserModule__GetHeatGenerated_W_Memoize(void)const  */

void __thiscall LaserModule__GetHeatGenerated_W_Memoize(LaserModule *this)

{
  Maybe_L_double_G_ *this_00;
  int iVar1;
  int iVar2;
  bool bVar3;
  double dVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  undefined4 uStack_c;
  int local_8;
  
  if ((this->GetHeatingRate_W_MemoizedValue).IsValidData == false) {
    iVar1 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
    this_00 = &this->GetFinalWavelength_nm_MemoizedValue;
    local_8 = iVar1 + 1;
    util__Darray_struct_util__tuple2_enum_Order__Type_int_____SetSize
              ((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)this_00,&local_8);
    bVar3 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)this_00,iVar1);
    if (bVar3) {
      iVar1 = *(int *)((int)&(this->GetFinalWavelength_nm_MemoizedValue).Data + 4);
      iVar2 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
      *(code **)(iVar1 + -8 + iVar2 * 8) = LaserModule__GetHeatGenerated_W_Clear;
      *(undefined4 *)(iVar1 + -4 + iVar2 * 8) = 0;
    }
    bVar3 = (this->GetHeatGenerated_W_MemoizedValue).IsValidData == false;
    if (bVar3) {
      iVar1 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
      local_8 = iVar1 + 1;
      util__Darray_struct_util__tuple2_enum_Order__Type_int_____SetSize
                ((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)this_00,&local_8);
      bVar3 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                        ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)this_00,iVar1);
      if (bVar3) {
        iVar1 = *(int *)((int)&(this->GetFinalWavelength_nm_MemoizedValue).Data + 4);
        iVar2 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
        *(code **)(iVar1 + -8 + iVar2 * 8) = FixedOrbit_GetEccentricityPeriapsisRoot_Clear;
        *(undefined4 *)(iVar1 + -4 + iVar2 * 8) = 0;
      }
      dVar4 = GetFinalOutputPower_W_MemoizedFunction(this);
      ((slice_view *)&uStack_10)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_10)->_1_3_[0] | (((slice_view *)&uStack_10)->_1_3_[1] << 8) | (((slice_view *)&uStack_10)->_1_3_[2] << 16)) << 8));
      local_18 = *(undefined4 *)&dVar4;
      uStack_14 = *(undefined4 *)((char *)&dVar4 + 4);
      *(undefined4 *)&(this->GetHeatGenerated_W_MemoizedValue).Data = local_18;
      *(undefined4 *)((int)&(this->GetHeatGenerated_W_MemoizedValue).Data + 4) = uStack_14;
      *(undefined4 *)&(this->GetHeatGenerated_W_MemoizedValue).IsValidData = uStack_10;
      *(undefined4 *)((char *)&(this->GetHeatGenerated_W_MemoizedValue) + 0xc) = uStack_c;
      bVar3 = (this->GetHeatGenerated_W_MemoizedValue).IsValidData == false;
    }
    if (bVar3) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if ((this->ArcLamp).CavitySemiminorAxis_m < (this->GetHeatGenerated_W_MemoizedValue).Data) {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\modules\\weaponmodules\\lasermodules.cpp"
                      ,0x338,"ArcLamp.PowerSupplied_W >= GetFinalOutputPower_W()",(char *)0x0);
      DebugBreak();
    }
    if ((this->GetHeatGenerated_W_MemoizedValue).IsValidData == false) {
      iVar1 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
      local_8 = iVar1 + 1;
      util__Darray_struct_util__tuple2_enum_Order__Type_int_____SetSize
                ((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)this_00,&local_8);
      bVar3 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                        ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)this_00,iVar1);
      if (bVar3) {
        iVar1 = *(int *)((int)&(this->GetFinalWavelength_nm_MemoizedValue).Data + 4);
        iVar2 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
        *(code **)(iVar1 + -8 + iVar2 * 8) = FixedOrbit_GetEccentricityPeriapsisRoot_Clear;
        *(undefined4 *)(iVar1 + -4 + iVar2 * 8) = 0;
      }
      dVar4 = GetFinalOutputPower_W_MemoizedFunction(this);
      ((slice_view *)&uStack_10)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_10)->_1_3_[0] | (((slice_view *)&uStack_10)->_1_3_[1] << 8) | (((slice_view *)&uStack_10)->_1_3_[2] << 16)) << 8));
      local_18 = *(undefined4 *)&dVar4;
      uStack_14 = *(undefined4 *)((char *)&dVar4 + 4);
      *(undefined4 *)&(this->GetHeatGenerated_W_MemoizedValue).Data = local_18;
      *(undefined4 *)((int)&(this->GetHeatGenerated_W_MemoizedValue).Data + 4) = uStack_14;
      *(undefined4 *)&(this->GetHeatGenerated_W_MemoizedValue).IsValidData = uStack_10;
      *(undefined4 *)((char *)&(this->GetHeatGenerated_W_MemoizedValue) + 0xc) = uStack_c;
      if ((this->GetHeatGenerated_W_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
    }
    ((slice_view *)&uStack_10)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_10)->_1_3_[0] | (((slice_view *)&uStack_10)->_1_3_[1] << 8) | (((slice_view *)&uStack_10)->_1_3_[2] << 16)) << 8));
    (this->GetHeatingRate_W_MemoizedValue).Data =
         (this->ArcLamp).CavitySemiminorAxis_m - (this->GetHeatGenerated_W_MemoizedValue).Data;
    *(undefined4 *)&(this->GetHeatingRate_W_MemoizedValue).IsValidData = uStack_10;
    *(undefined4 *)((char *)&(this->GetHeatingRate_W_MemoizedValue) + 0xc) = uStack_c;
  }
  return;
}


//==== 00646220 646220_LaserModule__GetIntensityAtRange_W__m2 ====

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall LaserModule__GetIntensityAtRange_W__m2(double)const  */

double __thiscall LaserModule__GetIntensityAtRange_W__m2(LaserModule *this,double param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  float10 fVar4;
  double dVar5;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  undefined4 uStack_c;
  int local_8;
  
  if ((this->GetHeatGenerated_W_MemoizedValue).IsValidData == false) {
    iVar1 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
    local_8 = iVar1 + 1;
    util__Darray_struct_util__tuple2_enum_Order__Type_int_____SetSize
              ((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)
               &this->GetFinalWavelength_nm_MemoizedValue,&local_8);
    bVar3 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &this->GetFinalWavelength_nm_MemoizedValue,iVar1);
    if (bVar3) {
      iVar1 = *(int *)((int)&(this->GetFinalWavelength_nm_MemoizedValue).Data + 4);
      iVar2 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
      *(code **)(iVar1 + -8 + iVar2 * 8) = FixedOrbit_GetEccentricityPeriapsisRoot_Clear;
      *(undefined4 *)(iVar1 + -4 + iVar2 * 8) = 0;
    }
    dVar5 = GetFinalOutputPower_W_MemoizedFunction(this);
    ((slice_view *)&uStack_10)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_10)->_1_3_[0] | (((slice_view *)&uStack_10)->_1_3_[1] << 8) | (((slice_view *)&uStack_10)->_1_3_[2] << 16)) << 8));
    local_18 = *(undefined4 *)&dVar5;
    uStack_14 = *(undefined4 *)((char *)&dVar5 + 4);
    *(undefined4 *)&(this->GetHeatGenerated_W_MemoizedValue).Data = local_18;
    *(undefined4 *)((int)&(this->GetHeatGenerated_W_MemoizedValue).Data + 4) = uStack_14;
    *(undefined4 *)&(this->GetHeatGenerated_W_MemoizedValue).IsValidData = uStack_10;
    *(undefined4 *)((char *)&(this->GetHeatGenerated_W_MemoizedValue) + 0xc) = uStack_c;
    if ((this->GetHeatGenerated_W_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  fVar4 = (float10)(**(code **)(*(int *)this + 0x160))(param_1);
  dVar5 = Physics__GetGaussianBeamEdgeLossCorrection_Percent();
  return dVar5 * ((this->GetHeatGenerated_W_MemoizedValue).Data /
                 ((double)fVar4 * /*400921fb54442d18*/3.141592653589793 * (double)fVar4));
}


//==== 00646420 646420_LaserModule__GetLaserInfo ====

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Str<char> __thiscall LaserModule__GetLaserInfo(void)const  */

Str_L_char_G_ * __thiscall
LaserModule__GetLaserInfo(LaserModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  Material *pMVar3;
  double dVar4;
  Str_L_char_G_ SVar5;
  Str_L_char_G_ SVar6;
  double dVar7;
  undefined8 uVar8;
  bool bVar9;
  Maybe_L_double_G_ *pMVar10;
  Str_L_char_G_ *pSVar11;
  LocStr *this_00;
  int unaff_EDI;
  double dVar12;
  char *pcVar13;
  char *pcVar14;
  int iVar15;
  Maybe_L_double_G_ local_a0;
  void *local_90[3];
  void *local_84;
  Str_L_char_G_ local_78;
  Str_L_char_G_ local_6c;
  Str_L_char_G_ local_60;
  Str_L_char_G_ local_54;
  double local_48;
  Str_L_char_G_ local_40;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  undefined8 local_1c;
  undefined8 uStack_14;
  char *local_c;
  char *local_8;
  
  util__Str_char___Str_char__o5(&local_78,"GetFinalWavelength_nm()");
  util__Str_char___Str_char__o5(&local_40,"GetFinalOutputPower_W()");
  util__Str_char___Str_char__o5(&local_34,"InfoBox LaserVitals");
  uStack_14 = GetThermalLensingQualityFactor(this);
  local_48 = uStack_14 * uStack_14 + /*4022000000000000*/9.0;
  pMVar10 = util__Sqrt(&local_a0,&local_48);
  if (pMVar10->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pcVar13 = *(undefined4 *)&pMVar10->Data;
  pcVar14 = (char *)((ulonglong)pMVar10->Data >> 0x20);
  iVar15 = GlobalSignificantFigures;
  pSVar11 = PrintSigFigures(&local_6c,(double)CONCAT44(GlobalSignificantFigures,pcVar14),unaff_EDI);
  if (pSVar11->Capacity < 1) {
    local_c = "";
  }
  else {
    local_c = pSVar11->Data;
  }
  if ((this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData == false) {
    iVar15 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
    local_8 = (char *)(iVar15 + 1);
    util__Darray_struct_util__tuple2_enum_Order__Type_int_____SetSize
              ((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)
               &this->GetFinalWavelength_nm_MemoizedValue,(int *)&local_8);
    pcVar14 = (char *)0x646514;
    bVar9 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &this->GetFinalWavelength_nm_MemoizedValue,iVar15);
    if (bVar9) {
      iVar1 = *(int *)((int)&(this->GetFinalWavelength_nm_MemoizedValue).Data + 4);
      iVar2 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
      *(code **)(iVar1 + -8 + iVar2 * 8) = FixedOrbit_GetEccentricityApoapsisRoot_Clear;
      *(undefined4 *)(iVar1 + -4 + iVar2 * 8) = 0;
    }
    if (*(char *)&(this->FocusingMirror).Composition == '\0') {
      if ((char)(this->SecondFrequencyDoubler).Data.MaterialClass__NonlinearOptic._pad_0x0_0 == '\0') {
        pMVar3 = (this->Mirror).Composition;
        if ((char)(pMVar3->MaterialMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 == '\0') {
          pcVar14 = "IsValid()";
          pcVar13 = (char *)0x17;
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                          "IsValid()",(char *)0x0);
          iVar15 = 0x646591;
          DebugBreak();
        }
        dVar4 = (pMVar3->LasingMediumProperties).Data.SpontaneousLifetime_s;
      }
      else {
        dVar4 = *(double *)&(this->SecondFrequencyDoubler).Data._pad_0x0_0 * /*3fe0000000000000*/0.5;
      }
    }
    else {
      dVar4 = *(double *)&this->FocusingMirror * /*3fe0000000000000*/0.5;
    }
    dVar12 = uStack_14;
    uStack_14 = (double)CONCAT71(((slice_view *)&uStack_14)->_1_7_,1);
    dVar7 = uStack_14;
    ((slice_view *)&local_1c)->_0_4_ = *(undefined4 *)&dVar4;
    ((slice_view *)&local_1c)->_4_4_ = *(undefined4 *)((char *)&dVar4 + 4);
    ((slice_view *)&uStack_14)->_4_4_ = SUB84(dVar12,4);
    *(undefined4 *)&(this->GetFiringTemperatureJump_K_MemoizedValue).Data = (undefined4)local_1c;
    *(undefined4 *)((int)&(this->GetFiringTemperatureJump_K_MemoizedValue).Data + 4) =
         ((slice_view *)&local_1c)->_4_4_;
    *(undefined4 *)&(this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData =
         (undefined4)uStack_14;
    *(undefined4 *)((char *)&(this->GetFiringTemperatureJump_K_MemoizedValue) + 0xc) = ((slice_view *)&uStack_14)->_4_4_;
    local_1c = dVar4;
    uStack_14 = dVar7;
    if ((this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData == false) {
      pcVar14 = "IsValid()";
      pcVar13 = (char *)0x13;
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      iVar15 = 0x6465ce;
      DebugBreak();
    }
  }
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff48,&local_78);
  SVar5.Capacity = iVar15;
  SVar5.Data = pcVar14;
  SVar5.Length = unaff_EDI;
  pSVar11 = Print(&local_60,
                  (double)CONCAT44(pcVar13,(int)((ulonglong)
                                                 (this->GetFiringTemperatureJump_K_MemoizedValue).
                                                 Data >> 0x20)),SVar5);
  if (pSVar11->Capacity < 1) {
    local_8 = "";
  }
  else {
    local_8 = pSVar11->Data;
  }
  if ((this->GetHeatGenerated_W_MemoizedValue).IsValidData == false) {
    iVar15 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
    uStack_14 = (double)CONCAT44(iVar15 + 1,(undefined4)uStack_14);
    util__Darray_struct_util__tuple2_enum_Order__Type_int_____SetSize
              ((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)
               &this->GetFinalWavelength_nm_MemoizedValue,(int *)((int)&uStack_14 + 4));
    pcVar14 = (char *)0x64663e;
    bVar9 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &this->GetFinalWavelength_nm_MemoizedValue,iVar15);
    if (bVar9) {
      iVar15 = *(int *)((int)&(this->GetFinalWavelength_nm_MemoizedValue).Data + 4);
      iVar1 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
      *(code **)(iVar15 + -8 + iVar1 * 8) = FixedOrbit_GetEccentricityPeriapsisRoot_Clear;
      *(undefined4 *)(iVar15 + -4 + iVar1 * 8) = 0;
    }
    iVar15 = 0x646665;
    dVar12 = GetFinalOutputPower_W_MemoizedFunction(this);
    uVar8 = uStack_14;
    uStack_14 = (double)CONCAT71(((slice_view *)&uStack_14)->_1_7_,1);
    dVar4 = uStack_14;
    ((slice_view *)&local_1c)->_0_4_ = *(undefined4 *)&dVar12;
    ((slice_view *)&local_1c)->_4_4_ = *(undefined4 *)((char *)&dVar12 + 4);
    ((slice_view *)&uStack_14)->_4_4_ = SUB84(uVar8,4);
    *(undefined4 *)&(this->GetHeatGenerated_W_MemoizedValue).Data = (undefined4)local_1c;
    *(undefined4 *)((int)&(this->GetHeatGenerated_W_MemoizedValue).Data + 4) = ((slice_view *)&local_1c)->_4_4_;
    *(undefined4 *)&(this->GetHeatGenerated_W_MemoizedValue).IsValidData = (undefined4)uStack_14;
    *(undefined4 *)((char *)&(this->GetHeatGenerated_W_MemoizedValue) + 0xc) = ((slice_view *)&uStack_14)->_4_4_;
    local_1c = dVar12;
    uStack_14 = dVar4;
    if ((this->GetHeatGenerated_W_MemoizedValue).IsValidData == false) {
      pcVar14 = "IsValid()";
      pcVar13 = (char *)0x13;
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      iVar15 = 0x646698;
      DebugBreak();
    }
  }
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff48,&local_40);
  SVar6.Capacity = iVar15;
  SVar6.Data = pcVar14;
  SVar6.Length = unaff_EDI;
  Print(&local_54,
        (double)CONCAT44(pcVar13,(int)((ulonglong)(this->GetHeatGenerated_W_MemoizedValue).Data >>
                                      0x20)),SVar6);
  local_28.Data = (char *)0x0;
  local_28.Capacity = 0;
  local_28.Length = 0;
  this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)local_90,&local_34,&local_28);
  pSVar11 = util__LocStr__operator__o3(this_00);
  if (pSVar11->Capacity < 1) {
    pcVar13 = "";
  }
  else {
    pcVar13 = pSVar11->Data;
  }
  util__Printf(__return_storage_ptr__,pcVar13);
  if (local_84 != (void *)0x0) {
    operator_delete__(local_84);
    local_84 = (void *)0x0;
  }
  if (local_90[0] != (void *)0x0) {
    operator_delete__(local_90[0]);
    local_90[0] = (void *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    operator_delete__(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_54.Data != (char *)0x0) {
    operator_delete__(local_54.Data);
    local_54.Data = (char *)0x0;
  }
  if (local_60.Data != (char *)0x0) {
    operator_delete__(local_60.Data);
    local_60.Data = (char *)0x0;
  }
  if (local_6c.Data != (char *)0x0) {
    operator_delete__(local_6c.Data);
    local_6c.Data = (char *)0x0;
  }
  if (local_34.Data != (char *)0x0) {
    operator_delete__(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_40.Data != (char *)0x0) {
    operator_delete__(local_40.Data);
    local_40.Data = (char *)0x0;
  }
  if (local_78.Data != (char *)0x0) {
    operator_delete__(local_78.Data);
  }
  return __return_storage_ptr__;
}


//==== 006469f0 6469f0_LaserModule__GetLaserSpectraChartYRanges ====

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct Range_L_double_G_ __thiscall LaserModule__GetLaserSpectraChartYRanges(void)const
    */

Range_L_double_G_ * __thiscall
LaserModule__GetLaserSpectraChartYRanges(LaserModule *this,Range_L_double_G_ *__return_storage_ptr__)

{
  int iVar1;
  bool bVar2;
  double dVar3;
  Material *local_18;
  Material *pMStack_14;
  undefined8 uStack_10;
  undefined4 uStack_c;
  int local_8;
  
  if (*(char *)&(this->ArcLamp).PowerSupplied_W == '\0') {
    iVar1 = *(int *)&(this->ArcLamp).GetTotalPowerAcrossAllWavelengths_W_MemoizedValue.IsValidData;
    local_8 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_util__Reflectable_P_G_ *)
               &(this->ArcLamp).GetTotalPowerAcrossAllWavelengths_W_MemoizedValue,&local_8);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &(this->ArcLamp).GetTotalPowerAcrossAllWavelengths_W_MemoizedValue,iVar1);
    if (bVar2) {
      *(code **)(*(int *)((int)&(this->ArcLamp).GetTotalPowerAcrossAllWavelengths_W_MemoizedValue.
                                Data + 4) + -4 +
                *(int *)&(this->ArcLamp).GetTotalPowerAcrossAllWavelengths_W_MemoizedValue.
                         IsValidData * 4) = Fleet_GetRemainingDeltaV_km_s_Clear;
    }
    dVar3 = ArcLampPumpSubModule__GetMaxPowerLine_W_MemoizedFunction((ArcLampPumpSubModule *)&(this->ArcLamp).GetMaxPowerLine_W_MemoizedValue);
    ((slice_view *)&uStack_10)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_10)->_1_3_[0] | (((slice_view *)&uStack_10)->_1_3_[1] << 8) | (((slice_view *)&uStack_10)->_1_3_[2] << 16)) << 8));
    local_18 = *(undefined4 *)&dVar3;
    pMStack_14 = (Material *)((ulonglong)dVar3 >> 0x20);
    (this->ArcLamp).GasComposition = local_18;
    (this->ArcLamp).EnvelopeComposition = pMStack_14;
    *(undefined4 *)&(this->ArcLamp).PowerSupplied_W = uStack_10;
    *(undefined4 *)((int)&(this->ArcLamp).PowerSupplied_W + 4) = uStack_c;
    if (*(char *)&(this->ArcLamp).PowerSupplied_W == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  dVar3 = *(double *)&(this->ArcLamp).GasComposition;
  __return_storage_ptr__->Lower = 0.0;
  __return_storage_ptr__->Upper = dVar3;
  if (dVar3 < 0.0) {
    __return_storage_ptr__->Lower = dVar3;
    __return_storage_ptr__->Upper = 0.0;
  }
  return __return_storage_ptr__;
}


//==== 00647290 647290_LaserModule__GetQuickFluenceInfo ====

/* public: class util::Str<char> __thiscall LaserModule__GetQuickFluenceInfo(void)const  */

Str_L_char_G_ * __thiscall
LaserModule__GetQuickFluenceInfo(LaserModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  Str_L_char_G_ SVar1;
  Str_L_char_G_ SVar2;
  Str_L_char_G_ SVar3;
  Str_L_char_G_ SVar4;
  Str_L_char_G_ *pSVar5;
  LocStr *this_00;
  int unaff_EDI;
  char *pcVar6;
  double dVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  void *local_e0[3];
  void *local_d4;
  Str_L_char_G_ local_c8;
  Str_L_char_G_ local_bc;
  Str_L_char_G_ local_b0;
  Str_L_char_G_ local_a4;
  Str_L_char_G_ local_98;
  Str_L_char_G_ local_8c;
  Str_L_char_G_ local_80;
  Str_L_char_G_ local_74;
  Str_L_char_G_ local_68;
  Str_L_char_G_ local_5c;
  Str_L_char_G_ local_50;
  undefined1 local_44[12];
  Str_L_char_G_ local_38;
  Str_L_char_G_ *local_2c;
  undefined8 local_28;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_2c = __return_storage_ptr__;
  dVar7 = GetIntensityAtRange_W__m2(this,/*3ff0000000000000*/1.0);
  local_14.Capacity = *(undefined4 *)&dVar7;
  local_14.Length = (int)((ulonglong)dVar7 >> 0x20);
  dVar7 = GetIntensityAtRange_W__m2(this,/*4024000000000000*/10.0);
  local_20.Capacity = *(undefined4 *)&dVar7;
  local_20.Length = (int)((ulonglong)dVar7 >> 0x20);
  ((slice_view *)&local_44)->_4_8_ = GetIntensityAtRange_W__m2(this,/*4059000000000000*/100.0);
  pcVar8 = (char *)0x647311;
  local_28 = GetIntensityAtRange_W__m2(this,/*408f400000000000*/1000.0);
  util__Str_char___Str_char__o5(&local_c8,"Extreme_W__m2");
  util__Str_char___Str_char__o5(&local_74,"Long_W__m2");
  util__Str_char___Str_char__o5(&local_68,"Close_W__m2");
  util__Str_char___Str_char__o5(&local_5c,"PointBlank_W__m2");
  util__Str_char___Str_char__o5(&local_bc,"\n");
  pcVar10 = "LaserFluenceChart Tooltip";
  iVar9 = 0x647368;
  util__Str_char___Str_char__o5(&local_50,"LaserFluenceChart Tooltip");
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff08,&local_c8);
  SVar1.Capacity = (int)pcVar10;
  SVar1.Data = (char *)iVar9;
  SVar1.Length = unaff_EDI;
  Print(&local_b0,(double)CONCAT44(pcVar8,(int)((ulonglong)local_28 >> 0x20)),SVar1);
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff08,&local_74);
  SVar2.Capacity = (int)pcVar10;
  SVar2.Data = (char *)iVar9;
  SVar2.Length = unaff_EDI;
  pSVar5 = Print(&local_a4,(double)CONCAT44(pcVar8,SUB84(((slice_view *)&local_44)->_4_8_,4)),SVar2);
  if (pSVar5->Capacity < 1) {
    pcVar6 = "";
  }
  else {
    pcVar6 = pSVar5->Data;
  }
  local_28 = (double)CONCAT44(pcVar6,(undefined4)local_28);
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff08,&local_68);
  SVar3.Capacity = (int)pcVar10;
  SVar3.Data = (char *)iVar9;
  SVar3.Length = unaff_EDI;
  pSVar5 = Print(&local_98,(double)CONCAT44(pcVar8,local_20.Length),SVar3);
  if (pSVar5->Capacity < 1) {
    pcVar6 = "";
  }
  else {
    pcVar6 = pSVar5->Data;
  }
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff08,&local_5c);
  SVar4.Capacity = (int)pcVar10;
  SVar4.Data = (char *)iVar9;
  SVar4.Length = unaff_EDI;
  pSVar5 = Print(&local_8c,(double)CONCAT44(pcVar8,local_14.Length),SVar4);
  if (pSVar5->Capacity < 1) {
    pcVar8 = "";
  }
  else {
    pcVar8 = pSVar5->Data;
  }
  local_38.Data = (char *)0x0;
  local_38.Capacity = 0;
  local_38.Length = 0;
  this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)local_e0,&local_50,&local_38);
  pSVar5 = util__LocStr__operator__o3(this_00);
  local_14.Length = 0;
  local_14.Data = (char *)0x0;
  local_14.Capacity = 0;
  util__Str_char___Str_char(&local_14,pSVar5);
  util__Str_char___operator__o10(&local_14,&local_bc);
  util__Str_char___Str_char((Str_L_char_G_ *)local_44,&local_14);
  if (local_14.Data != (char *)0x0) {
    operator_delete__(local_14.Data);
    local_14.Data = (char *)0x0;
  }
  pSVar5 = util__Printf(&local_80,"(%i km): %s\n(%i km): %s\n(%i km): %s\n(%i km): %s",1,pcVar8,10,
                        pcVar6,100);
  local_20.Length = 0;
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  util__Str_char___Str_char(&local_20,(Str_L_char_G_ *)local_44);
  util__Str_char___operator__o10(&local_20,pSVar5);
  pSVar5 = local_2c;
  util__Str_char___Str_char(local_2c,&local_20);
  if (local_20.Data != (char *)0x0) {
    operator_delete__(local_20.Data);
  }
  if ((char *)((slice_view *)&local_44)->_0_4_ != (char *)0x0) {
    operator_delete__((void *)((slice_view *)&local_44)->_0_4_);
  }
  if (local_d4 != (void *)0x0) {
    operator_delete__(local_d4);
    local_d4 = (void *)0x0;
  }
  if (local_e0[0] != (void *)0x0) {
    operator_delete__(local_e0[0]);
    local_e0[0] = (void *)0x0;
  }
  if (local_38.Data != (char *)0x0) {
    operator_delete__(local_38.Data);
    local_38.Data = (char *)0x0;
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
  if (local_a4.Data != (char *)0x0) {
    operator_delete__(local_a4.Data);
    local_a4.Data = (char *)0x0;
  }
  if (local_b0.Data != (char *)0x0) {
    operator_delete__(local_b0.Data);
    local_b0.Data = (char *)0x0;
  }
  if (local_50.Data != (char *)0x0) {
    operator_delete__(local_50.Data);
    local_50.Data = (char *)0x0;
  }
  if (local_bc.Data != (char *)0x0) {
    operator_delete__(local_bc.Data);
  }
  if (local_5c.Data != (char *)0x0) {
    operator_delete__(local_5c.Data);
    local_5c.Data = (char *)0x0;
  }
  if (local_68.Data != (char *)0x0) {
    operator_delete__(local_68.Data);
    local_68.Data = (char *)0x0;
  }
  if (local_74.Data != (char *)0x0) {
    operator_delete__(local_74.Data);
    local_74.Data = (char *)0x0;
  }
  if (local_c8.Data != (char *)0x0) {
    operator_delete__(local_c8.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pSVar5;
}


//==== 00647d90 647d90_LaserModule__GetTotalFiringEnergy_J ====

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall LaserModule__GetTotalFiringEnergy_J(double)const  */

double __thiscall LaserModule__GetTotalFiringEnergy_J(LaserModule *this,double param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  double dVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  undefined4 uStack_c;
  int local_8;
  
  if ((this->GetHeatGenerated_W_MemoizedValue).IsValidData == false) {
    iVar1 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
    local_8 = iVar1 + 1;
    util__Darray_struct_util__tuple2_enum_Order__Type_int_____SetSize
              ((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)
               &this->GetFinalWavelength_nm_MemoizedValue,&local_8);
    bVar3 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &this->GetFinalWavelength_nm_MemoizedValue,iVar1);
    if (bVar3) {
      iVar1 = *(int *)((int)&(this->GetFinalWavelength_nm_MemoizedValue).Data + 4);
      iVar2 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
      *(code **)(iVar1 + -8 + iVar2 * 8) = FixedOrbit_GetEccentricityPeriapsisRoot_Clear;
      *(undefined4 *)(iVar1 + -4 + iVar2 * 8) = 0;
    }
    dVar4 = GetFinalOutputPower_W_MemoizedFunction(this);
    ((slice_view *)&uStack_10)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_10)->_1_3_[0] | (((slice_view *)&uStack_10)->_1_3_[1] << 8) | (((slice_view *)&uStack_10)->_1_3_[2] << 16)) << 8));
    local_18 = *(undefined4 *)&dVar4;
    uStack_14 = *(undefined4 *)((char *)&dVar4 + 4);
    *(undefined4 *)&(this->GetHeatGenerated_W_MemoizedValue).Data = local_18;
    *(undefined4 *)((int)&(this->GetHeatGenerated_W_MemoizedValue).Data + 4) = uStack_14;
    *(undefined4 *)&(this->GetHeatGenerated_W_MemoizedValue).IsValidData = uStack_10;
    *(undefined4 *)((char *)&(this->GetHeatGenerated_W_MemoizedValue) + 0xc) = uStack_c;
    if ((this->GetHeatGenerated_W_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  dVar4 = Physics__GetGaussianBeamEdgeLossCorrection_Percent();
  return (this->GetHeatGenerated_W_MemoizedValue).Data * param_1 * dVar4;
}


//==== 00647ee0 647ee0_LaserModule__GetTotalOutputPhotonFlux__s ====
#undef CavityWallComposition /* auto(v2): compat 僵尸宏撞成员名 */
#undef CavityCoolantComposition /* auto(v2): compat 僵尸宏撞成员名 */
#undef ThermoopticCoefficient__K /* auto(v2): compat 僵尸宏撞成员名 */
extern undefined4 FUN_00642d00(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */


/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall LaserModule__GetTotalOutputPhotonFlux__s(void)const  */

double __thiscall LaserModule__GetTotalOutputPhotonFlux__s(LaserModule *this)

{
  Maybe_L_double_G_ *this_00;
  int iVar1;
  undefined8 uVar2;
  Material *pMVar3;
  Material *pMVar4;
  bool bVar5;
  float10 fVar6;
  float10 extraout_ST0;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 local_30;
  undefined4 uStack_2c;
  Material *pMStack_28;
  Material *pMStack_24;
  undefined8 local_20;
  double local_18;
  double local_10;
  uint local_8;
  
  uVar2 = _pMStack_28;
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar5 = *(char *)&(this->ArcLamp).CavityWallComposition == '\0';
  this_00 = &(this->ArcLamp).GetMaxPowerLine_W_MemoizedValue;
  if (bVar5) {
    iVar1 = *(int *)&(this->ArcLamp).GetTotalPowerAcrossAllWavelengths_W_MemoizedValue.IsValidData;
    local_20 = (double)CONCAT44(iVar1 + 1,(undefined4)local_20);
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_util__Reflectable_P_G_ *)
               &(this->ArcLamp).GetTotalPowerAcrossAllWavelengths_W_MemoizedValue,
               (int *)((int)&local_20 + 4));
    bVar5 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &(this->ArcLamp).GetTotalPowerAcrossAllWavelengths_W_MemoizedValue,iVar1);
    if (bVar5) {
      *(code **)(*(int *)((int)&(this->ArcLamp).GetTotalPowerAcrossAllWavelengths_W_MemoizedValue.
                                Data + 4) + -4 +
                *(int *)&(this->ArcLamp).GetTotalPowerAcrossAllWavelengths_W_MemoizedValue.
                         IsValidData * 4) = Fleet_GetOriginalDeltaV_km_s_Clear;
    }
    dVar9 = ArcLampPumpSubModule__GetTotalPowerAcrossAllWavelengths_W_MemoizedFunction((ArcLampPumpSubModule *)this_00);
    _pMStack_28 = CONCAT71(stack0xffffffd9,1);
    local_30 = *(undefined4 *)&dVar9;
    uStack_2c = *(undefined4 *)((char *)&dVar9 + 4);
    pMStack_24 = SUB84(uVar2,4);
    *(undefined4 *)&(this->ArcLamp).Radius_m = local_30;
    *(undefined4 *)((int)&(this->ArcLamp).Radius_m + 4) = uStack_2c;
    (this->ArcLamp).CavityWallComposition = pMStack_28;
    (this->ArcLamp).CavityCoolantComposition = pMStack_24;
    bVar5 = *(char *)&(this->ArcLamp).CavityWallComposition == '\0';
  }
  if (bVar5) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_10 = (this->ArcLamp).CavitySemiminorAxis_m / (this->ArcLamp).Radius_m;
  fVar6 = (float10)FUN_00642d00(&this->GainMedium,this_00);
  local_18 = (double)fVar6;
  local_20 = ArcLampPumpSubModule__GetCavityAbsorptionEfficiency_Percent((ArcLampPumpSubModule *)this_00);
  dVar9 = ArcLampPumpSubModule__GetCavityReflectanceEfficiency_Percent((ArcLampPumpSubModule *)this_00);
  local_20 = dVar9 * local_20;
  dVar9 = ArcLampPumpSubModule__GetCavityShapeEfficiency_Percent((ArcLampPumpSubModule *)this_00);
  pMVar4 = (this->Mirror).Composition;
  dVar9 = dVar9 * local_20 * local_18;
  pMVar3 = pMVar4;
  if ((char)(pMVar4->MaterialMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 == '\0') {
    ((slice_view *)&local_20)->_4_4_ = pMVar4;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
    pMVar3 = (this->Mirror).Composition;
  }
  iVar1 = *(int *)((char *)&(this->Mirror) + 0x14);
  dVar7 = (this->Mirror).CachedRadius_m;
  dVar8 = (pMVar4->LasingMediumProperties).Data.SpontaneousLifetime_s * /*3e112e0be826d695*/1e-09;
  dVar7 = dVar7 * dVar7 * /*400921fb54442d18*/3.141592653589793;
  ((slice_view *)&local_20)->_4_4_ = pMVar3;
  if ((char)(pMVar3->MaterialMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
    pMVar3 = (this->Mirror).Composition;
  }
  local_18 = (((Material *)((slice_view *)&local_20)->_4_4_)->LasingMediumProperties).Data.SpontaneousLifetime_s;
  pMVar4 = pMVar3;
  if ((char)(pMVar3->MaterialMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
    pMVar4 = (this->Mirror).Composition;
  }
  dVar10 = Material__GetIndexOfRefraction(pMVar4,(pMVar3->LasingMediumProperties).Data.SpontaneousLifetime_s);
  local_18 = (local_18 / dVar10) * /*3e112e0be826d695*/1e-09;
  dVar10 = GetLossCoefficient__m(this);
  pMVar4 = (this->Mirror).Composition;
  local_18 = (dVar10 * /*401921fb54442d18*/6.283185307179586) / (local_18 * local_18);
  ((slice_view *)&local_20)->_4_4_ = pMVar4;
  if ((char)(pMVar4->MaterialMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
    pMVar4 = (this->Mirror).Composition;
  }
  local_18 = dVar9 / (dVar8 * (double)iVar1 * dVar7) -
             local_18 / (((Material *)((slice_view *)&local_20)->_4_4_)->LasingMediumProperties).Data.ThermoopticCoefficient__K;
  if (local_18 <= /*0000000000000000*/0.0) {
    local_18 = /*0000000000000000*/0.0;
  }
  if ((char)(pMVar4->MaterialMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  GetEmissionEfficiency_Percent(this);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}

