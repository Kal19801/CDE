// pilot_sweep_sweep15.c - assembled by scripts/sweep_assemble.py (r19)
// reuses fam8_assemble fix passes (zip oracle/in-batch protos/vft channel/data closure)
/* ---- r20 incomplete-type forward decls (pointer-position only) ---- */
typedef struct Delegate_L_struct_ActorDropdownAction_G Delegate_L_struct_ActorDropdownAction_G;
typedef struct Delegate_L_struct_ActorDropdownAction_G_ Delegate_L_struct_ActorDropdownAction_G_;
typedef struct util__Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G util__Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G;
typedef struct util__Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G util__Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G;
typedef struct util__Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G______G util__Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G______G;
typedef struct util__Maybe util__Maybe;
typedef struct util__Maybe_L_class_util__Str_L_char_G___G util__Maybe_L_class_util__Str_L_char_G___G;
typedef struct util__PhysicalState_L_struct_util__Vec3_L_double_G___G util__PhysicalState_L_struct_util__Vec3_L_double_G___G;
#include "port_prelude.h"
#include "cde_win32_compat.h"
#include "cde_types_r20.h"
typedef union {
  struct {
    undefined8 _0_8_;
  };
  struct {
    undefined4 _0_4_;
    undefined4 _4_4_;
    undefined4 _8_4_;
    undefined4 _12_4_;
  };
  undefined1 raw[32];
} slice_view;
/* ---- r23 PDB complete types (value-position layouts, byte-exact) ---- */
typedef struct Attribute_L_util__Darray_L_util__WeakPtr_L_SpacecraftComponent_G___G___G Attribute_L_util__Darray_L_util__WeakPtr_L_SpacecraftComponent_G___G___G;
struct Attribute_L_util__Darray_L_util__WeakPtr_L_SpacecraftComponent_G___G___G {
  util__Delegate_L_util__Darray_L_util__WeakPtr_L_SpacecraftComponent_G___G___G_ Getter;
  util__Darray_L_util__WeakPtr_L_SpacecraftComponent_G___G_ Value;
};
/* ---- r21 hdr-conflict renames (decl stays OLD for game TUs; pilot impl+calls = NEW; linker aliases OLD -> NEW) ---- */
#undef FUN_00526b80
#define FUN_00526b80 FUN_00526b80__r20
#undef FleetCustomizationReadout__GetCostBarInfo
#define FleetCustomizationReadout__GetCostBarInfo FleetCustomizationReadout__GetCostBarInfo__r20
#undef FleetCustomizationReadout__GetCostHeader
#define FleetCustomizationReadout__GetCostHeader FleetCustomizationReadout__GetCostHeader__r20
#undef FleetCustomizationReadout__GetMassBarInfo
#define FleetCustomizationReadout__GetMassBarInfo FleetCustomizationReadout__GetMassBarInfo__r20
#undef FleetCustomizationReadout__GetMassHeader
#define FleetCustomizationReadout__GetMassHeader FleetCustomizationReadout__GetMassHeader__r20
#undef RefuelerCompartment__GetReactionMassLeft_kg
#define RefuelerCompartment__GetReactionMassLeft_kg RefuelerCompartment__GetReactionMassLeft_kg__r20
/* ---- externs: stub-oracle names (K&R; ret types by call site) ---- */
extern int NodeMouseOver__dtor(); /* K&R stub; ret by call site */
extern int util_Delegate_struct_ActorDropdownAction_operator(); /* K&R stub; ret by call site */
extern int util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent(); /* K&R stub; ret by call site */
/* ---- data refs: xmm consts / UNK data (cde_data_map.h __real_ idiom) ---- */
#define s_Dash (*(void **)(0x00923adcu))

//==== 00004e3a50 004e3a50_DeltaVWidget__GetShipsInGroup ====

// decompiled by BatchDecomp @ 004e3a50 name=GetShipsInGroup conv=__thiscall body=183

/* private: class util__Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G __thiscall
   DeltaVWidget__GetShipsInGroup(void)const  */

undefined4 __thiscall DeltaVWidget__GetShipsInGroup(DeltaVWidget *this)

{
  int iVar1;
  undefined1 **ppuVar2;
  bool bVar3;
  bool bVar4;
  undefined1 *p1;
  util__Darray_L_util__WeakPtr_L_SpacecraftComponent_G___G_ *p1_00;
  undefined4 in_stack_00000004;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_58[16];
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_48[16];
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_38[16];
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_28[16];
  util__Darray_L_util__WeakPtr_L_SpacecraftComponent_G___G_ local_18;
  uint local_8;
  
  local_8 = 0;
  iVar1 = (this->ShipGroup).Getter.Callee;
  if ((iVar1 == 0) ||
     (ppuVar2 = (this->ShipGroup).Getter.CallbackFunction, ppuVar2 == (undefined1 **)0x0)) {
    p1_00 = &(this->ShipGroup).Value;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent(local_58,(undefined1 *)p1_00);
    bVar4 = false;
    bVar3 = true;
  }
  else {
    p1 = (undefined1 *)(*(code *)ppuVar2)(local_48,iVar1);
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent(local_38,p1);
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_18,p1);
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_38);
    bVar4 = true;
    bVar3 = false;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_48);
    p1_00 = &local_18;
  }
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent(local_28,(undefined1 *)p1_00);
  if (bVar3) {
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_58);
  }
  if (bVar4) {
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_18);
  }
  local_8 = local_8 & 0xffffff00;
  FUN_004d6990(in_stack_00000004,local_28,local_8);
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_28);
  return in_stack_00000004;
}


//==== 00005269a0 005269a0_FUN_005269a0 ====
void FUN_005269a0(Darray_L_struct_util__Line2_L_double_G___G_ *param_1,int *param_2,double *param_3);

// decompiled by BatchDecomp @ 005269a0 name=FUN_005269a0 conv=unknown body=471

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005269a0(Darray_L_struct_util__Line2_L_double_G___G_ *param_1,int *param_2,double *param_3)

