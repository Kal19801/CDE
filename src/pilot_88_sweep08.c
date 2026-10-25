// pilot_sweep_sweep08.c - assembled by scripts/sweep_assemble.py (r19)
// reuses fam8_assemble fix passes (zip oracle/in-batch protos/vft channel/data closure)
/* ---- r20 incomplete-type forward decls (pointer-position only) ---- */
typedef struct MakeTuple_L_class_util__WeakPtr_L_struct_OrbiterInterface_G_ MakeTuple_L_class_util__WeakPtr_L_struct_OrbiterInterface_G_;
typedef struct UIListBox_L_struct_ActorDropdownAction_G___ListButton UIListBox_L_struct_ActorDropdownAction_G___ListButton;
typedef struct util__Darray_L_class_util__SharedPtr_L_class_Body_G___G util__Darray_L_class_util__SharedPtr_L_class_Body_G___G;
typedef struct util__Darray_L_class_util__WeakPtr_L_class_Fleet_G___G util__Darray_L_class_util__WeakPtr_L_class_Fleet_G___G;
typedef struct util__PhysicalState_L_struct____util__Vec3_L_double_G___G util__PhysicalState_L_struct____util__Vec3_L_double_G___G;
typedef struct util__WeakPtr_L_struct_OrbiterInterface_G util__WeakPtr_L_struct_OrbiterInterface_G;
typedef struct util__tuple2_L_class_util__WeakPtr_L_struct_OrbiterInterface_G__struct_ItineraryNode_G util__tuple2_L_class_util__WeakPtr_L_struct_OrbiterInterface_G__struct_ItineraryNode_G;
#include "port_prelude.h"
#include "cde_win32_compat.h"
#include "cde_types_r20.h"
typedef union {
  struct {
    undefined4 _4_4_;
    undefined4 _704_4_;
  };
  undefined1 raw[32];
} slice_view;
/* ---- r21 hdr-conflict renames (decl stays OLD for game TUs; pilot impl+calls = NEW; linker aliases OLD -> NEW) ---- */
#undef BurnInfoCustomWidget__GetBurnStatusBarText
#define BurnInfoCustomWidget__GetBurnStatusBarText BurnInfoCustomWidget__GetBurnStatusBarText__r20
#undef WorldObject__IsValid
#define WorldObject__IsValid WorldObject__IsValid__r20
/* ---- externs: stub-oracle names (K&R; ret types by call site) ---- */
extern int Itinerary_Itinerary__o3(); /* K&R stub; ret by call site */
extern int NodeMouseOver__dtor(); /* K&R stub; ret by call site */
extern int util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2(); /* K&R stub; ret by call site */

//==== 007616d0 7616d0_StrategicManager__GenerateNewFleets ====
extern undefined4 FUN_00756aa0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_00757720(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_0075db30(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 7616d0 name=GenerateNewFleets conv=__thiscall body=2097

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__GenerateNewFleets(struct util__PhysicalState_L_struct____util__Vec3_L_double_G___G,class util__Darray_L_class_util__WeakPtr_L_class_Fleet_G___G *,class
   util__Darray_L_class_util__SharedPtr_L_class_Body_G___G const &,bool) */

void __thiscall
StrategicManager__GenerateNewFleets(StrategicManager *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
          undefined4 param_13,Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *param_14,
          Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *param_15,char param_16)

{
  undefined4 stack0xfffffdfc;
  undefined4 stack0xfffffffc;
  SharedPtr_L_struct_UIWidget_G_ *pSVar1;
  Body *pBVar2;
  ReferenceController *pRVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  SharedPtr_L_struct_UIWidget_G_ *pSVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  ActorHandler *pAVar10;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *pDVar11;
  int *piVar12;
  ReferenceControllerRegistry *this_00;
  SharedPtr_L_struct_UIWidget_G_ *pSVar13;
  HDC hdc;
  ReferenceController *pRVar14;
  ItineraryNode IStack_354;
  undefined4 uStack_c4;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *local_98;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 *local_60;
  undefined4 *puStack_5c;
  StrategicManager *pSStack_58;
  StrategicManager *pSStack_54;
  undefined8 *local_50;
  undefined **local_4c;
  SharedPtr_L_struct_UIWidget_G_ *pSStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined **local_20;
  SharedPtr_L_struct_UIWidget_G_ *pSStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_94 = param_14;
  local_98 = param_15;
  local_3c = 0;
  local_20 = (undefined **)0x0;
  pSStack_1c = (SharedPtr_L_struct_UIWidget_G_ *)0x0;
  iStack_18 = 0;
  uStack_14 = 0;
  iVar6 = (**(code **)(*(int *)param_15 + 0xc))();
  util__Darray_class_util__SharedPtr_class_Body_____Darray_class_util__SharedPtr_class_Body__o2((Darray_L_class_util__SharedPtr_L_class_Body_G___G_ *)&local_20,iVar6);
  local_10 = 0;
  iVar6 = (**(code **)(*(int *)param_15 + 0xc))();
  if (local_10 < iVar6) {
    do {
      pSVar7 = (SharedPtr_L_struct_UIWidget_G_ *)(*(code *)**(undefined4 **)param_15)();
      if (((*(int *)pSVar7 != 0) && (*(int *)(pSVar7 + 4) != 0)) &&
         (*(int *)(*(int *)pSVar7 + 0x1e0) != 0)) {
        util__Darray_class_util__SharedPtr_struct_UIWidget_____Add((Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *)&local_20,pSVar7);
      }
      local_10 = local_10 + 1;
      iVar6 = (**(code **)(*(int *)param_15 + 0xc))();
    } while (local_10 < iVar6);
  }
  local_c = 0;
  iVar6 = (**(code **)(*(int *)param_15 + 0xc))();
  if (local_c < iVar6) {
    do {
      puVar8 = (undefined4 *)(*(code *)**(undefined4 **)param_15)();
      pBVar2 = (Body *)*puVar8;
      if (pBVar2->Alliance == (Faction *)0x0) {
        Body__GetCapitalShipComponent_Memoize(pBVar2);
        if ((pBVar2->GetCapitalShipComponent_MemoizedValue).IsValidData == false) {
          uStack_c4 = 0x7617bf;
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        if ((((pBVar2->GetCapitalShipComponent_MemoizedValue).Data.Pointer ==
              (CapitalShipComponent *)0x0) ||
            (pRVar3 = (pBVar2->GetCapitalShipComponent_MemoizedValue).Data.Controller,
            pRVar3 == (ReferenceController *)0x0)) ||
           (bVar4 = util__ReferenceController__IsDataStillValid(pRVar3), !bVar4)) {
          pDVar11 = local_94;
          local_10 = 0;
          iVar6 = (**(code **)(*(int *)local_94 + 0xc))();
          if (local_10 < iVar6) {
            do {
              puVar9 = (undefined4 *)(*(code *)**(undefined4 **)pDVar11)();
              if ((ReferenceController *)puVar8[1] != (ReferenceController *)0x0) {
                util__ReferenceController__AddWeakReference((ReferenceController *)puVar8[1]);
              }
              if (((ReferenceController *)puVar9[1] != (ReferenceController *)0x0) &&
                 (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar9[1]), !bVar4)) {
                *puVar9 = 0;
              }
              Fleet__KillBody((Fleet *)*puVar9);
              local_10 = local_10 + 1;
              iVar6 = (**(code **)(*(int *)pDVar11 + 0xc))();
              param_15 = local_98;
            } while (local_10 < iVar6);
          }
        }
      }
      local_c = local_c + 1;
      iVar6 = (**(code **)(*(int *)param_15 + 0xc))();
    } while (local_c < iVar6);
  }
  FUN_00756aa0();
  pAVar10 = (ActorHandler *)
            util__Darray_enum_CrewDepartment__Type___Num((Darray_L_enum_CrewDepartment__Type_G_ *)this);
  ActorHandler__ResolvePendingActors(pAVar10);
  pDVar11 = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
util__GenerateNewFleets((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_38);
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2(local_94,pDVar11);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_38);
  pDVar11 = local_94;
  local_c = 0;
  iVar6 = (**(code **)(*(int *)local_94 + 0xc))();
  if (local_c < iVar6) {
    do {
      piVar12 = (int *)(*(code *)**(undefined4 **)pDVar11)();
      if (((*piVar12 != 0) && ((ReferenceController *)piVar12[1] != (ReferenceController *)0x0)) &&
         (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar12[1]),
         bVar4)) {
        if (((ReferenceController *)piVar12[1] != (ReferenceController *)0x0) &&
           (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar12[1]),
           !bVar4)) {
          *piVar12 = 0;
        }
        bVar4 = Fleet__HasMission((Fleet *)*piVar12);
        if ((bVar4) && (param_16 != '\0')) {
          if (((ReferenceController *)piVar12[1] != (ReferenceController *)0x0) &&
             (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar12[1])
             , !bVar4)) {
            *piVar12 = 0;
          }
          Fleet__ClearMission((Fleet *)*piVar12);
        }
      }
      local_c = local_c + 1;
      iVar6 = (**(code **)(*(int *)pDVar11 + 0xc))();
    } while (local_c < iVar6);
  }
  pDVar11 = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
