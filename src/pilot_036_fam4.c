// pilot_036_fam4.c - TacticalManager/Body/SpacecraftComponent/CraftInstance (435 methods)
// assembled by scripts/fam4_assemble.py from decomp2c v2 output.
// Honest TODOs inline; fix log: reports/poison_fix/fam4_pilot036_log.txt
#include "port_prelude.h"
typedef union {
  struct {
    undefined8 _0_8_;
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
  struct {
    undefined2 _2_2_;
  };
  struct {
    undefined1 _0_1_;
  };
  undefined1 raw[32];
} slice_view;
/* ---- externs: stub-oracle names (K&R; ret types by call site) ---- */
extern int Body_GetBoundingCylinderLine_km_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Body_GetBoundingCylinderLine_km_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Body_GetBoundingCylinderLine_km_MemoizedFunction(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Body_GetBoundingCylinder_km_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Body_GetBulletComponent_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Body_GetBulletComponent_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Body_GetCapitalShipComponent_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Body_GetCapitalShipComponent_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Body_GetColliderComponent_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Body_GetColliderComponent_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Body_GetCollisionAABB_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Body_GetCollisionAABB_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Body_GetCollisionAABB_MemoizedFunction(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Body_GetControllableComponent_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Body_GetDebrisComponent_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Body_GetMass_kg_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Body_GetShotComponent_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Body_GetSpacecraftComponent_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Body_GetSpacecraftComponent_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Body_GetSpawner_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Body_GetSpawner_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Body_GetTargetableRadius_km_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Body_GetTargetableRadius_km_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Body_GetTightRadius_km_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Body_GetTightRadius_km_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Body_GetUnrotatedCenterOfMass_km_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Body_GetUntrackComponent_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Body_HasPhysicality_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Body_HasPhysicality_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Body_IsABullet_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Body_IsABullet_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_CanRoll_MemoizedFunction(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_GetAmmoModules_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_GetCapableEngineModules_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_GetCapableEngineModules_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_GetCapableMainEngineModules_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_GetCenterOfMass_km_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_GetCenterZDelta_m_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_GetCommandModules_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_GetCommandModules_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_GetEngineModules_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_GetEngineModules_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_GetFullBurnTimeLeft_s_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_GetFullBurnTimeLeft_s_MemoizedFunction(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_GetHeatSignatureOffset_m_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_GetHeatSignatureOffset_m_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_GetHeatSignatureOffset_m_MemoizedFunction(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_GetHeatSignature_W_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_GetHeatSignature_W_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_GetMainEngineModules_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_GetModulesOfType_struct_EngineCompartment(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_GetModulesOfType_struct_PayloadCompartment(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_GetModulesOfType_struct_PropellantTankCompartment(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_GetPayloadModules_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_GetPayloadModules_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_GetPowerModules_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_GetPowerModules_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_GetRadiatorModules_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_GetRadiatorModules_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_GetReactionMassModules_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_GetReactionMassModules_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_GetTightenedRadius_km_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_GetTotalLength_m_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_GetTotalMass_kg_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_GetTotalMass_kg_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_GetTotalRadius_m_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_GetTotalRadius_m_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_GetTotalReactionMass_kg_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_GetWeaponModules_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_GetWeaponModules_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_GetWorkingCompartments_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_GetWorkingCompartments_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_GetWorkingCompartments_MemoizedFunction(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_HoleInArmorExists_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance_HoleInArmorExists_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int SpacecraftComponent_GetArmorCollisionShells_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int SpacecraftComponent_GetAvoidanceDirection_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int SpacecraftComponent_GetCombatIntersectRadius_km_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int SpacecraftComponent_GetCombatIntersectRadius_km_MemoizedFunction(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int SpacecraftComponent_GetDesiredThrustDirection_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int SpacecraftComponent_GetDesiredThrustDirection_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int SpacecraftComponent_GetDesiredThrustDirection_MemoizedFunction(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int SpacecraftComponent_GetEstimatedMaxAngularAcceleration_radians_s2_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int SpacecraftComponent_GetThrusterLayouts_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int SpacecraftComponent_GetThrustersThatNeedToFire_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int SpacecraftComponent_HasFuelForTurningLeft_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int SpacecraftComponent_HasFuelForTurningLeft_MemoizedFunction(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int SpacecraftComponent_HasPayloadsLeft_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int SpacecraftComponent_HasWeaponsLeft_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int SpacecraftComponent_IsThreatening_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int SpacecraftComponent_NeedsToThrust_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int SpacecraftComponent_NeedsToTorque_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int SpacecraftComponent_WillIntersectWithTargetsInTheFuture_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int TacticalManager_GetAllBodies_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int TacticalManager_GetAllColliders_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int TacticalManager_GetCameraFocusedBodies_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int TacticalManager_GetCombatAxis_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int TacticalManager_GetFutureCelestials_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int TacticalManager_GetRelevantCelestials_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int TacticalManager_GetSelectedBodiesCenter_km_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int TacticalManager_GetSelectedBodiesCenter_km_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int TacticalManager_GetSelectedBodiesVelocity_km_s_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int TacticalManager_GetSelectedBodiesVelocity_km_s_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int TacticalManager_GetStrategicGame_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int TacticalManager_GetStrategicGame_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int util__Darray_class_util__SharedPtr_struct_ModuleCompartment_____operator__o2(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int util__Darray_struct_ArmorCollisionShell___operator(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int util__Darray_struct_ThrusterLayout___Darray_struct_ThrusterLayout(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int util__Darray_struct_ThrusterLayout___operator(); /* K&R stub; ret by call site (honest TODO: stub is void) */

//==== 004f5830 4f5830_Body__DememoizeAll ====
// decompiled by BatchDecomp @ 004f5830 name=DememoizeAll conv=__thiscall body=108

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall Body__DememoizeAll(void)const  */

void __thiscall Body__DememoizeAll(Body *this)

{
  int iVar1;
  undefined4 *puVar2;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar1 = (**(code **)((this->BodyMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 + 0xc))();
  if (local_c < iVar1) {
    do {
      puVar2 = (undefined4 *)
               (**(code **)(this->BodyMemoizationHandlerInstance).ResetFunctions._pad_0x0_0)
                         (&local_c);
      (*(code *)*puVar2)();
      local_c = local_c + 1;
      iVar1 = (**(code **)((this->BodyMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 + 0xc))()
      ;
    } while (local_c < iVar1);
  }
  (**(code **)((this->BodyMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 + 0x10))();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 004f66b0 4f66b0_SpacecraftComponent__GetCombatIntersectRadius_km_Clear ====
// decompiled by BatchDecomp @ 004f66b0 name=SpacecraftComponent_GetCombatIntersectRadius_km_Clear conv=__thiscall body=13

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftComponent__GetCombatIntersectRadius_km_Clear(void)const  */

void __thiscall SpacecraftComponent__GetCombatIntersectRadius_km_Clear(SpacecraftComponent *this)

{
  (this->GetCombatIntersectRadius_km_MemoizedValue).IsValidData = false;
  (this->GetCombatIntersectRadius_km_MemoizedValue).Data = 0.0;
  return;
}


//==== 005136a0 5136a0_Body__GetRadius_km_Clear ====
// decompiled by BatchDecomp @ 005136a0 name=GetRadius_km_Clear conv=__thiscall body=19

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__GetRadius_km_Clear(void)const  */

void __thiscall Body__GetRadius_km_Clear(Body *this)

{
  (this->GetRadius_km_MemoizedValue).IsValidData = false;
  (this->GetRadius_km_MemoizedValue).Data = 0.0;
  return;
}


//==== 005160b0 5160b0_CraftInstance__GetTotalMass_kg_Clear ====
// decompiled by BatchDecomp @ 005160b0 name=CraftInstance_GetTotalMass_kg_Clear conv=__thiscall body=19

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetTotalMass_kg_Clear(void)const  */

void __thiscall CraftInstance__GetTotalMass_kg_Clear(CraftInstance *this)

{
  (this->GetTotalReactionMass_kg_MemoizedValue).IsValidData = false;
  (this->GetTotalReactionMass_kg_MemoizedValue).Data = 0.0;
  return;
}


//==== 005186b0 5186b0_CraftInstance__GetTotalReactionMass_kg_Clear ====
// decompiled by BatchDecomp @ 005186b0 name=CraftInstance_GetTotalReactionMass_kg_Clear conv=__thiscall body=19

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetTotalReactionMass_kg_Clear(void)const  */

void __thiscall CraftInstance__GetTotalReactionMass_kg_Clear(CraftInstance *this)

{
  (this->GetTotalDryMass_kg_MemoizedValue).IsValidData = false;
  (this->GetTotalDryMass_kg_MemoizedValue).Data = 0.0;
  return;
}


//==== 0052a660 52a660_CraftInstance__CanRoll_Clear ====
// decompiled by BatchDecomp @ 0052a660 name=CanRoll_Clear conv=__thiscall body=10

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__CanRoll_Clear(void)const  */

void __thiscall CraftInstance__CanRoll_Clear(CraftInstance *this)

{
  (this->CanRoll_MemoizedValue).Data = false;
  (this->CanRoll_MemoizedValue).IsValidData = false;
  return;
}


//==== 0052a6e0 52a6e0_CraftInstance__CanRoll_MemoizedFunction ====
extern undefined4 FUN_00523e20(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_00524250(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 0052a6e0 name=CraftInstance_CanRoll_MemoizedFunction conv=__thiscall body=597

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall CraftInstance__CanRoll_MemoizedFunction(void)const  */

bool __thiscall CraftInstance__CanRoll_MemoizedFunction(CraftInstance *this)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  Vec3_L_double_G_ *pVVar7;
  code *pcVar8;
  bool bVar9;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_84[16];
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_74[16];
  undefined1 local_64[20];
  bool local_50;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_40[4];
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined8 uStack_30;
  int local_2c;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar9 = *(char *)&(this->GetCenterOfMass_km_MemoizedValue).Data.Y == '\0';
  if (bVar9) {
    iVar2 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_2c = iVar2 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_2c);
    bVar9 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar2);
    if (bVar9) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, GetCenterOfMass_km_Clear);
    }
    pVVar7 = GetCenterOfMass_km_MemoizedFunction(this,(Vec3_L_double_G_ *)local_64);
    ((slice_view *)&uStack_34)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_34)->_1_3_[0] | (((slice_view *)&uStack_34)->_1_3_[1] << 8) | (((slice_view *)&uStack_34)->_1_3_[2] << 16)) << 8));
    dVar1 = pVVar7->Z;
    uVar3 = *(undefined4 *)((int)&pVVar7->X + 4);
    uVar4 = *(undefined4 *)&pVVar7->Y;
    uVar5 = *(undefined4 *)((int)&pVVar7->Y + 4);
    ((slice_view *)&local_3c)->_0_4_ = *(undefined4 *)&dVar1;
    ((slice_view *)&local_3c)->_4_4_ = *(undefined4 *)((char *)&dVar1 + 4);
    *(undefined4 *)&(this->GetTotalMass_kg_MemoizedValue).Data = *(undefined4 *)&pVVar7->X;
    *(undefined4 *)((int)&(this->GetTotalMass_kg_MemoizedValue).Data + 4) = uVar3;
    *(undefined4 *)&(this->GetTotalMass_kg_MemoizedValue).IsValidData = uVar4;
    *(undefined4 *)((char *)&(this->GetTotalMass_kg_MemoizedValue) + 0xc) = uVar5;
    *(undefined4 *)&(this->GetCenterOfMass_km_MemoizedValue).Data.X = (undefined4)local_3c;
    *(undefined4 *)((int)&(this->GetCenterOfMass_km_MemoizedValue).Data.X + 4) = ((slice_view *)&local_3c)->_4_4_;
    *(undefined4 *)&(this->GetCenterOfMass_km_MemoizedValue).Data.Y = uStack_34;
    *(undefined4 *)((int)&(this->GetCenterOfMass_km_MemoizedValue).Data.Y + 4) = uStack_30;
    bVar9 = *(char *)&(this->GetCenterOfMass_km_MemoizedValue).Data.Y == '\0';
    local_3c = dVar1;
  }
  pcVar8 = DebugBreak_exref;
  if (bVar9) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_28 = (this->GetTotalMass_kg_MemoizedValue).Data * /*408f400000000000*/1000.0;
  local_20 = *(double *)&(this->GetTotalMass_kg_MemoizedValue).IsValidData * /*408f400000000000*/1000.0
  ;
  local_18 = (this->GetCenterOfMass_km_MemoizedValue).Data.X * /*408f400000000000*/1000.0;
  if ((this->GetCapableEngineModules_MemoizedValue).IsValidData == false) {
    iVar2 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_2c = iVar2 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_2c);
    bVar9 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar2);
    if (bVar9) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, CraftInstance_GetCapableEngineModules_Clear);
    }
    local_10 = GetCurrentPowerGeneration_W(this);
    if ((this->GetEngineModules_MemoizedValue).IsValidData == false) {
      iVar2 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
      local_2c = iVar2 + 1;
      util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
                 &local_2c);
      bVar9 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                         &this->CraftInstanceMemoizationHandlerInstance,iVar2);
      if (bVar9) {
        (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
        [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
             CDE_PMF(pmf_57e8e8d5, CraftInstance_GetEngineModules_Clear);
      }
      CraftInstance_GetModulesOfType_struct_EngineCompartment(this,(Type)local_74);
      util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_40,local_74);
      ((slice_view *)&uStack_30)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_30)->_1_3_[0] | (((slice_view *)&uStack_30)->_1_3_[1] << 8) | (((slice_view *)&uStack_30)->_1_3_[2] << 16)) << 8));
      util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
                ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
                 &this->GetEngineModules_MemoizedValue,
                 (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_40);
      (this->GetEngineModules_MemoizedValue).IsValidData = ((slice_view *)&uStack_30)->_0_1_;
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_40);
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_74);
    }
    pcVar8 = DebugBreak_exref;
    if ((this->GetEngineModules_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      pcVar8 = DebugBreak_exref;
      DebugBreak();
    }
    FUN_00524250(local_84,&this->GetEngineModules_MemoizedValue,&local_10);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment((Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)(local_64 + 4),local_84);
    local_50 = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetCapableEngineModules_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)(local_64 + 4));
    (this->GetCapableEngineModules_MemoizedValue).IsValidData = local_50;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)(local_64 + 4));
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_84);
  }
  if ((this->GetCapableEngineModules_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    (*pcVar8)();
  }
  uVar6 = FUN_00523e20(&this->GetCapableEngineModules_MemoizedValue,&local_28);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar6;
}


//==== 0052b2e0 52b2e0_CraftInstance__DememoizeAll ====
// decompiled by BatchDecomp @ 0052b2e0 name=DememoizeAll conv=__thiscall body=108

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall CraftInstance__DememoizeAll(void)const  */

void __thiscall CraftInstance__DememoizeAll(CraftInstance *this)

{
  int iVar1;
  undefined4 *puVar2;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar1 = (**(code **)((this->CraftInstanceMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 +
                      0xc))();
  if (local_c < iVar1) {
    do {
      puVar2 = (undefined4 *)
               (**(code **)(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions._pad_0x0_0)
                         (&local_c);
      (*(code *)*puVar2)();
      local_c = local_c + 1;
      iVar1 = (**(code **)((this->CraftInstanceMemoizationHandlerInstance).ResetFunctions._pad_0x0_0
                          + 0xc))();
    } while (local_c < iVar1);
  }
  (**(code **)((this->CraftInstanceMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 + 0x10))();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0052b7b0 52b7b0_CraftInstance__ExpendPercentOfAllAmmo ====
// decompiled by BatchDecomp @ 0052b7b0 name=ExpendPercentOfAllAmmo conv=__thiscall body=689

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__ExpendPercentOfAllAmmo(double) */

void __thiscall CraftInstance__ExpendPercentOfAllAmmo(CraftInstance *this,double param_1)

{
  Maybe_L_util__Darray_L_util__WeakPtr_L_WeaponCompartment_G___G___G_ *pMVar1;
  Maybe_L_util__Darray_L_util__WeakPtr_L_AmmoCompartment_G___G___G_ *pMVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  code *pcVar7;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_34[16];
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_24[16];
  bool local_14;
  CraftInstance *local_10;
  int local_c;
  uint local_8;
  
  pcVar7 = DebugBreak_exref;
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = this;
  if (((0.0 < param_1) || (param_1 < /*3ff0000000000000*/1.0)) &&
     ((/*3ff0000000000000*/1.0 < param_1 || (param_1 < 0.0)))) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\crafts\\craftblueprintinstances.cpp"
                    ,0x387,"IsSaturated(Percent)",(char *)0x0);
    DebugBreak();
  }
  if ((this->GetAmmoModules_MemoizedValue).IsValidData == false) {
    iVar4 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_c = iVar4 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_c);
    bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar4);
    if (bVar3) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, CraftInstance_GetAmmoModules_Clear);
    }
    CraftInstance_GetModulesOfType_struct_EngineCompartment(this,(Type)local_34);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_24,local_34);
    local_14 = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetAmmoModules_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_24);
    (this->GetAmmoModules_MemoizedValue).IsValidData = local_14;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_24);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_34);
    pcVar7 = DebugBreak_exref;
  }
  pMVar2 = &this->GetAmmoModules_MemoizedValue;
  if ((this->GetAmmoModules_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    (*pcVar7)();
  }
  local_c = 0;
  iVar4 = (**(code **)(*(int *)&pMVar2->Data + 0xc))();
  if (local_c < iVar4) {
    do {
      piVar5 = (int *)(**(code **)*(int *)&pMVar2->Data)();
      if (((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]),
         !bVar3)) {
        *piVar5 = 0;
      }
      iVar4 = *piVar5;
      if (((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]),
         !bVar3)) {
        *piVar5 = 0;
      }
      *(int *)(iVar4 + 0x118) =
           (int)((double)*(int *)(iVar4 + 0x118) - (double)*(int *)(*piVar5 + 0x118) * param_1);
      local_c = local_c + 1;
      iVar4 = (**(code **)(*(int *)&pMVar2->Data + 0xc))();
      this = local_10;
    } while (local_c < iVar4);
  }
  if ((this->GetWeaponModules_MemoizedValue).IsValidData == false) {
    iVar4 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_c = iVar4 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_c);
    bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar4);
    if (bVar3) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, CraftInstance_GetWeaponModules_Clear);
    }
    CraftInstance_GetModulesOfType_struct_PropellantTankCompartment(this,(Type)local_34);
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_24,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_34);
    local_14 = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetWeaponModules_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_24);
    (this->GetWeaponModules_MemoizedValue).IsValidData = local_14;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_24);
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_34);
  }
  pMVar1 = &this->GetWeaponModules_MemoizedValue;
  if ((this->GetWeaponModules_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_c = 0;
  iVar4 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
  if (local_c < iVar4) {
    do {
      puVar6 = (undefined4 *)(**(code **)*(int *)&pMVar1->Data)(&local_c);
      if (((ReferenceController *)puVar6[1] != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar6[1]),
         !bVar3)) {
        *puVar6 = 0;
      }
      WeaponCompartment__ExpendPercentOfInternalAmmo((WeaponCompartment *)*puVar6,param_1);
      local_c = local_c + 1;
      iVar4 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
      this = local_10;
    } while (local_c < iVar4);
  }
  DememoizeAllExceptShape(this);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0052ba70 52ba70_CraftInstance__ExpendPercentOfReactionMass ====
// decompiled by BatchDecomp @ 0052ba70 name=ExpendPercentOfReactionMass conv=__thiscall body=407

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__ExpendPercentOfReactionMass(double) */

void __thiscall CraftInstance__ExpendPercentOfReactionMass(CraftInstance *this,double param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  Maybe_L_util__Darray_L_util__WeakPtr_L_PropellantTankCompartment_G___G___G_ *pMVar5;
  code *pcVar6;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_34[16];
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_24[16];
  bool local_14;
  CraftInstance *local_10;
  int local_c;
  uint local_8;
  
  pcVar6 = DebugBreak_exref;
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = this;
  if (((0.0 < param_1) || (param_1 < /*3ff0000000000000*/1.0)) &&
     ((/*3ff0000000000000*/1.0 < param_1 || (param_1 < 0.0)))) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\crafts\\craftblueprintinstances.cpp"
                    ,0x37c,"IsSaturated(Percent)",(char *)0x0);
    DebugBreak();
  }
  if ((this->GetReactionMassModules_MemoizedValue).IsValidData == false) {
    iVar3 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_c = iVar3 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_c);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar3);
    if (bVar2) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, CraftInstance_GetReactionMassModules_Clear);
    }
    CraftInstance_GetModulesOfType_struct_PropellantTankCompartment(this,(Type)local_34);
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent(local_24,local_34);
    local_14 = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetReactionMassModules_MemoizedValue,local_24);
    (this->GetReactionMassModules_MemoizedValue).IsValidData = local_14;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_24);
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_34);
    pcVar6 = DebugBreak_exref;
  }
  pMVar5 = &this->GetReactionMassModules_MemoizedValue;
  if ((this->GetReactionMassModules_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    (*pcVar6)();
  }
  local_c = 0;
  iVar3 = (**(code **)(*(int *)&pMVar5->Data + 0xc))();
  if (local_c < iVar3) {
    do {
      piVar4 = (int *)(**(code **)*(int *)&pMVar5->Data)(&local_c);
      if ((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]);
        if (!bVar2) {
          *piVar4 = 0;
        }
      }
      iVar3 = *piVar4;
      if ((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]);
        if (!bVar2) {
          *piVar4 = 0;
        }
      }
      iVar1 = (pMVar5->Data)._pad_0x0_0;
      *(double *)(iVar3 + 0x108) =
           *(double *)(iVar3 + 0x108) - *(double *)(*piVar4 + 0x108) * param_1;
      local_c = local_c + 1;
      iVar3 = (**(code **)(iVar1 + 0xc))();
    } while (local_c < iVar3);
  }
  DememoizeAllExceptShape(local_10);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0052c2b0 52c2b0_CraftInstance__GetAllMainEnginePropellantsUsed_Clear ====
// decompiled by BatchDecomp @ 0052c2b0 name=GetAllMainEnginePropellantsUsed_Clear conv=__thiscall body=84

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetAllMainEnginePropellantsUsed_Clear(void)const  */

void __thiscall CraftInstance__GetAllMainEnginePropellantsUsed_Clear(CraftInstance *this)

{
  undefined **local_14;
  void *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = ((void *)(0x009194a4u));
  local_10 = (void *)0x0;
  local_c = 0;
  local_8 = 0;
  util__Darray_class_Module____operator
            ((Darray_L_class_Module_P_G_ *)&this->GetAllMainEnginePropellantsUsed_MemoizedValue,
             (Darray_L_class_Module_P_G_ *)&local_14);
  local_14 = ((void *)(0x009194a4u));
  if (local_10 != (void *)0x0) {
    operator_delete__(local_10);
  }
  (this->GetAllMainEnginePropellantsUsed_MemoizedValue).IsValidData = false;
  return;
}


//==== 0052c550 52c550_CraftInstance__GetAmmoModules_Clear ====
// decompiled by BatchDecomp @ 0052c550 name=CraftInstance_GetAmmoModules_Clear conv=__thiscall body=69

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetAmmoModules_Clear(void)const  */

void __thiscall CraftInstance__GetAmmoModules_Clear(CraftInstance *this)

{
  undefined **local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = ((void *)(0x0091e0b8u));
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &this->GetAmmoModules_MemoizedValue,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_14);
  (this->GetAmmoModules_MemoizedValue).IsValidData = false;
  return;
}


//==== 0052c5a0 52c5a0_CraftInstance__GetAmmoSuppliersOfWeapon ====
// decompiled by BatchDecomp @ 0052c5a0 name=GetAmmoSuppliersOfWeapon conv=__thiscall body=471

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Darray<class util::WeakPtr<struct AmmoCompartment> > __thiscall
   CraftInstance__GetAmmoSuppliersOfWeapon(class util::WeakPtr<struct WeaponCompartment>)const  */

void __thiscall
CraftInstance__GetAmmoSuppliersOfWeapon(CraftInstance *this,Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_2,undefined4 param_3,
          ReferenceController *param_4)

{
  ReferenceController *this_00;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *pDVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  Maybe_L_util__Darray_L_util__WeakPtr_L_AmmoCompartment_G___G___G_ *pMVar6;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_3c[16];
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_2c[16];
  bool local_1c;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *local_18;
  ReferenceController *local_14;
  int *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_18 = param_2;
  if ((this->GetAmmoModules_MemoizedValue).IsValidData == false) {
    iVar4 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_c = iVar4 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_c);
    bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar4);
    if (bVar3) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, CraftInstance_GetAmmoModules_Clear);
    }
    CraftInstance_GetModulesOfType_struct_EngineCompartment(this,(Type)local_3c);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_2c,local_3c);
    local_1c = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetAmmoModules_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_2c);
    (this->GetAmmoModules_MemoizedValue).IsValidData = local_1c;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_2c);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_3c);
  }
  pDVar1 = local_18;
  pMVar6 = &this->GetAmmoModules_MemoizedValue;
  if ((this->GetAmmoModules_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_10 = &param_3;
  *(undefined4 *)pDVar1 = 0;
  *(undefined4 *)(pDVar1 + 4) = 0;
  *(undefined4 *)(pDVar1 + 8) = 0;
  *(undefined4 *)(pDVar1 + 0xc) = 0;
  iVar4 = (**(code **)(*(int *)&pMVar6->Data + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body(pDVar1,iVar4);
  local_c = 0;
  iVar4 = (**(code **)(*(int *)&pMVar6->Data + 0xc))();
  if (local_c < iVar4) {
    do {
      piVar5 = (int *)(**(code **)*(int *)&pMVar6->Data)(&local_c);
      if (((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]),
         !bVar3)) {
        *piVar5 = 0;
      }
      piVar2 = local_10;
      local_14 = *(ReferenceController **)(*piVar5 + 0x38);
      if (((ReferenceController *)local_10[1] != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)local_10[1]),
         !bVar3)) {
        *piVar2 = 0;
      }
      if (local_14[10].Pointer == *(void **)(*piVar2 + 0x38)) {
        iVar4 = *(int *)(local_18 + 8);
        local_14 = (ReferenceController *)(iVar4 + 1);
        util__Darray_class_util__WeakPtr_class_Body_____SetSize(local_18,(int *)&local_14);
        pDVar1 = local_18;
        bVar3 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(local_18,iVar4);
        if (bVar3) {
          iVar4 = *(int *)(pDVar1 + 4) + *(int *)(pDVar1 + 8) * 8;
          local_14 = *(ReferenceController **)(iVar4 + -4);
          *(int *)(iVar4 + -8) = *piVar5;
          this_00 = (ReferenceController *)piVar5[1];
          *(ReferenceController **)(iVar4 + -4) = this_00;
          if (this_00 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this_00);
          }
          if (local_14 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(local_14);
          }
        }
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(*(int *)&pMVar6->Data + 0xc))();
    } while (local_c < iVar4);
  }
  if (param_4 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0052cbf0 52cbf0_CraftInstance__GetBoundingCylinder_m_Clear ====
// decompiled by BatchDecomp @ 0052cbf0 name=GetBoundingCylinder_m_Clear conv=__thiscall body=18

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetBoundingCylinder_m_Clear(void)const  */

void __thiscall CraftInstance__GetBoundingCylinder_m_Clear(CraftInstance *this)

{
  *(undefined1 *)&(this->GetBoundingCylinder_m_MemoizedValue).Data.Radius = 0;
  *(undefined4 *)&(this->GetTotalRadius_m_MemoizedValue).Data = 0;
  *(undefined4 *)((int)&(this->GetTotalRadius_m_MemoizedValue).Data + 4) = 0;
  *(undefined4 *)&(this->GetTotalRadius_m_MemoizedValue).IsValidData = 0;
  *(undefined4 *)((char *)&(this->GetTotalRadius_m_MemoizedValue) + 0xc) = 0;
  return;
}


//==== 0052cdd0 52cdd0_CraftInstance__GetCapableEngineModules_Clear ====
// decompiled by BatchDecomp @ 0052cdd0 name=CraftInstance_GetCapableEngineModules_Clear conv=__thiscall body=69

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetCapableEngineModules_Clear(void)const  */

void __thiscall CraftInstance__GetCapableEngineModules_Clear(CraftInstance *this)

{
  undefined **local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = ((void *)(0x0091e0b8u));
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &this->GetCapableEngineModules_MemoizedValue,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_14);
  (this->GetCapableEngineModules_MemoizedValue).IsValidData = false;
  return;
}


//==== 0052ce20 52ce20_CraftInstance__GetCapableEngineModules_Memoize ====
extern undefined4 FUN_00524250(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 0052ce20 name=CraftInstance_GetCapableEngineModules_Memoize conv=__thiscall body=336

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetCapableEngineModules_Memoize(void)const  */

void __thiscall CraftInstance__GetCapableEngineModules_Memoize(CraftInstance *this)

{
  int iVar1;
  bool bVar2;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_5c[16];
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_4c[16];
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_3c[16];
  bool local_2c;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_28[16];
  bool local_18;
  int local_14;
  double local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((this->GetCapableEngineModules_MemoizedValue).IsValidData == false) {
    iVar1 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_14 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_14);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar1);
    if (bVar2) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, CraftInstance_GetCapableEngineModules_Clear);
    }
    local_10 = GetCurrentPowerGeneration_W(this);
    if ((this->GetEngineModules_MemoizedValue).IsValidData == false) {
      iVar1 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
      local_14 = iVar1 + 1;
      util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
                 &local_14);
      bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                         &this->CraftInstanceMemoizationHandlerInstance,iVar1);
      if (bVar2) {
        (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
        [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
             CDE_PMF(pmf_57e8e8d5, CraftInstance_GetEngineModules_Clear);
      }
      CraftInstance_GetModulesOfType_struct_EngineCompartment(this,(Type)local_4c);
      util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_28,local_4c);
      local_18 = true;
      util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
                ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
                 &this->GetEngineModules_MemoizedValue,
                 (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_28);
      (this->GetEngineModules_MemoizedValue).IsValidData = local_18;
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_28);
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_4c);
    }
    if ((this->GetEngineModules_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    FUN_00524250(local_5c,&this->GetEngineModules_MemoizedValue,&local_10);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_3c,local_5c);
    local_2c = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetCapableEngineModules_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_3c);
    (this->GetCapableEngineModules_MemoizedValue).IsValidData = local_2c;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_3c);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_5c);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0052cf70 52cf70_CraftInstance__GetCapableMainEngineModules_Clear ====
// decompiled by BatchDecomp @ 0052cf70 name=CraftInstance_GetCapableMainEngineModules_Clear conv=__thiscall body=69

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetCapableMainEngineModules_Clear(void)const  */

void __thiscall CraftInstance__GetCapableMainEngineModules_Clear(CraftInstance *this)

{
  undefined **local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = ((void *)(0x0091e0b8u));
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &this->GetCapableMainEngineModules_MemoizedValue,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_14);
  (this->GetCapableMainEngineModules_MemoizedValue).IsValidData = false;
  return;
}


//==== 0052cfc0 52cfc0_CraftInstance__GetCenterOfMass_km_Clear ====
// decompiled by BatchDecomp @ 0052cfc0 name=GetCenterOfMass_km_Clear conv=__thiscall body=29

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetCenterOfMass_km_Clear(void)const  */

void __thiscall CraftInstance__GetCenterOfMass_km_Clear(CraftInstance *this)

{
  *(undefined1 *)&(this->GetCenterOfMass_km_MemoizedValue).Data.Y = 0;
  *(undefined4 *)&(this->GetTotalMass_kg_MemoizedValue).Data = 0;
  *(undefined4 *)((int)&(this->GetTotalMass_kg_MemoizedValue).Data + 4) = 0;
  *(undefined4 *)&(this->GetTotalMass_kg_MemoizedValue).IsValidData = 0;
  *(undefined4 *)((char *)&(this->GetTotalMass_kg_MemoizedValue) + 0xc) = 0;
  (this->GetCenterOfMass_km_MemoizedValue).Data.X = 0.0;
  return;
}


//==== 0052cfe0 52cfe0_CraftInstance__GetCenterOfMass_km_Memoize ====
// decompiled by BatchDecomp @ 0052cfe0 name=CraftInstance_GetCenterOfMass_km_Memoize conv=__thiscall body=121

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetCenterOfMass_km_Memoize(void)const  */

void __thiscall CraftInstance__GetCenterOfMass_km_Memoize(CraftInstance *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  Vec3_L_double_G_ *pVVar6;
  Vec3_L_double_G_ local_20;
  int local_8;
  
  if (*(char *)&(this->GetCenterOfMass_km_MemoizedValue).Data.Y == '\0') {
    iVar1 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_8 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_8);
    bVar5 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar1);
    if (bVar5) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, GetCenterOfMass_km_Clear);
    }
    pVVar6 = GetCenterOfMass_km_MemoizedFunction(this,&local_20);
    uVar2 = *(undefined4 *)((int)&pVVar6->X + 4);
    uVar3 = *(undefined4 *)&pVVar6->Y;
    uVar4 = *(undefined4 *)((int)&pVVar6->Y + 4);
    ((slice_view *)&local_20.Z)->_0_4_ = CONCAT31(((slice_view *)&local_20.Z)->_1_3_,1);
    ((slice_view *)&local_20.Y)->_0_4_ = *(undefined4 *)&pVVar6->Z;
    ((slice_view *)&local_20.Y)->_4_4_ = (undefined4)((ulonglong)pVVar6->Z >> 0x20);
    *(undefined4 *)&(this->GetTotalMass_kg_MemoizedValue).Data = *(undefined4 *)&pVVar6->X;
    *(undefined4 *)((int)&(this->GetTotalMass_kg_MemoizedValue).Data + 4) = uVar2;
    *(undefined4 *)&(this->GetTotalMass_kg_MemoizedValue).IsValidData = uVar3;
    *(undefined4 *)((char *)&(this->GetTotalMass_kg_MemoizedValue) + 0xc) = uVar4;
    *(undefined4 *)&(this->GetCenterOfMass_km_MemoizedValue).Data.X = ((slice_view *)&local_20.Y)->_0_4_;
    *(undefined4 *)((int)&(this->GetCenterOfMass_km_MemoizedValue).Data.X + 4) = ((slice_view *)&local_20.Y)->_4_4_;
    *(undefined4 *)&(this->GetCenterOfMass_km_MemoizedValue).Data.Y = ((slice_view *)&local_20.Z)->_0_4_;
    *(undefined4 *)((int)&(this->GetCenterOfMass_km_MemoizedValue).Data.Y + 4) = ((slice_view *)&local_20.Z)->_4_4_;
  }
  return;
}


//==== 0052d450 52d450_CraftInstance__GetCenterZDelta_m_Clear ====
// decompiled by BatchDecomp @ 0052d450 name=CraftInstance_GetCenterZDelta_m_Clear conv=__thiscall body=19

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetCenterZDelta_m_Clear(void)const  */

void __thiscall CraftInstance__GetCenterZDelta_m_Clear(CraftInstance *this)

{
  (this->GetTotalLength_m_MemoizedValue).IsValidData = false;
  (this->GetTotalLength_m_MemoizedValue).Data = 0.0;
  return;
}


//==== 0052d590 52d590_CraftInstance__GetCombinedExhaustVelocity_km__s ====
extern undefined4 FUN_00524250(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 0052d590 name=GetCombinedExhaustVelocity_km__s conv=__thiscall body=739

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall CraftInstance__GetCombinedExhaustVelocity_km__s(void)const  */

double __thiscall CraftInstance__GetCombinedExhaustVelocity_km__s(CraftInstance *this)

{
  int *piVar1;
  EngineCompartment *this_00;
  bool bVar2;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  float10 fVar7;
  float10 extraout_ST0;
  double dVar8;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_74[16];
  bool local_64;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_60[16];
  bool local_50;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_4c[8];
  double local_44;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_3c[8];
  double local_34;
  undefined4 *local_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  double local_1c;
  int local_14;
  undefined8 local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_2c = (undefined4 *)0x0;
  uStack_28 = 0;
  iStack_24 = 0;
  uStack_20 = 0;
  if ((this->GetCapableMainEngineModules_MemoizedValue).IsValidData == false) {
    iVar4 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_10 = (double)CONCAT44(iVar4 + 1,(undefined4)local_10);
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               (int *)((int)&local_10 + 4));
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar4);
    if (bVar2) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, CraftInstance_GetCapableMainEngineModules_Clear);
    }
    local_1c = GetCurrentPowerGeneration_W(this);
    if ((this->GetMainEngineModules_MemoizedValue).IsValidData == false) {
      iVar4 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
      local_10 = (double)CONCAT44(iVar4 + 1,(undefined4)local_10);
      util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
                 (int *)((int)&local_10 + 4));
      bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                         &this->CraftInstanceMemoizationHandlerInstance,iVar4);
      if (bVar2) {
        (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
        [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
             CDE_PMF(pmf_57e8e8d5, GetMainEngineModules_Clear);
      }
      pDVar3 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
               GetMainEngineModules_MemoizedFunction(this);
      util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_60,pDVar3);
      local_50 = true;
      util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
                ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
                 &this->GetMainEngineModules_MemoizedValue,
                 (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_60);
      (this->GetMainEngineModules_MemoizedValue).IsValidData = local_50;
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_60);
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_3c);
    }
    if ((this->GetMainEngineModules_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    FUN_00524250(local_4c,&this->GetMainEngineModules_MemoizedValue,&local_1c);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_74,local_4c);
    local_64 = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetCapableMainEngineModules_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_74);
    (this->GetCapableMainEngineModules_MemoizedValue).IsValidData = local_64;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_74);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_4c);
  }
  if ((this->GetCapableMainEngineModules_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment((Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_2c,
             (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
             &this->GetCapableMainEngineModules_MemoizedValue);
  local_1c = 0.0;
  if (iStack_24 != 0) {
    local_44 = 0.0;
    local_1c = 0.0;
    local_10 = 0.0;
    local_14 = 0;
    iVar4 = (*(code *)local_2c[3])();
    if (local_14 < iVar4) {
      local_34 = local_10;
      do {
        piVar5 = (int *)(*(code *)*local_2c)(&local_14);
        if ((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) {
          bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]);
          if (!bVar2) {
            *piVar5 = 0;
          }
        }
        piVar1 = *(int **)(*piVar5 + 0x38);
        if ((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) {
          bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]);
          if (!bVar2) {
            *piVar5 = 0;
          }
        }
        this_00 = (EngineCompartment *)*piVar5;
        fVar6 = (float10)(**(code **)(*piVar1 + 0x154))();
        local_1c = (double)fVar6;
        dVar8 = EngineCompartment__GetExhaustVelocity_km__s(this_00);
        local_14 = local_14 + 1;
        local_34 = dVar8 * local_1c + local_34;
        local_10 = local_34;
        iVar4 = (*(code *)local_2c[3])();
      } while (local_14 < iVar4);
      local_1c = local_10;
    }
    local_10 = (double)((ulonglong)local_10 & 0xffffffff);
    local_34 = 0.0;
    iVar4 = (*(code *)local_2c[3])();
    if (((slice_view *)&local_10)->_4_4_ < iVar4) {
      local_44 = local_34;
      do {
        piVar5 = (int *)(*(code *)*local_2c)((int)&local_10 + 4);
        if ((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) {
          bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]);
          if (!bVar2) {
            *piVar5 = 0;
          }
        }
        fVar7 = (float10)(**(code **)(**(int **)(*piVar5 + 0x38) + 0x154))();
        fVar6 = (float10)local_44;
        local_10 = (double)CONCAT44(((slice_view *)&local_10)->_4_4_ + 1,(undefined4)local_10);
        local_44 = (double)(fVar7 + fVar6);
        local_34 = (double)(fVar7 + fVar6);
        iVar4 = (*(code *)local_2c[3])();
      } while (((slice_view *)&local_10)->_4_4_ < iVar4);
      local_44 = local_34;
    }
    local_1c = local_1c / local_44;
  }
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_2c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 0052d880 52d880_CraftInstance__GetCommandModules_Clear ====
// decompiled by BatchDecomp @ 0052d880 name=CraftInstance_GetCommandModules_Clear conv=__thiscall body=69

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetCommandModules_Clear(void)const  */

void __thiscall CraftInstance__GetCommandModules_Clear(CraftInstance *this)

{
  undefined **local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = ((void *)(0x0091e0b8u));
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &this->GetCommandModules_MemoizedValue,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_14);
  (this->GetCommandModules_MemoizedValue).IsValidData = false;
  return;
}


//==== 0052d8d0 52d8d0_CraftInstance__GetCommandModules_Memoize ====
// decompiled by BatchDecomp @ 0052d8d0 name=CraftInstance_GetCommandModules_Memoize conv=__thiscall body=144

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetCommandModules_Memoize(void)const  */

void __thiscall CraftInstance__GetCommandModules_Memoize(CraftInstance *this)

{
  int iVar1;
  bool bVar2;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_2c[16];
  bool local_1c;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_18[16];
  int local_8;
  
  if ((this->GetCommandModules_MemoizedValue).IsValidData == false) {
    iVar1 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_8 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_8);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar1);
    if (bVar2) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, CraftInstance_GetCommandModules_Clear);
    }
    CraftInstance_GetModulesOfType_struct_EngineCompartment(this,(Type)local_18);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_2c,local_18);
    local_1c = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetCommandModules_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_2c);
    (this->GetCommandModules_MemoizedValue).IsValidData = local_1c;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_2c);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_18);
  }
  return;
}


//==== 0052dae0 52dae0_CraftInstance__GetCompartmentRange_m ====
// decompiled by BatchDecomp @ 0052dae0 name=GetCompartmentRange_m conv=__thiscall body=244

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct Range_L_double_G_ __thiscall CraftInstance__GetCompartmentRange_m(class
   util::SharedPtr<struct ModuleCompartment> const &)const  */

Range_L_double_G_ * __thiscall
CraftInstance__GetCompartmentRange_m(CraftInstance *this,Range_L_double_G_ *__return_storage_ptr__,
          SharedPtr_L_struct_ModuleCompartment_G_ *param_1)

{
  ModuleCompartment *this_00;
  Vec3_L_double_G_ *pVVar1;
  Quaternion_L_double_G_ *pQVar2;
  Quaternion_L_double_G_ local_120;
  Vec3_L_double_G_ local_100;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  double local_d8;
  double local_c0;
  double local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
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
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  double local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  (**(code **)(**(int **)(*(int *)param_1 + 0x38) + 0xac))(&local_38);
  this_00 = *(ModuleCompartment **)param_1;
  pVVar1 = ModuleCompartment__GetOffset_m(this_00,&local_100);
  local_e8 = *(undefined4 *)&pVVar1->X;
  uStack_e4 = *(undefined4 *)((int)&pVVar1->X + 4);
  uStack_e0 = *(undefined4 *)&pVVar1->Y;
  uStack_dc = *(undefined4 *)((int)&pVVar1->Y + 4);
  local_d8 = pVVar1->Z;
  pQVar2 = ModuleCompartment__GetOrientation(this_00,&local_120);
  local_a0 = local_38;
  uStack_9c = uStack_34;
  uStack_98 = uStack_30;
  uStack_94 = uStack_2c;
  local_90 = local_28;
  uStack_8c = uStack_24;
  uStack_88 = uStack_20;
  uStack_84 = uStack_1c;
  local_80 = local_18;
  uStack_7c = uStack_14;
  uStack_78 = uStack_10;
  uStack_74 = uStack_c;
  local_70 = *(undefined4 *)&pQVar2->X;
  uStack_6c = *(undefined4 *)((int)&pQVar2->X + 4);
  uStack_68 = *(undefined4 *)&pQVar2->Y;
  uStack_64 = *(undefined4 *)((int)&pQVar2->Y + 4);
  local_60 = *(undefined4 *)&pQVar2->Z;
  uStack_5c = *(undefined4 *)((int)&pQVar2->Z + 4);
  uStack_58 = *(undefined4 *)&pQVar2->W;
  uStack_54 = *(undefined4 *)((int)&pQVar2->W + 4);
  local_50 = local_e8;
  uStack_4c = uStack_e4;
  uStack_48 = uStack_e0;
  uStack_44 = uStack_dc;
  local_40 = local_d8;
  util__OBB_struct_util__Vec3_double__struct_util__Quaternion_double__double___GetAxisAlignedBounds((OBB_L_struct_util__Vec3_L_double_G__Cstruct_util__Quaternion_L_double_G__Cdouble_G_ *)&local_a0);
  __return_storage_ptr__->Lower = local_c0;
  __return_storage_ptr__->Upper = local_a8;
  if (local_a8 < local_c0) {
    __return_storage_ptr__->Lower = local_a8;
    __return_storage_ptr__->Upper = local_c0;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 0052e1f0 52e1f0_CraftInstance__GetCrewCount ====
// decompiled by BatchDecomp @ 0052e1f0 name=GetCrewCount conv=__thiscall body=291

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: int __thiscall CraftInstance__GetCrewCount(void)const  */

int __thiscall CraftInstance__GetCrewCount(CraftInstance *this)

{
  Maybe_L_util__Darray_L_util__WeakPtr_L_ModuleCompartment_G___G___G_ *pMVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_30[16];
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_20[16];
  bool local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((this->GetCommandModules_MemoizedValue).IsValidData == false) {
    iVar3 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_c = iVar3 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_c);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar3);
    if (bVar2) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, CraftInstance_GetCommandModules_Clear);
    }
    CraftInstance_GetModulesOfType_struct_EngineCompartment(this,(Type)local_30);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_20,local_30);
    local_10 = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetCommandModules_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_20);
    (this->GetCommandModules_MemoizedValue).IsValidData = local_10;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_20);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_30);
  }
  pMVar1 = &this->GetCommandModules_MemoizedValue;
  if ((this->GetCommandModules_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  iVar5 = 0;
  local_c = 0;
  iVar3 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
  if (local_c < iVar3) {
    do {
      piVar4 = (int *)(**(code **)*(int *)&pMVar1->Data)(&local_c);
      if ((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]);
        if (!bVar2) {
          *piVar4 = 0;
        }
      }
      iVar3 = (**(code **)(**(int **)(*piVar4 + 0x38) + 0xbc))();
      local_c = local_c + 1;
      iVar5 = iVar5 + iVar3;
      iVar3 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar5;
}


//==== 0052e320 52e320_CraftInstance__GetCurrentPowerGeneration_W ====
// decompiled by BatchDecomp @ 0052e320 name=GetCurrentPowerGeneration_W conv=__thiscall body=312

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall CraftInstance__GetCurrentPowerGeneration_W(void)const  */

double __thiscall CraftInstance__GetCurrentPowerGeneration_W(CraftInstance *this)

{
  Darray_L_util__SharedPtr_L_ModuleCompartment_G___G_ *pDVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  ReferenceControllerRegistry *this_00;
  bool bVar6;
  PowerCompartment *this_01;
  float10 extraout_ST0;
  ReferenceController *local_1c;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pDVar1 = &this->Compartments;
  bVar6 = false;
  local_c = 0;
  iVar4 = (**(code **)(*(int *)&this->Compartments + 0xc))();
  this_01 = (PowerCompartment *)pDVar1;
  if (local_c < iVar4) {
    do {
      piVar5 = (int *)(**(code **)*(int *)pDVar1)(&local_c);
      iVar4 = (**(code **)(**(int **)(*piVar5 + 0x38) + 0x130))();
      if (((iVar4 == 3) && (cVar2 = (**(code **)(*(int *)*piVar5 + 0x18))(), cVar2 == '\0')) &&
         (bVar3 = ModuleCompartment__HasRadiatorsCoolingIt((ModuleCompartment *)*piVar5), bVar3)) {
        this_01 = (PowerCompartment *)*piVar5;
        bVar6 = true;
        local_1c = (ReferenceController *)piVar5[1];
        if (local_1c != (ReferenceController *)0x0) {
          util__ReferenceController__AddStrongReference(local_1c);
        }
        PowerCompartment__GetPower_W_Memoize(this_01);
        if ((this_01->GetPower_W_MemoizedValue).IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
      }
      if (((bVar6) && (bVar6 = false, local_1c != (ReferenceController *)0x0)) &&
         (bVar3 = util__ReferenceController__ReleaseStrongReference(local_1c), bVar3)) {
        if (this_01 != (PowerCompartment *)0x0) {
          (**(code **)*(int *)this_01)(1);
        }
        this_00 = util__ReferenceControllerRegistry__Get();
        util__ReferenceControllerRegistry__PointerWasDestroyed(this_00,this_01);
        this_01 = (PowerCompartment *)0x0;
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(*(int *)pDVar1 + 0xc))();
    } while (local_c < iVar4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 0052e9e0 52e9e0_CraftInstance__GetEngineModules_Clear ====
// decompiled by BatchDecomp @ 0052e9e0 name=CraftInstance_GetEngineModules_Clear conv=__thiscall body=66

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetEngineModules_Clear(void)const  */

void __thiscall CraftInstance__GetEngineModules_Clear(CraftInstance *this)

{
  undefined **local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = ((void *)(0x0091e0b8u));
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &this->GetEngineModules_MemoizedValue,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_14);
  (this->GetEngineModules_MemoizedValue).IsValidData = false;
  return;
}


//==== 0052ea30 52ea30_CraftInstance__GetEngineModules_Memoize ====
// decompiled by BatchDecomp @ 0052ea30 name=CraftInstance_GetEngineModules_Memoize conv=__thiscall body=135

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetEngineModules_Memoize(void)const  */

void __thiscall CraftInstance__GetEngineModules_Memoize(CraftInstance *this)

{
  int iVar1;
  bool bVar2;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_2c[16];
  bool local_1c;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_18[16];
  int local_8;
  
  if ((this->GetEngineModules_MemoizedValue).IsValidData == false) {
    iVar1 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_8 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_8);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar1);
    if (bVar2) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, CraftInstance_GetEngineModules_Clear);
    }
    CraftInstance_GetModulesOfType_struct_EngineCompartment(this,(Type)local_18);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_2c,local_18);
    local_1c = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetEngineModules_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_2c);
    (this->GetEngineModules_MemoizedValue).IsValidData = local_1c;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_2c);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_18);
  }
  return;
}


//==== 0052eac0 52eac0_CraftInstance__GetEstimatedTorque_N_m ====
extern undefined4 FUN_00524250(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_005272e0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 0052eac0 name=GetEstimatedTorque_N_m conv=__thiscall body=606

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall CraftInstance__GetEstimatedTorque_N_m(struct Vec3_L_double_G_)const
    */

double __thiscall CraftInstance__GetEstimatedTorque_N_m(CraftInstance *this,Vec3_L_double_G_ param_1)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Vec3_L_double_G_ *pVVar6;
  code *pcVar7;
  bool bVar8;
  float10 extraout_ST0;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_84[16];
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_74[16];
  undefined1 local_64[20];
  bool local_50;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_40[4];
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined8 uStack_30;
  int local_2c;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar8 = *(char *)&(this->GetCenterOfMass_km_MemoizedValue).Data.Y == '\0';
  if (bVar8) {
    iVar2 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_2c = iVar2 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_2c);
    bVar8 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar2);
    if (bVar8) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, GetCenterOfMass_km_Clear);
    }
    pVVar6 = GetCenterOfMass_km_MemoizedFunction(this,(Vec3_L_double_G_ *)local_64);
    ((slice_view *)&uStack_34)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_34)->_1_3_[0] | (((slice_view *)&uStack_34)->_1_3_[1] << 8) | (((slice_view *)&uStack_34)->_1_3_[2] << 16)) << 8));
    dVar1 = pVVar6->Z;
    uVar3 = *(undefined4 *)((int)&pVVar6->X + 4);
    uVar4 = *(undefined4 *)&pVVar6->Y;
    uVar5 = *(undefined4 *)((int)&pVVar6->Y + 4);
    ((slice_view *)&local_3c)->_0_4_ = *(undefined4 *)&dVar1;
    ((slice_view *)&local_3c)->_4_4_ = *(undefined4 *)((char *)&dVar1 + 4);
    *(undefined4 *)&(this->GetTotalMass_kg_MemoizedValue).Data = *(undefined4 *)&pVVar6->X;
    *(undefined4 *)((int)&(this->GetTotalMass_kg_MemoizedValue).Data + 4) = uVar3;
    *(undefined4 *)&(this->GetTotalMass_kg_MemoizedValue).IsValidData = uVar4;
    *(undefined4 *)((char *)&(this->GetTotalMass_kg_MemoizedValue) + 0xc) = uVar5;
    *(undefined4 *)&(this->GetCenterOfMass_km_MemoizedValue).Data.X = (undefined4)local_3c;
    *(undefined4 *)((int)&(this->GetCenterOfMass_km_MemoizedValue).Data.X + 4) = ((slice_view *)&local_3c)->_4_4_;
    *(undefined4 *)&(this->GetCenterOfMass_km_MemoizedValue).Data.Y = uStack_34;
    *(undefined4 *)((int)&(this->GetCenterOfMass_km_MemoizedValue).Data.Y + 4) = uStack_30;
    bVar8 = *(char *)&(this->GetCenterOfMass_km_MemoizedValue).Data.Y == '\0';
    local_3c = dVar1;
  }
  pcVar7 = DebugBreak_exref;
  if (bVar8) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_28 = (this->GetTotalMass_kg_MemoizedValue).Data * /*408f400000000000*/1000.0;
  local_20 = *(double *)&(this->GetTotalMass_kg_MemoizedValue).IsValidData * /*408f400000000000*/1000.0
  ;
  local_18 = (this->GetCenterOfMass_km_MemoizedValue).Data.X * /*408f400000000000*/1000.0;
  if ((this->GetCapableEngineModules_MemoizedValue).IsValidData == false) {
    iVar2 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_2c = iVar2 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_2c);
    bVar8 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar2);
    if (bVar8) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, CraftInstance_GetCapableEngineModules_Clear);
    }
    local_10 = GetCurrentPowerGeneration_W(this);
    if ((this->GetEngineModules_MemoizedValue).IsValidData == false) {
      iVar2 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
      local_2c = iVar2 + 1;
      util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
                 &local_2c);
      bVar8 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                         &this->CraftInstanceMemoizationHandlerInstance,iVar2);
      if (bVar8) {
        (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
        [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
             CDE_PMF(pmf_57e8e8d5, CraftInstance_GetEngineModules_Clear);
      }
      CraftInstance_GetModulesOfType_struct_EngineCompartment(this,(Type)local_74);
      util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_40,local_74);
      ((slice_view *)&uStack_30)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_30)->_1_3_[0] | (((slice_view *)&uStack_30)->_1_3_[1] << 8) | (((slice_view *)&uStack_30)->_1_3_[2] << 16)) << 8));
      util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
                ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
                 &this->GetEngineModules_MemoizedValue,
                 (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_40);
      (this->GetEngineModules_MemoizedValue).IsValidData = ((slice_view *)&uStack_30)->_0_1_;
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_40);
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_74);
    }
    pcVar7 = DebugBreak_exref;
    if ((this->GetEngineModules_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      pcVar7 = DebugBreak_exref;
      DebugBreak();
    }
    FUN_00524250(local_84,&this->GetEngineModules_MemoizedValue,&local_10);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment((Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)(local_64 + 4),local_84);
    local_50 = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetCapableEngineModules_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)(local_64 + 4));
    (this->GetCapableEngineModules_MemoizedValue).IsValidData = local_50;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)(local_64 + 4));
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_84);
  }
  if ((this->GetCapableEngineModules_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    (*pcVar7)();
  }
  FUN_005272e0(&this->GetCapableEngineModules_MemoizedValue,&local_28,&param_1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 0052ed20 52ed20_CraftInstance__GetEstimatedTurnTorque_N_m_Clear ====
// decompiled by BatchDecomp @ 0052ed20 name=GetEstimatedTurnTorque_N_m_Clear conv=__thiscall body=19

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetEstimatedTurnTorque_N_m_Clear(void)const  */

void __thiscall CraftInstance__GetEstimatedTurnTorque_N_m_Clear(CraftInstance *this)

{
  (this->GetEstimatedTurnTorque_N_m_MemoizedValue).IsValidData = false;
  (this->GetEstimatedTurnTorque_N_m_MemoizedValue).Data = 0.0;
  return;
}


//==== 0052ee20 52ee20_CraftInstance__GetFullBurnTimeLeft_s_Memoize ====
// decompiled by BatchDecomp @ 0052ee20 name=CraftInstance_GetFullBurnTimeLeft_s_Memoize conv=__thiscall body=100

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetFullBurnTimeLeft_s_Memoize(void)const  */

void __thiscall CraftInstance__GetFullBurnTimeLeft_s_Memoize(CraftInstance *this)

{
  int iVar1;
  bool bVar2;
  double dVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  undefined4 uStack_c;
  int local_8;
  
  if ((this->GetFullBurnTimeLeft_s_MemoizedValue).IsValidData == false) {
    iVar1 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_8 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_8);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar1);
    if (bVar2) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, PowerCompartment__GetHeat_W_Clear);
    }
    dVar3 = CraftInstance_GetFullBurnTimeLeft_s_MemoizedFunction(this);
    ((slice_view *)&uStack_10)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_10)->_1_3_[0] | (((slice_view *)&uStack_10)->_1_3_[1] << 8) | (((slice_view *)&uStack_10)->_1_3_[2] << 16)) << 8));
    local_18 = *(undefined4 *)&dVar3;
    uStack_14 = *(undefined4 *)((char *)&dVar3 + 4);
    *(undefined4 *)&(this->GetFullBurnTimeLeft_s_MemoizedValue).Data = local_18;
    *(undefined4 *)((int)&(this->GetFullBurnTimeLeft_s_MemoizedValue).Data + 4) = uStack_14;
    *(undefined4 *)&(this->GetFullBurnTimeLeft_s_MemoizedValue).IsValidData = uStack_10;
    *(undefined4 *)((char *)&(this->GetFullBurnTimeLeft_s_MemoizedValue) + 0xc) = uStack_c;
  }
  return;
}


//==== 0052ee90 52ee90_CraftInstance__GetFullBurnTimeLeft_s_MemoizedFunction ====
extern undefined4 FUN_00524250(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 0052ee90 name=CraftInstance_GetFullBurnTimeLeft_s_MemoizedFunction conv=__thiscall body=713

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: double __thiscall CraftInstance__GetFullBurnTimeLeft_s_MemoizedFunction(void)const  */

double __thiscall CraftInstance__GetFullBurnTimeLeft_s_MemoizedFunction(CraftInstance *this)

{
  float10 fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar4;
  int iVar5;
  int *piVar6;
  code *pcVar7;
  Maybe_L_util__Darray_L_util__WeakPtr_L_EngineCompartment_G___G___G_ *pMVar8;
  bool bVar9;
  float10 fVar10;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_7c[16];
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_6c[16];
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_5c[16];
  bool local_4c;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_48[16];
  bool local_38;
  double local_34;
  undefined8 uStack_2c;
  double local_24;
  double local_1c;
  double local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar9 = (this->GetTotalDryMass_kg_MemoizedValue).IsValidData == false;
  if (bVar9) {
    iVar5 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_c = iVar5 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_c);
    bVar9 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar5);
    if (bVar9) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, CraftInstance_GetTotalReactionMass_kg_Clear);
    }
    local_24 = GetReactionMass_kg(this,true);
    local_34 = GetReactionMass_kg(this,false);
    uVar2 = uStack_2c;
    local_34 = local_34 + local_24;
    uStack_2c = (double)CONCAT71(((slice_view *)&uStack_2c)->_1_7_,1);
    uVar3 = uStack_2c;
    ((slice_view *)&uStack_2c)->_4_4_ = SUB84(uVar2,4);
    (this->GetTotalDryMass_kg_MemoizedValue).Data = local_34;
    *(undefined4 *)&(this->GetTotalDryMass_kg_MemoizedValue).IsValidData = (undefined4)uStack_2c;
    *(undefined4 *)((char *)&(this->GetTotalDryMass_kg_MemoizedValue) + 0xc) = ((slice_view *)&uStack_2c)->_4_4_;
    bVar9 = (this->GetTotalDryMass_kg_MemoizedValue).IsValidData == false;
    uStack_2c = (double)uVar3;
  }
  pcVar7 = DebugBreak_exref;
  if (bVar9) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  uStack_2c = (this->GetTotalDryMass_kg_MemoizedValue).Data;
  if ((this->GetCapableMainEngineModules_MemoizedValue).IsValidData == false) {
    iVar5 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_c = iVar5 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_c);
    bVar9 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar5);
    if (bVar9) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, CraftInstance_GetCapableMainEngineModules_Clear);
    }
    local_14 = GetCurrentPowerGeneration_W(this);
    if ((this->GetMainEngineModules_MemoizedValue).IsValidData == false) {
      iVar5 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
      local_c = iVar5 + 1;
      util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
                 &local_c);
      bVar9 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                         &this->CraftInstanceMemoizationHandlerInstance,iVar5);
      if (bVar9) {
        (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
        [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
             CDE_PMF(pmf_57e8e8d5, GetMainEngineModules_Clear);
      }
      pDVar4 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
               GetMainEngineModules_MemoizedFunction(this);
      util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_48,pDVar4);
      local_38 = true;
      util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
                ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
                 &this->GetMainEngineModules_MemoizedValue,
                 (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_48);
      (this->GetMainEngineModules_MemoizedValue).IsValidData = local_38;
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_48);
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_7c);
    }
    pcVar7 = DebugBreak_exref;
    if ((this->GetMainEngineModules_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      pcVar7 = DebugBreak_exref;
      DebugBreak();
    }
    FUN_00524250(local_6c,&this->GetMainEngineModules_MemoizedValue,&local_14);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_5c,local_6c);
    local_4c = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetCapableMainEngineModules_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_5c);
    (this->GetCapableMainEngineModules_MemoizedValue).IsValidData = local_4c;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_5c);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_6c);
  }
  pMVar8 = &this->GetCapableMainEngineModules_MemoizedValue;
  if ((this->GetCapableMainEngineModules_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    (*pcVar7)();
  }
  local_1c = 0.0;
  local_c = 0;
  iVar5 = (**(code **)(*(int *)&pMVar8->Data + 0xc))();
  if (local_c < iVar5) {
    local_24 = local_1c;
    do {
      piVar6 = (int *)(**(code **)*(int *)&pMVar8->Data)(&local_c);
      if (((ReferenceController *)piVar6[1] != (ReferenceController *)0x0) &&
         (bVar9 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar6[1]),
         !bVar9)) {
        *piVar6 = 0;
      }
      fVar10 = (float10)(**(code **)(**(int **)(*piVar6 + 0x38) + 0x154))();
      fVar1 = (float10)local_24;
      local_c = local_c + 1;
      local_24 = (double)(fVar10 + fVar1);
      local_1c = (double)(fVar10 + fVar1);
      iVar5 = (**(code **)(*(int *)&pMVar8->Data + 0xc))();
    } while (local_c < iVar5);
    if (/*0000000000000000*/0.0 < local_1c) {
      local_1c = uStack_2c / local_1c;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return (double)extraout_ST0;
    }
  }
  local_1c = 0.0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0_00;
}


//==== 0052f160 52f160_CraftInstance__GetHeatSignatureOffset_m_Clear ====
// decompiled by BatchDecomp @ 0052f160 name=CraftInstance_GetHeatSignatureOffset_m_Clear conv=__thiscall body=29

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetHeatSignatureOffset_m_Clear(void)const  */

void __thiscall CraftInstance__GetHeatSignatureOffset_m_Clear(CraftInstance *this)

{
  *(undefined1 *)&(this->GetHeatSignatureOffset_m_MemoizedValue).Data.Y = 0;
  *(undefined4 *)&(this->GetHeatSignature_W_MemoizedValue).Data = 0;
  *(undefined4 *)((int)&(this->GetHeatSignature_W_MemoizedValue).Data + 4) = 0;
  *(undefined4 *)&(this->GetHeatSignature_W_MemoizedValue).IsValidData = 0;
  *(undefined4 *)((char *)&(this->GetHeatSignature_W_MemoizedValue) + 0xc) = 0;
  (this->GetHeatSignatureOffset_m_MemoizedValue).Data.X = 0.0;
  return;
}


//==== 0052f180 52f180_CraftInstance__GetHeatSignatureOffset_m_Memoize ====
// decompiled by BatchDecomp @ 0052f180 name=CraftInstance_GetHeatSignatureOffset_m_Memoize conv=__thiscall body=121

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetHeatSignatureOffset_m_Memoize(void)const  */

void __thiscall CraftInstance__GetHeatSignatureOffset_m_Memoize(CraftInstance *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  Vec3_L_double_G_ *pVVar6;
  Vec3_L_double_G_ local_20;
  int local_8;
  
  if (*(char *)&(this->GetHeatSignatureOffset_m_MemoizedValue).Data.Y == '\0') {
    iVar1 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_8 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_8);
    bVar5 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar1);
    if (bVar5) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, CraftInstance_GetHeatSignatureOffset_m_Clear);
    }
    pVVar6 = CraftInstance_GetHeatSignatureOffset_m_MemoizedFunction(this,&local_20);
    uVar2 = *(undefined4 *)((int)&pVVar6->X + 4);
    uVar3 = *(undefined4 *)&pVVar6->Y;
    uVar4 = *(undefined4 *)((int)&pVVar6->Y + 4);
    ((slice_view *)&local_20.Z)->_0_4_ = CONCAT31(((slice_view *)&local_20.Z)->_1_3_,1);
    ((slice_view *)&local_20.Y)->_0_4_ = *(undefined4 *)&pVVar6->Z;
    ((slice_view *)&local_20.Y)->_4_4_ = (undefined4)((ulonglong)pVVar6->Z >> 0x20);
    *(undefined4 *)&(this->GetHeatSignature_W_MemoizedValue).Data = *(undefined4 *)&pVVar6->X;
    *(undefined4 *)((int)&(this->GetHeatSignature_W_MemoizedValue).Data + 4) = uVar2;
    *(undefined4 *)&(this->GetHeatSignature_W_MemoizedValue).IsValidData = uVar3;
    *(undefined4 *)((char *)&(this->GetHeatSignature_W_MemoizedValue) + 0xc) = uVar4;
    *(undefined4 *)&(this->GetHeatSignatureOffset_m_MemoizedValue).Data.X = ((slice_view *)&local_20.Y)->_0_4_;
    *(undefined4 *)((int)&(this->GetHeatSignatureOffset_m_MemoizedValue).Data.X + 4) =
         ((slice_view *)&local_20.Y)->_4_4_;
    *(undefined4 *)&(this->GetHeatSignatureOffset_m_MemoizedValue).Data.Y = ((slice_view *)&local_20.Z)->_0_4_;
    *(undefined4 *)((int)&(this->GetHeatSignatureOffset_m_MemoizedValue).Data.Y + 4) =
         ((slice_view *)&local_20.Z)->_4_4_;
  }
  return;
}


//==== 0052f3f0 52f3f0_CraftInstance__GetHeatSignature_W_Clear ====
// decompiled by BatchDecomp @ 0052f3f0 name=CraftInstance_GetHeatSignature_W_Clear conv=__thiscall body=19

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetHeatSignature_W_Clear(void)const  */

void __thiscall CraftInstance__GetHeatSignature_W_Clear(CraftInstance *this)

{
  (this->GetTightenedRadius_km_MemoizedValue).IsValidData = false;
  (this->GetTightenedRadius_km_MemoizedValue).Data = 0.0;
  return;
}


//==== 0052f410 52f410_CraftInstance__GetHeatSignature_W_Memoize ====
// decompiled by BatchDecomp @ 0052f410 name=CraftInstance_GetHeatSignature_W_Memoize conv=__thiscall body=211

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetHeatSignature_W_Memoize(void)const  */

void __thiscall CraftInstance__GetHeatSignature_W_Memoize(CraftInstance *this)

{
  double dVar1;
  float10 fVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  float10 fVar7;
  undefined8 uStack_1c;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((this->GetTightenedRadius_km_MemoizedValue).IsValidData == false) {
    iVar5 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_c = iVar5 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_c);
    bVar4 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar5);
    if (bVar4) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, CraftInstance_GetHeatSignature_W_Clear);
    }
    local_c = 0;
    iVar5 = (**(code **)(*(int *)&this->Compartments + 0xc))();
    if (local_c < iVar5) {
      uStack_1c = 0.0;
      do {
        puVar6 = (undefined4 *)(**(code **)*(int *)&this->Compartments)(&local_c);
        fVar7 = (float10)(**(code **)(*(int *)*puVar6 + 0x2c))();
        fVar2 = (float10)uStack_1c;
        local_c = local_c + 1;
        uStack_1c = (double)(fVar7 + fVar2);
        dVar1 = (double)(fVar7 + fVar2);
        iVar5 = (**(code **)(*(int *)&this->Compartments + 0xc))();
      } while (local_c < iVar5);
    }
    else {
      dVar1 = 0.0;
    }
    dVar3 = uStack_1c;
    uStack_1c = (double)CONCAT71(((slice_view *)&uStack_1c)->_1_7_,1);
    ((slice_view *)&uStack_1c)->_4_4_ = SUB84(dVar3,4);
    (this->GetTightenedRadius_km_MemoizedValue).Data = dVar1;
    *(undefined4 *)&(this->GetTightenedRadius_km_MemoizedValue).IsValidData = (undefined4)uStack_1c;
    *(undefined4 *)((char *)&(this->GetTightenedRadius_km_MemoizedValue) + 0xc) = ((slice_view *)&uStack_1c)->_4_4_;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0052f4f0 52f4f0_CraftInstance__GetHomingProperties ====
// decompiled by BatchDecomp @ 0052f4f0 name=GetHomingProperties conv=__thiscall body=309

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct util::tuple3<class HomingProperties const *,enum ForceMissilePhase::Type,bool>
   __thiscall CraftInstance__GetHomingProperties(void)const  */

void __thiscall CraftInstance__GetHomingProperties(CraftInstance *this)

{
  Maybe_L_util__Darray_L_util__WeakPtr_L_ModuleCompartment_G___G___G_ *pMVar1;
  bool bVar2;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  int *in_stack_00000004;
  undefined1 local_3c[12];
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_30[16];
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_20[16];
  bool local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *in_stack_00000004 = 0;
  in_stack_00000004[1] = 0;
  *(undefined1 *)(in_stack_00000004 + 2) = 1;
  if ((this->GetWorkingCompartments_MemoizedValue).IsValidData == false) {
    iVar4 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_c = iVar4 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_c);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar4);
    if (bVar2) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, CraftInstance_GetWorkingCompartments_Clear);
    }
    pDVar3 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
             CraftInstance_GetWorkingCompartments_MemoizedFunction(this);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_20,pDVar3);
    local_10 = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetWorkingCompartments_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_20);
    (this->GetWorkingCompartments_MemoizedValue).IsValidData = local_10;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_20);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_30);
  }
  pMVar1 = &this->GetWorkingCompartments_MemoizedValue;
  if ((this->GetWorkingCompartments_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_c = 0;
  iVar4 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
  if (local_c < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)*(int *)&pMVar1->Data)(&local_c);
      if (*in_stack_00000004 == 0) {
        if ((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) {
          bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]);
          if (!bVar2) {
            *puVar5 = 0;
          }
        }
        puVar6 = (undefined8 *)(**(code **)(*(int *)*puVar5 + 0x78))(local_3c);
        *(undefined8 *)in_stack_00000004 = *puVar6;
        in_stack_00000004[2] = *(int *)(puVar6 + 1);
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
    } while (local_c < iVar4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0052fb10 52fb10_CraftInstance__GetLaserFeedsForMount ====
// decompiled by BatchDecomp @ 0052fb10 name=GetLaserFeedsForMount conv=__thiscall body=487

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Darray<class util::WeakPtr<struct WeaponCompartment> > __thiscall
   CraftInstance__GetLaserFeedsForMount(class util::WeakPtr<struct WeaponCompartment>)const  */

void __thiscall
CraftInstance__GetLaserFeedsForMount(CraftInstance *this,Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *param_2,
          undefined4 param_3,ReferenceController *param_4)

{
  ReferenceController *pRVar1;
  int iVar2;
  ReferenceController *this_00;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *pDVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  Maybe_L_util__Darray_L_util__WeakPtr_L_WeaponCompartment_G___G___G_ *pMVar7;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_40[16];
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_30[16];
  bool local_20;
  int local_1c;
  int local_18;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *local_14;
  int *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_14 = param_2;
  if ((this->GetWeaponModules_MemoizedValue).IsValidData == false) {
    iVar5 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_c = iVar5 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_c);
    bVar4 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar5);
    if (bVar4) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, CraftInstance_GetWeaponModules_Clear);
    }
    CraftInstance_GetModulesOfType_struct_PropellantTankCompartment(this,(Type)local_40);
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent(local_30,local_40);
    local_20 = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetWeaponModules_MemoizedValue,local_30);
    (this->GetWeaponModules_MemoizedValue).IsValidData = local_20;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_30);
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_40);
  }
  pDVar3 = local_14;
  pMVar7 = &this->GetWeaponModules_MemoizedValue;
  if ((this->GetWeaponModules_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_10 = &param_3;
  *(undefined4 *)pDVar3 = 0;
  *(undefined4 *)(pDVar3 + 4) = 0;
  *(undefined4 *)(pDVar3 + 8) = 0;
  *(undefined4 *)(pDVar3 + 0xc) = 0;
  iVar5 = (**(code **)(*(int *)&pMVar7->Data + 0xc))();
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent(pDVar3,iVar5);
  local_c = 0;
  iVar5 = (**(code **)(*(int *)&pMVar7->Data + 0xc))();
  if (local_c < iVar5) {
    do {
      piVar6 = (int *)(**(code **)*(int *)&pMVar7->Data)(&local_c);
      if (((ReferenceController *)piVar6[1] != (ReferenceController *)0x0) &&
         (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar6[1]),
         !bVar4)) {
        *piVar6 = 0;
      }
      local_1c = *(int *)(*piVar6 + 0x38);
      pRVar1 = (ReferenceController *)local_10[1];
      local_18 = *local_10;
      if (pRVar1 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar1);
        bVar4 = util__ReferenceController__IsDataStillValid(pRVar1);
        if (!bVar4) {
          local_18 = 0;
        }
      }
      local_18 = *(int *)(*(int *)(local_18 + 0x38) + 0xb8);
      if (pRVar1 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(pRVar1);
      }
      if (local_1c == local_18) {
        iVar5 = *(int *)(local_14 + 8);
        local_1c = iVar5 + 1;
        util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_14,&local_1c);
        pDVar3 = local_14;
        bVar4 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_14,iVar5);
        if (bVar4) {
          iVar2 = *(int *)(pDVar3 + 8);
          iVar5 = *(int *)(pDVar3 + 4);
          pRVar1 = *(ReferenceController **)(iVar5 + -4 + iVar2 * 8);
          iVar5 = iVar5 + iVar2 * 8;
          *(int *)(iVar5 + -8) = *piVar6;
          this_00 = (ReferenceController *)piVar6[1];
          *(ReferenceController **)(iVar5 + -4) = this_00;
          if (this_00 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this_00);
          }
          if (pRVar1 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(pRVar1);
          }
        }
      }
      local_c = local_c + 1;
      iVar5 = (**(code **)(*(int *)&pMVar7->Data + 0xc))();
    } while (local_c < iVar5);
  }
  if (param_4 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0052ff70 52ff70_CraftInstance__GetMainEngineModules_Clear ====
// decompiled by BatchDecomp @ 0052ff70 name=GetMainEngineModules_Clear conv=__thiscall body=69

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetMainEngineModules_Clear(void)const  */

void __thiscall CraftInstance__GetMainEngineModules_Clear(CraftInstance *this)

{
  undefined **local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = ((void *)(0x0091e0b8u));
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &this->GetMainEngineModules_MemoizedValue,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_14);
  (this->GetMainEngineModules_MemoizedValue).IsValidData = false;
  return;
}


//==== 0052ffc0 52ffc0_CraftInstance__GetMainEngineModules_Memoize ====
// decompiled by BatchDecomp @ 0052ffc0 name=CraftInstance_GetMainEngineModules_Memoize conv=__thiscall body=139

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetMainEngineModules_Memoize(void)const  */

void __thiscall CraftInstance__GetMainEngineModules_Memoize(CraftInstance *this)

{
  int iVar1;
  bool bVar2;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar3;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_2c[16];
  bool local_1c;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_18[16];
  int local_8;
  
  if ((this->GetMainEngineModules_MemoizedValue).IsValidData == false) {
    iVar1 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_8 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_8);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar1);
    if (bVar2) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, GetMainEngineModules_Clear);
    }
    pDVar3 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
             GetMainEngineModules_MemoizedFunction(this);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_2c,pDVar3);
    local_1c = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetMainEngineModules_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_2c);
    (this->GetMainEngineModules_MemoizedValue).IsValidData = local_1c;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_2c);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_18);
  }
  return;
}


//==== 00530050 530050_CraftInstance__GetMainEngineModules_MemoizedFunction ====
extern undefined4 FUN_005243b0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_00524530(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_005250c0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 00530050 name=GetMainEngineModules_MemoizedFunction conv=__thiscall body=689

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: class util::Darray<class util::WeakPtr<struct EngineCompartment> > __thiscall
   CraftInstance__GetMainEngineModules_MemoizedFunction(void)const  */

void __thiscall CraftInstance__GetMainEngineModules_MemoizedFunction(CraftInstance *this)

{
  Maybe_L_util__Darray_L_util__WeakPtr_L_EngineCompartment_G___G___G_ *this_00;
  Darray_L_enum_GraphicsResource__Type_G_ *pDVar1;
  bool bVar2;
  int iVar3;
  CraftInstance *pCVar4;
  CraftInstance *pCVar5;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *in_stack_00000004;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_64[16];
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_54[16];
  bool local_44;
  Darray_L_enum_GraphicsResource__Type_G_ *local_40;
  CraftInstance *local_3c;
  Darray_L_enum_GraphicsResource__Type_G_ *local_38;
  undefined1 local_34[4];
  ReferenceController *local_30;
  char local_24;
  undefined4 local_1c;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_38 = (Darray_L_GraphicsResource__Type_G_ *)((uint)local_38 & 0xffffff00);
  local_1c = 0;
  uStack_18 = 0;
  iStack_14 = 0;
  uStack_10 = 0;
  pCVar4 = this;
  local_3c = this;
  if ((this->GetEngineModules_MemoizedValue).IsValidData == false) {
    iVar3 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_40 = (Darray_L_GraphicsResource__Type_G_ *)(iVar3 + 1);
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               (int *)&local_40);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar3);
    pCVar4 = local_3c;
    if (bVar2) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, CraftInstance_GetEngineModules_Clear);
    }
    CraftInstance_GetModulesOfType_struct_EngineCompartment(local_3c,(Type)local_64);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_54,local_64);
    local_44 = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &pCVar4->GetEngineModules_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_54);
    (pCVar4->GetEngineModules_MemoizedValue).IsValidData = local_44;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_54);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_64);
  }
  this_00 = &pCVar4->GetEngineModules_MemoizedValue;
  if ((pCVar4->GetEngineModules_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  FUN_005243b0(&local_1c,this_00,local_38);
  if (iStack_14 < 1) {
    local_c = (undefined1 *)((uint)local_c & 0xffffff00);
    pCVar5 = pCVar4;
    if ((pCVar4->GetEngineModules_MemoizedValue).IsValidData == false) {
      local_40 = (Darray_L_GraphicsResource__Type_G_ *)
                 &pCVar4->CraftInstanceMemoizationHandlerInstance;
      iVar3 = (pCVar4->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
      local_38 = (Darray_L_GraphicsResource__Type_G_ *)(iVar3 + 1);
      util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)local_40,(int *)&local_38);
      pDVar1 = local_40;
      bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize(local_40,iVar3);
      pCVar5 = local_3c;
      if (bVar2) {
        *(code **)(*(int *)(pDVar1 + 4) + -4 + *(int *)(pDVar1 + 8) * 4) = CraftInstance_GetEngineModules_Clear;
      }
      CraftInstance_GetModulesOfType_struct_EngineCompartment(local_3c,(Type)local_64);
      util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_54,local_64);
      local_44 = true;
      util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
                ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)this_00,
                 (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_54);
      (pCVar4->GetEngineModules_MemoizedValue).IsValidData = local_44;
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_54);
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_64);
    }
    if ((pCVar4->GetEngineModules_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    FUN_00524530(local_34,this_00,local_c);
    if (local_24 == '\0') {
      *(undefined ***)in_stack_00000004 = ((void *)(0x0091e0b8u))
      ;
      *(undefined4 *)(in_stack_00000004 + 4) = 0;
      *(undefined4 *)(in_stack_00000004 + 8) = 0;
      *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
    }
    else {
      if ((pCVar5->GetEngineModules_MemoizedValue).IsValidData == false) {
        local_38 = (Darray_L_GraphicsResource__Type_G_ *)
                   &pCVar5->CraftInstanceMemoizationHandlerInstance;
        iVar3 = (pCVar5->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
        local_c = (undefined1 *)(iVar3 + 1);
        util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)local_38,(int *)&local_c);
        pDVar1 = local_38;
        bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize(local_38,iVar3);
        if (bVar2) {
          *(code **)(*(int *)(pDVar1 + 4) + -4 + *(int *)(pDVar1 + 8) * 4) = CraftInstance_GetEngineModules_Clear;
        }
        CraftInstance_GetModulesOfType_struct_EngineCompartment(local_3c,(Type)local_64);
        util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_54,local_64);
        local_44 = true;
        util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
                  ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)this_00,
                   (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_54);
        (pCVar4->GetEngineModules_MemoizedValue).IsValidData = local_44;
        util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_54);
        util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_64);
      }
      if ((pCVar4->GetEngineModules_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      local_c = local_34;
      *(undefined4 *)in_stack_00000004 = 0;
      *(undefined4 *)(in_stack_00000004 + 4) = 0;
      *(undefined4 *)(in_stack_00000004 + 8) = 0;
      *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
      iVar3 = (**(code **)(*(int *)&this_00->Data + 0xc))();
      util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)in_stack_00000004,iVar3);
      FUN_005250c0(this_00,&local_c);
    }
    if (local_30 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_30);
    }
  }
  else {
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(in_stack_00000004,(Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_1c
              );
  }
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00530470 530470_CraftInstance__GetMaxThrust_N ====
extern undefined4 FUN_00524250(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 00530470 name=GetMaxThrust_N conv=__thiscall body=499

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall CraftInstance__GetMaxThrust_N(void)const  */

double __thiscall CraftInstance__GetMaxThrust_N(CraftInstance *this)

{
  Maybe_L_util__Darray_L_util__WeakPtr_L_EngineCompartment_G___G___G_ *pMVar1;
  bool bVar2;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar3;
  int iVar4;
  undefined4 *puVar5;
  code *pcVar6;
  float10 extraout_ST0;
  double dVar7;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_64[16];
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_54[16];
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_44[16];
  bool local_34;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_30[16];
  bool local_20;
  double local_1c;
  double local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pcVar6 = DebugBreak_exref;
  if ((this->GetCapableMainEngineModules_MemoizedValue).IsValidData == false) {
    iVar4 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_c = iVar4 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_c);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar4);
    if (bVar2) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, CraftInstance_GetCapableMainEngineModules_Clear);
    }
    local_14 = GetCurrentPowerGeneration_W(this);
    if ((this->GetMainEngineModules_MemoizedValue).IsValidData == false) {
      iVar4 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
      local_c = iVar4 + 1;
      util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
                 &local_c);
      bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                         &this->CraftInstanceMemoizationHandlerInstance,iVar4);
      if (bVar2) {
        (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
        [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
             CDE_PMF(pmf_57e8e8d5, GetMainEngineModules_Clear);
      }
      pDVar3 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
               GetMainEngineModules_MemoizedFunction(this);
      util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_30,pDVar3);
      local_20 = true;
      util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
                ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
                 &this->GetMainEngineModules_MemoizedValue,
                 (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_30);
      (this->GetMainEngineModules_MemoizedValue).IsValidData = local_20;
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_30);
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_64);
    }
    pcVar6 = DebugBreak_exref;
    if ((this->GetMainEngineModules_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      pcVar6 = DebugBreak_exref;
      DebugBreak();
    }
    FUN_00524250(local_54,&this->GetMainEngineModules_MemoizedValue,&local_14);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_44,local_54);
    local_34 = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetCapableMainEngineModules_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_44);
    (this->GetCapableMainEngineModules_MemoizedValue).IsValidData = local_34;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_44);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_54);
  }
  pMVar1 = &this->GetCapableMainEngineModules_MemoizedValue;
  if ((this->GetCapableMainEngineModules_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    (*pcVar6)();
  }
  local_1c = 0.0;
  local_c = 0;
  iVar4 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
  if (local_c < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)*(int *)&pMVar1->Data)(&local_c);
      if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
         !bVar2)) {
        *puVar5 = 0;
      }
      dVar7 = EngineCompartment__GetMaxThrust_N((EngineCompartment *)*puVar5);
      local_1c = dVar7 + local_1c;
      local_c = local_c + 1;
      iVar4 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
    } while (local_c < iVar4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00530a00 530a00_CraftInstance__GetPayloadModules_Clear ====
// decompiled by BatchDecomp @ 00530a00 name=CraftInstance_GetPayloadModules_Clear conv=__thiscall body=69

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetPayloadModules_Clear(void)const  */

void __thiscall CraftInstance__GetPayloadModules_Clear(CraftInstance *this)

{
  undefined **local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = ((void *)(0x0091e0b8u));
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &this->GetPayloadModules_MemoizedValue,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_14);
  (this->GetPayloadModules_MemoizedValue).IsValidData = false;
  return;
}


//==== 00530a50 530a50_CraftInstance__GetPayloadModules_Memoize ====
// decompiled by BatchDecomp @ 00530a50 name=CraftInstance_GetPayloadModules_Memoize conv=__thiscall body=144

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetPayloadModules_Memoize(void)const  */

void __thiscall CraftInstance__GetPayloadModules_Memoize(CraftInstance *this)

{
  int iVar1;
  bool bVar2;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_2c[16];
  bool local_1c;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_18[16];
  int local_8;
  
  if ((this->GetPayloadModules_MemoizedValue).IsValidData == false) {
    iVar1 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_8 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_8);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar1);
    if (bVar2) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, CraftInstance_GetPayloadModules_Clear);
    }
    CraftInstance_GetModulesOfType_struct_PayloadCompartment(this,(Type)local_18);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_2c,local_18);
    local_1c = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetPayloadModules_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_2c);
    (this->GetPayloadModules_MemoizedValue).IsValidData = local_1c;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_2c);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_18);
  }
  return;
}


//==== 00530ae0 530ae0_CraftInstance__GetPowerModules_Clear ====
// decompiled by BatchDecomp @ 00530ae0 name=CraftInstance_GetPowerModules_Clear conv=__thiscall body=69

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetPowerModules_Clear(void)const  */

void __thiscall CraftInstance__GetPowerModules_Clear(CraftInstance *this)

{
  undefined **local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = ((void *)(0x0091e0b8u));
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &this->GetPowerModules_MemoizedValue,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_14);
  (this->GetPowerModules_MemoizedValue).IsValidData = false;
  return;
}


//==== 00530b30 530b30_CraftInstance__GetPowerModules_Memoize ====
// decompiled by BatchDecomp @ 00530b30 name=CraftInstance_GetPowerModules_Memoize conv=__thiscall body=144

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetPowerModules_Memoize(void)const  */

void __thiscall CraftInstance__GetPowerModules_Memoize(CraftInstance *this)

{
  int iVar1;
  bool bVar2;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_2c[16];
  bool local_1c;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_18[16];
  int local_8;
  
  if ((this->GetPowerModules_MemoizedValue).IsValidData == false) {
    iVar1 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_8 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_8);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar1);
    if (bVar2) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, CraftInstance_GetPowerModules_Clear);
    }
    CraftInstance_GetModulesOfType_struct_PayloadCompartment(this,(Type)local_18);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_2c,local_18);
    local_1c = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetPowerModules_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_2c);
    (this->GetPowerModules_MemoizedValue).IsValidData = local_1c;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_2c);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_18);
  }
  return;
}


//==== 00530bc0 530bc0_CraftInstance__GetRadiatorModules_Clear ====
// decompiled by BatchDecomp @ 00530bc0 name=CraftInstance_GetRadiatorModules_Clear conv=__thiscall body=69

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetRadiatorModules_Clear(void)const  */

void __thiscall CraftInstance__GetRadiatorModules_Clear(CraftInstance *this)

{
  undefined **local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = ((void *)(0x0091e0b8u));
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &this->GetRadiatorModules_MemoizedValue,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_14);
  (this->GetRadiatorModules_MemoizedValue).IsValidData = false;
  return;
}


//==== 00530c10 530c10_CraftInstance__GetRadiatorModules_Memoize ====
// decompiled by BatchDecomp @ 00530c10 name=CraftInstance_GetRadiatorModules_Memoize conv=__thiscall body=144

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetRadiatorModules_Memoize(void)const  */

void __thiscall CraftInstance__GetRadiatorModules_Memoize(CraftInstance *this)

{
  int iVar1;
  bool bVar2;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_2c[16];
  bool local_1c;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_18[16];
  int local_8;
  
  if ((this->GetRadiatorModules_MemoizedValue).IsValidData == false) {
    iVar1 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_8 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_8);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar1);
    if (bVar2) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, CraftInstance_GetRadiatorModules_Clear);
    }
    CraftInstance_GetModulesOfType_struct_PayloadCompartment(this,(Type)local_18);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_2c,local_18);
    local_1c = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetRadiatorModules_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_2c);
    (this->GetRadiatorModules_MemoizedValue).IsValidData = local_1c;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_2c);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_18);
  }
  return;
}


//==== 00530ca0 530ca0_CraftInstance__GetRadius_km_Clear ====
// decompiled by BatchDecomp @ 00530ca0 name=GetRadius_km_Clear conv=__thiscall body=19

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetRadius_km_Clear(void)const  */

void __thiscall CraftInstance__GetRadius_km_Clear(CraftInstance *this)

{
  (this->GetBoundingCylinder_m_MemoizedValue).IsValidData = false;
  (this->GetBoundingCylinder_m_MemoizedValue).Data.Height = 0.0;
  return;
}


//==== 00530d90 530d90_CraftInstance__GetReactionMassModules_Clear ====
// decompiled by BatchDecomp @ 00530d90 name=CraftInstance_GetReactionMassModules_Clear conv=__thiscall body=66

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetReactionMassModules_Clear(void)const  */

void __thiscall CraftInstance__GetReactionMassModules_Clear(CraftInstance *this)

{
  undefined **local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = ((void *)(0x0091db14u));
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &this->GetReactionMassModules_MemoizedValue,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  (this->GetReactionMassModules_MemoizedValue).IsValidData = false;
  return;
}


//==== 00530de0 530de0_CraftInstance__GetReactionMassModules_Memoize ====
// decompiled by BatchDecomp @ 00530de0 name=CraftInstance_GetReactionMassModules_Memoize conv=__thiscall body=135

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetReactionMassModules_Memoize(void)const  */

void __thiscall CraftInstance__GetReactionMassModules_Memoize(CraftInstance *this)

{
  int iVar1;
  bool bVar2;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_2c[16];
  bool local_1c;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_18[16];
  int local_8;
  
  if ((this->GetReactionMassModules_MemoizedValue).IsValidData == false) {
    iVar1 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_8 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_8);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar1);
    if (bVar2) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, CraftInstance_GetReactionMassModules_Clear);
    }
    CraftInstance_GetModulesOfType_struct_PropellantTankCompartment(this,(Type)local_18);
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent(local_2c,local_18);
    local_1c = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetReactionMassModules_MemoizedValue,local_2c);
    (this->GetReactionMassModules_MemoizedValue).IsValidData = local_1c;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_2c);
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_18);
  }
  return;
}


//==== 00530e70 530e70_CraftInstance__GetReactionMassOfType ====
// decompiled by BatchDecomp @ 00530e70 name=GetReactionMassOfType conv=__thiscall body=338

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall CraftInstance__GetReactionMassOfType(class Material *)const  */

double __thiscall CraftInstance__GetReactionMassOfType(CraftInstance *this,Material *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  Maybe_L_util__Darray_L_util__WeakPtr_L_PropellantTankCompartment_G___G___G_ *pMVar4;
  float10 extraout_ST0;
  double dVar5;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_38[16];
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_28[16];
  bool local_18;
  double local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((this->GetReactionMassModules_MemoizedValue).IsValidData == false) {
    iVar2 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_c = iVar2 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_c);
    bVar1 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar2);
    if (bVar1) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, CraftInstance_GetReactionMassModules_Clear);
    }
    CraftInstance_GetModulesOfType_struct_PropellantTankCompartment(this,(Type)local_38);
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent(local_28,local_38);
    local_18 = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetReactionMassModules_MemoizedValue,local_28);
    (this->GetReactionMassModules_MemoizedValue).IsValidData = local_18;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_28);
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_38);
  }
  pMVar4 = &this->GetReactionMassModules_MemoizedValue;
  if ((this->GetReactionMassModules_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_14 = 0.0;
  local_c = 0;
  iVar2 = (**(code **)(*(int *)&pMVar4->Data + 0xc))();
  if (local_c < iVar2) {
    do {
      piVar3 = (int *)(**(code **)*(int *)&pMVar4->Data)(&local_c);
      if (((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]),
         !bVar1)) {
        *piVar3 = 0;
      }
      if (*(Material **)(*(int *)(*piVar3 + 0x38) + 0x70) == param_1) {
        if (((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]),
           !bVar1)) {
          *piVar3 = 0;
        }
        dVar5 = *(double *)(*piVar3 + 0x108);
      }
      else {
        dVar5 = 0.0;
      }
      local_14 = dVar5 + local_14;
      local_c = local_c + 1;
      iVar2 = (**(code **)(*(int *)&pMVar4->Data + 0xc))();
    } while (local_c < iVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00531790 531790_CraftInstance__GetStagingWetMass_kg_Clear ====
// decompiled by BatchDecomp @ 00531790 name=GetStagingWetMass_kg_Clear conv=__thiscall body=19

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetStagingWetMass_kg_Clear(void)const  */

void __thiscall CraftInstance__GetStagingWetMass_kg_Clear(CraftInstance *this)

{
  (this->GetStagingWetMass_kg_MemoizedValue).IsValidData = false;
  (this->GetStagingWetMass_kg_MemoizedValue).Data = 0.0;
  return;
}


//==== 005317b0 5317b0_CraftInstance__GetTightenedRadius_km_Clear ====
// decompiled by BatchDecomp @ 005317b0 name=CraftInstance_GetTightenedRadius_km_Clear conv=__thiscall body=19

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetTightenedRadius_km_Clear(void)const  */

void __thiscall CraftInstance__GetTightenedRadius_km_Clear(CraftInstance *this)

{
  (this->GetRadius_km_MemoizedValue).IsValidData = false;
  (this->GetRadius_km_MemoizedValue).Data = 0.0;
  return;
}


//==== 00531870 531870_CraftInstance__GetTotalLength_m_Clear ====
// decompiled by BatchDecomp @ 00531870 name=CraftInstance_GetTotalLength_m_Clear conv=__thiscall body=19

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetTotalLength_m_Clear(void)const  */

void __thiscall CraftInstance__GetTotalLength_m_Clear(CraftInstance *this)

{
  (this->GetLengthRange_m_MemoizedValue).IsValidData = false;
  (this->GetLengthRange_m_MemoizedValue).Data.Upper = 0.0;
  return;
}


//==== 00531990 531990_CraftInstance__GetTotalMass_kg_Memoize ====
// decompiled by BatchDecomp @ 00531990 name=CraftInstance_GetTotalMass_kg_Memoize conv=__thiscall body=228

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetTotalMass_kg_Memoize(void)const  */

void __thiscall CraftInstance__GetTotalMass_kg_Memoize(CraftInstance *this)

{
  int iVar1;
  bool bVar2;
  double dVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  undefined4 uStack_c;
  int local_8;
  
  if ((this->GetTotalReactionMass_kg_MemoizedValue).IsValidData == false) {
    iVar1 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_8 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_8);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar1);
    if (bVar2) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, CraftInstance_GetTotalMass_kg_Clear);
    }
    bVar2 = (this->GetStagingWetMass_kg_MemoizedValue).IsValidData == false;
    if (bVar2) {
      iVar1 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
      local_8 = iVar1 + 1;
      util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
                 &local_8);
      bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                         &this->CraftInstanceMemoizationHandlerInstance,iVar1);
      if (bVar2) {
        (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
        [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
             CDE_PMF(pmf_57e8e8d5, GetStagingWetMass_kg_Clear);
      }
      dVar3 = GetWetMass_kg(this,true);
      ((slice_view *)&uStack_10)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_10)->_1_3_[0] | (((slice_view *)&uStack_10)->_1_3_[1] << 8) | (((slice_view *)&uStack_10)->_1_3_[2] << 16)) << 8));
      local_18 = *(undefined4 *)&dVar3;
      uStack_14 = *(undefined4 *)((char *)&dVar3 + 4);
      *(undefined4 *)&(this->GetStagingWetMass_kg_MemoizedValue).Data = local_18;
      *(undefined4 *)((int)&(this->GetStagingWetMass_kg_MemoizedValue).Data + 4) = uStack_14;
      *(undefined4 *)&(this->GetStagingWetMass_kg_MemoizedValue).IsValidData = uStack_10;
      *(undefined4 *)((char *)&(this->GetStagingWetMass_kg_MemoizedValue) + 0xc) = uStack_c;
      bVar2 = (this->GetStagingWetMass_kg_MemoizedValue).IsValidData == false;
    }
    if (bVar2) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar3 = (this->GetStagingWetMass_kg_MemoizedValue).Data;
    ((slice_view *)&uStack_10)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_10)->_1_3_[0] | (((slice_view *)&uStack_10)->_1_3_[1] << 8) | (((slice_view *)&uStack_10)->_1_3_[2] << 16)) << 8));
    local_18 = *(undefined4 *)&dVar3;
    uStack_14 = *(undefined4 *)((char *)&dVar3 + 4);
    *(undefined4 *)&(this->GetTotalReactionMass_kg_MemoizedValue).Data = local_18;
    *(undefined4 *)((int)&(this->GetTotalReactionMass_kg_MemoizedValue).Data + 4) = uStack_14;
    *(undefined4 *)&(this->GetTotalReactionMass_kg_MemoizedValue).IsValidData = uStack_10;
    *(undefined4 *)((char *)&(this->GetTotalReactionMass_kg_MemoizedValue) + 0xc) = uStack_c;
  }
  return;
}


//==== 00531a80 531a80_CraftInstance__GetTotalRadius_m_Clear ====
// decompiled by BatchDecomp @ 00531a80 name=CraftInstance_GetTotalRadius_m_Clear conv=__thiscall body=19

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetTotalRadius_m_Clear(void)const  */

void __thiscall CraftInstance__GetTotalRadius_m_Clear(CraftInstance *this)

{
  (this->GetCenterZDelta_m_MemoizedValue).IsValidData = false;
  (this->GetCenterZDelta_m_MemoizedValue).Data = 0.0;
  return;
}


//==== 00531aa0 531aa0_CraftInstance__GetTotalRadius_m_Memoize ====
// decompiled by BatchDecomp @ 00531aa0 name=CraftInstance_GetTotalRadius_m_Memoize conv=__thiscall body=524

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetTotalRadius_m_Memoize(void)const  */

void __thiscall CraftInstance__GetTotalRadius_m_Memoize(CraftInstance *this)

{
  ModuleCompartment *this_00;
  double dVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  Vec3_L_double_G_ *pVVar5;
  Quaternion_L_double_G_ *pQVar6;
  Maybe_L_double_G_ *pMVar7;
  double dVar8;
  double dVar9;
  Quaternion_L_double_G_ local_144;
  Vec3_L_double_G_ local_124;
  Maybe_L_double_G_ local_10c;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  double local_7c;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  double local_44;
  double local_3c;
  double local_2c;
  double local_24;
  double local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((this->GetCenterZDelta_m_MemoizedValue).IsValidData == false) {
    iVar3 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_c = iVar3 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_c);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar3);
    if (bVar2) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, CraftInstance_GetTotalRadius_m_Clear);
    }
    local_14 = 0.0;
    bVar2 = ArmorMatrix__HasArmor((this->Armor).Pointer);
    if (bVar2) {
      local_14 = ArmorMatrix__GetMaxCurrentRadius_m((this->Armor).Pointer);
    }
    local_c = 0;
    iVar3 = (**(code **)(*(int *)&this->Compartments + 0xc))();
    if (local_c < iVar3) {
      do {
        piVar4 = (int *)(**(code **)*(int *)&this->Compartments)(&local_c);
        (**(code **)(**(int **)(*piVar4 + 0x38) + 0xac))(&local_74);
        this_00 = (ModuleCompartment *)*piVar4;
        pVVar5 = ModuleCompartment__GetOffset_m(this_00,&local_124);
        local_fc = *(undefined4 *)&pVVar5->X;
        uStack_f8 = *(undefined4 *)((int)&pVVar5->X + 4);
        uStack_f4 = *(undefined4 *)&pVVar5->Y;
        uStack_f0 = *(undefined4 *)((int)&pVVar5->Y + 4);
        uStack_e4 = pVVar5->Z;
        pQVar6 = ModuleCompartment__GetOrientation(this_00,&local_144);
        local_dc = local_74;
        uStack_d8 = uStack_70;
        uStack_d4 = uStack_6c;
        uStack_d0 = uStack_68;
        local_cc = local_64;
        uStack_c8 = uStack_60;
        uStack_c4 = uStack_5c;
        uStack_c0 = uStack_58;
        local_bc = local_54;
        uStack_b8 = uStack_50;
        uStack_b4 = uStack_4c;
        uStack_b0 = uStack_48;
        local_ac = *(undefined4 *)&pQVar6->X;
        uStack_a8 = *(undefined4 *)((int)&pQVar6->X + 4);
        uStack_a4 = *(undefined4 *)&pQVar6->Y;
        uStack_a0 = *(undefined4 *)((int)&pQVar6->Y + 4);
        local_9c = *(undefined4 *)&pQVar6->Z;
        uStack_98 = *(undefined4 *)((int)&pQVar6->Z + 4);
        uStack_94 = *(undefined4 *)&pQVar6->W;
        uStack_90 = *(undefined4 *)((int)&pQVar6->W + 4);
        local_8c = local_fc;
        uStack_88 = uStack_f8;
        uStack_84 = uStack_f4;
        uStack_80 = uStack_f0;
        local_7c = uStack_e4;
        util__OBB_struct_util__Vec3_double__struct_util__Quaternion_double__double___GetAxisAlignedBounds((OBB_L_struct_util__Vec3_L_double_G__Cstruct_util__Quaternion_L_double_G__Cdouble_G_ *)
                   &local_dc);
        dVar9 = local_3c * local_3c;
        if (local_3c * local_3c <= local_24 * local_24) {
          dVar9 = local_24 * local_24;
        }
        dVar8 = local_44 * local_44;
        if (local_44 * local_44 <= local_2c * local_2c) {
          dVar8 = local_2c * local_2c;
        }
        uStack_e4 = dVar9 + dVar8;
        pMVar7 = util__Sqrt(&local_10c,(double *)&uStack_e4);
        if (pMVar7->IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        if (local_14 <= pMVar7->Data) {
          local_14 = pMVar7->Data;
        }
        local_c = local_c + 1;
        iVar3 = (**(code **)(*(int *)&this->Compartments + 0xc))();
      } while (local_c < iVar3);
    }
    dVar8 = uStack_e4;
    local_ec = local_14;
    dVar9 = local_ec;
    uStack_e4 = (double)CONCAT71(((slice_view *)&uStack_e4)->_1_7_,1);
    dVar1 = uStack_e4;
    ((slice_view *)&local_ec)->_0_4_ = *(undefined4 *)&local_14;
    ((slice_view *)&local_ec)->_4_4_ = *(undefined4 *)((char *)&local_14 + 4);
    ((slice_view *)&uStack_e4)->_4_4_ = SUB84(dVar8,4);
    *(undefined4 *)&(this->GetCenterZDelta_m_MemoizedValue).Data = (undefined4)local_ec;
    *(undefined4 *)((int)&(this->GetCenterZDelta_m_MemoizedValue).Data + 4) = ((slice_view *)&local_ec)->_4_4_;
    *(undefined4 *)&(this->GetCenterZDelta_m_MemoizedValue).IsValidData = (undefined4)uStack_e4;
    *(undefined4 *)((char *)&(this->GetCenterZDelta_m_MemoizedValue) + 0xc) = ((slice_view *)&uStack_e4)->_4_4_;
    local_ec = dVar9;
    uStack_e4 = dVar1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00531cb0 531cb0_Body__GetTightRadius_km_Clear ====
// decompiled by BatchDecomp @ 00531cb0 name=Body_GetTightRadius_km_Clear conv=__thiscall body=19

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__GetTightRadius_km_Clear(void)const  */

void __thiscall Body__GetTightRadius_km_Clear(Body *this)

{
  (this->GetTightRadius_km_MemoizedValue).IsValidData = false;
  (this->GetTightRadius_km_MemoizedValue).Data = 0.0;
  return;
}


//==== 00531cd0 531cd0_CraftInstance__GetUnstagedWetMass_kg_Clear ====
// decompiled by BatchDecomp @ 00531cd0 name=GetUnstagedWetMass_kg_Clear conv=__thiscall body=19

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetUnstagedWetMass_kg_Clear(void)const  */

void __thiscall CraftInstance__GetUnstagedWetMass_kg_Clear(CraftInstance *this)

{
  (this->GetUnstagedWetMass_kg_MemoizedValue).IsValidData = false;
  (this->GetUnstagedWetMass_kg_MemoizedValue).Data = 0.0;
  return;
}


//==== 00531cf0 531cf0_CraftInstance__GetWeaponModules_Clear ====
// decompiled by BatchDecomp @ 00531cf0 name=CraftInstance_GetWeaponModules_Clear conv=__thiscall body=66

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetWeaponModules_Clear(void)const  */

void __thiscall CraftInstance__GetWeaponModules_Clear(CraftInstance *this)

{
  undefined **local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = ((void *)(0x0091db14u));
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &this->GetWeaponModules_MemoizedValue,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  (this->GetWeaponModules_MemoizedValue).IsValidData = false;
  return;
}


//==== 00531d40 531d40_CraftInstance__GetWeaponModules_Memoize ====
// decompiled by BatchDecomp @ 00531d40 name=CraftInstance_GetWeaponModules_Memoize conv=__thiscall body=141

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetWeaponModules_Memoize(void)const  */

void __thiscall CraftInstance__GetWeaponModules_Memoize(CraftInstance *this)

{
  int iVar1;
  bool bVar2;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_2c[16];
  bool local_1c;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_18[16];
  int local_8;
  
  if ((this->GetWeaponModules_MemoizedValue).IsValidData == false) {
    iVar1 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_8 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_8);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar1);
    if (bVar2) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, CraftInstance_GetWeaponModules_Clear);
    }
    CraftInstance_GetModulesOfType_struct_PropellantTankCompartment(this,(Type)local_18);
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent(local_2c,local_18);
    local_1c = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetWeaponModules_MemoizedValue,local_2c);
    (this->GetWeaponModules_MemoizedValue).IsValidData = local_1c;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_2c);
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_18);
  }
  return;
}


//==== 00531dd0 531dd0_CraftInstance__GetWetMass_kg ====
// decompiled by BatchDecomp @ 00531dd0 name=GetWetMass_kg conv=__thiscall body=318

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall CraftInstance__GetWetMass_kg(bool)const  */

double __thiscall CraftInstance__GetWetMass_kg(CraftInstance *this,bool param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  ReferenceControllerRegistry *this_00;
  ReferenceController *this_01;
  float10 extraout_ST0;
  PropellantTankCompartment *pPStack_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar3 = false;
  local_c = 0;
  iVar4 = (**(code **)(*(int *)&this->Compartments + 0xc))();
  if (local_c < iVar4) {
    pPStack_14 = (PropellantTankCompartment *)0x0;
    this_01 = (ReferenceController *)0x0;
    do {
      piVar5 = (int *)(**(code **)*(int *)&this->Compartments)(&local_c);
      iVar4 = (**(code **)(**(int **)(*piVar5 + 0x38) + 0x130))();
      if (iVar4 == 6) {
        bVar3 = true;
        this_01 = (ReferenceController *)piVar5[1];
        pPStack_14 = (PropellantTankCompartment *)*piVar5;
        if (this_01 != (ReferenceController *)0x0) {
          util__ReferenceController__AddStrongReference(this_01);
        }
        bVar2 = PropellantTankCompartment__WillDetachWhenEmpty(pPStack_14);
        bVar1 = true;
        if (!bVar2) goto LAB_00531e58;
      }
      else {
LAB_00531e58:
        bVar1 = false;
      }
      if (((bVar3) && (bVar3 = false, this_01 != (ReferenceController *)0x0)) &&
         (bVar2 = util__ReferenceController__ReleaseStrongReference(this_01), bVar2)) {
        if (pPStack_14 != (PropellantTankCompartment *)0x0) {
          (**(code **)*(int *)pPStack_14)(1);
        }
        this_00 = util__ReferenceControllerRegistry__Get();
        util__ReferenceControllerRegistry__PointerWasDestroyed(this_00,pPStack_14);
        pPStack_14 = (PropellantTankCompartment *)0x0;
      }
      if ((!bVar1) || (param_1)) {
        (**(code **)(*(int *)*piVar5 + 0x10))();
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(*(int *)&this->Compartments + 0xc))();
    } while (local_c < iVar4);
  }
  bVar3 = ArmorMatrix__HasArmor((this->Armor).Pointer);
  if (bVar3) {
    ArmorMatrix__GetTotalMass_kg((this->Armor).Pointer);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00531f10 531f10_CraftInstance__GetWorkingCompartments_Clear ====
// decompiled by BatchDecomp @ 00531f10 name=CraftInstance_GetWorkingCompartments_Clear conv=__thiscall body=66

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetWorkingCompartments_Clear(void)const  */

void __thiscall CraftInstance__GetWorkingCompartments_Clear(CraftInstance *this)

{
  undefined **local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = ((void *)(0x0091e0b8u));
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &this->GetWorkingCompartments_MemoizedValue,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_14);
  (this->GetWorkingCompartments_MemoizedValue).IsValidData = false;
  return;
}


//==== 00531f60 531f60_CraftInstance__GetWorkingCompartments_Memoize ====
// decompiled by BatchDecomp @ 00531f60 name=CraftInstance_GetWorkingCompartments_Memoize conv=__thiscall body=130

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetWorkingCompartments_Memoize(void)const  */

void __thiscall CraftInstance__GetWorkingCompartments_Memoize(CraftInstance *this)

{
  int iVar1;
  bool bVar2;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar3;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_2c[16];
  bool local_1c;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_18[16];
  int local_8;
  
  if ((this->GetWorkingCompartments_MemoizedValue).IsValidData == false) {
    iVar1 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_8 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_8);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar1);
    if (bVar2) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, CraftInstance_GetWorkingCompartments_Clear);
    }
    pDVar3 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
             CraftInstance_GetWorkingCompartments_MemoizedFunction(this);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_2c,pDVar3);
    local_1c = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetWorkingCompartments_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_2c);
    (this->GetWorkingCompartments_MemoizedValue).IsValidData = local_1c;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_2c);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_18);
  }
  return;
}


//==== 00532190 532190_CraftInstance__HasCommand ====
// decompiled by BatchDecomp @ 00532190 name=HasCommand conv=__thiscall body=205

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall CraftInstance__HasCommand(void)const  */

bool __thiscall CraftInstance__HasCommand(CraftInstance *this)

{
  bool bVar1;
  int iVar2;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_2c[16];
  bool local_1c;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_18[16];
  int local_8;
  
  if ((this->GetCommandModules_MemoizedValue).IsValidData == false) {
    iVar2 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_8 = iVar2 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_8);
    bVar1 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar2);
    if (bVar1) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, CraftInstance_GetCommandModules_Clear);
    }
    CraftInstance_GetModulesOfType_struct_EngineCompartment(this,(Type)local_18);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_2c,local_18);
    local_1c = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetCommandModules_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_2c);
    (this->GetCommandModules_MemoizedValue).IsValidData = local_1c;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_2c);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_18);
    if ((this->GetCommandModules_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  iVar2 = (**(code **)((this->GetCommandModules_MemoizedValue).Data._pad_0x0_0 + 0xc))();
  return 0 < iVar2;
}


//==== 00532260 532260_CraftInstance__HasCompartmentsLeft ====
// decompiled by BatchDecomp @ 00532260 name=HasCompartmentsLeft conv=__thiscall body=15

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall CraftInstance__HasCompartmentsLeft(void)const  */

bool __thiscall CraftInstance__HasCompartmentsLeft(CraftInstance *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)&this->Compartments + 0xc))();
  return 0 < iVar1;
}


//==== 00532430 532430_CraftInstance__HasFireAllEnginesCommand ====
// decompiled by BatchDecomp @ 00532430 name=HasFireAllEnginesCommand conv=__thiscall body=312

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall CraftInstance__HasFireAllEnginesCommand(void)const  */

bool __thiscall CraftInstance__HasFireAllEnginesCommand(CraftInstance *this)

{
  Maybe_L_util__Darray_L_util__WeakPtr_L_ModuleCompartment_G___G___G_ *pMVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 *puVar5;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_34[16];
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_24[16];
  bool local_14;
  undefined1 local_f[3];
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((this->GetCommandModules_MemoizedValue).IsValidData == false) {
    iVar4 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_c = iVar4 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_c);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar4);
    if (bVar2) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, CraftInstance_GetCommandModules_Clear);
    }
    CraftInstance_GetModulesOfType_struct_EngineCompartment(this,(Type)local_34);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_24,local_34);
    local_14 = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetCommandModules_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_24);
    (this->GetCommandModules_MemoizedValue).IsValidData = local_14;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_24);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_34);
  }
  pMVar1 = &this->GetCommandModules_MemoizedValue;
  if ((this->GetCommandModules_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_c = 0;
  iVar4 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
  if (local_c < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)*(int *)&pMVar1->Data)(&local_c);
      if ((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]);
        if (!bVar2) {
          *puVar5 = 0;
        }
      }
      iVar4 = (**(code **)(*(int *)*puVar5 + 0x48))(local_f);
      if (*(char *)(iVar4 + 1) != '\0') {
        uVar3 = 1;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return (bool)uVar3;
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
    } while (local_c < iVar4);
  }
  uVar3 = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar3;
}


//==== 00532570 532570_CraftInstance__HasNavigationCommand ====
// decompiled by BatchDecomp @ 00532570 name=HasNavigationCommand conv=__thiscall body=311

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall CraftInstance__HasNavigationCommand(void)const  */

bool __thiscall CraftInstance__HasNavigationCommand(CraftInstance *this)

{
  Maybe_L_util__Darray_L_util__WeakPtr_L_ModuleCompartment_G___G___G_ *pMVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_34[16];
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_24[16];
  bool local_14;
  undefined1 local_f[3];
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((this->GetCommandModules_MemoizedValue).IsValidData == false) {
    iVar4 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_c = iVar4 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_c);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar4);
    if (bVar2) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, CraftInstance_GetCommandModules_Clear);
    }
    CraftInstance_GetModulesOfType_struct_EngineCompartment(this,(Type)local_34);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_24,local_34);
    local_14 = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetCommandModules_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_24);
    (this->GetCommandModules_MemoizedValue).IsValidData = local_14;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_24);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_34);
  }
  pMVar1 = &this->GetCommandModules_MemoizedValue;
  if ((this->GetCommandModules_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_c = 0;
  iVar4 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
  if (local_c < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)*(int *)&pMVar1->Data)(&local_c);
      if ((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]);
        if (!bVar2) {
          *puVar5 = 0;
        }
      }
      pcVar6 = (char *)(**(code **)(*(int *)*puVar5 + 0x48))(local_f);
      if (*pcVar6 != '\0') {
        uVar3 = 1;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return (bool)uVar3;
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
    } while (local_c < iVar4);
  }
  uVar3 = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar3;
}


//==== 005326b0 5326b0_CraftInstance__HasTriggerAllPayloadsCommand ====
// decompiled by BatchDecomp @ 005326b0 name=HasTriggerAllPayloadsCommand conv=__thiscall body=312

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall CraftInstance__HasTriggerAllPayloadsCommand(void)const  */

bool __thiscall CraftInstance__HasTriggerAllPayloadsCommand(CraftInstance *this)

{
  Maybe_L_util__Darray_L_util__WeakPtr_L_ModuleCompartment_G___G___G_ *pMVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 *puVar5;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_34[16];
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_24[16];
  bool local_14;
  undefined1 local_f[3];
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((this->GetCommandModules_MemoizedValue).IsValidData == false) {
    iVar4 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_c = iVar4 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_c);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar4);
    if (bVar2) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, CraftInstance_GetCommandModules_Clear);
    }
    CraftInstance_GetModulesOfType_struct_EngineCompartment(this,(Type)local_34);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_24,local_34);
    local_14 = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetCommandModules_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_24);
    (this->GetCommandModules_MemoizedValue).IsValidData = local_14;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_24);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_34);
  }
  pMVar1 = &this->GetCommandModules_MemoizedValue;
  if ((this->GetCommandModules_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_c = 0;
  iVar4 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
  if (local_c < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)*(int *)&pMVar1->Data)(&local_c);
      if ((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]);
        if (!bVar2) {
          *puVar5 = 0;
        }
      }
      iVar4 = (**(code **)(*(int *)*puVar5 + 0x48))(local_f);
      if (*(char *)(iVar4 + 2) != '\0') {
        uVar3 = 1;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return (bool)uVar3;
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
    } while (local_c < iVar4);
  }
  uVar3 = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar3;
}


//==== 005327f0 5327f0_CraftInstance__HoleInArmorExists_Clear ====
// decompiled by BatchDecomp @ 005327f0 name=CraftInstance_HoleInArmorExists_Clear conv=__thiscall body=10

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__HoleInArmorExists_Clear(void)const  */

void __thiscall CraftInstance__HoleInArmorExists_Clear(CraftInstance *this)

{
  *(undefined2 *)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 8) = 0;
  return;
}


//==== 00532800 532800_CraftInstance__HoleInArmorExists_Memoize ====
// decompiled by BatchDecomp @ 00532800 name=CraftInstance_HoleInArmorExists_Memoize conv=__thiscall body=121

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__HoleInArmorExists_Memoize(void)const  */

void __thiscall CraftInstance__HoleInArmorExists_Memoize(CraftInstance *this)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  undefined8 local_8;
  
  if (*(char *)((int)(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x41)
      == '\0') {
    iVar1 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_8 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_8);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar1);
    if (bVar2) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, CraftInstance_HoleInArmorExists_Clear);
    }
    bVar2 = ArmorMatrix__HasArmor((this->Armor).Pointer);
    if ((bVar2) && (bVar2 = ArmorMatrix__ArmorRevealsInternals((this->Armor).Pointer), bVar2)) {
      bVar3 = 1;
    }
    else {
      bVar3 = 0;
    }
    local_8 = CONCAT13(1,(uint3)bVar3 << 0x10);
    *(undefined2 *)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 8) =
         ((slice_view *)&local_8)->_2_2_;
    return;
  }
  return;
}


//==== 00532bc0 532bc0_CraftInstance__OnSplit ====
// decompiled by BatchDecomp @ 00532bc0 name=OnSplit conv=__thiscall body=87

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__OnSplit(void) */

void __thiscall CraftInstance__OnSplit(CraftInstance *this)

{
  int iVar1;
  undefined4 *puVar2;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar1 = (**(code **)(*(int *)&this->Compartments + 0xc))();
  if (local_c < iVar1) {
    do {
      puVar2 = (undefined4 *)(**(code **)*(int *)&this->Compartments)(&local_c);
      (**(code **)(*(int *)*puVar2 + 0x20))();
      local_c = local_c + 1;
      iVar1 = (**(code **)(*(int *)&this->Compartments + 0xc))();
    } while (local_c < iVar1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00569820 569820_TacticalManager__GetCameraNearFarPlanes ====
// decompiled by BatchDecomp @ 00569820 name=GetCameraNearFarPlanes conv=__thiscall body=39

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual struct Range_L_double_G_ __thiscall
   TacticalManager__GetCameraNearFarPlanes(void)const  */

Range_L_double_G_ * __thiscall
TacticalManager__GetCameraNearFarPlanes(TacticalManager *this,Range_L_double_G_ *__return_storage_ptr__)

{
  CameraManager *this_00;
  undefined4 unaff_EBP;
  double dVar1;
  
  this_00 = Manager__GetCameras((Manager *)this);
  dVar1 = CameraManager__GetCameraHeight(this_00);
  GetDefaultNearFarPlanes_km
            (__return_storage_ptr__,(double)CONCAT44(unaff_EBP,(int)((ulonglong)dVar1 >> 0x20)));
  return __return_storage_ptr__;
}


//==== 005c5130 5c5130_SpacecraftComponent__GetEstimatedMaxAngularAcceleration_radians__s2_Clear ====
// decompiled by BatchDecomp @ 005c5130 name=SpacecraftComponent_GetEstimatedMaxAngularAcceleration_radians_s2_Clear conv=__thiscall body=13

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall
   SpacecraftComponent__GetEstimatedMaxAngularAcceleration_radians__s2_Clear(void)const  */

void __thiscall
SpacecraftComponent__GetEstimatedMaxAngularAcceleration_radians__s2_Clear(SpacecraftComponent *this)

{
  *(undefined1 *)&(this->GetThrustersThatNeedToFire_MemoizedValue).Data.Data = 0;
  *(undefined8 *)&(this->GetThrusterLayouts_MemoizedValue).IsValidData = 0;
  return;
}


//==== 006024e0 6024e0_Body__AddComponent_ExplosionComponent_ ====
// decompiled by BatchDecomp @ 006024e0 name=AddComponent_L_class_ExplosionComponent_G_ conv=__thiscall body=328

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::WeakPtr<class ExplosionComponent> __thiscall Body__AddComponent_L_class_ExplosionComponent_G_(class util::SharedPtr<class ExplosionComponent>) */

undefined4 * __thiscallBody__AddComponent_L_class_ExplosionComponent_G_(Body *this,undefined4 *param_2,Component *param_3,ReferenceController *param_4)

{
  int iVar1;
  SharedPtr_L_Component_G_ *pSVar2;
  ReferenceController *this_00;
  bool bVar3;
  ReferenceControllerRegistry *pRVar4;
  Component *pCVar5;
  Component *local_8;
  
  if (this->Created != false) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\tactical\\body.h",0x2e,"!Created",
                    (char *)0x0);
    DebugBreak();
  }
  if (param_4 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(param_4);
  }
  iVar1 = (this->Components).Size;
  local_8 = (Component *)(iVar1 + 1);
  util__Darray_class_util__SharedPtr_struct_UIWidget_____SetSize((Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *)&this->Components,(int *)&local_8);
  bVar3 = util__Darray_class_util__SharedPtr_struct_UIWidget_____CheckSize((Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *)&this->Components,iVar1);
  if (bVar3) {
    iVar1 = (this->Components).Size;
    pSVar2 = (this->Components).Data;
    local_8 = pSVar2[iVar1 + -1].Pointer;
    this_00 = pSVar2[iVar1 + -1].Controller;
    pSVar2[iVar1 + -1].Pointer = param_3;
    pSVar2[iVar1 + -1].Controller = param_4;
    if (param_4 != (ReferenceController *)0x0) {
      util__ReferenceController__AddStrongReference(param_4);
    }
    if ((this_00 != (ReferenceController *)0x0) &&
       (bVar3 = util__ReferenceController__ReleaseStrongReference(this_00), bVar3)) {
      if (local_8 != (Component *)0x0) {
        (**(code **)(local_8->_pad_0x0_0 + 4))(1);
      }
      pCVar5 = local_8;
      pRVar4 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar4,pCVar5);
    }
  }
  if ((param_4 != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__ReleaseStrongReference(param_4), bVar3)) {
    if (param_3 != (Component *)0x0) {
      (**(code **)(param_3->_pad_0x0_0 + 4))(1);
    }
    pCVar5 = param_3;
    pRVar4 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar4,pCVar5);
  }
  *param_2 = param_3;
  param_2[1] = param_4;
  if (((param_4 != (ReferenceController *)0x0) &&
      (util__ReferenceController__AddWeakReference(param_4), param_4 != (ReferenceController *)0x0))
     && (bVar3 = util__ReferenceController__ReleaseStrongReference(param_4), bVar3)) {
    if (param_3 != (Component *)0x0) {
      (**(code **)(param_3->_pad_0x0_0 + 4))(1);
    }
    pRVar4 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar4,param_3);
  }
  return param_2;
}


//==== 0060b220 60b220_SpacecraftComponent__IsCommandEffective ====
// decompiled by BatchDecomp @ 0060b220 name=IsCommandEffective conv=__thiscall body=7

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall SpacecraftComponent__IsCommandEffective(void)const  */

bool __thiscall SpacecraftComponent__IsCommandEffective(SpacecraftComponent *this)

{
  return (bool)*(undefined1 *)&(this->Craft).Pointer;
}


//==== 00724860 724860_TacticalManager__GetAllColliders_Clear ====
// decompiled by BatchDecomp @ 00724860 name=TacticalManager_GetAllColliders_Clear conv=__thiscall body=66

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall TacticalManager__GetAllColliders_Clear(void)const  */

void __thiscall TacticalManager__GetAllColliders_Clear(TacticalManager *this)

{
  undefined **local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = ((void *)(0x0091e0b8u));
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &this->GetAllColliders_MemoizedValue,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_14);
  (this->GetAllColliders_MemoizedValue).IsValidData = false;
  return;
}


//==== 00724b80 724b80_TacticalManager__GetAllBodies_Clear ====
// decompiled by BatchDecomp @ 00724b80 name=TacticalManager_GetAllBodies_Clear conv=__thiscall body=66

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall TacticalManager__GetAllBodies_Clear(void)const  */

void __thiscall TacticalManager__GetAllBodies_Clear(TacticalManager *this)

{
  undefined **local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = ((void *)(0x0091e0b8u));
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &this->GetAllBodies_MemoizedValue,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_14);
  (this->GetAllBodies_MemoizedValue).IsValidData = false;
  return;
}


//==== 0072db10 72db10_SpacecraftComponent__HasDeltaVLeft_Clear ====
// decompiled by BatchDecomp @ 0072db10 name=HasDeltaVLeft_Clear conv=__thiscall body=7

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftComponent__HasDeltaVLeft_Clear(void)const  */

void __thiscall SpacecraftComponent__HasDeltaVLeft_Clear(SpacecraftComponent *this)

{
  (this->HasDeltaVLeft_MemoizedValue).Data = false;
  (this->HasDeltaVLeft_MemoizedValue).IsValidData = false;
  return;
}


//==== 007629b0 7629b0_TacticalManager__GetFutureCelestials_Clear ====
// decompiled by BatchDecomp @ 007629b0 name=TacticalManager_GetFutureCelestials_Clear conv=__thiscall body=66

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall TacticalManager__GetFutureCelestials_Clear(void)const  */

void __thiscall TacticalManager__GetFutureCelestials_Clear(TacticalManager *this)

{
  undefined **local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = ((void *)(0x0091e0b8u));
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &this->GetFutureCelestials_MemoizedValue,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_14);
  (this->GetFutureCelestials_MemoizedValue).IsValidData = false;
  return;
}


//==== 007654c0 7654c0_TacticalManager__GetRelevantCelestials_Clear ====
// decompiled by BatchDecomp @ 007654c0 name=TacticalManager_GetRelevantCelestials_Clear conv=__thiscall body=66

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall TacticalManager__GetRelevantCelestials_Clear(void)const  */

void __thiscall TacticalManager__GetRelevantCelestials_Clear(TacticalManager *this)

{
  undefined **local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = ((void *)(0x0091e0b8u));
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &this->GetRelevantCelestials_MemoizedValue,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_14);
  (this->GetRelevantCelestials_MemoizedValue).IsValidData = false;
  return;
}


//==== 0076a1a0 76a1a0_TacticalManager__PreRender ====
// decompiled by BatchDecomp @ 0076a1a0 name=PreRender conv=__thiscall body=22

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall TacticalManager__PreRender(void)const  */

void __thiscall TacticalManager__PreRender(TacticalManager *this)

{
  MainManager *this_00;
  Starbox *this_01;
  
  this_00 = GameManager__PreRender((GameManager *)this->_pad_0x0_0);
  this_01 = MainManager__GetStarscape(this_00);
  Starbox__Render(this_01);
  return;
}


//==== 007b0280 7b0280_Body__AlterAngularVelocitiesWhenSplitting ====
// decompiled by BatchDecomp @ 007b0280 name=AlterAngularVelocitiesWhenSplitting conv=__thiscall body=154

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__AlterAngularVelocitiesWhenSplitting(struct
   Vec3_L_double_G_,struct Vec3_L_double_G_) */

void __thiscall
Body__AlterAngularVelocitiesWhenSplitting(Body *this,Vec3_L_double_G_ param_1,Vec3_L_double_G_ param_2)

{
  double dVar1;
  Vec3_L_double_G_ local_1c;
  
  GetCenterOfMass_km(this,&local_1c);
  (this->CurrentState).Velocity.X =
       ((local_1c.Z - param_2.Z) * param_1.Y - (local_1c.Y - param_2.Y) * param_1.Z) +
       (this->CurrentState).Velocity.X;
  dVar1 = (this->CurrentState).Velocity.Z;
  (this->CurrentState).Velocity.Y =
       ((local_1c.X - param_2.X) * param_1.Z - (local_1c.Z - param_2.Z) * param_1.X) +
       (this->CurrentState).Velocity.Y;
  (this->CurrentState).Velocity.Z =
       ((local_1c.Y - param_2.Y) * param_1.X - (local_1c.X - param_2.X) * param_1.Y) + dVar1;
  return;
}


//==== 007b0c70 7b0c70_Body__CalculateAcceleration_km__s2 ====
// decompiled by BatchDecomp @ 007b0c70 name=CalculateAcceleration_km__s2 conv=__thiscall body=1200

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: struct Vec3_L_double_G_ __thiscall Body__CalculateAcceleration_km__s2(struct
   util::PhysicalState<struct util::Vec3<double> >,double,double)const  */

Vec3_L_double_G_ * __thiscall
Body__CalculateAcceleration_km__s2(Body *this,Vec3_L_double_G_ *__return_storage_ptr__,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
          undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
          double param_17)

{
  Darray_L_util__SharedPtr_L_Component_G___G_ *pDVar1;
  double dVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  bool *pbVar6;
  int iVar7;
  undefined4 *puVar8;
  double *pdVar9;
  Vec3_L_double_G_ *pVVar10;
  undefined4 unaff_EDI;
  code *pcVar11;
  double dVar12;
  Vec3_L_double_G_ local_78;
  double local_60;
  double local_58;
  double local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  double local_38;
  Vec3_L_double_G_ *local_30;
  undefined8 local_2c;
  undefined8 uStack_24;
  Maybe_L_bool_G_ local_1a;
  double local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_30 = __return_storage_ptr__;
  if ((NAN(param_17) || NAN(/*0000000000000000*/0.0)) != (param_17 == /*0000000000000000*/0.0)) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\tactical\\body.cpp",0x2d7,
                    "TimeStep_s != 0.",(char *)0x0);
    DebugBreak();
  }
  if ((this->HasPhysicality_MemoizedValue).IsValidData == false) {
    iVar7 = (this->BodyMemoizationHandlerInstance).ResetFunctions.Size;
    local_10 = (double)CONCAT44(iVar7 + 1,(uint)local_10);
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->BodyMemoizationHandlerInstance,
               (int *)((int)&local_10 + 4));
    bVar4 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&this->BodyMemoizationHandlerInstance,
                       iVar7);
    if (bVar4) {
      (this->BodyMemoizationHandlerInstance).ResetFunctions.Data
      [(this->BodyMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_eabaeed5, Body_HasPhysicality_Clear);
    }
    pDVar1 = &this->Components;
    ((slice_view *)&local_2c)->_0_4_ = 0;
    ((slice_view *)&local_2c)->_4_4_ = (bool *)0x0;
    ((slice_view *)&uStack_24)->_0_4_ = 0;
    ((slice_view *)&uStack_24)->_4_4_ = 0;
    uVar5 = (**(code **)(*(int *)&this->Components + 0xc))();
    ((slice_view *)&local_2c)->_0_4_ = 0x9256ec;
    ((slice_view *)&local_2c)->_4_4_ = (bool *)0x0;
    uStack_24 = (double)((ulonglong)uVar5 << 0x20);
    if (((int)uVar5 < 0) || (0x3fffffff < (int)uVar5)) {
      uStack_24 = 0.0;
    }
    else if (0 < (int)uVar5) {
      ((slice_view *)&local_10)->_4_4_ = uVar5;
      pbVar6 = (bool *)operator_new__(uVar5);
      if (pbVar6 == (bool *)0x0) {
        pbVar6 = (bool *)0x0;
      }
      else {
        memset(pbVar6,0,((slice_view *)&local_10)->_4_4_);
      }
      iVar7 = 0;
      ((slice_view *)&local_2c)->_4_4_ = pbVar6;
      if (0 < ((slice_view *)&uStack_24)->_4_4_) {
        do {
          pbVar6[iVar7] = false;
          iVar7 = iVar7 + 1;
        } while (iVar7 < ((slice_view *)&uStack_24)->_4_4_);
      }
    }
    local_10 = (double)(ulonglong)(uint)local_10;
    iVar7 = (**(code **)(*(int *)pDVar1 + 0xc))();
    if ((int)((slice_view *)&local_10)->_4_4_ < iVar7) {
      do {
        puVar8 = (undefined4 *)(**(code **)*(int *)pDVar1)((int)&local_10 + 4);
        bVar4 = (bool)(**(code **)(*(int *)*puVar8 + 0x70))();
        local_1a.IsValidData = bVar4;
        util__Darray_bool___Add((Darray_L_bool_G_ *)&local_2c,&local_1a.IsValidData);
        local_10 = (double)CONCAT44(((slice_view *)&local_10)->_4_4_ + 1,(uint)local_10);
        iVar7 = (**(code **)(*(int *)pDVar1 + 0xc))();
      } while ((int)((slice_view *)&local_10)->_4_4_ < iVar7);
    }
    bVar4 = util__Any((Darray_L_bool_G_ *)&local_2c);
    ((slice_view *)&local_2c)->_0_4_ = (int)((void *)(0x009256ecu));
    if (((slice_view *)&local_2c)->_4_4_ != (bool *)0x0) {
      local_1a.IsValidData = bVar4;
      operator_delete__(((slice_view *)&local_2c)->_4_4_);
      bVar4 = local_1a.IsValidData;
    }
    local_1a.IsValidData = true;
    local_1a.Data = bVar4;
    this->HasPhysicality_MemoizedValue = local_1a;
    local_2c = 4.713753846166e-317;
    if ((this->HasPhysicality_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  if ((this->HasPhysicality_MemoizedValue).Data != false) {
    pcVar11 = DebugBreak_exref;
    if ((this->GetMass_kg_MemoizedValue).IsValidData == false) {
      iVar7 = (this->BodyMemoizationHandlerInstance).ResetFunctions.Size;
      local_10 = (double)CONCAT44(iVar7 + 1,(uint)local_10);
      util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->BodyMemoizationHandlerInstance,
                 (int *)((int)&local_10 + 4));
      bVar4 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                         &this->BodyMemoizationHandlerInstance,iVar7);
      if (bVar4) {
        (this->BodyMemoizationHandlerInstance).ResetFunctions.Data
        [(this->BodyMemoizationHandlerInstance).ResetFunctions.Size + -1] =
             CDE_PMF(pmf_eabaeed5, Body_GetMass_kg_Clear);
      }
      local_10 = (double)((ulonglong)local_10 & 0xffffffff);
      local_18 = 0.0;
      iVar7 = (**(code **)(*(int *)&this->Components + 0xc))();
      if ((int)((slice_view *)&local_10)->_4_4_ < iVar7) {
        do {
          puVar8 = (undefined4 *)(**(code **)*(int *)&this->Components)((int)&local_10 + 4);
          pdVar9 = (double *)(**(code **)(*(int *)*puVar8 + 0x50))(&local_58);
          if (*(char *)(pdVar9 + 1) == '\0') {
            dVar12 = 0.0;
          }
          else {
            dVar12 = *pdVar9;
          }
          local_18 = dVar12 + local_18;
          local_10 = (double)CONCAT44(((slice_view *)&local_10)->_4_4_ + 1,(uint)local_10);
          iVar7 = (**(code **)(*(int *)&this->Components + 0xc))();
        } while ((int)((slice_view *)&local_10)->_4_4_ < iVar7);
      }
      dVar2 = uStack_24;
      local_2c = local_18;
      dVar12 = local_2c;
      ((slice_view *)&uStack_24)->_0_1_ = 1;
      uVar3 = uStack_24;
      ((slice_view *)&local_2c)->_0_4_ = *(undefined4 *)&local_18;
      ((slice_view *)&local_2c)->_4_4_ = (bool *)((ulonglong)local_18 >> 0x20);
      ((slice_view *)&uStack_24)->_4_4_ = SUB84(dVar2,4);
      *(int *)&(this->GetMass_kg_MemoizedValue).Data = (int)local_2c;
      *(bool **)((int)&(this->GetMass_kg_MemoizedValue).Data + 4) = ((slice_view *)&local_2c)->_4_4_;
      *(int *)&(this->GetMass_kg_MemoizedValue).IsValidData = (int)uStack_24;
      *(int *)((char *)&(this->GetMass_kg_MemoizedValue) + 0xc) = ((slice_view *)&uStack_24)->_4_4_;
      pcVar11 = DebugBreak_exref;
      local_2c = dVar12;
      if ((this->GetMass_kg_MemoizedValue).IsValidData == false) {
        uStack_24 = (double)uVar3;
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        pcVar11 = DebugBreak_exref;
        DebugBreak();
      }
    }
    uStack_24 = (this->GetMass_kg_MemoizedValue).Data;
    if (0.0 < uStack_24) {
      local_18 = 0.0;
      local_10 = (double)((ulonglong)local_10 & 0xffffffff);
      local_48 = 0.0;
      uStack_40 = 0.0;
      iVar7 = (**(code **)(*(int *)&this->Components + 0xc))();
      if ((int)((slice_view *)&local_10)->_4_4_ < iVar7) {
        do {
          puVar8 = (undefined4 *)(**(code **)*(int *)&this->Components)((int)&local_10 + 4);
          (**(code **)(*(int *)*puVar8 + 0x44))
                    (&local_60,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                     param_11,param_12,param_13,param_14);
          local_48 = local_60 + local_48;
          uStack_40 = local_58 + uStack_40;
          local_18 = local_50 + local_18;
          local_10 = (double)CONCAT44(((slice_view *)&local_10)->_4_4_ + 1,(uint)local_10);
          iVar7 = (**(code **)(*(int *)&this->Components + 0xc))();
        } while ((int)((slice_view *)&local_10)->_4_4_ < iVar7);
      }
      pVVar10 = GetPendingForce_N(this,&local_78,
                                  (double)CONCAT44(unaff_EDI,(int)((ulonglong)param_17 >> 0x20)));
      local_50 = pVVar10->X + local_48;
      local_10 = pVVar10->Y + uStack_40;
      local_18 = pVVar10->Z + local_18;
      if (((NAN(local_50)) || (NAN(local_10))) || (NAN(local_18))) {
        util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\tactical\\body.cpp",0x2e2,
                        "!IsNan(ThrustForce_N)",(char *)0x0);
        (*pcVar11)();
      }
      if (((NAN(local_50) == (local_50 == 0.0)) || (NAN(local_10) == (local_10 == 0.0))) ||
         (NAN(local_18) == (local_18 == 0.0))) {
        local_48 = (local_50 / uStack_24) / /*408f400000000000*/1000.0;
        uStack_40 = (local_10 / uStack_24) / /*408f400000000000*/1000.0;
        local_38 = (local_18 / uStack_24) / /*408f400000000000*/1000.0;
      }
      else {
        local_38 = 0.0;
        local_48 = 0.0;
        uStack_40 = 0.0;
      }
      *(undefined4 *)&local_30->X = (undefined4)local_48;
      *(undefined4 *)((int)&local_30->X + 4) = ((slice_view *)&local_48)->_4_4_;
      *(undefined4 *)&local_30->Y = (undefined4)uStack_40;
      *(undefined4 *)((int)&local_30->Y + 4) = ((slice_view *)&uStack_40)->_4_4_;
      local_30->Z = local_38;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return local_30;
    }
  }
  *(undefined4 *)&local_30->X = 0;
  *(undefined4 *)((int)&local_30->X + 4) = 0;
  *(undefined4 *)&local_30->Y = 0;
  *(undefined4 *)((int)&local_30->Y + 4) = 0;
  local_30->Z = 0.0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return local_30;
}


//==== 007b1b50 7b1b50_Body__Construct ====
// decompiled by BatchDecomp @ 007b1b50 name=Construct conv=__thiscall body=17

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall Body__Construct(void) */

void __thiscall Body__Construct(Body *this)

{
  (**(code **)(*(int *)this + 0x40))();
  this->Created = true;
  return;
}


//==== 007b1b70 7b1b70_Body__CopyOverComponentsToCopy ====
// decompiled by BatchDecomp @ 007b1b70 name=CopyOverComponentsToCopy conv=__thiscall body=248

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__CopyOverComponentsToCopy(class util::WeakPtr<class Body>) */

void __thiscall Body__CopyOverComponentsToCopy(Body *this,int param_2,ReferenceController *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  SharedPtr_L_struct_UIWidget_G_ *pSVar4;
  ReferenceControllerRegistry *this_00;
  int *piVar5;
  ReferenceController *pRVar6;
  int *local_14;
  ReferenceController *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar2 = (**(code **)(*(int *)&this->Components + 0xc))();
  if (local_c < iVar2) {
    do {
      puVar3 = (undefined4 *)(**(code **)*(int *)&this->Components)(&local_c);
      piVar5 = (int *)*puVar3;
      iVar2 = param_2;
      pRVar6 = param_3;
      if (param_3 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(param_3);
      }
      pSVar4 = (SharedPtr_L_struct_UIWidget_G_ *)(**(code **)(*piVar5 + 0x38))(&local_14,iVar2,pRVar6);
      if ((param_3 != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid(param_3), !bVar1)) {
        param_2 = 0;
      }
      util__Darray_class_util__SharedPtr_struct_UIWidget_____Add((Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *)(param_2 + 0x308),pSVar4);
      if ((local_10 != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__ReleaseStrongReference(local_10), bVar1)) {
        if (local_14 != (int *)0x0) {
          (**(code **)(*local_14 + 4))(1);
        }
        piVar5 = local_14;
        this_00 = util__ReferenceControllerRegistry__Get();
        util__ReferenceControllerRegistry__PointerWasDestroyed(this_00,piVar5);
        local_14 = (int *)0x0;
      }
      local_c = local_c + 1;
      iVar2 = (**(code **)(*(int *)&this->Components + 0xc))();
    } while (local_c < iVar2);
  }
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 007b1c70 7b1c70_Body__CreateAtState ====
// decompiled by BatchDecomp @ 007b1c70 name=CreateAtState conv=__thiscall body=457

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__CreateAtState(struct util::PhysicalState<struct util::Vec3<double>
   >,struct util::Quaternion<double>) */

void __thiscall
Body__CreateAtState(Body *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                   undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                   undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                   undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20,
                   undefined4 param_21)

{
  ReferenceController *pRVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined7 uStack_13;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  Body_GetSpacecraftComponent_Memoize(this);
  if ((this->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if ((((this->GetSpacecraftComponent_MemoizedValue).Data.Pointer != (SpacecraftComponent *)0x0) &&
      (pRVar1 = (this->GetSpacecraftComponent_MemoizedValue).Data.Controller,
      pRVar1 != (ReferenceController *)0x0)) &&
     (bVar5 = util__ReferenceController__IsDataStillValid(pRVar1), bVar5)) {
    Body_GetSpacecraftComponent_Memoize(this);
    if ((this->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    pRVar1 = (this->GetSpacecraftComponent_MemoizedValue).Data.Controller;
    if ((pRVar1 != (ReferenceController *)0x0) &&
       (bVar5 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar5)) {
      (this->GetSpacecraftComponent_MemoizedValue).Data.Pointer = (SpacecraftComponent *)0x0;
    }
    bVar5 = SpacecraftComponent__HasNoDeltaVButUsedTo((this->GetSpacecraftComponent_MemoizedValue).Data.Pointer);
    if (bVar5) {
      bVar5 = true;
      goto LAB_007b1d12;
    }
  }
  bVar5 = false;
LAB_007b1d12:
  *(undefined4 *)&(this->PendingState).Data.Position.X = param_2;
  *(undefined4 *)((int)&(this->PendingState).Data.Position.X + 4) = param_3;
  *(undefined4 *)&(this->PendingState).Data.Position.Y = param_4;
  *(undefined4 *)((int)&(this->PendingState).Data.Position.Y + 4) = param_5;
  *(undefined4 *)&(this->PendingState).Data.Position.Z = param_6;
  *(undefined4 *)((int)&(this->PendingState).Data.Position.Z + 4) = param_7;
  *(undefined4 *)&(this->PendingState).Data.Velocity.X = param_8;
  *(undefined4 *)((int)&(this->PendingState).Data.Velocity.X + 4) = param_9;
  *(undefined4 *)&(this->PendingState).Data.Velocity.Y = param_10;
  *(undefined4 *)((int)&(this->PendingState).Data.Velocity.Y + 4) = param_11;
  *(undefined4 *)&(this->PendingState).Data.Velocity.Z = param_12;
  *(undefined4 *)((int)&(this->PendingState).Data.Velocity.Z + 4) = param_13;
  *(ulonglong *)&(this->PendingState).IsValidData = CONCAT71(uStack_13,1);
  if ((this->PendingState).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  uVar2 = *(undefined4 *)((int)&(this->PendingState).Data.Position.X + 4);
  uVar3 = *(undefined4 *)&(this->PendingState).Data.Position.Y;
  uVar4 = *(undefined4 *)((int)&(this->PendingState).Data.Position.Y + 4);
  *(undefined4 *)&(this->CurrentState).Position.X =
       *(undefined4 *)&(this->PendingState).Data.Position.X;
  *(undefined4 *)((int)&(this->CurrentState).Position.X + 4) = uVar2;
  *(undefined4 *)&(this->CurrentState).Position.Y = uVar3;
  *(undefined4 *)((int)&(this->CurrentState).Position.Y + 4) = uVar4;
  uVar2 = *(undefined4 *)((int)&(this->PendingState).Data.Position.Z + 4);
  uVar3 = *(undefined4 *)&(this->PendingState).Data.Velocity.X;
  uVar4 = *(undefined4 *)((int)&(this->PendingState).Data.Velocity.X + 4);
  *(undefined4 *)&(this->CurrentState).Position.Z =
       *(undefined4 *)&(this->PendingState).Data.Position.Z;
  *(undefined4 *)((int)&(this->CurrentState).Position.Z + 4) = uVar2;
  *(undefined4 *)&(this->CurrentState).Velocity.X = uVar3;
  *(undefined4 *)((int)&(this->CurrentState).Velocity.X + 4) = uVar4;
  uVar2 = *(undefined4 *)((int)&(this->PendingState).Data.Velocity.Y + 4);
  uVar3 = *(undefined4 *)&(this->PendingState).Data.Velocity.Z;
  uVar4 = *(undefined4 *)((int)&(this->PendingState).Data.Velocity.Z + 4);
  *(undefined4 *)&(this->CurrentState).Velocity.Y =
       *(undefined4 *)&(this->PendingState).Data.Velocity.Y;
  *(undefined4 *)((int)&(this->CurrentState).Velocity.Y + 4) = uVar2;
  *(undefined4 *)&(this->CurrentState).Velocity.Z = uVar3;
  *(undefined4 *)((int)&(this->CurrentState).Velocity.Z + 4) = uVar4;
  *(undefined4 *)&(this->Orientation).X = param_14;
  *(undefined4 *)((int)&(this->Orientation).X + 4) = param_15;
  *(undefined4 *)&(this->Orientation).Y = param_16;
  *(undefined4 *)((int)&(this->Orientation).Y + 4) = param_17;
  *(undefined4 *)&(this->Orientation).Z = param_18;
  *(undefined4 *)((int)&(this->Orientation).Z + 4) = param_19;
  *(undefined4 *)&(this->Orientation).W = param_20;
  *(undefined4 *)((int)&(this->Orientation).W + 4) = param_21;
  if (!bVar5) {
    *(undefined4 *)&(this->AngularVelocity_radians__s).X = 0;
    *(undefined4 *)((int)&(this->AngularVelocity_radians__s).X + 4) = 0;
    *(undefined4 *)&(this->AngularVelocity_radians__s).Y = 0;
    *(undefined4 *)((int)&(this->AngularVelocity_radians__s).Y + 4) = 0;
    (this->AngularVelocity_radians__s).Z = 0.0;
  }
  (**(code **)(*(int *)&this->PendingImpulses + 0x10))();
  (**(code **)(*(int *)&this->PendingRadialImpulses + 0x10))();
  local_c = 0;
  iVar6 = (**(code **)(*(int *)&this->Components + 0xc))();
  if (local_c < iVar6) {
    do {
      puVar7 = (undefined4 *)(**(code **)*(int *)&this->Components)(&local_c);
      (**(code **)(*(int *)*puVar7 + 0x24))();
      local_c = local_c + 1;
      iVar6 = (**(code **)(*(int *)&this->Components + 0xc))();
    } while (local_c < iVar6);
  }
  (**(code **)(*(int *)this + 0x40))();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 007b1f90 7b1f90_Body__DestroyAtPoint ====
// decompiled by BatchDecomp @ 007b1f90 name=DestroyAtPoint conv=__thiscall body=79

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__DestroyAtPoint(struct Vec3_L_double_G_) */

void __thiscall Body__DestroyAtPoint(Body *this,Vec3_L_double_G_ param_1)

{
  if ((this->PendingState).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  *(undefined4 *)&(this->PendingState).Data.Position.X = ((slice_view *)&param_1.X)->_0_4_;
  *(undefined4 *)((int)&(this->PendingState).Data.Position.X + 4) = ((slice_view *)&param_1.X)->_4_4_;
  *(undefined4 *)&(this->PendingState).Data.Position.Y = ((slice_view *)&param_1.Y)->_0_4_;
  *(undefined4 *)((int)&(this->PendingState).Data.Position.Y + 4) = ((slice_view *)&param_1.Y)->_4_4_;
  (this->PendingState).Data.Position.Z = param_1.Z;
  Destroy(this);
  return;
}


//==== 007b1fe0 7b1fe0_Body__GetAdditionalMomentum_kg_m__s ====
// decompiled by BatchDecomp @ 007b1fe0 name=GetAdditionalMomentum_kg_m__s conv=__thiscall body=112

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall Body__GetAdditionalMomentum_kg_m__s(void)const  */

double __thiscall Body__GetAdditionalMomentum_kg_m__s(Body *this)

{
  int iVar1;
  undefined4 *puVar2;
  float10 extraout_ST0;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar1 = (**(code **)(*(int *)&this->Components + 0xc))();
  if (local_c < iVar1) {
    do {
      puVar2 = (undefined4 *)(**(code **)*(int *)&this->Components)(&local_c);
      (**(code **)(*(int *)*puVar2 + 0x58))();
      local_c = local_c + 1;
      iVar1 = (**(code **)(*(int *)&this->Components + 0xc))();
    } while (local_c < iVar1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 007b2050 7b2050_Body__GetAngularVelocity_radians__s ====
// decompiled by BatchDecomp @ 007b2050 name=GetAngularVelocity_radians__s conv=__thiscall body=33

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct Vec3_L_double_G_ __thiscall Body__GetAngularVelocity_radians__s(void)const  */

Vec3_L_double_G_ * __thiscall
Body__GetAngularVelocity_radians__s(Body *this,Vec3_L_double_G_ *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)((int)&(this->AngularVelocity_radians__s).X + 4);
  uVar2 = *(undefined4 *)&(this->AngularVelocity_radians__s).Y;
  uVar3 = *(undefined4 *)((int)&(this->AngularVelocity_radians__s).Y + 4);
  *(undefined4 *)&__return_storage_ptr__->X = *(undefined4 *)&(this->AngularVelocity_radians__s).X;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Y = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = uVar3;
  __return_storage_ptr__->Z = (this->AngularVelocity_radians__s).Z;
  return __return_storage_ptr__;
}


//==== 007b2080 7b2080_Body__GetBoundingCylinderLine_km_Clear ====
// decompiled by BatchDecomp @ 007b2080 name=Body_GetBoundingCylinderLine_km_Clear conv=__thiscall body=38

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__GetBoundingCylinderLine_km_Clear(void)const  */

void __thiscall Body__GetBoundingCylinderLine_km_Clear(Body *this)

{
  (this->GetBoundingCylinderLine_km_MemoizedValue).IsValidData = false;
  *(undefined4 *)&(this->GetBoundingCylinderLine_km_MemoizedValue).Data.A.X = 0;
  *(undefined4 *)((int)&(this->GetBoundingCylinderLine_km_MemoizedValue).Data.A.X + 4) = 0;
  *(undefined4 *)&(this->GetBoundingCylinderLine_km_MemoizedValue).Data.A.Y = 0;
  *(undefined4 *)((int)&(this->GetBoundingCylinderLine_km_MemoizedValue).Data.A.Y + 4) = 0;
  *(undefined4 *)&(this->GetBoundingCylinderLine_km_MemoizedValue).Data.A.Z = 0;
  *(undefined4 *)((int)&(this->GetBoundingCylinderLine_km_MemoizedValue).Data.A.Z + 4) = 0;
  *(undefined4 *)&(this->GetBoundingCylinderLine_km_MemoizedValue).Data.B.X = 0;
  *(undefined4 *)((int)&(this->GetBoundingCylinderLine_km_MemoizedValue).Data.B.X + 4) = 0;
  *(undefined4 *)&(this->GetBoundingCylinderLine_km_MemoizedValue).Data.B.Y = 0;
  *(undefined4 *)((int)&(this->GetBoundingCylinderLine_km_MemoizedValue).Data.B.Y + 4) = 0;
  *(undefined4 *)&(this->GetBoundingCylinderLine_km_MemoizedValue).Data.B.Z = 0;
  *(undefined4 *)((int)&(this->GetBoundingCylinderLine_km_MemoizedValue).Data.B.Z + 4) = 0;
  return;
}


//==== 007b20b0 7b20b0_Body__GetBoundingCylinderLine_km_Memoize ====
// decompiled by BatchDecomp @ 007b20b0 name=Body_GetBoundingCylinderLine_km_Memoize conv=__thiscall body=135

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__GetBoundingCylinderLine_km_Memoize(void)const  */

void __thiscall Body__GetBoundingCylinderLine_km_Memoize(Body *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  bool bVar13;
  Line3_L_double_G_ *pLVar14;
  Line3_L_double_G_ local_38;
  int local_8;
  
  if ((this->GetBoundingCylinderLine_km_MemoizedValue).IsValidData == false) {
    iVar1 = (this->BodyMemoizationHandlerInstance).ResetFunctions.Size;
    local_8 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->BodyMemoizationHandlerInstance,&local_8);
    bVar13 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&this->BodyMemoizationHandlerInstance
                        ,iVar1);
    if (bVar13) {
      (this->BodyMemoizationHandlerInstance).ResetFunctions.Data
      [(this->BodyMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_eabaeed5, Body_GetBoundingCylinderLine_km_Clear);
    }
    pLVar14 = Body_GetBoundingCylinderLine_km_MemoizedFunction(this,&local_38);
    uVar2 = *(undefined4 *)((int)&(pLVar14->A).X + 4);
    uVar3 = *(undefined4 *)&(pLVar14->A).Y;
    uVar4 = *(undefined4 *)((int)&(pLVar14->A).Y + 4);
    uVar5 = *(undefined4 *)&(pLVar14->A).Z;
    uVar6 = *(undefined4 *)((int)&(pLVar14->A).Z + 4);
    uVar7 = *(undefined4 *)&(pLVar14->B).X;
    uVar8 = *(undefined4 *)((int)&(pLVar14->B).X + 4);
    uVar9 = *(undefined4 *)&(pLVar14->B).Y;
    uVar10 = *(undefined4 *)((int)&(pLVar14->B).Y + 4);
    uVar11 = *(undefined4 *)&(pLVar14->B).Z;
    uVar12 = *(undefined4 *)((int)&(pLVar14->B).Z + 4);
    *(undefined4 *)&(this->GetBoundingCylinderLine_km_MemoizedValue).Data.A.X =
         *(undefined4 *)&(pLVar14->A).X;
    *(undefined4 *)((int)&(this->GetBoundingCylinderLine_km_MemoizedValue).Data.A.X + 4) = uVar2;
    *(undefined4 *)&(this->GetBoundingCylinderLine_km_MemoizedValue).Data.A.Y = uVar3;
    *(undefined4 *)((int)&(this->GetBoundingCylinderLine_km_MemoizedValue).Data.A.Y + 4) = uVar4;
    *(undefined4 *)&(this->GetBoundingCylinderLine_km_MemoizedValue).Data.A.Z = uVar5;
    *(undefined4 *)((int)&(this->GetBoundingCylinderLine_km_MemoizedValue).Data.A.Z + 4) = uVar6;
    *(undefined4 *)&(this->GetBoundingCylinderLine_km_MemoizedValue).Data.B.X = uVar7;
    *(undefined4 *)((int)&(this->GetBoundingCylinderLine_km_MemoizedValue).Data.B.X + 4) = uVar8;
    *(undefined4 *)&(this->GetBoundingCylinderLine_km_MemoizedValue).Data.B.Y = uVar9;
    *(undefined4 *)((int)&(this->GetBoundingCylinderLine_km_MemoizedValue).Data.B.Y + 4) = uVar10;
    *(undefined4 *)&(this->GetBoundingCylinderLine_km_MemoizedValue).Data.B.Z = uVar11;
    *(undefined4 *)((int)&(this->GetBoundingCylinderLine_km_MemoizedValue).Data.B.Z + 4) = uVar12;
    *(ulonglong *)&(this->GetBoundingCylinderLine_km_MemoizedValue).IsValidData =
         CONCAT71(((slice_view *)&local_38.B.Z)->_1_7_,1);
  }
  return;
}


//==== 007b2350 7b2350_Body__GetBoundingCylinder_km_Clear ====
// decompiled by BatchDecomp @ 007b2350 name=Body_GetBoundingCylinder_km_Clear conv=__thiscall body=18

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__GetBoundingCylinder_km_Clear(void)const  */

void __thiscall Body__GetBoundingCylinder_km_Clear(Body *this)

{
  (this->GetBoundingCylinder_km_MemoizedValue).IsValidData = false;
  *(undefined4 *)&(this->GetBoundingCylinder_km_MemoizedValue).Data.Radius = 0;
  *(undefined4 *)((int)&(this->GetBoundingCylinder_km_MemoizedValue).Data.Radius + 4) = 0;
  *(undefined4 *)&(this->GetBoundingCylinder_km_MemoizedValue).Data.Height = 0;
  *(undefined4 *)((int)&(this->GetBoundingCylinder_km_MemoizedValue).Data.Height + 4) = 0;
  return;
}


//==== 007b2490 7b2490_Body__GetBulletComponent_Clear ====
// decompiled by BatchDecomp @ 007b2490 name=Body_GetBulletComponent_Clear conv=__thiscall body=35

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__GetBulletComponent_Clear(void)const  */

void __thiscall Body__GetBulletComponent_Clear(Body *this)

{
  ReferenceController *this_00;
  
  this_00 = (this->GetBulletComponent_MemoizedValue).Data.Controller;
  (this->GetBulletComponent_MemoizedValue).Data.Pointer = (MatterComponent *)0x0;
  (this->GetBulletComponent_MemoizedValue).Data.Controller = (ReferenceController *)0x0;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  (this->GetBulletComponent_MemoizedValue).IsValidData = false;
  return;
}


//==== 007b2660 7b2660_Body__GetCapitalShipComponent_Clear ====
// decompiled by BatchDecomp @ 007b2660 name=Body_GetCapitalShipComponent_Clear conv=__thiscall body=35

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__GetCapitalShipComponent_Clear(void)const  */

void __thiscall Body__GetCapitalShipComponent_Clear(Body *this)

{
  ReferenceController *this_00;
  
  this_00 = (this->GetCapitalShipComponent_MemoizedValue).Data.Controller;
  (this->GetCapitalShipComponent_MemoizedValue).Data.Pointer = (CapitalShipComponent *)0x0;
  (this->GetCapitalShipComponent_MemoizedValue).Data.Controller = (ReferenceController *)0x0;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  (this->GetCapitalShipComponent_MemoizedValue).IsValidData = false;
  return;
}


//==== 007b2690 7b2690_Body__GetCapitalShipComponent_Memoize ====
extern undefined4 FUN_007acb10(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_007ad840(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007b2690 name=Body_GetCapitalShipComponent_Memoize conv=__thiscall body=405

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__GetCapitalShipComponent_Memoize(void)const  */

void __thiscall Body__GetCapitalShipComponent_Memoize(Body *this)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  ReferenceController *pRVar4;
  ReferenceController *this_00;
  ReferenceController *this_01;
  Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *pDVar5;
  Darray_L_util__SharedPtr_L_Component_G___G_ *pDVar6;
  Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ local_40[16];
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_30[16];
  ReferenceController *local_20;
  CapitalShipComponent *local_1c;
  undefined4 local_18;
  undefined4 *puStack_14;
  int iStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_20 = (ReferenceController *)0x0;
  if ((this->GetCapitalShipComponent_MemoizedValue).IsValidData == false) {
    iVar1 = (this->BodyMemoizationHandlerInstance).ResetFunctions.Size;
    local_1c = (CapitalShipComponent *)(iVar1 + 1);
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->BodyMemoizationHandlerInstance,
               (int *)&local_1c);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&this->BodyMemoizationHandlerInstance,
                       iVar1);
    if (bVar2) {
      (this->BodyMemoizationHandlerInstance).ResetFunctions.Data
      [(this->BodyMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_eabaeed5, Body_GetCapitalShipComponent_Clear);
    }
    pDVar6 = &this->Components;
    pDVar5 = local_40;
    local_18 = 0;
    puStack_14 = (undefined4 *)0x0;
    iStack_10 = 0;
    uStack_c = 0;
    uVar3 = util__OnDestroy(pDVar5);
    local_1c = (CapitalShipComponent *)((uint)local_1c & 0xffffff00);
    uVar3 = FUN_007acb10(local_30,uVar3,local_1c,pDVar5,pDVar6);
    local_1c = (CapitalShipComponent *)((uint)local_1c & 0xffffff00);
    FUN_007ad840(&local_18,uVar3,local_1c);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_30);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_40);
    iVar1 = iStack_10;
    if (1 < iStack_10) {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\tactical\\body.cpp",0x1ec,
                      "CapitalShipComps.Num() <= 1",(char *)0x0);
      DebugBreak();
    }
    if (iVar1 == 1) {
      this_00 = (ReferenceController *)puStack_14[1];
      local_1c = (CapitalShipComponent *)*puStack_14;
      if (this_00 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(this_00);
      }
      pRVar4 = (ReferenceController *)0x1;
      this_01 = this_00;
      if (this_00 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(this_00);
        pRVar4 = (ReferenceController *)0x1;
      }
    }
    else {
      pRVar4 = (ReferenceController *)0x2;
      local_1c = (CapitalShipComponent *)0x0;
      this_00 = (ReferenceController *)0x0;
      this_01 = local_20;
    }
    if ((((uint)pRVar4 & 2) != 0) &&
       (local_20 = (ReferenceController *)((uint)pRVar4 & 0xfffffffd), pRVar4 = local_20,
       local_1c != (CapitalShipComponent *)0x0)) {
      util__ReferenceController__ReleaseWeakReference((ReferenceController *)local_1c);
      pRVar4 = local_20;
    }
    if ((this_01 != (ReferenceController *)0x0) && (((uint)pRVar4 & 1) != 0)) {
      util__ReferenceController__ReleaseWeakReference(this_01);
    }
    util__Darray_class_util__WeakPtr_struct_UIWidget______Darray_class_util__WeakPtr_struct_UIWidget((Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_18);
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_00);
    }
    pRVar4 = (this->GetCapitalShipComponent_MemoizedValue).Data.Controller;
    (this->GetCapitalShipComponent_MemoizedValue).Data.Pointer = local_1c;
    (this->GetCapitalShipComponent_MemoizedValue).Data.Controller = this_00;
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_00);
    }
    if (pRVar4 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(pRVar4);
    }
    (this->GetCapitalShipComponent_MemoizedValue).IsValidData = true;
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(this_00);
      util__ReferenceController__ReleaseWeakReference(this_00);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 007b2ee0 7b2ee0_Body__GetColliderComponent_Clear ====
// decompiled by BatchDecomp @ 007b2ee0 name=Body_GetColliderComponent_Clear conv=__thiscall body=35

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__GetColliderComponent_Clear(void)const  */

void __thiscall Body__GetColliderComponent_Clear(Body *this)

{
  ReferenceController *this_00;
  
  this_00 = (this->GetColliderComponent_MemoizedValue).Data.Controller;
  (this->GetColliderComponent_MemoizedValue).Data.Pointer = (Component *)0x0;
  (this->GetColliderComponent_MemoizedValue).Data.Controller = (ReferenceController *)0x0;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  (this->GetColliderComponent_MemoizedValue).IsValidData = false;
  return;
}


//==== 007b2f10 7b2f10_Body__GetColliderComponent_Memoize ====
extern undefined4 FUN_007ae1d0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007b2f10 name=Body_GetColliderComponent_Memoize conv=__thiscall body=193

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__GetColliderComponent_Memoize(void)const  */

void __thiscall Body__GetColliderComponent_Memoize(Body *this)

{
  int iVar1;
  ReferenceController *this_00;
  bool bVar2;
  undefined4 uVar3;
  ReferenceController *pRVar4;
  Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ local_1c[16];
  Component *local_c;
  ReferenceController *local_8;
  
  if ((this->GetColliderComponent_MemoizedValue).IsValidData == false) {
    iVar1 = (this->BodyMemoizationHandlerInstance).ResetFunctions.Size;
    local_8 = (ReferenceController *)(iVar1 + 1);
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->BodyMemoizationHandlerInstance,
               (int *)&local_8);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&this->BodyMemoizationHandlerInstance,
                       iVar1);
    if (bVar2) {
      (this->BodyMemoizationHandlerInstance).ResetFunctions.Data
      [(this->BodyMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_eabaeed5, Body_GetColliderComponent_Clear);
    }
    local_8 = (ReferenceController *)((uint)local_8 & 0xffffff00);
    pRVar4 = local_8;
    uVar3 = util__OnDestroy(local_1c);
    FUN_007ae1d0(&local_c,uVar3,pRVar4);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_1c);
    pRVar4 = local_8;
    if (local_8 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(local_8);
    }
    this_00 = (this->GetColliderComponent_MemoizedValue).Data.Controller;
    (this->GetColliderComponent_MemoizedValue).Data.Pointer = local_c;
    (this->GetColliderComponent_MemoizedValue).Data.Controller = pRVar4;
    if (pRVar4 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar4);
    }
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(this_00);
    }
    (this->GetColliderComponent_MemoizedValue).IsValidData = true;
    if (pRVar4 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(pRVar4);
      util__ReferenceController__ReleaseWeakReference(pRVar4);
    }
  }
  return;
}


//==== 007b2fe0 7b2fe0_Body__GetCollisionAABB_Clear ====
// decompiled by BatchDecomp @ 007b2fe0 name=Body_GetCollisionAABB_Clear conv=__thiscall body=38

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__GetCollisionAABB_Clear(void)const  */

void __thiscall Body__GetCollisionAABB_Clear(Body *this)

{
  (this->GetCollisionAABB_MemoizedValue).IsValidData = false;
  *(undefined4 *)&(this->GetCollisionAABB_MemoizedValue).Data.Lower.X = 0;
  *(undefined4 *)((int)&(this->GetCollisionAABB_MemoizedValue).Data.Lower.X + 4) = 0;
  *(undefined4 *)&(this->GetCollisionAABB_MemoizedValue).Data.Lower.Y = 0;
  *(undefined4 *)((int)&(this->GetCollisionAABB_MemoizedValue).Data.Lower.Y + 4) = 0;
  *(undefined4 *)&(this->GetCollisionAABB_MemoizedValue).Data.Lower.Z = 0;
  *(undefined4 *)((int)&(this->GetCollisionAABB_MemoizedValue).Data.Lower.Z + 4) = 0;
  *(undefined4 *)&(this->GetCollisionAABB_MemoizedValue).Data.Upper.X = 0;
  *(undefined4 *)((int)&(this->GetCollisionAABB_MemoizedValue).Data.Upper.X + 4) = 0;
  *(undefined4 *)&(this->GetCollisionAABB_MemoizedValue).Data.Upper.Y = 0;
  *(undefined4 *)((int)&(this->GetCollisionAABB_MemoizedValue).Data.Upper.Y + 4) = 0;
  *(undefined4 *)&(this->GetCollisionAABB_MemoizedValue).Data.Upper.Z = 0;
  *(undefined4 *)((int)&(this->GetCollisionAABB_MemoizedValue).Data.Upper.Z + 4) = 0;
  return;
}


//==== 007b3010 7b3010_Body__GetCollisionAABB_Memoize ====
// decompiled by BatchDecomp @ 007b3010 name=Body_GetCollisionAABB_Memoize conv=__thiscall body=135

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__GetCollisionAABB_Memoize(void)const  */

void __thiscall Body__GetCollisionAABB_Memoize(Body *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  bool bVar13;
  undefined4 *puVar14;
  undefined7 uStack_f;
  int local_8;
  
  if ((this->GetCollisionAABB_MemoizedValue).IsValidData == false) {
    iVar1 = (this->BodyMemoizationHandlerInstance).ResetFunctions.Size;
    local_8 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->BodyMemoizationHandlerInstance,&local_8);
    bVar13 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&this->BodyMemoizationHandlerInstance
                        ,iVar1);
    if (bVar13) {
      (this->BodyMemoizationHandlerInstance).ResetFunctions.Data
      [(this->BodyMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_eabaeed5, Body_GetCollisionAABB_Clear);
    }
    puVar14 = (undefined4 *)Body_GetCollisionAABB_MemoizedFunction(this);
    uVar2 = puVar14[1];
    uVar3 = puVar14[2];
    uVar4 = puVar14[3];
    uVar5 = puVar14[4];
    uVar6 = puVar14[5];
    uVar7 = puVar14[6];
    uVar8 = puVar14[7];
    uVar9 = puVar14[8];
    uVar10 = puVar14[9];
    uVar11 = puVar14[10];
    uVar12 = puVar14[0xb];
    *(undefined4 *)&(this->GetCollisionAABB_MemoizedValue).Data.Lower.X = *puVar14;
    *(undefined4 *)((int)&(this->GetCollisionAABB_MemoizedValue).Data.Lower.X + 4) = uVar2;
    *(undefined4 *)&(this->GetCollisionAABB_MemoizedValue).Data.Lower.Y = uVar3;
    *(undefined4 *)((int)&(this->GetCollisionAABB_MemoizedValue).Data.Lower.Y + 4) = uVar4;
    *(undefined4 *)&(this->GetCollisionAABB_MemoizedValue).Data.Lower.Z = uVar5;
    *(undefined4 *)((int)&(this->GetCollisionAABB_MemoizedValue).Data.Lower.Z + 4) = uVar6;
    *(undefined4 *)&(this->GetCollisionAABB_MemoizedValue).Data.Upper.X = uVar7;
    *(undefined4 *)((int)&(this->GetCollisionAABB_MemoizedValue).Data.Upper.X + 4) = uVar8;
    *(undefined4 *)&(this->GetCollisionAABB_MemoizedValue).Data.Upper.Y = uVar9;
    *(undefined4 *)((int)&(this->GetCollisionAABB_MemoizedValue).Data.Upper.Y + 4) = uVar10;
    *(undefined4 *)&(this->GetCollisionAABB_MemoizedValue).Data.Upper.Z = uVar11;
    *(undefined4 *)((int)&(this->GetCollisionAABB_MemoizedValue).Data.Upper.Z + 4) = uVar12;
    *(ulonglong *)&(this->GetCollisionAABB_MemoizedValue).IsValidData = CONCAT71(uStack_f,1);
  }
  return;
}


//==== 007b3250 7b3250_Body__GetControllableComponent_Clear ====
// decompiled by BatchDecomp @ 007b3250 name=Body_GetControllableComponent_Clear conv=__thiscall body=35

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__GetControllableComponent_Clear(void)const  */

void __thiscall Body__GetControllableComponent_Clear(Body *this)

{
  ReferenceController *this_00;
  
  this_00 = (this->GetControllableComponent_MemoizedValue).Data.Controller;
  (this->GetControllableComponent_MemoizedValue).Data.Pointer = (ControllableComponent *)0x0;
  (this->GetControllableComponent_MemoizedValue).Data.Controller = (ReferenceController *)0x0;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  (this->GetControllableComponent_MemoizedValue).IsValidData = false;
  return;
}


//==== 007b3420 7b3420_Body__GetCrossSection_m2_Clear ====
// decompiled by BatchDecomp @ 007b3420 name=GetCrossSection_m2_Clear conv=__thiscall body=19

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__GetCrossSection_m2_Clear(void)const  */

void __thiscall Body__GetCrossSection_m2_Clear(Body *this)

{
  (this->GetCrossSection_m2_MemoizedValue).IsValidData = false;
  (this->GetCrossSection_m2_MemoizedValue).Data = 0.0;
  return;
}


//==== 007b3440 7b3440_Body__GetCrossSection_m2_Memoize ====
// decompiled by BatchDecomp @ 007b3440 name=GetCrossSection_m2_Memoize conv=__thiscall body=381

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__GetCrossSection_m2_Memoize(void)const  */

void __thiscall Body__GetCrossSection_m2_Memoize(Body *this)

{
  Darray_L_util__SharedPtr_L_Component_G___G_ *pDVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_34;
  Darray_L_double_G_ local_30;
  double local_20;
  undefined8 uStack_18;
  undefined4 uStack_14;
  undefined1 local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((this->GetCrossSection_m2_MemoizedValue).IsValidData == false) {
    iVar3 = (this->BodyMemoizationHandlerInstance).ResetFunctions.Size;
    local_c = iVar3 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->BodyMemoizationHandlerInstance,&local_c);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&this->BodyMemoizationHandlerInstance,
                       iVar3);
    if (bVar2) {
      (this->BodyMemoizationHandlerInstance).ResetFunctions.Data
      [(this->BodyMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_eabaeed5, GetCrossSection_m2_Clear);
    }
    pDVar1 = &this->Components;
    local_10 = 0;
    local_30._pad_0x0_0 = 0;
    local_30.Data = (double *)0x0;
    local_30.Size = 0;
    local_30.Capacity = 0;
    iVar3 = (**(code **)(*(int *)&this->Components + 0xc))();
    util__Darray_double___Darray_double(&local_30,iVar3);
    local_c = 0;
    iVar3 = (**(code **)(*(int *)pDVar1 + 0xc))();
    if (local_c < iVar3) {
      do {
        puVar4 = (undefined4 *)(**(code **)*(int *)pDVar1)(&local_c);
        (**(code **)(*(int *)*puVar4 + 0x68))(&local_20);
        iVar3 = local_30.Size;
        if ((char)uStack_18 != '\0') {
          local_34 = local_30.Size + 1;
          util__Darray_double___SetSize(&local_30,&local_34);
          bVar2 = util__Darray_double___CheckSize(&local_30,iVar3);
          if (bVar2) {
            local_30.Data[local_30.Size + -1] = local_20;
          }
        }
        local_c = local_c + 1;
        iVar3 = (**(code **)(*(int *)pDVar1 + 0xc))();
      } while (local_c < iVar3);
    }
    if (1 < local_30.Size) {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\tactical\\body.cpp",0x281,
                      "CrossSections_m2.Num() <= 1",(char *)0x0);
      DebugBreak();
    }
    if (local_30.Size < 1) {
      uVar6 = 0;
      uVar7 = 0;
    }
    else {
      local_34 = 0;
      puVar5 = (undefined8 *)(**(code **)local_30._pad_0x0_0)(&local_34);
      uVar6 = (undefined4)*puVar5;
      uVar7 = (undefined4)((ulonglong)*puVar5 >> 0x20);
    }
    local_30._pad_0x0_0 = (int)((void *)(0x0091da54u));
    if (local_30.Data != (double *)0x0) {
      operator_delete__(local_30.Data);
    }
    ((slice_view *)&uStack_18)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_18)->_1_3_[0] | (((slice_view *)&uStack_18)->_1_3_[1] << 8) | (((slice_view *)&uStack_18)->_1_3_[2] << 16)) << 8));
    *(undefined4 *)&(this->GetCrossSection_m2_MemoizedValue).Data = uVar6;
    *(undefined4 *)((int)&(this->GetCrossSection_m2_MemoizedValue).Data + 4) = uVar7;
    *(undefined4 *)&(this->GetCrossSection_m2_MemoizedValue).IsValidData = uStack_18;
    *(undefined4 *)((char *)&(this->GetCrossSection_m2_MemoizedValue) + 0xc) = uStack_14;
    local_20 = (double)CONCAT44(uVar7,uVar6);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 007b35c0 7b35c0_Body__GetDebrisComponent_Clear ====
// decompiled by BatchDecomp @ 007b35c0 name=Body_GetDebrisComponent_Clear conv=__thiscall body=35

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__GetDebrisComponent_Clear(void)const  */

void __thiscall Body__GetDebrisComponent_Clear(Body *this)

{
  ReferenceController *this_00;
  
  this_00 = (this->GetDebrisComponent_MemoizedValue).Data.Controller;
  (this->GetDebrisComponent_MemoizedValue).Data.Pointer = (DebrisComponent *)0x0;
  (this->GetDebrisComponent_MemoizedValue).Data.Controller = (ReferenceController *)0x0;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  (this->GetDebrisComponent_MemoizedValue).IsValidData = false;
  return;
}


//==== 007b3b50 7b3b50_Body__GetLastFrameAcceleration_km__s2 ====
// decompiled by BatchDecomp @ 007b3b50 name=GetLastFrameAcceleration_km__s2 conv=__thiscall body=33

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct Vec3_L_double_G_ __thiscall Body__GetLastFrameAcceleration_km__s2(void)const  */

Vec3_L_double_G_ * __thiscall
Body__GetLastFrameAcceleration_km__s2(Body *this,Vec3_L_double_G_ *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)((int)&(this->LastFrameAcceleration_km__s2).X + 4);
  uVar2 = *(undefined4 *)&(this->LastFrameAcceleration_km__s2).Y;
  uVar3 = *(undefined4 *)((int)&(this->LastFrameAcceleration_km__s2).Y + 4);
  *(undefined4 *)&__return_storage_ptr__->X = *(undefined4 *)&(this->LastFrameAcceleration_km__s2).X
  ;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Y = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = uVar3;
  __return_storage_ptr__->Z = (this->LastFrameAcceleration_km__s2).Z;
  return __return_storage_ptr__;
}


//==== 007b3b80 7b3b80_Body__GetMass_kg_Clear ====
// decompiled by BatchDecomp @ 007b3b80 name=Body_GetMass_kg_Clear conv=__thiscall body=19

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__GetMass_kg_Clear(void)const  */

void __thiscall Body__GetMass_kg_Clear(Body *this)

{
  (this->GetMass_kg_MemoizedValue).IsValidData = false;
  (this->GetMass_kg_MemoizedValue).Data = 0.0;
  return;
}


//==== 007b3c80 7b3c80_Body__GetOrientation ====
// decompiled by BatchDecomp @ 007b3c80 name=GetOrientation conv=__thiscall body=138

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct util::Quaternion<double> __thiscall Body__GetOrientation(void)const  */

Quaternion_L_double_G_ * __thiscall
Body__GetOrientation(Body *this,Quaternion_L_double_G_ *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((((NAN((this->Orientation).X)) || (NAN((this->Orientation).Y))) ||
      (NAN((this->Orientation).Z))) || (NAN((this->Orientation).W))) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\tactical\\body.cpp",0x23a,
                    "Orientation.IsValid()",(char *)0x0);
    DebugBreak();
  }
  uVar1 = *(undefined4 *)((int)&(this->Orientation).X + 4);
  uVar2 = *(undefined4 *)&(this->Orientation).Y;
  uVar3 = *(undefined4 *)((int)&(this->Orientation).Y + 4);
  *(undefined4 *)&__return_storage_ptr__->X = *(undefined4 *)&(this->Orientation).X;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Y = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = uVar3;
  uVar1 = *(undefined4 *)((int)&(this->Orientation).Z + 4);
  uVar2 = *(undefined4 *)&(this->Orientation).W;
  uVar3 = *(undefined4 *)((int)&(this->Orientation).W + 4);
  *(undefined4 *)&__return_storage_ptr__->Z = *(undefined4 *)&(this->Orientation).Z;
  *(undefined4 *)((int)&__return_storage_ptr__->Z + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->W = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->W + 4) = uVar3;
  return __return_storage_ptr__;
}


//==== 007b4080 7b4080_Body__GetPendingState ====
// decompiled by BatchDecomp @ 007b4080 name=GetPendingState conv=__thiscall body=83

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct util::PhysicalState<struct util::Vec3<double> > __thiscall
   Body__GetPendingState(void)const  */

void __thiscall Body__GetPendingState(Body *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_stack_00000004;
  
  if ((this->PendingState).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x12,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  uVar1 = *(undefined4 *)((int)&(this->PendingState).Data.Position.X + 4);
  uVar2 = *(undefined4 *)&(this->PendingState).Data.Position.Y;
  uVar3 = *(undefined4 *)((int)&(this->PendingState).Data.Position.Y + 4);
  *in_stack_00000004 = *(undefined4 *)&(this->PendingState).Data.Position.X;
  in_stack_00000004[1] = uVar1;
  in_stack_00000004[2] = uVar2;
  in_stack_00000004[3] = uVar3;
  uVar1 = *(undefined4 *)((int)&(this->PendingState).Data.Position.Z + 4);
  uVar2 = *(undefined4 *)&(this->PendingState).Data.Velocity.X;
  uVar3 = *(undefined4 *)((int)&(this->PendingState).Data.Velocity.X + 4);
  in_stack_00000004[4] = *(undefined4 *)&(this->PendingState).Data.Position.Z;
  in_stack_00000004[5] = uVar1;
  in_stack_00000004[6] = uVar2;
  in_stack_00000004[7] = uVar3;
  uVar1 = *(undefined4 *)((int)&(this->PendingState).Data.Velocity.Y + 4);
  uVar2 = *(undefined4 *)&(this->PendingState).Data.Velocity.Z;
  uVar3 = *(undefined4 *)((int)&(this->PendingState).Data.Velocity.Z + 4);
  in_stack_00000004[8] = *(undefined4 *)&(this->PendingState).Data.Velocity.Y;
  in_stack_00000004[9] = uVar1;
  in_stack_00000004[10] = uVar2;
  in_stack_00000004[0xb] = uVar3;
  return;
}


//==== 007b4350 7b4350_Body__GetPositionSweepLine_km ====
// decompiled by BatchDecomp @ 007b4350 name=GetPositionSweepLine_km conv=__thiscall body=85

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct util__Line3_L_double_G_ __thiscall Body__GetPositionSweepLine_km(void)const  */

Line3_L_double_G_ * __thiscall
Body__GetPositionSweepLine_km(Body *this,Line3_L_double_G_ *__return_storage_ptr__)

{
  undefined4 *puVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  
  iVar10 = 0x230;
  if ((this->PendingState).IsValidData == false) {
    iVar10 = 0x200;
  }
  puVar1 = (undefined4 *)((int)&this->_pad_0x0_0 + iVar10);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  dVar2 = *(double *)((int)&(this->BodyMemoizationHandlerInstance).ResetFunctions.Size + iVar10);
  uVar6 = *(undefined4 *)&(this->CurrentState).Position.X;
  uVar7 = *(undefined4 *)((int)&(this->CurrentState).Position.X + 4);
  uVar8 = *(undefined4 *)&(this->CurrentState).Position.Y;
  uVar9 = *(undefined4 *)((int)&(this->CurrentState).Position.Y + 4);
  *(undefined4 *)&(__return_storage_ptr__->B).X = *puVar1;
  *(undefined4 *)((int)&(__return_storage_ptr__->B).X + 4) = uVar3;
  *(undefined4 *)&(__return_storage_ptr__->B).Y = uVar4;
  *(undefined4 *)((int)&(__return_storage_ptr__->B).Y + 4) = uVar5;
  *(undefined4 *)&(__return_storage_ptr__->A).X = uVar6;
  *(undefined4 *)((int)&(__return_storage_ptr__->A).X + 4) = uVar7;
  *(undefined4 *)&(__return_storage_ptr__->A).Y = uVar8;
  *(undefined4 *)((int)&(__return_storage_ptr__->A).Y + 4) = uVar9;
  (__return_storage_ptr__->A).Z = (this->CurrentState).Position.Z;
  (__return_storage_ptr__->B).Z = dVar2;
  return __return_storage_ptr__;
}


//==== 007b43b0 7b43b0_Body__GetPosition_km ====
// decompiled by BatchDecomp @ 007b43b0 name=GetPosition_km conv=__thiscall body=33

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct Vec3_L_double_G_ __thiscall Body__GetPosition_km(void)const  */

Vec3_L_double_G_ * __thiscall Body__GetPosition_km(Body *this,Vec3_L_double_G_ *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)((int)&(this->CurrentState).Position.X + 4);
  uVar2 = *(undefined4 *)&(this->CurrentState).Position.Y;
  uVar3 = *(undefined4 *)((int)&(this->CurrentState).Position.Y + 4);
  *(undefined4 *)&__return_storage_ptr__->X = *(undefined4 *)&(this->CurrentState).Position.X;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Y = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = uVar3;
  __return_storage_ptr__->Z = (this->CurrentState).Position.Z;
  return __return_storage_ptr__;
}


//==== 007b43e0 7b43e0_Body__GetRadius_km_Memoize ====
// decompiled by BatchDecomp @ 007b43e0 name=GetRadius_km_Memoize conv=__thiscall body=218

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__GetRadius_km_Memoize(void)const  */

void __thiscall Body__GetRadius_km_Memoize(Body *this)

{
  double dVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_24;
  undefined8 uStack_1c;
  undefined4 uStack_18;
  double local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((this->GetRadius_km_MemoizedValue).IsValidData == false) {
    iVar3 = (this->BodyMemoizationHandlerInstance).ResetFunctions.Size;
    local_c = iVar3 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->BodyMemoizationHandlerInstance,&local_c);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&this->BodyMemoizationHandlerInstance,
                       iVar3);
    if (bVar2) {
      (this->BodyMemoizationHandlerInstance).ResetFunctions.Data
      [(this->BodyMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_eabaeed5, GetRadius_km_Clear);
    }
    local_c = 0;
    local_14 = 0.0;
    iVar3 = (**(code **)(*(int *)&this->Components + 0xc))();
    if (local_c < iVar3) {
      do {
        puVar4 = (undefined4 *)(**(code **)*(int *)&this->Components)(&local_c);
        (**(code **)(*(int *)*puVar4 + 0x5c))(&local_24);
        if ((char)uStack_1c != '\0') {
          uVar5 = *(undefined4 *)&local_14;
          uVar6 = *(undefined4 *)((char *)&local_14 + 4);
          if (local_14 <= local_24) {
            uVar5 = *(undefined4 *)&local_24;
            uVar6 = *(undefined4 *)((char *)&local_24 + 4);
          }
          local_14 = (double)CONCAT44(uVar6,uVar5);
        }
        local_c = local_c + 1;
        iVar3 = (**(code **)(*(int *)&this->Components + 0xc))();
      } while (local_c < iVar3);
    }
    local_24 = local_14;
    dVar1 = local_24;
    ((slice_view *)&uStack_1c)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_1c)->_1_3_[0] | (((slice_view *)&uStack_1c)->_1_3_[1] << 8) | (((slice_view *)&uStack_1c)->_1_3_[2] << 16)) << 8));
    ((slice_view *)&local_24)->_0_4_ = *(undefined4 *)&local_14;
    ((slice_view *)&local_24)->_4_4_ = *(undefined4 *)((char *)&local_14 + 4);
    *(undefined4 *)&(this->GetRadius_km_MemoizedValue).Data = (undefined4)local_24;
    *(undefined4 *)((int)&(this->GetRadius_km_MemoizedValue).Data + 4) = ((slice_view *)&local_24)->_4_4_;
    *(undefined4 *)&(this->GetRadius_km_MemoizedValue).IsValidData = uStack_1c;
    *(undefined4 *)((char *)&(this->GetRadius_km_MemoizedValue) + 0xc) = uStack_18;
    local_24 = dVar1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 007b4510 7b4510_Body__GetSafePendingOrientation ====
// decompiled by BatchDecomp @ 007b4510 name=GetSafePendingOrientation conv=__thiscall body=46

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct util::Quaternion<double> __thiscall Body__GetSafePendingOrientation(void)const  */

Quaternion_L_double_G_ * __thiscall
Body__GetSafePendingOrientation(Body *this,Quaternion_L_double_G_ *__return_storage_ptr__)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = 0x2a0;
  if ((this->PendingOrientation).IsValidData == false) {
    iVar5 = 0x268;
  }
  puVar1 = (undefined4 *)((int)&this->_pad_0x0_0 + iVar5);
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *(undefined4 *)&__return_storage_ptr__->X = *puVar1;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = uVar2;
  *(undefined4 *)&__return_storage_ptr__->Y = uVar3;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = uVar4;
  puVar1 = (undefined4 *)((int)&(this->BodyMemoizationHandlerInstance).ResetFunctions.Size + iVar5);
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *(undefined4 *)&__return_storage_ptr__->Z = *puVar1;
  *(undefined4 *)((int)&__return_storage_ptr__->Z + 4) = uVar2;
  *(undefined4 *)&__return_storage_ptr__->W = uVar3;
  *(undefined4 *)((int)&__return_storage_ptr__->W + 4) = uVar4;
  return __return_storage_ptr__;
}


//==== 007b4540 7b4540_Body__GetSafePendingState ====
// decompiled by BatchDecomp @ 007b4540 name=GetSafePendingState conv=__thiscall body=55

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct util::PhysicalState<struct util::Vec3<double> > __thiscall
   Body__GetSafePendingState(void)const  */

void __thiscall Body__GetSafePendingState(Body *this)

{
  undefined4 *puVar1;
  bool *pbVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *in_stack_00000004;
  
  iVar6 = 0x230;
  if ((this->PendingState).IsValidData == false) {
    iVar6 = 0x200;
  }
  puVar1 = (undefined4 *)((int)&this->_pad_0x0_0 + iVar6);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *in_stack_00000004 = *puVar1;
  in_stack_00000004[1] = uVar3;
  in_stack_00000004[2] = uVar4;
  in_stack_00000004[3] = uVar5;
  puVar1 = (undefined4 *)((int)&(this->BodyMemoizationHandlerInstance).ResetFunctions.Size + iVar6);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  in_stack_00000004[4] = *puVar1;
  in_stack_00000004[5] = uVar3;
  in_stack_00000004[6] = uVar4;
  in_stack_00000004[7] = uVar5;
  pbVar2 = &(this->GetColliderComponent_MemoizedValue).IsValidData + iVar6;
  uVar3 = *(undefined4 *)(pbVar2 + 4);
  uVar4 = *(undefined4 *)(pbVar2 + 8);
  uVar5 = *(undefined4 *)(pbVar2 + 0xc);
  in_stack_00000004[8] = *(undefined4 *)pbVar2;
  in_stack_00000004[9] = uVar3;
  in_stack_00000004[10] = uVar4;
  in_stack_00000004[0xb] = uVar5;
  return;
}


//==== 007b4580 7b4580_Body__GetShotComponent_Clear ====
// decompiled by BatchDecomp @ 007b4580 name=Body_GetShotComponent_Clear conv=__thiscall body=35

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__GetShotComponent_Clear(void)const  */

void __thiscall Body__GetShotComponent_Clear(Body *this)

{
  ReferenceController *this_00;
  
  this_00 = (this->GetShotComponent_MemoizedValue).Data.Controller;
  (this->GetShotComponent_MemoizedValue).Data.Pointer = (ShotComponent *)0x0;
  (this->GetShotComponent_MemoizedValue).Data.Controller = (ReferenceController *)0x0;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  (this->GetShotComponent_MemoizedValue).IsValidData = false;
  return;
}


//==== 007b4750 7b4750_Body__GetSpacecraftComponent_Clear ====
// decompiled by BatchDecomp @ 007b4750 name=Body_GetSpacecraftComponent_Clear conv=__thiscall body=35

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__GetSpacecraftComponent_Clear(void)const  */

void __thiscall Body__GetSpacecraftComponent_Clear(Body *this)

{
  ReferenceController *this_00;
  
  this_00 = (this->GetSpacecraftComponent_MemoizedValue).Data.Controller;
  (this->GetSpacecraftComponent_MemoizedValue).Data.Pointer = (SpacecraftComponent *)0x0;
  (this->GetSpacecraftComponent_MemoizedValue).Data.Controller = (ReferenceController *)0x0;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  (this->GetSpacecraftComponent_MemoizedValue).IsValidData = false;
  return;
}


//==== 007b4920 7b4920_Body__GetSpawner_Clear ====
// decompiled by BatchDecomp @ 007b4920 name=Body_GetSpawner_Clear conv=__thiscall body=44

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__GetSpawner_Clear(void)const  */

void __thiscall Body__GetSpawner_Clear(Body *this)

{
  ReferenceController *this_00;
  
  this_00 = (this->GetSpawner_MemoizedValue).Data.Controller;
  (this->GetSpawner_MemoizedValue).Data.Pointer = (Body *)0x0;
  (this->GetSpawner_MemoizedValue).Data.Controller = (ReferenceController *)0x0;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  (this->GetSpawner_MemoizedValue).IsValidData = false;
  return;
}


//==== 007b4950 7b4950_Body__GetSpawner_Memoize ====
// decompiled by BatchDecomp @ 007b4950 name=Body_GetSpawner_Memoize conv=__thiscall body=179

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__GetSpawner_Memoize(void)const  */

void __thiscall Body__GetSpawner_Memoize(Body *this)

{
  int iVar1;
  ReferenceController *this_00;
  ReferenceController *this_01;
  bool bVar2;
  Body *local_8;
  
  if ((this->GetSpawner_MemoizedValue).IsValidData == false) {
    iVar1 = (this->BodyMemoizationHandlerInstance).ResetFunctions.Size;
    local_8 = (Body *)(iVar1 + 1);
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->BodyMemoizationHandlerInstance,
               (int *)&local_8);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&this->BodyMemoizationHandlerInstance,
                       iVar1);
    if (bVar2) {
      (this->BodyMemoizationHandlerInstance).ResetFunctions.Data
      [(this->BodyMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_eabaeed5, Body_GetSpawner_Clear);
    }
    this_00 = (this->Spawner).Controller;
    local_8 = (this->Spawner).Pointer;
    if ((this_00 != (ReferenceController *)0x0) &&
       (util__ReferenceController__AddWeakReference(this_00), this_00 != (ReferenceController *)0x0)
       ) {
      util__ReferenceController__AddWeakReference(this_00);
    }
    this_01 = (this->GetSpawner_MemoizedValue).Data.Controller;
    (this->GetSpawner_MemoizedValue).Data.Pointer = local_8;
    (this->GetSpawner_MemoizedValue).Data.Controller = this_00;
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_00);
    }
    if (this_01 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(this_01);
    }
    (this->GetSpawner_MemoizedValue).IsValidData = true;
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(this_00);
      util__ReferenceController__ReleaseWeakReference(this_00);
    }
  }
  return;
}


//==== 007b4a10 7b4a10_Body__GetState ====
// decompiled by BatchDecomp @ 007b4a10 name=GetState conv=__thiscall body=42

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct util::PhysicalState<struct util::Vec3<double> > __thiscall
   Body__GetState(void)const  */

void __thiscall Body__GetState(Body *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_stack_00000004;
  
  uVar1 = *(undefined4 *)((int)&(this->CurrentState).Position.X + 4);
  uVar2 = *(undefined4 *)&(this->CurrentState).Position.Y;
  uVar3 = *(undefined4 *)((int)&(this->CurrentState).Position.Y + 4);
  *in_stack_00000004 = *(undefined4 *)&(this->CurrentState).Position.X;
  in_stack_00000004[1] = uVar1;
  in_stack_00000004[2] = uVar2;
  in_stack_00000004[3] = uVar3;
  uVar1 = *(undefined4 *)((int)&(this->CurrentState).Position.Z + 4);
  uVar2 = *(undefined4 *)&(this->CurrentState).Velocity.X;
  uVar3 = *(undefined4 *)((int)&(this->CurrentState).Velocity.X + 4);
  in_stack_00000004[4] = *(undefined4 *)&(this->CurrentState).Position.Z;
  in_stack_00000004[5] = uVar1;
  in_stack_00000004[6] = uVar2;
  in_stack_00000004[7] = uVar3;
  uVar1 = *(undefined4 *)((int)&(this->CurrentState).Velocity.Y + 4);
  uVar2 = *(undefined4 *)&(this->CurrentState).Velocity.Z;
  uVar3 = *(undefined4 *)((int)&(this->CurrentState).Velocity.Z + 4);
  in_stack_00000004[8] = *(undefined4 *)&(this->CurrentState).Velocity.Y;
  in_stack_00000004[9] = uVar1;
  in_stack_00000004[10] = uVar2;
  in_stack_00000004[0xb] = uVar3;
  return;
}


//==== 007b4a40 7b4a40_Body__GetTargetableRadius_km_Clear ====
// decompiled by BatchDecomp @ 007b4a40 name=Body_GetTargetableRadius_km_Clear conv=__thiscall body=19

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__GetTargetableRadius_km_Clear(void)const  */

void __thiscall Body__GetTargetableRadius_km_Clear(Body *this)

{
  (this->GetTargetableRadius_km_MemoizedValue).IsValidData = false;
  (this->GetTargetableRadius_km_MemoizedValue).Data = 0.0;
  return;
}


//==== 007b4a60 7b4a60_Body__GetTargetableRadius_km_Memoize ====
// decompiled by BatchDecomp @ 007b4a60 name=Body_GetTargetableRadius_km_Memoize conv=__thiscall body=381

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__GetTargetableRadius_km_Memoize(void)const  */

void __thiscall Body__GetTargetableRadius_km_Memoize(Body *this)

{
  Darray_L_util__SharedPtr_L_Component_G___G_ *pDVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_34;
  Darray_L_double_G_ local_30;
  double local_20;
  undefined8 uStack_18;
  undefined4 uStack_14;
  undefined1 local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((this->GetTargetableRadius_km_MemoizedValue).IsValidData == false) {
    iVar3 = (this->BodyMemoizationHandlerInstance).ResetFunctions.Size;
    local_c = iVar3 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->BodyMemoizationHandlerInstance,&local_c);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&this->BodyMemoizationHandlerInstance,
                       iVar3);
    if (bVar2) {
      (this->BodyMemoizationHandlerInstance).ResetFunctions.Data
      [(this->BodyMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_eabaeed5, Body_GetTargetableRadius_km_Clear);
    }
    pDVar1 = &this->Components;
    local_10 = 0;
    local_30._pad_0x0_0 = 0;
    local_30.Data = (double *)0x0;
    local_30.Size = 0;
    local_30.Capacity = 0;
    iVar3 = (**(code **)(*(int *)&this->Components + 0xc))();
    util__Darray_double___Darray_double(&local_30,iVar3);
    local_c = 0;
    iVar3 = (**(code **)(*(int *)pDVar1 + 0xc))();
    if (local_c < iVar3) {
      do {
        puVar4 = (undefined4 *)(**(code **)*(int *)pDVar1)(&local_c);
        (**(code **)(*(int *)*puVar4 + 0x60))(&local_20);
        iVar3 = local_30.Size;
        if ((char)uStack_18 != '\0') {
          local_34 = local_30.Size + 1;
          util__Darray_double___SetSize(&local_30,&local_34);
          bVar2 = util__Darray_double___CheckSize(&local_30,iVar3);
          if (bVar2) {
            local_30.Data[local_30.Size + -1] = local_20;
          }
        }
        local_c = local_c + 1;
        iVar3 = (**(code **)(*(int *)pDVar1 + 0xc))();
      } while (local_c < iVar3);
    }
    if (1 < local_30.Size) {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\tactical\\body.cpp",0x273,
                      "Radii_km.Num() <= 1",(char *)0x0);
      DebugBreak();
    }
    if (local_30.Size < 1) {
      uVar6 = 0;
      uVar7 = 0;
    }
    else {
      local_34 = 0;
      puVar5 = (undefined8 *)(**(code **)local_30._pad_0x0_0)(&local_34);
      uVar6 = (undefined4)*puVar5;
      uVar7 = (undefined4)((ulonglong)*puVar5 >> 0x20);
    }
    local_30._pad_0x0_0 = (int)((void *)(0x0091da54u));
    if (local_30.Data != (double *)0x0) {
      operator_delete__(local_30.Data);
    }
    ((slice_view *)&uStack_18)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_18)->_1_3_[0] | (((slice_view *)&uStack_18)->_1_3_[1] << 8) | (((slice_view *)&uStack_18)->_1_3_[2] << 16)) << 8));
    *(undefined4 *)&(this->GetTargetableRadius_km_MemoizedValue).Data = uVar6;
    *(undefined4 *)((int)&(this->GetTargetableRadius_km_MemoizedValue).Data + 4) = uVar7;
    *(undefined4 *)&(this->GetTargetableRadius_km_MemoizedValue).IsValidData = uStack_18;
    *(undefined4 *)((char *)&(this->GetTargetableRadius_km_MemoizedValue) + 0xc) = uStack_14;
    local_20 = (double)CONCAT44(uVar7,uVar6);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 007b4be0 7b4be0_Body__GetTightRadius_km_Memoize ====
// decompiled by BatchDecomp @ 007b4be0 name=Body_GetTightRadius_km_Memoize conv=__thiscall body=381

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__GetTightRadius_km_Memoize(void)const  */

void __thiscall Body__GetTightRadius_km_Memoize(Body *this)

{
  Darray_L_util__SharedPtr_L_Component_G___G_ *pDVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_34;
  Darray_L_double_G_ local_30;
  double local_20;
  undefined8 uStack_18;
  undefined4 uStack_14;
  undefined1 local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((this->GetTightRadius_km_MemoizedValue).IsValidData == false) {
    iVar3 = (this->BodyMemoizationHandlerInstance).ResetFunctions.Size;
    local_c = iVar3 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->BodyMemoizationHandlerInstance,&local_c);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&this->BodyMemoizationHandlerInstance,
                       iVar3);
    if (bVar2) {
      (this->BodyMemoizationHandlerInstance).ResetFunctions.Data
      [(this->BodyMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_eabaeed5, Body_GetTightRadius_km_Clear);
    }
    pDVar1 = &this->Components;
    local_10 = 0;
    local_30._pad_0x0_0 = 0;
    local_30.Data = (double *)0x0;
    local_30.Size = 0;
    local_30.Capacity = 0;
    iVar3 = (**(code **)(*(int *)&this->Components + 0xc))();
    util__Darray_double___Darray_double(&local_30,iVar3);
    local_c = 0;
    iVar3 = (**(code **)(*(int *)pDVar1 + 0xc))();
    if (local_c < iVar3) {
      do {
        puVar4 = (undefined4 *)(**(code **)*(int *)pDVar1)(&local_c);
        (**(code **)(*(int *)*puVar4 + 100))(&local_20);
        iVar3 = local_30.Size;
        if ((char)uStack_18 != '\0') {
          local_34 = local_30.Size + 1;
          util__Darray_double___SetSize(&local_30,&local_34);
          bVar2 = util__Darray_double___CheckSize(&local_30,iVar3);
          if (bVar2) {
            local_30.Data[local_30.Size + -1] = local_20;
          }
        }
        local_c = local_c + 1;
        iVar3 = (**(code **)(*(int *)pDVar1 + 0xc))();
      } while (local_c < iVar3);
    }
    if (1 < local_30.Size) {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\tactical\\body.cpp",0x27a,
                      "Radii_km.Num() <= 1",(char *)0x0);
      DebugBreak();
    }
    if (local_30.Size < 1) {
      uVar6 = 0;
      uVar7 = 0;
    }
    else {
      local_34 = 0;
      puVar5 = (undefined8 *)(**(code **)local_30._pad_0x0_0)(&local_34);
      uVar6 = (undefined4)*puVar5;
      uVar7 = (undefined4)((ulonglong)*puVar5 >> 0x20);
    }
    local_30._pad_0x0_0 = (int)((void *)(0x0091da54u));
    if (local_30.Data != (double *)0x0) {
      operator_delete__(local_30.Data);
    }
    ((slice_view *)&uStack_18)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_18)->_1_3_[0] | (((slice_view *)&uStack_18)->_1_3_[1] << 8) | (((slice_view *)&uStack_18)->_1_3_[2] << 16)) << 8));
    *(undefined4 *)&(this->GetTightRadius_km_MemoizedValue).Data = uVar6;
    *(undefined4 *)((int)&(this->GetTightRadius_km_MemoizedValue).Data + 4) = uVar7;
    *(undefined4 *)&(this->GetTightRadius_km_MemoizedValue).IsValidData = uStack_18;
    *(undefined4 *)((char *)&(this->GetTightRadius_km_MemoizedValue) + 0xc) = uStack_14;
    local_20 = (double)CONCAT44(uVar7,uVar6);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 007b4dd0 7b4dd0_Body__GetUnrotatedCenterOfMass_km_Clear ====
// decompiled by BatchDecomp @ 007b4dd0 name=Body_GetUnrotatedCenterOfMass_km_Clear conv=__thiscall body=29

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__GetUnrotatedCenterOfMass_km_Clear(void)const  */

void __thiscall Body__GetUnrotatedCenterOfMass_km_Clear(Body *this)

{
  (this->GetUnrotatedCenterOfMass_km_MemoizedValue).IsValidData = false;
  *(undefined4 *)&(this->GetUnrotatedCenterOfMass_km_MemoizedValue).Data.X = 0;
  *(undefined4 *)((int)&(this->GetUnrotatedCenterOfMass_km_MemoizedValue).Data.X + 4) = 0;
  *(undefined4 *)&(this->GetUnrotatedCenterOfMass_km_MemoizedValue).Data.Y = 0;
  *(undefined4 *)((int)&(this->GetUnrotatedCenterOfMass_km_MemoizedValue).Data.Y + 4) = 0;
  (this->GetUnrotatedCenterOfMass_km_MemoizedValue).Data.Z = 0.0;
  return;
}


//==== 007b4df0 7b4df0_Body__GetUntrackComponent_Clear ====
// decompiled by BatchDecomp @ 007b4df0 name=Body_GetUntrackComponent_Clear conv=__thiscall body=35

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__GetUntrackComponent_Clear(void)const  */

void __thiscall Body__GetUntrackComponent_Clear(Body *this)

{
  ReferenceController *this_00;
  
  this_00 = (this->GetUntrackComponent_MemoizedValue).Data.Controller;
  (this->GetUntrackComponent_MemoizedValue).Data.Pointer = (UntrackComponent *)0x0;
  (this->GetUntrackComponent_MemoizedValue).Data.Controller = (ReferenceController *)0x0;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  (this->GetUntrackComponent_MemoizedValue).IsValidData = false;
  return;
}


//==== 007b5010 7b5010_Body__GetVelocity_km__s ====
// decompiled by BatchDecomp @ 007b5010 name=GetVelocity_km__s conv=__thiscall body=33

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct Vec3_L_double_G_ __thiscall Body__GetVelocity_km__s(void)const  */

Vec3_L_double_G_ * __thiscall Body__GetVelocity_km__s(Body *this,Vec3_L_double_G_ *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)((int)&(this->CurrentState).Velocity.X + 4);
  uVar2 = *(undefined4 *)&(this->CurrentState).Velocity.Y;
  uVar3 = *(undefined4 *)((int)&(this->CurrentState).Velocity.Y + 4);
  *(undefined4 *)&__return_storage_ptr__->X = *(undefined4 *)&(this->CurrentState).Velocity.X;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Y = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = uVar3;
  __return_storage_ptr__->Z = (this->CurrentState).Velocity.Z;
  return __return_storage_ptr__;
}


//==== 007b5040 7b5040_Body__HasPhysicality_Clear ====
// decompiled by BatchDecomp @ 007b5040 name=Body_HasPhysicality_Clear conv=__thiscall body=10

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__HasPhysicality_Clear(void)const  */

void __thiscall Body__HasPhysicality_Clear(Body *this)

{
  (this->HasPhysicality_MemoizedValue).Data = false;
  (this->HasPhysicality_MemoizedValue).IsValidData = false;
  return;
}


//==== 007b5050 7b5050_Body__HasPhysicality_Memoize ====
// decompiled by BatchDecomp @ 007b5050 name=Body_HasPhysicality_Memoize conv=__thiscall body=364

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__HasPhysicality_Memoize(void)const  */

void __thiscall Body__HasPhysicality_Memoize(Body *this)

{
  Darray_L_util__SharedPtr_L_Component_G___G_ *pDVar1;
  bool bVar2;
  uint uVar3;
  bool *pbVar4;
  int iVar5;
  undefined4 *puVar6;
  Darray_L_bool_G_ local_20;
  Maybe_L_bool_G_ local_e;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((this->HasPhysicality_MemoizedValue).IsValidData == false) {
    iVar5 = (this->BodyMemoizationHandlerInstance).ResetFunctions.Size;
    local_c = iVar5 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->BodyMemoizationHandlerInstance,&local_c);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&this->BodyMemoizationHandlerInstance,
                       iVar5);
    if (bVar2) {
      (this->BodyMemoizationHandlerInstance).ResetFunctions.Data
      [(this->BodyMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_eabaeed5, Body_HasPhysicality_Clear);
    }
    pDVar1 = &this->Components;
    local_20._pad_0x0_0 = 0;
    local_20.Data = (bool *)0x0;
    local_20.Size = 0;
    local_20.Capacity = 0;
    uVar3 = (**(code **)(*(int *)&this->Components + 0xc))();
    local_20._pad_0x0_0 = (int)((void *)(0x009256ecu));
    local_20.Data = (bool *)0x0;
    local_20.Size = 0;
    if (((int)uVar3 < 0) || (0x3fffffff < (int)uVar3)) {
      local_20.Capacity = 0;
    }
    else {
      local_20.Capacity = uVar3;
      if (0 < (int)uVar3) {
        pbVar4 = (bool *)operator_new__(uVar3);
        if (pbVar4 == (bool *)0x0) {
          pbVar4 = (bool *)0x0;
        }
        else {
          memset(pbVar4,0,uVar3);
        }
        iVar5 = 0;
        local_20.Data = pbVar4;
        if (0 < local_20.Capacity) {
          do {
            pbVar4[iVar5] = false;
            iVar5 = iVar5 + 1;
          } while (iVar5 < local_20.Capacity);
        }
      }
    }
    local_c = 0;
    iVar5 = (**(code **)(*(int *)pDVar1 + 0xc))();
    if (local_c < iVar5) {
      do {
        puVar6 = (undefined4 *)(**(code **)*(int *)pDVar1)(&local_c);
        bVar2 = (bool)(**(code **)(*(int *)*puVar6 + 0x70))();
        local_e.IsValidData = bVar2;
        util__Darray_bool___Add(&local_20,&local_e.IsValidData);
        local_c = local_c + 1;
        iVar5 = (**(code **)(*(int *)pDVar1 + 0xc))();
      } while (local_c < iVar5);
    }
    bVar2 = util__Any(&local_20);
    local_20._pad_0x0_0 = (int)((void *)(0x009256ecu));
    if (local_20.Data != (bool *)0x0) {
      operator_delete__(local_20.Data);
    }
    local_e.IsValidData = true;
    local_e.Data = bVar2;
    this->HasPhysicality_MemoizedValue = local_e;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 007b52c0 7b52c0_Body__IsABullet_Clear ====
// decompiled by BatchDecomp @ 007b52c0 name=Body_IsABullet_Clear conv=__thiscall body=7

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__IsABullet_Clear(void)const  */

void __thiscall Body__IsABullet_Clear(Body *this)

{
  (this->IsABullet_MemoizedValue).Data = false;
  (this->IsABullet_MemoizedValue).IsValidData = false;
  return;
}


//==== 007b52d0 7b52d0_Body__IsABullet_Memoize ====
// decompiled by BatchDecomp @ 007b52d0 name=Body_IsABullet_Memoize conv=__thiscall body=175

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__IsABullet_Memoize(void)const  */

void __thiscall Body__IsABullet_Memoize(Body *this)

{
  int iVar1;
  ReferenceController *this_00;
  bool bVar2;
  int local_8;
  
  if ((this->IsABullet_MemoizedValue).IsValidData == false) {
    iVar1 = (this->BodyMemoizationHandlerInstance).ResetFunctions.Size;
    local_8 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->BodyMemoizationHandlerInstance,&local_8);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&this->BodyMemoizationHandlerInstance,
                       iVar1);
    if (bVar2) {
      (this->BodyMemoizationHandlerInstance).ResetFunctions.Data
      [(this->BodyMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_eabaeed5, Body_IsABullet_Clear);
    }
    Body_GetBulletComponent_Memoize(this);
    if ((this->GetBulletComponent_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if (((this->GetBulletComponent_MemoizedValue).Data.Pointer != (MatterComponent *)0x0) &&
       (this_00 = (this->GetBulletComponent_MemoizedValue).Data.Controller,
       this_00 != (ReferenceController *)0x0)) {
      bVar2 = util__ReferenceController__IsDataStillValid(this_00);
      if (bVar2) {
        (this->IsABullet_MemoizedValue).Data = true;
        (this->IsABullet_MemoizedValue).IsValidData = true;
        return;
      }
    }
    (this->IsABullet_MemoizedValue).Data = false;
    (this->IsABullet_MemoizedValue).IsValidData = true;
  }
  return;
}


//==== 007b5480 7b5480_Body__IsSelected ====
// decompiled by BatchDecomp @ 007b5480 name=IsSelected conv=__thiscall body=117

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall Body__IsSelected(void)const  */

bool __thiscall Body__IsSelected(Body *this)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_1c[20];
  ReferenceController *local_8;
  
  piVar2 = (int *)util__IsSelected((SpacecraftComponent *)(local_1c + 0x10));
  iVar3 = TacticalManager__GetSelectedBodies(this->ParentTactical);
  piVar4 = *(int **)(iVar3 + 4);
  piVar1 = piVar4 + *(int *)(iVar3 + 8) * 2;
  if (piVar4 != piVar1) {
    do {
      if ((piVar2[1] == piVar4[1]) && (*piVar2 == *piVar4)) {
        bVar5 = true;
        goto LAB_007b54d4;
      }
      piVar4 = piVar4 + 2;
    } while (piVar4 != piVar1);
  }
  bVar5 = false;
LAB_007b54d4:
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_1c);
  if (local_8 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_8);
  }
  return bVar5;
}


//==== 007b57c0 7b57c0_Body__OnCreate ====
// decompiled by BatchDecomp @ 007b57c0 name=OnCreate conv=__thiscall body=95

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__OnCreate(void) */

void __thiscall Body__OnCreate(Body *this)

{
  int iVar1;
  undefined4 *puVar2;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar1 = (**(code **)(*(int *)&this->Components + 0xc))();
  if (local_c < iVar1) {
    do {
      puVar2 = (undefined4 *)(**(code **)*(int *)&this->Components)(&local_c);
      (**(code **)(*(int *)*puVar2 + 0x24))();
      local_c = local_c + 1;
      iVar1 = (**(code **)(*(int *)&this->Components + 0xc))();
    } while (local_c < iVar1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 007b5820 7b5820_Body__OnSessionBoundary ====
// decompiled by BatchDecomp @ 007b5820 name=OnSessionBoundary conv=__thiscall body=132

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__OnSessionBoundary(void) */

void __thiscall Body__OnSessionBoundary(Body *this)

{
  ReferenceController *this_00;
  int iVar1;
  undefined4 *puVar2;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar1 = (**(code **)(*(int *)&this->Components + 0xc))();
  if (local_c < iVar1) {
    do {
      puVar2 = (undefined4 *)(**(code **)*(int *)&this->Components)(&local_c);
      (**(code **)(*(int *)*puVar2 + 0x2c))();
      local_c = local_c + 1;
      iVar1 = (**(code **)(*(int *)&this->Components + 0xc))();
    } while (local_c < iVar1);
  }
  this_00 = (this->Spawner).Controller;
  (this->Spawner).Pointer = (Body *)0x0;
  (this->Spawner).Controller = (ReferenceController *)0x0;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 007b58b0 7b58b0_Body__OriginShift ====
// decompiled by BatchDecomp @ 007b58b0 name=OriginShift conv=__thiscall body=382

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__OriginShift(struct util::PhysicalState<struct util::Vec3<double> >)
    */

void __thiscall
Body__OriginShift(Body *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  undefined4 *puVar6;
  double dVar7;
  undefined8 uStack_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar5 = (**(code **)(*(int *)&this->Components + 0xc))();
  if (local_c < iVar5) {
    do {
      puVar6 = (undefined4 *)(**(code **)*(int *)&this->Components)(&local_c);
      (**(code **)(*(int *)*puVar6 + 0x34))
                (param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                 param_12,param_13);
      local_c = local_c + 1;
      iVar5 = (**(code **)(*(int *)&this->Components + 0xc))();
    } while (local_c < iVar5);
  }
  dVar1 = (this->CurrentState).Position.Y;
  (this->CurrentState).Position.X =
       (this->CurrentState).Position.X + (double)CONCAT44(param_3,param_2);
  (this->CurrentState).Position.Y = dVar1 + (double)CONCAT44(param_5,param_4);
  (this->CurrentState).Position.Z =
       (this->CurrentState).Position.Z + (double)CONCAT44(param_7,param_6);
  dVar1 = (this->CurrentState).Velocity.Y;
  (this->CurrentState).Velocity.X =
       (this->CurrentState).Velocity.X + (double)CONCAT44(param_9,param_8);
  (this->CurrentState).Velocity.Y = dVar1 + (double)CONCAT44(param_11,param_10);
  (this->CurrentState).Velocity.Z =
       (this->CurrentState).Velocity.Z + (double)CONCAT44(param_13,param_12);
  if ((this->PendingState).IsValidData != false) {
    dVar1 = (this->PendingState).Data.Position.Y;
    dVar2 = (this->PendingState).Data.Position.Z;
    dVar3 = (this->PendingState).Data.Velocity.X;
    dVar7 = (this->PendingState).Data.Velocity.Z + (double)CONCAT44(param_13,param_12);
    dVar4 = (this->PendingState).Data.Velocity.Y;
    (this->PendingState).Data.Position.X =
         (this->PendingState).Data.Position.X + (double)CONCAT44(param_3,param_2);
    (this->PendingState).Data.Position.Y = dVar1 + (double)CONCAT44(param_5,param_4);
    uStack_14 = CONCAT71((int7)((ulonglong)dVar7 >> 8),1);
    (this->PendingState).Data.Position.Z = dVar2 + (double)CONCAT44(param_7,param_6);
    (this->PendingState).Data.Velocity.X = dVar3 + (double)CONCAT44(param_9,param_8);
    (this->PendingState).Data.Velocity.Y = dVar4 + (double)CONCAT44(param_11,param_10);
    (this->PendingState).Data.Velocity.Z = dVar7;
    *(undefined8 *)&(this->PendingState).IsValidData = uStack_14;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 007b6150 7b6150_Body__RemoveComponent ====
// decompiled by BatchDecomp @ 007b6150 name=RemoveComponent conv=__thiscall body=74

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__RemoveComponent(class util::WeakPtr<class Component>) */

void __thiscall Body__RemoveComponent(Body *this,undefined4 param_2,ReferenceController *param_3)

{
  undefined4 uVar1;
  ReferenceController *pRVar2;
  
  util__Darray_class_util__WeakPtr_class_Body_____Add((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&this->ComponentsPendingKill,
             (WeakPtr_L_class_Body_G_ *)&param_2);
  uVar1 = param_2;
  pRVar2 = param_3;
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_3);
  }
  TacticalManager__OnComponentRemoved(this->ParentTactical,uVar1,pRVar2);
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  return;
}


//==== 007b61a0 7b61a0_Body__Render3DTransparentUI ====
// decompiled by BatchDecomp @ 007b61a0 name=Render3DTransparentUI conv=__thiscall body=95

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall Body__Render3DTransparentUI(void)const  */

void __thiscall Body__Render3DTransparentUI(Body *this)

{
  int iVar1;
  undefined4 *puVar2;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar1 = (**(code **)(*(int *)&this->Components + 0xc))();
  if (local_c < iVar1) {
    do {
      puVar2 = (undefined4 *)(**(code **)*(int *)&this->Components)(&local_c);
      (**(code **)(*(int *)*puVar2 + 0x20))();
      local_c = local_c + 1;
      iVar1 = (**(code **)(*(int *)&this->Components + 0xc))();
    } while (local_c < iVar1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 007b6200 7b6200_Body__Render ====
// decompiled by BatchDecomp @ 007b6200 name=Render conv=__thiscall body=95

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall Body__Render(void)const  */

void __thiscall Body__Render(Body *this)

{
  int iVar1;
  undefined4 *puVar2;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar1 = (**(code **)(*(int *)&this->Components + 0xc))();
  if (local_c < iVar1) {
    do {
      puVar2 = (undefined4 *)(**(code **)*(int *)&this->Components)(&local_c);
      (**(code **)(*(int *)*puVar2 + 0x14))();
      local_c = local_c + 1;
      iVar1 = (**(code **)(*(int *)&this->Components + 0xc))();
    } while (local_c < iVar1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 007b6260 7b6260_Body__RenderTransparent ====
// decompiled by BatchDecomp @ 007b6260 name=RenderTransparent conv=__thiscall body=95

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall Body__RenderTransparent(void)const  */

void __thiscall Body__RenderTransparent(Body *this)

{
  int iVar1;
  undefined4 *puVar2;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar1 = (**(code **)(*(int *)&this->Components + 0xc))();
  if (local_c < iVar1) {
    do {
      puVar2 = (undefined4 *)(**(code **)*(int *)&this->Components)(&local_c);
      (**(code **)(*(int *)*puVar2 + 0x1c))();
      local_c = local_c + 1;
      iVar1 = (**(code **)(*(int *)&this->Components + 0xc))();
    } while (local_c < iVar1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 007b62c0 7b62c0_Body__RenderUI ====
// decompiled by BatchDecomp @ 007b62c0 name=RenderUI conv=__thiscall body=95

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall Body__RenderUI(void)const  */

void __thiscall Body__RenderUI(Body *this)

{
  int iVar1;
  undefined4 *puVar2;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar1 = (**(code **)(*(int *)&this->Components + 0xc))();
  if (local_c < iVar1) {
    do {
      puVar2 = (undefined4 *)(**(code **)*(int *)&this->Components)(&local_c);
      (**(code **)(*(int *)*puVar2 + 0x18))();
      local_c = local_c + 1;
      iVar1 = (**(code **)(*(int *)&this->Components + 0xc))();
    } while (local_c < iVar1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 007b6a90 7b6a90_Body__SplitTrajectory ====
// decompiled by BatchDecomp @ 007b6a90 name=SplitTrajectory conv=__thiscall body=95

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__SplitTrajectory(struct util::PhysicalState<struct
   util::Vec3<double> >,struct util::PhysicalState<struct util::Vec3<double> >) */

void __thiscall
Body__SplitTrajectory(Body *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
          undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
          undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
          undefined4 param_18,undefined4 param_19,undefined4 param_20,undefined4 param_21,
          undefined4 param_22,undefined4 param_23,undefined4 param_24,undefined4 param_25)

{
  undefined7 uStack_b;
  
  *(undefined4 *)&(this->CurrentState).Position.X = param_2;
  *(undefined4 *)((int)&(this->CurrentState).Position.X + 4) = param_3;
  *(undefined4 *)&(this->CurrentState).Position.Y = param_4;
  *(undefined4 *)((int)&(this->CurrentState).Position.Y + 4) = param_5;
  *(undefined4 *)&(this->CurrentState).Position.Z = param_6;
  *(undefined4 *)((int)&(this->CurrentState).Position.Z + 4) = param_7;
  *(undefined4 *)&(this->CurrentState).Velocity.X = param_8;
  *(undefined4 *)((int)&(this->CurrentState).Velocity.X + 4) = param_9;
  *(undefined4 *)&(this->CurrentState).Velocity.Y = param_10;
  *(undefined4 *)((int)&(this->CurrentState).Velocity.Y + 4) = param_11;
  *(undefined4 *)&(this->CurrentState).Velocity.Z = param_12;
  *(undefined4 *)((int)&(this->CurrentState).Velocity.Z + 4) = param_13;
  *(undefined4 *)&(this->PendingState).Data.Position.X = param_14;
  *(undefined4 *)((int)&(this->PendingState).Data.Position.X + 4) = param_15;
  *(undefined4 *)&(this->PendingState).Data.Position.Y = param_16;
  *(undefined4 *)((int)&(this->PendingState).Data.Position.Y + 4) = param_17;
  *(undefined4 *)&(this->PendingState).Data.Position.Z = param_18;
  *(undefined4 *)((int)&(this->PendingState).Data.Position.Z + 4) = param_19;
  *(undefined4 *)&(this->PendingState).Data.Velocity.X = param_20;
  *(undefined4 *)((int)&(this->PendingState).Data.Velocity.X + 4) = param_21;
  *(undefined4 *)&(this->PendingState).Data.Velocity.Y = param_22;
  *(undefined4 *)((int)&(this->PendingState).Data.Velocity.Y + 4) = param_23;
  *(undefined4 *)&(this->PendingState).Data.Velocity.Z = param_24;
  *(undefined4 *)((int)&(this->PendingState).Data.Velocity.Z + 4) = param_25;
  *(ulonglong *)&(this->PendingState).IsValidData = CONCAT71(uStack_b,1);
  return;
}


//==== 007cbeb0 7cbeb0_SpacecraftComponent__AddPower ====
// decompiled by BatchDecomp @ 007cbeb0 name=AddPower conv=__thiscall body=28

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftComponent__AddPower(double) */

void __thiscall SpacecraftComponent__AddPower(SpacecraftComponent *this,double param_1)

{
  *(double *)&(this->GetCompartmentCollisionShells_MemoizedValue).Data.Capacity =
       param_1 + *(double *)&(this->GetCompartmentCollisionShells_MemoizedValue).Data.Capacity;
  return;
}


//==== 007cbfd0 7cbfd0_SpacecraftComponent__CanRoll_Clear ====
// decompiled by BatchDecomp @ 007cbfd0 name=CanRoll_Clear conv=__thiscall body=7

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftComponent__CanRoll_Clear(void)const  */

void __thiscall SpacecraftComponent__CanRoll_Clear(SpacecraftComponent *this)

{
  (this->CanRoll_MemoizedValue).Data = false;
  (this->CanRoll_MemoizedValue).IsValidData = false;
  return;
}


//==== 007cc5e0 7cc5e0_SpacecraftComponent__ClearAudio ====
// decompiled by BatchDecomp @ 007cc5e0 name=ClearAudio conv=__thiscall body=11

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftComponent__ClearAudio(void) */

void __thiscall SpacecraftComponent__ClearAudio(SpacecraftComponent *this)

{
  (this->Craft).Controller = (ReferenceController *)0x0;
  return;
}


//==== 007cd5e0 7cd5e0_SpacecraftComponent__ConsumePower ====
// decompiled by BatchDecomp @ 007cd5e0 name=ConsumePower conv=__thiscall body=94

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall SpacecraftComponent__ConsumePower(double,class util::WeakPtr<struct
   ModuleCompartment>) */

bool __thiscall
SpacecraftComponent__ConsumePower(SpacecraftComponent *this,double param_1,int param_3,ReferenceController *param_4)

{
  double dVar1;
  bool bVar2;
  
  dVar1 = *(double *)&(this->GetCompartmentCollisionShells_MemoizedValue).Data.Capacity;
  if (dVar1 < param_1) {
    if ((param_4 != (ReferenceController *)0x0) &&
       (bVar2 = util__ReferenceController__IsDataStillValid(param_4), !bVar2)) {
      param_3 = 0;
    }
    *(undefined1 *)(param_3 + 0x68) = 1;
    bVar2 = false;
  }
  else {
    bVar2 = true;
    *(double *)&(this->GetCompartmentCollisionShells_MemoizedValue).Data.Capacity = dVar1 - param_1;
  }
  if (param_4 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_4);
  }
  return bVar2;
}


//==== 007cd640 7cd640_SpacecraftComponent__DememoizeBodies ====
// decompiled by BatchDecomp @ 007cd640 name=DememoizeBodies conv=__thiscall body=11

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftComponent__DememoizeBodies(void) */

void __thiscall SpacecraftComponent__DememoizeBodies(SpacecraftComponent *this)

{
  SpacecraftTargeting__DememoizeBodies((SpacecraftTargeting *)&this->CommandIsEffective);
  return;
}


//==== 007cd9f0 7cd9f0_SpacecraftComponent__DisableAllWeapons ====
// decompiled by BatchDecomp @ 007cd9f0 name=DisableAllWeapons conv=__thiscall body=168

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftComponent__DisableAllWeapons(void) */

void __thiscall SpacecraftComponent__DisableAllWeapons(SpacecraftComponent *this)

{
  Maybe_L_util__Darray_L_util__WeakPtr_L_WeaponCompartment_G___G___G_ *pMVar1;
  CraftInstance *this_00;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  this_00 = (CraftInstance *)(this->GetArmorCollisionShells_MemoizedValue).Data.Size;
  CraftInstance__GetWeaponModules_Memoize(this_00);
  pMVar1 = &this_00->GetWeaponModules_MemoizedValue;
  if ((this_00->GetWeaponModules_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_c = 0;
  iVar3 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
  if (local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)*(int *)&pMVar1->Data)(&local_c);
      if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
         !bVar2)) {
        *puVar4 = 0;
      }
      (**(code **)(*(int *)*puVar4 + 0x6c))();
      local_c = local_c + 1;
      iVar3 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 007cf320 7cf320_SpacecraftComponent__ExpendReactionMass ====
// decompiled by BatchDecomp @ 007cf320 name=ExpendReactionMass conv=__thiscall body=564

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: void __thiscall SpacecraftComponent__ExpendReactionMass(double) */

void __thiscall SpacecraftComponent__ExpendReactionMass(SpacecraftComponent *this,double param_1)

{
  Body *this_00;
  Body *this_01;
  EngineCompartment *this_02;
  Quaternion_L_double_G_ QVar1;
  Vec3_L_double_G_ VVar2;
  bool bVar3;
  Vec3_L_double_G_ *pVVar4;
  Quaternion_L_double_G_ *pQVar5;
  int iVar6;
  undefined4 *puVar7;
  WeakPtr_L_ModuleCompartment_G_ *pWVar8;
  int *piVar9;
  SpacecraftComponent *pSVar10;
  double dVar11;
  double dVar12;
  Quaternion_L_double_G_ local_6c;
  Vec3_L_double_G_ local_4c;
  Darray_L_struct_ThrusterLayout_G_ local_34[16];
  undefined1 local_24;
  Darray_L_struct_ThrusterLayout_G_ local_20[8];
  undefined8 local_18;
  SpacecraftComponent *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = this;
  if (*(char *)&(this->GetThrusterLayouts_MemoizedValue).Data.Data == '\0') {
    iVar6 = (this->SpacecraftComponentMemoizationHandlerInstance).ResetFunctions.Size;
    local_c = iVar6 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)
               &this->SpacecraftComponentMemoizationHandlerInstance,&local_c);
    bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->SpacecraftComponentMemoizationHandlerInstance,iVar6);
    if (bVar3) {
      (this->SpacecraftComponentMemoizationHandlerInstance).ResetFunctions.Data
      [(this->SpacecraftComponentMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_1fb4a0e4, SpacecraftComponent_GetThrustersThatNeedToFire_Clear);
    }
    if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
       (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
       !bVar3)) {
      this->_pad_0x0_0 = 0;
    }
    this_00 = (Body *)this->_pad_0x0_0;
    if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
       (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
       !bVar3)) {
      this->_pad_0x0_0 = 0;
    }
    this_01 = (Body *)this->_pad_0x0_0;
    pVVar4 = Body__GetAngularVelocity_radians__s(this_00,&local_4c);
    pQVar5 = Body__GetOrientation(this_01,&local_6c);
    ((slice_view *)&QVar1.X)->_4_4_ = *(undefined4 *)&pQVar5->X;
    ((slice_view *)&QVar1.X)->_0_4_ = local_20;
    ((slice_view *)&QVar1.Y)->_0_4_ = *(undefined4 *)((int)&pQVar5->X + 4);
    ((slice_view *)&QVar1.Y)->_4_4_ = *(undefined4 *)&pQVar5->Y;
    ((slice_view *)&QVar1.Z)->_0_4_ = *(undefined4 *)((int)&pQVar5->Y + 4);
    ((slice_view *)&QVar1.Z)->_4_4_ = *(undefined4 *)&pQVar5->Z;
    ((slice_view *)&QVar1.W)->_0_4_ = *(undefined4 *)((int)&pQVar5->Z + 4);
    ((slice_view *)&QVar1.W)->_4_4_ = *(undefined4 *)&pQVar5->W;
    ((slice_view *)&VVar2.X)->_4_4_ = *(undefined4 *)&pVVar4->X;
    ((slice_view *)&VVar2.X)->_0_4_ = *(undefined4 *)((int)&pQVar5->W + 4);
    ((slice_view *)&VVar2.Y)->_0_4_ = *(undefined4 *)((int)&pVVar4->X + 4);
    ((slice_view *)&VVar2.Y)->_4_4_ = *(undefined4 *)&pVVar4->Y;
    ((slice_view *)&VVar2.Z)->_0_4_ = *(undefined4 *)((int)&pVVar4->Y + 4);
    ((slice_view *)&VVar2.Z)->_4_4_ = *(undefined4 *)&pVVar4->Z;
    GetThrustersThatNeedToFire(this,QVar1,VVar2);
    util__Darray_struct_ThrusterLayout___Darray_struct_ThrusterLayout(local_34,local_20);
    local_24 = 1;
    util__Darray_struct_ThrusterLayout___operator
              ((Darray_L_struct_ThrusterLayout_G_ *)
               ((int)&(this->GetReactionMass_kg_MemoizedValue).Data + 4),local_34);
    *(undefined1 *)&(this->GetThrusterLayouts_MemoizedValue).Data.Data = local_24;
    util__Darray_struct_ThrusterLayout____Darray_struct_ThrusterLayout(local_34);
    util__Darray_struct_ThrusterLayout____Darray_struct_ThrusterLayout(local_20);
  }
  piVar9 = (int *)((int)&(this->GetReactionMass_kg_MemoizedValue).Data + 4);
  if (*(char *)&(this->GetThrusterLayouts_MemoizedValue).Data.Data == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_c = 0;
  iVar6 = (**(code **)(*piVar9 + 0xc))();
  pSVar10 = local_10;
  if (local_c < iVar6) {
    do {
      puVar7 = (undefined4 *)(**(code **)*piVar9)(&local_c);
      if (((ReferenceController *)puVar7[1] != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar7[1]),
         !bVar3)) {
        *puVar7 = 0;
      }
      ((slice_view *)&local_18)->_4_4_ = (EngineCompartment *)*puVar7;
      if (((ReferenceController *)puVar7[1] != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar7[1]),
         !bVar3)) {
        *puVar7 = 0;
      }
      this_02 = (EngineCompartment *)*puVar7;
      dVar12 = param_1;
      dVar11 = EngineCompartment__GetMaxThrust_N(((slice_view *)&local_18)->_4_4_);
      local_18 = EngineCompartment__GetReactionMassConsumptionForThrust_kg(this_02,dVar11,dVar12);
      if (0.0 < local_18) {
        if (((ReferenceController *)puVar7[1] != (ReferenceController *)0x0) &&
           (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar7[1]),
           !bVar3)) {
          *puVar7 = 0;
        }
        EngineCompartment__ExpendReactionMass((EngineCompartment *)*puVar7,local_18);
      }
      pSVar10 = local_10;
      local_c = local_c + 1;
      *(undefined1 *)&(local_10->Targeting).EnemyTargetedCompartments.Size = 1;
      iVar6 = (**(code **)(*piVar9 + 0xc))();
    } while (local_c < iVar6);
  }
  pWVar8 = (WeakPtr_L_ModuleCompartment_G_ *)(**(code **)(*piVar9 + 0xc))();
  if (pWVar8 != (pSVar10->Targeting).EnemyTargetedCompartments.Data) {
    *(undefined1 *)&(pSVar10->Targeting).EnemyTargetedCompartments.Size = 1;
  }
  pWVar8 = (WeakPtr_L_ModuleCompartment_G_ *)(**(code **)(*piVar9 + 0xc))();
  (pSVar10->Targeting).EnemyTargetedCompartments.Data = pWVar8;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 007cf560 7cf560_SpacecraftComponent__GetArmorCollisionShells_Clear ====
// decompiled by BatchDecomp @ 007cf560 name=SpacecraftComponent_GetArmorCollisionShells_Clear conv=__thiscall body=84

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftComponent__GetArmorCollisionShells_Clear(void)const  */

void __thiscall SpacecraftComponent__GetArmorCollisionShells_Clear(SpacecraftComponent *this)

{
  undefined **local_14;
  void *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = ((void *)(0x0091fd84u));
  local_10 = (void *)0x0;
  local_c = 0;
  local_8 = 0;
  util__Darray_struct_ArmorCollisionShell___operator
            ((Darray_L_struct_ArmorCollisionShell_G_ *)
             &(this->GetAvoidanceDirection_MemoizedValue).Data.Data.Y,
             (Darray_L_struct_ArmorCollisionShell_G_ *)&local_14);
  local_14 = ((void *)(0x0091fd84u));
  if (local_10 != (void *)0x0) {
    operator_delete__(local_10);
  }
  (this->GetAvoidanceDirection_MemoizedValue).Data.IsValidData = false;
  return;
}


//==== 007cf7d0 7cf7d0_SpacecraftComponent__GetAudioImpacts ====
// decompiled by BatchDecomp @ 007cf7d0 name=GetAudioImpacts conv=__thiscall body=7

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: int __thiscall SpacecraftComponent__GetAudioImpacts(void)const  */

int __thiscall SpacecraftComponent__GetAudioImpacts(SpacecraftComponent *this)

{
  return (int)(this->Craft).Controller;
}


//==== 007cf7e0 7cf7e0_SpacecraftComponent__GetAvoidanceDirection_Clear ====
// decompiled by BatchDecomp @ 007cf7e0 name=SpacecraftComponent_GetAvoidanceDirection_Clear conv=__thiscall body=50

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftComponent__GetAvoidanceDirection_Clear(void)const  */

void __thiscall SpacecraftComponent__GetAvoidanceDirection_Clear(SpacecraftComponent *this)

{
  uint uStack_c;
  undefined4 uStack_8;
  
  uStack_c = uStack_c & 0xffffff00;
  *(undefined1 *)&(this->GetAvoidanceDirection_MemoizedValue).Data.Data.X = 0;
  *(undefined4 *)&(this->GetDesiredThrustDirection_MemoizedValue).Data.X = 0;
  *(undefined4 *)((int)&(this->GetDesiredThrustDirection_MemoizedValue).Data.X + 4) = 0;
  *(undefined4 *)&(this->GetDesiredThrustDirection_MemoizedValue).Data.Y = 0;
  *(undefined4 *)((int)&(this->GetDesiredThrustDirection_MemoizedValue).Data.Y + 4) = 0;
  *(undefined4 *)&(this->GetDesiredThrustDirection_MemoizedValue).Data.Z = 0;
  *(undefined4 *)((int)&(this->GetDesiredThrustDirection_MemoizedValue).Data.Z + 4) = 0;
  *(uint *)&(this->GetDesiredThrustDirection_MemoizedValue).IsValidData = uStack_c;
  *(undefined4 *)((char *)&(this->GetDesiredThrustDirection_MemoizedValue) + 0x1c) = uStack_8;
  return;
}


//==== 007cfd50 7cfd50_SpacecraftComponent__GetBoundingCylinder_km ====
// decompiled by BatchDecomp @ 007cfd50 name=GetBoundingCylinder_km conv=__thiscall body=180

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::Maybe<struct util::Cylinder<double> > __thiscall
   SpacecraftComponent__GetBoundingCylinder_km(void)const  */

void __thiscall SpacecraftComponent__GetBoundingCylinder_km(SpacecraftComponent *this)

{
  double dVar1;
  ReferenceController *this_00;
  bool bVar2;
  CraftInstance *this_01;
  double dVar3;
  double *in_stack_00000004;
  
  this_01 = (CraftInstance *)(this->GetArmorCollisionShells_MemoizedValue).Data.Size;
  this_00 = (ReferenceController *)(this->GetArmorCollisionShells_MemoizedValue).Data.Capacity;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
    if (this_00 != (ReferenceController *)0x0) {
      bVar2 = util__ReferenceController__IsDataStillValid(this_00);
      if (!bVar2) {
        this_01 = (CraftInstance *)0x0;
      }
    }
  }
  CraftInstance__GetBoundingCylinder_m_Memoize(this_01);
  if (*(char *)&(this_01->GetBoundingCylinder_m_MemoizedValue).Data.Radius == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar1 = (this_01->GetTotalRadius_m_MemoizedValue).Data;
  dVar3 = *(double *)&(this_01->GetTotalRadius_m_MemoizedValue).IsValidData;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  dVar3 = dVar3 / /*408f400000000000*/1000.0;
  *in_stack_00000004 = dVar1 / /*408f400000000000*/1000.0;
  in_stack_00000004[1] = dVar3;
  *(undefined1 *)(in_stack_00000004 + 2) = 1;
  return;
}


//==== 007cfe10 7cfe10_SpacecraftComponent__GetCenterOfMass_km ====
// decompiled by BatchDecomp @ 007cfe10 name=GetCenterOfMass_km conv=__thiscall body=89

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::Maybe<struct util::Vec3<double> > __thiscall
   SpacecraftComponent__GetCenterOfMass_km(void)const  */

void __thiscall SpacecraftComponent__GetCenterOfMass_km(SpacecraftComponent *this)

{
  CraftInstance *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_stack_00000004;
  
  this_00 = (CraftInstance *)(this->GetArmorCollisionShells_MemoizedValue).Data.Size;
  CraftInstance__GetCenterOfMass_km_Memoize(this_00);
  if (*(char *)&(this_00->GetCenterOfMass_km_MemoizedValue).Data.Y == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  uVar1 = *(undefined4 *)((int)&(this_00->GetTotalMass_kg_MemoizedValue).Data + 4);
  uVar2 = *(undefined4 *)&(this_00->GetTotalMass_kg_MemoizedValue).IsValidData;
  uVar3 = *(undefined4 *)((char *)&(this_00->GetTotalMass_kg_MemoizedValue) + 0xc);
  *in_stack_00000004 = *(undefined4 *)&(this_00->GetTotalMass_kg_MemoizedValue).Data;
  in_stack_00000004[1] = uVar1;
  in_stack_00000004[2] = uVar2;
  in_stack_00000004[3] = uVar3;
  *(undefined1 *)(in_stack_00000004 + 6) = 1;
  *(double *)(in_stack_00000004 + 4) = (this_00->GetCenterOfMass_km_MemoizedValue).Data.X;
  return;
}


//==== 007cfe70 7cfe70_SpacecraftComponent__GetCenterZDelta_m ====
// decompiled by BatchDecomp @ 007cfe70 name=GetCenterZDelta_m conv=__thiscall body=126

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall SpacecraftComponent__GetCenterZDelta_m(void)const  */

double __thiscall SpacecraftComponent__GetCenterZDelta_m(SpacecraftComponent *this)

{
  double dVar1;
  ReferenceController *this_00;
  bool bVar2;
  CraftInstance *this_01;
  
  this_00 = (ReferenceController *)(this->GetArmorCollisionShells_MemoizedValue).Data.Capacity;
  this_01 = (CraftInstance *)(this->GetArmorCollisionShells_MemoizedValue).Data.Size;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
    if (this_00 != (ReferenceController *)0x0) {
      bVar2 = util__ReferenceController__IsDataStillValid(this_00);
      if (!bVar2) {
        this_01 = (CraftInstance *)0x0;
      }
    }
  }
  CraftInstance__GetCenterZDelta_m_Memoize(this_01);
  if ((this_01->GetTotalLength_m_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar1 = (this_01->GetTotalLength_m_MemoizedValue).Data;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  return dVar1;
}


//==== 007d02e0 7d02e0_SpacecraftComponent__GetCombatIntersectRadius_km_MemoizedFunction ====
// decompiled by BatchDecomp @ 007d02e0 name=SpacecraftComponent_GetCombatIntersectRadius_km_MemoizedFunction conv=__thiscall body=401

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: double __thiscall
   SpacecraftComponent__GetCombatIntersectRadius_km_MemoizedFunction(void)const  */

double __thiscall
SpacecraftComponent__GetCombatIntersectRadius_km_MemoizedFunction(SpacecraftComponent *this)

{
  Maybe_L_util__Darray_L_util__WeakPtr_L_PayloadCompartment_G___G___G_ *pMVar1;
  double dVar2;
  CraftInstance *this_00;
  Body *this_01;
  bool bVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  float10 extraout_ST0;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_28;
  Darray_L_double_G_ local_24;
  double local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  this_00 = (CraftInstance *)(this->GetArmorCollisionShells_MemoizedValue).Data.Size;
  CraftInstance__GetPayloadModules_Memoize(this_00);
  pMVar1 = &this_00->GetPayloadModules_MemoizedValue;
  if ((this_00->GetPayloadModules_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_24._pad_0x0_0 = 0;
  local_24.Data = (double *)0x0;
  local_24.Size = 0;
  local_24.Capacity = 0;
  iVar4 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
  util__Darray_double___Darray_double(&local_24,iVar4);
  local_c = 0;
  iVar4 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
  if (local_c < iVar4) {
    do {
      piVar5 = (int *)(**(code **)*(int *)&pMVar1->Data)(&local_c);
      if ((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) {
        bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]);
        if (!bVar3) {
          *piVar5 = 0;
        }
      }
      fVar6 = (float10)(**(code **)(**(int **)(*piVar5 + 0x38) + 0x154))();
      iVar4 = local_24.Size;
      local_14 = (double)fVar6;
      local_28 = local_24.Size + 1;
      util__Darray_double___SetSize(&local_24,&local_28);
      bVar3 = util__Darray_double___CheckSize(&local_24,iVar4);
      if (bVar3) {
        local_24.Data[local_24.Size + -1] = local_14;
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
    } while (local_c < iVar4);
  }
  local_14 = util__GetCombatIntersectRadius_km_MemoizedFunction(&local_24);
  local_24._pad_0x0_0 = (int)((void *)(0x0091da54u));
  if (local_24.Data != (double *)0x0) {
    operator_delete__(local_24.Data);
  }
  local_14 = local_14 / /*408f400000000000*/1000.0;
  if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
    bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
    if (!bVar3) {
      this->_pad_0x0_0 = 0;
    }
  }
  this_01 = (Body *)this->_pad_0x0_0;
  Body__GetRadius_km_Memoize(this_01);
  if ((this_01->GetRadius_km_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  uVar7 = *(undefined4 *)&local_14;
  uVar8 = *(undefined4 *)((char *)&local_14 + 4);
  dVar2 = (this_01->GetRadius_km_MemoizedValue).Data;
  if (local_14 <= dVar2) {
    uVar7 = *(undefined4 *)&dVar2;
    uVar8 = *(undefined4 *)((char *)&dVar2 + 4);
  }
  local_14 = (double)CONCAT44(uVar8,uVar7);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 007d0480 7d0480_SpacecraftComponent__GetCraft ====
// decompiled by BatchDecomp @ 007d0480 name=GetCraft conv=__thiscall body=40

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::WeakPtr<struct CraftInstance> __thiscall
   SpacecraftComponent__GetCraft(void)const  */

int * __thiscall SpacecraftComponent__GetCraft(SpacecraftComponent *this)

{
  ReferenceController *this_00;
  int *in_stack_00000004;
  
  this_00 = (ReferenceController *)(this->GetArmorCollisionShells_MemoizedValue).Data.Capacity;
  *in_stack_00000004 = (this->GetArmorCollisionShells_MemoizedValue).Data.Size;
  in_stack_00000004[1] = (int)this_00;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
  }
  return in_stack_00000004;
}


//==== 007d04b0 7d04b0_SpacecraftComponent__GetCraftDesign ====
// decompiled by BatchDecomp @ 007d04b0 name=GetCraftDesign conv=__thiscall body=10

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class CraftBlueprint const * __thiscall SpacecraftComponent__GetCraftDesign(void)const
    */

CraftBlueprint * __thiscall SpacecraftComponent__GetCraftDesign(SpacecraftComponent *this)

{
  return *(CraftBlueprint **)((this->GetArmorCollisionShells_MemoizedValue).Data.Size + 8);
}


//==== 007d04c0 7d04c0_SpacecraftComponent__GetCrossSection_m2 ====
// decompiled by BatchDecomp @ 007d04c0 name=GetCrossSection_m2 conv=__thiscall body=81

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util__Maybe_L_double_G_ __thiscall
   SpacecraftComponent__GetCrossSection_m2(void)const  */

Maybe_L_double_G_ * __thiscall
SpacecraftComponent__GetCrossSection_m2(SpacecraftComponent *this,Maybe_L_double_G_ *__return_storage_ptr__)

{
  CraftBlueprint *this_00;
  
  this_00 = *(CraftBlueprint **)((this->GetArmorCollisionShells_MemoizedValue).Data.Size + 8);
  CraftBlueprint__GetCrossSection_m2_Memoize(this_00);
  if (*(char *)((this_00->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 3) ==
      '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  __return_storage_ptr__->Data =
       (this_00->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data[2];
  __return_storage_ptr__->IsValidData = true;
  return __return_storage_ptr__;
}


//==== 007d0520 7d0520_SpacecraftComponent__GetCurrentPowerBudget_J ====
// decompiled by BatchDecomp @ 007d0520 name=GetCurrentPowerBudget_J conv=__thiscall body=7

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall SpacecraftComponent__GetCurrentPowerBudget_J(void)const  */

double __thiscall SpacecraftComponent__GetCurrentPowerBudget_J(SpacecraftComponent *this)

{
  return *(double *)&(this->GetCompartmentCollisionShells_MemoizedValue).Data.Capacity;
}


//==== 007d09c0 7d09c0_SpacecraftComponent__GetDesiredThrustDirection_Clear ====
// decompiled by BatchDecomp @ 007d09c0 name=SpacecraftComponent_GetDesiredThrustDirection_Clear conv=__thiscall body=29

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftComponent__GetDesiredThrustDirection_Clear(void)const  */

void __thiscall SpacecraftComponent__GetDesiredThrustDirection_Clear(SpacecraftComponent *this)

{
  (this->GetDesiredOrientation_MemoizedValue).IsValidData = false;
  *(undefined4 *)&(this->GetDesiredOrientation_MemoizedValue).Data.Y = 0;
  *(undefined4 *)((int)&(this->GetDesiredOrientation_MemoizedValue).Data.Y + 4) = 0;
  *(undefined4 *)&(this->GetDesiredOrientation_MemoizedValue).Data.Z = 0;
  *(undefined4 *)((int)&(this->GetDesiredOrientation_MemoizedValue).Data.Z + 4) = 0;
  (this->GetDesiredOrientation_MemoizedValue).Data.W = 0.0;
  return;
}


//==== 007d09e0 7d09e0_SpacecraftComponent__GetDesiredThrustDirection_Memoize ====
// decompiled by BatchDecomp @ 007d09e0 name=SpacecraftComponent_GetDesiredThrustDirection_Memoize conv=__thiscall body=121

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftComponent__GetDesiredThrustDirection_Memoize(void)const  */

void __thiscall SpacecraftComponent__GetDesiredThrustDirection_Memoize(SpacecraftComponent *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  Vec3_L_double_G_ *pVVar6;
  Vec3_L_double_G_ local_20;
  int local_8;
  
  if ((this->GetDesiredOrientation_MemoizedValue).IsValidData == false) {
    iVar1 = (this->SpacecraftComponentMemoizationHandlerInstance).ResetFunctions.Size;
    local_8 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)
               &this->SpacecraftComponentMemoizationHandlerInstance,&local_8);
    bVar5 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->SpacecraftComponentMemoizationHandlerInstance,iVar1);
    if (bVar5) {
      (this->SpacecraftComponentMemoizationHandlerInstance).ResetFunctions.Data
      [(this->SpacecraftComponentMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_1fb4a0e4, SpacecraftComponent_GetDesiredThrustDirection_Clear);
    }
    pVVar6 = SpacecraftComponent_GetDesiredThrustDirection_MemoizedFunction(this,&local_20);
    uVar2 = *(undefined4 *)((int)&pVVar6->X + 4);
    uVar3 = *(undefined4 *)&pVVar6->Y;
    uVar4 = *(undefined4 *)((int)&pVVar6->Y + 4);
    ((slice_view *)&local_20.Z)->_0_4_ = CONCAT31(((slice_view *)&local_20.Z)->_1_3_,1);
    ((slice_view *)&local_20.Y)->_0_4_ = *(undefined4 *)&pVVar6->Z;
    ((slice_view *)&local_20.Y)->_4_4_ = (undefined4)((ulonglong)pVVar6->Z >> 0x20);
    *(undefined4 *)&(this->GetDesiredOrientation_MemoizedValue).Data.Y = *(undefined4 *)&pVVar6->X;
    *(undefined4 *)((int)&(this->GetDesiredOrientation_MemoizedValue).Data.Y + 4) = uVar2;
    *(undefined4 *)&(this->GetDesiredOrientation_MemoizedValue).Data.Z = uVar3;
    *(undefined4 *)((int)&(this->GetDesiredOrientation_MemoizedValue).Data.Z + 4) = uVar4;
    *(undefined4 *)&(this->GetDesiredOrientation_MemoizedValue).Data.W = ((slice_view *)&local_20.Y)->_0_4_;
    *(undefined4 *)((int)&(this->GetDesiredOrientation_MemoizedValue).Data.W + 4) = ((slice_view *)&local_20.Y)->_4_4_
    ;
    *(undefined4 *)&(this->GetDesiredOrientation_MemoizedValue).IsValidData = ((slice_view *)&local_20.Z)->_0_4_;
    *(undefined4 *)((char *)&(this->GetDesiredOrientation_MemoizedValue) + 0x24) = ((slice_view *)&local_20.Z)->_4_4_;
  }
  return;
}


//==== 007d0ec0 7d0ec0_SpacecraftComponent__GetForwardDirection ====
// decompiled by BatchDecomp @ 007d0ec0 name=GetForwardDirection conv=__thiscall body=88

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct Vec3_L_double_G_ __thiscall SpacecraftComponent__GetForwardDirection(void)const
    */

Vec3_L_double_G_ * __thiscall
SpacecraftComponent__GetForwardDirection(SpacecraftComponent *this,Vec3_L_double_G_ *__return_storage_ptr__)

{
  CraftBlueprint *this_00;
  undefined4 uVar1;
  int iVar2;
  EngineModule **ppEVar3;
  
  this_00 = *(CraftBlueprint **)((this->GetArmorCollisionShells_MemoizedValue).Data.Size + 8);
  CraftBlueprint__GetForwardDirection_Memoize(this_00);
  if ((this_00->GetPowerableMainEngineModules_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  uVar1 = *(undefined4 *)&(this_00->GetMainEngineModules_MemoizedValue).IsValidData;
  iVar2 = (this_00->GetPowerableMainEngineModules_MemoizedValue).Data._pad_0x0_0;
  ppEVar3 = (this_00->GetPowerableMainEngineModules_MemoizedValue).Data.Data;
  *(int *)&__return_storage_ptr__->X = (this_00->GetMainEngineModules_MemoizedValue).Data.Capacity;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = uVar1;
  *(int *)&__return_storage_ptr__->Y = iVar2;
  *(EngineModule ***)((int)&__return_storage_ptr__->Y + 4) = ppEVar3;
  __return_storage_ptr__->Z =
       *(double *)&(this_00->GetPowerableMainEngineModules_MemoizedValue).Data.Size;
  return __return_storage_ptr__;
}


//==== 007d0ff0 7d0ff0_SpacecraftComponent__GetInverseMomentOfInertia_kg_m2 ====
// decompiled by BatchDecomp @ 007d0ff0 name=GetInverseMomentOfInertia_kg_m2 conv=__thiscall body=122

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::Maybe<struct util::Matrix3x3<double> > __thiscall
   SpacecraftComponent__GetInverseMomentOfInertia_kg_m2(void)const  */

void __thiscall SpacecraftComponent__GetInverseMomentOfInertia_kg_m2(SpacecraftComponent *this)

{
  CraftInstance *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_stack_00000004;
  
  this_00 = (CraftInstance *)(this->GetArmorCollisionShells_MemoizedValue).Data.Size;
  CraftInstance__GetInverseMomentOfInertiaTensor_kg_m2_Memoize(this_00);
  if (*(char *)((this_00->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 7) ==
      '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  uVar1 = *(undefined4 *)
           ((int)(this_00->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x44);
  uVar2 = *(undefined4 *)&(this_00->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).IsValidData;
  uVar3 = *(undefined4 *)((char *)&(this_00->GetMomentOfInertiaTensor_kg_m2_MemoizedValue) + 0x4c);
  *in_stack_00000004 =
       *(undefined4 *)((this_00->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 8);
  in_stack_00000004[1] = uVar1;
  in_stack_00000004[2] = uVar2;
  in_stack_00000004[3] = uVar3;
  *(undefined1 *)(in_stack_00000004 + 0x12) = 1;
  uVar1 = *(undefined4 *)
           ((int)(this_00->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 4);
  uVar2 = *(undefined4 *)
           ((this_00->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 1);
  uVar3 = *(undefined4 *)
           ((int)(this_00->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0xc);
  in_stack_00000004[4] =
       *(undefined4 *)(this_00->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data;
  in_stack_00000004[5] = uVar1;
  in_stack_00000004[6] = uVar2;
  in_stack_00000004[7] = uVar3;
  uVar1 = *(undefined4 *)
           ((int)(this_00->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x14);
  uVar2 = *(undefined4 *)
           ((this_00->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 3);
  uVar3 = *(undefined4 *)
           ((int)(this_00->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x1c);
  in_stack_00000004[8] =
       *(undefined4 *)((this_00->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 2)
  ;
  in_stack_00000004[9] = uVar1;
  in_stack_00000004[10] = uVar2;
  in_stack_00000004[0xb] = uVar3;
  uVar1 = *(undefined4 *)
           ((int)(this_00->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x24);
  uVar2 = *(undefined4 *)
           ((this_00->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 5);
  uVar3 = *(undefined4 *)
           ((int)(this_00->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x2c);
  in_stack_00000004[0xc] =
       *(undefined4 *)((this_00->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 4)
  ;
  in_stack_00000004[0xd] = uVar1;
  in_stack_00000004[0xe] = uVar2;
  in_stack_00000004[0xf] = uVar3;
  *(double *)(in_stack_00000004 + 0x10) =
       (this_00->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data[6];
  return;
}


//==== 007d1070 7d1070_SpacecraftComponent__GetMass_kg ====
// decompiled by BatchDecomp @ 007d1070 name=GetMass_kg conv=__thiscall body=78

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util__Maybe_L_double_G_ __thiscall SpacecraftComponent__GetMass_kg(void)const
    */

Maybe_L_double_G_ * __thiscall
SpacecraftComponent__GetMass_kg(SpacecraftComponent *this,Maybe_L_double_G_ *__return_storage_ptr__)

{
  CraftInstance *this_00;
  
  this_00 = (CraftInstance *)(this->GetArmorCollisionShells_MemoizedValue).Data.Size;
  CraftInstance__GetTotalMass_kg_Memoize(this_00);
  if ((this_00->GetTotalReactionMass_kg_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  __return_storage_ptr__->Data = (this_00->GetTotalReactionMass_kg_MemoizedValue).Data;
  __return_storage_ptr__->IsValidData = true;
  return __return_storage_ptr__;
}


//==== 007d1120 7d1120_SpacecraftComponent__GetName ====
// decompiled by BatchDecomp @ 007d1120 name=GetName conv=__thiscall body=1476

/* WARNING: Removing unreachable block (ram,0x007d1594) */
/* WARNING: Removing unreachable block (ram,0x007d15a4) */
/* WARNING: Removing unreachable block (ram,0x007d15b7) */
/* WARNING: Removing unreachable block (ram,0x007d15c1) */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Str<char> __thiscall SpacecraftComponent__GetName(void)const  */

Str_L_char_G_ * __thiscall
SpacecraftComponent__GetName(SpacecraftComponent *this,Str_L_char_G_ *__return_storage_ptr__)

{
  Body *pBVar1;
  ReferenceController *pRVar2;
  CapitalShipComponent *this_00;
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
  LocStr *pLVar18;
  Str_L_char_G_ *pSVar19;
  Str_L_char_G_ *pSVar20;
  void *local_124[3];
  void *local_118;
  LocStr local_10c[24];
  void *local_f4[3];
  void *local_e8;
  Str_L_char_G_ local_dc;
  void *local_d0[3];
  Str_L_char_G_ local_c4;
  Str_L_char_G_ local_b8;
  Str_L_char_G_ local_ac;
  Str_L_char_G_ local_a0;
  Str_L_char_G_ local_94;
  void *local_88[3];
  Str_L_char_G_ local_7c;
  Str_L_char_G_ local_70;
  Str_L_char_G_ local_64;
  Str_L_char_G_ local_58;
  Str_L_char_G_ local_4c;
  Str_L_char_G_ *local_40;
  int *local_3c;
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_40 = __return_storage_ptr__;
  local_3c = (int *)0x0;
  if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
     (bVar17 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
     !bVar17)) {
    this->_pad_0x0_0 = 0;
  }
  pBVar1 = (Body *)this->_pad_0x0_0;
  Body__GetCapitalShipComponent_Memoize(pBVar1);
  if ((pBVar1->GetCapitalShipComponent_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if ((((pBVar1->GetCapitalShipComponent_MemoizedValue).Data.Pointer == (CapitalShipComponent *)0x0)
      || (pRVar2 = (pBVar1->GetCapitalShipComponent_MemoizedValue).Data.Controller,
         pRVar2 == (ReferenceController *)0x0)) ||
     (bVar17 = util__ReferenceController__IsDataStillValid(pRVar2), !bVar17)) {
    pSVar19 = (Str_L_char_G_ *)
              (**(code **)(**(int **)((this->GetArmorCollisionShells_MemoizedValue).Data.Size + 8) +
                          0x48))(local_88);
    bVar16 = true;
    bVar15 = false;
    bVar14 = false;
    bVar13 = false;
    bVar12 = false;
    bVar11 = false;
    bVar10 = false;
    bVar9 = false;
    bVar8 = false;
    bVar7 = false;
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    bVar3 = false;
    bVar17 = false;
  }
  else {
    util__Str_char___Str_char__o5(&local_dc,"RightParen");
    util__Str_char___Str_char__o5(&local_7c,"LeftParen");
    util__Str_char___Str_char__o5(&local_70,"Space");
    local_3c = *(int **)((this->GetArmorCollisionShells_MemoizedValue).Data.Size + 8);
    local_64.Data = (char *)0x0;
    local_64.Capacity = 0;
    local_64.Length = 0;
    local_58.Data = (char *)0x0;
    local_58.Capacity = 0;
    local_58.Length = 0;
    local_4c.Data = (char *)0x0;
    local_4c.Capacity = 0;
    local_4c.Length = 0;
    if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
       (bVar17 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0)
       , !bVar17)) {
      this->_pad_0x0_0 = 0;
    }
    pBVar1 = (Body *)this->_pad_0x0_0;
    Body__GetCapitalShipComponent_Memoize(pBVar1);
    if ((pBVar1->GetCapitalShipComponent_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    pRVar2 = (pBVar1->GetCapitalShipComponent_MemoizedValue).Data.Controller;
    if ((pRVar2 != (ReferenceController *)0x0) &&
       (bVar17 = util__ReferenceController__IsDataStillValid(pRVar2), !bVar17)) {
      (pBVar1->GetCapitalShipComponent_MemoizedValue).Data.Pointer = (CapitalShipComponent *)0x0;
    }
    this_00 = (pBVar1->GetCapitalShipComponent_MemoizedValue).Data.Pointer;
    pLVar18 = (LocStr *)util__LocStr__LocStr((LocStr *)local_f4,&local_70,&local_4c);
    pSVar19 = util__LocStr__operator__o3(pLVar18);
    pSVar20 = CapitalShipComponent__GetName(this_00,&local_c4);
    local_14.Length = 0;
    local_14.Data = (char *)0x0;
    local_14.Capacity = 0;
    util__Str_char___Str_char(&local_14,pSVar20);
    util__Str_char___operator__o10(&local_14,pSVar19);
    util__Str_char___Str_char(&local_b8,&local_14);
    if (local_14.Data != (char *)0x0) {
      operator_delete__(local_14.Data);
      ((slice_view *)&local_14)->_0_8_ = ((slice_view *)&local_14)->_0_8_ & 0xffffffff00000000;
    }
    pLVar18 = (LocStr *)util__LocStr__LocStr(local_10c,&local_7c,&local_58);
    pSVar19 = util__LocStr__operator__o3(pLVar18);
    local_20.Length = 0;
    local_20.Data = (char *)0x0;
    local_20.Capacity = 0;
    util__Str_char___Str_char(&local_20,&local_b8);
    util__Str_char___operator__o10(&local_20,pSVar19);
    util__Str_char___Str_char(&local_ac,&local_20);
    if (local_20.Data != (char *)0x0) {
      operator_delete__(local_20.Data);
      ((slice_view *)&local_20)->_0_8_ = ((slice_view *)&local_20)->_0_8_ & 0xffffffff00000000;
    }
    pSVar19 = (Str_L_char_G_ *)(**(code **)(*local_3c + 0x48))(local_d0);
    local_2c.Length = 0;
    local_2c.Data = (char *)0x0;
    local_2c.Capacity = 0;
    util__Str_char___Str_char(&local_2c,&local_ac);
    util__Str_char___operator__o10(&local_2c,pSVar19);
    util__Str_char___Str_char(&local_a0,&local_2c);
    if (local_2c.Data != (char *)0x0) {
      operator_delete__(local_2c.Data);
      ((slice_view *)&local_2c)->_0_8_ = ((slice_view *)&local_2c)->_0_8_ & 0xffffffff00000000;
    }
    pLVar18 = (LocStr *)util__LocStr__LocStr((LocStr *)local_124,&local_dc,&local_64);
    pSVar19 = util__LocStr__operator__o3(pLVar18);
    local_38.Length = 0;
    local_38.Data = (char *)0x0;
    local_38.Capacity = 0;
    util__Str_char___Str_char(&local_38,&local_a0);
    util__Str_char___operator__o10(&local_38,pSVar19);
    util__Str_char___Str_char(&local_94,&local_38);
    if (local_38.Data != (char *)0x0) {
      operator_delete__(local_38.Data);
    }
    pSVar19 = &local_94;
    bVar16 = false;
    bVar15 = true;
    bVar14 = true;
    bVar13 = true;
    bVar12 = true;
    bVar11 = true;
    bVar10 = true;
    bVar9 = true;
    bVar8 = true;
    bVar7 = true;
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    bVar3 = true;
    bVar17 = true;
  }
  pSVar20 = local_40;
  util__Str_char___Str_char(local_40,pSVar19);
  if ((bVar16) && (local_88[0] != (void *)0x0)) {
    operator_delete__(local_88[0]);
    local_88[0] = (void *)0x0;
  }
  if ((bVar9) && (local_94.Data != (char *)0x0)) {
    operator_delete__(local_94.Data);
  }
  if ((bVar10) && (local_a0.Data != (char *)0x0)) {
    operator_delete__(local_a0.Data);
  }
  if ((bVar11) && (local_ac.Data != (char *)0x0)) {
    operator_delete__(local_ac.Data);
  }
  if ((bVar12) && (local_b8.Data != (char *)0x0)) {
    operator_delete__(local_b8.Data);
  }
  if ((bVar13) && (local_c4.Data != (char *)0x0)) {
    operator_delete__(local_c4.Data);
    local_c4.Data = (char *)0x0;
  }
  if (bVar14) {
    if (local_e8 != (void *)0x0) {
      operator_delete__(local_e8);
      local_e8 = (void *)0x0;
    }
    if (local_f4[0] != (void *)0x0) {
      operator_delete__(local_f4[0]);
      local_f4[0] = (void *)0x0;
    }
  }
  if ((bVar15) && (local_4c.Data != (char *)0x0)) {
    operator_delete__(local_4c.Data);
    local_4c.Data = (char *)0x0;
  }
  if ((bVar3) && (local_58.Data != (char *)0x0)) {
    operator_delete__(local_58.Data);
    local_58.Data = (char *)0x0;
  }
  if ((bVar4) && (local_d0[0] != (void *)0x0)) {
    operator_delete__(local_d0[0]);
    local_d0[0] = (void *)0x0;
  }
  if (bVar5) {
    if (local_118 != (void *)0x0) {
      operator_delete__(local_118);
      local_118 = (void *)0x0;
    }
    if (local_124[0] != (void *)0x0) {
      operator_delete__(local_124[0]);
      local_124[0] = (void *)0x0;
    }
  }
  if ((bVar6) && (local_64.Data != (char *)0x0)) {
    operator_delete__(local_64.Data);
    local_64.Data = (char *)0x0;
  }
  if ((bVar7) && (local_70.Data != (char *)0x0)) {
    operator_delete__(local_70.Data);
    local_70.Data = (char *)0x0;
  }
  if ((bVar8) && (local_7c.Data != (char *)0x0)) {
    operator_delete__(local_7c.Data);
    local_7c.Data = (char *)0x0;
  }
  if ((local_dc.Data != (char *)0x0) && (bVar17)) {
    operator_delete__(local_dc.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pSVar20;
}


//==== 007d2170 7d2170_SpacecraftComponent__GetRadius_km ====
// decompiled by BatchDecomp @ 007d2170 name=GetRadius_km conv=__thiscall body=128

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util__Maybe_L_double_G_ __thiscall SpacecraftComponent__GetRadius_km(void)const
    */

Maybe_L_double_G_ * __thiscall
SpacecraftComponent__GetRadius_km(SpacecraftComponent *this,Maybe_L_double_G_ *__return_storage_ptr__)

{
  ReferenceController *this_00;
  bool bVar1;
  CraftInstance *this_01;
  
  this_00 = (ReferenceController *)(this->GetArmorCollisionShells_MemoizedValue).Data.Capacity;
  this_01 = (CraftInstance *)(this->GetArmorCollisionShells_MemoizedValue).Data.Size;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
    if (this_00 != (ReferenceController *)0x0) {
      bVar1 = util__ReferenceController__IsDataStillValid(this_00);
      if (!bVar1) {
        this_01 = (CraftInstance *)0x0;
      }
    }
  }
  CraftInstance__GetRadius_km_Memoize(this_01);
  if ((this_01->GetBoundingCylinder_m_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  __return_storage_ptr__->Data = (this_01->GetBoundingCylinder_m_MemoizedValue).Data.Height;
  __return_storage_ptr__->IsValidData = true;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  return __return_storage_ptr__;
}


//==== 007d2dc0 7d2dc0_SpacecraftComponent__GetTargetableRadius_km ====
// decompiled by BatchDecomp @ 007d2dc0 name=GetTargetableRadius_km conv=__thiscall body=136

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util__Maybe_L_double_G_ __thiscall
   SpacecraftComponent__GetTargetableRadius_km(void)const  */

Maybe_L_double_G_ * __thiscall
SpacecraftComponent__GetTargetableRadius_km(SpacecraftComponent *this,Maybe_L_double_G_ *__return_storage_ptr__)

{
  ReferenceController *this_00;
  bool bVar1;
  CraftInstance *this_01;
  double dVar2;
  
  this_00 = (ReferenceController *)(this->GetArmorCollisionShells_MemoizedValue).Data.Capacity;
  this_01 = (CraftInstance *)(this->GetArmorCollisionShells_MemoizedValue).Data.Size;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
    if (this_00 != (ReferenceController *)0x0) {
      bVar1 = util__ReferenceController__IsDataStillValid(this_00);
      if (!bVar1) {
        this_01 = (CraftInstance *)0x0;
      }
    }
  }
  CraftInstance__GetTotalRadius_m_Memoize(this_01);
  if ((this_01->GetCenterZDelta_m_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar2 = (this_01->GetCenterZDelta_m_MemoizedValue).Data / /*408f400000000000*/1000.0;
  __return_storage_ptr__->IsValidData = true;
  __return_storage_ptr__->Data = dVar2;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  return __return_storage_ptr__;
}


//==== 007d2e50 7d2e50_SpacecraftComponent__GetTargeting ====
// decompiled by BatchDecomp @ 007d2e50 name=GetTargeting conv=__thiscall body=7

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct SpacecraftTargeting * __thiscall SpacecraftComponent__GetTargeting(void) */

SpacecraftTargeting * __thiscall SpacecraftComponent__GetTargeting(SpacecraftComponent *this)

{
  return (SpacecraftTargeting *)&this->CommandIsEffective;
}


//==== 007d2e60 7d2e60_SpacecraftComponent__GetThrustForce_N ====
// decompiled by BatchDecomp @ 007d2e60 name=GetThrustForce_N conv=__thiscall body=535

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual struct Vec3_L_double_G_ __thiscall SpacecraftComponent__GetThrustForce_N(struct
   util::PhysicalState<struct util::Vec3<double> >)const  */

Vec3_L_double_G_ * __thiscall
SpacecraftComponent__GetThrustForce_N(SpacecraftComponent *this,Vec3_L_double_G_ *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  Body *this_00;
  Quaternion_L_double_G_ QVar3;
  Vec3_L_double_G_ VVar4;
  bool bVar5;
  Vec3_L_double_G_ *pVVar6;
  Quaternion_L_double_G_ *pQVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  Quaternion_L_double_G_ local_70;
  Vec3_L_double_G_ local_50;
  Darray_L_struct_ThrusterLayout_G_ local_38[16];
  Darray_L_struct_ThrusterLayout_G_ local_28[16];
  undefined1 local_18;
  undefined8 local_14;
  Body *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_14 = (double)CONCAT44(this,(undefined4)local_14);
  if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
     (bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
     !bVar5)) {
    this->_pad_0x0_0 = 0;
  }
  if (*(int *)(this->_pad_0x0_0 + 0x1e0) == 0) {
    *(undefined4 *)&__return_storage_ptr__->X = 0;
    *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = 0;
    *(undefined4 *)&__return_storage_ptr__->Y = 0;
    *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = 0;
    __return_storage_ptr__->Z = 0.0;
  }
  else {
    if (*(char *)&(this->GetThrusterLayouts_MemoizedValue).Data.Data == '\0') {
      iVar8 = (this->SpacecraftComponentMemoizationHandlerInstance).ResetFunctions.Size;
      local_c = (Body *)(iVar8 + 1);
      util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)
                 &this->SpacecraftComponentMemoizationHandlerInstance,(int *)&local_c);
      bVar5 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                         &this->SpacecraftComponentMemoizationHandlerInstance,iVar8);
      if (bVar5) {
        (this->SpacecraftComponentMemoizationHandlerInstance).ResetFunctions.Data
        [(this->SpacecraftComponentMemoizationHandlerInstance).ResetFunctions.Size + -1] =
             CDE_PMF(pmf_1fb4a0e4, SpacecraftComponent_GetThrustersThatNeedToFire_Clear);
      }
      if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
         (bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0), !bVar5)) {
        this->_pad_0x0_0 = 0;
      }
      local_c = (Body *)this->_pad_0x0_0;
      if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
         (bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0), !bVar5)) {
        this->_pad_0x0_0 = 0;
      }
      this_00 = (Body *)this->_pad_0x0_0;
      pVVar6 = Body__GetAngularVelocity_radians__s(local_c,&local_50);
      pQVar7 = Body__GetOrientation(this_00,&local_70);
      this = ((slice_view *)&local_14)->_4_4_;
      ((slice_view *)&QVar3.X)->_4_4_ = *(undefined4 *)&pQVar7->X;
      ((slice_view *)&QVar3.X)->_0_4_ = local_38;
      ((slice_view *)&QVar3.Y)->_0_4_ = *(undefined4 *)((int)&pQVar7->X + 4);
      ((slice_view *)&QVar3.Y)->_4_4_ = *(undefined4 *)&pQVar7->Y;
      ((slice_view *)&QVar3.Z)->_0_4_ = *(undefined4 *)((int)&pQVar7->Y + 4);
      ((slice_view *)&QVar3.Z)->_4_4_ = *(undefined4 *)&pQVar7->Z;
      ((slice_view *)&QVar3.W)->_0_4_ = *(undefined4 *)((int)&pQVar7->Z + 4);
      ((slice_view *)&QVar3.W)->_4_4_ = *(undefined4 *)&pQVar7->W;
      ((slice_view *)&VVar4.X)->_4_4_ = *(undefined4 *)&pVVar6->X;
      ((slice_view *)&VVar4.X)->_0_4_ = *(undefined4 *)((int)&pQVar7->W + 4);
      ((slice_view *)&VVar4.Y)->_0_4_ = *(undefined4 *)((int)&pVVar6->X + 4);
      ((slice_view *)&VVar4.Y)->_4_4_ = *(undefined4 *)&pVVar6->Y;
      ((slice_view *)&VVar4.Z)->_0_4_ = *(undefined4 *)((int)&pVVar6->Y + 4);
      ((slice_view *)&VVar4.Z)->_4_4_ = *(undefined4 *)&pVVar6->Z;
      GetThrustersThatNeedToFire(((slice_view *)&local_14)->_4_4_,QVar3,VVar4);
      util__Darray_struct_ThrusterLayout___Darray_struct_ThrusterLayout(local_28,local_38);
      local_18 = 1;
      util__Darray_struct_ThrusterLayout___operator
                ((Darray_L_struct_ThrusterLayout_G_ *)
                 ((int)&(this->GetReactionMass_kg_MemoizedValue).Data + 4),local_28);
      *(undefined1 *)&(this->GetThrusterLayouts_MemoizedValue).Data.Data = local_18;
      util__Darray_struct_ThrusterLayout____Darray_struct_ThrusterLayout(local_28);
      util__Darray_struct_ThrusterLayout____Darray_struct_ThrusterLayout(local_38);
    }
    piVar10 = (int *)((int)&(this->GetReactionMass_kg_MemoizedValue).Data + 4);
    if (*(char *)&(this->GetThrusterLayouts_MemoizedValue).Data.Data == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    local_c = (Body *)0x0;
    *(undefined4 *)&__return_storage_ptr__->X = 0;
    *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = 0;
    *(undefined4 *)&__return_storage_ptr__->Y = 0;
    *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = 0;
    __return_storage_ptr__->Z = 0.0;
    iVar8 = (**(code **)(*piVar10 + 0xc))();
    if ((int)local_c < iVar8) {
      do {
        puVar9 = (undefined4 *)(**(code **)*piVar10)(&local_c);
        if (((ReferenceController *)puVar9[1] != (ReferenceController *)0x0) &&
           (bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar9[1]),
           !bVar5)) {
          *puVar9 = 0;
        }
        local_14 = EngineCompartment__GetMaxThrust_N((EngineCompartment *)*puVar9);
        dVar1 = *(double *)(puVar9 + 0x16);
        dVar2 = *(double *)(puVar9 + 0x18);
        local_c = (Body *)((int)&local_c->_pad_0x0_0 + 1);
        __return_storage_ptr__->X =
             *(double *)(puVar9 + 0x14) * local_14 + __return_storage_ptr__->X;
        __return_storage_ptr__->Y = dVar1 * local_14 + __return_storage_ptr__->Y;
        __return_storage_ptr__->Z = dVar2 * local_14 + __return_storage_ptr__->Z;
        iVar8 = (**(code **)(*piVar10 + 0xc))();
      } while ((int)local_c < iVar8);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 007d3080 7d3080_SpacecraftComponent__GetThrusterLayouts_Clear ====
// decompiled by BatchDecomp @ 007d3080 name=SpacecraftComponent_GetThrusterLayouts_Clear conv=__thiscall body=66

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftComponent__GetThrusterLayouts_Clear(void)const  */

void __thiscall SpacecraftComponent__GetThrusterLayouts_Clear(SpacecraftComponent *this)

{
  undefined **local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = ((void *)(0x0093cf18u));
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  util__Darray_struct_ThrusterLayout___operator
            ((Darray_L_struct_ThrusterLayout_G_ *)&this->GetDryMass_kg_MemoizedValue,
             (Darray_L_struct_ThrusterLayout_G_ *)&local_14);
  util__Darray_struct_ThrusterLayout____Darray_struct_ThrusterLayout((Darray_L_struct_ThrusterLayout_G_ *)&local_14);
  *(undefined1 *)&(this->GetReactionMass_kg_MemoizedValue).Data = 0;
  return;
}


//==== 007d35b0 7d35b0_SpacecraftComponent__GetThrustersThatNeedToFire_Clear ====
// decompiled by BatchDecomp @ 007d35b0 name=SpacecraftComponent_GetThrustersThatNeedToFire_Clear conv=__thiscall body=66

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftComponent__GetThrustersThatNeedToFire_Clear(void)const  */

void __thiscall SpacecraftComponent__GetThrustersThatNeedToFire_Clear(SpacecraftComponent *this)

{
  undefined **local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = ((void *)(0x0093cf18u));
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  util__Darray_struct_ThrusterLayout___operator
            ((Darray_L_struct_ThrusterLayout_G_ *)
             ((int)&(this->GetReactionMass_kg_MemoizedValue).Data + 4),
             (Darray_L_struct_ThrusterLayout_G_ *)&local_14);
  util__Darray_struct_ThrusterLayout____Darray_struct_ThrusterLayout((Darray_L_struct_ThrusterLayout_G_ *)&local_14);
  *(undefined1 *)&(this->GetThrusterLayouts_MemoizedValue).Data.Data = 0;
  return;
}


//==== 007d3600 7d3600_SpacecraftComponent__GetTightRadius_km ====
// decompiled by BatchDecomp @ 007d3600 name=GetTightRadius_km conv=__thiscall body=128

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util__Maybe_L_double_G_ __thiscall
   SpacecraftComponent__GetTightRadius_km(void)const  */

Maybe_L_double_G_ * __thiscall
SpacecraftComponent__GetTightRadius_km(SpacecraftComponent *this,Maybe_L_double_G_ *__return_storage_ptr__)

{
  ReferenceController *this_00;
  bool bVar1;
  CraftInstance *this_01;
  
  this_00 = (ReferenceController *)(this->GetArmorCollisionShells_MemoizedValue).Data.Capacity;
  this_01 = (CraftInstance *)(this->GetArmorCollisionShells_MemoizedValue).Data.Size;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
    if (this_00 != (ReferenceController *)0x0) {
      bVar1 = util__ReferenceController__IsDataStillValid(this_00);
      if (!bVar1) {
        this_01 = (CraftInstance *)0x0;
      }
    }
  }
  CraftInstance__GetTightenedRadius_km_Memoize(this_01);
  if ((this_01->GetRadius_km_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  __return_storage_ptr__->Data = (this_01->GetRadius_km_MemoizedValue).Data;
  __return_storage_ptr__->IsValidData = true;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  return __return_storage_ptr__;
}


//==== 007d4290 7d4290_SpacecraftComponent__HasFuelForTurningLeft_Clear ====
// decompiled by BatchDecomp @ 007d4290 name=SpacecraftComponent_HasFuelForTurningLeft_Clear conv=__thiscall body=7

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftComponent__HasFuelForTurningLeft_Clear(void)const  */

void __thiscall SpacecraftComponent__HasFuelForTurningLeft_Clear(SpacecraftComponent *this)

{
  (this->HasFuelForTurningLeft_MemoizedValue).Data = false;
  (this->HasFuelForTurningLeft_MemoizedValue).IsValidData = false;
  return;
}


//==== 007d4300 7d4300_SpacecraftComponent__HasFuelForTurningLeft_MemoizedFunction ====
// decompiled by BatchDecomp @ 007d4300 name=SpacecraftComponent_HasFuelForTurningLeft_MemoizedFunction conv=__thiscall body=362

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall SpacecraftComponent__HasFuelForTurningLeft_MemoizedFunction(void)const
    */

bool __thiscall
SpacecraftComponent__HasFuelForTurningLeft_MemoizedFunction(SpacecraftComponent *this)

{
  CraftBlueprint *this_00;
  CraftInstance *this_01;
  bool bVar1;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_40[16];
  undefined **local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20[4];
  undefined1 local_d;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar5 = false;
  local_c = 0;
  this_00 = *(CraftBlueprint **)((this->GetArmorCollisionShells_MemoizedValue).Data.Size + 8);
  CraftBlueprint__CanMove_Memoize(this_00);
  if (*(char *)((int)&(this_00->GetMainEngineModulePlacers_MemoizedValue).Data._pad_0x0_0 + 1) ==
      '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if ((char)(this_00->GetMainEngineModulePlacers_MemoizedValue).Data._pad_0x0_0 != '\0') {
    this_01 = (CraftInstance *)(this->GetArmorCollisionShells_MemoizedValue).Data.Size;
    if ((this_01 == (CraftInstance *)0x0) ||
       ((this->GetArmorCollisionShells_MemoizedValue).Data.Capacity == 0)) {
      local_2c = 0;
      pDVar2 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_30;
      local_28 = 0;
      local_24 = 0;
      bVar1 = false;
      bVar5 = true;
      local_30 = ((void *)(0x0091e0b8u));
    }
    else {
      CraftInstance__GetEngineModules_Memoize(this_01);
      if ((this_01->GetEngineModules_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      pDVar2 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
               util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_40,(Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
                                   &this_01->GetEngineModules_MemoizedValue);
      bVar1 = true;
      bVar5 = false;
    }
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment((Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)local_20,pDVar2);
    if (bVar5) {
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_30);
    }
    if (bVar1) {
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_40);
    }
    bVar5 = true;
    local_c = 0;
    iVar3 = (*(code *)local_20[0][3])();
    if (local_c < iVar3) {
      do {
        puVar4 = (undefined4 *)(*(code *)*local_20[0])(&local_c);
        if ((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) {
          bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]);
          if (!bVar1) {
            *puVar4 = 0;
          }
        }
        bVar1 = EngineCompartment__HasAllNeededReactionMass((EngineCompartment *)*puVar4);
        if (bVar1) {
          local_d = 1;
          goto LAB_007d4442;
        }
        local_c = local_c + 1;
        iVar3 = (*(code *)local_20[0][3])();
      } while (local_c < iVar3);
    }
  }
  local_d = 0;
LAB_007d4442:
  if (bVar5) {
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_20);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)local_d;
}


//==== 007d4540 7d4540_SpacecraftComponent__HasPayloadsLeft_Clear ====
// decompiled by BatchDecomp @ 007d4540 name=SpacecraftComponent_HasPayloadsLeft_Clear conv=__thiscall body=7

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftComponent__HasPayloadsLeft_Clear(void)const  */

void __thiscall SpacecraftComponent__HasPayloadsLeft_Clear(SpacecraftComponent *this)

{
  (this->HasPayloadsLeft_MemoizedValue).Data = false;
  (this->HasPayloadsLeft_MemoizedValue).IsValidData = false;
  return;
}


//==== 007d4550 7d4550_SpacecraftComponent__HasWeaponsLeft_Clear ====
// decompiled by BatchDecomp @ 007d4550 name=SpacecraftComponent_HasWeaponsLeft_Clear conv=__thiscall body=7

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftComponent__HasWeaponsLeft_Clear(void)const  */

void __thiscall SpacecraftComponent__HasWeaponsLeft_Clear(SpacecraftComponent *this)

{
  (this->HasWeaponsLeft_MemoizedValue).Data = false;
  (this->HasWeaponsLeft_MemoizedValue).IsValidData = false;
  return;
}


//==== 007d4920 7d4920_SpacecraftComponent__IsControlled ====
// decompiled by BatchDecomp @ 007d4920 name=IsControlled conv=__thiscall body=41

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall SpacecraftComponent__IsControlled(void)const  */

bool __thiscall SpacecraftComponent__IsControlled(SpacecraftComponent *this)

{
  bool bVar1;
  
  if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
    if (!bVar1) {
      this->_pad_0x0_0 = 0;
    }
  }
  return *(int *)(this->_pad_0x0_0 + 0x1e0) != 0;
}


//==== 007d4a40 7d4a40_SpacecraftComponent__IsEnemyControlled ====
// decompiled by BatchDecomp @ 007d4a40 name=IsEnemyControlled conv=__thiscall body=58

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall SpacecraftComponent__IsEnemyControlled(void)const  */

bool __thiscall SpacecraftComponent__IsEnemyControlled(SpacecraftComponent *this)

{
  Faction *pFVar1;
  bool bVar2;
  TacticalManager *this_00;
  Faction *pFVar3;
  
  if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
    if (!bVar2) {
      this->_pad_0x0_0 = 0;
    }
  }
  pFVar1 = *(Faction **)(this->_pad_0x0_0 + 0x1e0);
  this_00 = Component__GetManager((Component *)this);
  pFVar3 = TacticalManager__GetEnemyAlliance(this_00);
  return pFVar1== pFVar3;
}


//==== 007d4b80 7d4b80_SpacecraftComponent__IsPlayerControlled ====
// decompiled by BatchDecomp @ 007d4b80 name=IsPlayerControlled conv=__thiscall body=58

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall SpacecraftComponent__IsPlayerControlled(void)const  */

bool __thiscall SpacecraftComponent__IsPlayerControlled(SpacecraftComponent *this)

{
  Faction *pFVar1;
  bool bVar2;
  TacticalManager *this_00;
  Faction *pFVar3;
  
  if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
    if (!bVar2) {
      this->_pad_0x0_0 = 0;
    }
  }
  pFVar1 = *(Faction **)(this->_pad_0x0_0 + 0x1e0);
  this_00 = Component__GetManager((Component *)this);
  pFVar3 = TacticalManager__GetPlayerAlliance(this_00);
  return pFVar1== pFVar3;
}


//==== 007d4c90 7d4c90_SpacecraftComponent__IsThreatening_Clear ====
// decompiled by BatchDecomp @ 007d4c90 name=SpacecraftComponent_IsThreatening_Clear conv=__thiscall body=7

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftComponent__IsThreatening_Clear(void)const  */

void __thiscall SpacecraftComponent__IsThreatening_Clear(SpacecraftComponent *this)

{
  (this->IsThreatening_MemoizedValue).Data = false;
  (this->IsThreatening_MemoizedValue).IsValidData = false;
  return;
}


//==== 007d5630 7d5630_SpacecraftComponent__NeedsToThrust_Clear ====
// decompiled by BatchDecomp @ 007d5630 name=SpacecraftComponent_NeedsToThrust_Clear conv=__thiscall body=7

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftComponent__NeedsToThrust_Clear(void)const  */

void __thiscall SpacecraftComponent__NeedsToThrust_Clear(SpacecraftComponent *this)

{
  *(undefined2 *)((int)&(this->GetThrusterLayouts_MemoizedValue).Data.Size + 2) = 0;
  return;
}


//==== 007d5640 7d5640_SpacecraftComponent__NeedsToTorque_Clear ====
// decompiled by BatchDecomp @ 007d5640 name=SpacecraftComponent_NeedsToTorque_Clear conv=__thiscall body=7

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftComponent__NeedsToTorque_Clear(void)const  */

void __thiscall SpacecraftComponent__NeedsToTorque_Clear(SpacecraftComponent *this)

{
  *(undefined2 *)&(this->GetThrusterLayouts_MemoizedValue).Data.Size = 0;
  return;
}


//==== 007d5db0 7d5db0_SpacecraftComponent__OnDestroy ====
extern undefined4 FUN_007c7be0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007d5db0 name=OnDestroy conv=__thiscall body=345

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall SpacecraftComponent__OnDestroy(void) */

void __thiscall SpacecraftComponent__OnDestroy(SpacecraftComponent *this)

{
  ReferenceController *this_00;
  bool bVar1;
  int iVar2;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar3;
  ReferenceControllerRegistry *this_01;
  int *piVar4;
  int *local_a4;
  SpacecraftComponent *pSStack_a0;
  undefined4 *puStack_9c;
  undefined8 *puStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined1 local_74;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 local_4c;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 local_24;
  undefined1 local_1c;
  undefined8 local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  piVar4 = (int *)((this->GetArmorCollisionShells_MemoizedValue).Data.Size + 0xc);
  iVar2 = (**(code **)(*piVar4 + 0xc))();
  if (local_c < iVar2) {
    puStack_9c = &local_94;
    puStack_98 = &local_14;
    pSStack_a0 = this;
    do {
      local_a4 = (int *)(**(code **)*piVar4)(&local_c);
      local_14 = /*3f747ae147ae147b*/0.005;
      local_74 = 0;
      local_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_88 = 0;
      local_4c = 0;
      local_84 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      uStack_78 = 0;
      local_24 = 0;
      local_6c = 0;
      uStack_68 = 0;
      uStack_64 = 0;
      uStack_60 = 0;
      local_1c = 1;
      local_5c = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      local_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      local_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      FUN_007c7be0(*local_a4 + 0x3c,local_a4,pSStack_a0,puStack_9c,puStack_98);
      local_c = local_c + 1;
      iVar2 = (**(code **)(*piVar4 + 0xc))();
    } while (local_c < iVar2);
  }
  pDVar3 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
util__OnDestroy((Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *)&local_a4);
  util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&this->ShipPaint,pDVar3);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_a4);
  TriggerDestroyedPopup(this);
  this_00 = *(ReferenceController **)&(this->Targeting).EnemyTargetedEntireCraft;
  piVar4 = (int *)(this->Targeting).EnemyTargetedCompartments.Capacity;
  (this->Targeting).EnemyTargetedCompartments.Capacity = 0;
  *(undefined4 *)&(this->Targeting).EnemyTargetedEntireCraft = 0;
  if (this_00 != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__ReleaseStrongReference(this_00);
    if (bVar1) {
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))(1);
      }
      this_01 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(this_01,piVar4);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 007d6120 7d6120_SpacecraftComponent__OnUnally ====
// decompiled by BatchDecomp @ 007d6120 name=OnUnally conv=__thiscall body=253

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftComponent__OnUnally(void) */

void __thiscall SpacecraftComponent__OnUnally(SpacecraftComponent *this)

{
  bool bVar1;
  TacticalManager *pTVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  ReferenceController *this_00;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_20[19];
  char local_d;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
    if (!bVar1) {
      this->_pad_0x0_0 = 0;
    }
  }
  Body__UnAlly((Body *)this->_pad_0x0_0);
  SpacecraftTargeting__UntargetAllCompartments((SpacecraftTargeting *)&this->CommandIsEffective);
  SpacecraftTargeting__UntargetEntireShip((SpacecraftTargeting *)&this->CommandIsEffective);
  pTVar2 = Component__GetManager((Component *)this);
  piVar3 = (int *)TacticalManager__GetSelectedBodies(pTVar2);
  local_c = 0;
  iVar4 = (**(code **)(*piVar3 + 0xc))();
  if (local_c < iVar4) {
    do {
      piVar5 = (int *)(**(code **)*piVar3)(&local_c);
      if ((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) {
        bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]);
        if (!bVar1) {
          *piVar5 = 0;
        }
      }
      if (*(int *)(*piVar5 + 0x1e0) != 0) {
        local_d = '\x01';
        goto LAB_007d61d1;
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(*piVar3 + 0xc))();
    } while (local_c < iVar4);
  }
  local_d = '\0';
LAB_007d61d1:
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_20);
  if (local_d != '\0') {
    iVar4 = this->_pad_0x0_0;
    this_00 = (ReferenceController *)this->_pad_0x0_0;
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_00);
    }
    pTVar2 = Component__GetManager((Component *)this);
    TacticalManager__DeselectBody(pTVar2,iVar4,this_00);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 007d6530 7d6530_SpacecraftComponent__PassOffCompartmentsToSplit ====
// decompiled by BatchDecomp @ 007d6530 name=PassOffCompartmentsToSplit conv=__thiscall body=137

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: void __thiscall SpacecraftComponent__PassOffCompartmentsToSplit(class
   util::WeakPtr<class SpacecraftComponent>,class util::Darray<class util::SharedPtr<struct
   ModuleCompartment> > const &,class util::Darray<class util::SharedPtr<struct ModuleCompartment> >
   const &) */

void __thiscall
SpacecraftComponent__PassOffCompartmentsToSplit(SpacecraftComponent *this,int param_2,ReferenceController *param_3,
          Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *param_4,
          Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *param_5)

{
  bool bVar1;
  
  if ((param_3 != (ReferenceController *)0x0) &&
     (bVar1 = util__ReferenceController__IsDataStillValid(param_3), !bVar1)) {
    param_2 = 0;
  }
  util__Darray_class_util__SharedPtr_struct_ModuleCompartment_____operator__o2
            ((Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *)
             (*(int *)(param_2 + 0x118) + 0xc),param_5);
  util__Darray_class_util__SharedPtr_struct_ModuleCompartment_____operator__o2
            ((Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *)
             ((this->GetArmorCollisionShells_MemoizedValue).Data.Size + 0xc),param_4);
  if ((param_3 != (ReferenceController *)0x0) &&
     (bVar1 = util__ReferenceController__IsDataStillValid(param_3), !bVar1)) {
    param_2 = 0;
  }
  *(undefined1 *)(param_2 + 0x1fd) = 1;
  *(undefined1 *)((int)&(this->Targeting).EnemyTargetedCompartments.Size + 1) = 1;
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  return;
}


//==== 007d65c0 7d65c0_SpacecraftComponent__PostTick ====
// decompiled by BatchDecomp @ 007d65c0 name=PostTick conv=__thiscall body=1372

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall SpacecraftComponent__PostTick(double) */

void __thiscall SpacecraftComponent__PostTick(SpacecraftComponent *this,double param_1)

{
  CraftBlueprint *pCVar1;
  Body *pBVar2;
  Faction *pFVar3;
  CraftInstance *pCVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined4 *puVar9;
  TacticalManager *pTVar10;
  Faction *pFVar11;
  int iVar12;
  ReferenceController *this_00;
  int *piVar13;
  CapitalShipComponent *pCVar14;
  ReferenceController *pRVar15;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  piVar13 = (int *)((this->GetArmorCollisionShells_MemoizedValue).Data.Size + 0xc);
  iVar8 = (**(code **)(*piVar13 + 0xc))();
  if (local_c < iVar8) {
    do {
      puVar9 = (undefined4 *)(**(code **)*piVar13)(&local_c);
      ModuleCompartment__RunRadiatorCooling((ModuleCompartment *)*puVar9,param_1);
      local_c = local_c + 1;
      iVar8 = (**(code **)(*piVar13 + 0xc))();
    } while (local_c < iVar8);
  }
  piVar13 = (int *)((this->GetArmorCollisionShells_MemoizedValue).Data.Size + 0xc);
  local_c = 0;
  iVar8 = (**(code **)(*piVar13 + 0xc))();
  if (local_c < iVar8) {
    do {
      puVar9 = (undefined4 *)(**(code **)*piVar13)(&local_c);
      (**(code **)(*(int *)*puVar9 + 0x44))(param_1);
      local_c = local_c + 1;
      iVar8 = (**(code **)(*piVar13 + 0xc))();
    } while (local_c < iVar8);
  }
  if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
    bVar6 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
    if (!bVar6) {
      this->_pad_0x0_0 = 0;
    }
  }
  if (*(int *)(this->_pad_0x0_0 + 0x1e0) != 0) {
    pCVar1 = *(CraftBlueprint **)((this->GetArmorCollisionShells_MemoizedValue).Data.Size + 8);
    CraftBlueprint__CanMove_Memoize(pCVar1);
    if (*(char *)((int)&(pCVar1->GetMainEngineModulePlacers_MemoizedValue).Data._pad_0x0_0 + 1) ==
        '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if (((char)(pCVar1->GetMainEngineModulePlacers_MemoizedValue).Data._pad_0x0_0 != '\0') &&
       (*(char *)&(this->Craft).Pointer != '\0')) {
      ExpendReactionMass(this,param_1);
    }
  }
  bVar6 = CraftInstance__HasCompartmentsLeft((CraftInstance *)(this->GetArmorCollisionShells_MemoizedValue).Data.Size);
  if (!bVar6) {
    if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
      bVar6 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
      if (!bVar6) {
        this->_pad_0x0_0 = 0;
      }
    }
    pBVar2 = (Body *)this->_pad_0x0_0;
    Body__GetCapitalShipComponent_Memoize(pBVar2);
    if ((pBVar2->GetCapitalShipComponent_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if (((pBVar2->GetCapitalShipComponent_MemoizedValue).Data.Pointer != (CapitalShipComponent *)0x0
        ) && (pRVar15 = (pBVar2->GetCapitalShipComponent_MemoizedValue).Data.Controller,
             pRVar15 != (ReferenceController *)0x0)) {
      bVar6 = util__ReferenceController__IsDataStillValid(pRVar15);
      if (bVar6) {
        if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
          bVar6 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
          if (!bVar6) {
            this->_pad_0x0_0 = 0;
          }
        }
        pBVar2 = (Body *)this->_pad_0x0_0;
        Body__GetCapitalShipComponent_Memoize(pBVar2);
        if ((pBVar2->GetCapitalShipComponent_MemoizedValue).IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        pRVar15 = (pBVar2->GetCapitalShipComponent_MemoizedValue).Data.Controller;
        pCVar14 = (pBVar2->GetCapitalShipComponent_MemoizedValue).Data.Pointer;
        if (pRVar15 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar15);
        }
        if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
          bVar6 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
          if (!bVar6) {
            this->_pad_0x0_0 = 0;
          }
        }
        Body__RemoveComponent((Body *)this->_pad_0x0_0,pCVar14,pRVar15);
      }
    }
  }
  if (0 < (int)(this->Craft).Controller) {
    TriggerArmorHitPopup(this);
  }
  TickArmor(this,param_1,false);
  SpacecraftTargeting__PostTick((SpacecraftTargeting *)&this->CommandIsEffective,param_1);
  HandleCompartmentsPendingKill(this);
  if (*(char *)((int)&(this->Targeting).EnemyTargetedCompartments._pad_0x0_0 + 1) != '\0') {
    if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
      bVar6 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
      if (!bVar6) {
        this->_pad_0x0_0 = 0;
      }
    }
    pFVar3 = *(Faction **)(this->_pad_0x0_0 + 0x1e0);
    pTVar10 = Component__GetManager((Component *)this);
    pFVar11 = TacticalManager__GetPlayerAlliance(pTVar10);
    if ((pFVar3 == pFVar11) ||
       (*(char *)((int)&(this->Targeting).EnemyTargetedCompartments._pad_0x0_0 + 2) != '\0'))
    goto LAB_007d69c8;
    pCVar1 = *(CraftBlueprint **)((this->GetArmorCollisionShells_MemoizedValue).Data.Size + 8);
    CraftBlueprint__IsAWarship_Memoize(pCVar1);
    if (*(char *)((int)&(pCVar1->GetMainEngineModulePlacers_MemoizedValue).Data.Data + 3) == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if (*(char *)((int)&(pCVar1->GetMainEngineModulePlacers_MemoizedValue).Data.Data + 2) == '\0')
    goto LAB_007d69c8;
  }
  if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
    bVar6 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
    if (!bVar6) {
      this->_pad_0x0_0 = 0;
    }
  }
  pBVar2 = (Body *)this->_pad_0x0_0;
  Body__GetCapitalShipComponent_Memoize(pBVar2);
  if ((pBVar2->GetCapitalShipComponent_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if (((pBVar2->GetCapitalShipComponent_MemoizedValue).Data.Pointer != (CapitalShipComponent *)0x0)
     && (pRVar15 = (pBVar2->GetCapitalShipComponent_MemoizedValue).Data.Controller,
        pRVar15 != (ReferenceController *)0x0)) {
    bVar6 = util__ReferenceController__IsDataStillValid(pRVar15);
    if (bVar6) {
      pTVar10 = Component__GetManager((Component *)this);
      TacticalManager__GetStrategicGame_Memoize(pTVar10);
      if (*(char *)&(pTVar10->Effects).Controller == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      bVar6 = StrategicManager__DoesLevelRequireEnemyDisabling((StrategicManager *)(pTVar10->Effects).Pointer);
      if (!bVar6) {
        if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
          bVar6 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
          if (!bVar6) {
            this->_pad_0x0_0 = 0;
          }
        }
        Body__UnAlly((Body *)this->_pad_0x0_0);
        if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
          bVar6 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
          if (!bVar6) {
            this->_pad_0x0_0 = 0;
          }
        }
        pBVar2 = (Body *)this->_pad_0x0_0;
        Body__GetControllableComponent_Memoize(pBVar2);
        if ((pBVar2->GetControllableComponent_MemoizedValue).IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        pRVar15 = (pBVar2->GetControllableComponent_MemoizedValue).Data.Controller;
        if (pRVar15 != (ReferenceController *)0x0) {
          bVar6 = util__ReferenceController__IsDataStillValid(pRVar15);
          if (!bVar6) {
            (pBVar2->GetControllableComponent_MemoizedValue).Data.Pointer =
                 (ControllableComponent *)0x0;
          }
        }
        ControllableComponent__CheckUnally((pBVar2->GetControllableComponent_MemoizedValue).Data.Pointer);
      }
    }
  }
LAB_007d69c8:
  pRVar15 = (ReferenceController *)(this->GetArmorCollisionShells_MemoizedValue).Data.Capacity;
  iVar8 = (this->GetArmorCollisionShells_MemoizedValue).Data.Size;
  if (pRVar15 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar15);
    bVar6 = util__ReferenceController__IsDataStillValid(pRVar15);
    if (!bVar6) {
      iVar8 = 0;
    }
  }
  bVar6 = ArmorMatrix__IsSingleRing(*(ArmorMatrix **)(iVar8 + 0x1c));
  if (bVar6) {
    this_00 = (ReferenceController *)(this->GetArmorCollisionShells_MemoizedValue).Data.Capacity;
    iVar8 = (this->GetArmorCollisionShells_MemoizedValue).Data.Size;
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_00);
      bVar6 = util__ReferenceController__IsDataStillValid(this_00);
      if (!bVar6) {
        iVar8 = 0;
      }
    }
    local_c = 0;
    iVar12 = (**(code **)(*(int *)(iVar8 + 0xc) + 0xc))();
    if (local_c < iVar12) {
      do {
        piVar13 = (int *)(*(code *)**(undefined4 **)(iVar8 + 0xc))(&local_c);
        cVar7 = (**(code **)(**(int **)(*piVar13 + 0x38) + 0x78))();
        if (cVar7 == '\0') {
          bVar6 = true;
          goto LAB_007d6a7b;
        }
        local_c = local_c + 1;
        iVar12 = (**(code **)(*(int *)(iVar8 + 0xc) + 0xc))();
      } while (local_c < iVar12);
    }
    bVar5 = true;
    bVar6 = true;
  }
  else {
    bVar6 = false;
    this_00 = pRVar15;
LAB_007d6a7b:
    bVar5 = false;
  }
  if ((this_00 != (ReferenceController *)0x0) && (bVar6)) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  if (pRVar15 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar15);
  }
  if (bVar5) {
    (**(code **)(*(int *)this + 0x28))();
  }
  if (((char)(this->Targeting).EnemyTargetedCompartments.Size != '\0') ||
     (*(char *)((int)&(this->Targeting).EnemyTargetedCompartments.Size + 1) != '\0')) {
    pCVar4 = (CraftInstance *)(this->GetArmorCollisionShells_MemoizedValue).Data.Size;
    if (*(char *)((int)&(this->Targeting).EnemyTargetedCompartments.Size + 1) == '\0') {
      CraftInstance__DememoizeAllExceptShape(pCVar4);
    }
    else {
      (**(code **)*(int *)pCVar4)();
    }
    ManageSplitting(this);
    pCVar4 = (CraftInstance *)(this->GetArmorCollisionShells_MemoizedValue).Data.Size;
    if (*(char *)((int)&(this->Targeting).EnemyTargetedCompartments.Size + 1) == '\0') {
      CraftInstance__DememoizeAllExceptShape(pCVar4);
    }
    else {
      (**(code **)*(int *)pCVar4)();
    }
    *(undefined1 *)&(this->Targeting).EnemyTargetedCompartments.Size = 0;
  }
  (**(code **)(*(int *)this + 0x74))();
  ManageStatePopups(this);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 007d6b20 7d6b20_SpacecraftComponent__PreTick ====
// decompiled by BatchDecomp @ 007d6b20 name=PreTick conv=__thiscall body=872

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall SpacecraftComponent__PreTick(double) */

void __thiscall SpacecraftComponent__PreTick(SpacecraftComponent *this,double param_1)

{
  Maybe_L_util__Darray_L_util__WeakPtr_L_ModuleCompartment_G___G___G_ *pMVar1;
  CraftInstance *this_00;
  CraftBlueprint *this_01;
  Body *this_02;
  Body *this_03;
  Quaternion_L_double_G_ QVar2;
  Vec3_L_double_G_ VVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  Vec3_L_double_G_ *pVVar11;
  Quaternion_L_double_G_ *pQVar12;
  Quaternion_L_double_G_ local_68;
  Vec3_L_double_G_ local_48;
  Darray_L_struct_ThrusterLayout_G_ local_30[16];
  Darray_L_struct_ThrusterLayout_G_ local_20[16];
  undefined1 local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  this_00 = (CraftInstance *)(this->GetArmorCollisionShells_MemoizedValue).Data.Size;
  CraftInstance__GetCommandModules_Memoize(this_00);
  pMVar1 = &this_00->GetCommandModules_MemoizedValue;
  if ((this_00->GetCommandModules_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_c = 0;
  iVar7 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
  if (local_c < iVar7) {
    do {
      piVar8 = (int *)(**(code **)*(int *)&pMVar1->Data)(&local_c);
      if (((ReferenceController *)piVar8[1] != (ReferenceController *)0x0) &&
         (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar8[1]),
         !bVar4)) {
        *piVar8 = 0;
      }
      if (*(char *)(*piVar8 + 0x68) == '\0') {
        if (((ReferenceController *)piVar8[1] != (ReferenceController *)0x0) &&
           (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar8[1]),
           !bVar4)) {
          *piVar8 = 0;
        }
        cVar5 = (**(code **)(*(int *)*piVar8 + 0x74))();
        if (cVar5 == '\0') {
          uVar6 = 1;
          goto LAB_007d6be2;
        }
      }
      local_c = local_c + 1;
      iVar7 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
    } while (local_c < iVar7);
  }
  uVar6 = 0;
LAB_007d6be2:
  piVar8 = (int *)((this->GetArmorCollisionShells_MemoizedValue).Data.Size + 0xc);
  *(undefined1 *)&(this->Craft).Pointer = uVar6;
  *(undefined8 *)&(this->GetCompartmentCollisionShells_MemoizedValue).Data.Capacity = 0;
  local_c = 0;
  iVar7 = (**(code **)(*piVar8 + 0xc))();
  if (local_c < iVar7) {
    do {
      piVar9 = (int *)(**(code **)*piVar8)(&local_c);
      *(undefined1 *)(*piVar9 + 0x68) = 0;
      local_c = local_c + 1;
      iVar7 = (**(code **)(*piVar8 + 0xc))();
    } while (local_c < iVar7);
  }
  piVar8 = (int *)((this->GetArmorCollisionShells_MemoizedValue).Data.Size + 0xc);
  local_c = 0;
  iVar7 = (**(code **)(*piVar8 + 0xc))();
  if (local_c < iVar7) {
    do {
      puVar10 = (undefined4 *)(**(code **)*piVar8)(&local_c);
      (**(code **)(*(int *)*puVar10 + 0x3c))(param_1);
      local_c = local_c + 1;
      iVar7 = (**(code **)(*piVar8 + 0xc))();
    } while (local_c < iVar7);
  }
  if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
     (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
     !bVar4)) {
    this->_pad_0x0_0 = 0;
  }
  if (*(int *)(this->_pad_0x0_0 + 0x1e0) != 0) {
    this_01 = *(CraftBlueprint **)((this->GetArmorCollisionShells_MemoizedValue).Data.Size + 8);
    CraftBlueprint__CanMove_Memoize(this_01);
    if (*(char *)((int)&(this_01->GetMainEngineModulePlacers_MemoizedValue).Data._pad_0x0_0 + 1) ==
        '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if (((char)(this_01->GetMainEngineModulePlacers_MemoizedValue).Data._pad_0x0_0 != '\0') &&
       (*(char *)&(this->Craft).Pointer != '\0')) {
      OrientGimballedThrusters(this,param_1);
      if (*(char *)&(this->GetThrusterLayouts_MemoizedValue).Data.Data == '\0') {
        iVar7 = (this->SpacecraftComponentMemoizationHandlerInstance).ResetFunctions.Size;
        local_c = iVar7 + 1;
        util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)
                   &this->SpacecraftComponentMemoizationHandlerInstance,&local_c);
        bVar4 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                           &this->SpacecraftComponentMemoizationHandlerInstance,iVar7);
        if (bVar4) {
          (this->SpacecraftComponentMemoizationHandlerInstance).ResetFunctions.Data
          [(this->SpacecraftComponentMemoizationHandlerInstance).ResetFunctions.Size + -1] =
               CDE_PMF(pmf_1fb4a0e4, SpacecraftComponent_GetThrustersThatNeedToFire_Clear);
        }
        if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
           (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0), !bVar4)) {
          this->_pad_0x0_0 = 0;
        }
        this_02 = (Body *)this->_pad_0x0_0;
        if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
           (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0), !bVar4)) {
          this->_pad_0x0_0 = 0;
        }
        this_03 = (Body *)this->_pad_0x0_0;
        pVVar11 = Body__GetAngularVelocity_radians__s(this_02,&local_48);
        pQVar12 = Body__GetOrientation(this_03,&local_68);
        ((slice_view *)&QVar2.X)->_4_4_ = *(undefined4 *)&pQVar12->X;
        ((slice_view *)&QVar2.X)->_0_4_ = local_30;
        ((slice_view *)&QVar2.Y)->_0_4_ = *(undefined4 *)((int)&pQVar12->X + 4);
        ((slice_view *)&QVar2.Y)->_4_4_ = *(undefined4 *)&pQVar12->Y;
        ((slice_view *)&QVar2.Z)->_0_4_ = *(undefined4 *)((int)&pQVar12->Y + 4);
        ((slice_view *)&QVar2.Z)->_4_4_ = *(undefined4 *)&pQVar12->Z;
        ((slice_view *)&QVar2.W)->_0_4_ = *(undefined4 *)((int)&pQVar12->Z + 4);
        ((slice_view *)&QVar2.W)->_4_4_ = *(undefined4 *)&pQVar12->W;
        ((slice_view *)&VVar3.X)->_4_4_ = *(undefined4 *)&pVVar11->X;
        ((slice_view *)&VVar3.X)->_0_4_ = *(undefined4 *)((int)&pQVar12->W + 4);
        ((slice_view *)&VVar3.Y)->_0_4_ = *(undefined4 *)((int)&pVVar11->X + 4);
        ((slice_view *)&VVar3.Y)->_4_4_ = *(undefined4 *)&pVVar11->Y;
        ((slice_view *)&VVar3.Z)->_0_4_ = *(undefined4 *)((int)&pVVar11->Y + 4);
        ((slice_view *)&VVar3.Z)->_4_4_ = *(undefined4 *)&pVVar11->Z;
        GetThrustersThatNeedToFire(this,QVar2,VVar3);
        util__Darray_struct_ThrusterLayout___Darray_struct_ThrusterLayout(local_20,local_30);
        local_10 = 1;
        util__Darray_struct_ThrusterLayout___operator
                  ((Darray_L_struct_ThrusterLayout_G_ *)
                   ((int)&(this->GetReactionMass_kg_MemoizedValue).Data + 4),local_20);
        *(undefined1 *)&(this->GetThrusterLayouts_MemoizedValue).Data.Data = local_10;
        util__Darray_struct_ThrusterLayout____Darray_struct_ThrusterLayout(local_20);
        util__Darray_struct_ThrusterLayout____Darray_struct_ThrusterLayout(local_30);
        if (*(char *)&(this->GetThrusterLayouts_MemoizedValue).Data.Data == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
      }
      local_c = 0;
      iVar7 = (**(code **)(*(int *)((int)&(this->GetReactionMass_kg_MemoizedValue).Data + 4) + 0xc))
                        ();
      if (local_c < iVar7) {
        do {
          piVar8 = (int *)(*(code *)**(undefined4 **)
                                      ((int)&(this->GetReactionMass_kg_MemoizedValue).Data + 4))
                                    (&local_c);
          if (((ReferenceController *)piVar8[1] != (ReferenceController *)0x0) &&
             (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar8[1]),
             !bVar4)) {
            *piVar8 = 0;
          }
          *(undefined1 *)(*piVar8 + 0x108) = 1;
          local_c = local_c + 1;
          iVar7 = (**(code **)(*(int *)((int)&(this->GetReactionMass_kg_MemoizedValue).Data + 4) +
                              0xc))();
        } while (local_c < iVar7);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 007d8a40 7d8a40_SpacecraftComponent__RequestPartialDememoize ====
// decompiled by BatchDecomp @ 007d8a40 name=RequestPartialDememoize conv=__thiscall body=8

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftComponent__RequestPartialDememoize(void) */

void __thiscall SpacecraftComponent__RequestPartialDememoize(SpacecraftComponent *this)

{
  *(undefined1 *)&(this->Targeting).EnemyTargetedCompartments.Size = 1;
  return;
}


//==== 007d8a50 7d8a50_SpacecraftComponent__ResetArmorTextureCooling ====
// decompiled by BatchDecomp @ 007d8a50 name=ResetArmorTextureCooling conv=__thiscall body=192

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: void __thiscall SpacecraftComponent__ResetArmorTextureCooling(void) */

void __thiscall SpacecraftComponent__ResetArmorTextureCooling(SpacecraftComponent *this)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar1 = (**(code **)(*(int *)(*(int *)((this->GetArmorCollisionShells_MemoizedValue).Data.Size + 8
                                        ) + 0x70) + 0xc))();
  if (0 < iVar1) {
    local_c = 0;
    iVar1 = *(int *)((this->GetArmorCollisionShells_MemoizedValue).Data.Size + 0x1c);
    piVar3 = (int *)(iVar1 + 0x1c);
    iVar1 = (**(code **)(*(int *)(iVar1 + 0x1c) + 0xc))();
    if (local_c < iVar1) {
      do {
        puVar2 = (undefined4 *)(**(code **)*piVar3)(&local_c);
        ArmorTextureHandler__ResetCooledFlag((ArmorTextureHandler *)*puVar2);
        local_c = local_c + 1;
        iVar1 = (**(code **)(*piVar3 + 0xc))();
      } while (local_c < iVar1);
    }
  }
  piVar3 = (int *)((this->GetArmorCollisionShells_MemoizedValue).Data.Size + 0xc);
  local_c = 0;
  iVar1 = (**(code **)(*piVar3 + 0xc))();
  if (local_c < iVar1) {
    do {
      puVar2 = (undefined4 *)(**(code **)*piVar3)(&local_c);
      ModuleCompartment__ResetCooling((ModuleCompartment *)*puVar2);
      local_c = local_c + 1;
      iVar1 = (**(code **)(*piVar3 + 0xc))();
    } while (local_c < iVar1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 007d8b10 7d8b10_SpacecraftComponent__RunCollision ====
// decompiled by BatchDecomp @ 007d8b10 name=RunCollision conv=__thiscall body=51

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall SpacecraftComponent__RunCollision(double) */

void __thiscall SpacecraftComponent__RunCollision(SpacecraftComponent *this,double param_1)

{
  int iVar1;
  ReferenceController *this_00;
  
  iVar1 = this->_pad_0x0_0;
  this_00 = (ReferenceController *)this->_pad_0x0_0;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
  }
  Collision__FindCollision(iVar1,this_00,param_1);
  return;
}


//==== 007d8b50 7d8b50_SpacecraftComponent__RunWeapons ====
// decompiled by BatchDecomp @ 007d8b50 name=RunWeapons conv=__thiscall body=555

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: void __thiscall SpacecraftComponent__RunWeapons(double) */

void __thiscall SpacecraftComponent__RunWeapons(SpacecraftComponent *this,double param_1)

{
  CraftInstance *pCVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  uVar4 = __security_cookie ^ (uint)&stack0xfffffffc;
  pCVar1 = (CraftInstance *)(this->GetArmorCollisionShells_MemoizedValue).Data.Size;
  CraftInstance__GetWeaponModules_Memoize(pCVar1);
  if ((pCVar1->GetWeaponModules_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  iVar5 = (**(code **)((pCVar1->GetWeaponModules_MemoizedValue).Data._pad_0x0_0 + 0xc))();
  iVar7 = 0;
  if (0 < iVar5) {
    do {
      pCVar1 = (CraftInstance *)(this->GetArmorCollisionShells_MemoizedValue).Data.Size;
      CraftInstance__GetWeaponModules_Memoize(pCVar1);
      if ((pCVar1->GetWeaponModules_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      piVar6 = (int *)(**(code **)(pCVar1->GetWeaponModules_MemoizedValue).Data._pad_0x0_0)();
      if ((ReferenceController *)piVar6[1] != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar6[1]);
        if (!bVar2) {
          *piVar6 = 0;
        }
      }
      bVar2 = WeaponCompartment__IsCurrentFrameTargetAttackable((WeaponCompartment *)*piVar6);
      if (bVar2) {
        if ((ReferenceController *)piVar6[1] != (ReferenceController *)0x0) {
          bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar6[1]);
          if (!bVar2) {
            *piVar6 = 0;
          }
        }
        cVar3 = (**(code **)(*(int *)*piVar6 + 0x14))();
        if (cVar3 == '\0') {
          if ((ReferenceController *)piVar6[1] != (ReferenceController *)0x0) {
            bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar6[1]);
            if (!bVar2) {
              *piVar6 = 0;
            }
          }
          cVar3 = (**(code **)(**(int **)(*piVar6 + 0x38) + 0x1d8))();
          if (cVar3 != '\0') {
            if ((ReferenceController *)piVar6[1] != (ReferenceController *)0x0) {
              bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar6[1]);
              if (!bVar2) {
                *piVar6 = 0;
              }
            }
            cVar3 = (**(code **)(*(int *)*piVar6 + 0xa8))();
            if (cVar3 != '\0') {
              if ((ReferenceController *)piVar6[1] != (ReferenceController *)0x0) {
                bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar6[1]);
                if (!bVar2) {
                  *piVar6 = 0;
                }
              }
              cVar3 = (**(code **)(*(int *)*piVar6 + 0x74))();
              if (cVar3 == '\0') {
                if ((ReferenceController *)piVar6[1] != (ReferenceController *)0x0) {
                  bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar6[1]);
                  if (!bVar2) {
                    *piVar6 = 0;
                  }
                }
                bVar2 = WeaponCompartment__IsReloadedAndCharged((WeaponCompartment *)*piVar6);
                if (bVar2) {
                  if ((ReferenceController *)piVar6[1] != (ReferenceController *)0x0) {
                    bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar6[1]);
                    if (!bVar2) {
                      *piVar6 = 0;
                    }
                  }
                  bVar2 = WeaponCompartment__HasAmmo((WeaponCompartment *)*piVar6);
                  if (bVar2) {
                    if ((ReferenceController *)piVar6[1] != (ReferenceController *)0x0) {
                      bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar6[1]);
                      if (!bVar2) {
                        *piVar6 = 0;
                      }
                    }
                    bVar2 = WeaponCompartment__CanLaunchAndRespectLaunchCap((WeaponCompartment *)*piVar6);
                    if (bVar2) {
                      if ((ReferenceController *)piVar6[1] != (ReferenceController *)0x0) {
                        bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar6[1]);
                        if (!bVar2) {
                          *piVar6 = 0;
                        }
                      }
                      WeaponCompartment__FireWeaponAtTarget((WeaponCompartment *)*piVar6,param_1);
                      *(undefined1 *)&(this->Targeting).EnemyTargetedCompartments.Size = 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar5);
  }
  __security_check_cookie(uVar4 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 007d98e0 7d98e0_SpacecraftComponent__TickArmor ====
// decompiled by BatchDecomp @ 007d98e0 name=TickArmor conv=__thiscall body=169

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: void __thiscall SpacecraftComponent__TickArmor(double,bool) */

void __thiscall
SpacecraftComponent__TickArmor(SpacecraftComponent *this,double param_1,bool param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  ResetArmorTextureCooling(this);
  iVar1 = (**(code **)(*(int *)(*(int *)((this->GetArmorCollisionShells_MemoizedValue).Data.Size + 8
                                        ) + 0x70) + 0xc))();
  if (0 < iVar1) {
    ArmorMatrix__Tick(*(ArmorMatrix **)
                       ((this->GetArmorCollisionShells_MemoizedValue).Data.Size + 0x1c),param_1,
                      param_2);
  }
  piVar3 = (int *)((this->GetArmorCollisionShells_MemoizedValue).Data.Size + 0xc);
  local_c = 0;
  iVar1 = (**(code **)(*piVar3 + 0xc))();
  if (local_c < iVar1) {
    do {
      puVar2 = (undefined4 *)(**(code **)*piVar3)(&local_c);
      ModuleCompartment__TickTextures((ModuleCompartment *)*puVar2,param_1,param_2);
      local_c = local_c + 1;
      iVar1 = (**(code **)(*piVar3 + 0xc))();
    } while (local_c < iVar1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 007da170 7da170_SpacecraftComponent__TriggerCompartmentDestroyedPopup ====
// decompiled by BatchDecomp @ 007da170 name=TriggerCompartmentDestroyedPopup conv=__thiscall body=2075

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftComponent__TriggerCompartmentDestroyedPopup(class
   util::WeakPtr<struct ModuleCompartment> &) */

void __thiscall
SpacecraftComponent__TriggerCompartmentDestroyedPopup(SpacecraftComponent *this,WeakPtr_L_struct_ModuleCompartment_G_ *param_1)

{
  Faction *pFVar1;
  Body *pBVar2;
  WeakPtr_L_struct_ModuleCompartment_G_ *pWVar3;
  char cVar4;
  bool bVar5;
  char cVar6;
  Faction *pFVar7;
  LocStr *pLVar8;
  Str_L_char_G_ *pSVar9;
  uint uVar10;
  char *pcVar11;
  TacticalManager *pTVar12;
  int *piVar13;
  uint uVar14;
  char *pcVar15;
  ReferenceController *pRVar16;
  code *pcVar17;
  char *pcVar18;
  SpacecraftComponent *pSVar19;
  ReferenceController *this_00;
  int iVar20;
  LocStr local_f8[24];
  LocStr local_e0[24];
  LocStr local_c8[12];
  Str_L_char_G_ local_bc;
  void *local_b0[3];
  void *local_a4;
  void *local_98[3];
  Str_L_char_G_ local_8c;
  Str_L_char_G_ local_80;
  Str_L_char_G_ local_74;
  Str_L_char_G_ local_68;
  Str_L_char_G_ local_5c;
  Str_L_char_G_ local_50;
  Str_L_char_G_ local_44;
  Str_L_char_G_ local_38;
  char *local_2c;
  WeakPtr_L_struct_ModuleCompartment_G_ *local_28;
  char local_22;
  char local_21;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_50.Length = 0;
  local_28 = param_1;
  if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
     (bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
     !bVar5)) {
    this->_pad_0x0_0 = 0;
  }
  pFVar1 = *(Faction **)(this->_pad_0x0_0 + 0x1e0);
  if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
     (bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
     !bVar5)) {
    this->_pad_0x0_0 = 0;
  }
  pFVar7 = TacticalManager__GetPlayerAlliance(*(TacticalManager **)(this->_pad_0x0_0 + 0x1dc));
  local_21 = pFVar1 == pFVar7;
  if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
     (bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
     !bVar5)) {
    this->_pad_0x0_0 = 0;
  }
  pFVar1 = *(Faction **)(this->_pad_0x0_0 + 0x1e0);
  if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
     (bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
     !bVar5)) {
    this->_pad_0x0_0 = 0;
  }
  pFVar7 = TacticalManager__GetEnemyAlliance(*(TacticalManager **)(this->_pad_0x0_0 + 0x1dc));
  local_22 = pFVar1 == pFVar7;
  if ((*(ReferenceController **)(param_1 + 4) != (ReferenceController *)0x0) &&
     (bVar5 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(param_1 + 4)),
     !bVar5)) {
    *(undefined4 *)param_1 = 0;
  }
  cVar6 = (**(code **)(**(int **)(*(int *)param_1 + 0x38) + 0x120))(1);
  cVar4 = local_21;
  if (((local_21 != '\0') || (local_22 != '\0')) && (cVar6 != '\0')) {
    if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
       (bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
       !bVar5)) {
      this->_pad_0x0_0 = 0;
    }
    pBVar2 = (Body *)this->_pad_0x0_0;
    Body__IsAlive_Memoize(pBVar2);
    if ((pBVar2->IsAlive_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if ((pBVar2->IsAlive_MemoizedValue).Data != false) {
      local_20.Length = 0;
      local_20.Data = (char *)0x0;
      local_20.Capacity = 0;
      if (cVar4 == '\0') {
        util__Str_char___Str_char__o5(&local_68,"Enemy");
        local_38.Data = (char *)0x0;
        local_38.Capacity = 0;
        local_38.Length = 0;
        pLVar8 = (LocStr *)util__LocStr__LocStr((LocStr *)local_b0,&local_68,&local_38);
        pSVar9 = util__LocStr__operator__o3(pLVar8);
        if (pSVar9->Capacity < 1) {
          pcVar18 = "";
        }
        else {
          pcVar18 = pSVar9->Data;
        }
        uVar14 = 0x38;
      }
      else {
        util__Str_char___Str_char__o5(&local_80,"Allied");
        local_44.Data = (char *)0x0;
        local_44.Capacity = 0;
        local_44.Length = 0;
        pLVar8 = (LocStr *)util__LocStr__LocStr(local_c8,&local_80,&local_44);
        pSVar9 = util__LocStr__operator__o3(pLVar8);
        if (pSVar9->Capacity < 1) {
          pcVar18 = "";
          uVar14 = 7;
        }
        else {
          pcVar18 = pSVar9->Data;
          uVar14 = 7;
        }
      }
      util__Str_char___Str_char__o5(&local_5c,"ModuleDestroyed Message");
      if ((*(ReferenceController **)(local_28 + 4) != (ReferenceController *)0x0) &&
         (bVar5 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(local_28 + 4)), !bVar5)) {
        *(int *)local_28 = 0;
      }
      pSVar9 = Module__GetQuickName(*(Module **)(*(int *)local_28 + 0x38),&local_74);
      if (pSVar9->Capacity < 1) {
        local_2c = "";
      }
      else {
        local_2c = pSVar9->Data;
      }
      local_50.Data = (char *)0x0;
      local_50.Capacity = 0;
      local_50.Length = 0;
      pLVar8 = (LocStr *)util__LocStr__LocStr((LocStr *)local_98,&local_5c,&local_50);
      pSVar9 = util__LocStr__operator__o3(pLVar8);
      if (pSVar9->Capacity < 1) {
        pcVar15 = "";
      }
      else {
        pcVar15 = pSVar9->Data;
      }
      util__Printf(&local_20,pcVar15,pcVar18,local_2c);
      if (local_8c.Data != (char *)0x0) {
        operator_delete__(local_8c.Data);
        local_8c.Data = (char *)0x0;
      }
      if (local_98[0] != (void *)0x0) {
        operator_delete__(local_98[0]);
        local_98[0] = (void *)0x0;
      }
      if (local_50.Data != (char *)0x0) {
        operator_delete__(local_50.Data);
        local_50.Data = (char *)0x0;
      }
      if (local_74.Data != (char *)0x0) {
        operator_delete__(local_74.Data);
        local_74.Data = (char *)0x0;
      }
      if (local_5c.Data != (char *)0x0) {
        operator_delete__(local_5c.Data);
        local_5c.Data = (char *)0x0;
      }
      if ((uVar14 & 0x20) != 0) {
        uVar14 = uVar14 & 0xffffffdf;
        util__LocStr___LocStr((LocStr *)local_b0);
      }
      if (((uVar14 & 0x10) != 0) && (uVar14 = uVar14 & 0xffffffef, local_38.Data != (char *)0x0)) {
        operator_delete__(local_38.Data);
        local_38.Data = (char *)0x0;
      }
      if (((uVar14 & 8) != 0) && (uVar14 = uVar14 & 0xfffffff7, local_68.Data != (char *)0x0)) {
        operator_delete__(local_68.Data);
        local_68.Data = (char *)0x0;
      }
      if ((uVar14 & 4) != 0) {
        uVar14 = uVar14 & 0xfffffffb;
        util__LocStr___LocStr(local_c8);
      }
      if (((uVar14 & 2) != 0) && (uVar14 = uVar14 & 0xfffffffd, local_44.Data != (char *)0x0)) {
        operator_delete__(local_44.Data);
        local_44.Data = (char *)0x0;
      }
      if (((uVar14 & 1) != 0) && (uVar14 = uVar14 & 0xfffffffe, local_80.Data != (char *)0x0)) {
        operator_delete__(local_80.Data);
      }
      local_14.Data = (char *)0x0;
      local_14.Capacity = 0;
      local_14.Length = 0;
      if (local_21 == '\0') {
        util__Str_char___Str_char__o5(&local_74,"Enemy");
        local_38.Data = (char *)0x0;
        local_38.Capacity = 0;
        local_38.Length = 0;
        pLVar8 = (LocStr *)util__LocStr__LocStr(local_e0,&local_74,&local_38);
        pSVar9 = util__LocStr__operator__o3(pLVar8);
        if (pSVar9->Capacity < 1) {
          pcVar18 = "";
        }
        else {
          pcVar18 = pSVar9->Data;
        }
        uVar10 = 0xe00;
      }
      else {
        util__Str_char___Str_char__o5(&local_8c,"Allied");
        local_5c.Data = (char *)0x0;
        local_5c.Capacity = 0;
        local_5c.Length = 0;
        pLVar8 = (LocStr *)util__LocStr__LocStr(local_f8,&local_8c,&local_5c);
        pSVar9 = util__LocStr__operator__o3(pLVar8);
        if (pSVar9->Capacity < 1) {
          pcVar18 = "";
          uVar10 = 0x1c0;
        }
        else {
          pcVar18 = pSVar9->Data;
          uVar10 = 0x1c0;
        }
      }
      local_50.Length = uVar10 | uVar14;
      util__Str_char___Str_char__o5(&local_68,"ModuleDestroyed Tooltip");
      pSVar9 = GetName(this,&local_bc);
      pWVar3 = local_28;
      if (pSVar9->Capacity < 1) {
        local_2c = "";
      }
      else {
        local_2c = pSVar9->Data;
      }
      if ((*(ReferenceController **)(local_28 + 4) != (ReferenceController *)0x0) &&
         (bVar5 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(local_28 + 4)), !bVar5)) {
        *(int *)pWVar3 = 0;
      }
      pSVar9 = Module__GetQuickName(*(Module **)(*(int *)pWVar3 + 0x38),&local_80);
      if (pSVar9->Capacity < 1) {
        pcVar15 = "";
      }
      else {
        pcVar15 = pSVar9->Data;
      }
      local_44.Data = (char *)0x0;
      local_44.Capacity = 0;
      local_44.Length = 0;
      pLVar8 = (LocStr *)util__LocStr__LocStr((LocStr *)local_b0,&local_68,&local_44);
      pSVar9 = util__LocStr__operator__o3(pLVar8);
      if (pSVar9->Capacity < 1) {
        pcVar11 = "";
      }
      else {
        pcVar11 = pSVar9->Data;
      }
      util__Printf(&local_14,pcVar11,pcVar18,pcVar15,local_2c);
      if (local_a4 != (void *)0x0) {
        operator_delete__(local_a4);
        local_a4 = (void *)0x0;
      }
      if (local_b0[0] != (void *)0x0) {
        operator_delete__(local_b0[0]);
        local_b0[0] = (void *)0x0;
      }
      if (local_44.Data != (char *)0x0) {
        operator_delete__(local_44.Data);
        local_44.Data = (char *)0x0;
      }
      if (local_80.Data != (char *)0x0) {
        operator_delete__(local_80.Data);
        local_80.Data = (char *)0x0;
      }
      if (local_bc.Data != (char *)0x0) {
        operator_delete__(local_bc.Data);
        local_bc.Data = (char *)0x0;
      }
      if (local_68.Data != (char *)0x0) {
        operator_delete__(local_68.Data);
        local_68.Data = (char *)0x0;
      }
      pRVar16 = (ReferenceController *)local_50.Length;
      if ((local_50.Length & 0x800U) != 0) {
        pRVar16 = (ReferenceController *)(local_50.Length & 0xfffff7ff);
        util__LocStr___LocStr(local_e0);
      }
      if ((((uint)pRVar16 & 0x400) != 0) &&
         (pRVar16 = (ReferenceController *)((uint)pRVar16 & 0xfffffbff),
         local_38.Data != (char *)0x0)) {
        operator_delete__(local_38.Data);
        local_38.Data = (char *)0x0;
      }
      if ((((uint)pRVar16 & 0x200) != 0) &&
         (pRVar16 = (ReferenceController *)((uint)pRVar16 & 0xfffffdff),
         local_74.Data != (char *)0x0)) {
        operator_delete__(local_74.Data);
        local_74.Data = (char *)0x0;
      }
      if (((uint)pRVar16 & 0x100) != 0) {
        pRVar16 = (ReferenceController *)((uint)pRVar16 & 0xfffffeff);
        util__LocStr___LocStr(local_f8);
      }
      if (((char)pRVar16 < '\0') &&
         (pRVar16 = (ReferenceController *)((uint)pRVar16 & 0xffffff7f),
         local_5c.Data != (char *)0x0)) {
        operator_delete__(local_5c.Data);
        local_5c.Data = (char *)0x0;
      }
      if ((local_8c.Data != (char *)0x0) && (((uint)pRVar16 & 0x40) != 0)) {
        operator_delete__(local_8c.Data);
      }
      iVar20 = *(int *)local_28;
      pRVar16 = *(ReferenceController **)(local_28 + 4);
      if (pRVar16 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar16);
      }
      if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
         (bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0), !bVar5)) {
        this->_pad_0x0_0 = 0;
      }
      pBVar2 = (Body *)this->_pad_0x0_0;
      Body__GetSpacecraftComponent_Memoize(pBVar2);
      pcVar17 = DebugBreak_exref;
      if ((pBVar2->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        pcVar17 = DebugBreak_exref;
        DebugBreak();
      }
      pSVar19 = (pBVar2->GetSpacecraftComponent_MemoizedValue).Data.Pointer;
      this_00 = (pBVar2->GetSpacecraftComponent_MemoizedValue).Data.Controller;
      if (this_00 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(this_00);
      }
      pTVar12 = Component__GetManager((Component *)this);
      piVar13 = (int *)TacticalManager__GetTacticalUI(pTVar12);
      if (((ReferenceController *)piVar13[1] != (ReferenceController *)0x0) &&
         (bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar13[1]),
         !bVar5)) {
        *piVar13 = 0;
      }
      CombatNotifier__Trigger((CombatNotifier *)(*piVar13 + 0x1d4),2,&local_20,&local_14,pSVar19,this_00,iVar20,
                 pRVar16);
      if ((ReferenceController *)local_50.Length != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference((ReferenceController *)local_50.Length);
      }
      if (local_21 != '\0') {
        pTVar12 = Component__GetManager((Component *)this);
        TacticalManager__GetStrategicGame_Memoize(pTVar12);
        if (*(char *)&(pTVar12->Effects).Controller == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          (*pcVar17)();
        }
        StrategicManager__TriggerAlliesLostModuleMessages((StrategicManager *)(pTVar12->Effects).Pointer);
      }
      if (local_22 != '\0') {
        pTVar12 = Component__GetManager((Component *)this);
        TacticalManager__GetStrategicGame_Memoize(pTVar12);
        if (*(char *)&(pTVar12->Effects).Controller == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          (*pcVar17)();
        }
        StrategicManager__TriggerEnemiesLostModuleMessages((StrategicManager *)(pTVar12->Effects).Pointer);
      }
      if (local_14.Data != (char *)0x0) {
        operator_delete__(local_14.Data);
        ((slice_view *)&local_14)->_0_8_ = ((slice_view *)&local_14)->_0_8_ & 0xffffffff00000000;
      }
      if (local_20.Data != (char *)0x0) {
        operator_delete__(local_20.Data);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 007dc1e0 7dc1e0_SpacecraftComponent__WillIntersectWithTargetInTheFuture ====
// decompiled by BatchDecomp @ 007dc1e0 name=WillIntersectWithTargetInTheFuture conv=__thiscall body=273

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall SpacecraftComponent__WillIntersectWithTargetInTheFuture(class
   util::WeakPtr<class Body>)const  */

bool __thiscall
SpacecraftComponent__WillIntersectWithTargetInTheFuture(SpacecraftComponent *this,undefined4 param_2,ReferenceController *param_3)

{
  int iVar1;
  bool bVar2;
  undefined1 uVar3;
  double dVar4;
  ReferenceController *pRVar5;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined8 uStack_44;
  undefined4 uStack_40;
  int local_3c;
  Line3_L_double_G_ local_38;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
    if (!bVar2) {
      this->_pad_0x0_0 = 0;
    }
  }
  Body__GetTrajectoryLine_km((Body *)this->_pad_0x0_0,&local_38);
  if ((this->GetCombatIntersectRadius_km_MemoizedValue).IsValidData == false) {
    iVar1 = (this->SpacecraftComponentMemoizationHandlerInstance).ResetFunctions.Size;
    local_3c = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)
               &this->SpacecraftComponentMemoizationHandlerInstance,&local_3c);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->SpacecraftComponentMemoizationHandlerInstance,iVar1);
    if (bVar2) {
      (this->SpacecraftComponentMemoizationHandlerInstance).ResetFunctions.Data
      [(this->SpacecraftComponentMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_1fb4a0e4, SpacecraftComponent_GetCombatIntersectRadius_km_Clear);
    }
    dVar4 = SpacecraftComponent_GetCombatIntersectRadius_km_MemoizedFunction(this);
    ((slice_view *)&uStack_44)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_44)->_1_3_[0] | (((slice_view *)&uStack_44)->_1_3_[1] << 8) | (((slice_view *)&uStack_44)->_1_3_[2] << 16)) << 8));
    local_4c = *(undefined4 *)&dVar4;
    uStack_48 = *(undefined4 *)((char *)&dVar4 + 4);
    *(undefined4 *)&(this->GetCombatIntersectRadius_km_MemoizedValue).Data = local_4c;
    *(undefined4 *)((int)&(this->GetCombatIntersectRadius_km_MemoizedValue).Data + 4) = uStack_48;
    *(undefined4 *)&(this->GetCombatIntersectRadius_km_MemoizedValue).IsValidData = uStack_44;
    *(undefined4 *)((char *)&(this->GetCombatIntersectRadius_km_MemoizedValue) + 0xc) = uStack_40;
    if ((this->GetCombatIntersectRadius_km_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  dVar4 = (this->GetCombatIntersectRadius_km_MemoizedValue).Data;
  pRVar5 = param_3;
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_3);
  }
  uVar3 = WillIntersectWithTargetInTheFuture
                    (this,param_2,pRVar5,dVar4,((slice_view *)&local_38.A.X)->_0_4_,((slice_view *)&local_38.A.X)->_4_4_,
                     ((slice_view *)&local_38.A.Y)->_0_4_,((slice_view *)&local_38.A.Y)->_4_4_,((slice_view *)&local_38.A.Z)->_0_4_,((slice_view *)&local_38.A.Z)->_4_4_,
                     ((slice_view *)&local_38.B.X)->_0_4_,((slice_view *)&local_38.B.X)->_4_4_,((slice_view *)&local_38.B.Y)->_0_4_,((slice_view *)&local_38.B.Y)->_4_4_,
                     ((slice_view *)&local_38.B.Z)->_0_4_,((slice_view *)&local_38.B.Z)->_4_4_);
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar3;
}


//==== 007dc690 7dc690_SpacecraftComponent__WillIntersectWithTargetsInTheFuture_Clear ====
// decompiled by BatchDecomp @ 007dc690 name=SpacecraftComponent_WillIntersectWithTargetsInTheFuture_Clear conv=__thiscall body=7

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftComponent__WillIntersectWithTargetsInTheFuture_Clear(void)const
    */

void __thiscall
SpacecraftComponent__WillIntersectWithTargetsInTheFuture_Clear(SpacecraftComponent *this)

{
  (this->WillIntersectWithTargetsInTheFuture_MemoizedValue).Data = false;
  (this->WillIntersectWithTargetsInTheFuture_MemoizedValue).IsValidData = false;
  return;
}


//==== 007fa980 7fa980_TacticalManager__DestroySession ====
// decompiled by BatchDecomp @ 007fa980 name=DestroySession conv=__thiscall body=55

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall TacticalManager__DestroySession(void) */

void __thiscall TacticalManager__DestroySession(TacticalManager *this)

{
  ActorHandler *this_00;
  Interface *this_01;
  
  this_00 = (ActorHandler *)
            util__Darray_enum_CrewDepartment__Type___Num((Darray_L_enum_CrewDepartment__Type_G_ *)this);
  ActorHandler__ResolvePendingActors(this_00);
  OnBodiesAddedOrRemoved(this);
  EffectManager__DestroyAll((EffectManager *)(this->EnemyController).Pointer);
  ResetData(this);
  this_01 = Manager__GetInterfacer((Manager *)this);
  Interface__ResetWidgetScreen(this_01);
  return;
}


//==== 007fb030 7fb030_TacticalManager__FilterMostRelevantBodies ====
extern undefined4 FUN_007dd260(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_007f55b0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_007f5760(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007fb030 name=FilterMostRelevantBodies conv=__thiscall body=223

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Darray<class util::WeakPtr<class Body> > __thiscall
   TacticalManager__FilterMostRelevantBodies(class util::Darray<class util::WeakPtr<class Body> >
   const &)const  */

void __thiscall
TacticalManager__FilterMostRelevantBodies(TacticalManager *this,Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_1)

{
  int iVar1;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar2;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *in_stack_00000008;
  undefined4 local_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined1 local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_3c = 0;
  uStack_38 = 0;
  iStack_34 = 0;
  uStack_30 = 0;
  FUN_007dd260(&local_3c);
  local_c = 0;
  local_2c = 0;
  uStack_28 = 0;
  iStack_24 = 0;
  uStack_20 = 0;
  iVar1 = (**(code **)(*(int *)in_stack_00000008 + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_2c,iVar1);
  FUN_007f5760();
  local_c = 0;
  local_1c = 0;
  uStack_18 = 0;
  iStack_14 = 0;
  uStack_10 = 0;
  iVar1 = (**(code **)(*(int *)in_stack_00000008 + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c,iVar1);
  FUN_007f55b0();
  if (iStack_34 < 1) {
    if (iStack_24 < 1) {
      pDVar2 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_1c;
      if (iStack_14 < 1) {
        pDVar2 = in_stack_00000008;
      }
    }
    else {
      pDVar2 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_2c;
    }
  }
  else {
    pDVar2 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_3c;
  }
  util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment((Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)param_1,pDVar2);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_2c);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_3c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 007fc1f0 7fc1f0_TacticalManager__GetAISelectedSpacecraftComponents ====
// decompiled by BatchDecomp @ 007fc1f0 name=GetAISelectedSpacecraftComponents conv=__thiscall body=355

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Darray<class util::WeakPtr<class SpacecraftComponent> > __thiscall
   TacticalManager__GetAISelectedSpacecraftComponents(void)const  */

void __thiscall TacticalManager__GetAISelectedSpacecraftComponents(TacticalManager *this)

{
  ReferenceController *this_00;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *pDVar1;
  TacticalManager *pTVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  Faction *pFVar7;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *in_stack_00000004;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_28[16];
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *local_18;
  Faction *local_14;
  TacticalManager *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_18 = in_stack_00000004;
  local_10 = this;
  piVar4 = (int *)GetSelectedSpacecrafts(this);
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  iVar5 = (**(code **)(*piVar4 + 0xc))();
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent(in_stack_00000004,iVar5);
  local_c = 0;
  iVar5 = (**(code **)(*piVar4 + 0xc))();
  if (local_c < iVar5) {
    do {
      piVar6 = (int *)(**(code **)*piVar4)(&local_c);
      if (((ReferenceController *)piVar6[1] != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar6[1]),
         !bVar3)) {
        *piVar6 = 0;
      }
      iVar5 = *piVar6;
      if ((*(ReferenceController **)(iVar5 + 8) != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar5 + 8)),
         !bVar3)) {
        *(undefined4 *)(iVar5 + 4) = 0;
      }
      pTVar2 = local_10;
      local_14 = *(Faction **)(*(int *)(iVar5 + 4) + 0x1e0);
      TacticalManager_GetStrategicGame_Memoize(local_10);
      if (*(char *)&(pTVar2->Effects).Controller == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      pFVar7 = StrategicManager__GetEnemyAlliance((StrategicManager *)(pTVar2->Effects).Pointer);
      if (local_14 == pFVar7) {
        iVar5 = *(int *)(local_18 + 8);
        local_14 = (Faction *)(iVar5 + 1);
        util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_18,(int *)&local_14);
        pDVar1 = local_18;
        bVar3 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_18,iVar5);
        if (bVar3) {
          iVar5 = *(int *)(pDVar1 + 4) + *(int *)(pDVar1 + 8) * 8;
          local_14 = *(Faction **)(iVar5 + -4);
          *(int *)(iVar5 + -8) = *piVar6;
          this_00 = (ReferenceController *)piVar6[1];
          *(ReferenceController **)(iVar5 + -4) = this_00;
          if (this_00 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this_00);
          }
          if (local_14 != (Faction *)0x0) {
            util__ReferenceController__ReleaseWeakReference((ReferenceController *)local_14);
          }
        }
      }
      local_c = local_c + 1;
      iVar5 = (**(code **)(*piVar4 + 0xc))();
    } while (local_c < iVar5);
  }
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_28);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 007fc360 7fc360_TacticalManager__GetAISpacecraftComponents ====
// decompiled by BatchDecomp @ 007fc360 name=GetAISpacecraftComponents conv=__thiscall body=25

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Darray<class util::WeakPtr<class SpacecraftComponent> > __thiscall
   TacticalManager__GetAISpacecraftComponents(void)const  */

Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ * __thiscall
TacticalManager__GetAISpacecraftComponents(TacticalManager *this)

{
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *in_stack_00000004;
  
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent(in_stack_00000004,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &(this->Optimizers).EnemySpacecraftComponents.Size);
  return in_stack_00000004;
}


//==== 007fcb00 7fcb00_TacticalManager__GetAlliedCraftBarycenter_km ====
extern undefined4 FUN_007f5c40(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007fcb00 name=GetAlliedCraftBarycenter_km conv=__thiscall body=157

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct Vec3_L_double_G_ __thiscall
   TacticalManager__GetAlliedCraftBarycenter_km(void)const  */

Vec3_L_double_G_ * __thiscall
TacticalManager__GetAlliedCraftBarycenter_km(TacticalManager *this,Vec3_L_double_G_ *__return_storage_ptr__)

{
  int iVar1;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  double local_54;
  int local_2c[4];
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 local_c[4];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_2c,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &(this->Optimizers).AlliedSpacecraftComponents.Size);
  local_c[0] = 0;
  local_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  iVar1 = (**(code **)(local_2c[0] + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c,iVar1);
  FUN_007f5c40(local_2c,local_c,&local_1c);
  GetCenterAndRadiusOfBodies_km
            (this,(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_64,SUB41(&local_1c,0));
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c);
  *(undefined4 *)&__return_storage_ptr__->X = local_64;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = uStack_60;
  *(undefined4 *)&__return_storage_ptr__->Y = uStack_5c;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = uStack_58;
  __return_storage_ptr__->Z = local_54;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_2c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 007fcba0 7fcba0_TacticalManager__GetAlliedCraftVelocity_km__s ====
extern undefined4 FUN_007f5c40(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007fcba0 name=GetAlliedCraftVelocity_km__s conv=__thiscall body=157

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct Vec3_L_double_G_ __thiscall
   TacticalManager__GetAlliedCraftVelocity_km__s(void)const  */

Vec3_L_double_G_ * __thiscall
TacticalManager__GetAlliedCraftVelocity_km__s(TacticalManager *this,Vec3_L_double_G_ *__return_storage_ptr__)

{
  int iVar1;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_64[24];
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  double local_3c;
  int local_2c[4];
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 local_c[4];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_2c,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &(this->Optimizers).AlliedSpacecraftComponents.Size);
  local_c[0] = 0;
  local_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  iVar1 = (**(code **)(local_2c[0] + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c,iVar1);
  FUN_007f5c40(local_2c,local_c,&local_1c);
  GetCenterAndRadiusOfBodies_km(this,local_64,SUB41(&local_1c,0));
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c);
  *(undefined4 *)&__return_storage_ptr__->X = local_4c;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = uStack_48;
  *(undefined4 *)&__return_storage_ptr__->Y = uStack_44;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = uStack_40;
  __return_storage_ptr__->Z = local_3c;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_2c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 007fcc40 7fcc40_TacticalManager__GetAlliedRelevantCraftCenter_km ====
// decompiled by BatchDecomp @ 007fcc40 name=GetAlliedRelevantCraftCenter_km conv=__thiscall body=174

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Maybe<struct util::Vec3<double> > __thiscall
   TacticalManager__GetAlliedRelevantCraftCenter_km(void)const  */

void __thiscall TacticalManager__GetAlliedRelevantCraftCenter_km(TacticalManager *this)

{
  undefined4 *puVar1;
  undefined4 *in_stack_00000004;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_70[56];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  bool local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_18 = 0;
  uStack_14 = 0;
  iStack_10 = 0;
  uStack_c = 0;
  GetAlliedBodies(this);
  FilterMostRelevantBodies(this,(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_18);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_28);
  local_20 = iStack_10 < 1;
  if (local_20) {
    local_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    local_28 = 0;
  }
  else {
    puVar1 = (undefined4 *)GetCenterAndRadiusOfBodies_km(this,local_70,SUB41(&local_18,0));
    local_38 = *puVar1;
    uStack_34 = puVar1[1];
    uStack_30 = puVar1[2];
    uStack_2c = puVar1[3];
    local_28 = *(undefined8 *)(puVar1 + 4);
  }
  local_20 = !local_20;
  *(bool *)(in_stack_00000004 + 6) = local_20;
  *in_stack_00000004 = local_38;
  in_stack_00000004[1] = uStack_34;
  in_stack_00000004[2] = uStack_30;
  in_stack_00000004[3] = uStack_2c;
  *(undefined8 *)(in_stack_00000004 + 4) = local_28;
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_18);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 007fccf0 7fccf0_TacticalManager__GetBattleCenter_km ====
// decompiled by BatchDecomp @ 007fccf0 name=GetBattleCenter_km conv=__thiscall body=33

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct Vec3_L_double_G_ __thiscall TacticalManager__GetBattleCenter_km(void)const  */

Vec3_L_double_G_ * __thiscall
TacticalManager__GetBattleCenter_km(TacticalManager *this,Vec3_L_double_G_ *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)((int)&(this->Optimizers).BattleCenter_km.Y + 4);
  uVar2 = *(undefined4 *)&(this->Optimizers).BattleCenter_km.Z;
  uVar3 = *(undefined4 *)((int)&(this->Optimizers).BattleCenter_km.Z + 4);
  *(undefined4 *)&__return_storage_ptr__->X = *(undefined4 *)&(this->Optimizers).BattleCenter_km.Y;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Y = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = uVar3;
  __return_storage_ptr__->Z = (this->Optimizers).BattleVelocity_km__s.X;
  return __return_storage_ptr__;
}


//==== 007fcd20 7fcd20_TacticalManager__GetBattleRadius_km ====
// decompiled by BatchDecomp @ 007fcd20 name=GetBattleRadius_km conv=__thiscall body=7

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall TacticalManager__GetBattleRadius_km(void)const  */

double __thiscall TacticalManager__GetBattleRadius_km(TacticalManager *this)

{
  return (this->Optimizers).CollisionBounds_km.Lower.X;
}


//==== 007fcfe0 7fcfe0_TacticalManager__GetCameraFocusedBodies_Clear ====
// decompiled by BatchDecomp @ 007fcfe0 name=TacticalManager_GetCameraFocusedBodies_Clear conv=__thiscall body=69

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall TacticalManager__GetCameraFocusedBodies_Clear(void)const  */

void __thiscall TacticalManager__GetCameraFocusedBodies_Clear(TacticalManager *this)

{
  undefined **local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = ((void *)(0x0091e0b8u));
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &this->GetCameraFocusedBodies_MemoizedValue,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_14);
  (this->GetCameraFocusedBodies_MemoizedValue).IsValidData = false;
  return;
}


//==== 007fdab0 7fdab0_TacticalManager__GetCapitalShipComponents ====
// decompiled by BatchDecomp @ 007fdab0 name=GetCapitalShipComponents conv=__thiscall body=269

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Darray<class util::WeakPtr<class CapitalShipComponent> > __thiscall
   TacticalManager__GetCapitalShipComponents(void)const  */

Darray_L_class_util__WeakPtr_L_class_Body_G___G_ * __thiscall
TacticalManager__GetCapitalShipComponents(TacticalManager *this)

{
  ReferenceController *this_00;
  ReferenceController *this_01;
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *in_stack_00000004;
  int local_8;
  
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 =
       ((void *)(0x0091f328u));
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) =
       *(undefined4 *)((int)&(this->Optimizers).BattleCenter_km.X + 4);
  local_8 = (**(code **)((this->Optimizers).CapitalShipComponents.Size + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____SetSize(in_stack_00000004,&local_8);
  uVar3 = *(uint *)(in_stack_00000004 + 0xc);
  uVar2 = -(uint)((int)((ulonglong)uVar3 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar3 * 8);
  puVar1 = (uint *)operator_new__(-(uint)(0xfffffffb < uVar2) | uVar2 + 4);
  if (puVar1 == (uint *)0x0) {
    puVar1 = (uint *)0x0;
  }
  else {
    *puVar1 = uVar3;
    puVar1 = puVar1 + 1;
    puVar4 = puVar1;
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4 = puVar4 + 2;
    }
  }
  *(uint **)(in_stack_00000004 + 4) = puVar1;
  puVar4 = (uint *)(this->Optimizers).CapitalShipComponents.Capacity;
  if (puVar4 != puVar4 + *(int *)&(this->Optimizers).BattleCenter_km.X * 2) {
    puVar1 = puVar1 + 1;
    do {
      this_00 = (ReferenceController *)*puVar1;
      puVar1[-1] = *puVar4;
      this_01 = (ReferenceController *)puVar4[1];
      *puVar1 = (uint)this_01;
      if (this_01 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(this_01);
      }
      if (this_00 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(this_00);
      }
      puVar4 = puVar4 + 2;
      puVar1 = puVar1 + 2;
    } while (puVar4 != (uint *)((this->Optimizers).CapitalShipComponents.Capacity +
                               *(int *)&(this->Optimizers).BattleCenter_km.X * 8));
    return in_stack_00000004;
  }
  return in_stack_00000004;
}


//==== 007fdbc0 7fdbc0_TacticalManager__GetCelestialGrid ====
// decompiled by BatchDecomp @ 007fdbc0 name=GetCelestialGrid conv=__thiscall body=40

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::WeakPtr<class Skybox> __thiscall TacticalManager__GetCelestialGrid(void)const
    */

int * __thiscall TacticalManager__GetCelestialGrid(TacticalManager *this)

{
  ReferenceController *this_00;
  int *in_stack_00000004;
  
  this_00 = (ReferenceController *)this[1]._pad_0x0_0;
  *in_stack_00000004 = this[1]._pad_0x0_0;
  in_stack_00000004[1] = (int)this_00;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
  }
  return in_stack_00000004;
}


//==== 007fe090 7fe090_TacticalManager__GetCombatAxis_Clear ====
// decompiled by BatchDecomp @ 007fe090 name=TacticalManager_GetCombatAxis_Clear conv=__thiscall body=29

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall TacticalManager__GetCombatAxis_Clear(void)const  */

void __thiscall TacticalManager__GetCombatAxis_Clear(TacticalManager *this)

{
  (this->GetCombatAxis_MemoizedValue).IsValidData = false;
  *(undefined4 *)&(this->GetCombatAxis_MemoizedValue).Data.X = 0;
  *(undefined4 *)((int)&(this->GetCombatAxis_MemoizedValue).Data.X + 4) = 0;
  *(undefined4 *)&(this->GetCombatAxis_MemoizedValue).Data.Y = 0;
  *(undefined4 *)((int)&(this->GetCombatAxis_MemoizedValue).Data.Y + 4) = 0;
  (this->GetCombatAxis_MemoizedValue).Data.Z = 0.0;
  return;
}


//==== 007fe2d0 7fe2d0_TacticalManager__GetCraftCount ====
// decompiled by BatchDecomp @ 007fe2d0 name=GetCraftCount conv=__thiscall body=160

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: int __thiscall TacticalManager__GetCraftCount(class Faction *,class CraftBlueprint
   *)const  */

int __thiscall
TacticalManager__GetCraftCount(TacticalManager *this,Faction *param_1,CraftBlueprint *param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  CraftBlueprint *pCVar5;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_24[16];
  CraftBlueprint **local_14;
  int local_10;
  int local_c;
  char *local_8;
  
  local_8 = (char *)(__security_cookie ^ (uint)&stack0xfffffffc);
  local_14 = &param_2;
  piVar2 = (int *)GetSpacecraftComponentsOfAlliance(this,(Faction *)local_24);
  local_10 = 0;
  local_c = 0;
  iVar3 = (**(code **)(*piVar2 + 0xc))();
  if (local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)*piVar2)(&local_c);
      if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
         !bVar1)) {
        *puVar4 = 0;
      }
      pCVar5 = SpacecraftComponent__GetCraftDesign((SpacecraftComponent *)*puVar4);
      if (pCVar5 == *local_14) {
        local_10 = local_10 + 1;
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*piVar2 + 0xc))();
    } while (local_c < iVar3);
  }
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_24);
  __security_check_cookie((uint)local_8 ^ (uint)&stack0xfffffffc);
  return local_10;
}


//==== 007fe720 7fe720_TacticalManager__GetEnemyCraftBarycenter_km ====
extern undefined4 FUN_007f5c40(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007fe720 name=GetEnemyCraftBarycenter_km conv=__thiscall body=157

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct Vec3_L_double_G_ __thiscall
   TacticalManager__GetEnemyCraftBarycenter_km(void)const  */

Vec3_L_double_G_ * __thiscall
TacticalManager__GetEnemyCraftBarycenter_km(TacticalManager *this,Vec3_L_double_G_ *__return_storage_ptr__)

{
  int iVar1;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  double local_54;
  int local_2c[4];
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 local_c[4];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_2c,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &(this->Optimizers).EnemySpacecraftComponents.Size);
  local_c[0] = 0;
  local_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  iVar1 = (**(code **)(local_2c[0] + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c,iVar1);
  FUN_007f5c40(local_2c,local_c,&local_1c);
  GetCenterAndRadiusOfBodies_km
            (this,(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_64,SUB41(&local_1c,0));
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c);
  *(undefined4 *)&__return_storage_ptr__->X = local_64;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = uStack_60;
  *(undefined4 *)&__return_storage_ptr__->Y = uStack_5c;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = uStack_58;
  __return_storage_ptr__->Z = local_54;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_2c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 007fe7c0 7fe7c0_TacticalManager__GetEnemyCraftVelocity_km__s ====
extern undefined4 FUN_007f5c40(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007fe7c0 name=GetEnemyCraftVelocity_km__s conv=__thiscall body=157

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct Vec3_L_double_G_ __thiscall
   TacticalManager__GetEnemyCraftVelocity_km__s(void)const  */

Vec3_L_double_G_ * __thiscall
TacticalManager__GetEnemyCraftVelocity_km__s(TacticalManager *this,Vec3_L_double_G_ *__return_storage_ptr__)

{
  int iVar1;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_64[24];
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  double local_3c;
  int local_2c[4];
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 local_c[4];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_2c,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &(this->Optimizers).EnemySpacecraftComponents.Size);
  local_c[0] = 0;
  local_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  iVar1 = (**(code **)(local_2c[0] + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c,iVar1);
  FUN_007f5c40(local_2c,local_c,&local_1c);
  GetCenterAndRadiusOfBodies_km(this,local_64,SUB41(&local_1c,0));
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c);
  *(undefined4 *)&__return_storage_ptr__->X = local_4c;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = uStack_48;
  *(undefined4 *)&__return_storage_ptr__->Y = uStack_44;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = uStack_40;
  __return_storage_ptr__->Z = local_3c;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_2c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 007fe980 7fe980_TacticalManager__GetImportantCrafts ====
extern undefined4 FUN_007f9f10(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007fe980 name=GetImportantCrafts conv=__thiscall body=235

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Darray<class util::WeakPtr<class SpacecraftComponent> > __thiscall
   TacticalManager__GetImportantCrafts(void)const  */

void __thiscall TacticalManager__GetImportantCrafts(TacticalManager *this)

{
  ReferenceController *this_00;
  ReferenceController *this_01;
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *in_stack_00000004;
  int local_24;
  undefined4 *local_20[4];
  TacticalManager *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_20,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &(this->Optimizers).SpacecraftComponents.Size);
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  local_10 = this;
  iVar3 = (*(code *)local_20[0][3])();
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent(in_stack_00000004,iVar3);
  local_c = 0;
  iVar3 = (*(code *)local_20[0][3])();
  if (local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(*(code *)*local_20[0])(&local_c);
      cVar1 = FUN_007f9f10(puVar4);
      if (cVar1 != '\0') {
        iVar3 = *(int *)(in_stack_00000004 + 8);
        local_24 = iVar3 + 1;
        util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)in_stack_00000004,&local_24);
        bVar2 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)in_stack_00000004,iVar3);
        if (bVar2) {
          this_00 = *(ReferenceController **)
                     (*(int *)(in_stack_00000004 + 4) + -4 + *(int *)(in_stack_00000004 + 8) * 8);
          iVar3 = *(int *)(in_stack_00000004 + 4) + *(int *)(in_stack_00000004 + 8) * 8;
          *(undefined4 *)(iVar3 + -8) = *puVar4;
          this_01 = (ReferenceController *)puVar4[1];
          *(ReferenceController **)(iVar3 + -4) = this_01;
          if (this_01 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this_01);
          }
          if (this_00 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(this_00);
          }
        }
      }
      local_c = local_c + 1;
      iVar3 = (*(code *)local_20[0][3])();
    } while (local_c < iVar3);
  }
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_20);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 007febb0 7febb0_TacticalManager__GetOrderOverlay ====
// decompiled by BatchDecomp @ 007febb0 name=GetOrderOverlay conv=__thiscall body=40

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::WeakPtr<struct OrderModeOverlay> __thiscall
   TacticalManager__GetOrderOverlay(void)const  */

undefined4 * __thiscall TacticalManager__GetOrderOverlay(TacticalManager *this)

{
  ReferenceController *this_00;
  undefined4 *in_stack_00000004;
  
  this_00 = (this->CameraRotateWidget).Controller;
  *in_stack_00000004 = (this->CameraRotateWidget).Pointer;
  in_stack_00000004[1] = this_00;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
  }
  return in_stack_00000004;
}


//==== 007fec10 7fec10_TacticalManager__GetPauseMenu ====
// decompiled by BatchDecomp @ 007fec10 name=GetPauseMenu conv=__thiscall body=40

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::WeakPtr<struct PauseMenuHandler> __thiscall
   TacticalManager__GetPauseMenu(void)const  */

undefined4 * __thiscall TacticalManager__GetPauseMenu(TacticalManager *this)

{
  ReferenceController *this_00;
  undefined4 *in_stack_00000004;
  
  this_00 = (this->OrderOverlay).Controller;
  *in_stack_00000004 = (this->OrderOverlay).Pointer;
  in_stack_00000004[1] = this_00;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
  }
  return in_stack_00000004;
}


//==== 007fec80 7fec80_TacticalManager__GetPlayerSelectedSpacecraftComponents ====
// decompiled by BatchDecomp @ 007fec80 name=GetPlayerSelectedSpacecraftComponents conv=__thiscall body=355

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Darray<class util::WeakPtr<class SpacecraftComponent> > __thiscall
   TacticalManager__GetPlayerSelectedSpacecraftComponents(void)const  */

void __thiscall TacticalManager__GetPlayerSelectedSpacecraftComponents(TacticalManager *this)

{
  ReferenceController *this_00;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *pDVar1;
  TacticalManager *pTVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  Faction *pFVar7;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *in_stack_00000004;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_28[16];
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *local_18;
  Faction *local_14;
  TacticalManager *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_18 = in_stack_00000004;
  local_10 = this;
  piVar4 = (int *)GetSelectedSpacecrafts(this);
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  iVar5 = (**(code **)(*piVar4 + 0xc))();
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent(in_stack_00000004,iVar5);
  local_c = 0;
  iVar5 = (**(code **)(*piVar4 + 0xc))();
  if (local_c < iVar5) {
    do {
      piVar6 = (int *)(**(code **)*piVar4)(&local_c);
      if (((ReferenceController *)piVar6[1] != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar6[1]),
         !bVar3)) {
        *piVar6 = 0;
      }
      iVar5 = *piVar6;
      if ((*(ReferenceController **)(iVar5 + 8) != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar5 + 8)),
         !bVar3)) {
        *(undefined4 *)(iVar5 + 4) = 0;
      }
      pTVar2 = local_10;
      local_14 = *(Faction **)(*(int *)(iVar5 + 4) + 0x1e0);
      TacticalManager_GetStrategicGame_Memoize(local_10);
      if (*(char *)&(pTVar2->Effects).Controller == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      pFVar7 = StrategicManager__GetPlayerAlliance((StrategicManager *)(pTVar2->Effects).Pointer);
      if (local_14 == pFVar7) {
        iVar5 = *(int *)(local_18 + 8);
        local_14 = (Faction *)(iVar5 + 1);
        util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_18,(int *)&local_14);
        pDVar1 = local_18;
        bVar3 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_18,iVar5);
        if (bVar3) {
          iVar5 = *(int *)(pDVar1 + 4) + *(int *)(pDVar1 + 8) * 8;
          local_14 = *(Faction **)(iVar5 + -4);
          *(int *)(iVar5 + -8) = *piVar6;
          this_00 = (ReferenceController *)piVar6[1];
          *(ReferenceController **)(iVar5 + -4) = this_00;
          if (this_00 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this_00);
          }
          if (local_14 != (Faction *)0x0) {
            util__ReferenceController__ReleaseWeakReference((ReferenceController *)local_14);
          }
        }
      }
      local_c = local_c + 1;
      iVar5 = (**(code **)(*piVar4 + 0xc))();
    } while (local_c < iVar5);
  }
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_28);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 007fedf0 7fedf0_TacticalManager__GetPlayerSpacecraftComponents ====
// decompiled by BatchDecomp @ 007fedf0 name=GetPlayerSpacecraftComponents conv=__thiscall body=25

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Darray<class util::WeakPtr<class SpacecraftComponent> > __thiscall
   TacticalManager__GetPlayerSpacecraftComponents(void)const  */

Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ * __thiscall
TacticalManager__GetPlayerSpacecraftComponents(TacticalManager *this)

{
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *in_stack_00000004;
  
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent(in_stack_00000004,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &(this->Optimizers).AlliedSpacecraftComponents.Size);
  return in_stack_00000004;
}


//==== 007fee10 7fee10_TacticalManager__GetReferenceIrradiance ====
// decompiled by BatchDecomp @ 007fee10 name=GetReferenceIrradiance conv=__thiscall body=60

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual double __thiscall TacticalManager__GetReferenceIrradiance(void)const  */

double __thiscall TacticalManager__GetReferenceIrradiance(TacticalManager *this)

{
  double dVar1;
  
  TacticalManager_GetStrategicGame_Memoize(this);
  if (*(char *)&(this->Effects).Controller == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar1 = StrategicManager__GetRefIrradiance_W__m2((StrategicManager *)(this->Effects).Pointer,false);
  return dVar1;
}


//==== 007fef70 7fef70_TacticalManager__GetScreenFadeToBlack_Percent ====
// decompiled by BatchDecomp @ 007fef70 name=GetScreenFadeToBlack_Percent conv=__thiscall body=59

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual double __thiscall TacticalManager__GetScreenFadeToBlack_Percent(void)const  */

double __thiscall TacticalManager__GetScreenFadeToBlack_Percent(TacticalManager *this)

{
  float10 fVar1;
  
  TacticalManager_GetStrategicGame_Memoize(this);
  if (*(char *)&(this->Effects).Controller == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
                    /* WARNING: Could not recover jumptable at 0x007fefa9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float10)(*(code *)((this->Effects).Pointer)->Parent[8].ActorStore.Pointer)();
  return (double)fVar1;
}


//==== 007fefd0 7fefd0_TacticalManager__GetSelectedBodiesCenter_km_Clear ====
// decompiled by BatchDecomp @ 007fefd0 name=TacticalManager_GetSelectedBodiesCenter_km_Clear conv=__thiscall body=26

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall TacticalManager__GetSelectedBodiesCenter_km_Clear(void)const  */

void __thiscall TacticalManager__GetSelectedBodiesCenter_km_Clear(TacticalManager *this)

{
  (this->GetSelectedBodiesCenter_km_MemoizedValue).IsValidData = false;
  *(undefined4 *)&(this->GetSelectedBodiesCenter_km_MemoizedValue).Data.X = 0;
  *(undefined4 *)((int)&(this->GetSelectedBodiesCenter_km_MemoizedValue).Data.X + 4) = 0;
  *(undefined4 *)&(this->GetSelectedBodiesCenter_km_MemoizedValue).Data.Y = 0;
  *(undefined4 *)((int)&(this->GetSelectedBodiesCenter_km_MemoizedValue).Data.Y + 4) = 0;
  (this->GetSelectedBodiesCenter_km_MemoizedValue).Data.Z = 0.0;
  return;
}


//==== 007feff0 7feff0_TacticalManager__GetSelectedBodiesCenter_km_Memoize ====
extern undefined4 FUN_007f5c40(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007feff0 name=TacticalManager_GetSelectedBodiesCenter_km_Memoize conv=__thiscall body=222

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall TacticalManager__GetSelectedBodiesCenter_km_Memoize(void)const  */

void __thiscall TacticalManager__GetSelectedBodiesCenter_km_Memoize(TacticalManager *this)

{
  undefined8 uVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int local_10;
  undefined1 local_c[4];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((this->GetSelectedBodiesCenter_km_MemoizedValue).IsValidData == false) {
    iVar4 = (this->TacticalManagerMemoizationHandlerInstance).ResetFunctions.Size;
    local_10 = iVar4 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->TacticalManagerMemoizationHandlerInstance,
               &local_10);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->TacticalManagerMemoizationHandlerInstance,iVar4);
    if (bVar2) {
      (this->TacticalManagerMemoizationHandlerInstance).ResetFunctions.Data
      [(this->TacticalManagerMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_f910390b, TacticalManager_GetSelectedBodiesCenter_km_Clear);
    }
    piVar3 = (int *)GetSelectedSpacecrafts(this);
    local_c[0] = 0;
    local_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    iVar4 = (**(code **)(*piVar3 + 0xc))();
    util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_20,iVar4);
    FUN_007f5c40(piVar3,local_c,&local_20);
    GetCenterAndRadiusOfBodies_km
              (this,(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_78,SUB41(&local_20,0));
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_20);
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_30);
    ((slice_view *)&uStack_28)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_28)->_1_3_[0] | (((slice_view *)&uStack_28)->_1_3_[1] << 8) | (((slice_view *)&uStack_28)->_1_3_[2] << 16)) << 8));
    local_30 = local_68;
    uVar1 = local_30;
    ((slice_view *)&local_30)->_0_4_ = (undefined4)local_68;
    ((slice_view *)&local_30)->_4_4_ = *(undefined4 *)((char *)&local_68 + 4);
    *(undefined4 *)&(this->GetSelectedBodiesCenter_km_MemoizedValue).Data.X = local_78;
    *(undefined4 *)((int)&(this->GetSelectedBodiesCenter_km_MemoizedValue).Data.X + 4) = uStack_74;
    *(undefined4 *)&(this->GetSelectedBodiesCenter_km_MemoizedValue).Data.Y = uStack_70;
    *(undefined4 *)((int)&(this->GetSelectedBodiesCenter_km_MemoizedValue).Data.Y + 4) = uStack_6c;
    *(undefined4 *)&(this->GetSelectedBodiesCenter_km_MemoizedValue).Data.Z = (undefined4)local_30;
    *(undefined4 *)((int)&(this->GetSelectedBodiesCenter_km_MemoizedValue).Data.Z + 4) =
         ((slice_view *)&local_30)->_4_4_;
    *(undefined4 *)&(this->GetSelectedBodiesCenter_km_MemoizedValue).IsValidData = uStack_28;
    *(undefined4 *)((char *)&(this->GetSelectedBodiesCenter_km_MemoizedValue) + 0x1c) = uStack_24;
    local_30 = uVar1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 007ff0d0 7ff0d0_TacticalManager__GetSelectedBodiesVelocity_km__s_Clear ====
// decompiled by BatchDecomp @ 007ff0d0 name=TacticalManager_GetSelectedBodiesVelocity_km_s_Clear conv=__thiscall body=29

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall TacticalManager__GetSelectedBodiesVelocity_km__s_Clear(void)const  */

void __thiscall TacticalManager__GetSelectedBodiesVelocity_km__s_Clear(TacticalManager *this)

{
  (this->GetSelectedBodiesVelocity_km__s_MemoizedValue).IsValidData = false;
  *(undefined4 *)&(this->GetSelectedBodiesVelocity_km__s_MemoizedValue).Data.X = 0;
  *(undefined4 *)((int)&(this->GetSelectedBodiesVelocity_km__s_MemoizedValue).Data.X + 4) = 0;
  *(undefined4 *)&(this->GetSelectedBodiesVelocity_km__s_MemoizedValue).Data.Y = 0;
  *(undefined4 *)((int)&(this->GetSelectedBodiesVelocity_km__s_MemoizedValue).Data.Y + 4) = 0;
  (this->GetSelectedBodiesVelocity_km__s_MemoizedValue).Data.Z = 0.0;
  return;
}


//==== 007ff0f0 7ff0f0_TacticalManager__GetSelectedBodiesVelocity_km__s_Memoize ====
extern undefined4 FUN_007f5c40(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007ff0f0 name=TacticalManager_GetSelectedBodiesVelocity_km_s_Memoize conv=__thiscall body=225

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall TacticalManager__GetSelectedBodiesVelocity_km__s_Memoize(void)const  */

void __thiscall TacticalManager__GetSelectedBodiesVelocity_km__s_Memoize(TacticalManager *this)

{
  undefined8 uVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_78[24];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int local_10;
  undefined1 local_c[4];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((this->GetSelectedBodiesVelocity_km__s_MemoizedValue).IsValidData == false) {
    iVar4 = (this->TacticalManagerMemoizationHandlerInstance).ResetFunctions.Size;
    local_10 = iVar4 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->TacticalManagerMemoizationHandlerInstance,
               &local_10);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->TacticalManagerMemoizationHandlerInstance,iVar4);
    if (bVar2) {
      (this->TacticalManagerMemoizationHandlerInstance).ResetFunctions.Data
      [(this->TacticalManagerMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_f910390b, TacticalManager_GetSelectedBodiesVelocity_km_s_Clear);
    }
    piVar3 = (int *)GetSelectedSpacecrafts(this);
    local_c[0] = 0;
    local_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    iVar4 = (**(code **)(*piVar3 + 0xc))();
    util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_20,iVar4);
    FUN_007f5c40(piVar3,local_c,&local_20);
    GetCenterAndRadiusOfBodies_km(this,local_78,SUB41(&local_20,0));
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_20);
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_30);
    ((slice_view *)&uStack_28)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_28)->_1_3_[0] | (((slice_view *)&uStack_28)->_1_3_[1] << 8) | (((slice_view *)&uStack_28)->_1_3_[2] << 16)) << 8));
    local_30 = local_50;
    uVar1 = local_30;
    ((slice_view *)&local_30)->_0_4_ = (undefined4)local_50;
    ((slice_view *)&local_30)->_4_4_ = *(undefined4 *)((char *)&local_50 + 4);
    *(undefined4 *)&(this->GetSelectedBodiesVelocity_km__s_MemoizedValue).Data.X = local_60;
    *(undefined4 *)((int)&(this->GetSelectedBodiesVelocity_km__s_MemoizedValue).Data.X + 4) =
         uStack_5c;
    *(undefined4 *)&(this->GetSelectedBodiesVelocity_km__s_MemoizedValue).Data.Y = uStack_58;
    *(undefined4 *)((int)&(this->GetSelectedBodiesVelocity_km__s_MemoizedValue).Data.Y + 4) =
         uStack_54;
    *(undefined4 *)&(this->GetSelectedBodiesVelocity_km__s_MemoizedValue).Data.Z =
         (undefined4)local_30;
    *(undefined4 *)((int)&(this->GetSelectedBodiesVelocity_km__s_MemoizedValue).Data.Z + 4) =
         ((slice_view *)&local_30)->_4_4_;
    *(undefined4 *)&(this->GetSelectedBodiesVelocity_km__s_MemoizedValue).IsValidData = uStack_28;
    *(undefined4 *)((char *)&(this->GetSelectedBodiesVelocity_km__s_MemoizedValue) + 0x1c) = uStack_24;
    local_30 = uVar1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 007ff210 7ff210_TacticalManager__GetSelectedSpacecrafts ====
// decompiled by BatchDecomp @ 007ff210 name=GetSelectedSpacecrafts conv=__thiscall body=331

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Darray<class util::WeakPtr<class SpacecraftComponent> > __thiscall
   TacticalManager__GetSelectedSpacecrafts(void)const  */

void __thiscall TacticalManager__GetSelectedSpacecrafts(TacticalManager *this)

{
  Body *this_00;
  SpacecraftComponent *pSVar1;
  ReferenceController *this_01;
  int iVar2;
  ReferenceController *this_02;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *in_stack_00000004;
  int local_20;
  undefined4 *local_1c[4];
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
util__GetSelectedSpacecrafts((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_1c);
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  iVar4 = (*(code *)local_1c[0][3])();
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent(in_stack_00000004,iVar4);
  local_c = 0;
  iVar4 = (*(code *)local_1c[0][3])();
  if (local_c < iVar4) {
    do {
      puVar5 = (undefined4 *)(*(code *)*local_1c[0])(&local_c);
      if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
         !bVar3)) {
        *puVar5 = 0;
      }
      this_00 = (Body *)*puVar5;
      Body__GetSpacecraftComponent_Memoize(this_00);
      if ((this_00->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      pSVar1 = (this_00->GetSpacecraftComponent_MemoizedValue).Data.Pointer;
      this_01 = (this_00->GetSpacecraftComponent_MemoizedValue).Data.Controller;
      if (this_01 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(this_01);
      }
      iVar4 = *(int *)(in_stack_00000004 + 8);
      local_20 = iVar4 + 1;
      util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)in_stack_00000004,&local_20);
      bVar3 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)in_stack_00000004,iVar4);
      if (bVar3) {
        iVar4 = *(int *)(in_stack_00000004 + 8);
        iVar2 = *(int *)(in_stack_00000004 + 4);
        this_02 = *(ReferenceController **)(iVar2 + -4 + iVar4 * 8);
        *(SpacecraftComponent **)(iVar2 + -8 + iVar4 * 8) = pSVar1;
        *(ReferenceController **)(iVar2 + -4 + iVar4 * 8) = this_01;
        if (this_01 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this_01);
        }
        if (this_02 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this_02);
        }
      }
      if (this_01 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(this_01);
      }
      local_c = local_c + 1;
      iVar4 = (*(code *)local_1c[0][3])();
    } while (local_c < iVar4);
  }
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_1c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 007ffe70 7ffe70_TacticalManager__GetStrategicGame_Clear ====
// decompiled by BatchDecomp @ 007ffe70 name=TacticalManager_GetStrategicGame_Clear conv=__thiscall body=18

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall TacticalManager__GetStrategicGame_Clear(void)const  */

void __thiscall TacticalManager__GetStrategicGame_Clear(TacticalManager *this)

{
  (this->Effects).Pointer = (EffectManager *)0x0;
  *(undefined1 *)&(this->Effects).Controller = 0;
  return;
}


//==== 00800370 800370_TacticalManager__IsBodyRelevantToBattlespace ====
// decompiled by BatchDecomp @ 00800370 name=IsBodyRelevantToBattlespace conv=__thiscall body=272

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall TacticalManager__IsBodyRelevantToBattlespace(class util::WeakPtr<class
   Body> const &)const  */

bool __thiscall
TacticalManager__IsBodyRelevantToBattlespace(TacticalManager *this,WeakPtr_L_class_Body_G_ *param_1)

{
  double dVar1;
  bool bVar2;
  Vec3_L_double_G_ *pVVar3;
  Vec3_L_double_G_ local_34;
  double local_1c;
  double local_14;
  double local_c;
  
  if (*(ReferenceController **)(param_1 + 4) != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(param_1 + 4));
    if (!bVar2) {
      *(undefined4 *)param_1 = 0;
    }
  }
  pVVar3 = Body__GetPosition_km(*(Body **)param_1,&local_34);
  local_14 = pVVar3->X - (this->Optimizers).BattleCenter_km.Y;
  local_c = pVVar3->Y - (this->Optimizers).BattleCenter_km.Z;
  local_1c = pVVar3->Z - (this->Optimizers).BattleVelocity_km__s.X;
  if (*(ReferenceController **)(param_1 + 4) != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(param_1 + 4));
    if (!bVar2) {
      *(undefined4 *)param_1 = 0;
    }
  }
  pVVar3 = Body__GetVelocity_km__s(*(Body **)param_1,&local_34);
  if ((0.0 <= (pVVar3->Y - (this->Optimizers).BattleVelocity_km__s.Z) * local_c +
              (pVVar3->X - (this->Optimizers).BattleVelocity_km__s.Y) * local_14 +
              (pVVar3->Z - (this->Optimizers).BattleRadius_km) * local_1c) &&
     (dVar1 = (this->Optimizers).CollisionBounds_km.Lower.X,
     dVar1 * dVar1 <= local_14 * local_14 + local_c * local_c + local_1c * local_1c)) {
    return false;
  }
  return true;
}


//==== 008012b0 8012b0_TacticalManager__OnBodiesAddedOrRemoved ====
// decompiled by BatchDecomp @ 008012b0 name=OnBodiesAddedOrRemoved conv=__thiscall body=147

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall TacticalManager__OnBodiesAddedOrRemoved(void) */

void __thiscall TacticalManager__OnBodiesAddedOrRemoved(TacticalManager *this)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *local_1c[4];
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  (**(code **)(*(int *)this + 0x78))();
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_1c,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &(this->Optimizers).SpacecraftComponents.Size);
  local_c = 0;
  iVar2 = (*(code *)local_1c[0][3])();
  if (local_c < iVar2) {
    do {
      puVar3 = (undefined4 *)(*(code *)*local_1c[0])(&local_c);
      if ((ReferenceController *)puVar3[1] != (ReferenceController *)0x0) {
        bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar3[1]);
        if (!bVar1) {
          *puVar3 = 0;
        }
      }
      SpacecraftComponent__DememoizeBodies((SpacecraftComponent *)*puVar3);
      local_c = local_c + 1;
      iVar2 = (*(code *)local_1c[0][3])();
    } while (local_c < iVar2);
  }
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_1c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00801cd0 801cd0_TacticalManager__PlayAudioFromSpacecraft ====
// decompiled by BatchDecomp @ 00801cd0 name=PlayAudioFromSpacecraft conv=__thiscall body=460

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall TacticalManager__PlayAudioFromSpacecraft(class util::Str<char> const
   &,class util::WeakPtr<class SpacecraftComponent> &) */

void __thiscall
TacticalManager__PlayAudioFromSpacecraft(TacticalManager *this,Str_L_char_G_ *param_1,WeakPtr_L_class_SpacecraftComponent_G_ *param_2)

{
  ReferenceController *this_00;
  ReferenceController *this_01;
  TacticalManager *pTVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  Faction *pFVar6;
  CHAR *pszSound;
  Str_L_char_G_ *hmod;
  DWORD fdwSound;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_40[16];
  CHAR local_30[4];
  Str_L_char_G_ *local_2c;
  TacticalManager *local_28;
  Faction *local_24;
  TacticalManager *local_20;
  undefined4 local_1c;
  int *piStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_2c = param_1;
  local_1c = 0;
  piStack_18 = (int *)0x0;
  iStack_14 = 0;
  uStack_10 = 0;
  local_28 = this;
  local_20 = this;
  piVar3 = (int *)GetSelectedSpacecrafts(this);
  local_1c = 0;
  piStack_18 = (int *)0x0;
  iStack_14 = 0;
  uStack_10 = 0;
  iVar4 = (**(code **)(*piVar3 + 0xc))();
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_1c,iVar4);
  local_c = 0;
  iVar4 = (**(code **)(*piVar3 + 0xc))();
  if (local_c < iVar4) {
    do {
      piVar5 = (int *)(**(code **)*piVar3)(&local_c);
      if (((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]),
         !bVar2)) {
        *piVar5 = 0;
      }
      iVar4 = *piVar5;
      if ((*(ReferenceController **)(iVar4 + 8) != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar4 + 8)),
         !bVar2)) {
        *(undefined4 *)(iVar4 + 4) = 0;
      }
      pTVar1 = local_20;
      local_24 = *(Faction **)(*(int *)(iVar4 + 4) + 0x1e0);
      TacticalManager_GetStrategicGame_Memoize(local_20);
      if (*(char *)&(pTVar1->Effects).Controller == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      pFVar6 = StrategicManager__GetPlayerAlliance((StrategicManager *)(pTVar1->Effects).Pointer);
      iVar4 = iStack_14;
      if (local_24 == pFVar6) {
        local_24 = (Faction *)(iStack_14 + 1);
        util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c,(int *)&local_24);
        bVar2 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c,iVar4);
        if (bVar2) {
          this_00 = (ReferenceController *)piStack_18[iStack_14 * 2 + -1];
          piStack_18[iStack_14 * 2 + -2] = *piVar5;
          this_01 = (ReferenceController *)piVar5[1];
          piStack_18[iStack_14 * 2 + -1] = (int)this_01;
          if (this_01 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this_01);
          }
          if (this_00 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(this_00);
          }
        }
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(*piVar3 + 0xc))();
    } while (local_c < iVar4);
  }
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_40);
  if ((0 < iStack_14) && (piStack_18 != piStack_18 + iStack_14 * 2)) {
    piVar3 = piStack_18;
    do {
      if ((*(int *)(param_2 + 4) == piVar3[1]) && (*(int *)param_2 == *piVar3)) {
        pszSound = local_30;
        fdwSound = 0;
        hmod = local_2c;
        GameManager__GetAudio((GameManager *)local_28->_pad_0x0_0);
        AudioManager__PlaySoundA(pszSound,(HMODULE)hmod,fdwSound);
        break;
      }
      piVar3 = piVar3 + 2;
    } while (piVar3 != piStack_18 + iStack_14 * 2);
  }
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_1c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00802240 802240_TacticalManager__RenderScreenEffects ====
// decompiled by BatchDecomp @ 00802240 name=RenderScreenEffects conv=__thiscall body=11

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall TacticalManager__RenderScreenEffects(void)const  */

void __thiscall TacticalManager__RenderScreenEffects(TacticalManager *this)

{
  EffectManager__RenderScreenEffects((EffectManager *)(this->EnemyController).Pointer);
  return;
}


//==== 00804730 804730_TacticalManager__SetupFleets ====
extern undefined4 FUN_007f70c0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_007f7290(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_007f8b10(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 00804730 name=SetupFleets conv=__thiscall body=251

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: void __thiscall TacticalManager__SetupFleets(class util::Darray<class
   util::WeakPtr<class Fleet> > const &) */

void __thiscall
TacticalManager__SetupFleets(TacticalManager *this,Darray_L_class_util__WeakPtr_L_class_Fleet_G___G_ *param_1)

{
  ReferenceController *this_00;
  int iVar1;
  undefined4 uVar2;
  ReferenceController *pRVar3;
  ReferenceController *pRVar4;
  undefined8 local_1c;
  undefined8 local_14;
  TacticalManager *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_1c = 0;
  local_c = this;
  FUN_007f7290(&local_1c,param_1,this);
  local_14 = 0;
  FUN_007f70c0(&local_14,param_1,this);
  this_00 = ((slice_view *)&local_1c)->_4_4_;
  uVar2 = (undefined4)local_1c;
  pRVar3 = ((slice_view *)&local_1c)->_4_4_;
  if (((slice_view *)&local_1c)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(((slice_view *)&local_1c)->_4_4_);
  }
  TacticalAI__NewCombat((this->AlliedController).Pointer,uVar2,pRVar3);
  pRVar3 = ((slice_view *)&local_14)->_4_4_;
  uVar2 = (undefined4)local_14;
  pRVar4 = ((slice_view *)&local_14)->_4_4_;
  if (((slice_view *)&local_14)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(((slice_view *)&local_14)->_4_4_);
  }
  TacticalAI__NewCombat(*(TacticalAI **)&(local_c->Session).CurrentTime_s,uVar2,pRVar4);
  local_14 = CONCAT44(local_c,param_1);
  local_c = (TacticalManager *)0x0;
  iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
  if ((int)local_c < iVar1) {
    do {
      uVar2 = (*(code *)**(undefined4 **)param_1)(&local_c);
      FUN_007f8b10(uVar2);
      local_c = (TacticalManager *)((int)&local_c->_pad_0x0_0 + 1);
      iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
    } while ((int)local_c < iVar1);
  }
  if (pRVar3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar3);
  }
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00804b00 804b00_TacticalManager__ShouldGridBeShowing ====
// decompiled by BatchDecomp @ 00804b00 name=ShouldGridBeShowing conv=__thiscall body=174

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall TacticalManager__ShouldGridBeShowing(void)const  */

bool __thiscall TacticalManager__ShouldGridBeShowing(TacticalManager *this)

{
  ReferenceController *pRVar1;
  bool bVar2;
  char cVar3;
  Preferences *this_00;
  
  this_00 = (Preferences *)Manager__GetOptions((Manager *)this);
  bVar2 = Preferences__IsShowingCelestialGridWhenRotating(this_00);
  if (bVar2) {
    pRVar1 = (this->CelestialGrid).Controller;
    if ((pRVar1 != (ReferenceController *)0x0) &&
       (bVar2 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar2)) {
      (this->CelestialGrid).Pointer = (Skybox *)0x0;
    }
    bVar2 = UIWidget__IsCaptured((UIWidget *)(this->CelestialGrid).Pointer);
    if (bVar2) {
      TacticalManager_GetStrategicGame_Memoize(this);
      if (*(char *)&(this->Effects).Controller == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      bVar2 = StrategicManager__IsNotInScreenshotMode((StrategicManager *)(this->Effects).Pointer);
      if (bVar2) {
        return true;
      }
    }
  }
  pRVar1 = (this->CameraRotateWidget).Controller;
  if ((pRVar1 != (ReferenceController *)0x0) &&
     (bVar2 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar2)) {
    (this->CameraRotateWidget).Pointer = (CameraRotator *)0x0;
  }
  cVar3 = (**(code **)(((this->CameraRotateWidget).Pointer)->_pad_0x0_0 + 8))();
  if (cVar3 != '\0') {
    return true;
  }
  return false;
}

