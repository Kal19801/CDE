// pilot_sweep_sweep04.c - assembled by scripts/sweep_assemble.py (r19)
// reuses fam8_assemble fix passes (zip oracle/in-batch protos/vft channel/data closure)
/* ---- r20 incomplete-type forward decls (pointer-position only) ---- */
typedef struct void___thiscall_UIListBox_L_struct_ActorDropdownAction_G___OnChangedSearchString void___thiscall_UIListBox_L_struct_ActorDropdownAction_G___OnChangedSearchString;
typedef struct void___thiscall_UIListBox_L_struct_ItineraryNode_G___OnChangedSearchString void___thiscall_UIListBox_L_struct_ItineraryNode_G___OnChangedSearchString;
#include "port_prelude.h"
#include "cde_win32_compat.h"
#include "cde_types_r20.h"
typedef union {
  struct {
    undefined1 _1_3_[3];
  };
  undefined1 raw[32];
} slice_view;
/* ---- r21 hdr-conflict renames (decl stays OLD for game TUs; pilot impl+calls = NEW; linker aliases OLD -> NEW) ---- */
#undef ModuleDesignManager__RefreshCurrentModule
#define ModuleDesignManager__RefreshCurrentModule ModuleDesignManager__RefreshCurrentModule__r20
#undef ShipGroupUI__AnyShipsHaveDeltaV
#define ShipGroupUI__AnyShipsHaveDeltaV ShipGroupUI__AnyShipsHaveDeltaV__r20
#undef ShipGroupUI__ShowButtonShipIcon
#define ShipGroupUI__ShowButtonShipIcon ShipGroupUI__ShowButtonShipIcon__r20
#undef WorldObject__IsValid
#define WorldObject__IsValid WorldObject__IsValid__r20
/* ---- externs: stub-oracle names (K&R; ret types by call site) ---- */
extern int NodeMouseOver__dtor(); /* K&R stub; ret by call site */
extern int UIListBox_struct_ActorDropdownAction_OnChangedSearchString(); /* K&R stub; ret by call site */
extern int UIListBox_struct_ItineraryNode_OnChangedSearchString(); /* K&R stub; ret by call site */
extern int util__DelegateFactory_class_ModuleDesignManager_void___MethodCaller__public__void___thiscall_ModuleDesignManager__RefreshCurrentModule_void__(); /* K&R stub; ret by call site */
extern int util__DelegateFactory_class_ScenarioEditor_void___MethodCaller__private__void___thiscall_ScenarioEditor__BuildScenarioEditorScreen_void__(); /* K&R stub; ret by call site */
extern int util__DelegateFactory_class_StrategicManager_bool___MethodCallerConst__public__bool___thiscall_StrategicManager__PlayerIsVictorious_void_const__(); /* K&R stub; ret by call site */
extern int util__DelegateFactory_struct_HUDFleetInfoPanel_bool___MethodCallerConst__private__bool___thiscall_HUDFleetInfoPanel__GetDeltaVWidgetVisible_void_const__(); /* K&R stub; ret by call site */
extern int util__DelegateFactory_struct_HUDFleetInfoPanel_bool___MethodCallerConst__private__bool___thiscall_HUDFleetInfoPanel__IsFleetObject_void_const__(); /* K&R stub; ret by call site */
extern int util__DelegateFactory_struct_HUDFleetInfoPanel_bool___MethodCallerConst__public__bool___thiscall_HUDFleetInfoPanel__IsTargetObjectValid_void_const__(); /* K&R stub; ret by call site */
extern int util__DelegateFactory_struct_HUDFleetInfoPanel_void___MethodCallerConst__private__void___thiscall_HUDFleetInfoPanel__RenderIcon_void_const__(); /* K&R stub; ret by call site */
extern int util__DelegateFactory_struct_HUDItineraryInfoPanel_void___MethodCaller__private__void___thiscall_HUDItineraryInfoPanel__BeginOrCancelItinerary_void__(); /* K&R stub; ret by call site */
extern int util__DelegateFactory_struct_HUDStrategic_bool___MethodCallerConst__private__bool___thiscall_HUDStrategic__CanManipulateButtons_void_const__(); /* K&R stub; ret by call site */
extern int util__DelegateFactory_struct_HUDTactical_bool___MethodCallerConst__private__bool___thiscall_HUDTactical__CanSelectAllAllies_void_const__(); /* K&R stub; ret by call site */
extern int util__DelegateFactory_struct_HUDTactical_bool___MethodCallerConst__private__bool___thiscall_HUDTactical__CanSelectAllEnemies_void_const__(); /* K&R stub; ret by call site */
extern int util__DelegateFactory_struct_HUDTactical_bool___MethodCallerConst__private__bool___thiscall_HUDTactical__IsChangeAllOrdersButtonEnabled_void_const__(); /* K&R stub; ret by call site */
extern int util__DelegateFactory_struct_HUDTactical_bool___MethodCallerConst__private__bool___thiscall_HUDTactical__IsMarqueeSelectVisible_void_const__(); /* K&R stub; ret by call site */
extern int util__DelegateFactory_struct_MinimapRangeWidget_bool___MethodCallerConst__private__bool___thiscall_MinimapRangeWidget__ShouldShow_void_const__(); /* K&R stub; ret by call site */
extern int util__DelegateFactory_struct_ModuleUI_bool___MethodCallerConst__private__bool___thiscall_ModuleUI__GetAttackAngleIndicatorVisible_void_const__(); /* K&R stub; ret by call site */
extern int util__DelegateFactory_struct_ModuleUI_bool___MethodCallerConst__private__bool___thiscall_ModuleUI__GetAttackRangeIndicatorVisible_void_const__(); /* K&R stub; ret by call site */
extern int util__DelegateFactory_struct_ModuleUI_bool___MethodCallerConst__private__bool___thiscall_ModuleUI__GetCommandFailureIndicatorVisible_void_const__(); /* K&R stub; ret by call site */
extern int util__DelegateFactory_struct_ModuleUI_bool___MethodCallerConst__private__bool___thiscall_ModuleUI__GetHeatIndicatorVisible_void_const__(); /* K&R stub; ret by call site */
extern int util__DelegateFactory_struct_ModuleUI_bool___MethodCallerConst__private__bool___thiscall_ModuleUI__GetOutOfAmmoIndicatorVisible_void_const__(); /* K&R stub; ret by call site */
extern int util__DelegateFactory_struct_ModuleUI_bool___MethodCallerConst__private__bool___thiscall_ModuleUI__GetPowerIndicatorVisible_void_const__(); /* K&R stub; ret by call site */
extern int util__DelegateFactory_struct_ShipGroupUI_bool___MethodCallerConst__private__bool___thiscall_ShipGroupUI__GetDeltaVWidgetVisible_void_const__(); /* K&R stub; ret by call site */
extern int util__DelegateFactory_struct_ShipGroupUI_bool___MethodCallerConst__private__bool___thiscall_ShipGroupUI__IsChangeOrderButtonEnabled_void_const__(); /* K&R stub; ret by call site */
extern int util__DelegateFactory_struct_ShipGroupUI_bool___MethodCallerConst__private__bool___thiscall_ShipGroupUI__ShowButtonShipIcon_void_const__(); /* K&R stub; ret by call site */
extern int util__DelegateFactory_struct_ShipGroupUI_void_struct_InputModifiers___MethodCaller__private__void___thiscall_ShipGroupUI__OnClick_struct_InputModifiers__(); /* K&R stub; ret by call site */
extern int util__DelegateFactory_struct_SpacecraftButton_bool___MethodCallerConst__private__bool___thiscall_SpacecraftButton__IsCraftOnScreen_void_const__(); /* K&R stub; ret by call site */
extern int util__DelegateFactory_struct_SpacecraftButton_bool___MethodCallerConst__private__bool___thiscall_SpacecraftButton__IsNotSolelySelected_void_const__(); /* K&R stub; ret by call site */
extern int util__DelegateFactory_struct_SpacecraftCompartmentUI_void___MethodCaller__private__void___thiscall_SpacecraftCompartmentUI__OnSelectionNameChanged_void__(); /* K&R stub; ret by call site */
extern int util__DelegateFactory_struct_UIShipInfo_double___MethodCallerConst__private__double___thiscall_UIShipInfo__GetMaxHeatSignature_W_void_const__(); /* K&R stub; ret by call site */
extern int util__Delegate_void___MethodCaller_struct_UIListBox_struct_ActorDropdownAction___private__void___thiscall_UIListBox_struct_ActorDropdownAction___OnChangedSearchString_void__(); /* K&R stub; ret by call site */
extern int util__Delegate_void___MethodCaller_struct_UIListBox_struct_ItineraryNode___private__void___thiscall_UIListBox_struct_ItineraryNode___OnChangedSearchString_void__(); /* K&R stub; ret by call site */

