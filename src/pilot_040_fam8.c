// pilot_040_fam8.c - WeaponCompartment/CraftInstance/Body/CraftBlueprintArmor/CraftBlueprint/ItineraryNodeUI/HUDItineraryNodeDragger/ShipGroupUI (262 methods)
// assembled by scripts/fam8_assemble.py (generalized from fam4) from decomp2c v2 output.
// Honest TODOs inline; fix log: reports/poison_fix/fam8_pilot040_log.txt
#include "port_prelude.h"
typedef union {
  struct {
    undefined8 _0_8_;
    undefined8 _4_8_;
    undefined8 _8_8_;
    undefined8 _12_8_;
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
/* ---- externs: stub-oracle names (K&R; ret types by call site) ---- */
extern int Body_GetBoundingCylinder_km_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Body_GetInverseMomentOfInertia_kg_m2_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Body_GetMass_kg_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Body__GetBoundingCylinder_km_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int Body__GetMass_kg_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftBlueprintArmor_GetTotalArmorMass_kg_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int CraftInstance__GetTotalReactionMass_kg_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int ItineraryNodeUI_GetPathCameraDistances_km_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int ItineraryNodeUI_GetPathCameraDistances_km_Memoize(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int ItineraryNodeUI_GetSmoothedPath_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int ItineraryNodeUI_GetSmoothedProjectedPath_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int ModuleCompartment_ModuleCompartment__o2(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int SpacecraftComponent__GetEstimatedMaxAngularAcceleration_radians__s2_Clear(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2(); /* K&R stub; ret by call site (honest TODO: stub is void) */
extern int util__Darray_struct_ItineraryNodeUI__PathNode___operator(); /* K&R stub; ret by call site (honest TODO: stub is void) */
/* ---- data refs: xmm consts / UNK data (cde_data_map.h __real_ idiom) ---- */
#define ___xmm_00000000000000003ff0000000000000 (*(undefined1 (*)[16])(0x00000000000000003ff0000000000000u))
#define _UNK_0091d464 (*(undefined4 *)(0x0091d464u))

//==== 000050fb20 0050fb20_CraftBlueprintArmor__GetArmorThickness_m ====
// decompiled by BatchDecomp @ 0050fb20 name=GetArmorThickness_m conv=__thiscall body=139

/* public: double __thiscall CraftBlueprintArmor__GetArmorThickness_m(int)const  */

double __thiscall CraftBlueprintArmor__GetArmorThickness_m(CraftBlueprintArmor *this,int param_1)

{
  int *piVar1;
  int iVar2;
  float10 extraout_ST0;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar1 = &(this->CraftBlueprintArmorMemoizationHandlerInstance).ResetFunctions.Size;
  local_c = 0;
  iVar2 = (**(code **)((this->CraftBlueprintArmorMemoizationHandlerInstance).ResetFunctions.Size +
                      0xc))();
  if (local_c < iVar2) {
    do {
      (**(code **)*piVar1)(&local_c);
      local_c = local_c + 1;
      iVar2 = (**(code **)(*piVar1 + 0xc))();
    } while (local_c < iVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 0000513820 00513820_CraftBlueprintArmor__GetMaxCoreModuleRadiusAtHeight_m ====
// decompiled by BatchDecomp @ 00513820 name=GetMaxCoreModuleRadiusAtHeight_m conv=__thiscall body=345

/* public: double __thiscall CraftBlueprintArmor__GetMaxCoreModuleRadiusAtHeight_m(struct
   Range_L_double_G_,double)const  */

double __thiscall
CraftBlueprintArmor__GetMaxCoreModuleRadiusAtHeight_m(CraftBlueprintArmor *this,Range_L_double_G_ param_1,double param_2)

{
  bool *pbVar1;
  undefined4 *puVar2;
  CraftBlueprint *this_00;
  bool bVar3;
  int iVar4;
  CraftSplinePoint *pCVar5;
  Vec2_L_double_G_ *pVVar6;
  Vec2_L_double_G_ *pVVar7;
  float10 extraout_ST0;
  double dVar8;
  undefined4 local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined1 local_58[16];
  undefined1 local_48[16];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  CraftBlueprintArmor *local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  this_00 = (CraftBlueprint *)this[1].GetInnerArmorSpline_m_MemoizedValue.Data.Capacity;
  local_18 = this;
  CraftBlueprint__GetModuleSpline_m_Memoize(this_00);
  pbVar1 = &(this_00->GetMassCondensedChartData_MemoizedValue).IsValidData;
  if ((char)(this_00->GetMassChartData_MemoizedValue).Data.Capacity == '\0') {
    local_78 = 0x513867;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_78 = ((slice_view *)&param_1.Lower)->_0_4_;
  local_88 = 0;
  iStack_84 = 0;
  iStack_80 = 0;
  uStack_7c = 0;
  iVar4 = (**(code **)(*(int *)pbVar1 + 0xc))();
  util__Darray_struct_util__Line2_double_____Darray_struct_util__Line2_double__o2((Darray_L_struct_util__Line2_L_double_G___G_ *)&local_88,iVar4 + -1);
  local_c = 0;
  iVar4 = (**(code **)(*(int *)pbVar1 + 0xc))();
  if (local_c < iVar4 + -1) {
    do {
      local_10 = local_c + 1;
      pVVar7 = (Vec2_L_double_G_ *)&local_10;
      dVar8 = param_2;
      pCVar5 = (CraftSplinePoint *)(*(code *)**(undefined4 **)pbVar1)(pVVar7,local_48);
      pVVar6 = CraftSplinePoint__GetPointAtAngle_m(pCVar5,pVVar7,dVar8);
      pVVar7 = (Vec2_L_double_G_ *)&local_c;
      dVar8 = param_2;
      pCVar5 = (CraftSplinePoint *)(*(code *)**(undefined4 **)pbVar1)(pVVar7,local_58);
      pVVar7 = CraftSplinePoint__GetPointAtAngle_m(pCVar5,pVVar7,dVar8);
      iVar4 = iStack_80;
      local_38 = *(undefined4 *)&pVVar7->X;
      uStack_34 = *(undefined4 *)((int)&pVVar7->X + 4);
      uStack_30 = *(undefined4 *)&pVVar7->Y;
      uStack_2c = *(undefined4 *)((int)&pVVar7->Y + 4);
      local_28 = *(undefined4 *)&pVVar6->X;
      uStack_24 = *(undefined4 *)((int)&pVVar6->X + 4);
      uStack_20 = *(undefined4 *)&pVVar6->Y;
      uStack_1c = *(undefined4 *)((int)&pVVar6->Y + 4);
      local_14 = iStack_80 + 1;
      util__Darray_struct_util__Line2_double_____SetSize((Darray_L_struct_util__Line2_L_double_G___G_ *)&local_88,&local_14);
      bVar3 = util__Darray_struct_util__Line2_double_____CheckSize((Darray_L_struct_util__Line2_L_double_G___G_ *)&local_88,iVar4);
      if (bVar3) {
        puVar2 = (undefined4 *)(iStack_84 + -0x20 + iStack_80 * 0x20);
        *puVar2 = local_38;
        puVar2[1] = uStack_34;
        puVar2[2] = uStack_30;
        puVar2[3] = uStack_2c;
        puVar2 = (undefined4 *)(iStack_84 + -0x10 + iStack_80 * 0x20);
        *puVar2 = local_28;
        puVar2[1] = uStack_24;
        puVar2[2] = uStack_20;
        puVar2[3] = uStack_1c;
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(*(int *)pbVar1 + 0xc))();
    } while (local_c < iVar4 + -1);
  }
  GetMinOrMaxSplineRadiusAtHeight_m(local_18);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 0000517580 00517580_CraftBlueprintArmor__GetSplineRadiusAtHeight_m ====
// decompiled by BatchDecomp @ 00517580 name=GetSplineRadiusAtHeight_m conv=__thiscall body=396

/* public: double __thiscall CraftBlueprintArmor__GetSplineRadiusAtHeight_m(class
   util::Darray<struct util::Line2<double> > const &,double)const  */

double __thiscall
CraftBlueprintArmor__GetSplineRadiusAtHeight_m(CraftBlueprintArmor *this,Darray_L_struct_util__Line2_L_double_G___G_ *param_1,double param_2)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  double *pdVar5;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 in_stack_00000008;
  double local_20;
  undefined8 local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  dVar8 = GetTotalArmorHeight_m(this);
  local_10 = GetTotalArmorHeight_m(this);
  local_10 = (double)CONCAT44(((slice_view *)&param_2)->_0_4_,in_stack_00000008) / local_10;
  bVar3 = false;
  local_20 = 0.0;
  dVar2 = local_10;
  if (local_10 <= 0.0) {
    dVar2 = 0.0;
  }
  local_10 = (double)((ulonglong)local_10 & 0xffffffff);
  if (/*3ff0000000000000*/1.0 <= dVar2) {
    dVar2 = /*3ff0000000000000*/1.0;
  }
  iVar4 = (**(code **)(*(int *)param_1 + 0xc))();
  if (((slice_view *)&local_10)->_4_4_ < iVar4) {
    do {
      pdVar5 = (double *)(*(code *)**(undefined4 **)param_1)((int)&local_10 + 4);
      if (!bVar3) {
        dVar1 = pdVar5[1];
        dVar7 = (double)CONCAT44(((slice_view *)&param_2)->_0_4_,in_stack_00000008);
        if (((dVar7 <= dVar1) && (dVar6 = pdVar5[3], dVar6 <= dVar7)) ||
           ((dVar6 = pdVar5[3], dVar7 <= dVar6 && (dVar1 <= dVar7)))) {
          dVar7 = dVar6 / dVar8 - dVar1 / dVar8;
          if (dVar7 <= /*0000000000000000*/0.0) {
            local_20 = *pdVar5;
          }
          else {
            local_20 = ((dVar2 - dVar1 / dVar8) / dVar7) * (pdVar5[2] - *pdVar5) + *pdVar5;
          }
          bVar3 = true;
        }
      }
      local_10 = (double)CONCAT44(((slice_view *)&local_10)->_4_4_ + 1,(undefined4)local_10);
      iVar4 = (**(code **)(*(int *)param_1 + 0xc))();
    } while (((slice_view *)&local_10)->_4_4_ < iVar4);
  }
  if (bVar3) {
    if (((NAN(local_20) || NAN(/*0000000000000000*/0.0)) == (local_20 == /*0000000000000000*/0.0))
       && (NAN(local_20 / local_20))) {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\crafts\\armor.cpp",0x1cf,
                      "!Radius_m || IsFinite(*Radius_m)",(char *)0x0);
      DebugBreak();
    }
    if (bVar3) {
      local_10 = local_20;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return (double)extraout_ST0;
    }
  }
  local_10 = 0.0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0_00;
}


//==== 0000518300 00518300_CraftBlueprintArmor__GetSurfacePointFromAngle ====
// decompiled by BatchDecomp @ 00518300 name=GetSurfacePointFromAngle conv=__thiscall body=426

/* public: struct util__Vec2_L_double_G_ __thiscall
   CraftBlueprintArmor__GetSurfacePointFromAngle(double)const  */

Vec2_L_double_G_ * __thiscall
CraftBlueprintArmor__GetSurfacePointFromAngle(CraftBlueprintArmor *this,Vec2_L_double_G_ *__return_storage_ptr__,double param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double *pdVar4;
  undefined4 unaff_ESI;
  double dVar5;
  double dVar6;
  undefined4 in_stack_00000008;
  undefined1 local_60[16];
  double local_50;
  double local_48;
  double local_40;
  Line2_L_double_G_ local_38;
  double local_18;
  double local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = (double)CONCAT44(((slice_view *)&param_1)->_0_4_,in_stack_00000008);
  GetSurfaceLineFromAngle(this,&local_38,(double)CONCAT44(unaff_ESI,((slice_view *)&param_1)->_0_4_));
  local_18 = util__Cos(&local_10);
  local_10 = util__Sin(&local_10);
  local_48 = local_38.B.X - local_38.A.X;
  local_40 = (double)CONCAT71(((slice_view *)&local_38.B.Y)->_1_7_,((slice_view *)&local_38.B.Y)->_0_1_) - local_38.A.Y;
  local_10 = local_10 - 0.0;
  ((slice_view *)&local_60)->_8_8_ = 0;
  ((slice_view *)&local_60)->_0_8_ = local_18 - 0.0;
  local_50 = local_48 * local_10 - local_40 * (local_18 - 0.0);
  local_18 = local_50;
  local_18 = util__Abs(&local_18);
  dVar5 = local_48 * local_48 + local_40 * local_40;
  dVar6 = (double)((slice_view *)&local_60)->_0_8_ * (double)((slice_view *)&local_60)->_0_8_ + local_10 * local_10;
  if (dVar6 <= dVar5) {
    dVar5 = dVar6;
  }
  if ((local_18 <= dVar5 * /*3e45798ee2308c3a*/1e-08) ||
     (dVar6 = ((local_38.A.Y - 0.0) * (double)((slice_view *)&local_60)->_0_8_ - (local_38.A.X - 0.0) * local_10) *
              (/*3ff0000000000000*/1.0 / local_50),
     ((local_38.A.Y - 0.0) * local_48 - (local_38.A.X - 0.0) * local_40) *
     (/*3ff0000000000000*/1.0 / local_50) <= 0.0)) {
    ((slice_view *)&local_38.B.Y)->_0_1_ = '\0';
    local_38.A.Y = 0.0;
    local_38.B.X = 0.0;
  }
  else {
    ((slice_view *)&local_38.B.Y)->_0_1_ = '\x01';
    local_38.B.X = dVar6 * local_40 + local_38.A.Y;
    local_38.A.Y = dVar6 * local_48 + local_38.A.X;
  }
  pdVar4 = (double *)local_60;
  if (((slice_view *)&local_38.B.Y)->_0_1_ != '\0') {
    pdVar4 = &local_38.A.Y;
  }
  ((slice_view *)&local_60)->_8_4_ = *(undefined4 *)&local_10;
  ((slice_view *)&local_60)->_12_4_ = (int)((ulonglong)local_10 >> 0x20);
  uVar1 = *(undefined4 *)((int)pdVar4 + 4);
  uVar2 = *(undefined4 *)(pdVar4 + 1);
  uVar3 = *(undefined4 *)((int)pdVar4 + 0xc);
  *(undefined4 *)&__return_storage_ptr__->X = *(undefined4 *)pdVar4;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Y = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = uVar3;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 00005184b0 005184b0_CraftBlueprintArmor__GetTotalArealCrossSection_m2 ====
// decompiled by BatchDecomp @ 005184b0 name=GetTotalArealCrossSection_m2 conv=__thiscall body=353

/* public: double __thiscall CraftBlueprintArmor__GetTotalArealCrossSection_m2(void)const  */

double __thiscall CraftBlueprintArmor__GetTotalArealCrossSection_m2(CraftBlueprintArmor *this)

{
  int iVar1;
  Darray_L_struct_util__Line2_L_double_G___G_ *pDVar2;
  double *pdVar3;
  float10 extraout_ST0;
  double dVar4;
  double local_3c;
  double local_34;
  double local_2c;
  double local_24;
  undefined **local_1c;
  void *pvStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_1c = (undefined **)0x0;
  pvStack_18 = (void *)0x0;
  uStack_14 = 0;
  uStack_10 = 0;
  iVar1 = (**(code **)((this->CraftBlueprintArmorMemoizationHandlerInstance).ResetFunctions.Size +
                      0xc))();
  if (iVar1 < 1) {
    CraftBlueprintArmor__GetInnerArmorSegments_m_Memoize(this);
    pDVar2 = (Darray_L_struct_util__Line2_L_double_G___G_ *)&this->GetMaxArmorRadius_m_MemoizedValue;
    if ((char)(this->GetArmorRadiiAndHeightPerPlatePerLayer_m_MemoizedValue).Data._pad_0x0_0 == '\0')
    {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  else {
    CraftBlueprintArmor__GetOuterArmorSegmentsByLayer_m_Memoize(this);
    if ((char)(this->GetAllLayersOuterPlateSegments_m_MemoizedValue).Data._pad_0x0_0 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    pDVar2 = (Darray_L_struct_util__Line2_L_double_G___G_ *)
             (**(code **)((this->GetArmorPlateHeights_m_MemoizedValue).Data.Data + 1))();
  }
  util__Darray_struct_util__Line2_double_____Darray_struct_util__Line2_double((Darray_L_struct_util__Line2_L_double_G___G_ *)&local_1c,pDVar2);
  local_c = 0;
  local_34 = 0.0;
  local_24 = 0.0;
  iVar1 = (*(code *)local_1c[3])();
  if (local_c < iVar1) {
    do {
      pdVar3 = (double *)(*(code *)*local_1c)(&local_c);
      local_24 = pdVar3[3] - pdVar3[1];
      local_2c = util__Abs(&local_24);
      local_3c = pdVar3[2] + *pdVar3;
      dVar4 = util__Abs(&local_3c);
      local_c = local_c + 1;
      local_2c = dVar4 * /*3fe0000000000000*/0.5 * local_2c;
      local_34 = local_2c + local_2c + local_34;
      local_24 = local_34;
      iVar1 = (*(code *)local_1c[3])();
    } while (local_c < iVar1);
  }
  local_1c = ((void *)(0x00919ae8u));
  if (pvStack_18 != (void *)0x0) {
    operator_delete__(pvStack_18);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00005186d0 005186d0_CraftBlueprintArmor__GetTotalArmorMass_kg_Memoize ====
// decompiled by BatchDecomp @ 005186d0 name=CraftBlueprintArmor_GetTotalArmorMass_kg_Memoize conv=__thiscall body=169

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftBlueprintArmor__GetTotalArmorMass_kg_Memoize(void)const  */

void __thiscall CraftBlueprintArmor__GetTotalArmorMass_kg_Memoize(CraftBlueprintArmor *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  CraftBlueprint *pCVar4;
  undefined4 uVar5;
  double dVar6;
  undefined8 uStack_14;
  undefined8 local_c;
  
  if ((this->ArmorModels).field_0x4 == '\0') {
    iVar2 = *(int *)&(this->GetOuterArmorSpline_m_MemoizedValue).IsValidData;
    local_c = (double)CONCAT44(iVar2 + 1,(undefined4)local_c);
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)
               &(this->GetOuterArmorSpline_m_MemoizedValue).Data.Size,(int *)((int)&local_c + 4));
    bVar1 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &(this->GetOuterArmorSpline_m_MemoizedValue).Data.Size,iVar2);
    if (bVar1) {
      *(code **)((this->GetOuterArmorSpline_m_MemoizedValue).Data.Capacity + -4 +
                *(int *)&(this->GetOuterArmorSpline_m_MemoizedValue).IsValidData * 4) =
           CraftInstance__GetTotalReactionMass_kg_Clear;
    }
    iVar3 = 0;
    local_c = 0.0;
    iVar2 = (**(code **)((this->CraftBlueprintArmorMemoizationHandlerInstance).ResetFunctions.Size +
                        0xc))();
    if (iVar2 < 1) {
      pCVar4 = (CraftBlueprint *)0x0;
      uVar5 = 0;
    }
    else {
      uStack_14 = local_c;
      do {
        dVar6 = GetMassOfArmorLayer_kg(this,iVar3);
        uStack_14 = dVar6 + uStack_14;
        iVar3 = iVar3 + 1;
        local_c = uStack_14;
        iVar2 = (**(code **)((this->CraftBlueprintArmorMemoizationHandlerInstance).ResetFunctions.
                             Size + 0xc))();
      } while (iVar3 < iVar2);
      pCVar4 = *(undefined4 *)&local_c;
      uVar5 = *(undefined4 *)((char *)&local_c + 4);
    }
    dVar6 = uStack_14;
    uStack_14 = (double)CONCAT71(((slice_view *)&uStack_14)->_1_7_,1);
    ((slice_view *)&uStack_14)->_4_4_ = SUB84(dVar6,4);
    this->Parent = pCVar4;
    *(undefined4 *)&this->ArmorModels = uVar5;
    *(undefined4 *)((char *)&(this->ArmorModels) + 0x4) = (undefined4)uStack_14;
    *(undefined4 *)((char *)&(this->ArmorModels) + 0x8) = ((slice_view *)&uStack_14)->_4_4_;
  }
  return;
}


//==== 000051aee0 0051aee0_CraftBlueprintArmor__RenderStrutsSimple ====
// decompiled by BatchDecomp @ 0051aee0 name=RenderStrutsSimple conv=__thiscall body=41

/* public: void __thiscall CraftBlueprintArmor__RenderStrutsSimple(void)const  */

void __thiscall CraftBlueprintArmor__RenderStrutsSimple(CraftBlueprintArmor *this)

{
  bool bVar1;
  
  bVar1 = IsReadyToRender(this);
  if (bVar1) {
    bVar1 = VertexBufferObjectInterface__IsGenerated((VertexBufferObjectInterface *)
                       this[1].GetInnerArmorSegments_m_MemoizedValue.Data.Capacity);
    if (bVar1) {
      VertexBufferObjectInterface__Render((VertexBufferObjectInterface *)
                 this[1].GetInnerArmorSegments_m_MemoizedValue.Data.Capacity);
      return;
    }
  }
  return;
}


//==== 000052b350 0052b350_CraftInstance__DememoizeAllExceptShape ====
// decompiled by BatchDecomp @ 0052b350 name=DememoizeAllExceptShape conv=__thiscall body=1113

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__DememoizeAllExceptShape(void) */

void __thiscall CraftInstance__DememoizeAllExceptShape(CraftInstance *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  undefined **local_14;
  void *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = ((void *)(0x0091e0b8u));
  local_10 = (void *)0x0;
  local_c = 0;
  local_8 = 0;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &this->GetWorkingCompartments_MemoizedValue,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_14);
  (this->GetWorkingCompartments_MemoizedValue).IsValidData = false;
  local_14 = ((void *)(0x0091e0b8u));
  local_10 = (void *)0x0;
  local_c = 0;
  local_8 = 0;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &this->GetEngineModules_MemoizedValue,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_14);
  (this->GetEngineModules_MemoizedValue).IsValidData = false;
  local_14 = ((void *)(0x0091db14u));
  local_10 = (void *)0x0;
  local_c = 0;
  local_8 = 0;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &this->GetReactionMassModules_MemoizedValue,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  (this->GetReactionMassModules_MemoizedValue).IsValidData = false;
  local_14 = ((void *)(0x0091db14u));
  local_10 = (void *)0x0;
  local_c = 0;
  local_8 = 0;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &this->GetWeaponModules_MemoizedValue,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  (this->GetWeaponModules_MemoizedValue).IsValidData = false;
  local_14 = ((void *)(0x0091e0b8u));
  local_10 = (void *)0x0;
  local_c = 0;
  local_8 = 0;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &this->GetPayloadModules_MemoizedValue,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_14);
  (this->GetPayloadModules_MemoizedValue).IsValidData = false;
  local_14 = ((void *)(0x0091e0b8u));
  local_10 = (void *)0x0;
  local_c = 0;
  local_8 = 0;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &this->GetPowerModules_MemoizedValue,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_14);
  (this->GetPowerModules_MemoizedValue).IsValidData = false;
  local_14 = ((void *)(0x0091e0b8u));
  local_10 = (void *)0x0;
  local_c = 0;
  local_8 = 0;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &this->GetAmmoModules_MemoizedValue,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_14);
  (this->GetAmmoModules_MemoizedValue).IsValidData = false;
  local_14 = ((void *)(0x0091e0b8u));
  local_10 = (void *)0x0;
  local_c = 0;
  local_8 = 0;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &this->GetRadiatorModules_MemoizedValue,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_14);
  (this->GetRadiatorModules_MemoizedValue).IsValidData = false;
  local_14 = ((void *)(0x0091e0b8u));
  local_10 = (void *)0x0;
  local_c = 0;
  local_8 = 0;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &this->GetCommandModules_MemoizedValue,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_14);
  (this->GetCommandModules_MemoizedValue).IsValidData = false;
  local_14 = ((void *)(0x0091e0b8u));
  local_10 = (void *)0x0;
  local_c = 0;
  local_8 = 0;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &this->GetMainEngineModules_MemoizedValue,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_14);
  (this->GetMainEngineModules_MemoizedValue).IsValidData = false;
  local_14 = ((void *)(0x0091e0b8u));
  local_10 = (void *)0x0;
  local_c = 0;
  local_8 = 0;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &this->GetCapableEngineModules_MemoizedValue,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_14);
  (this->GetCapableEngineModules_MemoizedValue).IsValidData = false;
  local_14 = ((void *)(0x0091e0b8u));
  local_10 = (void *)0x0;
  local_c = 0;
  local_8 = 0;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &this->GetCapableMainEngineModules_MemoizedValue,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_14);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_14);
  (this->GetCapableMainEngineModules_MemoizedValue).IsValidData = false;
  local_14 = ((void *)(0x009194a4u));
  local_10 = (void *)0x0;
  local_c = 0;
  local_8 = 0;
  util__Darray_class_Module____operator
            ((Darray_L_class_Module_P_G_ *)&this->GetUsableReactionMassTypes_MemoizedValue,
             (Darray_L_class_Module_P_G_ *)&local_14);
  local_14 = ((void *)(0x009194a4u));
  if (local_10 != (void *)0x0) {
    operator_delete__(local_10);
  }
  (this->GetUsableReactionMassTypes_MemoizedValue).IsValidData = false;
  (this->GetFullBurnTimeLeft_s_MemoizedValue).Data = 0.0;
  (this->GetFullBurnTimeLeft_s_MemoizedValue).IsValidData = false;
  (this->GetEstimatedTurnTorque_N_m_MemoizedValue).Data = 0.0;
  (this->GetEstimatedTurnTorque_N_m_MemoizedValue).IsValidData = false;
  (this->GetEstimatedRollTorque_N_m_MemoizedValue).Data = 0.0;
  (this->GetEstimatedRollTorque_N_m_MemoizedValue).IsValidData = false;
  (this->CanRoll_MemoizedValue).Data = false;
  (this->CanRoll_MemoizedValue).IsValidData = false;
  (this->GetUnstagedDryMass_kg_MemoizedValue).Data = 0.0;
  (this->GetUnstagedDryMass_kg_MemoizedValue).IsValidData = false;
  (this->GetUnstagedWetMass_kg_MemoizedValue).Data = 0.0;
  (this->GetUnstagedWetMass_kg_MemoizedValue).IsValidData = false;
  (this->GetStagingDryMass_kg_MemoizedValue).Data = 0.0;
  (this->GetStagingDryMass_kg_MemoizedValue).IsValidData = false;
  uVar7 = ((slice_view *)&DAT_0091d468)->_4_4_;
  uVar5 = (undefined4)DAT_0091d468;
  uVar3 = _UNK_0091d464;
  uVar1 = ___xmm_00000000000000003ff0000000000000;
  (this->GetStagingWetMass_kg_MemoizedValue).Data = 0.0;
  (this->GetStagingWetMass_kg_MemoizedValue).IsValidData = false;
  dVar9 = /*3ff0000000000000*/1.0;
  (this->GetTotalDryMass_kg_MemoizedValue).Data = 0.0;
  (this->GetTotalDryMass_kg_MemoizedValue).IsValidData = false;
  (this->GetTotalReactionMass_kg_MemoizedValue).Data = 0.0;
  (this->GetTotalReactionMass_kg_MemoizedValue).IsValidData = false;
  *(undefined4 *)&(this->GetTotalMass_kg_MemoizedValue).Data = 0;
  *(undefined4 *)((int)&(this->GetTotalMass_kg_MemoizedValue).Data + 4) = 0;
  *(undefined4 *)&(this->GetTotalMass_kg_MemoizedValue).IsValidData = 0;
  *(undefined4 *)((char *)&(this->GetTotalMass_kg_MemoizedValue) + 0xc) = 0;
  *(undefined1 *)&(this->GetCenterOfMass_km_MemoizedValue).Data.Y = 0;
  uVar8 = ((slice_view *)&DAT_0091d468)->_4_4_;
  uVar6 = (undefined4)DAT_0091d468;
  uVar4 = _UNK_0091d464;
  uVar2 = ___xmm_00000000000000003ff0000000000000;
  (this->GetCenterOfMass_km_MemoizedValue).Data.X = 0.0;
  *(undefined4 *)&(this->GetCenterOfMass_km_MemoizedValue).Data.Z = uVar2;
  *(undefined4 *)((int)&(this->GetCenterOfMass_km_MemoizedValue).Data.Z + 4) = uVar4;
  *(undefined4 *)&(this->GetCenterOfMass_km_MemoizedValue).IsValidData = uVar6;
  *(undefined4 *)((char *)&(this->GetCenterOfMass_km_MemoizedValue) + 0x1c) = uVar8;
  *(undefined1 *)((this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 7) = 0;
  uVar8 = ((slice_view *)&DAT_0091d468)->_4_4_;
  uVar6 = (undefined4)DAT_0091d468;
  uVar4 = _UNK_0091d464;
  uVar2 = ___xmm_00000000000000003ff0000000000000;
  *(undefined4 *)(this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data = 0;
  *(undefined4 *)((int)(this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 4) = 0;
  *(undefined4 *)((this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 1) = 0;
  *(undefined4 *)((int)(this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0xc) = 0;
  *(undefined4 *)((this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 2) = uVar1;
  *(undefined4 *)((int)(this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x14) =
       uVar3;
  *(undefined4 *)((this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 3) = uVar5;
  *(undefined4 *)((int)(this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x1c) =
       uVar7;
  uVar7 = ((slice_view *)&DAT_0091d468)->_4_4_;
  uVar5 = (undefined4)DAT_0091d468;
  uVar3 = _UNK_0091d464;
  uVar1 = ___xmm_00000000000000003ff0000000000000;
  *(undefined4 *)((this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 4) = 0;
  *(undefined4 *)((int)(this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x24) = 0;
  *(undefined4 *)((this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 5) = 0;
  *(undefined4 *)((int)(this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x2c) = 0;
  (this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data[6] = dVar9;
  *(undefined4 *)((this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 8) = uVar2;
  *(undefined4 *)((int)(this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x44) =
       uVar4;
  *(undefined4 *)&(this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).IsValidData = uVar6;
  *(undefined4 *)((char *)&(this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue) + 0x4c) = uVar8;
  *(undefined1 *)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 7) = 0;
  *(undefined4 *)(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data = 0;
  *(undefined4 *)((int)(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 4) =
       0;
  *(undefined4 *)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 1) = 0;
  *(undefined4 *)((int)(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0xc)
       = 0;
  *(undefined4 *)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 2) = uVar1
  ;
  *(undefined4 *)((int)(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x14)
       = uVar3;
  *(undefined4 *)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 3) = uVar5
  ;
  *(undefined4 *)((int)(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x1c)
       = uVar7;
  *(undefined4 *)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 4) = 0;
  *(undefined4 *)((int)(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x24)
       = 0;
  *(undefined4 *)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 5) = 0;
  *(undefined4 *)((int)(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x2c)
       = 0;
  (this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data[6] = dVar9;
  *(undefined2 *)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 8) = 0;
  (this->GetTightenedRadius_km_MemoizedValue).Data = 0.0;
  (this->GetTightenedRadius_km_MemoizedValue).IsValidData = false;
  *(undefined4 *)&(this->GetHeatSignature_W_MemoizedValue).Data = 0;
  *(undefined4 *)((int)&(this->GetHeatSignature_W_MemoizedValue).Data + 4) = 0;
  *(undefined4 *)&(this->GetHeatSignature_W_MemoizedValue).IsValidData = 0;
  *(undefined4 *)((char *)&(this->GetHeatSignature_W_MemoizedValue) + 0xc) = 0;
  *(undefined1 *)&(this->GetHeatSignatureOffset_m_MemoizedValue).Data.Y = 0;
  (this->GetHeatSignatureOffset_m_MemoizedValue).Data.X = 0.0;
  return;
}


//==== 000052f630 0052f630_CraftInstance__GetInverseMomentOfInertiaTensor_kg_m2_Clear ====
// decompiled by BatchDecomp @ 0052f630 name=GetInverseMomentOfInertiaTensor_kg_m2_Clear conv=__thiscall body=72

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetInverseMomentOfInertiaTensor_kg_m2_Clear(void)const  */

void __thiscall CraftInstance__GetInverseMomentOfInertiaTensor_kg_m2_Clear(CraftInstance *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  
  dVar5 = /*3ff0000000000000*/1.0;
  uVar4 = ((slice_view *)&DAT_0091d468)->_4_4_;
  uVar3 = (undefined4)DAT_0091d468;
  uVar2 = _UNK_0091d464;
  uVar1 = ___xmm_00000000000000003ff0000000000000;
  *(undefined4 *)((this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 8) =
       ___xmm_00000000000000003ff0000000000000;
  *(undefined4 *)((int)(this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x44) =
       uVar2;
  *(undefined4 *)&(this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).IsValidData = uVar3;
  *(undefined4 *)((char *)&(this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue) + 0x4c) = uVar4;
  *(undefined1 *)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 7) = 0;
  *(undefined4 *)(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data = 0;
  *(undefined4 *)((int)(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 4) =
       0;
  *(undefined4 *)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 1) = 0;
  *(undefined4 *)((int)(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0xc)
       = 0;
  *(undefined4 *)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 2) = uVar1
  ;
  *(undefined4 *)((int)(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x14)
       = uVar2;
  *(undefined4 *)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 3) = uVar3
  ;
  *(undefined4 *)((int)(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x1c)
       = uVar4;
  *(undefined4 *)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 4) = 0;
  *(undefined4 *)((int)(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x24)
       = 0;
  *(undefined4 *)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 5) = 0;
  *(undefined4 *)((int)(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x2c)
       = 0;
  (this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data[6] = dVar5;
  return;
}


//==== 0000530670 00530670_CraftInstance__GetMomentOfInertiaTensor_kg_m2_Clear ====
// decompiled by BatchDecomp @ 00530670 name=GetMomentOfInertiaTensor_kg_m2_Clear conv=__thiscall body=72

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetMomentOfInertiaTensor_kg_m2_Clear(void)const  */

void __thiscall CraftInstance__GetMomentOfInertiaTensor_kg_m2_Clear(CraftInstance *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  
  dVar5 = /*3ff0000000000000*/1.0;
  uVar4 = ((slice_view *)&DAT_0091d468)->_4_4_;
  uVar3 = (undefined4)DAT_0091d468;
  uVar2 = _UNK_0091d464;
  uVar1 = ___xmm_00000000000000003ff0000000000000;
  *(undefined4 *)&(this->GetCenterOfMass_km_MemoizedValue).Data.Z =
       ___xmm_00000000000000003ff0000000000000;
  *(undefined4 *)((int)&(this->GetCenterOfMass_km_MemoizedValue).Data.Z + 4) = uVar2;
  *(undefined4 *)&(this->GetCenterOfMass_km_MemoizedValue).IsValidData = uVar3;
  *(undefined4 *)((char *)&(this->GetCenterOfMass_km_MemoizedValue) + 0x1c) = uVar4;
  *(undefined1 *)((this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 7) = 0;
  *(undefined4 *)(this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data = 0;
  *(undefined4 *)((int)(this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 4) = 0;
  *(undefined4 *)((this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 1) = 0;
  *(undefined4 *)((int)(this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0xc) = 0;
  *(undefined4 *)((this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 2) = uVar1;
  *(undefined4 *)((int)(this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x14) =
       uVar2;
  *(undefined4 *)((this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 3) = uVar3;
  *(undefined4 *)((int)(this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x1c) =
       uVar4;
  *(undefined4 *)((this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 4) = 0;
  *(undefined4 *)((int)(this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x24) = 0;
  *(undefined4 *)((this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 5) = 0;
  *(undefined4 *)((int)(this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x2c) = 0;
  (this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data[6] = dVar5;
  return;
}


//==== 00005474f0 005474f0_CraftBlueprint__GetAreaOfEffectRadius_m ====
// decompiled by BatchDecomp @ 005474f0 name=GetAreaOfEffectRadius_m conv=__thiscall body=249

/* public: double __thiscall CraftBlueprint__GetAreaOfEffectRadius_m(void)const  */

double __thiscall CraftBlueprint__GetAreaOfEffectRadius_m(CraftBlueprint *this)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  float10 fVar5;
  float10 extraout_ST0;
  void *local_38;
  Darray_L_double_G_ local_24;
  undefined8 local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar2 = (int *)GetPayloadModules(this);
  local_24._pad_0x0_0 = 0;
  local_24.Data = (double *)0x0;
  local_24.Size = 0;
  local_24.Capacity = 0;
  iVar3 = (**(code **)(*piVar2 + 0xc))();
  util__Darray_double___Darray_double(&local_24,iVar3);
  local_c = 0;
  iVar3 = (**(code **)(*piVar2 + 0xc))();
  if (local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)*piVar2)(&local_c);
      fVar5 = (float10)(**(code **)(*(int *)*puVar4 + 0x154))();
      iVar3 = local_24.Size;
      local_14 = (double)CONCAT44(local_24.Size + 1,(undefined4)local_14);
      util__Darray_double___SetSize(&local_24,(int *)((int)&local_14 + 4));
      bVar1 = util__Darray_double___CheckSize(&local_24,iVar3);
      if (bVar1) {
        local_24.Data[local_24.Size + -1] = (double)fVar5;
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*piVar2 + 0xc))();
    } while (local_c < iVar3);
  }
  local_14 = util__GetAreaOfEffectRadius_m(&local_24);
  local_24._pad_0x0_0 = (int)((void *)(0x0091da54u));
  if (local_24.Data != (double *)0x0) {
    operator_delete__(local_24.Data);
  }
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 0000547c90 00547c90_CraftBlueprint__GetCompartment2DOffset_m ====
// decompiled by BatchDecomp @ 00547c90 name=GetCompartment2DOffset_m conv=__thiscall body=569

/* public: struct util__Vec2_L_double_G_ __thiscall CraftBlueprint__GetCompartment2DOffset_m(struct
   ModulePlacer const &,int)const  */

Vec2_L_double_G_ * __thiscall
CraftBlueprint__GetCompartment2DOffset_m(CraftBlueprint *this,Vec2_L_double_G_ *__return_storage_ptr__,ModulePlacer *param_1,
          int param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  Vec2_L_double_G_ *pVVar4;
  undefined4 unaff_EDI;
  double dVar5;
  double dVar6;
  undefined1 local_64[48];
  double local_34;
  Vec2_L_double_G_ local_2c;
  double local_1c;
  double local_14;
  undefined8 local_c;
  
  local_c = (double)CONCAT44(param_2,(undefined4)local_c);
  local_34 = 0.0;
  *(undefined4 *)&__return_storage_ptr__->X = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = 0;
  *(undefined4 *)&__return_storage_ptr__->Y = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = 0;
  cVar1 = (**(code **)(*(int *)param_1->ModuleType + 0x78))();
  if (((cVar1 == '\0') ||
      ((cVar1 = (**(code **)(*(int *)param_1->ModuleType + 0x78))(), cVar1 != '\0' &&
       (param_1->Position_m <= local_34)))) ||
     ((cVar1 = (**(code **)(*(int *)param_1->ModuleType + 0x78))(), cVar1 != '\0' &&
      (local_14 = GetModuleHeightLimit_m(this), local_14 <= param_1->Position_m)))) {
    local_1c = Module__GetPackingRadius_m(param_1->ModuleType);
    if (param_1[1].ModuleType == (Module *)0x0) {
      pVVar4 = util__GetCompartment2DOffset_m(&local_2c,param_1->Multiplier,((slice_view *)&local_c)->_4_4_);
      dVar5 = pVVar4->Y * local_1c;
      dVar6 = pVVar4->X * local_1c;
    }
    else {
      local_2c.Y = GetMaxNonSpinalModulesRadiusForPlacer(this,param_1);
      local_14 = ((double)((slice_view *)&local_c)->_4_4_ * /*401921fb54442d18*/6.283185307179586) / (double)param_1->Multiplier +
                 param_1->Offset_radians;
      local_c = util__Cos(&local_14);
      local_1c = util__Sin(&local_14);
      dVar6 = local_c * local_2c.Y;
      dVar5 = local_1c * local_2c.Y;
    }
  }
  else {
    local_2c.Y = ((double)((slice_view *)&local_c)->_4_4_ * /*401921fb54442d18*/6.283185307179586) / (double)param_1->Multiplier +
                 param_1->Offset_radians;
    local_c = GetCompartmentDistanceFromSpine
                        (this,param_1,
                         (double)CONCAT44(unaff_EDI,(int)((ulonglong)local_2c.Y >> 0x20)));
    bVar2 = IsModuleAFlushEngine(this,param_1);
    dVar5 = local_c;
    if (bVar2) {
      iVar3 = (**(code **)(*(int *)param_1->ModuleType + 0xac))(local_64);
      dVar5 = local_c - *(double *)(iVar3 + 0x10);
    }
    local_c = local_2c.Y;
    local_14 = dVar5;
    local_1c = util__Cos((double *)&local_c);
    local_2c.Y = util__Sin((double *)&local_c);
    dVar6 = local_1c * local_14;
    dVar5 = local_2c.Y * local_14;
  }
  __return_storage_ptr__->X = dVar6;
  __return_storage_ptr__->Y = dVar5;
  dVar5 = __return_storage_ptr__->X;
  if ((((NAN(dVar5)) || (dVar6 = __return_storage_ptr__->Y, NAN(dVar6))) ||
      (((NAN(dVar5) || NAN(local_34)) == (dVar5 == local_34) && (NAN(dVar5 / dVar5))))) ||
     (((NAN(dVar6) || NAN(local_34)) == (dVar6 == local_34) && (NAN(dVar6 / dVar6))))) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\crafts\\craftblueprints.cpp",
                    0x56c,"IsNumericallyValid(Offset_m)",(char *)0x0);
    DebugBreak();
  }
  return __return_storage_ptr__;
}


//==== 0000554320 00554320_CraftBlueprint__GetModuleLocationHeight_m ====
// decompiled by BatchDecomp @ 00554320 name=GetModuleLocationHeight_m conv=__thiscall body=402

/* public: double __thiscall CraftBlueprint__GetModuleLocationHeight_m(struct ModulePlacer const
   &)const  */

double __thiscall
CraftBlueprint__GetModuleLocationHeight_m(CraftBlueprint *this,ModulePlacer *param_1)

{
  ModulePlacer *pMVar1;
  char cVar2;
  int *piVar3;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  undefined **local_1c;
  void *pvStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  cVar2 = (**(code **)(*(int *)param_1->ModuleType + 0x78))();
  if (cVar2 != '\0') {
    GetModuleHeightLimit_m(this);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return (double)extraout_ST0;
  }
  if (0 < (int)param_1[1].ModuleType) {
    GetModuleHeightLimit_m(this);
    (**(code **)(*(int *)param_1->ModuleType + 0xa8))();
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return (double)extraout_ST0_00;
  }
  local_1c = (undefined **)0x0;
  pvStack_18 = (void *)0x0;
  iStack_14 = 0;
  uStack_10 = 0;
  CraftBlueprint__GetSortedSpinalModules_Memoize(this);
  if ((this->GetStagingReactionMass_kg_MemoizedValue).field_0xc == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  util__Darray_bool____Darray_bool((Darray_L_bool_P_G_ *)&local_1c,
             (Darray_L_bool_P_G_ *)(char *)&(this->GetUnstagedReactionMass_kg_MemoizedValue) + 0xc);
  GetModuleLocationInitalOffset_m(this);
  local_c = 0;
  if (0 < iStack_14) {
    do {
      piVar3 = (int *)(*(code *)*local_1c)(&local_c);
      pMVar1 = (ModulePlacer *)*piVar3;
      (**(code **)(*(int *)pMVar1->ModuleType + 0xa8))();
      if (param_1 == pMVar1) break;
      local_c = local_c + 1;
    } while (local_c < iStack_14);
  }
  local_1c = ((void *)(0x009194a4u));
  if (pvStack_18 != (void *)0x0) {
    operator_delete__(pvStack_18);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0_01;
}


//==== 0000554520 00554520_CraftBlueprint__GetModuleLocationInitalOffset_m ====
// decompiled by BatchDecomp @ 00554520 name=GetModuleLocationInitalOffset_m conv=__thiscall body=173

/* WARNING: Removing unreachable block (ram,0x00554555) */
/* WARNING: Removing unreachable block (ram,0x0055456f) */
/* WARNING: Removing unreachable block (ram,0x00554594) */
/* WARNING: Removing unreachable block (ram,0x00554599) */
/* WARNING: Removing unreachable block (ram,0x005545b3) */
/* public: double __thiscall CraftBlueprint__GetModuleLocationInitalOffset_m(void)const  */

double __thiscall CraftBlueprint__GetModuleLocationInitalOffset_m(CraftBlueprint *this)

{
  uint uVar1;
  float10 extraout_ST0;
  
  uVar1 = __security_cookie ^ (uint)&stack0xfffffffc;
  GetAttachingModules(this);
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 000061b6d0 0061b6d0_WeaponCompartment___scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 0061b6d0 name=`scalar_deleting_destructor' conv=__thiscall body=66

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall WeaponCompartment::`scalar deleting destructor'(unsigned int)
    */

void * __thiscall
WeaponCompartment___scalar_deleting_destructor_(WeaponCompartment *this,uint param_1)

{
  ReferenceController *this_00;
  
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&(this->CachedAmmoCompartments).Data);
  this_00 = (this->CurrentFrameTarget).Controller;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  ModuleCompartment_ModuleCompartment__o2((ModuleCompartment *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,0x200);
  }
  return this;
}


//==== 000061b720 0061b720_WeaponCompartment__Disable ====
// decompiled by BatchDecomp @ 0061b720 name=Disable conv=__thiscall body=8

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall WeaponCompartment__Disable(void) */

void __thiscall WeaponCompartment__Disable(WeaponCompartment *this)

{
  this->Disabled = true;
  return;
}


//==== 000061c440 0061c440_WeaponCompartment__GetRawCurrentDirection ====
// decompiled by BatchDecomp @ 0061c440 name=GetRawCurrentDirection conv=__thiscall body=33

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct Vec3_L_double_G_ __thiscall WeaponCompartment__GetRawCurrentDirection(void)const
    */

Vec3_L_double_G_ * __thiscall
WeaponCompartment__GetRawCurrentDirection(WeaponCompartment *this,Vec3_L_double_G_ *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)((int)&(this->CurrentDirection).X + 4);
  uVar2 = *(undefined4 *)&(this->CurrentDirection).Y;
  uVar3 = *(undefined4 *)((int)&(this->CurrentDirection).Y + 4);
  *(undefined4 *)&__return_storage_ptr__->X = *(undefined4 *)&(this->CurrentDirection).X;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Y = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = uVar3;
  __return_storage_ptr__->Z = (this->CurrentDirection).Z;
  return __return_storage_ptr__;
}


//==== 000061c670 0061c670_WeaponCompartment__IsDisabled ====
// decompiled by BatchDecomp @ 0061c670 name=IsDisabled conv=__thiscall body=7

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual bool __thiscall WeaponCompartment__IsDisabled(void)const  */

bool __thiscall WeaponCompartment__IsDisabled(WeaponCompartment *this)

{
  return this->Disabled;
}


//==== 000061d980 0061d980_WeaponCompartment__ToggleEnabled ====
// decompiled by BatchDecomp @ 0061d980 name=ToggleEnabled conv=__thiscall body=17

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall WeaponCompartment__ToggleEnabled(void) */

void __thiscall WeaponCompartment__ToggleEnabled(WeaponCompartment *this)

{
  this->Disabled = this->Disabled == false;
  return;
}


//==== 000061e8f0 0061e8f0_WeaponCompartment__GetInternalAmmoLeft ====
// decompiled by BatchDecomp @ 0061e8f0 name=GetInternalAmmoLeft conv=__thiscall body=7

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: int __thiscall WeaponCompartment__GetInternalAmmoLeft(void)const  */

int __thiscall WeaponCompartment__GetInternalAmmoLeft(WeaponCompartment *this)

{
  return this->InternalAmmo;
}


//==== 000061fef0 0061fef0_WeaponCompartment__FireWeapon ====
// decompiled by BatchDecomp @ 0061fef0 name=FireWeapon conv=__thiscall body=72

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall WeaponCompartment__FireWeapon(class util::SharedPtr<class
   Body>,class util::WeakPtr<class Body>,double,struct util::PhysicalState<struct util::Vec3<double>
   >) */

void __thiscall
WeaponCompartment__FireWeapon(undefined4 param_1,int *param_2,ReferenceController *param_3,undefined4 param_4,
          ReferenceController *param_5)

{
  bool bVar1;
  ReferenceControllerRegistry *this;
  
  if (param_3 != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__ReleaseStrongReference(param_3);
    if (bVar1) {
      if (param_2 != (int *)0x0) {
        (**(code **)(*param_2 + 4))(1);
      }
      this = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(this,param_2);
    }
  }
  if (param_5 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_5);
  }
  return;
}


//==== 000065e990 0065e990_WeaponCompartment__CalculateFiringDirection ====
// decompiled by BatchDecomp @ 0065e990 name=CalculateFiringDirection conv=__thiscall body=174

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: class util::Maybe<struct util::tuple3<struct util::Vec3<double>,struct
   util::Vec3<double>,double> > __thiscall WeaponCompartment__CalculateFiringDirection(struct
   util::PhysicalState<struct util::Vec3<double> >,struct util::PhysicalState<struct
   util::Vec3<double> >,double)const  */

undefined4 __thiscall
WeaponCompartment__CalculateFiringDirection(undefined4 param_1,undefined4 param_2,double param_3,double param_4,double param_5,
          double param_6,double param_7,double param_8,double param_9,double param_10,
          double param_11,double param_12,double param_13,double param_14,double param_15)

{
  Vec3_L_double_G_ VVar1;
  Vec3_L_double_G_ VVar2;
  
  if (param_15 <= /*0000000000000000*/0.0) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\modules\\weaponmodules\\weaponmodules.cpp"
                    ,0x2d3,"FiringSpeed_km__s > 0",(char *)0x0);
    DebugBreak();
  }
  ((slice_view *)&VVar1)->_4_8_ = param_9 - param_3;
  ((slice_view *)&VVar1.X)->_0_4_ = param_2;
  ((slice_view *)&VVar1)->_12_8_ = param_10 - param_4;
  ((slice_view *)&VVar1.Z)->_4_4_ = *(undefined4 *)&param_11 - param_5;
  ((slice_view *)&VVar2)->_4_8_ = param_12 - param_6;
  ((slice_view *)&VVar2.X)->_0_4_ = (int)((ulonglong)(param_11 - param_5) >> 0x20);
  ((slice_view *)&VVar2.Y)->_4_4_ = *(undefined4 *)&param_13 - param_7;
  ((slice_view *)&VVar2.Z)->_0_4_ = (int)((ulonglong)(param_13 - param_7) >> 0x20);
  ((slice_view *)&VVar2.Z)->_4_4_ = *(undefined4 *)&param_14 - param_8;
util__CalculateFiringDirection(VVar1,VVar2,
             (double)CONCAT44(SUB84(param_15,0),(int)((ulonglong)(param_14 - param_8) >> 0x20)));
  return param_2;
}


//==== 000065ea40 0065ea40_WeaponCompartment__CanFire ====
// decompiled by BatchDecomp @ 0065ea40 name=CanFire conv=__thiscall body=32

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual bool __thiscall WeaponCompartment__CanFire(void)const  */

bool __thiscall WeaponCompartment__CanFire(WeaponCompartment *this)

{
  char cVar1;
  
  if (this->IsFiring == false) {
    cVar1 = (**(code **)(*(int *)this->_pad_0x0_0 + 0x16c))();
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}


//==== 000065ea60 0065ea60_WeaponCompartment__CanLaunchAndRespectLaunchCap ====
// decompiled by BatchDecomp @ 0065ea60 name=CanLaunchAndRespectLaunchCap conv=__thiscall body=174

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall WeaponCompartment__CanLaunchAndRespectLaunchCap(void)const  */

bool __thiscall WeaponCompartment__CanLaunchAndRespectLaunchCap(WeaponCompartment *this)

{
  TacticalManager *this_00;
  bool bVar1;
  bool bVar2;
  CraftBlueprint *pCVar3;
  int iVar4;
  int iVar5;
  
  if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
    if (!bVar1) {
      this->_pad_0x0_0 = 0;
    }
  }
  this_00 = *(TacticalManager **)(this->_pad_0x0_0 + 0x1dc);
  pCVar3 = (CraftBlueprint *)(**(code **)(*(int *)this->_pad_0x0_0 + 0x188))();
  iVar4 = (**(code **)(*(int *)this->_pad_0x0_0 + 0x18c))();
  bVar1 = Manager__IsCurrentlyTheActiveManager((Manager *)this_00);
  if (bVar1) {
    bVar1 = TacticalManager__IsSessionCombat(this_00);
    if (bVar1) {
      bVar1 = true;
      goto LAB_0065eac5;
    }
  }
  bVar1 = false;
LAB_0065eac5:
  if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
    if (!bVar2) {
      this->_pad_0x0_0 = 0;
    }
  }
  iVar5 = TacticalManager__GetCraftCount(this_00,*(Faction **)(this->_pad_0x0_0 + 0x1e0),pCVar3);
  if (((bVar1) && (iVar4 <= iVar5)) && (iVar4 != 0)) {
    return false;
  }
  return true;
}


//==== 000065fa20 0065fa20_WeaponCompartment__EndOfSessionResolution ====
// decompiled by BatchDecomp @ 0065fa20 name=EndOfSessionResolution conv=__thiscall body=99

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual bool __thiscall WeaponCompartment__EndOfSessionResolution(void) */

bool __thiscall WeaponCompartment__EndOfSessionResolution(WeaponCompartment *this)

{
  bool bVar1;
  Vec3_L_double_G_ local_1c;
  
  *(undefined4 *)&this->ReloadTimeLeft_s = 0;
  *(undefined4 *)((int)&this->ReloadTimeLeft_s + 4) = 0;
  *(undefined4 *)&this->ChargingTimeLeft_s = 0;
  *(undefined4 *)((int)&this->ChargingTimeLeft_s + 4) = 0;
  (this->CachedAmmoCompartments)._pad_0x0_0 = 0;
  FixedOrbit__GetPlanarNormal(&local_1c);
  *(undefined4 *)&(this->TargetDirection).X = ((slice_view *)&local_1c.X)->_0_4_;
  *(undefined4 *)((int)&(this->TargetDirection).X + 4) = ((slice_view *)&local_1c.X)->_4_4_;
  *(undefined4 *)&(this->TargetDirection).Y = ((slice_view *)&local_1c.Y)->_0_4_;
  *(undefined4 *)((int)&(this->TargetDirection).Y + 4) = ((slice_view *)&local_1c.Y)->_4_4_;
  this->IsFiring = false;
  *(undefined4 *)&(this->CurrentDirection).X = ((slice_view *)&local_1c.X)->_0_4_;
  *(undefined4 *)((int)&(this->CurrentDirection).X + 4) = ((slice_view *)&local_1c.X)->_4_4_;
  *(undefined4 *)&(this->CurrentDirection).Y = ((slice_view *)&local_1c.Y)->_0_4_;
  *(undefined4 *)((int)&(this->CurrentDirection).Y + 4) = ((slice_view *)&local_1c.Y)->_4_4_;
  (this->TargetDirection).Z = local_1c.Z;
  (this->CurrentDirection).Z = local_1c.Z;
  bVar1 = ModuleCompartment__EndOfSessionResolution((ModuleCompartment *)this);
  return bVar1;
}


//==== 000065fa90 0065fa90_WeaponCompartment__ExpendPercentOfInternalAmmo ====
// decompiled by BatchDecomp @ 0065fa90 name=ExpendPercentOfInternalAmmo conv=__thiscall body=46

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall WeaponCompartment__ExpendPercentOfInternalAmmo(double) */

void __thiscall
WeaponCompartment__ExpendPercentOfInternalAmmo(WeaponCompartment *this,double param_1)

{
  this->InternalAmmo = (int)((/*3ff0000000000000*/1.0 - param_1) * (double)this->InternalAmmo);
  return;
}


//==== 0000661910 00661910_WeaponCompartment__GetAmmoCompartments ====
// decompiled by BatchDecomp @ 00661910 name=GetAmmoCompartments conv=__thiscall body=228

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Darray<class util::WeakPtr<struct AmmoCompartment> > __thiscall
   WeaponCompartment__GetAmmoCompartments(void)const  */

void __thiscall WeaponCompartment__GetAmmoCompartments(WeaponCompartment *this)

{
  WeakPtr_L_AmmoCompartment_G_ **ppWVar1;
  ReferenceController *this_00;
  ReferenceController *this_01;
  bool bVar2;
  int iVar3;
  int *piVar4;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *in_stack_00000004;
  int local_14;
  undefined1 local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  ppWVar1 = &(this->CachedAmmoCompartments).Data;
  local_10 = 0;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  iVar3 = (*(code *)(*ppWVar1)[1].Controller)();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body(in_stack_00000004,iVar3);
  local_c = 0;
  iVar3 = (*(code *)(*ppWVar1)[1].Controller)();
  if (local_c < iVar3) {
    do {
      piVar4 = (int *)(*(code *)(*ppWVar1)->Pointer)(&local_c);
      if (((*piVar4 != 0) && ((ReferenceController *)piVar4[1] != (ReferenceController *)0x0)) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]),
         bVar2)) {
        iVar3 = *(int *)(in_stack_00000004 + 8);
        local_14 = iVar3 + 1;
        util__Darray_class_util__WeakPtr_class_Body_____SetSize(in_stack_00000004,&local_14);
        bVar2 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(in_stack_00000004,iVar3);
        if (bVar2) {
          this_00 = *(ReferenceController **)
                     (*(int *)(in_stack_00000004 + 4) + -4 + *(int *)(in_stack_00000004 + 8) * 8);
          iVar3 = *(int *)(in_stack_00000004 + 4) + *(int *)(in_stack_00000004 + 8) * 8;
          *(int *)(iVar3 + -8) = *piVar4;
          this_01 = (ReferenceController *)piVar4[1];
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
      iVar3 = (*(code *)(*ppWVar1)[1].Controller)();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00006625a0 006625a0_WeaponCompartment__GetDryMass_kg ====
// decompiled by BatchDecomp @ 006625a0 name=GetDryMass_kg conv=__thiscall body=403

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual double __thiscall WeaponCompartment__GetDryMass_kg(void)const  */

double __thiscall WeaponCompartment__GetDryMass_kg(WeaponCompartment *this)

{
  int *piVar1;
  WeaponCompartment *pWVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  float10 extraout_ST0;
  AmmoInfo local_100;
  AmmoInfo local_90;
  WeaponCompartment *local_20;
  undefined8 local_1c;
  double dStack_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar7 = false;
  local_c = 0;
  piVar1 = (int *)this->_pad_0x0_0;
  local_20 = this;
  if ((char)piVar1[0x1e] == '\0') {
    iVar5 = piVar1[0x22];
    local_c = iVar5 + 1;
    util__Darray_struct_util__tuple2_enum_Order__Type_int_____SetSize((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)(piVar1 + 0x20),&local_c);
    bVar4 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)(piVar1 + 0x20),iVar5);
    if (bVar4) {
      iVar5 = piVar1[0x21];
      iVar6 = piVar1[0x22];
      *(code **)(iVar5 + -8 + iVar6 * 8) =
           SpacecraftComponent__GetEstimatedMaxAngularAcceleration_radians__s2_Clear;
      *(undefined4 *)(iVar5 + -4 + iVar6 * 8) = 0;
    }
    iVar5 = (**(code **)(*piVar1 + 0x17c))(&local_100);
    if (*(char *)(iVar5 + 0x68) == '\0') {
      dStack_14 = 0.0;
    }
    else {
      iVar5 = (**(code **)(*piVar1 + 0x17c))(&local_90);
      if (*(char *)(iVar5 + 0x68) == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      local_c = 0;
      dStack_14 = 0.0;
      iVar6 = (**(code **)(*(int *)(iVar5 + 0x10) + 0xc))();
      if (local_c < iVar6) {
        do {
          iVar6 = (*(code *)**(undefined4 **)(iVar5 + 0x10))(&local_c);
          dStack_14 = *(double *)(iVar6 + 8) + dStack_14;
          local_c = local_c + 1;
          iVar6 = (**(code **)(*(int *)(iVar5 + 0x10) + 0xc))();
        } while (local_c < iVar6);
      }
      bVar7 = true;
    }
    if (bVar7) {
      AmmoInfo___AmmoInfo(&local_90);
    }
    AmmoInfo___AmmoInfo(&local_100);
    dVar3 = dStack_14;
    local_1c = dStack_14;
    dStack_14 = (double)CONCAT71(((slice_view *)&dStack_14)->_1_7_,1);
    ((slice_view *)&local_1c)->_0_4_ = *(undefined4 *)&dVar3;
    ((slice_view *)&local_1c)->_4_4_ = (int)((ulonglong)dVar3 >> 0x20);
    piVar1[0x1c] = (int)local_1c;
    piVar1[0x1d] = ((slice_view *)&local_1c)->_4_4_;
    piVar1[0x1e] = ((slice_view *)&dStack_14)->_0_4_;
    piVar1[0x1f] = ((slice_view *)&local_1c)->_4_4_;
    local_1c = dVar3;
  }
  pWVar2 = local_20;
  if ((char)piVar1[0x1e] == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dStack_14 = (double)pWVar2->InternalAmmo * *(double *)(piVar1 + 0x1c) +
              *(double *)&pWVar2->_pad_0x0_0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 0000662740 00662740_WeaponCompartment__GetExternalAmmoLeft ====
// decompiled by BatchDecomp @ 00662740 name=GetExternalAmmoLeft conv=__thiscall body=151

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: int __thiscall WeaponCompartment__GetExternalAmmoLeft(void)const  */

int __thiscall WeaponCompartment__GetExternalAmmoLeft(WeaponCompartment *this)

{
  WeakPtr_L_AmmoCompartment_G_ **ppWVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  ppWVar1 = &(this->CachedAmmoCompartments).Data;
  iVar5 = 0;
  local_c = 0;
  iVar3 = (*(code *)(this->CachedAmmoCompartments).Data[1].Controller)();
  if (local_c < iVar3) {
    do {
      piVar4 = (int *)(*(code *)(*ppWVar1)->Pointer)(&local_c);
      if (((*piVar4 == 0) || ((ReferenceController *)piVar4[1] == (ReferenceController *)0x0)) ||
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]),
         !bVar2)) {
        iVar3 = 0;
      }
      else {
        if (((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) &&
           (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]),
           !bVar2)) {
          *piVar4 = 0;
        }
        iVar3 = *(int *)(*piVar4 + 0x118);
      }
      local_c = local_c + 1;
      iVar5 = iVar5 + iVar3;
      iVar3 = (*(code *)(*ppWVar1)[1].Controller)();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar5;
}


//==== 00006655a0 006655a0_WeaponCompartment__GetShotsFired ====
// decompiled by BatchDecomp @ 006655a0 name=GetShotsFired conv=__thiscall body=7

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: int __thiscall WeaponCompartment__GetShotsFired(void)const  */

int __thiscall WeaponCompartment__GetShotsFired(WeaponCompartment *this)

{
  return (this->CachedAmmoCompartments)._pad_0x0_0;
}


//==== 0000665cd0 00665cd0_WeaponCompartment__GetTotalAmmoLeft ====
// decompiled by BatchDecomp @ 00665cd0 name=GetTotalAmmoLeft conv=__thiscall body=16

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: int __thiscall WeaponCompartment__GetTotalAmmoLeft(void)const  */

int __thiscall WeaponCompartment__GetTotalAmmoLeft(WeaponCompartment *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = this->InternalAmmo;
  iVar2 = GetExternalAmmoLeft(this);
  return iVar2 + iVar1;
}


//==== 00006664a0 006664a0_WeaponCompartment__HasAmmo ====
// decompiled by BatchDecomp @ 006664a0 name=HasAmmo conv=__thiscall body=200

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall WeaponCompartment__HasAmmo(void)const  */

bool __thiscall WeaponCompartment__HasAmmo(WeaponCompartment *this)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  WeakPtr_L_AmmoCompartment_G_ **ppWVar6;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  cVar1 = (**(code **)(*(int *)this->_pad_0x0_0 + 0x180))();
  if ((cVar1 != '\0') && (this->InternalAmmo < 1)) {
    ppWVar6 = &(this->CachedAmmoCompartments).Data;
    local_c = 0;
    iVar4 = (*(code *)(this->CachedAmmoCompartments).Data[1].Controller)();
    if (local_c < iVar4) {
      do {
        piVar5 = (int *)(*(code *)(*ppWVar6)->Pointer)(&local_c);
        if ((*piVar5 != 0) && ((ReferenceController *)piVar5[1] != (ReferenceController *)0x0)) {
          bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]);
          if (bVar2) {
            if ((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) {
              bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]);
              if (!bVar2) {
                *piVar5 = 0;
              }
            }
            if (0 < *(int *)(*piVar5 + 0x118)) goto LAB_00666556;
          }
        }
        local_c = local_c + 1;
        iVar4 = (*(code *)(*ppWVar6)[1].Controller)();
      } while (local_c < iVar4);
    }
    uVar3 = 0;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return (bool)uVar3;
  }
LAB_00666556:
  uVar3 = 1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar3;
}


//==== 00006671b0 006671b0_WeaponCompartment__IsReloadedAndCharged ====
// decompiled by BatchDecomp @ 006671b0 name=IsReloadedAndCharged conv=__thiscall body=45

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall WeaponCompartment__IsReloadedAndCharged(void)const  */

bool __thiscall WeaponCompartment__IsReloadedAndCharged(WeaponCompartment *this)

{
  if ((NAN(this->ReloadTimeLeft_s) != (this->ReloadTimeLeft_s == 0.0)) &&
     (NAN(this->ChargingTimeLeft_s) != (this->ChargingTimeLeft_s == 0.0))) {
    return true;
  }
  return false;
}


//==== 00006672c0 006672c0_WeaponCompartment__PreTick ====
// decompiled by BatchDecomp @ 006672c0 name=PreTick conv=__thiscall body=10

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall WeaponCompartment__PreTick(double) */

void __thiscall WeaponCompartment__PreTick(WeaponCompartment *this,double param_1)

{
  this->IsFiring = false;
  return;
}


//==== 0000667340 00667340_WeaponCompartment__RunPostFireActions ====
// decompiled by BatchDecomp @ 00667340 name=RunPostFireActions conv=__thiscall body=530

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall WeaponCompartment__RunPostFireActions(double) */

void __thiscall WeaponCompartment__RunPostFireActions(WeaponCompartment *this,double param_1)

{
  Body *pBVar1;
  ReferenceController *pRVar2;
  bool bVar3;
  undefined4 *puVar4;
  float10 fVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  ReferenceController *pRVar9;
  undefined8 local_20;
  undefined8 local_18;
  double local_10;
  char local_5;
  
  if (0.0 < this->ReloadTimeLeft_s) {
    fVar5 = (float10)(**(code **)(*(int *)this->_pad_0x0_0 + 0x1b4))();
    local_10 = this->ReloadTimeLeft_s;
    if (param_1 <= this->ReloadTimeLeft_s) {
      local_10 = param_1;
    }
    local_18 = (double)fVar5;
    puVar4 = (undefined4 *)
util__RunPostFireActions((SpacecraftComponent *)&local_20);
    pRVar9 = (ReferenceController *)puVar4[1];
    uVar8 = *puVar4;
    if (pRVar9 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar9);
    }
    if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
       (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
       !bVar3)) {
      this->_pad_0x0_0 = 0;
    }
    pBVar1 = (Body *)this->_pad_0x0_0;
    Body__GetSpacecraftComponent_Memoize(pBVar1);
    if ((pBVar1->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    pRVar2 = (pBVar1->GetSpacecraftComponent_MemoizedValue).Data.Controller;
    if ((pRVar2 != (ReferenceController *)0x0) &&
       (bVar3 = util__ReferenceController__IsDataStillValid(pRVar2), !bVar3)) {
      (pBVar1->GetSpacecraftComponent_MemoizedValue).Data.Pointer = (SpacecraftComponent *)0x0;
    }
    local_5 = SpacecraftComponent__ConsumePower((pBVar1->GetSpacecraftComponent_MemoizedValue).Data.Pointer,
                         local_10 * local_18,uVar8,pRVar9);
    if (((slice_view *)&local_20)->_4_4_ != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_20)->_4_4_);
    }
    if (local_5 != '\0') {
      dVar7 = this->ReloadTimeLeft_s - local_10;
      dVar6 = 0.0;
      if (0.0 <= dVar7) {
        dVar6 = dVar7;
      }
      this->ReloadTimeLeft_s = dVar6;
    }
  }
  if (0.0 < this->ChargingTimeLeft_s) {
    fVar5 = (float10)(**(code **)(*(int *)this->_pad_0x0_0 + 0x1bc))();
    local_10 = this->ChargingTimeLeft_s;
    if (param_1 <= this->ChargingTimeLeft_s) {
      local_10 = param_1;
    }
    local_20 = (double)fVar5;
    puVar4 = (undefined4 *)
util__RunPostFireActions((SpacecraftComponent *)&local_18);
    pRVar9 = (ReferenceController *)puVar4[1];
    uVar8 = *puVar4;
    if (pRVar9 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar9);
    }
    if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
       (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
       !bVar3)) {
      this->_pad_0x0_0 = 0;
    }
    pBVar1 = (Body *)this->_pad_0x0_0;
    Body__GetSpacecraftComponent_Memoize(pBVar1);
    if ((pBVar1->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    pRVar2 = (pBVar1->GetSpacecraftComponent_MemoizedValue).Data.Controller;
    if ((pRVar2 != (ReferenceController *)0x0) &&
       (bVar3 = util__ReferenceController__IsDataStillValid(pRVar2), !bVar3)) {
      (pBVar1->GetSpacecraftComponent_MemoizedValue).Data.Pointer = (SpacecraftComponent *)0x0;
    }
    bVar3 = SpacecraftComponent__ConsumePower((pBVar1->GetSpacecraftComponent_MemoizedValue).Data.Pointer,
                       local_10 * local_20,uVar8,pRVar9);
    if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_18)->_4_4_);
    }
    if (bVar3) {
      local_10 = this->ChargingTimeLeft_s - local_10;
      dVar6 = 0.0;
      if (0.0 <= local_10) {
        dVar6 = local_10;
      }
      this->ChargingTimeLeft_s = dVar6;
    }
  }
  return;
}


//==== 0000667560 00667560_WeaponCompartment__SetReloadAndChargingTimeLeft ====
// decompiled by BatchDecomp @ 00667560 name=SetReloadAndChargingTimeLeft conv=__thiscall body=68

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall WeaponCompartment__SetReloadAndChargingTimeLeft(void) */

void __thiscall WeaponCompartment__SetReloadAndChargingTimeLeft(WeaponCompartment *this)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = (**(code **)(*(int *)this->_pad_0x0_0 + 0x1d0))();
  if (iVar1 <= (this->CachedAmmoCompartments)._pad_0x0_0) {
    fVar2 = (float10)(**(code **)(*(int *)this->_pad_0x0_0 + 0x1b8))();
    this->ReloadTimeLeft_s = (double)fVar2;
  }
  fVar2 = (float10)(**(code **)(*(int *)this->_pad_0x0_0 + 0x1c0))();
  (this->CachedAmmoCompartments)._pad_0x0_0 = (this->CachedAmmoCompartments)._pad_0x0_0 + 1;
  this->ChargingTimeLeft_s = (double)fVar2;
  return;
}


//==== 0000667900 00667900_WeaponCompartment__ShouldUIActionsBeEnabled ====
// decompiled by BatchDecomp @ 00667900 name=ShouldUIActionsBeEnabled conv=__thiscall body=5

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual bool __thiscall WeaponCompartment__ShouldUIActionsBeEnabled(void)const  */

bool __thiscall WeaponCompartment__ShouldUIActionsBeEnabled(WeaponCompartment *this)

{
  bool bVar1;
  
  bVar1 = HasAmmo(this);
  return bVar1;
}


//==== 0000667ed0 00667ed0_WeaponCompartment__Tick ====
#undef T /* auto(v2): compat 僵尸宏撞成员名 */

// decompiled by BatchDecomp @ 00667ed0 name=Tick conv=__thiscall body=111

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall WeaponCompartment__Tick(double) */

void __thiscall WeaponCompartment__Tick(WeaponCompartment *this,double param_1)

{
  (this->Aimer).Theta.Time_s = param_1 + (this->Aimer).Theta.Time_s;
  (this->Aimer).Z.Time_s = (this->Aimer).Z.Time_s + param_1;
  (this->Aimer).T.Time_s = (this->Aimer).T.Time_s + param_1;
  (this->Aimer).WaverX.Time_s = (this->Aimer).WaverX.Time_s + param_1;
  (this->Aimer).WaverY.Time_s = (this->Aimer).WaverY.Time_s + param_1;
  return;
}


//==== 0000667f40 00667f40_WeaponCompartment__ToggleIgnoreRange ====
// decompiled by BatchDecomp @ 00667f40 name=ToggleIgnoreRange conv=__thiscall body=16

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall WeaponCompartment__ToggleIgnoreRange(bool) */

void __thiscall WeaponCompartment__ToggleIgnoreRange(WeaponCompartment *this,bool param_1)

{
  this->FireEvenIfOutOfRange = param_1;
  return;
}


//==== 0000667f50 00667f50_WeaponCompartment__TriggerReloadHeatingAmmo ====
// decompiled by BatchDecomp @ 00667f50 name=TriggerReloadHeatingAmmo conv=__thiscall body=408

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall WeaponCompartment__TriggerReloadHeatingAmmo(double) */

void __thiscall WeaponCompartment__TriggerReloadHeatingAmmo(WeaponCompartment *this,double param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  WeakPtr_L_AmmoCompartment_G_ **ppWVar5;
  float10 fVar6;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  this->IsFiring = true;
  iVar3 = (**(code **)(*(int *)this->_pad_0x0_0 + 0x1d0))();
  if (iVar3 <= (this->CachedAmmoCompartments)._pad_0x0_0) {
    fVar6 = (float10)(**(code **)(*(int *)this->_pad_0x0_0 + 0x1b8))();
    this->ReloadTimeLeft_s = (double)fVar6;
  }
  fVar6 = (float10)(**(code **)(*(int *)this->_pad_0x0_0 + 0x1c0))();
  piVar4 = (int *)this->_pad_0x0_0;
  (this->CachedAmmoCompartments)._pad_0x0_0 = (this->CachedAmmoCompartments)._pad_0x0_0 + 1;
  this->ChargingTimeLeft_s = (double)fVar6;
  fVar6 = (float10)(**(code **)(*piVar4 + 0x194))(param_1);
  *(double *)&this->_pad_0x0_0 = (double)(fVar6 + (float10)*(double *)&this->_pad_0x0_0);
  cVar1 = (**(code **)(*(int *)this->_pad_0x0_0 + 0x180))();
  if (cVar1 != '\0') {
    if (0 < this->InternalAmmo) {
      this->InternalAmmo = this->InternalAmmo + -1;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    ppWVar5 = &(this->CachedAmmoCompartments).Data;
    local_c = 0;
    iVar3 = (*(code *)(this->CachedAmmoCompartments).Data[1].Controller)();
    if (local_c < iVar3) {
      do {
        piVar4 = (int *)(*(code *)(*ppWVar5)->Pointer)(&local_c);
        if ((*piVar4 != 0) && ((ReferenceController *)piVar4[1] != (ReferenceController *)0x0)) {
          bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]);
          if (bVar2) {
            piVar4 = (int *)(*(code *)(*ppWVar5)->Pointer)(&local_c);
            if ((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) {
              bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]);
              if (!bVar2) {
                *piVar4 = 0;
              }
            }
            if (0 < *(int *)(*piVar4 + 0x118)) {
              piVar4 = (int *)(*(code *)(*ppWVar5)->Pointer)(&local_c);
              if ((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) {
                bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]);
                if (!bVar2) {
                  *piVar4 = 0;
                }
              }
              *(int *)(*piVar4 + 0x118) = *(int *)(*piVar4 + 0x118) + -1;
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return;
            }
          }
        }
        local_c = local_c + 1;
        iVar3 = (*(code *)(*ppWVar5)[1].Controller)();
      } while (local_c < iVar3);
    }
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\modules\\weaponmodules\\weaponmodules.cpp"
                    ,0x400,"0",(char *)0x0);
    DebugBreak();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00006680f0 006680f0_WeaponCompartment__UseAmmo ====
// decompiled by BatchDecomp @ 006680f0 name=UseAmmo conv=__thiscall body=276

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall WeaponCompartment__UseAmmo(void) */

void __thiscall WeaponCompartment__UseAmmo(WeaponCompartment *this)

{
  WeakPtr_L_AmmoCompartment_G_ **ppWVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (0 < this->InternalAmmo) {
    this->InternalAmmo = this->InternalAmmo + -1;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  ppWVar1 = &(this->CachedAmmoCompartments).Data;
  local_c = 0;
  iVar3 = (*(code *)(this->CachedAmmoCompartments).Data[1].Controller)();
  if (local_c < iVar3) {
    do {
      piVar4 = (int *)(*(code *)(*ppWVar1)->Pointer)(&local_c);
      if ((*piVar4 != 0) && ((ReferenceController *)piVar4[1] != (ReferenceController *)0x0)) {
        bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]);
        if (bVar2) {
          piVar4 = (int *)(*(code *)(*ppWVar1)->Pointer)(&local_c);
          if ((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) {
            bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]);
            if (!bVar2) {
              *piVar4 = 0;
            }
          }
          if (0 < *(int *)(*piVar4 + 0x118)) {
            piVar4 = (int *)(*(code *)(*ppWVar1)->Pointer)(&local_c);
            if ((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) {
              bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]);
              if (!bVar2) {
                *piVar4 = 0;
              }
            }
            *(int *)(*piVar4 + 0x118) = *(int *)(*piVar4 + 0x118) + -1;
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
        }
      }
      local_c = local_c + 1;
      iVar3 = (*(code *)(*ppWVar1)[1].Controller)();
    } while (local_c < iVar3);
  }
  util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\modules\\weaponmodules\\weaponmodules.cpp"
                  ,0x400,"0",(char *)0x0);
  DebugBreak();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000785e80 00785e80_HUDItineraryNodeDragger___scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 00785e80 name=`scalar_deleting_destructor' conv=__thiscall body=174

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall HUDItineraryNodeDragger::`scalar deleting destructor'(unsigned
   int) */

void * __thiscall
HUDItineraryNodeDragger___scalar_deleting_destructor_(HUDItineraryNodeDragger *this,uint param_1)

{
  ReferenceController *pRVar1;
  
  pRVar1 = (this->TrueIntercept).Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&this->Markers);
  pRVar1 = (this->CachedOrigin).Data.CachedNearestOrbiter.Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  pRVar1 = (this->CachedOrigin).Data.CachedNearestFleet.Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  pRVar1 = (this->CachedOrigin).Data.CachedNearestBody.Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  pRVar1 = (this->CachedOrigin).Data.CachedGravityBody.Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  pRVar1 = (this->CachedOrigin).Data.Parent.Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  this->_pad_0x0_0 = (int)((void *)(0x0091d1e0u));
  util__Darray_class_util__SharedPtr_struct_UIWidget______Darray_class_util__SharedPtr_struct_UIWidget((Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *)&this->_pad_0x0_0);
  if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)this->_pad_0x0_0);
  }
  UIAttributes___UIAttributes((UIAttributes *)&this->_pad_0x0_0);
  if ((param_1 & 1) != 0) {
    operator_delete(this,0x368);
  }
  return this;
}


//==== 0000786cf0 00786cf0_HUDItineraryNodeDragger__GetIntermediateColors ====
// decompiled by BatchDecomp @ 00786cf0 name=GetIntermediateColors conv=__thiscall body=95

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: struct util::tuple2<enum util::SampleColor::Preset,enum util::SampleColor::Preset>
   __thiscall HUDItineraryNodeDragger__GetIntermediateColors(void)const  */

void __thiscall HUDItineraryNodeDragger__GetIntermediateColors(HUDItineraryNodeDragger *this)

{
  Axis AVar1;
  undefined4 *in_stack_00000004;
  
  AVar1 = this->AxisType;
  if (AVar1 == TanRad) {
    *in_stack_00000004 = 7;
    in_stack_00000004[1] = 8;
    return;
  }
  if (AVar1 != RadPerp) {
    if (AVar1 != PerpTan) {
      *in_stack_00000004 = 0;
      in_stack_00000004[1] = 0;
      return;
    }
    *in_stack_00000004 = 9;
    in_stack_00000004[1] = 7;
    return;
  }
  *in_stack_00000004 = 8;
  in_stack_00000004[1] = 9;
  return;
}


//==== 0000786d50 00786d50_HUDItineraryNodeDragger__GetItinerary ====
// decompiled by BatchDecomp @ 00786d50 name=GetItinerary conv=__thiscall body=108

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: struct Itinerary const & __thiscall HUDItineraryNodeDragger__GetItinerary(void)const  */

Itinerary * __thiscall HUDItineraryNodeDragger__GetItinerary(HUDItineraryNodeDragger *this)

{
  bool bVar1;
  undefined4 *puVar2;
  Itinerary *pIVar3;
  ReferenceController *local_8;
  
  puVar2 = (undefined4 *)StrategicManager__GetSelectedFleet((StrategicManager *)this->_pad_0x0_0);
  if ((ReferenceController *)puVar2[1] != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar2[1]);
    if (!bVar1) {
      *puVar2 = 0;
    }
  }
  pIVar3 = (Itinerary *)Fleet__GetMissionItinerary((Fleet *)*puVar2);
  if (*(char *)&pIVar3[2].FinalOrbit.Data.Elements.SemiMajorAxis_km == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if (local_8 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_8);
  }
  return pIVar3;
}


//==== 0000786dc0 00786dc0_HUDItineraryNodeDragger__GetMainColor ====
// decompiled by BatchDecomp @ 00786dc0 name=GetMainColor conv=__thiscall body=234

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: struct util::Color __thiscall HUDItineraryNodeDragger__GetMainColor(void)const  */

Color * __thiscall
HUDItineraryNodeDragger__GetMainColor(HUDItineraryNodeDragger *this,Color *__return_storage_ptr__)

{
  switch(this->AxisType) {
  case Temporal:
    util__Color__Color(__return_storage_ptr__,LightGray,1.0);
    return __return_storage_ptr__;
  case Tangential:
    util__Color__Color(__return_storage_ptr__,Red,1.0);
    return __return_storage_ptr__;
  case Radial:
    util__Color__Color(__return_storage_ptr__,Green,1.0);
    return __return_storage_ptr__;
  case Perpendicular:
    util__Color__Color(__return_storage_ptr__,Blue,1.0);
    return __return_storage_ptr__;
  case TanRad:
    util__Color__Color(__return_storage_ptr__,Yellow,1.0);
    return __return_storage_ptr__;
  case RadPerp:
    util__Color__Color(__return_storage_ptr__,Cyan,1.0);
    return __return_storage_ptr__;
  case PerpTan:
    util__Color__Color(__return_storage_ptr__,Violet,1.0);
    return __return_storage_ptr__;
  default:
    util__Color__Color(__return_storage_ptr__,White,1.0);
    return __return_storage_ptr__;
  }
}


//==== 00007876a0 007876a0_HUDItineraryNodeDragger__GetOrigin_km ====
// decompiled by BatchDecomp @ 007876a0 name=GetOrigin_km conv=__thiscall body=170

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: struct Vec3_L_double_G_ __thiscall HUDItineraryNodeDragger__GetOrigin_km(void)const
    */

Vec3_L_double_G_ * __thiscall
HUDItineraryNodeDragger__GetOrigin_km(HUDItineraryNodeDragger *this,Vec3_L_double_G_ *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ItineraryNode *pIVar4;
  Vec3_L_double_G_ *pVVar5;
  ItineraryNode local_158;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  StrategicManager__GetSelectedItineraryNode((StrategicManager *)this->_pad_0x0_0,&local_158);
  if ((this->AxisType != Temporal) ||
     (pIVar4 = &(this->CachedOrigin).Data, (this->CachedOrigin).IsValidData == false)) {
    pIVar4 = &local_158;
  }
  pVVar5 = &pIVar4->CachedReferenceShiftedPosition_km;
  uVar1 = *(undefined4 *)((int)&pVVar5->X + 4);
  uVar2 = *(undefined4 *)&pVVar5->Y;
  uVar3 = *(undefined4 *)((int)&pVVar5->Y + 4);
  *(undefined4 *)&__return_storage_ptr__->X = *(undefined4 *)&pVVar5->X;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Y = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = uVar3;
  __return_storage_ptr__->Z = pVVar5->Z;
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
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 0000787750 00787750_HUDItineraryNodeDragger__GetPlaneNormal ====
// decompiled by BatchDecomp @ 00787750 name=GetPlaneNormal conv=__thiscall body=137

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: struct Vec3_L_double_G_ __thiscall HUDItineraryNodeDragger__GetPlaneNormal(void)const
    */

Vec3_L_double_G_ * __thiscall
HUDItineraryNodeDragger__GetPlaneNormal(HUDItineraryNodeDragger *this,Vec3_L_double_G_ *__return_storage_ptr__)

{
  Axis AVar1;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  double local_3c;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  double local_24;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  double local_c;
  
  GetDirections(this,true);
  AVar1 = this->AxisType;
  if (AVar1 == TanRad) {
    *(undefined4 *)&__return_storage_ptr__->X = local_1c;
    *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = uStack_18;
    *(undefined4 *)&__return_storage_ptr__->Y = uStack_14;
    *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = uStack_10;
    __return_storage_ptr__->Z = local_c;
    return __return_storage_ptr__;
  }
  if (AVar1 != RadPerp) {
    if (AVar1 != PerpTan) {
      *(undefined4 *)&__return_storage_ptr__->X = 0;
      *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = 0;
      *(undefined4 *)&__return_storage_ptr__->Y = 0;
      *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = 0;
      __return_storage_ptr__->Z = 0.0;
      return __return_storage_ptr__;
    }
    *(undefined4 *)&__return_storage_ptr__->X = local_34;
    *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = uStack_30;
    *(undefined4 *)&__return_storage_ptr__->Y = uStack_2c;
    *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = uStack_28;
    __return_storage_ptr__->Z = local_24;
    return __return_storage_ptr__;
  }
  *(undefined4 *)&__return_storage_ptr__->X = local_4c;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = uStack_48;
  *(undefined4 *)&__return_storage_ptr__->Y = uStack_44;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = uStack_40;
  __return_storage_ptr__->Z = local_3c;
  return __return_storage_ptr__;
}


//==== 0000787990 00787990_HUDItineraryNodeDragger__GetRelativeDirectionPair ====
// decompiled by BatchDecomp @ 00787990 name=GetRelativeDirectionPair conv=__thiscall body=188

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: struct util::tuple2<struct util::Vec3<double>,struct util::Vec3<double> > __thiscall
   HUDItineraryNodeDragger__GetRelativeDirectionPair(void)const  */

void __thiscall HUDItineraryNodeDragger__GetRelativeDirectionPair(HUDItineraryNodeDragger *this)

{
  Axis AVar1;
  undefined4 *in_stack_00000004;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined8 local_c;
  
  GetDirections(this,true);
  AVar1 = this->AxisType;
  if (AVar1 == TanRad) {
    *in_stack_00000004 = local_4c;
    in_stack_00000004[1] = uStack_48;
    in_stack_00000004[2] = uStack_44;
    in_stack_00000004[3] = uStack_40;
    *(undefined8 *)(in_stack_00000004 + 4) = local_3c;
    in_stack_00000004[6] = local_34;
    in_stack_00000004[7] = uStack_30;
    in_stack_00000004[8] = uStack_2c;
    in_stack_00000004[9] = uStack_28;
    *(undefined8 *)(in_stack_00000004 + 10) = local_24;
    return;
  }
  if (AVar1 != RadPerp) {
    if (AVar1 != PerpTan) {
      *in_stack_00000004 = 0;
      in_stack_00000004[1] = 0;
      in_stack_00000004[2] = 0;
      in_stack_00000004[3] = 0;
      in_stack_00000004[4] = 0;
      in_stack_00000004[5] = 0;
      in_stack_00000004[6] = 0;
      in_stack_00000004[7] = 0;
      in_stack_00000004[8] = 0;
      in_stack_00000004[9] = 0;
      in_stack_00000004[10] = 0;
      in_stack_00000004[0xb] = 0;
      return;
    }
    *in_stack_00000004 = local_1c;
    in_stack_00000004[1] = uStack_18;
    in_stack_00000004[2] = uStack_14;
    in_stack_00000004[3] = uStack_10;
    *(undefined8 *)(in_stack_00000004 + 4) = local_c;
    in_stack_00000004[6] = local_4c;
    in_stack_00000004[7] = uStack_48;
    in_stack_00000004[8] = uStack_44;
    in_stack_00000004[9] = uStack_40;
    *(undefined8 *)(in_stack_00000004 + 10) = local_3c;
    return;
  }
  *in_stack_00000004 = local_34;
  in_stack_00000004[1] = uStack_30;
  in_stack_00000004[2] = uStack_2c;
  in_stack_00000004[3] = uStack_28;
  *(undefined8 *)(in_stack_00000004 + 4) = local_24;
  in_stack_00000004[6] = local_1c;
  in_stack_00000004[7] = uStack_18;
  in_stack_00000004[8] = uStack_14;
  in_stack_00000004[9] = uStack_10;
  *(undefined8 *)(in_stack_00000004 + 10) = local_c;
  return;
}


//==== 0000787c20 00787c20_HUDItineraryNodeDragger__GetVisibility ====
// decompiled by BatchDecomp @ 00787c20 name=GetVisibility conv=__thiscall body=292

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall HUDItineraryNodeDragger__GetVisibility(void)const  */

bool __thiscall HUDItineraryNodeDragger__GetVisibility(HUDItineraryNodeDragger *this)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  ItineraryNode *this_00;
  PreferencesBase *pPVar6;
  ItineraryNode local_168;
  ReferenceController *local_14;
  ReferenceController *local_c;
  undefined1 local_5;
  
  local_c = (ReferenceController *)0x0;
  piVar4 = (int *)StrategicManager__GetSelectedFleet((StrategicManager *)this->_pad_0x0_0);
  bVar1 = false;
  bVar2 = false;
  if (*piVar4 != 0) {
    puVar5 = (undefined4 *)StrategicManager__GetSelectedFleet((StrategicManager *)this->_pad_0x0_0);
    if ((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) {
      bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]);
      if (!bVar2) {
        *puVar5 = 0;
      }
    }
    bVar1 = true;
    bVar2 = false;
    bVar3 = Fleet__HasMission((Fleet *)*puVar5);
    if (bVar3) {
      bVar1 = true;
      bVar2 = true;
      this_00 = StrategicManager__GetSelectedItineraryNode((StrategicManager *)this->_pad_0x0_0,&local_168);
      bVar3 = ItineraryNode__IsValid(this_00);
      if (bVar3) {
        bVar3 = StrategicManager__IsTurnRunning((StrategicManager *)this->_pad_0x0_0);
        if (!bVar3) {
          bVar3 = IsBasicGrabber(this);
          if (!bVar3) {
            pPVar6 = Manager__GetOptions((Manager *)this->_pad_0x0_0);
            if (*(char *)((int)&pPVar6[2].Parent + 2) == '\0') goto LAB_00787cd3;
          }
          local_5 = 1;
          bVar1 = true;
          bVar2 = true;
          goto LAB_00787cd7;
        }
      }
    }
  }
LAB_00787cd3:
  local_5 = 0;
LAB_00787cd7:
  if (bVar2) {
    if (local_168.CachedNearestOrbiter.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_168.CachedNearestOrbiter.Controller);
    }
    if (local_168.CachedNearestFleet.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_168.CachedNearestFleet.Controller);
    }
    if (local_168.CachedNearestBody.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_168.CachedNearestBody.Controller);
    }
    if (local_168.CachedGravityBody.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_168.CachedGravityBody.Controller);
    }
    if (local_168.Parent.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_168.Parent.Controller);
    }
  }
  if ((local_c != (ReferenceController *)0x0) && (bVar1)) {
    util__ReferenceController__ReleaseWeakReference(local_c);
  }
  if (local_14 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_14);
  }
  return (bool)local_5;
}