{
  undefined4 stack0xfffffffc;
  int iVar1;
  double dVar2;
  bool bVar3;
  uint uVar4;
  void *pvVar5;
  undefined4 *puVar6;
  util__Vec3_L_double_G_ *puVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  util__Vec3_L_double_G_ local_60;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28[16];
  undefined8 local_18;
  double *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar4 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  *(undefined ***)param_1 = ((void *)(0x009208a4u));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar4;
  if (((int)uVar4 < 0) || (0x3fffffff < (int)uVar4)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar4) {
    pvVar5 = operator_new__(-(uint)((int)((ulonglong)uVar4 * 0x20 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar4 * 0x20));
    if (pvVar5 == (void *)0x0) {
      pvVar5 = (void *)0x0;
    }
    else if (uVar4 != 0) {
      puVar6 = (undefined4 *)((int)pvVar5 + 0x10);
      do {
        puVar6[-4] = 0;
        puVar6[-3] = 0;
        puVar6[-2] = 0;
        puVar6[-1] = 0;
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        uVar4 = uVar4 - 1;
        puVar6 = puVar6 + 8;
      } while (uVar4 != 0);
    }
    iVar9 = 0;
    *(void **)(param_1 + 4) = pvVar5;
    if (0 < *(int *)(param_1 + 0xc)) {
      iVar8 = 0;
      do {
        iVar1 = *(int *)(param_1 + 4);
        iVar8 = iVar8 + 0x20;
        iVar9 = iVar9 + 1;
        puVar6 = (undefined4 *)(iVar1 + -0x20 + iVar8);
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6 = (undefined4 *)(iVar1 + -0x10 + iVar8);
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
      } while (iVar9 < *(int *)(param_1 + 0xc));
    }
  }
  local_c = 0;
  iVar9 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  if (local_c < iVar9) {
    local_10 = param_3;
    do {
      puVar6 = (undefined4 *)(**(code **)*param_2)(&local_c);
      fVar10 = (float10)(**(code **)(*(int *)*puVar6 + 0x10))();
      local_18 = (double)fVar10;
      puVar7 = ModuleCompartment__GetCenter_km((ModuleCompartment *)*puVar6,&local_60,0,0);
      uStack_30 = local_18;
      iVar9 = *(int *)(param_1 + 8);
      dVar2 = puVar7->Y * /*408f400000000000*/1000.0 - local_10[1];
      local_38 = puVar7->Z * /*408f400000000000*/1000.0 - local_10[2];
      local_18 = (double)CONCAT44(iVar9 + 1,(undefined4)local_18);
      ((slice_view *)&local_28)->_8_4_ = *(undefined4 *)&dVar2;
      ((slice_view *)&local_28)->_0_8_ = puVar7->X * /*408f400000000000*/1000.0 - *local_10;
      ((slice_view *)&local_28)->_12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      util__Darray_struct_util__Line2_double_____SetSize(param_1,(int *)((int)&local_18 + 4));
      bVar3 = util__Darray_struct_util__Plane_double_____CheckSize((Darray_L_struct_util__Plane_L_double_G___G_ *)param_1,iVar9);
      if (bVar3) {
        iVar9 = *(int *)(param_1 + 8);
        iVar8 = *(int *)(param_1 + 4);
        puVar6 = (undefined4 *)(iVar9 * 0x20 + -0x20 + iVar8);
        *puVar6 = ((slice_view *)&local_28)->_0_4_;
        puVar6[1] = ((slice_view *)&local_28)->_4_4_;
        puVar6[2] = ((slice_view *)&local_28)->_8_4_;
        puVar6[3] = ((slice_view *)&local_28)->_12_4_;
        puVar6 = (undefined4 *)(iVar9 * 0x20 + -0x10 + iVar8);
        *puVar6 = (undefined4)local_38;
        puVar6[1] = ((slice_view *)&local_38)->_4_4_;
        puVar6[2] = (undefined4)uStack_30;
        puVar6[3] = ((slice_view *)&uStack_30)->_4_4_;
      }
      local_c = local_c + 1;
      iVar9 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
    } while (local_c < iVar9);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00005e9b90 005e9b90_RefuelerModule__GetOneLineStatus ====

// decompiled by BatchDecomp @ 005e9b90 name=GetOneLineStatus conv=__thiscall body=1280

/* public: virtual class util__Maybe_L_class_util__Str_L_char_G___G __thiscall
   RefuelerModule__GetOneLineStatus(class util__Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G______G const &)const  */

undefined1 * __thiscall RefuelerModule__GetOneLineStatus(RefuelerModule *this,undefined1 *p1)

{
  undefined4 stack0xffffff1c;
  undefined4 stack0xfffffffc;
  Str_L_char_G_ SVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  Str_L_char_G_ *pSVar8;
  util__Str_L_char_G_ *puVar9;
  util__Str_L_char_G_ *p1_00;
  int unaff_EDI;
  double dVar10;
  int *in_stack_00000008;
  undefined4 **ppuVar11;
  char *pcVar12;
  void *local_cc[3];
  void *local_c0;
  Str_L_char_G_ local_b4;
  Str_L_char_G_ local_a8;
  Str_L_char_G_ local_9c;
  Str_L_char_G_ local_90;
  Str_L_char_G_ local_84;
  void *local_78[3];
  void *local_6c;
  util__Str_L_char_G_ local_60;
  Str_L_char_G_ local_54;
  util__Str_L_char_G_ local_48;
  Str_L_char_G_ local_3c;
  Str_L_char_G_ local_30;
  undefined4 *local_24[4];
  Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar5 = (**(code **)(*(int *)(uintptr_t)in_stack_00000008 + 0xc))();
  if (iVar5 == 0) {
    *(undefined4 *)p1 = 0;
    *(undefined4 *)(p1 + 4) = 0;
    *(undefined4 *)(p1 + 8) = 0;
    p1[0xc] = 0;
    goto LAB_005ea07b;
  }
  local_14.Length = local_14.Length & 0xffffff00;
  ppuVar11 = local_24;
  FUN_00526b80();
  local_14.Length = 0;
  iVar5 = (*(code *)local_24[0][3])();
  if (local_14.Length < iVar5) {
    do {
      piVar6 = (int *)(*(code *)*local_24[0])();
      if (((ReferenceController *)piVar6[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar6[1]),
         !bVar2)) {
        *piVar6 = 0;
      }
      if (*(char *)(*(int *)(uintptr_t)piVar6 + 0x109) == '\0') {
        bVar2 = false;
        goto LAB_005e9c36;
      }
      local_14.Length = local_14.Length + 1;
      iVar5 = (*(code *)local_24[0][3])();
    } while (local_14.Length < iVar5);
  }
  bVar2 = true;
LAB_005e9c36:
  local_14.Length = 0;
  iVar5 = (*(code *)local_24[0][3])();
  if (local_14.Length < iVar5) {
    do {
      piVar6 = (int *)(*(code *)*local_24[0])();
      if (((ReferenceController *)piVar6[1] != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar6[1]),
         !bVar3)) {
        *piVar6 = 0;
      }
      if (*(char *)(*(int *)(uintptr_t)piVar6 + 0x109) != '\0') {
        bVar3 = true;
        goto LAB_005e9c96;
      }
      local_14.Length = local_14.Length + 1;
      iVar5 = (*(code *)local_24[0][3])();
    } while (local_14.Length < iVar5);
  }
  bVar3 = false;
LAB_005e9c96:
  local_14.Length = 0;
  puVar7 = (undefined4 *)(*(code *)*local_24[0])();
  if (((ReferenceController *)puVar7[1] != (ReferenceController *)0x0) &&
     (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar7[1]), !bVar4)
     ) {
    *puVar7 = 0;
  }
  dVar10 = RefuelerCompartment__GetReactionMassLeft_kg((RefuelerCompartment *)*puVar7);
  local_30.Length = 0;
  pcVar12 = "ReactionMass_kg";
  local_30.Data = (char *)0x0;
  local_30.Capacity = 0;
  local_14.Capacity = *(undefined4 *)&dVar10;
  local_14.Length = (int)((ulonglong)dVar10 >> 0x20);
  iVar5 = 0x5e9ce7;
  util__Str_char___Str_char__o5(&local_54,"ReactionMass_kg");
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff1c,&local_54);
  SVar1.Capacity = (int)pcVar12;
  SVar1.Data = (char *)iVar5;
  SVar1.Length = unaff_EDI;
  pSVar8 = Print(&local_b4,(double)CONCAT44(ppuVar11,local_14.Length),SVar1);
  if (pSVar8->Capacity < 1) {
    pcVar12 = "";
  }
  else {
    pcVar12 = pSVar8->Data;
  }
  util__Str_char___Str_char__o5(&local_a8,pcVar12);
  util__Str_char___Str_char__o5(&local_90,"Colon");
  util__Str_char___Str_char__o5(&local_84,"ReactionMass");
  local_48.Data = 0;
  pSVar8 = &local_90;
  local_48.Capacity = 0;
  local_48.Length = 0;
  local_60.Data = 0;
  local_60.Capacity = 0;
  local_60.Length = 0;
  util__LocStr__LocStr((LocStr *)local_78,(util__Str_L_char_G_ *)pSVar8,&local_48);
  puVar9 = util__LocStr__operator__o3((LocStr *)pSVar8);
  pSVar8 = &local_84;
  util__LocStr__LocStr((LocStr *)local_cc,(util__Str_L_char_G_ *)pSVar8,&local_60);
  p1_00 = util__LocStr__operator__o3((LocStr *)pSVar8);
  local_14.Length = 0;
  local_14.Data = (char *)0x0;
  local_14.Capacity = 0;
  util__Str_char___Str_char(&local_14,p1_00);
  util__Str_char___operator__o10(&local_14,puVar9);
  util__Str_char___Str_char(&local_9c,(util__Str_L_char_G_ *)&local_14);
  if (local_14.Data != (char *)0x0) {
    operator_delete__(local_14.Data);
    local_14.Data = (char *)0x0;
  }
  local_3c.Length = 0;
  local_3c.Data = (char *)0x0;
  local_3c.Capacity = 0;
  util__Str_char___Str_char(&local_3c,(util__Str_L_char_G_ *)&local_9c);
  util__Str_char___operator__o10(&local_3c,(util__Str_L_char_G_ *)&local_a8);
  util__Str_char___Str_char(&local_30,(util__Str_L_char_G_ *)&local_3c);
  if (local_3c.Data != (char *)0x0) {
    operator_delete__(local_3c.Data);
  }
  if (local_9c.Data != (char *)0x0) {
    operator_delete__(local_9c.Data);
  }
  if (local_c0 != (void *)0x0) {
    operator_delete__(local_c0);
    local_c0 = (void *)0x0;
  }
  if (local_cc[0] != (void *)0x0) {
    operator_delete__(local_cc[0]);
    local_cc[0] = (void *)0x0;
  }
  if ((void *)local_60.Data != (void *)0x0) {
    operator_delete__((void *)local_60.Data);
    local_60.Data = 0;
  }
  if (local_6c != (void *)0x0) {
    operator_delete__(local_6c);
    local_6c = (void *)0x0;
  }
  if (local_78[0] != (void *)0x0) {
    operator_delete__(local_78[0]);
    local_78[0] = (void *)0x0;
  }
  if ((void *)local_48.Data != (void *)0x0) {
    operator_delete__((void *)local_48.Data);
    local_48.Data = 0;
  }
  if (local_84.Data != (char *)0x0) {
    operator_delete__(local_84.Data);
    local_84.Data = (char *)0x0;
  }
  if (local_90.Data != (char *)0x0) {
    operator_delete__(local_90.Data);
    local_90.Data = (char *)0x0;
  }
  if (local_a8.Data != (char *)0x0) {
    operator_delete__(local_a8.Data);
  }
  if (local_b4.Data != (char *)0x0) {
    operator_delete__(local_b4.Data);
    local_b4.Data = (char *)0x0;
  }
  if (local_54.Data != (char *)0x0) {
    operator_delete__(local_54.Data);
  }
  if (bVar2) {
    util__Str_char___Str_char__o5(&local_54,"Refueler Status AllRefueling");
    local_48.Data = 0;
    pSVar8 = &local_54;
    local_48.Capacity = 0;
    local_48.Length = 0;
    util__LocStr__LocStr((LocStr *)local_78,(util__Str_L_char_G_ *)pSVar8,&local_48);
    puVar9 = util__LocStr__operator__o3((LocStr *)pSVar8);
    util__Str_char___operator__o10(&local_30,puVar9);
    if (local_6c != (void *)0x0) {
      operator_delete__(local_6c);
      local_6c = (void *)0x0;
    }
    if (local_78[0] != (void *)0x0) {
      operator_delete__(local_78[0]);
      local_78[0] = (void *)0x0;
    }
LAB_005ea026:
    if ((void *)local_48.Data != (void *)0x0) {
      operator_delete__((void *)local_48.Data);
      local_48.Data = 0;
    }
    if (local_54.Data != (char *)0x0) {
      operator_delete__(local_54.Data);
    }
  }
  else if (bVar3) {
    util__Str_char___Str_char__o5(&local_54,"Refueler Status SomeRefueling");
    local_48.Data = 0;
    pSVar8 = &local_54;
    local_48.Capacity = 0;
    local_48.Length = 0;
    util__LocStr__LocStr((LocStr *)local_78,(util__Str_L_char_G_ *)pSVar8,&local_48);
    puVar9 = util__LocStr__operator__o3((LocStr *)pSVar8);
    util__Str_char___operator__o10(&local_30,puVar9);
    util__LocStr___LocStr((LocStr *)local_78);
    goto LAB_005ea026;
  }
  util__Str_char___Str_char((Str_L_char_G_ *)p1,(util__Str_L_char_G_ *)&local_30);
  p1[0xc] = 1;
  if (local_30.Data != (char *)0x0) {
    operator_delete__(local_30.Data);
    ((slice_view *)&local_30)->_0_8_ = ((slice_view *)&local_30)->_0_8_ & 0xffffffff00000000;
  }
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_24);
LAB_005ea07b:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return p1;
}