util__GenerateNewFleets((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_38);
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2(local_94,pDVar11);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_38);
  local_90 = param_2;
  uStack_8c = param_3;
  uStack_88 = param_4;
  uStack_84 = param_5;
  local_80 = param_6;
  uStack_7c = param_7;
  uStack_78 = param_8;
  uStack_74 = param_9;
  local_70 = param_10;
  uStack_6c = param_11;
  uStack_68 = param_12;
  uStack_64 = param_13;
  local_4c = ((void *)(0x0091d1bcu));
  pSStack_48 = (SharedPtr_L_struct_UIWidget_G_ *)0x0;
  uStack_44 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment((Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_38,
             (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)local_94);
  pSStack_58 = (StrategicManager *)&local_90;
  pSStack_54 = this;
  FUN_00757720();
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_38);
  local_c = 0;
  iVar6 = (*(code *)local_4c[3])();
  if (local_c < iVar6) {
    do {
      local_98 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)(*(code *)*local_4c)();
      bVar4 = false;
      if (pSStack_1c != pSStack_1c + iStack_18 * 8) {
        pSVar7 = pSStack_1c;
        pSVar13 = pSStack_1c + 4;
        do {
          if (bVar4) {
            piVar12 = *(int **)(pSVar13 + -0xc);
            pRVar3 = *(ReferenceController **)(pSVar13 + -8);
            *(int *)(pSVar13 + -0xc) = *(int *)(pSVar13 + -4);
            pRVar14 = *(ReferenceController **)pSVar13;
            *(ReferenceController **)(pSVar13 + -8) = pRVar14;
            if (pRVar14 != (ReferenceController *)0x0) {
              util__ReferenceController__AddStrongReference(pRVar14);
            }
            pSVar7 = pSStack_1c;
            if ((pRVar3 != (ReferenceController *)0x0) &&
               (bVar5 = util__ReferenceController__ReleaseStrongReference(pRVar3),
               pSVar7 = pSStack_1c, bVar5)) {
              if (piVar12 != (int *)0x0) {
                (**(code **)(*piVar12 + 4))();
              }
              this_00 = util__ReferenceControllerRegistry__Get();
              util__ReferenceControllerRegistry__PointerWasDestroyed(this_00,piVar12);
              pSVar7 = pSStack_1c;
            }
          }
          else if ((*(int *)(local_98 + 4) == *(int *)pSVar13) &&
                  (*(int *)local_98 == *(int *)(pSVar13 + -4))) {
            bVar4 = true;
          }
          pSVar1 = pSVar13 + 4;
          pSVar13 = pSVar13 + 8;
        } while (pSVar1 != pSVar7 + iStack_18 * 8);
        if (bVar4) {
          local_98 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)(iStack_18 + -1);
          util__Darray_class_util__SharedPtr_struct_UIWidget_____SetSize((Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *)&local_20,(int *)&local_98);
        }
      }
      local_c = local_c + 1;
      iVar6 = (*(code *)local_4c[3])();
    } while (local_c < iVar6);
  }
  pAVar10 = (ActorHandler *)
            util__Darray_enum_CrewDepartment__Type___Num((Darray_L_enum_CrewDepartment__Type_G_ *)this);
  ActorHandler__ResolvePendingActors(pAVar10);
  pDVar11 = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
