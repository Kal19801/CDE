// pilot_039_fam7.c - SpacecraftTargeting/ModuleCompartment/WorldObject/CameraManager/UIWidget (127 methods)
// assembled by scripts/fam7_assemble.py (generalized from fam4) from decomp2c v2 output.
// Honest TODOs inline; fix log: reports/poison_fix/fam7_pilot039_log.txt
#include "port_prelude.h"
typedef union {
  struct {
    undefined8 _0_8_;
    undefined8 _4_8_;
    undefined8 _8_8_;
    undefined8 _12_8_;
    undefined8 _20_8_;
  };
  struct {
    undefined4 _0_4_;
    undefined4 _4_4_;
    undefined4 _8_4_;
    undefined4 _12_4_;
    undefined4 _16_4_;
    undefined4 _20_4_;
  };
  struct {
    undefined1 _1_3_[3];
  };
  undefined1 raw[32];
} slice_view;
/* ---- externs: stub-oracle names (K&R; ret types by call site) ---- */
extern int CelestialObject_IsGameplayRelevant_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CelestialObject_IsOrigin_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Fleet_GetMaxAcceleration_m_s2_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Fleet_GetOriginalDeltaV_km_s_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Fleet_GetRemainingDeltaV_km_s_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Fleet_GetTotalTonnage_kg_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Fleet_IsCapitalShipFleet_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Fleet_IsDroneFleet_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Fleet_IsMissileFleet_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Fleet_IsStationOnlyFleet_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int TacticalManager_GetCombatAxis_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int TacticalManager_GetStrategicGame_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int TacticalManager__GetCombatAxis_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */

//==== 00005a0420 005a0420_Fleet__GetRemainingDeltaV_km__s_Clear ====
// decompiled by BatchDecomp @ 005a0420 name=Fleet_GetRemainingDeltaV_km_s_Clear conv=__thiscall body=13

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Fleet__GetRemainingDeltaV_km__s_Clear(void)const  */

void __thiscall Fleet__GetRemainingDeltaV_km__s_Clear(Fleet *this)

{
  (this->GetRemainingDeltaV_km__s_MemoizedValue).IsValidData = false;
  (this->GetRemainingDeltaV_km__s_MemoizedValue).Data = 0.0;
  return;
}


//==== 00006481c0 006481c0_Fleet__GetOriginalDeltaV_km__s_Clear ====
// decompiled by BatchDecomp @ 006481c0 name=Fleet_GetOriginalDeltaV_km_s_Clear conv=__thiscall body=13

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Fleet__GetOriginalDeltaV_km__s_Clear(void)const  */

void __thiscall Fleet__GetOriginalDeltaV_km__s_Clear(Fleet *this)

{
  (this->GetOriginalDeltaV_km__s_MemoizedValue).IsValidData = false;
  (this->GetOriginalDeltaV_km__s_MemoizedValue).Data = 0.0;
  return;
}


//==== 000072402c 0072402c_CelestialObject___vector_deleting_destructor__adjustor_8__ ====
// decompiled by BatchDecomp @ 0072402c name=`vector_deleting_destructor'`adjustor{8}' conv=__thiscall body=8

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* [thunk]:public: virtual void * __thiscall CelestialObject::`vector deleting
   destructor'`adjustor{8}' (unsigned int) */

void * __thiscall
CelestialObject___vector_deleting_destructor__adjustor_8__(CelestialObject *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((CelestialObject *)&this[-1].OrbitParameters.IsValidData,param_1);
  return pvVar1;
}


//==== 0000724100 00724100_CelestialObject__CanSupportOrbits ====
// decompiled by BatchDecomp @ 00724100 name=CanSupportOrbits conv=__thiscall body=8

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall CelestialObject__CanSupportOrbits(void)const  */

bool __thiscall CelestialObject__CanSupportOrbits(CelestialObject *this)

{
  bool bVar1;
  
  bVar1 = CelestialBody__CanSupportOrbits(this->BodyTemplate);
  return bVar1;
}


//==== 0000724470 00724470_Fleet__DememoizeAll ====
// decompiled by BatchDecomp @ 00724470 name=DememoizeAll conv=__thiscall body=111

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall Fleet__DememoizeAll(void)const  */

void __thiscall Fleet__DememoizeAll(Fleet *this)

