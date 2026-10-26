// pilot_sweep_sweep13.c - assembled by scripts/sweep_assemble.py (r19)
// reuses fam8_assemble fix passes (zip oracle/in-batch protos/vft channel/data closure)
/* ---- r20 incomplete-type forward decls (pointer-position only) ---- */
typedef struct AIOrder__Type AIOrder__Type;
typedef struct Darray_L_GraphicsResource__Type_G_ Darray_L_GraphicsResource__Type_G_;
typedef struct Darray_L_struct_util__tuple2_L_class_WeaponModule__double_G__G Darray_L_struct_util__tuple2_L_class_WeaponModule__double_G__G;
typedef struct HashMap_L_int_class_util__Darray_L_struct_IndexedFace__G__G HashMap_L_int_class_util__Darray_L_struct_IndexedFace__G__G;
typedef struct class_util__Darray_L_struct_IndexedFace__G class_util__Darray_L_struct_IndexedFace__G;
typedef struct struct_util__tuple2_L_class_WeaponModule__double_G struct_util__tuple2_L_class_WeaponModule__double_G;
typedef struct util__Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G util__Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G;
#include "port_prelude.h"
#include "cde_win32_compat.h"
#include "cde_types_r20.h"
typedef union {
  struct {
    undefined4 _4_4_;
  };
  struct {
    undefined1 _0_1_;
  };
  undefined1 raw[32];
} slice_view;
/* ---- r23 PDB complete types (value-position layouts, byte-exact) ---- */
typedef struct Attribute_L_util__Darray_L_util__WeakPtr_L_SpacecraftComponent_G___G___G Attribute_L_util__Darray_L_util__WeakPtr_L_SpacecraftComponent_G___G___G;
struct Attribute_L_util__Darray_L_util__WeakPtr_L_SpacecraftComponent_G___G___G {
  util__Delegate_L_util__Darray_L_util__WeakPtr_L_SpacecraftComponent_G___G___G_ Getter;
  util__Darray_L_util__WeakPtr_L_SpacecraftComponent_G___G_ Value;
};
typedef struct Darray_L_util__WeakPtr_L_SpacecraftComponent_G___G Darray_L_util__WeakPtr_L_SpacecraftComponent_G___G;
struct Darray_L_util__WeakPtr_L_SpacecraftComponent_G___G {
  util__IArray_L_util__WeakPtr_L_SpacecraftComponent_G___G_ _base_util__IArray_L_util__WeakPtr_L_SpacecraftComponent_G___G_;
  util__WeakPtr_L_SpacecraftComponent_G_ *Data;
  int Size;
  int Capacity;
};
typedef struct Darray_L_util__WeakPtr_L_UIWidget_G___G Darray_L_util__WeakPtr_L_UIWidget_G___G;
struct Darray_L_util__WeakPtr_L_UIWidget_G___G {
  util__IArray_L_util__WeakPtr_L_UIWidget_G___G_ _base_util__IArray_L_util__WeakPtr_L_UIWidget_G___G_;
  util__WeakPtr_L_UIWidget_G_ *Data;
  int Size;
  int Capacity;
};
typedef struct Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G;
struct Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G {
  util__IArray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ _base_util__IArray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_;
  util__tuple2_L_util__Str_L_char_G__Cdouble_G_ *Data;
  int Size;
  int Capacity;
};
typedef struct Maybe_L_double_G Maybe_L_double_G;
struct Maybe_L_double_G {
  double Data;
  int IsValidData;
  unsigned char _tail[4];
};
typedef struct Str_L_char_G Str_L_char_G;
struct Str_L_char_G {
  int Data;
  int Capacity;
  int Length;
};
typedef struct Vec2_L_double_G Vec2_L_double_G;
struct Vec2_L_double_G {
  double X;
  double Y;
};
/* ---- r21 hdr-conflict renames (decl stays OLD for game TUs; pilot impl+calls = NEW; linker aliases OLD -> NEW) ---- */
#undef FUN_0083d980
#define FUN_0083d980 FUN_0083d980__r20
#undef FUN_0088bef0
#define FUN_0088bef0 FUN_0088bef0__r20
#undef FUN_00892210
#define FUN_00892210 FUN_00892210__r20
#undef FUN_008a17a0
#define FUN_008a17a0 FUN_008a17a0__r20
#undef FUN_008abc80
#define FUN_008abc80 FUN_008abc80__r20
#undef Interface__HandleKeyboardInput
#define Interface__HandleKeyboardInput Interface__HandleKeyboardInput__r20
#undef ShipGroupUI__AnyShipsHaveDeltaV
#define ShipGroupUI__AnyShipsHaveDeltaV ShipGroupUI__AnyShipsHaveDeltaV__r20
#undef ShipGroupUI__ShowButtonShipIcon
#define ShipGroupUI__ShowButtonShipIcon ShipGroupUI__ShowButtonShipIcon__r20
/* ---- externs: stub-oracle names (K&R; ret types by call site) ---- */
extern int BalloonPopup_GetScreenPosition_Memoize(); /* K&R stub; ret by call site */
extern int Body__GetControllableComponent_Memoize(); /* K&R stub; ret by call site */
extern int Body__GetState(); /* K&R stub; ret by call site */
extern int ControllableComponent_ChangeOrder(); /* K&R stub; ret by call site */
extern int ControllableComponent_ClearOrder(); /* K&R stub; ret by call site */
extern int FUN_0065da20(); /* K&R; ret by call site */
extern int FUN_007acb10(); /* K&R; ret by call site */
extern int SpacecraftComponent_HasDeltaVLeft_Memoize(); /* K&R stub; ret by call site */
extern int SpacecraftComponent__GetCraftDesign(); /* K&R stub; ret by call site */
extern int TacticalManager__GetOrderOverlay(); /* K&R stub; ret by call site */
extern int UIWidget_GetTrueSize(); /* K&R stub; ret by call site */
extern int WeaponCompartment__HasAmmo(); /* K&R stub; ret by call site */
extern int util__Printf__o3(); /* K&R stub; ret by call site */

//==== 00007de200 007de200_FUN_007de200 ====
// decompiled by BatchDecomp @ 007de200 name=FUN_007de200 conv=unknown body=382

void FUN_007de200(int *param_1,undefined4 *param_2,Darray_L_util__Reflectable_P_G_ *param_3)

{
  undefined4 stack0xfffffffc;
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar4 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
  if (local_c < iVar4) {
    do {
      piVar5 = (int *)(**(code **)*param_1)(&local_c);
      if (((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]),
         !bVar2)) {
        *piVar5 = 0;
      }
      bVar2 = WeaponCompartment__HasAmmo((WeaponCompartment *)*piVar5);
      if (bVar2) {
        if (((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) &&
           (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]),
           !bVar2)) {
          *piVar5 = 0;
        }
        cVar3 = (**(code **)(*(int *)*piVar5 + 0xa8))();
        if (cVar3 != '\0') {
          if (((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) &&
             (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]),
             !bVar2)) {
            *piVar5 = 0;
          }
          cVar3 = (**(code **)(*(int *)*piVar5 + 0x14))();
          if (cVar3 == '\0') {
            if (((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) &&
               (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]), !bVar2)) {
              *piVar5 = 0;
            }
            if ((*(char *)(*(int *)(*(int *)(uintptr_t)piVar5 + 0x38) + 0xb0) == '\0') || (*(char *)*param_2 == '\0'))
            {
              if (((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) &&
                 (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]), !bVar2)) {
                *piVar5 = 0;
              }
              if ((*(char *)(*(int *)(*(int *)(uintptr_t)piVar5 + 0x38) + 0xb1) == '\0') ||
                 (*(char *)param_2[1] == '\0')) goto LAB_007de35a;
            }
            if (((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) &&
               (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]), !bVar2)) {
              *piVar5 = 0;
            }
            iVar4 = *(int *)(param_3 + 8);
            uVar1 = *(undefined4 *)(*(int *)(uintptr_t)piVar5 + 0x38);
            local_10 = iVar4 + 1;
            util__Darray_class_util__Reflectable____SetSize(param_3,&local_10);
            bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)param_3,iVar4);
            if (bVar2) {
              *(undefined4 *)(*(int *)(param_3 + 4) + -4 + *(int *)(param_3 + 8) * 4) = uVar1;
            }
          }
        }
      }
LAB_007de35a:
      local_c = local_c + 1;
      iVar4 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
    } while (local_c < iVar4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007de380 007de380_FUN_007de380 ====
// decompiled by BatchDecomp @ 007de380 name=FUN_007de380 conv=unknown body=589

void FUN_007de380(int *param_1,int param_2,Darray_L_struct_MaterialConstituent_G_ *param_3)

{
  undefined4 stack0xfffffffc;
  double dVar1;
  Body *pBVar2;
  ReferenceController *this;
  Body *this_00;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  double *pdVar6;
  double *pdVar7;
  Maybe_L_double_G_ *pMVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  Maybe_L_double_G local_40;
  CraftBlueprint *local_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined8 local_20;
  CraftBlueprint *local_18;
  int local_14;
  char local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar4 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
  if (local_c < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)*param_1)(&local_c);
      if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
         !bVar3)) {
        *puVar5 = 0;
      }
      pBVar2 = (Body *)*puVar5;
      FUN_0065da20(pBVar2);
      if ((char)(pBVar2->GetSpacecraftComponent_MemoizedValue).IsValidData == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      this = (ReferenceController *)(pBVar2->GetSpacecraftComponent_MemoizedValue).Data.Controller;
      if ((this != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid(this), !bVar3)) {
        (pBVar2->GetSpacecraftComponent_MemoizedValue).Data.Pointer = (undefined1 *)0x0;
      }
      local_18 = SpacecraftComponent__GetCraftDesign((SpacecraftComponent *)
                            (pBVar2->GetSpacecraftComponent_MemoizedValue).Data.Pointer);
      iVar4 = *(int *)(param_2 + 0x88);
      if ((*(ReferenceController **)(iVar4 + 8) != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar4 + 8)),
         !bVar3)) {
        *(undefined4 *)(iVar4 + 4) = 0;
      }
      pBVar2 = *(Body **)(iVar4 + 4);
      if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
         !bVar3)) {
        *puVar5 = 0;
      }
      this_00 = (Body *)*puVar5;
      pdVar6 = (double *)Body__GetState(pBVar2);
      pdVar7 = (double *)Body__GetState(this_00);
      local_20 = (pdVar7[1] - pdVar6[1]) * (pdVar7[1] - pdVar6[1]) +
                 (*pdVar7 - *pdVar6) * (*pdVar7 - *pdVar6) +
                 (pdVar7[2] - pdVar6[2]) * (pdVar7[2] - pdVar6[2]);
      pMVar8 = util__Sqrt(&local_40,(double *)&local_20);
      if (pMVar8->IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      local_14 = 0;
      dVar1 = pMVar8->Data;
      piVar9 = *(int **)(param_3 + 4);
      piVar10 = piVar9 + *(int *)(param_3 + 8) * 4;
      for (; piVar9 != piVar10; piVar9 = piVar9 + 4) {
        if ((CraftBlueprint *)*piVar9 == local_18) {
          local_10 = '\x01';
          local_20 = dVar1;
          iVar4 = (*(code *)**(undefined4 **)param_3)(&local_14);
          uVar11 = *(undefined4 *)&local_20;
          uVar12 = *(undefined4 *)((char *)&local_20 + 4);
          dVar1 = *(double *)(iVar4 + 8);
          if (dVar1 <= local_20) {
            uVar11 = *(undefined4 *)&dVar1;
            uVar12 = *(undefined4 *)((char *)&dVar1 + 4);
          }
          local_20 = (double)CONCAT44(uVar12,uVar11);
          if (local_10 == '\0') {
            util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13
                            ,"IsValid()",(char *)0x0);
            DebugBreak();
          }
          iVar4 = (*(code *)**(undefined4 **)param_3)(&local_14);
          *(double *)(iVar4 + 8) = local_20;
          goto LAB_007de550;
        }
        local_14 = local_14 + 1;
      }
      local_14 = 0;
      local_10 = '\0';
      local_30 = local_18;
      iVar4 = *(int *)(param_3 + 8);
      local_20 = (double)CONCAT44(iVar4 + 1,SUB84(dVar1,0));
      uStack_28 = dVar1;
      util__Darray_struct_MaterialConstituent___SetSize(param_3,(int *)((int)&local_20 + 4));
      bVar3 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize((Darray_L_struct_util__tuple2_L_class_WeaponModule__double_G__G *)param_3,iVar4);
      if (bVar3) {
        puVar5 = (undefined4 *)(*(int *)(param_3 + 4) + -0x10 + *(int *)(param_3 + 8) * 0x10);
        *puVar5 = local_30;
        puVar5[1] = uStack_2c;
        puVar5[2] = (undefined4)uStack_28;
        puVar5[3] = ((slice_view *)&uStack_28)->_4_4_;
      }
