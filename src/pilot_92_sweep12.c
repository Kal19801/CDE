// pilot_sweep_sweep12.c - assembled by scripts/sweep_assemble.py (r19)
// reuses fam8_assemble fix passes (zip oracle/in-batch protos/vft channel/data closure)
/* ---- r20 incomplete-type forward decls (pointer-position only) ---- */
typedef struct ActorDropdown__MarkedAsSelected ActorDropdown__MarkedAsSelected;
typedef struct Darray_L_GraphicsResource__Type_G_ Darray_L_GraphicsResource__Type_G_;
typedef struct ItineraryMarker__Type ItineraryMarker__Type;
typedef struct Maybe_L_struct_Itinerary_G Maybe_L_struct_Itinerary_G;
typedef struct Maybe_L_struct_util__tuple2_L_struct_ItineraryNode_bool_G__G Maybe_L_struct_util__tuple2_L_struct_ItineraryNode_bool_G__G;
typedef struct struct_util__tuple2_L_struct_ItineraryNode_bool_G struct_util__tuple2_L_struct_ItineraryNode_bool_G;
typedef struct util__Maybe_L_struct_util__tuple2_L_struct____ItineraryNode_bool_G___G util__Maybe_L_struct_util__tuple2_L_struct____ItineraryNode_bool_G___G;
typedef struct util__PhysicalState_L_struct_util__Vec3_L_double_G___G util__PhysicalState_L_struct_util__Vec3_L_double_G___G;
typedef struct util__tuple2 util__tuple2;
#include "port_prelude.h"
#include "cde_win32_compat.h"
#include "cde_types_r20.h"
typedef union {
  struct {
    undefined4 _0_4_;
    undefined4 _4_4_;
    undefined4 _8_4_;
    undefined4 _320_4_;
    undefined4 _324_4_;
  };
  struct {
    undefined1 _1_3_[3];
  };
  undefined1 raw[32];
} slice_view;
/* ---- r23 PDB complete types (value-position layouts, byte-exact) ---- */
typedef struct Darray_L_util__AABB_L_util__Vec3_L_double_G___G___G Darray_L_util__AABB_L_util__Vec3_L_double_G___G___G;
struct Darray_L_util__AABB_L_util__Vec3_L_double_G___G___G {
  util__IArray_L_util__AABB_L_util__Vec3_L_double_G___G___G_ _base_util__IArray_L_util__AABB_L_util__Vec3_L_double_G___G___G_;
  util__AABB_L_util__Vec3_L_double_G___G_ *Data;
  int Size;
  int Capacity;
};
typedef struct Maybe_L_double_G Maybe_L_double_G;
struct Maybe_L_double_G {
  double Data;
  int IsValidData;
  unsigned char _tail[4];
};
typedef struct Maybe_L_util__Darray_L_util__WeakPtr_L_CelestialObject_G___G___G Maybe_L_util__Darray_L_util__WeakPtr_L_CelestialObject_G___G___G;
struct Maybe_L_util__Darray_L_util__WeakPtr_L_CelestialObject_G___G___G {
  util__Darray_L_util__WeakPtr_L_CelestialObject_G___G_ Data;
  int IsValidData;
};
typedef struct Str_L_char_G Str_L_char_G;
struct Str_L_char_G {
  int Data;
  int Capacity;
  int Length;
};
typedef struct Vec3_L_double_G Vec3_L_double_G;
struct Vec3_L_double_G {
  double X;
  double Y;
  double Z;
};
/* ---- r21 hdr-conflict renames (decl stays OLD for game TUs; pilot impl+calls = NEW; linker aliases OLD -> NEW) ---- */
#undef CapitalShipComponent__GetID
#define CapitalShipComponent__GetID CapitalShipComponent__GetID__r20
/* ---- externs: stub-oracle names (K&R; ret types by call site) ---- */
extern int CelestialObject_GetChildObjectsRecursively_Memoize(); /* K&R stub; ret by call site */
extern int FUN_007acb10(); /* K&R; ret by call site */
extern int Fleet_GetEstimatedOrbit(); /* K&R stub; ret by call site */
extern int Fleet_GetMissionItinerary(); /* K&R stub; ret by call site */
extern int Fleet_HasAShip(); /* K&R stub; ret by call site */
extern int Fleet__AddShip(); /* K&R stub; ret by call site */
extern int ItineraryNode_CacheFleetInfo(); /* K&R stub; ret by call site */
extern int ItineraryNode__IsNearestFleetAFlyby(); /* K&R stub; ret by call site */
extern int ItineraryNode__IsValid(); /* K&R stub; ret by call site */
extern int Itinerary_Itinerary__o3(); /* K&R stub; ret by call site */
extern int LibrationOrbit_LibrationOrbit__o2(); /* K&R stub; ret by call site */
extern int OrbitUI_GetLagrangePointAndTangent_km(); /* K&R stub; ret by call site */
extern int OrbitUI_GetPointAndTangent_km(); /* K&R stub; ret by call site */
extern int OrbitUI__GetArrowSize_km(); /* K&R stub; ret by call site */
extern int util_Darray_struct_ItineraryNode_FindIndex(); /* K&R stub; ret by call site */
extern int util_Maybe_struct_Itinerary_Maybe_struct_Itinerary(); /* K&R stub; ret by call site */
extern int util_Maybe_struct_Itinerary_Maybe_struct_Itinerary__o2(); /* K&R stub; ret by call site */
extern int util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2(); /* K&R stub; ret by call site */
extern int util__Maybe_struct_util__tuple2_struct_ItineraryNode_bool_____Maybe_struct_util__tuple2_struct_ItineraryNode_bool___(); /* K&R stub; ret by call site */
extern int util__Printf__o3(); /* K&R stub; ret by call site */

//==== 0000723600 00723600_FUN_00723600 ====
// decompiled by BatchDecomp @ 00723600 name=FUN_00723600 conv=unknown body=332

void FUN_00723600(Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *param_1,int *param_2)

{
  undefined4 stack0xfffffffc;
  CelestialObject *this;
  ReferenceController *this_00;
  ReferenceController *this_01;
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  Darray_L_class_util__WeakPtr_L_class_CelestialObject_G___G_ *pDVar4;
  undefined4 *puVar5;
  int local_28;
  undefined4 *local_24;
  int *local_18;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_14 = param_1;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)param_1 + 4) = 0;
  *(undefined4 *)((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)param_1 + 8) = 0;
  *(undefined4 *)((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)param_1 + 0xc) = 0;
  local_18 = param_2;
  iVar2 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)param_1,iVar2);
  local_c = 0;
  iVar2 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  if (local_c < iVar2) {
    do {
      puVar3 = (undefined4 *)(**(code **)*param_2)(&local_c);
      if (((ReferenceController *)puVar3[1] != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar3[1]),
         !bVar1)) {
        *puVar3 = 0;
      }
      this = (CelestialObject *)*puVar3;
      CelestialObject_GetChildObjectsRecursively_Memoize(this);
      pDVar4 = util__Maybe_class_util__Darray_class_util__WeakPtr_class_CelestialObject_______GetData__o2((Maybe_L_util__Darray_L_util__WeakPtr_L_CelestialObject_G___G___G *)
                       &this->GetChildObjectsRecursively_MemoizedValue);
      util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment((Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_28,
                 (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)pDVar4);
      if (*(int *)(param_1 + 8) == 0) {
        util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
                  (param_1,(Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_28);
      }
      else {
        iVar2 = (**(code **)(local_28 + 0xc))();
        if (iVar2 != 0) {
          iVar2 = *(int *)(param_1 + 8);
          local_10 = (**(code **)(local_28 + 0xc))();
          local_10 = local_10 + *(int *)(param_1 + 8);
          util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)param_1,&local_10);
          util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)param_1,iVar2);
          puVar3 = (undefined4 *)(*(int *)(param_1 + 4) + iVar2 * 8);
          puVar5 = local_24;
          if (puVar3 != (undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 8)) {
            do {
              this_00 = (ReferenceController *)puVar3[1];
              *puVar3 = *puVar5;
              this_01 = (ReferenceController *)puVar5[1];
              puVar3[1] = this_01;
              if (this_01 != (ReferenceController *)0x0) {
                util__ReferenceController__AddWeakReference(this_01);
              }
              if (this_00 != (ReferenceController *)0x0) {
                util__ReferenceController__ReleaseWeakReference(this_00);
              }
              puVar3 = puVar3 + 2;
              puVar5 = puVar5 + 2;
              param_1 = local_14;
            } while (puVar3 != (undefined4 *)(*(int *)(local_14 + 4) + *(int *)(local_14 + 8) * 8));
          }
        }
      }
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_28);
      param_2 = local_18;
      local_c = local_c + 1;
      iVar2 = (**(code **)(*(int *)(uintptr_t)local_18 + 0xc))();
    } while (local_c < iVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000734110 00734110_util__Darray_struct_ItineraryNode___Last ====
// decompiled by BatchDecomp @ 00734110 name=Last conv=__thiscall body=59

/* public: virtual struct ItineraryNode const & __thiscall util__Darray_L_struct____ItineraryNode_G___Last(void)const  */

undefined1 * __thiscall util__Darray_L_struct_ItineraryNode_G___Last(Darray_L_struct_ItineraryNode_G_ *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3d,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = *(int *)(this + 8);
  }
  return (undefined1 *)(*(int *)(this + 4) + -0x150 + iVar1 * 0x150);
}