//==== 00004d7cf0 004d7cf0_MethodCallerConst__public__bool___thiscall_StrategicManager__PlayerIsVictorious_void_const__ ====
// decompiled by BatchDecomp @ 004d7cf0 name=MethodCallerConst<&public:_bool___thiscall_StrategicManager__PlayerIsVictorious(void)const_> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static bool __cdecl util__DelegateFactory_class_StrategicManager_bool___MethodCallerConst__public__bool___thiscall_StrategicManager__PlayerIsVictorious_void_const__(void const * const) */

bool __cdecl
util__DelegateFactory_L_class_StrategicManager_bool_G___MethodCallerConst_L__public__bool___thiscall_StrategicManager__PlayerIsVictorious_void_const__G
          (void *param_1)

{
  bool bVar1;
  
  bVar1 = StrategicManager__PlayerIsVictorious((StrategicManager *)param_1);
  return bVar1;
}


//==== 0000577e00 00577e00_MethodCaller__public__void___thiscall_ModuleDesignManager__RefreshCurrentModule_void__ ====
// decompiled by BatchDecomp @ 00577e00 name=MethodCaller<&public:_void___thiscall_ModuleDesignManager__RefreshCurrentModule(void)> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_class_ModuleDesignManager_void___MethodCaller__public__void___thiscall_ModuleDesignManager__RefreshCurrentModule_void__(void *) */

