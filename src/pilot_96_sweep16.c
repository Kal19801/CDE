// pilot_sweep_sweep16.c - assembled by scripts/sweep_assemble.py (r19)
// reuses fam8_assemble fix passes (zip oracle/in-batch protos/vft channel/data closure)
/* ---- r20 incomplete-type forward decls (pointer-position only) ---- */
typedef struct Darray_L_GraphicsResource__Type_G_ Darray_L_GraphicsResource__Type_G_;
typedef struct ItineraryDropAction__Type ItineraryDropAction__Type;
typedef struct util__Darray_L_class_util__SharedPtr_L_class_ArmorTextureHandler_G___G util__Darray_L_class_util__SharedPtr_L_class_ArmorTextureHandler_G___G;
typedef struct util__Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G util__Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G;
typedef struct util__Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G util__Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G;
typedef struct util__Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G______G util__Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G______G;
typedef struct util__Darray_L_class_util__WeakPtr_L_struct____ModuleCompartment_G___G util__Darray_L_class_util__WeakPtr_L_struct____ModuleCompartment_G___G;
typedef struct util__Maybe util__Maybe;
typedef struct util__Maybe_L_class_util__Str_L_char_G___G util__Maybe_L_class_util__Str_L_char_G___G;
typedef struct util__Maybe_L_struct_util__Vec2_L_double_G___G util__Maybe_L_struct_util__Vec2_L_double_G___G;
typedef struct util__PhysicalState_L_struct____util__Vec3_L_double_G___G util__PhysicalState_L_struct____util__Vec3_L_double_G___G;
typedef struct util__PhysicalState_L_struct_util__Vec3_L_double_G___G util__PhysicalState_L_struct_util__Vec3_L_double_G___G;
#include "port_prelude.h"
#include "cde_win32_compat.h"
#include "cde_types_r20.h"
typedef union {
  struct {
    undefined8 _0_8_;
    undefined8 _8_8_;
    undefined8 _16_8_;
  };
  struct {
    undefined1 _1_7_[7];
  };
  struct {
    undefined4 _0_4_;
    undefined4 _4_4_;
    undefined4 _8_4_;
    undefined4 _12_4_;
  };
  struct {
    undefined1 _1_3_[3];
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
typedef struct Darray_L_util__Darray_L_util__WeakPtr_L_SpacecraftComponent_G___G___G Darray_L_util__Darray_L_util__WeakPtr_L_SpacecraftComponent_G___G___G;
struct Darray_L_util__Darray_L_util__WeakPtr_L_SpacecraftComponent_G___G___G {
  util__IArray_L_util__Darray_L_util__WeakPtr_L_SpacecraftComponent_G___G___G_ _base_util__IArray_L_util__Darray_L_util__WeakPtr_L_SpacecraftComponent_G___G___G_;
  util__Darray_L_util__WeakPtr_L_SpacecraftComponent_G___G_ *Data;
  int Size;
  int Capacity;
};
typedef struct util__IArray_L_util__tuple2_L_util__Str_L_char_G__Cvoid__Ccdecl__void__G___G_ util__IArray_L_util__tuple2_L_util__Str_L_char_G__Cvoid__Ccdecl__void__G___G_;
struct util__IArray_L_util__tuple2_L_util__Str_L_char_G__Cvoid__Ccdecl__void__G___G_ { void *_vftable; };
typedef struct util__tuple2_L_util__Str_L_char_G__Cvoid__Ccdecl__void__G_ util__tuple2_L_util__Str_L_char_G__Cvoid__Ccdecl__void__G_;
typedef struct Darray_L_util_tuple2_L_util_Str_L_char_G_Cvoid_cdecl_P_void_G___G Darray_L_util_tuple2_L_util_Str_L_char_G_Cvoid_cdecl_P_void_G___G;
struct Darray_L_util_tuple2_L_util_Str_L_char_G_Cvoid_cdecl_P_void_G___G {
  util__IArray_L_util__tuple2_L_util__Str_L_char_G__Cvoid__Ccdecl__void__G___G_ _base_util__IArray_L_util__tuple2_L_util__Str_L_char_G__Cvoid__Ccdecl__void__G___G_;
  util__tuple2_L_util__Str_L_char_G__Cvoid__Ccdecl__void__G_ *Data;
  int Size;
  int Capacity;
};
typedef struct Maybe_L_util__PhysicalState_L_util__Vec3_L_double_G___G___G Maybe_L_util__PhysicalState_L_util__Vec3_L_double_G___G___G;
struct Maybe_L_util__PhysicalState_L_util__Vec3_L_double_G___G___G {
  util__PhysicalState_L_util__Vec3_L_double_G___G_ Data;
  int IsValidData;
  unsigned char _tail[4];
};
typedef struct util__IArray_L_Element___G_ util__IArray_L_Element___G_;
struct util__IArray_L_Element___G_ {
  void *_vftable;
};
/* ---- r21 hdr-conflict renames (decl stays OLD for game TUs; pilot impl+calls = NEW; linker aliases OLD -> NEW) ---- */
#undef CameraManager__GetCameraPos
#define CameraManager__GetCameraPos CameraManager__GetCameraPos__r20
#undef CameraManager__GetCameraRight
#define CameraManager__GetCameraRight CameraManager__GetCameraRight__r20
#undef CameraManager__GetCameraUp
#define CameraManager__GetCameraUp CameraManager__GetCameraUp__r20
#undef FUN_00526b80
#define FUN_00526b80 FUN_00526b80__r20
#undef FUN_008abe00
#define FUN_008abe00 FUN_008abe00__r20
#undef FleetCustomizationReadout__GetCostBarInfo
#define FleetCustomizationReadout__GetCostBarInfo FleetCustomizationReadout__GetCostBarInfo__r20
#undef FleetCustomizationReadout__GetCostHeader
#define FleetCustomizationReadout__GetCostHeader FleetCustomizationReadout__GetCostHeader__r20
#undef FleetCustomizationReadout__GetMassBarInfo
#define FleetCustomizationReadout__GetMassBarInfo FleetCustomizationReadout__GetMassBarInfo__r20
#undef FleetCustomizationReadout__GetMassHeader
#define FleetCustomizationReadout__GetMassHeader FleetCustomizationReadout__GetMassHeader__r20
#undef Module__InnerSortFunction
#define Module__InnerSortFunction Module__InnerSortFunction__r20
#undef PauseMenuHandler__Open
#define PauseMenuHandler__Open PauseMenuHandler__Open__r20
#undef PhotonPacketComponent__PhotonPacketComponent
#define PhotonPacketComponent__PhotonPacketComponent PhotonPacketComponent__PhotonPacketComponent__r20
#undef RefuelerCompartment__GetReactionMassLeft_kg
#define RefuelerCompartment__GetReactionMassLeft_kg RefuelerCompartment__GetReactionMassLeft_kg__r20
#undef ShipGroupUI__IsGroupAllied
#define ShipGroupUI__IsGroupAllied ShipGroupUI__IsGroupAllied__r20
#undef UIModuleInfo__GetPowerUseTitle
#define UIModuleInfo__GetPowerUseTitle UIModuleInfo__GetPowerUseTitle__r20
#undef UIModuleList__GetModulesHeader
#define UIModuleList__GetModulesHeader UIModuleList__GetModulesHeader__r20
/* ---- externs: stub-oracle names (K&R; ret types by call site) ---- */
extern int Body_IsAlive_Clear(); /* K&R stub; ret by call site */
extern int CelestialObject_GetChildObjectsRecursively_MemoizedFunction(); /* K&R stub; ret by call site */
extern int LibrationOrbit_LibrationOrbit__o2(); /* K&R stub; ret by call site */
extern int NodeMouseOver__dtor(); /* K&R stub; ret by call site */
extern int SpacecraftComponent_GetDesiredOrientation_Clear(); /* K&R stub; ret by call site */
extern int SpacecraftComponent__GetEstimatedMaxAngularAcceleration_radians__s2_Clear(); /* K&R stub; ret by call site */
extern int TacticalManager__GetAllColliders_Clear(); /* K&R stub; ret by call site */
extern int util_PointAlongTube_double(); /* K&R stub; ret by call site */
extern int util_Quaternion_double_Quaternion_double(); /* K&R stub; ret by call site */
extern int util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent(); /* K&R stub; ret by call site */
extern int util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2(); /* K&R stub; ret by call site */
extern int util__HashMap_class_util__WeakPtr_class_Fleet__double___HashMap_class_util__WeakPtr_class_Fleet__double(); /* K&R stub; ret by call site */
extern int util__HashMap_class_util__WeakPtr_class_Fleet__double___operator__o2(); /* K&R stub; ret by call site */
extern int util__Maybe_struct_util__PhysicalState_struct_util__Vec3_double_______operator(); /* K&R stub; ret by call site */
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


//==== 00004fd8f0 004fd8f0_PauseMenuHandler__Open ====
#undef PauseMenu /* auto(v2): compat 僵尸宏撞成员名 */

// decompiled by BatchDecomp @ 004fd8f0 name=Open conv=__thiscall body=354

/* public: void __thiscall PauseMenuHandler__Open(void) */

void __thiscall PauseMenuHandler__Open(PauseMenuHandler *this)

{
  undefined4 stack0xfffffe9c;
  ReferenceController *this_00;
  bool bVar1;
  PauseMenuUI *this_01;
  UIAttributes *p1;
  ReferenceControllerRegistry *pRVar2;
  ReferenceController *pRVar3;
  Interface *this_02;
  Manager *in_stack_fffffe9c;
  PauseMenuHandler *in_stack_fffffea0;
  undefined1 *p1_00;
  UIAttributes *pUVar4;
  DataParser *p1_01;
  
  this_01 = (PauseMenuUI *)operator_new(0x170);
  if (this_01 == (PauseMenuUI *)0x0) {
    p1 = (UIAttributes *)0x0;
  }
  else {
    p1 = UIWidget__Attr((UIWidget *)this,(UIAttributes *)&stack0xfffffe9c);
    PauseMenuUI__PauseMenuUI(this_01,in_stack_fffffe9c,in_stack_fffffea0);
    if (p1 != (UIAttributes *)0x0) goto LAB_004fd94d;
  }
  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl",
                  0xd4,"NewPointer",(undefined1 *)0x0);
  DebugBreak();
LAB_004fd94d:
  pUVar4 = p1;
  pRVar2 = (ReferenceControllerRegistry *)util__ReferenceControllerRegistry__Get();
  pRVar3 = (ReferenceController *)
           util__ReferenceControllerRegistry__Register(pRVar2,(undefined1 *)pUVar4);
  if (pRVar3 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(pRVar3);
    util__ReferenceController__AddStrongReference(pRVar3);
  }
  p1_01 = (DataParser *)(this->PauseMenu).Pointer;
  this_00 = (ReferenceController *)(this->PauseMenu).Controller;
  (this->PauseMenu).Pointer = (undefined1 *)p1;
  (this->PauseMenu).Controller = (undefined1 *)pRVar3;
  if (pRVar3 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(pRVar3);
  }
  if ((this_00 != (ReferenceController *)0x0) &&
     (bVar1 = util__ReferenceController__ReleaseStrongReference(this_00), bVar1)) {
    if (p1_01 != (DataParser *)0x0) {
      (**(code **)(p1_01->field_0x0 + 4))();
    }
    pRVar2 = (ReferenceControllerRegistry *)util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar2,p1_01);
  }
  if (pRVar3 != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__ReleaseStrongReference(pRVar3);
    if (bVar1) {
      if (p1 != (UIAttributes *)0x0) {
        (*(code *)p1->Parent->Parent)();
      }
      pUVar4 = p1;
      pRVar2 = (ReferenceControllerRegistry *)util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar2,(DataParser *)pUVar4);
    }
    bVar1 = util__ReferenceController__ReleaseStrongReference(pRVar3);
    if (bVar1) {
      if (p1 != (UIAttributes *)0x0) {
        (*(code *)p1->Parent->Parent)();
      }
      pRVar2 = (ReferenceControllerRegistry *)util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar2,(DataParser *)p1);
    }
  }
  p1_00 = (this->PauseMenu).Pointer;
  pRVar3 = (ReferenceController *)(this->PauseMenu).Controller;
  if (pRVar3 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(pRVar3);
  }
  this_02 = UIWidget__GetInterfacer((UIWidget *)this);
  Interface__NewPopup(this_02,p1_00,pRVar3);
  *(undefined1 *)&this[1]._pad_0x28_10 = 0;
  return;
}


//==== 00005149e0 005149e0_CraftBlueprintArmor__GetParametricHitLocation ====
// decompiled by BatchDecomp @ 005149e0 name=GetParametricHitLocation conv=__thiscall body=1539

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: struct util__Vec2_L_double_G_ __thiscall CraftBlueprintArmor__GetParametricHitLocation(struct
   Vec3_L_double_G_,struct ArmorCollisionShell,struct util__Quaternion_L_double_G_)const  */

util__Vec2_L_double_G_ * __thiscall
CraftBlueprintArmor__GetParametricHitLocation(CraftBlueprintArmor *this,util__Vec2_L_double_G_ *__return_storage_ptr__,undefined4 p1,
          undefined4 p2,undefined4 p3)

{
  undefined4 stack0xfffffffc;
  util__Maybe_L_double_G_ *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 in_stack_00000014;
  double in_stack_00000018;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000054;
  double in_stack_00000088;
  double in_stack_00000090;
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a4;
  util__Vec3_L_double_G_ local_b0;
  Vec3_L_double_G_ local_98;
  double dStack_78;
  util__Vec3_L_double_G_ local_70;
  util__Vec3_L_double_G_ local_58;
  undefined1 local_40[12];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  double local_18;
  double local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  dVar4 = (double)CONCAT44(in_stack_0000004c,in_stack_00000048) -
          (double)CONCAT44(in_stack_00000034,in_stack_00000030);
  dVar3 = (double)CONCAT44(in_stack_00000044,in_stack_00000040) -
          (double)CONCAT44(in_stack_0000002c,in_stack_00000028);
  dVar2 = (double)CONCAT44(in_stack_00000054,in_stack_00000050) -
          (double)CONCAT44(in_stack_0000003c,in_stack_00000038);
  local_18 = dVar4 * dVar4 + dVar3 * dVar3 + dVar2 * dVar2;
  puVar1 = util__Sqrt((util__Maybe_L_double_G_ *)(local_40 + 8),(undefined1 *)&local_18);
  if ((char)puVar1->IsValidData == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(undefined1 *)0x0);
    DebugBreak();
  }
  if (/*3ee4f8b588e368f1*/1e-05 < puVar1->Data || /*3ee4f8b588e368f1*/1e-05 == puVar1->Data) {
    local_28 = p1;
    uStack_24 = p2;
    uStack_20 = (double)CONCAT44(in_stack_00000014,p3);
    local_18 = in_stack_00000018;
    local_98.Y = (double)CONCAT44(in_stack_0000002c,in_stack_00000028);
    local_98.Z = (double)CONCAT44(in_stack_00000034,in_stack_00000030);
    local_70.Y = (double)CONCAT44(in_stack_0000003c,in_stack_00000038);
    ((slice_view *)&local_40)->_8_4_ = in_stack_00000048;
    uStack_34 = in_stack_0000004c;
    uStack_30 = in_stack_00000050;
    uStack_2c = in_stack_00000054;
util__GetCameraUp(&local_b0,in_stack_000000a0,in_stack_000000a4);
util__GetCameraUp(&local_58,in_stack_000000a0,in_stack_000000a4);
    local_10 = util_PointAlongTube_double(((slice_view *)&local_98.Y)->_0_4_,((slice_view *)&local_98.Y)->_4_4_,((slice_view *)&local_98.Z)->_0_4_);
    local_18 = local_18 - local_70.Y;
    dStack_78 = local_10;
    if (local_10 <= /*0000000000000000*/0.0) {
      dStack_78 = /*0000000000000000*/0.0;
    }
    if (/*3ff0000000000000*/1.0 <= dStack_78) {
      dStack_78 = /*3ff0000000000000*/1.0;
    }
    local_70.X = (double)CONCAT44(uStack_24,local_28) - local_98.Y;
    dVar2 = (uStack_20 - local_98.Z) * local_58.Y + local_70.X * local_58.X + local_18 * local_58.Z;
    local_70.X = local_70.X - local_58.X * dVar2;
    local_70.Y = (uStack_20 - local_98.Z) - local_58.Y * dVar2;
    local_70.Z = local_18 - local_58.Z * dVar2;
    util__Vec3_double___Normalized((Vec3_L_double_G_ *)&local_70,(util__Vec3_L_double_G_ *)local_40);
    dVar2 = (double)CONCAT44(uStack_2c,uStack_30);
    local_18 = (local_b0.Z * (double)CONCAT44(uStack_34,((slice_view *)&local_40)->_8_4_) - dVar2 * local_b0.Y) *
               local_58.X + (dVar2 * local_b0.X - local_b0.Z * (double)((slice_view *)&local_40)->_0_8_) * local_58.Y
               + (local_b0.Y * (double)((slice_view *)&local_40)->_0_8_ -
                 local_b0.X * (double)CONCAT44(uStack_34,((slice_view *)&local_40)->_8_4_)) * local_58.Z;
    dVar2 = (double)CONCAT44(uStack_34,((slice_view *)&local_40)->_8_4_) * local_b0.Y +
            local_b0.X * (double)((slice_view *)&local_40)->_0_8_ + local_b0.Z * dVar2;
    if (NAN(local_18) == (local_18 == 0.0)) {
      local_10 = dVar2;
      uStack_20 = util__Abs((undefined1 *)&local_18);
      uStack_20 = local_18 / uStack_20;
      dVar2 = local_10;
    }
    else {
      local_10 = 0.0;
      uStack_20 = 0.0;
    }
    dVar2 = util__GetTrueAnomalyFromCoplanarState_radians(dVar2);
    local_10 = dVar2 * uStack_20 - /*3ff921fb54442d18*/1.5707963267948966;
    dVar3 = util__NormalizeAngle_double(local_10);
    dVar2 = dStack_78;
  }
  else {
    dVar4 = (double)CONCAT44(in_stack_00000014,p3) -
            (double)CONCAT44(in_stack_00000034,in_stack_00000030);
    dVar3 = (double)CONCAT44(p2,p1) - (double)CONCAT44(in_stack_0000002c,in_stack_00000028);
    dVar2 = in_stack_00000018 - (double)CONCAT44(in_stack_0000003c,in_stack_00000038);
    local_18 = dVar4 * dVar4 + dVar3 * dVar3 + dVar2 * dVar2;
    puVar1 = util__Sqrt((util__Maybe_L_double_G_ *)(local_40 + 8),(undefined1 *)&local_18);
    if ((char)puVar1->IsValidData == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(undefined1 *)0x0);
      DebugBreak();
    }
    local_18 = in_stack_00000090 - in_stack_00000088;
    if (NAN(local_18) == (local_18 == 0.0)) {
      local_18 = (puVar1->Data - in_stack_00000088) / local_18;
    }
    else {
      local_18 = 0.0;
    }
util__GetCameraUp(&local_70,in_stack_000000a0,in_stack_000000a4);
util__GetCameraUp((util__Vec3_L_double_G_ *)local_40,in_stack_000000a0,in_stack_000000a4);
    local_98.X = (double)CONCAT44(p2,p1) - (double)CONCAT44(in_stack_0000002c,in_stack_00000028);
    local_98.Y = (double)CONCAT44(in_stack_00000014,p3) -
                 (double)CONCAT44(in_stack_00000034,in_stack_00000030);
    local_98.Z = in_stack_00000018 - (double)CONCAT44(in_stack_0000003c,in_stack_00000038);
    dVar2 = local_98.Y * (double)CONCAT44(uStack_34,((slice_view *)&local_40)->_8_4_) +
            local_98.X * (double)((slice_view *)&local_40)->_0_8_ + local_98.Z * (double)CONCAT44(uStack_2c,uStack_30)
    ;
    local_98.X = local_98.X - (double)((slice_view *)&local_40)->_0_8_ * dVar2;
    local_98.Y = local_98.Y - (double)CONCAT44(uStack_34,((slice_view *)&local_40)->_8_4_) * dVar2;
    local_98.Z = local_98.Z - (double)CONCAT44(uStack_2c,uStack_30) * dVar2;
    util__Vec3_double___Normalized(&local_98,&local_58);
    uStack_20 = (double)((slice_view *)&local_40)->_0_8_ * (local_70.Z * local_58.Y - local_58.Z * local_70.Y);
    dStack_78 = uStack_20 +
                (double)CONCAT44(uStack_34,((slice_view *)&local_40)->_8_4_) *
                (local_58.Z * local_70.X - local_70.Z * local_58.X) +
                (double)CONCAT44(uStack_2c,uStack_30) *
                (local_70.Y * local_58.X - local_70.X * local_58.Y);
    local_10 = local_58.Y * local_70.Y + local_70.X * local_58.X + local_70.Z * local_58.Z;
    if (NAN(dStack_78) == (dStack_78 == 0.0)) {
      uStack_20 = util__Abs((undefined1 *)&dStack_78);
      uStack_20 = dStack_78 / uStack_20;
    }
    else {
      uStack_20 = 0.0;
    }
    dVar2 = util__GetTrueAnomalyFromCoplanarState_radians(local_10);
    local_10 = dVar2 * uStack_20 - /*3ff921fb54442d18*/1.5707963267948966;
    dVar3 = util__NormalizeAngle_double(local_10);
    dVar2 = local_18;
  }
  dVar3 = dVar3 / /*401921fb54442d18*/6.283185307179586;
  __return_storage_ptr__->Y = dVar2;
  __return_storage_ptr__->X = dVar3;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
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


//==== 0000532270 00532270_CraftInstance__HasDeltaVLeft_Clear ====
// decompiled by BatchDecomp @ 00532270 name=HasDeltaVLeft_Clear conv=__thiscall body=10

/* public: void __thiscall CraftInstance__HasDeltaVLeft_Clear(void)const  */

void __thiscall CraftInstance__HasDeltaVLeft_Clear(CraftInstance *this)

{
  *(undefined2 *)((int)&(this->CanRoll_MemoizedValue).Data + 2) = 0;
  return;
}