//==== 0000787f00 00787f00_HUDItineraryNodeDragger__GetWorldSize_km ====
// decompiled by BatchDecomp @ 00787f00 name=GetWorldSize_km conv=__thiscall body=188

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: double __thiscall HUDItineraryNodeDragger__GetWorldSize_km(void)const  */

double __thiscall HUDItineraryNodeDragger__GetWorldSize_km(HUDItineraryNodeDragger *this)

{
  Manager *this_00;
  Vec3_L_double_G_ *pVVar1;
  CameraManager *this_01;
  Vec3_L_double_G_ *pVVar2;
  Maybe_L_double_G_ *pMVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  Vec3_L_double_G_ local_54;
  Vec3_L_double_G_ local_3c;
  Maybe_L_double_G_ local_24;
  double local_14;
  double local_c;
  
  local_c = /*3fc70a3d70a3d70a*/0.18;
  if (this->AxisType == Temporal) {
    local_c = /*3fb47ae147ae147b*/0.08;
  }
  this_00 = (Manager *)this->_pad_0x0_0;
  pVVar1 = GetOrigin_km(this,&local_3c);
  pVVar2 = &local_54;
  this_01 = Manager__GetCameras(this_00);
  pVVar2 = CameraManager__GetCameraPos(this_01,pVVar2);
  dVar6 = pVVar2->Y - pVVar1->Y;
  dVar5 = pVVar2->X - pVVar1->X;
  dVar4 = pVVar2->Z - pVVar1->Z;
  local_14 = dVar6 * dVar6 + dVar5 * dVar5 + dVar4 * dVar4;
  pMVar3 = util__Sqrt(&local_24,&local_14);
  if (pMVar3->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return pMVar3->Data * local_c;
}


//==== 0000788750 00788750_HUDItineraryNodeDragger__IsBasicGrabber ====
// decompiled by BatchDecomp @ 00788750 name=IsBasicGrabber conv=__thiscall body=31

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall HUDItineraryNodeDragger__IsBasicGrabber(void)const  */

bool __thiscall HUDItineraryNodeDragger__IsBasicGrabber(HUDItineraryNodeDragger *this)

{
  Axis AVar1;
  
  AVar1 = this->AxisType;
  if ((((AVar1 != Temporal) && (AVar1 != Tangential)) && (AVar1 != Radial)) &&
     (AVar1 != Perpendicular)) {
    return false;
  }
  return true;
}


//==== 0000789b70 00789b70_HUDItineraryNodeDragger__Render3D ====
// decompiled by BatchDecomp @ 00789b70 name=Render3D conv=__thiscall body=33

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall HUDItineraryNodeDragger__Render3D(void)const  */

void __thiscall HUDItineraryNodeDragger__Render3D(HUDItineraryNodeDragger *this)

{
  Axis AVar1;
  
  AVar1 = this->AxisType;
  if ((((AVar1 == Temporal) || (AVar1 == Tangential)) || (AVar1 == Radial)) ||
     (AVar1 == Perpendicular)) {
    RenderOrb(this,false);
  }
  return;
}


//==== 000078add0 0078add0_HUDItineraryNodeDragger__ShouldReleaseMouseCapture ====
// decompiled by BatchDecomp @ 0078add0 name=ShouldReleaseMouseCapture conv=__thiscall body=34

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual bool __thiscall HUDItineraryNodeDragger__ShouldReleaseMouseCapture(void)const  */

bool __thiscall HUDItineraryNodeDragger__ShouldReleaseMouseCapture(HUDItineraryNodeDragger *this)

{
  PreferencesBase *pPVar1;
  
  pPVar1 = Manager__GetOptions((Manager *)this->_pad_0x0_0);
  if ((*(char *)((int)&pPVar1[2].Parent + 1) == '\0') && (this->ReleaseCapture == false)) {
    return false;
  }
  return true;
}


//==== 00007907b0 007907b0_ItineraryNodeUI__GetDistanceFadingPercent ====
// decompiled by BatchDecomp @ 007907b0 name=GetDistanceFadingPercent conv=__thiscall body=196

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: float __thiscall ItineraryNodeUI__GetDistanceFadingPercent(struct
   Vec3_L_double_G_)const  */

float __thiscall
ItineraryNodeUI__GetDistanceFadingPercent(ItineraryNodeUI *this,Vec3_L_double_G_ param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  ItineraryNodeUI_GetPathCameraDistances_km_Memoize(this);
  if ((this->GetPathCameraDistances_km_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar1 = (this->GetPathCameraDistances_km_MemoizedValue).Data.Lower;
  dVar2 = (this->GetPathCameraDistances_km_MemoizedValue).Data.Upper;
  dVar4 = GetLocationCameraDistance(this,param_1);
  dVar3 = 0.0;
  dVar2 = dVar2 - dVar1;
  if (NAN(dVar2) == (dVar2 == 0.0)) {
    dVar3 = (dVar4 - dVar1) / dVar2;
  }
  return (float)(/*3ff0000000000000*/1.0 - dVar3) + (float)(dVar3 * /*3fd99999a0000000*/0.4000000059604645);
}


//==== 00007930a0 007930a0_ItineraryNodeUI__GetPathCameraDistances_km_Clear ====
// decompiled by BatchDecomp @ 007930a0 name=ItineraryNodeUI_GetPathCameraDistances_km_Clear conv=__thiscall body=18

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall ItineraryNodeUI__GetPathCameraDistances_km_Clear(void)const  */

void __thiscall ItineraryNodeUI__GetPathCameraDistances_km_Clear(ItineraryNodeUI *this)

{
  (this->GetPathCameraDistances_km_MemoizedValue).IsValidData = false;
  *(undefined4 *)&(this->GetPathCameraDistances_km_MemoizedValue).Data.Lower = 0;
  *(undefined4 *)((int)&(this->GetPathCameraDistances_km_MemoizedValue).Data.Lower + 4) = 0;
  *(undefined4 *)&(this->GetPathCameraDistances_km_MemoizedValue).Data.Upper = 0;
  *(undefined4 *)((int)&(this->GetPathCameraDistances_km_MemoizedValue).Data.Upper + 4) = 0;
  return;
}


//==== 0000793280 00793280_ItineraryNodeUI__GetProjectionAxis ====
// decompiled by BatchDecomp @ 00793280 name=GetProjectionAxis conv=__thiscall body=94

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Maybe<struct util::Vec3<double> > __thiscall
   ItineraryNodeUI__GetProjectionAxis(void)const  */

void __thiscall ItineraryNodeUI__GetProjectionAxis(ItineraryNodeUI *this)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  Preferences *this_00;
  undefined4 *puVar6;
  undefined4 *in_stack_00000004;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined8 local_14;
  undefined1 local_c;
  
  this_00 = (Preferences *)Manager__GetOptions((Manager *)this->_pad_0x0_0);
  bVar5 = Preferences__IsProjectTrajectoryOnToReferenceFrame(this_00);
  if (bVar5) {
    puVar6 = (undefined4 *)GetTargetAxis(this);
  }
  else {
    local_c = 0;
    local_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    puVar6 = &local_24;
    local_14 = 0;
  }
  uVar2 = puVar6[1];
  uVar3 = puVar6[2];
  uVar4 = puVar6[3];
  *in_stack_00000004 = *puVar6;
  in_stack_00000004[1] = uVar2;
  in_stack_00000004[2] = uVar3;
  in_stack_00000004[3] = uVar4;
  uVar1 = *(undefined1 *)(puVar6 + 6);
  *(undefined8 *)(in_stack_00000004 + 4) = *(undefined8 *)(puVar6 + 4);
  *(undefined1 *)(in_stack_00000004 + 6) = uVar1;
  return;
}


//==== 00007932e0 007932e0_ItineraryNodeUI__GetRenderOrder ====
// decompiled by BatchDecomp @ 007932e0 name=GetRenderOrder conv=__thiscall body=71

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual int __thiscall ItineraryNodeUI__GetRenderOrder(void)const  */

int __thiscall ItineraryNodeUI__GetRenderOrder(ItineraryNodeUI *this)

{
  int *piVar1;
  int iVar2;
  ReferenceController *local_8;
  
  piVar1 = (int *)StrategicManager__GetSelectedFleet((StrategicManager *)this->_pad_0x0_0);
  if (((this->ParentFleet).Controller != (ReferenceController *)piVar1[1]) ||
     (iVar2 = 2, (this->ParentFleet).Pointer != (Fleet *)*piVar1)) {
    iVar2 = 1;
  }
  if (local_8 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_8);
  }
  return iVar2;
}


//==== 0000793b70 00793b70_ItineraryNodeUI__GetSmoothedPath_Clear ====
// decompiled by BatchDecomp @ 00793b70 name=ItineraryNodeUI_GetSmoothedPath_Clear conv=__thiscall body=84

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall ItineraryNodeUI__GetSmoothedPath_Clear(void)const  */

void __thiscall ItineraryNodeUI__GetSmoothedPath_Clear(ItineraryNodeUI *this)

{
  undefined **local_14;
  void *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = ((void *)(0x0093b36cu));
  local_10 = (void *)0x0;
  local_c = 0;
  local_8 = 0;
  util__Darray_struct_ItineraryNodeUI__PathNode___operator
            ((Darray_L_struct_ItineraryNodeUI__PathNode_G_ *)&this->GetSmoothedPath_MemoizedValue,
             (Darray_L_struct_ItineraryNodeUI__PathNode_G_ *)&local_14);
  local_14 = ((void *)(0x0093b36cu));
  if (local_10 != (void *)0x0) {
    operator_delete__(local_10);
  }
  (this->GetSmoothedPath_MemoizedValue).IsValidData = false;
  return;
}


//==== 0000793bd0 00793bd0_ItineraryNodeUI__GetSmoothedProjectedPath_Clear ====
// decompiled by BatchDecomp @ 00793bd0 name=ItineraryNodeUI_GetSmoothedProjectedPath_Clear conv=__thiscall body=84

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall ItineraryNodeUI__GetSmoothedProjectedPath_Clear(void)const  */

void __thiscall ItineraryNodeUI__GetSmoothedProjectedPath_Clear(ItineraryNodeUI *this)

{
  undefined **local_14;
  void *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = ((void *)(0x0093b36cu));
  local_10 = (void *)0x0;
  local_c = 0;
  local_8 = 0;
  util__Darray_struct_ItineraryNodeUI__PathNode___operator
            ((Darray_L_struct_ItineraryNodeUI__PathNode_G_ *)
             &this->GetSmoothedProjectedPath_MemoizedValue,
             (Darray_L_struct_ItineraryNodeUI__PathNode_G_ *)&local_14);
  local_14 = ((void *)(0x0093b36cu));
  if (local_10 != (void *)0x0) {
    operator_delete__(local_10);
  }
  (this->GetSmoothedProjectedPath_MemoizedValue).IsValidData = false;
  return;
}


//==== 0000795c70 00795c70_ItineraryNodeUI__IsEnabled ====
// decompiled by BatchDecomp @ 00795c70 name=IsEnabled conv=__thiscall body=93

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual bool __thiscall ItineraryNodeUI__IsEnabled(void)const  */

bool __thiscall ItineraryNodeUI__IsEnabled(ItineraryNodeUI *this)

{
  bool bVar1;
  int *piVar2;
  ReferenceController *local_8;
  
  piVar2 = (int *)StrategicManager__GetSelectedFleet((StrategicManager *)this->_pad_0x0_0);
  if (((this->ParentFleet).Controller == (ReferenceController *)piVar2[1]) &&
     ((this->ParentFleet).Pointer == (Fleet *)*piVar2)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (local_8 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_8);
  }
  if (bVar1) {
    bVar1 = StrategicManager__IsTurnRunning((StrategicManager *)this->_pad_0x0_0);
    if (!bVar1) {
      return true;
    }
  }
  return false;
}


//==== 0000795cd0 00795cd0_ItineraryNodeUI__IsItineraryValid ====
// decompiled by BatchDecomp @ 00795cd0 name=IsItineraryValid conv=__thiscall body=145

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall ItineraryNodeUI__IsItineraryValid(void)const  */

bool __thiscall ItineraryNodeUI__IsItineraryValid(ItineraryNodeUI *this)

{
  ReferenceController *pRVar1;
  bool bVar2;
  Itinerary *this_00;
  
  pRVar1 = (this->ParentFleet).Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (!bVar2) {
      (this->ParentFleet).Pointer = (Fleet *)0x0;
    }
  }
  bVar2 = Fleet__HasMission((this->ParentFleet).Pointer);
  if (bVar2) {
    pRVar1 = (this->ParentFleet).Controller;
    if (pRVar1 != (ReferenceController *)0x0) {
      bVar2 = util__ReferenceController__IsDataStillValid(pRVar1);
      if (!bVar2) {
        (this->ParentFleet).Pointer = (Fleet *)0x0;
      }
    }
    this_00 = (Itinerary *)Fleet__GetMissionItinerary((this->ParentFleet).Pointer);
    if (*(char *)&this_00[2].FinalOrbit.Data.Elements.SemiMajorAxis_km == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    bVar2 = Itinerary__IsTraversable(this_00);
    if (bVar2) {
      return true;
    }
  }
  return false;
}


//==== 0000795f00 00795f00_ItineraryNodeUI__IsVisible ====
// decompiled by BatchDecomp @ 00795f00 name=IsVisible conv=__thiscall body=83

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual bool __thiscall ItineraryNodeUI__IsVisible(void)const  */

bool __thiscall ItineraryNodeUI__IsVisible(ItineraryNodeUI *this)

{
  ReferenceController *pRVar1;
  bool bVar2;
  
  if (((this->ParentFleet).Pointer != (Fleet *)0x0) &&
     (pRVar1 = (this->ParentFleet).Controller, pRVar1 != (ReferenceController *)0x0)) {
    bVar2 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (bVar2) {
      pRVar1 = (this->ParentFleet).Controller;
      if (pRVar1 != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid(pRVar1);
        if (!bVar2) {
          (this->ParentFleet).Pointer = (Fleet *)0x0;
        }
      }
      bVar2 = Fleet__HasMission((this->ParentFleet).Pointer);
      if (bVar2) {
        return true;
      }
    }
  }
  return false;
}


//==== 00007b2370 007b2370_Body__GetBoundingCylinder_km_Memoize ====
extern undefined4 FUN_007ada00(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007b2370 name=Body_GetBoundingCylinder_km_Memoize conv=__thiscall body=285

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__GetBoundingCylinder_km_Memoize(void)const  */

void __thiscall Body__GetBoundingCylinder_km_Memoize(Body *this)

{
  int iVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double local_2c;
  uint local_24[3];
  undefined **local_18;
  void *pvStack_14;
  int iStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((this->GetBoundingCylinder_km_MemoizedValue).IsValidData == false) {
    iVar1 = (this->BodyMemoizationHandlerInstance).ResetFunctions.Size;
    local_24[0] = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->BodyMemoizationHandlerInstance,
               (int *)local_24);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&this->BodyMemoizationHandlerInstance,
                       iVar1);
    if (bVar2) {
      (this->BodyMemoizationHandlerInstance).ResetFunctions.Data
      [(this->BodyMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_eabaeed5, Body__GetBoundingCylinder_km_Clear);
    }
    local_24[0] = local_24[0] & 0xffffff00;
    local_18 = (undefined **)0x0;
    pvStack_14 = (void *)0x0;
    iStack_10 = 0;
    uStack_c = 0;
    FUN_007ada00(&local_18,&this->Components,local_24[0]);
    if (1 < iStack_10) {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\tactical\\body.cpp",0x22e,
                      "BoundingCylinders_km.Num() <= 1",(char *)0x0);
      DebugBreak();
    }
    if (iStack_10 < 1) {
      uVar4 = 0;
      uVar5 = 0;
      local_2c = 0.0;
    }
    else {
      local_24[0] = 0;
      puVar3 = (undefined4 *)(*(code *)*local_18)(local_24);
      local_2c = *(double *)(puVar3 + 2);
      uVar4 = *puVar3;
      uVar5 = puVar3[1];
    }
    local_18 = ((void *)(0x0091ff00u));
    if (pvStack_14 != (void *)0x0) {
      operator_delete__(pvStack_14);
    }
    ((slice_view *)&iStack_10)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&iStack_10)->_1_3_[0] | (((slice_view *)&iStack_10)->_1_3_[1] << 8) | (((slice_view *)&iStack_10)->_1_3_[2] << 16)) << 8));
    (this->GetBoundingCylinder_km_MemoizedValue).Data.Radius = (double)CONCAT44(uVar5,uVar4);
    (this->GetBoundingCylinder_km_MemoizedValue).Data.Height = local_2c;
    *(ulonglong *)&(this->GetBoundingCylinder_km_MemoizedValue).IsValidData =
         CONCAT44(uStack_c,iStack_10);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007b39a0 007b39a0_Body__GetInverseMomentOfInertia_kg_m2_Clear ====
