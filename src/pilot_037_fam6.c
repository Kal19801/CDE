// pilot_037_fam6.c - SpacecraftTargeting/ModuleCompartment/WorldObject/CameraManager/UIWidget (127 methods)
// assembled by scripts/fam6_assemble.py (generalized from fam4) from decomp2c v2 output.
// Honest TODOs inline; fix log: reports/poison_fix/fam6_pilot038_log.txt
#include "port_prelude.h"
typedef union {
  struct {
    undefined4 _0_4_;
    undefined4 _4_4_;
  };
  struct {
    undefined1 _1_3_[3];
    undefined1 _5_3_[3];
  };
  undefined1 raw[32];
} slice_view;
/* ---- externs: stub-oracle names (K&R; ret types by call site) ---- */
extern int util_Darray_struct_ItineraryNode_FindIndex(); /* K&R stub; ret by call site (honest TODO: stub is void) */

//==== 0000738700 00738700_Itinerary__AlterBurn ====
// decompiled by BatchDecomp @ 00738700 name=AlterBurn conv=__thiscall body=218

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct ItineraryNode __thiscall Itinerary__AlterBurn(struct ItineraryNode const &,struct
   Vec3_L_double_G_) */

ItineraryNode * __thiscall
Itinerary__AlterBurn(Itinerary *this,ItineraryNode *__return_storage_ptr__,ItineraryNode *param_1,
          Vec3_L_double_G_ param_2)