//==== 00005790b0 005790b0_FUN_005790b0 ====
void FUN_005790b0(int *param_1,int *param_2,int *param_3);

// decompiled by BatchDecomp @ 005790b0 name=FUN_005790b0 conv=unknown body=413

void FUN_005790b0(int *param_1,int *param_2,int *param_3)

{
  undefined4 stack0xfffffffc;
  ReferenceController *this;
  bool bVar1;
  int iVar2;
  Font *pFVar3;
  Font *this_00;
  undefined4 *puVar4;
  ReferenceControllerRegistry *this_01;
  int *piVar5;
  int iVar6;
  util__Vec2_L_int_G_ uVar7;
  DataParser *pDVar8;
  ReferenceController *pRVar9;
  DataParser *p1;
  util__Str_L_char_G_ local_30;
  int local_24;
  int local_20;
  Font *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_30.Length = (int)param_1;
  local_24 = 0;
  local_10 = 0;
  iVar2 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
  if (local_10 < iVar2) {
    do {
      pFVar3 = (Font *)(**(code **)*param_1)(&local_10);
      local_1c = pFVar3;
      if ((pFVar3->TextureSize).X == 0) {
        local_20 = 0;
      }
      else {
        this_00 = ThemeFont__Get((ThemeFont *)(*(int *)(uintptr_t)param_3 + 0x2c8));
        local_20 = Font__GetVerticalOffset(this_00);
      }
      piVar5 = &(pFVar3->TextureSize).Y;
      iVar6 = 0;
      local_18 = 0;
      local_c = 0;
      iVar2 = (**(code **)((pFVar3->TextureSize).Y + 0xc))();
      if (local_c < iVar2) {
        do {
          puVar4 = (undefined4 *)(**(code **)*piVar5)(&local_c);
          this = (ReferenceController *)puVar4[1];
          p1 = (DataParser *)*puVar4;
          if (this != (ReferenceController *)0x0) {
            util__ReferenceController__AddStrongReference(this);
          }
          if ((*param_2 == 0) || (param_2[1] == 0)) {
            local_14 = 0;
          }
          else {
            pDVar8 = p1;
            pRVar9 = this;
            if (this != (ReferenceController *)0x0) {
              util__ReferenceController__AddStrongReference(this);
            }
            local_14 = (*(code *)param_2[1])(*param_2,pDVar8,pRVar9);
          }
          if (this != (ReferenceController *)0x0) {
            bVar1 = util__ReferenceController__ReleaseStrongReference(this);
            if (bVar1) {
              if (p1 != (DataParser *)0x0) {
                util__Darray_struct_util__tuple2_class_util__Str_char__void____cdecl___void_______Darray_struct_util__tuple2_class_util__Str_char__void____cdecl___void((Darray_L_util_tuple2_L_util_Str_L_char_G_Cvoid_cdecl_P_void_G___G
                            *)&p1->field6_0x6);
                if ((void *)p1->field_0x0 != (void *)0x0) {
                  operator_delete__((void *)p1->field_0x0);
                  p1->field_0x0 = 0;
                }
                operator_delete(p1,0x28);
              }
              this_01 = (ReferenceControllerRegistry *)util__ReferenceControllerRegistry__Get();
              util__ReferenceControllerRegistry__PointerWasDestroyed(this_01,p1);
            }
          }
          piVar5 = &(local_1c->TextureSize).Y;
          iVar6 = local_18 + local_14;
          local_c = local_c + 1;
          local_18 = iVar6;
          iVar2 = (**(code **)(*(int *)(uintptr_t)piVar5 + 0xc))();
        } while (local_c < iVar2);
      }
      pFVar3 = ThemeFont__Get((ThemeFont *)(*(int *)(uintptr_t)param_3 + 0x2c8));
      uVar7 = UIStaticText__GetLabelSize(&local_30,local_1c,pFVar3);
      param_1 = (int *)local_30.Length;
      local_10 = local_10 + 1;
      local_24 = local_24 + *(int *)(uVar7.X + 4) + local_20 + iVar6;
      iVar2 = (**(code **)(*(int *)local_30.Length + 0xc))();
    } while (local_10 < iVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000593200 00593200_UIModuleList__GetModulesHeader ====
// decompiled by BatchDecomp @ 00593200 name=GetModulesHeader conv=__thiscall body=165

/* private: class Str_L_char_G_ __thiscall UIModuleList__GetModulesHeader(void)const  */

util__Str_L_char_G_ * __thiscall
UIModuleList__GetModulesHeader(UIModuleList *this,util__Str_L_char_G_ *__return_storage_ptr__)

{
  int iVar1;
  undefined1 **ppuVar2;
  LocStr *this_00;
  util__Str_L_char_G_ *p1;
  void *local_28[3];
  void *local_1c;
  util__Str_L_char_G_ local_10;
  
  iVar1 = (this->LockedEnableDelegate).Callee;
  local_10.Data = 0;
  local_10.Capacity = 0;
  local_10.Length = 0;
  if ((iVar1 == 0) ||
     (ppuVar2 = (this->LockedEnableDelegate).CallbackFunction, ppuVar2 == (undefined1 **)0x0)) {
    this_00 = (LocStr *)(this->ModuleCategoryList).Pointer;
  }
  else {
    this_00 = (LocStr *)(*(code *)ppuVar2)(iVar1);
  }
  util__LocStr__LocStr((LocStr *)local_28,*(util__Str_L_char_G_ **)this_00,&local_10);
  p1 = util__LocStr__operator__o3(this_00);
  util__Str_char___Str_char((Str_L_char_G_ *)__return_storage_ptr__,p1);
  if (local_1c != (void *)0x0) {
    operator_delete__(local_1c);
    local_1c = (void *)0x0;
  }
  if (local_28[0] != (void *)0x0) {
    operator_delete__(local_28[0]);
    local_28[0] = (void *)0x0;
  }
  if ((void *)local_10.Data != (void *)0x0) {
    operator_delete__((void *)local_10.Data);
  }
  return __return_storage_ptr__;
}


//==== 0000593890 00593890_UIModuleInfo__GetPowerUseTitle ====
// decompiled by BatchDecomp @ 00593890 name=GetPowerUseTitle conv=__thiscall body=790

/* WARNING: Removing unreachable block (ram,0x00593a6f) */
/* WARNING: Removing unreachable block (ram,0x00593a7c) */
/* WARNING: Removing unreachable block (ram,0x00593a8c) */
/* WARNING: Removing unreachable block (ram,0x00593a96) */
/* private: class Str_L_char_G_ __thiscall UIModuleInfo__GetPowerUseTitle(void)const  */

util__Str_L_char_G_ * __thiscall
UIModuleInfo__GetPowerUseTitle(UIModuleInfo *this,util__Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xffffff44;
  undefined1 **ppuVar1;
  Str_L_char_G_ SVar2;
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
  undefined1 *puVar13;
  Module *this_00;
  Str_L_char_G_ *p1;
  util__Str_L_char_G_ *p1_00;
  Str_L_char_G_ *pSVar14;
  util__Str_L_char_G_ *puVar15;
  int unaff_EDI;
  util__Str_L_char_G_ *__return_storage_ptr___00;
  char *in_stack_ffffff44;
  char *pcVar16;
  int iVar17;
  void *local_a4[3];
  void *local_98;
  LocStr local_8c[24];
  Str_L_char_G_ local_74;
  Str_L_char_G_ local_68;
  util__Str_L_char_G_ local_5c;
  util__Str_L_char_G_ local_50;
  undefined4 local_44;
  Str_L_char_G_ local_40;
  Str_L_char_G_ local_34;
  util__Str_L_char_G_ local_28;
  util__Str_L_char_G_ local_1c;
  util__Str_L_char_G_ local_10;
  
  local_44 = 0;
  if (((this->EditedModule).Getter.Callee == 0) ||
     (ppuVar1 = (this->EditedModule).Getter.CallbackFunction, ppuVar1 == (undefined1 **)0x0)) {
    puVar13 = (this->EditedModule).Value;
  }
  else {
    puVar13 = (undefined1 *)(*(code *)ppuVar1)();
  }
  if (puVar13 == (undefined1 *)0x0) {
    puVar15 = &local_28;
    local_28.Data = 0;
    bVar12 = false;
    bVar11 = false;
    bVar10 = true;
    bVar9 = false;
    bVar8 = false;
    bVar7 = false;
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    bVar3 = false;
    local_28.Capacity = 0;
    local_28.Length = 0;
  }
  else {
    util__Str_char___Str_char__o5(&local_74,"EditedModule.Get()->GetTotalPowerUsage_W()");
    util__Str_char___Str_char__o5(&local_40,"Colon");
    pcVar16 = (char *)0x5938f6;
    util__Str_char___Str_char__o5(&local_34,"PowerUse");
    if (((this->EditedModule).Getter.Callee == 0) ||
       (ppuVar1 = (this->EditedModule).Getter.CallbackFunction, ppuVar1 == (undefined1 **)0x0)) {
      this_00 = (Module *)(this->EditedModule).Value;
    }
    else {
      pcVar16 = (char *)0x59390d;
      this_00 = (Module *)(*(code *)ppuVar1)();
    }
    iVar17 = 0x593921;
    Module__GetTotalPowerUsage_W_Memoize(this_00);
    if ((char)this_00[1]._pad_0x0_0 == '\0') {
      pcVar16 = "IsValid()";
      in_stack_ffffff44 = (char *)0x13;
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(undefined1 *)0x0);
      iVar17 = 0x593943;
      DebugBreak();
    }
    local_1c.Data = 0;
    local_1c.Capacity = 0;
    local_1c.Length = 0;
    local_10.Data = 0;
    local_10.Capacity = 0;
    local_10.Length = 0;
    GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff44,&local_74);
    SVar2.Capacity = iVar17;
    SVar2.Data = pcVar16;
    SVar2.Length = unaff_EDI;
    p1 = Print(&local_68,
               (double)CONCAT44(in_stack_ffffff44,
                                (int)((ulonglong)*(undefined8 *)&this_00->UsesCustomName >> 0x20)),
               SVar2);
    puVar15 = &local_50;
    pSVar14 = &local_40;
    util__LocStr__LocStr((LocStr *)local_a4,(util__Str_L_char_G_ *)pSVar14,&local_1c);
    p1_00 = util__LocStr__operator__o3((LocStr *)pSVar14);
    __return_storage_ptr___00 = &local_5c;
    pSVar14 = &local_34;
    util__LocStr__LocStr(local_8c,(util__Str_L_char_G_ *)pSVar14,&local_10);
    pSVar14 = (Str_L_char_G_ *)util__LocStr__operator__o3((LocStr *)pSVar14);
    pSVar14 = (Str_L_char_G_ *)util__Str_char___operator(pSVar14,__return_storage_ptr___00,p1_00);
    puVar15 = util__Str_char___operator(pSVar14,puVar15,(util__Str_L_char_G_ *)p1);
    bVar12 = true;
    bVar11 = true;
    bVar10 = false;
    bVar9 = true;
    bVar8 = true;
    bVar7 = true;
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    bVar3 = true;
  }
  iVar17 = local_28.Data;
  util__Str_char___Str_char((Str_L_char_G_ *)__return_storage_ptr__,puVar15);
  if ((bVar10) && ((void *)iVar17 != (void *)0x0)) {
    operator_delete__((void *)iVar17);
  }
  if ((bVar11) && ((void *)local_50.Data != (void *)0x0)) {
    operator_delete__((void *)local_50.Data);
    local_50.Data = 0;
  }
  if ((bVar12) && ((void *)local_5c.Data != (void *)0x0)) {
    operator_delete__((void *)local_5c.Data);
    local_5c.Data = 0;
  }
  if ((bVar4) && ((void *)local_10.Data != (void *)0x0)) {
    operator_delete__((void *)local_10.Data);
    local_10.Data = 0;
  }
  if (bVar5) {
    if (local_98 != (void *)0x0) {
      operator_delete__(local_98);
      local_98 = (void *)0x0;
    }
    if (local_a4[0] != (void *)0x0) {
      operator_delete__(local_a4[0]);
      local_a4[0] = (void *)0x0;
    }
  }
  if ((bVar6) && ((void *)local_1c.Data != (void *)0x0)) {
    operator_delete__((void *)local_1c.Data);
    local_1c.Data = 0;
  }
  if ((bVar7) && (local_68.Data != (char *)0x0)) {
    operator_delete__(local_68.Data);
    local_68.Data = (char *)0x0;
  }
  if ((bVar8) && (local_34.Data != (char *)0x0)) {
    operator_delete__(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if ((bVar9) && (local_40.Data != (char *)0x0)) {
    operator_delete__(local_40.Data);
    local_40.Data = (char *)0x0;
  }
  if ((local_74.Data != (char *)0x0) && (bVar3)) {
    operator_delete__(local_74.Data);
  }
  return __return_storage_ptr__;
}


//==== 00005a7cb0 005a7cb0_CombustionRocketCompartment__OnScarTexture ====
// decompiled by BatchDecomp @ 005a7cb0 name=OnScarTexture conv=__thiscall body=424

/* public: virtual void __thiscall CombustionRocketCompartment__OnScarTexture(struct
   util__Quaternion_L_double_G_,struct CompartmentCollisionShell,int,struct Vec3_L_double_G_,double)
    */

void __thiscall
CombustionRocketCompartment__OnScarTexture(CombustionRocketCompartment *this,undefined4 p1,undefined4 p2,int p3,undefined4 p4,
          double p5)

{
  undefined4 stack0x00000034;
  undefined4 stack0xffffff34;
  undefined4 stack0xfffffffc;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 in_stack_0000001c;
  bool in_stack_00000020;
  ReferenceController *in_stack_00000028;
  char in_stack_000000ac;
  char in_stack_00000134;
  int in_stack_0000013c;
  undefined4 uStack_b8;
  undefined4 p1_00;
  ReferenceController *this_00;
  util__Vec3_L_double_G_ local_24;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = in_stack_0000013c + 1;
  iVar1 = this->_pad_0x38_14;
  if (*(char *)(iVar1 + 0x170) == '\0') {
    local_c = 0;
  }
  if (in_stack_00000134 == '\0') {
    if (in_stack_000000ac != '\0') {
      piVar3 = (int *)(**(code **)this->_pad_0x3c_15)();
      ArmorPlate__IsDestroyed((ArmorPlate *)(*(int *)(uintptr_t)piVar3 + 0x150));
      CollisionCylinder__CollisionCylinder((CollisionCylinder *)&stack0xffffff34,(CollisionCylinder *)&stack0x00000034);
      ThermalRocketSubModule__OnScarTexture((ThermalRocketSubModule *)(iVar1 + 0x1e0),(undefined1 *)&this->_pad_0x4c_19,p1,p2,
                 p3,p4,(double)CONCAT44(in_stack_0000001c,((slice_view *)&p5)->_4_4_),in_stack_00000020);
    }
  }
  else {
    EngineCompartment__GetGimballedThrustDirection((EngineCompartment *)this,&local_24);
    puVar2 = (undefined4 *)(**(code **)(this->_pad_0x4c_19 + 0x20))();
    p1_00 = *puVar2;
    this_00 = (ReferenceController *)puVar2[1];
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_00);
    }
    iVar1 = this->_pad_0x38_14;
    if (*(char *)(iVar1 + 0x170) == '\0') {
      uStack_b8 = 0x5a7da1;
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(undefined1 *)0x0);
      DebugBreak();
    }
    TurretSubModule__OnScarTexture((TurretSubModule *)(iVar1 + 0x70),p1_00,this_00,p1,p2,p3,p5);
  }
  if (in_stack_00000028 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(in_stack_00000028);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00005b2a60 005b2a60_EngineCompartment__GetCurrentThrustDirection ====
// decompiled by BatchDecomp @ 005b2a60 name=GetCurrentThrustDirection conv=__thiscall body=371

/* public: struct Vec3_L_double_G_ __thiscall EngineCompartment__GetCurrentThrustDirection(struct
   util__Quaternion_L_double_G_)const  */

util__Vec3_L_double_G_ * __thiscall
EngineCompartment__GetCurrentThrustDirection(EngineCompartment *this,util__Vec3_L_double_G_ *__return_storage_ptr__,undefined4 p1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  util__Quaternion_L_double_G_ *puVar5;
  undefined4 in_stack_0000000c;
  util__Quaternion_L_double_G_ local_44;
  undefined1 local_24[24];
  double local_c;
  
  puVar5 = ModuleCompartment__GetOrientation((ModuleCompartment *)this,&local_44);
  dVar1 = (this->GimbalOrientation).Y;
  dVar2 = (this->GimbalOrientation).X;
  dVar3 = (this->GimbalOrientation).Z;
  dVar4 = ((dVar2 * puVar5->W + dVar1 * puVar5->Z) - dVar3 * puVar5->Y) +
          (this->GimbalOrientation).W * puVar5->X;
  ((slice_view *)&local_24)->_16_8_ = 0;
  ((slice_view *)&local_24)->_8_8_ = dVar4;
  local_c = (this->GimbalOrientation).W * puVar5->W -
            (dVar2 * puVar5->X + dVar1 * puVar5->Y + dVar3 * puVar5->Z);
util__GetCameraUp((util__Vec3_L_double_G_ *)local_24,SUB84(dVar4,0),(int)((ulonglong)dVar4 >> 0x20));
util__GetCameraUp(__return_storage_ptr__,p1,in_stack_0000000c);
  return __return_storage_ptr__;
}


//==== 00005b46d0 005b46d0_EngineCompartment__PostSetup ====
// decompiled by BatchDecomp @ 005b46d0 name=PostSetup conv=__thiscall body=261

/* public: virtual void __thiscall EngineCompartment__PostSetup(class util__WeakPtr_L_CraftInstance_G_ const &) */

void __thiscall
EngineCompartment__PostSetup(EngineCompartment *this,util__WeakPtr_L_CraftInstance_G_ *p1)

{
  undefined4 stack0xfffffffc;
  bool bVar1;
  int *piVar2;
  int iVar3;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_34[16];
  undefined **local_24;
  undefined1 **local_20;
  util__IArray_L_double_G_ local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar2 = (int *)(**(code **)(*(int *)this->_pad_0x38_14 + 0x170))(&local_24);
  local_c = 0;
  iVar3 = (**(code **)(*(int *)(uintptr_t)piVar2 + 0xc))();
  if (local_c < iVar3) {
    do {
      local_10 = (**(code **)*piVar2)(&local_c);
      if (((ReferenceController *)p1->Controller != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)p1->Controller)
         , !bVar1)) {
        p1->Pointer = (undefined1 *)0x0;
      }
      local_14._vftable =
           (undefined1 *)
           CraftInstance__GetReactionMassSuppliers((CraftInstance *)p1->Pointer,(Material *)local_34);
      iVar3 = (this->CachedReactionMassCompartments).Size;
      local_10 = iVar3 + 1;
      util__Darray_class_util__Darray_class_util__WeakPtr_class_SpacecraftComponent_______SetSize((Darray_L_util__Darray_L_util__WeakPtr_L_SpacecraftComponent_G___G___G *)
                 &this->CachedReactionMassCompartments,&local_10);
      bVar1 = util__Darray_class_util__Darray_class_util__WeakPtr_class_SpacecraftComponent_______CheckSize((Darray_L_util__Darray_L_util__WeakPtr_L_SpacecraftComponent_G___G___G
                         *)&this->CachedReactionMassCompartments,iVar3);
      if (bVar1) {
        util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
                  ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
                   ((this->CachedReactionMassCompartments).Data +
                   (this->CachedReactionMassCompartments).Size * 0x10 + -0x10),local_14._vftable);
      }
      util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_34);
      local_c = local_c + 1;
      iVar3 = (**(code **)(*(int *)(uintptr_t)piVar2 + 0xc))();
    } while (local_c < iVar3);
  }
  local_24 = ((void *)(0x00919b30u));
  if (local_20 != (undefined1 **)0x0) {
    operator_delete__(local_20);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00005b4c40 005b4c40_EngineModule__RenderInitialState ====
// decompiled by BatchDecomp @ 005b4c40 name=RenderInitialState conv=__thiscall body=262

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual void __thiscall EngineModule__RenderInitialState(double,class CameraManager
   *,class util__Darray_L_class_util__SharedPtr_L_class_ArmorTextureHandler_G___G const &,double,struct
   Vec3_L_double_G_)const  */

void __thiscall
EngineModule__RenderInitialState(EngineModule *this,double p1,CameraManager *p2,undefined1 *p3,double p4,undefined4 p5)

{
  float10 fVar1;
  double dVar2;
  double local_c;
  
  local_c = p1 / /*4014000000000000*/5.0;
  dVar2 = util__Floor((undefined1 *)&local_c);
  dVar2 = p1 - dVar2 * /*4014000000000000*/5.0;
  if ((/*4014000000000000*/5.0 <= dVar2) ||
     ((dVar2 < 0.0 &&
      (dVar2 = dVar2 + /*4014000000000000*/5.0,
      (NAN(dVar2) || NAN(/*4014000000000000*/5.0)) != (dVar2 == /*4014000000000000*/5.0))))) {
    dVar2 = 0.0;
  }
  p1 = (dVar2 * /*401921fb54442d18*/6.283185307179586) / /*4014000000000000*/5.0;
  dVar2 = util__Cos((undefined1 *)&p1);
  p1 = (dVar2 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  if (p4 <= /*0000000000000000*/0.0) {
    fVar1 = (float10)(**(code **)(this->_pad_0x0_0 + 0x17c))();
    p4 = (double)fVar1;
  }
  Render(this,p3,0,0.0);
  return;
}


//==== 00005b7da0 005b7da0_NuclearThermalRocketCompartment__OnScarTexture ====
// decompiled by BatchDecomp @ 005b7da0 name=OnScarTexture conv=__thiscall body=424

/* public: virtual void __thiscall NuclearThermalRocketCompartment__OnScarTexture(struct
   util__Quaternion_L_double_G_,struct CompartmentCollisionShell,int,struct Vec3_L_double_G_,double)
    */

void __thiscall
NuclearThermalRocketCompartment__OnScarTexture(NuclearThermalRocketCompartment *this,undefined4 p1,undefined4 p2,int p3,undefined4 p4,
          double p5)

{
  undefined4 stack0x00000034;
  undefined4 stack0xffffff34;
  undefined4 stack0xfffffffc;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 in_stack_0000001c;
  bool in_stack_00000020;
  ReferenceController *in_stack_00000028;
  char in_stack_000000ac;
  char in_stack_00000134;
  int in_stack_0000013c;
  undefined4 uStack_b8;
  undefined4 p1_00;
  ReferenceController *this_00;
  util__Vec3_L_double_G_ local_24;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = in_stack_0000013c + 1;
  iVar1 = this->_pad_0x38_14;
  if (*(char *)(iVar1 + 0x170) == '\0') {
    local_c = 0;
  }
  if (in_stack_00000134 == '\0') {
    if (in_stack_000000ac != '\0') {
      piVar3 = (int *)(**(code **)this->_pad_0x3c_15)();
      ArmorPlate__IsDestroyed((ArmorPlate *)(*(int *)(uintptr_t)piVar3 + 0x150));
      CollisionCylinder__CollisionCylinder((CollisionCylinder *)&stack0xffffff34,(CollisionCylinder *)&stack0x00000034);
      ThermalRocketSubModule__OnScarTexture((ThermalRocketSubModule *)(iVar1 + 0x280),(undefined1 *)&this->_pad_0x4c_19,p1,p2,
                 p3,p4,(double)CONCAT44(in_stack_0000001c,((slice_view *)&p5)->_4_4_),in_stack_00000020);
    }
  }
  else {
    EngineCompartment__GetGimballedThrustDirection((EngineCompartment *)this,&local_24);
    puVar2 = (undefined4 *)(**(code **)(this->_pad_0x4c_19 + 0x20))();
    p1_00 = *puVar2;
    this_00 = (ReferenceController *)puVar2[1];
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_00);
    }
    iVar1 = this->_pad_0x38_14;
    if (*(char *)(iVar1 + 0x170) == '\0') {
      uStack_b8 = 0x5b7e91;
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(undefined1 *)0x0);
      DebugBreak();
    }
    TurretSubModule__OnScarTexture((TurretSubModule *)(iVar1 + 0x70),p1_00,this_00,p1,p2,p3,p5);
  }
  if (in_stack_00000028 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(in_stack_00000028);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00005b9ac0 005b9ac0_PropellantTankModule__GetOneLineStatus ====
// decompiled by BatchDecomp @ 005b9ac0 name=GetOneLineStatus conv=__thiscall body=710

/* public: virtual class util__Maybe_L_class_util__Str_L_char_G___G __thiscall
   PropellantTankModule__GetOneLineStatus(class util__Darray_L_class_util__WeakPtr_L_struct____ModuleCompartment_G___G const &)const  */

undefined1 * __thiscall
PropellantTankModule__GetOneLineStatus(PropellantTankModule *this,undefined1 *p1)

{
  undefined4 stack0xffffff50;
  undefined4 stack0xfffffffc;
  Str_L_char_G_ SVar1;
  Str_L_char_G_ SVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  Str_L_char_G_ *pSVar6;
  util__Str_L_char_G_ *puVar7;
  undefined1 *p0;
  int unaff_EDI;
  int *in_stack_00000008;
  char *pcVar8;
  char *pcVar9;
  void *local_98[3];
  void *local_8c;
  Str_L_char_G_ local_80;
  Str_L_char_G_ local_74;
  util__Str_L_char_G_ local_68;
  Str_L_char_G_ local_5c;
  Str_L_char_G_ local_50;
  Str_L_char_G_ local_44;
  util__Str_L_char_G_ local_38;
  undefined8 local_2c;
  double local_24;
  undefined4 *local_1c[4];
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_2c = (double)CONCAT44(this,(undefined4)local_2c);
  iVar4 = (**(code **)(*(int *)(uintptr_t)in_stack_00000008 + 0xc))();
  if (iVar4 == 0) {
    *(undefined4 *)p1 = 0;
    *(undefined4 *)(p1 + 4) = 0;
    *(undefined4 *)(p1 + 8) = 0;
    p1[0xc] = 0;
  }
  else {
    pcVar8 = (char *)0x5b9b04;
util__GetOneLineStatus((undefined1 *)local_1c);
    local_c = 0;
    local_24 = 0.0;
    iVar4 = (*(code *)local_1c[0][3])();
    if (local_c < iVar4) {
      do {
        piVar5 = (int *)(*(code *)*local_1c[0])();
        if (((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) &&
           (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]),
           !bVar3)) {
          *piVar5 = 0;
        }
        local_24 = *(double *)(*(int *)(uintptr_t)piVar5 + 0x108) + local_24;
        local_c = local_c + 1;
        iVar4 = (*(code *)local_1c[0][3])();
      } while (local_c < iVar4);
    }
    iVar4 = (**(code **)(*(int *)(uintptr_t)in_stack_00000008 + 0xc))();
    local_2c = local_24 / (*(double *)(((slice_view *)&local_2c)->_4_4_ + 0x78) * (double)iVar4);
    if (local_2c <= /*0000000000000000*/0.0) {
      local_2c = /*0000000000000000*/0.0;
    }
    if (/*3ff0000000000000*/1.0 <= local_2c) {
      local_2c = /*3ff0000000000000*/1.0;
    }
    util__Str_char___Str_char__o5(&local_5c,"AmountLeft_Percent");
    util__Str_char___Str_char__o5(&local_50,"CurrentReactionMass_kg");
    pcVar9 = "PropellantTank Status";
    iVar4 = 0x5b9bcd;
    util__Str_char___Str_char__o5(&local_44,"PropellantTank Status");
    GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff50,&local_5c);
    SVar1.Capacity = (int)pcVar9;
    SVar1.Data = (char *)iVar4;
    SVar1.Length = unaff_EDI;
    Print(&local_80,(double)CONCAT44(pcVar8,(int)((ulonglong)local_2c >> 0x20)),SVar1);
    GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff50,&local_50);
    SVar2.Capacity = (int)pcVar9;
    SVar2.Data = (char *)iVar4;
    SVar2.Length = unaff_EDI;
    pSVar6 = Print(&local_74,(double)CONCAT44(pcVar8,(int)((ulonglong)local_24 >> 0x20)),SVar2);
    if (pSVar6->Capacity < 1) {
      pcVar8 = "";
    }
    else {
      pcVar8 = pSVar6->Data;
    }
    local_38.Data = 0;
    pSVar6 = &local_44;
    local_38.Capacity = 0;
    local_38.Length = 0;
    util__LocStr__LocStr((LocStr *)local_98,(util__Str_L_char_G_ *)pSVar6,&local_38);
    puVar7 = util__LocStr__operator__o3((LocStr *)pSVar6);
    if (puVar7->Capacity < 1) {
      p0 = &cde_l2_0091985b_NullString;
    }
    else {
      p0 = (undefined1 *)puVar7->Data;
    }
    puVar7 = util__Printf(&local_68,p0,pcVar8);
    util__Str_char___Str_char((Str_L_char_G_ *)p1,puVar7);
    p1[0xc] = 1;
    if ((void *)local_68.Data != (void *)0x0) {
      operator_delete__((void *)local_68.Data);
      local_68.Data = 0;
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
    if (local_74.Data != (char *)0x0) {
      operator_delete__(local_74.Data);
      local_74.Data = (char *)0x0;
    }
    if (local_80.Data != (char *)0x0) {
      operator_delete__(local_80.Data);
      local_80.Data = (char *)0x0;
    }
    if (local_44.Data != (char *)0x0) {
      operator_delete__(local_44.Data);
      local_44.Data = (char *)0x0;
    }
    if (local_50.Data != (char *)0x0) {
      operator_delete__(local_50.Data);
      local_50.Data = (char *)0x0;
    }
    if (local_5c.Data != (char *)0x0) {
      operator_delete__(local_5c.Data);
      local_5c.Data = (char *)0x0;
    }
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_1c);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return p1;
}