//==== 00005fb0b0 005fb0b0_FlareModule__GetOneLineStatus ====

// decompiled by BatchDecomp @ 005fb0b0 name=GetOneLineStatus conv=__thiscall body=830

/* public: virtual class util__Maybe_L_class_util__Str_L_char_G___G __thiscall
   FlareModule__GetOneLineStatus(class util__Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G
   const &)const  */

undefined1 * __thiscall FlareModule__GetOneLineStatus(FlareModule *this,undefined1 *p1)

{
  undefined4 stack0xffffff30;
  undefined4 stack0xfffffffc;
  Str_L_char_G_ SVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  Str_L_char_G_ *p1_00;
  util__Str_L_char_G_ *p1_01;
  Str_L_char_G_ *pSVar5;
  util__Str_L_char_G_ *puVar6;
  int unaff_EDI;
  int *in_stack_00000008;
  util__Str_L_char_G_ *__return_storage_ptr__;
  undefined4 **ppuVar7;
  char *pcVar8;
  void *local_bc[3];
  void *local_b0;
  void *local_a4[3];
  void *local_98;
  util__Str_L_char_G_ local_8c;
  util__Str_L_char_G_ local_80;
  Str_L_char_G_ local_74;
  Str_L_char_G_ local_68;
  Str_L_char_G_ local_5c;
  util__Str_L_char_G_ local_50;
  util__Str_L_char_G_ local_44;
  double local_38;
  int local_30;
  undefined1 local_2c[8];
  int iStack_24;
  int iStack_20;
  undefined4 *local_1c[4];
  uint local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar3 = (**(code **)(*(int *)(uintptr_t)in_stack_00000008 + 0xc))();
  if (iVar3 == 0) {
    *(undefined4 *)p1 = 0;
    *(undefined4 *)(p1 + 4) = 0;
    *(undefined4 *)(p1 + 8) = 0;
    p1[0xc] = 0;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return p1;
  }
  local_c = local_c & 0xffffff00;
  ppuVar7 = local_1c;
  FUN_00526b80();
  ((slice_view *)&local_2c)->_0_4_ = (undefined1 *)0x0;
  ((slice_view *)&local_2c)->_4_4_ = (double *)0x0;
  iStack_24 = 0;
  iStack_20 = 0;
  iVar3 = (*(code *)local_1c[0][3])();
  util__Darray_double___Darray_double((Darray_L_double_G_ *)local_2c,iVar3);
  local_c = 0;
  iVar3 = (*(code *)local_1c[0][3])();
  if ((int)local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(*(code *)*local_1c[0])();
      if ((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]);
        if (!bVar2) {
          *puVar4 = 0;
        }
      }
      local_38 = FlareCompartment__GetLifeTimeRemaining_s((FlareCompartment *)*puVar4);
      iVar3 = iStack_24;
      local_30 = iStack_24 + 1;
      util__Darray_double___SetSize((Darray_L_double_G_ *)local_2c,&local_30);
      ppuVar7 = (undefined4 **)0x5fb183;
      bVar2 = util__Darray_double___CheckSize((Darray_L_double_G_ *)local_2c,iVar3);
      if (bVar2) {
        *(double *)(((slice_view *)&local_2c)->_4_4_ + (iStack_24 + -1) * 8) = local_38;
      }
      local_c = local_c + 1;
      iVar3 = (*(code *)local_1c[0][3])();
    } while ((int)local_c < iVar3);
  }
  local_38 = util__GetOneLineStatus((util__Darray_L_double_G_ *)local_2c);
  ((slice_view *)&local_2c)->_0_4_ = ((void *)(0x0091da54u));
  if ((double *)((slice_view *)&local_2c)->_4_4_ != (double *)0x0) {
    operator_delete__((void *)((slice_view *)&local_2c)->_4_4_);
  }
  util__Str_char___Str_char__o5(&local_74,"BurnTimeLeft_s");
  util__Str_char___Str_char__o5(&local_68,"Colon");
  pcVar8 = "BurnTimeLeft";
  iVar3 = 0x5fb1f6;
  util__Str_char___Str_char__o5(&local_5c,"BurnTimeLeft");
  local_50.Data = 0;
  local_50.Capacity = 0;
  local_50.Length = 0;
  local_44.Data = 0;
  local_44.Capacity = 0;
  local_44.Length = 0;
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff30,&local_74);
  SVar1.Capacity = (int)pcVar8;
  SVar1.Data = (char *)iVar3;
  SVar1.Length = unaff_EDI;
  p1_00 = Print((Str_L_char_G_ *)(local_2c + 4),
                (double)CONCAT44(ppuVar7,(int)((ulonglong)local_38 >> 0x20)),SVar1);
  puVar6 = &local_80;
  pSVar5 = &local_68;
  util__LocStr__LocStr((LocStr *)local_bc,(util__Str_L_char_G_ *)pSVar5,&local_50);
  p1_01 = util__LocStr__operator__o3((LocStr *)pSVar5);
  __return_storage_ptr__ = &local_8c;
  pSVar5 = &local_5c;
  util__LocStr__LocStr((LocStr *)local_a4,(util__Str_L_char_G_ *)pSVar5,&local_44);
  pSVar5 = (Str_L_char_G_ *)util__LocStr__operator__o3((LocStr *)pSVar5);
  pSVar5 = (Str_L_char_G_ *)util__Str_char___operator(pSVar5,__return_storage_ptr__,p1_01);
  puVar6 = util__Str_char___operator(pSVar5,puVar6,(util__Str_L_char_G_ *)p1_00);
  util__Str_char___Str_char((Str_L_char_G_ *)p1,puVar6);
  p1[0xc] = 1;
  if ((void *)local_80.Data != (void *)0x0) {
    operator_delete__((void *)local_80.Data);
    local_80.Data = 0;
  }
  if ((void *)local_8c.Data != (void *)0x0) {
    operator_delete__((void *)local_8c.Data);
    local_8c.Data = 0;
  }
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
    local_98 = (void *)0x0;
  }
  if (local_a4[0] != (void *)0x0) {
    operator_delete__(local_a4[0]);
    local_a4[0] = (void *)0x0;
  }
  if ((void *)local_44.Data != (void *)0x0) {
    operator_delete__((void *)local_44.Data);
    local_44.Data = 0;
  }
  if (local_b0 != (void *)0x0) {
    operator_delete__(local_b0);
    local_b0 = (void *)0x0;
  }
  if (local_bc[0] != (void *)0x0) {
    operator_delete__(local_bc[0]);
    local_bc[0] = (void *)0x0;
  }
  if ((void *)local_50.Data != (void *)0x0) {
    operator_delete__((void *)local_50.Data);
    local_50.Data = 0;
  }
  if ((double *)((slice_view *)&local_2c)->_4_4_ != (double *)0x0) {
    operator_delete__((void *)((slice_view *)&local_2c)->_4_4_);
    ((slice_view *)&local_2c)->_4_4_ = (double *)0x0;
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
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_1c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return p1;
}