{
  int iVar1;
  ItineraryNode *pIVar2;
  undefined1 local_10[4];
  char local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  util_Darray_struct_ItineraryNode_FindIndex((Darray_L_struct_ItineraryNode_G_ *)&this->ItineraryNodes,(ItineraryNode *)local_10);
  if (local_c == '\0') {
    ItineraryNode__ItineraryNode(__return_storage_ptr__);
  }
  else {
    iVar1 = (**(code **)*(int *)&this->ItineraryNodes)(local_10);
    *(undefined4 *)(iVar1 + 0x78) = ((slice_view *)&param_2.X)->_0_4_;
    *(undefined4 *)(iVar1 + 0x7c) = ((slice_view *)&param_2.X)->_4_4_;
    *(undefined4 *)(iVar1 + 0x80) = ((slice_view *)&param_2.Y)->_0_4_;
    *(undefined4 *)(iVar1 + 0x84) = ((slice_view *)&param_2.Y)->_4_4_;
    *(double *)(iVar1 + 0x88) = param_2.Z;
    *(undefined4 *)(iVar1 + 0xa8) = 0;
    RegenerateTrajectoryAfter(this,iVar1,0,0,0,0);
    if (local_c == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    pIVar2 = (ItineraryNode *)(**(code **)*(int *)&this->ItineraryNodes)(local_10);
    ItineraryNode__ItineraryNode(__return_storage_ptr__,pIVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 00007399a0 007399a0_Itinerary__EndsInCollision ====
// decompiled by BatchDecomp @ 007399a0 name=EndsInCollision conv=__thiscall body=7

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall Itinerary__EndsInCollision(void)const  */

bool __thiscall Itinerary__EndsInCollision(Itinerary *this)

{
  return (bool)*(undefined1 *)((int)&(this->TimeRange_s).Lower + 1);
}


//==== 0000739a60 00739a60_Itinerary__EndsInMatchedOrbit ====
// decompiled by BatchDecomp @ 00739a60 name=EndsInMatchedOrbit conv=__thiscall body=24

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall Itinerary__EndsInMatchedOrbit(void)const  */

bool __thiscall Itinerary__EndsInMatchedOrbit(Itinerary *this)

{
  if ((*(char *)&(this->FinalJoinFleet).Pointer != '\0') &&
     (*(char *)&(this->TimeRange_s).Lower != '\0')) {
    return true;
  }
  return false;
}


//==== 0000739ae0 00739ae0_Itinerary__EndsInUnmatchedOrbit ====
// decompiled by BatchDecomp @ 00739ae0 name=EndsInUnmatchedOrbit conv=__thiscall body=24

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall Itinerary__EndsInUnmatchedOrbit(void)const  */

bool __thiscall Itinerary__EndsInUnmatchedOrbit(Itinerary *this)

{
  if ((*(char *)&(this->FinalJoinFleet).Pointer != '\0') &&
     (*(char *)&(this->TimeRange_s).Lower == '\0')) {
    return true;
  }
  return false;
}


//==== 000073e1d0 0073e1d0_Itinerary__FindAllFleetsNearToNode ====
extern undefined4 FUN_00735aa0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 0073e1d0 name=FindAllFleetsNearToNode conv=__thiscall body=79

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Darray<class util::WeakPtr<class Fleet> > __thiscall
   Itinerary__FindAllFleetsNearToNode(struct ItineraryNode const &)const  */

ItineraryNode * __thiscall
Itinerary__FindAllFleetsNearToNode(Itinerary *this,ItineraryNode *param_1)

{
  ReferenceController *this_00;
  bool bVar1;
  undefined4 uVar2;
  undefined4 in_stack_00000008;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_14[16];
  
  this_00 = (this->ParentFleet).Controller;
  if (this_00 != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__IsDataStillValid(this_00);
    if (!bVar1) {
      (this->ParentFleet).Pointer = (Fleet *)0x0;
    }
  }
  uVar2 = StrategicManager__GetRelevantFleets(((this->ParentFleet).Pointer)->ParentStrategic);
  FUN_00735aa0(param_1,uVar2,this,in_stack_00000008);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_14);
  return param_1;
}


//==== 000073e290 0073e290_Itinerary__FindNearestEnemyFleetToState ====
extern undefined4 FUN_00735e20(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 0073e290 name=FindNearestEnemyFleetToState conv=__thiscall body=957

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct util::tuple3<class util::WeakPtr<class Fleet>,struct util::PhysicalState<struct
   util::Vec3<double> >,double> __thiscall Itinerary__FindNearestEnemyFleetToState(struct
   util::PhysicalState<struct util::Vec3<double> >,double,struct util::PhysicalState<struct
   util::Vec3<double> >,double)const  */

void __thiscall
Itinerary__FindNearestEnemyFleetToState(Itinerary *this,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
          undefined4 param_13,undefined4 param_14,double param_15,undefined4 param_16,
          undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20,
          undefined4 param_21,undefined4 param_22,undefined4 param_23,undefined4 param_24,
          undefined4 param_25,undefined4 param_26,undefined4 param_27,double param_28)

{
  ReferenceController *pRVar1;
  Vec3_L_double_G_ VVar2;
  Itinerary *pIVar3;
  CelestialObject *pCVar4;
  CelestialObject *pCVar5;
  bool bVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  Itinerary *pIVar12;
  double *pdVar13;
  double *pdVar14;
  CelestialObject **ppCVar15;
  undefined4 *puVar16;
  undefined1 local_cc[16];
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined1 local_9c[24];
  undefined4 local_84;
  Itinerary *local_80;
  double *pdStack_7c;
  double *pdStack_78;
  CelestialObject **ppCStack_74;
  undefined8 local_6c;
  undefined8 uStack_64;
  Itinerary *local_5c;
  double local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  double local_20;
  double local_18;
  CelestialObject *local_10;
  ReferenceController *pRStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_58 = param_28;
  local_20 = param_15;
  local_18 = param_28;
  pRVar1 = (this->ParentFleet).Controller;
  local_10 = (CelestialObject *)0x0;
  pRStack_c = (ReferenceController *)0x0;
  local_5c = this;
  if ((pRVar1 != (ReferenceController *)0x0) &&
     (bVar6 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar6)) {
    (this->ParentFleet).Pointer = (Fleet *)0x0;
  }
  ((slice_view *)&VVar2.X)->_4_4_ = param_16;
  ((slice_view *)&VVar2.X)->_0_4_ = (int)((ulonglong)local_58 >> 0x20);
  ((slice_view *)&VVar2.Y)->_0_4_ = param_17;
  ((slice_view *)&VVar2.Y)->_4_4_ = param_18;
  ((slice_view *)&VVar2.Z)->_0_4_ = param_19;
  ((slice_view *)&VVar2.Z)->_4_4_ = param_20;
  StrategicManager__FindNearestStableCelestialBody(((this->ParentFleet).Pointer)->ParentStrategic,
             (double)CONCAT44(SUB84(local_58,0),&local_10),VVar2);
  if (((local_10 != (CelestialObject *)0x0) && (pRStack_c != (ReferenceController *)0x0)) &&
     (bVar6 = util__ReferenceController__IsDataStillValid(pRStack_c), bVar6)) {
    if ((pRStack_c != (ReferenceController *)0x0) &&
       (bVar6 = util__ReferenceController__IsDataStillValid(pRStack_c), !bVar6)) {
      local_10 = (CelestialObject *)0x0;
    }
    pCVar4 = local_10;
    if ((pRStack_c != (ReferenceController *)0x0) &&
       (bVar6 = util__ReferenceController__IsDataStillValid(pRStack_c), !bVar6)) {
      local_10 = (CelestialObject *)0x0;
    }
    pCVar5 = local_10;
    puVar7 = (undefined4 *)
             CelestialObject__GetStateRelativeToThis(pCVar4,local_cc,param_16,param_17,param_18,param_19,param_20,param_21,
                        param_22,param_23,param_24,param_25,param_26,param_27,SUB84(local_18,0),
                        (int)((ulonglong)local_18 >> 0x20));
    puVar8 = (undefined4 *)
             CelestialObject__GetStateRelativeToThis(pCVar5,local_9c,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                        param_10,param_11,param_12,param_13,param_14,SUB84(local_20,0),
                        (int)((ulonglong)local_20 >> 0x20));
    pIVar3 = local_5c;
    puVar16 = &local_50;
    local_50 = *puVar8;
    uStack_4c = puVar8[1];
    uStack_48 = puVar8[2];
    uStack_44 = puVar8[3];
    local_40 = *(undefined8 *)(puVar8 + 4);
    pdStack_7c = &local_20;
    local_38 = *puVar7;
    uStack_34 = puVar7[1];
    uStack_30 = puVar7[2];
    uStack_2c = puVar7[3];
    local_28 = *(undefined8 *)(puVar7 + 4);
    pdStack_78 = &local_18;
    ppCStack_74 = &local_10;
    pRVar1 = (local_5c->ParentFleet).Controller;
    local_80 = local_5c;
    if ((pRVar1 != (ReferenceController *)0x0) &&
       (bVar6 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar6)) {
      (pIVar3->ParentFleet).Pointer = (Fleet *)0x0;
    }
    pIVar12 = local_80;
    pdVar13 = pdStack_7c;
    pdVar14 = pdStack_78;
    ppCVar15 = ppCStack_74;
    uVar9 = StrategicManager__GetFleets(((pIVar3->ParentFleet).Pointer)->ParentStrategic);
    FUN_00735e20(&local_84,uVar9,pIVar12,pdVar13,pdVar14,ppCVar15,puVar16);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_6c);
    if ((char)ppCStack_74 != '\0') {
      dVar10 = (double)CONCAT44(pdStack_78,pdStack_7c);
      if (((0.0 < dVar10) || (dVar10 < /*3ff0000000000000*/1.0)) &&
         ((/*3ff0000000000000*/1.0 < dVar10 || (dVar10 < 0.0)))) {
        util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\strategic\\itinerary.cpp",0x4c3,
                        "IsSaturated(t)",(char *)0x0);
        DebugBreak();
        dVar10 = (double)CONCAT44(pdStack_78,pdStack_7c);
      }
      pIVar3 = local_80;
      dVar11 = /*3ff0000000000000*/1.0 - dVar10;
      local_58 = dVar10 * local_18 + dVar11 * local_20;
      uStack_b4 = (double)CONCAT44(param_23,param_22) * dVar10 +
                  (double)CONCAT44(param_10,param_9) * dVar11;
      uStack_ac = (double)CONCAT44(param_25,param_24) * dVar10 +
                  (double)CONCAT44(param_12,param_11) * dVar11;
      uStack_a4 = (double)CONCAT44(param_27,param_26) * dVar10 +
                  (double)CONCAT44(param_14,param_13) * dVar11;
      local_bc = (double)CONCAT44(param_21,param_20) * dVar10 +
                 (double)CONCAT44(param_8,param_7) * dVar11;
      uStack_64 = (double)CONCAT44(param_19,param_18) * dVar10 +
                  (double)CONCAT44(param_6,param_5) * dVar11;
      local_6c = (double)CONCAT44(param_17,param_16) * dVar10 +
                 (double)CONCAT44(param_4,param_3) * dVar11;
      if (local_80 != (Itinerary *)0x0) {
        util__ReferenceController__AddWeakReference((ReferenceController *)local_80);
        util__ReferenceController__AddWeakReference((ReferenceController *)pIVar3);
      }
      *param_2 = local_84;
      param_2[1] = (undefined4)pIVar3;
      if (pIVar3 != (Itinerary *)0x0) {
        util__ReferenceController__AddWeakReference((ReferenceController *)pIVar3);
      }
      param_2[2] = (undefined4)local_6c;
      param_2[3] = ((slice_view *)&local_6c)->_4_4_;
      param_2[4] = (undefined4)uStack_64;
      param_2[5] = ((slice_view *)&uStack_64)->_4_4_;
      param_2[6] = (undefined4)local_bc;
      param_2[7] = ((slice_view *)&local_bc)->_4_4_;
      param_2[8] = (undefined4)uStack_b4;
      param_2[9] = ((slice_view *)&uStack_b4)->_4_4_;
      param_2[10] = (undefined4)uStack_ac;
      param_2[0xb] = ((slice_view *)&uStack_ac)->_4_4_;
      param_2[0xc] = (undefined4)uStack_a4;
      param_2[0xd] = ((slice_view *)&uStack_a4)->_4_4_;
      *(double *)(param_2 + 0xe) = local_58;
      if (pIVar3 != (Itinerary *)0x0) {
        util__ReferenceController__ReleaseWeakReference((ReferenceController *)pIVar3);
        util__ReferenceController__ReleaseWeakReference((ReferenceController *)pIVar3);
        util__ReferenceController__ReleaseWeakReference((ReferenceController *)pIVar3);
      }
      goto LAB_0073e62f;
    }
    if (local_80 != (Itinerary *)0x0) {
      util__ReferenceController__ReleaseWeakReference((ReferenceController *)local_80);
    }
  }
  *param_2 = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[1] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
LAB_0073e62f:
  if (pRStack_c != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRStack_c);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000073ebc0 0073ebc0_Itinerary__GetAllInterceptAndJoins ====
// decompiled by BatchDecomp @ 0073ebc0 name=GetAllInterceptAndJoins conv=__thiscall body=378

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Darray<class util::WeakPtr<class Fleet> > __thiscall
   Itinerary__GetAllInterceptAndJoins(void)const  */

void __thiscall Itinerary__GetAllInterceptAndJoins(Itinerary *this)

{
  WeakPtr_L_class_Body_G_ *pWVar1;
  int *piVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  Itinerary *pIVar7;
  int *piVar8;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *in_stack_00000004;
  undefined4 uVar9;
  ReferenceController *this_00;
  undefined4 uVar10;
  ItineraryNode *local_20;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body(in_stack_00000004,5);
  piVar4 = (int *)GetAllNodes(this);
  local_c = 0;
  iVar5 = (**(code **)(*piVar4 + 0xc))();
  if (local_c < iVar5) {
    do {
      puVar6 = (undefined4 *)(**(code **)*piVar4)(&local_c);
      pWVar1 = (WeakPtr_L_class_Body_G_ *)(puVar6 + 0x40);
      if ((puVar6[0x40] != 0) && ((ReferenceController *)puVar6[0x41] != (ReferenceController *)0x0)
         ) {
        bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar6[0x41]);
        if ((bVar3) && ((*(char *)(puVar6 + 0x48) != '\0' && (*(char *)(puVar6 + 0x44) != '\0')))) {
          uVar9 = *(undefined4 *)pWVar1;
          uVar10 = 0;
          this_00 = (ReferenceController *)puVar6[0x41];
          if (this_00 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this_00);
          }
          if ((ReferenceController *)puVar6[1] != (ReferenceController *)0x0) {
            bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar6[1]);
            if (!bVar3) {
              *puVar6 = 0;
            }
          }
          pIVar7 = (Itinerary *)Fleet__GetMissionItinerary((Fleet *)*puVar6);
          if (*(char *)&pIVar7[2].FinalOrbit.Data.Elements.SemiMajorAxis_km == '\0') {
            util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18
                            ,"IsValid()",(char *)0x0);
            DebugBreak();
          }
          bVar3 = IsNodeAFlybyNode(pIVar7,puVar6,uVar9,this_00,uVar10);
          if (bVar3) {
            piVar8 = *(int **)(in_stack_00000004 + 4);
            piVar2 = piVar8 + *(int *)(in_stack_00000004 + 8) * 2;
            if (piVar8 != piVar2) {
              do {
                if ((puVar6[0x41] == piVar8[1]) && (*(int *)pWVar1 == *piVar8)) goto LAB_0073ecfa;
                piVar8 = piVar8 + 2;
              } while (piVar8 != piVar2);
            }
            util__Darray_class_util__WeakPtr_class_Body_____Add(in_stack_00000004,pWVar1);
          }
        }
      }
LAB_0073ecfa:
      local_c = local_c + 1;
      iVar5 = (**(code **)(*piVar4 + 0xc))();
    } while (local_c < iVar5);
  }
  if (local_20 != (ItineraryNode *)0x0) {
    ItineraryNode___vector_deleting_destructor_(local_20,3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000073f2d0 0073f2d0_Itinerary__GetConsolidatedNodeBurnLength_km__s ====
// decompiled by BatchDecomp @ 0073f2d0 name=GetConsolidatedNodeBurnLength_km__s conv=__thiscall body=415

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall Itinerary__GetConsolidatedNodeBurnLength_km__s(struct ItineraryNode
   const &)const  */

double __thiscall
Itinerary__GetConsolidatedNodeBurnLength_km__s(Itinerary *this,ItineraryNode *param_1)

{
  Darray_L_ItineraryNode_G_ *this_00;
  double dVar1;
  double dVar2;
  double dVar3;
  Maybe_L_double_G_ *pMVar4;
  int iVar5;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  Maybe_L_double_G_ local_38;
  undefined1 local_28[8];
  double local_20;
  double local_18;
  Fleet *local_10;
  Fleet *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (param_1->NodeType == Default) {
    dVar1 = (param_1->ThrusterBurn_km__s).Y;
    dVar2 = (param_1->ThrusterBurn_km__s).X;
    dVar3 = (param_1->ThrusterBurn_km__s).Z;
    local_18 = dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3;
    pMVar4 = util__Sqrt((Maybe_L_double_G_ *)local_28,&local_18);
    if (pMVar4->IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return (double)extraout_ST0;
  }
  this_00 = &this->ItineraryNodes;
  util_Darray_struct_ItineraryNode_FindIndex((Darray_L_struct_ItineraryNode_G_ *)this_00,(ItineraryNode *)&local_10);
  if ((char)local_c == '\0') {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return (double)extraout_ST0_01;
  }
  local_c = local_10;
  local_20 = 0.0;
  local_18 = 0.0;
  iVar5 = (**(code **)(*(int *)this_00 + 0xc))();
  if ((int)local_c < iVar5) {
    do {
      iVar5 = (**(code **)*(int *)this_00)(&local_c);
      if (*(Type *)(iVar5 + 0xa8) != param_1->NodeType) break;
      local_18 = *(double *)(iVar5 + 0x78) * *(double *)(iVar5 + 0x78) +
                 *(double *)(iVar5 + 0x80) * *(double *)(iVar5 + 0x80) +
                 *(double *)(iVar5 + 0x88) * *(double *)(iVar5 + 0x88);
      pMVar4 = util__Sqrt(&local_38,&local_18);
      if (pMVar4->IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      local_20 = pMVar4->Data + local_20;
      local_c = (Fleet *)((int)&local_c->_pad_0x0_0 + 1);
      local_18 = local_20;
      iVar5 = (**(code **)(*(int *)this_00 + 0xc))();
    } while ((int)local_c < iVar5);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0_00;
}


//==== 000073fe00 0073fe00_Itinerary__GetDeltaVCostUpToNode_km__s ====
// decompiled by BatchDecomp @ 0073fe00 name=GetDeltaVCostUpToNode_km__s conv=__thiscall body=267

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall Itinerary__GetDeltaVCostUpToNode_km__s(struct ItineraryNode const
   &)const  */

double __thiscall Itinerary__GetDeltaVCostUpToNode_km__s(Itinerary *this,ItineraryNode *param_1)

{
  int *piVar1;
  int iVar2;
  Maybe_L_double_G_ *pMVar3;
  float10 extraout_ST0;
  double dVar4;
  Maybe_L_double_G_ local_3c;
  undefined **local_2c;
  ItineraryNode *local_28;
  double local_1c;
  double local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar1 = (int *)GetAllNodes(this);
  local_c = 0;
  local_14 = 0.0;
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  if (local_c < iVar2) {
    do {
      iVar2 = (**(code **)*piVar1)(&local_c);
      if (param_1->TimeSinceJ2000_s < *(double *)(iVar2 + 0x70)) {
        dVar4 = 0.0;
      }
      else {
        local_1c = *(double *)(iVar2 + 0x80) * *(double *)(iVar2 + 0x80) +
                   *(double *)(iVar2 + 0x78) * *(double *)(iVar2 + 0x78) +
                   *(double *)(iVar2 + 0x88) * *(double *)(iVar2 + 0x88);
        pMVar3 = util__Sqrt(&local_3c,&local_1c);
        if (pMVar3->IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        dVar4 = pMVar3->Data;
      }
      local_14 = dVar4 + local_14;
      local_c = local_c + 1;
      iVar2 = (**(code **)(*piVar1 + 0xc))();
    } while (local_c < iVar2);
  }
  local_2c = ((void *)(0x00938a44u));
  if (local_28 != (ItineraryNode *)0x0) {
    ItineraryNode___vector_deleting_destructor_(local_28,3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00007401a0 007401a0_Itinerary__GetFleetDistanceAndParam_km ====
// decompiled by BatchDecomp @ 007401a0 name=GetFleetDistanceAndParam_km conv=__thiscall body=541

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct util::tuple3<class util::WeakPtr<class Fleet>,double,double> __thiscall
   Itinerary__GetFleetDistanceAndParam_km(struct ItineraryNode const &,struct
   util__Line3_L_double_G_,class util::WeakPtr<class Fleet>)const  */

void __thiscall
Itinerary__GetFleetDistanceAndParam_km(undefined4 param_1_00,undefined4 *param_1,int param_3,undefined4 param_2,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
          undefined4 param_13,undefined4 param_14,undefined4 param_15,Fleet *param_16,
          ReferenceController *param_17)

{
  Line3_L_double_G_ LVar1;
  Line3_L_double_G_ LVar2;
  bool bVar3;
  Maybe_L_double_G_ *pMVar4;
  WeakPtr_L_class_CelestialObject_G_ *unaff_EDI;
  double dVar5;
  double dVar6;
  double dVar7;
  Maybe_L_double_G_ local_60;
  double local_50;
  double local_48;
  Line3_L_double_G_ local_40;
  undefined8 local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = *(undefined8 *)(param_3 + 0xf0);
  if (*(ReferenceController **)(param_3 + 0xf4) != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(*(ReferenceController **)(param_3 + 0xf4));
  }
  if ((param_17 != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__IsDataStillValid(param_17), !bVar3)) {
    param_16 = (Fleet *)0x0;
  }
  Fleet__GetRelativeSweepLine(param_16,&local_40,
             (double)CONCAT44((int)*(undefined8 *)(param_3 + 0x70),
                              (int)((ulonglong)*(undefined8 *)(param_3 + 0x38) >> 0x20)),
             (double)CONCAT44(&local_10,(int)((ulonglong)*(undefined8 *)(param_3 + 0x70) >> 0x20)),
             unaff_EDI);
  ((slice_view *)&LVar1.A.X)->_4_4_ = param_5;
  ((slice_view *)&LVar1.A.X)->_0_4_ = param_2;
  ((slice_view *)&LVar1.A.Y)->_0_4_ = param_6;
  ((slice_view *)&LVar1.A.Y)->_4_4_ = param_7;
  ((slice_view *)&LVar1.A.Z)->_0_4_ = param_8;
  ((slice_view *)&LVar1.A.Z)->_4_4_ = param_9;
  ((slice_view *)&LVar1.B.X)->_0_4_ = param_10;
  ((slice_view *)&LVar1.B.X)->_4_4_ = param_11;
  ((slice_view *)&LVar1.B.Y)->_0_4_ = param_12;
  ((slice_view *)&LVar1.B.Y)->_4_4_ = param_13;
  ((slice_view *)&LVar1.B.Z)->_0_4_ = param_14;
  ((slice_view *)&LVar1.B.Z)->_4_4_ = param_15;
  ((slice_view *)&LVar2.A.X)->_4_4_ = ((slice_view *)&local_40.A.X)->_4_4_;
  ((slice_view *)&LVar2.A.X)->_0_4_ = ((slice_view *)&local_40.A.X)->_0_4_;
  ((slice_view *)&LVar2.A.Y)->_0_4_ = ((slice_view *)&local_40.A.Y)->_0_4_;
  ((slice_view *)&LVar2.A.Y)->_4_4_ = ((slice_view *)&local_40.A.Y)->_4_4_;
  ((slice_view *)&LVar2.A.Z)->_0_4_ = ((slice_view *)&local_40.A.Z)->_0_4_;
  ((slice_view *)&LVar2.A.Z)->_4_4_ = ((slice_view *)&local_40.A.Z)->_4_4_;
  ((slice_view *)&LVar2.B.X)->_0_4_ = ((slice_view *)&local_40.B.X)->_0_4_;
  ((slice_view *)&LVar2.B.X)->_4_4_ = ((slice_view *)&local_40.B.X)->_4_4_;
  ((slice_view *)&LVar2.B.Y)->_0_4_ = ((slice_view *)&local_40.B.Y)->_0_4_;
  ((slice_view *)&LVar2.B.Y)->_4_4_ = ((slice_view *)&local_40.B.Y)->_4_4_;
  ((slice_view *)&LVar2.B.Z)->_0_4_ = ((slice_view *)&local_40.B.Z)->_0_4_;
  ((slice_view *)&LVar2.B.Z)->_4_4_ = ((slice_view *)&local_40.B.Z)->_4_4_;
  local_50 = util__GetFleetDistanceAndParam_km(LVar1,LVar2);
  dVar7 = (((double)CONCAT44(param_13,param_12) - (double)CONCAT44(param_7,param_6)) * local_50 +
          (double)CONCAT44(param_7,param_6)) -
          (((double)CONCAT44(((slice_view *)&local_40.B.Y)->_4_4_,((slice_view *)&local_40.B.Y)->_0_4_) -
           (double)CONCAT44(((slice_view *)&local_40.A.Y)->_4_4_,((slice_view *)&local_40.A.Y)->_0_4_)) * local_50 +
          (double)CONCAT44(((slice_view *)&local_40.A.Y)->_4_4_,((slice_view *)&local_40.A.Y)->_0_4_));
  dVar6 = (((double)CONCAT44(param_11,param_10) - (double)CONCAT44(param_5,param_2)) * local_50 +
          (double)CONCAT44(param_5,param_2)) -
          (((double)CONCAT44(((slice_view *)&local_40.B.X)->_4_4_,((slice_view *)&local_40.B.X)->_0_4_) -
           (double)CONCAT44(((slice_view *)&local_40.A.X)->_4_4_,((slice_view *)&local_40.A.X)->_0_4_)) * local_50 +
          (double)CONCAT44(((slice_view *)&local_40.A.X)->_4_4_,((slice_view *)&local_40.A.X)->_0_4_));
  dVar5 = (((double)CONCAT44(param_15,param_14) - (double)CONCAT44(param_9,param_8)) * local_50 +
          (double)CONCAT44(param_9,param_8)) -
          (((double)CONCAT44(((slice_view *)&local_40.B.Z)->_4_4_,((slice_view *)&local_40.B.Z)->_0_4_) -
           (double)CONCAT44(((slice_view *)&local_40.A.Z)->_4_4_,((slice_view *)&local_40.A.Z)->_0_4_)) * local_50 +
          (double)CONCAT44(((slice_view *)&local_40.A.Z)->_4_4_,((slice_view *)&local_40.A.Z)->_0_4_));
  local_48 = dVar7 * dVar7 + dVar6 * dVar6 + dVar5 * dVar5;
  pMVar4 = util__Sqrt(&local_60,&local_48);
  if (pMVar4->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_48 = pMVar4->Data;
  if ((param_17 != (ReferenceController *)0x0) &&
     (util__ReferenceController__AddWeakReference(param_17), param_17 != (ReferenceController *)0x0)
     ) {
    util__ReferenceController__AddWeakReference(param_17);
  }
  *param_1 = (undefined4)param_16;
  param_1[1] = (undefined4)param_17;
  if (param_17 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_17);
  }
  *(double *)(param_1 + 2) = local_48;
  *(double *)(param_1 + 4) = local_50;
  if ((param_17 != (ReferenceController *)0x0) &&
     (util__ReferenceController__ReleaseWeakReference(param_17),
     param_17 != (ReferenceController *)0x0)) {
    util__ReferenceController__ReleaseWeakReference(param_17);
  }
  if (((slice_view *)&local_10)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)((slice_view *)&local_10)->_4_4_);
  }
  if (param_17 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_17);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000742080 00742080_Itinerary__GetNode ====
// decompiled by BatchDecomp @ 00742080 name=GetNode conv=__thiscall body=366

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct ItineraryNode const __thiscall Itinerary__GetNode(struct ItineraryNode const
   &)const  */

ItineraryNode * __thiscall
Itinerary__GetNode(Itinerary *this,ItineraryNode *__return_storage_ptr__,ItineraryNode *param_1)

{
  bool bVar1;
  bool bVar2;
  ItineraryNode *pIVar3;
  ItineraryNode *pIVar4;
  ItineraryNode local_2bc;
  ItineraryNode local_16c;
  ReferenceController *local_18;
  Darray_L_ItineraryNode_G_ *local_14;
  Fleet *local_10;
  ReferenceController *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_14 = &this->ItineraryNodes;
  util_Darray_struct_ItineraryNode_FindIndex((Darray_L_struct_ItineraryNode_G_ *)local_14,(ItineraryNode *)&local_10);
  if ((char)local_c == '\0') {
    pIVar3 = (this->ItineraryNodes).Data;
    local_10 = (Fleet *)0x0;
    pIVar4 = pIVar3 + (this->ItineraryNodes).Size;
    if (pIVar3 != pIVar4) {
      do {
        if ((NAN(pIVar3->TimeSinceJ2000_s) || NAN(param_1->TimeSinceJ2000_s)) !=
            (pIVar3->TimeSinceJ2000_s == param_1->TimeSinceJ2000_s)) {
          ((slice_view *)&local_18)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&local_18)->_1_3_[0] | (((slice_view *)&local_18)->_1_3_[1] << 8) | (((slice_view *)&local_18)->_1_3_[2] << 16)) << 8));
          local_c = local_18;
          goto LAB_0074211e;
        }
        pIVar3 = pIVar3 + 1;
        local_10 = (Fleet *)((int)&local_10->_pad_0x0_0 + 1);
      } while (pIVar3 != pIVar4);
    }
    local_18 = (ReferenceController *)((uint)((slice_view *)&local_18)->_1_3_ << 8);
    local_10 = (Fleet *)0x0;
    local_c = local_18;
    pIVar3 = (ItineraryNode *)ItineraryNode__ItineraryNode(&local_16c);
    bVar2 = false;
    bVar1 = true;
  }
  else {
LAB_0074211e:
    pIVar3 = (ItineraryNode *)(**(code **)*(int *)local_14)(&local_10);
    pIVar3 = (ItineraryNode *)ItineraryNode__ItineraryNode(&local_2bc,pIVar3);
    bVar2 = true;
    bVar1 = false;
  }
  ItineraryNode__ItineraryNode(__return_storage_ptr__,pIVar3);
  if (bVar1) {
    if (local_16c.CachedNearestOrbiter.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_16c.CachedNearestOrbiter.Controller);
    }
    if (local_16c.CachedNearestFleet.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_16c.CachedNearestFleet.Controller);
    }
    if (local_16c.CachedNearestBody.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_16c.CachedNearestBody.Controller);
    }
    if (local_16c.CachedGravityBody.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_16c.CachedGravityBody.Controller);
    }
    if (local_16c.Parent.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_16c.Parent.Controller);
    }
  }
  if (bVar2) {
    if (local_2bc.CachedNearestOrbiter.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_2bc.CachedNearestOrbiter.Controller);
    }
    if (local_2bc.CachedNearestFleet.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_2bc.CachedNearestFleet.Controller);
    }
    if (local_2bc.CachedNearestBody.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_2bc.CachedNearestBody.Controller);
    }
    if (local_2bc.CachedGravityBody.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_2bc.CachedGravityBody.Controller);
    }
    if (local_2bc.Parent.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_2bc.Parent.Controller);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 00007422f0 007422f0_Itinerary__GetNodeAfterLastThrust ====