//==== 00005bd7e0 005bd7e0_PropellantTankCompartment__OnScarTexture ====
// decompiled by BatchDecomp @ 005bd7e0 name=OnScarTexture conv=__thiscall body=443

/* public: virtual void __thiscall PropellantTankCompartment__OnScarTexture(struct
   util__Quaternion_L_double_G_,struct CompartmentCollisionShell,int,struct Vec3_L_double_G_,double)
    */

void __thiscall
PropellantTankCompartment__OnScarTexture(PropellantTankCompartment *this,undefined4 p1,undefined4 p2,int p3,undefined4 p4,
          double p5)

{
  undefined4 stack0xfffffffc;
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  ReferenceController *in_stack_00000028;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  char in_stack_000000ac;
  double in_stack_00000158;
  DamageScar local_40;
  util__Vec2_L_double_G_ local_20;
  bool local_10;
  undefined3 uStack_f;
  undefined4 local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  piVar2 = (int *)(**(code **)this->_pad_0x3c_15)(&local_c);
  bVar1 = ArmorPlate__IsDestroyed((ArmorPlate *)(*(int *)(uintptr_t)piVar2 + 0x150));
  _local_10 = CONCAT31(uStack_f,bVar1);
  if (in_stack_000000ac == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(undefined1 *)0x0);
    DebugBreak();
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(undefined1 *)0x0);
    DebugBreak();
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(undefined1 *)0x0);
    DebugBreak();
  }
util__OnScarTexture(&local_20,in_stack_00000034,in_stack_00000038,
             (double)CONCAT44(in_stack_00000044,in_stack_00000040),in_stack_00000048,
             in_stack_0000004c);
  local_c = 0;
  local_40.Temperature_K = *(double *)(*(int *)(this->_pad_0x38_14 + 0x74) + 0x98);
  ((slice_view *)&local_40.ParametricLocation.X)->_0_4_ = ((slice_view *)&local_20.X)->_0_4_;
  ((slice_view *)&local_40.ParametricLocation.X)->_4_4_ = ((slice_view *)&local_20.X)->_4_4_;
  ((slice_view *)&local_40.ParametricLocation.Y)->_0_4_ = ((slice_view *)&local_20.Y)->_0_4_;
  ((slice_view *)&local_40.ParametricLocation.Y)->_4_4_ = ((slice_view *)&local_20.Y)->_4_4_;
  puVar3 = (undefined4 *)(**(code **)this->_pad_0x4c_19)(&local_c);
  ArmorTextureHandler__QueueScarring((ArmorTextureHandler *)*puVar3,&local_40,SUB41(_local_10,0));
  if (bVar1) {
    this->TotalPierceArea_m2 =
         in_stack_00000158 * /*400921fb54442d18*/3.141592653589793 * in_stack_00000158 + this->TotalPierceArea_m2;
  }
  if (in_stack_00000028 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(in_stack_00000028);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00005c0fc0 005c0fc0_ResistojetCompartment__OnScarTexture ====
// decompiled by BatchDecomp @ 005c0fc0 name=OnScarTexture conv=__thiscall body=424

/* public: virtual void __thiscall ResistojetCompartment__OnScarTexture(struct
   util__Quaternion_L_double_G_,struct CompartmentCollisionShell,int,struct Vec3_L_double_G_,double)
    */

void __thiscall
ResistojetCompartment__OnScarTexture(ResistojetCompartment *this,undefined4 p1,undefined4 p2,int p3,undefined4 p4,double p5)

{
  undefined4 stack0x00000034;
  undefined4 stack0xffffff34;
  undefined4 stack0xfffffffc;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 in_stack_0000001c;
  bool in_stack_00000020;
  ReferenceController *in_stack_00000028;
  char in_stack_000000ac;
  char in_stack_00000134;
  int in_stack_0000013c;
  undefined4 uStack_b8;
  undefined4 p1_00;
  ReferenceController *this_00;
  util__Vec3_L_double_G_ local_24;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = in_stack_0000013c + 1;
  iVar1 = this->_pad_0x38_14;
  if (*(char *)(iVar1 + 0x170) == '\0') {
    local_c = 0;
  }
  if (in_stack_00000134 == '\0') {
    if (in_stack_000000ac != '\0') {
      piVar3 = (int *)(**(code **)this->_pad_0x3c_15)();
      ArmorPlate__IsDestroyed((ArmorPlate *)(*(int *)(uintptr_t)piVar3 + 0x150));
      CollisionCylinder__CollisionCylinder((CollisionCylinder *)&stack0xffffff34,(CollisionCylinder *)&stack0x00000034);
      ThermalRocketSubModule__OnScarTexture((ThermalRocketSubModule *)(iVar1 + 0x1d0),(undefined1 *)&this->_pad_0x4c_19,p1,p2,
                 p3,p4,(double)CONCAT44(in_stack_0000001c,((slice_view *)&p5)->_4_4_),in_stack_00000020);
    }
  }
  else {
    EngineCompartment__GetGimballedThrustDirection((EngineCompartment *)this,&local_24);
    puVar2 = (undefined4 *)(**(code **)(this->_pad_0x4c_19 + 0x20))();
    p1_00 = *puVar2;
    this_00 = (ReferenceController *)puVar2[1];
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_00);
    }
    iVar1 = this->_pad_0x38_14;
    if (*(char *)(iVar1 + 0x170) == '\0') {
      uStack_b8 = 0x5c10b1;
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(undefined1 *)0x0);
      DebugBreak();
    }
    TurretSubModule__OnScarTexture((TurretSubModule *)(iVar1 + 0x70),p1_00,this_00,p1,p2,p3,p5);
  }
  if (in_stack_00000028 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(in_stack_00000028);
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


//==== 00005eb440 005eb440_RefuelerCompartment__PostSetup ====
// decompiled by BatchDecomp @ 005eb440 name=PostSetup conv=__thiscall body=242

/* public: virtual void __thiscall RefuelerCompartment__PostSetup(class util__WeakPtr_L_CraftInstance_G_ const &) */

void __thiscall
RefuelerCompartment__PostSetup(RefuelerCompartment *this,util__WeakPtr_L_CraftInstance_G_ *p1)

{
  undefined1 *puVar1;
  ReferenceController *this_00;
  ReferenceController *this_01;
  util__WeakPtr_L_CraftInstance_G_ *puVar2;
  util__IArray_L_Element___G_ uVar3;
  bool bVar4;
  int *p1_00;
  int iVar5;
  int iVar6;
  util__Darray_L_util__WeakPtr_L_PropellantTankCompartment_G___G_ *this_02;
  undefined4 *puVar7;
  undefined4 *puVar8;
  double dVar9;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_18[16];
  util__IArray_L_Element___G_ local_8;
  
  puVar2 = p1;
  local_8._vftable = (undefined1 *)this;
  if ((ReferenceController *)p1->Controller != (ReferenceController *)0x0) {
    bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)p1->Controller);
    if (!bVar4) {
      puVar2->Pointer = (undefined1 *)0x0;
    }
  }
  p1_00 = (int *)CraftInstance__GetReactionMassSuppliers((CraftInstance *)puVar2->Pointer,(Material *)local_18);
  this_02 = &this->CachedReactionMassCompartments;
  if ((this->CachedReactionMassCompartments).Size == 0) {
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)this_02,
               (undefined1 *)p1_00);
  }
  else {
    iVar5 = (**(code **)(*(int *)(uintptr_t)p1_00 + 0xc))();
    if (iVar5 != 0) {
      iVar5 = (this->CachedReactionMassCompartments).Size;
      iVar6 = (**(code **)(*(int *)(uintptr_t)p1_00 + 0xc))();
      p1 = (util__WeakPtr_L_CraftInstance_G_ *)(iVar6 + (this->CachedReactionMassCompartments).Size);
      util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)this_02,(int *)&p1);
      util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)this_02,iVar5);
      puVar1 = (this->CachedReactionMassCompartments).Data;
      puVar8 = (undefined4 *)p1_00[1];
      puVar7 = (undefined4 *)(puVar1 + iVar5 * 8);
      if (puVar7 != (undefined4 *)(puVar1 + (this->CachedReactionMassCompartments).Size * 8)) {
        do {
          this_00 = (ReferenceController *)puVar7[1];
          *puVar7 = *puVar8;
          this_01 = (ReferenceController *)puVar8[1];
          puVar7[1] = this_01;
          if (this_01 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this_01);
          }
          if (this_00 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(this_00);
          }
          puVar7 = puVar7 + 2;
          puVar8 = puVar8 + 2;
        } while (puVar7 != (undefined4 *)
                           (*(undefined1 **)(local_8._vftable + 0x110) +
                           *(int *)(local_8._vftable + 0x114) * 8));
      }
    }
  }
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_18);
  uVar3._vftable = local_8._vftable;
  dVar9 = GetReactionMassLeft_kg((RefuelerCompartment *)local_8._vftable);
  *(double *)(uVar3._vftable + 0x120) = dVar9;
  return;
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


//==== 00006066b0 006066b0_NuclearPayloadCompartment__RunActions ====
// decompiled by BatchDecomp @ 006066b0 name=RunActions conv=__thiscall body=806

/* public: virtual void __thiscall NuclearPayloadCompartment__RunActions(double) */

void __thiscall NuclearPayloadCompartment__RunActions(NuclearPayloadCompartment *this,double p1)

{
  undefined4 stack0xfffffffc;
  int *piVar1;
  int iVar2;
  Body *pBVar3;
  bool bVar4;
  char cVar5;
  undefined4 *puVar6;
  Body *pBVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  util__Quaternion_L_double_G_ local_6c;
  NuclearPayloadCompartment *local_4c;
  undefined8 local_48;
  undefined8 local_44;
  util__WeakPtr_L_Body_G_ local_40[6];
  char local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar1 = &this->_pad_0x30_12;
  local_4c = this;
  if ((ReferenceController *)this->_pad_0x34_13 != (ReferenceController *)0x0) {
    bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x34_13);
    if (!bVar4) {
      *piVar1 = 0;
    }
  }
  if (*(int *)(*(int *)(uintptr_t)piVar1 + 0x1e0) != 0) {
    cVar5 = (**(code **)(this->_pad_0x0_0 + 0x18))();
    if (cVar5 == '\0') {
      iVar2 = this->_pad_0x38_14;
      local_44 = CONCAT31(((slice_view *)&local_44)->_1_3_,*(undefined1 *)(iVar2 + 0x70));
      local_48 = CONCAT31(((slice_view *)&local_48)->_1_3_,*(undefined1 *)(iVar2 + 0x71));
      uVar9 = (ulonglong)CONCAT14(*(undefined1 *)((int)&this->DelayedDetonation + 1),local_44);
      uVar8 = local_48;
      bVar4 = (bool)(**(code **)(this->_pad_0x0_0 + 0x14))();
      ProximityDetonator__GetDetonationState((ProximityDetonator *)(iVar2 + 0x110),local_40,p1,this->CountupTimer_s,
                 *(bool *)((int)&this->DelayedDetonation + 2),bVar4,SUB41(uVar8,0),SUB81(uVar9,0),
                 SUB81(uVar9 >> 0x20,0));
      if (((char)this->DelayedDetonation == '\0') ||
         (*(char *)((int)&this->DelayedDetonation + 2) != '\0')) {
        if (local_10 == '\0') goto LAB_006069c3;
        if ((ReferenceController *)this->_pad_0x34_13 != (ReferenceController *)0x0) {
          bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x34_13);
          if (!bVar4) {
            *piVar1 = 0;
          }
        }
        pBVar7 = (Body *)*piVar1;
        if (local_10 == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(undefined1 *)0x0);
          DebugBreak();
        }
        Body__GetOrientation(pBVar7,&local_6c);
        NuclearDetonation(this,local_40[0].Pointer,local_40[0].Controller);
        if ((ReferenceController *)this->_pad_0x34_13 != (ReferenceController *)0x0) {
          bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x34_13);
          if (!bVar4) {
            *piVar1 = 0;
          }
        }
        pBVar7 = (Body *)*piVar1;
        Body__GetCapitalShipComponent_Memoize(pBVar7);
        if ((char)(pBVar7->GetCapitalShipComponent_MemoizedValue).IsValidData == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(undefined1 *)0x0);
          DebugBreak();
        }
        if ((pBVar7->GetCapitalShipComponent_MemoizedValue).Data.Pointer != (undefined1 *)0x0)
        goto LAB_006069c3;
        if ((ReferenceController *)this->_pad_0x34_13 != (ReferenceController *)0x0) {
          bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x34_13);
          if (!bVar4) {
            *piVar1 = 0;
          }
        }
        pBVar7 = (Body *)*piVar1;
        puVar6 = (undefined4 *)
                 util__Maybe_struct_util__PhysicalState_struct_util__Vec3_double_______operator
                           ((Maybe_L_util__PhysicalState_L_util__Vec3_L_double_G___G___G *)
                            local_40);
      }
      else {
        if (local_10 != '\0') {
          *(undefined1 *)((int)&this->DelayedDetonation + 3) = 1;
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        if (*(char *)((int)&this->DelayedDetonation + 3) == '\0') goto LAB_006069c3;
        if ((ReferenceController *)this->_pad_0x34_13 != (ReferenceController *)0x0) {
          bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x34_13);
          if (!bVar4) {
            *piVar1 = 0;
          }
        }
        pBVar7 = (Body *)*piVar1;
        if ((ReferenceController *)this->_pad_0x34_13 != (ReferenceController *)0x0) {
          bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x34_13);
          if (!bVar4) {
            *piVar1 = 0;
          }
        }
        pBVar3 = (Body *)*piVar1;
        Body__GetOrientation(pBVar7,&local_6c);
        puVar6 = (undefined4 *)Body__GetState(pBVar3);
        NuclearDetonation(local_4c,*puVar6,puVar6[1]);
        if ((ReferenceController *)this->_pad_0x34_13 != (ReferenceController *)0x0) {
          bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x34_13);
          if (!bVar4) {
            *piVar1 = 0;
          }
        }
        pBVar7 = (Body *)*piVar1;
        Body__GetCapitalShipComponent_Memoize(pBVar7);
        if ((char)(pBVar7->GetCapitalShipComponent_MemoizedValue).IsValidData == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(undefined1 *)0x0);
          DebugBreak();
        }
        if ((pBVar7->GetCapitalShipComponent_MemoizedValue).Data.Pointer != (undefined1 *)0x0)
        goto LAB_006069c3;
        if ((ReferenceController *)this->_pad_0x34_13 != (ReferenceController *)0x0) {
          bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x34_13);
          if (!bVar4) {
            *piVar1 = 0;
          }
        }
        pBVar3 = (Body *)*piVar1;
        if ((ReferenceController *)this->_pad_0x34_13 != (ReferenceController *)0x0) {
          bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x34_13);
          if (!bVar4) {
            *piVar1 = 0;
          }
        }
        pBVar7 = (Body *)*piVar1;
        puVar6 = (undefined4 *)Body__GetState(pBVar3);
      }
      Body__DestroyAtPoint(pBVar7,*puVar6);
    }
  }