util__GenerateNewFleets((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_38);
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2(local_94,pDVar11);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_38);
  local_90 = param_2;
  uStack_8c = param_3;
  uStack_88 = param_4;
  uStack_84 = param_5;
  local_98 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)local_94;
  local_80 = param_6;
  uStack_7c = param_7;
  uStack_78 = param_8;
  uStack_74 = param_9;
  local_70 = param_10;
  uStack_6c = param_11;
  uStack_68 = param_12;
  uStack_64 = param_13;
  local_28 = 0;
  local_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment((Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_38,
             (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)local_94);
  local_60 = &local_90;
  puStack_5c = &local_38;
  local_c = 0;
  pSStack_54 = (StrategicManager *)&local_98;
  local_50 = &local_28;
  pSStack_58 = this;
  iVar6 = (*(code *)local_20[3])();
  if (local_c < iVar6) {
    do {
      (*(code *)*local_20)();
      FUN_0075db30();
      local_c = local_c + 1;
      iVar6 = (*(code *)local_20[3])();
    } while (local_c < iVar6);
  }
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_38);
  pAVar10 = (ActorHandler *)
            util__Darray_enum_CrewDepartment__Type___Num((Darray_L_enum_CrewDepartment__Type_G_ *)this);
  ActorHandler__ResolvePendingActors(pAVar10);
  pDVar11 = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
util__GenerateNewFleets((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_38);
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2(local_94,pDVar11);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_38);
  pDVar11 = local_94;
  local_c = 0;
  iVar6 = (**(code **)(*(int *)local_94 + 0xc))();
  if (local_c < iVar6) {
    do {
      piVar12 = (int *)(*(code *)**(undefined4 **)pDVar11)();
      if (((*piVar12 != 0) && ((ReferenceController *)piVar12[1] != (ReferenceController *)0x0)) &&
         (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar12[1]),
         bVar4)) {
        if (((ReferenceController *)piVar12[1] != (ReferenceController *)0x0) &&
           (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar12[1]),
           !bVar4)) {
          *piVar12 = 0;
        }
        bVar4 = Fleet__HasShips((Fleet *)*piVar12);
        if (bVar4) {
          if (((ReferenceController *)piVar12[1] != (ReferenceController *)0x0) &&
             (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar12[1])
             , !bVar4)) {
            *piVar12 = 0;
          }
          bVar4 = Fleet__IsLocationValid((Fleet *)*piVar12);
          if (bVar4) goto LAB_00761cc4;
        }
        if ((ReferenceController *)piVar12[1] != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference((ReferenceController *)piVar12[1]);
        }
        KillFleet(this);
      }
