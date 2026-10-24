// pilot_037_fam5.c - SpacecraftTargeting/ModuleCompartment/WorldObject/CameraManager/UIWidget (127 methods)
// assembled by scripts/fam5_assemble.py (generalized from fam4) from decomp2c v2 output.
// Honest TODOs inline; fix log: reports/poison_fix/fam5_pilot037_log.txt
#include "port_prelude.h"
typedef union {
  struct {
    undefined8 _0_8_;
    undefined8 _4_8_;
    undefined8 _8_8_;
    undefined8 _12_8_;
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
  undefined1 raw[32];
} slice_view;
/* ---- externs: stub-oracle names (K&R; ret types by call site) ---- */
extern int Fleet_GetRemainingDeltaV_km_s_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int ModuleCompartment_GetBoundingSphereRadius_m_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int ModuleCompartment_IsCompartmentDamagedFromPieceDamage_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int NodeMouseOver_NodeMouseOver(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int SpacecraftTargeting_FindAllHeatSignatureTargets_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int SpacecraftTargeting_FindAllHeatSignatureTargets_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int SpacecraftTargeting_FindAllViableCapitalShipTargets_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int SpacecraftTargeting_FindAllViableShotTargets_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int SpacecraftTargeting_FindAllViableTargetsInRange_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int SpacecraftTargeting_FindAllViableTargetsInRange_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int SpacecraftTargeting_FindAllViableTargetsInRange_MemoizedFunction(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int SpacecraftTargeting_FindAllViableTargets_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int SpacecraftTargeting_FindAllViableTargets_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2(); /* K&R stub; ret by call site (honest TODO: stub is void) */

//==== 00004d19f0 004d19f0_UIWidget__GetDepth ====
// decompiled by BatchDecomp @ 004d19f0 name=GetDepth conv=__thiscall body=58

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual double __thiscall UIWidget__GetDepth(struct util__Vec2_L_double_G_)const  */

double __thiscall UIWidget__GetDepth(UIWidget *this,Vec2_L_double_G_ param_1)

{
  void *pvVar1;
  _func___cdecl_double_void_ptr *p_Var2;
  float10 extraout_ST0;
  
  pvVar1 = (this->Attributes).Depth.Getter.Callee;
  if ((pvVar1 != (void *)0x0) &&
     (p_Var2 = (this->Attributes).Depth.Getter.CallbackFunction,
     p_Var2 != (_func___cdecl_double_void_ptr *)0x0)) {
    (*p_Var2)(pvVar1);
    return (double)extraout_ST0;
  }
  return (this->Attributes).Depth.Value;
}


//==== 0000597020 00597020_ModuleCompartment__Creation ====
// decompiled by BatchDecomp @ 00597020 name=Creation conv=__thiscall body=19

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall ModuleCompartment__Creation(class TacticalManager *,class
   util::WeakPtr<class Body>) */

void __thiscall ModuleCompartment__Creation(void)

{
  ReferenceController *in_stack_0000000c;
  
  if (in_stack_0000000c != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(in_stack_0000000c);
  }
  return;
}


//==== 0000597100 00597100_ModuleCompartment__GetCurrentBoundingBox_m ====
// decompiled by BatchDecomp @ 00597100 name=GetCurrentBoundingBox_m conv=__thiscall body=42

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual struct util::AABB<struct util::Vec3<double> > __thiscall
   ModuleCompartment__GetCurrentBoundingBox_m(void)const  */

void __thiscall ModuleCompartment__GetCurrentBoundingBox_m(ModuleCompartment *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_stack_00000004;
  
  uVar1 = *(undefined4 *)((int)&(this->CachedBoundingBox_m).Lower.X + 4);
  uVar2 = *(undefined4 *)&(this->CachedBoundingBox_m).Lower.Y;
  uVar3 = *(undefined4 *)((int)&(this->CachedBoundingBox_m).Lower.Y + 4);
  *in_stack_00000004 = *(undefined4 *)&(this->CachedBoundingBox_m).Lower.X;
  in_stack_00000004[1] = uVar1;
  in_stack_00000004[2] = uVar2;
  in_stack_00000004[3] = uVar3;
  uVar1 = *(undefined4 *)((int)&(this->CachedBoundingBox_m).Lower.Z + 4);
  uVar2 = *(undefined4 *)&(this->CachedBoundingBox_m).Upper.X;
  uVar3 = *(undefined4 *)((int)&(this->CachedBoundingBox_m).Upper.X + 4);
  in_stack_00000004[4] = *(undefined4 *)&(this->CachedBoundingBox_m).Lower.Z;
  in_stack_00000004[5] = uVar1;
  in_stack_00000004[6] = uVar2;
  in_stack_00000004[7] = uVar3;
  uVar1 = *(undefined4 *)((int)&(this->CachedBoundingBox_m).Upper.Y + 4);
  uVar2 = *(undefined4 *)&(this->CachedBoundingBox_m).Upper.Z;
  uVar3 = *(undefined4 *)((int)&(this->CachedBoundingBox_m).Upper.Z + 4);
  in_stack_00000004[8] = *(undefined4 *)&(this->CachedBoundingBox_m).Upper.Y;
  in_stack_00000004[9] = uVar1;
  in_stack_00000004[10] = uVar2;
  in_stack_00000004[0xb] = uVar3;
  return;
}


//==== 0000597ea0 00597ea0_ModuleCompartment__GetWetMass_kg ====
// decompiled by BatchDecomp @ 00597ea0 name=GetWetMass_kg conv=__thiscall body=7

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual double __thiscall ModuleCompartment__GetWetMass_kg(void)const  */

double __thiscall ModuleCompartment__GetWetMass_kg(ModuleCompartment *this)

{
  float10 fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00597ea5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float10)(**(code **)(*(int *)this + 0xc))();
  return (double)fVar1;
}


//==== 0000597ef0 00597ef0_ModuleCompartment__IsOverheated ====
// decompiled by BatchDecomp @ 00597ef0 name=IsOverheated conv=__thiscall body=17

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual bool __thiscall ModuleCompartment__IsOverheated(void)const  */

bool __thiscall ModuleCompartment__IsOverheated(ModuleCompartment *this)

{
  return /*0000000000000000*/0.0 < *(double *)&(this->DamageTextures).Size;
}


//==== 000059ff20 0059ff20_ModuleCompartment__DestroyAllPieces ====
// decompiled by BatchDecomp @ 0059ff20 name=DestroyAllPieces conv=__thiscall body=93

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall ModuleCompartment__DestroyAllPieces(void) */

void __thiscall ModuleCompartment__DestroyAllPieces(ModuleCompartment *this)

{
  int iVar1;
  int *piVar2;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar1 = (*(code *)(((this->Parent).Pointer)->BodyMemoizationHandlerInstance).ResetFunctions.Data)
                    ();
  if (local_c < iVar1) {
    do {
      piVar2 = (int *)(*(code *)((this->Parent).Pointer)->_pad_0x0_0)(&local_c);
      ArmorPlate__Destroy((ArmorPlate *)(*piVar2 + 0x150));
      local_c = local_c + 1;
      iVar1 = (*(code *)(((this->Parent).Pointer)->BodyMemoizationHandlerInstance).ResetFunctions.
                        Data)();
    } while (local_c < iVar1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000059ff80 0059ff80_ModuleCompartment__EndOfSessionResolution ====
// decompiled by BatchDecomp @ 0059ff80 name=EndOfSessionResolution conv=__thiscall body=15

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual bool __thiscall ModuleCompartment__EndOfSessionResolution(void) */

bool __thiscall ModuleCompartment__EndOfSessionResolution(ModuleCompartment *this)

{
  this->IsDebris = false;
  (this->DamageTextures).Size = 0;
  (this->DamageTextures).Capacity = 0;
  return true;
}


//==== 00005a0280 005a0280_ModuleCompartment__GenerateTextures ====
// decompiled by BatchDecomp @ 005a0280 name=GenerateTextures conv=__thiscall body=407

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall ModuleCompartment__GenerateTextures(void) */

void __thiscall ModuleCompartment__GenerateTextures(ModuleCompartment *this)

{
  int iVar1;
  int iVar2;
  Vec2_L_double_G_ VVar3;
  char cVar4;
  bool bVar5;
  ArmorTextureHandler *pAVar6;
  void *pvVar7;
  ReferenceControllerRegistry *pRVar8;
  ReferenceController *this_00;
  undefined4 *puVar9;
  TextureInitOptions *pTVar10;
  undefined1 *this_01;
  ModuleCompartment *pMVar11;
  void *pvVar12;
  TextureInitOptions local_50;
  void *local_28;
  ReferenceController *local_24;
  ReferenceController *local_20;
  ModuleCompartment *local_1c;
  Vec2_L_double_G_ local_18;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_1c = this;
  cVar4 = (**(code **)(**(int **)&this->LostPower + 0x108))();
  if (((cVar4 == '\0') ||
      (Module__GetDefaultTextureSize_m(*(Module **)&this->LostPower,&local_18),
      (double)CONCAT44(((slice_view *)&local_18.X)->_4_4_,((slice_view *)&local_18.X)->_0_4_) <= /*3ff0000000000000*/1.0)) ||
     ((double)CONCAT44(((slice_view *)&local_18.Y)->_4_4_,((slice_view *)&local_18.Y)->_0_4_) <= /*3ff0000000000000*/1.0))
  goto LAB_005a0406;
  pAVar6 = (ArmorTextureHandler *)operator_new(0xe8);
  if (pAVar6 == (ArmorTextureHandler *)0x0) {
    pvVar7 = (void *)0x0;
LAB_005a0313:
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
  }
  else {
    memset(pAVar6,0,0xe8);
    pvVar7 = (void *)ArmorTextureHandler__ArmorTextureHandler(pAVar6);
    if (pvVar7 == (void *)0x0) goto LAB_005a0313;
  }
  pvVar12 = pvVar7;
  local_28 = pvVar7;
  pRVar8 = util__ReferenceControllerRegistry__Get();
  this_00 = util__ReferenceControllerRegistry__Register(pRVar8,pvVar12);
  local_24 = this_00;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_00);
  }
  this_01 = (char *)&(local_1c->Pieces) + 0x4;
  iVar1 = *(int *)((char *)&(local_1c->Pieces) + 0xc);
  local_20 = (ReferenceController *)(iVar1 + 1);
  local_1c = (ModuleCompartment *)this_01;
  util__Darray_class_util__SharedPtr_class_ArmorTextureHandler_____SetSize((Darray_L_class_util__SharedPtr_L_class_ArmorTextureHandler_G___G_ *)this_01,(int *)&local_20);
  pMVar11 = local_1c;
  bVar5 = util__Darray_class_util__SharedPtr_class_ArmorTextureHandler_____CheckSize((Darray_L_class_util__SharedPtr_L_class_ArmorTextureHandler_G___G_ *)local_1c,iVar1);
  if (bVar5) {
    iVar1 = (pMVar11->ModuleCompartmentMemoizationHandlerInstance).ResetFunctions._pad_0x0_0;
    iVar2 = pMVar11->_pad_0x0_0;
    local_20 = *(ReferenceController **)(iVar2 + -4 + iVar1 * 8);
    pAVar6 = *(ArmorTextureHandler **)(iVar2 + -8 + iVar1 * 8);
    *(void **)(iVar2 + -8 + iVar1 * 8) = pvVar7;
    *(ReferenceController **)(iVar2 + -4 + iVar1 * 8) = this_00;
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__AddStrongReference(this_00);
    }
    pMVar11 = local_1c;
    if ((local_20 != (ReferenceController *)0x0) &&
       (bVar5 = util__ReferenceController__ReleaseStrongReference(local_20), pMVar11 = local_1c,
       bVar5)) {
      if (pAVar6 != (ArmorTextureHandler *)0x0) {
        ArmorTextureHandler___scalar_deleting_destructor_(pAVar6,1);
      }
      pRVar8 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar8,pAVar6);
      pMVar11 = local_1c;
    }
  }
  util__SharedPtr_class_ArmorTextureHandler____SharedPtr_class_ArmorTextureHandler((SharedPtr_L_class_ArmorTextureHandler_G_ *)&local_28);
  puVar9 = (undefined4 *)(**(code **)(pMVar11->_pad_0x0_0 + 8))();
  bVar5 = false;
  pAVar6 = (ArmorTextureHandler *)*puVar9;
  pTVar10 = Module__GetDefaultTextureOptions(&local_50,false);
  ((slice_view *)&VVar3.X)->_4_4_ = ((slice_view *)&local_18.X)->_4_4_;
  ((slice_view *)&VVar3.X)->_0_4_ = ((slice_view *)&local_18.X)->_0_4_;
  ((slice_view *)&VVar3.Y)->_0_4_ = ((slice_view *)&local_18.Y)->_0_4_;
  ((slice_view *)&VVar3.Y)->_4_4_ = ((slice_view *)&local_18.Y)->_4_4_;
  ArmorTextureHandler__GenerateTexture(pAVar6,VVar3,pTVar10,bVar5);
LAB_005a0406:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00005a0430 005a0430_ModuleCompartment__GetBoundingSphereRadius_m_Memoize ====
// decompiled by BatchDecomp @ 005a0430 name=ModuleCompartment_GetBoundingSphereRadius_m_Memoize conv=__thiscall body=95

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall ModuleCompartment__GetBoundingSphereRadius_m_Memoize(void)const  */

void __thiscall ModuleCompartment__GetBoundingSphereRadius_m_Memoize(ModuleCompartment *this)

{
  int iVar1;
  bool bVar2;
  double dVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  undefined4 uStack_c;
  int local_8;
  
  if ((this->GetBoundingSphereRadius_m_MemoizedValue).IsValidData == false) {
    iVar1 = (this->ModuleCompartmentMemoizationHandlerInstance).ResetFunctions.Size;
    local_8 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)
               &this->ModuleCompartmentMemoizationHandlerInstance,&local_8);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->ModuleCompartmentMemoizationHandlerInstance,iVar1);
    if (bVar2) {
      (this->ModuleCompartmentMemoizationHandlerInstance).ResetFunctions.Data
      [(this->ModuleCompartmentMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_6def6ee4, Fleet_GetRemainingDeltaV_km_s_Clear);
    }
    dVar3 = Module__GetBoundingSphereRadius_m(*(Module **)&this->LostPower);
    ((slice_view *)&uStack_10)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_10)->_1_3_[0] | (((slice_view *)&uStack_10)->_1_3_[1] << 8) | (((slice_view *)&uStack_10)->_1_3_[2] << 16)) << 8));
    local_18 = *(undefined4 *)&dVar3;
    uStack_14 = *(undefined4 *)((char *)&dVar3 + 4);
    *(undefined4 *)&(this->GetBoundingSphereRadius_m_MemoizedValue).Data = local_18;
    *(undefined4 *)((int)&(this->GetBoundingSphereRadius_m_MemoizedValue).Data + 4) = uStack_14;
    *(undefined4 *)&(this->GetBoundingSphereRadius_m_MemoizedValue).IsValidData = uStack_10;
    *(undefined4 *)((char *)&(this->GetBoundingSphereRadius_m_MemoizedValue) + 0xc) = uStack_c;
  }
  return;
}