LAB_007de550:
      local_c = local_c + 1;
      iVar4 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
    } while (local_c < iVar4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007de5d0 007de5d0_FUN_007de5d0 ====
// decompiled by BatchDecomp @ 007de5d0 name=FUN_007de5d0 conv=unknown body=371

void FUN_007de5d0(Darray_L_struct_MaterialConstituent_G_ *param_1,int *param_2,undefined8 *param_3)

{
  undefined4 stack0xfffffffc;
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uStack_2c;
  int local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined8 uStack_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar5 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  *(undefined ***)param_1 = ((void *)(0x0091e0dcu));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar5;
  if (((int)uVar5 < 0) || (0x3fffffff < (int)uVar5)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar5) {
    puVar6 = (undefined4 *)
             operator_new__(-(uint)((int)((ulonglong)uVar5 * 0x10 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar5 * 0x10));
    puVar7 = puVar6;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar7 = 0;
        *(undefined8 *)(puVar7 + 2) = 0;
        puVar7 = puVar7 + 4;
      }
    }
    iVar9 = 0;
    *(undefined4 **)(param_1 + 4) = puVar6;
    if (0 < *(int *)(param_1 + 0xc)) {
      iVar8 = 0;
      do {
        iVar8 = iVar8 + 0x10;
        local_1c = 0;
        iVar9 = iVar9 + 1;
        uStack_14 = 0;
        puVar7 = (undefined4 *)(*(int *)(param_1 + 4) + -0x10 + iVar8);
        *puVar7 = 0;
        puVar7[1] = uStack_18;
        puVar7[2] = 0;
        puVar7[3] = 0;
      } while (iVar9 < *(int *)(param_1 + 0xc));
    }
  }
  local_c = 0;
  iVar9 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  if (local_c < iVar9) {
    do {
      puVar7 = (undefined4 *)(**(code **)*param_2)(&local_c);
      piVar1 = (int *)*puVar7;
      (**(code **)(*(int *)(uintptr_t)piVar1 + 0xc4))(&local_1c,*param_3);
      uVar3 = uStack_18;
      uVar2 = local_1c;
      if ((char)uStack_14 != '\0') {
        iVar9 = *(int *)(param_1 + 8);
        local_20 = iVar9 + 1;
        util__Darray_struct_MaterialConstituent___SetSize(param_1,&local_20);
        bVar4 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize((Darray_L_struct_util__tuple2_L_class_WeaponModule__double_G__G *)param_1,iVar9
                          );
        if (bVar4) {
          puVar7 = (undefined4 *)(*(int *)(param_1 + 4) + -0x10 + *(int *)(param_1 + 8) * 0x10);
          *puVar7 = piVar1;
          puVar7[1] = uStack_2c;
          puVar7[2] = uVar2;
          puVar7[3] = uVar3;
        }
      }
      local_c = local_c + 1;
      iVar9 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
    } while (local_c < iVar9);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007e1150 007e1150_FUN_007e1150 ====
// decompiled by BatchDecomp @ 007e1150 name=FUN_007e1150 conv=unknown body=301

undefined1 __thiscall FUN_007e1150(Darray_L_util__Reflectable_P_G_ *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  bool bVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  bool bVar9;
  undefined4 *local_c;
  bool local_5;
  
  local_5 = true;
  uVar8 = *(uint *)(param_1 + 8);
  bVar9 = -1 < (int)uVar8;
  bVar3 = !bVar9;
  if (bVar3) {
    local_c = (undefined4 *)0x0;
    util__Darray_class_util__Reflectable____SetSize(param_1,(int *)&local_c);
    uVar8 = *(uint *)(param_1 + 8);
  }
  local_5 = !bVar3;
  bVar3 = (int)uVar8 < 0x40000000;
  if (!bVar3) {
    local_c = (undefined4 *)0x3fffffff;
    util__Darray_class_util__Reflectable____SetSize(param_1,(int *)&local_c);
    uVar8 = *(uint *)(param_1 + 8);
    local_5 = false;
  }
  uVar4 = *(uint *)(param_1 + 0xc);
  if ((int)uVar8 <= (int)uVar4) {
    return bVar3 && bVar9;
  }
  if (uVar4 == 0) {
    *(uint *)(param_1 + 0xc) = uVar8;
    uVar4 = uVar8;
  }
  if ((int)uVar4 < (int)uVar8) {
    do {
      uVar4 = uVar4 * 2;
    } while ((int)uVar4 < (int)uVar8);
    *(uint *)(param_1 + 0xc) = uVar4;
  }
  if (0x3fffffff < (int)uVar4) {
    *(undefined4 *)(param_1 + 0xc) = 0x3fffffff;
    uVar4 = 0x3fffffff;
  }
  uVar8 = -(uint)((int)((ulonglong)uVar4 * 4 >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 4);
  puVar5 = (undefined4 *)operator_new__(uVar8);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
    local_c = (undefined4 *)0x0;
  }
  else {
    local_c = puVar5;
    memset(puVar5,0,uVar8);
  }
  puVar6 = *(undefined4 **)(param_1 + 4);
  if (puVar6 != (undefined4 *)0x0) {
    puVar1 = puVar5 + *(int *)(param_1 + 8);
    puVar7 = puVar6;
    if (puVar6 != puVar6 + param_2) {
      do {
        if (puVar5 == puVar1) break;
        uVar2 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar5 = uVar2;
        puVar5 = puVar5 + 1;
        puVar6 = *(undefined4 **)(param_1 + 4);
      } while (puVar7 != puVar6 + param_2);
    }
    operator_delete__(puVar6);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  *(undefined4 **)(param_1 + 4) = local_c;
  return local_5;
}


//==== 00007ecfa0 007ecfa0_FUN_007ecfa0 ====
// decompiled by BatchDecomp @ 007ecfa0 name=FUN_007ecfa0 conv=unknown body=422

void FUN_007ecfa0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 stack0x0000000c;
  undefined4 stack0xfffffffc;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  ReferenceController *this;
  ReferenceController *local_44;
  undefined8 local_40;
  ReferenceController local_38;
  undefined8 *puStack_2c;
  ReferenceController *local_28;
  undefined4 *local_24;
  undefined8 *local_20;
  undefined8 local_1c;
  undefined8 local_14;
  undefined4 local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_28 = (ReferenceController *)0x0;
  local_24 = param_1;
  local_38.Pointer = &stack0x0000000c;
  puStack_2c = &local_14;
  local_1c = 0;
  local_14 = 0;
  local_c = 0;
  FUN_007eda80(param_2,CONCAT44(puStack_2c,local_38.Pointer),&local_1c);
  if ((char)local_c == '\0') {
    local_44 = (ReferenceController *)0x0;
    local_40 = 0;
    uVar4 = 0;
    this = &local_38;
    ((slice_view *)&local_38.StrongReferenceCount)->_0_1_ = 0;
    bVar3 = false;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    this = ((slice_view *)&local_14)->_4_4_;
    local_20 = (undefined8 *)(undefined4)local_14;
    if (((slice_view *)&local_14)->_4_4_ != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(((slice_view *)&local_14)->_4_4_);
    }
    puStack_2c = (undefined8 *)local_1c;
    local_28 = (ReferenceController *)((ulonglong)local_1c >> 0x20);
    if (this != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this);
      if (this != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(this);
        util__ReferenceController__ReleaseWeakReference(this);
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this);
        }
      }
    }
    local_44 = this;
    if (this != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this);
    }
    local_40 = CONCAT44(local_28,puStack_2c);
    bVar3 = true;
    bVar2 = true;
    bVar1 = false;
    ((slice_view *)&local_38.StrongReferenceCount)->_0_1_ = 1;
    uVar4 = local_20;
  }
  local_20 = &local_40;
  local_28 = &local_38;
  *local_24 = uVar4;
  local_24[1] = local_44;
  if (local_44 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(local_44);
  }
  *(undefined8 *)(local_24 + 2) = *local_20;
  *(char *)(local_24 + 4) = (char)local_28->StrongReferenceCount;
  if (bVar1) {
    if (local_44 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_44);
    }
  }
  if ((bVar2) && (local_44 != (ReferenceController *)0x0)) {
    util__ReferenceController__ReleaseWeakReference(local_44);
  }
  if ((this != (ReferenceController *)0x0) && (bVar3)) {
    util__ReferenceController__ReleaseWeakReference(this);
  }
  if (((slice_view *)&local_14)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_14)->_4_4_);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007f1fa0 007f1fa0_TacticalAI__SetOrder ====
// decompiled by BatchDecomp @ 007f1fa0 name=SetOrder conv=__thiscall body=371

/* private: void __thiscall TacticalAI__SetOrder(enum AIOrder__Type,class util__WeakPtr_L_SpacecraftComponent_G_ &)const  */

void __thiscall TacticalAI__SetOrder(TacticalAI *this,int p1,undefined1 *p2)