// decompiled by BatchDecomp @ 007b39a0 name=Body_GetInverseMomentOfInertia_kg_m2_Clear conv=__thiscall body=72

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__GetInverseMomentOfInertia_kg_m2_Clear(void)const  */

void __thiscall Body__GetInverseMomentOfInertia_kg_m2_Clear(Body *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  
  dVar5 = /*3ff0000000000000*/1.0;
  uVar4 = ((slice_view *)&DAT_0091d468)->_4_4_;
  uVar3 = (undefined4)DAT_0091d468;
  uVar2 = _UNK_0091d464;
  uVar1 = ___xmm_00000000000000003ff0000000000000;
  *(undefined4 *)(this->GetInverseMomentOfInertia_kg_m2_MemoizedValue).Data.Data =
       ___xmm_00000000000000003ff0000000000000;
  *(undefined4 *)((int)(this->GetInverseMomentOfInertia_kg_m2_MemoizedValue).Data.Data + 4) = uVar2;
  *(undefined4 *)((this->GetInverseMomentOfInertia_kg_m2_MemoizedValue).Data.Data + 1) = uVar3;
  *(undefined4 *)((int)(this->GetInverseMomentOfInertia_kg_m2_MemoizedValue).Data.Data + 0xc) =
       uVar4;
  (this->GetInverseMomentOfInertia_kg_m2_MemoizedValue).IsValidData = false;
  *(undefined4 *)((this->GetInverseMomentOfInertia_kg_m2_MemoizedValue).Data.Data + 2) = 0;
  *(undefined4 *)((int)(this->GetInverseMomentOfInertia_kg_m2_MemoizedValue).Data.Data + 0x14) = 0;
  *(undefined4 *)((this->GetInverseMomentOfInertia_kg_m2_MemoizedValue).Data.Data + 3) = 0;
  *(undefined4 *)((int)(this->GetInverseMomentOfInertia_kg_m2_MemoizedValue).Data.Data + 0x1c) = 0;
  *(undefined4 *)((this->GetInverseMomentOfInertia_kg_m2_MemoizedValue).Data.Data + 4) = uVar1;
  *(undefined4 *)((int)(this->GetInverseMomentOfInertia_kg_m2_MemoizedValue).Data.Data + 0x24) =
       uVar2;
  *(undefined4 *)((this->GetInverseMomentOfInertia_kg_m2_MemoizedValue).Data.Data + 5) = uVar3;
  *(undefined4 *)((int)(this->GetInverseMomentOfInertia_kg_m2_MemoizedValue).Data.Data + 0x2c) =
       uVar4;
  *(undefined4 *)((this->GetInverseMomentOfInertia_kg_m2_MemoizedValue).Data.Data + 6) = 0;
  *(undefined4 *)((int)(this->GetInverseMomentOfInertia_kg_m2_MemoizedValue).Data.Data + 0x34) = 0;
  *(undefined4 *)((this->GetInverseMomentOfInertia_kg_m2_MemoizedValue).Data.Data + 7) = 0;
  *(undefined4 *)((int)(this->GetInverseMomentOfInertia_kg_m2_MemoizedValue).Data.Data + 0x3c) = 0;
  (this->GetInverseMomentOfInertia_kg_m2_MemoizedValue).Data.Data[8] = dVar5;
  return;
}