void __cdecl
util__DelegateFactory_L_class_ModuleDesignManager_void_G___MethodCaller_L__public__void___thiscall_ModuleDesignManager__RefreshCurrentModule_void__G
          (void *param_1)

{
  ModuleDesignManager__RefreshCurrentModule((ModuleDesignManager *)param_1);
  return;
}


//==== 00006b1410 006b1410_MethodCallerConst__private__double___thiscall_UIShipInfo__GetMaxHeatSignature_W_void_const__ ====
// decompiled by BatchDecomp @ 006b1410 name=MethodCallerConst<&private:_double___thiscall_UIShipInfo__GetMaxHeatSignature_W(void)const_> conv=__cdecl body=54

/* public: static double __cdecl util__DelegateFactory_struct_UIShipInfo_double___MethodCallerConst__private__double___thiscall_UIShipInfo__GetMaxHeatSignature_W_void_const__(void const * const) */

double __cdecl
util__DelegateFactory_L_struct_UIShipInfo_double_G___MethodCallerConst_L__private__double___thiscall_UIShipInfo__GetMaxHeatSignature_W_void_const__G
          (void *param_1)

{
  CraftBlueprint *this;
  double dVar1;
  
  if ((*(int *)((int)param_1 + 0x168) != 0) && (*(code **)((int)param_1 + 0x16c) != (code *)0x0)) {
    this = (CraftBlueprint *)(**(code **)((int)param_1 + 0x16c))(*(int *)((int)param_1 + 0x168));
    dVar1 = CraftBlueprint__GetMaxHeatSignature_W(this);
    return dVar1;
  }
  dVar1 = CraftBlueprint__GetMaxHeatSignature_W(*(CraftBlueprint **)((int)param_1 + 0x170));
  return dVar1;
}


//==== 00006eb5d0 006eb5d0_MethodCaller__private__void___thiscall_ScenarioEditor__BuildScenarioEditorScreen_void__ ====
// decompiled by BatchDecomp @ 006eb5d0 name=MethodCaller<&private:_void___thiscall_ScenarioEditor__BuildScenarioEditorScreen(void)> conv=__cdecl body=12

/* public: static void __cdecl util__DelegateFactory_class_ScenarioEditor_void___MethodCaller__private__void___thiscall_ScenarioEditor__BuildScenarioEditorScreen_void__(void *) */

void __cdecl
util__DelegateFactory_L_class_ScenarioEditor_void_G___MethodCaller_L__private__void___thiscall_ScenarioEditor__BuildScenarioEditorScreen_void__G
          (void *param_1)

{
  ScenarioEditor__BuildScenarioEditorScreen((ScenarioEditor *)param_1);
  return;
}


//==== 000077a080 0077a080_MethodCaller__private__void___thiscall_HUDItineraryInfoPanel__BeginOrCancelItinerary_void__ ====
// decompiled by BatchDecomp @ 0077a080 name=MethodCaller<&private:_void___thiscall_HUDItineraryInfoPanel__BeginOrCancelItinerary(void)> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_struct_HUDItineraryInfoPanel_void___MethodCaller__private__void___thiscall_HUDItineraryInfoPanel__BeginOrCancelItinerary_void__(void *) */

void __cdecl
util__DelegateFactory_L_struct_HUDItineraryInfoPanel_void_G___MethodCaller_L__private__void___thiscall_HUDItineraryInfoPanel__BeginOrCancelItinerary_void__G
          (void *param_1)

{
  HUDItineraryInfoPanel__BeginOrCancelItinerary((HUDItineraryInfoPanel *)param_1);
  return;
}


//==== 000077a570 0077a570_MethodCallerConst__private__bool___thiscall_HUDFleetInfoPanel__GetDeltaVWidgetVisible_void_const__ ====
// decompiled by BatchDecomp @ 0077a570 name=MethodCallerConst<&private:_bool___thiscall_HUDFleetInfoPanel__GetDeltaVWidgetVisible(void)const_> conv=__cdecl body=12

/* public: static bool __cdecl util__DelegateFactory_struct_HUDFleetInfoPanel_bool___MethodCallerConst__private__bool___thiscall_HUDFleetInfoPanel__GetDeltaVWidgetVisible_void_const__(void const * const) */

bool __cdecl
util__DelegateFactory_L_struct_HUDFleetInfoPanel_bool_G___MethodCallerConst_L__private__bool___thiscall_HUDFleetInfoPanel__GetDeltaVWidgetVisible_void_const__G
          (void *param_1)

{
  bool bVar1;
  
  bVar1 = HUDFleetInfoPanel__GetDeltaVWidgetVisible((HUDFleetInfoPanel *)param_1);
  return bVar1;
}


//==== 000077a830 0077a830_MethodCallerConst__private__bool___thiscall_HUDFleetInfoPanel__IsFleetObject_void_const__ ====
// decompiled by BatchDecomp @ 0077a830 name=MethodCallerConst<&private:_bool___thiscall_HUDFleetInfoPanel__IsFleetObject(void)const_> conv=__cdecl body=74

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static bool __cdecl util__DelegateFactory_struct_HUDFleetInfoPanel_bool___MethodCallerConst__private__bool___thiscall_HUDFleetInfoPanel__IsFleetObject_void_const__(void const * const) */