{
  int iVar1;
  Body *pBVar2;
  ReferenceController *pRVar3;
  ControllableComponent *this_00;
  bool bVar4;
  undefined4 *puVar5;
  Type TVar6;
  Order local_2c;
  
  if (p1 == 1) {
    TVar6 = Homing;
  }
  else if (p1 == 2) {
    TVar6 = Broadside;
  }
  else if (p1 == 3) {
    TVar6 = NoseForward;
  }
  else {
    if (p1 != 4) {
      if ((*(ReferenceController **)(p2 + 4) != (ReferenceController *)0x0) &&
         (bVar4 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(p2 + 4)),
         !bVar4)) {
        *(undefined4 *)p2 = 0;
      }
      iVar1 = *(int *)p2;
      if ((*(ReferenceController **)(iVar1 + 8) != (ReferenceController *)0x0) &&
         (bVar4 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar1 + 8)),
         !bVar4)) {
        *(undefined4 *)(iVar1 + 4) = 0;
      }
      pBVar2 = *(Body **)(iVar1 + 4);
      Body__GetControllableComponent_Memoize(pBVar2);
      if ((char)(pBVar2->GetControllableComponent_MemoizedValue).IsValidData == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      pRVar3 = (ReferenceController *)
               (pBVar2->GetControllableComponent_MemoizedValue).Data.Controller;
      if ((pRVar3 != (ReferenceController *)0x0) &&
         (bVar4 = util__ReferenceController__IsDataStillValid(pRVar3), !bVar4)) {
        (pBVar2->GetControllableComponent_MemoizedValue).Data.Pointer = (undefined1 *)0x0;
      }
      ControllableComponent_ClearOrder((ControllableComponent *)
                 (pBVar2->GetControllableComponent_MemoizedValue).Data.Pointer);
      return;
    }
    TVar6 = Scatter;
  }
  if ((*(ReferenceController **)(p2 + 4) != (ReferenceController *)0x0) &&
     (bVar4 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(p2 + 4)), !bVar4
     )) {
    *(undefined4 *)p2 = 0;
  }
  iVar1 = *(int *)p2;
  if ((*(ReferenceController **)(iVar1 + 8) != (ReferenceController *)0x0) &&
     (bVar4 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar1 + 8)),
     !bVar4)) {
    *(undefined4 *)(iVar1 + 4) = 0;
  }
  pBVar2 = *(Body **)(iVar1 + 4);
  Body__GetControllableComponent_Memoize(pBVar2);
  if ((char)(pBVar2->GetControllableComponent_MemoizedValue).IsValidData == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pRVar3 = (ReferenceController *)(pBVar2->GetControllableComponent_MemoizedValue).Data.Controller;
  if ((pRVar3 != (ReferenceController *)0x0) &&
     (bVar4 = util__ReferenceController__IsDataStillValid(pRVar3), !bVar4)) {
    (pBVar2->GetControllableComponent_MemoizedValue).Data.Pointer = (undefined1 *)0x0;
  }
  this_00 = (ControllableComponent *)(pBVar2->GetControllableComponent_MemoizedValue).Data.Pointer;
  puVar5 = (undefined4 *)Order__Order(&local_2c,TVar6);
  ControllableComponent_ChangeOrder(this_00,*puVar5);
  return;
}


//==== 00007f75a0 007f75a0_FUN_007f75a0 ====
// decompiled by BatchDecomp @ 007f75a0 name=FUN_007f75a0 conv=unknown body=366

void FUN_007f75a0(Darray_L_util__Reflectable_P_G_ *param_1,int *param_2)

{
  undefined4 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar3 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  *(undefined ***)param_1 = ((void *)(0x009194a4u));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar3;
  if (((int)uVar3 < 0) || (0x3fffffff < (int)uVar3)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar3) {
    local_c = -(uint)((int)((ulonglong)uVar3 * 4 >> 0x20) != 0) | (uint)((ulonglong)uVar3 * 4);
    pvVar4 = operator_new__(local_c);
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      memset(pvVar4,0,local_c);
    }
    iVar7 = 0;
    *(void **)(param_1 + 4) = pvVar4;
    if (0 < *(int *)(param_1 + 0xc)) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 4) + iVar7 * 4) = 0;
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(param_1 + 0xc));
    }
  }
  local_c = 0;
  iVar7 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  if ((int)local_c < iVar7) {
    do {
      piVar5 = (int *)(**(code **)*param_2)(&local_c);
      if (((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]),
         !bVar2)) {
        *piVar5 = 0;
      }
      iVar7 = *piVar5;
      if ((*(ReferenceController **)(iVar7 + 8) != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar7 + 8)),
         !bVar2)) {
        *(undefined4 *)(iVar7 + 4) = 0;
      }
      iVar1 = *(int *)(param_1 + 8);
      iVar7 = *(int *)(*(int *)(iVar7 + 4) + 0x1e0);
      piVar6 = *(int **)(param_1 + 4);
      piVar5 = piVar6 + iVar1;
      for (; piVar6 != piVar5; piVar6 = piVar6 + 1) {
        if (*piVar6 == iVar7) goto LAB_007f76e8;
      }
      local_10 = iVar1 + 1;
      util__Darray_class_util__Reflectable____SetSize(param_1,&local_10);
      bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)param_1,iVar1);
      if (bVar2) {
        *(int *)(*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 4) = iVar7;
      }
LAB_007f76e8:
      local_c = local_c + 1;
      iVar7 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
    } while ((int)local_c < iVar7);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000809330 00809330_FUN_00809330 ====
// decompiled by BatchDecomp @ 00809330 name=FUN_00809330 conv=unknown body=346

void FUN_00809330(Darray_L_util__Reflectable_P_G_ *param_1,int *param_2)

{
  undefined4 stack0xfffffffc;
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  uint uVar4;
  void *pvVar5;
  int *piVar6;
  int iVar7;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar4 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  *(undefined ***)param_1 = ((void *)(0x009194a4u));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar4;
  if (((int)uVar4 < 0) || (0x3fffffff < (int)uVar4)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar4) {
    local_c = -(uint)((int)((ulonglong)uVar4 * 4 >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 4);
    pvVar5 = operator_new__(local_c);
    if (pvVar5 == (void *)0x0) {
      pvVar5 = (void *)0x0;
    }
    else {
      memset(pvVar5,0,local_c);
    }
    iVar7 = 0;
    *(void **)(param_1 + 4) = pvVar5;
    if (0 < *(int *)(param_1 + 0xc)) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 4) + iVar7 * 4) = 0;
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(param_1 + 0xc));
    }
  }
  local_c = 0;
  iVar7 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  if ((int)local_c < iVar7) {
    do {
      piVar6 = (int *)(**(code **)*param_2)(&local_c);
      if (((ReferenceController *)piVar6[1] != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar6[1]),
         !bVar3)) {
        *piVar6 = 0;
      }
      iVar7 = *piVar6;
      if ((*(ReferenceController **)(iVar7 + 8) != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar7 + 8)),
         !bVar3)) {
        *(undefined4 *)(iVar7 + 4) = 0;
      }
      iVar1 = *(int *)(param_1 + 8);
      uVar2 = *(undefined4 *)(*(int *)(iVar7 + 4) + 0x1e0);
      local_10 = iVar1 + 1;
      util__Darray_class_util__Reflectable____SetSize(param_1,&local_10);
      bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)param_1,iVar1);
      if (bVar3) {
        *(undefined4 *)(*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 4) = uVar2;
      }
      local_c = local_c + 1;
      iVar7 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
    } while ((int)local_c < iVar7);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000809700 00809700_FUN_00809700 ====
// decompiled by BatchDecomp @ 00809700 name=FUN_00809700 conv=unknown body=333

void FUN_00809700(Darray_L_util__Reflectable_P_G_ *param_1,int *param_2)

{
  undefined4 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar3 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  *(undefined ***)param_1 = ((void *)(0x009194a4u));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar3;
  if (((int)uVar3 < 0) || (0x3fffffff < (int)uVar3)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar3) {
    local_c = -(uint)((int)((ulonglong)uVar3 * 4 >> 0x20) != 0) | (uint)((ulonglong)uVar3 * 4);
    pvVar4 = operator_new__(local_c);
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      memset(pvVar4,0,local_c);
    }
    iVar7 = 0;
    *(void **)(param_1 + 4) = pvVar4;
    if (0 < *(int *)(param_1 + 0xc)) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 4) + iVar7 * 4) = 0;
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(param_1 + 0xc));
    }
  }
  local_c = 0;
  iVar7 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  if ((int)local_c < iVar7) {
    do {
      piVar5 = (int *)(**(code **)*param_2)(&local_c);
      if (((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]),
         !bVar2)) {
        *piVar5 = 0;
      }
      iVar7 = *(int *)(param_1 + 8);
      iVar1 = *(int *)(*(int *)(uintptr_t)piVar5 + 0x38);
      piVar6 = *(int **)(param_1 + 4);
      piVar5 = piVar6 + iVar7;
      for (; piVar6 != piVar5; piVar6 = piVar6 + 1) {
        if (*piVar6 == iVar1) goto LAB_0080982b;
      }
      local_10 = iVar7 + 1;
      util__Darray_class_util__Reflectable____SetSize(param_1,&local_10);
      bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)param_1,iVar7);
      if (bVar2) {
        *(int *)(*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 4) = iVar1;
      }
LAB_0080982b:
      local_c = local_c + 1;
      iVar7 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
    } while ((int)local_c < iVar7);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000814610 00814610_SpacecraftCompartmentUI__CanVisualizeArmor ====
// decompiled by BatchDecomp @ 00814610 name=CanVisualizeArmor conv=__thiscall body=155

/* private: bool __thiscall SpacecraftCompartmentUI__CanVisualizeArmor(void)const  */

bool __thiscall SpacecraftCompartmentUI__CanVisualizeArmor(SpacecraftCompartmentUI *this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  CraftBlueprint *this_00;
  int local_2c [4];
  int local_1c [4];
  undefined4 local_c;
  undefined1 local_5;
  
  local_c = 0;
  util__Attribute_class_util__Darray_class_util__WeakPtr_class_SpacecraftComponent_______Get__o2((Attribute_L_util__Darray_L_util__WeakPtr_L_SpacecraftComponent_G___G___G *)
             &this->ForShips);
  bVar1 = false;
  iVar3 = (**(code **)(local_2c[0] + 0xc))();
  if (iVar3 == 1) {
    util__Attribute_class_util__Darray_class_util__WeakPtr_class_SpacecraftComponent_______Get__o2((Attribute_L_util__Darray_L_util__WeakPtr_L_SpacecraftComponent_G___G___G *)
               &this->ForShips);
    puVar4 = (undefined4 *)(**(code **)(local_1c[0] + 0x20))();
    if ((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) {
      bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]);
      if (!bVar1) {
        *puVar4 = 0;
      }
    }
    bVar1 = true;
    this_00 = (CraftBlueprint *)SpacecraftComponent__GetCraftDesign((SpacecraftComponent *)*puVar4);
    bVar2 = CraftBlueprint__HasArmor(this_00);
    local_5 = 1;
    if (bVar2) goto LAB_0081468d;
  }
  local_5 = 0;
LAB_0081468d:
  if (bVar1) {
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_1c);
  }
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_2c);
  return (bool)local_5;
}


//==== 0000817690 00817690_SpacecraftCompartmentUI__GetHeatingTooltip ====
// decompiled by BatchDecomp @ 00817690 name=GetHeatingTooltip conv=__thiscall body=405

/* private: class Str_L_char_G_ __thiscall SpacecraftCompartmentUI__GetHeatingTooltip(void)const
    */