//==== 00007b3ba0 007b3ba0_Body__GetMass_kg_Memoize ====
// decompiled by BatchDecomp @ 007b3ba0 name=Body_GetMass_kg_Memoize conv=__thiscall body=222

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__GetMass_kg_Memoize(void)const  */

void __thiscall Body__GetMass_kg_Memoize(Body *this)

{
  double dVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_2c[16];
  undefined8 local_1c;
  double dStack_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((this->GetMass_kg_MemoizedValue).IsValidData == false) {
    iVar3 = (this->BodyMemoizationHandlerInstance).ResetFunctions.Size;
    local_c = iVar3 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->BodyMemoizationHandlerInstance,&local_c);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&this->BodyMemoizationHandlerInstance,
                       iVar3);
    if (bVar2) {
      (this->BodyMemoizationHandlerInstance).ResetFunctions.Data
      [(this->BodyMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_eabaeed5, Body__GetMass_kg_Clear);
    }
    local_c = 0;
    dStack_14 = 0.0;
    iVar3 = (**(code **)(*(int *)&this->Components + 0xc))();
    if (local_c < iVar3) {
      do {
        puVar4 = (undefined4 *)(**(code **)*(int *)&this->Components)(&local_c);
        puVar5 = (undefined8 *)(**(code **)(*(int *)*puVar4 + 0x50))(local_2c);
        if (*(char *)(puVar5 + 1) == '\0') {
          uVar6 = 0;
          uVar7 = 0;
        }
        else {
          uVar6 = (undefined4)*puVar5;
          uVar7 = (undefined4)((ulonglong)*puVar5 >> 0x20);
        }
        dStack_14 = (double)CONCAT44(uVar7,uVar6) + dStack_14;
        local_c = local_c + 1;
        iVar3 = (**(code **)(*(int *)&this->Components + 0xc))();
      } while (local_c < iVar3);
    }
    dVar1 = dStack_14;
    local_1c = dStack_14;
    dStack_14 = (double)CONCAT71(((slice_view *)&dStack_14)->_1_7_,1);
    ((slice_view *)&local_1c)->_0_4_ = *(undefined4 *)&dVar1;
    ((slice_view *)&local_1c)->_4_4_ = *(undefined4 *)((char *)&dVar1 + 4);
    *(undefined4 *)&(this->GetMass_kg_MemoizedValue).Data = (undefined4)local_1c;
    *(undefined4 *)((int)&(this->GetMass_kg_MemoizedValue).Data + 4) = ((slice_view *)&local_1c)->_4_4_;
    *(undefined4 *)&(this->GetMass_kg_MemoizedValue).IsValidData = ((slice_view *)&dStack_14)->_0_4_;
    *(undefined4 *)((char *)&(this->GetMass_kg_MemoizedValue) + 0xc) = ((slice_view *)&local_1c)->_4_4_;
    local_1c = dVar1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007b4d60 007b4d60_Body__GetTrajectoryLine_km ====
// decompiled by BatchDecomp @ 007b4d60 name=GetTrajectoryLine_km conv=__thiscall body=110

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct util__Line3_L_double_G_ __thiscall Body__GetTrajectoryLine_km(void)const  */

Line3_L_double_G_ * __thiscall
Body__GetTrajectoryLine_km(Body *this,Line3_L_double_G_ *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4[16];
  undefined1 auVar5[16];
  double dVar6;
  double dVar7;
  
  dVar1 = (this->CurrentState).Position.X;
  dVar6 = (this->CurrentState).Position.Y;
  dVar2 = (this->CurrentState).Position.Z;
  dVar7 = dVar6 + (this->CurrentState).Velocity.Y;
  dVar3 = (this->CurrentState).Velocity.Z;
  dVar6 = dVar6 + 0.0;
  ((slice_view *)&auVar5)->_8_4_ = *(undefined4 *)&dVar7;
  ((slice_view *)&auVar5)->_0_8_ = dVar1 + (this->CurrentState).Velocity.X;
  ((slice_view *)&auVar5)->_12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  (__return_storage_ptr__->B).X = (double)((slice_view *)&auVar5)->_0_8_;
  (__return_storage_ptr__->B).Y = (double)((slice_view *)&auVar5)->_8_8_;
  (__return_storage_ptr__->B).Z = dVar2 + dVar3;
  ((slice_view *)&auVar4)->_8_4_ = *(undefined4 *)&dVar6;
  ((slice_view *)&auVar4)->_0_8_ = dVar1 + 0.0;
  ((slice_view *)&auVar4)->_12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  (__return_storage_ptr__->A).X = (double)((slice_view *)&auVar4)->_0_8_;
  (__return_storage_ptr__->A).Y = (double)((slice_view *)&auVar4)->_8_8_;
  (__return_storage_ptr__->A).Z = dVar2 + 0.0;
  return __return_storage_ptr__;
}


//==== 00007b5250 007b5250_Body__InflictRadialImpulse ====
// decompiled by BatchDecomp @ 007b5250 name=InflictRadialImpulse conv=__thiscall body=112

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__InflictRadialImpulse(double,struct Vec3_L_double_G_) */

void __thiscall Body__InflictRadialImpulse(Body *this,double param_1,Vec3_L_double_G_ param_2)

{
  RadialImpulse *pRVar1;
  int iVar2;
  RadialImpulse *pRVar3;
  Vec3_L_double_G_ *pVVar4;
  double dVar5;
  undefined4 uVar6;
  Vec3_L_double_G_ VVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  VVar7 = param_2;
  dVar5 = param_1;
  uVar6 = ((slice_view *)&param_2.X)->_0_4_;
  uVar8 = ((slice_view *)&param_2.X)->_4_4_;
  uVar9 = ((slice_view *)&param_2.Y)->_0_4_;
  uVar10 = ((slice_view *)&param_2.Y)->_4_4_;
  iVar2 = (this->PendingRadialImpulses).Size;
  ((slice_view *)&param_1)->_4_4_ = iVar2 + 1;
  util__Darray_struct_util__Line2_double_____SetSize((Darray_L_struct_util__Line2_L_double_G___G_ *)&this->PendingRadialImpulses,
             (int *)((int)&param_1 + 4));
  bVar11 = util__Darray_struct_Body__RadialImpulse___CheckSize((Darray_L_struct_Body__RadialImpulse_G_ *)&this->PendingRadialImpulses,iVar2);
  if (bVar11) {
    iVar2 = (this->PendingRadialImpulses).Size;
    pRVar3 = (this->PendingRadialImpulses).Data;
    pRVar1 = pRVar3 + iVar2 + -1;
    pRVar1->Impulse_kg_m__s = dVar5;
    *(undefined4 *)&(pRVar1->AtRelativePoint_km).X = uVar6;
    *(undefined4 *)((int)&(pRVar1->AtRelativePoint_km).X + 4) = uVar8;
    uStack_c = VVar7.Z;
    uStack_8 = ((slice_view *)&VVar7.Z)->_4_4_;
    pVVar4 = &pRVar3[iVar2 + -1].AtRelativePoint_km;
    *(undefined4 *)&pVVar4->Y = uVar9;
    *(undefined4 *)((int)&pVVar4->Y + 4) = uVar10;
    *(undefined4 *)&pVVar4->Z = uStack_c;
    *(undefined4 *)((int)&pVVar4->Z + 4) = uStack_8;
  }
  return;
}


//==== 00007b6320 007b6320_Body__RunCelestialCollision ====
// decompiled by BatchDecomp @ 007b6320 name=RunCelestialCollision conv=__thiscall body=638

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__RunCelestialCollision(void) */

void __thiscall Body__RunCelestialCollision(Body *this)

{
  Maybe_L_util__Darray_L_util__WeakPtr_L_CelestialObject_G___G___G_ *pMVar1;
  TacticalManager *this_00;
  undefined1 auVar2[12];
  bool bVar3;
  double *pdVar4;
  int iVar5;
  undefined4 *puVar6;
  Vec3_L_double_G_ *pVVar7;
  float10 fVar8;
  double dVar9;
  undefined8 uVar11;
  undefined1 auVar10[16];
  double dVar12;
  double dVar13;
  Vec3_L_double_G_ local_5c;
  double local_44;
  char local_3c;
  double local_34;
  double local_2c;
  double local_24;
  double local_1c;
  double local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  ((slice_view *)&local_5c.Y)->_0_4_ = *(undefined4 *)&(this->CurrentState).Position.X;
  ((slice_view *)&local_5c.Y)->_4_4_ = *(undefined4 *)((int)&(this->CurrentState).Position.X + 4);
  ((slice_view *)&local_5c.Z)->_0_4_ = *(undefined4 *)&(this->CurrentState).Position.Y;
  ((slice_view *)&local_5c.Z)->_4_4_ = *(undefined4 *)((int)&(this->CurrentState).Position.Y + 4);
  local_14 = (this->CurrentState).Position.Z;
  uVar11 = 0;
  pdVar4 = (double *)TacticalManager__GetParentManagerDelta(this->ParentTactical);
  ((slice_view *)&auVar2)->_4_8_ = uVar11;
  ((slice_view *)&auVar2)->_0_4_ = ((slice_view *)&local_5c.Y)->_4_4_;
  ((slice_view *)&auVar10)->_0_8_ = ((slice_view *)&auVar2)->_0_8_ << 0x20;
  ((slice_view *)&auVar10)->_8_4_ = ((slice_view *)&local_5c.Z)->_0_4_;
  ((slice_view *)&auVar10)->_12_4_ = ((slice_view *)&local_5c.Z)->_4_4_;
  local_24 = pdVar4[2] + local_14;
  local_2c = pdVar4[1] + ((slice_view *)&auVar10)->_8_8_;
  local_34 = *pdVar4 + (double)CONCAT44(((slice_view *)&local_5c.Y)->_4_4_,((slice_view *)&local_5c.Y)->_0_4_);
  if ((this->GetRadius_km_MemoizedValue).IsValidData == false) {
    iVar5 = (this->BodyMemoizationHandlerInstance).ResetFunctions.Size;
    local_c = iVar5 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->BodyMemoizationHandlerInstance,&local_c);
    bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&this->BodyMemoizationHandlerInstance,
                       iVar5);
    if (bVar3) {
      (this->BodyMemoizationHandlerInstance).ResetFunctions.Data
      [(this->BodyMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_eabaeed5, GetRadius_km_Clear);
    }
    local_c = 0;
    local_14 = 0.0;
    iVar5 = (**(code **)(*(int *)&this->Components + 0xc))();
    if (local_c < iVar5) {
      do {
        puVar6 = (undefined4 *)(**(code **)*(int *)&this->Components)(&local_c);
        (**(code **)(*(int *)*puVar6 + 0x5c))(&local_44);
        if ((local_3c != '\0') && (local_14 <= local_44)) {
          local_14 = local_44;
        }
        local_c = local_c + 1;
        iVar5 = (**(code **)(*(int *)&this->Components + 0xc))();
      } while (local_c < iVar5);
    }
    ((slice_view *)&local_5c.Y)->_0_4_ = *(undefined4 *)&local_14;
    ((slice_view *)&local_5c.Y)->_4_4_ = *(undefined4 *)((char *)&local_14 + 4);
    ((slice_view *)&local_5c.Z)->_0_4_ = CONCAT31(((slice_view *)&local_5c.Z)->_1_3_,1);
    *(undefined4 *)&(this->GetRadius_km_MemoizedValue).Data = ((slice_view *)&local_5c.Y)->_0_4_;
    *(undefined4 *)((int)&(this->GetRadius_km_MemoizedValue).Data + 4) = ((slice_view *)&local_5c.Y)->_4_4_;
    *(undefined4 *)&(this->GetRadius_km_MemoizedValue).IsValidData = ((slice_view *)&local_5c.Z)->_0_4_;
    *(undefined4 *)((char *)&(this->GetRadius_km_MemoizedValue) + 0xc) = ((slice_view *)&local_5c.Z)->_4_4_;
    if ((this->GetRadius_km_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  local_1c = (this->GetRadius_km_MemoizedValue).Data;
  this_00 = this->ParentTactical;
  TacticalManager__GetRelevantCelestials_Memoize(this_00);
  pMVar1 = &this_00->GetRelevantCelestials_MemoizedValue;
  if ((this_00->GetRelevantCelestials_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_c = 0;
  iVar5 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
  if (local_c < iVar5) {
    while( true ) {
      puVar6 = (undefined4 *)(**(code **)*(int *)&pMVar1->Data)(&local_c);
      if (((ReferenceController *)puVar6[1] != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar6[1]),
         !bVar3)) {
        *puVar6 = 0;
      }
      fVar8 = (float10)(**(code **)(*(int *)*puVar6 + 0x44))();
      local_14 = (double)(fVar8 + (float10)local_1c);
      if (((ReferenceController *)puVar6[1] != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar6[1]),
         !bVar3)) {
        *puVar6 = 0;
      }
      pVVar7 = CelestialObject__GetPosition_km((CelestialObject *)*puVar6,&local_5c);
      dVar13 = local_2c - pVVar7->Y;
      dVar12 = local_34 - pVVar7->X;
      dVar9 = local_24 - pVVar7->Z;
      if (dVar13 * dVar13 + dVar12 * dVar12 + dVar9 * dVar9 <= local_14 * local_14) break;
      local_c = local_c + 1;
      iVar5 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
      if (iVar5 <= local_c) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    Destroy(this);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007b6650 007b6650_Body__ShiftState ====
// decompiled by BatchDecomp @ 007b6650 name=ShiftState conv=__thiscall body=1082

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__ShiftState(struct util::PhysicalState<struct util::Vec3<double>
   >,bool) */

void __thiscall
Body__ShiftState(Body *this,double param_2,double param_3,double param_4,double param_5,
                double param_6,double param_7,char param_8)

{
  Vec3_L_double_G_ *pVVar1;
  double dVar2;
  undefined1 auVar3[16];
  undefined1 auVar4[16];
  undefined1 auVar5[16];
  double dVar6;
  bool bVar7;
  int iVar8;
  undefined4 *puVar9;
  Maybe_L_double_G_ *pMVar10;
  Vec3_L_double_G_ *pVVar11;
  double dVar12;
  Maybe_L_double_G_ local_84[2];
  double local_5c;
  undefined1 auStack_54[16];
  double dStack_44;
  undefined8 local_3c;
  undefined8 uStack_34;
  double local_2c;
  double local_24;
  double local_1c;
  undefined8 local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  dVar12 = param_3 + (this->CurrentState).Position.Y;
  dVar2 = (this->CurrentState).Position.Z;
  ((slice_view *)&auVar3)->_8_4_ = *(undefined4 *)&dVar12;
  ((slice_view *)&auVar3)->_0_8_ = param_2 + (this->CurrentState).Position.X;
  ((slice_view *)&auVar3)->_12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  (this->CurrentState).Position.X = (double)((slice_view *)&auVar3)->_0_8_;
  (this->CurrentState).Position.Y = (double)((slice_view *)&auVar3)->_8_8_;
  (this->CurrentState).Position.Z = param_4 + dVar2;
  dVar2 = (this->CurrentState).Velocity.Y;
  (this->CurrentState).Velocity.X = (this->CurrentState).Velocity.X + param_5;
  (this->CurrentState).Velocity.Y = dVar2 + param_6;
  (this->CurrentState).Velocity.Z = (this->CurrentState).Velocity.Z + param_7;
  if ((this->PendingState).IsValidData != false) {
    dVar2 = (this->PendingState).Data.Position.Y;
    local_5c = (this->PendingState).Data.Position.Z + param_4;
    param_5 = (this->PendingState).Data.Velocity.X + param_5;
    param_7 = (this->PendingState).Data.Velocity.Z + param_7;
    param_6 = (this->PendingState).Data.Velocity.Y + param_6;
    (this->PendingState).Data.Position.X = (this->PendingState).Data.Position.X + param_2;
    (this->PendingState).Data.Position.Y = dVar2 + param_3;
    ((slice_view *)&auStack_54)->_8_4_ = *(undefined4 *)&param_6;
    ((slice_view *)&auStack_54)->_0_8_ = param_5;
    ((slice_view *)&auStack_54)->_12_4_ = (int)((ulonglong)param_6 >> 0x20);
    dStack_44 = (double)CONCAT71((int7)((ulonglong)param_7 >> 8),1);
    (this->PendingState).Data.Position.Z = local_5c;
    (this->PendingState).Data.Velocity.X = param_5;
    (this->PendingState).Data.Velocity.Y = param_6;
    (this->PendingState).Data.Velocity.Z = param_7;
    *(double *)&(this->PendingState).IsValidData = dStack_44;
  }
  if (param_8 != '\0') {
    if ((this->GetRadius_km_MemoizedValue).IsValidData == false) {
      iVar8 = (this->BodyMemoizationHandlerInstance).ResetFunctions.Size;
      local_c = iVar8 + 1;
      util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->BodyMemoizationHandlerInstance,&local_c)
      ;
      bVar7 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                         &this->BodyMemoizationHandlerInstance,iVar8);
      if (bVar7) {
        (this->BodyMemoizationHandlerInstance).ResetFunctions.Data
        [(this->BodyMemoizationHandlerInstance).ResetFunctions.Size + -1] =
             CDE_PMF(pmf_eabaeed5, GetRadius_km_Clear);
      }
      local_c = 0;
      local_14 = 0.0;
      iVar8 = (**(code **)(*(int *)&this->Components + 0xc))();
      if (local_c < iVar8) {
        do {
          puVar9 = (undefined4 *)(**(code **)*(int *)&this->Components)(&local_c);
          (**(code **)(*(int *)*puVar9 + 0x5c))(&local_24);
          if ((((slice_view *)&local_1c)->_0_1_ != '\0') && (local_14 <= local_24)) {
            local_14 = local_24;
          }
          local_c = local_c + 1;
          iVar8 = (**(code **)(*(int *)&this->Components + 0xc))();
        } while (local_c < iVar8);
      }
      dVar12 = uStack_34;
      local_3c = local_14;
      dVar2 = local_3c;
      uStack_34 = (double)CONCAT71(((slice_view *)&uStack_34)->_1_7_,1);
      dVar6 = uStack_34;
      ((slice_view *)&local_3c)->_0_4_ = *(undefined4 *)&local_14;
      ((slice_view *)&local_3c)->_4_4_ = *(undefined4 *)((char *)&local_14 + 4);
      ((slice_view *)&uStack_34)->_4_4_ = SUB84(dVar12,4);
      *(undefined4 *)&(this->GetRadius_km_MemoizedValue).Data = (undefined4)local_3c;
      *(undefined4 *)((int)&(this->GetRadius_km_MemoizedValue).Data + 4) = ((slice_view *)&local_3c)->_4_4_;
      *(undefined4 *)&(this->GetRadius_km_MemoizedValue).IsValidData = (undefined4)uStack_34;
      *(undefined4 *)((char *)&(this->GetRadius_km_MemoizedValue) + 0xc) = ((slice_view *)&uStack_34)->_4_4_;
      local_3c = dVar2;
      uStack_34 = dVar6;
      if ((this->GetRadius_km_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
    }
    local_2c = (this->GetRadius_km_MemoizedValue).Data;
    local_c = 0;
    iVar8 = (**(code **)(*(int *)&this->PendingImpulses + 0xc))();
    if (local_c < iVar8) {
      do {
        iVar8 = (**(code **)*(int *)&this->PendingImpulses)(&local_c);
        dVar6 = *(double *)(iVar8 + 0x18) - param_2;
        dVar2 = *(double *)(iVar8 + 0x20);
        dVar12 = *(double *)(iVar8 + 0x28);
        pVVar1 = (Vec3_L_double_G_ *)(iVar8 + 0x18);
        pVVar1->X = dVar6;
        dVar2 = dVar2 - param_3;
        *(double *)(iVar8 + 0x20) = dVar2;
        dVar12 = dVar12 - param_4;
        *(double *)(iVar8 + 0x28) = dVar12;
        local_1c = local_2c;
        uStack_34 = dVar2 * dVar2 + dVar6 * dVar6 + dVar12 * dVar12;
        pMVar10 = util__Sqrt(local_84,(double *)&uStack_34);
        local_14 = (double)CONCAT44(pMVar10,(undefined4)local_14);
        if (pMVar10->IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
          pMVar10 = ((slice_view *)&local_14)->_4_4_;
        }
        dVar2 = pMVar10->Data;
        if (local_1c <= pMVar10->Data) {
          dVar2 = local_1c;
        }
        local_1c = dVar2;
        pVVar11 = util__Vec3_double___SafeNormalized(pVVar1,(Vec3_L_double_G_ *)auStack_54);
        dVar2 = pVVar11->Z;
        dVar12 = pVVar11->Y * local_1c;
        ((slice_view *)&auVar4)->_8_4_ = *(undefined4 *)&dVar12;
        ((slice_view *)&auVar4)->_0_8_ = pVVar11->X * local_1c;
        ((slice_view *)&auVar4)->_12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        pVVar1->X = (double)((slice_view *)&auVar4)->_0_8_;
        pVVar1->Y = (double)((slice_view *)&auVar4)->_8_8_;
        *(double *)(iVar8 + 0x28) = dVar2 * local_1c;
        local_c = local_c + 1;
        iVar8 = (**(code **)(*(int *)&this->PendingImpulses + 0xc))();
      } while (local_c < iVar8);
    }
    local_c = 0;
    iVar8 = (**(code **)(*(int *)&this->PendingRadialImpulses + 0xc))();
    if (local_c < iVar8) {
      do {
        iVar8 = (**(code **)*(int *)&this->PendingRadialImpulses)(&local_c);
        dVar6 = *(double *)(iVar8 + 8) - param_2;
        dVar2 = *(double *)(iVar8 + 0x10);
        dVar12 = *(double *)(iVar8 + 0x18);
        pVVar1 = (Vec3_L_double_G_ *)(iVar8 + 8);
        pVVar1->X = dVar6;
        dVar2 = dVar2 - param_3;
        *(double *)(iVar8 + 0x10) = dVar2;
        dVar12 = dVar12 - param_4;
        *(double *)(iVar8 + 0x18) = dVar12;
        uStack_34 = local_2c;
        local_1c = dVar2 * dVar2 + dVar6 * dVar6 + dVar12 * dVar12;
        pMVar10 = util__Sqrt(local_84,&local_1c);
        if (pMVar10->IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        dVar2 = pMVar10->Data;
        if (uStack_34 <= pMVar10->Data) {
          dVar2 = uStack_34;
        }
        uStack_34 = dVar2;
        pVVar11 = util__Vec3_double___SafeNormalized(pVVar1,(Vec3_L_double_G_ *)auStack_54);
        dVar2 = pVVar11->Z;
        dVar12 = pVVar11->Y * uStack_34;
        ((slice_view *)&auVar5)->_8_4_ = *(undefined4 *)&dVar12;
        ((slice_view *)&auVar5)->_0_8_ = pVVar11->X * uStack_34;
        ((slice_view *)&auVar5)->_12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        pVVar1->X = (double)((slice_view *)&auVar5)->_0_8_;
        pVVar1->Y = (double)((slice_view *)&auVar5)->_8_8_;
        *(double *)(iVar8 + 0x18) = dVar2 * uStack_34;
        local_c = local_c + 1;
        iVar8 = (**(code **)(*(int *)&this->PendingRadialImpulses + 0xc))();
      } while (local_c < iVar8);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00008194b0 008194b0_ShipGroupUI__GetShipsInGroup ====
// decompiled by BatchDecomp @ 008194b0 name=GetShipsInGroup conv=__thiscall body=228

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: class util::Darray<class util::WeakPtr<class SpacecraftComponent> > __thiscall
   ShipGroupUI__GetShipsInGroup(void)const  */

void __thiscall ShipGroupUI__GetShipsInGroup(ShipGroupUI *this)

{
  Darray_L_util__WeakPtr_L_SpacecraftComponent_G___G_ *pDVar1;
  ReferenceController *this_00;
  ReferenceController *this_01;
  bool bVar2;
  int iVar3;
  int *piVar4;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *in_stack_00000004;
  int local_14;
  undefined1 local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pDVar1 = &this->ShipsInGroup;
  local_10 = 0;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  iVar3 = (**(code **)(*(int *)pDVar1 + 0xc))();
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent(in_stack_00000004,iVar3);
  local_c = 0;
  iVar3 = (**(code **)(*(int *)pDVar1 + 0xc))();
  if (local_c < iVar3) {
    do {
      piVar4 = (int *)(**(code **)*(int *)pDVar1)(&local_c);
      if (((*piVar4 != 0) && ((ReferenceController *)piVar4[1] != (ReferenceController *)0x0)) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]),
         bVar2)) {
        iVar3 = *(int *)(in_stack_00000004 + 8);
        local_14 = iVar3 + 1;
        util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)in_stack_00000004,&local_14);
        bVar2 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)in_stack_00000004,iVar3);
        if (bVar2) {
          this_00 = *(ReferenceController **)
                     (*(int *)(in_stack_00000004 + 4) + -4 + *(int *)(in_stack_00000004 + 8) * 8);
          iVar3 = *(int *)(in_stack_00000004 + 4) + *(int *)(in_stack_00000004 + 8) * 8;
          *(int *)(iVar3 + -8) = *piVar4;
          this_01 = (ReferenceController *)piVar4[1];
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
      iVar3 = (**(code **)(*(int *)pDVar1 + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00008276a0 008276a0_ShipGroupUI___scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 008276a0 name=`scalar_deleting_destructor' conv=__thiscall body=131

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall ShipGroupUI::`scalar deleting destructor'(unsigned int) */

void * __thiscall ShipGroupUI___scalar_deleting_destructor_(ShipGroupUI *this,uint param_1)

{
  ReferenceController *pRVar1;
  bool bVar2;
  ReferenceControllerRegistry *this_00;
  UIWidget *pUVar3;
  
  pRVar1 = (this->Popup).Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__ReleaseStrongReference(pRVar1);
    if (bVar2) {
      pUVar3 = (this->Popup).Pointer;
      if (pUVar3 != (UIWidget *)0x0) {
        (**(code **)(pUVar3->_pad_0x0_0 + 4))(1);
        pUVar3 = (this->Popup).Pointer;
      }
      this_00 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(this_00,pUVar3);
      (this->Popup).Pointer = (UIWidget *)0x0;
    }
  }
  pRVar1 = (this->CompartmentList).Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&this->ShipsInGroup);
  UIButton___UIButton((UIButton *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,0x1d0);
  }
  return this;
}


//==== 0000827800 00827800_ShipGroupUI__AnyShipsInFleetHaveDeltaV ====
// decompiled by BatchDecomp @ 00827800 name=AnyShipsInFleetHaveDeltaV conv=__thiscall body=196

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall ShipGroupUI__AnyShipsInFleetHaveDeltaV(void)const  */

bool __thiscall ShipGroupUI__AnyShipsInFleetHaveDeltaV(ShipGroupUI *this)

{
  SpacecraftComponent *this_00;
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_1c = (undefined4 *)0x0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  TacticalManager__GetPlayerSpacecraftComponents((TacticalManager *)this->_pad_0x0_0);
  local_c = 0;
  iVar3 = (*(code *)local_1c[3])();
  if (local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(*(code *)*local_1c)(&local_c);
      if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
         !bVar1)) {
        *puVar4 = 0;
      }
      this_00 = (SpacecraftComponent *)*puVar4;
      SpacecraftComponent__HasDeltaVLeft_Memoize(this_00);
      if ((this_00->HasDeltaVLeft_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      if ((this_00->HasDeltaVLeft_MemoizedValue).Data != false) {
        uVar2 = 1;
        goto LAB_008278a5;
      }
      local_c = local_c + 1;
      iVar3 = (*(code *)local_1c[3])();
    } while (local_c < iVar3);
  }
  uVar2 = 0;
LAB_008278a5:
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_1c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}


//==== 00008278d0 008278d0_ShipGroupUI__AreAllShipsTargeted ====
// decompiled by BatchDecomp @ 008278d0 name=AreAllShipsTargeted conv=__thiscall body=149

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall ShipGroupUI__AreAllShipsTargeted(void)const  */

bool __thiscall ShipGroupUI__AreAllShipsTargeted(ShipGroupUI *this)

{
  bool bVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  SpacecraftTargeting *this_00;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_1c[16];
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar3 = (int *)GetShipsInGroup(this);
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
      this_00 = SpacecraftComponent__GetTargeting((SpacecraftComponent *)*puVar5);
      bVar1 = SpacecraftTargeting__IsAnEnemyTargetPriority(this_00);
      if (!bVar1) {
        uVar2 = 0;
        goto LAB_00827946;
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(*piVar3 + 0xc))();
    } while (local_c < iVar4);
  }
  uVar2 = 1;
LAB_00827946:
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_1c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}


//==== 0000827970 00827970_ShipGroupUI__AreAnyShipsTargeted ====
// decompiled by BatchDecomp @ 00827970 name=AreAnyShipsTargeted conv=__thiscall body=149

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall ShipGroupUI__AreAnyShipsTargeted(void)const  */

bool __thiscall ShipGroupUI__AreAnyShipsTargeted(ShipGroupUI *this)

{
  bool bVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  SpacecraftTargeting *this_00;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_1c[16];
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar3 = (int *)GetShipsInGroup(this);
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
      this_00 = SpacecraftComponent__GetTargeting((SpacecraftComponent *)*puVar5);
      bVar1 = SpacecraftTargeting__IsAnEnemyTargetPriority(this_00);
      if (bVar1) {
        uVar2 = 1;
        goto LAB_008279e6;
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(*piVar3 + 0xc))();
    } while (local_c < iVar4);
  }
  uVar2 = 0;
LAB_008279e6:
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_1c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}


//==== 0000827d80 00827d80_ShipGroupUI__GetAlliance ====
// decompiled by BatchDecomp @ 00827d80 name=GetAlliance conv=__thiscall body=141

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: class Faction * __thiscall ShipGroupUI__GetAlliance(void)const  */

Faction * __thiscall ShipGroupUI__GetAlliance(ShipGroupUI *this)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  Faction *pFVar4;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_28[16];
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_18[16];
  undefined4 local_8;
  
  bVar1 = false;
  local_8 = 0;
  piVar2 = (int *)GetShipsInGroup(this);
  iVar3 = (**(code **)(*piVar2 + 0xc))();
  if (iVar3 < 1) {
    pFVar4 = (Faction *)0x0;
  }
  else {
    piVar2 = (int *)GetShipsInGroup(this);
    piVar2 = (int *)(**(code **)(*piVar2 + 0x20))();
    if ((ReferenceController *)piVar2[1] != (ReferenceController *)0x0) {
      bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar2[1]);
      if (!bVar1) {
        *piVar2 = 0;
      }
    }
    iVar3 = *piVar2;
    if (*(ReferenceController **)(iVar3 + 8) != (ReferenceController *)0x0) {
      bVar1 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar3 + 8));
      if (!bVar1) {
        *(undefined4 *)(iVar3 + 4) = 0;
      }
    }
    bVar1 = true;
    pFVar4 = *(Faction **)(*(int *)(iVar3 + 4) + 0x1e0);
  }
  if (bVar1) {
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_18);
  }
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_28);
  return pFVar4;
}