//==== 0000736a40 00736a40_util__Maybe_struct_util__tuple2_struct_ItineraryNode_bool_____Maybe_struct_util__tuple2_struct_ItineraryNode_bool___ ====
// decompiled by BatchDecomp @ 00736a40 name=Maybe_L_struct_util__tuple2_L_struct_ItineraryNode_bool_G__G conv=__thiscall body=50

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: __thiscall util__Maybe_struct_util__tuple2_struct_ItineraryNode_bool_____Maybe_struct_util__tuple2_struct_ItineraryNode_bool___(class util__Maybe_L_struct_util__tuple2_L_struct____ItineraryNode_bool_G___G const &) */

void __thiscall
util__Maybe_L_struct_util__tuple2_L_struct_ItineraryNode_bool_G___G___Maybe_L_struct_util__tuple2_L_struct_ItineraryNode_bool_G___G
          (Maybe_L_struct_util__tuple2_L_struct_ItineraryNode_Cbool_G___G_ *this,undefined1 *p1)

{
  ItineraryNode__ItineraryNode((ItineraryNode *)this,(ItineraryNode *)p1);
  this[0x150] = *(Maybe_L_struct_util__tuple2_L_struct_ItineraryNode_Cbool_G___G_ *)(p1 + 0x150);
  this[0x158] = *(Maybe_L_struct_util__tuple2_L_struct_ItineraryNode_Cbool_G___G_ *)(p1 + 0x158);
  return;
}


//==== 0000738d50 00738d50_Itinerary__CacheNodeInfo ====
// decompiled by BatchDecomp @ 00738d50 name=CacheNodeInfo conv=__thiscall body=846

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: void __thiscall Itinerary__CacheNodeInfo(struct ItineraryNode &)const  */

void __thiscall Itinerary__CacheNodeInfo(Itinerary *this,undefined1 *p1)

{
  ReferenceController *pRVar1;
  ReferenceController *this_00;
  Vec3_L_double_G VVar2;
  Vec3_L_double_G VVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined4 *puVar6;
  FixedOrbit *pFVar7;
  uint uVar8;
  undefined1 local_128 [16];
  ReferenceController *local_118;
  undefined **local_110;
  void *local_10c;
  undefined **local_c8;
  void *local_c4;
  undefined8 local_38;
  undefined4 local_30;
  ReferenceController *local_2c;
  undefined8 local_28;
  uint local_20;
  undefined4 local_1c;
  ReferenceController *local_18;
  undefined8 local_14;
  undefined8 uStack_c;
  undefined4 uStack_8;
  
  local_20 = 0;
  ((slice_view *)&local_14)->_0_4_ = *(undefined4 *)(p1 + 0x40);
  ((slice_view *)&local_14)->_4_4_ = *(undefined4 *)(p1 + 0x44);
  uStack_c = *(uint *)(p1 + 0x48);
  uStack_8 = *(undefined4 *)(p1 + 0x4c);
  local_38 = *(undefined8 *)(p1 + 0x70);
  local_28 = *(undefined8 *)(p1 + 0x50);
  pRVar1 = (ReferenceController *)(this->ParentFleet).Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    bVar5 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (!bVar5) {
      (this->ParentFleet).Pointer = (undefined1 *)0x0;
    }
  }
  ((slice_view *)&VVar2.X)->_4_4_ = (undefined4)local_14;
  ((slice_view *)&VVar2.X)->_0_4_ = (int)((ulonglong)local_38 >> 0x20);
  ((slice_view *)&VVar2.Y)->_0_4_ = ((slice_view *)&local_14)->_4_4_;
  ((slice_view *)&VVar2.Y)->_4_4_ = uStack_c;
  ((slice_view *)&VVar2.Z)->_0_4_ = uStack_8;
  ((slice_view *)&VVar2.Z)->_4_4_ = (int)local_28;
  StrategicManager__FindNearestStableCelestialBody
            (*(StrategicManager **)((this->ParentFleet).Pointer + 0x74),
             (double)CONCAT44((int)local_38,&local_1c),VVar2);
  pRVar1 = *(ReferenceController **)(p1 + 0xf4);
  *(undefined4 *)(p1 + 0xf0) = local_1c;
  *(ReferenceController **)(p1 + 0xf4) = local_18;
  if (local_18 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(local_18);
  }
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  if (local_18 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_18);
  }
  pRVar1 = (ReferenceController *)(this->ParentFleet).Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    bVar5 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (!bVar5) {
      (this->ParentFleet).Pointer = (undefined1 *)0x0;
    }
  }
  ((slice_view *)&VVar3.X)->_4_4_ = *(undefined4 *)(p1 + 0x40);
  ((slice_view *)&VVar3.X)->_0_4_ = (int)((ulonglong)*(undefined8 *)(p1 + 0x70) >> 0x20);
  ((slice_view *)&VVar3.Y)->_0_4_ = *(undefined4 *)(p1 + 0x44);
  ((slice_view *)&VVar3.Y)->_4_4_ = *(undefined4 *)(p1 + 0x48);
  ((slice_view *)&VVar3.Z)->_0_4_ = *(undefined4 *)(p1 + 0x4c);
  ((slice_view *)&VVar3.Z)->_4_4_ = (int)*(undefined8 *)(p1 + 0x50);
  puVar6 = (undefined4 *)
           StrategicManager__FindNearestCelestialBody
                     (*(StrategicManager **)((this->ParentFleet).Pointer + 0x74),
                      (double)CONCAT44((int)*(undefined8 *)(p1 + 0x70),&local_28),VVar3);
  pRVar1 = *(ReferenceController **)(p1 + 0xfc);
  *(undefined4 *)(p1 + 0xf8) = *puVar6;
  this_00 = (ReferenceController *)puVar6[1];
  *(ReferenceController **)(p1 + 0xfc) = this_00;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
  }
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  if (((slice_view *)&local_28)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_28)->_4_4_);
  }
  pRVar1 = (ReferenceController *)(this->ParentFleet).Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    bVar5 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (!bVar5) {
      (this->ParentFleet).Pointer = (undefined1 *)0x0;
    }
  }
  ItineraryNode_CacheFleetInfo((ItineraryNode *)p1,*(undefined1 **)((this->ParentFleet).Pointer + 0x74),
             (undefined1 *)this);
  FindNearestOrbitToNode(this,(undefined1 *)&local_30);
  pRVar1 = *(ReferenceController **)(p1 + 300);
  *(undefined4 *)(p1 + 0x128) = local_30;
  *(ReferenceController **)(p1 + 300) = local_2c;
  if (local_2c != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(local_2c);
  }
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  local_14 = (double)local_28;
  uVar4 = local_14;
  ((slice_view *)&uStack_c)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_c)->_1_3_[0] | (((slice_view *)&uStack_c)->_1_3_[1] << 8) | (((slice_view *)&uStack_c)->_1_3_[2] << 16)) << 8));
  ((slice_view *)&local_14)->_0_4_ = (undefined4)local_28;
  ((slice_view *)&local_14)->_4_4_ = *(undefined4 *)((char *)&local_28 + 4);
  *(undefined4 *)(p1 + 0x140) = (undefined4)local_14;
  *(undefined4 *)(p1 + 0x144) = ((slice_view *)&local_14)->_4_4_;
  *(uint *)(p1 + 0x148) = uStack_c;
  *(undefined4 *)(p1 + 0x14c) = uStack_8;
  if ((*(int *)(p1 + 0x128) != 0) &&
     (*(ReferenceController **)(p1 + 300) != (ReferenceController *)0x0)) {
    local_14 = (double)uVar4;
    bVar5 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(p1 + 300));
    if (bVar5) {
      if (*(ReferenceController **)(p1 + 300) != (ReferenceController *)0x0) {
        bVar5 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(p1 + 300));
        if (!bVar5) {
          *(undefined4 *)(p1 + 0x128) = 0;
        }
      }
      pFVar7 = (FixedOrbit *)(**(code **)**(undefined4 **)(p1 + 0x128))(local_128);
      if (*(char *)&pFVar7[1].OrbitedBody.Pointer == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      local_14 = FixedOrbit__GetDistanceToStates
                           (pFVar7,*(undefined4 *)(p1 + 8),*(undefined4 *)(p1 + 0xc),
                            *(undefined4 *)(p1 + 0x10),*(undefined4 *)(p1 + 0x14),
                            *(undefined4 *)(p1 + 0x18),*(undefined4 *)(p1 + 0x1c),
                            *(undefined4 *)(p1 + 0x20),*(undefined4 *)(p1 + 0x24),
                            *(undefined4 *)(p1 + 0x28),*(undefined4 *)(p1 + 0x2c),
                            *(undefined4 *)(p1 + 0x30),*(undefined4 *)(p1 + 0x34),
                            *(undefined4 *)(p1 + 0x40),*(undefined4 *)(p1 + 0x44),
                            *(undefined4 *)(p1 + 0x48),*(undefined4 *)(p1 + 0x4c),
                            *(undefined4 *)(p1 + 0x50),*(undefined4 *)(p1 + 0x54),
                            *(undefined4 *)(p1 + 0x58),*(undefined4 *)(p1 + 0x5c),
                            *(undefined4 *)(p1 + 0x60),*(undefined4 *)(p1 + 100),
                            *(undefined4 *)(p1 + 0x68),*(undefined4 *)(p1 + 0x6c),
                            (int)*(undefined8 *)(p1 + 0x38),
                            (int)((ulonglong)*(undefined8 *)(p1 + 0x38) >> 0x20),
                            (int)*(undefined8 *)(p1 + 0x70),
                            (int)((ulonglong)*(undefined8 *)(p1 + 0x70) >> 0x20));
      ((slice_view *)&uStack_c)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_c)->_1_3_[0] | (((slice_view *)&uStack_c)->_1_3_[1] << 8) | (((slice_view *)&uStack_c)->_1_3_[2] << 16)) << 8));
      uVar8 = 1;
      goto LAB_00738fef;
    }
  }
  local_14 = 0.0;
  uStack_c = uStack_c & 0xffffff00;
  uVar8 = local_20;