//==== 00005a0530 005a0530_ModuleCompartment__GetCollisionShells ====
extern undefined4 FUN_0059d200(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 005a0530 name=GetCollisionShells conv=__thiscall body=942

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall ModuleCompartment__GetCollisionShells(struct
   util::Quaternion<double>,class util::Darray<struct CompartmentCollisionShell> *)const  */

void __thiscall
ModuleCompartment__GetCollisionShells(ModuleCompartment *this,Quaternion_L_double_G_ param_1,
          Darray_L_struct_CompartmentCollisionShell_G_ *param_2)

{
  undefined1 auVar1[16];
  undefined1 auVar2[12];
  double dVar3;
  double dVar4;
  Vec3_L_double_G_ *pVVar5;
  undefined8 uVar7;
  undefined1 auVar6[16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 local_d8[16];
  double **ppdStack_c8;
  undefined4 uStack_c4;
  double local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double *local_20;
  Quaternion_L_double_G_ *local_1c;
  undefined4 *local_18;
  double *local_14;
  double *local_10;
  double *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pVVar5 = GetTrueOffset_m(this,(Vec3_L_double_G_ *)local_d8);
  local_58 = pVVar5->X / /*408f400000000000*/1000.0;
  local_50 = pVVar5->Y / /*408f400000000000*/1000.0;
  local_48 = pVVar5->Z / /*408f400000000000*/1000.0;
  uVar7 = 0;
  (**(code **)(this->_pad_0x0_0 + 100))(&local_40);
  local_b8 = *(undefined4 *)&(this->BaseOrientation).X;
  uStack_b4 = *(undefined4 *)((int)&(this->BaseOrientation).X + 4);
  uStack_b0 = *(undefined4 *)&(this->BaseOrientation).Y;
  uStack_ac = *(undefined4 *)((int)&(this->BaseOrientation).Y + 4);
  dVar3 = (this->BaseOrientation).Z;
  dVar4 = (this->BaseOrientation).W;
  ((slice_view *)&auVar1)->_0_8_ = (this->BaseOrientation).X;
  ((slice_view *)&auVar1)->_8_8_ = (this->BaseOrientation).Y;
  dVar9 = ((slice_view *)&auVar1)->_0_8_;
  local_a8 = *(undefined4 *)&(this->BaseOrientation).Z;
  uStack_a4 = *(undefined4 *)((int)&(this->BaseOrientation).Z + 4);
  uStack_a0 = *(undefined4 *)&(this->BaseOrientation).W;
  uStack_9c = *(undefined4 *)((int)&(this->BaseOrientation).W + 4);
  ((slice_view *)&auVar2)->_4_8_ = uVar7;
  ((slice_view *)&auVar2)->_0_4_ = ((slice_view *)&auVar1)->_4_4_;
  ((slice_view *)&auVar6)->_0_8_ = ((slice_view *)&auVar2)->_0_8_ << 0x20;
  ((slice_view *)&auVar6)->_8_4_ = ((slice_view *)&auVar1)->_8_4_;
  ((slice_view *)&auVar6)->_12_4_ = ((slice_view *)&auVar1)->_12_4_;
  dVar8 = ((slice_view *)&auVar6)->_8_8_;
  local_98 = ((param_1.X * dVar4 + param_1.Y * dVar3) - param_1.Z * dVar8) + param_1.W * dVar9;
  local_90 = (param_1.Y * dVar4 - param_1.X * dVar3) + param_1.Z * dVar9 + param_1.W * dVar8;
  local_88 = (param_1.X * dVar8 - param_1.Y * dVar9) + param_1.Z * dVar4 + param_1.W * dVar3;
  local_80 = param_1.W * dVar4 - (param_1.Y * dVar8 + param_1.X * dVar9 + param_1.Z * dVar3);
  dVar3 = (this->BaseOrientation).Z;
  dVar4 = (this->BaseOrientation).W;
  dVar8 = (this->BaseOrientation).X;
  dVar9 = (this->BaseOrientation).Y;
  dVar10 = ((param_1.X * dVar4 + param_1.Y * dVar3) - param_1.Z * dVar9) + param_1.W * dVar8;
  uStack_c4 = *(undefined4 *)((char *)&dVar10 + 4);
  dVar12 = (param_1.Y * dVar4 - param_1.X * dVar3) + param_1.Z * dVar8 + param_1.W * dVar9;
  dVar11 = (param_1.X * dVar9 - param_1.Y * dVar8) + param_1.Z * dVar4 + param_1.W * dVar3;
  local_c0 = param_1.W * dVar4 - (param_1.Y * dVar9 + param_1.X * dVar8 + param_1.Z * dVar3);
  local_78 = ((local_30 * dVar12 + local_28 * dVar10) - local_38 * dVar11) + local_40 * local_c0;
  local_70 = (local_28 * dVar12 - local_30 * dVar10) + local_40 * dVar11 + local_38 * local_c0;
  local_20 = &local_40;
  local_1c = &param_1;
  local_18 = &local_b8;
  local_14 = &local_58;
  local_10 = &local_78;
  local_c = &local_98;
  ((slice_view *)&local_d8)->_12_4_ = &local_20;
  ppdStack_c8 = &local_10;
  local_68 = (local_38 * dVar10 - local_40 * dVar12) + local_28 * dVar11 + local_30 * local_c0;
  local_60 = local_28 * local_c0 - (local_40 * dVar10 + local_38 * dVar12 + local_30 * dVar11);
  FUN_0059d200(&this->Parent,CONCAT44(ppdStack_c8,((slice_view *)&local_d8)->_12_4_),&param_2);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00005a0930 005a0930_ModuleCompartment__GetDamageTextures ====
// decompiled by BatchDecomp @ 005a0930 name=GetDamageTextures conv=__thiscall body=308

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::Darray<class util::SharedPtr<class ArmorTextureHandler> > __thiscall
   ModuleCompartment__GetDamageTextures(void)const  */

Darray_L_class_util__SharedPtr_L_class_ArmorTextureHandler_G___G_ * __thiscall
ModuleCompartment__GetDamageTextures(ModuleCompartment *this)

{
  ReferenceController *this_00;
  bool bVar1;
  uint *puVar2;
  ReferenceControllerRegistry *this_01;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  Darray_L_class_util__SharedPtr_L_class_ArmorTextureHandler_G___G_ *in_stack_00000004;
  ArmorTextureHandler *this_02;
  ReferenceController *local_8;
  
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 =
       ((void *)(0x0091f738u));
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(int *)(in_stack_00000004 + 0xc) = (this->DamageTextures)._pad_0x0_0;
  local_8 = (ReferenceController *)(**(code **)(*(int *)((char *)&(this->Pieces) + 0x4) + 0xc))();
  util__Darray_class_util__SharedPtr_class_ArmorTextureHandler_____SetSize(in_stack_00000004,(int *)&local_8);
  uVar4 = *(uint *)(in_stack_00000004 + 0xc);
  uVar3 = -(uint)((int)((ulonglong)uVar4 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 8);
  puVar2 = (uint *)operator_new__(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
  if (puVar2 == (uint *)0x0) {
    puVar2 = (uint *)0x0;
  }
  else {
    *puVar2 = uVar4;
    puVar2 = puVar2 + 1;
    puVar5 = puVar2;
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5 = puVar5 + 2;
    }
  }
  *(uint **)(in_stack_00000004 + 4) = puVar2;
  puVar5 = *(uint **)(char *)&(this->Pieces) + 0x8;
  if (puVar5 != puVar5 + *(int *)((char *)&(this->Pieces) + 0xc) * 2) {
    do {
      this_02 = (ArmorTextureHandler *)*puVar2;
      local_8 = (ReferenceController *)puVar2[1];
      *puVar2 = *puVar5;
      this_00 = (ReferenceController *)puVar5[1];
      puVar2[1] = (uint)this_00;
      if (this_00 != (ReferenceController *)0x0) {
        util__ReferenceController__AddStrongReference(this_00);
      }
      if ((local_8 != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__ReleaseStrongReference(local_8), bVar1)) {
        if (this_02 != (ArmorTextureHandler *)0x0) {
          ArmorTextureHandler___scalar_deleting_destructor_(this_02,1);
        }
        this_01 = util__ReferenceControllerRegistry__Get();
        util__ReferenceControllerRegistry__PointerWasDestroyed(this_01,this_02);
      }
      puVar5 = puVar5 + 2;
      puVar2 = puVar2 + 2;
    } while (puVar5 != (uint *)(*(int *)((char *)&(this->Pieces) + 0x8) +
                               *(int *)((char *)&(this->Pieces) + 0xc) * 8));
    return in_stack_00000004;
  }
  return in_stack_00000004;
}


//==== 00005a0a70 005a0a70_ModuleCompartment__GetLengthIndex ====
// decompiled by BatchDecomp @ 005a0a70 name=GetLengthIndex conv=__thiscall body=7

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: int __thiscall ModuleCompartment__GetLengthIndex(void)const  */

int __thiscall ModuleCompartment__GetLengthIndex(ModuleCompartment *this)

{
  return this->LengthIndex;
}


//==== 00005a0ac0 005a0ac0_ModuleCompartment__GetMaxDamageRadius_m ====
// decompiled by BatchDecomp @ 005a0ac0 name=GetMaxDamageRadius_m conv=__thiscall body=217

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall ModuleCompartment__GetMaxDamageRadius_m(void)const  */

double __thiscall ModuleCompartment__GetMaxDamageRadius_m(ModuleCompartment *this)

{
  char cVar1;
  double *pdVar2;
  int iVar3;
  float10 fVar4;
  undefined1 local_54[48];
  Vec3_L_double_G_ local_24;
  
  cVar1 = (**(code **)(**(int **)&this->LostPower + 0x78))();
  if (cVar1 == '\0') {
    fVar4 = (float10)(**(code **)(**(int **)&this->LostPower + 0xa4))();
    return (double)fVar4 * /*401921fb54442d18*/6.283185307179586 * /*3fd0000000000000*/0.25 *
           /*3fe0000000000000*/0.5;
  }
  pdVar2 = (double *)(**(code **)(*(int *)this + 0x24))(local_54);
  local_24.Z = pdVar2[5] - pdVar2[2];
  local_24.Y = pdVar2[4] - pdVar2[1];
  local_24.X = pdVar2[3] - *pdVar2;
  iVar3 = util__Vec3_double___LargestDim(&local_24);
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      return local_24.Y;
    }
    if (iVar3 == 2) {
      return local_24.Z;
    }
  }
  return local_24.X;
}


//==== 00005a0ba0 005a0ba0_ModuleCompartment__GetModuleTypeIndex ====
// decompiled by BatchDecomp @ 005a0ba0 name=GetModuleTypeIndex conv=__thiscall body=7

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: int __thiscall ModuleCompartment__GetModuleTypeIndex(void)const  */

int __thiscall ModuleCompartment__GetModuleTypeIndex(ModuleCompartment *this)

{
  return this->ModuleTypeIndex;
}


//==== 00005a0bb0 005a0bb0_ModuleCompartment__GetOffset_m ====
// decompiled by BatchDecomp @ 005a0bb0 name=GetOffset_m conv=__thiscall body=33

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct Vec3_L_double_G_ __thiscall ModuleCompartment__GetOffset_m(void)const  */

Vec3_L_double_G_ * __thiscall
ModuleCompartment__GetOffset_m(ModuleCompartment *this,Vec3_L_double_G_ *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)((int)&(this->Offset_m).X + 4);
  uVar2 = *(undefined4 *)&(this->Offset_m).Y;
  uVar3 = *(undefined4 *)((int)&(this->Offset_m).Y + 4);
  *(undefined4 *)&__return_storage_ptr__->X = *(undefined4 *)&(this->Offset_m).X;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Y = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = uVar3;
  __return_storage_ptr__->Z = (this->Offset_m).Z;
  return __return_storage_ptr__;
}


//==== 00005a0be0 005a0be0_ModuleCompartment__GetOrientation ====
// decompiled by BatchDecomp @ 005a0be0 name=GetOrientation conv=__thiscall body=31

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct util::Quaternion<double> __thiscall ModuleCompartment__GetOrientation(void)const
    */

Quaternion_L_double_G_ * __thiscall
ModuleCompartment__GetOrientation(ModuleCompartment *this,Quaternion_L_double_G_ *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)((int)&(this->BaseOrientation).X + 4);
  uVar2 = *(undefined4 *)&(this->BaseOrientation).Y;
  uVar3 = *(undefined4 *)((int)&(this->BaseOrientation).Y + 4);
  *(undefined4 *)&__return_storage_ptr__->X = *(undefined4 *)&(this->BaseOrientation).X;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Y = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = uVar3;
  uVar1 = *(undefined4 *)((int)&(this->BaseOrientation).Z + 4);
  uVar2 = *(undefined4 *)&(this->BaseOrientation).W;
  uVar3 = *(undefined4 *)((int)&(this->BaseOrientation).W + 4);
  *(undefined4 *)&__return_storage_ptr__->Z = *(undefined4 *)&(this->BaseOrientation).Z;
  *(undefined4 *)((int)&__return_storage_ptr__->Z + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->W = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->W + 4) = uVar3;
  return __return_storage_ptr__;
}