LAB_006069c3:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
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


//==== 00006188d0 006188d0_AmmoModule__InnerSortFunction ====
// decompiled by BatchDecomp @ 006188d0 name=InnerSortFunction conv=__thiscall body=299

/* public: virtual bool __thiscall AmmoModule__InnerSortFunction(class Module const *,class Module
   const *)const  */

bool __thiscall AmmoModule__InnerSortFunction(AmmoModule *this,Module *p1,Module *p2)

{
  Module *p1_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined1 *p0;
  AmmoInfo local_e8;
  AmmoInfo local_78;
  AmmoModule *local_8;
  
  p1_00 = p1;
  local_8 = this;
  iVar2 = GetAmmoClass((AmmoModule *)p1);
  iVar3 = GetAmmoClass((AmmoModule *)p2);
  if (iVar2 != iVar3) {
    return iVar3 < iVar2;
  }
  iVar2 = (**(code **)(*(int *)p1[1].GetTotalPowerUsage_W_MemoizedValue.IsValidData + 0x17c))
                    (&local_e8);
  if (*(char *)(iVar2 + 0x68) == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(undefined1 *)0x0);
    DebugBreak();
  }
  if (*(int *)(iVar2 + 0x24) < 1) {
    p1 = (Module *)
         &cde_l2_0091985b_NullString;
  }
  else {
    p1 = *(Module **)(iVar2 + 0x20);
  }
  iVar2 = (**(code **)(*(int *)p1_00[1].GetTotalPowerUsage_W_MemoizedValue.IsValidData + 0x17c))
                    (&local_78);
  if (*(char *)(iVar2 + 0x68) == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(undefined1 *)0x0);
    DebugBreak();
  }
  if (*(int *)(iVar2 + 0x24) < 1) {
    p0 = &cde_l2_0091985b_NullString;
  }
  else {
    p0 = *(undefined1 **)(iVar2 + 0x20);
  }
  iVar2 = util__InnerSortFunction(p0,(undefined1 *)p1);
  AmmoInfo___AmmoInfo(&local_78);
  AmmoInfo___AmmoInfo(&local_e8);
  if (iVar2 != 1) {
    return iVar2== 2;
  }
  if (p1_00[1].UsesCustomName != p2[1].UsesCustomName) {
    return p1_00[1].UsesCustomName < p2[1].UsesCustomName;
  }
  bVar1 = Module__InnerSortFunction((Module *)local_8,p1_00,p2);
  return bVar1;
}


//==== 0000669c20 00669c20_MassProjectileSubModule__GetAmmoDescription ====
// decompiled by BatchDecomp @ 00669c20 name=GetAmmoDescription conv=__thiscall body=457

/* public: class Str_L_char_G_ __thiscall MassProjectileSubModule__GetAmmoDescription(void)const
    */

util__Str_L_char_G_ * __thiscall
MassProjectileSubModule__GetAmmoDescription(MassProjectileSubModule *this,util__Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xffffff80;
  Str_L_char_G_ SVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  util__Str_L_char_G_ *p1;
  Str_L_char_G_ *pSVar9;
  int unaff_EDI;
  char *pcVar10;
  Str_L_char_G_ *pSVar11;
  int iVar12;
  void *local_68[3];
  void *local_5c;
  void *local_50;
  Str_L_char_G_ local_44;
  util__Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  util__Str_L_char_G_ local_14;
  undefined4 local_8;
  
  local_8 = 0;
  if ((int *)this->CachedMassStartsOutBeforeBarrel == (int *)0x0) {
    util__Str_char___Str_char__o5(&local_2c,"Gun Round");
    util__Str_char___Str_char__o5(&local_20,"Mass_kg");
    local_14.Data = 0;
    pSVar9 = &local_2c;
    local_14.Capacity = 0;
    local_14.Length = 0;
    pcVar10 = (char *)0x669c8b;
    pSVar11 = pSVar9;
    util__LocStr__LocStr((LocStr *)local_68,(util__Str_L_char_G_ *)pSVar9,&local_14);
    iVar12 = 0x669c92;
    util__LocStr__operator__o3((LocStr *)pSVar9);
    GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff80,&local_20);
    SVar1.Capacity = iVar12;
    SVar1.Data = (char *)pSVar11;
    SVar1.Length = unaff_EDI;
    pSVar9 = Print(&local_44,(double)CONCAT44(pcVar10,(int)((ulonglong)this->Mass_kg >> 0x20)),SVar1
                  );
    if (pSVar9->Capacity < 1) {
      pcVar10 = "";
    }
    else {
      pcVar10 = pSVar9->Data;
    }
    p1 = util__Printf(&local_38,"%s%s",pcVar10);
    bVar8 = false;
    bVar7 = true;
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
  }
  else {
    p1 = (util__Str_L_char_G_ *)(**(code **)(*(int *)this->CachedMassStartsOutBeforeBarrel + 0x48))();
    bVar8 = true;
    bVar7 = false;
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    bVar3 = false;
    bVar2 = false;
  }
  util__Str_char___Str_char((Str_L_char_G_ *)__return_storage_ptr__,p1);
  if ((bVar2) && ((void *)local_38.Data != (void *)0x0)) {
    operator_delete__((void *)local_38.Data);
    local_38.Data = 0;
  }
  if ((bVar3) && (local_44.Data != (char *)0x0)) {
    operator_delete__(local_44.Data);
    local_44.Data = (char *)0x0;
  }
  if (bVar4) {
    if (local_5c != (void *)0x0) {
      operator_delete__(local_5c);
      local_5c = (void *)0x0;
    }
    if (local_68[0] != (void *)0x0) {
      operator_delete__(local_68[0]);
      local_68[0] = (void *)0x0;
    }
  }
  if ((bVar5) && ((void *)local_14.Data != (void *)0x0)) {
    operator_delete__((void *)local_14.Data);
    local_14.Data = 0;
  }
  if ((bVar6) && (local_20.Data != (char *)0x0)) {
    operator_delete__(local_20.Data);
    local_20.Data = (char *)0x0;
  }
  if ((bVar7) && (local_2c.Data != (char *)0x0)) {
    operator_delete__(local_2c.Data);
    local_2c.Data = (char *)0x0;
  }
  if ((local_50 != (void *)0x0) && (bVar8)) {
    operator_delete__(local_50);
  }
  return __return_storage_ptr__;
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
  pSVar3 = BriefingsHandler__GetCustomizableFleet(this->Briefings,this->Briefings->SelectedSubject != 8);
  bVar2 = StarterFleet__IsUnlimited(pSVar3->FleetType);
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
  pSVar3 = BriefingsHandler__GetCustomizableFleet(this->Briefings,this->Briefings->SelectedSubject != 8);
  bVar2 = StarterFleet__IsUnlimited(pSVar3->FleetType);
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


//==== 000070ec50 0070ec50_FixedOrbit__GetAbsoluteVelocityNeededToPhaseAtPeriapsis_km__s ====
// decompiled by BatchDecomp @ 0070ec50 name=GetAbsoluteVelocityNeededToPhaseAtPeriapsis_km__s conv=__thiscall body=1614

/* public: struct Vec3_L_double_G_ __thiscall
   FixedOrbit__GetAbsoluteVelocityNeededToPhaseAtPeriapsis_km__s(struct util__PhysicalState_L_struct____util__Vec3_L_double_G___G,double)const  */

util__Vec3_L_double_G_ * __thiscall
FixedOrbit__GetAbsoluteVelocityNeededToPhaseAtPeriapsis_km__s(FixedOrbit *this,util__Vec3_L_double_G_ *__return_storage_ptr__,undefined4 p1,double p2)

{
  undefined4 stack0xfffffffc;
  ReferenceController *pRVar1;
  int iVar2;
  bool bVar3;
  util__Vec3_L_double_G_ *puVar4;
  util__Vec3_L_double_G_ *puVar5;
  util__Maybe_L_double_G_ *puVar6;
  double *pdVar7;
  CelestialBody *this_00;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  double in_stack_00000038;
  Vec3_L_double_G_ local_c8;
  undefined1 local_b0[16];
  undefined8 uStack_a0;
  util__Vec3_L_double_G_ local_98;
  util__Vec3_L_double_G_ *local_80;
  util__Vec3_L_double_G_ local_7c;
  double local_64;
  double local_5c;
  double local_54;
  char local_49;
  double local_48;
  double local_40;
  Vec3_L_double_G_ local_38;
  double local_20;
  double local_18;
  double local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_80 = __return_storage_ptr__;
  local_5c = in_stack_00000038;
  local_54 = util__Abs((undefined1 *)&(this->Elements).InclinationToRelativePlane_degrees);
  pcVar8 = DebugBreak_exref;
  if (/*3f1a36e2eb1c432d*/0.0001 < local_54) {
    local_54 = GetMeanAnomaly_radians(this,local_5c);
    local_54 = /*401921fb54442d18*/6.283185307179586 - local_54;
    local_64 = GetAverageAngularVelocity__s(this);
    local_64 = local_54 / local_64;
    local_54 = local_64;
  }
  else {
    pRVar1 = (ReferenceController *)(this->Elements)._pad_0x0_0;
    if ((pRVar1 != (ReferenceController *)0x0) &&
       (bVar3 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar3)) {
      (this->OrbitedBody).Controller = (undefined1 *)0x0;
    }
    CelestialObject__GetStateRelativeToThis((CelestialObject *)(this->OrbitedBody).Controller,&local_38,p2);
    GetRelativeOrbitalState(this,(double)CONCAT44(((slice_view *)&local_5c)->_0_4_,&local_c8));
    dVar12 = /*0000000000000000*/0.0;
    dVar9 = local_c8.Y - local_38.Y;
    dVar11 = local_c8.X - local_38.X;
    dVar10 = local_c8.Z - local_38.Z;
    puVar4 = util__Vec3_double___SafeNormalized(&local_c8,&local_7c);
    puVar5 = util__Vec3_double___SafeNormalized(&local_38,&local_98);
    local_54 = util__GetTrueAnomalyFromCoplanarState_radians(puVar5->Y * puVar4->Y + puVar5->X * puVar4->X + puVar5->Z * puVar4->Z);
    local_54 = local_54 / /*401921fb54442d18*/6.283185307179586;
    if (dVar12 < dVar11 * local_20 + dVar9 * local_18 + dVar10 * local_10) {
      local_54 = /*3ff0000000000000*/1.0 - local_54;
    }
    if (*(char *)&(this->GetFullRotator_MemoizedValue).Data.X == '\0') {
      iVar2 = *(int *)&(this->GetOrbitalPeriod_s_MemoizedValue).Data;
      uStack_a0 = (double)CONCAT44(iVar2 + 1,(undefined4)uStack_a0);
      util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)
                 &(this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Size,
                 (int *)((int)&uStack_a0 + 4));
      bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                         &(this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Size,iVar2);
      if (bVar3) {
        *(code **)((this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Capacity + -4 +
                  *(int *)&(this->GetOrbitalPeriod_s_MemoizedValue).Data * 4) =
             SpacecraftComponent__GetEstimatedMaxAngularAcceleration_radians__s2_Clear;
      }
      if ((this->OrbitedBody).Pointer == (undefined1 *)0x0) {
        pRVar1 = (ReferenceController *)(this->Elements)._pad_0x0_0;
        if ((pRVar1 != (ReferenceController *)0x0) &&
           (bVar3 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar3)) {
          (this->OrbitedBody).Controller = (undefined1 *)0x0;
        }
        if (*(int *)((this->OrbitedBody).Controller + 0x4c) == 0) {
          util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\strategic\\astrodynamics.cpp",
                          0x70,"GetOrbitedBody()",(undefined1 *)0x0);
          DebugBreak();
        }
      }
      local_98.Y = GetAverageAngularVelocity__s(this);
      dVar12 = local_98.Z;
      local_98.Y = /*401921fb54442d18*/6.283185307179586 / local_98.Y;
      local_98.Z = (double)CONCAT71(((slice_view *)&local_98.Z)->_1_7_,1);
      dVar9 = local_98.Z;
      ((slice_view *)&local_98.Z)->_4_4_ = SUB84(dVar12,4);
      *(double *)&(this->GetOrbitalPeriod_s_MemoizedValue).IsValidData = local_98.Y;
      *(undefined4 *)&(this->GetFullRotator_MemoizedValue).Data.X = ((slice_view *)&local_98.Z)->_0_4_;
      *(undefined4 *)((int)&(this->GetFullRotator_MemoizedValue).Data.X + 4) = ((slice_view *)&local_98.Z)->_4_4_;
      local_98.Z = dVar9;
      if (*(char *)&(this->GetFullRotator_MemoizedValue).Data.X == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(undefined1 *)0x0);
        pcVar8 = DebugBreak_exref;
        DebugBreak();
        local_64 = *(double *)&(this->GetOrbitalPeriod_s_MemoizedValue).IsValidData * local_54;
        goto LAB_0070eee1;
      }
    }
    local_64 = *(double *)&(this->GetOrbitalPeriod_s_MemoizedValue).IsValidData * local_54;
    pcVar8 = DebugBreak_exref;
  }
LAB_0070eee1:
  this_00 = (CelestialBody *)(this->OrbitedBody).Pointer;
  if (this_00 == (CelestialBody *)0x0) {
    pRVar1 = (ReferenceController *)(this->Elements)._pad_0x0_0;
    if ((pRVar1 != (ReferenceController *)0x0) &&
       (bVar3 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar3)) {
      (this->OrbitedBody).Controller = (undefined1 *)0x0;
    }
    this_00 = *(CelestialBody **)((this->OrbitedBody).Controller + 0x4c);
  }
  local_98.Z = CelestialBody__GetRadius_km(this_00);
  pRVar1 = (ReferenceController *)(this->Elements)._pad_0x0_0;
  if ((pRVar1 != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar3)) {
    (this->OrbitedBody).Controller = (undefined1 *)0x0;
  }
  CelestialObject__GetStateRelativeToThis((CelestialObject *)(this->OrbitedBody).Controller,&local_38,p2);
  local_54 = local_38.Y * local_38.Y + local_38.X * local_38.X + local_38.Z * local_38.Z;
  puVar6 = util__Sqrt((util__Maybe_L_double_G_ *)(local_b0 + 8),(undefined1 *)&local_54);
  if ((char)puVar6->IsValidData == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(undefined1 *)0x0);
    (*pcVar8)();
  }
  local_48 = puVar6->Data;
  local_49 = '\0';
  local_40 = 0.0;
  local_54 = 0.0;
  GetPhasingApsis_km(this,(double)CONCAT44(SUB84(local_64,0),&local_7c),
                     (double)CONCAT44(SUB84(local_48,0),(int)((ulonglong)local_64 >> 0x20)));
  if (((slice_view *)&local_7c.Z)->_0_1_ != '\0') {
    local_40 = (double)CONCAT44(((slice_view *)&local_7c.X)->_4_4_,((slice_view *)&local_7c.X)->_0_4_);
    local_54 = (double)CONCAT44(((slice_view *)&local_7c.Y)->_4_4_,((slice_view *)&local_7c.Y)->_0_4_);
    uStack_a0 = /*3e45798ee2308c3a*/1e-08;
    local_49 = util__Equals_double((undefined1 *)&local_40,(undefined1 *)&local_48,(undefined1 *)&uStack_a0);
    if (((bool)local_49) || (local_98.Z < local_40)) goto LAB_0070f1bd;
  }
  if (*(char *)&(this->GetFullRotator_MemoizedValue).Data.X == '\0') {
    iVar2 = *(int *)&(this->GetOrbitalPeriod_s_MemoizedValue).Data;
    uStack_a0 = (double)CONCAT44(iVar2 + 1,(undefined4)uStack_a0);
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)
               &(this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Size,
               (int *)((int)&uStack_a0 + 4));
    bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &(this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Size,iVar2);
    if (bVar3) {
      *(code **)((this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Capacity + -4 +
                *(int *)&(this->GetOrbitalPeriod_s_MemoizedValue).Data * 4) =
           SpacecraftComponent__GetEstimatedMaxAngularAcceleration_radians__s2_Clear;
    }
    if ((this->OrbitedBody).Pointer == (undefined1 *)0x0) {
      pRVar1 = (ReferenceController *)(this->Elements)._pad_0x0_0;
      if ((pRVar1 != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar3)) {
        (this->OrbitedBody).Controller = (undefined1 *)0x0;
      }
      if (*(int *)((this->OrbitedBody).Controller + 0x4c) == 0) {
        util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\strategic\\astrodynamics.cpp",0x70,
                        "GetOrbitedBody()",(undefined1 *)0x0);
        (*pcVar8)();
      }
    }
    ((slice_view *)&local_b0)->_8_8_ = GetAverageAngularVelocity__s(this);
    dVar12 = uStack_a0;
    ((slice_view *)&local_b0)->_8_8_ = /*401921fb54442d18*/6.283185307179586 / (double)((slice_view *)&local_b0)->_8_8_;
    uStack_a0 = (double)CONCAT71(((slice_view *)&uStack_a0)->_1_7_,1);
    dVar9 = uStack_a0;
    ((slice_view *)&uStack_a0)->_4_4_ = SUB84(dVar12,4);
    *(undefined8 *)&(this->GetOrbitalPeriod_s_MemoizedValue).IsValidData = ((slice_view *)&local_b0)->_8_8_;
    *(undefined4 *)&(this->GetFullRotator_MemoizedValue).Data.X = (undefined4)uStack_a0;
    *(undefined4 *)((int)&(this->GetFullRotator_MemoizedValue).Data.X + 4) = ((slice_view *)&uStack_a0)->_4_4_;
    uStack_a0 = dVar9;
    if (*(char *)&(this->GetFullRotator_MemoizedValue).Data.X == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(undefined1 *)0x0);
      (*pcVar8)();
    }
  }
  dVar12 = *(double *)&(this->GetOrbitalPeriod_s_MemoizedValue).IsValidData + local_64;
  pdVar7 = (double *)
           GetPhasingApsis_km(this,(double)CONCAT44(SUB84(dVar12,0),local_b0),
                              (double)CONCAT44(SUB84(local_48,0),(int)((ulonglong)dVar12 >> 0x20)));
  ((slice_view *)&local_7c.X)->_0_4_ = *(undefined4 *)pdVar7;
  ((slice_view *)&local_7c.X)->_4_4_ = *(undefined4 *)((int)pdVar7 + 4);
  ((slice_view *)&local_7c.Y)->_0_4_ = *(undefined4 *)(pdVar7 + 1);
  ((slice_view *)&local_7c.Y)->_4_4_ = *(undefined4 *)((int)pdVar7 + 0xc);
  local_7c.Z = pdVar7[2];
  if (((slice_view *)&local_7c.Z)->_0_1_ != '\0') {
    local_64 = /*3e45798ee2308c3a*/1e-08;
    local_54 = pdVar7[1];
    local_40 = *pdVar7;
    local_49 = util__Equals_double((undefined1 *)&local_40,(undefined1 *)&local_48,(undefined1 *)&local_64);
    if (!(bool)local_49) {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\strategic\\astrodynamics.cpp",0x305,
                      "StateIsThePhasePeriapsis",(undefined1 *)0x0);
      (*pcVar8)();
    }
  }
LAB_0070f1bd:
  if ((NAN(local_40) != (local_40 == 0.0)) || (local_40 <= local_98.Z)) {
    local_7c.Z = 0.0;
    ((slice_view *)&local_7c.X)->_0_4_ = 0;
    ((slice_view *)&local_7c.X)->_4_4_ = 0;
    ((slice_view *)&local_7c.Y)->_0_4_ = 0;
    ((slice_view *)&local_7c.Y)->_4_4_ = 0;
  }
  else {
    if (local_49 == '\0') {
      puVar4 = GetAbsoluteApoapsisVelocityForState_km__s
                         (this,(util__Vec3_L_double_G_ *)local_b0,p1,p2,
                          (double)CONCAT44(in_stack_00000018,in_stack_00000014));
    }
    else {
      puVar4 = GetAbsolutePeriapsisVelocityForState_km__s
                         (this,&local_98,p1,p2,(double)CONCAT44(in_stack_00000018,in_stack_00000014)
                         );
    }
    ((slice_view *)&local_7c.X)->_0_4_ = *(undefined4 *)&puVar4->X;
    ((slice_view *)&local_7c.X)->_4_4_ = *(undefined4 *)((int)&puVar4->X + 4);
    ((slice_view *)&local_7c.Y)->_0_4_ = *(undefined4 *)&puVar4->Y;
    ((slice_view *)&local_7c.Y)->_4_4_ = *(undefined4 *)((int)&puVar4->Y + 4);
    local_7c.Z = puVar4->Z;
  }
  *(undefined4 *)&local_80->X = ((slice_view *)&local_7c.X)->_0_4_;
  *(undefined4 *)((int)&local_80->X + 4) = ((slice_view *)&local_7c.X)->_4_4_;
  *(undefined4 *)&local_80->Y = ((slice_view *)&local_7c.Y)->_0_4_;
  *(undefined4 *)((int)&local_80->Y + 4) = ((slice_view *)&local_7c.Y)->_4_4_;
  local_80->Z = local_7c.Z;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return local_80;
}


//==== 000070faa0 0070faa0_FixedOrbit__GetForwardVector ====
// decompiled by BatchDecomp @ 0070faa0 name=GetForwardVector conv=__thiscall body=230

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: struct Vec3_L_double_G_ __thiscall FixedOrbit__GetForwardVector(void)const  */