//==== 0000828b30 00828b30_ShipGroupUI__GetDodgeOrder ====
extern undefined4 FUN_008250f0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 00828b30 name=GetDodgeOrder conv=__thiscall body=292

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: enum ShipGroupUI::GroupType __thiscall ShipGroupUI__GetDodgeOrder(void)const  */

GroupType __thiscall ShipGroupUI__GetDodgeOrder(ShipGroupUI *this)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  GroupType GVar5;
  uint uVar6;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_2c[16];
  undefined4 *local_1c;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  uint local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = local_c & 0xffffff00;
  local_1c = (undefined4 *)0x0;
  uStack_18 = 0;
  iStack_14 = 0;
  uStack_10 = 0;
  uVar6 = local_c;
  uVar2 = GetShipsInGroup(this);
  FUN_008250f0(&local_1c,uVar2,uVar6);
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_2c);
  if (iStack_14 == 0) {
    GVar5 = None;
  }
  else {
    local_c = 0;
    iVar3 = (*(code *)local_1c[3])();
    if ((int)local_c < iVar3) {
      do {
        puVar4 = (undefined4 *)(*(code *)*local_1c)(&local_c);
        if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
           !bVar1)) {
          *puVar4 = 0;
        }
        bVar1 = ControllableComponent__IsDodging((ControllableComponent *)*puVar4);
        if (bVar1) {
          GVar5 = Some;
          goto LAB_00828bdc;
        }
        local_c = local_c + 1;
        iVar3 = (*(code *)local_1c[3])();
      } while ((int)local_c < iVar3);
    }
    GVar5 = None;
