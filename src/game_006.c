// Auto-generated from Ghidra decompilation
#include "port_prelude.h"

//==== 00517070 GetSegmentsFromSpline ====


/* public: static class util__Darray_L_structutil__Line2_L_double_G__G_ __cdecl
   CraftSplinePoint__GetSegmentsFromSpline(class util__Darray_L_structCraftSplinePoint_G_ const &) */

void __cdecl CraftSplinePoint__GetSegmentsFromSpline(Darray_L_struct_CraftSplinePoint_G_ *param_1,Darray_L_struct_CraftSplinePoint_G_ *param_2)

{
  undefined8 stack0xfffffffc;
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  CraftSplinePoint *pCVar7;
  double dVar8;
  double dVar9;
  int *in_stack_00000008;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar6 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
  util__Darray_struct_util__Line2_double_____Darray_struct_util__Line2_double
            ((Darray_L_struct_util__Line2_L_double_G___G_ *)param_1,iVar6 + -1);
  iStack_c = 0;
  iVar6 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
  if (iStack_c < iVar6 + -1) {
    do {
      iStack_10 = iStack_c + 1;
      pCVar7 = (CraftSplinePoint *)(**(code **)*in_stack_00000008)(&iStack_10);
      dVar8 = GetRadius_m(pCVar7);
      uVar2 = *(undefined8 *)(pCVar7 + 0x10);
      pCVar7 = (CraftSplinePoint *)(**(code **)*in_stack_00000008)(&iStack_c);
      dVar9 = GetRadius_m(pCVar7);
      uVar3 = *(undefined8 *)(pCVar7 + 0x10);
      iVar6 = *(int *)(param_1 + 8);
      uStack_18 = SUB84(dVar9,0);
      util__Darray_struct_util__Line2_double_____SetSize
                ((Darray_L_struct_util__Line2_L_double_G___G_ *)param_1,&iStack_14);
      bVar5 = util__Darray_struct_util__Line2_double_____CheckSize
                        ((Darray_L_struct_util__Line2_L_double_G___G_ *)param_1,iVar6);
      if (bVar5) {
        iVar6 = *(int *)(param_1 + 8);
        iVar4 = *(int *)(param_1 + 4);
        uStack_44 = (undefined4)((ulonglong)dVar9 >> 0x20);
        uStack_40 = (undefined4)uVar3;
        uStack_3c = (undefined4)((ulonglong)uVar3 >> 0x20);
        puVar1 = (undefined4 *)(iVar6 * 0x20 + -0x20 + iVar4);
        *puVar1 = uStack_18;
        puVar1[1] = uStack_44;
        puVar1[2] = uStack_40;
        puVar1[3] = uStack_3c;
        uStack_38 = SUB84(dVar8,0);
        uStack_34 = (undefined4)((ulonglong)dVar8 >> 0x20);
        uStack_30 = (undefined4)uVar2;
        uStack_2c = (undefined4)((ulonglong)uVar2 >> 0x20);
        puVar1 = (undefined4 *)(iVar6 * 0x20 + -0x10 + iVar4);
        *puVar1 = uStack_38;
        puVar1[1] = uStack_34;
        puVar1[2] = uStack_30;
        puVar1[3] = uStack_2c;
      }
      iStack_c = iStack_c + 1;
      iVar6 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
    } while (iStack_c < iVar6 + -1);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00517190 GetSplinePointsPerArmorPlate_m ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: class util__Darray_L_structutil__Vec2_L_double_G__G_ __thiscall
   CraftBlueprintArmor__GetSplinePointsPerArmorPlate_m(int)const  */

Darray_L_util__Vec2_L_double_G___G_ * __thiscall
CraftBlueprintArmor__GetSplinePointsPerArmorPlate_m
          (CraftBlueprintArmor *this,Darray_L_util__Vec2_L_double_G___G_ *__return_storage_ptr__,int param_1
          )

{
  undefined8 stack0xfffffffc;
  int iVar1;
  Vec2_L_double_G_ *pVVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  Darray_L_util__Darray_L_int_G___G_ *pDVar6;
  Darray_L_int_G_ *pDVar7;
  Darray_L_struct_util__Line2_L_double_G___G_ *pDVar8;
  Vec3_L_int_G_ *pVVar9;
  int *piVar10;
  double *pdVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 local_58 [8];
  double local_50;
  int local_48;
  undefined1 local_44 [12];
  undefined8 uStack_38;
  int local_30;
  Darray_L_util__Line2_L_double_G___G_ local_2c;
  Darray_L_int_G_ local_1c;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_1c._pad_0x0_0 = 0;
  local_1c.Data = (int *)0x0;
  local_1c.Size = 0;
  local_1c.Capacity = 0;
  if ((char)((this->GetArmorCylinders_MemoizedValue).Data.Data == '\0')) {
    iVar1 = (int)((this->GetOuterArmorSpline_m_MemoizedValue).IsValidData);
    *(uint32_t *)&local_30 = iVar1 + 1;
    util__Darray_L_util__Reflectable_P_G___SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&(this->GetOuterArmorSpline_m_MemoizedValue).Data.Size,
               &local_30);
    bVar5 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &(this->GetOuterArmorSpline_m_MemoizedValue).Data.Size,iVar1);
    if (bVar5) {
      *(code **)((this->GetOuterArmorSpline_m_MemoizedValue).Data.Capacity + -4 +
                (*(void **)((char *)&(this->GetOuterArmorSpline_m_MemoizedValue) + 4))) = (void *)(GetArmorPlatesPerSegment_Clear);
    }
    pDVar6 = (Darray_L_util__Darray_L_int_G___G_ *)(uintptr_t)(GetArmorPlatesPerSegment_MemoizedFunction((Darray_L_util__Darray_L_int_G___G_ *)local_58));
    util__Darray_L_util__Darray_L_int_G___G___Darray_L_util__Darray_L_int_G___G_
              ((Darray_L_util__Darray_L_int_G___G_ *)local_44,(Darray_L_class_util__Darray_L_int_G___G_ *)pDVar6);
    (*(uint40_t*)&(uStack_38)) = CONCAT14(1,(int)uStack_38);
    util__Darray_L_util__Darray_L_int_G___G___op_assign
              ((Darray_L_util__Darray_L_int_G___G_ *)&(this->GetYPlateCountsByLayer_MemoizedValue).Data.Size
               ,(Darray_L_class_util__Darray_L_int_G___G_ *)local_44);
    *(undefined1 *)&(this->GetArmorCylinders_MemoizedValue).Data.Data = (*(uint8_t*)((char*)&(uStack_38)+4));
    (*(uint32_t*)&(local_44)) = (uint32_t)(uintptr_t)(&vftable_100);
    if ((Darray_L_int_G_ *)(*(uint32_t*)((char*)&(local_44)+4)) != (Darray_L_int_G_ *)0x0) {
      if (((Darray_L_int_G_ *)((*(uint32_t*)((char*)&(local_44)+4)) + -0x10))->Capacity == 0) {
        port_op_delete(&((Darray_L_int_G_ *)((*(uint32_t*)((char*)&(local_44)+4)) + -0x10))->Capacity);
      }
      else {
        (**(code **)(*(int *)(*(uint32_t*)((char*)&(local_44)+4)) + 0x18))(3);
      }
    }
    (*(uint64_t*)((char*)&(local_44)+4)) = (*(uint64_t*)((char*)&(local_44)+4)) & 0xffffffff00000000;
    (*(uint32_t*)&(local_44)) = (uint32_t)(uintptr_t)(&vftable);
    (*(uint32_t*)&(local_58)) = (uint32_t)(uintptr_t)(&vftable_100);
    if ((Darray_L_int_G_ *)(*(uint32_t*)((char*)&(local_58)+4)) != (Darray_L_int_G_ *)0x0) {
      if (((Darray_L_int_G_ *)((*(uint32_t*)((char*)&(local_58)+4)) + -0x10))->Capacity == 0) {
        port_op_delete(&((Darray_L_int_G_ *)((*(uint32_t*)((char*)&(local_58)+4)) + -0x10))->Capacity);
      }
      else {
        (**(code **)(*(int *)(*(uint32_t*)((char*)&(local_58)+4)) + 0x18))(3);
      }
    }
    (*(uint32_t*)((char*)&(local_58)+4)) = (uint32_t)(uintptr_t)((Darray_L_int_G_ *)0x0);
    (*(uint32_t*)&(local_58)) = (uint32_t)(uintptr_t)(&vftable);
  }
  if ((char)((this->GetArmorCylinders_MemoizedValue).Data.Data == '\0')) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pDVar7 = (Darray_L_int_G_ *)
           (**(code **)(this->GetYPlateCountsByLayer_MemoizedValue).Data.Size)(&param_1);
  util__Darray_int___Darray_int(&local_1c,pDVar7);
  local_2c._pad_0x0_0 = 0;
  local_2c.Data = (Line2_L_double_G_ *)0x0;
  local_2c.Size = 0;
  local_2c.Capacity = 0;
  GetOuterArmorSegmentsByLayer_m_Memoize(this);
  if ((char)(this->GetAllLayersOuterPlateSegments_m_MemoizedValue).Data._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pDVar8 = (Darray_L_struct_util__Line2_L_double_G___G_ *)
           (**(code **)(this->GetArmorPlateHeights_m_MemoizedValue).Data.Data)(&param_1);
  util__Darray_L_util__Line2_L_double_G___G___Darray_L_util__Line2_L_double_G___G_(&local_2c,pDVar8);
  if (local_2c.Size != local_1c.Size) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\crafts\\armor.cpp",0x2c0,
                    "ArmorSegments_m.Num() == PlatesPerSegment.Num()",(char *)0x0);
    DebugBreak();
  }
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (Vec2_L_double_G_ *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  if (*(char *)((this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 4) == '\0') {
    iVar1 = (int)((this->GetOuterArmorSpline_m_MemoizedValue).IsValidData);
    *(uint32_t *)&local_30 = iVar1 + 1;
    util__Darray_L_util__Reflectable_P_G___SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&(this->GetOuterArmorSpline_m_MemoizedValue).Data.Size,
               &local_30);
    bVar5 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &(this->GetOuterArmorSpline_m_MemoizedValue).Data.Size,iVar1);
    if (bVar5) {
      *(code **)((this->GetOuterArmorSpline_m_MemoizedValue).Data.Capacity + -4 +
                (*(void **)((char *)&(this->GetOuterArmorSpline_m_MemoizedValue) + 4))) = (void *)(GetArmorPlateCount_Clear);
    }
    pVVar9 = (Vec3_L_int_G_ *)(uintptr_t)(GetArmorPlateCount_MemoizedFunction(this,(Vec3_L_int_G_ *)(local_58 + 4)));
    uStack_38 = (double)CONCAT35((*(uint24_t*)((char*)&(uStack_38)+5)),0x100000000);
    (*(uint32_t*)((char*)&(local_44)+4)) = pVVar9->X;
    (*(uint32_t*)((char*)&(local_44)+8)) = pVVar9->Y;
    iVar1 = pVVar9->Z;
    uStack_38 = (double)CONCAT44((*(uint32_t*)((char*)&(uStack_38)+4)),iVar1);
    *(undefined4 *)((int)(this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x14) =
         (*(uint32_t*)((char*)&(local_44)+4));
    *(undefined4 *)((this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 3) =
         (*(uint32_t*)((char*)&(local_44)+8));
    *(int *)((int)(this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x1c) = iVar1;
    *(undefined4 *)((this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 4) =
         (*(uint32_t*)((char*)&(uStack_38)+4));
    if (*(char *)((this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 4) == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  util__Darray_L_util__Vec2_L_double_G___G___Darray_L_util__Vec2_L_double_G___G_
            (__return_storage_ptr__,
             *(int *)((this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 3) + 1);
  local_c = 0;
  if (0 < local_1c.Size) {
    do {
      piVar10 = (int *)(**(code **)local_1c._pad_0x0_0)(&local_c);
      iVar1 = *piVar10;
      pdVar11 = (double *)(**(code **)local_2c._pad_0x0_0)(&local_c);
      dVar4 = *pdVar11;
      dVar3 = pdVar11[2];
      *(uint32_t *)&local_30 = iVar1;
      if (local_c == local_1c.Size + -1) {
        *(uint32_t *)&local_30 = iVar1 + 1;
      }
      iVar12 = 0;
      if (0 < local_30) {
        uStack_38 = pdVar11[3] - pdVar11[1];
        local_50 = (double)iVar1;
        do {
          dVar16 = pdVar11[1];
          dVar15 = *pdVar11;
          iVar1 = __return_storage_ptr__->Size;
          local_48 = iVar1 + 1;
          dVar13 = (double)iVar12 / local_50;
          dVar14 = uStack_38 * dVar13;
          util__Darray_L_util__Vec2_L_double_G___G___SetSize(__return_storage_ptr__,&local_48);
          bVar5 = util__Darray_L_util__Vec2_L_double_G___G___CheckSize(__return_storage_ptr__,iVar1);
          if (bVar5) {
            iVar1 = __return_storage_ptr__->Size;
            pVVar2 = __return_storage_ptr__->Data;
            pVVar2[iVar1 + -1].X = (dVar3 - dVar4) * dVar13 + dVar15;
            pVVar2[iVar1 + -1].Y = dVar14 + dVar16;
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < local_30);
      }
      local_c = local_c + 1;
    } while (local_c < local_1c.Size);
  }
  local_2c._pad_0x0_0 = (int)&vftable_13;
  if (local_2c.Data != (Line2_L_double_G_ *)0x0) {
    port_op_delete(local_2c.Data);
  }
  local_2c.Data = (Line2_L_double_G_ *)0x0;
  local_2c._pad_0x0_0 = (int)&vftable;
  local_1c._pad_0x0_0 = (int)&vftable_11;
  if (local_1c.Data != (int *)0x0) {
    port_op_delete(local_1c.Data);
  }
  return __return_storage_ptr__;
}

//==== 00517b20 GetSurfaceIndexFromAngle ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: int __thiscall CraftBlueprintArmor__GetSurfaceIndexFromAngle(double)const  */

int __thiscall
CraftBlueprintArmor__GetSurfaceIndexFromAngle(CraftBlueprintArmor *this,double param_1)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  Darray_L_double_G_ *pDVar2;
  double *pdVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  Darray_L_double_G_ local_48;
  Darray_L_double_G_ local_38;
  Darray_L_double_G_ local_28;
  undefined1 local_18;
  int local_14;
  double local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = util__NormalizeAngle_double(param_1);
  local_48._pad_0x0_0 = 0;
  local_48.Data = (double *)0x0;
  local_48.Size = 0;
  local_48.Capacity = 0;
  if ((char)(this->GetOuterArmorSegmentsByLayer_m_MemoizedValue).Data._pad_0x0_0 == '\0') {
    iVar5 = (int)((this->GetOuterArmorSpline_m_MemoizedValue).IsValidData);
    local_14 = iVar5 + 1;
    util__Darray_L_util__Reflectable_P_G___SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&(this->GetOuterArmorSpline_m_MemoizedValue).Data.Size,
               &local_14);
    bVar1 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &(this->GetOuterArmorSpline_m_MemoizedValue).Data.Size,iVar5);
    if (bVar1) {
      *(code **)((this->GetOuterArmorSpline_m_MemoizedValue).Data.Capacity + -4 +
                (*(void **)((char *)&(this->GetOuterArmorSpline_m_MemoizedValue) + 4))) = (void *)(GetCrossSectionTrueAngles_radians_Clear);
    }
    pDVar2 = (long long int (*)())((Darray_L_double_G_ *)(uintptr_t)(GetCrossSectionTrueAngles_radians_MemoizedFunction(this,&local_38)));
    util__Darray_double___Darray_double(&local_28,pDVar2);
    local_18 = 1;
    util__Darray_double___operator
              ((Darray_L_double_G_ *)&(this->GetOuterArmorSegments_m_MemoizedValue).Data.Data,&local_28)
    ;
    *(undefined1 *)&(this->GetOuterArmorSegmentsByLayer_m_MemoizedValue).Data._pad_0x0_0 = local_18;
    local_28._pad_0x0_0 = (int)&vftable_63;
    if (local_28.Data != (double *)0x0) {
      port_op_delete(local_28.Data);
    }
    local_28.Data = (double *)0x0;
    local_28._pad_0x0_0 = (int)&vftable;
    local_38._pad_0x0_0 = (int)&vftable_63;
    if (local_38.Data != (double *)0x0) {
      port_op_delete(local_38.Data);
    }
    local_38.Data = (double *)0x0;
    local_38._pad_0x0_0 = (int)&vftable;
  }
  if ((char)(this->GetOuterArmorSegmentsByLayer_m_MemoizedValue).Data._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  util__Darray_double___Darray_double
            (&local_48,(Darray_L_double_G_ *)&(this->GetOuterArmorSegments_m_MemoizedValue).Data.Data);
  iVar5 = (this->ArmorLayers)._padfb0;
  if (iVar5 == 1) {
    iVar4 = 3;
  }
  else if (iVar5 == 2) {
    iVar4 = 4;
  }
  else if (iVar5 == 3) {
    iVar4 = 5;
  }
  else if (iVar5 == 4) {
    iVar4 = 6;
  }
  else if (iVar5 == 5) {
    iVar4 = 8;
  }
  else {
    iVar4 = 0x20;
    if (iVar5 == 6) {
      iVar4 = 0xc;
    }
  }
  iVar5 = 0;
  for (pdVar3 = local_48.Data;
      (iVar6 = iVar4, pdVar3 != local_48.Data + local_48.Size &&
      (iVar6 = iVar5, *pdVar3 <= local_10)); pdVar3 = pdVar3 + 1) {
    iVar5 = iVar5 + 1;
  }
  if (local_48.Data != (double *)0x0) {
    port_op_delete(local_48.Data);
  }
  return iVar6 + -1;
}

//==== 00517cd0 GetSurfaceLineFromAngle ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: struct util__Line2_L_double_G_ 
   CraftBlueprintArmor__GetSurfaceLineFromAngle(double)const  */

Line2_L_double_G_ * 
CraftBlueprintArmor__GetSurfaceLineFromAngle
          (CraftBlueprintArmor *this,Line2_L_double_G_ *__return_storage_ptr__,double param_1)

{
  undefined8 stack0xfffffffc;
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  Darray_L_util__Vec2_L_double_G___G_ *pDVar8;
  double *pdVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 in_stack_00000008;
  Darray_L_util__Vec2_L_double_G___G_ local_44;
  undefined1 local_34;
  undefined1 local_30 [16];
  int local_20;
  int local_1c;
  Darray_L_util__Vec2_L_double_G___G_ local_18;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_18._pad_0x0_0 = 0;
  local_18.Data = (Vec2_L_double_G_ *)0x0;
  local_18.Size = 0;
  local_18.Capacity = 0;
  if ((char)(this->GetInnerArmorSegments_m_MemoizedValue).Data._pad_0x0_0 == '\0') {
    iVar2 = (int)((this->GetOuterArmorSpline_m_MemoizedValue).IsValidData);
    local_20 = iVar2 + 1;
    util__Darray_L_util__Reflectable_P_G___SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&(this->GetOuterArmorSpline_m_MemoizedValue).Data.Size,
               &local_20);
    bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &(this->GetOuterArmorSpline_m_MemoizedValue).Data.Size,iVar2);
    if (bVar7) {
      *(code **)((this->GetOuterArmorSpline_m_MemoizedValue).Data.Capacity + -4 +
                (*(void **)((char *)&(this->GetOuterArmorSpline_m_MemoizedValue) + 4))) = (void *)(GetCrossSectionPoints_Clear);
    }
    pDVar8 = (Darray_L_util__Vec2_L_double_G___G_ *)(uintptr_t)(GetCrossSectionPoints_MemoizedFunction(this,(Darray_L_util__Vec2_L_double_G___G_ *)local_30));
    util__Darray_L_util__Vec2_L_double_G___G___Darray_L_util__Vec2_L_double_G___G_
              (&local_44,(Darray_L_struct_util__Vec2_L_double_G___G_ *)pDVar8);
    *(uint32_t *)&local_34 = 1;
    util__Darray_L_util__Vec2_L_double_G___G___op_assign
              ((Darray_L_util__Vec2_L_double_G___G_ *)&(this->GetInnerArmorSpline_m_MemoizedValue).Data.Data
               ,(Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_44);
    *(undefined1 *)&(this->GetInnerArmorSegments_m_MemoizedValue).Data._pad_0x0_0 = local_34;
    local_44._pad_0x0_0 = (int)&vftable_12;
    if (local_44.Data != (Vec2_L_double_G_ *)0x0) {
      port_op_delete(local_44.Data);
    }
    local_44.Data = (Vec2_L_double_G_ *)0x0;
    local_44._pad_0x0_0 = (int)&vftable;
    (*(uint32_t*)&(local_30)) = (uint32_t)(uintptr_t)(&vftable_12);
    if ((Vec2_L_double_G_ *)(*(uint32_t*)((char*)&(local_30)+4)) != (Vec2_L_double_G_ *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(local_30)+4)));
    }
    (*(uint32_t*)((char*)&(local_30)+4)) = (uint32_t)(uintptr_t)((Vec2_L_double_G_ *)0x0);
    (*(uint32_t*)&(local_30)) = (uint32_t)(uintptr_t)(&vftable);
  }
  if ((char)(this->GetInnerArmorSegments_m_MemoizedValue).Data._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  util__Darray_L_util__Vec2_L_double_G___G___Darray_L_util__Vec2_L_double_G___G_
            (&local_18,
             (Darray_L_struct_util__Vec2_L_double_G___G_ *)
             &(this->GetInnerArmorSpline_m_MemoizedValue).Data.Data);
  local_20 = GetSurfaceIndexFromAngle(this,(double)CONCAT44((*(uint32_t*)&(param_1)),in_stack_00000008));
  iVar2 = (this->ArmorLayers)._padfb0;
  if (iVar2 == 1) {
    iVar11 = 3;
  }
  else if (iVar2 == 2) {
    iVar11 = 4;
  }
  else if (iVar2 == 3) {
    iVar11 = 5;
  }
  else if (iVar2 == 4) {
    iVar11 = 6;
  }
  else if (iVar2 == 5) {
    iVar11 = 8;
  }
  else {
    iVar11 = 0x20;
    if (iVar2 == 6) {
      iVar11 = 0xc;
    }
  }
  local_1c = local_20 % iVar11;
  pdVar9 = (double *)(**(code **)local_18._pad_0x0_0)();
  dVar1 = *pdVar9;
  (*(uint64_t*)((char*)&(local_30)+8)) = pdVar9[1];
  local_1c = (local_20 + 1) % iVar11;
  puVar10 = (undefined4 *)(**(code **)local_18._pad_0x0_0)(&local_1c);
  uVar3 = *puVar10;
  uVar4 = puVar10[1];
  uVar5 = puVar10[2];
  uVar6 = puVar10[3];
  (__return_storage_ptr__->A).X = dVar1;
  (__return_storage_ptr__->A).Y = (double)(*(uint64_t*)((char*)&(local_30)+8));
  local_18._pad_0x0_0 = (int)&vftable_12;
  (undefined4)((__return_storage_ptr__->B).X = uVar3);
  *(undefined4 *)((int)&(__return_storage_ptr__->B).X + 4) = uVar4;
  (undefined4)((__return_storage_ptr__->B).Y = uVar5);
  *(undefined4 *)((int)&(__return_storage_ptr__->B).Y + 4) = uVar6;
  if (local_18.Data != (Vec2_L_double_G_ *)0x0) {
    port_op_delete(local_18.Data);
  }
  return __return_storage_ptr__;
}

//==== 00518780 GetTotalArmorThickness_m ====


/* public: double __thiscall CraftBlueprintArmor__GetTotalArmorThickness_m(void)const  */

double __thiscall CraftBlueprintArmor__GetTotalArmorThickness_m(CraftBlueprintArmor *this)

{
  int iVar1;
  double dVar2;
  
  iVar1 = (**(code **)((this->CraftBlueprintArmorMemoizationHandlerInstance).ResetFunctions.Size +
                      0xc))();
  dVar2 = GetArmorThickness_m(this,iVar1 + -1);
}





//==== 00518830 GetUnrolledDimensionsOfAllLayers_m_Clear ====


/* public: void __thiscall CraftBlueprintArmor__GetUnrolledDimensionsOfAllLayers_m_Clear(void)const
    */

void __thiscall
CraftBlueprintArmor__GetUnrolledDimensionsOfAllLayers_m_Clear(CraftBlueprintArmor *this)

{
  undefined **ppuStack_14;
  void *pvStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  ppuStack_14 = (undefined **)(&vftable_12);
  pvStack_10 = (void *)0x0;
  uStack_c = 0;
  uStack_8 = 0;
  util__Darray_struct_util__Vec2_double_____operator
            ((Darray_L_struct_util__Vec2_L_double_G___G_ *)&(this->GetArmorPlateCount_MemoizedValue).Data.Y,
             (Darray_L_struct_util__Vec2_L_double_G___G_ *)&ppuStack_14);
  ppuStack_14 = (undefined **)(&vftable_12);
  if (pvStack_10 != (void *)0x0) {
    port_op_delete(pvStack_10);
  }
  (undefined1)((this->GetYPlateCountsByLayer_MemoizedValue).Data.Data = 0);
  return;
}





//==== 00518890 GetUnrolledDimensionsOfAllLayers_m_Memoize ====


/* public: void __thiscall
   CraftBlueprintArmor__GetUnrolledDimensionsOfAllLayers_m_Memoize(void)const  */

void __thiscall
CraftBlueprintArmor__GetUnrolledDimensionsOfAllLayers_m_Memoize(CraftBlueprintArmor *this)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CraftBlueprintArmor *pCVar5;
  bool bVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  Vec2_L_double_G_ VStack_44;
  undefined **ppuStack_34;
  void *pvStack_30;
  undefined1 uStack_24;
  Vec2_L_double_G_ *pVStack_20;
  undefined **ppuStack_1c;
  void *pvStack_18;
  int iStack_14;
  undefined4 uStack_10;
  CraftBlueprintArmor *pCStack_c;
  int iStack_8;
  
  if ((char)((this->GetYPlateCountsByLayer_MemoizedValue).Data.Data == '\0')){
    iVar7 = *(int *)&(this->GetOuterArmorSpline_m_MemoizedValue).IsValidData;
    iStack_8 = iVar7 + 1;
    pCStack_c = this;
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)
               &(this->GetOuterArmorSpline_m_MemoizedValue).Data.Size,&iStack_8);
    bVar6 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)
                       &(this->GetOuterArmorSpline_m_MemoizedValue).Data.Size,iVar7);
    if (bVar6) {
      *(code **)((this->GetOuterArmorSpline_m_MemoizedValue).Data.Capacity + -4 +
                (int)((this->GetOuterArmorSpline_m_MemoizedValue).IsValidData * 4)) = (code *)(GetUnrolledDimensionsOfAllLayers_m_Clear);
    }
    piVar8 = &(this->CraftBlueprintArmorMemoizationHandlerInstance).ResetFunctions.Size;
    ppuStack_1c = (undefined **)0x0;
    pvStack_18 = (long long int (*)())((void *)0x0);
    iStack_14 = 0;
    uStack_10 = 0;
    iVar7 = (**(code **)((this->CraftBlueprintArmorMemoizationHandlerInstance).ResetFunctions.Size +
                        0xc))();
    util__Darray_struct_util__Vec2_double_____Darray_struct_util__Vec2_double
              ((Darray_L_struct_util__Vec2_L_double_G___G_ *)&ppuStack_1c,iVar7);
    iVar9 = 0;
    iVar7 = (**(code **)(uintptr_t)(*piVar8 + 0xc))();
    if (0 < iVar7) {
      do {
        pVStack_20 = (Vec2_L_double_G_ *)(uintptr_t)(GetUnrolledDimensions_m(pCStack_c,&VStack_44,iVar9));
        iVar7 = iStack_14;
        iStack_8 = iStack_14 + 1;
        util__Darray_struct_util__Vec2_double_____SetSize
                  ((Darray_L_struct_util__Vec2_L_double_G___G_ *)&ppuStack_1c,&iStack_8);
        bVar6 = util__Darray_struct_util__Vec2_double_____CheckSize
                          ((Darray_L_struct_util__Vec2_L_double_G___G_ *)&ppuStack_1c,iVar7);
        if (bVar6) {
          uVar2 = *(undefined4 *)((int)&pVStack_20->X + 4);
          uVar3 = *(undefined4 *)&pVStack_20->Y;
          uVar4 = *(undefined4 *)((int)&pVStack_20->Y + 4);
          puVar1 = (undefined4 *)((int)pvStack_18 + iStack_14 * 0x10 + -0x10);
          *puVar1 = *(undefined4 *)&pVStack_20->X;
          puVar1[1] = uVar2;
          puVar1[2] = uVar3;
          puVar1[3] = uVar4;
        }
        iVar9 = iVar9 + 1;
        iVar7 = (**(code **)(uintptr_t)(*piVar8 + 0xc))();
      } while (iVar9 < iVar7);
    }
    util__Darray_struct_util__Vec2_double_____Darray_struct_util__Vec2_double
              ((Darray_L_struct_util__Vec2_L_double_G___G_ *)&ppuStack_34,
               (Darray_L_struct_util__Vec2_L_double_G___G_ *)&ppuStack_1c);
    pCVar5 = pCStack_c;
    uStack_24 = 1;
    util__Darray_struct_util__Vec2_double_____operator
              ((Darray_L_struct_util__Vec2_L_double_G___G_ *)
               &(pCStack_c->GetArmorPlateCount_MemoizedValue).Data.Y,
               (Darray_L_struct_util__Vec2_L_double_G___G_ *)&ppuStack_34);
    *(undefined1 *)&(pCVar5->GetYPlateCountsByLayer_MemoizedValue).Data.Data = uStack_24;
    ppuStack_34 = (undefined **)(&vftable_12);
    if (pvStack_30 != (void *)0x0) {
      port_op_delete(pvStack_30);
    }
    pvStack_30 = (void *)0x0;
    ppuStack_34 = (undefined **)(&vftable);
    ppuStack_1c = (undefined **)(&vftable_12);
    if (pvStack_18 != (void *)0x0) {
      port_op_delete(pvStack_18);
    }
  }
  return;
}





//==== 005189d0 GetUnrolledDimensions_m ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: struct util__Vec2_L_double_G_ 
   CraftBlueprintArmor__GetUnrolledDimensions_m(int)const  */

Vec2_L_double_G_ * 
CraftBlueprintArmor__GetUnrolledDimensions_m
          (CraftBlueprintArmor *this,Vec2_L_double_G_ *__return_storage_ptr__,int param_1)

{
  undefined8 stack0xfffffffc;
  Line2_L_double_G_ **ppLVar1;
  double dVar2;
  Vec2_L_double_G_ *pVVar3;
  bool bVar4;
  Darray_L_struct_util__Line2_L_double_G___G_ *pDVar5;
  int iVar6;
  double *pdVar7;
  Maybe_L_double_G_ *pMVar8;
  Darray_L_util__Line2_L_double_G___G_ *pDVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  Darray_L_util__Line2_L_double_G___G_ local_6c;
  undefined1 local_5c;
  undefined1 local_58 [8];
  undefined8 local_50;
  double local_48;
  double local_40;
  double local_38;
  Vec2_L_double_G_ *local_30;
  Darray_L_util__Line2_L_double_G___G_ local_2c;
  Darray_L_util__Line2_L_double_G___G_ local_1c;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(uint32_t *)&local_30 = (uint32_t)(uintptr_t)(__return_storage_ptr__);
  local_1c._pad_0x0_0 = 0;
  local_1c.Data = (Line2_L_double_G_ *)0x0;
  local_1c.Size = 0;
  local_1c.Capacity = 0;
  GetOuterArmorSegmentsByLayer_m_Memoize(this);
  if ((char)(this->GetAllLayersOuterPlateSegments_m_MemoizedValue).Data._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pDVar5 = (Darray_L_struct_util__Line2_L_double_G___G_ *)
           (**(code **)(this->GetArmorPlateHeights_m_MemoizedValue).Data.Data)(&param_1);
  util__Darray_L_util__Line2_L_double_G___G___Darray_L_util__Line2_L_double_G___G_(&local_1c,pDVar5);
  local_c = 0;
  local_38 = 0.0;
  local_40 = 0.0;
  iVar6 = (**(code **)(uintptr_t)(local_1c._pad_0x0_0 + 0xc))();
  if (local_c < iVar6) {
    do {
      pdVar7 = (double *)(**(code **)local_1c._pad_0x0_0)(&local_c);
      local_50 = (pdVar7[2] - *pdVar7) * (pdVar7[2] - *pdVar7) +
                 (pdVar7[3] - pdVar7[1]) * (pdVar7[3] - pdVar7[1]);
      pMVar8 = util__Sqrt((Maybe_L_double_G_ *)&local_2c,(double *)&local_50);
      if (pMVar8->IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      local_40 = pMVar8->Data + local_40;
      local_c = local_c + 1;
      iVar6 = (**(code **)(uintptr_t)(local_1c._pad_0x0_0 + 0xc))();
    } while (local_c < iVar6);
  }
  local_2c._pad_0x0_0 = 0;
  local_2c.Data = (Line2_L_double_G_ *)0x0;
  local_2c.Size = 0;
  local_2c.Capacity = 0;
  iVar6 = (**(code **)(uintptr_t)(local_1c._pad_0x0_0 + 0xc))();
  util__Darray_double___Darray_double((Darray_L_double_G_ *)&local_2c,iVar6);
  local_c = 0;
  iVar6 = (**(code **)(uintptr_t)(local_1c._pad_0x0_0 + 0xc))();
  if (local_c < iVar6) {
    do {
      pdVar7 = (double *)(**(code **)local_1c._pad_0x0_0)(&local_c);
      iVar6 = local_2c.Size;
      dVar12 = *pdVar7;
      uVar10 = SUB84(dVar12,0);
      uVar11 = (undefined4)((ulonglong)dVar12 >> 0x20);
      dVar2 = pdVar7[2];
      if (dVar12 <= dVar2) {
        uVar10 = SUB84(dVar2,0);
        uVar11 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      local_50 = (double)CONCAT44(local_2c.Size + 1,(undefined4)local_50);
      local_48 = (double)CONCAT44(uVar11,uVar10);
      util__Darray_double___SetSize((Darray_L_double_G_ *)&local_2c,(int *)((int)&local_50 + 4));
      bVar4 = util__Darray_double___CheckSize((Darray_L_double_G_ *)&local_2c,iVar6);
      if (bVar4) {
        *(double *)((int)local_2c.Data + local_2c.Size * 8 + -8) = local_48;
      }
      local_c = local_c + 1;
      iVar6 = (**(code **)(uintptr_t)(local_1c._pad_0x0_0 + 0xc))();
    } while (local_c < iVar6);
  }
  dVar12 = util__Max_L_double_G_((Darray_L_double_G_ *)&local_2c);
  local_2c._pad_0x0_0 = (int)&vftable_63;
  if (local_2c.Data != (Line2_L_double_G_ *)0x0) {
    port_op_delete(local_2c.Data);
  }
  if ((this->ArmorLayers)._pad_0x0_0 == 0) {
    uVar10 = 0x54442d18;
    uVar11 = 0x401921fb;
  }
  else {
    if ((char)(this->GetOuterArmorSegments_m_MemoizedValue).Data._pad_0x0_0 == '\0') {
      iVar6 = *(int *)&(this->GetOuterArmorSpline_m_MemoizedValue).IsValidData;
      local_50 = (double)CONCAT44(iVar6 + 1,(undefined4)local_50);
      util__Darray_L_util__Reflectable_P_G___SetSize
                ((Darray_L_util__Reflectable_P_G_ *)
                 &(this->GetOuterArmorSpline_m_MemoizedValue).Data.Size,(int *)((int)&local_50 + 4))
      ;
      bVar4 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                        ((Darray_L_GraphicsResource__Type_G_ *)
                         &(this->GetOuterArmorSpline_m_MemoizedValue).Data.Size,iVar6);
      if (bVar4) {
        *(code **)((this->GetOuterArmorSpline_m_MemoizedValue).Data.Capacity + -4 +
                  (int)((this->GetOuterArmorSpline_m_MemoizedValue).IsValidData * 4)) = (code *)(GetCrossSectionLines_Clear);
      }
      pDVar9 = (Darray_L_util__Line2_L_double_G___G_ *)(uintptr_t)(GetCrossSectionLines_MemoizedFunction(this,&local_2c));
      util__Darray_L_util__Line2_L_double_G___G___Darray_L_util__Line2_L_double_G___G_
                (&local_6c,(Darray_L_struct_util__Line2_L_double_G___G_ *)pDVar9);
      local_5c = (undefined1)(uintptr_t) (long long int (*)())(1);
      util__Darray_L_util__Line2_L_double_G___G___op_assign
                ((Darray_L_util__Line2_L_double_G___G_ *)
                 &(this->GetInnerArmorSegments_m_MemoizedValue).Data.Data,
                 (Darray_L_struct_util__Line2_L_double_G___G_ *)&local_6c);
      *(undefined1 *)&(this->GetOuterArmorSegments_m_MemoizedValue).Data._pad_0x0_0 = local_5c;
      local_6c._pad_0x0_0 = (int)&vftable_13;
      if (local_6c.Data != (Line2_L_double_G_ *)0x0) {
        port_op_delete(local_6c.Data);
      }
      local_6c.Data = (Line2_L_double_G_ *)0x0;
      local_6c._pad_0x0_0 = (int)&vftable;
      local_2c._pad_0x0_0 = (int)&vftable_13;
      if (local_2c.Data != (Line2_L_double_G_ *)0x0) {
        port_op_delete(local_2c.Data);
      }
      local_2c.Data = (Line2_L_double_G_ *)0x0;
      local_2c._pad_0x0_0 = (int)&vftable;
    }
    ppLVar1 = &(this->GetInnerArmorSegments_m_MemoizedValue).Data.Data;
    if ((char)(this->GetOuterArmorSegments_m_MemoizedValue).Data._pad_0x0_0 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    local_c = 0;
    iVar6 = (**(code **)((int)&((*ppLVar1)->A).Y + 4))();
    if (local_c < iVar6) {
      do {
        pdVar7 = (double *)(*(code *)(uintptr_t)*(uint32_t *)&(((*ppLVar1)->A).X))(&local_c);
        local_48 = (pdVar7[2] - *pdVar7) * (pdVar7[2] - *pdVar7) +
                   (pdVar7[3] - pdVar7[1]) * (pdVar7[3] - pdVar7[1]);
        pMVar8 = util__Sqrt((Maybe_L_double_G_ *)local_58,&local_48);
        if (pMVar8->IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        local_38 = pMVar8->Data + local_38;
        local_c = local_c + 1;
        iVar6 = (**(code **)((int)&((*ppLVar1)->A).Y + 4))();
      } while (local_c < iVar6);
    }
    uVar10 = SUB84(local_38,0);
    uVar11 = (undefined4)((ulonglong)local_38 >> 0x20);
  }
  pVVar3 = local_30;
  local_1c._pad_0x0_0 = (int)&vftable_13;
  local_30->X = (double)CONCAT44(uVar11,uVar10) * dVar12;
  local_30->Y = local_40;
  if (local_1c.Data != (Line2_L_double_G_ *)0x0) {
    port_op_delete(local_1c.Data);
  }
  return pVVar3;
}

//==== 00518f70 GetUnrolledParametricLocation ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: struct util__Vec2_L_double_G_ 
   CraftBlueprintArmor__GetUnrolledParametricLocation(struct util__Vec2_L_double_G_,struct
   ArmorCollisionShell)const  */

Vec2_L_double_G_ * 
CraftBlueprintArmor__GetUnrolledParametricLocation
          (CraftBlueprintArmor *this,Vec2_L_double_G_ *__return_storage_ptr__,Vec3_L_double_G_ param_1,
          ArmorCollisionShell param_2)

{
  undefined8 stack0xfffffffc;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  Darray_L_struct_util__Line2_L_double_G___G_ *pDVar5;
  int iVar6;
  Vec2_L_double_G_ *pVVar7;
  double *pdVar8;
  Maybe_L_double_G_ *pMVar9;
  int *piVar10;
  code *pcVar11;
  int iVar12;
  double dVar13;
  undefined4 in_stack_00000008;
  Maybe_L_double_G_ local_64;
  Darray_L_util__Vec2_L_double_G___G_ local_54;
  undefined1 local_44;
  Vec2_L_double_G_ *local_40;
  undefined8 local_3c;
  undefined1 local_34 [8];
  undefined8 uStack_2c;
  undefined8 local_24;
  Darray_L_util__Line2_L_double_G___G_ local_1c;
  CraftBlueprintArmor *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_40 = __return_storage_ptr__;
  local_1c._pad_0x0_0 = 0;
  local_1c.Data = (Line2_L_double_G_ *)0x0;
  local_1c.Size = 0;
  local_1c.Capacity = 0;
  local_c = this;
  GetOuterArmorSegmentsByLayer_m_Memoize(this);
  pcVar11 = DebugBreak_exref;
  if ((char)(this->GetAllLayersOuterPlateSegments_m_MemoizedValue).Data._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pDVar5 = (Darray_L_struct_util__Line2_L_double_G___G_ *)
           (**(code **)(this->GetArmorPlateHeights_m_MemoizedValue).Data.Data)(&param_2);
  util__Darray_L_util__Line2_L_double_G___G___Darray_L_util__Line2_L_double_G___G_(&local_1c,pDVar5);
  if (local_1c.Size <= param_1.Z) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\crafts\\armor.cpp",0x4a5,
                    "Shell.SegmentID < Segments_m.Num()",(char *)0x0);
    DebugBreak();
  }
  if ((char)((this->GetYPlateCountsByLayer_MemoizedValue).Data.Data == '\0')){
    iVar6 = *(int *)&(this->GetOuterArmorSpline_m_MemoizedValue).IsValidData;
    local_24 = (double)CONCAT44(iVar6 + 1,(undefined4)local_24);
    util__Darray_L_util__Reflectable_P_G___SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&(this->GetOuterArmorSpline_m_MemoizedValue).Data.Size,
               (int *)((int)&local_24 + 4));
    bVar4 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &(this->GetOuterArmorSpline_m_MemoizedValue).Data.Size,iVar6);
    if (bVar4) {
      *(code **)((this->GetOuterArmorSpline_m_MemoizedValue).Data.Capacity + -4 +
                (int)((this->GetOuterArmorSpline_m_MemoizedValue).IsValidData * 4)) = (code *)(GetUnrolledDimensionsOfAllLayers_m_Clear);
    }
    piVar10 = &(this->CraftBlueprintArmorMemoizationHandlerInstance).ResetFunctions.Size;
    (*(uint32_t*)&(local_34)) = 0;
    (*(uint32_t*)((char*)&(local_34)+4)) = (uint32_t)(uintptr_t)((Vec2_L_double_G_ *)0x0);
    (*(uint32_t*)&(uStack_2c)) = 0;
    (*(uint32_t*)((char*)&(uStack_2c)+4)) = (uint32_t)(uintptr_t) (long long int (*)())(0);
    iVar6 = (**(code **)((this->CraftBlueprintArmorMemoizationHandlerInstance).ResetFunctions.Size +
                        0xc))();
    util__Darray_L_util__Vec2_L_double_G___G___Darray_L_util__Vec2_L_double_G___G_
              ((Darray_L_util__Vec2_L_double_G___G_ *)local_34,iVar6);
    iVar12 = 0;
    iVar6 = (**(code **)(uintptr_t)(*piVar10 + 0xc))();
    if (0 < iVar6) {
      do {
        pVVar7 = (Vec2_L_double_G_ *)(uintptr_t)(GetUnrolledDimensions_m(local_c,(Vec2_L_double_G_ *)&local_64,iVar12));
        iVar6 = (int)uStack_2c;
        *(uint32_t *)&local_3c = (double)CONCAT44(pVVar7,(undefined4)local_3c);
        local_24 = (double)CONCAT44((int)uStack_2c + 1,(undefined4)local_24);
        util__Darray_L_util__Vec2_L_double_G___G___SetSize
                  ((Darray_L_util__Vec2_L_double_G___G_ *)local_34,(int *)((int)&local_24 + 4));
        bVar4 = util__Darray_L_util__Vec2_L_double_G___G___CheckSize
                          ((Darray_L_util__Vec2_L_double_G___G_ *)local_34,iVar6);
        if (bVar4) {
          uVar1 = ((uint32_t *)((char*)&(local_3c)+4))[1];
          uVar2 = ((uint32_t *)((char*)&(local_3c)+4))[2];
          uVar3 = ((uint32_t *)((char*)&(local_3c)+4))[3];
          pVVar7 = (Vec2_L_double_G_ *)((*(uint32_t*)((char*)&(local_34)+4)) + ((int)uStack_2c + -1) * 0x10);
          *(undefined4 *)&(pVVar7->X) = *(uint32_t *)(uintptr_t)*(uint32_t *)((char *)&(local_3c)+4);
          *(undefined4 *)((int)&pVVar7->X + 4) = uVar1;
          *(undefined4 *)&pVVar7->Y = uVar2;
          *(undefined4 *)((int)&pVVar7->Y + 4) = uVar3;
        }
        iVar12 = iVar12 + 1;
        iVar6 = (**(code **)(uintptr_t)(*piVar10 + 0xc))();
      } while (iVar12 < iVar6);
    }
    util__Darray_L_util__Vec2_L_double_G___G___Darray_L_util__Vec2_L_double_G___G_
              (&local_54,(Darray_L_struct_util__Vec2_L_double_G___G_ *)local_34);
    this = local_c;
    *(uint32_t *)&local_44 = 1;
    util__Darray_L_util__Vec2_L_double_G___G___op_assign
              ((Darray_L_util__Vec2_L_double_G___G_ *)&(local_c->GetArmorPlateCount_MemoizedValue).Data.Y,
               (Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_54);
    *(undefined1 *)&(this->GetYPlateCountsByLayer_MemoizedValue).Data.Data = local_44;
    local_54._pad_0x0_0 = (int)&vftable_12;
    if (local_54.Data != (Vec2_L_double_G_ *)0x0) {
      port_op_delete(local_54.Data);
    }
    local_54.Data = (Vec2_L_double_G_ *)0x0;
    local_54._pad_0x0_0 = (int)&vftable;
    (*(uint32_t*)&(local_34)) = (uint32_t)(uintptr_t)(&vftable_12);
    if ((Vec2_L_double_G_ *)(*(uint32_t*)((char*)&(local_34)+4)) != (Vec2_L_double_G_ *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(local_34)+4)));
    }
    pcVar11 = DebugBreak_exref;
    (*(uint32_t*)((char*)&(local_34)+4)) = (uint32_t)(uintptr_t)((Vec2_L_double_G_ *)0x0);
    (*(uint32_t*)&(local_34)) = (uint32_t)(uintptr_t)(&vftable);
    if ((char)((this->GetYPlateCountsByLayer_MemoizedValue).Data.Data == '\0')){
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  iVar6 = (**(code **)(this->GetArmorPlateCount_MemoizedValue).Data.Y)(&param_2);
  local_c = (CraftBlueprintArmor *)0x0;
  uStack_2c = *(double *)(iVar6 + 8);
  *(uint32_t *)&local_3c = 0.0;
  if (0 < param_1.Z) {
    do {
      pdVar8 = (double *)(**(code **)local_1c._pad_0x0_0)(&local_c);
      local_24 = (pdVar8[3] - pdVar8[1]) * (pdVar8[3] - pdVar8[1]) +
                 (pdVar8[2] - *pdVar8) * (pdVar8[2] - *pdVar8);
      pMVar9 = util__Sqrt(&local_64,(double *)&local_24);
      if (pMVar9->IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        (*pcVar11)();
      }
      *(uint32_t *)&local_3c = pMVar9->Data + local_3c;
      local_c = (CraftBlueprintArmor *)((int)&local_c->_pad_0x0_0 + 1);
    } while ((int)local_c < param_1.Z);
  }
  pdVar8 = (double *)(**(code **)local_1c._pad_0x0_0)((undefined1 *)((int)&param_1.Y + 4));
  local_24 = (pdVar8[2] - *pdVar8) * (pdVar8[2] - *pdVar8) +
             (pdVar8[3] - pdVar8[1]) * (pdVar8[3] - pdVar8[1]);
  pMVar9 = util__Sqrt(&local_64,(double *)&local_24);
  if (pMVar9->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    (*pcVar11)();
  }
  pVVar7 = local_40;
  dVar13 = pMVar9->Data;
  local_1c._pad_0x0_0 = (int)&vftable_13;
  local_40->X = (double)CONCAT44(param_1.X,in_stack_00000008);
  dVar13 = (dVar13 * (double)(*(uint64_t*)((char*)&(param_1)+4)) + local_3c) / uStack_2c;
  if (dVar13 <= 0.0) {
    dVar13 = 0.0;
  }
  if (1.0 <= dVar13) {
    dVar13 = 1.0;
  }
  local_40->Y = dVar13;
  if (local_1c.Data != (Line2_L_double_G_ *)0x0) {
    port_op_delete(local_1c.Data);
  }
  return pVVar7;
}

//==== 005192c0 GetYPlateCount ====


/* public: int __thiscall CraftBlueprintArmor__GetYPlateCount(int)const  */

int __thiscall CraftBlueprintArmor__GetYPlateCount(CraftBlueprintArmor *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  GetAllLayersOuterPlateSegments_m_Memoize(this);
  if (*(char *)((this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 2) == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  piVar1 = (int *)(*(code *)**(undefined4 **)
                              (this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data)
                            (&param_1);
  iVar2 = (**(code **)(uintptr_t)(*piVar1 + 0xc))();
  return iVar2;
}





//==== 00519310 GetYPlateCountsByLayer_Clear ====


/* public: void __thiscall CraftBlueprintArmor__GetYPlateCountsByLayer_Clear(void)const  */

void __thiscall CraftBlueprintArmor__GetYPlateCountsByLayer_Clear(CraftBlueprintArmor *this)

{
  undefined **ppuStack_14;
  void *pvStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  ppuStack_14 = (undefined **)(&vftable_11);
  pvStack_10 = (void *)0x0;
  uStack_c = 0;
  uStack_8 = 0;
  util__Darray_class_Module____operator
            ((Darray_L_class_Module_P_G_ *)
             ((int)(this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x24),
             (Darray_L_class_Module_P_G_ *)&ppuStack_14);
  ppuStack_14 = (undefined **)(&vftable_11);
  if (pvStack_10 != (void *)0x0) {
    port_op_delete(pvStack_10);
  }
  *(undefined1 *)((int)(this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x34) = 0;
  return;
}





//==== 00519370 HasArmor ====


/* public: bool __thiscall CraftBlueprintArmor__HasArmor(void)const  */

bool __thiscall CraftBlueprintArmor__HasArmor(CraftBlueprintArmor *this)

{
  int iVar1;
  
  iVar1 = (**(code **)((this->CraftBlueprintArmorMemoizationHandlerInstance).ResetFunctions.Size +
                      0xc))();
}





//==== 00519380 HasFullArmor_Clear ====


/* public: void __thiscall CraftBlueprintArmor__HasFullArmor_Clear(void)const  */

void __thiscall CraftBlueprintArmor__HasFullArmor_Clear(CraftBlueprintArmor *this)

{
  *(undefined2 *)&(this->GetArmorCylinders_MemoizedValue).Data.Size = 0;
  return;
}





//==== 00519390 HasFullArmor_Memoize ====


/* public: void __thiscall CraftBlueprintArmor__HasFullArmor_Memoize(void)const  */

void __thiscall CraftBlueprintArmor__HasFullArmor_Memoize(CraftBlueprintArmor *this)

{
  undefined8 stack0xfffffffc;
  double dVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined1 uVar5;
  undefined **ppuStack_40;
  void *pvStack_3c;
  Range_L_double_G_ RStack_30;
  CraftBlueprintArmor *pCStack_20;
  undefined **ppuStack_1c;
  double *pdStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pCStack_20 = this;
  if (*(char *)((int)&(this->GetArmorCylinders_MemoizedValue).Data.Size + 1) == '\0') {
    iVar3 = *(int *)&(this->GetOuterArmorSpline_m_MemoizedValue).IsValidData;
    uStack_c = iVar3 + 1;
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)
               &(this->GetOuterArmorSpline_m_MemoizedValue).Data.Size,&uStack_c);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)
                       &(this->GetOuterArmorSpline_m_MemoizedValue).Data.Size,iVar3);
    if (bVar2) {
      *(code **)((this->GetOuterArmorSpline_m_MemoizedValue).Data.Capacity + -4 +
                (int)((this->GetOuterArmorSpline_m_MemoizedValue).IsValidData * 4)) = (code *)(HasFullArmor_Clear);
    }
    iVar3 = (**(code **)((this->CraftBlueprintArmorMemoizationHandlerInstance).ResetFunctions.Size +
                        0xc))();
    if (iVar3 == 0) {
      uVar5 = 0;
    }
    else {
      uStack_c = uStack_c & 0xffffff00;
      ppuStack_1c = (undefined **)(&vftable_106);
      pdStack_18 = (double *)0x0;
      iStack_14 = 0;
      uStack_10 = 0;
      piVar4 = (int *)FUN_00501940(&ppuStack_40,
                                   &(this->CraftBlueprintArmorMemoizationHandlerInstance).
                                    ResetFunctions.Size,uStack_c);
      uStack_c = 0;
      iVar3 = (**(code **)(uintptr_t)(*piVar4 + 0xc))();
      if ((int)uStack_c < iVar3) {
        do {
          iVar3 = (**(code **)*piVar4)(&uStack_c);
          dVar1 = *(double *)(iVar3 + 0x18);
          RStack_30.Upper = *(double *)(iVar3 + 0x20);
          RStack_30.Lower = dVar1;
          if (RStack_30.Upper < dVar1) {
            RStack_30.Lower = RStack_30.Upper;
            RStack_30.Upper = dVar1;
          }
          util__Range_double___Join((Darray_L_struct_util__Range_L_double_G___G_ *)&ppuStack_1c,&RStack_30);
          uStack_c = uStack_c + 1;
          iVar3 = (**(code **)(uintptr_t)(*piVar4 + 0xc))();
        } while ((int)uStack_c < iVar3);
      }
      ppuStack_40 = &vftable_97;
      if (pvStack_3c != (void *)0x0) {
        port_op_delete(pvStack_3c);
      }
      pvStack_3c = (void *)0x0;
      ppuStack_40 = (undefined **)(&vftable);
      if (((iStack_14 != 1) || (0.0 < *pdStack_18)) || (pdStack_18[1] < 1.0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      ppuStack_1c = (undefined **)(&vftable_106);
      if (pdStack_18 != (double *)0x0) {
        port_op_delete(pdStack_18);
      }
    }
    uStack_c = CONCAT13(1,CONCAT12(uVar5,(undefined2)uStack_c));
    *(undefined2 *)&(pCStack_20->GetArmorCylinders_MemoizedValue).Data.Size = (*(uint16_t*)((char*)&(uStack_c)+2));
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00519520 HasPartialArmor ====


/* public: bool __thiscall CraftBlueprintArmor__HasPartialArmor(void)const  */

bool __thiscall CraftBlueprintArmor__HasPartialArmor(CraftBlueprintArmor *this)

{
  undefined8 stack0xfffffffc;
  double dVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined1 uVar5;
  undefined **ppuStack_40;
  void *pvStack_3c;
  Range_L_double_G_ RStack_30;
  undefined2 uStack_1e;
  undefined **ppuStack_1c;
  double *pdStack_18;
  int iStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar4 = &(this->CraftBlueprintArmorMemoizationHandlerInstance).ResetFunctions.Size;
  iVar3 = (**(code **)((this->CraftBlueprintArmorMemoizationHandlerInstance).ResetFunctions.Size +
                      0xc))();
  if (0 < iVar3) {
    if (*(char *)((int)&(this->GetArmorCylinders_MemoizedValue).Data.Size + 1) == '\0') {
      iVar3 = *(int *)&(this->GetOuterArmorSpline_m_MemoizedValue).IsValidData;
      uStack_c = iVar3 + 1;
      util__Darray_class_util__Reflectable____SetSize
                ((Darray_L_class_util__Reflectable_P_G_ *)
                 &(this->GetOuterArmorSpline_m_MemoizedValue).Data.Size,(int *)&uStack_c);
      bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                        ((Darray_L_enum_GraphicsResource__Type_G_ *)
                         &(this->GetOuterArmorSpline_m_MemoizedValue).Data.Size,iVar3);
      if (bVar2) {
        *(code **)((this->GetOuterArmorSpline_m_MemoizedValue).Data.Capacity + -4 +
                  (int)((this->GetOuterArmorSpline_m_MemoizedValue).IsValidData * 4)) = (code *)(HasFullArmor_Clear);
      }
      iVar3 = (**(code **)(uintptr_t)(*piVar4 + 0xc))();
      if (iVar3 == 0) {
        uVar5 = 0;
      }
      else {
        uStack_c = uStack_c & 0xffffff00;
        ppuStack_1c = (long long int (*)())((undefined **)(&vftable_106));
        pdStack_18 = (double *)0x0;
        iStack_14 = 0;
        uStack_10 = 0;
        piVar4 = (int *)FUN_00501940(&ppuStack_40,piVar4,uStack_c);
        uStack_c = 0;
        iVar3 = (**(code **)(uintptr_t)(*piVar4 + 0xc))();
        if ((int)uStack_c < iVar3) {
          do {
            iVar3 = (**(code **)*piVar4)(&uStack_c);
            dVar1 = *(double *)(iVar3 + 0x18);
            RStack_30.Upper = *(double *)(iVar3 + 0x20);
            RStack_30.Lower = dVar1;
            if (RStack_30.Upper < dVar1) {
              RStack_30.Lower = RStack_30.Upper;
              RStack_30.Upper = dVar1;
            }
            util__Range_double___Join
                      ((Darray_L_struct_util__Range_L_double_G___G_ *)&ppuStack_1c,&RStack_30);
            uStack_c = uStack_c + 1;
            iVar3 = (**(code **)(uintptr_t)(*piVar4 + 0xc))();
          } while ((int)uStack_c < iVar3);
        }
        ppuStack_40 = &vftable_97;
        if (pvStack_3c != (void *)0x0) {
          port_op_delete(pvStack_3c);
        }
        pvStack_3c = (void *)0x0;
        ppuStack_40 = (undefined **)(&vftable);
        if (((iStack_14 != 1) || (0.0 < *pdStack_18)) || (pdStack_18[1] < 1.0)) {
          uVar5 = 0;
        }
        else {
          uVar5 = 1;
        }
        ppuStack_1c = (undefined **)(&vftable_106);
        if (pdStack_18 != (double *)0x0) {
          port_op_delete(pdStack_18);
        }
        pdStack_18 = (double *)0x0;
        ppuStack_1c = (undefined **)(&vftable);
      }
      uStack_1e = CONCAT11(1,uVar5);
      *(undefined2 *)&(this->GetArmorCylinders_MemoizedValue).Data.Size = uStack_1e;
      if (*(char *)((int)&(this->GetArmorCylinders_MemoizedValue).Data.Size + 1) == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
    }
    if ((char)(this->GetArmorCylinders_MemoizedValue).Data.Size == '\0') {
      uVar5 = 1;
      __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
      return (bool)uVar5;
    }
  }
  uVar5 = 0;
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar5;
}





//==== 00519710 InstantiateArmorMatrix ====


/* public: class util__SharedPtr_L_classArmorMatrix_G_ __thiscall
   CraftBlueprintArmor__InstantiateArmorMatrix(void)const  */

int * __thiscall CraftBlueprintArmor__InstantiateArmorMatrix(CraftBlueprintArmor *this)

{
  ArmorMatrix *pAVar1;
  ReferenceControllerRegistry *this_00;
  ReferenceController *this_01;
  int *in_stack_00000004;
  ArmorMatrix *pAVar2;
  
  in_stack_00000004[0] = 0;
  in_stack_00000004[1] = 0;
  pAVar1 = (ArmorMatrix *)port_op_new(0x48);
  if (pAVar1 == (ArmorMatrix *)0x0) {
    pAVar1 = (ArmorMatrix *)0x0;
  }
  else {
    memset(pAVar1,0,0x48);
    pAVar1 = (ArmorMatrix *)ArmorMatrix__ArmorMatrix(pAVar1,this);
    if (pAVar1 != (ArmorMatrix *)0x0) goto LAB_00519770;
  }
  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl",
                  0xd4,"NewPointer",(char *)0x0);
  DebugBreak();
LAB_00519770:
  pAVar2 = pAVar1;
  this_00 = util__ReferenceControllerRegistry__Get();
  this_01 = util__ReferenceControllerRegistry__Register(this_00,pAVar2);
  *in_stack_00000004 = (int)pAVar1;
  in_stack_00000004[1] = (int)this_01;
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
    pAVar1 = (ArmorMatrix *)*in_stack_00000004;
  }
  ArmorMatrix__InitializeMatrix(pAVar1);
  return in_stack_00000004;
}





//==== 005197a0 IsReadyToRender ====


/* public: bool __thiscall CraftBlueprintArmor__IsReadyToRender(void)const  */

bool __thiscall CraftBlueprintArmor__IsReadyToRender(CraftBlueprintArmor *this)

{
  undefined8 stack0xfffffffc;
  bool *pbVar1;
  VertexBufferObjectInterface *this_00;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pbVar1 = &this[1].GetInnerArmorSpline_m_MemoizedValue.IsValidData;
  iVar4 = (**(code **)(*(int *)&this[1].GetInnerArmorSpline_m_MemoizedValue.IsValidData + 0xc))();
  if (iVar4 < 1) {
LAB_00519828:
    uVar3 = VertexBufferObjectInterface__IsGenerated
                      ((VertexBufferObjectInterface *)
                       this[1].GetInnerArmorSegments_m_MemoizedValue.Data.Capacity);
    if (!(bool)uVar3) {
      __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
      return (bool)uVar3;
    }
  }
  else {
    iStack_c = 0;
    iVar4 = (**(code **)(*(int *)pbVar1 + 0xc))();
    if (iStack_c < iVar4) {
      do {
        puVar5 = (undefined4 *)(*(code *)**(undefined4 **)pbVar1)(&iStack_c);
        this_00 = (VertexBufferObjectInterface *)*puVar5;
        bVar2 = VertexBufferObjectInterface__IsGenerated(this_00);
        if (!bVar2) goto LAB_00519828;
        bVar2 = VertexBufferObjectInterface__IsGenerated
                          ((VertexBufferObjectInterface *)&this_00[1].CachedTransformMatrix);
        if (!bVar2) goto LAB_00519828;
        iStack_c = iStack_c + 1;
        iVar4 = (**(code **)(*(int *)pbVar1 + 0xc))();
      } while (iStack_c < iVar4);
    }
  }
  uVar3 = 1;
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar3;
}





//==== 00519850 IsValid ====


/* public: bool __thiscall util__Quad3_double___IsValid(void)const  */

bool __thiscall util__Quad3_double___IsValid(Quad3_L_double_G_ *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  Vec3_L_double_G_ *pVVar4;
  Vec3_L_double_G_ VStack_1c;
  
  dVar1 = *(double *)this;
  if (((((((!NAN(dVar1)) && (dVar2 = *(double *)(this + 8), !NAN(dVar2))) &&
         (dVar3 = *(double *)(this + 0x10), !NAN(dVar3))) &&
        ((NAN(dVar1) != (dVar1 == 0.0) || (!NAN(dVar1 / dVar1))))) &&
       ((NAN(dVar2) != (dVar2 == 0.0) || (!NAN(dVar2 / dVar2))))) &&
      ((((((NAN(dVar3) != (dVar3 == 0.0) || (!NAN(dVar3 / dVar3))) &&
          (dVar1 = *(double *)(this + 0x18), !NAN(dVar1))) &&
         ((dVar2 = *(double *)(this + 0x20), !NAN(dVar2) &&
          (dVar3 = *(double *)(this + 0x28), !NAN(dVar3))))) &&
        (((NAN(dVar1) != (dVar1 == 0.0) || (!NAN(dVar1 / dVar1))) &&
         (((NAN(dVar2) != (dVar2 == 0.0) || (!NAN(dVar2 / dVar2))) &&
          ((NAN(dVar3) != (dVar3 == 0.0) || (!NAN(dVar3 / dVar3))))))))) &&
       (((((((dVar1 = *(double *)(this + 0x30), !NAN(dVar1) &&
             (dVar2 = *(double *)(this + 0x38), !NAN(dVar2))) &&
            (dVar3 = *(double *)(this + 0x40), !NAN(dVar3))) &&
           (((NAN(dVar1) != (dVar1 == 0.0) || (!NAN(dVar1 / dVar1))) &&
            ((NAN(dVar2) != (dVar2 == 0.0) || (!NAN(dVar2 / dVar2))))))) &&
          ((NAN(dVar3) != (dVar3 == 0.0) || (!NAN(dVar3 / dVar3))))) &&
         (dVar1 = *(double *)(this + 0x48), !NAN(dVar1))) &&
        ((((dVar2 = *(double *)(this + 0x50), !NAN(dVar2) &&
           (dVar3 = *(double *)(this + 0x58), !NAN(dVar3))) &&
          ((NAN(dVar1) != (dVar1 == 0.0) || (!NAN(dVar1 / dVar1))))) &&
         ((NAN(dVar2) != (dVar2 == 0.0) || (!NAN(dVar2 / dVar2))))))))))) &&
     ((NAN(dVar3) != (dVar3 == 0.0) || (!NAN(dVar3 / dVar3))))) {
    pVVar4 = (Vec3_L_double_G_ *)(uintptr_t)(GetNormal(this,&VStack_1c));
    dVar1 = pVVar4->X;
    if (((((!NAN(dVar1)) && (dVar2 = pVVar4->Y, !NAN(dVar2))) && (dVar3 = pVVar4->Z, !NAN(dVar3)))
        && (((NAN(dVar1) != (dVar1 == 0.0) || (!NAN(dVar1 / dVar1))) &&
            ((NAN(dVar2) != (dVar2 == 0.0) || (!NAN(dVar2 / dVar2))))))) &&
       ((NAN(dVar3) != (dVar3 == 0.0) || (!NAN(dVar3 / dVar3))))) {
      return true;
    }
  }
  return false;
}





//==== 00519b20 IsValid_00519b20 ====


/* public: bool __thiscall util__Triangle3_double___IsValid(void)const  */

bool __thiscall util__Triangle3_double___IsValid(Triangle3_L_double_G_ *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  Vec3_L_double_G_ VStack_3c;
  Vec3_L_double_G_ VStack_24;
  double dStack_c;
  
  dVar1 = *(double *)this;
  if (((((((!NAN(dVar1)) && (dVar2 = *(double *)(this + 8), !NAN(dVar2))) &&
         (dVar3 = *(double *)(this + 0x10), !NAN(dVar3))) &&
        ((NAN(dVar1) != (dVar1 == 0.0) || (!NAN(dVar1 / dVar1))))) &&
       (((NAN(dVar2) != (dVar2 == 0.0) || (!NAN(dVar2 / dVar2))) &&
        (((NAN(dVar3) != (dVar3 == 0.0) || (!NAN(dVar3 / dVar3))) &&
         (dVar3 = *(double *)(this + 0x18), !NAN(dVar3))))))) &&
      (((((dVar4 = *(double *)(this + 0x20), !NAN(dVar4) &&
          (dVar5 = *(double *)(this + 0x28), !NAN(dVar5))) &&
         ((NAN(dVar3) != (dVar3 == 0.0) || (!NAN(dVar3 / dVar3))))) &&
        ((NAN(dVar4) != (dVar4 == 0.0) || (!NAN(dVar4 / dVar4))))) &&
       ((NAN(dVar5) != (dVar5 == 0.0) || (!NAN(dVar5 / dVar5))))))) &&
     (((((dStack_c = *(double *)(this + 0x30), !NAN(dStack_c) &&
         (dVar3 = *(double *)(this + 0x38), !NAN(dVar3))) &&
        (dVar4 = *(double *)(this + 0x40), !NAN(dVar4))) &&
       (((NAN(dStack_c) != (dStack_c == 0.0) || (!NAN(dStack_c / dStack_c))) &&
        ((NAN(dVar3) != (dVar3 == 0.0) || (!NAN(dVar3 / dVar3))))))) &&
      ((NAN(dVar4) != (dVar4 == 0.0) || (!NAN(dVar4 / dVar4))))))) {
    dStack_c = dStack_c - dVar1;
    VStack_24.X = (*(double *)(this + 0x20) - dVar2) * (dVar4 - *(double *)(this + 0x10)) -
                  (*(double *)(this + 0x28) - *(double *)(this + 0x10)) * (dVar3 - dVar2);
    VStack_24.Y = (*(double *)(this + 0x28) - *(double *)(this + 0x10)) * dStack_c -
                  (*(double *)(this + 0x18) - *(double *)this) * (dVar4 - *(double *)(this + 0x10));
    VStack_24.Z = (*(double *)(this + 0x18) - *(double *)this) * (dVar3 - dVar2) -
                  (*(double *)(this + 0x20) - dVar2) * dStack_c;
    Vec3_L_double_G___SafeNormalized(&VStack_24,&VStack_3c);
    if ((!NAN(VStack_3c.X)) &&
       (((((!NAN(VStack_3c.Y) && (!NAN(VStack_3c.Z))) &&
          ((NAN(VStack_3c.X) != (VStack_3c.X == 0.0) || (!NAN(VStack_3c.X / VStack_3c.X))))) &&
         ((NAN(VStack_3c.Y) != (VStack_3c.Y == 0.0) || (!NAN(VStack_3c.Y / VStack_3c.Y))))) &&
        ((NAN(VStack_3c.Z) != (VStack_3c.Z == 0.0) || (!NAN(VStack_3c.Z / VStack_3c.Z))))))) {
      return true;
    }
  }
  return false;
}





//==== 00519de0 Join_00519de0 ====


/* public: static void __cdecl util__Range_double___Join(class util__Darray_L_struct_util__Range_L_double_G__G_ &,struct util__Range_L_double_G_ const &) */

void __cdecl
util__Range_double___Join(Darray_L_struct_util__Range_L_double_G___G_ *param_1,Range_L_double_G_ *param_2)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  double *pdVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  double dVar11;
  double dVar12;
  double dStack_24;
  double dStack_1c;
  uint uStack_14;
  int iStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  dStack_24 = param_2->Lower;
  dStack_1c = param_2->Upper;
  uStack_14 = 1;
  do {
    iStack_c = 0;
    iVar6 = (**(code **)(*(int *)param_1 + 0xc))();
    if (iVar6 <= iStack_c) {
LAB_00519e6d:
      iVar6 = *(int *)(param_1 + 8);
      uStack_14 = iVar6 + 1;
      Darray_L_struct_util__Vec2_L_double_G___G___SetSize
                ((Darray_L_struct_util__Vec2_L_double_G___G_ *)param_1,(int *)&uStack_14);
      bVar5 = Darray_L_struct_util__Vec2_L_double_G___G___CheckSize
                        ((Darray_L_struct_util__Vec2_L_double_G___G_ *)param_1,iVar6);
      if (bVar5) {
        iVar6 = *(int *)(param_1 + 8);
        iVar1 = *(int *)(param_1 + 4);
        *(double *)(iVar1 + -0x10 + iVar6 * 0x10) = dStack_24;
        *(double *)(iVar1 + -8 + iVar6 * 0x10) = dStack_1c;
      }
      __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    while( true ) {
      pdVar7 = (double *)(*(code *)**(undefined4 **)param_1)(&iStack_c);
      if ((pdVar7[1] < dStack_24) || (dStack_1c < *pdVar7)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) break;
      iStack_c = iStack_c + 1;
      iVar6 = (*(code *)(*(undefined4 **)param_1)[3])();
      if (iVar6 <= iStack_c) goto LAB_00519e6d;
    }
    (*(code *)**(undefined4 **)param_1)(&iStack_c);
    pdVar7 = (double *)(*(code *)**(undefined4 **)param_1)(&iStack_c);
    dVar11 = pdVar7[1];
    if (dVar11 < dStack_24) {
LAB_00519ee5:
      LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\coremath.h",0x160,
                "Overlaps(Buffer__First, Buffer__Second)",(char *)0x0);
      DebugBreak();
      dVar11 = pdVar7[1];
    }
    else if (dStack_1c < *pdVar7) goto LAB_00519ee5;
    if (dVar11 <= dStack_1c) {
      dVar11 = dStack_1c;
    }
    dVar12 = *pdVar7;
    if (dStack_24 <= *pdVar7) {
      dVar12 = dStack_24;
    }
    dStack_24 = dVar12;
    dStack_1c = dVar11;
    if (dVar11 < dVar12) {
      dStack_24 = dVar11;
      dStack_1c = dVar12;
    }
    iVar6 = (**(code **)(*(int *)param_1 + 0xc))();
    if (iVar6 != 0) {
      iVar6 = (**(code **)(*(int *)param_1 + 0xc))();
      if (((iStack_c < 1) && (iVar6 + -1 <= iStack_c)) ||
         ((iStack_c <= iVar6 + -1 && (-1 < iStack_c)))) {
        uVar8 = 0;
        puVar9 = *(undefined4 **)(param_1 + 4);
        iStack_10 = 0;
        if (puVar9 != puVar9 + *(int *)(param_1 + 8) * 4) {
          puVar10 = puVar9 + -4;
          do {
            if ((char)uVar8 == '\0') {
              uVar8 = uVar8 & 0xff;
              if (iStack_10 == iStack_c) {
                uVar8 = uStack_14;
              }
            }
            else {
              uVar2 = puVar9[1];
              uVar3 = puVar9[2];
              uVar4 = puVar9[3];
              *puVar10 = *puVar9;
              puVar10[1] = uVar2;
              puVar10[2] = uVar3;
              puVar10[3] = uVar4;
            }
            iStack_10 = iStack_10 + 1;
            puVar9 = puVar9 + 4;
            puVar10 = puVar10 + 4;
          } while (puVar9 != (undefined4 *)(*(int *)(param_1 + 8) * 0x10 + *(int *)(param_1 + 4)));
          if ((char)uVar8 != '\0') {
            iStack_10 = *(int *)(param_1 + 8) + -1;
            Darray_L_struct_util__Vec2_L_double_G___G___SetSize
                      ((Darray_L_struct_util__Vec2_L_double_G___G_ *)param_1,&iStack_10);
          }
        }
      }
    }
  } while( true );
}





//==== 00519ff0 LargestDim ====


/* public: int const __thiscall util__Vec3_double___LargestDim(void)const  */

int __thiscall util__Vec3_double___LargestDim(Vec3_L_double_G_ *this)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = Abs(&this->Y);
  dVar3 = Abs(&this->X);
  dVar4 = Abs(&this->Z);
  if (dVar3 < dVar2) {
    dVar2 = Abs(&this->Y);
    return (dVar2 < dVar4) + 1;
  }
  dVar2 = Abs(&this->X);
  iVar1 = 0;
  if (dVar2 < dVar4) {
    iVar1 = 2;
  }
  return iVar1;
}





//==== 0051a080 Last_0051a080 ====


/* public: virtual struct ArmorCollisionShell & __thiscall util__Darray_struct_ArmorCollisionShell___Last(void) */

ArmorCollisionShell * __thiscall
util__Darray_struct_ArmorCollisionShell___Last(Darray_L_struct_ArmorCollisionShell_G_ *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3c,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = *(int *)(this + 8);
  }
  return (ArmorCollisionShell *)(*(int *)(this + 4) + -0x80 + iVar1 * 0x80);
}





//==== 0051a0c0 Last_0051a0c0 ====


/* public: virtual struct ArmorCollisionShell const & __thiscall util__Darray_struct_ArmorCollisionShell___Last(void)const  */

ArmorCollisionShell * 
util__Darray_struct_ArmorCollisionShell___Last__o3(Darray_L_struct_ArmorCollisionShell_G_ *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3d,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = *(int *)(this + 8);
  }
  return (ArmorCollisionShell *)(*(int *)(this + 4) + -0x80 + iVar1 * 0x80);
}





//==== 0051a100 Normalized ====


/* public: struct util__Vec3_L_double_G_ const __thiscall util__Vec3_double___Normalized(void)const  */

Vec3_L_double_G_ * __thiscall
util__Vec3_double___Normalized(Vec3_L_double_G_ *this,Vec3_L_double_G_ *__return_storage_ptr__)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  Maybe_L_double_G_ *pMVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  Maybe_L_double_G_ MStack_1c;
  double dStack_c;
  
  dStack_c = this->X * this->X + this->Y * this->Y + this->Z * this->Z;
  pMVar4 = (Maybe_L_double_G_ *)(uintptr_t)(Sqrt(&MStack_1c,&dStack_c));
  if (pMVar4->IsValidData == false) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,"IsValid()",
              (char *)0x0);
    DebugBreak();
  }
  dStack_c = pMVar4->Data;
  uVar5 = SUB84(dStack_c,0);
  uVar6 = (undefined4)((ulonglong)dStack_c >> 0x20);
  if (dStack_c <= 0.0) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\vector.inl",0x1a9,
              "len > 0",(char *)0x0);
    DebugBreak();
    uVar5 = SUB84(dStack_c,0);
    uVar6 = (undefined4)((ulonglong)dStack_c >> 0x20);
  }
  dVar7 = 1.0 / (double)CONCAT44(uVar6,uVar5);
  dVar3 = this->Y * dVar7;
  dVar1 = this->Z;
  (*(uint32_t*)((char*)&(auVar2)+8)) = SUB84(dVar3,0);
  (*(uint64_t*)&(auVar2)) = this->X * dVar7;
  (*(uint32_t *)((char *)&(auVar2) + 12)) = (int)((ulonglong)dVar3 >> 0x20);
  __return_storage_ptr__->X = (double)(*(uint64_t*)&(auVar2));
  __return_storage_ptr__->Y = (double)(*(uint64_t*)((char*)&(auVar2)+8));
  __return_storage_ptr__->Z = dVar7 * dVar1;
  return __return_storage_ptr__;
}





//==== 0051a1d0 Render_0051a1d0 ====

/* public: void __thiscall CraftBlueprintArmor__Render(bool)const  */

void __thiscall CraftBlueprintArmor__Render(CraftBlueprintArmor *this,bool param_1)

{
  undefined8 stack0x00000007;
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  SpacecraftShader *pSVar5;
  Vec3_L_int_G_ *pVVar6;
  int iVar7;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_18;
  Vec3_L_int_G_ local_14;
  undefined1 local_5;
  
  bVar4 = IsReadyToRender(this);
  if (bVar4) {
    pSVar5 = SpacecraftShader__GetStatic();
    (**(code **)(pSVar5->_pad_0x0_0 + 0x18))();
    local_5 = 1;
    pSVar5 = SpacecraftShader__GetStatic();
    (**(code **)(pSVar5->_pad_0x0_0 + 100))(&local_5);
    bVar4 = CraftBlueprint__HasArmor
                      ((CraftBlueprint *)this[1].GetInnerArmorSpline_m_MemoizedValue.Data.Capacity);
    if (bVar4) {
      ScaleArmorTexture(this);
      if (*(char *)((this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 4) == '\0') {
        iVar3 = *(int *)&(this->GetOuterArmorSpline_m_MemoizedValue).IsValidData;
        local_14.Z = iVar3 + 1;
        util__Darray_L_util__Reflectable_P_G___SetSize
                  ((Darray_L_util__Reflectable_P_G_ *)
                   &(this->GetOuterArmorSpline_m_MemoizedValue).Data.Size,&local_14.Z);
        bVar4 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                          ((Darray_L_GraphicsResource__Type_G_ *)
                           &(this->GetOuterArmorSpline_m_MemoizedValue).Data.Size,iVar3);
        if (bVar4) {
          *(code **)((this->GetOuterArmorSpline_m_MemoizedValue).Data.Capacity + -4 +
                    (int)((this->GetOuterArmorSpline_m_MemoizedValue).IsValidData * 4)) = (code *)(GetArmorPlateCount_Clear);
        }
        pVVar6 = (Vec3_L_int_G_ *)(uintptr_t)(GetArmorPlateCount_MemoizedFunction(this,&local_14));
        uStack_18 = CONCAT31((*(uint24_t*)((char*)&(uStack_18)+1)),1);
        uVar1 = pVVar6->X;
        uVar2 = pVVar6->Y;
        iVar3 = pVVar6->Z;
        *(undefined4 *)((int)(this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x14)
             = uVar1;
        *(undefined4 *)((this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 3) = (undefined4)(uintptr_t) (long long int (*)())(uVar2);
        *(int *)((int)(this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x1c) = iVar3
        ;
        *(undefined4 *)((this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 4) =
             uStack_18;
        if (*(char *)((this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 4) == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
      }
      iVar3 = *(int *)((int)(this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x1c);
      iVar7 = 0;
      if (0 < iVar3) {
        do {
          RenderLayer(iVar7,true,param_1);
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar3);
      }
    }
    bVar4 = IsReadyToRender(this);
    if ((bVar4) &&
       (bVar4 = VertexBufferObjectInterface__IsGenerated
                          ((VertexBufferObjectInterface *)
                           this[1].GetInnerArmorSegments_m_MemoizedValue.Data.Capacity), bVar4)) {
      pSVar5 = SpacecraftShader__GetStatic();
      local_14.Y = 0x3f800000;
      local_14.Z = 0x3f800000;
      (**(code **)(pSVar5->_pad_0x0_0 + 0x78))(&local_14.Y);
      pSVar5 = SpacecraftShader__GetStatic();
      (**(code **)(pSVar5->_pad_0x0_0 + 100))(&stack0x00000007);
      pSVar5 = SpacecraftShader__GetStatic();
      (**(code **)(pSVar5->_pad_0x0_0 + 0x68))(&stack0x00000007);
      pSVar5 = SpacecraftShader__GetStatic();
      Material__SetupRendering(Material__DefaultMaterial,(Shader *)pSVar5,false);
      VertexBufferObjectInterface__Render
                ((VertexBufferObjectInterface *)
                 this[1].GetInnerArmorSegments_m_MemoizedValue.Data.Capacity);
    }
  }
  return;
}

//==== 0051a350 RenderDebugDiagrams ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall CraftBlueprintArmor__RenderDebugDiagrams(void)const  */

void __thiscall CraftBlueprintArmor__RenderDebugDiagrams(CraftBlueprintArmor *this)

{
  undefined8 stack0xfffffffc;
  Darray_L_int_G_ **ppDVar1;
  Vec2_L_double_G_ **ppVVar2;
  CraftBlueprint *this_00;
  undefined4 uVar3;
  undefined4 uVar4;
  Vec4_L_double_G_ VVar5;
  Maybe_L_util__Darray_L_util__Vec2_L_double_G___G___G_ *pMVar6;
  CraftBlueprintArmor *this_01;
  bool bVar7;
  int *piVar8;
  int *piVar9;
  undefined4 uVar10;
  Vec2_L_double_G_ *pVVar11;
  Darray_L_struct_CraftSplinePoint_G_ *pDVar12;
  Darray_L_struct_util__Vec2_L_double_G___G_ *pDVar13;
  int iVar14;
  int iVar15;
  undefined **local_84;
  CraftSplinePoint *local_80;
  bool local_74;
  undefined **local_70;
  CraftSplinePoint *local_6c;
  Darray_L_util__Vec2_L_double_G___G_ local_60;
  double local_50;
  undefined8 local_48;
  undefined8 local_40;
  Darray_L_util__Vec2_L_double_G___G_ local_38;
  double local_28;
  int local_20;
  int local_1c;
  undefined8 local_18;
  int local_10;
  DrawStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_40 = (double)CONCAT44(this,(undefined4)local_40);
  VVar5.Z = 0x40240000;
  (*(uint32_t *)((char *)&(VVar5) + 0)) = ZEXT812(0);
  Graphics__Translate(VVar5);
  iVar14 = *(unsigned int *)((char *)&(Graphics__GlobalState.ViewMatrix.Data[0xf]) + 4) + -0x14;
  local_48 = (double)iVar14;
  *(uint32_t *)&local_28 = GetTotalArmorHeight_m(this);
  *(uint32_t *)&local_28 = local_48 / local_28;
  glLineWidth(0x3f800000);
  glPointSize(0x40800000);
  glColor3d(0,0,0,0,0,0x3ff00000);
  Graphics__DrawStack__DrawStack(&local_9,1);
  Graphics__Vertex(0.0,0.0);
  Graphics__Vertex(0.0,(double)iVar14);
  Graphics__DrawStack___DrawStack(&local_9);
  glColor3d(0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000);
  Graphics__DrawStack__DrawStack(&local_9,0);
  this_00 = (CraftBlueprint *)this[1].GetInnerArmorSpline_m_MemoizedValue.Data.Capacity;
  CraftBlueprint__GetModuleSpline_m_Memoize(this_00);
  if ((char)(this_00->GetMassChartData_MemoizedValue).Data.Capacity == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  piVar8 = (int *)FUN_00504470(&local_70,
                               &(this_00->GetMassCondensedChartData_MemoizedValue).IsValidData,
                               &local_28);
  iVar15 = 0;
  local_1c = 0;
  iVar14 = (**(code **)(uintptr_t)(*piVar8 + 0xc))();
  if (local_1c < iVar14) {
    do {
      piVar9 = (int *)(**(code **)*piVar8)(&local_1c);
      iVar14 = (**(code **)(uintptr_t)(*piVar9 + 0xc))();
      local_1c = local_1c + 1;
      iVar15 = iVar15 + iVar14;
      iVar14 = (**(code **)(uintptr_t)(*piVar8 + 0xc))();
    } while (local_1c < iVar14);
  }
  local_38._pad_0x0_0 = 0;
  local_38.Data = (Vec2_L_double_G_ *)0x0;
  local_38.Size = 0;
  local_38.Capacity = 0;
  util__Darray_L_util__Vec2_L_double_G___G___Darray_L_util__Vec2_L_double_G___G_(&local_38,iVar15);
  local_18 = (double)(ulonglong)(uint)local_18;
  iVar14 = (**(code **)(uintptr_t)(*piVar8 + 0xc))();
  if ((*(uint32_t*)((char*)&(local_18)+4)) < iVar14) {
    do {
      piVar9 = (int *)(**(code **)*piVar8)((int)&local_18 + 4);
      local_20 = 0;
      iVar14 = (**(code **)(uintptr_t)(*piVar9 + 0xc))();
      if (local_20 < iVar14) {
        do {
          uVar10 = (**(code **)*piVar9)(&local_20);
          iVar14 = local_38.Size;
          local_48 = (double)CONCAT44(uVar10,(undefined4)local_48);
          local_10 = local_38.Size + 1;
          util__Darray_L_util__Vec2_L_double_G___G___SetSize(&local_38,&local_10);
          bVar7 = util__Darray_L_util__Vec2_L_double_G___G___CheckSize(&local_38,iVar14);
          if (bVar7) {
            uVar10 = ((uint32_t *)((char*)&(local_48)+4))[1];
            uVar3 = ((uint32_t *)((char*)&(local_48)+4))[2];
            uVar4 = ((uint32_t *)((char*)&(local_48)+4))[3];
            pVVar11 = local_38.Data + local_38.Size + -1;
            *(undefined4 *)&(pVVar11->X) = *(uint32_t *)(uintptr_t)*(uint32_t *)((char *)&(local_48)+4);
            *(undefined4 *)((int)&pVVar11->X + 4) = uVar10;
            *(undefined4 *)&pVVar11->Y = uVar3;
            *(undefined4 *)((int)&pVVar11->Y + 4) = uVar4;
          }
          local_20 = local_20 + 1;
          iVar14 = (**(code **)(uintptr_t)(*piVar9 + 0xc))();
        } while (local_20 < iVar14);
      }
      local_18 = (double)CONCAT44((*(uint32_t*)((char*)&(local_18)+4)) + 1,(uint)local_18);
      iVar14 = (**(code **)(uintptr_t)(*piVar8 + 0xc))();
    } while ((*(uint32_t*)((char*)&(local_18)+4)) < iVar14);
  }
  local_10 = 0;
  iVar14 = (**(code **)(uintptr_t)(local_38._pad_0x0_0 + 0xc))();
  if (local_10 < iVar14) {
    do {
      pVVar11 = (Vec2_L_double_G_ *)(**(code **)local_38._pad_0x0_0)(&local_10);
      Graphics__Vertex(*pVVar11);
      local_10 = local_10 + 1;
      iVar14 = (**(code **)(uintptr_t)(local_38._pad_0x0_0 + 0xc))();
    } while (local_10 < iVar14);
  }
  local_38._pad_0x0_0 = (int)&vftable_12;
  if (local_38.Data != (Vec2_L_double_G_ *)0x0) {
    port_op_delete(local_38.Data);
  }
  local_38.Data = (Vec2_L_double_G_ *)0x0;
  local_38._pad_0x0_0 = (int)&vftable;
  local_70 = &vftable_101;
  if (local_6c != (CraftSplinePoint *)0x0) {
    if (*(int *)(local_6c + -4) == 0) {
      port_op_delete(local_6c + -4);
    }
    else {
      (**(code **)(*(int *)local_6c + 0x18))(3);
    }
  }
  Graphics__DrawStack___DrawStack(&local_9);
  glColor3d(0,0x3ff00000,0,0,0,0);
  Graphics__DrawStack__DrawStack(&local_9,3);
  this_01 = (CraftBlueprintArmor *)(uintptr_t)((*(uint32_t*)((char*)&(local_40)+4)));
  if (((((struct CraftBlueprintArmor *)(uintptr_t)(*(uint32_t *)((char *)&(local_40)+4))))->HasFullArmor_MemoizedValue).Data == false) {
    iVar14 = *(int *)&((((struct CraftBlueprintArmor *)(uintptr_t)(*(uint32_t *)((char *)&(local_40)+4))))->GetOuterArmorSpline_m_MemoizedValue).IsValidData;
    pMVar6 = &(((struct CraftBlueprintArmor *)(uintptr_t)(*(uint32_t *)((char *)&(local_40)+4))))->GetOuterArmorSpline_m_MemoizedValue;
    local_40 = (double)CONCAT44(iVar14 + 1,(undefined4)local_40);
    util__Darray_L_util__Reflectable_P_G___SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&(pMVar6->Data).Size,(int *)((int)&local_40 + 4));
    bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &(this_01->GetOuterArmorSpline_m_MemoizedValue).Data.Size,iVar14);
    if (bVar7) {
      *(code **)((this_01->GetOuterArmorSpline_m_MemoizedValue).Data.Capacity + -4 +
                (int)((this_01->GetOuterArmorSpline_m_MemoizedValue).IsValidData * 4)) = (code *)(GetInnerArmorSpline_m_Clear);
    }
    pDVar12 = (Darray_L_struct_CraftSplinePoint_G_ *)GetInnerArmorSpline_m_MemoizedFunction(this_01);
    util__Darray_L_CraftSplinePoint_G___Darray_L_CraftSplinePoint_G_
              ((Darray_L_CraftSplinePoint_G_ *)&local_84,pDVar12);
    local_74 = true;
    util__Darray_L_CraftSplinePoint_G___op_assign
              ((Darray_L_CraftSplinePoint_G_ *)
               &(this_01->GetArmorPlatesPerSegment_MemoizedValue).Data.Data,
               (Darray_L_struct_CraftSplinePoint_G_ *)&local_84);
    (this_01->HasFullArmor_MemoizedValue).Data = (long long int (*)())(local_74);
    local_84 = (undefined **)(&vftable_14);
    if (local_80 != (CraftSplinePoint *)0x0) {
      CraftSplinePoint___vector_deleting_destructor(local_80,3);
    }
    local_80 = (CraftSplinePoint *)0x0;
    local_84 = (undefined **)(&vftable);
    local_70 = (undefined **)(&vftable_14);
    if (local_6c != (CraftSplinePoint *)0x0) {
      CraftSplinePoint___vector_deleting_destructor(local_6c,3);
    }
    local_6c = (CraftSplinePoint *)0x0;
    local_70 = (undefined **)(&vftable);
  }
  ppDVar1 = &(this_01->GetArmorPlatesPerSegment_MemoizedValue).Data.Data;
  if ((this_01->HasFullArmor_MemoizedValue).Data == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_38._pad_0x0_0 = 0;
  local_38.Data = (Vec2_L_double_G_ *)0x0;
  local_38.Size = 0;
  local_38.Capacity = 0;
  iVar14 = (*(code *)(*ppDVar1)->Capacity)();
  util__Darray_L_util__Vec2_L_double_G___G___Darray_L_util__Vec2_L_double_G___G_(&local_38,iVar14);
  local_10 = 0;
  iVar14 = (*(code *)(*ppDVar1)->Capacity)();
  if (local_10 < iVar14) {
    do {
      pDVar13 = (Darray_L_struct_util__Vec2_L_double_G___G_ *)(*(code *)(*ppDVar1)->_pad_0x0_0)(&local_10);
      util__Darray_L_util__Vec2_L_double_G___G___Darray_L_util__Vec2_L_double_G___G_(&local_60,pDVar13);
      local_50 = *(double *)(pDVar13 + 0x10);
      local_40 = CraftSplinePoint__GetRadius_m((CraftSplinePoint *)&local_60);
      local_60._pad_0x0_0 = (int)&vftable_12;
      local_48 = local_40 * local_28;
      local_18 = local_50 * local_28;
      if (local_60.Data != (Vec2_L_double_G_ *)0x0) {
        port_op_delete(local_60.Data);
      }
      iVar14 = local_38.Size;
      local_60.Data = (Vec2_L_double_G_ *)0x0;
      local_60._pad_0x0_0 = (int)&vftable;
      local_40 = (double)CONCAT44(local_38.Size + 1,(undefined4)local_40);
      util__Darray_L_util__Vec2_L_double_G___G___SetSize(&local_38,(int *)((int)&local_40 + 4));
      bVar7 = util__Darray_L_util__Vec2_L_double_G___G___CheckSize(&local_38,iVar14);
      if (bVar7) {
        local_38.Data[local_38.Size + -1].X = local_48;
        local_38.Data[local_38.Size + -1].Y = local_18;
      }
      local_10 = local_10 + 1;
      iVar14 = (*(code *)(*ppDVar1)->Capacity)();
    } while (local_10 < iVar14);
  }
  local_18 = (double)((ulonglong)local_18 & 0xffffffff);
  iVar14 = (**(code **)(uintptr_t)(local_38._pad_0x0_0 + 0xc))();
  if ((*(uint32_t*)((char*)&(local_18)+4)) < iVar14) {
    do {
      pVVar11 = (Vec2_L_double_G_ *)(**(code **)local_38._pad_0x0_0)((int)&local_18 + 4);
      Graphics__Vertex(*pVVar11);
      local_18 = (double)CONCAT44((*(uint32_t*)((char*)&(local_18)+4)) + 1,(uint)local_18);
      iVar14 = (**(code **)(uintptr_t)(local_38._pad_0x0_0 + 0xc))();
    } while ((*(uint32_t*)((char*)&(local_18)+4)) < iVar14);
  }
  local_38._pad_0x0_0 = (int)&vftable_12;
  if (local_38.Data != (Vec2_L_double_G_ *)0x0) {
    port_op_delete(local_38.Data);
  }
  Graphics__DrawStack___DrawStack(&local_9);
  glColor3d(0,0,0,0x3ff00000,0,0);
  Graphics__DrawStack__DrawStack(&local_9,3);
  GetOuterArmorSpline_m_Memoize(this_01);
  ppVVar2 = &(this_01->GetUnrolledDimensionsOfAllLayers_m_MemoizedValue).Data.Data;
  if ((char)(this_01->GetArmorPlatesPerSegment_MemoizedValue).Data._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_38._pad_0x0_0 = 0;
  local_38.Data = (Vec2_L_double_G_ *)0x0;
  local_38.Size = 0;
  local_38.Capacity = 0;
  iVar14 = (**(code **)((int)&(*ppVVar2)->Y + 4))();
  util__Darray_L_util__Vec2_L_double_G___G___Darray_L_util__Vec2_L_double_G___G_(&local_38,iVar14);
  local_10 = 0;
  iVar14 = (**(code **)((int)&(*ppVVar2)->Y + 4))();
  if (local_10 < iVar14) {
    do {
      pDVar13 = (Darray_L_struct_util__Vec2_L_double_G___G_ *)(*(code *)(uintptr_t)((*ppVVar2)->X))(&local_10);
      util__Darray_L_util__Vec2_L_double_G___G___Darray_L_util__Vec2_L_double_G___G_(&local_60,pDVar13);
      local_50 = *(double *)(pDVar13 + 0x10);
      local_40 = CraftSplinePoint__GetRadius_m((CraftSplinePoint *)&local_60);
      local_60._pad_0x0_0 = (int)&vftable_12;
      local_48 = local_40 * local_28;
      local_18 = local_50 * local_28;
      if (local_60.Data != (Vec2_L_double_G_ *)0x0) {
        port_op_delete(local_60.Data);
      }
      iVar14 = local_38.Size;
      local_60.Data = (Vec2_L_double_G_ *)0x0;
      local_60._pad_0x0_0 = (int)&vftable;
      local_40 = (double)CONCAT44(local_38.Size + 1,(undefined4)local_40);
      util__Darray_L_util__Vec2_L_double_G___G___SetSize(&local_38,(int *)((int)&local_40 + 4));
      bVar7 = util__Darray_L_util__Vec2_L_double_G___G___CheckSize(&local_38,iVar14);
      if (bVar7) {
        local_38.Data[local_38.Size + -1].X = local_48;
        local_38.Data[local_38.Size + -1].Y = local_18;
      }
      local_10 = local_10 + 1;
      iVar14 = (**(code **)((int)&(*ppVVar2)->Y + 4))();
    } while (local_10 < iVar14);
  }
  local_18 = (double)((ulonglong)local_18 & 0xffffffff);
  iVar14 = (**(code **)(uintptr_t)(local_38._pad_0x0_0 + 0xc))();
  if ((*(uint32_t*)((char*)&(local_18)+4)) < iVar14) {
    do {
      pVVar11 = (Vec2_L_double_G_ *)(**(code **)local_38._pad_0x0_0)((int)&local_18 + 4);
      Graphics__Vertex(*pVVar11);
      local_18 = (double)CONCAT44((*(uint32_t*)((char*)&(local_18)+4)) + 1,(uint)local_18);
      iVar14 = (**(code **)(uintptr_t)(local_38._pad_0x0_0 + 0xc))();
    } while ((*(uint32_t*)((char*)&(local_18)+4)) < iVar14);
  }
  local_38._pad_0x0_0 = (int)&vftable_12;
  if (local_38.Data != (Vec2_L_double_G_ *)0x0) {
    port_op_delete(local_38.Data);
  }
  Graphics__DrawStack___DrawStack(&local_9);
  return;
}

//==== 0051ac40 RenderLayerSimple ====


/* public: void  CraftBlueprintArmor__RenderLayerSimple(int,bool,bool)const  */

void 
CraftBlueprintArmor__RenderLayerSimple
          (CraftBlueprintArmor *this,int param_1,bool param_2,bool param_3)

{
  undefined8 stack0xfffffffc;
  bool *pbVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pbVar1 = &this[1].GetInnerArmorSpline_m_MemoizedValue.IsValidData;
  iVar2 = (**(code **)(*(int *)&this[1].GetInnerArmorSpline_m_MemoizedValue.IsValidData + 0xc))();
  if (param_1 < iVar2) {
    iStack_c = param_1;
    piVar3 = (int *)(**(code **)(this->CraftBlueprintArmorMemoizationHandlerInstance).ResetFunctions
                                .Size)(&iStack_c);
    if (*piVar3 != 0) {
      if (param_3 != false) {
        puVar4 = (undefined4 *)(*(code *)**(undefined4 **)pbVar1)(&param_1);
        VertexBufferObjectInterface__Render((VertexBufferObjectInterface *)*puVar4);
      }
      if (param_2 != false) {
        piVar3 = (int *)(*(code *)**(undefined4 **)pbVar1)(&param_1);
        VertexBufferObjectInterface__Render((VertexBufferObjectInterface *)(*piVar3 + 0xa0));
      }
    }
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0051acd0 RenderSimple_0051acd0 ====


/* public: void __thiscall CraftBlueprintArmor__RenderSimple(bool)const  */

void __thiscall CraftBlueprintArmor__RenderSimple(CraftBlueprintArmor *this,bool param_1)

{
  undefined8 stack0xfffffffc;
  bool *pbVar1;
  undefined8 uVar2;
  bool bVar3;
  Vec3_L_int_G_ *pVVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  Vec3_L_int_G_ VStack_38;
  undefined8 uStack_2c;
  int iStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  byte bStack_15;
  int iStack_14;
  int iStack_10;
  CullStack CStack_9;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bStack_15 = param_1;
  bVar3 = IsReadyToRender(this);
  if (bVar3) {
    Graphics__CullStack__CullStack(&CStack_9,(uint)bStack_15);
    bVar3 = CraftBlueprint__HasArmor
                      ((CraftBlueprint *)this[1].GetInnerArmorSpline_m_MemoizedValue.Data.Capacity);
    if (bVar3) {
      if (*(char *)((this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 4) == '\0') {
        iVar8 = *(int *)&(this->GetOuterArmorSpline_m_MemoizedValue).IsValidData;
        iStack_10 = iVar8 + 1;
        util__Darray_class_util__Reflectable____SetSize
                  ((Darray_L_class_util__Reflectable_P_G_ *)
                   &(this->GetOuterArmorSpline_m_MemoizedValue).Data.Size,&iStack_10);
        bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize
                          ((Darray_L_enum_GraphicsResource__Type_G_ *)
                           &(this->GetOuterArmorSpline_m_MemoizedValue).Data.Size,iVar8);
        if (bVar3) {
          *(code **)((this->GetOuterArmorSpline_m_MemoizedValue).Data.Capacity + -4 +
                    (int)((this->GetOuterArmorSpline_m_MemoizedValue).IsValidData * 4)) = (code *)(GetArmorPlateCount_Clear);
        }
        pVVar4 = (Vec3_L_int_G_ *)(uintptr_t)(GetArmorPlateCount_MemoizedFunction(this,&VStack_38));
        uStack_20 = CONCAT31((*(uint24_t*)((char*)&(uStack_20)+1)),1);
        (*(uint32_t*)&(uVar2)) = pVVar4->X;
        (*(uint32_t*)((char*)&(uVar2)+4)) = pVVar4->Y;
        iStack_24 = pVVar4->Z;
        (*(uint32_t*)&(uStack_2c)) = (undefined4)uVar2;
        (*(uint32_t*)((char*)&(uStack_2c)+4)) = (undefined4)((ulonglong)uVar2 >> 0x20);
        *(undefined4 *)((int)(this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x14)
             = (undefined4)uStack_2c;
        *(undefined4 *)((this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 3) = (undefined4)(uintptr_t) (long long int (*)())((*(uint32_t*)((char*)&(uStack_2c)+4)));
        *(int *)((int)(this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x1c) =
             iStack_24;
        *(undefined4 *)((this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 4) =
             uStack_20;
        uStack_2c = uVar2;
        if (*(char *)((this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 4) == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
      }
      iStack_1c = *(int *)((int)(this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data +
                          0x1c);
      iVar8 = 0;
      if (0 < iStack_1c) {
        pbVar1 = &this[1].GetInnerArmorSpline_m_MemoizedValue.IsValidData;
        do {
          iStack_10 = iVar8;
          iVar5 = (**(code **)(*(int *)pbVar1 + 0xc))();
          if (iStack_10 < iVar5) {
            iStack_14 = iStack_10;
            piVar6 = (int *)(**(code **)(this->CraftBlueprintArmorMemoizationHandlerInstance).
                                        ResetFunctions.Size)(&iStack_14);
            if (*piVar6 != 0) {
              if (bStack_15 != 0) {
                puVar7 = (undefined4 *)(*(code *)**(undefined4 **)pbVar1)(&iStack_10);
                VertexBufferObjectInterface__Render((VertexBufferObjectInterface *)*puVar7);
              }
              piVar6 = (int *)(*(code *)**(undefined4 **)pbVar1)(&iStack_10);
              VertexBufferObjectInterface__Render((VertexBufferObjectInterface *)(*piVar6 + 0xa0));
            }
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < iStack_1c);
      }
    }
    bVar3 = IsReadyToRender(this);
    if ((bVar3) &&
       (bVar3 = VertexBufferObjectInterface__IsGenerated
                          ((VertexBufferObjectInterface *)
                           this[1].GetInnerArmorSegments_m_MemoizedValue.Data.Capacity), bVar3)) {
      VertexBufferObjectInterface__Render
                ((VertexBufferObjectInterface *)
                 this[1].GetInnerArmorSegments_m_MemoizedValue.Data.Capacity);
    }
    CullStack__dtor(&CStack_9);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0051ae50 RenderStruts ====

/* public: void __thiscall CraftBlueprintArmor__RenderStruts(void)const  */

void __thiscall CraftBlueprintArmor__RenderStruts(CraftBlueprintArmor *this)

{
  bool bVar1;
  SpacecraftShader *pSVar2;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  bVar1 = IsReadyToRender(this);
  if (bVar1) {
    bVar1 = VertexBufferObjectInterface__IsGenerated
                      ((VertexBufferObjectInterface *)
                       this[1].GetInnerArmorSegments_m_MemoizedValue.Data.Capacity);
    if (bVar1) {
      pSVar2 = SpacecraftShader__GetStatic();
      local_10 = 0x3f800000;
      local_c = 0x3f800000;
      (**(code **)(pSVar2->_pad_0x0_0 + 0x78))(&local_10);
      local_5 = 0;
      pSVar2 = SpacecraftShader__GetStatic();
      (**(code **)(pSVar2->_pad_0x0_0 + 100))(&local_5);
      local_5 = 0;
      pSVar2 = SpacecraftShader__GetStatic();
      (**(code **)(pSVar2->_pad_0x0_0 + 0x68))(&local_5);
      pSVar2 = SpacecraftShader__GetStatic();
      Material__SetupRendering(Material__DefaultMaterial,(Shader *)pSVar2,false);
      VertexBufferObjectInterface__Render
                ((VertexBufferObjectInterface *)
                 this[1].GetInnerArmorSegments_m_MemoizedValue.Data.Capacity);
    }
  }
  return;
}

//==== 0051af10 SafeNormalized ====


/* public: struct util__Vec3_L_double_G_ const __thiscall util__Vec3_double___SafeNormalized(void)const
    */

Vec3_L_double_G_ * __thiscall
util__Vec3_double___SafeNormalized(Vec3_L_double_G_ *this,Vec3_L_double_G_ *__return_storage_ptr__)

{
  double dVar1;
  Maybe_L_double_G_ *pMVar2;
  undefined8 uStack_24;
  undefined1 auStack_1c [8];
  double dStack_14;
  double dStack_c;
  
  dStack_c = this->X * this->X + this->Y * this->Y + this->Z * this->Z;
  pMVar2 = (Maybe_L_double_G_ *)(uintptr_t)(Sqrt((Maybe_L_double_G_ *)auStack_1c,&dStack_c));
  if (pMVar2->IsValidData == false) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,"IsValid()",
              (char *)0x0);
    DebugBreak();
  }
  uStack_24 = this->X;
  dVar1 = pMVar2->Data;
  dStack_14 = 1.0 / dVar1;
  if ((((NAN(*(double *)&(uStack_24)) == (*(double *)&(uStack_24) == 0.0)) || (NAN(this->Y) == (this->Y == 0.0))) ||
      (NAN(this->Z) == (this->Z == 0.0))) && (NAN(dVar1) == (dVar1 == 0.0))) {
    uStack_24 = uStack_24 * dStack_14;
    *(uint32_t *)&auStack_1c = (uint64_t)(dStack_14 * this->Y);
    dStack_14 = dStack_14 * this->Z;
  }
  else {
    dStack_14 = 0.0;
    uStack_24 = 0.0;
    *(uint32_t *)&auStack_1c = (uint64_t)0x0;
  }
  *(undefined4 *)&__return_storage_ptr__->X = (undefined4)uStack_24;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = (*(uint32_t*)((char*)&(uStack_24)+4));
  *(undefined4 *)&(__return_storage_ptr__->Y) = (*(uint32_t*)&(auStack_1c));
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = (*(uint32_t*)((char*)&(auStack_1c)+4));
  __return_storage_ptr__->Z = dStack_14;
  return __return_storage_ptr__;
}





//==== 0051b010 ScaleArmorTexture ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall CraftBlueprintArmor__ScaleArmorTexture(void)const  */

void __thiscall CraftBlueprintArmor__ScaleArmorTexture(CraftBlueprintArmor *this)

{
  undefined8 stack0xfffffffc;
  Vec2_L_double_G_ *pVVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  double *pdVar7;
  SpacecraftShader *pSVar8;
  int iVar9;
  double dVar10;
  Vec3_L_double_G_ local_58;
  Darray_L_util__Vec2_L_double_G___G_ local_48;
  undefined1 local_38;
  undefined8 local_34;
  undefined1 local_2c [8];
  undefined8 uStack_24;
  Vec2_L_double_G_ *local_1c;
  double local_18;
  double dStack_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar5 = false;
  if ((char)((this->GetYPlateCountsByLayer_MemoizedValue).Data.Data == '\0')){
    iVar6 = *(int *)&(this->GetOuterArmorSpline_m_MemoizedValue).IsValidData;
    *(uint32_t *)&local_34 = (double)CONCAT44(iVar6 + 1,(undefined4)local_34);
    util__Darray_L_util__Reflectable_P_G___SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&(this->GetOuterArmorSpline_m_MemoizedValue).Data.Size,
               (int *)((int)&local_34 + 4));
    bVar5 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &(this->GetOuterArmorSpline_m_MemoizedValue).Data.Size,iVar6);
    if (bVar5) {
      *(code **)((this->GetOuterArmorSpline_m_MemoizedValue).Data.Capacity + -4 +
                (int)((this->GetOuterArmorSpline_m_MemoizedValue).IsValidData * 4)) = (code *)(GetUnrolledDimensionsOfAllLayers_m_Clear);
    }
    (*(uint32_t*)&(local_2c)) = 0;
    (*(uint32_t*)((char*)&(local_2c)+4)) = (uint32_t)(uintptr_t)((Vec2_L_double_G_ *)0x0);
    (*(uint32_t*)&(uStack_24)) = 0;
    (*(uint32_t*)((char*)&(uStack_24)+4)) = 0;
    iVar6 = (**(code **)((this->CraftBlueprintArmorMemoizationHandlerInstance).ResetFunctions.Size +
                        0xc))();
    util__Darray_L_util__Vec2_L_double_G___G___Darray_L_util__Vec2_L_double_G___G_
              ((Darray_L_util__Vec2_L_double_G___G_ *)local_2c,iVar6);
    iVar9 = 0;
    iVar6 = (**(code **)((this->CraftBlueprintArmorMemoizationHandlerInstance).ResetFunctions.Size +
                        0xc))();
    if (0 < iVar6) {
      do {
        local_1c = (Vec2_L_double_G_ *)(uintptr_t)(GetUnrolledDimensions_m(this,&local_58,iVar9));
        iVar6 = (int)uStack_24;
        *(uint32_t *)&local_34 = (double)CONCAT44((int)uStack_24 + 1,(undefined4)local_34);
        util__Darray_L_util__Vec2_L_double_G___G___SetSize
                  ((Darray_L_util__Vec2_L_double_G___G_ *)local_2c,(int *)((int)&local_34 + 4));
        bVar5 = util__Darray_L_util__Vec2_L_double_G___G___CheckSize
                          ((Darray_L_util__Vec2_L_double_G___G_ *)local_2c,iVar6);
        if (bVar5) {
          uVar2 = *(undefined4 *)((int)&local_1c->X + 4);
          uVar3 = *(undefined4 *)&local_1c->Y;
          uVar4 = *(undefined4 *)((int)&local_1c->Y + 4);
          pVVar1 = (Vec2_L_double_G_ *)((*(uint32_t*)((char*)&(local_2c)+4)) + ((int)uStack_24 + -1) * 0x10);
          *(undefined4 *)&pVVar1->X = *(undefined4 *)&local_1c->X;
          *(undefined4 *)((int)&pVVar1->X + 4) = uVar2;
          *(undefined4 *)&pVVar1->Y = uVar3;
          *(undefined4 *)((int)&pVVar1->Y + 4) = uVar4;
        }
        iVar9 = iVar9 + 1;
        iVar6 = (**(code **)((this->CraftBlueprintArmorMemoizationHandlerInstance).ResetFunctions.
                             Size + 0xc))();
      } while (iVar9 < iVar6);
    }
    util__Darray_L_util__Vec2_L_double_G___G___Darray_L_util__Vec2_L_double_G___G_
              (&local_48,(Darray_L_struct_util__Vec2_L_double_G___G_ *)local_2c);
    local_38 = 1;
    util__Darray_L_util__Vec2_L_double_G___G___op_assign
              ((Darray_L_util__Vec2_L_double_G___G_ *)&(this->GetArmorPlateCount_MemoizedValue).Data.Y,
               (Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_48);
    *(undefined1 *)&(this->GetYPlateCountsByLayer_MemoizedValue).Data.Data = local_38;
    local_48._pad_0x0_0 = (int)&vftable_12;
    if (local_48.Data != (Vec2_L_double_G_ *)0x0) {
      port_op_delete(local_48.Data);
    }
    local_48.Data = (Vec2_L_double_G_ *)0x0;
    local_48._pad_0x0_0 = (int)&vftable;
    (*(uint32_t*)&(local_2c)) = (uint32_t)(uintptr_t)(&vftable_12);
    if ((Vec2_L_double_G_ *)(*(uint32_t*)((char*)&(local_2c)+4)) != (Vec2_L_double_G_ *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(local_2c)+4)));
    }
    bVar5 = *(char *)&(this->GetYPlateCountsByLayer_MemoizedValue).Data.Data == '\0';
    (*(uint32_t*)((char*)&(local_2c)+4)) = (uint32_t)(uintptr_t)((Vec2_L_double_G_ *)0x0);
    (*(uint32_t*)&(local_2c)) = (uint32_t)(uintptr_t)(&vftable);
  }
  if (bVar5) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pdVar7 = (double *)(**(code **)((this->GetArmorPlateCount_MemoizedValue).Data.Y + 8))();
  *(uint32_t *)&local_34 = *pdVar7;
  uStack_24 = pdVar7[1];
  if ((this->GetOuterArmorSegmentsByLayer_m_MemoizedValue).IsValidData == false) {
    iVar6 = *(int *)&(this->GetOuterArmorSpline_m_MemoizedValue).IsValidData;
    local_1c = (Vec2_L_double_G_ *)(iVar6 + 1);
    util__Darray_L_util__Reflectable_P_G___SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&(this->GetOuterArmorSpline_m_MemoizedValue).Data.Size,
               (int *)&local_1c);
    bVar5 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &(this->GetOuterArmorSpline_m_MemoizedValue).Data.Size,iVar6);
    if (bVar5) {
      *(code **)((this->GetOuterArmorSpline_m_MemoizedValue).Data.Capacity + -4 +
                (int)((this->GetOuterArmorSpline_m_MemoizedValue).IsValidData * 4)) = (code *)(ChemicalReaction__GetEnergyDensity_J__kg_Clear);
    }
    dVar10 = GetAspectRatioTextureStretch_MemoizedFunction(this);
    local_58.Y = CONCAT31((*(uint24_t *)((char *)&(local_58.Y) + 1)),1);
    local_58.X = SUB84(dVar10,0);
    local_58.Y = (int)((ulonglong)dVar10 >> 0x20);
    (this->GetOuterArmorSegmentsByLayer_m_MemoizedValue).Data.Size = local_58.X;
    (this->GetOuterArmorSegmentsByLayer_m_MemoizedValue).Data.Capacity = local_58.Y;
    *(undefined4 *)&((this->GetOuterArmorSegmentsByLayer_m_MemoizedValue).IsValidData) = local_58.Y;
    (this->GetUnrolledDimensionsOfAllLayers_m_MemoizedValue).Data._pad_0x0_0 = local_58.Z;
    local_58.X = dVar10;
    if ((this->GetOuterArmorSegmentsByLayer_m_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  local_18 = (double)((this->GetOuterArmorSegmentsByLayer_m_MemoizedValue).Data.Size *
             (local_34 / 15.0));
  dStack_10 = uStack_24 / 15.0;
  pSVar8 = SpacecraftShader__GetStatic();
  (**(code **)(pSVar8->_pad_0x0_0 + 0x74))(&local_18);
  return;
}

//==== 0051b270 SetAll_0051b270 ====


/* public: virtual void  util__Darray_L_structArmorCollisionShell_G___SetAll(struct
   ArmorCollisionShell const &) */

void 
util__Darray_struct_ArmorCollisionShell___SetAll
          (Darray_L_struct_ArmorCollisionShell_G_ *this,ArmorCollisionShell *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  ArmorCollisionShell *pAVar4;
  
  piVar1 = *(int **)(this + 4);
  if (piVar1 != piVar1 + *(int *)(this + 8) * 0x20) {
    do {
      piVar2 = piVar1 + 0x20;
      pAVar4 = param_1;
      for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar1 = pAVar4->SegmentID;
        pAVar4 = (ArmorCollisionShell *)&pAVar4->LayerID;
        piVar1 = piVar1 + 1;
      }
      piVar1 = piVar2;
    } while (piVar2 != (int *)(*(int *)(this + 8) * 0x80 + *(int *)(this + 4)));
  }
  return;
}





//==== 0051b2c0 SetAll_0051b2c0 ====


/* public: virtual void  util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cdouble_G___G___SetAll(struct util__tuple2_L_classutil__Str_L_char_G__Cdouble_G_ const &) */

void 
util__Darray_struct_util__tuple2_class_util__Str_char__double_____SetAll
          (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ *this,
          tuple2_L_class_util__Str_L_char_G__Cdouble_G_ *param_1)

{
  undefined8 uVar1;
  Str_L_char_G_ *this_00;
  
  this_00 = *(Str_L_char_G_ **)(this + 4);
  if (this_00 != this_00 + *(int *)(this + 8) * 2) {
    do {
      util__Maybe_struct_util__ClassMember___operator(this_00,(Str_L_char_G_ *)param_1);
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      this_00[1].Capacity = (int)uVar1;
      this_00[1].Length = (int)((ulonglong)uVar1 >> 0x20);
      this_00 = this_00 + 2;
    } while (this_00 != (Str_L_char_G_ *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x18));
  }
  return;
}





//==== 0051b310 SetAll_0051b310 ====


/* public: virtual void  util__Darray_L_classutil__Darray_L_classModule_P_G__G___SetAll(class
   util__Darray_L_classModule_P_G_ const &) */

void 
util__Darray_class_util__Darray_class_Module______SetAll
          (Darray_L_class_util__Darray_L_class_Module_P_G___G_ *this,Darray_L_class_Module_P_G_ *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  Darray_L_class_util__Reflectable_P_G_ *this_00;
  int iStack_8;
  
  this_00 = *(Darray_L_class_util__Reflectable_P_G_ **)(this + 4);
  if (this_00 != this_00 + *(int *)(this + 8) * 0x10) {
    do {
      iStack_8 = (**(code **)(*(int *)param_1 + 0xc))();
      Darray_L_class_util__Reflectable_P_G___SetSize(this_00,&iStack_8);
      iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
      if (iVar1 == 0) {
        (**(code **)(*(int *)this_00 + 0x10))();
      }
      else {
        uVar5 = *(uint *)(this_00 + 8);
        if ((int)uVar5 < 0) {
          iStack_8 = 0;
          Darray_L_class_util__Reflectable_P_G___SetSize(this_00,&iStack_8);
          uVar5 = *(uint *)(this_00 + 8);
        }
        if (0x3fffffff < (int)uVar5) {
          iStack_8 = 0x3fffffff;
          Darray_L_class_util__Reflectable_P_G___SetSize(this_00,&iStack_8);
          uVar5 = *(uint *)(this_00 + 8);
        }
        uVar2 = *(uint *)(this_00 + 0xc);
        if ((int)uVar2 < (int)uVar5) {
          if (uVar2 == 0) {
            *(uint *)(this_00 + 0xc) = uVar5;
            uVar2 = uVar5;
          }
          if ((int)uVar2 < (int)uVar5) {
            do {
              uVar2 = uVar2 * 2;
            } while ((int)uVar2 < (int)uVar5);
            *(uint *)(this_00 + 0xc) = uVar2;
          }
          if (0x3fffffff < (int)uVar2) {
            *(undefined4 *)(this_00 + 0xc) = 0x3fffffff;
            uVar2 = 0x3fffffff;
          }
          if (*(void **)(this_00 + 4) != (void *)0x0) {
            port_op_delete(*(void **)(this_00 + 4));
            uVar2 = *(uint *)(this_00 + 0xc);
          }
          *(undefined4 *)(this_00 + 4) = 0;
          uVar5 = -(uint)((int)((ulonglong)uVar2 * 4 >> 0x20) != 0) | (uint)((ulonglong)uVar2 * 4);
          puVar3 = (undefined4 *)port_op_new(uVar5);
          if (puVar3 == (undefined4 *)0x0) {
            puVar3 = (undefined4 *)0x0;
            *(undefined4 *)(this_00 + 4) = 0;
          }
          else {
            memset(puVar3,0,uVar5);
            *(undefined4 **)(this_00 + 4) = puVar3;
          }
        }
        else {
          puVar3 = *(undefined4 **)(this_00 + 4);
        }
        puVar4 = *(undefined4 **)(param_1 + 4);
        if (puVar4 != puVar4 + *(int *)(param_1 + 8)) {
          do {
            *puVar3 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 1;
          } while (puVar4 != (undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 4));
        }
      }
      this_00 = this_00 + 0x10;
    } while (this_00 !=
             (Darray_L_class_util__Reflectable_P_G_ *)(*(int *)(this + 8) * 0x10 + *(int *)(this + 4)));
  }
  return;
}





//==== 0051b480 SetAll_0051b480 ====


/* public: virtual void  util__Darray_L_classutil__Darray_L_structutil__Line2_L_double_G__G___G___SetAll(class util__Darray_L_structutil__Line2_L_double_G__G_ const &) */

void 
util__Darray_class_util__Darray_struct_util__Line2_double_______SetAll
          (Darray_L_class_util__Darray_L_struct_util__Line2_L_double_G___G___G_ *this,
          Darray_L_struct_util__Line2_L_double_G___G_ *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Darray_L_struct_util__Line2_L_double_G___G_ *pDVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  Darray_L_struct_util__Line2_L_double_G___G_ *this_00;
  
  pDVar5 = param_1;
  this_00 = *(Darray_L_struct_util__Line2_L_double_G___G_ **)(this + 4);
  if (this_00 != this_00 + *(int *)(this + 8) * 0x10) {
    do {
      param_1 = (Darray_L_struct_util__Line2_L_double_G___G_ *)(**(code **)(*(int *)pDVar5 + 0xc))();
      Darray_L_struct_util__Line2_L_double_G___G___SetSize(this_00,(int *)&param_1);
      iVar6 = (**(code **)(*(int *)pDVar5 + 0xc))();
      if (iVar6 == 0) {
        (**(code **)(*(int *)this_00 + 0x10))();
      }
      else {
        uVar9 = *(uint *)(this_00 + 8);
        if ((int)uVar9 < 0) {
          param_1 = (Darray_L_struct_util__Line2_L_double_G___G_ *)0x0;
          Darray_L_struct_util__Line2_L_double_G___G___SetSize(this_00,(int *)&param_1);
          uVar9 = *(uint *)(this_00 + 8);
        }
        if (0x3fffffff < (int)uVar9) {
          param_1 = (Darray_L_struct_util__Line2_L_double_G___G_ *)0x3fffffff;
          Darray_L_struct_util__Line2_L_double_G___G___SetSize(this_00,(int *)&param_1);
          uVar9 = *(uint *)(this_00 + 8);
        }
        uVar10 = *(uint *)(this_00 + 0xc);
        if ((int)uVar10 < (int)uVar9) {
          if (uVar10 == 0) {
            *(uint *)(this_00 + 0xc) = uVar9;
            uVar10 = uVar9;
          }
          if ((int)uVar10 < (int)uVar9) {
            do {
              uVar10 = uVar10 * 2;
            } while ((int)uVar10 < (int)uVar9);
            *(uint *)(this_00 + 0xc) = uVar10;
          }
          if (0x3fffffff < (int)uVar10) {
            *(undefined4 *)(this_00 + 0xc) = 0x3fffffff;
            uVar10 = 0x3fffffff;
          }
          if (*(void **)(this_00 + 4) != (void *)0x0) {
            port_op_delete(*(void **)(this_00 + 4));
            uVar10 = *(uint *)(this_00 + 0xc);
          }
          *(undefined4 *)(this_00 + 4) = 0;
          puVar7 = (undefined4 *)
                   port_op_new(-(uint)((int)((ulonglong)uVar10 * 0x20 >> 0x20) != 0) |
                                  (uint)((ulonglong)uVar10 * 0x20));
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else if (uVar10 != 0) {
            puVar8 = puVar7 + 2;
            do {
              puVar8[-2] = 0;
              puVar8[-1] = 0;
              *puVar8 = 0;
              puVar8[1] = 0;
              puVar8[2] = 0;
              puVar8[3] = 0;
              puVar8[4] = 0;
              puVar8[5] = 0;
              uVar10 = uVar10 - 1;
              puVar8 = puVar8 + 8;
            } while (uVar10 != 0);
            *(undefined4 **)(this_00 + 4) = puVar7;
            goto LAB_0051b5af;
          }
          *(undefined4 **)(this_00 + 4) = puVar7;
        }
        else {
          puVar7 = *(undefined4 **)(this_00 + 4);
        }
LAB_0051b5af:
        puVar8 = *(undefined4 **)(pDVar5 + 4);
        if (puVar8 != puVar8 + *(int *)(pDVar5 + 8) * 8) {
          do {
            uVar2 = puVar8[1];
            uVar3 = puVar8[2];
            uVar4 = puVar8[3];
            *puVar7 = *puVar8;
            puVar7[1] = uVar2;
            puVar7[2] = uVar3;
            puVar7[3] = uVar4;
            puVar1 = puVar8 + 4;
            uVar2 = puVar8[5];
            uVar3 = puVar8[6];
            uVar4 = puVar8[7];
            puVar8 = puVar8 + 8;
            puVar7[4] = *puVar1;
            puVar7[5] = uVar2;
            puVar7[6] = uVar3;
            puVar7[7] = uVar4;
            puVar7 = puVar7 + 8;
          } while (puVar8 != (undefined4 *)(*(int *)(pDVar5 + 8) * 0x20 + *(int *)(pDVar5 + 4)));
        }
      }
      this_00 = this_00 + 0x10;
    } while (this_00 !=
             (Darray_L_struct_util__Line2_L_double_G___G_ *)(*(int *)(this + 8) * 0x10 + *(int *)(this + 4))
            );
  }
  return;
}





//==== 0051b610 SetAll_0051b610 ====


/* public: virtual void  util__Darray_L_classutil__Darray_L_structutil__Vec2_L_double_G__G___G___SetAll(class util__Darray_L_structutil__Vec2_L_double_G__G_ const &) */

void 
util__Darray_class_util__Darray_struct_util__Vec2_double_______SetAll
          (Darray_L_class_util__Darray_L_struct_util__Vec2_L_double_G___G___G_ *this,
          Darray_L_struct_util__Vec2_L_double_G___G_ *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Darray_L_struct_util__Vec2_L_double_G___G_ *pDVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  Darray_L_struct_util__Vec2_L_double_G___G_ *this_00;
  
  pDVar5 = param_1;
  this_00 = *(Darray_L_struct_util__Vec2_L_double_G___G_ **)(this + 4);
  if (this_00 != this_00 + *(int *)(this + 8) * 0x10) {
    do {
      param_1 = (Darray_L_struct_util__Vec2_L_double_G___G_ *)(**(code **)(*(int *)pDVar5 + 0xc))();
      Darray_L_struct_util__Vec2_L_double_G___G___SetSize(this_00,(int *)&param_1);
      iVar6 = (**(code **)(*(int *)pDVar5 + 0xc))();
      if (iVar6 == 0) {
        (**(code **)(*(int *)this_00 + 0x10))();
      }
      else {
        Darray_L_struct_util__Vec2_L_double_G___G___CheckSizeDestructive(this_00);
        puVar7 = *(undefined4 **)(pDVar5 + 4);
        puVar8 = *(undefined4 **)(this_00 + 4);
        if (puVar7 != puVar7 + *(int *)(pDVar5 + 8) * 4) {
          do {
            uVar1 = *puVar7;
            uVar2 = puVar7[1];
            uVar3 = puVar7[2];
            uVar4 = puVar7[3];
            puVar7 = puVar7 + 4;
            *puVar8 = uVar1;
            puVar8[1] = uVar2;
            puVar8[2] = uVar3;
            puVar8[3] = uVar4;
            puVar8 = puVar8 + 4;
          } while (puVar7 != (undefined4 *)(*(int *)(pDVar5 + 8) * 0x10 + *(int *)(pDVar5 + 4)));
        }
      }
      this_00 = this_00 + 0x10;
    } while (this_00 !=
             (Darray_L_struct_util__Vec2_L_double_G___G_ *)(*(int *)(this + 8) * 0x10 + *(int *)(this + 4)))
    ;
  }
  return;
}





//==== 0051b6b0 SetAll_0051b6b0 ====


/* public: virtual void  util__Darray_L_classutil__Darray_L_structCraftSplinePoint_G___G___SetAll(class util__Darray_L_structCraftSplinePoint_G_ const &) */

void 
util__Darray_class_util__Darray_struct_CraftSplinePoint_____SetAll
          (Darray_L_class_util__Darray_L_struct_CraftSplinePoint_G___G_ *this,
          Darray_L_struct_CraftSplinePoint_G_ *param_1)

{
  Darray_L_struct_util__Vec2_L_double_G___G_ *pDVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  Darray_L_struct_util__Vec2_L_double_G___G_ *this_00;
  uint uVar5;
  Darray_L_struct_util__Vec2_L_double_G___G_ *pDVar6;
  Darray_L_struct_CraftSplinePoint_G_ *this_01;
  int iStack_c;
  Darray_L_struct_CraftSplinePoint_G_ *pDStack_8;
  
  this_01 = *(Darray_L_struct_CraftSplinePoint_G_ **)(this + 4);
  if (this_01 != this_01 + *(int *)(this + 8) * 0x10) {
    do {
      pDStack_8 = this_01;
      iStack_c = (**(code **)(*(int *)param_1 + 0xc))();
      Darray_L_struct_CraftSplinePoint_G___SetSize(this_01,&iStack_c);
      iVar2 = (**(code **)(*(int *)param_1 + 0xc))();
      if (iVar2 == 0) {
        (**(code **)(*(int *)this_01 + 0x10))();
      }
      else {
        uVar4 = *(uint *)(this_01 + 8);
        if ((int)uVar4 < 0) {
          iStack_c = 0;
          Darray_L_struct_CraftSplinePoint_G___SetSize(this_01,&iStack_c);
          uVar4 = *(uint *)(this_01 + 8);
        }
        if (0x3fffffff < (int)uVar4) {
          iStack_c = 0x3fffffff;
          Darray_L_struct_CraftSplinePoint_G___SetSize(this_01,&iStack_c);
          uVar4 = *(uint *)(this_01 + 8);
        }
        uVar5 = *(uint *)(this_01 + 0xc);
        if ((int)uVar5 < (int)uVar4) {
          if (uVar5 == 0) {
            *(uint *)(this_01 + 0xc) = uVar4;
            uVar5 = uVar4;
          }
          if ((int)uVar5 < (int)uVar4) {
            do {
              uVar5 = uVar5 * 2;
            } while ((int)uVar5 < (int)uVar4);
            *(uint *)(this_01 + 0xc) = uVar5;
          }
          if (0x3fffffff < (int)uVar5) {
            *(undefined4 *)(this_01 + 0xc) = 0x3fffffff;
            uVar5 = 0x3fffffff;
          }
          if (*(CraftSplinePoint **)(this_01 + 4) != (CraftSplinePoint *)0x0) {
            CraftSplinePoint___vector_deleting_destructor(*(CraftSplinePoint **)(this_01 + 4),3);
            uVar5 = *(uint *)(this_01 + 0xc);
          }
          *(undefined4 *)(this_01 + 4) = 0;
          uVar4 = -(uint)((int)((ulonglong)uVar5 * 0x18 >> 0x20) != 0) |
                  (uint)((ulonglong)uVar5 * 0x18);
          puVar3 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
          if (puVar3 == (uint *)0x0) {
            this_00 = (Darray_L_struct_util__Vec2_L_double_G___G_ *)0x0;
          }
          else {
            *puVar3 = uVar5;
            this_00 = (Darray_L_struct_util__Vec2_L_double_G___G_ *)(puVar3 + 1);
            pDVar6 = this_00;
            if (uVar5 != 0) {
              do {
                *(undefined ***)pDVar6 = (undefined **)(&vftable_12);
                *(undefined4 *)(pDVar6 + 4) = 0;
                *(undefined4 *)(pDVar6 + 8) = 0;
                *(undefined4 *)(pDVar6 + 0xc) = 0;
                *(undefined8 *)(pDVar6 + 0x10) = 0;
                uVar5 = uVar5 - 1;
                pDVar6 = pDVar6 + 0x18;
              } while (uVar5 != 0);
              *(Darray_L_struct_util__Vec2_L_double_G___G_ **)(this_01 + 4) = this_00;
              goto LAB_0051b817;
            }
          }
          *(Darray_L_struct_util__Vec2_L_double_G___G_ **)(this_01 + 4) = this_00;
        }
        else {
          this_00 = *(Darray_L_struct_util__Vec2_L_double_G___G_ **)(this_01 + 4);
        }
LAB_0051b817:
        pDVar6 = *(Darray_L_struct_util__Vec2_L_double_G___G_ **)(param_1 + 4);
        if (pDVar6 != pDVar6 + *(int *)(param_1 + 8) * 0x18) {
          do {
            Darray_L_struct_util__Vec2_L_double_G___G___op_assign(this_00,pDVar6);
            pDVar1 = pDVar6 + 0x10;
            pDVar6 = pDVar6 + 0x18;
            *(undefined8 *)(this_00 + 0x10) = *(undefined8 *)pDVar1;
            this_00 = this_00 + 0x18;
            this_01 = pDStack_8;
          } while (pDVar6 != (Darray_L_struct_util__Vec2_L_double_G___G_ *)
                             (*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 0x18));
        }
      }
      this_01 = this_01 + 0x10;
    } while (this_01 !=
             (Darray_L_struct_CraftSplinePoint_G_ *)(*(int *)(this + 8) * 0x10 + *(int *)(this + 4)));
  }
  return;
}





//==== 0051b890 SetAll_0051b890 ====


/* public: virtual void  util__Darray_L_classutil__SharedPtr_L_structCollisionHit_G___G___SetAll(class util__SharedPtr_L_structCollisionHit_G_ const &) */

void 
util__Darray_class_util__SharedPtr_struct_CollisionHit_____SetAll
          (Darray_L_class_util__SharedPtr_L_struct_CollisionHit_G___G_ *this,
          SharedPtr_L_struct_CollisionHit_G_ *param_1)

{
  ReferenceController *this_00;
  ReferenceController *this_01;
  bool bVar1;
  ReferenceControllerRegistry *this_02;
  undefined4 *puVar2;
  void *pvVar3;
  
  puVar2 = *(undefined4 **)(this + 4);
  if (puVar2 != puVar2 + *(int *)(this + 8) * 2) {
    do {
      pvVar3 = (void *)*puVar2;
      this_00 = (ReferenceController *)puVar2[1];
      *puVar2 = *(undefined4 *)param_1;
      this_01 = *(ReferenceController **)(param_1 + 4);
      puVar2[1] = (undefined4)(uintptr_t)(this_01);
      if (this_01 != (ReferenceController *)0x0) {
        ReferenceController__AddStrongReference(this_01);
      }
      if ((this_00 != (ReferenceController *)0x0) &&
         (bVar1 = ReferenceController__ReleaseStrongReference(this_00), bVar1)) {
        if (pvVar3 != (void *)0x0) {
          if (*(ReferenceController **)((int)pvVar3 + 0x8c) != (ReferenceController *)0x0) {
            ReferenceController__ReleaseWeakReference(*(ReferenceController **)((int)pvVar3 + 0x8c))
            ;
          }
          port_op_delete(pvVar3,0x1b0);
        }
        this_02 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
        ReferenceControllerRegistry__PointerWasDestroyed(this_02,pvVar3);
      }
      puVar2 = puVar2 + 2;
    } while (puVar2 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 8));
  }
  return;
}





//==== 0051b930 SetParent ====


/* public: void __thiscall CraftBlueprintArmor__SetParent(class CraftBlueprint *) */

void __thiscall CraftBlueprintArmor__SetParent(CraftBlueprintArmor *this,CraftBlueprint *param_1)

{
  this[1].GetInnerArmorSpline_m_MemoizedValue.Data.Capacity = (int)param_1;
  return;
}





//==== 0051b940 SetSize_0051b940 ====


/* private: void  util__Darray_L_structutil__tuple2_L_double_Cint_G__G___SetSize(int const &) */

void 
util__Darray_struct_util__tuple2_double_int_____SetSize
          (Darray_L_struct_util__tuple2_L_double_Cint_G___G_ *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uStack_8;
  
  iVar2 = *param_1;
  if (((iVar2 < 1) && (0x3ffffffe < iVar2)) || ((iVar2 < 0x40000000 && (-1 < iVar2)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.inl",0x2a5,
              "Between(value, 0, DARRAY_MAX_SIZE)",(char *)0x0);
    DebugBreak();
    iVar2 = *param_1;
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  iVar4 = 0x3fffffff;
  if (iVar2 < 0x3fffffff) {
    iVar4 = iVar2;
  }
  if (((iVar4 < *(int *)(this + 8)) && (iVar2 = *(int *)(this + 4), iVar2 != 0)) &&
     (puVar3 = (undefined4 *)(iVar4 * 0x10 + iVar2),
     puVar3 != (undefined4 *)(*(int *)(this + 8) * 0x10 + iVar2))) {
    do {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = uStack_8;
      puVar3 = puVar3 + 4;
    } while (puVar3 != (undefined4 *)(*(int *)(this + 8) * 0x10 + *(int *)(this + 4)));
  }
  *(int *)(this + 8) = iVar4;
  return;
}





//==== 0051ba00 SetSize_0051ba00 ====


/* private: void  util__Darray_L_structArmorCollisionShell_G___SetSize(int const &) */

void 
util__Darray_struct_ArmorCollisionShell___SetSize
          (Darray_L_struct_ArmorCollisionShell_G_ *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 auStack_84 [30];
  undefined1 uStack_c;
  
  iVar2 = *param_1;
  if (((iVar2 < 1) && (0x3ffffffe < iVar2)) || ((iVar2 < 0x40000000 && (-1 < iVar2)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.inl",0x2a5,
              "Between(value, 0, DARRAY_MAX_SIZE)",(char *)0x0);
    DebugBreak();
    iVar2 = *param_1;
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  iVar3 = 0x3fffffff;
  if (iVar2 < 0x3fffffff) {
    iVar3 = iVar2;
  }
  if (((iVar3 < *(int *)(this + 8)) && (iVar2 = *(int *)(this + 4), iVar2 != 0)) &&
     (puVar4 = (undefined4 *)(iVar3 * 0x80 + iVar2),
     puVar4 != (undefined4 *)(*(int *)(this + 8) * 0x80 + iVar2))) {
    do {
      auStack_84[0] = 0;
      auStack_84[1] = 0;
      uStack_c = 0;
      puVar5 = puVar4 + 0x20;
      auStack_84[2] = 0;
      auStack_84[3] = 0;
      auStack_84[4] = 0;
      auStack_84[5] = 0;
      auStack_84[6] = 0;
      auStack_84[7] = 0;
      auStack_84[8] = 0;
      auStack_84[9] = 0;
      auStack_84[10] = 0;
      auStack_84[0xb] = 0;
      auStack_84[0xc] = 0;
      auStack_84[0xd] = 0;
      auStack_84[0xe] = 0;
      auStack_84[0xf] = 0;
      auStack_84[0x10] = 0;
      auStack_84[0x11] = 0;
      auStack_84[0x12] = 0;
      auStack_84[0x13] = 0;
      auStack_84[0x14] = 0;
      auStack_84[0x15] = 0;
      auStack_84[0x16] = 0;
      auStack_84[0x17] = 0;
      auStack_84[0x18] = 0;
      auStack_84[0x19] = 0;
      auStack_84[0x1a] = 0;
      auStack_84[0x1b] = 0;
      auStack_84[0x1c] = 0;
      auStack_84[0x1d] = 0;
      puVar6 = auStack_84;
      for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar4 = puVar5;
    } while (puVar5 != (undefined4 *)(*(int *)(this + 8) * 0x80 + *(int *)(this + 4)));
    *(int *)(this + 8) = iVar3;
    return;
  }
  *(int *)(this + 8) = iVar3;
  return;
}





//==== 0051bb00 SetSize_0051bb00 ====


/* private: void  util__Darray_L_structArmorLayerBlueprint_G___SetSize(int const &) */

void 
util__Darray_struct_ArmorLayerBlueprint___SetSize
          (Darray_L_struct_ArmorLayerBlueprint_G_ *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uStack_38;
  
  iVar2 = *param_1;
  if (((iVar2 < 1) && (0x3ffffffe < iVar2)) || ((iVar2 < 0x40000000 && (-1 < iVar2)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.inl",0x2a5,
              "Between(value, 0, DARRAY_MAX_SIZE)",(char *)0x0);
    DebugBreak();
    iVar2 = *param_1;
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  iVar3 = 0x3fffffff;
  if (iVar2 < 0x3fffffff) {
    iVar3 = iVar2;
  }
  if (((iVar3 < *(int *)(this + 8)) && (iVar2 = *(int *)(this + 4), iVar2 != 0)) &&
     (puVar4 = (undefined4 *)(iVar2 + iVar3 * 0x38),
     puVar4 != (undefined4 *)(iVar2 + *(int *)(this + 8) * 0x38))) {
    do {
      *puVar4 = 0;
      puVar4[1] = uStack_38;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      *(undefined8 *)(puVar4 + 0xc) = 0;
      puVar4 = puVar4 + 0xe;
    } while (puVar4 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x38));
  }
  *(int *)(this + 8) = iVar3;
  return;
}





//==== 0051bbf0 SetSize_0051bbf0 ====


/* private: void  util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cdouble_G___G___SetSize(int const &) */

void 
util__Darray_struct_util__tuple2_class_util__Str_char__double_____SetSize
          (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  Str_L_char_G_ *this_00;
  int iVar3;
  Str_L_char_G_ SStack_1c;
  undefined8 uStack_c;
  
  iVar2 = *param_1;
  if (((iVar2 < 1) && (0x3ffffffe < iVar2)) || ((iVar2 < 0x40000000 && (-1 < iVar2)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.inl",0x2a5,
              "Between(value, 0, DARRAY_MAX_SIZE)",(char *)0x0);
    DebugBreak();
    iVar2 = *param_1;
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  iVar3 = 0x3fffffff;
  if (iVar2 < 0x3fffffff) {
    iVar3 = iVar2;
  }
  if ((iVar3 < *(int *)(this + 8)) && (iVar2 = *(int *)(this + 4), iVar2 != 0)) {
    this_00 = (Str_L_char_G_ *)(iVar2 + iVar3 * 0x18);
    if (this_00 != (Str_L_char_G_ *)(iVar2 + *(int *)(this + 8) * 0x18)) {
      do {
        SStack_1c.Data = (char *)0x0;
        SStack_1c.Capacity = 0;
        SStack_1c.Length = 0;
        uStack_c = 0;
        util__Maybe_struct_util__ClassMember___operator(this_00,&SStack_1c);
        this_00[1].Capacity = 0;
        this_00[1].Length = 0;
        this_00 = this_00 + 2;
      } while (this_00 != (Str_L_char_G_ *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x18));
    }
    *(int *)(this + 8) = iVar3;
    return;
  }
  *(int *)(this + 8) = iVar3;
  return;
}





//==== 0051bcd0 SetSize_0051bcd0 ====


/* private: void  util__Darray_L_classutil__Darray_L_int_G__G___SetSize(int const &) */

void __thiscall
util__Darray_class_util__Darray_int_____SetSize(Darray_L_class_util__Darray_L_int_G___G_ *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  Darray_L_class_Module_P_G_ *this_00;
  undefined **ppuStack_14;
  void *pvStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  iVar2 = *param_1;
  if (((iVar2 < 1) && (0x3ffffffe < iVar2)) || ((iVar2 < 0x40000000 && (-1 < iVar2)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.inl",0x2a5,
              "Between(value, 0, DARRAY_MAX_SIZE)",(char *)0x0);
    DebugBreak();
    iVar2 = *param_1;
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  iVar3 = 0x3fffffff;
  if (iVar2 < 0x3fffffff) {
    iVar3 = iVar2;
  }
  if (((iVar3 < *(int *)(this + 8)) && (iVar2 = *(int *)(this + 4), iVar2 != 0)) &&
     (this_00 = (Darray_L_class_Module_P_G_ *)(iVar3 * 0x10 + iVar2),
     this_00 != (Darray_L_class_Module_P_G_ *)(*(int *)(this + 8) * 0x10 + iVar2))) {
    do {
      ppuStack_14 = (undefined **)(&vftable_11);
      pvStack_10 = (void *)0x0;
      uStack_c = 0;
      uStack_8 = 0;
      Darray_L_class_Module_P_G___op_assign(this_00,(Darray_L_class_Module_P_G_ *)&ppuStack_14);
      ppuStack_14 = (undefined **)(&vftable_11);
      if (pvStack_10 != (void *)0x0) {
        port_op_delete(pvStack_10);
      }
      this_00 = this_00 + 0x10;
    } while (this_00 != (Darray_L_class_Module_P_G_ *)(*(int *)(this + 8) * 0x10 + *(int *)(this + 4)));
  }
  *(int *)(this + 8) = iVar3;
  return;
}





//==== 0051bdc0 SetSize_0051bdc0 ====


/* private: void  util__Darray_L_classutil__Darray_L_structutil__Line2_L_double_G__G___G___SetSize(int const &) */

void 
util__Darray_class_util__Darray_struct_util__Line2_double_______SetSize
          (Darray_L_class_util__Darray_L_struct_util__Line2_L_double_G___G___G_ *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  Darray_L_struct_util__Line2_L_double_G___G_ *this_00;
  undefined **ppuStack_14;
  void *pvStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  iVar2 = *param_1;
  if (((iVar2 < 1) && (0x3ffffffe < iVar2)) || ((iVar2 < 0x40000000 && (-1 < iVar2)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.inl",0x2a5,
              "Between(value, 0, DARRAY_MAX_SIZE)",(char *)0x0);
    DebugBreak();
    iVar2 = *param_1;
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  iVar3 = 0x3fffffff;
  if (iVar2 < 0x3fffffff) {
    iVar3 = iVar2;
  }
  if (((iVar3 < *(int *)(this + 8)) && (iVar2 = *(int *)(this + 4), iVar2 != 0)) &&
     (this_00 = (Darray_L_struct_util__Line2_L_double_G___G_ *)(iVar3 * 0x10 + iVar2),
     this_00 != (Darray_L_struct_util__Line2_L_double_G___G_ *)(*(int *)(this + 8) * 0x10 + iVar2))) {
    do {
      ppuStack_14 = (undefined **)(&vftable_13);
      pvStack_10 = (void *)0x0;
      uStack_c = 0;
      uStack_8 = 0;
      Darray_L_struct_util__Line2_L_double_G___G___op_assign
                (this_00,(Darray_L_struct_util__Line2_L_double_G___G_ *)&ppuStack_14);
      ppuStack_14 = (undefined **)(&vftable_13);
      if (pvStack_10 != (void *)0x0) {
        port_op_delete(pvStack_10);
      }
      this_00 = this_00 + 0x10;
    } while (this_00 !=
             (Darray_L_struct_util__Line2_L_double_G___G_ *)(*(int *)(this + 8) * 0x10 + *(int *)(this + 4))
            );
  }
  *(int *)(this + 8) = iVar3;
  return;
}





//==== 0051beb0 SetSize_0051beb0 ====


/* private: void  util__Darray_L_classutil__Darray_L_structutil__Vec2_L_double_G__G___G___SetSize(int const &) */

void 
util__Darray_class_util__Darray_struct_util__Vec2_double_______SetSize
          (Darray_L_class_util__Darray_L_struct_util__Vec2_L_double_G___G___G_ *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  Darray_L_struct_util__Vec2_L_double_G___G_ *this_00;
  undefined **ppuStack_14;
  void *pvStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  iVar2 = *param_1;
  if (((iVar2 < 1) && (0x3ffffffe < iVar2)) || ((iVar2 < 0x40000000 && (-1 < iVar2)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.inl",0x2a5,
              "Between(value, 0, DARRAY_MAX_SIZE)",(char *)0x0);
    DebugBreak();
    iVar2 = *param_1;
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  iVar3 = 0x3fffffff;
  if (iVar2 < 0x3fffffff) {
    iVar3 = iVar2;
  }
  if (((iVar3 < *(int *)(this + 8)) && (iVar2 = *(int *)(this + 4), iVar2 != 0)) &&
     (this_00 = (Darray_L_struct_util__Vec2_L_double_G___G_ *)(iVar3 * 0x10 + iVar2),
     this_00 != (Darray_L_struct_util__Vec2_L_double_G___G_ *)(*(int *)(this + 8) * 0x10 + iVar2))) {
    do {
      ppuStack_14 = (undefined **)(&vftable_12);
      pvStack_10 = (void *)0x0;
      uStack_c = 0;
      uStack_8 = 0;
      Darray_L_struct_util__Vec2_L_double_G___G___op_assign
                (this_00,(Darray_L_struct_util__Vec2_L_double_G___G_ *)&ppuStack_14);
      ppuStack_14 = (undefined **)(&vftable_12);
      if (pvStack_10 != (void *)0x0) {
        port_op_delete(pvStack_10);
      }
      this_00 = this_00 + 0x10;
    } while (this_00 !=
             (Darray_L_struct_util__Vec2_L_double_G___G_ *)(*(int *)(this + 8) * 0x10 + *(int *)(this + 4)))
    ;
  }
  *(int *)(this + 8) = iVar3;
  return;
}





//==== 0051bfa0 SetSize_0051bfa0 ====


/* private: void  util__Darray_L_classutil__Darray_L_structCraftSplinePoint_G__G___SetSize(int
   const &) */

void 
util__Darray_class_util__Darray_struct_CraftSplinePoint_____SetSize
          (Darray_L_class_util__Darray_L_struct_CraftSplinePoint_G___G_ *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  Darray_L_struct_CraftSplinePoint_G_ *this_00;
  undefined **ppuStack_14;
  CraftSplinePoint *pCStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  iVar2 = *param_1;
  if (((iVar2 < 1) && (0x3ffffffe < iVar2)) || ((iVar2 < 0x40000000 && (-1 < iVar2)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.inl",0x2a5,
              "Between(value, 0, DARRAY_MAX_SIZE)",(char *)0x0);
    DebugBreak();
    iVar2 = *param_1;
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  iVar3 = 0x3fffffff;
  if (iVar2 < 0x3fffffff) {
    iVar3 = iVar2;
  }
  if (((iVar3 < *(int *)(this + 8)) && (iVar2 = *(int *)(this + 4), iVar2 != 0)) &&
     (this_00 = (Darray_L_struct_CraftSplinePoint_G_ *)(iVar3 * 0x10 + iVar2),
     this_00 != (Darray_L_struct_CraftSplinePoint_G_ *)(*(int *)(this + 8) * 0x10 + iVar2))) {
    do {
      ppuStack_14 = (undefined **)(&vftable_14);
      pCStack_10 = (CraftSplinePoint *)0x0;
      uStack_c = 0;
      uStack_8 = 0;
      Darray_L_struct_CraftSplinePoint_G___op_assign
                (this_00,(Darray_L_struct_CraftSplinePoint_G_ *)&ppuStack_14);
      ppuStack_14 = (undefined **)(&vftable_14);
      if (pCStack_10 != (CraftSplinePoint *)0x0) {
        CraftSplinePoint___vector_deleting_destructor(pCStack_10,3);
      }
      this_00 = this_00 + 0x10;
    } while (this_00 !=
             (Darray_L_struct_CraftSplinePoint_G_ *)(*(int *)(this + 8) * 0x10 + *(int *)(this + 4)));
  }
  *(int *)(this + 8) = iVar3;
  return;
}





//==== 0051c090 SetSize_0051c090 ====


/* private: void  util__Darray_L_classutil__SharedPtr_L_structCollisionHit_G__G___SetSize(int
   const &) */

void 
util__Darray_class_util__SharedPtr_struct_CollisionHit_____SetSize
          (Darray_L_class_util__SharedPtr_L_struct_CollisionHit_G___G_ *this,int *param_1)

{
  ReferenceController *this_00;
  bool bVar1;
  int iVar2;
  ReferenceControllerRegistry *this_01;
  int iVar3;
  undefined4 *puVar4;
  void *pvVar5;
  
  iVar2 = *param_1;
  if (((iVar2 < 1) && (0x3ffffffe < iVar2)) || ((iVar2 < 0x40000000 && (-1 < iVar2)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.inl",0x2a5,
              "Between(value, 0, DARRAY_MAX_SIZE)",(char *)0x0);
    DebugBreak();
    iVar2 = *param_1;
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  iVar3 = 0x3fffffff;
  if (iVar2 < 0x3fffffff) {
    iVar3 = iVar2;
  }
  if (((iVar3 < *(int *)(this + 8)) && (iVar2 = *(int *)(this + 4), iVar2 != 0)) &&
     (puVar4 = (undefined4 *)(iVar2 + iVar3 * 8),
     puVar4 != (undefined4 *)(iVar2 + *(int *)(this + 8) * 8))) {
    do {
      this_00 = (ReferenceController *)puVar4[1];
      pvVar5 = (void *)*puVar4;
      *puVar4 = 0;
      puVar4[1] = 0;
      if ((this_00 != (ReferenceController *)0x0) &&
         (bVar1 = ReferenceController__ReleaseStrongReference(this_00), bVar1)) {
        if (pvVar5 != (void *)0x0) {
          if (*(ReferenceController **)((int)pvVar5 + 0x8c) != (ReferenceController *)0x0) {
            ReferenceController__ReleaseWeakReference(*(ReferenceController **)((int)pvVar5 + 0x8c))
            ;
          }
          port_op_delete(pvVar5,0x1b0);
        }
        this_01 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
        ReferenceControllerRegistry__PointerWasDestroyed(this_01,pvVar5);
      }
      puVar4 = puVar4 + 2;
    } while (puVar4 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 8));
    *(int *)(this + 8) = iVar3;
    return;
  }
  *(int *)(this + 8) = iVar3;
  return;
}





//==== 0051c190 SingleItem_0051c190 ====


/* public: static class util__Darray_L_structutil__Vec2_L_double_G__G_ __cdecl util__Darray_L_struct_util__Vec2_L_double_G__G___SingleItem(struct util__Vec2_L_double_G_ const &) */

Vec2_L_double_G_ * __cdecl util__Darray_struct_util__Vec2_double_____SingleItem(Vec3_L_double_G_ *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Vec2_L_double_G_ *this;
  bool bVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *in_stack_00000008;
  
  this = (Vec2_L_double_G_ *)(param_1);
  *(undefined4 *)&param_1->X = 0;
  *(undefined4 *)((int)&param_1->X + 4) = 0;
  *(undefined4 *)&param_1->Y = 0;
  *(undefined4 *)((int)&param_1->Y + 4) = 0;
  *(undefined ***)&param_1->X = (undefined **)(&vftable_12);
  *(undefined4 *)((int)&param_1->X + 4) = 0;
  *(undefined4 *)&param_1->Y = 0;
  *(undefined4 *)((int)&param_1->Y + 4) = 1;
  puVar5 = (undefined4 *)port_op_new(0x10);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
  }
  iVar7 = 0;
  *(undefined4 **)((int)&this->X + 4) = puVar5;
  if (0 < *(int *)((int)&this->Y + 4)) {
    iVar6 = 0;
    do {
      iVar7 = iVar7 + 1;
      puVar5 = (undefined4 *)(iVar6 + *(int *)((int)&this->X + 4));
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      iVar6 = iVar6 + 0x10;
    } while (iVar7 < *(int *)((int)&this->Y + 4));
  }
  iVar7 = *(int *)&this->Y;
  param_1 = (Vec3_L_double_G_ *)(uintptr_t)(iVar7 + 1);
  SetSize((Darray_L_struct_util__Vec2_L_double_G___G_ *)this,(int *)&param_1);
  bVar4 = CheckSize((Darray_L_struct_util__Vec2_L_double_G___G_ *)this,iVar7);
  if (bVar4) {
    uVar1 = in_stack_00000008[1];
    uVar2 = in_stack_00000008[2];
    uVar3 = in_stack_00000008[3];
    puVar5 = (undefined4 *)(*(int *)((int)&this->X + 4) + -0x10 + *(int *)&this->Y * 0x10);
    *puVar5 = *in_stack_00000008;
    puVar5[1] = uVar1;
    puVar5[2] = uVar2;
    puVar5[3] = uVar3;
  }
  return this;
}





//==== 0051c230 SmallestDim ====


/* public: int const __thiscall util__Vec3_double___SmallestDim(void)const  */

int __thiscall util__Vec3_double___SmallestDim(Vec3_L_double_G_ *this)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = Abs(&this->Y);
  dVar3 = Abs(&this->X);
  dVar4 = Abs(&this->Z);
  if (dVar2 < dVar3) {
    dVar2 = Abs(&this->Y);
    return (dVar4 < dVar2) + 1;
  }
  dVar2 = Abs(&this->X);
  iVar1 = 0;
  if (dVar4 < dVar2) {
    iVar1 = 2;
  }
  return iVar1;
}





//==== 0051c2c0 StaticFactory_0051c2c0 ====

/* public: static class util__Reflectable * __cdecl CraftBlueprintArmor__ReflectionInfoStruct_L_class_CraftBlueprintArmor_G___StaticFactory(void) */

Reflectable * __cdecl
CraftBlueprintArmor__ReflectionInfoStruct_class_CraftBlueprintArmor___StaticFactory(void)

{
  undefined4 *puVar1;
  Reflectable *pRVar2;
  int iVar3;
  
  pRVar2 = (Reflectable *)(uintptr_t)(port_op_new(0x278));
  if (pRVar2 != (Reflectable *)0x0) {
    memset(pRVar2,0,0x278);
    (pRVar2->Name).Data = (char *)0x0;
    (pRVar2->Name).Capacity = 0;
    (pRVar2->Name).Length = 0;
    pRVar2->_pad_0x0_0 = (int)&vftable_104;
    pRVar2[1]._pad_0x0_0 = 0;
    *(undefined1 *)&pRVar2[1].Name.Data = 0;
    pRVar2[1].Name.Capacity = 0;
    pRVar2[1].Name.Length = 0;
    *(undefined1 *)&pRVar2[2]._pad_0x0_0 = 0;
    pRVar2[2].Name.Capacity = (int)&vftable_97;
    pRVar2[2].Name.Length = 0;
    pRVar2[3]._pad_0x0_0 = 0;
    pRVar2[3].Name.Data = (char *)0x0;
    pRVar2[3].Name.Capacity = 0;
    pRVar2[3].Name.Length = 0;
    pRVar2[4]._pad_0x0_0 = 0;
    pRVar2[4].Name.Data = (char *)0x0;
    pRVar2[3].Name.Capacity = (int)&vftable_2;
    pRVar2[3].Name.Length = 0;
    pRVar2[4]._pad_0x0_0 = 0;
    pRVar2[4].Name.Data = (char *)0x0;
    pRVar2[4].Name.Capacity = (int)&vftable_12;
    pRVar2[4].Name.Length = 0;
    pRVar2[5]._pad_0x0_0 = 0;
    pRVar2[5].Name.Data = (char *)0x0;
    *(undefined1 *)&pRVar2[5].Name.Capacity = 0;
    pRVar2[5].Name.Length = (int)&vftable_13;
    pRVar2[6]._pad_0x0_0 = 0;
    pRVar2[6].Name.Data = (char *)0x0;
    pRVar2[6].Name.Capacity = 0;
    *(undefined1 *)&pRVar2[6].Name.Length = 0;
    pRVar2[7]._pad_0x0_0 = (int)&vftable_63;
    pRVar2[7].Name.Data = (char *)0x0;
    pRVar2[7].Name.Capacity = 0;
    pRVar2[7].Name.Length = 0;
    *(undefined1 *)&pRVar2[8]._pad_0x0_0 = 0;
    pRVar2[8].Name.Capacity = 0;
    pRVar2[8].Name.Length = 0;
    *(undefined1 *)&pRVar2[9]._pad_0x0_0 = 0;
    pRVar2[9].Name.Capacity = (int)&vftable_14;
    pRVar2[9].Name.Length = 0;
    pRVar2[10]._pad_0x0_0 = 0;
    pRVar2[10].Name.Data = (char *)0x0;
    *(undefined1 *)&pRVar2[10].Name.Capacity = 0;
    pRVar2[10].Name.Length = (int)&vftable_14;
    pRVar2[0xb]._pad_0x0_0 = 0;
    pRVar2[0xb].Name.Data = (char *)0x0;
    pRVar2[0xb].Name.Capacity = 0;
    *(undefined1 *)&pRVar2[0xb].Name.Length = 0;
    pRVar2[0xc]._pad_0x0_0 = (int)&vftable_13;
    pRVar2[0xc].Name.Data = (char *)0x0;
    pRVar2[0xc].Name.Capacity = 0;
    pRVar2[0xc].Name.Length = 0;
    *(undefined1 *)&pRVar2[0xd]._pad_0x0_0 = 0;
    pRVar2[0xd].Name.Data = (char *)&vftable_13;
    pRVar2[0xd].Name.Capacity = 0;
    pRVar2[0xd].Name.Length = 0;
    pRVar2[0xe]._pad_0x0_0 = 0;
    *(undefined1 *)&pRVar2[0xe].Name.Data = 0;
    pRVar2[0xe].Name.Capacity = (int)&vftable_98;
    pRVar2[0xe].Name.Length = 0;
    pRVar2[0xf]._pad_0x0_0 = 0;
    pRVar2[0xf].Name.Data = (char *)0x0;
    *(undefined1 *)&pRVar2[0xf].Name.Capacity = 0;
    pRVar2[0xf].Name.Length = (int)&vftable_99;
    pRVar2[0x10]._pad_0x0_0 = 0;
    pRVar2[0x10].Name.Data = (char *)0x0;
    pRVar2[0x10].Name.Capacity = 0;
    *(undefined1 *)&pRVar2[0x10].Name.Length = 0;
    pRVar2[0x11]._pad_0x0_0 = (int)&vftable_12;
    pRVar2[0x11].Name.Data = (char *)0x0;
    pRVar2[0x11].Name.Capacity = 0;
    pRVar2[0x11].Name.Length = 0;
    *(undefined1 *)&pRVar2[0x12]._pad_0x0_0 = 0;
    pRVar2[0x12].Name.Data = (char *)&vftable_100;
    pRVar2[0x12].Name.Capacity = 0;
    pRVar2[0x12].Name.Length = 0;
    pRVar2[0x13]._pad_0x0_0 = 0;
    *(undefined1 *)&pRVar2[0x13].Name.Data = 0;
    *(undefined2 *)&pRVar2[0x13].Name.Capacity = 0;
    pRVar2[0x14]._pad_0x0_0 = 0;
    pRVar2[0x14].Name.Data = (char *)0x0;
    *(undefined1 *)&pRVar2[0x14].Name.Capacity = 0;
    pRVar2[0x15]._pad_0x0_0 = (int)&vftable_101;
    pRVar2[0x15].Name.Data = (char *)0x0;
    pRVar2[0x15].Name.Capacity = 0;
    pRVar2[0x15].Name.Length = 0;
    *(undefined1 *)&pRVar2[0x16]._pad_0x0_0 = 0;
    pRVar2[0x16].Name.Data = (char *)&vftable_63;
    pRVar2[0x16].Name.Capacity = 0;
    pRVar2[0x16].Name.Length = 0;
    pRVar2[0x17]._pad_0x0_0 = 0;
    *(undefined1 *)&pRVar2[0x17].Name.Data = 0;
    pRVar2[0x17].Name.Capacity = (int)&vftable_98;
    pRVar2[0x17].Name.Length = 0;
    pRVar2[0x18]._pad_0x0_0 = 0;
    pRVar2[0x18].Name.Data = (char *)0x0;
    *(undefined1 *)&pRVar2[0x18].Name.Capacity = 0;
    pRVar2[0x18].Name.Length = 0;
    pRVar2[0x19]._pad_0x0_0 = 0;
    pRVar2[0x19].Name.Data = (char *)0x0;
    *(undefined1 *)&pRVar2[0x19].Name.Capacity = 0;
    pRVar2[0x19].Name.Length = (int)&vftable_11;
    pRVar2[0x1a]._pad_0x0_0 = 0;
    pRVar2[0x1a].Name.Data = (char *)0x0;
    pRVar2[0x1a].Name.Capacity = 0;
    *(undefined1 *)&pRVar2[0x1a].Name.Length = 0;
    pRVar2[0x1b]._pad_0x0_0 = (int)&vftable_102;
    pRVar2[0x1b].Name.Data = (char *)0x0;
    pRVar2[0x1b].Name.Capacity = 0;
    pRVar2[0x1b].Name.Length = 0;
    *(undefined1 *)&pRVar2[0x1c]._pad_0x0_0 = 0;
    pRVar2[0x1c].Name.Capacity = 0;
    pRVar2[0x1c].Name.Length = 0;
    *(undefined1 *)&pRVar2[0x1d]._pad_0x0_0 = 0;
    pRVar2[0x1d].Name.Capacity = 0;
    pRVar2[0x1d].Name.Length = 0;
    *(undefined1 *)&pRVar2[0x1e]._pad_0x0_0 = 0;
    pRVar2[0x1e].Name.Capacity = 0;
    pRVar2[0x1e].Name.Length = 0;
    *(undefined1 *)&pRVar2[0x1f]._pad_0x0_0 = 0;
    pRVar2[0x1f].Name.Capacity = 0;
    pRVar2[0x1f].Name.Length = 0x3ff00000;
    pRVar2[0x20]._pad_0x0_0 = 0;
    pRVar2[0x20].Name.Data = (char *)0x0;
    pRVar2[0x20].Name.Capacity = 0;
    pRVar2[0x20].Name.Length = 0;
    pRVar2[0x21]._pad_0x0_0 = 0;
    pRVar2[0x21].Name.Data = (char *)0x0;
    pRVar2[0x21].Name.Capacity = 0;
    pRVar2[0x21].Name.Length = 0x3ff00000;
    pRVar2[0x22]._pad_0x0_0 = 0;
    pRVar2[0x22].Name.Data = (char *)0x0;
    pRVar2[0x22].Name.Capacity = 0;
    pRVar2[0x22].Name.Length = 0;
    pRVar2[0x23]._pad_0x0_0 = 0;
    pRVar2[0x23].Name.Data = (char *)0x0;
    pRVar2[0x23].Name.Capacity = 0;
    pRVar2[0x23].Name.Length = 0x3ff00000;
    *(undefined1 *)&pRVar2[0x24]._pad_0x0_0 = 0;
    pRVar2[0x24].Name.Capacity = 0;
    pRVar2[0x24].Name.Length = (int)&vftable_2;
    pRVar2[0x25]._pad_0x0_0 = 0;
    pRVar2[0x25].Name.Data = (char *)0x0;
    pRVar2[0x25].Name.Capacity = 1;
    puVar1 = (undefined4 *)(uintptr_t)(port_op_new(4));
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = 0;
    }
    iVar3 = 0;
    pRVar2[0x25]._pad_0x0_0 = (int)puVar1;
    if (0 < pRVar2[0x25].Name.Capacity) {
      do {
        *(undefined4 *)(pRVar2[0x25]._pad_0x0_0 + iVar3 * 4) = 0;
        iVar3 = iVar3 + 1;
      } while (iVar3 < pRVar2[0x25].Name.Capacity);
    }
    pRVar2[0x24].Name.Length =
         (int)&vftable_103;
    pRVar2[0x25].Name.Length = 0;
    pRVar2[0x26]._pad_0x0_0 = 0;
    pRVar2[0x26].Name.Data = (char *)0x0;
    pRVar2[0x26].Name.Capacity = 0;
    pRVar2[0x26].Name.Length = 0;
    pRVar2[0x27]._pad_0x0_0 = 0;
    return pRVar2;
  }
  return (Reflectable *)0x0;
}

//==== 0051c2f0 StaticGetMemberByIndex_0051c2f0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   CraftBlueprintArmor__ReflectionInfoStruct_class_CraftBlueprintArmor___StaticGetMemberByIndex(int)
    */

ClassMember * __cdecl
CraftBlueprintArmor__ReflectionInfoStruct_class_CraftBlueprintArmor___StaticGetMemberByIndex__o2
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_716df1d0__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_716df1d0__thread_safe_static_guard_0__);
    if ( cde_l2_716df1d0__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_95bc4cf8_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00963eec = 0;
      _DAT_00963ef0 = 0;
      _DAT_00963ef4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00963ef8,"Unused");
      _DAT_00963f04 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00963f08,"Shape");
      _DAT_00963f14 = 9;
      _DAT_00963f18 = 0x10;
      _DAT_00963f1c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00963f20,"ArmorShape");
      _DAT_00963f2c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00963f30,"Concave");
      _DAT_00963f3c = 1;
      _DAT_00963f40 = 0x14;
      _DAT_00963f44 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00963f48,"bool");
      _DAT_00963f54 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00963f58,"AspectRatio");
      _DAT_00963f64 = 4;
      _DAT_00963f68 = 0x18;
      _DAT_00963f6c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00963f70,"double");
      _DAT_00963f7c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00963f80,"ArmorLayers");
      _DAT_00963f8c = 0xb;
      _DAT_00963f90 = 0x28;
      _DAT_00963f94 = 0x38;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00963f98,"ArmorLayerBlueprint");
      _DAT_00963fa4 = 1;
      atexit( private__static_struct_util__ClassMember_const___cdecl_CraftBlueprintArmor__ReflectionInfoStruct_class_CraftBlueprintArmor___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_716df1d0__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_95bc4cf8_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_00963eec + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_00963ef0 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_00963ef4 + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_00963ef8 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_00963f04)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_00963f05)[iVar1];
  return __return_storage_ptr__;
}





//==== 0051c4f0 StaticGetMemberCount_0051c4f0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl CraftBlueprintArmor__ReflectionInfoStruct_class_CraftBlueprintArmor___StaticGetMemberCount(void) */

int __cdecl
CraftBlueprintArmor__ReflectionInfoStruct_class_CraftBlueprintArmor___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_9eaa6b74__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_9eaa6b74__thread_safe_static_guard_0__);
    if ( cde_l2_9eaa6b74__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_07a59462_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00963e1c = 0;
      _DAT_00963e20 = 0;
      _DAT_00963e24 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00963e28,"Unused");
      _DAT_00963e34 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00963e38,"Shape");
      _DAT_00963e44 = 9;
      _DAT_00963e48 = 0x10;
      _DAT_00963e4c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00963e50,"ArmorShape");
      _DAT_00963e5c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00963e60,"Concave");
      _DAT_00963e6c = 1;
      _DAT_00963e70 = 0x14;
      _DAT_00963e74 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00963e78,"bool");
      _DAT_00963e84 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00963e88,"AspectRatio");
      _DAT_00963e94 = 4;
      _DAT_00963e98 = 0x18;
      _DAT_00963e9c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00963ea0,"double");
      _DAT_00963eac = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00963eb0,"ArmorLayers");
      _DAT_00963ebc = 0xb;
      _DAT_00963ec0 = 0x28;
      _DAT_00963ec4 = 0x38;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00963ec8,"ArmorLayerBlueprint");
      _DAT_00963ed4 = 1;
      atexit( private__static_int_const___cdecl_CraftBlueprintArmor__ReflectionInfoStruct_class_CraftBlueprintArmor___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_9eaa6b74__thread_safe_static_guard_0__);
    }
  }
  return 5;
}





//==== 0051c6a0 StaticGetReflectionInfo_0051c6a0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct CraftBlueprintArmor__ReflectionInfoStruct_L_classCraftBlueprintArmor_G_ *
   __cdecl CraftBlueprintArmor__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_CraftBlueprintArmor_G_ * __cdecl
CraftBlueprintArmor__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_dc2ed787__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_dc2ed787__thread_safe_static_guard_0__);
    if ( cde_l2_dc2ed787__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_57ab0fde_ReflectionInfo) = &vftable_96;
      _Init_thread_footer(& cde_l2_dc2ed787__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_57ab0fde_ReflectionInfo;
}





//==== 0051c700 ValueAlong ====


/* public: class util__Maybe_L_double_G_  util__Line3_double___ValueAlong(struct
   util__Vec3_L_double_G_ const &)const  */

Maybe_L_double_G_ * 
util__Line3_double___ValueAlong
          (Line3_L_double_G_ *this,Maybe_L_double_G_ *__return_storage_ptr__,Vec3_L_double_G_ *param_1)

{
  int iVar1;
  Line3_L_double_G_ *pLVar2;
  Vec3_L_double_G_ *pVVar3;
  double dVar4;
  Vec3_L_double_G_ VStack_2c;
  Vec3_L_double_G_ *pVStack_14;
  Vec3_L_double_G_ *pVStack_10;
  Line3_L_double_G_ *pLStack_c;
  Line3_L_double_G_ *pLStack_8;
  
  pLStack_c = (Line3_L_double_G_ *)&(this->A).Y;
  VStack_2c.X = (this->B).X - (this->A).X;
  pVStack_14 = (Vec3_L_double_G_ *)&(this->B).Y;
  pLStack_8 = (Line3_L_double_G_ *)&(this->A).Z;
  VStack_2c.Y = *(double *)pVStack_14 - *(double *)pLStack_c;
  pVStack_10 = (Vec3_L_double_G_ *)&(this->B).Z;
  VStack_2c.Z = *(double *)pVStack_10 - *(double *)pLStack_8;
  iVar1 = Vec3_L_double_G___LargestDim(&VStack_2c);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      param_1 = (Vec3_L_double_G_ *)&param_1->Y;
    }
    else if (iVar1 == 2) {
      param_1 = (Vec3_L_double_G_ *)&param_1->Z;
    }
  }
  pVVar3 = &this->B;
  if (((iVar1 != 0) && (pVVar3 = pVStack_14, iVar1 != 1)) && (pVVar3 = &this->B, iVar1 == 2)) {
    pVVar3 = pVStack_10;
  }
  if ((iVar1 == 0) || ((pLVar2 = pLStack_c, iVar1 != 1 && (pLVar2 = pLStack_8, iVar1 != 2)))) {
    pLVar2 = this;
  }
  dVar4 = pVVar3->X - (pLVar2->A).X;
  if (NAN(dVar4) == (dVar4 == 0.0)) {
    pLVar2 = this;
    if (((iVar1 != 0) && (pLVar2 = pLStack_c, iVar1 != 1)) && (pLVar2 = this, iVar1 == 2)) {
      pLVar2 = pLStack_8;
    }
    __return_storage_ptr__->Data = (param_1->X - (pLVar2->A).X) / dVar4;
    __return_storage_ptr__->IsValidData = true;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Data = 0.0;
  __return_storage_ptr__->IsValidData = false;
  return __return_storage_ptr__;
}





//==== 0051c810 Darray_util__Delegate_void___ ====


/* public:  util__Darray_L_classutil__Delegate_L_void_G__G___Darray_L_classutil__Delegate_L_void_G___G_(class util__Darray_L_classutil__Delegate_L_void_G__G_ const &) */

Darray_L_class_util__Delegate_L_void_G___G_ * 
util__Darray_class_util__Delegate_void_____Darray_class_util__Delegate_void
          (Darray_L_class_util__Delegate_L_void_G___G_ *this,Darray_L_class_util__Delegate_L_void_G___G_ *param_1)

{
  undefined4 *puVar1;
  Darray_L_class_util__Delegate_L_void_G___G_ *pDVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  pDVar2 = param_1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = &vftable_109;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  param_1 = (Darray_L_class_util__Delegate_L_void_G___G_ *)(**(code **)(*(int *)param_1 + 0xc))();
  Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G___SetSize
            ((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)this,(int *)&param_1);
  uVar5 = *(uint *)(this + 0xc);
  puVar3 = (undefined4 *)
           port_op_new(-(uint)((int)((ulonglong)uVar5 * 8 >> 0x20) != 0) |
                          (uint)((ulonglong)uVar5 * 8));
  puVar4 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4 = puVar4 + 2;
    }
  }
  *(undefined4 **)(this + 4) = puVar3;
  puVar4 = *(undefined4 **)(pDVar2 + 4);
  if (puVar4 != puVar4 + *(int *)(pDVar2 + 8) * 2) {
    do {
      *puVar3 = *puVar4;
      puVar1 = puVar4 + 1;
      puVar4 = puVar4 + 2;
      puVar3[1] = *puVar1;
      puVar3 = puVar3 + 2;
    } while (puVar4 != (undefined4 *)(*(int *)(pDVar2 + 4) + *(int *)(pDVar2 + 8) * 8));
  }
  return this;
}





//==== 0051c8e0 Maybe_util__AutoDarray_util__tuple2_VertexBufferObject_VertexBufferObject_____ ====


/* public:  util__Maybe_L_classutil__AutoDarray_L_structutil__tuple2_L_class_VertexBufferObject_CclassVertexBufferObject_G__G__G___Maybe_L_classutil__AutoDarray_L_struct_util__tuple2_L_classVertexBufferObject_CclassVertexBufferObject_G__G__G_(class util__AutoDarray_L_struct_util__tuple2_L_classVertexBufferObject_CclassVertexBufferObject_G__G_ const &) */

Maybe_L_class_util__AutoDarray_L_struct_util__tuple2_L_class_VertexBufferObject_Cclass_VertexBufferObject_G___G___G_
* 
util__Maybe_class_util__AutoDarray_struct_util__tuple2_class_VertexBufferObject_class_VertexBufferObject_______Maybe_class_util__AutoDarray_struct_util__tuple2_class_VertexBufferObject_class_VertexBufferObject
          (Maybe_L_class_util__AutoDarray_L_struct_util__tuple2_L_class_VertexBufferObject_Cclass_VertexBufferObject_G___G___G_
           *this,AutoDarray_L_struct_util__tuple2_L_class_VertexBufferObject_Cclass_VertexBufferObject_G___G_
                 *param_1)

{
  AutoDarray_L_struct_util__tuple2_L_class_VertexBufferObject_Cclass_VertexBufferObject_G___G_ *pAVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  pAVar1 = param_1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = (undefined **)(&vftable_2);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  param_1 = (AutoDarray_L_struct_util__tuple2_L_class_VertexBufferObject_Cclass_VertexBufferObject_G___G_ *)
            (**(code **)(*(int *)param_1 + 0xc))();
  Darray_L_class_util__Reflectable_P_G___SetSize
            ((Darray_L_class_util__Reflectable_P_G_ *)this,(int *)&param_1);
  param_1 = (AutoDarray_L_struct_util__tuple2_L_class_VertexBufferObject_Cclass_VertexBufferObject_G___G_ *)
            (-(uint)((int)((ulonglong)*(uint *)(this + 0xc) * 4 >> 0x20) != 0) |
            (uint)((ulonglong)*(uint *)(this + 0xc) * 4));
  puVar2 = (undefined4 *)port_op_new((uint)param_1);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    memset(puVar2,0,(size_t)(uintptr_t)((size_t)(uintptr_t)(param_1)));
  }
  *(undefined4 **)(this + 4) = puVar2;
  puVar3 = *(undefined4 **)(pAVar1 + 4);
  if (puVar3 != puVar3 + *(int *)(pAVar1 + 8)) {
    do {
      *puVar2 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (puVar3 != (undefined4 *)(*(int *)(pAVar1 + 4) + *(int *)(pAVar1 + 8) * 4));
  }
  *(undefined ***)this =
       &vftable_103;
  this[0x10] = (Maybe_L_class_util__AutoDarray_L_struct_util__tuple2_L_class_VertexBufferObject_Cclass_VertexBufferObject_G___G___G_
                )0x1;
  return this;
}





//==== 0051c9a0 ArmorMatrix ====

/* public: __thiscall ArmorMatrix__ArmorMatrix(class CraftBlueprintArmor const *) */

ArmorMatrix * __thiscall ArmorMatrix__ArmorMatrix(ArmorMatrix *this,CraftBlueprintArmor *param_1)

{
  ReferenceController *this_00;
  SharedPtr_L_ArmorTextureHandler_G_ *pSVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  ReferenceControllerRegistry *this_01;
  undefined4 *puVar6;
  uint uVar7;
  SharedPtr_L_ArmorTextureHandler_G_ *pSVar8;
  ArmorTextureHandler *this_02;
  
  this->Parent = param_1;
  (this->ArmorPlates).Data = (ArmorPlate *)0x0;
  (this->ArmorPlates).Size.X = 0;
  (this->ArmorPlates).Size.Y = 0;
  (this->ArmorPlates).Size.Z = 0;
  CraftBlueprintArmor__GetArmorPlateCount_Memoize(param_1);
  if (*(char *)((param_1->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 4) == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  iVar3 = *(int *)((param_1->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 3) + -1;
  (this->ArmorRange).Lower = 0;
  (this->ArmorRange).Upper = iVar3;
  if (iVar3 < 0) {
    (this->ArmorRange).Lower = iVar3;
    (this->ArmorRange).Upper = 0;
  }
  uVar4 = (**(code **)((param_1->CraftBlueprintArmorMemoizationHandlerInstance).ResetFunctions.Size
                      + 0xc))();
  (this->TextureHandlers)._pad_0x0_0 =
       (int)&vftable_91;
  (this->TextureHandlers).Data = (SharedPtr_L_ArmorTextureHandler_G_ *)0x0;
  (this->TextureHandlers).Size = 0;
  (this->TextureHandlers).Capacity = uVar4;
  if (((int)uVar4 < 0) || (0x3fffffff < (int)uVar4)) {
    (this->TextureHandlers).Capacity = 0;
  }
  else if (0 < (int)uVar4) {
    uVar7 = -(uint)((int)((ulonglong)uVar4 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 8);
    puVar5 = (uint *)(uintptr_t)(port_op_new(-(uint)(0xfffffffb < uVar7) | uVar7 + 4));
    if (puVar5 == (uint *)0x0) {
      pSVar8 = (SharedPtr_L_ArmorTextureHandler_G_ *)0x0;
    }
    else {
      *puVar5 = uVar4;
      pSVar8 = (SharedPtr_L_ArmorTextureHandler_G_ *)(puVar5 + 1);
      pSVar1 = pSVar8;
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        pSVar1->Pointer = (ArmorTextureHandler *)0x0;
        pSVar1->Controller = (ReferenceController *)0x0;
        pSVar1 = pSVar1 + 1;
      }
    }
    iVar3 = 0;
    (this->TextureHandlers).Data = pSVar8;
    if (0 < (this->TextureHandlers).Capacity) {
      do {
        pSVar8 = (this->TextureHandlers).Data;
        this_00 = pSVar8[iVar3].Controller;
        this_02 = pSVar8[iVar3].Pointer;
        pSVar8[iVar3].Pointer = (ArmorTextureHandler *)0x0;
        pSVar8[iVar3].Controller = (ReferenceController *)0x0;
        if ((this_00 != (ReferenceController *)0x0) &&
           (bVar2 = util__ReferenceController__ReleaseStrongReference(this_00), bVar2)) {
          if (this_02 != (ArmorTextureHandler *)0x0) {
            ArmorTextureHandler___scalar_deleting_destructor(this_02,1);
          }
          this_01 = util__ReferenceControllerRegistry__Get();
          util__ReferenceControllerRegistry__PointerWasDestroyed(this_01,this_02);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (this->TextureHandlers).Capacity);
    }
  }
  *(uint32_t *)&((this->ArmorModels).Data) = (uint32_t)(uintptr_t)cde_ptr_as_double((void *)vftable_2);
  *(undefined4 *)&(this->ArmorModels).Data.field_0x4 = 0;
  *(undefined4 *)&(this->ArmorModels).Data.field_0x8 = 0;
  *(undefined4 *)&(this->ArmorModels).Data.field_0x4 = 1;
  puVar6 = (undefined4 *)(uintptr_t)(port_op_new(4));
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = 0;
  }
  iVar3 = 0;
  *(undefined4 * *)&(this->ArmorModels).Data.field_0x4 = puVar6;
  if (0 < (int)((this->ArmorModels).Data.field_0x4)){
    do {
      *(undefined4 *)((int)((this->ArmorModels).Data.field_0x4 + iVar3 * 4) ) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)((this->ArmorModels).Data.field_0x4));
  }
  *(int *)&(this->ArmorModels).Data =
       (int)&vftable_103;
  (this->ArmorModels).IsValidData = false;
  (this->StrutModel).Pointer = (VertexBufferObject *)0x0;
  (this->StrutModel).Controller = (ReferenceController *)0x0;
  return this;
}

//==== 0051cb80 vector_deleting_destructor_0051cb80 ====


/* public: void * __thiscall util__SharedPtr_L_classArmorTextureHandler_G_:: 0 vectordeletingdestructor(unsigned int) */

void * 
util__SharedPtr_class_ArmorTextureHandler____vector_deleting_destructor
          (SharedPtr_L_class_ArmorTextureHandler_G_ *this,uint param_1)

{
  SharedPtr_L_class_ArmorTextureHandler_G_ *pSVar1;
  SharedPtr_L_class_ArmorTextureHandler_G_ *pSVar2;
  SharedPtr_L_class_ArmorTextureHandler_G_ *pSVar3;
  bool bVar4;
  ArmorTextureHandler *pAVar5;
  ReferenceControllerRegistry *pRVar6;
  int iVar7;
  
  if ((param_1 & 2) != 0) {
    pSVar1 = this + -4;
    iVar7 = *(int *)pSVar1;
    pSVar3 = this + iVar7 * 8;
    while (iVar7 != 0) {
      pSVar2 = pSVar3 + -4;
      pSVar3 = pSVar3 + -8;
      iVar7 = iVar7 + -1;
      if ((*(ReferenceController **)pSVar2 != (ReferenceController *)0x0) &&
         (bVar4 = ReferenceController__ReleaseStrongReference(*(ReferenceController **)pSVar2),
         bVar4)) {
        pAVar5 = *(ArmorTextureHandler **)pSVar3;
        if (pAVar5 != (ArmorTextureHandler *)0x0) {
          ArmorTextureHandler___scalar_deleting_destructor(pAVar5,1);
          pAVar5 = *(ArmorTextureHandler **)pSVar3;
        }
        pRVar6 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
        ReferenceControllerRegistry__PointerWasDestroyed(pRVar6,pAVar5);
        *(undefined4 *)pSVar3 = 0;
      }
    }
    if ((param_1 & 1) != 0) {
      port_op_delete(pSVar1,*(int *)pSVar1 * 8 + 4);
    }
    return pSVar1;
  }
  if ((*(ReferenceController **)(this + 4) != (ReferenceController *)0x0) &&
     (bVar4 = ReferenceController__ReleaseStrongReference(*(ReferenceController **)(this + 4)),
     bVar4)) {
    pAVar5 = *(ArmorTextureHandler **)this;
    if (pAVar5 != (ArmorTextureHandler *)0x0) {
      ArmorTextureHandler___scalar_deleting_destructor(pAVar5,1);
      pAVar5 = *(ArmorTextureHandler **)this;
    }
    pRVar6 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
    ReferenceControllerRegistry__PointerWasDestroyed(pRVar6,pAVar5);
    *(undefined4 *)this = 0;
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,8);
  }
  return this;
}





//==== 0051cc50 scalar_deleting_destructor_0051cc50 ====


/* public: virtual void * __thiscall util__Darray_L_structutil__tuple2_L_enumOrder__Type_Cint_G___G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_util__tuple2_enum_Order__Type_int______scalar_deleting_destructor
          (Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *this,uint param_1)

{
  *(undefined ***)this = &vftable_109;
  if (*(void **)(this + 4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 4));
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = (undefined **)(&vftable);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 0051cca0 Add_0051cca0 ====


/* public: bool  util__Darray_L_classutil__SharedPtr_L_classArmorTextureHandler_G___G___Add(class util__SharedPtr_L_classArmorTextureHandler_G_ const &) */

bool 
util__Darray_class_util__SharedPtr_class_ArmorTextureHandler_____Add
          (Darray_L_class_util__SharedPtr_L_class_ArmorTextureHandler_G___G_ *this,
          SharedPtr_L_class_ArmorTextureHandler_G_ *param_1)

{
  int iVar1;
  ReferenceController *this_00;
  ReferenceController *this_01;
  bool bVar2;
  ReferenceControllerRegistry *this_02;
  ArmorTextureHandler *this_03;
  int iStack_8;
  
  iVar1 = *(int *)(this + 8);
  iStack_8 = iVar1 + 1;
  SetSize(this,&iStack_8);
  bVar2 = CheckSize(this,iVar1);
  if (!bVar2) {
  }
  this_03 = *(ArmorTextureHandler **)(*(int *)(this + 4) + -8 + *(int *)(this + 8) * 8);
  iVar1 = *(int *)(this + 4) + *(int *)(this + 8) * 8;
  this_00 = *(ReferenceController **)(iVar1 + -4);
  *(undefined4 *)(iVar1 + -8) = *(undefined4 *)param_1;
  this_01 = *(ReferenceController **)(param_1 + 4);
  *(ReferenceController **)(iVar1 + -4) = this_01;
  if (this_01 != (ReferenceController *)0x0) {
    ReferenceController__AddStrongReference(this_01);
  }
  if (this_00 != (ReferenceController *)0x0) {
    bVar2 = ReferenceController__ReleaseStrongReference(this_00);
    if (bVar2) {
      if (this_03 != (ArmorTextureHandler *)0x0) {
        ArmorTextureHandler___scalar_deleting_destructor(this_03,1);
      }
      this_02 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
      ReferenceControllerRegistry__PointerWasDestroyed(this_02,this_03);
    }
  }
  return true;
}





//==== 0051cd30 ArmorRevealsInternals ====


/* public: bool __thiscall ArmorMatrix__ArmorRevealsInternals(void)const  */

bool __thiscall ArmorMatrix__ArmorRevealsInternals(ArmorMatrix *this)

{
  undefined8 uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iStack_14;
  int iStack_10;
  int iStack_8;
  
  iStack_8 = 0;
  (*(uint32_t*)&(uVar1)) = (this->ArmorPlates).Size.X;
  (*(uint32_t*)((char*)&(uVar1)+4)) = (this->ArmorPlates).Size.Y;
  iStack_10 = (int)((ulonglong)uVar1 >> 0x20);
  if (0 < iStack_10) {
    iStack_14 = (int)uVar1;
    do {
      iVar5 = 0;
      if (0 < iStack_14) {
        do {
          if ((this->ArmorPlates).Data == (ArmorPlate *)0x0) {
            util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl"
                            ,0x35e,"IsValid()",(char *)0x0);
            DebugBreak();
          }
          iVar2 = (this->ArmorPlates).Size.X;
          iVar4 = iVar2 * iStack_8 + iVar5;
          if ((iVar4 < 0) ||
             ((this->ArmorPlates).Size.Z * (this->ArmorPlates).Size.Y * iVar2 <= iVar4)) {
            util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl"
                            ,0x360,"Index >= 0 && Index < GetTotalSize()",(char *)0x0);
            DebugBreak();
          }
          bVar3 = ArmorPlate__IsDestroyed((this->ArmorPlates).Data + iVar4);
          if (bVar3) {
            return true;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iStack_14);
      }
      iStack_8 = iStack_8 + 1;
    } while (iStack_8 < iStack_10);
  }
  return false;
}





//==== 0051ce00 CarveOutArmor ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void  ArmorMatrix__CarveOutArmor(class util__Maybe_L_structutil__Vec2_L_double_G___G_,class util__Maybe_L_double_G_,double,double) */

void 
ArmorMatrix__CarveOutArmor
          (ArmorMatrix *this,Maybe_L_util__Vec2_L_double_G___G_ param_1,Maybe_L_double_G_ param_2,double param_3
          ,double param_4)

{
  undefined8 stack0xfffffffc;
  undefined1 auVar1 [12];
  double dVar2;
  Vec3_L_double_G_ VVar3;
  Vec4_L_double_G_ VVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  int *piVar10;
  Vec3_L_double_G_ local_20;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (param_2.IsValidData == param_1.IsValidData) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\crafts\\armormatrix.cpp",
                    0x171,"Size_m.IsValid() ^ Radius_m.IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_10 = 0;
  local_c = 0;
  iVar5 = (**(code **)((this->TextureHandlers)._pad_0x0_0 + 0xc))();
  if (local_c < iVar5) {
    do {
      piVar10 = &local_c;
      (**(code **)(this->TextureHandlers)._pad_0x0_0)();
      CraftBlueprintArmor__GetParametricLocationFromHeight
                (this->Parent,&local_20,
                 (double)CONCAT44(SUB84(param_4,0),(int)((ulonglong)param_3 >> 0x20)),
                 (double)CONCAT44(local_10,(int)((ulonglong)param_4 >> 0x20)),(int)piVar10);
      uVar9 = (undefined1)(uintptr_t) SUB41(piVar10,0);
      if (param_1.IsValidData == false) {
        if (param_2.IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        dVar2 = param_2.Data + param_2.Data;
        uVar8 = 1;
        uVar6 = SUB84(dVar2,0);
        uVar7 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      else {
        dVar2 = param_1.Data.X;
        uVar6 = param_1.Data.Y;
        uVar7 =(*(double *)((char *)&(param_1.Data) + 0x10));
        uVar8 = 0;
      }
      (*(uint32_t*)((char*)&(auVar1)+8)) = uVar6;
      (*(uint64_t*)&(auVar1)) = dVar2;
      VVar3.Y = local_20.Y;
      VVar3.X = local_20.Y;
      VVar3.Y = local_20.Z;
      VVar3.Z = SUB84(dVar2,0);
      VVar4.Y = uVar7;
      VVar4.X = (double)(*(uint64_t*)((char*)&(auVar1)+4));
      VVar4.Z = uVar8;
      ArmorTextureHandler__CarveTexture(this->Parent,VVar3,VVar4,true,(bool)uVar9);
      local_10 = local_10 + 1;
      local_c = local_c + 1;
      iVar5 = (**(code **)((this->TextureHandlers)._pad_0x0_0 + 0xc))();
    } while (local_c < iVar5);
  }
  return;
}

//==== 0051cf20 CheckForSplitting ====


/* public: class util__Maybe_L_classutil__Darray_L_structutil__Range_L_int_G__G__G_ __thiscall
   ArmorMatrix__CheckForSplitting(void)const  */

void __thiscall ArmorMatrix__CheckForSplitting(ArmorMatrix *this)

{
  undefined8 stack0xfffffffc;
  undefined8 uVar1;
  bool bVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  Darray_L_class_util__Delegate_L_void_G___G_ *pDVar9;
  int iVar10;
  int iVar11;
  Darray_L_class_util__Delegate_L_void_G___G_ *in_stack_00000004;
  undefined **ppuStack_64;
  void *pvStack_60;
  Darray_L_class_util__Delegate_L_void_G___G_ aDStack_54 [4];
  Darray_L_class_util__Delegate_L_void_G___G_ *pDStack_50;
  int iStack_4c;
  undefined **ppuStack_48;
  void *pvStack_44;
  undefined8 uStack_40;
  undefined1 uStack_38;
  int iStack_34;
  ArmorMatrix *pAStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  char cStack_1a;
  char cStack_19;
  undefined **ppuStack_18;
  int *piStack_14;
  int iStack_10;
  uint uStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pDStack_50 = in_stack_00000004;
  iStack_4c = (this->ArmorPlates).Size.Z;
  (*(uint32_t*)&(uVar1)) = (this->ArmorPlates).Size.X;
  (*(uint32_t*)((char*)&(uVar1)+4)) = (this->ArmorPlates).Size.Y;
  (*(uint32_t*)((char*)&(uStack_40)+4)) = (int)((ulonglong)uVar1 >> 0x20);
  uVar8 = (*(uint32_t*)((char*)&(uStack_40)+4)) / 3;
  ppuStack_18 = &vftable_109;
  piStack_14 = (int *)0x0;
  iStack_10 = 0;
  uStack_40 = uVar1;
  pAStack_30 = this;
  if (((int)uVar8 < 0) || (0x3fffffff < (int)uVar8)) {
    uStack_c = 0;
  }
  else {
    uStack_c = uVar8;
    if (0 < (int)uVar8) {
      piStack_14 = (int *)port_op_new(-(uint)((int)((ulonglong)uVar8 * 8 >> 0x20) != 0) |
                                         (uint)((ulonglong)uVar8 * 8));
      piVar3 = piStack_14;
      if (piStack_14 == (int *)0x0) {
        piStack_14 = (int *)0x0;
      }
      else {
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          *piVar3 = 0;
          piVar3[1] = 0;
          piVar3 = piVar3 + 2;
        }
      }
      iVar6 = 0;
      if (0 < (int)uStack_c) {
        do {
          piStack_14[iVar6 * 2] = 0;
          piStack_14[iVar6 * 2 + 1] = 0;
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)uStack_c);
      }
    }
  }
  iVar6 = 0;
  iStack_2c = 0;
  cStack_1a = '\0';
  cStack_19 = '\0';
  iStack_20 = 0;
  if (0 < (*(uint32_t*)((char*)&(uStack_40)+4))) {
    iVar7 = (int)uStack_40;
    iVar10 = (*(uint32_t*)((char*)&(uStack_40)+4));
    do {
      iStack_34 = 0;
      iStack_24 = 0;
      if (iStack_4c < 1) {
LAB_0051d0c1:
        iVar5 = iStack_10;
        cStack_1a = '\x01';
        if (cStack_19 != '\0') {
          iVar10 = iStack_20 + -1;
          iVar11 = iVar10;
          iStack_24 = iVar6;
          if (iVar10 < iVar6) {
            iVar11 = iVar6;
            iStack_24 = iVar10;
          }
          iStack_28 = iStack_10 + 1;
          util__Darray_struct_util__tuple2_enum_Order__Type_int_____SetSize
                    ((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)&ppuStack_18,&iStack_28);
          bVar4 = util__Darray_struct_util__tuple2_enum_Order__Type_int_____CheckSize
                            ((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)&ppuStack_18,
                             iVar5);
          if (bVar4) {
            piStack_14[iStack_10 * 2 + -2] = iStack_24;
            piStack_14[iStack_10 * 2 + -1] = iVar11;
          }
          iVar6 = 0;
          cStack_19 = '\0';
          iVar10 = (*(uint32_t*)((char*)&(uStack_40)+4));
          iStack_2c = iVar6;
        }
      }
      else {
        iStack_28 = iVar7 / 2;
        do {
          iVar10 = 0;
          iVar6 = 0;
          if (0 < iVar7) {
            do {
              bVar4 = ArmorPlate__IsDestroyed
                                ((pAStack_30->ArmorPlates).Data +
                                 ((pAStack_30->ArmorPlates).Size.Y * iStack_24 + iStack_20) *
                                 (pAStack_30->ArmorPlates).Size.X + iVar6);
              if (bVar4) {
                iVar10 = iVar10 + 1;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < iVar7);
          }
          iVar5 = iStack_34 + 1;
          if (iVar10 < iStack_28) {
            iVar5 = iStack_34;
          }
          iStack_24 = iStack_24 + 1;
          iStack_34 = iVar5;
        } while (iStack_24 < iStack_4c);
        iVar6 = iStack_2c;
        iVar10 = (*(uint32_t*)((char*)&(uStack_40)+4));
        if (iStack_4c <= iVar5) goto LAB_0051d0c1;
        if (cStack_19 == '\0') {
          cStack_19 = '\x01';
          iVar6 = iStack_20;
          iStack_2c = iStack_20;
        }
      }
      iVar5 = iStack_10;
      iStack_20 = iStack_20 + 1;
    } while (iStack_20 < iVar10);
    this = pAStack_30;
    if (cStack_19 != '\0') {
      iVar10 = iVar10 + -1;
      iVar7 = iVar6;
      if (iVar10 < iVar6) {
        iVar7 = iVar10;
        iVar10 = iVar6;
      }
      iStack_28 = iStack_10 + 1;
      util__Darray_struct_util__tuple2_enum_Order__Type_int_____SetSize
                ((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)&ppuStack_18,&iStack_28);
      bVar4 = util__Darray_struct_util__tuple2_enum_Order__Type_int_____CheckSize
                        ((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)&ppuStack_18,iVar5);
      this = pAStack_30;
      if (bVar4) {
        piStack_14[iStack_10 * 2 + -2] = iVar7;
        piStack_14[iStack_10 * 2 + -1] = iVar10;
      }
    }
  }
  if (((iStack_10 == 1) && (*piStack_14 == (this->ArmorRange).Lower)) &&
     (piStack_14[1] == (this->ArmorRange).Upper)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((cStack_1a == '\0') || (bVar4)) {
    bVar2 = false;
    ppuStack_48 = &vftable_109;
    pvStack_44 = (void *)0x0;
    pDVar9 = (Darray_L_class_util__Delegate_L_void_G___G_ *)&ppuStack_48;
    uStack_40 = 0;
    uStack_38 = 0;
    bVar4 = true;
  }
  else {
    util__Darray_class_util__Delegate_void_____Darray_class_util__Delegate_void
              ((Darray_L_class_util__Delegate_L_void_G___G_ *)&ppuStack_64,
               (Darray_L_class_util__Delegate_L_void_G___G_ *)&ppuStack_18);
    *(char *)&(aDStack_54[0]) = 0x1;
    pDVar9 = (Darray_L_class_util__Delegate_L_void_G___G_ *)&ppuStack_64;
    bVar2 = true;
    bVar4 = false;
  }
  util__Darray_class_util__Delegate_void_____Darray_class_util__Delegate_void(pDStack_50,pDVar9);
  pDStack_50[0x10] = pDVar9[0x10];
  if (bVar4) {
    ppuStack_48 = &vftable_109;
    if (pvStack_44 != (void *)0x0) {
      port_op_delete(pvStack_44);
    }
    pvStack_44 = (void *)0x0;
    ppuStack_48 = (undefined **)(&vftable);
  }
  if (bVar2) {
    ppuStack_64 = &vftable_109;
    if (pvStack_60 != (void *)0x0) {
      port_op_delete(pvStack_60);
    }
    pvStack_60 = (void *)0x0;
    ppuStack_64 = (undefined **)(&vftable);
  }
  ppuStack_18 = &vftable_109;
  if (piStack_14 != (int *)0x0) {
    port_op_delete(piStack_14);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0051d270 CheckSize_0051d270 ====


/* private: bool  util__Darray_L_structutil__tuple2_L_enumOrder__Type_Cint_G__G___CheckSize(int)
    */

bool 
util__Darray_struct_util__tuple2_enum_Order__Type_int_____CheckSize
          (Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *this,int param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  bool bVar9;
  undefined4 *puStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar4 = *(uint *)(this + 8);
  bVar9 = -1 < (int)uVar4;
  bVar2 = !bVar9;
  if (bVar2) {
    puStack_c = (undefined4 *)0x0;
    SetSize(this,(int *)&puStack_c);
    uVar4 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar2;
  bVar2 = (int)uVar4 < 0x40000000;
  if (!bVar2) {
    puStack_c = (undefined4 *)0x3fffffff;
    SetSize(this,(int *)&puStack_c);
    uVar4 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar7 = *(uint *)(this + 0xc);
  if ((int)uVar4 <= (int)uVar7) {
    return bVar2 && bVar9;
  }
  if (uVar7 == 0) {
    *(uint *)(this + 0xc) = uVar4;
    uVar7 = uVar4;
  }
  if ((int)uVar7 < (int)uVar4) {
    do {
      uVar7 = uVar7 * 2;
    } while ((int)uVar7 < (int)uVar4);
    *(uint *)(this + 0xc) = uVar7;
  }
  if (0x3fffffff < (int)uVar7) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar7 = 0x3fffffff;
  }
  puStack_c = (undefined4 *)
              port_op_new(-(uint)((int)((ulonglong)uVar7 * 8 >> 0x20) != 0) |
                             (uint)((ulonglong)uVar7 * 8));
  puVar5 = puStack_c;
  if (puStack_c == (undefined4 *)0x0) {
    puStack_c = (undefined4 *)0x0;
  }
  else {
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5 = puVar5 + 2;
    }
  }
  puVar3 = puStack_c;
  puVar5 = *(undefined4 **)(this + 4);
  if (puVar5 != (undefined4 *)0x0) {
    iVar1 = *(int *)(this + 8);
    puVar6 = puVar5;
    puVar8 = puStack_c;
    if (puVar5 != puVar5 + param_1 * 2) {
      do {
        if (puVar8 == puStack_c + iVar1 * 2) break;
        *puVar8 = *puVar5;
        puVar6 = puVar5 + 1;
        puVar5 = puVar5 + 2;
        puVar8[1] = *puVar6;
        puVar6 = *(undefined4 **)(this + 4);
        puVar8 = puVar8 + 2;
      } while (puVar5 != puVar6 + param_1 * 2);
    }
    port_op_delete(puVar6);
    *(undefined4 *)(this + 4) = 0;
  }
  *(undefined4 **)(this + 4) = puVar3;
  return bStack_5;
}





//==== 0051d3c0 CheckSize_0051d3c0 ====


/* private: bool  util__Darray_L_classutil__SharedPtr_L_classArmorTextureHandler_G___G___CheckSize(int) */

bool 
util__Darray_class_util__SharedPtr_class_ArmorTextureHandler_____CheckSize
          (Darray_L_class_util__SharedPtr_L_class_ArmorTextureHandler_G___G_ *this,int param_1)

{
  uint *puVar1;
  ReferenceController *this_00;
  ReferenceController *this_01;
  bool bVar2;
  ReferenceControllerRegistry *this_02;
  uint uVar3;
  SharedPtr_L_class_ArmorTextureHandler_G_ *this_03;
  uint uVar4;
  uint *puVar5;
  SharedPtr_L_class_ArmorTextureHandler_G_ *pSVar6;
  bool bVar7;
  ArmorTextureHandler *this_04;
  uint *puStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar3 = *(uint *)(this + 8);
  bVar7 = -1 < (int)uVar3;
  bVar2 = !bVar7;
  if (bVar2) {
    puStack_c = (uint *)0x0;
    SetSize(this,(int *)&puStack_c);
    uVar3 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar2;
  bVar2 = (int)uVar3 < 0x40000000;
  if (!bVar2) {
    puStack_c = (uint *)0x3fffffff;
    SetSize(this,(int *)&puStack_c);
    uVar3 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar4 = *(uint *)(this + 0xc);
  if ((int)uVar3 <= (int)uVar4) {
    return bVar2 && bVar7;
  }
  if (uVar4 == 0) {
    *(uint *)(this + 0xc) = uVar3;
    uVar4 = uVar3;
  }
  if ((int)uVar4 < (int)uVar3) {
    do {
      uVar4 = uVar4 * 2;
    } while ((int)uVar4 < (int)uVar3);
    *(uint *)(this + 0xc) = uVar4;
  }
  if (0x3fffffff < (int)uVar4) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar4 = 0x3fffffff;
  }
  uVar3 = -(uint)((int)((ulonglong)uVar4 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 8);
  puStack_c = (uint *)port_op_new(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
  if (puStack_c == (uint *)0x0) {
    puStack_c = (uint *)0x0;
  }
  else {
    *puStack_c = uVar4;
    puStack_c = puStack_c + 1;
    puVar1 = puStack_c;
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 2;
    }
  }
  this_03 = *(SharedPtr_L_class_ArmorTextureHandler_G_ **)(this + 4);
  if (this_03 != (SharedPtr_L_class_ArmorTextureHandler_G_ *)0x0) {
    puVar1 = puStack_c + *(int *)(this + 8) * 2;
    puVar5 = puStack_c;
    pSVar6 = this_03;
    if (this_03 != this_03 + param_1 * 8) {
      do {
        if (puVar5 == puVar1) break;
        this_04 = (ArmorTextureHandler *)*puVar5;
        this_00 = (ReferenceController *)puVar5[1];
        *puVar5 = *(uint *)pSVar6;
        this_01 = *(ReferenceController **)(pSVar6 + 4);
        puVar5[1] = (uint)this_01;
        if (this_01 != (ReferenceController *)0x0) {
          ReferenceController__AddStrongReference(this_01);
        }
        if ((this_00 != (ReferenceController *)0x0) &&
           (bVar2 = ReferenceController__ReleaseStrongReference(this_00), bVar2)) {
          if (this_04 != (ArmorTextureHandler *)0x0) {
            ArmorTextureHandler___scalar_deleting_destructor(this_04,1);
          }
          this_02 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
          ReferenceControllerRegistry__PointerWasDestroyed(this_02,this_04);
        }
        pSVar6 = pSVar6 + 8;
        this_03 = *(SharedPtr_L_class_ArmorTextureHandler_G_ **)(this + 4);
        puVar5 = puVar5 + 2;
      } while (pSVar6 != this_03 + param_1 * 8);
    }
    if (this_03 != (SharedPtr_L_class_ArmorTextureHandler_G_ *)0x0) {
      SharedPtr_L_class_ArmorTextureHandler_G____vector_deleting_destructor_(this_03,3);
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(uint **)(this + 4) = puStack_c;
  return bStack_5;
}





//==== 0051d570 Clear_0051d570 ====


/* public: virtual void  util__Darray_L_structutil__tuple2_L_enumOrder__Type_Cint_G___G___Clear(void) */

void 
util__Darray_struct_util__tuple2_enum_Order__Type_int_____Clear
          (Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 0051e5c0 GetCenterOfMassTerm_km_kg_0051e5c0 ====


/* public: struct util__Vec3_L_double_G_  ArmorMatrix__GetCenterOfMassTerm_km_kg(double)const
    */

Vec3_L_double_G_ * 
ArmorMatrix__GetCenterOfMassTerm_km_kg
          (ArmorMatrix *this,Vec3_L_double_G_ *__return_storage_ptr__,double param_1)

{
  undefined8 stack0xfffffffc;
  undefined4 *puVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  CraftBlueprintArmor *pCVar5;
  int iVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  bool bVar13;
  uint *puVar14;
  int *piVar15;
  undefined4 *puVar16;
  double *pdVar17;
  uint uVar18;
  int iVar19;
  undefined4 *puVar20;
  int iVar21;
  bool *pbVar22;
  uint uVar23;
  Darray_L_struct_util__Vec2_L_double_G___G_ *pDVar24;
  ArmorMatrix *pAVar25;
  Darray_L_struct_util__Vec2_L_double_G___G_ *this_00;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined4 in_stack_00000008;
  int iStack_b4;
  ArmorMatrix *pAStack_b0;
  ArmorMatrix *pAStack_8c;
  undefined **ppuStack_88;
  int *piStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined **ppuStack_78;
  Darray_L_struct_util__Vec2_L_double_G___G_ *pDStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined **ppuStack_68;
  undefined4 *puStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined **ppuStack_58;
  undefined4 *puStack_54;
  ArmorMatrix *pAStack_50;
  uint uStack_4c;
  undefined **ppuStack_48;
  undefined4 *puStack_44;
  int iStack_40;
  int iStack_3c;
  Vec3_L_double_G_ *pVStack_38;
  Darray_L_struct_util__Vec2_L_double_G___G_ *pDStack_34;
  Line2_L_double_G_ LStack_30;
  undefined8 uStack_10;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pVStack_38 = __return_storage_ptr__;
  *(undefined4 *)&__return_storage_ptr__->X = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = 0;
  *(undefined4 *)&__return_storage_ptr__->Y = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = 0;
  __return_storage_ptr__->Z = 0.0;
  (*(uint32_t*)&(uVar2)) = (this->ArmorPlates).Size.X;
  (*(uint32_t*)((char*)&(uVar2)+4)) = (this->ArmorPlates).Size.Y;
  pCVar5 = this->Parent;
  iVar6 = (this->ArmorPlates).Size.Z;
  ppuStack_88 = (undefined **)0x0;
  piStack_84 = (int *)0x0;
  uStack_80 = 0;
  uStack_7c = 0;
  pAStack_8c = this;
  CraftBlueprintArmor__GetAllLayersOuterPlateSegments_m_Memoize(pCVar5);
  if (*(char *)((pCVar5->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 2) == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  util__Darray_class_util__Darray_struct_util__Line2_double_______Darray_class_util__Darray_struct_util__Line2_double
            ((Darray_L_class_util__Darray_L_struct_util__Line2_L_double_G___G___G_ *)&ppuStack_88,
             (Darray_L_class_util__Darray_L_struct_util__Line2_L_double_G___G___G_ *)
             &pCVar5->GetMomentOfInertiaTensor_kg_m2_MemoizedValue);
  pCVar5 = this->Parent;
  ppuStack_78 = (undefined **)0x0;
  pDStack_74 = (Darray_L_struct_util__Vec2_L_double_G___G_ *)0x0;
  uStack_70 = 0;
  uStack_6c = 0;
  CraftBlueprintArmor__GetArmorRadiiAndHeightPerPlatePerLayer_m_Memoize(pCVar5);
  pbVar22 = &(pCVar5->GetTotalArmorMass_kg_MemoizedValue).IsValidData;
  uStack_10 = (double)CONCAT44(pbVar22,(undefined4)uStack_10);
  if ((pCVar5->GetRadialMomentOfInertia_kg_m2_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  ppuStack_78 = &vftable_101;
  pDStack_74 = (Darray_L_struct_util__Vec2_L_double_G___G_ *)0x0;
  uStack_70 = 0;
  uStack_6c = *(uint *)((int)&(pCVar5->GetRadialMomentOfInertia_kg_m2_MemoizedValue).Data + 4);
  pDStack_34 = (Darray_L_struct_util__Vec2_L_double_G___G_ *)(**(code **)(*(int *)pbVar22 + 0xc))();
  util__Darray_class_util__Darray_struct_util__Vec2_double_______SetSize
            ((Darray_L_class_util__Darray_L_struct_util__Vec2_L_double_G___G___G_ *)&ppuStack_78,
             (int *)&pDStack_34);
  uVar23 = uStack_6c;
  uVar18 = -(uint)((int)((ulonglong)uStack_6c * 0x10 >> 0x20) != 0) |
           (uint)((ulonglong)uStack_6c * 0x10);
  puVar14 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar18) | uVar18 + 4);
  if (puVar14 == (uint *)0x0) {
    pDStack_34 = (Darray_L_struct_util__Vec2_L_double_G___G_ *)0x0;
  }
  else {
    *puVar14 = uVar23;
    pDStack_34 = (Darray_L_struct_util__Vec2_L_double_G___G_ *)(puVar14 + 1);
    pDVar24 = pDStack_34;
    for (; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined ***)pDVar24 = (undefined **)(&vftable_12);
      *(int *)(pDVar24 + 4) = 0;
      *(int *)(pDVar24 + 8) = 0;
      *(int *)(pDVar24 + 0xc) = 0;
      pDVar24 = pDVar24 + 0x10;
    }
  }
  iVar21 = (*(uint32_t*)((char*)&(uStack_10)+4));
  pDVar24 = *(Darray_L_struct_util__Vec2_L_double_G___G_ **)((*(uint32_t*)((char*)&(uStack_10)+4)) + 4);
  this_00 = pDStack_34;
  pDStack_74 = pDStack_34;
  if (pDVar24 != pDVar24 + *(int *)((*(uint32_t*)((char*)&(uStack_10)+4)) + 8) * 0x10) {
    do {
      util__Darray_struct_util__Vec2_double_____operator(this_00,pDVar24);
      pDVar24 = pDVar24 + 0x10;
      this = pAStack_8c;
      __return_storage_ptr__ = pVStack_38;
      this_00 = this_00 + 0x10;
    } while (pDVar24 !=
             (Darray_L_struct_util__Vec2_L_double_G___G_ *)
             (*(int *)(iVar21 + 8) * 0x10 + *(int *)(iVar21 + 4)));
  }
  iStack_b4 = (int)uVar2;
  ppuStack_48 = (undefined **)(&vftable_12);
  puStack_44 = (undefined4 *)0x0;
  iStack_40 = 0;
  iStack_3c = iStack_b4;
  if ((iStack_b4 < 0) || (0x3fffffff < iStack_b4)) {
    iStack_3c = 0;
  }
  else if (0 < iStack_b4) {
    lVar7 = (uVar2 & 0xffffffff) * 0x10;
    puStack_44 = (undefined4 *)
                 port_op_new(-(uint)((int)((ulonglong)lVar7 >> 0x20) != 0) | (uint)lVar7);
    puVar16 = puStack_44;
    iVar21 = iStack_b4;
    if (puStack_44 == (undefined4 *)0x0) {
      puStack_44 = (undefined4 *)0x0;
    }
    else {
      for (; iVar21 != 0; iVar21 = iVar21 + -1) {
        *puVar16 = 0;
        puVar16[1] = 0;
        puVar16[2] = 0;
        puVar16[3] = 0;
        puVar16 = puVar16 + 4;
      }
    }
    iVar21 = 0;
    if (0 < iStack_3c) {
      iVar19 = 0;
      do {
        iVar21 = iVar21 + 1;
        puVar16 = (undefined4 *)(iVar19 + (int)puStack_44);
        *puVar16 = 0;
        puVar16[1] = 0;
        puVar16[2] = 0;
        puVar16[3] = 0;
        iVar19 = iVar19 + 0x10;
      } while (iVar21 < iStack_3c);
    }
  }
  if (0 < iStack_b4) {
    iVar21 = 0;
    do {
      uStack_10 = ((double)iVar21 + 0.5) * (1.0 / (double)iStack_b4) * 6.283185307179586;
      dVar27 = util__Cos((double *)&uStack_10);
      dVar28 = util__Sin((double *)&uStack_10);
      iVar19 = iStack_40;
      pDStack_34 = (Darray_L_struct_util__Vec2_L_double_G___G_ *)(iStack_40 + 1);
      util__Darray_struct_util__Vec2_double_____SetSize
                ((Darray_L_struct_util__Vec2_L_double_G___G_ *)&ppuStack_48,(int *)&pDStack_34);
      bVar13 = util__Darray_struct_util__Vec2_double_____CheckSize
                         ((Darray_L_struct_util__Vec2_L_double_G___G_ *)&ppuStack_48,iVar19);
      if (bVar13) {
        *(double *)(puStack_44 + iStack_40 * 4 + -4) = dVar27;
        *(double *)(puStack_44 + iStack_40 * 4 + -2) = dVar28;
      }
      iVar21 = iVar21 + 1;
      this = pAStack_8c;
      __return_storage_ptr__ = pVStack_38;
    } while (iVar21 < iStack_b4);
  }
  pVStack_38 = (Vec3_L_double_G_ *)0x0;
  if (0 < iVar6) {
    do {
      piVar15 = (int *)(**(code **)(this->Parent->CraftBlueprintArmorMemoizationHandlerInstance).
                                   ResetFunctions.Size)(&pVStack_38);
      if (*piVar15 == 0) {
        dVar27 = 0.0;
      }
      else {
        piVar15 = (int *)(**(code **)(this->Parent->CraftBlueprintArmorMemoizationHandlerInstance).
                                     ResetFunctions.Size)(&pVStack_38);
        dVar27 = *(double *)(*piVar15 + 0x30);
      }
      ppuStack_68 = (undefined **)0x0;
      puStack_64 = (undefined4 *)0x0;
      uStack_60 = 0;
      uStack_5c = 0;
      pDStack_34 = (Darray_L_struct_util__Vec2_L_double_G___G_ *)(*(code *)*ppuStack_78)(&pVStack_38);
      ppuStack_68 = (undefined **)(&vftable_12);
      puStack_64 = (undefined4 *)0x0;
      uStack_60 = 0;
      uStack_5c = *(uint *)(pDStack_34 + 0xc);
      pAStack_8c = (ArmorMatrix *)(**(code **)(*(int *)pDStack_34 + 0xc))();
      util__Darray_struct_util__Vec2_double_____SetSize
                ((Darray_L_struct_util__Vec2_L_double_G___G_ *)&ppuStack_68,(int *)&pAStack_8c);
      uVar23 = uStack_5c;
      puStack_64 = (undefined4 *)
                   port_op_new(-(uint)((int)((ulonglong)uStack_5c * 0x10 >> 0x20) != 0) |
                                  (uint)((ulonglong)uStack_5c * 0x10));
      puVar16 = puStack_64;
      if (puStack_64 == (undefined4 *)0x0) {
        puStack_64 = (undefined4 *)0x0;
      }
      else {
        for (; uVar23 != 0; uVar23 = uVar23 - 1) {
          *puVar16 = 0;
          puVar16[1] = 0;
          puVar16[2] = 0;
          puVar16[3] = 0;
          puVar16 = puVar16 + 4;
        }
      }
      puVar16 = *(undefined4 **)(pDStack_34 + 4);
      puVar20 = puStack_64;
      if (puVar16 != puVar16 + *(int *)(pDStack_34 + 8) * 4) {
        do {
          uVar8 = *puVar16;
          uVar9 = puVar16[1];
          uVar10 = puVar16[2];
          uVar11 = puVar16[3];
          puVar16 = puVar16 + 4;
          *puVar20 = uVar8;
          puVar20[1] = uVar9;
          puVar20[2] = uVar10;
          puVar20[3] = uVar11;
          puVar20 = puVar20 + 4;
        } while (puVar16 !=
                 (undefined4 *)(*(int *)(pDStack_34 + 8) * 0x10 + *(int *)(pDStack_34 + 4)));
      }
      ppuStack_58 = (undefined **)0x0;
      puStack_54 = (undefined4 *)0x0;
      pAStack_50 = (ArmorMatrix *)0x0;
      uStack_4c = 0;
      pDStack_34 = (Darray_L_struct_util__Vec2_L_double_G___G_ *)(*(code *)*ppuStack_88)(&pVStack_38);
      ppuStack_58 = (undefined **)(&vftable_13);
      puStack_54 = (undefined4 *)0x0;
      pAStack_50 = (ArmorMatrix *)0x0;
      uStack_4c = *(uint *)(pDStack_34 + 0xc);
      pAStack_8c = (ArmorMatrix *)(**(code **)(*(int *)pDStack_34 + 0xc))();
      util__Darray_struct_util__Line2_double_____SetSize
                ((Darray_L_struct_util__Line2_L_double_G___G_ *)&ppuStack_58,(int *)&pAStack_8c);
      uVar23 = uStack_4c;
      puStack_54 = (undefined4 *)
                   port_op_new(-(uint)((int)((ulonglong)uStack_4c * 0x20 >> 0x20) != 0) |
                                  (uint)((ulonglong)uStack_4c * 0x20));
      if (puStack_54 == (undefined4 *)0x0) {
        puStack_54 = (undefined4 *)0x0;
      }
      else if (uVar23 != 0) {
        puVar16 = puStack_54 + 2;
        do {
          puVar16[-2] = 0;
          puVar16[-1] = 0;
          *puVar16 = 0;
          puVar16[1] = 0;
          puVar16[2] = 0;
          puVar16[3] = 0;
          puVar16[4] = 0;
          puVar16[5] = 0;
          uVar23 = uVar23 - 1;
          puVar16 = puVar16 + 8;
        } while (uVar23 != 0);
      }
      puVar16 = *(undefined4 **)(pDStack_34 + 4);
      puVar20 = puStack_54;
      if (puVar16 != puVar16 + *(int *)(pDStack_34 + 8) * 8) {
        do {
          uVar8 = puVar16[1];
          uVar9 = puVar16[2];
          uVar10 = puVar16[3];
          *puVar20 = *puVar16;
          puVar20[1] = uVar8;
          puVar20[2] = uVar9;
          puVar20[3] = uVar10;
          puVar1 = puVar16 + 4;
          uVar8 = puVar16[5];
          uVar9 = puVar16[6];
          uVar10 = puVar16[7];
          puVar16 = puVar16 + 8;
          puVar20[4] = *puVar1;
          puVar20[5] = uVar8;
          puVar20[6] = uVar9;
          puVar20[7] = uVar10;
          puVar20 = puVar20 + 8;
        } while (puVar16 !=
                 (undefined4 *)(*(int *)(pDStack_34 + 8) * 0x20 + *(int *)(pDStack_34 + 4)));
      }
      pAStack_b0 = (ArmorMatrix *)(uVar2 >> 0x20);
      uStack_10 = (double)((ulonglong)uStack_10 & 0xffffffff);
      pAVar25 = pAStack_50;
      if ((int)pAStack_b0 < (int)pAStack_50) {
        pAVar25 = pAStack_b0;
      }
      pAStack_8c = pAVar25;
      if (0 < (int)pAVar25) {
        do {
          puVar16 = (undefined4 *)(*(code *)*ppuStack_58)((int)&uStack_10 + 4);
          LStack_30.A.X = *puVar16;
          LStack_30.A.Y = puVar16[1];
          LStack_30.A.Y = puVar16[2];
          LStack_30.A.Z = puVar16[3];
          LStack_30.B.X = puVar16[4];
          LStack_30.B.Y = puVar16[5];
          LStack_30.B.Y = puVar16[6];
          LStack_30.B.Z = puVar16[7];
          dVar29 = CraftBlueprintArmor__GetSurfaceAreaOfArmorSegment_m2(this->Parent,&LStack_30);
          pdVar17 = (double *)(*(code *)*ppuStack_68)((int)&uStack_10 + 4);
          dVar28 = *pdVar17;
          dVar3 = pdVar17[1];
          pDStack_34 = (Darray_L_struct_util__Vec2_L_double_G___G_ *)0x0;
          if (0 < iStack_b4) {
            dVar12 = (double)CONCAT44((*(uint32_t*)&(param_1)),in_stack_00000008);
            do {
              dVar26 = (double)(this->ArmorPlates).Data
                               [(int)(pDStack_34 +
                                     ((this->ArmorPlates).Size.Y * (int)pVStack_38 + (*(uint32_t*)((char*)&(uStack_10)+4))
                                     ) * (this->ArmorPlates).Size.X)].Thickness_m *
                       dVar29 * (1.0 / (double)iStack_b4) * dVar27;
              pdVar17 = (double *)(*(code *)*ppuStack_48)(&pDStack_34);
              dVar4 = pdVar17[1];
              pDStack_34 = pDStack_34 + 1;
              __return_storage_ptr__->X =
                   *pdVar17 * (dVar28 / 1000.0) * dVar26 + __return_storage_ptr__->X;
              __return_storage_ptr__->Y =
                   (dVar28 / 1000.0) * dVar4 * dVar26 + __return_storage_ptr__->Y;
              __return_storage_ptr__->Z =
                   (dVar3 / 1000.0 + dVar12) * dVar26 + __return_storage_ptr__->Z;
              pAVar25 = pAStack_8c;
            } while ((int)pDStack_34 < iStack_b4);
          }
          iVar21 = (*(uint32_t*)((char*)&(uStack_10)+4)) + 1;
          uStack_10 = (double)CONCAT44(iVar21,(undefined4)uStack_10);
        } while (iVar21 < (int)pAVar25);
      }
      ppuStack_58 = (undefined **)(&vftable_13);
      if (puStack_54 != (undefined4 *)0x0) {
        port_op_delete(puStack_54);
      }
      puStack_54 = (undefined4 *)0x0;
      ppuStack_58 = (undefined **)(&vftable);
      ppuStack_68 = (undefined **)(&vftable_12);
      if (puStack_64 != (undefined4 *)0x0) {
        port_op_delete(puStack_64);
      }
      pVStack_38 = (Vec3_L_double_G_ *)((int)&pVStack_38->X + 1);
      puStack_64 = (undefined4 *)0x0;
      ppuStack_68 = (undefined **)(&vftable);
    } while ((int)pVStack_38 < iVar6);
  }
  ppuStack_48 = (undefined **)(&vftable_12);
  if (puStack_44 != (undefined4 *)0x0) {
    port_op_delete(puStack_44);
  }
  puStack_44 = (undefined4 *)0x0;
  ppuStack_48 = (undefined **)(&vftable);
  ppuStack_78 = &vftable_101;
  if (pDStack_74 != (Darray_L_struct_util__Vec2_L_double_G___G_ *)0x0) {
    if (*(int *)(pDStack_74 + -4) == 0) {
      port_op_delete(pDStack_74 + -4);
    }
    else {
      (**(code **)(*(int *)pDStack_74 + 0x18))(3);
    }
  }
  pDStack_74 = (Darray_L_struct_util__Vec2_L_double_G___G_ *)0x0;
  ppuStack_78 = (undefined **)(&vftable);
  ppuStack_88 = &vftable_98;
  if (piStack_84 != (int *)0x0) {
    if (piStack_84[-1] == 0) {
      port_op_delete(piStack_84 + -1);
    }
    else {
      (**(code **)(uintptr_t)(*piStack_84 + 0x18))(3);
    }
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}





//==== 0051ed40 GetCurrentPlateRangeHeights_m ====


/* public: struct util__Range_L_double_G_ __thiscall
   ArmorMatrix__GetCurrentPlateRangeHeights_m(void)const  */

Range_L_double_G_ * __thiscall
ArmorMatrix__GetCurrentPlateRangeHeights_m(ArmorMatrix *this,Range_L_double_G_ *__return_storage_ptr__)

{
  CraftBlueprintArmor__GetPlateRangeHeights_m(this->Parent,__return_storage_ptr__,this->ArmorRange);
  return __return_storage_ptr__;
}





//==== 0051ed60 GetMaxCurrentRadius_m ====


/* public: double __thiscall ArmorMatrix__GetMaxCurrentRadius_m(void)const  */

double __thiscall ArmorMatrix__GetMaxCurrentRadius_m(ArmorMatrix *this)

{
  Range_L_double_G_ RVar1;
  double dVar2;
  Range_L_double_G_ RStack_14;
  
  CraftBlueprintArmor__GetPlateRangeHeights_m(this->Parent,&RStack_14,this->ArmorRange);
  (*(uint32_t *)((char *)&(RVar1.Lower) + 4)) = (*(uint32_t *)((char *)&(RStack_14.Lower) + 4));
  RVar1.Lower = RStack_14.Lower;
  RVar1.Upper = RStack_14.Upper;
  (*(uint32_t *)((char *)&(RVar1.Upper) + 4)) = (*(uint32_t *)((char *)&(RStack_14.Upper) + 4));
  dVar2 = CraftBlueprintArmor__GetMinOrMaxArmorRadiusAtHeight_m(this->Parent,RVar1,0.0,false);
}





//==== 0051f070 HasArmor_0051f070 ====


/* public: bool __thiscall ArmorMatrix__HasArmor(void)const  */

bool __thiscall ArmorMatrix__HasArmor(ArmorMatrix *this)

{
  int iVar1;
  
  iVar1 = (**(code **)((this->Parent->CraftBlueprintArmorMemoizationHandlerInstance).ResetFunctions.
                       Size + 0xc))();
}





//==== 0051f080 HasFullArmor ====


/* public: bool __thiscall ArmorMatrix__HasFullArmor(void)const  */

bool __thiscall ArmorMatrix__HasFullArmor(ArmorMatrix *this)

{
  CraftBlueprintArmor *this_00;
  
  this_00 = this->Parent;
  CraftBlueprintArmor__HasFullArmor_Memoize(this_00);
  if (*(char *)((int)&(this_00->GetArmorCylinders_MemoizedValue).Data.Size + 1) == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return (bool)(char)(this_00->GetArmorCylinders_MemoizedValue).Data.Size;
}





//==== 0051f0c0 Initialize ====


/* public: void  util__Matrix3_L_structArmorPlate_G___Initialize(struct util__Vec3_L_int_G_ const
   &) */

void __thiscall
util__Matrix3_struct_ArmorPlate___Initialize(Matrix3_L_struct_ArmorPlate_G_ *this,Vec3_L_int_G_ *param_1)

{
  Vec3_L_int_G_ *this_00;
  Vec3_L_int_G_ *pVVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if (*(int *)this != 0) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl",0x37a,
              "!IsValid()",(char *)0x0);
    DebugBreak();
  }
  *(undefined8 *)(this + 4) = *(undefined8 *)param_1;
  *(int *)(this + 0xc) = param_1->Z;
  iVar4 = *(int *)(this + 4);
  if (((iVar4 < 1) || (iVar6 = *(int *)(this + 8), iVar6 < 1)) ||
     (iVar3 = *(int *)(this + 0xc), iVar3 < 1)) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl",0x37c,
              "Size.X > 0 && Size.Y > 0 && Size.Z > 0",(char *)0x0);
    DebugBreak();
    iVar3 = *(int *)(this + 0xc);
    iVar6 = *(int *)(this + 8);
    iVar4 = *(int *)(this + 4);
  }
  uVar5 = iVar4 * iVar6 * iVar3;
  param_1 = (Vec3_L_int_G_ *)
            port_op_new(-(uint)((int)((ulonglong)uVar5 * 4 >> 0x20) != 0) |
                           (uint)((ulonglong)uVar5 * 4));
  this_00 = param_1;
  pVVar1 = param_1;
  if (param_1 == (Vec3_L_int_G_ *)0x0) {
    pVVar1 = (Vec3_L_int_G_ *)0x0;
  }
  else {
    for (; param_1 = pVVar1, uVar5 != 0; uVar5 = uVar5 - 1) {
      ArmorPlate__ArmorPlate((ArmorPlate *)this_00,0.0);
      this_00 = (Vec3_L_int_G_ *)&this_00->Y;
      pVVar1 = param_1;
    }
  }
  *(Vec3_L_int_G_ **)this = pVVar1;
  puVar2 = (undefined4 *)ArmorPlate__ArmorPlate((ArmorPlate *)&param_1,0.0);
  iVar4 = 0;
  iVar6 = *(int *)(this + 0xc) * *(int *)(this + 8) * *(int *)(this + 4);
  if (0 < iVar6) {
    do {
      *(undefined4 *)(*(int *)this + iVar4 * 4) = *puVar2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar6);
  }
  return;
}





//==== 0051f1d0 InitializeCustomVertexObjects ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void  ArmorMatrix__InitializeCustomVertexObjects(struct util__Range_L_int_G_) */

void  ArmorMatrix__InitializeCustomVertexObjects(ArmorMatrix *this,Range_L_int_G_ param_1)

{
  undefined8 stack0xfffffffc;
  ReferenceController *this_00;
  ReferenceController *this_01;
  Range_L_double_G_ RVar1;
  Range_L_double_G_ RVar2;
  bool bVar3;
  int iVar4;
  ReferenceControllerRegistry *pRVar5;
  SharedPtr_L_VertexBufferObject_G_ SVar6;
  VertexBufferObject *pVVar7;
  int *piVar8;
  undefined1 local_3c [4];
  void *local_38;
  bool local_2c;
  undefined **local_28;
  undefined4 *local_24;
  int *local_20;
  ReferenceController *local_1c;
  Range_L_double_G_ local_18;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((this->ArmorModels).IsValidData == false) {
    *(uint32_t *)&local_28 = (uint32_t)(uintptr_t)(&vftable_2);
    local_24 = (undefined4 *)0x0;
    local_20 = (int *)0x0;
    local_1c = (ReferenceController *)0x1;
    local_24 = (undefined4 *)(uintptr_t)(port_op_new(4));
    if (local_24 == (undefined4 *)0x0) {
      local_24 = (undefined4 *)0x0;
    }
    else {
      *local_24 = 0;
    }
    iVar4 = 0;
    if (0 < (int)local_1c) {
      do {
        local_24[iVar4] = 0;
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_1c);
    }
    *(uint32_t *)&local_28 = (uint32_t)(uintptr_t)(&vftable_103);
    util__Maybe_L_util__AutoDarray_L_util__tuple2_L_VertexBufferObject_CVertexBufferObject_G___G___G___Maybe_L_util__AutoDarray_L_util__tuple2_L_VertexBufferObject_CVertexBufferObject_G___G___G_
              ((Maybe_L_util__AutoDarray_L_util__tuple2_L_VertexBufferObject_CVertexBufferObject_G___G___G_ *)
               local_3c,(AutoDarray_L_util__tuple2_L_VertexBufferObject_CVertexBufferObject_G___G_ *)
                        &local_28);
    util__Darray_L_Module_P_G___op_assign
              ((Darray_L_Module_P_G_ *)&this->ArmorModels,(Darray_L_class_Module_P_G_ *)local_3c);
    (this->ArmorModels).IsValidData = local_2c;
    *(undefined4 *)&(local_3c) = (undefined4)(uintptr_t)&vftable_103;;
    util__AutoDarray_struct_util__tuple2_class_VertexBufferObject_class_VertexBufferObject_____FreeAll
              ((AutoDarray_L_util__tuple2_L_VertexBufferObject_CVertexBufferObject_G___G_ *)local_3c);
    *(uint32_t *)&local_3c = (uint32_t)&vftable_2;
    if (local_38 != (void *)0x0) {
      port_op_delete(local_38);
    }
    local_38 = (void *)0x0;
    *(uint32_t *)&local_3c = (uint32_t)&vftable;
    *(uint32_t *)&local_28 = (uint32_t)(uintptr_t)(&vftable_103);
    util__AutoDarray_struct_util__tuple2_class_VertexBufferObject_class_VertexBufferObject_____FreeAll
              ((AutoDarray_L_util__tuple2_L_VertexBufferObject_CVertexBufferObject_G___G_ *)&local_28);
    *(uint32_t *)&local_28 = (uint32_t)(uintptr_t)(&vftable_2);
    if (local_24 != (undefined4 *)0x0) {
      port_op_delete(local_24);
    }
  }
  CraftBlueprintArmor__GetPlateRangeHeights_m(this->Parent,&local_18,param_1);
  (this->ArmorRange).Lower = param_1.Lower;
  (this->ArmorRange).Upper = param_1.Upper;
  if ((this->ArmorModels).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  (*(uint32_t *)((char *)&(RVar1.Lower) + 4)) = (*(uint32_t *)((char *)&(local_18.Lower) + 4));
  RVar1.Lower = local_18.Lower;
  RVar1.Upper = local_18.Upper;
  (*(uint32_t *)((char *)&(RVar1.Upper) + 4)) = (*(uint32_t *)((char *)&(local_18.Upper) + 4));
  CraftBlueprintArmor__GenerateArmorVertexObjects(this->Parent,RVar1,&(this->ArmorModels).Data);
  (*(uint32_t *)((char *)&(RVar2.Lower) + 4)) = local_18.Lower;
  *(uint32_t *)&RVar2.Lower = (uint32_t)(uintptr_t)(&local_20);
  RVar2.Upper = (*(uint32_t *)((char *)&(local_18.Lower) + 4));
  (*(uint32_t *)((char *)&(RVar2.Upper) + 4)) = local_18.Upper;
  SVar6 = CraftBlueprintArmor__GenerateStrutModel(RVar2);
  pVVar7 = (this->StrutModel).Pointer;
  this_00 = (this->StrutModel).Controller;
  (this->StrutModel).Pointer = (VertexBufferObject *)(SVar6.Pointer)->_pad_0x0_0;
  this_01 = (ReferenceController *)(SVar6.Pointer)->_pad_0x4_1;
  (this->StrutModel).Controller = this_01;
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
  }
  if ((this_00 != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__ReleaseStrongReference(this_00), bVar3)) {
    if (pVVar7 != (VertexBufferObject *)0x0) {
      (**(code **)(pVVar7->_pad_0x0_0 + 0x10))(1);
    }
    pRVar5 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar5,pVVar7);
  }
  if ((local_1c != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__ReleaseStrongReference(local_1c), bVar3)) {
    if (local_20 != (int *)0x0) {
      (**(code **)(uintptr_t)(*local_20 + 0x10))(1);
    }
    piVar8 = local_20;
    pRVar5 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar5,piVar8);
  }
  return;
}

//==== 0051f3c0 InitializeCustomVertexObjects_0051f3c0 ====

/* public: void  ArmorMatrix__InitializeCustomVertexObjects(struct util__Range_L_double_G_) */

void  ArmorMatrix__InitializeCustomVertexObjects__o3(ArmorMatrix *this,Range_L_double_G_ param_1)

{
  ReferenceController *this_00;
  ReferenceController *this_01;
  Range_L_double_G_ RVar1;
  Range_L_double_G_ RVar2;
  bool bVar3;
  int iVar4;
  ReferenceControllerRegistry *pRVar5;
  Range_L_int_G_ RVar6;
  SharedPtr_L_VertexBufferObject_G_ SVar7;
  VertexBufferObject *pVVar8;
  int *piVar9;
  undefined1 local_28 [4];
  void *local_24;
  bool local_18;
  undefined **local_14;
  undefined4 *local_10;
  int *local_c;
  ReferenceController *local_8;
  
  if ((this->ArmorModels).IsValidData == false) {
    local_14 = (undefined **)(&vftable_2);
    local_10 = (undefined4 *)0x0;
    local_c = (int *)0x0;
    local_8 = (ReferenceController *)0x1;
    local_10 = (undefined4 *)(uintptr_t)(port_op_new(4));
    if (local_10 == (undefined4 *)0x0) {
      local_10 = (undefined4 *)0x0;
    }
    else {
      *local_10 = 0;
    }
    iVar4 = 0;
    if (0 < (int)local_8) {
      do {
        local_10[iVar4] = 0;
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_8);
    }
    local_14 = &vftable_103;
    util__Maybe_L_util__AutoDarray_L_util__tuple2_L_VertexBufferObject_CVertexBufferObject_G___G___G___Maybe_L_util__AutoDarray_L_util__tuple2_L_VertexBufferObject_CVertexBufferObject_G___G___G_
              ((Maybe_L_util__AutoDarray_L_util__tuple2_L_VertexBufferObject_CVertexBufferObject_G___G___G_ *)
               local_28,(AutoDarray_L_util__tuple2_L_VertexBufferObject_CVertexBufferObject_G___G_ *)
                        &local_14);
    util__Darray_L_Module_P_G___op_assign
              ((Darray_L_Module_P_G_ *)&this->ArmorModels,(Darray_L_class_Module_P_G_ *)local_28);
    (this->ArmorModels).IsValidData = local_18;
    *(undefined4 *)&(local_28) = (undefined4)(uintptr_t)&vftable_103;;
    util__AutoDarray_struct_util__tuple2_class_VertexBufferObject_class_VertexBufferObject_____FreeAll
              ((AutoDarray_L_util__tuple2_L_VertexBufferObject_CVertexBufferObject_G___G_ *)local_28);
    *(uint32_t *)&local_28 = (uint32_t)&vftable_2;
    if (local_24 != (void *)0x0) {
      port_op_delete(local_24);
    }
    local_24 = (void *)0x0;
    *(uint32_t *)&local_28 = (uint32_t)&vftable;
    local_14 = &vftable_103;
    util__AutoDarray_struct_util__tuple2_class_VertexBufferObject_class_VertexBufferObject_____FreeAll
              ((AutoDarray_L_util__tuple2_L_VertexBufferObject_CVertexBufferObject_G___G_ *)&local_14);
    local_14 = (undefined **)(&vftable_2);
    if (local_10 != (undefined4 *)0x0) {
      port_op_delete(local_10);
    }
  }
  bVar3 = CraftBlueprintArmor__HasArmor(this->Parent);
  if (bVar3) {
    (*(uint32_t *)((char *)&(RVar1.Lower) + 4)) = param_1.Lower;
    *(uint32_t *)&RVar1.Lower = (uint32_t)(uintptr_t)(&local_c);
    RVar1.Upper = (*(uint32_t *)((char *)&(param_1.Lower) + 4));
    (*(uint32_t *)((char *)&(RVar1.Upper) + 4)) = param_1.Upper;
    RVar6 = CraftBlueprintArmor__GetPlateRangeIndices(this->Parent,RVar1);
    (this->ArmorRange).Lower = *(int *)RVar6.Lower;
    (this->ArmorRange).Upper = ((int *)RVar6.Lower)[1];
  }
  if ((this->ArmorModels).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  CraftBlueprintArmor__GenerateArmorVertexObjects(this->Parent,param_1,&(this->ArmorModels).Data);
  (*(uint32_t *)((char *)&(RVar2.Lower) + 4)) = param_1.Lower;
  *(uint32_t *)&RVar2.Lower = (uint32_t)(uintptr_t)(&local_c);
  RVar2.Upper = (*(uint32_t *)((char *)&(param_1.Lower) + 4));
  (*(uint32_t *)((char *)&(RVar2.Upper) + 4)) = param_1.Upper;
  SVar7 = CraftBlueprintArmor__GenerateStrutModel(RVar2);
  pVVar8 = (this->StrutModel).Pointer;
  this_00 = (this->StrutModel).Controller;
  (this->StrutModel).Pointer = (VertexBufferObject *)(SVar7.Pointer)->_pad_0x0_0;
  this_01 = (ReferenceController *)(SVar7.Pointer)->_pad_0x4_1;
  (this->StrutModel).Controller = this_01;
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
  }
  if ((this_00 != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__ReleaseStrongReference(this_00), bVar3)) {
    if (pVVar8 != (VertexBufferObject *)0x0) {
      (**(code **)(pVVar8->_pad_0x0_0 + 0x10))(1);
    }
    pRVar5 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar5,pVVar8);
  }
  if ((local_8 != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__ReleaseStrongReference(local_8), bVar3)) {
    if (local_c != (int *)0x0) {
      (**(code **)(uintptr_t)(*local_c + 0x10))(1);
    }
    piVar9 = local_c;
    pRVar5 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar5,piVar9);
  }
  return;
}

//==== 0051f5a0 InitializeMatrix ====


/* public: void __thiscall ArmorMatrix__InitializeMatrix(void) */

void __thiscall ArmorMatrix__InitializeMatrix(ArmorMatrix *this)

{
  undefined8 stack0xfffffffc;
  CraftBlueprintArmor *pCVar1;
  ArmorPlate *pAVar2;
  bool bVar3;
  int iVar4;
  float *pfVar5;
  ArmorTextureHandler *pAVar6;
  ReferenceControllerRegistry *pRVar7;
  ReferenceController *this_00;
  Vec2_L_double_G_ *pVVar8;
  int iVar9;
  int iVar10;
  ArmorTextureHandler *pAVar11;
  ArmorPlate AStack_90;
  ArmorPlate AStack_8c;
  ArmorPlate AStack_88;
  ArmorPlate AStack_84;
  ArmorPlate AStack_80;
  ArmorPlate AStack_7c;
  ArmorPlate AStack_78;
  ArmorPlate AStack_74;
  ArmorPlate AStack_70;
  int iStack_6c;
  int iStack_68;
  ArmorMatrix *pAStack_64;
  int iStack_60;
  int iStack_5c;
  uint uStack_58;
  uint uStack_54;
  int iStack_50;
  TextureInitOptions TStack_4c;
  Vec3_L_int_G_ VStack_24;
  int iStack_18;
  undefined8 uStack_14;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pAStack_64 = this;
  iVar4 = (**(code **)((this->Parent->CraftBlueprintArmorMemoizationHandlerInstance).ResetFunctions.
                       Size + 0xc))();
  if (0 < iVar4) {
    pCVar1 = this->Parent;
    CraftBlueprintArmor__GetArmorPlateCount_Memoize(pCVar1);
    if (*(char *)((pCVar1->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 4) == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    VStack_24.X = *(int *)((int)(pCVar1->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data +
                          0x14);
    VStack_24.Y = *(int *)((pCVar1->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 3);
    iVar4 = *(int *)((int)(pCVar1->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x1c);
    iStack_6c = iVar4;
    VStack_24.Z = iVar4;
    util__Matrix3_struct_ArmorPlate___Initialize
              ((Matrix3_L_struct_ArmorPlate_G_ *)&this->ArmorPlates,&VStack_24);
    iStack_c = 0;
    if (0 < iVar4) {
      iStack_18 = VStack_24.X + -1;
      iVar10 = VStack_24.Y;
      do {
        CraftBlueprintArmor__GetStartEndLayerPlates(this->Parent,(int)&uStack_14);
        CraftBlueprintArmor__GetRadialLayerPlates(this->Parent,(int)&TStack_4c.Mipmaps);
        iStack_68 = TStack_4c.Mipmaps.Data.MaxLevel.Data;
        iStack_60 = TStack_4c.Mipmaps.Data.MinLevel;
        uStack_54 = (*(uint32_t *)((char *)&(TStack_4c.Mipmaps) + 12));
        uStack_58 = (*(uint32_t *)((char *)&(TStack_4c.Mipmaps.Data.MaxLevel) + 4));
        if ((undefined1)TStack_4c.Quality == EightBit) {
          uStack_58 = 0;
          iVar4 = TStack_4c.Mipmaps.Data.MinLevel;
          if (-1 < TStack_4c.Mipmaps.Data.MinLevel + -1) {
            do {
              iStack_50 = 0;
              if (0 < iVar10) {
                do {
                  uStack_54 = iStack_c;
                  if ((this->ArmorPlates).Data == (ArmorPlate *)0x0) {
                    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl"
                                    ,0x343,"IsValid()",(char *)0x0);
                    DebugBreak();
                  }
                  iVar4 = (this->ArmorPlates).Size.Y;
                  iVar10 = (this->ArmorPlates).Size.X;
                  uStack_54 = (iVar4 * uStack_54 + iStack_50) * iVar10 + uStack_58;
                  if (((int)uStack_54 < 0) ||
                     ((this->ArmorPlates).Size.Z * iVar10 * iVar4 <= (int)uStack_54)) {
                    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl"
                                    ,0x345,"Index >= 0 && Index < GetTotalSize()",(char *)0x0);
                    DebugBreak();
                  }
                  pAVar2 = (this->ArmorPlates).Data;
                  pfVar5 = (float *)ArmorPlate__ArmorPlate(&AStack_80,0.0);
                  pAVar2[uStack_54].Thickness_m = *pfVar5;
                  iStack_50 = iStack_50 + 1;
                  iVar4 = iStack_60;
                  iVar10 = VStack_24.Y;
                } while (iStack_50 < VStack_24.Y);
              }
              uStack_58 = uStack_58 + 1;
            } while ((int)uStack_58 <= iVar4 + -1);
          }
        }
        else {
          for (; (int)uStack_58 <= (int)uStack_54; uStack_58 = uStack_58 + 1) {
            iStack_50 = 0;
            if (0 < (int)uStack_14) {
              do {
                iVar4 = iStack_c;
                if ((this->ArmorPlates).Data == (ArmorPlate *)0x0) {
                  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl"
                                  ,0x343,"IsValid()",(char *)0x0);
                  DebugBreak();
                }
                iVar10 = (this->ArmorPlates).Size.Y;
                iVar9 = (this->ArmorPlates).Size.X;
                iStack_5c = (iVar4 * iVar10 + iStack_50) * iVar9 + uStack_58;
                if ((iStack_5c < 0) || ((this->ArmorPlates).Size.Z * iVar9 * iVar10 <= iStack_5c)) {
                  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl"
                                  ,0x345,"Index >= 0 && Index < GetTotalSize()",(char *)0x0);
                  DebugBreak();
                }
                pAVar2 = (this->ArmorPlates).Data;
                pfVar5 = (float *)ArmorPlate__ArmorPlate(&AStack_70,0.0);
                pAVar2[iStack_5c].Thickness_m = *pfVar5;
                iStack_50 = iStack_50 + 1;
              } while (iStack_50 < (int)uStack_14);
            }
            iStack_50 = (int)uStack_14;
            if ((int)uStack_14 <= (int)(*(uint32_t*)((char*)&(uStack_14)+4)) + -1) {
              do {
                iStack_5c = iStack_c;
                if ((this->ArmorPlates).Data == (ArmorPlate *)0x0) {
                  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl"
                                  ,0x343,"IsValid()",(char *)0x0);
                  DebugBreak();
                }
                iVar4 = (this->ArmorPlates).Size.Y;
                iVar10 = (this->ArmorPlates).Size.X;
                iStack_5c = (iVar4 * iStack_5c + iStack_50) * iVar10 + uStack_58;
                if ((iStack_5c < 0) || ((this->ArmorPlates).Size.Z * iVar10 * iVar4 <= iStack_5c)) {
                  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl"
                                  ,0x345,"Index >= 0 && Index < GetTotalSize()",(char *)0x0);
                  DebugBreak();
                }
                pAVar2 = (this->ArmorPlates).Data;
                iVar4 = (**(code **)(this->Parent->CraftBlueprintArmorMemoizationHandlerInstance).
                                    ResetFunctions.Size)();
                pfVar5 = (float *)ArmorPlate__ArmorPlate(&AStack_74,*(double *)(iVar4 + 8));
                pAVar2[iStack_5c].Thickness_m = *pfVar5;
                iStack_50 = iStack_50 + 1;
              } while (iStack_50 <= (int)(*(uint32_t*)((char*)&(uStack_14)+4)) + -1);
            }
            iVar4 = (int)(*(uint32_t*)((char*)&(uStack_14)+4));
            if ((int)(*(uint32_t*)((char*)&(uStack_14)+4)) <= VStack_24.Y + -1) {
              do {
                iStack_5c = iStack_c;
                iStack_50 = iVar4;
                if ((this->ArmorPlates).Data == (ArmorPlate *)0x0) {
                  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl"
                                  ,0x343,"IsValid()",(char *)0x0);
                  DebugBreak();
                }
                iVar10 = (this->ArmorPlates).Size.Y;
                iStack_5c = (iVar10 * iStack_5c + iVar4) * (this->ArmorPlates).Size.X + uStack_58;
                if ((iStack_5c < 0) ||
                   ((this->ArmorPlates).Size.Z * (this->ArmorPlates).Size.X * iVar10 <= iStack_5c))
                {
                  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl"
                                  ,0x345,"Index >= 0 && Index < GetTotalSize()",(char *)0x0);
                  DebugBreak();
                }
                pAVar2 = (this->ArmorPlates).Data;
                pfVar5 = (float *)ArmorPlate__ArmorPlate(&AStack_78,0.0);
                pAVar2[iStack_5c].Thickness_m = *pfVar5;
                iVar4 = iStack_50 + 1;
              } while (iVar4 <= VStack_24.Y + -1);
            }
          }
          uStack_58 = uStack_54 + 1;
          iVar4 = iStack_60;
          iVar10 = VStack_24.Y;
          if ((int)uStack_58 <= iStack_60 + -1) {
            do {
              iStack_50 = 0;
              if (0 < iVar10) {
                do {
                  uStack_54 = iStack_c;
                  if ((this->ArmorPlates).Data == (ArmorPlate *)0x0) {
                    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl"
                                    ,0x343,"IsValid()",(char *)0x0);
                    DebugBreak();
                  }
                  iVar4 = (this->ArmorPlates).Size.Y;
                  iVar10 = (this->ArmorPlates).Size.X;
                  uStack_54 = (iVar4 * uStack_54 + iStack_50) * iVar10 + uStack_58;
                  if (((int)uStack_54 < 0) ||
                     ((this->ArmorPlates).Size.Z * iVar10 * iVar4 <= (int)uStack_54)) {
                    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl"
                                    ,0x345,"Index >= 0 && Index < GetTotalSize()",(char *)0x0);
                    DebugBreak();
                  }
                  pAVar2 = (this->ArmorPlates).Data;
                  pfVar5 = (float *)ArmorPlate__ArmorPlate(&AStack_7c,0.0);
                  pAVar2[uStack_54].Thickness_m = *pfVar5;
                  iStack_50 = iStack_50 + 1;
                  iVar4 = iStack_60;
                  iVar10 = VStack_24.Y;
                } while (iStack_50 < VStack_24.Y);
              }
              uStack_58 = uStack_58 + 1;
            } while ((int)uStack_58 <= iVar4 + -1);
          }
        }
        if (iVar4 <= iStack_68) {
          do {
            iStack_50 = 0;
            if (0 < (int)uStack_14) {
              do {
                uStack_54 = iStack_c;
                if ((this->ArmorPlates).Data == (ArmorPlate *)0x0) {
                  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl"
                                  ,0x343,"IsValid()",(char *)0x0);
                  DebugBreak();
                }
                iVar4 = (this->ArmorPlates).Size.Y;
                iVar10 = (this->ArmorPlates).Size.X;
                uStack_54 = (iVar4 * uStack_54 + iStack_50) * iVar10 + iStack_60;
                if (((int)uStack_54 < 0) ||
                   ((this->ArmorPlates).Size.Z * iVar10 * iVar4 <= (int)uStack_54)) {
                  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl"
                                  ,0x345,"Index >= 0 && Index < GetTotalSize()",(char *)0x0);
                  DebugBreak();
                }
                pAVar2 = (this->ArmorPlates).Data;
                pfVar5 = (float *)ArmorPlate__ArmorPlate(&AStack_84,0.0);
                pAVar2[uStack_54].Thickness_m = *pfVar5;
                iStack_50 = iStack_50 + 1;
              } while (iStack_50 < (int)uStack_14);
            }
            iStack_50 = (int)uStack_14;
            if ((int)uStack_14 <= (int)(*(uint32_t*)((char*)&(uStack_14)+4)) + -1) {
              do {
                uStack_54 = iStack_c;
                if ((this->ArmorPlates).Data == (ArmorPlate *)0x0) {
                  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl"
                                  ,0x343,"IsValid()",(char *)0x0);
                  DebugBreak();
                }
                iVar4 = (this->ArmorPlates).Size.Y;
                iVar10 = (this->ArmorPlates).Size.X;
                uStack_54 = (iVar4 * uStack_54 + iStack_50) * iVar10 + iStack_60;
                if (((int)uStack_54 < 0) ||
                   ((this->ArmorPlates).Size.Z * iVar10 * iVar4 <= (int)uStack_54)) {
                  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl"
                                  ,0x345,"Index >= 0 && Index < GetTotalSize()",(char *)0x0);
                  DebugBreak();
                }
                pAVar2 = (this->ArmorPlates).Data;
                iVar4 = (**(code **)(this->Parent->CraftBlueprintArmorMemoizationHandlerInstance).
                                    ResetFunctions.Size)();
                pfVar5 = (float *)ArmorPlate__ArmorPlate(&AStack_88,*(double *)(iVar4 + 8));
                pAVar2[uStack_54].Thickness_m = *pfVar5;
                iStack_50 = iStack_50 + 1;
              } while (iStack_50 <= (int)(*(uint32_t*)((char*)&(uStack_14)+4)) + -1);
            }
            iVar4 = (int)(*(uint32_t*)((char*)&(uStack_14)+4));
            if ((int)(*(uint32_t*)((char*)&(uStack_14)+4)) <= VStack_24.Y + -1) {
              do {
                uStack_54 = iStack_c;
                iStack_50 = iVar4;
                if ((this->ArmorPlates).Data == (ArmorPlate *)0x0) {
                  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl"
                                  ,0x343,"IsValid()",(char *)0x0);
                  DebugBreak();
                }
                iVar10 = (this->ArmorPlates).Size.Y;
                uStack_54 = (iVar10 * uStack_54 + iVar4) * (this->ArmorPlates).Size.X + iStack_60;
                if (((int)uStack_54 < 0) ||
                   ((this->ArmorPlates).Size.Z * (this->ArmorPlates).Size.X * iVar10 <=
                    (int)uStack_54)) {
                  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl"
                                  ,0x345,"Index >= 0 && Index < GetTotalSize()",(char *)0x0);
                  DebugBreak();
                }
                pAVar2 = (this->ArmorPlates).Data;
                pfVar5 = (float *)ArmorPlate__ArmorPlate(&AStack_8c,0.0);
                pAVar2[uStack_54].Thickness_m = *pfVar5;
                iVar4 = iStack_50 + 1;
              } while (iVar4 <= VStack_24.Y + -1);
            }
            iStack_60 = iStack_60 + 1;
            iVar10 = VStack_24.Y;
          } while (iStack_60 <= iStack_68);
        }
        iStack_50 = iStack_68 + 1;
        iVar4 = VStack_24.Y;
        iVar9 = iStack_18;
        if (iStack_50 <= iStack_18) {
          do {
            iStack_68 = 0;
            if (0 < iVar4) {
              do {
                iVar4 = iStack_68;
                uStack_54 = iStack_c;
                if ((this->ArmorPlates).Data == (ArmorPlate *)0x0) {
                  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl"
                                  ,0x343,"IsValid()",(char *)0x0);
                  DebugBreak();
                }
                iVar10 = (this->ArmorPlates).Size.Y;
                uStack_54 = (iVar10 * uStack_54 + iVar4) * (this->ArmorPlates).Size.X + iStack_50;
                if (((int)uStack_54 < 0) ||
                   ((this->ArmorPlates).Size.Z * (this->ArmorPlates).Size.X * iVar10 <=
                    (int)uStack_54)) {
                  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl"
                                  ,0x345,"Index >= 0 && Index < GetTotalSize()",(char *)0x0);
                  DebugBreak();
                }
                pAVar2 = (this->ArmorPlates).Data;
                pfVar5 = (float *)ArmorPlate__ArmorPlate(&AStack_90,0.0);
                pAVar2[uStack_54].Thickness_m = *pfVar5;
                iStack_68 = iStack_68 + 1;
                iVar4 = VStack_24.Y;
                iVar9 = iStack_18;
              } while (iStack_68 < VStack_24.Y);
            }
            iStack_50 = iStack_50 + 1;
            iVar10 = VStack_24.Y;
          } while (iStack_50 <= iVar9);
        }
        iStack_c = iStack_c + 1;
        iVar4 = iStack_6c;
      } while (iStack_c < iStack_6c);
    }
    iStack_18 = 0;
    if (0 < iVar4) {
      do {
        uStack_14 = 0;
        pAVar6 = (ArmorTextureHandler *)port_op_new(0xe8);
        if (pAVar6 == (ArmorTextureHandler *)0x0) {
          pAVar6 = (ArmorTextureHandler *)0x0;
LAB_0051fdcc:
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                          ,0xd4,"NewPointer",(char *)0x0);
          DebugBreak();
        }
        else {
          memset(pAVar6,0,0);
          pAVar6 = (ArmorTextureHandler *)ArmorTextureHandler__ArmorTextureHandler(pAVar6);
          if (pAVar6 == (ArmorTextureHandler *)0x0) goto LAB_0051fdcc;
        }
        uStack_14 = CONCAT44((*(uint32_t*)((char*)&(uStack_14)+4)),pAVar6);
        pAVar11 = pAVar6;
        pRVar7 = util__ReferenceControllerRegistry__Get();
        this_00 = util__ReferenceControllerRegistry__Register(pRVar7,pAVar11);
        uStack_14 = CONCAT44(this_00,(int)uStack_14);
        if (this_00 != (ReferenceController *)0x0) {
          util__ReferenceController__AddStrongReference(this_00);
        }
        TStack_4c.NearestFiltering = false;
        TStack_4c.TextureR = Repeat;
        TStack_4c.Mipmaps.Data.MinLevel = 0;
        pCVar1 = pAStack_64->Parent;
        TStack_4c.Mipmaps.Data.MaxLevel.Data = 0;
        (*(uint32_t *)((char *)&(TStack_4c.Mipmaps.Data.MaxLevel) + 4)) = (*(uint32_t *)((char *)&(TStack_4c.Mipmaps.Data.MaxLevel) + 4)) & 0xffffff00;
        (*(uint32_t *)((char *)&(TStack_4c.Mipmaps) + 12)) = (*(uint32_t *)((char *)&(TStack_4c.Mipmaps) + 12)) & 0xffffff00;
        TStack_4c.Quality = EightBit;
        TStack_4c.TextureS = Repeat;
        TStack_4c.TextureT = ClampToEdge;
        TStack_4c.Channels = RG;
        CraftBlueprintArmor__GetUnrolledDimensionsOfAllLayers_m_Memoize(pCVar1);
        if ((char)((pCVar1->GetYPlateCountsByLayer_MemoizedValue).Data.Data == '\0')){
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        pVVar8 = (Vec2_L_double_G_ *)(**(code **)(pCVar1->GetArmorPlateCount_MemoizedValue).Data.Y)();
        bVar3 = ArmorTextureHandler__GenerateTexture(pAVar6,*pVVar8,&TStack_4c,false);
        if (!bVar3) {
          util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\crafts\\armormatrix.cpp"
                          ,0x45,"Success",(char *)0x0);
          DebugBreak();
        }
        util__Darray_class_util__SharedPtr_class_ArmorTextureHandler_____Add
                  ((Darray_L_class_util__SharedPtr_L_class_ArmorTextureHandler_G___G_ *)
                   &pAStack_64->TextureHandlers,(SharedPtr_L_class_ArmorTextureHandler_G_ *)&uStack_14);
        if (((*(uint32_t*)((char*)&(uStack_14)+4)) != (ReferenceController *)0x0) &&
           (bVar3 = util__ReferenceController__ReleaseStrongReference((ReferenceController*)((ReferenceController*)((*(uint32_t*)((char*)&(uStack_14)+4))))), bVar3)) {
          if (pAVar6 != (ArmorTextureHandler *)0x0) {
            ArmorTextureHandler___scalar_deleting_destructor(pAVar6,1);
          }
          pRVar7 = util__ReferenceControllerRegistry__Get();
          util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar7,pAVar6);
          uStack_14 = uStack_14 & 0xffffffff00000000;
        }
        iStack_18 = iStack_18 + 1;
      } while (iStack_18 < iStack_6c);
    }
    CraftBlueprintArmor__CacheOffNormals(pAStack_64->Parent);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0051ff20 InstantiateCopy ====


/* public: class util__SharedPtr_L_classArmorMatrix_G_ __thiscall ArmorMatrix__InstantiateCopy(void) */

void __thiscall ArmorMatrix__InstantiateCopy(ArmorMatrix *this)

{
  undefined8 stack0xfffffffc;
  Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G_ *pDVar1;
  float fVar2;
  CraftBlueprintArmor *this_00;
  int *piVar3;
  ArmorMatrix *this_01;
  void *pvVar4;
  ReferenceControllerRegistry *this_02;
  ReferenceController *this_03;
  int iVar5;
  undefined4 *puVar6;
  SharedPtr_L_class_ArmorTextureHandler_G_ *pSVar7;
  int iVar8;
  code *pcVar9;
  int iVar10;
  int *in_stack_00000004;
  void *pvVar11;
  ArmorPlate AStack_30;
  ArmorMatrix *pAStack_2c;
  int iStack_28;
  Vec3_L_int_G_ VStack_24;
  int iStack_18;
  int iStack_14;
  int *piStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piStack_10 = in_stack_00000004;
  in_stack_00000004[0] = 0;
  in_stack_00000004[1] = 0;
  pAStack_2c = this;
  this_01 = (ArmorMatrix *)port_op_new(0x48);
  pcVar9 = DebugBreak_exref;
  if (this_01 == (ArmorMatrix *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    memset(this_01,0,0x48);
    pvVar4 = (void *)ArmorMatrix__ArmorMatrix(this_01,this->Parent);
    if (pvVar4 != (void *)0x0) goto LAB_0051ff96;
  }
  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl",
                  0xd4,"NewPointer",(char *)0x0);
  DebugBreak();
LAB_0051ff96:
  pvVar11 = pvVar4;
  this_02 = util__ReferenceControllerRegistry__Get();
  this_03 = util__ReferenceControllerRegistry__Register(this_02,pvVar11);
  *piStack_10 = (int)pvVar4;
  piStack_10[1] = (int)this_03;
  if (this_03 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_03);
  }
  iVar5 = (**(code **)((this->Parent->CraftBlueprintArmorMemoizationHandlerInstance).ResetFunctions.
                       Size + 0xc))();
  if (0 < iVar5) {
    this_00 = this->Parent;
    CraftBlueprintArmor__GetArmorPlateCount_Memoize(this_00);
    if (*(char *)((this_00->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 4) == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    VStack_24.X = *(int *)((int)(this_00->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data +
                          0x14);
    VStack_24.Y = *(int *)((this_00->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 3);
    iVar5 = *(int *)((int)(this_00->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x1c);
    iStack_28 = iVar5;
    VStack_24.Z = iVar5;
    util__Matrix3_struct_ArmorPlate___Initialize
              ((Matrix3_L_struct_ArmorPlate_G_ *)(*piStack_10 + 4),&VStack_24);
    iStack_18 = 0;
    iVar10 = VStack_24.Y;
    iVar8 = VStack_24.X;
    if (0 < iVar5) {
      do {
        iStack_14 = 0;
        if (0 < iVar10) {
          do {
            iStack_c = 0;
            if (0 < iVar8) {
              do {
                if ((this->ArmorPlates).Data == (ArmorPlate *)0x0) {
                  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl"
                                  ,0x355,"IsValid()",(char *)0x0);
                  (*pcVar9)();
                }
                iVar5 = (this->ArmorPlates).Size.Y;
                iVar10 = (this->ArmorPlates).Size.X;
                iVar8 = (iVar5 * iStack_18 + iStack_14) * iVar10 + iStack_c;
                if ((iVar8 < 0) || ((this->ArmorPlates).Size.Z * iVar10 * iVar5 <= iVar8)) {
                  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl"
                                  ,0x357,"Index >= 0 && Index < GetTotalSize()",(char *)0x0);
                  (*pcVar9)();
                }
                fVar2 = (this->ArmorPlates).Data[iVar8].Thickness_m;
                iVar5 = *piStack_10;
                if (*(int *)(iVar5 + 4) == 0) {
                  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl"
                                  ,0x355,"IsValid()",(char *)0x0);
                  (*pcVar9)();
                }
                iVar10 = (*(int *)(iVar5 + 0xc) * iStack_18 + iStack_14) * *(int *)(iVar5 + 8) +
                         iStack_c;
                if ((iVar10 < 0) ||
                   (*(int *)(iVar5 + 0x10) * *(int *)(iVar5 + 8) * *(int *)(iVar5 + 0xc) <= iVar10))
                {
                  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl"
                                  ,0x357,"Index >= 0 && Index < GetTotalSize()",(char *)0x0);
                  DebugBreak();
                }
                iVar5 = *(int *)(iVar5 + 4);
                puVar6 = (undefined4 *)ArmorPlate__ArmorPlate(&AStack_30,(double)fVar2);
                *(undefined4 *)(iVar5 + iVar10 * 4) = *puVar6;
                iStack_c = iStack_c + 1;
                iVar8 = VStack_24.X;
                pcVar9 = DebugBreak_exref;
              } while (iStack_c < VStack_24.X);
            }
            iStack_14 = iStack_14 + 1;
            iVar10 = VStack_24.Y;
          } while (iStack_14 < VStack_24.Y);
        }
        iStack_18 = iStack_18 + 1;
      } while (iStack_18 < iStack_28);
    }
    pDVar1 = &this->TextureHandlers;
    iStack_c = 0;
    iVar5 = (**(code **)((this->TextureHandlers)._pad_0x0_0 + 0xc))();
    piVar3 = piStack_10;
    if (iStack_c < iVar5) {
      do {
        pSVar7 = (SharedPtr_L_class_ArmorTextureHandler_G_ *)(**(code **)pDVar1->_pad_0x0_0)(&iStack_c);
        util__Darray_class_util__SharedPtr_class_ArmorTextureHandler_____Add
                  ((Darray_L_class_util__SharedPtr_L_class_ArmorTextureHandler_G___G_ *)(*piVar3 + 0x1c),
                   pSVar7);
        iStack_c = iStack_c + 1;
        iVar5 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
        this = pAStack_2c;
      } while (iStack_c < iVar5);
    }
    iVar5 = *piStack_10;
    iVar10 = (**(code **)((this->Parent->CraftBlueprintArmorMemoizationHandlerInstance).
                          ResetFunctions.Size + 0xc))();
    iVar5 = (**(code **)(*(int *)(iVar5 + 0x1c) + 0xc))();
    if (iVar5 != iVar10) {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\crafts\\armormatrix.cpp",
                      0x60,"Copy->TextureHandlers.Num() == Parent->ArmorLayers.Num()",(char *)0x0);
      DebugBreak();
    }
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00520220 IsSingleRing ====


/* public: bool __thiscall ArmorMatrix__IsSingleRing(void)const  */

bool __thiscall ArmorMatrix__IsSingleRing(ArmorMatrix *this)

{
  undefined8 uVar1;
  int iStack_c;
  
  (*(uint32_t*)&(uVar1)) = (this->ArmorPlates).Size.X;
  (*(uint32_t*)((char*)&(uVar1)+4)) = (this->ArmorPlates).Size.Y;
  iStack_c = (int)((ulonglong)uVar1 >> 0x20);
  return iStack_c == 1;
}





//==== 00520240 Render_00520240 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall ArmorMatrix__Render(bool,bool,bool)const  */

void __thiscall ArmorMatrix__Render(ArmorMatrix *this,bool param_1,bool param_2,bool param_3)

{
  undefined8 stack0xfffffffc;
  CraftBlueprintArmor *this_00;
  VertexBufferObject *this_01;
  bool bVar1;
  int iVar2;
  SpacecraftShader *pSVar3;
  undefined4 *puVar4;
  uint uVar5;
  int TVar6;
  int iVar7;
  undefined1 local_21;
  TextureStack local_20;
  undefined4 local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar2 = (**(code **)((this->Parent->CraftBlueprintArmorMemoizationHandlerInstance).ResetFunctions.
                       Size + 0xc))();
  if (0 < iVar2) {
    this_00 = this->Parent;
    CraftBlueprintArmor__GetArmorPlateCount_Memoize(this_00);
    if (*(char *)((this_00->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 4) == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    iVar2 = *(int *)((int)(this_00->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x1c);
    local_21 = 1;
    pSVar3 = SpacecraftShader__GetStatic();
    (**(code **)(pSVar3->_pad_0x0_0 + 100))(&local_21);
    CraftBlueprintArmor__ScaleArmorTexture(this->Parent);
    if (param_2) {
      if (0 < iVar2) {
        local_c = iVar2 + -1;
        puVar4 = (undefined4 *)(**(code **)(this->TextureHandlers)._pad_0x0_0)(&local_c);
        iVar7 = 2;
        TVar6 = Type__TwoDimensional;
        uVar5 = ArmorTextureHandler__GetTexture((ArmorTextureHandler *)*puVar4);
        Graphics__TextureStack__TextureStack(&local_20,uVar5,TVar6,iVar7);
        RenderLayer(this,iVar2 + -1,false,true);
        Graphics__TextureStack___TextureStack(&local_20);
      }
    }
    else {
      local_c = 0;
      if (0 < iVar2) {
        do {
          iVar7 = (**(code **)((this->TextureHandlers)._pad_0x0_0 + 0xc))();
          if (local_c < iVar7) {
            puVar4 = (undefined4 *)(**(code **)(this->TextureHandlers)._pad_0x0_0)(&local_c);
            uVar5 = ArmorTextureHandler__GetTexture((ArmorTextureHandler *)*puVar4);
          }
          else {
            uVar5 = 0xffffffff;
          }
          Graphics__TextureStack__TextureStack(&local_20,uVar5,Type__TwoDimensional,2);
          RenderLayer(this,local_c,true,param_1);
          Graphics__TextureStack___TextureStack(&local_20);
          local_c = local_c + 1;
        } while (local_c < iVar2);
      }
    }
  }
  if (param_3) {
    if (((((this->ArmorModels).IsValidData == false) &&
         (((this->StrutModel).Pointer == (VertexBufferObject *)0x0 ||
          ((this->StrutModel).Controller == (ReferenceController *)0x0)))) ||
        (this_01 = (this->StrutModel).Pointer, this_01 == (VertexBufferObject *)0x0)) ||
       ((this->StrutModel).Controller == (ReferenceController *)0x0)) {
      CraftBlueprintArmor__RenderStruts(this->Parent);
    }
    else {
      bVar1 = VertexBufferObjectInterface__IsGenerated((VertexBufferObjectInterface *)this_01);
      if (bVar1) {
        pSVar3 = SpacecraftShader__GetStatic();
        local_10 = 0x3f800000;
        local_c = 0x3f800000;
        (**(code **)(pSVar3->_pad_0x0_0 + 0x78))(&local_10);
        local_21 = 0;
        pSVar3 = SpacecraftShader__GetStatic();
        (**(code **)(pSVar3->_pad_0x0_0 + 100))(&local_21);
        local_21 = 0;
        pSVar3 = SpacecraftShader__GetStatic();
        (**(code **)(pSVar3->_pad_0x0_0 + 0x68))(&local_21);
        pSVar3 = SpacecraftShader__GetStatic();
        Material__SetupRendering(Material__DefaultMaterial,(Shader *)pSVar3,false);
        VertexBufferObjectInterface__Render
                  ((VertexBufferObjectInterface *)(this->StrutModel).Pointer);
        return;
      }
    }
  }
  return;
}

//==== 00520430 RenderArmorPlateLines ====


/* private: void  ArmorMatrix__RenderArmorPlateLines(struct util__Vec2_L_double_G_,struct
   util__Vec2_L_double_G_,struct util__Vec2_L_double_G_,struct util__Vec2_L_double_G_)const  */

void 
ArmorMatrix__RenderArmorPlateLines
          (ArmorMatrix *this,Vec3_L_double_G_ param_1,Vec2_L_double_G_ param_2,Vec2_L_double_G_ param_3,
          Vec2_L_double_G_ param_4)

{
  undefined8 stack0xfffffffc;
  double dVar1;
  double dVar2;
  double dVar3;
  Vec4_L_double_G_ VVar4;
  Vec4_L_double_G_ VVar5;
  Vec4_L_double_G_ VVar6;
  Vec4_L_double_G_ VVar7;
  Vec4_L_double_G_ VVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  uVar9 = __security_cookie ^ (uint)&stack0xfffffffc;
  dVar11 = (param_4.Y * param_1.X + param_1.X * param_3.Y + param_2.X * param_4.Y +
           param_2.X * param_3.Y) * 0.25 * 0.1;
  dVar13 = (param_4.Y * param_1.Y + param_3.Y * param_1.Y + param_2.Y * param_4.Y +
           param_2.Y * param_3.Y) * 0.25 * 0.1;
  dVar10 = (param_4.X + param_3.X + param_4.X + param_3.X) * 0.25 * 0.1;
  dVar12 = param_2.Y * param_4.Y * 0.9 + dVar13;
  dVar1 = param_3.Y * param_1.Y * 0.9 + dVar13;
  dVar2 = param_3.X * 0.9 + dVar10;
  dVar3 = param_4.Y * param_1.Y * 0.9 + dVar13;
  dVar10 = param_4.X * 0.9 + dVar10;
  dVar13 = param_2.Y * param_3.Y * 0.9 + dVar13;
  VVar4.Z = 0;
  VVar4.X = 0.0;
  VVar4.Y = 0.0;
  VVar4.W = 0x3ff00000;
  Graphics__Normal((*(Vec4_L_double_G_ *)&(VVar4)));
  uVar14 = SUB84(dVar2,0);
  uVar16 = (undefined4)((ulonglong)dVar2 >> 0x20);
  VVar5.Y = SUB84(dVar1,0);
  VVar5.X = param_1.X * param_3.Y * 0.9 + dVar11;
  VVar5.Z = (int)((ulonglong)dVar1 >> 0x20);
  VVar5.Z = uVar14;
  VVar5.W = uVar16;
  Graphics__Vertex(VVar5);
  uVar15 = SUB84(dVar10,0);
  uVar17 = (undefined4)((ulonglong)dVar10 >> 0x20);
  VVar6.Y = SUB84(dVar3,0);
  VVar6.X = param_4.Y * param_1.X * 0.9 + dVar11;
  VVar6.Z = (int)((ulonglong)dVar3 >> 0x20);
  VVar6.Z = uVar15;
  VVar6.W = uVar17;
  Graphics__Vertex(VVar6);
  if (0.0 < param_4.Y) {
    uStack_60 = SUB84(dVar12,0);
    uStack_5c = (undefined4)((ulonglong)dVar12 >> 0x20);
    VVar7.Y = uStack_60;
    VVar7.X = param_2.X * param_4.Y * 0.9 + dVar11;
    VVar7.Z = uStack_5c;
    VVar7.Z = uVar15;
    VVar7.W = uVar17;
    Graphics__Vertex(VVar7);
  }
  uStack_78 = SUB84(dVar13,0);
  uStack_74 = (undefined4)((ulonglong)dVar13 >> 0x20);
  VVar8.Y = uStack_78;
  VVar8.X = param_2.X * param_3.Y * 0.9 + dVar11;
  VVar8.Z = uStack_74;
  VVar8.Z = uVar14;
  VVar8.W = uVar16;
  Graphics__Vertex(VVar8);
  __security_check_cookie(uVar9 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00520680 RenderArmorVisualizer ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall ArmorMatrix__RenderArmorVisualizer(void)const  */

void __thiscall ArmorMatrix__RenderArmorVisualizer(ArmorMatrix *this)

{
  undefined8 stack0xffffff14;
  undefined8 stack0xfffffffc;
  CraftBlueprintArmor *this_00;
  Vec3_L_double_G_ VVar1;
  Vec3_L_double_G_ VVar2;
  Vec3_L_double_G_ VVar3;
  Color CVar4;
  Range_L_double_G_ RVar5;
  Vec4_L_double_G_ VVar6;
  bool bVar7;
  int iVar8;
  double *pdVar9;
  int iVar10;
  ArmorLayerBlueprint *pAVar11;
  Color *this_01;
  Preset PVar12;
  int iVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  Color *__return_storage_ptr__;
  float fVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  char *pcVar23;
  float fVar24;
  float fVar25;
  Color local_c4;
  double local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  Range_L_double_G_ local_68;
  double local_58;
  double local_50;
  int local_48;
  undefined8 local_44;
  undefined8 local_3c;
  int local_34;
  Darray_L_util__Vec2_L_double_G___G_ local_30;
  double local_20;
  int local_18;
  undefined8 local_14;
  TransformStack local_a;
  DrawStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  this_00 = this->Parent;
  CraftBlueprintArmor__GetArmorPlateCount_Memoize(this_00);
  if (*(char *)((this_00->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 4) == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_94 = *(undefined8 *)
              ((int)(this_00->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x14);
  iVar21 = *(int *)((int)(this_00->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x1c);
  iVar8 = (**(code **)((this->Parent->CraftBlueprintArmorMemoizationHandlerInstance).ResetFunctions.
                       Size + 0xc))();
  if ((0 < iVar8) && (0 < iVar21)) {
    Graphics__TransformStack__TransformStack(&local_a,Style__Default);
    local_20 = CraftBlueprintArmor__GetTotalArmorHeight_m(this->Parent);
    Graphics__Translate(0.0,0.0,(local_20 / -1000.0) * 0.5);
    Graphics__DrawStack__DrawStack(&local_9,7);
    local_30._pad_0x0_0 = 0;
    local_30.Data = (Vec2_L_double_G_ *)0x0;
    local_30.Size = 0;
    local_30.Capacity = 0;
    CraftBlueprintArmor__GetSplinePointsPerArmorPlate_m(this->Parent,&local_30,iVar21 + -1);
    CraftBlueprintArmor__GetPlateRangeHeights_m(this->Parent,&local_68,this->ArmorRange);
    iVar20 = 0x520787;
    RVar5.Upper = local_68.Upper;
    RVar5.Lower = local_68.Lower;
    (*(uint32_t *)((char *)&(RVar5.Upper) + 4)) = (*(uint32_t *)((char *)&(local_68.Upper) + 4));
    iVar21 = local_68.Lower;
    iVar8 = (*(uint32_t *)((char *)&(local_68.Lower) + 4));
    iVar22 = local_68.Upper;
    dVar18 = CraftBlueprintArmor__GetMinOrMaxArmorRadiusAtHeight_m(this->Parent,RVar5,0.0,false);
    local_48 = local_30.Size + -1;
    local_18 = 0;
    local_50 = (dVar18 * 0.05) / 1000.0;
    if (0 < local_48) {
      iVar10 = (int)local_94;
      do {
        *(uint32_t *)&local_34 = 0;
        if (-1 < local_18 + -1) {
          *(uint32_t *)&local_34 = local_18 + -1;
        }
        pdVar9 = (double *)(**(code **)local_30._pad_0x0_0)();
        local_20 = *pdVar9;
        local_14 = pdVar9[1];
        pdVar9 = (double *)(**(code **)local_30._pad_0x0_0)();
        *(uint32_t *)&local_44 = *pdVar9 / 1000.0;
        *(uint32_t *)&local_34 = local_18 + 1;
        *(uint32_t *)&local_3c = pdVar9[1] / 1000.0;
        pcVar23 = (char *)0x520828;
        pdVar9 = (double *)(**(code **)local_30._pad_0x0_0)();
        dVar16 = local_44 - local_20 / 1000.0;
        dVar15 = *pdVar9 / 1000.0;
        dVar17 = local_3c - local_14 / 1000.0;
        dVar18 = pdVar9[1] / 1000.0 - local_3c;
        local_78 = local_50;
        if (-dVar16 <= dVar17) {
          if (dVar16 <= dVar17) {
            local_78 = 0.0;
          }
          else {
            local_78 = -local_50;
          }
        }
        local_80 = local_50;
        if (local_44 <= 0.0) {
          local_80 = 0.0;
        }
        *(uint32_t *)&local_58 = local_50;
        if (-(dVar15 - local_44) <= dVar18) {
          if (dVar15 - local_44 <= dVar18) {
            *(uint32_t *)&local_58 = 0.0;
          }
          else {
            *(uint32_t *)&local_58 = -local_50;
          }
        }
        local_70 = 0.0;
        if (0.0 < dVar15) {
          local_70 = local_50;
        }
        local_78 = local_78 + local_3c;
        *(uint32_t *)&local_34 = 0;
        local_80 = local_80 + local_44;
        local_70 = local_70 + dVar15;
        *(uint32_t *)&local_58 = pdVar9[1] / 1000.0 + local_58;
        if (0 < iVar10) {
          local_88 = (double)iVar10;
          do {
            *(uint32_t *)&local_44 = (double)CONCAT44(local_34 + 1,(undefined4)local_44);
            local_14 = ((double)local_34 / local_88) * -6.283185307179586;
            local_20 = ((double)(local_34 + 1) / local_88) * -6.283185307179586;
            *(uint32_t *)&local_3c = CraftBlueprintArmor__GetPolygonalArmorScaling(this->Parent,local_14);
            local_68.Lower = util__Cos((double *)&local_14);
            local_68.Lower = local_68.Lower * local_3c;
            local_68.Upper = util__Sin((double *)&local_14);
            local_68.Upper = local_68.Upper * local_3c;
            *(uint32_t *)&local_3c = CraftBlueprintArmor__GetPolygonalArmorScaling(this->Parent,local_20);
            local_14 = util__Cos(&local_20);
            fVar24 = 7.534057e-39;
            local_20 = util__Sin(&local_20);
            local_a4 = local_14 * local_3c;
            iVar13 = 0;
            local_14 = (double)((ulonglong)local_14 & 0xffffffff);
            uStack_9c = local_20 * local_3c;
            *(uint64_t *)&local_3c = (double)((ulonglong)local_3c & 0xffffffff);
            iVar10 = (**(code **)((this->Parent->CraftBlueprintArmorMemoizationHandlerInstance).
                                  ResetFunctions.Size + 0xc))();
            if (0 < iVar10) {
              do {
                if (((*(uint32_t *)(uintptr_t)*(uint32_t *)((char *)&(local_3c)+4)) != (ArmorPlate *)0x0) &&
                   (bVar7 = ArmorPlate__IsDestroyed((ArmorPlate*)((ArmorPlate*)((*(uint32_t *)(uintptr_t)*(uint32_t *)((char *)&(local_3c)+4))))), !bVar7)) break;
                (*(uint32_t *)(uintptr_t)*(uint32_t *)((char *)&(local_3c)+4)) = (uint32_t)(uintptr_t)((ArmorPlate *)local_18);
                if ((this->ArmorPlates).Data == (ArmorPlate *)0x0) {
                  fVar24 = 1.1827e-42;
                  pcVar23 = 
                  "\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl";
                  iVar22 = 0x520a68;
                  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl"
                                  ,0x34c,"IsValid()",(char *)0x0);
                  DebugBreak();
                }
                iVar10 = (this->ArmorPlates).Size.Y;
                iVar13 = (this->ArmorPlates).Size.X;
                iVar14 = (iVar10 * (*(uint32_t*)((char*)&(local_14)+4)) + (int)(*(uint32_t *)(uintptr_t)*(uint32_t *)((char *)&(local_3c)+4))) * iVar13 + local_34;
                if ((iVar14 < 0) || ((this->ArmorPlates).Size.Z * iVar13 * iVar10 <= iVar14)) {
                  fVar24 = 1.1855e-42;
                  pcVar23 = 
                  "\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl";
                  iVar22 = 0x520aad;
                  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl"
                                  ,0x34e,"Index >= 0 && Index < GetTotalSize()",(char *)0x0);
                  DebugBreak();
                }
                *(uint32_t *)&local_3c = (double)CONCAT44((this->ArmorPlates).Data + iVar14,(undefined4)local_3c);
                iVar13 = (*(uint32_t*)((char*)&(local_14)+4)) + 1;
                local_14 = (double)CONCAT44(iVar13,(undefined4)local_14);
                iVar10 = (**(code **)((this->Parent->CraftBlueprintArmorMemoizationHandlerInstance).
                                      ResetFunctions.Size + 0xc))();
              } while (iVar13 < iVar10);
            }
            bVar7 = ArmorPlate__IsDestroyed((ArmorPlate*)((ArmorPlate*)((*(uint32_t *)(uintptr_t)*(uint32_t *)((char *)&(local_3c)+4)))));
            if (!bVar7) {
              *(uint32_t *)&local_34 = iVar13 + -1;
              pAVar11 = (ArmorLayerBlueprint *)
                        (**(code **)(this->Parent->CraftBlueprintArmorMemoizationHandlerInstance).
                                    ResetFunctions.Size)();
              fVar25 = 7.534468e-39;
              bVar7 = ArmorPlate__IsDamaged((ArmorPlate*)((ArmorPlate*)((*(uint32_t *)(uintptr_t)*(uint32_t *)((char *)&(local_3c)+4)))),pAVar11);
              PVar12 = Preset__MildGreen;
              if (bVar7) {
                PVar12 = Preset__Orange;
              }
              __return_storage_ptr__ = (Color *)&stack0xffffff14;
              fVar19 = 0.5;
              this_01 = (Color *)util__Color__Color(&local_c4,PVar12,1.0);
              util__Color__ReAlphaed(this_01,__return_storage_ptr__,fVar19);
              CVar4._pad_0x4_1 = iVar21;
              CVar4._pad_0x0_0 = iVar20;
              CVar4._pad_0x8_2 = iVar8;
              CVar4._pad_0xc_3 = iVar22;
              CVar4.Hue_degrees = (double)(uintptr_t)((float)(int)(uintptr_t)(pcVar23));
              CVar4.Saturation = fVar24;
              CVar4.Value = fVar25;
              CVar4.Alpha = (double)(uintptr_t)((float)(int)(uintptr_t)(pAVar11));
              glColor(CVar4);
              local_c4._pad_0x0_0 = (int)&vftable_5;
              if ((void *)local_c4._pad_0x4_1 != (void *)0x0) {
                port_op_delete((void *)local_c4._pad_0x4_1);
              }
              pcVar23 = (char *)(uintptr_t)(SUB84(local_58,0));
              iVar20 = SUB84(local_78,0);
              iVar21 = (int)((ulonglong)local_78 >> 0x20);
              iVar8 = SUB84(local_80,0);
              iVar22 = (int)((ulonglong)local_80 >> 0x20);
              VVar1.Y = local_68.Upper;
              VVar1.X = local_68.Lower;
              VVar1.Z = (*(uint32_t *)((char *)&(local_68.Upper) + 4));
              VVar2.Y = (undefined4)uStack_9c;
              VVar2.X = local_a4;
              VVar2.Z = (*(uint32_t*)((char*)&(uStack_9c)+4));
              VVar3.Y = iVar8;
              VVar3.X = local_78;
              VVar3.Z = iVar22;
              VVar6.Y = SUB84(local_70,0);
              VVar6.X = local_58;
              VVar6.Z = (float)((ulonglong)local_70 >> 0x20);
              RenderArmorPlateLines(this,VVar1,VVar2,VVar3,VVar6);
            }
            *(uint32_t *)&(local_34) = (*(uint32_t*)((char*)&(local_44)+4));
            iVar10 = (int)local_94;
          } while ((*(uint32_t*)((char*)&(local_44)+4)) < (int)local_94);
        }
        local_18 = local_18 + 1;
      } while (local_18 < local_48);
    }
    local_30._pad_0x0_0 = (int)&vftable_12;
    if (local_30.Data != (Vec2_L_double_G_ *)0x0) {
      port_op_delete(local_30.Data);
    }
    local_30.Data = (Vec2_L_double_G_ *)0x0;
    local_30._pad_0x0_0 = (int)&vftable;
    Graphics__DrawStack___DrawStack(&local_9);
    Graphics__TransformStack___TransformStack(&local_a);
  }
  return;
}

//==== 00520c30 RenderDebug ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall ArmorMatrix__RenderDebug(void)const  */

void __thiscall ArmorMatrix__RenderDebug(ArmorMatrix *this)

{
  undefined8 stack0xfffffea4;
  undefined8 stack0xfffffffc;
  ArmorPlate *this_00;
  CraftBlueprintArmor *this_01;
  int iVar1;
  int iVar2;
  Vec3_L_double_G_ VVar3;
  Vec4_L_float_G_ VVar4;
  Vec4_L_double_G_ VVar5;
  Vec4_L_double_G_ VVar6;
  Color CVar7;
  Vec4_L_double_G_ VVar8;
  bool bVar9;
  char cVar10;
  double *pdVar11;
  int iVar12;
  Color *this_02;
  int iVar13;
  code *pcVar14;
  double dVar15;
  Color *__return_storage_ptr__;
  float fVar16;
  int in_stack_fffffea4;
  int iVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  double *pdVar22;
  double local_12c;
  double dStack_124;
  undefined8 local_11c;
  undefined1 local_114 [12];
  int iStack_108;
  float fStack_104;
  float fStack_100;
  undefined8 local_fc;
  double local_f4;
  undefined8 uStack_ec;
  double local_e4;
  undefined8 uStack_dc;
  undefined8 local_d4;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  int local_a0;
  int local_9c;
  int local_98;
  double local_94;
  int local_8c;
  double local_88;
  Darray_L_util__Vec2_L_double_G___G_ local_80;
  ArmorLayerBlueprint local_70;
  double local_38;
  double dStack_30;
  double local_28;
  undefined8 local_20;
  int local_18;
  double local_14;
  TransformStack local_a;
  DrawStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  glLineWidth();
  Graphics__TransformStack__TransformStack(&local_a,Style__Default);
  local_14 = CraftBlueprintArmor__GetTotalArmorHeight_m(this->Parent);
  iVar18 = 0;
  iVar19 = 0;
  iVar17 = 0x520c94;
  Graphics__Translate(0.0,0.0,(local_14 / -1000.0) * 0.5);
  this_01 = this->Parent;
  CraftBlueprintArmor__GetArmorPlateCount_Memoize(this_01);
  pcVar14 = DebugBreak_exref;
  if (*(char *)((this_01->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 4) == '\0') {
    iVar19 = 0x520cc2;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_a0 = *(int *)((int)(this_01->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x1c)
  ;
  local_d4 = *(undefined8 *)
              ((int)(this_01->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x14);
  local_8c = 0;
  if (0 < local_a0) {
    do {
      iVar13 = local_8c;
      local_80._pad_0x0_0 = 0;
      local_80.Data = (Vec2_L_double_G_ *)0x0;
      local_80.Size = 0;
      local_80.Capacity = 0;
      CraftBlueprintArmor__GetSplinePointsPerArmorPlate_m(this->Parent,&local_80,local_8c);
      CraftBlueprintArmor__GetArmorBlueprintForLayer(this->Parent,&local_70,iVar13);
      local_9c = local_80.Size + -1;
      local_18 = 0;
      if (0 < local_9c) {
        do {
          pdVar11 = (double *)(**(code **)local_80._pad_0x0_0)();
          local_c0 = *pdVar11 / 1000.0;
          local_20 = (double)CONCAT44(local_18 + 1,(undefined4)local_20);
          local_b8 = pdVar11[1] / 1000.0;
          pdVar11 = (double *)(**(code **)local_80._pad_0x0_0)();
          local_b0 = *pdVar11 / 1000.0;
          local_a8 = pdVar11[1] / 1000.0;
          if (0 < (int)local_d4) {
            local_c8 = (double)(int)local_d4;
            iVar13 = 0;
            do {
              local_98 = iVar13 + 1;
              local_20 = ((double)iVar13 / local_c8) * -6.283185307179586;
              local_14 = ((double)local_98 / local_c8) * -6.283185307179586;
              local_94 = CraftBlueprintArmor__GetPolygonalArmorScaling(this->Parent,local_20);
              local_88 = util__Cos((double *)&local_20);
              local_20 = util__Sin((double *)&local_20);
              local_f4 = local_94 * local_88;
              uStack_ec = local_94 * local_20;
              local_88 = CraftBlueprintArmor__GetPolygonalArmorScaling(this->Parent,local_14);
              local_94 = util__Cos(&local_14);
              local_14 = util__Sin(&local_14);
              local_e4 = local_88 * local_94;
              uStack_dc = local_88 * local_14;
              local_20 = (double)CONCAT44(local_18,(undefined4)local_20);
              iVar12 = local_18;
              if ((this->ArmorPlates).Data == (ArmorPlate *)0x0) {
                iVar19 = 0x520ee7;
                util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl"
                                ,0x34c,"IsValid()",(char *)0x0);
                (*pcVar14)();
                iVar12 = (*(uint32_t*)((char*)&(local_20)+4));
              }
              iVar1 = (this->ArmorPlates).Size.Y;
              iVar2 = (this->ArmorPlates).Size.X;
              iVar13 = (iVar1 * local_8c + iVar12) * iVar2 + iVar13;
              if ((iVar13 < 0) || ((this->ArmorPlates).Size.Z * iVar2 * iVar1 <= iVar13)) {
                iVar19 = 0x520f2a;
                util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl"
                                ,0x34e,"Index >= 0 && Index < GetTotalSize()",(char *)0x0);
                DebugBreak();
              }
              this_00 = (this->ArmorPlates).Data + iVar13;
              bVar9 = ArmorPlate__IsDestroyed(this_00);
              if (!bVar9) {
                bVar9 = ArmorPlate__IsDamaged(this_00,&local_70);
                if (bVar9) {
                  local_88 = ArmorPlate__GetDamagePercent(this_00,&local_70);
                  dVar15 = (1.0 - local_88) * 0.5 + local_88;
                }
                else {
                  dVar15 = 0.0;
                }
                if (bVar9) {
                  local_12c = dVar15;
                  pdVar11 = &local_12c;
                  dStack_124 = 1.0 - dVar15;
                  local_11c = 0;
                }
                else {
                  pdVar11 = (double *)(local_114 + 8);
                  (*(uint32_t*)((char*)&(local_114)+8)) = 0;
                  iStack_108 = 0;
                  fStack_104 = 0.0;
                  fStack_100 = 1.875;
                  (*(uint32_t*)&(local_fc)) = 0.0;
                  (*(uint32_t*)((char*)&(local_fc)+4)) = 0.0;
                }
                local_38 = *pdVar11;
                dStack_30 = pdVar11[1];
                *(uint32_t *)&local_28 = pdVar11[2];
                local_88 = util__Abs(&dStack_30);
                local_94 = util__Abs(&local_38);
                pdVar11 = &local_28;
                fVar20 = 7.536281e-39;
                local_14 = util__Abs(pdVar11);
                if (local_88 <= local_94) {
                  pdVar22 = &local_38;
                  fVar21 = 7.536382e-39;
                  local_88 = util__Abs(pdVar22);
                  cVar10 = '\0';
                  if (local_88 < local_14) {
                    cVar10 = '\x02';
                  }
                }
                else {
                  pdVar22 = &dStack_30;
                  fVar21 = 7.536327e-39;
                  local_88 = util__Abs(pdVar22);
                  cVar10 = (local_88 < local_14) + '\x01';
                }
                dVar15 = local_38;
                if (((cVar10 != '\0') && (dVar15 = dStack_30, cVar10 != '\x01')) &&
                   (dVar15 = local_38, cVar10 == '\x02')) {
                  dVar15 = local_28;
                }
                local_38 = local_38 / dVar15;
                __return_storage_ptr__ = (Color *)&stack0xfffffea4;
                fVar16 = 0.0;
                dStack_30 = dStack_30 / dVar15;
                *(uint32_t *)&local_28 = local_28 / dVar15;
                VVar4.Y = (float)dStack_30;
                VVar4.X = (float)local_38;
                VVar4.Z = (float)local_28;
                this_02 = (Color *)(uintptr_t)(util__Color__FromRGB((Color *)local_114,VVar4.X,VVar4.Y,VVar4.Z,1.0f));
                util__Color__ReAlphaed(this_02,__return_storage_ptr__,fVar16);
                CVar7._pad_0x4_1 = iVar17;
                CVar7._pad_0x0_0 = in_stack_fffffea4;
                CVar7._pad_0x8_2 = iVar18;
                CVar7._pad_0xc_3 = iVar19;
                CVar7.Hue_degrees = fVar20;
                CVar7.Saturation = (double)(uintptr_t)((float)(int)(uintptr_t)(pdVar11));
                CVar7.Value = fVar21;
                CVar7.Alpha = (double)(uintptr_t)((float)(int)(uintptr_t)(pdVar22));
                glColor(CVar7);
                (*(uint32_t*)&(local_114)) = (uint32_t)(uintptr_t)(&vftable_5);
                if ((void *)(*(uint32_t*)((char*)&(local_114)+4)) != (void *)0x0) {
                  port_op_delete((void *)(*(uint32_t*)((char*)&(local_114)+4)));
                }
                Graphics__DrawStack__DrawStack(&local_9,2);
                in_stack_fffffea4 = SUB84(local_b8,0);
                iVar17 = (int)((ulonglong)local_b8 >> 0x20);
                iVar18 = SUB84(local_c0,0);
                iVar19 = (int)((ulonglong)local_c0 >> 0x20);
                VVar3.Y = (undefined4)uStack_ec;
                VVar3.X = local_f4;
                VVar3.Z = (*(uint32_t*)((char*)&(uStack_ec)+4));
                VVar5.Y = (undefined4)uStack_dc;
                VVar5.X = local_e4;
                VVar5.Z = (*(uint32_t*)((char*)&(uStack_dc)+4));
                VVar6.Y = iVar18;
                VVar6.X = local_b8;
                VVar6.Z = iVar19;
                VVar8.Y = SUB84(local_b0,0);
                VVar8.X = local_a8;
                VVar8.Z = (float)((ulonglong)local_b0 >> 0x20);
                RenderArmorPlateLines(this,VVar3,VVar5,VVar6,VVar8);
                Graphics__DrawStack___DrawStack(&local_9);
              }
              iVar13 = local_98;
              pcVar14 = DebugBreak_exref;
            } while (local_98 < (int)local_d4);
          }
          local_18 = local_18 + 1;
          iVar13 = local_8c;
        } while (local_18 < local_9c);
      }
      local_80._pad_0x0_0 = (int)&vftable_12;
      if (local_80.Data != (Vec2_L_double_G_ *)0x0) {
        port_op_delete(local_80.Data);
      }
      local_8c = iVar13 + 1;
      local_80.Data = (Vec2_L_double_G_ *)0x0;
      local_80._pad_0x0_0 = (int)&vftable;
    } while (local_8c < local_a0);
  }
  Graphics__TransformStack___TransformStack(&local_a);
  return;
}

//==== 00521230 RenderLayer_00521230 ====


/* private: void __thiscall ArmorMatrix__RenderLayer(int,bool,bool)const  */

void __thiscall ArmorMatrix__RenderLayer(ArmorMatrix *this,int param_1,bool param_2,bool param_3)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  WeakPtr_L_struct_CustomTexture_G_ *pWVar2;
  SpacecraftShader *pSVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined3 in_stack_00000009;
  undefined3 in_stack_0000000d;
  ReferenceController *pRStack_54;
  ArmorLayerBlueprint AStack_50;
  TextureStack TStack_18;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (((this->ArmorModels).IsValidData == false) &&
     (((this->StrutModel).Pointer == (VertexBufferObject *)0x0 ||
      ((this->StrutModel).Controller == (ReferenceController *)0x0)))) {
    CraftBlueprintArmor__RenderLayer(this->Parent,param_1,param_2,param_3);
    __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if ((this->ArmorModels).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (**(code **)((int)(uintptr_t)*(uint32_t *)&((this->ArmorModels).Data) + 0xc))();
  if (param_1 < iVar1) {
    iVar1 = 1;
    pWVar2 = (WeakPtr_L_struct_CustomTexture_G_ *)CraftBlueprintArmor__GetArmorTexture();
    Graphics__TextureStack__TextureStack_class_util__WeakPtr_struct_CustomTexture
              (&TStack_18,pWVar2,iVar1);
    if (pRStack_54 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(pRStack_54);
    }
    CraftBlueprintArmor__GetArmorBlueprintForLayer(this->Parent,&AStack_50,param_1);
    if (AStack_50.Composition != (Material *)0x0) {
      pSVar3 = SpacecraftShader__GetStatic();
      Material__SetupRendering(AStack_50.Composition,(Shader *)pSVar3,false);
      if (param_3 != false) {
        if ((this->ArmorModels).IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x12,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        puVar4 = (undefined4 *)(**(code **)&((this->ArmorModels).Data))(&param_1);
        VertexBufferObjectInterface__Render((VertexBufferObjectInterface *)*puVar4);
      }
      if (param_2 != false) {
        if ((this->ArmorModels).IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x12,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        piVar5 = (int *)(**(code **)&((this->ArmorModels).Data))(&param_1);
        VertexBufferObjectInterface__Render((VertexBufferObjectInterface *)(*piVar5 + 0xa0));
      }
    }
    Graphics__TextureStack___TextureStack(&TStack_18);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00521390 RenderLayerSimple_00521390 ====


/* public: void __thiscall ArmorMatrix__RenderLayerSimple(int,bool,bool)const  */

void __thiscall
ArmorMatrix__RenderLayerSimple(ArmorMatrix *this,int param_1,bool param_2,bool param_3)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined3 in_stack_00000009;
  undefined3 in_stack_0000000d;
  ArmorLayerBlueprint AStack_40;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (((this->ArmorModels).IsValidData == false) &&
     (((this->StrutModel).Pointer == (VertexBufferObject *)0x0 ||
      ((this->StrutModel).Controller == (ReferenceController *)0x0)))) {
    CraftBlueprintArmor__RenderLayerSimple(this->Parent,param_1,param_2,param_3);
    __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if ((this->ArmorModels).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (**(code **)((int)(uintptr_t)*(uint32_t *)&((this->ArmorModels).Data) + 0xc))();
  if (param_1 < iVar1) {
    CraftBlueprintArmor__GetArmorBlueprintForLayer(this->Parent,&AStack_40,param_1);
    if (AStack_40.Composition != (Material *)0x0) {
      if (param_3 != false) {
        if ((this->ArmorModels).IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x12,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        puVar2 = (undefined4 *)(**(code **)&((this->ArmorModels).Data))(&param_1);
        VertexBufferObjectInterface__Render((VertexBufferObjectInterface *)*puVar2);
      }
      if (param_2 != false) {
        if ((this->ArmorModels).IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x12,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        piVar3 = (int *)(**(code **)&((this->ArmorModels).Data))(&param_1);
        VertexBufferObjectInterface__Render((VertexBufferObjectInterface *)(*piVar3 + 0xa0));
      }
    }
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 005214b0 RenderSimple_005214b0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall ArmorMatrix__RenderSimple(bool,bool,bool)const  */

void __thiscall ArmorMatrix__RenderSimple(ArmorMatrix *this,bool param_1,bool param_2,bool param_3)

{
  undefined8 stack0xfffffffc;
  CraftBlueprintArmor *this_00;
  VertexBufferObject *this_01;
  bool bVar1;
  Shader *pSVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int TVar6;
  int iVar7;
  TextureStack local_20;
  int local_10;
  ShaderStack local_a;
  CullStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pSVar2 = (Shader *)SpacecraftShadowShader__GetStatic();
  Graphics__ShaderStack__ShaderStack(&local_a,pSVar2);
  Graphics__CullStack__CullStack(&local_9,(uint)param_1);
  iVar3 = (**(code **)((this->Parent->CraftBlueprintArmorMemoizationHandlerInstance).ResetFunctions.
                       Size + 0xc))();
  if (0 < iVar3) {
    this_00 = this->Parent;
    CraftBlueprintArmor__GetArmorPlateCount_Memoize(this_00);
    if (*(char *)((this_00->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 4) == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    iVar3 = *(int *)((int)(this_00->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x1c);
    if (param_2) {
      if (0 < iVar3) {
        local_10 = iVar3 + -1;
        puVar4 = (undefined4 *)(**(code **)(this->TextureHandlers)._pad_0x0_0)(&local_10);
        iVar7 = 0;
        TVar6 = Type__TwoDimensional;
        uVar5 = ArmorTextureHandler__GetTexture((ArmorTextureHandler *)*puVar4);
        Graphics__TextureStack__TextureStack(&local_20,uVar5,TVar6,iVar7);
        RenderLayerSimple(this,iVar3 + -1,false,true);
        Graphics__TextureStack___TextureStack(&local_20);
      }
    }
    else {
      local_10 = 0;
      if (0 < iVar3) {
        do {
          iVar7 = (**(code **)((this->TextureHandlers)._pad_0x0_0 + 0xc))();
          if (local_10 < iVar7) {
            puVar4 = (undefined4 *)(**(code **)(this->TextureHandlers)._pad_0x0_0)(&local_10);
            uVar5 = ArmorTextureHandler__GetTexture((ArmorTextureHandler *)*puVar4);
          }
          else {
            uVar5 = 0xffffffff;
          }
          Graphics__TextureStack__TextureStack(&local_20,uVar5,Type__TwoDimensional,0);
          RenderLayerSimple(this,local_10,true,param_1);
          Graphics__TextureStack___TextureStack(&local_20);
          local_10 = local_10 + 1;
        } while (local_10 < iVar3);
      }
    }
  }
  if (param_3) {
    if (((((this->ArmorModels).IsValidData == false) &&
         (((this->StrutModel).Pointer == (VertexBufferObject *)0x0 ||
          ((this->StrutModel).Controller == (ReferenceController *)0x0)))) ||
        (this_01 = (this->StrutModel).Pointer, this_01 == (VertexBufferObject *)0x0)) ||
       ((this->StrutModel).Controller == (ReferenceController *)0x0)) {
      CraftBlueprintArmor__RenderStrutsSimple(this->Parent);
    }
    else {
      bVar1 = VertexBufferObjectInterface__IsGenerated((VertexBufferObjectInterface *)this_01);
      if (bVar1) {
        VertexBufferObjectInterface__Render
                  ((VertexBufferObjectInterface *)(this->StrutModel).Pointer);
      }
    }
  }
  CullStack__dtor(&local_9);
  Graphics__ShaderStack___ShaderStack(&local_a);
  return;
}

//==== 00521640 SetAll_00521640 ====


/* public: virtual void  util__Darray_L_structutil__tuple2_L_enumOrder__Type_Cint_G___G___SetAll(struct util__tuple2_L_enumOrder__Type_Cint_G_ const &) */

void 
util__Darray_struct_util__tuple2_enum_Order__Type_int_____SetAll
          (Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *this,
          tuple2_L_enum_Order__Type_Cint_G_ *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this + 4);
  if (puVar1 != puVar1 + *(int *)(this + 8) * 2) {
    do {
      *puVar1 = *(undefined4 *)param_1;
      puVar1[1] = *(undefined4 *)(param_1 + 4);
      puVar1 = puVar1 + 2;
    } while (puVar1 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 8));
  }
  return;
}





//==== 00521680 SetSize_00521680 ====


/* private: void  util__Darray_L_structutil__tuple2_L_enumOrder__Type_Cint_G__G___SetSize(int
   const &) */

void 
util__Darray_struct_util__tuple2_enum_Order__Type_int_____SetSize
          (Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar2 = *param_1;
  if (((iVar2 < 1) && (0x3ffffffe < iVar2)) || ((iVar2 < 0x40000000 && (-1 < iVar2)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.inl",0x2a5,
              "Between(value, 0, DARRAY_MAX_SIZE)",(char *)0x0);
    DebugBreak();
    iVar2 = *param_1;
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  iVar4 = 0x3fffffff;
  if (iVar2 < 0x3fffffff) {
    iVar4 = iVar2;
  }
  if (((iVar4 < *(int *)(this + 8)) && (iVar2 = *(int *)(this + 4), iVar2 != 0)) &&
     (puVar3 = (undefined4 *)(iVar2 + iVar4 * 8),
     puVar3 != (undefined4 *)(iVar2 + *(int *)(this + 8) * 8))) {
    do {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3 = puVar3 + 2;
    } while (puVar3 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 8));
  }
  *(int *)(this + 8) = iVar4;
  return;
}





//==== 00521720 SetSize_00521720 ====


/* private: void  util__Darray_L_classutil__SharedPtr_L_classArmorTextureHandler_G___G___SetSize(int const &) */

void 
util__Darray_class_util__SharedPtr_class_ArmorTextureHandler_____SetSize
          (Darray_L_class_util__SharedPtr_L_class_ArmorTextureHandler_G___G_ *this,int *param_1)

{
  ReferenceController *this_00;
  bool bVar1;
  int iVar2;
  ReferenceControllerRegistry *this_01;
  int iVar3;
  undefined4 *puVar4;
  ArmorTextureHandler *this_02;
  
  iVar2 = *param_1;
  if (((iVar2 < 1) && (0x3ffffffe < iVar2)) || ((iVar2 < 0x40000000 && (-1 < iVar2)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.inl",0x2a5,
              "Between(value, 0, DARRAY_MAX_SIZE)",(char *)0x0);
    DebugBreak();
    iVar2 = *param_1;
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  iVar3 = 0x3fffffff;
  if (iVar2 < 0x3fffffff) {
    iVar3 = iVar2;
  }
  if (((iVar3 < *(int *)(this + 8)) && (iVar2 = *(int *)(this + 4), iVar2 != 0)) &&
     (puVar4 = (undefined4 *)(iVar2 + iVar3 * 8),
     puVar4 != (undefined4 *)(iVar2 + *(int *)(this + 8) * 8))) {
    do {
      this_00 = (ReferenceController *)puVar4[1];
      this_02 = (ArmorTextureHandler *)*puVar4;
      *puVar4 = 0;
      puVar4[1] = 0;
      if ((this_00 != (ReferenceController *)0x0) &&
         (bVar1 = ReferenceController__ReleaseStrongReference(this_00), bVar1)) {
        if (this_02 != (ArmorTextureHandler *)0x0) {
          ArmorTextureHandler___scalar_deleting_destructor(this_02,1);
        }
        this_01 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
        ReferenceControllerRegistry__PointerWasDestroyed(this_01,this_02);
      }
      puVar4 = puVar4 + 2;
    } while (puVar4 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 8));
    *(int *)(this + 8) = iVar3;
    return;
  }
  *(int *)(this + 8) = iVar3;
  return;
}





//==== 00521800 Tick_00521800 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall ArmorMatrix__Tick(double,bool)const  */

void __thiscall ArmorMatrix__Tick(ArmorMatrix *this,double param_1,bool param_2)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  undefined4 *puVar2;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar1 = (**(code **)((this->TextureHandlers)._pad_0x0_0 + 0xc))();
  if (local_c < iVar1) {
    do {
      puVar2 = (undefined4 *)(**(code **)(this->TextureHandlers)._pad_0x0_0)(&local_c);
      if (param_2) {
        ArmorTextureHandler__CoolTexture((ArmorTextureHandler *)*puVar2,param_1);
      }
      ArmorTextureHandler__ResolveDamageScars((ArmorTextureHandler *)*puVar2,this->Parent);
      local_c = local_c + 1;
      iVar1 = (**(code **)((this->TextureHandlers)._pad_0x0_0 + 0xc))();
    } while (local_c < iVar1);
  }
  return;
}

//==== 00521fd0 SetWhiteNoiseTextures_ParticleShader__ ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* void __cdecl SetWhiteNoiseTextures_L_classParticleShader_P_G_(class ParticleShader *) */

void __cdecl SetWhiteNoiseTextures_class_ParticleShader(ParticleShader *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  Darray_L_int_G_ local_18;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_18._pad_0x0_0 = 0;
  local_18.Data = (int *)0x0;
  local_18.Size = 0;
  local_18.Capacity = 0;
  ProcGenTextureManager__GetWhiteNoiseSamplerIDs(&local_18);
  iVar1 = param_1->_pad_0x0_0;
  local_1c = 0;
  uVar2 = (**(code **)local_18._pad_0x0_0)(&local_1c);
  (**(code **)(uintptr_t)(iVar1 + 0x58))(uVar2);
  iVar1 = param_1->_pad_0x0_0;
  local_1c = 1;
  uVar2 = (**(code **)local_18._pad_0x0_0)(&local_1c);
  (**(code **)(uintptr_t)(iVar1 + 0x5c))(uVar2);
  iVar1 = param_1->_pad_0x0_0;
  local_1c = 2;
  uVar2 = (**(code **)local_18._pad_0x0_0)(&local_1c);
  (**(code **)(uintptr_t)(iVar1 + 0x60))(uVar2);
  iVar1 = param_1->_pad_0x0_0;
  local_1c = 3;
  uVar2 = (**(code **)local_18._pad_0x0_0)(&local_1c);
  (**(code **)(uintptr_t)(iVar1 + 100))(uVar2);
  iVar1 = param_1->_pad_0x0_0;
  local_1c = 4;
  uVar2 = (**(code **)local_18._pad_0x0_0)(&local_1c);
  (**(code **)(uintptr_t)(iVar1 + 0x68))(uVar2);
  iVar1 = param_1->_pad_0x0_0;
  local_1c = 5;
  uVar2 = (**(code **)local_18._pad_0x0_0)(&local_1c);
  (**(code **)(uintptr_t)(iVar1 + 0x6c))(uVar2);
  iVar1 = param_1->_pad_0x0_0;
  local_1c = 6;
  uVar2 = (**(code **)local_18._pad_0x0_0)(&local_1c);
  (**(code **)(uintptr_t)(iVar1 + 0x70))(uVar2);
  iVar1 = param_1->_pad_0x0_0;
  local_1c = 7;
  uVar2 = (**(code **)local_18._pad_0x0_0)(&local_1c);
  (**(code **)(uintptr_t)(iVar1 + 0x74))(uVar2);
  iVar1 = param_1->_pad_0x0_0;
  local_1c = 8;
  uVar2 = (**(code **)local_18._pad_0x0_0)(&local_1c);
  (**(code **)(uintptr_t)(iVar1 + 0x78))(uVar2);
  iVar1 = param_1->_pad_0x0_0;
  local_1c = 9;
  uVar2 = (**(code **)local_18._pad_0x0_0)(&local_1c);
  (**(code **)(uintptr_t)(iVar1 + 0x7c))(uVar2);
  iVar1 = param_1->_pad_0x0_0;
  local_1c = 10;
  uVar2 = (**(code **)local_18._pad_0x0_0)(&local_1c);
  (**(code **)(uintptr_t)(iVar1 + 0x80))(uVar2);
  local_18._pad_0x0_0 = (int)&vftable_11;
  if (local_18.Data != (int *)0x0) {
    port_op_delete(local_18.Data);
  }
  return;
}

//==== 00522150 ArmorTextureHandler ====

/* public: __thiscall ArmorTextureHandler__ArmorTextureHandler(void) */

ArmorTextureHandler * __thiscall ArmorTextureHandler__ArmorTextureHandler(ArmorTextureHandler *this)

{
  int iVar1;
  DamageScar *pDVar2;
  void *pvVar3;
  double *pdVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  
  Framebuffer__Framebuffer((Framebuffer *)this);
  (this->Texture)._pad_0x0_0 = (int)&vftable_110;
  *(ArmorTextureHandler **)((int)&(this->Size_m).X + 4) = this;
  *(undefined1 *)&(this->Size_m).Y = 0;
  *(undefined4 *)((int)&(this->Size_m).Y + 4) = 0;
  *(undefined4 *)&this->IsPainted = 0;
  this->TextureS = Repeat;
  this->TextureT = Repeat;
  *(undefined4 *)&this->CooledOffThisFrame = 0;
  (this->PendingDamageScars)._pad_0x0_0 = 0;
  *(undefined1 *)&(this->PendingDamageScars).Data = 0;
  *(undefined1 *)&(this->PendingDamageScars).Size = 0;
  (this->PendingDamageScars).Capacity = 0;
  (this->PendingDestructionScars)._pad_0x0_0 = 0;
  (this->PendingDestructionScars).Data = (DamageScar *)0x0;
  (this->PendingDestructionScars).Size = 0;
  (this->PendingDestructionScars).Capacity = 0;
  *(undefined1 *)&(this->SavedDamageScars)._pad_0x0_0 = 0;
  *(undefined1 *)&(this->SavedDamageScars).Capacity = 0;
  (this->SavedDestructionScars)._pad_0x0_0 = (int)&vftable_90;
  (this->SavedDestructionScars).Data = (DamageScar *)0x0;
  (this->SavedDestructionScars).Size = 0;
  (this->SavedDestructionScars).Capacity = 5;
  pDVar2 = (DamageScar *)(uintptr_t)(port_op_new(0xa0));
  if (pDVar2 == (DamageScar *)0x0) {
    pDVar2 = (DamageScar *)0x0;
  }
  else {
    iVar7 = 5;
    pdVar4 = &pDVar2->Radius_m;
    do {
      *(undefined4 *)&(((DamageScar *)(pdVar4 + -2))->ParametricLocation).X = 0;
      *(undefined4 *)((int)pdVar4 + -0xc) = 0;
      *(undefined4 *)(pdVar4 + -1) = 0;
      *(undefined4 *)((int)pdVar4 + -4) = 0;
      *(undefined4 *)pdVar4 = 0;
      *(undefined4 *)((int)pdVar4 + 4) = 0;
      *(undefined4 *)(pdVar4 + 1) = 0;
      *(undefined4 *)((int)pdVar4 + 0xc) = 0;
      iVar7 = iVar7 + -1;
      pdVar4 = pdVar4 + 4;
    } while (iVar7 != 0);
  }
  iVar7 = 0;
  (this->SavedDestructionScars).Data = pDVar2;
  if (0 < (this->SavedDestructionScars).Capacity) {
    iVar5 = 0;
    do {
      pDVar2 = (this->SavedDestructionScars).Data;
      iVar7 = iVar7 + 1;
      puVar6 = (undefined4 *)((int)&(pDVar2->ParametricLocation).X + iVar5);
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6 = (undefined4 *)((int)&pDVar2->Radius_m + iVar5);
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      iVar5 = iVar5 + 0x20;
    } while (iVar7 < (this->SavedDestructionScars).Capacity);
  }
  this[1].Texture._pad_0x0_0 = (int)&vftable_90;
  this[1].Texture._pad_0x4_1 = 0;
  this[1].Texture._pad_0x8_2 = 0;
  this[1].Texture._pad_0xc_3 = 5;
  pvVar3 = (void *)(uintptr_t)(port_op_new(0xa0));
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    iVar7 = 5;
    puVar6 = (undefined4 *)((int)pvVar3 + 0x10);
    do {
      puVar6[-4] = 0;
      puVar6[-3] = 0;
      puVar6[-2] = 0;
      puVar6[-1] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      iVar7 = iVar7 + -1;
      puVar6 = puVar6 + 8;
    } while (iVar7 != 0);
  }
  iVar7 = 0;
  this[1].Texture._pad_0x4_1 = (int)pvVar3;
  if (0 < this[1].Texture._pad_0xc_3) {
    iVar5 = 0;
    do {
      iVar1 = this[1].Texture._pad_0x4_1;
      iVar5 = iVar5 + 0x20;
      iVar7 = iVar7 + 1;
      puVar6 = (undefined4 *)(iVar1 + -0x20 + iVar5);
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6 = (undefined4 *)(iVar1 + -0x10 + iVar5);
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
    } while (iVar7 < this[1].Texture._pad_0xc_3);
  }
  this[1].Texture._pad_0x10_4 = (int)&vftable_90;
  this[1].Texture._pad_0x14_5 = 0;
  this[1].Texture._pad_0x18_6 = 0;
  this[1].Texture._pad_0x1c_7 = 5;
  pvVar3 = (void *)(uintptr_t)(port_op_new(0xa0));
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    iVar7 = 5;
    puVar6 = (undefined4 *)((int)pvVar3 + 0x10);
    do {
      puVar6[-4] = 0;
      puVar6[-3] = 0;
      puVar6[-2] = 0;
      puVar6[-1] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      iVar7 = iVar7 + -1;
      puVar6 = puVar6 + 8;
    } while (iVar7 != 0);
  }
  iVar7 = 0;
  this[1].Texture._pad_0x14_5 = (int)pvVar3;
  if (0 < this[1].Texture._pad_0x1c_7) {
    iVar5 = 0;
    do {
      iVar1 = this[1].Texture._pad_0x14_5;
      iVar5 = iVar5 + 0x20;
      iVar7 = iVar7 + 1;
      puVar6 = (undefined4 *)(iVar1 + -0x20 + iVar5);
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6 = (undefined4 *)(iVar1 + -0x10 + iVar5);
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
    } while (iVar7 < this[1].Texture._pad_0x1c_7);
  }
  this[1].Texture._pad_0x20_8 = (int)&vftable_90;
  this[1].Texture._pad_0x24_9 = 0;
  this[1].Texture._pad_0x28_10 = 0;
  this[1].Texture.ParentHandler = (ArmorTextureHandler *)0x5;
  pvVar3 = (void *)(uintptr_t)(port_op_new(0xa0));
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    iVar7 = 5;
    puVar6 = (undefined4 *)((int)pvVar3 + 0x10);
    do {
      puVar6[-4] = 0;
      puVar6[-3] = 0;
      puVar6[-2] = 0;
      puVar6[-1] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      iVar7 = iVar7 + -1;
      puVar6 = puVar6 + 8;
    } while (iVar7 != 0);
  }
  iVar7 = 0;
  this[1].Texture._pad_0x24_9 = (int)pvVar3;
  if (0 < (int)this[1].Texture.ParentHandler) {
    iVar5 = 0;
    do {
      iVar1 = this[1].Texture._pad_0x24_9;
      iVar5 = iVar5 + 0x20;
      iVar7 = iVar7 + 1;
      puVar6 = (undefined4 *)(iVar1 + -0x20 + iVar5);
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6 = (undefined4 *)(iVar1 + -0x10 + iVar5);
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
    } while (iVar7 < (int)this[1].Texture.ParentHandler);
  }
  return this;
}

//==== 00522440 FramebufferInitOptions ====


/* public: __thiscall FramebufferInitOptions__FramebufferInitOptions(void) */

FramebufferInitOptions * __thiscall
FramebufferInitOptions__FramebufferInitOptions(FramebufferInitOptions *this)

{
  this->UseDepthBuffer = false;
  this->BufferCount = Count__One;
  (this->TextureOptions).NearestFiltering = false;
  (this->TextureOptions).TextureS = Repeat;
  (this->TextureOptions).TextureT = Repeat;
  (this->TextureOptions).TextureR = Repeat;
  (this->TextureOptions).Channels = RGBA;
  (this->TextureOptions).Mipmaps.Data.MinLevel = 0;
  (this->TextureOptions).Mipmaps.Data.MaxLevel.Data = 0;
  (this->TextureOptions).Mipmaps.Data.MaxLevel.IsValidData = false;
  (this->TextureOptions).Mipmaps.IsValidData = false;
  (this->TextureOptions).Quality = EightBit;
  return this;
}





//==== 00522490 AutoDarray_CustomTexture_ ====


/* public: virtual __thiscall util__AutoDarray_struct_CustomTexture____AutoDarray_struct_CustomTexture(void) */

void __thiscall
util__AutoDarray_struct_CustomTexture____AutoDarray_struct_CustomTexture(AutoDarray_L_struct_CustomTexture_G_ *this)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 4);
  *(undefined ***)this = (undefined **)(&vftable_111);
  if (piVar1 != piVar1 + *(int *)(this + 8)) {
    do {
      if ((int *)*piVar1 != (int *)0x0) {
        (**(code **)(*(int *)*piVar1 + 0x10))(1);
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != (int *)(*(int *)(this + 4) + *(int *)(this + 8) * 4));
  }
  *(undefined ***)this = (undefined **)(&vftable_2);
  if (*(void **)(this + 4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 4));
  }
  *(undefined ***)this = (undefined **)(&vftable);
  *(undefined4 *)(this + 4) = 0;
  return;
}





//==== 005224f0 operator__005224f0 ====


/* public: class util__Darray_L_structMomentOfInertia__Particle_G_ &  util__Darray_struct_MomentOfInertia__Particle___operator(class util__Darray_L_structMomentOfInertia__Particle_G_ const
   &) */

Darray_L_struct_MomentOfInertia__Particle_G_ * 
util__Darray_struct_MomentOfInertia__Particle___operator
          (Darray_L_struct_MomentOfInertia__Particle_G_ *this,
          Darray_L_struct_MomentOfInertia__Particle_G_ *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Darray_L_struct_MomentOfInertia__Particle_G_ *pDVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  
  pDVar5 = param_1;
  param_1 = (Darray_L_struct_MomentOfInertia__Particle_G_ *)(**(code **)(*(int *)param_1 + 0xc))();
  Darray_L_struct_util__Line2_L_double_G___G___SetSize
            ((Darray_L_struct_util__Line2_L_double_G___G_ *)this,(int *)&param_1);
  iVar6 = (**(code **)(*(int *)pDVar5 + 0xc))();
  if (iVar6 == 0) {
    (**(code **)(*(int *)this + 0x10))();
    return this;
  }
  uVar9 = *(uint *)(this + 8);
  if ((int)uVar9 < 0) {
    param_1 = (Darray_L_struct_MomentOfInertia__Particle_G_ *)0x0;
    Darray_L_struct_util__Line2_L_double_G___G___SetSize
              ((Darray_L_struct_util__Line2_L_double_G___G_ *)this,(int *)&param_1);
    uVar9 = *(uint *)(this + 8);
  }
  if (0x3fffffff < (int)uVar9) {
    param_1 = (Darray_L_struct_MomentOfInertia__Particle_G_ *)0x3fffffff;
    Darray_L_struct_util__Line2_L_double_G___G___SetSize
              ((Darray_L_struct_util__Line2_L_double_G___G_ *)this,(int *)&param_1);
    uVar9 = *(uint *)(this + 8);
  }
  uVar10 = *(uint *)(this + 0xc);
  if ((int)uVar10 < (int)uVar9) {
    if (uVar10 == 0) {
      *(uint *)(this + 0xc) = uVar9;
      uVar10 = uVar9;
    }
    if ((int)uVar10 < (int)uVar9) {
      do {
        uVar10 = uVar10 * 2;
      } while ((int)uVar10 < (int)uVar9);
      *(uint *)(this + 0xc) = uVar10;
    }
    if (0x3fffffff < (int)uVar10) {
      *(undefined4 *)(this + 0xc) = 0x3fffffff;
      uVar10 = 0x3fffffff;
    }
    if (*(void **)(this + 4) != (void *)0x0) {
      port_op_delete(*(void **)(this + 4));
      uVar10 = *(uint *)(this + 0xc);
    }
    *(undefined4 *)(this + 4) = 0;
    puVar7 = (undefined4 *)
             port_op_new(-(uint)((int)((ulonglong)uVar10 * 0x20 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar10 * 0x20));
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else if (uVar10 != 0) {
      puVar8 = puVar7 + 4;
      do {
        puVar8[-4] = 0;
        puVar8[-3] = 0;
        puVar8[-2] = 0;
        puVar8[-1] = 0;
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        puVar8[3] = 0;
        uVar10 = uVar10 - 1;
        puVar8 = puVar8 + 8;
      } while (uVar10 != 0);
      *(undefined4 **)(this + 4) = puVar7;
      goto LAB_0052260f;
    }
    *(undefined4 **)(this + 4) = puVar7;
  }
  else {
    puVar7 = *(undefined4 **)(this + 4);
  }
LAB_0052260f:
  puVar8 = *(undefined4 **)(pDVar5 + 4);
  if (puVar8 != puVar8 + *(int *)(pDVar5 + 8) * 8) {
    do {
      uVar2 = puVar8[1];
      uVar3 = puVar8[2];
      uVar4 = puVar8[3];
      *puVar7 = *puVar8;
      puVar7[1] = uVar2;
      puVar7[2] = uVar3;
      puVar7[3] = uVar4;
      puVar1 = puVar8 + 4;
      uVar2 = puVar8[5];
      uVar3 = puVar8[6];
      uVar4 = puVar8[7];
      puVar8 = puVar8 + 8;
      puVar7[4] = *puVar1;
      puVar7[5] = uVar2;
      puVar7[6] = uVar3;
      puVar7[7] = uVar4;
      puVar7 = puVar7 + 8;
    } while (puVar8 != (undefined4 *)(*(int *)(pDVar5 + 8) * 0x20 + *(int *)(pDVar5 + 4)));
  }
  return this;
}





//==== 00522970 scalar_deleting_destructor_00522970 ====


/* public: virtual void * __thiscall util__AutoDarray_L_structCustomTexture_G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__AutoDarray_struct_CustomTexture____scalar_deleting_destructor
          (AutoDarray_L_struct_CustomTexture_G_ *this,uint param_1)

{
  util__AutoDarray_struct_CustomTexture____AutoDarray_struct_CustomTexture(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 005229a0 scalar_deleting_destructor_005229a0 ====


/* public: virtual void * __thiscall ArmorTextureFramebuffer:: 0 scalardeletingdestructor(unsigned
   int) */

void * __thiscall
ArmorTextureFramebuffer___scalar_deleting_destructor(ArmorTextureFramebuffer *this,uint param_1)

{
  Framebuffer___Framebuffer((Framebuffer *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x60);
  }
  return this;
}





//==== 00522c60 CheckSize_00522c60 ====


/* private: bool  util__Darray_L_structutil__Plane_L_double_G__G___CheckSize(int) */

bool 
util__Darray_struct_util__Plane_double_____CheckSize
          (Darray_L_struct_util__Plane_L_double_G___G_ *this,int param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  bool bVar11;
  undefined4 *puStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar7 = *(uint *)(this + 8);
  bVar11 = -1 < (int)uVar7;
  bVar2 = !bVar11;
  if (bVar2) {
    puStack_c = (undefined4 *)0x0;
    Darray_L_struct_util__Line2_L_double_G___G___SetSize
              ((Darray_L_struct_util__Line2_L_double_G___G_ *)this,(int *)&puStack_c);
    uVar7 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar2;
  bVar2 = (int)uVar7 < 0x40000000;
  if (!bVar2) {
    puStack_c = (undefined4 *)0x3fffffff;
    Darray_L_struct_util__Line2_L_double_G___G___SetSize
              ((Darray_L_struct_util__Line2_L_double_G___G_ *)this,(int *)&puStack_c);
    uVar7 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar9 = *(uint *)(this + 0xc);
  if ((int)uVar7 <= (int)uVar9) {
    return bVar2 && bVar11;
  }
  if (uVar9 == 0) {
    *(uint *)(this + 0xc) = uVar7;
    uVar9 = uVar7;
  }
  if ((int)uVar9 < (int)uVar7) {
    do {
      uVar9 = uVar9 * 2;
    } while ((int)uVar9 < (int)uVar7);
    *(uint *)(this + 0xc) = uVar9;
  }
  if (0x3fffffff < (int)uVar9) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar9 = 0x3fffffff;
  }
  puStack_c = (undefined4 *)
              port_op_new(-(uint)((int)((ulonglong)uVar9 * 0x20 >> 0x20) != 0) |
                             (uint)((ulonglong)uVar9 * 0x20));
  if (puStack_c == (undefined4 *)0x0) {
    puStack_c = (undefined4 *)0x0;
  }
  else if (uVar9 != 0) {
    puVar6 = puStack_c + 4;
    do {
      puVar6[-4] = 0;
      puVar6[-3] = 0;
      puVar6[-2] = 0;
      puVar6[-1] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      uVar9 = uVar9 - 1;
      puVar6 = puVar6 + 8;
    } while (uVar9 != 0);
  }
  puVar6 = *(undefined4 **)(this + 4);
  if (puVar6 != (undefined4 *)0x0) {
    iVar1 = *(int *)(this + 8);
    puVar8 = puVar6;
    puVar10 = puStack_c;
    if (puVar6 != puVar6 + param_1 * 8) {
      do {
        if (puVar10 == puStack_c + iVar1 * 8) break;
        uVar3 = puVar8[1];
        uVar4 = puVar8[2];
        uVar5 = puVar8[3];
        *puVar10 = *puVar8;
        puVar10[1] = uVar3;
        puVar10[2] = uVar4;
        puVar10[3] = uVar5;
        puVar6 = puVar8 + 4;
        uVar3 = puVar8[5];
        uVar4 = puVar8[6];
        uVar5 = puVar8[7];
        puVar8 = puVar8 + 8;
        puVar10[4] = *puVar6;
        puVar10[5] = uVar3;
        puVar10[6] = uVar4;
        puVar10[7] = uVar5;
        puVar6 = *(undefined4 **)(this + 4);
        puVar10 = puVar10 + 8;
      } while (puVar8 != puVar6 + param_1 * 8);
    }
    port_op_delete(puVar6);
    *(undefined4 *)(this + 4) = 0;
  }
  *(undefined4 **)(this + 4) = puStack_c;
  return bStack_5;
}





//==== 00522db0 Clear_00522db0 ====


/* public: virtual void  util__AutoDarray_L_structCustomTexture_G___Clear(void) */

void __thiscall
util__AutoDarray_struct_CustomTexture___Clear(AutoDarray_L_struct_CustomTexture_G_ *this)

{
  int *piVar1;
  AutoDarray_L_struct_CustomTexture_G_ *pAStack_8;
  
  piVar1 = *(int **)(this + 4);
  pAStack_8 = this;
  if (piVar1 != piVar1 + *(int *)(this + 8)) {
    do {
      if ((int *)*piVar1 != (int *)0x0) {
        (**(code **)(*(int *)*piVar1 + 0x10))(1);
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != (int *)(*(int *)(this + 4) + *(int *)(this + 8) * 4));
  }
  pAStack_8 = (AutoDarray_L_struct_CustomTexture_G_ *)0x0;
  Darray_L_class_util__Reflectable_P_G___SetSize
            ((Darray_L_class_util__Reflectable_P_G_ *)this,(int *)&pAStack_8);
  return;
}





//==== 00523140 GetArmorTextureScaleFactor ====


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: static double __cdecl ArmorTextureHandler__GetArmorTextureScaleFactor(struct
   util__Vec2_L_double_G_) */

double ArmorTextureHandler__GetArmorTextureScaleFactor(Vec3_L_double_G_ param_1)

{
  undefined8 stack0xfffffffc;
  Preferences *this;
  double dVar1;
  double dVar2;
  double dVar3;
  double local_18;
  double local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  this = (Preferences *)CapitalShipComponent__GetID();
  local_10 = Preferences__GetArmorTexturePixelsPerMeter(this);
  local_18 = param_1.X * local_10;
  local_10 = param_1.Y * local_10;
  dVar1 = util__Abs(&local_10);
  dVar2 = util__Abs(&local_18);
  dVar3 = local_18;
  if (dVar2 < dVar1) {
    dVar3 = local_10;
  }
  dVar1 = 1.0;
  if (1.0 <= 256.0 / dVar3) {
    dVar1 = 256.0 / dVar3;
  }
  dVar3 = util__Abs(&local_10);
  dVar2 = util__Abs(&local_18);
  if (dVar2 < dVar3) {
    local_18 = local_10;
  }
  if (2048.0 / local_18 <= dVar1) {
    dVar1 = 2048.0 / local_18;
  }
  return dVar1;
}





//==== 00523250 GetDamagePixelsPerMeter__m ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: static double const __cdecl ArmorTextureHandler__GetDamagePixelsPerMeter__m(void) */

double ArmorTextureHandler__GetDamagePixelsPerMeter__m(void)

{
  Preferences *this;
  double dVar1;
  
  this = (Preferences *)CapitalShipComponent__GetID();
  dVar1 = Preferences__GetArmorTexturePixelsPerMeter(this);
  return dVar1 * 0.5;
}





//==== 00523270 GetHoleTexture ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: static struct CustomTexture * __cdecl ArmorTextureHandler__GetHoleTexture(int) */

CustomTexture * __cdecl ArmorTextureHandler__GetHoleTexture(int)

{
  undefined8 stack0xfffffffc;
  Vec3_L_int_G_ VVar1;
  int iVar2;
  undefined4 *puVar3;
  CustomTexture *pCVar4;
  DamageGeneratorShader *pDVar5;
  CustomTexture **ppCVar6;
  Vec2_L_double_G_ *pVVar7;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  int iVar11;
  Vec2_L_double_G_ local_6c;
  TextureStack local_5c;
  TextureInitOptions local_4c;
  Maybe_L_TemporaryFramebuffer_G_ local_24;
  int local_18;
  int local_14;
  ShaderStack local_e;
  BlendStack local_d;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_00964668) &&
     (_Init_thread_header(&DAT_00964668), DAT_00964668 == -1)) {
    DAT_0095f330 = port_op_new(0xc);
    if (DAT_0095f330 == (int *)0x0) {
      DAT_0095f330 = (undefined4)(uintptr_t)((int *)0x0);
    }
    else {
      (*(undefined4 *)(0x0095f330u + (0) * 4)) = 0;
      (*(undefined4 *)(0x0095f330u + (1) * 4)) = 0;
      (*(undefined4 *)(0x0095f330u + (2) * 4)) = 0;
    }
    iVar2 = 0;
    if (0 < DAT_0095f338) {
      do {
        (*(undefined4 *)(0x0095f330u + (iVar2) * 4)) = 0;
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_0095f338);
    }
    PTR__vftable__0095f32c = (undefined *)&vftable_111;
    atexit(FUN_008e90f0);
    _Init_thread_footer(&DAT_00964668);
  }
  if ((0 < param_1) || (param_1 < 2)) {
    if ((param_1 < 3) && (bVar10 = param_1 < 0, !bVar10)) goto LAB_005232d9;
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\crafts\\armortexture.cpp",
                    0x1b2,"Between(ID, 0, GetDamageTextureCount()-1)",(char *)0x0);
    DebugBreak();
  }
  bVar10 = param_1 < 0;
LAB_005232d9:
  if (param_1 == 0 || bVar10) {
    param_1 = 0;
  }
  else if (1 < param_1) {
    param_1 = 2;
  }
  if (DAT_0095f334 == 0) {
LAB_0052334e:
    iVar2 = DAT_0095f334;
    piVar8 = (int *)(uintptr_t)(DAT_0095f330);
    piVar9 = (int *)(uintptr_t)(DAT_0095f330);
    if (DAT_0095f330 != DAT_0095f330 + DAT_0095f334) {
      do {
        if ((int *)*piVar8 != (int *)0x0) {
          (**(code **)(*(int *)*piVar8 + 0x10))(1);
          iVar2 = DAT_0095f334;
          piVar9 = (int *)(uintptr_t)(DAT_0095f330);
        }
        piVar8 = piVar8 + 1;
      } while (piVar8 != piVar9 + iVar2);
    }
    local_c = 0;
    util__Darray_L_util__Reflectable_P_G___SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&PTR__vftable__0095f32c,&local_c);
    local_c = 3;
    do {
      iVar2 = local_c;
      local_4c.TextureR = Repeat;
      local_4c.Mipmaps.Data.MinLevel = 0;
      local_4c.Mipmaps.Data.MaxLevel.Data = 0;
      local_4c.Mipmaps.Data.MaxLevel.IsValidData = false;
      local_4c.Mipmaps.IsValidData = false;
      local_4c.Quality = EightBit;
      local_4c.TextureT = ClampToBorder;
      local_4c.TextureS = ClampToBorder;
      local_4c.Channels = RG;
      local_4c.NearestFiltering = true;
      pCVar4 = (CustomTexture *)(uintptr_t)(port_op_new(0x3c));
      if (pCVar4 == (CustomTexture *)0x0) {
        pCVar4 = (CustomTexture *)0x0;
      }
      else {
        pCVar4 = (CustomTexture *)CustomTexture__CustomTexture(pCVar4);
      }
      local_18 = 0x200;
      local_14 = 0x200;
      CustomTexture__InitializeAndGetTemporaryFramebuffer
                (pCVar4,&local_24,(*(Vec3_L_int_G_ *)cde_zextb(0x20000000200ul,16)),&local_4c);
      if (local_24.IsValidData != false) {
        pDVar5 = DamageGeneratorShader__GetStatic();
        Graphics__ShaderStack__ShaderStack(&local_e,(Shader *)pDVar5);
        Graphics__BlendStack__BlendStack(&local_d,BufferComposite__Overwrite);
        iVar11 = 1;
        iVar2 = ProcGenTextureManager__GetWhiteNoiseTextureCount();
        ppCVar6 = ProcGenTextureManager__GetWhiteNoiseTextures();
        Graphics__TextureStack__TextureStack(&local_5c,ppCVar6,iVar2,iVar11);
        pDVar5 = DamageGeneratorShader__GetStatic();
        (**(code **)(pDVar5->_pad_0x0_0 + 0x4c))(&local_18);
        pDVar5 = DamageGeneratorShader__GetStatic();
        SetWhiteNoiseTextures_class_ParticleShader((ParticleShader *)pDVar5);
        pDVar5 = DamageGeneratorShader__GetStatic();
        iVar2 = pDVar5->_pad_0x0_0;
        pVVar7 = ProcGenTextureManager__GetRandomOffset(&local_6c);
        (**(code **)(uintptr_t)(iVar2 + 0x50))(pVVar7);
        if (local_24.IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        VVar1.Y = local_14;
        VVar1.X = local_18;
        ProcGenTextureManager__GenerateTexture((*(Vec3_L_int_G_ *)&(VVar1)),&local_24.Data);
        Graphics__TextureStack___TextureStack(&local_5c);
        BlendStack__dtor(&local_d);
        Graphics__ShaderStack___ShaderStack(&local_e);
        iVar2 = local_c;
      }
      iVar11 = DAT_0095f334;
      local_c = DAT_0095f334 + 1;
      util__Darray_L_util__Reflectable_P_G___SetSize
                ((Darray_L_util__Reflectable_P_G_ *)&PTR__vftable__0095f32c,&local_c);
      bVar10 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                         ((Darray_L_GraphicsResource__Type_G_ *)&PTR__vftable__0095f32c,iVar11);
      if (bVar10) {
        (*(undefined4 *)(0x0095f330u + (DAT_0095f334 + -1) * 4)) = (int)pCVar4;
      }
      local_c = iVar2 + -1;
    } while (local_c != 0);
    local_c = 0;
  }
  else {
    local_c = 0;
    iVar2 = (**(code **)(uintptr_t)(PTR__vftable__0095f32c + 0xc))();
    if (local_c < iVar2) {
      do {
        puVar3 = (undefined4 *)(**(code **)PTR__vftable__0095f32c)(&local_c);
        bVar10 = CustomTexture__IsInitialized((CustomTexture *)*puVar3);
        if (!bVar10) goto LAB_0052334e;
        local_c = local_c + 1;
        iVar2 = (**(code **)(uintptr_t)(PTR__vftable__0095f32c + 0xc))();
      } while (local_c < iVar2);
    }
  }
  puVar3 = (undefined4 *)(**(code **)PTR__vftable__0095f32c)(&param_1);
  return (CustomTexture *)*puVar3;
}

//==== 005235e0 GetMaximumTexturePixelSize ====


/* public: static int const __cdecl ArmorTextureHandler__GetMaximumTexturePixelSize(void) */

int __cdecl ArmorTextureHandler__GetMaximumTexturePixelSize(void)

{
  return 0x800;
}





//==== 005235f0 GetPixelsPerMeter__m ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: static double const __cdecl ArmorTextureHandler__GetPixelsPerMeter__m(void) */

double ArmorTextureHandler__GetPixelsPerMeter__m(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(uintptr_t) CapitalShipComponent__GetID();
  iVar1 = *(int *)(uVar2 + 0xe8);
  if (iVar1 == 1) {
    return 10.0;
  }
  if (iVar1 == 2) {
    return 15.0;
  }
  if (iVar1 == 3) {
    return 20.0;
  }
  return 5.0;
}





//==== 00523610 GetResourceTypeName_00523610 ====


/* public: virtual class util__Str_L_char_G_ __thiscall Framebuffer__GetResourceTypeName(void)const  */

Str_L_char_G_ * __thiscall
Framebuffer__GetResourceTypeName(Framebuffer *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"Framebuffer");
  return __return_storage_ptr__;
}





//==== 00523690 GetTexture ====

/* public: unsigned int __thiscall ArmorTextureHandler__GetTexture(void)const  */

uint __thiscall ArmorTextureHandler__GetTexture(ArmorTextureHandler *this)

{
  bool bVar1;
  SpacecraftShader *pSVar2;
  Shader *this_00;
  SpacecraftShadowShader *pSVar3;
  uint uVar4;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(uintptr_t)(this);
  pSVar2 = SpacecraftShader__GetStatic();
  bVar1 = Shader__IsInUse((Shader *)pSVar2);
  if (bVar1) {
    bVar1 = Framebuffer__IsInitialized((Framebuffer *)this);
    uStack_8 = (undefined4)(uintptr_t)((ArmorTextureHandler *)CONCAT13(bVar1,(undefined3)uStack_8));
    pSVar2 = SpacecraftShader__GetStatic();
    (**(code **)(pSVar2->_pad_0x0_0 + 0x68))((int)&uStack_8 + 3);
  }
  else {
    this_00 = (Shader *)SpacecraftShadowShader__GetStatic();
    bVar1 = Shader__IsInUse(this_00);
    if (bVar1) {
      bVar1 = Framebuffer__IsInitialized((Framebuffer *)this);
      uStack_8 = (undefined4)(uintptr_t)((ArmorTextureHandler *)CONCAT13(bVar1,(undefined3)uStack_8));
      pSVar3 = SpacecraftShadowShader__GetStatic();
      (**(code **)(*(int *)pSVar3 + 0x4c))((int)&uStack_8 + 3);
    }
  }
  bVar1 = Framebuffer__IsInitialized((Framebuffer *)this);
  if (bVar1) {
    uVar4 = Framebuffer__GetTexture((Framebuffer *)this,Count__One);
    return uVar4;
  }
  return 0xffffffff;
}

//==== 00523710 IsGenerated ====

/* public: bool __thiscall ArmorTextureHandler__IsGenerated(void)const  */

bool __thiscall ArmorTextureHandler__IsGenerated(ArmorTextureHandler *this)

{
  if ((((this->Texture)._pad_0xc_3 != -1) || ((this->Texture)._pad_0x20_8 != -1)) &&
     ((this->Texture)._pad_0x1c_7 != -1)) {
    return true;
  }
  return false;
}

//==== 00523880 QueueScarring ====

/* public: void __thiscall ArmorTextureHandler__QueueScarring(struct DamageScar const &,bool) */

void __thiscall
ArmorTextureHandler__QueueScarring(ArmorTextureHandler *this,DamageScar *param_1,bool param_2)

{
  undefined4 *puVar1;
  DamageScar *pDVar2;
  double *pdVar3;
  DamageScar *pDVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  
  if (param_2) {
    iVar10 = this[1].Texture._pad_0x8_2;
    _param_2 = iVar10 + 1;
    util__Darray_L_util__Line2_L_double_G___G___SetSize
              ((Darray_L_util__Line2_L_double_G___G_ *)(this + 1),(int *)&param_2);
    bVar8 = util__Darray_L_util__Plane_L_double_G___G___CheckSize
                      ((Darray_L_util__Plane_L_double_G___G_ *)(this + 1),iVar10);
    if (bVar8) {
      iVar10 = this[1].Texture._pad_0x4_1;
      uVar5 = *(undefined4 *)((int)&(param_1->ParametricLocation).X + 4);
      uVar6 = *(undefined4 *)&(param_1->ParametricLocation).Y;
      uVar7 = *(undefined4 *)((int)&(param_1->ParametricLocation).Y + 4);
      iVar9 = this[1].Texture._pad_0x8_2 * 0x20;
      puVar1 = (undefined4 *)(iVar9 + -0x20 + iVar10);
      *puVar1 = (undefined4)((param_1->ParametricLocation).X);
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      uVar5 = *(undefined4 *)((int)&param_1->Radius_m + 4);
      uVar6 = *(undefined4 *)&param_1->Temperature_K;
      uVar7 = *(undefined4 *)((int)&param_1->Temperature_K + 4);
      puVar1 = (undefined4 *)(iVar9 + -0x10 + iVar10);
      *puVar1 = *(undefined4 *)&param_1->Radius_m;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
    }
    iVar10 = this[1].Texture._pad_0x28_10;
    _param_2 = iVar10 + 1;
    util__Darray_L_util__Line2_L_double_G___G___SetSize
              ((Darray_L_util__Line2_L_double_G___G_ *)&this[1].Texture._pad_0x20_8,(int *)&param_2);
    bVar8 = util__Darray_L_util__Plane_L_double_G___G___CheckSize
                      ((Darray_L_util__Plane_L_double_G___G_ *)&this[1].Texture._pad_0x20_8,iVar10);
    if (!bVar8) {
      return;
    }
    iVar10 = this[1].Texture._pad_0x28_10;
    iVar9 = this[1].Texture._pad_0x24_9;
  }
  else {
    iVar10 = (this->SavedDestructionScars).Size;
    _param_2 = iVar10 + 1;
    util__Darray_L_util__Line2_L_double_G___G___SetSize
              ((Darray_L_util__Line2_L_double_G___G_ *)&this->SavedDestructionScars,(int *)&param_2);
    bVar8 = util__Darray_L_util__Plane_L_double_G___G___CheckSize
                      ((Darray_L_util__Plane_L_double_G___G_ *)&this->SavedDestructionScars,iVar10);
    if (bVar8) {
      iVar10 = (this->SavedDestructionScars).Size;
      pDVar4 = (this->SavedDestructionScars).Data;
      uVar5 = *(undefined4 *)((int)&(param_1->ParametricLocation).X + 4);
      uVar6 = *(undefined4 *)&(param_1->ParametricLocation).Y;
      uVar7 = *(undefined4 *)((int)&(param_1->ParametricLocation).Y + 4);
      pDVar2 = pDVar4 + iVar10 + -1;
      *(undefined4 *)&((pDVar2->ParametricLocation).X) = *(undefined4 *)&(param_1->ParametricLocation).X;
      *(undefined4 *)((int)&(pDVar2->ParametricLocation).X + 4) = uVar5;
      *(undefined4 *)&(pDVar2->ParametricLocation).Y = uVar6;
      *(undefined4 *)((int)&(pDVar2->ParametricLocation).Y + 4) = uVar7;
      uVar5 = *(undefined4 *)((int)&param_1->Radius_m + 4);
      uVar6 = *(undefined4 *)&param_1->Temperature_K;
      uVar7 = *(undefined4 *)((int)&param_1->Temperature_K + 4);
      pdVar3 = &pDVar4[iVar10 + -1].Radius_m;
      *(undefined4 *)pdVar3 = *(undefined4 *)&param_1->Radius_m;
      *(undefined4 *)((int)pdVar3 + 4) = uVar5;
      *(undefined4 *)(pdVar3 + 1) = uVar6;
      *(undefined4 *)((int)pdVar3 + 0xc) = uVar7;
    }
    iVar10 = this[1].Texture._pad_0x18_6;
    _param_2 = iVar10 + 1;
    util__Darray_L_util__Line2_L_double_G___G___SetSize
              ((Darray_L_util__Line2_L_double_G___G_ *)&this[1].Texture._pad_0x10_4,(int *)&param_2);
    bVar8 = util__Darray_L_util__Plane_L_double_G___G___CheckSize
                      ((Darray_L_util__Plane_L_double_G___G_ *)&this[1].Texture._pad_0x10_4,iVar10);
    if (!bVar8) {
      return;
    }
    iVar10 = this[1].Texture._pad_0x18_6;
    iVar9 = this[1].Texture._pad_0x14_5;
  }
  uVar5 = *(undefined4 *)((int)&(param_1->ParametricLocation).X + 4);
  uVar6 = *(undefined4 *)&(param_1->ParametricLocation).Y;
  uVar7 = *(undefined4 *)((int)&(param_1->ParametricLocation).Y + 4);
  puVar1 = (undefined4 *)(iVar10 * 0x20 + -0x20 + iVar9);
  *puVar1 = (undefined4)((param_1->ParametricLocation).X);
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  uVar5 = *(undefined4 *)((int)&param_1->Radius_m + 4);
  uVar6 = *(undefined4 *)&param_1->Temperature_K;
  uVar7 = *(undefined4 *)((int)&param_1->Temperature_K + 4);
  puVar1 = (undefined4 *)(iVar10 * 0x20 + -0x10 + iVar9);
  *puVar1 = *(undefined4 *)&param_1->Radius_m;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  return;
}

//==== 005239c0 Reinitialize ====

/* public: virtual void __thiscall ArmorTextureFramebuffer__Reinitialize(void) */

void __thiscall ArmorTextureFramebuffer__Reinitialize(ArmorTextureFramebuffer *this)

{
  ArmorTextureHandler *pAVar1;
  bool bVar2;
  
  pAVar1 = this[1].ParentHandler;
  bVar2 = ArmorTextureHandler__GenerateTexture
                    (*(Vec2_L_double_G_ *)&pAVar1->PendingDestructionScars,
                     (TextureInitOptions *)&(pAVar1->Size_m).Y,
                     SUB41((pAVar1->SavedDamageScars)._pad_0x0_0,0));
  if (!bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\crafts\\armortexture.cpp",
                    0x178,"Success",(char *)0x0);
    DebugBreak();
  }
  util__Darray_L_MomentOfInertia__Particle_G___op_assign
            ((Darray_L_MomentOfInertia__Particle_G_ *)&pAVar1->SavedDestructionScars,
             (Darray_L_struct_MomentOfInertia__Particle_G_ *)&pAVar1[1].Texture._pad_0x10_4);
  util__Darray_L_MomentOfInertia__Particle_G___op_assign
            ((Darray_L_MomentOfInertia__Particle_G_ *)(pAVar1 + 1),
             (Darray_L_struct_MomentOfInertia__Particle_G_ *)&pAVar1[1].Texture._pad_0x20_8);
  return;
}

//==== 00523a30 ResetCooledFlag ====


/* public: void __thiscall ArmorTextureHandler__ResetCooledFlag(void) */

void __thiscall ArmorTextureHandler__ResetCooledFlag(ArmorTextureHandler *this)

{
  *(undefined1 *)&(this->SavedDamageScars).Capacity = 0;
  return;
}





//==== 00523a40 ResolveDamageScars ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall ArmorTextureHandler__ResolveDamageScars(class CraftBlueprintArmor const
   *) */

void __thiscall
ArmorTextureHandler__ResolveDamageScars(ArmorTextureHandler *this,CraftBlueprintArmor *param_1)

{
  undefined8 stack0xfffffffc;
  Darray_L_DamageScar_G_ *pDVar1;
  tuple2_L_unsigned_int_CTextureType__Type_G_ *ptVar2;
  BlendSet BVar3;
  BlendSet BVar4;
  tuple2_L_unsigned_int_CTextureType__Type_G_ tVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  CustomTexture *pCVar9;
  int TVar10;
  Stack_L_util__tuple2_L_unsigned_int_CTextureType__Type_G___G_ *this_00;
  DamageShader *pDVar11;
  uint local_38;
  int local_34;
  TextureStack local_30;
  ArmorTextureHandler *local_20;
  BlendStack *pBStack_1c;
  int TStack_18;
  ShaderStack local_12;
  undefined1 local_11;
  BlendStack local_10 [4];
  BlendStack local_c [4];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pDVar1 = &this->SavedDestructionScars;
  iVar7 = (**(code **)(uintptr_t)(this[1].Texture._pad_0x0_0 + 0xc))();
  iVar8 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
  if (iVar7 + iVar8 != 0) {
    iVar7 = rand();
    pCVar9 = (CustomTexture *)(uintptr_t)(GetHoleTexture((int)((double)iVar7 * 3.0517578125e-05 * 3.0 + 0.0)));
    local_30.StoredChannels._pad_0x0_0 = (int)&vftable_11;
    local_30.StoredChannels.Data = (int *)0x0;
    local_30.StoredChannels.Size = 0;
    local_30.StoredChannels.Capacity = 1;
    local_30.StoredChannels.Data = (int *)(uintptr_t)(port_op_new(4));
    iVar7 = local_30.StoredChannels.Size;
    if (local_30.StoredChannels.Data == (int *)0x0) {
      local_30.StoredChannels.Data = (int *)0x0;
    }
    else {
      *local_30.StoredChannels.Data = 0;
    }
    iVar8 = 0;
    if (0 < local_30.StoredChannels.Capacity) {
      do {
        local_30.StoredChannels.Data[iVar8] = 0;
        iVar8 = iVar8 + 1;
      } while (iVar8 < local_30.StoredChannels.Capacity);
    }
    *(uint32_t *)&local_34 = local_30.StoredChannels.Size + Type__OneDimensional;
    util__Darray_L_util__Reflectable_P_G___SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&local_30,(int *)&local_34);
    bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)&local_30,iVar7);
    if (bVar6) {
      local_30.StoredChannels.Data[local_30.StoredChannels.Size + -1] = 0;
    }
    Graphics__TextureStack__PeekState((int)&pBStack_1c);
    if (pCVar9 == (CustomTexture *)0x0) {
      local_38 = 0xffffffff;
      *(uint32_t *)&local_34 = Type__TwoDimensional;
    }
    else {
      TVar10 = (**(code **)(pCVar9->_pad_0x0_0 + 0x18))();
      local_38 = (**(code **)(pCVar9->_pad_0x0_0 + 0x14))();
      *(uint32_t *)&local_34 = TVar10;
    }
    this_00 = (Stack_L_util__tuple2_L_unsigned_int_CTextureType__Type_G___G_ *)(Graphics__TextureStack__GetStack(0));
    iVar8 = this_00->Size;
    iVar7 = iVar8 + 1;
    this_00->Size = iVar7;
    this_00->EndData = this_00->Data + iVar7;
    bVar6 = util__Stack_L_util__tuple2_L_unsigned_int_CTextureType__Type_G___G___CheckSize(this_00,iVar8);
    if (bVar6) {
      ptVar2 = this_00->Data;
      iVar7 = this_00->Size;
      ptVar2[iVar7 + -1].Value1 = local_38;
      ptVar2[iVar7 + -1].Value2 = local_34;
    }
    tVar5.Value2 = TStack_18;
    tVar5.Value1 = (uint)pBStack_1c;
    Graphics__TextureStack__AlterState(&local_30,tVar5,0);
    pDVar11 = DamageShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_12,(Shader *)pDVar11);
    SetupTextureAlteration(this);
    *(char *)&(local_c[0]) = 0x1;
    pDVar11 = DamageShader__GetStatic();
    (**(code **)(pDVar11->_pad_0x0_0 + 0x68))(local_c);
    pBStack_1c = (BlendStack *)0x0;
    TStack_18 = 0;
    pDVar11 = DamageShader__GetStatic();
    (**(code **)(pDVar11->_pad_0x0_0 + 0x54))(&pBStack_1c);
    BVar4.Equation = 0x8007;
    BVar4.Source = 1;
    BVar4.Dest = 0;
    Graphics__BlendStack__BlendStack(local_10,BVar4);
    pBStack_1c = (BlendStack *)0x0;
    TStack_18 = 0;
    pDVar11 = DamageShader__GetStatic();
    (**(code **)(pDVar11->_pad_0x0_0 + 0x5c))(&pBStack_1c);
    *(char *)&(local_c[0]) = 0x0;
    pDVar11 = DamageShader__GetStatic();
    (**(code **)(pDVar11->_pad_0x0_0 + 100))(local_c);
    pBStack_1c = (BlendStack *)0x10101010;
    TStack_18 = 0x3f901010;
    pDVar11 = DamageShader__GetStatic();
    (**(code **)(pDVar11->_pad_0x0_0 + 0x4c))(&pBStack_1c);
    pBStack_1c = local_c;
    *(char *)&(local_c[0]) = 0x1;
    local_20 = this;
    FUN_00521ca0();
    BlendStack__dtor(local_10);
    BVar3.Equation = 0x8008;
    BVar3.Source = 1;
    BVar3.Dest = 1;
    Graphics__BlendStack__BlendStack(local_c,BVar3);
    *(char *)&(local_10[0]) = 0x1;
    pDVar11 = DamageShader__GetStatic();
    (**(code **)(pDVar11->_pad_0x0_0 + 100))(local_10);
    pBStack_1c = (BlendStack *)0x0;
    TStack_18 = 0;
    pDVar11 = DamageShader__GetStatic();
    (**(code **)(pDVar11->_pad_0x0_0 + 0x4c))(&pBStack_1c);
    pBStack_1c = local_10;
    *(char *)&(local_10[0]) = 0x0;
    local_20 = this;
    FUN_00521ca0(pDVar1,CONCAT44(pBStack_1c,this),&local_11);
    BlendStack__dtor(local_c);
    (**(code **)(pDVar1->_pad_0x0_0 + 0x10))();
    (**(code **)(uintptr_t)(this[1].Texture._pad_0x0_0 + 0x10))();
    Graphics__ShaderStack___ShaderStack(&local_12);
    Graphics__TextureStack___TextureStack(&local_30);
  }
  return;
}

//==== 00523d70 SetupTextureAlteration ====

/* private: bool __thiscall ArmorTextureHandler__SetupTextureAlteration(void) */

bool __thiscall ArmorTextureHandler__SetupTextureAlteration(ArmorTextureHandler *this)

{
  bool bVar1;
  DamageShader *pDVar2;
  undefined8 local_10;
  undefined1 local_5;
  
  bVar1 = Framebuffer__IsInitialized((Framebuffer *)this);
  if (!bVar1) {
    return false;
  }
  Framebuffer__SetAsRenderTarget((Framebuffer *)this);
  local_10 = 0;
  pDVar2 = DamageShader__GetStatic();
  (**(code **)(pDVar2->_pad_0x0_0 + 0x5c))(&local_10);
  local_5 = 0;
  pDVar2 = DamageShader__GetStatic();
  (**(code **)(pDVar2->_pad_0x0_0 + 0x68))(&local_5);
  local_10 = local_10 & 0xffffffff;
  pDVar2 = DamageShader__GetStatic();
  (**(code **)(pDVar2->_pad_0x0_0 + 0x6c))((int)&local_10 + 4);
  local_5 = 0;
  pDVar2 = DamageShader__GetStatic();
  (**(code **)(pDVar2->_pad_0x0_0 + 100))(&local_5);
  local_10 = 0;
  pDVar2 = DamageShader__GetStatic();
  (**(code **)(pDVar2->_pad_0x0_0 + 0x4c))(&local_10);
  local_10 = 0;
  pDVar2 = DamageShader__GetStatic();
  (**(code **)(pDVar2->_pad_0x0_0 + 0x54))(&local_10);
  return true;
}

//==== 005258e0 Intersect_double_util__Line3_double___ ====


/* public: class util__Maybe_L_structutil__Range_L_double_G__G_  util__AABB_L_struct_util__Vec3_L_double_G__G___Intersect_L_double_Cstructutil__Line3_L_double_G__G_(struct util__Line3_L_double_G_
   const &)const  */

void 
util__AABB_struct_util__Vec3_double_____Intersect_double_struct_util__Line3_double
          (AABB_L_struct_util__Vec3_L_double_G___G_ *this,Line3_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  double *pdVar6;
  AABB_L_struct_util__Vec3_L_double_G___G_ *pAVar7;
  AABB_L_struct_util__Vec3_L_double_G___G_ *pAVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double *in_stack_00000008;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  AABB_L_struct_util__Vec3_L_double_G___G_ *pAStack_60;
  AABB_L_struct_util__Vec3_L_double_G___G_ *pAStack_5c;
  AABB_L_struct_util__Vec3_L_double_G___G_ *pAStack_58;
  AABB_L_struct_util__Vec3_L_double_G___G_ *pAStack_54;
  double dStack_50;
  double dStack_48;
  AABB_L_struct_util__Vec3_L_double_G___G_ *pAStack_40;
  AABB_L_struct_util__Vec3_L_double_G___G_ *pAStack_3c;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  double dStack_20;
  double dStack_18;
  double dStack_10;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pAStack_60 = this + 8;
  pAStack_5c = this + 0x10;
  dVar15 = *in_stack_00000008;
  dVar1 = in_stack_00000008[1];
  dStack_20 = in_stack_00000008[3] - dVar15;
  dVar2 = in_stack_00000008[2];
  dStack_18 = in_stack_00000008[4] - dVar1;
  dStack_10 = in_stack_00000008[5] - dVar2;
  dStack_50 = 1.0;
  dVar14 = 1.0 / dStack_18;
  dVar12 = 1.0 / dStack_10;
  pAStack_3c = this + 0x18;
  iVar9 = 0;
  dStack_68 = (*(double *)this - dVar15) * (1.0 / dStack_20);
  dVar3 = *(double *)pAStack_60;
  pAStack_58 = this + 0x20;
  dVar4 = *(double *)pAStack_5c;
  pAStack_54 = this + 0x28;
  dStack_38 = (*(double *)pAStack_3c - dVar15) * (1.0 / dStack_20);
  dStack_30 = (*(double *)pAStack_58 - dVar1) * dVar14;
  dStack_28 = (*(double *)pAStack_54 - dVar2) * dVar12;
  dStack_48 = 0.0;
  dStack_70 = 1e-08;
  pAStack_40 = this;
  do {
    dStack_78 = 0.0;
    if (iVar9 == 0) {
LAB_00525a1c:
      pdVar6 = &dStack_20;
    }
    else if (iVar9 == 1) {
      pdVar6 = &dStack_18;
    }
    else {
      if (iVar9 != 2) goto LAB_00525a1c;
      pdVar6 = &dStack_10;
    }
    bVar5 = Equals_L_double_G_(pdVar6,&dStack_78,&dStack_70);
    if (bVar5) {
      pAVar7 = pAStack_3c;
      if (((iVar9 != 0) && (pAVar7 = pAStack_58, iVar9 != 1)) && (pAVar7 = pAStack_3c, iVar9 == 2))
      {
        pAVar7 = pAStack_54;
      }
      pAVar8 = pAStack_40;
      if (((iVar9 != 0) && (pAVar8 = pAStack_60, iVar9 != 1)) && (pAVar8 = pAStack_40, iVar9 == 2))
      {
        pAVar8 = pAStack_5c;
      }
      pdVar6 = in_stack_00000008;
      if (iVar9 != 0) {
        if (iVar9 == 1) {
          pdVar6 = in_stack_00000008 + 1;
        }
        else if (iVar9 == 2) {
          pdVar6 = in_stack_00000008 + 2;
        }
      }
      dVar15 = *pdVar6;
      if (((*(double *)pAVar8 < dVar15) || (dVar15 < *(double *)pAVar7)) &&
         ((*(double *)pAVar7 < dVar15 || (dVar15 < *(double *)pAVar8)))) {
LAB_00525abd:
        *(undefined4 *)&(param_1->A).X = 0;
        *(undefined4 *)((int)&(param_1->A).X + 4) = 0;
        *(undefined4 *)&(param_1->A).Y = 0;
        *(undefined4 *)((int)&(param_1->A).Y + 4) = 0;
        *(undefined1 *)&(param_1->A).Z = 0;
        goto LAB_00525ac7;
      }
    }
    else {
      if (iVar9 == 0) {
LAB_00525af5:
        pdVar6 = &dStack_38;
      }
      else if (iVar9 == 1) {
        pdVar6 = &dStack_30;
      }
      else {
        if (iVar9 != 2) goto LAB_00525af5;
        pdVar6 = &dStack_28;
      }
      dVar15 = dStack_68;
      if (((iVar9 != 0) && (dVar15 = (dVar3 - dVar1) * dVar14, iVar9 != 1)) &&
         (dVar15 = dStack_68, iVar9 == 2)) {
        dVar15 = (dVar4 - dVar2) * dVar12;
      }
      dVar16 = *pdVar6;
      dVar13 = dVar16;
      if (dVar16 < dVar15) {
        dVar13 = dVar15;
        dVar15 = dVar16;
      }
      uVar10 = SUB84(dStack_50,0);
      uVar11 = (undefined4)((ulonglong)dStack_50 >> 0x20);
      if ((dStack_50 < dVar15) || (dVar13 < dStack_48)) goto LAB_00525abd;
      dVar16 = dStack_48;
      if (dStack_48 <= dVar15) {
        dVar16 = dVar15;
      }
      if (dVar13 <= dStack_50) {
        uVar10 = SUB84(dVar13,0);
        uVar11 = (undefined4)((ulonglong)dVar13 >> 0x20);
      }
      dStack_50 = (double)CONCAT44(uVar11,uVar10);
      dStack_48 = dVar16;
      if ((double)CONCAT44(uVar11,uVar10) <= dVar16 && dVar16 != (double)CONCAT44(uVar11,uVar10)) {
        dStack_48 = (double)CONCAT44(uVar11,uVar10);
        dStack_50 = dVar16;
      }
    }
    iVar9 = iVar9 + 1;
    if (2 < iVar9) {
      (param_1->A).X = dStack_48;
      (param_1->A).Y = dStack_50;
      *(undefined1 *)&(param_1->A).Z = 1;
LAB_00525ac7:
      __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  } while( true );
}





//==== 00525d80 LineCylinderIntersect_double_ ====


/* struct util__tuple2_L_classutil__Maybe_L_double_G__Cclassutil__Maybe_L_double_G__G_ __cdecl
   util__LineCylinderIntersect_double(struct util__Line3_L_double_G_,double,struct util__Line3_L_double_G_)
    */

void __cdecl
util__LineCylinderIntersect_double(Line3_L_double_G_ param_1,double param_2,Line3_L_double_G_ param_3)

{
  undefined8 stack0xfffffff0;
  int iVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  Line3_L_double_G_ LVar8;
  Vec4_L_double_G_ VVar9;
  Vec4_L_double_G_ VVar10;
  Vec4_L_double_G_ VVar11;
  undefined1 auVar12 [8];
  undefined1 auVar13 [8];
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  bool bVar17;
  double *pdVar18;
  char cVar19;
  char cVar20;
  double dVar21;
  undefined4 uVar23;
  double dVar22;
  double dVar24;
  undefined4 uVar25;
  double dVar26;
  double dVar27;
  undefined4 in_stack_0000006c;
  double dStack_100;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  char cStack_b5;
  char cStack_b4;
  char cStack_b3;
  char cStack_b2;
  char cStack_b1;
  Plane_L_double_G_ PStack_b0;
  Plane_L_double_G_ PStack_90;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  uint uStack_30;
  undefined4 uStack_2c;
  double dStack_28;
  uint uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  
  uStack_14 = __security_cookie ^ (uint)&stack0xfffffff0;
  LVar8.A.Y = param_1.A.Y;
  *(uint32_t *)&LVar8.A.X = (uint32_t)(uintptr_t)(&PStack_b0);
  LVar8.A.Y = param_1.A.Y;
  LVar8.A.Z = param_1.A.Z;
  LVar8.A.Z = param_1.A.Z;
  LVar8.A.W = param_1.A.W;
  LVar8.B.X = param_1.B.X;
  LVar8.B.Y = param_1.B.Y;
  LVar8.B.Y = param_1.B.Y;
  LVar8.B.Z = param_1.B.Z;
  LVar8.B.Z = param_1.B.Z;
  LVar8.B.W = param_1.B.W;
  LineFiniteTubeIntersect_L_double_G_(LVar8,param_2,param_3);
  uStack_30 = uStack_30 & 0xffffff00;
  dVar22 = (*(uint64_t *)((char *)&(param_1.B) + 4));
  dVar21 = (*(uint64_t *)((char *)&(param_1.B) + 12));
  dVar24 = (*(uint64_t *)((char *)&(param_1) + 20));
  dVar7 = (*(uint64_t *)((char *)&(param_1.A) + 12));
  (*(uint32_t*)&(uStack_58)) = PStack_b0.Mode__Normal.X;
  (*(uint32_t*)((char*)&(uStack_58)+4)) = PStack_b0.Mode__Normal.Y;
  uStack_50 = PStack_b0.Mode__Normal.Y;
  uStack_4c = PStack_b0.Mode__Normal.Z;
  uStack_20 = uStack_20 & 0xffffff00;
  uStack_38 = 0;
  dVar26 = (double)CONCAT44((*(uint32_t*)&(param_2)),param_1.B.W) - dVar24;
  uStack_48 = PStack_b0.Mode__Normal.Z;
  uStack_44 = (*(double *)((char *)&(PStack_b0.Mode__Normal) + 0x18));
  uStack_40 = PStack_b0.OriginDistance;
  uStack_3c = (*(uint32_t *)((char *)&(PStack_b0.OriginDistance) + 4));
  dStack_28 = 0.0;
  dVar6 = (*(uint64_t *)((char *)&(param_1.A) + 4));
  if (((NAN(dVar22 - dVar6) == (dVar22 - dVar6 == 0.0)) ||
      (NAN(dVar21 - dVar7) == (dVar21 - dVar7 == 0.0))) || (NAN(dVar26) == (dVar26 == 0.0))) {
    (*(uint64_t*)&(auStack_70)) = dVar22 - dVar6;
    (*(uint64_t*)((char*)&(auStack_70)+8)) = dVar21 - dVar7;
    uStack_60 = (double)CONCAT44((*(uint32_t*)&(param_2)),param_1.B.W) - dVar24;
    Vec3_L_double_G___SafeNormalized((Vec3_L_double_G_ *)auStack_70,(Vec3_L_double_G_ *)&PStack_b0.Mode__Normal.Y);
  }
  else {
    PStack_b0.Mode__Normal.Y = 0;
    PStack_b0.Mode__Normal.Z = 0x3ff00000;
    PStack_b0.Mode__Normal.Z = 0.0;
    PStack_b0.OriginDistance = 0.0;
  }
  *(uint32_t *)&(auStack_f0) = (*(uint64_t *)((char *)&(param_3.A) + 4));
  memcpy(&auVar12, &auStack_f0, 8);
  (*(uint64_t*)((char*)&(auStack_70)+8)) = (*(uint64_t *)((char *)&(param_3) + 20));
  uVar14 = (*(uint64_t*)((char*)&(auStack_70)+8));
  uStack_60 = (*(uint64_t *)((char *)&(param_3.B) + 4));
  dVar16 = uStack_60;
  *(uint32_t *)&(auStack_d0) = (*(uint64_t *)((char *)&(param_3.B) + 12));
  memcpy(&auVar13, &auStack_d0, 8);
  _auStack_d0 = (*(uint32_t *)((char *)&(param_3.B) + 12));
  (*(uint32_t*)((char*)&(uStack_c8)+4)) = in_stack_0000006c;
  VVar9.Y = PStack_b0.Mode__Normal.Z;
  VVar9.X = PStack_b0.Mode__Normal.Y;
  VVar9.Y = PStack_b0.Mode__Normal.Z;
  VVar9.Z = (*(double *)((char *)&(PStack_b0.Mode__Normal) + 0x18));
  VVar9.Z = SUB84(PStack_b0.OriginDistance,0);
  VVar9.W = (int)((ulonglong)PStack_b0.OriginDistance >> 0x20);
  pdVar18 = (double *)Plane_L_double_G___Plane_L_double_G_(&PStack_90,VVar9,(*(uint32_t *)((char *)&(param_1) + 4)));
  dVar3 = *pdVar18;
  dVar27 = pdVar18[1];
  dVar4 = pdVar18[2];
  dVar5 = pdVar18[3];
  dVar26 = (*(uint64_t *)((char *)&(param_3.A) + 12));
  (*(uint32_t*)((char*)&(auVar2)+8)) = param_3.A.Z;
  (*(uint64_t*)&(auVar2)) = dVar26;
  (*(uint32_t *)((char *)&(auVar2) + 12)) = param_3.A.Z;
  uStack_c0 = (double)(uintptr_t)((uStack_60 - (double)(int)(uintptr_t)(auStack_f0)) * dVar3 + ((double)(int)(uintptr_t)(auVar13) - dVar26) * dVar27 +
              (uStack_c8 - (double)(*(uint64_t*)((char*)&(auStack_70)+8))) * dVar4);
  cStack_b5 = NAN(*(double *)&(uStack_c0)) == (*(double *)&(uStack_c0) == 0.0);
  (*(uint56_t*)((char*)&(uStack_e8)+1)) = (*(uint56_t*)((char*)&(auVar2)+9));
  if ((bool)cStack_b5) {
    (*(uint8_t*)&(uStack_e8)) = 1;
    *(uint32_t *)&auStack_f0 = (uint64_t)dVar26;
    uStack_c0 = (double)(uintptr_t)(((dVar5 * dVar3 - (double)(int)(uintptr_t)(auVar12)) * dVar3 + (dVar5 * dVar27 - dVar26) * dVar27 +
                (dVar5 * dVar4 - (double)(*(uint64_t*)((char*)&(auStack_70)+8))) * dVar4) / uStack_c0);
    *(uint32_t *)&auStack_f0 = (uint64_t)uStack_c0;
  }
  else {
    _auStack_f0 = (undefined8)0;
    uStack_c0 = 0.0;
  }
  PStack_90.OriginDistance = (double)CONCAT44(in_stack_0000006c,param_3.B.W);
  VVar10.Y = PStack_b0.Mode__Normal.Z;
  VVar10.X = PStack_b0.Mode__Normal.Y;
  VVar10.Y = PStack_b0.Mode__Normal.Z;
  VVar10.Z = (*(double *)((char *)&(PStack_b0.Mode__Normal) + 0x18));
  VVar10.Z = SUB84(PStack_b0.OriginDistance,0);
  VVar10.W = (int)((ulonglong)PStack_b0.OriginDistance >> 0x20);
  VVar11.W = (*(uint32_t*)&(param_2));
  (*(uint32_t *)((char *)&(VVar11) + 0)) = (*(uint32_t *)((char *)&(param_1.B) + 4));
  cStack_b4 = cStack_b5;
  cStack_b3 = cStack_b5;
  cStack_b2 = cStack_b5;
  cStack_b1 = cStack_b5;
  PStack_90.Mode__Normal.Z = (double)(uintptr_t)((double)(int)(uintptr_t)(auVar13));
  (*(uint64_t*)((char*)&(auStack_70)+8)) = uVar14;
  uStack_60 = dVar16;
  pdVar18 = (double *)Plane_L_double_G___Plane_L_double_G_(&PStack_b0,VVar10,VVar11);
  dVar5 = uStack_c0;
  dVar27 = *pdVar18;
  dVar4 = pdVar18[1];
  PStack_b0.Mode__Normal.Z = pdVar18[2];
  PStack_b0.OriginDistance = pdVar18[3];
  dVar3 = (double)(uintptr_t)((uStack_60 - (double)(int)(uintptr_t)(auVar12)) * dVar27 + (PStack_90.Mode__Normal.Z - dVar26) * dVar4 +
          (PStack_90.OriginDistance - (double)(*(uint64_t*)((char*)&(auStack_70)+8))) * PStack_b0.Mode__Normal.Z);
  bVar17 = NAN(dVar3) == (dVar3 == 0.0);
  if (bVar17) {
    (*(uint64_t*)((char*)&(auStack_70)+8)) =
         ((PStack_b0.OriginDistance * dVar27 - (double)(int)(uintptr_t)(auVar12)) * dVar27 +
          (PStack_b0.OriginDistance * dVar4 - dVar26) * dVar4 +
         (PStack_b0.OriginDistance * PStack_b0.Mode__Normal.Z - (double)(*(uint64_t*)((char*)&(auStack_70)+8))) *
         PStack_b0.Mode__Normal.Z) / dVar3;
    cVar20 = cStack_b4;
    cVar19 = cStack_b3;
  }
  else {
    (*(uint64_t*)((char*)&(auStack_70)+8)) = 0.0;
    cVar20 = cStack_b2;
    cVar19 = cStack_b1;
  }
  uVar15 = (*(uint64_t*)((char*)&(auStack_70)+8));
  uVar23 = SUB84((*(uint64_t*)((char*)&(auStack_70)+8)),4);
  uStack_60 = (double)CONCAT71((*(uint56_t*)((char*)&(uStack_60)+1)),bVar17);
  uStack_c8 = (double)(*(uint64_t*)((char*)&(auStack_70)+8));
  if (cStack_b5 == '\0') {
    PStack_90.OriginDistance = uStack_c0;
    cVar19 = cVar20;
    dVar3 = (double)(*(uint64_t*)((char*)&(auStack_70)+8));
    if (!bVar17) goto LAB_005263eb;
  }
  dStack_100 = uStack_c0;
  if (cVar19 == '\0') {
LAB_00526221:
    uStack_c0 = (double)(*(uint64_t*)((char*)&(auStack_70)+8));
    PStack_90.OriginDistance = dStack_100;
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\advancedgeometry.inl",0x1ff
              ,"CapA_t.IsValid() && CapB_t.IsValid()",(char *)0x0);
    DebugBreak();
  }
  else if (!bVar17) goto LAB_00526221;
  PStack_90.OriginDistance = dVar5;
  uVar25 = (undefined4)uVar15;
  uStack_c0 = (double)uVar15;
  if ((char)uStack_e8 == '\0') {
    uStack_c8 = (double)uVar15;
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,"IsValid()",
              (char *)0x0);
    DebugBreak();
    uVar25 = SUB84(uStack_c8,0);
    uVar23 = (undefined4)((ulonglong)uStack_c8 >> 0x20);
    uStack_c0 = uStack_c8;
  }
  dVar27 = ((double)CONCAT44(in_stack_0000006c,param_3.B.W) - (double)uVar14) *
           PStack_90.OriginDistance;
  dVar3 = (double)(uintptr_t)((dVar16 - (double)(int)(uintptr_t)(auVar12)) * PStack_90.OriginDistance + (double)(int)(uintptr_t)(auVar12));
  uStack_c8 = (double)(uintptr_t)(((double)(int)(uintptr_t)(auVar13) - dVar26) * PStack_90.OriginDistance + dVar26);
  PStack_90.OriginDistance = dVar3;
  if ((char)uStack_60 == '\0') {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,"IsValid()",
              (char *)0x0);
    DebugBreak();
    uVar25 = SUB84(uStack_c0,0);
    uVar23 = (undefined4)((ulonglong)uStack_c0 >> 0x20);
  }
  dVar24 = (dVar27 + (double)uVar14) - dVar24;
  dVar27 = (double)CONCAT44(param_3.A.X,(*(uint32_t*)((char*)&(param_2)+4))) *
           (double)CONCAT44(param_3.A.X,(*(uint32_t*)((char*)&(param_2)+4)));
  if ((uStack_c8 - dVar7) * (uStack_c8 - dVar7) +
      (PStack_90.OriginDistance - dVar6) * (PStack_90.OriginDistance - dVar6) + dVar24 * dVar24 <=
      dVar27) {
    uStack_38 = SUB168(_auStack_f0,0);
    uStack_30 = (uint)uStack_e8;
    uStack_2c = (*(uint32_t*)((char*)&(uStack_e8)+4));
  }
  dVar21 = (double)(uintptr_t)((((double)(int)(uintptr_t)(auVar13) - dVar26) * (double)(int)(uintptr_t)CONCAT44(uVar23,uVar25) + dVar26) - dVar21);
  dVar22 = (double)(uintptr_t)(((dVar16 - (double)(int)(uintptr_t)(auVar12)) * (double)(int)(uintptr_t)CONCAT44(uVar23,uVar25) + (double)(int)(uintptr_t)(auVar12)) - dVar22);
  dVar24 = (((double)CONCAT44(in_stack_0000006c,param_3.B.W) - (double)uVar14) *
            (double)CONCAT44(uVar23,uVar25) + (double)uVar14) -
           (double)CONCAT44((*(uint32_t*)&(param_2)),param_1.B.W);
  dVar3 = uStack_c0;
  if (dVar21 * dVar21 + dVar22 * dVar22 + dVar24 * dVar24 <= dVar27) {
    dStack_28 = (double)(*(uint64_t*)((char*)&(auStack_70)+8));
    uStack_20 = (uint)uStack_60;
    uStack_1c = (*(uint32_t*)((char*)&(uStack_60)+4));
  }
LAB_005263eb:
  uStack_c0 = dVar3;
  *(undefined1 *)(*(uint32_t *)&param_1.A.X + 1) = 0;
  param_1.A.X = 0.0;
  pdVar18 = (double *)&uStack_58;
  ((double *)&(param_1.A.X))[2] = 0.0;
  *(undefined1 *)(*(uint32_t *)&param_1.A.X + 3) = 0;
  uStack_c0 = (double)CONCAT44(4,(undefined4)uStack_c0);
  do {
    dVar24 = uStack_60;
    (*(uint64_t*)((char*)&(auStack_70)+8)) = *pdVar18;
    uStack_60 = (double)CONCAT71((*(uint56_t*)((char*)&(uStack_60)+1)),*(char *)(pdVar18 + 1));
    dVar6 = uStack_60;
    uStack_60 = dVar6;
    if (*(char *)(pdVar18 + 1) != '\0') {
      if (*(char *)(*(uint32_t *)&param_1.A.X + 1) == '\0') {
        (*(uint32_t *)((char *)&(auStack_70) + 12)) = (undefined4)((ulonglong)(*(uint64_t*)((char*)&(auStack_70)+8)) >> 0x20);
        (*(uint32_t*)((char*)&(uStack_60)+4)) = SUB84(dVar24,4);
        *(undefined4 *)(uintptr_t)*(uint32_t *)&param_1.A.X = (*(uint32_t*)((char*)&(auStack_70)+8));
        *(undefined4 *)((int)param_1.A.X + 4) = (*(uint32_t *)((char *)&(auStack_70) + 12));
        *(uint *)(*(uint32_t *)&param_1.A.X + 1) = (uint)uStack_60;
        *(undefined4 *)((int)param_1.A.X + 0xc) = (*(uint32_t*)((char*)&(uStack_60)+4));
      }
      else {
        uStack_c8 = 1e-08;
        bVar17 = Equals_L_double_G_(param_1.A.X,(double *)(auStack_70 + 8),
                                (double *)(auStack_d0 + 8));
        if (!bVar17) {
          *(undefined4 *)((char *)&(param_1.A.X) + 2) = (*(uint32_t*)((char*)&(auStack_70)+8));
          *(undefined4 *)((int)param_1.A.X + 0x14) = (*(uint32_t *)((char *)&(auStack_70) + 12));
          *(uint *)(*(uint32_t *)&param_1.A.X + 3) = (uint)uStack_60;
          *(undefined4 *)((int)param_1.A.X + 0x1c) = (*(uint32_t*)((char*)&(uStack_60)+4));
        }
      }
    }
    pdVar18 = pdVar18 + 2;
    iVar1 = (*(uint32_t*)((char*)&(uStack_c0)+4)) + -1;
    uStack_c0 = (double)CONCAT44(iVar1,(undefined4)uStack_c0);
  } while (iVar1 != 0);
  __security_check_cookie(uStack_14 ^ (uint)&stack0xfffffff0);
  return;
}





//==== 00526490 LineFiniteTubeIntersect_double_ ====


/* struct util__tuple2_L_classutil__Maybe_L_double_G__Cclassutil__Maybe_L_double_G__G_ __cdecl
   util__LineFiniteTubeIntersect_double(struct util__Line3_L_double_G_,double,struct
   util__Line3_L_double_G_) */

void __cdecl
util__LineFiniteTubeIntersect_double(Line3_L_double_G_ param_1,double param_2,Line3_L_double_G_ param_3)

{
  undefined8 stack0xffffffe8;
  undefined8 stack0xfffffffc;
  undefined1 uVar1;
  double dVar2;
  double dVar3;
  Line3_L_double_G_ LVar4;
  Line3_L_double_G_ LVar5;
  Line3_L_double_G_ LVar6;
  Vec4_L_double_G_ VVar7;
  Vec4_L_double_G_ VVar8;
  Vec4_L_double_G_ VVar9;
  Vec4_L_double_G_ VVar10;
  bool bVar11;
  double *pdVar12;
  undefined1 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 in_stack_0000006c;
  Vec3_L_double_G_ VStack_80;
  undefined1 auStack_68 [16];
  double dStack_58;
  double dStack_50;
  double dStack_48;
  char cStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  undefined1 auStack_20 [16];
  double dStack_10;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  LVar4.A.Y = param_1.A.Y;
  *(uint32_t *)&LVar4.A.X = (uint32_t)(uintptr_t)(&dStack_50);
  LVar4.A.Y = param_1.A.Y;
  LVar4.A.Z = param_1.A.Z;
  LVar4.A.Z = param_1.A.Z;
  LVar4.A.W = param_1.A.W;
  LVar4.B.X = param_1.B.X;
  LVar4.B.Y = param_1.B.Y;
  LVar4.B.Y = param_1.B.Y;
  LVar4.B.Z = param_1.B.Z;
  LVar4.B.Z = param_1.B.Z;
  LVar4.B.W = param_1.B.W;
  LineTubeIntersect_L_double_G_(LVar4,param_2,param_3);
  if (cStack_40 == '\0') {
    dVar16 = 0.0;
    *(undefined1 *)(*(uint32_t *)&param_1.A.X + 1) = 0;
    param_1.A.X = 0.0;
    *(undefined1 *)(*(uint32_t *)&param_1.A.X + 3) = 0;
  }
  else {
    (*(uint64_t*)&(auStack_20)) = (*(uint64_t *)((char *)&(param_1.B) + 4)) - (*(uint64_t *)((char *)&(param_1.A) + 4));
    dStack_10 = (double)CONCAT44((*(uint32_t*)&(param_2)),param_1.B.W) - (*(uint64_t *)((char *)&(param_1) + 20));
    (*(uint64_t*)((char*)&(auStack_20)+8)) = (*(uint64_t *)((char *)&(param_1.B) + 12)) - (*(uint64_t *)((char *)&(param_1.A) + 12));
    Vec3_L_double_G___SafeNormalized((Vec3_L_double_G_ *)auStack_20,&VStack_80);
    dVar3 = (*(uint64_t *)((char *)&(param_3.A) + 4));
    dVar14 = (*(uint64_t *)((char *)&(param_3.B) + 4)) - dVar3;
    dVar15 = (*(uint64_t *)((char *)&(param_3.A) + 12));
    dStack_28 = (*(uint64_t *)((char *)&(param_3) + 20));
    dVar16 = (*(uint64_t *)((char *)&(param_3.B) + 12)) - dVar15;
    dStack_38 = dStack_50;
    dVar17 = (double)CONCAT44(in_stack_0000006c,param_3.B.W) - dStack_28;
    dVar2 = dVar14 * dStack_50 + dVar3;
    dStack_58 = dVar16 * dStack_48 + dVar15;
    (*(uint64_t*)((char*)&(auStack_68)+8)) = 0;
    (*(uint64_t*)&(auStack_68)) = dVar2;
    dVar15 = dVar16 * dStack_50 + dVar15;
    dVar16 = dVar17 * dStack_50 + dStack_28;
    dStack_28 = dVar17 * dStack_48 + dStack_28;
    dStack_10 = 0.0;
    (*(uint64_t*)((char*)&(auStack_20)+8)) = dVar14 * dStack_48 + dVar3;
    LVar5.B.W = (*(uint32_t*)&(param_2));
    (*(uint32_t *)((char *)&(LVar5) + 0)) = (*(uint32_t *)((char *)&(param_1) + 4));
    VVar7.Y = VStack_80.Y;
    VVar7.X = VStack_80.X;
    VVar7.Y = VStack_80.Y;
    VVar7.Z = VStack_80.Z;
    VVar7.Z = SUB84(VStack_80.Z,0);
    VVar7.W = (int)((ulonglong)VStack_80.Z >> 0x20);
    VVar9.Y = SUB84(dVar15,0);
    VVar9.X = dVar2;
    VVar9.Z = (int)((ulonglong)dVar15 >> 0x20);
    VVar9.Z = SUB84(dVar16,0);
    VVar9.W = (int)((ulonglong)dVar16 >> 0x20);
    dVar16 = PointAlongTube_L_double_G_(LVar5,VVar7,VVar9);
    (*(uint64_t*)((char*)&(auStack_68)+8)) = dVar16;
    LVar6.B.W = (*(uint32_t*)&(param_2));
    (*(uint32_t *)((char *)&(LVar6) + 0)) = (*(uint32_t *)((char *)&(param_1) + 4));
    VVar8.Y = VStack_80.Y;
    VVar8.X = VStack_80.X;
    VVar8.Y = VStack_80.Y;
    VVar8.Z = VStack_80.Z;
    VVar8.Z = SUB84(VStack_80.Z,0);
    VVar8.W = (int)((ulonglong)VStack_80.Z >> 0x20);
    VVar10.Y = SUB84(dStack_58,0);
    VVar10.X = (double)SUB168(stack0xffffffe8,0);
    VVar10.Z = (int)((ulonglong)dStack_58 >> 0x20);
    VVar10.Z = SUB84(dStack_28,0);
    VVar10.W = (int)((ulonglong)dStack_28 >> 0x20);
    dVar16 = PointAlongTube_L_double_G_(LVar6,VVar8,VVar10);
    dStack_28 = dVar16;
    if (((dVar16 <= 0.0) && (1.0 <= dVar16)) || ((dVar16 <= 1.0 && (0.0 <= dVar16)))) {
      bVar11 = true;
      dStack_30 = dStack_48;
      dStack_28 = (double)CONCAT71((int7)((ulonglong)dVar16 >> 8),1);
    }
    else {
      bVar11 = false;
      stack0xffffffe8 = (undefined8)0;
    }
    pdVar12 = (double *)(auStack_20 + 8);
    if (bVar11) {
      pdVar12 = &dStack_30;
    }
    if ((((double)(*(uint64_t*)((char*)&(auStack_68)+8)) <= 0.0) && (1.0 <= (double)(*(uint64_t*)((char*)&(auStack_68)+8)))) ||
       (((double)(*(uint64_t*)((char*)&(auStack_68)+8)) <= 1.0 && (0.0 <= (double)(*(uint64_t*)((char*)&(auStack_68)+8)))))) {
      uVar13 = 1;
    }
    else {
      uVar13 = 0;
      dStack_38 = 0.0;
    }
    dVar16 = *pdVar12;
    uVar1 = *(undefined1 *)(pdVar12 + 1);
    param_1.A.X = dStack_38;
    *(undefined1 *)(*(uint32_t *)&param_1.A.X + 1) = uVar13;
    *(undefined1 *)(*(uint32_t *)&param_1.A.X + 3) = uVar1;
  }
  ((double *)&(param_1.A.X))[2] = dVar16;
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00526720 LineTubeIntersect_double_ ====


/* class util__Maybe_L_structutil__tuple2_L_double_Cdouble_G__G_ __cdecl
   util__LineTubeIntersect_double(struct util__Line3_L_double_G_,double,struct util__Line3_L_double_G_) */

double __cdecl
util__LineTubeIntersect_double(Line3_L_double_G_ param_1,double param_2,Line3_L_double_G_ param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 in_stack_0000006c;
  
  dVar7 = (double)CONCAT44((*(uint32_t*)&(param_2)),param_1.B.W) - (double)(*(uint64_t *)((char *)&(param_1) + 20));
  dVar9 = (double)(*(uint64_t *)((char *)&(param_1.B) + 12)) - (double)(*(uint64_t *)((char *)&(param_1.A) + 12));
  dVar2 = (double)CONCAT44(in_stack_0000006c,param_3.B.W) - (double)(*(uint64_t *)((char *)&(param_3) + 20));
  dVar1 = (double)(*(uint64_t *)((char *)&(param_1.B) + 4)) - (double)(*(uint64_t *)((char *)&(param_1.A) + 4));
  dVar5 = dVar7 * ((double)(*(uint64_t *)((char *)&(param_3.B) + 12)) - (double)(*(uint64_t *)((char *)&(param_3.A) + 12))) - dVar9 * dVar2;
  dVar6 = dVar1 * dVar2 - dVar7 * ((double)(*(uint64_t *)((char *)&(param_3.B) + 4)) - (double)(*(uint64_t *)((char *)&(param_3.A) + 4)));
  dVar10 = dVar9 * ((double)(*(uint64_t *)((char *)&(param_3.B) + 4)) - (double)(*(uint64_t *)((char *)&(param_3.A) + 4))) -
           dVar1 * ((double)(*(uint64_t *)((char *)&(param_3.B) + 12)) - (double)(*(uint64_t *)((char *)&(param_3.A) + 12)));
  dVar2 = dVar7 * ((double)(*(uint64_t *)((char *)&(param_3.A) + 12)) - (double)(*(uint64_t *)((char *)&(param_1.A) + 12))) -
          dVar9 * ((double)(*(uint64_t *)((char *)&(param_3) + 20)) - (double)(*(uint64_t *)((char *)&(param_1) + 20)));
  dVar3 = dVar1 * ((double)(*(uint64_t *)((char *)&(param_3) + 20)) - (double)(*(uint64_t *)((char *)&(param_1) + 20))) -
          dVar7 * ((double)(*(uint64_t *)((char *)&(param_3.A) + 4)) - (double)(*(uint64_t *)((char *)&(param_1.A) + 4)));
  dVar4 = dVar9 * ((double)(*(uint64_t *)((char *)&(param_3.A) + 4)) - (double)(*(uint64_t *)((char *)&(param_1.A) + 4))) -
          dVar1 * ((double)(*(uint64_t *)((char *)&(param_3.A) + 12)) - (double)(*(uint64_t *)((char *)&(param_1.A) + 12)));
  dVar8 = dVar6 * dVar6 + dVar5 * dVar5 + dVar10 * dVar10;
  dVar1 = (dVar3 * dVar3 + dVar2 * dVar2 + dVar4 * dVar4) -
          (dVar9 * dVar9 + dVar1 * dVar1 + dVar7 * dVar7) *
          (double)CONCAT44(param_3.A.X,(*(uint32_t*)((char*)&(param_2)+4))) *
          (double)CONCAT44(param_3.A.X,(*(uint32_t*)((char*)&(param_2)+4)));
  dVar2 = dVar3 * dVar6 + dVar2 * dVar5 + dVar4 * dVar10;
  dVar2 = dVar2 + dVar2;
  if (NAN(dVar8) == (dVar8 == 0.0)) {
    dVar1 = dVar2 * dVar2 - dVar8 * 4.0 * dVar1;
    if (dVar1 < 0.0) {
      *(undefined4 *)(uintptr_t)*(uint32_t *)&param_1.A.X = 0;
      *(undefined4 *)((int)param_1.A.X + 4) = 0;
      *(undefined4 *)((char *)&(param_1.A.X) + 1) = 0;
      *(undefined4 *)((int)param_1.A.X + 0xc) = 0;
      *(undefined1 *)(*(uint32_t *)&param_1.A.X + 2) = 0;
      return param_1.A.X;
    }
    libm_sse2_sqrt_precise(0.0);
    *(undefined1 *)(*(uint32_t *)&param_1.A.X + 2) = 1;
    dVar3 = 1.0 / (dVar8 + dVar8);
    param_1.A.X = (dVar1 - dVar2) * dVar3;
    ((double *)&(param_1.A.X))[1] = (-dVar2 - dVar1) * dVar3;
    return param_1.A.X;
  }
  if (NAN(dVar2) != (dVar2 == 0.0)) {
    *(undefined4 *)(uintptr_t)*(uint32_t *)&param_1.A.X = 0;
    *(undefined4 *)((int)param_1.A.X + 4) = 0;
    *(undefined4 *)((char *)&(param_1.A.X) + 1) = 0;
    *(undefined4 *)((int)param_1.A.X + 0xc) = 0;
    *(undefined1 *)(*(uint32_t *)&param_1.A.X + 2) = 0;
    return param_1.A.X;
  }
  dVar1 = dVar1 / dVar2;
  uVar11 = SUB84(dVar1,0);
  *(undefined1 *)(*(uint32_t *)&param_1.A.X + 2) = 1;
  uVar12 = (uint)((ulonglong)dVar1 >> 0x20) ^ 0x80000000;
  *(undefined4 *)(uintptr_t)*(uint32_t *)&param_1.A.X = uVar11;
  *(uint *)((int)param_1.A.X + 4) = uVar12;
  *(undefined4 *)((char *)&(param_1.A.X) + 1) = uVar11;
  *(uint *)((int)param_1.A.X + 0xc) = uVar12;
  return param_1.A.X;
}





//==== 005270b0 RandVec3_double_ ====


/* struct util__Vec3_L_double_G_ __cdecl util__RandVec3_double(void) */

Vec3_L_double_G_ * __cdecl util__RandVec3_double(Vec3_L_double_G_ *__return_storage_ptr__)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  iVar1 = rand();
  dVar5 = ((double)iVar1 * 3.0517578125e-05 + (double)iVar1 * 3.0517578125e-05) - 1.0;
  dVar2 = 1.0 - dVar5 * dVar5;
  libm_sse2_sqrt_precise(0.0);
  iVar1 = rand();
  dVar3 = (double)iVar1 * 3.0517578125e-05 * 6.283185307179586 + 0.0;
  dVar4 = dVar3;
  libm_sse2_cos_precise(0.0);
  __return_storage_ptr__->X = dVar4 * dVar2;
  libm_sse2_sin_precise(0.0);
  __return_storage_ptr__->Y = dVar3 * dVar2;
  __return_storage_ptr__->Z = dVar5;
  return __return_storage_ptr__;
}





//==== 00527940 Zip_util__WeakPtr_EngineCompartment__double_ ====

/* WARNING: Removing unreachable block (ram,0x00527ba1) */
/* class util__Darray_L_structutil__tuple2_L_classutil__WeakPtr_L_structEngineCompartment_G__Cdouble_G__G_
   __cdecl util__Zip_class_util__WeakPtr_struct_EngineCompartment__double(class util__Darray_L_class_util__WeakPtr_L_structEngineCompartment_G__G_ const &,class util__Darray_L_double_G_ const &) */

void __cdecl
util__Zip_class_util__WeakPtr_struct_EngineCompartment__double__o2
          (Darray_L_class_util__WeakPtr_L_struct_EngineCompartment_G___G_ *param_1,Darray_L_double_G_ *param_2)

{
  undefined8 stack0xfffffffc;
  ReferenceController *pRVar1;
  bool bVar2;
  bool bVar3;
  uint *puVar4;
  Darray_L_class_util__WeakPtr_L_struct_EngineCompartment_G___G_ *pDVar5;
  Darray_L_double_G_ *pDVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  int *in_stack_0000000c;
  undefined8 local_38;
  undefined4 local_28;
  ReferenceController *local_20;
  ReferenceController *local_1c;
  Darray_L_class_util__WeakPtr_L_struct_EngineCompartment_G___G_ *local_18;
  Darray_L_double_G_ *local_14;
  ReferenceController *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar3 = false;
  bVar2 = false;
  local_14 = param_2;
  local_18 = param_1;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_20 = (ReferenceController *)0x0;
  uVar8 = (**(code **)(uintptr_t)(*in_stack_0000000c + 0xc))();
  uVar9 = (**(code **)(local_14->_pad_0x0_0 + 0xc))();
  *(undefined ***)param_1 =
       &vftable_117;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((int)uVar8 < (int)uVar9) {
    uVar8 = uVar9;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar8;
  if (((int)uVar8 < 0) || (0x3fffffff < (int)uVar8)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar8) {
    uVar9 = -(uint)((int)((ulonglong)uVar8 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar8 * 0x10);
    puVar10 = (uint *)(uintptr_t)(port_op_new(-(uint)(0xfffffffb < uVar9) | uVar9 + 4));
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)0x0;
    }
    else {
      *puVar10 = uVar8;
      puVar10 = puVar10 + 1;
      puVar4 = puVar10;
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4 = puVar4 + 4;
      }
    }
    *(uint **)(param_1 + 4) = puVar10;
    local_10 = (ReferenceController *)0x0;
    if (0 < *(int *)(param_1 + 0xc)) {
      local_c = 0;
      do {
        puVar14 = (undefined4 *)(*(int *)(param_1 + 4) + local_c);
        *puVar14 = 0;
        pRVar1 = (ReferenceController *)puVar14[1];
        puVar14[1] = 0;
        if (pRVar1 != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(pRVar1);
        }
        local_10 = (ReferenceController *)((int)&local_10->StrongReferenceCount + 1);
        *(undefined8 *)(puVar14 + 2) = 0;
        local_c = local_c + 0x10;
      } while ((int)local_10 < *(int *)(param_1 + 0xc));
    }
  }
  local_c = 0;
  while( true ) {
    iVar11 = (**(code **)(uintptr_t)(*in_stack_0000000c + 0xc))();
    iVar12 = (**(code **)(local_14->_pad_0x0_0 + 0xc))();
    if (iVar11 < iVar12) {
      iVar11 = iVar12;
    }
    if (iVar11 <= local_c) break;
    iVar11 = (**(code **)(uintptr_t)(*in_stack_0000000c + 0xc))();
    if (local_c < iVar11) {
      puVar13 = (undefined8 *)(**(code **)*in_stack_0000000c)(&local_c);
      local_38 = *puVar13;
    }
    else {
      local_38 = 0;
    }
    pDVar6 = local_14;
    iVar11 = (**(code **)(local_14->_pad_0x0_0 + 0xc))();
    if (local_c < iVar11) {
      bVar3 = true;
      puVar14 = (undefined4 *)(**(code **)pDVar6->_pad_0x0_0)(&local_c);
      local_20 = (ReferenceController *)puVar14[1];
      *(uint32_t *)&local_28 = *puVar14;
      pRVar1 = local_20;
      if (local_20 != (ReferenceController *)0x0) {
        util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(local_20);
        local_10 = local_20;
        util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(local_20);
        util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(local_20);
        util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(local_20);
        ReferenceController__ReleaseWeakReference(local_20);
        ReferenceController__ReleaseWeakReference(local_20);
        pRVar1 = local_10;
      }
    }
    else {
      bVar2 = true;
      *(uint32_t *)&local_28 = 0;
      local_10 = (ReferenceController *)0x0;
      pRVar1 = local_10;
    }
    local_10 = pRVar1;
    iVar11 = *(int *)(local_18 + 8);
    local_1c = (ReferenceController *)(iVar11 + 1);
    Darray_L_struct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G___G___SetSize
              ((Darray_L_struct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G___G_ *)local_18,
               (int *)&local_1c);
    pDVar5 = local_18;
    bVar7 = Darray_L_struct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G___G___CheckSize
                      ((Darray_L_struct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G___G_ *)
                       local_18,iVar11);
    pRVar1 = local_10;
    if (bVar7) {
      iVar11 = *(int *)(pDVar5 + 4);
      iVar12 = *(int *)(pDVar5 + 8) * 0x10;
      local_1c = *(ReferenceController **)(iVar12 + -0xc + iVar11);
      *(undefined4 *)(iVar12 + -0x10 + iVar11) = local_28;
      *(ReferenceController **)(iVar12 + -0xc + iVar11) = local_10;
      if (local_10 != (ReferenceController *)0x0) {
        util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(local_10);
      }
      if (local_1c != (ReferenceController *)0x0) {
        ReferenceController__ReleaseWeakReference(local_1c);
      }
      *(undefined8 *)(iVar12 + -8 + iVar11) = local_38;
    }
    if (pRVar1 != (ReferenceController *)0x0) {
      ReferenceController__ReleaseWeakReference(pRVar1);
    }
    if (bVar2) {
      bVar2 = false;
    }
    if ((bVar3) && (bVar3 = false, local_20 != (ReferenceController *)0x0)) {
      ReferenceController__ReleaseWeakReference(local_20);
    }
    local_c = local_c + 1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

//==== 00527be0 AABB_util__Vec3_double___ ====


/* public:  util__AABB_L_structutil__Vec3_L_double_G__G___AABB_L_structutil__Vec3_L_double_G__G_(class
   util__Darray_L_structutil__Vec3_L_double_G__G_ const &) */

void 
util__AABB_struct_util__Vec3_double_____AABB_struct_util__Vec3_double
          (AABB_L_struct_util__Vec3_L_double_G___G_ *this,Darray_L_struct_util__Vec3_L_double_G___G_ *param_1)

{
  undefined8 stack0xfffffffc;
  double dVar1;
  int iVar2;
  undefined4 *puVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined8 uStack_14;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar2 = *(int *)param_1;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  iVar2 = (**(code **)(uintptr_t)(iVar2 + 0xc))();
  if (iVar2 < 1) {
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
  }
  else {
    iStack_c = 0;
    puVar3 = (undefined4 *)(*(code *)**(undefined4 **)param_1)(&iStack_c);
    uStack_24 = *puVar3;
    uStack_20 = puVar3[1];
    uStack_1c = puVar3[2];
    uStack_18 = puVar3[3];
    uStack_14 = *(undefined8 *)(puVar3 + 4);
  }
  iStack_c = 0;
  *(undefined4 *)(this + 0x18) = uStack_24;
  *(undefined4 *)(this + 0x1c) = uStack_20;
  *(undefined4 *)(this + 0x20) = uStack_1c;
  *(undefined4 *)(this + 0x24) = uStack_18;
  *(undefined8 *)(this + 0x28) = uStack_14;
  *(undefined4 *)this = uStack_24;
  *(undefined4 *)(this + 4) = uStack_20;
  *(undefined4 *)(this + 8) = uStack_1c;
  *(undefined4 *)(this + 0xc) = uStack_18;
  *(undefined8 *)(this + 0x10) = uStack_14;
  iVar2 = (**(code **)(*(int *)param_1 + 0xc))();
  if (iStack_c < iVar2) {
    do {
      pdVar4 = (double *)(*(code *)**(undefined4 **)param_1)(&iStack_c);
      dVar6 = *(double *)this;
      if (*pdVar4 <= *(double *)this) {
        dVar6 = *pdVar4;
      }
      dVar1 = *(double *)(this + 8);
      if (pdVar4[1] <= *(double *)(this + 8)) {
        dVar1 = pdVar4[1];
      }
      dVar5 = *(double *)(this + 0x10);
      if (pdVar4[2] <= *(double *)(this + 0x10)) {
        dVar5 = pdVar4[2];
      }
      *(double *)this = dVar6;
      *(double *)(this + 8) = dVar1;
      *(double *)(this + 0x10) = dVar5;
      dVar6 = *(double *)(this + 0x18);
      if (*(double *)(this + 0x18) <= *pdVar4) {
        dVar6 = *pdVar4;
      }
      dVar1 = *(double *)(this + 0x20);
      if (*(double *)(this + 0x20) <= pdVar4[1]) {
        dVar1 = pdVar4[1];
      }
      dVar5 = *(double *)(this + 0x28);
      if (*(double *)(this + 0x28) <= pdVar4[2]) {
        dVar5 = pdVar4[2];
      }
      iStack_c = iStack_c + 1;
      *(double *)(this + 0x18) = dVar6;
      *(double *)(this + 0x20) = dVar1;
      *(double *)(this + 0x28) = dVar5;
      iVar2 = (**(code **)(*(int *)param_1 + 0xc))();
    } while (iStack_c < iVar2);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00527d00 Darray_bool__ ====


/* public: __thiscall util__Darray_bool____Darray_bool(class util__Darray_L_bool_P_G_ const &) */

Darray_L_bool_P_G_ * __thiscall
util__Darray_bool____Darray_bool(Darray_L_bool_P_G_ *this,Darray_L_bool_P_G_ *param_1)

{
  Darray_L_bool_P_G_ *pDVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  pDVar1 = param_1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = (undefined **)(&vftable_2);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  param_1 = (Darray_L_bool_P_G_ *)(**(code **)(*(int *)param_1 + 0xc))();
  Darray_L_class_util__Reflectable_P_G___SetSize
            ((Darray_L_class_util__Reflectable_P_G_ *)this,(int *)&param_1);
  param_1 = (Darray_L_bool_P_G_ *)
            (-(uint)((int)((ulonglong)*(uint *)(this + 0xc) * 4 >> 0x20) != 0) |
            (uint)((ulonglong)*(uint *)(this + 0xc) * 4));
  puVar2 = (undefined4 *)port_op_new((uint)param_1);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    memset(puVar2,0,(size_t)(uintptr_t)((size_t)(uintptr_t)(param_1)));
  }
  *(undefined4 **)(this + 4) = puVar2;
  puVar3 = *(undefined4 **)(pDVar1 + 4);
  if (puVar3 != puVar3 + *(int *)(pDVar1 + 8)) {
    do {
      *puVar2 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (puVar3 != (undefined4 *)(*(int *)(pDVar1 + 4) + *(int *)(pDVar1 + 8) * 4));
  }
  return this;
}





//==== 00527db0 Darray_util__Vec3_double___ ====


/* public:  util__Darray_L_structutil__Vec3_L_double_G__G___Darray_L_structutil__Vec3_L_double_G___G_(int) */

Darray_L_struct_util__Vec3_L_double_G___G_ * 
util__Darray_struct_util__Vec3_double_____Darray_struct_util__Vec3_double
          (Darray_L_struct_util__Vec3_L_double_G___G_ *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  
  *(undefined ***)this = (undefined **)(&vftable_17);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(int *)(this + 0xc) = param_1;
  if ((param_1 < 0) || (0x3fffffff < param_1)) {
    *(undefined4 *)(this + 0xc) = 0;
  }
  else if (0 < param_1) {
    pvVar3 = (void *)(uintptr_t)(port_op_new(-(uint)((int)((ulonglong)(uint)param_1 * 0x18 >> 0x20) != 0) |
                            (uint)((ulonglong)(uint)param_1 * 0x18)));
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else if (param_1 != 0) {
      puVar4 = (undefined8 *)((int)pvVar3 + 0x10);
      do {
        *puVar4 = 0;
        *(undefined4 *)(puVar4 + -2) = 0;
        *(undefined4 *)((int)puVar4 + -0xc) = 0;
        *(undefined4 *)(puVar4 + -1) = 0;
        *(undefined4 *)((int)puVar4 + -4) = 0;
        param_1 = param_1 + -1;
        puVar4 = puVar4 + 3;
      } while (param_1 != 0);
    }
    iVar6 = 0;
    *(void **)(this + 4) = pvVar3;
    if (0 < *(int *)(this + 0xc)) {
      iVar5 = 0;
      do {
        iVar2 = *(int *)(this + 4);
        iVar5 = iVar5 + 0x18;
        iVar6 = iVar6 + 1;
        puVar1 = (undefined4 *)(iVar2 + -0x18 + iVar5);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        *(undefined8 *)(iVar2 + -8 + iVar5) = 0;
      } while (iVar6 < *(int *)(this + 0xc));
      return this;
    }
  }
  return this;
}





//==== 00527e70 Darray_util__Darray_util__SharedPtr_ModuleCompartment_____ ====


/* public:  util__Darray_L_classutil__Darray_L_classutil__SharedPtr_L_struct_ModuleCompartment_G__G__G___Darray_L_classutil__Darray_L_classutil__SharedPtr_L_structModuleCompartment_G___G__G_(int) */

Darray_L_class_util__Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G___G_ * 
util__Darray_class_util__Darray_class_util__SharedPtr_struct_ModuleCompartment_______Darray_class_util__Darray_class_util__SharedPtr_struct_ModuleCompartment
          (Darray_L_class_util__Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G___G_ *this,
          int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined **ppuStack_14;
  SharedPtr_L_struct_ModuleCompartment_G_ *pSStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  *(undefined ***)this = &vftable_116;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(int *)(this + 0xc) = param_1;
  if ((param_1 < 0) || (0x3fffffff < param_1)) {
    *(undefined4 *)(this + 0xc) = 0;
  }
  else if (0 < param_1) {
    uVar3 = -(uint)((int)((ulonglong)(uint)param_1 * 0x10 >> 0x20) != 0) |
            (uint)((ulonglong)(uint)param_1 * 0x10);
    piVar1 = (int *)port_op_new(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      *piVar1 = param_1;
      piVar1 = piVar1 + 1;
      piVar2 = piVar1;
      if (param_1 != 0) {
        do {
          *piVar2 = (int)&vftable_112;
          piVar2[1] = 0;
          piVar2[2] = 0;
          piVar2[3] = 0;
          param_1 = param_1 + -1;
          piVar2 = piVar2 + 4;
        } while (param_1 != 0);
      }
    }
    iVar5 = 0;
    *(int **)(this + 4) = piVar1;
    if (0 < *(int *)(this + 0xc)) {
      iVar4 = 0;
      do {
        ppuStack_14 = (undefined **)(&vftable_112);
        pSStack_10 = (SharedPtr_L_struct_ModuleCompartment_G_ *)0x0;
        uStack_c = 0;
        uStack_8 = 0;
        Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G___op_assign
                  ((Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *)
                   (*(int *)(this + 4) + iVar4),
                   (Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *)&ppuStack_14);
        ppuStack_14 = (undefined **)(&vftable_112);
        if (pSStack_10 != (SharedPtr_L_struct_ModuleCompartment_G_ *)0x0) {
          SharedPtr_L_struct_ModuleCompartment_G____vector_deleting_destructor_(pSStack_10,3);
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x10;
      } while (iVar5 < *(int *)(this + 0xc));
      return this;
    }
  }
  return this;
}





//==== 00527fa0 Darray_util__SharedPtr_ModuleCompartment___ ====


/* public:  util__Darray_L_classutil__SharedPtr_L_structModuleCompartment_G__G___Darray_L_class_util__SharedPtr_L_structModuleCompartment_G__G_(int) */

Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ * 
util__Darray_class_util__SharedPtr_struct_ModuleCompartment_____Darray_class_util__SharedPtr_struct_ModuleCompartment
          (Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *this,int param_1)

{
  int iVar1;
  ReferenceController *this_00;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  ReferenceControllerRegistry *this_01;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  
  *(undefined ***)this = (undefined **)(&vftable_112);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(int *)(this + 0xc) = param_1;
  if ((param_1 < 0) || (0x3fffffff < param_1)) {
    *(undefined4 *)(this + 0xc) = 0;
  }
  else if (0 < param_1) {
    uVar5 = -(uint)((int)((ulonglong)(uint)param_1 * 8 >> 0x20) != 0) |
            (uint)((ulonglong)(uint)param_1 * 8);
    piVar3 = (int *)port_op_new(-(uint)(0xfffffffb < uVar5) | uVar5 + 4);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      *piVar3 = param_1;
      piVar3 = piVar3 + 1;
      piVar4 = piVar3;
      if (param_1 != 0) {
        do {
          *piVar4 = 0;
          piVar4[1] = 0;
          param_1 = param_1 + -1;
          piVar4 = piVar4 + 2;
        } while (param_1 != 0);
      }
    }
    iVar6 = 0;
    *(int **)(this + 4) = piVar3;
    if (0 < *(int *)(this + 0xc)) {
      do {
        iVar1 = *(int *)(this + 4);
        this_00 = *(ReferenceController **)(iVar1 + 4 + iVar6 * 8);
        puVar7 = *(undefined4 **)(iVar1 + iVar6 * 8);
        *(undefined4 *)(iVar1 + iVar6 * 8) = 0;
        *(undefined4 *)(iVar1 + 4 + iVar6 * 8) = 0;
        if ((this_00 != (ReferenceController *)0x0) &&
           (bVar2 = ReferenceController__ReleaseStrongReference(this_00), bVar2)) {
          if (puVar7 != (undefined4 *)0x0) {
            (**(code **)*puVar7)(1);
          }
          this_01 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
          ReferenceControllerRegistry__PointerWasDestroyed(this_01,puVar7);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(this + 0xc));
      return this;
    }
  }
  return this;
}





//==== 005280b0 Darray_util__WeakPtr_ModuleCompartment___ ====


/* public:  util__Darray_L_classutil__WeakPtr_L_structModuleCompartment_G__G___Darray_L_class_util__WeakPtr_L_structModuleCompartment_G__G_(class util__Darray_L_classutil__WeakPtr_L_struct_ModuleCompartment_G__G_ const &) */

Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ * 
util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment
          (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *this,
          Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *param_1)

{
  ReferenceController *this_00;
  ReferenceController *this_01;
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iStack_8;
  
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = (undefined **)(&vftable_74);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  iStack_8 = (**(code **)(*(int *)param_1 + 0xc))();
  Darray_L_class_util__WeakPtr_L_class_Body_G___G___SetSize
            ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)this,&iStack_8);
  uVar3 = *(uint *)(this + 0xc);
  uVar2 = -(uint)((int)((ulonglong)uVar3 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar3 * 8);
  puVar1 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar2) | uVar2 + 4);
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
  *(uint **)(this + 4) = puVar1;
  puVar4 = *(uint **)(param_1 + 4);
  if (puVar4 != puVar4 + *(int *)(param_1 + 8) * 2) {
    puVar1 = puVar1 + 1;
    do {
      this_00 = (ReferenceController *)*puVar1;
      puVar1[-1] = *puVar4;
      this_01 = (ReferenceController *)puVar4[1];
      *puVar1 = (uint)this_01;
      if (this_01 != (ReferenceController *)0x0) {
        util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(this_01);
      }
      if (this_00 != (ReferenceController *)0x0) {
        ReferenceController__ReleaseWeakReference(this_00);
      }
      puVar4 = puVar4 + 2;
      puVar1 = puVar1 + 2;
    } while (puVar4 != (uint *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 8));
    return this;
  }
  return this;
}





//==== 005281b0 Darray_util__WeakPtr_Body____005281b0 ====


/* public:  util__Darray_L_classutil__WeakPtr_L_classBody_G__G___Darray_L_class_util__WeakPtr_L_classBody_G__G_(int) */

Darray_L_class_util__WeakPtr_L_class_Body_G___G_ * 
util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body
          (Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *this,int param_1)

{
  int iVar1;
  ReferenceController *this_00;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  *(undefined ***)this = (undefined **)(&vftable_74);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(int *)(this + 0xc) = param_1;
  if ((param_1 < 0) || (0x3fffffff < param_1)) {
    *(undefined4 *)(this + 0xc) = 0;
  }
  else if (0 < param_1) {
    uVar4 = -(uint)((int)((ulonglong)(uint)param_1 * 8 >> 0x20) != 0) |
            (uint)((ulonglong)(uint)param_1 * 8);
    piVar2 = (int *)port_op_new(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      *piVar2 = param_1;
      piVar2 = piVar2 + 1;
      piVar3 = piVar2;
      if (param_1 != 0) {
        do {
          *piVar3 = 0;
          piVar3[1] = 0;
          param_1 = param_1 + -1;
          piVar3 = piVar3 + 2;
        } while (param_1 != 0);
      }
    }
    iVar5 = 0;
    *(int **)(this + 4) = piVar2;
    if (0 < *(int *)(this + 0xc)) {
      do {
        iVar1 = *(int *)(this + 4);
        this_00 = *(ReferenceController **)(iVar1 + 4 + iVar5 * 8);
        *(undefined4 *)(iVar1 + iVar5 * 8) = 0;
        *(undefined4 *)(iVar1 + 4 + iVar5 * 8) = 0;
        if (this_00 != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(this_00);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(this + 0xc));
      return this;
    }
  }
  return this;
}





//==== 005282a0 Darray_util__WeakPtr_SpacecraftComponent____005282a0 ====


/* public:  util__Darray_L_classutil__WeakPtr_L_classSpacecraftComponent_G__G___Darray_L_class_util__WeakPtr_L_classSpacecraftComponent_G__G_(int) */

Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ * 
util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent
          (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *this,int param_1)

{
  int iVar1;
  ReferenceController *this_00;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  *(undefined ***)this = &vftable_66;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(int *)(this + 0xc) = param_1;
  if ((param_1 < 0) || (0x3fffffff < param_1)) {
    *(undefined4 *)(this + 0xc) = 0;
  }
  else if (0 < param_1) {
    uVar4 = -(uint)((int)((ulonglong)(uint)param_1 * 8 >> 0x20) != 0) |
            (uint)((ulonglong)(uint)param_1 * 8);
    piVar2 = (int *)port_op_new(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      *piVar2 = param_1;
      piVar2 = piVar2 + 1;
      piVar3 = piVar2;
      if (param_1 != 0) {
        do {
          *piVar3 = 0;
          piVar3[1] = 0;
          param_1 = param_1 + -1;
          piVar3 = piVar3 + 2;
        } while (param_1 != 0);
      }
    }
    iVar5 = 0;
    *(int **)(this + 4) = piVar2;
    if (0 < *(int *)(this + 0xc)) {
      do {
        iVar1 = *(int *)(this + 4);
        this_00 = *(ReferenceController **)(iVar1 + 4 + iVar5 * 8);
        *(undefined4 *)(iVar1 + iVar5 * 8) = 0;
        *(undefined4 *)(iVar1 + 4 + iVar5 * 8) = 0;
        if (this_00 != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(this_00);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(this + 0xc));
      return this;
    }
  }
  return this;
}





//==== 00528c90 Darray_util__tuple2_util__WeakPtr_EngineCompartment__double___ ====


/* public: virtual  Darray_L_structutil__tuple2_L_classutil__WeakPtr_L_struct_EngineCompartment_G__Cdouble_G__G___dtor(void) */

void __thiscall
util__Darray_struct_util__tuple2_class_util__WeakPtr_struct_EngineCompartment__double______Darray_struct_util__tuple2_class_util__WeakPtr_struct_EngineCompartment__double(Darray_L_struct_util__tuple2_L_class_util__WeakPtr_L_struct_EngineCompartment_G__Cdouble_G___G_ *this)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(this + 4);
  *(undefined ***)this = &vftable_117;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
    if (iVar3 != 0) {
      iVar4 = iVar3 * 0x10 + 4 + iVar2;
      do {
        puVar1 = (undefined4 *)(iVar4 + -0x10);
        iVar4 = iVar4 + -0x10;
        iVar3 = iVar3 + -1;
        if ((ReferenceController *)*puVar1 != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference((ReferenceController *)*puVar1);
        }
      } while (iVar3 != 0);
      iVar3 = *(int *)(iVar2 + -4);
    }
    port_op_delete((int *)(iVar2 + -4),iVar3 * 0x10 + 4);
  }
  *(undefined ***)this = (undefined **)(&vftable);
  *(undefined4 *)(this + 4) = 0;
  return;
}





//==== 00528d00 Darray_CompartmentCollisionShell_ ====


/* public: virtual __thiscall util__Darray_struct_CompartmentCollisionShell____Darray_struct_CompartmentCollisionShell(void) */

void __thiscall
util__Darray_struct_CompartmentCollisionShell____Darray_struct_CompartmentCollisionShell(Darray_L_struct_CompartmentCollisionShell_G_ *this)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(this + 4);
  *(undefined ***)this = (undefined **)(&vftable_114);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
    if (iVar3 != 0) {
      iVar4 = iVar3 * 0x118 + 4 + iVar2;
      do {
        puVar1 = (undefined4 *)(iVar4 + -0x118);
        iVar4 = iVar4 + -0x118;
        iVar3 = iVar3 + -1;
        if ((ReferenceController *)*puVar1 != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference((ReferenceController *)*puVar1);
        }
      } while (iVar3 != 0);
      iVar3 = *(int *)(iVar2 + -4);
    }
    port_op_delete((int *)(iVar2 + -4),iVar3 * 0x118 + 4);
  }
  *(undefined ***)this = (undefined **)(&vftable);
  *(undefined4 *)(this + 4) = 0;
  return;
}





//==== 00528d80 operator__00528d80 ====


/* public: class util__Darray_L_structMaterialConstituent_G_ &  util__Darray_struct_MaterialConstituent___operator(class util__Darray_L_structMaterialConstituent_G_ const &) */

Darray_L_struct_MaterialConstituent_G_ * 
util__Darray_struct_MaterialConstituent___operator
          (Darray_L_struct_MaterialConstituent_G_ *this,Darray_L_struct_MaterialConstituent_G_ *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Darray_L_struct_MaterialConstituent_G_ *pDVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  
  pDVar5 = param_1;
  param_1 = (Darray_L_struct_MaterialConstituent_G_ *)(**(code **)(*(int *)param_1 + 0xc))();
  SetSize(this,(int *)&param_1);
  iVar6 = (**(code **)(*(int *)pDVar5 + 0xc))();
  if (iVar6 == 0) {
    (**(code **)(*(int *)this + 0x10))();
    return this;
  }
  uVar9 = *(uint *)(this + 8);
  if ((int)uVar9 < 0) {
    param_1 = (Darray_L_struct_MaterialConstituent_G_ *)0x0;
    SetSize(this,(int *)&param_1);
    uVar9 = *(uint *)(this + 8);
  }
  if (0x3fffffff < (int)uVar9) {
    param_1 = (Darray_L_struct_MaterialConstituent_G_ *)0x3fffffff;
    SetSize(this,(int *)&param_1);
    uVar9 = *(uint *)(this + 8);
  }
  uVar10 = *(uint *)(this + 0xc);
  if ((int)uVar10 < (int)uVar9) {
    if (uVar10 == 0) {
      *(uint *)(this + 0xc) = uVar9;
      uVar10 = uVar9;
    }
    if ((int)uVar10 < (int)uVar9) {
      do {
        uVar10 = uVar10 * 2;
      } while ((int)uVar10 < (int)uVar9);
      *(uint *)(this + 0xc) = uVar10;
    }
    if (0x3fffffff < (int)uVar10) {
      *(undefined4 *)(this + 0xc) = 0x3fffffff;
      uVar10 = 0x3fffffff;
    }
    if (*(void **)(this + 4) != (void *)0x0) {
      port_op_delete(*(void **)(this + 4));
      uVar10 = *(uint *)(this + 0xc);
    }
    *(undefined4 *)(this + 4) = 0;
    puVar7 = (undefined4 *)
             port_op_new(-(uint)((int)((ulonglong)uVar10 * 0x10 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar10 * 0x10));
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar8 = puVar7;
      if (uVar10 != 0) {
        do {
          *puVar8 = 0;
          *(undefined8 *)(puVar8 + 2) = 0;
          uVar10 = uVar10 - 1;
          puVar8 = puVar8 + 4;
        } while (uVar10 != 0);
        *(undefined4 **)(this + 4) = puVar7;
        goto LAB_00528ea2;
      }
    }
    *(undefined4 **)(this + 4) = puVar7;
  }
  else {
    puVar7 = *(undefined4 **)(this + 4);
  }
LAB_00528ea2:
  puVar8 = *(undefined4 **)(pDVar5 + 4);
  if (puVar8 != puVar8 + *(int *)(pDVar5 + 8) * 4) {
    do {
      uVar1 = *puVar8;
      uVar2 = puVar8[1];
      uVar3 = puVar8[2];
      uVar4 = puVar8[3];
      puVar8 = puVar8 + 4;
      *puVar7 = uVar1;
      puVar7[1] = uVar2;
      puVar7[2] = uVar3;
      puVar7[3] = uVar4;
      puVar7 = puVar7 + 4;
    } while (puVar8 != (undefined4 *)(*(int *)(pDVar5 + 8) * 0x10 + *(int *)(pDVar5 + 4)));
  }
  return this;
}





//==== 00528ee0 operator__00528ee0 ====


/* public: class util__Darray_L_classutil__SharedPtr_L_structModuleCompartment_G__G_ & 
   util__Darray_class_util__SharedPtr_struct_ModuleCompartment_____operator(class
   util__Darray_L_classutil__SharedPtr_L_structModuleCompartment_G__G_ const &) */

Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ * 
util__Darray_class_util__SharedPtr_struct_ModuleCompartment_____operator__o2
          (Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *this,
          Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *param_1)

{
  ReferenceController *this_00;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  ReferenceControllerRegistry *this_01;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  ReferenceController *pRStack_8;
  
  pRStack_8 = (ReferenceController *)(**(code **)(*(int *)param_1 + 0xc))();
  SetSize(this,(int *)&pRStack_8);
  iVar2 = (**(code **)(*(int *)param_1 + 0xc))();
  if (iVar2 == 0) {
    (**(code **)(*(int *)this + 0x10))();
    return this;
  }
  uVar5 = *(uint *)(this + 8);
  if ((int)uVar5 < 0) {
    pRStack_8 = (ReferenceController *)0x0;
    SetSize(this,(int *)&pRStack_8);
    uVar5 = *(uint *)(this + 8);
  }
  if (0x3fffffff < (int)uVar5) {
    pRStack_8 = (ReferenceController *)0x3fffffff;
    SetSize(this,(int *)&pRStack_8);
    uVar5 = *(uint *)(this + 8);
  }
  uVar6 = *(uint *)(this + 0xc);
  if ((int)uVar6 < (int)uVar5) {
    if (uVar6 == 0) {
      *(uint *)(this + 0xc) = uVar5;
      uVar6 = uVar5;
    }
    if ((int)uVar6 < (int)uVar5) {
      do {
        uVar6 = uVar6 * 2;
      } while ((int)uVar6 < (int)uVar5);
      *(uint *)(this + 0xc) = uVar6;
    }
    if (0x3fffffff < (int)uVar6) {
      *(undefined4 *)(this + 0xc) = 0x3fffffff;
      uVar6 = 0x3fffffff;
    }
    if (*(SharedPtr_L_struct_ModuleCompartment_G_ **)(this + 4) !=
        (SharedPtr_L_struct_ModuleCompartment_G_ *)0x0) {
      SharedPtr_L_struct_ModuleCompartment_G____vector_deleting_destructor_
                (*(SharedPtr_L_struct_ModuleCompartment_G_ **)(this + 4),3);
      uVar6 = *(uint *)(this + 0xc);
    }
    *(undefined4 *)(this + 4) = 0;
    uVar5 = -(uint)((int)((ulonglong)uVar6 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 8);
    puVar3 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar5) | uVar5 + 4);
    if (puVar3 == (uint *)0x0) {
      puVar3 = (uint *)0x0;
    }
    else {
      *puVar3 = uVar6;
      puVar3 = puVar3 + 1;
      puVar4 = puVar3;
      if (uVar6 != 0) {
        do {
          *puVar4 = 0;
          puVar4[1] = 0;
          uVar6 = uVar6 - 1;
          puVar4 = puVar4 + 2;
        } while (uVar6 != 0);
        *(uint **)(this + 4) = puVar3;
        goto LAB_00529014;
      }
    }
    *(uint **)(this + 4) = puVar3;
  }
  else {
    puVar3 = *(uint **)(this + 4);
  }
LAB_00529014:
  puVar4 = *(uint **)(param_1 + 4);
  if (puVar4 == puVar4 + *(int *)(param_1 + 8) * 2) {
    return this;
  }
  do {
    puVar7 = (undefined4 *)*puVar3;
    pRStack_8 = (ReferenceController *)puVar3[1];
    *puVar3 = *puVar4;
    this_00 = (ReferenceController *)puVar4[1];
    puVar3[1] = (uint)this_00;
    if (this_00 != (ReferenceController *)0x0) {
      ReferenceController__AddStrongReference(this_00);
    }
    if ((pRStack_8 != (ReferenceController *)0x0) &&
       (bVar1 = ReferenceController__ReleaseStrongReference(pRStack_8), bVar1)) {
      if (puVar7 != (undefined4 *)0x0) {
        (**(code **)*puVar7)(1);
      }
      this_01 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
      ReferenceControllerRegistry__PointerWasDestroyed(this_01,puVar7);
    }
    puVar4 = puVar4 + 2;
    puVar3 = puVar3 + 2;
  } while (puVar4 != (uint *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 8));
  return this;
}





//==== 005290a0 operator__005290a0 ====


/* public: class util__Darray_L_classutil__WeakPtr_L_classSpacecraftComponent_G__G_ & 
   util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator(class util__Darray_L_class_util__WeakPtr_L_classSpacecraftComponent_G__G_ const &) */

Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ * 
util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
          (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *this,
          Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *param_1)

{
  ReferenceController *this_00;
  ReferenceController *this_01;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iStack_8;
  
  iStack_8 = (**(code **)(*(int *)param_1 + 0xc))();
  Darray_L_class_util__WeakPtr_L_class_Body_G___G___SetSize
            ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)this,&iStack_8);
  iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
  if (iVar1 == 0) {
    (**(code **)(*(int *)this + 0x10))();
    return this;
  }
  CheckSizeDestructive(this);
  puVar3 = *(undefined4 **)(this + 4);
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (puVar2 != puVar2 + *(int *)(param_1 + 8) * 2) {
    do {
      this_00 = (ReferenceController *)puVar3[1];
      *puVar3 = *puVar2;
      this_01 = (ReferenceController *)puVar2[1];
      puVar3[1] = (undefined4)(uintptr_t)(this_01);
      if (this_01 != (ReferenceController *)0x0) {
        util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(this_01);
      }
      if (this_00 != (ReferenceController *)0x0) {
        ReferenceController__ReleaseWeakReference(this_00);
      }
      puVar2 = puVar2 + 2;
      puVar3 = puVar3 + 2;
    } while (puVar2 != (undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 8));
    return this;
  }
  return this;
}





//==== 005291b0 operator___005291b0 ====


/* public: struct util__tuple2_L_classutil__WeakPtr_L_classBody_G__Cdouble_G_ * 
   util__Maybe_struct_util__tuple2_class_util__WeakPtr_class_Body__double_____operator(void) */

tuple2_L_class_util__WeakPtr_L_class_Body_G__Cdouble_G_ * 
util__Maybe_struct_util__tuple2_class_util__WeakPtr_class_Body__double_____operator__o2
          (Maybe_L_struct_util__tuple2_L_class_util__WeakPtr_L_class_Body_G__Cdouble_G___G_ *this)

{
  if (*(char *)&(this[0x10]) == 0) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,"IsValid()",
              (char *)0x0);
    DebugBreak();
  }
  return (tuple2_L_class_util__WeakPtr_L_class_Body_G__Cdouble_G_ *)this;
}





//==== 0052a320 vector_deleting_destructor_0052a320 ====


/* public: virtual void * __thiscall util__Darray_L_classutil__SharedPtr_L_structModuleCompartment_G___G_:: 0 vectordeletingdestructor(unsigned int) */

void * 
util__Darray_class_util__SharedPtr_struct_ModuleCompartment______vector_deleting_destructor
          (Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *this,uint param_1)

{
  Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *pDVar1;
  Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *pDVar2;
  Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *pDVar3;
  int iVar4;
  
  if ((param_1 & 2) != 0) {
    pDVar1 = this + -4;
    iVar4 = *(int *)pDVar1;
    pDVar3 = this + iVar4 * 0x10;
    while (iVar4 != 0) {
      pDVar2 = pDVar3 + -0x10;
      iVar4 = iVar4 + -1;
      *(undefined ***)pDVar2 = (undefined **)(&vftable_112);
      if (*(SharedPtr_L_struct_ModuleCompartment_G_ **)(pDVar3 + -0xc) !=
          (SharedPtr_L_struct_ModuleCompartment_G_ *)0x0) {
        SharedPtr_L_struct_ModuleCompartment_G____vector_deleting_destructor_
                  (*(SharedPtr_L_struct_ModuleCompartment_G_ **)(pDVar3 + -0xc),3);
      }
      *(undefined4 *)(pDVar3 + -0xc) = 0;
      *(undefined ***)pDVar2 = (undefined **)(&vftable);
      pDVar3 = pDVar2;
    }
    if ((param_1 & 1) != 0) {
      port_op_delete(pDVar1,*(int *)pDVar1 * 0x10 + 4);
    }
    return this + -4;
  }
  *(undefined ***)this = (undefined **)(&vftable_112);
  if (*(SharedPtr_L_struct_ModuleCompartment_G_ **)(this + 4) !=
      (SharedPtr_L_struct_ModuleCompartment_G_ *)0x0) {
    SharedPtr_L_struct_ModuleCompartment_G____vector_deleting_destructor_
              (*(SharedPtr_L_struct_ModuleCompartment_G_ **)(this + 4),3);
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = (undefined **)(&vftable);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 0052a3d0 scalar_deleting_destructor_0052a3d0 ====


/* public: virtual void * __thiscall util__Darray_L_structutil__tuple2_L_classutil__WeakPtr_L_struct_EngineCompartment_G__Cdouble_G__G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_util__tuple2_class_util__WeakPtr_struct_EngineCompartment__double______scalar_deleting_destructor__o2
          (Darray_L_struct_util__tuple2_L_class_util__WeakPtr_L_struct_EngineCompartment_G__Cdouble_G___G_ *this,
          uint param_1)

{
  util__Darray_struct_util__tuple2_class_util__WeakPtr_struct_EngineCompartment__double______scalar_deleting_destructor(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 0052a400 scalar_deleting_destructor_0052a400 ====


/* public: virtual void * __thiscall util__Darray_L_structCompartmentCollisionShell_G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_CompartmentCollisionShell____scalar_deleting_destructor
          (Darray_L_struct_CompartmentCollisionShell_G_ *this,uint param_1)

{
  util__Darray_struct_CompartmentCollisionShell____Darray_struct_CompartmentCollisionShell(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 0052a430 scalar_deleting_destructor_0052a430 ====


/* public: virtual void * __thiscall util__Darray_L_classutil__Darray_L_classutil__SharedPtr_L_struct_ModuleCompartment_G__G__G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_class_util__Darray_class_util__SharedPtr_struct_ModuleCompartment________scalar_deleting_destructor
          (Darray_L_class_util__Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G___G_ *this,
          uint param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 4);
  *(undefined ***)this = &vftable_116;
  if (piVar1 != (int *)0x0) {
    if (piVar1[-1] == 0) {
      port_op_delete(piVar1 + -1);
    }
    else {
      (**(code **)(uintptr_t)(*piVar1 + 0x18))(3);
    }
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = (undefined **)(&vftable);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 0052a490 Add_0052a490 ====


/* public: bool  util__Darray_L_classutil__SharedPtr_L_structModuleCompartment_G__G___Add(class
   util__SharedPtr_L_structModuleCompartment_G_ const &) */

bool 
util__Darray_class_util__SharedPtr_struct_ModuleCompartment_____Add
          (Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *this,
          SharedPtr_L_struct_ModuleCompartment_G_ *param_1)

{
  int iVar1;
  ReferenceController *this_00;
  ReferenceController *this_01;
  bool bVar2;
  ReferenceControllerRegistry *this_02;
  undefined4 *puVar3;
  int iStack_8;
  
  iVar1 = *(int *)(this + 8);
  iStack_8 = iVar1 + 1;
  SetSize(this,&iStack_8);
  bVar2 = CheckSize(this,iVar1);
  if (!bVar2) {
  }
  puVar3 = *(undefined4 **)(*(int *)(this + 4) + -8 + *(int *)(this + 8) * 8);
  iVar1 = *(int *)(this + 4) + *(int *)(this + 8) * 8;
  this_00 = *(ReferenceController **)(iVar1 + -4);
  *(undefined4 *)(iVar1 + -8) = *(undefined4 *)param_1;
  this_01 = *(ReferenceController **)(param_1 + 4);
  *(ReferenceController **)(iVar1 + -4) = this_01;
  if (this_01 != (ReferenceController *)0x0) {
    ReferenceController__AddStrongReference(this_01);
  }
  if (this_00 != (ReferenceController *)0x0) {
    bVar2 = ReferenceController__ReleaseStrongReference(this_00);
    if (bVar2) {
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
      this_02 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
      ReferenceControllerRegistry__PointerWasDestroyed(this_02,puVar3);
    }
  }
  return true;
}





//==== 0052a520 AngleClamped ====


/* public: struct util__Quaternion_L_double_G_ 
   util__Quaternion_double___AngleClamped(double)const  */

Quaternion_L_double_G_ * 
util__Quaternion_double___AngleClamped
          (Quaternion_L_double_G_ *this,Quaternion_L_double_G_ *__return_storage_ptr__,double param_1)

{
  double dVar1;
  undefined4 in_stack_00000008;
  undefined1 auStack_78 [16];
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  uint uStack_44;
  
  uStack_44 = __security_cookie ^ (uint)auStack_78;
  dVar1 = this->W;
  if (this->W <= 0.0) {
    dVar1 = 0.0;
  }
  if (1.0 <= dVar1) {
    dVar1 = 1.0;
  }
  dStack_68 = SafeACos_L_double_G_(dVar1);
  dStack_68 = dStack_68 + dStack_68;
  dVar1 = 1.0 - this->W * this->W;
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  if (1.0 <= dVar1) {
    dVar1 = 1.0;
  }
  libm_sse2_sqrt_precise(0.0);
  dStack_60 = this->X;
  dStack_58 = this->Y;
  dStack_50 = this->Z;
  if (1e-08 < dVar1) {
    dVar1 = 1.0 / dVar1;
    dStack_60 = dVar1 * dStack_60;
    dStack_58 = dStack_58 * dVar1;
    dStack_50 = dVar1 * dStack_50;
  }
  if ((double)CONCAT44((*(uint32_t*)&(param_1)),in_stack_00000008) <= dStack_68) {
    dStack_68 = (double)CONCAT44((*(uint32_t*)&(param_1)),in_stack_00000008);
  }
  dVar1 = dStack_68 * 0.5;
  dStack_68 = dVar1;
  libm_sse2_sin_precise(0.0);
  __return_storage_ptr__->Z = dVar1 * dStack_50;
  __return_storage_ptr__->X = dVar1 * dStack_60;
  __return_storage_ptr__->Y = dVar1 * dStack_58;
  dVar1 = dStack_68;
  libm_sse2_cos_precise(0.0);
  __return_storage_ptr__->W = dVar1;
  __security_check_cookie(uStack_44 ^ (uint)auStack_78);
  return __return_storage_ptr__;
}





//==== 0052ac10 CheckSize_0052ac10 ====


/* private: bool  util__Darray_L_structutil__tuple2_L_classutil__WeakPtr_L_class_Fleet_G__Cdouble_G__G___CheckSize(int) */

bool 
util__Darray_struct_util__tuple2_class_util__WeakPtr_class_Fleet__double_____CheckSize
          (Darray_L_struct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G___G_ *this,int param_1)

{
  ReferenceController *this_00;
  ReferenceController *this_01;
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  bool bVar8;
  uint *puStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar2 = *(uint *)(this + 8);
  bVar8 = -1 < (int)uVar2;
  bVar1 = !bVar8;
  if (bVar1) {
    puStack_c = (uint *)0x0;
    SetSize(this,(int *)&puStack_c);
    uVar2 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar1;
  bVar1 = (int)uVar2 < 0x40000000;
  if (!bVar1) {
    puStack_c = (uint *)0x3fffffff;
    SetSize(this,(int *)&puStack_c);
    uVar2 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar4 = *(uint *)(this + 0xc);
  if ((int)uVar2 <= (int)uVar4) {
    return bVar1 && bVar8;
  }
  if (uVar4 == 0) {
    *(uint *)(this + 0xc) = uVar2;
    uVar4 = uVar2;
  }
  if ((int)uVar4 < (int)uVar2) {
    do {
      uVar4 = uVar4 * 2;
    } while ((int)uVar4 < (int)uVar2);
    *(uint *)(this + 0xc) = uVar4;
  }
  if (0x3fffffff < (int)uVar4) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar4 = 0x3fffffff;
  }
  uVar2 = -(uint)((int)((ulonglong)uVar4 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 0x10);
  puStack_c = (uint *)port_op_new(-(uint)(0xfffffffb < uVar2) | uVar2 + 4);
  if (puStack_c == (uint *)0x0) {
    puStack_c = (uint *)0x0;
  }
  else {
    *puStack_c = uVar4;
    puStack_c = puStack_c + 1;
    puVar3 = puStack_c;
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3 = puVar3 + 4;
    }
  }
  puVar3 = *(uint **)(this + 4);
  if (puVar3 != (uint *)0x0) {
    puVar7 = puStack_c + *(int *)(this + 8) * 4;
    if (puVar3 != puVar3 + param_1 * 4) {
      puVar5 = puStack_c + 1;
      puVar6 = puVar3;
      do {
        if (puVar5 + -1 == puVar7) break;
        this_00 = (ReferenceController *)*puVar5;
        puVar5[-1] = *puVar6;
        this_01 = (ReferenceController *)puVar6[1];
        *puVar5 = (uint)this_01;
        if (this_01 != (ReferenceController *)0x0) {
          util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(this_01);
        }
        if (this_00 != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(this_00);
        }
        puVar3 = puVar6 + 2;
        puVar6 = puVar6 + 4;
        *(undefined8 *)(puVar5 + 1) = *(undefined8 *)puVar3;
        puVar5 = puVar5 + 4;
        puVar3 = *(uint **)(this + 4);
      } while (puVar6 != puVar3 + param_1 * 4);
    }
    if (puVar3 != (uint *)0x0) {
      uVar2 = puVar3[-1];
      if (uVar2 != 0) {
        puVar7 = puVar3 + uVar2 * 4 + 1;
        do {
          puVar6 = puVar7 + -4;
          puVar7 = puVar7 + -4;
          uVar2 = uVar2 - 1;
          if ((ReferenceController *)*puVar6 != (ReferenceController *)0x0) {
            ReferenceController__ReleaseWeakReference((ReferenceController *)*puVar6);
          }
        } while (uVar2 != 0);
        uVar2 = puVar3[-1];
      }
      port_op_delete(puVar3 + -1,uVar2 * 0x10 + 4);
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(uint **)(this + 4) = puStack_c;
  return bStack_5;
}





//==== 0052adf0 CheckSize_0052adf0 ====


/* private: bool  util__Darray_L_classutil__Darray_L_classutil__SharedPtr_L_struct_ModuleCompartment_G__G__G___CheckSize(int) */

bool 
util__Darray_class_util__Darray_class_util__SharedPtr_struct_ModuleCompartment_______CheckSize
          (Darray_L_class_util__Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G___G_ *this,
          int param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *pDVar4;
  Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *pDVar5;
  Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *this_00;
  uint uVar6;
  Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *pDVar7;
  bool bVar8;
  Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *pDStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar3 = *(uint *)(this + 8);
  bVar8 = -1 < (int)uVar3;
  bVar1 = !bVar8;
  if (bVar1) {
    pDStack_c = (Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *)0x0;
    SetSize(this,(int *)&pDStack_c);
    uVar3 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar1;
  bVar1 = (int)uVar3 < 0x40000000;
  if (!bVar1) {
    pDStack_c = (Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *)0x3fffffff;
    SetSize(this,(int *)&pDStack_c);
    uVar3 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar6 = *(uint *)(this + 0xc);
  if ((int)uVar3 <= (int)uVar6) {
    return bVar1 && bVar8;
  }
  if (uVar6 == 0) {
    *(uint *)(this + 0xc) = uVar3;
    uVar6 = uVar3;
  }
  if ((int)uVar6 < (int)uVar3) {
    do {
      uVar6 = uVar6 * 2;
    } while ((int)uVar6 < (int)uVar3);
    *(uint *)(this + 0xc) = uVar6;
  }
  if (0x3fffffff < (int)uVar6) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar6 = 0x3fffffff;
  }
  uVar3 = -(uint)((int)((ulonglong)uVar6 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 0x10);
  puVar2 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
  if (puVar2 == (uint *)0x0) {
    pDStack_c = (Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *)0x0;
  }
  else {
    *puVar2 = uVar6;
    pDStack_c = (Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *)(puVar2 + 1);
    pDVar4 = pDStack_c;
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined ***)pDVar4 = (undefined **)(&vftable_112);
      *(undefined4 *)(pDVar4 + 4) = 0;
      *(undefined4 *)(pDVar4 + 8) = 0;
      *(undefined4 *)(pDVar4 + 0xc) = 0;
      pDVar4 = pDVar4 + 0x10;
    }
  }
  pDVar4 = *(Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ **)(this + 4);
  if (pDVar4 != (Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *)0x0) {
    pDVar5 = pDStack_c + *(int *)(this + 8) * 0x10;
    this_00 = pDStack_c;
    pDVar7 = pDVar4;
    if (pDVar4 != pDVar4 + param_1 * 0x10) {
      do {
        if (this_00 == pDVar5) break;
        Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G___op_assign(this_00,pDVar7);
        pDVar7 = pDVar7 + 0x10;
        pDVar4 = *(Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ **)(this + 4);
        this_00 = this_00 + 0x10;
      } while (pDVar7 != pDVar4 + param_1 * 0x10);
    }
    if (pDVar4 != (Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *)0x0) {
      if (*(int *)(pDVar4 + -4) == 0) {
        port_op_delete(pDVar4 + -4);
      }
      else {
        (**(code **)(*(int *)pDVar4 + 0x18))(3);
      }
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ **)(this + 4) = pDStack_c;
  return bStack_5;
}





//==== 0052af80 CheckSize_0052af80 ====


/* private: bool  util__Darray_L_classutil__SharedPtr_L_structModuleCompartment_G___G___CheckSize(int) */

bool 
util__Darray_class_util__SharedPtr_struct_ModuleCompartment_____CheckSize
          (Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *this,int param_1)

{
  uint *puVar1;
  ReferenceController *this_00;
  ReferenceController *this_01;
  bool bVar2;
  ReferenceControllerRegistry *this_02;
  uint uVar3;
  SharedPtr_L_struct_ModuleCompartment_G_ *this_03;
  uint uVar4;
  uint *puVar5;
  SharedPtr_L_struct_ModuleCompartment_G_ *pSVar6;
  bool bVar7;
  undefined4 *puVar8;
  uint *puStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar3 = *(uint *)(this + 8);
  bVar7 = -1 < (int)uVar3;
  bVar2 = !bVar7;
  if (bVar2) {
    puStack_c = (uint *)0x0;
    SetSize(this,(int *)&puStack_c);
    uVar3 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar2;
  bVar2 = (int)uVar3 < 0x40000000;
  if (!bVar2) {
    puStack_c = (uint *)0x3fffffff;
    SetSize(this,(int *)&puStack_c);
    uVar3 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar4 = *(uint *)(this + 0xc);
  if ((int)uVar3 <= (int)uVar4) {
    return bVar2 && bVar7;
  }
  if (uVar4 == 0) {
    *(uint *)(this + 0xc) = uVar3;
    uVar4 = uVar3;
  }
  if ((int)uVar4 < (int)uVar3) {
    do {
      uVar4 = uVar4 * 2;
    } while ((int)uVar4 < (int)uVar3);
    *(uint *)(this + 0xc) = uVar4;
  }
  if (0x3fffffff < (int)uVar4) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar4 = 0x3fffffff;
  }
  uVar3 = -(uint)((int)((ulonglong)uVar4 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 8);
  puStack_c = (uint *)port_op_new(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
  if (puStack_c == (uint *)0x0) {
    puStack_c = (uint *)0x0;
  }
  else {
    *puStack_c = uVar4;
    puStack_c = puStack_c + 1;
    puVar1 = puStack_c;
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 2;
    }
  }
  this_03 = *(SharedPtr_L_struct_ModuleCompartment_G_ **)(this + 4);
  if (this_03 != (SharedPtr_L_struct_ModuleCompartment_G_ *)0x0) {
    puVar1 = puStack_c + *(int *)(this + 8) * 2;
    puVar5 = puStack_c;
    pSVar6 = this_03;
    if (this_03 != this_03 + param_1 * 8) {
      do {
        if (puVar5 == puVar1) break;
        puVar8 = (undefined4 *)*puVar5;
        this_00 = (ReferenceController *)puVar5[1];
        *puVar5 = *(uint *)pSVar6;
        this_01 = *(ReferenceController **)(pSVar6 + 4);
        puVar5[1] = (uint)this_01;
        if (this_01 != (ReferenceController *)0x0) {
          ReferenceController__AddStrongReference(this_01);
        }
        if ((this_00 != (ReferenceController *)0x0) &&
           (bVar2 = ReferenceController__ReleaseStrongReference(this_00), bVar2)) {
          if (puVar8 != (undefined4 *)0x0) {
            (**(code **)*puVar8)(1);
          }
          this_02 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
          ReferenceControllerRegistry__PointerWasDestroyed(this_02,puVar8);
        }
        pSVar6 = pSVar6 + 8;
        puVar5 = puVar5 + 2;
        this_03 = *(SharedPtr_L_struct_ModuleCompartment_G_ **)(this + 4);
      } while (pSVar6 != this_03 + param_1 * 8);
    }
    if (this_03 != (SharedPtr_L_struct_ModuleCompartment_G_ *)0x0) {
      SharedPtr_L_struct_ModuleCompartment_G____vector_deleting_destructor_(this_03,3);
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(uint **)(this + 4) = puStack_c;
  return bStack_5;
}





//==== 0052b130 CheckSizeDestructive_0052b130 ====


/* private: bool  util__Darray_L_classutil__WeakPtr_L_classSpacecraftComponent_G___G___CheckSizeDestructive(void) */

bool 
util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____CheckSizeDestructive
          (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *this)

{
  undefined4 *puVar1;
  bool bVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  int *piStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  iVar7 = *(int *)(this + 8);
  bVar10 = -1 < iVar7;
  bVar2 = !bVar10;
  if (bVar2) {
    piStack_c = (int *)0x0;
    Darray_L_class_util__WeakPtr_L_class_Body_G___G___SetSize
              ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)this,(int *)&piStack_c);
    iVar7 = *(int *)(this + 8);
  }
  bStack_5 = !bVar2;
  bVar2 = iVar7 < 0x40000000;
  if (!bVar2) {
    piStack_c = (int *)0x3fffffff;
    Darray_L_class_util__WeakPtr_L_class_Body_G___G___SetSize
              ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)this,(int *)&piStack_c);
    iVar7 = *(int *)(this + 8);
    bStack_5 = false;
  }
  uVar6 = bVar2 && bVar10;
  iVar8 = *(int *)(this + 0xc);
  if (iVar8 < iVar7) {
    if (iVar8 == 0) {
      *(int *)(this + 0xc) = iVar7;
      iVar8 = iVar7;
    }
    if (iVar8 < iVar7) {
      do {
        iVar8 = iVar8 * 2;
      } while (iVar8 < iVar7);
      *(int *)(this + 0xc) = iVar8;
    }
    if (0x3fffffff < iVar8) {
      *(undefined4 *)(this + 0xc) = 0x3fffffff;
    }
    iVar7 = *(int *)(this + 4);
    if (iVar7 != 0) {
      iVar8 = *(int *)(iVar7 + -4);
      piStack_c = (int *)(iVar7 + -4);
      if (iVar8 != 0) {
        iVar7 = iVar7 + 4 + iVar8 * 8;
        do {
          puVar1 = (undefined4 *)(iVar7 + -8);
          iVar7 = iVar7 + -8;
          iVar8 = iVar8 + -1;
          if ((ReferenceController *)*puVar1 != (ReferenceController *)0x0) {
            ReferenceController__ReleaseWeakReference((ReferenceController *)*puVar1);
          }
        } while (iVar8 != 0);
        iVar8 = *piStack_c;
        uVar6 = bStack_5;
      }
      port_op_delete(piStack_c,iVar8 * 8 + 4);
    }
    uVar9 = *(uint *)(this + 0xc);
    *(undefined4 *)(this + 4) = 0;
    uVar5 = -(uint)((int)((ulonglong)uVar9 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar9 * 8);
    puVar3 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar5) | uVar5 + 4);
    if (puVar3 == (uint *)0x0) {
      puVar3 = (uint *)0x0;
    }
    else {
      *puVar3 = uVar9;
      puVar3 = puVar3 + 1;
      puVar4 = puVar3;
      if (uVar9 != 0) {
        do {
          *puVar4 = 0;
          puVar4[1] = 0;
          uVar9 = uVar9 - 1;
          puVar4 = puVar4 + 2;
        } while (uVar9 != 0);
        *(uint **)(this + 4) = puVar3;
        return (bool)uVar6;
      }
    }
    *(uint **)(this + 4) = puVar3;
  }
  return (bool)uVar6;
}





//==== 0052b280 Clear_0052b280 ====


/* public: virtual void  util__Darray_L_structCompartmentCollisionShell_G___Clear(void) */

void 
util__Darray_struct_CompartmentCollisionShell___Clear
          (Darray_L_struct_CompartmentCollisionShell_G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 0052b2a0 Clear_0052b2a0 ====


/* public: virtual void  util__Darray_L_classutil__Darray_L_classutil__SharedPtr_L_struct_ModuleCompartment_G__G__G___Clear(void) */

void 
util__Darray_class_util__Darray_class_util__SharedPtr_struct_ModuleCompartment_______Clear
          (Darray_L_class_util__Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G___G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 0052b2c0 Clear_0052b2c0 ====


/* public: virtual void  util__Darray_L_classutil__SharedPtr_L_structModuleCompartment_G___G___Clear(void) */

void 
util__Darray_class_util__SharedPtr_struct_ModuleCompartment_____Clear
          (Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 0052cab0 GetAxisAlignedBounds ====


/* public: struct util__AABB_L_structutil__Vec3_L_double_G__G_  util__OBB_L_struct_util__Vec3_L_double_G__Cstructutil__Quaternion_L_double_G__Cdouble_G___GetAxisAlignedBounds(void)const  */

void 
util__OBB_struct_util__Vec3_double__struct_util__Quaternion_double__double___GetAxisAlignedBounds
          (OBB_L_struct_util__Vec3_L_double_G__Cstruct_util__Quaternion_L_double_G__Cdouble_G_ *this)

{
  undefined8 stack0xfffffffc;
  double dVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double *in_stack_00000004;
  void *pvStack_30;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  double dStack_14;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar2 = (int *)GetCorners(this);
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)((int)in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 1) = 0;
  *(undefined4 *)((int)in_stack_00000004 + 0xc) = 0;
  *(undefined4 *)(in_stack_00000004 + 2) = 0;
  *(undefined4 *)((int)in_stack_00000004 + 0x14) = 0;
  *(undefined4 *)(in_stack_00000004 + 3) = 0;
  *(undefined4 *)((int)in_stack_00000004 + 0x1c) = 0;
  iVar3 = *piVar2;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)((int)in_stack_00000004 + 0x24) = 0;
  *(undefined4 *)(in_stack_00000004 + 5) = 0;
  *(undefined4 *)((int)in_stack_00000004 + 0x2c) = 0;
  iVar3 = (**(code **)(uintptr_t)(iVar3 + 0xc))();
  if (iVar3 < 1) {
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    dStack_14 = 0.0;
  }
  else {
    iStack_c = 0;
    puVar4 = (undefined4 *)(**(code **)*piVar2)(&iStack_c);
    uStack_24 = *puVar4;
    uStack_20 = puVar4[1];
    uStack_1c = puVar4[2];
    uStack_18 = puVar4[3];
    dStack_14 = *(double *)(puVar4 + 4);
  }
  iStack_c = 0;
  *(undefined4 *)(in_stack_00000004 + 3) = uStack_24;
  *(undefined4 *)((int)in_stack_00000004 + 0x1c) = uStack_20;
  *(undefined4 *)(in_stack_00000004 + 4) = uStack_1c;
  *(undefined4 *)((int)in_stack_00000004 + 0x24) = uStack_18;
  in_stack_00000004[5] = dStack_14;
  *(undefined4 *)in_stack_00000004 = uStack_24;
  *(undefined4 *)((int)in_stack_00000004 + 4) = uStack_20;
  *(undefined4 *)(in_stack_00000004 + 1) = uStack_1c;
  *(undefined4 *)((int)in_stack_00000004 + 0xc) = uStack_18;
  in_stack_00000004[2] = dStack_14;
  iVar3 = (**(code **)(uintptr_t)(*piVar2 + 0xc))();
  if (iStack_c < iVar3) {
    do {
      pdVar5 = (double *)(**(code **)*piVar2)(&iStack_c);
      dVar7 = *in_stack_00000004;
      if (*pdVar5 <= *in_stack_00000004) {
        dVar7 = *pdVar5;
      }
      dVar1 = in_stack_00000004[1];
      if (pdVar5[1] <= in_stack_00000004[1]) {
        dVar1 = pdVar5[1];
      }
      dVar6 = in_stack_00000004[2];
      if (pdVar5[2] <= in_stack_00000004[2]) {
        dVar6 = pdVar5[2];
      }
      *in_stack_00000004 = dVar7;
      in_stack_00000004[1] = dVar1;
      in_stack_00000004[2] = dVar6;
      dVar7 = in_stack_00000004[3];
      if (in_stack_00000004[3] <= *pdVar5) {
        dVar7 = *pdVar5;
      }
      dVar1 = in_stack_00000004[4];
      if (in_stack_00000004[4] <= pdVar5[1]) {
        dVar1 = pdVar5[1];
      }
      dVar6 = in_stack_00000004[5];
      if (in_stack_00000004[5] <= pdVar5[2]) {
        dVar6 = pdVar5[2];
      }
      iStack_c = iStack_c + 1;
      in_stack_00000004[3] = dVar7;
      in_stack_00000004[4] = dVar1;
      in_stack_00000004[5] = dVar6;
      iVar3 = (**(code **)(uintptr_t)(*piVar2 + 0xc))();
    } while (iStack_c < iVar3);
  }
  if (pvStack_30 != (void *)0x0) {
    port_op_delete(pvStack_30);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0052dea0 GetCorners ====


/* public: class util__Darray_L_structutil__Vec3_L_double_G__G_  util__OBB_L_struct_util__Vec3_L_double_G__Cstructutil__Quaternion_L_double_G__Cdouble_G___GetCorners(void)const  */

void 
util__OBB_struct_util__Vec3_double__struct_util__Quaternion_double__double___GetCorners
          (OBB_L_struct_util__Vec3_L_double_G__Cstruct_util__Quaternion_L_double_G__Cdouble_G_ *this)

{
  undefined8 stack0xfffffff0;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  OBB_L_struct_util__Vec3_L_double_G__Cstruct_util__Quaternion_L_double_G__Cdouble_G_ *pOVar11;
  double *pdVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  Darray_L_struct_util__Vec3_L_double_G___G_ *in_stack_00000004;
  int iStack_3c;
  int iStack_38;
  OBB_L_struct_util__Vec3_L_double_G__Cstruct_util__Quaternion_L_double_G__Cdouble_G_ *pOStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  double dStack_20;
  uint uStack_14;
  
  uStack_14 = __security_cookie ^ (uint)&stack0xfffffff0;
  iVar15 = 2;
  iVar10 = 2;
  do {
    iVar15 = iVar15 * 2;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  pOStack_34 = this;
  Darray_L_struct_util__Vec3_L_double_G___G___Darray_L_struct_util__Vec3_L_double_G___G_(in_stack_00000004,iVar15);
  iStack_38 = 0;
  if (0 < iVar15) {
    do {
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      uVar17 = 0;
      dStack_20 = 0.0;
      do {
        uVar13 = (int)uVar17 >> 0x1f;
        iVar16 = (uVar13 & 0xfffffffe) + 2;
        iVar10 = (uVar17 ^ uVar13) - uVar13;
        if (iVar10 == 0) {
          iVar14 = 1;
        }
        else {
          iVar14 = iVar16;
          if ((iVar10 != 1) && (iVar10 = iVar10 + -1, 0 < iVar10)) {
            do {
              iVar14 = iVar14 * iVar16;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
        }
        if ((iStack_38 / iVar14 & 1U) == 0) {
          pOVar11 = pOStack_34;
          if (uVar17 != 0) {
            if (uVar17 == 1) {
              pOVar11 = pOStack_34 + 8;
            }
            else if (uVar17 == 2) {
              pOVar11 = pOStack_34 + 0x10;
            }
          }
        }
        else {
          if (uVar17 == 0) {
LAB_0052df93:
            iVar10 = 0x18;
          }
          else if (uVar17 == 1) {
            iVar10 = 0x20;
          }
          else {
            if (uVar17 != 2) goto LAB_0052df93;
            iVar10 = 0x28;
          }
          pOVar11 = pOStack_34 + iVar10;
        }
        if (uVar17 == 0) {
LAB_0052dfbc:
          pdVar12 = (double *)&uStack_30;
        }
        else if (uVar17 == 1) {
          pdVar12 = (double *)&uStack_28;
        }
        else {
          if (uVar17 != 2) goto LAB_0052dfbc;
          pdVar12 = &dStack_20;
        }
        uVar17 = uVar17 + 1;
        *pdVar12 = *(double *)pOVar11;
      } while ((int)uVar17 < 3);
      dVar2 = *(double *)(pOStack_34 + 0x30);
      dVar3 = *(double *)(pOStack_34 + 0x38);
      dVar4 = -dVar2;
      dVar5 = -dVar3;
      dVar8 = (double)CONCAT44(uStack_24,uStack_28);
      *(uint32_t *)&dVar1 = (uint32_t)(uintptr_t)(SUB168(*(undefined1 (*) [16])(pOStack_34 + 0x40),0));
      dVar6 = -dVar1;
      dVar18 = (double)CONCAT44(uStack_2c,uStack_30);
      *(uint32_t *)&dVar7 = (uint32_t)(uintptr_t)(SUB168(*(undefined1 (*) [16])(pOStack_34 + 0x40),8));
      dVar20 = ((dVar3 * dStack_20 + dVar2 * 0.0) - dVar1 * dVar8) + dVar7 * dVar18;
      dVar21 = (dVar3 * 0.0 - dVar2 * dStack_20) + dVar1 * dVar18 + dVar7 * dVar8;
      dVar19 = (dVar2 * dVar8 - dVar3 * dVar18) + *(double *)(pOStack_34 + 0x40) * 0.0 +
               dVar7 * dStack_20;
      dVar18 = dVar7 * 0.0 -
               (dVar3 * dVar8 + *(double *)(pOStack_34 + 0x30) * dVar18 +
               *(double *)(pOStack_34 + 0x40) * dStack_20);
      dVar1 = *(double *)(pOStack_34 + 0x50);
      iVar10 = *(int *)(in_stack_00000004 + 8);
      dVar2 = *(double *)(pOStack_34 + 0x58);
      dVar3 = *(double *)(pOStack_34 + 0x60);
      Darray_L_struct_util__Vec3_L_double_G___G___SetSize(in_stack_00000004,&iStack_3c);
      bVar9 = Darray_L_struct_util__Vec3_L_double_G___G___CheckSize(in_stack_00000004,iVar10);
      if (bVar9) {
        iVar10 = *(int *)(in_stack_00000004 + 8);
        iVar16 = *(int *)(in_stack_00000004 + 4);
        pdVar12 = (double *)(iVar16 + -0x18 + iVar10 * 0x18);
        *pdVar12 = ((dVar6 * dVar21 + dVar20 * dVar7) - dVar5 * dVar19) + dVar4 * dVar18 + dVar1;
        pdVar12[1] = (dVar21 * dVar7 - dVar20 * dVar6) + dVar4 * dVar19 + dVar18 * dVar5 + dVar2;
        *(double *)(iVar16 + -8 + iVar10 * 0x18) =
             (dVar20 * dVar5 - dVar4 * dVar21) + dVar19 * dVar7 + dVar18 * dVar6 + dVar3;
      }
      iStack_38 = iStack_38 + 1;
    } while (iStack_38 < iVar15);
  }
  __security_check_cookie(uStack_14 ^ (uint)&stack0xfffffff0);
  return;
}





//==== 0052ee00 GetHeat_W_Clear ====


/* public: void __thiscall PowerCompartment__GetHeat_W_Clear(void)const  */

void __thiscall PowerCompartment__GetHeat_W_Clear(PowerCompartment *this)

{
  (this->GetHeat_W_MemoizedValue).IsValidData = false;
  (this->GetHeat_W_MemoizedValue).Data = 0.0;
  return;
}





//==== 00531770 GetTimeSinceJ2000_s_Clear ====


/* public: void __thiscall GhostedUIButton__GetTimeSinceJ2000_s_Clear(void)const  */

void __thiscall GhostedUIButton__GetTimeSinceJ2000_s_Clear(GhostedUIButton *this)

{
  (this->GetTimeSinceJ2000_s_MemoizedValue).IsValidData = false;
  (this->GetTimeSinceJ2000_s_MemoizedValue).Data = 0.0;
  return;
}





//==== 00532b10 IsThereAnyPower ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: bool  CraftInstance__IsThereAnyPower(void)const  */

bool CraftInstance__IsThereAnyPower(void)

{
  double dVar1;
  
  dVar1 = GetCurrentPowerGeneration_W();
  return 0.0 < dVar1;
}





//==== 00532c20 RemoveDuplicates ====


/* public: void  util__Darray_L_classWeaponModule_P_G___RemoveDuplicates(void) */

void __thiscall
util__Darray_class_WeaponModule____RemoveDuplicates(Darray_L_class_WeaponModule_P_G_ *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  bool bVar8;
  int *piStack_c;
  int iStack_8;
  
  iVar7 = *(int *)(this + 8);
  if (1 < iVar7) {
    piVar2 = *(int **)(this + 4);
    iStack_8 = 0;
    piVar5 = piVar2;
    piStack_c = piVar2;
    if (piVar2 != piVar2 + iVar7) {
      do {
        bVar8 = false;
        while ((piVar2 != piVar5 && (!bVar8))) {
          iVar7 = *piVar2;
          piVar2 = piVar2 + 1;
          bVar8 = *piVar5 == iVar7;
        }
        *piStack_c = *piVar5;
        iVar7 = *(int *)(this + 8);
        iVar3 = iStack_8 + 1;
        if (bVar8) {
          iVar3 = iStack_8;
        }
        piVar5 = piVar5 + 1;
        piVar2 = *(int **)(this + 4);
        piVar4 = piStack_c + 1;
        if (bVar8) {
          piVar4 = piStack_c;
        }
        piStack_c = piVar4;
        iStack_8 = iVar3;
      } while (piVar5 != piVar2 + iVar7);
    }
    if (((0 < iStack_8) || (iStack_8 < 0x3fffffff)) && ((0x3fffffff < iStack_8 || (iStack_8 < 0))))
    {
      LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.inl",0x2a5,
                "Between(value, 0, DARRAY_MAX_SIZE)",(char *)0x0);
      DebugBreak();
      iVar7 = *(int *)(this + 8);
    }
    if (iStack_8 < 1) {
      iStack_8 = 0;
    }
    iVar3 = 0x3fffffff;
    if (iStack_8 < 0x3fffffff) {
      iVar3 = iStack_8;
    }
    if (((iVar3 < iVar7) && (iVar1 = *(int *)(this + 4), iVar1 != 0)) &&
       (puVar6 = (undefined4 *)(iVar1 + iVar3 * 4), puVar6 != (undefined4 *)(iVar1 + iVar7 * 4))) {
      do {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      } while (puVar6 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 4));
    }
    *(int *)(this + 8) = iVar3;
  }
  return;
}





//==== 00532e40 SetAll_00532e40 ====


/* public: virtual void  util__Darray_L_classutil__Darray_L_classutil__SharedPtr_L_struct_ModuleCompartment_G__G__G___SetAll(class util__Darray_L_classutil__SharedPtr_L_structModuleCompartment_G___G_ const &) */

void 
util__Darray_class_util__Darray_class_util__SharedPtr_struct_ModuleCompartment_______SetAll
          (Darray_L_class_util__Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G___G_ *this,
          Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *param_1)

{
  ReferenceController *this_00;
  ReferenceController *this_01;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  ReferenceControllerRegistry *this_02;
  uint uVar5;
  Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *this_03;
  uint uVar6;
  undefined4 *puVar7;
  uint *puStack_8;
  
  this_03 = *(Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ **)(this + 4);
  if (this_03 != this_03 + *(int *)(this + 8) * 0x10) {
    do {
      puStack_8 = (uint *)(**(code **)(*(int *)param_1 + 0xc))();
      Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G___SetSize(this_03,(int *)&puStack_8);
      iVar2 = (**(code **)(*(int *)param_1 + 0xc))();
      if (iVar2 == 0) {
        (**(code **)(*(int *)this_03 + 0x10))();
      }
      else {
        uVar5 = *(uint *)(this_03 + 8);
        if ((int)uVar5 < 0) {
          puStack_8 = (uint *)0x0;
          Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G___SetSize
                    (this_03,(int *)&puStack_8);
          uVar5 = *(uint *)(this_03 + 8);
        }
        if (0x3fffffff < (int)uVar5) {
          puStack_8 = (uint *)0x3fffffff;
          Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G___SetSize
                    (this_03,(int *)&puStack_8);
          uVar5 = *(uint *)(this_03 + 8);
        }
        uVar6 = *(uint *)(this_03 + 0xc);
        if ((int)uVar6 < (int)uVar5) {
          if (uVar6 == 0) {
            *(uint *)(this_03 + 0xc) = uVar5;
            uVar6 = uVar5;
          }
          if ((int)uVar6 < (int)uVar5) {
            do {
              uVar6 = uVar6 * 2;
            } while ((int)uVar6 < (int)uVar5);
            *(uint *)(this_03 + 0xc) = uVar6;
          }
          if (0x3fffffff < (int)uVar6) {
            *(undefined4 *)(this_03 + 0xc) = 0x3fffffff;
            uVar6 = 0x3fffffff;
          }
          if (*(SharedPtr_L_struct_ModuleCompartment_G_ **)(this_03 + 4) !=
              (SharedPtr_L_struct_ModuleCompartment_G_ *)0x0) {
            SharedPtr_L_struct_ModuleCompartment_G____vector_deleting_destructor_
                      (*(SharedPtr_L_struct_ModuleCompartment_G_ **)(this_03 + 4),3);
            uVar6 = *(uint *)(this_03 + 0xc);
          }
          *(undefined4 *)(this_03 + 4) = 0;
          uVar5 = -(uint)((int)((ulonglong)uVar6 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 8);
          puVar3 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar5) | uVar5 + 4);
          if (puVar3 == (uint *)0x0) {
            puVar3 = (uint *)0x0;
          }
          else {
            *puVar3 = uVar6;
            puVar3 = puVar3 + 1;
            puVar4 = puVar3;
            if (uVar6 != 0) {
              do {
                *puVar4 = 0;
                puVar4[1] = 0;
                uVar6 = uVar6 - 1;
                puVar4 = puVar4 + 2;
              } while (uVar6 != 0);
              *(uint **)(this_03 + 4) = puVar3;
              goto LAB_00532f84;
            }
          }
          *(uint **)(this_03 + 4) = puVar3;
        }
        else {
          puVar3 = *(uint **)(this_03 + 4);
        }
LAB_00532f84:
        puStack_8 = *(uint **)(param_1 + 4);
        if (puStack_8 != puStack_8 + *(int *)(param_1 + 8) * 2) {
          do {
            this_00 = (ReferenceController *)puVar3[1];
            puVar7 = (undefined4 *)*puVar3;
            *puVar3 = *puStack_8;
            this_01 = (ReferenceController *)puStack_8[1];
            puVar3[1] = (uint)this_01;
            if (this_01 != (ReferenceController *)0x0) {
              ReferenceController__AddStrongReference(this_01);
            }
            if ((this_00 != (ReferenceController *)0x0) &&
               (bVar1 = ReferenceController__ReleaseStrongReference(this_00), bVar1)) {
              if (puVar7 != (undefined4 *)0x0) {
                (**(code **)*puVar7)(1);
              }
              this_02 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
              ReferenceControllerRegistry__PointerWasDestroyed(this_02,puVar7);
            }
            puStack_8 = puStack_8 + 2;
            puVar3 = puVar3 + 2;
          } while (puStack_8 != (uint *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 8));
        }
      }
      this_03 = this_03 + 0x10;
    } while (this_03 !=
             (Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *)
             (*(int *)(this + 8) * 0x10 + *(int *)(this + 4)));
  }
  return;
}





//==== 00533030 SetAll_00533030 ====


/* public: virtual void  util__Darray_L_classutil__SharedPtr_L_structModuleCompartment_G___G___SetAll(class util__SharedPtr_L_structModuleCompartment_G_ const &) */

void 
util__Darray_class_util__SharedPtr_struct_ModuleCompartment_____SetAll
          (Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *this,
          SharedPtr_L_struct_ModuleCompartment_G_ *param_1)

{
  ReferenceController *this_00;
  ReferenceController *this_01;
  bool bVar1;
  ReferenceControllerRegistry *this_02;
  int *piVar2;
  undefined4 *puVar3;
  
  piVar2 = *(int **)(this + 4);
  if (piVar2 != piVar2 + *(int *)(this + 8) * 2) {
    do {
      puVar3 = (undefined4 *)*piVar2;
      this_00 = (ReferenceController *)piVar2[1];
      *piVar2 = *(int *)param_1;
      this_01 = *(ReferenceController **)(param_1 + 4);
      piVar2[1] = (int)this_01;
      if (this_01 != (ReferenceController *)0x0) {
        ReferenceController__AddStrongReference(this_01);
      }
      if ((this_00 != (ReferenceController *)0x0) &&
         (bVar1 = ReferenceController__ReleaseStrongReference(this_00), bVar1)) {
        if (puVar3 != (undefined4 *)0x0) {
          (**(code **)*puVar3)(1);
        }
        this_02 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
        ReferenceControllerRegistry__PointerWasDestroyed(this_02,puVar3);
      }
      piVar2 = piVar2 + 2;
    } while (piVar2 != (int *)(*(int *)(this + 4) + *(int *)(this + 8) * 8));
  }
  return;
}





//==== 005330c0 SetSize_005330c0 ====


/* private: void  util__Darray_L_structCompartmentCollisionShell_G___SetSize(int const &) */

void 
util__Darray_struct_CompartmentCollisionShell___SetSize
          (Darray_L_struct_CompartmentCollisionShell_G_ *this,int *param_1)

{
  ReferenceController *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 auStack_110 [28];
  undefined1 uStack_a0;
  undefined1 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 uStack_10;
  undefined7 uStack_f;
  Darray_L_struct_CompartmentCollisionShell_G_ *pDStack_8;
  
  pDStack_8 = this;
  iVar2 = *param_1;
  if (((iVar2 < 1) && (0x3ffffffe < iVar2)) || ((iVar2 < 0x40000000 && (-1 < iVar2)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.inl",0x2a5,
              "Between(value, 0, DARRAY_MAX_SIZE)",(char *)0x0);
    DebugBreak();
    iVar2 = *param_1;
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  iVar3 = 0x3fffffff;
  if (iVar2 < 0x3fffffff) {
    iVar3 = iVar2;
  }
  if ((iVar3 < *(int *)(this + 8)) && (iVar2 = *(int *)(this + 4), iVar2 != 0)) {
    puVar4 = (undefined4 *)(iVar3 * 0x118 + iVar2);
    if (puVar4 != (undefined4 *)(*(int *)(this + 8) * 0x118 + iVar2)) {
      do {
        this_00 = (ReferenceController *)puVar4[1];
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_40 = 0;
        uStack_38 = uStack_38 & 0xffffff00;
        uStack_10 = 0;
        *puVar4 = 0;
        puVar4[1] = 0;
        auStack_110[0] = 0;
        auStack_110[1] = 0;
        auStack_110[2] = 0;
        auStack_110[3] = 0;
        auStack_110[4] = 0;
        auStack_110[5] = 0;
        auStack_110[6] = 0;
        auStack_110[7] = 0;
        auStack_110[8] = 0;
        auStack_110[9] = 0;
        auStack_110[10] = 0;
        auStack_110[0xb] = 0;
        auStack_110[0xc] = 0;
        auStack_110[0xd] = 0;
        auStack_110[0xe] = 0;
        auStack_110[0xf] = 0;
        auStack_110[0x10] = 0;
        auStack_110[0x11] = 0;
        auStack_110[0x12] = 0;
        auStack_110[0x13] = 0;
        auStack_110[0x14] = 0;
        auStack_110[0x15] = 0;
        auStack_110[0x16] = 0;
        auStack_110[0x17] = 0;
        auStack_110[0x18] = 0;
        auStack_110[0x19] = 0;
        auStack_110[0x1a] = 0;
        auStack_110[0x1b] = 0;
        uStack_90 = 0;
        uStack_8c = 0;
        uStack_88 = 0;
        uStack_84 = 0;
        uStack_80 = 0;
        uStack_7c = 0;
        uStack_78 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        uStack_6c = 0;
        uStack_68 = 0;
        uStack_64 = 0;
        uStack_60 = 0;
        uStack_5c = 0;
        uStack_58 = 0;
        uStack_54 = 0;
        uStack_50 = 0;
        uStack_4c = 0;
        uStack_48 = 0;
        uStack_44 = 0;
        uStack_30 = 0;
        uStack_2c = 0;
        uStack_28 = 0;
        uStack_24 = 0;
        uStack_20 = 0;
        uStack_1c = 0;
        uStack_18 = 0;
        uStack_14 = 0;
        if (this_00 != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(this_00);
        }
        puVar4[0x24] = 0;
        puVar4[0x25] = 0;
        puVar4[0x26] = 0;
        puVar4[0x27] = 0;
        puVar4[2] = 0;
        puVar4[0x28] = 0;
        puVar4[0x29] = 0;
        puVar4[0x2a] = 0;
        puVar4[0x2b] = 0;
        puVar4[3] = 0;
        puVar4[0x2c] = 0;
        puVar4[0x2d] = 0;
        puVar4[0x2e] = 0;
        puVar4[0x2f] = 0;
        puVar4[0x30] = 0;
        puVar4[0x31] = 0;
        puVar4[0x32] = 0;
        puVar4[0x33] = 0;
        puVar5 = auStack_110;
        puVar6 = puVar4 + 4;
        for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        puVar4[0x34] = 0;
        puVar4[0x35] = 0;
        puVar4[0x36] = 0;
        puVar4[0x37] = 0;
        puVar4[0x38] = (undefined4)uStack_40;
        puVar4[0x39] = (*(uint32_t*)((char*)&(uStack_40)+4));
        puVar4[0x3a] = uStack_38;
        puVar4[0x3b] = uStack_34;
        puVar4[0x3c] = 0;
        puVar4[0x3d] = 0;
        puVar4[0x3e] = 0;
        puVar4[0x3f] = 0;
        puVar4[0x40] = 0;
        puVar4[0x41] = 0;
        puVar4[0x42] = 0;
        puVar4[0x43] = 0;
        *(ulonglong *)(puVar4 + 0x44) = CONCAT71(uStack_f,uStack_10);
        puVar4 = puVar4 + 0x46;
      } while (puVar4 != (undefined4 *)(*(int *)(pDStack_8 + 8) * 0x118 + *(int *)(pDStack_8 + 4)));
      *(int *)(pDStack_8 + 8) = iVar3;
      return;
    }
    *(int *)(this + 8) = iVar3;
    return;
  }
  *(int *)(this + 8) = iVar3;
  return;
}





//==== 005332c0 SetSize_005332c0 ====


/* private: void  util__Darray_L_classutil__Darray_L_classutil__SharedPtr_L_struct_ModuleCompartment_G__G__G___SetSize(int const &) */

void 
util__Darray_class_util__Darray_class_util__SharedPtr_struct_ModuleCompartment_______SetSize
          (Darray_L_class_util__Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G___G_ *this,
          int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *this_00;
  undefined **ppuStack_14;
  SharedPtr_L_struct_ModuleCompartment_G_ *pSStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  iVar2 = *param_1;
  if (((iVar2 < 1) && (0x3ffffffe < iVar2)) || ((iVar2 < 0x40000000 && (-1 < iVar2)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.inl",0x2a5,
              "Between(value, 0, DARRAY_MAX_SIZE)",(char *)0x0);
    DebugBreak();
    iVar2 = *param_1;
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  iVar3 = 0x3fffffff;
  if (iVar2 < 0x3fffffff) {
    iVar3 = iVar2;
  }
  if (((iVar3 < *(int *)(this + 8)) && (iVar2 = *(int *)(this + 4), iVar2 != 0)) &&
     (this_00 = (Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *)(iVar3 * 0x10 + iVar2),
     this_00 !=
     (Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *)(*(int *)(this + 8) * 0x10 + iVar2)
     )) {
    do {
      ppuStack_14 = (undefined **)(&vftable_112);
      pSStack_10 = (SharedPtr_L_struct_ModuleCompartment_G_ *)0x0;
      uStack_c = 0;
      uStack_8 = 0;
      Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G___op_assign
                (this_00,(Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *)&ppuStack_14);
      ppuStack_14 = (undefined **)(&vftable_112);
      if (pSStack_10 != (SharedPtr_L_struct_ModuleCompartment_G_ *)0x0) {
        SharedPtr_L_struct_ModuleCompartment_G____vector_deleting_destructor_(pSStack_10,3);
      }
      this_00 = this_00 + 0x10;
    } while (this_00 !=
             (Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *)
             (*(int *)(this + 8) * 0x10 + *(int *)(this + 4)));
  }
  *(int *)(this + 8) = iVar3;
  return;
}





//==== 005333b0 SetSize_005333b0 ====


/* private: void  util__Darray_L_classutil__SharedPtr_L_structModuleCompartment_G___G___SetSize(int const &) */

void 
util__Darray_class_util__SharedPtr_struct_ModuleCompartment_____SetSize
          (Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *this,int *param_1)

{
  ReferenceController *this_00;
  bool bVar1;
  int iVar2;
  ReferenceControllerRegistry *this_01;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  iVar2 = *param_1;
  if (((iVar2 < 1) && (0x3ffffffe < iVar2)) || ((iVar2 < 0x40000000 && (-1 < iVar2)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.inl",0x2a5,
              "Between(value, 0, DARRAY_MAX_SIZE)",(char *)0x0);
    DebugBreak();
    iVar2 = *param_1;
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  iVar3 = 0x3fffffff;
  if (iVar2 < 0x3fffffff) {
    iVar3 = iVar2;
  }
  if (((iVar3 < *(int *)(this + 8)) && (iVar2 = *(int *)(this + 4), iVar2 != 0)) &&
     (piVar4 = (int *)(iVar2 + iVar3 * 8), piVar4 != (int *)(iVar2 + *(int *)(this + 8) * 8))) {
    do {
      this_00 = (ReferenceController *)piVar4[1];
      puVar5 = (undefined4 *)*piVar4;
      *piVar4 = 0;
      piVar4[1] = 0;
      if ((this_00 != (ReferenceController *)0x0) &&
         (bVar1 = ReferenceController__ReleaseStrongReference(this_00), bVar1)) {
        if (puVar5 != (undefined4 *)0x0) {
          (**(code **)*puVar5)(1);
        }
        this_01 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
        ReferenceControllerRegistry__PointerWasDestroyed(this_01,puVar5);
      }
      piVar4 = piVar4 + 2;
    } while (piVar4 != (int *)(*(int *)(this + 4) + *(int *)(this + 8) * 8));
    *(int *)(this + 8) = iVar3;
    return;
  }
  *(int *)(this + 8) = iVar3;
  return;
}





//==== 00533490 GetTypeName_00533490 ====


/* public: virtual class util__Str_L_char_G_  CraftBlueprint__ReflectionInfoStruct_class_CraftBlueprint___GetTypeName(void)const  */

Str_L_char_G_ * 
CraftBlueprint__ReflectionInfoStruct_class_CraftBlueprint___GetTypeName
          (ReflectionInfoStruct_L_class_CraftBlueprint_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"CraftBlueprint");
  return __return_storage_ptr__;
}





//==== 005334b0 GetMembers_005334b0 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   CraftBlueprint__ReflectionInfoStruct_class_CraftBlueprint___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
CraftBlueprint__ReflectionInfoStruct_class_CraftBlueprint___GetMembers__o2
          (ReflectionInfoStruct_L_class_CraftBlueprint_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_c2bd44f7__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_c2bd44f7__thread_safe_static_guard_0__),
      cde_l2_c2bd44f7__thread_safe_static_guard_0__ == -1)) {
     cde_l2_6c86fa7e_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_c2bd44f7__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_6c86fa7e_Count);
  iVar3 = 0;
  if (0 <  cde_l2_6c86fa7e_Count) {
    do {
      pCStack_8 = (ClassMember *)(uintptr_t)(StaticGetMemberByIndex(&CStack_34,iVar3));
      iVar1 = *(int *)(in_stack_00000004 + 8);
      iStack_c = iVar1 + 1;
      util__Darray_struct_util__ClassMember___SetSize(in_stack_00000004,&iStack_c);
      bVar2 = util__Darray_struct_util__ClassMember___CheckSize(in_stack_00000004,iVar1);
      if (bVar2) {
        iVar1 = *(int *)(in_stack_00000004 + 4) + *(int *)(in_stack_00000004 + 8) * 0x28;
        util__Str_char___operator__o8((Str_L_char_G_ *)(iVar1 + -0x28),&pCStack_8->Name);
        *(undefined4 *)(iVar1 + -0x1c) = *(undefined4 *)&pCStack_8->Type;
        *(uint *)(iVar1 + -0x18) = pCStack_8->Offset;
        *(uint *)(iVar1 + -0x14) = pCStack_8->Size;
        util__Str_char___operator__o8((Str_L_char_G_ *)(iVar1 + -0x10),&pCStack_8->AdditionalType);
        *(bool *)(iVar1 + -4) = pCStack_8->IsArray;
        *(bool *)(iVar1 + -3) = pCStack_8->IsMaybe;
      }
      if (CStack_34.AdditionalType.Data != (char *)0x0) {
        port_op_delete(CStack_34.AdditionalType.Data);
        CStack_34.AdditionalType.Data = (char *)0x0;
      }
      if (CStack_34.Name.Data != (char *)0x0) {
        port_op_delete(CStack_34.Name.Data);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <  cde_l2_6c86fa7e_Count);
  }
  return in_stack_00000004;
}





//==== 005335f0 GetMember_005335f0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   CraftBlueprint__ReflectionInfoStruct_class_CraftBlueprint___GetMember(class util__Str_L_char_G_ const
   &)const  */

Str_L_char_G_ * 
CraftBlueprint__ReflectionInfoStruct_class_CraftBlueprint___GetMember__o2
          (ReflectionInfoStruct_L_class_CraftBlueprint_G_ *this,Str_L_char_G_ *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  char cVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_stack_00000008;
  undefined1 auStack_2c [16];
  uint uStack_1c;
  uint uStack_18;
  Str_L_char_G_ SStack_14;
  bool bStack_8;
  bool bStack_7;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_ad971ef9__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_ad971ef9__thread_safe_static_guard_0__),
      cde_l2_ad971ef9__thread_safe_static_guard_0__ == -1)) {
     cde_l2_5acecbb5_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_ad971ef9__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_5acecbb5_Count) {
    do {
      StaticGetMemberByIndex((ClassMember *)auStack_2c,iVar6);
      uVar1 = (*(uint32_t*)&(auStack_2c));
      if ((*(uint32_t*)((char*)&(auStack_2c)+8)) == in_stack_00000008[2]) {
        pcVar2 = "";
        if (0 < (int)(*(uint32_t*)((char*)&(auStack_2c)+4))) {
          pcVar2 = (char *)(*(uint32_t*)&(auStack_2c));
        }
        if ((int)in_stack_00000008[1] < 1) {
          puVar4 = (undefined1 *)(&cde_l2_0b2b1c9f_NullString);
        }
        else {
          puVar4 = (undefined1 *)*in_stack_00000008;
        }
        cVar3 = *pcVar2;
        if (cVar3 == '\0') {
LAB_0053367d:
          util__Str_char___Str_char(param_1,(Str_L_char_G_ *)auStack_2c);
          param_1[1].Data = (char *)(*(uint32_t *)((char *)&(auStack_2c) + 12));
          param_1[1].Capacity = uStack_1c;
          param_1[1].Length = uStack_18;
          util__Str_char___Str_char(param_1 + 2,(Str_L_char_G_ *)(auStack_2c + 0x18));
          *(bool *)&param_1[3].Data = bStack_8;
          *(bool *)((int)&param_1[3].Data + 1) = bStack_7;
          *(undefined1 *)&param_1[3].Capacity = 1;
          if (SStack_14.Data != (char *)0x0) {
            port_op_delete(SStack_14.Data);
          }
          if ((char *)(*(uint32_t*)&(auStack_2c)) != (char *)0x0) {
            port_op_delete((void *)(*(uint32_t*)&(auStack_2c)));
          }
          return param_1;
        }
        iVar5 = (int)puVar4 - (int)pcVar2;
        while (cVar3 == pcVar2[iVar5]) {
          cVar3 = pcVar2[1];
          pcVar2 = pcVar2 + 1;
          if (cVar3 == '\0') goto LAB_0053367d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_5acecbb5_Count);
  }
  param_1->Data = (char *)0x0;
  param_1->Capacity = 0;
  param_1->Length = 0;
  param_1[1].Data = (char *)0x0;
  param_1[1].Capacity = 0;
  param_1[1].Length = 0;
  param_1[2].Data = (char *)0x0;
  param_1[2].Capacity = 0;
  *(undefined8 *)&param_1[2].Length = 0;
  param_1->Data = (char *)0x0;
  param_1->Capacity = 0;
  param_1->Length = 0;
  param_1[2].Data = (char *)0x0;
  param_1[2].Capacity = 0;
  param_1[2].Length = 0;
  *(undefined1 *)&param_1[3].Capacity = 0;
  return param_1;
}





//==== 00533790 GetFactory_00533790 ====


/* public: virtual class util__Reflectable * (__cdecl*
   CraftBlueprint__ReflectionInfoStruct_class_CraftBlueprint___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall CraftBlueprint__ReflectionInfoStruct_class_CraftBlueprint___GetFactory__o2
          (ReflectionInfoStruct_L_class_CraftBlueprint_G_ *this)

{
  return StaticFactory;
}





//==== 005342c0 CountDuplicates_Order__Type_ ====


/* class util__Darray_L_structutil__tuple2_L_enumOrder__Type_Cint_G__G_ __cdecl util__CountDuplicates_enum_Order__Type(class util__Darray_L_enumOrder__Type_G_ const &) */

void * util__CountDuplicates_enum_Order__Type(Darray_L_enum_Order__Type_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  int *in_stack_00000008;
  int *piStack_18;
  int iStack_14;
  undefined1 uStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar6 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
  *(undefined ***)param_1 = &vftable_109;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar6;
  if (((int)uVar6 < 0) || (0x3fffffff < (int)uVar6)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar6) {
    puVar7 = (undefined4 *)
             port_op_new(-(uint)((int)((ulonglong)uVar6 * 8 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar6 * 8));
    puVar4 = puVar7;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4 = puVar4 + 2;
      }
    }
    iVar9 = 0;
    *(undefined4 **)(param_1 + 4) = puVar7;
    if (0 < *(int *)(param_1 + 0xc)) {
      do {
        iVar2 = *(int *)(param_1 + 4);
        *(undefined4 *)(iVar2 + iVar9 * 8) = 0;
        *(undefined4 *)(iVar2 + 4 + iVar9 * 8) = 0;
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(param_1 + 0xc));
    }
  }
  iStack_c = 0;
  iVar9 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
  if (iStack_c < iVar9) {
    do {
      piStack_18 = (int *)(**(code **)*in_stack_00000008)(&iStack_c);
      iVar9 = *(int *)(param_1 + 8);
      piVar8 = *(int **)(param_1 + 4);
      iStack_14 = 0;
      piVar1 = piVar8 + iVar9 * 2;
      if (piVar8 != piVar1) {
        do {
          if (*piVar8 == *piStack_18) {
            uStack_10 = 1;
            iVar9 = (*(code *)**(undefined4 **)param_1)(&iStack_14);
            *(int *)(iVar9 + 4) = *(int *)(iVar9 + 4) + 1;
            goto LAB_00534411;
          }
          piVar8 = piVar8 + 2;
          iStack_14 = iStack_14 + 1;
        } while (piVar8 != piVar1);
      }
      iVar2 = *piStack_18;
      piStack_18 = (int *)(iVar9 + 1);
      iStack_14 = 0;
      uStack_10 = 0;
      Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G___SetSize
                ((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)param_1,(int *)&piStack_18);
      bVar5 = Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G___CheckSize
                        ((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)param_1,iVar9);
      if (bVar5) {
        iVar9 = *(int *)(param_1 + 4);
        iVar3 = *(int *)(param_1 + 8);
        *(int *)(iVar9 + -8 + iVar3 * 8) = iVar2;
        *(undefined4 *)(iVar9 + -4 + iVar3 * 8) = 1;
      }
LAB_00534411:
      iStack_c = iStack_c + 1;
      iVar9 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
    } while (iStack_c < iVar9);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return 0;
}





//==== 00536fd0 GetCirclePackingInACircleOffset_double_ ====


/* struct util__Vec2_L_double_G_ __cdecl util__GetCirclePackingInACircleOffset_double(int,int) */

Vec2_L_double_G_ * __cdecl
util__GetCirclePackingInACircleOffset_double
          (Vec2_L_double_G_ *__return_storage_ptr__,int param_1,int param_2)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((((1 < param_1) || (param_1 < 0x14)) && ((0x14 < param_1 || (param_1 < 1)))) ||
     (((0 < param_2 || (param_2 < param_1 + -1)) && ((param_1 + -1 < param_2 || (param_2 < 0)))))) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\geometry.inl",0x11f,
              "Between(CircleCount, 1, 20) && Between(CircleID, 0, CircleCount-1)",(char *)0x0);
    DebugBreak();
  }
  if (param_1 < 2) {
    param_1 = 1;
  }
  iVar3 = 0x14;
  if (param_1 < 0x14) {
    iVar3 = param_1;
  }
  if (param_2 < 1) {
    param_2 = 0;
  }
  if (iVar3 + -1 <= param_2) {
    param_2 = iVar3 + -1;
  }
  dVar6 = GetCirclePackingInACircleRadius_L_double_G_(iVar3);
  if (iVar3 < 10) {
    if ((((2 < iVar3) || (iVar3 < 6)) && ((6 < iVar3 || (iVar3 < 2)))) && (iVar3 + -1 <= param_2))
    goto LAB_00537aa7;
    if (((iVar3 < 8) && (8 < iVar3)) || ((iVar3 < 10 && (6 < iVar3)))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    iVar2 = iVar3 + -1;
    if (!bVar1) {
      iVar2 = iVar3;
    }
    dVar4 = ((double)param_2 / (double)iVar2) * 6.283185307179586;
    dVar5 = dVar4;
    libm_sse2_cos_precise(0.0);
    __return_storage_ptr__->X = dVar5 * (dVar6 - 1.0);
    libm_sse2_sin_precise(0.0);
    dVar4 = dVar4 * (dVar6 - 1.0);
  }
  else {
    switch(iVar3) {
    case 10:
      uStack_a8 = 0xa7a17b2d;
      uStack_a4 = 0xbfd0c8d9;
      uStack_a0 = 0xa56a1361;
      uStack_9c = 0xbfe610cf;
      uStack_98 = 0xa7a17b2d;
      uStack_94 = 0x3fd0c8d9;
      uStack_90 = 0xa56a1361;
      uStack_8c = 0xbfe610cf;
      uStack_88 = 0x8ebf0ee3;
      uStack_84 = 0xbfe4ef44;
      uStack_80 = 0x5e0269bd;
      uStack_7c = 0xbfd5d2c9;
      uStack_78 = 0x8ebf0ee3;
      uStack_74 = 0x3fe4ef44;
      uStack_70 = 0x5e0269bd;
      uStack_6c = 0xbfd5d2c9;
      uStack_68 = 0;
      uStack_64 = 0;
      uStack_60 = 0xc9ed8e27;
      uStack_5c = 0xbfce1e84;
      uStack_58 = 0xcf19afdf;
      uStack_54 = 0xbfe6e50d;
      uStack_50 = 0x6acec4b8;
      uStack_4c = 0x3fc7083a;
      uStack_48 = 0xcf19afdf;
      uStack_44 = 0x3fe6e50d;
      uStack_40 = 0x6acec4b8;
      uStack_3c = 0x3fc7083a;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0xea4c2f46;
      uStack_2c = 0x3fd28270;
      uStack_28 = 0x7039b35c;
      uStack_24 = 0xbfda9045;
      uStack_20 = 0xdf2e8a68;
      uStack_1c = 0x3fe38462;
      uStack_18 = 0x7039b35c;
      uStack_14 = 0x3fda9045;
      uStack_10 = 0xdf2e8a68;
      uStack_c = 0x3fe38462;
      __return_storage_ptr__->X = *(double *)(&uStack_a8 + param_2 * 4) * dVar6;
      dVar4 = *(double *)(&uStack_a0 + param_2 * 4) * dVar6;
      break;
    case 0xb:
      uStack_b8 = 0x1842222c;
      uStack_b4 = 0xbfd04f8a;
      uStack_b0 = 0xa39f69d9;
      uStack_ac = 0xbfe66819;
      uStack_a8 = 0x1842222c;
      uStack_a4 = 0x3fd04f8a;
      uStack_a0 = 0xa39f69d9;
      uStack_9c = 0xbfe66819;
      uStack_98 = 0x228c11b4;
      uStack_94 = 0xbfe4a66b;
      uStack_90 = 0xf3d1307a;
      uStack_8c = 0xbfd7d83a;
      uStack_88 = 0x228c11b4;
      uStack_84 = 0x3fe4a66b;
      uStack_80 = 0xf3d1307a;
      uStack_7c = 0xbfd7d83a;
      uStack_78 = 0x1842222c;
      uStack_74 = 0xbfd04f8a;
      uStack_70 = 0x3f85118;
      uStack_6c = 0xbfa70215;
      uStack_68 = 0x1842222c;
      uStack_64 = 0x3fd04f8a;
      uStack_60 = 0x3f85118;
      uStack_5c = 0xbfa70215;
      uStack_58 = 0x498a7738;
      uStack_54 = 0xbfe77b7e;
      uStack_50 = 0x300559c6;
      uStack_4c = 0x3fc08ff4;
      uStack_48 = 0x498a7738;
      uStack_44 = 0x3fe77b7e;
      uStack_40 = 0x300559c6;
      uStack_3c = 0x3fc08ff4;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0x769ef2e9;
      uStack_2c = 0x3fd95ffc;
      uStack_28 = 0x7ad2cc44;
      uStack_24 = 0xbfdea772;
      uStack_20 = 0x979e1367;
      uStack_1c = 0x3fe2441c;
      uStack_18 = 0x7ad2cc44;
      uStack_14 = 0x3fdea772;
      uStack_10 = 0x979e1367;
      uStack_c = 0x3fe2441c;
      __return_storage_ptr__->X = *(double *)(&uStack_b8 + param_2 * 4) * dVar6;
      dVar4 = *(double *)(&uStack_b0 + param_2 * 4) * dVar6;
      break;
    case 0xc:
      uStack_c8 = 0;
      uStack_c4 = 0;
      uStack_c0 = 0x7b3aa5dc;
      uStack_bc = 0xbfe80f0b;
      uStack_b8 = 0x4389810;
      uStack_b4 = 0xbfddfc11;
      uStack_b0 = 0xe3e50e7f;
      uStack_ac = 0xbfe2d0fb;
      uStack_a8 = 0x4389810;
      uStack_a4 = 0x3fddfc11;
      uStack_a0 = 0xe3e50e7f;
      uStack_9c = 0xbfe2d0fb;
      uStack_98 = 0x1315688f;
      uStack_94 = 0xbfcfc3d2;
      uStack_90 = 0xa811e842;
      uStack_8c = 0xbfc256e8;
      uStack_88 = 0x1315688f;
      uStack_84 = 0x3fcfc3d2;
      uStack_80 = 0xa811e842;
      uStack_7c = 0xbfc256e8;
      uStack_78 = 0xa756f3d8;
      uStack_74 = 0xbfe7caa5;
      uStack_70 = 0xca730ae;
      uStack_6c = 0xbfbc9abd;
      uStack_68 = 0xa756f3d8;
      uStack_64 = 0x3fe7caa5;
      uStack_60 = 0xca730ae;
      uStack_5c = 0xbfbc9abd;
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0xa811e842;
      uStack_4c = 0x3fd256e8;
      uStack_48 = 0xa9519592;
      uStack_44 = 0xbfe4d5e3;
      uStack_40 = 0x7b3aa5dc;
      uStack_3c = 0x3fd80f0b;
      uStack_38 = 0xa9519592;
      uStack_34 = 0x3fe4d5e3;
      uStack_30 = 0x7b3aa5dc;
      uStack_2c = 0x3fd80f0b;
      uStack_28 = 0x4a754fa0;
      uStack_24 = 0xbfd1993a;
      uStack_20 = 0x8579f494;
      uStack_1c = 0x3fe66453;
      uStack_18 = 0x4a754fa0;
      uStack_14 = 0x3fd1993a;
      uStack_10 = 0x8579f494;
      uStack_c = 0x3fe66453;
      __return_storage_ptr__->X = *(double *)(&uStack_c8 + param_2 * 4) * dVar6;
      dVar4 = *(double *)(&uStack_c0 + param_2 * 4) * dVar6;
      break;
    case 0xd:
      uStack_d8 = 0;
      uStack_d4 = 0;
      uStack_d0 = 0x91a02d61;
      uStack_cc = 0xbfe87221;
      uStack_c8 = 0xd6997ef2;
      uStack_c4 = 0xbfdcbcdf;
      uStack_c0 = 0x372fe950;
      uStack_bc = 0xbfe3c6ef;
      uStack_b8 = 0xd6997ef2;
      uStack_b4 = 0x3fdcbcdf;
      uStack_b0 = 0x372fe950;
      uStack_ac = 0xbfe3c6ef;
      uStack_a8 = 0;
      uStack_a4 = 0;
      uStack_a0 = 0x69c11046;
      uStack_9c = 0xbfd2acc9;
      uStack_98 = 0x1d9df543;
      uStack_94 = 0xbfe73fd6;
      uStack_90 = 0xb97f4a7c;
      uStack_8c = 0xbfce3779;
      uStack_88 = 0x1d9df543;
      uStack_84 = 0x3fe73fd6;
      uStack_80 = 0xb97f4a7c;
      uStack_7c = 0xbfce3779;
      uStack_78 = 0x64a26b94;
      uStack_74 = 0xbfd1c2cc;
      uStack_70 = 0x9f7c746c;
      uStack_6c = 0x3fb71560;
      uStack_68 = 0x64a26b94;
      uStack_64 = 0x3fd1c2cc;
      uStack_60 = 0x9f7c746c;
      uStack_5c = 0x3fb71560;
      uStack_58 = 0x1d9df543;
      uStack_54 = 0xbfe73fd6;
      uStack_50 = 0xb97f4a7c;
      uStack_4c = 0x3fce3779;
      uStack_48 = 0x1d9df543;
      uStack_44 = 0x3fe73fd6;
      uStack_40 = 0xb97f4a7c;
      uStack_3c = 0x3fce3779;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0xb97f4a7c;
      uStack_2c = 0x3fde3779;
      uStack_28 = 0xd6997ef2;
      uStack_24 = 0xbfdcbcdf;
      uStack_20 = 0x372fe950;
      uStack_1c = 0x3fe3c6ef;
      uStack_18 = 0xd6997ef2;
      uStack_14 = 0x3fdcbcdf;
      uStack_10 = 0x372fe950;
      uStack_c = 0x3fe3c6ef;
      __return_storage_ptr__->X = *(double *)(&uStack_d8 + param_2 * 4) * dVar6;
      dVar4 = *(double *)(&uStack_d0 + param_2 * 4) * dVar6;
      break;
    case 0xe:
      uStack_e8 = 0x3680d6c7;
      uStack_e4 = 0xbfcd926a;
      uStack_e0 = 0x534cf93c;
      uStack_dc = 0xbfe7785d;
      uStack_d8 = 0x3680d6c7;
      uStack_d4 = 0x3fcd926a;
      uStack_d0 = 0x534cf93c;
      uStack_cc = 0xbfe7785d;
      uStack_c8 = 0xdd10ae3f;
      uStack_c4 = 0xbfe38276;
      uStack_c0 = 0x93866f09;
      uStack_bc = 0xbfddfdf2;
      uStack_b8 = 0xdd10ae3f;
      uStack_b4 = 0x3fe38276;
      uStack_b0 = 0x93866f09;
      uStack_ac = 0xbfddfdf2;
      uStack_a8 = 0;
      uStack_a4 = 0;
      uStack_a0 = 0xb79b3527;
      uStack_9c = 0xbfd5548e;
      uStack_98 = 0xc68b255a;
      uStack_94 = 0xbfe89503;
      uStack_90 = 0x501905e;
      uStack_8c = 0xbfa1b79f;
      uStack_88 = 0xc68b255a;
      uStack_84 = 0x3fe89503;
      uStack_80 = 0x501905e;
      uStack_7c = 0xbfa1b79f;
      uStack_78 = 0xdc5a5110;
      uStack_74 = 0xbfd3bc49;
      uStack_70 = 0xa6feafb1;
      uStack_6c = 0x3f8629f4;
      uStack_68 = 0xdc5a5110;
      uStack_64 = 0x3fd3bc49;
      uStack_60 = 0xa6feafb1;
      uStack_5c = 0x3f8629f4;
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0x20b2022;
      uStack_4c = 0x3fd6b72e;
      uStack_48 = 0xea8eadf0;
      uStack_44 = 0xbfe4c765;
      uStack_40 = 0x487d81d0;
      uStack_3c = 0x3fda5cbf;
      uStack_38 = 0xea8eadf0;
      uStack_34 = 0x3fe4c765;
      uStack_30 = 0x487d81d0;
      uStack_2c = 0x3fda5cbf;
      uStack_28 = 0xe03d63e8;
      uStack_24 = 0xbfd2f24c;
      uStack_20 = 0xbf5d75d0;
      uStack_1c = 0x3fe6b5dd;
      uStack_18 = 0xe03d63e8;
      uStack_14 = 0x3fd2f24c;
      uStack_10 = 0xbf5d75d0;
      uStack_c = 0x3fe6b5dd;
      __return_storage_ptr__->X = *(double *)(&uStack_e8 + param_2 * 4) * dVar6;
      dVar4 = *(double *)(&uStack_e0 + param_2 * 4) * dVar6;
      break;
    case 0xf:
      uStack_f8 = 0xbb131d45;
      uStack_f4 = 0xbfcc4f61;
      uStack_f0 = 0x709add00;
      uStack_ec = 0xbfe7e57b;
      uStack_e8 = 0xbb131d45;
      uStack_e4 = 0x3fcc4f61;
      uStack_e0 = 0x709add00;
      uStack_dc = 0xbfe7e57b;
      uStack_d8 = 0x25d95e11;
      uStack_d4 = 0xbfe48a2e;
      uStack_d0 = 0x90e16ca5;
      uStack_cc = 0xbfdc3b25;
      uStack_c8 = 0x25d95e11;
      uStack_c4 = 0x3fe48a2e;
      uStack_c0 = 0x90e16ca5;
      uStack_bc = 0xbfdc3b25;
      uStack_b8 = 0xbb131d45;
      uStack_b4 = 0xbfcc4f61;
      uStack_b0 = 0x26229cba;
      uStack_ac = 0xbfd37b95;
      uStack_a8 = 0xbb131d45;
      uStack_a4 = 0x3fcc4f61;
      uStack_a0 = 0x26229cba;
      uStack_9c = 0xbfd37b95;
      uStack_98 = 0x5b38c607;
      uStack_94 = 0xbfe8e9f6;
      uStack_90 = 0x2b83f24f;
      uStack_8c = 0xbf94e7a2;
      uStack_88 = 0x5b38c607;
      uStack_84 = 0x3fe8e9f6;
      uStack_80 = 0x2b83f24f;
      uStack_7c = 0xbf94e7a2;
      uStack_78 = 0x48485e8e;
      uStack_74 = 0xbfd6e741;
      uStack_70 = 0x201a4319;
      uStack_6c = 0x3fbdc459;
      uStack_68 = 0x48485e8e;
      uStack_64 = 0x3fd6e741;
      uStack_60 = 0x201a4319;
      uStack_5c = 0x3fbdc459;
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0xbc3817e7;
      uStack_4c = 0x3fd814fd;
      uStack_48 = 0x5e3cf2d7;
      uStack_44 = 0xbfe3c594;
      uStack_40 = 0x904eef54;
      uStack_3c = 0x3fde5857;
      uStack_38 = 0x5e3cf2d7;
      uStack_34 = 0x3fe3c594;
      uStack_30 = 0x904eef54;
      uStack_2c = 0x3fde5857;
      uStack_28 = 0x74318720;
      uStack_24 = 0xbfd0a3e7;
      uStack_20 = 0x82403b3a;
      uStack_1c = 0x3fe77e1f;
      uStack_18 = 0x74318720;
      uStack_14 = 0x3fd0a3e7;
      uStack_10 = 0x82403b3a;
      uStack_c = 0x3fe77e1f;
      __return_storage_ptr__->X = *(double *)(&uStack_f8 + param_2 * 4) * dVar6;
      dVar4 = *(double *)(&uStack_f0 + param_2 * 4) * dVar6;
      break;
    case 0x10:
      uStack_108 = 0;
      uStack_104 = 0;
      uStack_100 = 0x19de2ffe;
      uStack_fc = 0xbfe91115;
      uStack_f8 = 0x589968d1;
      uStack_f4 = 0xbfdaa6b1;
      uStack_f0 = 0x69066f52;
      uStack_ec = 0xbfe53b39;
      uStack_e8 = 0x589968d1;
      uStack_e4 = 0x3fdaa6b1;
      uStack_e0 = 0x69066f52;
      uStack_dc = 0xbfe53b39;
      uStack_d8 = 0xfd246541;
      uStack_d4 = 0xbfe692c5;
      uStack_d0 = 0x56ea5113;
      uStack_cc = 0xbfd5cc39;
      uStack_c8 = 0xfd246541;
      uStack_c4 = 0x3fe692c5;
      uStack_c0 = 0x56ea5113;
      uStack_bc = 0xbfd5cc39;
      uStack_b8 = 0x98874009;
      uStack_b4 = 0xbfcbbbab;
      uStack_b0 = 0x369ccefd;
      uStack_ac = 0xbfd1da27;
      uStack_a8 = 0x98874009;
      uStack_a4 = 0x3fcbbbab;
      uStack_a0 = 0x369ccefd;
      uStack_9c = 0xbfd1da27;
      uStack_98 = 0xc4c07b10;
      uStack_94 = 0xbfe8e9d0;
      uStack_90 = 0x9ebc2758;
      uStack_8c = 0x3fb62681;
      uStack_88 = 0xc4c07b10;
      uStack_84 = 0x3fe8e9d0;
      uStack_80 = 0x9ebc2758;
      uStack_7c = 0x3fb62681;
      uStack_78 = 0x7551773a;
      uStack_74 = 0xbfd642cf;
      uStack_70 = 0xf24377a9;
      uStack_6c = 0x3fc128f1;
      uStack_68 = 0x7551773a;
      uStack_64 = 0x3fd642cf;
      uStack_60 = 0xf24377a9;
      uStack_5c = 0x3fc128f1;
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0x2362c7e1;
      uStack_4c = 0x3fd91eb9;
      uStack_48 = 0x51edf1ab;
      uStack_44 = 0xbfe3a128;
      uStack_40 = 0xe9f93cb7;
      uStack_3c = 0x3fdf2da9;
      uStack_38 = 0x51edf1ab;
      uStack_34 = 0x3fe3a128;
      uStack_30 = 0xe9f93cb7;
      uStack_2c = 0x3fdf2da9;
      uStack_28 = 0x89d40a1e;
      uStack_24 = 0xbfd0ad76;
      uStack_20 = 0xb820afe3;
      uStack_1c = 0x3fe7a399;
      uStack_18 = 0x89d40a1e;
      uStack_14 = 0x3fd0ad76;
      uStack_10 = 0xb820afe3;
      uStack_c = 0x3fe7a399;
      __return_storage_ptr__->X = *(double *)(&uStack_108 + param_2 * 4) * dVar6;
      dVar4 = *(double *)(&uStack_100 + param_2 * 4) * dVar6;
      break;
    case 0x11:
      uStack_118 = 0xe97b95f3;
      uStack_114 = 0xbfcab603;
      uStack_110 = 0xcd0e587;
      uStack_10c = 0xbfe86d07;
      uStack_108 = 0xe97b95f3;
      uStack_104 = 0x3fcab603;
      uStack_100 = 0xcd0e587;
      uStack_fc = 0xbfe86d07;
      uStack_f8 = 0x14465567;
      uStack_f4 = 0xbfe22cf9;
      uStack_f0 = 0x1b56a22;
      uStack_ec = 0xbfe1a19a;
      uStack_e8 = 0x14465567;
      uStack_e4 = 0x3fe22cf9;
      uStack_e0 = 0x1b56a22;
      uStack_dc = 0xbfe1a19a;
      uStack_d8 = 0;
      uStack_d4 = 0;
      uStack_d0 = 0xfe815a97;
      uStack_cc = 0xbfd9b828;
      uStack_c8 = 0x33cedfd5;
      uStack_c4 = 0xbfd6fef0;
      uStack_c0 = 0xd094c79a;
      uStack_bc = 0xbfc8429d;
      uStack_b8 = 0x33cedfd5;
      uStack_b4 = 0x3fd6fef0;
      uStack_b0 = 0xd094c79a;
      uStack_ac = 0xbfc8429d;
      uStack_a8 = 0xbdb6e47c;
      uStack_a4 = 0xbfe8d080;
      uStack_a0 = 0xcfbce1bc;
      uStack_9c = 0xbfc42ec2;
      uStack_98 = 0xbdb6e47c;
      uStack_94 = 0x3fe8d080;
      uStack_90 = 0xcfbce1bc;
      uStack_8c = 0xbfc42ec2;
      uStack_88 = 0;
      uStack_84 = 0;
      uStack_80 = 0xdec92fce;
      uStack_7c = 0x3f9758b2;
      uStack_78 = 0x948bbca6;
      uStack_74 = 0xbfe7ee1a;
      uStack_70 = 0x6e053b40;
      uStack_6c = 0x3fd08fa0;
      uStack_68 = 0x948bbca6;
      uStack_64 = 0x3fe7ee1a;
      uStack_60 = 0x6e053b40;
      uStack_5c = 0x3fd08fa0;
      uStack_58 = 0x44a6b17;
      uStack_54 = 0xbfd52cdd;
      uStack_50 = 0x99870bb6;
      uStack_4c = 0x3fd1bd99;
      uStack_48 = 0x44a6b17;
      uStack_44 = 0x3fd52cdd;
      uStack_40 = 0x99870bb6;
      uStack_3c = 0x3fd1bd99;
      uStack_38 = 0;
      uStack_34 = 0x80000000;
      uStack_30 = 0x290c238;
      uStack_2c = 0x3fe102d4;
      uStack_28 = 0x7e1d9e9;
      uStack_24 = 0xbfd8b013;
      uStack_20 = 0xe462e543;
      uStack_1c = 0x3fe61c1d;
      uStack_18 = 0x7e1d9e9;
      uStack_14 = 0x3fd8b013;
      uStack_10 = 0xe462e543;
      uStack_c = 0x3fe61c1d;
      __return_storage_ptr__->X = *(double *)(&uStack_118 + param_2 * 4) * dVar6;
      dVar4 = *(double *)(&uStack_110 + param_2 * 4) * dVar6;
      break;
    case 0x12:
      uStack_128 = 0xc8de760f;
      uStack_124 = 0xbfca5140;
      uStack_120 = 0x53d6a676;
      uStack_11c = 0xbfe88df1;
      uStack_118 = 0xc8de760f;
      uStack_114 = 0x3fca5140;
      uStack_110 = 0x53d6a676;
      uStack_10c = 0xbfe88df1;
      uStack_108 = 0x219f08f2;
      uStack_104 = 0xbfe1f9a1;
      uStack_100 = 0x219f08f2;
      uStack_fc = 0xbfe1f9a1;
      uStack_f8 = 0x219f08f2;
      uStack_f4 = 0x3fe1f9a1;
      uStack_f0 = 0x219f08f2;
      uStack_ec = 0xbfe1f9a1;
      uStack_e8 = 0xc8de760f;
      uStack_e4 = 0xbfca5140;
      uStack_e0 = 0xdeced6dc;
      uStack_dc = 0xbfd6caa1;
      uStack_d8 = 0xc8de760f;
      uStack_d4 = 0x3fca5140;
      uStack_d0 = 0xdeced6dc;
      uStack_cc = 0xbfd6caa1;
      uStack_c8 = 0x53d6a676;
      uStack_c4 = 0xbfe88df1;
      uStack_c0 = 0xc8de760f;
      uStack_bc = 0xbfca5140;
      uStack_b8 = 0x53d6a676;
      uStack_b4 = 0x3fe88df1;
      uStack_b0 = 0xc8de760f;
      uStack_ac = 0xbfca5140;
      uStack_a8 = 0xc8de760f;
      uStack_a4 = 0xbfda5140;
      uStack_a0 = 0;
      uStack_9c = 0;
      uStack_98 = 0xc8de760f;
      uStack_94 = 0x3fda5140;
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_88 = 0x53d6a676;
      uStack_84 = 0xbfe88df1;
      uStack_80 = 0xc8de760f;
      uStack_7c = 0x3fca5140;
      uStack_78 = 0x53d6a676;
      uStack_74 = 0x3fe88df1;
      uStack_70 = 0xc8de760f;
      uStack_6c = 0x3fca5140;
      uStack_68 = 0xc8de760f;
      uStack_64 = 0xbfca5140;
      uStack_60 = 0xdeced6dc;
      uStack_5c = 0x3fd6caa1;
      uStack_58 = 0xc8de760f;
      uStack_54 = 0x3fca5140;
      uStack_50 = 0xdeced6dc;
      uStack_4c = 0x3fd6caa1;
      uStack_48 = 0x219f08f2;
      uStack_44 = 0xbfe1f9a1;
      uStack_40 = 0x219f08f2;
      uStack_3c = 0x3fe1f9a1;
      uStack_38 = 0x219f08f2;
      uStack_34 = 0x3fe1f9a1;
      uStack_30 = 0x219f08f2;
      uStack_2c = 0x3fe1f9a1;
      uStack_28 = 0xc8de760f;
      uStack_24 = 0xbfca5140;
      uStack_20 = 0x53d6a676;
      uStack_1c = 0x3fe88df1;
      uStack_18 = 0xc8de760f;
      uStack_14 = 0x3fca5140;
      uStack_10 = 0x53d6a676;
      uStack_c = 0x3fe88df1;
      __return_storage_ptr__->X = *(double *)(&uStack_128 + param_2 * 4) * dVar6;
      dVar4 = *(double *)(&uStack_120 + param_2 * 4) * dVar6;
      break;
    case 0x13:
      uStack_138 = 0xc8de760f;
      uStack_134 = 0xbfca5140;
      uStack_130 = 0x53d6a676;
      uStack_12c = 0xbfe88df1;
      uStack_128 = 0xc8de760f;
      uStack_124 = 0x3fca5140;
      uStack_120 = 0x53d6a676;
      uStack_11c = 0xbfe88df1;
      uStack_118 = 0x219f08f2;
      uStack_114 = 0xbfe1f9a1;
      uStack_110 = 0x219f08f2;
      uStack_10c = 0xbfe1f9a1;
      uStack_108 = 0x219f08f2;
      uStack_104 = 0x3fe1f9a1;
      uStack_100 = 0x219f08f2;
      uStack_fc = 0xbfe1f9a1;
      uStack_f8 = 0xc8de760f;
      uStack_f4 = 0xbfca5140;
      uStack_f0 = 0xdeced6dc;
      uStack_ec = 0xbfd6caa1;
      uStack_e8 = 0xc8de760f;
      uStack_e4 = 0x3fca5140;
      uStack_e0 = 0xdeced6dc;
      uStack_dc = 0xbfd6caa1;
      uStack_d8 = 0x53d6a676;
      uStack_d4 = 0xbfe88df1;
      uStack_d0 = 0xc8de760f;
      uStack_cc = 0xbfca5140;
      uStack_c8 = 0x53d6a676;
      uStack_c4 = 0x3fe88df1;
      uStack_c0 = 0xc8de760f;
      uStack_bc = 0xbfca5140;
      uStack_b8 = 0xc8de760f;
      uStack_b4 = 0xbfda5140;
      uStack_b0 = 0;
      uStack_ac = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      uStack_a0 = 0;
      uStack_9c = 0;
      uStack_98 = 0xc8de760f;
      uStack_94 = 0x3fda5140;
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_88 = 0x53d6a676;
      uStack_84 = 0xbfe88df1;
      uStack_80 = 0xc8de760f;
      uStack_7c = 0x3fca5140;
      uStack_78 = 0x53d6a676;
      uStack_74 = 0x3fe88df1;
      uStack_70 = 0xc8de760f;
      uStack_6c = 0x3fca5140;
      uStack_68 = 0xc8de760f;
      uStack_64 = 0xbfca5140;
      uStack_60 = 0xdeced6dc;
      uStack_5c = 0x3fd6caa1;
      uStack_58 = 0xc8de760f;
      uStack_54 = 0x3fca5140;
      uStack_50 = 0xdeced6dc;
      uStack_4c = 0x3fd6caa1;
      uStack_48 = 0x219f08f2;
      uStack_44 = 0xbfe1f9a1;
      uStack_40 = 0x219f08f2;
      uStack_3c = 0x3fe1f9a1;
      uStack_38 = 0x219f08f2;
      uStack_34 = 0x3fe1f9a1;
      uStack_30 = 0x219f08f2;
      uStack_2c = 0x3fe1f9a1;
      uStack_28 = 0xc8de760f;
      uStack_24 = 0xbfca5140;
      uStack_20 = 0x53d6a676;
      uStack_1c = 0x3fe88df1;
      uStack_18 = 0xc8de760f;
      uStack_14 = 0x3fca5140;
      uStack_10 = 0x53d6a676;
      uStack_c = 0x3fe88df1;
      __return_storage_ptr__->X = dVar6 * *(double *)(&uStack_138 + param_2 * 4);
      dVar4 = *(double *)(&uStack_130 + param_2 * 4) * dVar6;
      break;
    case 0x14:
      uStack_148 = 0xb35c1798;
      uStack_144 = 0xbfc8fd19;
      uStack_140 = 0x76ceb41d;
      uStack_13c = 0xbfe8fbce;
      uStack_138 = 0xb35c1798;
      uStack_134 = 0x3fc8fd19;
      uStack_130 = 0x76ceb41d;
      uStack_12c = 0xbfe8fbce;
      uStack_128 = 0xc8574eea;
      uStack_124 = 0xbfe14561;
      uStack_120 = 0x75d223b5;
      uStack_11c = 0xbfe31a56;
      uStack_118 = 0xc8574eea;
      uStack_114 = 0x3fe14561;
      uStack_110 = 0x75d223b5;
      uStack_10c = 0xbfe31a56;
      uStack_108 = 0xb35c1798;
      uStack_104 = 0xbfc8fd19;
      uStack_100 = 0x3a4150a2;
      uStack_fc = 0xbfd8fa83;
      uStack_f8 = 0xb35c1798;
      uStack_f4 = 0x3fc8fd19;
      uStack_f0 = 0x3a4150a2;
      uStack_ec = 0xbfd8fa83;
      uStack_e8 = 0x78bee3c3;
      uStack_e4 = 0xbfe83ac4;
      uStack_e0 = 0xaed2af7b;
      uStack_dc = 0xbfd17386;
      uStack_d8 = 0x78bee3c3;
      uStack_d4 = 0x3fe83ac4;
      uStack_d0 = 0xaed2af7b;
      uStack_cc = 0xbfd17386;
      uStack_c8 = 0xa6aeb35b;
      uStack_c4 = 0xbfdb01be;
      uStack_c0 = 0xe10f574a;
      uStack_bc = 0xbfb28b37;
      uStack_b8 = 0xa6aeb35b;
      uStack_b4 = 0x3fdb01be;
      uStack_b0 = 0xe10f574a;
      uStack_ac = 0xbfb28b37;
      uStack_a8 = 0;
      uStack_a4 = 0;
      uStack_a0 = 0;
      uStack_9c = 0;
      uStack_98 = 0x591bce0c;
      uStack_94 = 0xbfe97c1f;
      uStack_90 = 0x2668cd32;
      uStack_8c = 0x3fbda4d3;
      uStack_88 = 0x591bce0c;
      uStack_84 = 0x3fe97c1f;
      uStack_80 = 0x2668cd32;
      uStack_7c = 0x3fbda4d3;
      uStack_78 = 0x67e20095;
      uStack_74 = 0xbfd34051;
      uStack_70 = 0xd2ba8657;
      uStack_6c = 0x3fd31e64;
      uStack_68 = 0x67e20095;
      uStack_64 = 0x3fd34051;
      uStack_60 = 0xd2ba8657;
      uStack_5c = 0x3fd31e64;
      uStack_58 = 0x20c059f2;
      uStack_54 = 0xbfe4bdce;
      uStack_50 = 0xf6846c94;
      uStack_4c = 0x3fde875d;
      uStack_48 = 0x20c059f2;
      uStack_44 = 0x3fe4bdce;
      uStack_40 = 0xf6846c94;
      uStack_3c = 0x3fde875d;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0xe44d0d79;
      uStack_2c = 0x3fe18678;
      uStack_28 = 0xd99eb34e;
      uStack_24 = 0xbfd63b4a;
      uStack_20 = 0x76320098;
      uStack_1c = 0x3fe73af5;
      uStack_18 = 0xd99eb34e;
      uStack_14 = 0x3fd63b4a;
      uStack_10 = 0x76320098;
      uStack_c = 0x3fe73af5;
      __return_storage_ptr__->X = *(double *)(&uStack_148 + param_2 * 4) * dVar6;
      dVar4 = *(double *)(&uStack_140 + param_2 * 4) * dVar6;
      break;
    default:
LAB_00537aa7:
      *(undefined4 *)&__return_storage_ptr__->X = 0;
      *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = 0;
      *(undefined4 *)&__return_storage_ptr__->Y = 0;
      *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = 0;
      __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->Y = dVar4;
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}





//==== 00537b90 GetCirclePackingInACircleRadius_double_ ====


/* double __cdecl util__GetCirclePackingInACircleRadius_double(int) */

double __cdecl util__GetCirclePackingInACircleRadius_double(int)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar4;
  undefined4 uVar8;
  double dVar9;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  double dStack_70;
  double dStack_68;
  undefined8 uStack_60;
  double dStack_58;
  undefined8 uStack_50;
  double dStack_48;
  undefined8 uStack_40;
  double dStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [16];
  undefined8 uStack_10;
  
  if (((1 < param_1) || (param_1 < 0x14)) && ((0x14 < param_1 || (param_1 < 1)))) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\geometry.inl",0x102,
              "Between(CircleCount, 1, 20)",(char *)0x0);
    DebugBreak();
  }
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0x3ff00000;
  uStack_a0 = 0x4000000000000000;
  uVar2 = 0;
  uVar5 = 0x40080000;
  libm_sse2_sqrt_precise(0.0);
  dStack_98 = (double)CONCAT44(uVar5,uVar2) * 0.6666666666666666 + 1.0;
  uVar2 = 0;
  uVar6 = 0x40000000;
  libm_sse2_sqrt_precise(0.0);
  dVar1 = (double)CONCAT44(uVar6,uVar2) + 1.0;
  uVar5 = 0;
  uVar7 = 0x40140000;
  dStack_90 = dVar1;
  libm_sse2_sqrt_precise(0.0);
  dVar4 = 1.0 / (double)CONCAT44(uVar7,uVar5) + 1.0;
  dVar4 = dVar4 + dVar4;
  libm_sse2_sqrt_precise(0.0);
  dStack_88 = dVar4 + 1.0;
  uStack_80 = 0;
  uStack_7c = 0x40080000;
  uStack_78 = 0;
  uStack_74 = 0x40080000;
  uVar3 = 0x3bbba140;
  uVar8 = 0x3fdcb91f;
  libm_sse2_sin_precise(0.0);
  dVar4 = (double)CONCAT44(uVar6,uVar2) + 2.0;
  dStack_70 = 1.0 / (double)CONCAT44(uVar8,uVar3) + 1.0;
  dVar4 = dVar4 + dVar4;
  libm_sse2_sqrt_precise(0.0);
  dStack_68 = dVar4 + 1.0;
  uStack_60 = 0x400e8113950d514c;
  uVar2 = 0x4ae74487;
  uVar3 = 0x3fd65718;
  libm_sse2_sin_precise(0.0);
  uStack_50 = 0x40101e4ff7e6fd6d;
  dStack_58 = 1.0 / (double)CONCAT44(uVar3,uVar2) + 1.0;
  dStack_48 = (double)CONCAT44(uVar7,uVar5) + 2.0;
  dVar9 = 2.0 / (double)CONCAT44(uVar7,uVar5);
  uStack_40 = 0x4011504f9338cca2;
  dVar4 = dVar9 + 1.0;
  libm_sse2_sqrt_precise(0.0);
  dVar4 = dVar4 * 4.0 + dVar9 + 6.0;
  libm_sse2_sqrt_precise(0.0);
  dStack_38 = dVar4 + 1.0;
  uStack_30 = 0x208c6828;
  uStack_2c = 0x40127632;
  uStack_28 = 0xe51949f7;
  uStack_24 = 0x40132b0a;
  uVar2 = 0;
  uVar5 = 0x40180000;
  libm_sse2_sqrt_precise(0.0);
  dVar1 = (double)CONCAT44(uVar5,uVar2) + dVar1;
  (*(uint32_t*)((char*)&(auStack_20)+8)) = SUB84(dVar1,0);
  (*(uint64_t*)&(auStack_20)) = dVar1;
  (*(uint32_t *)((char *)&(auStack_20) + 12)) = (int)((ulonglong)dVar1 >> 0x20);
  uStack_10 = 0x40147d41a5b40143;
  return *(double *)(&uStack_b0 + param_1 * 2);
}





//==== 00537de0 GetTypedDataOfType_CraftBlueprint_ ====


/* public: class util__Darray_L_classCraftBlueprint_P_G_ 
   util__SerializationManagerInterface__GetTypedDataOfType_class_CraftBlueprint(bool)const  */

void * 
util__SerializationManagerInterface__GetTypedDataOfType_class_CraftBlueprint__o2
          (SerializationManagerInterface *this,void *param_1)

{
  undefined8 stack0xfffffffc;
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined3 in_stack_00000005;
  undefined1 in_stack_00000008;
  Str_L_char_G_ SStack_2c;
  int iStack_20;
  undefined **ppuStack_1c;
  void *pvStack_18;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iStack_c = CONCAT31((*(uint24_t*)((char*)&(iStack_c)+1)),in_stack_00000008);
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_2c,"CraftBlueprint");
  (**(code **)((int)*(int *)this + 4))(&ppuStack_1c,&SStack_2c,iStack_c);
  if (SStack_2c.Data != (char *)0x0) {
    port_op_delete(SStack_2c.Data);
    SStack_2c.Data = (char *)0x0;
  }
  *(undefined4 *)_param_1 = 0;
  *(undefined4 *)(_param_1 + 4) = 0;
  *(undefined4 *)(_param_1 + 8) = 0;
  *(undefined4 *)(_param_1 + 0xc) = 0;
  uVar3 = (*(code *)ppuStack_1c[3])();
  *(undefined ***)_param_1 = (undefined **)(&vftable_2);
  *(undefined4 *)(_param_1 + 4) = 0;
  *(undefined4 *)(_param_1 + 8) = 0;
  *(uint *)(_param_1 + 0xc) = uVar3;
  if (((int)uVar3 < 0) || (0x3fffffff < (int)uVar3)) {
    *(undefined4 *)(_param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar3) {
    uVar3 = -(uint)((int)((ulonglong)uVar3 * 4 >> 0x20) != 0) | (uint)((ulonglong)uVar3 * 4);
    pvVar4 = (void *)(uintptr_t)(port_op_new(uVar3));
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      memset(pvVar4,0,uVar3);
    }
    iVar6 = 0;
    *(void **)(_param_1 + 4) = pvVar4;
    if (0 < *(int *)(_param_1 + 0xc)) {
      do {
        *(undefined4 *)(*(int *)(_param_1 + 4) + iVar6 * 4) = 0;
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(_param_1 + 0xc));
    }
  }
  iStack_c = 0;
  iVar6 = (*(code *)ppuStack_1c[3])();
  if (iStack_c < iVar6) {
    do {
      puVar5 = (undefined4 *)(*(code *)*ppuStack_1c)(&iStack_c);
      iVar6 = *(int *)(_param_1 + 8);
      uVar1 = *puVar5;
      iStack_20 = iVar6 + 1;
      Darray_L_class_util__Reflectable_P_G___SetSize(_param_1,&iStack_20);
      bVar2 = Darray_L_enum_GraphicsResource__Type_G___CheckSize
                        ((Darray_L_enum_GraphicsResource__Type_G_ *)_param_1,iVar6);
      if (bVar2) {
        *(undefined4 *)(*(int *)(_param_1 + 4) + -4 + *(int *)(_param_1 + 8) * 4) = uVar1;
      }
      iStack_c = iStack_c + 1;
      iVar6 = (*(code *)ppuStack_1c[3])();
    } while (iStack_c < iVar6);
  }
  ppuStack_1c = (undefined **)(&vftable_6);
  if (pvStack_18 != (void *)0x0) {
    port_op_delete(pvStack_18);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return param_1;
}





//==== 00537f50 Join_ModulePlacer__ ====


/* class util__Darray_L_structModulePlacer_P_G_ __cdecl util__Join_L_structModulePlacer_P_G_(class
   util__Darray_L_structModulePlacer_P_G_ const &,class util__Darray_L_structModulePlacer_P_G_ const &) */

void * __cdecl
util__Join_struct_ModulePlacer
          (Darray_L_struct_ModulePlacer_P_G_ *param_1,Darray_L_struct_ModulePlacer_P_G_ *param_2)

{
  undefined8 stack0xfffffffc;
  Darray_L_struct_ModulePlacer_P_G_ *pDVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *in_stack_0000000c;
  int *piStack_18;
  undefined4 *puStack_14;
  Darray_L_struct_ModulePlacer_P_G_ *pDStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pDStack_10 = param_2;
  piStack_18 = in_stack_0000000c;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar3 = (**(code **)(*(int *)param_2 + 0xc))();
  iVar4 = (**(code **)(uintptr_t)(*in_stack_0000000c + 0xc))();
  Darray_L_class_Manager_P_G___Darray_L_class_Manager_P_G_((Darray_L_class_Manager_P_G_ *)param_1,iVar3 + iVar4);
  iStack_c = 0;
  iVar3 = (**(code **)(*(int *)pDStack_10 + 0xc))();
  pDVar1 = pDStack_10;
  if (iStack_c < iVar3) {
    do {
      puStack_14 = (undefined4 *)(*(code *)**(undefined4 **)pDVar1)(&iStack_c);
      iVar3 = *(int *)(param_1 + 8);
      pDStack_10 = (Darray_L_struct_ModulePlacer_P_G_ *)(iVar3 + 1);
      Darray_L_class_util__Reflectable_P_G___SetSize
                ((Darray_L_class_util__Reflectable_P_G_ *)param_1,(int *)&pDStack_10);
      bVar2 = Darray_L_enum_GraphicsResource__Type_G___CheckSize
                        ((Darray_L_enum_GraphicsResource__Type_G_ *)param_1,iVar3);
      if (bVar2) {
        *(undefined4 *)(*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 4) = *puStack_14;
      }
      iStack_c = iStack_c + 1;
      iVar3 = (**(code **)(*(int *)pDVar1 + 0xc))();
      in_stack_0000000c = piStack_18;
    } while (iStack_c < iVar3);
  }
  iStack_c = 0;
  iVar3 = (**(code **)(uintptr_t)(*in_stack_0000000c + 0xc))();
  if (iStack_c < iVar3) {
    do {
      puStack_14 = (undefined4 *)(**(code **)*in_stack_0000000c)(&iStack_c);
      iVar3 = *(int *)(param_1 + 8);
      piStack_18 = (int *)(iVar3 + 1);
      Darray_L_class_util__Reflectable_P_G___SetSize
                ((Darray_L_class_util__Reflectable_P_G_ *)param_1,(int *)&piStack_18);
      bVar2 = Darray_L_enum_GraphicsResource__Type_G___CheckSize
                        ((Darray_L_enum_GraphicsResource__Type_G_ *)param_1,iVar3);
      if (bVar2) {
        *(undefined4 *)(*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 4) = *puStack_14;
      }
      iStack_c = iStack_c + 1;
      iVar3 = (**(code **)(uintptr_t)(*in_stack_0000000c + 0xc))();
    } while (iStack_c < iVar3);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return param_1;
}





//==== 00538070 Join_MaterialConstituent_ ====


/* class util__Darray_L_structMaterialConstituent_G_ __cdecl util__Join_struct_MaterialConstituent(class util__Darray_L_classutil__Darray_L_structMaterialConstituent_G__G_ const &)
    */

void __cdecl
util__Join_struct_MaterialConstituent
          (Darray_L_class_util__Darray_L_struct_MaterialConstituent_G___G_ *param_1)

{
  undefined8 stack0xfffffffc;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int *in_stack_00000008;
  undefined4 uStack_28;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  uVar10 = 0;
  iStack_c = 0;
  iVar5 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
  if (iStack_c < iVar5) {
    do {
      piVar6 = (int *)(**(code **)*in_stack_00000008)(&iStack_c);
      iVar5 = (**(code **)(uintptr_t)(*piVar6 + 0xc))();
      iStack_c = iStack_c + 1;
      uVar10 = uVar10 + iVar5;
      iVar5 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
    } while (iStack_c < iVar5);
  }
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined ***)param_1 = (undefined **)(&vftable_15);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar10;
  if (((int)uVar10 < 0) || (0x3fffffff < (int)uVar10)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar10) {
    puVar7 = (undefined4 *)
             port_op_new(-(uint)((int)((ulonglong)uVar10 * 0x10 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar10 * 0x10));
    puVar8 = puVar7;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      for (; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar8 = 0;
        *(undefined8 *)(puVar8 + 2) = 0;
        puVar8 = puVar8 + 4;
      }
    }
    iVar5 = 0;
    *(undefined4 **)(param_1 + 4) = puVar7;
    if (0 < *(int *)(param_1 + 0xc)) {
      iVar9 = 0;
      do {
        iVar9 = iVar9 + 0x10;
        iVar5 = iVar5 + 1;
        puVar8 = (undefined4 *)(*(int *)(param_1 + 4) + -0x10 + iVar9);
        *puVar8 = 0;
        puVar8[1] = uStack_28;
        puVar8[2] = 0;
        puVar8[3] = 0;
      } while (iVar5 < *(int *)(param_1 + 0xc));
    }
  }
  iStack_10 = 0;
  iVar5 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
  if (iStack_10 < iVar5) {
    do {
      piVar6 = (int *)(**(code **)*in_stack_00000008)(&iStack_10);
      iStack_c = 0;
      iVar5 = (**(code **)(uintptr_t)(*piVar6 + 0xc))();
      if (iStack_c < iVar5) {
        do {
          puVar8 = (undefined4 *)(**(code **)*piVar6)(&iStack_c);
          iVar5 = *(int *)(param_1 + 8);
          iStack_14 = iVar5 + 1;
          Darray_L_struct_MaterialConstituent_G___SetSize
                    ((Darray_L_struct_MaterialConstituent_G_ *)param_1,&iStack_14);
          bVar4 = Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G___CheckSize
                            ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)param_1,
                             iVar5);
          if (bVar4) {
            uVar1 = puVar8[1];
            uVar2 = puVar8[2];
            uVar3 = puVar8[3];
            puVar7 = (undefined4 *)(*(int *)(param_1 + 4) + -0x10 + *(int *)(param_1 + 8) * 0x10);
            *puVar7 = *puVar8;
            puVar7[1] = uVar1;
            puVar7[2] = uVar2;
            puVar7[3] = uVar3;
          }
          iStack_c = iStack_c + 1;
          iVar5 = (**(code **)(uintptr_t)(*piVar6 + 0xc))();
        } while (iStack_c < iVar5);
      }
      iStack_10 = iStack_10 + 1;
      iVar5 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
    } while (iStack_10 < iVar5);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 005386d0 MapCast_util__Reflectable__CelestialBody__ ====


/* class util__Darray_L_classutil__Reflectable_P_G_ __cdecl util__MapCast_L_classutil__Reflectable__P_CstructCelestialBody_P_G_(class util__Darray_L_structCelestialBody_P_G_ const &) */

void __cdecl
util__MapCast_class_util__Reflectable__struct_CelestialBody
          (Darray_L_struct_CelestialBody_P_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int *in_stack_00000008;
  int iStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar3 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
  Darray_L_class_util__Reflectable_P_G___Darray_L_class_util__Reflectable_P_G_
            ((Darray_L_class_util__Reflectable_P_G_ *)param_1,iVar3);
  iStack_c = 0;
  iVar3 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
  if (iStack_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)*in_stack_00000008)(&iStack_c);
      iVar3 = *(int *)(param_1 + 8);
      uVar1 = *puVar4;
      iStack_10 = iVar3 + 1;
      Darray_L_class_util__Reflectable_P_G___SetSize
                ((Darray_L_class_util__Reflectable_P_G_ *)param_1,&iStack_10);
      bVar2 = Darray_L_enum_GraphicsResource__Type_G___CheckSize
                        ((Darray_L_enum_GraphicsResource__Type_G_ *)param_1,iVar3);
      if (bVar2) {
        *(undefined4 *)(*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 4) = uVar1;
      }
      iStack_c = iStack_c + 1;
      iVar3 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
    } while (iStack_c < iVar3);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00538770 MapCast_WeaponModule__Module__ ====


/* class util__Darray_L_classWeaponModule_P_G_ __cdecl util__MapCast_L_classWeaponModule_P_CclassModule__P_G_(class util__Darray_L_classModule_P_G_ const &) */

void __cdecl util__MapCast_class_WeaponModule__class_Module(Darray_L_class_Module_P_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int iVar6;
  int *in_stack_00000008;
  int iStack_10;
  uint uStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar3 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
  *(undefined ***)param_1 = (undefined **)(&vftable_2);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar3;
  if (((int)uVar3 < 0) || (0x3fffffff < (int)uVar3)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar3) {
    uStack_c = -(uint)((int)((ulonglong)uVar3 * 4 >> 0x20) != 0) | (uint)((ulonglong)uVar3 * 4);
    pvVar4 = (void *)(uintptr_t)(port_op_new(uStack_c));
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      memset(pvVar4,0,uStack_c);
    }
    iVar6 = 0;
    *(void **)(param_1 + 4) = pvVar4;
    if (0 < *(int *)(param_1 + 0xc)) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 4) + iVar6 * 4) = 0;
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_1 + 0xc));
    }
  }
  uStack_c = 0;
  iVar6 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
  if ((int)uStack_c < iVar6) {
    do {
      puVar5 = (undefined4 *)(**(code **)*in_stack_00000008)(&uStack_c);
      iVar6 = *(int *)(param_1 + 8);
      uVar1 = *puVar5;
      iStack_10 = iVar6 + 1;
      Darray_L_class_util__Reflectable_P_G___SetSize
                ((Darray_L_class_util__Reflectable_P_G_ *)param_1,&iStack_10);
      bVar2 = Darray_L_enum_GraphicsResource__Type_G___CheckSize
                        ((Darray_L_enum_GraphicsResource__Type_G_ *)param_1,iVar6);
      if (bVar2) {
        *(undefined4 *)(*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 4) = uVar1;
      }
      uStack_c = uStack_c + 1;
      iVar6 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
    } while ((int)uStack_c < iVar6);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00539950 MethodCallerConst__public__bool___thiscall_CraftBlueprint__CanMoveSimple_void_const__ ====


/* public: static bool __cdecl util__DelegateFactory_L_class_CraftBlueprint_Cbool_G___MethodCallerConst_L__public_bool__thiscall_CraftBlueprint__CanMoveSimple_void_const_G_(void const * const) */

bool __cdecl
util__DelegateFactory_class_CraftBlueprint_bool___MethodCallerConst__public__bool___thiscall_CraftBlueprint__CanMoveSimple_void_const(void *param_1)

{
  Darray_L_class_util__Reflectable_P_G_ *this;
  void *this_00;
  bool bVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  undefined1 uVar5;
  void *pvStack_24;
  void *pvStack_14;
  
  this_00 = param_1;
  if (*(char *)((int)param_1 + 0x2d1) != '\0') goto LAB_00539a78;
  iVar3 = *(int *)((int)param_1 + 0x2c8);
  this = (Darray_L_class_util__Reflectable_P_G_ *)((int)param_1 + 0x2c0);
  param_1 = (void *)(iVar3 + 1);
  Darray_L_class_util__Reflectable_P_G___SetSize(this,(int *)&param_1);
  bVar1 = Darray_L_enum_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_enum_GraphicsResource__Type_G_ *)this,iVar3);
  if (bVar1) {
    *(code **)(*(int *)((int)this_00 + 0x2c4) + -4 + *(int *)((int)this_00 + 0x2c8) * 4) = (long long int (*)())(CraftBlueprint__CanMove_Clear);
  }
  piVar2 = (int *)CraftBlueprint__GetEngineModules((CraftBlueprint *)this_00);
  param_1 = (void *)0x1;
  iVar3 = (**(code **)(uintptr_t)(*piVar2 + 0xc))();
  if (iVar3 < 1) {
LAB_005399ec:
    uVar5 = 0;
    pvVar4 = param_1;
  }
  else {
    piVar2 = (int *)CraftBlueprint__GetReactionMassModules((CraftBlueprint *)this_00);
    param_1 = (void *)0x3;
    iVar3 = (**(code **)(uintptr_t)(*piVar2 + 0xc))();
    if (iVar3 < 1) goto LAB_005399ec;
    uVar5 = 1;
    pvVar4 = (void *)0x3;
  }
  if ((((uint)pvVar4 & 2) != 0) && (pvStack_14 != (void *)0x0)) {
    port_op_delete(pvStack_14);
  }
  if (pvStack_24 != (void *)0x0) {
    port_op_delete(pvStack_24);
  }
  param_1 = (void *)CONCAT13(1,CONCAT12(uVar5,(*(uint16_t*)&(param_1))));
  *(undefined2 *)((int)this_00 + 0x2d0) = (*(uint16_t*)((char*)&(param_1)+2));
  if (*(char *)((int)this_00 + 0x2d1) == '\0') {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,"IsValid()",
              (char *)0x0);
    DebugBreak();
  }
LAB_00539a78:
  return (bool)*(undefined1 *)((int)this_00 + 0x2d0);
}





//==== 00539a90 MethodCallerConst__public__bool___thiscall_CraftBlueprint__EmitsAnyHeat_void_const__ ====


/* public: static bool __cdecl util__DelegateFactory_L_class_CraftBlueprint_Cbool_G___MethodCallerConst_L__public_bool__thiscall_CraftBlueprint__EmitsAnyHeat_void_const_G_(void const * const) */

bool __cdecl
util__DelegateFactory_class_CraftBlueprint_bool___MethodCallerConst__public__bool___thiscall_CraftBlueprint__EmitsAnyHeat_void_const(void *param_1)

{
  double dVar1;
  
  dVar1 = CraftBlueprint__GetPeakHeatSignature_W((CraftBlueprint *)param_1);
  return 0.0 < dVar1;
}





//==== 00539ac0 MethodCallerConst__public__class_util__Str_char____thiscall_CraftBlueprint__GetArmamentInfo_void_const__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_classCraftBlueprint_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__public_classutil__Str_L_char_G___thiscall_CraftBlueprint__GetArmamentInfo_void_const_G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_class_CraftBlueprint_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_CraftBlueprint__GetArmamentInfo_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_10;
  
  pSVar1 = CraftBlueprint__GetArmamentInfo((CraftBlueprint *)param_1,&SStack_10);
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 00539b00 MethodCallerConst__public__class_util__Str_char____thiscall_CraftBlueprint__GetArmorInfo_void_const__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_classCraftBlueprint_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__public_classutil__Str_L_char_G___thiscall_CraftBlueprint__GetArmorInfo_void_const_G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_class_CraftBlueprint_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_CraftBlueprint__GetArmorInfo_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  undefined8 stack0xfffffffc;
  Str_L_char_G_ SStack_18;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  SStack_18.Data = (char *)0x0;
  SStack_18.Capacity = 0;
  SStack_18.Length = 0;
  uStack_c = 0;
  FUN_005360c0((int)param_1 + 0x70,&uStack_c,&SStack_18);
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,&SStack_18);
  if (SStack_18.Data != (char *)0x0) {
    port_op_delete(SStack_18.Data);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}





//==== 00539b90 MethodCallerConst__public__class_util__Str_char____thiscall_CraftBlueprint__GetCostInfo_void_const__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_classCraftBlueprint_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__public_classutil__Str_L_char_G___thiscall_CraftBlueprint__GetCostInfo_void_const_G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_class_CraftBlueprint_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_CraftBlueprint__GetCostInfo_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(CraftBlueprint__GetCostInfo((CraftBlueprint *)param_1,&SStack_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 00539bd0 MethodCallerConst__public__class_util__Str_char____thiscall_CraftBlueprint__GetDeltaVInfo_void_const__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_classCraftBlueprint_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__public_classutil__Str_L_char_G___thiscall_CraftBlueprint__GetDeltaVInfo_void_const_G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_class_CraftBlueprint_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_CraftBlueprint__GetDeltaVInfo_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(CraftBlueprint__GetDeltaVInfo((CraftBlueprint *)param_1,&SStack_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 00539c10 MethodCallerConst__public__class_util__Str_char____thiscall_CraftBlueprint__GetHeatInfo_void_const__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_classCraftBlueprint_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__public_classutil__Str_L_char_G___thiscall_CraftBlueprint__GetHeatInfo_void_const_G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_class_CraftBlueprint_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_CraftBlueprint__GetHeatInfo_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(CraftBlueprint__GetHeatInfo((CraftBlueprint *)param_1,&SStack_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 00539c50 MethodCallerConst__public__class_util__Str_char____thiscall_CraftBlueprint__GetMassInfo_void_const__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_classCraftBlueprint_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__public_classutil__Str_L_char_G___thiscall_CraftBlueprint__GetMassInfo_void_const_G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_class_CraftBlueprint_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_CraftBlueprint__GetMassInfo_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(CraftBlueprint__GetMassInfo((CraftBlueprint *)param_1,&SStack_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 00539c90 MethodCallerConst__public__class_util__Str_char____thiscall_CraftBlueprint__GetMassRatioInfo_void_const__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_classCraftBlueprint_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__public_classutil__Str_L_char_G___thiscall_CraftBlueprint__GetMassRatioInfo_void_const_G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_class_CraftBlueprint_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_CraftBlueprint__GetMassRatioInfo_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(CraftBlueprint__GetMassRatioInfo((CraftBlueprint *)param_1,&SStack_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 00539cd0 MethodCallerConst__public__class_util__Str_char____thiscall_CraftBlueprint__GetMoveInfo_void_const__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_classCraftBlueprint_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__public_classutil__Str_L_char_G___thiscall_CraftBlueprint__GetMoveInfo_void_const_G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_class_CraftBlueprint_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_CraftBlueprint__GetMoveInfo_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(CraftBlueprint__GetMoveInfo((CraftBlueprint *)param_1,&SStack_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 00539d10 MethodCallerConst__public__class_util__Str_char____thiscall_CraftBlueprint__GetPayloadInfo_void_const__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_classCraftBlueprint_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__public_classutil__Str_L_char_G___thiscall_CraftBlueprint__GetPayloadInfo_void_const_G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_class_CraftBlueprint_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_CraftBlueprint__GetPayloadInfo_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_10;
  
  pSVar1 = CraftBlueprint__GetPayloadInfo((CraftBlueprint *)param_1,&SStack_10);
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 00539d50 MethodCallerConst__public__class_util__Str_char____thiscall_CraftBlueprint__GetSizeInfo_void_const__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_classCraftBlueprint_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__public_classutil__Str_L_char_G___thiscall_CraftBlueprint__GetSizeInfo_void_const_G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_class_CraftBlueprint_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_CraftBlueprint__GetSizeInfo_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(CraftBlueprint__GetSizeInfo((CraftBlueprint *)param_1,&SStack_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 00539d90 MethodCallerConst__public__bool___thiscall_CraftBlueprint__HasArmor_void_const__ ====


/* public: static bool __cdecl util__DelegateFactory_L_class_CraftBlueprint_Cbool_G___MethodCallerConst_L__public_bool__thiscall_CraftBlueprint__HasArmor_void_const_G_(void const * const) */

bool __cdecl
util__DelegateFactory_class_CraftBlueprint_bool___MethodCallerConst__public__bool___thiscall_CraftBlueprint__HasArmor_void_const(void *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)((int)param_1 + 0x70) + 0xc))();
}





//==== 00539da0 MethodCallerConst__public__bool___thiscall_CraftBlueprint__HasPayload_void_const__ ====


/* public: static bool __cdecl util__DelegateFactory_L_class_CraftBlueprint_Cbool_G___MethodCallerConst_L__public_bool__thiscall_CraftBlueprint__HasPayload_void_const_G_(void const * const) */

bool __cdecl
util__DelegateFactory_class_CraftBlueprint_bool___MethodCallerConst__public__bool___thiscall_CraftBlueprint__HasPayload_void_const(void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uStack_10;
  
  piVar1 = (int *)CraftBlueprint__GetPayloadModules((CraftBlueprint *)param_1);
  iVar2 = (**(code **)(uintptr_t)(*piVar1 + 0xc))();
  if (uStack_10 != (void *)0x0) {
    port_op_delete(uStack_10);
  }
  return 0 < iVar2;
}





//==== 00539de0 MethodCallerConst__public__bool___thiscall_CraftBlueprint__HasWeapons_void_const__ ====


/* public: static bool __cdecl util__DelegateFactory_L_class_CraftBlueprint_Cbool_G___MethodCallerConst_L__public_bool__thiscall_CraftBlueprint__HasWeapons_void_const_G_(void const * const) */

bool __cdecl
util__DelegateFactory_class_CraftBlueprint_bool___MethodCallerConst__public__bool___thiscall_CraftBlueprint__HasWeapons_void_const(void *param_1)

{
  int iVar1;
  undefined **ppuStack_24;
  void *pvStack_20;
  undefined **ppuStack_14;
  void *pvStack_10;
  
  CraftBlueprint__GetModulesOfType((CraftBlueprint *)param_1,(int)&ppuStack_24);
  MapCast_L_class_WeaponModule_P_Cclass_Module_P_G_((Darray_L_class_Module_P_G_ *)&ppuStack_14);
  ppuStack_24 = (undefined **)(&vftable_6);
  if (pvStack_20 != (void *)0x0) {
    port_op_delete(pvStack_20);
  }
  iVar1 = (**(code **)((int)ppuStack_14 + 0xc))();
  ppuStack_14 = (undefined **)(&vftable_2);
  if (pvStack_10 != (void *)0x0) {
    port_op_delete(pvStack_10);
  }
  return 0 < iVar1;
}





//==== 0053a320 Unzip_Material_const__double_MaterialConstituent_ ====


/* struct util__tuple2_L_classutil__Darray_L_classMaterialconst_P_G__Cclassutil__Darray_L_double_G__G_
   __cdecl util__Unzip_class_Material_const__double_struct_MaterialConstituent(class
   util__Darray_L_structMaterialConstituent_G_ const &) */

undefined4 __cdecl
util__Unzip_class_Material_const__double_struct_MaterialConstituent__o2
          (Darray_L_struct_MaterialConstituent_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  undefined8 uVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  int *in_stack_00000008;
  int iStack_14;
  undefined4 *puStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iStack_c = 0;
  *(undefined ***)param_1 = (undefined **)(&vftable_2);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined ***)(param_1 + 0x10) = (undefined **)(&vftable_63);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar4 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
  if (iStack_c < iVar4) {
    do {
      puStack_10 = (undefined4 *)(**(code **)*in_stack_00000008)(&iStack_c);
      iVar4 = *(int *)(param_1 + 8);
      uVar2 = *puStack_10;
      iStack_14 = iVar4 + 1;
      Darray_L_class_util__Reflectable_P_G___SetSize
                ((Darray_L_class_util__Reflectable_P_G_ *)param_1,&iStack_14);
      bVar3 = Darray_L_enum_GraphicsResource__Type_G___CheckSize
                        ((Darray_L_enum_GraphicsResource__Type_G_ *)param_1,iVar4);
      if (bVar3) {
        *(undefined4 *)(*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 4) = uVar2;
      }
      iVar4 = *(int *)(param_1 + 0x18);
      uVar1 = *(undefined8 *)(puStack_10 + 2);
      puStack_10 = (undefined4 *)(iVar4 + 1);
      Darray_L_double_G___SetSize((Darray_L_double_G_ *)(param_1 + 0x10),(int *)&puStack_10);
      bVar3 = Darray_L_double_G___CheckSize((Darray_L_double_G_ *)(param_1 + 0x10),iVar4);
      if (bVar3) {
        *(undefined8 *)(*(int *)(param_1 + 0x14) + -8 + *(int *)(param_1 + 0x18) * 8) = uVar1;
      }
      iStack_c = iStack_c + 1;
      iVar4 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
    } while (iStack_c < iVar4);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return (undefined4)(uintptr_t)param_1;
}





//==== 0053a440 Zip_CraftBlueprint_const__int_ ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* class util__Darray_L_structutil__tuple2_L_classCraftBlueprintconst_P_Cint_G__G_ __cdecl
   util__Zip_class_CraftBlueprint_const__int(class util__Darray_L_classCraftBlueprintconst_P_G_
   const &,class util__Darray_L_int_G_ const &) */

Darray_L_CraftBlueprint_const_P_G_ * __cdecl
util__Zip_class_CraftBlueprint_const__int__o2(Darray_L_CraftBlueprint_const_P_G_ *param_1,Darray_L_int_G_ *param_2)

{
  undefined8 stack0xfffffffc;
  Darray_L_int_G_ *pDVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int *in_stack_0000000c;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  Darray_L_int_G_ *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = param_2;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar3 = (**(code **)(uintptr_t)(*in_stack_0000000c + 0xc))();
  uVar4 = (**(code **)(local_10->_pad_0x0_0 + 0xc))();
  *(undefined ***)param_1 = &vftable_109;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((int)uVar3 < (int)uVar4) {
    uVar3 = uVar4;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar3;
  if (((int)uVar3 < 0) || (0x3fffffff < (int)uVar3)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar3) {
    puVar5 = (undefined4 *)(uintptr_t)(port_op_new(-(uint)((int)((ulonglong)uVar3 * 8 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar3 * 8)));
    puVar7 = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7 = puVar7 + 2;
      }
    }
    iVar8 = 0;
    *(undefined4 **)(param_1 + 4) = puVar5;
    if (0 < *(int *)(param_1 + 0xc)) {
      do {
        iVar6 = *(int *)(param_1 + 4);
        *(undefined4 *)(iVar6 + iVar8 * 8) = 0;
        *(undefined4 *)(iVar6 + 4 + iVar8 * 8) = 0;
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(param_1 + 0xc));
    }
  }
  local_c = 0;
  while( true ) {
    iVar8 = (**(code **)(uintptr_t)(*in_stack_0000000c + 0xc))();
    iVar6 = (**(code **)(local_10->_pad_0x0_0 + 0xc))();
    if (iVar8 < iVar6) {
      iVar8 = iVar6;
    }
    if (iVar8 <= local_c) break;
    iVar8 = (**(code **)(uintptr_t)(*in_stack_0000000c + 0xc))();
    if (local_c < iVar8) {
      puVar7 = (undefined4 *)(**(code **)*in_stack_0000000c)(&local_c);
      local_18 = *puVar7;
    }
    else {
      local_18 = 0;
    }
    pDVar1 = local_10;
    iVar8 = (**(code **)(local_10->_pad_0x0_0 + 0xc))();
    if (local_c < iVar8) {
      puVar7 = (undefined4 *)(**(code **)pDVar1->_pad_0x0_0)(&local_c);
      local_14 = *puVar7;
    }
    else {
      local_14 = 0;
    }
    iVar8 = *(int *)(param_1 + 8);
    local_1c = iVar8 + 1;
    Darray_L_util__tuple2_L_Order__Type_Cint_G___G___SetSize
              ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)param_1,&local_1c);
    bVar2 = Darray_L_util__tuple2_L_Order__Type_Cint_G___G___CheckSize
                      ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)param_1,iVar8);
    if (bVar2) {
      iVar8 = *(int *)(param_1 + 4);
      iVar6 = *(int *)(param_1 + 8);
      *(undefined4 *)(iVar8 + -8 + iVar6 * 8) = local_14;
      *(undefined4 *)(iVar8 + -4 + iVar6 * 8) = local_18;
    }
    local_c = local_c + 1;
  }
  return param_1;
}

//==== 0053a5e0 Zip_BriefingSubject__Type_util__Str_char___ ====


/* class util__Darray_L_structutil__tuple2_L_enumBriefingSubject__Type_Cclassutil__Str_L_char_G__G__G_
   __cdecl util__Zip_enum_BriefingSubject__Type_class_util__Str_char(class util__Darray_L_enum_BriefingSubject__Type_G_ const &,class util__Darray_L_classutil__Str_L_char_G__G_ const &) */

void __cdecl
util__Zip_enum_BriefingSubject__Type_class_util__Str_char__o2
          (Darray_L_enum_BriefingSubject__Type_G_ *param_1,Darray_L_class_util__Str_L_char_G___G_ *param_2)

{
  undefined8 stack0xfffffffc;
  uint *puVar1;
  int iVar2;
  int *piVar3;
  Darray_L_enum_BriefingSubject__Type_G_ *pDVar4;
  Darray_L_class_util__Str_L_char_G___G_ *pDVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  Str_L_char_G_ *pSVar10;
  undefined4 *puVar11;
  uint *puVar12;
  Str_L_char_G_ *pSVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  char *pcVar17;
  int *in_stack_0000000c;
  Str_L_char_G_ SStack_5c;
  Str_L_char_G_ SStack_50;
  Str_L_char_G_ SStack_44;
  undefined4 uStack_38;
  Str_L_char_G_ SStack_34;
  Str_L_char_G_ SStack_28;
  int *piStack_1c;
  Darray_L_enum_BriefingSubject__Type_G_ *pDStack_18;
  Darray_L_class_util__Str_L_char_G___G_ *pDStack_14;
  Str_L_char_G_ *pSStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pSVar13 = (Str_L_char_G_ *)0x0;
  pSStack_10 = (Str_L_char_G_ *)0x0;
  pDStack_14 = param_2;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  pDStack_18 = param_1;
  piStack_1c = in_stack_0000000c;
  uVar7 = (**(code **)(uintptr_t)(*in_stack_0000000c + 0xc))();
  uVar8 = (**(code **)(*(int *)pDStack_14 + 0xc))();
  *(undefined ***)param_1 =
       &vftable_123;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((int)uVar7 < (int)uVar8) {
    uVar7 = uVar8;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar7;
  if (((int)uVar7 < 0) || (0x3fffffff < (int)uVar7)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar7) {
    uVar8 = -(uint)((int)((ulonglong)uVar7 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar7 * 0x10);
    puVar9 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar8) | uVar8 + 4);
    if (puVar9 == (uint *)0x0) {
      puVar12 = (uint *)0x0;
    }
    else {
      *puVar9 = uVar7;
      puVar12 = puVar9 + 1;
      puVar1 = puVar12;
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar1 = 0;
        puVar1 = puVar1 + 4;
        puVar9[2] = 0;
        puVar9[3] = 0;
        puVar9[4] = 0;
        puVar9 = puVar9 + 4;
      }
    }
    iVar16 = 0;
    *(uint **)(param_1 + 4) = puVar12;
    if (0 < *(int *)(param_1 + 0xc)) {
      iVar14 = 0;
      uStack_38 = 0;
      SStack_34.Data = (char *)0x0;
      SStack_34.Capacity = 0;
      SStack_34.Length = 0;
      do {
        iVar2 = *(int *)(param_1 + 4);
        *(undefined4 *)(iVar2 + iVar14) = 0;
        util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)((undefined4 *)(iVar2 + iVar14) + 1),&SStack_34);
        iVar16 = iVar16 + 1;
        iVar14 = iVar14 + 0x10;
        pSVar13 = pSStack_10;
      } while (iVar16 < *(int *)(param_1 + 0xc));
    }
  }
  iStack_c = 0;
  pcVar17 = SStack_28.Data;
  while( true ) {
    iVar16 = (**(code **)(uintptr_t)(*piStack_1c + 0xc))();
    iVar14 = (**(code **)(*(int *)pDStack_14 + 0xc))();
    piVar3 = piStack_1c;
    if (iVar16 < iVar14) {
      iVar16 = iVar14;
    }
    if (iVar16 <= iStack_c) break;
    iVar16 = (**(code **)(uintptr_t)(*piStack_1c + 0xc))();
    if (iStack_c < iVar16) {
      pSVar13 = (Str_L_char_G_ *)((uint)pSVar13 | 1);
      pSVar10 = (Str_L_char_G_ *)(**(code **)*piVar3)(&iStack_c);
      pSStack_10 = (Str_L_char_G_ *)util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_5c,pSVar10);
    }
    else {
      pSVar13 = (Str_L_char_G_ *)((uint)pSVar13 | 2);
      pSStack_10 = &SStack_28;
      pcVar17 = (char *)0x0;
      SStack_28.Data = (char *)0x0;
      SStack_28.Capacity = 0;
      SStack_28.Length = 0;
    }
    pDVar5 = pDStack_14;
    iVar16 = (**(code **)(*(int *)pDStack_14 + 0xc))();
    if (iStack_c < iVar16) {
      puVar11 = (undefined4 *)(*(code *)**(undefined4 **)pDVar5)(&iStack_c);
      uVar15 = *puVar11;
    }
    else {
      uVar15 = 0;
    }
    util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_50,pSStack_10);
    util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_44,&SStack_50);
    uStack_38 = uVar15;
    util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_34,&SStack_44);
    if (SStack_44.Data != (char *)0x0) {
      port_op_delete(SStack_44.Data);
      SStack_44.Data = (char *)0x0;
    }
    if (SStack_50.Data != (char *)0x0) {
      port_op_delete(SStack_50.Data);
      SStack_50.Data = (char *)0x0;
    }
    iVar16 = *(int *)(pDStack_18 + 8);
    pSStack_10 = (Str_L_char_G_ *)(iVar16 + 1);
    Darray_L_struct_util__tuple2_L_enum_BriefingSubject__Type_Cclass_util__Str_L_char_G___G___G___SetSize
              ((Darray_L_struct_util__tuple2_L_enum_BriefingSubject__Type_Cclass_util__Str_L_char_G___G___G_ *)
               pDStack_18,(int *)&pSStack_10);
    pDVar4 = pDStack_18;
    bVar6 = Darray_L_struct_util__tuple2_L_enum_BriefingSubject__Type_Cclass_util__Str_L_char_G___G___G___CheckSize((Darray_L_struct_util__tuple2_L_enum_BriefingSubject__Type_Cclass_util__Str_L_char_G___G___G_
                       *)pDStack_18,iVar16);
    if (bVar6) {
      iVar16 = *(int *)(pDVar4 + 8) * 0x10 + *(int *)(pDVar4 + 4);
      *(undefined4 *)(iVar16 + -0x10) = uStack_38;
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(iVar16 + -0xc),&SStack_34);
    }
    if (SStack_34.Data != (char *)0x0) {
      port_op_delete(SStack_34.Data);
      SStack_34.Data = (char *)0x0;
    }
    if ((((uint)pSVar13 & 2) != 0) &&
       (pSVar13 = (Str_L_char_G_ *)((uint)pSVar13 & 0xfffffffd), pcVar17 != (char *)0x0)) {
      port_op_delete(pcVar17);
      pcVar17 = (char *)0x0;
      SStack_28.Data = (char *)0x0;
    }
    if ((((uint)pSVar13 & 1) != 0) &&
       (pSVar13 = (Str_L_char_G_ *)((uint)pSVar13 & 0xfffffffe), SStack_5c.Data != (char *)0x0)) {
      port_op_delete(SStack_5c.Data);
      SStack_5c.Data = (char *)0x0;
    }
    iStack_c = iStack_c + 1;
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0053a860 AssocArray_ModulePlacer_const__double_ ====


/* public:  util__AssocArray_L_structModulePlacerconst_P_Cdouble_G___AssocArray_L_struct_ModulePlacerconst_P_Cdouble_G_(int const &) */

AssocArray_L_struct_ModulePlacer_const_P_Cdouble_G_ * 
util__AssocArray_struct_ModulePlacer_const__double___AssocArray_struct_ModulePlacer_const__double
          (AssocArray_L_struct_ModulePlacer_const_P_Cdouble_G_ *this,int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  uint uVar4;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  uVar4 = *param_1;
  *(uint *)(this + 8) = uVar4;
  if (((int)uVar4 < 0) || (0x3fffffff < (int)uVar4)) {
    *(undefined4 *)(this + 8) = 0;
  }
  else if (0 < (int)uVar4) {
    puVar2 = (undefined4 *)
             port_op_new(-(uint)((int)((ulonglong)uVar4 * 0x10 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar4 * 0x10));
    puVar1 = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar1 = 0;
        *(undefined8 *)(puVar1 + 2) = 0;
        puVar1 = puVar1 + 4;
      }
    }
    uVar4 = *(uint *)(this + 8);
    *(undefined4 **)this = puVar2;
    pvVar3 = (void *)(uintptr_t)(port_op_new(uVar4));
    if (pvVar3 == (void *)0x0) {
      *(undefined4 *)(this + 4) = 0;
      return this;
    }
    memset(pvVar3,0,uVar4);
    *(void **)(this + 4) = pvVar3;
    return this;
  }
  return this;
}





//==== 0053a930 AssocArray_ModulePlacer_const__double__0053a930 ====


/* public:  util__AssocArray_L_structModulePlacerconst_P_Cdouble_G___AssocArray_L_struct_ModulePlacerconst_P_Cdouble_G_(class util__AssocArray_L_structModulePlacerconst_P_Cdouble_G_ const &)
    */

AssocArray_L_struct_ModulePlacer_const_P_Cdouble_G_ * __thiscall
util__AssocArray_struct_ModulePlacer_const__double___AssocArray_struct_ModulePlacer_const__double__o2
          (AssocArray_L_struct_ModulePlacer_const_P_Cdouble_G_ *this,
          AssocArray_L_struct_ModulePlacer_const_P_Cdouble_G_ *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  void *pvVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  uVar8 = *(uint *)(param_1 + 8);
  *(uint *)(this + 8) = uVar8;
  if (((int)uVar8 < 0) || (0x3fffffff < (int)uVar8)) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\assocarray.inl",0x22,
              "Capacity >= 0 && Capacity <= ASSOC_ARRAY_MAX_SIZE",(char *)0x0);
    DebugBreak();
    uVar8 = *(uint *)(this + 8);
  }
  if (0 < (int)uVar8) {
    puVar5 = (undefined4 *)
             port_op_new(-(uint)((int)((ulonglong)uVar8 * 0x10 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar8 * 0x10));
    puVar1 = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar1 = 0;
        *(undefined8 *)(puVar1 + 2) = 0;
        puVar1 = puVar1 + 4;
      }
    }
    *(undefined4 **)this = puVar5;
    uVar8 = *(uint *)(this + 8);
    pvVar6 = (void *)(uintptr_t)(port_op_new(uVar8));
    if (pvVar6 == (void *)0x0) {
      pvVar6 = (void *)0x0;
    }
    else {
      memset(pvVar6,0,uVar8);
    }
    iVar7 = 0;
    *(void **)(this + 4) = pvVar6;
    if (0 < *(int *)(this + 8)) {
      iVar9 = 0;
      do {
        iVar9 = iVar9 + 0x10;
        puVar1 = (undefined4 *)(*(int *)param_1 + -0x10 + iVar9);
        uVar2 = puVar1[1];
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        puVar5 = (undefined4 *)(*(int *)this + -0x10 + iVar9);
        *puVar5 = *puVar1;
        puVar5[1] = uVar2;
        puVar5[2] = uVar3;
        puVar5[3] = uVar4;
        *(undefined1 *)(iVar7 + *(int *)(this + 4)) = *(undefined1 *)(iVar7 + *(int *)(param_1 + 4))
        ;
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(this + 8));
    }
  }
  return this;
}





//==== 0053aa30 AssocArray_ModulePlacer_const__bool_ ====


/* public:  util__AssocArray_L_structModulePlacerconst_P_Cbool_G___AssocArray_L_struct_ModulePlacerconst_P_Cbool_G_(int const &) */

AssocArray_L_struct_ModulePlacer_const_P_Cbool_G_ * 
util__AssocArray_struct_ModulePlacer_const__bool___AssocArray_struct_ModulePlacer_const__bool
          (AssocArray_L_struct_ModulePlacer_const_P_Cbool_G_ *this,int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  uint uVar4;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  uVar4 = *param_1;
  *(uint *)(this + 8) = uVar4;
  if (((int)uVar4 < 0) || (0x3fffffff < (int)uVar4)) {
    *(undefined4 *)(this + 8) = 0;
  }
  else if (0 < (int)uVar4) {
    puVar2 = (undefined4 *)
             port_op_new(-(uint)((int)((ulonglong)uVar4 * 8 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar4 * 8));
    puVar1 = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 0;
        puVar1 = puVar1 + 2;
      }
    }
    uVar4 = *(uint *)(this + 8);
    *(undefined4 **)this = puVar2;
    pvVar3 = (void *)(uintptr_t)(port_op_new(uVar4));
    if (pvVar3 == (void *)0x0) {
      *(undefined4 *)(this + 4) = 0;
      return this;
    }
    memset(pvVar3,0,uVar4);
    *(void **)(this + 4) = pvVar3;
    return this;
  }
  return this;
}





//==== 0053aaf0 AssocArray_ModulePlacer_const__bool__0053aaf0 ====


/* public:  util__AssocArray_L_structModulePlacerconst_P_Cbool_G___AssocArray_L_struct_ModulePlacerconst_P_Cbool_G_(class util__AssocArray_L_structModulePlacerconst_P_Cbool_G_ const &) */

AssocArray_L_struct_ModulePlacer_const_P_Cbool_G_ * __thiscall
util__AssocArray_struct_ModulePlacer_const__bool___AssocArray_struct_ModulePlacer_const__bool__o2
          (AssocArray_L_struct_ModulePlacer_const_P_Cbool_G_ *this,
          AssocArray_L_struct_ModulePlacer_const_P_Cbool_G_ *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  uVar6 = *(uint *)(param_1 + 8);
  *(uint *)(this + 8) = uVar6;
  if (((int)uVar6 < 0) || (0x3fffffff < (int)uVar6)) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\assocarray.inl",0x22,
              "Capacity >= 0 && Capacity <= ASSOC_ARRAY_MAX_SIZE",(char *)0x0);
    DebugBreak();
    uVar6 = *(uint *)(this + 8);
  }
  if (0 < (int)uVar6) {
    puVar4 = (undefined4 *)
             port_op_new(-(uint)((int)((ulonglong)uVar6 * 8 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar6 * 8));
    puVar3 = puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar3 = 0;
        *(undefined1 *)(puVar3 + 1) = 0;
        puVar3 = puVar3 + 2;
      }
    }
    *(undefined4 **)this = puVar4;
    uVar6 = *(uint *)(this + 8);
    pvVar5 = (void *)(uintptr_t)(port_op_new(uVar6));
    if (pvVar5 == (void *)0x0) {
      pvVar5 = (void *)0x0;
    }
    else {
      memset(pvVar5,0,uVar6);
    }
    *(void **)(this + 4) = pvVar5;
    iVar7 = 0;
    if (0 < *(int *)(this + 8)) {
      do {
        iVar1 = *(int *)param_1;
        iVar2 = *(int *)this;
        *(undefined4 *)(iVar2 + iVar7 * 8) = *(undefined4 *)(iVar1 + iVar7 * 8);
        *(undefined4 *)(iVar2 + 4 + iVar7 * 8) = *(undefined4 *)(iVar1 + 4 + iVar7 * 8);
        *(undefined1 *)(iVar7 + *(int *)(this + 4)) = *(undefined1 *)(iVar7 + *(int *)(param_1 + 4))
        ;
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(this + 8));
    }
  }
  return this;
}





//==== 0053abf0 AssocArray_util__tuple2_ModulePlacer_const__int__util__Quaternion_double___ ====


/* public:  util__AssocArray_L_structutil__tuple2_L_structModulePlacerconst_P_Cint_G__Cstruct_util__Quaternion_L_double_G__G___AssocArray_L_structutil__tuple2_L_structModulePlacerconst__P_Cint_G__Cstructutil__Quaternion_L_double_G__G_(int const &) */

AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cstruct_util__Quaternion_L_double_G___G_ *

util__AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__struct_util__Quaternion_double_____AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__struct_util__Quaternion_double
          (AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cstruct_util__Quaternion_L_double_G___G_
           *this,int *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  uVar3 = *param_1;
  *(uint *)(this + 8) = uVar3;
  if (((int)uVar3 < 0) || (0x3fffffff < (int)uVar3)) {
    *(undefined4 *)(this + 8) = 0;
  }
  else if (0 < (int)uVar3) {
    pvVar1 = (void *)(uintptr_t)(port_op_new(-(uint)((int)((ulonglong)uVar3 * 0x28 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar3 * 0x28)));
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else if (uVar3 != 0) {
      puVar2 = (undefined8 *)((int)pvVar1 + 0x18);
      do {
        *(undefined4 *)(puVar2 + -3) = 0;
        *(undefined4 *)((int)puVar2 + -0x14) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x3ff0000000000000;
        *(undefined4 *)(puVar2 + -2) = 0;
        *(undefined4 *)((int)puVar2 + -0xc) = 0;
        *(undefined4 *)(puVar2 + -1) = 0;
        *(undefined4 *)((int)puVar2 + -4) = 0;
        uVar3 = uVar3 - 1;
        puVar2 = puVar2 + 5;
      } while (uVar3 != 0);
    }
    uVar3 = *(uint *)(this + 8);
    *(void **)this = pvVar1;
    pvVar1 = (void *)(uintptr_t)(port_op_new(uVar3));
    if (pvVar1 == (void *)0x0) {
      *(undefined4 *)(this + 4) = 0;
      return this;
    }
    memset(pvVar1,0,uVar3);
    *(void **)(this + 4) = pvVar1;
    return this;
  }
  return this;
}





//==== 0053ace0 AssocArray_util__tuple2_ModulePlacer_const__int__util__Quaternion_double____0053ace0 ====


/* public:  util__AssocArray_L_structutil__tuple2_L_structModulePlacerconst_P_Cint_G__Cstruct_util__Quaternion_L_double_G__G___AssocArray_L_structutil__tuple2_L_structModulePlacerconst__P_Cint_G__Cstructutil__Quaternion_L_double_G__G_(class util__AssocArray_L_structutil__tuple2_L_struct_ModulePlacerconst_P_Cint_G__Cstructutil__Quaternion_L_double_G__G_ const &) */

AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cstruct_util__Quaternion_L_double_G___G_ *

util__AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__struct_util__Quaternion_double_____AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__struct_util__Quaternion_double__o2
          (AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cstruct_util__Quaternion_L_double_G___G_
           *this,AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cstruct_util__Quaternion_L_double_G___G_
                 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  void *pvVar8;
  undefined8 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  uVar11 = *(uint *)(param_1 + 8);
  *(uint *)(this + 8) = uVar11;
  if (((int)uVar11 < 0) || (0x3fffffff < (int)uVar11)) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\assocarray.inl",0x22,
              "Capacity >= 0 && Capacity <= ASSOC_ARRAY_MAX_SIZE",(char *)0x0);
    DebugBreak();
    uVar11 = *(uint *)(this + 8);
  }
  if (0 < (int)uVar11) {
    pvVar8 = (void *)(uintptr_t)(port_op_new(-(uint)((int)((ulonglong)uVar11 * 0x28 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar11 * 0x28)));
    if (pvVar8 == (void *)0x0) {
      pvVar8 = (void *)0x0;
    }
    else if (uVar11 != 0) {
      puVar9 = (undefined8 *)((int)pvVar8 + 0x18);
      do {
        *(undefined4 *)(puVar9 + -3) = 0;
        *(undefined4 *)((int)puVar9 + -0x14) = 0;
        *puVar9 = 0;
        puVar9[1] = 0x3ff0000000000000;
        *(undefined4 *)(puVar9 + -2) = 0;
        *(undefined4 *)((int)puVar9 + -0xc) = 0;
        *(undefined4 *)(puVar9 + -1) = 0;
        *(undefined4 *)((int)puVar9 + -4) = 0;
        uVar11 = uVar11 - 1;
        puVar9 = puVar9 + 5;
      } while (uVar11 != 0);
    }
    *(void **)this = pvVar8;
    uVar11 = *(uint *)(this + 8);
    pvVar8 = (void *)(uintptr_t)(port_op_new(uVar11));
    if (pvVar8 == (void *)0x0) {
      pvVar8 = (void *)0x0;
    }
    else {
      memset(pvVar8,0,uVar11);
    }
    iVar10 = 0;
    *(void **)(this + 4) = pvVar8;
    if (0 < *(int *)(this + 8)) {
      iVar12 = 0;
      do {
        iVar3 = *(int *)param_1;
        iVar12 = iVar12 + 0x28;
        iVar4 = *(int *)this;
        puVar1 = (undefined4 *)(iVar3 + -0x28 + iVar12);
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        puVar2 = (undefined4 *)(iVar4 + -0x28 + iVar12);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        puVar2[2] = uVar6;
        puVar2[3] = uVar7;
        puVar1 = (undefined4 *)(iVar3 + -0x18 + iVar12);
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        puVar2 = (undefined4 *)(iVar4 + -0x18 + iVar12);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        puVar2[2] = uVar6;
        puVar2[3] = uVar7;
        *(undefined8 *)(iVar4 + -8 + iVar12) = *(undefined8 *)(iVar3 + -8 + iVar12);
        *(undefined1 *)(iVar10 + *(int *)(this + 4)) =
             *(undefined1 *)(iVar10 + *(int *)(param_1 + 4));
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(this + 8));
    }
  }
  return this;
}





//==== 0053ae10 AssocArray_util__tuple2_ModulePlacer_const__int__util__Vec3_double___ ====


/* public:  util__AssocArray_L_structutil__tuple2_L_structModulePlacerconst_P_Cint_G__Cstruct_util__Vec3_L_double_G__G___AssocArray_L_structutil__tuple2_L_structModulePlacerconst_P_Cint_G__Cstruct_util__Vec3_L_double_G__G_(int const &) */

AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cstruct_util__Vec3_L_double_G___G_ *

util__AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__struct_util__Vec3_double_____AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__struct_util__Vec3_double
          (AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cstruct_util__Vec3_L_double_G___G_
           *this,int *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  uVar3 = *param_1;
  *(uint *)(this + 8) = uVar3;
  if (((int)uVar3 < 0) || (0x3fffffff < (int)uVar3)) {
    *(undefined4 *)(this + 8) = 0;
  }
  else if (0 < (int)uVar3) {
    pvVar1 = (void *)(uintptr_t)(port_op_new(-(uint)((int)((ulonglong)uVar3 * 0x20 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar3 * 0x20)));
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else if (uVar3 != 0) {
      puVar2 = (undefined8 *)((int)pvVar1 + 0x18);
      do {
        *(undefined4 *)(puVar2 + -3) = 0;
        *(undefined4 *)((int)puVar2 + -0x14) = 0;
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + -2) = 0;
        *(undefined4 *)((int)puVar2 + -0xc) = 0;
        *(undefined4 *)(puVar2 + -1) = 0;
        *(undefined4 *)((int)puVar2 + -4) = 0;
        uVar3 = uVar3 - 1;
        puVar2 = puVar2 + 4;
      } while (uVar3 != 0);
    }
    uVar3 = *(uint *)(this + 8);
    *(void **)this = pvVar1;
    pvVar1 = (void *)(uintptr_t)(port_op_new(uVar3));
    if (pvVar1 == (void *)0x0) {
      *(undefined4 *)(this + 4) = 0;
      return this;
    }
    memset(pvVar1,0,uVar3);
    *(void **)(this + 4) = pvVar1;
    return this;
  }
  return this;
}





//==== 0053aee0 AssocArray_util__tuple2_ModulePlacer_const__int__util__Vec3_double____0053aee0 ====


/* public:  util__AssocArray_L_structutil__tuple2_L_structModulePlacerconst_P_Cint_G__Cstruct_util__Vec3_L_double_G__G___AssocArray_L_structutil__tuple2_L_structModulePlacerconst_P_Cint_G__Cstruct_util__Vec3_L_double_G__G_(class util__AssocArray_L_structutil__tuple2_L_structModulePlacerconst__P_Cint_G__Cstructutil__Vec3_L_double_G__G_ const &) */

AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cstruct_util__Vec3_L_double_G___G_ *

util__AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__struct_util__Vec3_double_____AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__struct_util__Vec3_double__o2
          (AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cstruct_util__Vec3_L_double_G___G_
           *this,AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cstruct_util__Vec3_L_double_G___G_
                 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  void *pvVar8;
  undefined8 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  uVar11 = *(uint *)(param_1 + 8);
  *(uint *)(this + 8) = uVar11;
  if (((int)uVar11 < 0) || (0x3fffffff < (int)uVar11)) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\assocarray.inl",0x22,
              "Capacity >= 0 && Capacity <= ASSOC_ARRAY_MAX_SIZE",(char *)0x0);
    DebugBreak();
    uVar11 = *(uint *)(this + 8);
  }
  if (0 < (int)uVar11) {
    pvVar8 = (void *)(uintptr_t)(port_op_new(-(uint)((int)((ulonglong)uVar11 * 0x20 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar11 * 0x20)));
    if (pvVar8 == (void *)0x0) {
      pvVar8 = (void *)0x0;
    }
    else if (uVar11 != 0) {
      puVar9 = (undefined8 *)((int)pvVar8 + 0x18);
      do {
        *(undefined4 *)(puVar9 + -3) = 0;
        *(undefined4 *)((int)puVar9 + -0x14) = 0;
        *puVar9 = 0;
        *(undefined4 *)(puVar9 + -2) = 0;
        *(undefined4 *)((int)puVar9 + -0xc) = 0;
        *(undefined4 *)(puVar9 + -1) = 0;
        *(undefined4 *)((int)puVar9 + -4) = 0;
        uVar11 = uVar11 - 1;
        puVar9 = puVar9 + 4;
      } while (uVar11 != 0);
    }
    *(void **)this = pvVar8;
    uVar11 = *(uint *)(this + 8);
    pvVar8 = (void *)(uintptr_t)(port_op_new(uVar11));
    if (pvVar8 == (void *)0x0) {
      pvVar8 = (void *)0x0;
    }
    else {
      memset(pvVar8,0,uVar11);
    }
    iVar10 = 0;
    *(void **)(this + 4) = pvVar8;
    if (0 < *(int *)(this + 8)) {
      iVar12 = 0;
      do {
        iVar3 = *(int *)param_1;
        iVar12 = iVar12 + 0x20;
        iVar4 = *(int *)this;
        puVar1 = (undefined4 *)(iVar3 + -0x20 + iVar12);
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        puVar2 = (undefined4 *)(iVar4 + -0x20 + iVar12);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        puVar2[2] = uVar6;
        puVar2[3] = uVar7;
        puVar1 = (undefined4 *)(iVar3 + -0x10 + iVar12);
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        puVar2 = (undefined4 *)(iVar4 + -0x10 + iVar12);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        puVar2[2] = uVar6;
        puVar2[3] = uVar7;
        *(undefined1 *)(iVar10 + *(int *)(this + 4)) =
             *(undefined1 *)(iVar10 + *(int *)(param_1 + 4));
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(this + 8));
    }
  }
  return this;
}





//==== 0053aff0 AssocArray_util__tuple2_ModulePlacer_const__int__util__Darray_util__Vec3_double_____ ====


/* public:  util__AssocArray_L_structutil__tuple2_L_structModulePlacerconst_P_Cint_G__Cclass_util__Darray_L_structutil__Vec3_L_double_G__G__G___AssocArray_L_structutil__tuple2_L_structModulePlacer_const_P_Cint_G__Cclassutil__Darray_L_structutil__Vec3_L_double_G__G__G_(int const &) */

AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cclass_util__Darray_L_struct_util__Vec3_L_double_G___G___G_
* 
util__AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__class_util__Darray_struct_util__Vec3_double_______AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__class_util__Darray_struct_util__Vec3_double
          (AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cclass_util__Darray_L_struct_util__Vec3_L_double_G___G___G_
           *this,int *param_1)

{
  uint *puVar1;
  uint *puVar2;
  void *pvVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  uVar6 = *param_1;
  *(uint *)(this + 8) = uVar6;
  if (((int)uVar6 < 0) || (0x3fffffff < (int)uVar6)) {
    *(undefined4 *)(this + 8) = 0;
  }
  else if (0 < (int)uVar6) {
    uVar4 = -(uint)((int)((ulonglong)uVar6 * 0x18 >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 0x18);
    puVar1 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
    if (puVar1 == (uint *)0x0) {
      puVar5 = (uint *)0x0;
    }
    else {
      *puVar1 = uVar6;
      puVar5 = puVar1 + 1;
      if (uVar6 != 0) {
        puVar2 = puVar1 + 5;
        puVar1 = puVar5;
        do {
          *puVar1 = 0;
          puVar1 = puVar1 + 6;
          puVar2[-3] = 0;
          puVar2[-2] = (uint)&vftable_17;
          puVar2[-1] = 0;
          *puVar2 = 0;
          puVar2[1] = 0;
          uVar6 = uVar6 - 1;
          puVar2 = puVar2 + 6;
        } while (uVar6 != 0);
      }
    }
    uVar6 = *(uint *)(this + 8);
    *(uint **)this = puVar5;
    pvVar3 = (void *)(uintptr_t)(port_op_new(uVar6));
    if (pvVar3 == (void *)0x0) {
      *(undefined4 *)(this + 4) = 0;
      return this;
    }
    memset(pvVar3,0,uVar6);
    *(void **)(this + 4) = pvVar3;
    return this;
  }
  return this;
}





//==== 0053b100 AssocArray_util__tuple2_ModulePlacer_const__int__util__Darray_util__Vec3_double______0053b100 ====


/* public:  util__AssocArray_L_structutil__tuple2_L_structModulePlacerconst_P_Cint_G__Cclass_util__Darray_L_structutil__Vec3_L_double_G__G__G___AssocArray_L_structutil__tuple2_L_structModulePlacer_const_P_Cint_G__Cclassutil__Darray_L_structutil__Vec3_L_double_G__G__G_(class util__AssocArray_L_struct_util__tuple2_L_structModulePlacerconst_P_Cint_G__Cclassutil__Darray_L_structutil__Vec3_L_double_G__G__G_
   const &) */

AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cclass_util__Darray_L_struct_util__Vec3_L_double_G___G___G_
* 
util__AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__class_util__Darray_struct_util__Vec3_double_______AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__class_util__Darray_struct_util__Vec3_double__o2
          (AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cclass_util__Darray_L_struct_util__Vec3_L_double_G___G___G_
           *this,AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cclass_util__Darray_L_struct_util__Vec3_L_double_G___G___G_
                 *param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  void *pvVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  uVar9 = *(uint *)(param_1 + 8);
  *(uint *)(this + 8) = uVar9;
  if (((int)uVar9 < 0) || (0x3fffffff < (int)uVar9)) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\assocarray.inl",0x22,
              "Capacity >= 0 && Capacity <= ASSOC_ARRAY_MAX_SIZE",(char *)0x0);
    DebugBreak();
    uVar9 = *(uint *)(this + 8);
  }
  if ((int)uVar9 < 1) {
    return this;
  }
  uVar5 = -(uint)((int)((ulonglong)uVar9 * 0x18 >> 0x20) != 0) | (uint)((ulonglong)uVar9 * 0x18);
  puVar2 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar5) | uVar5 + 4);
  if (puVar2 == (uint *)0x0) {
    puVar7 = (uint *)0x0;
  }
  else {
    *puVar2 = uVar9;
    puVar7 = puVar2 + 1;
    if (uVar9 != 0) {
      puVar3 = puVar2 + 5;
      puVar2 = puVar7;
      do {
        *puVar2 = 0;
        puVar2 = puVar2 + 6;
        puVar3[-3] = 0;
        puVar3[-2] = (uint)&vftable_17;
        puVar3[-1] = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        uVar9 = uVar9 - 1;
        puVar3 = puVar3 + 6;
      } while (uVar9 != 0);
    }
  }
  uVar9 = *(uint *)(this + 8);
  *(uint **)this = puVar7;
  pvVar4 = (void *)(uintptr_t)(port_op_new(uVar9));
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    memset(pvVar4,0,uVar9);
  }
  *(void **)(this + 4) = pvVar4;
  iVar10 = 0;
  if (0 < *(int *)(this + 8)) {
    iVar8 = 0;
    do {
      puVar6 = (undefined4 *)(*(int *)this + iVar8);
      iVar1 = *(int *)param_1;
      *puVar6 = *(undefined4 *)(iVar1 + iVar8);
      puVar6[1] = *(undefined4 *)(iVar1 + 4 + iVar8);
      Darray_L_struct_util__Vec3_L_double_G___G___op_assign
                ((Darray_L_struct_util__Vec3_L_double_G___G_ *)(puVar6 + 2),
                 (Darray_L_struct_util__Vec3_L_double_G___G_ *)(iVar1 + 8 + iVar8));
      iVar8 = iVar8 + 0x18;
      *(undefined1 *)(iVar10 + *(int *)(this + 4)) = *(undefined1 *)(iVar10 + *(int *)(param_1 + 4))
      ;
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(this + 8));
  }
  return this;
}





//==== 0053b250 Darray_util__Vec3_double____0053b250 ====


/* public:  util__Darray_L_structutil__Vec3_L_double_G__G___Darray_L_structutil__Vec3_L_double_G___G_(class util__Darray_L_structutil__Vec3_L_double_G__G_ const &) */

Darray_L_struct_util__Vec3_L_double_G___G_ * 
util__Darray_struct_util__Vec3_double_____Darray_struct_util__Vec3_double__o2
          (Darray_L_struct_util__Vec3_L_double_G___G_ *this,Darray_L_struct_util__Vec3_L_double_G___G_ *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Darray_L_struct_util__Vec3_L_double_G___G_ *pDVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  pDVar4 = param_1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = (undefined **)(&vftable_17);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  param_1 = (Darray_L_struct_util__Vec3_L_double_G___G_ *)(**(code **)(*(int *)param_1 + 0xc))();
  SetSize(this,(int *)&param_1);
  uVar8 = *(uint *)(this + 0xc);
  puVar5 = (undefined4 *)
           port_op_new(-(uint)((int)((ulonglong)uVar8 * 0x18 >> 0x20) != 0) |
                          (uint)((ulonglong)uVar8 * 0x18));
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else if (uVar8 != 0) {
    puVar6 = (undefined8 *)(puVar5 + 4);
    do {
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + -2) = 0;
      *(undefined4 *)((int)puVar6 + -0xc) = 0;
      *(undefined4 *)(puVar6 + -1) = 0;
      *(undefined4 *)((int)puVar6 + -4) = 0;
      uVar8 = uVar8 - 1;
      puVar6 = puVar6 + 3;
    } while (uVar8 != 0);
  }
  *(undefined4 **)(this + 4) = puVar5;
  puVar7 = *(undefined4 **)(pDVar4 + 4);
  if (puVar7 != puVar7 + *(int *)(pDVar4 + 8) * 6) {
    do {
      uVar1 = puVar7[1];
      uVar2 = puVar7[2];
      uVar3 = puVar7[3];
      *puVar5 = *puVar7;
      puVar5[1] = uVar1;
      puVar5[2] = uVar2;
      puVar5[3] = uVar3;
      puVar6 = (undefined8 *)(puVar7 + 4);
      puVar7 = puVar7 + 6;
      *(undefined8 *)(puVar5 + 4) = *puVar6;
      puVar5 = puVar5 + 6;
    } while (puVar7 != (undefined4 *)(*(int *)(pDVar4 + 4) + *(int *)(pDVar4 + 8) * 0x18));
  }
  return this;
}





//==== 0053b330 Darray_util__tuple2_util__Str_char__double____0053b330 ====


/* public:  util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cdouble_G___G___Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cdouble_G__G_(class util__Darray_L_struct_util__tuple2_L_classutil__Str_L_char_G__Cdouble_G__G_ const &) */

Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ * 
util__Darray_struct_util__tuple2_class_util__Str_char__double_____Darray_struct_util__tuple2_class_util__Str_char__double
          (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ *this,
          Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ *param_1)

{
  Str_L_char_G_ *pSVar1;
  int iVar2;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ *pDVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  Str_L_char_G_ *pSVar7;
  Str_L_char_G_ *this_00;
  
  pDVar3 = param_1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = &vftable_105;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  param_1 = (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ *)
            (**(code **)(*(int *)param_1 + 0xc))();
  SetSize(this,(int *)&param_1);
  uVar6 = *(uint *)(this + 0xc);
  uVar5 = -(uint)((int)((ulonglong)uVar6 * 0x18 >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 0x18);
  puVar4 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar5) | uVar5 + 4);
  if (puVar4 == (uint *)0x0) {
    this_00 = (Str_L_char_G_ *)0x0;
  }
  else {
    *puVar4 = uVar6;
    this_00 = (Str_L_char_G_ *)(puVar4 + 1);
    pSVar7 = this_00;
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      pSVar7->Data = (char *)0x0;
      pSVar7->Capacity = 0;
      pSVar7->Length = 0;
      pSVar7[1].Capacity = 0;
      pSVar7[1].Length = 0;
      pSVar7 = pSVar7 + 2;
    }
  }
  *(Str_L_char_G_ **)(this + 4) = this_00;
  pSVar7 = *(Str_L_char_G_ **)(pDVar3 + 4);
  if (pSVar7 != pSVar7 + *(int *)(pDVar3 + 8) * 2) {
    do {
      util__Maybe_struct_util__ClassMember___operator(this_00,pSVar7);
      pSVar1 = pSVar7 + 1;
      iVar2 = pSVar7[1].Length;
      pSVar7 = pSVar7 + 2;
      this_00[1].Capacity = pSVar1->Capacity;
      this_00[1].Length = iVar2;
      this_00 = this_00 + 2;
    } while (pSVar7 != (Str_L_char_G_ *)(*(int *)(pDVar3 + 4) + *(int *)(pDVar3 + 8) * 0x18));
    return this;
  }
  return this;
}





//==== 0053b440 Darray_PowerUsage_ ====


/* public:  util__Darray_L_structPowerUsage_G___Darray_L_structPowerUsage_G_(int) */

Darray_L_struct_PowerUsage_G_ * 
util__Darray_struct_PowerUsage___Darray_struct_PowerUsage
          (Darray_L_struct_PowerUsage_G_ *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  Str_L_char_G_ *this_00;
  Str_L_char_G_ SStack_1c;
  undefined8 uStack_c;
  
  *(undefined ***)this = &vftable_105;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(int *)(this + 0xc) = param_1;
  if ((param_1 < 0) || (0x3fffffff < param_1)) {
    *(undefined4 *)(this + 0xc) = 0;
  }
  else if (0 < param_1) {
    uVar3 = -(uint)((int)((ulonglong)(uint)param_1 * 0x18 >> 0x20) != 0) |
            (uint)((ulonglong)(uint)param_1 * 0x18);
    piVar1 = (int *)port_op_new(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      *piVar1 = param_1;
      piVar1 = piVar1 + 1;
      piVar2 = piVar1;
      if (param_1 != 0) {
        do {
          *piVar2 = 0;
          piVar2[1] = 0;
          piVar2[2] = 0;
          piVar2[4] = 0;
          piVar2[5] = 0;
          param_1 = param_1 + -1;
          piVar2 = piVar2 + 6;
        } while (param_1 != 0);
      }
    }
    *(int **)(this + 4) = piVar1;
    param_1 = 0;
    if (0 < *(int *)(this + 0xc)) {
      iVar4 = 0;
      do {
        this_00 = (Str_L_char_G_ *)(*(int *)(this + 4) + iVar4);
        SStack_1c.Data = (char *)0x0;
        SStack_1c.Capacity = 0;
        SStack_1c.Length = 0;
        uStack_c = 0;
        util__Maybe_struct_util__ClassMember___operator(this_00,&SStack_1c);
        param_1 = param_1 + 1;
        this_00[1].Capacity = 0;
        this_00[1].Length = 0;
        iVar4 = iVar4 + 0x18;
      } while (param_1 < *(int *)(this + 0xc));
      return this;
    }
  }
  return this;
}





//==== 0053b560 Darray_CrewJob_ ====


/* public:  util__Darray_L_structCrewJob_G___Darray_L_structCrewJob_G_(class util__Darray_L_struct_CrewJob_G_ const &) */

Darray_L_struct_CrewJob_G_ * 
util__Darray_struct_CrewJob___Darray_struct_CrewJob
          (Darray_L_struct_CrewJob_G_ *this,Darray_L_struct_CrewJob_G_ *param_1)

{
  Darray_L_struct_CrewJob_G_ *pDVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  
  pDVar1 = param_1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = &vftable_120;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  param_1 = (Darray_L_struct_CrewJob_G_ *)(**(code **)(*(int *)param_1 + 0xc))();
  SetSize(this,(int *)&param_1);
  uVar5 = *(uint *)(this + 0xc);
  uVar4 = -(uint)((int)((ulonglong)uVar5 * 0x20 >> 0x20) != 0) | (uint)((ulonglong)uVar5 * 0x20);
  puVar2 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
  if (puVar2 == (uint *)0x0) {
    puVar6 = (uint *)0x0;
  }
  else {
    *puVar2 = uVar5;
    puVar6 = puVar2 + 1;
    if (uVar5 != 0) {
      puVar3 = puVar2 + 4;
      puVar2 = puVar6;
      do {
        *puVar2 = 0;
        puVar2 = puVar2 + 8;
        puVar3[-2] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        *(undefined1 *)(puVar3 + 3) = 0;
        uVar5 = uVar5 - 1;
        puVar3 = puVar3 + 8;
      } while (uVar5 != 0);
    }
  }
  *(uint **)(this + 4) = puVar6;
  puVar2 = *(uint **)(pDVar1 + 4);
  if (puVar2 == puVar2 + *(int *)(pDVar1 + 8) * 8) {
    return this;
  }
  puVar6 = puVar6 + 4;
  do {
    puVar6[-4] = *puVar2;
    util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar6 + -3),(Str_L_char_G_ *)(puVar2 + 1));
    *(undefined8 *)puVar6 = *(undefined8 *)(puVar2 + 4);
    puVar3 = puVar2 + 6;
    puVar2 = puVar2 + 8;
    *(char *)(puVar6 + 2) = (char)*puVar3;
    puVar6 = puVar6 + 8;
  } while (puVar2 != (uint *)(*(int *)(pDVar1 + 8) * 0x20 + *(int *)(pDVar1 + 4)));
  return this;
}





//==== 0053b690 Darray_InfoBox_ ====


/* public:  util__Darray_L_structInfoBox_G___Darray_L_structInfoBox_G_(int) */

Darray_L_struct_InfoBox_G_ * 
util__Darray_struct_InfoBox___Darray_struct_InfoBox(Darray_L_struct_InfoBox_G_ *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  Str_L_char_G_ *this_00;
  undefined4 *puVar4;
  int iVar5;
  Str_L_char_G_ SStack_4c;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  Str_L_char_G_ SStack_38;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  Str_L_char_G_ SStack_20;
  Str_L_char_G_ SStack_14;
  Darray_L_struct_InfoBox_G_ *pDStack_8;
  
  *(undefined ***)this = &vftable_127;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(int *)(this + 0xc) = param_1;
  if ((param_1 < 0) || (0x3fffffff < param_1)) {
    *(undefined4 *)(this + 0xc) = 0;
  }
  else if (0 < param_1) {
    uVar2 = -(uint)((int)((ulonglong)(uint)param_1 * 0x38 >> 0x20) != 0) |
            (uint)((ulonglong)(uint)param_1 * 0x38);
    pDStack_8 = this;
    piVar1 = (int *)port_op_new(-(uint)(0xfffffffb < uVar2) | uVar2 + 4);
    if (piVar1 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      *piVar1 = param_1;
      piVar3 = piVar1 + 1;
      if (param_1 != 0) {
        SStack_14.Data = (char *)0x0;
        SStack_14.Capacity = 0;
        SStack_14.Length = 0;
        SStack_20.Data = (char *)0x0;
        SStack_20.Capacity = 0;
        this_00 = (Str_L_char_G_ *)(piVar1 + 4);
        SStack_20.Length = 0;
        piVar1 = piVar3;
        do {
          *piVar1 = 0;
          this_00[-1].Capacity = 0;
          this_00[-1].Length = 0;
          util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(this_00,&SStack_14);
          this_00[1].Data = (char *)0x0;
          this_00[1].Capacity = 0;
          util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const((Str_L_char_G_ *)&this_00[1].Length,&SStack_20);
          this_00[2].Length = 0;
          piVar1 = piVar1 + 0xe;
          this_00[3].Data = (char *)0x0;
          *(undefined1 *)&this_00[3].Capacity = 0;
          this_00 = (Str_L_char_G_ *)&this_00[4].Length;
          param_1 = param_1 + -1;
          this = pDStack_8;
        } while (param_1 != 0);
      }
    }
    iVar5 = 0;
    *(int **)(this + 4) = piVar3;
    if (0 < *(int *)(this + 0xc)) {
      SStack_20.Data = (char *)0x0;
      SStack_20.Capacity = 0;
      SStack_20.Length = 0;
      SStack_14.Data = (char *)0x0;
      SStack_14.Capacity = 0;
      SStack_14.Length = 0;
      param_1 = 0;
      do {
        util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_4c,&SStack_20);
        uStack_40 = 0;
        uStack_3c = 0;
        util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_38,&SStack_14);
        puVar4 = (undefined4 *)(*(int *)(this + 4) + param_1);
        uStack_2c = 0;
        uStack_28 = 0;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        uStack_24 = uStack_24 & 0xffffff00;
        util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar4 + 3),&SStack_4c);
        puVar4[6] = uStack_40;
        puVar4[7] = uStack_3c;
        util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar4 + 8),&SStack_38);
        *(ulonglong *)(puVar4 + 0xb) = CONCAT44(uStack_28,uStack_2c);
        puVar4[0xd] = uStack_24;
        if (SStack_38.Data != (char *)0x0) {
          port_op_delete(SStack_38.Data);
        }
        if (SStack_4c.Data != (char *)0x0) {
          port_op_delete(SStack_4c.Data);
        }
        param_1 = param_1 + 0x38;
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(this + 0xc));
    }
    return this;
  }
  return this;
}





//==== 0053b8b0 Darray_MaterialComposition_ ====


/* public:  util__Darray_L_structMaterialComposition_G___Darray_L_struct_MaterialComposition_G_(class util__Darray_L_structMaterialComposition_G_ const &) */

Darray_L_struct_MaterialComposition_G_ * 
util__Darray_struct_MaterialComposition___Darray_struct_MaterialComposition
          (Darray_L_struct_MaterialComposition_G_ *this,Darray_L_struct_MaterialComposition_G_ *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Darray_L_struct_MaterialComposition_G_ *pDVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  pDVar5 = param_1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = (undefined **)(&vftable_75);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  param_1 = (Darray_L_struct_MaterialComposition_G_ *)(**(code **)(*(int *)param_1 + 0xc))();
  Darray_L_struct_MaterialConstituent_G___SetSize
            ((Darray_L_struct_MaterialConstituent_G_ *)this,(int *)&param_1);
  uVar8 = *(uint *)(this + 0xc);
  puVar6 = (undefined4 *)
           port_op_new(-(uint)((int)((ulonglong)uVar8 * 0x10 >> 0x20) != 0) |
                          (uint)((ulonglong)uVar8 * 0x10));
  puVar7 = puVar6;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = 0;
      *(undefined8 *)(puVar7 + 2) = 0;
      puVar7 = puVar7 + 4;
    }
  }
  *(undefined4 **)(this + 4) = puVar6;
  puVar7 = *(undefined4 **)(pDVar5 + 4);
  if (puVar7 != puVar7 + *(int *)(pDVar5 + 8) * 4) {
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
    } while (puVar7 != (undefined4 *)(*(int *)(pDVar5 + 8) * 0x10 + *(int *)(pDVar5 + 4)));
  }
  return this;
}





//==== 0053b980 Darray_MaterialConstituent_ ====


/* public:  util__Darray_L_structMaterialConstituent_G___Darray_L_struct_MaterialConstituent_G_(class util__Darray_L_structMaterialConstituent_G_ const &) */

Darray_L_struct_MaterialConstituent_G_ * 
util__Darray_struct_MaterialConstituent___Darray_struct_MaterialConstituent
          (Darray_L_struct_MaterialConstituent_G_ *this,Darray_L_struct_MaterialConstituent_G_ *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Darray_L_struct_MaterialConstituent_G_ *pDVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  pDVar5 = param_1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = (undefined **)(&vftable_15);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  param_1 = (Darray_L_struct_MaterialConstituent_G_ *)(**(code **)(*(int *)param_1 + 0xc))();
  SetSize(this,(int *)&param_1);
  uVar8 = *(uint *)(this + 0xc);
  puVar6 = (undefined4 *)
           port_op_new(-(uint)((int)((ulonglong)uVar8 * 0x10 >> 0x20) != 0) |
                          (uint)((ulonglong)uVar8 * 0x10));
  puVar7 = puVar6;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = 0;
      *(undefined8 *)(puVar7 + 2) = 0;
      puVar7 = puVar7 + 4;
    }
  }
  *(undefined4 **)(this + 4) = puVar6;
  puVar7 = *(undefined4 **)(pDVar5 + 4);
  if (puVar7 != puVar7 + *(int *)(pDVar5 + 8) * 4) {
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
    } while (puVar7 != (undefined4 *)(*(int *)(pDVar5 + 8) * 0x10 + *(int *)(pDVar5 + 4)));
  }
  return this;
}





//==== 0053ba50 Darray_MomentOfInertia__Particle_ ====


/* public:  util__Darray_L_structMomentOfInertia__Particle_G___Darray_L_struct_MomentOfInertia__Particle_G_(int) */

Darray_L_struct_MomentOfInertia__Particle_G_ * 
util__Darray_struct_MomentOfInertia__Particle___Darray_struct_MomentOfInertia__Particle
          (Darray_L_struct_MomentOfInertia__Particle_G_ *this,int param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  *(undefined ***)this = &vftable_115;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(int *)(this + 0xc) = param_1;
  if ((param_1 < 0) || (0x3fffffff < param_1)) {
    *(undefined4 *)(this + 0xc) = 0;
  }
  else if (0 < param_1) {
    pvVar2 = (void *)(uintptr_t)(port_op_new(-(uint)((int)((ulonglong)(uint)param_1 * 0x20 >> 0x20) != 0) |
                            (uint)((ulonglong)(uint)param_1 * 0x20)));
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else if (param_1 != 0) {
      puVar3 = (undefined4 *)((int)pvVar2 + 0x10);
      do {
        puVar3[-4] = 0;
        puVar3[-3] = 0;
        puVar3[-2] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        param_1 = param_1 + -1;
        puVar3 = puVar3 + 8;
      } while (param_1 != 0);
    }
    iVar5 = 0;
    *(void **)(this + 4) = pvVar2;
    if (0 < *(int *)(this + 0xc)) {
      iVar4 = 0;
      do {
        iVar1 = *(int *)(this + 4);
        iVar4 = iVar4 + 0x20;
        iVar5 = iVar5 + 1;
        puVar3 = (undefined4 *)(iVar1 + -0x20 + iVar4);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3 = (undefined4 *)(iVar1 + -0x10 + iVar4);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
      } while (iVar5 < *(int *)(this + 0xc));
      return this;
    }
  }
  return this;
}





//==== 0053bb10 Maybe_util__Darray_util__Line2_double_____ ====


/* public:  util__Maybe_L_classutil__Darray_L_structutil__Line2_L_double_G__G__G___Maybe_L_class_util__Darray_L_structutil__Line2_L_double_G__G__G_(class util__Darray_L_structutil__Line2_L_double_G__G_ const
   &) */

Maybe_L_class_util__Darray_L_struct_util__Line2_L_double_G___G___G_ * 
util__Maybe_class_util__Darray_struct_util__Line2_double_______Maybe_class_util__Darray_struct_util__Line2_double
          (Maybe_L_class_util__Darray_L_struct_util__Line2_L_double_G___G___G_ *this,
          Darray_L_struct_util__Line2_L_double_G___G_ *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Darray_L_struct_util__Line2_L_double_G___G_ *pDVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  pDVar5 = param_1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = (undefined **)(&vftable_13);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  param_1 = (Darray_L_struct_util__Line2_L_double_G___G_ *)(**(code **)(*(int *)param_1 + 0xc))();
  Darray_L_struct_util__Line2_L_double_G___G___SetSize
            ((Darray_L_struct_util__Line2_L_double_G___G_ *)this,(int *)&param_1);
  uVar8 = *(uint *)(this + 0xc);
  puVar6 = (undefined4 *)
           port_op_new(-(uint)((int)((ulonglong)uVar8 * 0x20 >> 0x20) != 0) |
                          (uint)((ulonglong)uVar8 * 0x20));
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else if (uVar8 != 0) {
    puVar7 = puVar6 + 2;
    do {
      puVar7[-2] = 0;
      puVar7[-1] = 0;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[4] = 0;
      puVar7[5] = 0;
      uVar8 = uVar8 - 1;
      puVar7 = puVar7 + 8;
    } while (uVar8 != 0);
  }
  *(undefined4 **)(this + 4) = puVar6;
  puVar7 = *(undefined4 **)(pDVar5 + 4);
  if (puVar7 != puVar7 + *(int *)(pDVar5 + 8) * 8) {
    do {
      uVar2 = puVar7[1];
      uVar3 = puVar7[2];
      uVar4 = puVar7[3];
      *puVar6 = *puVar7;
      puVar6[1] = uVar2;
      puVar6[2] = uVar3;
      puVar6[3] = uVar4;
      puVar1 = puVar7 + 4;
      uVar2 = puVar7[5];
      uVar3 = puVar7[6];
      uVar4 = puVar7[7];
      puVar7 = puVar7 + 8;
      puVar6[4] = *puVar1;
      puVar6[5] = uVar2;
      puVar6[6] = uVar3;
      puVar6[7] = uVar4;
      puVar6 = puVar6 + 8;
    } while (puVar7 != (undefined4 *)(*(int *)(pDVar5 + 8) * 0x20 + *(int *)(pDVar5 + 4)));
  }
  *(char *)&(this[0x10]) = 0x1;
  return this;
}





//==== 0053bbe0 CraftBlueprint ====

/* public: __thiscall CraftBlueprint__CraftBlueprint(void) */

CraftBlueprint * __thiscall CraftBlueprint__CraftBlueprint(CraftBlueprint *this)

{
  CraftBlueprint *local_8;
  
  local_8 = this;
  EditorReflectable__EditorReflectable((EditorReflectable *)this);
  this->_pad_0x0_0 = (int)&vftable_122;
  (this->MaterialClass__Armor).ArmorLayers.Data = (ArmorLayerBlueprint *)&vftable_121;
  (this->MaterialClass__Armor).ArmorLayers.Size = 0;
  (this->MaterialClass__Armor).ArmorLayers.Capacity = 0;
  (this->MaterialClass__Armor).CraftBlueprintArmorMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 = 0;
  CraftBlueprintArmor__CraftBlueprintArmor
            ((CraftBlueprintArmor *)
             &(this->MaterialClass__Armor).CraftBlueprintArmorMemoizationHandlerInstance.ResetFunctions.Size);
  (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data = (Module **)0x0;
  (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Size = 0;
  (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity = 0;
  *(undefined4 *)&(this->GetAllModulesNeedingCooling_MemoizedValue).IsValidData = 0;
  (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data =
       (Module **)&vftable_2;
  (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Size = 0;
  (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity = 0;
  *(undefined4 *)&(this->GetAllModulesNeedingCooling_MemoizedValue).IsValidData = 0;
  (this->GetMainEngineModulePlacers_MemoizedValue).Data._pad_0x0_0 = 0;
  (this->GetMainEngineModulePlacers_MemoizedValue).Data.Data = (ModulePlacer **)0x0;
  (this->GetMainEngineModulePlacers_MemoizedValue).Data.Size = 0;
  (this->GetMainEngineModulePlacers_MemoizedValue).Data.Capacity = 0;
  *(undefined4 *)&(this->GetMainEngineModulePlacers_MemoizedValue).IsValidData = 0;
  *(undefined1 *)&(this->GetMainEngineModules_MemoizedValue).Data._pad_0x0_0 = 0;
  *(undefined2 *)&(this->GetMainEngineModules_MemoizedValue).Data.Data = 0;
  (this->GetMainEngineModules_MemoizedValue).Data.Capacity = 0;
  *(undefined4 *)&(this->GetMainEngineModules_MemoizedValue).IsValidData = 0;
  (this->GetPowerableMainEngineModules_MemoizedValue).Data._pad_0x0_0 = 0;
  (this->GetPowerableMainEngineModules_MemoizedValue).Data.Data = (EngineModule **)0x0;
  (this->GetPowerableMainEngineModules_MemoizedValue).Data.Size = 0;
  (this->GetPowerableMainEngineModules_MemoizedValue).Data.Capacity = 0;
  (this->GetPowerableMainEngineModules_MemoizedValue).IsValidData = false;
  (this->GetAllMainEnginePropellantsUsed_MemoizedValue).Data.Data = (Material **)0x0;
  (this->GetAllMainEnginePropellantsUsed_MemoizedValue).Data.Size = 0;
  (this->GetAllMainEnginePropellantsUsed_MemoizedValue).Data.Capacity = 0;
  *(undefined4 *)&(this->GetAllMainEnginePropellantsUsed_MemoizedValue).IsValidData = 0;
  (this->GetUsableReactionMassTypes_MemoizedValue).Data._pad_0x0_0 = 0;
  (this->GetUsableReactionMassTypes_MemoizedValue).Data.Data = (Material **)0x0;
  *(undefined1 *)&(this->GetUsableReactionMassTypes_MemoizedValue).Data.Size = 0;
  *(undefined4 *)&(this->GetUsableReactionMassTypes_MemoizedValue).IsValidData = 0;
  *(undefined4 *)&this->GetUnstagedDryMass_kg_MemoizedValue = 0;
  *(undefined4 *)&(this->GetUnstagedDryMass_kg_MemoizedValue).Data = 0;
  *(undefined4 *)((int)&(this->GetUnstagedDryMass_kg_MemoizedValue).Data + 4) = 0;
  *(undefined8 *)&(this->GetUnstagedDryMass_kg_MemoizedValue).IsValidData = 0;
  *(undefined1 *)&(this->GetStagingDryMass_kg_MemoizedValue).Data = 0;
  (this->GetStagingDryMass_kg_MemoizedValue).IsValidData = cde_ptr_as_double((void *)vftable_2);
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetStagingDryMass_kg_MemoizedValue)) + 0xc)) = 0;
  *(undefined4 *)&(this->GetUnstagedReactionMass_kg_MemoizedValue).Data = 0;
  *(undefined4 *)((int)&(this->GetUnstagedReactionMass_kg_MemoizedValue).Data + 4) = 0;
  (this->GetUnstagedReactionMass_kg_MemoizedValue).IsValidData = false;
  *(undefined4 *)&(this->GetUnstagedReactionMass_kg_MemoizedValue).field_0xc = (undefined4)(uintptr_t)vftable_2;
  *(undefined4 *)&(this->GetStagingReactionMass_kg_MemoizedValue).Data = 0;
  *(undefined4 *)((int)&(this->GetStagingReactionMass_kg_MemoizedValue).Data + 4) = 0;
  *(undefined4 *)&(this->GetStagingReactionMass_kg_MemoizedValue).IsValidData = 0;
  *(undefined4 *)&(this->GetStagingReactionMass_kg_MemoizedValue).field_0xc = 0;
  (this->GetUnstagedWetMass_kg_MemoizedValue).Data = cde_ptr_as_double((void *)vftable_6);
  *(undefined4 *)((int)&(this->GetUnstagedWetMass_kg_MemoizedValue).Data + 4) = 0;
  *(undefined4 *)&(this->GetUnstagedWetMass_kg_MemoizedValue).IsValidData = 0;
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetUnstagedWetMass_kg_MemoizedValue)) + 0xc)) = 0;
  *(undefined1 *)&(this->GetStagingWetMass_kg_MemoizedValue).Data = 0;
  *(undefined ***)((int)&(this->GetStagingWetMass_kg_MemoizedValue).Data + 4) = (undefined **)(&vftable_2);
  *(undefined4 *)&(this->GetStagingWetMass_kg_MemoizedValue).IsValidData = 0;
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetStagingWetMass_kg_MemoizedValue)) + 0xc)) = 0;
  *(undefined4 *)&(this->GetTotalCost_c_MemoizedValue).Data = (undefined4)(uintptr_t) (undefined **)(0);
  *(undefined1 *)((int)&(this->GetTotalCost_c_MemoizedValue).Data + 4) = 0;
  (this->GetTotalCost_c_MemoizedValue).IsValidData = cde_ptr_as_double((void *)vftable_2);
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetTotalCost_c_MemoizedValue)) + 0xc)) = 0;
  *(undefined4 *)&(this->GetTotalPowerGeneration_W_MemoizedValue).Data = 0;
  *(undefined4 *)((int)&(this->GetTotalPowerGeneration_W_MemoizedValue).Data + 4) = 0;
  (this->GetTotalPowerGeneration_W_MemoizedValue).IsValidData = false;
  *(undefined4 *)&(this->GetTotalPowerGeneration_W_MemoizedValue).field_0xc = (undefined4)(uintptr_t)vftable_2;
  *(undefined4 *)&(this->GetMaxPowerUsage_W_MemoizedValue).Data = 0;
  *(undefined4 *)((int)&(this->GetMaxPowerUsage_W_MemoizedValue).Data + 4) = 0;
  *(undefined4 *)&(this->GetMaxPowerUsage_W_MemoizedValue).IsValidData = 0;
  *(undefined4 *)&(this->GetMaxPowerUsage_W_MemoizedValue).field_0xc = 0;
  (this->GetCrewRequired_MemoizedValue).Data.Jobs._pad_0x0_0 =
       (int)&vftable_2;
  (this->GetCrewRequired_MemoizedValue).Data.Jobs.Data = (CrewJob *)0x0;
  (this->GetCrewRequired_MemoizedValue).Data.Jobs.Size = 0;
  (this->GetCrewRequired_MemoizedValue).Data.Jobs.Capacity = 0;
  (this->GetCrewRequired_MemoizedValue).IsValidData = false;
  (this->GetTotalCrewRequired_MemoizedValue).Data =
       (int)&vftable_2;
  *(undefined4 *)&(this->GetTotalCrewRequired_MemoizedValue).IsValidData = 0;
  (this->GetTotalCrewSupplied_MemoizedValue).Data = (int)(uintptr_t) (undefined **)(0);
  *(undefined4 *)&(this->GetTotalCrewSupplied_MemoizedValue).IsValidData = 0;
  *(undefined4 *)&(this->GetCenterOfMass_km_MemoizedValue) = 0;
  (this->GetCenterOfMass_km_MemoizedValue).Data.X = 0.0;
  *(undefined1 *)&(this->GetCenterOfMass_km_MemoizedValue).Data.Y = 0;
  (this->GetCenterOfMass_km_MemoizedValue).Data.Z = 0.0;
  (this->GetCenterOfMass_km_MemoizedValue).IsValidData = false;
  (this->GetRadius_km_MemoizedValue).Data = 0.0;
  (this->GetRadius_km_MemoizedValue).IsValidData = false;
  (this->GetLength_m_MemoizedValue).Data = 0.0;
  (this->GetLength_m_MemoizedValue).IsValidData = false;
  (this->GetBoundingCylinder_m_MemoizedValue).Data.Radius = 0.0;
  *(undefined1 *)&(this->GetBoundingCylinder_m_MemoizedValue).Data.Height = 0;
  *(undefined8 *)&(this->GetBoundingCylinder_m_MemoizedValue).IsValidData = 0;
  *(undefined1 *)&(this->GetCrossSection_m2_MemoizedValue).Data = 0;
  *(undefined8 *)&(this->GetCrossSection_m2_MemoizedValue).IsValidData = 0;
  *(undefined1 *)&(this->GetApproximateComposition_MemoizedValue).Data = 0;
  (this->GetComposition_MemoizedValue).Data._pad_0x0_0 = 0;
  (this->GetComposition_MemoizedValue).Data.Data = (MaterialComposition *)0x0;
  *(undefined1 *)&(this->GetComposition_MemoizedValue).Data.Size = 0;
  *(undefined8 *)&(this->GetComposition_MemoizedValue).IsValidData = 0;
  *(undefined1 *)&(this->GetAmmoExplosion_MemoizedValue).Data.GasComposition._pad_0x0_0 = 0;
  (this->GetAmmoExplosion_MemoizedValue).Data.GasComposition.Size = 0;
  (this->GetAmmoExplosion_MemoizedValue).Data.GasComposition.Capacity = 0;
  *(undefined4 *)&(this->GetAmmoExplosion_MemoizedValue).Data.Mass_kg = 0;
  *(undefined4 *)((int)&(this->GetAmmoExplosion_MemoizedValue).Data.Mass_kg + 4) = 0;
  (this->GetAmmoExplosion_MemoizedValue).Data.GasComposition.Size =
       (int)&vftable_120;
  (this->GetAmmoExplosion_MemoizedValue).Data.GasComposition.Capacity = 0;
  *(undefined4 *)&(this->GetAmmoExplosion_MemoizedValue).Data.Mass_kg = 0;
  *(undefined4 *)((int)&(this->GetAmmoExplosion_MemoizedValue).Data.Mass_kg + 4) = 0;
  *(undefined1 *)&(this->GetAmmoExplosion_MemoizedValue).Data.Temperature_K = 0;
  *(undefined4 *)((int)&(this->GetAmmoExplosion_MemoizedValue).Data.Temperature_K + 4) = 0;
  (this->GetAmmoExplosion_MemoizedValue).IsValidData = false;
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetAmmoExplosion_MemoizedValue)) + 0x24)) = 0;
  *(undefined1 *)(this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data = 0;
  *(undefined4 *)((this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 1) = 0;
  *(undefined4 *)((int)(this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0xc) = 0;
  *(undefined4 *)((this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 2) = 0;
  *(undefined4 *)((int)(this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x14) = 0;
  (this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data[3] = 0.0;
  *(undefined1 *)((this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 4) = 0;
  (this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data[5] = 0.0;
  *(undefined1 *)((this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 6) = 0;
  (this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data[7] = 0.0;
  *(undefined1 *)((this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 8) = 0;
  *(undefined4 *)&(this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).IsValidData = 0;
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue)) + 0x4c)) = 0;
  *(undefined4 *)(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data = 0;
  *(undefined4 *)((int)(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 4) =
       0;
  *(undefined1 *)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 1) = 0;
  (this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data[2] = 0.0;
  *(undefined1 *)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 3) = 0;
  *(undefined4 *)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 4) = 0;
  *(undefined1 *)((int)(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x24)
       = 0;
  *(undefined ***)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 5) = (undefined **)(&vftable_75);
  *(undefined4 *)((int)(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x2c)
       = 0;
  *(undefined4 *)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 6) = 0;
  *(undefined4 *)((int)(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x34)
       = 0;
  *(undefined1 *)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 7) = 0;
  *(undefined ***)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 8) = (undefined **)(&vftable_15);
  *(undefined4 *)((int)(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x44)
       = 0;
  *(undefined4 *)&(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).IsValidData = 0;
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue)) + 0x4c)) = 0;
  *(undefined4 *)&(this->GetEstimatedTurnTorque_N_m_MemoizedValue).Data = 0;
  *(undefined4 *)((int)&(this->GetEstimatedTurnTorque_N_m_MemoizedValue).Data + 4) = 0;
  *(undefined4 *)&(this->GetEstimatedTurnTorque_N_m_MemoizedValue).IsValidData = 0;
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetEstimatedTurnTorque_N_m_MemoizedValue)) + 0xc)) = 0;
  *(undefined1 *)&(this->GetEstimatedRollTorque_N_m_MemoizedValue).Data = 0;
  *(undefined8 *)&(this->GetEstimatedRollTorque_N_m_MemoizedValue).IsValidData = 0x3ff0000000000000;
  *(undefined4 *)&(this->GetHalfRotationTurnTime_s_MemoizedValue).Data = 0;
  *(undefined4 *)((int)&(this->GetHalfRotationTurnTime_s_MemoizedValue).Data + 4) = 0;
  *(undefined4 *)&(this->GetHalfRotationTurnTime_s_MemoizedValue).IsValidData = 0;
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetHalfRotationTurnTime_s_MemoizedValue)) + 0xc)) = 0;
  local_8 = (CraftBlueprint *)0x0;
  (this->GetHalfRotationRollTime_s_MemoizedValue).Data = 0.0;
  *(undefined8 *)&(this->GetHalfRotationRollTime_s_MemoizedValue).IsValidData = 0x3ff0000000000000;
  (this->CanTurn_MemoizedValue).Data = false;
  (this->CanTurn_MemoizedValue).IsValidData = false;
  (this->CanRoll_MemoizedValue).Data = false;
  (this->CanRoll_MemoizedValue).IsValidData = false;
  (this->GetModuleLocationHeights_m_MemoizedValue).Data.Data =
       (tuple2_L_ModulePlacer_const__P_Cdouble_G_ *)0x0;
  (this->GetModuleLocationHeights_m_MemoizedValue).Data.DataInUse = (bool *)0x0;
  (this->GetModuleLocationHeights_m_MemoizedValue).Data.Capacity = 0;
  *(undefined8 *)&(this->GetModuleLocationHeights_m_MemoizedValue).IsValidData = 0;
  (this->GetAllCompartmentBoundaryPoints_km_MemoizedValue).Data.DataInUse = (bool *)0x0;
  (this->GetAllCompartmentBoundaryPoints_km_MemoizedValue).Data.Capacity = 0x3ff00000;
  (this->GetAllCompartmentBoundaryPoints_km_MemoizedValue).IsValidData = false;
  (this->GetAllCompartmentOffsets_m_MemoizedValue).Data.DataInUse = (bool *)0x0;
  (this->GetAllCompartmentOffsets_m_MemoizedValue).Data.Capacity = 0x3ff00000;
  *(undefined4 *)&(this->GetAllCompartmentOffsets_m_MemoizedValue).IsValidData = 0;
  (this->GetAllCompartmentOrientations_MemoizedValue).Data.Data =
       (tuple2_L_util__tuple2_L_ModulePlacer_const__P_Cint_G__Cutil__Quaternion_L_double_G___G_ *)0x0;
  (this->GetAllCompartmentOrientations_MemoizedValue).Data.DataInUse = (bool *)0x0;
  (this->GetAllCompartmentOrientations_MemoizedValue).Data.Capacity = 0;
  *(undefined8 *)&(this->GetAllCompartmentOrientations_MemoizedValue).IsValidData = 0;
  (this->GetCoreModuleSpline_m_MemoizedValue).Data.Data = (Vec2_L_double_G_ *)0x0;
  (this->GetCoreModuleSpline_m_MemoizedValue).Data.Size = 0x3ff00000;
  (this->GetCoreModuleSpline_m_MemoizedValue).Data.Capacity = 0;
  *(undefined4 *)&(this->GetCoreModuleSpline_m_MemoizedValue).IsValidData = 0;
  (this->GetCoreAndEndModuleSpline_m_MemoizedValue).Data._pad_0x0_0 = 0;
  (this->GetCoreAndEndModuleSpline_m_MemoizedValue).Data.Data = (Vec2_L_double_G_ *)0x0;
  (this->GetCoreAndEndModuleSpline_m_MemoizedValue).Data.Size = 0;
  (this->GetCoreAndEndModuleSpline_m_MemoizedValue).Data.Capacity = 0;
  *(undefined8 *)&((this->GetCoreAndEndModuleSpline_m_MemoizedValue).IsValidData) = 0x3ff0000000000000
  ;
  *(undefined1 *)&(this->GetModuleSpline_m_MemoizedValue).Data.Data = 0;
  *(undefined8 *)&(this->GetModuleSpline_m_MemoizedValue).Data.Capacity = 0;
  *(undefined1 *)&(this->GetCoreModuleSegments_m_MemoizedValue).Data._pad_0x0_0 = 0;
  (this->GetCoreModuleSegments_m_MemoizedValue).Data.Size = 0;
  (this->GetCoreModuleSegments_m_MemoizedValue).Data.Capacity = 0;
  (this->GetCoreModuleSegments_m_MemoizedValue).IsValidData = false;
  (this->GetCoreAndEndModuleSegments_m_MemoizedValue).Data.Data = (Line2_L_double_G_ *)0x0;
  (this->GetCoreAndEndModuleSegments_m_MemoizedValue).Data.Size = 0;
  *(undefined1 *)&(this->GetCoreAndEndModuleSegments_m_MemoizedValue).Data.Capacity = 0;
  (this->GetModuleSegments_m_MemoizedValue).Data._pad_0x0_0 = 0;
  (this->GetModuleSegments_m_MemoizedValue).Data.Data = (Line2_L_double_G_ *)0x0;
  *(undefined1 *)&(this->GetModuleSegments_m_MemoizedValue).Data.Size = 0;
  *(undefined4 *)&(this->GetModuleSegments_m_MemoizedValue).IsValidData = 0;
  util__AssocArray_L_ModulePlacer_const_P_Cdouble_G___AssocArray_L_ModulePlacer_const_P_Cdouble_G_
            ((AssocArray_L_ModulePlacer_const_P_Cdouble_G_ *)
             &this->GetRadiationAtAllModules_Sv__JY_MemoizedValue,(int *)&local_8);
  (this->GetRadiationAtAllModules_Sv__JY_MemoizedValue).IsValidData = false;
  local_8 = (CraftBlueprint *)0x0;
  util__AssocArray_L_util__tuple2_L_ModulePlacer_const_P_Cint_G__Cutil__Darray_L_util__Vec3_L_double_G___G___G___AssocArray_L_util__tuple2_L_ModulePlacer_const_P_Cint_G__Cutil__Darray_L_util__Vec3_L_double_G___G___G_
            ((AssocArray_L_util__tuple2_L_ModulePlacer_const_P_Cint_G__Cutil__Darray_L_util__Vec3_L_double_G___G___G_ *
             )&this->GetAllCompartmentIntersections_MemoizedValue,(int *)&local_8);
  (this->GetAllCompartmentIntersections_MemoizedValue).IsValidData = false;
  local_8 = (CraftBlueprint *)0x0;
  util__AssocArray_L_util__tuple2_L_ModulePlacer_const_P_Cint_G__Cutil__Vec3_L_double_G___G___AssocArray_L_util__tuple2_L_ModulePlacer_const_P_Cint_G__Cutil__Vec3_L_double_G___G_
            ((AssocArray_L_util__tuple2_L_ModulePlacer_const_P_Cint_G__Cutil__Vec3_L_double_G___G_ *)
             &this->GetAllCompartmentSelfIntersections_MemoizedValue,(int *)&local_8);
  (this->GetAllCompartmentSelfIntersections_MemoizedValue).IsValidData = false;
  local_8 = (CraftBlueprint *)0x0;
  util__AssocArray_L_util__tuple2_L_ModulePlacer_const_P_Cint_G__Cutil__Quaternion_L_double_G___G___AssocArray_L_util__tuple2_L_ModulePlacer_const_P_Cint_G__Cutil__Quaternion_L_double_G___G_
            ((AssocArray_L_util__tuple2_L_ModulePlacer_const_P_Cint_G__Cutil__Quaternion_L_double_G___G_ *)
             &this->GetAllCompartmentOperationals_MemoizedValue,(int *)&local_8);
  (this->GetAllCompartmentOperationals_MemoizedValue).IsValidData = false;
  (this->GetAllRadiatorUnworkableInterreflections_MemoizedValue).Data.Data =
       (tuple2_L_ModulePlacer_const__P_Cbool_G_ *)&vftable_14;
  (this->GetAllRadiatorUnworkableInterreflections_MemoizedValue).Data.DataInUse = (bool *)0x0;
  (this->GetAllRadiatorUnworkableInterreflections_MemoizedValue).Data.Capacity = 0;
  *(undefined4 *)&(this->GetAllRadiatorUnworkableInterreflections_MemoizedValue).IsValidData = 0;
  (this->IsAFlare_MemoizedValue).Data = false;
  *(undefined ***)&this->IsThrustingCraft_MemoizedValue = (undefined **)(&vftable_14);
  (this->GetCrewReportString_MemoizedValue).Data.Data = (char *)0x0;
  (this->GetCrewReportString_MemoizedValue).Data.Capacity = 0;
  (this->GetCrewReportString_MemoizedValue).Data.Length = 0;
  (this->GetCrewReportString_MemoizedValue).IsValidData = false;
  *(undefined ***)&this->IsOperational_MemoizedValue = (undefined **)(&vftable_14);
  (this->GetMassCondensedChartData_MemoizedValue).Data._pad_0x0_0 = 0;
  (this->GetMassCondensedChartData_MemoizedValue).Data.Data = (tuple2_L_util__Str_L_char_G__Cdouble_G_ *)0x0;
  (this->GetMassCondensedChartData_MemoizedValue).Data.Size = 0;
  *(undefined1 *)&(this->GetMassCondensedChartData_MemoizedValue).Data.Capacity = 0;
  (this->GetMassCondensedChartData_MemoizedValue).IsValidData = cde_ptr_as_double((void *)vftable_14);
  (this->GetMassChartData_MemoizedValue).Data._pad_0x0_0 = 0;
  (this->GetMassChartData_MemoizedValue).Data.Data = (tuple2_L_util__Str_L_char_G__Cdouble_G_ *)0x0;
  (this->GetMassChartData_MemoizedValue).Data.Size = 0;
  *(undefined1 *)&(this->GetMassChartData_MemoizedValue).Data.Capacity = 0;
  (this->GetMassChartData_MemoizedValue).IsValidData = cde_ptr_as_double((void *)vftable_13);
  (this->GetCostChartData_MemoizedValue).Data._pad_0x0_0 = 0;
  (this->GetCostChartData_MemoizedValue).Data.Data = (tuple2_L_util__Str_L_char_G__Cdouble_G_ *)0x0;
  (this->GetCostChartData_MemoizedValue).Data.Size = 0;
  *(undefined1 *)&(this->GetCostChartData_MemoizedValue).Data.Capacity = 0;
  (this->GetCostChartData_MemoizedValue).IsValidData = cde_ptr_as_double((void *)vftable_13);
  (this->GetPowerUseChartData_MemoizedValue).Data._pad_0x0_0 = 0;
  (this->GetPowerUseChartData_MemoizedValue).Data.Data = (tuple2_L_util__Str_L_char_G__Cdouble_G_ *)0x0;
  (this->GetPowerUseChartData_MemoizedValue).Data.Size = 0;
  *(undefined1 *)&(this->GetPowerUseChartData_MemoizedValue).Data.Capacity = 0;
  local_8 = (CraftBlueprint *)0x0;
  util__AssocArray_L_ModulePlacer_const_P_Cdouble_G___AssocArray_L_ModulePlacer_const_P_Cdouble_G_
            ((AssocArray_L_ModulePlacer_const_P_Cdouble_G_ *)
             &(this->GetPowerUseChartData_MemoizedValue).IsValidData,(int *)&local_8);
  *(undefined1 *)&(this->GetStackedPowerUseChartData_MemoizedValue).Data.Size = 0;
  local_8 = (CraftBlueprint *)0x0;
  util__AssocArray_L_ModulePlacer_const_P_Cbool_G___AssocArray_L_ModulePlacer_const_P_Cbool_G_
            ((AssocArray_L_ModulePlacer_const_P_Cbool_G_ *)
             &(this->GetStackedPowerUseChartData_MemoizedValue).Data.Capacity,(int *)&local_8);
  *(undefined1 *)&this[1]._pad_0x0_0 = 0;
  local_8 = (CraftBlueprint *)0x0;
  util__AssocArray_L_ModulePlacer_const_P_Cbool_G___AssocArray_L_ModulePlacer_const_P_Cbool_G_
            ((AssocArray_L_ModulePlacer_const_P_Cbool_G_ *)&this[1]._pad_0x4_1,(int *)&local_8);
  *(undefined1 *)&this[1].Modules._pad_0x0_0 = 0;
  local_8 = (CraftBlueprint *)0x0;
  util__AssocArray_L_ModulePlacer_const_P_Cbool_G___AssocArray_L_ModulePlacer_const_P_Cbool_G_
            ((AssocArray_L_ModulePlacer_const_P_Cbool_G_ *)&this[1].Modules.Data,(int *)&local_8);
  *(undefined1 *)&this[1].MaterialClass__Armor._pad_0x0_0 = 0;
  local_8 = (CraftBlueprint *)0x0;
  util__AssocArray_L_ModulePlacer_const_P_Cbool_G___AssocArray_L_ModulePlacer_const_P_Cbool_G_
            ((AssocArray_L_ModulePlacer_const_P_Cbool_G_ *)&this[1].MaterialClass__Armor._pad_0x4_1,(int *)&local_8);
  *(undefined1 *)&this[1].MaterialClass__Armor.ArmorLayers._pad_0x0_0 = 0;
  this[1].MaterialClass__Armor.ArmorLayers.Data = (ArmorLayerBlueprint *)0x0;
  this[1].MaterialClass__Armor.ArmorLayers.Size = 0;
  this[1].MaterialClass__Armor.ArmorLayers.Capacity = 0;
  this[1].MaterialClass__Armor.CraftBlueprintArmorMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 = 0;
  this[1].MaterialClass__Armor.CraftBlueprintArmorMemoizationHandlerInstance.ResetFunctions.Data =
       (pmf_b3976c2d *)0x0;
  *(undefined1 *)&this[1].MaterialClass__Armor.CraftBlueprintArmorMemoizationHandlerInstance.ResetFunctions.Size =
       0;
  this[1].MaterialClass__Armor.CraftBlueprintArmorMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
  this[1].MaterialClass__Armor.GetOuterArmorSpline_m_MemoizedValue.Data._pad_0x0_0 =
       (int)&vftable_105;
  this[1].MaterialClass__Armor.GetOuterArmorSpline_m_MemoizedValue.Data.Data = (Vec2_L_double_G_ *)0x0;
  this[1].MaterialClass__Armor.GetOuterArmorSpline_m_MemoizedValue.Data.Size = 0;
  this[1].MaterialClass__Armor.GetOuterArmorSpline_m_MemoizedValue.Data.Capacity = 0;
  this[1].MaterialClass__Armor.GetOuterArmorSpline_m_MemoizedValue.IsValidData = false;
  this[1].MaterialClass__Armor.GetInnerArmorSpline_m_MemoizedValue.Data._pad_0x0_0 =
       (int)&vftable_105;
  this[1].MaterialClass__Armor.GetInnerArmorSpline_m_MemoizedValue.Data.Data = (Vec2_L_double_G_ *)0x0;
  this[1].MaterialClass__Armor.GetInnerArmorSpline_m_MemoizedValue.Data.Size = 0;
  this[1].MaterialClass__Armor.GetInnerArmorSpline_m_MemoizedValue.Data.Capacity = 0;
  this[1].MaterialClass__Armor.GetInnerArmorSpline_m_MemoizedValue.IsValidData = false;
  this[1].MaterialClass__Armor.GetInnerArmorSegments_m_MemoizedValue.Data._pad_0x0_0 =
       (int)&vftable_105;
  this[1].MaterialClass__Armor.GetInnerArmorSegments_m_MemoizedValue.Data.Data = (Line2_L_double_G_ *)0x0;
  this[1].MaterialClass__Armor.GetInnerArmorSegments_m_MemoizedValue.Data.Size = 0;
  this[1].MaterialClass__Armor.GetInnerArmorSegments_m_MemoizedValue.Data.Capacity = 0;
  this[1].MaterialClass__Armor.GetInnerArmorSegments_m_MemoizedValue.IsValidData = false;
  this[1].MaterialClass__Armor.GetOuterArmorSegments_m_MemoizedValue.Data._pad_0x0_0 =
       (int)&vftable_105;
  this[1].MaterialClass__Armor.GetOuterArmorSegments_m_MemoizedValue.Data.Data = (Line2_L_double_G_ *)0x0;
  this[1].MaterialClass__Armor.GetOuterArmorSegments_m_MemoizedValue.Data.Size = 0;
  this[1].MaterialClass__Armor.GetOuterArmorSegments_m_MemoizedValue.Data.Capacity = 0;
  this[1].MaterialClass__Armor.GetOuterArmorSegments_m_MemoizedValue.IsValidData = false;
  this[1].MaterialClass__Armor.GetOuterArmorSegmentsByLayer_m_MemoizedValue.Data._pad_0x0_0 =
       (int)&vftable_105;
  this[1].MaterialClass__Armor.GetOuterArmorSegmentsByLayer_m_MemoizedValue.Data.Data =
       (Darray_L_util__Line2_L_double_G___G_ *)0x0;
  this[1].MaterialClass__Armor.GetOuterArmorSegmentsByLayer_m_MemoizedValue.Data.Size = 0;
  this[1].MaterialClass__Armor.GetOuterArmorSegmentsByLayer_m_MemoizedValue.Data.Capacity = 0;
  this[1].MaterialClass__Armor.GetOuterArmorSegmentsByLayer_m_MemoizedValue.IsValidData = false;
  this[1].MaterialClass__Armor.GetUnrolledDimensionsOfAllLayers_m_MemoizedValue.Data._pad_0x0_0 =
       (int)&vftable_105;
  this[1].MaterialClass__Armor.GetUnrolledDimensionsOfAllLayers_m_MemoizedValue.Data.Data = (Vec2_L_double_G_ *)0x0;
  this[1].MaterialClass__Armor.GetUnrolledDimensionsOfAllLayers_m_MemoizedValue.Data.Size = 0;
  this[1].MaterialClass__Armor.GetUnrolledDimensionsOfAllLayers_m_MemoizedValue.Data.Capacity = 0;
  this[1].MaterialClass__Armor.GetUnrolledDimensionsOfAllLayers_m_MemoizedValue.IsValidData = false;
  this[1].MaterialClass__Armor.GetArmorPlatesPerSegment_MemoizedValue.Data._pad_0x0_0 =
       (int)&vftable_105;
  this[1].MaterialClass__Armor.GetArmorPlatesPerSegment_MemoizedValue.Data.Data = (Darray_L_int_G_ *)0x0;
  this[1].MaterialClass__Armor.GetArmorPlatesPerSegment_MemoizedValue.Data.Size = 0;
  this[1].MaterialClass__Armor.GetArmorPlatesPerSegment_MemoizedValue.Data.Capacity = 0;
  this[1].MaterialClass__Armor.GetArmorPlatesPerSegment_MemoizedValue.IsValidData = false;
  CraftBlueprintArmor__SetParent
            ((CraftBlueprintArmor *)
             &(this->MaterialClass__Armor).CraftBlueprintArmorMemoizationHandlerInstance.ResetFunctions.Size,this);
  return this;
}

//==== 0053c480 InfoBox ====


/* public:  InfoBox__InfoBox(void (__cdecl*)(void),struct util__Attribute_L_class_util__Str_L_char_G__G_,struct util__Attribute_L_classutil__Str_L_char_G__G_,struct util__Attribute_L_bool_G_) */

InfoBox * 
InfoBox__InfoBox(InfoBox *this,_func___cdecl_void *param_1,void *param_3,
                _func___cdecl_Str_L_char_G__void_ptr *param_4,char *param_5,undefined4 param_6,
                undefined4 param_7,void *param_8,_func___cdecl_Str_L_char_G__void_ptr *param_9,
                char *param_10,undefined4 param_11,undefined4 param_12,Delegate_L_bool_G_ param_13,
                undefined4 param_14)

{
  this->Icon = param_1;
  (this->Info).Getter.Callee = param_3;
  (this->Info).Getter.CallbackFunction = param_4;
  util__Str_char___Str_char(&(this->Info).Value,(Str_L_char_G_ *)&param_5);
  (this->Tooltip).Getter.Callee = param_8;
  (this->Tooltip).Getter.CallbackFunction = param_9;
  util__Str_char___Str_char(&(this->Tooltip).Value,(Str_L_char_G_ *)&param_10);
  (this->IsVisible).Getter = param_13;
  *(undefined4 *)&(this->IsVisible).Value = param_14;
  if (param_5 != (char *)0x0) {
    port_op_delete(param_5);
    param_5 = (char *)0x0;
  }
  if (param_10 != (char *)0x0) {
    port_op_delete(param_10);
  }
  return this;
}





//==== 0053c500 LineShader ====

/* public: __thiscall LineShader__LineShader(void) */

LineShader * __thiscall LineShader__LineShader(LineShader *this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  Darray_L_void____cdecl_P__void__G_ *pDVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  float local_78 [18];
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  Darray_L_void____cdecl_P__void__G_ *local_18;
  Darray_L_void____cdecl_P__void__G_ *local_14;
  
  Shader__Shader((Shader *)this);
  this->_pad_0x0_0 = (int)&vftable_119;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_18->Size;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar5 = local_18;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadModelMatrixLocation);
  }
  *(uint32_t *)&local_30 = 0;
  iStack_2c = 1;
  iStack_28 = 2;
  iStack_24 = 3;
  iVar10 = 0;
  pfVar11 = local_78;
  do {
    iVar7 = iVar10 + 1;
    *pfVar11 = (float)(iVar10 == 0);
    pfVar11[1] = (float)(iVar10 == 1);
    pfVar11[2] = (float)(iVar10 == 2);
    pfVar11[3] = (float)(iVar10 == 3);
    iVar10 = iVar7;
    pfVar11 = (void (*)(void))(pfVar11 + 4);
  } while (iVar7 < 4);
  (this->InverseModelMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  iVar4 = iStack_24;
  iVar3 = iStack_28;
  iVar7 = iStack_2c;
  iVar10 = local_30;
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadInverseModelMatrixLocation);
  }
  iVar8 = 0;
  pfVar11 = local_78;
  do {
    iVar9 = iVar8 + 1;
    *pfVar11 = (float)(iVar8 == iVar10);
    pfVar11[1] = (float)(iVar8 == iVar7);
    pfVar11[2] = (float)(iVar8 == iVar3);
    pfVar11[3] = (float)(iVar8 == iVar4);
    iVar8 = iVar9;
    pfVar11 = pfVar11 + 4;
  } while (iVar9 < 4);
  (this->TotalTransformMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = (int)(uintptr_t) (void (*)(void))(local_14->Size);
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadTotalTransformMatrixLocation);
  }
  iVar10 = 0;
  pfVar11 = local_78;
  do {
    iVar7 = iVar10 + 1;
    bVar6 = iVar10 == iStack_2c;
    bVar1 = iVar10 == iStack_28;
    bVar2 = iVar10 == iStack_24;
    *pfVar11 = (float)(iVar10 == local_30);
    pfVar11[1] = (float)bVar6;
    pfVar11[2] = (float)bVar1;
    pfVar11[3] = (float)bVar2;
    iVar10 = iVar7;
    pfVar11 = pfVar11 + 4;
  } while (iVar7 < 4);
  (this->NormalMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadNormalMatrixLocation);
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadNearPlaneLocation);
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  local_14 = (void (*)(void))((Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations()));
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadFarPlaneLocation);
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = (int)(uintptr_t) (void (*)(void))(0);
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 0053c7a0 Darray_Level__ ====


/* public: virtual  Darray_L_structLevel_P_G___dtor(void) */

void __thiscall util__Darray_struct_Level_____Darray_struct_Level(Darray_L_struct_Level_P_G_ *this)

{
  *(undefined ***)this = (undefined **)(&vftable_2);
  if (*(void **)(this + 4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 4));
  }
  *(undefined ***)this = (undefined **)(&vftable);
  *(undefined4 *)(this + 4) = 0;
  return;
}





//==== 0053c7d0 Darray_util__tuple2_BriefingSubject__Type_util__Str_char_____ ====


/* public: virtual  Darray_L_structutil__tuple2_L_enumBriefingSubject__Type_Cclassutil__Str_L_char_G___G__G___dtor(void) */

void __thiscall
util__Darray_struct_util__tuple2_enum_BriefingSubject__Type_class_util__Str_char________Darray_struct_util__tuple2_enum_BriefingSubject__Type_class_util__Str_char(Darray_L_struct_util__tuple2_L_enum_BriefingSubject__Type_Cclass_util__Str_L_char_G___G___G_ *this)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = *(int *)(this + 4);
  *(undefined ***)this = &vftable_123;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
    if (iVar3 != 0) {
      puVar4 = (undefined4 *)(iVar3 * 0x10 + 4 + iVar2);
      do {
        puVar1 = puVar4 + -4;
        puVar4 = puVar4 + -4;
        iVar3 = iVar3 + -1;
        if ((void *)*puVar1 != (void *)0x0) {
          port_op_delete((void *)*puVar1);
          *puVar4 = 0;
        }
      } while (iVar3 != 0);
      iVar3 = *(int *)(iVar2 + -4);
    }
    port_op_delete((int *)(iVar2 + -4),iVar3 * 0x10 + 4);
  }
  *(undefined ***)this = (undefined **)(&vftable);
  *(undefined4 *)(this + 4) = 0;
  return;
}





//==== 0053c850 Darray_CrewJob__0053c850 ====


/* public: virtual  Darray_L_structCrewJob_G___dtor(void) */

void __thiscall util__Darray_struct_CrewJob____Darray_struct_CrewJob(Darray_L_struct_CrewJob_G_ *this)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = *(int *)(this + 4);
  *(undefined ***)this = &vftable_120;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
    if (iVar3 != 0) {
      puVar4 = (undefined4 *)(iVar3 * 0x20 + 4 + iVar2);
      do {
        puVar1 = puVar4 + -8;
        puVar4 = puVar4 + -8;
        iVar3 = iVar3 + -1;
        if ((void *)*puVar1 != (void *)0x0) {
          port_op_delete((void *)*puVar1);
          *puVar4 = 0;
        }
      } while (iVar3 != 0);
      iVar3 = *(int *)(iVar2 + -4);
    }
    port_op_delete((int *)(iVar2 + -4),iVar3 * 0x20 + 4);
  }
  *(undefined ***)this = (undefined **)(&vftable);
  *(undefined4 *)(this + 4) = 0;
  return;
}





//==== 0053c8d0 SplitResult_CraftSplinePoint_ ====


/* public: __thiscall util__SplitResult_struct_CraftSplinePoint____SplitResult_struct_CraftSplinePoint(void) */

void __thiscall
util__SplitResult_struct_CraftSplinePoint____SplitResult_struct_CraftSplinePoint(SplitResult_L_struct_CraftSplinePoint_G_ *this)

{
  *(undefined ***)(this + 0x10) = (undefined **)(&vftable_14);
  if (*(CraftSplinePoint **)(this + 0x14) != (CraftSplinePoint *)0x0) {
    CraftSplinePoint___vector_deleting_destructor(*(CraftSplinePoint **)(this + 0x14),3);
  }
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined ***)(this + 0x10) = (undefined **)(&vftable);
  *(undefined ***)this = (undefined **)(&vftable_14);
  if (*(CraftSplinePoint **)(this + 4) != (CraftSplinePoint *)0x0) {
    CraftSplinePoint___vector_deleting_destructor(*(CraftSplinePoint **)(this + 4),3);
  }
  *(undefined ***)this = (undefined **)(&vftable);
  *(undefined4 *)(this + 4) = 0;
  return;
}





//==== 0053c920 tuple2_CraftSplinePoint_CraftSplinePoint_ ====


/* public:  tuple2_L_struct_CraftSplinePoint_CstructCraftSplinePoint_G___dtor(void) */

void __thiscall
util__tuple2_struct_CraftSplinePoint_struct_CraftSplinePoint____tuple2_struct_CraftSplinePoint_struct_CraftSplinePoint(tuple2_L_struct_CraftSplinePoint_Cstruct_CraftSplinePoint_G_ *this)

{
  *(undefined ***)(this + 0x18) = (undefined **)(&vftable_12);
  if (*(void **)(this + 0x1c) != (void *)0x0) {
    port_op_delete(*(void **)(this + 0x1c));
  }
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined ***)(this + 0x18) = (undefined **)(&vftable);
  *(undefined ***)this = (undefined **)(&vftable_12);
  if (*(void **)(this + 4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 4));
  }
  *(undefined ***)this = (undefined **)(&vftable);
  *(undefined4 *)(this + 4) = 0;
  return;
}





//==== 0053c970 CraftBlueprint_0053c970 ====

/* public: virtual __thiscall CraftBlueprint___CraftBlueprint(void) */

void __thiscall CraftBlueprint___CraftBlueprint(CraftBlueprint *this)

{
  void *pvVar1;
  ModulePlacer *pMVar2;
  CraftSplinePoint *pCVar3;
  tuple2_L_ModulePlacer_const__P_Cbool_G_ *ptVar4;
  bool *pbVar5;
  tuple2_L_ModulePlacer_const__P_Cdouble_G_ *ptVar6;
  CrewJob *pCVar7;
  
  util__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___dtor((Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ *)
             &this[1].MaterialClass__Armor.GetArmorPlatesPerSegment_MemoizedValue);
  util__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___dtor((Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ *)
             &this[1].MaterialClass__Armor.GetUnrolledDimensionsOfAllLayers_m_MemoizedValue);
  util__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___dtor((Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ *)
             &this[1].MaterialClass__Armor.GetOuterArmorSegmentsByLayer_m_MemoizedValue);
  util__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___dtor((Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ *)
             &this[1].MaterialClass__Armor.GetOuterArmorSegments_m_MemoizedValue);
  util__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___dtor((Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ *)
             &this[1].MaterialClass__Armor.GetInnerArmorSegments_m_MemoizedValue);
  util__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___dtor((Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ *)
             &this[1].MaterialClass__Armor.GetInnerArmorSpline_m_MemoizedValue);
  util__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___dtor((Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ *)
             &this[1].MaterialClass__Armor.GetOuterArmorSpline_m_MemoizedValue);
  pvVar1 = (void *)this[1].MaterialClass__Armor.ArmorLayers.Capacity;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    this[1].MaterialClass__Armor.ArmorLayers.Capacity = 0;
  }
  pvVar1 = (void *)this[1].MaterialClass__Armor._pad_0x4_1;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
  }
  pvVar1 = (void *)this[1].MaterialClass__Armor._pad_0x8_2;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
  }
  this[1].MaterialClass__Armor._pad_0x4_1 = 0;
  this[1].MaterialClass__Armor._pad_0x8_2 = 0;
  pMVar2 = this[1].Modules.Data;
  if (pMVar2 != (ModulePlacer *)0x0) {
    port_op_delete(pMVar2);
  }
  pvVar1 = (void *)this[1].Modules.Size;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
  }
  this[1].Modules.Data = (ModulePlacer *)0x0;
  this[1].Modules.Size = 0;
  if ((void *)this[1]._pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this[1]._pad_0x4_1);
  }
  if ((void *)this[1]._pad_0x8_2 != (void *)0x0) {
    port_op_delete((void *)this[1]._pad_0x8_2);
  }
  this[1]._pad_0x4_1 = 0;
  this[1]._pad_0x8_2 = 0;
  pvVar1 = (void *)(this->GetStackedPowerUseChartData_MemoizedValue).Data.Capacity;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
  }
  pvVar1 = *(void * *)&(this->GetStackedPowerUseChartData_MemoizedValue).IsValidData;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
  }
  (this->GetStackedPowerUseChartData_MemoizedValue).Data.Capacity = 0;
  *(undefined4 *)&(this->GetStackedPowerUseChartData_MemoizedValue).IsValidData = 0;
  pvVar1 = *(void * *)&(this->GetPowerUseChartData_MemoizedValue).IsValidData;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
  }
  pvVar1 = (void *)(this->GetStackedPowerUseChartData_MemoizedValue).Data._pad_0x0_0;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
  }
  *(undefined4 *)&(this->GetPowerUseChartData_MemoizedValue).IsValidData = 0;
  (this->GetStackedPowerUseChartData_MemoizedValue).Data._pad_0x0_0 = 0;
  pvVar1 = (void *)(this->GetPowerUseChartData_MemoizedValue).Data._pad_0x0_0;
  (this->GetCostChartData_MemoizedValue).IsValidData = cde_ptr_as_double((void *)vftable_13);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
  }
  (this->GetPowerUseChartData_MemoizedValue).Data._pad_0x0_0 = 0;
  (this->GetCostChartData_MemoizedValue).IsValidData = cde_ptr_as_double((void *)&vftable);
  pvVar1 = (void *)(this->GetCostChartData_MemoizedValue).Data._pad_0x0_0;
  (this->GetMassChartData_MemoizedValue).IsValidData = cde_ptr_as_double((void *)vftable_13);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
  }
  (this->GetCostChartData_MemoizedValue).Data._pad_0x0_0 = 0;
  (this->GetMassChartData_MemoizedValue).IsValidData = cde_ptr_as_double((void *)&vftable);
  pCVar3 = (CraftSplinePoint *)(this->GetMassChartData_MemoizedValue).Data._pad_0x0_0;
  (this->GetMassCondensedChartData_MemoizedValue).IsValidData = cde_ptr_as_double((void *)vftable_14);
  if (pCVar3 != (CraftSplinePoint *)0x0) {
    CraftSplinePoint___vector_deleting_destructor(pCVar3,3);
  }
  (this->GetMassChartData_MemoizedValue).Data._pad_0x0_0 = 0;
  (this->GetMassCondensedChartData_MemoizedValue).IsValidData = cde_ptr_as_double((void *)&vftable);
  pCVar3 = (CraftSplinePoint *)(this->GetMassCondensedChartData_MemoizedValue).Data._pad_0x0_0;
  *(undefined ***)&this->IsOperational_MemoizedValue = (undefined **)(&vftable_14);
  if (pCVar3 != (CraftSplinePoint *)0x0) {
    CraftSplinePoint___vector_deleting_destructor(pCVar3,3);
  }
  (this->GetMassCondensedChartData_MemoizedValue).Data._pad_0x0_0 = 0;
  *(undefined ***)&this->IsOperational_MemoizedValue = (undefined **)(&vftable);
  pCVar3 = (CraftSplinePoint *)(this->GetCrewReportString_MemoizedValue).Data.Data;
  *(undefined ***)&this->IsThrustingCraft_MemoizedValue = (undefined **)(&vftable_14);
  if (pCVar3 != (CraftSplinePoint *)0x0) {
    CraftSplinePoint___vector_deleting_destructor(pCVar3,3);
  }
  (this->GetCrewReportString_MemoizedValue).Data.Data = (char *)0x0;
  *(undefined ***)&this->IsThrustingCraft_MemoizedValue = (undefined **)(&vftable);
  pCVar3 = (CraftSplinePoint *)
           (this->GetAllRadiatorUnworkableInterreflections_MemoizedValue).Data.DataInUse;
  (this->GetAllRadiatorUnworkableInterreflections_MemoizedValue).Data.Data =
       (tuple2_L_ModulePlacer_const__P_Cbool_G_ *)&vftable_14;
  if (pCVar3 != (CraftSplinePoint *)0x0) {
    CraftSplinePoint___vector_deleting_destructor(pCVar3,3);
  }
  (this->GetAllRadiatorUnworkableInterreflections_MemoizedValue).Data.DataInUse = (bool *)0x0;
  (this->GetAllRadiatorUnworkableInterreflections_MemoizedValue).Data.Data =
       (tuple2_L_ModulePlacer_const__P_Cbool_G_ *)&vftable;
  ptVar4 = (this->GetAllCompartmentOperationals_MemoizedValue).Data.Data;
  if (ptVar4 != (tuple2_L_ModulePlacer_const__P_Cbool_G_ *)0x0) {
    port_op_delete(ptVar4);
  }
  pbVar5 = (this->GetAllCompartmentOperationals_MemoizedValue).Data.DataInUse;
  if (pbVar5 != (bool *)0x0) {
    port_op_delete(pbVar5);
  }
  (this->GetAllCompartmentOperationals_MemoizedValue).Data.Data =
       (tuple2_L_ModulePlacer_const__P_Cbool_G_ *)0x0;
  (this->GetAllCompartmentOperationals_MemoizedValue).Data.DataInUse = (bool *)0x0;
  ptVar4 = (this->GetAllCompartmentSelfIntersections_MemoizedValue).Data.Data;
  if (ptVar4 != (tuple2_L_ModulePlacer_const__P_Cbool_G_ *)0x0) {
    port_op_delete(ptVar4);
  }
  pbVar5 = (this->GetAllCompartmentSelfIntersections_MemoizedValue).Data.DataInUse;
  if (pbVar5 != (bool *)0x0) {
    port_op_delete(pbVar5);
  }
  (this->GetAllCompartmentSelfIntersections_MemoizedValue).Data.Data =
       (tuple2_L_ModulePlacer_const__P_Cbool_G_ *)0x0;
  (this->GetAllCompartmentSelfIntersections_MemoizedValue).Data.DataInUse = (bool *)0x0;
  ptVar4 = (this->GetAllCompartmentIntersections_MemoizedValue).Data.Data;
  if (ptVar4 != (tuple2_L_ModulePlacer_const__P_Cbool_G_ *)0x0) {
    util__tuple2_L_util__tuple2_L_ModulePlacer_const_P_Cint_G__Cutil__Darray_L_util__Vec3_L_double_G___G___G____vector_deleting_destructor_
              ((tuple2_L_util__tuple2_L_ModulePlacer_const_P_Cint_G__Cutil__Darray_L_util__Vec3_L_double_G___G___G_ *)
               ptVar4,3);
  }
  pbVar5 = (this->GetAllCompartmentIntersections_MemoizedValue).Data.DataInUse;
  if (pbVar5 != (bool *)0x0) {
    port_op_delete(pbVar5);
  }
  (this->GetAllCompartmentIntersections_MemoizedValue).Data.Data =
       (tuple2_L_ModulePlacer_const__P_Cbool_G_ *)0x0;
  (this->GetAllCompartmentIntersections_MemoizedValue).Data.DataInUse = (bool *)0x0;
  ptVar6 = (this->GetRadiationAtAllModules_Sv__JY_MemoizedValue).Data.Data;
  if (ptVar6 != (tuple2_L_ModulePlacer_const__P_Cdouble_G_ *)0x0) {
    port_op_delete(ptVar6);
  }
  pbVar5 = (this->GetRadiationAtAllModules_Sv__JY_MemoizedValue).Data.DataInUse;
  if (pbVar5 != (bool *)0x0) {
    port_op_delete(pbVar5);
  }
  (this->GetRadiationAtAllModules_Sv__JY_MemoizedValue).Data.Data =
       (tuple2_L_ModulePlacer_const__P_Cdouble_G_ *)0x0;
  (this->GetRadiationAtAllModules_Sv__JY_MemoizedValue).Data.DataInUse = (bool *)0x0;
  pvVar1 = *(void **)((int)(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data +
                     0x44);
  *(undefined ***)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 8) = (undefined **)(&vftable_15);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
  }
  *(undefined4 *)((int)(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x44)
       = 0;
  *(undefined ***)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 8) = (undefined **)(&vftable);
  pvVar1 = *(void **)((int)(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data +
                     0x2c);
  *(undefined ***)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 5) = (undefined **)(&vftable_75);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
  }
  *(undefined4 *)((int)(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x2c)
       = 0;
  *(undefined ***)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 5) = (undefined **)(&vftable);
  Darray_L_CrewJob_G___dtor((Darray_L_CrewJob_G_ *)&(this->GetAmmoExplosion_MemoizedValue).Data.GasComposition.Size);
  pvVar1 = *(void * *)&(this->GetTotalCrewRequired_MemoizedValue).IsValidData;
  (this->GetTotalCrewRequired_MemoizedValue).Data =
       (int)&vftable_2;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
  }
  *(undefined4 *)&(this->GetTotalCrewRequired_MemoizedValue).IsValidData = 0;
  (this->GetTotalCrewRequired_MemoizedValue).Data =
       (int)&vftable;
  pCVar7 = (this->GetCrewRequired_MemoizedValue).Data.Jobs.Data;
  (this->GetCrewRequired_MemoizedValue).Data.Jobs._pad_0x0_0 =
       (int)&vftable_2;
  if (pCVar7 != (CrewJob *)0x0) {
    port_op_delete(pCVar7);
  }
  (this->GetCrewRequired_MemoizedValue).Data.Jobs.Data = (CrewJob *)0x0;
  (this->GetCrewRequired_MemoizedValue).Data.Jobs._pad_0x0_0 =
       (int)&vftable;
  pvVar1 = *(void * *)&(this->GetMaxPowerUsage_W_MemoizedValue).Data;
  *(undefined4 *)&(this->GetTotalPowerGeneration_W_MemoizedValue).field_0xc = (undefined4)(uintptr_t)vftable_2;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
  }
  *(undefined4 *)&(this->GetMaxPowerUsage_W_MemoizedValue).Data = 0;
  *(undefined4 *)&(this->GetTotalPowerGeneration_W_MemoizedValue).field_0xc = (undefined4)(uintptr_t)&vftable;
  pvVar1 = *(void * *)&(this->GetTotalCost_c_MemoizedValue).field_0xc;
  (this->GetTotalCost_c_MemoizedValue).IsValidData = cde_ptr_as_double((void *)vftable_2);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
  }
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetTotalCost_c_MemoizedValue)) + 0xc)) = 0;
  (this->GetTotalCost_c_MemoizedValue).IsValidData = cde_ptr_as_double((void *)&vftable);
  pvVar1 = *(void * *)&(this->GetStagingWetMass_kg_MemoizedValue).IsValidData;
  *(undefined ***)((int)&(this->GetStagingWetMass_kg_MemoizedValue).Data + 4) = (undefined **)(&vftable_2);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
  }
  *(undefined4 *)&(this->GetStagingWetMass_kg_MemoizedValue).IsValidData = 0;
  *(undefined ***)((int)&(this->GetStagingWetMass_kg_MemoizedValue).Data + 4) = (undefined **)(&vftable);
  pvVar1 = *(void **)((int)&(this->GetUnstagedWetMass_kg_MemoizedValue).Data + 4);
  (this->GetUnstagedWetMass_kg_MemoizedValue).Data = cde_ptr_as_double((void *)vftable_6);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
  }
  *(undefined4 *)((int)&(this->GetUnstagedWetMass_kg_MemoizedValue).Data + 4) = 0;
  (this->GetUnstagedWetMass_kg_MemoizedValue).Data = cde_ptr_as_double((void *)&vftable);
  pvVar1 = *(void * *)&(this->GetStagingReactionMass_kg_MemoizedValue).Data;
  *(undefined4 *)&(this->GetUnstagedReactionMass_kg_MemoizedValue).field_0xc = (undefined4)(uintptr_t)vftable_2;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
  }
  *(undefined4 *)&(this->GetStagingReactionMass_kg_MemoizedValue).Data = 0;
  *(undefined4 *)&(this->GetUnstagedReactionMass_kg_MemoizedValue).field_0xc = (undefined4)(uintptr_t)&vftable;
  pvVar1 = *(void * *)&(this->GetStagingDryMass_kg_MemoizedValue).field_0xc;
  (this->GetStagingDryMass_kg_MemoizedValue).IsValidData = cde_ptr_as_double((void *)vftable_2);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
  }
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetStagingDryMass_kg_MemoizedValue)) + 0xc)) = 0;
  (this->GetStagingDryMass_kg_MemoizedValue).IsValidData = cde_ptr_as_double((void *)&vftable);
  pvVar1 = (void *)(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Size;
  (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data =
       (Module **)&vftable_2;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
  }
  (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Size = 0;
  (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data =
       (Module **)&vftable;
  CraftBlueprintArmor___CraftBlueprintArmor((CraftBlueprintArmor *)
             &(this->MaterialClass__Armor).CraftBlueprintArmorMemoizationHandlerInstance.ResetFunctions.Size);
  pvVar1 = (void *)(this->MaterialClass__Armor).ArmorLayers.Size;
  (this->MaterialClass__Armor).ArmorLayers.Data = (ArmorLayerBlueprint *)&vftable_121;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
  }
  (this->MaterialClass__Armor).ArmorLayers.Size = 0;
  (this->MaterialClass__Armor).ArmorLayers.Data =
       (ArmorLayerBlueprint *)&vftable;
  pvVar1 = (void *)(this->MaterialClass__Armor)._pad_0x0_0;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->MaterialClass__Armor)._pad_0x0_0 = 0;
  }
  pvVar1 = (void *)(this->Modules)._pad_0x0_0;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->Modules)._pad_0x0_0 = 0;
  }
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  return;
}

//==== 0053cfb0 operator__0053cfb0 ====


/* public: class util__AssocArray_L_structModulePlacerconst_P_Cdouble_G_ & 
   util__AssocArray_struct_ModulePlacer_const__double___operator(class util__AssocArray_L_struct_ModulePlacerconst_P_Cdouble_G_ const &) */

AssocArray_L_struct_ModulePlacer_const_P_Cdouble_G_ * 
util__AssocArray_struct_ModulePlacer_const__double___operator__o2
          (AssocArray_L_struct_ModulePlacer_const_P_Cdouble_G_ *this,
          AssocArray_L_struct_ModulePlacer_const_P_Cdouble_G_ *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  void *pvVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  iVar7 = *(int *)(param_1 + 8);
  *(int *)(this + 8) = iVar7;
  if ((iVar7 < 0) || (0x3fffffff < iVar7)) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\assocarray.inl",0x3e,
              "Capacity >= 0 && Capacity <= ASSOC_ARRAY_MAX_SIZE",(char *)0x0);
    DebugBreak();
  }
  if (*(void **)this != (void *)0x0) {
    port_op_delete(*(void **)this);
  }
  if (*(void **)(this + 4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 4));
  }
  uVar8 = *(uint *)(this + 8);
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  if (0 < (int)uVar8) {
    puVar5 = (undefined4 *)
             port_op_new(-(uint)((int)((ulonglong)uVar8 * 0x10 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar8 * 0x10));
    puVar1 = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar1 = 0;
        *(undefined8 *)(puVar1 + 2) = 0;
        puVar1 = puVar1 + 4;
      }
    }
    *(undefined4 **)this = puVar5;
    uVar8 = *(uint *)(this + 8);
    pvVar6 = (void *)(uintptr_t)(port_op_new(uVar8));
    if (pvVar6 == (void *)0x0) {
      pvVar6 = (void *)0x0;
    }
    else {
      memset(pvVar6,0,uVar8);
    }
    iVar7 = 0;
    *(void **)(this + 4) = pvVar6;
    if (0 < *(int *)(this + 8)) {
      iVar9 = 0;
      do {
        iVar9 = iVar9 + 0x10;
        puVar1 = (undefined4 *)(*(int *)param_1 + -0x10 + iVar9);
        uVar2 = puVar1[1];
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        puVar5 = (undefined4 *)(*(int *)this + -0x10 + iVar9);
        *puVar5 = *puVar1;
        puVar5[1] = uVar2;
        puVar5[2] = uVar3;
        puVar5[3] = uVar4;
        *(undefined1 *)(iVar7 + *(int *)(this + 4)) = *(undefined1 *)(iVar7 + *(int *)(param_1 + 4))
        ;
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(this + 8));
    }
  }
  return this;
}





//==== 0053d0d0 operator__0053d0d0 ====


/* public: class util__AssocArray_L_structModulePlacerconst_P_Cbool_G_ & 
   util__AssocArray_struct_ModulePlacer_const__bool___operator(class util__AssocArray_L_struct_ModulePlacerconst_P_Cbool_G_ const &) */

AssocArray_L_struct_ModulePlacer_const_P_Cbool_G_ * 
util__AssocArray_struct_ModulePlacer_const__bool___operator__o2
          (AssocArray_L_struct_ModulePlacer_const_P_Cbool_G_ *this,
          AssocArray_L_struct_ModulePlacer_const_P_Cbool_G_ *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 8);
  *(int *)(this + 8) = iVar7;
  if ((iVar7 < 0) || (0x3fffffff < iVar7)) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\assocarray.inl",0x3e,
              "Capacity >= 0 && Capacity <= ASSOC_ARRAY_MAX_SIZE",(char *)0x0);
    DebugBreak();
  }
  if (*(void **)this != (void *)0x0) {
    port_op_delete(*(void **)this);
  }
  if (*(void **)(this + 4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 4));
  }
  uVar6 = *(uint *)(this + 8);
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  if (0 < (int)uVar6) {
    puVar4 = (undefined4 *)
             port_op_new(-(uint)((int)((ulonglong)uVar6 * 8 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar6 * 8));
    puVar3 = puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar3 = 0;
        *(undefined1 *)(puVar3 + 1) = 0;
        puVar3 = puVar3 + 2;
      }
    }
    *(undefined4 **)this = puVar4;
    uVar6 = *(uint *)(this + 8);
    pvVar5 = (void *)(uintptr_t)(port_op_new(uVar6));
    if (pvVar5 == (void *)0x0) {
      pvVar5 = (void *)0x0;
    }
    else {
      memset(pvVar5,0,uVar6);
    }
    *(void **)(this + 4) = pvVar5;
    iVar7 = 0;
    if (0 < *(int *)(this + 8)) {
      do {
        iVar1 = *(int *)param_1;
        iVar2 = *(int *)this;
        *(undefined4 *)(iVar2 + iVar7 * 8) = *(undefined4 *)(iVar1 + iVar7 * 8);
        *(undefined4 *)(iVar2 + 4 + iVar7 * 8) = *(undefined4 *)(iVar1 + 4 + iVar7 * 8);
        *(undefined1 *)(iVar7 + *(int *)(this + 4)) = *(undefined1 *)(iVar7 + *(int *)(param_1 + 4))
        ;
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(this + 8));
    }
  }
  return this;
}





//==== 0053d1f0 operator__0053d1f0 ====


/* public: class util__AssocArray_L_structutil__tuple2_L_structModulePlacerconst_P_Cint_G__Cstruct_util__Quaternion_L_double_G__G_ &  util__AssocArray_L_structutil__tuple2_L_structModulePlacer_const_P_Cint_G__Cstructutil__Quaternion_L_double_G__G___op_assign(class util__AssocArray_L_struct_util__tuple2_L_structModulePlacerconst_P_Cint_G__Cstructutil__Quaternion_L_double_G__G_ const &) */

AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cstruct_util__Quaternion_L_double_G___G_ *

util__AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__struct_util__Quaternion_double_____operator(AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cstruct_util__Quaternion_L_double_G___G_
          *this,AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cstruct_util__Quaternion_L_double_G___G_
                *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  void *pvVar8;
  undefined8 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  
  iVar10 = *(int *)(param_1 + 8);
  *(int *)(this + 8) = iVar10;
  if ((iVar10 < 0) || (0x3fffffff < iVar10)) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\assocarray.inl",0x3e,
              "Capacity >= 0 && Capacity <= ASSOC_ARRAY_MAX_SIZE",(char *)0x0);
    DebugBreak();
  }
  if (*(void **)this != (void *)0x0) {
    port_op_delete(*(void **)this);
  }
  if (*(void **)(this + 4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 4));
  }
  uVar11 = *(uint *)(this + 8);
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  if (0 < (int)uVar11) {
    pvVar8 = (void *)(uintptr_t)(port_op_new(-(uint)((int)((ulonglong)uVar11 * 0x28 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar11 * 0x28)));
    if (pvVar8 == (void *)0x0) {
      pvVar8 = (void *)0x0;
    }
    else if (uVar11 != 0) {
      puVar9 = (undefined8 *)((int)pvVar8 + 0x18);
      do {
        *(undefined4 *)(puVar9 + -3) = 0;
        *(undefined4 *)((int)puVar9 + -0x14) = 0;
        *puVar9 = 0;
        puVar9[1] = 0x3ff0000000000000;
        *(undefined4 *)(puVar9 + -2) = 0;
        *(undefined4 *)((int)puVar9 + -0xc) = 0;
        *(undefined4 *)(puVar9 + -1) = 0;
        *(undefined4 *)((int)puVar9 + -4) = 0;
        uVar11 = uVar11 - 1;
        puVar9 = puVar9 + 5;
      } while (uVar11 != 0);
    }
    *(void **)this = pvVar8;
    uVar11 = *(uint *)(this + 8);
    pvVar8 = (void *)(uintptr_t)(port_op_new(uVar11));
    if (pvVar8 == (void *)0x0) {
      pvVar8 = (void *)0x0;
    }
    else {
      memset(pvVar8,0,uVar11);
    }
    iVar10 = 0;
    *(void **)(this + 4) = pvVar8;
    if (0 < *(int *)(this + 8)) {
      iVar12 = 0;
      do {
        iVar3 = *(int *)param_1;
        iVar12 = iVar12 + 0x28;
        iVar4 = *(int *)this;
        puVar1 = (undefined4 *)(iVar3 + -0x28 + iVar12);
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        puVar2 = (undefined4 *)(iVar4 + -0x28 + iVar12);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        puVar2[2] = uVar6;
        puVar2[3] = uVar7;
        puVar1 = (undefined4 *)(iVar3 + -0x18 + iVar12);
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        puVar2 = (undefined4 *)(iVar4 + -0x18 + iVar12);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        puVar2[2] = uVar6;
        puVar2[3] = uVar7;
        *(undefined8 *)(iVar4 + -8 + iVar12) = *(undefined8 *)(iVar3 + -8 + iVar12);
        *(undefined1 *)(iVar10 + *(int *)(this + 4)) =
             *(undefined1 *)(iVar10 + *(int *)(param_1 + 4));
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(this + 8));
    }
  }
  return this;
}





//==== 0053d340 operator__0053d340 ====


/* public: class util__AssocArray_L_structutil__tuple2_L_structModulePlacerconst_P_Cint_G__Cstruct_util__Vec3_L_double_G__G_ &  util__AssocArray_L_structutil__tuple2_L_structModulePlacerconst__P_Cint_G__Cstructutil__Vec3_L_double_G__G___op_assign(class util__AssocArray_L_structutil__tuple2_L_struct_ModulePlacerconst_P_Cint_G__Cstructutil__Vec3_L_double_G__G_ const &) */

AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cstruct_util__Vec3_L_double_G___G_ *

util__AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__struct_util__Vec3_double_____operator(AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cstruct_util__Vec3_L_double_G___G_
          *this,AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cstruct_util__Vec3_L_double_G___G_
                *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  void *pvVar8;
  undefined8 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  
  iVar10 = *(int *)(param_1 + 8);
  *(int *)(this + 8) = iVar10;
  if ((iVar10 < 0) || (0x3fffffff < iVar10)) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\assocarray.inl",0x3e,
              "Capacity >= 0 && Capacity <= ASSOC_ARRAY_MAX_SIZE",(char *)0x0);
    DebugBreak();
  }
  if (*(void **)this != (void *)0x0) {
    port_op_delete(*(void **)this);
  }
  if (*(void **)(this + 4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 4));
  }
  uVar11 = *(uint *)(this + 8);
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  if (0 < (int)uVar11) {
    pvVar8 = (void *)(uintptr_t)(port_op_new(-(uint)((int)((ulonglong)uVar11 * 0x20 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar11 * 0x20)));
    if (pvVar8 == (void *)0x0) {
      pvVar8 = (void *)0x0;
    }
    else if (uVar11 != 0) {
      puVar9 = (undefined8 *)((int)pvVar8 + 0x18);
      do {
        *(undefined4 *)(puVar9 + -3) = 0;
        *(undefined4 *)((int)puVar9 + -0x14) = 0;
        *puVar9 = 0;
        *(undefined4 *)(puVar9 + -2) = 0;
        *(undefined4 *)((int)puVar9 + -0xc) = 0;
        *(undefined4 *)(puVar9 + -1) = 0;
        *(undefined4 *)((int)puVar9 + -4) = 0;
        uVar11 = uVar11 - 1;
        puVar9 = puVar9 + 4;
      } while (uVar11 != 0);
    }
    *(void **)this = pvVar8;
    uVar11 = *(uint *)(this + 8);
    pvVar8 = (void *)(uintptr_t)(port_op_new(uVar11));
    if (pvVar8 == (void *)0x0) {
      pvVar8 = (void *)0x0;
    }
    else {
      memset(pvVar8,0,uVar11);
    }
    iVar10 = 0;
    *(void **)(this + 4) = pvVar8;
    if (0 < *(int *)(this + 8)) {
      iVar12 = 0;
      do {
        iVar3 = *(int *)param_1;
        iVar12 = iVar12 + 0x20;
        iVar4 = *(int *)this;
        puVar1 = (undefined4 *)(iVar3 + -0x20 + iVar12);
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        puVar2 = (undefined4 *)(iVar4 + -0x20 + iVar12);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        puVar2[2] = uVar6;
        puVar2[3] = uVar7;
        puVar1 = (undefined4 *)(iVar3 + -0x10 + iVar12);
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        puVar2 = (undefined4 *)(iVar4 + -0x10 + iVar12);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        puVar2[2] = uVar6;
        puVar2[3] = uVar7;
        *(undefined1 *)(iVar10 + *(int *)(this + 4)) =
             *(undefined1 *)(iVar10 + *(int *)(param_1 + 4));
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(this + 8));
    }
  }
  return this;
}





//==== 0053d470 operator__0053d470 ====


/* public: class util__AssocArray_L_structutil__tuple2_L_structModulePlacerconst_P_Cint_G__Cclass_util__Darray_L_structutil__Vec3_L_double_G__G__G_ &  util__AssocArray_L_struct_util__tuple2_L_structModulePlacerconst_P_Cint_G__Cclassutil__Darray_L_structutil__Vec3_L_double_G__G___G___op_assign(class util__AssocArray_L_structutil__tuple2_L_structModulePlacerconst_P_Cint_G__Cclass_util__Darray_L_structutil__Vec3_L_double_G__G__G_ const &) */

AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cclass_util__Darray_L_struct_util__Vec3_L_double_G___G___G_
* 
util__AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__class_util__Darray_struct_util__Vec3_double_______operator(AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cclass_util__Darray_L_struct_util__Vec3_L_double_G___G___G_
            *this,AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cclass_util__Darray_L_struct_util__Vec3_L_double_G___G___G_
                  *param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  void *pvVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  iVar10 = *(int *)(param_1 + 8);
  *(int *)(this + 8) = iVar10;
  if ((iVar10 < 0) || (0x3fffffff < iVar10)) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\assocarray.inl",0x3e,
              "Capacity >= 0 && Capacity <= ASSOC_ARRAY_MAX_SIZE",(char *)0x0);
    DebugBreak();
  }
  if (*(tuple2_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cclass_util__Darray_L_struct_util__Vec3_L_double_G___G___G_
        **)this !=
      (tuple2_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cclass_util__Darray_L_struct_util__Vec3_L_double_G___G___G_
       *)0x0) {
    tuple2_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cclass_util__Darray_L_struct_util__Vec3_L_double_G___G___G____vector_deleting_destructor_
              (*(tuple2_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cclass_util__Darray_L_struct_util__Vec3_L_double_G___G___G_
                 **)this,3);
  }
  if (*(void **)(this + 4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 4));
  }
  uVar9 = *(uint *)(this + 8);
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  if ((int)uVar9 < 1) {
    return this;
  }
  uVar5 = -(uint)((int)((ulonglong)uVar9 * 0x18 >> 0x20) != 0) | (uint)((ulonglong)uVar9 * 0x18);
  puVar2 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar5) | uVar5 + 4);
  if (puVar2 == (uint *)0x0) {
    puVar7 = (uint *)0x0;
  }
  else {
    *puVar2 = uVar9;
    puVar7 = puVar2 + 1;
    if (uVar9 != 0) {
      puVar3 = puVar2 + 5;
      puVar2 = puVar7;
      do {
        *puVar2 = 0;
        puVar2 = puVar2 + 6;
        puVar3[-3] = 0;
        puVar3[-2] = (uint)&vftable_17;
        puVar3[-1] = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        uVar9 = uVar9 - 1;
        puVar3 = puVar3 + 6;
      } while (uVar9 != 0);
    }
  }
  uVar9 = *(uint *)(this + 8);
  *(uint **)this = puVar7;
  pvVar4 = (void *)(uintptr_t)(port_op_new(uVar9));
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    memset(pvVar4,0,uVar9);
  }
  *(void **)(this + 4) = pvVar4;
  iVar10 = 0;
  if (0 < *(int *)(this + 8)) {
    iVar8 = 0;
    do {
      puVar6 = (undefined4 *)(*(int *)this + iVar8);
      iVar1 = *(int *)param_1;
      *puVar6 = *(undefined4 *)(iVar1 + iVar8);
      puVar6[1] = *(undefined4 *)(iVar1 + 4 + iVar8);
      Darray_L_struct_util__Vec3_L_double_G___G___op_assign
                ((Darray_L_struct_util__Vec3_L_double_G___G_ *)(puVar6 + 2),
                 (Darray_L_struct_util__Vec3_L_double_G___G_ *)(iVar1 + 8 + iVar8));
      iVar8 = iVar8 + 0x18;
      *(undefined1 *)(iVar10 + *(int *)(this + 4)) = *(undefined1 *)(iVar10 + *(int *)(param_1 + 4))
      ;
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(this + 8));
  }
  return this;
}





//==== 0053d5e0 operator__0053d5e0 ====


/* public: class util__Darray_L_structutil__Vec3_L_double_G__G_ &  util__Darray_L_struct_util__Vec3_L_double_G__G___op_assign(class util__Darray_L_structutil__Vec3_L_double_G__G_ const &) */

Darray_L_struct_util__Vec3_L_double_G___G_ * 
util__Darray_struct_util__Vec3_double_____operator
          (Darray_L_struct_util__Vec3_L_double_G___G_ *this,Darray_L_struct_util__Vec3_L_double_G___G_ *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Darray_L_struct_util__Vec3_L_double_G___G_ *pDVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  
  pDVar4 = param_1;
  param_1 = (Darray_L_struct_util__Vec3_L_double_G___G_ *)(**(code **)(*(int *)param_1 + 0xc))();
  SetSize(this,(int *)&param_1);
  iVar5 = (**(code **)(*(int *)pDVar4 + 0xc))();
  if (iVar5 == 0) {
    (**(code **)(*(int *)this + 0x10))();
    return this;
  }
  uVar8 = *(uint *)(this + 8);
  if ((int)uVar8 < 0) {
    param_1 = (Darray_L_struct_util__Vec3_L_double_G___G_ *)0x0;
    SetSize(this,(int *)&param_1);
    uVar8 = *(uint *)(this + 8);
  }
  if (0x3fffffff < (int)uVar8) {
    param_1 = (Darray_L_struct_util__Vec3_L_double_G___G_ *)0x3fffffff;
    SetSize(this,(int *)&param_1);
    uVar8 = *(uint *)(this + 8);
  }
  uVar9 = *(uint *)(this + 0xc);
  if ((int)uVar9 < (int)uVar8) {
    if (uVar9 == 0) {
      *(uint *)(this + 0xc) = uVar8;
      uVar9 = uVar8;
    }
    if ((int)uVar9 < (int)uVar8) {
      do {
        uVar9 = uVar9 * 2;
      } while ((int)uVar9 < (int)uVar8);
      *(uint *)(this + 0xc) = uVar9;
    }
    if (0x3fffffff < (int)uVar9) {
      *(undefined4 *)(this + 0xc) = 0x3fffffff;
      uVar9 = 0x3fffffff;
    }
    if (*(void **)(this + 4) != (void *)0x0) {
      port_op_delete(*(void **)(this + 4));
      uVar9 = *(uint *)(this + 0xc);
    }
    *(undefined4 *)(this + 4) = 0;
    puVar6 = (undefined4 *)
             port_op_new(-(uint)((int)((ulonglong)uVar9 * 0x18 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar9 * 0x18));
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else if (uVar9 != 0) {
      puVar7 = (undefined8 *)(puVar6 + 4);
      do {
        *puVar7 = 0;
        *(undefined4 *)(puVar7 + -2) = 0;
        *(undefined4 *)((int)puVar7 + -0xc) = 0;
        *(undefined4 *)(puVar7 + -1) = 0;
        *(undefined4 *)((int)puVar7 + -4) = 0;
        uVar9 = uVar9 - 1;
        puVar7 = puVar7 + 3;
      } while (uVar9 != 0);
      *(undefined4 **)(this + 4) = puVar6;
      goto LAB_0053d6ff;
    }
    *(undefined4 **)(this + 4) = puVar6;
  }
  else {
    puVar6 = *(undefined4 **)(this + 4);
  }
LAB_0053d6ff:
  puVar10 = *(undefined4 **)(pDVar4 + 4);
  if (puVar10 != puVar10 + *(int *)(pDVar4 + 8) * 6) {
    do {
      uVar1 = puVar10[1];
      uVar2 = puVar10[2];
      uVar3 = puVar10[3];
      *puVar6 = *puVar10;
      puVar6[1] = uVar1;
      puVar6[2] = uVar2;
      puVar6[3] = uVar3;
      puVar7 = (undefined8 *)(puVar10 + 4);
      puVar10 = puVar10 + 6;
      *(undefined8 *)(puVar6 + 4) = *puVar7;
      puVar6 = puVar6 + 6;
    } while (puVar10 != (undefined4 *)(*(int *)(pDVar4 + 4) + *(int *)(pDVar4 + 8) * 0x18));
  }
  return this;
}





//==== 0053d740 operator__0053d740 ====


/* public: class util__Darray_L_structStructureCost_G_ &  util__Darray_struct_StructureCost___operator(class util__Darray_L_structStructureCost_G_ const &) */

Darray_L_struct_StructureCost_G_ * 
util__Darray_struct_StructureCost___operator
          (Darray_L_struct_StructureCost_G_ *this,Darray_L_struct_StructureCost_G_ *param_1)

{
  Str_L_char_G_ *pSVar1;
  int iVar2;
  uint *puVar3;
  Str_L_char_G_ *pSVar4;
  uint uVar5;
  Str_L_char_G_ *this_00;
  uint uVar6;
  int iStack_8;
  
  iStack_8 = (**(code **)(*(int *)param_1 + 0xc))();
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G___SetSize
            ((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ *)this,&iStack_8);
  iVar2 = (**(code **)(*(int *)param_1 + 0xc))();
  if (iVar2 == 0) {
    (**(code **)(*(int *)this + 0x10))();
    return this;
  }
  uVar5 = *(uint *)(this + 8);
  if ((int)uVar5 < 0) {
    iStack_8 = 0;
    Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G___SetSize
              ((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ *)this,&iStack_8);
    uVar5 = *(uint *)(this + 8);
  }
  if (0x3fffffff < (int)uVar5) {
    iStack_8 = 0x3fffffff;
    Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G___SetSize
              ((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ *)this,&iStack_8);
    uVar5 = *(uint *)(this + 8);
  }
  uVar6 = *(uint *)(this + 0xc);
  if ((int)uVar6 < (int)uVar5) {
    if (uVar6 == 0) {
      *(uint *)(this + 0xc) = uVar5;
      uVar6 = uVar5;
    }
    if ((int)uVar6 < (int)uVar5) {
      do {
        uVar6 = uVar6 * 2;
      } while ((int)uVar6 < (int)uVar5);
      *(uint *)(this + 0xc) = uVar6;
    }
    if (0x3fffffff < (int)uVar6) {
      *(undefined4 *)(this + 0xc) = 0x3fffffff;
      uVar6 = 0x3fffffff;
    }
    if (*(StructureCost **)(this + 4) != (StructureCost *)0x0) {
      StructureCost___vector_deleting_destructor(*(StructureCost **)(this + 4),3);
      uVar6 = *(uint *)(this + 0xc);
    }
    *(undefined4 *)(this + 4) = 0;
    uVar5 = -(uint)((int)((ulonglong)uVar6 * 0x18 >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 0x18);
    puVar3 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar5) | uVar5 + 4);
    if (puVar3 == (uint *)0x0) {
      this_00 = (Str_L_char_G_ *)0x0;
    }
    else {
      *puVar3 = uVar6;
      this_00 = (Str_L_char_G_ *)(puVar3 + 1);
      pSVar4 = this_00;
      if (uVar6 != 0) {
        do {
          pSVar4->Data = (char *)0x0;
          pSVar4->Capacity = 0;
          pSVar4->Length = 0;
          pSVar4[1].Capacity = 0;
          pSVar4[1].Length = 0;
          uVar6 = uVar6 - 1;
          pSVar4 = pSVar4 + 2;
        } while (uVar6 != 0);
        *(Str_L_char_G_ **)(this + 4) = this_00;
        goto LAB_0053d890;
      }
    }
    *(Str_L_char_G_ **)(this + 4) = this_00;
  }
  else {
    this_00 = *(Str_L_char_G_ **)(this + 4);
  }
LAB_0053d890:
  pSVar4 = *(Str_L_char_G_ **)(param_1 + 4);
  if (pSVar4 == pSVar4 + *(int *)(param_1 + 8) * 2) {
    return this;
  }
  do {
    util__Maybe_struct_util__ClassMember___operator(this_00,pSVar4);
    pSVar1 = pSVar4 + 1;
    iVar2 = pSVar4[1].Length;
    pSVar4 = pSVar4 + 2;
    this_00[1].Capacity = pSVar1->Capacity;
    this_00[1].Length = iVar2;
    this_00 = this_00 + 2;
  } while (pSVar4 != (Str_L_char_G_ *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 0x18));
  return this;
}





//==== 0053d8f0 operator__0053d8f0 ====


/* public: class util__Darray_L_structCrewJob_G_ &  util__Darray_struct_CrewJob___operator(class util__Darray_L_structCrewJob_G_ const &) */

Darray_L_struct_CrewJob_G_ * 
util__Darray_struct_CrewJob___operator
          (Darray_L_struct_CrewJob_G_ *this,Darray_L_struct_CrewJob_G_ *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iStack_8;
  
  iStack_8 = (**(code **)(*(int *)param_1 + 0xc))();
  SetSize(this,&iStack_8);
  iVar2 = (**(code **)(*(int *)param_1 + 0xc))();
  if (iVar2 == 0) {
    (**(code **)(*(int *)this + 0x10))();
    return this;
  }
  CheckSizeDestructive(this);
  puVar3 = *(undefined4 **)(param_1 + 4);
  puVar4 = *(undefined4 **)(this + 4);
  if (puVar3 == puVar3 + *(int *)(param_1 + 8) * 8) {
    return this;
  }
  do {
    *puVar4 = *puVar3;
    util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar4 + 1),(Str_L_char_G_ *)(puVar3 + 1));
    *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(puVar3 + 4);
    puVar1 = puVar3 + 6;
    puVar3 = puVar3 + 8;
    *(undefined1 *)(puVar4 + 6) = *(undefined1 *)puVar1;
    puVar4 = puVar4 + 8;
  } while (puVar3 != (undefined4 *)(*(int *)(param_1 + 8) * 0x20 + *(int *)(param_1 + 4)));
  return this;
}





//==== 0053d9a0 operator__0053d9a0 ====


/* public: class util__Darray_L_structModulePlacer_G_ &  util__Darray_struct_ModulePlacer___operator(class util__Darray_L_structModulePlacer_G_ const &) */

Darray_L_struct_ModulePlacer_G_ * 
util__Darray_struct_ModulePlacer___operator
          (Darray_L_struct_ModulePlacer_G_ *this,Darray_L_struct_ModulePlacer_G_ *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Darray_L_struct_ModulePlacer_G_ *pDVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  
  pDVar4 = param_1;
  param_1 = (Darray_L_struct_ModulePlacer_G_ *)(**(code **)(*(int *)param_1 + 0xc))();
  SetSize(this,(int *)&param_1);
  iVar5 = (**(code **)(*(int *)pDVar4 + 0xc))();
  if (iVar5 == 0) {
    (**(code **)(*(int *)this + 0x10))();
    return this;
  }
  uVar7 = *(uint *)(this + 8);
  if ((int)uVar7 < 0) {
    param_1 = (Darray_L_struct_ModulePlacer_G_ *)0x0;
    SetSize(this,(int *)&param_1);
    uVar7 = *(uint *)(this + 8);
  }
  if (0x3fffffff < (int)uVar7) {
    param_1 = (Darray_L_struct_ModulePlacer_G_ *)0x3fffffff;
    SetSize(this,(int *)&param_1);
    uVar7 = *(uint *)(this + 8);
  }
  uVar9 = *(uint *)(this + 0xc);
  if ((int)uVar9 < (int)uVar7) {
    if (uVar9 == 0) {
      *(uint *)(this + 0xc) = uVar7;
      uVar9 = uVar7;
    }
    if ((int)uVar9 < (int)uVar7) {
      do {
        uVar9 = uVar9 * 2;
      } while ((int)uVar9 < (int)uVar7);
      *(uint *)(this + 0xc) = uVar9;
    }
    if (0x3fffffff < (int)uVar9) {
      *(undefined4 *)(this + 0xc) = 0x3fffffff;
      uVar9 = 0x3fffffff;
    }
    if (*(void **)(this + 4) != (void *)0x0) {
      port_op_delete(*(void **)(this + 4));
      uVar9 = *(uint *)(this + 0xc);
    }
    *(undefined4 *)(this + 4) = 0;
    puVar6 = (undefined4 *)
             port_op_new(-(uint)((int)((ulonglong)uVar9 * 0x28 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar9 * 0x28));
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else if (uVar9 != 0) {
      puVar8 = (undefined8 *)(puVar6 + 2);
      do {
        *(undefined4 *)(puVar8 + -1) = 0;
        *(undefined4 *)((int)puVar8 + -4) = 0;
        *puVar8 = 0;
        *(undefined4 *)(puVar8 + 1) = 0;
        puVar8[2] = 0;
        *(undefined4 *)(puVar8 + 3) = 0;
        uVar9 = uVar9 - 1;
        puVar8 = puVar8 + 5;
      } while (uVar9 != 0);
      *(undefined4 **)(this + 4) = puVar6;
      goto LAB_0053dadd;
    }
    *(undefined4 **)(this + 4) = puVar6;
  }
  else {
    puVar6 = *(undefined4 **)(this + 4);
  }
LAB_0053dadd:
  puVar10 = *(undefined4 **)(pDVar4 + 4);
  if (puVar10 != puVar10 + *(int *)(pDVar4 + 8) * 10) {
    do {
      uVar1 = puVar10[1];
      uVar2 = puVar10[2];
      uVar3 = puVar10[3];
      *puVar6 = *puVar10;
      puVar6[1] = uVar1;
      puVar6[2] = uVar2;
      puVar6[3] = uVar3;
      uVar1 = puVar10[5];
      uVar2 = puVar10[6];
      uVar3 = puVar10[7];
      puVar6[4] = puVar10[4];
      puVar6[5] = uVar1;
      puVar6[6] = uVar2;
      puVar6[7] = uVar3;
      puVar8 = (undefined8 *)(puVar10 + 8);
      puVar10 = puVar10 + 10;
      *(undefined8 *)(puVar6 + 8) = *puVar8;
      puVar6 = puVar6 + 10;
    } while (puVar10 != (undefined4 *)(*(int *)(pDVar4 + 4) + *(int *)(pDVar4 + 8) * 0x28));
  }
  return this;
}





//==== 00542850 operator___00542850 ====


/* public: class util__Darray_L_structMaterialComposition_G_ &  util__Darray_struct_MaterialComposition___operator(class util__Darray_L_structMaterialComposition_G_ const &) */

Darray_L_struct_MaterialComposition_G_ * 
util__Darray_struct_MaterialComposition___operator
          (Darray_L_struct_MaterialComposition_G_ *this,Darray_L_struct_MaterialComposition_G_ *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Darray_L_struct_MaterialComposition_G_ *pDVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  pDVar5 = param_1;
  if (*(int *)(this + 8) == 0) {
    Darray_L_struct_MaterialConstituent_G___op_assign
              ((Darray_L_struct_MaterialConstituent_G_ *)this,
               (Darray_L_struct_MaterialConstituent_G_ *)param_1);
    return this;
  }
  iVar6 = (**(code **)(*(int *)param_1 + 0xc))();
  if (iVar6 != 0) {
    iVar6 = *(int *)(this + 8);
    iVar7 = (**(code **)(*(int *)pDVar5 + 0xc))();
    param_1 = (Darray_L_struct_MaterialComposition_G_ *)(iVar7 + *(int *)(this + 8));
    Darray_L_struct_MaterialConstituent_G___SetSize
              ((Darray_L_struct_MaterialConstituent_G_ *)this,(int *)&param_1);
    Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G___CheckSize
              ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)this,iVar6);
    puVar8 = *(undefined4 **)(pDVar5 + 4);
    puVar9 = (undefined4 *)(iVar6 * 0x10 + *(int *)(this + 4));
    if (puVar9 != (undefined4 *)(*(int *)(this + 8) * 0x10 + *(int *)(this + 4))) {
      do {
        uVar1 = *puVar8;
        uVar2 = puVar8[1];
        uVar3 = puVar8[2];
        uVar4 = puVar8[3];
        puVar8 = puVar8 + 4;
        *puVar9 = uVar1;
        puVar9[1] = uVar2;
        puVar9[2] = uVar3;
        puVar9[3] = uVar4;
        puVar9 = puVar9 + 4;
      } while (puVar9 != (undefined4 *)(*(int *)(this + 8) * 0x10 + *(int *)(this + 4)));
    }
    return this;
  }
  return this;
}





//==== 005428e0 vector_deleting_destructor_005428e0 ====


/* public: virtual void * __thiscall util__Darray_L_structMaterialConstituent_G_:: 0 vectordeletingdestructor(unsigned int) */

void * 
util__Darray_struct_MaterialConstituent____vector_deleting_destructor
          (Darray_L_struct_MaterialConstituent_G_ *this,uint param_1)

{
  Darray_L_struct_MaterialConstituent_G_ *pDVar1;
  Darray_L_struct_MaterialConstituent_G_ *pDVar2;
  Darray_L_struct_MaterialConstituent_G_ *pDVar3;
  int iVar4;
  
  if ((param_1 & 2) != 0) {
    pDVar1 = this + -4;
    iVar4 = *(int *)pDVar1;
    pDVar3 = this + iVar4 * 0x10;
    while (iVar4 != 0) {
      pDVar2 = pDVar3 + -0x10;
      iVar4 = iVar4 + -1;
      *(undefined ***)pDVar2 = (undefined **)(&vftable_15);
      if (*(void **)(pDVar3 + -0xc) != (void *)0x0) {
        port_op_delete(*(void **)(pDVar3 + -0xc));
      }
      *(undefined4 *)(pDVar3 + -0xc) = 0;
      *(undefined ***)pDVar2 = (undefined **)(&vftable);
      pDVar3 = pDVar2;
    }
    if ((param_1 & 1) != 0) {
      port_op_delete(pDVar1,*(int *)pDVar1 * 0x10 + 4);
    }
    return this + -4;
  }
  *(undefined ***)this = (undefined **)(&vftable_15);
  if (*(void **)(this + 4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 4));
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = (undefined **)(&vftable);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 005429a0 vector_deleting_destructor_005429a0 ====


/* public: virtual void * __thiscall util__Darray_L_structMomentOfInertia__Particle_G_:: 0 vectordeletingdestructor(unsigned int) */

void * 
util__Darray_struct_MomentOfInertia__Particle____vector_deleting_destructor
          (Darray_L_struct_MomentOfInertia__Particle_G_ *this,uint param_1)

{
  Darray_L_struct_MomentOfInertia__Particle_G_ *pDVar1;
  Darray_L_struct_MomentOfInertia__Particle_G_ *pDVar2;
  Darray_L_struct_MomentOfInertia__Particle_G_ *pDVar3;
  int iVar4;
  
  if ((param_1 & 2) != 0) {
    pDVar1 = this + -4;
    iVar4 = *(int *)pDVar1;
    pDVar3 = this + iVar4 * 0x10;
    while (iVar4 != 0) {
      pDVar2 = pDVar3 + -0x10;
      iVar4 = iVar4 + -1;
      *(undefined ***)pDVar2 = &vftable_115;
      if (*(void **)(pDVar3 + -0xc) != (void *)0x0) {
        port_op_delete(*(void **)(pDVar3 + -0xc));
      }
      *(undefined4 *)(pDVar3 + -0xc) = 0;
      *(undefined ***)pDVar2 = (undefined **)(&vftable);
      pDVar3 = pDVar2;
    }
    if ((param_1 & 1) != 0) {
      port_op_delete(pDVar1,*(int *)pDVar1 * 0x10 + 4);
    }
    return this + -4;
  }
  *(undefined ***)this = &vftable_115;
  if (*(void **)(this + 4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 4));
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = (undefined **)(&vftable);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 00542a60 vector_deleting_destructor_00542a60 ====


/* public: void * __thiscall util__tuple2_L_structCraftSplinePoint_CstructCraftSplinePoint_G_:: 0 vectordeletingdestructor(unsigned int) */

void * 
util__tuple2_struct_CraftSplinePoint_struct_CraftSplinePoint____vector_deleting_destructor
          (tuple2_L_struct_CraftSplinePoint_Cstruct_CraftSplinePoint_G_ *this,uint param_1)

{
  tuple2_L_struct_CraftSplinePoint_Cstruct_CraftSplinePoint_G_ *ptVar1;
  tuple2_L_struct_CraftSplinePoint_Cstruct_CraftSplinePoint_G_ *ptVar2;
  tuple2_L_struct_CraftSplinePoint_Cstruct_CraftSplinePoint_G_ *ptVar3;
  int iVar4;
  
  if ((param_1 & 2) != 0) {
    ptVar1 = this + -4;
    iVar4 = *(int *)ptVar1;
    ptVar3 = this + iVar4 * 0x30;
    while (iVar4 != 0) {
      ptVar2 = ptVar3 + -0x30;
      iVar4 = iVar4 + -1;
      *(undefined ***)(ptVar3 + -0x18) = (undefined **)(&vftable_12);
      if (*(void **)(ptVar3 + -0x14) != (void *)0x0) {
        port_op_delete(*(void **)(ptVar3 + -0x14));
      }
      *(undefined4 *)(ptVar3 + -0x14) = 0;
      *(undefined ***)(ptVar3 + -0x18) = (undefined **)(&vftable);
      *(undefined ***)ptVar2 = (undefined **)(&vftable_12);
      if (*(void **)(ptVar3 + -0x2c) != (void *)0x0) {
        port_op_delete(*(void **)(ptVar3 + -0x2c));
      }
      *(undefined4 *)(ptVar3 + -0x2c) = 0;
      *(undefined ***)ptVar2 = (undefined **)(&vftable);
      ptVar3 = ptVar2;
    }
    if ((param_1 & 1) != 0) {
      port_op_delete(ptVar1,*(int *)ptVar1 * 0x30 + 4);
    }
    return this + -4;
  }
  tuple2_L_struct_CraftSplinePoint_Cstruct_CraftSplinePoint_G___dtor(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x30);
  }
  return this;
}





//==== 00542b30 scalar_deleting_destructor_00542b30 ====


/* public: virtual void * __thiscall util__Darray_L_structutil__tuple2_L_structCraftSplinePoint_Cstruct_CraftSplinePoint_G__G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_util__tuple2_struct_CraftSplinePoint_struct_CraftSplinePoint______scalar_deleting_destructor
          (Darray_L_struct_util__tuple2_L_struct_CraftSplinePoint_Cstruct_CraftSplinePoint_G___G_ *this,
          uint param_1)

{
  *(undefined ***)this = (undefined **)(&vftable_126);
  if (*(tuple2_L_struct_CraftSplinePoint_Cstruct_CraftSplinePoint_G_ **)(this + 4) !=
      (tuple2_L_struct_CraftSplinePoint_Cstruct_CraftSplinePoint_G_ *)0x0) {
    tuple2_L_struct_CraftSplinePoint_Cstruct_CraftSplinePoint_G____vector_deleting_destructor_
              (*(tuple2_L_struct_CraftSplinePoint_Cstruct_CraftSplinePoint_G_ **)(this + 4),3);
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = (undefined **)(&vftable);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 00542b70 scalar_deleting_destructor_00542b70 ====


/* public: virtual void * __thiscall util__Darray_L_structutil__tuple2_L_enum_BriefingSubject__Type_Cclassutil__Str_L_char_G__G__G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_util__tuple2_enum_BriefingSubject__Type_class_util__Str_char________scalar_deleting_destructor__o2
          (Darray_L_struct_util__tuple2_L_enum_BriefingSubject__Type_Cclass_util__Str_L_char_G___G___G_ *this,
          uint param_1)

{
  util__Darray_struct_util__tuple2_enum_BriefingSubject__Type_class_util__Str_char________scalar_deleting_destructor(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 00542ba0 scalar_deleting_destructor_00542ba0 ====


/* public: virtual void * __thiscall util__Darray_L_structCrewJob_G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_CrewJob____scalar_deleting_destructor
          (Darray_L_struct_CrewJob_G_ *this,uint param_1)

{
  util__Darray_struct_CrewJob____Darray_struct_CrewJob(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 00542bd0 scalar_deleting_destructor_00542bd0 ====


/* public: virtual void * __thiscall util__Darray_L_structInfoBox_G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_InfoBox____scalar_deleting_destructor
          (Darray_L_struct_InfoBox_G_ *this,uint param_1)

{
  *(undefined ***)this = &vftable_127;
  if (*(InfoBox **)(this + 4) != (InfoBox *)0x0) {
    InfoBox___vector_deleting_destructor(*(InfoBox **)(this + 4),3);
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = (undefined **)(&vftable);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 00542c10 scalar_deleting_destructor_00542c10 ====


/* public: virtual void * __thiscall util__Darray_L_structModulePlacer_G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_ModulePlacer____scalar_deleting_destructor
          (Darray_L_struct_ModulePlacer_G_ *this,uint param_1)

{
  *(undefined ***)this = &vftable_121;
  if (*(void **)(this + 4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 4));
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = (undefined **)(&vftable);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 00542c60 scalar_deleting_destructor_00542c60 ====


/* public: virtual void * __thiscall util__Darray_L_classutil__Darray_L_structMaterialConstituent_G___G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_class_util__Darray_struct_MaterialConstituent______scalar_deleting_destructor
          (Darray_L_class_util__Darray_L_struct_MaterialConstituent_G___G_ *this,uint param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 4);
  *(undefined ***)this = &vftable_124;
  if (piVar1 != (int *)0x0) {
    if (piVar1[-1] == 0) {
      port_op_delete(piVar1 + -1);
    }
    else {
      (**(code **)(uintptr_t)(*piVar1 + 0x18))(3);
    }
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = (undefined **)(&vftable);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 00542cc0 scalar_deleting_destructor_00542cc0 ====


/* public: virtual void * __thiscall util__Darray_L_classutil__Darray_L_struct_MomentOfInertia__Particle_G__G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_class_util__Darray_struct_MomentOfInertia__Particle______scalar_deleting_destructor
          (Darray_L_class_util__Darray_L_struct_MomentOfInertia__Particle_G___G_ *this,uint param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 4);
  *(undefined ***)this = &vftable_125;
  if (piVar1 != (int *)0x0) {
    if (piVar1[-1] == 0) {
      port_op_delete(piVar1 + -1);
    }
    else {
      (**(code **)(uintptr_t)(*piVar1 + 0x18))(3);
    }
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = (undefined **)(&vftable);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 00542d20 scalar_deleting_destructor_00542d20 ====


/* public: virtual void * __thiscall CraftBlueprint:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall CraftBlueprint___scalar_deleting_destructor(CraftBlueprint *this,uint param_1)

{
  CraftBlueprint___CraftBlueprint(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x7f0);
  }
  return this;
}





//==== 00542d50 Add_00542d50 ====


/* public: bool  util__AssocArray_L_structModulePlacerconst_P_Cdouble_G___Add(struct
   ModulePlacer const * const &,double const &) */

bool 
util__AssocArray_struct_ModulePlacer_const__double___Add
          (AssocArray_L_struct_ModulePlacer_const_P_Cdouble_G_ *this,ModulePlacer **param_1,
          double *param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uVar2 = *(uint *)(this + 8);
  if (uVar2 == 0) {
    return false;
  }
  for (uVar4 = (uint)((int)*param_1 * -0x61c8864f) % uVar2; (int)uVar4 < 0; uVar4 = uVar4 + uVar2) {
  }
  if ((int)uVar2 <= (int)uVar4) {
    uVar4 = (int)uVar4 % (int)uVar2;
  }
  iVar5 = 0;
  cVar1 = *(char *)(*(int *)(this + 4) + uVar4);
  while (cVar1 != '\0') {
    if ((int)uVar2 <= iVar5) goto LAB_00542de3;
    uVar2 = *(uint *)(this + 8);
    if (*(ModulePlacer **)(*(int *)this + uVar4 * 0x10) == *param_1) {
      return false;
    }
    for (uVar4 = uVar4 + 1; (int)uVar4 < 0; uVar4 = uVar4 + uVar2) {
    }
    if ((int)uVar2 <= (int)uVar4) {
      uVar4 = (int)uVar4 % (int)uVar2;
    }
    iVar5 = iVar5 + 1;
    cVar1 = *(char *)(*(int *)(this + 4) + uVar4);
  }
  if ((int)uVar2 <= iVar5) {
LAB_00542de3:
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\assocarray.inl",0x6c,
              "IndicesPassed < Capacity",(char *)0x0);
    DebugBreak();
    if (*(int *)(this + 8) <= iVar5) {
      return false;
    }
  }
  puVar3 = (undefined4 *)(uVar4 * 0x10 + *(int *)this);
  uStack_10 = SUB84(*param_2,0);
  uStack_c = (undefined4)((ulonglong)*param_2 >> 0x20);
  *puVar3 = (undefined4)(uintptr_t)(*param_1);
  puVar3[1] = uStack_14;
  puVar3[2] = uStack_10;
  puVar3[3] = uStack_c;
  *(undefined1 *)(uVar4 + *(int *)(this + 4)) = 1;
  return true;
}





//==== 00542e50 Add_00542e50 ====


/* public: bool  util__AssocArray_L_structModulePlacerconst_P_Cbool_G___Add(struct
   ModulePlacer const * const &,bool const &) */

bool 
util__AssocArray_struct_ModulePlacer_const__bool___Add
          (AssocArray_L_struct_ModulePlacer_const_P_Cbool_G_ *this,ModulePlacer **param_1,bool *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uStack_c;
  
  uVar2 = *(uint *)(this + 8);
  if (uVar2 == 0) {
    return false;
  }
  for (uVar3 = (uint)((int)*param_1 * -0x61c8864f) % uVar2; (int)uVar3 < 0; uVar3 = uVar3 + uVar2) {
  }
  if ((int)uVar2 <= (int)uVar3) {
    uVar3 = (int)uVar3 % (int)uVar2;
  }
  iVar4 = 0;
  cVar1 = *(char *)(*(int *)(this + 4) + uVar3);
  while (cVar1 != '\0') {
    if ((int)uVar2 <= iVar4) goto LAB_00542ed5;
    if (*(ModulePlacer **)(*(int *)this + uVar3 * 8) == *param_1) {
      return false;
    }
    for (uVar3 = uVar3 + 1; (int)uVar3 < 0; uVar3 = uVar3 + uVar2) {
    }
    if ((int)uVar2 <= (int)uVar3) {
      uVar3 = (int)uVar3 % (int)uVar2;
    }
    iVar4 = iVar4 + 1;
    cVar1 = *(char *)(*(int *)(this + 4) + uVar3);
  }
  if ((int)uVar2 <= iVar4) {
LAB_00542ed5:
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\assocarray.inl",0x6c,
              "IndicesPassed < Capacity",(char *)0x0);
    DebugBreak();
    if (*(int *)(this + 8) <= iVar4) {
      return false;
    }
  }
  iVar4 = *(int *)this;
  uStack_c = CONCAT31((*(uint24_t*)((char*)&(uStack_c)+1)),*param_2);
  *(ModulePlacer **)(iVar4 + uVar3 * 8) = *param_1;
  *(undefined4 *)(iVar4 + 4 + uVar3 * 8) = uStack_c;
  *(undefined1 *)(uVar3 + *(int *)(this + 4)) = 1;
  return true;
}





//==== 00542f40 Add_00542f40 ====


/* public: bool  util__AssocArray_L_structutil__tuple2_L_structModulePlacerconst__P_Cint_G__Cstructutil__Quaternion_L_double_G__G___Add(struct util__tuple2_L_structModulePlacerconst__P_Cint_G_ const &,struct util__Quaternion_L_double_G_ const &) */

bool 
util__AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__struct_util__Quaternion_double_____Add(AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cstruct_util__Quaternion_L_double_G___G_
    *this,tuple2_L_struct_ModulePlacer_const_P_Cint_G_ *param_1,Quaternion_L_double_G_ *param_2)

{
  undefined8 stack0xfffffffc;
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uVar11 = __security_cookie ^ (uint)&stack0xfffffffc;
  uVar15 = *(uint *)(this + 8);
  if (uVar15 == 0) {
LAB_005430d6:
    uVar10 = 0;
    __security_check_cookie(uVar11 ^ (uint)&stack0xfffffffc);
    return (bool)uVar10;
  }
  uVar12 = *(uint *)(param_1 + 4);
  uVar13 = (uVar12 & 0xff) * 0x401;
  uVar13 = ((uVar12 >> 8 & 0xff) + (uVar13 >> 6 ^ uVar13)) * 0x401;
  uVar13 = ((uVar12 >> 0x10 & 0xff) + (uVar13 >> 6 ^ uVar13)) * 0x401;
  uVar12 = ((uVar13 >> 6 ^ uVar13) + (uVar12 >> 0x18)) * 0x401;
  uVar12 = (uVar12 ^ uVar12 >> 6) * 9;
  for (uVar12 = ((uVar12 >> 0xb ^ uVar12) * 0x8001 + *(int *)param_1 * -0x61c8864f) % uVar15;
      (int)uVar12 < 0; uVar12 = uVar12 + uVar15) {
  }
  if ((int)uVar15 <= (int)uVar12) {
    uVar12 = (int)uVar12 % (int)uVar15;
  }
  iVar14 = 0;
  cVar2 = *(char *)(*(int *)(this + 4) + uVar12);
  while (cVar2 != '\0') {
    if ((int)uVar15 <= iVar14) goto LAB_00543054;
    uVar15 = *(uint *)(this + 8);
    if ((*(int *)(*(int *)this + uVar12 * 0x28) == *(int *)param_1) &&
       (uVar15 = *(uint *)(this + 8),
       *(int *)(*(int *)this + 4 + uVar12 * 0x28) == *(int *)(param_1 + 4))) goto LAB_005430d6;
    for (uVar12 = uVar12 + 1; (int)uVar12 < 0; uVar12 = uVar12 + uVar15) {
    }
    if ((int)uVar15 <= (int)uVar12) {
      uVar12 = (int)uVar12 % (int)uVar15;
    }
    iVar14 = iVar14 + 1;
    cVar2 = *(char *)(*(int *)(this + 4) + uVar12);
  }
  if ((int)uVar15 <= iVar14) {
LAB_00543054:
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\assocarray.inl",0x6c,
              "IndicesPassed < Capacity",(char *)0x0);
    DebugBreak();
    if (*(int *)(this + 8) <= iVar14) goto LAB_005430d6;
  }
  uVar3 = *(undefined4 *)(param_1 + 4);
  uVar6 = *(undefined4 *)&param_2->X;
  uVar7 = *(undefined4 *)((int)&param_2->X + 4);
  uVar8 = *(undefined4 *)&param_2->Y;
  uVar9 = *(undefined4 *)((int)&param_2->Y + 4);
  dVar4 = param_2->Z;
  dVar5 = param_2->W;
  iVar14 = *(int *)this;
  puVar1 = (undefined4 *)(iVar14 + uVar12 * 0x28);
  *puVar1 = *(undefined4 *)param_1;
  puVar1[1] = uVar3;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  uStack_1c = SUB84(dVar4,0);
  uStack_18 = (undefined4)((ulonglong)dVar4 >> 0x20);
  puVar1 = (undefined4 *)(iVar14 + 0x10 + uVar12 * 0x28);
  *puVar1 = uVar8;
  puVar1[1] = uVar9;
  puVar1[2] = uStack_1c;
  puVar1[3] = uStack_18;
  *(double *)(iVar14 + 0x20 + uVar12 * 0x28) = dVar5;
  *(undefined1 *)(uVar12 + *(int *)(this + 4)) = 1;
  uVar10 = 1;
  __security_check_cookie(uVar11 ^ (uint)&stack0xfffffffc);
  return (bool)uVar10;
}





//==== 005430f0 Add_005430f0 ====


/* public: bool  util__AssocArray_L_structutil__tuple2_L_structModulePlacerconst__P_Cint_G__Cstructutil__Vec3_L_double_G__G___Add(struct util__tuple2_L_structModulePlacerconst_P_Cint_G_
   const &,struct util__Vec3_L_double_G_ const &) */

bool 
util__AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__struct_util__Vec3_double_____Add(AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cstruct_util__Vec3_L_double_G___G_ *this
   ,tuple2_L_struct_ModulePlacer_const_P_Cint_G_ *param_1,Vec3_L_double_G_ *param_2)

{
  undefined8 stack0xfffffffc;
  double dVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  uint uVar10;
  int *piVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uVar10 = __security_cookie ^ (uint)&stack0xfffffffc;
  uVar3 = *(uint *)(this + 8);
  if (uVar3 == 0) {
LAB_00543277:
    uVar9 = 0;
    __security_check_cookie(uVar10 ^ (uint)&stack0xfffffffc);
    return (bool)uVar9;
  }
  uVar13 = *(uint *)(param_1 + 4);
  uVar14 = (uVar13 & 0xff) * 0x401;
  uVar14 = ((uVar13 >> 8 & 0xff) + (uVar14 >> 6 ^ uVar14)) * 0x401;
  uVar14 = ((uVar13 >> 0x10 & 0xff) + (uVar14 >> 6 ^ uVar14)) * 0x401;
  uVar13 = ((uVar14 >> 6 ^ uVar14) + (uVar13 >> 0x18)) * 0x401;
  uVar13 = (uVar13 ^ uVar13 >> 6) * 9;
  for (uVar13 = ((uVar13 >> 0xb ^ uVar13) * 0x8001 + *(int *)param_1 * -0x61c8864f) % uVar3;
      (int)uVar13 < 0; uVar13 = uVar13 + uVar3) {
  }
  if ((int)uVar3 <= (int)uVar13) {
    uVar13 = (int)uVar13 % (int)uVar3;
  }
  iVar15 = 0;
  cVar2 = *(char *)(*(int *)(this + 4) + uVar13);
  while (cVar2 != '\0') {
    if ((int)uVar3 <= iVar15) goto LAB_005431fd;
    piVar11 = (int *)(uVar13 * 0x20 + *(int *)this);
    if ((*piVar11 == *(int *)param_1) && (piVar11[1] == *(int *)(param_1 + 4))) goto LAB_00543277;
    for (uVar13 = uVar13 + 1; (int)uVar13 < 0; uVar13 = uVar13 + uVar3) {
    }
    if ((int)uVar3 <= (int)uVar13) {
      uVar13 = (int)uVar13 % (int)uVar3;
    }
    iVar15 = iVar15 + 1;
    cVar2 = *(char *)(*(int *)(this + 4) + uVar13);
  }
  if ((int)uVar3 <= iVar15) {
LAB_005431fd:
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\assocarray.inl",0x6c,
              "IndicesPassed < Capacity",(char *)0x0);
    DebugBreak();
    if (*(int *)(this + 8) <= iVar15) goto LAB_00543277;
  }
  uVar4 = *(undefined4 *)(param_1 + 4);
  uVar5 = *(undefined4 *)&param_2->X;
  uVar6 = *(undefined4 *)((int)&param_2->X + 4);
  uVar7 = *(undefined4 *)&param_2->Y;
  uVar8 = *(undefined4 *)((int)&param_2->Y + 4);
  dVar1 = param_2->Z;
  puVar12 = (undefined4 *)(uVar13 * 0x20 + *(int *)this);
  *puVar12 = *(undefined4 *)param_1;
  puVar12[1] = uVar4;
  puVar12[2] = uVar5;
  puVar12[3] = uVar6;
  uStack_14 = SUB84(dVar1,0);
  uStack_10 = (undefined4)((ulonglong)dVar1 >> 0x20);
  puVar12[4] = uVar7;
  puVar12[5] = uVar8;
  puVar12[6] = uStack_14;
  puVar12[7] = uStack_10;
  *(undefined1 *)(uVar13 + *(int *)(this + 4)) = 1;
  uVar9 = 1;
  __security_check_cookie(uVar10 ^ (uint)&stack0xfffffffc);
  return (bool)uVar9;
}





//==== 00543290 Add_00543290 ====


/* public: bool  util__AssocArray_L_structutil__tuple2_L_structModulePlacerconst__P_Cint_G__Cclassutil__Darray_L_structutil__Vec3_L_double_G__G__G___Add(struct util__tuple2_L_struct_ModulePlacerconst_P_Cint_G_ const &,class util__Darray_L_structutil__Vec3_L_double_G__G_ const &) */

bool 
util__AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__class_util__Darray_struct_util__Vec3_double_______Add(AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cclass_util__Darray_L_struct_util__Vec3_L_double_G___G___G_
      *this,tuple2_L_struct_ModulePlacer_const_P_Cint_G_ *param_1,
     Darray_L_struct_util__Vec3_L_double_G___G_ *param_2)

{
  undefined8 stack0xfffffffc;
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cclass_util__Darray_L_struct_util__Vec3_L_double_G___G___G_
  *pAVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined **ppuStack_38;
  void *pvStack_34;
  undefined **ppuStack_28;
  void *pvStack_24;
  Darray_L_struct_util__Vec3_L_double_G___G_ *pDStack_18;
  int iStack_14;
  uint uStack_10;
  AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cclass_util__Darray_L_struct_util__Vec3_L_double_G___G___G_
  *pAStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  uStack_10 = *(uint *)(this + 8);
  pDStack_18 = param_2;
  pAStack_c = this;
  if (uStack_10 == 0) {
LAB_0054346c:
    uVar6 = 0;
    __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
    return (bool)uVar6;
  }
  uVar7 = *(uint *)(param_1 + 4);
  uVar8 = (uVar7 & 0xff) * 0x401;
  uVar8 = ((uVar7 >> 8 & 0xff) + (uVar8 >> 6 ^ uVar8)) * 0x401;
  uVar8 = ((uVar7 >> 0x10 & 0xff) + (uVar8 >> 6 ^ uVar8)) * 0x401;
  uVar7 = ((uVar8 >> 6 ^ uVar8) + (uVar7 >> 0x18)) * 0x401;
  uVar7 = (uVar7 ^ uVar7 >> 6) * 9;
  for (uVar7 = ((uVar7 >> 0xb ^ uVar7) * 0x8001 + *(int *)param_1 * -0x61c8864f) % uStack_10;
      (int)uVar7 < 0; uVar7 = uVar7 + uStack_10) {
  }
  if ((int)uStack_10 <= (int)uVar7) {
    uVar7 = (int)uVar7 % (int)uStack_10;
  }
  iVar9 = 0;
  iStack_14 = *(int *)(this + 4);
  cVar2 = *(char *)(iStack_14 + uVar7);
  while (cVar2 != '\0') {
    if ((int)uStack_10 <= iVar9) goto LAB_005433a3;
    if ((*(int *)(*(int *)this + uVar7 * 0x18) == *(int *)param_1) &&
       (*(int *)(*(int *)this + 4 + uVar7 * 0x18) == *(int *)(param_1 + 4))) goto LAB_0054346c;
    for (uVar7 = uVar7 + 1; (int)uVar7 < 0; uVar7 = uVar7 + uStack_10) {
    }
    if ((int)uStack_10 <= (int)uVar7) {
      uVar7 = (int)uVar7 % (int)uStack_10;
    }
    iVar9 = iVar9 + 1;
    cVar2 = *(char *)(iStack_14 + uVar7);
  }
  if ((int)uStack_10 <= iVar9) {
LAB_005433a3:
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\assocarray.inl",0x6c,
              "IndicesPassed < Capacity",(char *)0x0);
    DebugBreak();
    if (*(int *)(pAStack_c + 8) <= iVar9) goto LAB_0054346c;
  }
  Darray_L_struct_util__Vec3_L_double_G___G___Darray_L_struct_util__Vec3_L_double_G___G_
            ((Darray_L_struct_util__Vec3_L_double_G___G_ *)&ppuStack_28,pDStack_18);
  uVar3 = *(undefined4 *)param_1;
  uVar4 = *(undefined4 *)(param_1 + 4);
  Darray_L_struct_util__Vec3_L_double_G___G___Darray_L_struct_util__Vec3_L_double_G___G_
            ((Darray_L_struct_util__Vec3_L_double_G___G_ *)&ppuStack_38,
             (Darray_L_struct_util__Vec3_L_double_G___G_ *)&ppuStack_28);
  ppuStack_28 = (undefined **)(&vftable_17);
  if (pvStack_24 != (void *)0x0) {
    port_op_delete(pvStack_24);
  }
  pAVar5 = pAStack_c;
  pvStack_24 = (void *)0x0;
  ppuStack_28 = (undefined **)(&vftable);
  puVar1 = (undefined4 *)(*(int *)pAStack_c + uVar7 * 0x18);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  Darray_L_struct_util__Vec3_L_double_G___G___op_assign
            ((Darray_L_struct_util__Vec3_L_double_G___G_ *)(puVar1 + 2),
             (Darray_L_struct_util__Vec3_L_double_G___G_ *)&ppuStack_38);
  ppuStack_38 = (undefined **)(&vftable_17);
  if (pvStack_34 != (void *)0x0) {
    port_op_delete(pvStack_34);
  }
  *(undefined1 *)(uVar7 + *(int *)(pAVar5 + 4)) = 1;
  uVar6 = 1;
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar6;
}





//==== 00543490 Add_00543490 ====


/* public: bool  util__AssocArray_L_classutil__WeakPtr_L_structModuleCompartment_G__Cstruct_ModulePlacer_G___Add(class util__WeakPtr_L_structModuleCompartment_G_ const &,struct ModulePlacer
   const &) */

bool 
util__AssocArray_class_util__WeakPtr_struct_ModuleCompartment__struct_ModulePlacer___Add
          (AssocArray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G__Cstruct_ModulePlacer_G_ *this,
          WeakPtr_L_struct_ModuleCompartment_G_ *param_1,ModulePlacer *param_2)

{
  double dVar1;
  double dVar2;
  char cVar3;
  uint uVar4;
  Module *pMVar5;
  Module *pMVar6;
  Module *pMVar7;
  ReferenceController *this_00;
  undefined4 uVar8;
  ReferenceController *this_01;
  int *piVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_24;
  
  uVar4 = *(uint *)(this + 8);
  if (uVar4 == 0) {
    return false;
  }
  for (uVar10 = (uint)(*(int *)param_1 * -0x61c8864f) % uVar4; (int)uVar10 < 0;
      uVar10 = uVar10 + uVar4) {
  }
  if ((int)uVar4 <= (int)uVar10) {
    uVar10 = (int)uVar10 % (int)uVar4;
  }
  iVar11 = 0;
  cVar3 = *(char *)(*(int *)(this + 4) + uVar10);
  while (cVar3 != '\0') {
    if ((int)uVar4 <= iVar11) goto LAB_00543526;
    piVar9 = (int *)(uVar10 * 0x30 + *(int *)this);
    if ((*(int *)(param_1 + 4) == piVar9[1]) && (*(int *)param_1 == *piVar9)) {
      return false;
    }
    for (uVar10 = uVar10 + 1; (int)uVar10 < 0; uVar10 = uVar10 + uVar4) {
    }
    if ((int)uVar4 <= (int)uVar10) {
      uVar10 = (int)uVar10 % (int)uVar4;
    }
    iVar11 = iVar11 + 1;
    cVar3 = *(char *)(*(int *)(this + 4) + uVar10);
  }
  if ((int)uVar4 <= iVar11) {
LAB_00543526:
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\assocarray.inl",0x6c,
              "IndicesPassed < Capacity",(char *)0x0);
    DebugBreak();
    if (*(int *)(this + 8) <= iVar11) {
      return false;
    }
  }
  iVar11 = param_2->Multiplier;
  dVar1 = param_2->Position_m;
  pMVar5 = param_2->ModuleType;
  pMVar6 = param_2->TargetType;
  dVar2 = param_2->Offset_radians;
  pMVar7 = param_2[1].ModuleType;
  this_00 = *(ReferenceController **)(param_1 + 4);
  uVar8 = *(undefined4 *)param_1;
  if ((this_00 != (ReferenceController *)0x0) &&
     (util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(this_00), this_00 != (ReferenceController *)0x0)) {
    util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(this_00);
  }
  if (this_00 != (ReferenceController *)0x0) {
    ReferenceController__ReleaseWeakReference(this_00);
  }
  puVar12 = (undefined4 *)(uVar10 * 0x30 + *(int *)this);
  this_01 = (ReferenceController *)puVar12[1];
  *puVar12 = uVar8;
  puVar12[1] = (undefined4)(uintptr_t)(this_00);
  if (this_00 != (ReferenceController *)0x0) {
    util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(this_00);
  }
  if (this_01 != (ReferenceController *)0x0) {
    ReferenceController__ReleaseWeakReference(this_01);
  }
  uStack_40 = SUB84(dVar1,0);
  uStack_3c = (undefined4)((ulonglong)dVar1 >> 0x20);
  puVar12[2] = (undefined4)(uintptr_t)(pMVar5);
  puVar12[3] = iVar11;
  puVar12[4] = uStack_40;
  puVar12[5] = uStack_3c;
  uStack_30 = SUB84(dVar2,0);
  uStack_2c = (undefined4)((ulonglong)dVar2 >> 0x20);
  puVar12[6] = (undefined4)(uintptr_t)(pMVar6);
  puVar12[7] = uStack_34;
  puVar12[8] = uStack_30;
  puVar12[9] = uStack_2c;
  *(ulonglong *)(puVar12 + 10) = CONCAT44(uStack_24,pMVar7);
  if (this_00 != (ReferenceController *)0x0) {
    ReferenceController__ReleaseWeakReference(this_00);
  }
  *(undefined1 *)(uVar10 + *(int *)(this + 4)) = 1;
  return true;
}





//==== 00543650 Add_00543650 ====


/* public: bool  util__Darray_L_structCrewJob_G___Add(struct CrewJob const &) */

bool __thiscall util__Darray_struct_CrewJob___Add(Darray_L_struct_CrewJob_G_ *this,CrewJob *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iStack_8;
  
  iVar1 = *(int *)(this + 8);
  iStack_8 = iVar1 + 1;
  SetSize(this,&iStack_8);
  bVar2 = CheckSize(this,iVar1);
  if (!bVar2) {
  }
  iVar1 = *(int *)(this + 4);
  iVar3 = *(int *)(this + 8) * 0x20;
  *(CrewDepartment *)(iVar3 + -0x20 + iVar1) = param_1->Dept;
  util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(iVar1 + -0x1c + iVar3),&param_1->Name);
  *(double *)(iVar3 + -0x10 + iVar1) = param_1->CrewRequired;
  *(bool *)(iVar3 + -8 + iVar1) = param_1->WatchRequired;
  return true;
}





//==== 005436c0 Add_005436c0 ====


/* public: bool  util__Darray_L_structInfoBox_G___Add(struct InfoBox const &) */

bool __thiscall util__Darray_struct_InfoBox___Add(Darray_L_struct_InfoBox_G_ *this,InfoBox *param_1)

{
  int iVar1;
  bool bVar2;
  int iStack_8;
  
  iVar1 = *(int *)(this + 8);
  iStack_8 = iVar1 + 1;
  SetSize(this,&iStack_8);
  bVar2 = CheckSize(this,iVar1);
  if (!bVar2) {
  }
  iVar1 = *(int *)(this + 4) + *(int *)(this + 8) * 0x38;
  *(_func___cdecl_void **)(iVar1 + -0x38) = param_1->Icon;
  *(void **)(iVar1 + -0x34) = (param_1->Info).Getter.Callee;
  *(_func___cdecl_Str_L_char_G__void_ptr **)(iVar1 + -0x30) = (param_1->Info).Getter.CallbackFunction;
  util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(iVar1 + -0x2c),&(param_1->Info).Value);
  *(void **)(iVar1 + -0x20) = (param_1->Tooltip).Getter.Callee;
  *(_func___cdecl_Str_L_char_G__void_ptr **)(iVar1 + -0x1c) = (param_1->Tooltip).Getter.CallbackFunction
  ;
  util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(iVar1 + -0x18),&(param_1->Tooltip).Value);
  *(Delegate_L_bool_G_ *)(iVar1 + -0xc) = (param_1->IsVisible).Getter;
  *(undefined4 *)(iVar1 + -4) = (undefined4)((param_1->IsVisible).Value);
  return true;
}





//==== 00543760 AllocateArray_00543760 ====


/* public: static void * __cdecl ModulePlacer__AllocateArray(unsigned int) */

void * __cdecl ModulePlacer__AllocateArray(uint)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  pvVar1 = (void *)(uintptr_t)(port_op_new(-(uint)((int)((ulonglong)param_1 * 0x28 >> 0x20) != 0) |
                          (uint)((ulonglong)param_1 * 0x28)));
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else if (param_1 != 0) {
    puVar2 = (undefined8 *)((int)pvVar1 + 8);
    do {
      *(undefined4 *)(puVar2 + -1) = 0;
      *(undefined4 *)((int)puVar2 + -4) = 0;
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      puVar2[2] = 0;
      *(undefined4 *)(puVar2 + 3) = 0;
      param_1 = param_1 - 1;
      puVar2 = puVar2 + 5;
    } while (param_1 != 0);
    return pvVar1;
  }
  return pvVar1;
}





//==== 005437d0 CanMove_Clear ====

/* public: void __thiscall CraftBlueprint__CanMove_Clear(void)const  */

void __thiscall CraftBlueprint__CanMove_Clear(CraftBlueprint *this)

{
  *(undefined2 *)&(this->GetMainEngineModulePlacers_MemoizedValue).Data._pad_0x0_0 = 0;
  return;
}

//==== 005437e0 CanMove_Memoize ====

/* public: void __thiscall CraftBlueprint__CanMove_Memoize(void)const  */

void __thiscall CraftBlueprint__CanMove_Memoize(CraftBlueprint *this)

{
  Module ***this_00;
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  void *local_24;
  void *local_14;
  undefined4 local_8;
  
  if (*(char *)((int)&(this->GetMainEngineModulePlacers_MemoizedValue).Data._pad_0x0_0 + 1) != '\0')
  {
    return;
  }
  iVar3 = (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity;
  this_00 = &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data;
  local_8 = iVar3 + 1;
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)this_00,&local_8);
  bVar1 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)this_00,iVar3);
  if (bVar1) {
    *(code **)((this->GetAllModulesNeedingCooling_MemoizedValue).Data.Size + -4 +
              (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity * 4) = (long long int (*)())(CanMove_Clear);
  }
  piVar2 = (int *)GetEngineModules(this);
  local_8 = 1;
  iVar3 = (**(code **)(uintptr_t)(*piVar2 + 0xc))();
  if (0 < iVar3) {
    piVar2 = (int *)GetReactionMassModules(this);
    local_8 = 3;
    iVar3 = (**(code **)(uintptr_t)(*piVar2 + 0xc))();
    if (0 < iVar3) {
      bVar5 = 1;
      uVar4 = 3;
      goto LAB_00543880;
    }
  }
  bVar5 = 0;
  uVar4 = local_8;
LAB_00543880:
  if (((uVar4 & 2) != 0) && (local_14 != (void *)0x0)) {
    port_op_delete(local_14);
  }
  if (local_24 != (void *)0x0) {
    port_op_delete(local_24);
  }
  local_8 = CONCAT13(1,(uint3)bVar5 << 0x10);
  *(undefined2 *)&(this->GetMainEngineModulePlacers_MemoizedValue).Data._pad_0x0_0 = (*(uint16_t*)((char*)&(local_8)+2));
  return;
}

//==== 005438e0 CanRoll_Clear_005438e0 ====


/* public: void __thiscall CraftBlueprint__CanRoll_Clear(void)const  */

void __thiscall CraftBlueprint__CanRoll_Clear(CraftBlueprint *this)

{
  *(undefined2 *)&(*(undefined2 *)(void *)((char *)&((this->GetModuleSegments_m_MemoizedValue)) + 0x12)) = 0;
  return;
}





//==== 005438f0 CanRoll_Memoize_005438f0 ====


/* public: void __thiscall CraftBlueprint__CanRoll_Memoize(void)const  */

void __thiscall CraftBlueprint__CanRoll_Memoize(CraftBlueprint *this)

{
  int iVar1;
  bool bVar2;
  int iStack_8;
  
  if ((*(undefined4 *)((char *)&((this->GetModuleSegments_m_MemoizedValue)) + 0x13)) == '\0') {
    iVar1 = (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity;
    iStack_8 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)
               &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,&iStack_8);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)
                       &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,iVar1);
    if (bVar2) {
      *(code **)((this->GetAllModulesNeedingCooling_MemoizedValue).Data.Size + -4 +
                (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity * 4) = (long long int (*)())(CanRoll_Clear);
    }
    GetEstimatedRollTorque_N_m_Memoize(this);
    if ((this->GetCoreModuleSegments_m_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    *(ushort *)&((*(undefined4 *)((char *)&((this->GetModuleSegments_m_MemoizedValue)) + 0x12))) = CONCAT11(1,0.0 < (double)((this->GetCoreModuleSegments_m_MemoizedValue).Data.Size));
  }
  return;
}





//==== 005439a0 CanTurn_Clear ====


/* public: void __thiscall CraftBlueprint__CanTurn_Clear(void)const  */

void __thiscall CraftBlueprint__CanTurn_Clear(CraftBlueprint *this)

{
  *(undefined2 *)&(this->GetModuleSegments_m_MemoizedValue).IsValidData = 0;
  return;
}





//==== 005439b0 CanTurn_Memoize ====

/* public: void __thiscall CraftBlueprint__CanTurn_Memoize(void)const  */

void __thiscall CraftBlueprint__CanTurn_Memoize(CraftBlueprint *this)

{
  Module ***this_00;
  int iVar1;
  bool bVar2;
  double dVar3;
  int local_18;
  undefined4 uStack_14;
  int iStack_10;
  Line2_L_double_G_ *pLStack_c;
  int local_8;
  
  if ((*(undefined4 *)((char *)&((this->GetModuleSegments_m_MemoizedValue)) + 0x11)) == '\0') {
    iVar1 = (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity;
    this_00 = &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data;
    local_8 = iVar1 + 1;
    util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)this_00,&local_8);
    bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)this_00,iVar1);
    if (bVar2) {
      *(code **)((this->GetAllModulesNeedingCooling_MemoizedValue).Data.Size + -4 +
                (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity * 4) = (long long int (*)())(CanTurn_Clear);
    }
    bVar2 = false;
    if ((char)(this->GetCoreModuleSegments_m_MemoizedValue).Data._pad_0x0_0 == '\0') {
      iVar1 = (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity;
      local_8 = iVar1 + 1;
      util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)this_00,&local_8);
      bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                        ((Darray_L_GraphicsResource__Type_G_ *)this_00,iVar1);
      if (bVar2) {
        *(code **)((this->GetAllModulesNeedingCooling_MemoizedValue).Data.Size + -4 +
                  (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity * 4) = (long long int (*)())(GetEstimatedTurnTorque_N_m_Clear);
      }
      dVar3 = GetEstimatedTurnTorque_N_m_MemoizedFunction(this);
      iStack_10 = CONCAT31((*(uint24_t*)((char*)&(iStack_10)+1)),1);
      local_18 = SUB84(dVar3,0);
      uStack_14 = (undefined4)((ulonglong)dVar3 >> 0x20);
      (this->GetModuleSpline_m_MemoizedValue).Data.Capacity = local_18;
      *(undefined4 *)&(this->GetModuleSpline_m_MemoizedValue).IsValidData = uStack_14;
      (this->GetCoreModuleSegments_m_MemoizedValue).Data._pad_0x0_0 = iStack_10;
      (this->GetCoreModuleSegments_m_MemoizedValue).Data.Data = (long long int (*)())(pLStack_c);
      bVar2 = (char)(this->GetCoreModuleSegments_m_MemoizedValue).Data._pad_0x0_0 == '\0';
    }
    if (bVar2) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    *(ushort *)&((this->GetModuleSegments_m_MemoizedValue).IsValidData) = CONCAT11(1,0.0 < (double)((this->GetModuleSpline_m_MemoizedValue).Data.Capacity));
  }
  return;
}

//==== 00543aa0 CheckSize_00543aa0 ====


/* private: bool  util__Darray_L_structutil__tuple2_L_structCraftSplinePoint_Cstruct_CraftSplinePoint_G__G___CheckSize(int) */

bool 
util__Darray_struct_util__tuple2_struct_CraftSplinePoint_struct_CraftSplinePoint_____CheckSize
          (Darray_L_struct_util__tuple2_L_struct_CraftSplinePoint_Cstruct_CraftSplinePoint_G___G_ *this,
          int param_1)

{
  Darray_L_struct_util__Vec2_L_double_G___G_ *pDVar1;
  bool bVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  tuple2_L_struct_CraftSplinePoint_Cstruct_CraftSplinePoint_G_ *this_00;
  uint uVar6;
  tuple2_L_struct_CraftSplinePoint_Cstruct_CraftSplinePoint_G_ *ptVar7;
  bool bVar8;
  uint *puStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar5 = *(uint *)(this + 8);
  bVar8 = -1 < (int)uVar5;
  bVar2 = !bVar8;
  if (bVar2) {
    puStack_c = (uint *)0x0;
    SetSize(this,(int *)&puStack_c);
    uVar5 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar2;
  bVar2 = (int)uVar5 < 0x40000000;
  if (!bVar2) {
    puStack_c = (uint *)0x3fffffff;
    SetSize(this,(int *)&puStack_c);
    uVar5 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar6 = *(uint *)(this + 0xc);
  if ((int)uVar5 <= (int)uVar6) {
    return bVar2 && bVar8;
  }
  if (uVar6 == 0) {
    *(uint *)(this + 0xc) = uVar5;
    uVar6 = uVar5;
  }
  if ((int)uVar6 < (int)uVar5) {
    do {
      uVar6 = uVar6 * 2;
    } while ((int)uVar6 < (int)uVar5);
    *(uint *)(this + 0xc) = uVar6;
  }
  if (0x3fffffff < (int)uVar6) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar6 = 0x3fffffff;
  }
  uVar5 = -(uint)((int)((ulonglong)uVar6 * 0x30 >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 0x30);
  puVar3 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar5) | uVar5 + 4);
  if (puVar3 == (uint *)0x0) {
    puStack_c = (uint *)0x0;
  }
  else {
    *puVar3 = uVar6;
    puStack_c = puVar3 + 1;
    if (uVar6 != 0) {
      puVar4 = puVar3 + 9;
      puVar3 = puStack_c;
      do {
        *puVar3 = (uint)&vftable_12;
        puVar3 = puVar3 + 0xc;
        puVar4[-7] = 0;
        puVar4[-6] = 0;
        puVar4[-5] = 0;
        puVar4[-0xffffffff00000004] = 0;
        puVar4[-0xffffffff00000003] = 0;
        puVar4[-2] = (uint)&vftable_12;
        puVar4[-1] = 0;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 0xc;
      } while (uVar6 != 0);
    }
  }
  this_00 = *(tuple2_L_struct_CraftSplinePoint_Cstruct_CraftSplinePoint_G_ **)(this + 4);
  puVar3 = puStack_c;
  if (this_00 != (tuple2_L_struct_CraftSplinePoint_Cstruct_CraftSplinePoint_G_ *)0x0) {
    puVar3 = puStack_c + *(int *)(this + 8) * 0xc;
    if (this_00 != this_00 + param_1 * 0x30) {
      puVar4 = puStack_c + 4;
      ptVar7 = this_00;
      do {
        if (puVar4 + -4 == puVar3) break;
        Darray_L_struct_util__Vec2_L_double_G___G___op_assign
                  ((Darray_L_struct_util__Vec2_L_double_G___G_ *)(puVar4 + -4),
                   (Darray_L_struct_util__Vec2_L_double_G___G_ *)ptVar7);
        *(undefined8 *)puVar4 = *(undefined8 *)((Darray_L_struct_util__Vec2_L_double_G___G_ *)ptVar7 + 0x10)
        ;
        Darray_L_struct_util__Vec2_L_double_G___G___op_assign
                  ((Darray_L_struct_util__Vec2_L_double_G___G_ *)(puVar4 + 2),
                   (Darray_L_struct_util__Vec2_L_double_G___G_ *)ptVar7 + 0x18);
        pDVar1 = (Darray_L_struct_util__Vec2_L_double_G___G_ *)ptVar7 + 0x28;
        ptVar7 = (tuple2_L_struct_CraftSplinePoint_Cstruct_CraftSplinePoint_G_ *)
                 ((Darray_L_struct_util__Vec2_L_double_G___G_ *)ptVar7 + 0x30);
        *(undefined8 *)(puVar4 + 6) = *(undefined8 *)pDVar1;
        puVar4 = puVar4 + 0xc;
        this_00 = *(tuple2_L_struct_CraftSplinePoint_Cstruct_CraftSplinePoint_G_ **)(this + 4);
      } while (ptVar7 != this_00 + param_1 * 0x30);
    }
    puVar3 = puStack_c;
    if (this_00 != (tuple2_L_struct_CraftSplinePoint_Cstruct_CraftSplinePoint_G_ *)0x0) {
      tuple2_L_struct_CraftSplinePoint_Cstruct_CraftSplinePoint_G____vector_deleting_destructor_
                (this_00,3);
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(uint **)(this + 4) = puVar3;
  return bStack_5;
}





//==== 00543c80 CheckSize_00543c80 ====


/* private: bool  util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cdouble____thiscallutil__Reflectable___P__void_const_G__G___CheckSize(int) */

bool 
util__Darray_struct_util__tuple2_class_util__Str_char__double____thiscall_util__Reflectable_____void_const______CheckSize(Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__G___G_
            *this,int param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  uint *puVar3;
  uint uVar4;
  Str_L_char_G_ *pSVar5;
  Str_L_char_G_ *pSVar6;
  uint uVar7;
  Str_L_char_G_ *pSVar8;
  int iVar9;
  Str_L_char_G_ *this_00;
  undefined4 *puVar10;
  bool bVar11;
  Str_L_char_G_ *pSStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar4 = *(uint *)(this + 8);
  bVar11 = -1 < (int)uVar4;
  bVar2 = !bVar11;
  if (bVar2) {
    pSStack_c = (Str_L_char_G_ *)0x0;
    Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cvoid____cdecl_P__void__G___G___SetSize
              ((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cvoid____cdecl_P__void__G___G_ *)this,
               (int *)&pSStack_c);
    uVar4 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar2;
  bVar2 = (int)uVar4 < 0x40000000;
  if (!bVar2) {
    pSStack_c = (Str_L_char_G_ *)0x3fffffff;
    Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cvoid____cdecl_P__void__G___G___SetSize
              ((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cvoid____cdecl_P__void__G___G_ *)this,
               (int *)&pSStack_c);
    uVar4 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar7 = *(uint *)(this + 0xc);
  if ((int)uVar4 <= (int)uVar7) {
    return bVar2 && bVar11;
  }
  if (uVar7 == 0) {
    *(uint *)(this + 0xc) = uVar4;
    uVar7 = uVar4;
  }
  if ((int)uVar7 < (int)uVar4) {
    do {
      uVar7 = uVar7 * 2;
    } while ((int)uVar7 < (int)uVar4);
    *(uint *)(this + 0xc) = uVar7;
  }
  if (0x3fffffff < (int)uVar7) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar7 = 0x3fffffff;
  }
  uVar4 = -(uint)((int)((ulonglong)uVar7 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar7 * 0x10);
  puVar3 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
  if (puVar3 == (uint *)0x0) {
    pSStack_c = (Str_L_char_G_ *)0x0;
  }
  else {
    *puVar3 = uVar7;
    pSStack_c = (Str_L_char_G_ *)(puVar3 + 1);
    pSVar5 = pSStack_c;
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      pSVar5->Data = (char *)0x0;
      pSVar5->Capacity = 0;
      pSVar5->Length = 0;
      pSVar5[1].Data = (char *)0x0;
      pSVar5 = (Str_L_char_G_ *)&pSVar5[1].Capacity;
    }
  }
  pSVar5 = *(Str_L_char_G_ **)(this + 4);
  if (pSVar5 != (Str_L_char_G_ *)0x0) {
    pSVar6 = (Str_L_char_G_ *)(*(int *)(this + 8) * 0x10 + (int)pSStack_c);
    pSVar8 = pSVar5;
    this_00 = pSStack_c;
    if (pSVar5 != (Str_L_char_G_ *)(param_1 * 0x10 + (int)pSVar5)) {
      do {
        if (this_00 == pSVar6) break;
        util__Maybe_struct_util__ClassMember___operator(this_00,pSVar8);
        pSVar5 = pSVar8 + 1;
        pSVar8 = (Str_L_char_G_ *)&pSVar8[1].Capacity;
        this_00[1].Data = pSVar5->Data;
        this_00 = (Str_L_char_G_ *)&this_00[1].Capacity;
        pSVar5 = *(Str_L_char_G_ **)(this + 4);
      } while (pSVar8 != (Str_L_char_G_ *)(param_1 * 0x10 + (int)pSVar5));
    }
    if (pSVar5 != (Str_L_char_G_ *)0x0) {
      iVar9 = pSVar5[-1].Length;
      puVar10 = (undefined4 *)(iVar9 * 0x10 + (int)pSVar5);
      if (iVar9 != 0) {
        do {
          puVar1 = puVar10 + -4;
          puVar10 = puVar10 + -4;
          iVar9 = iVar9 + -1;
          if ((void *)*puVar1 != (void *)0x0) {
            port_op_delete((void *)*puVar1);
            *puVar10 = 0;
          }
        } while (iVar9 != 0);
        iVar9 = pSVar5[-1].Length;
      }
      port_op_delete(&pSVar5[-1].Length,iVar9 * 0x10 + 4);
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(Str_L_char_G_ **)(this + 4) = pSStack_c;
  return bStack_5;
}





//==== 00543e40 CheckSize_00543e40 ====


/* private: bool  util__Darray_L_structutil__tuple2_L_enumBriefingSubject__Type_Cclass_util__Str_L_char_G__G__G___CheckSize(int) */

bool 
util__Darray_struct_util__tuple2_enum_BriefingSubject__Type_class_util__Str_char_______CheckSize
          (Darray_L_struct_util__tuple2_L_enum_BriefingSubject__Type_Cclass_util__Str_L_char_G___G___G_ *this,
          int param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  bool bVar8;
  uint *puStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar3 = *(uint *)(this + 8);
  bVar8 = -1 < (int)uVar3;
  bVar1 = !bVar8;
  if (bVar1) {
    puStack_c = (uint *)0x0;
    SetSize(this,(int *)&puStack_c);
    uVar3 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar1;
  bVar1 = (int)uVar3 < 0x40000000;
  if (!bVar1) {
    puStack_c = (uint *)0x3fffffff;
    SetSize(this,(int *)&puStack_c);
    uVar3 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar5 = *(uint *)(this + 0xc);
  if ((int)uVar3 <= (int)uVar5) {
    return bVar1 && bVar8;
  }
  if (uVar5 == 0) {
    *(uint *)(this + 0xc) = uVar3;
    uVar5 = uVar3;
  }
  if ((int)uVar5 < (int)uVar3) {
    do {
      uVar5 = uVar5 * 2;
    } while ((int)uVar5 < (int)uVar3);
    *(uint *)(this + 0xc) = uVar5;
  }
  if (0x3fffffff < (int)uVar5) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar5 = 0x3fffffff;
  }
  uVar3 = -(uint)((int)((ulonglong)uVar5 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar5 * 0x10);
  puVar2 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
  if (puVar2 == (uint *)0x0) {
    puStack_c = (uint *)0x0;
  }
  else {
    *puVar2 = uVar5;
    puStack_c = puVar2 + 1;
    puVar6 = puStack_c;
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 4;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2 = puVar2 + 4;
    }
  }
  puVar2 = *(uint **)(this + 4);
  if (puVar2 != (uint *)0x0) {
    puVar4 = puStack_c + *(int *)(this + 8) * 4;
    puVar6 = puVar2;
    puVar7 = puStack_c;
    if (puVar2 != puVar2 + param_1 * 4) {
      do {
        if (puVar7 == puVar4) break;
        *puVar7 = *puVar6;
        util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar7 + 1),(Str_L_char_G_ *)(puVar6 + 1));
        puVar6 = puVar6 + 4;
        puVar2 = *(uint **)(this + 4);
        puVar7 = puVar7 + 4;
      } while (puVar6 != puVar2 + param_1 * 4);
    }
    if (puVar2 != (uint *)0x0) {
      uVar3 = puVar2[-1];
      if (uVar3 != 0) {
        puVar6 = puVar2 + uVar3 * 4 + 1;
        do {
          puVar7 = puVar6 + -4;
          puVar6 = puVar6 + -4;
          uVar3 = uVar3 - 1;
          if ((void *)*puVar7 != (void *)0x0) {
            port_op_delete((void *)*puVar7);
            *puVar6 = 0;
          }
        } while (uVar3 != 0);
        uVar3 = puVar2[-1];
      }
      port_op_delete(puVar2 + -1,uVar3 * 0x10 + 4);
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(uint **)(this + 4) = puStack_c;
  return bStack_5;
}





//==== 00544010 CheckSize_00544010 ====


/* private: bool  util__Darray_L_structCrewJob_G___CheckSize(int) */

bool __thiscall util__Darray_struct_CrewJob___CheckSize(Darray_L_struct_CrewJob_G_ *this,int param_1)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  bool bVar8;
  uint *puStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar4 = *(uint *)(this + 8);
  bVar8 = -1 < (int)uVar4;
  bVar1 = !bVar8;
  if (bVar1) {
    puStack_c = (uint *)0x0;
    SetSize(this,(int *)&puStack_c);
    uVar4 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar1;
  bVar1 = (int)uVar4 < 0x40000000;
  if (!bVar1) {
    puStack_c = (uint *)0x3fffffff;
    SetSize(this,(int *)&puStack_c);
    uVar4 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar5 = *(uint *)(this + 0xc);
  if ((int)uVar4 <= (int)uVar5) {
    return bVar1 && bVar8;
  }
  if (uVar5 == 0) {
    *(uint *)(this + 0xc) = uVar4;
    uVar5 = uVar4;
  }
  if ((int)uVar5 < (int)uVar4) {
    do {
      uVar5 = uVar5 * 2;
    } while ((int)uVar5 < (int)uVar4);
    *(uint *)(this + 0xc) = uVar5;
  }
  if (0x3fffffff < (int)uVar5) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar5 = 0x3fffffff;
  }
  uVar4 = -(uint)((int)((ulonglong)uVar5 * 0x20 >> 0x20) != 0) | (uint)((ulonglong)uVar5 * 0x20);
  puVar2 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
  if (puVar2 == (uint *)0x0) {
    puStack_c = (uint *)0x0;
  }
  else {
    *puVar2 = uVar5;
    puStack_c = puVar2 + 1;
    if (uVar5 != 0) {
      puVar3 = puVar2 + 4;
      puVar2 = puStack_c;
      do {
        *puVar2 = 0;
        puVar2 = puVar2 + 8;
        puVar3[-2] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        *(undefined1 *)(puVar3 + 3) = 0;
        uVar5 = uVar5 - 1;
        puVar3 = puVar3 + 8;
      } while (uVar5 != 0);
    }
  }
  puVar2 = *(uint **)(this + 4);
  if (puVar2 != (uint *)0x0) {
    puVar3 = puStack_c + *(int *)(this + 8) * 8;
    if (puVar2 != puVar2 + param_1 * 8) {
      puVar7 = puStack_c + 4;
      puVar6 = puVar2;
      do {
        if (puVar7 + -4 == puVar3) break;
        puVar7[-4] = *puVar6;
        util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar7 + -3),(Str_L_char_G_ *)(puVar6 + 1));
        *(undefined8 *)puVar7 = *(undefined8 *)(puVar6 + 4);
        puVar2 = puVar6 + 6;
        puVar6 = puVar6 + 8;
        *(char *)(puVar7 + 2) = (char)*puVar2;
        puVar7 = puVar7 + 8;
        puVar2 = *(uint **)(this + 4);
      } while (puVar6 != puVar2 + param_1 * 8);
    }
    if (puVar2 != (uint *)0x0) {
      uVar4 = puVar2[-1];
      if (uVar4 != 0) {
        puVar3 = puVar2 + uVar4 * 8 + 1;
        do {
          puVar6 = puVar3 + -8;
          puVar3 = puVar3 + -8;
          uVar4 = uVar4 - 1;
          if ((void *)*puVar6 != (void *)0x0) {
            port_op_delete((void *)*puVar6);
            *puVar3 = 0;
          }
        } while (uVar4 != 0);
        uVar4 = puVar2[-1];
      }
      port_op_delete(puVar2 + -1,uVar4 * 0x20 + 4);
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(uint **)(this + 4) = puStack_c;
  return bStack_5;
}





//==== 00544200 CheckSize_00544200 ====


/* private: bool  util__Darray_L_structInfoBox_G___CheckSize(int) */

bool __thiscall util__Darray_struct_InfoBox___CheckSize(Darray_L_struct_InfoBox_G_ *this,int param_1)

{
  undefined8 uVar1;
  bool bVar2;
  Attribute_L_util__Str_L_char_G___G_ *pAVar3;
  uint *puVar4;
  uint uVar5;
  InfoBox *this_00;
  Str_L_char_G_ *pSVar6;
  uint *puVar7;
  Str_L_char_G_ *pSVar8;
  uint uVar9;
  InfoBox *pIVar10;
  bool bVar11;
  Str_L_char_G_ SStack_2c;
  Str_L_char_G_ SStack_20;
  int iStack_14;
  Darray_L_struct_InfoBox_G_ *pDStack_10;
  uint *puStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar5 = *(uint *)(this + 8);
  bVar11 = -1 < (int)uVar5;
  bVar2 = !bVar11;
  pDStack_10 = this;
  if (bVar2) {
    puStack_c = (uint *)0x0;
    SetSize(this,(int *)&puStack_c);
    uVar5 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar2;
  bVar2 = (int)uVar5 < 0x40000000;
  if (!bVar2) {
    puStack_c = (uint *)0x3fffffff;
    SetSize(this,(int *)&puStack_c);
    uVar5 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar9 = *(uint *)(this + 0xc);
  if ((int)uVar5 <= (int)uVar9) {
    return bVar2 && bVar11;
  }
  if (uVar9 == 0) {
    *(uint *)(this + 0xc) = uVar5;
    uVar9 = uVar5;
  }
  if ((int)uVar9 < (int)uVar5) {
    do {
      uVar9 = uVar9 * 2;
    } while ((int)uVar9 < (int)uVar5);
    *(uint *)(this + 0xc) = uVar9;
  }
  if (0x3fffffff < (int)uVar9) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar9 = 0x3fffffff;
  }
  uVar5 = -(uint)((int)((ulonglong)uVar9 * 0x38 >> 0x20) != 0) | (uint)((ulonglong)uVar9 * 0x38);
  puVar4 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar5) | uVar5 + 4);
  if (puVar4 == (uint *)0x0) {
    puStack_c = (uint *)0x0;
  }
  else {
    *puVar4 = uVar9;
    puVar7 = puVar4 + 1;
    puStack_c = puVar7;
    if (uVar9 != 0) {
      SStack_20.Data = (char *)0x0;
      SStack_20.Capacity = 0;
      SStack_20.Length = 0;
      SStack_2c.Data = (char *)0x0;
      SStack_2c.Capacity = 0;
      pSVar8 = (Str_L_char_G_ *)(puVar4 + 4);
      SStack_2c.Length = 0;
      do {
        *puVar7 = 0;
        pSVar8[-1].Capacity = 0;
        pSVar8[-1].Length = 0;
        util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(pSVar8,&SStack_20);
        pSVar8[1].Data = (char *)0x0;
        pSVar8[1].Capacity = 0;
        util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const((Str_L_char_G_ *)&pSVar8[1].Length,&SStack_2c);
        pSVar8[2].Length = 0;
        puVar7 = puVar7 + 0xe;
        pSVar8[3].Data = (char *)0x0;
        *(undefined1 *)&pSVar8[3].Capacity = 0;
        pSVar8 = (Str_L_char_G_ *)&pSVar8[4].Length;
        uVar9 = uVar9 - 1;
        this = pDStack_10;
      } while (uVar9 != 0);
    }
  }
  this_00 = *(InfoBox **)(this + 4);
  puVar4 = puStack_c;
  if (this_00 != (InfoBox *)0x0) {
    pDStack_10 = (Darray_L_struct_InfoBox_G_ *)(puStack_c + *(int *)(this + 8) * 0xe);
    iStack_14 = param_1 * 0x38;
    if (this_00 != this_00 + param_1) {
      pAVar3 = &this_00->Tooltip;
      pSVar8 = (Str_L_char_G_ *)(puStack_c + 8);
      pIVar10 = this_00;
      do {
        pSVar6 = &pAVar3->Value;
        if ((Darray_L_struct_InfoBox_G_ *)&pSVar8[-3].Capacity == pDStack_10) break;
        pSVar8[-3].Capacity = (int)pIVar10->Icon;
        pSVar8[-3].Length = *(int *)((int)(pSVar6 + -3) + 8);
        pSVar8[-2].Data = pSVar6[-2].Data;
        util__Maybe_struct_util__ClassMember___operator
                  ((Str_L_char_G_ *)&pSVar8[-2].Capacity,(Str_L_char_G_ *)((int)(pSVar6 + -2) + 4));
        pSVar8[-1].Capacity = *(int *)((int)(pSVar6 + -1) + 4);
        pSVar8[-1].Length = *(int *)((int)(pSVar6 + -1) + 8);
        util__Maybe_struct_util__ClassMember___operator(pSVar8,pSVar6);
        pIVar10 = pIVar10 + 1;
        uVar1 = *(undefined8 *)(pSVar6 + 1);
        pSVar8[1].Data = (char *)(int)uVar1;
        pSVar8[1].Capacity = (int)((ulonglong)uVar1 >> 0x20);
        pAVar3 = (Attribute_L_util__Str_L_char_G___G_ *)(pSVar6 + 4);
        pSVar8[1].Length = *(int *)((int)(pSVar6 + 1) + 8);
        pSVar8 = (Str_L_char_G_ *)&pSVar8[4].Length;
        this_00 = *(InfoBox **)(this + 4);
      } while (pIVar10 != (InfoBox *)((int)&this_00->Icon + iStack_14));
    }
    puVar4 = puStack_c;
    if (this_00 != (InfoBox *)0x0) {
      InfoBox___vector_deleting_destructor(this_00,3);
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(uint **)(this + 4) = puVar4;
  return bStack_5;
}





//==== 00544450 CheckSize_00544450 ====


/* private: bool  util__Darray_L_structModulePlacer_G___CheckSize(int) */

bool __thiscall
util__Darray_struct_ModulePlacer___CheckSize(Darray_L_struct_ModulePlacer_G_ *this,int param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  bool bVar13;
  undefined4 *puStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar8 = *(uint *)(this + 8);
  bVar13 = -1 < (int)uVar8;
  bVar2 = !bVar13;
  if (bVar2) {
    puStack_c = (undefined4 *)0x0;
    SetSize(this,(int *)&puStack_c);
    uVar8 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar2;
  bVar2 = (int)uVar8 < 0x40000000;
  if (!bVar2) {
    puStack_c = (undefined4 *)0x3fffffff;
    SetSize(this,(int *)&puStack_c);
    uVar8 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar11 = *(uint *)(this + 0xc);
  if ((int)uVar8 <= (int)uVar11) {
    return bVar2 && bVar13;
  }
  if (uVar11 == 0) {
    *(uint *)(this + 0xc) = uVar8;
    uVar11 = uVar8;
  }
  if ((int)uVar11 < (int)uVar8) {
    do {
      uVar11 = uVar11 * 2;
    } while ((int)uVar11 < (int)uVar8);
    *(uint *)(this + 0xc) = uVar11;
  }
  if (0x3fffffff < (int)uVar11) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar11 = 0x3fffffff;
  }
  puStack_c = (undefined4 *)
              port_op_new(-(uint)((int)((ulonglong)uVar11 * 0x28 >> 0x20) != 0) |
                             (uint)((ulonglong)uVar11 * 0x28));
  if (puStack_c == (undefined4 *)0x0) {
    puStack_c = (undefined4 *)0x0;
  }
  else if (uVar11 != 0) {
    puVar7 = (undefined8 *)(puStack_c + 2);
    do {
      *(undefined4 *)(puVar7 + -1) = 0;
      *(undefined4 *)((int)puVar7 + -4) = 0;
      *puVar7 = 0;
      *(undefined4 *)(puVar7 + 1) = 0;
      puVar7[2] = 0;
      *(undefined4 *)(puVar7 + 3) = 0;
      uVar11 = uVar11 - 1;
      puVar7 = puVar7 + 5;
    } while (uVar11 != 0);
  }
  puVar6 = puStack_c;
  puVar9 = *(undefined4 **)(this + 4);
  if (puVar9 != (undefined4 *)0x0) {
    iVar1 = *(int *)(this + 8);
    puVar10 = puStack_c;
    puVar12 = puVar9;
    if (puVar9 != puVar9 + param_1 * 10) {
      do {
        if (puVar10 == puStack_c + iVar1 * 10) break;
        uVar3 = puVar9[1];
        uVar4 = puVar9[2];
        uVar5 = puVar9[3];
        *puVar10 = *puVar9;
        puVar10[1] = uVar3;
        puVar10[2] = uVar4;
        puVar10[3] = uVar5;
        uVar3 = puVar9[5];
        uVar4 = puVar9[6];
        uVar5 = puVar9[7];
        puVar10[4] = puVar9[4];
        puVar10[5] = uVar3;
        puVar10[6] = uVar4;
        puVar10[7] = uVar5;
        puVar7 = (undefined8 *)(puVar9 + 8);
        puVar9 = puVar9 + 10;
        *(undefined8 *)(puVar10 + 8) = *puVar7;
        puVar12 = *(undefined4 **)(this + 4);
        puVar10 = puVar10 + 10;
      } while (puVar9 != puVar12 + param_1 * 10);
    }
    port_op_delete(puVar12);
    *(undefined4 *)(this + 4) = 0;
  }
  *(undefined4 **)(this + 4) = puVar6;
  return bStack_5;
}





//==== 005445d0 CheckSize_005445d0 ====


/* private: bool  util__Darray_L_classutil__Darray_L_structMaterialConstituent_G___G___CheckSize(int) */

bool 
util__Darray_class_util__Darray_struct_MaterialConstituent_____CheckSize
          (Darray_L_class_util__Darray_L_struct_MaterialConstituent_G___G_ *this,int param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  Darray_L_struct_MaterialConstituent_G_ *pDVar4;
  Darray_L_struct_MaterialConstituent_G_ *pDVar5;
  Darray_L_struct_MaterialConstituent_G_ *this_00;
  uint uVar6;
  Darray_L_struct_MaterialConstituent_G_ *pDVar7;
  bool bVar8;
  Darray_L_struct_MaterialConstituent_G_ *pDStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar3 = *(uint *)(this + 8);
  bVar8 = -1 < (int)uVar3;
  bVar1 = !bVar8;
  if (bVar1) {
    pDStack_c = (Darray_L_struct_MaterialConstituent_G_ *)0x0;
    SetSize(this,(int *)&pDStack_c);
    uVar3 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar1;
  bVar1 = (int)uVar3 < 0x40000000;
  if (!bVar1) {
    pDStack_c = (Darray_L_struct_MaterialConstituent_G_ *)0x3fffffff;
    SetSize(this,(int *)&pDStack_c);
    uVar3 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar6 = *(uint *)(this + 0xc);
  if ((int)uVar3 <= (int)uVar6) {
    return bVar1 && bVar8;
  }
  if (uVar6 == 0) {
    *(uint *)(this + 0xc) = uVar3;
    uVar6 = uVar3;
  }
  if ((int)uVar6 < (int)uVar3) {
    do {
      uVar6 = uVar6 * 2;
    } while ((int)uVar6 < (int)uVar3);
    *(uint *)(this + 0xc) = uVar6;
  }
  if (0x3fffffff < (int)uVar6) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar6 = 0x3fffffff;
  }
  uVar3 = -(uint)((int)((ulonglong)uVar6 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 0x10);
  puVar2 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
  if (puVar2 == (uint *)0x0) {
    pDStack_c = (Darray_L_struct_MaterialConstituent_G_ *)0x0;
  }
  else {
    *puVar2 = uVar6;
    pDStack_c = (Darray_L_struct_MaterialConstituent_G_ *)(puVar2 + 1);
    pDVar4 = pDStack_c;
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined ***)pDVar4 = (undefined **)(&vftable_15);
      *(undefined4 *)(pDVar4 + 4) = 0;
      *(undefined4 *)(pDVar4 + 8) = 0;
      *(undefined4 *)(pDVar4 + 0xc) = 0;
      pDVar4 = pDVar4 + 0x10;
    }
  }
  pDVar4 = *(Darray_L_struct_MaterialConstituent_G_ **)(this + 4);
  if (pDVar4 != (Darray_L_struct_MaterialConstituent_G_ *)0x0) {
    pDVar5 = pDStack_c + *(int *)(this + 8) * 0x10;
    this_00 = pDStack_c;
    pDVar7 = pDVar4;
    if (pDVar4 != pDVar4 + param_1 * 0x10) {
      do {
        if (this_00 == pDVar5) break;
        Darray_L_struct_MaterialConstituent_G___op_assign(this_00,pDVar7);
        pDVar7 = pDVar7 + 0x10;
        pDVar4 = *(Darray_L_struct_MaterialConstituent_G_ **)(this + 4);
        this_00 = this_00 + 0x10;
      } while (pDVar7 != pDVar4 + param_1 * 0x10);
    }
    if (pDVar4 != (Darray_L_struct_MaterialConstituent_G_ *)0x0) {
      if (*(int *)(pDVar4 + -4) == 0) {
        port_op_delete(pDVar4 + -4);
      }
      else {
        (**(code **)(*(int *)pDVar4 + 0x18))(3);
      }
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(Darray_L_struct_MaterialConstituent_G_ **)(this + 4) = pDStack_c;
  return bStack_5;
}





//==== 00544760 CheckSize_00544760 ====


/* private: bool  util__Darray_L_classutil__Darray_L_structMomentOfInertia__Particle_G___G___CheckSize(int) */

bool 
util__Darray_class_util__Darray_struct_MomentOfInertia__Particle_____CheckSize
          (Darray_L_class_util__Darray_L_struct_MomentOfInertia__Particle_G___G_ *this,int param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  Darray_L_struct_MomentOfInertia__Particle_G_ *pDVar4;
  Darray_L_struct_MomentOfInertia__Particle_G_ *pDVar5;
  Darray_L_struct_MomentOfInertia__Particle_G_ *this_00;
  uint uVar6;
  Darray_L_struct_MomentOfInertia__Particle_G_ *pDVar7;
  bool bVar8;
  Darray_L_struct_MomentOfInertia__Particle_G_ *pDStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar3 = *(uint *)(this + 8);
  bVar8 = -1 < (int)uVar3;
  bVar1 = !bVar8;
  if (bVar1) {
    pDStack_c = (Darray_L_struct_MomentOfInertia__Particle_G_ *)0x0;
    SetSize(this,(int *)&pDStack_c);
    uVar3 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar1;
  bVar1 = (int)uVar3 < 0x40000000;
  if (!bVar1) {
    pDStack_c = (Darray_L_struct_MomentOfInertia__Particle_G_ *)0x3fffffff;
    SetSize(this,(int *)&pDStack_c);
    uVar3 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar6 = *(uint *)(this + 0xc);
  if ((int)uVar3 <= (int)uVar6) {
    return bVar1 && bVar8;
  }
  if (uVar6 == 0) {
    *(uint *)(this + 0xc) = uVar3;
    uVar6 = uVar3;
  }
  if ((int)uVar6 < (int)uVar3) {
    do {
      uVar6 = uVar6 * 2;
    } while ((int)uVar6 < (int)uVar3);
    *(uint *)(this + 0xc) = uVar6;
  }
  if (0x3fffffff < (int)uVar6) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar6 = 0x3fffffff;
  }
  uVar3 = -(uint)((int)((ulonglong)uVar6 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 0x10);
  puVar2 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
  if (puVar2 == (uint *)0x0) {
    pDStack_c = (Darray_L_struct_MomentOfInertia__Particle_G_ *)0x0;
  }
  else {
    *puVar2 = uVar6;
    pDStack_c = (Darray_L_struct_MomentOfInertia__Particle_G_ *)(puVar2 + 1);
    pDVar4 = pDStack_c;
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined ***)pDVar4 = &vftable_115;
      *(undefined4 *)(pDVar4 + 4) = 0;
      *(undefined4 *)(pDVar4 + 8) = 0;
      *(undefined4 *)(pDVar4 + 0xc) = 0;
      pDVar4 = pDVar4 + 0x10;
    }
  }
  pDVar4 = *(Darray_L_struct_MomentOfInertia__Particle_G_ **)(this + 4);
  if (pDVar4 != (Darray_L_struct_MomentOfInertia__Particle_G_ *)0x0) {
    pDVar5 = pDStack_c + *(int *)(this + 8) * 0x10;
    this_00 = pDStack_c;
    pDVar7 = pDVar4;
    if (pDVar4 != pDVar4 + param_1 * 0x10) {
      do {
        if (this_00 == pDVar5) break;
        Darray_L_struct_MomentOfInertia__Particle_G___op_assign(this_00,pDVar7);
        pDVar7 = pDVar7 + 0x10;
        pDVar4 = *(Darray_L_struct_MomentOfInertia__Particle_G_ **)(this + 4);
        this_00 = this_00 + 0x10;
      } while (pDVar7 != pDVar4 + param_1 * 0x10);
    }
    if (pDVar4 != (Darray_L_struct_MomentOfInertia__Particle_G_ *)0x0) {
      if (*(int *)(pDVar4 + -4) == 0) {
        port_op_delete(pDVar4 + -4);
      }
      else {
        (**(code **)(*(int *)pDVar4 + 0x18))(3);
      }
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(Darray_L_struct_MomentOfInertia__Particle_G_ **)(this + 4) = pDStack_c;
  return bStack_5;
}





//==== 005448f0 CheckSizeDestructive_005448f0 ====


/* private: bool  util__Darray_L_structCrewJob_G___CheckSizeDestructive(void) */

bool __thiscall util__Darray_struct_CrewJob___CheckSizeDestructive(Darray_L_struct_CrewJob_G_ *this)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  bool bVar10;
  int *piStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  iVar5 = *(int *)(this + 8);
  bVar10 = iVar5 < 0;
  if (bVar10) {
    piStack_c = (int *)0x0;
    SetSize(this,(int *)&piStack_c);
    iVar5 = *(int *)(this + 8);
  }
  bStack_5 = !bVar10;
  if (0x3fffffff < iVar5) {
    piStack_c = (int *)0x3fffffff;
    SetSize(this,(int *)&piStack_c);
    iVar5 = *(int *)(this + 8);
    bStack_5 = false;
  }
  iVar7 = *(int *)(this + 0xc);
  if (iVar7 < iVar5) {
    if (iVar7 == 0) {
      *(int *)(this + 0xc) = iVar5;
      iVar7 = iVar5;
    }
    if (iVar7 < iVar5) {
      do {
        iVar7 = iVar7 * 2;
      } while (iVar7 < iVar5);
      *(int *)(this + 0xc) = iVar7;
    }
    if (0x3fffffff < iVar7) {
      *(undefined4 *)(this + 0xc) = 0x3fffffff;
    }
    iVar5 = *(int *)(this + 4);
    if (iVar5 != 0) {
      iVar7 = *(int *)(iVar5 + -4);
      piStack_c = (int *)(iVar5 + -4);
      if (iVar7 != 0) {
        puVar9 = (undefined4 *)(iVar7 * 0x20 + 4 + iVar5);
        do {
          puVar1 = puVar9 + -8;
          puVar9 = puVar9 + -8;
          iVar7 = iVar7 + -1;
          if ((void *)*puVar1 != (void *)0x0) {
            port_op_delete((void *)*puVar1);
            *puVar9 = 0;
          }
        } while (iVar7 != 0);
        iVar7 = *piStack_c;
      }
      port_op_delete(piStack_c,iVar7 * 0x20 + 4);
    }
    uVar8 = *(uint *)(this + 0xc);
    *(undefined4 *)(this + 4) = 0;
    uVar4 = -(uint)((int)((ulonglong)uVar8 * 0x20 >> 0x20) != 0) | (uint)((ulonglong)uVar8 * 0x20);
    puVar2 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
    if (puVar2 == (uint *)0x0) {
      puVar6 = (uint *)0x0;
    }
    else {
      *puVar2 = uVar8;
      puVar6 = puVar2 + 1;
      if (uVar8 != 0) {
        puVar3 = puVar2 + 4;
        puVar2 = puVar6;
        do {
          *puVar2 = 0;
          puVar2 = puVar2 + 8;
          puVar3[-2] = 0;
          puVar3[-1] = 0;
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = 0;
          *(undefined1 *)(puVar3 + 3) = 0;
          uVar8 = uVar8 - 1;
          puVar3 = puVar3 + 8;
        } while (uVar8 != 0);
        *(uint **)(this + 4) = puVar6;
        return bStack_5;
      }
    }
    *(uint **)(this + 4) = puVar6;
  }
  return bStack_5;
}





//==== 00544a70 CheckSizeDestructive_00544a70 ====


/* private: bool  util__Darray_L_classDesignStatusMessage_G___CheckSizeDestructive(void) */

bool 
util__Darray_class_DesignStatusMessage___CheckSizeDestructive
          (Darray_L_class_DesignStatusMessage_G_ *this)

{
  bool bVar1;
  uint *puVar2;
  DesignStatusMessage *this_00;
  LocStr *pLVar3;
  LocStr *pLVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  ModulePlacer *pMVar8;
  void *apvStack_6c [3];
  void *pvStack_60;
  void *apvStack_54 [3];
  void *pvStack_48;
  Str_L_char_G_ SStack_3c;
  Str_L_char_G_ SStack_30;
  Str_L_char_G_ SStack_24;
  Str_L_char_G_ SStack_18;
  DesignStatusMessage *pDStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar5 = *(uint *)(this + 8);
  bVar7 = -1 < (int)uVar5;
  bVar1 = !bVar7;
  if (bVar1) {
    pDStack_c = (DesignStatusMessage *)0x0;
    SetSize(this,(int *)&pDStack_c);
    uVar5 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar1;
  bVar1 = (int)uVar5 < 0x40000000;
  if (!bVar1) {
    pDStack_c = (DesignStatusMessage *)0x3fffffff;
    SetSize(this,(int *)&pDStack_c);
    uVar5 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar6 = *(uint *)(this + 0xc);
  if ((int)uVar5 <= (int)uVar6) {
    return bVar1 && bVar7;
  }
  if (uVar6 == 0) {
    *(uint *)(this + 0xc) = uVar5;
    uVar6 = uVar5;
  }
  if ((int)uVar6 < (int)uVar5) {
    do {
      uVar6 = uVar6 * 2;
    } while ((int)uVar6 < (int)uVar5);
    *(uint *)(this + 0xc) = uVar6;
  }
  if (0x3fffffff < (int)uVar6) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar6 = 0x3fffffff;
  }
  if (*(DesignStatusMessage **)(this + 4) != (DesignStatusMessage *)0x0) {
    DesignStatusMessage___vector_deleting_destructor(*(DesignStatusMessage **)(this + 4),3);
    uVar6 = *(uint *)(this + 0xc);
  }
  *(undefined4 *)(this + 4) = 0;
  uVar5 = -(uint)((int)((ulonglong)uVar6 * 0x54 >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 0x54);
  puVar2 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar5) | uVar5 + 4);
  if (puVar2 != (uint *)0x0) {
    *puVar2 = uVar6;
    this_00 = (DesignStatusMessage *)(puVar2 + 1);
    pDStack_c = this_00;
    while (uVar6 != 0) {
      pMVar8 = (ModulePlacer *)0x0;
      SStack_3c.Data = (char *)0x0;
      SStack_3c.Capacity = 0;
      SStack_3c.Length = 0;
      uVar6 = uVar6 - 1;
      SStack_30.Data = (char *)0x0;
      SStack_30.Capacity = 0;
      SStack_30.Length = 0;
      SStack_24.Data = (char *)0x0;
      SStack_24.Capacity = 0;
      SStack_24.Length = 0;
      SStack_18.Data = (char *)0x0;
      SStack_18.Capacity = 0;
      SStack_18.Length = 0;
      pLVar3 = (LocStr *)LocStr__LocStr((LocStr *)apvStack_6c,&SStack_30,&SStack_3c);
      pLVar4 = (LocStr *)LocStr__LocStr((LocStr *)apvStack_54,&SStack_18,&SStack_24);
      DesignStatusMessage__DesignStatusMessage(this_00,DesignMsg__Info,pLVar4,pLVar3,pMVar8);
      if (pvStack_48 != (void *)0x0) {
        port_op_delete(pvStack_48);
        pvStack_48 = (void *)0x0;
      }
      if (apvStack_54[0] != (void *)0x0) {
        port_op_delete(apvStack_54[0]);
        apvStack_54[0] = (void *)0x0;
      }
      if (SStack_18.Data != (char *)0x0) {
        port_op_delete(SStack_18.Data);
        SStack_18.Data = (char *)0x0;
      }
      if (SStack_24.Data != (char *)0x0) {
        port_op_delete(SStack_24.Data);
        SStack_24.Data = (char *)0x0;
      }
      if (pvStack_60 != (void *)0x0) {
        port_op_delete(pvStack_60);
        pvStack_60 = (void *)0x0;
      }
      if (apvStack_6c[0] != (void *)0x0) {
        port_op_delete(apvStack_6c[0]);
        apvStack_6c[0] = (void *)0x0;
      }
      if (SStack_30.Data != (char *)0x0) {
        port_op_delete(SStack_30.Data);
        SStack_30.Data = (char *)0x0;
      }
      if (SStack_3c.Data != (char *)0x0) {
        port_op_delete(SStack_3c.Data);
      }
      this_00 = (DesignStatusMessage *)&this_00[2].MessageType;
    }
    *(DesignStatusMessage **)(this + 4) = pDStack_c;
    return bStack_5;
  }
  *(undefined4 *)(this + 4) = 0;
  return bStack_5;
}





//==== 00544cd0 CleanupModulePositions ====


/* public: void __thiscall CraftBlueprint__CleanupModulePositions(void) */

void __thiscall CraftBlueprint__CleanupModulePositions(CraftBlueprint *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  Darray_L_struct_ModulePlacer_P_G_ *pDVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  void *pvStack_64;
  void *pvStack_54;
  undefined **ppuStack_48;
  void *pvStack_44;
  uint uStack_38;
  int iStack_34;
  undefined **ppuStack_30;
  void *pvStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined **ppuStack_20;
  void *pvStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 uStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  uStack_38 = uStack_38 & 0xffffff00;
  uStack_10 = 0;
  ppuStack_20 = (undefined **)0x0;
  pvStack_1c = (void *)0x0;
  uStack_18 = 0;
  uStack_14 = 0;
  GetEndCapperModules(this);
  pDVar2 = (Darray_L_struct_ModulePlacer_P_G_ *)GetNonSpinalModules(this);
  piVar3 = (int *)util__Join_struct_ModulePlacer
                            ((Darray_L_struct_ModulePlacer_P_G_ *)&ppuStack_48,pDVar2);
  ppuStack_30 = (undefined **)0x0;
  pvStack_2c = (void *)0x0;
  iStack_28 = 0;
  uStack_24 = 0;
  iVar4 = (**(code **)(uintptr_t)(*piVar3 + 0xc))();
  util__Darray_class_Manager____Darray_class_Manager((Darray_L_class_Manager_P_G_ *)&ppuStack_30,iVar4)
  ;
  iStack_c = 0;
  iVar4 = (**(code **)(uintptr_t)(*piVar3 + 0xc))();
  if (iStack_c < iVar4) {
    do {
      piVar5 = (int *)(**(code **)*piVar3)(&iStack_c);
      iVar4 = iStack_28;
      if (0 < *(int *)(*piVar5 + 0x20)) {
        iStack_34 = iStack_28 + 1;
        util__Darray_class_util__Reflectable____SetSize
                  ((Darray_L_class_util__Reflectable_P_G_ *)&ppuStack_30,&iStack_34);
        bVar1 = util__Darray_enum_GraphicsResource__Type___CheckSize
                          ((Darray_L_enum_GraphicsResource__Type_G_ *)&ppuStack_30,iVar4);
        if (bVar1) {
          *(int *)((int)pvStack_2c + iStack_28 * 4 + -4) = *piVar5;
        }
      }
      iStack_c = iStack_c + 1;
      iVar4 = (**(code **)(uintptr_t)(*piVar3 + 0xc))();
    } while (iStack_c < iVar4);
  }
  FUN_00539130(&ppuStack_20,&ppuStack_30,uStack_38);
  ppuStack_30 = (undefined **)(&vftable_2);
  if (pvStack_2c != (void *)0x0) {
    port_op_delete(pvStack_2c);
  }
  pvStack_2c = (void *)0x0;
  ppuStack_30 = (undefined **)(&vftable);
  ppuStack_48 = (undefined **)(&vftable_2);
  if (pvStack_44 != (void *)0x0) {
    port_op_delete(pvStack_44);
  }
  pvStack_44 = (void *)0x0;
  ppuStack_48 = (undefined **)(&vftable);
  if (pvStack_54 != (void *)0x0) {
    port_op_delete(pvStack_54);
  }
  if (pvStack_64 != (void *)0x0) {
    port_op_delete(pvStack_64);
  }
  iStack_c = 0;
  iVar4 = (*(code *)ppuStack_20[3])();
  if (iStack_c < iVar4) {
    do {
      iVar4 = iStack_c + 1;
      piVar3 = (int *)(*(code *)*ppuStack_20)(&iStack_c);
      *(int *)(*piVar3 + 0x20) = iVar4;
      iStack_c = iStack_c + 1;
      iVar4 = (*(code *)ppuStack_20[3])();
    } while (iStack_c < iVar4);
  }
  ppuStack_20 = (undefined **)(&vftable_2);
  if (pvStack_1c != (void *)0x0) {
    port_op_delete(pvStack_1c);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00544ea0 Clear_00544ea0 ====


/* public: virtual void  util__Darray_L_structutil__tuple2_L_structCraftSplinePoint_Cstruct_CraftSplinePoint_G__G___Clear(void) */

void 
util__Darray_struct_util__tuple2_struct_CraftSplinePoint_struct_CraftSplinePoint_____Clear
          (Darray_L_struct_util__tuple2_L_struct_CraftSplinePoint_Cstruct_CraftSplinePoint_G___G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 00544ec0 Clear_00544ec0 ====


/* public: virtual void  util__Darray_L_structutil__tuple2_L_enumBriefingSubject__Type_Cclass_util__Str_L_char_G__G__G___Clear(void) */

void 
util__Darray_struct_util__tuple2_enum_BriefingSubject__Type_class_util__Str_char_______Clear
          (Darray_L_struct_util__tuple2_L_enum_BriefingSubject__Type_Cclass_util__Str_L_char_G___G___G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 00544ee0 Clear_00544ee0 ====


/* public: virtual void  util__Darray_L_structCrewJob_G___Clear(void) */

void __thiscall util__Darray_struct_CrewJob___Clear(Darray_L_struct_CrewJob_G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 00544f00 Clear_00544f00 ====


/* public: virtual void  util__Darray_L_structInfoBox_G___Clear(void) */

void __thiscall util__Darray_struct_InfoBox___Clear(Darray_L_struct_InfoBox_G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 00544f20 Clear_00544f20 ====


/* public: virtual void  util__Darray_L_structModulePlacer_G___Clear(void) */

void __thiscall util__Darray_struct_ModulePlacer___Clear(Darray_L_struct_ModulePlacer_G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 00544f40 Clear_00544f40 ====


/* public: virtual void  util__Darray_L_classutil__Darray_L_structMaterialConstituent_G___G___Clear(void) */

void 
util__Darray_class_util__Darray_struct_MaterialConstituent_____Clear
          (Darray_L_class_util__Darray_L_struct_MaterialConstituent_G___G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 00544f60 Clear_00544f60 ====


/* public: virtual void  util__Darray_L_classutil__Darray_L_structMomentOfInertia__Particle_G___G___Clear(void) */

void 
util__Darray_class_util__Darray_struct_MomentOfInertia__Particle_____Clear
          (Darray_L_class_util__Darray_L_struct_MomentOfInertia__Particle_G___G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 00544f80 ClearUntypedTuple_00544f80 ====


/* public: static void __cdecl ModulePlacer__ClearUntypedTuple(void *) */

void __cdecl ModulePlacer__ClearUntypedTuple(void *param_1)

{
  undefined4 uStack_18;
  undefined4 uStack_8;
  
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((int)param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 8) = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined4 *)((int)param_1 + 0x10) = 0;
  *(undefined4 *)((int)param_1 + 0x14) = uStack_18;
  *(undefined4 *)((int)param_1 + 0x18) = 0;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  *(ulonglong *)((int)param_1 + 0x20) = (ulonglong)uStack_8 << 0x20;
  return;
}





//==== 00544fd0 ClearUselessModules ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: bool __thiscall CraftBlueprint__ClearUselessModules(void) */

bool __thiscall CraftBlueprint__ClearUselessModules(CraftBlueprint *this)

{
  undefined8 stack0xfffffffc;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CraftBlueprintArmor *pCVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  bool bVar10;
  int local_28;
  CraftBlueprint *local_24;
  Darray_L_ModulePlacer_G_ *local_20;
  undefined **local_1c;
  void *pvStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_20 = (Darray_L_ModulePlacer_G_ *)&(this->MaterialClass__Armor).ArmorLayers.Data;
  local_1c = (undefined **)(&vftable_2);
  pvStack_18 = (void *)0x0;
  iStack_14 = 0;
  uStack_10 = 0;
  local_24 = this;
  FUN_00536c90(local_20,this,&local_1c);
  local_c = iStack_14;
  do {
    local_c = local_c + -1;
    if (local_c < 0) {
      (**(code **)(this->_pad_0x0_0 + 0x70))();
      bVar10 = iStack_14 == 0;
      local_1c = (undefined **)(&vftable_2);
      if (pvStack_18 != (void *)0x0) {
        port_op_delete(pvStack_18);
      }
      return bVar10;
    }
    iVar9 = 0;
    iVar7 = (this->MaterialClass__Armor).ArmorLayers.Size;
    if (iVar7 != iVar7 + (this->MaterialClass__Armor).ArmorLayers.Capacity * 0x28) {
      do {
        piVar5 = (int *)(*(code *)*local_1c)(&local_c);
        if (iVar7 == *piVar5) goto LAB_00545083;
        iVar7 = iVar7 + 0x28;
        iVar9 = iVar9 + 1;
      } while (iVar7 != (this->MaterialClass__Armor).ArmorLayers.Size + (this->MaterialClass__Armor).ArmorLayers.Capacity * 0x28);
    }
    iVar9 = 0;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
LAB_00545083:
    iVar7 = (**(code **)((int)&((this->MaterialClass__Armor).ArmorLayers.Data)->Thickness_m + 4))();
    if (iVar7 != 0) {
      iVar7 = (**(code **)((int)&((this->MaterialClass__Armor).ArmorLayers.Data)->Thickness_m + 4))();
      if (((iVar9 < 1) && (iVar7 + -1 <= iVar9)) || ((iVar9 <= iVar7 + -1 && (-1 < iVar9)))) {
        pCVar4 = &this->MaterialClass__Armor;
        bVar10 = false;
        puVar6 = (undefined4 *)(this->MaterialClass__Armor).ArmorLayers.Size;
        iVar7 = 0;
        this = local_24;
        if (puVar6 != puVar6 + (pCVar4->ArmorLayers).Capacity * 10) {
          puVar8 = puVar6 + -10;
          do {
            if (bVar10) {
              uVar1 = puVar6[1];
              uVar2 = puVar6[2];
              uVar3 = puVar6[3];
              *puVar8 = *puVar6;
              puVar8[1] = uVar1;
              puVar8[2] = uVar2;
              puVar8[3] = uVar3;
              uVar1 = puVar6[5];
              uVar2 = puVar6[6];
              uVar3 = puVar6[7];
              puVar8[4] = puVar6[4];
              puVar8[5] = uVar1;
              puVar8[6] = uVar2;
              puVar8[7] = uVar3;
              uVar1 = puVar6[9];
              puVar8[8] = puVar6[8];
              puVar8[9] = uVar1;
            }
            else if (iVar7 == iVar9) {
              bVar10 = true;
            }
            iVar7 = iVar7 + 1;
            puVar6 = puVar6 + 10;
            puVar8 = puVar8 + 10;
          } while (puVar6 != (undefined4 *)((int)local_20->Data + local_20->Size * 0x28));
          *(uint32_t *)&local_28 = iVar7;
          if (bVar10) {
            *(uint32_t *)&local_28 = local_20->Size + -1;
            util__Darray_L_ModulePlacer_G___SetSize(local_20,&local_28);
            this = local_24;
          }
        }
      }
    }
  } while( true );
}

//==== 00545180 CopyUntypedTuple_00545180 ====


/* public: static void __cdecl ModulePlacer__CopyUntypedTuple(void *,void *) */

void __cdecl ModulePlacer__CopyUntypedTuple(void *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
                    /* WARNING: Load optimize_e__size is inaccurate */
  uVar1 = *(undefined4 *)((int)param_2 + 4);
  uVar2 = *(undefined4 *)((int)param_2 + 8);
  uVar3 = *(undefined4 *)((int)param_2 + 0xc);
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  *(undefined4 *)((int)param_1 + 4) = uVar1;
  *(undefined4 *)((int)param_1 + 8) = uVar2;
  *(undefined4 *)((int)param_1 + 0xc) = uVar3;
  uVar1 = *(undefined4 *)((int)param_2 + 0x14);
  uVar2 = *(undefined4 *)((int)param_2 + 0x18);
  uVar3 = *(undefined4 *)((int)param_2 + 0x1c);
  *(undefined4 *)((int)param_1 + 0x10) = *(undefined4 *)((int)param_2 + 0x10);
  *(undefined4 *)((int)param_1 + 0x14) = uVar1;
  *(undefined4 *)((int)param_1 + 0x18) = uVar2;
  *(undefined4 *)((int)param_1 + 0x1c) = uVar3;
  *(undefined8 *)((int)param_1 + 0x20) = *(undefined8 *)((int)param_2 + 0x20);
  return;
}





//==== 005451b0 Dememoize ====

/* public: void __thiscall CraftBlueprint__Dememoize(void) */

void __thiscall CraftBlueprint__Dememoize(CraftBlueprint *this)

{
  (**(code **)(this->_pad_0x0_0 + 0x70))();
                    /* WARNING: Could not recover jumptable at 0x005451bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->MaterialClass__Armor).CraftBlueprintArmorMemoizationHandlerInstance.ResetFunctions.Size + 100
              ))();
  return;
}

//==== 005451d0 DememoizeAll_005451d0 ====


/* public: virtual void __thiscall CraftBlueprint__DememoizeAll(void)const  */

void __thiscall CraftBlueprint__DememoizeAll(CraftBlueprint *this)

{
  undefined8 stack0xfffffffc;
  Module ***pppMVar1;
  int iVar2;
  undefined4 *puVar3;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iStack_c = 0;
  pppMVar1 = &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data;
  iVar2 = (*(code *)(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data[3])();
  if (iStack_c < iVar2) {
    do {
      puVar3 = (undefined4 *)(*(code *)**pppMVar1)(&iStack_c);
      (*(code *)*puVar3)();
      iStack_c = iStack_c + 1;
      iVar2 = (*(code *)(*pppMVar1)[3])();
    } while (iStack_c < iVar2);
  }
  (*(code *)(*pppMVar1)[4])();
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00545240 DoesEngineNotHaveReactionMass ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: bool __thiscall CraftBlueprint__DoesEngineNotHaveReactionMass(struct ModulePlacer const
   &)const  */

bool __thiscall
CraftBlueprint__DoesEngineNotHaveReactionMass(CraftBlueprint *this,ModulePlacer *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  Darray_L_bool_P_G_ *pDVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  Darray_L_MaterialConstituent_G_ local_54;
  undefined **local_44;
  void *local_40;
  undefined **local_34;
  void *local_30;
  int local_24;
  undefined **local_20;
  void *pvStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar1 = (**(code **)(param_1->ModuleType->_pad_0x0_0 + 0x130))();
  if (iVar1 != 5) {
    return false;
  }
  local_20 = (undefined **)0x0;
  pvStack_1c = (void *)0x0;
  uStack_18 = 0;
  uStack_14 = 0;
  (**(code **)(param_1->ModuleType->_pad_0x0_0 + 0x170))(&local_34);
  pDVar2 = (Darray_L_bool_P_G_ *)util__Unzip_L_Material_const_P_Cdouble_CMaterialConstituent_G_(&local_54);
  util__Darray_bool____Darray_bool((Darray_L_bool_P_G_ *)&local_20,pDVar2);
  *(uint32_t *)&local_44 = (uint32_t)(uintptr_t)(&vftable_63);
  if (local_40 != (void *)0x0) {
    port_op_delete(local_40);
  }
  local_40 = (void *)0x0;
  *(uint32_t *)&local_44 = (uint32_t)(uintptr_t)(&vftable);
  local_54._pad_0x0_0 = (int)&vftable_2;
  if (local_54.Data != (MaterialConstituent *)0x0) {
    port_op_delete(local_54.Data);
  }
  local_54.Data = (MaterialConstituent *)0x0;
  local_54._pad_0x0_0 = (int)&vftable;
  *(uint32_t *)&local_34 = (uint32_t)(uintptr_t)(&vftable_15);
  if (local_30 != (void *)0x0) {
    port_op_delete(local_30);
  }
  local_10 = 0;
  iVar1 = (*(code *)local_20[3])();
  if (local_10 < iVar1) {
    do {
      piVar3 = (int *)(*(code *)*local_20)(&local_10);
      local_24 = *piVar3;
      piVar3 = (int *)GetReactionMassModules(this);
      local_c = 0;
      iVar1 = (**(code **)(uintptr_t)(*piVar3 + 0xc))();
      if (local_c < iVar1) {
        do {
          piVar4 = (int *)(**(code **)*piVar3)(&local_c);
          if (*(int *)(*piVar4 + 0x70) == local_24) {
            bVar5 = true;
            goto LAB_00545376;
          }
          local_c = local_c + 1;
          iVar1 = (**(code **)(uintptr_t)(*piVar3 + 0xc))();
        } while (local_c < iVar1);
      }
      bVar5 = false;
LAB_00545376:
      *(uint32_t *)&local_34 = (uint32_t)(uintptr_t)(&vftable_2);
      if (local_30 != (void *)0x0) {
        port_op_delete(local_30);
      }
      *(uint32_t *)&local_30 = (uint32_t)(uintptr_t)((void *)0x0);
      *(uint32_t *)&local_34 = (uint32_t)(uintptr_t)(&vftable);
      if (!bVar5) {
        bVar5 = true;
        goto LAB_005453b6;
      }
      local_10 = local_10 + 1;
      iVar1 = (*(code *)local_20[3])();
    } while (local_10 < iVar1);
  }
  bVar5 = false;
LAB_005453b6:
  local_20 = (undefined **)(&vftable_2);
  if (pvStack_1c != (void *)0x0) {
    port_op_delete(pvStack_1c);
  }
  return bVar5;
}

//==== 005453f0 DoesModuleHaveAmmo ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: bool __thiscall CraftBlueprint__DoesModuleHaveAmmo(struct ModulePlacer const &)const  */

bool __thiscall CraftBlueprint__DoesModuleHaveAmmo(CraftBlueprint *this,ModulePlacer *param_1)

{
  undefined8 stack0xfffffffc;
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  void *local_34;
  int local_28;
  undefined **local_24;
  void *pvStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  uint local_14;
  ModulePlacer *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_14 = 0;
  iVar4 = (**(code **)(param_1->ModuleType->_pad_0x0_0 + 0x130))();
  if (iVar4 == 0) {
    cVar2 = (**(code **)(param_1->ModuleType->_pad_0x0_0 + 0x180))();
    if (cVar2 != '\0') {
      iVar4 = (**(code **)(param_1->ModuleType->_pad_0x0_0 + 0x184))();
      if (iVar4 < 1) {
        local_10 = param_1;
        piVar5 = (int *)GetModulePlacers(this);
        local_24 = (undefined **)0x0;
        pvStack_20 = (void *)0x0;
        iStack_1c = 0;
        uStack_18 = 0;
        iVar4 = (**(code **)(uintptr_t)(*piVar5 + 0xc))();
        util__Darray_L_Manager_P_G___Darray_L_Manager_P_G_((Darray_L_Manager_P_G_ *)&local_24,iVar4);
        local_c = 0;
        iVar4 = (**(code **)(uintptr_t)(*piVar5 + 0xc))();
        if (local_c < iVar4) {
          do {
            puVar6 = (undefined4 *)(**(code **)*piVar5)(&local_c);
            piVar1 = (int *)*puVar6;
            iVar7 = (**(code **)(*(int *)*piVar1 + 0x130))();
            iVar4 = iStack_1c;
            if ((iVar7 == 2) && (*(Module **)(*piVar1 + 0x80) == local_10->ModuleType)) {
              *(uint32_t *)&local_28 = iStack_1c + 1;
              util__Darray_L_util__Reflectable_P_G___SetSize
                        ((Darray_L_util__Reflectable_P_G_ *)&local_24,&local_28);
              bVar3 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                                ((Darray_L_GraphicsResource__Type_G_ *)&local_24,iVar4);
              if (bVar3) {
                *(undefined4 *)((int)pvStack_20 + iStack_1c * 4 + -4) = *puVar6;
              }
            }
            local_c = local_c + 1;
            iVar4 = (**(code **)(uintptr_t)(*piVar5 + 0xc))();
          } while (local_c < iVar4);
        }
        if (local_34 != (void *)0x0) {
          port_op_delete(local_34);
        }
        local_14 = 1;
        iVar4 = (**(code **)((int)local_24 + 0xc))();
        if (iVar4 < 1) {
          bVar3 = false;
          uVar8 = 1;
          goto LAB_00545523;
        }
      }
    }
  }
  bVar3 = true;
  uVar8 = local_14;
LAB_00545523:
  if ((uVar8 & 1) != 0) {
    local_24 = (undefined **)(&vftable_2);
    if (pvStack_20 != (void *)0x0) {
      port_op_delete(pvStack_20);
    }
  }
  return bVar3;
}

//==== 00545560 DoesRefuelerNotHaveReactionMass ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: bool __thiscall CraftBlueprint__DoesRefuelerNotHaveReactionMass(struct ModulePlacer const
   &)const  */

bool __thiscall
CraftBlueprint__DoesRefuelerNotHaveReactionMass(CraftBlueprint *this,ModulePlacer *param_1)

{
  undefined8 stack0xfffffffc;
  Module *pMVar1;
  ulong uVar2;
  ulong uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  void *local_18;
  CraftBlueprint *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pMVar1 = param_1->ModuleType;
  local_c = this;
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_bd5af489__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_fd73c9b7__thread_safe_static_guard_0__);
    if ( cde_l2_fd73c9b7__thread_safe_static_guard_0__ == -1) {
       cde_l2_03067f35_ID =
           util__GetHash("RefuelerModule");
      _Init_thread_footer(& cde_l2_fd73c9b7__thread_safe_static_guard_0__);
    }
  }
  uVar2 =  cde_l2_03067f35_ID;
  uVar3 = (**(code **)&((pMVar1->GetTotalPowerUsage_W_MemoizedValue).field_0xc))();
  if (uVar3 != uVar2) {
    return false;
  }
  piVar4 = (int *)GetReactionMassModules(local_c);
  local_c = (CraftBlueprint *)0x0;
  iVar5 = (**(code **)(uintptr_t)(*piVar4 + 0xc))();
  if ((int)local_c < iVar5) {
    do {
      piVar6 = (int *)(**(code **)*piVar4)(&local_c);
      if (*(pmf_27707b45 **)(*piVar6 + 0x70) ==
          param_1->ModuleType[2].ModuleMemoizationHandlerInstance.ResetFunctions.Data) {
        bVar7 = false;
        goto LAB_0054560d;
      }
      local_c = (CraftBlueprint *)((int)&local_c->_pad_0x0_0 + 1);
      iVar5 = (**(code **)(uintptr_t)(*piVar4 + 0xc))();
    } while ((int)local_c < iVar5);
  }
  bVar7 = true;
LAB_0054560d:
  if (local_18 != (void *)0x0) {
    port_op_delete(local_18);
  }
  return bVar7;
}

//==== 00545680 EmitsAnyHeat ====


/* public: bool __thiscall CraftBlueprint__EmitsAnyHeat(void)const  */

bool __thiscall CraftBlueprint__EmitsAnyHeat(CraftBlueprint *this)

{
  double dVar1;
  
  dVar1 = GetPeakHeatSignature_W(this);
  return 0.0 < dVar1;
}





//==== 005456b0 FinalizeData ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall CraftBlueprint__FinalizeData(class DataParser *) */

void __thiscall CraftBlueprint__FinalizeData(CraftBlueprint *this,DataParser *param_1)

{
  undefined8 stack0xfffffffc;
  ArmorLayerBlueprint **this_00;
  Module *this_01;
  Darray_L_struct_ModulePlacer_G_ *pDVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined **local_1c;
  void *local_18;
  uint local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = local_c & 0xffffff00;
  this_00 = &(this->MaterialClass__Armor).ArmorLayers.Data;
  pDVar1 = (Darray_L_struct_ModulePlacer_G_ *)FUN_00534450(&local_1c,this_00,local_c);
  util__Darray_L_ModulePlacer_G___op_assign((Darray_L_ModulePlacer_G_ *)this_00,pDVar1);
  local_1c = &vftable_121;
  if (local_18 != (void *)0x0) {
    port_op_delete(local_18);
  }
  piVar2 = (int *)GetModules(this);
  local_c = 0;
  iVar3 = (**(code **)(uintptr_t)(*piVar2 + 0xc))();
  if ((int)local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)*piVar2)(&local_c);
      this_01 = (Module *)*puVar4;
      Module__FullDememoize(this_01);
      (**(code **)(this_01->_pad_0x0_0 + 0x144))(param_1);
      Module__UpdateName(this_01,param_1);
      local_c = local_c + 1;
      iVar3 = (**(code **)(uintptr_t)(*piVar2 + 0xc))();
    } while ((int)local_c < iVar3);
  }
  local_1c = (undefined **)(&vftable_6);
  if (local_18 != (void *)0x0) {
    port_op_delete(local_18);
  }
  CleanupModulePositions(this);
  (**(code **)(this->_pad_0x0_0 + 0x70))();
  (**(code **)((this->MaterialClass__Armor).CraftBlueprintArmorMemoizationHandlerInstance.ResetFunctions.Size + 100
              ))();
  return;
}

//==== 005457a0 Find_005457a0 ====


/* public: class util__Darray_L_classutil__WeakPtr_L_structModuleCompartment_G__G_ * 
   util__AssocArray_class_Module__class_util__Darray_class_util__WeakPtr_struct_ModuleCompartment_______Find(class Module * const &)const  */

Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ * 
util__AssocArray_class_Module__class_util__Darray_class_util__WeakPtr_struct_ModuleCompartment_______Find__o2(AssocArray_L_class_Module_P_Cclass_util__Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G___G_
       *this,Module **param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = *(uint *)(this + 8);
  if (uVar3 != 0) {
    for (uVar4 = (uint)((int)*param_1 * -0x61c8864f) % uVar3; (int)uVar4 < 0; uVar4 = uVar4 + uVar3)
    {
    }
    if ((int)uVar3 <= (int)uVar4) {
      uVar4 = (int)uVar4 % (int)uVar3;
    }
    cVar2 = *(char *)(*(int *)(this + 4) + uVar4);
    for (iVar5 = 0; (cVar2 != '\0' && (iVar5 < (int)uVar3)); iVar5 = iVar5 + 1) {
      piVar1 = (int *)(*(int *)this + uVar4 * 0x14);
      if ((Module *)*piVar1 == *param_1) {
        return (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)(piVar1 + 1);
      }
      for (uVar4 = uVar4 + 1; (int)uVar4 < 0; uVar4 = uVar4 + uVar3) {
      }
      if ((int)uVar3 <= (int)uVar4) {
        uVar4 = (int)uVar4 % (int)uVar3;
      }
      cVar2 = *(char *)(*(int *)(this + 4) + uVar4);
    }
  }
  return (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)0x0;
}





//==== 00545830 FindIndex ====


/* public: class util__Maybe_L_int_G_  util__Darray_L_structModulePlacer_P_G___FindIndex(struct
   ModulePlacer * const &)const  */

Maybe_L_int_G_ 
util__Darray_struct_ModulePlacer____FindIndex
          (Darray_L_struct_ModulePlacer_P_G_ *this,ModulePlacer **param_1)

{
  int *piVar1;
  int *piVar2;
  ModulePlacer *pMVar3;
  Maybe_L_int_G_ MVar4;
  Maybe_L_int_G_ MVar5;
  int *in_stack_00000008;
  
  piVar2 = *(int **)(this + 4);
  pMVar3 = (ModulePlacer *)0x0;
  piVar1 = piVar2 + *(int *)(this + 8);
  if (piVar2 != piVar1) {
    do {
      if (*piVar2 == *in_stack_00000008) {
        *param_1 = pMVar3;
        *(undefined1 *)(param_1 + 1) = 1;
        (*(uint32_t*)((char*)&(MVar5)+4)) = (uint32_t)(uintptr_t)(pMVar3);
        MVar5.Data = (int)param_1;
      }
      piVar2 = piVar2 + 1;
      pMVar3 = (ModulePlacer *)((int)&pMVar3->ModuleType + 1);
    } while (piVar2 != piVar1);
  }
  *param_1 = (ModulePlacer *)0x0;
  *(undefined1 *)(param_1 + 1) = 0;
  (*(uint32_t*)((char*)&(MVar4)+4)) = (uint32_t)(uintptr_t)(pMVar3);
  MVar4.Data = (int)param_1;
  return MVar4;
}





//==== 00545880 FinishAllData ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: static void __cdecl CraftBlueprint__FinishAllData(class DataParser *) */

void __cdecl CraftBlueprint__FinishAllData(DataParser *param_1)

{
  undefined8 stack0xfffffffc;
  ArmorLayerBlueprint **this;
  CraftBlueprint *this_00;
  Module *this_01;
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  Darray_L_struct_ModulePlacer_G_ *pDVar5;
  undefined **local_50;
  void *local_4c;
  undefined **local_40;
  void *local_3c;
  undefined **local_30;
  void *local_2c;
  int *local_20;
  uint local_1c;
  DataParser *local_18;
  DataParser *local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_18 = param_1;
  piVar2 = (int *)util__SerializationManagerInterface__GetTypedDataOfType_L_CraftBlueprint_G_
                            ((SerializationManagerInterface *)param_1,SUB41(&local_50,0));
  local_10 = 0;
  local_20 = piVar2;
  iVar3 = (**(code **)(uintptr_t)(*piVar2 + 0xc))();
  if (local_10 < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)*piVar2)(&local_10);
      local_1c = local_1c & 0xffffff00;
      this_00 = (CraftBlueprint *)*puVar4;
      local_14 = local_18;
      this = &(this_00->MaterialClass__Armor).ArmorLayers.Data;
      pDVar5 = (Darray_L_struct_ModulePlacer_G_ *)FUN_00534450(&local_30,this,local_1c);
      util__Darray_L_ModulePlacer_G___op_assign((Darray_L_ModulePlacer_G_ *)this,pDVar5);
      *(uint32_t *)&local_30 = (uint32_t)(uintptr_t)(&vftable_121);
      if (local_2c != (void *)0x0) {
        port_op_delete(local_2c);
      }
      *(uint32_t *)&local_2c = (uint32_t)(uintptr_t)((void *)0x0);
      *(uint32_t *)&local_30 = (uint32_t)(uintptr_t)(&vftable);
      piVar2 = (int *)GetModules(this_00);
      local_c = 0;
      iVar3 = (**(code **)(uintptr_t)(*piVar2 + 0xc))();
      if (local_c < iVar3) {
        do {
          puVar4 = (undefined4 *)(**(code **)*piVar2)(&local_c);
          this_01 = (Module *)*puVar4;
          Module__FullDememoize(this_01);
          (**(code **)(this_01->_pad_0x0_0 + 0x144))(local_14);
          Module__UpdateName(this_01,local_14);
          local_c = local_c + 1;
          iVar3 = (**(code **)(uintptr_t)(*piVar2 + 0xc))();
        } while (local_c < iVar3);
      }
      local_40 = (undefined **)(&vftable_6);
      if (local_3c != (void *)0x0) {
        port_op_delete(local_3c);
      }
      *(uint32_t *)&local_3c = (uint32_t)(uintptr_t)((void *)0x0);
      local_40 = (undefined **)(&vftable);
      CleanupModulePositions(this_00);
      (**(code **)(this_00->_pad_0x0_0 + 0x70))();
      (**(code **)((this_00->MaterialClass__Armor).CraftBlueprintArmorMemoizationHandlerInstance.ResetFunctions.
                   Size + 100))();
      (**(code **)(this_00->_pad_0x0_0 + 0x70))();
      do {
        bVar1 = ClearUselessModules(this_00);
      } while (!bVar1);
      CleanupModulePositions(this_00);
      (**(code **)(this_00->_pad_0x0_0 + 0x70))();
      (**(code **)((this_00->MaterialClass__Armor).CraftBlueprintArmorMemoizationHandlerInstance.ResetFunctions.
                   Size + 100))();
      piVar2 = local_20;
      local_10 = local_10 + 1;
      iVar3 = (**(code **)(uintptr_t)(*local_20 + 0xc))();
    } while (local_10 < iVar3);
  }
  local_50 = (undefined **)(&vftable_2);
  if (local_4c != (void *)0x0) {
    port_op_delete(local_4c);
  }
  return;
}

//==== 00545a20 FullUpdate ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall CraftBlueprint__FullUpdate(void) */

void __thiscall CraftBlueprint__FullUpdate(CraftBlueprint *this)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  (**(code **)(this->_pad_0x0_0 + 0x70))();
  (**(code **)((this->MaterialClass__Armor).CraftBlueprintArmorMemoizationHandlerInstance.ResetFunctions.Size + 100
              ))();
  local_c = 0;
  iVar2 = (**(code **)((this->MaterialClass__Armor).GetInnerArmorSpline_m_MemoizedValue.Data.Capacity + 0xc))();
  if (local_c < iVar2) {
    do {
      iVar2 = (**(code **)(this->MaterialClass__Armor).GetInnerArmorSpline_m_MemoizedValue.Data.Capacity)(&local_c)
      ;
      dVar5 = *(double *)(iVar2 + 0x28);
      if (0.0 < dVar5) {
        if (dVar5 == 1.0) goto LAB_00545a98;
      }
      else {
        *(undefined8 *)(iVar2 + 0x28) = 0x3ff0000000000000;
        dVar5 = 1.0;
LAB_00545a98:
        *(undefined8 *)(iVar2 + 0x30) = 0;
      }
      dVar4 = *(double *)(iVar2 + 0x20);
      if (dVar4 <= 0.0) {
        *(undefined8 *)(iVar2 + 0x20) = 0x3ff0000000000000;
        dVar4 = 1.0;
      }
      if (dVar5 <= 0.0) {
        dVar5 = 0.0;
      }
      dVar3 = *(double *)(iVar2 + 0x18);
      if (*(double *)(iVar2 + 0x18) <= dVar4) {
        dVar3 = dVar4;
      }
      iVar1 = (this->MaterialClass__Armor).GetInnerArmorSpline_m_MemoizedValue.Data.Capacity;
      if (1.0 <= dVar5) {
        dVar5 = 1.0;
      }
      if (dVar3 <= 0.0) {
        dVar3 = 0.0;
      }
      if (1.0 <= dVar3) {
        dVar3 = 1.0;
      }
      *(double *)(iVar2 + 0x20) = dVar3;
      dVar4 = *(double *)(iVar2 + 0x18);
      if (dVar4 <= 0.0) {
        dVar4 = 0.0;
      }
      if (1.0 <= dVar4) {
        dVar4 = 1.0;
      }
      *(double *)(iVar2 + 0x18) = dVar4;
      *(double *)(iVar2 + 0x28) = dVar5;
      dVar5 = *(double *)(iVar2 + 0x30);
      if (dVar5 <= 0.0) {
        dVar5 = 0.0;
      }
      if (1.0 <= dVar5) {
        dVar5 = 1.0;
      }
      *(double *)(iVar2 + 0x30) = dVar5;
      local_c = local_c + 1;
      iVar2 = (**(code **)(uintptr_t)(iVar1 + 0xc))();
    } while (local_c < iVar2);
  }
  ClearUselessModules(this);
  CleanupModulePositions(this);
  CraftBlueprintArmor__GenerateArmorVertexObjects
            ((CraftBlueprintArmor *)
             &(this->MaterialClass__Armor).CraftBlueprintArmorMemoizationHandlerInstance.ResetFunctions.Size);
  return;
}

//==== 00545b40 GetAllCompartmentBoundaryPoints_km_Clear ====


/* public: void __thiscall CraftBlueprint__GetAllCompartmentBoundaryPoints_km_Clear(void)const  */

void __thiscall CraftBlueprint__GetAllCompartmentBoundaryPoints_km_Clear(CraftBlueprint *this)

{
  AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cclass_util__Darray_L_struct_util__Vec3_L_double_G___G___G_
  *pAVar1;
  tuple2_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cclass_util__Darray_L_struct_util__Vec3_L_double_G___G___G_
  *ptStack_14;
  void *pvStack_10;
  int iStack_8;
  
  iStack_8 = 0;
  pAVar1 = (AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cclass_util__Darray_L_struct_util__Vec3_L_double_G___G___G_
            *)util__AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__class_util__Darray_struct_util__Vec3_double_______AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__class_util__Darray_struct_util__Vec3_double
                        ((AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cclass_util__Darray_L_struct_util__Vec3_L_double_G___G___G_
                          *)&ptStack_14,&iStack_8);
  util__AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__class_util__Darray_struct_util__Vec3_double_______operator((AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cclass_util__Darray_L_struct_util__Vec3_L_double_G___G___G_
               *)&this->GetAllCompartmentIntersections_MemoizedValue,pAVar1);
  if (ptStack_14 !=
      (tuple2_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cclass_util__Darray_L_struct_util__Vec3_L_double_G___G___G_
       *)0x0) {
    util__tuple2_struct_util__tuple2_struct_ModulePlacer_const__int__class_util__Darray_struct_util__Vec3_double________vector_deleting_destructor(ptStack_14,3);
  }
  if (pvStack_10 != (void *)0x0) {
    port_op_delete(pvStack_10);
  }
  (this->GetAllCompartmentIntersections_MemoizedValue).IsValidData = false;
  return;
}





//==== 00545b90 GetAllCompartmentBoundaryPoints_km_Memoize ====


/* public: void __thiscall CraftBlueprint__GetAllCompartmentBoundaryPoints_km_Memoize(void)const  */

void __thiscall CraftBlueprint__GetAllCompartmentBoundaryPoints_km_Memoize(CraftBlueprint *this)

{
  undefined8 stack0xfffffffc;
  CraftBlueprint *pCVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ArmorLayerBlueprint **ppAVar5;
  int iVar6;
  undefined **ppuStack_a8;
  void *pvStack_a4;
  tuple2_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cclass_util__Darray_L_struct_util__Vec3_L_double_G___G___G_
  *ptStack_98;
  void *pvStack_94;
  int iStack_90;
  int iStack_8c;
  ArmorLayerBlueprint **ppAStack_88;
  undefined8 uStack_84;
  undefined4 uStack_7c;
  CraftBlueprint *pCStack_78;
  ModulePlacer aMStack_74 [3];
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pCStack_78 = this;
  if ((this->GetAllCompartmentIntersections_MemoizedValue).IsValidData == false) {
    iVar3 = (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity;
    iStack_c = iVar3 + 1;
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)
               &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,&iStack_c);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)
                       &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,iVar3);
    if (bVar2) {
      *(code **)((this->GetAllModulesNeedingCooling_MemoizedValue).Data.Size + -4 +
                (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity * 4) = (long long int (*)())(GetAllCompartmentBoundaryPoints_km_Clear);
    }
    ppAVar5 = &(this->MaterialClass__Armor).ArmorLayers.Data;
    uStack_7c = 0;
    uStack_84 = 0;
    ppAStack_88 = ppAVar5;
    iStack_c = (**(code **)((int)&((this->MaterialClass__Armor).ArmorLayers.Data)->Thickness_m + 4))();
    iStack_c = iStack_c * 0x1e;
    util__AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__class_util__Darray_struct_util__Vec3_double_______AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__class_util__Darray_struct_util__Vec3_double
              ((AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cclass_util__Darray_L_struct_util__Vec3_L_double_G___G___G_
                *)&uStack_84,&iStack_c);
    iStack_c = 0;
    iVar3 = (**(code **)((int)&(*ppAVar5)->Thickness_m + 4))();
    if (iStack_c < iVar3) {
      do {
        iVar4 = (*(code *)(*ppAVar5)->Composition)(&iStack_c);
        pCVar1 = pCStack_78;
        iVar6 = 0;
        iVar3 = iVar4;
        if (0 < *(int *)(iVar4 + 4)) {
          do {
            iStack_90 = iVar3;
            GetCompartmentOBB(pCVar1,aMStack_74,iVar4);
            util__OBB_struct_util__Vec3_double__struct_util__Quaternion_double__double___GetCorners
                      ((OBB_L_struct_util__Vec3_L_double_G__Cstruct_util__Quaternion_L_double_G__Cdouble_G_ *)
                       aMStack_74);
            iStack_8c = iVar6;
            util__AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__class_util__Darray_struct_util__Vec3_double_______Add((AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cclass_util__Darray_L_struct_util__Vec3_L_double_G___G___G_
                   *)&uStack_84,(tuple2_L_struct_ModulePlacer_const_P_Cint_G_ *)&iStack_90,
                  (Darray_L_struct_util__Vec3_L_double_G___G_ *)&ppuStack_a8);
            ppuStack_a8 = (undefined **)(&vftable_17);
            if (pvStack_a4 != (void *)0x0) {
              port_op_delete(pvStack_a4);
            }
            iVar6 = iVar6 + 1;
            pvStack_a4 = (void *)0x0;
            ppuStack_a8 = (undefined **)(&vftable);
            ppAVar5 = ppAStack_88;
            iVar3 = iStack_90;
          } while (iVar6 < *(int *)(iVar4 + 4));
        }
        iStack_c = iStack_c + 1;
        iVar3 = (**(code **)((int)&(*ppAVar5)->Thickness_m + 4))();
      } while (iStack_c < iVar3);
    }
    util__AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__class_util__Darray_struct_util__Vec3_double_______AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__class_util__Darray_struct_util__Vec3_double
              ((AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cclass_util__Darray_L_struct_util__Vec3_L_double_G___G___G_
                *)&ptStack_98,
               (AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cclass_util__Darray_L_struct_util__Vec3_L_double_G___G___G_
                *)&uStack_84);
    pCVar1 = pCStack_78;
    iStack_8c = CONCAT31((*(uint24_t*)((char*)&(iStack_8c)+1)),1);
    util__AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__class_util__Darray_struct_util__Vec3_double_______operator((AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cclass_util__Darray_L_struct_util__Vec3_L_double_G___G___G_
                 *)&pCStack_78->GetAllCompartmentIntersections_MemoizedValue,
                (AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cclass_util__Darray_L_struct_util__Vec3_L_double_G___G___G_
                 *)&ptStack_98);
    (pCVar1->GetAllCompartmentIntersections_MemoizedValue).IsValidData = true;
    if (ptStack_98 !=
        (tuple2_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cclass_util__Darray_L_struct_util__Vec3_L_double_G___G___G_
         *)0x0) {
      util__tuple2_struct_util__tuple2_struct_ModulePlacer_const__int__class_util__Darray_struct_util__Vec3_double________vector_deleting_destructor(ptStack_98,3);
    }
    if (pvStack_94 != (void *)0x0) {
      port_op_delete(pvStack_94);
    }
    if ((tuple2_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cclass_util__Darray_L_struct_util__Vec3_L_double_G___G___G_
         *)uStack_84 !=
        (tuple2_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cclass_util__Darray_L_struct_util__Vec3_L_double_G___G___G_
         *)0x0) {
      util__tuple2_struct_util__tuple2_struct_ModulePlacer_const__int__class_util__Darray_struct_util__Vec3_double________vector_deleting_destructor
                ((tuple2_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cclass_util__Darray_L_struct_util__Vec3_L_double_G___G___G_
                  *)uStack_84,3);
    }
    if ((*(uint32_t*)((char*)&(uStack_84)+4)) != (void *)0x0) {
      port_op_delete((*(uint32_t*)((char*)&(uStack_84)+4)));
    }
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00545d80 GetAllCompartmentIntersections_Clear ====

/* public: void __thiscall CraftBlueprint__GetAllCompartmentIntersections_Clear(void)const  */

void __thiscall CraftBlueprint__GetAllCompartmentIntersections_Clear(CraftBlueprint *this)

{
  AssocArray_L_struct_ModulePlacer_const_P_Cbool_G_ *pAVar1;
  void *local_14;
  void *local_10;
  int local_8;
  
  local_8 = 0;
  pAVar1 = (AssocArray_L_struct_ModulePlacer_const_P_Cbool_G_ *)
           util__AssocArray_L_ModulePlacer_const_P_Cbool_G___AssocArray_L_ModulePlacer_const_P_Cbool_G_
                     ((AssocArray_L_ModulePlacer_const_P_Cbool_G_ *)&local_14,&local_8);
  util__AssocArray_L_ModulePlacer_const_P_Cbool_G___op_assign
            ((AssocArray_L_ModulePlacer_const_P_Cbool_G_ *)
             &(this->GetStackedPowerUseChartData_MemoizedValue).Data.Capacity,pAVar1);
  if (local_14 != (void *)0x0) {
    port_op_delete(local_14);
  }
  if (local_10 != (void *)0x0) {
    port_op_delete(local_10);
  }
  *(undefined1 *)&this[1]._pad_0x0_0 = 0;
  return;
}

//==== 00545de0 GetAllCompartmentIntersections_Memoize ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall CraftBlueprint__GetAllCompartmentIntersections_Memoize(void)const  */

void __thiscall CraftBlueprint__GetAllCompartmentIntersections_Memoize(CraftBlueprint *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  int iVar2;
  ModulePlacer *pMVar3;
  void *local_30;
  void *local_2c;
  undefined1 local_24;
  ModulePlacer *local_20;
  undefined8 local_1c;
  undefined4 local_14;
  bool local_d;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((char)this[1]._pad_0x0_0 == '\0') {
    iVar2 = (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity;
    local_c = iVar2 + 1;
    util__Darray_L_util__Reflectable_P_G___SetSize
              ((Darray_L_util__Reflectable_P_G_ *)
               &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,&local_c);
    bVar1 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,iVar2);
    if (bVar1) {
      *(code **)((this->GetAllModulesNeedingCooling_MemoizedValue).Data.Size + -4 +
                (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity * 4) = (long long int (*)())(GetAllCompartmentIntersections_Clear);
    }
    local_14 = 0;
    local_1c = 0;
    local_c = (**(code **)((int)&((this->MaterialClass__Armor).ArmorLayers.Data)->Thickness_m + 4))();
    local_c = local_c * 2;
    util__AssocArray_L_ModulePlacer_const_P_Cbool_G___AssocArray_L_ModulePlacer_const_P_Cbool_G_
              ((AssocArray_L_ModulePlacer_const_P_Cbool_G_ *)&local_1c,&local_c);
    local_c = 0;
    iVar2 = (**(code **)((int)&((this->MaterialClass__Armor).ArmorLayers.Data)->Thickness_m + 4))();
    if (local_c < iVar2) {
      do {
        pMVar3 = (ModulePlacer *)(*(code *)((this->MaterialClass__Armor).ArmorLayers.Data)->Composition)(&local_c);
        local_d = IsCompartmentColliding(this,pMVar3);
        local_20 = pMVar3;
        util__AssocArray_L_ModulePlacer_const_P_Cbool_G___Add
                  ((AssocArray_L_ModulePlacer_const_P_Cbool_G_ *)&local_1c,&local_20,&local_d);
        local_c = local_c + 1;
        iVar2 = (**(code **)((int)&((this->MaterialClass__Armor).ArmorLayers.Data)->Thickness_m + 4))();
      } while (local_c < iVar2);
    }
    util__AssocArray_L_ModulePlacer_const_P_Cbool_G___AssocArray_L_ModulePlacer_const_P_Cbool_G_
              ((AssocArray_L_ModulePlacer_const_P_Cbool_G_ *)&local_30,
               (AssocArray_L_struct_ModulePlacer_const_P_Cbool_G_ *)&local_1c);
    local_24 = 1;
    util__AssocArray_L_ModulePlacer_const_P_Cbool_G___op_assign
              ((AssocArray_L_ModulePlacer_const_P_Cbool_G_ *)
               &(this->GetStackedPowerUseChartData_MemoizedValue).Data.Capacity,
               (AssocArray_L_struct_ModulePlacer_const_P_Cbool_G_ *)&local_30);
    *(undefined1 *)&this[1]._pad_0x0_0 = 1;
    if (local_30 != (void *)0x0) {
      port_op_delete(local_30);
    }
    if (local_2c != (void *)0x0) {
      port_op_delete(local_2c);
    }
    if ((void *)local_1c != (void *)0x0) {
      port_op_delete((void *)local_1c);
    }
    if ((*(uint32_t*)((char*)&(local_1c)+4)) != (void *)0x0) {
      port_op_delete((*(uint32_t*)((char*)&(local_1c)+4)));
    }
  }
  return;
}

//==== 00545f40 GetAllCompartmentOffsets_m_Clear ====


/* public: void __thiscall CraftBlueprint__GetAllCompartmentOffsets_m_Clear(void)const  */

void __thiscall CraftBlueprint__GetAllCompartmentOffsets_m_Clear(CraftBlueprint *this)

{
  AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cstruct_util__Vec3_L_double_G___G_ *pAVar1
  ;
  void *pvStack_14;
  void *pvStack_10;
  int iStack_8;
  
  iStack_8 = 0;
  pAVar1 = (AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cstruct_util__Vec3_L_double_G___G_
            *)util__AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__struct_util__Vec3_double_____AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__struct_util__Vec3_double
                        ((AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cstruct_util__Vec3_L_double_G___G_
                          *)&pvStack_14,&iStack_8);
  util__AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__struct_util__Vec3_double_____operator((AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cstruct_util__Vec3_L_double_G___G_
             *)&this->GetAllCompartmentSelfIntersections_MemoizedValue,pAVar1);
  if (pvStack_14 != (void *)0x0) {
    port_op_delete(pvStack_14);
  }
  if (pvStack_10 != (void *)0x0) {
    port_op_delete(pvStack_10);
  }
  (this->GetAllCompartmentSelfIntersections_MemoizedValue).IsValidData = false;
  return;
}





//==== 00545fa0 GetAllCompartmentOffsets_m_Memoize ====


/* public: void __thiscall CraftBlueprint__GetAllCompartmentOffsets_m_Memoize(void)const  */

void __thiscall CraftBlueprint__GetAllCompartmentOffsets_m_Memoize(CraftBlueprint *this)

{
  undefined8 stack0xfffffffc;
  CraftBlueprint *this_00;
  ModulePlacer *pMVar1;
  bool bVar2;
  int iVar3;
  ModulePlacer *pMVar4;
  Vec2_L_double_G_ *pVVar5;
  ArmorLayerBlueprint **ppAVar6;
  double dVar7;
  Vec2_L_double_G_ VStack_60;
  undefined1 auStack_50 [16];
  double dStack_40;
  ModulePlacer *pMStack_38;
  int iStack_34;
  ArmorLayerBlueprint **ppAStack_30;
  void *pvStack_2c;
  void *pvStack_28;
  undefined8 uStack_24;
  undefined8 uStack_1c;
  undefined4 uStack_14;
  CraftBlueprint *pCStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pCStack_10 = this;
  if ((this->GetAllCompartmentSelfIntersections_MemoizedValue).IsValidData == false) {
    iVar3 = (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity;
    iStack_c = iVar3 + 1;
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)
               &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,&iStack_c);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)
                       &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,iVar3);
    if (bVar2) {
      *(code **)((this->GetAllModulesNeedingCooling_MemoizedValue).Data.Size + -4 +
                (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity * 4) = (long long int (*)())(GetAllCompartmentOffsets_m_Clear);
    }
    ppAVar6 = &(this->MaterialClass__Armor).ArmorLayers.Data;
    uStack_14 = 0;
    uStack_1c = 0;
    ppAStack_30 = ppAVar6;
    iStack_c = (**(code **)((int)&((this->MaterialClass__Armor).ArmorLayers.Data)->Thickness_m + 4))();
    iStack_c = iStack_c * 0x1e;
    util__AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__struct_util__Vec3_double_____AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__struct_util__Vec3_double
              ((AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cstruct_util__Vec3_L_double_G___G_
                *)&uStack_1c,&iStack_c);
    iStack_c = 0;
    iVar3 = (**(code **)((int)&(*ppAVar6)->Thickness_m + 4))();
    if (iStack_c < iVar3) {
      do {
        pMVar4 = (ModulePlacer *)(*(code *)(*ppAVar6)->Composition)(&iStack_c);
        this_00 = pCStack_10;
        iVar3 = 0;
        pMVar1 = pMVar4;
        if (0 < pMVar4->Multiplier) {
          do {
            pMStack_38 = pMVar1;
            uStack_24 = GetModuleLocationHeight_m(this_00,pMVar4);
            dVar7 = CraftBlueprintArmor__GetTotalArmorHeight_m
                              ((CraftBlueprintArmor *)
                               &(this_00->MaterialClass__Armor).CraftBlueprintArmorMemoizationHandlerInstance.
                                ResetFunctions.Size);
            uStack_24 = uStack_24 - dVar7 * 0.5;
            pVVar5 = (Vec2_L_double_G_ *)(uintptr_t)(GetCompartment2DOffset_m(this_00,&VStack_60,pMVar4,iVar3));
            dVar7 = pVVar5->Y + 0.0;
            (*(uint32_t*)((char*)&(auStack_50)+8)) = SUB84(dVar7,0);
            (*(uint64_t*)&(auStack_50)) = pVVar5->X + 0.0;
            (*(uint32_t *)((char *)&(auStack_50) + 12)) = (int)((ulonglong)dVar7 >> 0x20);
            dStack_40 = uStack_24 + 0.0;
            iStack_34 = iVar3;
            util__AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__struct_util__Vec3_double_____Add((AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cstruct_util__Vec3_L_double_G___G_
                   *)&uStack_1c,(tuple2_L_struct_ModulePlacer_const_P_Cint_G_ *)&pMStack_38,
                  (Vec3_L_double_G_ *)auStack_50);
            iVar3 = iVar3 + 1;
            ppAVar6 = ppAStack_30;
            pMVar1 = pMStack_38;
          } while (iVar3 < pMVar4->Multiplier);
        }
        iStack_c = iStack_c + 1;
        iVar3 = (**(code **)((int)&(*ppAVar6)->Thickness_m + 4))();
        this = pCStack_10;
      } while (iStack_c < iVar3);
    }
    util__AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__struct_util__Vec3_double_____AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__struct_util__Vec3_double
              ((AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cstruct_util__Vec3_L_double_G___G_
                *)&pvStack_2c,
               (AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cstruct_util__Vec3_L_double_G___G_
                *)&uStack_1c);
    (*(uint40_t*)&(uStack_24)) = CONCAT14(1,(undefined4)uStack_24);
    util__AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__struct_util__Vec3_double_____operator((AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cstruct_util__Vec3_L_double_G___G_
                 *)&this->GetAllCompartmentSelfIntersections_MemoizedValue,
                (AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cstruct_util__Vec3_L_double_G___G_
                 *)&pvStack_2c);
    (this->GetAllCompartmentSelfIntersections_MemoizedValue).IsValidData = true;
    if (pvStack_2c != (void *)0x0) {
      port_op_delete(pvStack_2c);
    }
    if (pvStack_28 != (void *)0x0) {
      port_op_delete(pvStack_28);
    }
    if ((void *)uStack_1c != (void *)0x0) {
      port_op_delete((void *)uStack_1c);
    }
    if ((*(uint32_t*)((char*)&(uStack_1c)+4)) != (void *)0x0) {
      port_op_delete((*(uint32_t*)((char*)&(uStack_1c)+4)));
    }
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00546170 GetAllCompartmentOperationals_Clear ====

/* public: void __thiscall CraftBlueprint__GetAllCompartmentOperationals_Clear(void)const  */

void __thiscall CraftBlueprint__GetAllCompartmentOperationals_Clear(CraftBlueprint *this)

{
  AssocArray_L_struct_ModulePlacer_const_P_Cbool_G_ *pAVar1;
  void *local_14;
  void *local_10;
  int local_8;
  
  local_8 = 0;
  pAVar1 = (AssocArray_L_struct_ModulePlacer_const_P_Cbool_G_ *)
           util__AssocArray_L_ModulePlacer_const_P_Cbool_G___AssocArray_L_ModulePlacer_const_P_Cbool_G_
                     ((AssocArray_L_ModulePlacer_const_P_Cbool_G_ *)&local_14,&local_8);
  util__AssocArray_L_ModulePlacer_const_P_Cbool_G___op_assign
            ((AssocArray_L_ModulePlacer_const_P_Cbool_G_ *)&this[1].Modules.Data,pAVar1);
  if (local_14 != (void *)0x0) {
    port_op_delete(local_14);
  }
  if (local_10 != (void *)0x0) {
    port_op_delete(local_10);
  }
  *(undefined1 *)&this[1].MaterialClass__Armor._pad_0x0_0 = 0;
  return;
}

//==== 005461d0 GetAllCompartmentOperationals_Memoize ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall CraftBlueprint__GetAllCompartmentOperationals_Memoize(void)const  */

void __thiscall CraftBlueprint__GetAllCompartmentOperationals_Memoize(CraftBlueprint *this)

{
  undefined8 stack0xfffffffc;
  ArmorLayerBlueprint **ppAVar1;
  bool bVar2;
  int iVar3;
  ModulePlacer *pMVar4;
  DesignStatusBuffer *this_00;
  undefined1 local_4c [4];
  undefined **local_48;
  DesignStatusMessage *local_44;
  void *local_34;
  void *local_30;
  undefined1 local_28;
  CraftBlueprint *local_24;
  ModulePlacer *local_20;
  undefined8 local_1c;
  undefined4 local_14;
  bool local_d;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((char)this[1].MaterialClass__Armor._pad_0x0_0 == '\0') {
    iVar3 = (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity;
    local_c = iVar3 + 1;
    local_24 = this;
    util__Darray_L_util__Reflectable_P_G___SetSize
              ((Darray_L_util__Reflectable_P_G_ *)
               &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,&local_c);
    bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,iVar3);
    if (bVar2) {
      *(code **)((this->GetAllModulesNeedingCooling_MemoizedValue).Data.Size + -4 +
                (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity * 4) = (long long int (*)())(GetAllCompartmentOperationals_Clear);
    }
    ppAVar1 = &(this->MaterialClass__Armor).ArmorLayers.Data;
    local_14 = 0;
    local_1c = 0;
    local_c = (**(code **)((int)&((this->MaterialClass__Armor).ArmorLayers.Data)->Thickness_m + 4))();
    local_c = local_c * 2;
    util__AssocArray_L_ModulePlacer_const_P_Cbool_G___AssocArray_L_ModulePlacer_const_P_Cbool_G_
              ((AssocArray_L_ModulePlacer_const_P_Cbool_G_ *)&local_1c,&local_c);
    local_c = 0;
    iVar3 = (**(code **)((int)&(*ppAVar1)->Thickness_m + 4))();
    if (local_c < iVar3) {
      do {
        pMVar4 = (ModulePlacer *)(*(code *)(*ppAVar1)->Composition)(&local_c);
        this_00 = (DesignStatusBuffer *)
                  (**(code **)(pMVar4->ModuleType->_pad_0x0_0 + 0xdc))(local_4c,0);
        bVar2 = DesignStatusBuffer__IsOperational(this_00);
        local_48 = &vftable_62;
        if (local_44 != (DesignStatusMessage *)0x0) {
          DesignStatusMessage___vector_deleting_destructor(local_44,3);
        }
        *(uint32_t *)&local_44 = (uint32_t)(uintptr_t)((DesignStatusMessage *)0x0);
        local_48 = (undefined **)(&vftable);
        local_20 = pMVar4;
        local_d = bVar2;
        util__AssocArray_L_ModulePlacer_const_P_Cbool_G___Add
                  ((AssocArray_L_ModulePlacer_const_P_Cbool_G_ *)&local_1c,&local_20,&local_d);
        local_c = local_c + 1;
        iVar3 = (**(code **)((int)&(*ppAVar1)->Thickness_m + 4))();
        this = local_24;
      } while (local_c < iVar3);
    }
    util__AssocArray_L_ModulePlacer_const_P_Cbool_G___AssocArray_L_ModulePlacer_const_P_Cbool_G_
              ((AssocArray_L_ModulePlacer_const_P_Cbool_G_ *)&local_34,
               (AssocArray_L_struct_ModulePlacer_const_P_Cbool_G_ *)&local_1c);
    *(uint32_t *)&local_28 = 1;
    util__AssocArray_L_ModulePlacer_const_P_Cbool_G___op_assign
              ((AssocArray_L_ModulePlacer_const_P_Cbool_G_ *)&this[1].Modules.Data,
               (AssocArray_L_struct_ModulePlacer_const_P_Cbool_G_ *)&local_34);
    *(undefined1 *)&this[1].MaterialClass__Armor._pad_0x0_0 = 1;
    if (local_34 != (void *)0x0) {
      port_op_delete(local_34);
    }
    if (local_30 != (void *)0x0) {
      port_op_delete(local_30);
    }
    if ((void *)local_1c != (void *)0x0) {
      port_op_delete((void *)local_1c);
    }
    if ((*(uint32_t*)((char*)&(local_1c)+4)) != (void *)0x0) {
      port_op_delete((*(uint32_t*)((char*)&(local_1c)+4)));
    }
  }
  return;
}

//==== 00546360 GetAllCompartmentOrientations_Clear ====


/* public: void __thiscall CraftBlueprint__GetAllCompartmentOrientations_Clear(void)const  */

void __thiscall CraftBlueprint__GetAllCompartmentOrientations_Clear(CraftBlueprint *this)

{
  AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cstruct_util__Quaternion_L_double_G___G_
  *pAVar1;
  void *pvStack_14;
  void *pvStack_10;
  int iStack_8;
  
  iStack_8 = 0;
  pAVar1 = (AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cstruct_util__Quaternion_L_double_G___G_
            *)util__AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__struct_util__Quaternion_double_____AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__struct_util__Quaternion_double
                        ((AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cstruct_util__Quaternion_L_double_G___G_
                          *)&pvStack_14,&iStack_8);
  util__AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__struct_util__Quaternion_double_____operator((AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cstruct_util__Quaternion_L_double_G___G_
             *)&this->GetAllCompartmentOperationals_MemoizedValue,pAVar1);
  if (pvStack_14 != (void *)0x0) {
    port_op_delete(pvStack_14);
  }
  if (pvStack_10 != (void *)0x0) {
    port_op_delete(pvStack_10);
  }
  (this->GetAllCompartmentOperationals_MemoizedValue).IsValidData = false;
  return;
}





//==== 005463c0 GetAllCompartmentOrientations_Memoize ====


/* public: void __thiscall CraftBlueprint__GetAllCompartmentOrientations_Memoize(void)const  */

void __thiscall CraftBlueprint__GetAllCompartmentOrientations_Memoize(CraftBlueprint *this)

{
  undefined8 stack0xfffffffc;
  ModulePlacer *pMVar1;
  bool bVar2;
  int iVar3;
  ModulePlacer *pMVar4;
  Quaternion_L_double_G_ *pQVar5;
  Quaternion_L_double_G_ QStack_48;
  void *pvStack_28;
  void *pvStack_24;
  ModulePlacer *pMStack_20;
  int iStack_1c;
  undefined8 uStack_18;
  undefined4 uStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((this->GetAllCompartmentOperationals_MemoizedValue).IsValidData == false) {
    iVar3 = (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity;
    iStack_c = iVar3 + 1;
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)
               &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,&iStack_c);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)
                       &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,iVar3);
    if (bVar2) {
      *(code **)((this->GetAllModulesNeedingCooling_MemoizedValue).Data.Size + -4 +
                (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity * 4) = (long long int (*)())(GetAllCompartmentOrientations_Clear);
    }
    uStack_10 = 0;
    uStack_18 = 0;
    iStack_c = (**(code **)((int)&((this->MaterialClass__Armor).ArmorLayers.Data)->Thickness_m + 4))();
    iStack_c = iStack_c * 0x1e;
    util__AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__struct_util__Quaternion_double_____AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__struct_util__Quaternion_double
              ((AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cstruct_util__Quaternion_L_double_G___G_
                *)&uStack_18,&iStack_c);
    iStack_c = 0;
    iVar3 = (**(code **)((int)&((this->MaterialClass__Armor).ArmorLayers.Data)->Thickness_m + 4))();
    if (iStack_c < iVar3) {
      do {
        pMVar4 = (ModulePlacer *)(*(code *)((this->MaterialClass__Armor).ArmorLayers.Data)->Composition)(&iStack_c)
        ;
        iVar3 = 0;
        pMVar1 = pMVar4;
        if (0 < pMVar4->Multiplier) {
          do {
            pMStack_20 = pMVar1;
            iStack_1c = iVar3;
            pQVar5 = (Quaternion_L_double_G_ *)(uintptr_t)(GetCompartmentOrientation(this,&QStack_48,pMVar4,iVar3));
            util__AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__struct_util__Quaternion_double_____Add((AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cstruct_util__Quaternion_L_double_G___G_
                   *)&uStack_18,(tuple2_L_struct_ModulePlacer_const_P_Cint_G_ *)&pMStack_20,pQVar5);
            iVar3 = iVar3 + 1;
            pMVar1 = pMStack_20;
          } while (iVar3 < pMVar4->Multiplier);
        }
        iStack_c = iStack_c + 1;
        iVar3 = (**(code **)((int)&((this->MaterialClass__Armor).ArmorLayers.Data)->Thickness_m + 4))();
      } while (iStack_c < iVar3);
    }
    util__AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__struct_util__Quaternion_double_____AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__struct_util__Quaternion_double
              ((AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cstruct_util__Quaternion_L_double_G___G_
                *)&pvStack_28,
               (AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cstruct_util__Quaternion_L_double_G___G_
                *)&uStack_18);
    iStack_1c = CONCAT31((*(uint24_t*)((char*)&(iStack_1c)+1)),1);
    util__AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__struct_util__Quaternion_double_____operator((AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cstruct_util__Quaternion_L_double_G___G_
                 *)&this->GetAllCompartmentOperationals_MemoizedValue,
                (AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cstruct_util__Quaternion_L_double_G___G_
                 *)&pvStack_28);
    (this->GetAllCompartmentOperationals_MemoizedValue).IsValidData = true;
    if (pvStack_28 != (void *)0x0) {
      port_op_delete(pvStack_28);
    }
    if (pvStack_24 != (void *)0x0) {
      port_op_delete(pvStack_24);
    }
    if ((void *)uStack_18 != (void *)0x0) {
      port_op_delete((void *)uStack_18);
    }
    if ((*(uint32_t*)((char*)&(uStack_18)+4)) != (void *)0x0) {
      port_op_delete((*(uint32_t*)((char*)&(uStack_18)+4)));
    }
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00546530 GetAllCompartmentSelfIntersections_Clear ====

/* public: void __thiscall CraftBlueprint__GetAllCompartmentSelfIntersections_Clear(void)const  */

void __thiscall CraftBlueprint__GetAllCompartmentSelfIntersections_Clear(CraftBlueprint *this)

{
  AssocArray_L_struct_ModulePlacer_const_P_Cbool_G_ *pAVar1;
  void *local_14;
  void *local_10;
  int local_8;
  
  local_8 = 0;
  pAVar1 = (AssocArray_L_struct_ModulePlacer_const_P_Cbool_G_ *)
           util__AssocArray_L_ModulePlacer_const_P_Cbool_G___AssocArray_L_ModulePlacer_const_P_Cbool_G_
                     ((AssocArray_L_ModulePlacer_const_P_Cbool_G_ *)&local_14,&local_8);
  util__AssocArray_L_ModulePlacer_const_P_Cbool_G___op_assign
            ((AssocArray_L_ModulePlacer_const_P_Cbool_G_ *)&this[1]._pad_0x4_1,pAVar1);
  if (local_14 != (void *)0x0) {
    port_op_delete(local_14);
  }
  if (local_10 != (void *)0x0) {
    port_op_delete(local_10);
  }
  *(undefined1 *)&this[1].Modules._pad_0x0_0 = 0;
  return;
}

//==== 00546590 GetAllCompartmentSelfIntersections_Memoize ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall CraftBlueprint__GetAllCompartmentSelfIntersections_Memoize(void)const  */

void __thiscall CraftBlueprint__GetAllCompartmentSelfIntersections_Memoize(CraftBlueprint *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  int iVar2;
  ModulePlacer *pMVar3;
  void *local_30;
  void *local_2c;
  undefined1 local_24;
  ModulePlacer *local_20;
  undefined8 local_1c;
  undefined4 local_14;
  bool local_d;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((char)this[1].Modules._pad_0x0_0 == '\0') {
    iVar2 = (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity;
    local_c = iVar2 + 1;
    util__Darray_L_util__Reflectable_P_G___SetSize
              ((Darray_L_util__Reflectable_P_G_ *)
               &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,&local_c);
    bVar1 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,iVar2);
    if (bVar1) {
      *(code **)((this->GetAllModulesNeedingCooling_MemoizedValue).Data.Size + -4 +
                (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity * 4) = (long long int (*)())(GetAllCompartmentSelfIntersections_Clear);
    }
    local_14 = 0;
    local_1c = 0;
    local_c = (**(code **)((int)&((this->MaterialClass__Armor).ArmorLayers.Data)->Thickness_m + 4))();
    local_c = local_c * 2;
    util__AssocArray_L_ModulePlacer_const_P_Cbool_G___AssocArray_L_ModulePlacer_const_P_Cbool_G_
              ((AssocArray_L_ModulePlacer_const_P_Cbool_G_ *)&local_1c,&local_c);
    local_c = 0;
    iVar2 = (**(code **)((int)&((this->MaterialClass__Armor).ArmorLayers.Data)->Thickness_m + 4))();
    if (local_c < iVar2) {
      do {
        pMVar3 = (ModulePlacer *)(*(code *)((this->MaterialClass__Armor).ArmorLayers.Data)->Composition)(&local_c);
        local_d = IsModulePlacerSelfColliding(this,pMVar3);
        local_20 = pMVar3;
        util__AssocArray_L_ModulePlacer_const_P_Cbool_G___Add
                  ((AssocArray_L_ModulePlacer_const_P_Cbool_G_ *)&local_1c,&local_20,&local_d);
        local_c = local_c + 1;
        iVar2 = (**(code **)((int)&((this->MaterialClass__Armor).ArmorLayers.Data)->Thickness_m + 4))();
      } while (local_c < iVar2);
    }
    util__AssocArray_L_ModulePlacer_const_P_Cbool_G___AssocArray_L_ModulePlacer_const_P_Cbool_G_
              ((AssocArray_L_ModulePlacer_const_P_Cbool_G_ *)&local_30,
               (AssocArray_L_struct_ModulePlacer_const_P_Cbool_G_ *)&local_1c);
    local_24 = 1;
    util__AssocArray_L_ModulePlacer_const_P_Cbool_G___op_assign
              ((AssocArray_L_ModulePlacer_const_P_Cbool_G_ *)&this[1]._pad_0x4_1,
               (AssocArray_L_struct_ModulePlacer_const_P_Cbool_G_ *)&local_30);
    *(undefined1 *)&this[1].Modules._pad_0x0_0 = 1;
    if (local_30 != (void *)0x0) {
      port_op_delete(local_30);
    }
    if (local_2c != (void *)0x0) {
      port_op_delete(local_2c);
    }
    if ((void *)local_1c != (void *)0x0) {
      port_op_delete((void *)local_1c);
    }
    if ((*(uint32_t*)((char*)&(local_1c)+4)) != (void *)0x0) {
      port_op_delete((*(uint32_t*)((char*)&(local_1c)+4)));
    }
  }
  return;
}

//==== 005466f0 GetAllCountedModules ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: class util__Darray_L_structutil__tuple2_L_classModule_P_Cint_G__G_ __thiscall
   CraftBlueprint__GetAllCountedModules(void)const  */

Darray_L_CraftBlueprint_const_P_G_ * __thiscall
CraftBlueprint__GetAllCountedModules(CraftBlueprint *this)

{
  undefined8 stack0xfffffffc;
  ArmorLayerBlueprint **ppAVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  Darray_L_CraftBlueprint_const_P_G_ *in_stack_00000004;
  int local_34;
  undefined1 local_30;
  Darray_L_int_G_ local_2c;
  Darray_L_int_G_ local_1c;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_2c._pad_0x0_0 = 0;
  local_2c.Data = (int *)0x0;
  local_2c.Size = 0;
  local_2c.Capacity = 0;
  GetModules(this);
  util__Darray_L_WeaponModule_P_G___RemoveDuplicates((Darray_L_WeaponModule_P_G_ *)&local_2c);
  local_1c._pad_0x0_0 = 0;
  local_1c.Data = (int *)0x0;
  local_1c.Size = 0;
  local_1c.Capacity = 0;
  util__Darray_int___Darray_int(&local_1c,local_2c.Size);
  iVar6 = 0;
  if (0 < local_2c.Size) {
    do {
      iVar2 = local_1c.Size;
      local_c = local_1c.Size + 1;
      util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)&local_1c,&local_c);
      bVar3 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                        ((Darray_L_GraphicsResource__Type_G_ *)&local_1c,iVar2);
      if (bVar3) {
        local_1c.Data[local_1c.Size + -1] = 0;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_2c.Size);
  }
  ppAVar1 = &(this->MaterialClass__Armor).ArmorLayers.Data;
  local_c = 0;
  iVar6 = (**(code **)((int)&((this->MaterialClass__Armor).ArmorLayers.Data)->Thickness_m + 4))();
  if (local_c < iVar6) {
    do {
      piVar4 = (int *)(*(code *)(*ppAVar1)->Composition)(&local_c);
      *(uint32_t *)&local_34 = 0;
      if (local_2c.Data != local_2c.Data + local_2c.Size) {
        piVar5 = local_2c.Data;
        do {
          if (*piVar5 == *piVar4) {
            *(uint32_t *)&local_30 = 1;
            goto LAB_005467e7;
          }
          piVar5 = piVar5 + 1;
          *(uint32_t *)&local_34 = local_34 + 1;
        } while (piVar5 != local_2c.Data + local_2c.Size);
      }
      *(uint32_t *)&local_34 = 0;
      *(uint32_t *)&local_30 = 0;
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
LAB_005467e7:
      piVar5 = (int *)(**(code **)local_1c._pad_0x0_0)(&local_34);
      *piVar5 = *piVar5 + piVar4[1];
      local_c = local_c + 1;
      iVar6 = (**(code **)((int)&(*ppAVar1)->Thickness_m + 4))();
    } while (local_c < iVar6);
  }
  util__Zip_class_CraftBlueprint_const__int__o2(in_stack_00000004,&local_2c);
  local_1c._pad_0x0_0 = (int)&vftable_11;
  if (local_1c.Data != (int *)0x0) {
    port_op_delete(local_1c.Data);
  }
  local_1c.Data = (int *)0x0;
  local_1c._pad_0x0_0 = (int)&vftable;
  local_2c._pad_0x0_0 = (int)&vftable_6;
  if (local_2c.Data != (int *)0x0) {
    port_op_delete(local_2c.Data);
  }
  return in_stack_00000004;
}

//==== 00546880 GetAllMainEnginePropellantsUsed_Clear_00546880 ====


/* public: void __thiscall CraftBlueprint__GetAllMainEnginePropellantsUsed_Clear(void)const  */

void __thiscall CraftBlueprint__GetAllMainEnginePropellantsUsed_Clear(CraftBlueprint *this)

{
  undefined **ppuStack_14;
  void *pvStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  ppuStack_14 = (undefined **)(&vftable_2);
  pvStack_10 = (void *)0x0;
  uStack_c = 0;
  uStack_8 = 0;
  util__Darray_class_Module____operator
            ((Darray_L_class_Module_P_G_ *)&this->GetCrewRequired_MemoizedValue,
             (Darray_L_class_Module_P_G_ *)&ppuStack_14);
  ppuStack_14 = (undefined **)(&vftable_2);
  if (pvStack_10 != (void *)0x0) {
    port_op_delete(pvStack_10);
  }
  (this->GetCrewRequired_MemoizedValue).IsValidData = false;
  return;
}





//==== 005468e0 GetAllMainEnginePropellantsUsed_Memoize ====


/* public: void __thiscall CraftBlueprint__GetAllMainEnginePropellantsUsed_Memoize(void)const  */

void __thiscall CraftBlueprint__GetAllMainEnginePropellantsUsed_Memoize(CraftBlueprint *this)

{
  int iVar1;
  bool bVar2;
  Darray_L_bool_P_G_ *pDVar3;
  undefined **ppuStack_2c;
  void *pvStack_28;
  bool bStack_1c;
  undefined **ppuStack_18;
  void *pvStack_14;
  int iStack_8;
  
  if ((this->GetCrewRequired_MemoizedValue).IsValidData == false) {
    iVar1 = (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity;
    iStack_8 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)
               &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,&iStack_8);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)
                       &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,iVar1);
    if (bVar2) {
      *(code **)((this->GetAllModulesNeedingCooling_MemoizedValue).Data.Size + -4 +
                (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity * 4) = (long long int (*)())(GetAllMainEnginePropellantsUsed_Clear);
    }
    pDVar3 = (Darray_L_bool_P_G_ *)GetAllMainEnginePropellantsUsed_MemoizedFunction(this);
    util__Darray_bool____Darray_bool((Darray_L_bool_P_G_ *)&ppuStack_2c,pDVar3);
    bStack_1c = true;
    util__Darray_class_Module____operator
              ((Darray_L_class_Module_P_G_ *)&this->GetCrewRequired_MemoizedValue,
               (Darray_L_class_Module_P_G_ *)&ppuStack_2c);
    (this->GetCrewRequired_MemoizedValue).IsValidData = bStack_1c;
    ppuStack_2c = (undefined **)(&vftable_2);
    if (pvStack_28 != (void *)0x0) {
      port_op_delete(pvStack_28);
    }
    pvStack_28 = (void *)0x0;
    ppuStack_2c = (undefined **)(&vftable);
    ppuStack_18 = (undefined **)(&vftable_2);
    if (pvStack_14 != (void *)0x0) {
      port_op_delete(pvStack_14);
    }
  }
  return;
}





//==== 005469b0 GetAllMainEnginePropellantsUsed_MemoizedFunction_005469b0 ====


/* private: class util__Darray_L_classMaterialconst_P_G_ __thiscall
   CraftBlueprint__GetAllMainEnginePropellantsUsed_MemoizedFunction(void)const  */

Darray_L_bool_P_G_ * __thiscall
CraftBlueprint__GetAllMainEnginePropellantsUsed_MemoizedFunction(CraftBlueprint *this)

{
  undefined8 stack0x00000004;
  int iVar1;
  Darray_L_bool_P_G_ *this_00;
  bool bVar2;
  Darray_L_bool_P_G_ *pDVar3;
  Darray_L_bool_P_G_ *in_stack_00000004;
  undefined **ppuStack_6c;
  void *pvStack_68;
  undefined **ppuStack_5c;
  void *pvStack_58;
  undefined **ppuStack_4c;
  void *pvStack_48;
  bool bStack_3c;
  undefined **ppuStack_38;
  int *piStack_34;
  undefined **ppuStack_28;
  void *pvStack_24;
  undefined **ppuStack_18;
  void *pvStack_14;
  uint uStack_8;
  
  this_00 = in_stack_00000004;
  uStack_8 = uStack_8 & 0xffffff00;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  if ((this->GetTotalPowerGeneration_W_MemoizedValue).IsValidData == false) {
    iVar1 = (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity;
    in_stack_00000004 = (Darray_L_bool_P_G_ *)(iVar1 + 1);
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)
               &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,(int *)&stack0x00000004)
    ;
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)
                       &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,iVar1);
    if (bVar2) {
      *(code **)((this->GetAllModulesNeedingCooling_MemoizedValue).Data.Size + -4 +
                (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity * 4) = (long long int (*)())(GetMainEngineModules_Clear);
    }
    pDVar3 = (Darray_L_bool_P_G_ *)GetMainEngineModules_MemoizedFunction(this);
    util__Darray_bool____Darray_bool((Darray_L_bool_P_G_ *)&ppuStack_4c,pDVar3);
    bStack_3c = true;
    util__Darray_class_Module____operator
              ((Darray_L_class_Module_P_G_ *)&(this->GetTotalCost_c_MemoizedValue).IsValidData,
               (Darray_L_class_Module_P_G_ *)&ppuStack_4c);
    (this->GetTotalPowerGeneration_W_MemoizedValue).IsValidData = bStack_3c;
    ppuStack_4c = (undefined **)(&vftable_2);
    if (pvStack_48 != (void *)0x0) {
      port_op_delete(pvStack_48);
    }
    pvStack_48 = (void *)0x0;
    ppuStack_4c = (undefined **)(&vftable);
    ppuStack_18 = (undefined **)(&vftable_2);
    if (pvStack_14 != (void *)0x0) {
      port_op_delete(pvStack_14);
    }
    pvStack_14 = (void *)0x0;
    ppuStack_18 = (undefined **)(&vftable);
  }
  if ((this->GetTotalPowerGeneration_W_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  FUN_005382f0(&ppuStack_38,&(this->GetTotalCost_c_MemoizedValue).IsValidData,uStack_8);
  util__Join_struct_MaterialConstituent
            ((Darray_L_class_util__Darray_L_struct_MaterialConstituent_G___G_ *)&ppuStack_28);
  pDVar3 = (Darray_L_bool_P_G_ *)
           util__Unzip_class_Material_const__double_struct_MaterialConstituent__o2
                     ((Darray_L_struct_MaterialConstituent_G_ *)&ppuStack_6c);
  util__Darray_bool____Darray_bool(this_00,pDVar3);
  ppuStack_5c = (undefined **)(&vftable_63);
  if (pvStack_58 != (void *)0x0) {
    port_op_delete(pvStack_58);
  }
  pvStack_58 = (void *)0x0;
  ppuStack_5c = (undefined **)(&vftable);
  ppuStack_6c = (undefined **)(&vftable_2);
  if (pvStack_68 != (void *)0x0) {
    port_op_delete(pvStack_68);
  }
  pvStack_68 = (void *)0x0;
  ppuStack_6c = (undefined **)(&vftable);
  ppuStack_28 = (undefined **)(&vftable_15);
  if (pvStack_24 != (void *)0x0) {
    port_op_delete(pvStack_24);
  }
  pvStack_24 = (void *)0x0;
  ppuStack_28 = (undefined **)(&vftable);
  ppuStack_38 = &vftable_124;
  if (piStack_34 != (int *)0x0) {
    if (piStack_34[-1] != 0) {
      (**(code **)(uintptr_t)(*piStack_34 + 0x18))(3);
      util__Darray_class_WeaponModule____RemoveDuplicates((Darray_L_class_WeaponModule_P_G_ *)this_00);
      return this_00;
    }
    port_op_delete(piStack_34 + -1);
  }
  util__Darray_class_WeaponModule____RemoveDuplicates((Darray_L_class_WeaponModule_P_G_ *)this_00);
  return this_00;
}





//==== 00546ba0 GetAllRadiatorUnworkableInterreflections_Clear ====

/* public: void __thiscall CraftBlueprint__GetAllRadiatorUnworkableInterreflections_Clear(void)const
    */

void __thiscall CraftBlueprint__GetAllRadiatorUnworkableInterreflections_Clear(CraftBlueprint *this)

{
  AssocArray_L_struct_ModulePlacer_const_P_Cbool_G_ *pAVar1;
  void *local_14;
  void *local_10;
  int local_8;
  
  local_8 = 0;
  pAVar1 = (AssocArray_L_struct_ModulePlacer_const_P_Cbool_G_ *)
           util__AssocArray_L_ModulePlacer_const_P_Cbool_G___AssocArray_L_ModulePlacer_const_P_Cbool_G_
                     ((AssocArray_L_ModulePlacer_const_P_Cbool_G_ *)&local_14,&local_8);
  util__AssocArray_L_ModulePlacer_const_P_Cbool_G___op_assign
            ((AssocArray_L_ModulePlacer_const_P_Cbool_G_ *)&this[1].MaterialClass__Armor._pad_0x4_1,pAVar1);
  if (local_14 != (void *)0x0) {
    port_op_delete(local_14);
  }
  if (local_10 != (void *)0x0) {
    port_op_delete(local_10);
  }
  *(undefined1 *)&this[1].MaterialClass__Armor.ArmorLayers._pad_0x0_0 = 0;
  return;
}

//==== 00546c00 GetAllRadiatorUnworkableInterreflections_Memoize ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall
   CraftBlueprint__GetAllRadiatorUnworkableInterreflections_Memoize(void)const  */

void __thiscall
CraftBlueprint__GetAllRadiatorUnworkableInterreflections_Memoize(CraftBlueprint *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  int iVar2;
  ModulePlacer *pMVar3;
  void *local_30;
  void *local_2c;
  undefined1 local_24;
  ModulePlacer *local_20;
  undefined8 local_1c;
  undefined4 local_14;
  bool local_d;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((char)this[1].MaterialClass__Armor.ArmorLayers._pad_0x0_0 == '\0') {
    iVar2 = (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity;
    local_c = iVar2 + 1;
    util__Darray_L_util__Reflectable_P_G___SetSize
              ((Darray_L_util__Reflectable_P_G_ *)
               &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,&local_c);
    bVar1 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,iVar2);
    if (bVar1) {
      *(code **)((this->GetAllModulesNeedingCooling_MemoizedValue).Data.Size + -4 +
                (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity * 4) = (long long int (*)())(GetAllRadiatorUnworkableInterreflections_Clear);
    }
    local_14 = 0;
    local_1c = 0;
    local_c = (**(code **)((int)&((this->MaterialClass__Armor).ArmorLayers.Data)->Thickness_m + 4))();
    local_c = local_c * 2;
    util__AssocArray_L_ModulePlacer_const_P_Cbool_G___AssocArray_L_ModulePlacer_const_P_Cbool_G_
              ((AssocArray_L_ModulePlacer_const_P_Cbool_G_ *)&local_1c,&local_c);
    local_c = 0;
    iVar2 = (**(code **)((int)&((this->MaterialClass__Armor).ArmorLayers.Data)->Thickness_m + 4))();
    if (local_c < iVar2) {
      do {
        pMVar3 = (ModulePlacer *)(*(code *)((this->MaterialClass__Armor).ArmorLayers.Data)->Composition)(&local_c);
        local_d = IsRadiatorInterreflectingWithDifferentRadiator(this,pMVar3);
        local_20 = pMVar3;
        util__AssocArray_L_ModulePlacer_const_P_Cbool_G___Add
                  ((AssocArray_L_ModulePlacer_const_P_Cbool_G_ *)&local_1c,&local_20,&local_d);
        local_c = local_c + 1;
        iVar2 = (**(code **)((int)&((this->MaterialClass__Armor).ArmorLayers.Data)->Thickness_m + 4))();
      } while (local_c < iVar2);
    }
    util__AssocArray_L_ModulePlacer_const_P_Cbool_G___AssocArray_L_ModulePlacer_const_P_Cbool_G_
              ((AssocArray_L_ModulePlacer_const_P_Cbool_G_ *)&local_30,
               (AssocArray_L_struct_ModulePlacer_const_P_Cbool_G_ *)&local_1c);
    local_24 = 1;
    util__AssocArray_L_ModulePlacer_const_P_Cbool_G___op_assign
              ((AssocArray_L_ModulePlacer_const_P_Cbool_G_ *)&this[1].MaterialClass__Armor._pad_0x4_1,
               (AssocArray_L_struct_ModulePlacer_const_P_Cbool_G_ *)&local_30);
    *(undefined1 *)&this[1].MaterialClass__Armor.ArmorLayers._pad_0x0_0 = 1;
    if (local_30 != (void *)0x0) {
      port_op_delete(local_30);
    }
    if (local_2c != (void *)0x0) {
      port_op_delete(local_2c);
    }
    if ((void *)local_1c != (void *)0x0) {
      port_op_delete((void *)local_1c);
    }
    if ((*(uint32_t*)((char*)&(local_1c)+4)) != (void *)0x0) {
      port_op_delete((*(uint32_t*)((char*)&(local_1c)+4)));
    }
  }
  return;
}

//==== 00546e30 GetAmmoBaysForModule ====


/* public: class util__Darray_L_structModulePlacer_P_G_ __thiscall
   CraftBlueprint__GetAmmoBaysForModule(struct ModulePlacer const &)const  */

void __thiscall CraftBlueprint__GetAmmoBaysForModule(CraftBlueprint *this,ModulePlacer *param_1)

{
  undefined8 stack0xfffffffc;
  int *piVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *in_stack_00000008;
  void *pvStack_24;
  int iStack_14;
  int *piStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piStack_10 = in_stack_00000008;
  piVar3 = (int *)GetModulePlacers(this);
  param_1->ModuleType = (Module *)0x0;
  param_1->Multiplier = 0;
  *(undefined4 *)&param_1->Position_m = 0;
  *(undefined4 *)((int)&param_1->Position_m + 4) = 0;
  iVar4 = (**(code **)(uintptr_t)(*piVar3 + 0xc))();
  util__Darray_class_Manager____Darray_class_Manager((Darray_L_class_Manager_P_G_ *)param_1,iVar4);
  iStack_c = 0;
  iVar4 = (**(code **)(uintptr_t)(*piVar3 + 0xc))();
  if (iStack_c < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)*piVar3)(&iStack_c);
      piVar1 = (int *)*puVar5;
      iVar4 = (**(code **)(*(int *)*piVar1 + 0x130))();
      if ((iVar4 == 2) && (*(int *)(*piVar1 + 0x80) == *piStack_10)) {
        iVar4 = *(int *)&param_1->Position_m;
        iStack_14 = iVar4 + 1;
        util__Darray_class_util__Reflectable____SetSize
                  ((Darray_L_class_util__Reflectable_P_G_ *)param_1,&iStack_14);
        bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                          ((Darray_L_enum_GraphicsResource__Type_G_ *)param_1,iVar4);
        if (bVar2) {
          *(undefined4 *)(param_1->Multiplier + -4 + *(int *)&param_1->Position_m * 4) = *puVar5;
        }
      }
      iStack_c = iStack_c + 1;
      iVar4 = (**(code **)(uintptr_t)(*piVar3 + 0xc))();
    } while (iStack_c < iVar4);
  }
  if (pvStack_24 != (void *)0x0) {
    port_op_delete(pvStack_24);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00546f20 GetAmmoExplosion_Clear ====


/* public: void __thiscall CraftBlueprint__GetAmmoExplosion_Clear(void)const  */

void __thiscall CraftBlueprint__GetAmmoExplosion_Clear(CraftBlueprint *this)

{
  undefined **ppuStack_24;
  void *pvStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  ppuStack_24 = (undefined **)(&vftable_15);
  pvStack_20 = (void *)0x0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  util__Darray_struct_MaterialConstituent___operator
            ((Darray_L_struct_MaterialConstituent_G_ *)
             ((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 8),
             (Darray_L_struct_MaterialConstituent_G_ *)&ppuStack_24);
  ppuStack_24 = (undefined **)(&vftable_15);
  (this->GetEstimatedTurnTorque_N_m_MemoizedValue).Data = (double)CONCAT44(uStack_10,uStack_14);
  *(ulonglong *)&((this->GetEstimatedTurnTorque_N_m_MemoizedValue).IsValidData) = CONCAT44(uStack_8,uStack_c);
  if (pvStack_20 != (void *)0x0) {
    port_op_delete(pvStack_20);
  }
  *(undefined1 *)&(this->GetEstimatedRollTorque_N_m_MemoizedValue).Data = 0;
  return;
}





//==== 00546fa0 GetAmmoExplosion_Memoize ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall CraftBlueprint__GetAmmoExplosion_Memoize(void)const  */

void __thiscall CraftBlueprint__GetAmmoExplosion_Memoize(CraftBlueprint *this)

{
  undefined8 stack0xfffffffc;
  double dVar1;
  int *piVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  AmmoExplosion *pAVar7;
  undefined **local_c8;
  void *local_c4;
  AmmoExplosion local_a8;
  undefined **local_88;
  void *local_84;
  Darray_L_MaterialConstituent_G_ local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined **local_40;
  void *local_3c;
  AmmoExplosion local_30;
  CraftBlueprint *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((char)((this->GetEstimatedRollTorque_N_m_MemoizedValue).Data == '\0')){
    iVar5 = (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity;
    local_c = iVar5 + 1;
    local_10 = this;
    util__Darray_L_util__Reflectable_P_G___SetSize
              ((Darray_L_util__Reflectable_P_G_ *)
               &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,&local_c);
    bVar3 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,iVar5);
    if (bVar3) {
      *(code **)((this->GetAllModulesNeedingCooling_MemoizedValue).Data.Size + -4 +
                (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity * 4) = (long long int (*)())(GetAmmoExplosion_Clear);
    }
    local_30.GasComposition._pad_0x0_0 = (int)&vftable_15;
    local_30.GasComposition.Data = (MaterialConstituent *)0x0;
    local_30.GasComposition.Size = 0;
    local_30.GasComposition.Capacity = 0;
    local_30.Mass_kg = 0.0;
    local_30.Temperature_K = 0.0;
    piVar4 = (int *)GetRepeatedModules(this);
    local_c = 0;
    iVar5 = (**(code **)(uintptr_t)(*piVar4 + 0xc))();
    if (local_c < iVar5) {
      do {
        puVar6 = (undefined4 *)(**(code **)*piVar4)(&local_c);
        piVar2 = (int *)*puVar6;
        iVar5 = (**(code **)(uintptr_t)(*piVar2 + 0xd8))(&local_88);
        dVar1 = *(double *)(iVar5 + 0x10);
        local_88 = (undefined **)(&vftable_15);
        if (local_84 != (void *)0x0) {
          port_op_delete(local_84);
        }
        local_84 = (void *)0x0;
        local_88 = (undefined **)(&vftable);
        if (0.0 < dVar1) {
          pAVar7 = (AmmoExplosion *)(**(code **)(uintptr_t)(*piVar2 + 0xd8))(&local_c8);
          pAVar7 = CompositeAmmoExplosions(&local_a8,&local_30,pAVar7);
          util__Darray_L_MaterialConstituent_G___op_assign
                    (&local_30.GasComposition,(Darray_L_struct_MaterialConstituent_G_ *)pAVar7);
          local_30.Mass_kg = pAVar7->Mass_kg;
          local_30.Temperature_K = pAVar7->Temperature_K;
          local_a8.GasComposition._pad_0x0_0 = (int)&vftable_15;
          if (local_a8.GasComposition.Data != (MaterialConstituent *)0x0) {
            port_op_delete(local_a8.GasComposition.Data);
          }
          local_a8.GasComposition.Data = (MaterialConstituent *)0x0;
          local_a8.GasComposition._pad_0x0_0 = (int)&vftable;
          local_c8 = (undefined **)(&vftable_15);
          if (local_c4 != (void *)0x0) {
            port_op_delete(local_c4);
          }
          local_c4 = (void *)0x0;
          local_c8 = (undefined **)(&vftable);
        }
        local_c = local_c + 1;
        iVar5 = (**(code **)(uintptr_t)(*piVar4 + 0xc))();
        this = local_10;
      } while (local_c < iVar5);
    }
    local_40 = (undefined **)(&vftable_6);
    if (local_3c != (void *)0x0) {
      port_op_delete(local_3c);
    }
    *(uint32_t *)&local_3c = (uint32_t)(uintptr_t)((void *)0x0);
    local_40 = (undefined **)(&vftable);
    util__Darray_L_MaterialConstituent_G___Darray_L_MaterialConstituent_G_
              (&local_68,(Darray_L_struct_MaterialConstituent_G_ *)&local_30);
    local_48 = 1;
    *(uint32_t *)&local_58 = local_30.Mass_kg;
    uStack_54 = (*(uint32_t *)((char *)&(local_30.Mass_kg) + 4));
    uStack_50 = local_30.Temperature_K;
    uStack_4c = (*(uint32_t *)((char *)&(local_30.Temperature_K) + 4));
    util__Darray_L_MaterialConstituent_G___op_assign
              ((Darray_L_MaterialConstituent_G_ *)
               ((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 8),
               (Darray_L_struct_MaterialConstituent_G_ *)&local_68);
    *(undefined4 *)&(this->GetEstimatedTurnTorque_N_m_MemoizedValue).Data = local_58;
    *(undefined4 *)((int)&(this->GetEstimatedTurnTorque_N_m_MemoizedValue).Data + 4) = uStack_54;
    *(undefined4 *)&(this->GetEstimatedTurnTorque_N_m_MemoizedValue).IsValidData = uStack_50;
    *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetEstimatedTurnTorque_N_m_MemoizedValue)) + 0xc)) = uStack_4c;
    *(undefined1 *)&(this->GetEstimatedRollTorque_N_m_MemoizedValue).Data = local_48;
    local_68._pad_0x0_0 = (int)&vftable_15;
    if (local_68.Data != (MaterialConstituent *)0x0) {
      port_op_delete(local_68.Data);
    }
    local_68.Data = (MaterialConstituent *)0x0;
    local_68._pad_0x0_0 = (int)&vftable;
    local_30.GasComposition._pad_0x0_0 = (int)&vftable_15;
    if (local_30.GasComposition.Data != (MaterialConstituent *)0x0) {
      port_op_delete(local_30.GasComposition.Data);
    }
  }
  return;
}

//==== 00547220 GetAmmoModules ====


/* public: class util__Darray_L_classAmmoModule_P_G_ __thiscall
   CraftBlueprint__GetAmmoModules(void)const  */

void __thiscall CraftBlueprint__GetAmmoModules(CraftBlueprint *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  int *piVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int iVar6;
  Darray_L_class_util__Reflectable_P_G_ *in_stack_00000004;
  undefined **ppuStack_24;
  void *pvStack_20;
  undefined4 uStack_14;
  int iStack_10;
  uint uStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar2 = (int *)GetModulesOfType(this,(int)&ppuStack_24);
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  uVar3 = (**(code **)(uintptr_t)(*piVar2 + 0xc))();
  *(undefined ***)in_stack_00000004 = (undefined **)(&vftable_2);
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(uint *)(in_stack_00000004 + 0xc) = uVar3;
  if (((int)uVar3 < 0) || (0x3fffffff < (int)uVar3)) {
    *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  }
  else if (0 < (int)uVar3) {
    uStack_c = -(uint)((int)((ulonglong)uVar3 * 4 >> 0x20) != 0) | (uint)((ulonglong)uVar3 * 4);
    pvVar4 = (void *)(uintptr_t)(port_op_new(uStack_c));
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      memset(pvVar4,0,uStack_c);
    }
    iVar6 = 0;
    *(void **)(in_stack_00000004 + 4) = pvVar4;
    if (0 < *(int *)(in_stack_00000004 + 0xc)) {
      do {
        *(undefined4 *)(*(int *)(in_stack_00000004 + 4) + iVar6 * 4) = 0;
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(in_stack_00000004 + 0xc));
    }
  }
  uStack_c = 0;
  iVar6 = (**(code **)(uintptr_t)(*piVar2 + 0xc))();
  if ((int)uStack_c < iVar6) {
    do {
      puVar5 = (undefined4 *)(**(code **)*piVar2)(&uStack_c);
      iVar6 = *(int *)(in_stack_00000004 + 8);
      uStack_14 = *puVar5;
      iStack_10 = iVar6 + 1;
      util__Darray_class_util__Reflectable____SetSize(in_stack_00000004,&iStack_10);
      bVar1 = util__Darray_enum_GraphicsResource__Type___CheckSize
                        ((Darray_L_enum_GraphicsResource__Type_G_ *)in_stack_00000004,iVar6);
      if (bVar1) {
        *(undefined4 *)(*(int *)(in_stack_00000004 + 4) + -4 + *(int *)(in_stack_00000004 + 8) * 4)
             = uStack_14;
      }
      uStack_c = uStack_c + 1;
      iVar6 = (**(code **)(uintptr_t)(*piVar2 + 0xc))();
    } while ((int)uStack_c < iVar6);
  }
  ppuStack_24 = (undefined **)(&vftable_6);
  if (pvStack_20 != (void *)0x0) {
    port_op_delete(pvStack_20);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00547360 GetApproximateComposition_Clear ====


/* public: void __thiscall CraftBlueprint__GetApproximateComposition_Clear(void)const  */

void __thiscall CraftBlueprint__GetApproximateComposition_Clear(CraftBlueprint *this)

{
  *(undefined4 *)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 4) = 0;
  *(undefined1 *)((int)(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x24)
       = 0;
  return;
}





//==== 00547380 GetApproximateComposition_Memoize ====


/* public: void __thiscall CraftBlueprint__GetApproximateComposition_Memoize(void)const  */

void __thiscall CraftBlueprint__GetApproximateComposition_Memoize(CraftBlueprint *this)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iStack_8;
  
  if (*(char *)((int)(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x24)
      == '\0') {
    iVar2 = (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity;
    iStack_8 = iVar2 + 1;
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)
               &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,&iStack_8);
    bVar1 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)
                       &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,iVar2);
    if (bVar1) {
      *(code **)((this->GetAllModulesNeedingCooling_MemoizedValue).Data.Size + -4 +
                (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity * 4) = (long long int (*)())(GetApproximateComposition_Clear);
    }
    iVar2 = (**(code **)((this->MaterialClass__Armor).GetInnerArmorSpline_m_MemoizedValue.Data.Capacity + 0xc))();
    if (iVar2 < 1) {
      iVar2 = (**(code **)((int)&((this->MaterialClass__Armor).ArmorLayers.Data)->Thickness_m + 4))();
      if (iVar2 < 1) {
        uVar4 = 0;
      }
      else {
        iStack_8 = 0;
        puVar3 = (undefined4 *)(*(code *)((this->MaterialClass__Armor).ArmorLayers.Data)->Composition)(&iStack_8);
        uVar4 = (**(code **)(*(int *)*puVar3 + 0xb0))();
      }
    }
    else {
      puVar3 = (undefined4 *)
               (**(code **)((this->MaterialClass__Armor).GetInnerArmorSpline_m_MemoizedValue.Data.Capacity + 4))();
      uVar4 = *puVar3;
    }
    iStack_8 = CONCAT31((*(uint24_t*)((char*)&(iStack_8)+1)),1);
    *(undefined4 *)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 4) =
         uVar4;
    *(int *)((int)(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x24) =
         iStack_8;
  }
  return;
}





//==== 00547440 GetAreaCrossSection_m2 ====


/* public: double __thiscall CraftBlueprint__GetAreaCrossSection_m2(void)const  */

double __thiscall CraftBlueprint__GetAreaCrossSection_m2(CraftBlueprint *this)

{
  int iVar1;
  bool bVar2;
  double dVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int iStack_8;
  
  if (*(char *)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 3) == '\0')
  {
    iVar1 = (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity;
    iStack_8 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)
               &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,&iStack_8);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)
                       &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,iVar1);
    if (bVar2) {
      *(code **)((this->GetAllModulesNeedingCooling_MemoizedValue).Data.Size + -4 +
                (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity * 4) = (long long int (*)())(GetCrossSection_m2_Clear);
    }
    dVar3 = CraftBlueprintArmor__GetTotalArealCrossSection_m2
                      ((CraftBlueprintArmor *)
                       &(this->MaterialClass__Armor).CraftBlueprintArmorMemoizationHandlerInstance.ResetFunctions.
                        Size);
    uStack_10 = CONCAT31((*(uint24_t*)((char*)&(uStack_10)+1)),1);
    uStack_18 = SUB84(dVar3,0);
    uStack_14 = (undefined4)((ulonglong)dVar3 >> 0x20);
    *(undefined4 *)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 2) =
         uStack_18;
    *(undefined4 *)
     ((int)(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x14) = uStack_14
    ;
    *(undefined4 *)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 3) =
         uStack_10;
    *(undefined4 *)
     ((int)(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x1c) = uStack_c;
    if (*(char *)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 3) == '\0'
       ) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  return (this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data[2];
}





//==== 005475f0 GetArmamentInfo ====


/* public: class util__Str_L_char_G_ __thiscall CraftBlueprint__GetArmamentInfo(void)const  */

Str_L_char_G_ * __thiscall
CraftBlueprint__GetArmamentInfo(CraftBlueprint *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined8 stack0xfffffffc;
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  Str_L_char_G_ *pSVar6;
  char *pcVar7;
  char *pcVar8;
  Str_L_char_G_ SStack_80;
  Str_L_char_G_ SStack_74;
  undefined **ppuStack_68;
  void *pvStack_64;
  undefined **ppuStack_58;
  void *pvStack_54;
  undefined **ppuStack_48;
  void *pvStack_44;
  undefined4 uStack_38;
  undefined **ppuStack_34;
  void *pvStack_30;
  undefined **ppuStack_24;
  void *pvStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iStack_14 = 0;
  __return_storage_ptr__->Data = (char *)0x0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->Length = 0;
  __return_storage_ptr__->Data = (char *)0x0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->Length = 0;
  GetModulesOfType(this,(int)&ppuStack_48);
  util__MapCast_class_WeaponModule__class_Module((Darray_L_class_Module_P_G_ *)&ppuStack_34);
  ppuStack_48 = (undefined **)(&vftable_6);
  if (pvStack_44 != (void *)0x0) {
    port_op_delete(pvStack_44);
  }
  pvStack_44 = (void *)0x0;
  ppuStack_48 = (undefined **)(&vftable);
  ppuStack_24 = (undefined **)0x0;
  pvStack_20 = (void *)0x0;
  iStack_1c = 0;
  uStack_18 = 0;
  iVar3 = (*(code *)ppuStack_34[3])();
  util__Darray_class_Manager____Darray_class_Manager((Darray_L_class_Manager_P_G_ *)&ppuStack_24,iVar3)
  ;
  iStack_10 = 0;
  iVar3 = (*(code *)ppuStack_34[3])();
  if (iStack_10 < iVar3) {
    do {
      puVar4 = (undefined4 *)(*(code *)*ppuStack_34)(&iStack_10);
      iVar3 = iStack_1c;
      uVar1 = *puVar4;
      iStack_c = iStack_1c + 1;
      util__Darray_class_util__Reflectable____SetSize
                ((Darray_L_class_util__Reflectable_P_G_ *)&ppuStack_24,&iStack_c);
      bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                        ((Darray_L_enum_GraphicsResource__Type_G_ *)&ppuStack_24,iVar3);
      if (bVar2) {
        *(undefined4 *)((int)pvStack_20 + iStack_1c * 4 + -4) = uVar1;
      }
      iStack_10 = iStack_10 + 1;
      iVar3 = (*(code *)ppuStack_34[3])();
    } while (iStack_10 < iVar3);
  }
  Module__SortModulesByType((Darray_L_class_Module_const_P_G_ *)&ppuStack_68);
  piVar5 = (int *)util__CountDuplicates_enum_Order__Type((Darray_L_enum_Order__Type_G_ *)&ppuStack_58);
  iStack_c = 0;
  iVar3 = (**(code **)(uintptr_t)(*piVar5 + 0xc))();
  if (iStack_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)*piVar5)(&iStack_c);
      pcVar8 = "\n";
      bVar2 = iStack_14 == 0;
      uStack_38 = puVar4[1];
      iStack_14 = iStack_14 + 1;
      if (bVar2) {
        pcVar8 = "";
      }
      pSVar6 = Module__GetQuickName((Module *)*puVar4,&SStack_80);
      if (pSVar6->Capacity < 1) {
        pcVar7 = "";
      }
      else {
        pcVar7 = pSVar6->Data;
      }
      pSVar6 = util__Printf(&SStack_74,"%s%ix %s",pcVar8,uStack_38,pcVar7);
      util__Str_char___operator__o10(__return_storage_ptr__,pSVar6);
      if (SStack_74.Data != (char *)0x0) {
        port_op_delete(SStack_74.Data);
        SStack_74.Data = (char *)0x0;
      }
      if (SStack_80.Data != (char *)0x0) {
        port_op_delete(SStack_80.Data);
        SStack_80.Data = (char *)0x0;
      }
      iStack_c = iStack_c + 1;
      iVar3 = (**(code **)(uintptr_t)(*piVar5 + 0xc))();
    } while (iStack_c < iVar3);
  }
  ppuStack_58 = &vftable_109;
  if (pvStack_54 != (void *)0x0) {
    port_op_delete(pvStack_54);
  }
  pvStack_54 = (void *)0x0;
  ppuStack_58 = (undefined **)(&vftable);
  ppuStack_68 = (undefined **)(&vftable_2);
  if (pvStack_64 != (void *)0x0) {
    port_op_delete(pvStack_64);
  }
  pvStack_64 = (void *)0x0;
  ppuStack_68 = (undefined **)(&vftable);
  ppuStack_24 = (undefined **)(&vftable_2);
  if (pvStack_20 != (void *)0x0) {
    port_op_delete(pvStack_20);
  }
  pvStack_20 = (void *)0x0;
  ppuStack_24 = (undefined **)(&vftable);
  ppuStack_34 = (undefined **)(&vftable_2);
  if (pvStack_30 != (void *)0x0) {
    port_op_delete(pvStack_30);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}





//==== 00547860 GetArmorDiameter_m ====


/* public: double __thiscall CraftBlueprint__GetArmorDiameter_m(void)const  */

double __thiscall CraftBlueprint__GetArmorDiameter_m(CraftBlueprint *this)

{
  double dVar1;
  
  CraftBlueprintArmor__GetMaxArmorRadius_m_Memoize
            ((CraftBlueprintArmor *)
             &(this->MaterialClass__Armor).CraftBlueprintArmorMemoizationHandlerInstance.ResetFunctions.Size);
  if ((this->MaterialClass__Armor).GetAxialMomentOfInertia_kg_m2_MemoizedValue.IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar1 = (this->MaterialClass__Armor).GetAxialMomentOfInertia_kg_m2_MemoizedValue.Data;
  return dVar1 + dVar1;
}





//==== 005478a0 GetAttachingModules ====


/* public: class util__Darray_L_structModulePlacer_P_G_ __thiscall
   CraftBlueprint__GetAttachingModules(void)const  */

void __thiscall CraftBlueprint__GetAttachingModules(CraftBlueprint *this)

{
  undefined8 stack0xfffffffc;
  ArmorLayerBlueprint **ppAVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  Darray_L_class_Manager_P_G_ *in_stack_00000004;
  int iStack_14;
  undefined1 uStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  ppAVar1 = &(this->MaterialClass__Armor).ArmorLayers.Data;
  uStack_10 = 0;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  iVar4 = (**(code **)((int)&(*ppAVar1)->Thickness_m + 4))();
  util__Darray_class_Manager____Darray_class_Manager(in_stack_00000004,iVar4);
  iStack_c = 0;
  iVar4 = (**(code **)((int)&(*ppAVar1)->Thickness_m + 4))();
  if (iStack_c < iVar4) {
    do {
      puVar5 = (undefined4 *)(*(code *)(*ppAVar1)->Composition)(&iStack_c);
      cVar2 = (**(code **)(*(int *)*puVar5 + 0x78))();
      if (cVar2 != '\0') {
        iVar4 = *(int *)(in_stack_00000004 + 8);
        iStack_14 = iVar4 + 1;
        util__Darray_class_util__Reflectable____SetSize
                  ((Darray_L_class_util__Reflectable_P_G_ *)in_stack_00000004,&iStack_14);
        bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize
                          ((Darray_L_enum_GraphicsResource__Type_G_ *)in_stack_00000004,iVar4);
        if (bVar3) {
          *(undefined4 **)
           (*(int *)(in_stack_00000004 + 4) + -4 + *(int *)(in_stack_00000004 + 8) * 4) = puVar5;
        }
      }
      iStack_c = iStack_c + 1;
      iVar4 = (**(code **)((int)&(*ppAVar1)->Thickness_m + 4))();
    } while (iStack_c < iVar4);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00547950 GetBoundingCylinder_m_Clear_00547950 ====


/* public: void __thiscall CraftBlueprint__GetBoundingCylinder_m_Clear(void)const  */

void __thiscall CraftBlueprint__GetBoundingCylinder_m_Clear(CraftBlueprint *this)

{
  *(undefined1 *)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 1) = 0;
  *(undefined4 *)&(this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).IsValidData = 0;
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue)) + 0x4c)) = 0;
  *(undefined4 *)(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data = 0;
  *(undefined4 *)((int)(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 4) =
       0;
  return;
}





//==== 00547970 GetBoundingCylinder_m_Memoize_00547970 ====


/* public: void __thiscall CraftBlueprint__GetBoundingCylinder_m_Memoize(void)const  */

void __thiscall CraftBlueprint__GetBoundingCylinder_m_Memoize(CraftBlueprint *this)

{
  double dVar1;
  int iVar2;
  bool bVar3;
  double dVar4;
  undefined7 uStack_13;
  undefined4 uStack_c;
  int iStack_8;
  
  if (*(char *)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 1) == '\0')
  {
    iVar2 = (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity;
    _uStack_c = CONCAT44(iVar2 + 1,uStack_c);
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)
               &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,&iStack_8);
    bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)
                       &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,iVar2);
    if (bVar3) {
      *(code **)((this->GetAllModulesNeedingCooling_MemoizedValue).Data.Size + -4 +
                (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity * 4) = (long long int (*)())(GetBoundingCylinder_m_Clear);
    }
    GetLength_m_Memoize(this);
    if (*(char *)((this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 8) == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar4 = GetMaximumRadius_m(this);
    dVar1 = (this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data[7];
    *(double *)&(this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).IsValidData = dVar4;
    (this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data[0] = dVar1;
    (this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data[1] =
         (double)CONCAT71(uStack_13,1);
  }
  return;
}





//==== 00547a30 GetCenterOfMass_km_Clear_00547a30 ====


/* public: void __thiscall CraftBlueprint__GetCenterOfMass_km_Clear(void)const  */

void __thiscall CraftBlueprint__GetCenterOfMass_km_Clear(CraftBlueprint *this)

{
  *(undefined1 *)((this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 4) = 0;
  *(undefined4 *)((this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 1) = 0;
  *(undefined4 *)((int)(this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0xc) = 0;
  *(undefined4 *)((this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 2) = 0;
  *(undefined4 *)((int)(this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x14) = (undefined4)(uintptr_t) (long long int (*)())(0);
  (this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data[3] = 0.0;
  return;
}





//==== 00547a50 GetCenterOfMass_km_MemoizedFunction_00547a50 ====


/* private: struct util__Vec3_L_double_G_ 
   CraftBlueprint__GetCenterOfMass_km_MemoizedFunction(void)const  */

Vec3_L_double_G_ * 
CraftBlueprint__GetCenterOfMass_km_MemoizedFunction
          (CraftBlueprint *this,Vec3_L_double_G_ *__return_storage_ptr__)

{
  undefined8 stack0xfffffffc;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  double *pdVar8;
  Vec3_L_double_G_ *pVVar9;
  double dVar10;
  Vec3_L_double_G_ VStack_84;
  undefined1 auStack_6c [24];
  double dStack_54;
  double dStack_4c;
  undefined8 uStack_44;
  double dStack_3c;
  double dStack_34;
  undefined8 uStack_2c;
  double dStack_24;
  undefined8 uStack_1c;
  undefined4 uStack_14;
  undefined8 *puStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  uStack_1c = 0;
  uStack_14 = 0;
  GetAllCompartmentOffsets_m_Memoize(this);
  if ((this->GetAllCompartmentSelfIntersections_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  util__AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__struct_util__Vec3_double_____AssocArray_struct_util__tuple2_struct_ModulePlacer_const__int__struct_util__Vec3_double
            ((AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cstruct_util__Vec3_L_double_G___G_
              *)&uStack_1c,
             (AssocArray_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cstruct_util__Vec3_L_double_G___G_
              *)&this->GetAllCompartmentSelfIntersections_MemoizedValue);
  if ((char)((this->GetCrossSection_m2_MemoizedValue).Data == '\0')){
    iVar6 = (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity;
    iStack_c = iVar6 + 1;
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)
               &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,&iStack_c);
    bVar5 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)
                       &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,iVar6);
    if (bVar5) {
      *(code **)((this->GetAllModulesNeedingCooling_MemoizedValue).Data.Size + -4 +
                (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity * 4) = (long long int (*)())(GetStagingWetMass_kg_Clear);
    }
    dStack_24 = GetDryMass_kg(this,true);
    dVar10 = GetReactionMass_kg(this,true);
    uVar3 = uStack_2c;
    uStack_2c = (double)CONCAT71((*(uint56_t*)((char*)&(uStack_2c)+1)),1);
    uVar4 = uStack_2c;
    dStack_34 = dVar10 + dStack_24;
    (*(uint32_t*)((char*)&(uStack_2c)+4)) = SUB84(uVar3,4);
    *(double *)&(this->GetBoundingCylinder_m_MemoizedValue).IsValidData = dVar10 + dStack_24;
    *(undefined4 *)&(this->GetCrossSection_m2_MemoizedValue).Data = (undefined4)uStack_2c;
    *(undefined4 *)((int)&(this->GetCrossSection_m2_MemoizedValue).Data + 4) = (*(uint32_t*)((char*)&(uStack_2c)+4));
    if ((char)((this->GetCrossSection_m2_MemoizedValue).Data == '\0')){
      uStack_2c = (double)uVar4;
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  uStack_2c = *(double *)&(this->GetBoundingCylinder_m_MemoizedValue).IsValidData;
  dStack_24 = 0.0;
  dStack_54 = 0.0;
  dStack_4c = 0.0;
  if (uStack_2c <= 0.0) {
    uStack_44 = 0;
    pdVar8 = &dStack_54;
  }
  else {
    puStack_10 = &uStack_1c;
    iStack_c = 0;
    iVar6 = (**(code **)((int)&((this->MaterialClass__Armor).ArmorLayers.Data)->Thickness_m + 4))();
    if (iStack_c < iVar6) {
      do {
        uVar7 = (*(code *)((this->MaterialClass__Armor).ArmorLayers.Data)->Composition)(&iStack_c);
        pdVar8 = (double *)FUN_0053f750(auStack_6c,uVar7);
        dStack_54 = *pdVar8 + dStack_54;
        dStack_4c = pdVar8[1] + dStack_4c;
        dStack_24 = pdVar8[2] + dStack_24;
        iStack_c = iStack_c + 1;
        iVar6 = (**(code **)((int)&((this->MaterialClass__Armor).ArmorLayers.Data)->Thickness_m + 4))();
      } while (iStack_c < iVar6);
    }
    pVVar9 = CraftBlueprintArmor__GetCenterOfMassTerm_km_kg
                       ((CraftBlueprintArmor *)
                        &(this->MaterialClass__Armor).CraftBlueprintArmorMemoizationHandlerInstance.ResetFunctions.
                         Size,&VStack_84);
    dStack_3c = (pVVar9->X + dStack_54) / uStack_2c;
    dStack_34 = (pVVar9->Y + dStack_4c) / uStack_2c;
    pdVar8 = &dStack_3c;
    uStack_2c = (pVVar9->Z + dStack_24) / uStack_2c;
  }
  uVar7 = *(undefined4 *)((int)pdVar8 + 4);
  uVar1 = *(undefined4 *)(pdVar8 + 1);
  uVar2 = *(undefined4 *)((int)pdVar8 + 0xc);
  *(undefined4 *)&__return_storage_ptr__->X = *(undefined4 *)pdVar8;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = uVar7;
  *(undefined4 *)&__return_storage_ptr__->Y = uVar1;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = uVar2;
  __return_storage_ptr__->Z = pdVar8[2];
  if ((void *)uStack_1c != (void *)0x0) {
    port_op_delete((void *)uStack_1c);
  }
  if ((*(uint32_t*)((char*)&(uStack_1c)+4)) != (void *)0x0) {
    port_op_delete((*(uint32_t*)((char*)&(uStack_1c)+4)));
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}





//==== 00547f80 GetCompartmentOBB ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: struct util__OBB_L_structutil__Vec3_L_double_G__Cstructutil__Quaternion_L_double_G__Cdouble_G_
   __thiscall CraftBlueprint__GetCompartmentOBB(struct ModulePlacer const &,int)const  */

OBB_L_util__Vec3_L_double_G__Cutil__Quaternion_L_double_G__Cdouble_G_ * __thiscall
CraftBlueprint__GetCompartmentOBB
          (CraftBlueprint *this,
          OBB_L_util__Vec3_L_double_G__Cutil__Quaternion_L_double_G__Cdouble_G_ *__return_storage_ptr__,
          ModulePlacer *param_1,int param_2)

{
  undefined8 stack0xfffffffc;
  char cVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  tuple2_L_ModulePlacer_const__P_Cbool_G_ *ptVar10;
  double *pdVar11;
  int iVar12;
  uint uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 local_90 [48];
  undefined8 local_60;
  undefined8 uStack_58;
  ModulePlacer *local_48;
  undefined4 uStack_44;
  ModulePlacer *pMStack_40;
  undefined4 uStack_3c;
  ModulePlacer *local_38;
  undefined4 uStack_34;
  ModulePlacer *pMStack_30;
  undefined4 uStack_2c;
  double local_18;
  OBB_L_util__Vec3_L_double_G__Cutil__Quaternion_L_double_G__Cdouble_G_ *local_10;
  ModulePlacer *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = param_1;
  local_10 = __return_storage_ptr__;
  GetAllCompartmentOffsets_m_Memoize(this);
  if ((this->GetAllCompartmentSelfIntersections_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  uVar13 = (this->GetAllCompartmentSelfIntersections_MemoizedValue).Data.Capacity;
  if (uVar13 != 0) {
    uVar9 = (param_2 & 0xffU) * 0x401;
    uVar9 = ((uVar9 >> 6 ^ uVar9) + (param_2 >> 8 & 0xffU)) * 0x401;
    uVar9 = ((uVar9 >> 6 ^ uVar9) + (param_2 >> 0x10 & 0xffU)) * 0x401;
    uVar9 = ((uVar9 >> 6 ^ uVar9) + (param_2 >> 0x18 & 0xffU)) * 0x401;
    uVar9 = (uVar9 ^ uVar9 >> 6) * 9;
    for (uVar9 = ((uVar9 >> 0xb ^ uVar9) * 0x8001 + (int)param_1 * -0x61c8864f) % uVar13;
        (int)uVar9 < 0; uVar9 = uVar9 + uVar13) {
    }
    if ((int)uVar13 <= (int)uVar9) {
      uVar9 = (int)uVar9 % (int)uVar13;
    }
    cVar1 = (this->GetAllCompartmentSelfIntersections_MemoizedValue).Data.DataInUse[uVar9];
    for (iVar12 = 0; (param_1 = local_c, cVar1 != '\0' && (iVar12 < (int)uVar13));
        iVar12 = iVar12 + 1) {
      ptVar10 = (this->GetAllCompartmentSelfIntersections_MemoizedValue).Data.Data;
      uVar13 = (this->GetAllCompartmentSelfIntersections_MemoizedValue).Data.Capacity;
      if ((ptVar10[uVar9 * 4].Value1 == local_c) &&
         (uVar13 = (this->GetAllCompartmentSelfIntersections_MemoizedValue).Data.Capacity,
         *(int *)&ptVar10[uVar9 * 4].Value2 == param_2)) {
        ptVar10 = ptVar10 + uVar9 * 4 + 1;
        goto LAB_005480c4;
      }
      for (uVar9 = uVar9 + 1; (int)uVar9 < 0; uVar9 = uVar9 + uVar13) {
      }
      if ((int)uVar13 <= (int)uVar9) {
        uVar9 = (int)uVar9 % (int)uVar13;
      }
      cVar1 = (this->GetAllCompartmentSelfIntersections_MemoizedValue).Data.DataInUse[uVar9];
    }
  }
  ptVar10 = (tuple2_L_ModulePlacer_const__P_Cbool_G_ *)0x0;
LAB_005480c4:
  local_60 = (*(double *)&(ptVar10[0])) / 1000.0;
  uStack_58 = (*(double *)&(ptVar10[1])) / 1000.0;
  local_18 = (*(double *)&(ptVar10[2])) / 1000.0;
  GetAllCompartmentOrientations_Memoize(this);
  if ((this->GetAllCompartmentOperationals_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  uVar13 = (this->GetAllCompartmentOperationals_MemoizedValue).Data.Capacity;
  if (uVar13 != 0) {
    uVar9 = (param_2 & 0xffU) * 0x401;
    uVar9 = ((uVar9 >> 6 ^ uVar9) + (param_2 >> 8 & 0xffU)) * 0x401;
    uVar9 = ((uVar9 >> 6 ^ uVar9) + (param_2 >> 0x10 & 0xffU)) * 0x401;
    uVar9 = ((uVar9 >> 6 ^ uVar9) + (param_2 >> 0x18 & 0xffU)) * 0x401;
    uVar9 = (uVar9 ^ uVar9 >> 6) * 9;
    for (uVar9 = ((uVar9 >> 0xb ^ uVar9) * 0x8001 + (int)param_1 * -0x61c8864f) % uVar13;
        (int)uVar9 < 0; uVar9 = uVar9 + uVar13) {
    }
    if ((int)uVar13 <= (int)uVar9) {
      uVar9 = (int)uVar9 % (int)uVar13;
    }
    cVar1 = (this->GetAllCompartmentOperationals_MemoizedValue).Data.DataInUse[uVar9];
    for (iVar12 = 0; (cVar1 != '\0' && (iVar12 < (int)uVar13)); iVar12 = iVar12 + 1) {
      ptVar10 = (this->GetAllCompartmentOperationals_MemoizedValue).Data.Data;
      uVar13 = (this->GetAllCompartmentOperationals_MemoizedValue).Data.Capacity;
      if ((ptVar10[uVar9 * 5].Value1 == local_c) &&
         (uVar13 = (this->GetAllCompartmentOperationals_MemoizedValue).Data.Capacity,
         *(int *)&ptVar10[uVar9 * 5].Value2 == param_2)) {
        ptVar10 = ptVar10 + uVar9 * 5 + 1;
        goto LAB_0054821f;
      }
      for (uVar9 = uVar9 + 1; (int)uVar9 < 0; uVar9 = uVar9 + uVar13) {
      }
      if ((int)uVar13 <= (int)uVar9) {
        uVar9 = (int)uVar9 % (int)uVar13;
      }
      cVar1 = (this->GetAllCompartmentOperationals_MemoizedValue).Data.DataInUse[uVar9];
    }
  }
  ptVar10 = (tuple2_L_ModulePlacer_const__P_Cbool_G_ *)0x0;
LAB_0054821f:
  local_38 = ptVar10->Value1;
  uStack_34 = *(undefined4 *)&ptVar10->Value2;
  pMStack_30 = ptVar10[1].Value1;
  uStack_2c = *(undefined4 *)&ptVar10[1].Value2;
  local_48 = ptVar10[2].Value1;
  uStack_44 = *(undefined4 *)&ptVar10[2].Value2;
  pMStack_40 = ptVar10[3].Value1;
  uStack_3c = *(undefined4 *)&ptVar10[3].Value2;
  pdVar11 = (double *)(**(code **)(local_c->ModuleType->_pad_0x0_0 + 0xac))(local_90);
  dVar3 = pdVar11[1] * 0.001;
  dVar6 = pdVar11[3] * 0.001;
  dVar17 = *pdVar11 * 0.001;
  dVar14 = pdVar11[4] * 0.001;
  dVar15 = pdVar11[5] * 0.001;
  dVar16 = pdVar11[2] * 0.001;
  dVar8 = dVar17;
  if (dVar6 <= dVar17) {
    dVar8 = dVar6;
  }
  dVar7 = dVar3;
  if (dVar14 <= dVar3) {
    dVar7 = dVar14;
  }
  if (dVar17 <= dVar6) {
    dVar17 = dVar6;
  }
  dVar6 = dVar16;
  if (dVar15 <= dVar16) {
    dVar6 = dVar15;
  }
  if (dVar3 <= dVar14) {
    dVar3 = dVar14;
  }
  *(ModulePlacer * *)&(local_10->Rotator).X = local_38;
  *(undefined4 *)((int)&(local_10->Rotator).X + 4) = uStack_34;
  *(ModulePlacer * *)&(local_10->Rotator).Y = pMStack_30;
  *(undefined4 *)((int)&(local_10->Rotator).Y + 4) = uStack_2c;
  if (dVar16 <= dVar15) {
    dVar16 = dVar15;
  }
  *(ModulePlacer * *)&(local_10->Rotator).Z = local_48;
  *(undefined4 *)((int)&(local_10->Rotator).Z + 4) = uStack_44;
  *(ModulePlacer * *)&(local_10->Rotator).W = pMStack_40;
  *(undefined4 *)((int)&(local_10->Rotator).W + 4) = uStack_3c;
  (*(uint32_t*)((char*)&(auVar4)+8)) = SUB84(dVar7,0);
  (*(uint64_t*)&(auVar4)) = dVar8;
  (*(uint32_t *)((char *)&(auVar4) + 12)) = (int)((ulonglong)dVar7 >> 0x20);
  (local_10->BoundingBox).Lower.X = dVar8;
  (local_10->BoundingBox).Lower.Y = (double)(*(uint64_t*)((char*)&(auVar4)+8));
  *(undefined4 *)&(local_10->Translator).X = (undefined4)local_60;
  *(undefined4 *)((int)&(local_10->Translator).X + 4) = (*(uint32_t*)((char*)&(local_60)+4));
  *(undefined4 *)&(local_10->Translator).Y = (undefined4)uStack_58;
  *(undefined4 *)((int)&(local_10->Translator).Y + 4) = (*(uint32_t*)((char*)&(uStack_58)+4));
  (*(uint32_t*)((char*)&(auVar2)+8)) = SUB84(dVar17,0);
  (*(uint64_t*)&(auVar2)) = dVar6;
  (*(uint32_t *)((char *)&(auVar2) + 12)) = (int)((ulonglong)dVar17 >> 0x20);
  *(undefined16 *)&(local_10->BoundingBox).Lower.Z = *(undefined16 *)&auVar2;
  (*(uint32_t*)((char*)&(auVar5)+8)) = SUB84(dVar16,0);
  (*(uint64_t*)&(auVar5)) = dVar3;
  (*(uint32_t *)((char *)&(auVar5) + 12)) = (int)((ulonglong)dVar16 >> 0x20);
  (local_10->BoundingBox).Upper.Y = dVar3;
  (local_10->BoundingBox).Upper.Z = (double)(*(uint64_t*)((char*)&(auVar5)+8));
  (local_10->Translator).Z = local_18;
  return local_10;
}

//==== 00548310 GetCompartmentOrientation ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: struct util__Quaternion_L_double_G_ 
   CraftBlueprint__GetCompartmentOrientation(struct ModulePlacer const &,int)const  */

Quaternion_L_double_G_ * 
CraftBlueprint__GetCompartmentOrientation
          (CraftBlueprint *this,Quaternion_L_double_G_ *__return_storage_ptr__,ModulePlacer *param_1,
          int param_2)

{
  tuple2_L_ModulePlacer_const__P_Cbool_G_ *ptVar1;
  bool bVar2;
  Vec3_L_double_G_ VVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  Vec2_L_double_G_ *pVVar7;
  uint uVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  
  GetAllCompartmentOffsets_m_Memoize(this);
  if ((this->GetAllCompartmentSelfIntersections_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  uVar8 = (this->GetAllCompartmentSelfIntersections_MemoizedValue).Data.Capacity;
  if (uVar8 != 0) {
    uVar6 = (param_2 & 0xffU) * 0x401;
    uVar6 = ((uVar6 >> 6 ^ uVar6) + (param_2 >> 8 & 0xffU)) * 0x401;
    uVar6 = ((uVar6 >> 6 ^ uVar6) + (param_2 >> 0x10 & 0xffU)) * 0x401;
    uVar6 = ((uVar6 >> 6 ^ uVar6) + (param_2 >> 0x18 & 0xffU)) * 0x401;
    uVar6 = (uVar6 ^ uVar6 >> 6) * 9;
    for (uVar6 = ((uVar6 >> 0xb ^ uVar6) * 0x8001 + (int)param_1 * -0x61c8864f) % uVar8;
        (int)uVar6 < 0; uVar6 = uVar6 + uVar8) {
    }
    if ((int)uVar8 <= (int)uVar6) {
      uVar6 = (int)uVar6 % (int)uVar8;
    }
    cVar4 = (this->GetAllCompartmentSelfIntersections_MemoizedValue).Data.DataInUse[uVar6];
    for (iVar9 = 0; (cVar4 != '\0' && (iVar9 < (int)uVar8)); iVar9 = iVar9 + 1) {
      ptVar1 = (this->GetAllCompartmentSelfIntersections_MemoizedValue).Data.Data;
      uVar8 = (this->GetAllCompartmentSelfIntersections_MemoizedValue).Data.Capacity;
      if ((ptVar1[uVar6 * 4].Value1 == param_1) &&
         (uVar8 = (this->GetAllCompartmentSelfIntersections_MemoizedValue).Data.Capacity,
         *(int *)&ptVar1[uVar6 * 4].Value2 == param_2)) {
        pVVar7 = (Vec2_L_double_G_ *)(ptVar1 + uVar6 * 4 + 1);
        goto LAB_00548454;
      }
      for (uVar6 = uVar6 + 1; (int)uVar6 < 0; uVar6 = uVar6 + uVar8) {
      }
      if ((int)uVar8 <= (int)uVar6) {
        uVar6 = (int)uVar6 % (int)uVar8;
      }
      cVar4 = (this->GetAllCompartmentSelfIntersections_MemoizedValue).Data.DataInUse[uVar6];
    }
  }
  pVVar7 = (Vec2_L_double_G_ *)0x0;
LAB_00548454:
  *(Vec2_L_double_G_ *)&VVar3 = *pVVar7;
  dVar12 = pVVar7[1].X;
  iVar9 = (**(code **)(param_1->ModuleType->_pad_0x0_0 + 0x130))();
  dVar15 = Module__GetPackingRadius_m(param_1->ModuleType);
  CraftBlueprintArmor__GetMaxArmorRadius_m_Memoize();
  if ((this->MaterialClass__Armor).GetAxialMomentOfInertia_kg_m2_MemoizedValue.IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar15 = dVar15 / (this->MaterialClass__Armor).GetAxialMomentOfInertia_kg_m2_MemoizedValue.Data;
  libm_sse2_atan_precise(0.0);
  dVar15 = CraftBlueprintArmor__GetSurfaceNormalAngle_radians
                     ((CraftBlueprintArmor *)
                      &(this->MaterialClass__Armor).CraftBlueprintArmorMemoizationHandlerInstance.ResetFunctions.
                       Size,VVar3,dVar15,iVar9 == 4);
  dVar15 = dVar15 * 0.5;
  dVar10 = dVar15;
  libm_sse2_sin_precise(0.0);
  dVar11 = dVar10 * 0.0;
  libm_sse2_cos_precise(0.0);
  cVar4 = (**(code **)(param_1->ModuleType->_pad_0x0_0 + 0x78))();
  cVar5 = (**(code **)(param_1->ModuleType->_pad_0x0_0 + 0x78))();
  if (((cVar5 != '\0') && (param_1->Position_m <= 0.0)) ||
     ((cVar5 = (**(code **)(param_1->ModuleType->_pad_0x0_0 + 0x78))(), cVar5 != '\0' &&
      (dVar13 = param_1->Position_m, dVar16 = GetModuleHeightLimit_m(this), dVar16 <= dVar13)))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (cVar4 != '\0') {
    if (bVar2) {
      if (0.0 <= dVar12) goto LAB_00548789;
      if (dVar12 <= 0.0) {
        dVar12 = 1.5707963267948966;
        libm_sse2_sin_precise(0.0);
        dVar13 = dVar12 * 0.0;
        dVar16 = 1.5707963267948966;
        libm_sse2_cos_precise(0.0);
        dVar14 = dVar13 * dVar11;
        __return_storage_ptr__->X = ((dVar14 + dVar16 * dVar11) - dVar12 * dVar10) + dVar15 * dVar13
        ;
        __return_storage_ptr__->Y = (dVar16 * dVar11 - dVar14) + dVar13 * dVar10 + dVar15 * dVar12;
        __return_storage_ptr__->Z = (dVar12 * dVar11 - dVar14) + dVar16 * dVar10 + dVar15 * dVar13;
        __return_storage_ptr__->W = dVar15 * dVar16 - (dVar14 + dVar12 * dVar11 + dVar13 * dVar10);
        return __return_storage_ptr__;
      }
    }
    dVar12 = 0.7853981633974483;
    libm_sse2_sin_precise(0.0);
    dVar13 = dVar12 * 0.0;
    dVar16 = 0.7853981633974483;
    libm_sse2_cos_precise(0.0);
    dVar14 = dVar13 * dVar11;
    __return_storage_ptr__->X = ((dVar14 + dVar16 * dVar11) - dVar12 * dVar10) + dVar15 * dVar13;
    __return_storage_ptr__->Y = (dVar16 * dVar11 - dVar14) + dVar13 * dVar10 + dVar15 * dVar12;
    __return_storage_ptr__->Z = (dVar12 * dVar11 - dVar14) + dVar16 * dVar10 + dVar15 * dVar13;
    __return_storage_ptr__->W = dVar15 * dVar16 - (dVar12 * dVar11 + dVar14 + dVar13 * dVar10);
    return __return_storage_ptr__;
  }
LAB_00548789:
  __return_storage_ptr__->X = dVar11;
  __return_storage_ptr__->Y = dVar11;
  uStack_48 = SUB84(dVar10,0);
  uStack_44 = (undefined4)((ulonglong)dVar10 >> 0x20);
  local_40 = SUB84(dVar15,0);
  uStack_3c = (undefined4)((ulonglong)dVar15 >> 0x20);
  *(undefined4 *)&__return_storage_ptr__->Z = uStack_48;
  *(undefined4 *)((int)&__return_storage_ptr__->Z + 4) = uStack_44;
  *(undefined4 *)&__return_storage_ptr__->W = local_40;
  *(undefined4 *)((int)&__return_storage_ptr__->W + 4) = uStack_3c;
  return __return_storage_ptr__;
}

//==== 005487b0 GetComposition_Clear ====


/* public: void __thiscall CraftBlueprint__GetComposition_Clear(void)const  */

void __thiscall CraftBlueprint__GetComposition_Clear(CraftBlueprint *this)

{
  undefined **ppuStack_14;
  void *pvStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  ppuStack_14 = (undefined **)(&vftable_75);
  pvStack_10 = (void *)0x0;
  uStack_c = 0;
  uStack_8 = 0;
  util__Darray_struct_MaterialConstituent___operator
            ((Darray_L_struct_MaterialConstituent_G_ *)
             ((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 5),
             (Darray_L_struct_MaterialConstituent_G_ *)&ppuStack_14);
  ppuStack_14 = (undefined **)(&vftable_75);
  if (pvStack_10 != (void *)0x0) {
    port_op_delete(pvStack_10);
  }
  *(undefined1 *)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 7) = 0;
  return;
}





//==== 00548810 GetComposition_Memoize ====


/* public: void __thiscall CraftBlueprint__GetComposition_Memoize(void)const  */

void __thiscall CraftBlueprint__GetComposition_Memoize(CraftBlueprint *this)

{
  int iVar1;
  bool bVar2;
  Darray_L_struct_MaterialComposition_G_ *pDVar3;
  undefined **ppuStack_2c;
  void *pvStack_28;
  undefined1 uStack_1c;
  undefined **ppuStack_18;
  void *pvStack_14;
  int iStack_8;
  
  if (*(char *)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 7) == '\0')
  {
    iVar1 = (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity;
    iStack_8 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)
               &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,&iStack_8);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)
                       &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,iVar1);
    if (bVar2) {
      *(code **)((this->GetAllModulesNeedingCooling_MemoizedValue).Data.Size + -4 +
                (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity * 4) = (long long int (*)())(GetComposition_Clear);
    }
    pDVar3 = (Darray_L_struct_MaterialComposition_G_ *)GetComposition_MemoizedFunction(this);
    util__Darray_struct_MaterialComposition___Darray_struct_MaterialComposition
              ((Darray_L_struct_MaterialComposition_G_ *)&ppuStack_2c,pDVar3);
    uStack_1c = 1;
    util__Darray_struct_MaterialConstituent___operator
              ((Darray_L_struct_MaterialConstituent_G_ *)
               ((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 5),
               (Darray_L_struct_MaterialConstituent_G_ *)&ppuStack_2c);
    *(undefined1 *)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 7) =
         uStack_1c;
    ppuStack_2c = (undefined **)(&vftable_75);
    if (pvStack_28 != (void *)0x0) {
      port_op_delete(pvStack_28);
    }
    pvStack_28 = (void *)0x0;
    ppuStack_2c = (undefined **)(&vftable);
    ppuStack_18 = (undefined **)(&vftable_75);
    if (pvStack_14 != (void *)0x0) {
      port_op_delete(pvStack_14);
    }
  }
  return;
}





//==== 005488e0 GetComposition_MemoizedFunction ====


/* private: class util__Darray_L_structMaterialComposition_G_ __thiscall
   CraftBlueprint__GetComposition_MemoizedFunction(void)const  */

void __thiscall CraftBlueprint__GetComposition_MemoizedFunction(CraftBlueprint *this,Darray_L_struct_MaterialConstituent_G_ * __return_storage_ptr__)

{
  undefined8 stack0xfffffffc;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  Darray_L_struct_MaterialConstituent_G_ *pDVar9;
  undefined4 *puVar10;
  double dVar11;

  void *pvStack_38;
  undefined4 uStack_30;
  void *pvStack_28;
  undefined4 uStack_1c;
  int iStack_18;
  CraftBlueprint *pCStack_14;
  int *piStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pCStack_14 = this;
  piVar6 = (int *)GetModules(this);
  iStack_c = 0;
  iVar7 = (**(code **)(uintptr_t)(*piVar6 + 0xc))();
  if (iStack_c < iVar7) {
    do {
      (**(code **)*piVar6)(&iStack_c);
      iStack_c = iStack_c + 1;
      iVar7 = (**(code **)(uintptr_t)(*piVar6 + 0xc))();
    } while (iStack_c < iVar7);
  }
  if (pvStack_28 != (void *)0x0) {
    port_op_delete(pvStack_28);
  }
  *(undefined4 *)__return_storage_ptr__ = 0;
  *(undefined4 *)(__return_storage_ptr__ + 4) = 0;
  *(undefined4 *)(__return_storage_ptr__ + 8) = 0;
  *(undefined4 *)(__return_storage_ptr__ + 0xc) = 0;
  *(undefined ***)__return_storage_ptr__ = (undefined **)(&vftable_75);
  *(undefined4 *)(__return_storage_ptr__ + 4) = 0;
  *(undefined4 *)(__return_storage_ptr__ + 8) = 0;
  *(undefined4 *)(__return_storage_ptr__ + 0xc) = 0;
  piVar6 = (int *)GetRepeatedModules(this);
  iStack_c = 0;
  piStack_10 = piVar6;
  iVar7 = (**(code **)(uintptr_t)(*piVar6 + 0xc))();
  if (iStack_c < iVar7) {
    do {
      puVar8 = (undefined4 *)(**(code **)*piVar6)(&iStack_c);
Darray_L_MaterialComposition_G_ aRv_24903;
      pDVar9 = (Darray_L_struct_MaterialConstituent_G_ *)
               Module__GetCombinedComposition((Module *)*puVar8,&aRv_24903);
pDVar9 = (Darray_L_struct_MaterialConstituent_G_ *)&aRv_24903;
      if (*(int *)(__return_storage_ptr__ + 8) == 0) {
        util__Darray_struct_MaterialConstituent___operator(__return_storage_ptr__,pDVar9);
      }
      else {
        iVar7 = (**(code **)(*(int *)pDVar9 + 0xc))();
        if (iVar7 != 0) {
          iVar7 = *(int *)(__return_storage_ptr__ + 8);
          (**(code **)(*(int *)pDVar9 + 0xc))();
          util__Darray_struct_MaterialConstituent___SetSize(__return_storage_ptr__,&iStack_18);
          util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                    ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)__return_storage_ptr__,
                     iVar7);
          puVar8 = *(undefined4 **)(pDVar9 + 4);
          puVar10 = (undefined4 *)(iVar7 * 0x10 + *(int *)(__return_storage_ptr__ + 4));
          piVar6 = piStack_10;
          if (puVar10 !=
              (undefined4 *)
              (*(int *)(__return_storage_ptr__ + 8) * 0x10 + *(int *)(__return_storage_ptr__ + 4))) {
            do {
              uVar1 = *puVar8;
              uVar2 = puVar8[1];
              uVar3 = puVar8[2];
              uVar4 = puVar8[3];
              puVar8 = puVar8 + 4;
              *puVar10 = uVar1;
              puVar10[1] = uVar2;
              puVar10[2] = uVar3;
              puVar10[3] = uVar4;
              puVar10 = puVar10 + 4;
            } while (puVar10 !=
                     (undefined4 *)
                     (*(int *)(__return_storage_ptr__ + 8) * 0x10 + *(int *)(__return_storage_ptr__ + 4)));
          }
        }
      }
      if (pvStack_28 != (void *)0x0) {
        port_op_delete(pvStack_28);
      }
      iStack_c = iStack_c + 1;
      pvStack_28 = (void *)0x0;
      iVar7 = (**(code **)(uintptr_t)(*piVar6 + 0xc))();
      this = pCStack_14;
    } while (iStack_c < iVar7);
  }
  if (pvStack_38 != (void *)0x0) {
    port_op_delete(pvStack_38);
  }
  piVar6 = &(this->MaterialClass__Armor).GetInnerArmorSpline_m_MemoizedValue.Data.Capacity;
  iStack_c = 0;
  iVar7 = (**(code **)((this->MaterialClass__Armor).GetInnerArmorSpline_m_MemoizedValue.Data.Capacity + 0xc))();
  if (iStack_c < iVar7) {
    do {
      piStack_10 = (int *)iStack_c;
      puVar8 = (undefined4 *)(**(code **)*piVar6)(&iStack_c);
      dVar11 = CraftBlueprintArmor__GetMassOfArmorLayer_kg
                         ((CraftBlueprintArmor *)
                          &(pCStack_14->MaterialClass__Armor).CraftBlueprintArmorMemoizationHandlerInstance.
                           ResetFunctions.Size,(int)piStack_10);
      uVar1 = *puVar8;
      iVar7 = *(int *)(__return_storage_ptr__ + 8);
      uStack_1c = SUB84(dVar11,0);
      util__Darray_struct_MaterialConstituent___SetSize(__return_storage_ptr__,&iStack_18);
      bVar5 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                        ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)
                         __return_storage_ptr__,iVar7);
      if (bVar5) {
        uStack_30 = (undefined4)((ulonglong)dVar11 >> 0x20);
        puVar8 = (undefined4 *)
                 (*(int *)(__return_storage_ptr__ + 4) + -0x10 + *(int *)(__return_storage_ptr__ + 8) * 0x10);
        *puVar8 = uVar1;
        puVar8[1] = (undefined4)(uintptr_t)(pvStack_38);
        puVar8[2] = uStack_1c;
        puVar8[3] = uStack_30;
      }
      iStack_c = iStack_c + 1;
      iVar7 = (**(code **)(uintptr_t)(*piVar6 + 0xc))();
    } while (iStack_c < iVar7);
  }
  piStack_10 = (int *)iStack_c;
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00548d30 GetCoreAndEndModuleSpline_m_Clear ====


/* public: void __thiscall CraftBlueprint__GetCoreAndEndModuleSpline_m_Clear(void)const  */

void __thiscall CraftBlueprint__GetCoreAndEndModuleSpline_m_Clear(CraftBlueprint *this)

{
  undefined **ppuStack_14;
  CraftSplinePoint *pCStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  ppuStack_14 = (undefined **)(&vftable_14);
  pCStack_10 = (CraftSplinePoint *)0x0;
  uStack_c = 0;
  uStack_8 = 0;
  util__Darray_struct_CraftSplinePoint___operator
            ((Darray_L_struct_CraftSplinePoint_G_ *)&this->IsOperational_MemoizedValue,
             (Darray_L_struct_CraftSplinePoint_G_ *)&ppuStack_14);
  ppuStack_14 = (undefined **)(&vftable_14);
  if (pCStack_10 != (CraftSplinePoint *)0x0) {
    CraftSplinePoint___vector_deleting_destructor(pCStack_10,3);
  }
  *(undefined1 *)&(this->GetMassCondensedChartData_MemoizedValue).Data.Capacity = 0;
  return;
}





//==== 00548d90 GetCoreAndEndModuleSpline_m_Memoize ====


/* public: void __thiscall CraftBlueprint__GetCoreAndEndModuleSpline_m_Memoize(void)const  */

void __thiscall CraftBlueprint__GetCoreAndEndModuleSpline_m_Memoize(CraftBlueprint *this)

{
  int iVar1;
  bool bVar2;
  Darray_L_struct_CraftSplinePoint_G_ *pDVar3;
  undefined **ppuStack_2c;
  CraftSplinePoint *pCStack_28;
  undefined1 uStack_1c;
  undefined **ppuStack_18;
  CraftSplinePoint *pCStack_14;
  int iStack_8;
  
  if ((char)(this->GetMassCondensedChartData_MemoizedValue).Data.Capacity == '\0') {
    iVar1 = (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity;
    iStack_8 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)
               &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,&iStack_8);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)
                       &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,iVar1);
    if (bVar2) {
      *(code **)((this->GetAllModulesNeedingCooling_MemoizedValue).Data.Size + -4 +
                (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity * 4) = (long long int (*)())(GetCoreAndEndModuleSpline_m_Clear);
    }
    pDVar3 = (Darray_L_struct_CraftSplinePoint_G_ *)GetCoreAndEndModuleSpline_m_MemoizedFunction(this);
    util__Darray_struct_CraftSplinePoint___Darray_struct_CraftSplinePoint
              ((Darray_L_struct_CraftSplinePoint_G_ *)&ppuStack_2c,pDVar3);
    uStack_1c = 1;
    util__Darray_struct_CraftSplinePoint___operator
              ((Darray_L_struct_CraftSplinePoint_G_ *)&this->IsOperational_MemoizedValue,
               (Darray_L_struct_CraftSplinePoint_G_ *)&ppuStack_2c);
    *(undefined1 *)&(this->GetMassCondensedChartData_MemoizedValue).Data.Capacity = uStack_1c;
    ppuStack_2c = (undefined **)(&vftable_14);
    if (pCStack_28 != (CraftSplinePoint *)0x0) {
      CraftSplinePoint___vector_deleting_destructor(pCStack_28,3);
    }
    pCStack_28 = (CraftSplinePoint *)0x0;
    ppuStack_2c = (undefined **)(&vftable);
    ppuStack_18 = (undefined **)(&vftable_14);
    if (pCStack_14 != (CraftSplinePoint *)0x0) {
      CraftSplinePoint___vector_deleting_destructor(pCStack_14,3);
    }
  }
  return;
}





//==== 00548e60 GetCoreAndEndModuleSpline_m_MemoizedFunction ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: class util__Darray_L_structCraftSplinePoint_G_ __thiscall
   CraftBlueprint__GetCoreAndEndModuleSpline_m_MemoizedFunction(void)const  */

CraftBlueprint * __thiscall
CraftBlueprint__GetCoreAndEndModuleSpline_m_MemoizedFunction(CraftBlueprint *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  Darray_L_struct_CraftSplinePoint_G_ *pDVar2;
  undefined4 uVar3;
  Darray_L_bool_P_G_ *pDVar4;
  int iVar5;
  undefined4 *puVar6;
  CraftBlueprint *in_stack_00000004;
  undefined **local_48;
  CraftSplinePoint *local_44;
  undefined **local_38;
  CraftSplinePoint *local_34;
  void *local_30;
  bool local_28;
  undefined **local_24;
  void *pvStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  CraftBlueprint *local_14;
  CraftBlueprint *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = in_stack_00000004;
  in_stack_00000004->_pad_0x0_0 = 0;
  in_stack_00000004->_pad_0x4_1 = 0;
  in_stack_00000004->_pad_0x8_2 = 0;
  in_stack_00000004->_pad_0xc_3 = 0;
  if ((this->GetCrewReportString_MemoizedValue).IsValidData == false) {
    iVar5 = (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity;
    local_c = iVar5 + 1;
    util__Darray_L_util__Reflectable_P_G___SetSize
              ((Darray_L_util__Reflectable_P_G_ *)
               &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,&local_c);
    bVar1 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,iVar5);
    if (bVar1) {
      *(code **)((this->GetAllModulesNeedingCooling_MemoizedValue).Data.Size + -4 +
                (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity * 4) = (long long int (*)())(GetSpinalAndEndModuleSpline_m_Clear);
    }
    pDVar2 = (Darray_L_struct_CraftSplinePoint_G_ *)GetSpinalAndEndModuleSpline_m_MemoizedFunction(this)
    ;
    util__Darray_L_CraftSplinePoint_G___Darray_L_CraftSplinePoint_G_
              ((Darray_L_CraftSplinePoint_G_ *)&local_38,pDVar2);
    *(uint32_t *)&local_28 = true;
    util__Darray_L_CraftSplinePoint_G___op_assign
              ((Darray_L_CraftSplinePoint_G_ *)&this->IsThrustingCraft_MemoizedValue,
               (Darray_L_struct_CraftSplinePoint_G_ *)&local_38);
    (this->GetCrewReportString_MemoizedValue).IsValidData = local_28;
    local_38 = (undefined **)(&vftable_14);
    if (local_34 != (CraftSplinePoint *)0x0) {
      CraftSplinePoint___vector_deleting_destructor(local_34,3);
    }
    *(uint32_t *)&local_34 = (uint32_t)(uintptr_t)((CraftSplinePoint *)0x0);
    local_38 = (undefined **)(&vftable);
    local_48 = (undefined **)(&vftable_14);
    if (local_44 != (CraftSplinePoint *)0x0) {
      CraftSplinePoint___vector_deleting_destructor(local_44,3);
    }
    *(uint32_t *)&local_44 = (uint32_t)(uintptr_t)((CraftSplinePoint *)0x0);
    local_48 = (undefined **)(&vftable);
    in_stack_00000004 = local_10;
  }
  if ((this->GetCrewReportString_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  util__Darray_L_CraftSplinePoint_G___Darray_L_CraftSplinePoint_G_
            ((Darray_L_CraftSplinePoint_G_ *)in_stack_00000004,
             (Darray_L_struct_CraftSplinePoint_G_ *)&this->IsThrustingCraft_MemoizedValue);
  local_24 = (undefined **)0x0;
  pvStack_20 = (void *)0x0;
  uStack_1c = 0;
  uStack_18 = 0;
  local_10 = this;
  uVar3 = (undefined4)(uintptr_t) (long long int (*)())(GetNonSpinalModules(this));
  pDVar4 = (Darray_L_bool_P_G_ *)FUN_00539470(&local_48,uVar3,&local_10);
  util__Darray_bool____Darray_bool((Darray_L_bool_P_G_ *)&local_24,pDVar4);
  local_48 = (undefined **)(&vftable_2);
  if (local_44 != (CraftSplinePoint *)0x0) {
    port_op_delete(local_44);
  }
  *(uint32_t *)&local_34 = (uint32_t)(uintptr_t)((CraftSplinePoint *)&vftable_2);
  if (local_30 != (void *)0x0) {
    port_op_delete(local_30);
  }
  local_c = 0;
  local_14 = this;
  iVar5 = (*(code *)local_24[3])();
  if (local_c < iVar5) {
    do {
      puVar6 = (undefined4 *)(*(code *)*local_24)(&local_c);
      FUN_00540950(*puVar6);
      local_c = local_c + 1;
      iVar5 = (*(code *)local_24[3])();
    } while (local_c < iVar5);
  }
  local_24 = (undefined **)(&vftable_2);
  if (pvStack_20 != (void *)0x0) {
    port_op_delete(pvStack_20);
  }
  return in_stack_00000004;
}

//==== 00549050 GetCostChartData_Clear ====


/* public: void __thiscall CraftBlueprint__GetCostChartData_Clear(void)const  */

void __thiscall CraftBlueprint__GetCostChartData_Clear(CraftBlueprint *this)

{
  undefined **ppuStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  ppuStack_14 = &vftable_105;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  util__Darray_struct_StructureCost___operator
            ((Darray_L_struct_StructureCost_G_ *)&this[1].MaterialClass__Armor.GetInnerArmorSegments_m_MemoizedValue,
             (Darray_L_struct_StructureCost_G_ *)&ppuStack_14);
  util__Darray_struct_util__tuple2_class_util__Str_char__double______Darray_struct_util__tuple2_class_util__Str_char__double((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ *)&ppuStack_14);
  this[1].MaterialClass__Armor.GetInnerArmorSegments_m_MemoizedValue.IsValidData = false;
  return;
}





//==== 005490a0 GetCostChartData_Memoize ====


/* public: void __thiscall CraftBlueprint__GetCostChartData_Memoize(void)const  */

void __thiscall CraftBlueprint__GetCostChartData_Memoize(CraftBlueprint *this)

{
  int iVar1;
  bool bVar2;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ *pDVar3;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ aDStack_2c [16];
  bool bStack_1c;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ aDStack_18 [16];
  int iStack_8;
  
  if (this[1].MaterialClass__Armor.GetInnerArmorSegments_m_MemoizedValue.IsValidData == false) {
    iVar1 = (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity;
    iStack_8 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)
               &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,&iStack_8);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)
                       &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,iVar1);
    if (bVar2) {
      *(code **)((this->GetAllModulesNeedingCooling_MemoizedValue).Data.Size + -4 +
                (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity * 4) = (long long int (*)())(GetCostChartData_Clear);
    }
    pDVar3 = (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ *)
             GetCostChartData_MemoizedFunction(this);
    util__Darray_struct_util__tuple2_class_util__Str_char__double_____Darray_struct_util__tuple2_class_util__Str_char__double(aDStack_2c,pDVar3);
    bStack_1c = true;
    util__Darray_struct_StructureCost___operator
              ((Darray_L_struct_StructureCost_G_ *)&this[1].MaterialClass__Armor.GetInnerArmorSegments_m_MemoizedValue,
               (Darray_L_struct_StructureCost_G_ *)aDStack_2c);
    this[1].MaterialClass__Armor.GetInnerArmorSegments_m_MemoizedValue.IsValidData = bStack_1c;
    util__Darray_struct_util__tuple2_class_util__Str_char__double______Darray_struct_util__tuple2_class_util__Str_char__double(aDStack_2c);
    util__Darray_struct_util__tuple2_class_util__Str_char__double______Darray_struct_util__tuple2_class_util__Str_char__double(aDStack_18);
  }
  return;
}





//==== 00549140 GetCostChartData_MemoizedFunction ====


/* private: class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cdouble_G__G_ __thiscall
   CraftBlueprint__GetCostChartData_MemoizedFunction(void)const  */

void __thiscall CraftBlueprint__GetCostChartData_MemoizedFunction(CraftBlueprint *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  Str_L_char_G_ *pSVar5;
  double dVar6;
  Darray_L_struct_PowerUsage_G_ *in_stack_00000004;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ aDStack_5c [16];
  Str_L_char_G_ SStack_4c;
  double dStack_3c;
  undefined1 auStack_34 [8];
  Material *pMStack_2c;
  undefined4 uStack_28;
  undefined1 auStack_24 [12];
  int iStack_18;
  double dStack_14;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((char)((this->GetApproximateComposition_MemoizedValue).Data == '\0')){
    iVar2 = (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity;
    iStack_c = iVar2 + 1;
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)
               &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,&iStack_c);
    bVar1 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)
                       &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,iVar2);
    if (bVar1) {
      *(code **)((this->GetAllModulesNeedingCooling_MemoizedValue).Data.Size + -4 +
                (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity * 4) = (long long int (*)())(GetTotalCost_c_Clear);
    }
    iStack_c = 0;
    dStack_14 = 0.0;
    iVar2 = (**(code **)((int)&((this->MaterialClass__Armor).ArmorLayers.Data)->Thickness_m + 4))();
    if (iStack_c < iVar2) {
      do {
        puVar3 = (undefined4 *)(*(code *)((this->MaterialClass__Armor).ArmorLayers.Data)->Composition)(&iStack_c);
        dVar6 = Module__GetTotalCost_c((Module *)*puVar3);
        iStack_c = iStack_c + 1;
        (*(uint64_t*)((char*)&(auStack_24)+4)) = (undefined8)(int)puVar3[1];
        dStack_14 = dVar6 * (double)(*(uint64_t*)((char*)&(auStack_24)+4)) + dStack_14;
        iVar2 = (**(code **)((int)&((this->MaterialClass__Armor).ArmorLayers.Data)->Thickness_m + 4))();
      } while (iStack_c < iVar2);
    }
    dVar6 = CraftBlueprintArmor__GetTotalCost_c
                      ((CraftBlueprintArmor *)
                       &(this->MaterialClass__Armor).CraftBlueprintArmorMemoizationHandlerInstance.ResetFunctions.
                        Size);
    *(uint32_t *)&auStack_34 = (uint64_t)(dVar6 + dStack_14);
    pMStack_2c = (Material *)CONCAT31((*(uint24_t*)((char*)&(pMStack_2c)+1)),1);
    *(uint64_t *)&(this->GetCrossSection_m2_MemoizedValue).IsValidData = (*(uint64_t *)&(auStack_34));
    (this->GetApproximateComposition_MemoizedValue).Data = pMStack_2c;
    *(undefined4 *)&(this->GetApproximateComposition_MemoizedValue).IsValidData = uStack_28;
    if ((char)((this->GetApproximateComposition_MemoizedValue).Data == '\0')){
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  if ((double)((this->GetCrossSection_m2_MemoizedValue).IsValidData <= 0.0)){
    *(undefined ***)in_stack_00000004 =
         &vftable_105;
    *(undefined4 *)(in_stack_00000004 + 4) = 0;
    *(undefined4 *)(in_stack_00000004 + 8) = 0;
    *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  }
  else {
    piVar4 = (int *)GetCostPerModule_c(this);
    *(undefined4 *)in_stack_00000004 = 0;
    *(undefined4 *)(in_stack_00000004 + 4) = (undefined4)(uintptr_t) (long long int (*)())(0);
    *(undefined4 *)(in_stack_00000004 + 8) = 0;
    *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
    iVar2 = (**(code **)(uintptr_t)(*piVar4 + 0xc))();
    util__Darray_struct_PowerUsage___Darray_struct_PowerUsage(in_stack_00000004,iVar2);
    iStack_c = 0;
    iVar2 = (**(code **)(uintptr_t)(*piVar4 + 0xc))();
    if (iStack_c < iVar2) {
      do {
        pSVar5 = (Str_L_char_G_ *)(**(code **)*piVar4)(&iStack_c);
        util__Str_char___Str_char((Str_L_char_G_ *)(auStack_34 + 4),pSVar5);
        dStack_14 = *(double *)&pSVar5[1].Capacity;
        util__Str_char___Str_char((Str_L_char_G_ *)auStack_24,(Str_L_char_G_ *)(auStack_34 + 4));
        util__Str_char___Str_char(&SStack_4c,(Str_L_char_G_ *)auStack_24);
        dStack_3c = dStack_14;
        if ((char *)(*(uint32_t*)&(auStack_24)) != (char *)0x0) {
          port_op_delete((void *)(*(uint32_t*)&(auStack_24)));
          (*(uint32_t*)&(auStack_24)) = (uint32_t)(uintptr_t)((char *)0x0);
        }
        if ((void *)(*(uint32_t*)((char*)&(auStack_34)+4)) != (void *)0x0) {
          port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_34)+4)));
          *(uint64_t *)&auStack_34 = (uint64_t)((ulonglong)auStack_34 & 0xffffffff);
        }
        iVar2 = *(int *)(in_stack_00000004 + 8);
        iStack_18 = iVar2 + 1;
        util__Darray_struct_util__tuple2_class_util__Str_char__double_____SetSize
                  ((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ *)in_stack_00000004,
                   &iStack_18);
        bVar1 = util__Darray_struct_PowerUsage___CheckSize(in_stack_00000004,iVar2);
        if (bVar1) {
          iVar2 = *(int *)(in_stack_00000004 + 4) + *(int *)(in_stack_00000004 + 8) * 0x18;
          util__Str_char___operator__o8((Str_L_char_G_ *)(iVar2 + -0x18),&SStack_4c);
          *(double *)(iVar2 + -8) = dStack_14;
        }
        if (SStack_4c.Data != (char *)0x0) {
          port_op_delete(SStack_4c.Data);
        }
        iStack_c = iStack_c + 1;
        iVar2 = (**(code **)(uintptr_t)(*piVar4 + 0xc))();
      } while (iStack_c < iVar2);
    }
    util__Darray_struct_util__tuple2_class_util__Str_char__double______Darray_struct_util__tuple2_class_util__Str_char__double(aDStack_5c);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 005495f0 GetCostPerModule_c ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: class util__Darray_L_structStructureCost_G_ __thiscall
   CraftBlueprint__GetCostPerModule_c(void)const  */

Darray_L_StructureCost_G_ * __thiscall
CraftBlueprint__GetCostPerModule_c
          (CraftBlueprint *this,Darray_L_StructureCost_G_ *__return_storage_ptr__)

{
  undefined8 stack0xfffffffc;
  StructureCost *pSVar1;
  PowerUsage *pPVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  Darray_L_StructureCost_G_ *pDVar7;
  int iVar8;
  Darray_L_StructureCost_G_ local_70;
  Str_L_char_G_ local_60;
  double local_50;
  undefined **local_48;
  void *local_44;
  Str_L_char_G_ local_38;
  Darray_L_PowerUsage_G_ local_2c;
  undefined8 local_1c;
  Str_L_char_G_ *local_14;
  int local_10;
  CraftBlueprint *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = this;
  piVar4 = (int *)GetAllCountedModules(this);
  local_2c._pad_0x0_0 = 0;
  local_2c.Data = (PowerUsage *)0x0;
  local_2c.Size = 0;
  local_2c.Capacity = 0;
  iVar5 = (**(code **)(uintptr_t)(*piVar4 + 0xc))();
  util__Darray_L_PowerUsage_G___Darray_L_PowerUsage_G_(&local_2c,iVar5);
  local_10 = 0;
  iVar5 = (**(code **)(uintptr_t)(*piVar4 + 0xc))();
  if (local_10 < iVar5) {
    do {
      puVar6 = (undefined4 *)(**(code **)*piVar4)(&local_10);
      (**(code **)(*(int *)*puVar6 + 0x48))(&local_38);
      local_1c = Module__GetTotalCost_c((Module *)*puVar6);
      local_1c = local_1c * (double)(int)puVar6[1];
      util__Str_char___Str_char(&local_60,&local_38);
      local_50 = local_1c;
      if (local_38.Data != (char *)0x0) {
        port_op_delete(local_38.Data);
        local_38.Data = (char *)0x0;
      }
      iVar5 = local_2c.Size;
      local_14 = (Str_L_char_G_ *)(local_2c.Size + 1);
      util__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___SetSize
                ((Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ *)&local_2c,(int *)&local_14);
      bVar3 = util__Darray_L_PowerUsage_G___CheckSize(&local_2c,iVar5);
      iVar5 = local_2c.Size;
      pPVar2 = local_2c.Data;
      if (bVar3) {
        util__Str_char___operator__o8(&local_2c.Data[local_2c.Size + -1].Label,&local_60);
        pPVar2[iVar5 + -1].PowerUsed_W = local_1c;
      }
      if (local_60.Data != (char *)0x0) {
        port_op_delete(local_60.Data);
      }
      local_10 = local_10 + 1;
      iVar5 = (**(code **)(uintptr_t)(*piVar4 + 0xc))();
    } while (local_10 < iVar5);
  }
  pDVar7 = CraftBlueprintArmor__GetCostsByLayer_c
                     ((CraftBlueprintArmor *)
                      &(local_c->MaterialClass__Armor).CraftBlueprintArmorMemoizationHandlerInstance.ResetFunctions
                       .Size,&local_70);
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (StructureCost *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  iVar5 = (**(code **)(pDVar7->_pad_0x0_0 + 0xc))();
  iVar8 = (**(code **)(uintptr_t)(local_2c._pad_0x0_0 + 0xc))();
  util__Darray_L_PowerUsage_G___Darray_L_PowerUsage_G_
            ((Darray_L_PowerUsage_G_ *)__return_storage_ptr__,iVar5 + iVar8);
  local_c = (CraftBlueprint *)0x0;
  iVar5 = (**(code **)(uintptr_t)(local_2c._pad_0x0_0 + 0xc))();
  if ((int)local_c < iVar5) {
    do {
      local_14 = (Str_L_char_G_ *)(**(code **)local_2c._pad_0x0_0)(&local_c);
      iVar5 = __return_storage_ptr__->Size;
      local_1c = (double)CONCAT44(iVar5 + 1,(undefined4)local_1c);
      util__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___SetSize
                ((Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ *)__return_storage_ptr__,
                 (int *)((int)&local_1c + 4));
      bVar3 = util__Darray_L_PowerUsage_G___CheckSize
                        ((Darray_L_PowerUsage_G_ *)__return_storage_ptr__,iVar5);
      if (bVar3) {
        iVar5 = __return_storage_ptr__->Size;
        pSVar1 = __return_storage_ptr__->Data;
        util__Str_char___operator__o8(&pSVar1[iVar5 + -1].Label,local_14);
        iVar8 = local_14[1].Length;
        *(int *)&pSVar1[iVar5 + -1].Cost_c = local_14[1].Capacity;
        *(int *)((int)&pSVar1[iVar5 + -1].Cost_c + 4) = iVar8;
      }
      local_c = (CraftBlueprint *)((int)&local_c->_pad_0x0_0 + 1);
      iVar5 = (**(code **)(uintptr_t)(local_2c._pad_0x0_0 + 0xc))();
    } while ((int)local_c < iVar5);
  }
  local_c = (CraftBlueprint *)0x0;
  iVar5 = (**(code **)(pDVar7->_pad_0x0_0 + 0xc))();
  if ((int)local_c < iVar5) {
    do {
      local_14 = (Str_L_char_G_ *)(**(code **)pDVar7->_pad_0x0_0)(&local_c);
      iVar5 = __return_storage_ptr__->Size;
      local_1c = (double)CONCAT44(iVar5 + 1,(undefined4)local_1c);
      util__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___SetSize
                ((Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ *)__return_storage_ptr__,
                 (int *)((int)&local_1c + 4));
      bVar3 = util__Darray_L_PowerUsage_G___CheckSize
                        ((Darray_L_PowerUsage_G_ *)__return_storage_ptr__,iVar5);
      if (bVar3) {
        iVar5 = __return_storage_ptr__->Size;
        pSVar1 = __return_storage_ptr__->Data;
        util__Str_char___operator__o8(&pSVar1[iVar5 + -1].Label,local_14);
        iVar8 = local_14[1].Length;
        *(int *)&pSVar1[iVar5 + -1].Cost_c = local_14[1].Capacity;
        *(int *)((int)&pSVar1[iVar5 + -1].Cost_c + 4) = iVar8;
      }
      local_c = (CraftBlueprint *)((int)&local_c->_pad_0x0_0 + 1);
      iVar5 = (**(code **)(pDVar7->_pad_0x0_0 + 0xc))();
    } while ((int)local_c < iVar5);
  }
  util__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___dtor((Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ *)&local_2c);
  local_48 = &vftable_109;
  if (local_44 != (void *)0x0) {
    port_op_delete(local_44);
  }
  *(uint32_t *)&local_44 = (uint32_t)(uintptr_t)((void *)0x0);
  local_48 = (undefined **)(&vftable);
  util__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___dtor((Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ *)&local_70);
  return __return_storage_ptr__;
}