util__Vec3_L_double_G_ * __thiscall
FixedOrbit__GetForwardVector(FixedOrbit *this,util__Vec3_L_double_G_ *__return_storage_ptr__)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  util__Quaternion_L_double_G_ *puVar9;
  undefined7 uStack_2f;
  util__Quaternion_L_double_G_ local_28;
  int local_8;
  
  if (*(char *)&(this->GetVelocityStateConstant_km__s_MemoizedValue).Data == '\0') {
    iVar1 = *(int *)&(this->GetOrbitalPeriod_s_MemoizedValue).Data;
    local_8 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)
               &(this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Size,&local_8);
    bVar8 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &(this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Size,iVar1);
    if (bVar8) {
      *(code **)((this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Capacity + -4 +
                *(int *)&(this->GetOrbitalPeriod_s_MemoizedValue).Data * 4) =
           SpacecraftComponent_GetDesiredOrientation_Clear;
    }
    puVar9 = GetFullRotator_MemoizedFunction(this,&local_28);
    uVar2 = *(undefined4 *)((int)&puVar9->X + 4);
    uVar3 = *(undefined4 *)&puVar9->Y;
    uVar4 = *(undefined4 *)((int)&puVar9->Y + 4);
    uVar5 = *(undefined4 *)&puVar9->Z;
    uVar6 = *(undefined4 *)((int)&puVar9->Z + 4);
    iVar1 = *(int *)&puVar9->W;
    uVar7 = *(undefined4 *)((int)&puVar9->W + 4);
    *(undefined4 *)&(this->GetFullRotator_MemoizedValue).Data.Y = *(undefined4 *)&puVar9->X;
    *(undefined4 *)((int)&(this->GetFullRotator_MemoizedValue).Data.Y + 4) = uVar2;
    *(undefined4 *)&(this->GetFullRotator_MemoizedValue).Data.Z = uVar3;
    *(undefined4 *)((int)&(this->GetFullRotator_MemoizedValue).Data.Z + 4) = uVar4;
    *(undefined4 *)&(this->GetFullRotator_MemoizedValue).Data.W = uVar5;
    *(undefined4 *)((int)&(this->GetFullRotator_MemoizedValue).Data.W + 4) = uVar6;
    (this->GetFullRotator_MemoizedValue).IsValidData = iVar1;
    *(undefined4 *)((char *)&(this->GetFullRotator_MemoizedValue) + 0x24) = uVar7;
    (this->GetVelocityStateConstant_km__s_MemoizedValue).Data = (double)CONCAT71(uStack_2f,1);
    if (*(char *)&(this->GetVelocityStateConstant_km__s_MemoizedValue).Data == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(undefined1 *)0x0);
      DebugBreak();
    }
  }
util__GetCameraUp(__return_storage_ptr__,*(undefined4 *)&(this->GetFullRotator_MemoizedValue).Data.Y,
             *(undefined4 *)((int)&(this->GetFullRotator_MemoizedValue).Data.Y + 4));
  return __return_storage_ptr__;
}


//==== 0000711a00 00711a00_FixedOrbit__GetRightVector ====
// decompiled by BatchDecomp @ 00711a00 name=GetRightVector conv=__thiscall body=230

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: struct Vec3_L_double_G_ __thiscall FixedOrbit__GetRightVector(void)const  */

util__Vec3_L_double_G_ * __thiscall
FixedOrbit__GetRightVector(FixedOrbit *this,util__Vec3_L_double_G_ *__return_storage_ptr__)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  util__Quaternion_L_double_G_ *puVar9;
  undefined7 uStack_2f;
  util__Quaternion_L_double_G_ local_28;
  int local_8;
  
  if (*(char *)&(this->GetVelocityStateConstant_km__s_MemoizedValue).Data == '\0') {
    iVar1 = *(int *)&(this->GetOrbitalPeriod_s_MemoizedValue).Data;
    local_8 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)
               &(this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Size,&local_8);
    bVar8 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &(this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Size,iVar1);
    if (bVar8) {
      *(code **)((this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Capacity + -4 +
                *(int *)&(this->GetOrbitalPeriod_s_MemoizedValue).Data * 4) =
           SpacecraftComponent_GetDesiredOrientation_Clear;
    }
    puVar9 = GetFullRotator_MemoizedFunction(this,&local_28);
    uVar2 = *(undefined4 *)((int)&puVar9->X + 4);
    uVar3 = *(undefined4 *)&puVar9->Y;
    uVar4 = *(undefined4 *)((int)&puVar9->Y + 4);
    uVar5 = *(undefined4 *)&puVar9->Z;
    uVar6 = *(undefined4 *)((int)&puVar9->Z + 4);
    iVar1 = *(int *)&puVar9->W;
    uVar7 = *(undefined4 *)((int)&puVar9->W + 4);
    *(undefined4 *)&(this->GetFullRotator_MemoizedValue).Data.Y = *(undefined4 *)&puVar9->X;
    *(undefined4 *)((int)&(this->GetFullRotator_MemoizedValue).Data.Y + 4) = uVar2;
    *(undefined4 *)&(this->GetFullRotator_MemoizedValue).Data.Z = uVar3;
    *(undefined4 *)((int)&(this->GetFullRotator_MemoizedValue).Data.Z + 4) = uVar4;
    *(undefined4 *)&(this->GetFullRotator_MemoizedValue).Data.W = uVar5;
    *(undefined4 *)((int)&(this->GetFullRotator_MemoizedValue).Data.W + 4) = uVar6;
    (this->GetFullRotator_MemoizedValue).IsValidData = iVar1;
    *(undefined4 *)((char *)&(this->GetFullRotator_MemoizedValue) + 0x24) = uVar7;
    (this->GetVelocityStateConstant_km__s_MemoizedValue).Data = (double)CONCAT71(uStack_2f,1);
    if (*(char *)&(this->GetVelocityStateConstant_km__s_MemoizedValue).Data == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(undefined1 *)0x0);
      DebugBreak();
    }
  }
util__GetCameraUp(__return_storage_ptr__,*(undefined4 *)&(this->GetFullRotator_MemoizedValue).Data.Y,
             *(undefined4 *)((int)&(this->GetFullRotator_MemoizedValue).Data.Y + 4));
  return __return_storage_ptr__;
}


//==== 00007121f0 007121f0_FixedOrbit__GetTrueAnomalyFromCoplanarState_radians ====
// decompiled by BatchDecomp @ 007121f0 name=GetTrueAnomalyFromCoplanarState_radians conv=__thiscall body=706

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: double __thiscall FixedOrbit__GetTrueAnomalyFromCoplanarState_radians(struct
   util__PhysicalState_L_struct_util__Vec3_L_double_G___G)const  */

double __thiscall
FixedOrbit__GetTrueAnomalyFromCoplanarState_radians(FixedOrbit *this,undefined4 p1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  util__Quaternion_L_double_G_ *puVar8;
  util__Vec3_L_double_G_ *puVar9;
  bool bVar10;
  double dVar11;
  undefined4 in_stack_00000008;
  double in_stack_0000000c;
  double in_stack_00000014;
  util__Quaternion_L_double_G_ local_a4;
  util__Vec3_L_double_G_ local_84;
  Vec3_L_double_G_ local_5c;
  double local_44;
  util__Vec3_L_double_G_ local_3c;
  util__Vec3_L_double_G_ local_24;
  undefined8 local_c;
  
  util__Vec3_double___SafeNormalized((Vec3_L_double_G_ *)&p1,&local_3c);
  if ((this->Elements).InclinationToRelativePlane_degrees <= /*0000000000000000*/0.0) {
    GetForwardVector(this,(util__Vec3_L_double_G_ *)&local_5c);
    GetRightVector(this,&local_24);
    dVar11 = util__GetTrueAnomalyFromCoplanarState_radians(local_5c.Y * local_3c.Y + local_5c.X * local_3c.X + local_5c.Z * local_3c.Z)
    ;
    if (local_24.X * (double)CONCAT44(in_stack_00000008,p1) + local_24.Y * in_stack_0000000c +
        local_24.Z * in_stack_00000014 < 0.0) {
      dVar11 = /*401921fb54442d18*/6.283185307179586 - dVar11;
    }
    return dVar11;
  }
  bVar10 = *(char *)&(this->GetVelocityStateConstant_km__s_MemoizedValue).Data == '\0';
  if (bVar10) {
    iVar1 = *(int *)&(this->GetOrbitalPeriod_s_MemoizedValue).Data;
    local_c = (double)CONCAT44(iVar1 + 1,(undefined4)local_c);
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)
               &(this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Size,
               (int *)((int)&local_c + 4));
    bVar10 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                        &(this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Size,iVar1);
    if (bVar10) {
      *(code **)((this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Capacity + -4 +
                *(int *)&(this->GetOrbitalPeriod_s_MemoizedValue).Data * 4) =
           SpacecraftComponent_GetDesiredOrientation_Clear;
    }
    puVar8 = GetFullRotator_MemoizedFunction(this,&local_a4);
    local_5c.Z = (double)CONCAT71(((slice_view *)&local_5c.Z)->_1_7_,1);
    uVar2 = *(undefined4 *)((int)&puVar8->X + 4);
    uVar3 = *(undefined4 *)&puVar8->Y;
    uVar4 = *(undefined4 *)((int)&puVar8->Y + 4);
    uVar5 = *(undefined4 *)&puVar8->Z;
    uVar6 = *(undefined4 *)((int)&puVar8->Z + 4);
    iVar1 = *(int *)&puVar8->W;
    uVar7 = *(undefined4 *)((int)&puVar8->W + 4);
    *(undefined4 *)&(this->GetFullRotator_MemoizedValue).Data.Y = *(undefined4 *)&puVar8->X;
    *(undefined4 *)((int)&(this->GetFullRotator_MemoizedValue).Data.Y + 4) = uVar2;
    *(undefined4 *)&(this->GetFullRotator_MemoizedValue).Data.Z = uVar3;
    *(undefined4 *)((int)&(this->GetFullRotator_MemoizedValue).Data.Z + 4) = uVar4;
    *(undefined4 *)&(this->GetFullRotator_MemoizedValue).Data.W = uVar5;
    *(undefined4 *)((int)&(this->GetFullRotator_MemoizedValue).Data.W + 4) = uVar6;
    (this->GetFullRotator_MemoizedValue).IsValidData = iVar1;
    *(undefined4 *)((char *)&(this->GetFullRotator_MemoizedValue) + 0x24) = uVar7;
    (this->GetVelocityStateConstant_km__s_MemoizedValue).Data = local_5c.Z;
    bVar10 = *(char *)&(this->GetVelocityStateConstant_km__s_MemoizedValue).Data == '\0';
  }
  if (bVar10) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(undefined1 *)0x0);
    DebugBreak();
  }
  puVar9 = util__GetCameraUp(&local_84,*(undefined4 *)&(this->GetFullRotator_MemoizedValue).Data.Y,
                      *(undefined4 *)((int)&(this->GetFullRotator_MemoizedValue).Data.Y + 4));
  local_5c.Z = (this->Elements).InclinationToRelativePlane_degrees;
  local_5c.X = puVar9->X * local_5c.Z;
  local_5c.Y = puVar9->Y * local_5c.Z;
  local_5c.Z = puVar9->Z * local_5c.Z;
  util__Vec3_double___SafeNormalized(&local_5c,&local_24);
  local_44 = util__GetTrueAnomalyFromCoplanarState_radians(local_3c.Y * local_24.Y + local_3c.X * local_24.X + local_3c.Z * local_24.Z)
  ;
  local_c = local_44;
  puVar9 = GetUpVector(this,&local_84);
  if ((local_24.Z * local_3c.X - local_3c.Z * local_24.X) * puVar9->Y +
      (local_3c.Z * local_24.Y - local_24.Z * local_3c.Y) * puVar9->X +
      (local_3c.Y * local_24.X - local_24.Y * local_3c.X) * puVar9->Z < 0.0) {
    local_44 = /*401921fb54442d18*/6.283185307179586 - local_c;
    local_c = local_44;
  }
  if (NAN(local_c)) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\strategic\\astrodynamics.cpp",0x1a5,
                    "!IsNan(TrueAnomaly_radians)",(undefined1 *)0x0);
    DebugBreak();
  }
  return local_44;
}


//==== 0000712a80 00712a80_FixedOrbit__GetUpVector ====
// decompiled by BatchDecomp @ 00712a80 name=GetUpVector conv=__thiscall body=231

/* public: struct Vec3_L_double_G_ __thiscall FixedOrbit__GetUpVector(void)const  */

util__Vec3_L_double_G_ * __thiscall
FixedOrbit__GetUpVector(FixedOrbit *this,util__Vec3_L_double_G_ *__return_storage_ptr__)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  util__Quaternion_L_double_G_ *puVar9;
  undefined7 uStack_2f;
  util__Quaternion_L_double_G_ local_28;
  int local_8;
  
  if (*(char *)&(this->GetVelocityStateConstant_km__s_MemoizedValue).Data == '\0') {
    iVar1 = *(int *)&(this->GetOrbitalPeriod_s_MemoizedValue).Data;
    local_8 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)
               &(this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Size,&local_8);
    bVar8 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &(this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Size,iVar1);
    if (bVar8) {
      *(code **)((this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Capacity + -4 +
                *(int *)&(this->GetOrbitalPeriod_s_MemoizedValue).Data * 4) =
           SpacecraftComponent_GetDesiredOrientation_Clear;
    }
    puVar9 = GetFullRotator_MemoizedFunction(this,&local_28);
    uVar2 = *(undefined4 *)((int)&puVar9->X + 4);
    uVar3 = *(undefined4 *)&puVar9->Y;
    uVar4 = *(undefined4 *)((int)&puVar9->Y + 4);
    uVar5 = *(undefined4 *)&puVar9->Z;
    uVar6 = *(undefined4 *)((int)&puVar9->Z + 4);
    iVar1 = *(int *)&puVar9->W;
    uVar7 = *(undefined4 *)((int)&puVar9->W + 4);
    *(undefined4 *)&(this->GetFullRotator_MemoizedValue).Data.Y = *(undefined4 *)&puVar9->X;
    *(undefined4 *)((int)&(this->GetFullRotator_MemoizedValue).Data.Y + 4) = uVar2;
    *(undefined4 *)&(this->GetFullRotator_MemoizedValue).Data.Z = uVar3;
    *(undefined4 *)((int)&(this->GetFullRotator_MemoizedValue).Data.Z + 4) = uVar4;
    *(undefined4 *)&(this->GetFullRotator_MemoizedValue).Data.W = uVar5;
    *(undefined4 *)((int)&(this->GetFullRotator_MemoizedValue).Data.W + 4) = uVar6;
    (this->GetFullRotator_MemoizedValue).IsValidData = iVar1;
    *(undefined4 *)((char *)&(this->GetFullRotator_MemoizedValue) + 0x24) = uVar7;
    (this->GetVelocityStateConstant_km__s_MemoizedValue).Data = (double)CONCAT71(uStack_2f,1);
    if (*(char *)&(this->GetVelocityStateConstant_km__s_MemoizedValue).Data == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(undefined1 *)0x0);
      DebugBreak();
    }
  }
util__GetCameraUp(__return_storage_ptr__,*(undefined4 *)&(this->GetFullRotator_MemoizedValue).Data.Y,
             *(undefined4 *)((int)&(this->GetFullRotator_MemoizedValue).Data.Y + 4));
  return __return_storage_ptr__;
}


//==== 00007248b0 007248b0_CelestialObject__GetChildObjectsRecursively_Memoize ====
// decompiled by BatchDecomp @ 007248b0 name=GetChildObjectsRecursively_Memoize conv=__thiscall body=138

/* public: void __thiscall CelestialObject__GetChildObjectsRecursively_Memoize(void)const  */

void __thiscall CelestialObject__GetChildObjectsRecursively_Memoize(CelestialObject *this)

{
  int iVar1;
  undefined1 ***pppuVar2;
  bool bVar3;
  undefined1 *p1;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_2c[16];
  undefined1 local_1c;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_18[16];
  int local_8;
  
  if ((char)(this->GetChildObjectsRecursively_MemoizedValue).IsValidData == '\0') {
    iVar1 = (this->CelestialObjectMemoizationHandlerInstance).ResetFunctions.Size;
    local_8 = iVar1 + 1;
    util__Darray_struct_util__tuple2_enum_Order__Type_int_____SetSize((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)
               &this->CelestialObjectMemoizationHandlerInstance,&local_8);
    bVar3 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &this->CelestialObjectMemoizationHandlerInstance,iVar1);
    if (bVar3) {
      pppuVar2 = (this->CelestialObjectMemoizationHandlerInstance).ResetFunctions.Data;
      iVar1 = (this->CelestialObjectMemoizationHandlerInstance).ResetFunctions.Size;
      pppuVar2[iVar1 * 2 + -2] = (undefined1 **)TacticalManager__GetAllColliders_Clear;
      pppuVar2[iVar1 * 2 + -1] = (undefined1 **)0x0;
    }
    p1 = (undefined1 *)CelestialObject_GetChildObjectsRecursively_MemoizedFunction(this);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_2c,p1);
    local_1c = 1;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetChildObjectsRecursively_MemoizedValue,local_2c);
    *(undefined1 *)&(this->GetChildObjectsRecursively_MemoizedValue).IsValidData = local_1c;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_2c);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_18);
  }
  return;
}


//==== 0000732bc0 00732bc0_Fleet__GetRangesAgainstFleets_km_Clear ====
// decompiled by BatchDecomp @ 00732bc0 name=GetRangesAgainstFleets_km_Clear conv=__thiscall body=87

/* public: void __thiscall Fleet__GetRangesAgainstFleets_km_Clear(void)const  */

void __thiscall Fleet__GetRangesAgainstFleets_km_Clear(Fleet *this)

{
  int *p1;
  int *local_10[2];
  int local_8;
  
  p1 = &local_8;
  local_8 = 0;
  util__HashMap_class_util__WeakPtr_class_Fleet__double___HashMap_class_util__WeakPtr_class_Fleet__double((HashMap_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G_ *)local_10,p1);
  util__HashMap_class_util__WeakPtr_class_Fleet__double___operator__o2
            ((HashMap_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G_ *)
             &this->GetRangesAgainstFleets_km_MemoizedValue,(undefined1 *)p1);
  if (local_10[0] != (int *)0x0) {
    if (local_10[0][-1] != 0) {
      (**(code **)(*local_10[0] + 0x18))(3);
      *(undefined1 *)&(this->GetRangesAgainstFleets_km_MemoizedValue).IsValidData = 0;
      return;
    }
    operator_delete__(local_10[0] + -1);
  }
  *(undefined1 *)&(this->GetRangesAgainstFleets_km_MemoizedValue).IsValidData = 0;
  return;
}


//==== 000073e650 0073e650_Itinerary__FindNearestOrbitToNode ====
extern undefined4 FUN_00735be0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 0073e650 name=FindNearestOrbitToNode conv=__thiscall body=913

/* public: struct util__tuple2_L_util__WeakPtr_L_OrbiterInterface_G__Cdouble_G_ __thiscall
   Itinerary__FindNearestOrbitToNode(struct ItineraryNode const &)const  */

ItineraryNode * __thiscall Itinerary__FindNearestOrbitToNode(Itinerary *this,ItineraryNode *p1)

{
  undefined4 stack0xfffffffc;
  ReferenceController *this_00;
  StrategicManager *this_01;
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ReferenceController *this_02;
  OrbiterInterface *pOVar5;
  ReferenceController *this_03;
  util__WeakPtr_L_OrbiterInterface_G_ *in_stack_00000008;
  undefined1 local_280[16];
  ReferenceController *local_270;
  undefined **local_268;
  void *local_264;
  undefined **local_220;
  void *local_21c;
  undefined1 local_190[16];
  ReferenceController *local_180;
  undefined **local_178;
  void *local_174;
  undefined **local_130;
  void *local_12c;
  undefined1 *local_a0;
  undefined1 *puStack_9c;
  undefined1 *local_40;
  ReferenceController *local_3c;
  int *local_38;
  undefined8 *puStack_34;
  util__WeakPtr_L_OrbiterInterface_G_ *puStack_30;
  double *pdStack_2c;
  undefined8 local_28;
  util__WeakPtr_L_OrbiterInterface_G_ *local_20;
  uint local_1c;
  double local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  this_00 = (ReferenceController *)in_stack_00000008[0x1e].Controller;
  pOVar5 = in_stack_00000008[0x1e].Pointer;
  local_28 = (double)CONCAT44(this,(undefined4)local_28);
  local_20 = in_stack_00000008;
  local_1c = 0;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
  }
  local_10 = 0.0;
  if (this_00 != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__IsDataStillValid(this_00);
    if (!bVar2) {
      pOVar5 = (OrbiterInterface *)0x0;
    }
  }
  iVar3 = (**(code **)pOVar5->field2_0x2)(local_280);
  if (*(char *)(iVar3 + 0xe8) == '\0') {
    local_1c = 0;
    uVar4 = 4;
    this_02 = (ReferenceController *)0x0;
    this_03 = (ReferenceController *)((slice_view *)&local_28)->_4_4_;
  }
  else {
    if (this_00 != (ReferenceController *)0x0) {
      bVar2 = util__ReferenceController__IsDataStillValid(this_00);
      if (!bVar2) {
        pOVar5 = (OrbiterInterface *)0x0;
      }
    }
    iVar3 = (**(code **)pOVar5->field2_0x2)(local_190);
    if (*(char *)(iVar3 + 0xe8) == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(undefined1 *)0x0);
      DebugBreak();
    }
    local_1c = *(undefined4 *)(iVar3 + 0xc);
    this_02 = *(ReferenceController **)(iVar3 + 0x10);
    if (this_02 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_02);
    }
    uVar4 = 3;
    this_03 = this_02;
  }
  local_10 = (double)CONCAT44(this_02,local_1c);
  local_1c = uVar4;
  if (this_02 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_02);
  }
  uVar4 = local_1c;
  if ((local_1c & 4) != 0) {
    uVar4 = local_1c & 0xfffffffb;
  }
  if ((uVar4 & 2) != 0) {
    local_1c = uVar4 & 0xfffffffd;
    uVar4 = local_1c;
    if (this_03 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(this_03);
      uVar4 = local_1c;
    }
  }
  if ((uVar4 & 1) != 0) {
    local_130 = ((void *)(0x009194a4u));
    if (local_12c != (void *)0x0) {
      operator_delete__(local_12c);
    }
    local_12c = (void *)0x0;
    local_130 = ((void *)(0x00919488u));
    local_178 = ((void *)(0x00919980u));
    if (local_174 != (void *)0x0) {
      operator_delete__(local_174);
      local_174 = (void *)0x0;
    }
    if (local_180 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_180);
    }
  }
  local_220 = ((void *)(0x009194a4u));
  if (local_21c != (void *)0x0) {
    operator_delete__(local_21c);
  }
  local_21c = (void *)0x0;
  local_220 = ((void *)(0x00919488u));
  local_268 = ((void *)(0x00919980u));
  if (local_264 != (void *)0x0) {
    operator_delete__(local_264);
    local_264 = (void *)0x0;
  }
  if (local_270 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_270);
  }
  piVar1 = (int *)((slice_view *)&local_28)->_4_4_;
  puStack_34 = &local_10;
  puStack_30 = local_20;
  pdStack_2c = &local_18;
  local_18 = /*3fb999999999999a*/0.1;
  local_38 = (int *)((slice_view *)&local_28)->_4_4_;
  if (*(ReferenceController **)((int)((slice_view *)&local_28)->_4_4_ + 4) != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)((int)((slice_view *)&local_28)->_4_4_ + 4));
    if (!bVar2) {
      *piVar1 = 0;
    }
  }
  this_01 = *(StrategicManager **)(*(int *)(uintptr_t)piVar1 + 0x74);
  StrategicManager__GetAllOrbits_Memoize(this_01);
  if ((char)(this_01->GetAllOrbits_MemoizedValue).IsValidData == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(undefined1 *)0x0);
    DebugBreak();
  }
  FUN_00735be0(&local_40,&this_01->GetAllOrbits_MemoizedValue,local_38,puStack_34,puStack_30,
               pdStack_2c);
  if ((char)puStack_30 == '\0') {
    (p1->Parent).Pointer = (undefined1 *)0x0;
    (p1->Parent).Controller = (undefined1 *)0x0;
    (p1->LastState).Position.X = 0.0;
    if (local_3c == (ReferenceController *)0x0) goto LAB_0073e9b5;
  }
  else {
    GetRelativeOrbitLineSegments(((slice_view *)&local_28)->_4_4_,(ItineraryNode *)&local_a0,local_20);
    local_28 = util__FindNearestOrbitToNode(local_a0,puStack_9c);
    if ((char)puStack_30 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(undefined1 *)0x0);
      DebugBreak();
    }
    if (local_3c != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(local_3c);
      util__ReferenceController__AddWeakReference(local_3c);
    }
    (p1->Parent).Pointer = local_40;
    (p1->Parent).Controller = (undefined1 *)local_3c;
    if (local_3c != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(local_3c);
    }
    (p1->LastState).Position.X = local_28;
    if (local_3c == (ReferenceController *)0x0) goto LAB_0073e9b5;
    util__ReferenceController__ReleaseWeakReference(local_3c);
    util__ReferenceController__ReleaseWeakReference(local_3c);
  }
  util__ReferenceController__ReleaseWeakReference(local_3c);