//==== 0000609620 00609620_ProximityDetonator__CheckTimer ====
#undef OverrideTimer_s /* auto(v2): compat 僵尸宏撞成员名 */

// decompiled by BatchDecomp @ 00609620 name=CheckTimer conv=__thiscall body=279

/* public: class util__Maybe<struct util__PhysicalState_L_struct_util__Vec3_L_double_G___G > __thiscall
   ProximityDetonator__CheckTimer(class util__WeakPtr_L_Body_G_ const &,double) */

util__WeakPtr_L_Body_G_ * __thiscall
ProximityDetonator__CheckTimer(ProximityDetonator *this,util__WeakPtr_L_Body_G_ *p1,double p2)

{
  undefined4 stack0xfffffffc;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  bool bVar5;
  undefined4 *puVar6;
  int *in_stack_00000008;
  undefined1 *local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((0.0 < this->OverrideTimer_s) && (this->OverrideTimer_s <= p2)) {
    local_18 = (undefined1 *)0x0;
    uStack_14 = 0;
    iStack_10 = 0;
    uStack_c = 0;
    if ((ReferenceController *)in_stack_00000008[1] != (ReferenceController *)0x0) {
      bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)in_stack_00000008[1]);
      if (!bVar5) {
        *in_stack_00000008 = 0;
      }
    }
    if ((ReferenceController *)in_stack_00000008[1] != (ReferenceController *)0x0) {
      bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)in_stack_00000008[1]);
      if (!bVar5) {
        *in_stack_00000008 = 0;
      }
    }
    TacticalManager__GetSpacecraftComponentsNotOfAlliance(*(TacticalManager **)(*(int *)(uintptr_t)in_stack_00000008 + 0x1dc),(Faction *)&local_18);
    if (0 < iStack_10) {
      if ((ReferenceController *)in_stack_00000008[1] != (ReferenceController *)0x0) {
        bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)in_stack_00000008[1]);
        if (!bVar5) {
          *in_stack_00000008 = 0;
        }
      }
      puVar6 = (undefined4 *)Body__GetState((Body *)*in_stack_00000008);
      puVar1 = (undefined1 *)puVar6[1];
      puVar2 = (undefined1 *)puVar6[2];
      puVar3 = (undefined1 *)puVar6[3];
      p1->Pointer = (undefined1 *)*puVar6;
      p1->Controller = puVar1;
      p1[1].Pointer = puVar2;
      p1[1].Controller = puVar3;
      puVar1 = (undefined1 *)puVar6[5];
      puVar2 = (undefined1 *)puVar6[6];
      puVar3 = (undefined1 *)puVar6[7];
      p1[2].Pointer = (undefined1 *)puVar6[4];
      p1[2].Controller = puVar1;
      p1[3].Pointer = puVar2;
      p1[3].Controller = puVar3;
      puVar1 = (undefined1 *)puVar6[8];
      puVar2 = (undefined1 *)puVar6[9];
      puVar3 = (undefined1 *)puVar6[10];
      puVar4 = (undefined1 *)puVar6[0xb];
      *(undefined1 *)&p1[6].Pointer = 1;
      p1[4].Pointer = puVar1;
      p1[4].Controller = puVar2;
      p1[5].Pointer = puVar3;
      p1[5].Controller = puVar4;
      util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_18);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return p1;
    }
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_18);
  }
  p1->Pointer = (undefined1 *)0x0;
  p1->Controller = (undefined1 *)0x0;
  p1[1].Pointer = (undefined1 *)0x0;
  p1[1].Controller = (undefined1 *)0x0;
  p1[2].Pointer = (undefined1 *)0x0;
  p1[2].Controller = (undefined1 *)0x0;
  p1[3].Pointer = (undefined1 *)0x0;
  p1[3].Controller = (undefined1 *)0x0;
  p1[4].Pointer = (undefined1 *)0x0;
  p1[4].Controller = (undefined1 *)0x0;
  p1[5].Pointer = (undefined1 *)0x0;
  p1[5].Controller = (undefined1 *)0x0;
  *(undefined1 *)&p1[6].Pointer = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return p1;
}