LAB_00738fef:
  *(undefined4 *)(p1 + 0x130) = (undefined4)local_14;
  *(undefined4 *)(p1 + 0x134) = ((slice_view *)&local_14)->_4_4_;
  *(uint *)(p1 + 0x138) = uStack_c;
  *(undefined4 *)(p1 + 0x13c) = uStack_8;
  if ((uVar8 & 1) != 0) {
    local_c8 = ((void *)(0x009194a4u));
    if (local_c4 != (void *)0x0) {
      operator_delete__(local_c4);
    }
    local_c4 = (void *)0x0;
    local_c8 = ((void *)(0x00919488u));
    local_110 = ((void *)(0x00919980u));
    if (local_10c != (void *)0x0) {
      operator_delete__(local_10c);
      local_10c = (void *)0x0;
    }
    if (local_118 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_118);
    }
  }
  if (local_2c != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_2c);
  }
  pRVar1 = (ReferenceController *)(this->ParentFleet).Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    bVar5 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (!bVar5) {
      (this->ParentFleet).Pointer = (undefined1 *)0x0;
    }
  }
  ItineraryNode__CacheOffsetState
            ((ItineraryNode *)p1,*(StrategicManager **)((this->ParentFleet).Pointer + 0x74));
  return;
}


//==== 0000741960 00741960_Itinerary__GetInterpolatedNodeActualStateAndTime ====
// decompiled by BatchDecomp @ 00741960 name=GetInterpolatedNodeActualStateAndTime conv=__thiscall body=184

/* public: struct util__tuple2<struct util__PhysicalState_L_struct_util__Vec3_L_double_G___G,double>
   __thiscall Itinerary__GetInterpolatedNodeActualStateAndTime(struct util__tuple2_L_ItineraryNode_Cdouble_G_ const &)const  */

undefined1 * __thiscall
Itinerary__GetInterpolatedNodeActualStateAndTime(Itinerary *this,undefined1 *p1)