bool __cdecl
util__DelegateFactory_L_struct_HUDFleetInfoPanel_bool_G___MethodCallerConst_L__private__bool___thiscall_HUDFleetInfoPanel__IsFleetObject_void_const__G
          (void *param_1)

{
  bool bVar1;
  WorldObject local_2bc;
  
  StrategicManager__GetSelectedObject(*(StrategicManager **)((int)param_1 + 8),&local_2bc);
  bVar1 = WorldObject__IsFleet(&local_2bc);
  NodeMouseOver__dtor(&local_2bc.Node);
  if (local_2bc.Object.Controller != (ReferenceController *)0x0) {
    ReferenceController__ReleaseWeakReference(local_2bc.Object.Controller);
  }
  return bVar1;
}


//==== 000077a8f0 0077a8f0_MethodCallerConst__public__bool___thiscall_HUDFleetInfoPanel__IsTargetObjectValid_void_const__ ====
// decompiled by BatchDecomp @ 0077a8f0 name=MethodCallerConst<&public:_bool___thiscall_HUDFleetInfoPanel__IsTargetObjectValid(void)const_> conv=__cdecl body=74

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static bool __cdecl util__DelegateFactory_struct_HUDFleetInfoPanel_bool___MethodCallerConst__public__bool___thiscall_HUDFleetInfoPanel__IsTargetObjectValid_void_const__(void const * const) */

bool __cdecl
util__DelegateFactory_L_struct_HUDFleetInfoPanel_bool_G___MethodCallerConst_L__public__bool___thiscall_HUDFleetInfoPanel__IsTargetObjectValid_void_const__G
          (void *param_1)

{
  bool bVar1;
  WorldObject local_2bc;
  
  StrategicManager__GetSelectedObject(*(StrategicManager **)((int)param_1 + 8),&local_2bc);
  bVar1 = WorldObject__IsValid(&local_2bc);
  NodeMouseOver__dtor(&local_2bc.Node);
  if (local_2bc.Object.Controller != (ReferenceController *)0x0) {
    ReferenceController__ReleaseWeakReference(local_2bc.Object.Controller);
  }
  return bVar1;
}


//==== 000077a940 0077a940_MethodCallerConst__private__void___thiscall_HUDFleetInfoPanel__RenderIcon_void_const__ ====
// decompiled by BatchDecomp @ 0077a940 name=MethodCallerConst<&private:_void___thiscall_HUDFleetInfoPanel__RenderIcon(void)const_> conv=__cdecl body=12

/* public: static void __cdecl util__DelegateFactory_struct_HUDFleetInfoPanel_void___MethodCallerConst__private__void___thiscall_HUDFleetInfoPanel__RenderIcon_void_const__(void const * const) */

void __cdecl
util__DelegateFactory_L_struct_HUDFleetInfoPanel_void_G___MethodCallerConst_L__private__void___thiscall_HUDFleetInfoPanel__RenderIcon_void_const__G
          (void *param_1)

{
  HUDFleetInfoPanel__RenderIcon((HUDFleetInfoPanel *)param_1);
  return;
}


//==== 00007a1390 007a1390_MethodCallerConst__private__bool___thiscall_HUDStrategic__CanManipulateButtons_void_const__ ====
// decompiled by BatchDecomp @ 007a1390 name=MethodCallerConst<&private:_bool___thiscall_HUDStrategic__CanManipulateButtons(void)const_> conv=__cdecl body=15

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static bool __cdecl util__DelegateFactory_struct_HUDStrategic_bool___MethodCallerConst__private__bool___thiscall_HUDStrategic__CanManipulateButtons_void_const__(void const * const) */

bool __cdecl
util__DelegateFactory_L_struct_HUDStrategic_bool_G___MethodCallerConst_L__private__bool___thiscall_HUDStrategic__CanManipulateButtons_void_const__G
          (void *param_1)

{
  bool bVar1;
  
  bVar1 = StrategicManager__IsRunningTurnAllowed(*(StrategicManager **)((int)param_1 + 8));
  return bVar1;
}


//==== 0000807160 00807160_MethodCallerConst__private__bool___thiscall_SpacecraftButton__IsCraftOnScreen_void_const__ ====
// decompiled by BatchDecomp @ 00807160 name=MethodCallerConst<&private:_bool___thiscall_SpacecraftButton__IsCraftOnScreen(void)const_> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static bool __cdecl util__DelegateFactory_struct_SpacecraftButton_bool___MethodCallerConst__private__bool___thiscall_SpacecraftButton__IsCraftOnScreen_void_const__(void const * const) */

bool __cdecl
util__DelegateFactory_L_struct_SpacecraftButton_bool_G___MethodCallerConst_L__private__bool___thiscall_SpacecraftButton__IsCraftOnScreen_void_const__G
          (void *param_1)

{
  bool bVar1;
  
  bVar1 = SpacecraftButton__IsCraftOnScreen((SpacecraftButton *)param_1);
  return bVar1;
}