LAB_00761cc4:
      local_c = local_c + 1;
      iVar6 = (**(code **)(*(int *)pDVar11 + 0xc))();
    } while (local_c < iVar6);
  }
  pAVar10 = (ActorHandler *)
            util__Darray_enum_CrewDepartment__Type___Num((Darray_L_enum_CrewDepartment__Type_G_ *)this);
  ActorHandler__ResolvePendingActors(pAVar10);
  pAVar10 = (ActorHandler *)
            util__Darray_enum_CrewDepartment__Type___Num((Darray_L_enum_CrewDepartment__Type_G_ *)this);
  ActorHandler__ResolvePendingActors(pAVar10);
  local_c = 0;
  iVar6 = (*(code *)local_20[3])();
  if (local_c < iVar6) {
    do {
      puVar8 = (undefined4 *)(*(code *)*local_20)();
      pBVar2 = (Body *)*puVar8;
      Body__GetControllableComponent_Memoize(pBVar2);
      if ((pBVar2->GetControllableComponent_MemoizedValue).IsValidData == false) {
        uStack_c4 = 0x761d42;
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      if ((((pBVar2->GetControllableComponent_MemoizedValue).Data.Pointer !=
            (ControllableComponent *)0x0) &&
          (pRVar3 = (pBVar2->GetControllableComponent_MemoizedValue).Data.Controller,
          pRVar3 != (ReferenceController *)0x0)) &&
         (bVar4 = util__ReferenceController__IsDataStillValid(pRVar3), bVar4)) {
        pBVar2 = (Body *)*puVar8;
        Body__GetControllableComponent_Memoize(pBVar2);
        if ((pBVar2->GetControllableComponent_MemoizedValue).IsValidData == false) {
          uStack_c4 = 0x761d7f;
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        pRVar3 = (pBVar2->GetControllableComponent_MemoizedValue).Data.Controller;
        if ((pRVar3 != (ReferenceController *)0x0) &&
           (bVar4 = util__ReferenceController__IsDataStillValid(pRVar3), !bVar4)) {
          (pBVar2->GetControllableComponent_MemoizedValue).Data.Pointer =
               (ControllableComponent *)0x0;
        }
        ControllableComponent__MarkAsShouldSplitFromMainFleet((pBVar2->GetControllableComponent_MemoizedValue).Data.Pointer,false);
      }
      local_c = local_c + 1;
      iVar6 = (*(code *)local_20[3])();
    } while (local_c < iVar6);
  }
  if ((((HDC)local_28 != (HDC)0x0) && (((slice_view *)&local_28)->_4_4_ != (ReferenceController *)0x0)) &&
     (bVar4 = util__ReferenceController__IsDataStillValid(((slice_view *)&local_28)->_4_4_), bVar4)) {
    pRVar3 = ((slice_view *)&local_28)->_4_4_;
    hdc = (HDC)local_28;
    pRVar14 = ((slice_view *)&local_28)->_4_4_;
    if (((slice_view *)&local_28)->_4_4_ != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(((slice_view *)&local_28)->_4_4_);
      pRVar14 = pRVar3;
      util__ReferenceController__AddWeakReference(pRVar3);
    }
    ItineraryNode__ItineraryNode(&IStack_354);
    ItineraryNode__ItineraryNode((ItineraryNode *)&stack0xfffffdfc);
    if (pRVar3 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(pRVar3);
    }
    SelectObject(hdc,pRVar14);
  }
  piVar12 = (int *)GetFleets(this);
  local_c = 0;
  iVar6 = (**(code **)(*(int *)(uintptr_t)piVar12 + 0xc))();
  if (local_c < iVar6) {
    do {
      puVar8 = (undefined4 *)(**(code **)*piVar12)();
      if (((ReferenceController *)puVar8[1] != (ReferenceController *)0x0) &&
         (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar8[1]),
         !bVar4)) {
        *puVar8 = 0;
      }
      (**(code **)(*(int *)*puVar8 + 0x40))();
      local_c = local_c + 1;
      iVar6 = (**(code **)(*(int *)(uintptr_t)piVar12 + 0xc))();
    } while (local_c < iVar6);
  }
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_38);
  pAVar10 = (ActorHandler *)
            util__Darray_enum_CrewDepartment__Type___Num((Darray_L_enum_CrewDepartment__Type_G_ *)this);
  ActorHandler__ResolvePendingActors(pAVar10);
  if (((slice_view *)&local_28)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_28)->_4_4_);
  }
  local_4c = ((void *)(0x0091d1bcu));
  if (pSStack_48 != (SharedPtr_L_struct_UIWidget_G_ *)0x0) {
    util__SharedPtr_struct_UIWidget____vector_deleting_destructor(pSStack_48,3);
  }
  pSStack_48 = (SharedPtr_L_struct_UIWidget_G_ *)0x0;
  local_4c = ((void *)(0x00919488u));
  local_20 = ((void *)(0x0091d1bcu));
  if (pSStack_1c != (SharedPtr_L_struct_UIWidget_G_ *)0x0) {
    util__SharedPtr_struct_UIWidget____vector_deleting_destructor(pSStack_1c,3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 007683f0 7683f0_util__Darray_struct_WorldObject___Last ====
// decompiled by BatchDecomp @ 7683f0 name=Last conv=__thiscall body=59

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual struct WorldObject & __thiscall util__Darray_L_struct_WorldObject_G___Last(void) */

WorldObject * __thiscall util__Darray_L_struct_WorldObject_G___Last(Darray_L_struct_WorldObject_G_ *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3c,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = *(int *)(this + 8);
  }
  return (WorldObject *)(*(int *)(this + 4) + -0x2b8 + iVar1 * 0x2b8);
}


//==== 0076bb50 76bb50_util__Darray_struct_PendingBattle___SetAll ====
// decompiled by BatchDecomp @ 76bb50 name=SetAll conv=__thiscall body=141

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall util_Darray_struct_PendingBattle_SetAll(struct PendingBattle
   const &) */

void __thiscall
util_Darray_struct_PendingBattle_SetAll(Darray_L_struct_PendingBattle_G_ *this,PendingBattle *param_1)

{
  ReferenceController *pRVar1;
  ReferenceController *pRVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(this + 4);
  if (puVar3 != puVar3 + *(int *)(this + 8) * 6) {
    do {
      pRVar1 = (ReferenceController *)puVar3[1];
      *puVar3 = (param_1->Attacker).Pointer;
      pRVar2 = (param_1->Attacker).Controller;
      puVar3[1] = pRVar2;
      if (pRVar2 != (ReferenceController *)0x0) {
        ReferenceController__AddWeakReference(pRVar2);
      }
      if (pRVar1 != (ReferenceController *)0x0) {
        ReferenceController__ReleaseWeakReference(pRVar1);
      }
      pRVar1 = (ReferenceController *)puVar3[3];
      puVar3[2] = (param_1->Defender).Pointer;
      pRVar2 = (param_1->Defender).Controller;
      puVar3[3] = pRVar2;
      if (pRVar2 != (ReferenceController *)0x0) {
        ReferenceController__AddWeakReference(pRVar2);
      }
      if (pRVar1 != (ReferenceController *)0x0) {
        ReferenceController__ReleaseWeakReference(pRVar1);
      }
      *(double *)(puVar3 + 4) = param_1->TimeSinceJ2000_s;
      puVar3 = puVar3 + 6;
    } while (puVar3 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x18));
  }
  return;
}