// decompiled by BatchDecomp @ 007422f0 name=GetNodeAfterLastThrust conv=__thiscall body=283

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Maybe<struct ItineraryNode> __thiscall
   Itinerary__GetNodeAfterLastThrust(void)const  */

void __thiscall Itinerary__GetNodeAfterLastThrust(Itinerary *this)

{
  Darray_L_ItineraryNode_G_ *pDVar1;
  int iVar2;
  ItineraryNode *pIVar3;
  ItineraryNode *in_stack_00000004;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pDVar1 = &this->ItineraryNodes;
  local_c = (**(code **)(*(int *)&this->ItineraryNodes + 0xc))();
  do {
    local_c = local_c + -1;
    if (local_c < 0) {
      ItineraryNode__ItineraryNode(in_stack_00000004);
      *(undefined1 *)&in_stack_00000004[1].Parent.Pointer = 0;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    iVar2 = (**(code **)*(int *)pDVar1)(&local_c);
  } while ((((NAN(*(double *)(iVar2 + 0x78)) != (*(double *)(iVar2 + 0x78) == 0.0)) &&
            (NAN(*(double *)(iVar2 + 0x80)) != (*(double *)(iVar2 + 0x80) == 0.0))) &&
           (NAN(*(double *)(iVar2 + 0x88)) != (*(double *)(iVar2 + 0x88) == 0.0))) &&
          (((NAN(*(double *)(iVar2 + 0x90)) != (*(double *)(iVar2 + 0x90) == 0.0) &&
            (NAN(*(double *)(iVar2 + 0x98)) != (*(double *)(iVar2 + 0x98) == 0.0))) &&
           (NAN(*(double *)(iVar2 + 0xa0)) != (*(double *)(iVar2 + 0xa0) == 0.0)))));
  iVar2 = (**(code **)(*(int *)pDVar1 + 0xc))();
  local_10 = local_c + 1;
  if (iVar2 + -1 <= local_c + 1) {
    local_10 = iVar2 + -1;
  }
  pIVar3 = (ItineraryNode *)(**(code **)*(int *)pDVar1)(&local_10);
  ItineraryNode__ItineraryNode(in_stack_00000004,pIVar3);
  *(undefined1 *)&in_stack_00000004[1].Parent.Pointer = 1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000742410 00742410_Itinerary__GetNodeDirection ====
// decompiled by BatchDecomp @ 00742410 name=GetNodeDirection conv=__thiscall body=176

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct Vec3_L_double_G_ __thiscall Itinerary__GetNodeDirection(struct ItineraryNode
   const &)const  */

Vec3_L_double_G_ * __thiscall
Itinerary__GetNodeDirection(Itinerary *this,Vec3_L_double_G_ *__return_storage_ptr__,ItineraryNode *param_1)

{
  ReferenceController *this_00;
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 local_54[48];
  Vec3_L_double_G_ local_24;
  ReferenceController *local_8;
  
  this_00 = (this->ParentFleet).Controller;
  if (this_00 != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__IsDataStillValid(this_00);
    if (!bVar1) {
      (this->ParentFleet).Pointer = (Fleet *)0x0;
    }
  }
  puVar2 = (undefined4 *)
           StrategicManager__GetReferenceCelestial(((this->ParentFleet).Pointer)->ParentStrategic);
  if ((ReferenceController *)puVar2[1] != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar2[1]);
    if (!bVar1) {
      *puVar2 = 0;
    }
  }
  iVar3 = CelestialObject__GetStateAt((CelestialObject *)*puVar2,
                     (double)CONCAT44(SUB84(param_1->TimeSinceJ2000_s,0),local_54));
  local_24.X = (param_1->State).Velocity.X - *(double *)(iVar3 + 0x18);
  local_24.Y = (param_1->State).Velocity.Y - *(double *)(iVar3 + 0x20);
  local_24.Z = (param_1->State).Velocity.Z - *(double *)(iVar3 + 0x28);
  util__Vec3_double___SafeNormalized(&local_24,__return_storage_ptr__);
  if (local_8 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_8);
  }
  return __return_storage_ptr__;
}