//==== 0000807170 00807170_MethodCallerConst__private__bool___thiscall_SpacecraftButton__IsNotSolelySelected_void_const__ ====
// decompiled by BatchDecomp @ 00807170 name=MethodCallerConst<&private:_bool___thiscall_SpacecraftButton__IsNotSolelySelected(void)const_> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static bool __cdecl util__DelegateFactory_struct_SpacecraftButton_bool___MethodCallerConst__private__bool___thiscall_SpacecraftButton__IsNotSolelySelected_void_const__(void const * const) */

bool __cdecl
util__DelegateFactory_L_struct_SpacecraftButton_bool_G___MethodCallerConst_L__private__bool___thiscall_SpacecraftButton__IsNotSolelySelected_void_const__G
          (void *param_1)

{
  bool bVar1;
  
  bVar1 = SpacecraftButton__IsNotSolelySelected((SpacecraftButton *)param_1);
  return bVar1;
}


//==== 00008096c0 008096c0_MethodCallerConst__private__bool___thiscall_MinimapRangeWidget__ShouldShow_void_const__ ====
// decompiled by BatchDecomp @ 008096c0 name=MethodCallerConst<&private:_bool___thiscall_MinimapRangeWidget__ShouldShow(void)const_> conv=__cdecl body=12

/* public: static bool __cdecl util__DelegateFactory_struct_MinimapRangeWidget_bool___MethodCallerConst__private__bool___thiscall_MinimapRangeWidget__ShouldShow_void_const__(void const * const) */

bool __cdecl
util__DelegateFactory_L_struct_MinimapRangeWidget_bool_G___MethodCallerConst_L__private__bool___thiscall_MinimapRangeWidget__ShouldShow_void_const__G
          (void *param_1)

{
  bool bVar1;
  
  bVar1 = MinimapRangeWidget__ShouldShow((MinimapRangeWidget *)param_1);
  return bVar1;
}


//==== 000080f080 0080f080_MethodCaller__private__void___thiscall_SpacecraftCompartmentUI__OnSelectionNameChanged_void__ ====
// decompiled by BatchDecomp @ 0080f080 name=MethodCaller<&private:_void___thiscall_SpacecraftCompartmentUI__OnSelectionNameChanged(void)> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_struct_SpacecraftCompartmentUI_void___MethodCaller__private__void___thiscall_SpacecraftCompartmentUI__OnSelectionNameChanged_void__(void *) */

void __cdecl
util__DelegateFactory_L_struct_SpacecraftCompartmentUI_void_G___MethodCaller_L__private__void___thiscall_SpacecraftCompartmentUI__OnSelectionNameChanged_void__G
          (void *param_1)

{
  SpacecraftCompartmentUI__OnSelectionNameChanged((SpacecraftCompartmentUI *)param_1);
  return;
}


//==== 000080f120 0080f120_MethodCallerConst__private__bool___thiscall_ModuleUI__GetAttackAngleIndicatorVisible_void_const__ ====
// decompiled by BatchDecomp @ 0080f120 name=MethodCallerConst<&private:_bool___thiscall_ModuleUI__GetAttackAngleIndicatorVisible(void)const_> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static bool __cdecl util__DelegateFactory_struct_ModuleUI_bool___MethodCallerConst__private__bool___thiscall_ModuleUI__GetAttackAngleIndicatorVisible_void_const__(void const * const) */

bool __cdecl
util__DelegateFactory_L_struct_ModuleUI_bool_G___MethodCallerConst_L__private__bool___thiscall_ModuleUI__GetAttackAngleIndicatorVisible_void_const__G
          (void *param_1)

{
  bool bVar1;
  
  bVar1 = ModuleUI__GetAttackAngleIndicatorVisible((ModuleUI *)param_1);
  return bVar1;
}


//==== 000080f130 0080f130_MethodCallerConst__private__bool___thiscall_ModuleUI__GetAttackRangeIndicatorVisible_void_const__ ====
// decompiled by BatchDecomp @ 0080f130 name=MethodCallerConst<&private:_bool___thiscall_ModuleUI__GetAttackRangeIndicatorVisible(void)const_> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static bool __cdecl util__DelegateFactory_struct_ModuleUI_bool___MethodCallerConst__private__bool___thiscall_ModuleUI__GetAttackRangeIndicatorVisible_void_const__(void const * const) */

bool __cdecl
util__DelegateFactory_L_struct_ModuleUI_bool_G___MethodCallerConst_L__private__bool___thiscall_ModuleUI__GetAttackRangeIndicatorVisible_void_const__G
          (void *param_1)

{
  bool bVar1;
  
  bVar1 = ModuleUI__GetAttackRangeIndicatorVisible((ModuleUI *)param_1);
  return bVar1;
}


//==== 000080f140 0080f140_MethodCallerConst__private__bool___thiscall_ModuleUI__GetCommandFailureIndicatorVisible_void_const__ ====
// decompiled by BatchDecomp @ 0080f140 name=MethodCallerConst<&private:_bool___thiscall_ModuleUI__GetCommandFailureIndicatorVisible(void)const_> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static bool __cdecl util__DelegateFactory_struct_ModuleUI_bool___MethodCallerConst__private__bool___thiscall_ModuleUI__GetCommandFailureIndicatorVisible_void_const__(void const * const) */