util__Str_L_char_G_ * __thiscall
SpacecraftCompartmentUI__GetHeatingTooltip
          (SpacecraftCompartmentUI *this,util__Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xfffffffc;
  bool bVar1;
  char *pcVar2;
  LocStr *this_00;
  Str_L_char_G_ *pSVar3;
  int iVar4;
  void *local_44 [2];
  int local_3c;
  void *local_38;
  Str_L_char_G local_2c;
  Str_L_char_G local_20;
  Str_L_char_G local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_14.Data = (char *)0x0;
  local_14.Capacity = 0;
  local_14.Length = 0;
  util__Str_char___Str_char__o5(&local_2c,"HeatSignature");
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  local_20.Length = 0;
  this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)local_44,&local_2c,&local_20);
  pSVar3 = util__LocStr__operator__o3(this_00);
  util__Str_char___Str_char(&local_14,pSVar3);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
    local_38 = (void *)0x0;
  }
  if (local_44[0] != (void *)0x0) {
    operator_delete__(local_44[0]);
    local_44[0] = (void *)0x0;
  }
  if (local_20.Data != (char *)0x0) {
    operator_delete__(local_20.Data);
    local_20.Data = (char *)0x0;
  }
  if (local_2c.Data != (char *)0x0) {
    operator_delete__(local_2c.Data);
  }
  util__Attribute_class_util__Darray_class_util__WeakPtr_class_SpacecraftComponent_______Get__o2((Attribute_L_util__Darray_L_util__WeakPtr_L_SpacecraftComponent_G___G___G *)
             &this->ForShips);
  FUN_0080dfc0(&local_3c,&local_14);
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_3c);
  util__Attribute_class_util__Darray_class_util__WeakPtr_class_SpacecraftComponent_______Get__o2((Attribute_L_util__Darray_L_util__WeakPtr_L_SpacecraftComponent_G___G___G *)
             &this->ForShips);
  iVar4 = (**(code **)(local_3c + 0xc))();
  bVar1 = iVar4 < 1;
  if (bVar1) {
    pSVar3 = &local_20;
    local_20.Data = (char *)0x0;
    local_20.Capacity = 0;
    local_20.Length = 0;
  }
  else {
    pSVar3 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_2c,&local_14);
  }
  pcVar2 = local_20.Data;
  util__Str_char___Str_char((Str_L_char_G_ *)__return_storage_ptr__,pSVar3);
  if ((bVar1) && (pcVar2 != (char *)0x0)) {
    operator_delete__(pcVar2);
  }
  if ((local_2c.Data != (char *)0x0) && (!bVar1)) {
    operator_delete__(local_2c.Data);
    local_2c.Data = (char *)0x0;
  }
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_3c);
  if (local_14.Data != (char *)0x0) {
    operator_delete__(local_14.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 0000819210 00819210_SpacecraftCompartmentUI__GetSelectionName ====
// decompiled by BatchDecomp @ 00819210 name=GetSelectionName conv=__thiscall body=195

/* private: class util__Str_L_char_G_ * __thiscall SpacecraftCompartmentUI__GetSelectionName(void)const
    */

undefined1 * __thiscall SpacecraftCompartmentUI__GetSelectionName(SpacecraftCompartmentUI *this)

{
  int iVar1;
  Body *this_00;
  ReferenceController *this_01;
  bool bVar2;
  int *piVar3;
  Str_L_char_G_ *pSVar4;
  bool bVar5;
  int local_18 [4];
  undefined4 local_8;
  
  bVar5 = false;
  local_8 = 0;
  bVar2 = ShowChangeSelectionNameBox(this);
  if (bVar2) {
    util__Attribute_class_util__Darray_class_util__WeakPtr_class_SpacecraftComponent_______Get__o2((Attribute_L_util__Darray_L_util__WeakPtr_L_SpacecraftComponent_G___G___G *)
               &this->ForShips);
    piVar3 = (int *)(**(code **)(local_18[0] + 0x20))();
    if ((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) {
      bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]);
      if (!bVar2) {
        *piVar3 = 0;
      }
    }
    iVar1 = *piVar3;
    if (*(ReferenceController **)(iVar1 + 8) != (ReferenceController *)0x0) {
      bVar2 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar1 + 8));
      if (!bVar2) {
        *(undefined4 *)(iVar1 + 4) = 0;
      }
    }
    this_00 = *(Body **)(iVar1 + 4);
    FUN_007acb10(this_00);
    if ((char)(this_00->GetCapitalShipComponent_MemoizedValue).IsValidData == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    this_01 = (ReferenceController *)
              (this_00->GetCapitalShipComponent_MemoizedValue).Data.Controller;
    if (this_01 != (ReferenceController *)0x0) {
      bVar2 = util__ReferenceController__IsDataStillValid(this_01);
      if (!bVar2) {
        (this_00->GetCapitalShipComponent_MemoizedValue).Data.Pointer = (undefined1 *)0x0;
      }
    }
    pSVar4 = CapitalShipComponent__GetNamePointer
                       ((CapitalShipComponent *)
                        (this_00->GetCapitalShipComponent_MemoizedValue).Data.Pointer);
    bVar5 = true;
  }
  else {
    pSVar4 = (Str_L_char_G_ *)0x0;
  }
  if (bVar5) {
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_18);
  }
  return (undefined1 *)pSVar4;
}


//==== 00008192e0 008192e0_SpacecraftCompartmentUI__GetSelectionNameInfo ====
// decompiled by BatchDecomp @ 008192e0 name=GetSelectionNameInfo conv=__thiscall body=463

/* private: class Str_L_char_G_ __thiscall
   SpacecraftCompartmentUI__GetSelectionNameInfo(void)const  */

util__Str_L_char_G_ * __thiscall
SpacecraftCompartmentUI__GetSelectionNameInfo
          (SpacecraftCompartmentUI *this,util__Str_L_char_G_ *__return_storage_ptr__)

{
  int iVar1;
  Body *pBVar2;
  ReferenceController *pRVar3;
  bool bVar4;
  bool bVar5;
  char *pcVar6;
  bool bVar7;
  bool bVar8;
  int *piVar9;
  Str_L_char_G_ *pSVar10;
  int local_40 [4];
  int local_30 [4];
  Str_L_char_G local_20;
  Str_L_char_G local_14;
  undefined4 local_8;
  
  bVar8 = false;
  local_8 = 0;
  bVar7 = ShowImmutableNameBox(this);
  if (bVar7) {
    util__Attribute_class_util__Darray_class_util__WeakPtr_class_SpacecraftComponent_______Get__o2((Attribute_L_util__Darray_L_util__WeakPtr_L_SpacecraftComponent_G___G___G *)
               &this->ForShips);
    piVar9 = (int *)(**(code **)(local_40[0] + 0x20))();
    if ((ReferenceController *)piVar9[1] != (ReferenceController *)0x0) {
      bVar8 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar9[1]);
      if (!bVar8) {
        *piVar9 = 0;
      }
    }
    iVar1 = *piVar9;
    if (*(ReferenceController **)(iVar1 + 8) != (ReferenceController *)0x0) {
      bVar8 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar1 + 8));
      if (!bVar8) {
        *(undefined4 *)(iVar1 + 4) = 0;
      }
    }
    pBVar2 = *(Body **)(iVar1 + 4);
    FUN_007acb10(pBVar2);
    if ((char)(pBVar2->GetCapitalShipComponent_MemoizedValue).IsValidData == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if (((pBVar2->GetCapitalShipComponent_MemoizedValue).Data.Pointer != (undefined1 *)0x0) &&
       (pRVar3 = (ReferenceController *)
                 (pBVar2->GetCapitalShipComponent_MemoizedValue).Data.Controller,
       pRVar3 != (ReferenceController *)0x0)) {
      bVar8 = util__ReferenceController__IsDataStillValid(pRVar3);
      if (bVar8) {
        util__Attribute_class_util__Darray_class_util__WeakPtr_class_SpacecraftComponent_______Get__o2((Attribute_L_util__Darray_L_util__WeakPtr_L_SpacecraftComponent_G___G___G
                    *)&this->ForShips);
        piVar9 = (int *)(**(code **)(local_30[0] + 0x20))();
        if ((ReferenceController *)piVar9[1] != (ReferenceController *)0x0) {
          bVar8 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar9[1]);
          if (!bVar8) {
            *piVar9 = 0;
          }
        }
        iVar1 = *piVar9;
        if (*(ReferenceController **)(iVar1 + 8) != (ReferenceController *)0x0) {
          bVar8 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar1 + 8));
          if (!bVar8) {
            *(undefined4 *)(iVar1 + 4) = 0;
          }
        }
        pBVar2 = *(Body **)(iVar1 + 4);
        FUN_007acb10(pBVar2);
        if ((char)(pBVar2->GetCapitalShipComponent_MemoizedValue).IsValidData == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        pRVar3 = (ReferenceController *)
                 (pBVar2->GetCapitalShipComponent_MemoizedValue).Data.Controller;
        if (pRVar3 != (ReferenceController *)0x0) {
          bVar8 = util__ReferenceController__IsDataStillValid(pRVar3);
          if (!bVar8) {
            (pBVar2->GetCapitalShipComponent_MemoizedValue).Data.Pointer = (undefined1 *)0x0;
          }
        }
        pSVar10 = CapitalShipComponent__GetName
                            ((CapitalShipComponent *)
                             (pBVar2->GetCapitalShipComponent_MemoizedValue).Data.Pointer,&local_20)
        ;
        bVar8 = true;
        bVar5 = true;
        bVar4 = true;
        bVar7 = false;
        goto LAB_00819448;
      }
    }
    bVar8 = true;
  }
  bVar5 = false;
  bVar4 = false;
  bVar7 = true;
  pSVar10 = &local_14;
  local_14.Data = (char *)0x0;
  local_14.Capacity = 0;
  local_14.Length = 0;
LAB_00819448:
  pcVar6 = local_14.Data;
  util__Str_char___Str_char((Str_L_char_G_ *)__return_storage_ptr__,pSVar10);
  if ((bVar7) && (pcVar6 != (char *)0x0)) {
    operator_delete__(pcVar6);
  }
  if (bVar4) {
    if (local_20.Data != (char *)0x0) {
      operator_delete__(local_20.Data);
      local_20.Data = (char *)0x0;
    }
  }
  if (bVar5) {
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_30);
  }
  if (bVar8) {
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_40);
  }
  return __return_storage_ptr__;
}


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


//==== 000081bb10 0081bb10_SpacecraftCompartmentUI__OnSelectionNameChanged ====
// decompiled by BatchDecomp @ 0081bb10 name=OnSelectionNameChanged conv=__thiscall body=168

/* private: void __thiscall SpacecraftCompartmentUI__OnSelectionNameChanged(void) */

void __thiscall SpacecraftCompartmentUI__OnSelectionNameChanged(SpacecraftCompartmentUI *this)

{
  int iVar1;
  Body *this_00;
  ReferenceController *this_01;
  bool bVar2;
  int *piVar3;
  int local_14 [4];
  
  util__Attribute_class_util__Darray_class_util__WeakPtr_class_SpacecraftComponent_______Get__o2((Attribute_L_util__Darray_L_util__WeakPtr_L_SpacecraftComponent_G___G___G *)
             &this->ForShips);
  piVar3 = (int *)(**(code **)(local_14[0] + 0x20))();
  if ((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]);
    if (!bVar2) {
      *piVar3 = 0;
    }
  }
  iVar1 = *piVar3;
  if (*(ReferenceController **)(iVar1 + 8) != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar1 + 8));
    if (!bVar2) {
      *(undefined4 *)(iVar1 + 4) = 0;
    }
  }
  this_00 = *(Body **)(iVar1 + 4);
  FUN_007acb10(this_00);
  if ((char)(this_00->GetCapitalShipComponent_MemoizedValue).IsValidData == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  this_01 = (ReferenceController *)(this_00->GetCapitalShipComponent_MemoizedValue).Data.Controller;
  if (this_01 != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__IsDataStillValid(this_01);
    if (!bVar2) {
      (this_00->GetCapitalShipComponent_MemoizedValue).Data.Pointer = (undefined1 *)0x0;
    }
  }
  CapitalShipComponent__OnNameChanged
            ((CapitalShipComponent *)(this_00->GetCapitalShipComponent_MemoizedValue).Data.Pointer);
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_14);
  return;
}


//==== 0000821260 00821260_SpacecraftCompartmentUI__ShowChangeSelectionNameBox ====
// decompiled by BatchDecomp @ 00821260 name=ShowChangeSelectionNameBox conv=__thiscall body=220

/* private: bool __thiscall SpacecraftCompartmentUI__ShowChangeSelectionNameBox(void)const  */

