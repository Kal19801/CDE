// pilot_sweep_sweep11.c - assembled by scripts/sweep_assemble.py (r19)
// reuses fam8_assemble fix passes (zip oracle/in-batch protos/vft channel/data closure)
/* ---- r20 incomplete-type forward decls (pointer-position only) ---- */
typedef struct AssocArray_L_class_Module__Darray_L_util__WeakPtr_L_ModuleCompartment_G___G___G AssocArray_L_class_Module__Darray_L_util__WeakPtr_L_ModuleCompartment_G___G___G;
typedef struct Attribute_L_class_util__Darray_L_class_util__Reflectable__G__G Attribute_L_class_util__Darray_L_class_util__Reflectable__G__G;
typedef struct Darray_L_GraphicsResource__Type_G_ Darray_L_GraphicsResource__Type_G_;
typedef struct Darray_L_struct_util__tuple2_L_class_WeaponModule__double_G__G Darray_L_struct_util__tuple2_L_class_WeaponModule__double_G__G;
typedef struct Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__double____thiscall_util__Reflectable_____void_const__G__G Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__double____thiscall_util__Reflectable_____void_const__G__G;
typedef struct Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__void____cdecl___void__G__G Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__void____cdecl___void__G__G;
typedef struct Darray_L_tuple2_L_util__Str_L_char_G__Cutil__Delegate_L_void_G___G___G Darray_L_tuple2_L_util__Str_L_char_G__Cutil__Delegate_L_void_G___G___G;
typedef struct class_util__Darray_L_class_util__Reflectable__G class_util__Darray_L_class_util__Reflectable__G;
typedef struct struct_util__tuple2_L_class_WeaponModule__double_G struct_util__tuple2_L_class_WeaponModule__double_G;
typedef struct struct_util__tuple2_L_class_util__Str_L_char_G__double____thiscall_util__Reflectable_____void_const__G struct_util__tuple2_L_class_util__Str_L_char_G__double____thiscall_util__Reflectable_____void_const__G;
typedef struct struct_util__tuple2_L_class_util__Str_L_char_G__void____cdecl___void__G struct_util__tuple2_L_class_util__Str_L_char_G__void____cdecl___void__G;
typedef struct util__Darray_L_class_util__SharedPtr_L_struct_CollisionHit_G___G util__Darray_L_class_util__SharedPtr_L_struct_CollisionHit_G___G;
typedef struct util__Darray_L_struct_CompartmentCollisionShell_G util__Darray_L_struct_CompartmentCollisionShell_G;
#include "port_prelude.h"
#include "cde_win32_compat.h"
#include "cde_types_r20.h"
typedef union {
  struct {
    undefined4 _0_4_;
  };
  struct {
    undefined1 _1_3_[3];
  };
  undefined1 raw[32];
} slice_view;
/* ---- r23 PDB complete types (value-position layouts, byte-exact) ---- */
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
typedef struct Vec3_L_double_G Vec3_L_double_G;
struct Vec3_L_double_G {
  double X;
  double Y;
  double Z;
};
/* ---- r21 hdr-conflict renames (decl stays OLD for game TUs; pilot impl+calls = NEW; linker aliases OLD -> NEW) ---- */
#undef CapitalShipComponent__HasBeenDamaged
#define CapitalShipComponent__HasBeenDamaged CapitalShipComponent__HasBeenDamaged__r20
#undef FUN_00535960
#define FUN_00535960 FUN_00535960__r20
#undef FUN_00535b00
#define FUN_00535b00 FUN_00535b00__r20
#undef FUN_005e21e0
#define FUN_005e21e0 FUN_005e21e0__r20
#undef FUN_0065e080
#define FUN_0065e080 FUN_0065e080__r20
#undef FUN_0066ff50
#define FUN_0066ff50 FUN_0066ff50__r20
#undef FUN_0067b510
#define FUN_0067b510 FUN_0067b510__r20
#undef FUN_0067dfd0
#define FUN_0067dfd0 FUN_0067dfd0__r20
#undef FUN_006fd220
#define FUN_006fd220 FUN_006fd220__r20
#undef ObjectViewer__GetTotalSizeOfAllObjects_km
#define ObjectViewer__GetTotalSizeOfAllObjects_km ObjectViewer__GetTotalSizeOfAllObjects_km__r20
#undef ScenarioEditor__dtor
#define ScenarioEditor__dtor ScenarioEditor__dtor__r20
/* ---- externs: stub-oracle names (K&R; ret types by call site) ---- */
extern int EngineCompartment_GetThrusterLayout(); /* K&R stub; ret by call site */
extern int NodeMouseOver__dtor(); /* K&R stub; ret by call site */
extern int util__Abs__o5(); /* K&R stub; ret by call site */
extern int util__Darray_class_util__Reflectable____Darray_class_util__Reflectable__o2(); /* K&R stub; ret by call site */
extern int util__Darray_struct_CompartmentCollisionShell___SetAll(); /* K&R stub; ret by call site */
extern int util__Darray_struct_MomentOfInertia__Particle___operator(); /* K&R stub; ret by call site */
/* ---- data refs: xmm consts / UNK data (cde_data_map.h __real_ idiom) ---- */
#define _UNK_0091eee4 (*(undefined4 *)(0x0091eee4u))
#define _UNK_0091eee8 (*(undefined4 *)(0x0091eee8u))
#define _UNK_0091eeec (*(undefined4 *)(0x0091eeecu))
#define _UNK_0091ef14 (*(undefined4 *)(0x0091ef14u))
#define _UNK_0091ef18 (*(undefined4 *)(0x0091ef18u))
#define _UNK_0091ef1c (*(undefined4 *)(0x0091ef1cu))

//==== 00004d1a30 004d1a30_Skybox__GetGridIndex ====
// decompiled by BatchDecomp @ 004d1a30 name=GetGridIndex conv=__thiscall body=271

/* public: struct CelestialGridIndices __thiscall Skybox__GetGridIndex(struct
   Vec3_L_double_G_)const  */

CelestialGridIndices __thiscall Skybox__GetGridIndex(Skybox *this,int *p1)

{
  int extraout_EDX;
  int iVar1;
  float10 fVar2;
  CelestialGridIndices CVar3;
  double dVar4;
  double dVar5;
  double in_stack_00000018;
  double local_1c;
  double local_14;
  double local_c;
  
  local_c = in_stack_00000018 * __real_4010000000000000 + __real_4010000000000000;
  local_c = util__Floor(&local_c);
  iVar1 = (int)local_c;
  fVar2 = (float10)__CIatan2();
  local_14 = (double)fVar2;
  local_c = (double)fVar2;
  if (NAN(local_c)) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\coremath.inl",
                    0x82,"!IsNan(Angle_radians)",(char *)0x0);
    DebugBreak();
  }
  local_c = local_c / __real_401921fb54442d18;
  dVar4 = util__Floor(&local_c);
  dVar5 = 0.0;
  local_14 = local_14 - dVar4 * __real_401921fb54442d18;
  if ((local_14 < __real_401921fb54442d18) &&
     ((dVar4 = local_14, 0.0 <= local_14 ||
      (dVar4 = local_14 + __real_401921fb54442d18,
      (NAN(dVar4) || NAN(__real_401921fb54442d18)) == (dVar4 == __real_401921fb54442d18))))) {
    dVar5 = dVar4;
  }
  local_1c = (dVar5 / __real_401921fb54442d18) * __real_4030000000000000;
  dVar5 = util__Floor(&local_1c);
  *p1 = iVar1;
  p1[1] = (int)dVar5;
  CVar3.Longitude = extraout_EDX;
  CVar3.Latitude = (int)p1;
  return CVar3;
}


//==== 00004ebfa0 004ebfa0_Icons__MultiaxialBurnGrabber ====
// decompiled by BatchDecomp @ 004ebfa0 name=MultiaxialBurnGrabber conv=unknown body=218

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void __cdecl Icons__MultiaxialBurnGrabber(void) */

void Icons__MultiaxialBurnGrabber(undefined1 *this)

{
  undefined4 unaff_retaddr;
  
  glColor(Yellow,1.0);
  DrawAntialiasedArc(__real_3fdccccccccccccd,0x24,(double)(__real_4002d97c7f3321d2 << 0x20),
                     (double)CONCAT44((int)__real_3fc3333333333333,
                                      (int)((ulonglong)__real_4002d97c7f3321d2 >> 0x20)),
                     (double)CONCAT44(unaff_retaddr,
                                      (int)((ulonglong)__real_3fc3333333333333 >> 0x20)));
  glColor(Cyan,1.0);
  DrawAntialiasedArc(__real_3fdccccccccccccd,0x24,(double)CONCAT44(_UNK_0091eee8,_UNK_0091eee4),
                     (double)CONCAT44((int)__real_3fc3333333333333,_UNK_0091eeec),
                     (double)CONCAT44(unaff_retaddr,
                                      (int)((ulonglong)__real_3fc3333333333333 >> 0x20)));
  glColor(Purple,1.0);
  DrawAntialiasedArc(__real_3fdccccccccccccd,0x24,(double)CONCAT44(_UNK_0091ef18,_UNK_0091ef14),
                     (double)CONCAT44((int)__real_3fc3333333333333,_UNK_0091ef1c),
                     (double)CONCAT44(unaff_retaddr,
                                      (int)((ulonglong)__real_3fc3333333333333 >> 0x20)));
  BurnGrabber();
  return;
}


//==== 00004fad30 004fad30_ObjectViewer__GetTotalSizeOfAllObjects_km ====
// decompiled by BatchDecomp @ 004fad30 name=GetTotalSizeOfAllObjects_km conv=__thiscall body=165

/* public: double __thiscall ObjectViewer__GetTotalSizeOfAllObjects_km(void)const  */

double __thiscall ObjectViewer__GetTotalSizeOfAllObjects_km(ObjectViewer *this)