bool __cdecl
util__DelegateFactory_L_struct_ModuleUI_bool_G___MethodCallerConst_L__private__bool___thiscall_ModuleUI__GetCommandFailureIndicatorVisible_void_const__G
          (void *param_1)

{
  bool bVar1;
  
  bVar1 = ModuleUI__GetCommandFailureIndicatorVisible((ModuleUI *)param_1);
  return bVar1;
}


//==== 000080f1d0 0080f1d0_MethodCallerConst__private__bool___thiscall_ModuleUI__GetHeatIndicatorVisible_void_const__ ====
// decompiled by BatchDecomp @ 0080f1d0 name=MethodCallerConst<&private:_bool___thiscall_ModuleUI__GetHeatIndicatorVisible(void)const_> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static bool __cdecl util__DelegateFactory_struct_ModuleUI_bool___MethodCallerConst__private__bool___thiscall_ModuleUI__GetHeatIndicatorVisible_void_const__(void const * const) */

bool __cdecl
util__DelegateFactory_L_struct_ModuleUI_bool_G___MethodCallerConst_L__private__bool___thiscall_ModuleUI__GetHeatIndicatorVisible_void_const__G
          (void *param_1)

{
  bool bVar1;
  
  bVar1 = ModuleUI__GetHeatIndicatorVisible((ModuleUI *)param_1);
  return bVar1;
}


//==== 000080f320 0080f320_MethodCallerConst__private__bool___thiscall_ModuleUI__GetOutOfAmmoIndicatorVisible_void_const__ ====
// decompiled by BatchDecomp @ 0080f320 name=MethodCallerConst<&private:_bool___thiscall_ModuleUI__GetOutOfAmmoIndicatorVisible(void)const_> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static bool __cdecl util__DelegateFactory_struct_ModuleUI_bool___MethodCallerConst__private__bool___thiscall_ModuleUI__GetOutOfAmmoIndicatorVisible_void_const__(void const * const) */

bool __cdecl
util__DelegateFactory_L_struct_ModuleUI_bool_G___MethodCallerConst_L__private__bool___thiscall_ModuleUI__GetOutOfAmmoIndicatorVisible_void_const__G
          (void *param_1)

{
  bool bVar1;
  
  bVar1 = ModuleUI__GetOutOfAmmoIndicatorVisible((ModuleUI *)param_1);
  return bVar1;
}


//==== 000080f330 0080f330_MethodCallerConst__private__bool___thiscall_ModuleUI__GetPowerIndicatorVisible_void_const__ ====
// decompiled by BatchDecomp @ 0080f330 name=MethodCallerConst<&private:_bool___thiscall_ModuleUI__GetPowerIndicatorVisible(void)const_> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static bool __cdecl util__DelegateFactory_struct_ModuleUI_bool___MethodCallerConst__private__bool___thiscall_ModuleUI__GetPowerIndicatorVisible_void_const__(void const * const) */

bool __cdecl
util__DelegateFactory_L_struct_ModuleUI_bool_G___MethodCallerConst_L__private__bool___thiscall_ModuleUI__GetPowerIndicatorVisible_void_const__G
          (void *param_1)

{
  bool bVar1;
  
  bVar1 = ModuleUI__GetPowerIndicatorVisible((ModuleUI *)param_1);
  return bVar1;
}


//==== 000080f520 0080f520_MethodCallerConst__private__bool___thiscall_ModuleUI__GetVisibility_void_const__ ====
// decompiled by BatchDecomp @ 0080f520 name=MethodCallerConst<&private:_bool___thiscall_ModuleUI__GetVisibility(void)const_> conv=__cdecl body=68

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static bool __cdecl util__DelegateFactory_struct_ModuleUI_bool___MethodCallerConst__private__bool___thiscall_ModuleUI__GetVisibility_void_const__(void const * const) */

bool __cdecl
util__DelegateFactory_struct_ModuleUI_bool___MethodCallerConst__private__bool___thiscall_ModuleUI__GetVisibility_void_const__(void *param_1)