bool __thiscall SpacecraftCompartmentUI__ShowChangeSelectionNameBox(SpacecraftCompartmentUI *this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  CraftBlueprint *this_00;
  int local_2c [4];
  int local_1c [4];
  undefined4 local_c;
  undefined1 local_5;
  
  local_c = 0;
  util__Attribute_class_util__Darray_class_util__WeakPtr_class_SpacecraftComponent_______Get__o2((Attribute_L_util__Darray_L_util__WeakPtr_L_SpacecraftComponent_G___G___G *)
             &this->ForShips);
  bVar2 = false;
  iVar3 = (**(code **)(local_2c[0] + 0xc))();
  if (iVar3 == 1) {
    bVar1 = IsEntirelyPlayerControlled(this);
    if (bVar1) {
      util__Attribute_class_util__Darray_class_util__WeakPtr_class_SpacecraftComponent_______Get__o2((Attribute_L_util__Darray_L_util__WeakPtr_L_SpacecraftComponent_G___G___G *)
                 &this->ForShips);
      puVar4 = (undefined4 *)(**(code **)(local_1c[0] + 0x20))();
      if ((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]);
        if (!bVar2) {
          *puVar4 = 0;
        }
      }
      this_00 = (CraftBlueprint *)
                SpacecraftComponent__GetCraftDesign((SpacecraftComponent *)*puVar4);
      CraftBlueprint__IsACapitalShip_Memoize(this_00);
      if (*(char *)((int)&(this_00->GetMainEngineModulePlacers_MemoizedValue).Data.Size + 1) == '\0'
         ) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      bVar2 = true;
      local_5 = 1;
      if ((char)(this_00->GetMainEngineModulePlacers_MemoizedValue).Data.Size != '\0')
      goto LAB_0082131d;
    }
  }
  local_5 = 0;
LAB_0082131d:
  if (bVar2) {
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_1c);
  }
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_2c);
  return (bool)local_5;
}


//==== 0000821340 00821340_SpacecraftCompartmentUI__ShowImmutableNameBox ====
// decompiled by BatchDecomp @ 00821340 name=ShowImmutableNameBox conv=__thiscall body=220

/* private: bool __thiscall SpacecraftCompartmentUI__ShowImmutableNameBox(void)const  */

bool __thiscall SpacecraftCompartmentUI__ShowImmutableNameBox(SpacecraftCompartmentUI *this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  CraftBlueprint *this_00;
  int local_2c [4];
  int local_1c [4];
  undefined4 local_c;
  undefined1 local_5;
  
  local_c = 0;
  util__Attribute_class_util__Darray_class_util__WeakPtr_class_SpacecraftComponent_______Get__o2((Attribute_L_util__Darray_L_util__WeakPtr_L_SpacecraftComponent_G___G___G *)
             &this->ForShips);
  bVar2 = false;
  iVar3 = (**(code **)(local_2c[0] + 0xc))();
  if (iVar3 == 1) {
    bVar1 = IsEntirelyPlayerControlled(this);
    if (!bVar1) {
      util__Attribute_class_util__Darray_class_util__WeakPtr_class_SpacecraftComponent_______Get__o2((Attribute_L_util__Darray_L_util__WeakPtr_L_SpacecraftComponent_G___G___G *)
                 &this->ForShips);
      puVar4 = (undefined4 *)(**(code **)(local_1c[0] + 0x20))();
      if ((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]);
        if (!bVar2) {
          *puVar4 = 0;
        }
      }
      this_00 = (CraftBlueprint *)
                SpacecraftComponent__GetCraftDesign((SpacecraftComponent *)*puVar4);
      CraftBlueprint__IsACapitalShip_Memoize(this_00);
      if (*(char *)((int)&(this_00->GetMainEngineModulePlacers_MemoizedValue).Data.Size + 1) == '\0'
         ) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      bVar2 = true;
      local_5 = 1;
      if ((char)(this_00->GetMainEngineModulePlacers_MemoizedValue).Data.Size != '\0')
      goto LAB_008213fd;
    }
  }
  local_5 = 0;
LAB_008213fd:
  if (bVar2) {
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_1c);
  }
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_2c);
  return (bool)local_5;
}


//==== 0000822f60 00822f60_OrderButton__AnyShipsCanExecuteOrder ====
// decompiled by BatchDecomp @ 00822f60 name=AnyShipsCanExecuteOrder conv=__thiscall body=378

/* private: bool __thiscall OrderButton__AnyShipsCanExecuteOrder(void)const  */

bool __thiscall OrderButton__AnyShipsCanExecuteOrder(OrderButton *this)

{
  undefined4 stack0xfffffffc;
  ReferenceController *this_00;
  bool bVar1;
  bool bVar2;
  char cVar3;
  OrderInfo__EnableInfo *pOVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  ReferenceController *pRVar8;
  OrderInfo__EnableInfo local_64;
  Darray_L_util__WeakPtr_L_SpacecraftComponent_G___G local_54 [16];
  OrderInfo__EnableInfo local_44;
  OrderInfo__EnableInfo local_34;
  undefined4 *local_24 [4];
  OrderButton *local_14;
  char local_d;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  local_14 = this;
  pOVar4 = GetOrderEnableInfo(this,&local_64);
  bVar2 = false;
  if (pOVar4->EnableCheck == (undefined1 **)0x0) {
LAB_008230a0:
    local_d = 1;
  }
  else {
    GetShips(this);
    GetControllersOfShips((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_24);
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_54);
    local_c = 0;
    bVar2 = true;
    bVar1 = false;
    iVar5 = (*(code *)local_24[0][3])();
    if (local_c < iVar5) {
      do {
        puVar6 = (undefined4 *)(*(code *)*local_24[0])(&local_c);
        this_00 = (ReferenceController *)puVar6[1];
        uVar7 = *puVar6;
        if (this_00 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this_00);
        }
        pOVar4 = GetOrderEnableInfo(local_14,&local_44);
        if (pOVar4->EnableCheck == (undefined1 **)0x0) {
LAB_00823037:
          local_d = '\x01';
        }
        else {
          bVar1 = true;
          pRVar8 = this_00;
          if (this_00 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this_00);
          }
          pOVar4 = GetOrderEnableInfo(local_14,&local_34);
          cVar3 = (*(code *)pOVar4->EnableCheck)(uVar7,pRVar8);
          local_d = '\0';
          if (cVar3 != '\0') goto LAB_00823037;
        }
        if ((bVar1) && (bVar1 = false, (void *)local_34.DisableTooltip.Data != (void *)0x0)) {
          operator_delete__((void *)local_34.DisableTooltip.Data);
          local_34.DisableTooltip.Data = 0;
        }
        if ((void *)local_44.DisableTooltip.Data != (void *)0x0) {
          operator_delete__((void *)local_44.DisableTooltip.Data);
          local_44.DisableTooltip.Data = 0;
        }
        if (this_00 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this_00);
        }
        if (local_d != '\0') goto LAB_008230a0;
        local_c = local_c + 1;
        iVar5 = (*(code *)local_24[0][3])();
      } while (local_c < iVar5);
    }
    local_d = 0;
  }
  if (bVar2) {
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_24);
  }
  if ((void *)local_64.DisableTooltip.Data != (void *)0x0) {
    operator_delete__((void *)local_64.DisableTooltip.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)local_d;
}


//==== 0000823350 00823350_OrderButton__ChangeOrder ====
// decompiled by BatchDecomp @ 00823350 name=ChangeOrder conv=unknown body=613

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static void __cdecl OrderButton__ChangeOrder(class TacticalManager *,enum
   OrderInfoTypes__Type,class util__Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G const &)
    */

void OrderButton__ChangeOrder(undefined1 *p0,Type p1,undefined1 *p2)

{
  undefined4 stack0xfffffffc;
  ReferenceController *this;
  ReferenceController *this_00;
  ControllableComponent *this_01;
  bool bVar1;
  BasicInfo *pBVar2;
  int iVar3;
  undefined4 *puVar4;
  Darray_L_class_util__WeakPtr_L_class_ControllableComponent_G___G_ *pDVar5;
  Order local_78;
  undefined1 local_50 [24];
  char *local_38;
  int iStack_34;
  int iStack_30;
  char *pcStack_2c;
  ReferenceController *local_24;
  Type local_20;
  undefined4 *local_1c;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_1c = (undefined4 *)0x0;
  uStack_18 = 0;
  iStack_14 = 0;
  uStack_10 = 0;
  GetControllersOfShips((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_1c);
  if ((0 < iStack_14) &&
     (bVar1 = IsOrderEnabled(p1,(Darray_L_class_util__WeakPtr_L_class_ControllableComponent_G___G_ *)
                                &local_1c), bVar1)) {
    if (p1 == Cancel) {
      local_c = 0;
      iVar3 = (*(code *)local_1c[3])();
      if (local_c < iVar3) {
        do {
          puVar4 = (undefined4 *)(*(code *)*local_1c)(&local_c);
          if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
             (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
             !bVar1)) {
            *puVar4 = 0;
          }
          ControllableComponent_ClearOrder((ControllableComponent *)*puVar4);
          local_c = local_c + 1;
          iVar3 = (*(code *)local_1c[3])();
        } while (local_c < iVar3);
      }
    }
    else {
      if (p1 == Move) {
        puVar4 = (undefined4 *)TacticalManager__GetOrderOverlay((TacticalManager *)p0);
        if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
           !bVar1)) {
          *puVar4 = 0;
        }
        OrderModeOverlay__BeginMoving
                  ((OrderModeOverlay *)*puVar4,
                   (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)p2);
      }
      else {
        if (p1 != Orient) {
          pBVar2 = OrderInfo__GetOrderInfo((BasicInfo *)(local_50 + 0xc),p1);
          local_c = 0;
          local_20 = pBVar2->OrderType;
          iVar3 = (*(code *)local_1c[3])();
          if (local_c < iVar3) {
            do {
              puVar4 = (undefined4 *)(*(code *)*local_1c)(&local_c);
              local_38 = (char *)0x0;
              iStack_34 = 0;
              iStack_30 = 0;
              pcStack_2c = (char *)0x0;
              util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_38,1);
              iVar3 = iStack_30;
              local_24 = (ReferenceController *)(iStack_30 + 1);
              util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_38,(int *)&local_24);
              bVar1 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_38,iVar3);
              if (bVar1) {
                this = *(ReferenceController **)(iStack_34 + -4 + iStack_30 * 8);
                iVar3 = iStack_34 + iStack_30 * 8;
                *(undefined4 *)(iVar3 + -8) = *puVar4;
                this_00 = (ReferenceController *)puVar4[1];
                *(ReferenceController **)(iVar3 + -4) = this_00;
                if (this_00 != (ReferenceController *)0x0) {
                  util__ReferenceController__AddWeakReference(this_00);
                }
                if (this != (ReferenceController *)0x0) {
                  util__ReferenceController__ReleaseWeakReference(this);
                }
              }
              pDVar5 = (Darray_L_class_util__WeakPtr_L_class_ControllableComponent_G___G_ *)&local_38;
              pBVar2 = OrderInfo__GetOrderButtonInfo((BasicInfo *)local_50,local_20);
              bVar1 = IsOrderEnabled(pBVar2->ButtonType,pDVar5);
              util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_38);
              if (bVar1) {
                if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
                   (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]), !bVar1)) {
                  *puVar4 = 0;
                }
                this_01 = (ControllableComponent *)*puVar4;
                puVar4 = (undefined4 *)Order__Order(&local_78,local_20);
                ControllableComponent_ChangeOrder(this_01,*puVar4);
              }
              local_c = local_c + 1;
              iVar3 = (*(code *)local_1c[3])();
            } while (local_c < iVar3);
          }
          goto LAB_0082359c;
        }
        puVar4 = (undefined4 *)TacticalManager__GetOrderOverlay((TacticalManager *)p0);
        if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
           !bVar1)) {
          *puVar4 = 0;
        }
        OrderModeOverlay__BeginOrienting
                  ((OrderModeOverlay *)*puVar4,
                   (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)p2);
      }
      if (local_24 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_24);
      }
    }
  }
LAB_0082359c:
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000824130 00824130_OrderButton__GetOrderEnableInfo ====
// decompiled by BatchDecomp @ 00824130 name=GetOrderEnableInfo conv=__thiscall body=440