{
  undefined4 stack0xfffffffc;
  undefined8 uVar1;
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
  undefined1 *p2;
  int in_stack_00000008;
  int local_20;
  int local_1c;
  undefined **local_18;
  ItineraryNode *local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  GetAllNodesIncludingPastNode(this);
  util_Darray_struct_ItineraryNode_FindIndex((Darray_L_struct_ItineraryNode_G_ *)&local_18,(undefined1 *)&local_20);
  if ((char)local_1c == '\0') {
    uVar2 = *(undefined4 *)(in_stack_00000008 + 0x44);
    uVar3 = *(undefined4 *)(in_stack_00000008 + 0x48);
    uVar4 = *(undefined4 *)(in_stack_00000008 + 0x4c);
    uVar5 = *(undefined4 *)(in_stack_00000008 + 0x50);
    uVar6 = *(undefined4 *)(in_stack_00000008 + 0x54);
    uVar7 = *(undefined4 *)(in_stack_00000008 + 0x58);
    uVar8 = *(undefined4 *)(in_stack_00000008 + 0x5c);
    uVar9 = *(undefined4 *)(in_stack_00000008 + 0x60);
    uVar10 = *(undefined4 *)(in_stack_00000008 + 100);
    uVar11 = *(undefined4 *)(in_stack_00000008 + 0x68);
    uVar12 = *(undefined4 *)(in_stack_00000008 + 0x6c);
    uVar1 = *(undefined8 *)(in_stack_00000008 + 0x70);
    *(undefined4 *)p1 = *(undefined4 *)(in_stack_00000008 + 0x40);
    *(undefined4 *)(p1 + 4) = uVar2;
    *(undefined4 *)(p1 + 8) = uVar3;
    *(undefined4 *)(p1 + 0xc) = uVar4;
    *(undefined4 *)(p1 + 0x10) = uVar5;
    *(undefined4 *)(p1 + 0x14) = uVar6;
    *(undefined4 *)(p1 + 0x18) = uVar7;
    *(undefined4 *)(p1 + 0x1c) = uVar8;
    *(undefined4 *)(p1 + 0x20) = uVar9;
    *(undefined4 *)(p1 + 0x24) = uVar10;
    *(undefined4 *)(p1 + 0x28) = uVar11;
    *(undefined4 *)(p1 + 0x2c) = uVar12;
    *(undefined8 *)(p1 + 0x30) = uVar1;
  }
  else {
    local_1c = 0;
    if (-1 < local_20 + -1) {
      local_1c = local_20 + -1;
    }
    p2 = (undefined1 *)(*(code *)*local_18)(&local_1c);
    GetInterpolatedNodeActualStateAndTime
              (this,p1,p2,
               (double)CONCAT44((int)*(undefined8 *)(in_stack_00000008 + 0x150),in_stack_00000008));
  }
  local_18 = ((void *)(0x00938a44u));
  if (local_14 != (ItineraryNode *)0x0) {
    ItineraryNode___vector_deleting_destructor(local_14,3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return p1;
}


//==== 0000741c60 00741c60_Itinerary__GetInterpolatedNodeRefStateAndTime ====
// decompiled by BatchDecomp @ 00741c60 name=GetInterpolatedNodeRefStateAndTime conv=__thiscall body=281

/* public: struct util__tuple2_L_util__Vec3_L_double_G__Cdouble_G_ __thiscall
   Itinerary__GetInterpolatedNodeRefStateAndTime(struct util__tuple2_L_ItineraryNode_Cdouble_G_
   const &)const  */

undefined1 * __thiscall
Itinerary__GetInterpolatedNodeRefStateAndTime(Itinerary *this,undefined1 *p1)

{
  undefined4 stack0xfffffffc;
  double dVar1;
  undefined8 uVar2;
  ReferenceController *this_00;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Vec3_L_double_G VVar6;
  bool bVar7;
  undefined1 *p2;
  Vec3_L_double_G_ *pVVar8;
  undefined4 unaff_EDI;
  int in_stack_00000008;
  Vec3_L_double_G local_70;
  undefined1 local_58 [4];
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_28;
  int local_20;
  int local_1c;
  undefined **local_18;
  ItineraryNode *local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  GetAllNodesIncludingPastNode(this);
  util_Darray_struct_ItineraryNode_FindIndex((Darray_L_struct_ItineraryNode_G_ *)&local_18,(undefined1 *)&local_20);
  if ((char)local_1c == '\0') {
    uVar3 = *(undefined4 *)(in_stack_00000008 + 0xb4);
    uVar4 = *(undefined4 *)(in_stack_00000008 + 0xb8);
    uVar5 = *(undefined4 *)(in_stack_00000008 + 0xbc);
    uVar2 = *(undefined8 *)(in_stack_00000008 + 0x70);
    dVar1 = *(double *)(in_stack_00000008 + 0xc0);
    *(undefined4 *)p1 = *(undefined4 *)(in_stack_00000008 + 0xb0);
    *(undefined4 *)(p1 + 4) = uVar3;
    *(undefined4 *)(p1 + 8) = uVar4;
    *(undefined4 *)(p1 + 0xc) = uVar5;
    *(undefined8 *)(p1 + 0x18) = uVar2;
  }
  else {
    local_1c = 0;
    if (-1 < local_20 + -1) {
      local_1c = local_20 + -1;
    }
    p2 = (undefined1 *)(*(code *)*local_18)(&local_1c);
    GetInterpolatedNodeActualStateAndTime
              (this,local_58,p2,
               (double)CONCAT44((int)*(undefined8 *)(in_stack_00000008 + 0x150),in_stack_00000008));
    this_00 = (ReferenceController *)(this->ParentFleet).Controller;
    if (this_00 != (ReferenceController *)0x0) {
      bVar7 = util__ReferenceController__IsDataStillValid(this_00);
      if (!bVar7) {
        (this->ParentFleet).Pointer = (undefined1 *)0x0;
      }
    }
    ((slice_view *)&VVar6.X)->_4_4_ = uStack_50;
    ((slice_view *)&VVar6.X)->_0_4_ = uStack_54;
    ((slice_view *)&VVar6.Y)->_0_4_ = uStack_4c;
    ((slice_view *)&VVar6.Y)->_4_4_ = (int)local_48;
    ((slice_view *)&VVar6.Z)->_0_4_ = (int)((ulonglong)local_48 >> 0x20);
    ((slice_view *)&VVar6.Z)->_4_4_ = (int)local_28;
    pVVar8 = StrategicManager__GetReferenceShiftedPosition_km
                       (*(StrategicManager **)((this->ParentFleet).Pointer + 0x74),&local_70,VVar6,
                        (double)CONCAT44(unaff_EDI,(int)((ulonglong)local_28 >> 0x20)));
    uVar3 = *(undefined4 *)((int)&pVVar8->X + 4);
    uVar4 = *(undefined4 *)&pVVar8->Y;
    uVar5 = *(undefined4 *)((int)&pVVar8->Y + 4);
    dVar1 = pVVar8->Z;
    *(undefined4 *)p1 = *(undefined4 *)&pVVar8->X;
    *(undefined4 *)(p1 + 4) = uVar3;
    *(undefined4 *)(p1 + 8) = uVar4;
    *(undefined4 *)(p1 + 0xc) = uVar5;
    *(undefined8 *)(p1 + 0x18) = local_28;
  }
  local_18 = ((void *)(0x00938a44u));
  *(double *)(p1 + 0x10) = dVar1;
  if (local_14 != (ItineraryNode *)0x0) {
    ItineraryNode___vector_deleting_destructor(local_14,3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return p1;
}


//==== 00007512f0 007512f0_OrbitalInterception__GetTargetOrbit ====
// decompiled by BatchDecomp @ 007512f0 name=GetTargetOrbit conv=__thiscall body=64

/* public: struct FixedOrbit __thiscall OrbitalInterception__GetTargetOrbit(void)const  */

FixedOrbit * __thiscall
OrbitalInterception__GetTargetOrbit(OrbitalInterception *this,FixedOrbit *__return_storage_ptr__)

{
  ReferenceController *this_00;
  bool bVar1;
  undefined4 p1;
  
  p1 = 0;
  this_00 = (ReferenceController *)(this->TargetFleet).Controller;
  if (this_00 != (ReferenceController *)0x0) {
    p1 = 0;
    bVar1 = util__ReferenceController__IsDataStillValid(this_00);
    if (!bVar1) {
      (this->TargetFleet).Pointer = (undefined1 *)0x0;
    }
  }
  Fleet_GetEstimatedOrbit((Fleet *)(this->TargetFleet).Pointer,__return_storage_ptr__,p1);
  return __return_storage_ptr__;
}


//==== 0000756aa0 00756aa0_FUN_00756aa0 ====
// decompiled by BatchDecomp @ 00756aa0 name=FUN_00756aa0 conv=unknown body=348

void FUN_00756aa0(int *param_1,undefined4 *param_2)

{
  undefined4 stack0xfffffffc;
  int *piVar1;
  ReferenceController *this;
  bool bVar2;
  int iVar3;
  int *p1;
  int *piVar4;
  Fleet *pFVar5;
  ReferenceController *this_00;
  undefined8 local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar3 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
  if (local_c < iVar3) {
    do {
      p1 = (int *)(**(code **)*param_1)(&local_c);
      if ((*p1 == 0) || (p1[1] == 0)) {
        util__LogEnsure("\\mac\\home\\documents\\code\\cde\\cde\\strategic\\strategicmanager.cpp",
                        0x325,"b.IsValid()",(char *)0x0);
      }
      local_14 = local_14 & 0xffffffff;
      piVar1 = (int *)*param_2;
      iVar3 = (**(code **)(*(int *)(uintptr_t)piVar1 + 0xc))();
      if ((int)((slice_view *)&local_14)->_4_4_ < iVar3) {
        do {
          piVar4 = (int *)(**(code **)*piVar1)((int)&local_14 + 4);
          if ((*piVar4 != 0) && ((ReferenceController *)piVar4[1] != (ReferenceController *)0x0)) {
            bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]);
            if (bVar2) {
              if ((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) {
                bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]);
                if (!bVar2) {
                  *piVar4 = 0;
                }
              }
              bVar2 = Fleet_HasAShip((Fleet *)*piVar4,(undefined1 *)p1);
              if (bVar2) goto LAB_00756bd5;
            }
          }
          local_14 = CONCAT44((int)((slice_view *)&local_14)->_4_4_ + 1,(Fleet *)local_14);
          iVar3 = (**(code **)(*(int *)(uintptr_t)piVar1 + 0xc))();
        } while ((int)((slice_view *)&local_14)->_4_4_ < iVar3);
      }
      local_14 = 0;
      FUN_00759a80(&local_14,*param_2,p1);
      pFVar5 = (Fleet *)local_14;
      this = ((slice_view *)&local_14)->_4_4_;
      if ((Fleet *)local_14 == (Fleet *)0x0) {
LAB_00756bca:
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this);
        }
      }
      else if (((slice_view *)&local_14)->_4_4_ != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid(((slice_view *)&local_14)->_4_4_);
        if (bVar2) {
          iVar3 = *p1;
          this_00 = (ReferenceController *)p1[1];
          if (this_00 != (ReferenceController *)0x0) {
            util__ReferenceController__AddStrongReference(this_00);
          }
          bVar2 = util__ReferenceController__IsDataStillValid(this);
          if (!bVar2) {
            pFVar5 = (Fleet *)0x0;
          }
          Fleet__AddShip(pFVar5,iVar3,this_00);
        }
        goto LAB_00756bca;
      }
LAB_00756bd5:
      local_c = local_c + 1;
      iVar3 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000758630 00758630_FUN_00758630 ====
// decompiled by BatchDecomp @ 00758630 name=FUN_00758630 conv=unknown body=394

void FUN_00758630(int *param_1,undefined4 param_2,Darray_L_util__Reflectable_P_G_ *param_3)

{
  undefined4 stack0xfffffffc;
  Body *pBVar1;
  ReferenceController *pRVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
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
         (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]),
         !bVar3)) {
        *piVar5 = 0;
      }
      iVar4 = *piVar5;
      if ((*(ReferenceController **)(iVar4 + 8) != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar4 + 8)),
         !bVar3)) {
        *(undefined4 *)(iVar4 + 4) = 0;
      }
      pBVar1 = *(Body **)(iVar4 + 4);
      FUN_007acb10(pBVar1);
      if ((char)(pBVar1->GetCapitalShipComponent_MemoizedValue).IsValidData == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      if ((((pBVar1->GetCapitalShipComponent_MemoizedValue).Data.Pointer != (undefined1 *)0x0) &&
          (pRVar2 = (ReferenceController *)
                    (pBVar1->GetCapitalShipComponent_MemoizedValue).Data.Controller,
          pRVar2 != (ReferenceController *)0x0)) &&
         (bVar3 = util__ReferenceController__IsDataStillValid(pRVar2), bVar3)) {
        if (((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) &&
           (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]),
           !bVar3)) {
          *piVar5 = 0;
        }
        iVar4 = *piVar5;
        if ((*(ReferenceController **)(iVar4 + 8) != (ReferenceController *)0x0) &&
           (bVar3 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar4 + 8)), !bVar3)) {
          *(undefined4 *)(iVar4 + 4) = 0;
        }
        pBVar1 = *(Body **)(iVar4 + 4);
        FUN_007acb10(pBVar1);
        if ((char)(pBVar1->GetCapitalShipComponent_MemoizedValue).IsValidData == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        pRVar2 = (ReferenceController *)
                 (pBVar1->GetCapitalShipComponent_MemoizedValue).Data.Controller;
        if ((pRVar2 != (ReferenceController *)0x0) &&
           (bVar3 = util__ReferenceController__IsDataStillValid(pRVar2), !bVar3)) {
          (pBVar1->GetCapitalShipComponent_MemoizedValue).Data.Pointer = (undefined1 *)0x0;
        }
        uVar6 = CapitalShipComponent__GetID
                          ((CapitalShipComponent *)
                           (pBVar1->GetCapitalShipComponent_MemoizedValue).Data.Pointer);
        iVar4 = *(int *)(param_3 + 8);
        local_10 = iVar4 + 1;
        util__Darray_class_util__Reflectable____SetSize(param_3,&local_10);
        bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)param_3,iVar4);
        if (bVar3) {
          *(uint *)(*(int *)(param_3 + 4) + -4 + *(int *)(param_3 + 8) * 4) = uVar6;
        }
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
    } while (local_c < iVar4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000768430 00768430_util__Darray_struct_WorldObject___Last ====
// decompiled by BatchDecomp @ 00768430 name=Last conv=__thiscall body=59

/* public: virtual struct WorldObject const & __thiscall util__Darray_L_struct____WorldObject_G___Last(void)const  */

undefined1 * __thiscall util__Darray_L_struct_WorldObject_G___Last(Darray_L_struct_WorldObject_G_ *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3d,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = *(int *)(this + 8);
  }
  return (undefined1 *)(*(int *)(this + 4) + -0x2b8 + iVar1 * 0x2b8);
}