{
  int *piVar1;
  int iVar2;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_14[16];
  
  piVar1 = (int *)ModuleUI__GetCompartments((ModuleUI *)param_1);
  iVar2 = (**(code **)(*(int *)(uintptr_t)piVar1 + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_14);
  if ((iVar2 < 1) && (*(int *)((int)param_1 + 0x1c4) < 1)) {
    return false;
  }
  return true;
}


//==== 000080f570 0080f570_MethodCallerConst__private__bool___thiscall_ModuleUI__HasAnyCompartments_void_const__ ====
// decompiled by BatchDecomp @ 0080f570 name=MethodCallerConst<&private:_bool___thiscall_ModuleUI__HasAnyCompartments(void)const_> conv=__cdecl body=46

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static bool __cdecl util__DelegateFactory_struct_ModuleUI_bool___MethodCallerConst__private__bool___thiscall_ModuleUI__HasAnyCompartments_void_const__(void const * const) */

bool __cdecl
util__DelegateFactory_struct_ModuleUI_bool___MethodCallerConst__private__bool___thiscall_ModuleUI__HasAnyCompartments_void_const__(void *param_1)

{
  int *piVar1;
  int iVar2;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_14[16];
  
  piVar1 = (int *)ModuleUI__GetCompartments((ModuleUI *)param_1);
  iVar2 = (**(code **)(*(int *)(uintptr_t)piVar1 + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_14);
  return 0 < iVar2;
}


//==== 00008256d0 008256d0_MethodCaller__private__void___thiscall_ShipGroupUI__OnClick_struct_InputModifiers__ ====

// decompiled by BatchDecomp @ 008256d0 name=MethodCaller<&private:_void___thiscall_ShipGroupUI__OnClick(struct_InputModifiers)> conv=__cdecl body=80

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_struct_ShipGroupUI_void_struct_InputModifiers___MethodCaller__private__void___thiscall_ShipGroupUI__OnClick_struct_InputModifiers__(void *,struct InputModifiers) */

void __cdecl
util__DelegateFactory_L_struct_ShipGroupUI_void_struct_InputModifiers_G___MethodCaller_L__private__void___thiscall_ShipGroupUI__OnClick_struct_InputModifiers__G
          (void *param_1,InputModifiers param_2)

{
  TacticalManager *this;
  undefined4 uVar1;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *pDVar2;
  uint uVar3;
  undefined1 uVar4;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_2c[16];
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_1c[16];
  uint local_c;
  undefined8 local_8;
  undefined4 uVar5;
  
  local_8 = CONCAT31(((slice_view *)&local_8)->_1_3_,param_2.Shift);
  this = *(TacticalManager **)((int)param_1 + 8);
  local_c = local_c & 0xffffff00;
  uVar3 = local_c;
  uVar5 = local_8;
  uVar1 = ShipGroupUI__GetShipsInGroup((ShipGroupUI *)param_1);
  uVar4 = (undefined1)uVar5;
  pDVar2 = (Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)FUN_00806ea0(local_1c,uVar1,uVar3);
  TacticalManager__SelectBodies(this,pDVar2,(bool)uVar4);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_1c);
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_2c);
  return;
}


//==== 0000825830 00825830_MethodCallerConst__private__bool___thiscall_ShipGroupUI__GetDeltaVWidgetVisible_void_const__ ====
// decompiled by BatchDecomp @ 00825830 name=MethodCallerConst<&private:_bool___thiscall_ShipGroupUI__GetDeltaVWidgetVisible(void)const_> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static bool __cdecl util__DelegateFactory_struct_ShipGroupUI_bool___MethodCallerConst__private__bool___thiscall_ShipGroupUI__GetDeltaVWidgetVisible_void_const__(void const * const) */

bool __cdecl
util__DelegateFactory_L_struct_ShipGroupUI_bool_G___MethodCallerConst_L__private__bool___thiscall_ShipGroupUI__GetDeltaVWidgetVisible_void_const__G
          (void *param_1)

{
  bool bVar1;
  
  bVar1 = ShipGroupUI__GetDeltaVWidgetVisible((ShipGroupUI *)param_1);
  return bVar1;
}


//==== 0000825a90 00825a90_MethodCallerConst__private__bool___thiscall_ShipGroupUI__HasShipsInGroup_void_const__ ====
// decompiled by BatchDecomp @ 00825a90 name=MethodCallerConst<&private:_bool___thiscall_ShipGroupUI__HasShipsInGroup(void)const_> conv=__cdecl body=46

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static bool __cdecl util__DelegateFactory_struct_ShipGroupUI_bool___MethodCallerConst__private__bool___thiscall_ShipGroupUI__HasShipsInGroup_void_const__(void const * const) */

bool __cdecl
util__DelegateFactory_struct_ShipGroupUI_bool___MethodCallerConst__private__bool___thiscall_ShipGroupUI__HasShipsInGroup_void_const__(void *param_1)

{
  int *piVar1;
  int iVar2;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_14[16];
  
  piVar1 = (int *)ShipGroupUI__GetShipsInGroup((ShipGroupUI *)param_1);
  iVar2 = (**(code **)(*(int *)(uintptr_t)piVar1 + 0xc))();
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_14);
  return 0 < iVar2;
}


//==== 0000825ac0 00825ac0_MethodCallerConst__private__bool___thiscall_ShipGroupUI__IsChangeOrderButtonEnabled_void_const__ ====
// decompiled by BatchDecomp @ 00825ac0 name=MethodCallerConst<&private:_bool___thiscall_ShipGroupUI__IsChangeOrderButtonEnabled(void)const_> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static bool __cdecl util__DelegateFactory_struct_ShipGroupUI_bool___MethodCallerConst__private__bool___thiscall_ShipGroupUI__IsChangeOrderButtonEnabled_void_const__(void const * const) */

bool __cdecl
util__DelegateFactory_L_struct_ShipGroupUI_bool_G___MethodCallerConst_L__private__bool___thiscall_ShipGroupUI__IsChangeOrderButtonEnabled_void_const__G
          (void *param_1)

{
  bool bVar1;
  
  bVar1 = ShipGroupUI__AnyShipsHaveDeltaV((ShipGroupUI *)param_1);
  return bVar1;
}


