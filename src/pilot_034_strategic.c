// pilot_034_strategic.c - StrategicManager family (164 methods, PDB-verified)
// assembled by scripts/pilot034_assemble.py from decomp2c v2 output.
// Honest TODOs inline; fix log: reports/poison_fix/strategic_pilot034_log.txt
#include "port_prelude.h"
typedef union {
  struct {
    undefined1 _0_324_[324];
  };
  struct {
    undefined1 _8_48_[48];
    undefined1 _64_48_[48];
  };
  struct {
    undefined1 _200_32_[32];
  };
  struct {
    undefined1 _0_28_[28];
  };
  struct {
    undefined1 _0_24_[24];
    undefined1 _120_24_[24];
    undefined1 _144_24_[24];
    undefined1 _176_24_[24];
  };
  struct {
    undefined1 _0_20_[20];
  };
  struct {
    undefined1 _0_16_[16];
    undefined1 _264_16_[16];
    undefined1 _280_16_[16];
    undefined1 _304_16_[16];
  };
  struct {
    undefined8 _0_8_;
    undefined8 _8_8_;
    undefined8 _16_8_;
    undefined8 _56_8_;
    undefined8 _112_8_;
    undefined8 _232_8_;
    undefined8 _240_8_;
    undefined8 _248_8_;
    undefined8 _256_8_;
    undefined8 _296_8_;
    undefined8 _304_8_;
    undefined8 _320_8_;
  };
  struct {
    undefined1 _9_7_[7];
    undefined1 _25_7_[7];
  };
  struct {
    undefined1 _0_5_[5];
  };
  struct {
    undefined4 _0_4_;
    undefined4 _4_4_;
    undefined4 _8_4_;
    undefined4 _12_4_;
    undefined4 _16_4_;
    undefined4 _24_4_;
    undefined4 _168_4_;
    undefined4 _172_4_;
  };
  struct {
    undefined1 _1_3_[3];
    undefined1 _5_3_[3];
    undefined1 _9_3_[3];
    undefined1 _313_3_[3];
  };
  struct {
    undefined1 _0_1_;
    undefined1 _4_1_;
  };
  undefined1 raw[32];
} slice_view;
/* ---- externs: stub-oracle names (K&R; ret types by call site) ---- */
extern int StrategicManager_GetTacticalGame_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int TacticalManager_GetAllBodies_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int TacticalManager_GetAllColliders_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int TacticalManager_GetFutureCelestials_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int TacticalManager_GetRelevantCelestials_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int util_Darray_struct_PendingBattle_CheckSize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int util_Darray_struct_WorldObject_CheckSize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int util_Darray_struct_WorldObject_SetSize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int util_Darray_struct_WorldObject_operator__o2(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int util_Maybe_struct_PendingBattle_operator(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int util__Maybe_struct_FixedOrbit___operator(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int util__Maybe_struct_PendingBattle___operator(); /* K&R stub; ret by call site (honest TODO: stub is void) */

//==== 0000597150 00597150_GetTurnTimeStep_s ====
// decompiled by BatchDecomp @ 00597150 name=GetTurnTimeStep_s conv=__thiscall body=7

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall StrategicManager__GetTurnTimeStep_s(void)const  */

double __thiscall StrategicManager__GetTurnTimeStep_s(StrategicManager *this)

{
  return (this->Session).VisualTurnStep_s;
}


//==== 000059a210 0059a210_GetPlayerAlliance ====
// decompiled by BatchDecomp @ 0059a210 name=GetPlayerAlliance conv=__thiscall body=4

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class Faction * __thiscall StrategicManager__GetPlayerAlliance(void)const  */

Faction * __thiscall StrategicManager__GetPlayerAlliance(StrategicManager *this)

{
  return *(Faction **)&(this->Session).CurrentTime_s;
}


//==== 000059a220 0059a220_GetTimeSinceJ2000_s ====
// decompiled by BatchDecomp @ 0059a220 name=GetTimeSinceJ2000_s conv=__thiscall body=7

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall StrategicManager__GetTimeSinceJ2000_s(void)const  */

double __thiscall StrategicManager__GetTimeSinceJ2000_s(StrategicManager *this)

{
  return (this->Session).TurnRunTimeLeft_s;
}


//==== 00005bce20 005bce20_IsTurnRunning ====
// decompiled by BatchDecomp @ 005bce20 name=IsTurnRunning conv=__thiscall body=20

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall StrategicManager_IsTurnRunning(void)const  */

bool __thiscall StrategicManager_IsTurnRunning(StrategicManager *this)

{
  return /*0000000000000000*/0.0 < (this->Session).TurnStep_s;
}


//==== 0000685560 00685560_GetVisualTurnTimeStep_s ====
// decompiled by BatchDecomp @ 00685560 name=GetVisualTurnTimeStep_s conv=__thiscall body=7

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall StrategicManager__GetVisualTurnTimeStep_s(void)const  */

double __thiscall StrategicManager__GetVisualTurnTimeStep_s(StrategicManager *this)

{
  return (this->Session).ScreenFadeInOutTime_s;
}


//==== 000075b070 0075b070_StrategicManager ====
// decompiled by BatchDecomp @ 0075b070 name=StrategicManager conv=__thiscall body=540

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: __thiscall StrategicManager_StrategicManager(class GameManager *) */

StrategicManager * __thiscall
StrategicManager_StrategicManager(StrategicManager *this,GameManager *param_1)

{
  Delegate_L_bool_G_ DVar1;
  TacticalAI *pTVar2;
  void *pvVar3;
  ReferenceControllerRegistry *pRVar4;
  ReferenceController *pRVar5;
  void *pvVar6;
  
  Manager__Manager((Manager *)this,param_1,0,0,0,0);
  this->_pad_0x0_0 = (int)0x93a058;
  (this->StrategicManagerMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 = 0;
  (this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Data = (pmf_ebe8b20a *)0x0;
  (this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size = 0;
  (this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Capacity = 0;
  (this->StrategicManagerMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 =
       (int)0x9194a4;
  (this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Data = (pmf_ebe8b20a *)0x0;
  (this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size = 0;
  (this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Capacity = 0;
  (this->GetCelestialObjects_MemoizedValue).Data._pad_0x0_0 =
       (int)0x91e0b8;
  (this->GetCelestialObjects_MemoizedValue).Data.Data = (WeakPtr_L_CelestialObject_G_ *)0x0;
  (this->GetCelestialObjects_MemoizedValue).Data.Size = 0;
  (this->GetCelestialObjects_MemoizedValue).Data.Capacity = 0;
  (this->GetCelestialObjects_MemoizedValue).IsValidData = false;
  (this->GetGameplayRelevantCelestialObjects_MemoizedValue).Data._pad_0x0_0 =
       (int)0x91e0b8;
  (this->GetGameplayRelevantCelestialObjects_MemoizedValue).Data.Data =
       (WeakPtr_L_CelestialObject_G_ *)0x0;
  (this->GetGameplayRelevantCelestialObjects_MemoizedValue).Data.Size = 0;
  (this->GetGameplayRelevantCelestialObjects_MemoizedValue).Data.Capacity = 0;
  (this->GetGameplayRelevantCelestialObjects_MemoizedValue).IsValidData = false;
  (this->GetGravitationallyRelevantCelestialObjects_MemoizedValue).Data._pad_0x0_0 =
       (int)0x91e0b8;
  (this->GetGravitationallyRelevantCelestialObjects_MemoizedValue).Data.Data =
       (WeakPtr_L_CelestialObject_G_ *)0x0;
  (this->GetGravitationallyRelevantCelestialObjects_MemoizedValue).Data.Size = 0;
  (this->GetGravitationallyRelevantCelestialObjects_MemoizedValue).Data.Capacity = 0;
  (this->GetGravitationallyRelevantCelestialObjects_MemoizedValue).IsValidData = false;
  (this->GetAllOrbits_MemoizedValue).Data._pad_0x0_0 =
       (int)0x91e0b8;
  (this->GetAllOrbits_MemoizedValue).Data.Data = (WeakPtr_L_OrbiterInterface_G_ *)0x0;
  (this->GetAllOrbits_MemoizedValue).Data.Size = 0;
  (this->GetAllOrbits_MemoizedValue).Data.Capacity = 0;
  (this->GetAllOrbits_MemoizedValue).IsValidData = false;
  *(undefined4 *)&(*((char *)(this) + 0x6c)) = 0;
  *(undefined1 *)&(this->Session).PlayerAlliance = 0;
  SessionState__SessionState((SessionState *)&(this->Session).CurrentTime_s);
  *(undefined1 *)&(this->AlliedController).Controller = 0;
  pTVar2 = (TacticalAI *)operator_new(8);
  if (pTVar2 == (TacticalAI *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pTVar2->Parent = (TacticalManager *)0x0;
    pTVar2->ControlsAllies = false;
    *(undefined3 *)&(*((char *)(pTVar2) + 0x5)) = 0;
    pvVar3 = (void *)TacticalAI__TacticalAI(pTVar2,(TacticalManager *)this,false);
  }
  if (pvVar3 == (void *)0x0) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
  }
  pvVar6 = pvVar3;
  pRVar4 = util__ReferenceControllerRegistry__Get();
  pRVar5 = util__ReferenceControllerRegistry__Register(pRVar4,pvVar6);
  *(void **)&(*((char *)(this) + 0xa6c)) = pvVar3;
  (this->Notifications)._pad_0x0_0 = (int)pRVar5;
  if (pRVar5 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(pRVar5);
  }
  pTVar2 = (TacticalAI *)operator_new(8);
  if (pTVar2 == (TacticalAI *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pTVar2->Parent = (TacticalManager *)0x0;
    pTVar2->ControlsAllies = false;
    *(undefined3 *)&(*((char *)(pTVar2) + 0x5)) = 0;
    pvVar3 = (void *)TacticalAI__TacticalAI(pTVar2,(TacticalManager *)this,true);
  }
  if (pvVar3 == (void *)0x0) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
  }
  pvVar6 = pvVar3;
  pRVar4 = util__ReferenceControllerRegistry__Get();
  pRVar5 = util__ReferenceControllerRegistry__Register(pRVar4,pvVar6);
  (this->Notifications)._pad_0x0_0 = (int)pvVar3;
  (this->Notifications).NotificationManagerMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 =
       (int)pRVar5;
  if (pRVar5 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(pRVar5);
  }
  DVar1.CallbackFunction =
       0x759120
  ;
  DVar1.Callee = this;
  NotificationManager__NotificationManager((NotificationManager *)
             &(this->Notifications).NotificationManagerMemoizationHandlerInstance.ResetFunctions.
              Size,param_1,DVar1);
  (this->CameraRotateWidget).Pointer = (CameraRotator *)0x0;
  (this->CameraRotateWidget).Controller = (ReferenceController *)0x0;
  (this->CelestialGrid).Pointer = (Skybox *)0x0;
  (this->CelestialGrid).Controller = (ReferenceController *)0x0;
  this[1]._pad_0x0_0 = 0;
  this[1]._pad_0x0_0 = 0;
  this[1]._pad_0x0_0 = 0;
  this[1].StrategicManagerMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 = 0;
  return this;
}


//==== 000075e890 0075e890__scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 0075e890 name=`scalar_deleting_destructor' conv=__thiscall body=347

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall StrategicManager::`scalar deleting destructor'(unsigned int) */

void * __thiscall
StrategicManager___scalar_deleting_destructor_(StrategicManager *this,uint param_1)

{
  ReferenceController *pRVar1;
  pmf_ebe8b20a *ppVar2;
  ActorHandler *this_00;
  bool bVar3;
  ReferenceControllerRegistry *pRVar4;
  void *pvVar5;
  
  pRVar1 = (ReferenceController *)
           this[1].StrategicManagerMemoizationHandlerInstance.ResetFunctions._pad_0x0_0;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  if ((ReferenceController *)this[1]._pad_0x0_0 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)this[1]._pad_0x0_0);
  }
  pRVar1 = (this->CelestialGrid).Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  pRVar1 = (this->CameraRotateWidget).Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  NotificationManager___NotificationManager
            ((NotificationManager *)
             &(this->Notifications).NotificationManagerMemoizationHandlerInstance.ResetFunctions.
              Size);
  pRVar1 = (ReferenceController *)
           (this->Notifications).NotificationManagerMemoizationHandlerInstance.ResetFunctions._pad_0x0_0;
  if (pRVar1 != (ReferenceController *)0x0) {
    bVar3 = util__ReferenceController__ReleaseStrongReference(pRVar1);
    if (bVar3) {
      operator_delete((void *)(this->Notifications)._pad_0x0_0,8);
      pvVar5 = (void *)(this->Notifications)._pad_0x0_0;
      pRVar4 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar4,pvVar5);
      (this->Notifications)._pad_0x0_0 = 0;
    }
  }
  pRVar1 = (ReferenceController *)(this->Notifications)._pad_0x0_0;
  if (pRVar1 != (ReferenceController *)0x0) {
    bVar3 = util__ReferenceController__ReleaseStrongReference(pRVar1);
    if (bVar3) {
      operator_delete(*(void **)&(*((char *)(this) + 0xa6c)),8);
      pvVar5 = *(void **)&(*((char *)(this) + 0xa6c));
      pRVar4 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar4,pvVar5);
      *(undefined4 *)&(*((char *)(this) + 0xa6c)) = 0;
    }
  }
  StrategicManager_SessionState_SessionState__o2((SessionState *)&(this->Session).CurrentTime_s);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
            ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&this->GetAllOrbits_MemoizedValue);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
            ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)
             &this->GetGravitationallyRelevantCelestialObjects_MemoizedValue);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
            ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)
             &this->GetGameplayRelevantCelestialObjects_MemoizedValue);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
            ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&this->GetCelestialObjects_MemoizedValue);
  ppVar2 = (this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Data;
  (this->StrategicManagerMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 =
       (int)0x9194a4;
  if (ppVar2 != (pmf_ebe8b20a *)0x0) {
    operator_delete__(ppVar2);
  }
  (this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Data = (pmf_ebe8b20a *)0x0;
  (this->StrategicManagerMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 =
       (int)0x919488;
  this->_pad_0x0_0 = (int)0x9225c0;
  this_00 = (ActorHandler *)this->_pad_0x0_0;
  if (this_00 != (ActorHandler *)0x0) {
    ActorHandler___ActorHandler(this_00);
    operator_delete(this_00,0x44);
  }
  this->_pad_0x0_0 = 0;
  if ((param_1 & 1) != 0) {
    operator_delete(this,0xb20);
  }
  return this;
}


//==== 000075e9f0 0075e9f0_AnyCapitalShipsOfFactionLeft ====
// decompiled by BatchDecomp @ 0075e9f0 name=AnyCapitalShipsOfFactionLeft conv=__thiscall body=609

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall StrategicManager__AnyCapitalShipsOfFactionLeft(class Faction *)const  */

bool __thiscall
StrategicManager__AnyCapitalShipsOfFactionLeft(StrategicManager *this,Faction *param_1)

{
  Maybe_L_util__Darray_L_util__WeakPtr_L_Body_G___G___G_ *pMVar1;
  Fleet *pFVar2;
  TacticalManager *this_00;
  Body *this_01;
  ReferenceController *this_02;
  bool bVar3;
  undefined1 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_30[16];
  int *local_20;
  Faction *local_1c;
  StrategicManager *local_18;
  undefined1 local_14;
  int local_10;
  pmf_ebe8b20a *local_c;
  Material *local_8;
  
  local_8 = (Material *)(__security_cookie ^ (uint)&stack0xfffffffc);
  bVar3 = false;
  local_1c = param_1;
  local_20 = (int *)0x0;
  local_18 = this;
  if (param_1 == (Faction *)0x0) {
LAB_0075ec2e:
    uVar4 = 0;
  }
  else {
    local_14 = 0;
    piVar5 = (int *)GetAllFleetsOfFaction(this,(Faction *)local_30);
    local_10 = 0;
    local_c = (pmf_ebe8b20a *)0x0;
    local_20 = piVar5;
    iVar6 = (**(code **)(*piVar5 + 0xc))();
    if ((int)local_c < iVar6) {
      do {
        puVar7 = (undefined4 *)(**(code **)*piVar5)(&local_c);
        if (((ReferenceController *)puVar7[1] != (ReferenceController *)0x0) &&
           (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar7[1]),
           !bVar3)) {
          *puVar7 = 0;
        }
        pFVar2 = (Fleet *)*puVar7;
        Fleet__IsCapitalShipFleet_Memoize(pFVar2);
        if ((pFVar2->IsCapitalShipFleet_MemoizedValue).IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        if ((pFVar2->IsCapitalShipFleet_MemoizedValue).Data == false) {
          if (((ReferenceController *)puVar7[1] != (ReferenceController *)0x0) &&
             (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar7[1]),
             !bVar3)) {
            *puVar7 = 0;
          }
          pFVar2 = (Fleet *)*puVar7;
          Fleet__IsStationOnlyFleet_Memoize(pFVar2);
          if ((pFVar2->IsStationOnlyFleet_MemoizedValue).IsValidData == false) {
            util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13
                            ,"IsValid()",(char *)0x0);
            DebugBreak();
          }
          if ((pFVar2->IsStationOnlyFleet_MemoizedValue).Data != false) goto LAB_0075eae3;
        }
        else {
LAB_0075eae3:
          local_10 = local_10 + 1;
        }
        piVar5 = local_20;
        local_c = (pmf_ebe8b20a *)&(*((char *)(local_c) + 0x1));
        iVar6 = (**(code **)(*local_20 + 0xc))();
        this = local_18;
      } while ((int)local_c < iVar6);
    }
    if (local_10 < 1) {
      GetTacticalGame_Memoize(this);
      if (*(char *)&(this->Session).PlayerAlliance == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      this_00 = *(TacticalManager **)&(*((char *)(this) + 0x6c));
      TacticalManager__GetAllBodies_Memoize(this_00);
      pMVar1 = &this_00->GetAllBodies_MemoizedValue;
      if ((this_00->GetAllBodies_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      local_18 = (StrategicManager *)&local_1c;
      local_10 = 0;
      local_c = (pmf_ebe8b20a *)0x0;
      iVar6 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
      if ((int)local_c < iVar6) {
        do {
          piVar5 = (int *)(**(code **)*(int *)&pMVar1->Data)(&local_c);
          if (((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) &&
             (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]),
             !bVar3)) {
            *piVar5 = 0;
          }
          if (*(int *)(*piVar5 + 0x1e0) == local_18->_pad_0x0_0) {
            if (((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) &&
               (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]), !bVar3)) {
              *piVar5 = 0;
            }
            this_01 = (Body *)*piVar5;
            Body__GetCapitalShipComponent_Memoize(this_01);
            if ((this_01->GetCapitalShipComponent_MemoizedValue).IsValidData == false) {
              util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",
                              0x13,"IsValid()",(char *)0x0);
              DebugBreak();
            }
            if ((((this_01->GetCapitalShipComponent_MemoizedValue).Data.Pointer !=
                  (CapitalShipComponent *)0x0) &&
                (this_02 = (this_01->GetCapitalShipComponent_MemoizedValue).Data.Controller,
                this_02 != (ReferenceController *)0x0)) &&
               (bVar3 = util__ReferenceController__IsDataStillValid(this_02), bVar3)) {
              local_10 = local_10 + 1;
            }
          }
          local_c = (pmf_ebe8b20a *)&(*((char *)(local_c) + 0x1));
          iVar6 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
        } while ((int)local_c < iVar6);
      }
      bVar3 = true;
      if (local_10 < 1) goto LAB_0075ec2e;
    }
    uVar4 = 1;
    bVar3 = true;
  }
  if (bVar3) {
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
              (local_30);
  }
  __security_check_cookie((uint)local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar4;
}


//==== 000075ec60 0075ec60_AreAllItinerariesValid ====
// decompiled by BatchDecomp @ 0075ec60 name=AreAllItinerariesValid conv=__thiscall body=236

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall StrategicManager__AreAllItinerariesValid(void)const  */

bool __thiscall StrategicManager__AreAllItinerariesValid(StrategicManager *this)

{
  bool bVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  Itinerary *this_00;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_1c[16];
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar3 = (int *)GetRelevantFleets(this);
  local_c = 0;
  iVar4 = (**(code **)(*piVar3 + 0xc))();
  if (local_c < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)*piVar3)(&local_c);
      if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
         !bVar1)) {
        *puVar5 = 0;
      }
      bVar1 = Fleet__HasMission((Fleet *)*puVar5);
      if (bVar1) {
        if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
           !bVar1)) {
          *puVar5 = 0;
        }
        this_00 = (Itinerary *)Fleet__GetMissionItinerary((Fleet *)*puVar5);
        if (*(char *)&this_00[2].FinalOrbit.Data.Elements.SemiMajorAxis_km == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        bVar1 = Itinerary__IsTraversable(this_00);
        if (!bVar1) {
          uVar2 = 0;
          goto LAB_0075ed2d;
        }
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(*piVar3 + 0xc))();
    } while (local_c < iVar4);
  }
  uVar2 = 1;
LAB_0075ed2d:
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
            (local_1c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}


//==== 000075ed50 0075ed50_CanAccessFleetCustomization ====
// decompiled by BatchDecomp @ 0075ed50 name=CanAccessFleetCustomization conv=__thiscall body=43

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall StrategicManager__CanAccessFleetCustomization(void)const  */

bool __thiscall StrategicManager__CanAccessFleetCustomization(StrategicManager *this)

{
  bool bVar1;
  
  bVar1 = Level__CanCustomizeAnyFleet((Level *)(this->Session).MessagesStored._pad_0x0_0,true);
  if (!bVar1) {
    bVar1 = Level__CanCustomizeAnyFleet((Level *)(this->Session).MessagesStored._pad_0x0_0,false);
    if (!bVar1) {
      return bVar1;
    }
  }
  return true;
}


//==== 000075ed80 0075ed80_CanShiftCameraToCurrentSelection ====
#undef t /* auto(v2): compat 僵尸宏撞成员名 */

// decompiled by BatchDecomp @ 0075ed80 name=CanShiftCameraToCurrentSelection conv=__thiscall body=276

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall StrategicManager__CanShiftCameraToCurrentSelection(void)const  */

bool __thiscall StrategicManager__CanShiftCameraToCurrentSelection(StrategicManager *this)

{
  bool bVar1;
  CameraManager *this_00;
  Vec3_L_double_G_ *pVVar2;
  Vec3_L_double_G_ *pVVar3;
  WorldObject local_2f4;
  Vec3_L_double_G_ local_3c;
  Vec3_L_double_G_ local_24;
  double local_c;
  
  local_2f4.Object.Controller = (this->Session).SelectedObject.Node.LastNode.Parent.Controller;
  local_2f4.Object.Pointer = (Actor *)(this->Session).SelectedObject.Node.LastNode.Parent.Pointer;
  if (local_2f4.Object.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(local_2f4.Object.Controller);
  }
  local_2f4.LPointID = *(int *)&(this->Session).SelectedObject.Node.LastNode.LastState.Position.X;
  ItineraryNode__ItineraryNode(&local_2f4.Node.LastNode,
             (ItineraryNode *)&(this->Session).SelectedObject.Node.LastNode.LastState.Position.Y);
  ItineraryNode__ItineraryNode(&local_2f4.Node.NextNode,
             (ItineraryNode *)&(this->Session).SelectedObject.Node.NextNode.LastState.Position.Y);
  local_2f4.Node.t = *(double *)&(this->EnemyController).Controller;
  bVar1 = WorldObject__IsValid(&local_2f4);
  if (bVar1) {
    pVVar2 = &local_24;
    local_c = /*3e45798ee2308c3a*/1e-08;
    this_00 = Manager__GetCameras((Manager *)this);
    pVVar2 = CameraManager__GetCameraTargetCenter(this_00,pVVar2);
    pVVar3 = GetCurrentSelectionLocation_km(this,&local_3c);
    bVar1 = util__Equals_double(&pVVar3->X,&pVVar2->X,&local_c);
    if (bVar1) {
      bVar1 = util__Equals_double(&pVVar3->Y,&pVVar2->Y,&local_c);
      if (bVar1) {
        bVar1 = util__Equals_double(&pVVar3->Z,&pVVar2->Z,&local_c);
        if (bVar1) goto LAB_0075ee6f;
      }
    }
    bVar1 = true;
  }
  else {
LAB_0075ee6f:
    bVar1 = false;
  }
  NodeMouseOver_NodeMouseOver(&local_2f4.Node);
  if (local_2f4.Object.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_2f4.Object.Controller);
  }
  return bVar1;
}


//==== 000075eea0 0075eea0_CancelRunTurn ====
// decompiled by BatchDecomp @ 0075eea0 name=CancelRunTurn conv=__thiscall body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__CancelRunTurn(void) */

void __thiscall StrategicManager__CancelRunTurn(StrategicManager *this)

{
  (this->Session).TurnStep_s = 0.0;
  return;
}


//==== 000075eeb0 0075eeb0_CancelTacticalGame ====
#undef t /* auto(v2): compat 僵尸宏撞成员名 */

// decompiled by BatchDecomp @ 0075eeb0 name=CancelTacticalGame conv=__thiscall body=466

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__CancelTacticalGame(void) */

void __thiscall StrategicManager__CancelTacticalGame(StrategicManager *this)

{
  undefined1 stack0xfffffbe0[0x240];
  undefined1 stack0xfffffbd8[0x240];
  ReferenceController *pRVar1;
  Fleet *pFVar2;
  ItineraryNode IVar3;
  bool bVar4;
  CameraManager *this_00;
  int *piVar5;
  undefined4 uVar6;
  ReferenceController *pRVar7;
  undefined4 uVar8;
  ReferenceController *pRVar9;
  undefined4 uVar10;
  ItineraryNode IStack_578;
  ReferenceController *pRStack_424;
  undefined1 auVar11[24];
  undefined1 auVar12[24];
  undefined1 auVar13[24];
  undefined1 auVar14[24];
  undefined1 auVar15[24];
  undefined1 auVar16[32];
  undefined1 auVar17[16];
  undefined1 auVar18[16];
  undefined1 auVar19[16];
  undefined1 in_stack_fffffbe0[328];
  NodeMouseOver local_2b4;
  ReferenceController *local_8;
  
  this_00 = Manager__GetCameras((Manager *)this);
  CameraManager__PopCameraState(this_00);
  (**(code **)(*(int *)((char *)&(this->Session) + 0x18c) + 0x10))();
  piVar5 = (int *)GetSelectedFleet(this);
  if (((*piVar5 == 0) || ((ReferenceController *)piVar5[1] == (ReferenceController *)0x0)) ||
     (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]), !bVar4)
     ) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (local_8 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_8);
  }
  if (bVar4) {
    uVar6 = 0;
    uVar8 = 0;
    uVar10 = 0;
    ItineraryNode__ItineraryNode(&IStack_578);
    ItineraryNode__ItineraryNode((ItineraryNode *)&stack0xfffffbd8);
    SelectObject(this,uVar6,uVar8,uVar10);
  }
  pRVar1 = (this->Session).ReferenceObject.Node.LastNode.Parent.Controller;
  pFVar2 = (this->Session).ReferenceObject.Node.LastNode.Parent.Pointer;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar1);
  }
  ItineraryNode__ItineraryNode(&local_2b4.LastNode,
             (ItineraryNode *)&(this->Session).ReferenceObject.Node.LastNode.LastState.Position.Y);
  (*(undefined1 *)&(uVar6)) = true;
  (*(undefined3 *)((char *)&(uVar6) + 1)) = 0x75ef;
  ItineraryNode__ItineraryNode(&local_2b4.NextNode,
             (ItineraryNode *)&(this->Session).ReferenceObject.Node.NextNode.LastState.Position.Y);
  local_2b4.t = (this->Session).HoveredItineraryNode.Value1.LastState.Position.X;
  if (((pFVar2 == (Fleet *)0x0) || (pRVar1 == (ReferenceController *)0x0)) ||
     (bVar4 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar4)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  uVar8 = 0x75efdd;
  NodeMouseOver_NodeMouseOver(&local_2b4);
  if (pRVar1 != (ReferenceController *)0x0) {
    uVar8 = 0x75efec;
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  if (bVar4) {
    pRVar1 = *(ReferenceController **)&(*((char *)&((this->Session).ReferenceObject) + 0xc));
    pRVar7 = (ReferenceController *)(this->Session).ReferenceObject.LPointID;
    pRVar9 = pRVar1;
    local_8 = pRVar7;
    if (pRVar1 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar1);
      pRVar7 = local_8;
      util__ReferenceController__AddWeakReference(pRVar1);
    }
    uVar10 = 0;
    ItineraryNode__ItineraryNode(&IStack_578);
    ItineraryNode__ItineraryNode((ItineraryNode *)&stack0xfffffbd8);
    (*(undefined1 *)&(uVar6)) = false;
    (*(undefined3 *)((char *)&(uVar6) + 1)) = 0;
    uVar8 = 0;
    if (pRVar1 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(pRVar1);
    }
    SetReferenceObject(this,pRVar7,pRVar9,uVar10);
  }
  pRStack_424 = (ReferenceController *)0x75f069;
  ItineraryNode__ItineraryNode((ItineraryNode *)&stack0xfffffbe0);
  pRStack_424 = (ReferenceController *)0x75f070;
  IVar3.CachedNearestOrbitParametricCoord.IsValidData = SUB41(uVar6,0);
  (*(undefined3 *)((char *)&(IVar3.CachedNearestOrbitParametricCoord) + 9)) = SUB43(uVar6,1);
  memcpy(auVar13, (char *)in_stack_fffffbe0 + 120, 24);
  memcpy(auVar14, (char *)in_stack_fffffbe0 + 144, 24);
  memcpy(auVar15, (char *)in_stack_fffffbe0 + 176, 24);
  memcpy(auVar16, (char *)in_stack_fffffbe0 + 200, 32);
  memcpy(auVar17, (char *)in_stack_fffffbe0 + 264, 16);
  memcpy(auVar18, (char *)in_stack_fffffbe0 + 280, 16);
  memcpy(auVar19, (char *)in_stack_fffffbe0 + 304, 16);
  IVar3.Parent.Pointer = (Fleet *)(int)(*(undefined8 *)(in_stack_fffffbe0));
  IVar3.Parent.Controller = (ReferenceController *)(int)((ulonglong)(*(undefined8 *)(in_stack_fffffbe0)) >> 0x20)
  ;
  memcpy(auVar11, (char *)in_stack_fffffbe0 + 8, 24);
  memcpy(auVar12, (char *)in_stack_fffffbe0 + 32, 24);
  IVar3.LastState.Position.X = (double)(*(undefined8 *)&(auVar11));
  IVar3.LastState.Position.Y = (double)(*(undefined8 *)((char *)&(auVar11) + 8));
  IVar3.LastState.Position.Z = (double)(*(undefined8 *)((char *)&(auVar11) + 16));
  IVar3.LastState.Velocity.X = (double)(*(undefined8 *)&(auVar12));
  IVar3.LastState.Velocity.Y = (double)(*(undefined8 *)((char *)&(auVar12) + 8));
  IVar3.LastState.Velocity.Z = (double)(*(undefined8 *)((char *)&(auVar12) + 16));
  IVar3.LastTimeSinceJ2000_s = (double)(*(undefined8 *)((char *)(in_stack_fffffbe0) + 56));
  memcpy(auVar11, (char *)in_stack_fffffbe0 + 64, 24);
  memcpy(auVar12, (char *)in_stack_fffffbe0 + 88, 24);
  IVar3.State.Position.X = (double)(*(undefined8 *)&(auVar11));
  IVar3.State.Position.Y = (double)(*(undefined8 *)((char *)&(auVar11) + 8));
  IVar3.State.Position.Z = (double)(*(undefined8 *)((char *)&(auVar11) + 16));
  IVar3.State.Velocity.X = (double)(*(undefined8 *)&(auVar12));
  IVar3.State.Velocity.Y = (double)(*(undefined8 *)((char *)&(auVar12) + 8));
  IVar3.State.Velocity.Z = (double)(*(undefined8 *)((char *)&(auVar12) + 16));
  IVar3.TimeSinceJ2000_s = (double)(*(undefined8 *)((char *)(in_stack_fffffbe0) + 112));
  IVar3.ThrusterBurn_km__s.X = (double)(*(undefined8 *)&(auVar13));
  IVar3.ThrusterBurn_km__s.Y = (double)(*(undefined8 *)((char *)&(auVar13) + 8));
  IVar3.ThrusterBurn_km__s.Z = (double)(*(undefined8 *)((char *)&(auVar13) + 16));
  IVar3.ResidualThrusterBurn_km__s.X = (double)(*(undefined8 *)&(auVar14));
  IVar3.ResidualThrusterBurn_km__s.Y = (double)(*(undefined8 *)((char *)&(auVar14) + 8));
  IVar3.ResidualThrusterBurn_km__s.Z = (double)(*(undefined8 *)((char *)&(auVar14) + 16));
  IVar3.NodeType = (*(undefined4 *)((char *)(in_stack_fffffbe0) + 168));
  (*(undefined4 *)((char *)&(IVar3) + 172)) = (*(undefined4 *)((char *)(in_stack_fffffbe0) + 172));
  IVar3.CachedReferenceShiftedPosition_km.X = (double)(*(undefined8 *)&(auVar15));
  IVar3.CachedReferenceShiftedPosition_km.Y = (double)(*(undefined8 *)((char *)&(auVar15) + 8));
  IVar3.CachedReferenceShiftedPosition_km.Z = (double)(*(undefined8 *)((char *)&(auVar15) + 16));
  memcpy(&(auVar11), (char *)auVar16 + 0, 24);
  IVar3.CachedGravityBodyReferenceShiftedPosition_km.Data.X = (double)(*(undefined8 *)&(auVar11));
  IVar3.CachedGravityBodyReferenceShiftedPosition_km.Data.Y = (double)(*(undefined8 *)((char *)&(auVar11) + 8));
  IVar3.CachedGravityBodyReferenceShiftedPosition_km.Data.Z = (double)(*(undefined8 *)((char *)&(auVar11) + 16));
  IVar3.CachedGravityBodyReferenceShiftedPosition_km.IsValidData = (bool)auVar16[0x18];
  (*(undefined7 *)((char *)&(IVar3.CachedGravityBodyReferenceShiftedPosition_km) + 25)) = (*(undefined7 *)((char *)&(auVar16) + 25));
  IVar3.CachedTotalSpentDeltaV_km__s = (double)(*(undefined8 *)((char *)(in_stack_fffffbe0) + 232));
  IVar3.CachedGravityBody.Pointer = (CelestialObject *)(int)(*(undefined8 *)((char *)(in_stack_fffffbe0) + 240));
  IVar3.CachedGravityBody.Controller =
       (ReferenceController *)(int)((ulonglong)(*(undefined8 *)((char *)(in_stack_fffffbe0) + 240)) >> 0x20);
  IVar3.CachedNearestBody.Pointer = (CelestialObject *)(int)(*(undefined8 *)((char *)(in_stack_fffffbe0) + 248));
  IVar3.CachedNearestBody.Controller =
       (ReferenceController *)(int)((ulonglong)(*(undefined8 *)((char *)(in_stack_fffffbe0) + 248)) >> 0x20);
  IVar3.CachedNearestFleet.Pointer = (Fleet *)(int)(*(undefined8 *)((char *)(in_stack_fffffbe0) + 256));
  IVar3.CachedNearestFleet.Controller =
       (ReferenceController *)(int)((ulonglong)(*(undefined8 *)((char *)(in_stack_fffffbe0) + 256)) >> 0x20);
  IVar3.CachedNearestFleetDistance_km.Data = (double)(*(undefined8 *)&(auVar17));
  IVar3.CachedNearestFleetDistance_km.IsValidData = (bool)auVar17[8];
  (*(undefined7 *)((char *)&(IVar3.CachedNearestFleetDistance_km) + 9)) = (*(undefined7 *)((char *)&(auVar17) + 9));
  IVar3.CachedNearestFleetParametricCoord.Data = (double)(*(undefined8 *)&(auVar18));
  IVar3.CachedNearestFleetParametricCoord.IsValidData = (bool)auVar18[8];
  (*(undefined7 *)((char *)&(IVar3.CachedNearestFleetParametricCoord) + 9)) = (*(undefined7 *)((char *)&(auVar18) + 9));
  IVar3.CachedNearestOrbiter.Pointer = (OrbiterInterface *)(int)(*(undefined8 *)((char *)(in_stack_fffffbe0) + 296));
  IVar3.CachedNearestOrbiter.Controller =
       (ReferenceController *)(int)((ulonglong)(*(undefined8 *)((char *)(in_stack_fffffbe0) + 296)) >> 0x20);
  IVar3.CachedNearestOrbitDistance_km.Data = (double)(*(undefined8 *)&(auVar19));
  IVar3.CachedNearestOrbitDistance_km.IsValidData = (bool)auVar19[8];
  (*(undefined7 *)((char *)&(IVar3.CachedNearestOrbitDistance_km) + 9)) = (*(undefined7 *)((char *)&(auVar19) + 9));
  IVar3.CachedNearestOrbitParametricCoord.Data = (double)(*(undefined8 *)((char *)(in_stack_fffffbe0) + 320));
  (*(undefined4 *)((char *)&(IVar3.CachedNearestOrbitParametricCoord) + 12)) = uVar8;
  SelectItineraryNode(this,IVar3);
  (this->Session).TurnStep_s = 0.0;
  return;
}


//==== 000075f090 0075f090_CheckForNewRecord ====
// decompiled by BatchDecomp @ 0075f090 name=CheckForNewRecord conv=__thiscall body=222

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__CheckForNewRecord(void) */

void __thiscall StrategicManager__CheckForNewRecord(StrategicManager *this)

{
  undefined1 stack0xfffffbd8[0x240];
  undefined1 stack0xfffffbe0[0x240];
  Level *pLVar1;
  bool bVar2;
  GameManager *pGVar3;
  DataParser *pDVar4;
  LevelRecord *pLVar5;
  MainManager *pMVar6;
  MetagameManager *this_00;
  undefined1 uVar7;
  LevelRecord local_78;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pLVar1 = (Level *)(this->Session).MessagesStored._pad_0x0_0;
  pGVar3 = Manager__GetParent((Manager *)this);
  pDVar4 = GameManager__GetDataManager(pGVar3);
  bVar2 = Level__IsPartOfCampaign(pLVar1,pDVar4);
  if (bVar2) {
    bVar2 = PlayerIsVictorious(this);
    if (bVar2) {
      GetCurrentLevelRecord(this,&local_78);
      pLVar1 = (Level *)(this->Session).MessagesStored._pad_0x0_0;
      local_78.IsADeveloperRecord = DebugChangeDevRecords;
      uVar7 = DebugChangeDevRecords;
      pGVar3 = Manager__GetParent((Manager *)this);
      pDVar4 = GameManager__GetDataManager(pGVar3);
      pLVar5 = LevelRecord__GetLevelRecord(pLVar1,pDVar4,(bool)uVar7);
      LevelRecord__UpdateRecord(&local_78,pLVar5);
      pGVar3 = Manager__GetParent((Manager *)this);
      pMVar6 = GameManager__GetManager_class_MainManager(pGVar3);
      this_00 = MainManager__GetMetagame(pMVar6);
      MetagameManager__SaveAllRecords(this_00);
      pGVar3 = Manager__GetParent((Manager *)this);
      pMVar6 = GameManager__GetManager_class_MainManager(pGVar3);
      MainManager__TriggerAchievements(pMVar6);
      local_78._pad_0x0_0 = (int)0x919980;
      if ((void *)local_78._pad_0x0_0 != (void *)0x0) {
        operator_delete__((void *)local_78._pad_0x0_0);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000075ff70 0075ff70_ClearGameState ====
// decompiled by BatchDecomp @ 0075ff70 name=ClearGameState conv=__thiscall body=248

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: void __thiscall StrategicManager_ClearGameState(void) */

void __thiscall StrategicManager_ClearGameState(StrategicManager *this)

{
  ReferenceController *pRVar1;
  CameraManager *this_00;
  SessionState *pSVar2;
  ActorHandler *this_01;
  AudioManager *pAVar3;
  SessionState local_9f4;
  
  GetTacticalGame_Memoize(this);
  if (*(char *)&(this->Session).PlayerAlliance == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  TacticalManager__DestroySession(*(TacticalManager **)&(*((char *)(this) + 0x6c)));
  CheckForNewRecord(this);
  this_00 = Manager__GetCameras((Manager *)this);
  CameraManager__PopCameraState(this_00);
  pSVar2 = (SessionState *)SessionState__SessionState(&local_9f4);
  StrategicManager_SessionState_operator((SessionState *)&(this->Session).CurrentTime_s,pSVar2);
  StrategicManager_SessionState_SessionState__o2(&local_9f4);
  this_01 = (ActorHandler *)
            util__Darray_enum_CrewDepartment__Type___Num((Darray_L_enum_CrewDepartment__Type_G_ *)this);
  ActorHandler__ResetAllActors(this_01);
  NotificationManager__Reset((NotificationManager *)
             &(this->Notifications).NotificationManagerMemoizationHandlerInstance.ResetFunctions.
              Size);
  pRVar1 = (this->CameraRotateWidget).Controller;
  (this->CameraRotateWidget).Pointer = (CameraRotator *)0x0;
  (this->CameraRotateWidget).Controller = (ReferenceController *)0x0;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  pRVar1 = (this->CelestialGrid).Controller;
  (this->CelestialGrid).Pointer = (Skybox *)0x0;
  (this->CelestialGrid).Controller = (ReferenceController *)0x0;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  (**(code **)(*(int *)this + 0x78))();
  pAVar3 = GameManager__GetAudio((GameManager *)this->_pad_0x0_0);
  AudioManager__StopAllNonUISounds(pAVar3);
  pAVar3 = GameManager__GetAudio((GameManager *)this->_pad_0x0_0);
  AudioManager__StopAllNonMusicLoopingSounds(pAVar3);
  return;
}


//==== 0000760090 00760090_CloseEndCredits ====
// decompiled by BatchDecomp @ 00760090 name=CloseEndCredits conv=__thiscall body=8

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__CloseEndCredits(void) */

void __thiscall StrategicManager__CloseEndCredits(StrategicManager *this)

{
  (this->Session).RequiresLoading = true;
  return;
}


//==== 00007600a0 007600a0_CorrectReferenceFrame ====
#undef t /* auto(v2): compat 僵尸宏撞成员名 */

// decompiled by BatchDecomp @ 007600a0 name=CorrectReferenceFrame conv=__thiscall body=623

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__CorrectReferenceFrame(void) */

void __thiscall StrategicManager__CorrectReferenceFrame(StrategicManager *this)

{
  undefined1 stack0xfffffa70[0x240];
  static volatile int cde_l2_007600a0__thread_safe_static_guard_0__ = -1;
  static undefined4 cde_l2_007600a0_ID;
  ReferenceController *pRVar1;
  ulong uVar2;
  bool bVar3;
  WorldObject *pWVar4;
  ulong uVar5;
  ReferenceController *pRVar6;
  Fleet *pFVar7;
  undefined4 uStackY_2e8;
  int local_2e4;
  WorldObject local_2cc;
  undefined8 local_14;
  Fleet *local_c;
  char local_5;
  
  local_14 = 0;
  GetSelectedFleet(this);
  local_2cc.Object.Controller = (this->Session).ReferenceObject.Node.LastNode.Parent.Controller;
  local_2cc.Object.Pointer = (Actor *)(this->Session).ReferenceObject.Node.LastNode.Parent.Pointer;
  if (local_2cc.Object.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(local_2cc.Object.Controller);
  }
  local_2cc.LPointID = *(int *)&(this->Session).ReferenceObject.Node.LastNode.LastState.Position.X;
  ItineraryNode__ItineraryNode(&local_2cc.Node.LastNode,
             (ItineraryNode *)&(this->Session).ReferenceObject.Node.LastNode.LastState.Position.Y);
  ItineraryNode__ItineraryNode(&local_2cc.Node.NextNode,
             (ItineraryNode *)&(this->Session).ReferenceObject.Node.NextNode.LastState.Position.Y);
  local_2cc.Node.t = (this->Session).HoveredItineraryNode.Value1.LastState.Position.X;
  bVar3 = WorldObject__IsValid(&local_2cc);
  NodeMouseOver_NodeMouseOver(&local_2cc.Node);
  if (local_2cc.Object.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_2cc.Object.Controller);
  }
  pRVar6 = ((slice_view *)&local_14)->_4_4_;
  if (!bVar3) {
    local_2e4 = (this->Session).ReferenceObject.LPointID;
    pRVar1 = *(ReferenceController **)&(*((char *)&((this->Session).ReferenceObject) + 0xc));
    if (pRVar1 != (ReferenceController *)0x0) {
      (*(undefined1 *)&(uStackY_2e8)) = true;
      (*(undefined3 *)((char *)&(uStackY_2e8) + 1)) = 0x7601;
      util__ReferenceController__AddWeakReference(pRVar1);
    }
    (*(undefined1 *)&(uStackY_2e8)) = true;
    (*(undefined3 *)((char *)&(uStackY_2e8) + 1)) = 0x7601;
    SetReferenceCelestial(this);
    goto LAB_007602c2;
  }
  pWVar4 = GetReferenceObject(this,&local_2cc);
  pRVar1 = (pWVar4->Object).Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    bVar3 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (!bVar3) {
      (pWVar4->Object).Pointer = (Actor *)0x0;
    }
  }
  local_c = (Fleet *)(pWVar4->Object).Pointer;
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
      cde_l2_007600a0__thread_safe_static_guard_0__) {
    _Init_thread_header(&cde_l2_007600a0__thread_safe_static_guard_0__);
    if (cde_l2_007600a0__thread_safe_static_guard_0__ == -1) {
      cde_l2_007600a0_ID =
           util__GetHash("Fleet");
      local_2e4 = 0x760307;
      _Init_thread_footer(&cde_l2_007600a0__thread_safe_static_guard_0__);
    }
  }
  uVar2 = cde_l2_007600a0_ID;
  uVar5 = (**(code **)*(int *)local_c)();
  pFVar7 = (Fleet *)local_14;
  if (((uVar5 == uVar2) && ((Fleet *)local_14 != (Fleet *)0x0)) &&
     (pRVar6 != (ReferenceController *)0x0)) {
    bVar3 = util__ReferenceController__IsDataStillValid(pRVar6);
    if (!bVar3) goto LAB_0076020a;
    bVar3 = util__ReferenceController__IsDataStillValid(pRVar6);
    if (!bVar3) {
      pFVar7 = (Fleet *)0x0;
    }
    bVar3 = Fleet__HasMission(pFVar7);
    local_5 = '\x01';
    if (!bVar3) goto LAB_0076020a;
  }
  else {
LAB_0076020a:
    local_5 = '\0';
  }
  NodeMouseOver_NodeMouseOver(&local_2cc.Node);
  if (local_2cc.Object.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_2cc.Object.Controller);
  }
  if (local_5 != '\0') {
    pWVar4 = GetReferenceObject(this,&local_2cc);
    pRVar6 = (pWVar4->Object).Controller;
    local_c = (Fleet *)(pWVar4->Object).Pointer;
    if (pRVar6 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar6);
    }
    NodeMouseOver_NodeMouseOver(&local_2cc.Node);
    if (local_2cc.Object.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_2cc.Object.Controller);
    }
    if ((((slice_view *)&local_14)->_4_4_ == pRVar6) && (pFVar7 == local_c)) {
      pFVar7 = local_c;
      if (pRVar6 != (ReferenceController *)0x0) {
        bVar3 = util__ReferenceController__IsDataStillValid(pRVar6);
        pFVar7 = local_c;
        if (!bVar3) {
          pFVar7 = (Fleet *)0x0;
        }
      }
      Fleet__GetBodyWeAreInHillSphereOf(pFVar7);
      WorldObject__WorldObject((WorldObject *)&stack0xfffffa70);
      SetReferenceObject(this);
    }
    if (pRVar6 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(pRVar6);
    }
    pRVar6 = ((slice_view *)&local_14)->_4_4_;
  }
LAB_007602c2:
  if (pRVar6 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar6);
  }
  return;
}


//==== 0000760310 00760310_CustomVictoryConditionsAreFailed ====
// decompiled by BatchDecomp @ 00760310 name=CustomVictoryConditionsAreFailed conv=__thiscall body=348

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall StrategicManager__CustomVictoryConditionsAreFailed(void)const  */

bool __thiscall StrategicManager__CustomVictoryConditionsAreFailed(StrategicManager *this)

{
  undefined1 stack0xfffffa70[0x240];
  WeakPtr_L_SpacecraftComponent_G_ **ppWVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 local_20;
  int *piStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (*(int *)&(this->Session).CurrentTime_s == 0) {
    uVar2 = 0;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return (bool)uVar2;
  }
  puVar8 = &local_20;
  local_20 = 0;
  piStack_1c = (int *)0x0;
  iStack_18 = 0;
  uStack_14 = 0;
  GetAllShips(this);
  ppWVar1 = &(this->Session).ShipsWithStartFlag.Data;
  iVar4 = (*(code *)(this->Session).ShipsWithStartFlag.Data[1].Controller)(puVar8);
  if (0 < iVar4) {
    local_10 = 0;
    iVar4 = (*(code *)(*ppWVar1)[1].Controller)();
    if (local_10 < iVar4) {
LAB_00760380:
      piVar5 = (int *)(*(code *)(*ppWVar1)->Pointer)(&local_10);
      local_c = 0;
      iVar4 = (**(code **)(*piVar5 + 0xc))();
      if (local_c < iVar4) {
        do {
          piVar6 = (int *)(**(code **)*piVar5)(&local_c);
          if ((*piVar6 != 0) && ((ReferenceController *)piVar6[1] != (ReferenceController *)0x0)) {
            bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar6[1]);
            if (bVar3) {
              if ((ReferenceController *)piVar6[1] != (ReferenceController *)0x0) {
                bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar6[1]);
                if (!bVar3) {
                  *piVar6 = 0;
                }
              }
              iVar4 = *piVar6;
              if (*(ReferenceController **)(iVar4 + 8) != (ReferenceController *)0x0) {
                bVar3 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar4 + 8));
                if (!bVar3) {
                  *(undefined4 *)(iVar4 + 4) = 0;
                }
              }
              if (*(int *)(*(int *)(iVar4 + 4) + 0x1e0) != 0) {
                if (piStack_1c != piStack_1c + iStack_18 * 2) {
                  piVar7 = piStack_1c;
                  do {
                    if ((piVar6[1] == piVar7[1]) && (*piVar6 == *piVar7)) {
                      local_10 = local_10 + 1;
                      iVar4 = (*(code *)(*ppWVar1)[1].Controller)();
                      if (iVar4 <= local_10) goto LAB_0076044f;
                      goto LAB_00760380;
                    }
                    piVar7 = piVar7 + 2;
                  } while (piVar7 != piStack_1c + iStack_18 * 2);
                }
              }
            }
          }
          local_c = local_c + 1;
          iVar4 = (**(code **)(*piVar5 + 0xc))();
        } while (local_c < iVar4);
      }
      uVar2 = 1;
      goto LAB_00760451;
    }
  }
LAB_0076044f:
  uVar2 = 0;
LAB_00760451:
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_20);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}


//==== 0000760470 00760470_CustomVictoryConditionsAreMet ====
extern undefined4 FUN_00754fe0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 00760470 name=CustomVictoryConditionsAreMet conv=__thiscall body=1377

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall StrategicManager__CustomVictoryConditionsAreMet(void)const  */

bool __thiscall StrategicManager__CustomVictoryConditionsAreMet(StrategicManager *this)

{
  ReferenceController *pRVar1;
  CraftInstance *this_00;
  ReferenceController *this_01;
  undefined1 uVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  StrategicManager *pSVar9;
  int *piVar10;
  int *piVar11;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_54[12];
  ReferenceController *local_48;
  undefined **local_44;
  undefined1 local_40[20];
  StrategicManager *local_2c;
  byte local_25;
  StrategicManager *local_24;
  char *local_20;
  int *piStack_1c;
  int iStack_18;
  int iStack_14;
  char local_10;
  char *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar5 = false;
  local_48 = (ReferenceController *)0x0;
  local_2c = this;
  if (*(int *)&(this->Session).CurrentTime_s == 0) {
    uVar2 = 1;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return (bool)uVar2;
  }
  iVar6 = (this->Session).MessagesStored._pad_0x0_0;
  local_25 = 1;
  local_44 = 0x919980;
  util__Str_char___Str_char((Str_L_char_G_ *)local_40,(Str_L_char_G_ *)(iVar6 + 0xa0));
  local_10 = *(char *)(iVar6 + 0xb0);
  if ((char *)((slice_view *)&local_40)->_0_4_ != (char *)0x0) {
    operator_delete__((void *)((slice_view *)&local_40)->_0_4_);
  }
  if (local_10 != '\0') {
    iVar6 = GetVictoryConditions(this);
    if (*(char *)(iVar6 + 0x14) == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    local_10 = *(char *)(iVar6 + 0x10);
    local_44 = 0x919980;
    if ((char *)((slice_view *)&local_40)->_0_4_ != (char *)0x0) {
      operator_delete__((void *)((slice_view *)&local_40)->_0_4_);
    }
    if (local_10 != '\0') {
      local_10 = '\0';
      local_20 = (char *)0x0;
      piStack_1c = (int *)0x0;
      iStack_18 = 0;
      iStack_14 = 0;
      piVar7 = (int *)GetRelevantFleets(this);
      local_20 = (char *)0x0;
      piStack_1c = (int *)0x0;
      iStack_18 = 0;
      iStack_14 = 0;
      iVar6 = (**(code **)(*piVar7 + 0xc))();
      util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent
                ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_20,iVar6);
      local_c = (char *)0x0;
      iVar6 = (**(code **)(*piVar7 + 0xc))();
      if ((int)local_c < iVar6) {
        do {
          puVar8 = (undefined4 *)(**(code **)*piVar7)(&local_c);
          if (((ReferenceController *)puVar8[1] != (ReferenceController *)0x0) &&
             (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar8[1]),
             !bVar3)) {
            *puVar8 = 0;
          }
          Fleet__GetSpacecrafts((Fleet *)*puVar8);
          util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____operator__o2
                    ((Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_20,local_54);
          util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent
                    ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_54);
          local_c = local_c + 1;
          iVar6 = (**(code **)(*piVar7 + 0xc))();
        } while ((int)local_c < iVar6);
      }
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
                ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)(local_40 + 4));
      util__Join_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)(local_40 + 4),
                          (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
                          &(local_2c->Session).ShipsWithEndFlag.Data); pSVar9 = (StrategicManager *)((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)(local_40 + 4));
      local_c = (char *)0x0;
      local_24 = pSVar9;
      iVar6 = (**(code **)(*(int *)pSVar9 + 0xc))();
      if ((int)local_c < iVar6) {
        do {
          piVar7 = (int *)(**(code **)*(int *)pSVar9)(&local_c);
          if ((((*piVar7 != 0) && ((ReferenceController *)piVar7[1] != (ReferenceController *)0x0))
              && (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar7[1]), bVar3)) &&
             (piStack_1c != piStack_1c + iStack_18 * 2)) {
            pRVar1 = (ReferenceController *)piVar7[1];
            piVar11 = piStack_1c;
            do {
              if ((pRVar1 == (ReferenceController *)piVar11[1]) && (*piVar7 == *piVar11)) {
                bVar5 = true;
                if ((pRVar1 != (ReferenceController *)0x0) &&
                   (bVar3 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar3)) {
                  *piVar7 = 0;
                }
                puVar8 = (undefined4 *)SpacecraftComponent__GetCraft((SpacecraftComponent *)*piVar7)
                ;
                if (((ReferenceController *)puVar8[1] != (ReferenceController *)0x0) &&
                   (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar8[1]), !bVar3)) {
                  *puVar8 = 0;
                }
                this_00 = (CraftInstance *)*puVar8;
                CraftInstance__HasDeltaVLeft_Memoize(this_00);
                if ((*((char *)(this_00) + 0x15b)) == '\0') {
                  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h"
                                  ,0x13,"IsValid()",(char *)0x0);
                  DebugBreak();
                }
                local_25 = 1;
                if ((*((char *)(this_00) + 0x15a)) != '\0') goto LAB_007606cf;
                break;
              }
              piVar11 = piVar11 + 2;
            } while (piVar11 != piStack_1c + iStack_18 * 2);
          }
          local_25 = 0;
LAB_007606cf:
          if ((bVar5) && (bVar5 = false, local_48 != (ReferenceController *)0x0)) {
            util__ReferenceController__ReleaseWeakReference(local_48);
          }
          pSVar9 = local_24;
          if (local_25 == 0) {
            local_25 = 0;
            goto LAB_00760707;
          }
          local_c = local_c + 1;
          iVar6 = (**(code **)(*(int *)local_24 + 0xc))();
        } while ((int)local_c < iVar6);
      }
      local_25 = 1;
LAB_00760707:
      util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent
                ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)(local_40 + 4));
      util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent
                ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_20);
      this = local_2c;
    }
    iVar6 = GetVictoryConditions(this);
    if (*(char *)(iVar6 + 0x14) == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    cVar4 = *(char *)(iVar6 + 0x11);
    local_44 = 0x919980;
    if ((char *)((slice_view *)&local_40)->_0_4_ != (char *)0x0) {
      operator_delete__((void *)((slice_view *)&local_40)->_0_4_);
    }
    if (cVar4 != '\0') {
      local_20 = (char *)0x0;
      piStack_1c = (int *)0x0;
      iStack_18 = 0;
      iStack_14 = 0;
      GetAllFleetsOfFaction(this,(Faction *)&local_20);
      cVar4 = FUN_00754fe0(&local_20,this);
      local_25 = local_25 & -(cVar4 != '\0');
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
                ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_20);
    }
    iVar6 = GetVictoryConditions(this);
    if (*(char *)(iVar6 + 0x14) == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    cVar4 = *(char *)(iVar6 + 0x12);
    local_44 = 0x919980;
    if ((char *)((slice_view *)&local_40)->_0_4_ != (char *)0x0) {
      operator_delete__((void *)((slice_view *)&local_40)->_0_4_);
    }
    if (cVar4 != '\0') {
      local_20 = (char *)0x0;
      piStack_1c = (int *)0x0;
      iStack_18 = 0;
      iStack_14 = 0;
      local_24 = this;
      pSVar9 = (StrategicManager *)GetAllShipsOfFaction(this,(Faction *)(local_40 + 4));
      local_20 = (char *)0x0;
      piStack_1c = (int *)0x0;
      iStack_18 = 0;
      iStack_14 = 0;
      local_2c = pSVar9;
      iVar6 = (**(code **)(*(int *)pSVar9 + 0xc))();
      util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent
                ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_20,iVar6);
      local_c = (char *)0x0;
      iVar6 = (**(code **)(*(int *)pSVar9 + 0xc))();
      if ((int)local_c < iVar6) {
LAB_00760834:
        piVar10 = (int *)(**(code **)*(int *)pSVar9)(&local_c);
        iVar6 = iStack_18;
        piVar11 = *(int **)((int)&(local_24->Session).RecordDeltaVBurned_km__s + 4);
        piVar7 = piVar11 + (local_24->Session).InitialCapitalShipsAlive * 2;
        if (piVar11 != piVar7) {
          do {
            if ((piVar10[1] == piVar11[1]) && (*piVar10 == *piVar11)) goto LAB_007608ad;
            piVar11 = piVar11 + 2;
            pSVar9 = local_2c;
          } while (piVar11 != piVar7);
        }
        piVar11 = (int *)(local_24->Session).ShipsWithEndFlag.Size;
        piVar7 = piVar11 + (local_24->Session).ShipsWithEndFlag.Capacity * 2;
        if (piVar11 != piVar7) {
          do {
            if ((piVar10[1] == piVar11[1]) && (*piVar10 == *piVar11)) goto LAB_007608ad;
            piVar11 = piVar11 + 2;
          } while (piVar11 != piVar7);
        }
        goto LAB_007608fe;
      }
LAB_00760911:
      util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent
                ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)(local_40 + 4));
      local_c = (char *)0x0;
      iVar6 = (**(code **)(local_20 + 0xc))();
      if ((int)local_c < iVar6) {
        do {
          puVar8 = (undefined4 *)(**(code **)local_20)(&local_c);
          if (((ReferenceController *)puVar8[1] != (ReferenceController *)0x0) &&
             (bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar8[1]),
             !bVar5)) {
            *puVar8 = 0;
          }
          puVar8 = (undefined4 *)SpacecraftComponent__GetCraft((SpacecraftComponent *)*puVar8);
          if (((ReferenceController *)puVar8[1] != (ReferenceController *)0x0) &&
             (bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar8[1]),
             !bVar5)) {
            *puVar8 = 0;
          }
          bVar5 = CraftInstance__IsCombatDisarmed((CraftInstance *)*puVar8);
          if (local_48 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(local_48);
          }
          if (!bVar5) {
            bVar5 = false;
            goto LAB_007609a3;
          }
          local_c = local_c + 1;
          iVar6 = (**(code **)(local_20 + 0xc))();
        } while ((int)local_c < iVar6);
      }
      bVar5 = true;
LAB_007609a3:
      if ((iStack_18 == 0) || (!bVar5)) {
        local_25 = 0;
      }
      util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent
                ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_20);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)local_25;
LAB_007608ad:
  local_48 = (ReferenceController *)(iStack_18 + 1);
  util__Darray_class_util__WeakPtr_class_Body_____SetSize
            ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_20,(int *)&local_48);
  bVar5 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize
                    ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_20,iVar6);
  pSVar9 = local_2c;
  if (bVar5) {
    pRVar1 = (ReferenceController *)piStack_1c[iStack_18 * 2 + -1];
    piStack_1c[iStack_18 * 2 + -2] = *piVar10;
    this_01 = (ReferenceController *)piVar10[1];
    piStack_1c[iStack_18 * 2 + -1] = (int)this_01;
    if (this_01 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_01);
    }
    pSVar9 = local_2c;
    if (pRVar1 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(pRVar1);
      pSVar9 = local_2c;
    }
  }
LAB_007608fe:
  local_c = local_c + 1;
  iVar6 = (**(code **)(*(int *)pSVar9 + 0xc))();
  if (iVar6 <= (int)local_c) goto LAB_00760911;
  goto LAB_00760834;
}


//==== 0000760a50 00760a50_DeselectAll ====
#undef t /* auto(v2): compat 僵尸宏撞成员名 */

// decompiled by BatchDecomp @ 00760a50 name=DeselectAll conv=__thiscall body=233

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: void __thiscall StrategicManager__DeselectAll(void) */

void __thiscall StrategicManager__DeselectAll(StrategicManager *this)

{
  ReferenceController *this_00;
  bool bVar1;
  ItineraryNode *pIVar2;
  WorldObject local_40c;
  ItineraryNode local_154;
  
  if (((*(int *)&(this->Session).SelectedItineraryNode.LastState.Position.Y == 0) ||
      (this_00 = *(ReferenceController **)
                  ((int)&(this->Session).SelectedItineraryNode.LastState.Position.Y + 4),
      this_00 == (ReferenceController *)0x0)) ||
     (bVar1 = util__ReferenceController__IsDataStillValid(this_00), !bVar1)) {
    local_40c.Object.Pointer = (Actor *)0x0;
    local_40c.Object.Controller = (ReferenceController *)0x0;
    local_40c.LPointID = 0;
    ItineraryNode__ItineraryNode(&local_40c.Node.LastNode);
    ItineraryNode__ItineraryNode(&local_40c.Node.NextNode);
    local_40c.Node.t = 0.0;
    WorldObject_operator((WorldObject *)&(this->Session).SelectedObject.Node,&local_40c);
    NodeMouseOver_NodeMouseOver(&local_40c.Node);
    local_154.Parent.Controller = local_40c.Object.Controller;
  }
  else {
    pIVar2 = (ItineraryNode *)ItineraryNode__ItineraryNode(&local_154);
    ItineraryNode_operator
              ((ItineraryNode *)&(this->Session).SelectedItineraryNode.LastState.Position.Y,pIVar2);
    if (local_154.CachedNearestOrbiter.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_154.CachedNearestOrbiter.Controller);
    }
    if (local_154.CachedNearestFleet.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_154.CachedNearestFleet.Controller);
    }
    if (local_154.CachedNearestBody.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_154.CachedNearestBody.Controller);
    }
    if (local_154.CachedGravityBody.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_154.CachedGravityBody.Controller);
    }
  }
  if (local_154.Parent.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_154.Parent.Controller);
  }
  return;
}


//==== 0000760fc0 00760fc0_DoesLevelRequireEnemyDisabling ====
// decompiled by BatchDecomp @ 00760fc0 name=DoesLevelRequireEnemyDisabling conv=__thiscall body=30

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall StrategicManager__DoesLevelRequireEnemyDisabling(void)const  */

bool __thiscall StrategicManager__DoesLevelRequireEnemyDisabling(StrategicManager *this)

{
  int iVar1;
  
  iVar1 = (this->Session).MessagesStored._pad_0x0_0;
  if ((*(char *)(iVar1 + 0xb0) != '\0') && (*(char *)(iVar1 + 0xae) != '\0')) {
    return true;
  }
  return false;
}


//==== 0000760fe0 00760fe0_ExitFromTacticalGame ====
// decompiled by BatchDecomp @ 00760fe0 name=ExitFromTacticalGame conv=__thiscall body=737

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__ExitFromTacticalGame(struct util::PhysicalState<struct
   util::Vec3<double> >,class util::Darray<class util::SharedPtr<class Body> > const &,bool) */

void __thiscall
StrategicManager__ExitFromTacticalGame(StrategicManager *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
          undefined4 param_13,undefined4 param_14,undefined4 param_15)

{
  undefined1 *this_00;
  Speaker *pSVar1;
  bool bVar2;
  int iVar3;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *pDVar4;
  int *piVar5;
  undefined4 sret_gtd_p5[4];
  undefined4 *puVar6;
  GameManager *this_01;
  DataParser *this_02;
  int *piVar7;
  AudioManager *this_03;
  code *pcVar8;
  Str_L_char_G_ *pSVar9;
  Str_L_char_G_ *pSVar10;
  float fVar11;
  undefined1 uVar12;
  undefined1 local_3c[8];
  undefined **local_34;
  void *local_30;
  int local_24;
  undefined **local_20;
  Str_L_char_G_ SStack_1c;
  int local_10;
  undefined1 local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  this_00 = (char *)&(this->Session) + 0x18c;
  ((slice_view *)&local_3c)->_4_4_ = this;
  iVar3 = (**(code **)(*(int *)((char *)&(this->Session) + 0x18c) + 0xc))();
  if (iVar3 < 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\strategic\\strategicmanager.cpp",0x404,
                    "Session.CombatingFleets.Num() > 0",(char *)0x0);
    DebugBreak();
  }
  { undefined4 sret_pwa[4];
    util__GetPrunedWeakArray_class_Body
              ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)sret_pwa,(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_34);
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)this_00,(Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)sret_pwa); }
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
            ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_34);
  GenerateNewFleets(this,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                    param_11,param_12,param_13,this_00,param_14,param_15);
  CancelTacticalGame(this);
  piVar5 = (int *)GetFleets(this);
  local_10 = 0;
  iVar3 = (**(code **)(*piVar5 + 0xc))();
  if (local_10 < iVar3) {
    do {
      puVar6 = (undefined4 *)(**(code **)*piVar5)(&local_10);
      if (((ReferenceController *)puVar6[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar6[1]),
         !bVar2)) {
        *puVar6 = 0;
      }
      Fleet__PostCombat((Fleet *)*puVar6);
      local_10 = local_10 + 1;
      iVar3 = (**(code **)(*piVar5 + 0xc))();
    } while (local_10 < iVar3);
  }
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
            ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_34);
  CorrectReferenceFrame(this);
  uVar12 = SUB41(&local_34,0);
  local_c = 0;
  this_01 = Manager__GetParent((Manager *)this);
  this_02 = GameManager__GetDataManager(this_01);
  util__SerializationManagerInterface__GetTypedDataOfType_struct_Speaker__o2
                            ((SerializationManagerInterface *)this_02,sret_gtd_p5,(bool)uVar12);
  piVar5 = (int *)sret_gtd_p5;
  local_20 = (undefined **)0x0;
  SStack_1c.Data = (char *)0x0;
  SStack_1c.Capacity = 0;
  SStack_1c.Length = 0;
  iVar3 = (**(code **)(*piVar5 + 0xc))();
  util__Darray_class_Manager____Darray_class_Manager((Darray_L_class_Manager_P_G_ *)&local_20,iVar3);
  local_10 = 0;
  iVar3 = (**(code **)(*piVar5 + 0xc))();
  if (local_10 < iVar3) {
    do {
      piVar7 = (int *)(**(code **)*piVar5)(&local_10);
      iVar3 = SStack_1c.Capacity;
      if (*(char *)(*piVar7 + 0x44) != '\0') {
        local_24 = SStack_1c.Capacity + 1;
        util__Darray_class_util__Reflectable____SetSize
                  ((Darray_L_util__Reflectable_P_G_ *)&local_20,&local_24);
        bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                          ((Darray_L_GraphicsResource__Type_G_ *)&local_20,iVar3);
        if (bVar2) {
          *(int *)(SStack_1c.Data + SStack_1c.Capacity * 4 + -4) = *piVar7;
        }
      }
      local_10 = local_10 + 1;
      iVar3 = (**(code **)(*piVar5 + 0xc))();
      this = (StrategicManager *)((slice_view *)&local_3c)->_4_4_;
    } while (local_10 < iVar3);
  }
  pcVar8 = DebugBreak_exref;
  if (SStack_1c.Capacity != 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\function.inl",0x38,
                    "FilteredArray.Num() == 1",(char *)0x0);
    pcVar8 = DebugBreak_exref;
    DebugBreak();
  }
  if (SStack_1c.Capacity < 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3a,
                    "Size > 0",(char *)0x0);
    (*pcVar8)();
  }
  pSVar1 = *(Speaker **)SStack_1c.Data;
  local_20 = 0x9194a4;
  operator_delete__(SStack_1c.Data);
  SStack_1c.Data = (char *)0x0;
  local_20 = 0x919488;
  NotificationManager__CloseNotificationsOfSpeaker((NotificationManager *)
             &(this->Notifications).NotificationManagerMemoizationHandlerInstance.ResetFunctions.
              Size,pSVar1);
  local_34 = 0x9194a4;
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
  }
  iVar3 = (**(code **)(*(int *)((char *)&(this->Session) + 0x18c) + 0xc))();
  if (iVar3 != 0) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\strategic\\strategicmanager.cpp",0x413,
                    "Session.CombatingFleets.Num() == 0",(char *)0x0);
    (*pcVar8)();
  }
  GameManager__SetIsInLoadingScreen((GameManager *)this->_pad_0x0_0,false);
  GameManager__Unpause((GameManager *)this->_pad_0x0_0);
  SetupAmbientSounds(this);
  util__Str_char___Str_char(&SStack_1c,"Intro");
  pSVar10 = &SStack_1c;
  bVar2 = false;
  fVar11 = 0.0;
  pSVar9 = (Str_L_char_G_ *)local_3c;
  this_03 = GameManager__GetAudio((GameManager *)this->_pad_0x0_0);
  AudioManager__PlaySoundA(this_03,pSVar9,0.0f,fVar11,bVar2);
  if (SStack_1c.Data != (char *)0x0) {
    operator_delete__(SStack_1c.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007612d0 007612d0_ExitGame ====
// decompiled by BatchDecomp @ 007612d0 name=ExitGame conv=__thiscall body=60

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__ExitGame(void) */

void __thiscall StrategicManager__ExitGame(StrategicManager *this)

{
  MainManager *pMVar1;
  bool bVar2;
  
  if (GlobalLevel.Length != 0) {
    GameManager__Exit((GameManager *)this->_pad_0x0_0);
    return;
  }
  ClearGameState(this);
  bVar2 = true;
  pMVar1 = GameManager__GetManager_class_MainManager((GameManager *)this->_pad_0x0_0);
  GameManager__SwitchToSession((GameManager *)this->_pad_0x0_0,(Manager *)pMVar1,bVar2);
  Interface__ExitScreen(*(Interface **)(this->_pad_0x0_0 + 0x20),2);
  return;
}


//==== 0000761310 00761310_FindNearestCelestialBody ====
extern undefined4 FUN_00755630(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 00761310 name=FindNearestCelestialBody conv=__thiscall body=227

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class WeakPtr_L_CelestialObject_G_ __thiscall
   StrategicManager__FindNearestCelestialBody(double,struct Vec3_L_double_G_)const  */

undefined4 * __thiscall
StrategicManager__FindNearestCelestialBody(StrategicManager *this,double param_1,Vec3_L_double_G_ param_2)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar4;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_3c[16];
  undefined4 local_2c;
  ReferenceController *local_28;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_1c[16];
  bool local_c;
  int local_8;
  
  puVar2 = (*(undefined4 *)&(param_1));
  if ((this->GetCelestialObjects_MemoizedValue).IsValidData == false) {
    iVar1 = (this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size;
    local_8 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&this->StrategicManagerMemoizationHandlerInstance
               ,&local_8);
    bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &this->StrategicManagerMemoizationHandlerInstance,iVar1);
    if (bVar3) {*(void **)&((this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Data[(this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size+-1]) = (void *)&TacticalManager_GetAllBodies_Clear;
    }
    pDVar4 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
             GetCelestialObjects_MemoizedFunction(this);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_1c,pDVar4);
    local_c = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetCelestialObjects_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_1c);
    (this->GetCelestialObjects_MemoizedValue).IsValidData = local_c;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
              ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_1c);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
              (local_3c);
  }
  if ((this->GetCelestialObjects_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  FUN_00755630(&local_2c,&this->GetCelestialObjects_MemoizedValue,(int)&param_1 + 4,
               (undefined1 *)((int)&param_2.X + 4));
  *puVar2 = local_2c;
  puVar2[1] = local_28;
  if (local_28 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(local_28);
    util__ReferenceController__ReleaseWeakReference(local_28);
  }
  return puVar2;
}


//==== 0000761400 00761400_FindNearestGameplayRelevantCelestialBody ====
extern undefined4 FUN_00755630(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 00761400 name=FindNearestGameplayRelevantCelestialBody conv=__thiscall body=227

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class WeakPtr_L_CelestialObject_G_ __thiscall
   StrategicManager__FindNearestGameplayRelevantCelestialBody(double,struct Vec3_L_double_G_)const
    */

undefined4 * __thiscall
StrategicManager__FindNearestGameplayRelevantCelestialBody(StrategicManager *this,double param_1,Vec3_L_double_G_ param_2)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar4;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_3c[16];
  undefined4 local_2c;
  ReferenceController *local_28;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_1c[16];
  bool local_c;
  int local_8;
  
  puVar2 = (*(undefined4 *)&(param_1));
  if ((this->GetGameplayRelevantCelestialObjects_MemoizedValue).IsValidData == false) {
    iVar1 = (this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size;
    local_8 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&this->StrategicManagerMemoizationHandlerInstance
               ,&local_8);
    bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &this->StrategicManagerMemoizationHandlerInstance,iVar1);
    if (bVar3) {*(void **)&((this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Data[(this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size+-1]) = (void *)&TacticalManager_GetAllColliders_Clear;
    }
    pDVar4 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
             GetGameplayRelevantCelestialObjects_MemoizedFunction(this);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_1c,pDVar4);
    local_c = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetGameplayRelevantCelestialObjects_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_1c);
    (this->GetGameplayRelevantCelestialObjects_MemoizedValue).IsValidData = local_c;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
              ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_1c);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
              (local_3c);
  }
  if ((this->GetGameplayRelevantCelestialObjects_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  FUN_00755630(&local_2c,&this->GetGameplayRelevantCelestialObjects_MemoizedValue,(int)&param_1 + 4,
               (undefined1 *)((int)&param_2.X + 4));
  *puVar2 = local_2c;
  puVar2[1] = local_28;
  if (local_28 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(local_28);
    util__ReferenceController__ReleaseWeakReference(local_28);
  }
  return puVar2;
}


//==== 00007614f0 007614f0_FindNearestStableCelestialBody ====
extern undefined4 FUN_00755eb0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_00759900(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007614f0 name=FindNearestStableCelestialBody conv=__thiscall body=422

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class WeakPtr_L_CelestialObject_G_ __thiscall
   StrategicManager__FindNearestStableCelestialBody(double,struct Vec3_L_double_G_)const  */

undefined4 * __thiscall
StrategicManager__FindNearestStableCelestialBody(StrategicManager *this,double param_1,Vec3_L_double_G_ param_2)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar4;
  undefined4 local_48;
  ReferenceController *local_44;
  char local_38;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_30[16];
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_20[16];
  bool local_10;
  uint local_c;
  int local_8;
  
  puVar2 = (*(undefined4 *)&(param_1));
  if ((this->GetCelestialObjects_MemoizedValue).IsValidData == false) {
    iVar1 = (this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size;
    local_8 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&this->StrategicManagerMemoizationHandlerInstance
               ,&local_8);
    bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &this->StrategicManagerMemoizationHandlerInstance,iVar1);
    if (bVar3) {*(void **)&((this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Data[(this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size+-1]) = (void *)&TacticalManager_GetAllBodies_Clear;
    }
    pDVar4 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
             GetCelestialObjects_MemoizedFunction(this);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_20,pDVar4);
    local_10 = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetCelestialObjects_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_20);
    (this->GetCelestialObjects_MemoizedValue).IsValidData = local_10;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
              ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_20);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
              (local_30);
  }
  if ((this->GetCelestialObjects_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  FUN_00755eb0(&local_48,&this->GetCelestialObjects_MemoizedValue,(int)&param_1 + 4,
               (undefined1 *)((int)&param_2.X + 4));
  if (local_38 == '\0') {
    local_c = local_c & 0xffffff00;
    if ((this->GetCelestialObjects_MemoizedValue).IsValidData == false) {
      iVar1 = (this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size;
      local_8 = iVar1 + 1;
      util__Darray_class_util__Reflectable____SetSize
                ((Darray_L_util__Reflectable_P_G_ *)
                 &this->StrategicManagerMemoizationHandlerInstance,&local_8);
      bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize
                        ((Darray_L_GraphicsResource__Type_G_ *)
                         &this->StrategicManagerMemoizationHandlerInstance,iVar1);
      if (bVar3) {*(void **)&((this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Data[(this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size+-1]) = (void *)&TacticalManager_GetAllBodies_Clear;
      }
      pDVar4 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
               GetCelestialObjects_MemoizedFunction(this);
      util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_20,pDVar4);
      local_10 = true;
      util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
                ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
                 &this->GetCelestialObjects_MemoizedValue,
                 (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_20);
      (this->GetCelestialObjects_MemoizedValue).IsValidData = local_10;
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
                ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_20);
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
                (local_30);
    }
    if ((this->GetCelestialObjects_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    FUN_00759900(puVar2,&this->GetCelestialObjects_MemoizedValue,local_c);
    if (local_44 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_44);
    }
  }
  else {
    *puVar2 = local_48;
    puVar2[1] = local_44;
    if (local_44 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(local_44);
      util__ReferenceController__ReleaseWeakReference(local_44);
      return puVar2;
    }
  }
  return puVar2;
}


//==== 00007616a0 007616a0_GameIsOver ====
// decompiled by BatchDecomp @ 007616a0 name=GameIsOver conv=__thiscall body=37

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall StrategicManager_GameIsOver(void)const  */

bool __thiscall StrategicManager_GameIsOver(StrategicManager *this)

{
  bool bVar1;
  
  if (*(int *)&(this->Session).CurrentTime_s == 0) {
    return false;
  }
  bVar1 = PlayerFailed(this);
  if ((!bVar1) && (bVar1 = PlayerIsVictorious(this), !bVar1)) {
    return false;
  }
  return true;
}


//==== 0000761f10 00761f10_GenerateNotificationUI ====
// decompiled by BatchDecomp @ 00761f10 name=GenerateNotificationUI conv=__thiscall body=51

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class SharedPtr_L_UIWidget_G_ __thiscall
   StrategicManager__GenerateNotificationUI(class Manager *,bool) */

Manager * __thiscall
StrategicManager__GenerateNotificationUI(StrategicManager *this,Manager *param_1,bool param_2)

{
  Delegate_L_bool_G_ DVar1;
  undefined1 uVar2;
  undefined3 in_stack_00000009;
  char in_stack_0000000c;
  
  uVar2 = 0xb0;
  if (in_stack_0000000c == '\0') {
    uVar2 = false;
  }
  DVar1.CallbackFunction = (_func___cdecl_bool_void_ptr *)this;
  DVar1.Callee = _param_2;
  NotificationManager__GenerateUI((NotificationManager *)
             &(this->Notifications).NotificationManagerMemoizationHandlerInstance.ResetFunctions.
              Size,param_1,DVar1,(bool)uVar2);
  return param_1;
}


//==== 0000761f50 00761f50_GetAIDoctrine ====
// decompiled by BatchDecomp @ 00761f50 name=GetAIDoctrine conv=__thiscall body=13

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct MilitaryDoctrine * __thiscall StrategicManager__GetAIDoctrine(void)const  */

MilitaryDoctrine * __thiscall StrategicManager__GetAIDoctrine(StrategicManager *this)

{
  return *(MilitaryDoctrine **)((this->Session).MessagesStored._pad_0x0_0 + 0x84);
}


//==== 0000761f60 00761f60_GetAdditionalWorldTooltip ====
// decompiled by BatchDecomp @ 00761f60 name=GetAdditionalWorldTooltip conv=__thiscall body=181

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class Str_L_char_G_ __thiscall StrategicManager__GetAdditionalWorldTooltip(void)const
    */

Str_L_char_G_ * __thiscall
StrategicManager__GetAdditionalWorldTooltip(StrategicManager *this,Str_L_char_G_ *__return_storage_ptr__)

{
  ReferenceController *pRVar1;
  bool bVar2;
  char *pcVar3;
  bool bVar4;
  Str_L_char_G_ *pSVar5;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  undefined4 local_8;
  
  local_8 = 0;
  if (((this->CelestialGrid).Pointer != (Skybox *)0x0) &&
     (pRVar1 = (this->CelestialGrid).Controller, pRVar1 != (ReferenceController *)0x0)) {
    bVar4 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (bVar4) {
      pRVar1 = (this->CelestialGrid).Controller;
      if (pRVar1 != (ReferenceController *)0x0) {
        bVar4 = util__ReferenceController__IsDataStillValid(pRVar1);
        if (!bVar4) {
          (this->CelestialGrid).Pointer = (Skybox *)0x0;
        }
      }
      pSVar5 = HUDStrategic__GetAdditionalTooltip((HUDStrategic *)(this->CelestialGrid).Pointer,&local_20);
      bVar2 = true;
      bVar4 = false;
      goto LAB_00761fd5;
    }
  }
  pSVar5 = &local_14;
  local_14.Data = (char *)0x0;
  local_14.Capacity = 0;
  local_14.Length = 0;
  bVar2 = false;
  bVar4 = true;
LAB_00761fd5:
  pcVar3 = local_14.Data;
  util__Str_char___Str_char(__return_storage_ptr__,pSVar5);
  if ((bVar4) && (pcVar3 != (char *)0x0)) {
    operator_delete__(pcVar3);
  }
  if ((local_20.Data != (char *)0x0) && (bVar2)) {
    operator_delete__(local_20.Data);
  }
  return __return_storage_ptr__;
}


//==== 0000762020 00762020_GetAliveAlliedCapitalShipsCount ====
extern undefined4 FUN_00758630(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 00762020 name=GetAliveAlliedCapitalShipsCount conv=__thiscall body=374

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: int __thiscall StrategicManager__GetAliveAlliedCapitalShipsCount(void)const  */

int __thiscall StrategicManager__GetAliveAlliedCapitalShipsCount(StrategicManager *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  bool bVar7;
  int local_30;
  int local_2c[4];
  undefined **local_1c;
  int *piStack_18;
  int iStack_14;
  char *pcStack_10;
  undefined1 local_c[4];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_2c[0] = 0;
  local_2c[1] = 0;
  local_2c[2] = 0;
  local_2c[3] = 0;
  GetAllShipsOfFaction(this,(Faction *)local_2c);
  local_c[0] = 0;
  local_1c = (undefined **)0x0;
  piStack_18 = (int *)0x0;
  iStack_14 = 0;
  pcStack_10 = (char *)0x0;
  pcStack_10 = (char *)(**(code **)(local_2c[0] + 0xc))();
  local_1c = 0x9199e4;
  piStack_18 = (int *)0x0;
  iStack_14 = 0;
  if (((int)pcStack_10 < 0) || (0x3fffffff < (int)pcStack_10)) {
    pcStack_10 = (char *)0x0;
  }
  else if (0 < (int)pcStack_10) {
    uVar5 = -(uint)((int)(ZEXT48(pcStack_10) * 4 >> 0x20) != 0) | (uint)(ZEXT48(pcStack_10) * 4);
    piVar2 = (int *)operator_new__(uVar5);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      memset(piVar2,0,uVar5);
    }
    iVar3 = 0;
    piStack_18 = piVar2;
    if (0 < (int)pcStack_10) {
      do {
        piVar2[iVar3] = 0;
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)pcStack_10);
    }
  }
  FUN_00758630(local_2c,local_c,&local_1c);
  if (1 < iStack_14) {
    iVar3 = 0;
    local_30 = 0;
    piVar2 = piStack_18;
    piVar6 = piStack_18;
    if (piStack_18 != piStack_18 + iStack_14) {
      do {
        bVar7 = false;
        piVar4 = piStack_18;
        while ((piVar4 != piVar2 && (!bVar7))) {
          iVar1 = *piVar4;
          piVar4 = piVar4 + 1;
          bVar7 = *piVar2 == iVar1;
        }
        *piVar6 = *piVar2;
        if (!bVar7) {
          piVar6 = piVar6 + 1;
          iVar3 = iVar3 + 1;
        }
        piVar2 = piVar2 + 1;
        local_30 = iVar3;
      } while (piVar2 != piStack_18 + iStack_14);
    }
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&local_1c,&local_30);
  }
  iVar3 = iStack_14;
  local_1c = 0x9199e4;
  if (piStack_18 != (int *)0x0) {
    operator_delete__(piStack_18);
  }
  piStack_18 = (int *)0x0;
  local_1c = 0x919488;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_2c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}


//==== 00007621a0 007621a0_GetAllFleetsOfFaction ====
// decompiled by BatchDecomp @ 007621a0 name=GetAllFleetsOfFaction conv=__thiscall body=261

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Darray<class util::WeakPtr<class Fleet> > __thiscall
   StrategicManager__GetAllFleetsOfFaction(class Faction *)const  */

void __thiscall StrategicManager__GetAllFleetsOfFaction(StrategicManager *this,Faction *param_1)

{
  undefined1 stack0x00000008[0x240];
  ReferenceController *this_00;
  ReferenceController *this_01;
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  Faction *pFVar5;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_28[16];
  int *local_18;
  int local_14;
  int *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = (int *)&stack0x00000008;
  piVar2 = (int *)GetFleets(this);
  param_1->_pad_0x0_0 = 0;
  param_1->_pad_0x0_0 = 0;
  param_1->_pad_0x0_0 = 0;
  param_1->_pad_0x0_0 = 0;
  local_18 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body
            ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)param_1,iVar3);
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
      pFVar5 = Fleet__GetAlliance((Fleet *)*puVar4);
      if (pFVar5 == (Faction *)*local_10) {
        iVar3 = param_1->_pad_0x0_0;
        local_14 = iVar3 + 1;
        util__Darray_class_util__WeakPtr_class_Body_____SetSize
                  ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)param_1,&local_14);
        bVar1 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize
                          ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)param_1,iVar3);
        if (bVar1) {
          this_00 = *(ReferenceController **)(param_1->_pad_0x0_0 + -4 + param_1->_pad_0x0_0 * 8);
          iVar3 = param_1->_pad_0x0_0 + param_1->_pad_0x0_0 * 8;
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
      piVar2 = local_18;
      local_c = local_c + 1;
      iVar3 = (**(code **)(*local_18 + 0xc))();
    } while (local_c < iVar3);
  }
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
            (local_28);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007622b0 007622b0_GetAllIlluminatorObjects ====
// decompiled by BatchDecomp @ 007622b0 name=GetAllIlluminatorObjects conv=__thiscall body=447

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Darray<class util::WeakPtr<class CelestialObject> > __thiscall
   StrategicManager__GetAllIlluminatorObjects(void)const  */

void __thiscall StrategicManager__GetAllIlluminatorObjects(StrategicManager *this)

{
  undefined1 stack0x00000008[0x240];
  int iVar1;
  ReferenceController *this_00;
  bool bVar2;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar3;
  int iVar4;
  undefined4 *puVar5;
  Maybe_L_util__Darray_L_util__WeakPtr_L_CelestialObject_G___G___G_ *pMVar6;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *this_01;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *in_stack_00000004;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_3c[16];
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_2c[16];
  bool local_1c;
  ReferenceController *local_18;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *local_14;
  int local_10;
  undefined1 local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  local_14 = in_stack_00000004;
  if ((this->GetCelestialObjects_MemoizedValue).IsValidData == false) {
    iVar4 = (this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size;
    local_10 = iVar4 + 1;
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&this->StrategicManagerMemoizationHandlerInstance
               ,&local_10);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &this->StrategicManagerMemoizationHandlerInstance,iVar4);
    if (bVar2) {*(void **)&((this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Data[(this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size+-1]) = (void *)&TacticalManager_GetAllBodies_Clear;
    }
    pDVar3 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
             GetCelestialObjects_MemoizedFunction(this);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_2c,pDVar3);
    local_1c = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetCelestialObjects_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_2c);
    (this->GetCelestialObjects_MemoizedValue).IsValidData = local_1c;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
              ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_2c);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
              (local_3c);
  }
  this_01 = local_14;
  pMVar6 = &this->GetCelestialObjects_MemoizedValue;
  if ((this->GetCelestialObjects_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  *(undefined4 *)this_01 = 0;
  *(undefined4 *)(this_01 + 4) = 0;
  *(undefined4 *)(this_01 + 8) = 0;
  *(undefined4 *)(this_01 + 0xc) = 0;
  iVar4 = (**(code **)(*(int *)&pMVar6->Data + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body
            (this_01,iVar4);
  local_10 = 0;
  iVar4 = (**(code **)(*(int *)&pMVar6->Data + 0xc))();
  if (local_10 < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)*(int *)&pMVar6->Data)(&local_10);
      if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
         !bVar2)) {
        *puVar5 = 0;
      }
      bVar2 = CelestialObject__IsLuminousBody((CelestialObject *)*puVar5);
      if (bVar2) {
        if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
           (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
           !bVar2)) {
          *puVar5 = 0;
        }
        CelestialObject__GetLuminosity_W((CelestialObject *)*puVar5);
        iVar4 = *(int *)(this_01 + 8);
        local_18 = (ReferenceController *)(iVar4 + 1);
        util__Darray_class_util__WeakPtr_class_Body_____SetSize(local_14,(int *)&local_18);
        this_01 = local_14;
        bVar2 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(local_14,iVar4);
        if (bVar2) {
          iVar4 = *(int *)(this_01 + 8);
          iVar1 = *(int *)(local_14 + 4);
          local_18 = *(ReferenceController **)(iVar1 + -4 + iVar4 * 8);
          *(undefined4 *)(iVar1 + -8 + iVar4 * 8) = *puVar5;
          this_00 = (ReferenceController *)puVar5[1];
          *(ReferenceController **)(iVar1 + -4 + iVar4 * 8) = this_00;
          if (this_00 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this_00);
          }
          this_01 = local_14;
          if (local_18 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(local_18);
            this_01 = local_14;
          }
        }
      }
      local_10 = local_10 + 1;
      iVar4 = (**(code **)(*(int *)&pMVar6->Data + 0xc))();
    } while (local_10 < iVar4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000762470 00762470_GetAllObjects ====
#undef t /* auto(v2): compat 僵尸宏撞成员名 */
extern undefined4 FUN_007574f0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 00762470 name=GetAllObjects conv=__thiscall body=497

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class Darray_L_WorldObject_G_ __thiscall
   StrategicManager__GetAllObjects(void)const  */

void __thiscall StrategicManager__GetAllObjects(StrategicManager *this)

{
  ReferenceController *this_00;
  Actor *pAVar1;
  ReferenceController *pRVar2;
  bool bVar3;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  Darray_L_struct_WorldObject_G_ *in_stack_00000004;
  WorldObject local_2ec;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_34[16];
  bool local_24;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_20[16];
  Actor *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = 0x93a024;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  if ((this->GetCelestialObjects_MemoizedValue).IsValidData == false) {
    iVar6 = (this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size;
    local_c = iVar6 + 1;
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&this->StrategicManagerMemoizationHandlerInstance
               ,&local_c);
    bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &this->StrategicManagerMemoizationHandlerInstance,iVar6);
    if (bVar3) {*(void **)&((this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Data[(this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size+-1]) = (void *)&TacticalManager_GetAllBodies_Clear;
    }
    pDVar4 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
             GetCelestialObjects_MemoizedFunction(this);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_34,pDVar4);
    local_24 = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetCelestialObjects_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_34);
    (this->GetCelestialObjects_MemoizedValue).IsValidData = local_24;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
              ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_34);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
              (local_20);
  }
  if ((this->GetCelestialObjects_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  FUN_007574f0(&this->GetCelestialObjects_MemoizedValue);
  piVar5 = (int *)GetFleets(this);
  local_c = 0;
  iVar6 = (**(code **)(*piVar5 + 0xc))();
  if (local_c < iVar6) {
    do {
      puVar7 = (undefined4 *)(**(code **)*piVar5)(&local_c);
      this_00 = (ReferenceController *)puVar7[1];
      local_10 = (Actor *)*puVar7;
      pAVar1 = local_10;
      pRVar2 = this_00;
      if (this_00 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(this_00);
        local_2ec.Object.Pointer = local_10;
        local_2ec.Object.Controller = this_00;
        util__ReferenceController__AddWeakReference(this_00);
        pAVar1 = local_2ec.Object.Pointer;
        pRVar2 = local_2ec.Object.Controller;
      }
      local_2ec.Object.Controller = pRVar2;
      local_2ec.Object.Pointer = pAVar1;
      local_2ec.LPointID = 0;
      ItineraryNode__ItineraryNode(&local_2ec.Node.LastNode);
      ItineraryNode__ItineraryNode(&local_2ec.Node.NextNode);
      local_2ec.Node.t = 0.0;
      if (this_00 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(this_00);
      }
      iVar6 = *(int *)(in_stack_00000004 + 8);
      local_10 = (Actor *)(iVar6 + 1);
      util_Darray_struct_WorldObject_SetSize(in_stack_00000004,(int *)&local_10);
      bVar3 = util_Darray_struct_WorldObject_CheckSize(in_stack_00000004,iVar6);
      if (bVar3) {
        WorldObject_operator
                  ((WorldObject *)
                   (*(int *)(in_stack_00000004 + 8) * 0x2b8 +
                   *(int *)(in_stack_00000004 + 4) + -0x2b8),&local_2ec);
      }
      NodeMouseOver_NodeMouseOver(&local_2ec.Node);
      if (local_2ec.Object.Controller != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_2ec.Object.Controller);
      }
      local_c = local_c + 1;
      iVar6 = (**(code **)(*piVar5 + 0xc))();
    } while (local_c < iVar6);
  }
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
            (local_20);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000762670 00762670_GetAllOrbits ====
extern undefined4 FUN_00756dc0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_00757920(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 00762670 name=GetAllOrbits conv=__thiscall body=821

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Darray<class util::WeakPtr<struct OrbiterInterface> > __thiscall
   StrategicManager__GetAllOrbits(class WeakPtr_L_Fleet_G_)const  */

void __thiscall
StrategicManager__GetAllOrbits(StrategicManager *this,Darray_L_class_util__WeakPtr_L_struct_OrbiterInterface_G___G_ *param_2,
          undefined4 param_3,ReferenceController *param_4)

{
  ReferenceController *pRVar1;
  ReferenceController *pRVar2;
  int iVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar7;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_94[16];
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_84[16];
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_74[16];
  bool local_64;
  Darray_L_class_util__WeakPtr_L_struct_OrbiterInterface_G___G_ *local_60;
  undefined4 local_5c;
  int iStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  int iStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 *local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 *local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  StrategicManager *local_1c;
  undefined1 *local_18;
  int local_14;
  int local_10;
  undefined1 local_c[4];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_60 = param_2;
  local_18 = (undefined1 *)&param_3;
  local_c[0] = 0;
  local_1c = this;
  piVar5 = (int *)GetFleets(this);
  local_3c = (undefined4 *)0x0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  iVar6 = (**(code **)(*piVar5 + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body
            ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_3c,iVar6);
  FUN_00757920(piVar5,&local_18,&local_3c);
  local_5c = 0;
  iStack_58 = 0;
  iStack_54 = 0;
  uStack_50 = 0;
  iVar6 = (*(code *)local_3c[3])();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body
            ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_5c,iVar6);
  local_14 = 0;
  iVar6 = (*(code *)local_3c[3])();
  if (local_14 < iVar6) {
    do {
      piVar5 = (int *)(*(code *)*local_3c)(&local_14);
      pRVar1 = (ReferenceController *)piVar5[1];
      iVar6 = *piVar5;
      if (pRVar1 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar1);
      }
      if ((pRVar1 != (ReferenceController *)0x0) &&
         (util__ReferenceController__AddWeakReference(pRVar1), pRVar1 != (ReferenceController *)0x0)
         ) {
        util__ReferenceController__ReleaseWeakReference(pRVar1);
      }
      iVar3 = iStack_54;
      local_10 = iStack_54 + 1;
      util__Darray_class_util__WeakPtr_class_Body_____SetSize
                ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_5c,&local_10);
      bVar4 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize
                        ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_5c,iVar3);
      if (bVar4) {
        pRVar2 = *(ReferenceController **)(iStack_58 + -4 + iStack_54 * 8);
        *(uint *)(iStack_58 + -8 + iStack_54 * 8) = -(uint)(iVar6 != 0) & iVar6 + 8U;
        *(ReferenceController **)(iStack_58 + -4 + iStack_54 * 8) = pRVar1;
        if (pRVar1 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar1);
        }
        if (pRVar2 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar2);
        }
      }
      if (pRVar1 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(pRVar1);
      }
      local_14 = local_14 + 1;
      iVar6 = (*(code *)local_3c[3])();
      this = local_1c;
    } while (local_14 < iVar6);
  }
  if ((this->GetCelestialObjects_MemoizedValue).IsValidData == false) {
    iVar6 = (this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size;
    local_1c = (StrategicManager *)(iVar6 + 1);
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&this->StrategicManagerMemoizationHandlerInstance
               ,(int *)&local_1c);
    bVar4 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &this->StrategicManagerMemoizationHandlerInstance,iVar6);
    if (bVar4) {*(void **)&((this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Data[(this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size+-1]) = (void *)&TacticalManager_GetAllBodies_Clear;
    }
    pDVar7 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
             GetCelestialObjects_MemoizedFunction(this);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_74,pDVar7);
    local_64 = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetCelestialObjects_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_74);
    (this->GetCelestialObjects_MemoizedValue).IsValidData = local_64;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
              ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_74);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
              (local_84);
  }
  if ((this->GetCelestialObjects_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_2c = (undefined4 *)0x0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  iVar6 = (**(code **)((this->GetCelestialObjects_MemoizedValue).Data._pad_0x0_0 + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body
            ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_2c,iVar6);
  FUN_00756dc0(&this->GetCelestialObjects_MemoizedValue,local_c,&local_2c);
  local_4c = 0;
  iStack_48 = 0;
  iStack_44 = 0;
  uStack_40 = 0;
  iVar6 = (*(code *)local_2c[3])();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body
            ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_4c,iVar6);
  local_10 = 0;
  iVar6 = (*(code *)local_2c[3])();
  if (local_10 < iVar6) {
    do {
      piVar5 = (int *)(*(code *)*local_2c)(&local_10);
      pRVar1 = (ReferenceController *)piVar5[1];
      iVar6 = *piVar5;
      if (pRVar1 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar1);
      }
      if ((pRVar1 != (ReferenceController *)0x0) &&
         (util__ReferenceController__AddWeakReference(pRVar1), pRVar1 != (ReferenceController *)0x0)
         ) {
        util__ReferenceController__ReleaseWeakReference(pRVar1);
      }
      iVar3 = iStack_44;
      local_1c = (StrategicManager *)(iStack_44 + 1);
      util__Darray_class_util__WeakPtr_class_Body_____SetSize
                ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_4c,(int *)&local_1c);
      bVar4 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize
                        ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_4c,iVar3);
      if (bVar4) {
        pRVar2 = *(ReferenceController **)(iStack_48 + -4 + iStack_44 * 8);
        *(uint *)(iStack_48 + -8 + iStack_44 * 8) = -(uint)(iVar6 != 0) & iVar6 + 8U;
        *(ReferenceController **)(iStack_48 + -4 + iStack_44 * 8) = pRVar1;
        if (pRVar1 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar1);
        }
        if (pRVar2 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar2);
        }
      }
      if (pRVar1 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(pRVar1);
      }
      local_10 = local_10 + 1;
      iVar6 = (*(code *)local_2c[3])();
    } while (local_10 < iVar6);
  }
  util__Join_class_util__WeakPtr_struct_OrbiterInterface
            (local_60,(Darray_L_class_util__WeakPtr_L_struct_OrbiterInterface_G___G_ *)&local_4c);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
            ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_4c);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
            ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_2c);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
            ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_5c);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
            ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_3c);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
            (local_94);
  if (param_4 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000762a00 00762a00_GetAllOrbits_Memoize ====
// decompiled by BatchDecomp @ 00762a00 name=GetAllOrbits_Memoize conv=__thiscall body=151

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__GetAllOrbits_Memoize(void)const  */

void __thiscall StrategicManager__GetAllOrbits_Memoize(StrategicManager *this)

{
  int iVar1;
  bool bVar2;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_2c[16];
  bool local_1c;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_18[16];
  int local_8;
  
  if ((this->GetAllOrbits_MemoizedValue).IsValidData == false) {
    iVar1 = (this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size;
    local_8 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&this->StrategicManagerMemoizationHandlerInstance
               ,&local_8);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &this->StrategicManagerMemoizationHandlerInstance,iVar1);
    if (bVar2) {*(void **)&((this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Data[(this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size+-1]) = (void *)&TacticalManager_GetFutureCelestials_Clear;
    }
    GetAllOrbits(this,local_18,0,0);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_2c,local_18);
    local_1c = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetAllOrbits_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_2c);
    (this->GetAllOrbits_MemoizedValue).IsValidData = local_1c;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
              ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_2c);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
              ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_18);
  }
  return;
}


//==== 0000762aa0 00762aa0_GetAllReasonableCameraCenterTargets ====
// decompiled by BatchDecomp @ 00762aa0 name=GetAllReasonableCameraCenterTargets conv=__thiscall body=20

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class Darray_L_WorldObject_G_ __thiscall
   StrategicManager__GetAllReasonableCameraCenterTargets(void)const  */

undefined4 __thiscall StrategicManager__GetAllReasonableCameraCenterTargets(StrategicManager *this)

{
  undefined4 in_stack_00000004;
  
  GetAllReasonableCameraTargets(this,SUB41(in_stack_00000004,0));
  return in_stack_00000004;
}


//==== 0000762ac0 00762ac0_GetAllReasonableCameraTargets ====
#undef t /* auto(v2): compat 僵尸宏撞成员名 */
extern undefined4 FUN_00757e30(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 00762ac0 name=GetAllReasonableCameraTargets conv=__thiscall body=731

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class Darray_L_WorldObject_G_ __thiscall
   StrategicManager__GetAllReasonableCameraTargets(bool)const  */

void __thiscall StrategicManager__GetAllReasonableCameraTargets(StrategicManager *this,bool param_1)

{
  ReferenceController *pRVar1;
  StrategicManager *pSVar2;
  ReferenceController *pRVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  Faction *pFVar10;
  undefined3 in_stack_00000005;
  char in_stack_00000008;
  Darray_L_struct_WorldObject_G_ *pDVar11;
  WorldObject local_2d8;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_20[16];
  StrategicManager *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)_param_1 = 0;
  *(undefined4 *)(_param_1 + 4) = 0;
  *(undefined4 *)(_param_1 + 8) = 0;
  *(undefined4 *)(_param_1 + 0xc) = 0;
  *(undefined ***)_param_1 = 0x93a024;
  *(undefined4 *)(_param_1 + 4) = 0;
  *(undefined4 *)(_param_1 + 8) = 0;
  *(undefined4 *)(_param_1 + 0xc) = 0;
  pRVar1 = *(ReferenceController **)&(*((char *)&((this->Session).ReferenceObject) + 0xc));
  local_2d8.Object.Pointer = (Actor *)(this->Session).ReferenceObject.LPointID;
  local_2d8.Object.Controller = pRVar1;
  local_10 = this;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar1);
    util__ReferenceController__AddWeakReference(pRVar1);
  }
  local_2d8.LPointID = 0;
  ItineraryNode__ItineraryNode(&local_2d8.Node.LastNode);
  ItineraryNode__ItineraryNode(&local_2d8.Node.NextNode);
  local_2d8.Node.t = 0.0;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  iVar8 = *(int *)(_param_1 + 8);
  piVar7 = *(int **)(_param_1 + 4);
  if (piVar7 != piVar7 + iVar8 * 0xae) {
    do {
      if (((local_2d8.Object.Controller == (ReferenceController *)piVar7[1]) &&
          ((StrategicManager *)local_2d8.Object.Pointer == (StrategicManager *)*piVar7)) &&
         (piVar7[2] == local_2d8.LPointID)) {
        bVar4 = ItineraryNode__IsValid((ItineraryNode *)(piVar7 + 4));
        bVar5 = ItineraryNode__IsValid(&local_2d8.Node.LastNode);
        if (bVar4 == bVar5) goto LAB_00762bfb;
      }
      iVar8 = *(int *)(_param_1 + 8);
      piVar7 = piVar7 + 0xae;
    } while (piVar7 != (int *)(iVar8 * 0x2b8 + *(int *)(_param_1 + 4)));
  }
  local_c = iVar8 + 1;
  util_Darray_struct_WorldObject_SetSize(_param_1,&local_c);
  bVar4 = util_Darray_struct_WorldObject_CheckSize(_param_1,iVar8);
  if (bVar4) {
    WorldObject_operator
              ((WorldObject *)(*(int *)(_param_1 + 8) * 0x2b8 + *(int *)(_param_1 + 4) + -0x2b8),
               &local_2d8);
  }
LAB_00762bfb:
  NodeMouseOver_NodeMouseOver(&local_2d8.Node);
  if (local_2d8.Object.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_2d8.Object.Controller);
  }
  pDVar11 = _param_1;
  uVar6 = GetFleets(local_10);
  FUN_00757e30(uVar6,pDVar11);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
            (local_20);
  piVar7 = (int *)GetFleets(local_10);
  local_c = 0;
  iVar8 = (**(code **)(*piVar7 + 0xc))();
  if (local_c < iVar8) {
    do {
      piVar9 = (int *)(**(code **)*piVar7)(&local_c);
      if (((ReferenceController *)piVar9[1] != (ReferenceController *)0x0) &&
         (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar9[1]),
         !bVar4)) {
        *piVar9 = 0;
      }
      pFVar10 = Fleet__GetAlliance((Fleet *)*piVar9);
      if (pFVar10 != (Faction *)0x0) {
        if (((ReferenceController *)piVar9[1] != (ReferenceController *)0x0) &&
           (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar9[1]),
           !bVar4)) {
          *piVar9 = 0;
        }
        bVar4 = Fleet__HasMission((Fleet *)*piVar9);
        if ((!bVar4) || (in_stack_00000008 == '\0')) {
          local_10 = (StrategicManager *)*piVar9;
          pRVar1 = (ReferenceController *)piVar9[1];
          pSVar2 = local_10;
          pRVar3 = pRVar1;
          if (pRVar1 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(pRVar1);
            local_2d8.Object.Pointer = (Actor *)local_10;
            local_2d8.Object.Controller = pRVar1;
            util__ReferenceController__AddWeakReference(pRVar1);
            pSVar2 = (StrategicManager *)local_2d8.Object.Pointer;
            pRVar3 = local_2d8.Object.Controller;
          }
          local_2d8.Object.Controller = pRVar3;
          local_2d8.Object.Pointer = (Actor *)pSVar2;
          local_2d8.LPointID = 0;
          ItineraryNode__ItineraryNode(&local_2d8.Node.LastNode);
          ItineraryNode__ItineraryNode(&local_2d8.Node.NextNode);
          local_2d8.Node.t = 0.0;
          if (pRVar1 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(pRVar1);
          }
          iVar8 = *(int *)(_param_1 + 8);
          local_10 = (StrategicManager *)(iVar8 + 1);
          util_Darray_struct_WorldObject_SetSize(_param_1,(int *)&local_10);
          bVar4 = util_Darray_struct_WorldObject_CheckSize(_param_1,iVar8);
          if (bVar4) {
            WorldObject_operator
                      ((WorldObject *)
                       (*(int *)(_param_1 + 8) * 0x2b8 + *(int *)(_param_1 + 4) + -0x2b8),&local_2d8
                      );
          }
          NodeMouseOver_NodeMouseOver(&local_2d8.Node);
          if (local_2d8.Object.Controller != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(local_2d8.Object.Controller);
          }
        }
      }
      local_c = local_c + 1;
      iVar8 = (**(code **)(*piVar7 + 0xc))();
    } while (local_c < iVar8);
  }
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
            (local_20);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000762da0 00762da0_GetAllReasonableReferenceFrames ====
extern undefined4 FUN_0075cb60(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 00762da0 name=GetAllReasonableReferenceFrames conv=__thiscall body=797

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class Darray_L_WorldObject_G_ __thiscall
   StrategicManager__GetAllReasonableReferenceFrames(void)const  */

void __thiscall StrategicManager__GetAllReasonableReferenceFrames(StrategicManager *this)

{
  int *piVar1;
  ReferenceController *this_00;
  bool bVar2;
  bool bVar3;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  Maybe_L_util__Darray_L_util__WeakPtr_L_CelestialObject_G___G___G_ *pMVar9;
  int *piVar10;
  Darray_L_struct_WorldObject_G_ *in_stack_00000004;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_310[16];
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_300[16];
  bool local_2f0;
  ReferenceController *local_2ec;
  undefined4 local_2e8;
  int iStack_2e4;
  int iStack_2e0;
  undefined4 uStack_2dc;
  Darray_L_struct_WorldObject_G_ *local_2d8;
  int *local_2d4;
  WorldObject local_2d0;
  char local_18;
  int local_10;
  undefined1 local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_2d8 = in_stack_00000004;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  GetAllReasonableCameraTargets(this,SUB41(in_stack_00000004,0));
  local_c = 0;
  if ((this->GetCelestialObjects_MemoizedValue).IsValidData == false) {
    iVar5 = (this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size;
    local_2d4 = (int *)(iVar5 + 1);
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&this->StrategicManagerMemoizationHandlerInstance
               ,(int *)&local_2d4);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &this->StrategicManagerMemoizationHandlerInstance,iVar5);
    if (bVar2) {*(void **)&((this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Data[(this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size+-1]) = (void *)&TacticalManager_GetAllBodies_Clear;
    }
    pDVar4 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
             GetCelestialObjects_MemoizedFunction(this);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_300,pDVar4);
    local_2f0 = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetCelestialObjects_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_300);
    (this->GetCelestialObjects_MemoizedValue).IsValidData = local_2f0;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
              ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_300);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
              (local_310);
  }
  pMVar9 = &this->GetCelestialObjects_MemoizedValue;
  if ((this->GetCelestialObjects_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_2e8 = 0;
  iStack_2e4 = 0;
  iStack_2e0 = 0;
  uStack_2dc = 0;
  iVar5 = (**(code **)(*(int *)&pMVar9->Data + 0xc))();
  util_Darray_struct_WorldObject_Darray_struct_WorldObject
            ((Darray_L_struct_WorldObject_G_ *)&local_2e8,iVar5);
  local_10 = 0;
  iVar5 = (**(code **)(*(int *)&pMVar9->Data + 0xc))();
  if (local_10 < iVar5) {
    do {
      uVar6 = (**(code **)*(int *)&pMVar9->Data)(&local_10);
      FUN_0075cb60(&local_2d0,uVar6);
      iVar5 = iStack_2e0;
      if (local_18 != '\0') {
        local_2d4 = (int *)(iStack_2e0 + 1);
        util_Darray_struct_WorldObject_SetSize
                  ((Darray_L_struct_WorldObject_G_ *)&local_2e8,(int *)&local_2d4);
        bVar2 = util_Darray_struct_WorldObject_CheckSize
                          ((Darray_L_struct_WorldObject_G_ *)&local_2e8,iVar5);
        if (bVar2) {
          WorldObject_operator
                    ((WorldObject *)(iStack_2e0 * 0x2b8 + iStack_2e4 + -0x2b8),&local_2d0);
        }
      }
      NodeMouseOver_NodeMouseOver(&local_2d0.Node);
      if (local_2d0.Object.Controller != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_2d0.Object.Controller);
      }
      local_10 = local_10 + 1;
      iVar5 = (**(code **)(*(int *)&pMVar9->Data + 0xc))();
    } while (local_10 < iVar5);
  }
  util_Darray_struct_WorldObject_operator__o2
            (in_stack_00000004,(Darray_L_struct_WorldObject_G_ *)&local_2e8);
  util_Darray_struct_WorldObject_Darray_struct_WorldObject__o2
            ((Darray_L_struct_WorldObject_G_ *)&local_2e8);
  if (1 < *(int *)(in_stack_00000004 + 8)) {
    piVar7 = *(int **)(in_stack_00000004 + 4);
    local_10 = 0;
    piVar8 = piVar7;
    piVar10 = piVar7;
    local_2d4 = piVar7;
    if (piVar7 != piVar7 + *(int *)(in_stack_00000004 + 8) * 0xae) {
      do {
        bVar2 = false;
        if (piVar7 != piVar10) {
          piVar7 = piVar7 + 2;
          do {
            piVar8 = local_2d4;
            if (bVar2) break;
            if (((piVar7[-1] == piVar10[1]) && (piVar7[-2] == *piVar10)) && (piVar10[2] == *piVar7))
            {
              bVar2 = ItineraryNode__IsValid((ItineraryNode *)(piVar7 + 2));
              bVar3 = ItineraryNode__IsValid((ItineraryNode *)(piVar10 + 4));
              if (bVar3 != bVar2) goto LAB_00762ff4;
              bVar2 = true;
            }
            else {
LAB_00762ff4:
              bVar2 = false;
            }
            piVar1 = piVar7 + 0xac;
            piVar7 = piVar7 + 0xae;
            piVar8 = local_2d4;
          } while (piVar1 != piVar10);
        }
        local_2ec = (ReferenceController *)piVar8[1];
        *piVar8 = *piVar10;
        this_00 = (ReferenceController *)piVar10[1];
        piVar8[1] = (int)this_00;
        if (this_00 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this_00);
        }
        if (local_2ec != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(local_2ec);
        }
        piVar8[2] = piVar10[2];
        ItineraryNode_operator((ItineraryNode *)(piVar8 + 4),(ItineraryNode *)(piVar10 + 4));
        ItineraryNode_operator((ItineraryNode *)(piVar8 + 0x58),(ItineraryNode *)(piVar10 + 0x58))
        ;
        *(undefined8 *)(piVar8 + 0xac) = *(undefined8 *)(piVar10 + 0xac);
        if (!bVar2) {
          piVar8 = piVar8 + 0xae;
          local_10 = local_10 + 1;
          local_2d4 = piVar8;
        }
        piVar10 = piVar10 + 0xae;
        piVar7 = *(int **)(local_2d8 + 4);
        in_stack_00000004 = local_2d8;
      } while (piVar10 != piVar7 + *(int *)(local_2d8 + 8) * 0xae);
    }
    util_Darray_struct_WorldObject_SetSize(in_stack_00000004,&local_10);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007630c0 007630c0_GetAllShips ====
// decompiled by BatchDecomp @ 007630c0 name=GetAllShips conv=__thiscall body=23

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Darray<class util::WeakPtr<class SpacecraftComponent> > __thiscall
   StrategicManager__GetAllShips(void)const  */

void __thiscall StrategicManager__GetAllShips(StrategicManager *this)

{
  Maybe_L_util__Darray_L_util__WeakPtr_L_Body_G___G___G_ *pMVar1;
  TacticalManager *this_00;
  Body *pBVar2;
  ReferenceController *this_01;
  bool bVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *in_stack_00000004;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_38[16];
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ aDStack_28[16];
  StrategicManager *pSStack_18;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *pDStack_14;
  undefined1 uStack_10;
  int iStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pDStack_14 = in_stack_00000004;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  uStack_10 = 0;
  pSStack_18 = this;
  piVar4 = (int *)GetRelevantFleets(this);
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  iVar5 = (**(code **)(*piVar4 + 0xc))();
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent(in_stack_00000004,iVar5);
  iStack_c = 0;
  iVar5 = (**(code **)(*piVar4 + 0xc))();
  if (iStack_c < iVar5) {
    do {
      puVar6 = (undefined4 *)(**(code **)*piVar4)(&iStack_c);
      if (((ReferenceController *)puVar6[1] != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar6[1]),
         !bVar3)) {
        *puVar6 = 0;
      }
      Fleet__GetSpacecrafts((Fleet *)*puVar6);
      util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____operator__o2
                ((Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)in_stack_00000004,
                 aDStack_28);
      util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent
                ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)aDStack_28);
      iStack_c = iStack_c + 1;
      iVar5 = (**(code **)(*piVar4 + 0xc))();
      this = pSStack_18;
    } while (iStack_c < iVar5);
  }
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
            (local_38);
  GetTacticalGame_Memoize(this);
  if (*(char *)&(this->Session).PlayerAlliance == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  this_00 = *(TacticalManager **)&(*((char *)(this) + 0x6c));
  TacticalManager__GetAllBodies_Memoize(this_00);
  pMVar1 = &this_00->GetAllBodies_MemoizedValue;
  if ((this_00->GetAllBodies_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  iStack_c = 0;
  iVar5 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
  if (iVar5 <= iStack_c) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  do {
    puVar6 = (undefined4 *)(**(code **)*(int *)&pMVar1->Data)(&iStack_c);
    if (((ReferenceController *)puVar6[1] != (ReferenceController *)0x0) &&
       (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar6[1]),
       !bVar3)) {
      *puVar6 = 0;
    }
    pBVar2 = (Body *)*puVar6;
    Body__GetSpacecraftComponent_Memoize(pBVar2);
    if ((pBVar2->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if ((((pBVar2->GetSpacecraftComponent_MemoizedValue).Data.Pointer != (SpacecraftComponent *)0x0)
        && (this_01 = (pBVar2->GetSpacecraftComponent_MemoizedValue).Data.Controller,
           this_01 != (ReferenceController *)0x0)) &&
       (bVar3 = util__ReferenceController__IsDataStillValid(this_01), bVar3)) {
      if (((ReferenceController *)puVar6[1] != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar6[1]),
         !bVar3)) {
        *puVar6 = 0;
      }
      pBVar2 = (Body *)*puVar6;
      Body__GetSpacecraftComponent_Memoize(pBVar2);
      if ((pBVar2->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      piVar7 = *(int **)(pDStack_14 + 4);
      piVar4 = piVar7 + *(int *)(pDStack_14 + 8) * 2;
      if (piVar7 != piVar4) {
        do {
          if (((pBVar2->GetSpacecraftComponent_MemoizedValue).Data.Controller ==
               (ReferenceController *)piVar7[1]) &&
             ((pBVar2->GetSpacecraftComponent_MemoizedValue).Data.Pointer ==
              (SpacecraftComponent *)*piVar7)) goto LAB_007632d2;
          piVar7 = piVar7 + 2;
        } while (piVar7 != piVar4);
      }
      util__Darray_class_util__WeakPtr_class_Body_____Add
                ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)pDStack_14,
                 (WeakPtr_L_class_Body_G_ *)&pBVar2->GetSpacecraftComponent_MemoizedValue);
    }
LAB_007632d2:
    iStack_c = iStack_c + 1;
    iVar5 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
    if (iVar5 <= iStack_c) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  } while( true );
}


//==== 0000763310 00763310_GetAllShipsOfFaction ====
// decompiled by BatchDecomp @ 00763310 name=GetAllShipsOfFaction conv=__thiscall body=629

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Darray<class util::WeakPtr<class SpacecraftComponent> > __thiscall
   StrategicManager__GetAllShipsOfFaction(class Faction *)const  */

void __thiscall StrategicManager__GetAllShipsOfFaction(StrategicManager *this,Faction *param_1)

{
  Maybe_L_util__Darray_L_util__WeakPtr_L_Body_G___G___G_ *pMVar1;
  TacticalManager *this_00;
  Body *pBVar2;
  ReferenceController *this_01;
  bool bVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  Material *in_stack_00000008;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_3c[16];
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_2c[16];
  StrategicManager *local_1c;
  Faction *local_18;
  Material *local_14;
  undefined1 local_10;
  char *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_14 = in_stack_00000008;
  local_18 = param_1;
  param_1->_pad_0x0_0 = 0;
  param_1->_pad_0x0_0 = 0;
  param_1->_pad_0x0_0 = 0;
  param_1->_pad_0x0_0 = 0;
  local_10 = 0;
  local_1c = this;
  piVar4 = (int *)GetAllFleetsOfFaction(this,(Faction *)local_3c);
  param_1->_pad_0x0_0 = 0;
  param_1->_pad_0x0_0 = 0;
  param_1->_pad_0x0_0 = 0;
  param_1->_pad_0x0_0 = 0;
  iVar5 = (**(code **)(*piVar4 + 0xc))();
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)param_1,iVar5);
  local_c = (char *)0x0;
  iVar5 = (**(code **)(*piVar4 + 0xc))();
  if ((int)local_c < iVar5) {
    do {
      puVar6 = (undefined4 *)(**(code **)*piVar4)(&local_c);
      if (((ReferenceController *)puVar6[1] != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar6[1]),
         !bVar3)) {
        *puVar6 = 0;
      }
      Fleet__GetSpacecrafts((Fleet *)*puVar6);
      util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____operator__o2
                ((Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)param_1,local_2c);
      util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent
                ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_2c);
      local_c = local_c + 1;
      iVar5 = (**(code **)(*piVar4 + 0xc))();
      this = local_1c;
    } while ((int)local_c < iVar5);
  }
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
            (local_3c);
  GetTacticalGame_Memoize(this);
  if (*(char *)&(this->Session).PlayerAlliance == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  this_00 = *(TacticalManager **)&(*((char *)(this) + 0x6c));
  TacticalManager__GetAllBodies_Memoize(this_00);
  pMVar1 = &this_00->GetAllBodies_MemoizedValue;
  if ((this_00->GetAllBodies_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_c = (char *)0x0;
  iVar5 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
  if (iVar5 <= (int)local_c) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  do {
    piVar4 = (int *)(**(code **)*(int *)&pMVar1->Data)(&local_c);
    if (((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) &&
       (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]),
       !bVar3)) {
      *piVar4 = 0;
    }
    if (*(Material **)(*piVar4 + 0x1e0) == local_14) {
      if (((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]),
         !bVar3)) {
        *piVar4 = 0;
      }
      pBVar2 = (Body *)*piVar4;
      Body__GetSpacecraftComponent_Memoize(pBVar2);
      if ((pBVar2->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      if ((((pBVar2->GetSpacecraftComponent_MemoizedValue).Data.Pointer !=
            (SpacecraftComponent *)0x0) &&
          (this_01 = (pBVar2->GetSpacecraftComponent_MemoizedValue).Data.Controller,
          this_01 != (ReferenceController *)0x0)) &&
         (bVar3 = util__ReferenceController__IsDataStillValid(this_01), bVar3)) {
        if (((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) &&
           (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]),
           !bVar3)) {
          *piVar4 = 0;
        }
        pBVar2 = (Body *)*piVar4;
        Body__GetSpacecraftComponent_Memoize(pBVar2);
        if ((pBVar2->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        piVar7 = (int *)local_18->_pad_0x0_0;
        piVar4 = piVar7 + local_18->_pad_0x0_0 * 2;
        if (piVar7 != piVar4) {
          do {
            if (((pBVar2->GetSpacecraftComponent_MemoizedValue).Data.Controller ==
                 (ReferenceController *)piVar7[1]) &&
               ((pBVar2->GetSpacecraftComponent_MemoizedValue).Data.Pointer ==
                (SpacecraftComponent *)*piVar7)) goto LAB_00763547;
            piVar7 = piVar7 + 2;
          } while (piVar7 != piVar4);
        }
        util__Darray_class_util__WeakPtr_class_Body_____Add
                  ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_18,
                   (WeakPtr_L_class_Body_G_ *)&pBVar2->GetSpacecraftComponent_MemoizedValue);
      }
    }
LAB_00763547:
    local_c = local_c + 1;
    iVar5 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
    if (iVar5 <= (int)local_c) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  } while( true );
}


//==== 0000763670 00763670_GetAllianceColor ====
// decompiled by BatchDecomp @ 00763670 name=GetAllianceColor conv=__thiscall body=130

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct util__Color__Color __thiscall StrategicManager__GetAllianceColor(class Faction *)const
    */

Color * __thiscall
StrategicManager__GetAllianceColor(StrategicManager *this,Color *__return_storage_ptr__,Faction *param_1)

{
  PreferencesBase *pPVar1;
  int iVar2;
  int iVar3;
  
  pPVar1 = Manager__GetOptions((Manager *)this);
  iVar2 = (**(code **)(*(int *)pPVar1 + 0x6c))();
  if (param_1 == *(Faction **)&(this->Session).CurrentTime_s) {
    iVar3 = 0x678;
  }
  else if (param_1 == *(Faction **)((int)&(this->Session).CurrentTime_s + 4)) {
    iVar3 = 0x698;
  }
  else {
    iVar3 = 0x6d8;
    if (param_1 != (Faction *)0x0) {
      iVar3 = 0x6b8;
    }
  }
  __return_storage_ptr__->_pad_0x0_0 = (int)0x919980;
  util__Str_char___Str_char
            ((Str_L_char_G_ *)&__return_storage_ptr__->_pad_0x0_0,(Str_L_char_G_ *)(iVar2 + 4 + iVar3));
  __return_storage_ptr__->_pad_0x0_0 = (int)0x91d980;
  __return_storage_ptr__->Hue_degrees = *(float *)(iVar2 + 0x10 + iVar3);
  __return_storage_ptr__->Saturation = *(float *)(iVar2 + 0x14 + iVar3);
  __return_storage_ptr__->Value = *(float *)(iVar2 + 0x18 + iVar3);
  __return_storage_ptr__->Alpha = *(float *)(iVar2 + 0x1c + iVar3);
  return __return_storage_ptr__;
}


//==== 0000763700 00763700_GetAlliedAIDoctrine ====
// decompiled by BatchDecomp @ 00763700 name=GetAlliedAIDoctrine conv=__thiscall body=10

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct MilitaryDoctrine * __thiscall StrategicManager__GetAlliedAIDoctrine(void)const  */

MilitaryDoctrine * __thiscall StrategicManager__GetAlliedAIDoctrine(StrategicManager *this)

{
  return *(MilitaryDoctrine **)((this->Session).MessagesStored._pad_0x0_0 + 0x7c);
}


//==== 0000763710 00763710_GetCameraFocusedObject ====
#undef t /* auto(v2): compat 僵尸宏撞成员名 */
extern undefined4 FUN_00756620(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 00763710 name=GetCameraFocusedObject conv=__thiscall body=450

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct WorldObject __thiscall StrategicManager__GetCameraFocusedObject(void)const  */

WorldObject * __thiscall
StrategicManager__GetCameraFocusedObject(StrategicManager *this,WorldObject *__return_storage_ptr__)

{
  ReferenceController *this_00;
  bool bVar1;
  bool bVar2;
  WorldObject *pWVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 local_5a0;
  ReferenceController *local_59c;
  undefined4 local_598;
  NodeMouseOver local_590;
  undefined4 local_2e8;
  ReferenceController *local_2e4;
  undefined4 local_2e0;
  NodeMouseOver local_2d8;
  Darray_L_struct_WorldObject_G_ local_30[16];
  WorldObject *local_20;
  undefined4 local_1c;
  undefined4 *puStack_18;
  int iStack_14;
  undefined4 uStack_10;
  StrategicManager *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_20 = __return_storage_ptr__;
  local_1c = 0;
  puStack_18 = (undefined4 *)0x0;
  iStack_14 = 0;
  uStack_10 = 0;
  local_c = this;
  piVar5 = (int *)GetAllObjects(this);
  local_1c = 0;
  puStack_18 = (undefined4 *)0x0;
  iStack_14 = 0;
  uStack_10 = 0;
  iVar6 = (**(code **)(*piVar5 + 0xc))();
  util_Darray_struct_WorldObject_Darray_struct_WorldObject
            ((Darray_L_struct_WorldObject_G_ *)&local_1c,iVar6);
  FUN_00756620(piVar5,&local_c,&local_1c);
  util_Darray_struct_WorldObject_Darray_struct_WorldObject__o2(local_30);
  puVar4 = puStack_18;
  if (iStack_14 < 1) {
    local_2e8 = 0;
    local_2e4 = (ReferenceController *)0x0;
    local_2e0 = 0;
    ItineraryNode__ItineraryNode(&local_2d8.LastNode);
    ItineraryNode__ItineraryNode(&local_2d8.NextNode);
    puVar7 = &local_2e8;
    local_2d8.t = 0.0;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    local_59c = (ReferenceController *)puStack_18[1];
    local_5a0 = *puStack_18;
    if (local_59c != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(local_59c);
    }
    local_598 = puVar4[2];
    ItineraryNode__ItineraryNode(&local_590.LastNode,(ItineraryNode *)(puVar4 + 4));
    ItineraryNode__ItineraryNode(&local_590.NextNode,(ItineraryNode *)(puVar4 + 0x58));
    puVar7 = &local_5a0;
    local_590.t = *(double *)(puVar4 + 0xac);
    bVar2 = true;
    bVar1 = false;
  }
  pWVar3 = local_20;
  this_00 = (ReferenceController *)puVar7[1];
  (local_20->Object).Pointer = (Actor *)*puVar7;
  (local_20->Object).Controller = this_00;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
  }
  pWVar3->LPointID = puVar7[2];
  ItineraryNode__ItineraryNode(&(pWVar3->Node).LastNode,(ItineraryNode *)(puVar7 + 4));
  ItineraryNode__ItineraryNode(&(pWVar3->Node).NextNode,(ItineraryNode *)(puVar7 + 0x58));
  (pWVar3->Node).t = *(double *)(puVar7 + 0xac);
  if (bVar1) {
    NodeMouseOver_NodeMouseOver(&local_2d8);
    if (local_2e4 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_2e4);
    }
  }
  if (bVar2) {
    NodeMouseOver_NodeMouseOver(&local_590);
    if (local_59c != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_59c);
    }
  }
  util_Darray_struct_WorldObject_Darray_struct_WorldObject__o2
            ((Darray_L_struct_WorldObject_G_ *)&local_1c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return local_20;
}


//==== 00007638e0 007638e0_GetCameraHeightBounds ====
extern undefined4 FUN_00756c00(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007638e0 name=GetCameraHeightBounds conv=__thiscall body=805

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual struct Range_L_double_G_ __thiscall
   StrategicManager__GetCameraHeightBounds(void)const  */

Range_L_double_G_ * __thiscall
StrategicManager__GetCameraHeightBounds(StrategicManager *this,Range_L_double_G_ *__return_storage_ptr__)

{
  ReferenceController *this_00;
  double dVar1;
  ReferenceController *this_01;
  bool bVar2;
  CameraManager *this_02;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar3;
  void *pvVar4;
  int iVar5;
  double *pdVar6;
  CelestialObject *this_03;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  Vec3_L_double_G_ *__return_storage_ptr___00;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_78[16];
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_68[16];
  bool local_58;
  double local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined **local_3c;
  void *pvStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  Vec3_L_double_G_ local_2c;
  undefined8 local_14;
  Range_L_double_G_ *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = __return_storage_ptr__;
  if ((char)(this->Session).MessagesStored._pad_0x0_0 == '\0') {
    __return_storage_ptr___00 = &local_2c;
    this_02 = Manager__GetCameras((Manager *)this);
    CameraManager__GetCameraCenter(this_02,__return_storage_ptr___00);
    if ((this->GetCelestialObjects_MemoizedValue).IsValidData == false) {
      iVar5 = (this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size;
      local_4c = (double)CONCAT44(iVar5 + 1,(undefined4)local_4c);
      util__Darray_class_util__Reflectable____SetSize
                ((Darray_L_util__Reflectable_P_G_ *)
                 &this->StrategicManagerMemoizationHandlerInstance,(int *)((int)&local_4c + 4));
      bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                        ((Darray_L_GraphicsResource__Type_G_ *)
                         &this->StrategicManagerMemoizationHandlerInstance,iVar5);
      if (bVar2) {*(void **)&((this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Data[(this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size+-1]) = (void *)&TacticalManager_GetAllBodies_Clear;
      }
      pDVar3 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
               GetCelestialObjects_MemoizedFunction(this);
      util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_68,pDVar3);
      local_58 = true;
      util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
                ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
                 &this->GetCelestialObjects_MemoizedValue,
                 (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_68);
      (this->GetCelestialObjects_MemoizedValue).IsValidData = local_58;
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
                ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_68);
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
                (local_78);
    }
    if ((this->GetCelestialObjects_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    local_14 = (double)CONCAT44(&local_2c,this);
    local_3c = (undefined **)0x0;
    pvStack_38 = (void *)0x0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_30 = (**(code **)((this->GetCelestialObjects_MemoizedValue).Data._pad_0x0_0 + 0xc))();
    local_3c = 0x91da54;
    pvStack_38 = (void *)0x0;
    uStack_34 = 0;
    local_54 = 0.0;
    if (((int)uStack_30 < 0) || (0x3fffffff < (int)uStack_30)) {
      uStack_30 = 0;
    }
    else if (0 < (int)uStack_30) {
      uVar7 = -(uint)((int)((ulonglong)uStack_30 * 8 >> 0x20) != 0) |
              (uint)((ulonglong)uStack_30 * 8);
      pvVar4 = operator_new__(uVar7);
      if (pvVar4 == (void *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        memset(pvVar4,0,uVar7);
      }
      iVar5 = 0;
      __return_storage_ptr__ = local_c;
      pvStack_38 = pvVar4;
      if (0 < (int)uStack_30) {
        do {
          *(undefined8 *)((int)pvVar4 + iVar5 * 8) = 0;
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)uStack_30);
      }
    }
    FUN_00756c00(&this->GetCelestialObjects_MemoizedValue,&local_14,&local_3c);
    iVar5 = (*(code *)local_3c[3])();
    if (iVar5 == 0) {
      local_44 = 0.0;
    }
    else {
      local_4c = (double)((ulonglong)local_4c & 0xffffffff);
      pdVar6 = (double *)(*(code *)*local_3c)((int)&local_4c + 4);
      local_c = (Range_L_double_G_ *)0x0;
      local_44 = *pdVar6;
      iVar5 = (*(code *)local_3c[3])();
      if ((int)local_c < iVar5) {
        do {
          pdVar6 = (double *)(*(code *)*local_3c)(&local_c);
          uVar8 = *(undefined4 *)&local_44;
          uVar9 = *(undefined4 *)((char *)&local_44 + 4);
          dVar10 = *pdVar6;
          if (local_44 <= dVar10) {
            uVar8 = *(undefined4 *)&dVar10;
            uVar9 = *(undefined4 *)((char *)&dVar10 + 4);
          }
          local_c = (Range_L_double_G_ *)((int)&local_c->Lower + 1);
          local_44 = (double)CONCAT44(uVar9,uVar8);
          iVar5 = (*(code *)local_3c[3])();
        } while ((int)local_c < iVar5);
      }
    }
    local_3c = 0x91da54;
    if (pvStack_38 != (void *)0x0) {
      operator_delete__(pvStack_38);
    }
    uVar8 = 0x00000000u;
    uVar9 = (undefined4)((ulonglong)/*4024000000000000*/10.0 >> 0x20);
    if (/*4024000000000000*/10.0 <= local_44) {
      uVar8 = *(undefined4 *)&local_44;
      uVar9 = *(undefined4 *)((char *)&local_44 + 4);
    }
    local_4c = (double)CONCAT44(uVar9,uVar8) * /*3ffc000000000000*/1.75;
    local_44 = 0.0;
    GetReferenceCelestial(this);
    this_01 = ((slice_view *)&local_44)->_4_4_;
    if ((((CelestialObject *)local_44 == (CelestialObject *)0x0) ||
        (((slice_view *)&local_44)->_4_4_ == (ReferenceController *)0x0)) ||
       (bVar2 = util__ReferenceController__IsDataStillValid(((slice_view *)&local_44)->_4_4_), !bVar2)) {
      dVar10 = 0.0;
    }
    else {
      bVar2 = util__ReferenceController__IsDataStillValid(this_01);
      if (bVar2) {
        bVar2 = util__ReferenceController__IsDataStillValid(this_01);
        this_03 = (CelestialObject *)local_44;
        if (!bVar2) {
          this_03 = (CelestialObject *)0x0;
        }
        local_54 = CelestialObject__GetMaxZoomRadius_km(this_03);
      }
      this_00 = *(ReferenceController **)&(*((char *)&((this->Session).ReferenceObject) + 0xc));
      if ((this_00 != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid(this_00), !bVar2)) {
        (this->Session).ReferenceObject.LPointID = 0;
      }
      local_14 = CelestialObject__GetMaxZoomRadius_km((CelestialObject *)(this->Session).ReferenceObject.LPointID);
      dVar10 = local_14;
      if (local_14 <= local_54) {
        dVar10 = local_54;
      }
    }
    __return_storage_ptr__->Lower = local_4c;
    dVar1 = local_4c * /*4024000000000000*/10.0;
    if (local_4c * /*4024000000000000*/10.0 <= dVar10) {
      dVar1 = dVar10;
    }
    __return_storage_ptr__->Upper = dVar1;
    if (dVar1 < local_4c) {
      __return_storage_ptr__->Lower = dVar1;
      __return_storage_ptr__->Upper = local_4c;
    }
    if (this_01 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(this_01);
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return __return_storage_ptr__;
  }
  *(undefined4 *)&__return_storage_ptr__->Lower = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->Lower + 4) = 0;
  *(undefined4 *)&__return_storage_ptr__->Upper = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->Upper + 4) = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 0000763c10 00763c10_GetCelestialObject ====
extern undefined4 FUN_00759770(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 00763c10 name=GetCelestialObject conv=__thiscall body=188

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class WeakPtr_L_CelestialObject_G_ __thiscall
   StrategicManager__GetCelestialObject(struct CelestialBody *)const  */

CelestialBody * __thiscall
StrategicManager__GetCelestialObject(StrategicManager *this,CelestialBody *param_1)

{
  undefined1 stack0x00000008[0x240];
  int iVar1;
  bool bVar2;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar3;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_30[16];
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_20[16];
  bool local_10;
  int local_8;
  
  if ((this->GetCelestialObjects_MemoizedValue).IsValidData == false) {
    iVar1 = (this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size;
    local_8 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&this->StrategicManagerMemoizationHandlerInstance
               ,&local_8);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &this->StrategicManagerMemoizationHandlerInstance,iVar1);
    if (bVar2) {*(void **)&((this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Data[(this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size+-1]) = (void *)&TacticalManager_GetAllBodies_Clear;
    }
    pDVar3 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
             GetCelestialObjects_MemoizedFunction(this);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_20,pDVar3);
    local_10 = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetCelestialObjects_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_20);
    (this->GetCelestialObjects_MemoizedValue).IsValidData = local_10;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
              ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_20);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
              (local_30);
  }
  if ((this->GetCelestialObjects_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  FUN_00759770(param_1,&this->GetCelestialObjects_MemoizedValue,&stack0x00000008);
  return param_1;
}


//==== 0000763cd0 00763cd0_GetCelestialObjects_Memoize ====
// decompiled by BatchDecomp @ 00763cd0 name=GetCelestialObjects_Memoize conv=__thiscall body=130

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__GetCelestialObjects_Memoize(void)const  */

void __thiscall StrategicManager__GetCelestialObjects_Memoize(StrategicManager *this)

{
  undefined1 stack0x00000008[0x240];
  int iVar1;
  bool bVar2;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar3;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_2c[16];
  bool local_1c;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_18[16];
  int local_8;
  
  if ((this->GetCelestialObjects_MemoizedValue).IsValidData == false) {
    iVar1 = (this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size;
    local_8 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&this->StrategicManagerMemoizationHandlerInstance
               ,&local_8);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &this->StrategicManagerMemoizationHandlerInstance,iVar1);
    if (bVar2) {*(void **)&((this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Data[(this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size+-1]) = (void *)&TacticalManager_GetAllBodies_Clear;
    }
    pDVar3 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
             GetCelestialObjects_MemoizedFunction(this);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_2c,pDVar3);
    local_1c = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetCelestialObjects_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_2c);
    (this->GetCelestialObjects_MemoizedValue).IsValidData = local_1c;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
              ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_2c);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
              (local_18);
  }
  return;
}


//==== 0000763fe0 00763fe0_GetCurrentLevel ====
// decompiled by BatchDecomp @ 00763fe0 name=GetCurrentLevel conv=__thiscall body=7

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct Level * __thiscall StrategicManager__GetCurrentLevel(void)const  */

Level * __thiscall StrategicManager__GetCurrentLevel(StrategicManager *this)

{
  return (Level *)(this->Session).MessagesStored._pad_0x0_0;
}


//==== 0000763ff0 00763ff0_GetCurrentLevelRecord ====
extern undefined4 FUN_00759de0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 00763ff0 name=GetCurrentLevelRecord conv=__thiscall body=448

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct LevelRecord __thiscall StrategicManager_GetCurrentLevelRecord(void)const  */

LevelRecord * __thiscall
StrategicManager_GetCurrentLevelRecord(StrategicManager *this,LevelRecord *__return_storage_ptr__)

{
  undefined1 stack0x00000008[0x240];
  undefined8 uVar1;
  int iVar2;
  Str_L_char_G_ *pSVar3;
  double dVar4;
  uint local_1c;
  undefined1 local_18[8];
  undefined8 uStack_10;
  int iStack_c;
  char *local_8;
  
  local_8 = (char *)(__security_cookie ^ (uint)&stack0xfffffffc);
  LevelRecord__LevelRecord(__return_storage_ptr__);
  __return_storage_ptr__->ForLevel = (Level *)(this->Session).MessagesStored._pad_0x0_0;
  (*(undefined4 *)&(uVar1)) = (this->Session).InitialEnemyCompartments;
  (*(undefined4 *)((char *)&(uVar1) + 4)) = (this->Session).CombatingFleets._pad_0x0_0;
  ((slice_view *)&uStack_10)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_10)->_1_3_[0] | (((slice_view *)&uStack_10)->_1_3_[1] << 8) | (((slice_view *)&uStack_10)->_1_3_[2] << 16)) << 8));
  ((slice_view *)&local_18)->_0_4_ = (undefined4)uVar1;
  ((slice_view *)&local_18)->_4_4_ = *(undefined4 *)((char *)&uVar1 + 4);
  *(undefined4 *)&(__return_storage_ptr__->DeltaVSpent_km__s).Data = ((slice_view *)&local_18)->_0_4_;
  *(undefined4 *)((int)&(__return_storage_ptr__->DeltaVSpent_km__s).Data + 4) = ((slice_view *)&local_18)->_4_4_;
  *(uint *)&(__return_storage_ptr__->DeltaVSpent_km__s).IsValidData = uStack_10;
  *(int *)((char *)&(__return_storage_ptr__->DeltaVSpent_km__s) + 0xc) = iStack_c;
  iVar2 = (this->Session).MessagesStored._pad_0x0_0;
  if (iVar2 == 0) {
    dVar4 = 0.0;
  }
  else {
    dVar4 = (this->Session).TurnRunTimeLeft_s -
            (*(double *)(iVar2 + 0x38) - /*409f400000000000*/2000.0) * SecondsInAJulianYear_s;
  }
  ((slice_view *)&uStack_10)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_10)->_1_3_[0] | (((slice_view *)&uStack_10)->_1_3_[1] << 8) | (((slice_view *)&uStack_10)->_1_3_[2] << 16)) << 8));
  ((slice_view *)&local_18)->_0_4_ = *(undefined4 *)&dVar4;
  ((slice_view *)&local_18)->_4_4_ = *(undefined4 *)((char *)&dVar4 + 4);
  *(undefined4 *)&(__return_storage_ptr__->TimeElapsed_s).Data = ((slice_view *)&local_18)->_0_4_;
  *(undefined4 *)((int)&(__return_storage_ptr__->TimeElapsed_s).Data + 4) = ((slice_view *)&local_18)->_4_4_;
  *(uint *)&(__return_storage_ptr__->TimeElapsed_s).IsValidData = uStack_10;
  *(int *)((char *)&(__return_storage_ptr__->TimeElapsed_s) + 0xc) = iStack_c;
  if ((int)(this->Session).CombatingFleets.Data < 1) {
    *(double *)&local_18 = 0x0;
    uStack_10 = (uint)((slice_view *)&uStack_10)->_1_3_ << 8;
  }
  else {
    *(double *)&local_18 = dVar4;
    iVar2 = GetAliveAlliedCapitalShipsCount(this);
    ((slice_view *)&uStack_10)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_10)->_1_3_[0] | (((slice_view *)&uStack_10)->_1_3_[1] << 8) | (((slice_view *)&uStack_10)->_1_3_[2] << 16)) << 8));
    *(double *)&local_18 = ((double)iVar2 / (double)(int)(this->Session).CombatingFleets.Data);
  }
  *(undefined4 *)&(__return_storage_ptr__->CapitalShipsAlive_Percent).Data = ((slice_view *)&local_18)->_0_4_;
  *(undefined4 *)((int)&(__return_storage_ptr__->CapitalShipsAlive_Percent).Data + 4) =
       ((slice_view *)&local_18)->_4_4_;
  *(uint *)&(__return_storage_ptr__->CapitalShipsAlive_Percent).IsValidData = uStack_10;
  *(int *)((char *)&(__return_storage_ptr__->CapitalShipsAlive_Percent) + 0xc) = iStack_c;
  if ((this->Session).CombatingFleets.Size < 1) {
    *(double *)&local_18 = 0x0;
    uStack_10 = uStack_10 & 0xffffff00;
  }
  else {
    iVar2 = GetUnscathedAlliedCapitalShipsCount(this);
    ((slice_view *)&uStack_10)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_10)->_1_3_[0] | (((slice_view *)&uStack_10)->_1_3_[1] << 8) | (((slice_view *)&uStack_10)->_1_3_[2] << 16)) << 8));
    *(double *)&local_18 = ((double)iVar2 / (double)(this->Session).CombatingFleets.Size);
  }
  dVar4 = 0.0;
  *(undefined4 *)&(__return_storage_ptr__->CapitalShipsUnscathed_Percent).Data = ((slice_view *)&local_18)->_0_4_;
  *(undefined4 *)((int)&(__return_storage_ptr__->CapitalShipsUnscathed_Percent).Data + 4) =
       ((slice_view *)&local_18)->_4_4_;
  *(uint *)&(__return_storage_ptr__->CapitalShipsUnscathed_Percent).IsValidData = uStack_10;
  *(int *)((char *)&(__return_storage_ptr__->CapitalShipsUnscathed_Percent) + 0xc) = iStack_c;
  if ((this->Session).CombatingFleets.Capacity < 1) {
    uStack_10 = uStack_10 & 0xffffff00;
  }
  else {
    ((slice_view *)&local_18)->_0_4_ = 0;
    ((slice_view *)&local_18)->_4_4_ = 0;
    uStack_10 = 0;
    iStack_c = 0;
    GetAllShipsOfFaction(this,(Faction *)local_18);
    local_1c = local_1c & 0xffffff00;
    iVar2 = FUN_00759de0(local_18,local_1c);
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_18);
    ((slice_view *)&uStack_10)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_10)->_1_3_[0] | (((slice_view *)&uStack_10)->_1_3_[1] << 8) | (((slice_view *)&uStack_10)->_1_3_[2] << 16)) << 8));
    dVar4 = (double)iVar2 / (double)(this->Session).CombatingFleets.Capacity;
  }
  ((slice_view *)&local_18)->_0_4_ = *(undefined4 *)&dVar4;
  ((slice_view *)&local_18)->_4_4_ = *(undefined4 *)((char *)&dVar4 + 4);
  __return_storage_ptr__->IsADeveloperRecord = false;
  *(undefined4 *)&(__return_storage_ptr__->EnemyModulesLeft_Percent).Data = ((slice_view *)&local_18)->_0_4_;
  *(undefined4 *)((int)&(__return_storage_ptr__->EnemyModulesLeft_Percent).Data + 4) =
       ((slice_view *)&local_18)->_4_4_;
  *(uint *)&(__return_storage_ptr__->EnemyModulesLeft_Percent).IsValidData = uStack_10;
  *(int *)((char *)&(__return_storage_ptr__->EnemyModulesLeft_Percent) + 0xc) = iStack_c;
  *(double *)&local_18 = dVar4;
  pSVar3 = LevelRecord__GenerateName(__return_storage_ptr__,(Str_L_char_G_ *)(local_18 + 4));
  util__Str_char___operator__o8((Str_L_char_G_ *)&__return_storage_ptr__->_pad_0x0_0,pSVar3);
  if ((void *)((slice_view *)&local_18)->_4_4_ != (void *)0x0) {
    operator_delete__((void *)((slice_view *)&local_18)->_4_4_);
  }
  __security_check_cookie((uint)local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 00007641b0 007641b0_GetCurrentSelectionLocation_km ====
// decompiled by BatchDecomp @ 007641b0 name=GetCurrentSelectionLocation_km conv=__thiscall body=218

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct Vec3_L_double_G_ __thiscall
   StrategicManager__GetCurrentSelectionLocation_km(void)const  */

Vec3_L_double_G_ * __thiscall
StrategicManager__GetCurrentSelectionLocation_km(StrategicManager *this,Vec3_L_double_G_ *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Vec3_L_double_G_ VVar4;
  bool bVar5;
  int iVar6;
  Vec3_L_double_G_ *pVVar7;
  Vec3_L_double_G_ *pVVar8;
  undefined4 unaff_EDI;
  undefined1 local_84[48];
  Vec3_L_double_G_ local_54;
  Vec3_L_double_G_ local_3c;
  Vec3_L_double_G_ local_24;
  double local_c;
  
  bVar5 = ItineraryNode__IsValid((ItineraryNode *)&(this->Session).SelectedItineraryNode.LastState.Position.Y);
  if (bVar5) {
    pVVar8 = &local_24;
    (*(undefined4 *)&(local_24.X)) =
         *(undefined4 *)&(this->Session).SelectedItineraryNode.CachedReferenceShiftedPosition_km.Z;
    (*(undefined4 *)((char *)&(local_24.X) + 4)) =
         *(undefined4 *)
          ((int)&(this->Session).SelectedItineraryNode.CachedReferenceShiftedPosition_km.Z + 4);
    (*(undefined4 *)&(local_24.Y)) =
         *(undefined4 *)
          &(this->Session).SelectedItineraryNode.CachedGravityBodyReferenceShiftedPosition_km.Data.X
    ;
    (*(undefined4 *)((char *)&(local_24.Y) + 4)) =
         *(undefined4 *)
          ((int)&(this->Session).SelectedItineraryNode.CachedGravityBodyReferenceShiftedPosition_km.
                 Data.X + 4);
    local_24.Z = (this->Session).SelectedItineraryNode.CachedGravityBodyReferenceShiftedPosition_km.
                 Data.Y;
  }
  else {
    bVar5 = WorldObject__IsValid((WorldObject *)&(this->Session).SelectedObject.Node);
    if (bVar5) {
      local_c = (this->Session).TurnRunTimeLeft_s;
      iVar6 = WorldObject__GetStateAt((WorldObject *)&(this->Session).SelectedObject.Node,
                         (double)CONCAT44(SUB84(local_c,0),local_84));
      (*(undefined4 *)&(VVar4.Z)) = (int)((ulonglong)*(undefined8 *)(iVar6 + 0x10) >> 0x20);
      memcpy(&(VVar4), (void *)(16), 16);
      (*(undefined4 *)((char *)&(VVar4.Z) + 4)) = *(undefined4 *)&local_c;
      pVVar7 = GetReferenceShiftedPosition_km
                         (this,&local_54,VVar4,
                          (double)CONCAT44(unaff_EDI,(int)((ulonglong)local_c >> 0x20)));
    }
    else {
      pVVar7 = &local_24;
      (*(undefined4 *)&(local_24.X)) = 0;
      (*(undefined4 *)((char *)&(local_24.X) + 4)) = 0;
      (*(undefined4 *)&(local_24.Y)) = 0;
      (*(undefined4 *)((char *)&(local_24.Y) + 4)) = 0;
      local_24.Z = 0.0;
    }
    pVVar8 = &local_3c;
    (*(undefined4 *)&(local_3c.X)) = *(undefined4 *)&pVVar7->X;
    (*(undefined4 *)((char *)&(local_3c.X) + 4)) = *(undefined4 *)((int)&pVVar7->X + 4);
    (*(undefined4 *)&(local_3c.Y)) = *(undefined4 *)&pVVar7->Y;
    (*(undefined4 *)((char *)&(local_3c.Y) + 4)) = *(undefined4 *)((int)&pVVar7->Y + 4);
    local_3c.Z = pVVar7->Z;
  }
  uVar1 = *(undefined4 *)((int)&pVVar8->X + 4);
  uVar2 = *(undefined4 *)&pVVar8->Y;
  uVar3 = *(undefined4 *)((int)&pVVar8->Y + 4);
  *(undefined4 *)&__return_storage_ptr__->X = *(undefined4 *)&pVVar8->X;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Y = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = uVar3;
  __return_storage_ptr__->Z = pVVar8->Z;
  return __return_storage_ptr__;
}


//==== 0000764290 00764290_GetCurrentUpAxis ====
extern undefined4 FUN_007551c0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_00758290(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 00764290 name=GetCurrentUpAxis conv=__thiscall body=1317

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct Vec3_L_double_G_ __thiscall StrategicManager__GetCurrentUpAxis(bool)const  */

Vec3_L_double_G_ * __thiscall
StrategicManager__GetCurrentUpAxis(StrategicManager *this,Vec3_L_double_G_ *__return_storage_ptr__,bool param_1)

{
  static volatile int cde_l2_00764290__thread_safe_static_guard_0__ = -1;
  static undefined4 cde_l2_00764290_ID;
  undefined4 uVar1;
  Maybe_L_double_G_ MVar2;
  Maybe_L_double_G_ MVar3;
  ulong uVar4;
  void *this_00;
  bool bVar5;
  WorldObject *pWVar6;
  ulong uVar7;
  FixedOrbit *pFVar8;
  Vec3_L_double_G_ *__return_storage_ptr___00;
  int *piVar9;
  int iVar10;
  Maybe_L_struct_FixedOrbit_G_ *pMVar11;
  undefined4 unaff_EDI;
  Fleet *this_01;
  undefined4 uVar12;
  int *in_stack_fffffa1c;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  ReferenceController *pRVar16;
  WorldObject local_5d0;
  FixedOrbit local_318;
  undefined1 local_230[28];
  void *local_214;
  undefined **local_1d0;
  void *local_1cc;
  undefined1 local_148;
  undefined1 local_140[8];
  undefined4 uStack_138;
  undefined4 uStack_134;
  double local_130;
  ReferenceController local_128;
  char local_119;
  undefined1 local_118[28];
  void *local_fc;
  undefined **local_b8;
  void *local_b4;
  char local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  Fleet *local_18;
  ReferenceController *local_14;
  ReferenceController *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar5 = false;
  local_128.WeakReferenceCount = (int)__return_storage_ptr__;
  local_c = (ReferenceController *)0x0;
  uVar15 = 0x7642c7;
  local_128.Pointer = this;
  FixedOrbit__FixedOrbit((FixedOrbit *)local_118);
  local_30 = '\0';
  if (param_1) {
    in_stack_fffffa1c = (int *)0x7642dd;
    pWVar6 = GetReferenceObject(this,&local_5d0);
    pRVar16 = (pWVar6->Object).Controller;
    if ((pRVar16 != (ReferenceController *)0x0) &&
       (bVar5 = util__ReferenceController__IsDataStillValid(pRVar16), !bVar5)) {
      (pWVar6->Object).Pointer = (Actor *)0x0;
    }
    local_c = (ReferenceController *)(pWVar6->Object).Pointer;
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_00764290__thread_safe_static_guard_0__) {
      in_stack_fffffa1c = (int *)0x764784;
      _Init_thread_header(&cde_l2_00764290__thread_safe_static_guard_0__);
      if (cde_l2_00764290__thread_safe_static_guard_0__ == -1) {
        cde_l2_00764290_ID =
             util__GetHash("Fleet");
        in_stack_fffffa1c =
             &cde_l2_00764290__thread_safe_static_guard_0__;
        _Init_thread_footer(&cde_l2_00764290__thread_safe_static_guard_0__);
      }
    }
    uVar4 = cde_l2_00764290_ID;
    bVar5 = true;
    uVar15 = 0x764328;
    uVar7 = (**(code **)local_c->StrongReferenceCount)();
    local_119 = '\x01';
    if (uVar7 != uVar4) goto LAB_00764332;
  }
  else {
LAB_00764332:
    local_119 = '\0';
  }
  if (bVar5) {
    uVar15 = 0x764349;
    NodeMouseOver_NodeMouseOver(&local_5d0.Node);
    if (local_5d0.Object.Controller != (ReferenceController *)0x0) {
      uVar15 = 0x764358;
      util__ReferenceController__ReleaseWeakReference(local_5d0.Object.Controller);
    }
  }
  this_00 = local_128.Pointer;
  if (local_119 == '\0') {
    local_28 = 0;
    uStack_24 = 0;
    iStack_20 = 0;
    uStack_1c = 0;
    GetReferenceCelestial((StrategicManager *)local_128.Pointer);
    local_c = &local_128;
    piVar9 = (int *)GetRelevantFleets((StrategicManager *)this_00);
    local_28 = 0;
    uStack_24 = 0;
    iStack_20 = 0;
    uStack_1c = 0;
    iVar10 = (**(code **)(*piVar9 + 0xc))();
    util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body
              ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_28,iVar10);
    FUN_00758290(piVar9,&local_c,&local_28);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
              ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&uStack_138);
    if ((Vec3_L_double_G_ *)local_128.WeakReferenceCount != (Vec3_L_double_G_ *)0x0) {
      util__ReferenceController__ReleaseWeakReference((ReferenceController *)local_128.WeakReferenceCount);
    }
    if (iStack_20 < 1) {
      piVar9 = (int *)GetReferenceCelestial((StrategicManager *)this_00);
      if (((ReferenceController *)piVar9[1] != (ReferenceController *)0x0) &&
         (bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar9[1]),
         !bVar5)) {
        *piVar9 = 0;
      }
      pMVar11 = (Maybe_L_struct_FixedOrbit_G_ *)(*(code *)**(undefined4 **)(*piVar9 + 8))(local_230);
      util__Maybe_struct_FixedOrbit___operator((Maybe_L_struct_FixedOrbit_G_ *)local_118,pMVar11);
      local_1d0 = 0x9194a4;
      if (local_1cc != (void *)0x0) {
        operator_delete__(local_1cc);
      }
      local_1cc = (void *)0x0;
      local_1d0 = 0x919488;
      ((slice_view *)&local_230)->_24_4_ = 0x919980;
      if (local_214 != (void *)0x0) {
        operator_delete__(local_214);
        local_214 = (void *)0x0;
      }
      if ((ReferenceController *)((slice_view *)&local_230)->_16_4_ != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference((ReferenceController *)((slice_view *)&local_230)->_16_4_);
      }
      if (local_c != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_c);
      }
    }
    else {
      local_c = (ReferenceController *)((uint)local_c & 0xffffff00);
      puVar14 = &local_28;
      pRVar16 = local_c;
      FUN_007551c0(&local_18,puVar14);
      uVar15 = 0;
      uVar13 = (uint)puVar14 & 0xffffff00;
      if ((local_14 != (ReferenceController *)0x0) &&
         (bVar5 = util__ReferenceController__IsDataStillValid(local_14), !bVar5)) {
        local_18 = (Fleet *)0x0;
      }
      (*(undefined4 *)((char *)&(MVar3.Data) + 4)) = uVar13;
      (*(undefined4 *)&(MVar3.Data)) = uVar15;
      (*(undefined4 *)((char *)&(MVar3) + 8)) = pRVar16;
      (*(undefined4 *)((char *)&(MVar3) + 12)) = unaff_EDI;
      pFVar8 = Fleet__GetEstimatedOrbit(local_18,&local_318,MVar3);
      FixedOrbit__FixedOrbit((FixedOrbit *)local_230,pFVar8);
      local_148 = 1;
      util__Maybe_struct_FixedOrbit___operator
                ((Maybe_L_struct_FixedOrbit_G_ *)local_118,(Maybe_L_struct_FixedOrbit_G_ *)local_230);
      local_1d0 = 0x9194a4;
      if (local_1cc != (void *)0x0) {
        operator_delete__(local_1cc);
      }
      local_1cc = (void *)0x0;
      local_1d0 = 0x919488;
      ((slice_view *)&local_230)->_24_4_ = 0x919980;
      if (local_214 != (void *)0x0) {
        operator_delete__(local_214);
        local_214 = (void *)0x0;
      }
      if ((ReferenceController *)((slice_view *)&local_230)->_16_4_ != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference((ReferenceController *)((slice_view *)&local_230)->_16_4_);
      }
      FixedOrbit_FixedOrbit__o3(&local_318);
      if (local_14 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_14);
        util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
                  ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_28);
        goto LAB_00764479;
      }
    }
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
              ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_28);
  }
  else {
    uVar12 = 0;
    uVar13 = (uint)in_stack_fffffa1c & 0xffffff00;
    pWVar6 = GetReferenceObject((StrategicManager *)local_128.Pointer,&local_5d0);
    pRVar16 = (pWVar6->Object).Controller;
    this_01 = (Fleet *)(pWVar6->Object).Pointer;
    if (((pRVar16 != (ReferenceController *)0x0) &&
        (util__ReferenceController__AddWeakReference(pRVar16), pRVar16 != (ReferenceController *)0x0
        )) && (bVar5 = util__ReferenceController__IsDataStillValid(pRVar16), !bVar5)) {
      this_01 = (Fleet *)0x0;
    }
    (*(undefined4 *)((char *)&(MVar2.Data) + 4)) = uVar13;
    (*(undefined4 *)&(MVar2.Data)) = uVar12;
    (*(undefined4 *)((char *)&(MVar2) + 8)) = uVar15;
    (*(undefined4 *)((char *)&(MVar2) + 12)) = unaff_EDI;
    pFVar8 = Fleet__GetEstimatedOrbit(this_01,&local_318,MVar2);
    FixedOrbit__FixedOrbit((FixedOrbit *)local_230,pFVar8);
    local_148 = 1;
    util__Maybe_struct_FixedOrbit___operator
              ((Maybe_L_struct_FixedOrbit_G_ *)local_118,(Maybe_L_struct_FixedOrbit_G_ *)local_230);
    local_1d0 = 0x9194a4;
    if (local_1cc != (void *)0x0) {
      operator_delete__(local_1cc);
    }
    local_1cc = (void *)0x0;
    local_1d0 = 0x919488;
    ((slice_view *)&local_230)->_24_4_ = 0x919980;
    if (local_214 != (void *)0x0) {
      operator_delete__(local_214);
      local_214 = (void *)0x0;
    }
    if ((ReferenceController *)((slice_view *)&local_230)->_16_4_ != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference((ReferenceController *)((slice_view *)&local_230)->_16_4_);
    }
    FixedOrbit_FixedOrbit__o3(&local_318);
    if (pRVar16 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(pRVar16);
    }
    NodeMouseOver_NodeMouseOver(&local_5d0.Node);
    __return_storage_ptr__ = (Vec3_L_double_G_ *)local_128.WeakReferenceCount;
    if (local_5d0.Object.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_5d0.Object.Controller);
      __return_storage_ptr__ = (Vec3_L_double_G_ *)local_128.WeakReferenceCount;
    }
  }
LAB_00764479:
  __return_storage_ptr___00 = (Vec3_L_double_G_ *)local_140;
  if (local_30 == '\0') {
    ((slice_view *)&local_140)->_0_4_ = 0;
    ((slice_view *)&local_140)->_4_4_ = 0;
    uStack_138 = 0;
    uStack_134 = 0;
    local_130 = /*3ff0000000000000*/1.0;
  }
  else {
    __return_storage_ptr___00 =
         FixedOrbit__GetUpVector((FixedOrbit *)local_118,__return_storage_ptr___00);
  }
  uVar15 = *(undefined4 *)((int)&__return_storage_ptr___00->X + 4);
  uVar12 = *(undefined4 *)&__return_storage_ptr___00->Y;
  uVar1 = *(undefined4 *)((int)&__return_storage_ptr___00->Y + 4);
  *(undefined4 *)&__return_storage_ptr__->X = *(undefined4 *)&__return_storage_ptr___00->X;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = uVar15;
  *(undefined4 *)&__return_storage_ptr__->Y = uVar12;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = uVar1;
  __return_storage_ptr__->Z = __return_storage_ptr___00->Z;
  local_b8 = 0x9194a4;
  if (local_b4 != (void *)0x0) {
    operator_delete__(local_b4);
  }
  local_b4 = (void *)0x0;
  local_b8 = 0x919488;
  ((slice_view *)&local_118)->_24_4_ = 0x919980;
  if (local_fc != (void *)0x0) {
    operator_delete__(local_fc);
    local_fc = (void *)0x0;
  }
  if ((ReferenceController *)((slice_view *)&local_118)->_16_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)((slice_view *)&local_118)->_16_4_);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 00007647c0 007647c0_GetDeadlineTimeLeft_s ====
// decompiled by BatchDecomp @ 007647c0 name=GetDeadlineTimeLeft_s conv=__thiscall body=206

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util__Maybe_L_double_G_ __thiscall StrategicManager__GetDeadlineTimeLeft_s(void)const
    */

Maybe_L_double_G_ * __thiscall
StrategicManager__GetDeadlineTimeLeft_s(StrategicManager *this,Maybe_L_double_G_ *__return_storage_ptr__)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  iVar1 = (this->Session).MessagesStored._pad_0x0_0;
  if ((iVar1 == 0) || (dVar3 = *(double *)(iVar1 + 0x40), dVar3 <= 0.0)) {
    __return_storage_ptr__->Data = 0.0;
    __return_storage_ptr__->IsValidData = false;
    return __return_storage_ptr__;
  }
  if ((iVar1 != 0) && (0.0 < dVar3)) {
    dVar3 = dVar3 * SecondsInAJulianDay_s;
    dVar2 = (*(double *)(iVar1 + 0x38) - /*409f400000000000*/2000.0) * SecondsInAJulianYear_s;
    __return_storage_ptr__->IsValidData = true;
    dVar2 = (dVar2 + dVar3) - (this->Session).TurnRunTimeLeft_s;
    dVar3 = 0.0;
    if (0.0 <= dVar2) {
      dVar3 = dVar2;
    }
    __return_storage_ptr__->Data = dVar3;
    return __return_storage_ptr__;
  }
  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                  "IsValid()",(char *)0x0);
  DebugBreak();
  dVar2 = 0.0 - (this->Session).TurnRunTimeLeft_s;
  dVar3 = 0.0;
  if (0.0 <= dVar2) {
    dVar3 = dVar2;
  }
  __return_storage_ptr__->IsValidData = true;
  __return_storage_ptr__->Data = dVar3;
  return __return_storage_ptr__;
}


//==== 00007648a0 007648a0_GetEnemyAlliance ====
// decompiled by BatchDecomp @ 007648a0 name=GetEnemyAlliance conv=__thiscall body=4

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class Faction * __thiscall StrategicManager__GetEnemyAlliance(void)const  */

Faction * __thiscall StrategicManager__GetEnemyAlliance(StrategicManager *this)

{
  return *(Faction **)((int)&(this->Session).CurrentTime_s + 4);
}


//==== 00007648b0 007648b0_GetFailureDeadline_s ====
// decompiled by BatchDecomp @ 007648b0 name=GetFailureDeadline_s conv=__thiscall body=92

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util__Maybe_L_double_G_ __thiscall StrategicManager__GetFailureDeadline_s(void)const
    */

Maybe_L_double_G_ * __thiscall
StrategicManager__GetFailureDeadline_s(StrategicManager *this,Maybe_L_double_G_ *__return_storage_ptr__)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  iVar1 = (this->Session).MessagesStored._pad_0x0_0;
  if ((iVar1 != 0) && (0.0 < *(double *)(iVar1 + 0x40))) {
    dVar3 = *(double *)(iVar1 + 0x40) * SecondsInAJulianDay_s;
    dVar2 = (*(double *)(iVar1 + 0x38) - /*409f400000000000*/2000.0) * SecondsInAJulianYear_s;
    __return_storage_ptr__->IsValidData = true;
    __return_storage_ptr__->Data = dVar2 + dVar3;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Data = 0.0;
  __return_storage_ptr__->IsValidData = false;
  return __return_storage_ptr__;
}


//==== 0000764910 00764910_GetFakeOrbitForSolarEscape ====
// decompiled by BatchDecomp @ 00764910 name=GetFakeOrbitForSolarEscape conv=__thiscall body=1020

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct FixedOrbit __thiscall StrategicManager__GetFakeOrbitForSolarEscape(struct
   util::PhysicalState<struct util::Vec3<double> >,double)const  */

FixedOrbit * __thiscall
StrategicManager__GetFakeOrbitForSolarEscape(StrategicManager *this,FixedOrbit *__return_storage_ptr__,undefined4 param_3,
          undefined4 param_4,undefined4 param_5,undefined4 param_6,double param_7,double param_8,
          double param_9,double param_10,undefined8 param_11)

{
  Vec3_L_double_G_ VVar1;
  Vec3_L_double_G_ VVar2;
  Vec3_L_double_G_ VVar3;
  Vec3_L_double_G_ VVar4;
  bool bVar5;
  undefined4 *puVar6;
  double *pdVar7;
  int iVar8;
  Vec3_L_double_G_ *pVVar9;
  Maybe_L_double_G_ *pMVar10;
  FixedOrbit *pFVar11;
  Vec3_L_double_G_ *pVVar12;
  undefined1 local_1c4[16];
  ReferenceController *local_1b4;
  undefined **local_1ac;
  void *local_1a8;
  undefined **local_164;
  void *local_160;
  undefined1 local_d4[24];
  Vec3_L_double_G_ local_bc;
  undefined1 local_a4[16];
  double local_94;
  Vec3_L_double_G_ VStack_8c;
  Vec3_L_double_G_ local_74;
  ReferenceController *local_58;
  ReferenceController *local_50;
  Vec3_L_double_G_ local_4c;
  undefined1 local_34[16];
  double local_24;
  undefined8 local_1c;
  double local_14;
  undefined8 local_c;
  
  local_1c = param_11;
  puVar6 = (undefined4 *)GetUltimateRootObject(this);
  if ((ReferenceController *)puVar6[1] != (ReferenceController *)0x0) {
    bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar6[1]);
    if (!bVar5) {
      *puVar6 = 0;
    }
  }
  pdVar7 = (double *)
           CelestialObject__GetStateAt((CelestialObject *)*puVar6,(double)CONCAT44((int)local_1c,local_d4));
  ((slice_view *)&local_34)->_0_8_ = *pdVar7 - (double)CONCAT44(param_4,param_3);
  ((slice_view *)&local_34)->_8_8_ = pdVar7[1] - (double)CONCAT44(param_6,param_5);
  local_24 = pdVar7[2] - param_7;
  if (((slice_view *)&local_c)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_c)->_4_4_);
  }
  util__Vec3_double___SafeNormalized((Vec3_L_double_G_ *)local_34,&local_74);
  puVar6 = (undefined4 *)GetUltimateRootObject(this);
  if ((ReferenceController *)puVar6[1] != (ReferenceController *)0x0) {
    bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar6[1]);
    if (!bVar5) {
      *puVar6 = 0;
    }
  }
  iVar8 = CelestialObject__GetStateAt((CelestialObject *)*puVar6,(double)CONCAT44((int)local_1c,local_d4));
  local_4c.X = param_8 - *(double *)(iVar8 + 0x18);
  local_4c.Y = param_9 - *(double *)(iVar8 + 0x20);
  local_4c.Z = param_10 - *(double *)(iVar8 + 0x28);
  util__Vec3_double___SafeNormalized(&local_4c,&VStack_8c);
  if (((slice_view *)&local_c)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_c)->_4_4_);
  }
  pVVar12 = &local_bc;
  (*(undefined4 *)((char *)&(VVar1.X) + 4)) = (*(undefined4 *)&(VStack_8c.Y));
  (*(undefined4 *)&(VVar1.X)) = (*(undefined4 *)((char *)&(VStack_8c.X) + 4));
  (*(undefined4 *)&(VVar1.Y)) = (*(undefined4 *)((char *)&(VStack_8c.Y) + 4));
  (*(undefined4 *)((char *)&(VVar1.Y) + 4)) = *(undefined4 *)&VStack_8c.Z;
  (*(undefined4 *)&(VVar1.Z)) = (int)((ulonglong)VStack_8c.Z >> 0x20);
  (*(undefined4 *)((char *)&(VVar1.Z) + 4)) = (*(undefined4 *)&(local_74.X));
  (*(undefined4 *)((char *)&(VVar3.X) + 4)) = (*(undefined4 *)&(local_74.Y));
  (*(undefined4 *)&(VVar3.X)) = (*(undefined4 *)((char *)&(local_74.X) + 4));
  (*(undefined4 *)&(VVar3.Y)) = (*(undefined4 *)((char *)&(local_74.Y) + 4));
  (*(undefined4 *)((char *)&(VVar3.Y) + 4)) = *(undefined4 *)&local_74.Z;
  (*(undefined4 *)&(VVar3.Z)) = (int)((ulonglong)local_74.Z >> 0x20);
  (*(undefined4 *)((char *)&(VVar3.Z) + 4)) = pVVar12;
  pVVar9 = util__CalcSafePerpendicular_double(&VStack_8c,*(Vec4_L_double_G_ *)&(VVar1),VVar3);
  util__Vec3_double___SafeNormalized(pVVar9,pVVar12);
  pVVar12 = &local_4c;
  (*(undefined4 *)((char *)&(VVar2.X) + 4)) = (*(undefined4 *)&(local_74.Y));
  (*(undefined4 *)&(VVar2.X)) = (*(undefined4 *)((char *)&(local_74.X) + 4));
  (*(undefined4 *)&(VVar2.Y)) = (*(undefined4 *)((char *)&(local_74.Y) + 4));
  (*(undefined4 *)((char *)&(VVar2.Y) + 4)) = *(undefined4 *)&local_74.Z;
  (*(undefined4 *)&(VVar2.Z)) = (int)((ulonglong)local_74.Z >> 0x20);
  (*(undefined4 *)((char *)&(VVar2.Z) + 4)) = (*(undefined4 *)&(local_bc.X));
  (*(undefined4 *)((char *)&(VVar4.X) + 4)) = (*(undefined4 *)&(local_bc.Y));
  (*(undefined4 *)&(VVar4.X)) = (*(undefined4 *)((char *)&(local_bc.X) + 4));
  (*(undefined4 *)&(VVar4.Y)) = (*(undefined4 *)((char *)&(local_bc.Y) + 4));
  (*(undefined4 *)((char *)&(VVar4.Y) + 4)) = *(undefined4 *)&local_bc.Z;
  (*(undefined4 *)&(VVar4.Z)) = (int)((ulonglong)local_bc.Z >> 0x20);
  (*(undefined4 *)((char *)&(VVar4.Z) + 4)) = pVVar12;
  pVVar9 = util__CalcSafePerpendicular_double(&local_bc,*(Vec4_L_double_G_ *)&(VVar2),VVar4);
  util__Vec3_double___SafeNormalized(pVVar9,pVVar12);
  local_c = (double)((slice_view *)&local_34)->_8_8_ * (double)((slice_view *)&local_34)->_8_8_ +
            (double)((slice_view *)&local_34)->_0_8_ * (double)((slice_view *)&local_34)->_0_8_ + local_24 * local_24;
  pMVar10 = util__Sqrt((Maybe_L_double_G_ *)(local_34 + 8),(double *)&local_c);
  if (pMVar10->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_14 = pMVar10->Data;
  puVar6 = (undefined4 *)GetUltimateRootObject(this);
  if ((ReferenceController *)puVar6[1] != (ReferenceController *)0x0) {
    bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar6[1]);
    if (!bVar5) {
      *puVar6 = 0;
    }
  }
  local_14 = CelestialObject__GetCircularOrbitalSpeed_km__s((CelestialObject *)*puVar6,local_14);
  puVar6 = (undefined4 *)GetUltimateRootObject(this);
  if ((ReferenceController *)puVar6[1] != (ReferenceController *)0x0) {
    bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar6[1]);
    if (!bVar5) {
      *puVar6 = 0;
    }
  }
  iVar8 = CelestialObject__GetStateAt((CelestialObject *)*puVar6,(double)CONCAT44((int)local_1c,local_a4));
  local_bc.X = local_4c.X * local_14 + *(double *)(iVar8 + 0x18);
  local_bc.Y = local_4c.Y * local_14 + *(double *)(iVar8 + 0x20);
  local_14 = local_4c.Z * local_14 + *(double *)(iVar8 + 0x28);
  if (local_50 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_50);
  }
  if (local_58 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_58);
  }
  local_94 = param_7;
  (*(undefined4 *)&(VStack_8c.X)) = (*(undefined4 *)&(local_bc.X));
  (*(undefined4 *)((char *)&(VStack_8c.X) + 4)) = (*(undefined4 *)((char *)&(local_bc.X) + 4));
  (*(undefined4 *)&(VStack_8c.Y)) = (*(undefined4 *)&(local_bc.Y));
  (*(undefined4 *)((char *)&(VStack_8c.Y) + 4)) = (*(undefined4 *)((char *)&(local_bc.Y) + 4));
  VStack_8c.Z = local_14;
  GetUltimateRootObject(this);
  pFVar11 = (FixedOrbit *)FixedOrbit__GenerateFromOrbitalState(local_1c4);
  if (*(char *)&pFVar11[1].OrbitedBody.Pointer == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  FixedOrbit__FixedOrbit(__return_storage_ptr__,pFVar11);
  local_164 = 0x9194a4;
  if (local_160 != (void *)0x0) {
    operator_delete__(local_160);
  }
  local_160 = (void *)0x0;
  local_164 = 0x919488;
  local_1ac = 0x919980;
  if (local_1a8 != (void *)0x0) {
    operator_delete__(local_1a8);
    local_1a8 = (void *)0x0;
  }
  if (local_1b4 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_1b4);
  }
  return __return_storage_ptr__;
}


//==== 0000764e30 00764e30_GetFleetsOrbitingObject ====
extern undefined4 FUN_00758290(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 00764e30 name=GetFleetsOrbitingObject conv=__thiscall body=113

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Darray<class util::WeakPtr<class Fleet> > __thiscall
   StrategicManager__GetFleetsOrbitingObject(class WeakPtr_L_CelestialObject_G_)const  */

void __thiscall
StrategicManager__GetFleetsOrbitingObject(StrategicManager *this,Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_2,
          undefined4 param_3,ReferenceController *param_4)

{
  int *piVar1;
  int iVar2;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_1c[16];
  undefined1 *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = (undefined1 *)&param_3;
  piVar1 = (int *)GetRelevantFleets(this);
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body
            (param_2,iVar2);
  FUN_00758290(piVar1,&local_c,param_2);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
            (local_1c);
  if (param_4 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000764eb0 00764eb0_GetForcedCameraUp ====
// decompiled by BatchDecomp @ 00764eb0 name=GetForcedCameraUp conv=__thiscall body=112

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::Maybe<struct util::Vec3<double> > __thiscall
   StrategicManager__GetForcedCameraUp(void)const  */

void __thiscall StrategicManager__GetForcedCameraUp(StrategicManager *this)

{
  bool bVar1;
  Preferences *this_00;
  Vec3_L_double_G_ *pVVar2;
  undefined4 *in_stack_00000004;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  double local_2c;
  bool local_24;
  Vec3_L_double_G_ local_1c;
  
  this_00 = (Preferences *)Manager__GetOptions((Manager *)this);
  bVar1 = Preferences__IsLockCameraToPlane(this_00);
  if (!bVar1) {
    local_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    local_2c = 0.0;
  }
  else {
    pVVar2 = GetCurrentUpAxis(this,&local_1c,false);
    local_3c = *(undefined4 *)&pVVar2->X;
    uStack_38 = *(undefined4 *)((int)&pVVar2->X + 4);
    uStack_34 = *(undefined4 *)&pVVar2->Y;
    uStack_30 = *(undefined4 *)((int)&pVVar2->Y + 4);
    local_2c = pVVar2->Z;
  }
  local_24 = bVar1;
  *in_stack_00000004 = local_3c;
  in_stack_00000004[1] = uStack_38;
  in_stack_00000004[2] = uStack_34;
  in_stack_00000004[3] = uStack_30;
  *(double *)(in_stack_00000004 + 4) = local_2c;
  *(bool *)(in_stack_00000004 + 6) = local_24;
  return;
}


//==== 0000765290 00765290_GetGameplayRelevantCelestialObjects_MemoizedFunction ====
// decompiled by BatchDecomp @ 00765290 name=GetGameplayRelevantCelestialObjects_MemoizedFunction conv=__thiscall body=453

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: class util::Darray<class util::WeakPtr<class CelestialObject> > __thiscall
   StrategicManager__GetGameplayRelevantCelestialObjects_MemoizedFunction(void)const  */

void __thiscall
StrategicManager__GetGameplayRelevantCelestialObjects_MemoizedFunction(StrategicManager *this)

{
  CelestialObject *this_00;
  ReferenceController *this_01;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *pDVar1;
  bool bVar2;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar3;
  int iVar4;
  undefined4 *puVar5;
  Maybe_L_util__Darray_L_util__WeakPtr_L_CelestialObject_G___G___G_ *pMVar6;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *in_stack_00000004;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_3c[16];
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_2c[16];
  bool local_1c;
  ReferenceController *local_18;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *local_14;
  int local_10;
  undefined1 local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  local_14 = in_stack_00000004;
  if ((this->GetCelestialObjects_MemoizedValue).IsValidData == false) {
    iVar4 = (this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size;
    local_10 = iVar4 + 1;
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&this->StrategicManagerMemoizationHandlerInstance
               ,&local_10);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &this->StrategicManagerMemoizationHandlerInstance,iVar4);
    if (bVar2) {*(void **)&((this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Data[(this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size+-1]) = (void *)&TacticalManager_GetAllBodies_Clear;
    }
    pDVar3 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
             GetCelestialObjects_MemoizedFunction(this);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_2c,pDVar3);
    local_1c = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetCelestialObjects_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_2c);
    (this->GetCelestialObjects_MemoizedValue).IsValidData = local_1c;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
              ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_2c);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
              (local_3c);
  }
  pDVar1 = local_14;
  pMVar6 = &this->GetCelestialObjects_MemoizedValue;
  if ((this->GetCelestialObjects_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  *(undefined4 *)pDVar1 = 0;
  *(undefined4 *)(pDVar1 + 4) = 0;
  *(undefined4 *)(pDVar1 + 8) = 0;
  *(undefined4 *)(pDVar1 + 0xc) = 0;
  iVar4 = (**(code **)(*(int *)&pMVar6->Data + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body
            (pDVar1,iVar4);
  local_10 = 0;
  iVar4 = (**(code **)(*(int *)&pMVar6->Data + 0xc))();
  if (local_10 < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)*(int *)&pMVar6->Data)(&local_10);
      if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
         !bVar2)) {
        *puVar5 = 0;
      }
      this_00 = (CelestialObject *)*puVar5;
      CelestialObject__IsGameplayRelevant_Memoize(this_00);
      if ((this_00->IsGameplayRelevant_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      if ((this_00->IsGameplayRelevant_MemoizedValue).Data != false) {
        iVar4 = *(int *)(local_14 + 8);
        local_18 = (ReferenceController *)(iVar4 + 1);
        util__Darray_class_util__WeakPtr_class_Body_____SetSize(local_14,(int *)&local_18);
        pDVar1 = local_14;
        bVar2 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(local_14,iVar4);
        if (bVar2) {
          iVar4 = *(int *)(pDVar1 + 4) + *(int *)(pDVar1 + 8) * 8;
          local_18 = *(ReferenceController **)(iVar4 + -4);
          *(undefined4 *)(iVar4 + -8) = *puVar5;
          this_01 = (ReferenceController *)puVar5[1];
          *(ReferenceController **)(iVar4 + -4) = this_01;
          if (this_01 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this_01);
          }
          if (local_18 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(local_18);
          }
        }
      }
      local_10 = local_10 + 1;
      iVar4 = (**(code **)(*(int *)&pMVar6->Data + 0xc))();
    } while (local_10 < iVar4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000765460 00765460_GetGameplayRelevantRoot ====
// decompiled by BatchDecomp @ 00765460 name=GetGameplayRelevantRoot conv=__thiscall body=40

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class WeakPtr_L_CelestialObject_G_ __thiscall
   StrategicManager__GetGameplayRelevantRoot(void)const  */

undefined4 * __thiscall StrategicManager__GetGameplayRelevantRoot(StrategicManager *this)

{
  ReferenceController *this_00;
  undefined4 *in_stack_00000004;
  
  this_00 = (this->Session).ReferenceObject.Object.Controller;
  *in_stack_00000004 = (this->Session).ReferenceObject.Object.Pointer;
  in_stack_00000004[1] = this_00;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
  }
  return in_stack_00000004;
}


//==== 0000765510 00765510_GetGravitationallyRelevantCelestialObjects_MemoizedFunction ====
// decompiled by BatchDecomp @ 00765510 name=GetGravitationallyRelevantCelestialObjects_MemoizedFunction conv=__thiscall body=463

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: class util::Darray<class util::WeakPtr<class CelestialObject> > __thiscall
   StrategicManager__GetGravitationallyRelevantCelestialObjects_MemoizedFunction(void)const  */

void __thiscall
StrategicManager__GetGravitationallyRelevantCelestialObjects_MemoizedFunction(StrategicManager *this)

{
  Maybe_L_util__Darray_L_util__WeakPtr_L_CelestialObject_G___G___G_ *pMVar1;
  ReferenceController *pRVar2;
  ReferenceController *this_00;
  bool bVar3;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar4;
  int iVar5;
  int *piVar6;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *this_01;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *in_stack_00000004;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_40[16];
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_30[16];
  bool local_20;
  int local_1c;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *local_18;
  char local_11;
  StrategicManager *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_18 = in_stack_00000004;
  if ((this->GetCelestialObjects_MemoizedValue).IsValidData == false) {
    iVar5 = (this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size;
    local_c = iVar5 + 1;
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&this->StrategicManagerMemoizationHandlerInstance
               ,&local_c);
    bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &this->StrategicManagerMemoizationHandlerInstance,iVar5);
    if (bVar3) {*(void **)&((this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Data[(this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size+-1]) = (void *)&TacticalManager_GetAllBodies_Clear;
    }
    pDVar4 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
             GetCelestialObjects_MemoizedFunction(this);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_30,pDVar4);
    local_20 = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetCelestialObjects_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_30);
    (this->GetCelestialObjects_MemoizedValue).IsValidData = local_20;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
              ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_30);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
              (local_40);
  }
  this_01 = local_18;
  pMVar1 = &this->GetCelestialObjects_MemoizedValue;
  if ((this->GetCelestialObjects_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  *(undefined4 *)this_01 = 0;
  *(undefined4 *)(this_01 + 4) = 0;
  *(undefined4 *)(this_01 + 8) = 0;
  *(undefined4 *)(this_01 + 0xc) = 0;
  local_10 = this;
  iVar5 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body
            (this_01,iVar5);
  local_c = 0;
  iVar5 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
  if (local_c < iVar5) {
    do {
      piVar6 = (int *)(**(code **)*(int *)&pMVar1->Data)(&local_c);
      if (((ReferenceController *)piVar6[1] != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar6[1]),
         !bVar3)) {
        *piVar6 = 0;
      }
      bVar3 = CelestialObject__IsOriginAParent((CelestialObject *)*piVar6);
      if (bVar3) {
LAB_00765664:
        iVar5 = *(int *)(this_01 + 8);
        local_1c = iVar5 + 1;
        util__Darray_class_util__WeakPtr_class_Body_____SetSize(local_18,&local_1c);
        this_01 = local_18;
        bVar3 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(local_18,iVar5);
        if (bVar3) {
          pRVar2 = *(ReferenceController **)(*(int *)(this_01 + 4) + -4 + *(int *)(this_01 + 8) * 8)
          ;
          iVar5 = *(int *)(this_01 + 4) + *(int *)(this_01 + 8) * 8;
          *(int *)(iVar5 + -8) = *piVar6;
          this_00 = (ReferenceController *)piVar6[1];
          *(ReferenceController **)(iVar5 + -4) = this_00;
          if (this_00 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this_00);
          }
          this_01 = local_18;
          if (pRVar2 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(pRVar2);
            this_01 = local_18;
          }
        }
      }
      else {
        pRVar2 = (ReferenceController *)piVar6[1];
        local_1c = *piVar6;
        if (pRVar2 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar2);
        }
        if ((pRVar2 != *(ReferenceController **)&(*((char *)&((local_10->Session).ReferenceObject) + 0xc))) ||
           (local_11 = '\x01', local_1c != (local_10->Session).ReferenceObject.LPointID)) {
          local_11 = '\0';
        }
        if (pRVar2 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar2);
        }
        this_01 = local_18;
        if (local_11 != '\0') goto LAB_00765664;
      }
      local_c = local_c + 1;
      iVar5 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
    } while (local_c < iVar5);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007656e0 007656e0_GetHierarchyToObject ====
// decompiled by BatchDecomp @ 007656e0 name=GetHierarchyToObject conv=__thiscall body=356

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: class util::Darray<class util::WeakPtr<class CelestialObject> > __thiscall
   StrategicManager__GetHierarchyToObject(class WeakPtr_L_CelestialObject_G_)const  */

Darray_L_class_util__WeakPtr_L_class_Body_G___G_ * __thiscall
StrategicManager__GetHierarchyToObject(undefined4 param_1,Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_2,
          CelestialObject *param_3,ReferenceController *param_4)

{
  ReferenceController *pRVar1;
  ReferenceController *this;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ReferenceController *local_14;
  int local_10;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *local_c;
  int local_8;
  
  local_c = param_2;
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body
            (param_2,1);
  do {
    if (((param_3 == (CelestialObject *)0x0) || (param_4 == (ReferenceController *)0x0)) ||
       (bVar2 = util__ReferenceController__IsDataStillValid(param_4), !bVar2)) {
      if (param_4 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(param_4);
      }
      return param_2;
    }
    iVar3 = (**(code **)(*(int *)param_2 + 0xc))();
    if (-1 < iVar3) {
      iVar3 = *(int *)(param_2 + 8);
      local_10 = iVar3 + 1;
      local_8 = iVar3;
      util__Darray_class_util__WeakPtr_class_Body_____SetSize(param_2,&local_10);
      bVar2 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(param_2,iVar3);
      if ((bVar2) &&
         (puVar4 = *(undefined4 **)(param_2 + 4) + (*(int *)(param_2 + 8) + -1) * 2,
         *(undefined4 **)(param_2 + 4) <= puVar4)) {
        puVar5 = puVar4 + 1;
        do {
          pRVar1 = (ReferenceController *)*puVar5;
          if (local_8 == 0) {
            *puVar4 = param_3;
            *puVar5 = param_4;
            if (param_4 != (ReferenceController *)0x0) {
              util__ReferenceController__AddWeakReference(param_4);
            }
            param_2 = local_c;
            if (pRVar1 != (ReferenceController *)0x0) {
              util__ReferenceController__ReleaseWeakReference(pRVar1);
              param_2 = local_c;
            }
            break;
          }
          *puVar4 = puVar5[-3];
          this = (ReferenceController *)puVar5[-2];
          *puVar5 = this;
          if (this != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this);
          }
          if (pRVar1 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(pRVar1);
          }
          puVar4 = puVar4 + -2;
          puVar5 = puVar5 + -2;
          local_8 = local_8 + -1;
          param_2 = local_c;
        } while (*(undefined4 **)(local_c + 4) <= puVar4);
      }
    }
    if ((param_4 != (ReferenceController *)0x0) &&
       (bVar2 = util__ReferenceController__IsDataStillValid(param_4), !bVar2)) {
      param_3 = (CelestialObject *)0x0;
    }
    puVar4 = (undefined4 *)CelestialObject__GetOrbitedObject(param_3);
    param_3 = (CelestialObject *)*puVar4;
    pRVar1 = (ReferenceController *)puVar4[1];
    if (pRVar1 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar1);
    }
    if (param_4 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(param_4);
    }
    param_4 = pRVar1;
    if (local_14 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_14);
    }
  } while( true );
}


//==== 0000765af0 00765af0_GetIlluminatorObject ====
extern undefined4 FUN_00755c40(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 00765af0 name=GetIlluminatorObject conv=__thiscall body=297

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class WeakPtr_L_CelestialObject_G_ __thiscall
   StrategicManager__GetIlluminatorObject(void)const  */

ReferenceController * __thiscall StrategicManager__GetIlluminatorObject(StrategicManager *this)

{
  int iVar1;
  bool bVar2;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar3;
  ReferenceController *this_00;
  ReferenceController *this_01;
  ReferenceController *in_stack_00000004;
  int local_48;
  ReferenceController *local_44;
  char local_38;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_30[16];
  bool local_20;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_1c[16];
  undefined4 local_c;
  int local_8;
  
  local_c = 0;
  if ((this->GetCelestialObjects_MemoizedValue).IsValidData == false) {
    iVar1 = (this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size;
    local_8 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&this->StrategicManagerMemoizationHandlerInstance
               ,&local_8);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &this->StrategicManagerMemoizationHandlerInstance,iVar1);
    if (bVar2) {*(void **)&((this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Data[(this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size+-1]) = (void *)&TacticalManager_GetAllBodies_Clear;
    }
    pDVar3 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
             GetCelestialObjects_MemoizedFunction(this);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_30,pDVar3);
    local_20 = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetCelestialObjects_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_30);
    (this->GetCelestialObjects_MemoizedValue).IsValidData = local_20;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
              ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_30);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
              (local_1c);
  }
  if ((this->GetCelestialObjects_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  FUN_00755c40(&local_48,&this->GetCelestialObjects_MemoizedValue,local_c);
  if (local_38 == '\0') {
    local_48 = 0;
    bVar2 = false;
    this_00 = (ReferenceController *)0x0;
    this_01 = in_stack_00000004;
  }
  else {
    if (local_44 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(local_44);
    }
    bVar2 = true;
    this_00 = local_44;
    this_01 = local_44;
  }
  in_stack_00000004->StrongReferenceCount = local_48;
  in_stack_00000004->WeakReferenceCount = (int)this_00;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
  }
  if ((this_01 != (ReferenceController *)0x0) && (bVar2)) {
    util__ReferenceController__ReleaseWeakReference(this_01);
  }
  if (local_44 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_44);
  }
  return in_stack_00000004;
}


//==== 0000765c20 00765c20_GetInitialDeadlineTime_s ====
// decompiled by BatchDecomp @ 00765c20 name=GetInitialDeadlineTime_s conv=__thiscall body=70

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util__Maybe_L_double_G_ __thiscall
   StrategicManager__GetInitialDeadlineTime_s(void)const  */

Maybe_L_double_G_ * __thiscall
StrategicManager__GetInitialDeadlineTime_s(StrategicManager *this,Maybe_L_double_G_ *__return_storage_ptr__)

{
  double dVar1;
  int iVar2;
  
  iVar2 = (this->Session).MessagesStored._pad_0x0_0;
  if ((iVar2 != 0) && (dVar1 = *(double *)(iVar2 + 0x40), 0.0 < dVar1)) {
    __return_storage_ptr__->Data = dVar1 * SecondsInAJulianDay_s;
    __return_storage_ptr__->IsValidData = true;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Data = 0.0;
  __return_storage_ptr__->IsValidData = false;
  return __return_storage_ptr__;
}


//==== 0000765c70 00765c70_GetLookaheadTimeIgnoringHoverSinceJ2000_s ====
// decompiled by BatchDecomp @ 00765c70 name=GetLookaheadTimeIgnoringHoverSinceJ2000_s conv=__thiscall body=133

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall StrategicManager__GetLookaheadTimeIgnoringHoverSinceJ2000_s(void)const
    */

double __thiscall
StrategicManager__GetLookaheadTimeIgnoringHoverSinceJ2000_s(StrategicManager *this)

{
  ItineraryNode local_15c;
  double local_c;
  
  ItineraryNode__ItineraryNode(&local_15c,(ItineraryNode *)&(this->Session).SelectedItineraryNode.LastState.Position.Y
            );
  if (local_15c.Parent.Pointer == (Fleet *)0x0) {
    local_15c.TimeSinceJ2000_s = (this->Session).TurnRunTimeLeft_s;
  }
  local_c = local_15c.TimeSinceJ2000_s;
  if (local_15c.CachedNearestOrbiter.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_15c.CachedNearestOrbiter.Controller);
  }
  if (local_15c.CachedNearestFleet.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_15c.CachedNearestFleet.Controller);
  }
  if (local_15c.CachedNearestBody.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_15c.CachedNearestBody.Controller);
  }
  if (local_15c.CachedGravityBody.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_15c.CachedGravityBody.Controller);
  }
  if (local_15c.Parent.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_15c.Parent.Controller);
  }
  return local_c;
}


//==== 0000765eb0 00765eb0_GetMainHUD ====
// decompiled by BatchDecomp @ 00765eb0 name=GetMainHUD conv=__thiscall body=40

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class WeakPtr_L_HUDStrategic_G_ __thiscall
   StrategicManager__GetMainHUD(void)const  */

undefined4 * __thiscall StrategicManager__GetMainHUD(StrategicManager *this)

{
  ReferenceController *this_00;
  undefined4 *in_stack_00000004;
  
  this_00 = (this->CelestialGrid).Controller;
  *in_stack_00000004 = (this->CelestialGrid).Pointer;
  in_stack_00000004[1] = this_00;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
  }
  return in_stack_00000004;
}


//==== 0000765f00 00765f00_GetNotifications ====
// decompiled by BatchDecomp @ 00765f00 name=GetNotifications conv=__thiscall body=7

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class NotificationManager * __thiscall StrategicManager_GetNotifications(void) */

NotificationManager * __thiscall StrategicManager_GetNotifications(StrategicManager *this)

{
  return (NotificationManager *)
         &(this->Notifications).NotificationManagerMemoizationHandlerInstance.ResetFunctions.Size;
}


//==== 0000765f10 00765f10_GetObjectDeltaState ====
// decompiled by BatchDecomp @ 00765f10 name=GetObjectDeltaState conv=__thiscall body=366

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: struct util::PhysicalState<struct util::Vec3<double> > __thiscall
   StrategicManager__GetObjectDeltaState(struct WorldObject,double)const  */

void __thiscall
StrategicManager__GetObjectDeltaState(StrategicManager *this,undefined4 *param_2,Actor *param_3,ReferenceController *param_4,
          int param_5)

{
  undefined1 stack0x00000018[0x240];
  undefined1 stack0x00000168[0x40];
  undefined1 stack0xfffffdf4[0x240];
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Quaternion_L_double_G_ QVar5;
  Quaternion_L_double_G_ QVar6;
  Vec3_L_double_G_ VVar7;
  Vec3_L_double_G_ VVar8;
  Vec3_L_double_G_ *pVVar9;
  undefined4 unaff_EDI;
  undefined4 in_stack_000002c0;
  Actor *pAVar10;
  ReferenceController *pRVar11;
  int iVar12;
  ItineraryNode local_35c;
  undefined8 uStack_ec;
  Vec3_L_double_G_ local_a0;
  Vec3_L_double_G_ local_88;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_60[4];
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
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pAVar10 = param_3;
  pRVar11 = param_4;
  if (param_4 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_4);
  }
  iVar12 = param_5;
  ItineraryNode__ItineraryNode(&local_35c,(ItineraryNode *)&stack0x00000018);
  ItineraryNode__ItineraryNode((ItineraryNode *)&stack0xfffffdf4,(ItineraryNode *)&stack0x00000168);
  GetObjectShiftedOrientation(this,local_60,pAVar10,pRVar11,iVar12);
  WorldObject__GetStateAt((WorldObject *)&param_3,(double)CONCAT44(in_stack_000002c0,&local_38));
  ((slice_view *)&uStack_ec)->_0_1_ = true;
  memcpy(&((slice_view *)&uStack_ec)->_1_3_, (unsigned char[]){95, 118, 0}, 3);
  (*(undefined4 *)((char *)&(QVar5.X) + 4)) = uStack_58;
  (*(undefined4 *)&(QVar5.X)) = uStack_5c;
  (*(undefined4 *)&(QVar5.Y)) = uStack_54;
  (*(undefined4 *)((char *)&(QVar5.Y) + 4)) = local_50;
  (*(undefined4 *)&(QVar5.Z)) = uStack_4c;
  (*(undefined4 *)((char *)&(QVar5.Z) + 4)) = uStack_48;
  (*(undefined4 *)&(QVar5.W)) = uStack_44;
  (*(undefined4 *)((char *)&(QVar5.W) + 4)) = local_20;
  (*(undefined4 *)((char *)&(VVar7.X) + 4)) = uStack_18;
  (*(undefined4 *)&(VVar7.X)) = uStack_1c;
  (*(undefined4 *)&(VVar7.Y)) = uStack_14;
  (*(undefined4 *)((char *)&(VVar7.Y) + 4)) = (int)local_10;
  (*(undefined4 *)&(VVar7.Z)) = (int)((ulonglong)local_10 >> 0x20);
  (*(undefined4 *)((char *)&(VVar7.Z) + 4)) = unaff_EDI;
  pVVar9 = util__Rotate_double(&local_88,QVar5,VVar7);
  local_70 = *(undefined4 *)&pVVar9->X;
  uStack_6c = *(undefined4 *)((int)&pVVar9->X + 4);
  uStack_68 = *(undefined4 *)&pVVar9->Y;
  uStack_64 = *(undefined4 *)((int)&pVVar9->Y + 4);
  local_40 = pVVar9->Z;
  ((slice_view *)&uStack_ec)->_0_1_ = true;
  memcpy(&((slice_view *)&uStack_ec)->_1_3_, (unsigned char[]){96, 118, 0}, 3);
  (*(undefined4 *)((char *)&(QVar6.X) + 4)) = uStack_58;
  (*(undefined4 *)&(QVar6.X)) = uStack_5c;
  (*(undefined4 *)&(QVar6.Y)) = uStack_54;
  (*(undefined4 *)((char *)&(QVar6.Y) + 4)) = local_50;
  (*(undefined4 *)&(QVar6.Z)) = uStack_4c;
  (*(undefined4 *)((char *)&(QVar6.Z) + 4)) = uStack_48;
  (*(undefined4 *)&(QVar6.W)) = uStack_44;
  (*(undefined4 *)((char *)&(QVar6.W) + 4)) = local_38;
  (*(undefined4 *)((char *)&(VVar8.X) + 4)) = uStack_30;
  (*(undefined4 *)&(VVar8.X)) = uStack_34;
  (*(undefined4 *)&(VVar8.Y)) = uStack_2c;
  (*(undefined4 *)((char *)&(VVar8.Y) + 4)) = (int)local_28;
  (*(undefined4 *)&(VVar8.Z)) = (int)((ulonglong)local_28 >> 0x20);
  (*(undefined4 *)((char *)&(VVar8.Z) + 4)) = unaff_EDI;
  pVVar9 = util__Rotate_double(&local_a0,QVar6,VVar8);
  uVar2 = *(undefined4 *)((int)&pVVar9->X + 4);
  uVar3 = *(undefined4 *)&pVVar9->Y;
  uVar4 = *(undefined4 *)((int)&pVVar9->Y + 4);
  dVar1 = pVVar9->Z;
  *param_2 = *(undefined4 *)&pVVar9->X;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  *(double *)(param_2 + 4) = dVar1;
  param_2[6] = local_70;
  param_2[7] = uStack_6c;
  param_2[8] = uStack_68;
  param_2[9] = uStack_64;
  *(double *)(param_2 + 10) = local_40;
  NodeMouseOver_NodeMouseOver((NodeMouseOver *)&stack0x00000018);
  if (param_4 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000766200 00766200_GetObjectShiftedPosition_km ====
// decompiled by BatchDecomp @ 00766200 name=GetObjectShiftedPosition_km conv=__thiscall body=372

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct Vec3_L_double_G_ __thiscall StrategicManager__GetObjectShiftedPosition_km(struct
   WorldObject,struct Vec3_L_double_G_,double)const  */

Vec3_L_double_G_ * __thiscall
StrategicManager__GetObjectShiftedPosition_km(StrategicManager *this,Vec3_L_double_G_ *__return_storage_ptr__,undefined4 param_3,
          ReferenceController *param_4,undefined4 param_5)

{
  undefined1 stack0xfffffe1c[0x240];
  undefined1 stack0x00000018[0x240];
  undefined1 stack0x00000168[0x240];
  undefined1 stack0xfffffdf4[0x240];
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  Quaternion_L_double_G_ QVar5;
  Vec3_L_double_G_ VVar6;
  Quaternion_L_double_G_ *pQVar7;
  Vec3_L_double_G_ *pVVar8;
  undefined4 unaff_EDI;
  undefined4 in_stack_000002c0;
  undefined4 in_stack_000002c4;
  undefined4 in_stack_000002c8;
  undefined4 in_stack_000002cc;
  undefined8 in_stack_000002d0;
  ReferenceController *pRVar9;
  Fleet *local_34c;
  ItineraryNode local_334;
  undefined8 uStack_c4;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 local_48[32];
  Vec3_L_double_G_ local_28;
  double *local_8;
  
  if (param_4 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_4);
  }
  local_34c = (Fleet *)0x766252;
  ItineraryNode__ItineraryNode(&local_334,(ItineraryNode *)&stack0x00000018);
  local_34c = (Fleet *)0x766264;
  ItineraryNode__ItineraryNode((ItineraryNode *)&stack0xfffffe1c,(ItineraryNode *)&stack0x00000168);
  local_34c = (Fleet *)0x76627f;
  local_8 = (double *)GetObjectDeltaState(this);
  uVar10 = (undefined4)in_stack_000002d0;
  uVar11 = *(undefined4 *)((char *)&in_stack_000002d0 + 4);
  pRVar9 = param_4;
  if (param_4 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_4);
  }
  ItineraryNode__ItineraryNode((ItineraryNode *)&local_34c,(ItineraryNode *)&stack0x00000018);
  ItineraryNode__ItineraryNode((ItineraryNode *)&local_334.CachedNearestOrbitDistance_km.IsValidData,
             (ItineraryNode *)&stack0x00000168);
  pQVar7 = GetObjectShiftedOrientation(this,local_48,param_3,pRVar9,param_5);
  ((slice_view *)&uStack_c4)->_0_1_ = true;
  memcpy(&((slice_view *)&uStack_c4)->_1_3_, (unsigned char[]){99, 118, 0}, 3);
  (*(undefined1 *)((char *)&(QVar5.W) + 4)) = SUB41(in_stack_000002c0,0);
  (*(undefined3 *)((char *)&(QVar5.W) + 5)) = SUB43(in_stack_000002c0,1);
  memcpy(&(QVar5), (void *)(28), 28);
  (*(undefined4 *)((char *)&(VVar6.X) + 4)) = in_stack_000002c8;
  (*(undefined4 *)&(VVar6.X)) = in_stack_000002c4;
  (*(undefined4 *)&(VVar6.Y)) = in_stack_000002cc;
  (*(undefined4 *)((char *)&(VVar6.Y) + 4)) = uVar10;
  (*(undefined4 *)&(VVar6.Z)) = uVar11;
  (*(undefined4 *)((char *)&(VVar6.Z) + 4)) = unaff_EDI;
  pVVar8 = util__Rotate_double(&local_28,QVar5,VVar6);
  dVar1 = pVVar8->Y;
  dVar2 = pVVar8->X;
  dVar3 = local_8[1];
  dVar4 = *local_8;
  __return_storage_ptr__->Z = pVVar8->Z - local_8[2];
  __return_storage_ptr__->Y = dVar1 - dVar3;
  __return_storage_ptr__->X = dVar2 - dVar4;
  NodeMouseOver_NodeMouseOver((NodeMouseOver *)&stack0x00000018);
  if (param_4 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_4);
  }
  return __return_storage_ptr__;
}


//==== 0000766380 00766380_GetOriginObject ====
// decompiled by BatchDecomp @ 00766380 name=GetOriginObject conv=__thiscall body=40

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class WeakPtr_L_CelestialObject_G_ __thiscall
   StrategicManager__GetOriginObject(void)const  */

int * __thiscall StrategicManager__GetOriginObject(StrategicManager *this)

{
  undefined1 stack0x00000018[0x240];
  undefined1 stack0x00000168[0x40];
  undefined1 stack0xfffffe1c[0x240];
  ReferenceController *this_00;
  int *in_stack_00000004;
  
  this_00 = *(ReferenceController **)&(*((char *)&((this->Session).ReferenceObject) + 0xc));
  *in_stack_00000004 = (this->Session).ReferenceObject.LPointID;
  in_stack_00000004[1] = (int)this_00;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
  }
  return in_stack_00000004;
}


//==== 00007663b0 007663b0_GetPauseMenu ====
// decompiled by BatchDecomp @ 007663b0 name=GetPauseMenu conv=__thiscall body=40

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class WeakPtr_L_PauseMenuHandler_G_ __thiscall
   StrategicManager__GetPauseMenu(void)const  */

undefined4 * __thiscall StrategicManager__GetPauseMenu(StrategicManager *this)

{
  undefined1 stack0x00000018[0x240];
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


//==== 00007663e0 007663e0_GetPendingBattles_s ====
extern undefined4 FUN_0075d3e0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007663e0 name=GetPendingBattles_s conv=__thiscall body=381

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: class Darray_L_PendingBattle_G_ __thiscall
   StrategicManager__GetPendingBattles_s(double)const  */

void __thiscall StrategicManager__GetPendingBattles_s(StrategicManager *this,double param_1)

{
  undefined1 stack0x00000018[0x240];
  undefined1 stack0x00000168[0x240];
  undefined1 stack0xfffffe1c[0x240];
  undefined4 *puVar1;
  int iVar2;
  ReferenceController *this_00;
  bool bVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 in_stack_0000000c;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_64[16];
  Darray_L_struct_PendingBattle_G_ *local_54;
  int *local_50;
  ReferenceController *local_4c;
  undefined4 local_48;
  ReferenceController *local_44;
  undefined4 local_40;
  ReferenceController *local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  char local_30;
  double local_28;
  double local_20;
  StrategicManager *local_18;
  double *pdStack_14;
  double *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_20 = (this->Session).TurnRunTimeLeft_s;
  local_28 = local_20 + (double)CONCAT44(in_stack_0000000c,(*(undefined4 *)((char *)&(param_1) + 4)));
  local_10 = &local_28;
  _local_18 = CONCAT44(&local_20,this);
  local_54 = (*(undefined4 *)&(param_1));
  piVar4 = (int *)GetRelevantFleets(this);
  *(undefined4 *)(*(undefined4 *)&(param_1)) = 0;
  *(undefined4 *)((*(undefined4 *)&(param_1)) + 4) = 0;
  *(undefined4 *)((*(undefined4 *)&(param_1)) + 8) = 0;
  *(undefined4 *)((*(undefined4 *)&(param_1)) + 0xc) = 0;
  local_50 = piVar4;
  iVar5 = (**(code **)(*piVar4 + 0xc))();
  util__Darray_struct_PendingBattle___Darray_struct_PendingBattle((*(undefined4 *)&(param_1)),iVar5);
  local_c = 0;
  iVar5 = (**(code **)(*piVar4 + 0xc))();
  if (local_c < iVar5) {
    do {
      uVar6 = (**(code **)*piVar4)(&local_c);
      FUN_0075d3e0(&local_48,uVar6);
      this_00 = local_3c;
      if (local_30 != '\0') {
        iVar5 = *(int *)((*(undefined4 *)&(param_1)) + 8);
        local_4c = (ReferenceController *)(iVar5 + 1);
        util__Darray_struct_PendingBattle___SetSize((*(undefined4 *)&(param_1)),(int *)&local_4c);
        bVar3 = util_Darray_struct_PendingBattle_CheckSize((*(undefined4 *)&(param_1)),iVar5);
        piVar4 = local_50;
        if (bVar3) {
          iVar5 = *(int *)((*(undefined4 *)&(param_1)) + 8);
          iVar2 = *(int *)((*(undefined4 *)&(param_1)) + 4);
          local_4c = *(ReferenceController **)(iVar2 + -0x14 + iVar5 * 0x18);
          *(undefined4 *)(iVar2 + -0x18 + iVar5 * 0x18) = local_48;
          *(ReferenceController **)(iVar2 + -0x14 + iVar5 * 0x18) = local_44;
          if (local_44 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(local_44);
          }
          if (local_4c != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(local_4c);
          }
          local_4c = *(ReferenceController **)(iVar2 + -0xc + iVar5 * 0x18);
          *(undefined4 *)(iVar2 + -0x10 + iVar5 * 0x18) = local_40;
          *(ReferenceController **)(iVar2 + -0xc + iVar5 * 0x18) = this_00;
          if (this_00 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this_00);
          }
          if (local_4c != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(local_4c);
          }
          puVar1 = (undefined4 *)(iVar2 + -8 + iVar5 * 0x18);
          *puVar1 = local_38;
          puVar1[1] = uStack_34;
          piVar4 = local_50;
          (*(undefined4 *)&(param_1)) = local_54;
        }
      }
      if (this_00 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(this_00);
      }
      if (local_44 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_44);
      }
      local_c = local_c + 1;
      iVar5 = (**(code **)(*piVar4 + 0xc))();
    } while (local_c < iVar5);
  }
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
            (local_64);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000766560 00766560_GetRefIrradiance_W__m2 ====
// decompiled by BatchDecomp @ 00766560 name=GetRefIrradiance_W__m2 conv=__thiscall body=262

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall StrategicManager__GetRefIrradiance_W__m2(bool)const  */

double __thiscall StrategicManager__GetRefIrradiance_W__m2(StrategicManager *this,bool param_1)

{
  CelestialObject *this_00;
  Vec3_L_double_G_ VVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  CelestialBody *this_01;
  WorldLight *pWVar6;
  undefined1 unaff_DI;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  WorldLight local_88;
  ReferenceController *local_1c;
  ReferenceController *local_14;
  undefined8 local_10;
  double local_c;
  
  local_10 = CONCAT31(((slice_view *)&local_10)->_1_3_,param_1);
  bVar3 = false;
  local_c = (double)(ulonglong)((slice_view *)&local_c)->_0_4_;
  piVar4 = (int *)GetIlluminatorObject(this);
  if ((*piVar4 != 0) && ((ReferenceController *)piVar4[1] != (ReferenceController *)0x0)) {
    bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]);
    if (bVar2) {
      puVar5 = (undefined4 *)GetIlluminatorObject(this);
      if ((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) {
        bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]);
        if (!bVar3) {
          *puVar5 = 0;
        }
      }
      this_00 = (CelestialObject *)*puVar5;
      this_01 = Level__GetImportantBody((Level *)(this->Session).MessagesStored._pad_0x0_0);
      local_c = CelestialBody__GetAverageDistanceToIlluminator_km(this_01);
      local_c = local_c * /*408f400000000000*/1000.0;
      uVar8 = 0;
      uVar9 = 0;
      uVar10 = 0;
      uVar11 = 0;
      uVar12 = 0;
      uVar13 = 0;
      uVar14 = local_10;
      dVar7 = GetLookaheadTimeSinceJ2000_s(this);
      (*(undefined4 *)((char *)&(VVar1.X) + 4)) = uVar10;
      (*(undefined4 *)&(VVar1.X)) = uVar9;
      (*(undefined4 *)&(VVar1.Y)) = uVar11;
      (*(undefined4 *)((char *)&(VVar1.Y) + 4)) = uVar12;
      (*(undefined4 *)&(VVar1.Z)) = uVar13;
      (*(undefined4 *)((char *)&(VVar1.Z) + 4)) = uVar14;
      pWVar6 = CelestialObject__GetWorldLight(this_00,&local_88,(double)CONCAT44(uVar8,(int)((ulonglong)dVar7 >> 0x20)),
                          VVar1,(bool)unaff_DI);
      bVar3 = true;
      local_c = (pWVar6->Power_W / (local_c * local_c * /*402921fb54442d18*/12.566370614359172)) /
                /*4024000000000000*/10.0;
      goto LAB_00766638;
    }
  }
  local_c = 0.0;
LAB_00766638:
  if ((local_14 != (ReferenceController *)0x0) && (bVar3)) {
    util__ReferenceController__ReleaseWeakReference(local_14);
  }
  if (local_1c != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_1c);
  }
  return local_c;
}


//==== 0000766670 00766670_GetReferenceCelestial ====
// decompiled by BatchDecomp @ 00766670 name=GetReferenceCelestial conv=__thiscall body=502

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class WeakPtr_L_CelestialObject_G_ __thiscall
   StrategicManager__GetReferenceCelestial(void)const  */

int * __thiscall StrategicManager__GetReferenceCelestial(StrategicManager *this)

{
  NodeMouseOver *this_00;
  ReferenceController *this_01;
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  ReferenceController *this_02;
  ReferenceController *this_03;
  int *in_stack_00000004;
  ReferenceController *local_3c;
  ReferenceController *local_34;
  ReferenceController *local_2c;
  ReferenceController *local_24;
  ReferenceController *local_1c;
  int local_18;
  ReferenceController *local_14;
  int local_10;
  ReferenceController *local_c;
  int local_8;
  
  local_8 = 0;
  this_00 = &(this->Session).ReferenceObject.Node;
  bVar1 = WorldObject__IsLPoint((WorldObject *)this_00);
  if (bVar1) {
    puVar2 = (undefined4 *)WorldObject__AsCelestialObject((WorldObject *)this_00);
    if ((ReferenceController *)puVar2[1] != (ReferenceController *)0x0) {
      bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar2[1]);
      if (!bVar1) {
        *puVar2 = 0;
      }
    }
    piVar3 = (int *)CelestialObject__GetOrbitedObject((CelestialObject *)*puVar2);
    bVar5 = 3;
    iVar4 = *piVar3;
    this_02 = local_c;
    this_03 = local_14;
  }
  else {
    bVar1 = WorldObject__IsCelestialObject((WorldObject *)this_00);
    if (bVar1) {
      piVar3 = (int *)WorldObject__AsCelestialObject((WorldObject *)this_00);
      bVar5 = 4;
      local_8 = *piVar3;
      this_02 = local_c;
      this_03 = local_14;
    }
    else {
      bVar1 = WorldObject__IsFleet((WorldObject *)this_00);
      if (bVar1) {
        puVar2 = (undefined4 *)WorldObject__AsFleet((WorldObject *)this_00);
        if ((ReferenceController *)puVar2[1] != (ReferenceController *)0x0) {
          bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar2[1]);
          if (!bVar1) {
            *puVar2 = 0;
          }
        }
        piVar3 = (int *)Fleet__GetBodyWeAreInHillSphereOf((Fleet *)*puVar2);
        bVar5 = 0x58;
        local_8 = *piVar3;
        this_02 = local_c;
      }
      else {
        this_02 = *(ReferenceController **)&(*((char *)&((this->Session).ReferenceObject) + 0xc));
        local_8 = (this->Session).ReferenceObject.LPointID;
        local_10 = local_8;
        local_c = this_02;
        if (this_02 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this_02);
        }
        piVar3 = &local_10;
        bVar5 = 0x60;
      }
      this_03 = (ReferenceController *)piVar3[1];
      local_14 = this_03;
      local_18 = local_8;
      if (this_03 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(this_03);
      }
      piVar3 = &local_18;
    }
    local_c = (ReferenceController *)piVar3[1];
    bVar5 = bVar5 | 0x80;
    local_10 = local_8;
    if (local_c != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(local_c);
    }
    piVar3 = &local_10;
    iVar4 = local_8;
  }
  *in_stack_00000004 = iVar4;
  this_01 = (ReferenceController *)piVar3[1];
  in_stack_00000004[1] = (int)this_01;
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_01);
  }
  if ((char)bVar5 < '\0') {
    bVar5 = bVar5 & 0x7f;
    if (local_c != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_c);
    }
  }
  if (((bVar5 & 0x40) != 0) && (bVar5 = bVar5 & 0xbf, this_03 != (ReferenceController *)0x0)) {
    util__ReferenceController__ReleaseWeakReference(this_03);
  }
  if (((bVar5 & 0x20) != 0) && (bVar5 = bVar5 & 0xdf, this_02 != (ReferenceController *)0x0)) {
    util__ReferenceController__ReleaseWeakReference(this_02);
  }
  if ((bVar5 & 0x10) != 0) {
    bVar5 = bVar5 & 0xef;
    if (local_1c != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_1c);
    }
  }
  if ((bVar5 & 8) != 0) {
    bVar5 = bVar5 & 0xf7;
    if (local_24 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_24);
    }
  }
  if ((bVar5 & 4) != 0) {
    bVar5 = bVar5 & 0xfb;
    if (local_2c != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_2c);
    }
  }
  if ((bVar5 & 2) != 0) {
    bVar5 = bVar5 & 0xfd;
    if (local_34 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_34);
    }
  }
  if ((local_3c != (ReferenceController *)0x0) && ((bVar5 & 1) != 0)) {
    util__ReferenceController__ReleaseWeakReference(local_3c);
  }
  return in_stack_00000004;
}


//==== 0000766870 00766870_GetReferenceDeltaState ====
// decompiled by BatchDecomp @ 00766870 name=GetReferenceDeltaState conv=__thiscall body=134

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: struct util::PhysicalState<struct util::Vec3<double> > __thiscall
   StrategicManager__GetReferenceDeltaState(double)const  */

undefined4 __thiscall
StrategicManager__GetReferenceDeltaState(StrategicManager *this,double param_1)

{
  undefined4 in_stack_0000000c;
  Fleet *pFVar1;
  ReferenceController *this_00;
  undefined4 uVar2;
  ItineraryNode local_2c0;
  ItineraryNode local_170;
  double local_20;
  undefined8 local_18;
  
  local_18 = CONCAT44(in_stack_0000000c,(*(undefined4 *)((char *)&(param_1) + 4)));
  pFVar1 = (this->Session).ReferenceObject.Node.LastNode.Parent.Pointer;
  this_00 = (this->Session).ReferenceObject.Node.LastNode.Parent.Controller;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
  }
  uVar2 = *(undefined4 *)&(this->Session).ReferenceObject.Node.LastNode.LastState.Position.X;
  ItineraryNode__ItineraryNode(&local_2c0,
             (ItineraryNode *)&(this->Session).ReferenceObject.Node.LastNode.LastState.Position.Y);
  ItineraryNode__ItineraryNode(&local_170,
             (ItineraryNode *)&(this->Session).ReferenceObject.Node.NextNode.LastState.Position.Y);
  local_20 = (this->Session).HoveredItineraryNode.Value1.LastState.Position.X;
  GetObjectDeltaState(this,(*(undefined4 *)&(param_1)),pFVar1,this_00,uVar2);
  return (*(undefined4 *)&(param_1));
}


//==== 0000766900 00766900_GetReferenceIrradiance ====
// decompiled by BatchDecomp @ 00766900 name=GetReferenceIrradiance conv=__thiscall body=250

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual double __thiscall StrategicManager__GetReferenceIrradiance(void)const  */

double __thiscall StrategicManager__GetReferenceIrradiance(StrategicManager *this)

{
  CelestialObject *this_00;
  Vec3_L_double_G_ VVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  CelestialBody *this_01;
  WorldLight *pWVar6;
  undefined1 unaff_DI;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  WorldLight local_84;
  ReferenceController *local_18;
  ReferenceController *local_10;
  double local_c;
  
  bVar3 = false;
  local_c = (double)(ulonglong)((slice_view *)&local_c)->_0_4_;
  piVar4 = (int *)GetIlluminatorObject(this);
  if ((*piVar4 != 0) && ((ReferenceController *)piVar4[1] != (ReferenceController *)0x0)) {
    bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]);
    if (bVar2) {
      puVar5 = (undefined4 *)GetIlluminatorObject(this);
      if ((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) {
        bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]);
        if (!bVar3) {
          *puVar5 = 0;
        }
      }
      this_00 = (CelestialObject *)*puVar5;
      this_01 = Level__GetImportantBody((Level *)(this->Session).MessagesStored._pad_0x0_0);
      local_c = CelestialBody__GetAverageDistanceToIlluminator_km(this_01);
      local_c = local_c * /*408f400000000000*/1000.0;
      uVar14 = 1;
      uVar8 = 0;
      uVar9 = 0;
      uVar10 = 0;
      uVar11 = 0;
      uVar12 = 0;
      uVar13 = 0;
      dVar7 = GetLookaheadTimeSinceJ2000_s(this);
      (*(undefined4 *)((char *)&(VVar1.X) + 4)) = uVar10;
      (*(undefined4 *)&(VVar1.X)) = uVar9;
      (*(undefined4 *)&(VVar1.Y)) = uVar11;
      (*(undefined4 *)((char *)&(VVar1.Y) + 4)) = uVar12;
      (*(undefined4 *)&(VVar1.Z)) = uVar13;
      (*(undefined4 *)((char *)&(VVar1.Z) + 4)) = uVar14;
      pWVar6 = CelestialObject__GetWorldLight(this_00,&local_84,(double)CONCAT44(uVar8,(int)((ulonglong)dVar7 >> 0x20)),
                          VVar1,(bool)unaff_DI);
      bVar3 = true;
      local_c = (pWVar6->Power_W / (local_c * local_c * /*402921fb54442d18*/12.566370614359172)) /
                /*4024000000000000*/10.0;
      goto LAB_007669ce;
    }
  }
  local_c = 0.0;
LAB_007669ce:
  if ((local_10 != (ReferenceController *)0x0) && (bVar3)) {
    util__ReferenceController__ReleaseWeakReference(local_10);
  }
  if (local_18 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_18);
  }
  return local_c;
}


//==== 0000766a00 00766a00_GetReferenceObject ====
#undef t /* auto(v2): compat 僵尸宏撞成员名 */

// decompiled by BatchDecomp @ 00766a00 name=GetReferenceObject conv=__thiscall body=104

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct WorldObject __thiscall StrategicManager__GetReferenceObject(void)const  */

WorldObject * __thiscall
StrategicManager__GetReferenceObject(StrategicManager *this,WorldObject *__return_storage_ptr__)

{
  ReferenceController *this_00;
  
  (__return_storage_ptr__->Object).Pointer =
       (Actor *)(this->Session).ReferenceObject.Node.LastNode.Parent.Pointer;
  this_00 = (this->Session).ReferenceObject.Node.LastNode.Parent.Controller;
  (__return_storage_ptr__->Object).Controller = this_00;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
  }
  __return_storage_ptr__->LPointID =
       *(int *)&(this->Session).ReferenceObject.Node.LastNode.LastState.Position.X;
  ItineraryNode__ItineraryNode(&(__return_storage_ptr__->Node).LastNode,
             (ItineraryNode *)&(this->Session).ReferenceObject.Node.LastNode.LastState.Position.Y);
  ItineraryNode__ItineraryNode(&(__return_storage_ptr__->Node).NextNode,
             (ItineraryNode *)&(this->Session).ReferenceObject.Node.NextNode.LastState.Position.Y);
  (__return_storage_ptr__->Node).t =
       (this->Session).HoveredItineraryNode.Value1.LastState.Position.X;
  return __return_storage_ptr__;
}


//==== 0000766a70 00766a70_GetReferenceShiftedOrientation ====
// decompiled by BatchDecomp @ 00766a70 name=GetReferenceShiftedOrientation conv=__thiscall body=134

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct util_Quaternion_double_Quaternion_double __thiscall
   StrategicManager__GetReferenceShiftedOrientation(double)const  */

Quaternion_L_double_G_ * __thiscall
StrategicManager__GetReferenceShiftedOrientation(StrategicManager *this,Quaternion_L_double_G_ *__return_storage_ptr__,double param_1)

{
  undefined4 in_stack_00000008;
  Fleet *pFVar1;
  ReferenceController *this_00;
  undefined4 uVar2;
  ItineraryNode local_2c0;
  ItineraryNode local_170;
  double local_20;
  undefined8 local_18;
  
  local_18 = CONCAT44((*(undefined4 *)&(param_1)),in_stack_00000008);
  pFVar1 = (this->Session).ReferenceObject.Node.LastNode.Parent.Pointer;
  this_00 = (this->Session).ReferenceObject.Node.LastNode.Parent.Controller;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
  }
  uVar2 = *(undefined4 *)&(this->Session).ReferenceObject.Node.LastNode.LastState.Position.X;
  ItineraryNode__ItineraryNode(&local_2c0,
             (ItineraryNode *)&(this->Session).ReferenceObject.Node.LastNode.LastState.Position.Y);
  ItineraryNode__ItineraryNode(&local_170,
             (ItineraryNode *)&(this->Session).ReferenceObject.Node.NextNode.LastState.Position.Y);
  local_20 = (this->Session).HoveredItineraryNode.Value1.LastState.Position.X;
  GetObjectShiftedOrientation(this,__return_storage_ptr__,pFVar1,this_00,uVar2);
  return __return_storage_ptr__;
}


//==== 0000766b00 00766b00_GetReferenceShiftedPosition_km ====
#undef t /* auto(v2): compat 僵尸宏撞成员名 */

// decompiled by BatchDecomp @ 00766b00 name=GetReferenceShiftedPosition_km conv=__thiscall body=476

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct Vec3_L_double_G_ __thiscall
   StrategicManager__GetReferenceShiftedPosition_km(struct Vec3_L_double_G_,double)const  */

Vec3_L_double_G_ * __thiscall
StrategicManager__GetReferenceShiftedPosition_km(StrategicManager *this,Vec3_L_double_G_ *__return_storage_ptr__,Vec3_L_double_G_ param_1,
          double param_2)

{
  undefined1 stack0xfffffb70[0x240];
  ReferenceController *this_00;
  Quaternion_L_double_G_ QVar1;
  Vec3_L_double_G_ VVar2;
  double *pdVar3;
  Quaternion_L_double_G_ *pQVar4;
  Vec3_L_double_G_ *pVVar5;
  undefined4 unaff_EDI;
  undefined4 in_stack_00000008;
  Fleet *pFVar6;
  ReferenceController *pRVar7;
  undefined4 uVar8;
  Fleet *local_5f8;
  ItineraryNode local_5e0;
  undefined8 uStack_370;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  NodeMouseOver local_2e4;
  undefined1 local_3c[32];
  Vec3_L_double_G_ local_1c;
  
  this_00 = (this->Session).ReferenceObject.Node.LastNode.Parent.Controller;
  pFVar6 = (this->Session).ReferenceObject.Node.LastNode.Parent.Pointer;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
  }
  uVar8 = *(undefined4 *)&(this->Session).ReferenceObject.Node.LastNode.LastState.Position.X;
  ItineraryNode__ItineraryNode(&local_2e4.LastNode,
             (ItineraryNode *)&(this->Session).ReferenceObject.Node.LastNode.LastState.Position.Y);
  ItineraryNode__ItineraryNode(&local_2e4.NextNode,
             (ItineraryNode *)&(this->Session).ReferenceObject.Node.NextNode.LastState.Position.Y);
  local_2e4.t = (this->Session).HoveredItineraryNode.Value1.LastState.Position.X;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
  }
  local_5f8 = (Fleet *)0x766bb4;
  ItineraryNode__ItineraryNode(&local_5e0,&local_2e4.LastNode);
  local_5f8 = (Fleet *)0x766bc6;
  ItineraryNode__ItineraryNode((ItineraryNode *)&stack0xfffffb70,&local_2e4.NextNode);
  local_5f8 = (Fleet *)0x766be1;
  pdVar3 = (double *)GetObjectDeltaState(this);
  uVar10 = (*(undefined4 *)((char *)&(param_1.Y) + 4));
  uVar11 = param_1.Z;
  pRVar7 = this_00;
  uVar9 = in_stack_00000008;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
    uVar9 = in_stack_00000008;
  }
  ItineraryNode__ItineraryNode((ItineraryNode *)&local_5f8,&local_2e4.LastNode);
  ItineraryNode__ItineraryNode((ItineraryNode *)&local_5e0.CachedNearestOrbitDistance_km.IsValidData,
             &local_2e4.NextNode);
  pQVar4 = GetObjectShiftedOrientation(this,local_3c,pFVar6,pRVar7,uVar8);
  ((slice_view *)&uStack_370)->_0_1_ = true;
  memcpy(&((slice_view *)&uStack_370)->_1_3_, (unsigned char[]){108, 118, 0}, 3);
  (*(undefined1 *)((char *)&(QVar1.W) + 4)) = SUB41(uVar9,0);
  (*(undefined3 *)((char *)&(QVar1.W) + 5)) = SUB43(uVar9,1);
  memcpy(&(QVar1), (void *)(28), 28);
  (*(undefined4 *)((char *)&(VVar2.X) + 4)) = (*(undefined4 *)((char *)&(param_1.X) + 4));
  (*(undefined4 *)&(VVar2.X)) = (*(undefined4 *)&(param_1.X));
  (*(undefined4 *)&(VVar2.Y)) = (*(undefined4 *)&(param_1.Y));
  (*(undefined4 *)((char *)&(VVar2.Y) + 4)) = uVar10;
  (*(undefined4 *)&(VVar2.Z)) = uVar11;
  (*(undefined4 *)((char *)&(VVar2.Z) + 4)) = unaff_EDI;
  pVVar5 = util__Rotate_double(&local_1c,QVar1,VVar2);
  __return_storage_ptr__->X = pVVar5->X - *pdVar3;
  __return_storage_ptr__->Y = pVVar5->Y - pdVar3[1];
  __return_storage_ptr__->Z = pVVar5->Z - pdVar3[2];
  NodeMouseOver_NodeMouseOver(&local_2e4);
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  return __return_storage_ptr__;
}


//==== 0000766ce0 00766ce0_GetRelevantFleets ====
// decompiled by BatchDecomp @ 00766ce0 name=GetRelevantFleets conv=__thiscall body=256

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Darray<class util::WeakPtr<class Fleet> > __thiscall
   StrategicManager__GetRelevantFleets(void)const  */

void __thiscall StrategicManager__GetRelevantFleets(StrategicManager *this)

{
  undefined1 stack0xfffffb70[0x240];
  ReferenceController *this_00;
  ReferenceController *this_01;
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  Faction *pFVar5;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *in_stack_00000004;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_28[16];
  int *local_18;
  int local_14;
  undefined1 local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = 0;
  piVar2 = (int *)GetFleets(this);
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  local_18 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body
            (in_stack_00000004,iVar3);
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
      pFVar5 = Fleet__GetAlliance((Fleet *)*puVar4);
      if (pFVar5 != (Faction *)0x0) {
        iVar3 = *(int *)(in_stack_00000004 + 8);
        local_14 = iVar3 + 1;
        util__Darray_class_util__WeakPtr_class_Body_____SetSize(in_stack_00000004,&local_14);
        bVar1 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(in_stack_00000004,iVar3);
        if (bVar1) {
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
      piVar2 = local_18;
      local_c = local_c + 1;
      iVar3 = (**(code **)(*local_18 + 0xc))();
    } while (local_c < iVar3);
  }
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
            (local_28);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000766de0 00766de0_GetScreenFadeToBlack_Percent ====
// decompiled by BatchDecomp @ 00766de0 name=GetScreenFadeToBlack_Percent conv=__thiscall body=13

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual double __thiscall StrategicManager__GetScreenFadeToBlack_Percent(void)const  */

double __thiscall StrategicManager__GetScreenFadeToBlack_Percent(StrategicManager *this)

{
  return *(double *)&(this->Session).EndCreditsAreClosing * /*3fe0000000000000*/0.5;
}


//==== 0000766df0 00766df0_GetSelectedFleet ====
// decompiled by BatchDecomp @ 00766df0 name=GetSelectedFleet conv=__thiscall body=143

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class WeakPtr_L_Fleet_G_ __thiscall StrategicManager__GetSelectedFleet(void)const
    */

undefined4 * __thiscall StrategicManager__GetSelectedFleet(StrategicManager *this)

{
  NodeMouseOver *this_00;
  ReferenceController *this_01;
  ReferenceController *this_02;
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *in_stack_00000004;
  ReferenceController *local_10;
  undefined4 local_c;
  ReferenceController *local_8;
  
  this_00 = &(this->Session).SelectedObject.Node;
  local_8 = (ReferenceController *)0x0;
  bVar1 = WorldObject__IsFleet((WorldObject *)this_00);
  bVar1 = !bVar1;
  if (bVar1) {
    local_c = 0;
    local_8 = (ReferenceController *)0x0;
    puVar2 = &local_c;
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined4 *)WorldObject__AsFleet((WorldObject *)this_00);
    uVar3 = *puVar2;
  }
  this_02 = local_8;
  *in_stack_00000004 = uVar3;
  this_01 = (ReferenceController *)puVar2[1];
  in_stack_00000004[1] = this_01;
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_01);
  }
  if ((bVar1) && (this_02 != (ReferenceController *)0x0)) {
    util__ReferenceController__ReleaseWeakReference(this_02);
  }
  if ((local_10 != (ReferenceController *)0x0) && (!bVar1)) {
    util__ReferenceController__ReleaseWeakReference(local_10);
  }
  return in_stack_00000004;
}


//==== 0000766e80 00766e80_GetSelectedItineraryNode ====
// decompiled by BatchDecomp @ 00766e80 name=GetSelectedItineraryNode conv=__thiscall body=25

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct ItineraryNode __thiscall StrategicManager__GetSelectedItineraryNode(void)const  */

ItineraryNode * __thiscall
StrategicManager__GetSelectedItineraryNode(StrategicManager *this,ItineraryNode *__return_storage_ptr__)

{
  ItineraryNode__ItineraryNode(__return_storage_ptr__,
             (ItineraryNode *)&(this->Session).SelectedItineraryNode.LastState.Position.Y);
  return __return_storage_ptr__;
}


//==== 0000766ea0 00766ea0_GetSelectedObject ====
#undef t /* auto(v2): compat 僵尸宏撞成员名 */

// decompiled by BatchDecomp @ 00766ea0 name=GetSelectedObject conv=__thiscall body=104

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct WorldObject __thiscall StrategicManager__GetSelectedObject(void)const  */

WorldObject * __thiscall
StrategicManager__GetSelectedObject(StrategicManager *this,WorldObject *__return_storage_ptr__)

{
  ReferenceController *this_00;
  
  (__return_storage_ptr__->Object).Pointer =
       (Actor *)(this->Session).SelectedObject.Node.LastNode.Parent.Pointer;
  this_00 = (this->Session).SelectedObject.Node.LastNode.Parent.Controller;
  (__return_storage_ptr__->Object).Controller = this_00;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
  }
  __return_storage_ptr__->LPointID =
       *(int *)&(this->Session).SelectedObject.Node.LastNode.LastState.Position.X;
  ItineraryNode__ItineraryNode(&(__return_storage_ptr__->Node).LastNode,
             (ItineraryNode *)&(this->Session).SelectedObject.Node.LastNode.LastState.Position.Y);
  ItineraryNode__ItineraryNode(&(__return_storage_ptr__->Node).NextNode,
             (ItineraryNode *)&(this->Session).SelectedObject.Node.NextNode.LastState.Position.Y);
  (__return_storage_ptr__->Node).t = *(double *)&(this->EnemyController).Controller;
  return __return_storage_ptr__;
}


//==== 0000766f10 00766f10_GetTacticalGame_Clear ====
// decompiled by BatchDecomp @ 00766f10 name=StrategicManager_GetTacticalGame_Clear conv=__thiscall body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__GetTacticalGame_Clear(void)const  */

void __thiscall StrategicManager__GetTacticalGame_Clear(StrategicManager *this)

{
  *(undefined4 *)&(*((char *)(this) + 0x6c)) = 0;
  *(undefined1 *)&(this->Session).PlayerAlliance = 0;
  return;
}


//==== 0000766f20 00766f20_GetTacticalGame_Memoize ====
// decompiled by BatchDecomp @ 00766f20 name=GetTacticalGame_Memoize conv=__thiscall body=458

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__GetTacticalGame_Memoize(void)const  */

void __thiscall StrategicManager__GetTacticalGame_Memoize(StrategicManager *this)

{
  static undefined4 cde_l2_00766f20_ID;
  static volatile int cde_l2_00766f20__thread_safe_static_guard_0__ = -1;
  undefined4 *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  ulong uVar7;
  int iVar8;
  int *piVar9;
  Faction *local_30;
  int local_24;
  undefined **local_20;
  undefined4 *puStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  undefined1 local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (*(char *)&(this->Session).PlayerAlliance == '\0') {
    iVar5 = (this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size;
    local_c = iVar5 + 1;
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&this->StrategicManagerMemoizationHandlerInstance
               ,&local_c);
    bVar4 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &this->StrategicManagerMemoizationHandlerInstance,iVar5);
    if (bVar4) {*(void **)&((this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Data[(this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size+-1]) = (void *)&StrategicManager_GetTacticalGame_Clear;
    }
    piVar9 = (int *)(this->_pad_0x0_0 + 0x28);
    local_10 = 0;
    local_20 = (undefined **)0x0;
    puStack_1c = (undefined4 *)0x0;
    iStack_18 = 0;
    uStack_14 = 0;
    iVar5 = (**(code **)(*piVar9 + 0xc))();
    util__Darray_class_Manager____Darray_class_Manager((Darray_L_class_Manager_P_G_ *)&local_20,iVar5);
    local_c = 0;
    iVar5 = (**(code **)(*piVar9 + 0xc))();
    if (local_c < iVar5) {
      iVar5 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
      do {
        puVar6 = (undefined4 *)(**(code **)*piVar9)(&local_c);
        puVar1 = (undefined4 *)*puVar6;
        if ((*(int *)(iVar5 + 4) <
             cde_l2_00766f20__thread_safe_static_guard_0__) &&
           (_Init_thread_header(&cde_l2_00766f20__thread_safe_static_guard_0__),
           cde_l2_00766f20__thread_safe_static_guard_0__ == -1)) {
          cde_l2_00766f20_ID =
               util__GetHash("TacticalManager");
          _Init_thread_footer(&cde_l2_00766f20__thread_safe_static_guard_0__);
        }
        uVar3 = cde_l2_00766f20_ID;
        uVar7 = (**(code **)*puVar1)();
        iVar8 = iStack_18;
        if (uVar7 == uVar3) {
          local_24 = iStack_18 + 1;
          util__Darray_class_util__Reflectable____SetSize
                    ((Darray_L_util__Reflectable_P_G_ *)&local_20,&local_24);
          bVar4 = util__Darray_enum_GraphicsResource__Type___CheckSize
                            ((Darray_L_GraphicsResource__Type_G_ *)&local_20,iVar8);
          if (bVar4) {
            puStack_1c[iStack_18 + -1] = *puVar6;
          }
        }
        local_c = local_c + 1;
        iVar8 = (**(code **)(*piVar9 + 0xc))();
      } while (local_c < iVar8);
    }
    if (iStack_18 != 1) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\function.inl",0x38,
                      "FilteredArray.Num() == 1",(char *)0x0);
      DebugBreak();
    }
    if (iStack_18 < 1) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3a,
                      "Size > 0",(char *)0x0);
      DebugBreak();
    }
    uVar2 = *puStack_1c;
    local_20 = 0x9194a4;
    operator_delete__(puStack_1c);
    local_30 = (Faction *)CONCAT31((int3)((uint)this >> 8),1);
    *(undefined4 *)&(*((char *)(this) + 0x6c)) = uVar2;
    (this->Session).PlayerAlliance = local_30;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007670f0 007670f0_GetUltimateRootObject ====
// decompiled by BatchDecomp @ 007670f0 name=GetUltimateRootObject conv=__thiscall body=224

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class WeakPtr_L_CelestialObject_G_ __thiscall
   StrategicManager__GetUltimateRootObject(void)const  */

int * __thiscall StrategicManager__GetUltimateRootObject(StrategicManager *this)

{
  ReferenceController *pRVar1;
  ReferenceController *this_00;
  bool bVar2;
  int *piVar3;
  int *in_stack_00000004;
  ReferenceController *local_10;
  ReferenceController *local_8;
  
  in_stack_00000004[0] = 0;
  in_stack_00000004[1] = 0;
  *in_stack_00000004 = (this->Session).ReferenceObject.LPointID;
  pRVar1 = *(ReferenceController **)&(*((char *)&((this->Session).ReferenceObject) + 0xc));
  in_stack_00000004[1] = (int)pRVar1;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar1);
  }
  do {
    if ((ReferenceController *)in_stack_00000004[1] != (ReferenceController *)0x0) {
      bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)in_stack_00000004[1]);
      if (!bVar2) {
        *in_stack_00000004 = 0;
      }
    }
    piVar3 = (int *)CelestialObject__GetOrbitedObject((CelestialObject *)*in_stack_00000004);
    if ((*piVar3 == 0) || ((ReferenceController *)piVar3[1] == (ReferenceController *)0x0)) {
LAB_0076715a:
      bVar2 = false;
    }
    else {
      bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]);
      if (!bVar2) goto LAB_0076715a;
      bVar2 = true;
    }
    if (local_8 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_8);
    }
    if (!bVar2) {
      return in_stack_00000004;
    }
    if ((ReferenceController *)in_stack_00000004[1] != (ReferenceController *)0x0) {
      bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)in_stack_00000004[1]);
      if (!bVar2) {
        *in_stack_00000004 = 0;
      }
    }
    piVar3 = (int *)CelestialObject__GetOrbitedObject((CelestialObject *)*in_stack_00000004);
    pRVar1 = (ReferenceController *)in_stack_00000004[1];
    *in_stack_00000004 = *piVar3;
    this_00 = (ReferenceController *)piVar3[1];
    in_stack_00000004[1] = (int)this_00;
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_00);
    }
    if (pRVar1 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(pRVar1);
    }
    if (local_10 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_10);
    }
  } while( true );
}


//==== 00007671d0 007671d0_GetUnscathedAlliedCapitalShipsCount ====
extern undefined4 FUN_00758480(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007671d0 name=GetUnscathedAlliedCapitalShipsCount conv=__thiscall body=121

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: int __thiscall StrategicManager__GetUnscathedAlliedCapitalShipsCount(void)const  */

int __thiscall StrategicManager__GetUnscathedAlliedCapitalShipsCount(StrategicManager *this)

{
  int iVar1;
  undefined4 local_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  int local_1c[4];
  undefined1 local_c[4];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_1c[0] = 0;
  local_1c[1] = 0;
  local_1c[2] = 0;
  local_1c[3] = 0;
  GetAllShipsOfFaction(this,(Faction *)local_1c);
  local_c[0] = 0;
  local_2c = 0;
  uStack_28 = 0;
  iStack_24 = 0;
  uStack_20 = 0;
  iVar1 = (**(code **)(local_1c[0] + 0xc))();
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_2c,iVar1);
  FUN_00758480(local_1c,local_c,&local_2c);
  iVar1 = iStack_24;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_2c);
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_1c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar1;
}


//==== 0000767250 00767250_GetVictoryConditions ====
// decompiled by BatchDecomp @ 00767250 name=GetVictoryConditions conv=__thiscall body=89

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class Maybe_L_CustomObjective_G_ __thiscall
   StrategicManager__GetVictoryConditions(void)const  */

undefined4 * __thiscall StrategicManager__GetVictoryConditions(StrategicManager *this)

{
  int iVar1;
  undefined4 *in_stack_00000004;
  
  iVar1 = (this->Session).MessagesStored._pad_0x0_0;
  *in_stack_00000004 = 0x919980;
  util__Str_char___Str_char((Str_L_char_G_ *)(in_stack_00000004 + 1),(Str_L_char_G_ *)(iVar1 + 0xa0));
  *in_stack_00000004 = 0x93762c;
  *(undefined1 *)(in_stack_00000004 + 4) = *(undefined1 *)(iVar1 + 0xac);
  *(undefined1 *)((int)in_stack_00000004 + 0x11) = *(undefined1 *)(iVar1 + 0xad);
  *(undefined1 *)((int)in_stack_00000004 + 0x12) = *(undefined1 *)(iVar1 + 0xae);
  *(undefined1 *)(in_stack_00000004 + 5) = *(undefined1 *)(iVar1 + 0xb0);
  return in_stack_00000004;
}


//==== 00007672b0 007672b0_GetWorldLights ====
// decompiled by BatchDecomp @ 007672b0 name=GetWorldLights conv=__thiscall body=51

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class Darray_L_WorldLight_G_ __thiscall
   StrategicManager__GetWorldLights(void)const  */

uint __thiscall StrategicManager__GetWorldLights(StrategicManager *this)

{
  double dVar1;
  uint in_stack_00000004;
  
  dVar1 = GetLookaheadTimeSinceJ2000_s(this);
  GetWorldLightsAtTimeWithDelta
            (this,*(Vec3_L_double_G_ *)in_stack_00000004,(double)((longlong)dVar1 << 0x20),
             SUB81((ulonglong)dVar1 >> 0x20,0));
  return in_stack_00000004;
}


//==== 00007677e0 007677e0_GoToTacticalGame ====
// decompiled by BatchDecomp @ 007677e0 name=GoToTacticalGame conv=__thiscall body=813

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__GoToTacticalGame(class WeakPtr_L_Fleet_G_,class
   WeakPtr_L_Fleet_G_) */

void __thiscall
StrategicManager__GoToTacticalGame(StrategicManager *this,Fleet *param_2,ReferenceController *param_3,int param_4,
          ReferenceController *param_5)

{
  undefined1 *this_00;
  Speaker *pSVar1;
  Fleet *this_01;
  bool bVar2;
  int iVar3;
  CameraManager *this_02;
  GameManager *this_03;
  DataParser *this_04;
  int *piVar4;
  undefined4 sret_gtd_p4[4];
  int *piVar5;
  undefined4 *puVar6;
  code *pcVar7;
  undefined1 uVar8;
  undefined **local_3c;
  void *local_38;
  StrategicManager *local_2c;
  int local_28;
  undefined8 local_24;
  undefined **local_20;
  undefined4 *puStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  int local_10;
  undefined1 local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_2c = this;
  if ((param_4 == 0) || (param_5 == (ReferenceController *)0x0)) {
LAB_00767812:
    local_24 = local_24 & 0xffffff00;
  }
  else {
    bVar2 = util__ReferenceController__IsDataStillValid(param_5);
    ((slice_view *)&local_24)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&local_24)->_1_3_[0] | (((slice_view *)&local_24)->_1_3_[1] << 8) | (((slice_view *)&local_24)->_1_3_[2] << 16)) << 8));
    if (!bVar2) goto LAB_00767812;
  }
  this_00 = (char *)&(this->Session) + 0x18c;
  iVar3 = (**(code **)(*(int *)((char *)&(this->Session) + 0x18c) + 0xc))();
  if (iVar3 != 0) {
    util__LogEnsure("\\mac\\home\\documents\\code\\cde\\cde\\strategic\\strategicmanager.cpp",0x2ff,
                    "Session.CombatingFleets.Num() == 0",(char *)0x0);
  }
  if (((param_2 == (Fleet *)0x0) || (param_3 == (ReferenceController *)0x0)) ||
     (bVar2 = util__ReferenceController__IsDataStillValid(param_3), !bVar2)) {
    util__LogEnsure("\\mac\\home\\documents\\code\\cde\\cde\\strategic\\strategicmanager.cpp",0x300,
                    "CombatingFleet.IsValid()",(char *)0x0);
  }
  (**(code **)(*(int *)this_00 + 0x10))();
  if (param_2 != (Fleet *)0x0) {
    if (param_3 == (ReferenceController *)0x0) goto LAB_00767aee;
    bVar2 = util__ReferenceController__IsDataStillValid(param_3);
    if (bVar2) {
      this_02 = Manager__GetCameras((Manager *)this);
      CameraManager__PushIdenticalCameraState(this_02);
      GetTacticalGame_Memoize(this);
      if (*(char *)&(this->Session).PlayerAlliance == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      GameManager__SwitchToSession((GameManager *)this->_pad_0x0_0,*(Manager **)&(*((char *)(this) + 0x6c)),false);
      util__Darray_class_util__WeakPtr_class_Body_____Add
                ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)this_00,(WeakPtr_L_class_Body_G_ *)&param_2
                );
      if (((param_4 != 0) && (param_5 != (ReferenceController *)0x0)) &&
         (bVar2 = util__ReferenceController__IsDataStillValid(param_5), bVar2)) {
        util__Darray_class_util__WeakPtr_class_Body_____Add
                  ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)this_00,
                   (WeakPtr_L_class_Body_G_ *)&param_4);
        if ((char)local_24 == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\strategic\\strategicmanager.cpp",
                          0x309,"Combat",(char *)0x0);
          DebugBreak();
        }
      }
      uVar8 = SUB41(&local_3c,0);
      local_c = 0;
      this_03 = Manager__GetParent((Manager *)this);
      this_04 = GameManager__GetDataManager(this_03);
      util__SerializationManagerInterface__GetTypedDataOfType_struct_Speaker__o2
                            ((SerializationManagerInterface *)this_04,sret_gtd_p4,(bool)uVar8);
  piVar4 = (int *)sret_gtd_p4;
      local_20 = (undefined **)0x0;
      puStack_1c = (undefined4 *)0x0;
      iStack_18 = 0;
      uStack_14 = 0;
      iVar3 = (**(code **)(*piVar4 + 0xc))();
      util__Darray_class_Manager____Darray_class_Manager
                ((Darray_L_class_Manager_P_G_ *)&local_20,iVar3);
      local_10 = 0;
      iVar3 = (**(code **)(*piVar4 + 0xc))();
      if (local_10 < iVar3) {
        do {
          piVar5 = (int *)(**(code **)*piVar4)(&local_10);
          iVar3 = iStack_18;
          if (*(char *)(*piVar5 + 0x45) != '\0') {
            local_28 = iStack_18 + 1;
            util__Darray_class_util__Reflectable____SetSize
                      ((Darray_L_util__Reflectable_P_G_ *)&local_20,&local_28);
            bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                              ((Darray_L_GraphicsResource__Type_G_ *)&local_20,iVar3);
            if (bVar2) {
              puStack_1c[iStack_18 + -1] = *piVar5;
            }
          }
          local_10 = local_10 + 1;
          iVar3 = (**(code **)(*piVar4 + 0xc))();
          this = local_2c;
        } while (local_10 < iVar3);
      }
      pcVar7 = DebugBreak_exref;
      if (iStack_18 != 1) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\function.inl",
                        0x38,"FilteredArray.Num() == 1",(char *)0x0);
        pcVar7 = DebugBreak_exref;
        DebugBreak();
      }
      if (iStack_18 < 1) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3a,
                        "Size > 0",(char *)0x0);
        (*pcVar7)();
      }
      pSVar1 = (Speaker *)*puStack_1c;
      local_20 = 0x9194a4;
      operator_delete__(puStack_1c);
      puStack_1c = (undefined4 *)0x0;
      local_20 = 0x919488;
      NotificationManager__CloseNotificationsOfSpeaker((NotificationManager *)
                 &(this->Notifications).NotificationManagerMemoizationHandlerInstance.ResetFunctions
                  .Size,pSVar1);
      local_3c = 0x9194a4;
      if (local_38 != (void *)0x0) {
        operator_delete__(local_38);
      }
      if ((param_3 != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid(param_3), !bVar2)) {
        param_2 = (Fleet *)0x0;
      }
      this_01 = param_2;
      GetTacticalGame_Memoize(this);
      if (*(char *)&(this->Session).PlayerAlliance == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        (*pcVar7)();
      }
      puVar6 = (undefined4 *)Fleet__GetCurrentState(this_01);
      TacticalManager__StartTacticalSession(*(TacticalManager **)&(*((char *)(this) + 0x6c)),local_24,*puVar6,puVar6[1],puVar6[2],
                 puVar6[3],puVar6[4],puVar6[5],puVar6[6],puVar6[7],puVar6[8],puVar6[9],puVar6[10],
                 puVar6[0xb],(char *)&(this->Session) + 0x18c);
    }
  }
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
LAB_00767aee:
  if (param_5 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_5);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000767b10 00767b10_HandleMouseMove ====
// decompiled by BatchDecomp @ 00767b10 name=HandleMouseMove conv=__thiscall body=134

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual bool __thiscall StrategicManager__HandleMouseMove(struct util__Vec2_L_double_G_) */

bool __thiscall StrategicManager__HandleMouseMove(StrategicManager *this,Vec2_L_double_G_ param_1)

{
  ItineraryNode local_15c;
  double local_c;
  
  ItineraryNode__ItineraryNode(&local_15c);
  local_c = 0.0;
  ItineraryNode_operator
            ((ItineraryNode *)&(this->Session).HoveredItineraryNode.Value1.LastState.Position.Y,
             &local_15c);
  (this->Session).SelectedItineraryNode.LastState.Position.X = local_c;
  if (local_15c.CachedNearestOrbiter.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_15c.CachedNearestOrbiter.Controller);
  }
  if (local_15c.CachedNearestFleet.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_15c.CachedNearestFleet.Controller);
  }
  if (local_15c.CachedNearestBody.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_15c.CachedNearestBody.Controller);
  }
  if (local_15c.CachedGravityBody.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_15c.CachedGravityBody.Controller);
  }
  if (local_15c.Parent.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_15c.Parent.Controller);
  }
  return false;
}


//==== 0000767ba0 00767ba0_HasSingleIlluminator ====
// decompiled by BatchDecomp @ 00767ba0 name=HasSingleIlluminator conv=__thiscall body=44

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall StrategicManager__HasSingleIlluminator(void)const  */

bool __thiscall StrategicManager__HasSingleIlluminator(StrategicManager *this)

{
  int *piVar1;
  int iVar2;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_14[16];
  
  piVar1 = (int *)GetAllIlluminatorObjects(this);
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
            (local_14);
  return iVar2== 1;
}


//==== 0000767bd0 00767bd0_HoverItineraryNode ====
// decompiled by BatchDecomp @ 00767bd0 name=HoverItineraryNode conv=__thiscall body=114

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__HoverItineraryNode(struct util::tuple2<struct
   ItineraryNode,double>) */

void __thiscall
StrategicManager__HoverItineraryNode(StrategicManager *this,undefined4 param_2,ReferenceController *param_3)

{
  ReferenceController *in_stack_000000f8;
  ReferenceController *in_stack_00000100;
  ReferenceController *in_stack_00000108;
  ReferenceController *in_stack_00000130;
  double in_stack_00000154;
  
  ItineraryNode_operator
            ((ItineraryNode *)&(this->Session).HoveredItineraryNode.Value1.LastState.Position.Y,
             (ItineraryNode *)&param_2);
  (this->Session).SelectedItineraryNode.LastState.Position.X = in_stack_00000154;
  if (in_stack_00000130 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(in_stack_00000130);
  }
  if (in_stack_00000108 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(in_stack_00000108);
  }
  if (in_stack_00000100 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(in_stack_00000100);
  }
  if (in_stack_000000f8 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(in_stack_000000f8);
  }
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  return;
}


//==== 0000767c50 00767c50_IsHoverLookingAheadInTime_s ====
// decompiled by BatchDecomp @ 00767c50 name=IsHoverLookingAheadInTime_s conv=__thiscall body=11

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall StrategicManager__IsHoverLookingAheadInTime_s(void)const  */

bool __thiscall StrategicManager__IsHoverLookingAheadInTime_s(StrategicManager *this)

{
  return *(int *)&(this->Session).HoveredItineraryNode.Value1.LastState.Position.Y != 0;
}


//==== 0000767c60 00767c60_IsInCutscene ====
// decompiled by BatchDecomp @ 00767c60 name=IsInCutscene conv=__thiscall body=67

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall StrategicManager__IsInCutscene(void)const  */

bool __thiscall StrategicManager__IsInCutscene(StrategicManager *this)

{
  int iVar1;
  int *piVar2;
  GameManager *this_00;
  DataParser *pDVar3;
  Campaign *pCVar4;
  SoundEffect *pSVar5;
  
  iVar1 = (this->Session).MessagesStored._pad_0x0_0;
  this_00 = Manager__GetParent((Manager *)this);
  pDVar3 = GameManager__GetDataManager(this_00);
  pCVar4 = GetCurrentCampaign(pDVar3);
  pSVar5 = pCVar4[1].MainMenuMusic;
  piVar2 = &pSVar5->_pad_0x0_0;
  while( true ) {
    if (pSVar5 == (SoundEffect *)(piVar2 + pCVar4[1].LevelOrder._pad_0x0_0)) {
      return false;
    }
    if (pSVar5->_pad_0x0_0 == iVar1) break;
    pSVar5 = (SoundEffect *)&pSVar5->_pad_0x0_0;
  }
  return true;
}


//==== 0000767cb0 00767cb0_IsInEndCreditsLevel ====
// decompiled by BatchDecomp @ 00767cb0 name=IsInEndCreditsLevel conv=__thiscall body=110

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall StrategicManager__IsInEndCreditsLevel(void)const  */

bool __thiscall StrategicManager__IsInEndCreditsLevel(StrategicManager *this)

{
  int iVar1;
  GameManager *pGVar2;
  DataParser *pDVar3;
  Campaign *pCVar4;
  int *piVar5;
  SoundEffect *pSVar6;
  
  iVar1 = (this->Session).MessagesStored._pad_0x0_0;
  pGVar2 = Manager__GetParent((Manager *)this);
  pDVar3 = GameManager__GetDataManager(pGVar2);
  pCVar4 = GetCurrentCampaign(pDVar3);
  pSVar6 = pCVar4[1].MainMenuMusic;
  piVar5 = &pSVar6->_pad_0x0_0;
  while( true ) {
    if (pSVar6 == (SoundEffect *)(piVar5 + pCVar4[1].LevelOrder._pad_0x0_0)) {
      return false;
    }
    if (pSVar6->_pad_0x0_0 == iVar1) break;
    pSVar6 = (SoundEffect *)&pSVar6->_pad_0x0_0;
  }
  pGVar2 = Manager__GetParent((Manager *)this);
  pDVar3 = GameManager__GetDataManager(pGVar2);
  pCVar4 = GetCurrentCampaign(pDVar3);
  iVar1 = (this->Session).MessagesStored._pad_0x0_0;
  piVar5 = (int *)(**(code **)(pCVar4[1]._pad_0x0_0 + 8))();
  if (*piVar5 != iVar1) {
    return false;
  }
  return true;
}


//==== 0000767d20 00767d20_IsLookingAheadInTime_s ====
// decompiled by BatchDecomp @ 00767d20 name=IsLookingAheadInTime_s conv=__thiscall body=24

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall StrategicManager__IsLookingAheadInTime_s(void)const  */

bool __thiscall StrategicManager__IsLookingAheadInTime_s(StrategicManager *this)

{
  if ((*(int *)&(this->Session).HoveredItineraryNode.Value1.LastState.Position.Y == 0) &&
     (*(int *)&(this->Session).SelectedItineraryNode.LastState.Position.Y == 0)) {
    return false;
  }
  return true;
}


//==== 0000767d40 00767d40_IsNotInScreenshotMode ====
// decompiled by BatchDecomp @ 00767d40 name=IsNotInScreenshotMode conv=__thiscall body=24

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall StrategicManager__IsNotInScreenshotMode(void)const  */

bool __thiscall StrategicManager__IsNotInScreenshotMode(StrategicManager *this)

{
  bool bVar1;
  
  if (*(char *)&(this->AlliedController).Controller == '\0') {
    bVar1 = IsInCutscene(this);
    if (!bVar1) {
      return true;
    }
  }
  return false;
}


//==== 0000767d60 00767d60_IsObjectCollidingWithAnyCelestialObjects ====
extern undefined4 FUN_00758da0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 00767d60 name=IsObjectCollidingWithAnyCelestialObjects conv=__thiscall body=250

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall StrategicManager__IsObjectCollidingWithAnyCelestialObjects(class
   WeakPtr_L_CelestialObject_G_ const &,struct util__Line3_L_double_G_,struct
   Range_L_double_G_)const  */

bool __thiscall
StrategicManager__IsObjectCollidingWithAnyCelestialObjects(StrategicManager *this,WeakPtr_L_class_CelestialObject_G_ *param_1,Line3_L_double_G_ param_2,
          Range_L_double_G_ param_3)

{
  undefined1 stack0x00000008[0x240];
  int iVar1;
  bool bVar2;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar3;
  Darray_L_bool_G_ *pDVar4;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_48[16];
  undefined **local_38;
  void *local_34;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_28[16];
  bool local_18;
  WeakPtr_L_class_CelestialObject_G_ *local_14;
  undefined1 *puStack_10;
  int local_8;
  
  local_14 = param_1;
  puStack_10 = (undefined1 *)((int)&param_2.B.Z + 4);
  if ((this->GetGravitationallyRelevantCelestialObjects_MemoizedValue).IsValidData == false) {
    iVar1 = (this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size;
    local_8 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&this->StrategicManagerMemoizationHandlerInstance
               ,&local_8);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &this->StrategicManagerMemoizationHandlerInstance,iVar1);
    if (bVar2) {*(void **)&((this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Data[(this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size+-1]) = (void *)&TacticalManager_GetRelevantCelestials_Clear;
    }
    pDVar3 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
             GetGravitationallyRelevantCelestialObjects_MemoizedFunction(this);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_28,pDVar3);
    local_18 = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetGravitationallyRelevantCelestialObjects_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_28);
    (this->GetGravitationallyRelevantCelestialObjects_MemoizedValue).IsValidData = local_18;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
              ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_28);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
              (local_48);
  }
  if ((this->GetGravitationallyRelevantCelestialObjects_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pDVar4 = (Darray_L_bool_G_ *)
           FUN_00758da0(&local_38,&this->GetGravitationallyRelevantCelestialObjects_MemoizedValue,
                        CONCAT44(puStack_10,local_14),&stack0x00000008);
  bVar2 = util__Any(pDVar4);
  local_38 = 0x9256ec;
  if (local_34 != (void *)0x0) {
    operator_delete__(local_34);
  }
  return bVar2;
}


//==== 0000767e60 00767e60_IsObjectOrigin ====
// decompiled by BatchDecomp @ 00767e60 name=IsObjectOrigin conv=__thiscall body=50

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall StrategicManager__IsObjectOrigin(class WeakPtr_L_CelestialObject_G_)const  */

bool __thiscall
StrategicManager__IsObjectOrigin(StrategicManager *this,int param_2,ReferenceController *param_3)

{
  bool bVar1;
  
  if ((param_3 == *(ReferenceController **)&(*((char *)&((this->Session).ReferenceObject) + 0xc))) &&
     (param_2 == (this->Session).ReferenceObject.LPointID)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  return bVar1;
}


//==== 0000767ea0 00767ea0_IsPlayerAIControlled ====
// decompiled by BatchDecomp @ 00767ea0 name=IsPlayerAIControlled conv=__thiscall body=14

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall StrategicManager__IsPlayerAIControlled(void)const  */

bool __thiscall StrategicManager__IsPlayerAIControlled(StrategicManager *this)

{
  undefined1 stack0x00000008[0x240];
  return *(int *)((this->Session).MessagesStored._pad_0x0_0 + 0x7c) != 0;
}


//==== 0000767eb0 00767eb0_IsRunningTurnAllowed ====
// decompiled by BatchDecomp @ 00767eb0 name=IsRunningTurnAllowed conv=__thiscall body=312

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall StrategicManager__IsRunningTurnAllowed(void)const  */

bool __thiscall StrategicManager__IsRunningTurnAllowed(StrategicManager *this)

{
  undefined1 stack0x00000008[0x240];
  bool bVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  Itinerary *this_00;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_1c[16];
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (((this->Session).TurnStep_s <= /*0000000000000000*/0.0) &&
     ((*(int *)&(this->Session).CurrentTime_s == 0 ||
      ((bVar1 = PlayerFailed(this), !bVar1 && (bVar1 = PlayerIsVictorious(this), !bVar1)))))) {
    piVar3 = (int *)GetRelevantFleets(this);
    local_c = 0;
    iVar4 = (**(code **)(*piVar3 + 0xc))();
    if (local_c < iVar4) {
      do {
        puVar5 = (undefined4 *)(**(code **)*piVar3)(&local_c);
        if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
           !bVar1)) {
          *puVar5 = 0;
        }
        bVar1 = Fleet__HasMission((Fleet *)*puVar5);
        if (bVar1) {
          if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
             (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
             !bVar1)) {
            *puVar5 = 0;
          }
          this_00 = (Itinerary *)Fleet__GetMissionItinerary((Fleet *)*puVar5);
          if (*(char *)&this_00[2].FinalOrbit.Data.Elements.SemiMajorAxis_km == '\0') {
            util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17
                            ,"IsValid()",(char *)0x0);
            DebugBreak();
          }
          bVar1 = Itinerary__IsTraversable(this_00);
          if (!bVar1) {
            bVar1 = false;
            goto LAB_00767fb4;
          }
        }
        local_c = local_c + 1;
        iVar4 = (**(code **)(*piVar3 + 0xc))();
      } while (local_c < iVar4);
    }
    bVar1 = true;
LAB_00767fb4:
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
              (local_1c);
    if (bVar1) {
      uVar2 = 1;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return (bool)uVar2;
    }
  }
  uVar2 = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}


//==== 0000767ff0 00767ff0_KillBody ====
// decompiled by BatchDecomp @ 00767ff0 name=KillBody conv=__thiscall body=559

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__KillBody(class WeakPtr_L_Body_G_) */

void __thiscall
StrategicManager__KillBody(StrategicManager *this,Body *param_2,ReferenceController *param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  ActorHandler *pAVar5;
  Fleet *this_00;
  ReferenceController *pRVar6;
  Body *pBVar7;
  undefined4 uVar8;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_28[16];
  StrategicManager *local_18;
  int local_14;
  undefined8 local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_18 = this;
  if (param_2 != (Body *)0x0) {
    if (param_3 == (ReferenceController *)0x0) goto LAB_0076820c;
    bVar1 = util__ReferenceController__IsDataStillValid(param_3);
    if (bVar1) {
      if ((param_3 != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid(param_3), !bVar1)) {
        param_2 = (Body *)0x0;
      }
      Body__GetSpacecraftComponent_Memoize(param_2);
      if ((param_2->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      if ((((param_2->GetSpacecraftComponent_MemoizedValue).Data.Pointer !=
            (SpacecraftComponent *)0x0) &&
          (pRVar6 = (param_2->GetSpacecraftComponent_MemoizedValue).Data.Controller,
          pRVar6 != (ReferenceController *)0x0)) &&
         (bVar1 = util__ReferenceController__IsDataStillValid(pRVar6), bVar1)) {
        local_10 = 0;
        piVar2 = (int *)GetFleets(this);
        local_14 = 0;
        iVar3 = (**(code **)(*piVar2 + 0xc))();
        if (local_14 < iVar3) {
          do {
            puVar4 = (undefined8 *)(**(code **)*piVar2)(&local_14);
            pBVar7 = param_2;
            pRVar6 = param_3;
            if (param_3 != (ReferenceController *)0x0) {
              util__ReferenceController__AddWeakReference(param_3);
            }
            if ((*(ReferenceController **)((int)puVar4 + 4) != (ReferenceController *)0x0) &&
               (bVar1 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)((int)puVar4 + 4)), !bVar1)) {
              *(undefined4 *)puVar4 = 0;
            }
            bVar1 = Fleet__KillBody(*(Fleet **)puVar4,pBVar7,pRVar6);
            if (bVar1) {
              if ((Fleet *)local_10 == (Fleet *)0x0) {
LAB_00768150:
                pRVar6 = ((slice_view *)&local_10)->_4_4_;
              }
              else {
                pRVar6 = ((slice_view *)&local_10)->_4_4_;
                if (((slice_view *)&local_10)->_4_4_ != (ReferenceController *)0x0) {
                  bVar1 = util__ReferenceController__IsDataStillValid(((slice_view *)&local_10)->_4_4_);
                  if (bVar1) {
                    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\strategic\\strategicmanager.cpp"
                                    ,0x427,"!PendingRemoval",(char *)0x0);
                    DebugBreak();
                  }
                  goto LAB_00768150;
                }
              }
              local_10 = *puVar4;
              if (*(ReferenceController **)((int)puVar4 + 4) != (ReferenceController *)0x0) {
                util__ReferenceController__AddWeakReference(*(ReferenceController **)((int)puVar4 + 4));
              }
              if (pRVar6 != (ReferenceController *)0x0) {
                util__ReferenceController__ReleaseWeakReference(pRVar6);
              }
            }
            local_14 = local_14 + 1;
            iVar3 = (**(code **)(*piVar2 + 0xc))();
            this = local_18;
          } while (local_14 < iVar3);
        }
        util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
                  (local_28);
        if ((Fleet *)local_10 != (Fleet *)0x0) {
          if (((slice_view *)&local_10)->_4_4_ == (ReferenceController *)0x0) goto LAB_00768200;
          bVar1 = util__ReferenceController__IsDataStillValid(((slice_view *)&local_10)->_4_4_);
          if (bVar1) {
            if (((slice_view *)&local_10)->_4_4_ == (ReferenceController *)0x0) {
              this_00 = (Fleet *)local_10;
            }
            else {
              bVar1 = util__ReferenceController__IsDataStillValid(((slice_view *)&local_10)->_4_4_);
              this_00 = (Fleet *)local_10;
              if (!bVar1) {
                this_00 = (Fleet *)0x0;
              }
              local_10 = CONCAT44(((slice_view *)&local_10)->_4_4_,this_00);
            }
            bVar1 = Fleet__HasShips(this_00);
            if (!bVar1) {
              uVar8 = (Fleet *)local_10;
              pRVar6 = ((slice_view *)&local_10)->_4_4_;
              if (((slice_view *)&local_10)->_4_4_ != (ReferenceController *)0x0) {
                util__ReferenceController__AddWeakReference(((slice_view *)&local_10)->_4_4_);
              }
              pAVar5 = (ActorHandler *)
                       util__Darray_enum_CrewDepartment__Type___Num
                                 ((Darray_L_enum_CrewDepartment__Type_G_ *)this);
              ActorHandler__KillActor_class_Fleet(pAVar5,uVar8,pRVar6);
            }
          }
        }
        if (((slice_view *)&local_10)->_4_4_ != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_10)->_4_4_);
        }
      }
    }
  }
LAB_00768200:
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
LAB_0076820c:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000768220 00768220_KillFleet ====
#undef t /* auto(v2): compat 僵尸宏撞成员名 */

// decompiled by BatchDecomp @ 00768220 name=KillFleet conv=__thiscall body=455

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__KillFleet(class WeakPtr_L_Fleet_G_) */

void __thiscall
StrategicManager__KillFleet(StrategicManager *this,Fleet *param_2,ReferenceController *param_3)

{
  undefined8 _local_2dc;
  ReferenceController *this_00;
  bool bVar1;
  int *piVar2;
  ActorHandler *pAVar3;
  bool bVar4;
  undefined4 uVar5;
  ReferenceController *pRVar6;
  undefined4 uVar7;
  ItineraryNode local_57c;
  ItineraryNode local_42c;
  Fleet *local_2dc;
  WorldObject local_2c8;
  undefined4 local_10;
  ReferenceController *local_c;
  char local_5;
  
  bVar4 = false;
  local_c = (ReferenceController *)0x0;
  _local_2dc = CONCAT44(param_3,param_2);
  if (param_3 != (ReferenceController *)0x0) {
    (*(undefined4 *)((char *)&(local_42c.CachedNearestOrbitParametricCoord) + 12)) = 0x76824e;
    util__ReferenceController__AddWeakReference(param_3);
  }
  (*(undefined4 *)((char *)&(local_42c.CachedNearestOrbitParametricCoord) + 12)) = 0x768255;
  OnFleetChanged(this);
  _local_2dc = CONCAT44(0x768260,local_2dc);
  bVar1 = WorldObject__IsFleet((WorldObject *)&(this->Session).SelectedObject.Node);
  if (bVar1) {
    _local_2dc = CONCAT44(&local_10,0x768273);
    piVar2 = (int *)WorldObject__AsFleet((WorldObject *)&(this->Session).SelectedObject.Node);
    if ((param_3 == (ReferenceController *)piVar2[1]) && (param_2 == (Fleet *)*piVar2)) {
      local_5 = '\x01';
      bVar4 = true;
      goto LAB_00768296;
    }
    bVar4 = true;
  }
  local_5 = '\0';
LAB_00768296:
  if ((local_c != (ReferenceController *)0x0) && (bVar4)) {
    _local_2dc = CONCAT44(0x7682a7,local_2dc);
    util__ReferenceController__ReleaseWeakReference(local_c);
  }
  if (local_5 != '\0') {
    local_2c8.Object.Pointer = (Actor *)0x0;
    local_2c8.Object.Controller = (ReferenceController *)0x0;
    local_2c8.LPointID = 0;
    _local_2dc = CONCAT44(0x7682d6,local_2dc);
    ItineraryNode__ItineraryNode(&local_2c8.Node.LastNode);
    _local_2dc = CONCAT44(0x7682e1,local_2dc);
    ItineraryNode__ItineraryNode(&local_2c8.Node.NextNode);
    local_2c8.Node.t = 0.0;
    _local_2dc = CONCAT44(&local_2c8,0x7682fb);
    WorldObject_operator((WorldObject *)&(this->Session).SelectedObject.Node,&local_2c8);
    _local_2dc = CONCAT44(0x768306,local_2dc);
    NodeMouseOver_NodeMouseOver(&local_2c8.Node);
    if (local_2c8.Object.Controller != (ReferenceController *)0x0) {
      _local_2dc = CONCAT44(0x768315,local_2dc);
      util__ReferenceController__ReleaseWeakReference(local_2c8.Object.Controller);
    }
  }
  if (param_3 != (ReferenceController *)0x0) {
    _local_2dc = CONCAT44(0x768326,local_2dc);
    util__ReferenceController__AddWeakReference(param_3);
  }
  if ((param_3 == (this->Session).ReferenceObject.Node.LastNode.Parent.Controller) &&
     (param_2 == (this->Session).ReferenceObject.Node.LastNode.Parent.Pointer)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (param_3 != (ReferenceController *)0x0) {
    _local_2dc = CONCAT44(0x768347,local_2dc);
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  if (bVar4) {
    _local_2dc = CONCAT44(&local_10,0x768356);
    GetReferenceCelestial(this);
    this_00 = local_c;
    uVar5 = local_10;
    pRVar6 = local_c;
    if (local_c != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(local_c);
      uVar5 = local_10;
    }
    uVar7 = 0;
    ItineraryNode__ItineraryNode(&local_57c);
    ItineraryNode__ItineraryNode(&local_42c);
    _local_2dc = 0;
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(this_00);
    }
    SetReferenceObject(this,uVar5,pRVar6,uVar7);
  }
  _local_2dc = CONCAT44(param_3,param_2);
  if (param_3 != (ReferenceController *)0x0) {
    (*(undefined4 *)((char *)&(local_42c.CachedNearestOrbitParametricCoord) + 12)) = 0x7683c4;
    util__ReferenceController__AddWeakReference(param_3);
  }
  (*(undefined4 *)((char *)&(local_42c.CachedNearestOrbitParametricCoord) + 12)) = 0x7683cb;
  pAVar3 = (ActorHandler *)
           util__Darray_enum_CrewDepartment__Type___Num((Darray_L_enum_CrewDepartment__Type_G_ *)this);
  (*(undefined4 *)((char *)&(local_42c.CachedNearestOrbitParametricCoord) + 12)) = 0x7683d2;
  ActorHandler__KillActor_class_Fleet(pAVar3,param_2,param_3);
  if (param_3 != (ReferenceController *)0x0) {
    _local_2dc = CONCAT44(0x7683de,local_2dc);
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  return;
}


//==== 0000769340 00769340_NewCelestialObject ====
// decompiled by BatchDecomp @ 00769340 name=NewCelestialObject conv=__thiscall body=547

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class WeakPtr_L_CelestialObject_G_ __thiscall
   StrategicManager__NewCelestialObject(struct CelestialBody *) */

void __thiscall StrategicManager__NewCelestialObject(StrategicManager *this,CelestialBody *param_1)

{
  undefined8 _local_2dc;
  int iVar1;
  bool bVar2;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar3;
  CelestialObject *this_00;
  int *piVar4;
  ReferenceControllerRegistry *pRVar5;
  ReferenceController *this_01;
  ActorHandler *pAVar6;
  WeakPtr_L_CelestialObject_G_ *pWVar7;
  CelestialBody *in_stack_00000008;
  undefined1 *puVar8;
  int *piVar9;
  ReferenceController *pRVar10;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_34[16];
  bool local_24;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_20[8];
  undefined1 local_18[4];
  ReferenceController *local_14;
  CelestialBody *local_10;
  CelestialBody *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = in_stack_00000008;
  local_10 = param_1;
  if ((this->GetCelestialObjects_MemoizedValue).IsValidData == false) {
    iVar1 = (this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size;
    local_14 = (ReferenceController *)(iVar1 + 1);
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&this->StrategicManagerMemoizationHandlerInstance
               ,(int *)&local_14);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &this->StrategicManagerMemoizationHandlerInstance,iVar1);
    if (bVar2) {*(void **)&((this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Data[(this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size+-1]) = (void *)&TacticalManager_GetAllBodies_Clear;
    }
    pDVar3 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
             GetCelestialObjects_MemoizedFunction(this);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_34,pDVar3);
    local_24 = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetCelestialObjects_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_34);
    (this->GetCelestialObjects_MemoizedValue).IsValidData = local_24;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
              ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_34);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
              (local_20);
    if ((this->GetCelestialObjects_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  pWVar7 = (this->GetCelestialObjects_MemoizedValue).Data.Data;
  if (pWVar7 != pWVar7 + (this->GetCelestialObjects_MemoizedValue).Data.Size) {
    do {
      if ((pWVar7->Controller != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid(pWVar7->Controller), !bVar2)) {
        pWVar7->Pointer = (CelestialObject *)0x0;
      }
      bVar2 = CelestialObject__UsesBodyTemplate(pWVar7->Pointer,local_c);
      if (bVar2) {
        param_1->_pad_0x0_0 = 0;
        param_1->_pad_0x0_0 = 0;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      pWVar7 = pWVar7 + 1;
    } while (pWVar7 != (this->GetCelestialObjects_MemoizedValue).Data.Data +
                       (this->GetCelestialObjects_MemoizedValue).Data.Size);
  }
  this_00 = (CelestialObject *)operator_new(0x140);
  if (this_00 == (CelestialObject *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    memset(this_00,0,0x140);
    piVar4 = (int *)CelestialObject__CelestialObject(this_00,this,local_c);
    if (piVar4 != (int *)0x0) goto LAB_007694b3;
  }
  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl",
                  0xd4,"NewPointer",(char *)0x0);
  DebugBreak();
LAB_007694b3:
  piVar9 = piVar4;
  pRVar5 = util__ReferenceControllerRegistry__Get();
  this_01 = util__ReferenceControllerRegistry__Register(pRVar5,piVar9);
  piVar9 = piVar4;
  pRVar10 = this_01;
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
    util__ReferenceController__AddStrongReference(this_01);
  }
  puVar8 = local_18;
  pAVar6 = (ActorHandler *)
           util__Darray_enum_CrewDepartment__Type___Num((Darray_L_enum_CrewDepartment__Type_G_ *)this);
  ActorHandler__NewActor_class_CelestialObject(pAVar6,puVar8,piVar9,pRVar10);
  if (local_14 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_14);
  }
  pAVar6 = (ActorHandler *)
           util__Darray_enum_CrewDepartment__Type___Num((Darray_L_enum_CrewDepartment__Type_G_ *)this);
  ActorHandler__ResolvePendingActors(pAVar6);
  GameManager__UpdateLoadingScreen((GameManager *)this->_pad_0x0_0);
  local_10->_pad_0x0_0 = (int)piVar4;
  local_10->_pad_0x0_0 = (int)this_01;
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_01);
    bVar2 = util__ReferenceController__ReleaseStrongReference(this_01);
    if (bVar2) {
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))(1);
      }
      pRVar5 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar5,piVar4);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000769c00 00769c00_OnFleetSpentDeltaV ====
// decompiled by BatchDecomp @ 00769c00 name=OnFleetSpentDeltaV conv=__thiscall body=162

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__OnFleetSpentDeltaV(class WeakPtr_L_Fleet_G_,double) */

void __thiscall
StrategicManager__OnFleetSpentDeltaV(StrategicManager *this,Fleet *param_2,ReferenceController *param_3,double param_4)

{
  bool bVar1;
  
  if ((param_3 != (ReferenceController *)0x0) &&
     (bVar1 = util__ReferenceController__IsDataStillValid(param_3), !bVar1)) {
    param_2 = (Fleet *)0x0;
  }
  bVar1 = Fleet__IsPlayerFleet(param_2);
  if (bVar1) {
    if ((param_3 != (ReferenceController *)0x0) &&
       (bVar1 = util__ReferenceController__IsDataStillValid(param_3), !bVar1)) {
      param_2 = (Fleet *)0x0;
    }
    Fleet__IsCapitalShipFleet_Memoize(param_2);
    if ((param_2->IsCapitalShipFleet_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if ((param_2->IsCapitalShipFleet_MemoizedValue).Data != false) {
      *(double *)&(this->Session).InitialEnemyCompartments =
           param_4 + *(double *)&(this->Session).InitialEnemyCompartments;
    }
  }
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  return;
}


//==== 0000769cb0 00769cb0_OnSpacecraftSplit ====
// decompiled by BatchDecomp @ 00769cb0 name=OnSpacecraftSplit conv=__thiscall body=471

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__OnSpacecraftSplit(class WeakPtr_L_SpacecraftComponent_G_,class WeakPtr_L_SpacecraftComponent_G_) */

void __thiscall
StrategicManager__OnSpacecraftSplit(StrategicManager *this,int param_2,ReferenceController *param_3,int param_4,
          ReferenceController *param_5)

{
  int *piVar1;
  int iVar2;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *this_00;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_10;
  undefined1 local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar3 = (this->Session).ShipsWithStartFlag.Size;
  iVar2 = (this->Session).ShipsWithStartFlag.Capacity * 0x10 + iVar3;
  local_10 = 0;
  for (; iVar3 != iVar2; iVar3 = iVar3 + 0x10) {
    piVar5 = *(int **)(iVar3 + 4);
    piVar1 = piVar5 + *(int *)(iVar3 + 8) * 2;
    for (; piVar5 != piVar1; piVar5 = piVar5 + 2) {
      if ((param_3 == (ReferenceController *)piVar5[1]) && (param_2 == *piVar5)) {
        local_c = 1;
        this_00 = (Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)
                  (*(code *)((this->Session).ShipsWithStartFlag.Data)->Pointer)(&local_10);
        piVar5 = *(int **)(this_00 + 4);
        piVar1 = piVar5 + *(int *)(this_00 + 8) * 2;
        if (piVar5 == piVar1) goto LAB_00769d98;
        goto LAB_00769d88;
      }
    }
    local_10 = local_10 + 1;
  }
  local_10 = 0;
  local_c = 0;
  goto LAB_00769d27;
joined_r0x00769dbe:
  if (piVar5 == piVar1) goto LAB_00769dd6;
  if ((param_5 == (ReferenceController *)piVar5[1]) && (param_4 == *piVar5)) goto LAB_00769dee;
  piVar5 = piVar5 + 2;
  goto joined_r0x00769dbe;
LAB_00769dd6:
  util__Darray_class_util__WeakPtr_class_Body_____Add
            ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&(this->Session).ShipsWithEndFlag.Data,
             (WeakPtr_L_class_Body_G_ *)&param_4);
  goto LAB_00769dee;
joined_r0x00769e27:
  if (piVar5 == piVar1) goto LAB_00769e46;
  if ((param_5 == (ReferenceController *)piVar5[1]) && (param_4 == *piVar5)) goto LAB_00769e5b;
  piVar5 = piVar5 + 2;
  goto joined_r0x00769e27;
LAB_00769e46:
  util__Darray_class_util__WeakPtr_class_Body_____Add
            ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&(this->Session).RecordDeltaVBurned_km__s,
             (WeakPtr_L_class_Body_G_ *)&param_4);
  goto LAB_00769e5b;
  while (piVar5 = piVar5 + 2, piVar5 != piVar1) {
LAB_00769d88:
    if ((param_5 == (ReferenceController *)piVar5[1]) && (param_4 == *piVar5)) goto LAB_00769d27;
  }
LAB_00769d98:
  util__Darray_class_util__WeakPtr_class_Body_____Add(this_00,(WeakPtr_L_class_Body_G_ *)&param_4);
LAB_00769d27:
  piVar5 = (int *)(this->Session).ShipsWithEndFlag.Size;
  piVar1 = piVar5 + (this->Session).ShipsWithEndFlag.Capacity * 2;
  for (piVar4 = piVar5; piVar4 != piVar1; piVar4 = piVar4 + 2) {
    if ((param_3 == (ReferenceController *)piVar4[1]) && (param_2 == *piVar4))
    goto joined_r0x00769dbe;
  }
LAB_00769dee:
  piVar5 = *(int **)((int)&(this->Session).RecordDeltaVBurned_km__s + 4);
  piVar1 = piVar5 + (this->Session).InitialCapitalShipsAlive * 2;
  for (piVar4 = piVar5; piVar4 != piVar1; piVar4 = piVar4 + 2) {
    if ((param_3 == (ReferenceController *)piVar4[1]) && (param_2 == *piVar4))
    goto joined_r0x00769e27;
  }
LAB_00769e5b:
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  if (param_5 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_5);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000769e90 00769e90_OpenBriefingToFleetForCurrentLevel ====
// decompiled by BatchDecomp @ 00769e90 name=OpenBriefingToFleetForCurrentLevel conv=__thiscall body=87

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__OpenBriefingToFleetForCurrentLevel(void) */

void __thiscall StrategicManager__OpenBriefingToFleetForCurrentLevel(StrategicManager *this)

{
  MainManager *pMVar1;
  Level *pLVar2;
  bool bVar3;
  
  pLVar2 = (Level *)(this->Session).MessagesStored._pad_0x0_0;
  if (GlobalLevel.Length == 0) {
    ClearGameState(this);
    bVar3 = true;
    pMVar1 = GameManager__GetManager_class_MainManager((GameManager *)this->_pad_0x0_0);
    GameManager__SwitchToSession((GameManager *)this->_pad_0x0_0,(Manager *)pMVar1,bVar3);
    Interface__ExitScreen(*(Interface **)(this->_pad_0x0_0 + 0x20),2);
  }
  else {
    GameManager__Exit((GameManager *)this->_pad_0x0_0);
  }
  bVar3 = true;
  pMVar1 = GameManager__GetManager_class_MainManager((GameManager *)this->_pad_0x0_0);
  MainManager__OpenLevelBriefing(pMVar1,pLVar2,bVar3);
  return;
}


//==== 0000769ef0 00769ef0_PlayerFailed ====
// decompiled by BatchDecomp @ 00769ef0 name=PlayerFailed conv=__thiscall body=223

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall StrategicManager_PlayerFailed(void)const  */

bool __thiscall StrategicManager_PlayerFailed(StrategicManager *this)

{
  double dVar1;
  Level *this_00;
  int iVar2;
  Faction *pFVar3;
  bool bVar4;
  GameManager *this_01;
  DataParser *pDVar5;
  double local_c;
  
  this_00 = (Level *)(this->Session).MessagesStored._pad_0x0_0;
  this_01 = Manager__GetParent((Manager *)this);
  pDVar5 = GameManager__GetDataManager(this_01);
  bVar4 = Level__IsPartOfCampaign(this_00,pDVar5);
  if (!bVar4) {
    return false;
  }
  iVar2 = (this->Session).MessagesStored._pad_0x0_0;
  if (iVar2 != 0) {
    dVar1 = *(double *)(iVar2 + 0x40);
    local_c = 0.0;
    if (0.0 < dVar1) {
      if ((iVar2 == 0) || (dVar1 <= 0.0)) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      else {
        local_c = (*(double *)(iVar2 + 0x38) - /*409f400000000000*/2000.0) *
                  SecondsInAJulianYear_s + dVar1 * SecondsInAJulianDay_s;
      }
      bVar4 = local_c <= (this->Session).TurnRunTimeLeft_s;
      goto LAB_00769f9d;
    }
  }
  bVar4 = false;
LAB_00769f9d:
  if (!bVar4) {
    pFVar3 = *(Faction **)&(this->Session).CurrentTime_s;
    if ((pFVar3 != (Faction *)0x0) && (bVar4 = AnyCapitalShipsOfFactionLeft(this,pFVar3), !bVar4)) {
      return true;
    }
    bVar4 = CustomVictoryConditionsAreFailed(this);
    if (!bVar4) {
      return false;
    }
  }
  return true;
}


//==== 0000769fd0 00769fd0_PlayerIsVictorious ====
// decompiled by BatchDecomp @ 00769fd0 name=PlayerIsVictorious conv=__thiscall body=461

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall StrategicManager_PlayerIsVictorious(void)const  */

bool __thiscall StrategicManager_PlayerIsVictorious(StrategicManager *this)

{
  Level *this_00;
  Faction *pFVar1;
  TacticalManager *this_01;
  bool bVar2;
  bool bVar3;
  GameManager *this_02;
  DataParser *pDVar4;
  int iVar5;
  int *piVar6;
  Maybe_L_util__Darray_L_util__WeakPtr_L_Body_G___G___G_ *pMVar7;
  void *local_40;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_2c[19];
  undefined1 local_19;
  int local_18;
  int *local_14;
  char *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar3 = false;
  local_14 = (int *)0x0;
  if (*(int *)&(this->Session).CurrentTime_s != 0) {
    this_00 = (Level *)(this->Session).MessagesStored._pad_0x0_0;
    this_02 = Manager__GetParent((Manager *)this);
    pDVar4 = GameManager__GetDataManager(this_02);
    bVar2 = Level__IsPartOfCampaign(this_00,pDVar4);
    if (bVar2) {
      pFVar1 = *(Faction **)&(this->Session).CurrentTime_s;
      if (pFVar1 != (Faction *)0x0) {
        bVar2 = AnyCapitalShipsOfFactionLeft(this,pFVar1);
        if (!bVar2) goto LAB_0076a168;
      }
      iVar5 = GetVictoryConditions(this);
      if (*(char *)(iVar5 + 0x14) == '\0') {
        local_18 = *(int *)((int)&(this->Session).CurrentTime_s + 4);
        bVar3 = false;
        if (local_18 == 0) {
LAB_0076a14b:
          bVar2 = true;
        }
        else {
          piVar6 = (int *)GetAllFleetsOfFaction(this,(Faction *)local_2c);
          iVar5 = (**(code **)(*piVar6 + 0xc))();
          if (iVar5 < 1) {
            GetTacticalGame_Memoize(this);
            if (*(char *)&(this->Session).PlayerAlliance == '\0') {
              util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",
                              0x13,"IsValid()",(char *)0x0);
              DebugBreak();
            }
            this_01 = *(TacticalManager **)&(*((char *)(this) + 0x6c));
            TacticalManager__GetAllBodies_Memoize(this_01);
            pMVar7 = &this_01->GetAllBodies_MemoizedValue;
            if ((this_01->GetAllBodies_MemoizedValue).IsValidData == false) {
              util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",
                              0x13,"IsValid()",(char *)0x0);
              DebugBreak();
            }
            local_14 = &local_18;
            local_10 = (char *)0x0;
            local_c = 0;
            iVar5 = (**(code **)(*(int *)&pMVar7->Data + 0xc))();
            if (local_c < iVar5) {
              do {
                piVar6 = (int *)(**(code **)*(int *)&pMVar7->Data)(&local_c);
                if ((ReferenceController *)piVar6[1] != (ReferenceController *)0x0) {
                  bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar6[1]);
                  if (!bVar3) {
                    *piVar6 = 0;
                  }
                }
                if (*(int *)(*piVar6 + 0x1e0) == *local_14) {
                  local_10 = local_10 + 1;
                }
                local_c = local_c + 1;
                iVar5 = (**(code **)(*(int *)&pMVar7->Data + 0xc))();
              } while (local_c < iVar5);
            }
            bVar3 = true;
            if ((int)local_10 < 1) goto LAB_0076a14b;
          }
          bVar3 = true;
          bVar2 = false;
        }
        if (bVar3) {
          util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
                    (local_2c);
        }
      }
      else {
        bVar2 = CustomVictoryConditionsAreMet(this);
      }
      bVar3 = true;
      if (bVar2 != false) {
        local_19 = 1;
        goto LAB_0076a16a;
      }
    }
  }
LAB_0076a168:
  local_19 = 0;
LAB_0076a16a:
  if (bVar3) {
    if (local_40 != (void *)0x0) {
      operator_delete__(local_40);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)local_19;
}


//==== 000076a1c0 0076a1c0_RecacheItineraries ====
// decompiled by BatchDecomp @ 0076a1c0 name=RecacheItineraries conv=__thiscall body=337

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__RecacheItineraries(void) */

void __thiscall StrategicManager__RecacheItineraries(StrategicManager *this)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  Itinerary *pIVar5;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_20[16];
  StrategicManager *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = this;
  piVar2 = (int *)GetRelevantFleets(this);
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
      bVar1 = Fleet__HasMission((Fleet *)*puVar4);
      if (bVar1) {
        if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
           !bVar1)) {
          *puVar4 = 0;
        }
        pIVar5 = (Itinerary *)Fleet__GetMissionItinerary((Fleet *)*puVar4);
        if (*(char *)&pIVar5[2].FinalOrbit.Data.Elements.SemiMajorAxis_km == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        Itinerary__RecacheNodeOffsetStates(pIVar5);
        if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
           !bVar1)) {
          *puVar4 = 0;
        }
        pIVar5 = (Itinerary *)Fleet__GetMissionItinerary((Fleet *)*puVar4);
        if (*(char *)&pIVar5[2].FinalOrbit.Data.Elements.SemiMajorAxis_km == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        Itinerary__EnsureZeroTimeNodeExists(pIVar5);
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*piVar2 + 0xc))();
      this = local_10;
    } while (local_c < iVar3);
  }
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
            (local_20);
  bVar1 = ItineraryNode__IsValid((ItineraryNode *)&(this->Session).SelectedItineraryNode.LastState.Position.Y);
  if (bVar1) {
    ItineraryNode__CacheOffsetState((ItineraryNode *)&(this->Session).SelectedItineraryNode.LastState.Position.Y,this);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000076a3d0 0076a3d0_RenderBodiesForTacticalGame ====
// decompiled by BatchDecomp @ 0076a3d0 name=RenderBodiesForTacticalGame conv=__thiscall body=513

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__RenderBodiesForTacticalGame(struct
   Vec3_L_double_G_,bool)const  */

void __thiscall
StrategicManager__RenderBodiesForTacticalGame(StrategicManager *this,Vec3_L_double_G_ param_1,bool param_2)

{
  ReferenceController *this_00;
  Vec3_L_double_G_ VVar1;
  bool bVar2;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar3;
  int iVar4;
  undefined4 *puVar5;
  Vec3_L_double_G_ *pVVar6;
  double dVar7;
  double dVar8;
  int *piVar9;
  Vec3_L_double_G_ local_54;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_3c[16];
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_2c[16];
  bool local_1c;
  double local_18;
  int local_10;
  TransformStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((this->GetCelestialObjects_MemoizedValue).IsValidData == false) {
    iVar4 = (this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size;
    local_10 = iVar4 + 1;
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&this->StrategicManagerMemoizationHandlerInstance
               ,&local_10);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &this->StrategicManagerMemoizationHandlerInstance,iVar4);
    if (bVar2) {*(void **)&((this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Data[(this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size+-1]) = (void *)&TacticalManager_GetAllBodies_Clear;
    }
    pDVar3 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
             GetCelestialObjects_MemoizedFunction(this);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_2c,pDVar3);
    local_1c = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetCelestialObjects_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_2c);
    (this->GetCelestialObjects_MemoizedValue).IsValidData = local_1c;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
              ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_2c);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
              (local_3c);
    if ((this->GetCelestialObjects_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  local_10 = 0;
  iVar4 = (**(code **)((this->GetCelestialObjects_MemoizedValue).Data._pad_0x0_0 + 0xc))();
  if (local_10 < iVar4) {
    do {
      piVar9 = &local_10;
      puVar5 = (undefined4 *)(**(code **)(this->GetCelestialObjects_MemoizedValue).Data._pad_0x0_0)()
      ;
      Graphics__TransformStack__TransformStack(&local_9,Default);
      local_18 = (this->Session).TurnRunTimeLeft_s;
      if ((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]);
        if (!bVar2) {
          *puVar5 = 0;
        }
      }
      pVVar6 = CelestialObject__GetPositionAt_km((CelestialObject *)*puVar5,&local_54,
                          (double)CONCAT44(piVar9,(int)((ulonglong)local_18 >> 0x20)));
      dVar7 = pVVar6->Y - param_1.Y;
      dVar8 = pVVar6->Z - param_1.Z;
      (*(undefined4 *)&(VVar1.Y)) = *(undefined4 *)&dVar7;
      VVar1.X = pVVar6->X - param_1.X;
      (*(undefined4 *)((char *)&(VVar1.Y) + 4)) = (int)((ulonglong)dVar7 >> 0x20);
      (*(undefined4 *)&(VVar1.Z)) = *(undefined4 *)&dVar8;
      (*(undefined4 *)((char *)&(VVar1.Z) + 4)) = (int)((ulonglong)dVar8 >> 0x20);
      Graphics__Translate(VVar1);
      this_00 = (ReferenceController *)puVar5[1];
      if (param_2) {
        if (this_00 != (ReferenceController *)0x0) {
          bVar2 = util__ReferenceController__IsDataStillValid(this_00);
          if (!bVar2) {
            *puVar5 = 0;
          }
        }
        (**(code **)(*(int *)*puVar5 + 0x24))();
      }
      else {
        local_18 = (this->Session).TurnRunTimeLeft_s;
        if (this_00 != (ReferenceController *)0x0) {
          bVar2 = util__ReferenceController__IsDataStillValid(this_00);
          if (!bVar2) {
            *puVar5 = 0;
          }
        }
        CelestialObject__RenderActualModel((CelestialObject *)*puVar5,/*3ff0000000000000*/1.0,local_18);
        if ((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) {
          bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]);
          if (!bVar2) {
            *puVar5 = 0;
          }
        }
        CelestialObject__RenderDebug((CelestialObject *)*puVar5);
      }
      Graphics__TransformStack___TransformStack(&local_9);
      local_10 = local_10 + 1;
      iVar4 = (**(code **)((this->GetCelestialObjects_MemoizedValue).Data._pad_0x0_0 + 0xc))();
    } while (local_10 < iVar4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000076a5e0 0076a5e0_RenderShadows ====
// decompiled by BatchDecomp @ 0076a5e0 name=RenderShadows conv=__thiscall body=72

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall StrategicManager__RenderShadows(enum
   PostProcessor::ShadowBuffer)const  */

void __thiscall StrategicManager__RenderShadows(StrategicManager *this,ShadowBuffer param_1)

{
  Vec3_L_double_G_ VVar1;
  undefined1 (*pauVar2) [20];
  double dVar3;
  undefined1 local_34[48];
  
  if (param_1 == 0) {
    dVar3 = GetLookaheadTimeSinceJ2000_s(this);
    pauVar2 = (undefined1 (*) [20])
              GetReferenceDeltaState(this,(double)CONCAT44(SUB84(dVar3,0),local_34));
    (*(undefined4 *)((char *)&(VVar1.Z) + 4)) = (int)((ulonglong)*(undefined8 *)(*pauVar2 + 0x10) >> 0x20);
    memcpy(&(VVar1), pauVar2, 20);
    RenderToShadows(this,VVar1);
  }
  return;
}


//==== 000076a630 0076a630_RenderToShadows ====
// decompiled by BatchDecomp @ 0076a630 name=RenderToShadows conv=__thiscall body=597

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__RenderToShadows(struct Vec3_L_double_G_)const  */

void __thiscall StrategicManager__RenderToShadows(StrategicManager *this,Vec3_L_double_G_ param_1)

{
  Maybe_L_util__Darray_L_util__WeakPtr_L_CelestialObject_G___G___G_ *pMVar1;
  Vec3_L_double_G_ VVar2;
  Vec3_L_double_G_ VVar3;
  bool bVar4;
  Preferences *this_00;
  int iVar5;
  int *piVar6;
  ShadowShader *pSVar7;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar8;
  undefined4 *puVar9;
  CelestialObject *this_01;
  undefined4 unaff_EDI;
  uint uVar10;
  uint uVar11;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_64[16];
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_54[16];
  bool local_44;
  ReferenceController *local_40;
  char local_39;
  Vec3_L_double_G_ local_38;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_20[8];
  undefined8 local_18;
  int local_10;
  ShaderStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  this_00 = (Preferences *)Manager__GetOptions((Manager *)this);
  iVar5 = Preferences__GetShadowMapQuality(this_00);
  if (0 < iVar5) {
    piVar6 = (int *)GetAllIlluminatorObjects(this);
    iVar5 = (**(code **)(*piVar6 + 0xc))();
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
              (local_20);
    if (iVar5 == 1) {
      pSVar7 = ShadowShader__GetStatic();
      Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pSVar7);
      local_40 = *(ReferenceController **)&(*((char *)&((this->Session).ReferenceObject) + 0xc));
      this_01 = (CelestialObject *)(this->Session).ReferenceObject.LPointID;
      if (local_40 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(local_40);
      }
      piVar6 = (int *)GetIlluminatorObject(this);
      if (((ReferenceController *)piVar6[1] != local_40) ||
         (local_39 = '\0', (CelestialObject *)*piVar6 != this_01)) {
        local_39 = '\x01';
      }
      if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_18)->_4_4_);
      }
      if (local_39 != '\0') {
        local_18 = GetLookaheadTimeSinceJ2000_s(this);
        uVar10 = (uint)__xmm_80000000000000008000000000000000;
        uVar11 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        (*(undefined4 *)((char *)&(VVar2.X) + 4)) = (*(undefined4 *)((char *)&(param_1.X) + 4)) ^ uVar11;
        VVar2.X = -param_1.X;
        VVar2.Y = -param_1.Y;
        (*(undefined4 *)((char *)&(VVar2.Y) + 4)) = (*(undefined4 *)((char *)&(param_1.Y) + 4)) ^ uVar11;
        VVar2.Z = -param_1.Z;
        (*(undefined4 *)((char *)&(VVar2.Z) + 4)) = (*(undefined4 *)((char *)&(param_1.Z) + 4)) ^ uVar11;
        Graphics__Translate(VVar2);
        if (local_40 != (ReferenceController *)0x0) {
          bVar4 = util__ReferenceController__IsDataStillValid(local_40);
          if (!bVar4) {
            this_01 = (CelestialObject *)0x0;
          }
        }
        CelestialObject__GetPositionAt_km(this_01,&local_38,(double)CONCAT44(unaff_EDI,(int)((ulonglong)local_18 >> 0x20)))
        ;
        (*(undefined4 *)((char *)&(VVar3.X) + 4)) = (*(undefined4 *)((char *)&(local_38.X) + 4));
        (*(undefined4 *)&(VVar3.X)) = (*(undefined4 *)&(local_38.X));
        (*(undefined4 *)&(VVar3.Y)) = (*(undefined4 *)&(local_38.Y));
        (*(undefined4 *)((char *)&(VVar3.Y) + 4)) = (*(undefined4 *)((char *)&(local_38.Y) + 4));
        (*(undefined4 *)&(VVar3.Z)) = *(undefined4 *)&local_38.Z;
        (*(undefined4 *)((char *)&(VVar3.Z) + 4)) = (int)((ulonglong)local_38.Z >> 0x20);
        Graphics__Translate(VVar3);
        if ((this->GetCelestialObjects_MemoizedValue).IsValidData == false) {
          iVar5 = (this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size;
          local_10 = iVar5 + 1;
          util__Darray_class_util__Reflectable____SetSize
                    ((Darray_L_util__Reflectable_P_G_ *)
                     &this->StrategicManagerMemoizationHandlerInstance,&local_10);
          bVar4 = util__Darray_enum_GraphicsResource__Type___CheckSize
                            ((Darray_L_GraphicsResource__Type_G_ *)
                             &this->StrategicManagerMemoizationHandlerInstance,iVar5);
          if (bVar4) {*(void **)&((this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Data[(this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size+-1]) = (void *)&TacticalManager_GetAllBodies_Clear;
          }
          pDVar8 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
                   GetCelestialObjects_MemoizedFunction(this);
          util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_54,pDVar8);
          local_44 = true;
          util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
                    ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
                     &this->GetCelestialObjects_MemoizedValue,
                     (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_54);
          (this->GetCelestialObjects_MemoizedValue).IsValidData = local_44;
          util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
                    ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_54);
          util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
                    (local_64);
        }
        pMVar1 = &this->GetCelestialObjects_MemoizedValue;
        if ((this->GetCelestialObjects_MemoizedValue).IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        local_10 = 0;
        iVar5 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
        if (local_10 < iVar5) {
          do {
            puVar9 = (undefined4 *)(**(code **)*(int *)&pMVar1->Data)(&local_10);
            if ((ReferenceController *)puVar9[1] != (ReferenceController *)0x0) {
              bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar9[1]);
              if (!bVar4) {
                *puVar9 = 0;
              }
            }
            CelestialObject__RenderSimple((CelestialObject *)*puVar9,local_18);
            local_10 = local_10 + 1;
            iVar5 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
          } while (local_10 < iVar5);
        }
      }
      if (local_40 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_40);
      }
      Graphics__ShaderStack___ShaderStack(&local_9);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000076b410 0076b410_RestartGame ====
// decompiled by BatchDecomp @ 0076b410 name=RestartGame conv=__thiscall body=64

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__RestartGame(void) */

void __thiscall StrategicManager__RestartGame(StrategicManager *this)

{
  int iVar1;
  Interface *this_00;
  
  iVar1 = (this->Session).MessagesStored._pad_0x0_0;
  ClearGameState(this);
  GameManager__SwitchToSession((GameManager *)this->_pad_0x0_0,(Manager *)this,true);
  this_00 = Manager__GetInterfacer((Manager *)this);
  Interface__ResetWidgetScreen(this_00);
  GameManager__Unpause((GameManager *)this->_pad_0x0_0);
  (this->Session).MessagesStored._pad_0x0_0 = iVar1;
  *(undefined1 *)&(this->Session).MessagesStored._pad_0x0_0 = 1;
  return;
}


//==== 000076b450 0076b450_RunTurn ====
// decompiled by BatchDecomp @ 0076b450 name=RunTurn conv=__thiscall body=460

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__RunTurn(void) */

void __thiscall StrategicManager__RunTurn(StrategicManager *this)

{
  undefined1 stack0xfffffd2c[0x240];
  ItineraryNode IVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  Itinerary *this_00;
  undefined1 auVar6[24];
  undefined1 auVar7[24];
  undefined1 auVar8[24];
  undefined1 auVar9[24];
  undefined1 auVar10[24];
  undefined1 auVar11[32];
  undefined1 auVar12[16];
  undefined1 auVar13[16];
  undefined1 in_stack_fffffd2c[316];
  undefined4 in_stack_fffffe68;
  char *in_stack_fffffe6c;
  undefined4 in_stack_fffffe70;
  char *pcVar14;
  undefined4 uVar15;
  ItineraryNode local_178;
  double local_28;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_20[19];
  char local_d;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (/*0000000000000000*/0.0 < (this->Session).TurnStep_s) goto LAB_0076b602;
  if (*(int *)&(this->Session).CurrentTime_s != 0) {
    bVar2 = PlayerFailed(this);
    if (bVar2) goto LAB_0076b602;
    bVar2 = PlayerIsVictorious(this);
    if (bVar2) goto LAB_0076b602;
  }
  pcVar14 = (char *)0x76b4ab;
  piVar3 = (int *)GetRelevantFleets(this);
  local_c = 0;
  iVar4 = (**(code **)(*piVar3 + 0xc))();
  if (local_c < iVar4) {
    do {
      pcVar14 = (char *)0x76b4ce;
      puVar5 = (undefined4 *)(**(code **)*piVar3)();
      if ((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]);
        if (!bVar2) {
          *puVar5 = 0;
        }
      }
      bVar2 = Fleet__HasMission((Fleet *)*puVar5);
      if (bVar2) {
        if ((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) {
          bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]);
          if (!bVar2) {
            *puVar5 = 0;
          }
        }
        this_00 = (Itinerary *)Fleet__GetMissionItinerary((Fleet *)*puVar5);
        if (*(char *)&this_00[2].FinalOrbit.Data.Elements.SemiMajorAxis_km == '\0') {
          pcVar14 = "IsValid()";
          in_stack_fffffe70 = 0x17;
          in_stack_fffffe6c = "\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h";
          in_stack_fffffe68 = 0x76b52c;
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        bVar2 = Itinerary__IsTraversable(this_00);
        if (!bVar2) {
          local_d = '\0';
          goto LAB_0076b55b;
        }
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(*piVar3 + 0xc))();
    } while (local_c < iVar4);
  }
  local_d = '\x01';
LAB_0076b55b:
  uVar15 = 0x76b563;
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
            (local_20);
  if (local_d != '\0') {
    ItineraryNode__ItineraryNode((ItineraryNode *)&stack0xfffffd2c);
    (*(undefined4 *)((char *)&(IVar1.CachedNearestOrbitDistance_km) + 12)) = in_stack_fffffe68;
    memcpy(auVar8, (char *)in_stack_fffffd2c + 120, 24);
    memcpy(auVar9, (char *)in_stack_fffffd2c + 144, 24);
    memcpy(auVar10, (char *)in_stack_fffffd2c + 176, 24);
    memcpy(auVar11, (char *)in_stack_fffffd2c + 200, 32);
    memcpy(auVar12, (char *)in_stack_fffffd2c + 264, 16);
    memcpy(auVar13, (char *)in_stack_fffffd2c + 280, 16);
    IVar1.Parent.Pointer = (Fleet *)(int)(*(undefined8 *)(in_stack_fffffd2c));
    IVar1.Parent.Controller =
         (ReferenceController *)(int)((ulonglong)(*(undefined8 *)(in_stack_fffffd2c)) >> 0x20);
    memcpy(auVar6, (char *)in_stack_fffffd2c + 8, 24);
    memcpy(auVar7, (char *)in_stack_fffffd2c + 32, 24);
    IVar1.LastState.Position.X = (double)(*(undefined8 *)&(auVar6));
    IVar1.LastState.Position.Y = (double)(*(undefined8 *)((char *)&(auVar6) + 8));
    IVar1.LastState.Position.Z = (double)(*(undefined8 *)((char *)&(auVar6) + 16));
    IVar1.LastState.Velocity.X = (double)(*(undefined8 *)&(auVar7));
    IVar1.LastState.Velocity.Y = (double)(*(undefined8 *)((char *)&(auVar7) + 8));
    IVar1.LastState.Velocity.Z = (double)(*(undefined8 *)((char *)&(auVar7) + 16));
    IVar1.LastTimeSinceJ2000_s = (double)(*(undefined8 *)((char *)(in_stack_fffffd2c) + 56));
    memcpy(auVar6, (char *)in_stack_fffffd2c + 64, 24);
    memcpy(auVar7, (char *)in_stack_fffffd2c + 88, 24);
    IVar1.State.Position.X = (double)(*(undefined8 *)&(auVar6));
    IVar1.State.Position.Y = (double)(*(undefined8 *)((char *)&(auVar6) + 8));
    IVar1.State.Position.Z = (double)(*(undefined8 *)((char *)&(auVar6) + 16));
    IVar1.State.Velocity.X = (double)(*(undefined8 *)&(auVar7));
    IVar1.State.Velocity.Y = (double)(*(undefined8 *)((char *)&(auVar7) + 8));
    IVar1.State.Velocity.Z = (double)(*(undefined8 *)((char *)&(auVar7) + 16));
    IVar1.TimeSinceJ2000_s = (double)(*(undefined8 *)((char *)(in_stack_fffffd2c) + 112));
    IVar1.ThrusterBurn_km__s.X = (double)(*(undefined8 *)&(auVar8));
    IVar1.ThrusterBurn_km__s.Y = (double)(*(undefined8 *)((char *)&(auVar8) + 8));
    IVar1.ThrusterBurn_km__s.Z = (double)(*(undefined8 *)((char *)&(auVar8) + 16));
    IVar1.ResidualThrusterBurn_km__s.X = (double)(*(undefined8 *)&(auVar9));
    IVar1.ResidualThrusterBurn_km__s.Y = (double)(*(undefined8 *)((char *)&(auVar9) + 8));
    IVar1.ResidualThrusterBurn_km__s.Z = (double)(*(undefined8 *)((char *)&(auVar9) + 16));
    IVar1.NodeType = (*(undefined4 *)((char *)(in_stack_fffffd2c) + 168));
    (*(undefined4 *)((char *)&(IVar1) + 172)) = (*(undefined4 *)((char *)(in_stack_fffffd2c) + 172));
    IVar1.CachedReferenceShiftedPosition_km.X = (double)(*(undefined8 *)&(auVar10));
    IVar1.CachedReferenceShiftedPosition_km.Y = (double)(*(undefined8 *)((char *)&(auVar10) + 8));
    IVar1.CachedReferenceShiftedPosition_km.Z = (double)(*(undefined8 *)((char *)&(auVar10) + 16));
    memcpy(&(auVar6), (char *)auVar11 + 0, 24);
    IVar1.CachedGravityBodyReferenceShiftedPosition_km.Data.X = (double)(*(undefined8 *)&(auVar6));
    IVar1.CachedGravityBodyReferenceShiftedPosition_km.Data.Y = (double)(*(undefined8 *)((char *)&(auVar6) + 8));
    IVar1.CachedGravityBodyReferenceShiftedPosition_km.Data.Z = (double)(*(undefined8 *)((char *)&(auVar6) + 16));
    IVar1.CachedGravityBodyReferenceShiftedPosition_km.IsValidData = (bool)auVar11[0x18];
    (*(undefined7 *)((char *)&(IVar1.CachedGravityBodyReferenceShiftedPosition_km) + 25)) = (*(undefined7 *)((char *)&(auVar11) + 25));
    IVar1.CachedTotalSpentDeltaV_km__s = (double)(*(undefined8 *)((char *)(in_stack_fffffd2c) + 232));
    IVar1.CachedGravityBody.Pointer = (CelestialObject *)(int)(*(undefined8 *)((char *)(in_stack_fffffd2c) + 240));
    IVar1.CachedGravityBody.Controller =
         (ReferenceController *)(int)((ulonglong)(*(undefined8 *)((char *)(in_stack_fffffd2c) + 240)) >> 0x20);
    IVar1.CachedNearestBody.Pointer = (CelestialObject *)(int)(*(undefined8 *)((char *)(in_stack_fffffd2c) + 248));
    IVar1.CachedNearestBody.Controller =
         (ReferenceController *)(int)((ulonglong)(*(undefined8 *)((char *)(in_stack_fffffd2c) + 248)) >> 0x20);
    IVar1.CachedNearestFleet.Pointer = (Fleet *)(int)(*(undefined8 *)((char *)(in_stack_fffffd2c) + 256));
    IVar1.CachedNearestFleet.Controller =
         (ReferenceController *)(int)((ulonglong)(*(undefined8 *)((char *)(in_stack_fffffd2c) + 256)) >> 0x20);
    IVar1.CachedNearestFleetDistance_km.Data = (double)(*(undefined8 *)&(auVar12));
    IVar1.CachedNearestFleetDistance_km.IsValidData = (bool)auVar12[8];
    (*(undefined7 *)((char *)&(IVar1.CachedNearestFleetDistance_km) + 9)) = (*(undefined7 *)((char *)&(auVar12) + 9));
    IVar1.CachedNearestFleetParametricCoord.Data = (double)(*(undefined8 *)&(auVar13));
    IVar1.CachedNearestFleetParametricCoord.IsValidData = (bool)auVar13[8];
    (*(undefined7 *)((char *)&(IVar1.CachedNearestFleetParametricCoord) + 9)) = (*(undefined7 *)((char *)&(auVar13) + 9));
    IVar1.CachedNearestOrbiter.Pointer = (OrbiterInterface *)(int)(*(undefined8 *)((char *)(in_stack_fffffd2c) + 296));
    IVar1.CachedNearestOrbiter.Controller =
         (ReferenceController *)(int)((ulonglong)(*(undefined8 *)((char *)(in_stack_fffffd2c) + 296)) >> 0x20);
    IVar1.CachedNearestOrbitDistance_km.Data = (double)(*(undefined8 *)((char *)(in_stack_fffffd2c) + 304));
    IVar1.CachedNearestOrbitDistance_km.IsValidData = (bool)in_stack_fffffd2c[0x138];
    (*(undefined3 *)((char *)&(IVar1.CachedNearestOrbitDistance_km) + 9)) = (*(undefined3 *)((char *)(in_stack_fffffd2c) + 313));
    (*(undefined4 *)&(IVar1.CachedNearestOrbitParametricCoord.Data)) = in_stack_fffffe6c;
    (*(undefined4 *)((char *)&(IVar1.CachedNearestOrbitParametricCoord.Data) + 4)) = in_stack_fffffe70;
    (*(undefined4 *)((char *)&(IVar1.CachedNearestOrbitParametricCoord) + 8)) = pcVar14;
    (*(undefined4 *)((char *)&(IVar1.CachedNearestOrbitParametricCoord) + 12)) = uVar15;
    SelectItineraryNode(this,IVar1);
    ItineraryNode__ItineraryNode(&local_178);
    local_28 = 0.0;
    ItineraryNode_operator
              ((ItineraryNode *)&(this->Session).HoveredItineraryNode.Value1.LastState.Position.Y,
               &local_178);
    (this->Session).SelectedItineraryNode.LastState.Position.X = local_28;
    if (local_178.CachedNearestOrbiter.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_178.CachedNearestOrbiter.Controller);
    }
    if (local_178.CachedNearestFleet.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_178.CachedNearestFleet.Controller);
    }
    if (local_178.CachedNearestBody.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_178.CachedNearestBody.Controller);
    }
    if (local_178.CachedGravityBody.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_178.CachedGravityBody.Controller);
    }
    if (local_178.Parent.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_178.Parent.Controller);
    }
    (this->Session).TurnStep_s = (this->Session).VisualTurnStep_s;
  }
LAB_0076b602:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000076b620 0076b620_SelectItineraryNode ====
// decompiled by BatchDecomp @ 0076b620 name=SelectItineraryNode conv=__thiscall body=316

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__SelectItineraryNode(struct ItineraryNode) */

void __thiscall StrategicManager__SelectItineraryNode(StrategicManager *this,ItineraryNode param_1)

{
  bool bVar1;
  ItineraryNode *pIVar2;
  ItineraryNode local_2a8;
  ItineraryNode local_158;
  undefined4 local_8;
  
  local_8 = 0;
  bVar1 = param_1.TimeSinceJ2000_s < (this->Session).TurnRunTimeLeft_s;
  if (bVar1) {
    pIVar2 = (ItineraryNode *)ItineraryNode__ItineraryNode(&local_158);
  }
  else {
    pIVar2 = (ItineraryNode *)ItineraryNode__ItineraryNode(&local_2a8,&param_1);
  }
  ItineraryNode_operator
            ((ItineraryNode *)&(this->Session).SelectedItineraryNode.LastState.Position.Y,pIVar2);
  if (bVar1) {
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
  if (!bVar1) {
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
  if (param_1.CachedNearestOrbiter.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_1.CachedNearestOrbiter.Controller);
  }
  if (param_1.CachedNearestFleet.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_1.CachedNearestFleet.Controller);
  }
  if (param_1.CachedNearestBody.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_1.CachedNearestBody.Controller);
  }
  if (param_1.CachedGravityBody.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_1.CachedGravityBody.Controller);
  }
  if (param_1.Parent.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_1.Parent.Controller);
  }
  return;
}


//==== 000076bc80 0076bc80_SetAlliances ====
// decompiled by BatchDecomp @ 0076bc80 name=SetAlliances conv=__thiscall body=19

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__SetAlliances(class Faction *,class Faction *) */

void __thiscall
StrategicManager__SetAlliances(StrategicManager *this,Faction *param_1,Faction *param_2)

{
  *(Faction **)&(this->Session).CurrentTime_s = param_1;
  *(Faction **)((int)&(this->Session).CurrentTime_s + 4) = param_2;
  return;
}


//==== 000076bca0 0076bca0_SetGameplayRelevantRoot ====
extern undefined4 FUN_00758290(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 0076bca0 name=SetGameplayRelevantRoot conv=__thiscall body=1523

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: void __thiscall StrategicManager__SetGameplayRelevantRoot(void) */

void __thiscall StrategicManager__SetGameplayRelevantRoot(StrategicManager *this)

{
  Maybe_L_util__Darray_L_util__WeakPtr_L_CelestialObject_G___G___G_ *pMVar1;
  uint *puVar2;
  undefined4 *puVar3;
  ReferenceController *this_00;
  Actor *pAVar4;
  bool bVar5;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  ReferenceController *pRVar13;
  code *pcVar14;
  ReferenceController *pRVar15;
  uint *puVar16;
  undefined4 uVar17;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_7c[16];
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_6c[16];
  bool local_5c;
  StrategicManager *local_58;
  undefined **local_54;
  int iStack_50;
  ReferenceController *pRStack_4c;
  undefined4 uStack_48;
  undefined4 *local_44;
  int iStack_40;
  ReferenceController *pRStack_3c;
  undefined4 uStack_38;
  StrategicManager *local_34;
  undefined4 local_30;
  undefined4 *puStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined **local_20;
  uint *puStack_1c;
  int iStack_18;
  ReferenceController *pRStack_14;
  int *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pRVar15 = (this->Session).ReferenceObject.Object.Controller;
  (this->Session).ReferenceObject.Object.Pointer = (Actor *)0x0;
  (this->Session).ReferenceObject.Object.Controller = (ReferenceController *)0x0;
  local_58 = this;
  if (pRVar15 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar15);
  }
  local_30 = 0;
  puStack_2c = (undefined4 *)0x0;
  iStack_28 = 0;
  uStack_24 = 0;
  if ((this->GetCelestialObjects_MemoizedValue).IsValidData == false) {
    iVar7 = (this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size;
    local_c = iVar7 + 1;
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&this->StrategicManagerMemoizationHandlerInstance
               ,&local_c);
    bVar5 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &this->StrategicManagerMemoizationHandlerInstance,iVar7);
    if (bVar5) {*(void **)&((this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Data[(this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size+-1]) = (void *)&TacticalManager_GetAllBodies_Clear;
    }
    pDVar6 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
             GetCelestialObjects_MemoizedFunction(this);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_6c,pDVar6);
    local_5c = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetCelestialObjects_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_6c);
    (this->GetCelestialObjects_MemoizedValue).IsValidData = local_5c;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
              ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_6c);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
              ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_44);
  }
  pcVar14 = DebugBreak_exref;
  pMVar1 = &this->GetCelestialObjects_MemoizedValue;
  if ((this->GetCelestialObjects_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_30 = 0;
  puStack_2c = (undefined4 *)0x0;
  iStack_28 = 0;
  uStack_24 = 0;
  local_34 = this;
  iVar7 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body
            ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_30,iVar7);
  local_c = 0;
  iVar7 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
  if (local_c < iVar7) {
    do {
      piVar8 = (int *)(**(code **)*(int *)&pMVar1->Data)(&local_c);
      iStack_18 = *piVar8;
      pRStack_14 = (ReferenceController *)piVar8[1];
      if (pRStack_14 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRStack_14);
      }
      local_10 = &iStack_18;
      piVar9 = (int *)GetRelevantFleets(local_34);
      local_54 = (undefined **)0x0;
      iStack_50 = 0;
      pRStack_4c = (ReferenceController *)0x0;
      uStack_48 = 0;
      iVar7 = (**(code **)(*piVar9 + 0xc))();
      util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body
                ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_54,iVar7);
      FUN_00758290(piVar9,&local_10,&local_54);
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
                (local_7c);
      if (pRStack_14 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(pRStack_14);
      }
      iVar10 = (*(code *)local_54[3])();
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
                ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_54);
      iVar7 = iStack_28;
      if (0 < iVar10) {
        local_10 = (int *)(iStack_28 + 1);
        util__Darray_class_util__WeakPtr_class_Body_____SetSize
                  ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_30,(int *)&local_10);
        bVar5 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize
                          ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_30,iVar7);
        if (bVar5) {
          pRVar15 = (ReferenceController *)puStack_2c[iStack_28 * 2 + -1];
          puStack_2c[iStack_28 * 2 + -2] = *piVar8;
          pRVar13 = (ReferenceController *)piVar8[1];
          puStack_2c[iStack_28 * 2 + -1] = pRVar13;
          if (pRVar13 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(pRVar13);
          }
          if (pRVar15 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(pRVar15);
          }
        }
      }
      local_c = local_c + 1;
      iVar7 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
      this = local_58;
      pcVar14 = DebugBreak_exref;
    } while (local_c < iVar7);
  }
  if (0 < iStack_28) {
    local_44 = (undefined4 *)0x0;
    iStack_40 = 0;
    pRStack_3c = (ReferenceController *)0x0;
    uStack_38 = 0;
    uVar17 = puStack_2c[iStack_28 * 2 + -2];
    pRVar15 = (ReferenceController *)puStack_2c[iStack_28 * 2 + -1];
    if (pRVar15 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar15);
    }
    GetHierarchyToObject(this,&local_44,uVar17,pRVar15);
    if (iStack_28 < 1) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3c,
                      "Size > 0",(char *)0x0);
      (*pcVar14)();
    }
    util__Darray_class_util__WeakPtr_struct_MinimapRangeWidget_____Remove
              ((Darray_L_class_util__WeakPtr_L_struct_MinimapRangeWidget_G___G_ *)&local_30,
               (WeakPtr_L_struct_MinimapRangeWidget_G_ *)(puStack_2c + iStack_28 * 2 + -2));
    while (0 < iStack_28) {
      local_54 = (undefined **)0x0;
      iStack_50 = 0;
      pRStack_4c = (ReferenceController *)0x0;
      uStack_48 = 0;
      if (iStack_28 < 1) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3a,
                        "Size > 0",(char *)0x0);
        (*pcVar14)();
      }
      uVar17 = *puStack_2c;
      pRVar15 = (ReferenceController *)puStack_2c[1];
      if (pRVar15 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar15);
      }
      GetHierarchyToObject(this,&local_54,uVar17,pRVar15);
      if (iStack_28 < 1) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3c,
                        "Size > 0",(char *)0x0);
        (*pcVar14)();
      }
      util__Darray_class_util__WeakPtr_struct_MinimapRangeWidget_____Remove
                ((Darray_L_class_util__WeakPtr_L_struct_MinimapRangeWidget_G___G_ *)&local_30,
                 (WeakPtr_L_struct_MinimapRangeWidget_G_ *)(puStack_2c + iStack_28 * 2 + -2));
      pRVar15 = pRStack_3c;
      if ((int)pRStack_4c <= (int)pRStack_3c) {
        pRVar15 = pRStack_4c;
      }
      local_20 = 0x91e0b8;
      puStack_1c = (uint *)0x0;
      iStack_18 = 0;
      if (((int)pRVar15 < 0) || (0x3fffffff < (int)pRVar15)) {
        pRStack_14 = (ReferenceController *)0x0;
      }
      else {
        pRStack_14 = pRVar15;
        if (0 < (int)pRVar15) {
          uVar12 = -(uint)((int)(ZEXT48(pRVar15) * 8 >> 0x20) != 0) | (uint)(ZEXT48(pRVar15) * 8);
          puStack_1c = (uint *)operator_new__(-(uint)(0xfffffffb < uVar12) | uVar12 + 4);
          if (puStack_1c == (uint *)0x0) {
            puStack_1c = (uint *)0x0;
          }
          else {
            *puStack_1c = (uint)pRVar15;
            puStack_1c = puStack_1c + 1;
            puVar11 = puStack_1c;
            for (pRVar13 = pRVar15; pRVar13 != (ReferenceController *)0x0;
                pRVar13 = (ReferenceController *)((int)&pRVar13[-1].Pointer + 3)) {
              *puVar11 = 0;
              puVar11[1] = 0;
              puVar11 = puVar11 + 2;
            }
          }
          iVar7 = 0;
          if (0 < (int)pRStack_14) {
            do {
              pRVar13 = (ReferenceController *)puStack_1c[iVar7 * 2 + 1];
              puStack_1c[iVar7 * 2] = 0;
              puStack_1c[iVar7 * 2 + 1] = 0;
              if (pRVar13 != (ReferenceController *)0x0) {
                util__ReferenceController__ReleaseWeakReference(pRVar13);
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < (int)pRStack_14);
          }
        }
      }
      local_c = 0;
      if (0 < (int)pRVar15) {
        do {
          piVar8 = (int *)(*(code *)*local_54)(&local_c);
          piVar9 = (int *)(*(code *)*local_44)(&local_c);
          if ((piVar8[1] != piVar9[1]) || (*piVar8 != *piVar9)) break;
          puVar11 = (uint *)(*(code *)*local_44)(&local_c);
          iVar7 = iStack_18;
          local_10 = (int *)(iStack_18 + 1);
          util__Darray_class_util__WeakPtr_class_Body_____SetSize
                    ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_20,(int *)&local_10);
          bVar5 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize
                            ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_20,iVar7);
          if (bVar5) {
            pRVar13 = (ReferenceController *)puStack_1c[iStack_18 * 2 + -1];
            puStack_1c[iStack_18 * 2 + -2] = *puVar11;
            this_00 = (ReferenceController *)puVar11[1];
            puStack_1c[iStack_18 * 2 + -1] = (uint)this_00;
            if (this_00 != (ReferenceController *)0x0) {
              util__ReferenceController__AddWeakReference(this_00);
            }
            if (pRVar13 != (ReferenceController *)0x0) {
              util__ReferenceController__ReleaseWeakReference(pRVar13);
            }
          }
          local_c = local_c + 1;
        } while (local_c < (int)pRVar15);
      }
      util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
                ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_44,
                 (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_20);
      local_20 = 0x91e0b8;
      if (puStack_1c != (uint *)0x0) {
        uVar12 = puStack_1c[-1];
        puVar11 = puStack_1c + -1;
        if (uVar12 != 0) {
          puVar16 = puStack_1c + uVar12 * 2 + 1;
          do {
            puVar2 = puVar16 + -2;
            puVar16 = puVar16 + -2;
            uVar12 = uVar12 - 1;
            if ((ReferenceController *)*puVar2 != (ReferenceController *)0x0) {
              util__ReferenceController__ReleaseWeakReference((ReferenceController *)*puVar2);
            }
          } while (uVar12 != 0);
          uVar12 = *puVar11;
        }
        operator_delete__(puVar11,uVar12 * 8 + 4);
      }
      puStack_1c = (uint *)0x0;
      local_20 = 0x919488;
      local_54 = 0x91e0b8;
      if (iStack_50 != 0) {
        iVar7 = *(int *)(iStack_50 + -4);
        piVar8 = (int *)(iStack_50 + -4);
        if (iVar7 != 0) {
          iVar10 = iStack_50 + 4 + iVar7 * 8;
          do {
            puVar3 = (undefined4 *)(iVar10 + -8);
            iVar10 = iVar10 + -8;
            iVar7 = iVar7 + -1;
            if ((ReferenceController *)*puVar3 != (ReferenceController *)0x0) {
              util__ReferenceController__ReleaseWeakReference((ReferenceController *)*puVar3);
            }
          } while (iVar7 != 0);
          iVar7 = *piVar8;
        }
        operator_delete__(piVar8,iVar7 * 8 + 4);
      }
      iStack_50 = 0;
      local_54 = 0x919488;
      this = local_58;
      pcVar14 = DebugBreak_exref;
    }
    if ((int)pRStack_3c < 1) {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\strategic\\strategicmanager.cpp",
                      0x45e,"Hierarchy.Num() > 0",(char *)0x0);
      DebugBreak();
      if ((int)pRStack_3c < 1) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3c,
                        "Size > 0",(char *)0x0);
        DebugBreak();
      }
    }
    pAVar4 = *(Actor **)(iStack_40 + -8 + (int)pRStack_3c * 8);
    pRVar15 = *(ReferenceController **)(iStack_40 + -4 + (int)pRStack_3c * 8);
    if (pRVar15 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar15);
    }
    pRVar13 = (local_58->Session).ReferenceObject.Object.Controller;
    (local_58->Session).ReferenceObject.Object.Pointer = pAVar4;
    (local_58->Session).ReferenceObject.Object.Controller = pRVar15;
    if (pRVar15 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar15);
    }
    if (pRVar13 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(pRVar13);
    }
    if (pRVar15 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(pRVar15);
    }
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
              ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_44);
  }
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
            ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_30);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000076c2a0 0076c2a0_SetReferenceCelestial ====
// decompiled by BatchDecomp @ 0076c2a0 name=SetReferenceCelestial conv=__thiscall body=127

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__SetReferenceCelestial(class WeakPtr_L_CelestialObject_G_,int) */

void __thiscall
StrategicManager__SetReferenceCelestial(StrategicManager *this,undefined4 param_2,ReferenceController *param_3,undefined4 param_4)

{
  ReferenceController *pRVar1;
  ItineraryNode local_2bc;
  ItineraryNode local_16c;
  undefined8 local_1c;
  
  pRVar1 = param_3;
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_3);
    util__ReferenceController__AddWeakReference(param_3);
  }
  ItineraryNode__ItineraryNode(&local_2bc);
  ItineraryNode__ItineraryNode(&local_16c);
  local_1c = 0;
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  SetReferenceObject(this,param_2,pRVar1,param_4);
  if (param_3 != (ReferenceController *)0x0) {
    local_1c = CONCAT44(0x76c316,(undefined4)local_1c);
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  return;
}


//==== 000076c320 0076c320_SetReferenceObject ====
// decompiled by BatchDecomp @ 0076c320 name=SetReferenceObject conv=__thiscall body=443

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__SetReferenceObject(struct WorldObject) */

void __thiscall
StrategicManager__SetReferenceObject(StrategicManager *this,undefined4 param_2,ReferenceController *param_3)

{
  undefined1 stack0x00000014[0x240];
  ReferenceController *pRVar1;
  Skybox *pSVar2;
  Vec3_L_double_G_ VVar3;
  Vec3_L_double_G_ VVar4;
  Vec3_L_double_G_ VVar5;
  bool bVar6;
  undefined4 *puVar7;
  Vec3_L_double_G_ *pVVar8;
  CameraManager *pCVar9;
  undefined4 unaff_EDI;
  HUDStrategic *this_00;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 local_68[24];
  Vec3_L_double_G_ local_50;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double local_18;
  double local_10;
  StrategicManager *local_8;
  
  local_8 = this;
  puVar7 = (undefined4 *)
           WorldObject__GetStateAt((WorldObject *)&(this->Session).ReferenceObject.Node,
                      (double)CONCAT44(SUB84((this->Session).TurnRunTimeLeft_s,0),local_68));
  local_28 = *puVar7;
  uStack_24 = puVar7[1];
  uStack_20 = puVar7[2];
  uStack_1c = puVar7[3];
  local_10 = *(double *)(puVar7 + 4);
  puVar7 = (undefined4 *)
           WorldObject__GetStateAt((WorldObject *)&param_2,
                      (double)CONCAT44(SUB84((this->Session).TurnRunTimeLeft_s,0),local_68));
  local_38 = *puVar7;
  uStack_34 = puVar7[1];
  uStack_30 = puVar7[2];
  uStack_2c = puVar7[3];
  local_18 = *(double *)(puVar7 + 4);
  WorldObject_operator
            ((WorldObject *)&(this->Session).ReferenceObject.Node,(WorldObject *)&param_2);
  dVar10 = (this->Session).TurnRunTimeLeft_s;
  (*(undefined4 *)((char *)&(VVar3.X) + 4)) = uStack_20;
  (*(undefined4 *)&(VVar3.X)) = uStack_24;
  (*(undefined4 *)&(VVar3.Y)) = uStack_1c;
  (*(undefined4 *)((char *)&(VVar3.Y) + 4)) = *(undefined4 *)&local_10;
  (*(undefined4 *)&(VVar3.Z)) = (int)((ulonglong)local_10 >> 0x20);
  (*(undefined4 *)((char *)&(VVar3.Z) + 4)) = *(undefined4 *)&dVar10;
  pVVar8 = GetReferenceShiftedPosition_km
                     (this,&local_50,VVar3,
                      (double)CONCAT44(unaff_EDI,(int)((ulonglong)dVar10 >> 0x20)));
  uVar13 = *(undefined4 *)&pVVar8->X;
  uVar14 = *(undefined4 *)((int)&pVVar8->X + 4);
  uVar15 = *(undefined4 *)&pVVar8->Y;
  uVar16 = *(undefined4 *)((int)&pVVar8->Y + 4);
  uVar17 = *(undefined4 *)&pVVar8->Z;
  uVar18 = (undefined4)((ulonglong)pVVar8->Z >> 0x20);
  pCVar9 = Manager__GetCameras((Manager *)this);
  (*(undefined4 *)((char *)&(VVar4.X) + 4)) = uVar14;
  (*(undefined4 *)&(VVar4.X)) = uVar13;
  (*(undefined4 *)&(VVar4.Y)) = uVar15;
  (*(undefined4 *)((char *)&(VVar4.Y) + 4)) = uVar16;
  (*(undefined4 *)&(VVar4.Z)) = uVar17;
  (*(undefined4 *)((char *)&(VVar4.Z) + 4)) = uVar18;
  CameraManager__ShiftActualCamera(pCVar9,*(Vec4_L_double_G_ *)&(VVar4));
  dVar10 = (double)CONCAT44(uStack_24,local_28) - (double)CONCAT44(uStack_34,local_38);
  dVar12 = (double)CONCAT44(uStack_1c,uStack_20) - (double)CONCAT44(uStack_2c,uStack_30);
  dVar11 = local_10 - local_18;
  pCVar9 = Manager__GetCameras((Manager *)this);
  (*(undefined4 *)&(VVar5.Y)) = *(undefined4 *)&dVar12;
  VVar5.X = dVar10;
  (*(undefined4 *)((char *)&(VVar5.Y) + 4)) = (int)((ulonglong)dVar12 >> 0x20);
  (*(undefined4 *)&(VVar5.Z)) = *(undefined4 *)&dVar11;
  (*(undefined4 *)((char *)&(VVar5.Z) + 4)) = (int)((ulonglong)dVar11 >> 0x20);
  CameraManager__AddCameraOffset(pCVar9,*(Vec4_L_double_G_ *)&(VVar5));
  pCVar9 = Manager__GetCameras((Manager *)this);
  CameraManager__EnsureCameraLocking(pCVar9);
  RecacheItineraries(this);
  pRVar1 = (this->CelestialGrid).Controller;
  pSVar2 = (this->CelestialGrid).Pointer;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar1);
  }
  if ((pSVar2 != (Skybox *)0x0) && (pRVar1 != (ReferenceController *)0x0)) {
    bVar6 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (bVar6) {
      bVar6 = true;
      goto LAB_0076c475;
    }
  }
  bVar6 = false;
LAB_0076c475:
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  if (bVar6) {
    this_00 = (HUDStrategic *)(this->CelestialGrid).Pointer;
    pRVar1 = (local_8->CelestialGrid).Controller;
    if (pRVar1 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar1);
      bVar6 = util__ReferenceController__IsDataStillValid(pRVar1);
      if (!bVar6) {
        this_00 = (HUDStrategic *)0x0;
      }
    }
    HUDStrategic__RegenerateItineraryUI(this_00);
    if (pRVar1 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(pRVar1);
    }
  }
  NodeMouseOver_NodeMouseOver((NodeMouseOver *)&stack0x00000014);
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  return;
}


//==== 000076c9d0 0076c9d0_SetTurnStep ====
// decompiled by BatchDecomp @ 0076c9d0 name=SetTurnStep conv=__thiscall body=20

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__SetTurnStep(double) */

void __thiscall StrategicManager__SetTurnStep(StrategicManager *this,double param_1)

{
  (this->Session).VisualTurnStep_s = param_1;
  return;
}


//==== 000076c9f0 0076c9f0_SetupAmbientSounds ====
// decompiled by BatchDecomp @ 0076c9f0 name=SetupAmbientSounds conv=__thiscall body=173

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__SetupAmbientSounds(void)const  */

void __thiscall StrategicManager__SetupAmbientSounds(StrategicManager *this)

{
  undefined1 stack0xfffffff4[0x240];
  undefined1 stack0x00000014[0x240];
  AudioManager *pAVar1;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ *pSVar3;
  float fVar4;
  bool bVar5;
  Str_L_char_G_ local_18;
  
  pAVar1 = GameManager__GetAudio((GameManager *)this->_pad_0x0_0);
  AudioManager__StopAllNonUISounds(pAVar1);
  util__Str_char___Str_char(&local_18,"LoopAmbientVeryQuiet");
  pSVar3 = &local_18;
  bVar5 = false;
  fVar4 = 0.0;
  pSVar2 = (Str_L_char_G_ *)&stack0xfffffff4;
  pAVar1 = GameManager__GetAudio((GameManager *)this->_pad_0x0_0);
  AudioManager__PlaySoundA(pAVar1,pSVar2,0.0f,fVar4,bVar5);
  if (local_18.Data != (char *)0x0) {
    operator_delete__(local_18.Data);
  }
  util__Str_char___Str_char(&local_18,"LoopAmbientVoicesDistant");
  pSVar3 = &local_18;
  bVar5 = false;
  fVar4 = 0.0;
  pSVar2 = (Str_L_char_G_ *)&stack0xfffffff4;
  pAVar1 = GameManager__GetAudio((GameManager *)this->_pad_0x0_0);
  AudioManager__PlaySoundA(pAVar1,pSVar2,0.0f,fVar4,bVar5);
  if (local_18.Data != (char *)0x0) {
    operator_delete__(local_18.Data);
  }
  return;
}


//==== 000076d3b0 0076d3b0_SetupShadows ====
// decompiled by BatchDecomp @ 0076d3b0 name=SetupShadows conv=__thiscall body=64

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall StrategicManager__SetupShadows(void)const  */

void __thiscall StrategicManager__SetupShadows(StrategicManager *this)

{
  Vec3_L_double_G_ VVar1;
  undefined1 (*pauVar2) [20];
  double dVar3;
  undefined1 local_34[48];
  
  dVar3 = GetLookaheadTimeSinceJ2000_s(this);
  pauVar2 = (undefined1 (*) [20])
            GetReferenceDeltaState(this,(double)CONCAT44(SUB84(dVar3,0),local_34));
  (*(undefined4 *)((char *)&(VVar1.Z) + 4)) = (int)((ulonglong)*(undefined8 *)(*pauVar2 + 0x10) >> 0x20);
  memcpy(&(VVar1), pauVar2, 20);
  SetupShadows(this,VVar1);
  return;
}


//==== 000076d3f0 0076d3f0_SetupSolarProperties ====
extern undefined4 FUN_00754ce0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 0076d3f0 name=SetupSolarProperties conv=__thiscall body=861

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__SetupSolarProperties(struct
   Vec3_L_double_G_,double,class WeakPtr_L_CelestialObject_G_)const  */

void __thiscall
StrategicManager__SetupSolarProperties(StrategicManager *this,undefined4 param_1,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,double param_6,undefined8 param_2,undefined4 param_8,
          ReferenceController *param_9)

{
  undefined1 stack0xfffffdc0[0x240];
  double _local_88;
  undefined1 stack0x00000014[0x240];
  undefined1 stack0xfffffff4[0x240];
  Quaternion_L_double_G_ QVar1;
  Vec3_L_double_G_ VVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar7;
  Vec3_L_double_G_ *pVVar8;
  PlanetShader *pPVar9;
  SpacecraftShader *pSVar10;
  undefined4 unaff_EDI;
  Fleet *pFVar11;
  ReferenceController *this_00;
  undefined4 uVar12;
  ItineraryNode IStack_390;
  undefined8 uStack_120;
  undefined1 local_d8[24];
  Vec3_L_double_G_ local_c0;
  undefined1 local_a8[4];
  undefined4 uStack_a4;
  undefined1 auStack_a0[8];
  StrategicManager *pSStack_98;
  undefined1 *puStack_94;
  undefined4 *puStack_90;
  undefined8 *puStack_8c;
  undefined1 local_88[4];
  uint uStack_84;
  undefined8 uStack_80;
  undefined8 local_78;
  StrategicManager *local_70;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_6c[8];
  undefined8 local_64;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  double local_4c;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  double local_34;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  double local_1c;
  undefined8 local_14;
  undefined1 local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_14 = param_2;
  local_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_9 = 0;
  local_1c = 0.0;
  local_70 = this;
  piVar4 = (int *)GetAllIlluminatorObjects(this);
  iVar5 = (**(code **)(*piVar4 + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
            ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&pSStack_98);
  if (iVar5 == 1) {
    puVar6 = (undefined4 *)GetIlluminatorObject(this);
    if ((ReferenceController *)puVar6[1] != (ReferenceController *)0x0) {
      bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar6[1]);
      if (!bVar3) {
        *puVar6 = 0;
      }
    }
    puVar6 = (undefined4 *)
             CelestialObject__GetStateAt((CelestialObject *)*puVar6,(double)CONCAT44((int)local_14,local_d8));
    local_5c = param_1;
    uStack_58 = param_3;
    uStack_54 = param_4;
    uStack_50 = param_5;
    local_4c = param_6;
    local_44 = *puVar6;
    uStack_40 = puVar6[1];
    uStack_3c = puVar6[2];
    uStack_38 = puVar6[3];
    local_34 = *(double *)(puVar6 + 4);
    if (((slice_view *)&local_64)->_4_4_ != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_64)->_4_4_);
    }
    puStack_94 = (undefined1 *)&param_8;
    puStack_90 = &local_5c;
    puStack_8c = &local_14;
    pSStack_98 = this;
    if ((this->GetCelestialObjects_MemoizedValue).IsValidData == false) {
      iVar5 = (this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size;
      local_64 = CONCAT44(iVar5 + 1,(undefined4)local_64);
      util__Darray_class_util__Reflectable____SetSize
                ((Darray_L_util__Reflectable_P_G_ *)
                 &this->StrategicManagerMemoizationHandlerInstance,(int *)((int)&local_64 + 4));
      bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize
                        ((Darray_L_GraphicsResource__Type_G_ *)
                         &this->StrategicManagerMemoizationHandlerInstance,iVar5);
      if (bVar3) {*(void **)&((this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Data[(this->StrategicManagerMemoizationHandlerInstance).ResetFunctions.Size+-1]) = (void *)&TacticalManager_GetAllBodies_Clear;
      }
      pDVar7 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
               GetCelestialObjects_MemoizedFunction(this);
      util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment
                ((Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)(local_88 + 4),pDVar7);
      ((slice_view *)&local_78)->_0_4_ = (undefined4)local_78; ((slice_view *)&local_78)->_4_1_ = 1;
      util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
                ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
                 &this->GetCelestialObjects_MemoizedValue,
                 (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)(local_88 + 4));
      (this->GetCelestialObjects_MemoizedValue).IsValidData = ((slice_view *)&local_78)->_4_1_;
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
                ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)(local_88 + 4));
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
                (local_6c);
    }
    if ((this->GetCelestialObjects_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    local_9 = FUN_00754ce0();
    local_78 = local_34 - local_4c;
    uStack_80 = (double)CONCAT44(uStack_38,uStack_3c) - (double)CONCAT44(uStack_50,uStack_54);
    _local_88 = (double)CONCAT44(uStack_40,local_44) - (double)CONCAT44(uStack_58,local_5c);
    util__Vec3_double___SafeNormalized((Vec3_L_double_G_ *)local_88,(Vec3_L_double_G_ *)auStack_a0);
    pFVar11 = (this->Session).ReferenceObject.Node.LastNode.Parent.Pointer;
    local_64 = CONCAT44((uint)puStack_8c ^ (*(undefined4 *)((char *)&(__xmm_80000000000000008000000000000000) + 4)),
                        (uint)puStack_90 ^ (uint)__xmm_80000000000000008000000000000000);
    _local_88 = (double)CONCAT44((*(undefined4 *)((char *)&(auStack_a0) + 4)) ^ (*(undefined4 *)((char *)&(__xmm_80000000000000008000000000000000) + 4)),
                                 (*(undefined4 *)&(auStack_a0)) ^ (uint)__xmm_80000000000000008000000000000000);
    uStack_80 = (double)CONCAT44((uint)puStack_94 ^ 0x5c05c7e8,(uint)pSStack_98 ^ 0xeb009648);
    this_00 = (this->Session).ReferenceObject.Node.LastNode.Parent.Controller;
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_00);
    }
    uVar12 = *(undefined4 *)&(this->Session).ReferenceObject.Node.LastNode.LastState.Position.X;
    ItineraryNode__ItineraryNode(&IStack_390,
               (ItineraryNode *)&(this->Session).ReferenceObject.Node.LastNode.LastState.Position.Y)
    ;
    ItineraryNode__ItineraryNode((ItineraryNode *)&stack0xfffffdc0,
               (ItineraryNode *)&(this->Session).ReferenceObject.Node.NextNode.LastState.Position.Y)
    ;
    GetObjectShiftedOrientation(local_70,local_a8,pFVar11,this_00,uVar12);
    ((slice_view *)&uStack_120)->_0_1_ = true;
    memcpy(&((slice_view *)&uStack_120)->_1_3_, (unsigned char[]){214, 118, 0}, 3);
    (*(undefined4 *)((char *)&(QVar1.X) + 4)) = (*(undefined4 *)&(auStack_a0));
    (*(undefined4 *)&(QVar1.X)) = uStack_a4;
    (*(undefined4 *)&(QVar1.Y)) = (*(undefined4 *)((char *)&(auStack_a0) + 4));
    (*(undefined4 *)((char *)&(QVar1.Y) + 4)) = pSStack_98;
    (*(undefined4 *)&(QVar1.Z)) = puStack_94;
    (*(undefined4 *)((char *)&(QVar1.Z) + 4)) = puStack_90;
    (*(undefined4 *)&(QVar1.W)) = puStack_8c;
    (*(undefined4 *)((char *)&(QVar1.W) + 4)) = local_88;
    (*(undefined4 *)((char *)&(VVar2.X) + 4)) = (undefined4)uStack_80;
    (*(undefined4 *)&(VVar2.X)) = uStack_84;
    (*(undefined4 *)&(VVar2.Y)) = ((slice_view *)&uStack_80)->_4_4_;
    (*(undefined4 *)((char *)&(VVar2.Y) + 4)) = (int)local_64;
    (*(undefined4 *)&(VVar2.Z)) = (int)((ulonglong)local_64 >> 0x20);
    (*(undefined4 *)((char *)&(VVar2.Z) + 4)) = unaff_EDI;
    pVVar8 = util__Rotate_double(&local_c0,QVar1,VVar2);
    local_2c = *(undefined4 *)&pVVar8->X;
    uStack_28 = *(undefined4 *)((int)&pVVar8->X + 4);
    uStack_24 = *(undefined4 *)&pVVar8->Y;
    uStack_20 = *(undefined4 *)((int)&pVVar8->Y + 4);
    local_1c = pVVar8->Z;
  }
  pPVar9 = PlanetShader__GetStatic();
  bVar3 = Shader__IsInUse((Shader *)pPVar9);
  if (bVar3) {
    pPVar9 = PlanetShader__GetStatic();
    (**(code **)(*(int *)pPVar9 + 0xc0))();
    pPVar9 = PlanetShader__GetStatic();
    (**(code **)(pPVar9->_pad_0x0_0 + 200))();
  }
  pSVar10 = SpacecraftShader__GetStatic();
  bVar3 = Shader__IsInUse((Shader *)pSVar10);
  if (bVar3) {
    pSVar10 = SpacecraftShader__GetStatic();
    (**(code **)(*(int *)pSVar10 + 0xe8))();
    pSVar10 = SpacecraftShader__GetStatic();
    (**(code **)(*(int *)pSVar10 + 0xf0))();
  }
  if (param_9 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_9);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000076d750 0076d750_ShiftCameraTo ====
// decompiled by BatchDecomp @ 0076d750 name=ShiftCameraTo conv=__thiscall body=156

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__ShiftCameraTo(struct WorldObject) */

void __thiscall
StrategicManager__ShiftCameraTo(StrategicManager *this,undefined4 param_2,ReferenceController *param_3)

{
  undefined1 stack0x00000014[0x240];
  undefined8 _local_88;
  undefined1 stack0xfffffdc0[0x240];
  Vec3_L_double_G_ VVar1;
  Vec3_L_double_G_ VVar2;
  int iVar3;
  CameraManager *pCVar4;
  undefined4 unaff_EDI;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_4c[48];
  Vec3_L_double_G_ local_1c;
  
  dVar5 = GetLookaheadTimeSinceJ2000_s(this);
  iVar3 = WorldObject__GetStateAt((WorldObject *)&param_2,(double)CONCAT44(SUB84(dVar5,0),local_4c))
  ;
  dVar5 = GetLookaheadTimeSinceJ2000_s(this);
  (*(undefined4 *)&(VVar1.Z)) = (int)((ulonglong)*(undefined8 *)(iVar3 + 0x10) >> 0x20);
  memcpy(&(VVar1), (void *)(16), 16);
  (*(undefined4 *)((char *)&(VVar1.Z) + 4)) = *(undefined4 *)&dVar5;
  GetReferenceShiftedPosition_km
            (this,&local_1c,VVar1,(double)CONCAT44(unaff_EDI,(int)((ulonglong)dVar5 >> 0x20)));
  pCVar4 = Manager__GetCameras((Manager *)this);
  CameraManager__ClearCameraOffset(pCVar4);
  uVar6 = *(undefined4 *)&local_1c.Z;
  uVar7 = (undefined4)((ulonglong)local_1c.Z >> 0x20);
  pCVar4 = Manager__GetCameras((Manager *)this);
  (*(undefined4 *)((char *)&(VVar2.X) + 4)) = (*(undefined4 *)((char *)&(local_1c.X) + 4));
  (*(undefined4 *)&(VVar2.X)) = (*(undefined4 *)&(local_1c.X));
  (*(undefined4 *)&(VVar2.Y)) = (*(undefined4 *)&(local_1c.Y));
  (*(undefined4 *)((char *)&(VVar2.Y) + 4)) = (*(undefined4 *)((char *)&(local_1c.Y) + 4));
  (*(undefined4 *)&(VVar2.Z)) = uVar6;
  (*(undefined4 *)((char *)&(VVar2.Z) + 4)) = uVar7;
  CameraManager__AddCameraOffset(pCVar4,*(Vec4_L_double_G_ *)&(VVar2));
  NodeMouseOver_NodeMouseOver((NodeMouseOver *)&stack0x00000014);
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  return;
}


//==== 000076d7f0 0076d7f0_ShiftCameraToCurrentSelection ====
// decompiled by BatchDecomp @ 0076d7f0 name=ShiftCameraToCurrentSelection conv=__thiscall body=73

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__ShiftCameraToCurrentSelection(void) */

void __thiscall StrategicManager__ShiftCameraToCurrentSelection(StrategicManager *this)

{
  Vec3_L_double_G_ VVar1;
  CameraManager *pCVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Vec3_L_double_G_ local_1c;
  
  GetCurrentSelectionLocation_km(this,&local_1c);
  pCVar2 = Manager__GetCameras((Manager *)this);
  CameraManager__ClearCameraOffset(pCVar2);
  uVar3 = *(undefined4 *)&local_1c.Z;
  uVar4 = (undefined4)((ulonglong)local_1c.Z >> 0x20);
  pCVar2 = Manager__GetCameras((Manager *)this);
  (*(undefined4 *)((char *)&(VVar1.X) + 4)) = (*(undefined4 *)((char *)&(local_1c.X) + 4));
  (*(undefined4 *)&(VVar1.X)) = (*(undefined4 *)&(local_1c.X));
  (*(undefined4 *)&(VVar1.Y)) = (*(undefined4 *)&(local_1c.Y));
  (*(undefined4 *)((char *)&(VVar1.Y) + 4)) = (*(undefined4 *)((char *)&(local_1c.Y) + 4));
  (*(undefined4 *)&(VVar1.Z)) = uVar3;
  (*(undefined4 *)((char *)&(VVar1.Z) + 4)) = uVar4;
  CameraManager__AddCameraOffset(pCVar2,*(Vec4_L_double_G_ *)&(VVar1));
  return;
}


//==== 000076d840 0076d840_ShouldGridBeShowing ====
// decompiled by BatchDecomp @ 0076d840 name=ShouldGridBeShowing conv=__thiscall body=91

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall StrategicManager__ShouldGridBeShowing(void)const  */

bool __thiscall StrategicManager__ShouldGridBeShowing(StrategicManager *this)

{
  undefined1 stack0x00000014[0x240];
  bool bVar1;
  Preferences *this_00;
  
  this_00 = (Preferences *)Manager__GetOptions((Manager *)this);
  bVar1 = Preferences__IsShowingCelestialGridWhenRotating(this_00);
  if (bVar1) {
    if ((ReferenceController *)this[1]._pad_0x0_0 != (ReferenceController *)0x0) {
      bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)this[1]._pad_0x0_0);
      if (!bVar1) {
        this[1]._pad_0x0_0 = 0;
      }
    }
    bVar1 = UIWidget__IsCaptured((UIWidget *)this[1]._pad_0x0_0);
    if ((bVar1) && (*(char *)&(this->AlliedController).Controller == '\0')) {
      bVar1 = IsInCutscene(this);
      if (!bVar1) {
        return true;
      }
    }
  }
  return false;
}


//==== 000076d8a0 0076d8a0_ShouldShowEndCredits ====
// decompiled by BatchDecomp @ 0076d8a0 name=ShouldShowEndCredits conv=__thiscall body=35

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall StrategicManager__ShouldShowEndCredits(void)const  */

bool __thiscall StrategicManager__ShouldShowEndCredits(StrategicManager *this)

{
  undefined1 stack0x00000014[0x240];
  bool bVar1;
  
  bVar1 = IsInEndCreditsLevel(this);
  if (bVar1) {
    bVar1 = NotificationManager__AreNotificationsVisible((NotificationManager *)
                       &(this->Notifications).NotificationManagerMemoizationHandlerInstance.
                        ResetFunctions.Size);
    if (!bVar1) {
      return true;
    }
  }
  return false;
}


//==== 000076d8d0 0076d8d0_StartLevel ====
// decompiled by BatchDecomp @ 0076d8d0 name=StartLevel conv=__thiscall body=47

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__StartLevel(struct Level *) */

void __thiscall StrategicManager__StartLevel(StrategicManager *this,Level *param_1)

{
  Interface *this_00;
  
  this_00 = Manager__GetInterfacer((Manager *)this);
  Interface__ResetWidgetScreen(this_00);
  GameManager__Unpause((GameManager *)this->_pad_0x0_0);
  (this->Session).MessagesStored._pad_0x0_0 = (int)param_1;
  *(undefined1 *)&(this->Session).MessagesStored._pad_0x0_0 = 1;
  return;
}


//==== 000076d900 0076d900_StartTestingSession ====
extern undefined4 FUN_00759c30(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 0076d900 name=StartTestingSession conv=__thiscall body=437

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall StrategicManager__StartTestingSession(void) */

void __thiscall StrategicManager__StartTestingSession(StrategicManager *this)

{
  undefined4 uVar1;
  bool bVar2;
  GameManager *pGVar3;
  DataParser *pDVar4;
  int iVar5;
  undefined4 *puVar6;
  Interface *pIVar7;
  Campaign *pCVar8;
  int *piVar9;
  Str_L_char_G_ local_40;
  uint local_34;
  int local_30;
  undefined **local_2c;
  void *pvStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined **local_1c;
  void *local_18;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (GlobalLevel.Length == 0) {
    pGVar3 = Manager__GetParent((Manager *)this);
    pDVar4 = GameManager__GetDataManager(pGVar3);
    pCVar8 = GetCurrentCampaign(pDVar4);
    piVar9 = (int *)(**(code **)(pCVar8->ModPriority + 0x20))();
    iVar5 = *piVar9;
    pIVar7 = Manager__GetInterfacer((Manager *)this);
    Interface__ResetWidgetScreen(pIVar7);
    GameManager__Unpause((GameManager *)this->_pad_0x0_0);
    (this->Session).MessagesStored._pad_0x0_0 = iVar5;
    *(undefined1 *)&(this->Session).MessagesStored._pad_0x0_0 = 1;
  }
  else {
    local_34 = local_34 & 0xffffff00;
    pGVar3 = Manager__GetParent((Manager *)this);
    pDVar4 = GameManager__GetDataManager(pGVar3);
    util__Str_char___Str_char(&local_40,"Level");
    (**(code **)(*(int *)pDVar4 + 4))(&local_1c,&local_40,0);
    if (local_40.Data != (char *)0x0) {
      operator_delete__(local_40.Data);
      local_40.Data = (char *)0x0;
    }
    local_2c = (undefined **)0x0;
    pvStack_28 = (void *)0x0;
    iStack_24 = 0;
    uStack_20 = 0;
    iVar5 = (*(code *)local_1c[3])();
    util__Darray_class_Manager____Darray_class_Manager((Darray_L_class_Manager_P_G_ *)&local_2c,iVar5);
    local_c = 0;
    iVar5 = (*(code *)local_1c[3])();
    if (local_c < iVar5) {
      do {
        puVar6 = (undefined4 *)(*(code *)*local_1c)(&local_c);
        iVar5 = iStack_24;
        uVar1 = *puVar6;
        local_30 = iStack_24 + 1;
        util__Darray_class_util__Reflectable____SetSize
                  ((Darray_L_util__Reflectable_P_G_ *)&local_2c,&local_30);
        bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                          ((Darray_L_GraphicsResource__Type_G_ *)&local_2c,iVar5);
        if (bVar2) {
          *(undefined4 *)((int)pvStack_28 + iStack_24 * 4 + -4) = uVar1;
        }
        local_c = local_c + 1;
        iVar5 = (*(code *)local_1c[3])();
      } while (local_c < iVar5);
    }
    local_1c = 0x9199e4;
    if (local_18 != (void *)0x0) {
      operator_delete__(local_18);
    }
    local_18 = (void *)0x0;
    local_1c = 0x919488;
    iVar5 = FUN_00759c30(&local_2c,local_34);
    pIVar7 = Manager__GetInterfacer((Manager *)this);
    Interface__ResetWidgetScreen(pIVar7);
    GameManager__Unpause((GameManager *)this->_pad_0x0_0);
    (this->Session).MessagesStored._pad_0x0_0 = iVar5;
    *(undefined1 *)&(this->Session).MessagesStored._pad_0x0_0 = 1;
    local_2c = 0x9194a4;
    if (pvStack_28 != (void *)0x0) {
      operator_delete__(pvStack_28);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000076dac0 0076dac0_Tick ====
// decompiled by BatchDecomp @ 0076dac0 name=Tick conv=__thiscall body=290

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall StrategicManager__Tick(double) */

void __thiscall StrategicManager__Tick(StrategicManager *this,double param_1)

{
  ReferenceController *pRVar1;
  bool bVar2;
  
  if ((char)(this->Session).MessagesStored._pad_0x0_0 != '\0') {
    LoadCurrentLevel(this);
    return;
  }
  (this->Session).ScreenFadeInOutTime_s =
       (this->Session).VisualTurnStep_s * /*3fd0000000000000*/0.25 +
       (this->Session).ScreenFadeInOutTime_s * /*3fe8000000000000*/0.75;
  TickNotifications(this,param_1);
  if (*(int *)&(this->Session).CurrentTime_s != 0) {
    bVar2 = PlayerFailed(this);
    if (bVar2) {
      return;
    }
    bVar2 = PlayerIsVictorious(this);
    if (bVar2) {
      return;
    }
  }
  if ((((this->CameraRotateWidget).Pointer != (CameraRotator *)0x0) &&
      (pRVar1 = (this->CameraRotateWidget).Controller, pRVar1 != (ReferenceController *)0x0)) &&
     (bVar2 = util__ReferenceController__IsDataStillValid(pRVar1), bVar2)) {
    pRVar1 = (this->CameraRotateWidget).Controller;
    if ((pRVar1 != (ReferenceController *)0x0) &&
       (bVar2 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar2)) {
      (this->CameraRotateWidget).Pointer = (CameraRotator *)0x0;
    }
    bVar2 = PauseMenuHandler__IsPauseMenuUp((PauseMenuHandler *)(this->CameraRotateWidget).Pointer);
    if (bVar2) {
      return;
    }
  }
  if (((*(int *)((this->Session).MessagesStored._pad_0x0_0 + 0x7c) != 0) &&
      ((this->Session).TurnStep_s <= 0.0)) && (bVar2 = IsInCutscene(this), bVar2)) {
    (this->Session).TurnStep_s = SecondsInAJulianDay_s;
  }
  if (/*0000000000000000*/0.0 < (this->Session).TurnStep_s) {
    TickRunningTurn(this,param_1);
  }
  return;
}


//==== 000076dbf0 0076dbf0_TickNotifications ====
// decompiled by BatchDecomp @ 0076dbf0 name=TickNotifications conv=__thiscall body=562

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__TickNotifications(double) */

void __thiscall StrategicManager__TickNotifications(StrategicManager *this,double param_1)

{
  undefined1 stack0xfffffff4[0x240];
  int iVar1;
  int *piVar2;
  Darray_L_LevelSpeakerMessage_G_ *pDVar3;
  bool bVar4;
  bool bVar5;
  GameManager *pGVar6;
  AudioManager *this_00;
  DataParser *pDVar7;
  Campaign *pCVar8;
  MainManager *this_01;
  SoundEffect *pSVar9;
  double dVar10;
  double dVar11;
  Str_L_char_G_ *pSVar12;
  Str_L_char_G_ *pSVar13;
  float fVar14;
  undefined1 uVar15;
  Str_L_char_G_ local_18;
  
  if ((((*(char *)((int)&(this->Session).MessagesStored._pad_0x0_0 + 1) == '\0') &&
       (*(int *)&(this->Session).CurrentTime_s != 0)) &&
      ((bVar4 = PlayerFailed(this), bVar4 || (bVar4 = PlayerIsVictorious(this), bVar4)))) &&
     ((bVar4 = PlayerIsVictorious(this), bVar4 && (bVar4 = IsInCutscene(this), !bVar4)))) {
    *(undefined1 *)((int)&(this->Session).MessagesStored._pad_0x0_0 + 1) = 1;
    util__Str_char___Str_char(&local_18,"Success");
    pSVar13 = &local_18;
    uVar15 = 0;
    fVar14 = 0.0;
    pSVar12 = (Str_L_char_G_ *)&stack0xfffffff4;
    pGVar6 = Manager__GetParent((Manager *)this);
    this_00 = GameManager__GetAudio(pGVar6);
    AudioManager__PlaySoundA(this_00,pSVar12,0.0f,fVar14,(bool)uVar15);
    if (local_18.Data != (char *)0x0) {
      operator_delete__(local_18.Data);
    }
  }
  bVar4 = PlayerIsVictorious(this);
  if (bVar4) {
    pDVar3 = &(this->Session).MessagesStored.MissionSuccess;
  }
  else {
    bVar4 = PlayerFailed(this);
    if (!bVar4) goto LAB_0076dcbd;
    pDVar3 = &(this->Session).MessagesStored.MissionFailure;
  }
  TriggerMessageList(this,(Darray_L_struct_LevelSpeakerMessage_G_ *)&pDVar3->Size,true,false);
LAB_0076dcbd:
  bVar4 = IsInEndCreditsLevel(this);
  iVar1 = (this->Session).MessagesStored._pad_0x0_0;
  pGVar6 = Manager__GetParent((Manager *)this);
  pDVar7 = GameManager__GetDataManager(pGVar6);
  pCVar8 = GetCurrentCampaign(pDVar7);
  pSVar9 = pCVar8[1].MainMenuMusic;
  piVar2 = &pSVar9->_pad_0x0_0;
  do {
    if (pSVar9 == (SoundEffect *)(piVar2 + pCVar8[1].LevelOrder._pad_0x0_0)) {
LAB_0076dcfb:
      bVar5 = false;
LAB_0076dcfd:
      if (bVar5) {
        SetWindowCursorVisibility(false);
        dVar10 = *(double *)&(this->Session).EndCreditsAreClosing + param_1;
        *(double *)&(this->Session).EndCreditsAreClosing = dVar10;
        dVar11 = /*4000000000000000*/2.0;
        if (bVar4) {
          dVar11 = /*401c000000000000*/7.0;
        }
        if (dVar11 <= dVar10) {
          GetTacticalGame_Memoize(this);
          if (*(char *)&(this->Session).PlayerAlliance == '\0') {
            util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13
                            ,"IsValid()",(char *)0x0);
            DebugBreak();
          }
          bVar5 = Manager__IsCurrentlyTheActiveManager(*(Manager **)&(*((char *)(this) + 0x6c)));
          if (bVar5) {
            GetTacticalGame_Memoize(this);
            if (*(char *)&(this->Session).PlayerAlliance == '\0') {
              util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",
                              0x13,"IsValid()",(char *)0x0);
              DebugBreak();
            }
            TacticalManager__EndTacticalSession(*(TacticalManager **)&(*((char *)(this) + 0x6c)));
            GameManager__SwitchToSession((GameManager *)this->_pad_0x0_0,(Manager *)this,false);
          }
          if (bVar4) {
            uVar15 = 0;
            pGVar6 = Manager__GetParent((Manager *)this);
            this_01 = GameManager__GetManager_class_MainManager(pGVar6);
            MainManager__SetPlayTitleMusicEnabled(this_01,(bool)uVar15);
          }
          NextMission(this);
          return;
        }
      }
      else {
        dVar10 = *(double *)&(this->Session).EndCreditsAreClosing - param_1;
        dVar11 = 0.0;
        if (0.0 <= dVar10) {
          dVar11 = dVar10;
        }
        *(double *)&(this->Session).EndCreditsAreClosing = dVar11;
      }
      return;
    }
    if (pSVar9->_pad_0x0_0 == iVar1) {
      bVar5 = NotificationManager__AreNotificationsVisible((NotificationManager *)
                         &(this->Notifications).NotificationManagerMemoizationHandlerInstance.
                          ResetFunctions.Size);
      if ((!bVar5) && ((!bVar4 || ((this->Session).RequiresLoading != bVar5)))) {
        bVar5 = true;
        goto LAB_0076dcfd;
      }
      goto LAB_0076dcfb;
    }
    pSVar9 = (SoundEffect *)&pSVar9->_pad_0x0_0;
  } while( true );
}


//==== 000076de30 0076de30_TickRunTime ====
// decompiled by BatchDecomp @ 0076de30 name=TickRunTime conv=__thiscall body=605

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall StrategicManager__TickRunTime(double) */

bool __thiscall StrategicManager__TickRunTime(StrategicManager *this,double param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  Maybe_L_struct_PendingBattle_G_ *pMVar6;
  ActorHandler *pAVar7;
  PendingBattle *pPVar8;
  Fleet *pFVar9;
  ReferenceController *this_00;
  undefined4 uVar10;
  Fleet *pFVar11;
  undefined4 uVar12;
  ReferenceController *this_01;
  undefined1 local_4c[4];
  ReferenceController *local_48;
  ReferenceController *local_40;
  int local_2c;
  ReferenceController *pRStack_28;
  int iStack_24;
  ReferenceController *pRStack_20;
  double local_1c;
  char local_14;
  double local_c;
  
  local_c = param_1;
  iVar1 = *(int *)(this->_pad_0x0_0 + 0x38);
  GetTacticalGame_Memoize(this);
  if (*(char *)&(this->Session).PlayerAlliance == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  iVar2 = *(int *)&(*((char *)(this) + 0x6c));
  if (iVar1 != iVar2) {
    iVar5 = (this->Session).MessagesStored._pad_0x0_0;
    if (*(int *)(iVar5 + 0x84) != 0) {
      StrategicAI__Tick(*(StrategicAI **)&(*((char *)(this) + 0xa6c)),local_c);
      iVar5 = (this->Session).MessagesStored._pad_0x0_0;
    }
    if (*(int *)(iVar5 + 0x7c) != 0) {
      StrategicAI__Tick((StrategicAI *)(this->Notifications)._pad_0x0_0,local_c);
    }
  }
  local_1c = 0.0;
  local_14 = '\0';
  local_2c = 0;
  pRStack_28 = (ReferenceController *)0x0;
  iStack_24 = 0;
  pRStack_20 = (ReferenceController *)0x0;
  dVar3 = local_c;
  if (iVar1 != iVar2) {
    pMVar6 = (Maybe_L_struct_PendingBattle_G_ *)
             GetFutureBattles(this,(double)CONCAT44(SUB84(local_c,0),local_4c));
    util__Maybe_struct_PendingBattle___operator((Maybe_L_struct_PendingBattle_G_ *)&local_2c,pMVar6);
    if (local_40 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_40);
    }
    if (local_48 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_48);
    }
    dVar3 = local_c;
    if (local_14 != '\0') {
      dVar3 = local_1c - (this->Session).TurnRunTimeLeft_s;
      if (dVar3 <= /*0000000000000000*/0.0) {
        dVar3 = /*0000000000000000*/0.0;
      }
      if (local_c <= dVar3) {
        dVar3 = local_c;
      }
    }
  }
  local_c = dVar3;
  dVar3 = /*0000000000000000*/0.0;
  (this->Session).TurnStep_s = (this->Session).TurnStep_s - local_c;
  (this->Session).TurnRunTimeLeft_s = local_c + (this->Session).TurnRunTimeLeft_s;
  if (dVar3 < local_c) {
    uVar10 = *(undefined4 *)&local_c;
    uVar12 = *(undefined4 *)((char *)&local_c + 4);
    pAVar7 = (ActorHandler *)
             util__Darray_enum_CrewDepartment__Type___Num((Darray_L_enum_CrewDepartment__Type_G_ *)this)
    ;
    ActorHandler__PreCollisionTick(pAVar7,(double)CONCAT44(uVar12,uVar10));
    uVar10 = *(undefined4 *)&local_c;
    uVar12 = *(undefined4 *)((char *)&local_c + 4);
    pAVar7 = (ActorHandler *)
             util__Darray_enum_CrewDepartment__Type___Num((Darray_L_enum_CrewDepartment__Type_G_ *)this)
    ;
    ActorHandler__PostCollisionTick(pAVar7,(double)CONCAT44(uVar12,uVar10));
  }
  if ((((local_14 != '\0') && (local_2c != 0)) && (pRStack_28 != (ReferenceController *)0x0)) &&
     (bVar4 = util__ReferenceController__IsDataStillValid(pRStack_28), bVar4)) {
    if (local_14 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if (((iStack_24 == 0) || (pRStack_20 == (ReferenceController *)0x0)) ||
       (bVar4 = util__ReferenceController__IsDataStillValid(pRStack_20), !bVar4)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((iVar1 != iVar2) && (bVar4)) {
      pPVar8 = util_Maybe_struct_PendingBattle_operator
                         ((Maybe_L_struct_PendingBattle_G_ *)&local_2c);
      pFVar11 = (pPVar8->Defender).Pointer;
      this_01 = (pPVar8->Defender).Controller;
      if (this_01 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(this_01);
      }
      pPVar8 = util_Maybe_struct_PendingBattle_operator
                         ((Maybe_L_struct_PendingBattle_G_ *)&local_2c);
      pFVar9 = (pPVar8->Attacker).Pointer;
      this_00 = (pPVar8->Attacker).Controller;
      if (this_00 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(this_00);
      }
      GoToTacticalGame(this,pFVar9,this_00,pFVar11,this_01);
      bVar4 = true;
      goto LAB_0076e06a;
    }
  }
  bVar4 = false;
LAB_0076e06a:
  if (pRStack_20 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRStack_20);
  }
  if (pRStack_28 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRStack_28);
  }
  return bVar4;
}


//==== 000076e090 0076e090_TickRunningTurn ====
// decompiled by BatchDecomp @ 0076e090 name=TickRunningTurn conv=__thiscall body=413

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: void __thiscall StrategicManager__TickRunningTurn(double) */

void __thiscall StrategicManager__TickRunningTurn(StrategicManager *this,double param_1)

{
  undefined1 stack0xfffffe84[0x240];
  ReferenceController *pRVar1;
  Skybox *pSVar2;
  ItineraryNode IVar3;
  bool bVar4;
  ActorHandler *this_00;
  HUDStrategic *this_01;
  double dVar5;
  undefined1 in_stack_fffffe84[324];
  undefined4 in_stack_ffffffc8;
  undefined4 in_stack_ffffffcc;
  undefined4 uVar6;
  undefined **local_20;
  undefined4 local_1c;
  double local_18;
  double local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = (this->Session).TurnStep_s;
  dVar5 = ((this->Session).VisualTurnStep_s * param_1) / /*3fe8000000000000*/0.75;
  if (dVar5 <= local_10) {
    local_10 = dVar5;
  }
  if (/*0000000000000000*/0.0 < local_10) {
    do {
      dVar5 = DetermineTimeStep_s(this);
      local_18 = local_10;
      if (dVar5 <= local_10) {
        local_18 = dVar5;
      }
      in_stack_ffffffcc = *(undefined4 *)&local_18;
      in_stack_ffffffc8 = 0x76e0fd;
      bVar4 = TickRunTime(this,local_18);
      if (bVar4) break;
      local_10 = local_10 - local_18;
      (*(undefined1 *)&(in_stack_ffffffcc)) = true;
      (*(undefined3 *)((char *)&(in_stack_ffffffcc) + 1)) = 0x76e1;
      local_18 = util__Abs(&local_10);
      if (local_18 <= /*3e45798ee2308c3a*/1e-08) {
        local_10 = 0.0;
        break;
      }
    } while (/*0000000000000000*/0.0 < local_10);
  }
  this_00 = (ActorHandler *)
            util__Darray_enum_CrewDepartment__Type___Num((Darray_L_enum_CrewDepartment__Type_G_ *)this);
  uVar6 = 0x76e155;
  ActorHandler__ResolvePendingActors(this_00);
  ItineraryNode__ItineraryNode((ItineraryNode *)&stack0xfffffe84);
  (*(undefined4 *)((char *)&(IVar3.CachedNearestOrbitParametricCoord.Data) + 4)) = in_stack_ffffffc8;
  memcpy(&(IVar3), in_stack_fffffe84, 324);
  IVar3.CachedNearestOrbitParametricCoord.IsValidData = SUB41(in_stack_ffffffcc,0);
  (*(undefined3 *)((char *)&(IVar3.CachedNearestOrbitParametricCoord) + 9)) = SUB43(in_stack_ffffffcc,1);
  (*(undefined4 *)((char *)&(IVar3.CachedNearestOrbitParametricCoord) + 12)) = uVar6;
  SelectItineraryNode(this,IVar3);
  RecacheItineraries(this);
  pRVar1 = (this->CelestialGrid).Controller;
  pSVar2 = (this->CelestialGrid).Pointer;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar1);
  }
  if (((pSVar2 == (Skybox *)0x0) || (pRVar1 == (ReferenceController *)0x0)) ||
     (bVar4 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar4)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  if (bVar4) {
    pRVar1 = (this->CelestialGrid).Controller;
    this_01 = (HUDStrategic *)(this->CelestialGrid).Pointer;
    if (pRVar1 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar1);
      bVar4 = util__ReferenceController__IsDataStillValid(pRVar1);
      if (!bVar4) {
        this_01 = (HUDStrategic *)0x0;
      }
    }
    HUDStrategic__RegenerateItineraryUI(this_01);
    if (pRVar1 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(pRVar1);
    }
  }
  local_20 = 0x91e0b8;
  local_1c = 0;
  local_18 = 0.0;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &this->GetAllOrbits_MemoizedValue,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_20);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body
            ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_20);
  (this->GetAllOrbits_MemoizedValue).IsValidData = false;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000076e230 0076e230_ToggleScreenshotMode ====
// decompiled by BatchDecomp @ 0076e230 name=ToggleScreenshotMode conv=__thiscall body=17

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__ToggleScreenshotMode(void) */

void __thiscall StrategicManager__ToggleScreenshotMode(StrategicManager *this)

{
  *(bool *)&(this->AlliedController).Controller =
       *(char *)&(this->AlliedController).Controller == '\0';
  return;
}


//==== 000076e250 0076e250_TriggerAlliesDamagedMessages ====
// decompiled by BatchDecomp @ 0076e250 name=TriggerAlliesDamagedMessages conv=__thiscall body=13

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__TriggerAlliesDamagedMessages(void) */

void __thiscall StrategicManager__TriggerAlliesDamagedMessages(StrategicManager *this)

{
  TriggerCombatTutorialMessages
            (this,(Darray_L_struct_LevelTutorialMessage_G_ *)
                  &(this->Session).MessagesStored.AlliesDamagedTutorial.Size);
  return;
}


//==== 000076e260 0076e260_TriggerAlliesLostModuleMessages ====
// decompiled by BatchDecomp @ 0076e260 name=TriggerAlliesLostModuleMessages conv=__thiscall body=13

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__TriggerAlliesLostModuleMessages(void) */

void __thiscall StrategicManager__TriggerAlliesLostModuleMessages(StrategicManager *this)

{
  undefined1 stack0xfffffe84[0x240];
  TriggerCombatTutorialMessages
            (this,(Darray_L_struct_LevelTutorialMessage_G_ *)
                  &(this->Session).MessagesStored.AlliesLostModuleTutorial.Size);
  return;
}


//==== 000076e270 0076e270_TriggerBeginCombatMessages ====
// decompiled by BatchDecomp @ 0076e270 name=TriggerBeginCombatMessages conv=__thiscall body=35

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__TriggerBeginCombatMessages(void) */

void __thiscall StrategicManager__TriggerBeginCombatMessages(StrategicManager *this)

{
  TriggerCombatTutorialMessages
            (this,(Darray_L_struct_LevelTutorialMessage_G_ *)
                  &(this->Session).MessagesStored.EnterCombatTutorial.Size);
  TriggerMessageList(this,(Darray_L_struct_LevelSpeakerMessage_G_ *)
                          &(this->Session).MessagesStored.EnterCombat.Size,false,false);
  return;
}


//==== 000076e2a0 0076e2a0_TriggerBeginTrajectoryMessages ====
// decompiled by BatchDecomp @ 0076e2a0 name=TriggerBeginTrajectoryMessages conv=__thiscall body=15

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__TriggerBeginTrajectoryMessages(void) */

void __thiscall StrategicManager__TriggerBeginTrajectoryMessages(StrategicManager *this)

{
  TriggerTutorialMessageList
            (this,(Darray_L_struct_LevelTutorialMessage_G_ *)
                  &(this->Session).MessagesStored.NewTrajectoryTutorial.Size,false);
  return;
}


//==== 000076e2b0 0076e2b0_TriggerCombatTutorialMessages ====
// decompiled by BatchDecomp @ 0076e2b0 name=TriggerCombatTutorialMessages conv=__thiscall body=95

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__TriggerCombatTutorialMessages(class Darray_L_LevelTutorialMessage_G_ *) */

void __thiscall
StrategicManager__TriggerCombatTutorialMessages(StrategicManager *this,Darray_L_struct_LevelTutorialMessage_G_ *param_1)

{
  bool bVar1;
  int iVar2;
  GameManager *pGVar3;
  
  bVar1 = NotificationManager__IsTutorialEnabled((NotificationManager *)
                     &(this->Notifications).NotificationManagerMemoizationHandlerInstance.
                      ResetFunctions.Size);
  if ((bVar1) && (*(char *)((this->Session).MessagesStored._pad_0x0_0 + 0x1e0) != '\0')) {
    iVar2 = (**(code **)(*(int *)param_1 + 0xc))();
    if (0 < iVar2) {
      pGVar3 = Manager__GetParent((Manager *)this);
      GameManager__Pause(pGVar3);
      pGVar3 = Manager__GetParent((Manager *)this);
      GameManager__RunSingleFrame(pGVar3);
    }
  }
  TriggerTutorialMessageList(this,param_1,false);
  return;
}


//==== 000076e310 0076e310_TriggerEnemiesDamagedMessages ====
// decompiled by BatchDecomp @ 0076e310 name=TriggerEnemiesDamagedMessages conv=__thiscall body=13

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__TriggerEnemiesDamagedMessages(void) */

void __thiscall StrategicManager__TriggerEnemiesDamagedMessages(StrategicManager *this)

{
  TriggerCombatTutorialMessages
            (this,(Darray_L_struct_LevelTutorialMessage_G_ *)
                  &(this->Session).MessagesStored.EnemiesDamagedTutorial.Size);
  return;
}


//==== 000076e320 0076e320_TriggerEnemiesLostModuleMessages ====
// decompiled by BatchDecomp @ 0076e320 name=TriggerEnemiesLostModuleMessages conv=__thiscall body=13

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__TriggerEnemiesLostModuleMessages(void) */

void __thiscall StrategicManager__TriggerEnemiesLostModuleMessages(StrategicManager *this)

{
  TriggerCombatTutorialMessages
            (this,(Darray_L_struct_LevelTutorialMessage_G_ *)
                  &(this->Session).MessagesStored.EnemiesLostModuleTutorial.Size);
  return;
}


//==== 000076e330 0076e330_TriggerEnteredWeaponRangeMessages ====
// decompiled by BatchDecomp @ 0076e330 name=TriggerEnteredWeaponRangeMessages conv=__thiscall body=13

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall StrategicManager__TriggerEnteredWeaponRangeMessages(void) */

void __thiscall StrategicManager__TriggerEnteredWeaponRangeMessages(StrategicManager *this)

{
  TriggerCombatTutorialMessages
            (this,(Darray_L_struct_LevelTutorialMessage_G_ *)
                  &(this->Session).MessagesStored.GotIntoRangeTutorial.Size);
  return;
}