/* private: struct OrderInfo__EnableInfo __thiscall OrderButton__GetOrderEnableInfo(void)const  */

OrderInfo__EnableInfo * __thiscall
OrderButton__GetOrderEnableInfo(OrderButton *this,OrderInfo__EnableInfo *__return_storage_ptr__)

{
  LocStr *pLVar1;
  Str_L_char_G_ *pSVar2;
  void *local_40 [3];
  void *local_34;
  Str_L_char_G local_28;
  Str_L_char_G local_1c;
  Str_L_char_G local_10;
  
  if (this->OrderButtonType == 3) {
    util__Str_char___Str_char__o5(&local_1c,"CantRollNoRollEngines");
    local_10.Data = (char *)0x0;
    local_10.Capacity = 0;
    local_10.Length = 0;
    pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)local_40,&local_1c,&local_10);
    pSVar2 = util__LocStr__operator__o3(pLVar1);
    util__Str_char___Str_char(&local_28,pSVar2);
    __return_storage_ptr__->EnableCheck = (undefined1 **)RollEnabled;
    util__Str_char___Str_char((Str_L_char_G_ *)&__return_storage_ptr__->DisableTooltip,&local_28);
    if (local_28.Data != (char *)0x0) {
      operator_delete__(local_28.Data);
    }
    if (local_34 != (void *)0x0) {
      operator_delete__(local_34);
      local_34 = (void *)0x0;
    }
    if (local_40[0] != (void *)0x0) {
      operator_delete__(local_40[0]);
      local_40[0] = (void *)0x0;
    }
    if (local_10.Data != (char *)0x0) {
      operator_delete__(local_10.Data);
      local_10.Data = (char *)0x0;
    }
  }
  else {
    if (this->OrderButtonType != 6) {
      __return_storage_ptr__->EnableCheck = (undefined1 **)0x0;
      (__return_storage_ptr__->DisableTooltip).Data = 0;
      (__return_storage_ptr__->DisableTooltip).Capacity = 0;
      (__return_storage_ptr__->DisableTooltip).Length = 0;
      return __return_storage_ptr__;
    }
    util__Str_char___Str_char__o5(&local_28,"CantBroadsideNoWeapons");
    local_10.Data = (char *)0x0;
    local_10.Capacity = 0;
    local_10.Length = 0;
    pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)local_40,&local_28,&local_10);
    pSVar2 = util__LocStr__operator__o3(pLVar1);
    util__Str_char___Str_char(&local_1c,pSVar2);
    __return_storage_ptr__->EnableCheck = (undefined1 **)BroadsideEnabled;
    util__Str_char___Str_char((Str_L_char_G_ *)&__return_storage_ptr__->DisableTooltip,&local_1c);
    if (local_1c.Data != (char *)0x0) {
      operator_delete__(local_1c.Data);
    }
    if (local_34 != (void *)0x0) {
      operator_delete__(local_34);
      local_34 = (void *)0x0;
    }
    if (local_40[0] != (void *)0x0) {
      operator_delete__(local_40[0]);
      local_40[0] = (void *)0x0;
    }
    local_1c.Data = local_28.Data;
    if (local_10.Data != (char *)0x0) {
      operator_delete__(local_10.Data);
      local_10.Data = (char *)0x0;
      local_1c.Data = local_28.Data;
    }
  }
  if (local_1c.Data != (char *)0x0) {
    operator_delete__(local_1c.Data);
  }
  return __return_storage_ptr__;
}


//==== 0000827730 00827730_ShipGroupUI__AnyShipsHaveDeltaV ====
// decompiled by BatchDecomp @ 00827730 name=AnyShipsHaveDeltaV conv=__thiscall body=195

/* private: bool __thiscall ShipGroupUI__AnyShipsHaveDeltaV(void)const  */

bool __thiscall ShipGroupUI__AnyShipsHaveDeltaV(ShipGroupUI *this)

{
  undefined4 stack0xfffffffc;
  SpacecraftComponent *this_00;
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_1c = (undefined4 *)0x0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  GetShipsInGroup(this);
  local_c = 0;
  iVar3 = (*(code *)local_1c[3])();
  if (local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(*(code *)*local_1c)(&local_c);
      if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
         !bVar1)) {
        *puVar4 = 0;
      }
      this_00 = (SpacecraftComponent *)*puVar4;
      SpacecraftComponent_HasDeltaVLeft_Memoize(this_00);
      if (*(char *)((int)&this_00->HasDeltaVLeft_MemoizedValue + 1) == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      if (*(char *)&this_00->HasDeltaVLeft_MemoizedValue != '\0') {
        uVar2 = 1;
        goto LAB_008277d4;
      }
      local_c = local_c + 1;
      iVar3 = (*(code *)local_1c[3])();
    } while (local_c < iVar3);
  }
  uVar2 = 0;
LAB_008277d4:
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_1c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}


//==== 000082a9d0 0082a9d0_ShipGroupUI__ShowButtonShipIcon ====
// decompiled by BatchDecomp @ 0082a9d0 name=ShowButtonShipIcon conv=__thiscall body=239

/* private: bool __thiscall ShipGroupUI__ShowButtonShipIcon(void)const  */

bool __thiscall ShipGroupUI__ShowButtonShipIcon(ShipGroupUI *this)

{
  undefined4 stack0xfffffffc;
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  CraftBlueprint *this_00;
  bool bVar5;
  Darray_L_util__WeakPtr_L_SpacecraftComponent_G___G local_20 [19];
  undefined1 local_d;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar5 = false;
  local_c = 0;
  bVar1 = IsGroupEnemy(this);
  if (!bVar1) {
    piVar2 = (int *)GetShipsInGroup(this);
    local_c = 0;
    iVar3 = (**(code **)(*(int *)(uintptr_t)piVar2 + 0xc))();
    if (local_c < iVar3) {
      do {
        puVar4 = (undefined4 *)(**(code **)*piVar2)(&local_c);
        if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
           !bVar1)) {
          *puVar4 = 0;
        }
        this_00 = (CraftBlueprint *)
                  SpacecraftComponent__GetCraftDesign((SpacecraftComponent *)*puVar4);
        CraftBlueprint__CanMove_Memoize(this_00);
        if (*(char *)((int)&(this_00->GetMainEngineModulePlacers_MemoizedValue).Data.Data + 1) ==
            '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        if (*(char *)&(this_00->GetMainEngineModulePlacers_MemoizedValue).Data.Data == '\0') {
          local_d = 0;
          bVar5 = true;
          goto LAB_0082aa92;
        }
        local_c = local_c + 1;
        iVar3 = (**(code **)(*(int *)(uintptr_t)piVar2 + 0xc))();
      } while (local_c < iVar3);
    }
    bVar5 = true;
  }
  local_d = 1;
LAB_0082aa92:
  if (bVar5) {
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_20);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)local_d;
}


//==== 000083d980 0083d980_FUN_0083d980 ====
// decompiled by BatchDecomp @ 0083d980 name=FUN_0083d980 conv=unknown body=183

void __fastcall FUN_0083d980(undefined4 *param_1)

{
  undefined4 stack0x00000004;
  undefined4 uVar1;
  float fVar2;
  bool bVar3;
  Character *this;
  undefined **local_18;
  Character *local_14;
  Character *local_10;
  Character *local_c;
  int local_8;
  
  this = util__HashMap_unsigned_long_struct_Font__Character___Find((HashMap_L_unsigned_long_Cstruct_Font__Character_G_ *)*param_1,
                    (ulong *)&stack0x00000004);
  if (this == (Character *)0x0) {
    local_18 = ((void *)(0x009194a4u));
    local_14 = this;
    local_10 = this;
    local_c = this;
    util__HashMap_int_class_util__Darray_struct_IndexedFace______Add((HashMap_L_int_class_util__Darray_L_struct_IndexedFace__G__G *)*param_1,
               (int *)&stack0x00000004,(Darray_L_struct_IndexedFace_P_G_ *)&local_18);
    local_18 = ((void *)(0x009194a4u));
    if (local_14 != (Character *)0x0) {
      operator_delete__(local_14);
    }
    this = util__HashMap_unsigned_long_struct_Font__Character___Find((HashMap_L_unsigned_long_Cstruct_Font__Character_G_ *)*param_1,
                      (ulong *)&stack0x00000004);
    if (this == (Character *)0x0) {
      util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\models.cpp",0x212,
                      "Result != nullptr",(char *)0x0);
      DebugBreak();
    }
  }
  uVar1 = param_1[1];
  fVar2 = (this->BitmapSize).X;
  local_8 = (int)fVar2 + 1;
  util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)this,&local_8)
  ;
  bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)this,(int)fVar2);
  if (bVar3) {
    *(undefined4 *)((int)(this->Advance).Y + -4 + (int)(this->BitmapSize).X * 4) = uVar1;
  }
  return;
}


//==== 000088bef0 0088bef0_FUN_0088bef0 ====
// decompiled by BatchDecomp @ 0088bef0 name=FUN_0088bef0 conv=unknown body=1025

void __thiscall FUN_0088bef0(int *param_1,uint param_2,uint param_3)