{
  int iVar1;
  undefined4 *puVar2;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar1 = (**(code **)((this->FleetMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 + 0xc))();
  if (local_c < iVar1) {
    do {
      puVar2 = (undefined4 *)
               (**(code **)(this->FleetMemoizationHandlerInstance).ResetFunctions._pad_0x0_0)
                         (&local_c);
      (*(code *)*puVar2)();
      local_c = local_c + 1;
      iVar1 = (**(code **)((this->FleetMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 + 0xc))
                        ();
    } while (local_c < iVar1);
  }
  (**(code **)((this->FleetMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 + 0x10))();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007244e0 007244e0_CelestialObject__DoesLagrangePointExist ====
// decompiled by BatchDecomp @ 007244e0 name=DoesLagrangePointExist conv=__thiscall body=72

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall CelestialObject__DoesLagrangePointExist(double,int)const  */

bool __thiscall
CelestialObject__DoesLagrangePointExist(CelestialObject *this,double param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 local_3c[56];
  
  bVar1 = IsLagrangePointValid(this,param_2);
  if (bVar1) {
    iVar2 = GetLagrangePoint(this,(double)CONCAT44(SUB84(param_1,0),local_3c),
                             (int)((ulonglong)param_1 >> 0x20));
    if (*(char *)(iVar2 + 0x30) != '\0') {
      return true;
    }
  }
  return false;
}


//==== 00007247e0 007247e0_CelestialObject__GetAllFleetsOrbitingThis ====
extern undefined4 FUN_00723310(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007247e0 name=GetAllFleetsOrbitingThis conv=__thiscall body=101

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Darray<class util::WeakPtr<class Fleet> > __thiscall
   CelestialObject__GetAllFleetsOrbitingThis(void)const  */

void __thiscall CelestialObject__GetAllFleetsOrbitingThis(CelestialObject *this)

{
  int *piVar1;
  int iVar2;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *in_stack_00000004;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_1c[16];
  CelestialObject *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = this;
  piVar1 = (int *)StrategicManager__GetFleets(this->ParentStrategic);
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body(in_stack_00000004,iVar2);
  FUN_00723310(piVar1,&local_c);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_1c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000724850 00724850_CelestialObject__GetAxialTilt_radians ====
// decompiled by BatchDecomp @ 00724850 name=GetAxialTilt_radians conv=__thiscall body=8

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall CelestialObject__GetAxialTilt_radians(void)const  */

double __thiscall CelestialObject__GetAxialTilt_radians(CelestialObject *this)

{
  double dVar1;
  
  dVar1 = CelestialBody__GetAbsoluteAxialTilt_radians(this->BodyTemplate);
  return dVar1;
}


//==== 0000724bd0 00724bd0_CelestialObject__GetCircularOrbitalPeriod_s ====
// decompiled by BatchDecomp @ 00724bd0 name=GetCircularOrbitalPeriod_s conv=__thiscall body=119

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall CelestialObject__GetCircularOrbitalPeriod_s(double)const  */

double __thiscall CelestialObject__GetCircularOrbitalPeriod_s(CelestialObject *this,double param_1)

{
  Maybe_L_double_G_ *pMVar1;
  Maybe_L_double_G_ local_24;
  double local_14;
  double local_c;
  
  local_c = param_1 * param_1 * param_1;
  local_14 = CelestialBody__GetStandardGravitationalParameter_km3__s2(this->BodyTemplate);
  local_14 = local_c / local_14;
  pMVar1 = util__Sqrt(&local_24,&local_14);
  if (pMVar1->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return pMVar1->Data * /*401921fb54442d18*/6.283185307179586;
}


//==== 0000724c50 00724c50_CelestialObject__GetCircularOrbitalSpeed_km__s ====
// decompiled by BatchDecomp @ 00724c50 name=GetCircularOrbitalSpeed_km__s conv=__thiscall body=130

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall CelestialObject__GetCircularOrbitalSpeed_km__s(double)const  */

double __thiscall
CelestialObject__GetCircularOrbitalSpeed_km__s(CelestialObject *this,double param_1)

{
  Maybe_L_double_G_ *pMVar1;
  Maybe_L_double_G_ local_1c;
  double local_c;
  
  if (param_1 <= /*0000000000000000*/0.0) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\strategic\\celestialobjects.cpp",0x283,
                    "Height_km > 0.",(char *)0x0);
    DebugBreak();
  }
  local_c = CelestialBody__GetStandardGravitationalParameter_km3__s2(this->BodyTemplate);
  local_c = local_c / param_1;
  pMVar1 = util__Sqrt(&local_1c,&local_c);
  if (pMVar1->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return pMVar1->Data;
}


//==== 0000724d40 00724d40_CelestialObject__GetCombatLineSweep_km ====
// decompiled by BatchDecomp @ 00724d40 name=GetCombatLineSweep_km conv=__thiscall body=174

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct util__Line3_L_double_G_ __thiscall CelestialObject__GetCombatLineSweep_km(struct
   util::PhysicalState<struct util::Vec3<double> >)const  */

Line3_L_double_G_ * __thiscall
CelestialObject__GetCombatLineSweep_km(CelestialObject *this,Line3_L_double_G_ *__return_storage_ptr__,double param_3,double param_4,double param_5,double param_6,double param_7,double param_8)

{
  undefined1 auVar1[16];
  double dVar2;
  double local_38;
  double local_30;
  double local_28;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  dVar2 = StrategicManager__GetTimeSinceJ2000_s(this->ParentStrategic);
  GetStateAt(this,(double)CONCAT44(SUB84(dVar2,0),&local_38));
  dVar2 = (0.0 - param_7) + (local_30 - param_4);
  ((slice_view *)&auVar1)->_8_4_ = *(undefined4 *)&dVar2;
  ((slice_view *)&auVar1)->_0_8_ = (0.0 - param_6) + (local_38 - param_3);
  ((slice_view *)&auVar1)->_12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  (__return_storage_ptr__->B).X = (double)((slice_view *)&auVar1)->_0_8_;
  (__return_storage_ptr__->B).Y = (double)((slice_view *)&auVar1)->_8_8_;
  (__return_storage_ptr__->A).X = (local_38 - param_3) + 0.0;
  (__return_storage_ptr__->A).Y = (local_30 - param_4) + 0.0;
  (__return_storage_ptr__->A).Z = (local_28 - param_5) + 0.0;
  (__return_storage_ptr__->B).Z = (0.0 - param_8) + (local_28 - param_5);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 0000724df0 00724df0_CelestialObject__GetCurrentState ====
// decompiled by BatchDecomp @ 00724df0 name=GetCurrentState conv=__thiscall body=38

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct util::PhysicalState<struct util::Vec3<double> > __thiscall
   CelestialObject__GetCurrentState(void)const  */

undefined4 __thiscall CelestialObject__GetCurrentState(CelestialObject *this)

{
  double dVar1;
  undefined4 in_stack_00000004;
  
  dVar1 = StrategicManager__GetTimeSinceJ2000_s(this->ParentStrategic);
  GetStateAt(this,(double)CONCAT44(SUB84(dVar1,0),in_stack_00000004));
  return in_stack_00000004;
}


//==== 0000724ee0 00724ee0_CelestialObject__GetDirectEscapeMinimumHeight_km ====
// decompiled by BatchDecomp @ 00724ee0 name=GetDirectEscapeMinimumHeight_km conv=__thiscall body=82

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall CelestialObject__GetDirectEscapeMinimumHeight_km(double)const  */

double __thiscall
CelestialObject__GetDirectEscapeMinimumHeight_km(CelestialObject *this,double param_1)

{
  Maybe_L_double_G_ *pMVar1;
  Maybe_L_double_G_ local_1c;
  double local_c;
  
  local_c = CelestialBody__GetStandardGravitationalParameter_km3__s2(this->BodyTemplate);
  local_c = local_c / param_1;
  pMVar1 = util__Sqrt(&local_1c,&local_c);
  if (pMVar1->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return pMVar1->Data;
}


//==== 0000724f40 00724f40_CelestialObject__GetEscapeVelocityAtHeight_km ====
// decompiled by BatchDecomp @ 00724f40 name=GetEscapeVelocityAtHeight_km conv=__thiscall body=84

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall CelestialObject__GetEscapeVelocityAtHeight_km(double)const  */

double __thiscall
CelestialObject__GetEscapeVelocityAtHeight_km(CelestialObject *this,double param_1)

{
  Maybe_L_double_G_ *pMVar1;
  double dVar2;
  Maybe_L_double_G_ local_1c;
  double local_c;
  
  dVar2 = CelestialBody__GetStandardGravitationalParameter_km3__s2(this->BodyTemplate);
  local_c = (dVar2 + dVar2) / param_1;
  pMVar1 = util__Sqrt(&local_1c,&local_c);
  if (pMVar1->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return pMVar1->Data;
}


//==== 0000725a30 00725a30_CelestialObject__GetGravitationalAccelerationOnBody_km__s2 ====
// decompiled by BatchDecomp @ 00725a30 name=GetGravitationalAccelerationOnBody_km__s2 conv=__thiscall body=255

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct Vec3_L_double_G_ __thiscall
   CelestialObject__GetGravitationalAccelerationOnBody_km__s2(struct Vec3_L_double_G_,double)const
    */

Vec3_L_double_G_ * __thiscall
CelestialObject__GetGravitationalAccelerationOnBody_km__s2(CelestialObject *this,Vec3_L_double_G_ *__return_storage_ptr__,Vec3_L_double_G_ param_1,
          double param_2)

{
  undefined1 auVar1[16];
  Vec3_L_double_G_ *pVVar2;
  float10 fVar3;
  double dVar4;
  double dVar5;
  undefined4 in_stack_00000008;
  Vec3_L_double_G_ local_88;
  Vec3_L_double_G_ local_70;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  GetStateAt(this,(double)CONCAT44(((slice_view *)&param_1.Z)->_4_4_,&local_38));
  local_70.X = local_38 - (double)CONCAT44(((slice_view *)&param_1.X)->_0_4_,in_stack_00000008);
  local_70.Y = local_30 - (double)((slice_view *)&param_1)->_4_8_;
  local_70.Z = local_28 - (double)((slice_view *)&param_1)->_12_8_;
  local_58 = local_70.Z;
  local_50 = local_70.Y;
  local_48 = local_70.X;
  fVar3 = (float10)(**(code **)(*(int *)this + 0x44))();
  local_40 = (double)fVar3;
  dVar5 = CelestialBody__GetStandardGravitationalParameter_km3__s2(this->BodyTemplate);
  dVar4 = local_48 * local_48 + local_50 * local_50 + local_58 * local_58;
  if (dVar4 <= local_40 * local_40) {
    dVar4 = local_40 * local_40;
  }
  local_40 = dVar5 / dVar4;
  pVVar2 = util__Vec3_double___SafeNormalized(&local_70,&local_88);
  dVar4 = pVVar2->Z;
  dVar5 = pVVar2->Y * local_40;
  ((slice_view *)&auVar1)->_8_4_ = *(undefined4 *)&dVar5;
  ((slice_view *)&auVar1)->_0_8_ = pVVar2->X * local_40;
  ((slice_view *)&auVar1)->_12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  __return_storage_ptr__->X = (double)((slice_view *)&auVar1)->_0_8_;
  __return_storage_ptr__->Y = (double)((slice_view *)&auVar1)->_8_8_;
  __return_storage_ptr__->Z = dVar4 * local_40;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 0000725d60 00725d60_CelestialObject__GetL3DistanceFromLargerBody_km ====
// decompiled by BatchDecomp @ 00725d60 name=GetL3DistanceFromLargerBody_km conv=__thiscall body=140

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: double __thiscall CelestialObject__GetL3DistanceFromLargerBody_km(double)const  */

double __thiscall
CelestialObject__GetL3DistanceFromLargerBody_km(CelestialObject *this,double param_1)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  int *piVar4;
  CelestialBody *pCVar5;
  ReferenceController *local_8;
  
  piVar4 = (int *)GetOrbitedObject(this);
  if ((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) {
    bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]);
    if (!bVar3) {
      *piVar4 = 0;
    }
  }
  pCVar5 = this->BodyTemplate;
  dVar1 = *(double *)(*(int *)(*piVar4 + 0x4c) + 0x48);
  dVar2 = pCVar5->SurfaceTemperature_K;
  if (local_8 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_8);
    pCVar5 = this->BodyTemplate;
  }
  return ((pCVar5->SurfaceTemperature_K * /*4014000000000000*/5.0) /
          ((dVar1 + dVar2) * /*4028000000000000*/12.0) + /*3ff0000000000000*/1.0) * param_1;
}


//==== 0000726b70 00726b70_CelestialObject__GetLuminosity_W ====
// decompiled by BatchDecomp @ 00726b70 name=GetLuminosity_W conv=__thiscall body=56

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall CelestialObject__GetLuminosity_W(void)const  */

double __thiscall CelestialObject__GetLuminosity_W(CelestialObject *this)

{
  CelestialBody *this_00;
  
  this_00 = this->BodyTemplate;
  CelestialBody__GetLuminosity_W_Memoize(this_00);
  if ((char)this_00[1].RingSystem.Data.DiffuseTexture.TextureSize.Y == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return *(double *)&this_00[1].RingSystem.Data.DiffuseTexture;
}


//==== 0000726bb0 00726bb0_CelestialObject__GetMaxZoomRadius_km ====
// decompiled by BatchDecomp @ 00726bb0 name=GetMaxZoomRadius_km conv=__thiscall body=111

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall CelestialObject__GetMaxZoomRadius_km(void)const  */

double __thiscall CelestialObject__GetMaxZoomRadius_km(CelestialObject *this)

{
  float10 extraout_ST0;
  double dVar1;
  Maybe_L_double_G_ local_30;
  double local_20;
  Maybe_L_double_G_ local_18;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  GetFurthestOrbitRadius_km(this,&local_30);
  CelestialBody__GetHillSphereRadius_km(this->BodyTemplate,&local_18);
  dVar1 = CelestialBody__GetVisualRadius_km(this->BodyTemplate);
  local_20 = local_30.Data;
  if ((local_30.IsValidData == false) && (local_20 = dVar1, local_18.IsValidData != false)) {
    local_20 = local_18.Data;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 0000726c20 00726c20_CelestialObject__GetMinZoomRadius_km ====
// decompiled by BatchDecomp @ 00726c20 name=GetMinZoomRadius_km conv=__thiscall body=53

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall CelestialObject__GetMinZoomRadius_km(void)const  */

double __thiscall CelestialObject__GetMinZoomRadius_km(CelestialObject *this)

{
  float10 fVar1;
  double dVar2;
  
  fVar1 = (float10)(**(code **)(*(int *)this + 0x44))();
  dVar2 = StrategicManager__GetMinZoomRange_km(this->ParentStrategic);
  if (dVar2 <= (double)fVar1) {
    dVar2 = (double)fVar1;
  }
  return dVar2;
}


//==== 0000726c60 00726c60_CelestialObject__GetName ====
// decompiled by BatchDecomp @ 00726c60 name=GetName conv=__thiscall body=21

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::Str<char> __thiscall CelestialObject__GetName(void)const  */

Str_L_char_G_ * __thiscall
CelestialObject__GetName(CelestialObject *this,Str_L_char_G_ *__return_storage_ptr__)

{
  (**(code **)(**(int **)&this->IsOrigin_MemoizedValue + 0x48))(__return_storage_ptr__);
  return __return_storage_ptr__;
}


//==== 0000726c80 00726c80_CelestialObject__GetOrbit ====
// decompiled by BatchDecomp @ 00726c80 name=GetOrbit conv=__thiscall body=39

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::Maybe<struct FixedOrbit> __thiscall
   CelestialObject__GetOrbit(void)const  */

FixedOrbit * __thiscall CelestialObject__GetOrbit(CelestialObject *this)

{
  FixedOrbit *in_stack_00000004;
  
  FixedOrbit__FixedOrbit(in_stack_00000004,(FixedOrbit *)&this->ParentStrategic);
  *(bool *)&in_stack_00000004[1].OrbitedBody.Pointer = (this->OrbitParameters).IsValidData;
  return in_stack_00000004;
}


//==== 0000726cb0 00726cb0_CelestialObject__GetOrbitedObject ====
// decompiled by BatchDecomp @ 00726cb0 name=GetOrbitedObject conv=__thiscall body=119

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::WeakPtr<class CelestialObject> __thiscall
   CelestialObject__GetOrbitedObject(void)const  */

ReferenceController * __thiscall CelestialObject__GetOrbitedObject(CelestialObject *this)

{
  bool bVar1;
  ReferenceController *pRVar2;
  ReferenceController *this_00;
  ReferenceController *this_01;
  ReferenceController *in_stack_00000004;
  
  if ((char)this[1]._pad_0x0_0 == '\0') {
    pRVar2 = (ReferenceController *)0x0;
    bVar1 = false;
    this_00 = (ReferenceController *)0x0;
    this_01 = in_stack_00000004;
  }
  else {
    this_00 = (ReferenceController *)(this->OrbitParameters).Data.Elements._pad_0x0_0;
    pRVar2 = (this->OrbitParameters).Data.OrbitedBody.Controller;
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_00);
    }
    bVar1 = true;
    this_01 = this_00;
  }
  in_stack_00000004->StrongReferenceCount = (int)pRVar2;
  in_stack_00000004->WeakReferenceCount = (int)this_00;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
  }
  if ((this_01 != (ReferenceController *)0x0) && (bVar1)) {
    util__ReferenceController__ReleaseWeakReference(this_01);
  }
  return in_stack_00000004;
}


//==== 0000726e30 00726e30_CelestialObject__GetPosition_km ====
// decompiled by BatchDecomp @ 00726e30 name=GetPosition_km conv=__thiscall body=61

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct Vec3_L_double_G_ __thiscall CelestialObject__GetPosition_km(void)const  */

Vec3_L_double_G_ * __thiscall
CelestialObject__GetPosition_km(CelestialObject *this,Vec3_L_double_G_ *__return_storage_ptr__)

{
  double dVar1;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  double local_24;
  
  dVar1 = StrategicManager__GetTimeSinceJ2000_s(this->ParentStrategic);
  GetStateAt(this,(double)CONCAT44(SUB84(dVar1,0),&local_34));
  *(undefined4 *)&__return_storage_ptr__->X = local_34;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = uStack_30;
  *(undefined4 *)&__return_storage_ptr__->Y = uStack_2c;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = uStack_28;
  __return_storage_ptr__->Z = local_24;
  return __return_storage_ptr__;
}


//==== 00007278f0 007278f0_CelestialObject__GetRadialOutDirection ====
// decompiled by BatchDecomp @ 007278f0 name=GetRadialOutDirection conv=__thiscall body=100

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct Vec3_L_double_G_ __thiscall CelestialObject__GetRadialOutDirection(struct
   Vec3_L_double_G_,double)const  */

Vec3_L_double_G_ * __thiscall
CelestialObject__GetRadialOutDirection(CelestialObject *this,Vec3_L_double_G_ *__return_storage_ptr__,Vec3_L_double_G_ param_1,
          double param_2)

{
  double *pdVar1;
  undefined4 in_stack_00000008;
  undefined1 local_4c[48];
  Vec3_L_double_G_ local_1c;
  
  pdVar1 = (double *)GetStateAt(this,(double)CONCAT44(((slice_view *)&param_1.Z)->_4_4_,local_4c));
  local_1c.X = (double)CONCAT44(((slice_view *)&param_1.X)->_0_4_,in_stack_00000008) - *pdVar1;
  local_1c.Y = (double)((slice_view *)&param_1)->_4_8_ - pdVar1[1];
  local_1c.Z = (double)((slice_view *)&param_1)->_12_8_ - pdVar1[2];
  util__Vec3_double___SafeNormalized(&local_1c,__return_storage_ptr__);
  return __return_storage_ptr__;
}


//==== 0000727960 00727960_CelestialObject__GetRadius_km ====
// decompiled by BatchDecomp @ 00727960 name=GetRadius_km conv=__thiscall body=8

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual double __thiscall CelestialObject__GetRadius_km(void)const  */

double __thiscall CelestialObject__GetRadius_km(CelestialObject *this)

{
  double dVar1;
  
  dVar1 = CelestialBody__GetRadius_km(this->BodyTemplate);
  return dVar1;
}


//==== 0000727a30 00727a30_CelestialObject__GetStabilityRegionRadius_km ====
// decompiled by BatchDecomp @ 00727a30 name=GetStabilityRegionRadius_km conv=__thiscall body=80

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util__Maybe_L_double_G_ __thiscall
   CelestialObject__GetStabilityRegionRadius_km(void)const  */

Maybe_L_double_G_ * __thiscall
CelestialObject__GetStabilityRegionRadius_km(CelestialObject *this,Maybe_L_double_G_ *__return_storage_ptr__)

{
  bool bVar1;
  CelestialBody *this_00;
  
  this_00 = this->BodyTemplate;
  CelestialBody__GetStabilityRegionRadius_km_Memoize(this_00);
  if ((char)this_00[1].Atmosphere.Data._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  bVar1 = this_00[1].RingSystem.IsValidData;
  __return_storage_ptr__->Data = *(double *)&this_00[1].RingSystem.Data.AlphaTexture.Type;
  __return_storage_ptr__->IsValidData = bVar1;
  return __return_storage_ptr__;
}


//==== 0000727a80 00727a80_CelestialObject__GetStandardGravitationalParameter_km3__s2 ====
// decompiled by BatchDecomp @ 00727a80 name=GetStandardGravitationalParameter_km3__s2 conv=__thiscall body=8

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall CelestialObject__GetStandardGravitationalParameter_km3__s2(void)const
    */

double __thiscall CelestialObject__GetStandardGravitationalParameter_km3__s2(CelestialObject *this)

{
  double dVar1;
  
  dVar1 = CelestialBody__GetStandardGravitationalParameter_km3__s2(this->BodyTemplate);
  return dVar1;
}


//==== 0000727da0 00727da0_CelestialObject__GetStateRelativeToThis ====
// decompiled by BatchDecomp @ 00727da0 name=GetStateRelativeToThis conv=__thiscall body=139

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct util::PhysicalState<struct util::Vec3<double> > __thiscall
   CelestialObject__GetStateRelativeToThis(struct util::PhysicalState<struct util::Vec3<double>
   >,double)const  */

double * __thiscall
CelestialObject__GetStateRelativeToThis(CelestialObject *this,double *param_2,double param_3,double param_4,double param_5,
          double param_6,double param_7,double param_8,undefined4 param_9)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  undefined1 local_34[48];
  
  pdVar3 = (double *)GetStateAt(this,(double)CONCAT44(param_9,local_34));
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((int)param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined4 *)((int)param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined4 *)((int)param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined4 *)((int)param_2 + 0x1c) = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)((int)param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *(undefined4 *)((int)param_2 + 0x2c) = 0;
  dVar1 = pdVar3[1];
  dVar2 = pdVar3[2];
  *param_2 = param_3 - *pdVar3;
  param_2[1] = param_4 - dVar1;
  param_2[2] = param_5 - dVar2;
  dVar1 = pdVar3[4];
  dVar2 = pdVar3[5];
  param_2[3] = param_6 - pdVar3[3];
  param_2[4] = param_7 - dVar1;
  param_2[5] = param_8 - dVar2;
  return param_2;
}


//==== 0000727ed0 00727ed0_CelestialObject__GetUIPixelRadius ====
// decompiled by BatchDecomp @ 00727ed0 name=GetUIPixelRadius conv=__thiscall body=8

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall CelestialObject__GetUIPixelRadius(void)const  */

double __thiscall CelestialObject__GetUIPixelRadius(CelestialObject *this)

{
  double dVar1;
  
  dVar1 = CelestialBody__GetUIPixelRadius(this->BodyTemplate);
  return dVar1;
}


//==== 0000727f70 00727f70_CelestialObject__GetVisualRadius_km ====
// decompiled by BatchDecomp @ 00727f70 name=GetVisualRadius_km conv=__thiscall body=8

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall CelestialObject__GetVisualRadius_km(void)const  */

double __thiscall CelestialObject__GetVisualRadius_km(CelestialObject *this)

{
  double dVar1;
  
  dVar1 = CelestialBody__GetVisualRadius_km(this->BodyTemplate);
  return dVar1;
}


//==== 0000728230 00728230_CelestialObject__HasInfiniteStabilityRegion ====
// decompiled by BatchDecomp @ 00728230 name=HasInfiniteStabilityRegion conv=__thiscall body=8

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall CelestialObject__HasInfiniteStabilityRegion(void)const  */

bool __thiscall CelestialObject__HasInfiniteStabilityRegion(CelestialObject *this)

{
  bool bVar1;
  
  bVar1 = CelestialBody__HasInfiniteStabilityRegion(this->BodyTemplate);
  return bVar1;
}


//==== 0000728480 00728480_CelestialObject__IsGameplayRelevant_Clear ====
// decompiled by BatchDecomp @ 00728480 name=CelestialObject_IsGameplayRelevant_Clear conv=__thiscall body=7

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CelestialObject__IsGameplayRelevant_Clear(void)const  */

void __thiscall CelestialObject__IsGameplayRelevant_Clear(CelestialObject *this)

{
  (this->IsGameplayRelevant_MemoizedValue).Data = false;
  (this->IsGameplayRelevant_MemoizedValue).IsValidData = false;
  return;
}


//==== 00007288b0 007288b0_CelestialObject__IsLuminousBody ====
// decompiled by BatchDecomp @ 007288b0 name=IsLuminousBody conv=__thiscall body=8

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall CelestialObject__IsLuminousBody(void)const  */

bool __thiscall CelestialObject__IsLuminousBody(CelestialObject *this)

{
  bool bVar1;
  
  bVar1 = CelestialBody__IsLuminousBody(this->BodyTemplate);
  return bVar1;
}


//==== 0000728a40 00728a40_CelestialObject__IsOrigin_Clear ====
// decompiled by BatchDecomp @ 00728a40 name=CelestialObject_IsOrigin_Clear conv=__thiscall body=7

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CelestialObject__IsOrigin_Clear(void)const  */

void __thiscall CelestialObject__IsOrigin_Clear(CelestialObject *this)

{
  (this->IsOrigin_MemoizedValue).Data = false;
  (this->IsOrigin_MemoizedValue).IsValidData = false;
  return;
}


//==== 000072a9c0 0072a9c0_CelestialObject__UsesBodyTemplate ====
// decompiled by BatchDecomp @ 0072a9c0 name=UsesBodyTemplate conv=__thiscall body=16

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall CelestialObject__UsesBodyTemplate(struct CelestialBody *)const  */

bool __thiscall CelestialObject__UsesBodyTemplate(CelestialObject *this,CelestialBody *param_1)

{
  return this->BodyTemplate == param_1;
}


//==== 000072d6a0 0072d6a0_Fleet___vector_deleting_destructor__adjustor_8__ ====
// decompiled by BatchDecomp @ 0072d6a0 name=`vector_deleting_destructor'`adjustor{8}' conv=__thiscall body=8

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* [thunk]:public: virtual void * __thiscall Fleet::`vector deleting destructor'`adjustor{8}'
   (unsigned int) */

void * __thiscall Fleet___vector_deleting_destructor__adjustor_8__(Fleet *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((Fleet *)&this[-1].ItineraryUI.Controller,param_1);
  return pvVar1;
}


//==== 000072d890 0072d890_Fleet__AddShip ====
// decompiled by BatchDecomp @ 0072d890 name=AddShip conv=__thiscall body=114

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Fleet__AddShip(class util::SharedPtr<class Body>) */

void __thiscall Fleet__AddShip(Fleet *this,int *param_2,ReferenceController *param_3)

{
  bool bVar1;
  ReferenceControllerRegistry *this_00;
  int iStack_10;
  int *piVar2;
  
  iStack_10 = 0x72d8a5;
  util__Darray_class_util__SharedPtr_struct_UIWidget_____Add((Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *)
             &this[1].Location.OrbitParameters.Data.GetEccentricityPeriapsisRoot_MemoizedValue.
              IsValidData,(SharedPtr_L_struct_UIWidget_G_ *)&param_2);
  (**(code **)(*(int *)this + 0x40))();
  bVar1 = Manager__IsCurrentlyTheActiveManager((Manager *)this->ParentStrategic);
  if (bVar1) {
util__KillBody((SpacecraftComponent *)&iStack_10);
    StrategicManager__OnFleetChanged(this->ParentStrategic);
  }
  if (param_3 != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__ReleaseStrongReference(param_3);
    if (bVar1) {
      if (param_2 != (int *)0x0) {
        iStack_10 = 0x72d8ed;
        (**(code **)(*param_2 + 4))();
      }
      iStack_10 = 0x72d8f6;
      piVar2 = param_2;
      this_00 = util__ReferenceControllerRegistry__Get();
      iStack_10 = 0x72d8fd;
      util__ReferenceControllerRegistry__PointerWasDestroyed(this_00,piVar2);
    }
  }
  return;
}


//==== 000072da30 0072da30_Fleet__CanDisband ====
// decompiled by BatchDecomp @ 0072da30 name=CanDisband conv=__thiscall body=211

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall Fleet__CanDisband(void)const  */

bool __thiscall Fleet__CanDisband(Fleet *this)

{
  bool *pbVar1;
  Body *this_00;
  CapitalShipComponent *pCVar2;
  ReferenceController *this_01;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pbVar1 = &this[1].Location.OrbitParameters.Data.GetEccentricityPeriapsisRoot_MemoizedValue.
            IsValidData;
  local_c = 0;
  iVar5 = (**(code **)(*(int *)&this[1].Location.OrbitParameters.Data.
                                GetEccentricityPeriapsisRoot_MemoizedValue.IsValidData + 0xc))();
  if (local_c < iVar5) {
    do {
      puVar6 = (undefined4 *)(*(code *)**(undefined4 **)pbVar1)(&local_c);
      this_00 = (Body *)*puVar6;
      Body__GetCapitalShipComponent_Memoize(this_00);
      if ((this_00->GetCapitalShipComponent_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      pCVar2 = (this_00->GetCapitalShipComponent_MemoizedValue).Data.Pointer;
      this_01 = (this_00->GetCapitalShipComponent_MemoizedValue).Data.Controller;
      if (this_01 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(this_01);
      }
      if ((pCVar2 == (CapitalShipComponent *)0x0) || (this_01 == (ReferenceController *)0x0)) {
LAB_0072dabd:
        bVar3 = false;
      }
      else {
        bVar3 = util__ReferenceController__IsDataStillValid(this_01);
        if (!bVar3) goto LAB_0072dabd;
        bVar3 = true;
      }
      if (this_01 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(this_01);
      }
      if (bVar3) {
        uVar4 = 0;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return (bool)uVar4;
      }
      local_c = local_c + 1;
      iVar5 = (**(code **)(*(int *)pbVar1 + 0xc))();
    } while (local_c < iVar5);
  }
  uVar4 = 1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar4;
}


//==== 000072fec0 0072fec0_Fleet__GetAlliance ====
// decompiled by BatchDecomp @ 0072fec0 name=GetAlliance conv=__thiscall body=130

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class Faction * __thiscall Fleet__GetAlliance(void)const  */

Faction * __thiscall Fleet__GetAlliance(Fleet *this)

{
  bool *pbVar1;
  Faction *pFVar2;
  int iVar3;
  int *piVar4;
  Faction *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pbVar1 = &this[1].Location.OrbitParameters.Data.GetEccentricityPeriapsisRoot_MemoizedValue.
            IsValidData;
  local_10 = (Faction *)0x0;
  local_c = 0;
  iVar3 = (**(code **)(*(int *)&this[1].Location.OrbitParameters.Data.
                                GetEccentricityPeriapsisRoot_MemoizedValue.IsValidData + 0xc))();
  if (local_c < iVar3) {
    do {
      piVar4 = (int *)(*(code *)**(undefined4 **)pbVar1)(&local_c);
      if ((((local_10 == (Faction *)0x0) && (*piVar4 != 0)) && (piVar4[1] != 0)) &&
         (pFVar2 = *(Faction **)(*piVar4 + 0x1e0), pFVar2 != (Faction *)0x0)) {
        local_10 = pFVar2;
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*(int *)pbVar1 + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return local_10;
}


//==== 000072ff50 0072ff50_Fleet__GetBodyWeAreInHillSphereOf ====
// decompiled by BatchDecomp @ 0072ff50 name=GetBodyWeAreInHillSphereOf conv=__thiscall body=94

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::WeakPtr<class CelestialObject> __thiscall
   Fleet__GetBodyWeAreInHillSphereOf(void)const  */

undefined4 __thiscall Fleet__GetBodyWeAreInHillSphereOf(Fleet *this)

{
  StrategicManager *this_00;
  Vec3_L_double_G_ VVar1;
  double dVar2;
  undefined4 in_stack_00000004;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  
  dVar2 = StrategicManager__GetTimeSinceJ2000_s(this->ParentStrategic);
  GetStateAt(this,(double)CONCAT44(SUB84(dVar2,0),&local_34));
  this_00 = this->ParentStrategic;
  dVar2 = StrategicManager__GetTimeSinceJ2000_s(this_00);
  ((slice_view *)&VVar1.X)->_4_4_ = local_34;
  ((slice_view *)&VVar1.X)->_0_4_ = (int)((ulonglong)dVar2 >> 0x20);
  ((slice_view *)&VVar1.Y)->_0_4_ = uStack_30;
  ((slice_view *)&VVar1.Y)->_4_4_ = uStack_2c;
  ((slice_view *)&VVar1.Z)->_0_4_ = uStack_28;
  ((slice_view *)&VVar1.Z)->_4_4_ = local_24;
  StrategicManager__FindNearestStableCelestialBody(this_00,(double)CONCAT44(SUB84(dVar2,0),in_stack_00000004),VVar1);
  return in_stack_00000004;
}


//==== 00007302a0 007302a0_Fleet__GetCombatDistance_km ====
// decompiled by BatchDecomp @ 007302a0 name=GetCombatDistance_km conv=__thiscall body=181

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall Fleet__GetCombatDistance_km(class util::WeakPtr<class
   Fleet>,bool,bool)const  */

double __thiscall
Fleet__GetCombatDistance_km(Fleet *this,undefined4 param_2,ReferenceController *param_3,char param_4,char param_5)

{
  double dVar1;
  double dVar2;
  ReferenceController *pRVar3;
  double local_1c;
  double local_14;
  
  local_1c = 0.0;
  if (param_5 == '\0') {
    local_14 = 0.0;
  }
  else {
    local_14 = StrategicManager__GetMissileClampRange_km(this->ParentStrategic);
  }
  dVar1 = StrategicManager__GetMinimumBattleRange_km(this->ParentStrategic);
  if (dVar1 <= local_14) {
    dVar1 = local_14;
  }
  if (param_4 != '\0') {
    pRVar3 = param_3;
    if (param_3 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(param_3);
    }
    local_1c = GetCachedRangeForAndAgainstFleet_km(this,param_2,pRVar3);
  }
  dVar2 = Manager__GetScreenFadeToBlack_Percent((Manager *)this->ParentStrategic);
  if (dVar1 <= local_1c) {
    dVar1 = local_1c;
  }
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  return dVar2 + dVar1;
}


//==== 0000730360 00730360_Fleet__GetCurrentState ====
// decompiled by BatchDecomp @ 00730360 name=GetCurrentState conv=__thiscall body=38

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct util::PhysicalState<struct util::Vec3<double> > __thiscall
   Fleet__GetCurrentState(void)const  */

undefined4 __thiscall Fleet__GetCurrentState(Fleet *this)

{
  double dVar1;
  undefined4 in_stack_00000004;
  
  dVar1 = StrategicManager__GetTimeSinceJ2000_s(this->ParentStrategic);
  GetStateAt(this,(double)CONCAT44(SUB84(dVar1,0),in_stack_00000004));
  return in_stack_00000004;
}


//==== 0000731350 00731350_Fleet__GetIcon ====
// decompiled by BatchDecomp @ 00731350 name=GetIcon conv=__thiscall body=47

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void (__cdecl*__thiscall Fleet__GetIcon(bool)const )(void) */

_func_void * __thiscall Fleet__GetIcon(Fleet *this,bool param_1)

{
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *pDVar1;
  _func_void *p_Var2;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_14[16];
  
  pDVar1 = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)GetSpacecrafts(this);
  p_Var2 = SpacecraftComponent__GetIconOfShips(pDVar1,param_1);
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_14);
  return p_Var2;
}


//==== 00007315c0 007315c0_Fleet__GetLibrationOrbit ====
// decompiled by BatchDecomp @ 007315c0 name=GetLibrationOrbit conv=__thiscall body=42

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::Maybe<struct LibrationOrbit> __thiscall
   Fleet__GetLibrationOrbit(void)const  */

LibrationOrbit * __thiscall Fleet__GetLibrationOrbit(Fleet *this)

{
  LibrationOrbit *in_stack_00000004;
  
  LibrationOrbit__LibrationOrbit(in_stack_00000004,&(this->Location).LagrangeOrbit.Data);
  *(undefined1 *)
   &in_stack_00000004[1].LibrationOrbitMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 =
       *(undefined1 *)&(this->Location).MissionItinerary.Data.ParentFleet.Pointer;
  return in_stack_00000004;
}


//==== 00007315f0 007315f0_Fleet__GetMaxAcceleration_m__s2_Clear ====
// decompiled by BatchDecomp @ 007315f0 name=Fleet_GetMaxAcceleration_m_s2_Clear conv=__thiscall body=13

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Fleet__GetMaxAcceleration_m__s2_Clear(void)const  */

void __thiscall Fleet__GetMaxAcceleration_m__s2_Clear(Fleet *this)

{
  (this->GetMaxAcceleration_m__s2_MemoizedValue).IsValidData = false;
  (this->GetMaxAcceleration_m__s2_MemoizedValue).Data = 0.0;
  return;
}


//==== 0000732630 00732630_Fleet__GetOrbit ====
// decompiled by BatchDecomp @ 00732630 name=GetOrbit conv=__thiscall body=39

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::Maybe<struct FixedOrbit> __thiscall Fleet__GetOrbit(void)const  */

FixedOrbit * __thiscall Fleet__GetOrbit(Fleet *this)

{
  FixedOrbit *in_stack_00000004;
  
  FixedOrbit__FixedOrbit(in_stack_00000004,
             (FixedOrbit *)&(this->GetRangesAgainstFleets_km_MemoizedValue).IsValidData);
  *(bool *)&in_stack_00000004[1].OrbitedBody.Pointer = (this->Location).OrbitParameters.IsValidData;
  return in_stack_00000004;
}


//==== 0000732660 00732660_Fleet__GetOrbitParameters ====
// decompiled by BatchDecomp @ 00732660 name=GetOrbitParameters conv=__thiscall body=4

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Maybe<struct FixedOrbit> & __thiscall Fleet__GetOrbitParameters(void) */

Maybe_L_struct_FixedOrbit_G_ * __thiscall Fleet__GetOrbitParameters(Fleet *this)

{
  return (Maybe_L_struct_FixedOrbit_G_ *)&this->Location;
}


//==== 0000732950 00732950_Fleet__GetPosition_km ====
// decompiled by BatchDecomp @ 00732950 name=GetPosition_km conv=__thiscall body=61

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct Vec3_L_double_G_ __thiscall Fleet__GetPosition_km(void)const  */

Vec3_L_double_G_ * __thiscall Fleet__GetPosition_km(Fleet *this,Vec3_L_double_G_ *__return_storage_ptr__)

{
  double dVar1;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  double local_24;
  
  dVar1 = StrategicManager__GetTimeSinceJ2000_s(this->ParentStrategic);
  GetStateAt(this,(double)CONCAT44(SUB84(dVar1,0),&local_34));
  *(undefined4 *)&__return_storage_ptr__->X = local_34;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = uStack_30;
  *(undefined4 *)&__return_storage_ptr__->Y = uStack_2c;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = uStack_28;
  __return_storage_ptr__->Z = local_24;
  return __return_storage_ptr__;
}


//==== 0000733440 00733440_Fleet__GetTotalTonnage_kg_Clear ====
// decompiled by BatchDecomp @ 00733440 name=Fleet_GetTotalTonnage_kg_Clear conv=__thiscall body=13

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Fleet__GetTotalTonnage_kg_Clear(void)const  */

void __thiscall Fleet__GetTotalTonnage_kg_Clear(Fleet *this)

{
  (this->GetTotalTonnage_kg_MemoizedValue).IsValidData = false;
  (this->GetTotalTonnage_kg_MemoizedValue).Data = 0.0;
  return;
}


//==== 0000733610 00733610_Fleet__HasAtLeastOneShipWithDeltaV_km__s ====
// decompiled by BatchDecomp @ 00733610 name=HasAtLeastOneShipWithDeltaV_km__s conv=__thiscall body=207

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall Fleet__HasAtLeastOneShipWithDeltaV_km__s(void)const  */

bool __thiscall Fleet__HasAtLeastOneShipWithDeltaV_km__s(Fleet *this)

{
  bool bVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_2c[20];
  ReferenceController *local_18;
  double local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar3 = (int *)GetSpacecrafts(this);
  local_c = 0;
  iVar4 = (**(code **)(*piVar3 + 0xc))();
  if (local_c < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)*piVar3)(&local_c);
      if ((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) {
        bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]);
        if (!bVar1) {
          *puVar5 = 0;
        }
      }
      puVar5 = (undefined4 *)SpacecraftComponent__GetCraft((SpacecraftComponent *)*puVar5);
      if ((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) {
        bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]);
        if (!bVar1) {
          *puVar5 = 0;
        }
      }
      local_14 = CraftInstance__GetDeltaVRemaining_km__s((CraftInstance *)*puVar5);
      bVar1 = 0.0 < local_14;
      if (local_18 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_18);
      }
      if (bVar1) {
        uVar2 = 1;
        goto LAB_007336c0;
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(*piVar3 + 0xc))();
    } while (local_c < iVar4);
  }
  uVar2 = 0;
LAB_007336c0:
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_2c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}


//==== 00007336e0 007336e0_Fleet__HasFixedOrbit ====
// decompiled by BatchDecomp @ 007336e0 name=HasFixedOrbit conv=__thiscall body=7

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall Fleet__HasFixedOrbit(void)const  */

bool __thiscall Fleet__HasFixedOrbit(Fleet *this)

{
  return (bool)(char)(this->Location).LagrangeOrbit.Data._pad_0x0_0;
}


//==== 0000733700 00733700_Fleet__HasMission ====
// decompiled by BatchDecomp @ 00733700 name=HasMission conv=__thiscall body=7

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall Fleet__HasMission(void)const  */

bool __thiscall Fleet__HasMission(Fleet *this)

{
  return (bool)*(undefined1 *)
                &this[1].Location.OrbitParameters.Data.GetEccentricityPeriapsisRoot_MemoizedValue.
                 Data;
}


//==== 0000733710 00733710_Fleet__HasShips ====
// decompiled by BatchDecomp @ 00733710 name=HasShips conv=__thiscall body=21

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall Fleet__HasShips(void)const  */

bool __thiscall Fleet__HasShips(Fleet *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)&this[1].Location.OrbitParameters.Data.
                                GetEccentricityPeriapsisRoot_MemoizedValue.IsValidData + 0xc))();
  return 0 < iVar1;
}


//==== 0000733800 00733800_Fleet__IsCapitalShipFleet_Clear ====
// decompiled by BatchDecomp @ 00733800 name=Fleet_IsCapitalShipFleet_Clear conv=__thiscall body=7

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Fleet__IsCapitalShipFleet_Clear(void)const  */

void __thiscall Fleet__IsCapitalShipFleet_Clear(Fleet *this)

{
  (this->IsCapitalShipFleet_MemoizedValue).Data = false;
  (this->IsCapitalShipFleet_MemoizedValue).IsValidData = false;
  return;
}


//==== 0000733990 00733990_Fleet__IsDroneFleet_Clear ====
// decompiled by BatchDecomp @ 00733990 name=Fleet_IsDroneFleet_Clear conv=__thiscall body=7

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Fleet__IsDroneFleet_Clear(void)const  */

void __thiscall Fleet__IsDroneFleet_Clear(Fleet *this)

{
  (this->IsDroneFleet_MemoizedValue).Data = false;
  (this->IsDroneFleet_MemoizedValue).IsValidData = false;
  return;
}


//==== 0000733b10 00733b10_Fleet__IsHotKeyed ====
// decompiled by BatchDecomp @ 00733b10 name=IsHotKeyed conv=__thiscall body=19

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall Fleet__IsHotKeyed(int)const  */

bool __thiscall Fleet__IsHotKeyed(Fleet *this,int param_1)

{
  return *(int *)&this[1].Location.OrbitParameters.Data.GetEccentricityApoapsisRoot_MemoizedValue.
                  IsValidData == param_1;
}


//==== 0000733b60 00733b60_Fleet__IsMissileFleet_Clear ====
// decompiled by BatchDecomp @ 00733b60 name=Fleet_IsMissileFleet_Clear conv=__thiscall body=7

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Fleet__IsMissileFleet_Clear(void)const  */

void __thiscall Fleet__IsMissileFleet_Clear(Fleet *this)

{
  (this->IsMissileFleet_MemoizedValue).Data = false;
  (this->IsMissileFleet_MemoizedValue).IsValidData = false;
  return;
}


//==== 0000733e80 00733e80_Fleet__IsStationOnlyFleet_Clear ====
// decompiled by BatchDecomp @ 00733e80 name=Fleet_IsStationOnlyFleet_Clear conv=__thiscall body=7

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Fleet__IsStationOnlyFleet_Clear(void)const  */

void __thiscall Fleet__IsStationOnlyFleet_Clear(Fleet *this)

{
  (this->IsStationOnlyFleet_MemoizedValue).Data = false;
  (this->IsStationOnlyFleet_MemoizedValue).IsValidData = false;
  return;
}


//==== 0000733fb0 00733fb0_Fleet__KillBody ====
// decompiled by BatchDecomp @ 00733fb0 name=KillBody conv=__thiscall body=282

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall Fleet__KillBody(class util::WeakPtr<class Body>) */

bool __thiscall Fleet__KillBody(Fleet *this,int *param_2,ReferenceController *param_3)

{
  ReferenceController *this_00;
  bool bVar1;
  bool bVar2;
  ReferenceControllerRegistry *this_01;
  int *piVar3;
  int iStack_30;
  int *piVar4;
  int local_1c;
  int *local_18;
  ReferenceController *local_14;
  Fleet *local_10;
  int local_c;
  char local_5;
  
  local_10 = this;
  (**(code **)(*(int *)this + 0x40))();
  local_18 = param_2;
  local_14 = param_3;
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_3);
  }
  piVar3 = *(int **)&this[1].Location.OrbitParameters.Data.
                     GetEccentricityPeriapsisRoot_MemoizedValue.field_0xc;
  local_c = 0;
  if (piVar3 != piVar3 + *(int *)&this[1].Location.OrbitParameters.Data.
                                  GetEccentricityApoapsisRoot_MemoizedValue.Data * 2) {
    do {
      this_00 = (ReferenceController *)piVar3[1];
      piVar4 = (int *)*piVar3;
      if (this_00 != (ReferenceController *)0x0) {
        util__ReferenceController__AddStrongReference(this_00);
      }
      if ((local_14 != this_00) || (local_5 = '\x01', local_18 != piVar4)) {
        local_5 = '\0';
      }
      if (this_00 != (ReferenceController *)0x0) {
        bVar1 = util__ReferenceController__ReleaseStrongReference(this_00);
        if (bVar1) {
          if (piVar4 != (int *)0x0) {
            iStack_30 = 0x734030;
            (**(code **)(*piVar4 + 4))();
          }
          iStack_30 = 0x734036;
          this_01 = util__ReferenceControllerRegistry__Get();
          iStack_30 = 0x73403d;
          util__ReferenceControllerRegistry__PointerWasDestroyed(this_01,piVar4);
        }
      }
      this = local_10;
      if (local_5 != '\0') {
        local_1c = local_c;
        ((slice_view *)&local_18)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&local_18)->_1_3_[0] | (((slice_view *)&local_18)->_1_3_[1] << 8) | (((slice_view *)&local_18)->_1_3_[2] << 16)) << 8));
        iStack_30 = 0x7340c2;
        bVar1 = util__Darray_class_util__SharedPtr_struct_UIWidget_____SwapRemoveAt((Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *)
                           &local_10[1].Location.OrbitParameters.Data.
                            GetEccentricityPeriapsisRoot_MemoizedValue.IsValidData,&local_1c);
        if (bVar1) {
          bVar1 = true;
          goto LAB_00734061;
        }
        break;
      }
      piVar3 = piVar3 + 2;
      local_c = local_c + 1;
    } while (piVar3 != (int *)(*(int *)&local_10[1].Location.OrbitParameters.Data.
                                        GetEccentricityPeriapsisRoot_MemoizedValue.field_0xc +
                              *(int *)&local_10[1].Location.OrbitParameters.Data.
                                       GetEccentricityApoapsisRoot_MemoizedValue.Data * 8));
  }
  bVar1 = false;