LAB_0073e9b5:
  if (((slice_view *)&local_10)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_10)->_4_4_);
  }
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return p1;
}


//==== 0000770cc0 00770cc0_ActorDropdownAction__ActorDropdownAction ====
#undef t /* auto(v2): compat 僵尸宏撞成员名 */

// decompiled by BatchDecomp @ 00770cc0 name=ActorDropdownAction conv=__thiscall body=120

/* public: __thiscall ActorDropdownAction__ActorDropdownAction(struct WorldObject const &,enum
   ItineraryDropAction__Type) */

void __thiscall
ActorDropdownAction__ActorDropdownAction(ActorDropdownAction *this,WorldObject *p1,int p2)

{
  ReferenceController *this_00;
  
  (this->Data).Object.Pointer = (p1->Object).Pointer;
  this_00 = (ReferenceController *)(p1->Object).Controller;
  (this->Data).Object.Controller = (undefined1 *)this_00;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
  }
  (this->Data).LPointID = p1->LPointID;
  ItineraryNode__ItineraryNode(&(this->Data).Node.LastNode,(undefined1 *)&p1->Node);
  ItineraryNode__ItineraryNode(&(this->Data).Node.NextNode,(undefined1 *)&(p1->Node).NextNode);
  (this->Data).Node.t = (p1->Node).t;
  this->ItineraryAction = p2;
  (this->AdditionalFleet).Pointer = (undefined1 *)0x0;
  (this->AdditionalFleet).Controller = (undefined1 *)0x0;
  return;
}


//==== 0000784b40 00784b40_HUDItineraryInfoPanel__OnSelectBurn ====
// decompiled by BatchDecomp @ 00784b40 name=OnSelectBurn conv=__thiscall body=108

/* private: void __thiscall HUDItineraryInfoPanel__OnSelectBurn(struct ItineraryNode) */

void __thiscall HUDItineraryInfoPanel__OnSelectBurn(HUDItineraryInfoPanel *this,undefined4 p1)

{
  undefined4 stack0xfffffea8;
  StrategicManager *this_00;
  ReferenceController *in_stack_00000008;
  ReferenceController *in_stack_000000f8;
  ReferenceController *in_stack_00000100;
  ReferenceController *in_stack_00000108;
  ReferenceController *in_stack_00000130;
  undefined1 *in_stack_fffffea8;
  
  this_00 = (StrategicManager *)this->_pad_0x8_2;
  ItineraryNode__ItineraryNode((ItineraryNode *)&stack0xfffffea8,(undefined1 *)&p1);
  StrategicManager__SelectItineraryNode(this_00,in_stack_fffffea8);
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
  if (in_stack_00000008 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(in_stack_00000008);
  }
  return;
}


//==== 0000787e20 00787e20_HUDItineraryNodeDragger__GetWorldMouseRay ====
// decompiled by BatchDecomp @ 00787e20 name=GetWorldMouseRay conv=__thiscall body=220

/* private: struct util__Line3_L_double_G_ __thiscall HUDItineraryNodeDragger__GetWorldMouseRay(struct
   util__Vec2_L_double_G_)const  */

util__Line3_L_double_G_ * __thiscall
HUDItineraryNodeDragger__GetWorldMouseRay(HUDItineraryNodeDragger *this,util__Line3_L_double_G_ *__return_storage_ptr__,undefined4 p1)

{
  undefined4 stack0xfffffffc;
  double dVar1;
  double dVar2;
  double dVar3;
  CameraManager *pCVar4;
  util__Vec3_L_double_G_ *puVar5;
  util__Vec3_L_double_G_ local_58;
  double local_40;
  util__Vec3_L_double_G_ local_38;
  util__Vec3_L_double_G_ local_20;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pCVar4 = Manager__GetCameras((Manager *)this->_pad_0x8_2);
  CameraManager__GetCameraPos(pCVar4,&local_20);
  puVar5 = &local_38;
  pCVar4 = Manager__GetCameras((Manager *)this->_pad_0x8_2);
  CameraManager__GetMouseRay(pCVar4,puVar5,p1);
  local_40 = GetWorldSize_km(this);
  puVar5 = util__Vec3_double___SafeNormalized((Vec3_L_double_G_ *)&local_38,&local_58);
  dVar1 = puVar5->X;
  dVar2 = puVar5->Y;
  dVar3 = puVar5->Z;
  *(undefined4 *)&(__return_storage_ptr__->A).X = ((slice_view *)&local_20.X)->_0_4_;
  *(undefined4 *)((int)&(__return_storage_ptr__->A).X + 4) = ((slice_view *)&local_20.X)->_4_4_;
  *(undefined4 *)&(__return_storage_ptr__->A).Y = ((slice_view *)&local_20.Y)->_0_4_;
  *(undefined4 *)((int)&(__return_storage_ptr__->A).Y + 4) = ((slice_view *)&local_20.Y)->_4_4_;
  (__return_storage_ptr__->A).Z = local_20.Z;
  (__return_storage_ptr__->B).X =
       dVar1 * local_40 + (double)CONCAT44(((slice_view *)&local_20.X)->_4_4_,((slice_view *)&local_20.X)->_0_4_);
  (__return_storage_ptr__->B).Y =
       dVar2 * local_40 + (double)CONCAT44(((slice_view *)&local_20.Y)->_4_4_,((slice_view *)&local_20.Y)->_0_4_);
  (__return_storage_ptr__->B).Z = dVar3 * local_40 + local_20.Z;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 0000792fa0 00792fa0_ItineraryMarker__GetParametricCoord ====
// decompiled by BatchDecomp @ 00792fa0 name=GetParametricCoord conv=__thiscall body=249

/* private: double __thiscall ItineraryMarker__GetParametricCoord(void)const  */

double __thiscall ItineraryMarker__GetParametricCoord(ItineraryMarker *this)

{
  int iVar1;
  bool bVar2;
  double dVar3;
  ReferenceController *local_160;
  ReferenceController *local_70;
  ReferenceController *local_68;
  ReferenceController *local_60;
  ReferenceController *local_38;
  
  bVar2 = false;
  iVar1 = this->MarkerType;
  if (iVar1 == 1) {
    if ((char)(this->NodeToMark).CachedNearestOrbitParametricCoord.IsValidData == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x12,
                      "IsValid()",(undefined1 *)0x0);
      DebugBreak();
    }
    dVar3 = (this->NodeToMark).CachedNearestOrbitParametricCoord.Data;
  }
  else if (iVar1 == 2) {
    if ((char)(this->NodeToMark).CachedNearestFleetParametricCoord.IsValidData == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x12,
                      "IsValid()",(undefined1 *)0x0);
      DebugBreak();
    }
    dVar3 = (this->NodeToMark).CachedNearestFleetParametricCoord.Data;
  }
  else if ((iVar1 == 3) || (iVar1 != 0)) {
    dVar3 = 0.0;
  }
  else {
    iVar1 = StrategicManager__GetHoveredItineraryNode((StrategicManager *)this->_pad_0x8_2);
    bVar2 = true;
    dVar3 = *(double *)(iVar1 + 0x150);
  }
  if (bVar2) {
    if (local_38 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_38);
    }
    if (local_60 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_60);
    }
    if (local_68 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_68);
    }
    if (local_70 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_70);
    }
    if (local_160 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_160);
    }
  }
  return dVar3;
}


//==== 000079d420 0079d420_OrbitUI__IsLibrationOrbit ====
// decompiled by BatchDecomp @ 0079d420 name=IsLibrationOrbit conv=__thiscall body=85

/* public: bool __thiscall OrbitUI__IsLibrationOrbit(void)const  */

bool __thiscall OrbitUI__IsLibrationOrbit(OrbitUI *this)

{
  undefined1 uVar1;
  ReferenceController *this_00;
  bool bVar2;
  int iVar3;
  LibrationOrbit local_15c;
  
  this_00 = (ReferenceController *)(this->Orbitee).Controller;
  if (this_00 != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__IsDataStillValid(this_00);
    if (!bVar2) {
      (this->Orbitee).Pointer = (OrbiterInterface *)0x0;
    }
  }
  iVar3 = (**(code **)(((this->Orbitee).Pointer)->field0_0x0 + 4))(&local_15c);
  uVar1 = *(undefined1 *)(iVar3 + 0x150);
  LibrationOrbit_LibrationOrbit__o2(&local_15c);
  return (bool)uVar1;
}


//==== 00007a0b10 007a0b10_BalloonPopupNodePayload__OnAction ====
// decompiled by BatchDecomp @ 007a0b10 name=OnAction conv=__thiscall body=66

/* public: virtual bool __thiscall BalloonPopupNodePayload__OnAction(void) */

bool __thiscall BalloonPopupNodePayload__OnAction(BalloonPopupNodePayload *this)

{
  undefined4 stack0xfffffea8;
  ItineraryNode *this_00;
  ReferenceController *this_01;
  Fleet *this_02;
  bool bVar1;
  undefined1 *in_stack_fffffea8;
  
  this_00 = &this->Node;
  bVar1 = ItineraryNode__IsValid(this_00);
  if (bVar1) {
    this_01 = (ReferenceController *)(this->Node).Parent.Controller;
    if (this_01 != (ReferenceController *)0x0) {
      bVar1 = util__ReferenceController__IsDataStillValid(this_01);
      if (!bVar1) {
        (this_00->Parent).Pointer = (undefined1 *)0x0;
      }
    }
    this_02 = (Fleet *)(this_00->Parent).Pointer;
    ItineraryNode__ItineraryNode((ItineraryNode *)&stack0xfffffea8,(undefined1 *)this_00);
    Fleet__ClearBurnOnItinerary(this_02,in_stack_fffffea8);
  }
  return true;
}


//==== 00007a9080 007a9080_WorldObject__WorldObject ====
#undef t /* auto(v2): compat 僵尸宏撞成员名 */

// decompiled by BatchDecomp @ 007a9080 name=WorldObject conv=__thiscall body=89

/* public: __thiscall WorldObject__WorldObject(struct NodeMouseOver) */

void __thiscall WorldObject__WorldObject(WorldObject *this,undefined4 p1)

{
  undefined4 stack0x00000154;
  double in_stack_000002a4;
  
  (this->Object).Pointer = (undefined1 *)0x0;
  (this->Object).Controller = (undefined1 *)0x0;
  this->LPointID = 0;
  ItineraryNode__ItineraryNode(&(this->Node).LastNode,(undefined1 *)&p1);
  ItineraryNode__ItineraryNode(&(this->Node).NextNode,&stack0x00000154);
  (this->Node).t = in_stack_000002a4;
  NodeMouseOver__dtor((NodeMouseOver *)&p1);
  return;
}


//==== 00007ad150 007ad150_FUN_007ad150 ====
void FUN_007ad150(int *param_1,int param_2,undefined8 *param_3);

// decompiled by BatchDecomp @ 007ad150 name=FUN_007ad150 conv=unknown body=415

void FUN_007ad150(int *param_1,int param_2,undefined8 *param_3)

{
  undefined4 stack0xfffffffc;
  int *piVar1;
  ReferenceController *this;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined1 uVar6;
  int local_24;
  ReferenceController *local_20;
  undefined4 *local_1c;
  int *local_18;
  int local_14;
  undefined2 local_e;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_18 = param_1;
  local_c = 0;
  iVar3 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
  if (local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)*param_1)(&local_c);
      local_1c = puVar4;
      if (*(char *)(param_2 + 0x1d9) == '\0') {
        iVar3 = *(int *)(param_2 + 0x10);
        local_14 = iVar3 + 1;
        util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)(param_2 + 8),&local_14);
        bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)(param_2 + 8),iVar3);
        if (bVar2) {
          *(code **)(*(int *)(param_2 + 0xc) + -4 + *(int *)(param_2 + 0x10) * 4) =
               Body_IsAlive_Clear;
        }
util__Close(&local_24);
        local_14 = util__Darray_enum_CrewDepartment__Type___Num(*(Darray_L_enum_CrewDepartment__Type_G_ **)(param_2 + 0x1dc));
        this = local_20;
        iVar3 = local_24;
        if (((local_24 == 0) || (local_20 == (ReferenceController *)0x0)) ||
           (bVar2 = util__ReferenceController__IsDataStillValid(local_20), !bVar2)) {
          util__LogAssert("\\mac\\home\\documents\\code\\engine\\infrastructure\\manager.h",0x33,
                          "Target",(undefined1 *)0x0);
          DebugBreak();
        }
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this);
        }
        piVar5 = *(int **)(local_14 + 0x28);
        piVar1 = piVar5 + *(int *)(local_14 + 0x2c) * 2;
        for (; piVar5 != piVar1; piVar5 = piVar5 + 2) {
          if ((this == (ReferenceController *)piVar5[1]) && (iVar3 == *piVar5)) {
            uVar6 = 0;
            goto LAB_007ad256;
          }
        }
        uVar6 = 1;
LAB_007ad256:
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this);
          util__ReferenceController__ReleaseWeakReference(this);
        }
        param_1 = local_18;
        puVar4 = local_1c;
        local_e = CONCAT11(1,uVar6);
        *(undefined2 *)(param_2 + 0x1d8) = local_e;
        if (*(char *)(param_2 + 0x1d9) == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(undefined1 *)0x0);
          DebugBreak();
        }
      }
      if (*(char *)(param_2 + 0x1d8) != '\0') {
        (**(code **)(*(int *)*puVar4 + 0x30))(*param_3);
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007ad2f0 007ad2f0_FUN_007ad2f0 ====
void FUN_007ad2f0(int *param_1,int param_2,undefined8 *param_3);

// decompiled by BatchDecomp @ 007ad2f0 name=FUN_007ad2f0 conv=unknown body=415

void FUN_007ad2f0(int *param_1,int param_2,undefined8 *param_3)

{
  undefined4 stack0xfffffffc;
  int *piVar1;
  ReferenceController *this;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined1 uVar6;
  int local_24;
  ReferenceController *local_20;
  undefined4 *local_1c;
  int *local_18;
  int local_14;
  undefined2 local_e;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_18 = param_1;
  local_c = 0;
  iVar3 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
  if (local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)*param_1)(&local_c);
      local_1c = puVar4;
      if (*(char *)(param_2 + 0x1d9) == '\0') {
        iVar3 = *(int *)(param_2 + 0x10);
        local_14 = iVar3 + 1;
        util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)(param_2 + 8),&local_14);
        bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)(param_2 + 8),iVar3);
        if (bVar2) {
          *(code **)(*(int *)(param_2 + 0xc) + -4 + *(int *)(param_2 + 0x10) * 4) =
               Body_IsAlive_Clear;
        }
util__Close(&local_24);
        local_14 = util__Darray_enum_CrewDepartment__Type___Num(*(Darray_L_enum_CrewDepartment__Type_G_ **)(param_2 + 0x1dc));
        this = local_20;
        iVar3 = local_24;
        if (((local_24 == 0) || (local_20 == (ReferenceController *)0x0)) ||
           (bVar2 = util__ReferenceController__IsDataStillValid(local_20), !bVar2)) {
          util__LogAssert("\\mac\\home\\documents\\code\\engine\\infrastructure\\manager.h",0x33,
                          "Target",(undefined1 *)0x0);
          DebugBreak();
        }
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this);
        }
        piVar5 = *(int **)(local_14 + 0x28);
        piVar1 = piVar5 + *(int *)(local_14 + 0x2c) * 2;
        for (; piVar5 != piVar1; piVar5 = piVar5 + 2) {
          if ((this == (ReferenceController *)piVar5[1]) && (iVar3 == *piVar5)) {
            uVar6 = 0;
            goto LAB_007ad3f6;
          }
        }
        uVar6 = 1;
LAB_007ad3f6:
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this);
          util__ReferenceController__ReleaseWeakReference(this);
        }
        param_1 = local_18;
        puVar4 = local_1c;
        local_e = CONCAT11(1,uVar6);
        *(undefined2 *)(param_2 + 0x1d8) = local_e;
        if (*(char *)(param_2 + 0x1d9) == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(undefined1 *)0x0);
          DebugBreak();
        }
      }
      if (*(char *)(param_2 + 0x1d8) != '\0') {
        (**(code **)(*(int *)*puVar4 + 8))(*param_3);
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007ad490 007ad490_FUN_007ad490 ====
void FUN_007ad490(int *param_1,int param_2,undefined8 *param_3);

// decompiled by BatchDecomp @ 007ad490 name=FUN_007ad490 conv=unknown body=415

void FUN_007ad490(int *param_1,int param_2,undefined8 *param_3)

{
  undefined4 stack0xfffffffc;
  int *piVar1;
  ReferenceController *this;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined1 uVar6;
  int local_24;
  ReferenceController *local_20;
  undefined4 *local_1c;
  int *local_18;
  int local_14;
  undefined2 local_e;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_18 = param_1;
  local_c = 0;
  iVar3 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
  if (local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)*param_1)(&local_c);
      local_1c = puVar4;
      if (*(char *)(param_2 + 0x1d9) == '\0') {
        iVar3 = *(int *)(param_2 + 0x10);
        local_14 = iVar3 + 1;
        util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)(param_2 + 8),&local_14);
        bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)(param_2 + 8),iVar3);
        if (bVar2) {
          *(code **)(*(int *)(param_2 + 0xc) + -4 + *(int *)(param_2 + 0x10) * 4) =
               Body_IsAlive_Clear;
        }
util__Close(&local_24);
        local_14 = util__Darray_enum_CrewDepartment__Type___Num(*(Darray_L_enum_CrewDepartment__Type_G_ **)(param_2 + 0x1dc));
        this = local_20;
        iVar3 = local_24;
        if (((local_24 == 0) || (local_20 == (ReferenceController *)0x0)) ||
           (bVar2 = util__ReferenceController__IsDataStillValid(local_20), !bVar2)) {
          util__LogAssert("\\mac\\home\\documents\\code\\engine\\infrastructure\\manager.h",0x33,
                          "Target",(undefined1 *)0x0);
          DebugBreak();
        }
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this);
        }
        piVar5 = *(int **)(local_14 + 0x28);
        piVar1 = piVar5 + *(int *)(local_14 + 0x2c) * 2;
        for (; piVar5 != piVar1; piVar5 = piVar5 + 2) {
          if ((this == (ReferenceController *)piVar5[1]) && (iVar3 == *piVar5)) {
            uVar6 = 0;
            goto LAB_007ad596;
          }
        }
        uVar6 = 1;
LAB_007ad596:
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this);
          util__ReferenceController__ReleaseWeakReference(this);
        }
        param_1 = local_18;
        puVar4 = local_1c;
        local_e = CONCAT11(1,uVar6);
        *(undefined2 *)(param_2 + 0x1d8) = local_e;
        if (*(char *)(param_2 + 0x1d9) == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(undefined1 *)0x0);
          DebugBreak();
        }
      }
      if (*(char *)(param_2 + 0x1d8) != '\0') {
        (**(code **)(*(int *)*puVar4 + 0x10))(*param_3);
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007ad630 007ad630_FUN_007ad630 ====
void FUN_007ad630(int *param_1,int param_2,undefined8 *param_3);

// decompiled by BatchDecomp @ 007ad630 name=FUN_007ad630 conv=unknown body=415

void FUN_007ad630(int *param_1,int param_2,undefined8 *param_3)

{
  undefined4 stack0xfffffffc;
  int *piVar1;
  ReferenceController *this;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined1 uVar6;
  int local_24;
  ReferenceController *local_20;
  undefined4 *local_1c;
  int *local_18;
  int local_14;
  undefined2 local_e;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_18 = param_1;
  local_c = 0;
  iVar3 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
  if (local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)*param_1)(&local_c);
      local_1c = puVar4;
      if (*(char *)(param_2 + 0x1d9) == '\0') {
        iVar3 = *(int *)(param_2 + 0x10);
        local_14 = iVar3 + 1;
        util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)(param_2 + 8),&local_14);
        bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)(param_2 + 8),iVar3);
        if (bVar2) {
          *(code **)(*(int *)(param_2 + 0xc) + -4 + *(int *)(param_2 + 0x10) * 4) =
               Body_IsAlive_Clear;
        }