//==== 007726f0 7726f0_UIListBox_struct_ActorDropdownAction___ListButton___scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 7726f0 name=`scalar_deleting_destructor' conv=__thiscall body=110

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall UIListBox_L_struct_ActorDropdownAction_G___ListButton::`scalar
   deleting destructor'(unsigned int) */

void * __thiscall
UIListBox_struct_ActorDropdownAction___ListButton___scalar_deleting_destructor_(ListButton *this,uint param_1)

{
  if (*(ReferenceController **)(this + 0x480) != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(*(ReferenceController **)(this + 0x480));
  }
  NodeMouseOver__dtor((NodeMouseOver *)(this + 0x1d0));
  if (*(ReferenceController **)(this + 0x1c4) != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(*(ReferenceController **)(this + 0x1c4));
  }
  if (*(void **)(this + 0x1b4) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x1b4));
    *(undefined4 *)(this + 0x1b4) = 0;
  }
  UIButton___UIButton((UIButton *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,0x488);
  }
  return this;
}


//==== 00773320 773320_util__Darray_struct_ActorDropdownAction___CheckSizeDestructive ====
// decompiled by BatchDecomp @ 773320 name=CheckSizeDestructive conv=__thiscall body=399

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall util_Darray_struct_ActorDropdownAction_CheckSizeDestructive(void) */

bool __thiscall
util_Darray_struct_ActorDropdownAction_CheckSizeDestructive(Darray_L_struct_ActorDropdownAction_G_ *this)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  bool bVar6;
  uint *local_c;
  bool local_5;
  
  local_5 = true;
  uVar3 = *(uint *)(this + 8);
  bVar6 = -1 < (int)uVar3;
  bVar1 = !bVar6;
  if (bVar1) {
    local_c = (uint *)0x0;
    SetSize(this,(int *)&local_c);
    uVar3 = *(uint *)(this + 8);
  }
  local_5 = !bVar1;
  bVar1 = (int)uVar3 < 0x40000000;
  if (!bVar1) {
    local_c = (uint *)0x3fffffff;
    SetSize(this,(int *)&local_c);
    uVar3 = *(uint *)(this + 8);
    local_5 = false;
  }
  uVar5 = *(uint *)(this + 0xc);
  if ((int)uVar5 < (int)uVar3) {
    if (uVar5 == 0) {
      *(uint *)(this + 0xc) = uVar3;
      uVar5 = uVar3;
    }
    if ((int)uVar5 < (int)uVar3) {
      do {
        uVar5 = uVar5 * 2;
      } while ((int)uVar5 < (int)uVar3);
      *(uint *)(this + 0xc) = uVar5;
    }
    if (0x3fffffff < (int)uVar5) {
      *(undefined4 *)(this + 0xc) = 0x3fffffff;
      uVar5 = 0x3fffffff;
    }
    if (*(ActorDropdownAction **)(this + 4) != (ActorDropdownAction *)0x0) {
      ActorDropdownAction___vector_deleting_destructor_(*(ActorDropdownAction **)(this + 4),3);
      uVar5 = *(uint *)(this + 0xc);
    }
    *(undefined4 *)(this + 4) = 0;
    uVar3 = -(uint)((int)((ulonglong)uVar5 * 0x2c8 >> 0x20) != 0) | (uint)((ulonglong)uVar5 * 0x2c8)
    ;
    puVar2 = (uint *)operator_new__(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
    if (puVar2 == (uint *)0x0) {
      puVar4 = (uint *)0x0;
    }
    else {
      *puVar2 = uVar5;
      puVar4 = puVar2 + 1;
      if (uVar5 != 0) {
        puVar2 = puVar2 + 0xad;
        local_c = puVar4;
        do {
          *puVar4 = 0;
          puVar2[-0xab] = 0;
          puVar2[-0xaa] = 0;
          ItineraryNode__ItineraryNode((ItineraryNode *)(puVar2 + -0xa8));
          ItineraryNode__ItineraryNode((ItineraryNode *)(puVar2 + -0x54));
          puVar4 = puVar4 + 0xb2;
          puVar2[0] = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
          puVar2[3] = 0;
          puVar2[4] = 0;
          uVar5 = uVar5 - 1;
          puVar2 = puVar2 + 0xb2;
        } while (uVar5 != 0);
        *(uint **)(this + 4) = local_c;
        return local_5;
      }
    }
    *(uint **)(this + 4) = puVar4;
    return local_5;
  }
  return bVar1 && bVar6;
}


//==== 007750c0 7750c0_ActorDropdown__GetActorNode ====
// decompiled by BatchDecomp @ 7750c0 name=GetActorNode conv=__thiscall body=326

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: struct ItineraryNode __thiscall ActorDropdown__GetActorNode(struct
   ActorDropdownAction)const  */

ItineraryNode * __thiscall
ActorDropdown__GetActorNode(undefined4 param_1,ItineraryNode *__return_storage_ptr__,undefined4 param_3,
          ReferenceController *param_4)

{
  undefined4 stack0x00000018;
  undefined4 stack0x00000168;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  NodeMouseOver *pNVar4;
  ItineraryNode *pIVar5;
  ReferenceController *in_stack_000002c8;
  NodeMouseOver local_550;
  ItineraryNode local_2a8;
  ItineraryNode local_158;
  undefined4 local_8;
  
  local_8 = 0;
  bVar3 = ItineraryNode__IsValid((ItineraryNode *)&stack0x00000018);
  if (bVar3) {
    bVar3 = ItineraryNode__IsValid((ItineraryNode *)&stack0x00000168);
    if (bVar3) {
      pNVar4 = WorldObject__AsItineraryPoint((WorldObject *)&param_3,&local_550);
      pIVar5 = (ItineraryNode *)ItineraryNode__ItineraryNode(&local_2a8,&pNVar4->NextNode);
      bVar2 = true;
      bVar1 = true;
      bVar3 = false;
      goto LAB_00775127;
    }
  }
  pIVar5 = (ItineraryNode *)ItineraryNode__ItineraryNode(&local_158);
  bVar2 = false;
  bVar1 = false;
  bVar3 = true;
LAB_00775127:
  ItineraryNode__ItineraryNode(__return_storage_ptr__,pIVar5);
  if (bVar3) {
    if (local_158.CachedNearestOrbiter.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_158.CachedNearestOrbiter.Controller);
    }
    if (local_158.CachedNearestFleet.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_158.CachedNearestFleet.Controller);
    }
    if (local_158.CachedNearestBody.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_158.CachedNearestBody.Controller);
    }
    if (local_158.CachedGravityBody.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_158.CachedGravityBody.Controller);
    }
    if (local_158.Parent.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_158.Parent.Controller);
    }
  }
  if (bVar1) {
    if (local_2a8.CachedNearestOrbiter.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_2a8.CachedNearestOrbiter.Controller);
    }
    if (local_2a8.CachedNearestFleet.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_2a8.CachedNearestFleet.Controller);
    }
    if (local_2a8.CachedNearestBody.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_2a8.CachedNearestBody.Controller);
    }
    if (local_2a8.CachedGravityBody.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_2a8.CachedGravityBody.Controller);
    }
    if (local_2a8.Parent.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_2a8.Parent.Controller);
    }
  }
  if (bVar2) {
    NodeMouseOver__dtor(&local_550);
  }
  if (in_stack_000002c8 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(in_stack_000002c8);
  }
  NodeMouseOver__dtor((NodeMouseOver *)&stack0x00000018);
  if (param_4 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_4);
  }
  return __return_storage_ptr__;
}


//==== 00778900 778900_WorldObject__IsValid ====
// decompiled by BatchDecomp @ 778900 name=IsValid conv=__thiscall body=59

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool const __thiscall WorldObject__IsValid(void)const  */

bool __thiscall WorldObject__IsValid(WorldObject *this)

{
  ReferenceController *this_00;
  bool bVar1;
  
  if ((((this->Object).Pointer != (Actor *)0x0) &&
      (this_00 = (this->Object).Controller, this_00 != (ReferenceController *)0x0)) &&
     (bVar1 = util__ReferenceController__IsDataStillValid(this_00), bVar1)) {
    return true;
  }
  bVar1 = ItineraryNode__IsValid(&(this->Node).LastNode);
  if ((bVar1) && (bVar1 = ItineraryNode__IsValid(&(this->Node).NextNode), bVar1)) {
    return true;
  }
  return false;
}


//==== 007789c0 7789c0_util__Darray_struct_ActorDropdownAction___Last ====
// decompiled by BatchDecomp @ 7789c0 name=Last conv=__thiscall body=59

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual struct ActorDropdownAction & __thiscall util__Darray_L_struct____ActorDropdownAction_G___Last(void) */

ActorDropdownAction * __thiscall
util__Darray_L_struct_ActorDropdownAction_G___Last(Darray_L_struct_ActorDropdownAction_G_ *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3c,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = *(int *)(this + 8);
  }
  return (ActorDropdownAction *)(*(int *)(this + 4) + -0x2c8 + iVar1 * 0x2c8);
}


//==== 00778a40 778a40_UIListBox_struct_ActorDropdownAction___OnChangedSearchString ====
// decompiled by BatchDecomp @ 778a40 name=OnChangedSearchString conv=__thiscall body=120

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: void __thiscall UIListBox_struct_ActorDropdownAction_OnChangedSearchString(void) */

void __thiscall
UIListBox_struct_ActorDropdownAction_OnChangedSearchString(UIListBox_L_struct_ActorDropdownAction_G_ *this)

{
  undefined4 stack0xfffffffc;
  undefined1 auStack_5a4[708];
  undefined4 uStack_2e0;
  ActorDropdownAction local_2d8;
  char local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  uStack_2e0 = &local_2d8;
  ((slice_view *)&auStack_5a4)->_704_4_ = (ReferenceController *)0x778a62;
  GetSearchedValue(this);
  if (local_10 != '\0') {
    ActorDropdownAction__ActorDropdownAction((ActorDropdownAction *)auStack_5a4,&local_2d8);
    ScrollToDatum(this);
  }
  if (local_2d8.AdditionalFleet.Controller != (ReferenceController *)0x0) {
    uStack_2e0 = (ActorDropdownAction *)0x778a8f;
    util__ReferenceController__ReleaseWeakReference(local_2d8.AdditionalFleet.Controller);
  }
  uStack_2e0 = (ActorDropdownAction *)0x778a9a;
  NodeMouseOver__dtor(&local_2d8.Data.Node);
  if (local_2d8.Data.Object.Controller != (ReferenceController *)0x0) {
    uStack_2e0 = (ActorDropdownAction *)0x778aa9;
    util__ReferenceController__ReleaseWeakReference(local_2d8.Data.Object.Controller);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00778ac0 778ac0_UIListBox_struct_ActorDropdownAction___OnCommitSearchString ====
// decompiled by BatchDecomp @ 778ac0 name=OnCommitSearchString conv=__thiscall body=309

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: void __thiscall UIListBox_struct_ActorDropdownAction_OnCommitSearchString(bool) */

void __thiscall
UIListBox_struct_ActorDropdownAction_OnCommitSearchString(UIListBox_L_struct_ActorDropdownAction_G_ *this,bool param_1)

{
  undefined4 stack0xfffffa58;
  undefined4 stack0xfffffffc;
  bool bVar1;
  char cVar2;
  undefined4 uStack_2f4;
  ActorDropdownAction local_2d8;
  char local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x1d8) != 0) {
    GetSearchedValue(this);
    cVar2 = local_10;
    if ((param_1) && (*(undefined1 **)(this + 0x1d0) != (undefined1 *)0x0)) {
      **(undefined1 **)(this + 0x1d0) = 0;
      *(undefined4 *)(this + 0x1d8) = 0;
    }
    if (local_10 != '\0') {
      if ((*(int *)(this + 0x1fc) != 0) &&
         (*(ReferenceController **)(this + 0x200) != (ReferenceController *)0x0)) {
        bVar1 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(this + 0x200))
        ;
        if (bVar1) {
          if (*(ReferenceController **)(this + 0x200) != (ReferenceController *)0x0) {
            bVar1 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(this + 0x200));
            if (!bVar1) {
              *(undefined4 *)(this + 0x1fc) = 0;
            }
          }
          (**(code **)(**(int **)(this + 0x1fc) + 0xc4))();
          ActorDropdownAction__ActorDropdownAction((ActorDropdownAction *)&stack0xfffffa58,&local_2d8);
          ScrollToDatum(this);
          cVar2 = local_10;
        }
      }
      if (param_1) {
        if (cVar2 == '\0') {
          uStack_2f4 = 0x778b99;
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        ActorDropdownAction__ActorDropdownAction((ActorDropdownAction *)&stack0xfffffa58,&local_2d8)
        ;
        TriggerOnSelect(this);
      }
    }
    if (local_2d8.AdditionalFleet.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_2d8.AdditionalFleet.Controller);
    }
    NodeMouseOver__dtor(&local_2d8.Data.Node);
    if (local_2d8.Data.Object.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_2d8.Data.Object.Controller);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0077f080 77f080_BurnInfoCustomWidget___scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 77f080 name=`scalar_deleting_destructor' conv=__thiscall body=184

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall BurnInfoCustomWidget::`scalar deleting destructor'(unsigned
   int) */

void * __thiscall
BurnInfoCustomWidget___scalar_deleting_destructor_(BurnInfoCustomWidget *this,uint param_1)

{
  ReferenceController *pRVar1;
  
  pRVar1 = (this->Node).CachedNearestOrbiter.Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  pRVar1 = (this->Node).CachedNearestFleet.Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  pRVar1 = (this->Node).CachedNearestBody.Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  pRVar1 = (this->Node).CachedGravityBody.Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  pRVar1 = (this->Node).Parent.Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  this->_pad_0x0_0 = (int)((void *)(0x0091d1e0u));
  this->_pad_0x0_0 = (int)((void *)(0x0091d1bcu));
  if ((SharedPtr_L_struct_UIWidget_G_ *)this->_pad_0x0_0 != (SharedPtr_L_struct_UIWidget_G_ *)0x0) {
    util__SharedPtr_L_struct_UIWidget_G____vector_deleting_destructor
              ((SharedPtr_L_struct_UIWidget_G_ *)this->_pad_0x0_0,3);
  }
  this->_pad_0x0_0 = 0;
  this->_pad_0x0_0 = (int)((void *)(0x00919488u));
  if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)this->_pad_0x0_0);
  }
  UIAttributes___UIAttributes((UIAttributes *)&this->_pad_0x0_0);
  if ((param_1 & 1) != 0) {
    operator_delete(this,0x2b8);
  }
  return this;
}


//==== 00781570 781570_BurnInfoCustomWidget__GetBurnStatusBarText ====
// decompiled by BatchDecomp @ 781570 name=GetBurnStatusBarText conv=__thiscall body=217

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class Str_L_char_G_ __thiscall BurnInfoCustomWidget__GetBurnStatusBarText(void)const
    */

Str_L_char_G_ * __thiscall
BurnInfoCustomWidget__GetBurnStatusBarText(BurnInfoCustomWidget *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xfffffd30;
  Str_L_char_G_ SVar1;
  Itinerary *this_00;
  Str_L_char_G_ *pSVar2;
  int unaff_EDI;
  char *in_stack_fffffd30;
  int iVar3;
  char *pcVar4;
  Itinerary local_2bc[2];
  Str_L_char_G_ local_24;
  Str_L_char_G_ local_18;
  double local_c;
  
  this_00 = (Itinerary *)GetMission(this);
  if (*(char *)&this_00[2].FinalOrbit.Data.Elements.SemiMajorAxis_km == '\0') {
    in_stack_fffffd30 = (char *)0x17;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_c = Itinerary__GetConsolidatedNodeBurnLength_km__s(this_00,&this->Node);
  Itinerary_Itinerary__o3(local_2bc);
  pcVar4 = "NodeDeltaV_km__s";
  iVar3 = 0x7815d9;
  util__Str_char___Str_char__o5(&local_24,"NodeDeltaV_km__s");
  GetUnitsOfType((Str_L_char_G_ *)&stack0xfffffd30,&local_24);
  SVar1.Capacity = (int)pcVar4;
  SVar1.Data = (char *)iVar3;
  SVar1.Length = unaff_EDI;
  pSVar2 = Print(&local_18,(double)CONCAT44(in_stack_fffffd30,(int)((ulonglong)local_c >> 0x20)),
                 SVar1);
  if (pSVar2->Capacity < 1) {
    pcVar4 = "";
  }
  else {
    pcVar4 = pSVar2->Data;
  }
  util__Str_char___Str_char__o5(__return_storage_ptr__,pcVar4);
  if (local_18.Data != (char *)0x0) {
    operator_delete__(local_18.Data);
    local_18.Data = (char *)0x0;
  }
  if (local_24.Data != (char *)0x0) {
    operator_delete__(local_24.Data);
  }
  return __return_storage_ptr__;
}


//==== 00781650 781650_HUDItineraryInfoPanel__GetBurnTooltip ====
// decompiled by BatchDecomp @ 781650 name=GetBurnTooltip conv=__thiscall body=170

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: class Str_L_char_G_ __thiscall HUDItineraryInfoPanel__GetBurnTooltip(struct
   ItineraryNode)const  */

Str_L_char_G_ * __thiscall
HUDItineraryInfoPanel__GetBurnTooltip(HUDItineraryInfoPanel *this,Str_L_char_G_ *__return_storage_ptr__,ItineraryNode param_1)

{
  undefined4 stack0x00000008;
  Itinerary *this_00;
  Itinerary local_29c[2];
  
  this_00 = (Itinerary *)GetMission(this);
  if (*(char *)&this_00[2].FinalOrbit.Data.Elements.SemiMajorAxis_km == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  Itinerary__GetConsolidatedNodeStatus(this_00,__return_storage_ptr__,(ItineraryNode *)&stack0x00000008);
  Itinerary_Itinerary__o3(local_29c);
  if (param_1.CachedNearestOrbiter.Pointer != (OrbiterInterface *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)param_1.CachedNearestOrbiter.Pointer);
  }
  if (param_1.CachedNearestFleet.Pointer != (Fleet *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)param_1.CachedNearestFleet.Pointer);
  }
  if (param_1.CachedNearestBody.Pointer != (CelestialObject *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)param_1.CachedNearestBody.Pointer);
  }
  if (param_1.CachedGravityBody.Pointer != (CelestialObject *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)param_1.CachedGravityBody.Pointer);
  }
  if (param_1.Parent.Pointer != (Fleet *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)param_1.Parent.Pointer);
  }
  return __return_storage_ptr__;
}


//==== 0078c300 78c300_util__MakeTuple_class_util__WeakPtr_struct_OrbiterInterface__struct_ItineraryNode_ ====
// decompiled by BatchDecomp @ 78c300 name=MakeTuple_L_class_util__WeakPtr_L_struct_OrbiterInterface_G_,struct_ItineraryNode_G_ conv=__cdecl body=245

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* struct util__tuple2_L_class_util__WeakPtr_L_struct_OrbiterInterface_G__struct_ItineraryNode_G __cdecl
   util_MakeTuple_class_util_WeakPtr_struct_OrbiterInterface_struct_ItineraryNode(class
   util__WeakPtr_L_struct_OrbiterInterface_G,struct ItineraryNode) */

undefined4 * __cdecl
util_MakeTuple_class_util_WeakPtr_struct_OrbiterInterface_struct_ItineraryNode(undefined4 *param_1,undefined4 param_2,ReferenceController *param_3,undefined4 param_4,
          ReferenceController *param_5)

{
  ReferenceController *in_stack_00000104;
  ReferenceController *in_stack_0000010c;
  ReferenceController *in_stack_00000114;
  ReferenceController *in_stack_0000013c;
  ItineraryNode local_154;
  
  if (param_3 != (ReferenceController *)0x0) {
    ReferenceController__AddWeakReference(param_3);
  }
  ItineraryNode__ItineraryNode(&local_154,(ItineraryNode *)&param_4);
  *param_1 = param_2;
  param_1[1] = param_3;
  if (param_3 != (ReferenceController *)0x0) {
    ReferenceController__AddWeakReference(param_3);
  }
  ItineraryNode__ItineraryNode((ItineraryNode *)(param_1 + 2),&local_154);
  if (param_3 != (ReferenceController *)0x0) {
    ReferenceController__ReleaseWeakReference(param_3);
  }
  if (local_154.CachedNearestOrbiter.Controller != (ReferenceController *)0x0) {
    ReferenceController__ReleaseWeakReference(local_154.CachedNearestOrbiter.Controller);
  }
  if (local_154.CachedNearestFleet.Controller != (ReferenceController *)0x0) {
    ReferenceController__ReleaseWeakReference(local_154.CachedNearestFleet.Controller);
  }
  if (local_154.CachedNearestBody.Controller != (ReferenceController *)0x0) {
    ReferenceController__ReleaseWeakReference(local_154.CachedNearestBody.Controller);
  }
  if (local_154.CachedGravityBody.Controller != (ReferenceController *)0x0) {
    ReferenceController__ReleaseWeakReference(local_154.CachedGravityBody.Controller);
  }
  if (local_154.Parent.Controller != (ReferenceController *)0x0) {
    ReferenceController__ReleaseWeakReference(local_154.Parent.Controller);
  }
  if (param_3 != (ReferenceController *)0x0) {
    ReferenceController__ReleaseWeakReference(param_3);
  }
  if (in_stack_0000013c != (ReferenceController *)0x0) {
    ReferenceController__ReleaseWeakReference(in_stack_0000013c);
  }
  if (in_stack_00000114 != (ReferenceController *)0x0) {
    ReferenceController__ReleaseWeakReference(in_stack_00000114);
  }
  if (in_stack_0000010c != (ReferenceController *)0x0) {
    ReferenceController__ReleaseWeakReference(in_stack_0000010c);
  }
  if (in_stack_00000104 != (ReferenceController *)0x0) {
    ReferenceController__ReleaseWeakReference(in_stack_00000104);
  }
  if (param_5 != (ReferenceController *)0x0) {
    ReferenceController__ReleaseWeakReference(param_5);
  }
  return param_1;
}


//==== 0078f4d0 78f4d0_ItineraryMarker___scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 78f4d0 name=`scalar_deleting_destructor' conv=__thiscall body=199

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall ItineraryMarker::`scalar deleting destructor'(unsigned int) */

void * __thiscall ItineraryMarker___scalar_deleting_destructor_(ItineraryMarker *this,uint param_1)

{
  ReferenceController *pRVar1;
  
  pRVar1 = (this->NodeToMark).CachedNearestOrbiter.Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  pRVar1 = (this->NodeToMark).CachedNearestFleet.Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  pRVar1 = (this->NodeToMark).CachedNearestBody.Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  pRVar1 = (this->NodeToMark).CachedGravityBody.Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  pRVar1 = (this->NodeToMark).Parent.Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  pRVar1 = (this->ParentItineraryUI).Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  this->_pad_0x0_0 = (int)((void *)(0x0091d1e0u));
  this->_pad_0x0_0 = (int)((void *)(0x0091d1bcu));
  if ((SharedPtr_L_struct_UIWidget_G_ *)this->_pad_0x0_0 != (SharedPtr_L_struct_UIWidget_G_ *)0x0) {
    util__SharedPtr_L_struct_UIWidget_G____vector_deleting_destructor
              ((SharedPtr_L_struct_UIWidget_G_ *)this->_pad_0x0_0,3);
  }
  this->_pad_0x0_0 = 0;
  this->_pad_0x0_0 = (int)((void *)(0x00919488u));
  if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)this->_pad_0x0_0);
  }
  UIAttributes___UIAttributes((UIAttributes *)&this->_pad_0x0_0);
  if ((param_1 & 1) != 0) {
    operator_delete(this,0x308);
  }
  return this;
}


//==== 0078f5a0 78f5a0_ItineraryNodeUI___scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 78f5a0 name=`scalar_deleting_destructor' conv=__thiscall body=293

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall ItineraryNodeUI::`scalar deleting destructor'(unsigned int) */

void * __thiscall ItineraryNodeUI___scalar_deleting_destructor_(ItineraryNodeUI *this,uint param_1)

{
  ReferenceController *this_00;
  PathNode *pPVar1;
  pmf_bd63ec29 *ppVar2;
  
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&this->ChildMarkers);
  this_00 = (this->ParentFleet).Controller;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  NodeMouseOver__dtor(&(this->GetMouseOverNode_MemoizedValue).Data);
  pPVar1 = (this->GetSmoothedProjectedPath_MemoizedValue).Data.Data;
  (this->GetSmoothedProjectedPath_MemoizedValue).Data._pad_0x0_0 =
       (int)((void *)(0x0093b36cu));
  if (pPVar1 != (PathNode *)0x0) {
    operator_delete__(pPVar1);
  }
  (this->GetSmoothedProjectedPath_MemoizedValue).Data.Data = (PathNode *)0x0;
  (this->GetSmoothedProjectedPath_MemoizedValue).Data._pad_0x0_0 =
       (int)((void *)(0x00919488u));
  pPVar1 = (this->GetSmoothedPath_MemoizedValue).Data.Data;
  (this->GetSmoothedPath_MemoizedValue).Data._pad_0x0_0 =
       (int)((void *)(0x0093b36cu));
  if (pPVar1 != (PathNode *)0x0) {
    operator_delete__(pPVar1);
  }
  (this->GetSmoothedPath_MemoizedValue).Data.Data = (PathNode *)0x0;
  (this->GetSmoothedPath_MemoizedValue).Data._pad_0x0_0 =
       (int)((void *)(0x00919488u));
  ppVar2 = (this->ItineraryNodeUIMemoizationHandlerInstance).ResetFunctions.Data;
  (this->ItineraryNodeUIMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 =
       (int)((void *)(0x009194a4u));
  if (ppVar2 != (pmf_bd63ec29 *)0x0) {
    operator_delete__(ppVar2);
  }
  (this->ItineraryNodeUIMemoizationHandlerInstance).ResetFunctions.Data = (pmf_bd63ec29 *)0x0;
  (this->ItineraryNodeUIMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 =
       (int)((void *)(0x00919488u));
  this->_pad_0x0_0 = (int)((void *)(0x0091d1e0u));
  this->_pad_0x0_0 = (int)((void *)(0x0091d1bcu));
  if ((SharedPtr_L_struct_UIWidget_G_ *)this->_pad_0x0_0 != (SharedPtr_L_struct_UIWidget_G_ *)0x0) {
    util__SharedPtr_L_struct_UIWidget_G____vector_deleting_destructor
              ((SharedPtr_L_struct_UIWidget_G_ *)this->_pad_0x0_0,3);
  }
  this->_pad_0x0_0 = 0;
  this->_pad_0x0_0 = (int)((void *)(0x00919488u));
  if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)this->_pad_0x0_0);
  }
  UIAttributes___UIAttributes((UIAttributes *)&this->_pad_0x0_0);
  if ((param_1 & 1) != 0) {
    operator_delete(this,0x4c0);
  }
  return this;
}