//==== 00006c9fd0 006c9fd0_FleetCustomizationReadout__GetCostBarInfo ====
// decompiled by BatchDecomp @ 006c9fd0 name=GetCostBarInfo conv=__thiscall body=556

/* public: class Str_L_char_G_ __thiscall FleetCustomizationReadout__GetCostBarInfo(void)const  */

util__Str_L_char_G_ * __thiscall
FleetCustomizationReadout__GetCostBarInfo(FleetCustomizationReadout *this,util__Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xffffff40;
  undefined4 stack0xfffffffc;
  Str_L_char_G_ SVar1;
  Str_L_char_G_ SVar2;
  util__Str_L_char_G_ *p1;
  Str_L_char_G_ *pSVar3;
  int unaff_EDI;
  char *pcVar4;
  Str_L_char_G_ *pSVar5;
  int iVar6;
  undefined8 local_9c;
  undefined4 uStack_98;
  undefined8 local_94;
  undefined4 uStack_90;
  void *local_8c[3];
  void *local_80;
  Str_L_char_G_ local_74;
  Str_L_char_G_ local_68;
  Str_L_char_G_ local_5c;
  Str_L_char_G_ local_50;
  Str_L_char_G_ local_44;
  Str_L_char_G_ local_38;
  util__Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  GetMassAndCosts(this);
  util__Str_char___Str_char__o5(&local_74,"TotalCost_c");
  util__Str_char___Str_char__o5(&local_44,"Slash");
  util__Str_char___Str_char__o5(&local_38,"Cost_c");
  local_2c.Data = 0;
  pSVar3 = &local_44;
  local_2c.Capacity = 0;
  local_2c.Length = 0;
  pcVar4 = (char *)0x6ca043;
  pSVar5 = pSVar3;
  util__LocStr__LocStr((LocStr *)local_8c,(util__Str_L_char_G_ *)pSVar3,&local_2c);
  iVar6 = 0x6ca04a;
  p1 = util__LocStr__operator__o3((LocStr *)pSVar3);
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff40,&local_38);
  SVar1.Capacity = iVar6;
  SVar1.Data = (char *)pSVar5;
  SVar1.Length = unaff_EDI;
  pSVar3 = Print(&local_5c,(double)CONCAT44(pcVar4,uStack_98),SVar1);
  local_14.Length = 0;
  local_14.Data = (char *)0x0;
  local_14.Capacity = 0;
  util__Str_char___Str_char(&local_14,(util__Str_L_char_G_ *)pSVar3);
  util__Str_char___operator__o10(&local_14,p1);
  pSVar3 = &local_14;
  iVar6 = 0x6ca0a1;
  util__Str_char___Str_char(&local_50,(util__Str_L_char_G_ *)pSVar3);
  if ((Str_L_char_G_ *)local_14.Data != (Str_L_char_G_ *)0x0) {
    iVar6 = 0x6ca0ae;
    pSVar3 = (Str_L_char_G_ *)local_14.Data;
    operator_delete__(local_14.Data);
    ((slice_view *)&local_14)->_0_8_ = ((slice_view *)&local_14)->_0_8_ & 0xffffffff00000000;
  }
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff40,&local_74);
  SVar2.Capacity = (int)pSVar3;
  SVar2.Data = (char *)iVar6;
  SVar2.Length = unaff_EDI;
  pSVar3 = Print(&local_68,(double)CONCAT44(pcVar4,uStack_90),SVar2);
  local_20.Length = 0;
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  util__Str_char___Str_char(&local_20,(util__Str_L_char_G_ *)&local_50);
  util__Str_char___operator__o10(&local_20,(util__Str_L_char_G_ *)pSVar3);
  util__Str_char___Str_char((Str_L_char_G_ *)__return_storage_ptr__,(util__Str_L_char_G_ *)&local_20);
  if (local_20.Data != (char *)0x0) {
    operator_delete__(local_20.Data);
  }
  if (local_50.Data != (char *)0x0) {
    operator_delete__(local_50.Data);
  }
  if (local_5c.Data != (char *)0x0) {
    operator_delete__(local_5c.Data);
    local_5c.Data = (char *)0x0;
  }
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_80 = (void *)0x0;
  }
  if (local_8c[0] != (void *)0x0) {
    operator_delete__(local_8c[0]);
    local_8c[0] = (void *)0x0;
  }
  if ((void *)local_2c.Data != (void *)0x0) {
    operator_delete__((void *)local_2c.Data);
    local_2c.Data = 0;
  }
  if (local_68.Data != (char *)0x0) {
    operator_delete__(local_68.Data);
    local_68.Data = (char *)0x0;
  }
  if (local_38.Data != (char *)0x0) {
    operator_delete__(local_38.Data);
    local_38.Data = (char *)0x0;
  }
  if (local_44.Data != (char *)0x0) {
    operator_delete__(local_44.Data);
    local_44.Data = (char *)0x0;
  }
  if (local_74.Data != (char *)0x0) {
    operator_delete__(local_74.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 00006ca2b0 006ca2b0_FleetCustomizationReadout__GetCostHeader ====
// decompiled by BatchDecomp @ 006ca2b0 name=GetCostHeader conv=__thiscall body=811

/* public: class Str_L_char_G_ __thiscall FleetCustomizationReadout__GetCostHeader(void)const  */

util__Str_L_char_G_ * __thiscall
FleetCustomizationReadout__GetCostHeader(FleetCustomizationReadout *this,util__Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xffffff1c;
  undefined4 stack0xfffffffc;
  Str_L_char_G_ SVar1;
  bool bVar2;
  StartingFleet *pSVar3;
  util__Str_L_char_G_ *puVar4;
  util__Str_L_char_G_ *p1;
  Str_L_char_G_ *pSVar5;
  int unaff_EDI;
  char *pcVar6;
  int iVar7;
  undefined8 local_c0;
  undefined4 uStack_bc;
  void *local_b0[3];
  void *local_a4;
  void *local_98[3];
  void *local_8c;
  Str_L_char_G_ local_80;
  Str_L_char_G_ local_74;
  void *local_68[3];
  Str_L_char_G_ local_5c;
  Str_L_char_G_ local_50;
  util__Str_L_char_G_ local_44;
  util__Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pSVar3 = BriefingsHandler__GetCustomizableFleet((BriefingsHandler *)this->Briefings,
                      ((BriefingsHandler *)this->Briefings)->SelectedSubject != 8);
  bVar2 = StarterFleet__IsUnlimited((StarterFleet *)pSVar3->FleetType);
  if (bVar2) {
    GetMassAndCosts(this);
    util__Str_char___Str_char__o5(&local_5c,"Cost_c");
    util__Str_char___Str_char(&local_2c,&s_Dash);
    util__Str_char___Str_char__o5(&local_50,"UnlimitedCost");
    local_44.Data = 0;
    pSVar5 = &local_2c;
    local_44.Capacity = 0;
    local_44.Length = 0;
    local_38.Data = 0;
    local_38.Capacity = 0;
    local_38.Length = 0;
    util__LocStr__LocStr((LocStr *)local_b0,(util__Str_L_char_G_ *)pSVar5,&local_44);
    puVar4 = util__LocStr__operator__o3((LocStr *)pSVar5);
    pSVar5 = &local_50;
    pcVar6 = (char *)0x6ca40c;
    util__LocStr__LocStr((LocStr *)local_98,(util__Str_L_char_G_ *)pSVar5,&local_38);
    p1 = util__LocStr__operator__o3((LocStr *)pSVar5);
    local_14.Length = 0;
    local_14.Data = (char *)0x0;
    local_14.Capacity = 0;
    util__Str_char___Str_char__o5(&local_14,p1);
    util__Str_char___operator__o10(&local_14,puVar4);
    pSVar5 = &local_14;
    iVar7 = 0x6ca440;
    util__Str_char___Str_char__o5(&local_74,(util__Str_L_char_G_ *)pSVar5);
    if ((Str_L_char_G_ *)local_14.Data != (Str_L_char_G_ *)0x0) {
      iVar7 = 0x6ca44d;
      pSVar5 = (Str_L_char_G_ *)local_14.Data;
      operator_delete__(local_14.Data);
      ((slice_view *)&local_14)->_0_8_ = ((slice_view *)&local_14)->_0_8_ & 0xffffffff00000000;
    }
    GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff1c,&local_5c);
    SVar1.Capacity = (int)pSVar5;
    SVar1.Data = (char *)iVar7;
    SVar1.Length = unaff_EDI;
    pSVar5 = Print(&local_80,(double)CONCAT44(pcVar6,uStack_bc),SVar1);
    local_20.Length = 0;
    local_20.Data = (char *)0x0;
    local_20.Capacity = 0;
    util__Str_char___Str_char(&local_20,(util__Str_L_char_G_ *)&local_74);
    util__Str_char___operator__o10(&local_20,(util__Str_L_char_G_ *)pSVar5);
    util__Str_char___Str_char((Str_L_char_G_ *)__return_storage_ptr__,(util__Str_L_char_G_ *)&local_20);
    if (local_20.Data != (char *)0x0) {
      operator_delete__(local_20.Data);
    }
    if (local_74.Data != (char *)0x0) {
      operator_delete__(local_74.Data);
    }
    if (local_8c != (void *)0x0) {
      operator_delete__(local_8c);
      local_8c = (void *)0x0;
    }
    if (local_98[0] != (void *)0x0) {
      operator_delete__(local_98[0]);
      local_98[0] = (void *)0x0;
    }
    if ((void *)local_38.Data != (void *)0x0) {
      operator_delete__((void *)local_38.Data);
      local_38.Data = 0;
    }
    if (local_a4 != (void *)0x0) {
      operator_delete__(local_a4);
      local_a4 = (void *)0x0;
    }
    if (local_b0[0] != (void *)0x0) {
      operator_delete__(local_b0[0]);
      local_b0[0] = (void *)0x0;
    }
    if ((void *)local_44.Data != (void *)0x0) {
      operator_delete__((void *)local_44.Data);
      local_44.Data = 0;
    }
    if (local_80.Data != (char *)0x0) {
      operator_delete__(local_80.Data);
      local_80.Data = (char *)0x0;
    }
    if (local_50.Data != (char *)0x0) {
      operator_delete__(local_50.Data);
      local_50.Data = (char *)0x0;
    }
    pcVar6 = local_5c.Data;
    if (local_2c.Data != (char *)0x0) {
      operator_delete__(local_2c.Data);
      local_2c.Data = (char *)0x0;
      pcVar6 = local_5c.Data;
    }
  }
  else {
    util__Str_char___Str_char(&local_2c,"CostLimits");
    pSVar5 = &local_2c;
    local_14.Data = (char *)0x0;
    local_14.Capacity = 0;
    local_14.Length = 0;
    util__LocStr__LocStr((LocStr *)local_68,(util__Str_L_char_G_ *)pSVar5,(util__Str_L_char_G_ *)&local_14);
    puVar4 = util__LocStr__operator__o3((LocStr *)pSVar5);
    util__Str_char___Str_char((Str_L_char_G_ *)__return_storage_ptr__,puVar4);
    if (local_5c.Data != (char *)0x0) {
      operator_delete__(local_5c.Data);
      local_5c.Data = (char *)0x0;
    }
    if (local_68[0] != (void *)0x0) {
      operator_delete__(local_68[0]);
      local_68[0] = (void *)0x0;
    }
    pcVar6 = local_2c.Data;
    if (local_14.Data != (char *)0x0) {
      operator_delete__(local_14.Data);
      ((slice_view *)&local_14)->_0_8_ = ((slice_view *)&local_14)->_0_8_ & 0xffffffff00000000;
      pcVar6 = local_2c.Data;
    }
  }
  if (pcVar6 != (char *)0x0) {
    operator_delete__(pcVar6);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 00006cb990 006cb990_FleetCustomizationReadout__GetMassBarInfo ====
// decompiled by BatchDecomp @ 006cb990 name=GetMassBarInfo conv=__thiscall body=556

/* public: class Str_L_char_G_ __thiscall FleetCustomizationReadout__GetMassBarInfo(void)const  */

util__Str_L_char_G_ * __thiscall
FleetCustomizationReadout__GetMassBarInfo(FleetCustomizationReadout *this,util__Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xffffff40;
  undefined4 stack0xfffffffc;
  Str_L_char_G_ SVar1;
  Str_L_char_G_ SVar2;
  util__Str_L_char_G_ *p1;
  Str_L_char_G_ *pSVar3;
  int unaff_EDI;
  char *pcVar4;
  Str_L_char_G_ *pSVar5;
  int iVar6;
  undefined8 local_ac;
  undefined4 uStack_a8;
  undefined8 local_a4;
  undefined4 uStack_a0;
  void *local_8c[3];
  void *local_80;
  Str_L_char_G_ local_74;
  Str_L_char_G_ local_68;
  Str_L_char_G_ local_5c;
  Str_L_char_G_ local_50;
  Str_L_char_G_ local_44;
  Str_L_char_G_ local_38;
  util__Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  GetMassAndCosts(this);
  util__Str_char___Str_char__o5(&local_74,"TotalMass_kg");
  util__Str_char___Str_char__o5(&local_44,"Slash");
  util__Str_char___Str_char__o5(&local_38,"Mass_kg");
  local_2c.Data = 0;
  pSVar3 = &local_44;
  local_2c.Capacity = 0;
  local_2c.Length = 0;
  pcVar4 = (char *)0x6cba03;
  pSVar5 = pSVar3;
  util__LocStr__LocStr((LocStr *)local_8c,(util__Str_L_char_G_ *)pSVar3,&local_2c);
  iVar6 = 0x6cba0a;
  p1 = util__LocStr__operator__o3((LocStr *)pSVar3);
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff40,&local_38);
  SVar1.Capacity = iVar6;
  SVar1.Data = (char *)pSVar5;
  SVar1.Length = unaff_EDI;
  pSVar3 = Print(&local_5c,(double)CONCAT44(pcVar4,uStack_a8),SVar1);
  local_14.Length = 0;
  local_14.Data = (char *)0x0;
  local_14.Capacity = 0;
  util__Str_char___Str_char(&local_14,(util__Str_L_char_G_ *)pSVar3);
  util__Str_char___operator__o10(&local_14,p1);
  pSVar3 = &local_14;
  iVar6 = 0x6cba61;
  util__Str_char___Str_char(&local_50,(util__Str_L_char_G_ *)pSVar3);
  if ((Str_L_char_G_ *)local_14.Data != (Str_L_char_G_ *)0x0) {
    iVar6 = 0x6cba6e;
    pSVar3 = (Str_L_char_G_ *)local_14.Data;
    operator_delete__(local_14.Data);
    ((slice_view *)&local_14)->_0_8_ = ((slice_view *)&local_14)->_0_8_ & 0xffffffff00000000;
  }
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff40,&local_74);
  SVar2.Capacity = (int)pSVar3;
  SVar2.Data = (char *)iVar6;
  SVar2.Length = unaff_EDI;
  pSVar3 = Print(&local_68,(double)CONCAT44(pcVar4,uStack_a0),SVar2);
  local_20.Length = 0;
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  util__Str_char___Str_char(&local_20,(util__Str_L_char_G_ *)&local_50);
  util__Str_char___operator__o10(&local_20,(util__Str_L_char_G_ *)pSVar3);
  util__Str_char___Str_char((Str_L_char_G_ *)__return_storage_ptr__,(util__Str_L_char_G_ *)&local_20);
  if (local_20.Data != (char *)0x0) {
    operator_delete__(local_20.Data);
  }
  if (local_50.Data != (char *)0x0) {
    operator_delete__(local_50.Data);
  }
  if (local_5c.Data != (char *)0x0) {
    operator_delete__(local_5c.Data);
    local_5c.Data = (char *)0x0;
  }
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_80 = (void *)0x0;
  }
  if (local_8c[0] != (void *)0x0) {
    operator_delete__(local_8c[0]);
    local_8c[0] = (void *)0x0;
  }
  if ((void *)local_2c.Data != (void *)0x0) {
    operator_delete__((void *)local_2c.Data);
    local_2c.Data = 0;
  }
  if (local_68.Data != (char *)0x0) {
    operator_delete__(local_68.Data);
    local_68.Data = (char *)0x0;
  }
  if (local_38.Data != (char *)0x0) {
    operator_delete__(local_38.Data);
    local_38.Data = (char *)0x0;
  }
  if (local_44.Data != (char *)0x0) {
    operator_delete__(local_44.Data);
    local_44.Data = (char *)0x0;
  }
  if (local_74.Data != (char *)0x0) {
    operator_delete__(local_74.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 00006cbc70 006cbc70_FleetCustomizationReadout__GetMassHeader ====
// decompiled by BatchDecomp @ 006cbc70 name=GetMassHeader conv=__thiscall body=811

/* public: class Str_L_char_G_ __thiscall FleetCustomizationReadout__GetMassHeader(void)const  */

util__Str_L_char_G_ * __thiscall
FleetCustomizationReadout__GetMassHeader(FleetCustomizationReadout *this,util__Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xffffff1c;
  undefined4 stack0xfffffffc;
  Str_L_char_G_ SVar1;
  bool bVar2;
  StartingFleet *pSVar3;
  util__Str_L_char_G_ *puVar4;
  util__Str_L_char_G_ *p1;
  Str_L_char_G_ *pSVar5;
  int unaff_EDI;
  char *pcVar6;
  int iVar7;
  undefined8 local_d0;
  undefined4 uStack_cc;
  void *local_b0[3];
  void *local_a4;
  void *local_98[3];
  void *local_8c;
  Str_L_char_G_ local_80;
  Str_L_char_G_ local_74;
  void *local_68[3];
  Str_L_char_G_ local_5c;
  Str_L_char_G_ local_50;
  util__Str_L_char_G_ local_44;
  util__Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pSVar3 = BriefingsHandler__GetCustomizableFleet((BriefingsHandler *)this->Briefings,
                      ((BriefingsHandler *)this->Briefings)->SelectedSubject != 8);
  bVar2 = StarterFleet__IsUnlimited((StarterFleet *)pSVar3->FleetType);
  if (bVar2) {
    GetMassAndCosts(this);
    util__Str_char___Str_char__o5(&local_5c,"Mass_kg");
    util__Str_char___Str_char(&local_2c,&s_Dash);
    util__Str_char___Str_char__o5(&local_50,"UnlimitedMass");
    local_44.Data = 0;
    pSVar5 = &local_2c;
    local_44.Capacity = 0;
    local_44.Length = 0;
    local_38.Data = 0;
    local_38.Capacity = 0;
    local_38.Length = 0;
    util__LocStr__LocStr((LocStr *)local_b0,(util__Str_L_char_G_ *)pSVar5,&local_44);
    puVar4 = util__LocStr__operator__o3((LocStr *)pSVar5);
    pSVar5 = &local_50;
    pcVar6 = (char *)0x6cbdcc;
    util__LocStr__LocStr((LocStr *)local_98,(util__Str_L_char_G_ *)pSVar5,&local_38);
    p1 = util__LocStr__operator__o3((LocStr *)pSVar5);
    local_14.Length = 0;
    local_14.Data = (char *)0x0;
    local_14.Capacity = 0;
    util__Str_char___Str_char__o5(&local_14,p1);
    util__Str_char___operator__o10(&local_14,puVar4);
    pSVar5 = &local_14;
    iVar7 = 0x6cbe00;
    util__Str_char___Str_char__o5(&local_74,(util__Str_L_char_G_ *)pSVar5);
    if ((Str_L_char_G_ *)local_14.Data != (Str_L_char_G_ *)0x0) {
      iVar7 = 0x6cbe0d;
      pSVar5 = (Str_L_char_G_ *)local_14.Data;
      operator_delete__(local_14.Data);
      ((slice_view *)&local_14)->_0_8_ = ((slice_view *)&local_14)->_0_8_ & 0xffffffff00000000;
    }
    GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff1c,&local_5c);
    SVar1.Capacity = (int)pSVar5;
    SVar1.Data = (char *)iVar7;
    SVar1.Length = unaff_EDI;
    pSVar5 = Print(&local_80,(double)CONCAT44(pcVar6,uStack_cc),SVar1);
    local_20.Length = 0;
    local_20.Data = (char *)0x0;
    local_20.Capacity = 0;
    util__Str_char___Str_char(&local_20,(util__Str_L_char_G_ *)&local_74);
    util__Str_char___operator__o10(&local_20,(util__Str_L_char_G_ *)pSVar5);
    util__Str_char___Str_char((Str_L_char_G_ *)__return_storage_ptr__,(util__Str_L_char_G_ *)&local_20);
    if (local_20.Data != (char *)0x0) {
      operator_delete__(local_20.Data);
    }
    if (local_74.Data != (char *)0x0) {
      operator_delete__(local_74.Data);
    }
    if (local_8c != (void *)0x0) {
      operator_delete__(local_8c);
      local_8c = (void *)0x0;
    }
    if (local_98[0] != (void *)0x0) {
      operator_delete__(local_98[0]);
      local_98[0] = (void *)0x0;
    }
    if ((void *)local_38.Data != (void *)0x0) {
      operator_delete__((void *)local_38.Data);
      local_38.Data = 0;
    }
    if (local_a4 != (void *)0x0) {
      operator_delete__(local_a4);
      local_a4 = (void *)0x0;
    }
    if (local_b0[0] != (void *)0x0) {
      operator_delete__(local_b0[0]);
      local_b0[0] = (void *)0x0;
    }
    if ((void *)local_44.Data != (void *)0x0) {
      operator_delete__((void *)local_44.Data);
      local_44.Data = 0;
    }
    if (local_80.Data != (char *)0x0) {
      operator_delete__(local_80.Data);
      local_80.Data = (char *)0x0;
    }
    if (local_50.Data != (char *)0x0) {
      operator_delete__(local_50.Data);
      local_50.Data = (char *)0x0;
    }
    pcVar6 = local_5c.Data;
    if (local_2c.Data != (char *)0x0) {
      operator_delete__(local_2c.Data);
      local_2c.Data = (char *)0x0;
      pcVar6 = local_5c.Data;
    }
  }
  else {
    util__Str_char___Str_char(&local_2c,"MassLimits");
    pSVar5 = &local_2c;
    local_14.Data = (char *)0x0;
    local_14.Capacity = 0;
    local_14.Length = 0;
    util__LocStr__LocStr((LocStr *)local_68,(util__Str_L_char_G_ *)pSVar5,(util__Str_L_char_G_ *)&local_14);
    puVar4 = util__LocStr__operator__o3((LocStr *)pSVar5);
    util__Str_char___Str_char((Str_L_char_G_ *)__return_storage_ptr__,puVar4);
    if (local_5c.Data != (char *)0x0) {
      operator_delete__(local_5c.Data);
      local_5c.Data = (char *)0x0;
    }
    if (local_68[0] != (void *)0x0) {
      operator_delete__(local_68[0]);
      local_68[0] = (void *)0x0;
    }
    pcVar6 = local_2c.Data;
    if (local_14.Data != (char *)0x0) {
      operator_delete__(local_14.Data);
      ((slice_view *)&local_14)->_0_8_ = ((slice_view *)&local_14)->_0_8_ & 0xffffffff00000000;
      pcVar6 = local_2c.Data;
    }
  }
  if (pcVar6 != (char *)0x0) {
    operator_delete__(pcVar6);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 0000778800 00778800_UIListBox_struct_ActorDropdownAction___ListButton__IsSelected ====
// decompiled by BatchDecomp @ 00778800 name=IsSelected conv=__thiscall body=252

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall UIListBox_struct_ActorDropdownAction___ListButton__IsSelected(void)const
    */

bool __thiscall UIListBox_struct_ActorDropdownAction___ListButton__IsSelected(ListButton *this)

{
  bool bVar1;
  bool bVar2;
  ActorDropdownAction *pAVar3;
  Delegate_L_struct_ActorDropdownAction_G_ *this_00;
  ActorDropdownAction local_59c;
  undefined1 local_2d4[16];
  NodeMouseOver local_2c4;
  Type local_1c;
  ReferenceController *local_14;
  undefined4 local_c;
  undefined1 local_5;
  
  bVar1 = false;
  local_c = 0;
  ActorDropdownAction__ActorDropdownAction((ActorDropdownAction *)local_2d4,(ActorDropdownAction *)(this + 0x1c0));
  this_00 = (Delegate_L_struct_ActorDropdownAction_G *)(*(int *)(this + 0x1b0) + 0x19c);
  if ((*(int *)this_00 != 0) && (*(int *)(*(int *)(this + 0x1b0) + 0x1a0) != 0)) {
    pAVar3 = util_Delegate_struct_ActorDropdownAction_operator(this_00,&local_59c);
    if (((ReferenceController *)((slice_view *)&local_2d4)->_4_4_ == (pAVar3->Data).Object.Controller) &&
       (((Actor *)((slice_view *)&local_2d4)->_0_4_ == (pAVar3->Data).Object.Pointer &&
        ((pAVar3->Data).LPointID == ((slice_view *)&local_2d4)->_8_4_)))) {
      bVar1 = ItineraryNode__IsValid((ItineraryNode *)&(pAVar3->Data).Node);
      bVar2 = ItineraryNode__IsValid((ItineraryNode *)(local_2d4 + 0x10));
      if ((bVar1 == bVar2) && (pAVar3->ItineraryAction == local_1c)) {
        local_5 = 1;
        bVar1 = true;
        goto LAB_0077889f;
      }
    }
    bVar1 = true;
  }
  local_5 = 0;
LAB_0077889f:
  if (bVar1) {
    if (local_59c.AdditionalFleet.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_59c.AdditionalFleet.Controller);
    }
    NodeMouseOver__dtor((NodeMouseOver *)&local_59c.Data.Node);
    if (local_59c.Data.Object.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_59c.Data.Object.Controller);
    }
  }
  if (local_14 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_14);
  }
  NodeMouseOver__dtor((NodeMouseOver *)(local_2d4 + 0x10));
  if ((ReferenceController *)((slice_view *)&local_2d4)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)((slice_view *)&local_2d4)->_4_4_);
  }
  return (bool)local_5;
}