util__Close(&local_24);
        local_14 = util__Darray_enum_CrewDepartment__Type___Num(*(Darray_L_enum_CrewDepartment__Type_G_ **)(param_2 + 0x1dc));
        this = local_20;
        iVar3 = local_24;
        if (((local_24 == 0) || (local_20 == (ReferenceController *)0x0)) ||
           (bVar2 = util__ReferenceController__IsDataStillValid(local_20), !bVar2)) {
          util__LogAssert("\\mac\\home\\documents\\code\\engine\\infrastructure\\manager.h",0x33,
                          "Target",(undefined1 *)0x0);
          DebugBreak();
        }
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this);
        }
        piVar5 = *(int **)(local_14 + 0x28);
        piVar1 = piVar5 + *(int *)(local_14 + 0x2c) * 2;
        for (; piVar5 != piVar1; piVar5 = piVar5 + 2) {
          if ((this == (ReferenceController *)piVar5[1]) && (iVar3 == *piVar5)) {
            uVar6 = 0;
            goto LAB_007ad736;
          }
        }
        uVar6 = 1;
LAB_007ad736:
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this);
          util__ReferenceController__ReleaseWeakReference(this);
        }
        param_1 = local_18;
        puVar4 = local_1c;
        local_e = CONCAT11(1,uVar6);
        *(undefined2 *)(param_2 + 0x1d8) = local_e;
        if (*(char *)(param_2 + 0x1d9) == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(undefined1 *)0x0);
          DebugBreak();
        }
      }
      if (*(char *)(param_2 + 0x1d8) != '\0') {
        (**(code **)(*(int *)*puVar4 + 0xc))(*param_3);
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007c3df0 007c3df0_MatterCloudComponent__GetDirection ====
// decompiled by BatchDecomp @ 007c3df0 name=GetDirection conv=__thiscall body=108

/* public: struct Vec3_L_double_G_ __thiscall MatterCloudComponent__GetDirection(void)const  */

util__Vec3_L_double_G_ * __thiscall
MatterCloudComponent__GetDirection(MatterCloudComponent *this,util__Vec3_L_double_G_ *__return_storage_ptr__)

{
  bool bVar1;
  util__Quaternion_L_double_G_ *puVar2;
  util__Quaternion_L_double_G_ local_24;
  
  if ((ReferenceController *)this->_pad_0x8_2 != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x8_2);
    if (!bVar1) {
      this->_pad_0x4_1 = 0;
    }
  }
  puVar2 = Body__GetOrientation((Body *)this->_pad_0x4_1,&local_24);
util__GetCameraUp(__return_storage_ptr__,*(undefined4 *)&puVar2->X,*(undefined4 *)((int)&puVar2->X + 4));
  return __return_storage_ptr__;
}


//==== 00007c54a0 007c54a0_PhotonPacketComponent__PhotonPacketComponent ====
// decompiled by BatchDecomp @ 007c54a0 name=PhotonPacketComponent conv=__thiscall body=134

/* public: __thiscall PhotonPacketComponent__PhotonPacketComponent(class util__WeakPtr_L_Body_G_,double,double,class util__Delegate_L_double_Cdouble_G_) */

void __thiscall
PhotonPacketComponent__PhotonPacketComponent(PhotonPacketComponent *this,Body *p1,double p2,double p3,int p4)

{
  bool bVar1;
  ReferenceController *in_stack_00000008;
  undefined1 **in_stack_00000020;
  Body *p1_00;
  
  p1_00 = p1;
  if (in_stack_00000008 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(in_stack_00000008);
  }
  Component__Component((Component *)this,p1_00);
  this->_pad_0x0_0 = (int)((void *)(0x0093cde8u));
  if ((in_stack_00000008 != (ReferenceController *)0x0) &&
     (bVar1 = util__ReferenceController__IsDataStillValid(in_stack_00000008), !bVar1)) {
    p1 = (Body *)0x0;
  }
  Body__GetPosition_km(p1,&this->EmitPosition_km);
  (this->RadiusGetter_m).Callee = p4;
  this->Wavelength_nm = p2;
  (this->RadiusGetter_m).CallbackFunction = in_stack_00000020;
  this->Energy_J = p3;
  if (in_stack_00000008 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(in_stack_00000008);
  }
  return;
}


//==== 00007c5d30 007c5d30_PhotonPacketComponent__GetRadius_km ====
// decompiled by BatchDecomp @ 007c5d30 name=GetRadius_km conv=__thiscall body=237

/* public: virtual class util__Maybe_L_double_G_ __thiscall
   PhotonPacketComponent__GetRadius_km(void)const  */

util__Maybe_L_double_G_ * __thiscall
PhotonPacketComponent__GetRadius_km(PhotonPacketComponent *this,util__Maybe_L_double_G_ *__return_storage_ptr__)

{
  int iVar1;
  bool bVar2;
  util__Vec3_L_double_G_ *puVar3;
  util__Maybe_L_double_G_ *puVar4;
  float10 fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  util__Vec3_L_double_G_ local_38;
  util__Maybe_L_double_G_ local_20;
  double local_10;
  undefined1 **local_8;
  
  if ((ReferenceController *)this->_pad_0x8_2 != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x8_2);
    if (!bVar2) {
      this->_pad_0x4_1 = 0;
    }
  }
  puVar3 = Body__GetPosition_km((Body *)this->_pad_0x4_1,&local_38);
  dVar8 = (this->EmitPosition_km).X - puVar3->X;
  dVar7 = (this->EmitPosition_km).Y - puVar3->Y;
  dVar6 = (this->EmitPosition_km).Z - puVar3->Z;
  local_10 = dVar7 * dVar7 + dVar8 * dVar8 + dVar6 * dVar6;
  puVar4 = util__Sqrt(&local_20,(undefined1 *)&local_10);
  if ((char)puVar4->IsValidData == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(undefined1 *)0x0);
    DebugBreak();
  }
  iVar1 = (this->RadiusGetter_m).Callee;
  if ((iVar1 == 0) ||
     (local_8 = (this->RadiusGetter_m).CallbackFunction, local_8 == (undefined1 **)0x0)) {
    dVar6 = 0.0;
  }
  else {
    fVar5 = (float10)(*(code *)local_8)(iVar1,puVar4->Data);
    dVar6 = (double)fVar5;
  }
  dVar6 = dVar6 / /*408f400000000000*/1000.0;
  *(undefined1 *)&__return_storage_ptr__->IsValidData = 1;
  __return_storage_ptr__->Data = dVar6;
  return __return_storage_ptr__;
}


//==== 0000801ea0 00801ea0_TacticalManager__PrepareSetupAmbientAudio ====
extern undefined4 FUN_007f4aa0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 00801ea0 name=PrepareSetupAmbientAudio conv=__thiscall body=466

/* public: struct util__tuple2_L_bool_Cbool_G_ __thiscall
   TacticalManager__PrepareSetupAmbientAudio(void)const  */

undefined1 * __thiscall TacticalManager__PrepareSetupAmbientAudio(TacticalManager *this)

{
  undefined4 stack0xfffffffc;
  Body *pBVar1;
  ReferenceController *pRVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined1 uVar8;
  undefined1 *in_stack_00000004;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_30[16];
  undefined1 *local_20;
  undefined4 *local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_20 = in_stack_00000004;
  local_1c = (undefined4 *)0x0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uVar5 = GetSelectedSpacecrafts(this);
  FUN_007f4aa0(&local_1c,uVar5,this);
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_30);
  local_c = 0;
  iVar6 = (*(code *)local_1c[3])();
  if (local_c < iVar6) {
    do {
      piVar7 = (int *)(*(code *)*local_1c)(&local_c);
      if ((ReferenceController *)piVar7[1] != (ReferenceController *)0x0) {
        bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar7[1]);
        if (!bVar3) {
          *piVar7 = 0;
        }
      }
      iVar6 = *piVar7;
      if (*(ReferenceController **)(iVar6 + 8) != (ReferenceController *)0x0) {
        bVar3 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar6 + 8));
        if (!bVar3) {
          *(undefined4 *)(iVar6 + 4) = 0;
        }
      }
      pBVar1 = *(Body **)(iVar6 + 4);
      Body__GetCapitalShipComponent_Memoize(pBVar1);
      if ((char)(pBVar1->GetCapitalShipComponent_MemoizedValue).IsValidData == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(undefined1 *)0x0);
        DebugBreak();
      }
      if (((pBVar1->GetCapitalShipComponent_MemoizedValue).Data.Pointer != (undefined1 *)0x0) &&
         (pRVar2 = (ReferenceController *)
                   (pBVar1->GetCapitalShipComponent_MemoizedValue).Data.Controller,
         pRVar2 != (ReferenceController *)0x0)) {
        bVar3 = util__ReferenceController__IsDataStillValid(pRVar2);
        if (bVar3) {
          uVar8 = 1;
          goto LAB_00801f96;
        }
      }
      local_c = local_c + 1;
      iVar6 = (*(code *)local_1c[3])();
    } while (local_c < iVar6);
  }
  uVar8 = 0;
LAB_00801f96:
  local_c = 0;
  iVar6 = (*(code *)local_1c[3])();
  if (local_c < iVar6) {
    do {
      piVar7 = (int *)(*(code *)*local_1c)(&local_c);
      if ((ReferenceController *)piVar7[1] != (ReferenceController *)0x0) {
        bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar7[1]);
        if (!bVar3) {
          *piVar7 = 0;
        }
      }
      iVar6 = *piVar7;
      if (*(ReferenceController **)(iVar6 + 8) != (ReferenceController *)0x0) {
        bVar3 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar6 + 8));
        if (!bVar3) {
          *(undefined4 *)(iVar6 + 4) = 0;
        }
      }
      pBVar1 = *(Body **)(iVar6 + 4);
      Body__GetShotComponent_Memoize(pBVar1);
      if ((char)(pBVar1->GetShotComponent_MemoizedValue).IsValidData == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(undefined1 *)0x0);
        DebugBreak();
      }
      if ((*(int *)&(pBVar1->GetShotComponent_MemoizedValue).Data != 0) &&
         (pRVar2 = *(ReferenceController **)
                    ((int)&(pBVar1->GetShotComponent_MemoizedValue).Data + 4),
         pRVar2 != (ReferenceController *)0x0)) {
        bVar3 = util__ReferenceController__IsDataStillValid(pRVar2);
        if (bVar3) {
          uVar4 = 1;
          goto LAB_00802042;
        }
      }
      local_c = local_c + 1;
      iVar6 = (*(code *)local_1c[3])();
    } while (local_c < iVar6);
  }
  uVar4 = 0;
LAB_00802042:
  *local_20 = uVar8;
  local_20[1] = uVar4;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_1c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return local_20;
}


//==== 000080b960 0080b960_Minimap__GetVelocityDirection ====
// decompiled by BatchDecomp @ 0080b960 name=GetVelocityDirection conv=__thiscall body=930

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: class util__Maybe_L_struct_util__Vec2_L_double_G___G __thiscall
   Minimap__GetVelocityDirection(void)const  */

double * __thiscall Minimap__GetVelocityDirection(Minimap *this)

{
  undefined4 stack0xfffffffc;
  Faction *pFVar1;
  TacticalManager *pTVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  Faction *pFVar7;
  util__Vec3_L_double_G_ *puVar8;
  double *pdVar9;
  util__Maybe_L_double_G_ *puVar10;
  double dVar11;
  double *in_stack_00000004;
  undefined1 local_78[12];
  undefined4 uStack_6c;
  util__Vec2_L_double_G_ local_68;
  undefined1 local_58[16];
  double local_48;
  double *local_40;
  char local_3a;
  char local_39;
  util__Vec3_L_double_G_ local_38;
  undefined1 local_20[12];
  undefined4 uStack_14;
  undefined8 uStack_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_40 = in_stack_00000004;
  bVar3 = TacticalManager__IsSessionCombat((TacticalManager *)this->_pad_0x8_2);
  if (bVar3) {
    piVar4 = (int *)TacticalManager__GetSelectedBodies((TacticalManager *)this->_pad_0x8_2);
    uStack_10 = (double)((ulonglong)uStack_10 & 0xffffffff);
    iVar5 = (**(code **)(*(int *)(uintptr_t)piVar4 + 0xc))();
    if (((slice_view *)&uStack_10)->_4_4_ < iVar5) {
      do {
        piVar6 = (int *)(**(code **)*piVar4)();
        if (((ReferenceController *)piVar6[1] != (ReferenceController *)0x0) &&
           (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar6[1]),
           !bVar3)) {
          *piVar6 = 0;
        }
        pFVar1 = *(Faction **)(*(int *)(uintptr_t)piVar6 + 0x1e0);
        pFVar7 = TacticalManager__GetPlayerAlliance((TacticalManager *)this->_pad_0x8_2);
        if (pFVar1 != pFVar7) {
          local_39 = '\0';
          goto LAB_0080b9fd;
        }
        uStack_10 = (double)CONCAT44(((slice_view *)&uStack_10)->_4_4_ + 1,(undefined4)uStack_10);
        iVar5 = (**(code **)(*(int *)(uintptr_t)piVar4 + 0xc))();
      } while (((slice_view *)&uStack_10)->_4_4_ < iVar5);
    }
    local_39 = '\x01';
LAB_0080b9fd:
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_68);
    piVar4 = (int *)TacticalManager__GetSelectedBodies((TacticalManager *)this->_pad_0x8_2);
    uStack_10 = (double)((ulonglong)uStack_10 & 0xffffffff);
    iVar5 = (**(code **)(*(int *)(uintptr_t)piVar4 + 0xc))();
    if (((slice_view *)&uStack_10)->_4_4_ < iVar5) {
      do {
        piVar6 = (int *)(**(code **)*piVar4)();
        if (((ReferenceController *)piVar6[1] != (ReferenceController *)0x0) &&
           (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar6[1]),
           !bVar3)) {
          *piVar6 = 0;
        }
        pFVar1 = *(Faction **)(*(int *)(uintptr_t)piVar6 + 0x1e0);
        pFVar7 = TacticalManager__GetEnemyAlliance((TacticalManager *)this->_pad_0x8_2);
        if (pFVar1 != pFVar7) {
          local_3a = '\0';
          goto LAB_0080ba73;
        }
        uStack_10 = (double)CONCAT44(((slice_view *)&uStack_10)->_4_4_ + 1,(undefined4)uStack_10);
        iVar5 = (**(code **)(*(int *)(uintptr_t)piVar4 + 0xc))();
      } while (((slice_view *)&uStack_10)->_4_4_ < iVar5);
    }
    local_3a = '\x01';
LAB_0080ba73:
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_68);
    if ((local_3a != '\0') || (in_stack_00000004 = local_40, local_39 != '\0')) {
      TacticalManager__GetEnemyCraftVelocity_km__s((TacticalManager *)this->_pad_0x8_2,&local_38);
      if (local_39 == '\0') {
        if (local_3a == '\0') {
          puVar8 = (util__Vec3_L_double_G_ *)local_58;
          ((slice_view *)&local_58)->_0_8_ = 0.0;
          ((slice_view *)&local_58)->_8_8_ = 0.0;
          local_48 = 0.0;
        }
        else {
          puVar8 = TacticalManager__GetAlliedCraftVelocity_km__s((TacticalManager *)this->_pad_0x8_2,(util__Vec3_L_double_G_ *)local_20);
        }
        ((slice_view *)&local_78)->_8_4_ = *(undefined4 *)&puVar8->X;
        uStack_6c = *(undefined4 *)((int)&puVar8->X + 4);
        ((slice_view *)&local_68.X)->_0_4_ = *(undefined4 *)&puVar8->Y;
        ((slice_view *)&local_68.X)->_4_4_ = *(undefined4 *)((int)&puVar8->Y + 4);
        pdVar9 = (double *)(local_78 + 8);
        local_68.Y = puVar8->Z;
      }
      else {
        pTVar2 = (TacticalManager *)this->_pad_0x8_2;
        TacticalManager__GetSelectedBodiesVelocity_km__s_Memoize(pTVar2);
        if ((char)(pTVar2->GetSelectedBodiesVelocity_km__s_MemoizedValue).IsValidData == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(undefined1 *)0x0);
          DebugBreak();
        }
        pdVar9 = (double *)local_58;
        ((slice_view *)&local_58)->_0_8_ = (pTVar2->GetSelectedBodiesVelocity_km__s_MemoizedValue).Data.X;
        ((slice_view *)&local_58)->_8_8_ = (pTVar2->GetSelectedBodiesVelocity_km__s_MemoizedValue).Data.Y;
        local_48 = (pTVar2->GetSelectedBodiesVelocity_km__s_MemoizedValue).Data.Z;
      }
      pTVar2 = (TacticalManager *)this->_pad_0x8_2;
      local_48 = pdVar9[2] - local_38.Z;
      ((slice_view *)&local_58)->_0_8_ = *pdVar9 - local_38.X;
      ((slice_view *)&local_58)->_8_8_ = pdVar9[1] - local_38.Y;
      TacticalManager__GetCombatAxis_Memoize(pTVar2);
      if ((char)(pTVar2->GetCombatAxis_MemoizedValue).IsValidData == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(undefined1 *)0x0);
        DebugBreak();
      }
      util_Quaternion_double_Quaternion_double((Quaternion_L_double_G_ *)local_78,
                 *(undefined4 *)&(pTVar2->GetCombatAxis_MemoizedValue).Data.X,
                 *(undefined4 *)((int)&(pTVar2->GetCombatAxis_MemoizedValue).Data.X + 4));
      util__Vec3_double___SafeNormalized((Vec3_L_double_G_ *)local_58,(util__Vec3_L_double_G_ *)local_20);
util__GetCameraUp((util__Vec3_L_double_G_ *)(local_78 + 8),((slice_view *)&local_78)->_0_4_,((slice_view *)&local_78)->_4_4_);
      ((slice_view *)&local_20)->_8_4_ = ((slice_view *)&local_78)->_8_4_;
      uStack_14 = uStack_6c;
      uStack_10 = (double)CONCAT44(((slice_view *)&local_68.X)->_4_4_,((slice_view *)&local_68.X)->_0_4_);
      util__Vec2_double___SafeNormalized((Vec2_L_double_G_ *)(local_20 + 8),&local_68);
      uStack_10 = (double)((slice_view *)&local_58)->_8_8_ * (double)((slice_view *)&local_58)->_8_8_ +
                  (double)((slice_view *)&local_58)->_0_8_ * (double)((slice_view *)&local_58)->_0_8_ + local_48 * local_48;
      puVar10 = util__Sqrt((util__Maybe_L_double_G_ *)(local_58 + 8),(undefined1 *)&uStack_10);
      if ((char)puVar10->IsValidData == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(undefined1 *)0x0);
        DebugBreak();
      }
      dVar11 = (puVar10->Data - /*3fd0000000000000*/0.25) / /*4002000000000000*/2.25;
      *(undefined1 *)(local_40 + 2) = 1;
      if (dVar11 <= 0.0) {
        dVar11 = 0.0;
      }
      if (/*3ff0000000000000*/1.0 <= dVar11) {
        dVar11 = /*3ff0000000000000*/1.0;
      }
      dVar11 = (/*3ff0000000000000*/1.0 - dVar11) + dVar11 * /*4014000000000000*/5.0;
      local_40[1] = dVar11 * local_68.Y;
      *local_40 = dVar11 * (double)CONCAT44(((slice_view *)&local_68.X)->_4_4_,((slice_view *)&local_68.X)->_0_4_);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return local_40;
    }
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)((int)in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 1) = 0;
  *(undefined4 *)((int)in_stack_00000004 + 0xc) = 0;
  *(undefined1 *)(in_stack_00000004 + 2) = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return in_stack_00000004;
}


//==== 000080d9c0 0080d9c0_FUN_0080d9c0 ====
void FUN_0080d9c0(int *param_1,double *param_2,int param_3,double *param_4,char *param_5);

// decompiled by BatchDecomp @ 0080d9c0 name=FUN_0080d9c0 conv=unknown body=568

void FUN_0080d9c0(int *param_1,double *param_2,int param_3,double *param_4,char *param_5)