//==== 00005a0c40 005a0c40_ModuleCompartment__GetTargetableCollisionShellOffsets_km ====
extern undefined4 FUN_0059dbc0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 005a0c40 name=GetTargetableCollisionShellOffsets_km conv=__thiscall body=327

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Darray<struct util::Vec3<double> > __thiscall
   ModuleCompartment__GetTargetableCollisionShellOffsets_km(struct util::Quaternion<double>)const
    */

void __thiscall
ModuleCompartment__GetTargetableCollisionShellOffsets_km(ModuleCompartment *this,Quaternion_L_double_G_ param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  Vec3_L_double_G_ *pVVar4;
  uint uVar5;
  void *pvVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  Vec3_L_double_G_ local_68;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  double local_30;
  double local_28;
  double local_20;
  undefined1 *local_18;
  undefined4 *local_14;
  double *local_10;
  undefined1 **local_c;
  uint local_8;
  
  puVar3 = ((slice_view *)&param_1.X)->_0_4_;
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pVVar4 = GetTrueOffset_m(this,&local_68);
  local_18 = (undefined1 *)((int)&param_1.X + 4);
  local_30 = pVVar4->X / /*408f400000000000*/1000.0;
  local_14 = &local_50;
  local_10 = &local_30;
  local_c = &local_18;
  local_28 = pVVar4->Y / /*408f400000000000*/1000.0;
  local_20 = pVVar4->Z / /*408f400000000000*/1000.0;
  local_50 = *(undefined4 *)&(this->BaseOrientation).X;
  uStack_4c = *(undefined4 *)((int)&(this->BaseOrientation).X + 4);
  uStack_48 = *(undefined4 *)&(this->BaseOrientation).Y;
  uStack_44 = *(undefined4 *)((int)&(this->BaseOrientation).Y + 4);
  local_40 = *(undefined4 *)&(this->BaseOrientation).Z;
  uStack_3c = *(undefined4 *)((int)&(this->BaseOrientation).Z + 4);
  uStack_38 = *(undefined4 *)&(this->BaseOrientation).W;
  uStack_34 = *(undefined4 *)((int)&(this->BaseOrientation).W + 4);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  uVar5 = (*(code *)(((this->Parent).Pointer)->BodyMemoizationHandlerInstance).ResetFunctions.Data)
                    ();
  *puVar3 = ((void *)(0x0091a900u));
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = uVar5;
  if (((int)uVar5 < 0) || (0x3fffffff < (int)uVar5)) {
    puVar3[3] = 0;
  }
  else if (0 < (int)uVar5) {
    pvVar6 = operator_new__(-(uint)((int)((ulonglong)uVar5 * 0x18 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar5 * 0x18));
    if (pvVar6 == (void *)0x0) {
      pvVar6 = (void *)0x0;
    }
    else if (uVar5 != 0) {
      puVar7 = (undefined8 *)((int)pvVar6 + 0x10);
      do {
        *puVar7 = 0;
        *(undefined4 *)(puVar7 + -2) = 0;
        *(undefined4 *)((int)puVar7 + -0xc) = 0;
        *(undefined4 *)(puVar7 + -1) = 0;
        *(undefined4 *)((int)puVar7 + -4) = 0;
        uVar5 = uVar5 - 1;
        puVar7 = puVar7 + 3;
      } while (uVar5 != 0);
    }
    iVar9 = 0;
    puVar3[1] = pvVar6;
    if (0 < (int)puVar3[3]) {
      iVar8 = 0;
      do {
        iVar2 = puVar3[1];
        iVar8 = iVar8 + 0x18;
        iVar9 = iVar9 + 1;
        puVar1 = (undefined4 *)(iVar2 + -0x18 + iVar8);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        *(undefined8 *)(iVar2 + -8 + iVar8) = 0;
      } while (iVar9 < (int)puVar3[3]);
    }
  }
  FUN_0059dbc0(&this->Parent,&local_c,puVar3);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00005a0d90 005a0d90_ModuleCompartment__GetTrueOffset_m ====
// decompiled by BatchDecomp @ 005a0d90 name=GetTrueOffset_m conv=__thiscall body=157

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct Vec3_L_double_G_ __thiscall ModuleCompartment__GetTrueOffset_m(void)const  */

Vec3_L_double_G_ * __thiscall
ModuleCompartment__GetTrueOffset_m(ModuleCompartment *this,Vec3_L_double_G_ *__return_storage_ptr__)

{
  ReferenceController *pRVar1;
  Body *this_00;
  undefined1 auVar2[16];
  double dVar3;
  bool bVar4;
  double dVar5;
  
  pRVar1 = *(ReferenceController **)((int)&this->HeatStored_J + 4);
  if (pRVar1 != (ReferenceController *)0x0) {
    bVar4 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (!bVar4) {
      *(undefined4 *)&this->HeatStored_J = 0;
    }
  }
  this_00 = *(Body **)&this->HeatStored_J;
  Body__GetSpacecraftComponent_Memoize(this_00);
  if ((this_00->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pRVar1 = (this_00->GetSpacecraftComponent_MemoizedValue).Data.Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    bVar4 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (!bVar4) {
      (this_00->GetSpacecraftComponent_MemoizedValue).Data.Pointer = (SpacecraftComponent *)0x0;
    }
  }
  dVar5 = SpacecraftComponent__GetCenterZDelta_m((this_00->GetSpacecraftComponent_MemoizedValue).Data.Pointer);
  dVar3 = (this->Offset_m).Y + 0.0;
  ((slice_view *)&auVar2)->_8_4_ = *(undefined4 *)&dVar3;
  ((slice_view *)&auVar2)->_0_8_ = (this->Offset_m).X + 0.0;
  ((slice_view *)&auVar2)->_12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  __return_storage_ptr__->X = (double)((slice_view *)&auVar2)->_0_8_;
  __return_storage_ptr__->Y = (double)((slice_view *)&auVar2)->_8_8_;
  __return_storage_ptr__->Z = (this->Offset_m).Z + dVar5;
  return __return_storage_ptr__;
}


//==== 00005a0e30 005a0e30_ModuleCompartment__HasRadiatorsCoolingIt ====
// decompiled by BatchDecomp @ 005a0e30 name=HasRadiatorsCoolingIt conv=__thiscall body=207

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall ModuleCompartment__HasRadiatorsCoolingIt(void)const  */

bool __thiscall ModuleCompartment__HasRadiatorsCoolingIt(ModuleCompartment *this)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar4 = (**(code **)(*(int *)&this->TargetingCompartments + 0xc))();
  if (local_c < iVar4) {
    do {
      piVar5 = (int *)(**(code **)*(int *)&this->TargetingCompartments)(&local_c);
      if ((*piVar5 != 0) && ((ReferenceController *)piVar5[1] != (ReferenceController *)0x0)) {
        bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]);
        if (bVar1) {
          if ((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) {
            bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]);
            if (!bVar1) {
              *piVar5 = 0;
            }
          }
          iVar4 = (**(code **)(**(int **)(*piVar5 + 0x38) + 0x130))();
          if (iVar4 == 4) {
            if ((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) {
              bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]);
              if (!bVar1) {
                *piVar5 = 0;
              }
            }
            cVar2 = (**(code **)(*(int *)*piVar5 + 0x18))();
            if (cVar2 == '\0') {
              uVar3 = 1;
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return (bool)uVar3;
            }
          }
        }
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(*(int *)&this->TargetingCompartments + 0xc))();
    } while (local_c < iVar4);
  }
  uVar3 = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar3;
}


//==== 00005a0f00 005a0f00_ModuleCompartment__InitialSetup ====
// decompiled by BatchDecomp @ 005a0f00 name=InitialSetup conv=__thiscall body=149

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall ModuleCompartment__InitialSetup(class CraftBlueprint const
   *,struct ModulePlacer const &,class Module const *,int,int,struct Vec3_L_double_G_,struct
   util::Quaternion<double>) */

void __thiscall
ModuleCompartment__InitialSetup(ModuleCompartment *this,CraftBlueprint *param_1,ModulePlacer *param_2,Module *param_3,
          int param_4,int param_5,Vec3_L_double_G_ param_6,Quaternion_L_double_G_ param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  float10 fVar5;
  undefined4 in_stack_00000018;
  undefined1 local_34[48];
  
  *(undefined4 *)&(this->Offset_m).X = in_stack_00000018;
  *(undefined4 *)((int)&(this->Offset_m).X + 4) = ((slice_view *)&param_6.X)->_0_4_;
  *(undefined4 *)&(this->Offset_m).Y = ((slice_view *)&param_6.X)->_4_4_;
  *(undefined4 *)((int)&(this->Offset_m).Y + 4) = ((slice_view *)&param_6.Y)->_0_4_;
  this->LengthIndex = param_4;
  (this->Offset_m).Z = (double)((slice_view *)&param_6)->_12_8_;
  this->ModuleTypeIndex = param_5;
  *(Module **)&this->LostPower = param_3;
  *(undefined4 *)&(this->BaseOrientation).X = ((slice_view *)&param_6.Z)->_4_4_;
  *(undefined4 *)((int)&(this->BaseOrientation).X + 4) = ((slice_view *)&param_7.X)->_0_4_;
  *(undefined4 *)&(this->BaseOrientation).Y = ((slice_view *)&param_7.X)->_4_4_;
  *(undefined4 *)((int)&(this->BaseOrientation).Y + 4) = ((slice_view *)&param_7.Y)->_0_4_;
  *(undefined4 *)&(this->BaseOrientation).Z = ((slice_view *)&param_7.Y)->_4_4_;
  *(undefined4 *)((int)&(this->BaseOrientation).Z + 4) = ((slice_view *)&param_7.Z)->_0_4_;
  *(undefined4 *)&(this->BaseOrientation).W = ((slice_view *)&param_7.Z)->_4_4_;
  *(undefined4 *)((int)&(this->BaseOrientation).W + 4) = ((slice_view *)&param_7.W)->_0_4_;
  fVar5 = (float10)(**(code **)(*(int *)param_3 + 0x88))();
  this->CachedUnchangingMass_kg = (double)fVar5;
  puVar4 = (undefined4 *)(**(code **)(**(int **)&this->LostPower + 0xac))(local_34);
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *(undefined4 *)&(this->CachedBoundingBox_m).Lower.X = *puVar4;
  *(undefined4 *)((int)&(this->CachedBoundingBox_m).Lower.X + 4) = uVar1;
  *(undefined4 *)&(this->CachedBoundingBox_m).Lower.Y = uVar2;
  *(undefined4 *)((int)&(this->CachedBoundingBox_m).Lower.Y + 4) = uVar3;
  uVar1 = puVar4[5];
  uVar2 = puVar4[6];
  uVar3 = puVar4[7];
  *(undefined4 *)&(this->CachedBoundingBox_m).Lower.Z = puVar4[4];
  *(undefined4 *)((int)&(this->CachedBoundingBox_m).Lower.Z + 4) = uVar1;
  *(undefined4 *)&(this->CachedBoundingBox_m).Upper.X = uVar2;
  *(undefined4 *)((int)&(this->CachedBoundingBox_m).Upper.X + 4) = uVar3;
  uVar1 = puVar4[9];
  uVar2 = puVar4[10];
  uVar3 = puVar4[0xb];
  *(undefined4 *)&(this->CachedBoundingBox_m).Upper.Y = puVar4[8];
  *(undefined4 *)((int)&(this->CachedBoundingBox_m).Upper.Y + 4) = uVar1;
  *(undefined4 *)&(this->CachedBoundingBox_m).Upper.Z = uVar2;
  *(undefined4 *)((int)&(this->CachedBoundingBox_m).Upper.Z + 4) = uVar3;
  return;
}


