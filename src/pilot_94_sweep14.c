// pilot_sweep_sweep14.c - assembled by scripts/sweep_assemble.py (r19)
// reuses fam8_assemble fix passes (zip oracle/in-batch protos/vft channel/data closure)
/* ---- r20 incomplete-type forward decls (pointer-position only) ---- */

#include "port_prelude.h"
#include "cde_win32_compat.h"
#include "cde_types_r20.h"
typedef union {
  undefined1 raw[32];
} slice_view;
/* ---- r23 PDB complete types (value-position layouts, byte-exact) ---- */
typedef struct Str_L_char_G Str_L_char_G;
struct Str_L_char_G {
  int Data;
  int Capacity;
  int Length;
};

//==== 000081a4c0 0081a4c0_ModuleProblemIndicator__GetVerboseTooltip ====
// decompiled by BatchDecomp @ 0081a4c0 name=GetVerboseTooltip conv=__thiscall body=1753

/* WARNING: Removing unreachable block (ram,0x0081aa4e) */
/* WARNING: Removing unreachable block (ram,0x0081aa5e) */
/* public: virtual class Str_L_char_G_ __thiscall
   ModuleProblemIndicator__GetVerboseTooltip(void)const  */

util__Str_L_char_G_ * __thiscall
ModuleProblemIndicator__GetVerboseTooltip
          (ModuleProblemIndicator *this,util__Str_L_char_G_ *__return_storage_ptr__)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  LocStr *pLVar27;
  Str_L_char_G_ *pSVar28;
  Str_L_char_G_ *pSVar29;
  Str_L_char_G_ *this_00;
  bool bVar30;
  void *local_17c [3];
  void *local_170;
  void *local_164 [3];
  void *local_158;
  void *local_14c [3];
  void *local_140;
  void *local_134 [3];
  void *local_128;
  void *local_11c [3];
  void *local_110;
  Str_L_char_G local_104;
  Str_L_char_G local_f8;
  Str_L_char_G local_ec;
  Str_L_char_G local_e0;
  Str_L_char_G local_d4;
  Str_L_char_G local_c8;
  Str_L_char_G local_bc;
  Str_L_char_G local_b0;
  Str_L_char_G local_a4;
  Str_L_char_G local_98;
  Str_L_char_G local_8c;
  Str_L_char_G local_80;
  Str_L_char_G local_74;
  Str_L_char_G local_68;
  Str_L_char_G local_5c;
  Str_L_char_G local_50;
  Str_L_char_G local_44;
  Str_L_char_G local_38;
  Str_L_char_G local_2c;
  Str_L_char_G local_20;
  Str_L_char_G local_14;
  Str_L_char_G_ *local_8;
  
  iVar1 = this->ProblemType;
  local_8 = (Str_L_char_G_ *)0x0;
  if (iVar1 == 0) {
    util__Str_char___Str_char__o5(&local_104,"NoCrewControl VerboseTooltip");
    local_50.Data = (char *)0x0;
    local_50.Capacity = 0;
    local_50.Length = 0;
    this_00 = &local_f8;
    pLVar27 = (LocStr *)util__LocStr__LocStr((LocStr *)local_17c,&local_104,&local_50);
    pSVar28 = util__LocStr__operator__o3(pLVar27);
    bVar26 = false;
    bVar25 = false;
    bVar24 = false;
    bVar23 = false;
    bVar22 = false;
    bVar21 = false;
    bVar20 = false;
    bVar30 = false;
    bVar19 = false;
    bVar18 = false;
    bVar17 = false;
    bVar16 = false;
    bVar15 = false;
    bVar14 = false;
    bVar13 = false;
    bVar12 = false;
    bVar11 = false;
    bVar10 = false;
    bVar9 = false;
    bVar8 = true;
    bVar7 = true;
    bVar6 = true;
    bVar5 = false;
    bVar4 = false;
    bVar3 = false;
    bVar2 = true;
  }
  else {
    if (iVar1 == 2) {
      util__Str_char___Str_char__o5(&local_80,"Overheated VerboseTooltip");
      local_44.Data = (char *)0x0;
      local_44.Capacity = 0;
      local_44.Length = 0;
      pSVar29 = &local_ec;
      pLVar27 = (LocStr *)util__LocStr__LocStr((LocStr *)local_164,&local_80,&local_44);
      pSVar28 = util__LocStr__operator__o3(pLVar27);
      bVar26 = false;
      bVar25 = false;
      bVar24 = false;
      bVar23 = false;
      bVar22 = false;
      bVar21 = false;
      bVar20 = false;
      bVar30 = false;
      bVar19 = false;
      bVar18 = false;
      bVar17 = false;
      bVar15 = false;
      bVar14 = false;
      bVar13 = false;
      bVar12 = false;
      bVar11 = false;
      bVar10 = false;
      bVar9 = false;
      bVar5 = true;
      bVar4 = true;
      bVar3 = true;
    }
    else {
      if (iVar1 == 1) {
        util__Str_char___Str_char__o5(&local_74,"OutOfPower VerboseTooltip");
        local_8 = &local_e0;
        local_38.Data = (char *)0x0;
        local_38.Capacity = 0;
        local_38.Length = 0;
        pLVar27 = (LocStr *)util__LocStr__LocStr((LocStr *)local_14c,&local_74,&local_38);
        pSVar28 = util__LocStr__operator__o3(pLVar27);
        bVar26 = false;
        bVar25 = false;
        bVar24 = false;
        bVar23 = false;
        bVar22 = false;
        bVar21 = false;
        bVar20 = false;
        bVar30 = false;
        bVar19 = false;
        bVar18 = false;
        bVar15 = true;
        bVar14 = true;
        bVar13 = true;
        bVar12 = true;
        bVar11 = false;
        bVar10 = false;
        bVar9 = false;
      }
      else {
        if (iVar1 == 3) {
          util__Str_char___Str_char__o5(&local_68,"NoTargetInFiringArc VerboseTooltip");
          local_2c.Data = (char *)0x0;
          local_2c.Capacity = 0;
          local_2c.Length = 0;
          pSVar29 = &local_d4;
          pLVar27 = (LocStr *)util__LocStr__LocStr((LocStr *)local_134,&local_68,&local_2c);
          pSVar28 = util__LocStr__operator__o3(pLVar27);
          bVar26 = true;
          bVar25 = false;
          bVar24 = false;
          bVar23 = false;
          bVar22 = false;
          bVar21 = false;
          bVar20 = false;
          bVar30 = false;
          bVar19 = false;
          bVar11 = true;
          bVar10 = true;
          bVar9 = true;
        }
        else {
          bVar30 = iVar1 != 4;
          if (bVar30) {
            local_14.Data = (char *)0x0;
            local_14.Capacity = 0;
            local_14.Length = 0;
            pSVar28 = (Str_L_char_G_ *)util__Str_char___Str_char__o5(&local_bc,&local_14);
          }
          else {
            util__Str_char___Str_char(&local_5c,"NoTargetInRange VerboseTooltip");
            local_20.Data = (char *)0x0;
            local_20.Capacity = 0;
            local_20.Length = 0;
            pLVar27 = (LocStr *)util__LocStr__LocStr((LocStr *)local_11c,&local_5c,&local_20);
            pSVar28 = util__LocStr__operator__o3(pLVar27);
            pSVar28 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_c8,pSVar28);
          }
          bVar25 = !bVar30;
          bVar24 = !bVar30;
          bVar23 = !bVar30;
          bVar22 = !bVar30;
          bVar21 = iVar1 == 5;
          bVar20 = bVar30 && iVar1 != 5;
          pSVar29 = &local_b0;
          bVar26 = false;
          bVar19 = true;
          bVar11 = false;
          bVar10 = false;
          bVar9 = false;
        }
        bVar18 = true;
        bVar15 = false;
        bVar14 = false;
        bVar13 = false;
        bVar12 = false;
        local_8 = &local_a4;
        pSVar28 = (Str_L_char_G_ *)util__Str_char___Str_char(pSVar29,pSVar28);
      }
      pSVar29 = &local_98;
      pSVar28 = (Str_L_char_G_ *)util__Str_char___Str_char(local_8,pSVar28);
      bVar17 = true;
      bVar5 = false;
      bVar4 = false;
      bVar3 = false;
    }
    bVar16 = true;
    bVar8 = false;
    bVar7 = false;
    bVar6 = false;
    bVar2 = false;
    this_00 = &local_8c;
    pSVar28 = (Str_L_char_G_ *)util__Str_char___Str_char(pSVar29,pSVar28);
  }
  pSVar28 = (Str_L_char_G_ *)util__Str_char___Str_char(this_00,pSVar28);
  util__Str_char___Str_char((Str_L_char_G_ *)__return_storage_ptr__,pSVar28);
  if ((bVar16) && (local_8c.Data != (char *)0x0)) {
    operator_delete__(local_8c.Data);
    local_8c.Data = (char *)0x0;
  }
  if ((bVar17) && (local_98.Data != (char *)0x0)) {
    operator_delete__(local_98.Data);
    local_98.Data = (char *)0x0;
  }
  if ((bVar18) && (local_a4.Data != (char *)0x0)) {
    operator_delete__(local_a4.Data);
    local_a4.Data = (char *)0x0;
  }
  if ((bVar19) && (local_b0.Data != (char *)0x0)) {
    operator_delete__(local_b0.Data);
    local_b0.Data = (char *)0x0;
  }
  if ((bVar30) && (local_bc.Data != (char *)0x0)) {
    operator_delete__(local_bc.Data);
    local_bc.Data = (char *)0x0;
  }
  if ((bVar20) && (local_14.Data != (char *)0x0)) {
    operator_delete__(local_14.Data);
  }
  if ((bVar21) && (local_14.Data != (char *)0x0)) {
    operator_delete__(local_14.Data);
  }
  if ((bVar22) && (local_c8.Data != (char *)0x0)) {
    operator_delete__(local_c8.Data);
    local_c8.Data = (char *)0x0;
  }
  if (bVar23) {
    if (local_110 != (void *)0x0) {
      operator_delete__(local_110);
      local_110 = (void *)0x0;
    }
    if (local_11c[0] != (void *)0x0) {
      operator_delete__(local_11c[0]);
      local_11c[0] = (void *)0x0;
    }
  }
  if ((bVar24) && (local_20.Data != (char *)0x0)) {
    operator_delete__(local_20.Data);
    local_20.Data = (char *)0x0;
  }
  if ((bVar25) && (local_5c.Data != (char *)0x0)) {
    operator_delete__(local_5c.Data);
    local_5c.Data = (char *)0x0;
  }
  if ((bVar26) && (local_d4.Data != (char *)0x0)) {
    operator_delete__(local_d4.Data);
    local_d4.Data = (char *)0x0;
  }
  if (bVar9) {
    if (local_128 != (void *)0x0) {
      operator_delete__(local_128);
      local_128 = (void *)0x0;
    }
    if (local_134[0] != (void *)0x0) {
      operator_delete__(local_134[0]);
      local_134[0] = (void *)0x0;
    }
  }
  if ((bVar10) && (local_2c.Data != (char *)0x0)) {
    operator_delete__(local_2c.Data);
    local_2c.Data = (char *)0x0;
  }
  if ((bVar11) && (local_68.Data != (char *)0x0)) {
    operator_delete__(local_68.Data);
    local_68.Data = (char *)0x0;
  }
  if ((bVar12) && (local_e0.Data != (char *)0x0)) {
    operator_delete__(local_e0.Data);
    local_e0.Data = (char *)0x0;
  }
  if (bVar13) {
    if (local_140 != (void *)0x0) {
      operator_delete__(local_140);
      local_140 = (void *)0x0;
    }
    if (local_14c[0] != (void *)0x0) {
      operator_delete__(local_14c[0]);
      local_14c[0] = (void *)0x0;
    }
  }
  if ((bVar14) && (local_38.Data != (char *)0x0)) {
    operator_delete__(local_38.Data);
    local_38.Data = (char *)0x0;
  }
  if ((bVar15) && (local_74.Data != (char *)0x0)) {
    operator_delete__(local_74.Data);
    local_74.Data = (char *)0x0;
  }
  if (bVar3) {
    if (local_158 != (void *)0x0) {
      operator_delete__(local_158);
      local_158 = (void *)0x0;
    }
    if (local_164[0] != (void *)0x0) {
      operator_delete__(local_164[0]);
      local_164[0] = (void *)0x0;
    }
  }
  if ((bVar4) && (local_44.Data != (char *)0x0)) {
    operator_delete__(local_44.Data);
    local_44.Data = (char *)0x0;
  }
  if ((bVar5) && (local_80.Data != (char *)0x0)) {
    operator_delete__(local_80.Data);
    local_80.Data = (char *)0x0;
  }
  if ((bVar6) && (local_f8.Data != (char *)0x0)) {
    operator_delete__(local_f8.Data);
    local_f8.Data = (char *)0x0;
  }
  if (bVar7) {
    if (local_170 != (void *)0x0) {
      operator_delete__(local_170);
      local_170 = (void *)0x0;
    }
    if (local_17c[0] != (void *)0x0) {
      operator_delete__(local_17c[0]);
      local_17c[0] = (void *)0x0;
    }
  }
  if ((bVar8) && (local_50.Data != (char *)0x0)) {
    operator_delete__(local_50.Data);
    local_50.Data = (char *)0x0;
  }
  if ((local_104.Data != (char *)0x0) && (bVar2)) {
    operator_delete__(local_104.Data);
  }
  return __return_storage_ptr__;
}