LAB_00734061:
  if (local_14 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_14);
  }
  bVar2 = Manager__IsCurrentlyTheActiveManager((Manager *)this->ParentStrategic);
  if (bVar2) {
util__KillBody((SpacecraftComponent *)&iStack_30);
    StrategicManager__OnFleetChanged(this->ParentStrategic);
  }
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  return bVar1;
}


//==== 00007345d0 007345d0_Fleet__SetHotKey ====
// decompiled by BatchDecomp @ 007345d0 name=SetHotKey conv=__thiscall body=47

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Fleet__SetHotKey(int,bool) */

void __thiscall Fleet__SetHotKey(Fleet *this,int param_1,bool param_2)

{
  if (param_2) {
    if (*(int *)&this[1].Location.OrbitParameters.Data.GetEccentricityApoapsisRoot_MemoizedValue.
                 IsValidData == param_1) {
      *(undefined4 *)
       &this[1].Location.OrbitParameters.Data.GetEccentricityApoapsisRoot_MemoizedValue.IsValidData
           = 0xffffffff;
      return;
    }
  }
  else {
    *(int *)&this[1].Location.OrbitParameters.Data.GetEccentricityApoapsisRoot_MemoizedValue.
             IsValidData = param_1;
  }
  return;
}


//==== 00007cbed0 007cbed0_SpacecraftComponent__AimWeapons ====
// decompiled by BatchDecomp @ 007cbed0 name=AimWeapons conv=__thiscall body=254

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftComponent__AimWeapons(class util__Maybe_L_double_G_) */