//==== 0000817570 00817570_SpacecraftCompartmentUI__GetHeatingText ====
extern undefined4 FUN_007ee8f0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 00817570 name=GetHeatingText conv=__thiscall body=281

/* private: class Str_L_char_G_ __thiscall SpacecraftCompartmentUI__GetHeatingText(void)const  */

util__Str_L_char_G_ * __thiscall
SpacecraftCompartmentUI__GetHeatingText(SpacecraftCompartmentUI *this,util__Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xffffffb4;
  undefined4 stack0xfffffffc;
  Str_L_char_G_ SVar1;
  int *piVar2;
  int iVar3;
  double *pdVar4;
  int unaff_EDI;
  undefined ***pppuVar5;
  char *pcVar6;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_38[16];
  undefined **local_28;
  Str_L_char_G_ local_24;
  undefined4 local_18;
  double local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  util__Attribute_class_util__Darray_class_util__WeakPtr_class_SpacecraftComponent_______Get__o2((Attribute_L_util__Darray_L_util__WeakPtr_L_SpacecraftComponent_G___G___G *)
             &this->ForShips);
  pppuVar5 = &local_28;
  piVar2 = (int *)FUN_007ee8f0();
  iVar3 = (**(code **)(*(int *)(uintptr_t)piVar2 + 0xc))();
  if (iVar3 == 0) {
    local_14 = 0.0;
  }
  else {
    local_18 = 0;
    pdVar4 = (double *)(**(code **)*piVar2)();
    local_c = 0;
    local_14 = *pdVar4;
    iVar3 = (**(code **)(*(int *)(uintptr_t)piVar2 + 0xc))();
    if (local_c < iVar3) {
      do {
        pdVar4 = (double *)(**(code **)*piVar2)();
        if (local_14 <= *pdVar4) {
          local_14 = *pdVar4;
        }
        local_c = local_c + 1;
        iVar3 = (**(code **)(*(int *)(uintptr_t)piVar2 + 0xc))();
      } while (local_c < iVar3);
    }
  }
  local_28 = ((void *)(0x0091da54u));
  if (local_24.Data != (char *)0x0) {
    operator_delete__(local_24.Data);
  }
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_38);
  pcVar6 = "Heat_W";
  iVar3 = 0x817643;
  util__Str_char___Str_char__o5(&local_24,"Heat_W");
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffffb4,&local_24);
  SVar1.Capacity = (int)pcVar6;
  SVar1.Data = (char *)iVar3;
  SVar1.Length = unaff_EDI;
  Print((Str_L_char_G_ *)__return_storage_ptr__,
        (double)CONCAT44(pppuVar5,(int)((ulonglong)local_14 >> 0x20)),SVar1);
  if (local_24.Data != (char *)0x0) {
    operator_delete__(local_24.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}