LAB_00828bdc:
    local_c = 0;
    iVar3 = (*(code *)local_1c[3])();
    if ((int)local_c < iVar3) {
      do {
        puVar4 = (undefined4 *)(*(code *)*local_1c)(&local_c);
        if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
           !bVar1)) {
          *puVar4 = 0;
        }
        bVar1 = ControllableComponent__IsDodging((ControllableComponent *)*puVar4);
        if (!bVar1) goto LAB_00828c34;
        local_c = local_c + 1;
        iVar3 = (*(code *)local_1c[3])();
      } while ((int)local_c < iVar3);
    }
    GVar5 = Every;
  }
LAB_00828c34:
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return GVar5;
}


//==== 0000828e10 00828e10_ShipGroupUI__GetQuickInfoForTag ====
// decompiled by BatchDecomp @ 00828e10 name=GetQuickInfoForTag conv=__thiscall body=180

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: class util::Str<char> __thiscall ShipGroupUI__GetQuickInfoForTag(void)const  */

Str_L_char_G_ * __thiscall
ShipGroupUI__GetQuickInfoForTag(ShipGroupUI *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 *puVar1;
  bool bVar2;
  CraftBlueprint *pCVar3;
  undefined4 local_18;
  undefined4 *puStack_14;
  int iStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_18 = 0;
  puStack_14 = (undefined4 *)0x0;
  iStack_10 = 0;
  uStack_c = 0;
  GetShipsInGroup(this);
  if (iStack_10 == 0) {
    __return_storage_ptr__->Data = (char *)0x0;
    __return_storage_ptr__->Capacity = 0;
    __return_storage_ptr__->Length = 0;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_18);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return __return_storage_ptr__;
  }
  if (iStack_10 < 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3a,
                    "Size > 0",(char *)0x0);
    DebugBreak();
  }
  puVar1 = puStack_14;
  if ((ReferenceController *)puStack_14[1] != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puStack_14[1]);
    if (!bVar2) {
      *puVar1 = 0;
    }
  }
  pCVar3 = SpacecraftComponent__GetCraftDesign((SpacecraftComponent *)*puVar1);
  util__Str_char___Str_char(__return_storage_ptr__,(Str_L_char_G_ *)&pCVar3->_pad_0x0_0);
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_18);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 000082a220 0082a220_ShipGroupUI__IsGroupEnemy ====
// decompiled by BatchDecomp @ 0082a220 name=IsGroupEnemy conv=__thiscall body=179

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall ShipGroupUI__IsGroupEnemy(void)const  */