//==== 0000770af0 00770af0_ActorDropdown__ActorDropdown ====
// decompiled by BatchDecomp @ 00770af0 name=ActorDropdown conv=__thiscall body=46

/* public: __thiscall ActorDropdown__ActorDropdown(class StrategicManager *,class
   util__Delegate_L_void_CActorDropdownAction_G_,enum ActorDropdown__MarkedAsSelected) */

void __thiscall
ActorDropdown__ActorDropdown(ActorDropdown *this,undefined1 *p1,int p2,undefined1 **p3)

{
  int in_stack_00000010;
  
  this->ParentManager = p1;
  (this->Action).Callee = p2;
  (this->Action).CallbackFunction = p3;
  (this->Popup).Pointer = (undefined1 *)0x0;
  (this->Popup).Controller = (undefined1 *)0x0;
  this->Marking = in_stack_00000010;
  return;
}


//==== 0000778a00 00778a00_util__Darray_struct_ActorDropdownAction___Last ====
// decompiled by BatchDecomp @ 00778a00 name=Last conv=__thiscall body=59

/* public: virtual struct ActorDropdownAction const & __thiscall util__Darray_L_struct____ActorDropdownAction_G___Last(void)const  */

undefined1 * __thiscall
util__Darray_L_struct_ActorDropdownAction_G___Last(Darray_L_struct_ActorDropdownAction_G_ *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3d,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = *(int *)(this + 8);
  }
  return (undefined1 *)(*(int *)(this + 4) + -0x2c8 + iVar1 * 0x2c8);
}


//==== 0000779a40 00779a40_FUN_00779a40 ====
// decompiled by BatchDecomp @ 00779a40 name=FUN_00779a40 conv=unknown body=615

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_00779a40(ItineraryNode *param_1,undefined4 param_2)

{
  undefined4 stack0x0000000c;
  undefined4 stack0xfffffffc;
  ReferenceController *this;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  ItineraryNode *pIVar5;
  ItineraryNode local_5a8;
  uint local_458;
  ReferenceController *local_454;
  int local_450;
  undefined1 local_448 [16];
  ItineraryNode local_438;
  uint local_2e8;
  ReferenceController *local_2e4;
  undefined1 local_2e0 [16];
  undefined1 local_2d0 [328];
  int local_188;
  undefined8 local_180;
  ReferenceController *local_17c;
  undefined1 *local_178;
  ItineraryNode *pIStack_174;
  int local_16c;
  ItineraryNode local_168;
  uint local_18;
  ReferenceController *local_14;
  char local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_16c = 0;
  ItineraryNode__ItineraryNode((ItineraryNode *)&local_168);
  local_178 = &stack0x0000000c;
  local_18 = 0;
  pIStack_174 = &local_168;
  local_14 = (ReferenceController *)0x0;
  local_10 = '\0';
  local_16c = 0;
  FUN_00779cb0(param_2,CONCAT44(pIStack_174,local_178),&local_16c);
  if (local_10 == '\0') {
    ItineraryNode__ItineraryNode((ItineraryNode *)local_448);
    ((slice_view *)&local_438.CachedNearestOrbitParametricCoord.Data)->_0_4_ = 0;
    pIVar5 = (ItineraryNode *)local_448;
    ((slice_view *)&local_438.CachedNearestOrbitParametricCoord.Data)->_4_4_ = 0;
    bVar3 = false;
    bVar2 = false;
    bVar1 = true;
    ((slice_view *)&local_438.CachedNearestOrbitParametricCoord)->_8_4_ = 0;
    local_2e8 = local_2e8 & 0xffffff00;
  }
  else {
    ItineraryNode__ItineraryNode((ItineraryNode *)(local_448 + 0x10),&local_168);
    local_2e8 = local_18;
    local_2e4 = local_14;
    if (local_14 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(local_14);
    }
    iVar4 = local_16c;
    ItineraryNode__ItineraryNode((ItineraryNode *)local_2d0,(ItineraryNode *)(local_448 + 0x10));
    local_180 = local_2e8;
    local_17c = local_2e4;
    if (local_2e4 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(local_2e4);
    }
    ItineraryNode__ItineraryNode((ItineraryNode *)&local_5a8,(ItineraryNode *)local_2d0);
    local_458 = local_180;
    local_454 = local_17c;
    if (local_17c != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(local_17c);
    }
    local_450 = iVar4;
    util__tuple2_struct_ItineraryNode_class_util__WeakPtr_struct_UIWidget______tuple2_struct_ItineraryNode_class_util__WeakPtr_struct_UIWidget((tuple2_L_struct_ItineraryNode_Cclass_util__WeakPtr_L_struct_UIWidget_G___G_ *)local_2d0);
    util__tuple2_struct_ItineraryNode_class_util__WeakPtr_struct_UIWidget______tuple2_struct_ItineraryNode_class_util__WeakPtr_struct_UIWidget((tuple2_L_struct_ItineraryNode_Cclass_util__WeakPtr_L_struct_UIWidget_G___G_ *)
               (local_448 + 0x10));
    ItineraryNode__ItineraryNode((ItineraryNode *)local_2e0,&local_5a8);
    ((slice_view *)&local_2d0)->_320_4_ = local_458;
    ((slice_view *)&local_2d0)->_324_4_ = local_454;
    if (local_454 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(local_454);
    }
    pIVar5 = (ItineraryNode *)local_2e0;
    local_188 = local_450;
    bVar3 = true;
    bVar2 = true;
    bVar1 = false;
    ((slice_view *)&local_180)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&local_180)->_1_3_[0] | (((slice_view *)&local_180)->_1_3_[1] << 8) | (((slice_view *)&local_180)->_1_3_[2] << 16)) << 8));
  }
  ItineraryNode__ItineraryNode(param_1,pIVar5);
  this = pIVar5[1].Parent.Controller;
  param_1[1].Parent.Pointer = (undefined1 *)pIVar5[1].Parent.Pointer;
  param_1[1].Parent.Controller = (undefined1 *)this;
  if (this != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this);
  }
  *(undefined4 *)&param_1[1].LastState.Position.X = *(undefined4 *)&pIVar5[1].LastState.Position.X;
  *(undefined1 *)&param_1[1].LastState.Position.Y = *(undefined1 *)&pIVar5[1].LastState.Position.Y;
  if (bVar1) {
    util__tuple2_struct_ItineraryNode_class_util__WeakPtr_struct_UIWidget______tuple2_struct_ItineraryNode_class_util__WeakPtr_struct_UIWidget((tuple2_L_struct_ItineraryNode_Cclass_util__WeakPtr_L_struct_UIWidget_G___G_ *)local_448);
  }
  if (bVar2) {
    util__tuple2_struct_ItineraryNode_class_util__WeakPtr_struct_UIWidget______tuple2_struct_ItineraryNode_class_util__WeakPtr_struct_UIWidget((tuple2_L_struct_ItineraryNode_Cclass_util__WeakPtr_L_struct_UIWidget_G___G_ *)local_2e0);
  }
  if (bVar3) {
    util__tuple2_struct_ItineraryNode_class_util__WeakPtr_struct_UIWidget______tuple2_struct_ItineraryNode_class_util__WeakPtr_struct_UIWidget((tuple2_L_struct_ItineraryNode_Cclass_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_5a8);
  }
  util__tuple2_struct_ItineraryNode_class_util__WeakPtr_struct_UIWidget______tuple2_struct_ItineraryNode_class_util__WeakPtr_struct_UIWidget((tuple2_L_struct_ItineraryNode_Cclass_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_168);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000782050 00782050_HUDItineraryInfoPanel__GetMission ====
// decompiled by BatchDecomp @ 00782050 name=GetMission conv=__thiscall body=215

/* private: class util__Maybe_L_Itinerary_G_ __thiscall
   HUDItineraryInfoPanel__GetMission(void)const  */

util__Maybe_L_Itinerary_G_ * __thiscall
HUDItineraryInfoPanel__GetMission
          (HUDItineraryInfoPanel *this,util__Maybe_L_Itinerary_G_ *__return_storage_ptr__)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int *p1;
  undefined3 extraout_var;
  undefined4 *puVar4;
  Itinerary local_544 [2];
  Itinerary local_2ac [2];
  ReferenceController *local_10;
  ReferenceController *local_8;
  
  local_8 = (ReferenceController *)0x0;
  p1 = (int *)GetSelectedFleet(this);
  if ((*p1 != 0) && ((ReferenceController *)p1[1] != (ReferenceController *)0x0)) {
    bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)p1[1]);
    p1 = (int *)CONCAT31(extraout_var,bVar3);
    if (bVar3) {
      puVar4 = (undefined4 *)GetSelectedFleet(this);
      if ((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) {
        bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]);
        if (!bVar3) {
          *puVar4 = 0;
        }
      }
      p1 = (int *)Fleet_GetMissionItinerary((Fleet *)*puVar4);
      util_Maybe_struct_Itinerary_Maybe_struct_Itinerary((Maybe_L_struct_Itinerary_G *)local_544,(undefined1 *)p1);
      bVar2 = true;
      bVar1 = true;
      bVar3 = false;
      goto LAB_007820cf;
    }
  }
  util_Maybe_struct_Itinerary_Maybe_struct_Itinerary__o2((Maybe_L_struct_Itinerary_G *)local_2ac);
  bVar2 = false;
  bVar1 = false;
  bVar3 = true;