{
  undefined4 stack0xfffffffc;
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 extraout_ST0;
  void *local_20;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar1 = (int *)util__Attribute_class_util__Darray_class_util__Reflectable______Get((Attribute_L_class_util__Darray_L_class_util__Reflectable__G__G *)
                             &this->Objects);
  local_c = 0;
  iVar2 = (**(code **)(*(int *)(uintptr_t)piVar1 + 0xc))();
  if (local_c < iVar2) {
    do {
      puVar3 = (undefined4 *)(**(code **)*piVar1)(&local_c);
      GetRadiusOfObject_km(this,(Reflectable *)*puVar3);
      local_c = local_c + 1;
      iVar2 = (**(code **)(*(int *)(uintptr_t)piVar1 + 0xc))();
    } while (local_c < iVar2);
  }
  if (local_20 != (void *)0x0) {
    operator_delete__(local_20);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 0000523e20 00523e20_FUN_00523e20 ====
// decompiled by BatchDecomp @ 00523e20 name=FUN_00523e20 conv=unknown body=1070

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00523e20(int *param_1,double *param_2)

{
  undefined4 stack0xfffffffc;
  double dVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  Maybe_L_double_G_ *pMVar5;
  double *pdVar6;
  float10 fVar7;
  double dVar8;
  Maybe_L_double_G local_124;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined8 local_104;
  double local_fc;
  undefined8 uStack_f4;
  undefined4 uStack_f0;
  Vec3_L_double_G local_ec;
  double local_d4;
  double local_cc;
  double local_c4;
  double local_bc;
  double local_b4;
  double *local_ac;
  int *local_a8;
  double local_a4;
  double dStack_9c;
  undefined8 local_94;
  ThrusterLayout local_8c;
  Vec3_L_double_G local_24;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_a8 = param_1;
  local_c = 0;
  iVar3 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
  if (local_c < iVar3) {
    local_ac = param_2;
    do {
      pdVar6 = local_ac;
      piVar4 = (int *)(**(code **)*param_1)(&local_c);
      if (((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]),
         !bVar2)) {
        *piVar4 = 0;
      }
      EngineCompartment_GetThrusterLayout((EngineCompartment *)*piVar4,&local_8c,0);
      if (((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]),
         !bVar2)) {
        *piVar4 = 0;
      }
      fVar7 = (float10)(**(code **)(**(int **)(*(int *)(uintptr_t)piVar4 + 0x38) + 0x180))();
      local_24.X = local_8c.ThrustPosition_m.X - *pdVar6;
      local_cc = (double)fVar7;
      local_24.Y = local_8c.ThrustPosition_m.Y - pdVar6[1];
      local_24.Z = local_8c.ThrustPosition_m.Z - pdVar6[2];
      util__Vec3_double___SafeNormalized(&local_24,&local_ec);
      bVar2 = false;
      iVar3 = 0;
      local_d4 = local_ec.Z * 0.0;
      local_b4 = 0.0;
      local_bc = local_ec.X * 0.0 - local_ec.Y * 0.0;
      do {
        dVar8 = (double)(int)((uint)(iVar3 == 0) * 2 + -1);
        local_24.X = dVar8 * local_ec.Y - local_d4;
        local_24.Y = local_d4 - dVar8 * local_ec.X;
        local_24.Z = local_bc;
        local_94 = util__Abs__o5(&local_24.X);
        if (((__real_3f847ae147ae147b < local_94) ||
            (local_94 = util__Abs__o5(&local_24.Y), __real_3f847ae147ae147b < local_94)) ||
           (local_94 = util__Abs__o5(&local_24.Z), __real_3f847ae147ae147b < local_94)) {
          local_c4 = local_24.Y * local_24.Y + local_24.X * local_24.X + local_24.Z * local_24.Z;
          pMVar5 = util__Sqrt(&local_124,&local_c4);
          if (pMVar5->IsValidData == false) {
            util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13
                            ,"IsValid()",(char *)0x0);
            DebugBreak();
          }
          dVar8 = pMVar5->Data;
          dVar1 = __real_3ff0000000000000 / dVar8;
          if ((((NAN(local_24.X) == (local_24.X == 0.0)) || (NAN(local_24.Y) == (local_24.Y == 0.0))
               ) || (NAN(local_24.Z) == (local_24.Z == 0.0))) && (NAN(dVar8) == (dVar8 == 0.0))) {
            pdVar6 = &local_a4;
            local_a4 = local_24.X * dVar1;
            dStack_9c = local_24.Y * dVar1;
            local_94 = local_24.Z * dVar1;
          }
          else {
            local_104 = 0;
            local_114 = 0;
            uStack_110 = 0;
            uStack_10c = 0;
            uStack_108 = 0;
            pdVar6 = (double *)&local_114;
          }
          local_24.X = *pdVar6;
          local_24.Y = pdVar6[1];
          local_24.Z = pdVar6[2];
          dVar8 = util__FUN_00523e20(local_8c.UngimballedDirection.Y * local_24.Y +
                             local_8c.UngimballedDirection.X * local_24.X +
                             local_8c.UngimballedDirection.Z * local_24.Z);
          dVar8 = dVar8 - local_cc;
          local_fc = dVar8;
          if ((bVar2) && (local_fc = local_b4, dVar8 <= local_b4)) {
            local_fc = dVar8;
          }
          ((slice_view *)&uStack_f4)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_f4)->_1_3_[0] | (((slice_view *)&uStack_f4)->_1_3_[1] << 8) | (((slice_view *)&uStack_f4)->_1_3_[2] << 16)) << 8));
          local_94 = (double)CONCAT44(uStack_f0,uStack_f4);
          bVar2 = true;
          local_b4 = local_fc;
          dStack_9c = local_fc;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 2);
      if ((!bVar2) ||
         (local_bc = CraftBlueprint__GetTorqueAngleThreshold_radians(), local_bc < local_b4)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((ReferenceController *)local_8c.Engine.Controller != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference((ReferenceController *)local_8c.Engine.Controller);
      }
      param_1 = local_a8;
      if (bVar2) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*(int *)(uintptr_t)local_a8 + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000525ba0 00525ba0_FUN_00525ba0 ====
// decompiled by BatchDecomp @ 00525ba0 name=FUN_00525ba0 conv=unknown body=470

void FUN_00525ba0(Darray_L_struct_MaterialConstituent_G_ *param_1,int *param_2)

{
  undefined4 stack0xfffffffc;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int local_20;
  undefined **local_1c;
  undefined4 *puStack_18;
  undefined8 uStack_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar6 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  *(undefined ***)param_1 = ((void *)(0x00919b30u));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar6;
  if (((int)uVar6 < 0) || (0x3fffffff < (int)uVar6)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar6) {
    puVar7 = (undefined4 *)
             operator_new__(-(uint)((int)((ulonglong)uVar6 * 0x10 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar6 * 0x10));
    puVar11 = puVar7;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar11 = 0;
        *(undefined8 *)(puVar11 + 2) = 0;
        puVar11 = puVar11 + 4;
      }
    }
    iVar10 = 0;
    *(undefined4 **)(param_1 + 4) = puVar7;
    if (0 < *(int *)(param_1 + 0xc)) {
      iVar9 = 0;
      do {
        iVar9 = iVar9 + 0x10;
        local_1c = (undefined **)0x0;
        iVar10 = iVar10 + 1;
        uStack_14 = 0;
        puVar11 = (undefined4 *)(*(int *)(param_1 + 4) + -0x10 + iVar9);
        *puVar11 = 0;
        puVar11[1] = puStack_18;
        puVar11[2] = 0;
        puVar11[3] = 0;
      } while (iVar10 < *(int *)(param_1 + 0xc));
    }
  }
  local_c = 0;
  iVar10 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  if (local_c < iVar10) {
    do {
      piVar8 = (int *)(**(code **)*param_2)(&local_c);
      if (((ReferenceController *)piVar8[1] != (ReferenceController *)0x0) &&
         (bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar8[1]),
         !bVar5)) {
        *piVar8 = 0;
      }
      (**(code **)(**(int **)(*(int *)(uintptr_t)piVar8 + 0x38) + 0x170))(&local_1c);
      if (*(int *)(param_1 + 8) == 0) {
        util__Darray_struct_MaterialConstituent___operator
                  (param_1,(Darray_L_struct_MaterialConstituent_G_ *)&local_1c);
      }
      else {
        iVar10 = (*(code *)local_1c[3])();
        if (iVar10 != 0) {
          iVar10 = *(int *)(param_1 + 8);
          local_20 = (*(code *)local_1c[3])();
          local_20 = local_20 + *(int *)(param_1 + 8);
          util__Darray_struct_MaterialConstituent___SetSize(param_1,&local_20);
          util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize((Darray_L_struct_util__tuple2_L_class_WeaponModule__double_G__G *)param_1,iVar10);
          puVar7 = (undefined4 *)(iVar10 * 0x10 + *(int *)(param_1 + 4));
          puVar11 = puStack_18;
          if (puVar7 != (undefined4 *)(*(int *)(param_1 + 8) * 0x10 + *(int *)(param_1 + 4))) {
            do {
              uVar1 = *puVar11;
              uVar2 = puVar11[1];
              uVar3 = puVar11[2];
              uVar4 = puVar11[3];
              puVar11 = puVar11 + 4;
              *puVar7 = uVar1;
              puVar7[1] = uVar2;
              puVar7[2] = uVar3;
              puVar7[3] = uVar4;
              puVar7 = puVar7 + 4;
            } while (puVar7 != (undefined4 *)(*(int *)(param_1 + 8) * 0x10 + *(int *)(param_1 + 4)))
            ;
          }
        }
      }
      local_1c = ((void *)(0x00919b30u));
      if (puStack_18 != (undefined4 *)0x0) {
        operator_delete__(puStack_18);
      }
      local_c = local_c + 1;
      puStack_18 = (undefined4 *)0x0;
      local_1c = ((void *)(0x00919488u));
      iVar10 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
    } while (local_c < iVar10);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000052d960 0052d960_CraftInstance__GetCompartmentHitsFromRayIntersect ====
// decompiled by BatchDecomp @ 0052d960 name=GetCompartmentHitsFromRayIntersect conv=__thiscall body=384

/* public: class util__Darray_L_class_util__SharedPtr_L_struct_CollisionHit_G___G __thiscall
   CraftInstance__GetCompartmentHitsFromRayIntersect(struct util__Line3_L_double_G_,class
   util__Darray_L_struct_CompartmentCollisionShell_G const &)const  */

undefined4 * __thiscall
CraftInstance__GetCompartmentHitsFromRayIntersect(CraftInstance *this,undefined4 *p1,undefined1 *p2)

{
  undefined4 stack0xfffffffc;
  int iVar1;
  ReferenceController *this_00;
  uint *puVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  ReferenceControllerRegistry *this_01;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int *in_stack_00000038;
  void *pvVar9;
  int *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *p1 = 0;
  p1[1] = 0;
  p1[2] = 0;
  p1[3] = 0;
  local_c = in_stack_00000038;
  iVar4 = (**(code **)(*(int *)(uintptr_t)in_stack_00000038 + 0xc))();
  *p1 = ((void *)(0x0092009cu));
  uVar8 = iVar4 * 2;
  p1[1] = 0;
  p1[2] = 0;
  p1[3] = uVar8;
  if (((int)uVar8 < 0) || (0x3fffffff < (int)uVar8)) {
    p1[3] = 0;
  }
  else if (0 < (int)uVar8) {
    uVar7 = -(uint)((int)((ulonglong)uVar8 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar8 * 8);
    puVar5 = (uint *)operator_new__(-(uint)(0xfffffffb < uVar7) | uVar7 + 4);
    if (puVar5 == (uint *)0x0) {
      puVar5 = (uint *)0x0;
    }
    else {
      *puVar5 = uVar8;
      puVar5 = puVar5 + 1;
      puVar2 = puVar5;
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = puVar2 + 2;
      }
    }
    iVar4 = 0;
    p1[1] = puVar5;
    in_stack_00000038 = local_c;
    if (0 < (int)p1[3]) {
      do {
        iVar1 = p1[1];
        this_00 = *(ReferenceController **)(iVar1 + 4 + iVar4 * 8);
        pvVar9 = *(void **)(iVar1 + iVar4 * 8);
        *(undefined4 *)(iVar1 + iVar4 * 8) = 0;
        *(undefined4 *)(iVar1 + 4 + iVar4 * 8) = 0;
        if ((this_00 != (ReferenceController *)0x0) &&
           (bVar3 = util__ReferenceController__ReleaseStrongReference(this_00), bVar3)) {
          if (pvVar9 != (void *)0x0) {
            if (*(ReferenceController **)((int)pvVar9 + 0x8c) != (ReferenceController *)0x0) {
              util__ReferenceController__ReleaseWeakReference(*(ReferenceController **)((int)pvVar9 + 0x8c));
            }
            operator_delete(pvVar9,0x1b0);
          }
          this_01 = util__ReferenceControllerRegistry__Get();
          util__ReferenceControllerRegistry__PointerWasDestroyed(this_01,pvVar9);
        }
        iVar4 = iVar4 + 1;
        in_stack_00000038 = local_c;
      } while (iVar4 < (int)p1[3]);
    }
  }
  local_c = (int *)0x0;
  iVar4 = (**(code **)(*(int *)(uintptr_t)in_stack_00000038 + 0xc))();
  if ((int)local_c < iVar4) {
    do {
      uVar6 = (**(code **)*in_stack_00000038)(&local_c);
      FUN_005291e0(uVar6);
      local_c = (int *)((int)local_c + 1);
      iVar4 = (**(code **)(*(int *)(uintptr_t)in_stack_00000038 + 0xc))();
    } while ((int)local_c < iVar4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return p1;
}


//==== 0000532b80 00532b80_util__Darray_struct_CompartmentCollisionShell___Last ====
// decompiled by BatchDecomp @ 00532b80 name=Last conv=__thiscall body=59

/* public: virtual struct CompartmentCollisionShell const & __thiscall util__Darray_L_struct____CompartmentCollisionShell_G___Last(void)const  */

undefined1 * __thiscall
util__Darray_L_struct_CompartmentCollisionShell_G___Last(Darray_L_struct_CompartmentCollisionShell_G_ *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3d,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = *(int *)(this + 8);
  }
  return (undefined1 *)(*(int *)(this + 4) + -0x118 + iVar1 * 0x118);
}


//==== 0000532d30 00532d30_util__Darray_struct_CompartmentCollisionShell___SetAll ====
// decompiled by BatchDecomp @ 00532d30 name=SetAll conv=__thiscall body=261

/* public: virtual void __thiscall util__Darray_struct_CompartmentCollisionShell___SetAll(struct
   CompartmentCollisionShell const &) */

void __thiscall
util__Darray_L_struct_CompartmentCollisionShell_G___SetAll
          (Darray_L_struct_CompartmentCollisionShell_G_ *this,undefined1 *p1)

{
  ReferenceController *this_00;
  ReferenceController *this_01;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar5 = *(undefined4 **)(this + 4);
  if (puVar5 != puVar5 + *(int *)(this + 8) * 0x46) {
    do {
      this_00 = (ReferenceController *)puVar5[1];
      *puVar5 = *(undefined4 *)p1;
      this_01 = *(ReferenceController **)(p1 + 4);
      puVar5[1] = this_01;
      if (this_01 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(this_01);
      }
      if (this_00 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(this_00);
      }
      puVar5[2] = *(undefined4 *)(p1 + 8);
      puVar5[3] = *(undefined4 *)(p1 + 0xc);
      puVar6 = (undefined4 *)(p1 + 0x10);
      puVar7 = puVar5 + 4;
      for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      uVar1 = *(undefined4 *)(p1 + 0x94);
      uVar2 = *(undefined4 *)(p1 + 0x98);
      uVar3 = *(undefined4 *)(p1 + 0x9c);
      puVar5[0x24] = *(undefined4 *)(p1 + 0x90);
      puVar5[0x25] = uVar1;
      puVar5[0x26] = uVar2;
      puVar5[0x27] = uVar3;
      uVar1 = *(undefined4 *)(p1 + 0xa4);
      uVar2 = *(undefined4 *)(p1 + 0xa8);
      uVar3 = *(undefined4 *)(p1 + 0xac);
      puVar5[0x28] = *(undefined4 *)(p1 + 0xa0);
      puVar5[0x29] = uVar1;
      puVar5[0x2a] = uVar2;
      puVar5[0x2b] = uVar3;
      uVar1 = *(undefined4 *)(p1 + 0xb4);
      uVar2 = *(undefined4 *)(p1 + 0xb8);
      uVar3 = *(undefined4 *)(p1 + 0xbc);
      puVar5[0x2c] = *(undefined4 *)(p1 + 0xb0);
      puVar5[0x2d] = uVar1;
      puVar5[0x2e] = uVar2;
      puVar5[0x2f] = uVar3;
      uVar1 = *(undefined4 *)(p1 + 0xc4);
      uVar2 = *(undefined4 *)(p1 + 200);
      uVar3 = *(undefined4 *)(p1 + 0xcc);
      puVar5[0x30] = *(undefined4 *)(p1 + 0xc0);
      puVar5[0x31] = uVar1;
      puVar5[0x32] = uVar2;
      puVar5[0x33] = uVar3;
      uVar1 = *(undefined4 *)(p1 + 0xd4);
      uVar2 = *(undefined4 *)(p1 + 0xd8);
      uVar3 = *(undefined4 *)(p1 + 0xdc);
      puVar5[0x34] = *(undefined4 *)(p1 + 0xd0);
      puVar5[0x35] = uVar1;
      puVar5[0x36] = uVar2;
      puVar5[0x37] = uVar3;
      uVar1 = *(undefined4 *)(p1 + 0xe4);
      uVar2 = *(undefined4 *)(p1 + 0xe8);
      uVar3 = *(undefined4 *)(p1 + 0xec);
      puVar5[0x38] = *(undefined4 *)(p1 + 0xe0);
      puVar5[0x39] = uVar1;
      puVar5[0x3a] = uVar2;
      puVar5[0x3b] = uVar3;
      uVar1 = *(undefined4 *)(p1 + 0xf4);
      uVar2 = *(undefined4 *)(p1 + 0xf8);
      uVar3 = *(undefined4 *)(p1 + 0xfc);
      puVar5[0x3c] = *(undefined4 *)(p1 + 0xf0);
      puVar5[0x3d] = uVar1;
      puVar5[0x3e] = uVar2;
      puVar5[0x3f] = uVar3;
      uVar1 = *(undefined4 *)(p1 + 0x104);
      uVar2 = *(undefined4 *)(p1 + 0x108);
      uVar3 = *(undefined4 *)(p1 + 0x10c);
      puVar5[0x40] = *(undefined4 *)(p1 + 0x100);
      puVar5[0x41] = uVar1;
      puVar5[0x42] = uVar2;
      puVar5[0x43] = uVar3;
      *(undefined8 *)(puVar5 + 0x44) = *(undefined8 *)(p1 + 0x110);
      puVar5 = puVar5 + 0x46;
    } while (puVar5 != (undefined4 *)(*(int *)(this + 8) * 0x118 + *(int *)(this + 4)));
  }
  return;
}


//==== 0000535960 00535960_FUN_00535960 ====
// decompiled by BatchDecomp @ 00535960 name=FUN_00535960 conv=unknown body=415

/* WARNING: Removing unreachable block (ram,0x00535a61) */

void FUN_00535960(int *param_1,int *param_2,Darray_L_util__Reflectable_P_G_ *param_3)

{
  undefined4 stack0xfffffffc;
  int *piVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined8 local_28;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = 0;
  iVar3 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
  if (local_10 < iVar3) {
    do {
      piVar4 = (int *)(**(code **)*param_1)(&local_10);
      local_18 = param_2;
      iVar3 = *piVar4;
      if (*(char *)(iVar3 + 0x4a0) == '\0') {
        iVar7 = *(int *)(iVar3 + 0x2c8);
        local_14 = iVar7 + 1;
        util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)(iVar3 + 0x2c0),&local_14);
        bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)(iVar3 + 0x2c0),iVar7);
        if (bVar2) {
          *(code **)(*(int *)(iVar3 + 0x2c4) + -4 + *(int *)(iVar3 + 0x2c8) * 4) =
               CraftBlueprint__GetTotalCrewSupplied_Clear;
        }
        iVar9 = 0;
        local_14 = 0;
        local_c = 0;
        iVar5 = (**(code **)(*(int *)(iVar3 + 0x34) + 0xc))();
        iVar7 = local_14;
        if (local_c < iVar5) {
          iVar9 = 0;
          do {
            puVar6 = (undefined4 *)(*(code *)**(undefined4 **)(iVar3 + 0x34))(&local_c);
            iVar7 = (**(code **)(*(int *)*puVar6 + 0xbc))();
            local_c = local_c + 1;
            iVar9 = iVar9 + iVar7 * puVar6[1];
            iVar5 = (**(code **)(*(int *)(iVar3 + 0x34) + 0xc))();
            iVar7 = iVar9;
          } while (local_c < iVar5);
        }
        local_14 = iVar7;
        ((slice_view *)&local_28)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&local_28)->_1_3_[0] | (((slice_view *)&local_28)->_1_3_[1] << 8) | (((slice_view *)&local_28)->_1_3_[2] << 16)) << 8));
        *(int *)(iVar3 + 0x49c) = iVar9;
        *(undefined4 *)(iVar3 + 0x4a0) = local_28;
      }
      piVar8 = *(int **)(*local_18 + 4);
      piVar1 = piVar8 + *(int *)(*local_18 + 8);
      for (; piVar8 != piVar1; piVar8 = piVar8 + 1) {
        if (*piVar8 == iVar3) goto LAB_00535adb;
      }
      if ((*(char *)local_18[1] == '\0') || (*(int *)(iVar3 + 0x49c) < 1)) {
        iVar3 = *(int *)(param_3 + 8);
        local_18 = (int *)(iVar3 + 1);
        util__Darray_class_util__Reflectable____SetSize(param_3,(int *)&local_18);
        bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)param_3,iVar3);
        if (bVar2) {
          *(int *)(*(int *)(param_3 + 4) + -4 + *(int *)(param_3 + 8) * 4) = *piVar4;
        }
      }