{
  undefined4 stack0xfffffffc;
  double dVar1;
  double dVar2;
  int iVar3;
  double *pdVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 p3;
  double local_6c;
  char local_64;
  double local_5c;
  char local_54;
  double local_4c;
  char local_44;
  double local_3c;
  char cStack_34;
  double local_2c;
  char local_24;
  double local_1c;
  char cStack_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar3 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
  if (local_c < iVar3) {
    do {
      iVar3 = (**(code **)*param_1)(&local_c);
      dVar1 = *(double *)(iVar3 + 8);
      dVar2 = *(double *)(iVar3 + 0x18);
      p3 = *(undefined4 *)((char *)&dVar1 + 4);
      uVar9 = *(undefined4 *)((char *)&dVar2 + 4);
      uVar6 = *(undefined4 *)&dVar2;
      uVar7 = uVar9;
      uVar8 = *(undefined4 *)&dVar1;
      uVar5 = p3;
      if (dVar2 < dVar1) {
        uVar6 = *(undefined4 *)&dVar1;
        uVar7 = p3;
        uVar8 = *(undefined4 *)&dVar2;
        uVar5 = uVar9;
      }
      if (((*param_2 <= (double)CONCAT44(uVar7,uVar6)) &&
          ((double)CONCAT44(uVar5,uVar8) <= param_2[1])) &&
         ((NAN(dVar1) || NAN(dVar2)) == (dVar1 == dVar2))) {
util__FUN_0080d9c0(&local_6c,0.0,(double)((longlong)dVar1 << 0x20),p3);
        if (((local_64 != '\0') &&
            (dVar1 = (*(double *)(param_3 + 0x28) - *(double *)(param_3 + 0x10)) * local_6c +
                     *(double *)(param_3 + 0x10), *param_2 <= dVar1)) && (dVar1 <= param_2[1])) {
          dVar1 = *param_4;
          uVar7 = *(undefined4 *)((char *)&dVar1 + 4);
          uVar6 = *(undefined4 *)&local_6c;
          uVar8 = *(undefined4 *)((char *)&local_6c + 4);
          if (*param_5 == '\0') {
            local_24 = local_64;
            if (*(char *)(param_4 + 1) != '\0') {
              uVar5 = *(undefined4 *)&dVar1;
              if (dVar1 <= local_6c) {
                uVar5 = uVar6;
                uVar7 = uVar8;
              }
              uVar6 = uVar5;
              uVar8 = uVar7;
              local_24 = '\x01';
            }
            pdVar4 = &local_2c;
            local_2c = (double)CONCAT44(uVar8,uVar6);
          }
          else if (*(char *)(param_4 + 1) == '\0') {
            cStack_14 = local_64;
            local_1c = local_6c;
            pdVar4 = &local_1c;
          }
          else {
            uVar5 = *(undefined4 *)&dVar1;
            if (local_6c <= dVar1) {
              uVar5 = uVar6;
              uVar7 = uVar8;
            }
            cStack_14 = '\x01';
            pdVar4 = &local_1c;
            local_1c = (double)CONCAT44(uVar7,uVar5);
          }
          uVar6 = *(undefined4 *)((int)pdVar4 + 4);
          uVar7 = *(undefined4 *)(pdVar4 + 1);
          uVar8 = *(undefined4 *)((int)pdVar4 + 0xc);
          *(undefined4 *)param_4 = *(undefined4 *)pdVar4;
          *(undefined4 *)((int)param_4 + 4) = uVar6;
          *(undefined4 *)(param_4 + 1) = uVar7;
          *(undefined4 *)((int)param_4 + 0xc) = uVar8;
        }
        if (((local_54 != '\0') &&
            (dVar1 = (*(double *)(param_3 + 0x28) - *(double *)(param_3 + 0x10)) * local_5c +
                     *(double *)(param_3 + 0x10), *param_2 <= dVar1)) && (dVar1 <= param_2[1])) {
          dVar1 = *param_4;
          uVar7 = *(undefined4 *)((char *)&dVar1 + 4);
          uVar6 = *(undefined4 *)&local_5c;
          uVar8 = *(undefined4 *)((char *)&local_5c + 4);
          if (*param_5 == '\0') {
            local_44 = local_54;
            if (*(char *)(param_4 + 1) != '\0') {
              uVar5 = *(undefined4 *)&dVar1;
              if (dVar1 <= local_5c) {
                uVar5 = uVar6;
                uVar7 = uVar8;
              }
              uVar6 = uVar5;
              uVar8 = uVar7;
              local_44 = '\x01';
            }
            pdVar4 = &local_4c;
            local_4c = (double)CONCAT44(uVar8,uVar6);
          }
          else if (*(char *)(param_4 + 1) == '\0') {
            cStack_34 = local_54;
            local_3c = local_5c;
            pdVar4 = &local_3c;
          }
          else {
            uVar5 = *(undefined4 *)&dVar1;
            if (local_5c <= dVar1) {
              uVar5 = uVar6;
              uVar7 = uVar8;
            }
            cStack_34 = '\x01';
            pdVar4 = &local_3c;
            local_3c = (double)CONCAT44(uVar7,uVar5);
          }
          uVar6 = *(undefined4 *)((int)pdVar4 + 4);
          uVar7 = *(undefined4 *)(pdVar4 + 1);
          uVar8 = *(undefined4 *)((int)pdVar4 + 0xc);
          *(undefined4 *)param_4 = *(undefined4 *)pdVar4;
          *(undefined4 *)((int)param_4 + 4) = uVar6;
          *(undefined4 *)(param_4 + 1) = uVar7;
          *(undefined4 *)((int)param_4 + 0xc) = uVar8;
        }
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
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


//==== 000081afc0 0081afc0_SpacecraftCompartmentUI__IsEntirelyPlayerControlled ====
// decompiled by BatchDecomp @ 0081afc0 name=IsEntirelyPlayerControlled conv=__thiscall body=196

/* private: bool __thiscall SpacecraftCompartmentUI__IsEntirelyPlayerControlled(void)const  */

bool __thiscall SpacecraftCompartmentUI__IsEntirelyPlayerControlled(SpacecraftCompartmentUI *this)

{
  undefined4 stack0xfffffffc;
  Faction *pFVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  Faction *pFVar6;
  undefined4 *local_1c[4];
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  util__Attribute_class_util__Darray_class_util__WeakPtr_class_SpacecraftComponent_______Get__o2((Attribute_L_util__Darray_L_util__WeakPtr_L_SpacecraftComponent_G___G___G *)
             &this->ForShips);
  local_c = 0;
  iVar4 = (*(code *)local_1c[0][3])();
  if (local_c < iVar4) {
    do {
      piVar5 = (int *)(*(code *)*local_1c[0])(&local_c);
      if ((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]);
        if (!bVar2) {
          *piVar5 = 0;
        }
      }
      iVar4 = *piVar5;
      if (*(ReferenceController **)(iVar4 + 8) != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar4 + 8));
        if (!bVar2) {
          *(undefined4 *)(iVar4 + 4) = 0;
        }
      }
      pFVar1 = *(Faction **)(*(int *)(iVar4 + 4) + 0x1e0);
      pFVar6 = TacticalManager__GetPlayerAlliance((TacticalManager *)this->_pad_0x8_2);
      if (pFVar1 != pFVar6) {
        uVar3 = 0;
        goto LAB_0081b065;
      }
      local_c = local_c + 1;
      iVar4 = (*(code *)local_1c[0][3])();
    } while (local_c < iVar4);
  }
  uVar3 = 1;
LAB_0081b065:
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_1c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar3;
}


//==== 000082a160 0082a160_ShipGroupUI__IsGroupAllied ====
// decompiled by BatchDecomp @ 0082a160 name=IsGroupAllied conv=__thiscall body=179

/* private: bool __thiscall ShipGroupUI__IsGroupAllied(void)const  */

bool __thiscall ShipGroupUI__IsGroupAllied(ShipGroupUI *this)

{
  undefined4 stack0xfffffffc;
  Faction *pFVar1;
  bool bVar2;
  undefined1 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  Faction *pFVar7;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_1c[16];
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar4 = (int *)GetShipsInGroup(this);
  local_c = 0;
  iVar5 = (**(code **)(*(int *)(uintptr_t)piVar4 + 0xc))();
  if (local_c < iVar5) {
    do {
      piVar6 = (int *)(**(code **)*piVar4)(&local_c);
      if ((ReferenceController *)piVar6[1] != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar6[1]);
        if (!bVar2) {
          *piVar6 = 0;
        }
      }
      iVar5 = *piVar6;
      if (*(ReferenceController **)(iVar5 + 8) != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar5 + 8));
        if (!bVar2) {
          *(undefined4 *)(iVar5 + 4) = 0;
        }
      }
      pFVar1 = *(Faction **)(*(int *)(iVar5 + 4) + 0x1e0);
      pFVar7 = TacticalManager__GetPlayerAlliance((TacticalManager *)this->_pad_0x8_2);
      if (pFVar1 != pFVar7) {
        uVar3 = 0;
        goto LAB_0082a1f4;
      }
      local_c = local_c + 1;
      iVar5 = (**(code **)(*(int *)(uintptr_t)piVar4 + 0xc))();
    } while (local_c < iVar5);
  }
  uVar3 = 1;
LAB_0082a1f4:
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_1c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar3;
}


//==== 0000879da0 00879da0_CameraManager__GetCameraForward ====
// decompiled by BatchDecomp @ 00879da0 name=GetCameraForward conv=__thiscall body=65

/* public: struct Vec3_L_double_G_ __thiscall CameraManager__GetCameraForward(void)const  */

util__Vec3_L_double_G_ * __thiscall
CameraManager__GetCameraForward(CameraManager *this,util__Vec3_L_double_G_ *__return_storage_ptr__)

{
util__GetCameraUp(__return_storage_ptr__,*(undefined4 *)&(this->CurrentCamera).Orientation.X,
             *(undefined4 *)((int)&(this->CurrentCamera).Orientation.X + 4));
  return __return_storage_ptr__;
}


//==== 0000879f20 00879f20_CameraManager__GetCameraRight ====
// decompiled by BatchDecomp @ 00879f20 name=GetCameraRight conv=__thiscall body=64

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: struct Vec3_L_double_G_ __thiscall CameraManager__GetCameraRight(void)const  */

util__Vec3_L_double_G_ * __thiscall
CameraManager__GetCameraRight(CameraManager *this,util__Vec3_L_double_G_ *__return_storage_ptr__)

{
util__GetCameraUp(__return_storage_ptr__,*(undefined4 *)&(this->CurrentCamera).Orientation.X,
             *(undefined4 *)((int)&(this->CurrentCamera).Orientation.X + 4));
  return __return_storage_ptr__;
}


//==== 0000879fd0 00879fd0_CameraManager__GetCameraUp ====
// decompiled by BatchDecomp @ 00879fd0 name=GetCameraUp conv=__thiscall body=64

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: struct Vec3_L_double_G_ __thiscall CameraManager__GetCameraUp(void)const  */

util__Vec3_L_double_G_ * __thiscall
CameraManager__GetCameraUp(CameraManager *this,util__Vec3_L_double_G_ *__return_storage_ptr__)

{
util__GetCameraUp(__return_storage_ptr__,*(undefined4 *)&(this->CurrentCamera).Orientation.X,
             *(undefined4 *)((int)&(this->CurrentCamera).Orientation.X + 4));
  return __return_storage_ptr__;
}


//==== 00008ae480 008ae480_Interface__HandleMouseInput ====

// decompiled by BatchDecomp @ 008ae480 name=HandleMouseInput conv=__thiscall body=613

/* public: bool __thiscall Interface__HandleMouseInput(enum MouseButton__Type,enum
   MouseInput__Type,struct InputModifiers const &,struct util__Vec2_L_double_G_) */

bool __thiscall
Interface__HandleMouseInput(Interface *this,int p1,int p2,InputModifiers *p3,undefined4 p4)

{
  undefined4 stack0xfffffffc;
  ReferenceController *pRVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  ReferenceController *this_00;
  int *piVar5;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  Interface *pIVar6;
  undefined4 *puVar7;
  Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ local_88[16];
  undefined8 *local_78;
  Interface *pIStack_74;
  undefined4 *puStack_70;
  Interface **ppIStack_6c;
  Interface *local_68;
  undefined1 *puStack_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  InputModifiers *local_58;
  undefined4 *puStack_54;
  undefined1 local_4d;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  Interface *local_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined8 local_14;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_4d = 0;
  (this->ModifiersHeldDown).Shift = p3->Shift;
  local_9 = p1 == 0;
  local_a = p1 == 2;
  *(undefined4 *)&(this->SavedMouseLocation).X = p4;
  *(undefined4 *)((int)&(this->SavedMouseLocation).X + 4) = in_stack_00000014;
  *(undefined4 *)&(this->SavedMouseLocation).Y = in_stack_00000018;
  *(undefined4 *)((int)&(this->SavedMouseLocation).Y + 4) = in_stack_0000001c;
  local_b = p1 == 1;
util__HandleMouseInput((undefined1 *)&this->UIWidgets);
util__HandleMouseInput((undefined1 *)&this->RootWidgets);
  if (((this->MouseCapture).Pointer != (undefined1 *)0x0) &&
     (pRVar1 = (ReferenceController *)(this->MouseCapture).Controller,
     pRVar1 != (ReferenceController *)0x0)) {
    bVar2 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (bVar2) {
      if (p2 == 1) {
        TriggerMouseUp(this,p3,p4,SUB41(in_stack_00000014,0));
      }
      uVar3 = 1;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return (bool)uVar3;
    }
  }
  if (p2 != 0) goto LAB_008ae6cf;
  puStack_64 = &local_9;
  puStack_60 = &local_a;
  local_14 = 0;
  puStack_5c = &local_b;
  puStack_54 = &p4;
  local_58 = p3;
  local_2c = CONCAT44(puStack_54,p3);
  local_4c = p4;
  uStack_48 = in_stack_00000014;
  uStack_44 = in_stack_00000018;
  uStack_40 = in_stack_0000001c;
  local_68 = this;
  local_3c = this;
  puStack_38 = puStack_64;
  puStack_34 = puStack_60;
  puStack_30 = puStack_5c;
util__HandleMouseInput((undefined1 *)&this->UIWidgets);
util__HandleMouseInput((undefined1 *)&this->RootWidgets);
  local_78 = &local_14;
  puStack_70 = &local_4c;
  ppIStack_6c = &local_3c;
  puVar7 = &local_24;
  local_14 = 0;
  local_24 = local_4c;
  uStack_20 = uStack_48;
  uStack_1c = uStack_44;
  uStack_18 = uStack_40;
  pIVar6 = this;
  pIStack_74 = this;
  uVar4 = GetAllVisibleRootWidgets(this);
  FUN_008abe00(local_88,uVar4,pIVar6,puVar7);
  util__Darray_class_util__WeakPtr_struct_UIWidget______Darray_class_util__WeakPtr_struct_UIWidget((Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&puStack_60);
  FUN_008a9ff0(local_88,local_78,pIStack_74,puStack_70,ppIStack_6c);
  util__Darray_class_util__WeakPtr_struct_UIWidget______Darray_class_util__WeakPtr_struct_UIWidget(local_88);
  if (((undefined1 *)local_14 == (undefined1 *)0x0) ||
     (((slice_view *)&local_14)->_4_4_ == (ReferenceController *)0x0)) {
LAB_008ae625:
    local_4d = 0;
  }
  else {
    bVar2 = util__ReferenceController__IsDataStillValid(((slice_view *)&local_14)->_4_4_);
    local_4d = 1;
    if (!bVar2) goto LAB_008ae625;
  }
  if (((this->KeyboardFocus).Pointer != (undefined1 *)0x0) &&
     (pRVar1 = (ReferenceController *)(this->KeyboardFocus).Controller,
     pRVar1 != (ReferenceController *)0x0)) {
    bVar2 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (((bVar2) &&
        (((pRVar1 = (ReferenceController *)(this->KeyboardFocus).Controller,
          pRVar1 != ((slice_view *)&local_14)->_4_4_ || ((this->KeyboardFocus).Pointer != (undefined1 *)local_14)) &&
         (pRVar1 != (ReferenceController *)0x0)))) &&
       ((this->KeyboardFocus).Pointer != (undefined1 *)0x0)) {
      bVar2 = util__ReferenceController__IsDataStillValid(pRVar1);
      if (bVar2) {
        pRVar1 = (ReferenceController *)(this->KeyboardFocus).Controller;
        piVar5 = (int *)(this->KeyboardFocus).Pointer;
        this_00 = pRVar1;
        if (pRVar1 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar1);
          this_00 = (ReferenceController *)(this->KeyboardFocus).Controller;
        }
        (this->KeyboardFocus).Pointer = (undefined1 *)0x0;
        (this->KeyboardFocus).Controller = (undefined1 *)0x0;
        if (this_00 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this_00);
        }
        if (pRVar1 != (ReferenceController *)0x0) {
          bVar2 = util__ReferenceController__IsDataStillValid(pRVar1);
          if (!bVar2) {
            piVar5 = (int *)0x0;
          }
        }
        (**(code **)(*(int *)(uintptr_t)piVar5 + 0xa8))();
        ClearAllKeysHeldDown(this);
        if (pRVar1 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar1);
        }
      }
    }
  }
  if (((slice_view *)&local_14)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_14)->_4_4_);
  }
LAB_008ae6cf:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)local_4d;
}


//==== 00008c0cc0 008c0cc0_UIEditTextBox__CommitString ====
// decompiled by BatchDecomp @ 008c0cc0 name=CommitString conv=__thiscall body=425

/* public: void __thiscall UIEditTextBox__CommitString(void) */

void __thiscall UIEditTextBox__CommitString(UIEditTextBox *this)

{
  undefined4 stack0xfffffffc;
  undefined1 **ppuVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  Str_L_char_G_ *this_00;
  char *pcStack_34;
  Str_L_char_G_ local_20;
  util__Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_14.Length = 0;
  local_14.Data = 0;
  local_14.Capacity = 0;
  pcStack_34 = (char *)0x8c0cf3;
  util__Utf32ToUtf8(&local_14,(undefined1 *)&this->SavedMouseLocation);
  if (((this->Property).Value != (undefined1 *)0x0) && (*(int *)((char *)&(this->Property) + 0xc) != 0)) {
    util__Str_char___Str_char(&local_20,&local_14);
    if (((this->Property).Value == (undefined1 *)0x0) || (*(int *)((char *)&(this->Property) + 0xc) == 0))
    {
      cVar3 = '\0';
    }
    else {
      util__Str_char___Str_char((Str_L_char_G_ *)&pcStack_34,(util__Str_L_char_G_ *)&local_20);
      cVar3 = (**(code **)(char *)&(this->Property) + 0xc)((this->Property).Value);
    }
    if (local_20.Data != (char *)0x0) {
      operator_delete__(local_20.Data);
    }
    if (cVar3 == '\0') goto LAB_008c0e49;
  }
  if (((this->OnSaveString).Callee != 0) &&
     (ppuVar1 = (this->OnSaveString).CallbackFunction, ppuVar1 != (undefined1 **)0x0)) {
    (*(code *)ppuVar1)();
  }
  if (((this->OnFinished).CallbackFunction != (undefined1 **)0x0) &&
     (this->CommitWithEachKeystroke != 0)) {
    util__Str_char___Str_char(&local_20,&local_14);
    if (((this->OnFinished).CallbackFunction != (undefined1 **)0x0) &&
       (this->CommitWithEachKeystroke != 0)) {
      util__Str_char___Str_char((Str_L_char_G_ *)&pcStack_34,(util__Str_L_char_G_ *)&local_20);
      (*(code *)this->CommitWithEachKeystroke)((this->OnFinished).CallbackFunction);
    }
    if (local_20.Data != (char *)0x0) {
      operator_delete__(local_20.Data);
    }
  }
  if (((this->OnPreChangedCallback).Callee == 0) ||
     (ppuVar1 = (this->OnPreChangedCallback).CallbackFunction, ppuVar1 == (undefined1 **)0x0)) {
    iVar4 = (this->OnPostChangedCallback).Callee;
  }
  else {
    iVar4 = (*(code *)ppuVar1)();
  }
  if (iVar4 != 0) {
    if (((this->OnPreChangedCallback).Callee == 0) ||
       (ppuVar1 = (this->OnPreChangedCallback).CallbackFunction, ppuVar1 == (undefined1 **)0x0)) {
      this_00 = (Str_L_char_G_ *)(this->OnPostChangedCallback).Callee;
    }
    else {
      this_00 = (Str_L_char_G_ *)(*(code *)ppuVar1)();
    }
    util__Str_char___operator__o8(this_00,&local_14);
  }
  if ((*(int *)&(this->MaxWidth).Getter != 0) &&
     (pcVar2 = *(code **)((int)&(this->MaxWidth).Getter + 4), pcVar2 != (code *)0x0)) {
    (*pcVar2)();
  }
LAB_008c0e49:
  if ((void *)local_14.Data != (void *)0x0) {
    operator_delete__((void *)local_14.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00008d95c0 008d95c0_BalloonPopup__Close ====
// decompiled by BatchDecomp @ 008d95c0 name=Close conv=__thiscall body=227

/* private: void __thiscall BalloonPopup__Close(void) */

void __thiscall BalloonPopup__Close(BalloonPopup *this)

{
  int iVar1;
  bool bVar2;
  ReferenceControllerRegistry *this_00;
  int *piVar3;
  ReferenceController *pRVar4;
  DataParser *p1;
  DataParser *local_1c;
  ReferenceController *local_18;
  Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *local_14;
  int local_10;
  undefined8 local_c;
  char local_5;
util__Close(&local_1c);
  pRVar4 = local_18;
  iVar1 = this->DepthTieBreakerIndex;
  if (local_18 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(local_18);
  }
  piVar3 = *(int **)(iVar1 + 0x28);
  local_14 = (Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *)(iVar1 + 0x24);
  local_c = 0;
  if (piVar3 != piVar3 + *(int *)(iVar1 + 0x2c) * 2) {
    do {
      pRVar4 = (ReferenceController *)piVar3[1];
      p1 = (DataParser *)*piVar3;
      if (pRVar4 != (ReferenceController *)0x0) {
        util__ReferenceController__AddStrongReference(pRVar4);
      }
      if ((local_18 != pRVar4) || (local_5 = '\x01', local_1c != p1)) {
        local_5 = '\0';
      }
      if ((pRVar4 != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__ReleaseStrongReference(pRVar4), bVar2)) {
        if (p1 != (DataParser *)0x0) {
          (**(code **)(p1->field_0x0 + 4))(1);
        }
        this_00 = (ReferenceControllerRegistry *)util__ReferenceControllerRegistry__Get();
        util__ReferenceControllerRegistry__PointerWasDestroyed(this_00,p1);
      }
      if (local_5 != '\0') {
        local_10 = local_c;
        ((slice_view *)&local_c)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&local_c)->_1_3_[0] | (((slice_view *)&local_c)->_1_3_[1] << 8) | (((slice_view *)&local_c)->_1_3_[2] << 16)) << 8));
        util__Darray_class_util__SharedPtr_struct_UIWidget_____SwapRemoveAt(local_14,&local_10);
        pRVar4 = local_18;
        break;
      }
      piVar3 = piVar3 + 2;
      local_c = local_c + 1;
      pRVar4 = local_18;
    } while (piVar3 != (int *)(*(int *)(local_14 + 4) + *(int *)(local_14 + 8) * 8));
  }
  if (pRVar4 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar4);
    util__ReferenceController__ReleaseWeakReference(pRVar4);
  }
  return;
}