LAB_007820cf:
  util_Maybe_struct_Itinerary_Maybe_struct_Itinerary((Maybe_L_struct_Itinerary_G *)__return_storage_ptr__,(undefined1 *)p1);
  if (bVar3) {
    Itinerary_Itinerary__o3(local_2ac);
  }
  if (bVar1) {
    Itinerary_Itinerary__o3(local_544);
  }
  if ((local_8 != (ReferenceController *)0x0) && (bVar2)) {
    util__ReferenceController__ReleaseWeakReference(local_8);
  }
  if (local_10 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_10);
  }
  return __return_storage_ptr__;
}


//==== 0000784410 00784410_HUDItineraryInfoPanel__IsItineraryStatusBarVisible ====
// decompiled by BatchDecomp @ 00784410 name=IsItineraryStatusBarVisible conv=__thiscall body=153

/* WARNING: Removing unreachable block (ram,0x00784489) */
/* WARNING: Removing unreachable block (ram,0x0078448e) */
/* private: bool __thiscall HUDItineraryInfoPanel__IsItineraryStatusBarVisible(void)const  */

bool __thiscall HUDItineraryInfoPanel__IsItineraryStatusBarVisible(HUDItineraryInfoPanel *this)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  ReferenceController *local_10;
  
  piVar2 = (int *)GetSelectedFleet(this);
  if (((*piVar2 != 0) && ((ReferenceController *)piVar2[1] != (ReferenceController *)0x0)) &&
     (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar2[1]), bVar1))
  {
    puVar3 = (undefined4 *)GetSelectedFleet(this);
    if (((ReferenceController *)puVar3[1] != (ReferenceController *)0x0) &&
       (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar3[1]),
       !bVar1)) {
      *puVar3 = 0;
    }
    puVar4 = Fleet_GetMissionItinerary((Fleet *)*puVar3);
    if (puVar4[0x290] != '\0') {
      bVar1 = true;
      goto LAB_00784482;
    }
  }
  bVar1 = false;
LAB_00784482:
  if (local_10 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_10);
  }
  return bVar1;
}


//==== 0000784950 00784950_UIListBox_struct_ItineraryNode___OnChangedSearchString ====
// decompiled by BatchDecomp @ 00784950 name=OnChangedSearchString conv=__thiscall body=145

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: void __thiscall UIListBox_struct_ItineraryNode___OnChangedSearchString(void) */

void __thiscall
UIListBox_struct_ItineraryNode___OnChangedSearchString(UIListBox_L_struct_ItineraryNode_G_ *this)

{
  undefined4 stack0xfffffd4c;
  undefined4 stack0xfffffffc;
  undefined1 *in_stack_fffffd4c;
  undefined1 local_160 [244];
  ReferenceController *local_6c;
  ReferenceController *local_64;
  ReferenceController *local_5c;
  ReferenceController *local_34;
  char local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  GetSearchedValue(this,(util__Maybe_L_ItineraryNode_G_ *)local_160);
  if (local_10 != '\0') {
    ItineraryNode__ItineraryNode((ItineraryNode *)&stack0xfffffd4c,(ItineraryNode *)local_160);
    ScrollToDatum(this,in_stack_fffffd4c);
  }
  if (local_34 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_34);
  }
  if (local_5c != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_5c);
  }
  if (local_64 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_64);
  }
  if (local_6c != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_6c);
  }
  if ((ReferenceController *)((slice_view *)&local_160)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)((slice_view *)&local_160)->_4_4_);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007849f0 007849f0_UIListBox_struct_ItineraryNode___OnCommitSearchString ====
// decompiled by BatchDecomp @ 007849f0 name=OnCommitSearchString conv=__thiscall body=334

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: void __thiscall UIListBox_struct_ItineraryNode___OnCommitSearchString(bool) */

void __thiscall
UIListBox_struct_ItineraryNode___OnCommitSearchString(UIListBox_L_struct_ItineraryNode_G_ *this,bool p1)