//==== 0000743080 00743080_Itinerary__GetStartTime_s ====
// decompiled by BatchDecomp @ 00743080 name=GetStartTime_s conv=__thiscall body=7

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall Itinerary__GetStartTime_s(void)const  */

double __thiscall Itinerary__GetStartTime_s(Itinerary *this)

{
  return (this->TimeRange_s).Upper;
}


//==== 0000743ee0 00743ee0_Itinerary__GetTimeStep_s ====
// decompiled by BatchDecomp @ 00743ee0 name=GetTimeStep_s conv=__thiscall body=312

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: double __thiscall Itinerary__GetTimeStep_s(struct ItineraryNode const &)const  */

double __thiscall Itinerary__GetTimeStep_s(Itinerary *this,ItineraryNode *param_1)

{
  ReferenceController *pRVar1;
  bool bVar2;
  double *pdVar3;
  Maybe_L_double_G_ *pMVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char *in_stack_ffffff8c;
  double *in_stack_ffffff90;
  undefined1 local_50[48];
  Maybe_L_double_G_ local_20;
  double local_10;
  Itinerary *local_8;
  
  local_8 = this;
  if (((param_1->CachedNearestBody).Pointer != (CelestialObject *)0x0) &&
     (pRVar1 = (param_1->CachedNearestBody).Controller, pRVar1 != (ReferenceController *)0x0)) {
    in_stack_ffffff90 = (double *)0x743f14;
    bVar2 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (bVar2) {
      pRVar1 = (param_1->CachedNearestBody).Controller;
      if (pRVar1 != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid(pRVar1);
        if (!bVar2) {
          (param_1->CachedNearestBody).Pointer = (CelestialObject *)0x0;
        }
      }
      pdVar3 = (double *)
               CelestialObject__GetStateAt((param_1->CachedNearestBody).Pointer,
                          (double)CONCAT44(SUB84(param_1->TimeSinceJ2000_s,0),local_50));
      dVar7 = *pdVar3 - (param_1->State).Position.X;
      dVar9 = pdVar3[1] - (param_1->State).Position.Y;
      in_stack_ffffff90 = &local_10;
      dVar8 = pdVar3[2] - (param_1->State).Position.Z;
      in_stack_ffffff8c = (char *)&local_20;
      local_10 = dVar7 * dVar7 + dVar9 * dVar9 + dVar8 * dVar8;
      pMVar4 = util__Sqrt((Maybe_L_double_G_ *)in_stack_ffffff8c,in_stack_ffffff90);
      if (pMVar4->IsValidData == false) {
        in_stack_ffffff8c = "IsValid()";
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        in_stack_ffffff90 = (double *)0x743fbf;
        DebugBreak();
      }
      uVar5 = *(undefined4 *)&pMVar4->Data;
      uVar6 = (undefined4)((ulonglong)pMVar4->Data >> 0x20);
      goto LAB_00743fc8;
    }
  }
  uVar5 = 0;
  uVar6 = 0;
LAB_00743fc8:
  dVar9 = GetTimeStep_s(local_8,*(undefined4 *)&(param_1->State).Position.X,
                        *(undefined4 *)((int)&(param_1->State).Position.X + 4),
                        *(undefined4 *)&(param_1->State).Position.Y,
                        *(undefined4 *)((int)&(param_1->State).Position.Y + 4),
                        *(undefined4 *)&(param_1->State).Position.Z,
                        *(undefined4 *)((int)&(param_1->State).Position.Z + 4),
                        *(undefined4 *)&(param_1->State).Velocity.X,
                        *(undefined4 *)((int)&(param_1->State).Velocity.X + 4),
                        *(undefined4 *)&(param_1->State).Velocity.Y,
                        *(undefined4 *)((int)&(param_1->State).Velocity.Y + 4),
                        *(undefined4 *)&(param_1->State).Velocity.Z,
                        *(undefined4 *)((int)&(param_1->State).Velocity.Z + 4),
                        param_1->TimeSinceJ2000_s,0,0,(uint)in_stack_ffffff8c & 0xffffff00,
                        in_stack_ffffff90,CONCAT44(uVar6,uVar5),1);
  return dVar9;
}