void __thiscall SpacecraftComponent__AimWeapons(SpacecraftComponent *this,Maybe_L_double_G_ param_1)

{
  CraftInstance *pCVar1;
  Maybe_L_double_G_ MVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pCVar1 = (CraftInstance *)(this->GetArmorCollisionShells_MemoizedValue).Data.Size;
  CraftInstance__GetWeaponModules_Memoize(pCVar1);
  if ((pCVar1->GetWeaponModules_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  iVar4 = (**(code **)((pCVar1->GetWeaponModules_MemoizedValue).Data._pad_0x0_0 + 0xc))();
  iVar6 = 0;
  if (0 < iVar4) {
    do {
      pCVar1 = (CraftInstance *)(this->GetArmorCollisionShells_MemoizedValue).Data.Size;
      local_c = ((int)&(((this->GetCompartmentCollisionShells_MemoizedValue).Data.Data)->Compartment
                       ).Pointer + iVar6) % iVar4;
      CraftInstance__GetWeaponModules_Memoize(pCVar1);
      if ((pCVar1->GetWeaponModules_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      piVar10 = &local_c;
      uVar9 = 0x7cbf7f;
      puVar5 = (undefined4 *)(**(code **)(pCVar1->GetWeaponModules_MemoizedValue).Data._pad_0x0_0)();
      uVar7 = param_1.Data;
      uVar8 = ((slice_view *)&param_1.Data)->_4_4_;
      uVar9 = CONCAT31((int3)((uint)uVar9 >> 8),param_1.IsValidData);
      if ((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) {
        bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]);
        if (!bVar3) {
          *puVar5 = 0;
        }
      }
      ((slice_view *)&MVar2.Data)->_4_4_ = uVar8;
      ((slice_view *)&MVar2.Data)->_0_4_ = uVar7;
      ((slice_view *)&MVar2)->_8_4_ = uVar9;
      ((slice_view *)&MVar2)->_12_4_ = piVar10;
      WeaponCompartment__AimWeapon((WeaponCompartment *)*puVar5,MVar2);
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007d3680 007d3680_SpacecraftComponent__GetTorque_N_m ====
// decompiled by BatchDecomp @ 007d3680 name=GetTorque_N_m conv=__thiscall body=535

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual struct Vec3_L_double_G_ __thiscall SpacecraftComponent__GetTorque_N_m(struct
   util::RotationalState3<double>)const  */

Vec3_L_double_G_ * __thiscall
SpacecraftComponent__GetTorque_N_m(SpacecraftComponent *this,Vec3_L_double_G_ *__return_storage_ptr__,
          RotationalState3_L_double_G_ param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4[16];
  undefined1 auVar5[16];
  Quaternion_L_double_G_ QVar6;
  Vec3_L_double_G_ VVar7;
  bool bVar8;
  Vec3_L_double_G_ *pVVar9;
  int iVar10;
  undefined4 *puVar11;
  double dVar12;
  undefined4 in_stack_00000008;
  undefined1 local_74[24];
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined8 uStack_44;
  double local_3c;
  double local_34;
  double local_2c;
  double local_24;
  undefined4 *local_1c[4];
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
     (bVar8 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
     !bVar8)) {
    this->_pad_0x0_0 = 0;
  }
  if (*(int *)(this->_pad_0x0_0 + 0x1e0) == 0) {
    *(undefined4 *)&__return_storage_ptr__->X = 0;
    *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = 0;
    *(undefined4 *)&__return_storage_ptr__->Y = 0;
    *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = 0;
    __return_storage_ptr__->Z = 0.0;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return __return_storage_ptr__;
  }
  local_5c = in_stack_00000008;
  uStack_58 = ((slice_view *)&param_1.Orientation.X)->_0_4_;
  uStack_54 = ((slice_view *)&param_1.Orientation)->_4_8_;
  local_4c = ((slice_view *)&param_1.Orientation.Y)->_4_4_;
  uStack_48 = ((slice_view *)&param_1.Orientation.Z)->_0_4_;
  uStack_44 = ((slice_view *)&param_1.Orientation)->_20_8_;
  if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
     (bVar8 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
     !bVar8)) {
    this->_pad_0x0_0 = 0;
  }
  pVVar9 = Body__GetCenterOfMass_km((Body *)this->_pad_0x0_0,(Vec3_L_double_G_ *)local_74);
  ((slice_view *)&auVar4)->_0_8_ = pVVar9->X;
  ((slice_view *)&auVar4)->_8_8_ = pVVar9->Y;
  local_2c = pVVar9->Z * /*408f400000000000*/1000.0;
  local_24 = ((slice_view *)&auVar4)->_0_8_ * /*408f400000000000*/1000.0;
  ((slice_view *)&local_74)->_16_4_ = ((slice_view *)&auVar4)->_8_4_;
  ((slice_view *)&local_74)->_8_8_ = ((slice_view *)&auVar4)->_8_8_ * /*408f400000000000*/1000.0;
  ((slice_view *)&local_74)->_20_4_ = ((slice_view *)&auVar4)->_12_4_;
  ((slice_view *)&QVar6.X)->_4_4_ = local_5c;
  ((slice_view *)&QVar6.X)->_0_4_ = local_1c;
  ((slice_view *)&QVar6.Y)->_0_4_ = uStack_58;
  ((slice_view *)&QVar6.Y)->_4_4_ = (undefined4)uStack_54;
  ((slice_view *)&QVar6.Z)->_0_4_ = ((slice_view *)&uStack_54)->_4_4_;
  ((slice_view *)&QVar6.Z)->_4_4_ = local_4c;
  ((slice_view *)&QVar6.W)->_0_4_ = uStack_48;
  ((slice_view *)&QVar6.W)->_4_4_ = (undefined4)uStack_44;
  ((slice_view *)&VVar7.X)->_4_4_ = ((slice_view *)&param_1.Orientation.W)->_4_4_;
  ((slice_view *)&VVar7.X)->_0_4_ = ((slice_view *)&uStack_44)->_4_4_;
  ((slice_view *)&VVar7.Y)->_0_4_ = ((slice_view *)&param_1.AngularVelocity.X)->_0_4_;
  ((slice_view *)&VVar7.Y)->_4_4_ = ((slice_view *)&param_1.AngularVelocity.X)->_4_4_;
  ((slice_view *)&VVar7.Z)->_0_4_ = ((slice_view *)&param_1.AngularVelocity.Y)->_0_4_;
  ((slice_view *)&VVar7.Z)->_4_4_ = ((slice_view *)&param_1.AngularVelocity.Y)->_4_4_;
  GetThrustersThatNeedToFire(this,QVar6,VVar7);
  local_c = 0;
  *(undefined4 *)&__return_storage_ptr__->X = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = 0;
  *(undefined4 *)&__return_storage_ptr__->Y = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = 0;
  __return_storage_ptr__->Z = 0.0;
  iVar10 = (*(code *)local_1c[0][3])();
  if (local_c < iVar10) {
    do {
      puVar11 = (undefined4 *)(*(code *)*local_1c[0])(&local_c);
      uStack_54 = *(double *)(puVar11 + 2) - local_24;
      local_3c = *(double *)(puVar11 + 4) - (double)((slice_view *)&local_74)->_8_8_;
      uStack_44 = *(double *)(puVar11 + 6) - local_2c;
      if (((ReferenceController *)puVar11[1] != (ReferenceController *)0x0) &&
         (bVar8 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar11[1]),
         !bVar8)) {
        *puVar11 = 0;
      }
      local_34 = EngineCompartment__GetMaxThrust_N((EngineCompartment *)*puVar11);
      dVar1 = *(double *)(puVar11 + 0x16);
      dVar2 = *(double *)(puVar11 + 0x14);
      local_c = local_c + 1;
      dVar12 = (local_34 * dVar2 * uStack_44 - *(double *)(puVar11 + 0x18) * local_34 * uStack_54) +
               __return_storage_ptr__->Y;
      dVar3 = __return_storage_ptr__->Z;
      ((slice_view *)&auVar5)->_8_4_ = *(undefined4 *)&dVar12;
      ((slice_view *)&auVar5)->_0_8_ = (*(double *)(puVar11 + 0x18) * local_34 * local_3c -
                     dVar1 * local_34 * uStack_44) + __return_storage_ptr__->X;
      ((slice_view *)&auVar5)->_12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      __return_storage_ptr__->X = (double)((slice_view *)&auVar5)->_0_8_;
      __return_storage_ptr__->Y = (double)((slice_view *)&auVar5)->_8_8_;
      __return_storage_ptr__->Z =
           (dVar1 * local_34 * uStack_54 - local_34 * dVar2 * local_3c) + dVar3;
      iVar10 = (*(code *)local_1c[0][3])();
    } while (local_c < iVar10);
  }
  util__Darray_struct_ThrusterLayout____Darray_struct_ThrusterLayout((Darray_L_struct_ThrusterLayout_G_ *)local_1c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 00007fc870 007fc870_TacticalManager__GetAllianceColor ====
// decompiled by BatchDecomp @ 007fc870 name=GetAllianceColor conv=__thiscall body=73

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct util::Color __thiscall TacticalManager__GetAllianceColor(class Faction *)const  */

Color * __thiscall
TacticalManager__GetAllianceColor(TacticalManager *this,Color *__return_storage_ptr__,Faction *param_1)

{
  TacticalManager_GetStrategicGame_Memoize(this);
  if (*(char *)&(this->Effects).Controller == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  StrategicManager__GetAllianceColor((StrategicManager *)(this->Effects).Pointer,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}


//==== 00007fe0b0 007fe0b0_TacticalManager__GetCombatAxis_Memoize ====
// decompiled by BatchDecomp @ 007fe0b0 name=TacticalManager_GetCombatAxis_Memoize conv=__thiscall body=540

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall TacticalManager__GetCombatAxis_Memoize(void)const  */

void __thiscall TacticalManager__GetCombatAxis_Memoize(TacticalManager *this)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  undefined4 *puVar8;
  Vec3_L_double_G_ *pVVar9;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_138[56];
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_100[56];
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_c8[16];
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_b8[16];
  Vec3_L_double_G_ local_a8;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined1 auStack_80[24];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((this->GetCombatAxis_MemoizedValue).IsValidData == false) {
    iVar2 = (this->TacticalManagerMemoizationHandlerInstance).ResetFunctions.Size;
    local_90 = (double)CONCAT44(iVar2 + 1,(undefined4)local_90);
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->TacticalManagerMemoizationHandlerInstance,
               (int *)((int)&local_90 + 4));
    bVar7 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->TacticalManagerMemoizationHandlerInstance,iVar2);
    if (bVar7) {
      (this->TacticalManagerMemoizationHandlerInstance).ResetFunctions.Data
      [(this->TacticalManagerMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_f910390b, TacticalManager__GetCombatAxis_Clear);
    }
    local_18 = 0;
    uStack_14 = 0;
    iStack_10 = 0;
    uStack_c = 0;
    GetAlliedBodies(this);
    FilterMostRelevantBodies(this,(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_18);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_b8);
    bVar7 = iStack_10 < 1;
    if (bVar7) {
      local_88 = 0;
      uStack_84 = 0;
      ((slice_view *)&auStack_80)->_0_4_ = 0;
      ((slice_view *)&auStack_80)->_4_4_ = 0;
      ((slice_view *)&auStack_80)->_8_8_ = 0.0;
    }
    else {
      puVar8 = (undefined4 *)GetCenterAndRadiusOfBodies_km(this,local_100,SUB41(&local_18,0));
      local_88 = *puVar8;
      uStack_84 = puVar8[1];
      ((slice_view *)&auStack_80)->_0_4_ = puVar8[2];
      ((slice_view *)&auStack_80)->_4_4_ = puVar8[3];
      ((slice_view *)&auStack_80)->_8_8_ = *(undefined8 *)(puVar8 + 4);
    }
    auStack_80[0x10] = !bVar7;
    bVar6 = (bool)auStack_80[0x10];
    local_48 = local_88;
    uStack_44 = uStack_84;
    uStack_40 = ((slice_view *)&auStack_80)->_0_4_;
    uStack_3c = ((slice_view *)&auStack_80)->_4_4_;
    local_90 = (double)((slice_view *)&auStack_80)->_8_8_;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_18);
    local_28 = 0;
    uStack_24 = 0;
    iStack_20 = 0;
    uStack_1c = 0;
    GetEnemyBodies(this);
    FilterMostRelevantBodies(this,(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_28);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_c8);
    bVar7 = iStack_20 < 1;
    if (bVar7) {
      local_88 = 0;
      uStack_84 = 0;
      ((slice_view *)&auStack_80)->_0_4_ = 0;
      ((slice_view *)&auStack_80)->_4_4_ = 0;
      ((slice_view *)&auStack_80)->_8_8_ = 0.0;
    }
    else {
      puVar8 = (undefined4 *)GetCenterAndRadiusOfBodies_km(this,local_138,SUB41(&local_28,0));
      local_88 = *puVar8;
      uStack_84 = puVar8[1];
      ((slice_view *)&auStack_80)->_0_4_ = puVar8[2];
      ((slice_view *)&auStack_80)->_4_4_ = puVar8[3];
      ((slice_view *)&auStack_80)->_8_8_ = *(undefined8 *)(puVar8 + 4);
    }
    auStack_80[0x10] = !bVar7;
    local_68 = local_88;
    uStack_64 = uStack_84;
    uStack_60 = ((slice_view *)&auStack_80)->_0_4_;
    uStack_5c = ((slice_view *)&auStack_80)->_4_4_;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_28);
    if ((auStack_80[0x10] == '\0') || (!bVar6)) {
      pVVar9 = &local_a8;
      local_a8.X = 0.0;
      local_a8.Y = 0.0;
      local_a8.Z = 0.0;
    }
    else {
      local_a8.X = (double)CONCAT44(uStack_64,local_68) - (double)CONCAT44(uStack_44,local_48);
      local_a8.Y = (double)CONCAT44(uStack_5c,uStack_60) - (double)CONCAT44(uStack_3c,uStack_40);
      local_a8.Z = (double)((slice_view *)&auStack_80)->_8_8_ - local_90;
      pVVar9 = util__Vec3_double___SafeNormalized(&local_a8,(Vec3_L_double_G_ *)auStack_80);
    }
    dVar1 = pVVar9->Z;
    uVar3 = *(undefined4 *)((int)&pVVar9->X + 4);
    uVar4 = *(undefined4 *)&pVVar9->Y;
    uVar5 = *(undefined4 *)((int)&pVVar9->Y + 4);
    ((slice_view *)&uStack_30)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_30)->_1_3_[0] | (((slice_view *)&uStack_30)->_1_3_[1] << 8) | (((slice_view *)&uStack_30)->_1_3_[2] << 16)) << 8));
    ((slice_view *)&local_38)->_0_4_ = *(undefined4 *)&dVar1;
    ((slice_view *)&local_38)->_4_4_ = *(undefined4 *)((char *)&dVar1 + 4);
    *(undefined4 *)&(this->GetCombatAxis_MemoizedValue).Data.X = *(undefined4 *)&pVVar9->X;
    *(undefined4 *)((int)&(this->GetCombatAxis_MemoizedValue).Data.X + 4) = uVar3;
    *(undefined4 *)&(this->GetCombatAxis_MemoizedValue).Data.Y = uVar4;
    *(undefined4 *)((int)&(this->GetCombatAxis_MemoizedValue).Data.Y + 4) = uVar5;
    *(undefined4 *)&(this->GetCombatAxis_MemoizedValue).Data.Z = (undefined4)local_38;
    *(undefined4 *)((int)&(this->GetCombatAxis_MemoizedValue).Data.Z + 4) = ((slice_view *)&local_38)->_4_4_;
    *(undefined4 *)&(this->GetCombatAxis_MemoizedValue).IsValidData = uStack_30;
    *(undefined4 *)((char *)&(this->GetCombatAxis_MemoizedValue) + 0x1c) = uStack_2c;
    local_38 = dVar1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007fe480 007fe480_TacticalManager__GetEnemyAlliance ====
// decompiled by BatchDecomp @ 007fe480 name=GetEnemyAlliance conv=__thiscall body=57

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class Faction * __thiscall TacticalManager__GetEnemyAlliance(void)const  */

Faction * __thiscall TacticalManager__GetEnemyAlliance(TacticalManager *this)

{
  Faction *pFVar1;
  
  TacticalManager_GetStrategicGame_Memoize(this);
  if (*(char *)&(this->Effects).Controller == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pFVar1 = StrategicManager__GetEnemyAlliance((StrategicManager *)(this->Effects).Pointer);
  return pFVar1;
}


//==== 00007fec40 007fec40_TacticalManager__GetPlayerAlliance ====
// decompiled by BatchDecomp @ 007fec40 name=GetPlayerAlliance conv=__thiscall body=57

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class Faction * __thiscall TacticalManager__GetPlayerAlliance(void)const  */

Faction * __thiscall TacticalManager__GetPlayerAlliance(TacticalManager *this)

{
  Faction *pFVar1;
  
  TacticalManager_GetStrategicGame_Memoize(this);
  if (*(char *)&(this->Effects).Controller == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pFVar1 = StrategicManager__GetPlayerAlliance((StrategicManager *)(this->Effects).Pointer);
  return pFVar1;
}


//==== 00007fefb0 007fefb0_TacticalManager__GetSelectedBodies ====
// decompiled by BatchDecomp @ 007fefb0 name=GetSelectedBodies conv=__thiscall body=28

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Darray<class util::WeakPtr<class Body> > __thiscall
   TacticalManager__GetSelectedBodies(void)const  */

Darray_L_class_util__WeakPtr_L_class_Body_G___G_ * __thiscall
TacticalManager__GetSelectedBodies(TacticalManager *this)

{
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *in_stack_00000004;
util__GetSelectedBodies(in_stack_00000004);
  return in_stack_00000004;
}


//==== 00007ffe30 007ffe30_TacticalManager__GetSpacecraftUI ====
#undef PauseMenu /* auto(v2): compat 僵尸宏撞成员名 */

// decompiled by BatchDecomp @ 007ffe30 name=GetSpacecraftUI conv=__thiscall body=57

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::WeakPtr<struct SpacecraftUIOverlay> __thiscall
   TacticalManager__GetSpacecraftUI(void)const  */

undefined4 __thiscall TacticalManager__GetSpacecraftUI(TacticalManager *this)

{
  ReferenceController *this_00;
  bool bVar1;
  undefined4 in_stack_00000004;
  
  this_00 = (this->PauseMenu).Controller;
  if (this_00 != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__IsDataStillValid(this_00);
    if (!bVar1) {
      (this->PauseMenu).Pointer = (PauseMenuHandler *)0x0;
    }
  }
  HUDTactical__GetSpacecraftUI((HUDTactical *)(this->PauseMenu).Pointer);
  return in_stack_00000004;
}


//==== 0000800060 00800060_TacticalManager__GetTacticalUI ====
#undef PauseMenu /* auto(v2): compat 僵尸宏撞成员名 */

// decompiled by BatchDecomp @ 00800060 name=GetTacticalUI conv=__thiscall body=40

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::WeakPtr<struct HUDTactical> __thiscall
   TacticalManager__GetTacticalUI(void)const  */

undefined4 * __thiscall TacticalManager__GetTacticalUI(TacticalManager *this)

{
  ReferenceController *this_00;
  undefined4 *in_stack_00000004;
  
  this_00 = (this->PauseMenu).Controller;
  *in_stack_00000004 = (this->PauseMenu).Pointer;
  in_stack_00000004[1] = this_00;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
  }
  return in_stack_00000004;
}


//==== 0000800b40 00800b40_TacticalManager__NewBody ====
#undef PauseMenu /* auto(v2): compat 僵尸宏撞成员名 */

// decompiled by BatchDecomp @ 00800b40 name=NewBody conv=__thiscall body=1351

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall TacticalManager__NewBody(class util::SharedPtr<class Body>) */

void __thiscall
TacticalManager__NewBody(TacticalManager *this,Body *param_2,ReferenceController *param_3)

{
  Faction *pFVar1;
  int iVar2;
  int iVar3;
  ReferenceController *pRVar4;
  bool bVar5;
  ActorHandler *pAVar6;
  Faction *pFVar7;
  CraftBlueprint *this_00;
  ReferenceControllerRegistry *this_01;
  Body *pBVar8;
  WeakPtr_L_SpacecraftComponent_G_ *pWVar9;
  ReferenceController *pRVar10;
  Body *local_18;
  WeakPtr_L_SpacecraftComponent_G_ local_14;
  char local_9;
  char local_8;
  char local_7;
  char local_6;
  char local_5;
  
  pBVar8 = param_2;
  pRVar10 = param_3;
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(param_3);
  }
  pWVar9 = &local_14;
  pAVar6 = (ActorHandler *)
           util__Darray_enum_CrewDepartment__Type___Num((Darray_L_enum_CrewDepartment__Type_G_ *)this);
ActorHandler__NewBody(pAVar6,pWVar9,pBVar8,pRVar10);
  if (local_14.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_14.Controller);
  }
  if (param_2->Alliance != (Faction *)0x0) {
    Body__GetSpacecraftComponent_Memoize(param_2);
    if ((param_2->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if ((((param_2->GetSpacecraftComponent_MemoizedValue).Data.Pointer != (SpacecraftComponent *)0x0
         ) && (pRVar10 = (param_2->GetSpacecraftComponent_MemoizedValue).Data.Controller,
              pRVar10 != (ReferenceController *)0x0)) &&
       (bVar5 = util__ReferenceController__IsDataStillValid(pRVar10), bVar5)) {
      local_5 = '\x01';
      goto LAB_00800bdf;
    }
  }
  local_5 = '\0';
LAB_00800bdf:
  pFVar1 = param_2->Alliance;
  TacticalManager_GetStrategicGame_Memoize(this);
  if (*(char *)&(this->Effects).Controller == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pFVar7 = StrategicManager__GetPlayerAlliance((StrategicManager *)(this->Effects).Pointer);
  local_6 = pFVar1 != pFVar7;
  pFVar1 = param_2->Alliance;
  TacticalManager_GetStrategicGame_Memoize(this);
  if (*(char *)&(this->Effects).Controller == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pFVar7 = StrategicManager__GetEnemyAlliance((StrategicManager *)(this->Effects).Pointer);
  local_7 = pFVar1 != pFVar7;
  pFVar1 = param_2->Alliance;
  TacticalManager_GetStrategicGame_Memoize(this);
  if (*(char *)&(this->Effects).Controller == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pFVar7 = StrategicManager__GetPlayerAlliance((StrategicManager *)(this->Effects).Pointer);
  local_8 = pFVar1 == pFVar7;
  pFVar1 = param_2->Alliance;
  TacticalManager_GetStrategicGame_Memoize(this);
  if (*(char *)&(this->Effects).Controller == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pFVar7 = StrategicManager__GetEnemyAlliance((StrategicManager *)(this->Effects).Pointer);
  local_9 = pFVar1 == pFVar7;
  if (local_5 != '\0') {
    Body__GetSpacecraftComponent_Memoize(param_2);
    if ((param_2->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if ((((param_2->GetSpacecraftComponent_MemoizedValue).Data.Pointer != (SpacecraftComponent *)0x0
         ) && (pRVar10 = (param_2->GetSpacecraftComponent_MemoizedValue).Data.Controller,
              pRVar10 != (ReferenceController *)0x0)) &&
       (bVar5 = util__ReferenceController__IsDataStillValid(pRVar10), bVar5)) {
      Body__GetSpacecraftComponent_Memoize(param_2);
      if ((param_2->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      pRVar10 = (param_2->GetSpacecraftComponent_MemoizedValue).Data.Controller;
      if ((pRVar10 != (ReferenceController *)0x0) &&
         (bVar5 = util__ReferenceController__IsDataStillValid(pRVar10), !bVar5)) {
        (param_2->GetSpacecraftComponent_MemoizedValue).Data.Pointer = (SpacecraftComponent *)0x0;
      }
      this_00 = SpacecraftComponent__GetCraftDesign((param_2->GetSpacecraftComponent_MemoizedValue).Data.Pointer);
      CraftBlueprint__IsAPayload_Memoize(this_00);
      if (*(char *)((int)&(this_00->GetMainEngineModulePlacers_MemoizedValue).Data.Capacity + 3) ==
          '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      if (*(char *)((int)&(this_00->GetMainEngineModulePlacers_MemoizedValue).Data.Capacity + 2) ==
          '\0') {
        pRVar10 = (this->PauseMenu).Controller;
        local_18 = (Body *)(this->PauseMenu).Pointer;
        pBVar8 = local_18;
        if (pRVar10 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar10);
          bVar5 = util__ReferenceController__IsDataStillValid(pRVar10);
          pBVar8 = local_18;
          if (!bVar5) {
            pBVar8 = (Body *)0x0;
          }
        }
        HUDTactical__RequestRebuildOfShips((HUDTactical *)pBVar8);
        if (pRVar10 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar10);
        }
      }
    }
  }
  Body__GetSpacecraftComponent_Memoize(param_2);
  if ((param_2->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if ((param_2->GetSpacecraftComponent_MemoizedValue).Data.Pointer != (SpacecraftComponent *)0x0) {
    local_14.Pointer = (SpacecraftComponent *)0x0;
    local_14.Controller = (ReferenceController *)0x0;
    Body__GetSpacecraftComponent_Memoize(param_2);
    if ((param_2->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    pRVar10 = (param_2->GetSpacecraftComponent_MemoizedValue).Data.Controller;
    local_14 = (param_2->GetSpacecraftComponent_MemoizedValue).Data;
    if (pRVar10 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar10);
    }
    util__Darray_class_util__WeakPtr_class_Body_____Add((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)
               &(this->Optimizers).SpacecraftComponents.Size,(WeakPtr_L_class_Body_G_ *)&local_14);
    if (local_6 != '\0') {
      util__Darray_class_util__WeakPtr_class_Body_____Add((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)
                 &(this->Optimizers).NonAlliedSpacecraftComponents.Size,
                 (WeakPtr_L_class_Body_G_ *)&local_14);
    }
    if (local_7 != '\0') {
      util__Darray_class_util__WeakPtr_class_Body_____Add((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)
                 &(this->Optimizers).NonEnemySpacecraftComponents.Size,
                 (WeakPtr_L_class_Body_G_ *)&local_14);
    }
    if (local_8 != '\0') {
      util__Darray_class_util__WeakPtr_class_Body_____Add((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)
                 &(this->Optimizers).AlliedSpacecraftComponents.Size,
                 (WeakPtr_L_class_Body_G_ *)&local_14);
    }
    if (local_9 != '\0') {
      util__Darray_class_util__WeakPtr_class_Body_____Add((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)
                 &(this->Optimizers).EnemySpacecraftComponents.Size,(WeakPtr_L_class_Body_G_ *)&local_14
                );
    }
    if (pRVar10 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(pRVar10);
    }
  }
  Body__GetCapitalShipComponent_Memoize(param_2);
  if ((param_2->GetCapitalShipComponent_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if ((param_2->GetCapitalShipComponent_MemoizedValue).Data.Pointer != (CapitalShipComponent *)0x0)
  {
    local_14.Controller = (ReferenceController *)param_2;
    Body__GetCapitalShipComponent_Memoize(param_2);
    if ((param_2->GetCapitalShipComponent_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    iVar2 = *(int *)&(this->Optimizers).BattleCenter_km.X;
    local_18 = (Body *)(iVar2 + 1);
    util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)
               &(this->Optimizers).CapitalShipComponents.Size,(int *)&local_18);
    bVar5 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)
                       &(this->Optimizers).CapitalShipComponents.Size,iVar2);
    if (bVar5) {
      iVar3 = *(int *)&(this->Optimizers).BattleCenter_km.X;
      iVar2 = (this->Optimizers).CapitalShipComponents.Capacity;
      pRVar10 = *(ReferenceController **)(iVar2 + -4 + iVar3 * 8);
      iVar2 = iVar2 + iVar3 * 8;
      *(int *)(iVar2 + -8) = local_14.Controller[6].StrongReferenceCount;
      pRVar4 = (ReferenceController *)local_14.Controller[6].WeakReferenceCount;
      *(ReferenceController **)(iVar2 + -4) = pRVar4;
      if (pRVar4 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar4);
      }
      if (pRVar10 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(pRVar10);
      }
    }
  }
  Body__GetDebrisComponent_Memoize(param_2);
  if ((param_2->GetDebrisComponent_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if ((param_2->GetDebrisComponent_MemoizedValue).Data.Pointer != (DebrisComponent *)0x0) {
    local_18 = param_2;
    Body__GetDebrisComponent_Memoize(param_2);
    if ((param_2->GetDebrisComponent_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    iVar2 = (this->Optimizers).SpacecraftComponents._pad_0x0_0;
    local_14.Controller = (ReferenceController *)(iVar2 + 1);
    util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&(this->Optimizers).DebrisComponents.Size
               ,(int *)&local_14.Controller);
    bVar5 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)
                       &(this->Optimizers).DebrisComponents.Size,iVar2);
    if (bVar5) {
      iVar3 = (this->Optimizers).SpacecraftComponents._pad_0x0_0;
      iVar2 = (this->Optimizers).DebrisComponents.Capacity;
      pRVar10 = *(ReferenceController **)(iVar2 + -4 + iVar3 * 8);
      iVar2 = iVar2 + iVar3 * 8;
      *(DebrisComponent **)(iVar2 + -8) = (local_18->GetDebrisComponent_MemoizedValue).Data.Pointer;
      pRVar4 = (local_18->GetDebrisComponent_MemoizedValue).Data.Controller;
      *(ReferenceController **)(iVar2 + -4) = pRVar4;
      if (pRVar4 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar4);
      }
      if (pRVar10 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(pRVar10);
      }
    }
  }
  if ((param_3 != (ReferenceController *)0x0) &&
     (bVar5 = util__ReferenceController__ReleaseStrongReference(param_3), bVar5)) {
    if (param_2 != (Body *)0x0) {
      (**(code **)(param_2->_pad_0x0_0 + 4))(1);
    }
    this_01 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(this_01,param_2);
  }
  return;
}


//==== 0000801350 00801350_TacticalManager__OnBodyUnallied ====
// decompiled by BatchDecomp @ 00801350 name=OnBodyUnallied conv=__thiscall body=300

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall TacticalManager__OnBodyUnallied(class util::WeakPtr<class Body>) */

void __thiscall
TacticalManager__OnBodyUnallied(TacticalManager *this,Body *param_2,ReferenceController *param_3)

{
  int *piVar1;
  SpacecraftComponent *pSVar2;
  ReferenceController *this_00;
  bool bVar3;
  int *piVar4;
  WeakPtr_L_SpacecraftComponent_G_ local_c;
  
  local_c.Pointer = (SpacecraftComponent *)0x0;
  local_c.Controller = (ReferenceController *)0x0;
  if ((param_3 != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__IsDataStillValid(param_3), !bVar3)) {
    param_2 = (Body *)0x0;
  }
  Body__GetSpacecraftComponent_Memoize(param_2);
  if ((param_2->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pSVar2 = (param_2->GetSpacecraftComponent_MemoizedValue).Data.Pointer;
  this_00 = (param_2->GetSpacecraftComponent_MemoizedValue).Data.Controller;
  local_c = (param_2->GetSpacecraftComponent_MemoizedValue).Data;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
  }
  if (pSVar2 != (SpacecraftComponent *)0x0) {
    if (this_00 == (ReferenceController *)0x0) goto LAB_00801467;
    bVar3 = util__ReferenceController__IsDataStillValid(this_00);
    if (bVar3) {
      piVar4 = (int *)(this->Optimizers).NonEnemySpacecraftComponents.Capacity;
      piVar1 = piVar4 + (this->Optimizers).NonAlliedSpacecraftComponents._pad_0x0_0 * 2;
      for (; piVar4 != piVar1; piVar4 = piVar4 + 2) {
        if ((this_00 == (ReferenceController *)piVar4[1]) &&
           (pSVar2 == (SpacecraftComponent *)*piVar4)) goto LAB_0080140f;
      }
      util__Darray_class_util__WeakPtr_class_Body_____Add((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)
                 &(this->Optimizers).NonEnemySpacecraftComponents.Size,
                 (WeakPtr_L_class_Body_G_ *)&local_c);
LAB_0080140f:
      piVar4 = (int *)(this->Optimizers).NonAlliedSpacecraftComponents.Capacity;
      piVar1 = piVar4 + (this->Optimizers).CapitalShipComponents._pad_0x0_0 * 2;
      for (; piVar4 != piVar1; piVar4 = piVar4 + 2) {
        if ((this_00 == (ReferenceController *)piVar4[1]) &&
           (pSVar2 == (SpacecraftComponent *)*piVar4)) goto LAB_0080143e;
      }
      util__Darray_class_util__WeakPtr_class_Body_____Add((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)
                 &(this->Optimizers).NonAlliedSpacecraftComponents.Size,
                 (WeakPtr_L_class_Body_G_ *)&local_c);
LAB_0080143e:
      util__Darray_class_util__WeakPtr_class_DebrisComponent_____SwapRemove((Darray_L_class_util__WeakPtr_L_class_DebrisComponent_G___G_ *)
                 &(this->Optimizers).EnemySpacecraftComponents.Size,
                 (WeakPtr_L_class_DebrisComponent_G_ *)&local_c);
      util__Darray_class_util__WeakPtr_class_DebrisComponent_____SwapRemove((Darray_L_class_util__WeakPtr_L_class_DebrisComponent_G___G_ *)
                 &(this->Optimizers).AlliedSpacecraftComponents.Size,
                 (WeakPtr_L_class_DebrisComponent_G_ *)&local_c);
    }
  }
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
LAB_00801467:
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  return;
}


//==== 0000801780 00801780_TacticalManager__OnSpacecraftSplit ====
// decompiled by BatchDecomp @ 00801780 name=OnSpacecraftSplit conv=__thiscall body=140

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall TacticalManager__OnSpacecraftSplit(class util::WeakPtr<class
   SpacecraftComponent>,class util::WeakPtr<class SpacecraftComponent>) */

void __thiscall
TacticalManager__OnSpacecraftSplit(TacticalManager *this,undefined4 param_2,ReferenceController *param_3,undefined4 param_4,
          ReferenceController *param_5)

{
  ReferenceController *pRVar1;
  ReferenceController *pRVar2;
  
  pRVar2 = param_5;
  if (param_5 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_5);
  }
  pRVar1 = param_3;
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_3);
  }
  TacticalManager_GetStrategicGame_Memoize(this);
  if (*(char *)&(this->Effects).Controller == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  StrategicManager__OnSpacecraftSplit((StrategicManager *)(this->Effects).Pointer,param_2,pRVar1,param_4,pRVar2);
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  if (param_5 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_5);
  }
  return;
}


//==== 00008039f0 008039f0_TacticalManager__SelectBody ====
// decompiled by BatchDecomp @ 008039f0 name=SelectBody conv=__thiscall body=99

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall TacticalManager__SelectBody(class util::WeakPtr<class Body>,bool) */

void __thiscall
TacticalManager__SelectBody(TacticalManager *this,undefined4 param_2,ReferenceController *param_3,undefined4 param_4)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_18,1);
  util__Darray_class_util__WeakPtr_class_Body_____Add((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_18,(WeakPtr_L_class_Body_G_ *)&param_2);
  SelectBodies(this,(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_18,SUB41(param_4,0));
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_18);
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