{
  undefined4 stack0xfffffd48;
  undefined4 stack0xfffffffc;
  bool bVar1;
  char cVar2;
  undefined1 *in_stack_fffffd48;
  undefined1 local_160 [244];
  ReferenceController *local_6c;
  ReferenceController *local_64;
  ReferenceController *local_5c;
  ReferenceController *local_34;
  char local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x1d8) != 0) {
    GetSearchedValue(this,(util__Maybe_L_ItineraryNode_G_ *)local_160);
    cVar2 = local_10;
    if ((p1) && (*(undefined1 **)(this + 0x1d0) != (undefined1 *)0x0)) {
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
          ItineraryNode__ItineraryNode((ItineraryNode *)&stack0xfffffd48,(ItineraryNode *)local_160)
          ;
          ScrollToDatum(this,in_stack_fffffd48);
          cVar2 = local_10;
        }
      }
      if (p1) {
        if (cVar2 == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        ItineraryNode__ItineraryNode((ItineraryNode *)&stack0xfffffd48,(ItineraryNode *)local_160);
        TriggerOnSelect(this,in_stack_fffffd48);
      }
    }
    if (local_34 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_34);
    }
    if (local_5c != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_5c);
    }
    if (local_64 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_64);
    }
    if (local_6c != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_6c);
    }
    if ((ReferenceController *)((slice_view *)&local_160)->_4_4_ != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference((ReferenceController *)((slice_view *)&local_160)->_4_4_);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000790220 00790220_ItineraryMarker__GetCoreRadius ====
// decompiled by BatchDecomp @ 00790220 name=GetCoreRadius conv=__thiscall body=206

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: double __thiscall ItineraryMarker__GetCoreRadius(void)const  */

double __thiscall ItineraryMarker__GetCoreRadius(ItineraryMarker *this)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  Interface *this_00;
  double dVar4;
  double local_14;
  double local_c;
  
  this_00 = UIWidget__GetInterfacer((UIWidget *)this);
  dVar4 = Interface__GetUITime_s((Interface *)this_00);
  local_14 = dVar4 * __real_3fe0000000000000 * __real_401921fb54442d18;
  dVar4 = util__Cos(&local_14);
  iVar1 = this->MarkerType;
  local_14 = (dVar4 + __real_3ff0000000000000) * __real_3fe0000000000000;
  local_c = (__real_3ff0000000000000 - local_14) * __real_3fe999999999999a +
            local_14 * __real_3ff3333333333333;
  if (((iVar1 == 1) || (iVar1 == 2)) || (iVar1 == 3)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  bVar3 = UIWidget__IsHovered((UIWidget *)this);
  if (bVar3) {
    local_14 = __real_3ff0000000000000;
  }
  else {
    local_14 = __real_3fe999999999999a;
  }
  dVar4 = __real_3ff0000000000000;
  if (bVar2) {
    dVar4 = local_c;
  }
  return dVar4 * local_14;
}


//==== 0000793cb0 00793cb0_ItineraryMarker__GetTag ====
// decompiled by BatchDecomp @ 00793cb0 name=GetTag conv=unknown body=606

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static class Str_L_char_G_ __cdecl ItineraryMarker__GetTag(enum
   ItineraryMarker__Type,struct ItineraryNode const &) */

util__Str_L_char_G_ *
ItineraryMarker__GetTag(util__Str_L_char_G_ *__return_storage_ptr__,int p0,undefined1 *p1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  Str_L_char_G_ *pSVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char *pcVar10;
  Str_L_char_G local_50;
  Str_L_char_G local_44;
  void *local_38 [3];
  void *local_2c [3];
  Str_L_char_G local_20;
  Str_L_char_G local_14;
  undefined4 local_8;
  
  bVar6 = false;
  local_8 = 0;
  bVar5 = ItineraryNode__IsValid((ItineraryNode *)p1);
  if (!bVar5) {
    pSVar7 = (Str_L_char_G_ *)util__Str_char___Str_char__o5(&local_50,"");
    bVar4 = true;
    bVar3 = false;
    bVar5 = false;
    bVar6 = false;
    bVar2 = false;
    bVar1 = false;
    goto LAB_00793e4a;
  }
  if (p0 == 0) {
    pSVar7 = (Str_L_char_G_ *)util__Str_char___Str_char__o5(&local_44,"Trajectory");
    bVar3 = true;
    bVar5 = false;
    bVar6 = false;
    bVar2 = false;
  }
  else {
    if (p0 == 1) {
      if ((*(int *)(p1 + 0x128) == 0) ||
         (*(ReferenceController **)(p1 + 300) == (ReferenceController *)0x0)) {
LAB_00793dd7:
        pcVar10 = "";
        goto LAB_00793ddc;
      }
      bVar5 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(p1 + 300));
      if (!bVar5) goto LAB_00793dd7;
      if (*(ReferenceController **)(p1 + 300) != (ReferenceController *)0x0) {
        bVar6 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(p1 + 300));
        if (!bVar6) {
          *(undefined4 *)(p1 + 0x128) = 0;
        }
      }
      puVar8 = (undefined4 *)(**(code **)(**(int **)(p1 + 0x128) + 0xc))(local_38);
      if ((int)puVar8[1] < 1) {
        pcVar10 = "";
        bVar5 = true;
        bVar6 = false;
        pcVar9 = "MarkOrbit";
      }
      else {
        pcVar10 = (char *)*puVar8;
        bVar5 = true;
        bVar6 = false;
        pcVar9 = "MarkOrbit";
      }
    }
    else {
      if ((p0 != 2) && (p0 != 3)) goto LAB_00793dd7;
      bVar5 = ItineraryNode__IsNearestFleetAFlyby((ItineraryNode *)p1);
      if (!bVar5) goto LAB_00793dd7;
      if (*(ReferenceController **)(p1 + 0x104) != (ReferenceController *)0x0) {
        bVar6 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(p1 + 0x104));
        if (!bVar6) {
          *(undefined4 *)(p1 + 0x100) = 0;
        }
      }
      puVar8 = (undefined4 *)(**(code **)(*(int *)(*(int *)(p1 + 0x100) + 8) + 0xc))(local_2c);
      if ((int)puVar8[1] < 1) {
        pcVar10 = "";
        bVar6 = true;
      }
      else {
        pcVar10 = (char *)*puVar8;
        bVar6 = true;
      }
LAB_00793ddc:
      bVar5 = false;
      if (p0 == 1) {
        pcVar9 = "MarkOrbit";
      }
      else if (p0 == 2) {
        pcVar9 = "MarkIntercept";
      }
      else if (p0 == 3) {
        pcVar9 = "MarkFlyby";
      }
      else if (p0 == 4) {
        pcVar9 = "OrbitalNode";
      }
      else if (p0 == 5) {
        pcVar9 = "Periapsis";
      }
      else {
        pcVar9 = "Apoapsis";
        if (p0 != 6) {
          pcVar9 = "";
        }
      }
    }
    bVar3 = false;
    bVar2 = true;
    pSVar7 = util__Printf__o3(&local_20,"%s-%s",pcVar9,pcVar10);
  }
  bVar4 = false;
  bVar1 = true;
  pSVar7 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_14,pSVar7);
LAB_00793e4a:
  util__Str_char___Str_char((Str_L_char_G_ *)__return_storage_ptr__,pSVar7);
  if (bVar1) {
    if (local_14.Data != (char *)0x0) {
      operator_delete__(local_14.Data);
      local_14.Data = (char *)0x0;
    }
  }
  if (bVar2) {
    if (local_20.Data != (char *)0x0) {
      operator_delete__(local_20.Data);
      local_20.Data = (char *)0x0;
    }
  }
  if (bVar6) {
    if (local_2c[0] != (void *)0x0) {
      operator_delete__(local_2c[0]);
      local_2c[0] = (void *)0x0;
    }
  }
  if (bVar5) {
    if (local_38[0] != (void *)0x0) {
      operator_delete__(local_38[0]);
      local_38[0] = (void *)0x0;
    }
  }
  if (bVar3) {
    if (local_44.Data != (char *)0x0) {
      operator_delete__(local_44.Data);
      local_44.Data = (char *)0x0;
    }
  }
  if ((local_50.Data != (char *)0x0) && (bVar4)) {
    operator_delete__(local_50.Data);
  }
  return __return_storage_ptr__;
}


//==== 000079c800 0079c800_OrbitDirectionArrow__GetLocation_km ====
// decompiled by BatchDecomp @ 0079c800 name=GetLocation_km conv=__thiscall body=446

/* private: struct Vec3_L_double_G_ __thiscall OrbitDirectionArrow__GetLocation_km(void)const  */

util__Vec3_L_double_G_ * __thiscall
OrbitDirectionArrow__GetLocation_km
          (OrbitDirectionArrow *this,util__Vec3_L_double_G_ *__return_storage_ptr__)

{
  char cVar1;
  ReferenceController *pRVar2;
  undefined1 *puVar3;
  OrbitUI *pOVar4;
  bool bVar5;
  int iVar6;
  undefined4 *puVar7;
  double dVar8;
  LibrationOrbit local_1f4;
  undefined1 local_9c [48];
  undefined1 local_6c [48];
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if (((this->ParentOrbit).Pointer != (undefined1 *)0x0) &&
     (pRVar2 = (ReferenceController *)(this->ParentOrbit).Controller,
     pRVar2 != (ReferenceController *)0x0)) {
    bVar5 = util__ReferenceController__IsDataStillValid(pRVar2);
    if (bVar5) {
      pRVar2 = (ReferenceController *)(this->ParentOrbit).Controller;
      if (pRVar2 != (ReferenceController *)0x0) {
        bVar5 = util__ReferenceController__IsDataStillValid(pRVar2);
        if (!bVar5) {
          (this->ParentOrbit).Pointer = (undefined1 *)0x0;
        }
      }
      puVar3 = (this->ParentOrbit).Pointer;
      if (*(ReferenceController **)(puVar3 + 0x16c) != (ReferenceController *)0x0) {
        bVar5 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(puVar3 + 0x16c));
        if (!bVar5) {
          *(undefined4 *)(puVar3 + 0x168) = 0;
        }
      }
      iVar6 = (**(code **)(**(int **)(puVar3 + 0x168) + 4))(&local_1f4);
      cVar1 = *(char *)(iVar6 + 0x150);
      LibrationOrbit_LibrationOrbit__o2(&local_1f4);
      pRVar2 = (ReferenceController *)(this->ParentOrbit).Controller;
      if (cVar1 == '\0') {
        if (pRVar2 != (ReferenceController *)0x0) {
          bVar5 = util__ReferenceController__IsDataStillValid(pRVar2);
          if (!bVar5) {
            (this->ParentOrbit).Pointer = (undefined1 *)0x0;
          }
        }
        pOVar4 = (OrbitUI *)(this->ParentOrbit).Pointer;
        dVar8 = GetArrowTime_s(this);
        puVar7 = (undefined4 *)
                 OrbitUI_GetPointAndTangent_km(pOVar4,(double)CONCAT44(SUB84(dVar8,0),local_9c));
      }
      else {
        if (pRVar2 != (ReferenceController *)0x0) {
          bVar5 = util__ReferenceController__IsDataStillValid(pRVar2);
          if (!bVar5) {
            (this->ParentOrbit).Pointer = (undefined1 *)0x0;
          }
        }
        pOVar4 = (OrbitUI *)(this->ParentOrbit).Pointer;
        dVar8 = GetArrowTime_s(this);
        puVar7 = (undefined4 *)
                 OrbitUI_GetLagrangePointAndTangent_km(pOVar4,(double)CONCAT44(SUB84(dVar8,0),local_6c));
      }
      local_3c = *puVar7;
      uStack_38 = puVar7[1];
      uStack_34 = puVar7[2];
      uStack_30 = puVar7[3];
      pRVar2 = (ReferenceController *)(this->ParentOrbit).Controller;
      local_2c = puVar7[4];
      uStack_28 = puVar7[5];
      uStack_24 = puVar7[6];
      uStack_20 = puVar7[7];
      local_1c = puVar7[8];
      uStack_18 = puVar7[9];
      uStack_14 = puVar7[10];
      uStack_10 = puVar7[0xb];
      if (pRVar2 != (ReferenceController *)0x0) {
        bVar5 = util__ReferenceController__IsDataStillValid(pRVar2);
        if (!bVar5) {
          (this->ParentOrbit).Pointer = (undefined1 *)0x0;
        }
      }
      dVar8 = OrbitUI__GetArrowSize_km((OrbitUI *)(this->ParentOrbit).Pointer);
      dVar8 = dVar8 * __real_3fe0000000000000;
      __return_storage_ptr__->X =
           (double)CONCAT44(uStack_38,local_3c) - dVar8 * (double)CONCAT44(uStack_20,uStack_24);
      __return_storage_ptr__->Y =
           (double)CONCAT44(uStack_30,uStack_34) - dVar8 * (double)CONCAT44(uStack_18,local_1c);
      __return_storage_ptr__->Z =
           (double)CONCAT44(uStack_28,local_2c) - dVar8 * (double)CONCAT44(uStack_10,uStack_14);
      return __return_storage_ptr__;
    }
  }
  *(undefined4 *)&__return_storage_ptr__->X = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = 0;
  *(undefined4 *)&__return_storage_ptr__->Y = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = 0;
  __return_storage_ptr__->Z = 0.0;
  return __return_storage_ptr__;
}