//==== 00007444d0 007444d0_Itinerary__GetTotalDeltaVCost_km__s ====
// decompiled by BatchDecomp @ 007444d0 name=GetTotalDeltaVCost_km__s conv=__thiscall body=255

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall Itinerary__GetTotalDeltaVCost_km__s(void)const  */

double __thiscall Itinerary__GetTotalDeltaVCost_km__s(Itinerary *this)

{
  int *piVar1;
  int iVar2;
  Maybe_L_double_G_ *pMVar3;
  float10 extraout_ST0;
  Maybe_L_double_G_ local_3c;
  undefined **local_2c;
  ItineraryNode *local_28;
  double local_1c;
  double local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar1 = (int *)GetAllNodes(this);
  local_c = 0;
  local_1c = 0.0;
  local_14 = 0.0;
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  if (local_c < iVar2) {
    do {
      iVar2 = (**(code **)*piVar1)(&local_c);
      local_14 = *(double *)(iVar2 + 0x80) * *(double *)(iVar2 + 0x80) +
                 *(double *)(iVar2 + 0x78) * *(double *)(iVar2 + 0x78) +
                 *(double *)(iVar2 + 0x88) * *(double *)(iVar2 + 0x88);
      pMVar3 = util__Sqrt(&local_3c,&local_14);
      if (pMVar3->IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      local_1c = pMVar3->Data + local_1c;
      local_c = local_c + 1;
      local_14 = local_1c;
      iVar2 = (**(code **)(*piVar1 + 0xc))();
    } while (local_c < iVar2);
  }
  local_2c = ((void *)(0x00938a44u));
  if (local_28 != (ItineraryNode *)0x0) {
    ItineraryNode___vector_deleting_destructor_(local_28,3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00007445d0 007445d0_Itinerary__HasAnyBurnsAtAll ====
// decompiled by BatchDecomp @ 007445d0 name=HasAnyBurnsAtAll conv=__thiscall body=210

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall Itinerary__HasAnyBurnsAtAll(void)const  */

bool __thiscall Itinerary__HasAnyBurnsAtAll(Itinerary *this)

{
  double dVar1;
  undefined1 uVar2;
  int iVar3;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar3 = (**(code **)(*(int *)&this->ItineraryNodes + 0xc))();
  if (local_c < iVar3) {
    do {
      iVar3 = (**(code **)*(int *)&this->ItineraryNodes)(&local_c);
      dVar1 = *(double *)(iVar3 + 0x70);
      if ((this->TimeRange_s).Upper <= dVar1) {
        if (this->ActiveLowerTime_s <= dVar1 && dVar1 != this->ActiveLowerTime_s) break;
        iVar3 = (**(code **)*(int *)&this->ItineraryNodes)(&local_c);
        if (((NAN(*(double *)(iVar3 + 0x78)) == (*(double *)(iVar3 + 0x78) == 0.0)) ||
            (NAN(*(double *)(iVar3 + 0x80)) == (*(double *)(iVar3 + 0x80) == 0.0))) ||
           (NAN(*(double *)(iVar3 + 0x88)) == (*(double *)(iVar3 + 0x88) == 0.0))) {
          uVar2 = 1;
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return (bool)uVar2;
        }
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*(int *)&this->ItineraryNodes + 0xc))();
    } while (local_c < iVar3);
  }
  uVar2 = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}


//==== 0000744d30 00744d30_Itinerary__IsNodeAFlybyNode ====
// decompiled by BatchDecomp @ 00744d30 name=IsNodeAFlybyNode conv=__thiscall body=636

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall Itinerary__IsNodeAFlybyNode(struct ItineraryNode const &,class
   util::WeakPtr<class Fleet>,bool)const  */

bool __thiscall
Itinerary__IsNodeAFlybyNode(Itinerary *this,int param_1,Fleet *param_3,ReferenceController *param_4,char param_5)

{
  bool bVar1;
  uint uVar2;
  Faction *pFVar3;
  Faction *pFVar4;
  undefined1 uVar5;
  Fleet *pFVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ReferenceController *pRVar13;
  undefined8 local_14;
  
  uVar2 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (((param_3 == (Fleet *)0x0) || (param_4 == (ReferenceController *)0x0)) ||
     (bVar1 = util__ReferenceController__IsDataStillValid(param_4), !bVar1)) {
    uVar5 = false;
    goto LAB_00744f8e;
  }
  pRVar13 = (this->ParentFleet).Controller;
  if ((pRVar13 != (ReferenceController *)0x0) &&
     (bVar1 = util__ReferenceController__IsDataStillValid(pRVar13), !bVar1)) {
    (this->ParentFleet).Pointer = (Fleet *)0x0;
  }
  pFVar6 = (this->ParentFleet).Pointer;
  if ((param_4 != (ReferenceController *)0x0) &&
     (bVar1 = util__ReferenceController__IsDataStillValid(param_4), !bVar1)) {
    param_3 = (Fleet *)0x0;
  }
  pFVar3 = (Faction *)(uintptr_t)Fleet__GetAlliance(param_3);
  pFVar4 = (Faction *)(uintptr_t)Fleet__GetAlliance(pFVar6);
  pRVar13 = (this->ParentFleet).Controller;
  if ((pRVar13 != (ReferenceController *)0x0) &&
     (bVar1 = util__ReferenceController__IsDataStillValid(pRVar13), !bVar1)) {
    (this->ParentFleet).Pointer = (Fleet *)0x0;
  }
  pFVar6 = (this->ParentFleet).Pointer;
  Fleet__IsMissileFleet_Memoize(pFVar6);
  if ((pFVar6->IsMissileFleet_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if ((pFVar6->IsMissileFleet_MemoizedValue).Data == false) {
    if ((param_4 != (ReferenceController *)0x0) &&
       (bVar1 = util__ReferenceController__IsDataStillValid(param_4), !bVar1)) {
      param_3 = (Fleet *)0x0;
    }
    Fleet__IsMissileFleet_Memoize(param_3);
    if ((param_3->IsMissileFleet_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if ((param_3->IsMissileFleet_MemoizedValue).Data != false) goto LAB_00744e4f;
    bVar1 = false;
  }
  else {
LAB_00744e4f:
    bVar1 = true;
  }
  if (pFVar4 == pFVar3) {
LAB_00744e5f:
    ((slice_view *)&local_14)->_4_4_ = ((slice_view *)&local_14)->_4_4_ & 0xffffff00;
  }
  else {
    local_14 = CONCAT35(((slice_view *)&local_14)->_5_3_,0x100000000);
    if (bVar1) goto LAB_00744e5f;
  }
  uVar12 = 0;
  uVar10 = CONCAT44(param_4,param_3);
  if (param_4 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_4);
  }
  pRVar13 = (this->ParentFleet).Controller;
  pFVar6 = (this->ParentFleet).Pointer;
  if (((pRVar13 != (ReferenceController *)0x0) &&
      (util__ReferenceController__AddWeakReference(pRVar13), pRVar13 != (ReferenceController *)0x0))
     && (bVar1 = util__ReferenceController__IsDataStillValid(pRVar13), !bVar1)) {
    pFVar6 = (Fleet *)0x0;
  }
  dVar8 = Fleet__GetCombatDistance_km(pFVar6,uVar10,((slice_view *)&local_14)->_4_4_,uVar12);
  if (pRVar13 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar13);
  }
  pRVar13 = (this->ParentFleet).Controller;
  if ((pRVar13 != (ReferenceController *)0x0) &&
     (bVar1 = util__ReferenceController__IsDataStillValid(pRVar13), !bVar1)) {
    (this->ParentFleet).Pointer = (Fleet *)0x0;
  }
  dVar9 = StrategicManager__GetMinimumBattleRange_km(((this->ParentFleet).Pointer)->ParentStrategic)
  ;
  uVar12 = *(undefined4 *)&dVar9;
  uVar7 = *(undefined4 *)((char *)&dVar9 + 4);
  if (dVar9 <= dVar8) {
    uVar12 = *(undefined4 *)&dVar8;
    uVar7 = *(undefined4 *)((char *)&dVar8 + 4);
  }
  uVar11 = *(undefined4 *)(param_1 + 0xf8);
  pRVar13 = *(ReferenceController **)(param_1 + 0xfc);
  dVar8 = (double)CONCAT44(uVar7,uVar12);
  if (pRVar13 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar13);
  }
  dVar9 = GetDistanceStep_km(this,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
                             *(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                             *(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                             *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),
                             *(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),
                             *(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c),
                             *(undefined8 *)(param_1 + 0x70),uVar11,pRVar13);
  if ((param_5 == '\0') && (dVar8 <= dVar9 * /*4004000000000000*/2.5)) {
    dVar8 = dVar9 * /*4004000000000000*/2.5;
  }
  if (*(char *)(param_1 + 0x110) == '\0') {
    uVar5 = 0.0 <= dVar8;
  }
  else {
    uVar5 = *(double *)(param_1 + 0x108) <= dVar8;
  }
LAB_00744f8e:
  if (param_4 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_4);
  }
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return (bool)uVar5;
}


//==== 0000744fb0 00744fb0_Itinerary__IsPastMaxTime_s ====
// decompiled by BatchDecomp @ 00744fb0 name=IsPastMaxTime_s conv=__thiscall body=156

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall Itinerary__IsPastMaxTime_s(void)const  */

bool __thiscall Itinerary__IsPastMaxTime_s(Itinerary *this)

{
  ReferenceController *pRVar1;
  StrategicManager *this_00;
  StrategicManager *this_01;
  bool bVar2;
  double dVar3;
  Maybe_L_double_G_ local_24;
  double local_14;
  
  local_14 = this->ActiveLowerTime_s;
  pRVar1 = (this->ParentFleet).Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (!bVar2) {
      (this->ParentFleet).Pointer = (Fleet *)0x0;
    }
  }
  pRVar1 = (this->ParentFleet).Controller;
  this_00 = ((this->ParentFleet).Pointer)->ParentStrategic;
  if (pRVar1 != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (!bVar2) {
      (this->ParentFleet).Pointer = (Fleet *)0x0;
    }
  }
  this_01 = ((this->ParentFleet).Pointer)->ParentStrategic;
  StrategicManager__GetFailureDeadline_s(this_00,&local_24);
  dVar3 = StrategicManager__GetTimeSinceJ2000_s(this_01);
  dVar3 = dVar3 + SecondsInAJulianMonth_s * /*4018000000000000*/6.0;
  if ((local_24.IsValidData != false) && (local_24.Data <= dVar3)) {
    dVar3 = local_24.Data;
  }
  return dVar3 <= local_14;
}


//==== 0000745050 00745050_Itinerary__IsTraversable ====
// decompiled by BatchDecomp @ 00745050 name=IsTraversable conv=__thiscall body=114

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall Itinerary__IsTraversable(void)const  */

bool __thiscall Itinerary__IsTraversable(Itinerary *this)

{
  double dVar1;
  ReferenceController *this_00;
  Fleet *this_01;
  bool bVar2;
  double dVar3;
  
  this_00 = (this->ParentFleet).Controller;
  if (this_00 != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__IsDataStillValid(this_00);
    if (!bVar2) {
      (this->ParentFleet).Pointer = (Fleet *)0x0;
    }
  }
  this_01 = (this->ParentFleet).Pointer;
  Fleet__GetRemainingDeltaV_km__s_Memoize(this_01);
  if ((this_01->GetRemainingDeltaV_km__s_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar1 = (this_01->GetRemainingDeltaV_km__s_MemoizedValue).Data;
  dVar3 = GetTotalDeltaVCost_km__s(this);
  return dVar3 <= dVar1;
}


//==== 0000746cd0 00746cd0_Itinerary__RecacheNodeOffsetStates ====
// decompiled by BatchDecomp @ 00746cd0 name=RecacheNodeOffsetStates conv=__thiscall body=130

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Itinerary__RecacheNodeOffsetStates(void) */

void __thiscall Itinerary__RecacheNodeOffsetStates(Itinerary *this)

{
  ReferenceController *this_00;
  bool bVar1;
  int iVar2;
  ItineraryNode *this_01;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar2 = (**(code **)(*(int *)&this->ItineraryNodes + 0xc))();
  if (local_c < iVar2) {
    do {
      this_01 = (ItineraryNode *)(**(code **)*(int *)&this->ItineraryNodes)(&local_c);
      this_00 = (this->ParentFleet).Controller;
      if ((this_00 != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid(this_00), !bVar1)) {
        (this->ParentFleet).Pointer = (Fleet *)0x0;
      }
      ItineraryNode__CacheOffsetState(this_01,((this->ParentFleet).Pointer)->ParentStrategic);
      local_c = local_c + 1;
      iVar2 = (**(code **)(*(int *)&this->ItineraryNodes + 0xc))();
    } while (local_c < iVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007470f0 007470f0_Itinerary__RemoveNodes ====
// decompiled by BatchDecomp @ 007470f0 name=RemoveNodes conv=__thiscall body=494

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Itinerary__RemoveNodes(void) */

void __thiscall Itinerary__RemoveNodes(Itinerary *this)

{
  bool bVar1;
  int iVar2;
  ItineraryNode *pIVar3;
  ItineraryNode *pIVar4;
  ItineraryNode local_2d0;
  ItineraryNode local_180;
  undefined1 local_30;
  undefined **local_28;
  ItineraryNode *local_24;
  double local_18;
  int *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = (int *)GetAllNodes(this);
  local_c = (**(code **)(*(int *)&this->ItineraryNodes + 0xc))();
  do {
    local_c = local_c + -1;
    if (local_c < 0) {
LAB_007471ab:
      ItineraryNode__ItineraryNode(&local_180);
      local_30 = 0;
      bVar1 = false;
      goto LAB_007471bc;
    }
    local_18 = (this->TimeRange_s).Upper;
    iVar2 = (**(code **)*(int *)&this->ItineraryNodes)(&local_c);
    if (*(double *)(iVar2 + 0x70) <= local_18 && local_18 != *(double *)(iVar2 + 0x70))
    goto LAB_007471ab;
    iVar2 = (**(code **)*(int *)&this->ItineraryNodes)(&local_c);
  } while (((NAN(*(double *)(iVar2 + 0x78)) != (*(double *)(iVar2 + 0x78) == 0.0)) &&
           (NAN(*(double *)(iVar2 + 0x80)) != (*(double *)(iVar2 + 0x80) == 0.0))) &&
          (NAN(*(double *)(iVar2 + 0x88)) != (*(double *)(iVar2 + 0x88) == 0.0)));
  pIVar4 = (ItineraryNode *)(**(code **)*(int *)&this->ItineraryNodes)(&local_c);
  ItineraryNode__ItineraryNode(&local_180,pIVar4);
  local_30 = 1;
  bVar1 = true;
LAB_007471bc:
  pIVar3 = (ItineraryNode *)(**(code **)(*local_10 + 0x20))();
  pIVar4 = &local_180;
  if (!bVar1) {
    pIVar4 = pIVar3;
  }
  ItineraryNode__ItineraryNode(&local_2d0,pIVar4);
  if (local_180.CachedNearestOrbiter.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_180.CachedNearestOrbiter.Controller);
  }
  if (local_180.CachedNearestFleet.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_180.CachedNearestFleet.Controller);
  }
  if (local_180.CachedNearestBody.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_180.CachedNearestBody.Controller);
  }
  if (local_180.CachedGravityBody.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_180.CachedGravityBody.Controller);
  }
  if (local_180.Parent.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_180.Parent.Controller);
  }
  local_28 = ((void *)(0x00938a44u));
  if (local_24 != (ItineraryNode *)0x0) {
    ItineraryNode___vector_deleting_destructor_(local_24,3);
  }
  RegenerateTrajectoryAfter(this,&local_2d0,0,0,0,0);
  if (local_2d0.CachedNearestOrbiter.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_2d0.CachedNearestOrbiter.Controller);
  }
  if (local_2d0.CachedNearestFleet.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_2d0.CachedNearestFleet.Controller);
  }
  if (local_2d0.CachedNearestBody.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_2d0.CachedNearestBody.Controller);
  }
  if (local_2d0.CachedGravityBody.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_2d0.CachedGravityBody.Controller);
  }
  if (local_2d0.Parent.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_2d0.Parent.Controller);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