bool __thiscall ShipGroupUI__IsGroupEnemy(ShipGroupUI *this)

{
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
  iVar5 = (**(code **)(*piVar4 + 0xc))();
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
      pFVar7 = TacticalManager__GetEnemyAlliance((TacticalManager *)this->_pad_0x0_0);
      if (pFVar1 != pFVar7) {
        uVar3 = 0;
        goto LAB_0082a2b4;
      }
      local_c = local_c + 1;
      iVar5 = (**(code **)(*piVar4 + 0xc))();
    } while (local_c < iVar5);
  }
  uVar3 = 1;
LAB_0082a2b4:
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_1c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar3;
}


//==== 000082a2e0 0082a2e0_ShipGroupUI__IsPressed ====
// decompiled by BatchDecomp @ 0082a2e0 name=IsPressed conv=__thiscall body=44

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual bool __thiscall ShipGroupUI__IsPressed(void)const  */

bool __thiscall ShipGroupUI__IsPressed(ShipGroupUI *this)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = IsSelected(this);
  if (bVar1) {
    return true;
  }
  bVar1 = UIWidget__IsCaptured((UIWidget *)this);
  if ((bVar1) && (cVar2 = (**(code **)(*(int *)this + 0xc))(), cVar2 != '\0')) {
    return true;
  }
  return false;
}