LAB_00535adb:
      local_10 = local_10 + 1;
      iVar3 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
    } while (local_10 < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000535b00 00535b00_FUN_00535b00 ====
// decompiled by BatchDecomp @ 00535b00 name=FUN_00535b00 conv=unknown body=352

void FUN_00535b00(int *param_1,undefined4 param_2,Darray_L_util__Reflectable_P_G_ *param_3)

{
  undefined4 stack0xfffffffc;
  uint uVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  char *pcVar6;
  char cVar7;
  char *pcVar8;
  int iVar9;
  void *local_24 [3];
  int *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_18 = param_1;
  local_c = 0;
  iVar3 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
  if (local_c < iVar3) {
    do {
      local_14 = (undefined4 *)(**(code **)*param_1)(&local_c);
      local_10 = (undefined4 *)(*(code *)**(undefined4 **)*local_14)();
      iVar3 = 0;
      do {
        iVar9 = iVar3;
        iVar3 = iVar9 + 1;
      } while ("CraftBlueprint"[iVar9 + 1] != '\0');
      uVar1 = iVar9 + 2;
      pcVar4 = (char *)operator_new__(uVar1);
      if (pcVar4 == (char *)0x0) {
        pcVar4 = (char *)0x0;
      }
      else {
        memset(pcVar4,0,uVar1);
      }
      cVar7 = 'C';
      pcVar6 = pcVar4;
      do {
        *pcVar6 = cVar7;
        pcVar6 = pcVar6 + 1;
        cVar7 = pcVar6[(int)"CraftBlueprint" - (int)pcVar4];
      } while (cVar7 != '\0');
      *pcVar6 = '\0';
      puVar5 = (undefined4 *)(**(code **)*local_10)(local_24);
      if (puVar5[2] == iVar9 + 1) {
        if ((int)puVar5[1] < 1) {
          pcVar6 = "";
        }
        else {
          pcVar6 = (char *)*puVar5;
        }
        cVar7 = *pcVar6;
        pcVar8 = "";
        if (0 < (int)uVar1) {
          pcVar8 = pcVar4;
        }
        if (cVar7 != '\0') {
          iVar3 = (int)pcVar8 - (int)pcVar6;
          do {
            if (cVar7 != pcVar6[iVar3]) goto LAB_00535ba5;
            cVar7 = pcVar6[1];
            pcVar6 = pcVar6 + 1;
          } while (cVar7 != '\0');
        }
        bVar2 = true;
      }
      else {
LAB_00535ba5:
        bVar2 = false;
      }
      if (local_24[0] != (void *)0x0) {
        operator_delete__(local_24[0]);
        local_24[0] = (void *)0x0;
      }
      if (pcVar4 != (char *)0x0) {
        operator_delete__(pcVar4);
      }
      if (bVar2) {
        iVar3 = *(int *)(param_3 + 8);
        local_10 = (undefined4 *)(iVar3 + 1);
        util__Darray_class_util__Reflectable____SetSize(param_3,(int *)&local_10);
        bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)param_3,iVar3);
        if (bVar2) {
          *(undefined4 *)(*(int *)(param_3 + 4) + -4 + *(int *)(param_3 + 8) * 4) = *local_14;
        }
      }
      param_1 = local_18;
      local_c = local_c + 1;
      iVar3 = (**(code **)(*(int *)(uintptr_t)local_18 + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000536c90 00536c90_FUN_00536c90 ====
// decompiled by BatchDecomp @ 00536c90 name=FUN_00536c90 conv=unknown body=452

void FUN_00536c90(int *param_1,CraftBlueprint *param_2,Darray_L_util__Reflectable_P_G_ *param_3)

{
  undefined4 stack0xfffffffc;
  char cVar1;
  bool bVar2;
  int iVar3;
  ModulePlacer *pMVar4;
  int *piVar5;
  int *piVar6;
  undefined **local_40;
  void *local_3c;
  int *local_30;
  ModulePlacer *local_2c;
  undefined **local_28;
  void *local_24;
  char local_17;
  char local_16;
  char local_15;
  Module *local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_30 = param_1;
  local_10 = 0;
  iVar3 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
  if (local_10 < iVar3) {
    do {
      pMVar4 = (ModulePlacer *)(**(code **)*param_1)(&local_10);
      local_2c = pMVar4;
      local_16 = CraftBlueprint__IsRadiatorModuleNotInUse(param_2,pMVar4);
      local_15 = CraftBlueprint__IsAmmoBayIrrelevant(param_2,pMVar4);
      local_17 = CraftBlueprint__DoesRefuelerNotHaveReactionMass(param_2,pMVar4);
      iVar3 = (**(code **)(pMVar4->ModuleType->_pad_0x0_0 + 0x130))();
      if (iVar3 == 0) {
        local_14 = pMVar4->ModuleType;
        iVar3 = (**(code **)(local_14->_pad_0x0_0 + 0x178))();
        if (iVar3 == 0) {
          bVar2 = false;
        }
        else {
          CraftBlueprint__GetModulesOfType(param_2,(Type)&local_40);
util__FUN_00536c90((Darray_L_class_Module_P_G_ *)&local_28);
          local_40 = ((void *)(0x009199e4u));
          if (local_3c != (void *)0x0) {
            operator_delete__(local_3c);
          }
          local_3c = (void *)0x0;
          local_40 = ((void *)(0x00919488u));
          local_c = 0;
          iVar3 = (*(code *)local_28[3])();
          if (local_c < iVar3) {
            do {
              piVar5 = (int *)(*(code *)*local_28)(&local_c);
              piVar5 = (int *)*piVar5;
              cVar1 = (**(code **)(*(int *)(uintptr_t)piVar5 + 0x170))();
              if ((cVar1 != '\0') &&
                 (piVar6 = (int *)(**(code **)(local_14->_pad_0x0_0 + 0x178))(), piVar6 == piVar5)) {
                bVar2 = false;
                goto LAB_00536dbb;
              }
              local_c = local_c + 1;
              iVar3 = (*(code *)local_28[3])();
            } while (local_c < iVar3);
          }
          bVar2 = true;
LAB_00536dbb:
          local_28 = ((void *)(0x009194a4u));
          if (local_24 != (void *)0x0) {
            operator_delete__(local_24);
          }
          local_24 = (void *)0x0;
          local_28 = ((void *)(0x00919488u));
        }
      }
      else {
        bVar2 = false;
      }
      if ((((local_15 != '\0') || (local_16 != '\0')) || (local_17 != '\0')) || (bVar2)) {
        iVar3 = *(int *)(param_3 + 8);
        local_c = iVar3 + 1;
        util__Darray_class_util__Reflectable____SetSize(param_3,&local_c);
        bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)param_3,iVar3);
        if (bVar2) {
          *(ModulePlacer **)(*(int *)(param_3 + 4) + -4 + *(int *)(param_3 + 8) * 4) = local_2c;
        }
      }
      param_1 = local_30;
      local_10 = local_10 + 1;
      iVar3 = (**(code **)(*(int *)(uintptr_t)local_30 + 0xc))();
    } while (local_10 < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000536e60 00536e60_FUN_00536e60 ====
// decompiled by BatchDecomp @ 00536e60 name=FUN_00536e60 conv=unknown body=354

void FUN_00536e60(int *param_1,int *param_2,
                 AssocArray_L_class_Module__Darray_L_util__WeakPtr_L_ModuleCompartment_G___G___G
                 *param_3)

{
  undefined4 stack0xfffffffc;
  char cVar1;
  ReferenceController *this;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar6;
  uint uVar7;
  int iVar8;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar3 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
  if (local_c < iVar3) {
    do {
      piVar4 = (int *)(**(code **)*param_1)(&local_c);
      this = (ReferenceController *)piVar4[1];
      iVar3 = *piVar4;
      if (this != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(this);
      }
      uVar2 = param_2[2];
      if (uVar2 != 0) {
        for (uVar7 = (uint)(iVar3 * -0x61c8864f) % uVar2; (int)uVar7 < 0; uVar7 = uVar7 + uVar2) {
        }
        if ((int)uVar2 <= (int)uVar7) {
          uVar7 = (int)uVar7 % (int)uVar2;
        }
        cVar1 = *(char *)(param_2[1] + uVar7);
        for (iVar8 = 0; (cVar1 != '\0' && (iVar8 < (int)uVar2)); iVar8 = iVar8 + 1) {
          piVar5 = (int *)(*param_2 + uVar7 * 0x30);
          if ((this == (ReferenceController *)piVar5[1]) && (iVar3 == *piVar5)) {
            piVar5 = piVar5 + 2;
            goto LAB_00536f2f;
          }
          for (uVar7 = uVar7 + 1; (int)uVar7 < 0; uVar7 = uVar7 + uVar2) {
          }
          if ((int)uVar2 <= (int)uVar7) {
            uVar7 = (int)uVar7 % (int)uVar2;
          }
          cVar1 = *(char *)(param_2[1] + uVar7);
        }
      }
      piVar5 = (int *)0x0;
LAB_00536f2f:
      if (this != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(this);
      }
      if (piVar5 == (int *)0x0) {
        util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\crafts\\craftblueprints.cpp"
                        ,0xc41,"Placer",(char *)0x0);
        DebugBreak();
      }
      if ((Module *)piVar5[4] != (Module *)0x0) {
        local_1c = 0;
        uStack_18 = 0;
        uStack_14 = 0;
        uStack_10 = 0;
        pDVar6 = util__AssocArray_class_Module__class_util__Darray_class_util__WeakPtr_struct_ModuleCompartment_______Find__o2(param_3,(Module **)(piVar5 + 4));
        util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment((Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_1c,pDVar6);
        ModuleCompartment__SetTargetCompartments
                  ((ModuleCompartment *)*piVar4,
                   (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_1c);
        util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c);
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00005384e0 005384e0_FUN_005384e0 ====
// decompiled by BatchDecomp @ 005384e0 name=FUN_005384e0 conv=unknown body=491

void FUN_005384e0(Darray_L_class_util__Darray_L_struct_MomentOfInertia__Particle_G___G_ *param_1,
                 int *param_2)

{
  undefined4 stack0xfffffffc;
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 uVar5;
  Darray_L_struct_MomentOfInertia__Particle_G_ *pDVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int local_20;
  undefined **local_1c;
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  int *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = param_2;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar3 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  *(undefined ***)param_1 =
       ((void *)(0x009210c8u));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar3;
  if (((int)uVar3 < 0) || (0x3fffffff < (int)uVar3)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar3) {
    uVar7 = -(uint)((int)((ulonglong)uVar3 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar3 * 0x10);
    puVar4 = (uint *)operator_new__(-(uint)(0xfffffffb < uVar7) | uVar7 + 4);
    if (puVar4 == (uint *)0x0) {
      puVar4 = (uint *)0x0;
    }
    else {
      *puVar4 = uVar3;
      puVar4 = puVar4 + 1;
      puVar1 = puVar4;
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar1 = (uint)((void *)(0x009208a4u));
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1 = puVar1 + 4;
      }
    }
    iVar9 = 0;
    *(uint **)(param_1 + 4) = puVar4;
    if (0 < *(int *)(param_1 + 0xc)) {
      iVar8 = 0;
      do {
        local_1c = ((void *)(0x009208a4u));
        local_18 = (void *)0x0;
        local_14 = 0;
        local_10 = 0;
        util__Darray_struct_MomentOfInertia__Particle___operator
                  ((Darray_L_struct_MomentOfInertia__Particle_G_ *)(*(int *)(param_1 + 4) + iVar8),
                   (Darray_L_struct_MomentOfInertia__Particle_G_ *)&local_1c);
        local_1c = ((void *)(0x009208a4u));
        if (local_18 != (void *)0x0) {
          operator_delete__(local_18);
        }
        iVar9 = iVar9 + 1;
        local_18 = (void *)0x0;
        iVar8 = iVar8 + 0x10;
        local_1c = ((void *)(0x00919488u));
        param_2 = local_c;
      } while (iVar9 < *(int *)(param_1 + 0xc));
    }
  }
  local_c = (int *)0x0;
  iVar9 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  if ((int)local_c < iVar9) {
    do {
      uVar5 = (**(code **)*param_2)(&local_c);
      pDVar6 = (Darray_L_struct_MomentOfInertia__Particle_G_ *)FUN_0053e9c0(&local_1c,uVar5);
      iVar9 = *(int *)(param_1 + 8);
      local_20 = iVar9 + 1;
      util__Darray_class_util__Darray_struct_MomentOfInertia__Particle_____SetSize(param_1,&local_20);
      bVar2 = util__Darray_class_util__Darray_struct_MomentOfInertia__Particle_____CheckSize(param_1,iVar9);
      if (bVar2) {
        util__Darray_struct_MomentOfInertia__Particle___operator
                  ((Darray_L_struct_MomentOfInertia__Particle_G_ *)
                   (*(int *)(param_1 + 8) * 0x10 + *(int *)(param_1 + 4) + -0x10),pDVar6);
      }
      local_1c = ((void *)(0x009208a4u));
      if (local_18 != (void *)0x0) {
        operator_delete__(local_18);
      }
      local_c = (int *)((int)local_c + 1);
      local_18 = (void *)0x0;
      local_1c = ((void *)(0x00919488u));
      iVar9 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
    } while ((int)local_c < iVar9);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000540390 00540390_FUN_00540390 ====
// decompiled by BatchDecomp @ 00540390 name=FUN_00540390 conv=unknown body=193

void FUN_00540390(char *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Str_L_char_G local_2c;
  int local_20;
  Str_L_char_G local_1c;
  Str_L_char_G local_10;
  
  util__Str_char___Str_char(&local_1c,(Str_L_char_G_ *)&param_1);
  util__Str_char___Str_char(&local_10,&local_1c);
  util__Str_char___Str_char(&local_2c,&local_10);
  iVar1 = param_4;
  local_20 = param_4;
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  if (local_1c.Data != (char *)0x0) {
    operator_delete__(local_1c.Data);
  }
  iVar3 = DAT_0095f344;
  param_4 = DAT_0095f344 + 1;
  util__Darray_struct_util__tuple2_class_util__Str_char__void____cdecl___void______SetSize((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__void____cdecl___void__G__G *)
             &PTR__vftable__0095f33c,&param_4);
  bVar2 = util__Darray_struct_util__tuple2_class_util__Str_char__double____thiscall_util__Reflectable_____void_const______CheckSize((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__double____thiscall_util__Reflectable_____void_const__G__G
                       *)&PTR__vftable__0095f33c,iVar3);
  if (bVar2) {
    iVar3 = DAT_0095f344 * 0x10 + DAT_0095f340;
    util__Str_char___operator__o8((Str_L_char_G_ *)(iVar3 + -0x10),&local_2c);
    *(int *)(iVar3 + -4) = iVar1;
  }
  if (local_2c.Data != (char *)0x0) {
    operator_delete__(local_2c.Data);
  }
  if (param_1 != (char *)0x0) {
    operator_delete__(param_1);
  }
  return;
}


//==== 000058d060 0058d060_FUN_0058d060 ====
// decompiled by BatchDecomp @ 0058d060 name=FUN_0058d060 conv=unknown body=302

void FUN_0058d060(int *param_1,undefined4 *param_2,Darray_L_util__Reflectable_P_G_ *param_3)

{
  undefined4 stack0xfffffffc;
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  undefined1 *puVar7;
  char *local_24;
  int local_20;
  int local_1c;
  int *local_18;
  undefined4 *local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_18 = param_1;
  local_c = 0;
  iVar2 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
  if (local_c < iVar2) {
    do {
      local_14 = (undefined4 *)(**(code **)*param_1)(&local_c);
      puVar3 = (undefined4 *)(*(code *)**(undefined4 **)*local_14)();
      (**(code **)*puVar3)(&local_24);
      puVar3 = (undefined4 *)*param_2;
      if (local_1c == puVar3[2]) {
        pcVar4 = "";
        if (0 < local_20) {
          pcVar4 = local_24;
        }
        if ((int)puVar3[1] < 1) {
          puVar7 = &cde_l2_0091985b_NullString;
        }
        else {
          puVar7 = (undefined1 *)*puVar3;
        }
        cVar5 = *pcVar4;
        if (cVar5 != '\0') {
          iVar2 = (int)puVar7 - (int)pcVar4;
          do {
            if (cVar5 != pcVar4[iVar2]) goto LAB_0058d0bd;
            cVar5 = pcVar4[1];
            pcVar4 = pcVar4 + 1;
          } while (cVar5 != '\0');
        }
        bVar1 = true;
      }
      else {
LAB_0058d0bd:
        bVar1 = false;
      }
      if (local_24 != (char *)0x0) {
        operator_delete__(local_24);
        local_24 = (char *)0x0;
      }
      if (bVar1) {
        iVar2 = *(int *)(param_3 + 8);
        local_10 = iVar2 + 1;
        util__Darray_class_util__Reflectable____SetSize(param_3,&local_10);
        bVar1 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)param_3,iVar2);
        if (bVar1) {
          iVar2 = *(int *)(param_3 + 8);
          iVar6 = *(int *)(param_3 + 4);
LAB_0058d15e:
          *(undefined4 *)(iVar6 + -4 + iVar2 * 4) = *local_14;
        }
      }
      else {
        iVar2 = *(int *)(param_3 + 0x18);
        local_10 = iVar2 + 1;
        util__Darray_class_util__Reflectable____SetSize(param_3 + 0x10,&local_10);
        bVar1 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)(param_3 + 0x10),iVar2);
        if (bVar1) {
          iVar2 = *(int *)(param_3 + 0x18);
          iVar6 = *(int *)(param_3 + 0x14);
          goto LAB_0058d15e;
        }
      }
      param_1 = local_18;
      local_c = local_c + 1;
      iVar2 = (**(code **)(*(int *)(uintptr_t)local_18 + 0xc))();
    } while (local_c < iVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00005b16a0 005b16a0_FUN_005b16a0 ====
// decompiled by BatchDecomp @ 005b16a0 name=FUN_005b16a0 conv=unknown body=254

void FUN_005b16a0(char *param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  Str_L_char_G_ *this;
  Str_L_char_G local_30;
  char *local_24;
  Str_L_char_G local_20;
  Str_L_char_G local_14;
  int local_8;
  
  util__Str_char___Str_char(&local_20,(Str_L_char_G_ *)&param_1);
  util__Str_char___Str_char(&local_14,&local_20);
  util__Str_char___Str_char(&local_30,&local_14);
  local_24 = param_4;
  if (local_14.Data != (char *)0x0) {
    operator_delete__(local_14.Data);
  }
  if (local_20.Data != (char *)0x0) {
    operator_delete__(local_20.Data);
  }
  iVar3 = (**(code **)(PTR__vftable__0095f368 + 0xc))();
  iVar4 = DAT_0095f370;
  if (-1 < iVar3) {
    local_8 = DAT_0095f370 + 1;
    util__Darray_struct_util__tuple2_class_util__Str_char__void____cdecl___void______SetSize((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__void____cdecl___void__G__G *)
               &PTR__vftable__0095f368,&local_8);
    bVar2 = util__Darray_struct_util__tuple2_class_util__Str_char__double____thiscall_util__Reflectable_____void_const______CheckSize((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__double____thiscall_util__Reflectable_____void_const__G__G
                         *)&PTR__vftable__0095f368,iVar4);
    if ((bVar2) &&
       (this = (Str_L_char_G_ *)((int)DAT_0095f36c + DAT_0095f370 * 0x10 + -0x10), DAT_0095f36c <= this)
       ) {
      do {
        if (iVar4 == 0) {
          util__Str_char___operator__o8(this,&local_30);
          this[1].Data = param_4;
          break;
        }
        piVar1 = &this[-2].Length;
        util__Str_char___operator__o8(this,(Str_L_char_G_ *)piVar1);
        iVar4 = iVar4 + -1;
        this[1].Data = (char *)this[-1].Length;
        this = (Str_L_char_G_ *)piVar1;
      } while (DAT_0095f36c <= piVar1);
    }
  }
  if (local_30.Data != (char *)0x0) {
    operator_delete__(local_30.Data);
  }
  if (param_1 != (char *)0x0) {
    operator_delete__(param_1);
  }
  return;
}


//==== 00005ca9b0 005ca9b0_FUN_005ca9b0 ====
// decompiled by BatchDecomp @ 005ca9b0 name=FUN_005ca9b0 conv=unknown body=451

void FUN_005ca9b0(int *param_1,int *param_2,Darray_L_util__Reflectable_P_G_ *param_3)

{
  undefined4 stack0xfffffffc;
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined1 *puVar6;
  int *piVar7;
  void *local_34 [3];
  int *local_28;
  Reflectable local_24;
  int local_14;
  char local_d;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_28 = param_1;
  local_c = 0;
  iVar3 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
  if (local_c < iVar3) {
    do {
      iVar3 = (**(code **)*param_1)(&local_c);
      if (((*(char *)(iVar3 + 0x25) == '\0') ||
          (*(char *)(*(int *)(iVar3 + 0x14) + *(int *)(iVar3 + 0x10) + *param_2) == '\x01')) &&
         (*(int *)(iVar3 + 0xc) == 10)) {
        piVar7 = (int *)(*(int *)(iVar3 + 0x10) + *param_2);
        puVar4 = (undefined4 *)(**(code **)(*(int *)(uintptr_t)piVar7 + 0x58))(local_34);
        if ((int)puVar4[1] < 1) {
          puVar6 = &cde_l2_0091985b_NullString;
        }
        else {
          puVar6 = (undefined1 *)*puVar4;
        }
        pcVar5 = "SubModule";
        while( true ) {
          if ((pcVar5[(int)(puVar6 + -0x922a00)] == '\0') && (*pcVar5 == '\0')) {
            local_d = '\x01';
            goto LAB_005caa53;
          }
          if (pcVar5[(int)(puVar6 + -0x922a00)] != *pcVar5) break;
          pcVar5 = pcVar5 + 1;
        }
        local_d = '\0';
LAB_005caa53:
        if (local_34[0] != (void *)0x0) {
          operator_delete__(local_34[0]);
          local_34[0] = (void *)0x0;
        }
        if (local_d != '\0') {
          iVar3 = *(int *)(param_3 + 8);
          local_14 = iVar3 + 1;
          util__Darray_class_util__Reflectable____SetSize(param_3,&local_14);
          bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)param_3,iVar3);
          if (bVar2) {
            *(int **)(*(int *)(param_3 + 4) + -4 + *(int *)(param_3 + 8) * 4) = piVar7;
          }
          GetSubModulesOfDatum(&local_24);
          if (*(int *)(param_3 + 8) == 0) {
            util__Darray_class_Module____operator
                      ((Darray_L_class_Module_P_G_ *)param_3,(Darray_L_class_Module_P_G_ *)&local_24);
          }
          else {
            iVar3 = (**(code **)(local_24._pad_0x0_0 + 0xc))();
            if (iVar3 != 0) {
              iVar3 = *(int *)(param_3 + 8);
              local_14 = (**(code **)(local_24._pad_0x0_0 + 0xc))();
              local_14 = local_14 + *(int *)(param_3 + 8);
              util__Darray_class_util__Reflectable____SetSize(param_3,&local_14);
              util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)param_3,iVar3);
              puVar4 = (undefined4 *)(*(int *)(param_3 + 4) + iVar3 * 4);
              pcVar5 = local_24.Name.Data;
              if (puVar4 != (undefined4 *)(*(int *)(param_3 + 4) + *(int *)(param_3 + 8) * 4)) {
                do {
                  uVar1 = *(undefined4 *)pcVar5;
                  pcVar5 = pcVar5 + 4;
                  *puVar4 = uVar1;
                  puVar4 = puVar4 + 1;
                } while (puVar4 != (undefined4 *)(*(int *)(param_3 + 4) + *(int *)(param_3 + 8) * 4)
                        );
              }
            }
          }
          local_24._pad_0x0_0 = (int)((void *)(0x009194a4u));
          if (local_24.Name.Data != (char *)0x0) {
            operator_delete__(local_24.Name.Data);
          }
          local_24.Name.Data = (char *)0x0;
          local_24._pad_0x0_0 = (int)((void *)(0x00919488u));
          param_1 = local_28;
        }
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00005cacf0 005cacf0_FUN_005cacf0 ====
// decompiled by BatchDecomp @ 005cacf0 name=FUN_005cacf0 conv=unknown body=440

void FUN_005cacf0(Darray_L_struct_MaterialConstituent_G_ *param_1,int *param_2)

{
  undefined4 stack0xfffffffc;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int local_20;
  undefined **local_1c;
  undefined4 *puStack_18;
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
        local_1c = (undefined **)0x0;
        iVar9 = iVar9 + 1;
        uStack_14 = 0;
        puVar7 = (undefined4 *)(*(int *)(param_1 + 4) + -0x10 + iVar8);
        *puVar7 = 0;
        puVar7[1] = puStack_18;
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
      (**(code **)(*(int *)*puVar7 + 0x68))(&local_1c);
      if (*(int *)(param_1 + 8) == 0) {
        util__Darray_struct_MaterialConstituent___operator
                  (param_1,(Darray_L_struct_MaterialConstituent_G_ *)&local_1c);
      }
      else {
        iVar9 = (*(code *)local_1c[3])();
        if (iVar9 != 0) {
          iVar9 = *(int *)(param_1 + 8);
          local_20 = (*(code *)local_1c[3])();
          local_20 = local_20 + *(int *)(param_1 + 8);
          util__Darray_struct_MaterialConstituent___SetSize(param_1,&local_20);
          util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize((Darray_L_struct_util__tuple2_L_class_WeaponModule__double_G__G *)param_1,iVar9);
          puVar6 = (undefined4 *)(iVar9 * 0x10 + *(int *)(param_1 + 4));
          puVar7 = puStack_18;
          if (puVar6 != (undefined4 *)(*(int *)(param_1 + 8) * 0x10 + *(int *)(param_1 + 4))) {
            do {
              uVar1 = *puVar7;
              uVar2 = puVar7[1];
              uVar3 = puVar7[2];
              uVar4 = puVar7[3];
              puVar7 = puVar7 + 4;
              *puVar6 = uVar1;
              puVar6[1] = uVar2;
              puVar6[2] = uVar3;
              puVar6[3] = uVar4;
              puVar6 = puVar6 + 4;
            } while (puVar6 != (undefined4 *)(*(int *)(param_1 + 8) * 0x10 + *(int *)(param_1 + 4)))
            ;
          }
        }
      }
      local_1c = ((void *)(0x0091e0dcu));
      if (puStack_18 != (undefined4 *)0x0) {
        operator_delete__(puStack_18);
      }
      local_c = local_c + 1;
      puStack_18 = (undefined4 *)0x0;
      local_1c = ((void *)(0x00919488u));
      iVar9 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
    } while (local_c < iVar9);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00005cb950 005cb950_FUN_005cb950 ====
// decompiled by BatchDecomp @ 005cb950 name=FUN_005cb950 conv=unknown body=193

void FUN_005cb950(char *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Str_L_char_G local_2c;
  int local_20;
  Str_L_char_G local_1c;
  Str_L_char_G local_10;
  
  util__Str_char___Str_char(&local_1c,(Str_L_char_G_ *)&param_1);
  util__Str_char___Str_char(&local_10,&local_1c);
  util__Str_char___Str_char(&local_2c,&local_10);
  iVar1 = param_4;
  local_20 = param_4;
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  if (local_1c.Data != (char *)0x0) {
    operator_delete__(local_1c.Data);
  }
  iVar3 = DAT_0095f380;
  param_4 = DAT_0095f380 + 1;
  util__Darray_struct_util__tuple2_class_util__Str_char__void____cdecl___void______SetSize((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__void____cdecl___void__G__G *)
             &PTR__vftable__0095f378,&param_4);
  bVar2 = util__Darray_struct_util__tuple2_class_util__Str_char__double____thiscall_util__Reflectable_____void_const______CheckSize((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__double____thiscall_util__Reflectable_____void_const__G__G
                       *)&PTR__vftable__0095f378,iVar3);
  if (bVar2) {
    iVar3 = DAT_0095f380 * 0x10 + DAT_0095f37c;
    util__Str_char___operator__o8((Str_L_char_G_ *)(iVar3 + -0x10),&local_2c);
    *(int *)(iVar3 + -4) = iVar1;
  }
  if (local_2c.Data != (char *)0x0) {
    operator_delete__(local_2c.Data);
  }
  if (param_1 != (char *)0x0) {
    operator_delete__(param_1);
  }
  return;
}


//==== 00005e21e0 005e21e0_FUN_005e21e0 ====
// decompiled by BatchDecomp @ 005e21e0 name=FUN_005e21e0 conv=unknown body=254

void FUN_005e21e0(char *param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  Str_L_char_G_ *this;
  Str_L_char_G local_30;
  char *local_24;
  Str_L_char_G local_20;
  Str_L_char_G local_14;
  int local_8;
  
  util__Str_char___Str_char(&local_20,(Str_L_char_G_ *)&param_1);
  util__Str_char___Str_char(&local_14,&local_20);
  util__Str_char___Str_char(&local_30,&local_14);
  local_24 = param_4;
  if (local_14.Data != (char *)0x0) {
    operator_delete__(local_14.Data);
  }
  if (local_20.Data != (char *)0x0) {
    operator_delete__(local_20.Data);
  }
  iVar3 = (**(code **)(PTR__vftable__0095f388 + 0xc))();
  iVar4 = DAT_0095f390;
  if (-1 < iVar3) {
    local_8 = DAT_0095f390 + 1;
    util__Darray_struct_util__tuple2_class_util__Str_char__void____cdecl___void______SetSize((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__void____cdecl___void__G__G *)
               &PTR__vftable__0095f388,&local_8);
    bVar2 = util__Darray_struct_util__tuple2_class_util__Str_char__double____thiscall_util__Reflectable_____void_const______CheckSize((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__double____thiscall_util__Reflectable_____void_const__G__G
                         *)&PTR__vftable__0095f388,iVar4);
    if ((bVar2) &&
       (this = (Str_L_char_G_ *)((int)DAT_0095f38c + DAT_0095f390 * 0x10 + -0x10), DAT_0095f38c <= this)
       ) {
      do {
        if (iVar4 == 0) {
          util__Str_char___operator__o8(this,&local_30);
          this[1].Data = param_4;
          break;
        }
        piVar1 = &this[-2].Length;
        util__Str_char___operator__o8(this,(Str_L_char_G_ *)piVar1);
        iVar4 = iVar4 + -1;
        this[1].Data = (char *)this[-1].Length;
        this = (Str_L_char_G_ *)piVar1;
      } while (DAT_0095f38c <= piVar1);
    }
  }
  if (local_30.Data != (char *)0x0) {
    operator_delete__(local_30.Data);
  }
  if (param_1 != (char *)0x0) {
    operator_delete__(param_1);
  }
  return;
}


//==== 00005e98b0 005e98b0_RefuelerModule__InnerSortFunction ====
// decompiled by BatchDecomp @ 005e98b0 name=InnerSortFunction conv=__thiscall body=130

/* public: virtual bool __thiscall RefuelerModule__InnerSortFunction(class Module const *,class
   Module const *)const  */

bool __thiscall
RefuelerModule__InnerSortFunction(RefuelerModule *this,undefined1 *p1,undefined1 *p2)

{
  Type TVar1;
  char *pcVar2;
  undefined3 extraout_var;
  char *pcVar3;
  double dVar4;
  double dVar5;
  
  if (*(int *)(*(int *)(p2 + 0xb8) + 8) < 1) {
    pcVar3 = "";
  }
  else {
    pcVar3 = *(char **)(*(int *)(p2 + 0xb8) + 4);
  }
  if (*(int *)(*(int *)(p1 + 0xb8) + 8) < 1) {
    pcVar2 = "";
  }
  else {
    pcVar2 = *(char **)(*(int *)(p1 + 0xb8) + 4);
  }
  TVar1 = util__InnerSortFunction(pcVar2,pcVar3);
  if (CONCAT31(extraout_var,TVar1) != 1) {
    return CONCAT31(extraout_var,TVar1) == 2;
  }
  dVar4 = TurbopumpSubModule__GetMassFlowRate_kg__s((TurbopumpSubModule *)(p1 + 0x70));
  dVar5 = TurbopumpSubModule__GetMassFlowRate_kg__s((TurbopumpSubModule *)(p2 + 0x70));
  return dVar4 < dVar5;
}


//==== 0000609860 00609860_CombustionMixtureSubModule__GetDensity_kg__m3 ====
// decompiled by BatchDecomp @ 00609860 name=GetDensity_kg__m3 conv=__thiscall body=364

/* public: double __thiscall CombustionMixtureSubModule__GetDensity_kg__m3(void)const  */

double __thiscall CombustionMixtureSubModule__GetDensity_kg__m3(CombustionMixtureSubModule *this)

{
  undefined4 stack0xfffffffc;
  double dVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  double dVar4;
  bool bVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  float10 extraout_ST0;
  void *local_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined8 local_24;
  undefined **local_1c;
  void *pvStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_1c = ((void *)(0x00919b30u));
  pvStack_18 = (void *)0x0;
  iStack_14 = 0;
  uStack_10 = 0;
  piVar6 = (int *)ChemicalReaction__GetReactantsByMassPercent((ChemicalReaction *)this->CombustionReaction);
  local_c = 0;
  iVar7 = (**(code **)(*(int *)(uintptr_t)piVar6 + 0xc))();
  if (local_c < iVar7) {
    do {
      puVar8 = (undefined4 *)(**(code **)*piVar6)(&local_c);
      iVar7 = iStack_14;
      dVar4 = __real_3ff0000000000000 - this->DelayCompositionMassFraction;
      uVar2 = *puVar8;
      dVar1 = *(double *)(puVar8 + 2);
      local_24 = (double)CONCAT44(iStack_14 + 1,(undefined4)local_24);
      util__Darray_struct_MaterialConstituent___SetSize((Darray_L_struct_MaterialConstituent_G_ *)&local_1c,(int *)((int)&local_24 + 4));
      bVar5 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize((Darray_L_struct_util__tuple2_L_class_WeaponModule__double_G__G *)&local_1c,iVar7
                        );
      if (bVar5) {
        puVar8 = (undefined4 *)((int)pvStack_18 + iStack_14 * 0x10 + -0x10);
        *puVar8 = uVar2;
        puVar8[1] = uStack_30;
        *(double *)(puVar8 + 2) = dVar4 * dVar1;
      }
      local_c = local_c + 1;
      iVar7 = (**(code **)(*(int *)(uintptr_t)piVar6 + 0xc))();
    } while (local_c < iVar7);
  }
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
  }
  iVar7 = iStack_14;
  puVar3 = this->DelayComposition;
  dVar1 = this->DelayCompositionMassFraction;
  local_24 = (double)CONCAT44(iStack_14 + 1,(undefined4)local_24);
  util__Darray_struct_MaterialConstituent___SetSize((Darray_L_struct_MaterialConstituent_G_ *)&local_1c,(int *)((int)&local_24 + 4));
  bVar5 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize((Darray_L_struct_util__tuple2_L_class_WeaponModule__double_G__G *)&local_1c,iVar7);
  if (bVar5) {
    uStack_2c = *(undefined4 *)&dVar1;
    uStack_28 = *(undefined4 *)((char *)&dVar1 + 4);
    puVar8 = (undefined4 *)((int)pvStack_18 + iStack_14 * 0x10 + -0x10);
    *puVar8 = puVar3;
    puVar8[1] = uStack_30;
    puVar8[2] = uStack_2c;
    puVar8[3] = uStack_28;
  }
  local_24 = Material__GetMixtureDensity_kg__m3((Darray_L_struct_MaterialConstituent_G_ *)&local_1c);
  local_1c = ((void *)(0x00919b30u));
  if (pvStack_18 != (void *)0x0) {
    operator_delete__(pvStack_18);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 000060cac0 0060cac0_FUN_0060cac0 ====
// decompiled by BatchDecomp @ 0060cac0 name=FUN_0060cac0 conv=unknown body=254

void FUN_0060cac0(char *param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  Str_L_char_G_ *this;
  Str_L_char_G local_30;
  char *local_24;
  Str_L_char_G local_20;
  Str_L_char_G local_14;
  int local_8;
  
  util__Str_char___Str_char(&local_20,(Str_L_char_G_ *)&param_1);
  util__Str_char___Str_char(&local_14,&local_20);
  util__Str_char___Str_char(&local_30,&local_14);
  local_24 = param_4;
  if (local_14.Data != (char *)0x0) {
    operator_delete__(local_14.Data);
  }
  if (local_20.Data != (char *)0x0) {
    operator_delete__(local_20.Data);
  }
  iVar3 = (**(code **)(PTR__vftable__0095f398 + 0xc))();
  iVar4 = DAT_0095f3a0;
  if (-1 < iVar3) {
    local_8 = DAT_0095f3a0 + 1;
    util__Darray_struct_util__tuple2_class_util__Str_char__void____cdecl___void______SetSize((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__void____cdecl___void__G__G *)
               &PTR__vftable__0095f398,&local_8);
    bVar2 = util__Darray_struct_util__tuple2_class_util__Str_char__double____thiscall_util__Reflectable_____void_const______CheckSize((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__double____thiscall_util__Reflectable_____void_const__G__G
                         *)&PTR__vftable__0095f398,iVar4);
    if ((bVar2) &&
       (this = (Str_L_char_G_ *)((int)DAT_0095f39c + DAT_0095f3a0 * 0x10 + -0x10), DAT_0095f39c <= this)
       ) {
      do {
        if (iVar4 == 0) {
          util__Str_char___operator__o8(this,&local_30);
          this[1].Data = param_4;
          break;
        }
        piVar1 = &this[-2].Length;
        util__Str_char___operator__o8(this,(Str_L_char_G_ *)piVar1);
        iVar4 = iVar4 + -1;
        this[1].Data = (char *)this[-1].Length;
        this = (Str_L_char_G_ *)piVar1;
      } while (DAT_0095f39c <= piVar1);
    }
  }
  if (local_30.Data != (char *)0x0) {
    operator_delete__(local_30.Data);
  }
  if (param_1 != (char *)0x0) {
    operator_delete__(param_1);
  }
  return;
}


//==== 000065b160 0065b160_FUN_0065b160 ====
// decompiled by BatchDecomp @ 0065b160 name=FUN_0065b160 conv=unknown body=347

void FUN_0065b160(Darray_L_util__Reflectable_P_G_ *param_1,int *param_2)

{
  undefined4 stack0xfffffffc;
  int *piVar1;
  char *pcVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  char cVar7;
  char *pcVar8;
  void *local_30 [3];
  Str_L_char_G local_24;
  undefined4 *local_18;
  int local_14;
  int *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = param_2;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar4 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  util__Darray_class_util__Reflectable____Darray_class_util__Reflectable__o2(param_1,iVar4);
  local_c = 0;
  iVar4 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  if (local_c < iVar4) {
    do {
      local_18 = (undefined4 *)(**(code **)*param_2)(&local_c);
      piVar1 = (int *)*local_18;
      iVar4 = (**(code **)(*(int *)(uintptr_t)piVar1 + 0x130))();
      if (iVar4 == 0) {
        puVar5 = (undefined4 *)(**(code **)*piVar1)();
        util__Str_char___Str_char__o5(&local_24,"LaserModule");
        puVar5 = (undefined4 *)(**(code **)*puVar5)(local_30);
        pcVar2 = local_24.Data;
        if (puVar5[2] == local_24.Length) {
          if ((int)puVar5[1] < 1) {
            pcVar6 = "";
          }
          else {
            pcVar6 = (char *)*puVar5;
          }
          cVar7 = *pcVar6;
          pcVar8 = "";
          if (0 < local_24.Capacity) {
            pcVar8 = local_24.Data;
          }
          if (cVar7 != '\0') {
            iVar4 = (int)pcVar8 - (int)pcVar6;
            do {
              if (cVar7 != pcVar6[iVar4]) goto LAB_0065b1f5;
              cVar7 = pcVar6[1];
              pcVar6 = pcVar6 + 1;
            } while (cVar7 != '\0');
          }
          bVar3 = true;
        }
        else {
LAB_0065b1f5:
          bVar3 = false;
        }
        if (local_30[0] != (void *)0x0) {
          operator_delete__(local_30[0]);
          local_30[0] = (void *)0x0;
        }
        if (pcVar2 != (char *)0x0) {
          operator_delete__(pcVar2);
          local_24.Data = (char *)0x0;
        }
        param_2 = local_10;
        if (bVar3) {
          iVar4 = *(int *)(param_1 + 8);
          local_14 = iVar4 + 1;
          util__Darray_class_util__Reflectable____SetSize(param_1,&local_14);
          bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)param_1,iVar4);
          param_2 = local_10;
          if (bVar3) {
            *(undefined4 *)(*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 4) = *local_18;
          }
        }
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
    } while (local_c < iVar4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000065e080 0065e080_FUN_0065e080 ====
// decompiled by BatchDecomp @ 0065e080 name=FUN_0065e080 conv=unknown body=254

void FUN_0065e080(char *param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  Str_L_char_G_ *this;
  Str_L_char_G local_30;
  char *local_24;
  Str_L_char_G local_20;
  Str_L_char_G local_14;
  int local_8;
  
  util__Str_char___Str_char(&local_20,(Str_L_char_G_ *)&param_1);
  util__Str_char___Str_char(&local_14,&local_20);
  util__Str_char___Str_char(&local_30,&local_14);
  local_24 = param_4;
  if (local_14.Data != (char *)0x0) {
    operator_delete__(local_14.Data);
  }
  if (local_20.Data != (char *)0x0) {
    operator_delete__(local_20.Data);
  }
  iVar3 = (**(code **)(PTR__vftable__0095f3b0 + 0xc))();
  iVar4 = DAT_0095f3b8;
  if (-1 < iVar3) {
    local_8 = DAT_0095f3b8 + 1;
    util__Darray_struct_util__tuple2_class_util__Str_char__void____cdecl___void______SetSize((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__void____cdecl___void__G__G *)
               &PTR__vftable__0095f3b0,&local_8);
    bVar2 = util__Darray_struct_util__tuple2_class_util__Str_char__double____thiscall_util__Reflectable_____void_const______CheckSize((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__double____thiscall_util__Reflectable_____void_const__G__G
                         *)&PTR__vftable__0095f3b0,iVar4);
    if ((bVar2) &&
       (this = (Str_L_char_G_ *)((int)DAT_0095f3b4 + DAT_0095f3b8 * 0x10 + -0x10), DAT_0095f3b4 <= this)
       ) {
      do {
        if (iVar4 == 0) {
          util__Str_char___operator__o8(this,&local_30);
          this[1].Data = param_4;
          break;
        }
        piVar1 = &this[-2].Length;
        util__Str_char___operator__o8(this,(Str_L_char_G_ *)piVar1);
        iVar4 = iVar4 + -1;
        this[1].Data = (char *)this[-1].Length;
        this = (Str_L_char_G_ *)piVar1;
      } while (DAT_0095f3b4 <= piVar1);
    }
  }
  if (local_30.Data != (char *)0x0) {
    operator_delete__(local_30.Data);
  }
  if (param_1 != (char *)0x0) {
    operator_delete__(param_1);
  }
  return;
}


//==== 000066ff50 0066ff50_FUN_0066ff50 ====
// decompiled by BatchDecomp @ 0066ff50 name=FUN_0066ff50 conv=unknown body=193

void FUN_0066ff50(char *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Str_L_char_G local_2c;
  int local_20;
  Str_L_char_G local_1c;
  Str_L_char_G local_10;
  
  util__Str_char___Str_char(&local_1c,(Str_L_char_G_ *)&param_1);
  util__Str_char___Str_char(&local_10,&local_1c);
  util__Str_char___Str_char(&local_2c,&local_10);
  iVar1 = param_4;
  local_20 = param_4;
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  if (local_1c.Data != (char *)0x0) {
    operator_delete__(local_1c.Data);
  }
  iVar3 = DAT_0095f3c8;
  param_4 = DAT_0095f3c8 + 1;
  util__Darray_struct_util__tuple2_class_util__Str_char__void____cdecl___void______SetSize((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__void____cdecl___void__G__G *)
             &PTR__vftable__0095f3c0,&param_4);
  bVar2 = util__Darray_struct_util__tuple2_class_util__Str_char__double____thiscall_util__Reflectable_____void_const______CheckSize((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__double____thiscall_util__Reflectable_____void_const__G__G
                       *)&PTR__vftable__0095f3c0,iVar3);
  if (bVar2) {
    iVar3 = DAT_0095f3c8 * 0x10 + DAT_0095f3c4;
    util__Str_char___operator__o8((Str_L_char_G_ *)(iVar3 + -0x10),&local_2c);
    *(int *)(iVar3 + -4) = iVar1;
  }
  if (local_2c.Data != (char *)0x0) {
    operator_delete__(local_2c.Data);
  }
  if (param_1 != (char *)0x0) {
    operator_delete__(param_1);
  }
  return;
}


//==== 000067b510 0067b510_FUN_0067b510 ====
// decompiled by BatchDecomp @ 0067b510 name=FUN_0067b510 conv=unknown body=193

void FUN_0067b510(char *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Str_L_char_G local_2c;
  int local_20;
  Str_L_char_G local_1c;
  Str_L_char_G local_10;
  
  util__Str_char___Str_char(&local_1c,(Str_L_char_G_ *)&param_1);
  util__Str_char___Str_char(&local_10,&local_1c);
  util__Str_char___Str_char(&local_2c,&local_10);
  iVar1 = param_4;
  local_20 = param_4;
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  if (local_1c.Data != (char *)0x0) {
    operator_delete__(local_1c.Data);
  }
  iVar3 = DAT_0095f3e0;
  param_4 = DAT_0095f3e0 + 1;
  util__Darray_struct_util__tuple2_class_util__Str_char__void____cdecl___void______SetSize((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__void____cdecl___void__G__G *)
             &PTR__vftable__0095f3d8,&param_4);
  bVar2 = util__Darray_struct_util__tuple2_class_util__Str_char__double____thiscall_util__Reflectable_____void_const______CheckSize((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__double____thiscall_util__Reflectable_____void_const__G__G
                       *)&PTR__vftable__0095f3d8,iVar3);
  if (bVar2) {
    iVar3 = DAT_0095f3e0 * 0x10 + DAT_0095f3dc;
    util__Str_char___operator__o8((Str_L_char_G_ *)(iVar3 + -0x10),&local_2c);
    *(int *)(iVar3 + -4) = iVar1;
  }
  if (local_2c.Data != (char *)0x0) {
    operator_delete__(local_2c.Data);
  }
  if (param_1 != (char *)0x0) {
    operator_delete__(param_1);
  }
  return;
}


//==== 000067dfd0 0067dfd0_FUN_0067dfd0 ====
// decompiled by BatchDecomp @ 0067dfd0 name=FUN_0067dfd0 conv=unknown body=193

void FUN_0067dfd0(char *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Str_L_char_G local_2c;
  int local_20;
  Str_L_char_G local_1c;
  Str_L_char_G local_10;
  
  util__Str_char___Str_char(&local_1c,(Str_L_char_G_ *)&param_1);
  util__Str_char___Str_char(&local_10,&local_1c);
  util__Str_char___Str_char(&local_2c,&local_10);
  iVar1 = param_4;
  local_20 = param_4;
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  if (local_1c.Data != (char *)0x0) {
    operator_delete__(local_1c.Data);
  }
  iVar3 = DAT_0095f3f0;
  param_4 = DAT_0095f3f0 + 1;
  util__Darray_struct_util__tuple2_class_util__Str_char__void____cdecl___void______SetSize((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__void____cdecl___void__G__G *)
             &PTR__vftable__0095f3e8,&param_4);
  bVar2 = util__Darray_struct_util__tuple2_class_util__Str_char__double____thiscall_util__Reflectable_____void_const______CheckSize((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__double____thiscall_util__Reflectable_____void_const__G__G
                       *)&PTR__vftable__0095f3e8,iVar3);
  if (bVar2) {
    iVar3 = DAT_0095f3f0 * 0x10 + DAT_0095f3ec;
    util__Str_char___operator__o8((Str_L_char_G_ *)(iVar3 + -0x10),&local_2c);
    *(int *)(iVar3 + -4) = iVar1;
  }
  if (local_2c.Data != (char *)0x0) {
    operator_delete__(local_2c.Data);
  }
  if (param_1 != (char *)0x0) {
    operator_delete__(param_1);
  }
  return;
}


//==== 00006bd400 006bd400_FUN_006bd400 ====
// decompiled by BatchDecomp @ 006bd400 name=FUN_006bd400 conv=unknown body=453

void FUN_006bd400(Darray_L_class_Module_P_G_ *param_1,int *param_2)

{
  undefined4 stack0xfffffffc;
  CraftBlueprint *this;
  undefined4 uVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int local_24;
  undefined **local_20;
  undefined4 *local_1c;
  int *local_10;
  uint local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = param_2;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar2 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  *(undefined ***)param_1 = ((void *)(0x009194a4u));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar2;
  if (((int)uVar2 < 0) || (0x3fffffff < (int)uVar2)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar2) {
    local_c = -(uint)((int)((ulonglong)uVar2 * 4 >> 0x20) != 0) | (uint)((ulonglong)uVar2 * 4);
    pvVar3 = operator_new__(local_c);
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      memset(pvVar3,0,local_c);
    }
    iVar5 = 0;
    *(void **)(param_1 + 4) = pvVar3;
    if (0 < *(int *)(param_1 + 0xc)) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 4) + iVar5 * 4) = 0;
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(param_1 + 0xc));
    }
  }
  local_c = 0;
  iVar5 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  if ((int)local_c < iVar5) {
    do {
      puVar4 = (undefined4 *)(**(code **)*param_2)(&local_c);
      this = (CraftBlueprint *)*puVar4;
      CraftBlueprint__GetAllMainEnginePropellantsUsed_Memoize(this);
      if ((char)(this->GetCrewRequired_MemoizedValue).IsValidData == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      util__Darray_bool____Darray_bool((Darray_L_bool_P_G_ *)&local_20,(Darray_L_bool_P_G_ *)&this->GetCrewRequired_MemoizedValue);
      if (*(int *)(param_1 + 8) == 0) {
        util__Darray_class_Module____operator(param_1,(Darray_L_class_Module_P_G_ *)&local_20);
      }
      else {
        iVar5 = (*(code *)local_20[3])();
        if (iVar5 != 0) {
          iVar5 = *(int *)(param_1 + 8);
          local_24 = (*(code *)local_20[3])();
          local_24 = local_24 + *(int *)(param_1 + 8);
          util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)param_1,&local_24);
          util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)param_1,iVar5);
          puVar6 = (undefined4 *)(*(int *)(param_1 + 4) + iVar5 * 4);
          param_2 = local_10;
          puVar4 = local_1c;
          if (puVar6 != (undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 4)) {
            do {
              uVar1 = *puVar4;
              puVar4 = puVar4 + 1;
              *puVar6 = uVar1;
              puVar6 = puVar6 + 1;
            } while (puVar6 != (undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 4));
          }
        }
      }
      local_20 = ((void *)(0x009194a4u));
      if (local_1c != (undefined4 *)0x0) {
        operator_delete__(local_1c);
      }
      local_c = local_c + 1;
      local_1c = (undefined4 *)0x0;
      local_20 = ((void *)(0x00919488u));
      iVar5 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
    } while ((int)local_c < iVar5);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00006fd220 006fd220_FUN_006fd220 ====
// decompiled by BatchDecomp @ 006fd220 name=FUN_006fd220 conv=unknown body=393

void FUN_006fd220(int *param_1,Darray_L_util__Reflectable_P_G_ *param_2)

{
  undefined4 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar3 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
  if (local_c < iVar3) {
    do {
      piVar4 = (int *)(**(code **)*param_1)(&local_c);
      iVar3 = piVar4[4];
      if (iVar3 != 0) {
        piVar6 = *(int **)(param_2 + 4);
        iVar1 = *(int *)(param_2 + 8);
        piVar5 = piVar6 + iVar1;
        for (; piVar6 != piVar5; piVar6 = piVar6 + 1) {
          if (*piVar6 == iVar3) goto LAB_006fd2a8;
        }
        local_10 = iVar1 + 1;
        util__Darray_class_util__Reflectable____SetSize(param_2,&local_10);
        bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)param_2,iVar1);
        if (bVar2) {
          *(int *)(*(int *)(param_2 + 4) + -4 + *(int *)(param_2 + 8) * 4) = iVar3;
        }
      }
LAB_006fd2a8:
      iVar3 = piVar4[3];
      if (iVar3 != 0) {
        piVar6 = *(int **)(param_2 + 4);
        iVar1 = *(int *)(param_2 + 8);
        piVar5 = piVar6 + iVar1;
        for (; piVar6 != piVar5; piVar6 = piVar6 + 1) {
          if (*piVar6 == iVar3) goto LAB_006fd2f2;
        }
        local_10 = iVar1 + 1;
        util__Darray_class_util__Reflectable____SetSize(param_2,&local_10);
        bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)param_2,iVar1);
        if (bVar2) {
          *(int *)(*(int *)(param_2 + 4) + -4 + *(int *)(param_2 + 8) * 4) = iVar3;
        }
      }
LAB_006fd2f2:
      piVar6 = *(int **)(param_2 + 4);
      iVar3 = *(int *)(param_2 + 8);
      piVar5 = piVar6 + iVar3;
      iVar1 = *piVar4;
      for (; piVar6 != piVar5; piVar6 = piVar6 + 1) {
        if (*piVar6 == iVar1) goto LAB_006fd336;
      }
      local_10 = iVar3 + 1;
      util__Darray_class_util__Reflectable____SetSize(param_2,&local_10);
      bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)param_2,iVar3);
      if (bVar2) {
        *(int *)(*(int *)(param_2 + 4) + -4 + *(int *)(param_2 + 8) * 4) = iVar1;
      }
LAB_006fd336:
      iVar3 = *(int *)(param_2 + 8);
      iVar1 = piVar4[2];
      piVar5 = *(int **)(param_2 + 4);
      piVar4 = piVar5 + iVar3;
      for (; piVar5 != piVar4; piVar5 = piVar5 + 1) {
        if (*piVar5 == iVar1) goto LAB_006fd382;
      }
      local_10 = iVar3 + 1;
      util__Darray_class_util__Reflectable____SetSize(param_2,&local_10);
      bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)param_2,iVar3);
      if (bVar2) {
        *(int *)(*(int *)(param_2 + 4) + -4 + *(int *)(param_2 + 8) * 4) = iVar1;
      }
LAB_006fd382:
      local_c = local_c + 1;
      iVar3 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007040f0 007040f0_CapitalShipComponent__HasBeenDamaged ====
// decompiled by BatchDecomp @ 007040f0 name=HasBeenDamaged conv=__thiscall body=4

/* public: bool __thiscall CapitalShipComponent__HasBeenDamaged(void)const  */

bool __thiscall CapitalShipComponent__HasBeenDamaged(CapitalShipComponent *this)

{
  return (bool)(char)this->IsUnscathed;
}


//==== 00007094c0 007094c0_ScenarioEditor___ScenarioEditor ====
// decompiled by BatchDecomp @ 007094c0 name=~ScenarioEditor conv=__thiscall body=415

/* public: __thiscall ScenarioEditor__dtor(void) */

void __thiscall ScenarioEditor__dtor(ScenarioEditor *this)

{
  void *pvVar1;
  bool bVar2;
  ReferenceControllerRegistry *pRVar3;
  int *piVar4;
  
  if (*(ReferenceController **)(this + 0xb0) != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(*(ReferenceController **)(this + 0xb0));
  }
  if (*(ReferenceController **)(this + 0xa8) != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(*(ReferenceController **)(this + 0xa8));
  }
  if (*(ReferenceController **)(this + 0xa0) != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(*(ReferenceController **)(this + 0xa0));
  }
  if (*(ReferenceController **)(this + 0x98) != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(*(ReferenceController **)(this + 0x98));
  }
  if (*(ReferenceController **)(this + 0x90) != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(*(ReferenceController **)(this + 0x90));
  }
  if (*(ReferenceController **)(this + 0x88) != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(*(ReferenceController **)(this + 0x88));
  }
  util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Delegate_void________Darray_struct_util__tuple2_class_util__Str_char__class_util__Delegate_void((Darray_L_tuple2_L_util__Str_L_char_G__Cutil__Delegate_L_void_G___G___G *)
             (this + 0x74));
  if (*(ReferenceController **)(this + 0x70) != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__ReleaseStrongReference(*(ReferenceController **)(this + 0x70));
    if (bVar2) {
      piVar4 = *(int **)(this + 0x6c);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))(1);
        piVar4 = *(int **)(this + 0x6c);
      }
      pRVar3 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar3,piVar4);
      *(undefined4 *)(this + 0x6c) = 0;
    }
  }
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)(this + 0x44));
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20));
  }
  if (*(void **)(this + 0x24) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x24));
  }
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  pvVar1 = *(void **)(this + 4);
  if (pvVar1 != (void *)0x0) {
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)((int)pvVar1 + 0x348));
    if (*(ReferenceController **)((int)pvVar1 + 0x344) != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(*(ReferenceController **)((int)pvVar1 + 0x344));
    }
    if (*(ReferenceController **)((int)pvVar1 + 0x33c) != (ReferenceController *)0x0) {
      bVar2 = util__ReferenceController__ReleaseStrongReference(*(ReferenceController **)((int)pvVar1 + 0x33c));
      if (bVar2) {
        piVar4 = *(int **)((int)pvVar1 + 0x338);
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 4))(1);
          piVar4 = *(int **)((int)pvVar1 + 0x338);
        }
        pRVar3 = util__ReferenceControllerRegistry__Get();
        util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar3,piVar4);
        *(undefined4 *)((int)pvVar1 + 0x338) = 0;
      }
    }
    NodeMouseOver__dtor((NodeMouseOver *)((int)pvVar1 + 0x90));
    if (*(ReferenceController **)((int)pvVar1 + 0x84) != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(*(ReferenceController **)((int)pvVar1 + 0x84))
      ;
    }
    util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)((int)pvVar1 + 0x44));
    if (*(void **)((int)pvVar1 + 0x20) != (void *)0x0) {
      operator_delete__(*(void **)((int)pvVar1 + 0x20));
    }
    if (*(void **)((int)pvVar1 + 0x24) != (void *)0x0) {
      operator_delete__(*(void **)((int)pvVar1 + 0x24));
    }
    *(undefined4 *)((int)pvVar1 + 0x20) = 0;
    *(undefined4 *)((int)pvVar1 + 0x24) = 0;
    operator_delete(pvVar1,0x358);
  }
  *(undefined4 *)(this + 4) = 0;
  return;
}