{
  undefined4 stack0xfffffffc;
  undefined8 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  Str_L_char_G_ *pSVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  void *pvVar17;
  int iVar18;
  int *piVar19;
  Darray_L_struct_util__tuple2_L_unsigned_long_Cstruct_Font__Character_G___G_ *this;
  undefined4 local_5c;
  undefined4 uStack_58;
  Str_L_char_G local_50;
  uint local_44;
  uint uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int *local_18;
  int *local_14;
  char local_d;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_18 = param_1;
  if (param_2 <= param_3) {
    do {
      iVar12 = FT_Load_Char(*(undefined4 *)(*(int *)(uintptr_t)param_1 + 0x40),param_2,4);
      if (iVar12 == 0) {
        piVar19 = (int *)param_1[1];
        iVar12 = *piVar19;
        if (*(uint *)param_1[3] <= (uint)(*(int *)(*(int *)param_1[2] + 0x50) + 1 + iVar12)) {
          piVar19 = (int *)param_1[4];
          if (iVar12 < *piVar19) {
            iVar12 = *piVar19;
          }
          *piVar19 = iVar12;
          *(int *)(param_1[4] + 4) = *(int *)(param_1[4] + 4) + *(int *)(param_1[1] + 4);
          puVar2 = (undefined4 *)param_1[1];
          *puVar2 = 0;
          puVar2[1] = 0;
          piVar19 = (int *)param_1[1];
        }
        *piVar19 = *piVar19 + *(int *)(*(int *)param_1[2] + 0x50) + 1;
        iVar12 = *(int *)(param_1[1] + 4);
        if (iVar12 <= *(int *)(*(int *)param_1[2] + 0x4c)) {
          iVar12 = *(int *)(*(int *)param_1[2] + 0x4c);
        }
        *(int *)(param_1[1] + 4) = iVar12;
        iVar12 = *(int *)(*(int *)(uintptr_t)param_1 + 0x20);
        if (iVar12 <= *(int *)(*(int *)param_1[2] + 0x4c)) {
          iVar12 = *(int *)(*(int *)param_1[2] + 0x4c);
        }
        *(int *)(*(int *)(uintptr_t)param_1 + 0x20) = iVar12;
        iVar18 = *(int *)(*(int *)param_1[2] + 0x4c) - *(int *)(*(int *)param_1[2] + 0x68);
        iVar12 = *(int *)(*(int *)(uintptr_t)param_1 + 0x24);
        if (iVar12 <= iVar18) {
          iVar12 = iVar18;
        }
        *(int *)(*(int *)(uintptr_t)param_1 + 0x24) = iVar12;
        memset(&local_44,0,0x2c);
        iVar12 = *param_1;
        uStack_38 = 0;
        uStack_34 = 0;
        uStack_30 = 0;
        uStack_2c = 0;
        uStack_28 = 0;
        uStack_24 = 0;
        uStack_20 = 0;
        uStack_1c = 0;
        if (*(int *)(iVar12 + 0x3c) != 0) {
          uVar14 = (param_2 & 0xff) * 0x401;
          local_d = '\0';
          local_c = 0;
          uVar14 = ((uVar14 >> 6 ^ uVar14) + (param_2 >> 8 & 0xff)) * 0x401;
          uVar14 = ((uVar14 >> 6 ^ uVar14) + (param_2 >> 0x10 & 0xff)) * 0x401;
          uVar14 = ((uVar14 >> 6 ^ uVar14) + (param_2 >> 0x18)) * 0x401;
          uVar14 = (uVar14 ^ uVar14 >> 6) * 9;
          this = (Darray_L_struct_util__tuple2_L_unsigned_long_Cstruct_Font__Character_G___G_ *)
                 ((((uVar14 >> 0xb ^ uVar14) * 0x8001) % *(uint *)(iVar12 + 0x3c)) * 0x10 +
                 *(int *)(iVar12 + 0x38));
          iVar12 = (**(code **)(*(int *)this + 0xc))();
          uVar9 = uStack_1c;
          if (local_c < iVar12) {
            do {
              puVar15 = (uint *)(*(code *)**(undefined4 **)this)(&local_c);
              if (*puVar15 == param_2) {
                iVar12 = (*(code *)**(undefined4 **)this)(&local_c);
                uVar1 = CONCAT44(uStack_20,uStack_24);
                *(uint *)(iVar12 + 4) = local_44;
                *(uint *)(iVar12 + 8) = uStack_40;
                *(uint *)(iVar12 + 0xc) = uStack_3c;
                *(undefined4 *)(iVar12 + 0x10) = uStack_38;
                *(undefined4 *)(iVar12 + 0x14) = uStack_34;
                *(undefined4 *)(iVar12 + 0x18) = uStack_30;
                *(undefined4 *)(iVar12 + 0x1c) = uStack_2c;
                *(undefined4 *)(iVar12 + 0x20) = uStack_28;
                *(undefined8 *)(iVar12 + 0x24) = uVar1;
                *(undefined4 *)(iVar12 + 0x2c) = uVar9;
                cVar10 = '\x01';
                goto LAB_0088c0e1;
              }
              local_c = local_c + 1;
              iVar12 = (*(code *)(*(undefined4 **)this)[3])();
            } while (local_c < iVar12);
          }
          uVar1 = CONCAT44(uStack_20,uStack_24);
          cVar10 = local_d;
LAB_0088c0e1:
          uVar8 = uStack_28;
          uVar7 = uStack_2c;
          uVar6 = uStack_30;
          uVar5 = uStack_34;
          uVar4 = uStack_38;
          uVar3 = uStack_3c;
          uVar16 = uStack_40;
          uVar14 = local_44;
          param_1 = local_18;
          if (cVar10 == '\0') {
            iVar12 = *(int *)(this + 8);
            local_14 = (int *)(iVar12 + 1);
            util__Darray_struct_util__tuple2_unsigned_long_struct_Font__Character_____SetSize(this,(int *)&local_14);
            bVar11 = util__Darray_struct_util__tuple2_unsigned_long_struct_Font__Character_____CheckSize(this,iVar12);
            param_1 = local_18;
            if (bVar11) {
              iVar12 = *(int *)(this + 8);
              iVar18 = *(int *)(this + 4);
              puVar15 = (uint *)(iVar18 + -0x30 + iVar12 * 0x30);
              *puVar15 = param_2;
              puVar15[1] = uVar14;
              puVar15[2] = uVar16;
              puVar15[3] = uVar3;
              puVar2 = (undefined4 *)(iVar18 + -0x20 + iVar12 * 0x30);
              *puVar2 = uVar4;
              puVar2[1] = uVar5;
              puVar2[2] = uVar6;
              puVar2[3] = uVar7;
              local_5c = (undefined4)uVar1;
              uStack_58 = *(undefined4 *)((char *)&uVar1 + 4);
              puVar2 = (undefined4 *)(iVar18 + -0x10 + iVar12 * 0x30);
              *puVar2 = uVar8;
              puVar2[1] = local_5c;
              puVar2[2] = uStack_58;
              puVar2[3] = uVar9;
            }
          }
        }
        local_14 = (int *)(*(int *)(uintptr_t)param_1 + 0x38);
        uVar14 = *(uint *)(*(int *)(uintptr_t)param_1 + 0x3c);
        if (uVar14 != 0) {
          uVar16 = (param_2 & 0xff) * 0x401;
          local_c = 0;
          uVar16 = ((uVar16 >> 6 ^ uVar16) + (param_2 >> 8 & 0xff)) * 0x401;
          uVar16 = ((uVar16 >> 6 ^ uVar16) + (param_2 >> 0x10 & 0xff)) * 0x401;
          uVar16 = ((uVar16 >> 6 ^ uVar16) + (param_2 >> 0x18)) * 0x401;
          uVar16 = (uVar16 ^ uVar16 >> 6) * 9;
          piVar19 = (int *)((((uVar16 >> 0xb ^ uVar16) * 0x8001) % uVar14) * 0x10 + *local_14);
          iVar12 = (**(code **)(*(int *)(uintptr_t)piVar19 + 0xc))();
          if (local_c < iVar12) {
            do {
              puVar15 = (uint *)(**(code **)*piVar19)(&local_c);
              if (*puVar15 == param_2) {
                iVar12 = (**(code **)*piVar19)(&local_c);
                local_14 = (int *)(iVar12 + 4);
                goto LAB_0088c1fa;
              }
              local_c = local_c + 1;
              iVar12 = (*(code *)((undefined4 *)*piVar19)[3])();
            } while (local_c < iVar12);
          }
        }
        local_14 = (int *)0x0;
LAB_0088c1fa:
        iVar12 = *(int *)(*(int *)param_1[2] + 0x44);
        local_14[3] = (int)(float)(*(int *)(*(int *)param_1[2] + 0x40) >> 6);
        local_14[4] = (int)(float)(iVar12 >> 6);
        iVar12 = *(int *)(*(int *)param_1[2] + 0x4c);
        local_14[5] = (int)(float)*(int *)(*(int *)param_1[2] + 0x50);
        local_14[6] = (int)(float)iVar12;
        iVar12 = *(int *)(*(int *)param_1[2] + 0x68);
        local_14[7] = (int)(float)*(int *)(*(int *)param_1[2] + 100);
        local_14[8] = (int)(float)iVar12;
        iVar12 = *(int *)(*(int *)param_1[2] + 0x50);
        *local_14 = iVar12;
        iVar18 = *(int *)(*(int *)param_1[2] + 0x4c);
        local_14[1] = iVar18;
        uVar14 = iVar18 * iVar12;
        pvVar17 = operator_new__(uVar14);
        local_14[2] = (int)pvVar17;
        memcpy(pvVar17,*(undefined4 *)(*(int *)param_1[2] + 0x58),uVar14);
      }
      else {
        pSVar13 = util__Printf__o3(&local_50,"Loading font character \'%c\' (%i) failed!\n",
                               (int)(char)param_2,param_2);
        util__Log(pSVar13);
        if (local_50.Data != (char *)0x0) {
          operator_delete__(local_50.Data);
          local_50.Data = (char *)0x0;
        }
      }
      param_2 = param_2 + 1;
    } while (param_2 <= param_3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000892210 00892210_FUN_00892210 ====
// decompiled by BatchDecomp @ 00892210 name=FUN_00892210 conv=unknown body=439

void FUN_00892210(int *param_1,int *param_2,int param_3,undefined8 *param_4,double *param_5)

{
  undefined4 stack0xfffffffc;
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  Str_L_char_G_ *pSVar4;
  int iVar5;
  Str_L_char_G_ *this;
  char *pcVar6;
  char cVar7;
  char *pcVar8;
  double dVar9;
  double dVar10;
  Str_L_char_G local_3c;
  undefined8 local_2c;
  Str_L_char_G local_24;
  undefined8 local_18;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar3 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
  if (local_c < iVar3) {
    do {
      pSVar4 = (Str_L_char_G_ *)(**(code **)*param_1)(&local_c);
      iVar3 = *param_2;
      iVar5 = (**(code **)(*(int *)(param_3 + 0x1c8) + 0xc))();
      if (iVar3 < iVar5) {
        *param_2 = iVar3 + 1;
        local_10 = iVar3;
        this = (Str_L_char_G_ *)(*(code *)**(undefined4 **)(param_3 + 0x1c8))(&local_10);
        if (this->Length == pSVar4->Length) {
          if (this->Capacity < 1) {
            pcVar6 = "";
          }
          else {
            pcVar6 = this->Data;
          }
          if (pSVar4->Capacity < 1) {
            pcVar8 = "";
          }
          else {
            pcVar8 = pSVar4->Data;
          }
          cVar7 = *pcVar6;
          if (cVar7 != '\0') {
            iVar3 = (int)pcVar8 - (int)pcVar6;
            do {
              if (cVar7 != pcVar6[iVar3]) goto LAB_008922dd;
              cVar7 = pcVar6[1];
              pcVar6 = pcVar6 + 1;
            } while (cVar7 != '\0');
          }
          dVar10 = *(double *)&this[1].Capacity - *param_5;
          dVar9 = 0.0;
          if (0.0 <= dVar10) {
            dVar9 = dVar10;
          }
          *(double *)&this[1].Capacity = dVar9;
        }
        else {
LAB_008922dd:
          uVar1 = *param_4;
          this[1].Capacity = (int)uVar1;
          this[1].Length = (int)((ulonglong)uVar1 >> 0x20);
          util__Str_char___operator__o8(this,pSVar4);
        }
      }
      else {
        util__Str_char___Str_char(&local_24,pSVar4);
        local_18 = *param_4;
        util__Str_char___Str_char(&local_3c,&local_24);
        local_2c = local_18;
        if (local_24.Data != (char *)0x0) {
          operator_delete__(local_24.Data);
          local_24.Data = (char *)0x0;
        }
        iVar3 = *(int *)(param_3 + 0x1d0);
        local_10 = iVar3 + 1;
        util__Darray_struct_util__tuple2_class_util__Str_char__double_____SetSize((Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G *)(param_3 + 0x1c8),
                   &local_10);
        bVar2 = util__Darray_struct_PowerUsage___CheckSize((Darray_L_struct_PowerUsage_G_ *)(param_3 + 0x1c8),iVar3);
        if (bVar2) {
          iVar3 = *(int *)(param_3 + 0x1cc) + *(int *)(param_3 + 0x1d0) * 0x18;
          util__Str_char___operator__o8((Str_L_char_G_ *)(iVar3 + -0x18),&local_3c);
          *(undefined8 *)(iVar3 + -8) = local_18;
        }
        if (local_3c.Data != (char *)0x0) {
          operator_delete__(local_3c.Data);
        }
        *param_2 = *param_2 + 1;
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00008a17a0 008a17a0_FUN_008a17a0 ====
// decompiled by BatchDecomp @ 008a17a0 name=FUN_008a17a0 conv=unknown body=542

void FUN_008a17a0(Darray_L_util__Reflectable_P_G_ *param_1,int *param_2,int *param_3)

{
  undefined4 stack0xfffffffc;
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  void *pvVar6;
  undefined4 *puVar7;
  Vec2_L_double_G_ *pVVar8;
  int iVar9;
  int *piVar10;
  Vec2_L_double_G local_34;
  int *local_24;
  undefined8 local_20;
  int local_18;
  int local_14;
  char local_10;
  uint local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_24 = param_2;
  uVar5 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  *(undefined ***)param_1 = ((void *)(0x00919aa0u));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar5;
  if (((int)uVar5 < 0) || (0x3fffffff < (int)uVar5)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar5) {
    local_c = -(uint)((int)((ulonglong)uVar5 * 4 >> 0x20) != 0) | (uint)((ulonglong)uVar5 * 4);
    pvVar6 = operator_new__(local_c);
    if (pvVar6 == (void *)0x0) {
      pvVar6 = (void *)0x0;
    }
    else {
      memset(pvVar6,0,local_c);
    }
    iVar9 = 0;
    *(void **)(param_1 + 4) = pvVar6;
    if (0 < *(int *)(param_1 + 0xc)) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 4) + iVar9 * 4) = 0;
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(param_1 + 0xc));
    }
  }
  local_c = 0;
  iVar9 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  if ((int)local_c < iVar9) {
    do {
      puVar7 = (undefined4 *)(**(code **)*param_2)(&local_c);
      if (((ReferenceController *)puVar7[1] != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar7[1]),
         !bVar3)) {
        *puVar7 = 0;
      }
      (**(code **)(*(int *)*puVar7 + 0x10))(&local_18);
      if (((ReferenceController *)puVar7[1] != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar7[1]),
         !bVar3)) {
        *puVar7 = 0;
      }
      cVar4 = (**(code **)(*(int *)*puVar7 + 8))();
      if ((cVar4 == '\0') || (local_10 == '\0')) {
        iVar9 = 0;
      }
      else {
        if (((ReferenceController *)puVar7[1] != (ReferenceController *)0x0) &&
           (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar7[1]),
           !bVar3)) {
          *puVar7 = 0;
        }
        pVVar8 = UIWidget__GetFillProportion((UIWidget *)*puVar7,&local_34);
        if ((*param_3 != 0) && (*param_3 == 1)) {
          pVVar8 = (Vec2_L_double_G_ *)&pVVar8->Y;
        }
        local_20 = pVVar8->X;
        if (((ReferenceController *)puVar7[1] != (ReferenceController *)0x0) &&
           (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar7[1]),
           !bVar3)) {
          *puVar7 = 0;
        }
        piVar1 = (int *)*puVar7;
        if (local_10 == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        iVar9 = *param_3;
        if ((iVar9 == 0) || (piVar10 = &local_14, iVar9 != 1)) {
          piVar10 = &local_18;
        }
        iVar9 = (**(code **)(*(int *)(uintptr_t)piVar1 + 0x2c))(iVar9);
        iVar9 = *piVar10 + iVar9 * (uint)(local_20 <= 0.0);
      }
      iVar2 = *(int *)(param_1 + 8);
      local_20 = (double)CONCAT44(iVar2 + 1,(undefined4)local_20);
      util__Darray_class_util__Reflectable____SetSize(param_1,(int *)((int)&local_20 + 4));
      bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)param_1,iVar2);
      param_2 = local_24;
      if (bVar3) {
        *(int *)(*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 4) = iVar9;
      }
      local_c = local_c + 1;
      iVar9 = (**(code **)(*(int *)(uintptr_t)local_24 + 0xc))();
    } while ((int)local_c < iVar9);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00008ae250 008ae250_Interface__HandleKeyboardInput ====