//==== 000082a310 0082a310_ShipGroupUI__IsSelected ====
// decompiled by BatchDecomp @ 0082a310 name=IsSelected conv=__thiscall body=168

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall ShipGroupUI__IsSelected(void)const  */

bool __thiscall ShipGroupUI__IsSelected(ShipGroupUI *this)

{
  bool bVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_1c[16];
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar3 = (int *)GetShipsInGroup(this);
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
      iVar4 = *piVar5;
      if (*(ReferenceController **)(iVar4 + 8) != (ReferenceController *)0x0) {
        bVar1 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar4 + 8));
        if (!bVar1) {
          *(undefined4 *)(iVar4 + 4) = 0;
        }
      }
      bVar1 = Body__IsSelected(*(Body **)(iVar4 + 4));
      if (bVar1) {
        uVar2 = 1;
        goto LAB_0082a399;
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(*piVar3 + 0xc))();
    } while (local_c < iVar4);
  }
  uVar2 = 0;
LAB_0082a399:
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_1c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}


//==== 000082aac0 0082aac0_ShipGroupUI__SplitUnits ====
// decompiled by BatchDecomp @ 0082aac0 name=SplitUnits conv=__thiscall body=315

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: void __thiscall ShipGroupUI__SplitUnits(void) */

void __thiscall ShipGroupUI__SplitUnits(ShipGroupUI *this)

{
  Body *this_00;
  ReferenceController *this_01;
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_28[20];
  ShipGroupUI *local_14;
  bool local_10;
  undefined3 uStack_f;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_14 = this;
  bVar1 = CanSplitUnits(this);
  _local_10 = CONCAT31(uStack_f,bVar1);
  piVar2 = (int *)GetShipsInGroup(this);
  local_c = 0;
  iVar3 = (**(code **)(*piVar2 + 0xc))();
  if (local_c < iVar3) {
    do {
      piVar4 = (int *)(**(code **)*piVar2)(&local_c);
      if (((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]),
         !bVar1)) {
        *piVar4 = 0;
      }
      iVar3 = *piVar4;
      if ((*(ReferenceController **)(iVar3 + 8) != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar3 + 8)),
         !bVar1)) {
        *(undefined4 *)(iVar3 + 4) = 0;
      }
      this_00 = *(Body **)(iVar3 + 4);
      Body__GetControllableComponent_Memoize(this_00);
      if ((this_00->GetControllableComponent_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      this_01 = (this_00->GetControllableComponent_MemoizedValue).Data.Controller;
      if ((this_01 != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid(this_01), !bVar1)) {
        (this_00->GetControllableComponent_MemoizedValue).Data.Pointer =
             (ControllableComponent *)0x0;
      }
      ControllableComponent__MarkAsShouldSplitFromMainFleet((this_00->GetControllableComponent_MemoizedValue).Data.Pointer,SUB41(_local_10,0));
      local_c = local_c + 1;
      iVar3 = (**(code **)(*piVar2 + 0xc))();
      this = local_14;
    } while (local_c < iVar3);
  }
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_28);
  puVar5 = (undefined4 *)TacticalManager__GetTacticalUI((TacticalManager *)this->_pad_0x0_0);
  if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
     (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]), !bVar1)
     ) {
    *puVar5 = 0;
  }
  HUDTactical__RequestRebuildOfShips((HUDTactical *)*puVar5);
  if (local_14 != (ShipGroupUI *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)local_14);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000082ac00 0082ac00_ShipGroupUI__SplittingIsValid ====
// decompiled by BatchDecomp @ 0082ac00 name=SplittingIsValid conv=__thiscall body=132

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall ShipGroupUI__SplittingIsValid(void)const  */

bool __thiscall ShipGroupUI__SplittingIsValid(ShipGroupUI *this)

{
  bool bVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_28[16];
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
  GetShipsInGroup(this);
  if (0 < iStack_10) {
    bVar1 = AnyShipsInFleetHaveDeltaV(this);
    if (bVar1) {
      piVar3 = (int *)TacticalManager__GetPlayerSpacecraftComponents((TacticalManager *)this->_pad_0x0_0);
      iVar4 = (**(code **)(*piVar3 + 0xc))();
      util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_28);
      if (1 < iVar4) {
        bVar1 = AreShipsNonStationary(this);
        if (bVar1) {
          uVar2 = 1;
          goto LAB_0082ac6a;
        }
      }
    }
  }
  uVar2 = 0;
LAB_0082ac6a:
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_18);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}