//==== 00005a0fa0 005a0fa0_ModuleCompartment__IsCompartmentDamagedFromPieceDamage_Clear ====
// decompiled by BatchDecomp @ 005a0fa0 name=ModuleCompartment_IsCompartmentDamagedFromPieceDamage_Clear conv=__thiscall body=7

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall ModuleCompartment__IsCompartmentDamagedFromPieceDamage_Clear(void)const
    */

void __thiscall
ModuleCompartment__IsCompartmentDamagedFromPieceDamage_Clear(ModuleCompartment *this)

{
  (this->IsCompartmentDamagedFromPieceDamage_MemoizedValue).Data = false;
  (this->IsCompartmentDamagedFromPieceDamage_MemoizedValue).IsValidData = false;
  return;
}


//==== 00005a1bb0 005a1bb0_ModuleCompartment__ResetCooling ====
// decompiled by BatchDecomp @ 005a1bb0 name=ResetCooling conv=__thiscall body=87

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall ModuleCompartment__ResetCooling(void) */

void __thiscall ModuleCompartment__ResetCooling(ModuleCompartment *this)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  puVar1 = (char *)&(this->Pieces) + 0x4;
  local_c = 0;
  iVar2 = (**(code **)(*(int *)((char *)&(this->Pieces) + 0x4) + 0xc))();
  if (local_c < iVar2) {
    do {
      puVar3 = (undefined4 *)(*(code *)**(undefined4 **)puVar1)(&local_c);
      ArmorTextureHandler__ResetCooledFlag((ArmorTextureHandler *)*puVar3);
      local_c = local_c + 1;
      iVar2 = (**(code **)(*(int *)puVar1 + 0xc))();
    } while (local_c < iVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00005a21f0 005a21f0_ModuleCompartment__TickTextures ====
// decompiled by BatchDecomp @ 005a21f0 name=TickTextures conv=__thiscall body=128

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall ModuleCompartment__TickTextures(double,bool) */

void __thiscall ModuleCompartment__TickTextures(ModuleCompartment *this,double param_1,bool param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  puVar1 = (char *)&(this->Pieces) + 0x4;
  local_c = 0;
  iVar2 = (**(code **)(*(int *)((char *)&(this->Pieces) + 0x4) + 0xc))();
  if (local_c < iVar2) {
    do {
      puVar3 = (undefined4 *)(*(code *)**(undefined4 **)puVar1)(&local_c);
      if (param_2) {
        ArmorTextureHandler__CoolTexture((ArmorTextureHandler *)*puVar3,param_1);
      }
      ArmorTextureHandler__ResolveDamageScars((ArmorTextureHandler *)*puVar3,(CraftBlueprintArmor *)0x0);
      local_c = local_c + 1;
      iVar2 = (**(code **)(*(int *)puVar1 + 0xc))();
    } while (local_c < iVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00006d6110 006d6110_SpacecraftTargeting__IsAnEnemyTargetPriority ====
// decompiled by BatchDecomp @ 006d6110 name=IsAnEnemyTargetPriority conv=__thiscall body=7

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall SpacecraftTargeting__IsAnEnemyTargetPriority(void)const  */

bool __thiscall SpacecraftTargeting__IsAnEnemyTargetPriority(SpacecraftTargeting *this)

{
  return (bool)(char)this[1]._pad_0x0_0;
}


//==== 00006ecfb0 006ecfb0_WorldObject___WorldObject ====
// decompiled by BatchDecomp @ 006ecfb0 name=~WorldObject conv=__thiscall body=24

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: __thiscall WorldObject_WorldObject(void) */

void __thiscall WorldObject_WorldObject(WorldObject *this)

{
  int *piVar1;
  ReferenceController *this_00;
  
  NodeMouseOver_NodeMouseOver(&this->Node);
  this_00 = (this->Object).Controller;
  if (this_00 == (ReferenceController *)0x0) {
    return;
  }
  piVar1 = &this_00->WeakReferenceCount;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.cpp"
                    ,0x15,"WeakReferenceCount >= 0",(char *)0x0);
    DebugBreak();
  }
  util__ReferenceController__CheckForWeakRelease(this_00);
  return;
}


//==== 000075b290 0075b290_WorldObject__WorldObject ====
#undef t /* auto(v2): compat 僵尸宏撞成员名 */

// decompiled by BatchDecomp @ 0075b290 name=WorldObject conv=__thiscall body=83

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: __thiscall WorldObject__WorldObject(class util::WeakPtr<class CelestialObject>,int) */

WorldObject * __thiscall
WorldObject__WorldObject(WorldObject *this,Actor *param_2,ReferenceController *param_3,int param_4)

{
  (this->Object).Pointer = param_2;
  (this->Object).Controller = param_3;
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_3);
  }
  this->LPointID = param_4;
  ItineraryNode__ItineraryNode(&(this->Node).LastNode);
  ItineraryNode__ItineraryNode(&(this->Node).NextNode);
  (this->Node).t = 0.0;
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  return this;
}


//==== 000075e660 0075e660_WorldObject___vector_deleting_destructor_ ====
#undef t /* auto(v2): compat 僵尸宏撞成员名 */

// decompiled by BatchDecomp @ 0075e660 name=`vector_deleting_destructor' conv=__thiscall body=147

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void * __thiscall WorldObject::`vector deleting destructor'(unsigned int) */

void * __thiscall WorldObject___vector_deleting_destructor_(WorldObject *this,uint param_1)

{
  int *piVar1;
  ReferenceController *pRVar2;
  int iVar3;
  ReferenceController **ppRVar4;
  
  if ((param_1 & 2) != 0) {
    piVar1 = (int *)((int)&this[-1].Node.t + 4);
    iVar3 = *piVar1;
    if (iVar3 != 0) {
      ppRVar4 = &this[iVar3].Object.Controller;
      do {
        iVar3 = iVar3 + -1;
        NodeMouseOver_NodeMouseOver((NodeMouseOver *)(ppRVar4 + -0xab));
        pRVar2 = ppRVar4[-0xae];
        if (pRVar2 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar2);
        }
        ppRVar4 = ppRVar4 + -0xae;
      } while (iVar3 != 0);
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(piVar1,*piVar1 * 0x2b8 + 4);
    }
    return piVar1;
  }
  NodeMouseOver_NodeMouseOver(&this->Node);
  pRVar2 = (this->Object).Controller;
  if (pRVar2 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar2);
  }
  if ((param_1 & 1) != 0) {
    operator_delete(this,0x2b8);
  }
  return this;
}


//==== 0000772a40 00772a40_WorldObject__AsCelestialObject ====
// decompiled by BatchDecomp @ 00772a40 name=AsCelestialObject conv=__thiscall body=85

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::WeakPtr<class CelestialObject> __thiscall
   WorldObject__AsCelestialObject(void)const  */

undefined4 * __thiscall WorldObject__AsCelestialObject(WorldObject *this)

{
  ReferenceController *this_00;
  bool bVar1;
  undefined4 *in_stack_00000004;
  
  bVar1 = IsCelestialObject(this);
  if (!bVar1) {
    bVar1 = IsLPoint(this);
    if (!bVar1) {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\strategic\\ui\\dropdownui.cpp",0x2c,
                      "IsCelestialObject() || IsLPoint()",(char *)0x0);
      DebugBreak();
    }
  }
  *in_stack_00000004 = (this->Object).Pointer;
  this_00 = (this->Object).Controller;
  in_stack_00000004[1] = this_00;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
  }
  return in_stack_00000004;
}


//==== 0000772aa0 00772aa0_WorldObject__AsFleet ====
// decompiled by BatchDecomp @ 00772aa0 name=AsFleet conv=__thiscall body=74

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::WeakPtr<class Fleet> __thiscall WorldObject__AsFleet(void)const  */

undefined4 * __thiscall WorldObject__AsFleet(WorldObject *this)

{
  ReferenceController *this_00;
  bool bVar1;
  undefined4 *in_stack_00000004;
  
  bVar1 = IsFleet(this);
  if (!bVar1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\strategic\\ui\\dropdownui.cpp",0x26,
                    "IsFleet()",(char *)0x0);
    DebugBreak();
  }
  *in_stack_00000004 = (this->Object).Pointer;
  this_00 = (this->Object).Controller;
  in_stack_00000004[1] = this_00;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
  }
  return in_stack_00000004;
}


//==== 0000772af0 00772af0_WorldObject__AsItineraryPoint ====
#undef t /* auto(v2): compat 僵尸宏撞成员名 */

// decompiled by BatchDecomp @ 00772af0 name=AsItineraryPoint conv=__thiscall body=117

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct NodeMouseOver __thiscall WorldObject__AsItineraryPoint(void)const  */

NodeMouseOver * __thiscall
WorldObject__AsItineraryPoint(WorldObject *this,NodeMouseOver *__return_storage_ptr__)

{
  bool bVar1;
  
  bVar1 = ItineraryNode__IsValid(&(this->Node).LastNode);
  if (bVar1) {
    bVar1 = ItineraryNode__IsValid(&(this->Node).NextNode);
    if (bVar1) goto LAB_00772b30;
  }
  util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\strategic\\ui\\dropdownui.cpp",0x32,
                  "IsItineraryPoint()",(char *)0x0);
  DebugBreak();
LAB_00772b30:
  ItineraryNode__ItineraryNode(&__return_storage_ptr__->LastNode,&(this->Node).LastNode);
  ItineraryNode__ItineraryNode(&__return_storage_ptr__->NextNode,&(this->Node).NextNode);
  __return_storage_ptr__->t = (this->Node).t;
  return __return_storage_ptr__;
}


//==== 0000776c30 00776c30_WorldObject__GetIconSize ====
// decompiled by BatchDecomp @ 00776c30 name=GetIconSize conv=__thiscall body=445

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall WorldObject__GetIconSize(void)const  */

double __thiscall WorldObject__GetIconSize(WorldObject *this)

{
  ReferenceController *pRVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  Actor *pAVar5;
  double dVar6;
  undefined8 local_1c;
  ReferenceController *pRStack_18;
  undefined8 local_14;
  ReferenceController *pRStack_10;
  
  bVar2 = IsFleet(this);
  if (bVar2) {
    bVar2 = IsFleet(this);
    if (!bVar2) {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\strategic\\ui\\dropdownui.cpp",0x26,
                      "IsFleet()",(char *)0x0);
      DebugBreak();
    }
    pRVar1 = (this->Object).Controller;
    if (pRVar1 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar1);
      util__ReferenceController__IsDataStillValid(pRVar1);
    }
    iVar3 = Fleet__GetUIIconSize();
    dVar6 = (double)iVar3;
    if (pRVar1 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(pRVar1);
      return dVar6;
    }
  }
  else {
    bVar2 = IsCelestialObject(this);
    if (bVar2) {
      puVar4 = (undefined4 *)AsCelestialObject(this);
      if ((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]);
        if (!bVar2) {
          *puVar4 = 0;
        }
      }
      dVar6 = CelestialObject__GetUIPixelRadius((CelestialObject *)*puVar4);
      if (pRStack_10 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(pRStack_10);
        return dVar6;
      }
    }
    else {
      bVar2 = IsLPoint(this);
      if (bVar2) {
        puVar4 = (undefined4 *)AsCelestialObject(this);
        if ((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) {
          bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]);
          if (!bVar2) {
            *puVar4 = 0;
          }
        }
        dVar6 = CelestialObject__GetLPointUIPixelRadius();
        if (pRStack_18 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRStack_18);
          return dVar6;
        }
      }
      else {
        bVar2 = ItineraryNode__IsValid(&(this->Node).LastNode);
        if (bVar2) {
          bVar2 = ItineraryNode__IsValid(&(this->Node).NextNode);
          if (bVar2) {
            dVar6 = ItineraryNodeUI__GetNodeUIVisualSize();
            return dVar6;
          }
        }
        bVar2 = IsLevelEditorBody(this);
        if (bVar2) {
          pAVar5 = (this->Object).Pointer;
          pRVar1 = (this->Object).Controller;
          if (pRVar1 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(pRVar1);
            bVar2 = util__ReferenceController__IsDataStillValid(pRVar1);
            if (!bVar2) {
              pAVar5 = (Actor *)0x0;
            }
          }
          if (pAVar5[2].Parent == (GameManager *)0x0) {
            iVar3 = Fleet__GetUIIconSize();
            dVar6 = (double)iVar3;
          }
          else {
            if (pRVar1 != (ReferenceController *)0x0) {
              bVar2 = util__ReferenceController__IsDataStillValid(pRVar1);
              if (!bVar2) {
                pAVar5 = (Actor *)0x0;
              }
            }
            dVar6 = CelestialBody__GetUIPixelRadius((CelestialBody *)pAVar5[2].Parent);
          }
          if (pRVar1 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(pRVar1);
          }
          return dVar6;
        }
        dVar6 = 0.0;
      }
    }
  }
  return dVar6;
}


//==== 0000777fb0 00777fb0_WorldObject__GetWorldRadius_km ====
// decompiled by BatchDecomp @ 00777fb0 name=GetWorldRadius_km conv=__thiscall body=252

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall WorldObject__GetWorldRadius_km(void)const  */

double __thiscall WorldObject__GetWorldRadius_km(WorldObject *this)

{
  ReferenceController *pRVar1;
  bool bVar2;
  Actor *pAVar3;
  float10 fVar4;
  double dVar5;
  
  bVar2 = IsCelestialObject(this);
  if (bVar2) {
    bVar2 = IsCelestialObject(this);
    if (!bVar2) {
      bVar2 = IsLPoint(this);
      if (!bVar2) {
        util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\strategic\\ui\\dropdownui.cpp",0x2c
                        ,"IsCelestialObject() || IsLPoint()",(char *)0x0);
        DebugBreak();
      }
    }
    pAVar3 = (this->Object).Pointer;
    pRVar1 = (this->Object).Controller;
    if (pRVar1 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar1);
      if (pRVar1 != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid(pRVar1);
        if (!bVar2) {
          pAVar3 = (Actor *)0x0;
        }
      }
    }
    fVar4 = (float10)(**(code **)(*(int *)pAVar3 + 0x44))();
    if (pRVar1 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(pRVar1);
      return (double)fVar4;
    }
  }
  else {
    bVar2 = IsLevelEditorBody(this);
    if (bVar2) {
      pAVar3 = (this->Object).Pointer;
      pRVar1 = (this->Object).Controller;
      if (pRVar1 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar1);
        bVar2 = util__ReferenceController__IsDataStillValid(pRVar1);
        if (!bVar2) {
          pAVar3 = (Actor *)0x0;
        }
      }
      if (pAVar3[2].Parent == (GameManager *)0x0) {
        dVar5 = 0.0;
      }
      else {
        if (pRVar1 != (ReferenceController *)0x0) {
          bVar2 = util__ReferenceController__IsDataStillValid(pRVar1);
          if (!bVar2) {
            pAVar3 = (Actor *)0x0;
          }
        }
        dVar5 = CelestialBody__GetRadius_km((CelestialBody *)pAVar3[2].Parent);
      }
      if (pRVar1 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(pRVar1);
      }
      return dVar5;
    }
    fVar4 = (float10)0;
  }
  return (double)fVar4;
}


//==== 00007e0ff0 007e0ff0_SpacecraftTargeting__AreAllCompartmentsEnemyTargeted ====
// decompiled by BatchDecomp @ 007e0ff0 name=AreAllCompartmentsEnemyTargeted conv=__thiscall body=162

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall SpacecraftTargeting__AreAllCompartmentsEnemyTargeted(class
   util::Darray<class util::WeakPtr<struct ModuleCompartment> > const &)const  */

bool __thiscall
SpacecraftTargeting__AreAllCompartmentsEnemyTargeted(SpacecraftTargeting *this,Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar3 = (**(code **)(*(int *)param_1 + 0xc))();
  if (local_c < iVar3) {
    do {
      piVar4 = (int *)(*(code *)**(undefined4 **)param_1)(&local_c);
      piVar5 = (int *)(this->EnemyTargetedCompartments).Size;
      piVar1 = piVar5 + (this->EnemyTargetedCompartments).Capacity * 2;
      if (piVar5 == piVar1) {
LAB_007e1054:
        uVar2 = 0;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return (bool)uVar2;
      }
      while ((piVar4[1] != piVar5[1] || (*piVar4 != *piVar5))) {
        piVar5 = piVar5 + 2;
        if (piVar5 == piVar1) goto LAB_007e1054;
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*(int *)param_1 + 0xc))();
    } while (local_c < iVar3);
  }
  uVar2 = 1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}


//==== 00007e10a0 007e10a0_SpacecraftTargeting__AreAnyCompartmentsEnemyTargeted ====
// decompiled by BatchDecomp @ 007e10a0 name=AreAnyCompartmentsEnemyTargeted conv=__thiscall body=162

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall SpacecraftTargeting__AreAnyCompartmentsEnemyTargeted(class
   util::Darray<class util::WeakPtr<struct ModuleCompartment> > const &)const  */

bool __thiscall
SpacecraftTargeting__AreAnyCompartmentsEnemyTargeted(SpacecraftTargeting *this,Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar3 = (**(code **)(*(int *)param_1 + 0xc))();
  if (local_c < iVar3) {
    do {
      piVar4 = (int *)(*(code *)**(undefined4 **)param_1)(&local_c);
      piVar5 = (int *)(this->EnemyTargetedCompartments).Size;
      piVar1 = piVar5 + (this->EnemyTargetedCompartments).Capacity * 2;
      if (piVar5 != piVar1) {
        do {
          if ((piVar4[1] == piVar5[1]) && (*piVar4 == *piVar5)) {
            uVar2 = 1;
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return (bool)uVar2;
          }
          piVar5 = piVar5 + 2;
        } while (piVar5 != piVar1);
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*(int *)param_1 + 0xc))();
    } while (local_c < iVar3);
  }
  uVar2 = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}


//==== 00007e14d0 007e14d0_SpacecraftTargeting__CopyFrom ====
// decompiled by BatchDecomp @ 007e14d0 name=CopyFrom conv=__thiscall body=39

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftTargeting__CopyFrom(struct SpacecraftTargeting const &) */

void __thiscall
SpacecraftTargeting__CopyFrom(SpacecraftTargeting *this,SpacecraftTargeting *param_1)

{
  *(char *)&this[1]._pad_0x0_0 = (char)param_1[1]._pad_0x0_0;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &(this->EnemyTargetedCompartments).Data,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &(param_1->EnemyTargetedCompartments).Data);
  return;
}


//==== 00007e1570 007e1570_SpacecraftTargeting__DememoizeBodies ====
// decompiled by BatchDecomp @ 007e1570 name=DememoizeBodies conv=__thiscall body=276

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftTargeting__DememoizeBodies(void) */

void __thiscall SpacecraftTargeting__DememoizeBodies(SpacecraftTargeting *this)

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
             &this->FindAllViableTargets_MemoizedValue,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_14);
  (this->FindAllViableTargets_MemoizedValue).IsValidData = false;
  local_14 = ((void *)(0x0091e0b8u));
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &this->FindAllViableCapitalShipTargets_MemoizedValue,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_14);
  (this->FindAllViableCapitalShipTargets_MemoizedValue).IsValidData = false;
  local_14 = ((void *)(0x0091e0b8u));
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &this->FindAllViableShotTargets_MemoizedValue,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_14);
  (this->FindAllViableShotTargets_MemoizedValue).IsValidData = false;
  local_14 = ((void *)(0x0091e0b8u));
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &this->FindAllViableTargetsInRange_MemoizedValue,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_14);
  (this->FindAllViableTargetsInRange_MemoizedValue).IsValidData = false;
  local_14 = ((void *)(0x0091e0b8u));
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &this->FindAllHeatSignatureTargets_MemoizedValue,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_14);
  (this->FindAllHeatSignatureTargets_MemoizedValue).IsValidData = false;
  return;
}


//==== 00007e1720 007e1720_SpacecraftTargeting__FindAllHeatSignatureTargets_Clear ====
// decompiled by BatchDecomp @ 007e1720 name=SpacecraftTargeting_FindAllHeatSignatureTargets_Clear conv=__thiscall body=66

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftTargeting__FindAllHeatSignatureTargets_Clear(void)const  */

void __thiscall SpacecraftTargeting__FindAllHeatSignatureTargets_Clear(SpacecraftTargeting *this)

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
             &this->FindAllHeatSignatureTargets_MemoizedValue,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_14);
  (this->FindAllHeatSignatureTargets_MemoizedValue).IsValidData = false;
  return;
}


//==== 00007e1770 007e1770_SpacecraftTargeting__FindAllHeatSignatureTargets_Memoize ====
extern undefined4 FUN_007e0b00(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007e1770 name=SpacecraftTargeting_FindAllHeatSignatureTargets_Memoize conv=__thiscall body=418

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftTargeting__FindAllHeatSignatureTargets_Memoize(void)const  */

void __thiscall SpacecraftTargeting__FindAllHeatSignatureTargets_Memoize(SpacecraftTargeting *this)

{
  SpacecraftComponent *pSVar1;
  ReferenceController *pRVar2;
  ReferenceController *this_00;
  bool bVar3;
  TacticalManager *this_01;
  int iVar4;
  undefined4 uVar5;
  Faction *pFVar6;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_54[16];
  bool local_44;
  int local_40;
  undefined4 local_3c;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  ReferenceController *local_28;
  char local_24;
  SpacecraftTargeting *local_20;
  undefined4 *local_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  char *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((this->FindAllHeatSignatureTargets_MemoizedValue).IsValidData == false) {
    iVar4 = (this->SpacecraftTargetingMemoizationHandlerInstance).ResetFunctions.Size;
    local_c = (char *)(iVar4 + 1);
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)
               &this->SpacecraftTargetingMemoizationHandlerInstance,(int *)&local_c);
    bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->SpacecraftTargetingMemoizationHandlerInstance,iVar4);
    if (bVar3) {
      (this->SpacecraftTargetingMemoizationHandlerInstance).ResetFunctions.Data
      [(this->SpacecraftTargetingMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_2f5784b3, SpacecraftTargeting_FindAllHeatSignatureTargets_Clear);
    }
    pSVar1 = this->Parent;
    local_1c = (undefined4 *)0x0;
    iStack_18 = 0;
    iStack_14 = 0;
    iStack_10 = 0;
    pRVar2 = (ReferenceController *)pSVar1->_pad_0x0_0;
    if (pRVar2 != (ReferenceController *)0x0) {
      bVar3 = util__ReferenceController__IsDataStillValid(pRVar2);
      if (!bVar3) {
        pSVar1->_pad_0x0_0 = 0;
      }
    }
    pFVar6 = (Faction *)&local_1c;
    this_01 = Component__GetManager((Component *)this->Parent);
    TacticalManager__GetSpacecraftComponentsNotOfAlliance(this_01,pFVar6);
    local_3c = 0;
    iStack_38 = 0;
    iStack_34 = 0;
    uStack_30 = 0;
    local_20 = this;
    iVar4 = (*(code *)local_1c[3])();
    util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_3c,iVar4);
    local_c = (char *)0x0;
    iVar4 = (*(code *)local_1c[3])();
    if ((int)local_c < iVar4) {
      do {
        uVar5 = (*(code *)*local_1c)(&local_c);
        FUN_007e0b00(&local_2c,uVar5);
        pRVar2 = local_28;
        iVar4 = iStack_34;
        if (local_24 != '\0') {
          local_40 = iStack_34 + 1;
          util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_3c,&local_40);
          bVar3 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_3c,iVar4);
          if (bVar3) {
            this_00 = *(ReferenceController **)(iStack_38 + -4 + iStack_34 * 8);
            iVar4 = iStack_38 + iStack_34 * 8;
            *(undefined4 *)(iVar4 + -8) = local_2c;
            *(ReferenceController **)(iVar4 + -4) = pRVar2;
            if (pRVar2 != (ReferenceController *)0x0) {
              util__ReferenceController__AddWeakReference(pRVar2);
            }
            if (this_00 != (ReferenceController *)0x0) {
              util__ReferenceController__ReleaseWeakReference(this_00);
            }
          }
        }
        if (pRVar2 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar2);
        }
        local_c = local_c + 1;
        iVar4 = (*(code *)local_1c[3])();
      } while ((int)local_c < iVar4);
    }
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_1c);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_54,(Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_3c);
    local_44 = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->FindAllHeatSignatureTargets_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_54);
    (this->FindAllHeatSignatureTargets_MemoizedValue).IsValidData = local_44;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_54);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_3c);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007e1920 007e1920_SpacecraftTargeting__FindAllViableCapitalShipTargets_Clear ====
// decompiled by BatchDecomp @ 007e1920 name=SpacecraftTargeting_FindAllViableCapitalShipTargets_Clear conv=__thiscall body=66

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftTargeting__FindAllViableCapitalShipTargets_Clear(void)const  */

void __thiscall
SpacecraftTargeting__FindAllViableCapitalShipTargets_Clear(SpacecraftTargeting *this)

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
             &this->FindAllViableCapitalShipTargets_MemoizedValue,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_14);
  (this->FindAllViableCapitalShipTargets_MemoizedValue).IsValidData = false;
  return;
}


//==== 00007e1970 007e1970_SpacecraftTargeting__FindAllViableShotTargets_Clear ====
// decompiled by BatchDecomp @ 007e1970 name=SpacecraftTargeting_FindAllViableShotTargets_Clear conv=__thiscall body=66

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftTargeting__FindAllViableShotTargets_Clear(void)const  */

void __thiscall SpacecraftTargeting__FindAllViableShotTargets_Clear(SpacecraftTargeting *this)

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
             &this->FindAllViableShotTargets_MemoizedValue,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_14);
  (this->FindAllViableShotTargets_MemoizedValue).IsValidData = false;
  return;
}


//==== 00007e19c0 007e19c0_SpacecraftTargeting__FindAllViableTargetsInRange_Clear ====
// decompiled by BatchDecomp @ 007e19c0 name=SpacecraftTargeting_FindAllViableTargetsInRange_Clear conv=__thiscall body=66

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftTargeting__FindAllViableTargetsInRange_Clear(void)const  */

void __thiscall SpacecraftTargeting__FindAllViableTargetsInRange_Clear(SpacecraftTargeting *this)

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
             &this->FindAllViableTargetsInRange_MemoizedValue,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_14);
  (this->FindAllViableTargetsInRange_MemoizedValue).IsValidData = false;
  return;
}


//==== 00007e1a10 007e1a10_SpacecraftTargeting__FindAllViableTargetsInRange_Memoize ====
// decompiled by BatchDecomp @ 007e1a10 name=SpacecraftTargeting_FindAllViableTargetsInRange_Memoize conv=__thiscall body=130

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftTargeting__FindAllViableTargetsInRange_Memoize(void)const  */

void __thiscall SpacecraftTargeting__FindAllViableTargetsInRange_Memoize(SpacecraftTargeting *this)

{
  int iVar1;
  bool bVar2;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar3;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_2c[16];
  bool local_1c;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_18[16];
  int local_8;
  
  if ((this->FindAllViableTargetsInRange_MemoizedValue).IsValidData == false) {
    iVar1 = (this->SpacecraftTargetingMemoizationHandlerInstance).ResetFunctions.Size;
    local_8 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)
               &this->SpacecraftTargetingMemoizationHandlerInstance,&local_8);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->SpacecraftTargetingMemoizationHandlerInstance,iVar1);
    if (bVar2) {
      (this->SpacecraftTargetingMemoizationHandlerInstance).ResetFunctions.Data
      [(this->SpacecraftTargetingMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_2f5784b3, SpacecraftTargeting_FindAllViableTargetsInRange_Clear);
    }
    pDVar3 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
             SpacecraftTargeting_FindAllViableTargetsInRange_MemoizedFunction(this);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_2c,pDVar3);
    local_1c = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->FindAllViableTargetsInRange_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_2c);
    (this->FindAllViableTargetsInRange_MemoizedValue).IsValidData = local_1c;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_2c);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_18);
  }
  return;
}


//==== 00007e1aa0 007e1aa0_SpacecraftTargeting__FindAllViableTargetsInRange_MemoizedFunction ====
extern undefined4 FUN_007dc890(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007e1aa0 name=SpacecraftTargeting_FindAllViableTargetsInRange_MemoizedFunction conv=__thiscall body=373

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: class util::Darray<class util::WeakPtr<class Body> > __thiscall
   SpacecraftTargeting__FindAllViableTargetsInRange_MemoizedFunction(void)const  */

void __thiscall
SpacecraftTargeting__FindAllViableTargetsInRange_MemoizedFunction(SpacecraftTargeting *this)

{
  Maybe_L_util__Darray_L_util__WeakPtr_L_Body_G___G___G_ *pMVar1;
  CraftInstance *this_00;
  ReferenceController *this_01;
  ReferenceController *this_02;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *in_stack_00000004;
  ReferenceController *local_20;
  SpacecraftTargeting *local_18;
  char local_11;
  SpacecraftTargeting *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  SpacecraftTargeting_FindAllViableTargets_Memoize(this);
  pMVar1 = &this->FindAllViableTargets_MemoizedValue;
  if ((this->FindAllViableTargets_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  local_10 = this;
  iVar3 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body(in_stack_00000004,iVar3);
  local_c = 0;
  iVar3 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
  if (local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)*(int *)&pMVar1->Data)(&local_c);
      local_18 = local_10;
      puVar5 = (undefined4 *)SpacecraftComponent__GetCraft(local_10->Parent);
      if ((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]);
        if (!bVar2) {
          *puVar5 = 0;
        }
      }
      this_00 = (CraftInstance *)*puVar5;
      CraftInstance__GetWeaponModules_Memoize(this_00);
      if ((this_00->GetWeaponModules_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      local_11 = FUN_007dc890(&this_00->GetWeaponModules_MemoizedValue,local_18,puVar4);
      if (local_20 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_20);
      }
      if (local_11 != '\0') {
        iVar3 = *(int *)(in_stack_00000004 + 8);
        local_18 = (SpacecraftTargeting *)(iVar3 + 1);
        util__Darray_class_util__WeakPtr_class_Body_____SetSize(in_stack_00000004,(int *)&local_18);
        bVar2 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(in_stack_00000004,iVar3);
        if (bVar2) {
          this_01 = *(ReferenceController **)
                     (*(int *)(in_stack_00000004 + 4) + -4 + *(int *)(in_stack_00000004 + 8) * 8);
          iVar3 = *(int *)(in_stack_00000004 + 4) + *(int *)(in_stack_00000004 + 8) * 8;
          *(undefined4 *)(iVar3 + -8) = *puVar4;
          this_02 = (ReferenceController *)puVar4[1];
          *(ReferenceController **)(iVar3 + -4) = this_02;
          if (this_02 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this_02);
          }
          if (this_01 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(this_01);
          }
        }
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007e1c20 007e1c20_SpacecraftTargeting__FindAllViableTargets_Clear ====
// decompiled by BatchDecomp @ 007e1c20 name=SpacecraftTargeting_FindAllViableTargets_Clear conv=__thiscall body=66

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftTargeting__FindAllViableTargets_Clear(void)const  */

void __thiscall SpacecraftTargeting__FindAllViableTargets_Clear(SpacecraftTargeting *this)

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
             &this->FindAllViableTargets_MemoizedValue,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_14);
  (this->FindAllViableTargets_MemoizedValue).IsValidData = false;
  return;
}


//==== 00007e1c70 007e1c70_SpacecraftTargeting__FindAllViableTargets_Memoize ====
extern undefined4 FUN_007e0600(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007e1c70 name=SpacecraftTargeting_FindAllViableTargets_Memoize conv=__thiscall body=418

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftTargeting__FindAllViableTargets_Memoize(void)const  */

void __thiscall SpacecraftTargeting__FindAllViableTargets_Memoize(SpacecraftTargeting *this)

{
  SpacecraftComponent *pSVar1;
  ReferenceController *pRVar2;
  ReferenceController *this_00;
  bool bVar3;
  TacticalManager *this_01;
  int iVar4;
  undefined4 uVar5;
  Faction *pFVar6;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_54[16];
  bool local_44;
  int local_40;
  undefined4 local_3c;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  ReferenceController *local_28;
  char local_24;
  SpacecraftTargeting *local_20;
  undefined4 *local_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  char *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((this->FindAllViableTargets_MemoizedValue).IsValidData == false) {
    iVar4 = (this->SpacecraftTargetingMemoizationHandlerInstance).ResetFunctions.Size;
    local_c = (char *)(iVar4 + 1);
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)
               &this->SpacecraftTargetingMemoizationHandlerInstance,(int *)&local_c);
    bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->SpacecraftTargetingMemoizationHandlerInstance,iVar4);
    if (bVar3) {
      (this->SpacecraftTargetingMemoizationHandlerInstance).ResetFunctions.Data
      [(this->SpacecraftTargetingMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_2f5784b3, SpacecraftTargeting_FindAllViableTargets_Clear);
    }
    pSVar1 = this->Parent;
    local_1c = (undefined4 *)0x0;
    iStack_18 = 0;
    iStack_14 = 0;
    iStack_10 = 0;
    pRVar2 = (ReferenceController *)pSVar1->_pad_0x0_0;
    if (pRVar2 != (ReferenceController *)0x0) {
      bVar3 = util__ReferenceController__IsDataStillValid(pRVar2);
      if (!bVar3) {
        pSVar1->_pad_0x0_0 = 0;
      }
    }
    pFVar6 = (Faction *)&local_1c;
    this_01 = Component__GetManager((Component *)this->Parent);
    TacticalManager__GetSpacecraftComponentsNotOfAlliance(this_01,pFVar6);
    local_3c = 0;
    iStack_38 = 0;
    iStack_34 = 0;
    uStack_30 = 0;
    local_20 = this;
    iVar4 = (*(code *)local_1c[3])();
    util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_3c,iVar4);
    local_c = (char *)0x0;
    iVar4 = (*(code *)local_1c[3])();
    if ((int)local_c < iVar4) {
      do {
        uVar5 = (*(code *)*local_1c)(&local_c);
        FUN_007e0600(&local_2c,uVar5);
        pRVar2 = local_28;
        iVar4 = iStack_34;
        if (local_24 != '\0') {
          local_40 = iStack_34 + 1;
          util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_3c,&local_40);
          bVar3 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_3c,iVar4);
          if (bVar3) {
            this_00 = *(ReferenceController **)(iStack_38 + -4 + iStack_34 * 8);
            iVar4 = iStack_38 + iStack_34 * 8;
            *(undefined4 *)(iVar4 + -8) = local_2c;
            *(ReferenceController **)(iVar4 + -4) = pRVar2;
            if (pRVar2 != (ReferenceController *)0x0) {
              util__ReferenceController__AddWeakReference(pRVar2);
            }
            if (this_00 != (ReferenceController *)0x0) {
              util__ReferenceController__ReleaseWeakReference(this_00);
            }
          }
        }
        if (pRVar2 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar2);
        }
        local_c = local_c + 1;
        iVar4 = (*(code *)local_1c[3])();
      } while ((int)local_c < iVar4);
    }
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_1c);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_54,(Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_3c);
    local_44 = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->FindAllViableTargets_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_54);
    (this->FindAllViableTargets_MemoizedValue).IsValidData = local_44;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_54);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_3c);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007e27f0 007e27f0_SpacecraftTargeting__GetEnemyTargetedCompartments ====
// decompiled by BatchDecomp @ 007e27f0 name=GetEnemyTargetedCompartments conv=__thiscall body=25

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Darray<class util::WeakPtr<struct ModuleCompartment> > __thiscall
   SpacecraftTargeting__GetEnemyTargetedCompartments(void)const  */

Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ * __thiscall
SpacecraftTargeting__GetEnemyTargetedCompartments(SpacecraftTargeting *this)

{
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *in_stack_00000004;
  
  util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(in_stack_00000004,
             (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
             &(this->EnemyTargetedCompartments).Data);
  return in_stack_00000004;
}


//==== 00007e2a30 007e2a30_SpacecraftTargeting__GetPrimaryAimingWeapon ====
extern undefined4 FUN_007dd540(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007e2a30 name=GetPrimaryAimingWeapon conv=__thiscall body=243

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::WeakPtr<struct WeaponCompartment> __thiscall
   SpacecraftTargeting__GetPrimaryAimingWeapon(void)const  */

ReferenceController * __thiscall
SpacecraftTargeting__GetPrimaryAimingWeapon(SpacecraftTargeting *this)

{
  CraftInstance *this_00;
  bool bVar1;
  undefined4 *puVar2;
  ReferenceController *this_01;
  ReferenceController *this_02;
  ReferenceController *in_stack_00000004;
  int local_28;
  ReferenceController *local_24;
  char local_18;
  ReferenceController *local_c;
  undefined4 local_8;
  
  local_8 = 0;
  puVar2 = (undefined4 *)SpacecraftComponent__GetCraft(this->Parent);
  if (((ReferenceController *)puVar2[1] != (ReferenceController *)0x0) &&
     (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar2[1]), !bVar1)
     ) {
    *puVar2 = 0;
  }
  this_00 = (CraftInstance *)*puVar2;
  CraftInstance__GetWeaponModules_Memoize(this_00);
  if ((this_00->GetWeaponModules_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  FUN_007dd540(&local_28,&this_00->GetWeaponModules_MemoizedValue,local_8);
  if (local_c != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_c);
  }
  if (local_18 == '\0') {
    local_28 = 0;
    bVar1 = false;
    this_01 = (ReferenceController *)0x0;
    this_02 = in_stack_00000004;
  }
  else {
    if (local_24 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(local_24);
    }
    bVar1 = true;
    this_01 = local_24;
    this_02 = local_24;
  }
  in_stack_00000004->StrongReferenceCount = local_28;
  in_stack_00000004->WeakReferenceCount = (int)this_01;
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_01);
  }
  if ((this_02 != (ReferenceController *)0x0) && (bVar1)) {
    util__ReferenceController__ReleaseWeakReference(this_02);
  }
  if (local_24 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_24);
  }
  return in_stack_00000004;
}


//==== 00007e3100 007e3100_SpacecraftTargeting__GetTargetDistributionIndex ====
// decompiled by BatchDecomp @ 007e3100 name=GetTargetDistributionIndex conv=__thiscall body=7

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: int __thiscall SpacecraftTargeting__GetTargetDistributionIndex(void)const  */

int __thiscall SpacecraftTargeting__GetTargetDistributionIndex(SpacecraftTargeting *this)

{
  return (this->EnemyTargetedCompartments)._pad_0x0_0;
}


//==== 00007e3110 007e3110_SpacecraftTargeting__GetTargetFromHeatSignature ====
extern undefined4 FUN_007ded90(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_007e0420(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007e3110 name=GetTargetFromHeatSignature conv=__thiscall body=652

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::WeakPtr<class Body> __thiscall
   SpacecraftTargeting__GetTargetFromHeatSignature(void)const  */

void __thiscall SpacecraftTargeting__GetTargetFromHeatSignature(SpacecraftTargeting *this)

{
  ReferenceController *pRVar1;
  ReferenceController *this_00;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  float10 fVar5;
  float10 fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *in_stack_00000004;
  undefined8 local_68;
  int local_60;
  char local_58;
  undefined4 *local_54;
  int iStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  SpacecraftTargeting *local_44;
  double local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int local_28;
  undefined4 *local_24;
  undefined4 *puStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined8 local_14;
  undefined4 *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_38 = 0;
  uStack_34 = 0;
  iStack_30 = 0;
  uStack_2c = 0;
  SpacecraftTargeting_FindAllHeatSignatureTargets_Memoize(this);
  if ((this->FindAllHeatSignatureTargets_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment((Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_38,
             (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
             &this->FindAllHeatSignatureTargets_MemoizedValue);
  if (iStack_30 < 1) {
    *in_stack_00000004 = 0;
    in_stack_00000004[1] = 0;
  }
  else {
    local_24 = (undefined4 *)0x0;
    puStack_20 = (undefined4 *)0x0;
    iStack_1c = 0;
    uStack_18 = 0;
    local_44 = this;
    FUN_007ded90(&local_24,&local_38,this);
    local_c = (undefined4 *)SpacecraftComponent__GetCraft(this->Parent);
    if (((ReferenceController *)local_c[1] != (ReferenceController *)0x0) &&
       (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)local_c[1]),
       !bVar2)) {
      *local_c = 0;
    }
    CraftInstance__GetHomingProperties((CraftInstance *)*local_c);
    if (((slice_view *)&local_14)->_4_4_ != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_14)->_4_4_);
    }
    if (local_58 == '\0') {
      if (iStack_1c < 1) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3a,
                        "Size > 0",(char *)0x0);
        DebugBreak();
      }
      *in_stack_00000004 = *puStack_20;
      pRVar1 = (ReferenceController *)puStack_20[1];
      in_stack_00000004[1] = pRVar1;
      if (pRVar1 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar1);
      }
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_24);
    }
    else {
      if (local_60 == 0) {
        uVar7 = (undefined4)/*3ff0000000000000*/1.0;
        uVar8 = (undefined4)((ulonglong)/*3ff0000000000000*/1.0 >> 0x20);
      }
      else {
        uVar7 = (undefined4)*(undefined8 *)(local_60 + 0x78);
        uVar8 = (undefined4)((ulonglong)*(undefined8 *)(local_60 + 0x78) >> 0x20);
      }
      local_14 = (double)CONCAT44(uVar8,uVar7);
      if (iStack_1c < 1) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3a,
                        "Size > 0",(char *)0x0);
        DebugBreak();
      }
      fVar5 = (float10)FUN_007e0420(puStack_20);
      fVar6 = (float10)local_14;
      local_14 = (double)CONCAT44(&local_40,&local_44);
      local_54 = (undefined4 *)0x0;
      iStack_50 = 0;
      iStack_4c = 0;
      uStack_48 = 0;
      local_40 = (double)(fVar5 * fVar6);
      iVar3 = (*(code *)local_24[3])();
      util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_54,iVar3);
      local_c = (undefined4 *)0x0;
      iVar3 = (*(code *)local_24[3])();
      if ((int)local_c < iVar3) {
        do {
          puVar4 = (undefined4 *)(*(code *)*local_24)(&local_c);
          fVar6 = (float10)FUN_007e0420(puVar4);
          iVar3 = iStack_4c;
          local_68 = (double)fVar6;
          if (*(double *)((slice_view *)&local_14)->_4_4_ <= local_68) {
            local_68 = (double)CONCAT44(iStack_4c + 1,SUB84(local_68,0));
            util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_54,
                       (int *)((int)&local_68 + 4));
            bVar2 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_54,iVar3);
            if (bVar2) {
              pRVar1 = *(ReferenceController **)(iStack_50 + -4 + iStack_4c * 8);
              *(undefined4 *)(iStack_50 + -8 + iStack_4c * 8) = *puVar4;
              this_00 = (ReferenceController *)puVar4[1];
              *(ReferenceController **)(iStack_50 + -4 + iStack_4c * 8) = this_00;
              if (this_00 != (ReferenceController *)0x0) {
                util__ReferenceController__AddWeakReference(this_00);
              }
              if (pRVar1 != (ReferenceController *)0x0) {
                util__ReferenceController__ReleaseWeakReference(pRVar1);
              }
            }
          }
          local_c = (undefined4 *)((int)local_c + 1);
          iVar3 = (*(code *)local_24[3])();
        } while ((int)local_c < iVar3);
      }
      local_28 = (this->EnemyTargetedCompartments)._pad_0x0_0 % iStack_4c;
      puVar4 = (undefined4 *)(*(code *)*local_54)(&local_28);
      *in_stack_00000004 = *puVar4;
      pRVar1 = (ReferenceController *)puVar4[1];
      in_stack_00000004[1] = pRVar1;
      if (pRVar1 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar1);
      }
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_54);
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_24);
    }
  }
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_38);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007e3780 007e3780_SpacecraftTargeting__HasAnyViableTargetsInRange ====
// decompiled by BatchDecomp @ 007e3780 name=HasAnyViableTargetsInRange conv=__thiscall body=182

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall SpacecraftTargeting__HasAnyViableTargetsInRange(void)const  */

bool __thiscall SpacecraftTargeting__HasAnyViableTargetsInRange(SpacecraftTargeting *this)

{
  bool bVar1;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar2;
  int iVar3;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_2c[16];
  bool local_1c;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_18[16];
  int local_8;
  
  if ((this->FindAllViableTargetsInRange_MemoizedValue).IsValidData == false) {
    iVar3 = (this->SpacecraftTargetingMemoizationHandlerInstance).ResetFunctions.Size;
    local_8 = iVar3 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)
               &this->SpacecraftTargetingMemoizationHandlerInstance,&local_8);
    bVar1 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->SpacecraftTargetingMemoizationHandlerInstance,iVar3);
    if (bVar1) {
      (this->SpacecraftTargetingMemoizationHandlerInstance).ResetFunctions.Data
      [(this->SpacecraftTargetingMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_2f5784b3, SpacecraftTargeting_FindAllViableTargetsInRange_Clear);
    }
    pDVar2 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
             SpacecraftTargeting_FindAllViableTargetsInRange_MemoizedFunction(this);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_2c,pDVar2);
    local_1c = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->FindAllViableTargetsInRange_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_2c);
    (this->FindAllViableTargetsInRange_MemoizedValue).IsValidData = local_1c;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_2c);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_18);
    if ((this->FindAllViableTargetsInRange_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  iVar3 = (**(code **)((this->FindAllViableTargetsInRange_MemoizedValue).Data._pad_0x0_0 + 0xc))();
  return 0 < iVar3;
}


//==== 00007e3840 007e3840_SpacecraftTargeting__IsTargetBehindCover ====
extern undefined4 FUN_007dcaa0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_007dcdd0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007e3840 name=IsTargetBehindCover conv=__thiscall body=591

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall SpacecraftTargeting__IsTargetBehindCover(class util::WeakPtr<class
   Body>)const  */

bool __thiscall
SpacecraftTargeting__IsTargetBehindCover(SpacecraftTargeting *this,Body *param_2,ReferenceController *param_3)

{
  Maybe_L_util__Darray_L_util__WeakPtr_L_CelestialObject_G___G___G_ *pMVar1;
  SpacecraftComponent *pSVar2;
  Body *this_00;
  ReferenceController *this_01;
  ReferenceController *this_02;
  Body *this_03;
  SpacecraftTargeting *pSVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  Vec3_L_double_G_ *pVVar7;
  Vec3_L_double_G_ *pVVar8;
  TacticalManager *pTVar9;
  uint uVar10;
  uint uVar11;
  WeakPtr_L_CelestialObject_G_ *pWVar12;
  uint *puVar13;
  Vec3_L_double_G_ local_94;
  undefined1 local_7c[16];
  undefined4 *puStack_6c;
  SpacecraftTargeting *local_64;
  Maybe_L_util__Darray_L_util__WeakPtr_L_CelestialObject_G___G___G_ *local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  double local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined **local_18;
  uint *puStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pSVar2 = this->Parent;
  local_64 = this;
  if (((ReferenceController *)pSVar2->_pad_0x0_0 != (ReferenceController *)0x0) &&
     (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)pSVar2->_pad_0x0_0),
     !bVar4)) {
    pSVar2->_pad_0x0_0 = 0;
  }
  this_00 = (Body *)pSVar2->_pad_0x0_0;
  if ((param_3 != (ReferenceController *)0x0) &&
     (bVar4 = util__ReferenceController__IsDataStillValid(param_3), !bVar4)) {
    param_2 = (Body *)0x0;
  }
  this_03 = param_2;
  pVVar7 = Body__GetPosition_km(this_00,(Vec3_L_double_G_ *)local_7c);
  pVVar8 = Body__GetPosition_km(this_03,&local_94);
  local_58 = *(undefined4 *)&pVVar8->X;
  uStack_54 = *(undefined4 *)((int)&pVVar8->X + 4);
  uStack_50 = *(undefined4 *)&pVVar8->Y;
  uStack_4c = *(undefined4 *)((int)&pVVar8->Y + 4);
  local_48 = pVVar8->Z;
  local_40 = *(undefined4 *)&pVVar7->X;
  uStack_3c = *(undefined4 *)((int)&pVVar7->X + 4);
  uStack_38 = *(undefined4 *)&pVVar7->Y;
  uStack_34 = *(undefined4 *)((int)&pVVar7->Y + 4);
  local_30 = pVVar7->Z;
  local_18 = (undefined **)0x0;
  puStack_14 = (uint *)0x0;
  uStack_10 = 0;
  uStack_c = 0;
  pTVar9 = Component__GetManager((Component *)this->Parent);
  TacticalManager__GetRelevantCelestials_Memoize(pTVar9);
  pMVar1 = &pTVar9->GetRelevantCelestials_MemoizedValue;
  local_60 = pMVar1;
  if ((pTVar9->GetRelevantCelestials_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_18 = ((void *)(0x0091e0b8u));
  puStack_14 = (uint *)0x0;
  uStack_10 = 0;
  uStack_c = (pTVar9->GetRelevantCelestials_MemoizedValue).Data.Capacity;
  local_5c = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_18,&local_5c);
  uVar11 = uStack_c;
  uVar10 = -(uint)((int)((ulonglong)uStack_c * 8 >> 0x20) != 0) | (uint)((ulonglong)uStack_c * 8);
  puStack_14 = (uint *)operator_new__(-(uint)(0xfffffffb < uVar10) | uVar10 + 4);
  if (puStack_14 == (uint *)0x0) {
    puStack_14 = (uint *)0x0;
  }
  else {
    *puStack_14 = uVar11;
    puStack_14 = puStack_14 + 1;
    puVar13 = puStack_14;
    for (; uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar13 = 0;
      puVar13[1] = 0;
      puVar13 = puVar13 + 2;
    }
  }
  pWVar12 = (pTVar9->GetRelevantCelestials_MemoizedValue).Data.Data;
  if (pWVar12 != pWVar12 + (pTVar9->GetRelevantCelestials_MemoizedValue).Data.Size) {
    puVar13 = puStack_14 + 1;
    do {
      this_01 = (ReferenceController *)*puVar13;
      puVar13[-1] = (uint)pWVar12->Pointer;
      this_02 = pWVar12->Controller;
      *puVar13 = (uint)this_02;
      if (this_02 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(this_02);
      }
      if (this_01 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(this_01);
      }
      pWVar12 = pWVar12 + 1;
      puVar13 = puVar13 + 2;
    } while (pWVar12 != (local_60->Data).Data + (local_60->Data).Size);
  }
  pSVar3 = local_64;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  pTVar9 = Component__GetManager((Component *)local_64->Parent);
  TacticalManager__GetCapitalShipComponents(pTVar9);
  cVar5 = FUN_007dcdd0(&local_18,pSVar3,&local_58);
  if (cVar5 == '\0') {
    puStack_6c = &param_2;
    ((slice_view *)&local_7c)->_12_4_ = pSVar3;
    cVar5 = FUN_007dcaa0(&local_28,CONCAT44(puStack_6c,pSVar3),&local_58);
    if (cVar5 == '\0') {
      uVar6 = 0;
      goto LAB_007e3a5e;
    }
  }
  uVar6 = 1;
LAB_007e3a5e:
  util__Darray_class_util__WeakPtr_struct_UIWidget______Darray_class_util__WeakPtr_struct_UIWidget((Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_28);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_18);
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar6;
}


//==== 00007e3a90 007e3a90_SpacecraftTargeting__IsWeaponModuleOutOfRange ====
extern undefined4 FUN_007dc6a0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007e3a90 name=IsWeaponModuleOutOfRange conv=__thiscall body=141

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall SpacecraftTargeting__IsWeaponModuleOutOfRange(class WeaponModule *)const
    */

bool __thiscall
SpacecraftTargeting__IsWeaponModuleOutOfRange(SpacecraftTargeting *this,WeaponModule *param_1)

{
  char cVar1;
  undefined1 uVar2;
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
  SpacecraftTargeting_FindAllViableTargets_Memoize(this);
  if ((this->FindAllViableTargets_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment((Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_18,
             (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
             &this->FindAllViableTargets_MemoizedValue);
  if (0 < iStack_10) {
    cVar1 = FUN_007dc6a0(&local_18,&param_1,this);
    if (cVar1 != '\0') {
      uVar2 = 1;
      goto LAB_007e3b00;
    }
  }
  uVar2 = 0;
LAB_007e3b00:
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_18);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}


//==== 00007e3b20 007e3b20_SpacecraftTargeting__PostTick ====
extern undefined4 FUN_007de070(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007e3b20 name=PostTick conv=__thiscall body=315

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftTargeting__PostTick(double) */

void __thiscall SpacecraftTargeting__PostTick(SpacecraftTargeting *this,double param_1)

{
  WeakPtr_L_ModuleCompartment_G_ **this_00;
  ReferenceController *this_01;
  ReferenceController *this_02;
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int local_28;
  int local_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  SpacecraftTargeting *local_14;
  undefined1 local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = 0;
  this_00 = &(this->EnemyTargetedCompartments).Data;
  local_24 = 0;
  iStack_20 = 0;
  iStack_1c = 0;
  uStack_18 = 0;
  local_14 = this;
  iVar2 = (*(code *)(this->EnemyTargetedCompartments).Data[1].Controller)();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_24,iVar2);
  local_c = 0;
  iVar2 = (*(code *)(*this_00)[1].Controller)();
  if (local_c < iVar2) {
    do {
      piVar3 = (int *)(*(code *)(*this_00)->Pointer)(&local_c);
      if (((*piVar3 != 0) && ((ReferenceController *)piVar3[1] != (ReferenceController *)0x0)) &&
         (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]),
         iVar2 = iStack_1c, bVar1)) {
        local_28 = iStack_1c + 1;
        util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_24,&local_28);
        bVar1 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_24,iVar2);
        if (bVar1) {
          this_01 = *(ReferenceController **)(iStack_20 + -4 + iStack_1c * 8);
          iVar2 = iStack_20 + iStack_1c * 8;
          *(int *)(iVar2 + -8) = *piVar3;
          this_02 = (ReferenceController *)piVar3[1];
          *(ReferenceController **)(iVar2 + -4) = this_02;
          if (this_02 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this_02);
          }
          if (this_01 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(this_01);
          }
        }
      }
      local_c = local_c + 1;
      iVar2 = (*(code *)(*this_00)[1].Controller)();
      this = local_14;
    } while (local_c < iVar2);
  }
  local_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  local_14 = this;
  iVar2 = (**(code **)(local_24 + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_38,iVar2);
  FUN_007de070(&local_24,&local_14,&local_38);
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)this_00,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_38);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_38);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_24);
  (**(code **)*(int *)this)();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007e3dc0 007e3dc0_SpacecraftTargeting__TargetCompartment ====
// decompiled by BatchDecomp @ 007e3dc0 name=TargetCompartment conv=__thiscall body=306

/* WARNING: Removing unreachable block (ram,0x007e3e96) */
/* WARNING: Removing unreachable block (ram,0x007e3e9b) */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftTargeting__TargetCompartment(class util::WeakPtr<struct
   ModuleCompartment>) */

void __thiscall
SpacecraftTargeting__TargetCompartment(SpacecraftTargeting *this,ModuleCompartment *param_2,ReferenceController *param_3)

{
  WeakPtr_L_ModuleCompartment_G_ *pWVar1;
  int *piVar2;
  CraftInstance *this_00;
  bool bVar3;
  char cVar4;
  undefined4 *puVar5;
  WeakPtr_L_ModuleCompartment_G_ *pWVar6;
  int *piVar7;
  
  if ((param_3 != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__IsDataStillValid(param_3), !bVar3)) {
    param_2 = (ModuleCompartment *)0x0;
  }
  cVar4 = (**(code **)(**(int **)&param_2->LostPower + 0x78))();
  if (cVar4 != '\0') {
    puVar5 = (undefined4 *)SpacecraftComponent__GetCraft(this->Parent);
    if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
       (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
       !bVar3)) {
      *puVar5 = 0;
    }
    this_00 = (CraftInstance *)*puVar5;
    CraftInstance__GetWorkingCompartments_Memoize(this_00);
    if ((this_00->GetWorkingCompartments_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    pWVar6 = (this_00->GetWorkingCompartments_MemoizedValue).Data.Data;
    pWVar1 = pWVar6 + (this_00->GetWorkingCompartments_MemoizedValue).Data.Size;
    for (; pWVar6 != pWVar1; pWVar6 = pWVar6 + 1) {
      if ((param_3 == pWVar6->Controller) && (param_2 == pWVar6->Pointer)) {
        bVar3 = true;
        goto LAB_007e3e8f;
      }
    }
  }
  bVar3 = false;
LAB_007e3e8f:
  if (bVar3) {
    piVar7 = (int *)(this->EnemyTargetedCompartments).Size;
    piVar2 = piVar7 + (this->EnemyTargetedCompartments).Capacity * 2;
    for (; piVar7 != piVar2; piVar7 = piVar7 + 2) {
      if ((param_3 == (ReferenceController *)piVar7[1]) && (param_2 == (ModuleCompartment *)*piVar7)
         ) goto LAB_007e3ede;
    }
    util__Darray_class_util__WeakPtr_class_Body_____Add((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&(this->EnemyTargetedCompartments).Data,
               (WeakPtr_L_class_Body_G_ *)&param_2);
  }
LAB_007e3ede:
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  return;
}


//==== 00007e3f00 007e3f00_SpacecraftTargeting__ToggleEnemyTargetPriority ====
// decompiled by BatchDecomp @ 007e3f00 name=ToggleEnemyTargetPriority conv=__thiscall body=16

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftTargeting__ToggleEnemyTargetPriority(bool) */

void __thiscall
SpacecraftTargeting__ToggleEnemyTargetPriority(SpacecraftTargeting *this,bool param_1)

{
  *(bool *)&this[1]._pad_0x0_0 = param_1;
  return;
}


//==== 00007e3f20 007e3f20_SpacecraftTargeting__UntargetCompartment ====
// decompiled by BatchDecomp @ 007e3f20 name=UntargetCompartment conv=__thiscall body=174

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftTargeting__UntargetCompartment(class util::WeakPtr<struct
   ModuleCompartment>) */

void __thiscall
SpacecraftTargeting__UntargetCompartment(SpacecraftTargeting *this,int param_2,ReferenceController *param_3)

{
  ReferenceController *this_00;
  ReferenceController *this_01;
  bool bVar1;
  int *piVar2;
  int local_c;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *local_8;
  
  local_8 = (Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&(this->EnemyTargetedCompartments).Data;
  bVar1 = false;
  piVar2 = (int *)(this->EnemyTargetedCompartments).Size;
  if (piVar2 != piVar2 + (this->EnemyTargetedCompartments).Capacity * 2) {
    do {
      if (bVar1) {
        this_00 = (ReferenceController *)piVar2[-1];
        piVar2[-2] = *piVar2;
        this_01 = (ReferenceController *)piVar2[1];
        piVar2[-1] = (int)this_01;
        if (this_01 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this_01);
        }
        if (this_00 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this_00);
        }
      }
      else if ((param_3 == (ReferenceController *)piVar2[1]) && (param_2 == *piVar2)) {
        bVar1 = true;
      }
      piVar2 = piVar2 + 2;
    } while (piVar2 != (int *)(*(int *)(local_8 + 4) + *(int *)(local_8 + 8) * 8));
    if (bVar1) {
      local_c = *(int *)(local_8 + 8) + -1;
      util__Darray_class_util__WeakPtr_class_Body_____SetSize(local_8,&local_c);
    }
  }
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  return;
}


//==== 00007e3fd0 007e3fd0_SpacecraftTargeting__UntargetEntireShip ====
// decompiled by BatchDecomp @ 007e3fd0 name=UntargetEntireShip conv=__thiscall body=8

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftTargeting__UntargetEntireShip(void) */

void __thiscall SpacecraftTargeting__UntargetEntireShip(SpacecraftTargeting *this)

{
  *(undefined1 *)&this[1]._pad_0x0_0 = 0;
  return;
}


//==== 000087b8e0 0087b8e0_CameraManager__Tick ====
// decompiled by BatchDecomp @ 0087b8e0 name=Tick conv=__thiscall body=223

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CameraManager__Tick(double) */

void __thiscall CameraManager__Tick(CameraManager *this,double param_1)

{
  CameraState *pCVar1;
  CameraState *pCVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 unaff_ESI;
  undefined4 uVar7;
  undefined1 local_20[24];
  int *local_8;
  
  local_8 = *(int **)&(this->Parent->GameTimer).LastTime;
  iVar6 = (this->TargetCamera).Size;
  if (iVar6 < 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\stack.inl",0xa2,
                    "Size > 0",(char *)0x0);
    DebugBreak();
    iVar6 = (this->TargetCamera).Size;
  }
  pCVar2 = (this->TargetCamera).Data;
  puVar5 = (undefined4 *)(**(code **)(*local_8 + 0x4c))(local_20);
  uVar7 = puVar5[1];
  uVar3 = puVar5[2];
  uVar4 = puVar5[3];
  pCVar1 = pCVar2 + iVar6 + -1;
  *(undefined4 *)&(pCVar1->Center).X = *puVar5;
  *(undefined4 *)((int)&(pCVar1->Center).X + 4) = uVar7;
  *(undefined4 *)&(pCVar1->Center).Y = uVar3;
  *(undefined4 *)((int)&(pCVar1->Center).Y + 4) = uVar4;
  pCVar2[iVar6 + -1].Center.Z = *(double *)(puVar5 + 4);
  iVar6 = (this->TargetCamera).Size;
  if (iVar6 < 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\stack.inl",0xa2,
                    "Size > 0",(char *)0x0);
    DebugBreak();
    iVar6 = (this->TargetCamera).Size;
  }
  uVar7 = (undefined4)((ulonglong)/*3fe0000000000000*/0.5 >> 0x20);
  CameraState__TweenToTargetState(&this->CurrentCamera,param_1,(this->TargetCamera).Data + iVar6 + -1,
             (double)CONCAT44((int)/*3fc999999999999a*/0.2,uVar7),
             (double)CONCAT44((int)/*3fe0000000000000*/0.5,
                              (int)((ulonglong)/*3fc999999999999a*/0.2 >> 0x20)),
             (double)CONCAT44(unaff_ESI,uVar7));
  ClampCameraZoom(this);
  return;
}