// decompiled by BatchDecomp @ 008ae250 name=HandleKeyboardInput conv=__thiscall body=551

/* public: bool __thiscall Interface__HandleKeyboardInput(int,enum KeyInput__Type,struct
   InputModifiers const &) */

bool __thiscall Interface__HandleKeyboardInput(Interface *this,int p1,int p2,InputModifiers *p3)

{
  undefined4 stack0xfffffffc;
  ReferenceController *pRVar1;
  Vec2_L_double_G VVar2;
  InputModifiers *pIVar3;
  bool bVar4;
  undefined1 uVar5;
  bool *pbVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 unaff_DI;
  Interface *pIVar9;
  Interface *pIStack_2c;
  int *piStack_28;
  undefined4 *puStack_24;
  Darray_L_util__WeakPtr_L_UIWidget_G___G local_1c [19];
  char local_9;
  uint local_8;
  
  pIVar3 = p3;
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_9 = '\0';
  (this->ModifiersHeldDown).Shift = p3->Shift;
  if ((((this->KeyboardFocus).Pointer != (undefined1 *)0x0) &&
      (pRVar1 = (ReferenceController *)(this->KeyboardFocus).Controller,
      pRVar1 != (ReferenceController *)0x0)) &&
     (bVar4 = util__ReferenceController__IsDataStillValid(pRVar1), bVar4)) {
    pRVar1 = (ReferenceController *)(this->KeyboardFocus).Controller;
    if ((pRVar1 != (ReferenceController *)0x0) &&
       (bVar4 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar4)) {
      (this->KeyboardFocus).Pointer = (undefined1 *)0x0;
    }
    uVar5 = (**(code **)(*(int *)(this->KeyboardFocus).Pointer + 0xa0))(p1,p2,pIVar3);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return (bool)uVar5;
  }
  if (((p1 < 1) && (0x15a < p1)) || ((p1 < 0x15c && (-1 < p1)))) {
    if (p2 == 0) {
      pbVar6 = util__Sarray_bool_348___operator((Sarray_L_bool_C348_G_ *)&this->KeysHeldDown,&p1);
      *pbVar6 = true;
    }
    else if (p2 == 2) {
      pbVar6 = util__Sarray_bool_348___operator((Sarray_L_bool_C348_G_ *)&this->KeysHeldDown,&p1);
      *pbVar6 = false;
    }
  }
util__HandleKeyboardInput((Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&this->UIWidgets);
util__HandleKeyboardInput((Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&this->RootWidgets);
  if ((((this->SelectFocus).Pointer != (undefined1 *)0x0) &&
      (pRVar1 = (ReferenceController *)(this->SelectFocus).Controller,
      pRVar1 != (ReferenceController *)0x0)) &&
     (bVar4 = util__ReferenceController__IsDataStillValid(pRVar1), bVar4)) {
    pRVar1 = (ReferenceController *)(this->SelectFocus).Controller;
    if ((pRVar1 != (ReferenceController *)0x0) &&
       (bVar4 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar4)) {
      (this->SelectFocus).Pointer = (undefined1 *)0x0;
    }
    local_9 = (**(code **)(*(int *)(this->SelectFocus).Pointer + 0xa0))(p1,p2,pIVar3);
  }
  if ((p1 == 0x100) && (p2 == 0)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((local_9 != '\0') || (!bVar4)) goto LAB_008ae409;
  if (((this->MouseCapture).Pointer == (undefined1 *)0x0) ||
     ((pRVar1 = (ReferenceController *)(this->MouseCapture).Controller,
      pRVar1 == (ReferenceController *)0x0 ||
      (bVar4 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar4)))) {
    if ((local_9 != '\0') || ((this->PopupWidgets).Size < 1)) goto LAB_008ae409;
    iVar7 = (this->PopupWidgets).Size;
    if (iVar7 < 1) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\stack.inl",0xa2,
                      "Size > 0",(char *)0x0);
      DebugBreak();
      iVar7 = (this->PopupWidgets).Size;
    }
    if (*(int *)((this->PopupWidgets).Data + iVar7 * 0xc + -4) == 1) goto LAB_008ae409;
    KillPopup(this);
  }
  else {
    ((slice_view *)&VVar2.Y)->_4_4_ = 1;
    memcpy((void *)((slice_view *)&VVar2)->raw + 0, (const void *)((int)&(this->SavedMouseLocation).X + 4), 12);
    TriggerMouseUp(this,(InputModifiers *)pIVar3,VVar2,(bool)unaff_DI);
  }
  local_9 = '\x01';
LAB_008ae409:
  pIVar9 = this;
  uVar8 = GetAllVisibleWidgets(this);
  FUN_008abc80(local_1c,uVar8,pIVar9);
  util__Darray_class_util__WeakPtr_struct_UIWidget______Darray_class_util__WeakPtr_struct_UIWidget((Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&pIStack_2c);
  piStack_28 = &p1;
  puStack_24 = &p2;
  pIStack_2c = this;
  FUN_008aa6b0(local_1c,&local_9,this,piStack_28,puStack_24,pIVar3);
  util__Darray_class_util__WeakPtr_struct_UIWidget______Darray_class_util__WeakPtr_struct_UIWidget(local_1c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)local_9;
}


//==== 00008d7b30 008d7b30_FUN_008d7b30 ====
// decompiled by BatchDecomp @ 008d7b30 name=FUN_008d7b30 conv=unknown body=394

void FUN_008d7b30(int *param_1,int *param_2,int *param_3,char *param_4)

{
  undefined4 stack0xfffffffc;
  BalloonPopup *this;
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  double *pdVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar2 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
  if (local_c < iVar2) {
    do {
      puVar3 = (undefined4 *)(**(code **)*param_1)(&local_c);
      this = (BalloonPopup *)*puVar3;
      BalloonPopup_GetScreenPosition_Memoize(this);
      pdVar4 = util__Maybe_double___GetData((Maybe_L_double_G_ *)&this->GetScreenPosition_MemoizedValue)
      ;
      iVar2 = *(int *)((int)pdVar4 + 4);
      iVar10 = *(int *)pdVar4;
      UIWidget_GetTrueSize((UIWidget *)*puVar3);
      iVar5 = local_24 + iVar10;
      iVar6 = local_20 + iVar2;
      iVar7 = iVar10;
      if (iVar5 <= iVar10) {
        iVar7 = iVar5;
      }
      iVar8 = iVar2;
      if (iVar6 <= iVar2) {
        iVar8 = iVar6;
      }
      if (iVar10 <= iVar5) {
        iVar10 = iVar5;
      }
      iVar5 = iVar2;
      if (iVar2 <= iVar6) {
        iVar5 = iVar6;
      }
      local_14 = *param_2;
      local_10 = param_2[1];
      iVar11 = *param_2 + *param_3;
      iVar6 = param_3[1];
      iVar12 = param_2[1] + iVar6;
      local_1c = local_14;
      if (iVar11 <= local_14) {
        local_1c = iVar11;
      }
      local_18 = local_10;
      if (iVar12 <= local_10) {
        local_18 = iVar12;
      }
      if (local_14 <= iVar11) {
        local_14 = iVar11;
      }
      bVar1 = true;
      if (local_10 <= iVar12) {
        local_10 = iVar12;
      }
      iVar11 = 0;
      do {
        if (bVar1) {
          if ((iVar11 == 0) || (piVar9 = &local_18, iVar11 != 1)) {
            piVar9 = &local_1c;
          }
          if ((iVar11 == 0) || (iVar12 = iVar5, iVar11 != 1)) {
            iVar12 = iVar10;
          }
          if (iVar12 < *piVar9) goto LAB_008d7c65;
          if ((iVar11 == 0) || (piVar9 = &local_10, iVar11 != 1)) {
            piVar9 = &local_14;
          }
          if ((iVar11 == 0) || (iVar12 = iVar8, iVar11 != 1)) {
            iVar12 = iVar7;
          }
          if (*piVar9 < iVar12) goto LAB_008d7c65;
          bVar1 = true;
        }
        else {
LAB_008d7c65:
          bVar1 = false;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < 2);
      if (bVar1) {
        if (*param_4 == '\0') {
          param_2[1] = iVar6 + local_20 + iVar2;
        }
        else {
          param_2[1] = iVar2 - iVar6;
        }
      }
      local_c = local_c + 1;
      iVar2 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
    } while (local_c < iVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