//==== 00007b51c0 007b51c0_Body__InflictImpulse ====
// decompiled by BatchDecomp @ 007b51c0 name=InflictImpulse conv=__thiscall body=131

/* public: void __thiscall Body__InflictImpulse(struct Vec3_L_double_G_,struct Vec3_L_double_G_)
    */

void __thiscall Body__InflictImpulse(Body *this,undefined4 p1,undefined4 p2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  bool bVar4;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined8 in_stack_00000014;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined8 in_stack_0000002c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int local_8;
  
  iVar2 = (this->PendingImpulses).Size;
  local_8 = iVar2 + 1;
  util__Darray_struct_util__AABB_struct_util__Vec3_double_______SetSize((Darray_L_util__AABB_L_util__Vec3_L_double_G___G___G *)&this->PendingImpulses,
             &local_8);
  bVar4 = util__Darray_struct_util__AABB_struct_util__Vec3_double_______CheckSize((Darray_L_util__AABB_L_util__Vec3_L_double_G___G___G *)
                     &this->PendingImpulses,iVar2);
  if (bVar4) {
    iVar2 = (this->PendingImpulses).Size;
    puVar3 = (this->PendingImpulses).Data;
    puVar1 = (undefined4 *)(puVar3 + iVar2 * 0x30 + -0x30);
    *puVar1 = p1;
    puVar1[1] = p2;
    puVar1[2] = in_stack_0000000c;
    puVar1[3] = in_stack_00000010;
    local_38 = (undefined4)in_stack_00000014;
    uStack_34 = *(undefined4 *)((char *)&in_stack_00000014 + 4);
    puVar1 = (undefined4 *)(puVar3 + iVar2 * 0x30 + -0x20);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = in_stack_0000001c;
    puVar1[3] = in_stack_00000020;
    uStack_20 = (undefined4)in_stack_0000002c;
    uStack_1c = *(undefined4 *)((char *)&in_stack_0000002c + 4);
    puVar1 = (undefined4 *)(puVar3 + iVar2 * 0x30 + -0x10);
    *puVar1 = in_stack_00000024;
    puVar1[1] = in_stack_00000028;
    puVar1[2] = uStack_20;
    puVar1[3] = uStack_1c;
  }
  return;
}


//==== 00007c5970 007c5970_PhotonPacketComponent__GetFluence_J__m2 ====
// decompiled by BatchDecomp @ 007c5970 name=GetFluence_J__m2 conv=__thiscall body=206

/* public: double __thiscall PhotonPacketComponent__GetFluence_J__m2(struct Vec3_L_double_G_)const
    */

double __thiscall PhotonPacketComponent__GetFluence_J__m2(PhotonPacketComponent *this,undefined4 p1)

{
  int iVar1;
  Maybe_L_double_G_ *pMVar2;
  float10 fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 in_stack_00000008;
  double in_stack_0000000c;
  double in_stack_00000014;
  Maybe_L_double_G local_20;
  undefined1 **local_10;
  double local_c;
  
  dVar6 = (this->EmitPosition_km).Y - in_stack_0000000c;
  dVar5 = (this->EmitPosition_km).X - (double)CONCAT44(in_stack_00000008,p1);
  dVar4 = (this->EmitPosition_km).Z - in_stack_00000014;
  local_c = dVar6 * dVar6 + dVar5 * dVar5 + dVar4 * dVar4;
  pMVar2 = util__Sqrt(&local_20,&local_c);
  if (pMVar2->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->RadiusGetter_m).Callee;
  if ((iVar1 == 0) ||
     (local_10 = (this->RadiusGetter_m).CallbackFunction, local_10 == (undefined1 **)0x0)) {
    dVar4 = 0.0;
  }
  else {
    fVar3 = (float10)(*(code *)local_10)(iVar1,pMVar2->Data);
    dVar4 = (double)fVar3;
  }
  return this->Energy_J / (dVar4 * __real_400921fb54442d18 * dVar4);
}


//==== 00007c5e20 007c5e20_PhotonPacketComponent__GetRadius_m ====
// decompiled by BatchDecomp @ 007c5e20 name=GetRadius_m conv=__thiscall body=180

/* public: double __thiscall PhotonPacketComponent__GetRadius_m(struct Vec3_L_double_G_)const  */

double __thiscall PhotonPacketComponent__GetRadius_m(PhotonPacketComponent *this,undefined4 p1)

{
  int iVar1;
  Maybe_L_double_G_ *pMVar2;
  float10 fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 in_stack_00000008;
  double in_stack_0000000c;
  double in_stack_00000014;
  Maybe_L_double_G local_20;
  double local_10;
  undefined1 **local_8;
  
  dVar6 = (this->EmitPosition_km).Y - in_stack_0000000c;
  dVar5 = (this->EmitPosition_km).X - (double)CONCAT44(in_stack_00000008,p1);
  dVar4 = (this->EmitPosition_km).Z - in_stack_00000014;
  local_10 = dVar6 * dVar6 + dVar5 * dVar5 + dVar4 * dVar4;
  pMVar2 = util__Sqrt(&local_20,&local_10);
  if (pMVar2->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->RadiusGetter_m).Callee;
  if ((iVar1 != 0) &&
     (local_8 = (this->RadiusGetter_m).CallbackFunction, local_8 != (undefined1 **)0x0)) {
    fVar3 = (float10)(*(code *)local_8)(iVar1,pMVar2->Data);
    return (double)fVar3;
  }
  return 0.0;
}


//==== 00007c95d0 007c95d0_FUN_007c95d0 ====
// decompiled by BatchDecomp @ 007c95d0 name=FUN_007c95d0 conv=unknown body=346

void FUN_007c95d0(Darray_L_util__Reflectable_P_G_ *param_1,int *param_2)

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
      iVar1 = *(int *)(*(int *)(*(int *)(uintptr_t)piVar5 + 0x118) + 8);
      piVar6 = *(int **)(param_1 + 4);
      piVar5 = piVar6 + iVar7;
      for (; piVar6 != piVar5; piVar6 = piVar6 + 1) {
        if (*piVar6 == iVar1) goto LAB_007c9704;
      }
      local_10 = iVar7 + 1;
      util__Darray_class_util__Reflectable____SetSize(param_1,&local_10);
      bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)param_1,iVar7);
      if (bVar2) {
        *(int *)(*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 4) = iVar1;
      }
LAB_007c9704:
      local_c = local_c + 1;
      iVar7 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
    } while ((int)local_c < iVar7);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