//==== 0000825b40 00825b40_MethodCallerConst__private__bool___thiscall_ShipGroupUI__ShowButtonShipIcon_void_const__ ====
// decompiled by BatchDecomp @ 00825b40 name=MethodCallerConst<&private:_bool___thiscall_ShipGroupUI__ShowButtonShipIcon(void)const_> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static bool __cdecl util__DelegateFactory_struct_ShipGroupUI_bool___MethodCallerConst__private__bool___thiscall_ShipGroupUI__ShowButtonShipIcon_void_const__(void const * const) */

bool __cdecl
util__DelegateFactory_L_struct_ShipGroupUI_bool_G___MethodCallerConst_L__private__bool___thiscall_ShipGroupUI__ShowButtonShipIcon_void_const__G
          (void *param_1)

{
  bool bVar1;
  
  bVar1 = ShipGroupUI__ShowButtonShipIcon((ShipGroupUI *)param_1);
  return bVar1;
}


//==== 000082b170 0082b170_MethodCallerConst__private__bool___thiscall_HUDTactical__CanSelectAllAllies_void_const__ ====
// decompiled by BatchDecomp @ 0082b170 name=MethodCallerConst<&private:_bool___thiscall_HUDTactical__CanSelectAllAllies(void)const_> conv=__cdecl body=49

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static bool __cdecl util__DelegateFactory_struct_HUDTactical_bool___MethodCallerConst__private__bool___thiscall_HUDTactical__CanSelectAllAllies_void_const__(void const * const) */

bool __cdecl
util__DelegateFactory_L_struct_HUDTactical_bool_G___MethodCallerConst_L__private__bool___thiscall_HUDTactical__CanSelectAllAllies_void_const__G
          (void *param_1)

{
  int *piVar1;
  int iVar2;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_14[16];
  
  piVar1 = (int *)TacticalManager__GetPlayerSpacecraftComponents(*(TacticalManager **)((int)param_1 + 8));
  iVar2 = (**(code **)(*(int *)(uintptr_t)piVar1 + 0xc))();
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_14);
  return 0 < iVar2;
}


//==== 000082b1b0 0082b1b0_MethodCallerConst__private__bool___thiscall_HUDTactical__CanSelectAllEnemies_void_const__ ====
// decompiled by BatchDecomp @ 0082b1b0 name=MethodCallerConst<&private:_bool___thiscall_HUDTactical__CanSelectAllEnemies(void)const_> conv=__cdecl body=49

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static bool __cdecl util__DelegateFactory_struct_HUDTactical_bool___MethodCallerConst__private__bool___thiscall_HUDTactical__CanSelectAllEnemies_void_const__(void const * const) */

bool __cdecl
util__DelegateFactory_L_struct_HUDTactical_bool_G___MethodCallerConst_L__private__bool___thiscall_HUDTactical__CanSelectAllEnemies_void_const__G
          (void *param_1)

{
  int *piVar1;
  int iVar2;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_14[16];
  
  piVar1 = (int *)TacticalManager__GetAISpacecraftComponents(*(TacticalManager **)((int)param_1 + 8));
  iVar2 = (**(code **)(*(int *)(uintptr_t)piVar1 + 0xc))();
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_14);
  return 0 < iVar2;
}


//==== 000082b350 0082b350_MethodCallerConst__private__bool___thiscall_HUDTactical__IsChangeAllOrdersButtonEnabled_void_const__ ====
// decompiled by BatchDecomp @ 0082b350 name=MethodCallerConst<&private:_bool___thiscall_HUDTactical__IsChangeAllOrdersButtonEnabled(void)const_> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static bool __cdecl util__DelegateFactory_struct_HUDTactical_bool___MethodCallerConst__private__bool___thiscall_HUDTactical__IsChangeAllOrdersButtonEnabled_void_const__(void const * const) */

bool __cdecl
util__DelegateFactory_L_struct_HUDTactical_bool_G___MethodCallerConst_L__private__bool___thiscall_HUDTactical__IsChangeAllOrdersButtonEnabled_void_const__G
          (void *param_1)

{
  bool bVar1;
  
  bVar1 = HUDTactical__IsChangeAllOrdersButtonEnabled((HUDTactical *)param_1);
  return bVar1;
}


//==== 000082b360 0082b360_MethodCallerConst__private__bool___thiscall_HUDTactical__IsMarqueeSelectVisible_void_const__ ====
// decompiled by BatchDecomp @ 0082b360 name=MethodCallerConst<&private:_bool___thiscall_HUDTactical__IsMarqueeSelectVisible(void)const_> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static bool __cdecl util__DelegateFactory_struct_HUDTactical_bool___MethodCallerConst__private__bool___thiscall_HUDTactical__IsMarqueeSelectVisible_void_const__(void const * const) */

bool __cdecl
util__DelegateFactory_L_struct_HUDTactical_bool_G___MethodCallerConst_L__private__bool___thiscall_HUDTactical__IsMarqueeSelectVisible_void_const__G
          (void *param_1)

{
  bool bVar1;
  
  bVar1 = HUDTactical__IsMarqueeSelectVisible((HUDTactical *)param_1);
  return bVar1;
}

