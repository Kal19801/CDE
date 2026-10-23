// Auto-generated from Ghidra decompilation
#include "port_prelude.h"

//==== 005f0510 GetComposition_005f0510 ====

/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   TurretSubModule__GetComposition(void)const  */

Darray_L_MaterialComposition_G_ * __thiscall
TurretSubModule__GetComposition
          (TurretSubModule *this,Darray_L_MaterialComposition_G_ *__return_storage_ptr__)

{
  MaterialComposition *pMVar1;
  double dVar2;
  int iVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  TurretSubModule *pTVar8;
  bool bVar9;
  Darray_L_struct_MaterialComposition_G_ *pDVar10;
  double dVar11;
  undefined **local_48;
  void *local_44;
  Darray_L_MaterialComposition_G_ local_38;
  Material *local_28;
  void *pvStack_24;
  undefined8 uStack_20;
  undefined **local_18;
  void *local_14;
  undefined4 local_10;
  undefined4 local_c;
  TurretSubModule *local_8;
  
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (MaterialComposition *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  local_8 = this;
  if (*(char *)&this[1].MomentumWheels.Composition == '\0') {
    if (*(char *)&this->CachedObjectEndRadialMomentOfInertia_kg_m2 == '\0') {
      *(uint32_t *)&local_18 = (uint32_t)(uintptr_t)(&vftable_75);
      pDVar10 = (Darray_L_struct_MaterialComposition_G_ *)&local_18;
      local_14 = (void *)0x0;
      bVar6 = false;
      bVar9 = true;
      *(uint32_t *)&local_10 = 0;
      local_c = 0;
    }
    else {
      if (*(char *)&this->CachedObjectEndRadialMomentOfInertia_kg_m2 == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      pDVar10 = (Darray_L_struct_MaterialComposition_G_ *)
                (**(code **)((this->MomentumWheels)._pad_0x8_2 + 0x68))(&local_48);
      bVar6 = true;
      bVar9 = false;
    }
    bVar7 = false;
    bVar5 = true;
    pDVar10 = (Darray_L_struct_MaterialComposition_G_ *)
              util__Darray_L_MaterialComposition_G___Darray_L_MaterialComposition_G_(&local_38,pDVar10);
  }
  else {
    if (*(char *)&this[1].MomentumWheels.Composition == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    pDVar10 = (Darray_L_struct_MaterialComposition_G_ *)
              (**(code **)(*(int *)&this->CachedObjectMass_kg + 0x68))(&local_28);
    bVar7 = true;
    bVar6 = false;
    bVar9 = false;
    bVar5 = false;
  }
  util__Darray_L_MaterialComposition_G___Darray_L_MaterialComposition_G_(__return_storage_ptr__,pDVar10);
  if (bVar5) {
    local_38._pad_0x0_0 = (int)&vftable_75;
    if (local_38.Data != (MaterialComposition *)0x0) {
      port_op_delete(local_38.Data);
    }
    local_38.Data = (MaterialComposition *)0x0;
    local_38._pad_0x0_0 = (int)&vftable;
  }
  if (bVar9) {
    *(uint32_t *)&local_18 = (uint32_t)(uintptr_t)(&vftable_75);
    if (local_14 != (void *)0x0) {
      port_op_delete(local_14);
    }
    local_14 = (void *)0x0;
    *(uint32_t *)&local_18 = (uint32_t)(uintptr_t)(&vftable);
  }
  if (bVar6) {
    local_48 = (undefined **)(&vftable_75);
    if (local_44 != (void *)0x0) {
      port_op_delete(local_44);
    }
    *(uint32_t *)&local_44 = (uint32_t)(uintptr_t)((void *)0x0);
    local_48 = (undefined **)(&vftable);
  }
  if (bVar7) {
    local_28 = (Material *)&vftable_75;
    if (pvStack_24 != (void *)0x0) {
      port_op_delete(pvStack_24);
    }
  }
  pTVar8 = local_8;
  iVar3 = __return_storage_ptr__->Size;
  dVar2 = local_8->InnerRadius_m;
  local_28 = local_8->ArmorComposition;
  dVar11 = dVar2 + local_8->ArmorThickness_m;
  uStack_20 = (dVar11 * dVar11 * dVar11 * 4.1887902047863905 -
              dVar2 * dVar2 * dVar2 * 4.1887902047863905) * local_28->Density_kg__m3;
  local_8 = (TurretSubModule *)(iVar3 + 1);
  util__Darray_L_MaterialConstituent_G___SetSize
            ((Darray_L_MaterialConstituent_G_ *)__return_storage_ptr__,(int *)&local_8);
  bVar9 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                    ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)__return_storage_ptr__,iVar3);
  if (bVar9) {
    pMVar1 = __return_storage_ptr__->Data + __return_storage_ptr__->Size + -1;
    pMVar1->Type = local_28;
    (void *)((*(undefined1 *)(void *)((char *)(uintptr_t)(pMVar1) + 0x4)) = (undefined1)(uintptr_t)(pvStack_24));
    *(undefined4 *)&pMVar1->Mass_kg = (undefined4)uStack_20;
    *(undefined4 *)((int)&pMVar1->Mass_kg + 4) = (*(uint32_t*)((char*)&(uStack_20)+4));
  }
  dVar2 = pTVar8->InnerRadius_m;
  if (pTVar8->Extruded == false) {
    dVar11 = 0.0;
  }
  else {
    dVar11 = dVar2 + pTVar8->ArmorThickness_m;
  }
  local_28 = pTVar8->ArmorComposition;
  dVar4 = dVar2 + pTVar8->ArmorThickness_m;
  iVar3 = __return_storage_ptr__->Size;
  uStack_20 = (dVar4 * 3.141592653589793 * dVar4 - dVar2 * 3.141592653589793 * dVar2) * dVar11 *
              local_28->Density_kg__m3;
  local_8 = (TurretSubModule *)(iVar3 + 1);
  util__Darray_L_MaterialConstituent_G___SetSize
            ((Darray_L_MaterialConstituent_G_ *)__return_storage_ptr__,(int *)&local_8);
  bVar9 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                    ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)__return_storage_ptr__,iVar3);
  if (bVar9) {
    pMVar1 = __return_storage_ptr__->Data + __return_storage_ptr__->Size + -1;
    pMVar1->Type = local_28;
    (void *)((*(undefined1 *)(void *)((char *)(uintptr_t)(pMVar1) + 0x4)) = (undefined1)(uintptr_t)(pvStack_24));
    *(undefined4 *)&pMVar1->Mass_kg = (undefined4)uStack_20;
    *(undefined4 *)((int)&pMVar1->Mass_kg + 4) = (*(uint32_t*)((char*)&(uStack_20)+4));
  }
  return __return_storage_ptr__;
}

//==== 005f07a0 GetStatuses_005f07a0 ====

/* public: virtual class DesignStatusBuffer  TurretSubModule__GetStatuses(class DataParser
   *)const  */

DesignStatusBuffer * 
TurretSubModule__GetStatuses
          (TurretSubModule *this,DesignStatusBuffer *__return_storage_ptr__,DataParser *param_1)

{
  bool bVar1;
  Maybe_L_double_G_ *pMVar2;
  double dVar3;
  Str_L_char_G_ *pSVar4;
  Str_L_char_G_ *pSVar5;
  Str_L_char_G_ *pSVar6;
  Str_L_char_G_ *pSVar7;
  ModulePlacer *pMVar8;
  Maybe_L_double_G_ local_60;
  undefined1 local_50 [4];
  Str_L_char_G_ local_4c;
  Str_L_char_G_ local_40;
  double local_34;
  double local_2c;
  double local_24;
  undefined1 local_1c [4];
  double local_18;
  undefined1 local_10 [4];
  double local_c;
  
  local_c = 2.0;
  pMVar2 = util__Sqrt((Maybe_L_double_G_ *)local_50,&local_c);
  if (pMVar2->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  *(uint32_t *)&local_18 = ((this->InnerRadius_m + this->InnerRadius_m) / pMVar2->Data) * 0.5;
  dVar3 = GetWheelRadius_m(this);
  *(uint32_t *)&local_18 = local_18 - dVar3;
  dVar3 = 0.0;
  if (0.0 <= local_18) {
    dVar3 = local_18;
  }
  if (dVar3 != 0.0) {
    *(uint32_t *)&local_18 = 2.0;
    pMVar2 = util__Sqrt((Maybe_L_double_G_ *)local_50,&local_18);
    if (pMVar2->IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    *(uint32_t *)&local_2c = (this->InnerRadius_m + this->InnerRadius_m) / pMVar2->Data;
    local_24 = GetWheelRadius_m(this);
    local_24 = local_24 * 2.0;
    *(uint32_t *)&local_18 = 2.0;
    pMVar2 = util__Sqrt((Maybe_L_double_G_ *)local_50,&local_18);
    if (pMVar2->IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    local_c = ((this->InnerRadius_m + this->InnerRadius_m) / pMVar2->Data) * 0.5;
    *(uint32_t *)&local_18 = GetWheelRadius_m(this);
    *(uint32_t *)&local_18 = local_c - local_18;
    dVar3 = 0.0;
    if (0.0 <= local_18) {
      dVar3 = local_18;
    }
    local_34 = dVar3 + dVar3 + local_24;
    local_24 = 1e-08;
    bVar1 = util__Equals_double(&local_34,&local_2c,&local_24);
    if (!bVar1) {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\modules\\othermodules\\turretsubmodules.cpp"
                      ,0x1d2,
                      "GetWheelHeight_m() == 0. || Equals(GetWheelSide_m() + 2 * GetWheelHeight_m(), GetInnerSquareSide_m())"
                      ,(char *)0x0);
      DebugBreak();
    }
  }
  __return_storage_ptr__->DataManager = (DataParser *)0x0;
  (__return_storage_ptr__->Messages)._pad_0x0_0 = 0;
  (__return_storage_ptr__->Messages).Data = (DesignStatusMessage *)0x0;
  (__return_storage_ptr__->Messages).Size = 0;
  (undefined8)((__return_storage_ptr__->Messages).Capacity = 0);
  DesignStatusBuffer__DesignStatusBuffer(__return_storage_ptr__,param_1);
  util__Str_char___Str_char(&local_4c,"TurretRadiusTooLarge");
  local_40.Data = (char *)0x0;
  local_40.Capacity = 0;
  local_40.Length = 0;
  *(uint32_t *)&local_10 = (uint32_t)0x0;
  local_c = 0.0;
  *(uint32_t *)&local_1c = (uint32_t)0x0;
  *(uint32_t *)&local_18 = 0.0;
  local_34 = 2.0;
  pMVar2 = util__Sqrt(&local_60,&local_34);
  if (pMVar2->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pMVar8 = (ModulePlacer *)0x0;
  *(uint32_t *)&local_2c = (this->InnerRadius_m + this->InnerRadius_m) / pMVar2->Data;
  pSVar7 = &local_40;
  pSVar6 = (Str_L_char_G_ *)local_10;
  pSVar5 = (Str_L_char_G_ *)local_1c;
  pSVar4 = &local_4c;
  local_24 = GetWheelRadius_m(this);
  local_24 = local_24 * 2.0;
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,local_2c < local_24,pSVar4,pSVar5,pSVar6,pSVar7,pMVar8);
  if (local_1c != (uint32_t)0x0) {
    port_op_delete((void *)local_1c);
    *(uint32_t *)&local_1c = (uint32_t)0x0;
  }
  if (local_10 != (uint32_t)0x0) {
    port_op_delete((void *)local_10);
    *(uint32_t *)&local_10 = (uint32_t)0x0;
  }
  if (local_40.Data != (char *)0x0) {
    port_op_delete(local_40.Data);
    local_40.Data = (char *)0x0;
  }
  if (local_4c.Data != (char *)0x0) {
    port_op_delete(local_4c.Data);
  }
  return __return_storage_ptr__;
}

//==== 005f0ab0 GetPointerPropertyChoices_005f0ab0 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   FixedLaserMountSubModule__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

ClassMember * 
FixedLaserMountSubModule__GetPointerPropertyChoices
          (FixedLaserMountSubModule *this,ClassMember *param_1,
          SerializationManagerInterface *param_2)

{
  char *pcVar1;
  SerializationManagerInterface SVar2;
  int in_stack_0000000c;
  
  if ((*(int *)&(param_2[1])) < 1) {
    SVar2 = (*(SerializationManagerInterface *)
            &cde_l2_0b2b1c9f_NullString);
  }
  else {
    SVar2 = *param_2;
  }
  for (pcVar1 = "ArmorComposition";
      (pcVar1[(int)((*(int *)&(SVar2)) + -0x926270)] != '\0' || (*pcVar1 != '\0')); pcVar1 = pcVar1 + 1) {
    if (pcVar1[(int)((*(int *)&(SVar2)) + -0x926270)] != *pcVar1) {
      (param_1->Name).Data =
           (char *)&vftable_85;
      (param_1->Name).Capacity = 0;
      (param_1->Name).Length = 0;
      *(undefined4 *)&param_1->Type = 0;
      return param_1;
    }
  }
  GetMaterials((DataParser *)param_1,in_stack_0000000c,true);
  return param_1;
}





//==== 005f0b30 GetLegacyValueReplacement_005f0b30 ====


/* public: virtual class util__Str_L_char_G_  TurretSubModule__GetLegacyValueReplacement(class
   util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
TurretSubModule__GetLegacyValueReplacement
          (TurretSubModule *this,Str_L_char_G_ *__return_storage_ptr__,Str_L_char_G_ *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  if (param_1->Capacity < 1) {
    pcVar2 = "";
  }
  else {
    pcVar2 = param_1->Data;
  }
  for (pcVar1 = "ReactionWheels"; (pcVar1[(int)(pcVar2 + -0x92a3dc)] != '\0' || (*pcVar1 != '\0'));
      pcVar1 = pcVar1 + 1) {
    if (pcVar1[(int)(pcVar2 + -0x92a3dc)] != *pcVar1) {
      __return_storage_ptr__->Data = (char *)0x0;
      __return_storage_ptr__->Capacity = 0;
      __return_storage_ptr__->Length = 0;
      return __return_storage_ptr__;
    }
  }
  util__Str_char___Str_char(__return_storage_ptr__,"MomentumWheels");
  return __return_storage_ptr__;
}





//==== 005f0ba0 GetMutuallyExclusiveProperties_005f0ba0 ====


/* public: virtual class util__Darray_L_classutil__Str_L_char_G__G_ __thiscall
   TurretSubModule__GetMutuallyExclusiveProperties(void)const  */

Darray_L_class_util__Str_L_char_G___G_ * __thiscall
TurretSubModule__GetMutuallyExclusiveProperties(TurretSubModule *this)

{
  undefined8 stack0x00000004;
  int iVar1;
  Darray_L_class_util__Str_L_char_G___G_ *this_00;
  bool bVar2;
  Darray_L_class_util__Str_L_char_G___G_ *in_stack_00000004;
  Str_L_char_G_ SStack_10;
  
  this_00 = in_stack_00000004;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = (undefined **)(&vftable_4);
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Str_char___Str_char(&SStack_10,"ElectricActuators");
  iVar1 = *(int *)(in_stack_00000004 + 8);
  in_stack_00000004 = (Darray_L_class_util__Str_L_char_G___G_ *)(iVar1 + 1);
  util__Darray_class_util__Str_char_____SetSize(this_00,(int *)&stack0x00000004);
  bVar2 = util__Darray_class_util__Str_char_____CheckSize(this_00,iVar1);
  if (bVar2) {
    util__Str_char___operator__o8
              ((Str_L_char_G_ *)(*(int *)(this_00 + 4) + (*(int *)(this_00 + 8) * 3 + -3) * 4),
               &SStack_10);
  }
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  util__Str_char___Str_char(&SStack_10,"MomentumWheels");
  iVar1 = *(int *)(this_00 + 8);
  in_stack_00000004 = (Darray_L_class_util__Str_L_char_G___G_ *)(iVar1 + 1);
  util__Darray_class_util__Str_char_____SetSize(this_00,(int *)&stack0x00000004);
  bVar2 = util__Darray_class_util__Str_char_____CheckSize(this_00,iVar1);
  if (bVar2) {
    util__Str_char___operator__o8
              ((Str_L_char_G_ *)(*(int *)(this_00 + 4) + (*(int *)(this_00 + 8) * 3 + -3) * 4),
               &SStack_10);
  }
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return this_00;
}





//==== 005f0c80 GetReflectionInfo_005f0c80 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   ExtrudableTurretSubModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall
ExtrudableTurretSubModule__GetReflectionInfo(ExtrudableTurretSubModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_09a977e1__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_09a977e1__thread_safe_static_guard_0__);
    if ( cde_l2_09a977e1__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_e79ab6f2_ReflectionInfo) = &vftable_238;
      _Init_thread_footer(& cde_l2_09a977e1__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_e79ab6f2_ReflectionInfo;
}





//==== 005f0c90 GetTypeName_005f0c90 ====


/* public: virtual class util__Str_L_char_G_ 
   ExtrudableTurretSubModule__ReflectionInfoStruct_struct_ExtrudableTurretSubModule___GetTypeName(void)const  */

Str_L_char_G_ * 
ExtrudableTurretSubModule__ReflectionInfoStruct_struct_ExtrudableTurretSubModule___GetTypeName
          (ReflectionInfoStruct_L_struct_ExtrudableTurretSubModule_G_ *this,
          Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"ExtrudableTurretSubModule");
  return __return_storage_ptr__;
}





//==== 005f0cb0 GetMembers_005f0cb0 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   ExtrudableTurretSubModule__ReflectionInfoStruct_struct_ExtrudableTurretSubModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
ExtrudableTurretSubModule__ReflectionInfoStruct_struct_ExtrudableTurretSubModule___GetMembers
          (ReflectionInfoStruct_L_struct_ExtrudableTurretSubModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_ade267fd__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_ade267fd__thread_safe_static_guard_0__),
      cde_l2_ade267fd__thread_safe_static_guard_0__ == -1)) {
     cde_l2_81c5d69a_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_ade267fd__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_81c5d69a_Count);
  iVar3 = 0;
  if (0 <  cde_l2_81c5d69a_Count) {
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
    } while (iVar3 <  cde_l2_81c5d69a_Count);
  }
  return in_stack_00000004;
}





//==== 005f0df0 GetMember_005f0df0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   ExtrudableTurretSubModule__ReflectionInfoStruct_struct_ExtrudableTurretSubModule___GetMember(class util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
ExtrudableTurretSubModule__ReflectionInfoStruct_struct_ExtrudableTurretSubModule___GetMember
          (ReflectionInfoStruct_L_struct_ExtrudableTurretSubModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_395d3440__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_395d3440__thread_safe_static_guard_0__),
      cde_l2_395d3440__thread_safe_static_guard_0__ == -1)) {
     cde_l2_b5039e0c_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_395d3440__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_b5039e0c_Count) {
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
LAB_005f0e7d:
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
          if (cVar3 == '\0') goto LAB_005f0e7d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_b5039e0c_Count);
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





//==== 005f0f90 GetFactory_005f0f90 ====


/* public: virtual class util__Reflectable * (__cdecl*
   ExtrudableTurretSubModule__ReflectionInfoStruct_struct_ExtrudableTurretSubModule___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall ExtrudableTurretSubModule__ReflectionInfoStruct_struct_ExtrudableTurretSubModule___GetFactory
          (ReflectionInfoStruct_L_struct_ExtrudableTurretSubModule_G_ *this)

{
  return StaticFactory;
}





//==== 005f0fa0 GetReflectionInfo_005f0fa0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   ExtrudableSoloTurretSubModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall
ExtrudableSoloTurretSubModule__GetReflectionInfo(ExtrudableSoloTurretSubModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_bdbde40f__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_bdbde40f__thread_safe_static_guard_0__);
    if ( cde_l2_bdbde40f__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_d67e16e9_ReflectionInfo) = &vftable_240;
      _Init_thread_footer(& cde_l2_bdbde40f__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_d67e16e9_ReflectionInfo;
}





//==== 005f0fb0 GetTypeName_005f0fb0 ====


/* public: virtual class util__Str_L_char_G_ 
   ExtrudableSoloTurretSubModule__ReflectionInfoStruct_struct_ExtrudableSoloTurretSubModule___GetTypeName(void)const  */

Str_L_char_G_ * 
ExtrudableSoloTurretSubModule__ReflectionInfoStruct_struct_ExtrudableSoloTurretSubModule___GetTypeName(ReflectionInfoStruct_L_struct_ExtrudableSoloTurretSubModule_G_ *this,
           Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"ExtrudableSoloTurretSubModule");
  return __return_storage_ptr__;
}





//==== 005f0fd0 GetMembers_005f0fd0 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const __thiscall
   ExtrudableSoloTurretSubModule__ReflectionInfoStruct_struct_ExtrudableSoloTurretSubModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * __thiscall
ExtrudableSoloTurretSubModule__ReflectionInfoStruct_struct_ExtrudableSoloTurretSubModule___GetMembers(ReflectionInfoStruct_L_struct_ExtrudableSoloTurretSubModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_9aeaefca__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_9aeaefca__thread_safe_static_guard_0__),
      cde_l2_9aeaefca__thread_safe_static_guard_0__ == -1)) {
     cde_l2_78cd4d7c_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_9aeaefca__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_78cd4d7c_Count);
  iVar3 = 0;
  if (0 <  cde_l2_78cd4d7c_Count) {
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
    } while (iVar3 <  cde_l2_78cd4d7c_Count);
  }
  return in_stack_00000004;
}





//==== 005f1110 GetMember_005f1110 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   ExtrudableSoloTurretSubModule__ReflectionInfoStruct_struct_ExtrudableSoloTurretSubModule___GetMember(class util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
ExtrudableSoloTurretSubModule__ReflectionInfoStruct_struct_ExtrudableSoloTurretSubModule___GetMember
          (ReflectionInfoStruct_L_struct_ExtrudableSoloTurretSubModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_acd0affa__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_acd0affa__thread_safe_static_guard_0__),
      cde_l2_acd0affa__thread_safe_static_guard_0__ == -1)) {
     cde_l2_16174262_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_acd0affa__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_16174262_Count) {
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
LAB_005f119d:
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
          if (cVar3 == '\0') goto LAB_005f119d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_16174262_Count);
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





//==== 005f12b0 GetFactory_005f12b0 ====


/* public: virtual class util__Reflectable * (__cdecl*__thiscall
   ExtrudableSoloTurretSubModule__ReflectionInfoStruct_struct_ExtrudableSoloTurretSubModule___GetFactory(void)const )(void) */

_func_Reflectable_ptr * __thiscall
ExtrudableSoloTurretSubModule__ReflectionInfoStruct_struct_ExtrudableSoloTurretSubModule___GetFactory(ReflectionInfoStruct_L_struct_ExtrudableSoloTurretSubModule_G_ *this)

{
  return StaticFactory;
}





//==== 005f12c0 GetParametricHitLocationOnSphere_double_ ====


/* struct util__Vec2_L_double_G_ __cdecl util__GetParametricHitLocationOnSphere_L_double_G_(struct
   util__Vec3_L_double_G_,struct util__Vec3_L_double_G_,struct util__Quaternion_L_double_G_) */

Vec2_L_double_G_ * __cdecl
util__GetParametricHitLocationOnSphere_double
          (Vec2_L_double_G_ *__return_storage_ptr__,Vec4_L_double_G_ param_1,Vec4_L_double_G_ param_2,
          Quaternion_L_double_G_ param_3)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  Maybe_L_double_G_ *pMVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 in_stack_00000008;
  Vec3_L_double_G_ VStack_78;
  undefined1 auStack_60 [16];
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  double dStack_20;
  double dStack_18;
  double dStack_10;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  dStack_20 = (double)CONCAT44(param_2.X,param_1.W) -
              (double)CONCAT44(param_1.X,in_stack_00000008);
  dVar5 = (double)CONCAT44(param_3.X,param_2.W);
  dStack_10 = (double)(*(uint64_t *)((char *)&(param_2) + 12)) - (double)(*(uint64_t *)((char *)&(param_1) + 12));
  dStack_38 = (double)(*(uint64_t*)((char*)&(param_2)+4)) - (double)(*(uint64_t*)((char*)&(param_1)+4));
  dStack_28 = (double)(*(uint64_t*)((char*)&(param_3)+4)) * (double)(*(uint64_t*)((char*)&(param_3)+4)) + dVar5 * dVar5 +
              (double)(*(uint64_t *)((char *)&(param_3) + 12)) * (double)(*(uint64_t *)((char *)&(param_3) + 12)) +
              (double)(*(uint64_t *)((char *)&(param_3) + 20)) * (double)(*(uint64_t *)((char *)&(param_3) + 20));
  dStack_40 = -(double)(*(uint64_t*)((char*)&(param_3)+4)) / dStack_28;
  dStack_18 = -(double)(*(uint64_t *)((char *)&(param_3) + 12)) / dStack_28;
  dVar5 = -dVar5 / dStack_28;
  dStack_28 = (double)(*(uint64_t *)((char *)&(param_3) + 20)) / dStack_28;
  dStack_30 = -dStack_40;
  dVar9 = ((dStack_40 * dStack_10 + dVar5 * 0.0) - dStack_18 * dStack_38) + dStack_28 * dStack_20;
  dVar8 = (dStack_40 * 0.0 - dVar5 * dStack_10) + dStack_18 * dStack_20 + dStack_28 * dStack_38;
  dVar7 = (dStack_38 * dVar5 - dStack_20 * dStack_40) + dStack_18 * 0.0 + dStack_28 * dStack_10;
  dStack_20 = dStack_20 * dVar5;
  dVar6 = dStack_28 * 0.0 - (dStack_20 + dStack_40 * dStack_38 + dStack_18 * dStack_10);
  (*(uint64_t*)&(auStack_60)) = ((dStack_28 * dVar9 + -dStack_18 * dVar8) - dStack_30 * dVar7) + -dVar5 * dVar6
  ;
  (*(uint64_t*)((char*)&(auStack_60)+8)) = (dStack_28 * dVar8 - -dStack_18 * dVar9) + -dVar5 * dVar7 + dStack_30 * dVar6;
  dStack_50 = (dStack_30 * dVar9 - -dVar5 * dVar8) + dStack_28 * dVar7 + -dStack_18 * dVar6;
  Vec3_L_double_G___SafeNormalized((Vec3_L_double_G_ *)auStack_60,&VStack_78);
  dStack_18 = VStack_78.X * VStack_78.X + VStack_78.Z * VStack_78.Z;
  pMVar2 = (Maybe_L_double_G_ *)(uintptr_t)(Sqrt((Maybe_L_double_G_ *)(auStack_60 + 8),&dStack_18));
  if (pMVar2->IsValidData == false) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,"IsValid()",
              (char *)0x0);
    DebugBreak();
  }
  dVar5 = pMVar2->Data;
  if (((NAN(VStack_78.X) == (VStack_78.X == 0.0)) || (NAN(VStack_78.Z) == (VStack_78.Z == 0.0))) &&
     (NAN(dVar5) == (dVar5 == 0.0))) {
    dStack_40 = (1.0 / dVar5) * VStack_78.Z;
    dStack_48 = (1.0 / dVar5) * VStack_78.X;
  }
  else {
    dStack_48 = 0.0;
    dStack_40 = 0.0;
  }
  dStack_10 = dStack_48;
  if (((-1.0 < dStack_48) || (dStack_48 < 1.0)) && ((1.0 < dStack_48 || (dStack_48 < -1.0)))) {
    dStack_50 = -1.0;
    dStack_18 = 1e-08;
    bVar1 = Equals_L_double_G_(&dStack_10,&dStack_50,&dStack_18);
    if (!bVar1) {
      dStack_38 = 1.0;
      dStack_18 = 1e-08;
      bVar1 = Equals_L_double_G_(&dStack_10,&dStack_38,&dStack_18);
      if (!bVar1) {
        LogEnsure("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\coremath.h",0x5b,
                  "Between_L_Type_G_(X, (int)-1, (int)1) || Equals(X, (int)-1) || Equals(X, (int)1)"
                  ,(char *)0x0);
      }
    }
  }
  uVar3 = SUB84(dStack_10,0);
  uVar4 = (undefined4)((ulonglong)dStack_10 >> 0x20);
  if (dStack_10 <= -1.0) {
    uVar3 = 0;
    uVar4 = 0xbff00000;
  }
  if (1.0 <= (double)CONCAT44(uVar4,uVar3)) {
    uVar3 = 0;
    uVar4 = 0x3ff00000;
  }
  libm_sse2_acos_precise(0.0);
  dVar5 = (double)CONCAT44(uVar4,uVar3) / 6.283185307179586;
  if (dStack_40 < 0.0) {
    dVar5 = 1.0 - dVar5;
  }
  uVar3 = SUB84(VStack_78.Y,0);
  uVar4 = (undefined4)((ulonglong)VStack_78.Y >> 0x20);
  __return_storage_ptr__->X = dVar5;
  libm_sse2_asin_precise(0.0);
  __return_storage_ptr__->Y = (double)CONCAT44(uVar4,uVar3) / 3.141592653589793 + 0.5;
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}





//==== 005f1750 TurretSubModule_005f1750 ====

/* public: __thiscall TurretSubModule__TurretSubModule(void) */

TurretSubModule * __thiscall TurretSubModule__TurretSubModule(TurretSubModule *this)

{
  int *piVar1;
  
  this->_pad_0x0_0 = 0;
  this->_pad_0x4_1 = 0;
  this->_pad_0x8_2 = 0;
  (undefined4)((*(undefined4 *)(void *)((char *)(uintptr_t)(this) + 0xc)) = 0);
  this->_pad_0x4_1 = 0;
  piVar1 = &(this->MomentumWheels)._pad_0x8_2;
  this->_pad_0x8_2 = 0;
  (undefined4)((*(undefined4 *)(void *)((char *)(uintptr_t)(this) + 0xc)) = 0);
  this->_pad_0x0_0 = (int)&vftable_190;
  this->InnerRadius_m = 0.0;
  this->Extruded = false;
  this->ArmorComposition = (Material *)0x0;
  this->ArmorThickness_m = 0.0;
  (this->MomentumWheels)._pad_0x0_0 = 1;
  memset(piVar1,0,0x40);
  (this->MomentumWheels)._pad_0xc_3 = 0;
  (this->MomentumWheels).Composition = (Material *)0x0;
  (undefined4)((*(undefined4 *)(void *)((char *)&((this->MomentumWheels)) + 0x14)) = 0);
  *piVar1 = (int)&vftable_186;
  *(undefined1 *)&this->CachedObjectEndRadialMomentOfInertia_kg_m2 = 0;
  memset(&this->CachedObjectMass_kg,0,0x48);
  *(undefined4 *)((int)&this->CachedObjectMass_kg + 4) = 0;
  (this->ExtruderModel).Pointer = (GameModel *)0x0;
  (this->ExtruderModel).Controller = (ReferenceController *)0x0;
  *(undefined ***)&this->CachedObjectMass_kg = &vftable_188;
  *(undefined1 *)&this[1].MomentumWheels.Composition = 0;
  *(undefined4 *)&this[1].MomentumWheels.RotationalSpeed_RPM = 0;
  *(undefined4 *)((int)&this[1].MomentumWheels.RotationalSpeed_RPM + 4) = 0;
  *(undefined4 *)&this[1].MomentumWheels.CachedRadius_m = 0;
  *(undefined4 *)((int)&this[1].MomentumWheels.CachedRadius_m + 4) = 0;
  *(undefined8 *)&this[1].MomentumWheels.CachedAxisCount = 0;
  this[1].MomentumWheels.CachedWheelCount = 0;
  *(undefined4 *)((char *)&this[1].MomentumWheels + 0x3c) = 0;
  this[1].MomentumWheels.CachedHeight_m = 0.0;
  this[1].CachedObjectRadius_m = 0.0;
  *(undefined4 *)&this[1].CachedObjectEndRadialMomentOfInertia_kg_m2 = 0;
  *(undefined4 *)((int)&this[1].CachedObjectEndRadialMomentOfInertia_kg_m2 + 4) = 0;
  return this;
}

//==== 005f2960 GenerateNewTexture ====


/* public: class util__SharedPtr_L_classArmorTextureHandler_G_ __thiscall
   TurretSubModule__GenerateNewTexture(void)const  */

int * __thiscall TurretSubModule__GenerateNewTexture(TurretSubModule *this)

{
  Vec3_L_double_G_ VVar1;
  double dVar2;
  ArmorTextureHandler *pAVar3;
  ReferenceControllerRegistry *this_00;
  ReferenceController *this_01;
  double dVar4;
  int *in_stack_00000004;
  ArmorTextureHandler *pAVar5;
  TextureInitOptions TStack_2c;
  
  in_stack_00000004[0] = 0;
  in_stack_00000004[1] = 0;
  pAVar3 = (ArmorTextureHandler *)port_op_new(0xe8);
  if (pAVar3 == (ArmorTextureHandler *)0x0) {
    pAVar3 = (ArmorTextureHandler *)0x0;
  }
  else {
    memset(0,0,0);
    pAVar3 = (ArmorTextureHandler *)ArmorTextureHandler__ArmorTextureHandler(pAVar3);
    if (pAVar3 != (ArmorTextureHandler *)0x0) goto LAB_005f29c8;
  }
  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl",
                  0xd4,"NewPointer",(char *)0x0);
  DebugBreak();
LAB_005f29c8:
  pAVar5 = pAVar3;
  this_00 = util__ReferenceControllerRegistry__Get();
  this_01 = util__ReferenceControllerRegistry__Register(this_00,pAVar5);
  *in_stack_00000004 = (int)pAVar3;
  in_stack_00000004[1] = (int)this_01;
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
    pAVar3 = (ArmorTextureHandler *)*in_stack_00000004;
  }
  TStack_2c.NearestFiltering = false;
  TStack_2c.TextureR = Repeat;
  dVar2 = (this->ArmorThickness_m + this->InnerRadius_m) * 6.283185307179586;
  TStack_2c.Mipmaps.Data.MinLevel = 0;
  TStack_2c.Mipmaps.Data.MaxLevel.Data = 0;
  TStack_2c.Mipmaps.Data.MaxLevel.IsValidData = false;
  TStack_2c.Mipmaps.IsValidData = false;
  TStack_2c.Quality = EightBit;
  dVar4 = dVar2 * 0.5;
  TStack_2c.TextureS = Repeat;
  TStack_2c.TextureT = ClampToEdge;
  TStack_2c.Channels = RG;
  VVar1.Y = SUB84(dVar4,0);
  VVar1.X = dVar2;
  VVar1.Z = (int)((ulonglong)dVar4 >> 0x20);
  ArmorTextureHandler__GenerateTexture(pAVar3,VVar1,&TStack_2c,false);
  return in_stack_00000004;
}





//==== 005f2a70 GetComposition_005f2a70 ====

/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   ReactionWheelSubModule__GetComposition(void)const  */

Darray_L_MaterialComposition_G_ * __thiscall
ReactionWheelSubModule__GetComposition
          (ReactionWheelSubModule *this,Darray_L_MaterialComposition_G_ *__return_storage_ptr__)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  Material *pMVar5;
  int iVar6;
  Darray_L_MaterialComposition_G_ *this_00;
  bool bVar7;
  MaterialComposition *pMVar8;
  int iVar9;
  int iVar10;
  undefined4 uStack_10;
  
  this_00 = __return_storage_ptr__;
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (MaterialComposition *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_75;
  __return_storage_ptr__->Data = (MaterialComposition *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 1;
  pMVar8 = (MaterialComposition *)(uintptr_t)(port_op_new(0x10));
  if (pMVar8 == (MaterialComposition *)0x0) {
    pMVar8 = (MaterialComposition *)0x0;
  }
  else {
    pMVar8->Type = (Material *)0x0;
    pMVar8->Mass_kg = 0.0;
  }
  iVar10 = 0;
  this_00->Data = pMVar8;
  if (0 < this_00->Capacity) {
    iVar9 = 0;
    do {
      iVar10 = iVar10 + 1;
      puVar1 = (undefined4 *)((int)&this_00->Data->Type + iVar9);
      *puVar1 = 0;
      puVar1[1] = uStack_10;
      puVar1[2] = 0;
      puVar1[3] = 0;
      iVar9 = iVar9 + 0x10;
    } while (iVar10 < this_00->Capacity);
  }
  dVar2 = this->CachedRadius_m;
  dVar3 = this->CachedHeight_m;
  pMVar5 = this->Composition;
  iVar10 = this->CachedAxisCount;
  dVar4 = pMVar5->Density_kg__m3;
  iVar9 = this[1]._pad_0x0_0;
  iVar6 = this_00->Size;
  __return_storage_ptr__ = (Darray_L_MaterialComposition_G_ *)(iVar6 + 1);
  util__Darray_L_MaterialConstituent_G___SetSize
            ((Darray_L_MaterialConstituent_G_ *)this_00,(int *)&__return_storage_ptr__);
  bVar7 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                    ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar6);
  if (bVar7) {
    pMVar8 = this_00->Data + this_00->Size + -1;
    pMVar8->Type = pMVar5;
    (undefined4)((*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar8) + 0x4)) = uStack_10);
    pMVar8->Mass_kg =
         (dVar2 * dVar2 * 3.141592653589793 * dVar3 - dVar3 * 0.0) * dVar4 * (double)iVar10 *
         (double)iVar9;
  }
  return this_00;
}

//==== 005f2b80 GetComposition_005f2b80 ====


/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   TurretMotorSubModule__GetComposition(void)const  */

void __thiscall TurretMotorSubModule__GetComposition(TurretMotorSubModule *this)

{
  undefined8 stack0xfffffffc;
  double dVar1;
  Material *pMVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  Darray_L_struct_MaterialConstituent_G_ *in_stack_00000004;
  undefined4 uStack_2c;
  undefined8 uStack_20;
  undefined1 auStack_18 [8];
  undefined8 uStack_10;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = (undefined **)(&vftable_75);
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 1;
  puVar4 = (undefined4 *)port_op_new(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = 0;
    *(undefined8 *)(puVar4 + 2) = 0;
  }
  iVar6 = 0;
  *(undefined4 **)(in_stack_00000004 + 4) = puVar4;
  if (0 < *(int *)(in_stack_00000004 + 0xc)) {
    iVar5 = 0;
    do {
      iVar5 = iVar5 + 0x10;
      (*(uint8_t*)&(uStack_10)) = false;
      (*(uint56_t*)((char*)&(uStack_10)+1)) = 0;
      iVar6 = iVar6 + 1;
      (*(uint32_t*)&(auStack_18)) = 0;
      puVar4 = (undefined4 *)(*(int *)(in_stack_00000004 + 4) + -0x10 + iVar5);
      *puVar4 = 0;
      puVar4[1] = (*(uint32_t*)((char*)&(auStack_18)+4));
      puVar4[2] = 0;
      puVar4[3] = 0;
    } while (iVar6 < *(int *)(in_stack_00000004 + 0xc));
  }
  GetPermanentMagnetInnerRadius_m(this,(Maybe_L_double_G_ *)auStack_18);
  pMVar2 = Material__DefaultMaterial;
  if (((*(uint8_t*)&(uStack_10)) == false) ||
     (dVar7 = (double)CONCAT44((*(uint32_t*)((char*)&(auStack_18)+4)),(*(uint32_t*)&(auStack_18))) - 0.0003,
     dVar7 <= *(double *)(this + 0x28) - (double)CONCAT44((*(uint32_t*)((char*)&(auStack_18)+4)),(*(uint32_t*)&(auStack_18))))) {
    dVar7 = 0.0;
  }
  iVar6 = *(int *)(this + 0x20);
  iVar5 = *(int *)(in_stack_00000004 + 8);
  dVar8 = *(double *)(this + 0x30);
  dVar1 = Material__DefaultMaterial->Density_kg__m3;
  uStack_20 = (double)CONCAT44(iVar5 + 1,(undefined4)uStack_20);
  util__Darray_struct_MaterialConstituent___SetSize(in_stack_00000004,(int *)((int)&uStack_20 + 4));
  bVar3 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                    ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)in_stack_00000004,
                     iVar5);
  if (bVar3) {
    puVar4 = (undefined4 *)
             (*(int *)(in_stack_00000004 + 4) + -0x10 + *(int *)(in_stack_00000004 + 8) * 0x10);
    *puVar4 = (undefined4)(uintptr_t)(pMVar2);
    puVar4[1] = uStack_2c;
    *(double *)(puVar4 + 2) =
         dVar7 * dVar7 * 3.141592653589793 * dVar8 * 0.4 * dVar1 * (double)iVar6;
  }
  pMVar2 = Material__DefaultMaterial;
  dVar7 = *(double *)(this + 0x28);
  dVar8 = *(double *)(this + 0x30);
  iVar6 = *(int *)(in_stack_00000004 + 8);
  iVar5 = *(int *)(this + 0x20);
  dVar1 = Material__DefaultMaterial->Density_kg__m3;
  uStack_20 = (double)CONCAT44(iVar6 + 1,(undefined4)uStack_20);
  util__Darray_struct_MaterialConstituent___SetSize(in_stack_00000004,(int *)((int)&uStack_20 + 4));
  bVar3 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                    ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)in_stack_00000004,
                     iVar6);
  if (bVar3) {
    puVar4 = (undefined4 *)
             (*(int *)(in_stack_00000004 + 4) + -0x10 + *(int *)(in_stack_00000004 + 8) * 0x10);
    *puVar4 = (undefined4)(uintptr_t)(pMVar2);
    puVar4[1] = uStack_2c;
    *(double *)(puVar4 + 2) =
         dVar7 * 0.01 * dVar7 * 0.01 * 3.141592653589793 * dVar8 * 0.01 * dVar1 * (double)iVar5;
  }
  dVar7 = GetRotationalSpeed_radians__s(this);
  uStack_10 = *(double *)(this + 0x18) * 1.82;
  pMVar2 = *(Material **)(this + 0x10);
  uStack_20 = (dVar7 * 130.0) / 6.283185307179586;
  dVar8 = Material__GetCoercivity_A__m(pMVar2);
  dVar7 = pMVar2->BandGap_eV * uStack_20;
  iVar6 = *(int *)(in_stack_00000004 + 8);
  iVar5 = *(int *)(this + 0x20);
  (*(uint32_t*)&(uStack_20)) = SUB84(dVar7,0);
  uStack_20 = (double)CONCAT44(iVar6 + 1,(undefined4)uStack_20);
  uStack_10 = uStack_10 / (dVar8 * dVar7);
  dVar7 = pMVar2->Density_kg__m3 * uStack_10;
  util__Darray_struct_MaterialConstituent___SetSize(in_stack_00000004,(int *)((int)&uStack_20 + 4));
  bVar3 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                    ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)in_stack_00000004,
                     iVar6);
  if (bVar3) {
    puVar4 = (undefined4 *)
             (*(int *)(in_stack_00000004 + 4) + -0x10 + *(int *)(in_stack_00000004 + 8) * 0x10);
    *puVar4 = (undefined4)(uintptr_t)(pMVar2);
    puVar4[1] = uStack_2c;
    *(double *)(puVar4 + 2) = dVar7 * (double)iVar5;
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 005f2de0 GetExtruderLength_m ====


/* public: double __thiscall TurretSubModule__GetExtruderLength_m(void)const  */

double __thiscall TurretSubModule__GetExtruderLength_m(TurretSubModule *this)

{
  if (this->Extruded != false) {
    return this->ArmorThickness_m + this->InnerRadius_m;
  }
  return 0.0;
}





//==== 005f2e20 GetMaxDeviationAngle_radians ====

/* public: double __thiscall TurretSubModule__GetMaxDeviationAngle_radians(void)const  */

double __thiscall TurretSubModule__GetMaxDeviationAngle_radians(TurretSubModule *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  float10 fVar4;
  double dVar5;
  double local_24;
  double local_1c;
  double local_14;
  undefined8 local_c;
  
  if (this->Extruded != false) {
    local_c = this->ArmorThickness_m + this->InnerRadius_m;
    fVar4 = (float10)__CIatan2();
    return (double)(fVar4 + (float10)1.5707963267948966);
  }
  iVar1 = *(int *)&this[1].MomentumWheels.RotationalSpeed_RPM;
  if (iVar1 == 0) {
LAB_005f2e77:
    fVar4 = (float10)*(double *)&this[1].MomentumWheels.CachedAxisCount;
  }
  else {
    pcVar2 = *(code **)((int)&this[1].MomentumWheels.RotationalSpeed_RPM + 4);
    local_c = (double)CONCAT44(pcVar2,(undefined4)local_c);
    if (pcVar2 == (code *)0x0) goto LAB_005f2e77;
    fVar4 = (float10)(*pcVar2)(iVar1);
  }
  local_c = (double)fVar4;
  dVar5 = util__GetCirclePackingInACircleRadius_double((this->MomentumWheels)._pad_0x0_0);
  dVar5 = dVar5 * local_c;
  if (this->InnerRadius_m <= dVar5 && dVar5 != this->InnerRadius_m) {
    return 0.0;
  }
  iVar1 = *(int *)&this[1].MomentumWheels.RotationalSpeed_RPM;
  if (iVar1 != 0) {
    pcVar2 = *(code **)((int)&this[1].MomentumWheels.RotationalSpeed_RPM + 4);
    (*(uint32_t*)&(local_c)) = SUB84(dVar5,0);
    local_c = (double)CONCAT44(pcVar2,(undefined4)local_c);
    if (pcVar2 != (code *)0x0) {
      fVar4 = (float10)(*pcVar2)(iVar1);
      goto LAB_005f2ee7;
    }
  }
  fVar4 = (float10)*(double *)&this[1].MomentumWheels.CachedAxisCount;
LAB_005f2ee7:
  local_c = (double)fVar4;
  dVar5 = util__GetCirclePackingInACircleRadius_double((this->MomentumWheels)._pad_0x0_0);
  local_c = (dVar5 * local_c) / this->InnerRadius_m;
  if (((-1.0 < local_c) || (local_c < 1.0)) && ((1.0 < local_c || (local_c < -1.0)))) {
    *(uint32_t *)&local_1c = -1.0;
    local_14 = 1e-08;
    bVar3 = util__Equals_double((double *)&local_c,&local_1c,&local_14);
    if (!bVar3) {
      local_24 = 1.0;
      local_14 = 1e-08;
      bVar3 = util__Equals_double((double *)&local_c,&local_24,&local_14);
      if (!bVar3) {
        util__LogEnsure("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\coremath.h",
                        0x62,
                        "Between_L_Type_G_(X, (int)-1, (int)1) || Equals(X, (int)-1) || Equals(X, (int)1)"
                        ,(char *)0x0);
      }
    }
  }
  dVar5 = local_c;
  if (local_c <= -1.0) {
    dVar5 = -1.0;
  }
  if (1.0 <= dVar5) {
    dVar5 = 1.0;
  }
  libm_sse2_asin_precise(0.0);
  return 1.5707963267948966 - dVar5;
}

//==== 005f2ff0 GetObjectOffsetFromTurret_m ====

/* public: double __thiscall TurretSubModule__GetObjectOffsetFromTurret_m(void)const  */

double __thiscall TurretSubModule__GetObjectOffsetFromTurret_m(TurretSubModule *this)

{
  int iVar1;
  code *pcVar2;
  Maybe_L_double_G_ *pMVar3;
  float10 fVar4;
  double dVar5;
  Maybe_L_double_G_ local_24;
  double local_14;
  undefined8 local_c;
  
  iVar1 = *(int *)&this[1].MomentumWheels.RotationalSpeed_RPM;
  if ((iVar1 == 0) ||
     (pcVar2 = *(code **)((int)&this[1].MomentumWheels.RotationalSpeed_RPM + 4),
     local_c = (double)CONCAT44(pcVar2,(undefined4)local_c), pcVar2 == (code *)0x0)) {
    fVar4 = (float10)*(double *)&this[1].MomentumWheels.CachedAxisCount;
  }
  else {
    fVar4 = (float10)(*pcVar2)(iVar1);
  }
  local_c = (double)fVar4;
  dVar5 = util__GetCirclePackingInACircleRadius_double((this->MomentumWheels)._pad_0x0_0);
  if (dVar5 * local_c <= this->InnerRadius_m) {
    iVar1 = *(int *)&this[1].MomentumWheels.RotationalSpeed_RPM;
    if ((iVar1 == 0) ||
       (pcVar2 = *(code **)((int)&this[1].MomentumWheels.RotationalSpeed_RPM + 4),
       (*(uint32_t*)&(local_c)) = SUB84(dVar5 * local_c,0),
       local_c = (double)CONCAT44(pcVar2,(undefined4)local_c), pcVar2 == (code *)0x0)) {
      fVar4 = (float10)*(double *)&this[1].MomentumWheels.CachedAxisCount;
    }
    else {
      fVar4 = (float10)(*pcVar2)(iVar1);
    }
    local_c = (double)fVar4;
    dVar5 = util__GetCirclePackingInACircleRadius_double((this->MomentumWheels)._pad_0x0_0);
    local_c = dVar5 * local_c;
    dVar5 = this->InnerRadius_m * this->InnerRadius_m - local_c * local_c;
    local_14 = 0.0;
    if (0.0 <= dVar5) {
      local_14 = dVar5;
    }
    pMVar3 = util__Sqrt(&local_24,&local_14);
    if (pMVar3->IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    return pMVar3->Data;
  }
  return 0.0;
}

//==== 005f3110 GetOuterRadius_m ====


/* public: double __thiscall TurretSubModule__GetOuterRadius_m(void)const  */

double __thiscall TurretSubModule__GetOuterRadius_m(TurretSubModule *this)

{
  return this->ArmorThickness_m + this->InnerRadius_m;
}





//==== 005f3120 GetPermanentMagnetInnerRadius_m ====


/* public: class util__Maybe_L_double_G_ 
   TurretMotorSubModule__GetPermanentMagnetInnerRadius_m(void)const  */

Maybe_L_double_G_ * 
TurretMotorSubModule__GetPermanentMagnetInnerRadius_m
          (TurretMotorSubModule *this,Maybe_L_double_G_ *__return_storage_ptr__)

{
  double dVar1;
  double dStack_1c;
  double dStack_14;
  double dStack_c;
  
  dStack_1c = *(double *)(this + 0x28);
  dVar1 = GetRotationalSpeed_radians__s(this);
  dStack_14 = *(double *)(this + 0x18) * 1.82;
  dStack_c = (dVar1 * 130.0) / 6.283185307179586;
  dVar1 = Material__GetCoercivity_A__m(*(Material **)(this + 0x10));
  dStack_c = *(double *)(*(int *)(this + 0x10) + 0xe0) * dStack_c;
  dStack_14 = dStack_14 / (dVar1 * dStack_c);
  dStack_1c = (dStack_1c * 3.141592653589793 * dStack_1c - dStack_14 / *(double *)(this + 0x30)) /
              3.141592653589793;
  util__Sqrt(__return_storage_ptr__,&dStack_1c);
  return __return_storage_ptr__;
}





//==== 005f31d0 GetPointerPropertyChoices_005f31d0 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   TurretMotorSubModule__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

ClassMember * 
TurretMotorSubModule__GetPointerPropertyChoices
          (TurretMotorSubModule *this,ClassMember *param_1,SerializationManagerInterface *param_2)

{
  char *pcVar1;
  SerializationManagerInterface SVar2;
  int in_stack_0000000c;
  
  if ((*(int *)&(param_2[1])) < 1) {
    SVar2 = (*(SerializationManagerInterface *)
            &cde_l2_0b2b1c9f_NullString);
  }
  else {
    SVar2 = *param_2;
  }
  for (pcVar1 = "PermanentMagnet";
      (pcVar1[(int)((*(int *)&(SVar2)) + -0x9262cc)] != '\0' || (*pcVar1 != '\0')); pcVar1 = pcVar1 + 1) {
    if (pcVar1[(int)((*(int *)&(SVar2)) + -0x9262cc)] != *pcVar1) {
      (param_1->Name).Data =
           (char *)&vftable_85;
      (param_1->Name).Capacity = 0;
      (param_1->Name).Length = 0;
      *(undefined4 *)&param_1->Type = 0;
      return param_1;
    }
  }
  GetMaterials((DataParser *)param_1,in_stack_0000000c,true);
  return param_1;
}





//==== 005f3250 GetPowerConsumption_W ====

/* public: double __thiscall TurretSubModule__GetPowerConsumption_W(void)const  */

double __thiscall TurretSubModule__GetPowerConsumption_W(TurretSubModule *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (*(char *)&this[1].MomentumWheels.Composition != '\0') {
    dVar4 = *(double *)&this[1].Extruded;
    dVar1 = (*(double *)&this[1]._pad_0x8_2 / 60.0) * 6.283185307179586;
    dVar2 = this[1].ArmorThickness_m;
    dVar3 = (double)this[1].MomentumWheels._pad_0x8_2;
    dVar3 = Mechanics__ThickCylindericalShellAxialMomentOfInertia_kg_m2
                      (dVar3 * dVar2,0.0,dVar4,
                       dVar3 * (dVar4 * dVar4 * 3.141592653589793 * dVar2 - dVar2 * 0.0) *
                               *(double *)(this[1]._pad_0x0_0 + 0x30));
    dVar2 = (1.5707963267948966 / dVar1) * 0.1;
    dVar4 = 0.1;
    if (0.1 <= dVar2) {
      dVar4 = dVar2;
    }
    return (((*(double *)&this[1]._pad_0x8_2 / 60.0) * 6.283185307179586 * dVar3 * (dVar1 / dVar4))
           / 0.9) * (double)this[1].MomentumWheels._pad_0x8_2;
  }
  if (*(char *)&this->CachedObjectEndRadialMomentOfInertia_kg_m2 != '\0') {
    return (double)((this->MomentumWheels).CachedAxisCount);
  }
  return 0.0;
}

//==== 005f3390 GetPowerUsage_005f3390 ====

/* public: virtual class util__Darray_L_structPowerUsage_G_ __thiscall
   ReactionWheelSubModule__GetPowerUsage(void)const  */

Darray_L_PowerUsage_G_ * __thiscall
ReactionWheelSubModule__GetPowerUsage
          (ReactionWheelSubModule *this,Darray_L_PowerUsage_G_ *__return_storage_ptr__)

{
  int iVar1;
  PowerUsage *pPVar2;
  Darray_L_PowerUsage_G_ *this_00;
  bool bVar3;
  LocStr *this_01;
  Str_L_char_G_ *pSVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  Str_L_char_G_ local_60;
  double local_50;
  void *local_48 [3];
  void *local_3c;
  Str_L_char_G_ local_30;
  Str_L_char_G_ local_24;
  Str_L_char_G_ local_18;
  double local_c;
  
  this_00 = __return_storage_ptr__;
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (PowerUsage *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  util__Darray_L_PowerUsage_G___Darray_L_PowerUsage_G_(__return_storage_ptr__,1);
  util__Str_char___Str_char(&local_30,"PowerUse MomentumWheels");
  dVar6 = this->CachedRadius_m;
  local_c = (this->RotationalSpeed_RPM / 60.0) * 6.283185307179586;
  dVar5 = this->CachedHeight_m;
  dVar7 = Mechanics__ThickCylindericalShellAxialMomentOfInertia_kg_m2
                    ((double)this[1]._pad_0x0_0 * dVar5,0.0,dVar6,
                     (double)this[1]._pad_0x0_0 *
                     (dVar6 * dVar6 * 3.141592653589793 * dVar5 - dVar5 * 0.0) *
                     this->Composition->Density_kg__m3);
  local_18.Data = (char *)0x0;
  local_18.Capacity = 0;
  local_18.Length = 0;
  dVar5 = (1.5707963267948966 / local_c) * 0.1;
  dVar6 = 0.1;
  if (0.1 <= dVar5) {
    dVar6 = dVar5;
  }
  local_c = (((this->RotationalSpeed_RPM / 60.0) * 6.283185307179586 * dVar7 * (local_c / dVar6)) /
            0.9) * (double)this[1]._pad_0x0_0;
  this_01 = (LocStr *)util__LocStr__LocStr((LocStr *)local_48,&local_30,&local_18);
  pSVar4 = util__LocStr__operator__o3(this_01);
  util__Str_char___Str_char(&local_24,pSVar4);
  util__Str_char___Str_char(&local_60,&local_24);
  *(uint32_t *)&local_50 = local_c;
  if (local_24.Data != (char *)0x0) {
    port_op_delete(local_24.Data);
  }
  iVar1 = this_00->Size;
  __return_storage_ptr__ = (Darray_L_PowerUsage_G_ *)(iVar1 + 1);
  util__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___SetSize
            ((Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ *)this_00,(int *)&__return_storage_ptr__
            );
  bVar3 = util__Darray_L_PowerUsage_G___CheckSize(this_00,iVar1);
  if (bVar3) {
    iVar1 = this_00->Size;
    pPVar2 = this_00->Data;
    util__Str_char___operator__o8(&pPVar2[iVar1 + -1].Label,&local_60);
    pPVar2[iVar1 + -1].PowerUsed_W = local_c;
  }
  if (local_60.Data != (char *)0x0) {
    port_op_delete(local_60.Data);
  }
  if (local_3c != (void *)0x0) {
    port_op_delete(local_3c);
    local_3c = (void *)0x0;
  }
  if (local_48[0] != (void *)0x0) {
    port_op_delete(local_48[0]);
    local_48[0] = (void *)0x0;
  }
  if (local_18.Data != (char *)0x0) {
    port_op_delete(local_18.Data);
    local_18.Data = (char *)0x0;
  }
  if (local_30.Data != (char *)0x0) {
    port_op_delete(local_30.Data);
  }
  return this_00;
}

//==== 005f35b0 GetPowerUsage_005f35b0 ====


/* public: virtual class util__Darray_L_structPowerUsage_G_ __thiscall
   TurretMotorSubModule__GetPowerUsage(void)const  */

Darray_L_struct_PowerUsage_G_ * __thiscall
TurretMotorSubModule__GetPowerUsage(TurretMotorSubModule *this)

{
  undefined8 stack0x00000004;
  int iVar1;
  Darray_L_struct_PowerUsage_G_ *this_00;
  bool bVar2;
  LocStr *this_01;
  Str_L_char_G_ *pSVar3;
  Darray_L_struct_PowerUsage_G_ *in_stack_00000004;
  Str_L_char_G_ SStack_60;
  undefined8 uStack_50;
  void *apvStack_48 [3];
  void *pvStack_3c;
  Str_L_char_G_ SStack_30;
  Str_L_char_G_ SStack_24;
  Str_L_char_G_ SStack_18;
  undefined8 uStack_c;
  
  this_00 = in_stack_00000004;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_PowerUsage___Darray_struct_PowerUsage(in_stack_00000004,1);
  util__Str_char___Str_char(&SStack_30,"PowerUse TurretMotors");
  SStack_18.Data = (char *)0x0;
  SStack_18.Capacity = 0;
  SStack_18.Length = 0;
  this_01 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_48,&SStack_30,&SStack_18);
  pSVar3 = util__LocStr__operator__o3(this_01);
  util__Str_char___Str_char(&SStack_24,pSVar3);
  uStack_c = *(undefined8 *)(this + 0x18);
  util__Str_char___Str_char(&SStack_60,&SStack_24);
  uStack_50 = uStack_c;
  if (SStack_24.Data != (char *)0x0) {
    port_op_delete(SStack_24.Data);
  }
  iVar1 = *(int *)(in_stack_00000004 + 8);
  in_stack_00000004 = (Darray_L_struct_PowerUsage_G_ *)(iVar1 + 1);
  util__Darray_struct_util__tuple2_class_util__Str_char__double_____SetSize
            ((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ *)this_00,
             (int *)&stack0x00000004);
  bVar2 = util__Darray_struct_PowerUsage___CheckSize(this_00,iVar1);
  if (bVar2) {
    iVar1 = *(int *)(this_00 + 4) + *(int *)(this_00 + 8) * 0x18;
    util__Str_char___operator__o8((Str_L_char_G_ *)(iVar1 + -0x18),&SStack_60);
    *(undefined8 *)(iVar1 + -8) = uStack_c;
  }
  if (SStack_60.Data != (char *)0x0) {
    port_op_delete(SStack_60.Data);
  }
  if (pvStack_3c != (void *)0x0) {
    port_op_delete(pvStack_3c);
    pvStack_3c = (void *)0x0;
  }
  if (apvStack_48[0] != (void *)0x0) {
    port_op_delete(apvStack_48[0]);
    apvStack_48[0] = (void *)0x0;
  }
  if (SStack_18.Data != (char *)0x0) {
    port_op_delete(SStack_18.Data);
    SStack_18.Data = (char *)0x0;
  }
  if (SStack_30.Data != (char *)0x0) {
    port_op_delete(SStack_30.Data);
  }
  return this_00;
}





//==== 005f36f0 GetRotationalSpeed_radians__s ====


/* public: double __thiscall TurretMotorSubModule__GetRotationalSpeed_radians__s(void)const  */

double __thiscall TurretMotorSubModule__GetRotationalSpeed_radians__s(TurretMotorSubModule *this)

{
  Cylinder_L_double_G_ CVar1;
  Maybe_L_double_G_ *pMVar2;
  double dVar3;
  double dVar4;
  Maybe_L_double_G_ MStack_24;
  double dStack_14;
  double dStack_c;
  
  dVar3 = *(double *)(*(int *)(this + 0x10) + 0xe0) / 3.0;
  libm_sse2_pow_precise(0.0,0.0);
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  dVar4 = *(double *)(this + 0x28) * 0.01;
  if (1.0 <= dVar3) {
    dVar3 = 1.0;
  }
  dStack_c = ((1.0 - dVar3) * 0.75 + dVar3 * 0.999) * *(double *)(this + 0x18);
  dVar3 = *(double *)(this + 0x30) * 0.01;
  CVar1.Height = SUB84(dVar3,0);
  CVar1.Radius = dVar4;
  (*(uint32_t *)((char *)&(CVar1.Height) + 4)) = (int)((ulonglong)dVar3 >> 0x20);
  dVar3 = Mechanics__SolidCylinderAxialMomentOfInertia_kg_m2
                    (CVar1,dVar4 * dVar4 * 3.141592653589793 * dVar3 *
                           Material__DefaultMaterial->Density_kg__m3);
  dStack_14 = (dStack_c * 0.01) / (*(double *)(this + 0x38) + dVar3);
  pMVar2 = util__Sqrt(&MStack_24,&dStack_14);
  if (pMVar2->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return pMVar2->Data;
}





//==== 005f3800 GetRotationalSpeed_radians__s_005f3800 ====

/* public: double __thiscall TurretSubModule__GetRotationalSpeed_radians__s(void)const  */

double __thiscall TurretSubModule__GetRotationalSpeed_radians__s(TurretSubModule *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (*(char *)&this[1].MomentumWheels.Composition != '\0') {
    dVar4 = *(double *)&this[1]._pad_0x8_2;
    dVar3 = *(double *)&this[1].Extruded;
    dVar1 = this[1].ArmorThickness_m;
    dVar2 = (double)this[1].MomentumWheels._pad_0x8_2;
    dVar3 = Mechanics__ThickCylindericalShellAxialMomentOfInertia_kg_m2
                      (dVar2 * dVar1,0.0,dVar3,
                       dVar2 * (dVar3 * dVar3 * 3.141592653589793 * dVar1 - dVar1 * 0.0) *
                               *(double *)(this[1]._pad_0x0_0 + 0x30));
    return (dVar3 * (dVar4 / 60.0) * 6.283185307179586) / *(double *)&this[1].MomentumWheels;
  }
  if (*(char *)&this->CachedObjectEndRadialMomentOfInertia_kg_m2 != '\0') {
    dVar4 = TurretMotorSubModule__GetRotationalSpeed_radians__s
                      ((TurretMotorSubModule *)&(this->MomentumWheels)._pad_0x8_2);
    return dVar4;
  }
  return 0.0;
}

//==== 005f38f0 GetShotCreationOffset_m ====

/* public: double __thiscall TurretSubModule__GetShotCreationOffset_m(void)const  */

double __thiscall TurretSubModule__GetShotCreationOffset_m(TurretSubModule *this)

{
  int iVar1;
  code *pcVar2;
  Maybe_L_double_G_ *pMVar3;
  float10 fVar4;
  double dVar5;
  Maybe_L_double_G_ MStack_24;
  double dStack_14;
  undefined8 uStack_c;
  
  iVar1 = *(int *)&this[1].MomentumWheels.RotationalSpeed_RPM;
  if ((iVar1 == 0) ||
     (pcVar2 = *(code **)((int)&this[1].MomentumWheels.RotationalSpeed_RPM + 4),
     uStack_c = (double)CONCAT44(pcVar2,(undefined4)uStack_c), pcVar2 == (code *)0x0)) {
    fVar4 = (float10)*(double *)&this[1].MomentumWheels.CachedAxisCount;
  }
  else {
    fVar4 = (float10)(*pcVar2)(iVar1);
  }
  uStack_c = (double)fVar4;
  dVar5 = util__GetCirclePackingInACircleRadius_double((this->MomentumWheels)._pad_0x0_0);
  if (dVar5 * uStack_c <= this->InnerRadius_m) {
    iVar1 = *(int *)&this[1].MomentumWheels.RotationalSpeed_RPM;
    if ((iVar1 == 0) ||
       (pcVar2 = *(code **)((int)&this[1].MomentumWheels.RotationalSpeed_RPM + 4),
       (*(uint32_t*)&(uStack_c)) = SUB84(dVar5 * uStack_c,0),
       uStack_c = (double)CONCAT44(pcVar2,(undefined4)uStack_c), pcVar2 == (code *)0x0)) {
      fVar4 = (float10)*(double *)&this[1].MomentumWheels.CachedAxisCount;
    }
    else {
      fVar4 = (float10)(*pcVar2)(iVar1);
    }
    uStack_c = (double)fVar4;
    dVar5 = util__GetCirclePackingInACircleRadius_double((this->MomentumWheels)._pad_0x0_0);
    uStack_c = dVar5 * uStack_c;
    dVar5 = this->InnerRadius_m * this->InnerRadius_m - uStack_c * uStack_c;
    dStack_14 = 0.0;
    if (0.0 <= dVar5) {
      dStack_14 = dVar5;
    }
    pMVar3 = util__Sqrt(&MStack_24,&dStack_14);
    if (pMVar3->IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    return pMVar3->Data;
  }
  return 0.0;
}

//==== 005f3900 GetStatuses_005f3900 ====

/* public: virtual class DesignStatusBuffer  ReactionWheelSubModule__GetStatuses(class
   DataParser *)const  */

DesignStatusBuffer * 
ReactionWheelSubModule__GetStatuses
          (ReactionWheelSubModule *this,DesignStatusBuffer *__return_storage_ptr__,
          DataParser *param_1)

{
  undefined8 stack0xffffff84;
  undefined8 stack0xffffff88;
  Str_L_char_G_ SVar1;
  Str_L_char_G_ SVar2;
  Str_L_char_G_ *pSVar3;
  Str_L_char_G_ *pSVar4;
  double dVar5;
  double dVar6;
  char *pcVar7;
  char *in_stack_ffffff88;
  Str_L_char_G_ *pSVar8;
  int in_stack_ffffff8c;
  int in_stack_ffffff90;
  Str_L_char_G_ *pSVar9;
  ModulePlacer *pMVar10;
  Str_L_char_G_ local_5c;
  Str_L_char_G_ local_50;
  Str_L_char_G_ local_44;
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  double local_14;
  double local_c;
  
  __return_storage_ptr__->DataManager = (DataParser *)0x0;
  (__return_storage_ptr__->Messages)._pad_0x0_0 = 0;
  (__return_storage_ptr__->Messages).Data = (DesignStatusMessage *)0x0;
  (__return_storage_ptr__->Messages).Size = 0;
  (undefined8)((__return_storage_ptr__->Messages).Capacity = 0);
  DesignStatusBuffer__DesignStatusBuffer(__return_storage_ptr__,param_1);
  util__Str_char___Str_char(&local_5c,"Composition->GetYieldStrength_Pa()");
  util__Str_char___Str_char(&local_38,"GetWheelStress_Pa()");
  util__Str_char___Str_char(&local_2c,"ReactionWheelWheelStress");
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  local_20.Length = 0;
  local_c = Material__GetPoissonsRatio(this->Composition);
  dVar5 = (this->RotationalSpeed_RPM / 60.0) * 6.283185307179586;
  local_14 = (((1.0 - local_c) / (local_c + 3.0)) * 0.0 +
             this->CachedRadius_m * this->CachedRadius_m) *
             dVar5 * dVar5 * this->Composition->Density_kg__m3 * (local_c + 3.0) * 0.25;
  dVar6 = Material__GetPoissonsRatio(this->Composition);
  pMVar10 = (ModulePlacer *)0x0;
  dVar5 = (this->RotationalSpeed_RPM / 60.0) * 6.283185307179586;
  pSVar9 = &local_20;
  local_c = (((1.0 - dVar6) / (dVar6 + 3.0)) * 0.0 + this->CachedRadius_m * this->CachedRadius_m) *
            dVar5 * dVar5 * this->Composition->Density_kg__m3 * (dVar6 + 3.0) * 0.25;
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff88,&local_5c);
  dVar5 = Material__GetYieldStrength_Pa(this->Composition);
  pcVar7 = (char *)((ulonglong)dVar5 >> 0x20);
  SVar2.Capacity = in_stack_ffffff90;
  SVar2.Data = (char *)in_stack_ffffff8c;
  SVar2.Length = (int)pSVar9;
  pSVar3 = Print(&local_50,(double)CONCAT44(in_stack_ffffff88,pcVar7),SVar2);
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff84,&local_38);
  SVar1.Capacity = in_stack_ffffff8c;
  SVar1.Data = in_stack_ffffff88;
  SVar1.Length = (int)pSVar3;
  pSVar4 = Print(&local_44,(double)CONCAT44(pcVar7,(int)((ulonglong)local_14 >> 0x20)),SVar1);
  pSVar8 = &local_2c;
  local_14 = Material__GetYieldStrength_Pa(this->Composition);
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,local_14 < local_c,pSVar8,pSVar4,pSVar3,pSVar9,pMVar10);
  if (local_44.Data != (char *)0x0) {
    port_op_delete(local_44.Data);
    local_44.Data = (char *)0x0;
  }
  if (local_50.Data != (char *)0x0) {
    port_op_delete(local_50.Data);
    local_50.Data = (char *)0x0;
  }
  if (local_20.Data != (char *)0x0) {
    port_op_delete(local_20.Data);
    local_20.Data = (char *)0x0;
  }
  if (local_2c.Data != (char *)0x0) {
    port_op_delete(local_2c.Data);
    local_2c.Data = (char *)0x0;
  }
  if (local_38.Data != (char *)0x0) {
    port_op_delete(local_38.Data);
    local_38.Data = (char *)0x0;
  }
  if (local_5c.Data != (char *)0x0) {
    port_op_delete(local_5c.Data);
  }
  return __return_storage_ptr__;
}

//==== 005f3b50 GetStatuses_005f3b50 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual class DesignStatusBuffer  TurretMotorSubModule__GetStatuses(class
   DataParser *)const  */

DesignStatusBuffer * 
TurretMotorSubModule__GetStatuses
          (TurretMotorSubModule *this,DesignStatusBuffer *__return_storage_ptr__,DataParser *param_1
          )

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  Maybe_L_double_G_ *pMVar2;
  Maybe_L_double_G_ local_58;
  Str_L_char_G_ local_48;
  Str_L_char_G_ local_3c;
  Str_L_char_G_ local_30;
  Str_L_char_G_ local_24;
  Maybe_L_double_G_ local_18;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  __return_storage_ptr__->DataManager = (DataParser *)0x0;
  (__return_storage_ptr__->Messages)._pad_0x0_0 = 0;
  (__return_storage_ptr__->Messages).Data = (DesignStatusMessage *)0x0;
  (__return_storage_ptr__->Messages).Size = 0;
  (undefined8)((__return_storage_ptr__->Messages).Capacity = 0);
  DesignStatusBuffer__DesignStatusBuffer(__return_storage_ptr__,param_1);
  util__Str_char___Str_char(&local_48,"TurretMotorTooSmall");
  pMVar2 = (Maybe_L_double_G_ *)(uintptr_t)(GetPermanentMagnetInnerRadius_m(this,&local_58));
  if (pMVar2->IsValidData != false) {
    GetPermanentMagnetInnerRadius_m(this,&local_18);
    if (local_18.IsValidData != false) {
      if (*(double *)(this + 0x28) - local_18.Data < local_18.Data - 0.0003) {
        bVar1 = false;
        goto LAB_005f3bd3;
      }
    }
  }
  bVar1 = true;
LAB_005f3bd3:
  local_3c.Data = (char *)0x0;
  local_3c.Capacity = 0;
  local_3c.Length = 0;
  local_30.Data = (char *)0x0;
  local_30.Capacity = 0;
  local_30.Length = 0;
  local_24.Data = (char *)0x0;
  local_24.Capacity = 0;
  local_24.Length = 0;
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,bVar1,&local_48,&local_24,&local_30,&local_3c,
             (ModulePlacer *)0x0);
  if (local_24.Data != (char *)0x0) {
    port_op_delete(local_24.Data);
    local_24.Data = (char *)0x0;
  }
  if (local_30.Data != (char *)0x0) {
    port_op_delete(local_30.Data);
    local_30.Data = (char *)0x0;
  }
  if (local_3c.Data != (char *)0x0) {
    port_op_delete(local_3c.Data);
    local_3c.Data = (char *)0x0;
  }
  if (local_48.Data != (char *)0x0) {
    port_op_delete(local_48.Data);
  }
  return __return_storage_ptr__;
}

//==== 005f3ca0 GetTruncationHalfApothem_m ====


/* public: double __thiscall TurretSubModule__GetTruncationHalfApothem_m(void)const  */

double __thiscall TurretSubModule__GetTruncationHalfApothem_m(TurretSubModule *this)

{
  Maybe_L_double_G_ *pMVar1;
  double dVar2;
  Maybe_L_double_G_ MStack_24;
  double dStack_14;
  double dStack_c;
  
  dStack_c = this->ArmorThickness_m + this->InnerRadius_m;
  dVar2 = GetObjectOffsetFromTurret_m(this);
  dStack_14 = dStack_c * dStack_c - dVar2 * dVar2;
  pMVar1 = util__Sqrt(&MStack_24,&dStack_14);
  if (pMVar1->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return pMVar1->Data;
}





//==== 005f3d20 GetWheelRadius_m ====

/* public: double __thiscall TurretSubModule__GetWheelRadius_m(void)const  */

double __thiscall TurretSubModule__GetWheelRadius_m(TurretSubModule *this)

{
  int iVar1;
  code *pcVar2;
  Maybe_L_double_G_ *pMVar3;
  float10 fVar4;
  double dVar5;
  Maybe_L_double_G_ local_24;
  double local_14;
  undefined8 local_c;
  
  iVar1 = *(int *)&this[1].MomentumWheels.RotationalSpeed_RPM;
  if ((iVar1 == 0) ||
     (pcVar2 = *(code **)((int)&this[1].MomentumWheels.RotationalSpeed_RPM + 4),
     local_c = (double)CONCAT44(pcVar2,(undefined4)local_c), pcVar2 == (code *)0x0)) {
    fVar4 = (float10)*(double *)&this[1].MomentumWheels.CachedAxisCount;
  }
  else {
    fVar4 = (float10)(*pcVar2)(iVar1);
  }
  local_c = (double)fVar4;
  local_14 = util__GetCirclePackingInACircleRadius_double((this->MomentumWheels)._pad_0x0_0);
  local_14 = local_14 * local_c;
  local_c = 2.0;
  pMVar3 = util__Sqrt(&local_24,(double *)&local_c);
  if (pMVar3->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if (((this->InnerRadius_m + this->InnerRadius_m) / pMVar3->Data) * 0.25 < local_14) {
    iVar1 = *(int *)&this[1].MomentumWheels.RotationalSpeed_RPM;
    if ((iVar1 == 0) ||
       (pcVar2 = *(code **)((int)&this[1].MomentumWheels.RotationalSpeed_RPM + 4),
       local_c = (double)CONCAT44(pcVar2,(undefined4)local_c), pcVar2 == (code *)0x0)) {
      local_14 = *(double *)&this[1].MomentumWheels.CachedAxisCount;
      fVar4 = (float10)local_14;
    }
    else {
      fVar4 = (float10)(*pcVar2)(iVar1);
    }
    local_c = (double)fVar4;
    dVar5 = util__GetCirclePackingInACircleRadius_double((this->MomentumWheels)._pad_0x0_0);
    return dVar5 * local_c;
  }
  local_14 = 2.0;
  pMVar3 = util__Sqrt(&local_24,&local_14);
  if (pMVar3->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return ((this->InnerRadius_m + this->InnerRadius_m) / pMVar3->Data) * 0.25;
}

//==== 005f4040 PassThroughCachedData_005f4040 ====

/* public: void  TurretSubModule__PassThroughCachedData(struct
   util__Attribute_L_double_G_,struct util__Attribute_L_double_G_,struct util__Attribute_L_double_G_) */

void 
TurretSubModule__PassThroughCachedData
          (TurretSubModule *this,Attribute_L_double_G_ param_1,Attribute_L_double_G_ param_2,
          Attribute_L_double_G_ param_3)

{
  undefined8 stack0xffffffdc;
  char cVar1;
  code *pcVar2;
  Vec2_L_double_G_ *pVVar3;
  Maybe_L_double_G_ *pMVar4;
  int iVar5;
  float10 fVar6;
  double dVar7;
  double dVar8;
  Maybe_L_double_G_ local_74;
  Maybe_L_double_G_ local_64;
  Vec2_L_double_G_ local_54;
  undefined1 local_44 [16];
  double local_34;
  undefined1 local_2c [12];
  Maybe_L_double_G_ *pMStack_20;
  double local_1c;
  double local_14;
  double local_c;
  
  cVar1 = *(char *)&this[1].MomentumWheels.Composition;
  *(void **)&this[1].MomentumWheels.RotationalSpeed_RPM = param_1.Getter.Callee;
  *(_func___cdecl_double_void_ptr **)((int)&this[1].MomentumWheels.RotationalSpeed_RPM + 4) =
       param_1.Getter.CallbackFunction;
  this[1].MomentumWheels.CachedAxisCount = param_1.Value;
  *(undefined4 *)((char *)&this[1].MomentumWheels + 0x24) = (*(uint32_t *)((char *)&(param_1.Value) + 4));
  *(void **)&this[1].MomentumWheels.CachedRadius_m = param_2.Getter.Callee;
  *(_func___cdecl_double_void_ptr **)((int)&this[1].MomentumWheels.CachedRadius_m + 4) =
       param_2.Getter.CallbackFunction;
  *(undefined4 *)&this[1].MomentumWheels.CachedHeight_m = param_2.Value;
  *(undefined4 *)((int)&this[1].MomentumWheels.CachedHeight_m + 4) = (*(uint32_t *)((char *)&(param_2.Value) + 4));
  this[1].MomentumWheels.CachedWheelCount = (int)param_3.Getter.Callee;
  (*(void **)((char *)&(this[1].MomentumWheels) + 0x3c)) =
       param_3.Getter.CallbackFunction;
  *(undefined4 *)&this[1].CachedObjectRadius_m = param_3.Value;
  *(undefined4 *)((int)&this[1].CachedObjectRadius_m + 4) = (*(uint32_t *)((char *)&(param_3.Value) + 4));
  if (cVar1 != '\0') {
    dVar7 = this->InnerRadius_m;
    dVar8 = this->ArmorThickness_m + dVar7;
    local_1c = Mechanics__ThickSphericalShellMomentOfInertia_kg_m2
                         (dVar7,dVar8,
                          (dVar8 * dVar8 * dVar8 * 4.1887902047863905 -
                          dVar7 * dVar7 * dVar7 * 4.1887902047863905) *
                          this->ArmorComposition->Density_kg__m3);
    if (*(int *)&this[1].MomentumWheels.CachedRadius_m == 0) {
LAB_005f4106:
      local_14 = this[1].MomentumWheels.CachedHeight_m;
    }
    else {
      pcVar2 = *(code **)((int)&this[1].MomentumWheels.CachedRadius_m + 4);
      pMStack_20 = (Maybe_L_double_G_ *)pcVar2;
      if (pcVar2 == (code *)0x0) goto LAB_005f4106;
      fVar6 = (float10)(*pcVar2)();
      local_c = (double)fVar6;
      local_14 = local_c;
    }
    if (this[1].MomentumWheels.CachedWheelCount == 0) {
LAB_005f413b:
      (*(uint64_t*)((char*)&(local_44)+8)) = this[1].CachedObjectRadius_m;
    }
    else {
      pcVar2 = (*(code *)((char *)&(this[1].MomentumWheels) + 0x3c));
      pMStack_20 = (Maybe_L_double_G_ *)pcVar2;
      if (pcVar2 == (code *)0x0) goto LAB_005f413b;
      fVar6 = (float10)(*pcVar2)();
      local_c = (double)fVar6;
      (*(uint64_t*)((char*)&(local_44)+8)) = local_c;
    }
    iVar5 = 0;
    local_34 = 0.0;
    if (0 < (this->MomentumWheels)._pad_0x0_0) {
      do {
        if (*(int *)&this[1].MomentumWheels.RotationalSpeed_RPM == 0) {
LAB_005f4188:
          unique0x0000a400 = *(double *)&this[1].MomentumWheels.CachedAxisCount;
        }
        else {
          pcVar2 = *(code **)((int)&this[1].MomentumWheels.RotationalSpeed_RPM + 4);
          pMStack_20 = (Maybe_L_double_G_ *)pcVar2;
          if (pcVar2 == (code *)0x0) goto LAB_005f4188;
          fVar6 = (float10)(*pcVar2)();
          local_c = (double)fVar6;
          unique0x10000e01 = local_c;
        }
        local_c = GetObjectOffsetFromTurret_m(this);
        pVVar3 = util__GetCirclePackingInACircleOffset_double
                           (&local_54,(this->MomentumWheels)._pad_0x0_0,iVar5);
        dVar7 = pVVar3->X * stack0xffffffdc + 0.0;
        dVar8 = pVVar3->Y * stack0xffffffdc + 0.0;
        local_c = dVar7 * dVar7 + dVar8 * dVar8 + (local_c + 0.0) * (local_c + 0.0);
        pMVar4 = util__Sqrt(&local_64,&local_c);
        pMStack_20 = pMVar4;
        if (pMVar4->IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
          pMVar4 = pMStack_20;
        }
        iVar5 = iVar5 + 1;
        local_34 = pMVar4->Data * pMVar4->Data * (double)(*(uint64_t*)((char*)&(local_44)+8)) + local_14 + local_34;
      } while (iVar5 < (this->MomentumWheels)._pad_0x0_0);
    }
    local_14 = 2.0;
    pMVar4 = util__Sqrt((Maybe_L_double_G_ *)local_2c,&local_14);
    if (pMVar4->IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    (*(uint64_t*)((char*)&(local_44)+8)) = ((this->InnerRadius_m + this->InnerRadius_m) / pMVar4->Data) * 0.5;
    dVar7 = GetWheelRadius_m(this);
    dVar7 = (double)(*(uint64_t*)((char*)&(local_44)+8)) - dVar7;
    (*(uint64_t*)((char*)&(local_44)+8)) = 0.0;
    if (0.0 <= dVar7) {
      (*(uint64_t*)((char*)&(local_44)+8)) = dVar7;
    }
    if (*(char *)&this[1].MomentumWheels.Composition == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    local_c = GetWheelRadius_m(this);
    *(double *)&this[1].Extruded = local_c;
    this[1].ArmorThickness_m = (double)(*(uint64_t*)((char*)&(local_44)+8));
    *(undefined4 *)&this[1].InnerRadius_m = 2;
    this[1].MomentumWheels._pad_0x8_2 = 2;
    *(double *)&this[1].MomentumWheels = local_34 + local_1c;
  }
  if (*(char *)&this->CachedObjectEndRadialMomentOfInertia_kg_m2 == '\0') {
    return;
  }
  dVar7 = this->InnerRadius_m;
  dVar8 = this->ArmorThickness_m + dVar7;
  local_54.Y = Mechanics__ThickSphericalShellMomentOfInertia_kg_m2
                         (dVar7,dVar8,
                          (dVar8 * dVar8 * dVar8 * 4.1887902047863905 -
                          dVar7 * dVar7 * dVar7 * 4.1887902047863905) *
                          this->ArmorComposition->Density_kg__m3);
  if (*(int *)&this[1].MomentumWheels.CachedRadius_m == 0) {
LAB_005f43bd:
    local_c = this[1].MomentumWheels.CachedHeight_m;
  }
  else {
    pcVar2 = *(code **)((int)&this[1].MomentumWheels.CachedRadius_m + 4);
    pMStack_20 = (Maybe_L_double_G_ *)pcVar2;
    if (pcVar2 == (code *)0x0) goto LAB_005f43bd;
    fVar6 = (float10)(*pcVar2)();
    *(uint64_t *)&local_1c = (double)fVar6;
    local_c = local_1c;
  }
  if (this[1].MomentumWheels.CachedWheelCount != 0) {
    pcVar2 = (*(code *)((char *)&(this[1].MomentumWheels) + 0x3c));
    pMStack_20 = (Maybe_L_double_G_ *)pcVar2;
    if (pcVar2 != (code *)0x0) {
      fVar6 = (float10)(*pcVar2)();
      *(uint64_t *)&local_1c = (double)fVar6;
      (*(uint64_t*)((char*)&(local_44)+8)) = local_1c;
      goto LAB_005f43fa;
    }
  }
  (*(uint64_t*)((char*)&(local_44)+8)) = this[1].CachedObjectRadius_m;
LAB_005f43fa:
  iVar5 = 0;
  local_34 = 0.0;
  if (0 < (this->MomentumWheels)._pad_0x0_0) {
    do {
      if (*(int *)&this[1].MomentumWheels.RotationalSpeed_RPM == 0) {
LAB_005f443a:
        local_14 = *(double *)&this[1].MomentumWheels.CachedAxisCount;
      }
      else {
        pcVar2 = *(code **)((int)&this[1].MomentumWheels.RotationalSpeed_RPM + 4);
        pMStack_20 = (Maybe_L_double_G_ *)pcVar2;
        if (pcVar2 == (code *)0x0) goto LAB_005f443a;
        fVar6 = (float10)(*pcVar2)();
        *(uint64_t *)&local_1c = (double)fVar6;
        local_14 = local_1c;
      }
      *(uint32_t *)&local_1c = GetObjectOffsetFromTurret_m(this);
      pVVar3 = util__GetCirclePackingInACircleOffset_double
                         ((Vec2_L_double_G_ *)&local_64,(this->MomentumWheels)._pad_0x0_0,iVar5);
      dVar7 = pVVar3->X * local_14 + 0.0;
      dVar8 = pVVar3->Y * local_14 + 0.0;
      *(uint32_t *)&local_1c = dVar7 * dVar7 + dVar8 * dVar8 + (local_1c + 0.0) * (local_1c + 0.0);
      pMVar4 = util__Sqrt(&local_74,&local_1c);
      pMStack_20 = pMVar4;
      if (pMVar4->IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
        pMVar4 = pMStack_20;
      }
      iVar5 = iVar5 + 1;
      local_34 = pMVar4->Data * pMVar4->Data * (double)(*(uint64_t*)((char*)&(local_44)+8)) + local_c + local_34;
    } while (iVar5 < (this->MomentumWheels)._pad_0x0_0);
  }
  local_c = 2.0;
  pMVar4 = util__Sqrt((Maybe_L_double_G_ *)local_44,&local_c);
  if (pMVar4->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_14 = ((this->InnerRadius_m + this->InnerRadius_m) / pMVar4->Data) * 0.5;
  dVar7 = GetWheelRadius_m(this);
  dVar7 = local_14 - dVar7;
  local_14 = 0.0;
  if (0.0 <= dVar7) {
    local_14 = dVar7;
  }
  if (*(char *)&this->CachedObjectEndRadialMomentOfInertia_kg_m2 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar7 = GetWheelRadius_m(this);
  (this->MomentumWheels).CachedHeight_m = dVar7;
  *(double *)&(this->MomentumWheels).CachedWheelCount = local_14;
  *(undefined4 *)&(this->MomentumWheels).CachedRadius_m = 2;
  this->CachedObjectRadius_m = local_34 + local_54.Y;
  return;
}

//==== 005f4a50 RenderExtruderModel ====


/* public: void  TurretSubModule__RenderExtruderModel(struct util__Vec3_L_double_G_,struct
   util__Vec3_L_double_G_,bool,bool)const  */

void 
TurretSubModule__RenderExtruderModel
          (TurretSubModule *this,Vec4_L_double_G_ param_1,Vec4_L_double_G_ param_2,bool param_3,bool param_4
          )

{
  undefined8 stack0xfffffffc;
  ReferenceController *pRVar1;
  Quaternion_L_double_G_ QVar2;
  Vec4_L_double_G_ VVar3;
  bool bVar4;
  double dVar5;
  Vec3_L_double_G_ VStack_44;
  undefined1 auStack_2c [12];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  TransformStack TStack_9;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((*(int *)&this[1].CachedObjectEndRadialMomentOfInertia_kg_m2 != 0) &&
     (pRVar1 = *(ReferenceController **)
                ((int)&this[1].CachedObjectEndRadialMomentOfInertia_kg_m2 + 4),
     pRVar1 != (ReferenceController *)0x0)) {
    bVar4 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (bVar4) {
      Graphics__TransformStack__TransformStack(&TStack_9,Style__Default);
      dVar5 = param_2.X * param_1.X + param_1.Y * param_2.Y + param_2.Z * param_1.Z;
      VStack_44.X = param_2.X - dVar5 * param_1.X;
      VStack_44.Y = param_2.Y - dVar5 * param_1.Y;
      VStack_44.Z = param_2.Z - dVar5 * param_1.Z;
      util__Vec3_double___SafeNormalized(&VStack_44,(Vec3_L_double_G_ *)(auStack_2c + 8));
      VVar3.Y = uStack_20;
      VVar3.X = (*(uint32_t*)((char*)&(auStack_2c)+8));
      VVar3.Y = uStack_1c;
      VVar3.Z = uStack_18;
      VVar3.Z = uStack_14;
      VVar3.W = uStack_10;
      util__Quaternion_double___Quaternion_double
                ((Quaternion_L_double_G_ *)auStack_2c,(*(Vec3_L_double_G_ *)cde_zextb(0x3ff0000000000000,24)),VVar3);
      QVar2.Y = (*(uint32_t*)((char*)&(auStack_2c)+4));
      QVar2.X = (*(uint32_t*)&(auStack_2c));
      QVar2.Y = (*(uint32_t*)((char*)&(auStack_2c)+8));
      QVar2.Z = uStack_20;
      QVar2.Z = uStack_1c;
      QVar2.W = uStack_18;
      QVar2.W = uStack_14;
      (*(uint32_t *)((char *)&(QVar2.W) + 4)) = uStack_10;
      Graphics__Rotate(QVar2);
      pRVar1 = *(ReferenceController **)
                ((int)&this[1].CachedObjectEndRadialMomentOfInertia_kg_m2 + 4);
      if (param_4) {
        if (pRVar1 != (ReferenceController *)0x0) {
          bVar4 = util__ReferenceController__IsDataStillValid(pRVar1);
          if (!bVar4) {
            *(undefined4 *)&this[1].CachedObjectEndRadialMomentOfInertia_kg_m2 = 0;
          }
        }
        GameModel__RenderSimple(*(GameModel **)&this[1].CachedObjectEndRadialMomentOfInertia_kg_m2);
      }
      else {
        if (pRVar1 != (ReferenceController *)0x0) {
          bVar4 = util__ReferenceController__IsDataStillValid(pRVar1);
          if (!bVar4) {
            *(undefined4 *)&this[1].CachedObjectEndRadialMomentOfInertia_kg_m2 = 0;
          }
        }
        GameModel__Render(*(GameModel **)&this[1].CachedObjectEndRadialMomentOfInertia_kg_m2,0.0,0.0
                          ,param_3);
      }
      Graphics__TransformStack___TransformStack(&TStack_9);
    }
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 005f4bd0 StaticFactory_005f4bd0 ====

/* public: static class util__Reflectable * __cdecl
   ExtrudableSoloTurretSubModule__ReflectionInfoStruct_struct_ExtrudableSoloTurretSubModule___StaticFactory(void) */

Reflectable * __cdecl
ExtrudableSoloTurretSubModule__ReflectionInfoStruct_struct_ExtrudableSoloTurretSubModule___StaticFactory__o2
          (void)

{
  TurretSubModule *this;
  
  this = (TurretSubModule *)(uintptr_t)(port_op_new(0x100));
  if (this != (TurretSubModule *)0x0) {
    TurretSubModule__TurretSubModule(this);
    this->_pad_0x0_0 = (int)&vftable_239;
    return (Reflectable *)this;
  }
  return (Reflectable *)0x0;
}

//==== 005f4c00 StaticFactory_005f4c00 ====

/* public: static class util__Reflectable * __cdecl
   ExtrudableTurretSubModule__ReflectionInfoStruct_struct_ExtrudableTurretSubModule___StaticFactory(void) */

Reflectable * __cdecl
ExtrudableTurretSubModule__ReflectionInfoStruct_struct_ExtrudableTurretSubModule___StaticFactory__o2(void)

{
  TurretSubModule *this;
  
  this = (TurretSubModule *)(uintptr_t)(port_op_new(0x100));
  if (this != (TurretSubModule *)0x0) {
    TurretSubModule__TurretSubModule(this);
    this->_pad_0x0_0 = (int)&vftable_237;
    return (Reflectable *)this;
  }
  return (Reflectable *)0x0;
}

//==== 005f4c30 StaticGetMemberByIndex_005f4c30 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   ExtrudableSoloTurretSubModule__ReflectionInfoStruct_struct_ExtrudableSoloTurretSubModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
ExtrudableSoloTurretSubModule__ReflectionInfoStruct_struct_ExtrudableSoloTurretSubModule___StaticGetMemberByIndex(ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_1c953302__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_1c953302__thread_safe_static_guard_0__);
    if ( cde_l2_1c953302__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_f9105d74_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096eac4 = 0;
      _DAT_0096eac8 = 0;
      _DAT_0096eacc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ead0,"Unused");
      _DAT_0096eadc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096eae0,"InnerRadius_m");
      _DAT_0096eaec = 4;
      _DAT_0096eaf0 = 0x10;
      _DAT_0096eaf4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096eaf8,"double");
      _DAT_0096eb04 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096eb08,"Extruded");
      _DAT_0096eb14 = 1;
      _DAT_0096eb18 = 0x18;
      _DAT_0096eb1c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096eb20,"bool");
      _DAT_0096eb2c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096eb30,"ArmorComposition");
      _DAT_0096eb3c = 8;
      _DAT_0096eb40 = 0x1c;
      _DAT_0096eb44 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096eb48,"Material");
      _DAT_0096eb54 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096eb58,"ArmorThickness_m");
      _DAT_0096eb64 = 4;
      _DAT_0096eb68 = 0x20;
      _DAT_0096eb6c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096eb70,"double");
      _DAT_0096eb7c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096eb80,"ElectricActuators");
      _DAT_0096eb8c = 10;
      _DAT_0096eb90 = 0x30;
      _DAT_0096eb94 = 0x40;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096eb98,"TurretMotorSubModule");
      _DAT_0096eba4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096eba8,"MomentumWheels");
      _DAT_0096ebb4 = 10;
      _DAT_0096ebb8 = 0x78;
      _DAT_0096ebbc = 0x48;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ebc0,"ReactionWheelSubModule");
      _DAT_0096ebcc = 0x100;
      atexit( private__static_struct_util__ClassMember_const___cdecl_ExtrudableSoloTurretSubModule__ReflectionInfoStruct_struct_ExtrudableSoloTurretSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_1c953302__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_f9105d74_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_0096eac4 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_0096eac8 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_0096eacc + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_0096ead0 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0096eadc)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0096eadd)[iVar1];
  return __return_storage_ptr__;
}





//==== 005f4ec0 StaticGetMemberByIndex_005f4ec0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   ExtrudableTurretSubModule__ReflectionInfoStruct_struct_ExtrudableTurretSubModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
ExtrudableTurretSubModule__ReflectionInfoStruct_struct_ExtrudableTurretSubModule___StaticGetMemberByIndex(ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_25914300__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_25914300__thread_safe_static_guard_0__);
    if ( cde_l2_25914300__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_a4eb02a0_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096ed2c = 0;
      _DAT_0096ed30 = 0;
      _DAT_0096ed34 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ed38,"Unused");
      _DAT_0096ed44 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ed48,"InnerRadius_m");
      _DAT_0096ed54 = 4;
      _DAT_0096ed58 = 0x10;
      _DAT_0096ed5c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ed60,"double");
      _DAT_0096ed6c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ed70,"Extruded");
      _DAT_0096ed7c = 1;
      _DAT_0096ed80 = 0x18;
      _DAT_0096ed84 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ed88,"bool");
      _DAT_0096ed94 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ed98,"ArmorComposition");
      _DAT_0096eda4 = 8;
      _DAT_0096eda8 = 0x1c;
      _DAT_0096edac = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096edb0,"Material");
      _DAT_0096edbc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096edc0,"ArmorThickness_m");
      _DAT_0096edcc = 4;
      _DAT_0096edd0 = 0x20;
      _DAT_0096edd4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096edd8,"double");
      _DAT_0096ede4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ede8,"AttachmentCount");
      _DAT_0096edf4 = 2;
      _DAT_0096edf8 = 0x28;
      _DAT_0096edfc = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ee00,"int");
      _DAT_0096ee0c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ee10,"ElectricActuators");
      _DAT_0096ee1c = 10;
      _DAT_0096ee20 = 0x30;
      _DAT_0096ee24 = 0x40;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ee28,"TurretMotorSubModule");
      _DAT_0096ee34 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ee38,"MomentumWheels");
      _DAT_0096ee44 = 10;
      _DAT_0096ee48 = 0x78;
      _DAT_0096ee4c = 0x48;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ee50,"ReactionWheelSubModule");
      _DAT_0096ee5c = 0x100;
      atexit( private__static_struct_util__ClassMember_const___cdecl_ExtrudableTurretSubModule__ReflectionInfoStruct_struct_ExtrudableTurretSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_25914300__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_a4eb02a0_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_0096ed2c + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_0096ed30 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_0096ed34 + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_0096ed38 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0096ed44)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0096ed45)[iVar1];
  return __return_storage_ptr__;
}





//==== 005f5190 StaticGetMemberCount_005f5190 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl ExtrudableSoloTurretSubModule__ReflectionInfoStruct_struct_ExtrudableSoloTurretSubModule___StaticGetMemberCount(void) */

int __cdecl
ExtrudableSoloTurretSubModule__ReflectionInfoStruct_struct_ExtrudableSoloTurretSubModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_419d4c78__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_419d4c78__thread_safe_static_guard_0__);
    if ( cde_l2_419d4c78__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_242e6ef2_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096e9a4 = 0;
      _DAT_0096e9a8 = 0;
      _DAT_0096e9ac = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e9b0,"Unused");
      _DAT_0096e9bc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e9c0,"InnerRadius_m");
      _DAT_0096e9cc = 4;
      _DAT_0096e9d0 = 0x10;
      _DAT_0096e9d4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e9d8,"double");
      _DAT_0096e9e4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e9e8,"Extruded");
      _DAT_0096e9f4 = 1;
      _DAT_0096e9f8 = 0x18;
      _DAT_0096e9fc = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ea00,"bool");
      _DAT_0096ea0c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ea10,"ArmorComposition");
      _DAT_0096ea1c = 8;
      _DAT_0096ea20 = 0x1c;
      _DAT_0096ea24 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ea28,"Material");
      _DAT_0096ea34 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ea38,"ArmorThickness_m");
      _DAT_0096ea44 = 4;
      _DAT_0096ea48 = 0x20;
      _DAT_0096ea4c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ea50,"double");
      _DAT_0096ea5c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ea60,"ElectricActuators");
      _DAT_0096ea6c = 10;
      _DAT_0096ea70 = 0x30;
      _DAT_0096ea74 = 0x40;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ea78,"TurretMotorSubModule");
      _DAT_0096ea84 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ea88,"MomentumWheels");
      _DAT_0096ea94 = 10;
      _DAT_0096ea98 = 0x78;
      _DAT_0096ea9c = 0x48;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096eaa0,"ReactionWheelSubModule");
      _DAT_0096eaac = 0x100;
      atexit( private__static_int_const___cdecl_ExtrudableSoloTurretSubModule__ReflectionInfoStruct_struct_ExtrudableSoloTurretSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_419d4c78__thread_safe_static_guard_0__);
    }
  }
  return 7;
}





//==== 005f53d0 StaticGetMemberCount_005f53d0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl ExtrudableTurretSubModule__ReflectionInfoStruct_struct_ExtrudableTurretSubModule___StaticGetMemberCount(void) */

int __cdecl
ExtrudableTurretSubModule__ReflectionInfoStruct_struct_ExtrudableTurretSubModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_016ec375__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_016ec375__thread_safe_static_guard_0__);
    if ( cde_l2_016ec375__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_199e5f58_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096ebe4 = 0;
      _DAT_0096ebe8 = 0;
      _DAT_0096ebec = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ebf0,"Unused");
      _DAT_0096ebfc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ec00,"InnerRadius_m");
      _DAT_0096ec0c = 4;
      _DAT_0096ec10 = 0x10;
      _DAT_0096ec14 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ec18,"double");
      _DAT_0096ec24 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ec28,"Extruded");
      _DAT_0096ec34 = 1;
      _DAT_0096ec38 = 0x18;
      _DAT_0096ec3c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ec40,"bool");
      _DAT_0096ec4c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ec50,"ArmorComposition");
      _DAT_0096ec5c = 8;
      _DAT_0096ec60 = 0x1c;
      _DAT_0096ec64 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ec68,"Material");
      _DAT_0096ec74 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ec78,"ArmorThickness_m");
      _DAT_0096ec84 = 4;
      _DAT_0096ec88 = 0x20;
      _DAT_0096ec8c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ec90,"double");
      _DAT_0096ec9c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096eca0,"AttachmentCount");
      _DAT_0096ecac = 2;
      _DAT_0096ecb0 = 0x28;
      _DAT_0096ecb4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ecb8,"int");
      _DAT_0096ecc4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ecc8,"ElectricActuators");
      _DAT_0096ecd4 = 10;
      _DAT_0096ecd8 = 0x30;
      _DAT_0096ecdc = 0x40;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ece0,"TurretMotorSubModule");
      _DAT_0096ecec = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ecf0,"MomentumWheels");
      _DAT_0096ecfc = 10;
      _DAT_0096ed00 = 0x78;
      _DAT_0096ed04 = 0x48;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ed08,"ReactionWheelSubModule");
      _DAT_0096ed14 = 0x100;
      atexit( private__static_int_const___cdecl_ExtrudableTurretSubModule__ReflectionInfoStruct_struct_ExtrudableTurretSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_016ec375__thread_safe_static_guard_0__);
    }
  }
  return 8;
}





//==== 005f5650 StaticGetReflectionInfo_005f5650 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct ExtrudableSoloTurretSubModule__ReflectionInfoStruct_L_struct_ExtrudableSoloTurretSubModule_G_ * __cdecl
   ExtrudableSoloTurretSubModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_struct_ExtrudableSoloTurretSubModule_G_ * __cdecl
ExtrudableSoloTurretSubModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_bdbde40f__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_bdbde40f__thread_safe_static_guard_0__);
    if ( cde_l2_bdbde40f__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_d67e16e9_ReflectionInfo) = &vftable_240;
      _Init_thread_footer(& cde_l2_bdbde40f__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_d67e16e9_ReflectionInfo;
}





//==== 005f56b0 StaticGetReflectionInfo_005f56b0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct ExtrudableTurretSubModule__ReflectionInfoStruct_L_struct_ExtrudableTurretSubModule_G_ * __cdecl ExtrudableTurretSubModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_struct_ExtrudableTurretSubModule_G_ * __cdecl
ExtrudableTurretSubModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_09a977e1__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_09a977e1__thread_safe_static_guard_0__);
    if ( cde_l2_09a977e1__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_e79ab6f2_ReflectionInfo) = &vftable_238;
      _Init_thread_footer(& cde_l2_09a977e1__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_e79ab6f2_ReflectionInfo;
}





//==== 005f5710 GetReflectionInfo_005f5710 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   ProximityDetonator__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall ProximityDetonator__GetReflectionInfo(ProximityDetonator *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_0fdf0f1c__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_0fdf0f1c__thread_safe_static_guard_0__);
    if ( cde_l2_0fdf0f1c__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_7e50d86b_ReflectionInfo) = &vftable_242;
      _Init_thread_footer(& cde_l2_0fdf0f1c__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_7e50d86b_ReflectionInfo;
}





//==== 005f5770 GetTypeName_005f5770 ====


/* public: virtual class util__Str_L_char_G_  ProximityDetonator__ReflectionInfoStruct_class_ProximityDetonator___GetTypeName(void)const  */

Str_L_char_G_ * 
ProximityDetonator__ReflectionInfoStruct_class_ProximityDetonator___GetTypeName
          (ReflectionInfoStruct_L_class_ProximityDetonator_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"ProximityDetonator");
  return __return_storage_ptr__;
}





//==== 005f5790 GetMembers_005f5790 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   ProximityDetonator__ReflectionInfoStruct_class_ProximityDetonator___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
ProximityDetonator__ReflectionInfoStruct_class_ProximityDetonator___GetMembers__o2
          (ReflectionInfoStruct_L_class_ProximityDetonator_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_aeeaf8bb__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_aeeaf8bb__thread_safe_static_guard_0__),
      cde_l2_aeeaf8bb__thread_safe_static_guard_0__ == -1)) {
     cde_l2_e7a6807c_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_aeeaf8bb__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_e7a6807c_Count);
  iVar3 = 0;
  if (0 <  cde_l2_e7a6807c_Count) {
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
    } while (iVar3 <  cde_l2_e7a6807c_Count);
  }
  return in_stack_00000004;
}





//==== 005f58d0 GetMember_005f58d0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   ProximityDetonator__ReflectionInfoStruct_class_ProximityDetonator___GetMember(class
   util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
ProximityDetonator__ReflectionInfoStruct_class_ProximityDetonator___GetMember__o2
          (ReflectionInfoStruct_L_class_ProximityDetonator_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_2105000b__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_2105000b__thread_safe_static_guard_0__),
      cde_l2_2105000b__thread_safe_static_guard_0__ == -1)) {
     cde_l2_e6e885ac_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_2105000b__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_e6e885ac_Count) {
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
LAB_005f595d:
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
          if (cVar3 == '\0') goto LAB_005f595d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_e6e885ac_Count);
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





//==== 005f5a70 GetFactory_005f5a70 ====


/* public: virtual class util__Reflectable * (__cdecl*
   ProximityDetonator__ReflectionInfoStruct_class_ProximityDetonator___GetFactory(void)const )(void)
    */

_func_Reflectable_ptr * 
__thiscall ProximityDetonator__ReflectionInfoStruct_class_ProximityDetonator___GetFactory__o2
          (ReflectionInfoStruct_L_class_ProximityDetonator_G_ *this)

{
  return StaticFactory;
}





//==== 005f5a80 GetClassID_005f5a80 ====


/* public: virtual unsigned long __thiscall PayloadModule__GetClassID(void)const  */

ulong __thiscall PayloadModule__GetClassID(PayloadModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_fd71e039__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_fd71e039__thread_safe_static_guard_0__);
    if ( cde_l2_fd71e039__thread_safe_static_guard_0__ == -1) {
       cde_l2_a3ea3e16_ID =
           util__GetHash("PayloadModule");
      _Init_thread_footer(& cde_l2_fd71e039__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_a3ea3e16_ID;
}





//==== 005f5ae0 GetGeneratedName_005f5ae0 ====

/* public: virtual class util__Str_L_char_G_ __thiscall ExplosiveModule__GetGeneratedName(void)const  */

Str_L_char_G_ * __thiscall
ExplosiveModule__GetGeneratedName(ExplosiveModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined8 stack0xfffffeb0;
  int *piVar1;
  bool bVar2;
  Str_L_char_G_ SVar3;
  int iVar4;
  LocStr *pLVar5;
  Str_L_char_G_ *__return_storage_ptr___00;
  Str_L_char_G_ *pSVar6;
  Str_L_char_G_ *pSVar7;
  Str_L_char_G_ *this_00;
  Str_L_char_G_ *pSVar8;
  Str_L_char_G_ *pSVar9;
  Str_L_char_G_ *pSVar10;
  char *in_stack_fffffeb0;
  int in_stack_fffffeb4;
  Str_L_char_G_ *__return_storage_ptr___01;
  Str_L_char_G_ *pSVar11;
  void *local_114 [3];
  void *local_108;
  void *local_fc [3];
  void *local_f0;
  void *local_e4 [3];
  void *local_d8;
  void *local_cc [3];
  void *local_c0;
  Str_L_char_G_ local_b4;
  Str_L_char_G_ local_a8;
  Str_L_char_G_ local_9c;
  Str_L_char_G_ local_90;
  Str_L_char_G_ local_84;
  Str_L_char_G_ local_78;
  Str_L_char_G_ local_6c;
  Str_L_char_G_ local_60;
  Str_L_char_G_ local_54;
  Str_L_char_G_ local_48;
  double local_3c;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  Str_L_char_G_ local_10;
  
  local_3c = (this->Detonator).HardRange_km + *(double *)&this->Detonator;
  iVar4 = GetShrapnelCount(this);
  bVar2 = iVar4 < 1;
  if (bVar2) {
    util__Str_char___Str_char(&local_6c,"ShipClass__Payload Category__Explosive");
    local_28.Data = (char *)0x0;
    pLVar5 = (LocStr *)local_fc;
    local_28.Capacity = 0;
    pSVar9 = &local_6c;
    local_28.Length = 0;
    pSVar10 = &local_28;
  }
  else {
    util__Str_char___Str_char(&local_b4,"ShipClass__Payload FlakBomb");
    local_34.Data = (char *)0x0;
    pLVar5 = (LocStr *)local_114;
    local_34.Capacity = 0;
    pSVar9 = &local_b4;
    local_34.Length = 0;
    pSVar10 = &local_34;
  }
  pLVar5 = (LocStr *)util__LocStr__LocStr(pLVar5,pSVar9,pSVar10);
  util__LocStr__operator__o3(pLVar5);
  util__Str_char___Str_char(&local_60,"Space");
  util__Str_char___Str_char(&local_54,"Space");
  util__Str_char___Str_char(&local_48,"TotalMass_kg");
  piVar1 = (int *)(this->Detonator)._pad_0x8_2;
  local_1c.Data = (char *)0x0;
  local_1c.Capacity = 0;
  local_1c.Length = 0;
  local_10.Data = (char *)0x0;
  local_10.Capacity = 0;
  local_10.Length = 0;
  pSVar11 = __return_storage_ptr__;
  pLVar5 = (LocStr *)util__LocStr__LocStr((LocStr *)local_e4,&local_60,&local_1c);
  __return_storage_ptr___00 = util__LocStr__operator__o3(pLVar5);
  pSVar10 = &local_78;
  __return_storage_ptr___01 = &local_a8;
  pSVar6 = (Str_L_char_G_ *)(**(code **)(uintptr_t)(*piVar1 + 0x48))();
  pSVar9 = &local_84;
  iVar4 = 0x5f5c32;
  pLVar5 = (LocStr *)util__LocStr__LocStr((LocStr *)local_cc,&local_54,&local_10);
  pSVar7 = util__LocStr__operator__o3(pLVar5);
  pSVar8 = &local_90;
  GetUnitsOfType((Str_L_char_G_ *)&stack0xfffffeb0,&local_48);
  SVar3.Capacity = iVar4;
  SVar3.Data = (char *)in_stack_fffffeb4;
  SVar3.Length = (int)pSVar8;
  this_00 = Print(&local_9c,(double)CONCAT44(in_stack_fffffeb0,(int)((ulonglong)local_3c >> 0x20)),
                  SVar3);
  pSVar8 = util__Str_char___operator(this_00,pSVar8,pSVar7);
  pSVar9 = util__Str_char___operator(pSVar8,pSVar9,pSVar6);
  pSVar10 = util__Str_char___operator(pSVar9,__return_storage_ptr___01,pSVar10);
  util__Str_char___operator(pSVar10,__return_storage_ptr___00,pSVar11);
  if (local_78.Data != (char *)0x0) {
    port_op_delete(local_78.Data);
    local_78.Data = (char *)0x0;
  }
  if (local_84.Data != (char *)0x0) {
    port_op_delete(local_84.Data);
    local_84.Data = (char *)0x0;
  }
  if (local_90.Data != (char *)0x0) {
    port_op_delete(local_90.Data);
    local_90.Data = (char *)0x0;
  }
  if (local_9c.Data != (char *)0x0) {
    port_op_delete(local_9c.Data);
    local_9c.Data = (char *)0x0;
  }
  if (local_c0 != (void *)0x0) {
    port_op_delete(local_c0);
    local_c0 = (void *)0x0;
  }
  if (local_cc[0] != (void *)0x0) {
    port_op_delete(local_cc[0]);
    local_cc[0] = (void *)0x0;
  }
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
    local_10.Data = (char *)0x0;
  }
  if (local_a8.Data != (char *)0x0) {
    port_op_delete(local_a8.Data);
    local_a8.Data = (char *)0x0;
  }
  if (local_d8 != (void *)0x0) {
    port_op_delete(local_d8);
    local_d8 = (void *)0x0;
  }
  if (local_e4[0] != (void *)0x0) {
    port_op_delete(local_e4[0]);
    local_e4[0] = (void *)0x0;
  }
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
    local_1c.Data = (char *)0x0;
  }
  if (local_48.Data != (char *)0x0) {
    port_op_delete(local_48.Data);
    local_48.Data = (char *)0x0;
  }
  if (local_54.Data != (char *)0x0) {
    port_op_delete(local_54.Data);
    local_54.Data = (char *)0x0;
  }
  if (local_60.Data != (char *)0x0) {
    port_op_delete(local_60.Data);
    local_60.Data = (char *)0x0;
  }
  if (bVar2) {
    if (local_f0 != (void *)0x0) {
      port_op_delete(local_f0);
      local_f0 = (void *)0x0;
    }
    if (local_fc[0] != (void *)0x0) {
      port_op_delete(local_fc[0]);
      local_fc[0] = (void *)0x0;
    }
  }
  if (bVar2) {
    if (local_28.Data != (char *)0x0) {
      port_op_delete(local_28.Data);
      local_28.Data = (char *)0x0;
    }
  }
  if (bVar2) {
    if (local_6c.Data != (char *)0x0) {
      port_op_delete(local_6c.Data);
      local_6c.Data = (char *)0x0;
    }
  }
  if (!bVar2) {
    if (local_108 != (void *)0x0) {
      port_op_delete(local_108);
      local_108 = (void *)0x0;
    }
    if (local_114[0] != (void *)0x0) {
      port_op_delete(local_114[0]);
      local_114[0] = (void *)0x0;
    }
  }
  if (!bVar2) {
    if (local_34.Data != (char *)0x0) {
      port_op_delete(local_34.Data);
      local_34.Data = (char *)0x0;
    }
  }
  if ((local_b4.Data != (char *)0x0) && (!bVar2)) {
    port_op_delete(local_b4.Data);
  }
  return __return_storage_ptr__;
}

//==== 005f5f00 GetShortName_005f5f00 ====

/* public: virtual class util__Str_L_char_G_ __thiscall ExplosiveModule__GetShortName(void)const  */

Str_L_char_G_ * __thiscall
ExplosiveModule__GetShortName(ExplosiveModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  LocStr *pLVar4;
  Str_L_char_G_ *__return_storage_ptr___00;
  Str_L_char_G_ *this_00;
  Str_L_char_G_ *pSVar5;
  Str_L_char_G_ *pSVar6;
  Str_L_char_G_ *pSVar7;
  void *local_b0 [3];
  void *local_a4;
  void *local_98 [3];
  void *local_8c;
  void *local_80 [3];
  void *local_74;
  Str_L_char_G_ local_68;
  Str_L_char_G_ local_5c;
  Str_L_char_G_ local_50;
  undefined4 local_44;
  Str_L_char_G_ local_40;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  Str_L_char_G_ local_10;
  
  *(uint32_t *)&local_44 = 0;
  iVar3 = GetShrapnelCount(this);
  bVar2 = iVar3 < 1;
  if (bVar2) {
    util__Str_char___Str_char(&local_40,"ShipClass__Payload Category__Explosive");
    local_1c.Data = (char *)0x0;
    pLVar4 = (LocStr *)local_98;
    local_1c.Capacity = 0;
    pSVar5 = &local_40;
    local_1c.Length = 0;
    pSVar6 = &local_1c;
  }
  else {
    util__Str_char___Str_char(&local_68,"ShipClass__Payload FlakBomb");
    local_28.Data = (char *)0x0;
    pLVar4 = (LocStr *)local_b0;
    local_28.Capacity = 0;
    pSVar5 = &local_68;
    local_28.Length = 0;
    pSVar6 = &local_28;
  }
  pLVar4 = (LocStr *)util__LocStr__LocStr(pLVar4,pSVar5,pSVar6);
  util__LocStr__operator__o3(pLVar4);
  util__Str_char___Str_char(&local_34,"Space");
  piVar1 = (int *)(this->Detonator)._pad_0x8_2;
  local_10.Data = (char *)0x0;
  local_10.Capacity = 0;
  local_10.Length = 0;
  pSVar7 = __return_storage_ptr__;
  pLVar4 = (LocStr *)util__LocStr__LocStr((LocStr *)local_80,&local_34,&local_10);
  __return_storage_ptr___00 = util__LocStr__operator__o3(pLVar4);
  pSVar5 = &local_50;
  pSVar6 = &local_5c;
  this_00 = (Str_L_char_G_ *)(**(code **)(uintptr_t)(*piVar1 + 0x48))();
  pSVar5 = util__Str_char___operator(this_00,pSVar6,pSVar5);
  util__Str_char___operator(pSVar5,__return_storage_ptr___00,pSVar7);
  if (local_50.Data != (char *)0x0) {
    port_op_delete(local_50.Data);
    local_50.Data = (char *)0x0;
  }
  if (local_5c.Data != (char *)0x0) {
    port_op_delete(local_5c.Data);
    local_5c.Data = (char *)0x0;
  }
  if (local_74 != (void *)0x0) {
    port_op_delete(local_74);
    local_74 = (void *)0x0;
  }
  if (local_80[0] != (void *)0x0) {
    port_op_delete(local_80[0]);
    local_80[0] = (void *)0x0;
  }
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
    local_10.Data = (char *)0x0;
  }
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (bVar2) {
    if (local_8c != (void *)0x0) {
      port_op_delete(local_8c);
      local_8c = (void *)0x0;
    }
    if (local_98[0] != (void *)0x0) {
      port_op_delete(local_98[0]);
      local_98[0] = (void *)0x0;
    }
  }
  if (bVar2) {
    if (local_1c.Data != (char *)0x0) {
      port_op_delete(local_1c.Data);
      local_1c.Data = (char *)0x0;
    }
  }
  if (bVar2) {
    if (local_40.Data != (char *)0x0) {
      port_op_delete(local_40.Data);
      local_40.Data = (char *)0x0;
    }
  }
  if (!bVar2) {
    if (local_a4 != (void *)0x0) {
      port_op_delete(local_a4);
      local_a4 = (void *)0x0;
    }
    if (local_b0[0] != (void *)0x0) {
      port_op_delete(local_b0[0]);
      local_b0[0] = (void *)0x0;
    }
  }
  if (!bVar2) {
    if (local_28.Data != (char *)0x0) {
      port_op_delete(local_28.Data);
      local_28.Data = (char *)0x0;
    }
  }
  if ((local_68.Data != (char *)0x0) && (!bVar2)) {
    port_op_delete(local_68.Data);
  }
  return __return_storage_ptr__;
}

//==== 005f6190 GetIcon_005f6190 ====


/* public: virtual void (__cdecl*__thiscall ExplosiveModule__GetIcon(void)const )(void) */

_func_void * __thiscall ExplosiveModule__GetIcon(ExplosiveModule *this)

{
  return (_func_void *)(uintptr_t) Icons__Explosion;
}





//==== 005f6260 GetComposition_005f6260 ====

/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   ExplosiveModule__GetComposition(void)const  */

Darray_L_MaterialComposition_G_ * __thiscall
ExplosiveModule__GetComposition
          (ExplosiveModule *this,Darray_L_MaterialComposition_G_ *__return_storage_ptr__)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar4;
  double dVar3;
  Material *pMVar5;
  Darray_L_MaterialComposition_G_ *this_00;
  bool bVar6;
  MaterialComposition *pMVar7;
  MaterialComposition *pMVar8;
  int iVar9;
  int iVar10;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  this_00 = __return_storage_ptr__;
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (MaterialComposition *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_75;
  __return_storage_ptr__->Data = (MaterialComposition *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 2;
  pMVar7 = (MaterialComposition *)(uintptr_t)(port_op_new(0x20));
  if (pMVar7 == (MaterialComposition *)0x0) {
    pMVar7 = (MaterialComposition *)0x0;
  }
  else {
    iVar9 = 2;
    pMVar8 = pMVar7;
    do {
      pMVar8->Type = (Material *)0x0;
      pMVar8->Mass_kg = 0.0;
      iVar9 = iVar9 + -1;
      pMVar8 = pMVar8 + 1;
    } while (iVar9 != 0);
  }
  this_00->Data = pMVar7;
  iVar9 = 0;
  if (0 < this_00->Capacity) {
    iVar10 = 0;
    do {
      iVar9 = iVar9 + 1;
      puVar1 = (undefined4 *)((int)&this_00->Data->Type + iVar10);
      *puVar1 = 0;
      puVar1[1] = uStack_10;
      puVar1[2] = 0;
      puVar1[3] = 0;
      iVar10 = iVar10 + 0x10;
    } while (iVar9 < this_00->Capacity);
  }
  iVar9 = this_00->Size;
  pMVar5 = (Material *)(this->Detonator)._pad_0x8_2;
  uVar2 = (this->Detonator)._pad_0x0_0;
  uVar4 = (this->Detonator)._pad_0x4_1;
  __return_storage_ptr__ = (Darray_L_MaterialComposition_G_ *)(iVar9 + 1);
  util__Darray_L_MaterialConstituent_G___SetSize
            ((Darray_L_MaterialConstituent_G_ *)this_00,(int *)&__return_storage_ptr__);
  bVar6 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                    ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar9);
  if (bVar6) {
    pMVar7 = this_00->Data + this_00->Size + -1;
    pMVar7->Type = pMVar5;
    *(undefined4 *)&(*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar7) + 0x4)) = uStack_10;
    *(undefined4 *)&pMVar7->Mass_kg = uVar2;
    *(undefined4 *)((int)&pMVar7->Mass_kg + 4) = uVar4;
  }
  dVar3 = (this->Detonator).HardRange_km;
  if (0.0 < dVar3) {
    iVar9 = this_00->Size;
    pMVar5 = *(Material * *)&(this->Detonator).ActivationRange_km;
    __return_storage_ptr__ = (Darray_L_MaterialComposition_G_ *)(iVar9 + 1);
    util__Darray_L_MaterialConstituent_G___SetSize
              ((Darray_L_MaterialConstituent_G_ *)this_00,(int *)&__return_storage_ptr__);
    bVar6 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                      ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar9);
    if (bVar6) {
      uStack_c = SUB84(dVar3,0);
      uStack_8 = (undefined4)((ulonglong)dVar3 >> 0x20);
      pMVar7 = this_00->Data + this_00->Size + -1;
      pMVar7->Type = pMVar5;
      *(undefined4 *)&(*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar7) + 0x4)) = uStack_10;
      *(undefined4 *)&pMVar7->Mass_kg = uStack_c;
      *(undefined4 *)((int)&pMVar7->Mass_kg + 4) = uStack_8;
      return this_00;
    }
  }
  return this_00;
}

//==== 005f63b0 GetHullRadius_m_005f63b0 ====

/* public: virtual double __thiscall ExplosiveModule__GetHullRadius_m(void)const  */

double __thiscall ExplosiveModule__GetHullRadius_m(ExplosiveModule *this)

{
  double dVar1;
  
  dVar1 = ((this->Detonator).HardRange_km /
           *(double *)(*(int *)&(this->Detonator).ActivationRange_km + 0x30) +
          *(double *)&this->Detonator / *(double *)((this->Detonator)._pad_0x8_2 + 0x30)) /
          (*(double *)&this->ShrapnelComposition * 3.141592653589793);
  libm_sse2_sqrt_precise(0.0);
}

//==== 005f6410 GetStructuralMaterial_005f6410 ====

/* public: virtual class Material const * __thiscall
   ExplosiveModule__GetStructuralMaterial(void)const  */

Material * __thiscall ExplosiveModule__GetStructuralMaterial(ExplosiveModule *this)

{
  Material *pMVar1;
  Material *pMVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  pMVar1 = *(Material * *)&(this->Detonator).ActivationRange_km;
  pMVar2 = (Material *)(this->Detonator)._pad_0x8_2;
  dVar5 = *(double *)&this->Detonator / pMVar2->Density_kg__m3;
  dVar4 = *(double *)&this->ShrapnelComposition * 3.141592653589793;
  dVar3 = ((this->Detonator).HardRange_km / pMVar1->Density_kg__m3 + dVar5) / dVar4;
  libm_sse2_sqrt_precise(0.0);
  dVar5 = dVar5 / dVar4;
  libm_sse2_sqrt_precise(0.0);
  if (0.0 < dVar3 - dVar5) {
    pMVar2 = pMVar1;
  }
  return pMVar2;
}

//==== 005f64a0 GetStructuralThickness_m_005f64a0 ====

/* public: virtual double __thiscall ExplosiveModule__GetStructuralThickness_m(void)const  */

double __thiscall ExplosiveModule__GetStructuralThickness_m(ExplosiveModule *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = *(double *)&this->ShrapnelComposition * 3.141592653589793;
  dVar1 = *(double *)&this->Detonator / *(double *)((this->Detonator)._pad_0x8_2 + 0x30);
  dVar2 = dVar1 / dVar3;
  libm_sse2_sqrt_precise(0.0);
  dVar3 = ((this->Detonator).HardRange_km /
           *(double *)(*(int *)&(this->Detonator).ActivationRange_km + 0x30) + dVar1) / dVar3;
  libm_sse2_sqrt_precise(0.0);
  if (0.0 < dVar3 - dVar2) {
    return dVar3 - dVar2;
  }
  return dVar2;
}

//==== 005f6540 GetEngagementRange_km_005f6540 ====

/* public: virtual class util__Maybe_L_double_G_ 
   ExplosiveModule__GetEngagementRange_km(double)const  */

Maybe_L_double_G_ * 
ExplosiveModule__GetEngagementRange_km
          (ExplosiveModule *this,Maybe_L_double_G_ *__return_storage_ptr__,double param_1)

{
  __return_storage_ptr__->Data = *(double *)&this[1]._pad_0x8_2;
  __return_storage_ptr__->IsValidData = true;
  return __return_storage_ptr__;
}

//==== 005f6560 GetAreaOfEffectRadius_m_005f6560 ====

/* public: virtual double __thiscall ExplosiveModule__GetAreaOfEffectRadius_m(void)const  */

double __thiscall ExplosiveModule__GetAreaOfEffectRadius_m(ExplosiveModule *this)

{
  return *(double *)&this[1]._pad_0x8_2 * 1000.0;
}

//==== 005f6570 GetModuleAmmoExplosion_005f6570 ====

/* public: virtual struct AmmoExplosion __thiscall
   ExplosiveModule__GetModuleAmmoExplosion(void)const  */

AmmoExplosion * __thiscall
ExplosiveModule__GetModuleAmmoExplosion(ExplosiveModule *this,AmmoExplosion *__return_storage_ptr__)

{
  Darray_L_MaterialConstituent_G_ *pDVar1;
  double dVar2;
  Darray_L_MaterialConstituent_G_ local_14;
  
  (__return_storage_ptr__->GasComposition)._pad_0x0_0 =
       (int)&vftable_15;
  (__return_storage_ptr__->GasComposition).Data = (MaterialConstituent *)0x0;
  (__return_storage_ptr__->GasComposition).Size = 0;
  (__return_storage_ptr__->GasComposition).Capacity = 0;
  *(undefined4 *)&__return_storage_ptr__->Mass_kg = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->Mass_kg + 4) = 0;
  *(undefined4 *)&__return_storage_ptr__->Temperature_K = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->Temperature_K + 4) = 0;
  pDVar1 = (Darray_L_MaterialConstituent_G_ *)(uintptr_t)(Material__GetDecompositionProductsByMassPercent
                     ((Material *)(this->Detonator)._pad_0x8_2,&local_14));
  util__Darray_L_MaterialConstituent_G___op_assign
            (&__return_storage_ptr__->GasComposition,(Darray_L_struct_MaterialConstituent_G_ *)pDVar1);
  local_14._pad_0x0_0 = (int)&vftable_15;
  if (local_14.Data != (MaterialConstituent *)0x0) {
    port_op_delete(local_14.Data);
  }
  __return_storage_ptr__->Mass_kg = *(double *)&this->Detonator;
  dVar2 = Material__GetAdiabaticFlameTemperature_K((Material *)(this->Detonator)._pad_0x8_2);
  __return_storage_ptr__->Temperature_K = dVar2;
  return __return_storage_ptr__;
}

//==== 005f6600 InnerSortFunction_005f6600 ====

/* public: virtual bool __thiscall ExplosiveModule__InnerSortFunction(class Module const *,class
   Module const *)const  */

bool __thiscall
ExplosiveModule__InnerSortFunction(ExplosiveModule *this,Module *param_1,Module *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  iVar2 = GetShrapnelCount((ExplosiveModule *)param_1);
  iVar3 = GetShrapnelCount((ExplosiveModule *)param_2);
  if (0 < iVar2 != 0 < iVar3) {
    iVar2 = GetShrapnelCount((ExplosiveModule *)param_1);
  }
  fVar4 = (float10)(**(code **)(param_1->_pad_0x0_0 + 0x90))();
  fVar5 = (float10)(**(code **)(param_2->_pad_0x0_0 + 0x90))();
  if ((double)fVar4 == (double)fVar5) {
    bVar1 = Module__InnerSortFunction((Module *)this,param_1,param_2);
    return bVar1;
  }
  fVar4 = (float10)(**(code **)(param_1->_pad_0x0_0 + 0x90))();
  fVar5 = (float10)(**(code **)(param_2->_pad_0x0_0 + 0x90))();
  return (double)fVar4 < (double)fVar5;
}

//==== 005f66c0 GetInfoBoxes_005f66c0 ====


/* public: virtual class util__Darray_L_structInfoBox_G_ __thiscall
   ExplosiveModule__GetInfoBoxes(void)const  */

void __thiscall ExplosiveModule__GetInfoBoxes(ExplosiveModule *this)

{
  undefined8 stack0xfffffffc;
  Delegate_L_bool_G_ DVar1;
  InfoBox *pIVar2;
  int iVar3;
  bool bVar4;
  LocStr *this_00;
  Str_L_char_G_ *pSVar5;
  Darray_L_struct_InfoBox_G_ *pDVar6;
  Darray_L_struct_InfoBox_G_ *in_stack_00000004;
  void *apvStack_bc [3];
  void *pvStack_b0;
  ExplosiveModule *pEStack_a4;
  code *pcStack_a0;
  Str_L_char_G_ SStack_9c;
  _func___cdecl_void *p_Stack_90;
  ExplosiveModule *pEStack_8c;
  _func___cdecl_Str_L_char_G__void_ptr *p_Stack_88;
  Str_L_char_G_ SStack_84;
  void *pvStack_78;
  _func___cdecl_Str_L_char_G__void_ptr *p_Stack_74;
  Str_L_char_G_ SStack_70;
  undefined8 uStack_64;
  uint uStack_5c;
  void *pvStack_58;
  _func___cdecl_Str_L_char_G__void_ptr *p_Stack_54;
  Str_L_char_G_ SStack_50;
  undefined **ppuStack_44;
  Str_L_char_G_ SStack_40;
  Str_L_char_G_ SStack_34;
  int iStack_28;
  ExplosiveModule *pEStack_24;
  _func___cdecl_bool_void_ptr *p_Stack_20;
  uint uStack_1c;
  undefined **ppuStack_18;
  InfoBox *pIStack_14;
  int iStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  ppuStack_18 = (undefined **)0x0;
  pIStack_14 = (InfoBox *)0x0;
  iStack_10 = 0;
  uStack_c = 0;
  util__Darray_struct_InfoBox___Darray_struct_InfoBox((Darray_L_struct_InfoBox_G_ *)&ppuStack_18,1);
  util__Str_char___Str_char(&SStack_40,"InfoBox ExplosiveInfo Tooltip");
  p_Stack_20 = util__DelegateFactory_class_ExplosiveModule_bool___MethodCallerConst__public__bool___thiscall_ExplosiveModule__HasShrapnel_void_const__0
  ;
  uStack_1c = uStack_1c & 0xffffff00;
  SStack_34.Data = (char *)0x0;
  SStack_34.Capacity = 0;
  SStack_34.Length = 0;
  pEStack_24 = this;
  this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_bc,&SStack_40,&SStack_34);
  pSVar5 = util__LocStr__operator__o3(this_00);
  pvStack_58 = (void *)0x0;
  p_Stack_54 = (_func___cdecl_Str_L_char_G__void_ptr *)0x0;
  util__Str_char___Str_char(&SStack_50,pSVar5);
  pcStack_a0 = (long long int (*)())(util__DelegateFactory_class_ExplosiveModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_ExplosiveModule__GetShrapnelInfo_void_const__0);
  SStack_9c.Data = (char *)0x0;
  SStack_9c.Capacity = 0;
  SStack_9c.Length = 0;
  p_Stack_90 = (_func___cdecl_void *)(uintptr_t) Icons__Explosion;
  p_Stack_88 = (Str_L_char_G_ (*)(void *))(util__DelegateFactory_class_ExplosiveModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_ExplosiveModule__GetShrapnelInfo_void_const__0);
  pEStack_a4 = this;
  pEStack_8c = this;
  util__Str_char___Str_char(&SStack_84,&SStack_9c);
  pvStack_78 = pvStack_58;
  p_Stack_74 = p_Stack_54;
  util__Str_char___Str_char(&SStack_70,&SStack_50);
  uStack_64 = CONCAT44(p_Stack_20,pEStack_24);
  uStack_5c = uStack_1c;
  if (SStack_50.Data != (char *)0x0) {
    port_op_delete(SStack_50.Data);
  }
  iVar3 = iStack_10;
  iStack_28 = iStack_10 + 1;
  util__Darray_struct_InfoBox___SetSize((Darray_L_struct_InfoBox_G_ *)&ppuStack_18,&iStack_28);
  bVar4 = util__Darray_struct_InfoBox___CheckSize((Darray_L_struct_InfoBox_G_ *)&ppuStack_18,iVar3);
  iVar3 = iStack_10;
  pIVar2 = pIStack_14;
  if (bVar4) {
    pIStack_14[iStack_10 + -1].Icon = p_Stack_90;
    pIStack_14[iStack_10 + -1].Info.Getter.Callee = pEStack_8c;
    pIStack_14[iStack_10 + -1].Info.Getter.CallbackFunction = p_Stack_88;
    util__Str_char___operator__o8(&pIStack_14[iStack_10 + -1].Info.Value,&SStack_84);
    pIVar2[iVar3 + -1].Tooltip.Getter.Callee = pvStack_78;
    pIVar2[iVar3 + -1].Tooltip.Getter.CallbackFunction = p_Stack_74;
    util__Str_char___operator__o8(&pIVar2[iVar3 + -1].Tooltip.Value,&SStack_70);
    DVar1.CallbackFunction = p_Stack_20;
    DVar1.Callee = pEStack_24;
    pIVar2[iVar3 + -1].IsVisible.Getter = DVar1;
    *(uint *)&pIVar2[iVar3 + -1].IsVisible.Value = uStack_1c;
  }
  if (SStack_70.Data != (char *)0x0) {
    port_op_delete(SStack_70.Data);
  }
  if (SStack_84.Data != (char *)0x0) {
    port_op_delete(SStack_84.Data);
  }
  if (pvStack_b0 != (void *)0x0) {
    port_op_delete(pvStack_b0);
    pvStack_b0 = (void *)0x0;
  }
  if (apvStack_bc[0] != (void *)0x0) {
    port_op_delete(apvStack_bc[0]);
    apvStack_bc[0] = (void *)0x0;
  }
  if (SStack_34.Data != (char *)0x0) {
    port_op_delete(SStack_34.Data);
    SStack_34.Data = (char *)0x0;
  }
  if ((InfoBox *)SStack_40.Data != (InfoBox *)0x0) {
    port_op_delete(SStack_40.Data);
  }
  pDVar6 = (Darray_L_struct_InfoBox_G_ *)Module__GetInfoBoxes((Module *)this);
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_InfoBox___Darray_struct_InfoBox
            (in_stack_00000004,(Darray_L_struct_InfoBox_G_ *)&ppuStack_18);
  util__Darray_struct_InfoBox___operator(in_stack_00000004,pDVar6);
  ppuStack_44 = &vftable_127;
  if ((InfoBox *)SStack_40.Data != (InfoBox *)0x0) {
    InfoBox___vector_deleting_destructor((InfoBox *)SStack_40.Data,3);
  }
  SStack_40.Data = (char *)0x0;
  ppuStack_44 = (undefined **)(&vftable);
  ppuStack_18 = &vftable_127;
  if (pIStack_14 != (InfoBox *)0x0) {
    InfoBox___vector_deleting_destructor(pIStack_14,3);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 005f6960 GenerateDesignUI_005f6960 ====

/* WARNING: Removing unreachable block (ram,0x005f728c) */
/* WARNING: Removing unreachable block (ram,0x005f7299) */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual struct UIWidget * __thiscall ExplosiveModule__GenerateDesignUI(class Manager
   *)const  */

UIWidget * __thiscall ExplosiveModule__GenerateDesignUI(ExplosiveModule *this,Manager *param_1)

{
  undefined8 stack0xfffff724;
  undefined8 stack0xfffff800;
  undefined8 stack0xfffff834;
  undefined8 stack0xfffff86c;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  UIAttributes UVar4;
  UIAttributes UVar5;
  LayoutAttributes LVar6;
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
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  undefined4 *puVar22;
  UIWidget *pUVar23;
  LocStr *pLVar24;
  Str_L_char_G_ *pSVar25;
  Str_L_char_G_ *pSVar26;
  undefined4 *puVar27;
  int iVar28;
  UIAttributes *pUVar29;
  float *pfVar30;
  Data *pDVar31;
  int iStack_808;
  undefined1 in_stack_fffff800 [44];
  void *in_stack_fffff82c;
  _func___cdecl_bool_void_ptr *in_stack_fffff830;
  undefined1 auVar32 [12];
  undefined1 in_stack_fffff834 [44];
  undefined1 auVar33 [12];
  void *in_stack_fffff860;
  _func___cdecl_bool_void_ptr *in_stack_fffff864;
  Darray_L_struct_Body__RadialImpulse_G_ *in_stack_fffff868;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [44];
  undefined1 in_stack_fffff86c [220];
  float in_stack_fffff948;
  undefined4 in_stack_fffff94c;
  float fVar40;
  void *in_stack_fffff950;
  void *pvVar41;
  _func___cdecl_Color_void_ptr *in_stack_fffff954;
  _func___cdecl_Color_void_ptr *p_Var42;
  int in_stack_fffff958;
  float fVar43;
  int in_stack_fffff95c;
  float fVar44;
  int in_stack_fffff960;
  float fVar45;
  int in_stack_fffff964;
  float fVar46;
  float in_stack_fffff968;
  float fVar47;
  float in_stack_fffff96c;
  float fVar48;
  float in_stack_fffff970;
  float fVar49;
  float fVar50;
  float fVar51;
  Manager *pMVar52;
  UIAttributes local_678;
  UIAttributes local_530;
  Args local_3e8 [272];
  UIAttributes local_2d8;
  LayoutAttributes local_190;
  Color local_160;
  void *local_140 [3];
  void *local_134;
  void *local_128 [3];
  void *local_11c;
  void *local_110 [3];
  void *local_104;
  Str_L_char_G_ local_f8;
  Str_L_char_G_ local_ec;
  Str_L_char_G_ local_e0;
  Str_L_char_G_ local_d4;
  Str_L_char_G_ local_c8;
  Darray_L_util__SharedPtr_L_UIWidget_G___G_ local_bc;
  void *local_ac;
  _func___cdecl_Color_void_ptr *local_a8;
  undefined **local_a4;
  Str_L_char_G_ local_a0;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  Str_L_char_G_ local_84;
  Str_L_char_G_ local_78;
  Str_L_char_G_ local_6c;
  LineGraph *local_60;
  void *local_5c;
  _func___cdecl_Color_void_ptr *local_58;
  undefined **local_54;
  Str_L_char_G_ local_50;
  code *pcStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  UIRowLayout *local_30;
  UIWidget *local_2c;
  float local_28;
  float local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  void *local_18;
  Str_L_char_G_ SStack_14;
  UIWidget *local_8;
  undefined1 auVar39 [32];
  
  bVar21 = false;
  bVar20 = false;
  bVar19 = false;
  bVar18 = false;
  bVar17 = false;
  bVar16 = false;
  bVar15 = false;
  bVar14 = false;
  bVar13 = false;
  bVar12 = false;
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  local_30 = (UIRowLayout *)0x0;
  local_30 = (UIRowLayout *)(uintptr_t)(port_op_new(0x218));
  if (local_30 == (UIRowLayout *)0x0) {
    pUVar23 = (UIWidget *)0x0;
  }
  else {
    pUVar23 = (UIWidget *)(uintptr_t)(port_op_new(0x170));
    if (pUVar23 == (UIWidget *)0x0) {
      *(uint32_t *)&local_2c = (uint32_t)(uintptr_t)((UIWidget *)0x0);
    }
    else {
      fVar50 = 8.762284e-39;
      pMVar52 = param_1;
      *(uint32_t *)&local_2c = (uint32_t)(uintptr_t)(pUVar23);
      UIAttributes__UIAttributes(&local_2d8,param_1);
      local_50.Length = 0;
      uStack_40 = 0x3ff0000000000000;
      uStack_38 = 0x3ff0000000000000;
      pcStack_44 = (code *)0x0;
      local_2d8.FillProportion.Getter.Callee = (void *)0x0;
      local_2d8.FillProportion.Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0;
      local_2d8.FillProportion.Value.X = 0;
      local_2d8.FillProportion.Value.Y = 0x3ff00000;
      local_2d8.FillProportion.Value.Y = 1.0;
      in_stack_fffff82c = (void *)0x5f69eb;
      UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff834,&local_2d8);
      in_stack_fffff830 = (_func___cdecl_bool_void_ptr *)0x5f69f2;
      UVar5.Enabled.Getter.Callee = in_stack_fffff860;
*(uint32_t *)&auVar32 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff834) + 4)));
*(uint32_t *)&auVar33 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff834) + 32)));
      UVar5.Parent = (Manager *)(*(uint32_t*)&(in_stack_fffff834));
      UVar5.Tag.Data = (char *)(*(uint32_t*)&(auVar32));
      UVar5.Tag.Capacity = (*(uint32_t*)((char*)&(auVar32)+4));
      UVar5.Tag.Length = (*(uint32_t*)((char*)&(auVar32)+8));
      uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff834) + 16)),0);
      uVar35 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff834) + 16)),8);
      UVar5.Location.Getter.Callee = (void *)(int)uVar34;
      UVar5.Location.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar5.Location.Value.X = (int)uVar35;
      UVar5.Location.Value.Y = (int)((ulonglong)uVar35 >> 0x20);
      UVar5.Visible.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar33));
      UVar5.Visible.Getter.CallbackFunction =
           (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar33)) >> 0x20);
      UVar5.Visible.Value = (bool)auVar33[8];
      (*(uint24_t *)((char *)&(UVar5.Visible) + 9)) = (*(uint24_t*)((char*)&(auVar33)+9));
      UVar5.Enabled.Getter.CallbackFunction = in_stack_fffff864;
      (*(uint32_t *)((char *)&(UVar5.Enabled) + 8)) = (uint32_t)(uintptr_t)(in_stack_fffff868);
*(uint32_t *)&auVar37 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff86c) + 124)));
*(uint32_t *)&auVar38 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff86c) + 140)));
      uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff86c) + 0)),0);
      uVar35 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff86c) + 0)),8);
      UVar5.DesiredSize.Getter.Callee = (void *)(int)uVar34;
      UVar5.DesiredSize.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar5.DesiredSize.Value.X = (int)uVar35;
      UVar5.DesiredSize.Value.Y = (int)((ulonglong)uVar35 >> 0x20);
      uVar34 = SUB248((*(uint32_t *)((char *)&(in_stack_fffff86c) + 16)),0);
*(uint32_t *)&auVar36 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffff86c) + 16)),8));
      UVar5.FillProportion.Getter.Callee = (void *)(int)uVar34;
      UVar5.FillProportion.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar5.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar36));
      UVar5.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar36)+8));
      uVar34 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff86c) + 40)),0);
      UVar5.HitTestShape.Getter.Callee = (void *)(int)uVar34;
      UVar5.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)(int)((ulonglong)uVar34 >> 0x20));
      UVar5.HitTestShape.Value = SUB124((*(uint32_t *)((char *)&(in_stack_fffff86c) + 40)),8);
      (*(uint32_t *)((char *)&(UVar5) + 108)) = (*(uint32_t *)((char *)&(in_stack_fffff86c) + 52));
      uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff86c) + 56)),0);
      UVar5.Depth.Getter.Callee = (void *)(int)uVar34;
      UVar5.Depth.Getter.CallbackFunction =
           (_func___cdecl_double_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar5.Depth.Value = (double)SUB168((*(uint32_t *)((char *)&(in_stack_fffff86c) + 56)),8);
      uVar34 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff86c) + 72)),0);
      UVar5.Icon.Getter.Callee = (void *)(int)uVar34;
      UVar5.Icon.Getter.CallbackFunction = (void (* (*)(void *))(void))((_func___cdecl__func___cdecl_void_ptr_void_ptr *)(int)((ulonglong)uVar34 >> 0x20));
      UVar5.Icon.Value = (_func___cdecl_void *)SUB124((*(uint32_t *)((char *)&(in_stack_fffff86c) + 72)),8);
      uVar34 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff86c) + 84)),0);
*(uint32_t *)&auVar32 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff86c) + 84)),8));
      UVar5.Tooltip.Getter.Callee = (void *)(int)uVar34;
      UVar5.Tooltip.Getter.CallbackFunction =
           (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar5.Tooltip.Value.Data = (char *)(*(uint32_t*)&(auVar32));
      UVar5.Tooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar32)+4));
      UVar5.Tooltip.Value.Length = (*(uint32_t*)((char*)&(auVar32)+8));
      uVar34 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff86c) + 104)),0);
*(uint32_t *)&auVar32 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff86c) + 104)),8));
      UVar5.VerboseTooltip.Getter.Callee = (void *)(int)uVar34;
      UVar5.VerboseTooltip.Getter.CallbackFunction =
           (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar5.VerboseTooltip.Value.Data = (char *)(*(uint32_t*)&(auVar32));
      UVar5.VerboseTooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar32)+4));
      UVar5.VerboseTooltip.Value.Length = (*(uint32_t*)((char*)&(auVar32)+8));
      uVar34 = SUB128((*(uint32_t *)((char *)&(auVar37) + 0)),0);
      UVar5.TextFont.Data.Getter.Callee = (void *)(int)uVar34;
      UVar5.TextFont.Data.Getter.CallbackFunction =
           (_func___cdecl_Font_ptr_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar5.TextFont.Data.Value = (Font *)SUB124((*(uint32_t *)((char *)&(auVar37) + 0)),8);
      UVar5.TextFont.IsValidData = (bool)auVar37[0xc];
      (*(uint32_t *)((char *)&(UVar5.TextFont) + 13)) = (*(uint32_t *)((char *)&(auVar37) + 13));
      uVar34 = SUB408((*(uint32_t *)((char *)&(auVar38) + 0)),0);
*(uint32_t *)&auVar39 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar38) + 0)),8));
      UVar5.ForegroundColor.Data.Getter.Callee = (void *)(int)uVar34;
      UVar5.ForegroundColor.Data.Getter.CallbackFunction =
           (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar5.ForegroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar39));
      UVar5.ForegroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar39)+4));
      UVar5.ForegroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar39)+8));
      UVar5.ForegroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar39) + 12));
      UVar5.ForegroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar39) + 16));
      UVar5.ForegroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar39) + 20));
      UVar5.ForegroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar39) + 24));
      UVar5.ForegroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar39) + 28));
      UVar5.ForegroundColor.IsValidData = (bool)auVar38[0x28];
      (*(uint32_t *)((char *)&(UVar5.ForegroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar38) + 41));
      UVar5.BackgroundColor.Data.Getter.Callee = (void *)(int)(*(uint64_t *)((char *)&(in_stack_fffff86c) + 184));
      UVar5.BackgroundColor.Data.Getter.CallbackFunction =
           (_func___cdecl_Color_void_ptr *)(int)((ulonglong)(*(uint64_t *)((char *)&(in_stack_fffff86c) + 184)) >> 0x20);
      UVar5.BackgroundColor.Data.Value._pad_0x0_0 = (*(uint32_t *)((char *)&(in_stack_fffff86c) + 192));
      UVar5.BackgroundColor.Data.Value._pad_0x4_1 = (*(uint32_t *)((char *)&(in_stack_fffff86c) + 196));
      UVar5.BackgroundColor.Data.Value._pad_0x8_2 = (*(uint32_t *)((char *)&(in_stack_fffff86c) + 200));
      UVar5.BackgroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(in_stack_fffff86c) + 204));
      UVar5.BackgroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(in_stack_fffff86c) + 208));
      UVar5.BackgroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(in_stack_fffff86c) + 212));
      UVar5.BackgroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(in_stack_fffff86c) + 216));
      UVar5.BackgroundColor.Data.Value.Alpha = in_stack_fffff948;
      UVar5.BackgroundColor.IsValidData = SUB41(in_stack_fffff94c,0);
      (*(uint32_t *)((char *)&(UVar5.BackgroundColor) + 41)) = SUB43(in_stack_fffff94c,1);
      UVar5.TextColor.Data.Getter.Callee = in_stack_fffff950;
      UVar5.TextColor.Data.Getter.CallbackFunction = in_stack_fffff954;
      UVar5.TextColor.Data.Value._pad_0x0_0 = in_stack_fffff958;
      UVar5.TextColor.Data.Value._pad_0x4_1 = in_stack_fffff95c;
      UVar5.TextColor.Data.Value._pad_0x8_2 = in_stack_fffff960;
      UVar5.TextColor.Data.Value._pad_0xc_3 = in_stack_fffff964;
      UVar5.TextColor.Data.Value.Hue_degrees = in_stack_fffff968;
      UVar5.TextColor.Data.Value.Saturation = in_stack_fffff96c;
      UVar5.TextColor.Data.Value.Value = in_stack_fffff970;
      UVar5.TextColor.Data.Value.Alpha = fVar50;
      (*(uint32_t *)((char *)&(UVar5.TextColor) + 40)) = (uint32_t)(uintptr_t)(pMVar52);
      UIWidget__UIWidget(pUVar23,UVar5);
      pUVar23->_pad_0x0_0 = (int)&vftable_245;
      pUVar23[1]._pad_0x0_0 = (int)this;
      UIAttributes___UIAttributes(&local_2d8);
    }
    local_60 = (LineGraph *)(uintptr_t)(port_op_new(0x278));
    if (local_60 == (LineGraph *)0x0) {
      local_8 = (UIWidget *)0x0;
    }
    else {
      util__Str_char___Str_char(&local_f8,"m");
      util__Str_char___Str_char(&local_e0,"ExplosiveChart YAxis");
      util__Str_char___Str_char(&local_ec,"km/s");
      util__Str_char___Str_char(&local_d4,"ExplosiveChart XAxis");
      util__Str_char___Str_char(&local_c8,"ExplosiveChart Title");
      *(uint32_t *)&local_20 = (uint32_t)(uintptr_t)((undefined4 *)&stack0xfffff86c);
      pcStack_44 = util__DelegateFactory_L_ExplosiveModule_Cutil__Range_L_double_G___G___MethodCallerConst_L__public__struct_util__Range_L_double_G____thiscall_ExplosiveModule__GetChartYRanges_void_const__C0__G_
      ;
      local_a0.Length =
           (int)util__DelegateFactory_L_ExplosiveModule_Cutil__Range_L_double_G___G___MethodCallerConst_L__public__struct_util__Range_L_double_G____thiscall_ExplosiveModule__GetChartXRanges_void_const__C0__G_
      ;
      uStack_40 = 0;
      uStack_38 = 0;
      local_84.Data = (char *)0x0;
      fStack_94 = 0.0;
      fStack_90 = 0.0;
      fStack_8c = 0.0;
      fStack_88 = 0.0;
      local_84.Capacity = 0;
      local_84.Length = 0;
      local_78.Data = (char *)0x0;
      local_78.Capacity = 0;
      local_78.Length = 0;
      local_6c.Data = (char *)0x0;
      local_6c.Capacity = 0;
      local_6c.Length = 0;
      local_a0.Capacity = (int)this;
      local_50.Length = (int)this;
      pLVar24 = (LocStr *)util__LocStr__LocStr((LocStr *)local_140,&local_e0,&local_84);
      local_8 = (UIWidget *)util__LocStr__operator__o3(pLVar24);
      pLVar24 = (LocStr *)util__LocStr__LocStr((LocStr *)local_128,&local_d4,&local_78);
      pSVar25 = util__LocStr__operator__o3(pLVar24);
      in_stack_fffff860 = (void *)0x5f6b17;
      pLVar24 = (LocStr *)util__LocStr__LocStr((LocStr *)local_110,&local_c8,&local_6c);
      pSVar26 = util__LocStr__operator__o3(pLVar24);
      *(uint32_t *)&local_1c = 0;
      *(uint32_t *)&local_18 = (uint32_t)(uintptr_t)((void *)0x0);
      util__Str_char___Str_char(&SStack_14,pSVar26);
      puVar27 = (undefined4 *)LineGraph__Args__Args__o3(local_3e8);
      *puVar27 = local_1c;
      puVar27[1] = (undefined4)(uintptr_t)(local_18);
      util__Str_char___operator__o8((Str_L_char_G_ *)(puVar27 + 2),&SStack_14);
      if ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_14.Data !=
          (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      *(uint32_t *)&local_1c = 0;
      *(uint32_t *)&local_18 = (uint32_t)(uintptr_t)((void *)0x0);
      util__Str_char___Str_char(&SStack_14,pSVar25);
      puVar27[5] = local_1c;
      puVar27[6] = (undefined4)(uintptr_t)(local_18);
      util__Str_char___operator__o8((Str_L_char_G_ *)(puVar27 + 7),&SStack_14);
      if ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_14.Data !=
          (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      *(uint32_t *)&local_1c = 0;
      *(uint32_t *)&local_18 = (uint32_t)(uintptr_t)((void *)0x0);
      util__Str_char___Str_char(&SStack_14,&local_ec);
      puVar27[10] = local_1c;
      puVar27[0xb] = (undefined4)(uintptr_t)(local_18);
      util__Str_char___operator__o8((Str_L_char_G_ *)(puVar27 + 0xc),&SStack_14);
      if ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_14.Data !=
          (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      *(uint32_t *)&local_1c = 0;
      *(uint32_t *)&local_18 = (uint32_t)(uintptr_t)((void *)0x0);
      util__Str_char___Str_char(&SStack_14,(Str_L_char_G_ *)local_8);
      puVar27[0xf] = local_1c;
      puVar27[0x10] = (undefined4)(uintptr_t)(local_18);
      util__Str_char___operator__o8((Str_L_char_G_ *)(puVar27 + 0x11),&SStack_14);
      if ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_14.Data !=
          (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      *(uint32_t *)&local_1c = 0;
      *(uint32_t *)&local_18 = (uint32_t)(uintptr_t)((void *)0x0);
      util__Str_char___Str_char(&SStack_14,&local_f8);
      puVar27[0x14] = local_1c;
      puVar27[0x15] = (undefined4)(uintptr_t)(local_18);
      util__Str_char___operator__o8((Str_L_char_G_ *)(puVar27 + 0x16),&SStack_14);
      if ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_14.Data !=
          (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      puVar22 = local_20;
      puVar27[0x27] = (undefined4)(uintptr_t)(this);
      puVar27[0x1a] = local_a0.Capacity;
      puVar27[0x1b] = local_a0.Length;
      puVar27[0x1c] = fStack_94;
      puVar27[0x1d] = fStack_90;
      puVar27[0x28] = (undefined4)(uintptr_t)(util__DelegateFactory_L_ExplosiveModule_Cdouble_Cdouble_G___MethodCallerConst_L__public__double___thiscall_ExplosiveModule__GetChartShrapnelRadius_m_double_const__C0__G_);
      *(ulonglong *)(puVar27 + 0x1e) = CONCAT44(fStack_88,fStack_8c);
      pSVar25 = (Str_L_char_G_ *)(local_20 + 2);
      puVar27[0x20] = local_50.Length;
      puVar27[0x21] = (undefined4)(uintptr_t)(pcStack_44);
      puVar27[0x22] = (undefined4)uStack_40;
      puVar27[0x23] = (*(uint32_t*)((char*)&(uStack_40)+4));
      *(undefined8 *)(puVar27 + 0x24) = uStack_38;
      *local_20 = *puVar27;
      puVar22[1] = puVar27[1];
      util__Str_char___Str_char(pSVar25,(Str_L_char_G_ *)(puVar27 + 2));
      puVar22[5] = puVar27[5];
      puVar22[6] = puVar27[6];
      util__Str_char___Str_char((Str_L_char_G_ *)(puVar22 + 7),(Str_L_char_G_ *)(puVar27 + 7));
      puVar22[10] = puVar27[10];
      puVar22[0xb] = puVar27[0xb];
      util__Str_char___Str_char((Str_L_char_G_ *)(puVar22 + 0xc),(Str_L_char_G_ *)(puVar27 + 0xc));
      puVar22[0xf] = puVar27[0xf];
      puVar22[0x10] = puVar27[0x10];
      util__Str_char___Str_char((Str_L_char_G_ *)(puVar22 + 0x11),(Str_L_char_G_ *)(puVar27 + 0x11));
      puVar22[0x14] = puVar27[0x14];
      puVar22[0x15] = puVar27[0x15];
      util__Str_char___Str_char((Str_L_char_G_ *)(puVar22 + 0x16),(Str_L_char_G_ *)(puVar27 + 0x16));
      uVar1 = puVar27[0x1b];
      uVar2 = puVar27[0x1c];
      uVar3 = puVar27[0x1d];
      puVar22[0x1a] = puVar27[0x1a];
      puVar22[0x1b] = uVar1;
      puVar22[0x1c] = uVar2;
      puVar22[0x1d] = uVar3;
      *(undefined8 *)(puVar22 + 0x1e) = *(undefined8 *)(puVar27 + 0x1e);
      uVar1 = puVar27[0x21];
      uVar2 = puVar27[0x22];
      uVar3 = puVar27[0x23];
      puVar22[0x20] = puVar27[0x20];
      puVar22[0x21] = uVar1;
      puVar22[0x22] = uVar2;
      puVar22[0x23] = uVar3;
      *(undefined8 *)(puVar22 + 0x24) = *(undefined8 *)(puVar27 + 0x24);
      *(undefined1 *)(puVar22 + 0x26) = *(undefined1 *)(puVar27 + 0x26);
      *(undefined1 *)((int)puVar22 + 0x99) = *(undefined1 *)((int)puVar27 + 0x99);
      *(undefined1 *)((int)puVar22 + 0x9a) = *(undefined1 *)((int)puVar27 + 0x9a);
      puVar22[0x27] = puVar27[0x27];
      puVar22[0x28] = puVar27[0x28];
      puVar22[0x29] = puVar27[0x29];
      puVar22[0x2a] = puVar27[0x2a];
      *(undefined8 *)(puVar22 + 0x2b) = *(undefined8 *)(puVar27 + 0x2b);
      puVar22[0x2d] = puVar27[0x2d];
      puVar22[0x2e] = puVar27[0x2e];
      puVar22[0x2f] = puVar27[0x2f];
      util__Darray_L_util__Str_L_char_G___G___Darray_L_util__Str_L_char_G___G_
                ((Darray_L_util__Str_L_char_G___G_ *)(puVar22 + 0x30),
                 (Darray_L_class_util__Str_L_char_G___G_ *)(puVar27 + 0x30));
      puVar22[0x34] = puVar27[0x34];
      puVar22[0x35] = puVar27[0x35];
      util__Darray_L_Body__RadialImpulse_G___Darray_L_Body__RadialImpulse_G_
                ((Darray_L_Body__RadialImpulse_G_ *)(puVar22 + 0x36),
                 (Darray_L_struct_Body__RadialImpulse_G_ *)(puVar27 + 0x36));
      puVar22[0x3a] = puVar27[0x3a];
      puVar22[0x3b] = puVar27[0x3b];
      in_stack_fffff868 = (Darray_L_struct_Body__RadialImpulse_G_ *)(puVar27 + 0x3c);
      in_stack_fffff864 = (_func___cdecl_bool_void_ptr *)0x5f6e4c;
      util__Darray_L_Body__RadialImpulse_G___Darray_L_Body__RadialImpulse_G_
                ((Darray_L_Body__RadialImpulse_G_ *)(puVar22 + 0x3c),in_stack_fffff868);
      puVar22[0x40] = puVar27[0x40];
      puVar22[0x41] = puVar27[0x41];
      puVar22[0x42] = puVar27[0x42];
      puVar22[0x43] = puVar27[0x43];
      iVar28 = (int)(uintptr_t) util__Color__Color(&local_160,Preset__Green,1.0);
      local_ac = (void *)0x0;
      local_a8 = (_func___cdecl_Color_void_ptr *)0x0;
      local_a4 = &vftable_5;
      util__Str_char___Str_char(&local_a0,(Str_L_char_G_ *)(iVar28 + 4));
      fStack_94 = *(float *)(iVar28 + 0x10);
      fStack_90 = *(float *)(iVar28 + 0x14);
      fStack_8c = *(float *)(iVar28 + 0x18);
      fStack_88 = *(float *)(iVar28 + 0x1c);
      local_a4 = &vftable_59;
      *(uint32_t *)&local_18 = (uint32_t)(uintptr_t)((void *)0x0);
      SStack_14.Data = (char *)0x0;
      SStack_14.Capacity = 0;
      SStack_14.Length = 200;
      local_28 = fStack_90;
      local_24 = fStack_94;
      *(uint32_t *)&(local_20) = *(undefined4 *)&(fStack_8c);
      local_8 = (UIWidget *)(uintptr_t)*(undefined4 *)&((fStack_88));
      pUVar29 = (UIAttributes *)UIAttributes__UIAttributes(&local_678,param_1);
      uStack_40 = 0x3ff0000000000000;
      uStack_38 = 0;
      local_50.Length = 0;
      (pUVar29->DesiredSize).Getter.Callee = local_18;
      (pUVar29->DesiredSize).Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_14.Data;
      (pUVar29->DesiredSize).Value.X = SStack_14.Capacity;
      (pUVar29->DesiredSize).Value.Y = SStack_14.Length;
      pcStack_44 = (code *)0x0;
      local_5c = local_ac;
      local_58 = local_a8;
      (pUVar29->FillProportion).Getter.Callee = (void *)0x0;
      (pUVar29->FillProportion).Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0
      ;
      *(undefined4 *)&(pUVar29->FillProportion).Value.X = 0;
      *(undefined4 *)((int)&(pUVar29->FillProportion).Value.X + 4) = 0x3ff00000;
      local_54 = &vftable_5;
      (pUVar29->FillProportion).Value.Y = 0.0;
      util__Str_char___Str_char(&local_50,&local_a0);
      pcStack_44 = *(code *)&(local_24);
      (pUVar29->ForegroundColor).Data.Getter.Callee = local_5c;
      (pUVar29->ForegroundColor).Data.Getter.CallbackFunction = local_58;
      uStack_40 = CONCAT44(local_20,local_28);
      local_54 = &vftable_59;
      (*(uint40_t*)&(uStack_38)) = CONCAT14(1,local_8);
      util__Str_char___operator__o8
                ((Str_L_char_G_ *)&(pUVar29->ForegroundColor).Data.Value._pad_0x4_1,&local_50);
      (pUVar29->ForegroundColor).Data.Value.Hue_degrees = local_24;
      (pUVar29->ForegroundColor).Data.Value.Saturation = local_28;
      (pUVar29->ForegroundColor).Data.Value.Value = (double)(uintptr_t)((float)(int)(uintptr_t)(local_20));
      (pUVar29->ForegroundColor).Data.Value.Alpha = (double)(uintptr_t)((float)(int)(uintptr_t)(local_8));
      (pUVar29->ForegroundColor).IsValidData = true;
      if (local_50.Data != (char *)0x0) {
        port_op_delete(local_50.Data);
      }
      if (local_a0.Data != (char *)0x0) {
        port_op_delete(local_a0.Data);
      }
      UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff724,pUVar29);
      local_8 = (UIWidget *)LineGraph__LineGraph(local_60);
      bVar20 = true;
      bVar19 = true;
      bVar18 = true;
      bVar17 = true;
      bVar16 = true;
      bVar15 = true;
      bVar13 = true;
      bVar12 = true;
      bVar11 = true;
      bVar10 = true;
      bVar9 = true;
      bVar8 = true;
      bVar7 = true;
    }
    local_bc._pad_0x0_0 = (int)&vftable_48;
    bVar21 = true;
    bVar14 = true;
    local_bc.Data = (SharedPtr_L_UIWidget_G_ *)0x0;
    local_bc.Size = 0;
    local_bc.Capacity = 0;
    pfVar30 = (float *)LayoutAttributes__LayoutAttributes(&local_190);
    *(undefined1 *)(pfVar30 + 0xb) = 1;
    pUVar29 = (UIAttributes *)UIAttributes__UIAttributes(&local_530,param_1);
    local_50.Length = 0;
    uStack_40 = 0x3ff0000000000000;
    uStack_38 = 0x3ff0000000000000;
    pcStack_44 = (code *)0x0;
    (pUVar29->FillProportion).Getter.Callee = (void *)0x0;
    (pUVar29->FillProportion).Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0;
    *(undefined4 *)&(pUVar29->FillProportion).Value.X = 0;
    *(undefined4 *)((int)&(pUVar29->FillProportion).Value.X + 4) = 0x3ff00000;
    (pUVar29->FillProportion).Value.Y = 1.0;
    pUVar23 = local_2c;
    pDVar31 = (Data *)(uintptr_t)(UILayout__Data__Add((Data *)&local_bc,local_8));
    pDVar31 = (Data *)(uintptr_t)(UILayout__Data__Add(pDVar31,pUVar23));
    fVar50 = *pfVar30;
    fVar40 = pfVar30[1];
    pvVar41 = *(void **)&(pfVar30[2]);
    p_Var42 = *(_func___cdecl_Color_void_ptr *)&(pfVar30[3]);
    fVar43 = pfVar30[4];
    fVar44 = pfVar30[5];
    fVar45 = pfVar30[6];
    fVar46 = pfVar30[7];
    fVar47 = pfVar30[8];
    fVar48 = pfVar30[9];
    fVar49 = pfVar30[10];
    fVar51 = pfVar30[0xb];
    iStack_808 = 0x5f712c;
    UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff800,pUVar29);
    UVar4.Enabled.Getter.Callee = in_stack_fffff82c;
*(uint32_t *)&auVar32 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff800) + 4)));
*(uint32_t *)&auVar33 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff800) + 32)));
    UVar4.Parent = (Manager *)(*(uint32_t*)&(in_stack_fffff800));
    UVar4.Tag.Data = (char *)(*(uint32_t*)&(auVar32));
    UVar4.Tag.Capacity = (*(uint32_t*)((char*)&(auVar32)+4));
    UVar4.Tag.Length = (*(uint32_t*)((char*)&(auVar32)+8));
    uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff800) + 16)),0);
    uVar35 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff800) + 16)),8);
    UVar4.Location.Getter.Callee = (void *)(int)uVar34;
    UVar4.Location.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar4.Location.Value.X = (int)uVar35;
    UVar4.Location.Value.Y = (int)((ulonglong)uVar35 >> 0x20);
    UVar4.Visible.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar33));
    UVar4.Visible.Getter.CallbackFunction =
         (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar33)) >> 0x20);
    UVar4.Visible.Value = (bool)auVar33[8];
    (*(uint24_t *)((char *)&(UVar4.Visible) + 9)) = (*(uint24_t*)((char*)&(auVar33)+9));
    UVar4.Enabled.Getter.CallbackFunction = in_stack_fffff830;
    UVar4.Enabled.Value = (bool)in_stack_fffff834[0];
    (*(uint24_t *)((char *)&(UVar4.Enabled) + 9)) = (*(uint24_t*)((char*)&(in_stack_fffff834)+1));
    uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff834) + 4)),0);
    uVar35 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff834) + 4)),8);
    UVar4.DesiredSize.Getter.Callee = (void *)(int)uVar34;
    UVar4.DesiredSize.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar4.DesiredSize.Value.X = (int)uVar35;
    UVar4.DesiredSize.Value.Y = (int)((ulonglong)uVar35 >> 0x20);
    uVar34 = SUB248((*(uint32_t *)((char *)&(in_stack_fffff834) + 20)),0);
*(uint32_t *)&auVar36 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffff834) + 20)),8));
    UVar4.FillProportion.Getter.Callee = (void *)(int)uVar34;
    UVar4.FillProportion.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar4.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar36));
    UVar4.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar36)+8));
    UVar4.HitTestShape.Getter.Callee = in_stack_fffff860;
    UVar4.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)in_stack_fffff864);
    UVar4.HitTestShape.Value = (int)in_stack_fffff868;
    (*(uint32_t *)((char *)&(UVar4) + 108)) = (uint32_t)(uintptr_t)(in_stack_fffff86c);
    LVar6.Margin.Getter.CallbackFunction = *(_func___cdecl_Vec2_L_int_G__void_ptr *)&(fVar40);
    LVar6.Margin.Getter.Callee = *(void **)&(fVar50);
    LVar6.Margin.Value.X = (int)pvVar41;
    LVar6.Margin.Value.Y = (int)p_Var42;
    LVar6.Padding.Getter.Callee = *(void **)&(fVar43);
    LVar6.Padding.Getter.CallbackFunction = *(_func___cdecl_int_void_ptr *)&(fVar44);
    LVar6.Padding.Value = (int)fVar45;
    LVar6.Background__HasBackground.Getter.Callee = *(void **)&(fVar46);
    LVar6.Background__HasBackground.Getter.CallbackFunction = *(_func___cdecl_bool_void_ptr *)&(fVar47);
    (*(uint32_t *)((char *)&(LVar6.Background__HasBackground) + 8)) = fVar48;
    (*(uint32_t *)((char *)&(LVar6) + 40)) = fVar49;
    (*(uint32_t *)((char *)&(LVar6) + 44)) = fVar51;
    pUVar23 = (UIWidget *)UIRowLayout__UIRowLayout(local_30,UVar4,LVar6,pDVar31);
  }
  if (bVar21) {
    UIAttributes___UIAttributes(&local_530);
  }
  if (bVar14) {
    Darray_L_util__SharedPtr_L_UIWidget_G___G___dtor(&local_bc);
  }
  if (bVar15) {
    UIAttributes___UIAttributes(&local_678);
  }
  if ((bVar16) &&
     (local_160._pad_0x0_0 = (int)&vftable_5,
     (void *)local_160._pad_0x4_1 != (void *)0x0)) {
    port_op_delete((void *)local_160._pad_0x4_1);
    local_160._pad_0x4_1 = 0;
  }
  if (bVar17) {
    LineGraph__Args___Args(local_3e8);
  }
  if (bVar18) {
    if (local_104 != (void *)0x0) {
      port_op_delete(local_104);
      local_104 = (void *)0x0;
    }
    if (local_110[0] != (void *)0x0) {
      port_op_delete(local_110[0]);
      local_110[0] = (void *)0x0;
    }
  }
  if ((bVar19) && (local_6c.Data != (char *)0x0)) {
    port_op_delete(local_6c.Data);
    local_6c.Data = (char *)0x0;
  }
  if (bVar20) {
    if (local_11c != (void *)0x0) {
      port_op_delete(local_11c);
      local_11c = (void *)0x0;
    }
    if (local_128[0] != (void *)0x0) {
      port_op_delete(local_128[0]);
      local_128[0] = (void *)0x0;
    }
  }
  if (bVar8) {
    if (local_134 != (void *)0x0) {
      port_op_delete(local_134);
      local_134 = (void *)0x0;
    }
    if (local_140[0] != (void *)0x0) {
      port_op_delete(local_140[0]);
      local_140[0] = (void *)0x0;
    }
  }
  if ((bVar9) && (local_84.Data != (char *)0x0)) {
    port_op_delete(local_84.Data);
    local_84.Data = (char *)0x0;
  }
  if ((bVar10) && (local_c8.Data != (char *)0x0)) {
    port_op_delete(local_c8.Data);
    local_c8.Data = (char *)0x0;
  }
  if ((bVar11) && (local_d4.Data != (char *)0x0)) {
    port_op_delete(local_d4.Data);
    local_d4.Data = (char *)0x0;
  }
  if ((bVar12) && (local_ec.Data != (char *)0x0)) {
    port_op_delete(local_ec.Data);
  }
  if ((bVar13) && (local_e0.Data != (char *)0x0)) {
    port_op_delete(local_e0.Data);
    local_e0.Data = (char *)0x0;
  }
  if ((local_f8.Data != (char *)0x0) && (bVar7)) {
    port_op_delete(local_f8.Data);
  }
  return pUVar23;
}

//==== 005f73c0 GetPointerPropertyChoices_005f73c0 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   ExplosiveModule__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

ClassMember * 
ExplosiveModule__GetPointerPropertyChoices
          (ExplosiveModule *this,ClassMember *param_1,SerializationManagerInterface *param_2)

{
  char *pcVar1;
  SerializationManagerInterface SVar2;
  int in_stack_0000000c;
  undefined1 uVar3;
  
  if (*(int *)&param_2[1] < 1) {
    SVar2 = *(SerializationManagerInterface *)&cde_l2_0b2b1c9f_NullString;
  }
  else {
    SVar2 = *param_2;
  }
  for (pcVar1 = "ExplosiveComposition";
      (pcVar1[(int)(*(int *)&SVar2 + -0x92a418)] != '\0' || (*pcVar1 != '\0')); pcVar1 = pcVar1 + 1) {
    if (pcVar1[(int)(*(int *)&SVar2 + -0x92a418)] != *pcVar1) {
      if (*(int *)&param_2[1] < 1) {
        SVar2 = *(SerializationManagerInterface *)&cde_l2_0b2b1c9f_NullString;
      }
      else {
        SVar2 = *param_2;
      }
      for (pcVar1 = "ShrapnelComposition";
          (pcVar1[(int)(*(int *)&SVar2 + -0x92a430)] != '\0' || (*pcVar1 != '\0')); pcVar1 = pcVar1 + 1)
      {
        if (pcVar1[(int)(*(int *)&SVar2 + -0x92a430)] != *pcVar1) {
          (param_1->Name).Data =
               (char *)&vftable_85;
          (param_1->Name).Capacity = 0;
          (param_1->Name).Length = 0;
          *(undefined4 *)&param_1->Type = 0;
          return param_1;
        }
      }
      uVar3 = false;
LAB_005f73fa:
      GetMaterials((DataParser *)param_1,in_stack_0000000c,(bool)uVar3);
      return param_1;
    }
  }
  uVar3 = 8;
  goto LAB_005f73fa;
}





//==== 005f7470 GetReflectionInfo_005f7470 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   ExplosiveModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall ExplosiveModule__GetReflectionInfo(ExplosiveModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_77147c0e__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_77147c0e__thread_safe_static_guard_0__);
    if ( cde_l2_77147c0e__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_e74953b5_ReflectionInfo) = &vftable_243;
      _Init_thread_footer(& cde_l2_77147c0e__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_e74953b5_ReflectionInfo;
}





//==== 005f7480 scalar_deleting_destructor_005f7480 ====


/* public: virtual void * __thiscall ExplosiveModule:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall ExplosiveModule___scalar_deleting_destructor(ExplosiveModule *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined ** *)&(this->Detonator).MinimumRange_km = &vftable_5;
  pvVar1 = *(void **)((int)&(this->Detonator).MinimumRange_km + 4);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    *(undefined4 *)((int)&(this->Detonator).MinimumRange_km + 4) = 0;
  }
  Module___Module((Module *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0xd0);
  }
  return this;
}





//==== 005f74d0 GetTypeName_005f74d0 ====


/* public: virtual class util__Str_L_char_G_  ExplosiveModule__ReflectionInfoStruct_class_ExplosiveModule___GetTypeName(void)const  */

Str_L_char_G_ * 
ExplosiveModule__ReflectionInfoStruct_class_ExplosiveModule___GetTypeName
          (ReflectionInfoStruct_L_class_ExplosiveModule_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"ExplosiveModule");
  return __return_storage_ptr__;
}





//==== 005f74f0 GetMembers_005f74f0 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   ExplosiveModule__ReflectionInfoStruct_class_ExplosiveModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
ExplosiveModule__ReflectionInfoStruct_class_ExplosiveModule___GetMembers__o2
          (ReflectionInfoStruct_L_class_ExplosiveModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_b388faa7__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_b388faa7__thread_safe_static_guard_0__),
      cde_l2_b388faa7__thread_safe_static_guard_0__ == -1)) {
     cde_l2_3b70a15c_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_b388faa7__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_3b70a15c_Count);
  iVar3 = 0;
  if (0 <  cde_l2_3b70a15c_Count) {
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
    } while (iVar3 <  cde_l2_3b70a15c_Count);
  }
  return in_stack_00000004;
}





//==== 005f7630 GetMember_005f7630 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   ExplosiveModule__ReflectionInfoStruct_class_ExplosiveModule___GetMember(class util__Str_L_char_G_
   const &)const  */

Str_L_char_G_ * 
ExplosiveModule__ReflectionInfoStruct_class_ExplosiveModule___GetMember__o2
          (ReflectionInfoStruct_L_class_ExplosiveModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_32219517__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_32219517__thread_safe_static_guard_0__),
      cde_l2_32219517__thread_safe_static_guard_0__ == -1)) {
     cde_l2_87030950_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_32219517__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_87030950_Count) {
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
LAB_005f76bd:
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
          if (cVar3 == '\0') goto LAB_005f76bd;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_87030950_Count);
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





//==== 005f77d0 GetFactory_005f77d0 ====


/* public: virtual class util__Reflectable * (__cdecl*
   ExplosiveModule__ReflectionInfoStruct_class_ExplosiveModule___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall ExplosiveModule__ReflectionInfoStruct_class_ExplosiveModule___GetFactory__o2
          (ReflectionInfoStruct_L_class_ExplosiveModule_G_ *this)

{
  return StaticFactory;
}





//==== 005f77e0 MethodCaller__private__void___thiscall_ExplosiveCompartment__QueueDetonation_void__ ====


/* public: static void __cdecl util__DelegateFactory_L_struct_ExplosiveCompartment_Cvoid_G___MethodCaller_L__private_void__thiscall_ExplosiveCompartment__QueueDetonation_void__G_(void *) */

void __cdecl
util__DelegateFactory_struct_ExplosiveCompartment_void___MethodCaller__private__void___thiscall_ExplosiveCompartment__QueueDetonation_void(void *param_1)

{
  *(undefined1 *)((int)param_1 + 0x110) = 1;
  return;
}





//==== 005f77f0 MethodCallerConst__public__double___thiscall_ExplosiveModule__GetChartShrapnelRadius_m_double_const__0__ ====


/* public: static double __cdecl util__DelegateFactory_L_class_ExplosiveModule_Cdouble_Cdouble_G___MethodCallerConst_L__public_double__thiscall_ExplosiveModule__GetChartShrapnelRadius_m_double_const_C0__G_(void const * const,double) */

double __cdecl
util__DelegateFactory_class_ExplosiveModule_double_double___MethodCallerConst__public__double___thiscall_ExplosiveModule__GetChartShrapnelRadius_m_double_const__0
          (void *param_1,double param_2)

{
  double dVar1;
  undefined4 in_stack_00000008;
  
  dVar1 = ExplosiveModule__GetChartShrapnelRadius_m
                    ((ExplosiveModule *)param_1,(double)CONCAT44((*(uint32_t*)&(param_2)),in_stack_00000008));
}





//==== 005f7810 MethodCallerConst__public__struct_util__Range_double____thiscall_ExplosiveModule__GetChartXRanges_void_const__0__ ====


/* public: static struct util__Range_L_double_G_ __cdecl util__DelegateFactory_L_class_ExplosiveModule_Cstructutil__Range_L_double_G__G___MethodCallerConst_L__public_struct_util__Range_L_double_G___thiscallExplosiveModule__GetChartXRanges_void_const_C0__G_(void const *
   const) */

Range_L_double_G_ * __cdecl
util__DelegateFactory_class_ExplosiveModule_struct_util__Range_double_____MethodCallerConst__public__struct_util__Range_double____thiscall_ExplosiveModule__GetChartXRanges_void_const__0
          (Range_L_double_G_ *__return_storage_ptr__,void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Range_L_double_G_ *pRVar4;
  Range_L_double_G_ RStack_14;
  
  pRVar4 = ExplosiveModule__GetChartXRanges((ExplosiveModule *)param_1,&RStack_14);
  uVar1 = *(undefined4 *)((int)&pRVar4->Lower + 4);
  uVar2 = *(undefined4 *)&pRVar4->Upper;
  uVar3 = *(undefined4 *)((int)&pRVar4->Upper + 4);
  *(undefined4 *)&__return_storage_ptr__->Lower = *(undefined4 *)&pRVar4->Lower;
  *(undefined4 *)((int)&__return_storage_ptr__->Lower + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Upper = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Upper + 4) = uVar3;
  return __return_storage_ptr__;
}





//==== 005f7830 MethodCallerConst__public__struct_util__Range_double____thiscall_ExplosiveModule__GetChartYRanges_void_const__0__ ====


/* public: static struct util__Range_L_double_G_ __cdecl util__DelegateFactory_L_class_ExplosiveModule_Cstructutil__Range_L_double_G__G___MethodCallerConst_L__public_struct_util__Range_L_double_G___thiscallExplosiveModule__GetChartYRanges_void_const_C0__G_(void const *
   const) */

Range_L_double_G_ * __cdecl
util__DelegateFactory_class_ExplosiveModule_struct_util__Range_double_____MethodCallerConst__public__struct_util__Range_double____thiscall_ExplosiveModule__GetChartYRanges_void_const__0
          (Range_L_double_G_ *__return_storage_ptr__,void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Range_L_double_G_ *pRVar4;
  Range_L_double_G_ RStack_14;
  
  pRVar4 = ExplosiveModule__GetChartYRanges((ExplosiveModule *)param_1,&RStack_14);
  uVar1 = *(undefined4 *)((int)&pRVar4->Lower + 4);
  uVar2 = *(undefined4 *)&pRVar4->Upper;
  uVar3 = *(undefined4 *)((int)&pRVar4->Upper + 4);
  *(undefined4 *)&__return_storage_ptr__->Lower = *(undefined4 *)&pRVar4->Lower;
  *(undefined4 *)((int)&__return_storage_ptr__->Lower + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Upper = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Upper + 4) = uVar3;
  return __return_storage_ptr__;
}





//==== 005f7850 MethodCallerConst__public__class_util__Str_char____thiscall_ExplosiveModule__GetShrapnelInfo_void_const__0__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_classExplosiveModule_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__public_classutil__Str_L_char_G___thiscall_ExplosiveModule__GetShrapnelInfo_void_const_C0__G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_class_ExplosiveModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_ExplosiveModule__GetShrapnelInfo_void_const__0
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(ExplosiveModule__GetShrapnelInfo((ExplosiveModule *)param_1,&SStack_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 005f7890 MethodCallerConst__public__bool___thiscall_ExplosiveModule__HasShrapnel_void_const__0__ ====


/* public: static bool __cdecl util__DelegateFactory_L_class_ExplosiveModule_Cbool_G___MethodCallerConst_L__public_bool__thiscall_ExplosiveModule__HasShrapnel_void_const_C0__G_(void const * const) */

bool __cdecl
util__DelegateFactory_class_ExplosiveModule_bool___MethodCallerConst__public__bool___thiscall_ExplosiveModule__HasShrapnel_void_const__0
          (void *param_1)

{
  int iVar1;
  
  iVar1 = ExplosiveModule__GetShrapnelCount((ExplosiveModule *)param_1);
}





//==== 005f78a0 operator___005f78a0 ====


/* public: struct util__PhysicalState_L_structutil__Vec3_L_double_G__G_ *  util__Maybe_L_struct_util__PhysicalState_L_structutil__Vec3_L_double_G__G__G___op_arrow(void) */

PhysicalState_L_struct_util__Vec3_L_double_G___G_ * 
util__Maybe_struct_util__PhysicalState_struct_util__Vec3_double_______operator
          (Maybe_L_struct_util__PhysicalState_L_struct_util__Vec3_L_double_G___G___G_ *this)

{
  if (*(char *)&(this[0x30]) == 0) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,"IsValid()",
              (char *)0x0);
    DebugBreak();
  }
  return (PhysicalState_L_struct_util__Vec3_L_double_G___G_ *)this;
}





//==== 005f82e0 EndOfSessionResolution_005f82e0 ====

/* public: virtual bool __thiscall NuclearPayloadCompartment__EndOfSessionResolution(void) */

bool __thiscall NuclearPayloadCompartment__EndOfSessionResolution(NuclearPayloadCompartment *this)

{
  this->CountupTimer_s = 0.0;
  *(undefined1 *)&this->_pad_0x68_26 = 0;
  this->_pad_0x60_24 = 0;
  this->_pad_0x64_25 = 0;
  return true;
}

//==== 005f82f0 GetAverageShrapnelMass_kg ====


/* public: double __thiscall ExplosiveModule__GetAverageShrapnelMass_kg(void)const  */

double __thiscall ExplosiveModule__GetAverageShrapnelMass_kg(ExplosiveModule *this)

{
  int iVar1;
  
  iVar1 = GetShrapnelCount(this);
  if (0.0 < (double)iVar1) {
    iVar1 = GetShrapnelCount(this);
    return (this->Detonator).HardRange_km / (double)iVar1;
  }
  return 0.0;
}





//==== 005f8350 GetChartShrapnelRadius_m ====

/* public: double __thiscall ExplosiveModule__GetChartShrapnelRadius_m(double)const  */

double __thiscall ExplosiveModule__GetChartShrapnelRadius_m(ExplosiveModule *this,double param_1)

{
  int iVar1;
  float10 fVar2;
  double dVar3;
  double dVar4;
  double local_50;
  
  if (param_1 <= 0.0) {
    *(uint32_t *)&local_50 = 0.0;
  }
  else {
    *(uint32_t *)&local_50 = *(double *)&this[1]._pad_0x8_2 / param_1;
  }
  dVar4 = Material__GetCylindricalExplosiveVelocity_m__s
                    ((Material *)(this->Detonator)._pad_0x8_2,*(double *)&this->Detonator,
                     (this->Detonator).HardRange_km);
  dVar4 = (dVar4 / 1000.0) * local_50 * 1000.0;
  iVar1 = GetShrapnelCount(this);
  if (iVar1 < 1) {
    dVar3 = 1.0;
  }
  else {
    iVar1 = GetShrapnelCount(this);
    fVar2 = (float10)(**(code **)(this->_pad_0x0_0 + 0xa8))();
    dVar3 = (double)((float10)(((double)iVar1 * 33510.32163829113) / 10.0) /
                    (fVar2 * (float10)3.141592653589793));
    libm_sse2_sqrt_precise(0.0);
  }
  if (dVar3 < dVar4) {
    dVar4 = 0.0;
  }
  return dVar4;
}

//==== 005f8460 GetChartXRanges ====


/* public: struct util__Range_L_double_G_ __thiscall ExplosiveModule__GetChartXRanges(void)const  */

Range_L_double_G_ * __thiscall
ExplosiveModule__GetChartXRanges(ExplosiveModule *this,Range_L_double_G_ *__return_storage_ptr__)

{
  __return_storage_ptr__->Lower = 0.0;
  __return_storage_ptr__->Upper = 10.0;
  return __return_storage_ptr__;
}





//==== 005f8480 GetChartYRanges ====

/* public: struct util__Range_L_double_G_ __thiscall ExplosiveModule__GetChartYRanges(void)const  */

Range_L_double_G_ * __thiscall
ExplosiveModule__GetChartYRanges(ExplosiveModule *this,Range_L_double_G_ *__return_storage_ptr__)

{
  int iVar1;
  float10 fVar2;
  double dVar3;
  
  iVar1 = GetShrapnelCount(this);
  if (iVar1 < 1) {
    dVar3 = 1.0;
  }
  else {
    iVar1 = GetShrapnelCount(this);
    fVar2 = (float10)(**(code **)(this->_pad_0x0_0 + 0xa8))();
    dVar3 = (double)((float10)(((double)iVar1 * 33510.32163829113) / 10.0) /
                    (fVar2 * (float10)3.141592653589793));
    libm_sse2_sqrt_precise(0.0);
  }
  __return_storage_ptr__->Upper = dVar3;
  __return_storage_ptr__->Lower = 0.0;
  if (dVar3 < 0.0) {
    __return_storage_ptr__->Lower = dVar3;
    __return_storage_ptr__->Upper = 0.0;
  }
  return __return_storage_ptr__;
}

//==== 005f8520 GetShrapnelCount ====

/* public: int __thiscall ExplosiveModule__GetShrapnelCount(void)const  */

int __thiscall ExplosiveModule__GetShrapnelCount(ExplosiveModule *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double local_10;
  
  *(uint32_t *)&local_10 = *(double *)&this->ShrapnelComposition * 3.141592653589793;
  dVar1 = *(double *)&this->Detonator / *(double *)((this->Detonator)._pad_0x8_2 + 0x30);
  dVar2 = dVar1 / local_10;
  libm_sse2_sqrt_precise(0.0);
  dVar3 = ((this->Detonator).HardRange_km /
           *(double *)(*(int *)&(this->Detonator).ActivationRange_km + 0x30) + dVar1) / local_10;
  libm_sse2_sqrt_precise(0.0);
  dVar1 = dVar3 - dVar2;
  libm_sse2_pow_precise(0.0,0.0);
  *(uint32_t *)&local_10 = dVar1 * 0.2284;
  dVar1 = dVar2 + dVar2;
  libm_sse2_pow_precise(0.0,0.0);
  dVar1 = local_10 * dVar1 * ((dVar3 - dVar2) / (dVar2 + dVar2) + 1.0);
  *(uint32_t *)&local_10 = (this->Detonator).HardRange_km / (dVar1 * dVar1 * 4.0);
  dVar1 = util__Floor(&local_10);
  return (int)dVar1;
}

//==== 005f87c0 GetUIActions_005f87c0 ====


/* public: virtual class util__Darray_L_structutil__tuple5_L_void___cdecl_P__void__Cclass_util__Str_L_char_G__Cclassutil__Str_L_char_G__Cclassutil__Delegate_L_void_G__Cclassutil__Str_L_char_G__G__G_
   __thiscall ExplosiveCompartment__GetUIActions(void) */

void __thiscall ExplosiveCompartment__GetUIActions(ExplosiveCompartment *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  LocStr *pLVar2;
  Str_L_char_G_ *pSVar3;
  int iVar4;
  Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G___G_
  *in_stack_00000004;
  void *apvStack_c0 [3];
  void *pvStack_b4;
  void *apvStack_a8 [3];
  void *pvStack_9c;
  Str_L_char_G_ SStack_90;
  Str_L_char_G_ SStack_84;
  Str_L_char_G_ SStack_78;
  Str_L_char_G_ SStack_6c;
  code *pcStack_60;
  Str_L_char_G_ SStack_5c;
  Str_L_char_G_ SStack_50;
  ExplosiveCompartment *pEStack_44;
  code *pcStack_40;
  Str_L_char_G_ SStack_3c;
  Str_L_char_G_ SStack_30;
  Str_L_char_G_ SStack_24;
  Str_L_char_G_ SStack_18;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 =
       &vftable_169;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Str_char___Str_char(&SStack_90,"ExplosiveUI Detonate Tooltip");
  util__Str_char___Str_char(&SStack_30,"ExplosiveUI Detonate");
  SStack_24.Data = (char *)0x0;
  SStack_24.Capacity = 0;
  SStack_24.Length = 0;
  SStack_18.Data = (char *)0x0;
  SStack_18.Capacity = 0;
  SStack_18.Length = 0;
  util__Str_char___Str_char(&SStack_84,"Detonate");
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_c0,&SStack_90,&SStack_24);
  pSVar3 = util__LocStr__operator__o3(pLVar2);
  util__Str_char___Str_char(&SStack_78,pSVar3);
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_a8,&SStack_30,&SStack_18);
  pSVar3 = util__LocStr__operator__o3(pLVar2);
  util__Str_char___Str_char(&SStack_6c,pSVar3);
  pcStack_60 = (code *)(uintptr_t) Icons__Explosion;
  util__Str_char___Str_char(&SStack_5c,&SStack_6c);
  util__Str_char___Str_char(&SStack_50,&SStack_78);
  pcStack_40 = (long long int (*)())(util__DelegateFactory_struct_ExplosiveCompartment_void___MethodCaller__private__void___thiscall_ExplosiveCompartment__QueueDetonation_void);
  pEStack_44 = this;
  util__Str_char___Str_char(&SStack_3c,&SStack_84);
  if (SStack_6c.Data != (char *)0x0) {
    port_op_delete(SStack_6c.Data);
  }
  if (SStack_78.Data != (char *)0x0) {
    port_op_delete(SStack_78.Data);
  }
  if (SStack_84.Data != (char *)0x0) {
    port_op_delete(SStack_84.Data);
  }
  iVar4 = *(int *)(in_stack_00000004 + 8);
  iStack_c = iVar4 + 1;
  util__Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__class_util__Delegate_void__class_util__Str_char_______SetSize(in_stack_00000004,&iStack_c);
  bVar1 = util__Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__class_util__Delegate_void__class_util__Str_char_______CheckSize(in_stack_00000004,iVar4);
  if (bVar1) {
    iVar4 = *(int *)(in_stack_00000004 + 8) * 0x30 + *(int *)(in_stack_00000004 + 4);
    *(code **)(iVar4 + -0x30) = pcStack_60;
    util__Str_char___operator__o8((Str_L_char_G_ *)(iVar4 + -0x2c),&SStack_5c);
    util__Str_char___operator__o8((Str_L_char_G_ *)(iVar4 + -0x20),&SStack_50);
    *(ExplosiveCompartment **)(iVar4 + -0x14) = pEStack_44;
    *(code **)(iVar4 + -0x10) = pcStack_40;
    util__Str_char___operator__o8((Str_L_char_G_ *)(iVar4 + -0xc),&SStack_3c);
  }
  if (SStack_3c.Data != (char *)0x0) {
    port_op_delete(SStack_3c.Data);
  }
  if (SStack_50.Data != (char *)0x0) {
    port_op_delete(SStack_50.Data);
  }
  if (SStack_5c.Data != (char *)0x0) {
    port_op_delete(SStack_5c.Data);
  }
  if (pvStack_9c != (void *)0x0) {
    port_op_delete(pvStack_9c);
    pvStack_9c = (void *)0x0;
  }
  if (apvStack_a8[0] != (void *)0x0) {
    port_op_delete(apvStack_a8[0]);
    apvStack_a8[0] = (void *)0x0;
  }
  if (SStack_18.Data != (char *)0x0) {
    port_op_delete(SStack_18.Data);
    SStack_18.Data = (char *)0x0;
  }
  if (pvStack_b4 != (void *)0x0) {
    port_op_delete(pvStack_b4);
    pvStack_b4 = (void *)0x0;
  }
  if (apvStack_c0[0] != (void *)0x0) {
    port_op_delete(apvStack_c0[0]);
    apvStack_c0[0] = (void *)0x0;
  }
  if (SStack_24.Data != (char *)0x0) {
    port_op_delete(SStack_24.Data);
    SStack_24.Data = (char *)0x0;
  }
  if (SStack_30.Data != (char *)0x0) {
    port_op_delete(SStack_30.Data);
    SStack_30.Data = (char *)0x0;
  }
  if (SStack_90.Data != (char *)0x0) {
    port_op_delete(SStack_90.Data);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 005f8a70 HasShrapnel ====


/* public: bool __thiscall ExplosiveModule__HasShrapnel(void)const  */

bool __thiscall ExplosiveModule__HasShrapnel(ExplosiveModule *this)

{
  int iVar1;
  
  iVar1 = GetShrapnelCount(this);
}





//==== 005f8a80 ManualTrigger ====


/* public: virtual void __thiscall FlareCompartment__ManualTrigger(void) */

void __thiscall FlareCompartment__ManualTrigger(FlareCompartment *this)

{
  *(undefined1 *)&this->BurnTime_s = 1;
  return;
}





//==== 005f8a90 OnDamage_005f8a90 ====


/* public: virtual struct DamagerContainer __thiscall ExplosiveCompartment__OnDamage(struct
   util__PhysicalState_L_structutil__Vec3_L_double_G__G_,struct util__Quaternion_L_double_G_,struct
   util__PhysicalState_L_structutil__Vec3_L_double_G__G_,struct DamagerContainer,struct CompartmentPiece
   *,int,double) */

DamagerContainer * __thiscall
ExplosiveCompartment__OnDamage(ExplosiveCompartment *this,DamagerContainer *__return_storage_ptr__)

{
  bool bVar1;
  undefined4 in_stack_00000088;
  undefined4 in_stack_0000008c;
  undefined4 in_stack_00000090;
  undefined4 in_stack_00000094;
  undefined4 in_stack_00000098;
  undefined4 in_stack_0000009c;
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a4;
  bool in_stack_000000a8;
  undefined4 in_stack_000000b0;
  undefined4 in_stack_000000b4;
  undefined4 in_stack_000000b8;
  undefined4 in_stack_000000bc;
  undefined4 in_stack_000000c0;
  undefined4 in_stack_000000c4;
  undefined4 in_stack_000000c8;
  undefined4 in_stack_000000cc;
  bool in_stack_000000d0;
  undefined4 in_stack_000000d8;
  undefined4 in_stack_000000dc;
  undefined4 in_stack_000000e0;
  undefined4 in_stack_000000e4;
  undefined4 in_stack_000000e8;
  undefined4 in_stack_000000ec;
  undefined4 in_stack_000000f0;
  undefined4 in_stack_000000f4;
  bool in_stack_000000f8;
  bool in_stack_00000100;
  int in_stack_00000108;
  
  bVar1 = ArmorPlate__IsDestroyed((ArmorPlate *)(in_stack_00000108 + 0x150));
  if (!bVar1) {
    this->DetonationQueued = true;
  }
  *(undefined4 *)&(__return_storage_ptr__->Photons).Data.Energy_J = in_stack_00000088;
  *(undefined4 *)((int)&(__return_storage_ptr__->Photons).Data.Energy_J + 4) = in_stack_0000008c;
  *(undefined4 *)&(__return_storage_ptr__->Photons).Data.Radius_m = in_stack_00000090;
  *(undefined4 *)((int)&(__return_storage_ptr__->Photons).Data.Radius_m + 4) = in_stack_00000094;
  *(undefined4 *)&(__return_storage_ptr__->Photons).Data.SpreadAngle_radians = in_stack_00000098;
  *(undefined4 *)((int)&(__return_storage_ptr__->Photons).Data.SpreadAngle_radians + 4) =
       in_stack_0000009c;
  *(undefined4 *)&(__return_storage_ptr__->Photons).Data.Wavelength_nm = in_stack_000000a0;
  *(undefined4 *)((int)&(__return_storage_ptr__->Photons).Data.Wavelength_nm + 4) =
       in_stack_000000a4;
  (__return_storage_ptr__->Photons).IsValidData = in_stack_000000a8;
  *(undefined4 *)&(__return_storage_ptr__->Plasma).Data.Mass_kg = in_stack_000000b0;
  *(undefined4 *)((int)&(__return_storage_ptr__->Plasma).Data.Mass_kg + 4) = in_stack_000000b4;
  *(undefined4 *)&(__return_storage_ptr__->Plasma).Data.Radius_m = in_stack_000000b8;
  *(undefined4 *)((int)&(__return_storage_ptr__->Plasma).Data.Radius_m + 4) = in_stack_000000bc;
  *(undefined4 *)&(__return_storage_ptr__->Plasma).Data.SpreadAngle_radians = in_stack_000000c0;
  *(undefined4 *)((int)&(__return_storage_ptr__->Plasma).Data.SpreadAngle_radians + 4) =
       in_stack_000000c4;
  *(undefined4 *)&(__return_storage_ptr__->Plasma).Data.Velocity_km__s = in_stack_000000c8;
  *(undefined4 *)((int)&(__return_storage_ptr__->Plasma).Data.Velocity_km__s + 4) =
       in_stack_000000cc;
  (__return_storage_ptr__->Plasma).IsValidData = in_stack_000000d0;
  *(undefined4 *)&(__return_storage_ptr__->Matter).Data.Mass_kg = in_stack_000000d8;
  *(undefined4 *)((int)&(__return_storage_ptr__->Matter).Data.Mass_kg + 4) = in_stack_000000dc;
  *(undefined4 *)&(__return_storage_ptr__->Matter).Data.Radius_m = in_stack_000000e0;
  *(undefined4 *)((int)&(__return_storage_ptr__->Matter).Data.Radius_m + 4) = in_stack_000000e4;
  *(undefined4 *)&(__return_storage_ptr__->Matter).Data.Density_kg__m3 = in_stack_000000e8;
  *(undefined4 *)((int)&(__return_storage_ptr__->Matter).Data.Density_kg__m3 + 4) =
       in_stack_000000ec;
  *(undefined4 *)&(__return_storage_ptr__->Matter).Data.Velocity_km__s = in_stack_000000f0;
  *(undefined4 *)((int)&(__return_storage_ptr__->Matter).Data.Velocity_km__s + 4) =
       in_stack_000000f4;
  (__return_storage_ptr__->Matter).IsValidData = in_stack_000000f8;
  __return_storage_ptr__->Instakill = in_stack_00000100;
  return __return_storage_ptr__;
}





//==== 005f8d10 Render_005f8d10 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void  ModuleDiagram_L_classExplosiveModule_G___Render(void)const  */

void __thiscall
ModuleDiagram_class_ExplosiveModule___Render(ModuleDiagram_L_class_ExplosiveModule_G_ *this)

{
  undefined8 stack0xffffff44;
  undefined8 stack0xffffff72;
  undefined8 stack0xffffff73;
  int iVar1;
  int iVar2;
  int iVar3;
  Vec3_L_double_G_ VVar4;
  NormalShader *pNVar5;
  double dVar6;
  Vec2_L_int_G_ VVar7;
  double dVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_74 [4];
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  TransformStack TStack_46;
  ShaderStack SStack_45;
  uint uStack_44;
  
  uStack_44 = __security_cookie ^ (uint)auStack_74;
  pNVar5 = NormalShader__GetStatic();
  Graphics__ShaderStack__ShaderStack(&SStack_45,(Shader *)pNVar5);
  UIWidget__GetTrueSize((UIWidget *)this,&VVar7);
  iVar1 = *(int *)(this + 0x168);
  dStack_68 = (double)CONCAT44((*(uint32_t*)((char*)&(dStack_68)+4)),iVar1);
  iVar2 = *(int *)VVar7.X;
  iVar3 = ((int *)VVar7.X)[1];
  dVar6 = (*(double *)(iVar1 + 0x80) / *(double *)(*(int *)(iVar1 + 0x88) + 0x30) +
          *(double *)(iVar1 + 0x90) / *(double *)(*(int *)(iVar1 + 0x98) + 0x30)) /
          (*(double *)(iVar1 + 0x78) * 3.141592653589793);
  libm_sse2_sqrt_precise(0.0);
  dStack_70 = (double)iVar2 / (dVar6 + dVar6);
  Graphics__TransformStack__TransformStack(&TStack_46,Style__Default);
  dVar6 = (double)(iVar3 / 2 + 0x14);
  VVar4.Y = SUB84(dVar6,0);
  VVar4.X = (double)(iVar2 / 2);
  VVar4.Z = (int)((ulonglong)dVar6 >> 0x20);
  Graphics__Translate(VVar4);
  iVar1 = (*(uint32_t*)&(dStack_68));
  dStack_58 = *(double *)((*(uint32_t*)&(dStack_68)) + 0x78) * 3.141592653589793;
  dStack_60 = *(double *)((*(uint32_t*)&(dStack_68)) + 0x80) /
              *(double *)(*(int *)((*(uint32_t*)&(dStack_68)) + 0x88) + 0x30);
  dVar6 = dStack_60 / dStack_58;
  libm_sse2_sqrt_precise(0.0);
  dStack_68 = dVar6 * dStack_70;
  dVar6 = (*(double *)(iVar1 + 0x90) / *(double *)(*(int *)(iVar1 + 0x98) + 0x30) + dStack_60) /
          dStack_58;
  libm_sse2_sqrt_precise(0.0);
  dStack_70 = dVar6 * dStack_70;
  uVar9 = 0x3fe00000;
  uVar10 = 0;
  uVar11 = 0x3fe00000;
  glColor3d();
  DrawCircle((double)CONCAT44(uVar11,uVar10),0x24,true,0.0);
  dVar8 = 0.8;
  glColor3d();
  DrawCircle(0.5,0x24,true,0.0);
  dVar6 = 1.0;
  glColor3d(0x3ff0000000000000,0x3ff0000000000000);
  DrawAntialiasedCircle(dVar6,0x24,false,1.0,0.0);
  DrawAntialiasedCircle(dVar8,0x24,false,1.0,0.0);
  Graphics__TransformStack___TransformStack((TransformStack *)&stack0xffffff72);
  Graphics__ShaderStack___ShaderStack((ShaderStack *)&stack0xffffff73);
  __security_check_cookie(uVar9 ^ (uint)&stack0xffffff44);
  return;
}





//==== 005f91a0 StaticFactory_005f91a0 ====

/* public: static class util__Reflectable * __cdecl ExplosiveModule__ReflectionInfoStruct_L_class_ExplosiveModule_G___StaticFactory(void) */

Reflectable * __cdecl ExplosiveModule__ReflectionInfoStruct_class_ExplosiveModule___StaticFactory(void)

{
  Module *this;
  
  this = (Module *)(uintptr_t)(port_op_new(0xd0));
  if (this != (Module *)0x0) {
    memset(this,0,0xd0);
    Module__Module(this);
    this->_pad_0x0_0 = (int)&vftable_for_EditorReflectable__17;
    *(undefined4 *)&(this->GetTotalPowerUsage_W_MemoizedValue).field_0xc = (undefined4)(uintptr_t)vftable_for_util__RTTIBaseClass__17;
    this[2]._pad_0x4_1 = 0;
    this[2]._pad_0x8_2 = (int)(uintptr_t) (undefined **)(0);
    this[2]._pad_0xc_3 = 0;
    this[2]._pad_0x0_0 = (int)&vftable_241;
    return (Reflectable *)this;
  }
  return (Reflectable *)0x0;
}

//==== 005f9210 StaticFactory_005f9210 ====

/* public: static class util__Reflectable * __cdecl ProximityDetonator__ReflectionInfoStruct_L_class_ProximityDetonator_G___StaticFactory(void) */

Reflectable * __cdecl
ProximityDetonator__ReflectionInfoStruct_class_ProximityDetonator___StaticFactory(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x30));
  if (pRVar1 != (Reflectable *)0x0) {
    memset(pRVar1,0,0x30);
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_241;
  }
  return (Reflectable *)0x0;
}

//==== 005f9260 StaticGetMemberByIndex_005f9260 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   ExplosiveModule__ReflectionInfoStruct_class_ExplosiveModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
ExplosiveModule__ReflectionInfoStruct_class_ExplosiveModule___StaticGetMemberByIndex__o2
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_1973c28a__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_1973c28a__thread_safe_static_guard_0__);
    if ( cde_l2_1973c28a__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_07b2cc42_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096f314 = 0;
      _DAT_0096f318 = 0;
      _DAT_0096f31c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f320,"Unused");
      _DAT_0096f32c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f330,"SteamWorkshopID");
      _DAT_0096f33c = 6;
      _DAT_0096f340 = 0x10;
      _DAT_0096f344 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f348,"AStr");
      _DAT_0096f354 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f358,"Description");
      _DAT_0096f364 = 6;
      _DAT_0096f368 = 0x20;
      _DAT_0096f36c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f370,"AStr");
      _DAT_0096f37c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f380,"UsesCustomName");
      _DAT_0096f38c = 1;
      _DAT_0096f390 = 0x68;
      _DAT_0096f394 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f398,"bool");
      _DAT_0096f3a4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f3a8,"Length_m");
      _DAT_0096f3b4 = 4;
      _DAT_0096f3b8 = 0x78;
      _DAT_0096f3bc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f3c0,"double");
      _DAT_0096f3cc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f3d0,"ExplosiveMass_kg");
      _DAT_0096f3dc = 4;
      _DAT_0096f3e0 = 0x80;
      _DAT_0096f3e4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f3e8,"double");
      _DAT_0096f3f4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f3f8,"ExplosiveComposition");
      _DAT_0096f404 = 8;
      _DAT_0096f408 = 0x88;
      _DAT_0096f40c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f410,"Material");
      _DAT_0096f41c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f420,"ShrapnelMass_kg");
      _DAT_0096f42c = 4;
      _DAT_0096f430 = 0x90;
      _DAT_0096f434 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f438,"double");
      _DAT_0096f444 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f448,"ShrapnelComposition");
      _DAT_0096f454 = 8;
      _DAT_0096f458 = 0x98;
      _DAT_0096f45c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f460,"Material");
      _DAT_0096f46c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f470,"Detonator");
      _DAT_0096f47c = 10;
      _DAT_0096f480 = 0xa0;
      _DAT_0096f484 = 0x30;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f488,"ProximityDetonator");
      _DAT_0096f494 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f498,"TargetsShips");
      _DAT_0096f4a4 = 1;
      _DAT_0096f4a8 = 0x70;
      _DAT_0096f4ac = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f4b0,"bool");
      _DAT_0096f4bc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f4c0,"TargetsShots");
      _DAT_0096f4cc = 1;
      _DAT_0096f4d0 = 0x71;
      _DAT_0096f4d4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f4d8,"bool");
      _DAT_0096f4e4 = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_ExplosiveModule__ReflectionInfoStruct_class_ExplosiveModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_1973c28a__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_07b2cc42_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_0096f314 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_0096f318 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_0096f31c + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_0096f320 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0096f32c)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0096f32d)[iVar1];
  return __return_storage_ptr__;
}





//==== 005f9640 StaticGetMemberByIndex_005f9640 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   ProximityDetonator__ReflectionInfoStruct_class_ProximityDetonator___StaticGetMemberByIndex(int)
    */

ClassMember * __cdecl
ProximityDetonator__ReflectionInfoStruct_class_ProximityDetonator___StaticGetMemberByIndex__o2
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_a2e1c3cb__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_a2e1c3cb__thread_safe_static_guard_0__);
    if ( cde_l2_a2e1c3cb__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_2ac046a6_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096f5cc = 0;
      _DAT_0096f5d0 = 0;
      _DAT_0096f5d4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f5d8,"Unused");
      _DAT_0096f5e4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f5e8,"HardRange_km");
      _DAT_0096f5f4 = 4;
      _DAT_0096f5f8 = 0x10;
      _DAT_0096f5fc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f600,"double");
      _DAT_0096f60c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f610,"ActivationRange_km");
      _DAT_0096f61c = 4;
      _DAT_0096f620 = 0x18;
      _DAT_0096f624 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f628,"double");
      _DAT_0096f634 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f638,"MinimumRange_km");
      _DAT_0096f644 = 4;
      _DAT_0096f648 = 0x20;
      _DAT_0096f64c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f650,"double");
      _DAT_0096f65c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f660,"OverrideTimer_s");
      _DAT_0096f66c = 4;
      _DAT_0096f670 = 0x28;
      _DAT_0096f674 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f678,"double");
      _DAT_0096f684 = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_ProximityDetonator__ReflectionInfoStruct_class_ProximityDetonator___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_a2e1c3cb__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_2ac046a6_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_0096f5cc + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_0096f5d0 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_0096f5d4 + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_0096f5d8 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0096f5e4)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0096f5e5)[iVar1];
  return __return_storage_ptr__;
}





//==== 005f9840 StaticGetMemberCount_005f9840 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl ExplosiveModule__ReflectionInfoStruct_class_ExplosiveModule___StaticGetMemberCount(void) */

int __cdecl ExplosiveModule__ReflectionInfoStruct_class_ExplosiveModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_df310042__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_df310042__thread_safe_static_guard_0__);
    if ( cde_l2_df310042__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_a657937c_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096f12c = 0;
      _DAT_0096f130 = 0;
      _DAT_0096f134 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f138,"Unused");
      _DAT_0096f144 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f148,"SteamWorkshopID");
      _DAT_0096f154 = 6;
      _DAT_0096f158 = 0x10;
      _DAT_0096f15c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f160,"AStr");
      _DAT_0096f16c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f170,"Description");
      _DAT_0096f17c = 6;
      _DAT_0096f180 = 0x20;
      _DAT_0096f184 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f188,"AStr");
      _DAT_0096f194 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f198,"UsesCustomName");
      _DAT_0096f1a4 = 1;
      _DAT_0096f1a8 = 0x68;
      _DAT_0096f1ac = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f1b0,"bool");
      _DAT_0096f1bc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f1c0,"Length_m");
      _DAT_0096f1cc = 4;
      _DAT_0096f1d0 = 0x78;
      _DAT_0096f1d4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f1d8,"double");
      _DAT_0096f1e4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f1e8,"ExplosiveMass_kg");
      _DAT_0096f1f4 = 4;
      _DAT_0096f1f8 = 0x80;
      _DAT_0096f1fc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f200,"double");
      _DAT_0096f20c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f210,"ExplosiveComposition");
      _DAT_0096f21c = 8;
      _DAT_0096f220 = 0x88;
      _DAT_0096f224 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f228,"Material");
      _DAT_0096f234 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f238,"ShrapnelMass_kg");
      _DAT_0096f244 = 4;
      _DAT_0096f248 = 0x90;
      _DAT_0096f24c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f250,"double");
      _DAT_0096f25c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f260,"ShrapnelComposition");
      _DAT_0096f26c = 8;
      _DAT_0096f270 = 0x98;
      _DAT_0096f274 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f278,"Material");
      _DAT_0096f284 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f288,"Detonator");
      _DAT_0096f294 = 10;
      _DAT_0096f298 = 0xa0;
      _DAT_0096f29c = 0x30;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f2a0,"ProximityDetonator");
      _DAT_0096f2ac = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f2b0,"TargetsShips");
      _DAT_0096f2bc = 1;
      _DAT_0096f2c0 = 0x70;
      _DAT_0096f2c4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f2c8,"bool");
      _DAT_0096f2d4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f2d8,"TargetsShots");
      _DAT_0096f2e4 = 1;
      _DAT_0096f2e8 = 0x71;
      _DAT_0096f2ec = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f2f0,"bool");
      _DAT_0096f2fc = 0;
      atexit( private__static_int_const___cdecl_ExplosiveModule__ReflectionInfoStruct_class_ExplosiveModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_df310042__thread_safe_static_guard_0__);
    }
  }
  return 0xc;
}





//==== 005f9bd0 StaticGetMemberCount_005f9bd0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl ProximityDetonator__ReflectionInfoStruct_class_ProximityDetonator___StaticGetMemberCount(void) */

int __cdecl
ProximityDetonator__ReflectionInfoStruct_class_ProximityDetonator___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_4f4fba6a__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_4f4fba6a__thread_safe_static_guard_0__);
    if ( cde_l2_4f4fba6a__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_12981820_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096f4fc = 0;
      _DAT_0096f500 = 0;
      _DAT_0096f504 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f508,"Unused");
      _DAT_0096f514 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f518,"HardRange_km");
      _DAT_0096f524 = 4;
      _DAT_0096f528 = 0x10;
      _DAT_0096f52c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f530,"double");
      _DAT_0096f53c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f540,"ActivationRange_km");
      _DAT_0096f54c = 4;
      _DAT_0096f550 = 0x18;
      _DAT_0096f554 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f558,"double");
      _DAT_0096f564 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f568,"MinimumRange_km");
      _DAT_0096f574 = 4;
      _DAT_0096f578 = 0x20;
      _DAT_0096f57c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f580,"double");
      _DAT_0096f58c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f590,"OverrideTimer_s");
      _DAT_0096f59c = 4;
      _DAT_0096f5a0 = 0x28;
      _DAT_0096f5a4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f5a8,"double");
      _DAT_0096f5b4 = 0;
      atexit( private__static_int_const___cdecl_ProximityDetonator__ReflectionInfoStruct_class_ProximityDetonator___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_4f4fba6a__thread_safe_static_guard_0__);
    }
  }
  return 5;
}





//==== 005f9d80 StaticGetReflectionInfo_005f9d80 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct ExplosiveModule__ReflectionInfoStruct_L_classExplosiveModule_G_ * __cdecl
   ExplosiveModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_ExplosiveModule_G_ * __cdecl ExplosiveModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_77147c0e__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_77147c0e__thread_safe_static_guard_0__);
    if ( cde_l2_77147c0e__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_e74953b5_ReflectionInfo) = &vftable_243;
      _Init_thread_footer(& cde_l2_77147c0e__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_e74953b5_ReflectionInfo;
}





//==== 005f9de0 ToggleEnabled_005f9de0 ====


/* public: virtual void __thiscall PayloadCompartment__ToggleEnabled(void) */

void __thiscall PayloadCompartment__ToggleEnabled(PayloadCompartment *this)

{
  this->Disabled = this->Disabled == false;
  return;
}





//==== 005f9e00 GetReflectionInfo_005f9e00 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   CombustionMixtureSubModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall
CombustionMixtureSubModule__GetReflectionInfo(CombustionMixtureSubModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_9095a538__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_9095a538__thread_safe_static_guard_0__);
    if ( cde_l2_9095a538__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_b57356d2_ReflectionInfo) = &vftable_247;
      _Init_thread_footer(& cde_l2_9095a538__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_b57356d2_ReflectionInfo;
}





//==== 005f9e60 GetTypeName_005f9e60 ====


/* public: virtual class util__Str_L_char_G_ 
   CombustionMixtureSubModule__ReflectionInfoStruct_struct_CombustionMixtureSubModule___GetTypeName(void)const  */

Str_L_char_G_ * 
CombustionMixtureSubModule__ReflectionInfoStruct_struct_CombustionMixtureSubModule___GetTypeName
          (ReflectionInfoStruct_L_struct_CombustionMixtureSubModule_G_ *this,
          Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"CombustionMixtureSubModule");
  return __return_storage_ptr__;
}





//==== 005f9e80 GetMembers_005f9e80 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   CombustionMixtureSubModule__ReflectionInfoStruct_struct_CombustionMixtureSubModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
CombustionMixtureSubModule__ReflectionInfoStruct_struct_CombustionMixtureSubModule___GetMembers
          (ReflectionInfoStruct_L_struct_CombustionMixtureSubModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_7b4082bd__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_7b4082bd__thread_safe_static_guard_0__),
      cde_l2_7b4082bd__thread_safe_static_guard_0__ == -1)) {
     cde_l2_aa3c9c6e_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_7b4082bd__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_aa3c9c6e_Count);
  iVar3 = 0;
  if (0 <  cde_l2_aa3c9c6e_Count) {
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
    } while (iVar3 <  cde_l2_aa3c9c6e_Count);
  }
  return in_stack_00000004;
}





//==== 005f9fc0 GetMember_005f9fc0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   CombustionMixtureSubModule__ReflectionInfoStruct_struct_CombustionMixtureSubModule___GetMember(class util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
CombustionMixtureSubModule__ReflectionInfoStruct_struct_CombustionMixtureSubModule___GetMember
          (ReflectionInfoStruct_L_struct_CombustionMixtureSubModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_49a31ab1__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_49a31ab1__thread_safe_static_guard_0__),
      cde_l2_49a31ab1__thread_safe_static_guard_0__ == -1)) {
     cde_l2_cdc4a0b1_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_49a31ab1__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_cdc4a0b1_Count) {
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
LAB_005fa04d:
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
          if (cVar3 == '\0') goto LAB_005fa04d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_cdc4a0b1_Count);
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





//==== 005fa160 GetFactory_005fa160 ====


/* public: virtual class util__Reflectable * (__cdecl*
   CombustionMixtureSubModule__ReflectionInfoStruct_struct_CombustionMixtureSubModule___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall CombustionMixtureSubModule__ReflectionInfoStruct_struct_CombustionMixtureSubModule___GetFactory
          (ReflectionInfoStruct_L_struct_CombustionMixtureSubModule_G_ *this)

{
  return StaticFactory;
}





//==== 005fa170 GetClassID_005fa170 ====


/* public: virtual unsigned long __thiscall FlareModule__GetClassID(void)const  */

ulong __thiscall FlareModule__GetClassID(FlareModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_4e733384__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_4e733384__thread_safe_static_guard_0__);
    if ( cde_l2_4e733384__thread_safe_static_guard_0__ == -1) {
       cde_l2_a3ea3e16_ID =
           util__GetHash("FlareModule");
      _Init_thread_footer(& cde_l2_4e733384__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_a3ea3e16_ID;
}





//==== 005fa1d0 DememoizeAll_005fa1d0 ====


/* public: virtual void __thiscall NuclearPayloadModule__DememoizeAll(void)const  */

void __thiscall NuclearPayloadModule__DememoizeAll(NuclearPayloadModule *this)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  undefined4 *puVar2;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  Module__DememoizeAll((Module *)this);
  iStack_c = 0;
  iVar1 = (**(code **)(*(int *)&(this->GetOverallPossibleEnergy_J_MemoizedValue).Data + 0xc))();
  if (iStack_c < iVar1) {
    do {
      puVar2 = (undefined4 *)
               (**(code **)&((this->GetOverallPossibleEnergy_J_MemoizedValue).Data))(&iStack_c);
      (*(code *)*puVar2)();
      iStack_c = iStack_c + 1;
  iVar1 = (**(code **)(*(int *)&(this->GetOverallPossibleEnergy_J_MemoizedValue).Data + 0xc))();
    } while (iStack_c < iVar1);
  }
  (**(code **)((int)((this->GetOverallPossibleEnergy_J_MemoizedValue).Data + 0x10)))();
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 005fa240 GetGeneratedName_005fa240 ====

/* public: virtual class util__Str_L_char_G_ __thiscall FlareModule__GetGeneratedName(void)const  */

Str_L_char_G_ * __thiscall
FlareModule__GetGeneratedName(FlareModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined8 stack0xfffffed4;
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  Str_L_char_G_ SVar4;
  bool bVar5;
  LocStr *pLVar6;
  Str_L_char_G_ *__return_storage_ptr___00;
  Str_L_char_G_ *pSVar7;
  Str_L_char_G_ *pSVar8;
  Str_L_char_G_ *this_00;
  Str_L_char_G_ *pSVar9;
  Str_L_char_G_ *pSVar10;
  Str_L_char_G_ *pSVar11;
  double dVar12;
  char *in_stack_fffffed4;
  int in_stack_fffffed8;
  int iVar13;
  Str_L_char_G_ *__return_storage_ptr___01;
  Str_L_char_G_ *pSVar14;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  undefined4 uStack_e4;
  void *local_e0 [3];
  void *local_d4;
  void *local_c8 [3];
  void *local_bc;
  void *local_b0 [3];
  void *local_a4;
  Str_L_char_G_ local_98;
  Str_L_char_G_ local_8c;
  Str_L_char_G_ local_80;
  Str_L_char_G_ local_74;
  Str_L_char_G_ local_68;
  Str_L_char_G_ local_5c;
  Str_L_char_G_ local_50;
  Str_L_char_G_ local_44;
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  int local_8;
  
  util__Str_char___Str_char(&local_98,"ShipClass__Payload Flare");
  util__Str_char___Str_char(&local_50,"Space");
  util__Str_char___Str_char(&local_44,"Space");
  util__Str_char___Str_char(&local_38,"GetPowerOutput_W()");
  local_2c.Data = (char *)0x0;
  local_2c.Capacity = 0;
  local_2c.Length = 0;
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  local_20.Length = 0;
  local_14.Data = (char *)0x0;
  local_14.Capacity = 0;
  local_14.Length = 0;
  if ((char)((this->GetFlameColor_MemoizedValue).Data.Z == '\0')){
    iVar13 = *(int *)&(this->GetBurnTime_s_MemoizedValue).IsValidData;
    local_8 = iVar13 + 1;
    util__Darray_L_util__tuple2_L_Order__Type_Cint_G___G___SetSize
              ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)&this->GetBurnTime_s_MemoizedValue,&local_8
              );
    bVar5 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &this->GetBurnTime_s_MemoizedValue,iVar13);
    if (bVar5) {
      iVar13 = *(int *)((int)&(this->GetBurnTime_s_MemoizedValue).Data + 4);
      iVar2 = *(int *)&(this->GetBurnTime_s_MemoizedValue).IsValidData;
      *(code **)(iVar13 + -8 + iVar2 * 8) = (long long int (*)())(ChemicalReaction__GetEnergyDensity_J__kg_Clear);
      *(undefined4 *)(iVar13 + -4 + iVar2 * 8) = 0;
    }
    dVar12 = GetPowerOutput_W_MemoizedFunction();
    fStack_e8 = (float)CONCAT31((*(uint24_t*)((char*)&(fStack_e8)+1)),1);
    local_f0 = SUB84(dVar12,0);
    fStack_ec = (float)((ulonglong)dVar12 >> 0x20);
    (this->GetFlameColor_MemoizedValue).Data.X = local_f0;
    (this->GetFlameColor_MemoizedValue).Data.Y = fStack_ec;
    (this->GetFlameColor_MemoizedValue).Data.Z = fStack_e8;
    *(undefined4 *)&(this->GetFlameColor_MemoizedValue).IsValidData = uStack_e4;
    if ((char)((this->GetFlameColor_MemoizedValue).Data.Z == '\0')){
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  piVar3 = (int *)this[1]._pad_0x8_2;
  pLVar6 = (LocStr *)util__LocStr__LocStr((LocStr *)local_e0,&local_98,&local_2c);
  util__LocStr__operator__o3(pLVar6);
  pSVar14 = __return_storage_ptr__;
  pLVar6 = (LocStr *)util__LocStr__LocStr((LocStr *)local_c8,&local_50,&local_20);
  __return_storage_ptr___00 = util__LocStr__operator__o3(pLVar6);
  pSVar11 = &local_5c;
  __return_storage_ptr___01 = &local_8c;
  pSVar7 = (Str_L_char_G_ *)(**(code **)(uintptr_t)(*piVar3 + 0x48))();
  pSVar10 = &local_68;
  iVar13 = 0x5fa3c3;
  pLVar6 = (LocStr *)util__LocStr__LocStr((LocStr *)local_b0,&local_44,&local_14);
  pSVar8 = util__LocStr__operator__o3(pLVar6);
  pSVar9 = &local_74;
  GetUnitsOfType((Str_L_char_G_ *)&stack0xfffffed4,&local_38);
  uVar1 = (this->GetFlameColor_MemoizedValue).Data.Y;
  SVar4.Capacity = iVar13;
  SVar4.Data = (char *)in_stack_fffffed8;
  SVar4.Length = (int)pSVar9;
  this_00 = Print(&local_80,(double)CONCAT44(in_stack_fffffed4,uVar1),SVar4);
  pSVar9 = util__Str_char___operator(this_00,pSVar9,pSVar8);
  pSVar10 = util__Str_char___operator(pSVar9,pSVar10,pSVar7);
  pSVar11 = util__Str_char___operator(pSVar10,__return_storage_ptr___01,pSVar11);
  util__Str_char___operator(pSVar11,__return_storage_ptr___00,pSVar14);
  if (local_5c.Data != (char *)0x0) {
    port_op_delete(local_5c.Data);
    local_5c.Data = (char *)0x0;
  }
  if (local_68.Data != (char *)0x0) {
    port_op_delete(local_68.Data);
    local_68.Data = (char *)0x0;
  }
  if (local_74.Data != (char *)0x0) {
    port_op_delete(local_74.Data);
    local_74.Data = (char *)0x0;
  }
  if (local_80.Data != (char *)0x0) {
    port_op_delete(local_80.Data);
    local_80.Data = (char *)0x0;
  }
  if (local_a4 != (void *)0x0) {
    port_op_delete(local_a4);
    local_a4 = (void *)0x0;
  }
  if (local_b0[0] != (void *)0x0) {
    port_op_delete(local_b0[0]);
    local_b0[0] = (void *)0x0;
  }
  if (local_14.Data != (char *)0x0) {
    port_op_delete(local_14.Data);
    local_14.Data = (char *)0x0;
  }
  if (local_8c.Data != (char *)0x0) {
    port_op_delete(local_8c.Data);
    local_8c.Data = (char *)0x0;
  }
  if (local_bc != (void *)0x0) {
    port_op_delete(local_bc);
    local_bc = (void *)0x0;
  }
  if (local_c8[0] != (void *)0x0) {
    port_op_delete(local_c8[0]);
    local_c8[0] = (void *)0x0;
  }
  if (local_20.Data != (char *)0x0) {
    port_op_delete(local_20.Data);
    local_20.Data = (char *)0x0;
  }
  if (local_d4 != (void *)0x0) {
    port_op_delete(local_d4);
    local_d4 = (void *)0x0;
  }
  if (local_e0[0] != (void *)0x0) {
    port_op_delete(local_e0[0]);
    local_e0[0] = (void *)0x0;
  }
  if (local_2c.Data != (char *)0x0) {
    port_op_delete(local_2c.Data);
    local_2c.Data = (char *)0x0;
  }
  if (local_38.Data != (char *)0x0) {
    port_op_delete(local_38.Data);
    local_38.Data = (char *)0x0;
  }
  if (local_44.Data != (char *)0x0) {
    port_op_delete(local_44.Data);
    local_44.Data = (char *)0x0;
  }
  if (local_50.Data != (char *)0x0) {
    port_op_delete(local_50.Data);
    local_50.Data = (char *)0x0;
  }
  if (local_98.Data != (char *)0x0) {
    port_op_delete(local_98.Data);
  }
  return __return_storage_ptr__;
}

//==== 005fa5f0 GetShortName_005fa5f0 ====


/* public: virtual class util__Str_L_char_G_ __thiscall FlareModule__GetShortName(void)const  */

Str_L_char_G_ * __thiscall
FlareModule__GetShortName(FlareModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined8 stack0xffffff3c;
  undefined8 uVar1;
  int iVar2;
  Str_L_char_G_ SVar3;
  bool bVar4;
  LocStr *pLVar5;
  Str_L_char_G_ *pSVar6;
  Str_L_char_G_ *pSVar7;
  Str_L_char_G_ *this_00;
  Str_L_char_G_ *pSVar8;
  double dVar9;
  char *in_stack_ffffff3c;
  int in_stack_ffffff40;
  int iVar10;
  Str_L_char_G_ *__return_storage_ptr___00;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 uStack_90;
  void *apvStack_8c [3];
  void *pvStack_80;
  void *apvStack_74 [3];
  void *pvStack_68;
  Str_L_char_G_ SStack_5c;
  Str_L_char_G_ SStack_50;
  Str_L_char_G_ SStack_44;
  Str_L_char_G_ SStack_38;
  Str_L_char_G_ SStack_2c;
  Str_L_char_G_ SStack_20;
  Str_L_char_G_ SStack_14;
  int iStack_8;
  
  util__Str_char___Str_char(&SStack_5c,"ShipClass__Payload Flare");
  util__Str_char___Str_char(&SStack_38,"Space");
  util__Str_char___Str_char(&SStack_2c,"GetPowerOutput_W()");
  SStack_20.Data = (char *)0x0;
  SStack_20.Capacity = 0;
  SStack_20.Length = 0;
  SStack_14.Data = (char *)0x0;
  SStack_14.Capacity = 0;
  SStack_14.Length = 0;
  if ((char)((this->GetFlameColor_MemoizedValue).Data.Z == '\0')){
    iVar10 = *(int *)&(this->GetBurnTime_s_MemoizedValue).IsValidData;
    iStack_8 = iVar10 + 1;
    util__Darray_struct_util__tuple2_enum_Order__Type_int_____SetSize
              ((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)
               &this->GetBurnTime_s_MemoizedValue,&iStack_8);
    bVar4 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &this->GetBurnTime_s_MemoizedValue,iVar10);
    if (bVar4) {
      iVar10 = *(int *)((int)&(this->GetBurnTime_s_MemoizedValue).Data + 4);
      iVar2 = *(int *)&(this->GetBurnTime_s_MemoizedValue).IsValidData;
      *(code **)(iVar10 + -8 + iVar2 * 8) = (long long int (*)())(ChemicalReaction__GetEnergyDensity_J__kg_Clear);
      *(undefined4 *)(iVar10 + -4 + iVar2 * 8) = 0;
    }
    dVar9 = GetPowerOutput_W_MemoizedFunction(this);
    fStack_94 = (float)CONCAT31((*(uint24_t*)((char*)&(fStack_94)+1)),1);
    fStack_9c = SUB84(dVar9,0);
    fStack_98 = (float)((ulonglong)dVar9 >> 0x20);
    (this->GetFlameColor_MemoizedValue).Data.X = fStack_9c;
    (this->GetFlameColor_MemoizedValue).Data.Y = fStack_98;
    (this->GetFlameColor_MemoizedValue).Data.Z = fStack_94;
    *(undefined4 *)&(this->GetFlameColor_MemoizedValue).IsValidData = uStack_90;
    if ((char)((this->GetFlameColor_MemoizedValue).Data.Z == '\0')){
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  pLVar5 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_8c,&SStack_5c,&SStack_20);
  pSVar6 = util__LocStr__operator__o3(pLVar5);
  iVar10 = 0x5fa710;
  __return_storage_ptr___00 = __return_storage_ptr__;
  pLVar5 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_74,&SStack_38,&SStack_14);
  pSVar7 = util__LocStr__operator__o3(pLVar5);
  pSVar8 = &SStack_44;
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff3c,&SStack_2c);
  (*(uint32_t*)&(uVar1)) = (this->GetFlameColor_MemoizedValue).Data.X;
  (*(uint32_t*)((char*)&(uVar1)+4)) = (this->GetFlameColor_MemoizedValue).Data.Y;
  SVar3.Capacity = iVar10;
  SVar3.Data = (char *)in_stack_ffffff40;
  SVar3.Length = (int)pSVar8;
  this_00 = Print(&SStack_50,(double)CONCAT44(in_stack_ffffff3c,(int)((ulonglong)uVar1 >> 0x20)),
                  SVar3);
  pSVar8 = util__Str_char___operator(this_00,pSVar8,pSVar7);
  util__Str_char___operator(pSVar8,__return_storage_ptr___00,pSVar6);
  if (SStack_44.Data != (char *)0x0) {
    port_op_delete(SStack_44.Data);
    SStack_44.Data = (char *)0x0;
  }
  if (SStack_50.Data != (char *)0x0) {
    port_op_delete(SStack_50.Data);
    SStack_50.Data = (char *)0x0;
  }
  if (pvStack_68 != (void *)0x0) {
    port_op_delete(pvStack_68);
    pvStack_68 = (void *)0x0;
  }
  if (apvStack_74[0] != (void *)0x0) {
    port_op_delete(apvStack_74[0]);
    apvStack_74[0] = (void *)0x0;
  }
  if (SStack_14.Data != (char *)0x0) {
    port_op_delete(SStack_14.Data);
    SStack_14.Data = (char *)0x0;
  }
  if (pvStack_80 != (void *)0x0) {
    port_op_delete(pvStack_80);
    pvStack_80 = (void *)0x0;
  }
  if (apvStack_8c[0] != (void *)0x0) {
    port_op_delete(apvStack_8c[0]);
    apvStack_8c[0] = (void *)0x0;
  }
  if (SStack_20.Data != (char *)0x0) {
    port_op_delete(SStack_20.Data);
    SStack_20.Data = (char *)0x0;
  }
  if (SStack_2c.Data != (char *)0x0) {
    port_op_delete(SStack_2c.Data);
    SStack_2c.Data = (char *)0x0;
  }
  if (SStack_38.Data != (char *)0x0) {
    port_op_delete(SStack_38.Data);
    SStack_38.Data = (char *)0x0;
  }
  if (SStack_5c.Data != (char *)0x0) {
    port_op_delete(SStack_5c.Data);
  }
  return __return_storage_ptr__;
}





//==== 005fa860 GetIcon_005fa860 ====


/* public: virtual void (__cdecl*__thiscall FlareModule__GetIcon(void)const )(void) */

_func_void * __thiscall FlareModule__GetIcon(FlareModule *this)

{
  return Icons__Sun;
}





//==== 005fa930 GetComposition_005fa930 ====

/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   FlareModule__GetComposition(void)const  */

Darray_L_MaterialComposition_G_ * __thiscall
FlareModule__GetComposition(FlareModule *this,Darray_L_MaterialComposition_G_ *__return_storage_ptr__)

{
  MaterialComposition *pMVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  Material *pMVar6;
  int iVar7;
  Darray_L_MaterialComposition_G_ *this_00;
  bool bVar8;
  undefined4 uStack_10;
  
  this_00 = __return_storage_ptr__;
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (MaterialComposition *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  Module__GetComposition((Module *)this,__return_storage_ptr__);
  dVar2 = *(double *)&(this->Pyrotechnic).CombustionReaction;
  pMVar6 = (Material *)(this->Pyrotechnic)._pad_0x4_1;
  dVar3 = (this->Pyrotechnic).DelayCompositionMassFraction;
  dVar4 = *(double *)&(this->Pyrotechnic)._pad_0x8_2;
  iVar7 = this_00->Size;
  dVar5 = pMVar6->Density_kg__m3;
  __return_storage_ptr__ = (Darray_L_MaterialComposition_G_ *)(iVar7 + 1);
  util__Darray_L_MaterialConstituent_G___SetSize
            ((Darray_L_MaterialConstituent_G_ *)this_00,(int *)&__return_storage_ptr__);
  bVar8 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                    ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar7);
  if (bVar8) {
    pMVar1 = this_00->Data + this_00->Size + -1;
    pMVar1->Type = pMVar6;
    *(undefined4 *)&(*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar1) + 0x4)) = uStack_10;
    pMVar1->Mass_kg =
         (dVar2 * 6.283185307179586 * dVar3 + dVar2 * 3.141592653589793 * dVar2) * dVar4 * dVar5;
  }
  return this_00;
}

//==== 005fa9d0 GetBandGap_eV ====


/* public: double __thiscall Material__GetBandGap_eV(void)const  */

double __thiscall Material__GetBandGap_eV(Material *this)

{
  return *(double *)&((this->Dissociation).Data);
}





//==== 005fa9e0 GetStructuralMaterial_005fa9e0 ====

/* public: virtual class Material const * __thiscall FlareModule__GetStructuralMaterial(void)const
    */

Material * __thiscall FlareModule__GetStructuralMaterial(FlareModule *this)

{
  return (Material *)(this->Pyrotechnic)._pad_0x4_1;
}

//==== 005fa9f0 GetHullRadius_m_005fa9f0 ====

/* public: virtual double __thiscall FlareModule__GetHullRadius_m(void)const  */

double __thiscall FlareModule__GetHullRadius_m(FlareModule *this)

{
  return (double)(*(double *)&(this->Pyrotechnic).CombustionReaction +
         *(double *)&(this->Pyrotechnic)._pad_0x8_2);
}

//==== 005faa00 GetHullLength_m_005faa00 ====

/* public: virtual double __thiscall FlareModule__GetHullLength_m(void)const  */

double __thiscall FlareModule__GetHullLength_m(FlareModule *this)

{
  return (this->Pyrotechnic).DelayCompositionMassFraction +
         *(double *)&(this->Pyrotechnic)._pad_0x8_2;
}

//==== 005faa10 GetModuleAmmoExplosion_005faa10 ====

/* public: virtual struct AmmoExplosion __thiscall FlareModule__GetModuleAmmoExplosion(void)const
    */

AmmoExplosion * __thiscall
FlareModule__GetModuleAmmoExplosion(FlareModule *this,AmmoExplosion *__return_storage_ptr__)

{
  Darray_L_MaterialConstituent_G_ *pDVar1;
  double *this_00;
  double dVar2;
  undefined1 local_1c [16];
  double local_c;
  
  (__return_storage_ptr__->GasComposition)._pad_0x0_0 =
       (int)&vftable_15;
  (__return_storage_ptr__->GasComposition).Data = (MaterialConstituent *)0x0;
  (__return_storage_ptr__->GasComposition).Size = 0;
  (__return_storage_ptr__->GasComposition).Capacity = 0;
  *(undefined4 *)&__return_storage_ptr__->Mass_kg = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->Mass_kg + 4) = 0;
  *(undefined4 *)&__return_storage_ptr__->Temperature_K = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->Temperature_K + 4) = 0;
  pDVar1 = ChemicalReaction__GetProductsByMassPercent
                     ((ChemicalReaction *)this[1]._pad_0x8_2,(Darray_L_MaterialConstituent_G_ *)local_1c
                     );
  util__Darray_L_MaterialConstituent_G___op_assign
            (&__return_storage_ptr__->GasComposition,(Darray_L_struct_MaterialConstituent_G_ *)pDVar1);
  (*(uint32_t*)&(local_1c)) = (uint32_t)(uintptr_t)(&vftable_15);
  if ((MaterialConstituent *)(*(uint32_t*)((char*)&(local_1c)+4)) != (MaterialConstituent *)0x0) {
    port_op_delete((void *)(*(uint32_t*)((char*)&(local_1c)+4)));
  }
  local_c = *(double *)&(this->Pyrotechnic).CombustionReaction;
  (*(uint64_t*)((char*)&(local_1c)+8)) = (this->Pyrotechnic).DelayCompositionMassFraction;
  this_00 = &(this->Pyrotechnic).CachedMass_kg;
  dVar2 = CombustionMixtureSubModule__GetDensity_kg__m3((CombustionMixtureSubModule *)this_00);
  (*(uint64_t*)((char*)&(local_1c)+8)) = dVar2 * local_c * local_c * 3.141592653589793 * (double)(*(uint64_t*)((char*)&(local_1c)+8));
  dVar2 = CombustionMixtureSubModule__GetCombustableMassFraction
                    ((CombustionMixtureSubModule *)this_00);
  __return_storage_ptr__->Mass_kg = dVar2 * (double)(*(uint64_t*)((char*)&(local_1c)+8));
  dVar2 = CombustionMixtureSubModule__GetFlameTemperature_K((CombustionMixtureSubModule *)this_00);
  __return_storage_ptr__->Temperature_K = dVar2;
  return __return_storage_ptr__;
}

//==== 005faae0 GetStatuses_005faae0 ====

/* public: virtual class DesignStatusBuffer  FlareModule__GetStatuses(class DataParser
   *)const  */

DesignStatusBuffer * 
FlareModule__GetStatuses
          (FlareModule *this,DesignStatusBuffer *__return_storage_ptr__,DataParser *param_1)

{
  bool bVar1;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ *pSVar3;
  Str_L_char_G_ *pSVar4;
  Str_L_char_G_ *pSVar5;
  ModulePlacer *pMVar6;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  Str_L_char_G_ local_10;
  
  __return_storage_ptr__->DataManager = (DataParser *)0x0;
  (__return_storage_ptr__->Messages)._pad_0x0_0 = 0;
  (__return_storage_ptr__->Messages).Data = (DesignStatusMessage *)0x0;
  (__return_storage_ptr__->Messages).Size = 0;
  *(undefined8 *)&(__return_storage_ptr__->Messages).Capacity = 0;
  Module__GetStatuses((Module *)this,__return_storage_ptr__,param_1);
  util__Str_char___Str_char(&local_34,"FlareSupersonicCombustion");
  pMVar6 = (ModulePlacer *)0x0;
  pSVar5 = &local_28;
  local_28.Data = (char *)0x0;
  pSVar4 = &local_1c;
  local_28.Capacity = 0;
  pSVar3 = &local_10;
  local_28.Length = 0;
  pSVar2 = &local_34;
  local_1c.Data = (char *)0x0;
  local_1c.Capacity = 0;
  local_1c.Length = 0;
  local_10.Data = (char *)0x0;
  local_10.Capacity = 0;
  local_10.Length = 0;
  bVar1 = CombustionMixtureSubModule__WillDetonate
                    ((CombustionMixtureSubModule *)&(this->Pyrotechnic).CachedMass_kg);
  DesignStatusBuffer__CheckError(__return_storage_ptr__,bVar1,pSVar2,pSVar3,pSVar4,pSVar5,pMVar6);
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
    local_10.Data = (char *)0x0;
  }
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
    local_1c.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
  }
  return __return_storage_ptr__;
}

//==== 005fabe0 GetInfoBoxes_005fabe0 ====


/* public: virtual class util__Darray_L_structInfoBox_G_ __thiscall
   FlareModule__GetInfoBoxes(void)const  */

void __thiscall FlareModule__GetInfoBoxes(FlareModule *this)

{
  undefined8 stack0xfffffffc;
  LocStr *pLVar1;
  Str_L_char_G_ *pSVar2;
  InfoBox *pIVar3;
  Darray_L_struct_InfoBox_G_ *pDVar4;
  Darray_L_struct_InfoBox_G_ *in_stack_00000004;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcStack_a4;
  InfoBox IStack_84;
  void *apvStack_4c [3];
  void *pvStack_40;
  undefined **ppuStack_34;
  Str_L_char_G_ SStack_30;
  Str_L_char_G_ SStack_24;
  undefined **ppuStack_18;
  InfoBox *pIStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  ppuStack_18 = (undefined **)0x0;
  pIStack_14 = (InfoBox *)0x0;
  uStack_10 = 0;
  uStack_c = 0;
  util__Darray_struct_InfoBox___Darray_struct_InfoBox((Darray_L_struct_InfoBox_G_ *)&ppuStack_18,3);
  util__Str_char___Str_char(&SStack_30,"InfoBox FlareInfo Tooltip");
  SStack_24.Data = (char *)0x0;
  SStack_24.Capacity = 0;
  SStack_24.Length = 0;
  pcStack_a4 = (char *)0x5fac53;
  pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_4c,&SStack_30,&SStack_24);
  pSVar2 = util__LocStr__operator__o3(pLVar1);
  uVar5 = 0;
  uVar6 = 0;
  util__Str_char___Str_char((Str_L_char_G_ *)&pcStack_a4,pSVar2);
  pIVar3 = (InfoBox *)
           InfoBox__InfoBox(&IStack_84,Icons__Sun,this,(_func___cdecl_Str_L_char_G__void_ptr*)(util__DelegateFactory_class_FlareModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_FlareModule__GetFlareInfo_void_const__0),0,0,0,(void *)(uintptr_t)(uVar5),(_func___cdecl_Str_L_char_G__void_ptr*)(uVar6),0,0,0,(Delegate_L_bool_G_){0},0);
  util__Darray_struct_InfoBox___Add((Darray_L_struct_InfoBox_G_ *)&ppuStack_18,pIVar3);
  if (IStack_84.Tooltip.Value.Data != (char *)0x0) {
    port_op_delete(IStack_84.Tooltip.Value.Data);
    IStack_84.Tooltip.Value.Data = (char *)0x0;
  }
  if (IStack_84.Info.Value.Data != (char *)0x0) {
    port_op_delete(IStack_84.Info.Value.Data);
    IStack_84.Info.Value.Data = (char *)0x0;
  }
  if (pvStack_40 != (void *)0x0) {
    port_op_delete(pvStack_40);
    pvStack_40 = (void *)0x0;
  }
  if (apvStack_4c[0] != (void *)0x0) {
    port_op_delete(apvStack_4c[0]);
    apvStack_4c[0] = (void *)0x0;
  }
  if (SStack_24.Data != (char *)0x0) {
    port_op_delete(SStack_24.Data);
    SStack_24.Data = (char *)0x0;
  }
  if ((InfoBox *)SStack_30.Data != (InfoBox *)0x0) {
    port_op_delete(SStack_30.Data);
  }
  util__Str_char___Str_char(&SStack_30,"InfoBox FlareTime Tooltip");
  SStack_24.Data = (char *)0x0;
  SStack_24.Capacity = 0;
  SStack_24.Length = 0;
  pcStack_a4 = (char *)0x5fad79;
  pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_4c,&SStack_30,&SStack_24);
  pSVar2 = util__LocStr__operator__o3(pLVar1);
  uVar5 = 0;
  uVar6 = 0;
  util__Str_char___Str_char((Str_L_char_G_ *)&pcStack_a4,pSVar2);
  pIVar3 = (InfoBox *)
           InfoBox__InfoBox(&IStack_84,Icons__TightTimeLimitBadge,this,(_func___cdecl_Str_L_char_G__void_ptr*)(util__DelegateFactory_class_FlareModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_FlareModule__GetFlareTimeInfo_void_const__0),0,0,0,(void *)(uintptr_t)(uVar5),(_func___cdecl_Str_L_char_G__void_ptr*)(uVar6),0,0,0,(Delegate_L_bool_G_){0},0);
  util__Darray_struct_InfoBox___Add((Darray_L_struct_InfoBox_G_ *)&ppuStack_18,pIVar3);
  if (IStack_84.Tooltip.Value.Data != (char *)0x0) {
    port_op_delete(IStack_84.Tooltip.Value.Data);
    IStack_84.Tooltip.Value.Data = (char *)0x0;
  }
  if (IStack_84.Info.Value.Data != (char *)0x0) {
    port_op_delete(IStack_84.Info.Value.Data);
    IStack_84.Info.Value.Data = (char *)0x0;
  }
  if (pvStack_40 != (void *)0x0) {
    port_op_delete(pvStack_40);
    pvStack_40 = (void *)0x0;
  }
  if (apvStack_4c[0] != (void *)0x0) {
    port_op_delete(apvStack_4c[0]);
    apvStack_4c[0] = (void *)0x0;
  }
  if (SStack_24.Data != (char *)0x0) {
    port_op_delete(SStack_24.Data);
    SStack_24.Data = (char *)0x0;
  }
  if ((InfoBox *)SStack_30.Data != (InfoBox *)0x0) {
    port_op_delete(SStack_30.Data);
  }
  pDVar4 = (Darray_L_struct_InfoBox_G_ *)Module__GetInfoBoxes((Module *)this);
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_InfoBox___Darray_struct_InfoBox
            (in_stack_00000004,(Darray_L_struct_InfoBox_G_ *)&ppuStack_18);
  util__Darray_struct_InfoBox___operator(in_stack_00000004,pDVar4);
  ppuStack_34 = &vftable_127;
  if ((InfoBox *)SStack_30.Data != (InfoBox *)0x0) {
    InfoBox___vector_deleting_destructor((InfoBox *)SStack_30.Data,3);
  }
  SStack_30.Data = (char *)0x0;
  ppuStack_34 = (undefined **)(&vftable);
  ppuStack_18 = &vftable_127;
  if (pIStack_14 != (InfoBox *)0x0) {
    InfoBox___vector_deleting_destructor(pIStack_14,3);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 005fb3f0 GetOneLineStatusBarPercentages_005fb3f0 ====


/* public: virtual class util__Maybe_L_structutil__Range_L_double_G__G_ 
   FlareModule__GetOneLineStatusBarPercentages(class util__Darray_L_classutil__WeakPtr_L_struct_ModuleCompartment_G__G_ const &)const  */

void 
FlareModule__GetOneLineStatusBarPercentages
          (FlareModule *this,Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  Darray_L_double_G_ *pDVar2;
  int *in_stack_00000008;
  undefined **ppuStack_30;
  void *pvStack_2c;
  undefined8 uStack_20;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ aDStack_18 [16];
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar1 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
  if (iVar1 == 0) {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(char *)&(param_1[0x10]) = 0x0;
    __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  (*(uint40_t*)&(uStack_20)) = (uint5)(uint)uStack_20;
  FUN_00526b80(aDStack_18);
  pDVar2 = (Darray_L_double_G_ *)FUN_005fbbe0(&ppuStack_30,aDStack_18,0);
  uStack_20 = util__Max_L_double_G_(pDVar2);
  ppuStack_30 = (undefined **)(&vftable_63);
  if (pvStack_2c != (void *)0x0) {
    port_op_delete(pvStack_2c);
  }
  *(uint *)param_1 = (uint)uStack_20;
  *(undefined4 *)(param_1 + 4) = (*(uint32_t*)((char*)&(uStack_20)+4));
  *(uint *)(param_1 + 8) = (uint)uStack_20;
  *(undefined4 *)(param_1 + 0xc) = (*(uint32_t*)((char*)&(uStack_20)+4));
  *(char *)&(param_1[0x10]) = 0x1;
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(aDStack_18);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 005fb4b0 InnerSortFunction_005fb4b0 ====

/* public: virtual bool __thiscall FlareModule__InnerSortFunction(class Module const *,class Module
   const *)const  */

bool __thiscall FlareModule__InnerSortFunction(FlareModule *this,Module *param_1,Module *param_2)

{
  int iVar1;
  int iVar2;
  Module *pMVar3;
  Module *pMVar4;
  bool bVar5;
  double dVar6;
  int local_18;
  SharedPtr_L_GameModel_G_ *pSStack_14;
  int iStack_10;
  int iStack_c;
  
  pMVar4 = param_1;
  bVar5 = false;
  if ((char)param_1[1].Models.Size == '\0') {
    iVar1 = *(int *)&param_1[1].GetTotalPowerUsage_W_MemoizedValue.IsValidData;
    pMVar3 = param_1 + 1;
    param_1 = (Module *)(iVar1 + 1);
    util__Darray_L_util__tuple2_L_Order__Type_Cint_G___G___SetSize
              ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)&pMVar3->GetTotalPowerUsage_W_MemoizedValue
               ,(int *)&param_1);
    bVar5 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &pMVar4[1].GetTotalPowerUsage_W_MemoizedValue,iVar1);
    if (bVar5) {
      iVar1 = *(int *)((int)&pMVar4[1].GetTotalPowerUsage_W_MemoizedValue.Data + 4);
      iVar2 = *(int *)&pMVar4[1].GetTotalPowerUsage_W_MemoizedValue.IsValidData;
      *(code **)(iVar1 + -8 + iVar2 * 8) = (long long int (*)())(ChemicalReaction__GetEnergyDensity_J__kg_Clear);
      *(undefined4 *)(iVar1 + -4 + iVar2 * 8) = 0;
    }
    dVar6 = GetPowerOutput_W_MemoizedFunction();
    iStack_10 = CONCAT31((*(uint24_t*)((char*)&(iStack_10)+1)),1);
    *(uint32_t *)&local_18 = SUB84(dVar6,0);
    pSStack_14 = (SharedPtr_L_GameModel_G_ *)((ulonglong)dVar6 >> 0x20);
    pMVar4[1].Models._pad_0x0_0 = local_18;
    pMVar4[1].Models.Data = pSStack_14;
    pMVar4[1].Models.Size = iStack_10;
    pMVar4[1].Models.Capacity = iStack_c;
    bVar5 = (char)pMVar4[1].Models.Size == '\0';
  }
  if (bVar5) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pMVar3 = param_2;
  if ((char)param_2[1].Models.Size == '\0') {
    iVar1 = *(int *)&param_2[1].GetTotalPowerUsage_W_MemoizedValue.IsValidData;
    param_1 = (Module *)(iVar1 + 1);
    util__Darray_L_util__tuple2_L_Order__Type_Cint_G___G___SetSize
              ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)
               &param_2[1].GetTotalPowerUsage_W_MemoizedValue,(int *)&param_1);
    bVar5 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &pMVar3[1].GetTotalPowerUsage_W_MemoizedValue,iVar1);
    if (bVar5) {
      iVar1 = *(int *)((int)&pMVar3[1].GetTotalPowerUsage_W_MemoizedValue.Data + 4);
      iVar2 = *(int *)&pMVar3[1].GetTotalPowerUsage_W_MemoizedValue.IsValidData;
      *(code **)(iVar1 + -8 + iVar2 * 8) = (long long int (*)())(ChemicalReaction__GetEnergyDensity_J__kg_Clear);
      *(undefined4 *)(iVar1 + -4 + iVar2 * 8) = 0;
    }
    dVar6 = GetPowerOutput_W_MemoizedFunction();
    iStack_10 = CONCAT31((*(uint24_t*)((char*)&(iStack_10)+1)),1);
    *(uint32_t *)&local_18 = SUB84(dVar6,0);
    pSStack_14 = (SharedPtr_L_GameModel_G_ *)((ulonglong)dVar6 >> 0x20);
    pMVar3[1].Models._pad_0x0_0 = local_18;
    pMVar3[1].Models.Data = pSStack_14;
    pMVar3[1].Models.Size = iStack_10;
    pMVar3[1].Models.Capacity = iStack_c;
    if ((char)pMVar3[1].Models.Size == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  if (*(double *)&pMVar4[1].Models == *(double *)&pMVar3[1].Models) {
    bVar5 = Module__InnerSortFunction((Module *)this,pMVar4,pMVar3);
    return bVar5;
  }
  if ((char)pMVar4[1].Models.Size == '\0') {
    iVar1 = *(int *)&pMVar4[1].GetTotalPowerUsage_W_MemoizedValue.IsValidData;
    param_1 = (Module *)(iVar1 + 1);
    util__Darray_L_util__tuple2_L_Order__Type_Cint_G___G___SetSize
              ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)
               &pMVar4[1].GetTotalPowerUsage_W_MemoizedValue,(int *)&param_1);
    bVar5 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &pMVar4[1].GetTotalPowerUsage_W_MemoizedValue,iVar1);
    if (bVar5) {
      iVar1 = *(int *)((int)&pMVar4[1].GetTotalPowerUsage_W_MemoizedValue.Data + 4);
      iVar2 = *(int *)&pMVar4[1].GetTotalPowerUsage_W_MemoizedValue.IsValidData;
      *(code **)(iVar1 + -8 + iVar2 * 8) = (long long int (*)())(ChemicalReaction__GetEnergyDensity_J__kg_Clear);
      *(undefined4 *)(iVar1 + -4 + iVar2 * 8) = 0;
    }
    dVar6 = GetPowerOutput_W_MemoizedFunction();
    iStack_10 = CONCAT31((*(uint24_t*)((char*)&(iStack_10)+1)),1);
    *(uint32_t *)&local_18 = SUB84(dVar6,0);
    pSStack_14 = (SharedPtr_L_GameModel_G_ *)((ulonglong)dVar6 >> 0x20);
    pMVar4[1].Models._pad_0x0_0 = local_18;
    pMVar4[1].Models.Data = pSStack_14;
    pMVar4[1].Models.Size = iStack_10;
    pMVar4[1].Models.Capacity = iStack_c;
    if ((char)pMVar4[1].Models.Size == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  if ((char)pMVar3[1].Models.Size == '\0') {
    iVar1 = *(int *)&pMVar3[1].GetTotalPowerUsage_W_MemoizedValue.IsValidData;
    param_1 = (Module *)(iVar1 + 1);
    util__Darray_L_util__tuple2_L_Order__Type_Cint_G___G___SetSize
              ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)
               &pMVar3[1].GetTotalPowerUsage_W_MemoizedValue,(int *)&param_1);
    bVar5 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &pMVar3[1].GetTotalPowerUsage_W_MemoizedValue,iVar1);
    if (bVar5) {
      iVar1 = *(int *)((int)&pMVar3[1].GetTotalPowerUsage_W_MemoizedValue.Data + 4);
      iVar2 = *(int *)&pMVar3[1].GetTotalPowerUsage_W_MemoizedValue.IsValidData;
      *(code **)(iVar1 + -8 + iVar2 * 8) = (long long int (*)())(ChemicalReaction__GetEnergyDensity_J__kg_Clear);
      *(undefined4 *)(iVar1 + -4 + iVar2 * 8) = 0;
    }
    dVar6 = GetPowerOutput_W_MemoizedFunction();
    iStack_10 = CONCAT31((*(uint24_t*)((char*)&(iStack_10)+1)),1);
    *(uint32_t *)&local_18 = SUB84(dVar6,0);
    pSStack_14 = (SharedPtr_L_GameModel_G_ *)((ulonglong)dVar6 >> 0x20);
    pMVar3[1].Models._pad_0x0_0 = local_18;
    pMVar3[1].Models.Data = pSStack_14;
    pMVar3[1].Models.Size = iStack_10;
    pMVar3[1].Models.Capacity = iStack_c;
    if ((char)pMVar3[1].Models.Size == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  return *(double *)&pMVar4[1].Models <= *(double *)&pMVar3[1].Models &&
         *(double *)&pMVar3[1].Models != *(double *)&pMVar4[1].Models;
}

//==== 005fb730 SetCachedData_005fb730 ====


/* public: virtual void __thiscall FlareModule__SetCachedData(class DataParser *) */

void __thiscall FlareModule__SetCachedData(FlareModule *this,DataParser *param_1)

{
  double *this_00;
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = *(double *)&(this->Pyrotechnic).CombustionReaction;
  this_00 = &(this->Pyrotechnic).CachedMass_kg;
  dVar2 = (this->Pyrotechnic).DelayCompositionMassFraction;
  dVar3 = CombustionMixtureSubModule__GetDensity_kg__m3((CombustionMixtureSubModule *)this_00);
  FixedLaserMountSubModule__PassThroughCachedData
            ((FixedLaserMountSubModule *)this_00,dVar3 * dVar1 * dVar1 * 3.141592653589793 * dVar2);
  return;
}





//==== 005fb790 GetPointerPropertyChoices_005fb790 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   FlareModule__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

ClassMember * 
FlareModule__GetPointerPropertyChoices
          (FlareModule *this,ClassMember *param_1,SerializationManagerInterface *param_2)

{
  char *pcVar1;
  SerializationManagerInterface SVar2;
  int in_stack_0000000c;
  
  if (*(int *)&param_2[1] < 1) {
    SVar2 = *(SerializationManagerInterface *)&cde_l2_0b2b1c9f_NullString;
  }
  else {
    SVar2 = *param_2;
  }
  for (pcVar1 = "ArmorComposition";
      (pcVar1[(int)(*(int *)&SVar2 + -0x926270)] != '\0' || (*pcVar1 != '\0')); pcVar1 = pcVar1 + 1) {
    if (pcVar1[(int)(*(int *)&SVar2 + -0x926270)] != *pcVar1) {
      (param_1->Name).Data =
           (char *)&vftable_85;
      (param_1->Name).Capacity = 0;
      (param_1->Name).Length = 0;
      *(undefined4 *)&param_1->Type = 0;
      return param_1;
    }
  }
  GetMaterials((DataParser *)param_1,in_stack_0000000c,false);
  return param_1;
}





//==== 005fb810 GetReflectionInfo_005fb810 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   FlareModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall FlareModule__GetReflectionInfo(FlareModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_b7dd1f74__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_b7dd1f74__thread_safe_static_guard_0__);
    if ( cde_l2_b7dd1f74__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_08db0582_ReflectionInfo) = &vftable_248;
      _Init_thread_footer(& cde_l2_b7dd1f74__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_08db0582_ReflectionInfo;
}





//==== 005fb820 scalar_deleting_destructor_005fb820 ====


/* public: virtual void * __thiscall FlareModule:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall FlareModule___scalar_deleting_destructor(FlareModule *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined ** *)&(this->Pyrotechnic).CachedMass_kg = &vftable_5;
  pvVar1 = *(void **)((int)&(this->Pyrotechnic).CachedMass_kg + 4);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    *(undefined4 *)((int)&(this->Pyrotechnic).CachedMass_kg + 4) = 0;
  }
  pvVar1 = *(void **)((int)&(this->Cylinder_m).Radius + 4);
  (this->Cylinder_m).Radius = cde_ptr_as_double((void *)vftable_15);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
  }
  *(undefined4 *)((int)&(this->Cylinder_m).Radius + 4) = 0;
  (this->Cylinder_m).Radius = cde_ptr_as_double((void *)&vftable);
  pvVar1 = *(void **)((int)&(this->GetBurnTime_s_MemoizedValue).Data + 4);
*(uint32_t *)&((this->GetBurnTime_s_MemoizedValue).Data) = (uint32_t)(uintptr_t)(&vftable_109);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
  }
  *(undefined4 *)((int)&(this->GetBurnTime_s_MemoizedValue).Data + 4) = 0;
  (this->GetBurnTime_s_MemoizedValue).Data = cde_ptr_as_double((void *)&vftable);
  Module___Module((Module *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x130);
  }
  return this;
}





//==== 005fb8d0 GetTypeName_005fb8d0 ====


/* public: virtual class util__Str_L_char_G_  FlareModule__ReflectionInfoStruct_class_FlareModule___GetTypeName(void)const  */

Str_L_char_G_ * 
FlareModule__ReflectionInfoStruct_class_FlareModule___GetTypeName
          (ReflectionInfoStruct_L_class_FlareModule_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"FlareModule");
  return __return_storage_ptr__;
}





//==== 005fb8f0 GetMembers_005fb8f0 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   FlareModule__ReflectionInfoStruct_class_FlareModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
FlareModule__ReflectionInfoStruct_class_FlareModule___GetMembers__o2
          (ReflectionInfoStruct_L_class_FlareModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_6ea58822__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_6ea58822__thread_safe_static_guard_0__),
      cde_l2_6ea58822__thread_safe_static_guard_0__ == -1)) {
     cde_l2_fe1a25c0_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_6ea58822__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_fe1a25c0_Count);
  iVar3 = 0;
  if (0 <  cde_l2_fe1a25c0_Count) {
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
    } while (iVar3 <  cde_l2_fe1a25c0_Count);
  }
  return in_stack_00000004;
}





//==== 005fba30 GetMember_005fba30 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   FlareModule__ReflectionInfoStruct_class_FlareModule___GetMember(class util__Str_L_char_G_ const
   &)const  */

Str_L_char_G_ * 
FlareModule__ReflectionInfoStruct_class_FlareModule___GetMember__o2
          (ReflectionInfoStruct_L_class_FlareModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_52287098__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_52287098__thread_safe_static_guard_0__),
      cde_l2_52287098__thread_safe_static_guard_0__ == -1)) {
     cde_l2_9ea2c4b9_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_52287098__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_9ea2c4b9_Count) {
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
LAB_005fbabd:
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
          if (cVar3 == '\0') goto LAB_005fbabd;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_9ea2c4b9_Count);
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





//==== 005fbbd0 GetFactory_005fbbd0 ====


/* public: virtual class util__Reflectable * (__cdecl*
   FlareModule__ReflectionInfoStruct_class_FlareModule___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall FlareModule__ReflectionInfoStruct_class_FlareModule___GetFactory__o2
          (ReflectionInfoStruct_L_class_FlareModule_G_ *this)

{
  return StaticFactory;
}





//==== 005fbda0 MethodCallerConst__public__class_util__Str_char____thiscall_FlareModule__GetFlareInfo_void_const__0__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_classFlareModule_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__public_classutil__Str_L_char_G___thiscall_FlareModule__GetFlareInfo_void_const_C0__G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_class_FlareModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_FlareModule__GetFlareInfo_void_const__0
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(FlareModule__GetFlareInfo((FlareModule *)param_1,&SStack_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 005fbde0 MethodCallerConst__public__class_util__Str_char____thiscall_FlareModule__GetFlareTimeInfo_void_const__0__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_classFlareModule_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__public_classutil__Str_L_char_G___thiscall_FlareModule__GetFlareTimeInfo_void_const_C0__G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_class_FlareModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_FlareModule__GetFlareTimeInfo_void_const__0
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(FlareModule__GetFlareTimeInfo((FlareModule *)param_1,&SStack_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 005fbe50 GetAdiabaticFlameTemperature_K_Clear ====


/* public: void __thiscall ChemicalReaction__GetAdiabaticFlameTemperature_K_Clear(void)const  */

void __thiscall ChemicalReaction__GetAdiabaticFlameTemperature_K_Clear(ChemicalReaction *this)

{
  (this->GetAdiabaticFlameTemperature_K_MemoizedValue).IsValidData = false;
  (this->GetAdiabaticFlameTemperature_K_MemoizedValue).Data = 0.0;
  return;
}





//==== 005fbe70 GetFlameColor_Clear ====


/* public: void __thiscall FlareModule__GetFlameColor_Clear(void)const  */

void __thiscall FlareModule__GetFlameColor_Clear(FlareModule *this)

{
  (this->GetMassBurnRate_kg__s_MemoizedValue).Data = 0.0;
  *(undefined4 *)&(this->GetMassBurnRate_kg__s_MemoizedValue).IsValidData = 0;
  *(undefined4 *)&(this->GetMassBurnRate_kg__s_MemoizedValue).field_0xc = 0;
  return;
}





//==== 005fc670 GetHeatSignature_W_005fc670 ====

/* public: virtual double __thiscall FlareCompartment__GetHeatSignature_W(void)const  */

double __thiscall FlareCompartment__GetHeatSignature_W(FlareCompartment *this)

{
  undefined8 stack0xfffffff5;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  double dVar6;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int iStack_8;
  
  if (*(char *)&this->BurnTime_s != '\0') {
    iVar2 = this->_pad_0x38_14;
    if (*(char *)(iVar2 + 0x90) == '\0') {
      iVar3 = *(int *)(iVar2 + 0x80);
      iVar1 = iVar3 + 1;
      _uStack_c = CONCAT44(iVar1,uStack_c);
      util__Darray_L_util__tuple2_L_Order__Type_Cint_G___G___SetSize
                ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)(iVar2 + 0x78),&iStack_8);
      bVar5 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                        ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)(iVar2 + 0x78),iVar3);
      if (bVar5) {
        iVar3 = *(int *)(iVar2 + 0x7c);
        iVar4 = *(int *)(iVar2 + 0x80);
        *(code **)(iVar3 + -8 + iVar4 * 8) = (long long int (*)())(ChemicalReaction__GetEnergyDensity_J__kg_Clear);
        *(undefined4 *)(iVar3 + -4 + iVar4 * 8) = 0;
      }
      dVar6 = FlareModule__GetPowerOutput_W_MemoizedFunction();
      _uStack_c = CONCAT71(stack0xfffffff5,1);
      local_14 = SUB84(dVar6,0);
      uStack_10 = (undefined4)((ulonglong)dVar6 >> 0x20);
      *(undefined4 *)(iVar2 + 0x88) = local_14;
      *(undefined4 *)(iVar2 + 0x8c) = uStack_10;
      *(undefined4 *)(iVar2 + 0x90) = uStack_c;
      *(int *)(iVar2 + 0x94) = iVar1;
      if (*(char *)(iVar2 + 0x90) == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
    }
    return *(double *)(iVar2 + 0x88);
  }
  return 0.0;
}

//==== 005fc740 GetLifeTimeRemaining_s ====

/* public: double __thiscall FlareCompartment__GetLifeTimeRemaining_s(void)const  */

double __thiscall FlareCompartment__GetLifeTimeRemaining_s(FlareCompartment *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  undefined8 uVar5;
  bool bVar6;
  double dVar7;
  undefined8 uStack_c;
  
  iVar1 = this->_pad_0x38_14;
  if (*(char *)(iVar1 + 0xa0) != '\0') goto LAB_005fc82b;
  iVar2 = *(int *)(iVar1 + 0x80);
  uStack_c = (double)CONCAT44(iVar2 + 1,(undefined4)uStack_c);
  util__Darray_L_util__tuple2_L_Order__Type_Cint_G___G___SetSize
            ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)(iVar1 + 0x78),(int *)((int)&uStack_c + 4));
  bVar6 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                    ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)(iVar1 + 0x78),iVar2);
  if (bVar6) {
    iVar2 = *(int *)(iVar1 + 0x7c);
    iVar3 = *(int *)(iVar1 + 0x80);
    *(code **)(iVar2 + -8 + iVar3 * 8) = (long long int (*)())(ChemicalReaction__GetAdiabaticFlameTemperature_K_Clear);
    *(undefined4 *)(iVar2 + -4 + iVar3 * 8) = 0;
  }
  uStack_c = CombustionMixtureSubModule__GetFlameTemperature_K
                       ((CombustionMixtureSubModule *)(iVar1 + 0x108));
  if (uStack_c <= 0.0) {
LAB_005fc7ee:
    dVar4 = 0.0;
  }
  else {
    uStack_c = CombustionMixtureSubModule__GetFlameSpeed_m__s
                         ((CombustionMixtureSubModule *)(iVar1 + 0x108));
    if (uStack_c <= 0.0) goto LAB_005fc7ee;
    uStack_c = CombustionMixtureSubModule__GetFlameSpeed_m__s
                         ((CombustionMixtureSubModule *)(iVar1 + 0x108));
    uStack_c = *(double *)(iVar1 + 0x100) / uStack_c;
    dVar4 = uStack_c;
  }
  dVar7 = uStack_c;
  uStack_c = (double)CONCAT71((*(uint56_t*)((char*)&(uStack_c)+1)),1);
  uVar5 = uStack_c;
  (*(uint32_t*)((char*)&(uStack_c)+4)) = SUB84(dVar7,4);
  *(double *)(iVar1 + 0x98) = dVar4;
  *(undefined4 *)(iVar1 + 0xa0) = (undefined4)uStack_c;
  *(undefined4 *)(iVar1 + 0xa4) = (*(uint32_t*)((char*)&(uStack_c)+4));
  if (*(char *)(iVar1 + 0xa0) == '\0') {
    uStack_c = (double)uVar5;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
LAB_005fc82b:
  dVar4 = *(double *)(iVar1 + 0x98) - *(double *)(this + 1);
  dVar7 = 0.0;
  if (0.0 <= dVar4) {
    dVar7 = dVar4;
  }
  return dVar7;
}

//==== 005fc870 GetMixture_Clear ====

/* public: void __thiscall FlareModule__GetMixture_Clear(void)const  */

void __thiscall FlareModule__GetMixture_Clear(FlareModule *this)

{
  undefined **local_14;
  void *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = (undefined **)(&vftable_15);
  *(uint32_t *)&local_10 = (uint32_t)(uintptr_t)((void *)0x0);
  local_c = 0;
  local_8 = 0;
  util__Darray_L_MaterialConstituent_G___op_assign
            ((Darray_L_MaterialConstituent_G_ *)&this->Cylinder_m,
             (Darray_L_struct_MaterialConstituent_G_ *)&local_14);
  local_14 = (undefined **)(&vftable_15);
  if (local_10 != (void *)0x0) {
    port_op_delete(local_10);
  }
  *(undefined1 *)&(this->Pyrotechnic)._pad_0x0_0 = 0;
  return;
}

//==== 005fc8d0 GetPowerOutput_W_Memoize ====


/* public: void __thiscall FlareModule__GetPowerOutput_W_Memoize(void)const  */

void __thiscall FlareModule__GetPowerOutput_W_Memoize(FlareModule *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  double dVar4;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined4 uStack_c;
  int iStack_8;
  
  if ((char)((this->GetFlameColor_MemoizedValue).Data.Z == '\0')){
    iVar1 = *(int *)&(this->GetBurnTime_s_MemoizedValue).IsValidData;
    iStack_8 = iVar1 + 1;
    util__Darray_struct_util__tuple2_enum_Order__Type_int_____SetSize
              ((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)
               &this->GetBurnTime_s_MemoizedValue,&iStack_8);
    bVar3 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &this->GetBurnTime_s_MemoizedValue,iVar1);
    if (bVar3) {
      iVar1 = *(int *)((int)&(this->GetBurnTime_s_MemoizedValue).Data + 4);
      iVar2 = *(int *)&(this->GetBurnTime_s_MemoizedValue).IsValidData;
      *(code **)(iVar1 + -8 + iVar2 * 8) = (long long int (*)())(ChemicalReaction__GetEnergyDensity_J__kg_Clear);
      *(undefined4 *)(iVar1 + -4 + iVar2 * 8) = 0;
    }
    dVar4 = GetPowerOutput_W_MemoizedFunction(this);
    fStack_10 = (float)CONCAT31((*(uint24_t*)((char*)&(fStack_10)+1)),1);
    fStack_18 = SUB84(dVar4,0);
    fStack_14 = (float)((ulonglong)dVar4 >> 0x20);
    (this->GetFlameColor_MemoizedValue).Data.X = fStack_18;
    (this->GetFlameColor_MemoizedValue).Data.Y = fStack_14;
    (this->GetFlameColor_MemoizedValue).Data.Z = fStack_10;
    *(undefined4 *)&(this->GetFlameColor_MemoizedValue).IsValidData = uStack_c;
  }
  return;
}





//==== 005fcd40 StaticFactory_005fcd40 ====

/* public: static class util__Reflectable * __cdecl
   CombustionMixtureSubModule__ReflectionInfoStruct_struct_CombustionMixtureSubModule___StaticFactory(void) */

Reflectable * __cdecl
CombustionMixtureSubModule__ReflectionInfoStruct_struct_CombustionMixtureSubModule___StaticFactory__o2(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x28));
  if (pRVar1 != (Reflectable *)0x0) {
    pRVar1->_pad_0x0_0 = 0;
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1[1]._pad_0x0_0 = 0;
    pRVar1[1].Name.Data = (char *)0x0;
    pRVar1[1].Name.Capacity = 0;
    pRVar1[1].Name.Length = 0;
    pRVar1[2]._pad_0x0_0 = 0;
    pRVar1[2].Name.Data = (char *)0x0;
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_246;
  }
  return (Reflectable *)0x0;
}

//==== 005fcd80 StaticFactory_005fcd80 ====

/* public: static class util__Reflectable * __cdecl FlareModule__ReflectionInfoStruct_L_class_FlareModule_G___StaticFactory(void) */

Reflectable * __cdecl FlareModule__ReflectionInfoStruct_class_FlareModule___StaticFactory(void)

{
  Module *this;
  
  this = (Module *)(uintptr_t)(port_op_new(0x130));
  if (this != (Module *)0x0) {
    memset(this,0,0x130);
    Module__Module(this);
    this->_pad_0x0_0 = (int)&vftable_for_EditorReflectable__18;
    *(undefined4 *)&(this->GetTotalPowerUsage_W_MemoizedValue).field_0xc = (undefined4)(uintptr_t)vftable_for_util__RTTIBaseClass__18;
    *(undefined4 *)&this[1].GetTotalPowerUsage_W_MemoizedValue.Data = 0;
    *(undefined4 *)((int)&this[1].GetTotalPowerUsage_W_MemoizedValue.Data + 4) = 0;
    *(undefined4 *)&this[1].GetTotalPowerUsage_W_MemoizedValue.IsValidData = (undefined4)(uintptr_t) (undefined **)(0);
  *(undefined4 *)((char *)&this[1].GetTotalPowerUsage_W_MemoizedValue + 0xc) = 0;
    *(undefined ***)&this[1].GetTotalPowerUsage_W_MemoizedValue.Data =
         &vftable_109;
    *(undefined4 *)((int)&this[1].GetTotalPowerUsage_W_MemoizedValue.Data + 4) = 0;
    *(undefined4 *)&this[1].GetTotalPowerUsage_W_MemoizedValue.IsValidData = 0;
  *(undefined4 *)((char *)&this[1].GetTotalPowerUsage_W_MemoizedValue + 0xc) = 0;
    this[1].Models._pad_0x0_0 = 0;
    this[1].Models.Data = (SharedPtr_L_GameModel_G_ *)0x0;
    *(undefined1 *)&this[1].Models.Size = 0;
    this[1].UsesCustomName = false;
    this[1].IsUserCreated = false;
  *(undefined6 *)((char *)&this[1] + 0x4a) = 0;
    *(undefined1 *)&this[2]._pad_0x0_0 = 0;
    this[2]._pad_0x8_2 = 0;
    this[2]._pad_0xc_3 = 0;
    this[2]._pad_0x10_4 = 0;
    *(undefined1 *)&this[2].ModuleMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 = 0;
    this[2].ModuleMemoizationHandlerInstance.ResetFunctions.Data = (pmf_27707b45 *)0x0;
    this[2].ModuleMemoizationHandlerInstance.ResetFunctions.Size = 0;
    *(undefined1 *)&this[2].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    this[2].GetTotalPowerUsage_W_MemoizedValue.Data = 0.0;
    this[2].GetTotalPowerUsage_W_MemoizedValue.IsValidData = false;
    this[2].Models._pad_0x0_0 = (int)&vftable_15;
    this[2].Models.Data = (SharedPtr_L_GameModel_G_ *)0x0;
    this[2].Models.Size = 0;
    this[2].Models.Capacity = 0;
    this[2].UsesCustomName = false;
    this[3]._pad_0x8_2 = 0;
    this[3]._pad_0xc_3 = 0;
    this[3]._pad_0x10_4 = 0;
    this[3].ModuleMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 = 0;
    this[3].ModuleMemoizationHandlerInstance.ResetFunctions.Size = 0;
    this[3].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    *(undefined4 *)&this[3].ModuleMemoizationHandlerInstance = 0;
    this[3].ModuleMemoizationHandlerInstance.ResetFunctions.Data =
         (pmf_27707b45 *)&vftable_246;
    return (Reflectable *)this;
  }
  return (Reflectable *)0x0;
}

//==== 005fcec0 StaticGetMemberByIndex_005fcec0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   CombustionMixtureSubModule__ReflectionInfoStruct_struct_CombustionMixtureSubModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
CombustionMixtureSubModule__ReflectionInfoStruct_struct_CombustionMixtureSubModule___StaticGetMemberByIndex(ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_f8da0623__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_f8da0623__thread_safe_static_guard_0__);
    if ( cde_l2_f8da0623__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_f2146c42_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096fc6c = 0;
      _DAT_0096fc70 = 0;
      _DAT_0096fc74 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096fc78,"Unused");
      _DAT_0096fc84 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096fc88,"CombustionReaction");
      _DAT_0096fc94 = 8;
      _DAT_0096fc98 = 0x10;
      _DAT_0096fc9c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096fca0,"ChemicalReaction");
      _DAT_0096fcac = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096fcb0,"DelayComposition");
      _DAT_0096fcbc = 8;
      _DAT_0096fcc0 = 0x14;
      _DAT_0096fcc4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096fcc8,"Material");
      _DAT_0096fcd4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096fcd8,"DelayCompositionMassFraction");
      _DAT_0096fce4 = 4;
      _DAT_0096fce8 = 0x18;
      _DAT_0096fcec = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096fcf0,"double");
      _DAT_0096fcfc = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_CombustionMixtureSubModule__ReflectionInfoStruct_struct_CombustionMixtureSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_f8da0623__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_f2146c42_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_0096fc6c + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_0096fc70 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_0096fc74 + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_0096fc78 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0096fc84)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0096fc85)[iVar1];
  return __return_storage_ptr__;
}





//==== 005fd080 StaticGetMemberByIndex_005fd080 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl FlareModule__ReflectionInfoStruct_class_FlareModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
FlareModule__ReflectionInfoStruct_class_FlareModule___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_d8486758__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_d8486758__thread_safe_static_guard_0__);
    if ( cde_l2_d8486758__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_b6c20908_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096fa7c = 0;
      _DAT_0096fa80 = 0;
      _DAT_0096fa84 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096fa88,"Unused");
      _DAT_0096fa94 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096fa98,"SteamWorkshopID");
      _DAT_0096faa4 = 6;
      _DAT_0096faa8 = 0x10;
      _DAT_0096faac = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096fab0,"AStr");
      _DAT_0096fabc = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096fac0,"Description");
      _DAT_0096facc = 6;
      _DAT_0096fad0 = 0x20;
      _DAT_0096fad4 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096fad8,"AStr");
      _DAT_0096fae4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096fae8,"UsesCustomName");
      _DAT_0096faf4 = 1;
      _DAT_0096faf8 = 0x68;
      _DAT_0096fafc = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096fb00,"bool");
      _DAT_0096fb0c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096fb10,"ArmorComposition");
      _DAT_0096fb1c = 8;
      _DAT_0096fb20 = 0xec;
      _DAT_0096fb24 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096fb28,"Material");
      _DAT_0096fb34 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096fb38,"ArmorThickness_m");
      _DAT_0096fb44 = 4;
      _DAT_0096fb48 = 0xf0;
      _DAT_0096fb4c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096fb50,"double");
      _DAT_0096fb5c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096fb60,"Cylinder_m");
      _DAT_0096fb6c = 0xb;
      _DAT_0096fb70 = 0xf8;
      _DAT_0096fb74 = 0x10;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096fb78,"ModuleCylinder");
      _DAT_0096fb84 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096fb88,"Pyrotechnic");
      _DAT_0096fb94 = 10;
      _DAT_0096fb98 = 0x108;
      _DAT_0096fb9c = 0x28;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096fba0,"CombustionMixtureSubModule");
      _DAT_0096fbac = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_FlareModule__ReflectionInfoStruct_class_FlareModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_d8486758__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_b6c20908_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_0096fa7c + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_0096fa80 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_0096fa84 + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_0096fa88 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0096fa94)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0096fa95)[iVar1];
  return __return_storage_ptr__;
}





//==== 005fd350 StaticGetMemberCount_005fd350 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl CombustionMixtureSubModule__ReflectionInfoStruct_struct_CombustionMixtureSubModule___StaticGetMemberCount(void) */

int __cdecl
CombustionMixtureSubModule__ReflectionInfoStruct_struct_CombustionMixtureSubModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_020776c6__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_020776c6__thread_safe_static_guard_0__);
    if ( cde_l2_020776c6__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_83a3a47a_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096fbc4 = 0;
      _DAT_0096fbc8 = 0;
      _DAT_0096fbcc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096fbd0,"Unused");
      _DAT_0096fbdc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096fbe0,"CombustionReaction");
      _DAT_0096fbec = 8;
      _DAT_0096fbf0 = 0x10;
      _DAT_0096fbf4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096fbf8,"ChemicalReaction");
      _DAT_0096fc04 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096fc08,"DelayComposition");
      _DAT_0096fc14 = 8;
      _DAT_0096fc18 = 0x14;
      _DAT_0096fc1c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096fc20,"Material");
      _DAT_0096fc2c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096fc30,"DelayCompositionMassFraction");
      _DAT_0096fc3c = 4;
      _DAT_0096fc40 = 0x18;
      _DAT_0096fc44 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096fc48,"double");
      _DAT_0096fc54 = 0;
      atexit( private__static_int_const___cdecl_CombustionMixtureSubModule__ReflectionInfoStruct_struct_CombustionMixtureSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_020776c6__thread_safe_static_guard_0__);
    }
  }
  return 4;
}





//==== 005fd4c0 StaticGetMemberCount_005fd4c0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl FlareModule__ReflectionInfoStruct_class_FlareModule___StaticGetMemberCount(void) */

int __cdecl FlareModule__ReflectionInfoStruct_class_FlareModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_7b9deaa8__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_7b9deaa8__thread_safe_static_guard_0__);
    if ( cde_l2_7b9deaa8__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_a92ec648_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096f934 = 0;
      _DAT_0096f938 = 0;
      _DAT_0096f93c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f940,"Unused");
      _DAT_0096f94c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f950,"SteamWorkshopID");
      _DAT_0096f95c = 6;
      _DAT_0096f960 = 0x10;
      _DAT_0096f964 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f968,"AStr");
      _DAT_0096f974 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f978,"Description");
      _DAT_0096f984 = 6;
      _DAT_0096f988 = 0x20;
      _DAT_0096f98c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f990,"AStr");
      _DAT_0096f99c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f9a0,"UsesCustomName");
      _DAT_0096f9ac = 1;
      _DAT_0096f9b0 = 0x68;
      _DAT_0096f9b4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f9b8,"bool");
      _DAT_0096f9c4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f9c8,"ArmorComposition");
      _DAT_0096f9d4 = 8;
      _DAT_0096f9d8 = 0xec;
      _DAT_0096f9dc = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f9e0,"Material");
      _DAT_0096f9ec = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096f9f0,"ArmorThickness_m");
      _DAT_0096f9fc = 4;
      _DAT_0096fa00 = 0xf0;
      _DAT_0096fa04 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096fa08,"double");
      _DAT_0096fa14 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096fa18,"Cylinder_m");
      _DAT_0096fa24 = 0xb;
      _DAT_0096fa28 = 0xf8;
      _DAT_0096fa2c = 0x10;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096fa30,"ModuleCylinder");
      _DAT_0096fa3c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096fa40,"Pyrotechnic");
      _DAT_0096fa4c = 10;
      _DAT_0096fa50 = 0x108;
      _DAT_0096fa54 = 0x28;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096fa58,"CombustionMixtureSubModule");
      _DAT_0096fa64 = 0;
      atexit( private__static_int_const___cdecl_FlareModule__ReflectionInfoStruct_class_FlareModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_7b9deaa8__thread_safe_static_guard_0__);
    }
  }
  return 8;
}





//==== 005fd740 StaticGetReflectionInfo_005fd740 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct FlareModule__ReflectionInfoStruct_L_classFlareModule_G_ * __cdecl
   FlareModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_FlareModule_G_ * __cdecl FlareModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_b7dd1f74__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_b7dd1f74__thread_safe_static_guard_0__);
    if ( cde_l2_b7dd1f74__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_08db0582_ReflectionInfo) = &vftable_248;
      _Init_thread_footer(& cde_l2_b7dd1f74__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_08db0582_ReflectionInfo;
}





//==== 005fe950 GetIcon_005fe950 ====


/* public: virtual void (__cdecl*__thiscall NuclearPayloadModule__GetIcon(void)const )(void) */

_func_void * __thiscall NuclearPayloadModule__GetIcon(NuclearPayloadModule *this)

{
  return (_func_void *)(uintptr_t) Icons__RadiationHazard;
}





//==== 005fea20 GetComposition_005fea20 ====


/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   NuclearPayloadModule__GetComposition(void)const  */

Darray_L_struct_MaterialConstituent_G_ * __thiscall
NuclearPayloadModule__GetComposition(NuclearPayloadModule *this,Darray_L_struct_MaterialConstituent_G_ * __return_storage_ptr__)

{
  int *piVar1;
  Material *pMVar2;
  FusionReaction *this_00;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  Darray_L_struct_MaterialConstituent_G_ *pDVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  double dVar13;

  undefined **ppuStack_2c;
  void *pvStack_28;
  undefined8 uStack_24;
  double *pdStack_1c;
  int iStack_18;
  undefined8 uStack_14;
  undefined8 uStack_c;
  
  *(undefined4 *)__return_storage_ptr__ = 0;
  *(undefined4 *)(__return_storage_ptr__ + 4) = 0;
  *(undefined4 *)(__return_storage_ptr__ + 8) = 0;
  *(undefined4 *)(__return_storage_ptr__ + 0xc) = 0;
  Module__GetComposition((Module *)this,(Darray_L_MaterialComposition_G_ *)__return_storage_ptr__);
  pMVar2 = *(Material * *)&(this->SlowExplosive).DelayCompositionMassFraction;
  Material__GetUnenrichedMaterial_Memoize(pMVar2);
  if ((char)pMVar2[1].ElementCount.Size == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pdStack_1c = *(double * *)&(this->SlowExplosive).DelayCompositionMassFraction;
  if (pMVar2[1].ElementCount.Data == pdStack_1c) {
    uStack_14 = 1.0;
  }
  else {
    uStack_14 = this->FusionFuelDensity_kg__m3;
  }
  iVar9 = *(int *)(__return_storage_ptr__ + 8);
  uStack_14 = *(double *)&this->FusionBoost * uStack_14;
  uStack_c = (double)CONCAT44(iVar9 + 1,(undefined4)uStack_c);
  util__Darray_struct_MaterialConstituent___SetSize(__return_storage_ptr__,(int *)((int)&uStack_c + 4));
  bVar7 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                    ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)__return_storage_ptr__,
                     iVar9);
  if (bVar7) {
    puVar11 = (undefined4 *)
              (*(int *)(__return_storage_ptr__ + 4) + -0x10 + *(int *)(__return_storage_ptr__ + 8) * 0x10);
    *puVar11 = (undefined4)(uintptr_t)(pdStack_1c);
    puVar11[1] = iStack_18;
    puVar11[2] = (int)uStack_14;
    puVar11[3] = (*(uint32_t*)((char*)&(uStack_14)+4));
  }
  pMVar2 = *(Material * *)&(this->SlowExplosive).DelayCompositionMassFraction;
  uStack_c = (double)CONCAT44(pMVar2,(undefined4)uStack_c);
  Material__GetUnenrichedMaterial_Memoize(pMVar2);
  if ((char)pMVar2[1].ElementCount.Size == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pMVar2 = *(Material * *)&(this->SlowExplosive).DelayCompositionMassFraction;
  if (*(Material **)((*(uint32_t*)((char*)&(uStack_c)+4)) + 0x274) == pMVar2) {
    uStack_c = 0.0;
  }
  else {
    uStack_c = 1.0 - this->FusionFuelDensity_kg__m3;
  }
  uStack_c = *(double *)&this->FusionBoost * uStack_c;
  Material__GetUnenrichedMaterial_Memoize(pMVar2);
  if ((char)pMVar2[1].ElementCount.Size == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pdStack_1c = pMVar2[1].ElementCount.Data;
  iVar9 = *(int *)(__return_storage_ptr__ + 8);
  uStack_14 = uStack_c;
  uStack_c = (double)CONCAT44(iVar9 + 1,(undefined4)uStack_c);
  util__Darray_struct_MaterialConstituent___SetSize(__return_storage_ptr__,(int *)((int)&uStack_c + 4));
  bVar7 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                    ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)__return_storage_ptr__,
                     iVar9);
  if (bVar7) {
    puVar11 = (undefined4 *)
              (*(int *)(__return_storage_ptr__ + 4) + -0x10 + *(int *)(__return_storage_ptr__ + 8) * 0x10);
    *puVar11 = (undefined4)(uintptr_t)(pdStack_1c);
    puVar11[1] = iStack_18;
    puVar11[2] = (int)uStack_14;
    puVar11[3] = (*(uint32_t*)((char*)&(uStack_14)+4));
  }
  dVar13 = *(double *)&this->Detonator;
  iVar9 = *(int *)((int)&(this->SlowExplosive).DelayCompositionMassFraction + 4);
  uStack_c = *(double *)&this->FusionBoost /
             *(double *)(*(int *)&(this->SlowExplosive).DelayCompositionMassFraction + 0x30);
  dVar13 = ((dVar13 * dVar13 * dVar13 * 4.1887902047863905 + uStack_c) * 3.0) / 12.566370614359172;
  libm_sse2_pow_precise(0.0,0.0);
  dVar13 = dVar13 - *(double *)&this->Detonator;
  uStack_14 = 0.0;
  if (0.0 <= dVar13) {
    uStack_14 = dVar13;
  }
  uStack_14 = uStack_14 + *(double *)&this->Detonator;
  dVar13 = (uStack_c * 3.0) / 12.566370614359172;
  libm_sse2_pow_precise(0.0,0.0);
  dVar13 = ((dVar13 * *(double *)(iVar9 + 0x30)) / (*(double *)&this->FusionBoost / uStack_c)) *
           0.25 + uStack_14;
  uStack_14 = (dVar13 * dVar13 * dVar13 * 4.1887902047863905 -
              uStack_14 * uStack_14 * uStack_14 * 4.1887902047863905) * *(double *)(iVar9 + 0x30);
  iVar10 = *(int *)(__return_storage_ptr__ + 8);
  uStack_c = (double)CONCAT44(iVar10 + 1,(undefined4)uStack_c);
  pdStack_1c = (double *)iVar9;
  util__Darray_struct_MaterialConstituent___SetSize(__return_storage_ptr__,(int *)((int)&uStack_c + 4));
  bVar7 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                    ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)__return_storage_ptr__,
                     iVar10);
  if (bVar7) {
    piVar1 = (int *)(*(int *)(__return_storage_ptr__ + 4) + -0x10 +
                    *(int *)(__return_storage_ptr__ + 8) * 0x10);
    *piVar1 = (int)pdStack_1c;
    piVar1[1] = iStack_18;
    piVar1[2] = (int)uStack_14;
    piVar1[3] = (*(uint32_t*)((char*)&(uStack_14)+4));
  }
  uStack_24 = GetFastExplosiveMass_kg(this);
  iVar9 = *(int *)(__return_storage_ptr__ + 8);
  ppuStack_2c = *(undefined ***)&this->InnerExplosiveWidth_m;
  uStack_c = (double)CONCAT44(iVar9 + 1,(undefined4)uStack_c);
  uStack_14 = uStack_24;
  util__Darray_struct_MaterialConstituent___SetSize(__return_storage_ptr__,(int *)((int)&uStack_c + 4));
  bVar7 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                    ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)__return_storage_ptr__,
                     iVar9);
  if (bVar7) {
    puVar11 = (undefined4 *)
              (*(int *)(__return_storage_ptr__ + 4) + -0x10 + *(int *)(__return_storage_ptr__ + 8) * 0x10);
    *puVar11 = (undefined4)(uintptr_t)(ppuStack_2c);
    puVar11[1] = (undefined4)(uintptr_t)(pvStack_28);
    puVar11[2] = (undefined4)uStack_24;
    puVar11[3] = (*(uint32_t*)((char*)&(uStack_24)+4));
  }
  this_00 = *(FusionReaction * *)&(this->Detonator).HardRange_km;
  if (this_00 != (FusionReaction *)0x0) {
    dVar13 = *(double *)&this->Detonator;
    pDVar8 = (Darray_L_struct_MaterialConstituent_G_ *)
             FusionReaction__GetMaterialCompositions
                       (this_00,(Darray_L_MaterialComposition_G_ *)&ppuStack_2c,
                        dVar13 * dVar13 * dVar13 * 4.1887902047863905 * (this->Detonator).ActivationRange_km);
    if (*(int *)(__return_storage_ptr__ + 8) == 0) {
      util__Darray_struct_MaterialConstituent___operator(__return_storage_ptr__,pDVar8);
    }
    else {
      iVar9 = (**(code **)(*(int *)pDVar8 + 0xc))();
      if (iVar9 != 0) {
        iVar9 = *(int *)(__return_storage_ptr__ + 8);
        iVar10 = (**(code **)(*(int *)pDVar8 + 0xc))();
        uStack_c = (double)CONCAT44(iVar10 + *(int *)(__return_storage_ptr__ + 8),(undefined4)uStack_c);
        util__Darray_struct_MaterialConstituent___SetSize
                  (__return_storage_ptr__,(int *)((int)&uStack_c + 4));
        util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                  ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)__return_storage_ptr__,
                   iVar9);
        puVar11 = *(undefined4 **)(pDVar8 + 4);
        puVar12 = (undefined4 *)(iVar9 * 0x10 + *(int *)(__return_storage_ptr__ + 4));
        if (puVar12 !=
            (undefined4 *)(*(int *)(__return_storage_ptr__ + 8) * 0x10 + *(int *)(__return_storage_ptr__ + 4))
           ) {
          do {
            uVar3 = *puVar11;
            uVar4 = puVar11[1];
            uVar5 = puVar11[2];
            uVar6 = puVar11[3];
            puVar11 = puVar11 + 4;
            *puVar12 = uVar3;
            puVar12[1] = uVar4;
            puVar12[2] = uVar5;
            puVar12[3] = uVar6;
            puVar12 = puVar12 + 4;
          } while (puVar12 !=
                   (undefined4 *)
                   (*(int *)(__return_storage_ptr__ + 8) * 0x10 + *(int *)(__return_storage_ptr__ + 4)));
        }
      }
    }
    ppuStack_2c = (undefined **)(&vftable_75);
    if (pvStack_28 != (void *)0x0) {
      port_op_delete(pvStack_28);
    }
  }
  return __return_storage_ptr__;
}





//==== 005fee00 GetHullRadius_m_005fee00 ====

/* public: virtual double __thiscall NuclearPayloadModule__GetHullRadius_m(void)const  */

double __thiscall NuclearPayloadModule__GetHullRadius_m(NuclearPayloadModule *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar5 = CombustionMixtureSubModule__GetDetonationVelocity_m__s
                    ((CombustionMixtureSubModule *)&(this->SlowExplosive).CachedMass_kg);
  dVar6 = Material__GetDetonationVelocity_m__s(*(Material **)&this->InnerExplosiveWidth_m);
  if (dVar6 <= 0.0) {
    dVar1 = 1.0;
  }
  else {
    dVar1 = dVar5 / dVar6;
    if (dVar5 / dVar6 <= 0.0) {
      dVar1 = 0.0;
    }
    if (1.0 <= dVar1) {
      dVar1 = 1.0;
    }
  }
  dVar5 = *(double *)&this->Detonator;
  dVar4 = *(double *)&this->FusionBoost /
          *(double *)(*(int *)&(this->SlowExplosive).DelayCompositionMassFraction + 0x30);
  dVar2 = ((dVar5 * dVar5 * dVar5 * 4.1887902047863905 + dVar4) * 3.0) / 12.566370614359172;
  libm_sse2_pow_precise(0.0,0.0);
  dVar5 = *(double *)&this->Detonator;
  dVar2 = dVar2 - dVar5;
  dVar6 = 0.0;
  if (0.0 <= dVar2) {
    dVar6 = dVar2;
  }
  dVar3 = (dVar4 * 3.0) / 12.566370614359172;
  libm_sse2_pow_precise(0.0,0.0);
  dVar2 = *(double *)&(this->Detonator)._pad_0x8_2;
  return dVar6 + dVar5 +
         ((dVar3 * *(double *)
                    (*(int *)((int)&(this->SlowExplosive).DelayCompositionMassFraction + 4) + 0x30))
         / (*(double *)&this->FusionBoost / dVar4)) * 0.25 + dVar2 + dVar2 * dVar1;
}

//==== 005fef40 GetHullLength_m_005fef40 ====

/* public: virtual double __thiscall NuclearPayloadModule__GetHullLength_m(void)const  */

double __thiscall NuclearPayloadModule__GetHullLength_m(NuclearPayloadModule *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar5 = CombustionMixtureSubModule__GetDetonationVelocity_m__s
                    ((CombustionMixtureSubModule *)&(this->SlowExplosive).CachedMass_kg);
  dVar6 = Material__GetDetonationVelocity_m__s(*(Material **)&this->InnerExplosiveWidth_m);
  if (dVar6 <= 0.0) {
    dVar1 = 1.0;
  }
  else {
    dVar1 = dVar5 / dVar6;
    if (dVar5 / dVar6 <= 0.0) {
      dVar1 = 0.0;
    }
    if (1.0 <= dVar1) {
      dVar1 = 1.0;
    }
  }
  dVar5 = *(double *)&this->Detonator;
  dVar4 = *(double *)&this->FusionBoost /
          *(double *)(*(int *)&(this->SlowExplosive).DelayCompositionMassFraction + 0x30);
  dVar2 = ((dVar5 * dVar5 * dVar5 * 4.1887902047863905 + dVar4) * 3.0) / 12.566370614359172;
  libm_sse2_pow_precise(0.0,0.0);
  dVar5 = *(double *)&this->Detonator;
  dVar2 = dVar2 - dVar5;
  dVar6 = 0.0;
  if (0.0 <= dVar2) {
    dVar6 = dVar2;
  }
  dVar3 = (dVar4 * 3.0) / 12.566370614359172;
  libm_sse2_pow_precise(0.0,0.0);
  dVar2 = *(double *)&(this->Detonator)._pad_0x8_2;
  dVar5 = dVar6 + dVar5 +
          ((dVar3 * *(double *)
                     (*(int *)((int)&(this->SlowExplosive).DelayCompositionMassFraction + 4) + 0x30)
           ) / (*(double *)&this->FusionBoost / dVar4)) * 0.25 + dVar2 + dVar2 * dVar1;
  dVar5 = dVar5 + dVar5;
  return dVar5 + dVar5;
}

//==== 005ff080 GetStructuralMaterial_005ff080 ====


/* public: virtual class Material const * __thiscall
   NuclearPayloadModule__GetStructuralMaterial(void)const  */

Material * __thiscall NuclearPayloadModule__GetStructuralMaterial(NuclearPayloadModule *this)

{
  return *(Material **)&this->InnerExplosiveWidth_m;
}





//==== 005ff090 GetEngagementRange_km_005ff090 ====


/* public: virtual class util__Maybe_L_double_G_ 
   NuclearPayloadModule__GetEngagementRange_km(double)const  */

Maybe_L_double_G_ * 
NuclearPayloadModule__GetEngagementRange_km
          (NuclearPayloadModule *this,Maybe_L_double_G_ *__return_storage_ptr__,double param_1)

{
  __return_storage_ptr__->Data = *(double *)(this + 1);
  __return_storage_ptr__->IsValidData = true;
  return __return_storage_ptr__;
}





//==== 005ff0b0 GetAreaOfEffectRadius_m_005ff0b0 ====


/* public: virtual double __thiscall NuclearPayloadModule__GetAreaOfEffectRadius_m(void)const  */

double __thiscall NuclearPayloadModule__GetAreaOfEffectRadius_m(NuclearPayloadModule *this)

{
  return *(double *)(this + 1) * 1000.0;
}





//==== 005ff0c0 GetModuleAmmoExplosion_005ff0c0 ====

/* public: virtual struct AmmoExplosion 
   NuclearPayloadModule__GetModuleAmmoExplosion(void)const  */

AmmoExplosion * 
NuclearPayloadModule__GetModuleAmmoExplosion
          (NuclearPayloadModule *this,AmmoExplosion *__return_storage_ptr__)

{
  Material *this_00;
  Darray_L_MaterialConstituent_G_ *pDVar1;
  double dVar2;
  Darray_L_MaterialConstituent_G_ local_14;
  
  (__return_storage_ptr__->GasComposition)._pad_0x0_0 =
       (int)&vftable_15;
  (__return_storage_ptr__->GasComposition).Data = (MaterialConstituent *)0x0;
  (__return_storage_ptr__->GasComposition).Size = 0;
  (__return_storage_ptr__->GasComposition).Capacity = 0;
  this_00 = *(Material **)&this->InnerExplosiveWidth_m;
  *(undefined4 *)&__return_storage_ptr__->Mass_kg = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->Mass_kg + 4) = 0;
  *(undefined4 *)&__return_storage_ptr__->Temperature_K = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->Temperature_K + 4) = 0;
  pDVar1 = (Darray_L_MaterialConstituent_G_ *)(uintptr_t)(Material__GetDecompositionProductsByMassPercent(this_00));
  util__Darray_L_MaterialConstituent_G___op_assign
            (&__return_storage_ptr__->GasComposition,(Darray_L_struct_MaterialConstituent_G_ *)pDVar1);
  local_14._pad_0x0_0 = (int)&vftable_15;
  if (local_14.Data != (MaterialConstituent *)0x0) {
    port_op_delete(local_14.Data);
  }
  dVar2 = GetFastExplosiveMass_kg(this);
  __return_storage_ptr__->Mass_kg = dVar2;
  dVar2 = Material__GetAdiabaticFlameTemperature_K(*(Material **)&this->InnerExplosiveWidth_m);
  __return_storage_ptr__->Temperature_K = dVar2;
  return __return_storage_ptr__;
}

//==== 005ffe60 InnerSortFunction_005ffe60 ====

/* public: virtual bool __thiscall NuclearPayloadModule__InnerSortFunction(class Module const
   *,class Module const *)const  */

bool __thiscall
NuclearPayloadModule__InnerSortFunction(NuclearPayloadModule *this,Module *param_1,Module *param_2)

{
  int iVar1;
  int iVar2;
  Material *pMVar3;
  Module *pMVar4;
  Module *this_00;
  undefined8 uVar5;
  bool bVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uStack_40;
  undefined8 uStack_30;
  double local_10;
  
  uVar5 = uStack_40;
  this_00 = param_1;
  *(uint32_t *)&local_10 = 1.0;
  if ((char)param_1[1].Models.Size == '\0') {
    iVar1 = *(int *)&param_1[1].GetTotalPowerUsage_W_MemoizedValue.IsValidData;
    pMVar4 = param_1 + 1;
    param_1 = (Module *)(iVar1 + 1);
    util__Darray_L_util__tuple2_L_Order__Type_Cint_G___G___SetSize
              ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)&pMVar4->GetTotalPowerUsage_W_MemoizedValue
               ,(int *)&param_1);
    bVar6 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &this_00[1].GetTotalPowerUsage_W_MemoizedValue,iVar1);
    if (bVar6) {
      iVar1 = *(int *)((int)&this_00[1].GetTotalPowerUsage_W_MemoizedValue.Data + 4);
      iVar2 = *(int *)&this_00[1].GetTotalPowerUsage_W_MemoizedValue.IsValidData;
      *(code **)(iVar1 + -8 + iVar2 * 8) = (long long int (*)())(ChemicalReaction__GetEnergyDensity_J__kg_Clear);
      *(undefined4 *)(iVar1 + -4 + iVar2 * 8) = 0;
    }
    dVar12 = GetNuclearEfficiency((NuclearPayloadModule *)this_00);
    uVar9 = (undefined4)((ulonglong)dVar12 >> 0x20);
    uVar8 = SUB84(dVar12,0);
    if (dVar12 <= 0.0) {
      uVar9 = 0;
      uVar8 = 0;
    }
    dVar12 = (double)CONCAT44(uVar9,uVar8) * -2.0;
    libm_sse2_exp_precise(0.0);
    pMVar3 = (Material *)this_00[2]._pad_0x8_2;
    Material__GetUnenrichedMaterial_Memoize(pMVar3);
    if ((char)pMVar3[1].ElementCount.Size == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if ((Material *)pMVar3[1].ElementCount.Data == (Material *)this_00[2]._pad_0x8_2) {
      dVar10 = 1.0;
    }
    else {
      dVar10 = *(double *)&this_00[2].UsesCustomName;
    }
    dVar11 = *(double *)&this_00[2].Models.Size;
    dVar13 = Material__GetFissionEnergy_MeV((Material *)this_00[2]._pad_0x8_2);
    dVar14 = Material__GetMolarMass_kg__mol((Material *)this_00[2]._pad_0x8_2);
    dVar13 = eV_to_J(dVar13 * 1000000.0);
    dVar15 = GetFusionBoostEnergyReleased_J((NuclearPayloadModule *)this_00);
    uStack_40 = CONCAT71((*(uint56_t*)((char*)&(uStack_40)+1)),1);
    (*(uint32_t*)((char*)&(uStack_40)+4)) = SUB84(uVar5,4);
    *(double *)&this_00[1].Models =
         dVar15 + dVar13 * (6.022e+23 / dVar14) * dVar11 * dVar10 * (1.0 - dVar12) * 0.5;
    this_00[1].Models.Size = (int)uStack_40;
    this_00[1].Models.Capacity = (*(uint32_t*)((char*)&(uStack_40)+4));
    if ((char)this_00[1].Models.Size == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  pMVar4 = param_2;
  dVar12 = *(double *)&this_00[1].Models;
  pcVar7 = DebugBreak_exref;
  if ((char)param_2[1].Models.Size == '\0') {
    iVar1 = *(int *)&param_2[1].GetTotalPowerUsage_W_MemoizedValue.IsValidData;
    param_1 = (Module *)(iVar1 + 1);
    util__Darray_L_util__tuple2_L_Order__Type_Cint_G___G___SetSize
              ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)
               &param_2[1].GetTotalPowerUsage_W_MemoizedValue,(int *)&param_1);
    bVar6 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &pMVar4[1].GetTotalPowerUsage_W_MemoizedValue,iVar1);
    if (bVar6) {
      iVar1 = *(int *)((int)&pMVar4[1].GetTotalPowerUsage_W_MemoizedValue.Data + 4);
      iVar2 = *(int *)&pMVar4[1].GetTotalPowerUsage_W_MemoizedValue.IsValidData;
      *(code **)(iVar1 + -8 + iVar2 * 8) = (long long int (*)())(ChemicalReaction__GetEnergyDensity_J__kg_Clear);
      *(undefined4 *)(iVar1 + -4 + iVar2 * 8) = 0;
    }
    dVar10 = GetNuclearEfficiency((NuclearPayloadModule *)pMVar4);
    uVar9 = (undefined4)((ulonglong)dVar10 >> 0x20);
    uVar8 = SUB84(dVar10,0);
    if (dVar10 <= 0.0) {
      uVar9 = 0;
      uVar8 = 0;
    }
    dVar10 = (double)CONCAT44(uVar9,uVar8) * -2.0;
    libm_sse2_exp_precise(0.0);
    pMVar3 = (Material *)pMVar4[2]._pad_0x8_2;
    param_1 = (Module *)pMVar3;
    Material__GetUnenrichedMaterial_Memoize(pMVar3);
    pcVar7 = DebugBreak_exref;
    if ((char)pMVar3[1].ElementCount.Size == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      pcVar7 = DebugBreak_exref;
      DebugBreak();
    }
    if ((Material *)param_1[7].Models.Capacity == (Material *)pMVar4[2]._pad_0x8_2) {
      dVar11 = 1.0;
    }
    else {
      dVar11 = *(double *)&pMVar4[2].UsesCustomName;
    }
    dVar13 = *(double *)&pMVar4[2].Models.Size;
    dVar14 = Material__GetFissionEnergy_MeV((Material *)pMVar4[2]._pad_0x8_2);
    dVar15 = Material__GetMolarMass_kg__mol((Material *)pMVar4[2]._pad_0x8_2);
    dVar14 = eV_to_J(dVar14 * 1000000.0);
    dVar10 = dVar14 * (6.022e+23 / dVar15) * dVar13 * dVar11 * (1.0 - dVar10) * 0.5;
    dVar11 = GetFusionBoostEnergyReleased_J((NuclearPayloadModule *)pMVar4);
    uStack_30 = CONCAT71((int7)((ulonglong)dVar10 >> 8),1);
    (*(uint32_t*)((char*)&(uStack_30)+4)) = (int)((ulonglong)dVar10 >> 0x20);
    *(double *)&pMVar4[1].Models = dVar11 + dVar10;
    pMVar4[1].Models.Size = (int)uStack_30;
    pMVar4[1].Models.Capacity = (*(uint32_t*)((char*)&(uStack_30)+4));
  }
  if ((char)pMVar4[1].Models.Size == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    (*pcVar7)();
  }
  if (dVar12 / 4184000000.0 != *(double *)&pMVar4[1].Models / 4184000000.0) {
    if ((char)this_00[1].Models.Size == '\0') {
      iVar1 = *(int *)&this_00[1].GetTotalPowerUsage_W_MemoizedValue.IsValidData;
      param_1 = (Module *)(iVar1 + 1);
      util__Darray_L_util__tuple2_L_Order__Type_Cint_G___G___SetSize
                ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)
                 &this_00[1].GetTotalPowerUsage_W_MemoizedValue,(int *)&param_1);
      bVar6 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                        ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                         &this_00[1].GetTotalPowerUsage_W_MemoizedValue,iVar1);
      if (bVar6) {
        iVar1 = *(int *)((int)&this_00[1].GetTotalPowerUsage_W_MemoizedValue.Data + 4);
        iVar2 = *(int *)&this_00[1].GetTotalPowerUsage_W_MemoizedValue.IsValidData;
        *(code **)(iVar1 + -8 + iVar2 * 8) = (long long int (*)())(ChemicalReaction__GetEnergyDensity_J__kg_Clear);
        *(undefined4 *)(iVar1 + -4 + iVar2 * 8) = 0;
      }
      dVar12 = GetNuclearEfficiency((NuclearPayloadModule *)this_00);
      uVar9 = (undefined4)((ulonglong)dVar12 >> 0x20);
      uVar8 = SUB84(dVar12,0);
      if (dVar12 <= 0.0) {
        uVar9 = 0;
        uVar8 = 0;
      }
      dVar12 = (double)CONCAT44(uVar9,uVar8) * -2.0;
      libm_sse2_exp_precise(0.0);
      pMVar3 = (Material *)this_00[2]._pad_0x8_2;
      Material__GetUnenrichedMaterial_Memoize(pMVar3);
      if ((char)pMVar3[1].ElementCount.Size == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      if ((Material *)pMVar3[1].ElementCount.Data == (Material *)this_00[2]._pad_0x8_2) {
        dVar10 = 1.0;
      }
      else {
        dVar10 = *(double *)&this_00[2].UsesCustomName;
      }
      dVar11 = *(double *)&this_00[2].Models.Size;
      dVar13 = Material__GetFissionEnergy_MeV((Material *)this_00[2]._pad_0x8_2);
      dVar14 = Material__GetMolarMass_kg__mol((Material *)this_00[2]._pad_0x8_2);
      dVar13 = eV_to_J(dVar13 * 1000000.0);
      dVar12 = dVar13 * (6.022e+23 / dVar14) * dVar11 * dVar10 * (1.0 - dVar12) * 0.5;
      dVar10 = GetFusionBoostEnergyReleased_J((NuclearPayloadModule *)this_00);
      (*(uint56_t*)((char*)&(uStack_40)+1)) = (undefined7)((ulonglong)dVar12 >> 8);
      uStack_40 = CONCAT71((*(uint56_t*)((char*)&(uStack_40)+1)),1);
      (*(uint32_t*)((char*)&(uStack_40)+4)) = (int)((ulonglong)dVar12 >> 0x20);
      *(double *)&this_00[1].Models = dVar10 + dVar12;
      this_00[1].Models.Size = (int)uStack_40;
      this_00[1].Models.Capacity = (*(uint32_t*)((char*)&(uStack_40)+4));
      if ((char)this_00[1].Models.Size == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
    }
    dVar12 = *(double *)&this_00[1].Models;
    if ((char)pMVar4[1].Models.Size == '\0') {
      iVar1 = *(int *)&pMVar4[1].GetTotalPowerUsage_W_MemoizedValue.IsValidData;
      param_1 = (Module *)(iVar1 + 1);
      util__Darray_L_util__tuple2_L_Order__Type_Cint_G___G___SetSize
                ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)
                 &pMVar4[1].GetTotalPowerUsage_W_MemoizedValue,(int *)&param_1);
      bVar6 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                        ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                         &pMVar4[1].GetTotalPowerUsage_W_MemoizedValue,iVar1);
      if (bVar6) {
        iVar1 = *(int *)((int)&pMVar4[1].GetTotalPowerUsage_W_MemoizedValue.Data + 4);
        iVar2 = *(int *)&pMVar4[1].GetTotalPowerUsage_W_MemoizedValue.IsValidData;
        *(code **)(iVar1 + -8 + iVar2 * 8) = (long long int (*)())(ChemicalReaction__GetEnergyDensity_J__kg_Clear);
        *(undefined4 *)(iVar1 + -4 + iVar2 * 8) = 0;
      }
      dVar10 = GetNuclearEfficiency((NuclearPayloadModule *)pMVar4);
      uVar9 = (undefined4)((ulonglong)dVar10 >> 0x20);
      uVar8 = SUB84(dVar10,0);
      if (dVar10 <= 0.0) {
        uVar9 = 0;
        uVar8 = 0;
      }
      dVar10 = (double)CONCAT44(uVar9,uVar8) * -2.0;
      libm_sse2_exp_precise(0.0);
      pMVar3 = (Material *)pMVar4[2]._pad_0x8_2;
      Material__GetUnenrichedMaterial_Memoize(pMVar3);
      if ((char)pMVar3[1].ElementCount.Size == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      if ((Material *)pMVar3[1].ElementCount.Data != (Material *)pMVar4[2]._pad_0x8_2) {
        *(uint32_t *)&local_10 = *(double *)&pMVar4[2].UsesCustomName;
      }
      dVar11 = *(double *)&pMVar4[2].Models.Size;
      dVar13 = Material__GetFissionEnergy_MeV((Material *)pMVar4[2]._pad_0x8_2);
      dVar14 = Material__GetMolarMass_kg__mol((Material *)pMVar4[2]._pad_0x8_2);
      dVar13 = eV_to_J(dVar13 * 1000000.0);
      dVar10 = dVar13 * (6.022e+23 / dVar14) * dVar11 * local_10 * (1.0 - dVar10) * 0.5;
      dVar11 = GetFusionBoostEnergyReleased_J((NuclearPayloadModule *)pMVar4);
      (*(uint56_t*)((char*)&(uStack_40)+1)) = (undefined7)((ulonglong)dVar10 >> 8);
      uStack_40 = CONCAT71((*(uint56_t*)((char*)&(uStack_40)+1)),1);
      (*(uint32_t*)((char*)&(uStack_40)+4)) = (int)((ulonglong)dVar10 >> 0x20);
      *(double *)&pMVar4[1].Models = dVar11 + dVar10;
      pMVar4[1].Models.Size = (int)uStack_40;
      pMVar4[1].Models.Capacity = (*(uint32_t*)((char*)&(uStack_40)+4));
      if ((char)pMVar4[1].Models.Size == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
    }
    return dVar12 / 4184000000.0 < *(double *)&pMVar4[1].Models / 4184000000.0;
  }
  bVar6 = Module__InnerSortFunction((Module *)this,this_00,pMVar4);
  return bVar6;
}

//==== 00600510 GetInfoBoxes_00600510 ====


/* public: virtual class util__Darray_L_structInfoBox_G_ __thiscall
   NuclearPayloadModule__GetInfoBoxes(void)const  */

void __thiscall NuclearPayloadModule__GetInfoBoxes(NuclearPayloadModule *this)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  LocStr *this_00;
  Str_L_char_G_ *pSVar3;
  Darray_L_struct_InfoBox_G_ *pDVar4;
  Darray_L_struct_InfoBox_G_ *in_stack_00000004;
  void *apvStack_ac [3];
  void *pvStack_a0;
  NuclearPayloadModule *pNStack_94;
  code *pcStack_90;
  Str_L_char_G_ SStack_8c;
  code *pcStack_80;
  NuclearPayloadModule *pNStack_7c;
  code *pcStack_78;
  Str_L_char_G_ SStack_74;
  undefined4 uStack_68;
  undefined4 uStack_64;
  Str_L_char_G_ SStack_60;
  undefined8 uStack_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  Str_L_char_G_ SStack_40;
  undefined **ppuStack_34;
  Str_L_char_G_ SStack_30;
  Str_L_char_G_ SStack_24;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_InfoBox___Darray_struct_InfoBox(in_stack_00000004,1);
  util__Str_char___Str_char(&SStack_30,"InfoBox NuclearPayload Tooltip");
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = CONCAT31((*(uint24_t*)((char*)&(uStack_c)+1)),1);
  SStack_24.Data = (char *)0x0;
  SStack_24.Capacity = 0;
  SStack_24.Length = 0;
  this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_ac,&SStack_30,&SStack_24);
  pSVar3 = util__LocStr__operator__o3(this_00);
  uStack_48 = 0;
  uStack_44 = 0;
  util__Str_char___Str_char(&SStack_40,pSVar3);
  pcStack_90 = (long long int (*)())(util__DelegateFactory_class_NuclearPayloadModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_NuclearPayloadModule__GetNuclearInfo_void_const__0);
  SStack_8c.Data = (char *)0x0;
  SStack_8c.Capacity = 0;
  SStack_8c.Length = 0;
  pcStack_80 = (long long int (*)())(Icons__NuclearExplosion);
  pcStack_78 = (long long int (*)())(util__DelegateFactory_class_NuclearPayloadModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_NuclearPayloadModule__GetNuclearInfo_void_const__0);
  pNStack_94 = this;
  pNStack_7c = this;
  util__Str_char___Str_char(&SStack_74,&SStack_8c);
  uStack_68 = uStack_48;
  uStack_64 = uStack_44;
  util__Str_char___Str_char(&SStack_60,&SStack_40);
  uStack_54 = CONCAT44(uStack_10,uStack_14);
  uStack_4c = uStack_c;
  if (SStack_40.Data != (char *)0x0) {
    port_op_delete(SStack_40.Data);
  }
  iVar1 = *(int *)(in_stack_00000004 + 8);
  iStack_18 = iVar1 + 1;
  util__Darray_struct_InfoBox___SetSize(in_stack_00000004,&iStack_18);
  bVar2 = util__Darray_struct_InfoBox___CheckSize(in_stack_00000004,iVar1);
  if (bVar2) {
    iVar1 = *(int *)(in_stack_00000004 + 4) + *(int *)(in_stack_00000004 + 8) * 0x38;
    *(code **)(iVar1 + -0x38) = pcStack_80;
    *(NuclearPayloadModule **)(iVar1 + -0x34) = pNStack_7c;
    *(code **)(iVar1 + -0x30) = pcStack_78;
    util__Str_char___operator__o8((Str_L_char_G_ *)(iVar1 + -0x2c),&SStack_74);
    *(undefined4 *)(iVar1 + -0x20) = uStack_68;
    *(undefined4 *)(iVar1 + -0x1c) = uStack_64;
    util__Str_char___operator__o8((Str_L_char_G_ *)(iVar1 + -0x18),&SStack_60);
    *(ulonglong *)(iVar1 + -0xc) = CONCAT44(uStack_10,uStack_14);
    *(undefined4 *)(iVar1 + -4) = uStack_c;
  }
  if (SStack_60.Data != (char *)0x0) {
    port_op_delete(SStack_60.Data);
  }
  if (SStack_74.Data != (char *)0x0) {
    port_op_delete(SStack_74.Data);
  }
  if (pvStack_a0 != (void *)0x0) {
    port_op_delete(pvStack_a0);
    pvStack_a0 = (void *)0x0;
  }
  if (apvStack_ac[0] != (void *)0x0) {
    port_op_delete(apvStack_ac[0]);
    apvStack_ac[0] = (void *)0x0;
  }
  if (SStack_24.Data != (char *)0x0) {
    port_op_delete(SStack_24.Data);
    SStack_24.Data = (char *)0x0;
  }
  if ((InfoBox *)SStack_30.Data != (InfoBox *)0x0) {
    port_op_delete(SStack_30.Data);
  }
  pDVar4 = (Darray_L_struct_InfoBox_G_ *)Module__GetInfoBoxes((Module *)this);
  util__Darray_struct_InfoBox___operator(in_stack_00000004,pDVar4);
  ppuStack_34 = &vftable_127;
  if ((InfoBox *)SStack_30.Data != (InfoBox *)0x0) {
    InfoBox___vector_deleting_destructor((InfoBox *)SStack_30.Data,3);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00600cc0 GenerateDesignUI_00600cc0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0060170c) */
/* WARNING: Removing unreachable block (ram,0x0060171c) */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual struct UIWidget * __thiscall NuclearPayloadModule__GenerateDesignUI(class Manager
   *)const  */

UIWidget * __thiscall
NuclearPayloadModule__GenerateDesignUI(NuclearPayloadModule *this,Manager *param_1)

{
  undefined8 stack0xfffff6f8;
  undefined8 stack0xfffff7d4;
  undefined8 stack0xfffff808;
  undefined8 stack0xfffff840;
  undefined8 stack0xfffffffc;
  undefined4 uVar1;
  UIAttributes UVar2;
  UIAttributes UVar3;
  LayoutAttributes LVar4;
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
  bool bVar18;
  bool bVar19;
  undefined4 *puVar20;
  UIWidget *pUVar21;
  LocStr *pLVar22;
  Str_L_char_G_ *pSVar23;
  Str_L_char_G_ *pSVar24;
  undefined4 *puVar25;
  UIAttributes *pUVar26;
  Data *pDVar27;
  int iVar28;
  int iVar29;
  int iStack_834;
  undefined1 in_stack_fffff7d4 [44];
  void *in_stack_fffff800;
  _func___cdecl_bool_void_ptr *in_stack_fffff804;
  undefined1 auVar30 [12];
  undefined1 in_stack_fffff808 [44];
  undefined1 auVar31 [12];
  void *in_stack_fffff834;
  _func___cdecl_bool_void_ptr *in_stack_fffff838;
  Darray_L_struct_Body__RadialImpulse_G_ *in_stack_fffff83c;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [44];
  undefined1 in_stack_fffff840 [212];
  float in_stack_fffff914;
  float fVar38;
  float in_stack_fffff918;
  float fVar39;
  float in_stack_fffff91c;
  undefined4 in_stack_fffff920;
  undefined4 uVar40;
  void *in_stack_fffff924;
  void *pvVar41;
  _func___cdecl_Color_void_ptr *in_stack_fffff928;
  _func___cdecl_Color_void_ptr *p_Var42;
  int in_stack_fffff92c;
  int in_stack_fffff930;
  int in_stack_fffff934;
  int iVar43;
  int in_stack_fffff938;
  int iVar44;
  float in_stack_fffff93c;
  float in_stack_fffff940;
  float fVar45;
  float in_stack_fffff944;
  float fVar46;
  float fVar47;
  float fVar48;
  Manager *pMVar49;
  undefined4 uVar50;
  UIAttributes local_6a4;
  UIAttributes local_55c;
  Args local_414 [272];
  UIAttributes local_304;
  LayoutAttributes local_1bc;
  Color local_18c;
  void *local_16c [3];
  void *local_160;
  void *local_154 [3];
  void *local_148;
  void *local_13c [3];
  void *local_130;
  Str_L_char_G_ local_124;
  Str_L_char_G_ local_118;
  Str_L_char_G_ local_10c;
  Str_L_char_G_ local_100;
  Str_L_char_G_ local_f4;
  Darray_L_util__SharedPtr_L_UIWidget_G___G_ local_e8;
  undefined4 local_d8;
  undefined4 local_d4;
  Darray_L_Body__RadialImpulse_G_ local_d0;
  void *local_c0;
  _func___cdecl_Color_void_ptr *local_bc;
  undefined **local_b8;
  Str_L_char_G_ local_b4;
  float fStack_a8;
  float fStack_a4;
  NuclearPayloadModule *pNStack_a0;
  float fStack_9c;
  Str_L_char_G_ local_98;
  Str_L_char_G_ local_8c;
  Str_L_char_G_ local_80;
  LineGraph *local_74;
  void *local_70;
  _func___cdecl_Color_void_ptr *local_6c;
  undefined **local_68;
  Str_L_char_G_ local_64;
  code *pcStack_58;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  UIRowLayout *local_44;
  float local_40;
  Manager *local_3c;
  NuclearPayloadModule *local_38;
  undefined4 local_34;
  void *local_30;
  Str_L_char_G_ SStack_2c;
  UIWidget *local_20;
  undefined4 *local_1c;
  undefined **local_18;
  void *pvStack_14;
  undefined4 uStack_10;
  int iStack_c;
  uint local_8;
  undefined1 auVar37 [32];
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar19 = false;
  bVar18 = false;
  bVar17 = false;
  bVar16 = false;
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
  local_3c = param_1;
  *(uint32_t *)&local_44 = (uint32_t)(uintptr_t)((UIRowLayout *)0x0);
  *(uint32_t *)&local_18 = (uint32_t)(uintptr_t)(&vftable_229);
  pvStack_14 = (void *)0x0;
  uStack_10 = 0;
  iStack_c = 4;
  local_38 = this;
  pvStack_14 = (void *)(uintptr_t)(port_op_new(0x80));
  if (pvStack_14 == (void *)0x0) {
    pvStack_14 = (void *)0x0;
  }
  else {
    iVar29 = 4;
    puVar25 = (undefined4 *)((int)pvStack_14 + 0x18);
    do {
      puVar25[-6] = 0;
      puVar25[-5] = 0;
      puVar25[-4] = 0;
      puVar25[-3] = 0;
      puVar25[-2] = 0;
      puVar25[-1] = 0;
      *puVar25 = 0;
      puVar25[1] = 0;
      iVar29 = iVar29 + -1;
      puVar25 = puVar25 + 8;
    } while (iVar29 != 0);
  }
  iVar29 = 0;
  if (0 < iStack_c) {
    iVar28 = 0;
    do {
      puVar25 = (undefined4 *)((int)pvStack_14 + iVar28);
      *puVar25 = 0;
      puVar25[1] = 0;
      puVar25[2] = 0;
      puVar25[3] = 0;
      iVar29 = iVar29 + 1;
      puVar25 = (undefined4 *)((int)pvStack_14 + iVar28 + 0x10);
      *puVar25 = 0;
      puVar25[1] = 0;
      puVar25[2] = 0;
      puVar25[3] = 0;
      iVar28 = iVar28 + 0x20;
    } while (iVar29 < iStack_c);
  }
  *(uint32_t *)&local_44 = port_op_new(0x218);
  if (local_44 == (UIRowLayout *)0x0) {
    pUVar21 = (UIWidget *)0x0;
  }
  else {
    pUVar21 = (UIWidget *)(uintptr_t)(port_op_new(0x170));
    if (pUVar21 == (UIWidget *)0x0) {
      pUVar21 = (UIWidget *)0x0;
    }
    else {
      fVar47 = 8.821083e-39;
      pMVar49 = local_3c;
      UIAttributes__UIAttributes(&local_304,local_3c);
      local_64.Length = 0;
      uStack_54 = 0x3ff0000000000000;
      uStack_4c = 0x3ff0000000000000;
      pcStack_58 = (code *)0x0;
      local_304.FillProportion.Getter.Callee = (void *)0x0;
      local_304.FillProportion.Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0;
      local_304.FillProportion.Value.X = 0;
      local_304.FillProportion.Value.Y = 0x3ff00000;
      local_304.FillProportion.Value.Y = 1.0;
      *(uint32_t *)&in_stack_fffff800 = (uint32_t)(uintptr_t)((void *)0x600dd3);
      UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff808,&local_304);
      in_stack_fffff804 = (_func___cdecl_bool_void_ptr *)0x600dda;
      UVar3.Enabled.Getter.Callee = in_stack_fffff834;
*(uint32_t *)&auVar30 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff808) + 4)));
*(uint32_t *)&auVar31 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff808) + 32)));
      UVar3.Parent = (Manager *)(*(uint32_t*)&(in_stack_fffff808));
      UVar3.Tag.Data = (char *)(*(uint32_t*)&(auVar30));
      UVar3.Tag.Capacity = (*(uint32_t*)((char*)&(auVar30)+4));
      UVar3.Tag.Length = (*(uint32_t*)((char*)&(auVar30)+8));
      uVar32 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff808) + 16)),0);
      uVar33 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff808) + 16)),8);
      UVar3.Location.Getter.Callee = (void *)(int)uVar32;
      UVar3.Location.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar32 >> 0x20);
      UVar3.Location.Value.X = (int)uVar33;
      UVar3.Location.Value.Y = (int)((ulonglong)uVar33 >> 0x20);
      UVar3.Visible.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar31));
      UVar3.Visible.Getter.CallbackFunction =
           (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar31)) >> 0x20);
      UVar3.Visible.Value = (bool)auVar31[8];
      (*(uint24_t *)((char *)&(UVar3.Visible) + 9)) = (*(uint24_t*)((char*)&(auVar31)+9));
      UVar3.Enabled.Getter.CallbackFunction = in_stack_fffff838;
      (*(uint32_t *)((char *)&(UVar3.Enabled) + 8)) = (uint32_t)(uintptr_t)(in_stack_fffff83c);
*(uint32_t *)&auVar35 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff840) + 124)));
*(uint32_t *)&auVar36 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff840) + 140)));
      uVar32 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff840) + 0)),0);
      uVar33 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff840) + 0)),8);
      UVar3.DesiredSize.Getter.Callee = (void *)(int)uVar32;
      UVar3.DesiredSize.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar32 >> 0x20);
      UVar3.DesiredSize.Value.X = (int)uVar33;
      UVar3.DesiredSize.Value.Y = (int)((ulonglong)uVar33 >> 0x20);
      uVar32 = SUB248((*(uint32_t *)((char *)&(in_stack_fffff840) + 16)),0);
*(uint32_t *)&auVar34 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffff840) + 16)),8));
      UVar3.FillProportion.Getter.Callee = (void *)(int)uVar32;
      UVar3.FillProportion.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar32 >> 0x20);
      UVar3.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar34));
      UVar3.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar34)+8));
      uVar32 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff840) + 40)),0);
      UVar3.HitTestShape.Getter.Callee = (void *)(int)uVar32;
      UVar3.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)(int)((ulonglong)uVar32 >> 0x20));
      UVar3.HitTestShape.Value = SUB124((*(uint32_t *)((char *)&(in_stack_fffff840) + 40)),8);
      (*(uint32_t *)((char *)&(UVar3) + 108)) = (*(uint32_t *)((char *)&(in_stack_fffff840) + 52));
      uVar32 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff840) + 56)),0);
      UVar3.Depth.Getter.Callee = (void *)(int)uVar32;
      UVar3.Depth.Getter.CallbackFunction =
           (_func___cdecl_double_void_ptr *)(int)((ulonglong)uVar32 >> 0x20);
      UVar3.Depth.Value = (double)SUB168((*(uint32_t *)((char *)&(in_stack_fffff840) + 56)),8);
      uVar32 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff840) + 72)),0);
      UVar3.Icon.Getter.Callee = (void *)(int)uVar32;
      UVar3.Icon.Getter.CallbackFunction = (void (* (*)(void *))(void))((_func___cdecl__func___cdecl_void_ptr_void_ptr *)(int)((ulonglong)uVar32 >> 0x20));
      UVar3.Icon.Value = (_func___cdecl_void *)SUB124((*(uint32_t *)((char *)&(in_stack_fffff840) + 72)),8);
      uVar32 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff840) + 84)),0);
*(uint32_t *)&auVar30 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff840) + 84)),8));
      UVar3.Tooltip.Getter.Callee = (void *)(int)uVar32;
      UVar3.Tooltip.Getter.CallbackFunction =
           (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar32 >> 0x20);
      UVar3.Tooltip.Value.Data = (char *)(*(uint32_t*)&(auVar30));
      UVar3.Tooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar30)+4));
      UVar3.Tooltip.Value.Length = (*(uint32_t*)((char*)&(auVar30)+8));
      uVar32 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff840) + 104)),0);
*(uint32_t *)&auVar30 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff840) + 104)),8));
      UVar3.VerboseTooltip.Getter.Callee = (void *)(int)uVar32;
      UVar3.VerboseTooltip.Getter.CallbackFunction =
           (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar32 >> 0x20);
      UVar3.VerboseTooltip.Value.Data = (char *)(*(uint32_t*)&(auVar30));
      UVar3.VerboseTooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar30)+4));
      UVar3.VerboseTooltip.Value.Length = (*(uint32_t*)((char*)&(auVar30)+8));
      uVar32 = SUB128((*(uint32_t *)((char *)&(auVar35) + 0)),0);
      UVar3.TextFont.Data.Getter.Callee = (void *)(int)uVar32;
      UVar3.TextFont.Data.Getter.CallbackFunction =
           (_func___cdecl_Font_ptr_void_ptr *)(int)((ulonglong)uVar32 >> 0x20);
      UVar3.TextFont.Data.Value = (Font *)SUB124((*(uint32_t *)((char *)&(auVar35) + 0)),8);
      UVar3.TextFont.IsValidData = (bool)auVar35[0xc];
      (*(uint32_t *)((char *)&(UVar3.TextFont) + 13)) = (*(uint32_t *)((char *)&(auVar35) + 13));
      uVar32 = SUB408((*(uint32_t *)((char *)&(auVar36) + 0)),0);
*(uint32_t *)&auVar37 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar36) + 0)),8));
      UVar3.ForegroundColor.Data.Getter.Callee = (void *)(int)uVar32;
      UVar3.ForegroundColor.Data.Getter.CallbackFunction =
           (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar32 >> 0x20);
      UVar3.ForegroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar37));
      UVar3.ForegroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar37)+4));
      UVar3.ForegroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar37)+8));
      UVar3.ForegroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar37) + 12));
      UVar3.ForegroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar37) + 16));
      UVar3.ForegroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar37) + 20));
      UVar3.ForegroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar37) + 24));
      UVar3.ForegroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar37) + 28));
      UVar3.ForegroundColor.IsValidData = (bool)auVar36[0x28];
      (*(uint32_t *)((char *)&(UVar3.ForegroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar36) + 41));
      UVar3.BackgroundColor.Data.Getter.Callee = (void *)(int)(*(uint64_t *)((char *)&(in_stack_fffff840) + 184));
      UVar3.BackgroundColor.Data.Getter.CallbackFunction =
           (_func___cdecl_Color_void_ptr *)(int)((ulonglong)(*(uint64_t *)((char *)&(in_stack_fffff840) + 184)) >> 0x20);
      UVar3.BackgroundColor.Data.Value._pad_0x0_0 = (*(uint32_t *)((char *)&(in_stack_fffff840) + 192));
      UVar3.BackgroundColor.Data.Value._pad_0x4_1 = (*(uint32_t *)((char *)&(in_stack_fffff840) + 196));
      UVar3.BackgroundColor.Data.Value._pad_0x8_2 = (*(uint32_t *)((char *)&(in_stack_fffff840) + 200));
      UVar3.BackgroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(in_stack_fffff840) + 204));
      UVar3.BackgroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(in_stack_fffff840) + 208));
      UVar3.BackgroundColor.Data.Value.Saturation = in_stack_fffff914;
      UVar3.BackgroundColor.Data.Value.Value = in_stack_fffff918;
      UVar3.BackgroundColor.Data.Value.Alpha = in_stack_fffff91c;
      UVar3.BackgroundColor.IsValidData = SUB41(in_stack_fffff920,0);
      (*(uint32_t *)((char *)&(UVar3.BackgroundColor) + 41)) = SUB43(in_stack_fffff920,1);
      UVar3.TextColor.Data.Getter.Callee = in_stack_fffff924;
      UVar3.TextColor.Data.Getter.CallbackFunction = in_stack_fffff928;
      UVar3.TextColor.Data.Value._pad_0x0_0 = in_stack_fffff92c;
      UVar3.TextColor.Data.Value._pad_0x4_1 = in_stack_fffff930;
      UVar3.TextColor.Data.Value._pad_0x8_2 = in_stack_fffff934;
      UVar3.TextColor.Data.Value._pad_0xc_3 = in_stack_fffff938;
      UVar3.TextColor.Data.Value.Hue_degrees = in_stack_fffff93c;
      UVar3.TextColor.Data.Value.Saturation = in_stack_fffff940;
      UVar3.TextColor.Data.Value.Value = in_stack_fffff944;
      UVar3.TextColor.Data.Value.Alpha = fVar47;
      (*(uint32_t *)((char *)&(UVar3.TextColor) + 40)) = (uint32_t)(uintptr_t)(pMVar49);
      UIWidget__UIWidget(pUVar21,UVar3);
      pUVar21->_pad_0x0_0 = (int)&vftable_252;
      pUVar21[1]._pad_0x0_0 = (int)this;
      UIAttributes___UIAttributes(&local_304);
    }
    local_74 = (LineGraph *)(uintptr_t)(port_op_new(0x278));
    if (local_74 == (LineGraph *)0x0) {
      *(uint32_t *)&local_20 = (uint32_t)(uintptr_t)((UIWidget *)0x0);
    }
    else {
      util__Str_char___Str_char(&local_124,"MJ/m^2");
      util__Str_char___Str_char(&local_10c,"NuclearPayloadChart YAxis");
      util__Str_char___Str_char(&local_118,"m");
      util__Str_char___Str_char(&local_100,"NuclearPayloadChart XAxis");
      util__Str_char___Str_char(&local_f4,"NuclearPayloadChart Title");
      *(uint32_t *)&local_1c = (uint32_t)(uintptr_t)((undefined4 *)&stack0xfffff840);
      local_d8 = 0;
      local_d4 = 0;
      util__Darray_L_Body__RadialImpulse_G___Darray_L_Body__RadialImpulse_G_
                (&local_d0,(Darray_L_struct_Body__RadialImpulse_G_ *)&local_18);
      pcStack_58 = util__DelegateFactory_L_NuclearPayloadModule_Cutil__Range_L_double_G___G___MethodCallerConst_L__public__struct_util__Range_L_double_G____thiscall_NuclearPayloadModule__GetChartYRanges_void_const__C0__G_
      ;
      local_b4.Length =
           (int)util__DelegateFactory_L_NuclearPayloadModule_Cutil__Range_L_double_G___G___MethodCallerConst_L__public__struct_util__Range_L_double_G____thiscall_NuclearPayloadModule__GetChartXRanges_void_const__C0__G_
      ;
      uStack_54 = 0;
      uStack_4c = 0;
      local_98.Data = (char *)0x0;
      fStack_a8 = 0.0;
      fStack_a4 = 0.0;
      pNStack_a0 = (NuclearPayloadModule *)0x0;
      fStack_9c = 0.0;
      local_98.Capacity = 0;
      local_98.Length = 0;
      local_8c.Data = (char *)0x0;
      local_8c.Capacity = 0;
      local_8c.Length = 0;
      local_80.Data = (char *)0x0;
      local_80.Capacity = 0;
      local_80.Length = 0;
      local_b4.Capacity = (int)this;
      local_64.Length = (int)this;
      pLVar22 = (LocStr *)util__LocStr__LocStr((LocStr *)local_16c,&local_10c,&local_98);
      *(uint32_t *)&local_20 = (uint32_t)(uintptr_t)((UIWidget *)util__LocStr__operator__o3(pLVar22));
      pLVar22 = (LocStr *)util__LocStr__LocStr((LocStr *)local_154,&local_100,&local_8c);
      pSVar23 = util__LocStr__operator__o3(pLVar22);
      *(uint32_t *)&in_stack_fffff834 = (uint32_t)(uintptr_t)((void *)0x600f2e);
      pLVar22 = (LocStr *)util__LocStr__LocStr((LocStr *)local_13c,&local_f4,&local_80);
      pSVar24 = util__LocStr__operator__o3(pLVar22);
      local_34 = 0;
      local_30 = (void *)0x0;
      util__Str_char___Str_char(&SStack_2c,pSVar24);
      puVar25 = (undefined4 *)LineGraph__Args__Args__o3(local_414);
      *puVar25 = local_34;
      puVar25[1] = (undefined4)(uintptr_t)(local_30);
      util__Str_char___operator__o8((Str_L_char_G_ *)(puVar25 + 2),&SStack_2c);
      if ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_2c.Data !=
          (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0) {
        port_op_delete(SStack_2c.Data);
      }
      local_34 = 0;
      local_30 = (void *)0x0;
      util__Str_char___Str_char(&SStack_2c,pSVar23);
      puVar25[5] = local_34;
      puVar25[6] = (undefined4)(uintptr_t)(local_30);
      util__Str_char___operator__o8((Str_L_char_G_ *)(puVar25 + 7),&SStack_2c);
      if ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_2c.Data !=
          (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0) {
        port_op_delete(SStack_2c.Data);
      }
      local_34 = 0;
      local_30 = (void *)0x0;
      util__Str_char___Str_char(&SStack_2c,&local_118);
      puVar25[10] = local_34;
      puVar25[0xb] = (undefined4)(uintptr_t)(local_30);
      util__Str_char___operator__o8((Str_L_char_G_ *)(puVar25 + 0xc),&SStack_2c);
      if ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_2c.Data !=
          (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0) {
        port_op_delete(SStack_2c.Data);
      }
      local_34 = 0;
      local_30 = (void *)0x0;
      util__Str_char___Str_char(&SStack_2c,(Str_L_char_G_ *)local_20);
      puVar25[0xf] = local_34;
      puVar25[0x10] = (undefined4)(uintptr_t)(local_30);
      util__Str_char___operator__o8((Str_L_char_G_ *)(puVar25 + 0x11),&SStack_2c);
      if ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_2c.Data !=
          (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0) {
        port_op_delete(SStack_2c.Data);
      }
      local_34 = 0;
      local_30 = (void *)0x0;
      util__Str_char___Str_char(&SStack_2c,&local_124);
      puVar25[0x14] = local_34;
      puVar25[0x15] = (undefined4)(uintptr_t)(local_30);
      util__Str_char___operator__o8((Str_L_char_G_ *)(puVar25 + 0x16),&SStack_2c);
      if ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_2c.Data !=
          (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0) {
        port_op_delete(SStack_2c.Data);
      }
      puVar25[0x27] = (undefined4)(uintptr_t)(local_38);
      puVar25[0x1a] = local_b4.Capacity;
      puVar25[0x1b] = local_b4.Length;
      puVar25[0x1c] = fStack_a8;
      puVar25[0x1d] = fStack_a4;
      puVar25[0x28] = (undefined4)(uintptr_t)(util__DelegateFactory_L_NuclearPayloadModule_Cdouble_Cdouble_G___MethodCallerConst_L__public__double___thiscall_NuclearPayloadModule__GetDamageChartFluence_MJ__m2_double_const__C0__G_);
      *(ulonglong *)(puVar25 + 0x1e) = CONCAT44(fStack_9c,pNStack_a0);
      *(undefined1 *)(puVar25 + 0x26) = 1;
      puVar25[0x20] = local_64.Length;
      puVar25[0x21] = (undefined4)(uintptr_t)(pcStack_58);
      puVar25[0x22] = (undefined4)uStack_54;
      puVar25[0x23] = (*(uint32_t*)((char*)&(uStack_54)+4));
      *(undefined8 *)(puVar25 + 0x24) = uStack_4c;
      puVar25[0x34] = local_d8;
      puVar25[0x35] = local_d4;
      util__Darray_L_util__tuple2_L_double_Cutil__Vec3_L_double_G___G___G___op_assign
                ((Darray_L_util__tuple2_L_double_Cutil__Vec3_L_double_G___G___G_ *)(puVar25 + 0x36),
                 (Darray_L_struct_util__tuple2_L_double_Cstruct_util__Vec3_L_double_G___G___G_ *)&local_d0);
      local_d0._pad_0x0_0 = (int)&vftable_229;
      if (local_d0.Data != (RadialImpulse *)0x0) {
        port_op_delete(local_d0.Data);
      }
      puVar20 = local_1c;
      local_d0.Data = (RadialImpulse *)0x0;
      local_d0._pad_0x0_0 = (int)&vftable;
      *local_1c = *puVar25;
      puVar20[1] = puVar25[1];
      util__Str_char___Str_char((Str_L_char_G_ *)(puVar20 + 2),(Str_L_char_G_ *)(puVar25 + 2));
      puVar20 = local_1c;
      local_1c[5] = puVar25[5];
      puVar20[6] = puVar25[6];
      util__Str_char___Str_char((Str_L_char_G_ *)(puVar20 + 7),(Str_L_char_G_ *)(puVar25 + 7));
      puVar20 = local_1c;
      local_1c[10] = puVar25[10];
      puVar20[0xb] = puVar25[0xb];
      util__Str_char___Str_char((Str_L_char_G_ *)(puVar20 + 0xc),(Str_L_char_G_ *)(puVar25 + 0xc));
      puVar20 = local_1c;
      local_1c[0xf] = puVar25[0xf];
      puVar20[0x10] = puVar25[0x10];
      util__Str_char___Str_char((Str_L_char_G_ *)(puVar20 + 0x11),(Str_L_char_G_ *)(puVar25 + 0x11));
      puVar20 = local_1c;
      local_1c[0x14] = puVar25[0x14];
      puVar20[0x15] = puVar25[0x15];
      util__Str_char___Str_char((Str_L_char_G_ *)(puVar20 + 0x16),(Str_L_char_G_ *)(puVar25 + 0x16));
      uVar40 = puVar25[0x1b];
      uVar50 = puVar25[0x1c];
      uVar1 = puVar25[0x1d];
      puVar20[0x1a] = puVar25[0x1a];
      puVar20[0x1b] = uVar40;
      puVar20[0x1c] = uVar50;
      puVar20[0x1d] = uVar1;
      *(undefined8 *)(puVar20 + 0x1e) = *(undefined8 *)(puVar25 + 0x1e);
      uVar40 = puVar25[0x21];
      uVar50 = puVar25[0x22];
      uVar1 = puVar25[0x23];
      puVar20[0x20] = puVar25[0x20];
      puVar20[0x21] = uVar40;
      puVar20[0x22] = uVar50;
      puVar20[0x23] = uVar1;
      *(undefined8 *)(puVar20 + 0x24) = *(undefined8 *)(puVar25 + 0x24);
      *(undefined1 *)(puVar20 + 0x26) = *(undefined1 *)(puVar25 + 0x26);
      *(undefined1 *)((int)puVar20 + 0x99) = *(undefined1 *)((int)puVar25 + 0x99);
      *(undefined1 *)((int)puVar20 + 0x9a) = *(undefined1 *)((int)puVar25 + 0x9a);
      puVar20[0x27] = puVar25[0x27];
      puVar20[0x28] = puVar25[0x28];
      puVar20[0x29] = puVar25[0x29];
      puVar20[0x2a] = puVar25[0x2a];
      *(undefined8 *)(puVar20 + 0x2b) = *(undefined8 *)(puVar25 + 0x2b);
      puVar20[0x2d] = puVar25[0x2d];
      puVar20[0x2e] = puVar25[0x2e];
      puVar20[0x2f] = puVar25[0x2f];
      util__Darray_L_util__Str_L_char_G___G___Darray_L_util__Str_L_char_G___G_
                ((Darray_L_util__Str_L_char_G___G_ *)(puVar20 + 0x30),
                 (Darray_L_class_util__Str_L_char_G___G_ *)(puVar25 + 0x30));
      puVar20[0x34] = puVar25[0x34];
      puVar20[0x35] = puVar25[0x35];
      util__Darray_L_Body__RadialImpulse_G___Darray_L_Body__RadialImpulse_G_
                ((Darray_L_Body__RadialImpulse_G_ *)(puVar20 + 0x36),
                 (Darray_L_struct_Body__RadialImpulse_G_ *)(puVar25 + 0x36));
      puVar20[0x3a] = puVar25[0x3a];
      puVar20[0x3b] = puVar25[0x3b];
      in_stack_fffff83c = (Darray_L_struct_Body__RadialImpulse_G_ *)(puVar25 + 0x3c);
      in_stack_fffff838 = (_func___cdecl_bool_void_ptr *)0x6012d6;
      util__Darray_L_Body__RadialImpulse_G___Darray_L_Body__RadialImpulse_G_
                ((Darray_L_Body__RadialImpulse_G_ *)(puVar20 + 0x3c),in_stack_fffff83c);
      puVar20[0x40] = puVar25[0x40];
      puVar20[0x41] = puVar25[0x41];
      puVar20[0x42] = puVar25[0x42];
      puVar20[0x43] = puVar25[0x43];
      iVar29 = (int)(uintptr_t) util__Color__Color(&local_18c,Preset__Green,1.0);
      local_c0 = (void *)0x0;
      local_bc = (_func___cdecl_Color_void_ptr *)0x0;
      local_b8 = &vftable_5;
      util__Str_char___Str_char(&local_b4,(Str_L_char_G_ *)(iVar29 + 4));
      fStack_a8 = *(float *)(iVar29 + 0x10);
      fStack_a4 = *(float *)(iVar29 + 0x14);
      pNStack_a0 = *(NuclearPayloadModule **)(iVar29 + 0x18);
      fStack_9c = *(float *)(iVar29 + 0x1c);
      local_b8 = &vftable_59;
      local_30 = (void *)0x0;
      SStack_2c.Data = (char *)0x0;
      SStack_2c.Capacity = 0;
      SStack_2c.Length = 200;
      local_40 = fStack_a4;
      local_38 = pNStack_a0;
      *(uint32_t *)&(local_20) = *(uint32_t *)&(fStack_9c);
      *(uint32_t *)&(local_1c) = *(undefined4 *)&(fStack_a8);
      pUVar26 = (UIAttributes *)UIAttributes__UIAttributes(&local_6a4,local_3c);
      uStack_54 = 0x3ff0000000000000;
      uStack_4c = 0;
      local_70 = local_c0;
      (pUVar26->DesiredSize).Getter.Callee = local_30;
      (pUVar26->DesiredSize).Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_2c.Data;
      (pUVar26->DesiredSize).Value.X = SStack_2c.Capacity;
      (pUVar26->DesiredSize).Value.Y = SStack_2c.Length;
      local_64.Length = 0;
      pcStack_58 = (code *)0x0;
      *(uint32_t *)&local_6c = (uint32_t)(uintptr_t)(local_bc);
      (pUVar26->FillProportion).Getter.Callee = (void *)0x0;
      (pUVar26->FillProportion).Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0
      ;
      *(undefined4 *)&(pUVar26->FillProportion).Value.X = 0;
      *(undefined4 *)((int)&(pUVar26->FillProportion).Value.X + 4) = 0x3ff00000;
      (pUVar26->FillProportion).Value.Y = 0.0;
      local_68 = &vftable_5;
      util__Str_char___Str_char(&local_64,&local_b4);
      local_68 = &vftable_59;
      pcStack_58 = (code *)local_1c;
      (pUVar26->ForegroundColor).Data.Getter.Callee = local_70;
      (pUVar26->ForegroundColor).Data.Getter.CallbackFunction = local_6c;
      uStack_54 = CONCAT44(local_38,local_40);
      (*(uint40_t*)&(uStack_4c)) = CONCAT14(1,local_20);
      util__Str_char___operator__o8
                ((Str_L_char_G_ *)&(pUVar26->ForegroundColor).Data.Value._pad_0x4_1,&local_64);
      (pUVar26->ForegroundColor).Data.Value.Hue_degrees = (double)(uintptr_t)((float)(int)(uintptr_t)(local_1c));
      (pUVar26->ForegroundColor).Data.Value.Saturation = local_40;
      (pUVar26->ForegroundColor).Data.Value.Value = (double)(uintptr_t)((float)(int)(uintptr_t)(local_38));
      (pUVar26->ForegroundColor).Data.Value.Alpha = (double)(uintptr_t)((float)(int)(uintptr_t)(local_20));
      (pUVar26->ForegroundColor).IsValidData = true;
      if (local_64.Data != (char *)0x0) {
        port_op_delete(local_64.Data);
      }
      if (local_b4.Data != (char *)0x0) {
        port_op_delete(local_b4.Data);
      }
      UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff6f8,pUVar26);
      *(uint32_t *)&local_20 = (uint32_t)(uintptr_t)((UIWidget *)LineGraph__LineGraph(local_74));
      bVar18 = true;
      bVar17 = true;
      bVar16 = true;
      bVar15 = true;
      bVar14 = true;
      bVar13 = true;
      bVar11 = true;
      bVar10 = true;
      bVar9 = true;
      bVar8 = true;
      bVar7 = true;
      bVar6 = true;
      bVar5 = true;
    }
    local_e8._pad_0x0_0 = (int)&vftable_48;
    bVar19 = true;
    bVar12 = true;
    local_e8.Data = (SharedPtr_L_UIWidget_G_ *)0x0;
    local_e8.Size = 0;
    local_e8.Capacity = 0;
    pUVar26 = (UIAttributes *)UIAttributes__UIAttributes(&local_55c,local_3c);
    local_64.Length = 0;
    uStack_54 = 0x3ff0000000000000;
    uStack_4c = 0x3ff0000000000000;
    pcStack_58 = (code *)0x0;
    (pUVar26->FillProportion).Getter.Callee = (void *)0x0;
    (pUVar26->FillProportion).Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0;
    *(undefined4 *)&(pUVar26->FillProportion).Value.X = 0;
    *(undefined4 *)((int)&(pUVar26->FillProportion).Value.X + 4) = 0x3ff00000;
    (pUVar26->FillProportion).Value.Y = 1.0;
    puVar25 = (undefined4 *)LayoutAttributes__LayoutAttributes(&local_1bc);
    uVar40 = *puVar25;
    pvVar41 = (void *)puVar25[1];
    p_Var42 = (_func___cdecl_Color_void_ptr *)puVar25[2];
    iVar29 = puVar25[3];
    iVar28 = puVar25[4];
    iVar43 = puVar25[5];
    iVar44 = puVar25[6];
    fVar47 = (float)puVar25[7];
    fVar45 = (float)puVar25[8];
    fVar46 = (float)puVar25[9];
    fVar48 = (float)puVar25[10];
    uVar50 = puVar25[0xb];
    fVar38 = 8.823951e-39;
    pDVar27 = (Data *)(uintptr_t)(UILayout__Data__Add((Data *)&local_e8,local_20));
    fVar39 = 8.823961e-39;
    pDVar27 = (Data *)(uintptr_t)(UILayout__Data__Add(pDVar27,pUVar21));
    iStack_834 = 0x6015ac;
    UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff7d4,pUVar26);
    UVar2.Enabled.Getter.Callee = in_stack_fffff800;
*(uint32_t *)&auVar30 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff7d4) + 4)));
*(uint32_t *)&auVar31 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff7d4) + 32)));
    UVar2.Parent = (Manager *)(*(uint32_t*)&(in_stack_fffff7d4));
    UVar2.Tag.Data = (char *)(*(uint32_t*)&(auVar30));
    UVar2.Tag.Capacity = (*(uint32_t*)((char*)&(auVar30)+4));
    UVar2.Tag.Length = (*(uint32_t*)((char*)&(auVar30)+8));
    uVar32 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff7d4) + 16)),0);
    uVar33 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff7d4) + 16)),8);
    UVar2.Location.Getter.Callee = (void *)(int)uVar32;
    UVar2.Location.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar32 >> 0x20);
    UVar2.Location.Value.X = (int)uVar33;
    UVar2.Location.Value.Y = (int)((ulonglong)uVar33 >> 0x20);
    UVar2.Visible.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar31));
    UVar2.Visible.Getter.CallbackFunction =
         (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar31)) >> 0x20);
    UVar2.Visible.Value = (bool)auVar31[8];
    (*(uint24_t *)((char *)&(UVar2.Visible) + 9)) = (*(uint24_t*)((char*)&(auVar31)+9));
    UVar2.Enabled.Getter.CallbackFunction = in_stack_fffff804;
    UVar2.Enabled.Value = (bool)in_stack_fffff808[0];
    (*(uint24_t *)((char *)&(UVar2.Enabled) + 9)) = (*(uint24_t*)((char*)&(in_stack_fffff808)+1));
    uVar32 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff808) + 4)),0);
    uVar33 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff808) + 4)),8);
    UVar2.DesiredSize.Getter.Callee = (void *)(int)uVar32;
    UVar2.DesiredSize.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar32 >> 0x20);
    UVar2.DesiredSize.Value.X = (int)uVar33;
    UVar2.DesiredSize.Value.Y = (int)((ulonglong)uVar33 >> 0x20);
    uVar32 = SUB248((*(uint32_t *)((char *)&(in_stack_fffff808) + 20)),0);
*(uint32_t *)&auVar34 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffff808) + 20)),8));
    UVar2.FillProportion.Getter.Callee = (void *)(int)uVar32;
    UVar2.FillProportion.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar32 >> 0x20);
    UVar2.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar34));
    UVar2.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar34)+8));
    UVar2.HitTestShape.Getter.Callee = in_stack_fffff834;
    UVar2.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)in_stack_fffff838);
    UVar2.HitTestShape.Value = (int)in_stack_fffff83c;
    (*(uint32_t *)((char *)&(UVar2) + 108)) = (uint32_t)(uintptr_t)(in_stack_fffff840);
    UVar2.TextColor.Data.Value.Alpha = fVar38;
    (*(uint32_t *)((char *)&(UVar2.TextColor) + 40)) = fVar39;
    LVar4.Margin.Getter.CallbackFunction = pvVar41;
    LVar4.Margin.Getter.Callee = (void *)uVar40;
    LVar4.Margin.Value.X = (int)p_Var42;
    LVar4.Margin.Value.Y = iVar29;
    LVar4.Padding.Getter.Callee = (void *)iVar28;
    LVar4.Padding.Getter.CallbackFunction = (_func___cdecl_int_void_ptr *)iVar43;
    LVar4.Padding.Value = iVar44;
    LVar4.Background__HasBackground.Getter.Callee = *(void **)&(fVar47);
    LVar4.Background__HasBackground.Getter.CallbackFunction = *(_func___cdecl_bool_void_ptr *)&(fVar45);
    (*(uint32_t *)((char *)&(LVar4.Background__HasBackground) + 8)) = fVar46;
    (*(uint32_t *)((char *)&(LVar4) + 40)) = fVar48;
    LVar4.HasFlexibleSizing = SUB41(uVar50,0);
    (*(uint32_t *)((char *)&(LVar4) + 45)) = SUB43(uVar50,1);
    pUVar21 = (UIWidget *)UIRowLayout__UIRowLayout(local_44,UVar2,pDVar27,LVar4);
  }
  if (bVar19) {
    UIAttributes___UIAttributes(&local_55c);
  }
  if (bVar12) {
    Darray_L_util__SharedPtr_L_UIWidget_G___G___dtor(&local_e8);
  }
  if (bVar13) {
    UIAttributes___UIAttributes(&local_6a4);
  }
  if ((bVar14) &&
     (local_18c._pad_0x0_0 = (int)&vftable_5,
     (void *)local_18c._pad_0x4_1 != (void *)0x0)) {
    port_op_delete((void *)local_18c._pad_0x4_1);
    local_18c._pad_0x4_1 = 0;
  }
  if (bVar15) {
    LineGraph__Args___Args(local_414);
  }
  if (bVar16) {
    if (local_130 != (void *)0x0) {
      port_op_delete(local_130);
      local_130 = (void *)0x0;
    }
    if (local_13c[0] != (void *)0x0) {
      port_op_delete(local_13c[0]);
      local_13c[0] = (void *)0x0;
    }
  }
  if ((bVar17) && (local_80.Data != (char *)0x0)) {
    port_op_delete(local_80.Data);
    local_80.Data = (char *)0x0;
  }
  if (bVar18) {
    if (local_148 != (void *)0x0) {
      port_op_delete(local_148);
      local_148 = (void *)0x0;
    }
    if (local_154[0] != (void *)0x0) {
      port_op_delete(local_154[0]);
      local_154[0] = (void *)0x0;
    }
  }
  if (bVar6) {
    if (local_160 != (void *)0x0) {
      port_op_delete(local_160);
      local_160 = (void *)0x0;
    }
    if (local_16c[0] != (void *)0x0) {
      port_op_delete(local_16c[0]);
      local_16c[0] = (void *)0x0;
    }
  }
  if ((bVar7) && (local_98.Data != (char *)0x0)) {
    port_op_delete(local_98.Data);
    local_98.Data = (char *)0x0;
  }
  if ((bVar8) && (local_f4.Data != (char *)0x0)) {
    port_op_delete(local_f4.Data);
    local_f4.Data = (char *)0x0;
  }
  if ((bVar9) && (local_100.Data != (char *)0x0)) {
    port_op_delete(local_100.Data);
    local_100.Data = (char *)0x0;
  }
  if ((bVar10) && (local_118.Data != (char *)0x0)) {
    port_op_delete(local_118.Data);
  }
  if ((bVar11) && (local_10c.Data != (char *)0x0)) {
    port_op_delete(local_10c.Data);
    local_10c.Data = (char *)0x0;
  }
  if ((local_124.Data != (char *)0x0) && (bVar5)) {
    port_op_delete(local_124.Data);
  }
  *(uint32_t *)&local_18 = (uint32_t)(uintptr_t)(&vftable_229);
  if (pvStack_14 != (void *)0x0) {
    port_op_delete(pvStack_14);
  }
  return pUVar21;
}

//==== 00601870 BuildModels_00601870 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall NuclearPayloadModule__BuildModels(void) */

void __thiscall NuclearPayloadModule__BuildModels(NuclearPayloadModule *this)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  pmf_3529159d *ppVar2;
  ReferenceController *this_00;
  double dVar3;
  Quaternion_L_double_G_ QVar4;
  bool bVar5;
  int iVar6;
  GameModel *pGVar7;
  ReferenceControllerRegistry *pRVar8;
  ReferenceController *this_01;
  undefined4 *puVar9;
  VertexBufferObject *pVVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar16;
  uint uVar17;
  double dVar15;
  double dVar18;
  double dStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  double dStack_28;
  undefined8 local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  dStack_28 = CombustionMixtureSubModule__GetDetonationVelocity_m__s
                        ((CombustionMixtureSubModule *)&(this->SlowExplosive).CachedMass_kg);
  dVar18 = Material__GetDetonationVelocity_m__s(*(Material **)&this->InnerExplosiveWidth_m);
  if (dVar18 <= 0.0) {
    dStack_28 = 1.0;
  }
  else {
    dStack_28 = dStack_28 / dVar18;
    if (dStack_28 <= 0.0) {
      dStack_28 = 0.0;
    }
    if (1.0 <= dStack_28) {
      dStack_28 = 1.0;
    }
  }
  dVar18 = *(double *)&this->Detonator;
  dVar3 = *(double *)&this->FusionBoost /
          *(double *)(*(int *)&(this->SlowExplosive).DelayCompositionMassFraction + 0x30);
  dVar13 = ((dVar18 * dVar18 * dVar18 * 4.1887902047863905 + dVar3) * 3.0) / 12.566370614359172;
  libm_sse2_pow_precise(0.0,0.0);
  dVar18 = *(double *)&this->Detonator;
  dVar13 = dVar13 - dVar18;
  dVar15 = 0.0;
  if (0.0 <= dVar13) {
    dVar15 = dVar13;
  }
  dVar14 = (dVar3 * 3.0) / 12.566370614359172;
  libm_sse2_pow_precise(0.0,0.0);
  dVar13 = *(double *)&(this->Detonator)._pad_0x8_2;
  dVar18 = dVar15 + dVar18 +
           ((dVar14 * *(double *)
                       (*(int *)((int)&(this->SlowExplosive).DelayCompositionMassFraction + 4) +
                       0x30)) / (*(double *)&this->FusionBoost / dVar3)) * 0.25 + dVar13 +
           dVar13 * dStack_28;
  iVar6 = GetUniversalRadialSegmentation(dVar18 + dVar18);
  uVar11 = 0x54442d18;
  uVar16 = 0x3fe921fb;
  libm_sse2_sin_precise(0.0);
  dVar18 = (double)CONCAT44(uVar16,uVar11) * 0.0;
  uVar12 = 0x54442d18;
  uVar17 = 0x3fe921fb;
  libm_sse2_cos_precise(0.0);
  local_30 = SUB84(dVar18,0);
  uStack_2c = (undefined4)((ulonglong)dVar18 >> 0x20);
  QVar4.Y = uVar16;
  QVar4.X = uVar11;
  QVar4.Y = local_30;
  QVar4.Z = uStack_2c;
  QVar4.Z = local_30;
  QVar4.W = uStack_2c;
  QVar4.W = uVar12;
  (*(uint32_t *)((char *)&(QVar4.W) + 4)) = uVar17;
  Graphics__Rotate(QVar4);
  pGVar7 = (GameModel *)(uintptr_t)(port_op_new(0xb8));
  if (pGVar7 == (GameModel *)0x0) {
    (*(uint32_t*)((char*)&(local_18)+4)) = (uint32_t)(uintptr_t)((GameModel *)0x0);
  }
  else {
    (*(uint32_t*)((char*)&(local_18)+4)) = (uint32_t)(uintptr_t)((GameModel *)
         GameModel__GameModel
                   (pGVar7,*(Material **)&this->InnerExplosiveWidth_m,(Material *)0x0,
                    ({ __typeof__(((ulonglong)(uVar17 & 0xffffff00) << 0x20)) _t_ = ((ulonglong)(uVar17 & 0xffffff00) << 0x20); *(Maybe_L_int_G_ *)&_t_; })));
    if ((*(uint32_t*)((char*)&(local_18)+4)) != (GameModel *)0x0) goto LAB_00601a69;
  }
  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl",
                  0xd4,"NewPointer",(char *)0x0);
  DebugBreak();
LAB_00601a69:
  pGVar7 = (GameModel *)(uintptr_t)((*(uint32_t*)((char*)&(local_18)+4)));
  pRVar8 = util__ReferenceControllerRegistry__Get();
  this_01 = util__ReferenceControllerRegistry__Register(pRVar8,pGVar7);
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
  }
  iVar1 = (this->NuclearPayloadModuleMemoizationHandlerInstance).ResetFunctions.Size;
  (*(uint32_t*)((char*)&(local_10)+4)) = (uint32_t)(uintptr_t)((GameModel *)(iVar1 + 1));
  util__Darray_L_util__SharedPtr_L_GameModel_G___G___SetSize
            ((Darray_L_util__SharedPtr_L_GameModel_G___G_ *)
             &this->NuclearPayloadModuleMemoizationHandlerInstance,(int *)((int)&local_10 + 4));
  bVar5 = util__Darray_L_util__SharedPtr_L_GameModel_G___G___CheckSize
                    ((Darray_L_util__SharedPtr_L_GameModel_G___G_ *)
                     &this->NuclearPayloadModuleMemoizationHandlerInstance,iVar1);
  if (bVar5) {
    iVar1 = (this->NuclearPayloadModuleMemoizationHandlerInstance).ResetFunctions.Size;
    ppVar2 = (this->NuclearPayloadModuleMemoizationHandlerInstance).ResetFunctions.Data;
    (*(uint32_t*)((char*)&(local_10)+4)) = (uint32_t)(uintptr_t)(*(GameModel **)(ppVar2 + iVar1 + -1));
    this_00 = *(ReferenceController **)&ppVar2[iVar1 + -1].field1_0x1;
    *(GameModel **)(ppVar2 + iVar1 + -1) = (GameModel *)(uintptr_t)((*(uint32_t*)((char*)&(local_18)+4)));
    *(ReferenceController **)&ppVar2[iVar1 + -1].field1_0x1 = this_01;
    if (this_01 != (ReferenceController *)0x0) {
      util__ReferenceController__AddStrongReference(this_01);
    }
    if ((this_00 != (ReferenceController *)0x0) &&
       (bVar5 = util__ReferenceController__ReleaseStrongReference(this_00), bVar5)) {
      if ((*(uint32_t*)((char*)&(local_10)+4)) != (GameModel *)0x0) {
        GameModel___scalar_deleting_destructor((GameModel*)((GameModel*)((*(uint32_t*)((char*)&(local_10)+4)))),1);
      }
      pGVar7 = (GameModel *)(uintptr_t)((*(uint32_t*)((char*)&(local_10)+4)));
      pRVar8 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar8,pGVar7);
    }
  }
  if ((this_01 != (ReferenceController *)0x0) &&
     (bVar5 = util__ReferenceController__ReleaseStrongReference(this_01), bVar5)) {
    if ((*(uint32_t*)((char*)&(local_18)+4)) != (GameModel *)0x0) {
      GameModel___scalar_deleting_destructor((GameModel*)((GameModel*)((*(uint32_t*)((char*)&(local_18)+4)))),1);
    }
    pRVar8 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar8,(void*)((void*)((*(uint32_t*)((char*)&(local_18)+4)))));
  }
  puVar9 = (undefined4 *)
           (**(code **)((this->NuclearPayloadModuleMemoizationHandlerInstance).ResetFunctions.
                        _pad_0x0_0 + 8))();
  pGVar7 = (GameModel *)*puVar9;
  local_18 = CombustionMixtureSubModule__GetDetonationVelocity_m__s
                       ((CombustionMixtureSubModule *)&(this->SlowExplosive).CachedMass_kg);
  dVar18 = Material__GetDetonationVelocity_m__s(*(Material **)&this->InnerExplosiveWidth_m);
  if (dVar18 <= 0.0) {
    *(uint32_t *)&local_18 = 1.0;
  }
  else {
    *(uint32_t *)&local_18 = local_18 / dVar18;
    if (local_18 <= 0.0) {
      *(uint32_t *)&local_18 = 0.0;
    }
    if (1.0 <= local_18) {
      *(uint32_t *)&local_18 = 1.0;
    }
  }
  dVar18 = *(double *)&this->Detonator;
  local_10 = *(double *)&this->FusionBoost /
             *(double *)(*(int *)&(this->SlowExplosive).DelayCompositionMassFraction + 0x30);
  dVar13 = ((dVar18 * dVar18 * dVar18 * 4.1887902047863905 + local_10) * 3.0) / 12.566370614359172;
  libm_sse2_pow_precise(0.0,0.0);
  dVar18 = *(double *)&this->Detonator;
  dVar13 = dVar13 - dVar18;
  dVar3 = 0.0;
  if (0.0 <= dVar13) {
    dVar3 = dVar13;
  }
  dVar15 = (local_10 * 3.0) / 12.566370614359172;
  libm_sse2_pow_precise(0.0,0.0);
  dVar13 = *(double *)&(this->Detonator)._pad_0x8_2;
  dVar18 = dVar3 + dVar18 +
           ((dVar15 * *(double *)
                       (*(int *)((int)&(this->SlowExplosive).DelayCompositionMassFraction + 4) +
                       0x30)) / (*(double *)&this->FusionBoost / local_10)) * 0.25 + dVar13 +
           dVar13 * local_18;
  local_10 = CombustionMixtureSubModule__GetDetonationVelocity_m__s
                       ((CombustionMixtureSubModule *)&(this->SlowExplosive).CachedMass_kg);
  dStack_38 = Material__GetDetonationVelocity_m__s(*(Material **)&this->InnerExplosiveWidth_m);
  if (dStack_38 <= 0.0) {
    dStack_38 = 1.0;
  }
  else {
    dStack_38 = local_10 / dStack_38;
    if (dStack_38 <= 0.0) {
      dStack_38 = 0.0;
    }
    if (1.0 <= dStack_38) {
      dStack_38 = 1.0;
    }
  }
  dVar13 = *(double *)&this->Detonator;
  dVar3 = *(double *)&this->FusionBoost /
          *(double *)(*(int *)&(this->SlowExplosive).DelayCompositionMassFraction + 0x30);
  dVar13 = ((dVar13 * dVar13 * dVar13 * 4.1887902047863905 + dVar3) * 3.0) / 12.566370614359172;
  libm_sse2_pow_precise(0.0,0.0);
  dVar13 = dVar13 - *(double *)&this->Detonator;
  *(uint32_t *)&local_10 = 0.0;
  if (0.0 <= dVar13) {
    *(uint32_t *)&local_10 = dVar13;
  }
  *(uint32_t *)&local_10 = local_10 + *(double *)&this->Detonator;
  dVar15 = (dVar3 * 3.0) / 12.566370614359172;
  libm_sse2_pow_precise(0.0,0.0);
  dVar13 = *(double *)&(this->Detonator)._pad_0x8_2;
  local_10 = local_10 +
             ((dVar15 * *(double *)
                         (*(int *)((int)&(this->SlowExplosive).DelayCompositionMassFraction + 4) +
                         0x30)) / (*(double *)&this->FusionBoost / dVar3)) * 0.25 + dVar13 +
             dVar13 * dStack_38;
  pVVar10 = GameModel__GetVertexObject(pGVar7);
  FillOblateSpheroid(local_10 / 1000.0,(dVar18 + dVar18) / 1000.0,iVar6,pVVar10);
  return;
}

//==== 00601de0 SetCachedData_00601de0 ====


/* public: virtual void __thiscall NuclearPayloadModule__SetCachedData(class DataParser *) */

void __thiscall NuclearPayloadModule__SetCachedData(NuclearPayloadModule *this,DataParser *param_1)

{
  double dVar1;
  
  dVar1 = GetSlowExplosiveMass_kg(this);
  FixedLaserMountSubModule__PassThroughCachedData
            ((FixedLaserMountSubModule *)&(this->SlowExplosive).CachedMass_kg,dVar1);
  return;
}





//==== 00601e00 GetPointerPropertyChoices_00601e00 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   NuclearPayloadModule__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

void 
NuclearPayloadModule__GetPointerPropertyChoices
          (NuclearPayloadModule *this,ClassMember *param_1,SerializationManagerInterface *param_2)

{
  undefined8 stack0xfffffffc;
  undefined4 uVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  SerializationManagerInterface SVar6;
  int *in_stack_0000000c;
  Darray_L_class_util__Reflectable_P_G_ aDStack_5c [16];
  int iStack_4c;
  undefined **ppuStack_48;
  void *pvStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 *puStack_38;
  Str_L_char_G_ SStack_34;
  undefined1 uStack_28;
  undefined4 *puStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined1 auStack_14 [4];
  int iStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (*(int *)&param_2[1] < 1) {
    SVar6 = *(SerializationManagerInterface *)&cde_l2_0b2b1c9f_NullString;
  }
  else {
    SVar6 = *param_2;
  }
  pcVar3 = "CoreComposition";
  while( true ) {
    if ((pcVar3[(int)(*(int *)&SVar6 + -0x92aff0)] == '\0') && (*pcVar3 == '\0')) {
      GetMaterials((DataParser *)param_1,(int)in_stack_0000000c,true);
      goto LAB_0060210a;
    }
    if (pcVar3[(int)(*(int *)&SVar6 + -0x92aff0)] != *pcVar3) break;
    pcVar3 = pcVar3 + 1;
  }
  if (*(int *)&param_2[1] < 1) {
    SVar6 = *(SerializationManagerInterface *)&cde_l2_0b2b1c9f_NullString;
  }
  else {
    SVar6 = *param_2;
  }
  for (pcVar3 = "ReflectorComposition";
      (pcVar3[(int)(*(int *)&SVar6 + -0x92b000)] != '\0' || (*pcVar3 != '\0')); pcVar3 = pcVar3 + 1) {
    if (pcVar3[(int)(*(int *)&SVar6 + -0x92b000)] != *pcVar3) {
      bVar2 = util__Str_char___operator__o9((Str_L_char_G_ *)param_2,"FastExplosive");
      if (bVar2) {
        GetMaterials((DataParser *)param_1,(int)in_stack_0000000c,true);
      }
      else {
        bVar2 = util__Str_char___operator__o9((Str_L_char_G_ *)param_2,"FusionBoost");
        if (bVar2) {
          puStack_24 = (undefined4 *)0x0;
          iStack_20 = 0;
          iStack_1c = 0;
          uStack_18 = 0;
          util__Str_char___Str_char(&SStack_34,"FusionReaction");
          (**(code **)(uintptr_t)(*in_stack_0000000c + 4))(&ppuStack_48,&SStack_34,1);
          if (SStack_34.Data != (char *)0x0) {
            port_op_delete(SStack_34.Data);
            SStack_34.Data = (char *)0x0;
          }
          puStack_24 = (undefined4 *)0x0;
          iStack_20 = 0;
          iStack_1c = 0;
          uStack_18 = 0;
          iVar4 = (*(code *)ppuStack_48[3])();
          util__Darray_class_Manager____Darray_class_Manager
                    ((Darray_L_class_Manager_P_G_ *)&puStack_24,iVar4);
          iStack_c = 0;
          iVar4 = (*(code *)ppuStack_48[3])();
          if (iStack_c < iVar4) {
            do {
              puVar5 = (undefined4 *)(*(code *)*ppuStack_48)(&iStack_c);
              iVar4 = iStack_1c;
              uVar1 = *puVar5;
              iStack_10 = iStack_1c + 1;
              util__Darray_class_util__Reflectable____SetSize
                        ((Darray_L_class_util__Reflectable_P_G_ *)&puStack_24,&iStack_10);
              bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                                ((Darray_L_enum_GraphicsResource__Type_G_ *)&puStack_24,iVar4);
              if (bVar2) {
                *(undefined4 *)(iStack_20 + -4 + iStack_1c * 4) = uVar1;
              }
              iStack_c = iStack_c + 1;
              iVar4 = (*(code *)ppuStack_48[3])();
            } while (iStack_c < iVar4);
          }
          ppuStack_48 = (undefined **)(&vftable_6);
          if (pvStack_44 != (void *)0x0) {
            port_op_delete(pvStack_44);
          }
          uStack_28 = 0;
          puStack_38 = (undefined4 *)0x0;
          SStack_34.Data = (char *)0x0;
          SStack_34.Capacity = 0;
          SStack_34.Length = 0;
          iVar4 = (*(code *)puStack_24[3])();
          util__Darray_class_Manager____Darray_class_Manager
                    ((Darray_L_class_Manager_P_G_ *)&puStack_38,iVar4);
          iStack_c = 0;
          iVar4 = (*(code *)puStack_24[3])();
          if (iStack_c < iVar4) {
            do {
              puVar5 = (undefined4 *)(*(code *)*puStack_24)(&iStack_c);
              if (((FusionReaction *)*puVar5 == (FusionReaction *)0x0) ||
                 (bVar2 = FusionReaction__HasValidElements((FusionReaction *)*puVar5), bVar2)) {
                iVar4 = SStack_34.Capacity;
                iStack_10 = SStack_34.Capacity + 1;
                util__Darray_class_util__Reflectable____SetSize
                          ((Darray_L_class_util__Reflectable_P_G_ *)&puStack_38,&iStack_10);
                bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                                  ((Darray_L_enum_GraphicsResource__Type_G_ *)&puStack_38,iVar4);
                if (bVar2) {
                  *(undefined4 *)(SStack_34.Data + SStack_34.Capacity * 4 + -4) = *puVar5;
                }
              }
              iStack_c = iStack_c + 1;
              iVar4 = (*(code *)puStack_24[3])();
            } while (iStack_c < iVar4);
          }
          ppuStack_48 = (undefined **)0x0;
          pvStack_44 = (void *)0x0;
          iStack_40 = 0;
          uStack_3c = 0;
          iVar4 = (*(code *)puStack_38[3])();
          util__Darray_class_util__Reflectable____Darray_class_util__Reflectable
                    ((Darray_L_class_util__Reflectable_P_G_ *)&ppuStack_48,iVar4);
          iStack_10 = 0;
          iVar4 = (*(code *)puStack_38[3])();
          if (iStack_10 < iVar4) {
            do {
              puVar5 = (undefined4 *)(*(code *)*puStack_38)(&iStack_10);
              iVar4 = iStack_40;
              uVar1 = *puVar5;
              iStack_4c = iStack_40 + 1;
              util__Darray_class_util__Reflectable____SetSize
                        ((Darray_L_class_util__Reflectable_P_G_ *)&ppuStack_48,&iStack_4c);
              bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                                ((Darray_L_enum_GraphicsResource__Type_G_ *)&ppuStack_48,iVar4);
              if (bVar2) {
                *(undefined4 *)((int)pvStack_44 + iStack_40 * 4 + -4) = uVar1;
              }
              iStack_10 = iStack_10 + 1;
              iVar4 = (*(code *)puStack_38[3])();
            } while (iStack_10 < iVar4);
          }
          auStack_14[0] = 0;
          FUN_004f1250(aDStack_5c,&ppuStack_48,auStack_14);
          AsListing_class_util__Reflectable((Darray_L_class_util__Reflectable_P_G_ *)param_1);
          util__Darray_class_util__Reflectable_____Darray_class_util__Reflectable(aDStack_5c);
          util__Darray_class_util__Reflectable_____Darray_class_util__Reflectable((Darray_L_class_util__Reflectable_P_G_ *)&ppuStack_48);
          util__Darray_struct_Level_____Darray_struct_Level((Darray_L_struct_Level_P_G_ *)&puStack_38);
          util__Darray_struct_Level_____Darray_struct_Level((Darray_L_struct_Level_P_G_ *)&puStack_24);
        }
        else {
          (param_1->Name).Data =
               (char *)&vftable_85;
          (param_1->Name).Capacity = 0;
          (param_1->Name).Length = 0;
          *(undefined4 *)&param_1->Type = 0;
        }
      }
LAB_0060210a:
      __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  GetMaterials((DataParser *)param_1,(int)in_stack_0000000c,false);
  goto LAB_0060210a;
}





//==== 00602120 GetReflectionInfo_00602120 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   NuclearPayloadModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall NuclearPayloadModule__GetReflectionInfo(NuclearPayloadModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_3e166497__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_3e166497__thread_safe_static_guard_0__);
    if ( cde_l2_3e166497__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_f8323733_ReflectionInfo) = &vftable_250;
      _Init_thread_footer(& cde_l2_3e166497__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_f8323733_ReflectionInfo;
}





//==== 00602130 scalar_deleting_destructor_00602130 ====


/* public: virtual void * __thiscall NuclearPayloadModule:: 0 scalardeletingdestructor(unsigned
   int) */

void * __thiscall
NuclearPayloadModule___scalar_deleting_destructor(NuclearPayloadModule *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined ** *)&(this->Detonator).MinimumRange_km = &vftable_5;
  pvVar1 = *(void **)((int)&(this->Detonator).MinimumRange_km + 4);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    *(undefined4 *)((int)&(this->Detonator).MinimumRange_km + 4) = 0;
  }
  *(undefined ** *)&(this->SlowExplosive).CachedMass_kg = &vftable_5;
  pvVar1 = *(void **)((int)&(this->SlowExplosive).CachedMass_kg + 4);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    *(undefined4 *)((int)&(this->SlowExplosive).CachedMass_kg + 4) = 0;
  }
  pvVar1 = *(void **)((int)&(this->GetOverallPossibleEnergy_J_MemoizedValue).Data + 4);
*(uint32_t *)&((this->GetOverallPossibleEnergy_J_MemoizedValue).Data) = (uint32_t)(uintptr_t)(&vftable_109);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
  }
  *(undefined4 *)((int)&(this->GetOverallPossibleEnergy_J_MemoizedValue).Data + 4) = 0;
  (this->GetOverallPossibleEnergy_J_MemoizedValue).Data = cde_ptr_as_double((void *)&vftable);
  Module___Module((Module *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x148);
  }
  return this;
}





//==== 006021d0 GetTypeName_006021d0 ====


/* public: virtual class util__Str_L_char_G_  NuclearPayloadModule__ReflectionInfoStruct_class_NuclearPayloadModule___GetTypeName(void)const  */

Str_L_char_G_ * 
NuclearPayloadModule__ReflectionInfoStruct_class_NuclearPayloadModule___GetTypeName
          (ReflectionInfoStruct_L_class_NuclearPayloadModule_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"NuclearPayloadModule");
  return __return_storage_ptr__;
}





//==== 006021f0 GetMembers_006021f0 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   NuclearPayloadModule__ReflectionInfoStruct_class_NuclearPayloadModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
NuclearPayloadModule__ReflectionInfoStruct_class_NuclearPayloadModule___GetMembers__o2
          (ReflectionInfoStruct_L_class_NuclearPayloadModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_4388e49b__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_4388e49b__thread_safe_static_guard_0__),
      cde_l2_4388e49b__thread_safe_static_guard_0__ == -1)) {
     cde_l2_f393476c_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_4388e49b__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_f393476c_Count);
  iVar3 = 0;
  if (0 <  cde_l2_f393476c_Count) {
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
    } while (iVar3 <  cde_l2_f393476c_Count);
  }
  return in_stack_00000004;
}





//==== 00602330 GetMember_00602330 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   NuclearPayloadModule__ReflectionInfoStruct_class_NuclearPayloadModule___GetMember(class
   util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
NuclearPayloadModule__ReflectionInfoStruct_class_NuclearPayloadModule___GetMember__o2
          (ReflectionInfoStruct_L_class_NuclearPayloadModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_9ab33750__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_9ab33750__thread_safe_static_guard_0__),
      cde_l2_9ab33750__thread_safe_static_guard_0__ == -1)) {
     cde_l2_ec575a11_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_9ab33750__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_ec575a11_Count) {
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
LAB_006023bd:
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
          if (cVar3 == '\0') goto LAB_006023bd;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_ec575a11_Count);
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





//==== 006024d0 GetFactory_006024d0 ====


/* public: virtual class util__Reflectable * (__cdecl*
   NuclearPayloadModule__ReflectionInfoStruct_class_NuclearPayloadModule___GetFactory(void)const
   )(void) */

_func_Reflectable_ptr * 
__thiscall NuclearPayloadModule__ReflectionInfoStruct_class_NuclearPayloadModule___GetFactory__o2
          (ReflectionInfoStruct_L_class_NuclearPayloadModule_G_ *this)

{
  return StaticFactory;
}





//==== 00602630 MethodCaller__private__void___thiscall_NuclearPayloadCompartment__QueueDetonation_void__ ====


/* public: static void __cdecl util__DelegateFactory_L_struct_NuclearPayloadCompartment_Cvoid_G___MethodCaller_L__private_void__thiscall_NuclearPayloadCompartment__QueueDetonation_void__G_(void *) */

void __cdecl
util__DelegateFactory_struct_NuclearPayloadCompartment_void___MethodCaller__private__void___thiscall_NuclearPayloadCompartment__QueueDetonation_void
          (void *param_1)

{
  *(undefined1 *)((int)param_1 + 0x112) = 1;
  return;
}





//==== 00602640 MethodCallerConst__public__struct_util__Range_double____thiscall_NuclearPayloadModule__GetChartXRanges_void_const__0__ ====


/* public: static struct util__Range_L_double_G_ __cdecl util__DelegateFactory_L_class_NuclearPayloadModule_Cstructutil__Range_L_double_G__G___MethodCallerConst_L__public_struct_util__Range_L_double_G___thiscallNuclearPayloadModule__GetChartXRanges_void_const_C0__G_(void const *
   const) */

Range_L_double_G_ * __cdecl
util__DelegateFactory_class_NuclearPayloadModule_struct_util__Range_double_____MethodCallerConst__public__struct_util__Range_double____thiscall_NuclearPayloadModule__GetChartXRanges_void_const__0
          (Range_L_double_G_ *__return_storage_ptr__,void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Range_L_double_G_ *pRVar4;
  Range_L_double_G_ RStack_14;
  
  pRVar4 = NuclearPayloadModule__GetChartXRanges((NuclearPayloadModule *)param_1,&RStack_14);
  uVar1 = *(undefined4 *)((int)&pRVar4->Lower + 4);
  uVar2 = *(undefined4 *)&pRVar4->Upper;
  uVar3 = *(undefined4 *)((int)&pRVar4->Upper + 4);
  *(undefined4 *)&__return_storage_ptr__->Lower = *(undefined4 *)&pRVar4->Lower;
  *(undefined4 *)((int)&__return_storage_ptr__->Lower + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Upper = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Upper + 4) = uVar3;
  return __return_storage_ptr__;
}





//==== 00602660 MethodCallerConst__public__struct_util__Range_double____thiscall_NuclearPayloadModule__GetChartYRanges_void_const__0__ ====


/* public: static struct util__Range_L_double_G_ __cdecl util__DelegateFactory_L_class_NuclearPayloadModule_Cstructutil__Range_L_double_G__G___MethodCallerConst_L__public_struct_util__Range_L_double_G___thiscallNuclearPayloadModule__GetChartYRanges_void_const_C0__G_(void const *
   const) */

Range_L_double_G_ * __cdecl
util__DelegateFactory_class_NuclearPayloadModule_struct_util__Range_double_____MethodCallerConst__public__struct_util__Range_double____thiscall_NuclearPayloadModule__GetChartYRanges_void_const__0
          (Range_L_double_G_ *__return_storage_ptr__,void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Range_L_double_G_ *pRVar4;
  Range_L_double_G_ RStack_14;
  
  pRVar4 = NuclearPayloadModule__GetChartYRanges((NuclearPayloadModule *)param_1,&RStack_14);
  uVar1 = *(undefined4 *)((int)&pRVar4->Lower + 4);
  uVar2 = *(undefined4 *)&pRVar4->Upper;
  uVar3 = *(undefined4 *)((int)&pRVar4->Upper + 4);
  *(undefined4 *)&__return_storage_ptr__->Lower = *(undefined4 *)&pRVar4->Lower;
  *(undefined4 *)((int)&__return_storage_ptr__->Lower + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Upper = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Upper + 4) = uVar3;
  return __return_storage_ptr__;
}





//==== 00602680 MethodCallerConst__public__double___thiscall_NuclearPayloadModule__GetDamageChartFluence_MJ__m2_double_const__0__ ====


/* public: static double __cdecl util__DelegateFactory_L_class_NuclearPayloadModule_Cdouble_Cdouble_G___MethodCallerConst_L__public_double__thiscall_NuclearPayloadModule__GetDamageChartFluence_MJ__m2_double_const_C0__G_(void const * const,double)
    */

double __cdecl
util__DelegateFactory_class_NuclearPayloadModule_double_double___MethodCallerConst__public__double___thiscall_NuclearPayloadModule__GetDamageChartFluence_MJ__m2_double_const__0
          (void *param_1,double param_2)

{
  double dVar1;
  undefined4 in_stack_00000008;
  
  dVar1 = NuclearPayloadModule__GetDamageChartFluence_MJ__m2
                    ((NuclearPayloadModule *)param_1,
                     (double)CONCAT44((*(uint32_t*)&(param_2)),in_stack_00000008));
}





//==== 006026a0 MethodCallerConst__public__class_util__Str_char____thiscall_NuclearPayloadModule__GetNuclearInfo_void_const__0__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_class_NuclearPayloadModule_Cclassutil__Str_L_char_G__G___MethodCallerConst_L__public_classutil__Str_L_char_G____thiscallNuclearPayloadModule__GetNuclearInfo_void_const_C0__G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_class_NuclearPayloadModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_NuclearPayloadModule__GetNuclearInfo_void_const__0
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(NuclearPayloadModule__GetNuclearInfo((NuclearPayloadModule *)param_1,&SStack_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 006026e0 tuple5_void____cdecl___void__util__Str_char__util__Str_char__bool__util__Str_char____006026e0 ====


/* public:  util__tuple5_L_void___cdecl_P__void__Cclassutil__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclassutil__Str_L_char_G__G___tuple5_L_void___cdecl_P__void__Cclass_util__Str_L_char_G__Cclassutil__Str_L_char_G__Cbool_P_Cclassutil__Str_L_char_G__G_(void (__cdecl*)(void),class
   util__Str_L_char_G_,class util__Str_L_char_G_,bool *,class util__Str_L_char_G_) */

tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G_
* 
util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__bool__class_util__Str_char_____tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__bool__class_util__Str_char
          (tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G_
           *this,_func_void *param_1,Str_L_char_G_ param_2,Str_L_char_G_ param_3,bool *param_4,
          Str_L_char_G_ param_5)

{
  *(_func_void **)this = param_1;
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const((Str_L_char_G_ *)(this + 4),&param_2);
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const((Str_L_char_G_ *)(this + 0x10),&param_3);
  *(bool **)(this + 0x1c) = param_4;
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const((Str_L_char_G_ *)(this + 0x20),&param_5);
  if (param_2.Data != (char *)0x0) {
    port_op_delete(param_2.Data);
    param_2.Data = (char *)0x0;
  }
  if (param_3.Data != (char *)0x0) {
    port_op_delete(param_3.Data);
    param_3.Data = (char *)0x0;
  }
  if (param_5.Data != (char *)0x0) {
    port_op_delete(param_5.Data);
  }
  return this;
}





//==== 00602760 operator__00602760 ====


/* public: class util__Darray_L_structutil__tuple2_L_double_Cstructutil__Vec3_L_double_G__G__G_ & 
   util__Darray_struct_util__tuple2_double_struct_util__Vec3_double_______operator(class
   util__Darray_L_structutil__tuple2_L_double_Cstructutil__Vec3_L_double_G__G__G_ const &) */

Darray_L_struct_util__tuple2_L_double_Cstruct_util__Vec3_L_double_G___G___G_ * 
util__Darray_struct_util__tuple2_double_struct_util__Vec3_double_______operator__o2
          (Darray_L_struct_util__tuple2_L_double_Cstruct_util__Vec3_L_double_G___G___G_ *this,
          Darray_L_struct_util__tuple2_L_double_Cstruct_util__Vec3_L_double_G___G___G_ *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Darray_L_struct_util__tuple2_L_double_Cstruct_util__Vec3_L_double_G___G___G_ *pDVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  
  pDVar5 = param_1;
  param_1 = (Darray_L_struct_util__tuple2_L_double_Cstruct_util__Vec3_L_double_G___G___G_ *)
            (**(code **)(*(int *)param_1 + 0xc))();
  Darray_L_struct_util__Line2_L_double_G___G___SetSize
            ((Darray_L_struct_util__Line2_L_double_G___G_ *)this,(int *)&param_1);
  iVar6 = (**(code **)(*(int *)pDVar5 + 0xc))();
  if (iVar6 == 0) {
    (**(code **)(*(int *)this + 0x10))();
    return this;
  }
  uVar9 = *(uint *)(this + 8);
  if ((int)uVar9 < 0) {
    param_1 = (Darray_L_struct_util__tuple2_L_double_Cstruct_util__Vec3_L_double_G___G___G_ *)0x0;
    Darray_L_struct_util__Line2_L_double_G___G___SetSize
              ((Darray_L_struct_util__Line2_L_double_G___G_ *)this,(int *)&param_1);
    uVar9 = *(uint *)(this + 8);
  }
  if (0x3fffffff < (int)uVar9) {
    param_1 = (Darray_L_struct_util__tuple2_L_double_Cstruct_util__Vec3_L_double_G___G___G_ *)0x3fffffff;
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
      puVar8 = puVar7 + 6;
      do {
        puVar8[-6] = 0;
        puVar8[-5] = 0;
        puVar8[-4] = 0;
        puVar8[-3] = 0;
        puVar8[-2] = 0;
        puVar8[-1] = 0;
        *puVar8 = 0;
        puVar8[1] = 0;
        uVar10 = uVar10 - 1;
        puVar8 = puVar8 + 8;
      } while (uVar10 != 0);
      *(undefined4 **)(this + 4) = puVar7;
      goto LAB_0060287f;
    }
    *(undefined4 **)(this + 4) = puVar7;
  }
  else {
    puVar7 = *(undefined4 **)(this + 4);
  }
LAB_0060287f:
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





//==== 006028c0 GetChartXRanges_006028c0 ====


/* public: struct util__Range_L_double_G_  NuclearPayloadModule__GetChartXRanges(void)const
    */

Range_L_double_G_ * 
NuclearPayloadModule__GetChartXRanges
          (NuclearPayloadModule *this,Range_L_double_G_ *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = *(double *)(this + 1) * 1000.0;
  __return_storage_ptr__->Lower = 0.0;
  __return_storage_ptr__->Upper = dVar1;
  if (dVar1 < 0.0) {
    __return_storage_ptr__->Lower = dVar1;
    __return_storage_ptr__->Upper = 0.0;
  }
  return __return_storage_ptr__;
}





//==== 00602900 GetChartYRanges_00602900 ====


/* public: struct util__Range_L_double_G_  NuclearPayloadModule__GetChartYRanges(void)const
    */

Range_L_double_G_ * 
NuclearPayloadModule__GetChartYRanges
          (NuclearPayloadModule *this,Range_L_double_G_ *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = GetFluenceAtRange_J__m2(this,*(double *)(this + 1) * 1000.0 * 0.1);
  dVar1 = 1.0;
  if (1.0 <= dVar2 / 1000000.0) {
    dVar1 = dVar2 / 1000000.0;
  }
  __return_storage_ptr__->Lower = 0.0;
  __return_storage_ptr__->Upper = dVar1;
  if (dVar1 < 0.0) {
    __return_storage_ptr__->Lower = dVar1;
    __return_storage_ptr__->Upper = 0.0;
  }
  return __return_storage_ptr__;
}





//==== 00602970 GetCompressionRatio ====


/* public: double __thiscall NuclearPayloadModule__GetCompressionRatio(void)const  */

double __thiscall NuclearPayloadModule__GetCompressionRatio(NuclearPayloadModule *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = GetFastExplosiveMass_kg(this);
  dVar2 = Material__GetEnergyDensity_J__kg(*(Material **)&this->InnerExplosiveWidth_m);
  dVar3 = CombustionMixtureSubModule__GetEnergyDensity_J__kg
                    ((CombustionMixtureSubModule *)&(this->SlowExplosive).CachedMass_kg);
  dVar4 = GetSlowExplosiveMass_kg(this);
  dVar5 = CombustionMixtureSubModule__GetDetonationVelocity_m__s
                    ((CombustionMixtureSubModule *)&(this->SlowExplosive).CachedMass_kg);
  dVar6 = Material__GetDetonationVelocity_m__s(*(Material **)&this->InnerExplosiveWidth_m);
  if (dVar6 <= 0.0) {
    dVar5 = 1.0;
  }
  else {
    dVar5 = dVar5 / dVar6;
    if (dVar5 <= 0.0) {
      dVar5 = 0.0;
    }
    if (1.0 <= dVar5) {
      dVar5 = 1.0;
    }
  }
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  if (1.0 <= dVar5) {
    dVar5 = 1.0;
  }
  dVar5 = 1.0 - dVar5;
  libm_sse2_pow_precise(0.0,0.0);
  dVar1 = (dVar5 * (dVar4 * dVar3 + dVar2 * dVar1) * -1.527e-12) /
          (*(double *)&this->FusionBoost /
          *(double *)(*(int *)&(this->SlowExplosive).DelayCompositionMassFraction + 0x30));
  libm_sse2_exp_precise(0.0);
  dVar5 = dVar1 + 0.0;
  if (dVar1 + 0.0 <= 0.0) {
    dVar5 = 0.0;
  }
  if (1.0 <= dVar5) {
    dVar5 = 1.0;
  }
  return dVar5;
}





//==== 00602a70 GetCriticalDensity_kg__m3 ====


/* public: double __thiscall NuclearPayloadModule__GetCriticalDensity_kg__m3(void)const  */

double __thiscall NuclearPayloadModule__GetCriticalDensity_kg__m3(NuclearPayloadModule *this)

{
  Material *this_00;
  Material *this_01;
  Maybe_L_double_G_ *pMVar1;
  Maybe_L_double_G_ MStack_24;
  double dStack_14;
  double dStack_c;
  
  this_00 = *(Material * *)&(this->SlowExplosive).DelayCompositionMassFraction;
  Material__GetUnenrichedMaterial_Memoize(this_00);
  if ((char)this_00[1].ElementCount.Size == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  this_01 = *(Material * *)&(this->SlowExplosive).DelayCompositionMassFraction;
  if ((Material *)this_00[1].ElementCount.Data == this_01) {
    dStack_c = 1.0;
  }
  else {
    dStack_c = this->FusionFuelDensity_kg__m3;
  }
  dStack_c = *(double *)&this->FusionBoost * dStack_c;
  dStack_14 = Material__GetBareSphereCriticalMass_kg(this_01);
  dStack_14 = dStack_c / dStack_14;
  pMVar1 = util__Sqrt(&MStack_24,&dStack_14);
  if (pMVar1->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return *(double *)((char *)&(this->SlowExplosive).DelayCompositionMassFraction + 0x30) /
         pMVar1->Data;
}





//==== 00602b30 GetDamageChartFluence_MJ__m2 ====


/* public: double __thiscall NuclearPayloadModule__GetDamageChartFluence_MJ__m2(double)const  */

double __thiscall
NuclearPayloadModule__GetDamageChartFluence_MJ__m2(NuclearPayloadModule *this,double param_1)

{
  double dVar1;
  
  dVar1 = GetFluenceAtRange_J__m2(this,param_1);
  return dVar1 / 1000000.0;
}





//==== 00602b50 GetFastExplosiveMass_kg ====

/* public: double __thiscall NuclearPayloadModule__GetFastExplosiveMass_kg(void)const  */

double __thiscall NuclearPayloadModule__GetFastExplosiveMass_kg(NuclearPayloadModule *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double local_14;
  double local_c;
  
  dVar4 = CombustionMixtureSubModule__GetDetonationVelocity_m__s
                    ((CombustionMixtureSubModule *)&(this->SlowExplosive).CachedMass_kg);
  dVar5 = Material__GetDetonationVelocity_m__s(*(Material **)&this->InnerExplosiveWidth_m);
  if (dVar5 <= 0.0) {
    local_14 = 1.0;
  }
  else {
    local_14 = dVar4 / dVar5;
    if (dVar4 / dVar5 <= 0.0) {
      local_14 = 0.0;
    }
    if (1.0 <= local_14) {
      local_14 = 1.0;
    }
  }
  dVar4 = *(double *)&this->Detonator;
  dVar3 = *(double *)&this->FusionBoost /
          *(double *)(*(int *)&(this->SlowExplosive).DelayCompositionMassFraction + 0x30);
  dVar1 = ((dVar4 * dVar4 * dVar4 * 4.1887902047863905 + dVar3) * 3.0) / 12.566370614359172;
  libm_sse2_pow_precise(0.0,0.0);
  dVar4 = *(double *)&this->Detonator;
  dVar1 = dVar1 - dVar4;
  dVar5 = 0.0;
  if (0.0 <= dVar1) {
    dVar5 = dVar1;
  }
  dVar2 = (dVar3 * 3.0) / 12.566370614359172;
  libm_sse2_pow_precise(0.0,0.0);
  dVar1 = *(double *)&(this->Detonator)._pad_0x8_2;
  dVar4 = dVar5 + dVar4 +
          ((dVar2 * *(double *)
                     (*(int *)((int)&(this->SlowExplosive).DelayCompositionMassFraction + 4) + 0x30)
           ) / (*(double *)&this->FusionBoost / dVar3)) * 0.25 + dVar1 + dVar1 * local_14;
  dVar5 = CombustionMixtureSubModule__GetDetonationVelocity_m__s
                    ((CombustionMixtureSubModule *)&(this->SlowExplosive).CachedMass_kg);
  dVar1 = Material__GetDetonationVelocity_m__s(*(Material **)&this->InnerExplosiveWidth_m);
  if (dVar1 <= 0.0) {
    local_c = 1.0;
  }
  else {
    local_c = dVar5 / dVar1;
    if (dVar5 / dVar1 <= 0.0) {
      local_c = 0.0;
    }
    if (1.0 <= local_c) {
      local_c = 1.0;
    }
  }
  dVar5 = *(double *)&this->Detonator;
  dVar3 = *(double *)&this->FusionBoost /
          *(double *)(*(int *)&(this->SlowExplosive).DelayCompositionMassFraction + 0x30);
  dVar1 = ((dVar5 * dVar5 * dVar5 * 4.1887902047863905 + dVar3) * 3.0) / 12.566370614359172;
  libm_sse2_pow_precise(0.0,0.0);
  dVar1 = dVar1 - *(double *)&this->Detonator;
  dVar5 = 0.0;
  if (0.0 <= dVar1) {
    dVar5 = dVar1;
  }
  dVar5 = dVar5 + *(double *)&this->Detonator;
  dVar2 = (dVar3 * 3.0) / 12.566370614359172;
  libm_sse2_pow_precise(0.0,0.0);
  dVar1 = *(double *)&(this->Detonator)._pad_0x8_2;
  dVar1 = ((dVar2 * *(double *)
                     (*(int *)((int)&(this->SlowExplosive).DelayCompositionMassFraction + 4) + 0x30)
           ) / (*(double *)&this->FusionBoost / dVar3)) * 0.25 + dVar5 + dVar1 + dVar1 * local_c;
  return (dVar1 * dVar1 * 4.1887902047863905 * (dVar4 + dVar4) -
         dVar5 * dVar5 * dVar5 * 4.1887902047863905) *
         *(double *)(*(int *)&this->InnerExplosiveWidth_m + 0x30);
}

//==== 00602e00 GetFluenceAtRange_J__m2 ====

/* public: double __thiscall NuclearPayloadModule__GetFluenceAtRange_J__m2(double)const  */

double __thiscall
NuclearPayloadModule__GetFluenceAtRange_J__m2(NuclearPayloadModule *this,double param_1)

{
  double dVar1;
  int iVar2;
  int iVar3;
  Material *this_00;
  Material *this_01;
  bool bVar4;
  code *pcVar5;
  undefined4 uVar6;
  double dVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_1c;
  undefined8 local_c;
  
  dVar7 = *(double *)&this->Detonator;
  dVar7 = ((*(double *)&this->FusionBoost /
            *(double *)(*(int *)&(this->SlowExplosive).DelayCompositionMassFraction + 0x30) +
           dVar7 * dVar7 * dVar7 * 4.1887902047863905) * 3.0) / 12.566370614359172;
  libm_sse2_pow_precise(0.0,0.0);
  dVar7 = dVar7 - *(double *)&this->Detonator;
  dVar10 = 0.0;
  if (0.0 <= dVar7) {
    dVar10 = dVar7;
  }
  dVar10 = dVar10 + *(double *)&this->Detonator;
  if ((char)(this->SlowExplosive)._pad_0x0_0 == '\0') {
    iVar2 = *(int *)&(this->GetOverallPossibleEnergy_J_MemoizedValue).IsValidData;
    local_c = (double)CONCAT44(iVar2 + 1,(undefined4)local_c);
    util__Darray_L_util__tuple2_L_Order__Type_Cint_G___G___SetSize
              ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)
               &this->GetOverallPossibleEnergy_J_MemoizedValue,(int *)((int)&local_c + 4));
    bVar4 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &this->GetOverallPossibleEnergy_J_MemoizedValue,iVar2);
    if (bVar4) {
      iVar2 = *(int *)((int)&(this->GetOverallPossibleEnergy_J_MemoizedValue).Data + 4);
      iVar3 = *(int *)&(this->GetOverallPossibleEnergy_J_MemoizedValue).IsValidData;
      *(code **)(iVar2 + -8 + iVar3 * 8) = (long long int (*)())(ChemicalReaction__GetEnergyDensity_J__kg_Clear);
      *(undefined4 *)(iVar2 + -4 + iVar3 * 8) = 0;
    }
    local_c = GetNuclearEfficiency(this);
    uVar8 = (undefined4)((ulonglong)local_c >> 0x20);
    uVar6 = SUB84(local_c,0);
    if (local_c <= 0.0) {
      uVar8 = 0;
      uVar6 = 0;
    }
    dVar7 = (double)CONCAT44(uVar8,uVar6) * -2.0;
    libm_sse2_exp_precise(0.0);
    this_00 = *(Material * *)&(this->SlowExplosive).DelayCompositionMassFraction;
    Material__GetUnenrichedMaterial_Memoize(this_00);
    pcVar5 = DebugBreak_exref;
    if ((char)this_00[1].ElementCount.Size == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      pcVar5 = DebugBreak_exref;
      DebugBreak();
    }
    this_01 = *(Material * *)&(this->SlowExplosive).DelayCompositionMassFraction;
    if ((Material *)this_00[1].ElementCount.Data == this_01) {
      dVar9 = 1.0;
    }
    else {
      dVar9 = this->FusionFuelDensity_kg__m3;
    }
    dVar1 = *(double *)&this->FusionBoost;
    local_c = Material__GetFissionEnergy_MeV(this_01);
    dVar11 = Material__GetMolarMass_kg__mol
                       ((Material *)(uintptr_t)*(uint32_t *)&(this->SlowExplosive).DelayCompositionMassFraction);
    local_c = eV_to_J(local_c * 1000000.0);
    dVar7 = local_c * (6.022e+23 / dVar11) * dVar1 * dVar9 * (1.0 - dVar7) * 0.5;
    dVar9 = GetFusionBoostEnergyReleased_J(this);
    uStack_1c = CONCAT71((int7)((ulonglong)dVar7 >> 8),1);
    (*(uint32_t*)((char*)&(uStack_1c)+4)) = (int)((ulonglong)dVar7 >> 0x20);
    *(double *)&this->CoreComposition = dVar9 + dVar7;
    (this->SlowExplosive)._pad_0x0_0 = (int)uStack_1c;
    (this->SlowExplosive)._pad_0x4_1 = (*(uint32_t*)((char*)&(uStack_1c)+4));
    if ((char)(this->SlowExplosive)._pad_0x0_0 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      (*pcVar5)();
    }
  }
  if (dVar10 <= param_1) {
    dVar10 = param_1;
  }
  return *(double *)&this->CoreComposition / (dVar10 * dVar10 * 12.566370614359172);
}

//==== 00603040 GetFusionBoostEnergyReleased_J ====


/* public: double __thiscall NuclearPayloadModule__GetFusionBoostEnergyReleased_J(void)const  */

double __thiscall NuclearPayloadModule__GetFusionBoostEnergyReleased_J(NuclearPayloadModule *this)

{
  FusionReaction *this_00;
  FusionReaction *this_01;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dStack_34;
  double dStack_2c;
  double dStack_24;
  double dStack_1c;
  double dStack_14;
  
  this_00 = *(FusionReaction * *)&(this->Detonator).HardRange_km;
  if (this_00 == (FusionReaction *)0x0) {
    return 0.0;
  }
  dVar1 = *(double *)&this->Detonator;
  dVar4 = 0.0;
  dVar2 = dVar1 * dVar1 * dVar1 * 4.1887902047863905;
  dVar1 = (this->Detonator).ActivationRange_km * dVar2;
  if (dVar1 <= 0.0) {
    return 0.0;
  }
  if (dVar2 <= 0.0) {
    return 0.0;
  }
  if ((dVar1 <= 0.0) || (dVar2 <= 0.0)) {
    dStack_1c = 0.0;
  }
  else {
    if ((0.0 < dVar1) && (0.0 < dVar2)) {
      dVar4 = FusionReaction__GetReactionCount(this_00,dVar1);
      this_00 = *(FusionReaction * *)&(this->Detonator).HardRange_km;
    }
    dStack_1c = FusionReaction__GetTotalPossibleEnergy_J(this_00,dVar4);
    this_00 = *(FusionReaction * *)&(this->Detonator).HardRange_km;
  }
  dStack_24 = 1000000000.0;
  if (this_00 == (FusionReaction *)0x0) {
LAB_00603149:
    dStack_2c = 0.0;
  }
  else {
    dVar1 = *(double *)&this->Detonator;
    dVar1 = dVar1 * dVar1 * dVar1 * 4.1887902047863905;
    if (((this->Detonator).ActivationRange_km * dVar1 <= 0.0) || (dVar1 <= 0.0)) goto LAB_00603149;
    dStack_2c = 1000000000.0;
  }
  if (this_00 == (FusionReaction *)0x0) {
LAB_006031a8:
    dStack_34 = 0.0;
  }
  else {
    dVar1 = *(double *)&this->Detonator;
    dVar2 = dVar1 * dVar1 * dVar1 * 4.1887902047863905;
    dVar1 = (this->Detonator).ActivationRange_km * dVar2;
    if ((dVar1 <= 0.0) || (dVar2 <= 0.0)) goto LAB_006031a8;
    dStack_34 = FusionReaction__GetReactionCount(this_00,dVar1);
    this_00 = *(FusionReaction * *)&(this->Detonator).HardRange_km;
  }
  dVar1 = *(double *)&this->Detonator;
  dVar1 = dVar1 * dVar1 * dVar1 * 4.1887902047863905;
  if (((this_00 == (FusionReaction *)0x0) ||
      (dVar2 = (this->Detonator).ActivationRange_km * dVar1, dVar2 <= 0.0)) || (dVar1 <= 0.0)) {
    dStack_14 = 0.0;
  }
  else {
    dVar4 = GetCompressionRatio(this);
    this_00 = *(FusionReaction * *)&(this->Detonator).HardRange_km;
    dStack_14 = ((dVar2 / dVar1) /
                *(double *)(*(int *)&(this->SlowExplosive).DelayCompositionMassFraction + 0x30)) *
                dVar4 * dVar1;
  }
  dVar2 = 0.0;
  if (this_00 != (FusionReaction *)0x0) {
    dVar4 = *(double *)&this->Detonator;
    dVar4 = dVar4 * dVar4 * dVar4 * 4.1887902047863905;
    if ((0.0 < dVar4 * (this->Detonator).ActivationRange_km) && (0.0 < dVar4)) goto LAB_00603272;
  }
  dStack_24 = 0.0;
LAB_00603272:
  if (this_00 != (FusionReaction *)0x0) {
    dVar4 = *(double *)&this->Detonator;
    dVar3 = dVar4 * dVar4 * dVar4 * 4.1887902047863905;
    dVar4 = dVar3 * (this->Detonator).ActivationRange_km;
    if ((0.0 < dVar4) && (0.0 < dVar3)) {
      if (this_00 != (FusionReaction *)0x0) {
        dVar2 = dVar4;
      }
      this_01 = (FusionReaction *)0x0;
      if (this_00 != (FusionReaction *)0x0) {
        this_01 = this_00;
      }
      dVar2 = FusionReaction__GetReactionCount(this_01,dVar2);
      this_00 = *(FusionReaction * *)&(this->Detonator).HardRange_km;
    }
  }
  dVar4 = *(double *)&this->Detonator;
  dVar2 = FusionReaction__GetConfinementTime_s
                    (this_00,dVar4 * dVar4 * dVar4 * 4.1887902047863905,dVar2,dStack_24);
  dVar1 = FusionReaction__GetVolumetricHeatingRate_W__m3
                    (this_00,dVar1,dStack_34,dStack_2c);
  dVar2 = dVar1 * dStack_14 * dVar2;
  if (dStack_1c <= dVar2) {
    dVar2 = dStack_1c;
  }
  return dVar2;
}





//==== 00603360 GetFusionBoostedNeutronAdditionPerParticle ====


/* public: double __thiscall
   NuclearPayloadModule__GetFusionBoostedNeutronAdditionPerParticle(void)const  */

double __thiscall
NuclearPayloadModule__GetFusionBoostedNeutronAdditionPerParticle(NuclearPayloadModule *this)

{
  Material *this_00;
  Material *this_01;
  FusionReaction *this_02;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dStack_2c;
  double dStack_24;
  double dStack_14;
  double dStack_c;
  
  this_02 = *(FusionReaction * *)&(this->Detonator).HardRange_km;
  if (this_02 != (FusionReaction *)0x0) {
    dVar4 = *(double *)&this->Detonator;
    dStack_14 = 0.0;
    dVar1 = dVar4 * dVar4 * dVar4 * 4.1887902047863905;
    dVar3 = (this->Detonator).ActivationRange_km * dVar1;
    if ((0.0 < dVar3) && (0.0 < dVar1)) {
      dStack_2c = 1000000000.0;
      if ((dVar3 <= 0.0) || (dVar1 <= 0.0)) {
        dStack_24 = 0.0;
      }
      else {
        dStack_24 = 1000000000.0;
      }
      if ((dVar3 <= 0.0) || (dVar1 <= 0.0)) {
        dStack_c = 0.0;
      }
      else {
        dStack_c = FusionReaction__GetReactionCount(this_02,dVar3);
        dVar4 = *(double *)&this->Detonator;
        this_02 = *(FusionReaction * *)&(this->Detonator).HardRange_km;
      }
      dVar3 = dVar4 * dVar4 * dVar4 * 4.1887902047863905;
      if (((this_02 == (FusionReaction *)0x0) || (dVar3 <= 0.0)) ||
         (dVar3 * (this->Detonator).ActivationRange_km <= 0.0)) {
        dStack_2c = 0.0;
      }
      if (((this_02 != (FusionReaction *)0x0) &&
          (dVar2 = dVar3 * (this->Detonator).ActivationRange_km, 0.0 < dVar2)) && (0.0 < dVar3)) {
        dVar4 = 0.0;
        if (this_02 != (FusionReaction *)0x0) {
          dVar4 = dVar2;
        }
        dStack_14 = FusionReaction__GetReactionCount(this_02,dVar4);
        dVar4 = *(double *)&this->Detonator;
      }
      this_00 = *(Material * *)&(this->SlowExplosive).DelayCompositionMassFraction;
      Material__GetUnenrichedMaterial_Memoize(this_00);
      if ((char)this_00[1].ElementCount.Size == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      this_01 = *(Material * *)&(this->SlowExplosive).DelayCompositionMassFraction;
      if ((Material *)this_00[1].ElementCount.Data == this_01) {
        dVar2 = 1.0;
      }
      else {
        dVar2 = this->FusionFuelDensity_kg__m3;
      }
      dVar2 = Material__GetAtomNumber(this_01,*(double *)&this->FusionBoost * dVar2);
      dVar1 = FusionReaction__GetFusionRate__s
                        ((FusionReaction *)&(this->Detonator),dVar3,dStack_c,dVar1,dStack_24);
      dVar4 = FusionReaction__GetConfinementTime_s
                        ((FusionReaction *)&(this->Detonator),dVar4 * dVar4 * dVar4 * 4.1887902047863905,dStack_14,dStack_2c);
      return (dVar4 * dVar1) / dVar2;
    }
  }
  return 0.0;
}





//==== 006035b0 GetFusionFuelComposition ====


/* public: class util__Darray_L_structMaterialConstituent_G_ __thiscall
   NuclearPayloadModule__GetFusionFuelComposition(void)const  */

void __thiscall NuclearPayloadModule__GetFusionFuelComposition(NuclearPayloadModule *this)

{
  undefined8 stack0xfffffffc;
  double dVar1;
  double dVar2;
  FusionReaction *this_00;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  Darray_L_struct_MaterialConstituent_G_ *pDVar10;
  int iVar11;
  double dVar12;
  Darray_L_struct_MaterialConstituent_G_ *in_stack_00000004;
  undefined **ppuStack_54;
  void *pvStack_50;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  undefined **ppuStack_34;
  void *pvStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  Darray_L_struct_MaterialConstituent_G_ *pDStack_24;
  int iStack_20;
  undefined **ppuStack_1c;
  undefined4 *puStack_18;
  int iStack_14;
  uint uStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iStack_20 = 0;
  this_00 = *(FusionReaction * *)&(this->Detonator).HardRange_km;
  pDStack_24 = in_stack_00000004;
  if (this_00 != (FusionReaction *)0x0) {
    dVar1 = *(double *)&this->Detonator;
    dVar2 = (this->Detonator).ActivationRange_km;
    dVar12 = dVar1 * dVar1 * dVar1 * 4.1887902047863905;
    if ((0.0 < dVar2 * dVar12) && (0.0 < dVar12)) {
      piVar6 = (int *)FusionReaction__GetMaterialCompositions
                                (this_00,(Darray_L_MaterialComposition_G_ *)&ppuStack_54,
                                 dVar1 * dVar1 * dVar1 * 4.1887902047863905 * dVar2);
      ppuStack_1c = (undefined **)0x0;
      puStack_18 = (undefined4 *)0x0;
      iStack_14 = 0;
      uStack_10 = 0;
      uVar7 = (**(code **)(uintptr_t)(*piVar6 + 0xc))();
      ppuStack_1c = (undefined **)(&vftable_15);
      puStack_18 = (undefined4 *)0x0;
      iStack_14 = 0;
      if (((int)uVar7 < 0) || (0x3fffffff < (int)uVar7)) {
        uStack_10 = 0;
      }
      else {
        uStack_10 = uVar7;
        if (0 < (int)uVar7) {
          puStack_18 = (undefined4 *)
                       port_op_new(-(uint)((int)((ulonglong)uVar7 * 0x10 >> 0x20) != 0) |
                                      (uint)((ulonglong)uVar7 * 0x10));
          puVar9 = puStack_18;
          if (puStack_18 == (undefined4 *)0x0) {
            puStack_18 = (undefined4 *)0x0;
          }
          else {
            for (; uVar7 != 0; uVar7 = uVar7 - 1) {
              *puVar9 = 0;
              *(undefined8 *)(puVar9 + 2) = 0;
              puVar9 = puVar9 + 4;
            }
          }
          iVar11 = 0;
          if (0 < (int)uStack_10) {
            iVar8 = 0;
            do {
              uStack_44 = 0;
              uStack_3c = 0;
              iVar11 = iVar11 + 1;
              puVar9 = (undefined4 *)(iVar8 + (int)puStack_18);
              *puVar9 = 0;
              puVar9[1] = uStack_40;
              puVar9[2] = 0;
              puVar9[3] = 0;
              iVar8 = iVar8 + 0x10;
            } while (iVar11 < (int)uStack_10);
          }
        }
      }
      iStack_c = 0;
      iVar11 = (**(code **)(uintptr_t)(*piVar6 + 0xc))();
      if (iStack_c < iVar11) {
        do {
          puVar9 = (undefined4 *)(**(code **)*piVar6)(&iStack_c);
          iVar11 = iStack_14;
          uStack_44 = *puVar9;
          uStack_3c = *(undefined8 *)(puVar9 + 2);
          iStack_20 = iStack_14 + 1;
          util__Darray_struct_MaterialConstituent___SetSize
                    ((Darray_L_struct_MaterialConstituent_G_ *)&ppuStack_1c,&iStack_20);
          bVar5 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                            ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)
                             &ppuStack_1c,iVar11);
          if (bVar5) {
            puVar9 = puStack_18 + iStack_14 * 4 + -4;
            *puVar9 = uStack_44;
            puVar9[1] = uStack_40;
            puVar9[2] = (undefined4)uStack_3c;
            puVar9[3] = (*(uint32_t*)((char*)&(uStack_3c)+4));
          }
          iStack_c = iStack_c + 1;
          iVar11 = (**(code **)(uintptr_t)(*piVar6 + 0xc))();
        } while (iStack_c < iVar11);
      }
      pDVar10 = (Darray_L_struct_MaterialConstituent_G_ *)&ppuStack_1c;
      bVar4 = false;
      bVar3 = true;
      bVar5 = true;
      goto LAB_006037bf;
    }
  }
  ppuStack_34 = (undefined **)(&vftable_15);
  pDVar10 = (Darray_L_struct_MaterialConstituent_G_ *)&ppuStack_34;
  pvStack_30 = (void *)0x0;
  bVar4 = true;
  bVar3 = false;
  bVar5 = false;
  uStack_2c = 0;
  uStack_28 = 0;
LAB_006037bf:
  util__Darray_struct_MaterialConstituent___Darray_struct_MaterialConstituent(pDStack_24,pDVar10);
  if (bVar5) {
    ppuStack_1c = (undefined **)(&vftable_15);
    if (puStack_18 != (undefined4 *)0x0) {
      port_op_delete(puStack_18);
    }
    puStack_18 = (undefined4 *)0x0;
    ppuStack_1c = (undefined **)(&vftable);
  }
  if (bVar3) {
    ppuStack_54 = (undefined **)(&vftable_75);
    if (pvStack_50 != (void *)0x0) {
      port_op_delete(pvStack_50);
    }
    pvStack_50 = (void *)0x0;
    ppuStack_54 = (undefined **)(&vftable);
  }
  if ((bVar4) &&
     (ppuStack_34 = (undefined **)&vftable_15, pvStack_30 != (void *)0x0)
     ) {
    port_op_delete(pvStack_30);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00604770 GetSlowExplosiveMass_kg ====

/* public: double __thiscall NuclearPayloadModule__GetSlowExplosiveMass_kg(void)const  */

double __thiscall NuclearPayloadModule__GetSlowExplosiveMass_kg(NuclearPayloadModule *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = *(double *)&this->Detonator;
  dVar2 = *(double *)&this->FusionBoost /
          *(double *)(*(int *)&(this->SlowExplosive).DelayCompositionMassFraction + 0x30);
  dVar1 = ((dVar3 * dVar3 * dVar3 * 4.1887902047863905 + dVar2) * 3.0) / 12.566370614359172;
  libm_sse2_pow_precise(0.0,0.0);
  dVar1 = dVar1 - *(double *)&this->Detonator;
  dVar3 = 0.0;
  if (0.0 <= dVar1) {
    dVar3 = dVar1;
  }
  dVar3 = dVar3 + *(double *)&this->Detonator;
  dVar1 = (dVar2 * 3.0) / 12.566370614359172;
  libm_sse2_pow_precise(0.0,0.0);
  dVar1 = ((dVar1 * *(double *)
                     (*(int *)((int)&(this->SlowExplosive).DelayCompositionMassFraction + 4) + 0x30)
           ) / (*(double *)&this->FusionBoost / dVar2)) * 0.25 + dVar3 +
          *(double *)&(this->Detonator)._pad_0x8_2;
  dVar2 = CombustionMixtureSubModule__GetDensity_kg__m3
                    ((CombustionMixtureSubModule *)&(this->SlowExplosive).CachedMass_kg);
  return dVar2 * (dVar1 * dVar1 * dVar1 * 4.1887902047863905 -
                 dVar3 * dVar3 * dVar3 * 4.1887902047863905);
}

//==== 00604890 GetUIActions_00604890 ====


/* public: virtual class util__Darray_L_structutil__tuple5_L_void___cdecl_P__void__Cclass_util__Str_L_char_G__Cclassutil__Str_L_char_G__Cclassutil__Delegate_L_void_G__Cclassutil__Str_L_char_G__G__G_
   __thiscall NuclearPayloadCompartment__GetUIActions(void) */

void __thiscall NuclearPayloadCompartment__GetUIActions(NuclearPayloadCompartment *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  LocStr *pLVar2;
  Str_L_char_G_ *pSVar3;
  int iVar4;
  Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G___G_
  *in_stack_00000004;
  void *apvStack_c0 [3];
  void *pvStack_b4;
  void *apvStack_a8 [3];
  void *pvStack_9c;
  Str_L_char_G_ SStack_90;
  Str_L_char_G_ SStack_84;
  Str_L_char_G_ SStack_78;
  Str_L_char_G_ SStack_6c;
  code *pcStack_60;
  Str_L_char_G_ SStack_5c;
  Str_L_char_G_ SStack_50;
  NuclearPayloadCompartment *pNStack_44;
  code *pcStack_40;
  Str_L_char_G_ SStack_3c;
  Str_L_char_G_ SStack_30;
  Str_L_char_G_ SStack_24;
  Str_L_char_G_ SStack_18;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 =
       &vftable_169;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Str_char___Str_char(&SStack_90,"NuclearPayloadUI Detonate Tooltip");
  util__Str_char___Str_char(&SStack_30,"NuclearPayloadUI Detonate");
  SStack_24.Data = (char *)0x0;
  SStack_24.Capacity = 0;
  SStack_24.Length = 0;
  SStack_18.Data = (char *)0x0;
  SStack_18.Capacity = 0;
  SStack_18.Length = 0;
  util__Str_char___Str_char(&SStack_84,"Detonate");
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_c0,&SStack_90,&SStack_24);
  pSVar3 = util__LocStr__operator__o3(pLVar2);
  util__Str_char___Str_char(&SStack_78,pSVar3);
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_a8,&SStack_30,&SStack_18);
  pSVar3 = util__LocStr__operator__o3(pLVar2);
  util__Str_char___Str_char(&SStack_6c,pSVar3);
  pcStack_60 = (long long int (*)())(Icons__NuclearExplosion);
  util__Str_char___Str_char(&SStack_5c,&SStack_6c);
  util__Str_char___Str_char(&SStack_50,&SStack_78);
  pcStack_40 = (long long int (*)())(util__DelegateFactory_struct_NuclearPayloadCompartment_void___MethodCaller__private__void___thiscall_NuclearPayloadCompartment__QueueDetonation_void);
  pNStack_44 = this;
  util__Str_char___Str_char(&SStack_3c,&SStack_84);
  if (SStack_6c.Data != (char *)0x0) {
    port_op_delete(SStack_6c.Data);
  }
  if (SStack_78.Data != (char *)0x0) {
    port_op_delete(SStack_78.Data);
  }
  if (SStack_84.Data != (char *)0x0) {
    port_op_delete(SStack_84.Data);
  }
  iVar4 = *(int *)(in_stack_00000004 + 8);
  iStack_c = iVar4 + 1;
  util__Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__class_util__Delegate_void__class_util__Str_char_______SetSize(in_stack_00000004,&iStack_c);
  bVar1 = util__Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__class_util__Delegate_void__class_util__Str_char_______CheckSize(in_stack_00000004,iVar4);
  if (bVar1) {
    iVar4 = *(int *)(in_stack_00000004 + 8) * 0x30 + *(int *)(in_stack_00000004 + 4);
    *(code **)(iVar4 + -0x30) = pcStack_60;
    util__Str_char___operator__o8((Str_L_char_G_ *)(iVar4 + -0x2c),&SStack_5c);
    util__Str_char___operator__o8((Str_L_char_G_ *)(iVar4 + -0x20),&SStack_50);
    *(NuclearPayloadCompartment **)(iVar4 + -0x14) = pNStack_44;
    *(code **)(iVar4 + -0x10) = pcStack_40;
    util__Str_char___operator__o8((Str_L_char_G_ *)(iVar4 + -0xc),&SStack_3c);
  }
  if (SStack_3c.Data != (char *)0x0) {
    port_op_delete(SStack_3c.Data);
  }
  if (SStack_50.Data != (char *)0x0) {
    port_op_delete(SStack_50.Data);
  }
  if (SStack_5c.Data != (char *)0x0) {
    port_op_delete(SStack_5c.Data);
  }
  if (pvStack_9c != (void *)0x0) {
    port_op_delete(pvStack_9c);
    pvStack_9c = (void *)0x0;
  }
  if (apvStack_a8[0] != (void *)0x0) {
    port_op_delete(apvStack_a8[0]);
    apvStack_a8[0] = (void *)0x0;
  }
  if (SStack_18.Data != (char *)0x0) {
    port_op_delete(SStack_18.Data);
    SStack_18.Data = (char *)0x0;
  }
  if (pvStack_b4 != (void *)0x0) {
    port_op_delete(pvStack_b4);
    pvStack_b4 = (void *)0x0;
  }
  if (apvStack_c0[0] != (void *)0x0) {
    port_op_delete(apvStack_c0[0]);
    apvStack_c0[0] = (void *)0x0;
  }
  if (SStack_24.Data != (char *)0x0) {
    port_op_delete(SStack_24.Data);
    SStack_24.Data = (char *)0x0;
  }
  if (SStack_30.Data != (char *)0x0) {
    port_op_delete(SStack_30.Data);
    SStack_30.Data = (char *)0x0;
  }
  if (SStack_90.Data != (char *)0x0) {
    port_op_delete(SStack_90.Data);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00604b40 GetUIToggleActions_00604b40 ====


/* public: virtual class util__Darray_L_structutil__tuple5_L_void___cdecl_P__void__Cclass_util__Str_L_char_G__Cclassutil__Str_L_char_G__Cbool_P_Cclassutil__Str_L_char_G__G__G_ __thiscall
   NuclearPayloadCompartment__GetUIToggleActions(void) */

Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G___G_
* __thiscall NuclearPayloadCompartment__GetUIToggleActions(NuclearPayloadCompartment *this)

{
  undefined8 stack0xffffff3c;
  undefined8 stack0xffffff48;
  undefined8 stack0xffffff58;
  Str_L_char_G_ SVar1;
  Str_L_char_G_ SVar2;
  Str_L_char_G_ SVar3;
  Str_L_char_G_ SVar4;
  Str_L_char_G_ SVar5;
  Str_L_char_G_ SVar6;
  LocStr *pLVar7;
  Str_L_char_G_ *pSVar8;
  Str_L_char_G_ *pSVar9;
  tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G_
  *ptVar10;
  Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G___G_
  *in_stack_00000004;
  char *pcVar11;
  int iVar12;
  undefined8 in_stack_ffffff48;
  int iVar13;
  bool *pbVar14;
  char *in_stack_ffffff58;
  int iVar15;
  char *pcVar16;
  tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G_
  atStack_90 [4];
  void *pvStack_8c;
  void *pvStack_80;
  void *pvStack_70;
  void *apvStack_64 [3];
  void *pvStack_58;
  void *apvStack_4c [3];
  void *pvStack_40;
  Str_L_char_G_ SStack_34;
  Str_L_char_G_ SStack_28;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = (undefined **)(&vftable_170);
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Str_char___Str_char(&SStack_34,"NuclearPayloadUI IgnoreMinimumRange Tooltip");
  pcVar16 = "NuclearPayloadUI IgnoreMinimumRange";
  iVar15 = 0x604b8c;
  util__Str_char___Str_char(&SStack_28,"NuclearPayloadUI IgnoreMinimumRange");
  SStack_1c.Data = (char *)0x0;
  SStack_1c.Capacity = 0;
  SStack_1c.Length = 0;
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  iVar13 = 0x604bc5;
  util__Str_char___Str_char((Str_L_char_G_ *)&stack0xffffff58,"Ignore Minimum Range");
  pbVar14 = &this->IgnoreMinimumRange;
  pcVar11 = (char *)0x604be1;
  pLVar7 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_64,&SStack_34,&SStack_1c);
  pSVar8 = util__LocStr__operator__o3(pLVar7);
  iVar12 = 0x604bf0;
  util__Str_char___Str_char((Str_L_char_G_ *)&stack0xffffff48,pSVar8);
  pLVar7 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_4c,&SStack_28,&SStack_10);
  pSVar9 = util__LocStr__operator__o3(pLVar7);
  util__Str_char___Str_char((Str_L_char_G_ *)&stack0xffffff3c,pSVar9);
  SVar1.Capacity = iVar12;
  SVar1.Data = pcVar11;
  SVar1.Length = (int)pSVar8;
  SVar3.Length = iVar13;
  SVar3.Data = (char *)in_stack_ffffff48;
  SVar3.Capacity = SUB84(in_stack_ffffff48,4);
  SVar5.Capacity = iVar15;
  SVar5.Data = in_stack_ffffff58;
  SVar5.Length = (int)pcVar16;
  ptVar10 = (tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G_
             *)util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__bool__class_util__Str_char_____tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__bool__class_util__Str_char
                         (atStack_90,Icons__RangeMarker,SVar1,SVar3,pbVar14,SVar5);
  util__Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__bool__class_util__Str_char_______Add(in_stack_00000004,ptVar10);
  if (pvStack_70 != (void *)0x0) {
    port_op_delete(pvStack_70);
    pvStack_70 = (void *)0x0;
  }
  if (pvStack_80 != (void *)0x0) {
    port_op_delete(pvStack_80);
    pvStack_80 = (void *)0x0;
  }
  if (pvStack_8c != (void *)0x0) {
    port_op_delete(pvStack_8c);
    pvStack_8c = (void *)0x0;
  }
  if (pvStack_40 != (void *)0x0) {
    port_op_delete(pvStack_40);
    pvStack_40 = (void *)0x0;
  }
  if (apvStack_4c[0] != (void *)0x0) {
    port_op_delete(apvStack_4c[0]);
    apvStack_4c[0] = (void *)0x0;
  }
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
    SStack_10.Data = (char *)0x0;
  }
  if (pvStack_58 != (void *)0x0) {
    port_op_delete(pvStack_58);
    pvStack_58 = (void *)0x0;
  }
  if (apvStack_64[0] != (void *)0x0) {
    port_op_delete(apvStack_64[0]);
    apvStack_64[0] = (void *)0x0;
  }
  if (SStack_1c.Data != (char *)0x0) {
    port_op_delete(SStack_1c.Data);
    SStack_1c.Data = (char *)0x0;
  }
  if (SStack_28.Data != (char *)0x0) {
    port_op_delete(SStack_28.Data);
    SStack_28.Data = (char *)0x0;
  }
  if (SStack_34.Data != (char *)0x0) {
    port_op_delete(SStack_34.Data);
  }
  util__Str_char___Str_char(&SStack_34,"NuclearPayloadUI DelayedTrigger Tooltip");
  pcVar16 = "NuclearPayloadUI DelayedTrigger";
  iVar15 = 0x604d42;
  util__Str_char___Str_char(&SStack_28,"NuclearPayloadUI DelayedTrigger");
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  SStack_1c.Data = (char *)0x0;
  SStack_1c.Capacity = 0;
  SStack_1c.Length = 0;
  iVar13 = 0x604d7b;
  util__Str_char___Str_char((Str_L_char_G_ *)&stack0xffffff58,"Delayed Trigger");
  pbVar14 = &this->DelayedDetonation;
  pcVar11 = (char *)0x604d97;
  pLVar7 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_4c,&SStack_34,&SStack_10);
  pSVar8 = util__LocStr__operator__o3(pLVar7);
  iVar12 = 0x604da6;
  util__Str_char___Str_char((Str_L_char_G_ *)&stack0xffffff48,pSVar8);
  pLVar7 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_64,&SStack_28,&SStack_1c);
  pSVar9 = util__LocStr__operator__o3(pLVar7);
  util__Str_char___Str_char((Str_L_char_G_ *)&stack0xffffff3c,pSVar9);
  SVar2.Capacity = iVar12;
  SVar2.Data = pcVar11;
  SVar2.Length = (int)pSVar8;
  SVar4.Length = iVar13;
  SVar4.Data = (char *)in_stack_ffffff48;
  SVar4.Capacity = SUB84(in_stack_ffffff48,4);
  SVar6.Capacity = iVar15;
  SVar6.Data = in_stack_ffffff58;
  SVar6.Length = (int)pcVar16;
  ptVar10 = (tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G_
             *)util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__bool__class_util__Str_char_____tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__bool__class_util__Str_char
                         (atStack_90,Icons__SmallClock,SVar2,SVar4,pbVar14,SVar6);
  util__Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__bool__class_util__Str_char_______Add(in_stack_00000004,ptVar10);
  if (pvStack_70 != (void *)0x0) {
    port_op_delete(pvStack_70);
    pvStack_70 = (void *)0x0;
  }
  if (pvStack_80 != (void *)0x0) {
    port_op_delete(pvStack_80);
    pvStack_80 = (void *)0x0;
  }
  if (pvStack_8c != (void *)0x0) {
    port_op_delete(pvStack_8c);
    pvStack_8c = (void *)0x0;
  }
  if (pvStack_58 != (void *)0x0) {
    port_op_delete(pvStack_58);
    pvStack_58 = (void *)0x0;
  }
  if (apvStack_64[0] != (void *)0x0) {
    port_op_delete(apvStack_64[0]);
    apvStack_64[0] = (void *)0x0;
  }
  if (SStack_1c.Data != (char *)0x0) {
    port_op_delete(SStack_1c.Data);
    SStack_1c.Data = (char *)0x0;
  }
  if (pvStack_40 != (void *)0x0) {
    port_op_delete(pvStack_40);
    pvStack_40 = (void *)0x0;
  }
  if (apvStack_4c[0] != (void *)0x0) {
    port_op_delete(apvStack_4c[0]);
    apvStack_4c[0] = (void *)0x0;
  }
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
    SStack_10.Data = (char *)0x0;
  }
  if (SStack_28.Data != (char *)0x0) {
    port_op_delete(SStack_28.Data);
    SStack_28.Data = (char *)0x0;
  }
  if (SStack_34.Data != (char *)0x0) {
    port_op_delete(SStack_34.Data);
  }
  return in_stack_00000004;
}





//==== 00604f50 ManualTrigger_00604f50 ====


/* public: virtual void __thiscall NuclearPayloadCompartment__ManualTrigger(void) */

void __thiscall NuclearPayloadCompartment__ManualTrigger(NuclearPayloadCompartment *this)

{
  this->DetonationQueued = true;
  return;
}





//==== 00605e20 Render_00605e20 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void  ModuleDiagram_L_classNuclearPayloadModule_G___Render(void)const  */

void __thiscall
ModuleDiagram_class_NuclearPayloadModule___Render(ModuleDiagram_L_class_NuclearPayloadModule_G_ *this)

{
  undefined8 stack0xfffffffc;
  Manager *pMVar1;
  NormalShader *pNVar2;
  Vec2_L_int_G_ VVar3;
  ShaderStack SStack_9;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pNVar2 = NormalShader__GetStatic();
  Graphics__ShaderStack__ShaderStack(&SStack_9,(Shader *)pNVar2);
  pMVar1 = *(Manager **)(this + 8);
  UIWidget__GetTrueSize((UIWidget *)this,&VVar3);
  NuclearPayloadModule__RenderDiagram
            (*(NuclearPayloadModule **)(this + 0x168),pMVar1,*(Vec4_L_int_G_ *)&VVar3);
  Graphics__ShaderStack___ShaderStack(&SStack_9);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00605e80 RenderDiagram_00605e80 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall NuclearPayloadModule__RenderDiagram(class Manager *,struct
   util__Vec2_L_int_G_)const  */

void __thiscall
NuclearPayloadModule__RenderDiagram(NuclearPayloadModule *this,Manager *param_1,Vec4_L_int_G_ param_2)

{
  undefined8 stack0xfffffffc;
  double dVar1;
  double dVar2;
  Vec4_L_float_G_ VVar3;
  Vec3_L_double_G_ VVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double local_2c;
  double local_24;
  double local_1c;
  TransformStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  glLineWidth(0x3f800000);
  dVar16 = CombustionMixtureSubModule__GetDetonationVelocity_m__s
                     ((CombustionMixtureSubModule *)&(this->SlowExplosive).CachedMass_kg);
  dVar17 = Material__GetDetonationVelocity_m__s(*(Material **)&this->InnerExplosiveWidth_m);
  if (dVar17 <= 0.0) {
    local_24 = 1.0;
  }
  else {
    local_24 = dVar16 / dVar17;
    if (dVar16 / dVar17 <= 0.0) {
      local_24 = 0.0;
    }
    if (1.0 <= local_24) {
      local_24 = 1.0;
    }
  }
  dVar16 = *(double *)&this->Detonator;
  dVar13 = *(double *)&this->FusionBoost /
           *(double *)(*(int *)&(this->SlowExplosive).DelayCompositionMassFraction + 0x30);
  dVar7 = ((dVar16 * dVar16 * dVar16 * 4.1887902047863905 + dVar13) * 3.0) / 12.566370614359172;
  libm_sse2_pow_precise(0.0,0.0);
  dVar16 = *(double *)&this->Detonator;
  dVar7 = dVar7 - dVar16;
  dVar17 = 0.0;
  if (0.0 <= dVar7) {
    dVar17 = dVar7;
  }
  dVar8 = (dVar13 * 3.0) / 12.566370614359172;
  libm_sse2_pow_precise(0.0,0.0);
  dVar7 = *(double *)&(this->Detonator)._pad_0x8_2;
  dVar16 = dVar17 + dVar16 +
           ((dVar8 * *(double *)
                      (*(int *)((int)&(this->SlowExplosive).DelayCompositionMassFraction + 4) + 0x30
                      )) / (*(double *)&this->FusionBoost / dVar13)) * 0.25 + dVar7 +
           local_24 * dVar7;
  dVar16 = dVar16 + dVar16;
  dVar7 = (double)param_2.X / (dVar16 + dVar16);
  Graphics__TransformStack__TransformStack(&local_9,Style__Default);
  VVar4.Y = SUB84((double)(param_2.Y / 2),0);
  VVar4.X = (double)(param_2.X / 2);
  VVar4.Z = (int)((ulonglong)(double)(param_2.Y / 2) >> 0x20);
  Graphics__Translate(VVar4);
  dVar16 = *(double *)&this->Detonator;
  dVar8 = *(double *)&this->FusionBoost /
          *(double *)(*(int *)&(this->SlowExplosive).DelayCompositionMassFraction + 0x30);
  dVar13 = ((dVar16 * dVar16 * dVar16 * 4.1887902047863905 + dVar8) * 3.0) / 12.566370614359172;
  libm_sse2_pow_precise(0.0,0.0);
  dVar17 = 0.0;
  if (0.0 <= dVar13 - dVar16) {
    dVar17 = dVar13 - dVar16;
  }
  dVar13 = (dVar8 * 3.0) / 12.566370614359172;
  libm_sse2_pow_precise(0.0,0.0);
  dVar13 = ((dVar13 * *(double *)
                       (*(int *)((int)&(this->SlowExplosive).DelayCompositionMassFraction + 4) +
                       0x30)) / (*(double *)&this->FusionBoost / dVar8)) * 0.25 + dVar17 + dVar16;
  dVar17 = (dVar17 + dVar16) * dVar7;
  dVar8 = dVar13 * dVar7;
  dVar13 = (dVar13 + *(double *)&(this->Detonator)._pad_0x8_2) * dVar7;
  dVar18 = CombustionMixtureSubModule__GetDetonationVelocity_m__s
                     ((CombustionMixtureSubModule *)&(this->SlowExplosive).CachedMass_kg);
  dVar19 = Material__GetDetonationVelocity_m__s(*(Material **)&this->InnerExplosiveWidth_m);
  if (dVar19 <= 0.0) {
    *(uint32_t *)&local_1c = 1.0;
  }
  else {
    *(uint32_t *)&local_1c = dVar18 / dVar19;
    if (dVar18 / dVar19 <= 0.0) {
      *(uint32_t *)&local_1c = 0.0;
    }
    if (1.0 <= local_1c) {
      *(uint32_t *)&local_1c = 1.0;
    }
  }
  dVar18 = *(double *)&this->Detonator;
  dVar14 = *(double *)&this->FusionBoost /
           *(double *)(*(int *)&(this->SlowExplosive).DelayCompositionMassFraction + 0x30);
  dVar9 = ((dVar18 * dVar18 * dVar18 * 4.1887902047863905 + dVar14) * 3.0) / 12.566370614359172;
  libm_sse2_pow_precise(0.0,0.0);
  dVar18 = *(double *)&this->Detonator;
  dVar9 = dVar9 - dVar18;
  dVar19 = 0.0;
  if (0.0 <= dVar9) {
    dVar19 = dVar9;
  }
  dVar10 = (dVar14 * 3.0) / 12.566370614359172;
  libm_sse2_pow_precise(0.0,0.0);
  dVar9 = *(double *)&this->FusionBoost;
  dVar1 = *(double *)(*(int *)((int)&(this->SlowExplosive).DelayCompositionMassFraction + 4) + 0x30)
  ;
  dVar2 = *(double *)&(this->Detonator)._pad_0x8_2;
  dVar20 = CombustionMixtureSubModule__GetDetonationVelocity_m__s
                     ((CombustionMixtureSubModule *)&(this->SlowExplosive).CachedMass_kg);
  dVar21 = Material__GetDetonationVelocity_m__s(*(Material **)&this->InnerExplosiveWidth_m);
  if (dVar21 <= 0.0) {
    *(uint32_t *)&local_2c = 1.0;
  }
  else {
    *(uint32_t *)&local_2c = dVar20 / dVar21;
    if (dVar20 / dVar21 <= 0.0) {
      *(uint32_t *)&local_2c = 0.0;
    }
    if (1.0 <= local_2c) {
      *(uint32_t *)&local_2c = 1.0;
    }
  }
  dVar20 = *(double *)&this->Detonator;
  dVar15 = *(double *)&this->FusionBoost /
           *(double *)(*(int *)&(this->SlowExplosive).DelayCompositionMassFraction + 0x30);
  dVar11 = ((dVar20 * dVar20 * dVar20 * 4.1887902047863905 + dVar15) * 3.0) / 12.566370614359172;
  libm_sse2_pow_precise(0.0,0.0);
  dVar20 = *(double *)&this->Detonator;
  dVar11 = dVar11 - dVar20;
  dVar21 = 0.0;
  if (0.0 <= dVar11) {
    dVar21 = dVar11;
  }
  dVar12 = (dVar15 * 3.0) / 12.566370614359172;
  libm_sse2_pow_precise(0.0,0.0);
  dVar11 = *(double *)&(this->Detonator)._pad_0x8_2;
  dVar20 = dVar21 + dVar20 +
           ((dVar12 * *(double *)
                       (*(int *)((int)&(this->SlowExplosive).DelayCompositionMassFraction + 4) +
                       0x30)) / (*(double *)&this->FusionBoost / dVar15)) * 0.25 + dVar11 +
           local_2c * dVar11;
  glColor3d(0x9999999a,0x3fe99999,0x9999999a,0x3fd99999,0,0);
  iVar5 = (int)((dVar19 + dVar18 + ((dVar10 * dVar1) / (dVar9 / dVar14)) * 0.25 + dVar2 +
                local_1c * dVar2) * dVar7);
  iVar6 = (int)((dVar20 + dVar20) * dVar7);
  DrawEllipse((double)iVar6,(double)iVar5,0x24,true,0.0);
  glColor3d(0x9999999a,0x3fe99999,0x9999999a,0x3fe99999,0);
  DrawCircle(dVar13,0x24,true,0.0);
  glColor3d(0x3fe0000000000000,0x3fe0000000000000,0x3fe0000000000000);
  DrawCircle(dVar8,0x24,true,0.0);
  glColor3d(0x33333333,0x3fd33333,0x33333333,0x3fd33333,0x3fe3333333333333);
  DrawCircle(dVar17,0x24,true,0.0);
  dVar19 = 0.0;
  dVar18 = 0.0;
  if ((int)((this->Detonator).HardRange_km != 0)){
    dVar9 = *(double *)&this->Detonator;
    dVar14 = (this->Detonator).ActivationRange_km;
    dVar9 = dVar9 * dVar9 * dVar9 * 4.1887902047863905;
    if ((0.0 < dVar14 * dVar9) && (0.0 < dVar9)) {
      dVar14 = dVar14 / 10000.0;
      if (dVar14 <= 0.0) {
        dVar14 = 0.0;
      }
      if (1.0 <= dVar14) {
        dVar14 = 1.0;
      }
      dVar18 = (1.0 - dVar14) * 0.3 + dVar14 * 0.8;
      dVar19 = dVar18 * 0.3;
    }
  }
  VVar3.Y = (float)dVar19;
  VVar3.X = (float)dVar18;
  VVar3.Z = (float)dVar18;
  glColorVec((*(Vec3_L_float_G_ *)&(VVar3)));
  DrawCircle(dVar16 * dVar7,0x24,true,0.0);
  glColor3d(0x3ff0000000000000,0,0x3ff00000,0,0x3ff00000);
  DrawAntialiasedEllipse((double)iVar6,(double)iVar5,0x24,false,1.0,0.0);
  DrawAntialiasedCircle(dVar13,0x24,false,1.0,0.0);
  DrawAntialiasedCircle(dVar8,0x24,false,1.0,0.0);
  DrawAntialiasedCircle(dVar17,0x24,false,1.0,0.0);
  DrawAntialiasedCircle(dVar16 * dVar7,0x24,false,1.0,0.0);
  Graphics__TransformStack___TransformStack(&local_9);
  return;
}

//==== 006069e0 StaticFactory_006069e0 ====

/* public: static class util__Reflectable * __cdecl NuclearPayloadModule__ReflectionInfoStruct_L_class_NuclearPayloadModule_G___StaticFactory(void) */

Reflectable * __cdecl
NuclearPayloadModule__ReflectionInfoStruct_class_NuclearPayloadModule___StaticFactory(void)

{
  Module *this;
  
  this = (Module *)(uintptr_t)(port_op_new(0x148));
  if (this != (Module *)0x0) {
    memset(this,0,0x148);
    Module__Module(this);
    this->_pad_0x0_0 = (int)&vftable_for_EditorReflectable__19;
    *(undefined4 *)&(this->GetTotalPowerUsage_W_MemoizedValue).field_0xc = (undefined4)(uintptr_t)vftable_for_util__RTTIBaseClass__17;
    *(undefined4 *)&this[1].GetTotalPowerUsage_W_MemoizedValue.Data = 0;
    *(undefined4 *)((int)&this[1].GetTotalPowerUsage_W_MemoizedValue.Data + 4) = 0;
    *(undefined4 *)&this[1].GetTotalPowerUsage_W_MemoizedValue.IsValidData = 0;
  *(undefined4 *)((char *)&this[1].GetTotalPowerUsage_W_MemoizedValue + 0xc) = 0;
    *(undefined ***)&this[1].GetTotalPowerUsage_W_MemoizedValue.Data =
         &vftable_109;
    *(undefined4 *)((int)&this[1].GetTotalPowerUsage_W_MemoizedValue.Data + 4) = (undefined4)(uintptr_t) (undefined **)(0);
    *(undefined4 *)&this[1].GetTotalPowerUsage_W_MemoizedValue.IsValidData = 0;
  *(undefined4 *)((char *)&this[1].GetTotalPowerUsage_W_MemoizedValue + 0xc) = 0;
    this[1].Models._pad_0x0_0 = 0;
    this[1].Models.Data = (SharedPtr_L_GameModel_G_ *)0x0;
    *(undefined1 *)&this[1].Models.Size = 0;
    this[1].UsesCustomName = false;
    this[1].IsUserCreated = false;
  *(undefined6 *)((char *)&this[1] + 0x4a) = 0;
    *(undefined1 *)&this[2]._pad_0x0_0 = 0;
    this[2].ModuleMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 = 0;
    this[2].ModuleMemoizationHandlerInstance.ResetFunctions.Data = (pmf_27707b45 *)0x0;
    this[2].ModuleMemoizationHandlerInstance.ResetFunctions.Size = 0;
    this[2]._pad_0x10_4 = (int)&vftable_246;
    *(undefined4 *)&this[3].ModuleMemoizationHandlerInstance = 0;
    *(undefined4 *)&this[3].GetTotalPowerUsage_W_MemoizedValue.Data = 0;
    *(undefined4 *)((int)&this[3].GetTotalPowerUsage_W_MemoizedValue.Data + 4) = 0;
    this[3].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity =
         (int)&vftable_241;
    return (Reflectable *)this;
  }
  return (Reflectable *)0x0;
}

//==== 00606ac0 StaticGetMemberByIndex_00606ac0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   NuclearPayloadModule__ReflectionInfoStruct_class_NuclearPayloadModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
NuclearPayloadModule__ReflectionInfoStruct_class_NuclearPayloadModule___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_7659179d__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_7659179d__thread_safe_static_guard_0__);
    if ( cde_l2_7659179d__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_1a7d740d_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_009702dc = 0;
      _DAT_009702e0 = 0;
      _DAT_009702e4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009702e8,"Unused");
      _DAT_009702f4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009702f8,"SteamWorkshopID");
      _DAT_00970304 = 6;
      _DAT_00970308 = 0x10;
      _DAT_0097030c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970310,"AStr");
      _DAT_0097031c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970320,"Description");
      _DAT_0097032c = 6;
      _DAT_00970330 = 0x20;
      _DAT_00970334 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970338,"AStr");
      _DAT_00970344 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970348,"UsesCustomName");
      _DAT_00970354 = 1;
      _DAT_00970358 = 0x68;
      _DAT_0097035c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970360,"bool");
      _DAT_0097036c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970370,"CoreComposition");
      _DAT_0097037c = 8;
      _DAT_00970380 = 0xa8;
      _DAT_00970384 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970388,"Material");
      _DAT_00970394 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970398,"ReflectorComposition");
      _DAT_009703a4 = 8;
      _DAT_009703a8 = 0xac;
      _DAT_009703ac = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009703b0,"Material");
      _DAT_009703bc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009703c0,"SlowExplosive");
      _DAT_009703cc = 10;
      _DAT_009703d0 = 0xb0;
      _DAT_009703d4 = 0x28;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009703d8,"CombustionMixtureSubModule");
      _DAT_009703e4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009703e8,"FastExplosive");
      _DAT_009703f4 = 8;
      _DAT_009703f8 = 0xd8;
      _DAT_009703fc = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970400,"Material");
      _DAT_0097040c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970410,"CoreMass_kg");
      _DAT_0097041c = 4;
      _DAT_00970420 = 0xe0;
      _DAT_00970424 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970428,"double");
      _DAT_00970434 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970438,"Enrichment_Percent");
      _DAT_00970444 = 4;
      _DAT_00970448 = 0xe8;
      _DAT_0097044c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970450,"double");
      _DAT_0097045c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970460,"HollowCoreRadius_m");
      _DAT_0097046c = 4;
      _DAT_00970470 = 0xf0;
      _DAT_00970474 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970478,"double");
      _DAT_00970484 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970488,"InnerExplosiveWidth_m");
      _DAT_00970494 = 4;
      _DAT_00970498 = 0xf8;
      _DAT_0097049c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009704a0,"double");
      _DAT_009704ac = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009704b0,"FusionBoost");
      _DAT_009704bc = 8;
      _DAT_009704c0 = 0x100;
      _DAT_009704c4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009704c8,"FusionReaction");
      _DAT_009704d4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009704d8,"FusionFuelDensity_kg__m3");
      _DAT_009704e4 = 4;
      _DAT_009704e8 = 0x108;
      _DAT_009704ec = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009704f0,"double");
      _DAT_009704fc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970500,"Detonator");
      _DAT_0097050c = 10;
      _DAT_00970510 = 0x110;
      _DAT_00970514 = 0x30;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970518,"ProximityDetonator");
      _DAT_00970524 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970528,"DelayedTrigger");
      _DAT_00970534 = 1;
      _DAT_00970538 = 0x140;
      _DAT_0097053c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970540,"bool");
      _DAT_0097054c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970550,"TargetsShips");
      _DAT_0097055c = 1;
      _DAT_00970560 = 0x70;
      _DAT_00970564 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970568,"bool");
      _DAT_00970574 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970578,"TargetsShots");
      _DAT_00970584 = 1;
      _DAT_00970588 = 0x71;
      _DAT_0097058c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970590,"bool");
      _DAT_0097059c = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_NuclearPayloadModule__ReflectionInfoStruct_class_NuclearPayloadModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_7659179d__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_1a7d740d_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_009702dc + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_009702e0 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_009702e4 + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_009702e8 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_009702f4)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_009702f5)[iVar1];
  return __return_storage_ptr__;
}





//==== 00607040 StaticGetMemberCount_00607040 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl NuclearPayloadModule__ReflectionInfoStruct_class_NuclearPayloadModule___StaticGetMemberCount(void) */

int __cdecl
NuclearPayloadModule__ReflectionInfoStruct_class_NuclearPayloadModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_769686f8__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_769686f8__thread_safe_static_guard_0__);
    if ( cde_l2_769686f8__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_76f85236_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00970004 = 0;
      _DAT_00970008 = 0;
      _DAT_0097000c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970010,"Unused");
      _DAT_0097001c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970020,"SteamWorkshopID");
      _DAT_0097002c = 6;
      _DAT_00970030 = 0x10;
      _DAT_00970034 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970038,"AStr");
      _DAT_00970044 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970048,"Description");
      _DAT_00970054 = 6;
      _DAT_00970058 = 0x20;
      _DAT_0097005c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970060,"AStr");
      _DAT_0097006c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970070,"UsesCustomName");
      _DAT_0097007c = 1;
      _DAT_00970080 = 0x68;
      _DAT_00970084 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970088,"bool");
      _DAT_00970094 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970098,"CoreComposition");
      _DAT_009700a4 = 8;
      _DAT_009700a8 = 0xa8;
      _DAT_009700ac = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009700b0,"Material");
      _DAT_009700bc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009700c0,"ReflectorComposition");
      _DAT_009700cc = 8;
      _DAT_009700d0 = 0xac;
      _DAT_009700d4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009700d8,"Material");
      _DAT_009700e4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009700e8,"SlowExplosive");
      _DAT_009700f4 = 10;
      _DAT_009700f8 = 0xb0;
      _DAT_009700fc = 0x28;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970100,"CombustionMixtureSubModule");
      _DAT_0097010c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970110,"FastExplosive");
      _DAT_0097011c = 8;
      _DAT_00970120 = 0xd8;
      _DAT_00970124 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970128,"Material");
      _DAT_00970134 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970138,"CoreMass_kg");
      _DAT_00970144 = 4;
      _DAT_00970148 = 0xe0;
      _DAT_0097014c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970150,"double");
      _DAT_0097015c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970160,"Enrichment_Percent");
      _DAT_0097016c = 4;
      _DAT_00970170 = 0xe8;
      _DAT_00970174 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970178,"double");
      _DAT_00970184 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970188,"HollowCoreRadius_m");
      _DAT_00970194 = 4;
      _DAT_00970198 = 0xf0;
      _DAT_0097019c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009701a0,"double");
      _DAT_009701ac = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009701b0,"InnerExplosiveWidth_m");
      _DAT_009701bc = 4;
      _DAT_009701c0 = 0xf8;
      _DAT_009701c4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009701c8,"double");
      _DAT_009701d4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009701d8,"FusionBoost");
      _DAT_009701e4 = 8;
      _DAT_009701e8 = 0x100;
      _DAT_009701ec = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009701f0,"FusionReaction");
      _DAT_009701fc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970200,"FusionFuelDensity_kg__m3");
      _DAT_0097020c = 4;
      _DAT_00970210 = 0x108;
      _DAT_00970214 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970218,"double");
      _DAT_00970224 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970228,"Detonator");
      _DAT_00970234 = 10;
      _DAT_00970238 = 0x110;
      _DAT_0097023c = 0x30;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970240,"ProximityDetonator");
      _DAT_0097024c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970250,"DelayedTrigger");
      _DAT_0097025c = 1;
      _DAT_00970260 = 0x140;
      _DAT_00970264 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970268,"bool");
      _DAT_00970274 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970278,"TargetsShips");
      _DAT_00970284 = 1;
      _DAT_00970288 = 0x70;
      _DAT_0097028c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970290,"bool");
      _DAT_0097029c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009702a0,"TargetsShots");
      _DAT_009702ac = 1;
      _DAT_009702b0 = 0x71;
      _DAT_009702b4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009702b8,"bool");
      _DAT_009702c4 = 0;
      atexit( private__static_int_const___cdecl_NuclearPayloadModule__ReflectionInfoStruct_class_NuclearPayloadModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_769686f8__thread_safe_static_guard_0__);
    }
  }
  return 0x12;
}





//==== 00607570 StaticGetReflectionInfo_00607570 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct NuclearPayloadModule__ReflectionInfoStruct_L_classNuclearPayloadModule_G_ *
   __cdecl NuclearPayloadModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_NuclearPayloadModule_G_ * __cdecl
NuclearPayloadModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_3e166497__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_3e166497__thread_safe_static_guard_0__);
    if ( cde_l2_3e166497__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_f8323733_ReflectionInfo) = &vftable_250;
      _Init_thread_footer(& cde_l2_3e166497__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_f8323733_ReflectionInfo;
}





//==== 006075d0 GetDecimalPropertyBoundaries_006075d0 ====


/* public: virtual class util__Maybe_L_structutil__Range_L_double_G__G_ __thiscall
   ProximityDetonator__GetDecimalPropertyBoundaries(struct util__ClassMember const &)const  */

void __thiscall
ProximityDetonator__GetDecimalPropertyBoundaries(ProximityDetonator *this,ClassMember *param_1)

{
  double dVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined4 *in_stack_00000008;
  undefined8 uStack_14;
  undefined8 uStack_c;
  
  if ((int)in_stack_00000008[1] < 1) {
    puVar3 = (undefined1 *)(&cde_l2_0b2b1c9f_NullString);
  }
  else {
    puVar3 = (undefined1 *)*in_stack_00000008;
  }
  for (pcVar2 = "ActivationRange_km";
      (pcVar2[(int)(puVar3 + -0x92a6d8)] != '\0' || (*pcVar2 != '\0')); pcVar2 = pcVar2 + 1) {
    if (pcVar2[(int)(puVar3 + -0x92a6d8)] != *pcVar2) {
      (param_1->Name).Data = (char *)0x0;
      (param_1->Name).Capacity = 0;
      (param_1->Name).Length = 0;
      *(undefined4 *)&param_1->Type = 0;
      *(undefined1 *)&param_1->Offset = 0;
      return;
    }
  }
  dVar1 = this->HardRange_km;
  uStack_c = 100.0;
  uStack_14 = dVar1;
  if (100.0 < dVar1) {
    uStack_14 = 100.0;
    uStack_c = dVar1;
  }
  (param_1->Name).Data = (char *)uStack_14;
  (param_1->Name).Capacity = (*(uint32_t*)((char*)&(uStack_14)+4));
  (param_1->Name).Length = (int)uStack_c;
  *(undefined4 *)&(param_1->Type) = (*(uint32_t*)((char*)&(uStack_c)+4));
  *(undefined1 *)&param_1->Offset = 1;
  return;
}





//==== 00607660 GetLegacyValueReplacement_00607660 ====


/* public: virtual class util__Str_L_char_G_ 
   ProximityDetonator__GetLegacyValueReplacement(class util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
ProximityDetonator__GetLegacyValueReplacement
          (ProximityDetonator *this,Str_L_char_G_ *__return_storage_ptr__,Str_L_char_G_ *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  if (param_1->Capacity < 1) {
    pcVar2 = "";
  }
  else {
    pcVar2 = param_1->Data;
  }
  for (pcVar1 = "Range_km"; (pcVar1[(int)(pcVar2 + -0x92b600)] != '\0' || (*pcVar1 != '\0'));
      pcVar1 = pcVar1 + 1) {
    if (pcVar1[(int)(pcVar2 + -0x92b600)] != *pcVar1) {
      __return_storage_ptr__->Data = (char *)0x0;
      __return_storage_ptr__->Capacity = 0;
      __return_storage_ptr__->Length = 0;
      return __return_storage_ptr__;
    }
  }
  util__Str_char___Str_char(__return_storage_ptr__,"ActivationRange_km");
  return __return_storage_ptr__;
}





//==== 006076d0 GetComposition_006076d0 ====


/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   CombustionMixtureSubModule__GetComposition(void)const  */

void __thiscall CombustionMixtureSubModule__GetComposition(CombustionMixtureSubModule *this)

{
  undefined8 stack0xfffffffc;
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  Material *pMVar5;
  bool bVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  Darray_L_struct_MaterialConstituent_G_ *in_stack_00000004;
  void *pvStack_30;
  undefined4 uStack_20;
  int iStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = (undefined **)(&vftable_75);
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 2;
  puVar7 = (undefined4 *)port_op_new(0x20);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    iVar10 = 2;
    puVar8 = puVar7;
    do {
      *puVar8 = 0;
      *(undefined8 *)(puVar8 + 2) = 0;
      iVar10 = iVar10 + -1;
      puVar8 = puVar8 + 4;
    } while (iVar10 != 0);
  }
  *(undefined4 **)(in_stack_00000004 + 4) = puVar7;
  iVar10 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0xc)) {
    iVar11 = 0;
    do {
      iVar11 = iVar11 + 0x10;
      iVar10 = iVar10 + 1;
      puVar7 = (undefined4 *)(*(int *)(in_stack_00000004 + 4) + -0x10 + iVar11);
      *puVar7 = 0;
      puVar7[1] = uStack_20;
      puVar7[2] = 0;
      puVar7[3] = 0;
    } while (iVar10 < *(int *)(in_stack_00000004 + 0xc));
  }
  piVar9 = (int *)ChemicalReaction__GetReactantsByMassPercent(this->CombustionReaction);
  iStack_c = 0;
  iVar10 = (**(code **)(uintptr_t)(*piVar9 + 0xc))();
  if (iStack_c < iVar10) {
    do {
      puVar7 = (undefined4 *)(**(code **)*piVar9)(&iStack_c);
      dVar1 = this->DelayCompositionMassFraction;
      uVar4 = *puVar7;
      dVar2 = this->CachedMass_kg;
      iVar10 = *(int *)(in_stack_00000004 + 8);
      dVar3 = *(double *)(puVar7 + 2);
      iStack_10 = iVar10 + 1;
      util__Darray_struct_MaterialConstituent___SetSize(in_stack_00000004,&iStack_10);
      bVar6 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                        ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)
                         in_stack_00000004,iVar10);
      if (bVar6) {
        puVar7 = (undefined4 *)
                 (*(int *)(in_stack_00000004 + 4) + -0x10 + *(int *)(in_stack_00000004 + 8) * 0x10);
        *puVar7 = uVar4;
        puVar7[1] = uStack_20;
        *(double *)(puVar7 + 2) = (1.0 - dVar1) * dVar2 * dVar3;
      }
      iStack_c = iStack_c + 1;
      iVar10 = (**(code **)(uintptr_t)(*piVar9 + 0xc))();
    } while (iStack_c < iVar10);
  }
  if (pvStack_30 != (void *)0x0) {
    port_op_delete(pvStack_30);
  }
  dVar1 = this->CachedMass_kg;
  pMVar5 = this->DelayComposition;
  dVar2 = this->DelayCompositionMassFraction;
  iVar10 = *(int *)(in_stack_00000004 + 8);
  iStack_10 = iVar10 + 1;
  util__Darray_struct_MaterialConstituent___SetSize(in_stack_00000004,&iStack_10);
  bVar6 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                    ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)in_stack_00000004,
                     iVar10);
  if (bVar6) {
    puVar7 = (undefined4 *)
             (*(int *)(in_stack_00000004 + 4) + -0x10 + *(int *)(in_stack_00000004 + 8) * 0x10);
    *puVar7 = (undefined4)(uintptr_t)(pMVar5);
    puVar7[1] = (undefined4)(uintptr_t)(pvStack_30);
    *(double *)(puVar7 + 2) = dVar1 * dVar2;
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00607880 GetStatuses_00607880 ====

/* public: virtual class DesignStatusBuffer  CombustionMixtureSubModule__GetStatuses(class
   DataParser *)const  */

DesignStatusBuffer * 
CombustionMixtureSubModule__GetStatuses
          (CombustionMixtureSubModule *this,DesignStatusBuffer *__return_storage_ptr__,
          DataParser *param_1)

{
  undefined8 stack0xffffff7c;
  double *pdVar1;
  MaterialConstituent MVar2;
  MaterialConstituent MVar3;
  DesignStatusBuffer *this_00;
  Darray_L_MaterialConstituent_G_ *pDVar4;
  Material *in_stack_ffffff7c;
  undefined4 in_stack_ffffff80;
  undefined4 uVar5;
  undefined4 uVar6;
  Darray_L_MaterialConstituent_G_ local_6c;
  Darray_L_MaterialConstituent_G_ local_5c;
  Str_L_char_G_ local_4c;
  Str_L_char_G_ local_40;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  double local_1c;
  double local_14;
  double local_c;
  
  this_00 = __return_storage_ptr__;
  __return_storage_ptr__->DataManager = (DataParser *)0x0;
  (__return_storage_ptr__->Messages)._pad_0x0_0 = 0;
  (__return_storage_ptr__->Messages).Data = (DesignStatusMessage *)0x0;
  (__return_storage_ptr__->Messages).Size = 0;
  *(undefined8 *)&(__return_storage_ptr__->Messages).Capacity = 0;
  DesignStatusBuffer__DesignStatusBuffer(__return_storage_ptr__,param_1);
  util__Str_char___Str_char(&local_4c,"CombustionMixtureIgnitionFailure");
  local_40.Data = (char *)0x0;
  local_40.Capacity = 0;
  local_40.Length = 0;
  local_34.Data = (char *)0x0;
  local_34.Capacity = 0;
  local_34.Length = 0;
  local_28.Data = (char *)0x0;
  local_28.Capacity = 0;
  local_28.Length = 0;
  pDVar4 = ChemicalReaction__GetReactants(this->CombustionReaction,&local_5c);
  uVar5 = 0x607900;
  local_c = Material__GetMixtureMolarMass_kg__mol(pDVar4);
  local_5c._pad_0x0_0 = (int)&vftable_15;
  if (local_5c.Data != (MaterialConstituent *)0x0) {
    uVar5 = 0x60791a;
    port_op_delete(local_5c.Data);
  }
  local_5c.Data = (MaterialConstituent *)0x0;
  local_5c._pad_0x0_0 = (int)&vftable;
  uVar6 = 0x607933;
  local_14 = Material__GetMolarMass_kg__mol(this->DelayComposition);
  if ((this->DelayCompositionMassFraction * local_c) /
      ((local_c - local_14) * this->DelayCompositionMassFraction + local_14) < 1.0) {
    GetDelayComposition(this,(MaterialConstituent *)&stack0xffffff7c);
    (*(uint32_t*)((char*)&(MVar2)+4)) = in_stack_ffffff80;
    MVar2.Type = in_stack_ffffff7c;
    MVar2.UnitlessFraction = uVar5;
    (*(uint32_t *)((char *)&(MVar2.UnitlessFraction) + 4)) = uVar6;
    *(uint32_t *)&local_1c = ChemicalReaction__GetAdiabaticFlameTemperature_K(this->CombustionReaction,MVar2);
    pDVar4 = ChemicalReaction__GetReactants(this->CombustionReaction,&local_6c);
    uVar5 = 0x607991;
    local_14 = Material__GetMixtureMolarMass_kg__mol(pDVar4);
    local_6c._pad_0x0_0 = (int)&vftable_15;
    if (local_6c.Data != (MaterialConstituent *)0x0) {
      uVar5 = 0x6079ab;
      port_op_delete(local_6c.Data);
    }
    local_6c.Data = (MaterialConstituent *)0x0;
    local_6c._pad_0x0_0 = (int)&vftable;
    uVar6 = 0x6079c4;
    local_c = Material__GetMolarMass_kg__mol(this->DelayComposition);
    if ((((this->DelayCompositionMassFraction * local_14) /
          ((local_14 - local_c) * this->DelayCompositionMassFraction + local_c) < 1.0) &&
        (pdVar1 = &this->CombustionReaction->AutoignitionTemperature_K,
        *pdVar1 <= local_1c && local_1c != *pdVar1)) && (0.0 < local_1c)) {
      GetDelayComposition(this,(MaterialConstituent *)&stack0xffffff7c);
      (*(uint32_t*)((char*)&(MVar3)+4)) = in_stack_ffffff80;
      MVar3.Type = in_stack_ffffff7c;
      MVar3.UnitlessFraction = uVar5;
      (*(uint32_t *)((char *)&(MVar3.UnitlessFraction) + 4)) = uVar6;
      *(uint32_t *)&local_1c = ChemicalReaction__GetLaminarFlameSpeed_m__s(this->CombustionReaction,MVar3);
      (*(uint8_t*)&(__return_storage_ptr__)) = false;
      if (0.0 < local_1c) goto LAB_00607a3a;
    }
  }
  (*(uint8_t*)&(__return_storage_ptr__)) = true;
LAB_00607a3a:
  DesignStatusBuffer__CheckError
            (this_00,(*(uint8_t*)&(__return_storage_ptr__)),&local_4c,&local_28,&local_34,&local_40,
             (ModulePlacer *)0x0);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_40.Data != (char *)0x0) {
    port_op_delete(local_40.Data);
    local_40.Data = (char *)0x0;
  }
  if (local_4c.Data != (char *)0x0) {
    port_op_delete(local_4c.Data);
  }
  return this_00;
}

//==== 00607ac0 GetPointerPropertyChoices_00607ac0 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   CombustionMixtureSubModule__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

void 
CombustionMixtureSubModule__GetPointerPropertyChoices
          (CombustionMixtureSubModule *this,ClassMember *param_1,
          SerializationManagerInterface *param_2)

{
  undefined8 stack0xfffffffc;
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  SerializationManagerInterface SVar6;
  int *in_stack_0000000c;
  Str_L_char_G_ SStack_54;
  undefined **ppuStack_48;
  void *pvStack_44;
  int iStack_38;
  undefined **ppuStack_34;
  void *pvStack_30;
  undefined **ppuStack_24;
  void *pvStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  char cStack_14;
  int *piStack_10;
  char acStack_c [4];
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piStack_10 = in_stack_0000000c;
  if (*(int *)&param_2[1] < 1) {
    SVar6 = *(SerializationManagerInterface *)&cde_l2_0b2b1c9f_NullString;
  }
  else {
    SVar6 = *param_2;
  }
  pcVar3 = "CombustionReaction";
  while( true ) {
    cVar1 = pcVar3[(int)(*(int *)&SVar6 + -0x92ac08)];
    if ((cVar1 == '\0') && (*pcVar3 == '\0')) {
      acStack_c[0] = cVar1;
      util__Str_char___Str_char(&SStack_54,"ChemicalReaction");
      (**(code **)(uintptr_t)(*piStack_10 + 4))(&ppuStack_34,&SStack_54,0);
      if (SStack_54.Data != (char *)0x0) {
        port_op_delete(SStack_54.Data);
        SStack_54.Data = (char *)0x0;
      }
      cStack_14 = acStack_c[0];
      ppuStack_24 = (undefined **)0x0;
      pvStack_20 = (void *)0x0;
      iStack_1c = 0;
      uStack_18 = 0;
      iVar4 = (*(code *)ppuStack_34[3])();
      util__Darray_class_util__Reflectable____Darray_class_util__Reflectable
                ((Darray_L_class_util__Reflectable_P_G_ *)&ppuStack_24,iVar4);
      piStack_10 = (int *)0x0;
      iVar4 = (*(code *)ppuStack_34[3])();
      if ((int)piStack_10 < iVar4) {
        do {
          puVar5 = (undefined4 *)(*(code *)*ppuStack_34)(&piStack_10);
          bVar2 = ChemicalReaction__IsExplosiveComposition((ChemicalReaction *)*puVar5);
          iVar4 = iStack_1c;
          if (bVar2) {
            iStack_38 = iStack_1c + 1;
            util__Darray_class_util__Reflectable____SetSize
                      ((Darray_L_class_util__Reflectable_P_G_ *)&ppuStack_24,&iStack_38);
            bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                              ((Darray_L_enum_GraphicsResource__Type_G_ *)&ppuStack_24,iVar4);
            if (bVar2) {
              *(undefined4 *)((int)pvStack_20 + iStack_1c * 4 + -4) = *puVar5;
            }
          }
          piStack_10 = (int *)((int)piStack_10 + 1);
          iVar4 = (*(code *)ppuStack_34[3])();
        } while ((int)piStack_10 < iVar4);
      }
      acStack_c[0] = '\0';
      FUN_004f1250(&ppuStack_48,&ppuStack_24,acStack_c);
      AsListing_class_util__Reflectable((Darray_L_class_util__Reflectable_P_G_ *)param_1);
      ppuStack_48 = (undefined **)(&vftable_6);
      if (pvStack_44 != (void *)0x0) {
        port_op_delete(pvStack_44);
      }
      pvStack_44 = (void *)0x0;
      ppuStack_48 = (undefined **)(&vftable);
      ppuStack_24 = (undefined **)(&vftable_6);
      if (pvStack_20 != (void *)0x0) {
        port_op_delete(pvStack_20);
      }
      pvStack_20 = (void *)0x0;
      ppuStack_24 = (undefined **)(&vftable);
      ppuStack_34 = (undefined **)(&vftable_6);
      if (pvStack_30 != (void *)0x0) {
        port_op_delete(pvStack_30);
      }
      goto LAB_00607cb6;
    }
    if (cVar1 != *pcVar3) break;
    pcVar3 = pcVar3 + 1;
  }
  if (*(int *)&param_2[1] < 1) {
    SVar6 = *(SerializationManagerInterface *)&cde_l2_0b2b1c9f_NullString;
  }
  else {
    SVar6 = *param_2;
  }
  for (pcVar3 = "DelayComposition";
      (pcVar3[(int)(*(int *)&SVar6 + -0x92ac1c)] != '\0' || (*pcVar3 != '\0')); pcVar3 = pcVar3 + 1) {
    if (pcVar3[(int)(*(int *)&SVar6 + -0x92ac1c)] != *pcVar3) {
      (param_1->Name).Data =
           (char *)&vftable_85;
      (param_1->Name).Capacity = 0;
      (param_1->Name).Length = 0;
      *(undefined4 *)&param_1->Type = 0;
LAB_00607cb6:
      __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  GetMaterials((DataParser *)param_1,(int)in_stack_0000000c,true);
  goto LAB_00607cb6;
}





//==== 006087a0 Maybe_util__WeakPtr_Body___ ====


/* public:  util__Maybe_L_classutil__WeakPtr_L_classBody_G__G___Maybe_L_classutil__WeakPtr_L_class_Body_G__G_(class util__WeakPtr_L_classBody_G_ const &) */

Maybe_L_class_util__WeakPtr_L_class_Body_G___G_ * 
util__Maybe_class_util__WeakPtr_class_Body_____Maybe_class_util__WeakPtr_class_Body
          (Maybe_L_class_util__WeakPtr_L_class_Body_G___G_ *this,WeakPtr_L_class_Body_G_ *param_1)

{
  ReferenceController *this_00;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  this_00 = *(ReferenceController **)(param_1 + 4);
  *(ReferenceController **)(this + 4) = this_00;
  if (this_00 != (ReferenceController *)0x0) {
    util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(this_00);
  }
  *(char *)&(this[8]) = 0x1;
  return this;
}





//==== 006087d0 WeakPtr_Body_ ====


/* public:  util__WeakPtr_L_classBody_G___WeakPtr_L_classBody_G_(class util__WeakPtr_L_classBody_G_
   const &) */

WeakPtr_L_class_Body_G_ * 
util__WeakPtr_class_Body___WeakPtr_class_Body
          (WeakPtr_L_class_Body_G_ *this,WeakPtr_L_class_Body_G_ *param_1)

{
  ReferenceController *this_00;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  this_00 = *(ReferenceController **)(param_1 + 4);
  *(ReferenceController **)(this + 4) = this_00;
  if (this_00 != (ReferenceController *)0x0) {
    util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(this_00);
  }
  return this;
}





//==== 00609740 GetCombustableMassFraction ====


/* public: double __thiscall CombustionMixtureSubModule__GetCombustableMassFraction(void)const  */

double __thiscall
CombustionMixtureSubModule__GetCombustableMassFraction(CombustionMixtureSubModule *this)

{
  return 1.0 - this->DelayCompositionMassFraction;
}





//==== 00609750 GetDelayComposition ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: struct MaterialConstituent 
   CombustionMixtureSubModule__GetDelayComposition(void)const  */

MaterialConstituent * 
CombustionMixtureSubModule__GetDelayComposition
          (CombustionMixtureSubModule *this,MaterialConstituent *__return_storage_ptr__)

{
  undefined8 stack0xfffffffc;
  Darray_L_MaterialConstituent_G_ *pDVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  Darray_L_int_G_ *pDVar5;
  double dVar6;
  undefined1 local_20 [16];
  undefined8 local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pDVar1 = ChemicalReaction__GetReactants
                     (this->CombustionReaction,(Darray_L_MaterialConstituent_G_ *)local_20);
  *(uint32_t *)&local_10 = Material__GetMixtureMolarMass_kg__mol(pDVar1);
  (*(uint32_t*)&(local_20)) = (uint32_t)(uintptr_t)(&vftable_15);
  if ((MaterialConstituent *)(*(uint32_t*)((char*)&(local_20)+4)) != (MaterialConstituent *)0x0) {
    port_op_delete((void *)(*(uint32_t*)((char*)&(local_20)+4)));
  }
  (*(uint32_t*)((char*)&(local_20)+4)) = (uint32_t)(uintptr_t)((MaterialConstituent *)0x0);
  (*(uint32_t*)&(local_20)) = (uint32_t)(uintptr_t)(&vftable);
  dVar6 = Material__GetMolarMass_kg__mol(this->DelayComposition);
  (*(uint64_t*)((char*)&(local_20)+8)) =
       (this->DelayCompositionMassFraction * local_10) /
       ((local_10 - dVar6) * this->DelayCompositionMassFraction + dVar6);
  if ((double)(*(uint64_t*)((char*)&(local_20)+8)) < 1.0) {
    iVar4 = 0;
    pDVar5 = &this->CombustionReaction->ReactantCounts;
    *(uint64_t *)&local_10 = (double)((ulonglong)local_10 & 0xffffffff);
    iVar2 = (**(code **)(pDVar5->_pad_0x0_0 + 0xc))();
    if ((*(uint32_t*)((char*)&(local_10)+4)) < iVar2) {
      do {
        piVar3 = (int *)(**(code **)pDVar5->_pad_0x0_0)((int)&local_10 + 4);
        iVar4 = iVar4 + *piVar3;
        *(uint32_t *)&local_10 = (double)CONCAT44((*(uint32_t*)((char*)&(local_10)+4)) + 1,(undefined4)local_10);
        iVar2 = (**(code **)(pDVar5->_pad_0x0_0 + 0xc))();
      } while ((*(uint32_t*)((char*)&(local_10)+4)) < iVar2);
    }
    __return_storage_ptr__->Type = this->DelayComposition;
    dVar6 = ((double)iVar4 * (double)(*(uint64_t*)((char*)&(local_20)+8))) / (1.0 - (double)(*(uint64_t*)((char*)&(local_20)+8)));
  }
  else {
    dVar6 = 0.0;
    __return_storage_ptr__->Type = this->DelayComposition;
  }
  __return_storage_ptr__->UnitlessFraction = dVar6;
  return __return_storage_ptr__;
}

//==== 00609dd0 GetDetonationVelocity_m__s ====


/* public: double __thiscall CombustionMixtureSubModule__GetDetonationVelocity_m__s(void)const  */

double __thiscall
CombustionMixtureSubModule__GetDetonationVelocity_m__s(CombustionMixtureSubModule *this)

{
  undefined8 stack0xffffffd0;
  MaterialConstituent MVar1;
  Darray_L_struct_MaterialConstituent_G_ *pDVar2;
  double dVar3;
  double dVar4;
  undefined8 in_stack_ffffffd0;
  undefined4 uVar5;
  undefined4 uVar6;
  void *pvStack_18;
  
Darray_L_MaterialConstituent_G_ aRv_13258;
  pDVar2 = (Darray_L_struct_MaterialConstituent_G_ *)
           ChemicalReaction__GetReactants(this->CombustionReaction,&aRv_13258);
pDVar2 = (Darray_L_struct_MaterialConstituent_G_ *)&aRv_13258;
  uVar5 = 0x609deb;
  dVar3 = Material__GetMixtureMolarMass_kg__mol(pDVar2);
  if (pvStack_18 != (void *)0x0) {
    uVar5 = 0x609e05;
    port_op_delete(pvStack_18);
  }
  uVar6 = 0x609e1e;
  dVar4 = Material__GetMolarMass_kg__mol(this->DelayComposition);
  if ((this->DelayCompositionMassFraction * dVar3) /
      ((dVar3 - dVar4) * this->DelayCompositionMassFraction + dVar4) < 1.0) {
    GetDelayComposition(this,(MaterialConstituent *)&stack0xffffffd0);
    MVar1.UnitlessFraction = uVar5;
    MVar1.Type = (Material *)in_stack_ffffffd0;
    (*(uint32_t*)((char*)&(MVar1)+4)) = SUB84(in_stack_ffffffd0,4);
    (*(uint32_t *)((char *)&(MVar1.UnitlessFraction) + 4)) = uVar6;
    dVar3 = ChemicalReaction__GetDetonationVelocity_m__s(this->CombustionReaction,MVar1);
    return dVar3;
  }
  return 0.0;
}





//==== 00609e80 GetEnergyDensity_J__kg ====


/* public: double __thiscall CombustionMixtureSubModule__GetEnergyDensity_J__kg(void)const  */

double __thiscall
CombustionMixtureSubModule__GetEnergyDensity_J__kg(CombustionMixtureSubModule *this)

{
  undefined8 stack0xffffffd0;
  MaterialConstituent MVar1;
  Darray_L_struct_MaterialConstituent_G_ *pDVar2;
  double dVar3;
  double dVar4;
  undefined8 in_stack_ffffffd0;
  undefined4 uVar5;
  undefined4 uVar6;
  void *pvStack_18;
  
Darray_L_MaterialConstituent_G_ aRv_13304;
  pDVar2 = (Darray_L_struct_MaterialConstituent_G_ *)
           ChemicalReaction__GetReactants(this->CombustionReaction,&aRv_13304);
pDVar2 = (Darray_L_struct_MaterialConstituent_G_ *)&aRv_13304;
  uVar5 = 0x609e9b;
  dVar3 = Material__GetMixtureMolarMass_kg__mol(pDVar2);
  if (pvStack_18 != (void *)0x0) {
    uVar5 = 0x609eb5;
    port_op_delete(pvStack_18);
  }
  uVar6 = 0x609ece;
  dVar4 = Material__GetMolarMass_kg__mol(this->DelayComposition);
  if ((this->DelayCompositionMassFraction * dVar3) /
      ((dVar3 - dVar4) * this->DelayCompositionMassFraction + dVar4) < 1.0) {
    GetDelayComposition(this,(MaterialConstituent *)&stack0xffffffd0);
    MVar1.UnitlessFraction = uVar5;
    MVar1.Type = (Material *)in_stack_ffffffd0;
    (*(uint32_t*)((char*)&(MVar1)+4)) = SUB84(in_stack_ffffffd0,4);
    (*(uint32_t *)((char *)&(MVar1.UnitlessFraction) + 4)) = uVar6;
    dVar3 = ChemicalReaction__GetEnergyDensity_J__kg(this->CombustionReaction,MVar1);
    return dVar3;
  }
  return 0.0;
}





//==== 00609f30 GetFlameSpeed_m__s ====


/* public: double __thiscall CombustionMixtureSubModule__GetFlameSpeed_m__s(void)const  */

double __thiscall CombustionMixtureSubModule__GetFlameSpeed_m__s(CombustionMixtureSubModule *this)

{
  undefined8 stack0xffffffec;
  double dVar1;
  MaterialConstituent in_stack_ffffffec;
  
  GetDelayComposition(this,(MaterialConstituent *)&stack0xffffffec);
  dVar1 = ChemicalReaction__GetLaminarFlameSpeed_m__s(this->CombustionReaction,in_stack_ffffffec);
}





//==== 00609f50 GetFlameTemperature_K ====


/* public: double __thiscall CombustionMixtureSubModule__GetFlameTemperature_K(void)const  */

double __thiscall
CombustionMixtureSubModule__GetFlameTemperature_K(CombustionMixtureSubModule *this)

{
  undefined8 stack0xffffffc8;
  double *pdVar1;
  MaterialConstituent MVar2;
  Darray_L_struct_MaterialConstituent_G_ *pDVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 in_stack_ffffffc8;
  undefined4 in_stack_ffffffd0;
  undefined4 in_stack_ffffffd4;
  void *pvStack_18;
  
  GetDelayComposition(this,(MaterialConstituent *)&stack0xffffffc8);
  MVar2.UnitlessFraction = in_stack_ffffffd0;
  MVar2.Type = (Material *)in_stack_ffffffc8;
  (*(uint32_t*)((char*)&(MVar2)+4)) = SUB84(in_stack_ffffffc8,4);
  (*(uint32_t *)((char *)&(MVar2.UnitlessFraction) + 4)) = in_stack_ffffffd4;
  dVar4 = ChemicalReaction__GetAdiabaticFlameTemperature_K(this->CombustionReaction,MVar2);
Darray_L_MaterialConstituent_G_ aRv_13378;
  pDVar3 = (Darray_L_struct_MaterialConstituent_G_ *)
           ChemicalReaction__GetReactants(this->CombustionReaction,&aRv_13378);
pDVar3 = (Darray_L_struct_MaterialConstituent_G_ *)&aRv_13378;
  dVar5 = Material__GetMixtureMolarMass_kg__mol(pDVar3);
  if (pvStack_18 != (void *)0x0) {
    port_op_delete(pvStack_18);
  }
  dVar6 = Material__GetMolarMass_kg__mol(this->DelayComposition);
  if ((1.0 <= (this->DelayCompositionMassFraction * dVar5) /
              ((dVar5 - dVar6) * this->DelayCompositionMassFraction + dVar6)) ||
     (pdVar1 = &this->CombustionReaction->AutoignitionTemperature_K,
     dVar4 < *pdVar1 || dVar4 == *pdVar1)) {
    dVar4 = 0.0;
  }
  return dVar4;
}





//==== 0060a010 GetFlameWidth_m ====


/* public: double __thiscall CombustionMixtureSubModule__GetFlameWidth_m(void)const  */

double __thiscall CombustionMixtureSubModule__GetFlameWidth_m(CombustionMixtureSubModule *this)

{
  undefined8 stack0xffffffec;
  double dVar1;
  MaterialConstituent in_stack_ffffffec;
  
  GetDelayComposition(this,(MaterialConstituent *)&stack0xffffffec);
  dVar1 = ChemicalReaction__GetLaminarFlameWidth_m(this->CombustionReaction,in_stack_ffffffec);
}





//==== 0060a030 GetMixture ====


/* public: class util__Darray_L_structMaterialConstituent_G_ __thiscall
   CombustionMixtureSubModule__GetMixture(void)const  */

void __thiscall CombustionMixtureSubModule__GetMixture(CombustionMixtureSubModule *this,Darray_L_struct_MaterialConstituent_G_ * __return_storage_ptr__)

{
  undefined8 stack0xfffffffc;
  double dVar1;
  undefined4 uVar2;
  Material *pMVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  Darray_L_struct_MaterialConstituent_G_ *pDVar8;
  double dVar9;
  double dVar10;
  double dVar11;

  void *pvStack_38;
  void *pvStack_28;
  undefined8 uStack_14;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)__return_storage_ptr__ = 0;
  *(undefined4 *)(__return_storage_ptr__ + 4) = 0;
  *(undefined4 *)(__return_storage_ptr__ + 8) = 0;
  *(undefined4 *)(__return_storage_ptr__ + 0xc) = 0;
Darray_L_MaterialConstituent_G_ aRv_13450;   ChemicalReaction__GetReactants(this->CombustionReaction,&aRv_13450);
Darray_L_MaterialConstituent_G_ aRv_13451;
  piVar5 = (int *)ChemicalReaction__GetReactants(this->CombustionReaction,&aRv_13451);
piVar5 = (int *)&aRv_13451;
  iStack_c = 0;
  iVar6 = (**(code **)(uintptr_t)(*piVar5 + 0xc))();
  if (iStack_c < iVar6) {
    do {
      puVar7 = (undefined4 *)(**(code **)*piVar5)(&iStack_c);
      dVar1 = this->DelayCompositionMassFraction;
      iVar6 = *(int *)(__return_storage_ptr__ + 8);
      uVar2 = *puVar7;
      dVar9 = *(double *)(puVar7 + 2);
      uStack_14 = (double)CONCAT44(iVar6 + 1,(undefined4)uStack_14);
      util__Darray_struct_MaterialConstituent___SetSize
                (__return_storage_ptr__,(int *)((int)&uStack_14 + 4));
      bVar4 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                        ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)
                         __return_storage_ptr__,iVar6);
      if (bVar4) {
        puVar7 = (undefined4 *)
                 (*(int *)(__return_storage_ptr__ + 4) + -0x10 + *(int *)(__return_storage_ptr__ + 8) * 0x10);
        *puVar7 = uVar2;
        puVar7[1] = (undefined4)(uintptr_t)(pvStack_28);
        *(double *)(puVar7 + 2) = (1.0 - dVar1) * dVar9;
      }
      iStack_c = iStack_c + 1;
      iVar6 = (**(code **)(uintptr_t)(*piVar5 + 0xc))();
    } while (iStack_c < iVar6);
  }
  if (pvStack_38 != (void *)0x0) {
    port_op_delete(pvStack_38);
  }
Darray_L_MaterialConstituent_G_ aRv_13482;
  pDVar8 = (Darray_L_struct_MaterialConstituent_G_ *)
           ChemicalReaction__GetReactants(this->CombustionReaction,&aRv_13482);
pDVar8 = (Darray_L_struct_MaterialConstituent_G_ *)&aRv_13482;
  uStack_14 = Material__GetMixtureMolarMass_kg__mol(pDVar8);
  if (pvStack_28 != (void *)0x0) {
    port_op_delete(pvStack_28);
  }
  dVar11 = Material__GetMolarMass_kg__mol(this->DelayComposition);
  dVar10 = this->DelayCompositionMassFraction * uStack_14;
  pMVar3 = this->DelayComposition;
  dVar9 = uStack_14 - dVar11;
  dVar1 = this->DelayCompositionMassFraction;
  iVar6 = *(int *)(__return_storage_ptr__ + 8);
  uStack_14 = (double)CONCAT44(iVar6 + 1,(undefined4)uStack_14);
  util__Darray_struct_MaterialConstituent___SetSize(__return_storage_ptr__,(int *)((int)&uStack_14 + 4));
  bVar4 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                    ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)__return_storage_ptr__,
                     iVar6);
  if (bVar4) {
    puVar7 = (undefined4 *)
             (*(int *)(__return_storage_ptr__ + 4) + -0x10 + *(int *)(__return_storage_ptr__ + 8) * 0x10);
    *puVar7 = (undefined4)(uintptr_t)(pMVar3);
    puVar7[1] = (undefined4)(uintptr_t)(pvStack_38);
    *(double *)(puVar7 + 2) = dVar10 / (dVar9 * dVar1 + dVar11);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0060a1c0 GetProducts ====


/* public: class util__Darray_L_structMaterialConstituent_G_ __thiscall
   CombustionMixtureSubModule__GetProducts(void)const  */

MaterialConstituent * __thiscall
CombustionMixtureSubModule__GetProducts(CombustionMixtureSubModule *this)

{
  MaterialConstituent *in_stack_00000004;
  MaterialConstituent MStack_14;
  
  GetDelayComposition(this,&MStack_14);
  ChemicalReaction__GetProductsWithDelay(this->CombustionReaction,in_stack_00000004);
}





//==== 0060a1f0 GetTotalStoredEnergy_J ====


/* public: double __thiscall CombustionMixtureSubModule__GetTotalStoredEnergy_J(void)const  */

double __thiscall
CombustionMixtureSubModule__GetTotalStoredEnergy_J(CombustionMixtureSubModule *this)

{
  ChemicalReaction *this_00;
  
  this_00 = this->CombustionReaction;
  ChemicalReaction__GetEnergyDensity_J__kg_Memoize(this_00);
  if ((this_00->GetEnergyDensity_J__kg_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return (1.0 - this->DelayCompositionMassFraction) * this->CachedMass_kg *
         (this_00->GetEnergyDensity_J__kg_MemoizedValue).Data;
}





//==== 0060a260 PassThroughCachedData_0060a260 ====


/* public: void __thiscall FixedLaserMountSubModule__PassThroughCachedData(double) */

void __thiscall
FixedLaserMountSubModule__PassThroughCachedData(FixedLaserMountSubModule *this,double param_1)

{
  this->CachedRadius_m = param_1;
  return;
}





//==== 0060a280 WillDetonate ====


/* public: bool __thiscall CombustionMixtureSubModule__WillDetonate(void)const  */

bool __thiscall CombustionMixtureSubModule__WillDetonate(CombustionMixtureSubModule *this)

{
  undefined8 stack0xffffffd0;
  MaterialConstituent MVar1;
  bool bVar2;
  Darray_L_struct_MaterialConstituent_G_ *pDVar3;
  double dVar4;
  double dVar5;
  undefined8 in_stack_ffffffd0;
  undefined4 uVar6;
  undefined4 uVar7;
  void *pvStack_18;
  
Darray_L_MaterialConstituent_G_ aRv_13597;
  pDVar3 = (Darray_L_struct_MaterialConstituent_G_ *)
           ChemicalReaction__GetReactants(this->CombustionReaction,&aRv_13597);
pDVar3 = (Darray_L_struct_MaterialConstituent_G_ *)&aRv_13597;
  uVar6 = 0x60a29b;
  dVar4 = Material__GetMixtureMolarMass_kg__mol(pDVar3);
  if (pvStack_18 != (void *)0x0) {
    uVar6 = 0x60a2b5;
    port_op_delete(pvStack_18);
  }
  uVar7 = 0x60a2ce;
  dVar5 = Material__GetMolarMass_kg__mol(this->DelayComposition);
  if ((this->DelayCompositionMassFraction * dVar4) /
      ((dVar4 - dVar5) * this->DelayCompositionMassFraction + dVar5) < 1.0) {
    GetDelayComposition(this,(MaterialConstituent *)&stack0xffffffd0);
    MVar1.UnitlessFraction = uVar6;
    MVar1.Type = (Material *)in_stack_ffffffd0;
    (*(uint32_t*)((char*)&(MVar1)+4)) = SUB84(in_stack_ffffffd0,4);
    (*(uint32_t *)((char *)&(MVar1.UnitlessFraction) + 4)) = uVar7;
    bVar2 = ChemicalReaction__IsLaminarFlameSupersonic(this->CombustionReaction,MVar1);
    if (bVar2) {
      return true;
    }
  }
  return false;
}





//==== 0060a330 GetCollisionType_0060a330 ====


/* public: virtual enum Collision__Type __thiscall MatterComponent__GetCollisionType(void)const  */

int __thiscall MatterComponent__GetCollisionType(MatterComponent *this)

{
  return Matter;
}





//==== 0060a340 GetReflectionInfo_0060a340 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   BlackBoxRadiationSubModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall
BlackBoxRadiationSubModule__GetReflectionInfo(BlackBoxRadiationSubModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_31902500__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_31902500__thread_safe_static_guard_0__);
    if ( cde_l2_31902500__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_a1e3ba94_ReflectionInfo) = &vftable_254;
      _Init_thread_footer(& cde_l2_31902500__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_a1e3ba94_ReflectionInfo;
}





//==== 0060a350 GetTypeName_0060a350 ====


/* public: virtual class util__Str_L_char_G_ 
   BlackBoxRadiationSubModule__ReflectionInfoStruct_struct_BlackBoxRadiationSubModule___GetTypeName(void)const  */

Str_L_char_G_ * 
BlackBoxRadiationSubModule__ReflectionInfoStruct_struct_BlackBoxRadiationSubModule___GetTypeName
          (ReflectionInfoStruct_L_struct_BlackBoxRadiationSubModule_G_ *this,
          Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"BlackBoxRadiationSubModule");
  return __return_storage_ptr__;
}





//==== 0060a370 GetMembers_0060a370 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   BlackBoxRadiationSubModule__ReflectionInfoStruct_struct_BlackBoxRadiationSubModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
BlackBoxRadiationSubModule__ReflectionInfoStruct_struct_BlackBoxRadiationSubModule___GetMembers
          (ReflectionInfoStruct_L_struct_BlackBoxRadiationSubModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_56b4ede5__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_56b4ede5__thread_safe_static_guard_0__),
      cde_l2_56b4ede5__thread_safe_static_guard_0__ == -1)) {
     cde_l2_71893648_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_56b4ede5__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_71893648_Count);
  iVar3 = 0;
  if (0 <  cde_l2_71893648_Count) {
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
    } while (iVar3 <  cde_l2_71893648_Count);
  }
  return in_stack_00000004;
}





//==== 0060a4b0 GetMember_0060a4b0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   BlackBoxRadiationSubModule__ReflectionInfoStruct_struct_BlackBoxRadiationSubModule___GetMember(class util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
BlackBoxRadiationSubModule__ReflectionInfoStruct_struct_BlackBoxRadiationSubModule___GetMember
          (ReflectionInfoStruct_L_struct_BlackBoxRadiationSubModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_b64b6b12__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_b64b6b12__thread_safe_static_guard_0__),
      cde_l2_b64b6b12__thread_safe_static_guard_0__ == -1)) {
     cde_l2_653a9204_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_b64b6b12__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_653a9204_Count) {
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
LAB_0060a53d:
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
          if (cVar3 == '\0') goto LAB_0060a53d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_653a9204_Count);
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





//==== 0060a650 GetFactory_0060a650 ====


/* public: virtual class util__Reflectable * (__cdecl*
   BlackBoxRadiationSubModule__ReflectionInfoStruct_struct_BlackBoxRadiationSubModule___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall BlackBoxRadiationSubModule__ReflectionInfoStruct_struct_BlackBoxRadiationSubModule___GetFactory
          (ReflectionInfoStruct_L_struct_BlackBoxRadiationSubModule_G_ *this)

{
  return StaticFactory;
}





//==== 0060a660 GetClassID_0060a660 ====


/* public: virtual unsigned long __thiscall BlackBoxPowerModule__GetClassID(void)const  */

ulong __thiscall BlackBoxPowerModule__GetClassID(BlackBoxPowerModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_3999ee5f__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_3999ee5f__thread_safe_static_guard_0__);
    if ( cde_l2_3999ee5f__thread_safe_static_guard_0__ == -1) {
       cde_l2_a3ea3e16_ID = util__GetHash("BlackBoxPowerModule");
      _Init_thread_footer(& cde_l2_3999ee5f__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_a3ea3e16_ID;
}





//==== 0060a6c0 GetCustomModelFileNames_0060a6c0 ====


/* public: virtual class util__Darray_L_classutil__Str_L_char_G__G_ __thiscall
   BlackBoxPowerModule__GetCustomModelFileNames(void)const  */

Darray_L_class_util__Str_L_char_G___G_ * __thiscall
BlackBoxPowerModule__GetCustomModelFileNames(BlackBoxPowerModule *this)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  Darray_L_class_util__Str_L_char_G___G_ *in_stack_00000004;
  Str_L_char_G_ SStack_18;
  BlackBoxPowerModule *pBStack_c;
  int iStack_8;
  
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = (undefined **)(&vftable_4);
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 1;
  pBStack_c = this;
  puVar2 = (undefined4 *)port_op_new(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 1;
    puVar3 = puVar2 + 1;
    *puVar3 = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
  }
  iVar4 = 0;
  *(undefined4 **)(in_stack_00000004 + 4) = puVar3;
  if (0 < *(int *)(in_stack_00000004 + 0xc)) {
    SStack_18.Data = (char *)0x0;
    iVar5 = 0;
    SStack_18.Capacity = 0;
    SStack_18.Length = 0;
    do {
      util__Str_char___operator__o8((Str_L_char_G_ *)(*(int *)(in_stack_00000004 + 4) + iVar5),&SStack_18);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0xc;
    } while (iVar4 < *(int *)(in_stack_00000004 + 0xc));
  }
  iVar4 = *(int *)(in_stack_00000004 + 8);
  iStack_8 = iVar4 + 1;
  util__Darray_class_util__Str_char_____SetSize(in_stack_00000004,&iStack_8);
  bVar1 = util__Darray_class_util__Str_char_____CheckSize(in_stack_00000004,iVar4);
  if (bVar1) {
    util__Str_char___operator__o8
              ((Str_L_char_G_ *)
               (*(int *)(in_stack_00000004 + 4) + *(int *)(in_stack_00000004 + 8) * 0xc + -0xc),
               (Str_L_char_G_ *)(pBStack_c + 0x7c));
  }
  return in_stack_00000004;
}





//==== 0060a7a0 GetGeneratedName_0060a7a0 ====


/* public: virtual class util__Str_L_char_G_ __thiscall BlackBoxPowerModule__GetGeneratedName(void)const
    */

Str_L_char_G_ * __thiscall
BlackBoxPowerModule__GetGeneratedName(BlackBoxPowerModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,(Str_L_char_G_ *)(this + 0x70));
  return __return_storage_ptr__;
}





//==== 0060a7c0 GetIcon_0060a7c0 ====


/* public: virtual void (__cdecl*__thiscall BlackBoxPowerModule__GetIcon(void)const )(void) */

_func_void * __thiscall BlackBoxPowerModule__GetIcon(BlackBoxPowerModule *this)

{
  return Icons__OutOfPower;
}





//==== 0060a8d0 GetComposition_0060a8d0 ====


/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   BlackBoxPowerModule__GetComposition(void)const  */

Darray_L_struct_MaterialConstituent_G_ * __thiscall
BlackBoxPowerModule__GetComposition(BlackBoxPowerModule *this,Darray_L_struct_MaterialConstituent_G_ * __return_storage_ptr__)

{
  undefined8 stack0x00000004;
  undefined4 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  Darray_L_struct_MaterialConstituent_G_ *this_00;
  bool bVar10;

  int iStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  this_00 = __return_storage_ptr__;
  *(undefined4 *)__return_storage_ptr__ = 0;
  *(undefined4 *)(__return_storage_ptr__ + 4) = 0;
  *(undefined4 *)(__return_storage_ptr__ + 8) = 0;
  *(undefined4 *)(__return_storage_ptr__ + 0xc) = 0;
  Module__GetComposition((Module *)this,(Darray_L_MaterialComposition_G_ *)__return_storage_ptr__);
  iVar7 = *(int *)(__return_storage_ptr__ + 8);
  uVar8 = *(undefined4 *)(this + 0xa0);
  uVar3 = *(undefined8 *)(this + 0x98);
  __return_storage_ptr__ = (Darray_L_struct_MaterialConstituent_G_ *)(iVar7 + 1);
  util__Darray_struct_MaterialConstituent___SetSize(this_00,(int *)&stack0x00000004);
  bVar10 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                     ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar7);
  if (bVar10) {
    uStack_c = (undefined4)uVar3;
    uStack_8 = (undefined4)((ulonglong)uVar3 >> 0x20);
    puVar1 = (undefined4 *)(*(int *)(this_00 + 4) + -0x10 + *(int *)(this_00 + 8) * 0x10);
    *puVar1 = uVar8;
    puVar1[1] = iStack_10;
    puVar1[2] = uStack_c;
    puVar1[3] = uStack_8;
  }
  dVar4 = *(double *)(this + 0x88);
  iVar7 = *(int *)(this + 0xb8);
  iVar9 = *(int *)(this_00 + 8);
  dVar5 = *(double *)(this + 0x90);
  dVar6 = *(double *)(iVar7 + 0x30);
  __return_storage_ptr__ = (Darray_L_struct_MaterialConstituent_G_ *)(iVar9 + 1);
  util__Darray_struct_MaterialConstituent___SetSize(this_00,(int *)&stack0x00000004);
  bVar10 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                     ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar9);
  if (bVar10) {
    piVar2 = (int *)(*(int *)(this_00 + 4) + -0x10 + *(int *)(this_00 + 8) * 0x10);
    *piVar2 = iVar7;
    piVar2[1] = iStack_10;
    *(double *)(piVar2 + 2) = dVar4 * dVar4 * 3.141592653589793 * dVar5 * 0.01 * dVar6;
  }
  return this_00;
}





//==== 0060a9b0 GetStructuralMaterial_0060a9b0 ====


/* public: virtual class Material const * __thiscall
   BlackBoxPowerModule__GetStructuralMaterial(void)const  */

Material * __thiscall BlackBoxPowerModule__GetStructuralMaterial(BlackBoxPowerModule *this)

{
  return *(Material **)(this + 0xa0);
}





//==== 0060a9c0 GetHullRadius_m_0060a9c0 ====


/* public: virtual double __thiscall BlackBoxPowerModule__GetHullRadius_m(void)const  */

double __thiscall BlackBoxPowerModule__GetHullRadius_m(BlackBoxPowerModule *this)

{
  return *(double *)(this + 0x88);
}





//==== 0060a9d0 GetThermalConductivity_W__m_K ====


/* public: double __thiscall Material__GetThermalConductivity_W__m_K(void)const  */

double __thiscall Material__GetThermalConductivity_W__m_K(Material *this)

{
  return this->Resistivity_Ohm_m;
}





//==== 0060a9e0 GetHeatGenerated_W_0060a9e0 ====


/* public: virtual double __thiscall BlackBoxPowerModule__GetHeatGenerated_W(void)const  */

double __thiscall BlackBoxPowerModule__GetHeatGenerated_W(BlackBoxPowerModule *this)

{
  return (*(double *)(this + 0xa8) / *(double *)(this + 0xb0)) * (1.0 - *(double *)(this + 0xb0));
}





//==== 0060aa20 GetTotalEnergy_J_0060aa20 ====


/* public: virtual double __thiscall BlackBoxPowerModule__GetTotalEnergy_J(void)const  */

double __thiscall BlackBoxPowerModule__GetTotalEnergy_J(BlackBoxPowerModule *this)

{
  return *(double *)(this + 0xa8) * Physics__DefaultShipOperationalTime_s;
}





//==== 0060aa30 GetThermalExpansion__K ====


/* public: double __thiscall Material__GetThermalExpansion__K(void)const  */

double __thiscall Material__GetThermalExpansion__K(Material *this)

{
  return this->DielectricStrength_MV__m;
}





//==== 0060aa40 GetCoolantProperties_0060aa40 ====


/* public: virtual class util__Maybe_L_structModuleCoolantProperties_G_ __thiscall
   BlackBoxPowerModule__GetCoolantProperties(void)const  */

void __thiscall BlackBoxPowerModule__GetCoolantProperties(BlackBoxPowerModule *this)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  float10 fVar6;
  undefined4 *in_stack_00000004;
  
  dVar1 = *(double *)(this + 0x88);
  uVar5 = *(undefined4 *)(this + 0xb8);
  dVar2 = *(double *)(this + 0x90);
  uVar3 = *(undefined8 *)(this + 0xc0);
  uVar4 = *(undefined8 *)(this + 200);
  fVar6 = (float10)(**(code **)(*(int *)this + 0x158))();
  *(double *)(in_stack_00000004 + 2) = dVar1 * dVar1 * 3.141592653589793 * dVar2 * 0.01;
  *(undefined8 *)(in_stack_00000004 + 4) = uVar3;
  *(undefined8 *)(in_stack_00000004 + 6) = uVar4;
  *in_stack_00000004 = uVar5;
  *(double *)(in_stack_00000004 + 8) = (double)fVar6;
  *(undefined1 *)(in_stack_00000004 + 10) = 1;
  return;
}





//==== 0060aae0 GetEmittedRadiation_0060aae0 ====


/* public: virtual struct Radiation  BlackBoxPowerModule__GetEmittedRadiation(void)const
    */

Radiation * 
BlackBoxPowerModule__GetEmittedRadiation
          (BlackBoxPowerModule *this,Radiation *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(this + 0xec);
  uVar2 = *(undefined4 *)(this + 0xf0);
  uVar3 = *(undefined4 *)(this + 0xf4);
  *(undefined4 *)&__return_storage_ptr__->ThermalNeutrons_W = *(undefined4 *)(this + 0xe8);
  *(undefined4 *)((int)&__return_storage_ptr__->ThermalNeutrons_W + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->FastNeutrons_W = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->FastNeutrons_W + 4) = uVar3;
  __return_storage_ptr__->GammaRays_W = *(double *)(this + 0xe0);
  return __return_storage_ptr__;
}





//==== 0060ad50 GetPointerPropertyChoices_0060ad50 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   BlackBoxPowerModule__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

ClassMember * 
BlackBoxPowerModule__GetPointerPropertyChoices
          (BlackBoxPowerModule *this,ClassMember *param_1,SerializationManagerInterface *param_2)

{
  char *pcVar1;
  SerializationManagerInterface SVar2;
  int in_stack_0000000c;
  undefined1 uVar3;
  
  if (*(int *)&param_2[1] < 1) {
    SVar2 = *(SerializationManagerInterface *)&cde_l2_0b2b1c9f_NullString;
  }
  else {
    SVar2 = *param_2;
  }
  for (pcVar1 = "Coolant"; (pcVar1[(int)(*(int *)&SVar2 + -0x925310)] != '\0' || (*pcVar1 != '\0'));
      pcVar1 = pcVar1 + 1) {
    if (pcVar1[(int)(*(int *)&SVar2 + -0x925310)] != *pcVar1) {
      if (*(int *)&param_2[1] < 1) {
        SVar2 = *(SerializationManagerInterface *)&cde_l2_0b2b1c9f_NullString;
      }
      else {
        SVar2 = *param_2;
      }
      for (pcVar1 = "PrimaryComposition";
          (pcVar1[(int)(*(int *)&SVar2 + -0x9258bc)] != '\0' || (*pcVar1 != '\0')); pcVar1 = pcVar1 + 1)
      {
        if (pcVar1[(int)(*(int *)&SVar2 + -0x9258bc)] != *pcVar1) {
          (param_1->Name).Data =
               (char *)&vftable_85;
          (param_1->Name).Capacity = 0;
          (param_1->Name).Length = 0;
          *(undefined4 *)&param_1->Type = 0;
          return param_1;
        }
      }
      uVar3 = false;
LAB_0060ad8a:
      GetMaterials((DataParser *)param_1,in_stack_0000000c,(bool)uVar3);
      return param_1;
    }
  }
  uVar3 = 2;
  goto LAB_0060ad8a;
}





//==== 0060ae00 GetReflectionInfo_0060ae00 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   BlackBoxPowerModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall BlackBoxPowerModule__GetReflectionInfo(BlackBoxPowerModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_8a967c12__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_8a967c12__thread_safe_static_guard_0__);
    if ( cde_l2_8a967c12__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_3fe1807c_ReflectionInfo) = &vftable_255;
      _Init_thread_footer(& cde_l2_8a967c12__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_3fe1807c_ReflectionInfo;
}





//==== 0060ae10 scalar_deleting_destructor_0060ae10 ====


/* public: virtual void * __thiscall BlackBoxPowerModule:: 0 scalardeletingdestructor(unsigned int)
    */

void * __thiscall
BlackBoxPowerModule___scalar_deleting_destructor(BlackBoxPowerModule *this,uint param_1)

{
  *(undefined ***)(this + 0xd0) = &vftable_5;
  if (*(void **)(this + 0xd4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 0xd4));
    *(undefined4 *)(this + 0xd4) = 0;
  }
  if (*(void **)(this + 0x7c) != (void *)0x0) {
    port_op_delete(*(void **)(this + 0x7c));
    *(undefined4 *)(this + 0x7c) = 0;
  }
  if (*(void **)(this + 0x70) != (void *)0x0) {
    port_op_delete(*(void **)(this + 0x70));
    *(undefined4 *)(this + 0x70) = 0;
  }
  Module___Module((Module *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0xf8);
  }
  return this;
}





//==== 0060ae90 GetTypeName_0060ae90 ====


/* public: virtual class util__Str_L_char_G_  BlackBoxPowerModule__ReflectionInfoStruct_class_BlackBoxPowerModule___GetTypeName(void)const  */

Str_L_char_G_ * 
BlackBoxPowerModule__ReflectionInfoStruct_class_BlackBoxPowerModule___GetTypeName
          (ReflectionInfoStruct_L_class_BlackBoxPowerModule_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"BlackBoxPowerModule");
  return __return_storage_ptr__;
}





//==== 0060aeb0 GetMembers_0060aeb0 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   BlackBoxPowerModule__ReflectionInfoStruct_class_BlackBoxPowerModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
BlackBoxPowerModule__ReflectionInfoStruct_class_BlackBoxPowerModule___GetMembers__o2
          (ReflectionInfoStruct_L_class_BlackBoxPowerModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_9f808c61__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_9f808c61__thread_safe_static_guard_0__),
      cde_l2_9f808c61__thread_safe_static_guard_0__ == -1)) {
     cde_l2_fad6a93c_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_9f808c61__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_fad6a93c_Count);
  iVar3 = 0;
  if (0 <  cde_l2_fad6a93c_Count) {
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
    } while (iVar3 <  cde_l2_fad6a93c_Count);
  }
  return in_stack_00000004;
}





//==== 0060b000 GetMember_0060b000 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   BlackBoxPowerModule__ReflectionInfoStruct_class_BlackBoxPowerModule___GetMember(class
   util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
BlackBoxPowerModule__ReflectionInfoStruct_class_BlackBoxPowerModule___GetMember__o2
          (ReflectionInfoStruct_L_class_BlackBoxPowerModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_9393deec__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_9393deec__thread_safe_static_guard_0__),
      cde_l2_9393deec__thread_safe_static_guard_0__ == -1)) {
     cde_l2_350a45a9_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_9393deec__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_350a45a9_Count) {
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
LAB_0060b08d:
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
          if (cVar3 == '\0') goto LAB_0060b08d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_350a45a9_Count);
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





//==== 0060b1a0 GetFactory_0060b1a0 ====


/* public: virtual class util__Reflectable * (__cdecl*
   BlackBoxPowerModule__ReflectionInfoStruct_class_BlackBoxPowerModule___GetFactory(void)const
   )(void) */

_func_Reflectable_ptr * 
__thiscall BlackBoxPowerModule__ReflectionInfoStruct_class_BlackBoxPowerModule___GetFactory__o2
          (ReflectionInfoStruct_L_class_BlackBoxPowerModule_G_ *this)

{
  return StaticFactory;
}





//==== 0060b210 Disable_0060b210 ====


/* public: virtual void __thiscall PowerCompartment__Disable(void) */

void __thiscall PowerCompartment__Disable(PowerCompartment *this)

{
  this->Disabled = true;
  return;
}





//==== 0060b230 StaticFactory_0060b230 ====

/* public: static class util__Reflectable * __cdecl
   BlackBoxRadiationSubModule__ReflectionInfoStruct_struct_BlackBoxRadiationSubModule___StaticFactory(void) */

Reflectable * __cdecl
BlackBoxRadiationSubModule__ReflectionInfoStruct_struct_BlackBoxRadiationSubModule___StaticFactory__o2(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x28));
  if (pRVar1 != (Reflectable *)0x0) {
    pRVar1->_pad_0x0_0 = 0;
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1[1]._pad_0x0_0 = 0;
    pRVar1[1].Name.Data = (char *)0x0;
    pRVar1[1].Name.Capacity = 0;
    pRVar1[1].Name.Length = 0;
    pRVar1[2]._pad_0x0_0 = 0;
    pRVar1[2].Name.Data = (char *)0x0;
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_253;
  }
  return (Reflectable *)0x0;
}

//==== 0060b270 StaticFactory_0060b270 ====

/* public: static class util__Reflectable * __cdecl BlackBoxPowerModule__ReflectionInfoStruct_L_class_BlackBoxPowerModule_G___StaticFactory(void) */

Reflectable * __cdecl
BlackBoxPowerModule__ReflectionInfoStruct_class_BlackBoxPowerModule___StaticFactory(void)

{
  Module *this;
  
  this = (Module *)(uintptr_t)(port_op_new(0xf8));
  if (this != (Module *)0x0) {
    memset(this,0,0xf8);
    Module__Module(this);
    this->_pad_0x0_0 = (int)&vftable_for_EditorReflectable__20;
    *(undefined4 *)&(this->GetTotalPowerUsage_W_MemoizedValue).field_0xc = (undefined4)(uintptr_t)vftable_for_util__RTTIBaseClass__19;
    this[1].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    *(undefined4 *)&this[1].ModuleMemoizationHandlerInstance = 0;
    *(undefined4 *)&this[1].GetTotalPowerUsage_W_MemoizedValue.Data = 0;
    *(undefined4 *)((int)&this[1].GetTotalPowerUsage_W_MemoizedValue.Data + 4) = 0;
    *(undefined4 *)&this[1].GetTotalPowerUsage_W_MemoizedValue.IsValidData = 0;
  *(undefined4 *)((char *)&this[1].GetTotalPowerUsage_W_MemoizedValue + 0xc) = 0;
    this[1].Models._pad_0x0_0 = 0;
    this[1].Models.Data = (undefined **)((SharedPtr_L_GameModel_G_ *)0x0);
    this[1].Models.Size = 0;
    this[1].Models.Capacity = 0;
  *(undefined4 *)((char *)&this[2].GetTotalPowerUsage_W_MemoizedValue + 0xc) = 0;
    this[2].Models._pad_0x0_0 = 0;
    this[2].Models.Data = (SharedPtr_L_GameModel_G_ *)0x0;
    *(undefined ***)&this[2].GetTotalPowerUsage_W_MemoizedValue.IsValidData =
         &vftable_253;
    return (Reflectable *)this;
  }
  return (Reflectable *)0x0;
}

//==== 0060b320 StaticGetMemberByIndex_0060b320 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   BlackBoxRadiationSubModule__ReflectionInfoStruct_struct_BlackBoxRadiationSubModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
BlackBoxRadiationSubModule__ReflectionInfoStruct_struct_BlackBoxRadiationSubModule___StaticGetMemberByIndex(ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_4a5a8973__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_4a5a8973__thread_safe_static_guard_0__);
    if ( cde_l2_4a5a8973__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_01780279_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00971084 = 0;
      _DAT_00971088 = 0;
      _DAT_0097108c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971090,"Unused");
      _DAT_0097109c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009710a0,"GammaRadiation_W");
      _DAT_009710ac = 4;
      _DAT_009710b0 = 0x10;
      _DAT_009710b4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009710b8,"double");
      _DAT_009710c4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009710c8,"ThermalNeutronRadiation_W");
      _DAT_009710d4 = 4;
      _DAT_009710d8 = 0x18;
      _DAT_009710dc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009710e0,"double");
      _DAT_009710ec = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009710f0,"FastNeutronRadiation_W");
      _DAT_009710fc = 4;
      _DAT_00971100 = 0x20;
      _DAT_00971104 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971108,"double");
      _DAT_00971114 = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_BlackBoxRadiationSubModule__ReflectionInfoStruct_struct_BlackBoxRadiationSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_4a5a8973__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_01780279_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_00971084 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_00971088 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_0097108c + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_00971090 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0097109c)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0097109d)[iVar1];
  return __return_storage_ptr__;
}





//==== 0060b4e0 StaticGetMemberByIndex_0060b4e0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   BlackBoxPowerModule__ReflectionInfoStruct_class_BlackBoxPowerModule___StaticGetMemberByIndex(int)
    */

ClassMember * __cdecl
BlackBoxPowerModule__ReflectionInfoStruct_class_BlackBoxPowerModule___StaticGetMemberByIndex__o2
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_99167b50__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_99167b50__thread_safe_static_guard_0__);
    if ( cde_l2_99167b50__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_cfb88a25_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00970da4 = 0;
      _DAT_00970da8 = 0;
      _DAT_00970dac = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970db0,"Unused");
      _DAT_00970dbc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970dc0,"SteamWorkshopID");
      _DAT_00970dcc = 6;
      _DAT_00970dd0 = 0x10;
      _DAT_00970dd4 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970dd8,"AStr");
      _DAT_00970de4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970de8,"Description");
      _DAT_00970df4 = 6;
      _DAT_00970df8 = 0x20;
      _DAT_00970dfc = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970e00,"AStr");
      _DAT_00970e0c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970e10,"PowerplantName");
      _DAT_00970e1c = 6;
      _DAT_00970e20 = 0x70;
      _DAT_00970e24 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970e28,"AStr");
      _DAT_00970e34 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970e38,"ModelFileName");
      _DAT_00970e44 = 6;
      _DAT_00970e48 = 0x7c;
      _DAT_00970e4c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970e50,"AStr");
      _DAT_00970e5c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970e60,"Dimensions");
      _DAT_00970e6c = 0xb;
      _DAT_00970e70 = 0x88;
      _DAT_00970e74 = 0x10;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970e78,"ModuleCylinder");
      _DAT_00970e84 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970e88,"Mass_kg");
      _DAT_00970e94 = 4;
      _DAT_00970e98 = 0x98;
      _DAT_00970e9c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970ea0,"double");
      _DAT_00970eac = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970eb0,"PrimaryComposition");
      _DAT_00970ebc = 8;
      _DAT_00970ec0 = 0xa0;
      _DAT_00970ec4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970ec8,"Material");
      _DAT_00970ed4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970ed8,"PowerProduction_W");
      _DAT_00970ee4 = 4;
      _DAT_00970ee8 = 0xa8;
      _DAT_00970eec = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970ef0,"double");
      _DAT_00970efc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970f00,"Efficiency_Percent");
      _DAT_00970f0c = 4;
      _DAT_00970f10 = 0xb0;
      _DAT_00970f14 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970f18,"double");
      _DAT_00970f24 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970f28,"Coolant");
      _DAT_00970f34 = 8;
      _DAT_00970f38 = 0xb8;
      _DAT_00970f3c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970f40,"Material");
      _DAT_00970f4c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970f50,"OutletMassFlow_kg__s");
      _DAT_00970f5c = 4;
      _DAT_00970f60 = 0xc0;
      _DAT_00970f64 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970f68,"double");
      _DAT_00970f74 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970f78,"OutletTemperature_K");
      _DAT_00970f84 = 4;
      _DAT_00970f88 = 200;
      _DAT_00970f8c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970f90,"double");
      _DAT_00970f9c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970fa0,"RadiationHazard");
      _DAT_00970fac = 10;
      _DAT_00970fb0 = 0xd0;
      _DAT_00970fb4 = 0x28;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970fb8,"BlackBoxRadiationSubModule");
      _DAT_00970fc4 = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_BlackBoxPowerModule__ReflectionInfoStruct_class_BlackBoxPowerModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_99167b50__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_cfb88a25_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_00970da4 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_00970da8 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_00970dac + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_00970db0 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_00970dbc)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_00970dbd)[iVar1];
  return __return_storage_ptr__;
}





//==== 0060b950 StaticGetMemberCount_0060b950 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl BlackBoxRadiationSubModule__ReflectionInfoStruct_struct_BlackBoxRadiationSubModule___StaticGetMemberCount(void) */

int __cdecl
BlackBoxRadiationSubModule__ReflectionInfoStruct_struct_BlackBoxRadiationSubModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_671a054e__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_671a054e__thread_safe_static_guard_0__);
    if ( cde_l2_671a054e__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_424c9ebc_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00970fdc = 0;
      _DAT_00970fe0 = 0;
      _DAT_00970fe4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970fe8,"Unused");
      _DAT_00970ff4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970ff8,"GammaRadiation_W");
      _DAT_00971004 = 4;
      _DAT_00971008 = 0x10;
      _DAT_0097100c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971010,"double");
      _DAT_0097101c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971020,"ThermalNeutronRadiation_W");
      _DAT_0097102c = 4;
      _DAT_00971030 = 0x18;
      _DAT_00971034 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971038,"double");
      _DAT_00971044 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971048,"FastNeutronRadiation_W");
      _DAT_00971054 = 4;
      _DAT_00971058 = 0x20;
      _DAT_0097105c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971060,"double");
      _DAT_0097106c = 0;
      atexit( private__static_int_const___cdecl_BlackBoxRadiationSubModule__ReflectionInfoStruct_struct_BlackBoxRadiationSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_671a054e__thread_safe_static_guard_0__);
    }
  }
  return 4;
}





//==== 0060bac0 StaticGetMemberCount_0060bac0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl BlackBoxPowerModule__ReflectionInfoStruct_class_BlackBoxPowerModule___StaticGetMemberCount(void) */

int __cdecl
BlackBoxPowerModule__ReflectionInfoStruct_class_BlackBoxPowerModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_eb8bb5a3__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_eb8bb5a3__thread_safe_static_guard_0__);
    if ( cde_l2_eb8bb5a3__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_e813ef67_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00970b6c = 0;
      _DAT_00970b70 = 0;
      _DAT_00970b74 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970b78,"Unused");
      _DAT_00970b84 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970b88,"SteamWorkshopID");
      _DAT_00970b94 = 6;
      _DAT_00970b98 = 0x10;
      _DAT_00970b9c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970ba0,"AStr");
      _DAT_00970bac = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970bb0,"Description");
      _DAT_00970bbc = 6;
      _DAT_00970bc0 = 0x20;
      _DAT_00970bc4 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970bc8,"AStr");
      _DAT_00970bd4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970bd8,"PowerplantName");
      _DAT_00970be4 = 6;
      _DAT_00970be8 = 0x70;
      _DAT_00970bec = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970bf0,"AStr");
      _DAT_00970bfc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970c00,"ModelFileName");
      _DAT_00970c0c = 6;
      _DAT_00970c10 = 0x7c;
      _DAT_00970c14 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970c18,"AStr");
      _DAT_00970c24 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970c28,"Dimensions");
      _DAT_00970c34 = 0xb;
      _DAT_00970c38 = 0x88;
      _DAT_00970c3c = 0x10;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970c40,"ModuleCylinder");
      _DAT_00970c4c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970c50,"Mass_kg");
      _DAT_00970c5c = 4;
      _DAT_00970c60 = 0x98;
      _DAT_00970c64 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970c68,"double");
      _DAT_00970c74 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970c78,"PrimaryComposition");
      _DAT_00970c84 = 8;
      _DAT_00970c88 = 0xa0;
      _DAT_00970c8c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970c90,"Material");
      _DAT_00970c9c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970ca0,"PowerProduction_W");
      _DAT_00970cac = 4;
      _DAT_00970cb0 = 0xa8;
      _DAT_00970cb4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970cb8,"double");
      _DAT_00970cc4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970cc8,"Efficiency_Percent");
      _DAT_00970cd4 = 4;
      _DAT_00970cd8 = 0xb0;
      _DAT_00970cdc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970ce0,"double");
      _DAT_00970cec = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970cf0,"Coolant");
      _DAT_00970cfc = 8;
      _DAT_00970d00 = 0xb8;
      _DAT_00970d04 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970d08,"Material");
      _DAT_00970d14 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970d18,"OutletMassFlow_kg__s");
      _DAT_00970d24 = 4;
      _DAT_00970d28 = 0xc0;
      _DAT_00970d2c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970d30,"double");
      _DAT_00970d3c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970d40,"OutletTemperature_K");
      _DAT_00970d4c = 4;
      _DAT_00970d50 = 200;
      _DAT_00970d54 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970d58,"double");
      _DAT_00970d64 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970d68,"RadiationHazard");
      _DAT_00970d74 = 10;
      _DAT_00970d78 = 0xd0;
      _DAT_00970d7c = 0x28;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00970d80,"BlackBoxRadiationSubModule");
      _DAT_00970d8c = 0;
      atexit( private__static_int_const___cdecl_BlackBoxPowerModule__ReflectionInfoStruct_class_BlackBoxPowerModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_eb8bb5a3__thread_safe_static_guard_0__);
    }
  }
  return 0xe;
}





//==== 0060bee0 StaticGetReflectionInfo_0060bee0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct BlackBoxPowerModule__ReflectionInfoStruct_L_classBlackBoxPowerModule_G_ *
   __cdecl BlackBoxPowerModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_BlackBoxPowerModule_G_ * __cdecl
BlackBoxPowerModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_8a967c12__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_8a967c12__thread_safe_static_guard_0__);
    if ( cde_l2_8a967c12__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_3fe1807c_ReflectionInfo) = &vftable_255;
      _Init_thread_footer(& cde_l2_8a967c12__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_3fe1807c_ReflectionInfo;
}





//==== 0060bf40 StaticGetReflectionInfo_0060bf40 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct BlackBoxRadiationSubModule__ReflectionInfoStruct_L_struct_BlackBoxRadiationSubModule_G_ * __cdecl BlackBoxRadiationSubModule__StaticGetReflectionInfo(void)
    */

ReflectionInfoStruct_L_struct_BlackBoxRadiationSubModule_G_ * __cdecl
BlackBoxRadiationSubModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_31902500__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_31902500__thread_safe_static_guard_0__);
    if ( cde_l2_31902500__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_a1e3ba94_ReflectionInfo) = &vftable_254;
      _Init_thread_footer(& cde_l2_31902500__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_a1e3ba94_ReflectionInfo;
}





//==== 0060bfa0 ToggleEnabled_0060bfa0 ====


/* public: virtual void __thiscall PowerCompartment__ToggleEnabled(void) */

void __thiscall PowerCompartment__ToggleEnabled(PowerCompartment *this)

{
  this->Disabled = this->Disabled == false;
  return;
}





//==== 0060bfc0 GetComposition_0060bfc0 ====


/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   ThermocoupleSubModule__GetComposition(void)const  */

Darray_L_struct_MaterialConstituent_G_ * __thiscall
ThermocoupleSubModule__GetComposition(ThermocoupleSubModule *this)

{
  undefined8 stack0x00000004;
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  Material *pMVar5;
  int iVar6;
  Darray_L_struct_MaterialConstituent_G_ *this_00;
  bool bVar7;
  Darray_L_struct_MaterialConstituent_G_ *in_stack_00000004;
  int iStack_10;
  
  this_00 = in_stack_00000004;
  in_stack_00000004 = (Darray_L_struct_MaterialConstituent_G_ *)0x1;
  *(undefined4 *)this_00 = 0;
  *(undefined4 *)(this_00 + 4) = 0;
  *(undefined4 *)(this_00 + 8) = 0;
  *(undefined4 *)(this_00 + 0xc) = 0;
  *(undefined ***)this_00 = (undefined **)(&vftable_75);
  *(undefined4 *)(this_00 + 4) = 0;
  *(undefined4 *)(this_00 + 8) = 0;
  *(undefined4 *)(this_00 + 0xc) = 0;
  dVar2 = this->CachedArea_m2;
  pMVar5 = this->PTypeComposition;
  dVar3 = pMVar5->Density_kg__m3;
  dVar4 = this->Length_m;
  util__Darray_struct_MaterialConstituent___SetSize(this_00,(int *)&stack0x00000004);
  bVar7 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                    ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)this_00,0);
  if (bVar7) {
    piVar1 = (int *)(*(int *)(this_00 + 4) + -0x10 + *(int *)(this_00 + 8) * 0x10);
    *piVar1 = (int)pMVar5;
    piVar1[1] = iStack_10;
    *(double *)(piVar1 + 2) = (dVar2 / 1000.0) * 0.5 * dVar3 * dVar4 * 1000.0;
  }
  dVar2 = this->CachedArea_m2;
  pMVar5 = this->NTypeComposition;
  dVar3 = pMVar5->Density_kg__m3;
  dVar4 = this->Length_m;
  iVar6 = *(int *)(this_00 + 8);
  in_stack_00000004 = (Darray_L_struct_MaterialConstituent_G_ *)(iVar6 + 1);
  util__Darray_struct_MaterialConstituent___SetSize(this_00,(int *)&stack0x00000004);
  bVar7 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                    ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar6);
  if (bVar7) {
    piVar1 = (int *)(*(int *)(this_00 + 4) + -0x10 + *(int *)(this_00 + 8) * 0x10);
    *piVar1 = (int)pMVar5;
    piVar1[1] = iStack_10;
    *(double *)(piVar1 + 2) = (dVar2 / 1000.0) * 0.5 * dVar3 * dVar4 * 1000.0;
  }
  return this_00;
}





//==== 0060c0c0 GetStatuses_0060c0c0 ====

/* public: virtual class DesignStatusBuffer  ThermocoupleSubModule__GetStatuses(class
   DataParser *)const  */

DesignStatusBuffer * 
ThermocoupleSubModule__GetStatuses
          (ThermocoupleSubModule *this,DesignStatusBuffer *__return_storage_ptr__,
          DataParser *param_1)

{
  undefined8 stack0xffffff80;
  undefined8 stack0xffffff84;
  Str_L_char_G_ SVar1;
  Str_L_char_G_ SVar2;
  Str_L_char_G_ SVar3;
  Str_L_char_G_ SVar4;
  Str_L_char_G_ *pSVar5;
  Str_L_char_G_ *pSVar6;
  double dVar7;
  char *pcVar8;
  Str_L_char_G_ *pSVar9;
  Str_L_char_G_ *pSVar10;
  int iVar11;
  ModulePlacer *pMVar12;
  Str_L_char_G_ local_60;
  Str_L_char_G_ local_54;
  Str_L_char_G_ local_48;
  Str_L_char_G_ local_3c;
  Str_L_char_G_ local_30;
  Str_L_char_G_ local_24;
  undefined1 local_18 [4];
  undefined8 local_14;
  double local_c;
  
  __return_storage_ptr__->DataManager = (DataParser *)0x0;
  (__return_storage_ptr__->Messages)._pad_0x0_0 = 0;
  (__return_storage_ptr__->Messages).Data = (DesignStatusMessage *)0x0;
  (__return_storage_ptr__->Messages).Size = 0;
  *(undefined8 *)&(__return_storage_ptr__->Messages).Capacity = 0;
  DesignStatusBuffer__DesignStatusBuffer(__return_storage_ptr__,param_1);
  util__Str_char___Str_char(&local_3c,"ThermocouplePTypeMelt");
  pSVar9 = &local_30;
  pMVar12 = (ModulePlacer *)0x0;
  pSVar6 = &local_24;
  local_30.Data = (char *)0x0;
  pSVar10 = (Str_L_char_G_ *)local_18;
  local_30.Capacity = 0;
  pSVar5 = &local_3c;
  local_30.Length = 0;
  local_24.Data = (char *)0x0;
  local_24.Capacity = 0;
  local_24.Length = 0;
  *(uint32_t *)&local_18 = (uint32_t)0x0;
  (*(uint32_t*)&(local_14)) = 0;
  (*(uint32_t*)((char*)&(local_14)+4)) = 0;
  local_c = Material__GetSafeUseTemperature_K(this->PTypeComposition);
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,local_c < this->CachedHotTemperature_K,pSVar5,pSVar10,pSVar6,
             pSVar9,pMVar12);
  if (local_18 != (uint32_t)0x0) {
    port_op_delete((void *)local_18);
    *(uint32_t *)&local_18 = (uint32_t)0x0;
  }
  if (local_24.Data != (char *)0x0) {
    port_op_delete(local_24.Data);
    local_24.Data = (char *)0x0;
  }
  if (local_30.Data != (char *)0x0) {
    port_op_delete(local_30.Data);
    local_30.Data = (char *)0x0;
  }
  if (local_3c.Data != (char *)0x0) {
    port_op_delete(local_3c.Data);
  }
  util__Str_char___Str_char(&local_3c,"ThermocoupleNTypeMelt");
  pSVar9 = (Str_L_char_G_ *)local_18;
  pMVar12 = (ModulePlacer *)0x0;
  pSVar6 = &local_24;
  *(uint32_t *)&local_18 = (uint32_t)0x0;
  pSVar10 = &local_30;
  pSVar5 = &local_3c;
  (*(uint32_t*)&(local_14)) = 0;
  (*(uint32_t*)((char*)&(local_14)+4)) = 0;
  local_24.Data = (char *)0x0;
  local_24.Capacity = 0;
  local_24.Length = 0;
  local_30.Data = (char *)0x0;
  local_30.Capacity = 0;
  local_30.Length = 0;
  local_c = Material__GetSafeUseTemperature_K(this->NTypeComposition);
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,local_c < this->CachedHotTemperature_K,pSVar5,pSVar10,pSVar6,
             pSVar9,pMVar12);
  if (local_30.Data != (char *)0x0) {
    port_op_delete(local_30.Data);
    local_30.Data = (char *)0x0;
  }
  if (local_24.Data != (char *)0x0) {
    port_op_delete(local_24.Data);
    local_24.Data = (char *)0x0;
  }
  if (local_18 != (uint32_t)0x0) {
    port_op_delete((void *)local_18);
    *(uint32_t *)&local_18 = (uint32_t)0x0;
  }
  if (local_3c.Data != (char *)0x0) {
    port_op_delete(local_3c.Data);
  }
  util__Str_char___Str_char(&local_3c,"ThermocoupleNegativeTemperatureDelta");
  *(uint32_t *)&local_18 = (uint32_t)0x0;
  pSVar9 = &local_30;
  pSVar6 = &local_3c;
  (*(uint32_t*)&(local_14)) = 0;
  (*(uint32_t*)((char*)&(local_14)+4)) = 0;
  local_24.Data = (char *)0x0;
  local_24.Capacity = 0;
  local_24.Length = 0;
  local_30.Data = (char *)0x0;
  local_30.Capacity = 0;
  local_30.Length = 0;
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,this->CachedHotTemperature_K <= this->CachedColdTemperature_K,
             pSVar6,pSVar9,&local_24,(Str_L_char_G_ *)local_18,(ModulePlacer *)0x0);
  if (local_30.Data != (char *)0x0) {
    port_op_delete(local_30.Data);
    local_30.Data = (char *)0x0;
  }
  if (local_24.Data != (char *)0x0) {
    port_op_delete(local_24.Data);
    local_24.Data = (char *)0x0;
  }
  if (local_18 != (uint32_t)0x0) {
    port_op_delete((void *)local_18);
    *(uint32_t *)&local_18 = (uint32_t)0x0;
  }
  if (local_3c.Data != (char *)0x0) {
    port_op_delete(local_3c.Data);
  }
  util__Str_char___Str_char(&local_60,"PTypeComposition->GetYieldStrength_Pa()");
  util__Str_char___Str_char(&local_3c,"GetPTypeThermalStress_Pa()");
  util__Str_char___Str_char(&local_24,"ThermocouplePTypeThermalExpansionStress");
  local_30.Data = (char *)0x0;
  local_30.Capacity = 0;
  local_30.Length = 0;
  local_c = Material__GetThermalExpansionStress_Pa
                      (this->PTypeComposition,
                       this->CachedHotTemperature_K - this->CachedColdTemperature_K);
  iVar11 = 0x60c3cc;
  local_14 = Material__GetThermalExpansionStress_Pa
                       (this->PTypeComposition,
                        this->CachedHotTemperature_K - this->CachedColdTemperature_K);
  pMVar12 = (ModulePlacer *)0x0;
  pSVar10 = &local_30;
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff84,&local_60);
  dVar7 = Material__GetYieldStrength_Pa(this->PTypeComposition);
  pcVar8 = (char *)((ulonglong)dVar7 >> 0x20);
  SVar3.Capacity = iVar11;
  SVar3.Data = (char *)pSVar9;
  SVar3.Length = (int)pSVar10;
  pSVar5 = Print(&local_54,(double)CONCAT44(pSVar6,pcVar8),SVar3);
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff80,&local_3c);
  SVar1.Capacity = (int)pSVar9;
  SVar1.Data = (char *)pSVar6;
  SVar1.Length = (int)pSVar5;
  pSVar6 = Print(&local_48,(double)CONCAT44(pcVar8,(int)((ulonglong)local_c >> 0x20)),SVar1);
  pSVar9 = &local_24;
  local_c = Material__GetYieldStrength_Pa(this->PTypeComposition);
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,local_c < local_14,pSVar9,pSVar6,pSVar5,pSVar10,pMVar12);
  if (local_48.Data != (char *)0x0) {
    port_op_delete(local_48.Data);
    local_48.Data = (char *)0x0;
  }
  if (local_54.Data != (char *)0x0) {
    port_op_delete(local_54.Data);
    local_54.Data = (char *)0x0;
  }
  if (local_30.Data != (char *)0x0) {
    port_op_delete(local_30.Data);
    local_30.Data = (char *)0x0;
  }
  if (local_24.Data != (char *)0x0) {
    port_op_delete(local_24.Data);
    local_24.Data = (char *)0x0;
  }
  if (local_3c.Data != (char *)0x0) {
    port_op_delete(local_3c.Data);
    local_3c.Data = (char *)0x0;
  }
  if (local_60.Data != (char *)0x0) {
    port_op_delete(local_60.Data);
  }
  util__Str_char___Str_char(&local_48,"NTypeComposition->GetYieldStrength_Pa()");
  util__Str_char___Str_char(&local_24,"GetNTypeThermalStress_Pa()");
  util__Str_char___Str_char(&local_3c,"ThermocoupleNTypeThermalExpansionStress");
  local_30.Data = (char *)0x0;
  local_30.Capacity = 0;
  local_30.Length = 0;
  local_14 = Material__GetThermalExpansionStress_Pa
                       (this->NTypeComposition,
                        this->CachedHotTemperature_K - this->CachedColdTemperature_K);
  iVar11 = 0x60c545;
  local_c = Material__GetThermalExpansionStress_Pa
                      (this->NTypeComposition,
                       this->CachedHotTemperature_K - this->CachedColdTemperature_K);
  pMVar12 = (ModulePlacer *)0x0;
  pSVar10 = &local_30;
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff84,&local_48);
  dVar7 = Material__GetYieldStrength_Pa(this->NTypeComposition);
  pcVar8 = (char *)((ulonglong)dVar7 >> 0x20);
  SVar4.Capacity = iVar11;
  SVar4.Data = (char *)pSVar6;
  SVar4.Length = (int)pSVar10;
  pSVar5 = Print(&local_54,(double)CONCAT44(pSVar9,pcVar8),SVar4);
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff80,&local_24);
  SVar2.Capacity = (int)pSVar6;
  SVar2.Data = (char *)pSVar9;
  SVar2.Length = (int)pSVar5;
  pSVar6 = Print(&local_60,(double)CONCAT44(pcVar8,(int)((ulonglong)local_14 >> 0x20)),SVar2);
  pSVar9 = &local_3c;
  local_14 = Material__GetYieldStrength_Pa(this->NTypeComposition);
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,local_14 < local_c,pSVar9,pSVar6,pSVar5,pSVar10,pMVar12);
  if (local_60.Data != (char *)0x0) {
    port_op_delete(local_60.Data);
    local_60.Data = (char *)0x0;
  }
  if (local_54.Data != (char *)0x0) {
    port_op_delete(local_54.Data);
    local_54.Data = (char *)0x0;
  }
  if (local_30.Data != (char *)0x0) {
    port_op_delete(local_30.Data);
    local_30.Data = (char *)0x0;
  }
  if (local_3c.Data != (char *)0x0) {
    port_op_delete(local_3c.Data);
    local_3c.Data = (char *)0x0;
  }
  if (local_24.Data != (char *)0x0) {
    port_op_delete(local_24.Data);
    local_24.Data = (char *)0x0;
  }
  if (local_48.Data != (char *)0x0) {
    port_op_delete(local_48.Data);
  }
  return __return_storage_ptr__;
}

//==== 0060c660 GetPointerPropertyChoices_0060c660 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   ThermocoupleSubModule__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

ClassMember * 
ThermocoupleSubModule__GetPointerPropertyChoices
          (ThermocoupleSubModule *this,ClassMember *param_1,SerializationManagerInterface *param_2)

{
  char *pcVar1;
  SerializationManagerInterface SVar2;
  int in_stack_0000000c;
  
  if (*(int *)&param_2[1] < 1) {
    SVar2 = *(SerializationManagerInterface *)&cde_l2_0b2b1c9f_NullString;
  }
  else {
    SVar2 = *param_2;
  }
  pcVar1 = "PTypeComposition";
  while( true ) {
    if ((pcVar1[(int)(*(int *)&SVar2 + -0x92ba64)] == '\0') && (*pcVar1 == '\0')) goto LAB_0060c6c6;
    if (pcVar1[(int)(*(int *)&SVar2 + -0x92ba64)] != *pcVar1) break;
    pcVar1 = pcVar1 + 1;
  }
  if (*(int *)&param_2[1] < 1) {
    SVar2 = *(SerializationManagerInterface *)&cde_l2_0b2b1c9f_NullString;
  }
  else {
    SVar2 = *param_2;
  }
  for (pcVar1 = "NTypeComposition";
      (pcVar1[(int)(*(int *)&SVar2 + -0x92ba78)] != '\0' || (*pcVar1 != '\0')); pcVar1 = pcVar1 + 1) {
    if (pcVar1[(int)(*(int *)&SVar2 + -0x92ba78)] != *pcVar1) {
      (param_1->Name).Data =
           (char *)&vftable_85;
      (param_1->Name).Capacity = 0;
      (param_1->Name).Length = 0;
      *(undefined4 *)&param_1->Type = 0;
      return param_1;
    }
  }
LAB_0060c6c6:
  GetMaterials((DataParser *)param_1,in_stack_0000000c,true);
  return param_1;
}





//==== 0060c710 GetReflectionInfo_0060c710 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   ThermocoupleSubModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall
ThermocoupleSubModule__GetReflectionInfo(ThermocoupleSubModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_ce7b8447__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_ce7b8447__thread_safe_static_guard_0__);
    if ( cde_l2_ce7b8447__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_57065977_ReflectionInfo) = &vftable_258;
      _Init_thread_footer(& cde_l2_ce7b8447__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_57065977_ReflectionInfo;
}





//==== 0060c720 scalar_deleting_destructor_0060c720 ====

/* public: virtual void * __thiscall DroneProtocol:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall DroneProtocol___scalar_deleting_destructor(DroneProtocol *this,uint param_1)

{
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x38);
  }
  return this;
}

//==== 0060c760 GetTypeName_0060c760 ====


/* public: virtual class util__Str_L_char_G_ 
   ThermocoupleSubModule__ReflectionInfoStruct_class_ThermocoupleSubModule___GetTypeName(void)const
    */

Str_L_char_G_ * 
ThermocoupleSubModule__ReflectionInfoStruct_class_ThermocoupleSubModule___GetTypeName__o2
          (ReflectionInfoStruct_L_class_ThermocoupleSubModule_G_ *this,Str_L_char_G_ *__return_storage_ptr__
          )

{
  util__Str_char___Str_char(__return_storage_ptr__,"ThermocoupleSubModule");
  return __return_storage_ptr__;
}





//==== 0060c780 GetMembers_0060c780 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   ThermocoupleSubModule__ReflectionInfoStruct_class_ThermocoupleSubModule___GetMembers(void)const
    */

Darray_L_struct_util__ClassMember_G_ * 
ThermocoupleSubModule__ReflectionInfoStruct_class_ThermocoupleSubModule___GetMembers__o2
          (ReflectionInfoStruct_L_class_ThermocoupleSubModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_f071d629__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_f071d629__thread_safe_static_guard_0__),
      cde_l2_f071d629__thread_safe_static_guard_0__ == -1)) {
     cde_l2_8a19b9e4_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_f071d629__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_8a19b9e4_Count);
  iVar3 = 0;
  if (0 <  cde_l2_8a19b9e4_Count) {
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
    } while (iVar3 <  cde_l2_8a19b9e4_Count);
  }
  return in_stack_00000004;
}





//==== 0060c8c0 GetMember_0060c8c0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   ThermocoupleSubModule__ReflectionInfoStruct_class_ThermocoupleSubModule___GetMember(class
   util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
ThermocoupleSubModule__ReflectionInfoStruct_class_ThermocoupleSubModule___GetMember__o2
          (ReflectionInfoStruct_L_class_ThermocoupleSubModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_20c69f41__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_20c69f41__thread_safe_static_guard_0__),
      cde_l2_20c69f41__thread_safe_static_guard_0__ == -1)) {
     cde_l2_053e152f_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_20c69f41__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_053e152f_Count) {
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
LAB_0060c94d:
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
          if (cVar3 == '\0') goto LAB_0060c94d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_053e152f_Count);
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





//==== 0060ca60 GetFactory_0060ca60 ====


/* public: virtual class util__Reflectable * (__cdecl*
   ThermocoupleSubModule__ReflectionInfoStruct_class_ThermocoupleSubModule___GetFactory(void)const
   )(void) */

_func_Reflectable_ptr * 
__thiscall ThermocoupleSubModule__ReflectionInfoStruct_class_ThermocoupleSubModule___GetFactory__o2
          (ReflectionInfoStruct_L_class_ThermocoupleSubModule_G_ *this)

{
  return StaticFactory;
}





//==== 0060ca70 MethodCallerConst__public__bool___thiscall_PowerModule__GeneratesPower_void_const__0__ ====


/* public: static bool __cdecl util__DelegateFactory_L_class_PowerModule_Cbool_G___MethodCallerConst_L__public_bool__thiscall_PowerModule__GeneratesPower_void_const_C0__G_(void const * const) */

bool __cdecl
util__DelegateFactory_class_PowerModule_bool___MethodCallerConst__public__bool___thiscall_PowerModule__GeneratesPower_void_const__0
          (void *param_1)

{
  float10 fVar1;
  
                    /* WARNING: Load optimize_e__size is inaccurate */
  fVar1 = (float10)(**(code **)(uintptr_t)(*(int *)param_1 + 0x154))();
  return 0.0 < (double)fVar1;
}





//==== 0060ca80 MethodCallerConst__public__class_util__Str_char____thiscall_PowerModule__GetPowerInfo_void_const__0__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_classPowerModule_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__public_classutil__Str_L_char_G___thiscall_PowerModule__GetPowerInfo_void_const_C0__G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_class_PowerModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_PowerModule__GetPowerInfo_void_const__0
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(PowerModule__GetPowerInfo((PowerModule *)param_1,&SStack_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 0060cbbe vcall_352__flat____ ====

/* [thunk]: __thiscall LaserModule:: 0 vcall{352,{flat}}' }' */

void * __thiscall LaserModule___vcall__352__flat(LaserModule *this)

{
                    /* WARNING: Could not recover jumptable at 0x0060cbc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_pad_0x0_0 + 0x160))();
  return 0;
}

//==== 0060cbd0 EndOfSessionResolution_0060cbd0 ====

/* public: virtual bool __thiscall PowerCompartment__EndOfSessionResolution(void) */

bool __thiscall PowerCompartment__EndOfSessionResolution(PowerCompartment *this)

{
  this->Disabled = false;
  *(undefined1 *)&this->_pad_0x68_26 = 0;
  this->_pad_0x60_24 = 0;
  this->_pad_0x64_25 = 0;
  return true;
}

//==== 0060cbe0 GeneratesPower ====


/* public: bool __thiscall PowerModule__GeneratesPower(void)const  */

bool __thiscall PowerModule__GeneratesPower(PowerModule *this)

{
  float10 fVar1;
  
  fVar1 = (float10)(**(code **)(*(int *)this + 0x154))();
  return 0.0 < (double)fVar1;
}





//==== 0060cc10 GetEfficiency_Percent ====


/* public: double __thiscall ThermocoupleSubModule__GetEfficiency_Percent(void)const  */

double __thiscall ThermocoupleSubModule__GetEfficiency_Percent(ThermocoupleSubModule *this)

{
  double dVar1;
  double dVar2;
  Material *pMVar3;
  Material *pMVar4;
  Maybe_L_double_G_ *pMVar5;
  double dVar6;
  double dVar7;
  Maybe_L_double_G_ MStack_24;
  double dStack_14;
  double dStack_c;
  
  dStack_c = 0.0;
  dVar1 = this->CachedHotTemperature_K;
  if ((0.0 < dVar1) && (dVar2 = this->CachedColdTemperature_K, dVar2 <= dVar1)) {
    pMVar3 = this->PTypeComposition;
    pMVar4 = this->NTypeComposition;
    dStack_14 = dVar1 - dVar2;
    dVar6 = (pMVar3->Viscosity_Pa_s - pMVar4->Viscosity_Pa_s) * 1000.0 * dStack_14;
    if (NAN(dVar6) == (dVar6 == 0.0)) {
      dVar7 = (this->CachedArea_m2 / 1000.0) * 0.5;
      dStack_c = ((dVar2 + dVar1) * 0.5 * dVar6 * dVar6) /
                 ((pMVar4->RelativePermittivity / dVar7 + pMVar3->RelativePermittivity / dVar7) *
                  1000.0 * this->Length_m *
                 (((pMVar4->Resistivity_Ohm_m * dVar7 + pMVar3->Resistivity_Ohm_m * dVar7) * 1000.0)
                 / this->Length_m));
    }
    dStack_c = dStack_c + 1.0;
    pMVar5 = util__Sqrt(&MStack_24,&dStack_c);
    if (pMVar5->IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    return ((dStack_14 / this->CachedHotTemperature_K) * (pMVar5->Data - 1.0)) /
           (this->CachedColdTemperature_K / this->CachedHotTemperature_K + pMVar5->Data);
  }
  return 0.0;
}





//==== 0060cd80 GetInfoBoxes_0060cd80 ====


/* public: virtual class util__Darray_L_structInfoBox_G_ __thiscall
   PowerModule__GetInfoBoxes(void)const  */

void __thiscall PowerModule__GetInfoBoxes(PowerModule *this)

{
  undefined8 stack0xfffffffc;
  Delegate_L_bool_G_ DVar1;
  InfoBox *pIVar2;
  int iVar3;
  bool bVar4;
  LocStr *this_00;
  Str_L_char_G_ *pSVar5;
  Darray_L_struct_InfoBox_G_ *pDVar6;
  Darray_L_struct_InfoBox_G_ *in_stack_00000004;
  void *apvStack_bc [3];
  void *pvStack_b0;
  PowerModule *pPStack_a4;
  code *pcStack_a0;
  Str_L_char_G_ SStack_9c;
  _func___cdecl_void *p_Stack_90;
  PowerModule *pPStack_8c;
  _func___cdecl_Str_L_char_G__void_ptr *p_Stack_88;
  Str_L_char_G_ SStack_84;
  void *pvStack_78;
  _func___cdecl_Str_L_char_G__void_ptr *p_Stack_74;
  Str_L_char_G_ SStack_70;
  undefined8 uStack_64;
  uint uStack_5c;
  void *pvStack_58;
  _func___cdecl_Str_L_char_G__void_ptr *p_Stack_54;
  Str_L_char_G_ SStack_50;
  undefined **ppuStack_44;
  Str_L_char_G_ SStack_40;
  Str_L_char_G_ SStack_34;
  int iStack_28;
  PowerModule *pPStack_24;
  _func___cdecl_bool_void_ptr *p_Stack_20;
  uint uStack_1c;
  undefined **ppuStack_18;
  InfoBox *pIStack_14;
  int iStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  ppuStack_18 = (undefined **)0x0;
  pIStack_14 = (InfoBox *)0x0;
  iStack_10 = 0;
  uStack_c = 0;
  util__Darray_struct_InfoBox___Darray_struct_InfoBox((Darray_L_struct_InfoBox_G_ *)&ppuStack_18,3);
  util__Str_char___Str_char(&SStack_40,"InfoBox Powerplant Tooltip");
  p_Stack_20 = util__DelegateFactory_class_PowerModule_bool___MethodCallerConst__public__bool___thiscall_PowerModule__GeneratesPower_void_const__0
  ;
  uStack_1c = uStack_1c & 0xffffff00;
  SStack_34.Data = (char *)0x0;
  SStack_34.Capacity = 0;
  SStack_34.Length = 0;
  pPStack_24 = this;
  this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_bc,&SStack_40,&SStack_34);
  pSVar5 = util__LocStr__operator__o3(this_00);
  pvStack_58 = (void *)0x0;
  p_Stack_54 = (_func___cdecl_Str_L_char_G__void_ptr *)0x0;
  util__Str_char___Str_char(&SStack_50,pSVar5);
  pcStack_a0 = (long long int (*)())(util__DelegateFactory_class_PowerModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_PowerModule__GetPowerInfo_void_const__0);
  SStack_9c.Data = (char *)0x0;
  SStack_9c.Capacity = 0;
  SStack_9c.Length = 0;
  p_Stack_90 = Icons__Power;
  p_Stack_88 = (Str_L_char_G_ (*)(void *))(util__DelegateFactory_class_PowerModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_PowerModule__GetPowerInfo_void_const__0);
  pPStack_a4 = this;
  pPStack_8c = this;
  util__Str_char___Str_char(&SStack_84,&SStack_9c);
  pvStack_78 = pvStack_58;
  p_Stack_74 = p_Stack_54;
  util__Str_char___Str_char(&SStack_70,&SStack_50);
  uStack_64 = CONCAT44(p_Stack_20,pPStack_24);
  uStack_5c = uStack_1c;
  if (SStack_50.Data != (char *)0x0) {
    port_op_delete(SStack_50.Data);
  }
  iVar3 = iStack_10;
  iStack_28 = iStack_10 + 1;
  util__Darray_struct_InfoBox___SetSize((Darray_L_struct_InfoBox_G_ *)&ppuStack_18,&iStack_28);
  bVar4 = util__Darray_struct_InfoBox___CheckSize((Darray_L_struct_InfoBox_G_ *)&ppuStack_18,iVar3);
  iVar3 = iStack_10;
  pIVar2 = pIStack_14;
  if (bVar4) {
    pIStack_14[iStack_10 + -1].Icon = p_Stack_90;
    pIStack_14[iStack_10 + -1].Info.Getter.Callee = pPStack_8c;
    pIStack_14[iStack_10 + -1].Info.Getter.CallbackFunction = p_Stack_88;
    util__Str_char___operator__o8(&pIStack_14[iStack_10 + -1].Info.Value,&SStack_84);
    pIVar2[iVar3 + -1].Tooltip.Getter.Callee = pvStack_78;
    pIVar2[iVar3 + -1].Tooltip.Getter.CallbackFunction = p_Stack_74;
    util__Str_char___operator__o8(&pIVar2[iVar3 + -1].Tooltip.Value,&SStack_70);
    DVar1.CallbackFunction = p_Stack_20;
    DVar1.Callee = pPStack_24;
    pIVar2[iVar3 + -1].IsVisible.Getter = DVar1;
    *(uint *)&pIVar2[iVar3 + -1].IsVisible.Value = uStack_1c;
  }
  if (SStack_70.Data != (char *)0x0) {
    port_op_delete(SStack_70.Data);
  }
  if (SStack_84.Data != (char *)0x0) {
    port_op_delete(SStack_84.Data);
  }
  if (pvStack_b0 != (void *)0x0) {
    port_op_delete(pvStack_b0);
    pvStack_b0 = (void *)0x0;
  }
  if (apvStack_bc[0] != (void *)0x0) {
    port_op_delete(apvStack_bc[0]);
    apvStack_bc[0] = (void *)0x0;
  }
  if (SStack_34.Data != (char *)0x0) {
    port_op_delete(SStack_34.Data);
    SStack_34.Data = (char *)0x0;
  }
  if ((InfoBox *)SStack_40.Data != (InfoBox *)0x0) {
    port_op_delete(SStack_40.Data);
  }
  pDVar6 = (Darray_L_struct_InfoBox_G_ *)Module__GetInfoBoxes((Module *)this);
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_InfoBox___Darray_struct_InfoBox
            (in_stack_00000004,(Darray_L_struct_InfoBox_G_ *)&ppuStack_18);
  util__Darray_struct_InfoBox___operator(in_stack_00000004,pDVar6);
  ppuStack_44 = &vftable_127;
  if ((InfoBox *)SStack_40.Data != (InfoBox *)0x0) {
    InfoBox___vector_deleting_destructor((InfoBox *)SStack_40.Data,3);
  }
  SStack_40.Data = (char *)0x0;
  ppuStack_44 = (undefined **)(&vftable);
  ppuStack_18 = &vftable_127;
  if (pIStack_14 != (InfoBox *)0x0) {
    InfoBox___vector_deleting_destructor(pIStack_14,3);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0060d1e0 GetPower_W_Memoize ====

/* public: void __thiscall PowerCompartment__GetPower_W_Memoize(void)const  */

void __thiscall PowerCompartment__GetPower_W_Memoize(PowerCompartment *this)

{
  int iVar1;
  bool bVar2;
  float10 fVar3;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int local_8;
  
  if ((this->GetPower_W_MemoizedValue).IsValidData == false) {
    iVar1 = (this->PowerCompartmentMemoizationHandlerInstance).ResetFunctions.Size;
    local_8 = iVar1 + 1;
    util__Darray_L_util__Reflectable_P_G___SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&this->PowerCompartmentMemoizationHandlerInstance,
               &local_8);
    bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &this->PowerCompartmentMemoizationHandlerInstance,iVar1);
    if (bVar2) {
      (this->PowerCompartmentMemoizationHandlerInstance).ResetFunctions.Data
      [(this->PowerCompartmentMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_4f4b95a1, LaserModule__GetMirrorFocalLengthLimit_m_Clear);
    }
    fVar3 = (float10)(**(code **)(*(int *)this->_pad_0x38_14 + 0x154))();
    uStack_10 = CONCAT31((*(uint24_t*)((char*)&(uStack_10)+1)),1);
    (this->GetPower_W_MemoizedValue).Data = (double)fVar3;
    *(undefined4 *)&(this->GetPower_W_MemoizedValue).IsValidData = uStack_10;
    *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetPower_W_MemoizedValue)) + 0xc)) = uStack_c;
  }
  return;
}

//==== 0060d260 GetStatuses_0060d260 ====

/* public: virtual class DesignStatusBuffer  PowerModule__GetStatuses(class DataParser
   *)const  */

DesignStatusBuffer * 
PowerModule__GetStatuses
          (PowerModule *this,DesignStatusBuffer *__return_storage_ptr__,DataParser *param_1)

{
  int iVar1;
  float10 fVar2;
  Str_L_char_G_ *pSVar3;
  Str_L_char_G_ *pSVar4;
  Str_L_char_G_ *pSVar5;
  Str_L_char_G_ *pSVar6;
  ModulePlacer *pMVar7;
  undefined1 local_6c [48];
  Str_L_char_G_ local_3c;
  Str_L_char_G_ local_30;
  Str_L_char_G_ local_24;
  Str_L_char_G_ local_18;
  double local_c;
  
  __return_storage_ptr__->DataManager = (DataParser *)0x0;
  (__return_storage_ptr__->Messages)._pad_0x0_0 = 0;
  (__return_storage_ptr__->Messages).Data = (DesignStatusMessage *)0x0;
  (__return_storage_ptr__->Messages).Size = 0;
  *(undefined8 *)&(__return_storage_ptr__->Messages).Capacity = 0;
  Module__GetStatuses((Module *)this,__return_storage_ptr__,param_1);
  util__Str_char___Str_char(&local_3c,"PowerModuleTooMuchHeat");
  local_30.Data = (char *)0x0;
  local_30.Capacity = 0;
  local_30.Length = 0;
  local_24.Data = (char *)0x0;
  local_24.Capacity = 0;
  local_24.Length = 0;
  local_18.Data = (char *)0x0;
  local_18.Capacity = 0;
  local_18.Length = 0;
  iVar1 = (**(code **)(*(int *)this + 200))(local_6c);
  if (*(char *)(iVar1 + 0x28) == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pMVar7 = (ModulePlacer *)0x0;
  pSVar6 = &local_30;
  pSVar5 = &local_24;
  pSVar4 = &local_18;
  pSVar3 = &local_3c;
  fVar2 = (float10)(**(code **)(*(int *)this + 0x158))();
  local_c = (double)fVar2;
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,*(double *)(iVar1 + 0x20) + 1e-08 < local_c,pSVar3,pSVar4,pSVar5
             ,pSVar6,pMVar7);
  if (local_18.Data != (char *)0x0) {
    port_op_delete(local_18.Data);
    local_18.Data = (char *)0x0;
  }
  if (local_24.Data != (char *)0x0) {
    port_op_delete(local_24.Data);
    local_24.Data = (char *)0x0;
  }
  if (local_30.Data != (char *)0x0) {
    port_op_delete(local_30.Data);
    local_30.Data = (char *)0x0;
  }
  if (local_3c.Data != (char *)0x0) {
    port_op_delete(local_3c.Data);
  }
  return __return_storage_ptr__;
}

//==== 0060d3b0 GetThermalConductance_W__K_0060d3b0 ====


/* public: double __thiscall ThermocoupleSubModule__GetThermalConductance_W__K(void)const  */

double __thiscall ThermocoupleSubModule__GetThermalConductance_W__K(ThermocoupleSubModule *this)

{
  double dVar1;
  
  dVar1 = (this->CachedArea_m2 / 1000.0) * 0.5;
  return ((this->NTypeComposition->Resistivity_Ohm_m * dVar1 +
          this->PTypeComposition->Resistivity_Ohm_m * dVar1) * 1000.0) / this->Length_m;
}





//==== 0060d410 InnerSortFunction_0060d410 ====

/* public: virtual bool __thiscall PowerModule__InnerSortFunction(class Module const *,class Module
   const *)const  */

bool __thiscall PowerModule__InnerSortFunction(PowerModule *this,Module *param_1,Module *param_2)

{
  bool bVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)(**(code **)(param_1->_pad_0x0_0 + 0x154))();
  fVar3 = (float10)(**(code **)(param_2->_pad_0x0_0 + 0x154))();
  if ((double)fVar2 == (double)fVar3) {
    bVar1 = Module__InnerSortFunction((Module *)this,param_1,param_2);
  }
  fVar2 = (float10)(**(code **)(param_1->_pad_0x0_0 + 0x154))();
  fVar3 = (float10)(**(code **)(param_2->_pad_0x0_0 + 0x154))();
  return (double)fVar2 < (double)fVar3;
}

//==== 0060d4a0 PassThroughCachedValues2 ====


/* public: void  ThermocoupleSubModule__PassThroughCachedValues2(double,double) */

void 
ThermocoupleSubModule__PassThroughCachedValues2
          (ThermocoupleSubModule *this,double param_1,double param_2)

{
  this->CachedHotTemperature_K = param_1;
  this->CachedColdTemperature_K = param_2;
  return;
}





//==== 0060d6b0 StaticFactory_0060d6b0 ====

/* public: static class util__Reflectable * __cdecl
   ThermocoupleSubModule__ReflectionInfoStruct_class_ThermocoupleSubModule___StaticFactory(void) */

Reflectable * __cdecl
ThermocoupleSubModule__ReflectionInfoStruct_class_ThermocoupleSubModule___StaticFactory__o2(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x38));
  if (pRVar1 != (Reflectable *)0x0) {
    memset(pRVar1,0,0x38);
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_257;
  }
  return (Reflectable *)0x0;
}

//==== 0060d700 StaticGetMemberByIndex_0060d700 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   ThermocoupleSubModule__ReflectionInfoStruct_class_ThermocoupleSubModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
ThermocoupleSubModule__ReflectionInfoStruct_class_ThermocoupleSubModule___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_8d5b0411__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_8d5b0411__thread_safe_static_guard_0__);
    if ( cde_l2_8d5b0411__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_88537fa2_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00971454 = 0;
      _DAT_00971458 = 0;
      _DAT_0097145c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971460,"Unused");
      _DAT_0097146c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971470,"PTypeComposition");
      _DAT_0097147c = 8;
      _DAT_00971480 = 0x10;
      _DAT_00971484 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971488,"Material");
      _DAT_00971494 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971498,"NTypeComposition");
      _DAT_009714a4 = 8;
      _DAT_009714a8 = 0x14;
      _DAT_009714ac = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009714b0,"Material");
      _DAT_009714bc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009714c0,"Length_m");
      _DAT_009714cc = 4;
      _DAT_009714d0 = 0x18;
      _DAT_009714d4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009714d8,"double");
      _DAT_009714e4 = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_ThermocoupleSubModule__ReflectionInfoStruct_class_ThermocoupleSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_8d5b0411__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_88537fa2_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_00971454 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_00971458 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_0097145c + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_00971460 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0097146c)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0097146d)[iVar1];
  return __return_storage_ptr__;
}





//==== 0060d8c0 StaticGetMemberCount_0060d8c0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl ThermocoupleSubModule__ReflectionInfoStruct_class_ThermocoupleSubModule___StaticGetMemberCount(void) */

int __cdecl
ThermocoupleSubModule__ReflectionInfoStruct_class_ThermocoupleSubModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_62011ffe__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_62011ffe__thread_safe_static_guard_0__);
    if ( cde_l2_62011ffe__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_60ca7f3b_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_009713ac = 0;
      _DAT_009713b0 = 0;
      _DAT_009713b4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009713b8,"Unused");
      _DAT_009713c4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009713c8,"PTypeComposition");
      _DAT_009713d4 = 8;
      _DAT_009713d8 = 0x10;
      _DAT_009713dc = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009713e0,"Material");
      _DAT_009713ec = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009713f0,"NTypeComposition");
      _DAT_009713fc = 8;
      _DAT_00971400 = 0x14;
      _DAT_00971404 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971408,"Material");
      _DAT_00971414 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971418,"Length_m");
      _DAT_00971424 = 4;
      _DAT_00971428 = 0x18;
      _DAT_0097142c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971430,"double");
      _DAT_0097143c = 0;
      atexit( private__static_int_const___cdecl_ThermocoupleSubModule__ReflectionInfoStruct_class_ThermocoupleSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_62011ffe__thread_safe_static_guard_0__);
    }
  }
  return 4;
}





//==== 0060da30 StaticGetPropertyGetters_0060da30 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cdouble___thiscall_util__Reflectable___P__void_const_G__G_ __thiscall PowerModule__StaticGetPropertyGetters(void)const
    */

void __thiscall PowerModule__StaticGetPropertyGetters(PowerModule *this)

{
  undefined8 stack0xffffffc0;
  undefined8 stack0xfffffffc;
  Str_L_char_G_ *pSVar1;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__G___G_
  *pDVar2;
  Str_L_char_G_ *pSVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  Str_L_char_G_ *pSVar8;
  int iVar9;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cvoid____cdecl_P__void__G___G_ *in_stack_00000004;
  int iVar10;
  Maybe_L_int_G_ *pMVar11;
  int iStack_3c;
  undefined1 auStack_24 [8];
  int iStack_1c;
  undefined4 uStack_18;
  undefined8 uStack_14;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)((Module *)this);
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_009717c0) &&
     (_Init_thread_header(&DAT_009717c0), DAT_009717c0 == -1)) {
    puVar5 = (undefined4 *)port_op_new(0xa4);
    if (puVar5 == (undefined4 *)0x0) {
      DAT_0095f39c = (undefined4)(uintptr_t)((Str_L_char_G_ *)0x0);
    }
    else {
      DAT_0095f39c = (undefined4)(uintptr_t)((Str_L_char_G_ *)(puVar5 + 1));
      *puVar5 = 10;
      iVar10 = 10;
      pSVar3 = (Str_L_char_G_ *)(uintptr_t)(DAT_0095f39c);
      do {
        pSVar3->Data = (char *)0x0;
        pSVar3->Capacity = 0;
        pSVar3->Length = 0;
        pSVar3[1].Data = (char *)0x0;
        iVar10 = iVar10 + -1;
        pSVar3 = (Str_L_char_G_ *)&pSVar3[1].Capacity;
      } while (iVar10 != 0);
    }
    iVar10 = 0;
    if (0 < DAT_0095f3a4) {
      (*(uint32_t*)&(auStack_24)) = (uint32_t)(uintptr_t)((char *)0x0);
      iVar9 = 0;
      (*(uint32_t*)((char*)&(auStack_24)+4)) = (uint32_t)(uintptr_t)((void *)0x0);
      iStack_1c = 0;
      uStack_18 = 0;
      do {
        pSVar3 = (Str_L_char_G_ *)((int)(int)(uintptr_t)(DAT_0095f39c) + iVar9);
        util__Str_char___operator__o8(pSVar3,(Str_L_char_G_ *)auStack_24);
        iVar10 = iVar10 + 1;
        pSVar3[1].Data = (char *)0x0;
        iVar9 = iVar9 + 0x10;
      } while (iVar10 < DAT_0095f3a4);
    }
    atexit(FUN_008f5b90);
    iStack_3c = 0x60dd7d;
    _Init_thread_footer(&DAT_009717c0);
  }
  if (DAT_0095f3a0 == 0) {
    pDVar2 = (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__G___G_
              *)Module__StaticGetPropertyGetters((Module*)((Module*)((*(uint32_t*)((char*)&(uStack_14)+4)))));
    util__Darray_struct_util__tuple2_class_util__Str_char__double____thiscall_util__Reflectable_____void_const______operator((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__G___G_
                 *)&PTR__vftable__0095f398,pDVar2);
    util__Darray_struct_util__tuple2_class_util__Str_char__double____thiscall_util__Reflectable_____void_const_______Darray_struct_util__tuple2_class_util__Str_char__double____thiscall_util__Reflectable_____void_const((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__G___G_
                *)auStack_24);
    pSVar8 = (Str_L_char_G_ *)&stack0xffffffc0;
    (*(uint32_t*)&(uStack_14)) = 0;
    (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)((Module *)((uint)(*(uint32_t*)((char*)&(uStack_14)+4)) & 0xffffff00));
    pMVar11 = (Maybe_L_int_G_ *)&uStack_14;
    iVar10 = 3;
    pSVar3 = (Str_L_char_G_ *)
             util__Str_char___Str_char((Str_L_char_G_ *)(auStack_24 + 4),"GetTotalEnergy_J");
    util__Str_char___SubStr(pSVar3,pSVar8,iVar10,pMVar11);
    FUN_0060cac0();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
    pSVar8 = (Str_L_char_G_ *)&stack0xffffffc0;
    (*(uint32_t*)&(uStack_14)) = 0;
    (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)((Module *)((uint)(*(uint32_t*)((char*)&(uStack_14)+4)) & 0xffffff00));
    pMVar11 = (Maybe_L_int_G_ *)&uStack_14;
    iVar10 = 3;
    pSVar3 = (Str_L_char_G_ *)
             util__Str_char___Str_char((Str_L_char_G_ *)(auStack_24 + 4),"GetEfficiency_Percent");
    util__Str_char___SubStr(pSVar3,pSVar8,iVar10,pMVar11);
    FUN_0060cac0();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
    pSVar8 = (Str_L_char_G_ *)&stack0xffffffc0;
    (*(uint32_t*)&(uStack_14)) = 0;
    (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)((Module *)((uint)(*(uint32_t*)((char*)&(uStack_14)+4)) & 0xffffff00));
    pMVar11 = (Maybe_L_int_G_ *)&uStack_14;
    iVar10 = 3;
    pSVar3 = (Str_L_char_G_ *)
             util__Str_char___Str_char((Str_L_char_G_ *)(auStack_24 + 4),"GetHeatGenerated_W");
    util__Str_char___SubStr(pSVar3,pSVar8,iVar10,pMVar11);
    FUN_0060cac0();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
    pSVar8 = (Str_L_char_G_ *)&stack0xffffffc0;
    (*(uint32_t*)&(uStack_14)) = 0;
    (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)((Module *)((uint)(*(uint32_t*)((char*)&(uStack_14)+4)) & 0xffffff00));
    pMVar11 = (Maybe_L_int_G_ *)&uStack_14;
    iVar10 = 3;
    pSVar3 = (Str_L_char_G_ *)
             util__Str_char___Str_char((Str_L_char_G_ *)(auStack_24 + 4),"GetPowerGenerated_W");
    util__Str_char___SubStr(pSVar3,pSVar8,iVar10,pMVar11);
    FUN_0060cac0();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
  }
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = (undefined **)(&PTR_vftable_0095f33c);
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(int *)(in_stack_00000004 + 0xc) = DAT_0095f3a4;
  (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)((Module *)(**(code **)(PTR__vftable__0095f398 + 0xc))());
  util__Darray_struct_util__tuple2_class_util__Str_char__void____cdecl___void______SetSize
            (in_stack_00000004,(int *)((int)&uStack_14 + 4));
  uVar7 = *(uint *)(in_stack_00000004 + 0xc);
  uVar6 = -(uint)((int)((ulonglong)uVar7 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar7 * 0x10);
  puVar4 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar6) | uVar6 + 4);
  if (puVar4 == (uint *)0x0) {
    pSVar3 = (Str_L_char_G_ *)0x0;
  }
  else {
    *puVar4 = uVar7;
    pSVar3 = (Str_L_char_G_ *)(puVar4 + 1);
    pSVar8 = pSVar3;
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      pSVar8->Data = (char *)0x0;
      pSVar8->Capacity = 0;
      pSVar8->Length = 0;
      pSVar8[1].Data = (char *)0x0;
      pSVar8 = (Str_L_char_G_ *)&pSVar8[1].Capacity;
    }
  }
  *(Str_L_char_G_ **)(in_stack_00000004 + 4) = pSVar3;
  pSVar8 = (Str_L_char_G_ *)(uintptr_t)(DAT_0095f39c);
  if (DAT_0095f39c != (Str_L_char_G_ *)(DAT_0095f3a0 * 0x10 + (int)DAT_0095f39c)) {
    do {
      util__Str_char___operator__o8(pSVar3,pSVar8);
      pSVar1 = pSVar8 + 1;
      pSVar8 = (Str_L_char_G_ *)&pSVar8[1].Capacity;
      pSVar3[1].Data = pSVar1->Data;
      pSVar3 = (Str_L_char_G_ *)&pSVar3[1].Capacity;
    } while (pSVar8 != (Str_L_char_G_ *)(DAT_0095f3a0 * 0x10 + (int)DAT_0095f39c));
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0060dd90 StaticGetReflectionInfo_0060dd90 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct ThermocoupleSubModule__ReflectionInfoStruct_L_classThermocoupleSubModule_G_ *
   __cdecl ThermocoupleSubModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_ThermocoupleSubModule_G_ * __cdecl
ThermocoupleSubModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_ce7b8447__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_ce7b8447__thread_safe_static_guard_0__);
    if ( cde_l2_ce7b8447__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_57065977_ReflectionInfo) = &vftable_258;
      _Init_thread_footer(& cde_l2_ce7b8447__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_57065977_ReflectionInfo;
}





//==== 0060ddf0 GetComposition_0060ddf0 ====


/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   RadioisotopePelletSubModule__GetComposition(void)const  */

Darray_L_struct_MaterialConstituent_G_ * __thiscall
RadioisotopePelletSubModule__GetComposition(RadioisotopePelletSubModule *this)

{
  undefined8 stack0x00000004;
  undefined4 *puVar1;
  double dVar2;
  Material *pMVar3;
  Darray_L_struct_MaterialConstituent_G_ *this_00;
  bool bVar4;
  Darray_L_struct_MaterialConstituent_G_ *in_stack_00000004;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  this_00 = in_stack_00000004;
  in_stack_00000004 = (Darray_L_struct_MaterialConstituent_G_ *)0x1;
  *(undefined4 *)this_00 = 0;
  *(undefined4 *)(this_00 + 4) = 0;
  *(undefined4 *)(this_00 + 8) = 0;
  *(undefined4 *)(this_00 + 0xc) = 0;
  *(undefined ***)this_00 = (undefined **)(&vftable_75);
  *(undefined4 *)(this_00 + 4) = 0;
  *(undefined4 *)(this_00 + 8) = 0;
  *(undefined4 *)(this_00 + 0xc) = 0;
  pMVar3 = this->Fuel;
  dVar2 = this->Mass_kg;
  util__Darray_struct_MaterialConstituent___SetSize(this_00,(int *)&stack0x00000004);
  bVar4 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                    ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)this_00,0);
  if (bVar4) {
    uStack_c = SUB84(dVar2,0);
    uStack_8 = (undefined4)((ulonglong)dVar2 >> 0x20);
    puVar1 = (undefined4 *)(*(int *)(this_00 + 4) + -0x10 + *(int *)(this_00 + 8) * 0x10);
    *puVar1 = (undefined4)(uintptr_t)(pMVar3);
    puVar1[1] = uStack_10;
    puVar1[2] = uStack_c;
    puVar1[3] = uStack_8;
  }
  return this_00;
}





//==== 0060de70 GetPointerPropertyChoices_0060de70 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   RadioisotopePelletSubModule__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

ClassMember * 
RadioisotopePelletSubModule__GetPointerPropertyChoices
          (RadioisotopePelletSubModule *this,ClassMember *param_1,
          SerializationManagerInterface *param_2)

{
  char *pcVar1;
  SerializationManagerInterface SVar2;
  int in_stack_0000000c;
  
  if (*(int *)&param_2[1] < 1) {
    SVar2 = *(SerializationManagerInterface *)&cde_l2_0b2b1c9f_NullString;
  }
  else {
    SVar2 = *param_2;
  }
  for (pcVar1 = "Fuel"; (pcVar1[(int)(*(int *)&SVar2 + -0x928f58)] != '\0' || (*pcVar1 != '\0'));
      pcVar1 = pcVar1 + 1) {
    if (pcVar1[(int)(*(int *)&SVar2 + -0x928f58)] != *pcVar1) {
      (param_1->Name).Data =
           (char *)&vftable_85;
      (param_1->Name).Capacity = 0;
      (param_1->Name).Length = 0;
      *(undefined4 *)&param_1->Type = 0;
      return param_1;
    }
  }
  GetMaterials((DataParser *)param_1,in_stack_0000000c,true);
  return param_1;
}





//==== 0060def0 GetReflectionInfo_0060def0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   RadioisotopePelletSubModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall
RadioisotopePelletSubModule__GetReflectionInfo(RadioisotopePelletSubModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_dd210f3f__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_dd210f3f__thread_safe_static_guard_0__);
    if ( cde_l2_dd210f3f__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_2289c60a_ReflectionInfo) = &vftable_260;
      _Init_thread_footer(& cde_l2_dd210f3f__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_2289c60a_ReflectionInfo;
}





//==== 0060df00 GetTypeName_0060df00 ====


/* public: virtual class util__Str_L_char_G_ 
   RadioisotopePelletSubModule__ReflectionInfoStruct_class_RadioisotopePelletSubModule___GetTypeName(void)const  */

Str_L_char_G_ * 
RadioisotopePelletSubModule__ReflectionInfoStruct_class_RadioisotopePelletSubModule___GetTypeName
          (ReflectionInfoStruct_L_class_RadioisotopePelletSubModule_G_ *this,
          Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"RadioisotopePelletSubModule");
  return __return_storage_ptr__;
}





//==== 0060df20 GetMembers_0060df20 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   RadioisotopePelletSubModule__ReflectionInfoStruct_class_RadioisotopePelletSubModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
RadioisotopePelletSubModule__ReflectionInfoStruct_class_RadioisotopePelletSubModule___GetMembers
          (ReflectionInfoStruct_L_class_RadioisotopePelletSubModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_57b02f6c__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_57b02f6c__thread_safe_static_guard_0__),
      cde_l2_57b02f6c__thread_safe_static_guard_0__ == -1)) {
     cde_l2_a7f2506e_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_57b02f6c__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_a7f2506e_Count);
  iVar3 = 0;
  if (0 <  cde_l2_a7f2506e_Count) {
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
    } while (iVar3 <  cde_l2_a7f2506e_Count);
  }
  return in_stack_00000004;
}





//==== 0060e060 GetMember_0060e060 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   RadioisotopePelletSubModule__ReflectionInfoStruct_class_RadioisotopePelletSubModule___GetMember(class util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
RadioisotopePelletSubModule__ReflectionInfoStruct_class_RadioisotopePelletSubModule___GetMember
          (ReflectionInfoStruct_L_class_RadioisotopePelletSubModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_b28ed689__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_b28ed689__thread_safe_static_guard_0__),
      cde_l2_b28ed689__thread_safe_static_guard_0__ == -1)) {
     cde_l2_1c727716_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_b28ed689__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_1c727716_Count) {
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
LAB_0060e0ed:
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
          if (cVar3 == '\0') goto LAB_0060e0ed;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_1c727716_Count);
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





//==== 0060e200 GetFactory_0060e200 ====


/* public: virtual class util__Reflectable * (__cdecl*
   RadioisotopePelletSubModule__ReflectionInfoStruct_class_RadioisotopePelletSubModule___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall RadioisotopePelletSubModule__ReflectionInfoStruct_class_RadioisotopePelletSubModule___GetFactory
          (ReflectionInfoStruct_L_class_RadioisotopePelletSubModule_G_ *this)

{
  return StaticFactory;
}





//==== 0060e210 GetClassID_0060e210 ====


/* public: virtual unsigned long 
   RadioisotopeThermoelectricGeneratorModule__GetClassID(void)const  */

ulong 
RadioisotopeThermoelectricGeneratorModule__GetClassID
          (RadioisotopeThermoelectricGeneratorModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_cf45e97a__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_cf45e97a__thread_safe_static_guard_0__);
    if ( cde_l2_cf45e97a__thread_safe_static_guard_0__ == -1) {
       cde_l2_a3ea3e16_ID = util__GetHash("RadioisotopeThermoelectricGeneratorModule");
      _Init_thread_footer(& cde_l2_cf45e97a__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_a3ea3e16_ID;
}





//==== 0060e270 GetGeneratedName_0060e270 ====

/* public: virtual class util__Str_L_char_G_ 
   RadioisotopeThermoelectricGeneratorModule__GetGeneratedName(void)const  */

Str_L_char_G_ * 
RadioisotopeThermoelectricGeneratorModule__GetGeneratedName
          (RadioisotopeThermoelectricGeneratorModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined8 stack0xffffff54;
  Str_L_char_G_ SVar1;
  LocStr *pLVar2;
  Str_L_char_G_ *pSVar3;
  Str_L_char_G_ *pSVar4;
  Str_L_char_G_ *this_00;
  Str_L_char_G_ *pSVar5;
  float10 fVar6;
  char *in_stack_ffffff54;
  int in_stack_ffffff58;
  int iVar7;
  Str_L_char_G_ *__return_storage_ptr___00;
  void *local_88 [3];
  void *local_7c;
  void *local_70 [3];
  void *local_64;
  Str_L_char_G_ local_58;
  Str_L_char_G_ local_4c;
  Str_L_char_G_ local_40;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char(&local_58,"Powerplant RTG");
  util__Str_char___Str_char(&local_34,"Space");
  util__Str_char___Str_char(&local_28,"GetPowerGenerated_W()");
  local_1c.Data = (char *)0x0;
  local_1c.Capacity = 0;
  local_1c.Length = 0;
  local_10.Data = (char *)0x0;
  local_10.Capacity = 0;
  local_10.Length = 0;
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)local_88,&local_58,&local_1c);
  pSVar3 = util__LocStr__operator__o3(pLVar2);
  iVar7 = 0x60e2fd;
  __return_storage_ptr___00 = __return_storage_ptr__;
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)local_70,&local_34,&local_10);
  pSVar4 = util__LocStr__operator__o3(pLVar2);
  pSVar5 = &local_40;
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff54,&local_28);
  fVar6 = (float10)(**(code **)(this->_pad_0x0_0 + 0x154))();
  SVar1.Capacity = iVar7;
  SVar1.Data = (char *)in_stack_ffffff58;
  SVar1.Length = (int)pSVar5;
  this_00 = Print(&local_4c,
                  (double)CONCAT44(in_stack_ffffff54,(int)((ulonglong)(double)fVar6 >> 0x20)),SVar1)
  ;
  pSVar5 = util__Str_char___operator(this_00,pSVar5,pSVar4);
  util__Str_char___operator(pSVar5,__return_storage_ptr___00,pSVar3);
  if (local_40.Data != (char *)0x0) {
    port_op_delete(local_40.Data);
    local_40.Data = (char *)0x0;
  }
  if (local_4c.Data != (char *)0x0) {
    port_op_delete(local_4c.Data);
    local_4c.Data = (char *)0x0;
  }
  if (local_64 != (void *)0x0) {
    port_op_delete(local_64);
    local_64 = (void *)0x0;
  }
  if (local_70[0] != (void *)0x0) {
    port_op_delete(local_70[0]);
    local_70[0] = (void *)0x0;
  }
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
    local_10.Data = (char *)0x0;
  }
  if (local_7c != (void *)0x0) {
    port_op_delete(local_7c);
    local_7c = (void *)0x0;
  }
  if (local_88[0] != (void *)0x0) {
    port_op_delete(local_88[0]);
    local_88[0] = (void *)0x0;
  }
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
    local_1c.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_58.Data != (char *)0x0) {
    port_op_delete(local_58.Data);
  }
  return __return_storage_ptr__;
}

//==== 0060e450 GetShortName_0060e450 ====

/* public: virtual class util__Str_L_char_G_ 
   RadioisotopeThermoelectricGeneratorModule__GetShortName(void)const  */

Str_L_char_G_ * 
RadioisotopeThermoelectricGeneratorModule__GetShortName
          (RadioisotopeThermoelectricGeneratorModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined8 stack0xffffff54;
  Str_L_char_G_ SVar1;
  LocStr *pLVar2;
  Str_L_char_G_ *pSVar3;
  Str_L_char_G_ *pSVar4;
  Str_L_char_G_ *this_00;
  Str_L_char_G_ *pSVar5;
  float10 fVar6;
  char *in_stack_ffffff54;
  int in_stack_ffffff58;
  int iVar7;
  Str_L_char_G_ *__return_storage_ptr___00;
  void *local_88 [3];
  void *local_7c;
  void *local_70 [3];
  void *local_64;
  Str_L_char_G_ local_58;
  Str_L_char_G_ local_4c;
  Str_L_char_G_ local_40;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char(&local_58,"Powerplant Generator");
  util__Str_char___Str_char(&local_34,"Space");
  util__Str_char___Str_char(&local_28,"GetPowerGenerated_W()");
  local_1c.Data = (char *)0x0;
  local_1c.Capacity = 0;
  local_1c.Length = 0;
  local_10.Data = (char *)0x0;
  local_10.Capacity = 0;
  local_10.Length = 0;
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)local_88,&local_58,&local_1c);
  pSVar3 = util__LocStr__operator__o3(pLVar2);
  iVar7 = 0x60e4dd;
  __return_storage_ptr___00 = __return_storage_ptr__;
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)local_70,&local_34,&local_10);
  pSVar4 = util__LocStr__operator__o3(pLVar2);
  pSVar5 = &local_40;
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff54,&local_28);
  fVar6 = (float10)(**(code **)(this->_pad_0x0_0 + 0x154))();
  SVar1.Capacity = iVar7;
  SVar1.Data = (char *)in_stack_ffffff58;
  SVar1.Length = (int)pSVar5;
  this_00 = Print(&local_4c,
                  (double)CONCAT44(in_stack_ffffff54,(int)((ulonglong)(double)fVar6 >> 0x20)),SVar1)
  ;
  pSVar5 = util__Str_char___operator(this_00,pSVar5,pSVar4);
  util__Str_char___operator(pSVar5,__return_storage_ptr___00,pSVar3);
  if (local_40.Data != (char *)0x0) {
    port_op_delete(local_40.Data);
    local_40.Data = (char *)0x0;
  }
  if (local_4c.Data != (char *)0x0) {
    port_op_delete(local_4c.Data);
    local_4c.Data = (char *)0x0;
  }
  if (local_64 != (void *)0x0) {
    port_op_delete(local_64);
    local_64 = (void *)0x0;
  }
  if (local_70[0] != (void *)0x0) {
    port_op_delete(local_70[0]);
    local_70[0] = (void *)0x0;
  }
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
    local_10.Data = (char *)0x0;
  }
  if (local_7c != (void *)0x0) {
    port_op_delete(local_7c);
    local_7c = (void *)0x0;
  }
  if (local_88[0] != (void *)0x0) {
    port_op_delete(local_88[0]);
    local_88[0] = (void *)0x0;
  }
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
    local_1c.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_58.Data != (char *)0x0) {
    port_op_delete(local_58.Data);
  }
  return __return_storage_ptr__;
}

//==== 0060e630 GetIcon_0060e630 ====


/* public: virtual void (__cdecl*__thiscall
   RadioisotopeThermoelectricGeneratorModule__GetIcon(void)const )(void) */

_func_void * __thiscall
RadioisotopeThermoelectricGeneratorModule__GetIcon(RadioisotopeThermoelectricGeneratorModule *this)

{
  return Icons__RadioisotopeGenerator;
}





//==== 0060e750 GetHullRadius_m_0060e750 ====

/* public: virtual double 
   RadioisotopeThermoelectricGeneratorModule__GetHullRadius_m(void)const  */

double 
RadioisotopeThermoelectricGeneratorModule__GetHullRadius_m
          (RadioisotopeThermoelectricGeneratorModule *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  Cylinder_L_double_G_ *pCVar4;
  double dVar5;
  Cylinder_L_double_G_ local_18;
  
  dVar5 = *(double *)&(this->Thermocouple).PTypeComposition;
  dVar1 = *(double *)((this->Thermocouple)._pad_0x8_2 + 0x30);
  dVar2 = (this->Thermocouple).Length_m;
  dVar3 = this->ExitTemperature_K;
  pCVar4 = TurbopumpSubModule__GetTurbopumpCylinder_m
                     ((TurbopumpSubModule *)&(this->Turbopump).RotationalSpeed_RPM,&local_18);
  dVar5 = (dVar5 / dVar1) / (dVar2 * 3.141592653589793);
  libm_sse2_sqrt_precise(0.0);
  dVar5 = dVar5 + dVar3;
  if (dVar5 <= pCVar4->Radius) {
    dVar5 = pCVar4->Radius;
  }
  return dVar5;
}

//==== 0060e7f0 GetHullLength_m_0060e7f0 ====


/* public: virtual double 
   RadioisotopeThermoelectricGeneratorModule__GetHullLength_m(void)const  */

double 
RadioisotopeThermoelectricGeneratorModule__GetHullLength_m
          (RadioisotopeThermoelectricGeneratorModule *this)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (this->Thermocouple).Length_m;
  dVar2 = TurbopumpSubModule__GetLength_m
                    ((TurbopumpSubModule *)&(this->Turbopump).RotationalSpeed_RPM);
  return dVar2 + dVar1;
}





//==== 0060e820 GetStructuralMaterial_0060e820 ====


/* public: virtual class Material const * 
   RadioisotopeThermoelectricGeneratorModule__GetStructuralMaterial(void)const  */

Material * 
RadioisotopeThermoelectricGeneratorModule__GetStructuralMaterial
          (RadioisotopeThermoelectricGeneratorModule *this)

{
  return (Material *)(uintptr_t)*(uint32_t *)&(this->Thermocouple).CachedColdTemperature_K;
}





//==== 0060e830 GetStructuralThickness_m_0060e830 ====

/* public: virtual double 
   RadioisotopeThermoelectricGeneratorModule__GetStructuralThickness_m(void)const  */

double 
RadioisotopeThermoelectricGeneratorModule__GetStructuralThickness_m
          (RadioisotopeThermoelectricGeneratorModule *this)

{
  float10 fVar1;
  
  fVar1 = (float10)(**(code **)(this->_pad_0x0_0 + 0xa4))();
  return (double)(fVar1 + fVar1);
}

//==== 0060e840 GetPowerGenerated_W_0060e840 ====

/* public: virtual double 
   RadioisotopeThermoelectricGeneratorModule__GetPowerGenerated_W(void)const  */

double 
RadioisotopeThermoelectricGeneratorModule__GetPowerGenerated_W
          (RadioisotopeThermoelectricGeneratorModule *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar2 = Material__GetPercentUndecayed
                    ((Material *)(this->Thermocouple)._pad_0x8_2,
                     Physics__DefaultShipOperationalTime_s);
  dVar3 = Material__GetRadioactiveSpecificPower_W__kg((Material *)(this->Thermocouple)._pad_0x8_2);
  dVar1 = *(double *)&(this->Thermocouple).PTypeComposition;
  dVar4 = ThermocoupleSubModule__GetEfficiency_Percent
                    ((ThermocoupleSubModule *)&(this->Thermocouple).CachedArea_m2);
  dVar5 = TurbopumpSubModule__GetPowerRequired_W
                    ((TurbopumpSubModule *)&(this->Turbopump).RotationalSpeed_RPM);
  return dVar4 * dVar3 * dVar1 * dVar2 - dVar5;
}

//==== 0060e8b0 GetHeatGenerated_W_0060e8b0 ====

/* public: virtual double 
   RadioisotopeThermoelectricGeneratorModule__GetHeatGenerated_W(void)const  */

double 
RadioisotopeThermoelectricGeneratorModule__GetHeatGenerated_W
          (RadioisotopeThermoelectricGeneratorModule *this)

{
  double dVar1;
  double dVar2;
  
  dVar1 = Material__GetPercentUndecayed
                    ((Material *)(this->Thermocouple)._pad_0x8_2,
                     Physics__DefaultShipOperationalTime_s);
  dVar2 = Material__GetRadioactiveSpecificPower_W__kg((Material *)(this->Thermocouple)._pad_0x8_2);
  return dVar2 * *(double *)&(this->Thermocouple).PTypeComposition * dVar1;
}

//==== 0060e8f0 GetEfficiency_Percent_0060e8f0 ====

/* public: virtual double 
   RadioisotopeThermoelectricGeneratorModule__GetEfficiency_Percent(void)const  */

double 
RadioisotopeThermoelectricGeneratorModule__GetEfficiency_Percent
          (RadioisotopeThermoelectricGeneratorModule *this)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  Maybe_L_double_G_ *pMVar5;
  double dVar6;
  double dVar7;
  Maybe_L_double_G_ MStack_24;
  double dStack_14;
  double dStack_c;
  
  dStack_c = 0.0;
  dVar1 = *(double *)&(this->Cooler)._pad_0x8_2;
  if ((0.0 < dVar1) && (dVar2 = *(double *)&(this->Cooler).CachedCoolant, dVar2 <= dVar1)){
    iVar3 = *(int *)&(this->Thermocouple).CachedColdTemperature_K;
    iVar4 = *(int *)((int)&(this->Thermocouple).CachedColdTemperature_K + 4);
    dStack_14 = dVar1 - dVar2;
    dVar6 = (*(double *)(iVar3 + 0xe8) - *(double *)(iVar4 + 0xe8)) * 1000.0 * dStack_14;
    if (dVar6 != 0.0) {
      dVar7 = (*(double *)&this->Cooler / 1000.0) * 0.5;
      dStack_c = ((dVar2 + dVar1) * 0.5 * dVar6 * dVar6) /
                 ((*(double *)(iVar4 + 0xb8) / dVar7 + *(double *)(iVar3 + 0xb8) / dVar7) * 1000.0 *
                  this->ExitTemperature_K *
                 (((*(double *)(iVar4 + 0xa8) * dVar7 + *(double *)(iVar3 + 0xa8) * dVar7) * 1000.0)
                 / this->ExitTemperature_K));
    }
    dStack_c = dStack_c + 1.0;
    pMVar5 = util__Sqrt(&MStack_24,&dStack_c);
    if (pMVar5->IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    return ((dStack_14 / *(double *)&(this->Cooler)._pad_0x8_2) * (pMVar5->Data - 1.0)) /
           (*(double *)&(this->Cooler).CachedCoolant / *(double *)&(this->Cooler)._pad_0x8_2 +
           pMVar5->Data);
  }
  return 0.0;
}

//==== 0060e900 GetTotalEnergy_J_0060e900 ====

/* public: virtual double 
   RadioisotopeThermoelectricGeneratorModule__GetTotalEnergy_J(void)const  */

double 
RadioisotopeThermoelectricGeneratorModule__GetTotalEnergy_J
          (RadioisotopeThermoelectricGeneratorModule *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = Material__GetRadioactiveSpecificEnergy_J__kg((Material *)(this->Thermocouple)._pad_0x8_2);
  dVar1 = *(double *)&(this->Thermocouple).PTypeComposition;
  dVar3 = ThermocoupleSubModule__GetEfficiency_Percent
                    ((ThermocoupleSubModule *)&(this->Thermocouple).CachedArea_m2);
}

//==== 0060e930 GetCoolantProperties_0060e930 ====

/* public: virtual class util__Maybe_L_structModuleCoolantProperties_G_ __thiscall
   RadioisotopeThermoelectricGeneratorModule__GetCoolantProperties(void)const  */

Maybe_L_ModuleCoolantProperties_G_ * __thiscall
RadioisotopeThermoelectricGeneratorModule__GetCoolantProperties
          (RadioisotopeThermoelectricGeneratorModule *this,
          Maybe_L_ModuleCoolantProperties_G_ *__return_storage_ptr__)

{
  double dVar1;
  int iVar2;
  Material *pMVar3;
  float10 fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  fVar4 = (float10)(**(code **)(this->_pad_0x0_0 + 0x158))();
  dVar1 = (this->Cooler).CachedDimensions_m.Radius;
  iVar2 = *(int *)&(this->Turbopump).PumpRadius_m;
  if (iVar2 == 0) {
    dVar6 = 0.0;
  }
  else {
    dVar6 = *(double *)(iVar2 + 0x98);
  }
  dVar5 = CylindricalCoolerSubModule__GetThermalConductance_W__K
                    ((CylindricalCoolerSubModule *)&(this->Cooler).CachedDimensions_m.Height);
  pMVar3 = *(Material * *)&(this->Turbopump).PumpRadius_m;
  dVar5 = dVar5 * (dVar1 - dVar6);
  if ((double)fVar4 <= dVar5) {
    dVar5 = (double)fVar4;
  }
  dVar1 = (this->Cooler).CachedDimensions_m.Radius;
  dVar6 = CylindricalCoolerSubModule__GetCoolantTotalVolume_m3
                    ((CylindricalCoolerSubModule *)&(this->Cooler).CachedDimensions_m.Height);
  dVar7 = TurbopumpSubModule__GetMassFlowRate_kg__s
                    ((TurbopumpSubModule *)&(this->Turbopump).RotationalSpeed_RPM);
  (__return_storage_ptr__->Data).Volume_m3 = dVar6;
  (__return_storage_ptr__->Data).MassFlowRate_kg__s = dVar7;
  (__return_storage_ptr__->Data).PeakTemperature_K = dVar1;
  (__return_storage_ptr__->Data).Coolant = pMVar3;
  (__return_storage_ptr__->Data).HeatTransferRate_W = dVar5;
  __return_storage_ptr__->IsValidData = true;
  return __return_storage_ptr__;
}

//==== 0060ea10 GetEmittedRadiation_0060ea10 ====

/* public: virtual struct Radiation 
   RadioisotopeThermoelectricGeneratorModule__GetEmittedRadiation(void)const  */

Radiation * 
RadioisotopeThermoelectricGeneratorModule__GetEmittedRadiation
          (RadioisotopeThermoelectricGeneratorModule *this,Radiation *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = Material__GetGammaDecay_W__kg((Material *)(this->Thermocouple)._pad_0x8_2);
  dVar1 = *(double *)&(this->Thermocouple).PTypeComposition;
  *(undefined4 *)&__return_storage_ptr__->ThermalNeutrons_W = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->ThermalNeutrons_W + 4) = 0;
  *(undefined4 *)&__return_storage_ptr__->FastNeutrons_W = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->FastNeutrons_W + 4) = 0;
  __return_storage_ptr__->GammaRays_W = dVar2 * dVar1;
  return __return_storage_ptr__;
}

//==== 0060ea50 GetStatuses_0060ea50 ====

/* public: virtual class DesignStatusBuffer 
   RadioisotopeThermoelectricGeneratorModule__GetStatuses(class DataParser *)const  */

DesignStatusBuffer * 
RadioisotopeThermoelectricGeneratorModule__GetStatuses
          (RadioisotopeThermoelectricGeneratorModule *this,
          DesignStatusBuffer *__return_storage_ptr__,DataParser *param_1)

{
  double dVar1;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ *pSVar3;
  Str_L_char_G_ *pSVar4;
  Str_L_char_G_ *pSVar5;
  ModulePlacer *pMVar6;
  Str_L_char_G_ local_44;
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  double local_14;
  double local_c;
  
  __return_storage_ptr__->DataManager = (DataParser *)0x0;
  (__return_storage_ptr__->Messages)._pad_0x0_0 = 0;
  (__return_storage_ptr__->Messages).Data = (DesignStatusMessage *)0x0;
  (__return_storage_ptr__->Messages).Size = 0;
  *(undefined8 *)&(__return_storage_ptr__->Messages).Capacity = 0;
  PowerModule__GetStatuses((PowerModule *)this,__return_storage_ptr__,param_1);
  util__Str_char___Str_char(&local_44,"RadioisotopeThermoelectricGeneratorFuelMelts");
  local_14 = (this->Cooler).CachedDimensions_m.Radius;
  local_38.Data = (char *)0x0;
  local_38.Capacity = 0;
  local_38.Length = 0;
  local_2c.Data = (char *)0x0;
  local_2c.Capacity = 0;
  local_2c.Length = 0;
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  local_20.Length = 0;
  local_c = Material__GetPercentUndecayed
                      ((Material *)(this->Thermocouple)._pad_0x8_2,
                       Physics__DefaultShipOperationalTime_s);
  dVar1 = Material__GetRadioactiveSpecificPower_W__kg((Material *)(this->Thermocouple)._pad_0x8_2);
  local_c = dVar1 * *(double *)&(this->Thermocouple).PTypeComposition * local_c;
  dVar1 = ThermocoupleSubModule__GetThermalConductance_W__K
                    ((ThermocoupleSubModule *)&(this->Thermocouple).CachedArea_m2);
  pSVar5 = &local_38;
  pMVar6 = (ModulePlacer *)0x0;
  pSVar4 = &local_2c;
  pSVar3 = &local_20;
  pSVar2 = &local_44;
  local_14 = local_c / dVar1 + local_14;
  local_c = Material__GetSafeUseTemperature_K((Material *)(this->Thermocouple)._pad_0x8_2);
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,local_c < local_14,pSVar2,pSVar3,pSVar4,pSVar5,pMVar6);
  if (local_20.Data != (char *)0x0) {
    port_op_delete(local_20.Data);
    local_20.Data = (char *)0x0;
  }
  if (local_2c.Data != (char *)0x0) {
    port_op_delete(local_2c.Data);
    local_2c.Data = (char *)0x0;
  }
  if (local_38.Data != (char *)0x0) {
    port_op_delete(local_38.Data);
    local_38.Data = (char *)0x0;
  }
  if (local_44.Data != (char *)0x0) {
    port_op_delete(local_44.Data);
  }
  return __return_storage_ptr__;
}

//==== 0060edb0 GenerateDesignUI_0060edb0 ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual struct UIWidget * 
   RadioisotopeThermoelectricGeneratorModule__GenerateDesignUI(class Manager *)const  */

UIWidget * 
RadioisotopeThermoelectricGeneratorModule__GenerateDesignUI
          (RadioisotopeThermoelectricGeneratorModule *this,Manager *param_1)

{
  undefined8 stack0xfffffd4c;
  UIAttributes UVar1;
  UIWidget *this_00;
  undefined1 auVar2 [12];
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [44];
  undefined1 auVar11 [44];
  undefined1 in_stack_fffffd4c [320];
  float fVar12;
  UIAttributes local_164;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined8 uStack_14;
  undefined8 uStack_c;
  undefined1 auVar10 [32];
  
  this_00 = (UIWidget *)(uintptr_t)(port_op_new(0x170));
  if (this_00 != (UIWidget *)0x0) {
    fVar12 = 8.901538e-39;
    UIAttributes__UIAttributes(&local_164,param_1);
    *(uint32_t *)&local_1c = 0;
    uStack_14 = 0x3ff0000000000000;
    uStack_c = 0x3ff0000000000000;
    uStack_18 = 0;
    local_164.FillProportion.Getter.Callee = (void *)0x0;
    local_164.FillProportion.Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0;
    local_164.FillProportion.Value.X = 0;
    local_164.FillProportion.Value.Y = 0x3ff00000;
    local_164.FillProportion.Value.Y = 1.0;
    UIAttributes__UIAttributes((UIAttributes *)&stack0xfffffd4c,&local_164);
    UVar1.TextColor.Data.Value.Alpha = fVar12;
*(uint32_t *)&auVar2 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 4)));
*(uint32_t *)&auVar5 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 32)));
*(uint32_t *)&auVar6 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 44)));
*(uint32_t *)&auVar8 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 180)));
*(uint32_t *)&auVar9 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 196)));
*(uint32_t *)&auVar11 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 240)));
    UVar1.Parent = (Manager *)(*(uint32_t*)&(in_stack_fffffd4c));
    UVar1.Tag.Data = (char *)(*(uint32_t*)&(auVar2));
    UVar1.Tag.Capacity = (*(uint32_t*)((char*)&(auVar2)+4));
    UVar1.Tag.Length = (*(uint32_t*)((char*)&(auVar2)+8));
    uVar3 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 16)),0);
    uVar4 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 16)),8);
    UVar1.Location.Getter.Callee = (void *)(int)uVar3;
    UVar1.Location.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar3 >> 0x20);
    UVar1.Location.Value.X = (int)uVar4;
    UVar1.Location.Value.Y = (int)((ulonglong)uVar4 >> 0x20);
    UVar1.Visible.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar5));
    UVar1.Visible.Getter.CallbackFunction =
         (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar5)) >> 0x20);
    UVar1.Visible.Value = (bool)auVar5[8];
    (*(uint24_t *)((char *)&(UVar1.Visible) + 9)) = (*(uint24_t*)((char*)&(auVar5)+9));
    UVar1.Enabled.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar6));
    UVar1.Enabled.Getter.CallbackFunction =
         (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar6)) >> 0x20);
    UVar1.Enabled.Value = (bool)auVar6[8];
    (*(uint24_t *)((char *)&(UVar1.Enabled) + 9)) = (*(uint24_t*)((char*)&(auVar6)+9));
    uVar3 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 56)),0);
    uVar4 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 56)),8);
    UVar1.DesiredSize.Getter.Callee = (void *)(int)uVar3;
    UVar1.DesiredSize.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar3 >> 0x20);
    UVar1.DesiredSize.Value.X = (int)uVar4;
    UVar1.DesiredSize.Value.Y = (int)((ulonglong)uVar4 >> 0x20);
    uVar3 = SUB248((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 72)),0);
*(uint32_t *)&auVar7 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 72)),8));
    UVar1.FillProportion.Getter.Callee = (void *)(int)uVar3;
    UVar1.FillProportion.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar3 >> 0x20);
    UVar1.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar7));
    UVar1.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar7)+8));
    uVar3 = SUB128((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 96)),0);
    UVar1.HitTestShape.Getter.Callee = (void *)(int)uVar3;
    UVar1.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)(int)((ulonglong)uVar3 >> 0x20));
    UVar1.HitTestShape.Value = SUB124((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 96)),8);
    (*(uint32_t *)((char *)&(UVar1) + 108)) = (*(uint32_t *)((char *)&(in_stack_fffffd4c) + 108));
    uVar3 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 112)),0);
    UVar1.Depth.Getter.Callee = (void *)(int)uVar3;
    UVar1.Depth.Getter.CallbackFunction =
         (_func___cdecl_double_void_ptr *)(int)((ulonglong)uVar3 >> 0x20);
    UVar1.Depth.Value = (double)SUB168((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 112)),8);
    uVar3 = SUB128((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 128)),0);
    UVar1.Icon.Getter.Callee = (void *)(int)uVar3;
    UVar1.Icon.Getter.CallbackFunction = (void (* (*)(void *))(void))((_func___cdecl__func___cdecl_void_ptr_void_ptr *)(int)((ulonglong)uVar3 >> 0x20));
    UVar1.Icon.Value = (_func___cdecl_void *)SUB124((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 128)),8);
    uVar3 = SUB208((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 140)),0);
*(uint32_t *)&auVar2 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 140)),8));
    UVar1.Tooltip.Getter.Callee = (void *)(int)uVar3;
    UVar1.Tooltip.Getter.CallbackFunction =
         (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar3 >> 0x20);
    UVar1.Tooltip.Value.Data = (char *)(*(uint32_t*)&(auVar2));
    UVar1.Tooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar2)+4));
    UVar1.Tooltip.Value.Length = (*(uint32_t*)((char*)&(auVar2)+8));
    uVar3 = SUB208((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 160)),0);
*(uint32_t *)&auVar2 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 160)),8));
    UVar1.VerboseTooltip.Getter.Callee = (void *)(int)uVar3;
    UVar1.VerboseTooltip.Getter.CallbackFunction =
         (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar3 >> 0x20);
    UVar1.VerboseTooltip.Value.Data = (char *)(*(uint32_t*)&(auVar2));
    UVar1.VerboseTooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar2)+4));
    UVar1.VerboseTooltip.Value.Length = (*(uint32_t*)((char*)&(auVar2)+8));
    uVar3 = SUB128((*(uint32_t *)((char *)&(auVar8) + 0)),0);
    UVar1.TextFont.Data.Getter.Callee = (void *)(int)uVar3;
    UVar1.TextFont.Data.Getter.CallbackFunction =
         (_func___cdecl_Font_ptr_void_ptr *)(int)((ulonglong)uVar3 >> 0x20);
    UVar1.TextFont.Data.Value = (Font *)SUB124((*(uint32_t *)((char *)&(auVar8) + 0)),8);
    UVar1.TextFont.IsValidData = (bool)auVar8[0xc];
    (*(uint32_t *)((char *)&(UVar1.TextFont) + 13)) = (*(uint32_t *)((char *)&(auVar8) + 13));
    uVar3 = SUB408((*(uint32_t *)((char *)&(auVar9) + 0)),0);
*(uint32_t *)&auVar10 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar9) + 0)),8));
    UVar1.ForegroundColor.Data.Getter.Callee = (void *)(int)uVar3;
    UVar1.ForegroundColor.Data.Getter.CallbackFunction =
         (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar3 >> 0x20);
    UVar1.ForegroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar10));
    UVar1.ForegroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar10)+4));
    UVar1.ForegroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar10)+8));
    UVar1.ForegroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar10) + 12));
    UVar1.ForegroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar10) + 16));
    UVar1.ForegroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar10) + 20));
    UVar1.ForegroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar10) + 24));
    UVar1.ForegroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar10) + 28));
    UVar1.ForegroundColor.IsValidData = (bool)auVar9[0x28];
    (*(uint32_t *)((char *)&(UVar1.ForegroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar9) + 41));
    uVar3 = SUB408((*(uint32_t *)((char *)&(auVar11) + 0)),0);
*(uint32_t *)&auVar10 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar11) + 0)),8));
    UVar1.BackgroundColor.Data.Getter.Callee = (void *)(int)uVar3;
    UVar1.BackgroundColor.Data.Getter.CallbackFunction =
         (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar3 >> 0x20);
    UVar1.BackgroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar10));
    UVar1.BackgroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar10)+4));
    UVar1.BackgroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar10)+8));
    UVar1.BackgroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar10) + 12));
    UVar1.BackgroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar10) + 16));
    UVar1.BackgroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar10) + 20));
    UVar1.BackgroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar10) + 24));
    UVar1.BackgroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar10) + 28));
    UVar1.BackgroundColor.IsValidData = (bool)auVar11[0x28];
    (*(uint32_t *)((char *)&(UVar1.BackgroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar11) + 41));
    UVar1.TextColor.Data.Getter.Callee = (void *)(int)(*(uint64_t *)((char *)&(in_stack_fffffd4c) + 284));
    UVar1.TextColor.Data.Getter.CallbackFunction =
         (_func___cdecl_Color_void_ptr *)(int)((ulonglong)(*(uint64_t *)((char *)&(in_stack_fffffd4c) + 284)) >> 0x20);
    UVar1.TextColor.Data.Value._pad_0x0_0 = (*(uint32_t *)((char *)&(in_stack_fffffd4c) + 292));
    UVar1.TextColor.Data.Value._pad_0x4_1 = (*(uint32_t *)((char *)&(in_stack_fffffd4c) + 296));
    UVar1.TextColor.Data.Value._pad_0x8_2 = (*(uint32_t *)((char *)&(in_stack_fffffd4c) + 300));
    UVar1.TextColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(in_stack_fffffd4c) + 304));
    UVar1.TextColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(in_stack_fffffd4c) + 308));
    UVar1.TextColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(in_stack_fffffd4c) + 312));
    UVar1.TextColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(in_stack_fffffd4c) + 316));
    (*(uint32_t *)((char *)&(UVar1.TextColor) + 40)) = (uint32_t)(uintptr_t)(param_1);
    UIWidget__UIWidget(this_00,UVar1);
    this_00->_pad_0x0_0 = (int)&vftable_262;
    this_00[1]._pad_0x0_0 = (int)this;
    UIAttributes___UIAttributes(&local_164);
  }
  return (UIWidget *)0x0;
}

//==== 0060ee60 BuildModels_0060ee60 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  RadioisotopeThermoelectricGeneratorModule__BuildModels(void) */

void 
RadioisotopeThermoelectricGeneratorModule__BuildModels
          (RadioisotopeThermoelectricGeneratorModule *this)

{
  int *piVar1;
  double *pdVar2;
  Material *pMVar3;
  int iVar4;
  Quaternion_L_double_G_ QVar5;
  int iVar6;
  bool bVar7;
  GameModel *pGVar8;
  ReferenceControllerRegistry *pRVar9;
  ReferenceController *pRVar10;
  undefined4 *puVar11;
  VertexBufferObject *pVVar12;
  int iVar13;
  float10 fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double dVar20;
  GameModel *pGVar21;
  GameModel *pGStack_74;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  double local_60;
  undefined1 auStack_58 [16];
  TransformStack TStack_45;
  uint local_44;
  
  *(uint32_t *)&local_44 = __security_cookie ^ (uint)&pGStack_74;
  local_60 = (double)CONCAT44((*(uint32_t*)((char*)&(local_60)+4)),this);
  local_70 = (this->Thermocouple).Length_m * 0.5;
  fVar14 = (float10)(**(code **)(this->_pad_0x0_0 + 0xa8))();
  local_70 = (double)((float10)local_70 - fVar14 * (float10)0.5);
  Graphics__Translate(0.0,0.0,local_70 / 1000.0);
  Graphics__TransformStack__TransformStack(&TStack_45,Style__Default);
  pRVar10 = (ReferenceController *)0x54442d18;
  uVar16 = 0x3fe921fb;
  uVar18 = 0;
  uVar19 = 0;
  libm_sse2_sin_precise(0.0);
  (*(uint32_t*)((char*)&(auStack_58)+8)) = uVar18;
  (*(uint64_t*)&(auStack_58)) = (double)CONCAT44(uVar16,pRVar10) * 0.0;
  (*(uint32_t *)((char *)&(auStack_58) + 12)) = uVar19;
  uVar15 = 0x54442d18;
  uVar17 = 0x3fe921fb;
  uStack_68 = uVar18;
  uStack_64 = uVar19;
  (*(uint32_t*)&(local_70)) = (uint32_t)(uintptr_t)(pRVar10);
  (*(uint32_t*)((char*)&(local_70)+4)) = uVar16;
  libm_sse2_cos_precise(0.0);
  QVar5.Y = (*(uint32_t*)((char*)&(local_70)+4));
  *(uint32_t *)&QVar5.X = (uint32_t)(uintptr_t)((ReferenceController *)local_70);
  QVar5.Y = (*(uint32_t*)&(auStack_58));
  QVar5.Z = (*(uint32_t*)((char*)&(auStack_58)+4));
  QVar5.Z = (*(uint32_t*)&(auStack_58));
  QVar5.W = (*(uint32_t*)((char*)&(auStack_58)+4));
  QVar5.W = uVar15;
  (*(uint32_t *)((char *)&(QVar5.W) + 4)) = uVar17;
  Graphics__Rotate(QVar5);
  pGVar8 = (GameModel *)(uintptr_t)(port_op_new(0xb8));
  if (pGVar8 == (GameModel *)0x0) {
    pGVar8 = (GameModel *)0x0;
  }
  else {
    pGVar8 = (GameModel *)
             GameModel__GameModel
                       (pGVar8,*(Material * *)&(this->Thermocouple).CachedColdTemperature_K,
                        (Material *)0x0,({ __typeof__(((ulonglong)(uVar17 & 0xffffff00) << 0x20)) _t_ = ((ulonglong)(uVar17 & 0xffffff00) << 0x20); *(Maybe_L_int_G_ *)&_t_; }));
    if (pGVar8 != (GameModel *)0x0) goto LAB_0060ef83;
  }
  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl",
                  0xd4,"NewPointer",(char *)0x0);
  DebugBreak();
LAB_0060ef83:
  pGVar21 = pGVar8;
  pRVar9 = util__ReferenceControllerRegistry__Get();
  pRVar10 = util__ReferenceControllerRegistry__Register(pRVar9,pGVar21);
  if (pRVar10 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(pRVar10);
  }
  pMVar3 = (this->FuelPellet).Fuel;
  pGStack_74 = (GameModel *)((int)&pMVar3->_pad_0x0_0 + 1);
  util__Darray_L_util__SharedPtr_L_GameModel_G___G___SetSize
            ((Darray_L_util__SharedPtr_L_GameModel_G___G_ *)&(this->FuelPellet)._pad_0x8_2,
             (int *)&pGStack_74);
  iVar6 = (*(uint32_t*)&(local_60));
  bVar7 = util__Darray_L_util__SharedPtr_L_GameModel_G___G___CheckSize
                    ((Darray_L_util__SharedPtr_L_GameModel_G___G_ *)((*(uint32_t*)&(local_60)) + 0x58),(int)pMVar3);
  if (bVar7) {
    iVar13 = *(int *)(iVar6 + 0x60);
    iVar4 = *(int *)(iVar6 + 0x5c);
    pGStack_74 = *(GameModel **)(iVar4 + -8 + iVar13 * 8);
    (*(uint32_t*)&(local_70)) = (uint32_t)(uintptr_t)(*(ReferenceController **)(iVar4 + -4 + iVar13 * 8));
    *(GameModel **)(iVar4 + -8 + iVar13 * 8) = pGVar8;
    *(ReferenceController **)(iVar4 + -4 + iVar13 * 8) = pRVar10;
    if (pRVar10 != (ReferenceController *)0x0) {
      util__ReferenceController__AddStrongReference(pRVar10);
    }
    if (((ReferenceController *)local_70 != (ReferenceController *)0x0) &&
       (bVar7 = util__ReferenceController__ReleaseStrongReference((ReferenceController *)local_70),
       bVar7)) {
      if (pGStack_74 != (GameModel *)0x0) {
        GameModel___scalar_deleting_destructor(pGStack_74,1);
      }
      pGVar21 = pGStack_74;
      pRVar9 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar9,pGVar21);
    }
  }
  if ((pRVar10 != (ReferenceController *)0x0) &&
     (bVar7 = util__ReferenceController__ReleaseStrongReference(pRVar10), bVar7)) {
    if (pGVar8 != (GameModel *)0x0) {
      GameModel___scalar_deleting_destructor(pGVar8,1);
    }
    pRVar9 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar9,pGVar8);
  }
  puVar11 = (undefined4 *)(**(code **)(*(int *)(iVar6 + 0x58) + 8))();
  iVar6 = (*(uint32_t*)&(local_60));
  pGVar8 = (GameModel *)*puVar11;
  piVar1 = (int *)((*(uint32_t*)&(local_60)) + 0x80);
  pdVar2 = (double *)((*(uint32_t*)&(local_60)) + 0x88);
  local_60 = *(double *)((*(uint32_t*)&(local_60)) + 0x90);
  dVar20 = (*pdVar2 / *(double *)(*piVar1 + 0x30)) / (local_60 * 3.141592653589793);
  libm_sse2_sqrt_precise(0.0);
  local_70 = dVar20 + *(double *)(iVar6 + 0xb0);
  pVVar12 = GameModel__GetVertexObject(pGVar8);
  iVar13 = GetUniversalRadialSegmentation(local_70);
  FillChamferedCylinder(local_70 / 1000.0,local_60 / 1000.0,0.1,iVar13,pVVar12);
  Graphics__TransformStack___TransformStack(&TStack_45);
  local_70 = *(double *)(iVar6 + 0x90);
  dVar20 = TurbopumpSubModule__GetLength_m((TurbopumpSubModule *)(iVar6 + 0x110));
  local_70 = dVar20 * 0.5 + local_70 * 0.5;
  Graphics__Translate(0.0,0.0,local_70 / 1000.0);
  TurbopumpSubModule__BuildModels
            ((TurbopumpSubModule *)(iVar6 + 0x110),
             (Darray_L_util__SharedPtr_L_GameModel_G___G_ *)(iVar6 + 0x58));
  return;
}

//==== 0060f360 GetDecimalPropertyBoundaries_0060f360 ====


/* public: virtual class util__Maybe_L_structutil__Range_L_double_G__G_ 
   RadioisotopeThermoelectricGeneratorModule__GetDecimalPropertyBoundaries(struct util__ClassMember
   const &)const  */

void 
RadioisotopeThermoelectricGeneratorModule__GetDecimalPropertyBoundaries
          (RadioisotopeThermoelectricGeneratorModule *this,ClassMember *param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  double dVar4;
  undefined4 *in_stack_00000008;
  char *pcStack_14;
  int iStack_10;
  char *pcStack_c;
  int iStack_8;
  
  if ((int)in_stack_00000008[1] < 1) {
    puVar2 = (undefined1 *)(&cde_l2_0b2b1c9f_NullString);
  }
  else {
    puVar2 = (undefined1 *)*in_stack_00000008;
  }
  for (pcVar1 = "ExitTemperature_K";
      (pcVar1[(int)(puVar2 + -0x92beb4)] != '\0' || (*pcVar1 != '\0')); pcVar1 = pcVar1 + 1) {
    if (pcVar1[(int)(puVar2 + -0x92beb4)] != *pcVar1) {
      (param_1->Name).Data = (char *)0x0;
      (param_1->Name).Capacity = 0;
      (param_1->Name).Length = 0;
      *(undefined4 *)&param_1->Type = 0;
      *(undefined1 *)&param_1->Offset = 0;
      return;
    }
  }
  iVar3 = *(int *)&(this->Turbopump).PumpRadius_m;
  if (iVar3 == 0) {
    dVar4 = 0.0;
  }
  else {
    dVar4 = *(double *)(iVar3 + 0x98);
  }
  pcVar1 = (char *)0x0;
  iVar3 = 0x40490000;
  if (50.0 <= dVar4) {
    pcVar1 = (char *)(uintptr_t)(SUB84(dVar4,0));
    iVar3 = (int)((ulonglong)dVar4 >> 0x20);
  }
  pcStack_c = (char *)0x0;
  iStack_8 = 0x40b38800;
  pcStack_14 = pcVar1;
  iStack_10 = iVar3;
  if (5000.0 <= (double)CONCAT44(iVar3,pcVar1) && (double)CONCAT44(iVar3,pcVar1) != 5000.0) {
    pcStack_14 = (char *)0x0;
    iStack_10 = 0x40b38800;
    pcStack_c = pcVar1;
    iStack_8 = iVar3;
  }
  (param_1->Name).Data = pcStack_14;
  (param_1->Name).Capacity = iStack_10;
  (param_1->Name).Length = (int)pcStack_c;
  *(int *)&param_1->Type = iStack_8;
  *(undefined1 *)&param_1->Offset = 1;
  return;
}





//==== 0060f410 GetPointerPropertyChoices_0060f410 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   BarrelCoolingSubModule__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

ClassMember * 
BarrelCoolingSubModule__GetPointerPropertyChoices
          (BarrelCoolingSubModule *this,ClassMember *param_1,SerializationManagerInterface *param_2)

{
  char *pcVar1;
  SerializationManagerInterface SVar2;
  int in_stack_0000000c;
  
  if (*(int *)&param_2[1] < 1) {
    SVar2 = *(SerializationManagerInterface *)&cde_l2_0b2b1c9f_NullString;
  }
  else {
    SVar2 = *param_2;
  }
  for (pcVar1 = "Coolant"; (pcVar1[(int)(*(int *)&SVar2 + -0x925310)] != '\0' || (*pcVar1 != '\0'));
      pcVar1 = pcVar1 + 1) {
    if (pcVar1[(int)(*(int *)&SVar2 + -0x925310)] != *pcVar1) {
      (param_1->Name).Data =
           (char *)&vftable_85;
      (param_1->Name).Capacity = 0;
      (param_1->Name).Length = 0;
      *(undefined4 *)&param_1->Type = 0;
      return param_1;
    }
  }
  GetMaterials((DataParser *)param_1,in_stack_0000000c,true);
  return param_1;
}





//==== 0060f490 GetReflectionInfo_0060f490 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * 
   RadioisotopeThermoelectricGeneratorModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * 
RadioisotopeThermoelectricGeneratorModule__GetReflectionInfo
          (RadioisotopeThermoelectricGeneratorModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_6950f5c1__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_6950f5c1__thread_safe_static_guard_0__);
    if ( cde_l2_6950f5c1__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_9ff91a15_ReflectionInfo) =
           &vftable_261;
      _Init_thread_footer(& cde_l2_6950f5c1__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_9ff91a15_ReflectionInfo;
}





//==== 0060f4a0 scalar_deleting_destructor_0060f4a0 ====


/* public: virtual void * __thiscall RadioisotopeThermoelectricGeneratorModule:: 0 scalardeletingdestructor(unsigned int) */

void * 
RadioisotopeThermoelectricGeneratorModule___scalar_deleting_destructor
          (RadioisotopeThermoelectricGeneratorModule *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined ** *)&(this->Turbopump).RotationalSpeed_RPM = &vftable_5;
  pvVar1 = *(void **)((int)&(this->Turbopump).RotationalSpeed_RPM + 4);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    *(undefined4 *)((int)&(this->Turbopump).RotationalSpeed_RPM + 4) = 0;
  }
  *(undefined ** *)&(this->Cooler).CachedDimensions_m.Height = &vftable_5;
  pvVar1 = *(void **)((int)&(this->Cooler).CachedDimensions_m.Height + 4);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    *(undefined4 *)((int)&(this->Cooler).CachedDimensions_m.Height + 4) = 0;
  }
  *(undefined ** *)&(this->Thermocouple).CachedArea_m2 = &vftable_5;
  pvVar1 = *(void **)((int)&(this->Thermocouple).CachedArea_m2 + 4);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    *(undefined4 *)((int)&(this->Thermocouple).CachedArea_m2 + 4) = 0;
  }
  *(undefined ** *)&(this->FuelPellet).Height_m = &vftable_5;
  pvVar1 = *(void **)((int)&(this->FuelPellet).Height_m + 4);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    *(undefined4 *)((int)&(this->FuelPellet).Height_m + 4) = 0;
  }
  Module___Module((Module *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x158);
  }
  return this;
}





//==== 0060f560 GetTypeName_0060f560 ====


/* public: virtual class util__Str_L_char_G_ 
   RadioisotopeThermoelectricGeneratorModule__ReflectionInfoStruct_class_RadioisotopeThermoelectricGeneratorModule___GetTypeName(void)const  */

Str_L_char_G_ * 
RadioisotopeThermoelectricGeneratorModule__ReflectionInfoStruct_class_RadioisotopeThermoelectricGeneratorModule___GetTypeName
          (ReflectionInfoStruct_L_class_RadioisotopeThermoelectricGeneratorModule_G_ *this,
          Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"RadioisotopeThermoelectricGeneratorModule");
  return __return_storage_ptr__;
}





//==== 0060f580 GetMembers_0060f580 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   RadioisotopeThermoelectricGeneratorModule__ReflectionInfoStruct_class_RadioisotopeThermoelectricGeneratorModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
RadioisotopeThermoelectricGeneratorModule__ReflectionInfoStruct_class_RadioisotopeThermoelectricGeneratorModule___GetMembers
          (ReflectionInfoStruct_L_class_RadioisotopeThermoelectricGeneratorModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_fb3a530b__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_fb3a530b__thread_safe_static_guard_0__),
      cde_l2_fb3a530b__thread_safe_static_guard_0__ == -1)) {
     cde_l2_5da0ad7e_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_fb3a530b__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_5da0ad7e_Count);
  iVar3 = 0;
  if (0 <  cde_l2_5da0ad7e_Count) {
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
    } while (iVar3 <  cde_l2_5da0ad7e_Count);
  }
  return in_stack_00000004;
}





//==== 0060f6c0 GetMember_0060f6c0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   RadioisotopeThermoelectricGeneratorModule__ReflectionInfoStruct_class_RadioisotopeThermoelectricGeneratorModule___GetMember(class util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
RadioisotopeThermoelectricGeneratorModule__ReflectionInfoStruct_class_RadioisotopeThermoelectricGeneratorModule___GetMember
          (ReflectionInfoStruct_L_class_RadioisotopeThermoelectricGeneratorModule_G_ *this,
          Str_L_char_G_ *param_1)

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
        cde_l2_efba2d21__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_efba2d21__thread_safe_static_guard_0__),
      cde_l2_efba2d21__thread_safe_static_guard_0__ == -1)) {
     cde_l2_f7331eb5_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_efba2d21__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_f7331eb5_Count) {
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
LAB_0060f74d:
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
          if (cVar3 == '\0') goto LAB_0060f74d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_f7331eb5_Count);
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





//==== 0060f860 GetFactory_0060f860 ====


/* public: virtual class util__Reflectable * (__cdecl*
   RadioisotopeThermoelectricGeneratorModule__ReflectionInfoStruct_class_RadioisotopeThermoelectricGeneratorModule___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall RadioisotopeThermoelectricGeneratorModule__ReflectionInfoStruct_class_RadioisotopeThermoelectricGeneratorModule___GetFactory
          (ReflectionInfoStruct_L_class_RadioisotopeThermoelectricGeneratorModule_G_ *this)

{
  return StaticFactory;
}





//==== 0060f870 Darray_util__tuple3_util__Vec2_int__util__Str_char__void____cdecl___void____ ====


/* public: virtual  Darray_L_structutil__tuple3_L_struct_util__Vec2_L_int_G__Cclassutil__Str_L_char_G__Cvoid___cdecl_P__void__G__G___dtor(void) */

void 
util__Darray_struct_util__tuple3_struct_util__Vec2_int__class_util__Str_char__void____cdecl___void_______Darray_struct_util__tuple3_struct_util__Vec2_int__class_util__Str_char__void____cdecl___void(Darray_L_struct_util__tuple3_L_struct_util__Vec2_L_int_G__Cclass_util__Str_L_char_G__Cvoid____cdecl_P__void__G___G_
           *this)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = *(int *)(this + 4);
  *(undefined ***)this = &vftable_263;
  if (iVar4 != 0) {
    piVar1 = (int *)(iVar4 + -4);
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      iVar4 = 0;
    }
    else {
      puVar5 = (undefined4 *)(iVar4 + 8 + iVar3 * 0x18);
      do {
        puVar2 = puVar5 + -6;
        puVar5 = puVar5 + -6;
        iVar3 = iVar3 + -1;
        if ((void *)*puVar2 != (void *)0x0) {
          port_op_delete((void *)*puVar2);
          *puVar5 = 0;
        }
      } while (iVar3 != 0);
      iVar4 = *piVar1;
    }
    port_op_delete(piVar1,iVar4 * 0x18 + 4);
  }
  *(undefined ***)this = (undefined **)(&vftable);
  *(undefined4 *)(this + 4) = 0;
  return;
}





//==== 0060f8f0 scalar_deleting_destructor_0060f8f0 ====


/* public: virtual void * __thiscall util__Darray_L_structutil__tuple3_L_structutil__Vec2_L_int_G__Cclass_util__Str_L_char_G__Cvoid___cdecl_P__void__G__G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_util__tuple3_struct_util__Vec2_int__class_util__Str_char__void____cdecl___void_______scalar_deleting_destructor__o2
          (Darray_L_struct_util__tuple3_L_struct_util__Vec2_L_int_G__Cclass_util__Str_L_char_G__Cvoid____cdecl_P__void__G___G_
           *this,uint param_1)

{
  util__Darray_struct_util__tuple3_struct_util__Vec2_int__class_util__Str_char__void____cdecl___void_______scalar_deleting_destructor(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 0060f920 Add_0060f920 ====


/* public: bool  util__Darray_L_structutil__tuple3_L_structutil__Vec2_L_int_G__Cclass_util__Str_L_char_G__Cvoid___cdecl_P__void__G__G___Add(struct util__tuple3_L_structutil__Vec2_L_int_G__Cclass_util__Str_L_char_G__Cvoid___cdecl_P__void__G_ const &) */

bool 
util__Darray_struct_util__tuple3_struct_util__Vec2_int__class_util__Str_char__void____cdecl___void______Add(Darray_L_struct_util__tuple3_L_struct_util__Vec2_L_int_G__Cclass_util__Str_L_char_G__Cvoid____cdecl_P__void__G___G_
    *this,tuple3_L_struct_util__Vec2_L_int_G__Cclass_util__Str_L_char_G__Cvoid____cdecl_P__void__G_ *param_1)

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
  iVar1 = *(int *)(this + 4) + *(int *)(this + 8) * 0x18;
  *(undefined4 *)(iVar1 + -0x18) = *(undefined4 *)param_1;
  *(undefined4 *)(iVar1 + -0x14) = *(undefined4 *)(param_1 + 4);
  util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(iVar1 + -0x10),(Str_L_char_G_ *)(param_1 + 8));
  *(undefined4 *)(iVar1 + -4) = *(undefined4 *)(param_1 + 0x14);
  return true;
}





//==== 0060f990 CheckSize_0060f990 ====


/* private: bool  util__Darray_L_structutil__tuple3_L_structutil__Vec2_L_int_G__Cclass_util__Str_L_char_G__Cvoid___cdecl_P__void__G__G___CheckSize(int) */

bool 
util__Darray_struct_util__tuple3_struct_util__Vec2_int__class_util__Str_char__void____cdecl___void______CheckSize(Darray_L_struct_util__tuple3_L_struct_util__Vec2_L_int_G__Cclass_util__Str_L_char_G__Cvoid____cdecl_P__void__G___G_
          *this,int param_1)

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
  uVar4 = -(uint)((int)((ulonglong)uVar5 * 0x18 >> 0x20) != 0) | (uint)((ulonglong)uVar5 * 0x18);
  puVar2 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
  if (puVar2 == (uint *)0x0) {
    puStack_c = (uint *)0x0;
  }
  else {
    *puVar2 = uVar5;
    puStack_c = puVar2 + 1;
    if (uVar5 != 0) {
      puVar3 = puVar2 + 5;
      puVar2 = puStack_c;
      do {
        *puVar2 = 0;
        puVar2 = puVar2 + 6;
        puVar3[-3] = 0;
        puVar3[-2] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        uVar5 = uVar5 - 1;
        puVar3 = puVar3 + 6;
      } while (uVar5 != 0);
    }
  }
  puVar2 = *(uint **)(this + 4);
  if (puVar2 != (uint *)0x0) {
    puVar3 = puStack_c + *(int *)(this + 8) * 6;
    puVar6 = puVar2;
    puVar7 = puStack_c;
    if (puVar2 != puVar2 + param_1 * 6) {
      do {
        if (puVar7 == puVar3) break;
        *puVar7 = *puVar6;
        puVar7[1] = puVar6[1];
        util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar7 + 2),(Str_L_char_G_ *)(puVar6 + 2));
        puVar2 = puVar6 + 5;
        puVar6 = puVar6 + 6;
        puVar7[5] = *puVar2;
        puVar7 = puVar7 + 6;
        puVar2 = *(uint **)(this + 4);
      } while (puVar6 != puVar2 + param_1 * 6);
    }
    if (puVar2 != (uint *)0x0) {
      uVar4 = puVar2[-1];
      if (uVar4 == 0) {
        uVar4 = 0;
      }
      else {
        puVar3 = puVar2 + uVar4 * 6 + 2;
        do {
          puVar6 = puVar3 + -6;
          puVar3 = puVar3 + -6;
          uVar4 = uVar4 - 1;
          if ((void *)*puVar6 != (void *)0x0) {
            port_op_delete((void *)*puVar6);
            *puVar3 = 0;
          }
        } while (uVar4 != 0);
        uVar4 = puVar2[-1];
      }
      port_op_delete(puVar2 + -1,uVar4 * 0x18 + 4);
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(uint **)(this + 4) = puStack_c;
  return bStack_5;
}





//==== 0060fb90 Clear_0060fb90 ====


/* public: virtual void  util__Darray_L_structutil__tuple3_L_structutil__Vec2_L_int_G__Cclass_util__Str_L_char_G__Cvoid___cdecl_P__void__G__G___Clear(void) */

void 
util__Darray_struct_util__tuple3_struct_util__Vec2_int__class_util__Str_char__void____cdecl___void______Clear(Darray_L_struct_util__tuple3_L_struct_util__Vec2_L_int_G__Cclass_util__Str_L_char_G__Cvoid____cdecl_P__void__G___G_
      *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 0060fbb0 Render_0060fbb0 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void  ModuleDiagram_class_RadioisotopeThermoelectricGeneratorModule___Render(void)const  */

void 
ModuleDiagram_class_RadioisotopeThermoelectricGeneratorModule___Render
          (ModuleDiagram_L_class_RadioisotopeThermoelectricGeneratorModule_G_ *this)

{
  undefined8 stack0xfffffffc;
  Manager *pMVar1;
  NormalShader *pNVar2;
  Vec2_L_int_G_ VVar3;
  ShaderStack SStack_9;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pNVar2 = NormalShader__GetStatic();
  Graphics__ShaderStack__ShaderStack(&SStack_9,(Shader *)pNVar2);
  pMVar1 = *(Manager **)(this + 8);
  UIWidget__GetTrueSize((UIWidget *)this,&VVar3);
  RadioisotopeThermoelectricGeneratorModule__RenderDiagram
            (*(RadioisotopeThermoelectricGeneratorModule **)(this + 0x168),pMVar1,
             *(Vec2_L_int_G_ *)VVar3.X);
  Graphics__ShaderStack___ShaderStack(&SStack_9);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00610230 SetAll_00610230 ====


/* public: virtual void  util__Darray_L_structutil__tuple3_L_structutil__Vec2_L_int_G__Cclass_util__Str_L_char_G__Cvoid___cdecl_P__void__G__G___SetAll(struct util__tuple3_L_structutil__Vec2_L_int_G__Cclass_util__Str_L_char_G__Cvoid___cdecl_P__void__G_ const &) */

void 
util__Darray_struct_util__tuple3_struct_util__Vec2_int__class_util__Str_char__void____cdecl___void______SetAll(Darray_L_struct_util__tuple3_L_struct_util__Vec2_L_int_G__Cclass_util__Str_L_char_G__Cvoid____cdecl_P__void__G___G_
       *this,tuple3_L_struct_util__Vec2_L_int_G__Cclass_util__Str_L_char_G__Cvoid____cdecl_P__void__G_ *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this + 4);
  if (puVar1 != puVar1 + *(int *)(this + 8) * 6) {
    do {
      *puVar1 = *(undefined4 *)param_1;
      puVar1[1] = *(undefined4 *)(param_1 + 4);
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar1 + 2),(Str_L_char_G_ *)(param_1 + 8));
      puVar1[5] = *(undefined4 *)(param_1 + 0x14);
      puVar1 = puVar1 + 6;
    } while (puVar1 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x18));
  }
  return;
}





//==== 00610290 SetSize_00610290 ====


/* private: void  util__Darray_L_structutil__tuple3_L_structutil__Vec2_L_int_G__Cclass_util__Str_L_char_G__Cvoid___cdecl_P__void__G__G___SetSize(int const &) */

void 
util__Darray_struct_util__tuple3_struct_util__Vec2_int__class_util__Str_char__void____cdecl___void______SetSize(Darray_L_struct_util__tuple3_L_struct_util__Vec2_L_int_G__Cclass_util__Str_L_char_G__Cvoid____cdecl_P__void__G___G_
        *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  Str_L_char_G_ SStack_14;
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
  if ((iVar4 < *(int *)(this + 8)) && (iVar2 = *(int *)(this + 4), iVar2 != 0)) {
    puVar3 = (undefined4 *)(iVar2 + iVar4 * 0x18);
    if (puVar3 != (undefined4 *)(iVar2 + *(int *)(this + 8) * 0x18)) {
      do {
        SStack_14.Length = 0;
        SStack_14.Data = (char *)0x0;
        SStack_14.Capacity = 0;
        uStack_8 = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar3 + 2),&SStack_14);
        puVar3[5] = 0;
        puVar3 = puVar3 + 6;
      } while (puVar3 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x18));
    }
    *(int *)(this + 8) = iVar4;
    return;
  }
  *(int *)(this + 8) = iVar4;
  return;
}





//==== 00610370 StaticFactory_00610370 ====

/* public: static class util__Reflectable * __cdecl
   RadioisotopePelletSubModule__ReflectionInfoStruct_class_RadioisotopePelletSubModule___StaticFactory(void) */

Reflectable * __cdecl
RadioisotopePelletSubModule__ReflectionInfoStruct_class_RadioisotopePelletSubModule___StaticFactory__o2(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x28));
  if (pRVar1 != (Reflectable *)0x0) {
    pRVar1->_pad_0x0_0 = 0;
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1[1]._pad_0x0_0 = 0;
    pRVar1[1].Name.Data = (char *)0x0;
    pRVar1[1].Name.Capacity = 0;
    pRVar1[1].Name.Length = 0;
    pRVar1[2]._pad_0x0_0 = 0;
    pRVar1[2].Name.Data = (char *)0x0;
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_259;
  }
  return (Reflectable *)0x0;
}

//==== 006103b0 StaticFactory_006103b0 ====

/* public: static class util__Reflectable * __cdecl
   RadioisotopeThermoelectricGeneratorModule__ReflectionInfoStruct_class_RadioisotopeThermoelectricGeneratorModule___StaticFactory(void) */

Reflectable * __cdecl
RadioisotopeThermoelectricGeneratorModule__ReflectionInfoStruct_class_RadioisotopeThermoelectricGeneratorModule___StaticFactory__o2(void)

{
  Module *this;
  
  this = (Module *)(uintptr_t)(port_op_new(0x158));
  if (this != (Module *)0x0) {
    memset(this,0,0x158);
    Module__Module(this);
    this->_pad_0x0_0 =
         (int)&vftable_for_EditorReflectable__21;
    *(undefined4 *)&(this->GetTotalPowerUsage_W_MemoizedValue).field_0xc = (undefined4)(uintptr_t)vftable_for_util__RTTIBaseClass__20;
    *(undefined4 *)&this[1].ModuleMemoizationHandlerInstance = 0;
    *(undefined4 *)&this[1].GetTotalPowerUsage_W_MemoizedValue.Data = 0;
    *(undefined4 *)((int)&this[1].GetTotalPowerUsage_W_MemoizedValue.Data + 4) = 0;
    this[1].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity =
         (int)&vftable_259;
  *(undefined4 *)((char *)&this[1] + 0x4c) = 0;
    this[2]._pad_0x0_0 = 0;
    this[2]._pad_0x4_1 = 0;
    *(undefined ***)&this[1].UsesCustomName = (undefined **)(&vftable_257);
    this[2].Models.Data = (SharedPtr_L_GameModel_G_ *)0x0;
    this[2].Models.Size = 0;
    this[2].Models.Capacity = 0;
    this[2].Models._pad_0x0_0 = (int)&vftable_207;
    this[3]._pad_0x0_0 = 0;
    this[3]._pad_0x4_1 = 0;
    this[3]._pad_0x8_2 = 0;
    this[3]._pad_0xc_3 = 0;
    TurbopumpSubModule__TurbopumpSubModule
              ((TurbopumpSubModule *)
               &this[3].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity);
    return (Reflectable *)this;
  }
  return (Reflectable *)0x0;
}

//==== 00610480 StaticGetMemberByIndex_00610480 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   RadioisotopePelletSubModule__ReflectionInfoStruct_class_RadioisotopePelletSubModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
RadioisotopePelletSubModule__ReflectionInfoStruct_class_RadioisotopePelletSubModule___StaticGetMemberByIndex(ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_892a72b6__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_892a72b6__thread_safe_static_guard_0__);
    if ( cde_l2_892a72b6__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_0a69c798_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00971be4 = 0;
      _DAT_00971be8 = 0;
      _DAT_00971bec = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971bf0,"Unused");
      _DAT_00971bfc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971c00,"Fuel");
      _DAT_00971c0c = 8;
      _DAT_00971c10 = 0x10;
      _DAT_00971c14 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971c18,"Material");
      _DAT_00971c24 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971c28,"Mass_kg");
      _DAT_00971c34 = 4;
      _DAT_00971c38 = 0x18;
      _DAT_00971c3c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971c40,"double");
      _DAT_00971c4c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971c50,"Height_m");
      _DAT_00971c5c = 4;
      _DAT_00971c60 = 0x20;
      _DAT_00971c64 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971c68,"double");
      _DAT_00971c74 = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_RadioisotopePelletSubModule__ReflectionInfoStruct_class_RadioisotopePelletSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_892a72b6__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_0a69c798_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_00971be4 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_00971be8 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_00971bec + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_00971bf0 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_00971bfc)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_00971bfd)[iVar1];
  return __return_storage_ptr__;
}





//==== 00610640 StaticGetMemberByIndex_00610640 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   RadioisotopeThermoelectricGeneratorModule__ReflectionInfoStruct_class_RadioisotopeThermoelectricGeneratorModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
RadioisotopeThermoelectricGeneratorModule__ReflectionInfoStruct_class_RadioisotopeThermoelectricGeneratorModule___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_8cf30ab8__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_8cf30ab8__thread_safe_static_guard_0__);
    if ( cde_l2_8cf30ab8__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_a08bfb87_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_009719a4 = 0;
      _DAT_009719a8 = 0;
      _DAT_009719ac = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009719b0,"Unused");
      _DAT_009719bc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009719c0,"SteamWorkshopID");
      _DAT_009719cc = 6;
      _DAT_009719d0 = 0x10;
      _DAT_009719d4 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009719d8,"AStr");
      _DAT_009719e4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009719e8,"Description");
      _DAT_009719f4 = 6;
      _DAT_009719f8 = 0x20;
      _DAT_009719fc = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971a00,"AStr");
      _DAT_00971a0c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971a10,"UsesCustomName");
      _DAT_00971a1c = 1;
      _DAT_00971a20 = 0x68;
      _DAT_00971a24 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971a28,"bool");
      _DAT_00971a34 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971a38,"FuelPellet");
      _DAT_00971a44 = 10;
      _DAT_00971a48 = 0x70;
      _DAT_00971a4c = 0x28;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971a50,"RadioisotopePelletSubModule");
      _DAT_00971a5c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971a60,"Thermocouple");
      _DAT_00971a6c = 10;
      _DAT_00971a70 = 0x98;
      _DAT_00971a74 = 0x38;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971a78,"ThermocoupleSubModule");
      _DAT_00971a84 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971a88,"ExitTemperature_K");
      _DAT_00971a94 = 4;
      _DAT_00971a98 = 0xd0;
      _DAT_00971a9c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971aa0,"double");
      _DAT_00971aac = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971ab0,"Cooler");
      _DAT_00971abc = 10;
      _DAT_00971ac0 = 0xd8;
      _DAT_00971ac4 = 0x30;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971ac8,"CylindricalCoolerSubModule");
      _DAT_00971ad4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971ad8,"Coolant");
      _DAT_00971ae4 = 8;
      _DAT_00971ae8 = 0x108;
      _DAT_00971aec = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971af0,"Material");
      _DAT_00971afc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971b00,"Turbopump");
      _DAT_00971b0c = 10;
      _DAT_00971b10 = 0x110;
      _DAT_00971b14 = 0x48;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971b18,"TurbopumpSubModule");
      _DAT_00971b24 = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_RadioisotopeThermoelectricGeneratorModule__ReflectionInfoStruct_class_RadioisotopeThermoelectricGeneratorModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_8cf30ab8__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_a08bfb87_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_009719a4 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_009719a8 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_009719ac + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_009719b0 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_009719bc)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_009719bd)[iVar1];
  return __return_storage_ptr__;
}





//==== 00610990 StaticGetMemberCount_00610990 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl RadioisotopePelletSubModule__ReflectionInfoStruct_class_RadioisotopePelletSubModule___StaticGetMemberCount(void) */

int __cdecl
RadioisotopePelletSubModule__ReflectionInfoStruct_class_RadioisotopePelletSubModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_ae63ffd8__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_ae63ffd8__thread_safe_static_guard_0__);
    if ( cde_l2_ae63ffd8__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_330067d0_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00971b3c = 0;
      _DAT_00971b40 = 0;
      _DAT_00971b44 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971b48,"Unused");
      _DAT_00971b54 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971b58,"Fuel");
      _DAT_00971b64 = 8;
      _DAT_00971b68 = 0x10;
      _DAT_00971b6c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971b70,"Material");
      _DAT_00971b7c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971b80,"Mass_kg");
      _DAT_00971b8c = 4;
      _DAT_00971b90 = 0x18;
      _DAT_00971b94 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971b98,"double");
      _DAT_00971ba4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971ba8,"Height_m");
      _DAT_00971bb4 = 4;
      _DAT_00971bb8 = 0x20;
      _DAT_00971bbc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971bc0,"double");
      _DAT_00971bcc = 0;
      atexit( private__static_int_const___cdecl_RadioisotopePelletSubModule__ReflectionInfoStruct_class_RadioisotopePelletSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_ae63ffd8__thread_safe_static_guard_0__);
    }
  }
  return 4;
}





//==== 00610b00 StaticGetMemberCount_00610b00 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl
   RadioisotopeThermoelectricGeneratorModule__ReflectionInfoStruct_class_RadioisotopeThermoelectricGeneratorModule___StaticGetMemberCount(void) */

int __cdecl
RadioisotopeThermoelectricGeneratorModule__ReflectionInfoStruct_class_RadioisotopeThermoelectricGeneratorModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_67e26b3e__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_67e26b3e__thread_safe_static_guard_0__);
    if ( cde_l2_67e26b3e__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_4d6528d8_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0097180c = 0;
      _DAT_00971810 = 0;
      _DAT_00971814 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971818,"Unused");
      _DAT_00971824 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971828,"SteamWorkshopID");
      _DAT_00971834 = 6;
      _DAT_00971838 = 0x10;
      _DAT_0097183c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971840,"AStr");
      _DAT_0097184c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971850,"Description");
      _DAT_0097185c = 6;
      _DAT_00971860 = 0x20;
      _DAT_00971864 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971868,"AStr");
      _DAT_00971874 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971878,"UsesCustomName");
      _DAT_00971884 = 1;
      _DAT_00971888 = 0x68;
      _DAT_0097188c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971890,"bool");
      _DAT_0097189c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009718a0,"FuelPellet");
      _DAT_009718ac = 10;
      _DAT_009718b0 = 0x70;
      _DAT_009718b4 = 0x28;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009718b8,"RadioisotopePelletSubModule");
      _DAT_009718c4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009718c8,"Thermocouple");
      _DAT_009718d4 = 10;
      _DAT_009718d8 = 0x98;
      _DAT_009718dc = 0x38;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009718e0,"ThermocoupleSubModule");
      _DAT_009718ec = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009718f0,"ExitTemperature_K");
      _DAT_009718fc = 4;
      _DAT_00971900 = 0xd0;
      _DAT_00971904 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971908,"double");
      _DAT_00971914 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971918,"Cooler");
      _DAT_00971924 = 10;
      _DAT_00971928 = 0xd8;
      _DAT_0097192c = 0x30;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971930,"CylindricalCoolerSubModule");
      _DAT_0097193c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971940,"Coolant");
      _DAT_0097194c = 8;
      _DAT_00971950 = 0x108;
      _DAT_00971954 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971958,"Material");
      _DAT_00971964 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971968,"Turbopump");
      _DAT_00971974 = 10;
      _DAT_00971978 = 0x110;
      _DAT_0097197c = 0x48;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971980,"TurbopumpSubModule");
      _DAT_0097198c = 0;
      atexit( private__static_int_const___cdecl_RadioisotopeThermoelectricGeneratorModule__ReflectionInfoStruct_class_RadioisotopeThermoelectricGeneratorModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_67e26b3e__thread_safe_static_guard_0__);
    }
  }
  return 10;
}





//==== 00610e10 StaticGetReflectionInfo_00610e10 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct RadioisotopePelletSubModule__ReflectionInfoStruct_L_class_RadioisotopePelletSubModule_G_ * __cdecl RadioisotopePelletSubModule__StaticGetReflectionInfo(void)
    */

ReflectionInfoStruct_L_class_RadioisotopePelletSubModule_G_ * __cdecl
RadioisotopePelletSubModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_dd210f3f__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_dd210f3f__thread_safe_static_guard_0__);
    if ( cde_l2_dd210f3f__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_2289c60a_ReflectionInfo) = &vftable_260;
      _Init_thread_footer(& cde_l2_dd210f3f__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_2289c60a_ReflectionInfo;
}





//==== 00610e70 StaticGetReflectionInfo_00610e70 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct RadioisotopeThermoelectricGeneratorModule__ReflectionInfoStruct_L_class_RadioisotopeThermoelectricGeneratorModule_G_ * __cdecl
   RadioisotopeThermoelectricGeneratorModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_RadioisotopeThermoelectricGeneratorModule_G_ * __cdecl
RadioisotopeThermoelectricGeneratorModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_6950f5c1__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_6950f5c1__thread_safe_static_guard_0__);
    if ( cde_l2_6950f5c1__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_9ff91a15_ReflectionInfo) =
           &vftable_261;
      _Init_thread_footer(& cde_l2_6950f5c1__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_9ff91a15_ReflectionInfo;
}





//==== 00610ed0 GetClassID_00610ed0 ====


/* public: virtual unsigned long __thiscall
   ThermoelectricFissionReactorModule__GetClassID(void)const  */

ulong __thiscall
ThermoelectricFissionReactorModule__GetClassID(ThermoelectricFissionReactorModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_484e10d3__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_484e10d3__thread_safe_static_guard_0__);
    if ( cde_l2_484e10d3__thread_safe_static_guard_0__ == -1) {
       cde_l2_eaade09d_ID = util__GetHash("ThermoelectricFissionReactorModule");
      _Init_thread_footer(& cde_l2_484e10d3__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_eaade09d_ID;
}





//==== 00610f30 GetGeneratedName_00610f30 ====

/* public: virtual class util__Str_L_char_G_ 
   ThermoelectricFissionReactorModule__GetGeneratedName(void)const  */

Str_L_char_G_ * 
ThermoelectricFissionReactorModule__GetGeneratedName
          (ThermoelectricFissionReactorModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined8 stack0xffffff54;
  Str_L_char_G_ SVar1;
  LocStr *pLVar2;
  Str_L_char_G_ *pSVar3;
  Str_L_char_G_ *pSVar4;
  Str_L_char_G_ *this_00;
  Str_L_char_G_ *pSVar5;
  float10 fVar6;
  char *in_stack_ffffff54;
  int in_stack_ffffff58;
  int iVar7;
  Str_L_char_G_ *__return_storage_ptr___00;
  void *local_88 [3];
  void *local_7c;
  void *local_70 [3];
  void *local_64;
  Str_L_char_G_ local_58;
  Str_L_char_G_ local_4c;
  Str_L_char_G_ local_40;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char(&local_58,"Powerplant ThermoReactor");
  util__Str_char___Str_char(&local_34,"Space");
  util__Str_char___Str_char(&local_28,"GetPowerGenerated_W()");
  local_1c.Data = (char *)0x0;
  local_1c.Capacity = 0;
  local_1c.Length = 0;
  local_10.Data = (char *)0x0;
  local_10.Capacity = 0;
  local_10.Length = 0;
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)local_88,&local_58,&local_1c);
  pSVar3 = util__LocStr__operator__o3(pLVar2);
  iVar7 = 0x610fbd;
  __return_storage_ptr___00 = __return_storage_ptr__;
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)local_70,&local_34,&local_10);
  pSVar4 = util__LocStr__operator__o3(pLVar2);
  pSVar5 = &local_40;
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff54,&local_28);
  fVar6 = (float10)(**(code **)(this->_pad_0x0_0 + 0x154))();
  SVar1.Capacity = iVar7;
  SVar1.Data = (char *)in_stack_ffffff58;
  SVar1.Length = (int)pSVar5;
  this_00 = Print(&local_4c,
                  (double)CONCAT44(in_stack_ffffff54,(int)((ulonglong)(double)fVar6 >> 0x20)),SVar1)
  ;
  pSVar5 = util__Str_char___operator(this_00,pSVar5,pSVar4);
  util__Str_char___operator(pSVar5,__return_storage_ptr___00,pSVar3);
  if (local_40.Data != (char *)0x0) {
    port_op_delete(local_40.Data);
    local_40.Data = (char *)0x0;
  }
  if (local_4c.Data != (char *)0x0) {
    port_op_delete(local_4c.Data);
    local_4c.Data = (char *)0x0;
  }
  if (local_64 != (void *)0x0) {
    port_op_delete(local_64);
    local_64 = (void *)0x0;
  }
  if (local_70[0] != (void *)0x0) {
    port_op_delete(local_70[0]);
    local_70[0] = (void *)0x0;
  }
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
    local_10.Data = (char *)0x0;
  }
  if (local_7c != (void *)0x0) {
    port_op_delete(local_7c);
    local_7c = (void *)0x0;
  }
  if (local_88[0] != (void *)0x0) {
    port_op_delete(local_88[0]);
    local_88[0] = (void *)0x0;
  }
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
    local_1c.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_58.Data != (char *)0x0) {
    port_op_delete(local_58.Data);
  }
  return __return_storage_ptr__;
}

//==== 00611110 GetShortName_00611110 ====

/* public: virtual class util__Str_L_char_G_ 
   TurboelectricFissionReactorModule__GetShortName(void)const  */

Str_L_char_G_ * 
TurboelectricFissionReactorModule__GetShortName
          (TurboelectricFissionReactorModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined8 stack0xffffff54;
  Str_L_char_G_ SVar1;
  LocStr *pLVar2;
  Str_L_char_G_ *pSVar3;
  Str_L_char_G_ *pSVar4;
  Str_L_char_G_ *this_00;
  Str_L_char_G_ *pSVar5;
  float10 fVar6;
  char *in_stack_ffffff54;
  int in_stack_ffffff58;
  int iVar7;
  Str_L_char_G_ *__return_storage_ptr___00;
  void *local_88 [3];
  void *local_7c;
  void *local_70 [3];
  void *local_64;
  Str_L_char_G_ local_58;
  Str_L_char_G_ local_4c;
  Str_L_char_G_ local_40;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char(&local_58,"Powerplant Reactor");
  util__Str_char___Str_char(&local_34,"Space");
  util__Str_char___Str_char(&local_28,"GetPowerGenerated_W()");
  local_1c.Data = (char *)0x0;
  local_1c.Capacity = 0;
  local_1c.Length = 0;
  local_10.Data = (char *)0x0;
  local_10.Capacity = 0;
  local_10.Length = 0;
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)local_88,&local_58,&local_1c);
  pSVar3 = util__LocStr__operator__o3(pLVar2);
  iVar7 = 0x61119d;
  __return_storage_ptr___00 = __return_storage_ptr__;
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)local_70,&local_34,&local_10);
  pSVar4 = util__LocStr__operator__o3(pLVar2);
  pSVar5 = &local_40;
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff54,&local_28);
  fVar6 = (float10)(**(code **)(this->_pad_0x0_0 + 0x154))();
  SVar1.Capacity = iVar7;
  SVar1.Data = (char *)in_stack_ffffff58;
  SVar1.Length = (int)pSVar5;
  this_00 = Print(&local_4c,
                  (double)CONCAT44(in_stack_ffffff54,(int)((ulonglong)(double)fVar6 >> 0x20)),SVar1)
  ;
  pSVar5 = util__Str_char___operator(this_00,pSVar5,pSVar4);
  util__Str_char___operator(pSVar5,__return_storage_ptr___00,pSVar3);
  if (local_40.Data != (char *)0x0) {
    port_op_delete(local_40.Data);
    local_40.Data = (char *)0x0;
  }
  if (local_4c.Data != (char *)0x0) {
    port_op_delete(local_4c.Data);
    local_4c.Data = (char *)0x0;
  }
  if (local_64 != (void *)0x0) {
    port_op_delete(local_64);
    local_64 = (void *)0x0;
  }
  if (local_70[0] != (void *)0x0) {
    port_op_delete(local_70[0]);
    local_70[0] = (void *)0x0;
  }
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
    local_10.Data = (char *)0x0;
  }
  if (local_7c != (void *)0x0) {
    port_op_delete(local_7c);
    local_7c = (void *)0x0;
  }
  if (local_88[0] != (void *)0x0) {
    port_op_delete(local_88[0]);
    local_88[0] = (void *)0x0;
  }
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
    local_1c.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_58.Data != (char *)0x0) {
    port_op_delete(local_58.Data);
  }
  return __return_storage_ptr__;
}

//==== 006112f0 GetIcon_006112f0 ====


/* public: virtual void (__cdecl*__thiscall ThermoelectricFissionReactorModule__GetIcon(void)const
   )(void) */

_func_void * __thiscall
ThermoelectricFissionReactorModule__GetIcon(ThermoelectricFissionReactorModule *this)

{
  return Icons__ThermoelectricFissionReactor;
}





//==== 00611300 GetStatuses_00611300 ====

/* public: virtual class DesignStatusBuffer 
   ThermoelectricFissionReactorModule__GetStatuses(class DataParser *)const  */

DesignStatusBuffer * 
ThermoelectricFissionReactorModule__GetStatuses
          (ThermoelectricFissionReactorModule *this,DesignStatusBuffer *__return_storage_ptr__,
          DataParser *param_1)

{
  double *pdVar1;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  Str_L_char_G_ local_10;
  
  __return_storage_ptr__->DataManager = (DataParser *)0x0;
  (__return_storage_ptr__->Messages)._pad_0x0_0 = 0;
  (__return_storage_ptr__->Messages).Data = (DesignStatusMessage *)0x0;
  (__return_storage_ptr__->Messages).Size = 0;
  *(undefined8 *)&(__return_storage_ptr__->Messages).Capacity = 0;
  PowerModule__GetStatuses((PowerModule *)this,__return_storage_ptr__,param_1);
  util__Str_char___Str_char(&local_34,"ThermoelectricFissionReactorLowTemperature");
  pdVar1 = &(this->InnerCooler).CachedCoolantMassFlowRate_kg__s;
  local_28.Data = (char *)0x0;
  local_28.Capacity = 0;
  local_28.Length = 0;
  local_1c.Data = (char *)0x0;
  local_1c.Capacity = 0;
  local_1c.Length = 0;
  local_10.Data = (char *)0x0;
  local_10.Capacity = 0;
  local_10.Length = 0;
  DesignStatusBuffer__CheckWarning
            (__return_storage_ptr__,*pdVar1 <= 1000.0 && *pdVar1 != 1000.0,&local_34,&local_10,
             &local_1c,&local_28,(ModulePlacer *)0x0);
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
    local_10.Data = (char *)0x0;
  }
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
    local_1c.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
  }
  return __return_storage_ptr__;
}

//==== 00611400 GetHullRadius_m_00611400 ====

/* public: virtual double __thiscall ThermoelectricFissionReactorModule__GetHullRadius_m(void)const
    */

double __thiscall
ThermoelectricFissionReactorModule__GetHullRadius_m(ThermoelectricFissionReactorModule *this)

{
  Cylinder_L_double_G_ *pCVar1;
  Cylinder_L_double_G_ local_44;
  Cylinder_L_double_G_ local_34;
  Cylinder_L_double_G_ local_24;
  double local_14;
  double local_c;
  
  local_14 = *(double *)&(this->InnerCooler)._pad_0x8_2;
  local_c = (this->Thermocouple).CachedArea_m2;
  pCVar1 = TurbopumpSubModule__GetTurbopumpCylinder_m
                     ((TurbopumpSubModule *)&(this->OuterTurbopump).CachedFluidDensity_kg__m3,
                      &local_34);
  local_c = local_c + local_14;
  if (local_c <= pCVar1->Radius) {
    local_c = pCVar1->Radius;
  }
  NuclearReactorSubModule__GetTotalDimensions_m
            ((NuclearReactorSubModule *)&(this->NuclearReactor).GetEmittedRadiation_MemoizedValue,
             &local_24);
  pCVar1 = TurbopumpSubModule__GetTurbopumpCylinder_m
                     ((TurbopumpSubModule *)&(this->InnerTurbopump).CachedFluidDensity_kg__m3,
                      &local_44);
  if (local_24.Radius <= pCVar1->Radius) {
    local_24.Radius = pCVar1->Radius;
  }
  if (local_24.Radius <= local_c) {
    local_24.Radius = local_c;
  }
  return local_24.Radius;
}

//==== 00611480 GetHullLength_m_00611480 ====


/* public: virtual double __thiscall ThermoelectricFissionReactorModule__GetHullLength_m(void)const
    */

double __thiscall
ThermoelectricFissionReactorModule__GetHullLength_m(ThermoelectricFissionReactorModule *this)

{
  Cylinder_L_double_G_ *pCVar1;
  Cylinder_L_double_G_ CStack_3c;
  Cylinder_L_double_G_ CStack_2c;
  Cylinder_L_double_G_ CStack_1c;
  double dStack_c;
  
  NuclearReactorSubModule__GetTotalDimensions_m
            ((NuclearReactorSubModule *)&(this->NuclearReactor).GetEmittedRadiation_MemoizedValue,
             &CStack_1c);
  dStack_c = (this->Thermocouple).CachedHotTemperature_K;
  pCVar1 = TurbopumpSubModule__GetTurbopumpCylinder_m
                     ((TurbopumpSubModule *)&(this->InnerTurbopump).CachedFluidDensity_kg__m3,
                      &CStack_2c);
  dStack_c = pCVar1->Height + CStack_1c.Height + dStack_c;
  pCVar1 = TurbopumpSubModule__GetTurbopumpCylinder_m
                     ((TurbopumpSubModule *)&(this->OuterTurbopump).CachedFluidDensity_kg__m3,
                      &CStack_3c);
  return pCVar1->Height + dStack_c;
}





//==== 006114f0 GetStructuralMaterial_006114f0 ====


/* public: virtual class Material const * __thiscall
   TurboelectricFissionReactorModule__GetStructuralMaterial(void)const  */

Material * __thiscall
TurboelectricFissionReactorModule__GetStructuralMaterial(TurboelectricFissionReactorModule *this)

{
  return (Material *)(uintptr_t)*(uint32_t *)&(this->NuclearReactor).CachedInletTemperature_K;
}





//==== 00611500 GetStructuralThickness_m_00611500 ====


/* public: virtual double __thiscall
   TurboelectricFissionReactorModule__GetStructuralThickness_m(void)const  */

double __thiscall
TurboelectricFissionReactorModule__GetStructuralThickness_m(TurboelectricFissionReactorModule *this)

{
  return (this->NuclearReactor).CachedCoolantFlowRate_kg__s;
}





//==== 00611510 GetCrewRequired_00611510 ====


/* public: virtual class util__Darray_L_structCrewJob_G_ __thiscall
   TurboelectricFissionReactorModule__GetCrewRequired(void)const  */

void __thiscall
TurboelectricFissionReactorModule__GetCrewRequired(TurboelectricFissionReactorModule *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  Str_L_char_G_ *pSVar2;
  LocStr *this_00;
  char *pcVar3;
  Darray_L_struct_CrewJob_G_ *pDVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  Darray_L_struct_CrewJob_G_ *in_stack_00000004;
  void *apvStack_8c [3];
  void *pvStack_80;
  undefined4 uStack_74;
  Str_L_char_G_ SStack_70;
  undefined8 uStack_64;
  undefined1 uStack_5c;
  Str_L_char_G_ SStack_54;
  Darray_L_struct_CrewJob_G_ aDStack_48 [4];
  Str_L_char_G_ SStack_44;
  Str_L_char_G_ SStack_38;
  Str_L_char_G_ SStack_2c;
  int iStack_20;
  TurboelectricFissionReactorModule *pTStack_1c;
  undefined **ppuStack_18;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  ppuStack_18 = &vftable_120;
  iStack_14 = 0;
  iStack_10 = 0;
  uStack_c = 0;
  pTStack_1c = this;
  util__Str_char___Str_char(&SStack_44,"CrewTechnician");
  pSVar2 = Module__GetQuickName((Module *)this,&SStack_54);
  if (pSVar2->Capacity < 1) {
    pcVar6 = "";
  }
  else {
    pcVar6 = pSVar2->Data;
  }
  SStack_2c.Data = (char *)0x0;
  SStack_2c.Capacity = 0;
  SStack_2c.Length = 0;
  this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_8c,&SStack_44,&SStack_2c);
  pSVar2 = util__LocStr__operator__o3(this_00);
  if (pSVar2->Capacity < 1) {
    pcVar3 = "";
  }
  else {
    pcVar3 = pSVar2->Data;
  }
  util__Printf(&SStack_38,pcVar3,pcVar6);
  uStack_74 = 2;
  util__Str_char___Str_char(&SStack_70,&SStack_38);
  uStack_64 = 0x3fd999999999999a;
  uStack_5c = 1;
  if (SStack_38.Data != (char *)0x0) {
    port_op_delete(SStack_38.Data);
    SStack_38.Data = (char *)0x0;
  }
  iVar5 = iStack_10;
  iStack_20 = iStack_10 + 1;
  util__Darray_struct_CrewJob___SetSize((Darray_L_struct_CrewJob_G_ *)&ppuStack_18,&iStack_20);
  bVar1 = util__Darray_struct_CrewJob___CheckSize((Darray_L_struct_CrewJob_G_ *)&ppuStack_18,iVar5);
  iVar5 = iStack_14;
  if (bVar1) {
    iVar8 = iStack_10 * 0x20;
    *(undefined4 *)(iVar8 + -0x20 + iStack_14) = uStack_74;
    util__Str_char___operator__o8((Str_L_char_G_ *)(iStack_14 + -0x1c + iVar8),&SStack_70);
    *(undefined8 *)(iVar8 + -0x10 + iVar5) = 0x3fd999999999999a;
    *(undefined1 *)(iVar8 + -8 + iVar5) = 1;
    this = pTStack_1c;
  }
  if (SStack_70.Data != (char *)0x0) {
    port_op_delete(SStack_70.Data);
  }
  if (pvStack_80 != (void *)0x0) {
    port_op_delete(pvStack_80);
    pvStack_80 = (void *)0x0;
  }
  if (apvStack_8c[0] != (void *)0x0) {
    port_op_delete(apvStack_8c[0]);
    apvStack_8c[0] = (void *)0x0;
  }
  if (SStack_2c.Data != (char *)0x0) {
    port_op_delete(SStack_2c.Data);
    SStack_2c.Data = (char *)0x0;
  }
  if (SStack_54.Data != (char *)0x0) {
    port_op_delete(SStack_54.Data);
    SStack_54.Data = (char *)0x0;
  }
  if (SStack_44.Data != (char *)0x0) {
    port_op_delete(SStack_44.Data);
  }
  pDVar4 = (Darray_L_struct_CrewJob_G_ *)
           NuclearReactorSubModule__GetCrewRequired
                     ((NuclearReactorSubModule *)
                      &(this->NuclearReactor).GetEmittedRadiation_MemoizedValue,(Darray_L_CrewJob_G_ *)aDStack_48);
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_CrewJob___Darray_struct_CrewJob
            (in_stack_00000004,(Darray_L_struct_CrewJob_G_ *)&ppuStack_18);
  if (*(int *)(in_stack_00000004 + 8) == 0) {
    util__Darray_struct_CrewJob___operator(in_stack_00000004,pDVar4);
  }
  else {
    iVar5 = (**(code **)(*(int *)pDVar4 + 0xc))();
    if (iVar5 != 0) {
      iVar5 = *(int *)(in_stack_00000004 + 8);
      iVar8 = (**(code **)(*(int *)pDVar4 + 0xc))();
      pTStack_1c = (TurboelectricFissionReactorModule *)(iVar8 + *(int *)(in_stack_00000004 + 8));
      util__Darray_struct_CrewJob___SetSize(in_stack_00000004,(int *)&pTStack_1c);
      util__Darray_struct_CrewJob___CheckSize(in_stack_00000004,iVar5);
      puVar7 = (undefined4 *)(iVar5 * 0x20 + *(int *)(in_stack_00000004 + 4));
      puVar9 = *(undefined4 **)(pDVar4 + 4);
      if (puVar7 != (undefined4 *)
                    (*(int *)(in_stack_00000004 + 8) * 0x20 + *(int *)(in_stack_00000004 + 4))) {
        do {
          *puVar7 = *puVar9;
          util__Str_char___operator__o8((Str_L_char_G_ *)(puVar7 + 1),(Str_L_char_G_ *)(puVar9 + 1));
          *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(puVar9 + 4);
          *(undefined1 *)(puVar7 + 6) = *(undefined1 *)(puVar9 + 6);
          puVar7 = puVar7 + 8;
          puVar9 = puVar9 + 8;
        } while (puVar7 != (undefined4 *)
                           (*(int *)(in_stack_00000004 + 8) * 0x20 + *(int *)(in_stack_00000004 + 4)
                           ));
      }
    }
  }
  util__Darray_struct_CrewJob____Darray_struct_CrewJob(aDStack_48);
  util__Darray_struct_CrewJob____Darray_struct_CrewJob((Darray_L_struct_CrewJob_G_ *)&ppuStack_18);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 006117b0 GetPowerGenerated_W_006117b0 ====

/* public: virtual double __thiscall
   ThermoelectricFissionReactorModule__GetPowerGenerated_W(void)const  */

double __thiscall
ThermoelectricFissionReactorModule__GetPowerGenerated_W(ThermoelectricFissionReactorModule *this)

{
  float10 fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = ThermocoupleSubModule__GetEfficiency_Percent
                    ((ThermocoupleSubModule *)&(this->Thermocouple).CachedColdTemperature_K);
  fVar1 = (float10)(**(code **)(this->_pad_0x0_0 + 0x158))();
  dVar3 = TurbopumpSubModule__GetPowerRequired_W
                    ((TurbopumpSubModule *)&(this->OuterTurbopump).CachedFluidDensity_kg__m3);
  dVar4 = TurbopumpSubModule__GetPowerRequired_W
                    ((TurbopumpSubModule *)&(this->InnerTurbopump).CachedFluidDensity_kg__m3);
  return (double)(fVar1 * (float10)dVar2) - (dVar4 + dVar3);
}

//==== 00611810 GetEfficiency_Percent_00611810 ====

/* public: virtual double __thiscall
   ThermoelectricFissionReactorModule__GetEfficiency_Percent(void)const  */

double __thiscall
ThermoelectricFissionReactorModule__GetEfficiency_Percent(ThermoelectricFissionReactorModule *this)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  Maybe_L_double_G_ *pMVar5;
  double dVar6;
  double dVar7;
  Maybe_L_double_G_ MStack_24;
  double dStack_14;
  double dStack_c;
  
  dStack_c = 0.0;
  dVar1 = (this->InnerCooler).CachedDimensions_m.Radius;
  if ((0.0 < dVar1) && (dVar2 = (this->InnerCooler).CachedDimensions_m.Height, dVar2 <= dVar1)) {
    iVar3 = (this->InnerCooler)._pad_0x0_0;
    iVar4 = (this->InnerCooler)._pad_0x4_1;
    dStack_14 = dVar1 - dVar2;
    dVar6 = (*(double *)(iVar3 + 0xe8) - *(double *)(iVar4 + 0xe8)) * 1000.0 * dStack_14;
    if (dVar6 != 0.0) {
      dVar7 = (*(double *)&(this->InnerCooler).CachedCoolant / 1000.0) * 0.5;
      dStack_c = ((dVar2 + dVar1) * 0.5 * dVar6 * dVar6) /
                 ((*(double *)(iVar4 + 0xb8) / dVar7 + *(double *)(iVar3 + 0xb8) / dVar7) * 1000.0 *
                  *(double *)&(this->InnerCooler)._pad_0x8_2 *
                 (((*(double *)(iVar4 + 0xa8) * dVar7 + *(double *)(iVar3 + 0xa8) * dVar7) * 1000.0)
                 / *(double *)&(this->InnerCooler)._pad_0x8_2));
    }
    dStack_c = dStack_c + 1.0;
    pMVar5 = util__Sqrt(&MStack_24,&dStack_c);
    if (pMVar5->IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    return ((dStack_14 / (this->InnerCooler).CachedDimensions_m.Radius) * (pMVar5->Data - 1.0)) /
           ((this->InnerCooler).CachedDimensions_m.Height /
            (this->InnerCooler).CachedDimensions_m.Radius + pMVar5->Data);
  }
  return 0.0;
}

//==== 00611820 GetTotalEnergy_J_00611820 ====

/* public: virtual double __thiscall TurboelectricFissionReactorModule__GetTotalEnergy_J(void)const
    */

double __thiscall
TurboelectricFissionReactorModule__GetTotalEnergy_J(TurboelectricFissionReactorModule *this)

{
  float10 fVar1;
  
  NuclearReactorSubModule__GetTotalLifetime_s_Memoize();
  if ((char)((this->NuclearReactor).ModeratorMass_kg == '\0')){
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  fVar1 = (float10)(**(code **)(this->_pad_0x0_0 + 0x154))();
  return (double)(fVar1 * (float10)*(double *)&(this->NuclearReactor).Coolant);
}

//==== 00611870 GetCoolantProperties_00611870 ====

/* public: virtual class util__Maybe_L_structModuleCoolantProperties_G_ __thiscall
   ThermoelectricFissionReactorModule__GetCoolantProperties(void)const  */

Maybe_L_ModuleCoolantProperties_G_ * __thiscall
ThermoelectricFissionReactorModule__GetCoolantProperties
          (ThermoelectricFissionReactorModule *this,
          Maybe_L_ModuleCoolantProperties_G_ *__return_storage_ptr__)

{
  double dVar1;
  int iVar2;
  Material *pMVar3;
  float10 fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  iVar2 = *(int *)&(this->OuterTurbopump).CachedNoFluid;
  if (iVar2 == 0) {
    dVar5 = 0.0;
  }
  else {
    dVar5 = *(double *)(iVar2 + 0x98);
  }
  dVar1 = (this->InnerCooler).CachedCoolantMassFlowRate_kg__s;
  dVar6 = CylindricalCoolerSubModule__GetThermalConductance_W__K
                    ((CylindricalCoolerSubModule *)&this->OuterCoolant);
  dVar6 = dVar6 * (dVar1 - dVar5);
  fVar4 = (float10)(**(code **)(this->_pad_0x0_0 + 0x158))();
  pMVar3 = *(Material * *)&(this->OuterTurbopump).CachedNoFluid;
  dVar5 = (double)fVar4;
  if (dVar6 <= (double)fVar4) {
    dVar5 = dVar6;
  }
  dVar1 = (this->InnerCooler).CachedCoolantMassFlowRate_kg__s;
  dVar6 = CylindricalCoolerSubModule__GetCoolantTotalVolume_m3
                    ((CylindricalCoolerSubModule *)&this->OuterCoolant);
  dVar7 = TurbopumpSubModule__GetMassFlowRate_kg__s
                    ((TurbopumpSubModule *)&(this->OuterTurbopump).CachedFluidDensity_kg__m3);
  (__return_storage_ptr__->Data).Volume_m3 = dVar6;
  (__return_storage_ptr__->Data).MassFlowRate_kg__s = dVar7;
  (__return_storage_ptr__->Data).PeakTemperature_K = dVar1;
  (__return_storage_ptr__->Data).Coolant = pMVar3;
  (__return_storage_ptr__->Data).HeatTransferRate_W = dVar5;
  __return_storage_ptr__->IsValidData = true;
  return __return_storage_ptr__;
}

//==== 00611940 GetEmittedRadiation_00611940 ====


/* public: virtual struct Radiation 
   TurboelectricFissionReactorModule__GetEmittedRadiation(void)const  */

Radiation * 
TurboelectricFissionReactorModule__GetEmittedRadiation
          (TurboelectricFissionReactorModule *this,Radiation *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  NuclearReactorSubModule__GetEmittedRadiation_Memoize
            ((NuclearReactorSubModule *)&(this->NuclearReactor).GetEmittedRadiation_MemoizedValue);
  if ((char)((this->NuclearReactor).ControlRodComposition == '\0')){
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  uVar1 = *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->NuclearReactor)) + 0x54));
  uVar2 = *(undefined4 *)&(this->NuclearReactor).FuelMass_kg;
  uVar3 = *(undefined4 *)((int)&(this->NuclearReactor).FuelMass_kg + 4);
  *(Material **)&__return_storage_ptr__->ThermalNeutrons_W = (this->NuclearReactor).Fuel;
  *(undefined4 *)((int)&__return_storage_ptr__->ThermalNeutrons_W + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->FastNeutrons_W = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->FastNeutrons_W + 4) = uVar3;
  __return_storage_ptr__->GammaRays_W = (this->NuclearReactor).FuelEnrichment_Percent;
  return __return_storage_ptr__;
}





//==== 00611990 GetInfoBoxes_00611990 ====


/* public: virtual class util__Darray_L_structInfoBox_G_ __thiscall
   ThermoelectricFissionReactorModule__GetInfoBoxes(void)const  */

undefined4 * __thiscall
ThermoelectricFissionReactorModule__GetInfoBoxes(ThermoelectricFissionReactorModule *this)

{
  undefined4 *in_stack_00000004;
  
  *in_stack_00000004 = 0;
  in_stack_00000004[1] = 0;
  in_stack_00000004[2] = 0;
  in_stack_00000004[3] = 0;
  PowerModule__GetInfoBoxes((PowerModule *)this);
}





//==== 006119b0 GetAdvancedInfo_006119b0 ====


/* public: virtual class util__Str_L_char_G_ 
   ThermoelectricFissionReactorModule__GetAdvancedInfo(void)const  */

Str_L_char_G_ * 
ThermoelectricFissionReactorModule__GetAdvancedInfo
          (ThermoelectricFissionReactorModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  NuclearReactorSubModule__GetNeutronFactors
            ((NuclearReactorSubModule *)&(this->NuclearReactor).GetEmittedRadiation_MemoizedValue,
             __return_storage_ptr__);
  return __return_storage_ptr__;
}





//==== 006119d0 GenerateDesignUI_006119d0 ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual struct UIWidget * 
   ThermoelectricFissionReactorModule__GenerateDesignUI(class Manager *)const  */

UIWidget * 
ThermoelectricFissionReactorModule__GenerateDesignUI
          (ThermoelectricFissionReactorModule *this,Manager *param_1)

{
  undefined8 stack0xfffffb84;
  undefined8 stack0xfffffbb8;
  UIAttributes UVar1;
  UIAttributes UVar2;
  LayoutAttributes LVar3;
  bool bVar4;
  bool bVar5;
  UIWidget *pUVar6;
  UIAttributes *pUVar7;
  undefined4 *puVar8;
  UIWidget *pUVar9;
  Data *pDVar10;
  undefined1 in_stack_fffffb84 [44];
  void *in_stack_fffffbb0;
  _func___cdecl_bool_void_ptr *in_stack_fffffbb4;
  undefined1 auVar11 [12];
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [44];
  undefined1 auVar19 [44];
  undefined1 in_stack_fffffbb8 [268];
  float in_stack_fffffcc4;
  float fVar21;
  float in_stack_fffffcc8;
  float fVar22;
  float in_stack_fffffccc;
  undefined4 in_stack_fffffcd0;
  undefined4 uVar23;
  void *in_stack_fffffcd4;
  void *pvVar24;
  _func___cdecl_Color_void_ptr *in_stack_fffffcd8;
  _func___cdecl_Color_void_ptr *p_Var25;
  int in_stack_fffffcdc;
  int iVar26;
  int in_stack_fffffce0;
  int iVar27;
  int in_stack_fffffce4;
  int iVar28;
  int in_stack_fffffce8;
  int iVar29;
  float in_stack_fffffcec;
  float in_stack_fffffcf0;
  float fVar30;
  float in_stack_fffffcf4;
  float fVar31;
  float fVar32;
  float fVar33;
  Manager *pMVar34;
  undefined4 uVar35;
  UIAttributes local_2f4;
  UIAttributes local_1ac;
  LayoutAttributes local_64;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  undefined8 uStack_24;
  Darray_L_util__SharedPtr_L_UIWidget_G___G_ local_1c;
  ThermoelectricFissionReactorModule *local_c;
  UIRowLayout *local_8;
  undefined1 auVar20 [32];
  
  bVar5 = false;
  bVar4 = false;
  local_8 = (UIRowLayout *)0x0;
  local_c = this;
  local_8 = (UIRowLayout *)(uintptr_t)(port_op_new(0x218));
  if (local_8 == (UIRowLayout *)0x0) {
    pUVar6 = (UIWidget *)0x0;
  }
  else {
    pUVar6 = (UIWidget *)(uintptr_t)(port_op_new(0x170));
    if (pUVar6 == (UIWidget *)0x0) {
      pUVar6 = (UIWidget *)0x0;
    }
    else {
      fVar32 = 8.917415e-39;
      pMVar34 = param_1;
      UIAttributes__UIAttributes(&local_1ac,param_1);
      local_34 = 0;
      uStack_2c = 0x3ff0000000000000;
      uStack_24 = 0x3ff0000000000000;
      uStack_30 = 0;
      local_1ac.FillProportion.Getter.Callee = (void *)0x0;
      local_1ac.FillProportion.Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0;
      local_1ac.FillProportion.Value.X = 0;
      local_1ac.FillProportion.Value.Y = 0x3ff00000;
      local_1ac.FillProportion.Value.Y = 1.0;
      in_stack_fffffbb0 = (void *)0x611a64;
      UIAttributes__UIAttributes((UIAttributes *)&stack0xfffffbb8,&local_1ac);
      in_stack_fffffbb4 = (_func___cdecl_bool_void_ptr *)0x611a6b;
      UVar2.BackgroundColor.Data.Value.Saturation = in_stack_fffffcc4;
*(uint32_t *)&auVar11 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 4)));
*(uint32_t *)&auVar14 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 32)));
*(uint32_t *)&auVar15 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 44)));
*(uint32_t *)&auVar17 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 180)));
*(uint32_t *)&auVar19 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 196)));
      UVar2.Parent = (Manager *)(*(uint32_t*)&(in_stack_fffffbb8));
      UVar2.Tag.Data = (char *)(*(uint32_t*)&(auVar11));
      UVar2.Tag.Capacity = (*(uint32_t*)((char*)&(auVar11)+4));
      UVar2.Tag.Length = (*(uint32_t*)((char*)&(auVar11)+8));
      uVar12 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 16)),0);
      uVar13 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 16)),8);
      UVar2.Location.Getter.Callee = (void *)(int)uVar12;
      UVar2.Location.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
      UVar2.Location.Value.X = (int)uVar13;
      UVar2.Location.Value.Y = (int)((ulonglong)uVar13 >> 0x20);
      UVar2.Visible.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar14));
      UVar2.Visible.Getter.CallbackFunction =
           (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar14)) >> 0x20);
      UVar2.Visible.Value = (bool)auVar14[8];
      (*(uint24_t *)((char *)&(UVar2.Visible) + 9)) = (*(uint24_t*)((char*)&(auVar14)+9));
      UVar2.Enabled.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar15));
      UVar2.Enabled.Getter.CallbackFunction =
           (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar15)) >> 0x20);
      UVar2.Enabled.Value = (bool)auVar15[8];
      (*(uint24_t *)((char *)&(UVar2.Enabled) + 9)) = (*(uint24_t*)((char*)&(auVar15)+9));
      uVar12 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 56)),0);
      uVar13 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 56)),8);
      UVar2.DesiredSize.Getter.Callee = (void *)(int)uVar12;
      UVar2.DesiredSize.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
      UVar2.DesiredSize.Value.X = (int)uVar13;
      UVar2.DesiredSize.Value.Y = (int)((ulonglong)uVar13 >> 0x20);
      uVar12 = SUB248((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 72)),0);
*(uint32_t *)&auVar16 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 72)),8));
      UVar2.FillProportion.Getter.Callee = (void *)(int)uVar12;
      UVar2.FillProportion.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
      UVar2.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar16));
      UVar2.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar16)+8));
      uVar12 = SUB128((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 96)),0);
      UVar2.HitTestShape.Getter.Callee = (void *)(int)uVar12;
      UVar2.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)(int)((ulonglong)uVar12 >> 0x20));
      UVar2.HitTestShape.Value = SUB124((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 96)),8);
      (*(uint32_t *)((char *)&(UVar2) + 108)) = (*(uint32_t *)((char *)&(in_stack_fffffbb8) + 108));
      uVar12 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 112)),0);
      UVar2.Depth.Getter.Callee = (void *)(int)uVar12;
      UVar2.Depth.Getter.CallbackFunction =
           (_func___cdecl_double_void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
      UVar2.Depth.Value = (double)SUB168((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 112)),8);
      uVar12 = SUB128((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 128)),0);
      UVar2.Icon.Getter.Callee = (void *)(int)uVar12;
      UVar2.Icon.Getter.CallbackFunction = (void (* (*)(void *))(void))((_func___cdecl__func___cdecl_void_ptr_void_ptr *)(int)((ulonglong)uVar12 >> 0x20));
      UVar2.Icon.Value = (_func___cdecl_void *)SUB124((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 128)),8);
      uVar12 = SUB208((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 140)),0);
*(uint32_t *)&auVar11 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 140)),8));
      UVar2.Tooltip.Getter.Callee = (void *)(int)uVar12;
      UVar2.Tooltip.Getter.CallbackFunction =
           (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
      UVar2.Tooltip.Value.Data = (char *)(*(uint32_t*)&(auVar11));
      UVar2.Tooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar11)+4));
      UVar2.Tooltip.Value.Length = (*(uint32_t*)((char*)&(auVar11)+8));
      uVar12 = SUB208((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 160)),0);
*(uint32_t *)&auVar11 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 160)),8));
      UVar2.VerboseTooltip.Getter.Callee = (void *)(int)uVar12;
      UVar2.VerboseTooltip.Getter.CallbackFunction =
           (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
      UVar2.VerboseTooltip.Value.Data = (char *)(*(uint32_t*)&(auVar11));
      UVar2.VerboseTooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar11)+4));
      UVar2.VerboseTooltip.Value.Length = (*(uint32_t*)((char*)&(auVar11)+8));
      uVar12 = SUB128((*(uint32_t *)((char *)&(auVar17) + 0)),0);
      UVar2.TextFont.Data.Getter.Callee = (void *)(int)uVar12;
      UVar2.TextFont.Data.Getter.CallbackFunction =
           (_func___cdecl_Font_ptr_void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
      UVar2.TextFont.Data.Value = (Font *)SUB124((*(uint32_t *)((char *)&(auVar17) + 0)),8);
      UVar2.TextFont.IsValidData = (bool)auVar17[0xc];
      (*(uint32_t *)((char *)&(UVar2.TextFont) + 13)) = (*(uint32_t *)((char *)&(auVar17) + 13));
      uVar12 = SUB408((*(uint32_t *)((char *)&(auVar19) + 0)),0);
*(uint32_t *)&auVar20 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar19) + 0)),8));
      UVar2.ForegroundColor.Data.Getter.Callee = (void *)(int)uVar12;
      UVar2.ForegroundColor.Data.Getter.CallbackFunction =
           (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
      UVar2.ForegroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar20));
      UVar2.ForegroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar20)+4));
      UVar2.ForegroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar20)+8));
      UVar2.ForegroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar20) + 12));
      UVar2.ForegroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar20) + 16));
      UVar2.ForegroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar20) + 20));
      UVar2.ForegroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar20) + 24));
      UVar2.ForegroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar20) + 28));
      UVar2.ForegroundColor.IsValidData = (bool)auVar19[0x28];
      (*(uint32_t *)((char *)&(UVar2.ForegroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar19) + 41));
      UVar2.BackgroundColor.Data.Getter.Callee = (void *)(int)(*(uint64_t *)((char *)&(in_stack_fffffbb8) + 240));
      UVar2.BackgroundColor.Data.Getter.CallbackFunction =
           (_func___cdecl_Color_void_ptr *)(int)((ulonglong)(*(uint64_t *)((char *)&(in_stack_fffffbb8) + 240)) >> 0x20);
      UVar2.BackgroundColor.Data.Value._pad_0x0_0 = (*(uint32_t *)((char *)&(in_stack_fffffbb8) + 248));
      UVar2.BackgroundColor.Data.Value._pad_0x4_1 = (*(uint32_t *)((char *)&(in_stack_fffffbb8) + 252));
      UVar2.BackgroundColor.Data.Value._pad_0x8_2 = (*(uint32_t *)((char *)&(in_stack_fffffbb8) + 256));
      UVar2.BackgroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(in_stack_fffffbb8) + 260));
      UVar2.BackgroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(in_stack_fffffbb8) + 264));
      UVar2.BackgroundColor.Data.Value.Value = in_stack_fffffcc8;
      UVar2.BackgroundColor.Data.Value.Alpha = in_stack_fffffccc;
      UVar2.BackgroundColor.IsValidData = SUB41(in_stack_fffffcd0,0);
      (*(uint32_t *)((char *)&(UVar2.BackgroundColor) + 41)) = SUB43(in_stack_fffffcd0,1);
      UVar2.TextColor.Data.Getter.Callee = in_stack_fffffcd4;
      UVar2.TextColor.Data.Getter.CallbackFunction = in_stack_fffffcd8;
      UVar2.TextColor.Data.Value._pad_0x0_0 = in_stack_fffffcdc;
      UVar2.TextColor.Data.Value._pad_0x4_1 = in_stack_fffffce0;
      UVar2.TextColor.Data.Value._pad_0x8_2 = in_stack_fffffce4;
      UVar2.TextColor.Data.Value._pad_0xc_3 = in_stack_fffffce8;
      UVar2.TextColor.Data.Value.Hue_degrees = in_stack_fffffcec;
      UVar2.TextColor.Data.Value.Saturation = in_stack_fffffcf0;
      UVar2.TextColor.Data.Value.Value = in_stack_fffffcf4;
      UVar2.TextColor.Data.Value.Alpha = fVar32;
      (*(uint32_t *)((char *)&(UVar2.TextColor) + 40)) = (uint32_t)(uintptr_t)(pMVar34);
      UIWidget__UIWidget(pUVar6,UVar2);
      pUVar6->_pad_0x0_0 = (int)&vftable_265;
      pUVar6[1]._pad_0x0_0 = (int)this;
      UIAttributes___UIAttributes(&local_1ac);
    }
    local_1c._pad_0x0_0 = (int)&vftable_48;
    local_1c.Data = (SharedPtr_L_UIWidget_G_ *)0x0;
    local_1c.Size = 0;
    local_1c.Capacity = 0;
    pUVar7 = (UIAttributes *)UIAttributes__UIAttributes(&local_2f4,param_1);
    local_34 = 0;
    uStack_2c = 0x3ff0000000000000;
    uStack_24 = 0x3ff0000000000000;
    uStack_30 = 0;
    (pUVar7->FillProportion).Getter.Callee = (void *)0x0;
    (pUVar7->FillProportion).Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0;
    *(undefined4 *)&(pUVar7->FillProportion).Value.X = 0;
    *(undefined4 *)((int)&(pUVar7->FillProportion).Value.X + 4) = 0x3ff00000;
    (pUVar7->FillProportion).Value.Y = 1.0;
    puVar8 = (undefined4 *)LayoutAttributes__LayoutAttributes(&local_64);
    uVar23 = *puVar8;
    pvVar24 = (void *)puVar8[1];
    p_Var25 = (_func___cdecl_Color_void_ptr *)puVar8[2];
    iVar26 = puVar8[3];
    iVar27 = puVar8[4];
    iVar28 = puVar8[5];
    iVar29 = puVar8[6];
    fVar32 = (float)puVar8[7];
    fVar30 = (float)puVar8[8];
    fVar31 = (float)puVar8[9];
    fVar33 = (float)puVar8[10];
    uVar35 = puVar8[0xb];
    pUVar9 = NuclearReactorSubModule__GenerateModuleDiagram
                       ((NuclearReactorSubModule *)
                        &(local_c->NuclearReactor).GetEmittedRadiation_MemoizedValue,param_1);
    fVar21 = 8.917756e-39;
    pDVar10 = (Data *)(uintptr_t)(UILayout__Data__Add((Data *)&local_1c,pUVar9));
    fVar22 = 8.917765e-39;
    pDVar10 = (Data *)(uintptr_t)(UILayout__Data__Add(pDVar10,pUVar6));
    UIAttributes__UIAttributes((UIAttributes *)&stack0xfffffb84,pUVar7);
    UVar1.Enabled.Getter.Callee = in_stack_fffffbb0;
*(uint32_t *)&auVar11 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffb84) + 4)));
*(uint32_t *)&auVar14 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffb84) + 32)));
    UVar1.Parent = (Manager *)(*(uint32_t*)&(in_stack_fffffb84));
    UVar1.Tag.Data = (char *)(*(uint32_t*)&(auVar11));
    UVar1.Tag.Capacity = (*(uint32_t*)((char*)&(auVar11)+4));
    UVar1.Tag.Length = (*(uint32_t*)((char*)&(auVar11)+8));
    uVar12 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffb84) + 16)),0);
    uVar13 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffb84) + 16)),8);
    UVar1.Location.Getter.Callee = (void *)(int)uVar12;
    UVar1.Location.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
    UVar1.Location.Value.X = (int)uVar13;
    UVar1.Location.Value.Y = (int)((ulonglong)uVar13 >> 0x20);
    UVar1.Visible.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar14));
    UVar1.Visible.Getter.CallbackFunction =
         (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar14)) >> 0x20);
    UVar1.Visible.Value = (bool)auVar14[8];
    (*(uint24_t *)((char *)&(UVar1.Visible) + 9)) = (*(uint24_t*)((char*)&(auVar14)+9));
    UVar1.Enabled.Getter.CallbackFunction = in_stack_fffffbb4;
*(uint32_t *)&auVar17 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 128)));
*(uint32_t *)&auVar19 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 144)));
*(uint32_t *)&auVar18 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 188)));
    UVar1.Enabled.Value = (bool)in_stack_fffffbb8[0];
    (*(uint24_t *)((char *)&(UVar1.Enabled) + 9)) = (*(uint24_t*)((char*)&(in_stack_fffffbb8)+1));
    uVar12 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 4)),0);
    uVar13 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 4)),8);
    UVar1.DesiredSize.Getter.Callee = (void *)(int)uVar12;
    UVar1.DesiredSize.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
    UVar1.DesiredSize.Value.X = (int)uVar13;
    UVar1.DesiredSize.Value.Y = (int)((ulonglong)uVar13 >> 0x20);
    uVar12 = SUB248((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 20)),0);
*(uint32_t *)&auVar16 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 20)),8));
    UVar1.FillProportion.Getter.Callee = (void *)(int)uVar12;
    UVar1.FillProportion.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
    UVar1.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar16));
    UVar1.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar16)+8));
    uVar12 = SUB128((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 44)),0);
    UVar1.HitTestShape.Getter.Callee = (void *)(int)uVar12;
    UVar1.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)(int)((ulonglong)uVar12 >> 0x20));
    UVar1.HitTestShape.Value = SUB124((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 44)),8);
    (*(uint32_t *)((char *)&(UVar1) + 108)) = (*(uint32_t *)((char *)&(in_stack_fffffbb8) + 56));
    uVar12 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 60)),0);
    UVar1.Depth.Getter.Callee = (void *)(int)uVar12;
    UVar1.Depth.Getter.CallbackFunction =
         (_func___cdecl_double_void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
    UVar1.Depth.Value = (double)SUB168((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 60)),8);
    uVar12 = SUB128((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 76)),0);
    UVar1.Icon.Getter.Callee = (void *)(int)uVar12;
    UVar1.Icon.Getter.CallbackFunction = (void (* (*)(void *))(void))((_func___cdecl__func___cdecl_void_ptr_void_ptr *)(int)((ulonglong)uVar12 >> 0x20));
    UVar1.Icon.Value = (_func___cdecl_void *)SUB124((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 76)),8);
    uVar12 = SUB208((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 88)),0);
*(uint32_t *)&auVar11 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 88)),8));
    UVar1.Tooltip.Getter.Callee = (void *)(int)uVar12;
    UVar1.Tooltip.Getter.CallbackFunction =
         (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
    UVar1.Tooltip.Value.Data = (char *)(*(uint32_t*)&(auVar11));
    UVar1.Tooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar11)+4));
    UVar1.Tooltip.Value.Length = (*(uint32_t*)((char*)&(auVar11)+8));
    uVar12 = SUB208((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 108)),0);
*(uint32_t *)&auVar11 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 108)),8));
    UVar1.VerboseTooltip.Getter.Callee = (void *)(int)uVar12;
    UVar1.VerboseTooltip.Getter.CallbackFunction =
         (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
    UVar1.VerboseTooltip.Value.Data = (char *)(*(uint32_t*)&(auVar11));
    UVar1.VerboseTooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar11)+4));
    UVar1.VerboseTooltip.Value.Length = (*(uint32_t*)((char*)&(auVar11)+8));
    uVar12 = SUB128((*(uint32_t *)((char *)&(auVar17) + 0)),0);
    UVar1.TextFont.Data.Getter.Callee = (void *)(int)uVar12;
    UVar1.TextFont.Data.Getter.CallbackFunction =
         (_func___cdecl_Font_ptr_void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
    UVar1.TextFont.Data.Value = (Font *)SUB124((*(uint32_t *)((char *)&(auVar17) + 0)),8);
    UVar1.TextFont.IsValidData = (bool)auVar17[0xc];
    (*(uint32_t *)((char *)&(UVar1.TextFont) + 13)) = (*(uint32_t *)((char *)&(auVar17) + 13));
    uVar12 = SUB408((*(uint32_t *)((char *)&(auVar19) + 0)),0);
*(uint32_t *)&auVar20 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar19) + 0)),8));
    UVar1.ForegroundColor.Data.Getter.Callee = (void *)(int)uVar12;
    UVar1.ForegroundColor.Data.Getter.CallbackFunction =
         (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
    UVar1.ForegroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar20));
    UVar1.ForegroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar20)+4));
    UVar1.ForegroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar20)+8));
    UVar1.ForegroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar20) + 12));
    UVar1.ForegroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar20) + 16));
    UVar1.ForegroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar20) + 20));
    UVar1.ForegroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar20) + 24));
    UVar1.ForegroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar20) + 28));
    UVar1.ForegroundColor.IsValidData = (bool)auVar19[0x28];
    (*(uint32_t *)((char *)&(UVar1.ForegroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar19) + 41));
    uVar12 = SUB408((*(uint32_t *)((char *)&(auVar18) + 0)),0);
*(uint32_t *)&auVar20 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar18) + 0)),8));
    UVar1.BackgroundColor.Data.Getter.Callee = (void *)(int)uVar12;
    UVar1.BackgroundColor.Data.Getter.CallbackFunction =
         (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
    UVar1.BackgroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar20));
    UVar1.BackgroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar20)+4));
    UVar1.BackgroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar20)+8));
    UVar1.BackgroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar20) + 12));
    UVar1.BackgroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar20) + 16));
    UVar1.BackgroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar20) + 20));
    UVar1.BackgroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar20) + 24));
    UVar1.BackgroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar20) + 28));
    UVar1.BackgroundColor.IsValidData = (bool)auVar18[0x28];
    (*(uint32_t *)((char *)&(UVar1.BackgroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar18) + 41));
    UVar1.TextColor.Data.Getter.Callee = (void *)(int)(*(uint64_t *)((char *)&(in_stack_fffffbb8) + 232));
    UVar1.TextColor.Data.Getter.CallbackFunction =
         (_func___cdecl_Color_void_ptr *)(int)((ulonglong)(*(uint64_t *)((char *)&(in_stack_fffffbb8) + 232)) >> 0x20);
    UVar1.TextColor.Data.Value._pad_0x0_0 = (*(uint32_t *)((char *)&(in_stack_fffffbb8) + 240));
    UVar1.TextColor.Data.Value._pad_0x4_1 = (*(uint32_t *)((char *)&(in_stack_fffffbb8) + 244));
    UVar1.TextColor.Data.Value._pad_0x8_2 = (*(uint32_t *)((char *)&(in_stack_fffffbb8) + 248));
    UVar1.TextColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(in_stack_fffffbb8) + 252));
    UVar1.TextColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(in_stack_fffffbb8) + 256));
    UVar1.TextColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(in_stack_fffffbb8) + 260));
    UVar1.TextColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(in_stack_fffffbb8) + 264));
    UVar1.TextColor.Data.Value.Alpha = fVar21;
    (*(uint32_t *)((char *)&(UVar1.TextColor) + 40)) = fVar22;
    LVar3.Margin.Getter.CallbackFunction = pvVar24;
    LVar3.Margin.Getter.Callee = (void *)uVar23;
    LVar3.Margin.Value.X = (int)p_Var25;
    LVar3.Margin.Value.Y = iVar26;
    LVar3.Padding.Getter.Callee = (void *)iVar27;
    LVar3.Padding.Getter.CallbackFunction = (_func___cdecl_int_void_ptr *)iVar28;
    LVar3.Padding.Value = iVar29;
    LVar3.Background__HasBackground.Getter.Callee = *(void **)&(fVar32);
    LVar3.Background__HasBackground.Getter.CallbackFunction = *(_func___cdecl_bool_void_ptr *)&(fVar30);
    (*(uint32_t *)((char *)&(LVar3.Background__HasBackground) + 8)) = fVar31;
    (*(uint32_t *)((char *)&(LVar3) + 40)) = fVar33;
    LVar3.HasFlexibleSizing = SUB41(uVar35,0);
    (*(uint32_t *)((char *)&(LVar3) + 45)) = SUB43(uVar35,1);
    pUVar6 = (UIWidget *)UIRowLayout__UIRowLayout(local_8,UVar1,pDVar10,LVar3);
    bVar5 = true;
    bVar4 = true;
  }
  if (bVar4) {
    UIAttributes___UIAttributes(&local_2f4);
  }
  if (bVar5) {
    Darray_L_util__SharedPtr_L_UIWidget_G___G___dtor(&local_1c);
  }
  return pUVar6;
}

//==== 00611b70 BuildModels_00611b70 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall ThermoelectricFissionReactorModule__BuildModels(void) */

void __thiscall
ThermoelectricFissionReactorModule__BuildModels(ThermoelectricFissionReactorModule *this)

{
  undefined8 stack0xffffffe8;
  undefined8 stack0xfffffffc;
  Maybe_L_Radiation_G_ *this_00;
  int iVar1;
  Quaternion_L_double_G_ QVar2;
  ThermoelectricFissionReactorModule *pTVar3;
  bool bVar4;
  Cylinder_L_double_G_ *pCVar5;
  GameModel *pGVar6;
  ReferenceControllerRegistry *pRVar7;
  ReferenceController *pRVar8;
  undefined4 *puVar9;
  VertexBufferObject *pVVar10;
  int iVar11;
  double *pdVar12;
  double *pdVar13;
  float10 fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 uVar19;
  double dVar20;
  GameModel *pGVar21;
  Cylinder_L_double_G_ local_54;
  double local_44;
  double local_3c;
  TurbopumpSubModule *local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined1 local_20 [12];
  GameModel *pGStack_14;
  ThermoelectricFissionReactorModule *local_10;
  TransformStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pdVar13 = &(this->InnerTurbopump).CachedFluidDensity_kg__m3;
  *(uint32_t *)&local_10 = (uint32_t)(uintptr_t)(this);
  dVar20 = TurbopumpSubModule__GetLength_m((TurbopumpSubModule *)pdVar13);
  this_00 = &(this->NuclearReactor).GetEmittedRadiation_MemoizedValue;
  unique0x10000a5d = dVar20 / 1000.0;
  pCVar5 = NuclearReactorSubModule__GetTotalDimensions_m
                     ((NuclearReactorSubModule *)this_00,&local_54);
  local_34 = (TurbopumpSubModule *)&(this->OuterTurbopump).CachedFluidDensity_kg__m3;
  uStack_28 = pCVar5->Height / 1000.0;
  *(uint32_t *)&local_44 = (this->Thermocouple).CachedHotTemperature_K / 1000.0;
  local_54.Height = TurbopumpSubModule__GetLength_m(local_34);
  local_54.Height = local_54.Height / 1000.0;
  fVar14 = (float10)(**(code **)(this->_pad_0x0_0 + 0xa8))();
  local_3c = (double)fVar14;
  unique0x100003a4 = stack0xffffffe8 * 0.5;
  Graphics__Translate(0.0,0.0,unique0x100003a4 - (local_3c / 1000.0) * 0.5);
  pdVar12 = &(this->ReactorCoreDimensions_m).Height;
  TurbopumpSubModule__BuildModels
            ((TurbopumpSubModule *)pdVar13,(Darray_L_util__SharedPtr_L_GameModel_G___G_ *)pdVar12);
  uStack_28 = uStack_28 * 0.5;
  Graphics__Translate(0.0,0.0,uStack_28 + stack0xffffffe8);
  NuclearReactorSubModule__BuildModels
            ((NuclearReactorSubModule *)this_00,(Darray_L_util__SharedPtr_L_GameModel_G___G_ *)pdVar12);
  local_3c = local_44 * 0.5;
  Graphics__Translate(0.0,0.0,local_3c + uStack_28);
  Graphics__TransformStack__TransformStack(&local_9,Style__Default);
  uVar15 = 0x54442d18;
  uVar17 = 0x3fe921fb;
  uVar19 = 0;
  pRVar8 = (ReferenceController *)0x0;
  libm_sse2_sin_precise(0.0);
  (*(uint32_t*)((char*)&(local_20)+8)) = uVar19;
  (*(uint64_t*)&(local_20)) = (double)CONCAT44(uVar17,uVar15) * 0.0;
  pGStack_14 = (GameModel *)pRVar8;
  uVar16 = 0x54442d18;
  uVar18 = 0x3fe921fb;
  local_30 = uVar15;
  uStack_2c = uVar17;
  (*(uint32_t*)&(uStack_28)) = uVar19;
  (*(uint32_t*)((char*)&(uStack_28)+4)) = (uint32_t)(uintptr_t)(pRVar8);
  libm_sse2_cos_precise(0.0);
  QVar2.Y = uStack_2c;
  QVar2.X = local_30;
  QVar2.Y = (*(uint32_t*)&(local_20));
  QVar2.Z = (*(uint32_t*)((char*)&(local_20)+4));
  QVar2.Z = (*(uint32_t*)&(local_20));
  QVar2.W = (*(uint32_t*)((char*)&(local_20)+4));
  QVar2.W = uVar16;
  (*(uint32_t *)((char *)&(QVar2.W) + 4)) = uVar18;
  Graphics__Rotate(QVar2);
  pGVar6 = (GameModel *)(uintptr_t)(port_op_new(0xb8));
  pTVar3 = local_10;
  if (pGVar6 == (GameModel *)0x0) {
    pGVar6 = (GameModel *)0x0;
  }
  else {
    pGVar6 = (GameModel *)
             GameModel__GameModel
                       (pGVar6,(Material *)(local_10->InnerCooler)._pad_0x0_0,(Material *)0x0,
                        ({ __typeof__(((ulonglong)(uVar18 & 0xffffff00) << 0x20)) _t_ = ((ulonglong)(uVar18 & 0xffffff00) << 0x20); *(Maybe_L_int_G_ *)&_t_; }));
    if (pGVar6 != (GameModel *)0x0) goto LAB_00611d61;
  }
  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl",
                  0xd4,"NewPointer",(char *)0x0);
  DebugBreak();
LAB_00611d61:
  pGVar21 = pGVar6;
  pRVar7 = util__ReferenceControllerRegistry__Get();
  pRVar8 = util__ReferenceControllerRegistry__Register(pRVar7,pGVar21);
  if (pRVar8 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(pRVar8);
  }
  iVar11 = (pTVar3->NuclearReactor)._pad_0x0_0;
  pGStack_14 = (GameModel *)(iVar11 + 1);
  util__Darray_L_util__SharedPtr_L_GameModel_G___G___SetSize
            ((Darray_L_util__SharedPtr_L_GameModel_G___G_ *)&(pTVar3->ReactorCoreDimensions_m).Height,
             (int *)(local_20 + 0xc));
  pTVar3 = local_10;
  pdVar13 = &(local_10->ReactorCoreDimensions_m).Height;
  bVar4 = util__Darray_L_util__SharedPtr_L_GameModel_G___G___CheckSize
                    ((Darray_L_util__SharedPtr_L_GameModel_G___G_ *)pdVar13,iVar11);
  if (bVar4) {
    iVar11 = (pTVar3->NuclearReactor)._pad_0x0_0;
    iVar1 = *(int *)((int)&(pTVar3->ReactorCoreDimensions_m).Height + 4);
    pGStack_14 = *(GameModel **)(iVar1 + -8 + iVar11 * 8);
    (*(uint32_t*)((char*)&(uStack_28)+4)) = (uint32_t)(uintptr_t)(*(ReferenceController **)(iVar1 + -4 + iVar11 * 8));
    *(GameModel **)(iVar1 + -8 + iVar11 * 8) = pGVar6;
    *(ReferenceController **)(iVar1 + -4 + iVar11 * 8) = pRVar8;
    if (pRVar8 != (ReferenceController *)0x0) {
      util__ReferenceController__AddStrongReference(pRVar8);
    }
    if (((*(uint32_t*)((char*)&(uStack_28)+4)) != (ReferenceController *)0x0) &&
       (bVar4 = util__ReferenceController__ReleaseStrongReference((ReferenceController*)((ReferenceController*)((*(uint32_t*)((char*)&(uStack_28)+4))))), bVar4)) {
      if (pGStack_14 != (GameModel *)0x0) {
        GameModel___scalar_deleting_destructor(pGStack_14,1);
      }
      pGVar21 = pGStack_14;
      pRVar7 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar7,pGVar21);
    }
  }
  if ((pRVar8 != (ReferenceController *)0x0) &&
     (bVar4 = util__ReferenceController__ReleaseStrongReference(pRVar8), bVar4)) {
    if (pGVar6 != (GameModel *)0x0) {
      GameModel___scalar_deleting_destructor(pGVar6,1);
    }
    pRVar7 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar7,pGVar6);
  }
  puVar9 = (undefined4 *)(**(code **)(*(int *)pdVar13 + 8))();
  uStack_28 = *(double *)&(local_10->InnerCooler)._pad_0x8_2 +
              (local_10->Thermocouple).CachedArea_m2;
  pVVar10 = GameModel__GetVertexObject((GameModel *)*puVar9);
  iVar11 = GetUniversalRadialSegmentation(uStack_28);
  FillChamferedCylinder(uStack_28 / 1000.0,local_44,0.1,iVar11,pVVar10);
  Graphics__TransformStack___TransformStack(&local_9);
  Graphics__Translate(0.0,0.0,local_54.Height * 0.5 + local_3c);
  TurbopumpSubModule__BuildModels(local_34,(Darray_L_class_util__SharedPtr_L_struct_GameModel_G___G_*)((Darray_L_class_util__SharedPtr_L_struct_GameModel_G___G_*)((Darray_L_util__SharedPtr_L_GameModel_G___G_ *)pdVar13)));
  return;
}

//==== 00612200 GetDecimalPropertyBoundaries_00612200 ====


/* public: virtual class util__Maybe_L_structutil__Range_L_double_G__G_ 
   ThermoelectricFissionReactorModule__GetDecimalPropertyBoundaries(struct util__ClassMember const
   &)const  */

void 
ThermoelectricFissionReactorModule__GetDecimalPropertyBoundaries
          (ThermoelectricFissionReactorModule *this,ClassMember *param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  double dVar4;
  undefined4 *in_stack_00000008;
  char *pcStack_14;
  int iStack_10;
  char *pcStack_c;
  int iStack_8;
  
  if ((int)in_stack_00000008[1] < 1) {
    puVar2 = (undefined1 *)(&cde_l2_0b2b1c9f_NullString);
  }
  else {
    puVar2 = (undefined1 *)*in_stack_00000008;
  }
  for (pcVar1 = "ThermocoupleExitTemperature_K";
      (pcVar1[(int)(puVar2 + -0x92c298)] != '\0' || (*pcVar1 != '\0')); pcVar1 = pcVar1 + 1) {
    if (pcVar1[(int)(puVar2 + -0x92c298)] != *pcVar1) {
      (param_1->Name).Data = (char *)0x0;
      (param_1->Name).Capacity = 0;
      (param_1->Name).Length = 0;
      *(undefined4 *)&param_1->Type = 0;
      *(undefined1 *)&param_1->Offset = 0;
      return;
    }
  }
  iVar3 = *(int *)&(this->OuterTurbopump).CachedNoFluid;
  if (iVar3 == 0) {
    dVar4 = 0.0;
  }
  else {
    dVar4 = *(double *)(iVar3 + 0x98);
  }
  pcVar1 = (char *)0x0;
  iVar3 = 0x40490000;
  if (50.0 <= dVar4) {
    pcVar1 = (char *)(uintptr_t)(SUB84(dVar4,0));
    iVar3 = (int)((ulonglong)dVar4 >> 0x20);
  }
  pcStack_c = (char *)0x0;
  iStack_8 = 0x40b38800;
  pcStack_14 = pcVar1;
  iStack_10 = iVar3;
  if (5000.0 <= (double)CONCAT44(iVar3,pcVar1) && (double)CONCAT44(iVar3,pcVar1) != 5000.0) {
    pcStack_14 = (char *)0x0;
    iStack_10 = 0x40b38800;
    pcStack_c = pcVar1;
    iStack_8 = iVar3;
  }
  (param_1->Name).Data = pcStack_14;
  (param_1->Name).Capacity = iStack_10;
  (param_1->Name).Length = (int)pcStack_c;
  *(int *)&param_1->Type = iStack_8;
  *(undefined1 *)&param_1->Offset = 1;
  return;
}





//==== 006122b0 GetPointerPropertyChoices_006122b0 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   ThermoelectricFissionReactorModule__GetPointerPropertyChoices(struct util__ClassMember const
   &,class util__SerializationManagerInterface const *)const  */

ClassMember * 
ThermoelectricFissionReactorModule__GetPointerPropertyChoices
          (ThermoelectricFissionReactorModule *this,ClassMember *param_1,
          SerializationManagerInterface *param_2)

{
  char *pcVar1;
  SerializationManagerInterface SVar2;
  int in_stack_0000000c;
  
  if (*(int *)&param_2[1] < 1) {
    SVar2 = *(SerializationManagerInterface *)&cde_l2_0b2b1c9f_NullString;
  }
  else {
    SVar2 = *param_2;
  }
  for (pcVar1 = "OuterCoolant"; (pcVar1[(int)(*(int *)&SVar2 + -0x92c2b8)] != '\0' || (*pcVar1 != '\0'))
      ; pcVar1 = pcVar1 + 1) {
    if (pcVar1[(int)(*(int *)&SVar2 + -0x92c2b8)] != *pcVar1) {
      (param_1->Name).Data =
           (char *)&vftable_85;
      (param_1->Name).Capacity = 0;
      (param_1->Name).Length = 0;
      *(undefined4 *)&param_1->Type = 0;
      return param_1;
    }
  }
  GetMaterials((DataParser *)param_1,in_stack_0000000c,true);
  return param_1;
}





//==== 00612330 GetReflectionInfo_00612330 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   ThermoelectricFissionReactorModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall
ThermoelectricFissionReactorModule__GetReflectionInfo(ThermoelectricFissionReactorModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_8ef0f406__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_8ef0f406__thread_safe_static_guard_0__);
    if ( cde_l2_8ef0f406__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_c8155bcd_ReflectionInfo) = &vftable_264;
      _Init_thread_footer(& cde_l2_8ef0f406__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_c8155bcd_ReflectionInfo;
}





//==== 00612340 scalar_deleting_destructor_00612340 ====

/* public: virtual void * __thiscall ThermoelectricFissionReactorModule:: 0 scalardeletingdestructor(unsigned int) */

void * 
ThermoelectricFissionReactorModule___scalar_deleting_destructor
          (ThermoelectricFissionReactorModule *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined ** *)&(this->OuterTurbopump).CachedFluidDensity_kg__m3 = &vftable_5;
  pvVar1 = *(void **)((int)&(this->OuterTurbopump).CachedFluidDensity_kg__m3 + 4);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    *(undefined4 *)((int)&(this->OuterTurbopump).CachedFluidDensity_kg__m3 + 4) = 0;
  }
  this->OuterCoolant = (Material *)&vftable_5;
  if ((void *)((*(undefined1 *)(void *)((char *)(uintptr_t)(this) + 0x214)) != (void *)0x0)){
    port_op_delete((void *)&(*(undefined1 *)(void *)((char *)(uintptr_t)(this) + 0x214)));
    *(undefined4 *)&(*(undefined4 *)(void *)((char *)(uintptr_t)(this) + 0x214)) = 0;
  }
  (this->OuterCooler)._pad_0x0_0 = (int)&vftable_5;
  pvVar1 = (void *)(this->OuterCooler)._pad_0x4_1;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->OuterCooler)._pad_0x4_1 = 0;
  }
  *(undefined ** *)&(this->Thermocouple).CachedColdTemperature_K = &vftable_5;
  pvVar1 = *(void **)((int)&(this->Thermocouple).CachedColdTemperature_K + 4);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    *(undefined4 *)((int)&(this->Thermocouple).CachedColdTemperature_K + 4) = 0;
  }
  *(undefined ** *)&(this->InnerTurbopump).CachedFluidDensity_kg__m3 = &vftable_5;
  pvVar1 = *(void **)((int)&(this->InnerTurbopump).CachedFluidDensity_kg__m3 + 4);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    *(undefined4 *)((int)&(this->InnerTurbopump).CachedFluidDensity_kg__m3 + 4) = 0;
  }
  pvVar1 = *(void **)((int)&(this->NuclearReactor).GetEmittedRadiation_MemoizedValue.Data.
                            GammaRays_W + 4);
  *(undefined ***)&(this->NuclearReactor).GetEmittedRadiation_MemoizedValue.Data.GammaRays_W =
       &vftable_142;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
  }
  *(undefined4 *)
   ((int)&(this->NuclearReactor).GetEmittedRadiation_MemoizedValue.Data.GammaRays_W + 4) = 0;
  *(undefined ** *)&(this->NuclearReactor).GetEmittedRadiation_MemoizedValue.Data.GammaRays_W = (undefined **)(&vftable);
  *(undefined ** *)&((this->NuclearReactor).GetEmittedRadiation_MemoizedValue.Data.ThermalNeutrons_W) =
       &vftable_5;
  pvVar1 = *(void **)((int)&(this->NuclearReactor).GetEmittedRadiation_MemoizedValue.Data.
                            ThermalNeutrons_W + 4);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    *(undefined4 *)
     ((int)&(this->NuclearReactor).GetEmittedRadiation_MemoizedValue.Data.ThermalNeutrons_W + 4) = 0
    ;
  }
  Module___Module((Module *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x290);
  }
  return this;
}

//==== 00612490 GetTypeName_00612490 ====


/* public: virtual class util__Str_L_char_G_ 
   ThermoelectricFissionReactorModule__ReflectionInfoStruct_class_ThermoelectricFissionReactorModule___GetTypeName(void)const  */

Str_L_char_G_ * 
ThermoelectricFissionReactorModule__ReflectionInfoStruct_class_ThermoelectricFissionReactorModule___GetTypeName(ReflectionInfoStruct_L_class_ThermoelectricFissionReactorModule_G_ *this,
           Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"ThermoelectricFissionReactorModule");
  return __return_storage_ptr__;
}





//==== 006124b0 GetMembers_006124b0 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const __thiscall
   ThermoelectricFissionReactorModule__ReflectionInfoStruct_class_ThermoelectricFissionReactorModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * __thiscall
ThermoelectricFissionReactorModule__ReflectionInfoStruct_class_ThermoelectricFissionReactorModule___GetMembers(ReflectionInfoStruct_L_class_ThermoelectricFissionReactorModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_4c1f201c__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_4c1f201c__thread_safe_static_guard_0__),
      cde_l2_4c1f201c__thread_safe_static_guard_0__ == -1)) {
     cde_l2_efc42ebb_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_4c1f201c__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_efc42ebb_Count);
  iVar3 = 0;
  if (0 <  cde_l2_efc42ebb_Count) {
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
    } while (iVar3 <  cde_l2_efc42ebb_Count);
  }
  return in_stack_00000004;
}





//==== 006125f0 GetMember_006125f0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const __thiscall
   ThermoelectricFissionReactorModule__ReflectionInfoStruct_class_ThermoelectricFissionReactorModule___GetMember(class util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * __thiscall
ThermoelectricFissionReactorModule__ReflectionInfoStruct_class_ThermoelectricFissionReactorModule___GetMember(ReflectionInfoStruct_L_class_ThermoelectricFissionReactorModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_04ab3792__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_04ab3792__thread_safe_static_guard_0__),
      cde_l2_04ab3792__thread_safe_static_guard_0__ == -1)) {
     cde_l2_1a7ba2b7_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_04ab3792__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_1a7ba2b7_Count) {
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
LAB_0061267d:
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
          if (cVar3 == '\0') goto LAB_0061267d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_1a7ba2b7_Count);
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





//==== 00612790 GetFactory_00612790 ====


/* public: virtual class util__Reflectable * (__cdecl*__thiscall
   ThermoelectricFissionReactorModule__ReflectionInfoStruct_class_ThermoelectricFissionReactorModule___GetFactory(void)const )(void) */

_func_Reflectable_ptr * __thiscall
ThermoelectricFissionReactorModule__ReflectionInfoStruct_class_ThermoelectricFissionReactorModule___GetFactory(ReflectionInfoStruct_L_class_ThermoelectricFissionReactorModule_G_ *this)

{
  return StaticFactory;
}





//==== 006127a0 scalar_deleting_destructor_006127a0 ====


/* public: virtual void * __thiscall util__Darray_L_structutil__tuple3_L_int_Cint_Cdouble_G__G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_util__tuple3_int_int_double______scalar_deleting_destructor
          (Darray_L_struct_util__tuple3_L_int_Cint_Cdouble_G___G_ *this,uint param_1)

{
  *(undefined ***)this = &vftable_266;
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





//==== 006127f0 CheckSize_006127f0 ====


/* private: bool  util__Darray_L_structutil__tuple3_L_int_Cint_Cdouble_G__G___CheckSize(int) */

bool 
util__Darray_struct_util__tuple3_int_int_double_____CheckSize
          (Darray_L_struct_util__tuple3_L_int_Cint_Cdouble_G___G_ *this,int param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
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
              port_op_new(-(uint)((int)((ulonglong)uVar11 * 0x10 >> 0x20) != 0) |
                             (uint)((ulonglong)uVar11 * 0x10));
  if (puStack_c == (undefined4 *)0x0) {
    puStack_c = (undefined4 *)0x0;
  }
  else if (uVar11 != 0) {
    puVar7 = (undefined8 *)(puStack_c + 2);
    do {
      *(undefined4 *)(puVar7 + -1) = 0;
      *(undefined4 *)((int)puVar7 + -4) = 0;
      *puVar7 = 0;
      uVar11 = uVar11 - 1;
      puVar7 = puVar7 + 2;
    } while (uVar11 != 0);
  }
  puVar9 = *(undefined4 **)(this + 4);
  if (puVar9 != (undefined4 *)0x0) {
    iVar1 = *(int *)(this + 8);
    puVar10 = puVar9;
    puVar12 = puStack_c;
    if (puVar9 != puVar9 + param_1 * 4) {
      do {
        if (puVar12 == puStack_c + iVar1 * 4) break;
        uVar3 = *puVar10;
        uVar4 = puVar10[1];
        uVar5 = puVar10[2];
        uVar6 = puVar10[3];
        puVar10 = puVar10 + 4;
        *puVar12 = uVar3;
        puVar12[1] = uVar4;
        puVar12[2] = uVar5;
        puVar12[3] = uVar6;
        puVar9 = *(undefined4 **)(this + 4);
        puVar12 = puVar12 + 4;
      } while (puVar10 != puVar9 + param_1 * 4);
    }
    port_op_delete(puVar9);
    *(undefined4 *)(this + 4) = 0;
  }
  *(undefined4 **)(this + 4) = puStack_c;
  return bStack_5;
}





//==== 00612940 Clear_00612940 ====


/* public: virtual void  util__Darray_L_structutil__tuple3_L_int_Cint_Cdouble_G__G___Clear(void)
    */

void 
util__Darray_struct_util__tuple3_int_int_double_____Clear
          (Darray_L_struct_util__tuple3_L_int_Cint_Cdouble_G___G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 00612960 Render_00612960 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void  ModuleDiagram_class_ThermoelectricFissionReactorModule___Render(void)const  */

void 
ModuleDiagram_class_ThermoelectricFissionReactorModule___Render
          (ModuleDiagram_L_class_ThermoelectricFissionReactorModule_G_ *this)

{
  undefined8 stack0xfffffffc;
  Manager *pMVar1;
  NormalShader *pNVar2;
  Vec2_L_int_G_ VVar3;
  ShaderStack SStack_9;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pNVar2 = NormalShader__GetStatic();
  Graphics__ShaderStack__ShaderStack(&SStack_9,(Shader *)pNVar2);
  pMVar1 = *(Manager **)(this + 8);
  UIWidget__GetTrueSize((UIWidget *)this,&VVar3);
  ThermoelectricFissionReactorModule__RenderDiagram
            (*(ThermoelectricFissionReactorModule **)(this + 0x168),pMVar1,*(Vec2_L_int_G_ *)VVar3.X);
  Graphics__ShaderStack___ShaderStack(&SStack_9);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00613520 SetSize_00613520 ====


/* private: void  util__Darray_L_structutil__tuple3_L_int_Cint_Cdouble_G__G___SetSize(int const &)
    */

void 
util__Darray_struct_util__tuple3_int_int_double_____SetSize
          (Darray_L_struct_util__tuple3_L_int_Cint_Cdouble_G___G_ *this,int *param_1)

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
     (puVar3 = (undefined4 *)(iVar4 * 0x10 + iVar2),
     puVar3 != (undefined4 *)(*(int *)(this + 8) * 0x10 + iVar2))) {
    do {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3 = puVar3 + 4;
    } while (puVar3 != (undefined4 *)(*(int *)(this + 8) * 0x10 + *(int *)(this + 4)));
  }
  *(int *)(this + 8) = iVar4;
  return;
}





//==== 006135e0 StaticFactory_006135e0 ====

/* public: static class util__Reflectable * __cdecl
   ThermoelectricFissionReactorModule__ReflectionInfoStruct_class_ThermoelectricFissionReactorModule___StaticFactory(void) */

Reflectable * __cdecl
ThermoelectricFissionReactorModule__ReflectionInfoStruct_class_ThermoelectricFissionReactorModule___StaticFactory__o2(void)

{
  Module *this;
  
  this = (Module *)(uintptr_t)(port_op_new(0x290));
  if (this != (Module *)0x0) {
    memset(this,0,0x290);
    Module__Module(this);
    this->_pad_0x0_0 = (int)&vftable_for_EditorReflectable__22;
    *(undefined4 *)&(this->GetTotalPowerUsage_W_MemoizedValue).field_0xc = (undefined4)(uintptr_t)vftable_for_util__RTTIBaseClass__21;
    this[1].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    *(undefined4 *)&this[1].ModuleMemoizationHandlerInstance = 0;
    *(undefined4 *)&this[1].GetTotalPowerUsage_W_MemoizedValue.Data = 0;
    *(undefined4 *)((int)&this[1].GetTotalPowerUsage_W_MemoizedValue.Data + 4) = 0;
    NuclearReactorSubModule__NuclearReactorSubModule
              ((NuclearReactorSubModule *)&this[1].GetTotalPowerUsage_W_MemoizedValue.IsValidData);
    TurbopumpSubModule__TurbopumpSubModule((TurbopumpSubModule *)&this[4]._pad_0x8_2);
    this[5]._pad_0x0_0 = 0;
    this[5]._pad_0x4_1 = 0;
    this[5]._pad_0x8_2 = (int)(uintptr_t) (undefined **)(0);
    this[5]._pad_0xc_3 = 0;
    this[5].ModuleMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 = 0;
    this[5].ModuleMemoizationHandlerInstance.ResetFunctions.Data = (pmf_27707b45 *)0x0;
    this[5].ModuleMemoizationHandlerInstance.ResetFunctions.Size = 0;
    this[5]._pad_0x10_4 = (int)&vftable_257;
    this[6]._pad_0x4_1 = 0;
    this[6]._pad_0x8_2 = 0;
    this[6]._pad_0xc_3 = 0;
    this[6]._pad_0x0_0 = (int)&vftable_207;
    this[6].ModuleMemoizationHandlerInstance.ResetFunctions.Data = (pmf_27707b45 *)0x0;
    this[6].ModuleMemoizationHandlerInstance.ResetFunctions.Size = 0;
    this[6].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    *(undefined4 *)&this[6].ModuleMemoizationHandlerInstance = 0;
  *(undefined4 *)((char *)&this[6].GetTotalPowerUsage_W_MemoizedValue + 0xc) = 0;
    this[6].Models._pad_0x0_0 = 0;
    this[6].Models.Data = (SharedPtr_L_GameModel_G_ *)0x0;
    *(undefined ***)&this[6].GetTotalPowerUsage_W_MemoizedValue.IsValidData =
         &vftable_207;
    this[6].UsesCustomName = false;
    this[6].IsUserCreated = false;
  *(undefined2 *)((char *)&this[6] + 0x4a) = 0;
  *(undefined4 *)((char *)&this[6] + 0x4c) = 0;
    this[7]._pad_0x0_0 = 0;
    this[7]._pad_0x4_1 = 0;
    TurbopumpSubModule__TurbopumpSubModule
              ((TurbopumpSubModule *)&this[7].ModuleMemoizationHandlerInstance.ResetFunctions.Data);
    return (Reflectable *)this;
  }
  return (Reflectable *)0x0;
}

//==== 006136e0 StaticGetMemberByIndex_006136e0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   ThermoelectricFissionReactorModule__ReflectionInfoStruct_class_ThermoelectricFissionReactorModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
ThermoelectricFissionReactorModule__ReflectionInfoStruct_class_ThermoelectricFissionReactorModule___StaticGetMemberByIndex(ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_d8d7500b__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_d8d7500b__thread_safe_static_guard_0__);
    if ( cde_l2_d8d7500b__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_e0c4f467_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00972164 = 0;
      _DAT_00972168 = 0;
      _DAT_0097216c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972170,"Unused");
      _DAT_0097217c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972180,"SteamWorkshopID");
      _DAT_0097218c = 6;
      _DAT_00972190 = 0x10;
      _DAT_00972194 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972198,"AStr");
      _DAT_009721a4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009721a8,"Description");
      _DAT_009721b4 = 6;
      _DAT_009721b8 = 0x20;
      _DAT_009721bc = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009721c0,"AStr");
      _DAT_009721cc = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009721d0,"UsesCustomName");
      _DAT_009721dc = 1;
      _DAT_009721e0 = 0x68;
      _DAT_009721e4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009721e8,"bool");
      _DAT_009721f4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009721f8,"ReactorCoreDimensions_m");
      _DAT_00972204 = 0xb;
      _DAT_00972208 = 0x70;
      _DAT_0097220c = 0x10;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972210,"ModuleCylinder");
      _DAT_0097221c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972220,"NuclearReactor");
      _DAT_0097222c = 10;
      _DAT_00972230 = 0x80;
      _DAT_00972234 = 200;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972238,"NuclearReactorSubModule");
      _DAT_00972244 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972248,"InnerTurbopump");
      _DAT_00972254 = 10;
      _DAT_00972258 = 0x148;
      _DAT_0097225c = 0x48;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972260,"TurbopumpSubModule");
      _DAT_0097226c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972270,"ThermocoupleInnerDimensions_m");
      _DAT_0097227c = 0xb;
      _DAT_00972280 = 400;
      _DAT_00972284 = 0x10;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972288,"ModuleCylinder");
      _DAT_00972294 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972298,"Thermocouple");
      _DAT_009722a4 = 10;
      _DAT_009722a8 = 0x1a0;
      _DAT_009722ac = 0x38;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009722b0,"ThermocoupleSubModule");
      _DAT_009722bc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009722c0,"ThermocoupleExitTemperature_K");
      _DAT_009722cc = 4;
      _DAT_009722d0 = 0x1d8;
      _DAT_009722d4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009722d8,"double");
      _DAT_009722e4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009722e8,"InnerCooler");
      _DAT_009722f4 = 10;
      _DAT_009722f8 = 0x1e0;
      _DAT_009722fc = 0x30;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972300,"CylindricalCoolerSubModule");
      _DAT_0097230c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972310,"OuterCooler");
      _DAT_0097231c = 10;
      _DAT_00972320 = 0x210;
      _DAT_00972324 = 0x30;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972328,"CylindricalCoolerSubModule");
      _DAT_00972334 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972338,"OuterCoolant");
      _DAT_00972344 = 8;
      _DAT_00972348 = 0x240;
      _DAT_0097234c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972350,"Material");
      _DAT_0097235c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972360,"OuterTurbopump");
      _DAT_0097236c = 10;
      _DAT_00972370 = 0x248;
      _DAT_00972374 = 0x48;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972378,"TurbopumpSubModule");
      _DAT_00972384 = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_ThermoelectricFissionReactorModule__ReflectionInfoStruct_class_ThermoelectricFissionReactorModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_d8d7500b__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_e0c4f467_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_00972164 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_00972168 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_0097216c + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_00972170 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0097217c)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0097217d)[iVar1];
  return __return_storage_ptr__;
}





//==== 00613b50 StaticGetMemberCount_00613b50 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl ThermoelectricFissionReactorModule__ReflectionInfoStruct_class_ThermoelectricFissionReactorModule___StaticGetMemberCount(void) */

int __cdecl
ThermoelectricFissionReactorModule__ReflectionInfoStruct_class_ThermoelectricFissionReactorModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_5b346c14__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_5b346c14__thread_safe_static_guard_0__);
    if ( cde_l2_5b346c14__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_f3a2c87f_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00971f2c = 0;
      _DAT_00971f30 = 0;
      _DAT_00971f34 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971f38,"Unused");
      _DAT_00971f44 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971f48,"SteamWorkshopID");
      _DAT_00971f54 = 6;
      _DAT_00971f58 = 0x10;
      _DAT_00971f5c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971f60,"AStr");
      _DAT_00971f6c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971f70,"Description");
      _DAT_00971f7c = 6;
      _DAT_00971f80 = 0x20;
      _DAT_00971f84 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971f88,"AStr");
      _DAT_00971f94 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971f98,"UsesCustomName");
      _DAT_00971fa4 = 1;
      _DAT_00971fa8 = 0x68;
      _DAT_00971fac = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971fb0,"bool");
      _DAT_00971fbc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971fc0,"ReactorCoreDimensions_m");
      _DAT_00971fcc = 0xb;
      _DAT_00971fd0 = 0x70;
      _DAT_00971fd4 = 0x10;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971fd8,"ModuleCylinder");
      _DAT_00971fe4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00971fe8,"NuclearReactor");
      _DAT_00971ff4 = 10;
      _DAT_00971ff8 = 0x80;
      _DAT_00971ffc = 200;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972000,"NuclearReactorSubModule");
      _DAT_0097200c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972010,"InnerTurbopump");
      _DAT_0097201c = 10;
      _DAT_00972020 = 0x148;
      _DAT_00972024 = 0x48;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972028,"TurbopumpSubModule");
      _DAT_00972034 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972038,"ThermocoupleInnerDimensions_m");
      _DAT_00972044 = 0xb;
      _DAT_00972048 = 400;
      _DAT_0097204c = 0x10;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972050,"ModuleCylinder");
      _DAT_0097205c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972060,"Thermocouple");
      _DAT_0097206c = 10;
      _DAT_00972070 = 0x1a0;
      _DAT_00972074 = 0x38;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972078,"ThermocoupleSubModule");
      _DAT_00972084 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972088,"ThermocoupleExitTemperature_K");
      _DAT_00972094 = 4;
      _DAT_00972098 = 0x1d8;
      _DAT_0097209c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009720a0,"double");
      _DAT_009720ac = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009720b0,"InnerCooler");
      _DAT_009720bc = 10;
      _DAT_009720c0 = 0x1e0;
      _DAT_009720c4 = 0x30;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009720c8,"CylindricalCoolerSubModule");
      _DAT_009720d4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009720d8,"OuterCooler");
      _DAT_009720e4 = 10;
      _DAT_009720e8 = 0x210;
      _DAT_009720ec = 0x30;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009720f0,"CylindricalCoolerSubModule");
      _DAT_009720fc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972100,"OuterCoolant");
      _DAT_0097210c = 8;
      _DAT_00972110 = 0x240;
      _DAT_00972114 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972118,"Material");
      _DAT_00972124 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972128,"OuterTurbopump");
      _DAT_00972134 = 10;
      _DAT_00972138 = 0x248;
      _DAT_0097213c = 0x48;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972140,"TurbopumpSubModule");
      _DAT_0097214c = 0;
      atexit( private__static_int_const___cdecl_ThermoelectricFissionReactorModule__ReflectionInfoStruct_class_ThermoelectricFissionReactorModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_5b346c14__thread_safe_static_guard_0__);
    }
  }
  return 0xe;
}





//==== 00613f70 StaticGetReflectionInfo_00613f70 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct ThermoelectricFissionReactorModule__ReflectionInfoStruct_L_class_ThermoelectricFissionReactorModule_G_ * __cdecl
   ThermoelectricFissionReactorModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_ThermoelectricFissionReactorModule_G_ * __cdecl
ThermoelectricFissionReactorModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_8ef0f406__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_8ef0f406__thread_safe_static_guard_0__);
    if ( cde_l2_8ef0f406__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_c8155bcd_ReflectionInfo) = &vftable_264;
      _Init_thread_footer(& cde_l2_8ef0f406__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_c8155bcd_ReflectionInfo;
}





//==== 00613fd0 GetClassID_00613fd0 ====


/* public: virtual unsigned long __thiscall TurboelectricFissionReactorModule__GetClassID(void)const
    */

ulong __thiscall
TurboelectricFissionReactorModule__GetClassID(TurboelectricFissionReactorModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_078fbf6a__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_078fbf6a__thread_safe_static_guard_0__);
    if ( cde_l2_078fbf6a__thread_safe_static_guard_0__ == -1) {
       cde_l2_740b91f9_ID = util__GetHash("TurboelectricFissionReactorModule");
      _Init_thread_footer(& cde_l2_078fbf6a__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_740b91f9_ID;
}





//==== 00614030 GetGeneratedName_00614030 ====

/* public: virtual class util__Str_L_char_G_ 
   TurboelectricFissionReactorModule__GetGeneratedName(void)const  */

Str_L_char_G_ * 
TurboelectricFissionReactorModule__GetGeneratedName
          (TurboelectricFissionReactorModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined8 stack0xffffff54;
  Str_L_char_G_ SVar1;
  LocStr *pLVar2;
  Str_L_char_G_ *pSVar3;
  Str_L_char_G_ *pSVar4;
  Str_L_char_G_ *this_00;
  Str_L_char_G_ *pSVar5;
  float10 fVar6;
  char *in_stack_ffffff54;
  int in_stack_ffffff58;
  int iVar7;
  Str_L_char_G_ *__return_storage_ptr___00;
  void *local_88 [3];
  void *local_7c;
  void *local_70 [3];
  void *local_64;
  Str_L_char_G_ local_58;
  Str_L_char_G_ local_4c;
  Str_L_char_G_ local_40;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char(&local_58,"Powerplant TurboReactor");
  util__Str_char___Str_char(&local_34,"Space");
  util__Str_char___Str_char(&local_28,"GetPowerGenerated_W()");
  local_1c.Data = (char *)0x0;
  local_1c.Capacity = 0;
  local_1c.Length = 0;
  local_10.Data = (char *)0x0;
  local_10.Capacity = 0;
  local_10.Length = 0;
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)local_88,&local_58,&local_1c);
  pSVar3 = util__LocStr__operator__o3(pLVar2);
  iVar7 = 0x6140bd;
  __return_storage_ptr___00 = __return_storage_ptr__;
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)local_70,&local_34,&local_10);
  pSVar4 = util__LocStr__operator__o3(pLVar2);
  pSVar5 = &local_40;
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff54,&local_28);
  fVar6 = (float10)(**(code **)(this->_pad_0x0_0 + 0x154))();
  SVar1.Capacity = iVar7;
  SVar1.Data = (char *)in_stack_ffffff58;
  SVar1.Length = (int)pSVar5;
  this_00 = Print(&local_4c,
                  (double)CONCAT44(in_stack_ffffff54,(int)((ulonglong)(double)fVar6 >> 0x20)),SVar1)
  ;
  pSVar5 = util__Str_char___operator(this_00,pSVar5,pSVar4);
  util__Str_char___operator(pSVar5,__return_storage_ptr___00,pSVar3);
  if (local_40.Data != (char *)0x0) {
    port_op_delete(local_40.Data);
    local_40.Data = (char *)0x0;
  }
  if (local_4c.Data != (char *)0x0) {
    port_op_delete(local_4c.Data);
    local_4c.Data = (char *)0x0;
  }
  if (local_64 != (void *)0x0) {
    port_op_delete(local_64);
    local_64 = (void *)0x0;
  }
  if (local_70[0] != (void *)0x0) {
    port_op_delete(local_70[0]);
    local_70[0] = (void *)0x0;
  }
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
    local_10.Data = (char *)0x0;
  }
  if (local_7c != (void *)0x0) {
    port_op_delete(local_7c);
    local_7c = (void *)0x0;
  }
  if (local_88[0] != (void *)0x0) {
    port_op_delete(local_88[0]);
    local_88[0] = (void *)0x0;
  }
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
    local_1c.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_58.Data != (char *)0x0) {
    port_op_delete(local_58.Data);
  }
  return __return_storage_ptr__;
}

//==== 00614210 GetIcon_00614210 ====


/* public: virtual void (__cdecl*__thiscall TurboelectricFissionReactorModule__GetIcon(void)const
   )(void) */

_func_void * __thiscall
TurboelectricFissionReactorModule__GetIcon(TurboelectricFissionReactorModule *this)

{
  return Icons__TurboelectricFissionReactor;
}





//==== 006148f0 GetHullRadius_m_006148f0 ====


/* public: virtual double __thiscall TurboelectricFissionReactorModule__GetHullRadius_m(void)const
    */

double __thiscall
TurboelectricFissionReactorModule__GetHullRadius_m(TurboelectricFissionReactorModule *this)

{
  Cylinder_L_double_G_ *pCVar1;
  Cylinder_L_double_G_ *pCVar2;
  Cylinder_L_double_G_ CStack_3c;
  Cylinder_L_double_G_ CStack_2c;
  Cylinder_L_double_G_ CStack_1c;
  double dStack_c;
  
  pCVar1 = TurbopumpSubModule__GetTurbopumpCylinder_m
                     ((TurbopumpSubModule *)&(this->Turbopump).CachedFluidDensity_kg__m3,&CStack_1c)
  ;
  pCVar2 = NuclearReactorSubModule__GetTotalDimensions_m
                     ((NuclearReactorSubModule *)
                      &(this->NuclearReactor).GetEmittedRadiation_MemoizedValue,&CStack_2c);
  dStack_c = pCVar2->Radius;
  if (pCVar2->Radius <= pCVar1->Radius) {
    dStack_c = pCVar1->Radius;
  }
  pCVar1 = TurbineSubModule__GetTurbineCylinder_m
                     ((TurbineSubModule *)&(this->Turbine).StageCount,&CStack_3c);
  if (dStack_c <= pCVar1->Radius) {
    dStack_c = pCVar1->Radius;
  }
  return dStack_c;
}





//==== 00614950 GetHullLength_m_00614950 ====


/* public: virtual double __thiscall TurboelectricFissionReactorModule__GetHullLength_m(void)const
    */

double __thiscall
TurboelectricFissionReactorModule__GetHullLength_m(TurboelectricFissionReactorModule *this)

{
  Cylinder_L_double_G_ *pCVar1;
  Cylinder_L_double_G_ *pCVar2;
  Cylinder_L_double_G_ CStack_3c;
  Cylinder_L_double_G_ CStack_2c;
  Cylinder_L_double_G_ CStack_1c;
  double dStack_c;
  
  pCVar1 = TurbopumpSubModule__GetTurbopumpCylinder_m
                     ((TurbopumpSubModule *)&(this->Turbopump).CachedFluidDensity_kg__m3,&CStack_1c)
  ;
  pCVar2 = NuclearReactorSubModule__GetTotalDimensions_m
                     ((NuclearReactorSubModule *)
                      &(this->NuclearReactor).GetEmittedRadiation_MemoizedValue,&CStack_2c);
  dStack_c = pCVar1->Height + pCVar2->Height;
  pCVar1 = TurbineSubModule__GetTurbineCylinder_m
                     ((TurbineSubModule *)&(this->Turbine).StageCount,&CStack_3c);
  return pCVar1->Height + dStack_c;
}





//==== 006149b0 GetPowerGenerated_W_006149b0 ====


/* public: virtual double __thiscall
   TurboelectricFissionReactorModule__GetPowerGenerated_W(void)const  */

double __thiscall
TurboelectricFissionReactorModule__GetPowerGenerated_W(TurboelectricFissionReactorModule *this)

{
  double dVar1;
  double dVar2;
  
  dVar1 = TurbineSubModule__GetPowerGenerated_W((TurbineSubModule *)&(this->Turbine).StageCount);
  dVar2 = TurbopumpSubModule__GetPowerRequired_W
                    ((TurbopumpSubModule *)&(this->Turbopump).CachedFluidDensity_kg__m3);
  return dVar1 - dVar2;
}





//==== 00614a50 GetEfficiency_Percent_00614a50 ====

/* public: virtual double __thiscall
   TurboelectricFissionReactorModule__GetEfficiency_Percent(void)const  */

double __thiscall
TurboelectricFissionReactorModule__GetEfficiency_Percent(TurboelectricFissionReactorModule *this)

{
  float10 fVar1;
  double dVar2;
  
  fVar1 = (float10)(**(code **)(this->_pad_0x0_0 + 0x154))();
  dVar2 = NuclearReactorSubModule__GetThermalHeatGenerated_W
                    ((NuclearReactorSubModule *)
                     &(this->NuclearReactor).GetEmittedRadiation_MemoizedValue);
  dVar2 = (double)fVar1 / dVar2;
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  if (1.0 <= dVar2) {
    dVar2 = 1.0;
  }
  return dVar2;
}

//==== 00614be0 GenerateDesignUI_00614be0 ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual struct UIWidget * 
   TurboelectricFissionReactorModule__GenerateDesignUI(class Manager *)const  */

UIWidget * 
TurboelectricFissionReactorModule__GenerateDesignUI
          (TurboelectricFissionReactorModule *this,Manager *param_1)

{
  undefined8 stack0xfffffb84;
  undefined8 stack0xfffffbb8;
  UIAttributes UVar1;
  UIAttributes UVar2;
  LayoutAttributes LVar3;
  bool bVar4;
  bool bVar5;
  UIWidget *pUVar6;
  UIAttributes *pUVar7;
  undefined4 *puVar8;
  UIWidget *pUVar9;
  Data *pDVar10;
  undefined1 in_stack_fffffb84 [44];
  void *in_stack_fffffbb0;
  _func___cdecl_bool_void_ptr *in_stack_fffffbb4;
  undefined1 auVar11 [12];
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [44];
  undefined1 auVar19 [44];
  undefined1 in_stack_fffffbb8 [268];
  float in_stack_fffffcc4;
  float fVar21;
  float in_stack_fffffcc8;
  float fVar22;
  float in_stack_fffffccc;
  undefined4 in_stack_fffffcd0;
  undefined4 uVar23;
  void *in_stack_fffffcd4;
  void *pvVar24;
  _func___cdecl_Color_void_ptr *in_stack_fffffcd8;
  _func___cdecl_Color_void_ptr *p_Var25;
  int in_stack_fffffcdc;
  int iVar26;
  int in_stack_fffffce0;
  int iVar27;
  int in_stack_fffffce4;
  int iVar28;
  int in_stack_fffffce8;
  int iVar29;
  float in_stack_fffffcec;
  float in_stack_fffffcf0;
  float fVar30;
  float in_stack_fffffcf4;
  float fVar31;
  float fVar32;
  float fVar33;
  Manager *pMVar34;
  undefined4 uVar35;
  UIAttributes local_2f4;
  UIAttributes local_1ac;
  LayoutAttributes local_64;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  undefined8 uStack_24;
  Darray_L_util__SharedPtr_L_UIWidget_G___G_ local_1c;
  TurboelectricFissionReactorModule *local_c;
  UIRowLayout *local_8;
  undefined1 auVar20 [32];
  
  bVar5 = false;
  bVar4 = false;
  local_8 = (UIRowLayout *)0x0;
  local_c = this;
  local_8 = (UIRowLayout *)(uintptr_t)(port_op_new(0x218));
  if (local_8 == (UIRowLayout *)0x0) {
    pUVar6 = (UIWidget *)0x0;
  }
  else {
    pUVar6 = (UIWidget *)(uintptr_t)(port_op_new(0x170));
    if (pUVar6 == (UIWidget *)0x0) {
      pUVar6 = (UIWidget *)0x0;
    }
    else {
      fVar32 = 8.935374e-39;
      pMVar34 = param_1;
      UIAttributes__UIAttributes(&local_1ac,param_1);
      local_34 = 0;
      uStack_2c = 0x3ff0000000000000;
      uStack_24 = 0x3ff0000000000000;
      uStack_30 = 0;
      local_1ac.FillProportion.Getter.Callee = (void *)0x0;
      local_1ac.FillProportion.Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0;
      local_1ac.FillProportion.Value.X = 0;
      local_1ac.FillProportion.Value.Y = 0x3ff00000;
      local_1ac.FillProportion.Value.Y = 1.0;
      in_stack_fffffbb0 = (void *)0x614c74;
      UIAttributes__UIAttributes((UIAttributes *)&stack0xfffffbb8,&local_1ac);
      in_stack_fffffbb4 = (_func___cdecl_bool_void_ptr *)0x614c7b;
      UVar2.BackgroundColor.Data.Value.Saturation = in_stack_fffffcc4;
*(uint32_t *)&auVar11 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 4)));
*(uint32_t *)&auVar14 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 32)));
*(uint32_t *)&auVar15 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 44)));
*(uint32_t *)&auVar17 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 180)));
*(uint32_t *)&auVar19 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 196)));
      UVar2.Parent = (Manager *)(*(uint32_t*)&(in_stack_fffffbb8));
      UVar2.Tag.Data = (char *)(*(uint32_t*)&(auVar11));
      UVar2.Tag.Capacity = (*(uint32_t*)((char*)&(auVar11)+4));
      UVar2.Tag.Length = (*(uint32_t*)((char*)&(auVar11)+8));
      uVar12 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 16)),0);
      uVar13 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 16)),8);
      UVar2.Location.Getter.Callee = (void *)(int)uVar12;
      UVar2.Location.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
      UVar2.Location.Value.X = (int)uVar13;
      UVar2.Location.Value.Y = (int)((ulonglong)uVar13 >> 0x20);
      UVar2.Visible.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar14));
      UVar2.Visible.Getter.CallbackFunction =
           (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar14)) >> 0x20);
      UVar2.Visible.Value = (bool)auVar14[8];
      (*(uint24_t *)((char *)&(UVar2.Visible) + 9)) = (*(uint24_t*)((char*)&(auVar14)+9));
      UVar2.Enabled.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar15));
      UVar2.Enabled.Getter.CallbackFunction =
           (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar15)) >> 0x20);
      UVar2.Enabled.Value = (bool)auVar15[8];
      (*(uint24_t *)((char *)&(UVar2.Enabled) + 9)) = (*(uint24_t*)((char*)&(auVar15)+9));
      uVar12 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 56)),0);
      uVar13 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 56)),8);
      UVar2.DesiredSize.Getter.Callee = (void *)(int)uVar12;
      UVar2.DesiredSize.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
      UVar2.DesiredSize.Value.X = (int)uVar13;
      UVar2.DesiredSize.Value.Y = (int)((ulonglong)uVar13 >> 0x20);
      uVar12 = SUB248((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 72)),0);
*(uint32_t *)&auVar16 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 72)),8));
      UVar2.FillProportion.Getter.Callee = (void *)(int)uVar12;
      UVar2.FillProportion.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
      UVar2.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar16));
      UVar2.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar16)+8));
      uVar12 = SUB128((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 96)),0);
      UVar2.HitTestShape.Getter.Callee = (void *)(int)uVar12;
      UVar2.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)(int)((ulonglong)uVar12 >> 0x20));
      UVar2.HitTestShape.Value = SUB124((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 96)),8);
      (*(uint32_t *)((char *)&(UVar2) + 108)) = (*(uint32_t *)((char *)&(in_stack_fffffbb8) + 108));
      uVar12 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 112)),0);
      UVar2.Depth.Getter.Callee = (void *)(int)uVar12;
      UVar2.Depth.Getter.CallbackFunction =
           (_func___cdecl_double_void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
      UVar2.Depth.Value = (double)SUB168((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 112)),8);
      uVar12 = SUB128((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 128)),0);
      UVar2.Icon.Getter.Callee = (void *)(int)uVar12;
      UVar2.Icon.Getter.CallbackFunction = (void (* (*)(void *))(void))((_func___cdecl__func___cdecl_void_ptr_void_ptr *)(int)((ulonglong)uVar12 >> 0x20));
      UVar2.Icon.Value = (_func___cdecl_void *)SUB124((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 128)),8);
      uVar12 = SUB208((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 140)),0);
*(uint32_t *)&auVar11 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 140)),8));
      UVar2.Tooltip.Getter.Callee = (void *)(int)uVar12;
      UVar2.Tooltip.Getter.CallbackFunction =
           (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
      UVar2.Tooltip.Value.Data = (char *)(*(uint32_t*)&(auVar11));
      UVar2.Tooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar11)+4));
      UVar2.Tooltip.Value.Length = (*(uint32_t*)((char*)&(auVar11)+8));
      uVar12 = SUB208((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 160)),0);
*(uint32_t *)&auVar11 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 160)),8));
      UVar2.VerboseTooltip.Getter.Callee = (void *)(int)uVar12;
      UVar2.VerboseTooltip.Getter.CallbackFunction =
           (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
      UVar2.VerboseTooltip.Value.Data = (char *)(*(uint32_t*)&(auVar11));
      UVar2.VerboseTooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar11)+4));
      UVar2.VerboseTooltip.Value.Length = (*(uint32_t*)((char*)&(auVar11)+8));
      uVar12 = SUB128((*(uint32_t *)((char *)&(auVar17) + 0)),0);
      UVar2.TextFont.Data.Getter.Callee = (void *)(int)uVar12;
      UVar2.TextFont.Data.Getter.CallbackFunction =
           (_func___cdecl_Font_ptr_void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
      UVar2.TextFont.Data.Value = (Font *)SUB124((*(uint32_t *)((char *)&(auVar17) + 0)),8);
      UVar2.TextFont.IsValidData = (bool)auVar17[0xc];
      (*(uint32_t *)((char *)&(UVar2.TextFont) + 13)) = (*(uint32_t *)((char *)&(auVar17) + 13));
      uVar12 = SUB408((*(uint32_t *)((char *)&(auVar19) + 0)),0);
*(uint32_t *)&auVar20 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar19) + 0)),8));
      UVar2.ForegroundColor.Data.Getter.Callee = (void *)(int)uVar12;
      UVar2.ForegroundColor.Data.Getter.CallbackFunction =
           (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
      UVar2.ForegroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar20));
      UVar2.ForegroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar20)+4));
      UVar2.ForegroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar20)+8));
      UVar2.ForegroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar20) + 12));
      UVar2.ForegroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar20) + 16));
      UVar2.ForegroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar20) + 20));
      UVar2.ForegroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar20) + 24));
      UVar2.ForegroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar20) + 28));
      UVar2.ForegroundColor.IsValidData = (bool)auVar19[0x28];
      (*(uint32_t *)((char *)&(UVar2.ForegroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar19) + 41));
      UVar2.BackgroundColor.Data.Getter.Callee = (void *)(int)(*(uint64_t *)((char *)&(in_stack_fffffbb8) + 240));
      UVar2.BackgroundColor.Data.Getter.CallbackFunction =
           (_func___cdecl_Color_void_ptr *)(int)((ulonglong)(*(uint64_t *)((char *)&(in_stack_fffffbb8) + 240)) >> 0x20);
      UVar2.BackgroundColor.Data.Value._pad_0x0_0 = (*(uint32_t *)((char *)&(in_stack_fffffbb8) + 248));
      UVar2.BackgroundColor.Data.Value._pad_0x4_1 = (*(uint32_t *)((char *)&(in_stack_fffffbb8) + 252));
      UVar2.BackgroundColor.Data.Value._pad_0x8_2 = (*(uint32_t *)((char *)&(in_stack_fffffbb8) + 256));
      UVar2.BackgroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(in_stack_fffffbb8) + 260));
      UVar2.BackgroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(in_stack_fffffbb8) + 264));
      UVar2.BackgroundColor.Data.Value.Value = in_stack_fffffcc8;
      UVar2.BackgroundColor.Data.Value.Alpha = in_stack_fffffccc;
      UVar2.BackgroundColor.IsValidData = SUB41(in_stack_fffffcd0,0);
      (*(uint32_t *)((char *)&(UVar2.BackgroundColor) + 41)) = SUB43(in_stack_fffffcd0,1);
      UVar2.TextColor.Data.Getter.Callee = in_stack_fffffcd4;
      UVar2.TextColor.Data.Getter.CallbackFunction = in_stack_fffffcd8;
      UVar2.TextColor.Data.Value._pad_0x0_0 = in_stack_fffffcdc;
      UVar2.TextColor.Data.Value._pad_0x4_1 = in_stack_fffffce0;
      UVar2.TextColor.Data.Value._pad_0x8_2 = in_stack_fffffce4;
      UVar2.TextColor.Data.Value._pad_0xc_3 = in_stack_fffffce8;
      UVar2.TextColor.Data.Value.Hue_degrees = in_stack_fffffcec;
      UVar2.TextColor.Data.Value.Saturation = in_stack_fffffcf0;
      UVar2.TextColor.Data.Value.Value = in_stack_fffffcf4;
      UVar2.TextColor.Data.Value.Alpha = fVar32;
      (*(uint32_t *)((char *)&(UVar2.TextColor) + 40)) = (uint32_t)(uintptr_t)(pMVar34);
      UIWidget__UIWidget(pUVar6,UVar2);
      pUVar6->_pad_0x0_0 = (int)&vftable_269;
      pUVar6[1]._pad_0x0_0 = (int)this;
      UIAttributes___UIAttributes(&local_1ac);
    }
    local_1c._pad_0x0_0 = (int)&vftable_48;
    local_1c.Data = (SharedPtr_L_UIWidget_G_ *)0x0;
    local_1c.Size = 0;
    local_1c.Capacity = 0;
    pUVar7 = (UIAttributes *)UIAttributes__UIAttributes(&local_2f4,param_1);
    local_34 = 0;
    uStack_2c = 0x3ff0000000000000;
    uStack_24 = 0x3ff0000000000000;
    uStack_30 = 0;
    (pUVar7->FillProportion).Getter.Callee = (void *)0x0;
    (pUVar7->FillProportion).Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0;
    *(undefined4 *)&(pUVar7->FillProportion).Value.X = 0;
    *(undefined4 *)((int)&(pUVar7->FillProportion).Value.X + 4) = 0x3ff00000;
    (pUVar7->FillProportion).Value.Y = 1.0;
    puVar8 = (undefined4 *)LayoutAttributes__LayoutAttributes(&local_64);
    uVar23 = *puVar8;
    pvVar24 = (void *)puVar8[1];
    p_Var25 = (_func___cdecl_Color_void_ptr *)puVar8[2];
    iVar26 = puVar8[3];
    iVar27 = puVar8[4];
    iVar28 = puVar8[5];
    iVar29 = puVar8[6];
    fVar32 = (float)puVar8[7];
    fVar30 = (float)puVar8[8];
    fVar31 = (float)puVar8[9];
    fVar33 = (float)puVar8[10];
    uVar35 = puVar8[0xb];
    pUVar9 = NuclearReactorSubModule__GenerateModuleDiagram
                       ((NuclearReactorSubModule *)
                        &(local_c->NuclearReactor).GetEmittedRadiation_MemoizedValue,param_1);
    fVar21 = 8.935715e-39;
    pDVar10 = (Data *)(uintptr_t)(UILayout__Data__Add((Data *)&local_1c,pUVar9));
    fVar22 = 8.935724e-39;
    pDVar10 = (Data *)(uintptr_t)(UILayout__Data__Add(pDVar10,pUVar6));
    UIAttributes__UIAttributes((UIAttributes *)&stack0xfffffb84,pUVar7);
    UVar1.Enabled.Getter.Callee = in_stack_fffffbb0;
*(uint32_t *)&auVar11 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffb84) + 4)));
*(uint32_t *)&auVar14 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffb84) + 32)));
    UVar1.Parent = (Manager *)(*(uint32_t*)&(in_stack_fffffb84));
    UVar1.Tag.Data = (char *)(*(uint32_t*)&(auVar11));
    UVar1.Tag.Capacity = (*(uint32_t*)((char*)&(auVar11)+4));
    UVar1.Tag.Length = (*(uint32_t*)((char*)&(auVar11)+8));
    uVar12 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffb84) + 16)),0);
    uVar13 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffb84) + 16)),8);
    UVar1.Location.Getter.Callee = (void *)(int)uVar12;
    UVar1.Location.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
    UVar1.Location.Value.X = (int)uVar13;
    UVar1.Location.Value.Y = (int)((ulonglong)uVar13 >> 0x20);
    UVar1.Visible.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar14));
    UVar1.Visible.Getter.CallbackFunction =
         (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar14)) >> 0x20);
    UVar1.Visible.Value = (bool)auVar14[8];
    (*(uint24_t *)((char *)&(UVar1.Visible) + 9)) = (*(uint24_t*)((char*)&(auVar14)+9));
    UVar1.Enabled.Getter.CallbackFunction = in_stack_fffffbb4;
*(uint32_t *)&auVar17 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 128)));
*(uint32_t *)&auVar19 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 144)));
*(uint32_t *)&auVar18 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 188)));
    UVar1.Enabled.Value = (bool)in_stack_fffffbb8[0];
    (*(uint24_t *)((char *)&(UVar1.Enabled) + 9)) = (*(uint24_t*)((char*)&(in_stack_fffffbb8)+1));
    uVar12 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 4)),0);
    uVar13 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 4)),8);
    UVar1.DesiredSize.Getter.Callee = (void *)(int)uVar12;
    UVar1.DesiredSize.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
    UVar1.DesiredSize.Value.X = (int)uVar13;
    UVar1.DesiredSize.Value.Y = (int)((ulonglong)uVar13 >> 0x20);
    uVar12 = SUB248((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 20)),0);
*(uint32_t *)&auVar16 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 20)),8));
    UVar1.FillProportion.Getter.Callee = (void *)(int)uVar12;
    UVar1.FillProportion.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
    UVar1.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar16));
    UVar1.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar16)+8));
    uVar12 = SUB128((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 44)),0);
    UVar1.HitTestShape.Getter.Callee = (void *)(int)uVar12;
    UVar1.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)(int)((ulonglong)uVar12 >> 0x20));
    UVar1.HitTestShape.Value = SUB124((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 44)),8);
    (*(uint32_t *)((char *)&(UVar1) + 108)) = (*(uint32_t *)((char *)&(in_stack_fffffbb8) + 56));
    uVar12 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 60)),0);
    UVar1.Depth.Getter.Callee = (void *)(int)uVar12;
    UVar1.Depth.Getter.CallbackFunction =
         (_func___cdecl_double_void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
    UVar1.Depth.Value = (double)SUB168((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 60)),8);
    uVar12 = SUB128((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 76)),0);
    UVar1.Icon.Getter.Callee = (void *)(int)uVar12;
    UVar1.Icon.Getter.CallbackFunction = (void (* (*)(void *))(void))((_func___cdecl__func___cdecl_void_ptr_void_ptr *)(int)((ulonglong)uVar12 >> 0x20));
    UVar1.Icon.Value = (_func___cdecl_void *)SUB124((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 76)),8);
    uVar12 = SUB208((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 88)),0);
*(uint32_t *)&auVar11 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 88)),8));
    UVar1.Tooltip.Getter.Callee = (void *)(int)uVar12;
    UVar1.Tooltip.Getter.CallbackFunction =
         (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
    UVar1.Tooltip.Value.Data = (char *)(*(uint32_t*)&(auVar11));
    UVar1.Tooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar11)+4));
    UVar1.Tooltip.Value.Length = (*(uint32_t*)((char*)&(auVar11)+8));
    uVar12 = SUB208((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 108)),0);
*(uint32_t *)&auVar11 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 108)),8));
    UVar1.VerboseTooltip.Getter.Callee = (void *)(int)uVar12;
    UVar1.VerboseTooltip.Getter.CallbackFunction =
         (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
    UVar1.VerboseTooltip.Value.Data = (char *)(*(uint32_t*)&(auVar11));
    UVar1.VerboseTooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar11)+4));
    UVar1.VerboseTooltip.Value.Length = (*(uint32_t*)((char*)&(auVar11)+8));
    uVar12 = SUB128((*(uint32_t *)((char *)&(auVar17) + 0)),0);
    UVar1.TextFont.Data.Getter.Callee = (void *)(int)uVar12;
    UVar1.TextFont.Data.Getter.CallbackFunction =
         (_func___cdecl_Font_ptr_void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
    UVar1.TextFont.Data.Value = (Font *)SUB124((*(uint32_t *)((char *)&(auVar17) + 0)),8);
    UVar1.TextFont.IsValidData = (bool)auVar17[0xc];
    (*(uint32_t *)((char *)&(UVar1.TextFont) + 13)) = (*(uint32_t *)((char *)&(auVar17) + 13));
    uVar12 = SUB408((*(uint32_t *)((char *)&(auVar19) + 0)),0);
*(uint32_t *)&auVar20 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar19) + 0)),8));
    UVar1.ForegroundColor.Data.Getter.Callee = (void *)(int)uVar12;
    UVar1.ForegroundColor.Data.Getter.CallbackFunction =
         (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
    UVar1.ForegroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar20));
    UVar1.ForegroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar20)+4));
    UVar1.ForegroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar20)+8));
    UVar1.ForegroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar20) + 12));
    UVar1.ForegroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar20) + 16));
    UVar1.ForegroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar20) + 20));
    UVar1.ForegroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar20) + 24));
    UVar1.ForegroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar20) + 28));
    UVar1.ForegroundColor.IsValidData = (bool)auVar19[0x28];
    (*(uint32_t *)((char *)&(UVar1.ForegroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar19) + 41));
    uVar12 = SUB408((*(uint32_t *)((char *)&(auVar18) + 0)),0);
*(uint32_t *)&auVar20 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar18) + 0)),8));
    UVar1.BackgroundColor.Data.Getter.Callee = (void *)(int)uVar12;
    UVar1.BackgroundColor.Data.Getter.CallbackFunction =
         (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
    UVar1.BackgroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar20));
    UVar1.BackgroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar20)+4));
    UVar1.BackgroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar20)+8));
    UVar1.BackgroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar20) + 12));
    UVar1.BackgroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar20) + 16));
    UVar1.BackgroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar20) + 20));
    UVar1.BackgroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar20) + 24));
    UVar1.BackgroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar20) + 28));
    UVar1.BackgroundColor.IsValidData = (bool)auVar18[0x28];
    (*(uint32_t *)((char *)&(UVar1.BackgroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar18) + 41));
    UVar1.TextColor.Data.Getter.Callee = (void *)(int)(*(uint64_t *)((char *)&(in_stack_fffffbb8) + 232));
    UVar1.TextColor.Data.Getter.CallbackFunction =
         (_func___cdecl_Color_void_ptr *)(int)((ulonglong)(*(uint64_t *)((char *)&(in_stack_fffffbb8) + 232)) >> 0x20);
    UVar1.TextColor.Data.Value._pad_0x0_0 = (*(uint32_t *)((char *)&(in_stack_fffffbb8) + 240));
    UVar1.TextColor.Data.Value._pad_0x4_1 = (*(uint32_t *)((char *)&(in_stack_fffffbb8) + 244));
    UVar1.TextColor.Data.Value._pad_0x8_2 = (*(uint32_t *)((char *)&(in_stack_fffffbb8) + 248));
    UVar1.TextColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(in_stack_fffffbb8) + 252));
    UVar1.TextColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(in_stack_fffffbb8) + 256));
    UVar1.TextColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(in_stack_fffffbb8) + 260));
    UVar1.TextColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(in_stack_fffffbb8) + 264));
    UVar1.TextColor.Data.Value.Alpha = fVar21;
    (*(uint32_t *)((char *)&(UVar1.TextColor) + 40)) = fVar22;
    LVar3.Margin.Getter.CallbackFunction = pvVar24;
    LVar3.Margin.Getter.Callee = (void *)uVar23;
    LVar3.Margin.Value.X = (int)p_Var25;
    LVar3.Margin.Value.Y = iVar26;
    LVar3.Padding.Getter.Callee = (void *)iVar27;
    LVar3.Padding.Getter.CallbackFunction = (_func___cdecl_int_void_ptr *)iVar28;
    LVar3.Padding.Value = iVar29;
    LVar3.Background__HasBackground.Getter.Callee = *(void **)&(fVar32);
    LVar3.Background__HasBackground.Getter.CallbackFunction = *(_func___cdecl_bool_void_ptr *)&(fVar30);
    (*(uint32_t *)((char *)&(LVar3.Background__HasBackground) + 8)) = fVar31;
    (*(uint32_t *)((char *)&(LVar3) + 40)) = fVar33;
    LVar3.HasFlexibleSizing = SUB41(uVar35,0);
    (*(uint32_t *)((char *)&(LVar3) + 45)) = SUB43(uVar35,1);
    pUVar6 = (UIWidget *)UIRowLayout__UIRowLayout(local_8,UVar1,pDVar10,LVar3);
    bVar5 = true;
    bVar4 = true;
  }
  if (bVar4) {
    UIAttributes___UIAttributes(&local_2f4);
  }
  if (bVar5) {
    Darray_L_util__SharedPtr_L_UIWidget_G___G___dtor(&local_1c);
  }
  return pUVar6;
}

//==== 00614d80 BuildModels_00614d80 ====

/* public: virtual void __thiscall TurboelectricFissionReactorModule__BuildModels(void) */

void __thiscall
TurboelectricFissionReactorModule__BuildModels(TurboelectricFissionReactorModule *this)

{
  double *this_00;
  int *this_01;
  Maybe_L_Radiation_G_ *this_02;
  Cylinder_L_double_G_ *pCVar1;
  double *pdVar2;
  float10 fVar3;
  Cylinder_L_double_G_ local_50;
  Cylinder_L_double_G_ local_40;
  Cylinder_L_double_G_ local_30;
  Cylinder_L_double_G_ local_20;
  double local_10;
  TurbineSubModule *local_8;
  
  this_00 = &(this->Turbopump).CachedFluidDensity_kg__m3;
  pCVar1 = TurbopumpSubModule__GetTurbopumpCylinder_m((TurbopumpSubModule *)this_00,&local_40);
  *(uint32_t *)&local_10 = pCVar1->Height;
  TurbopumpSubModule__GetTurbopumpCylinder_m((TurbopumpSubModule *)this_00,&local_30);
  this_01 = &(this->Turbine).StageCount;
  local_8 = (TurbineSubModule *)this_01;
  pCVar1 = TurbineSubModule__GetTurbineCylinder_m((TurbineSubModule *)this_01,&local_30);
  local_40.Height = pCVar1->Height;
  TurbineSubModule__GetTurbineCylinder_m((TurbineSubModule *)this_01,&local_20);
  this_02 = &(this->NuclearReactor).GetEmittedRadiation_MemoizedValue;
  pCVar1 = NuclearReactorSubModule__GetTotalDimensions_m
                     ((NuclearReactorSubModule *)this_02,&local_30);
  local_20.Height = pCVar1->Height;
  NuclearReactorSubModule__GetTotalDimensions_m((NuclearReactorSubModule *)this_02,&local_50);
  fVar3 = (float10)(**(code **)(this->_pad_0x0_0 + 0xa8))();
  local_30.Height = (double)fVar3;
  *(uint32_t *)&local_10 = (local_10 / 1000.0) * 0.5;
  Graphics__Translate(0.0,0.0,local_10 - (local_30.Height / 1000.0) * 0.5);
  pdVar2 = &(this->ReactorCoreDimensions_m).Height;
  TurbopumpSubModule__BuildModels
            ((TurbopumpSubModule *)this_00,(Darray_L_util__SharedPtr_L_GameModel_G___G_ *)pdVar2);
  local_20.Height = (local_20.Height / 1000.0) * 0.5;
  Graphics__Translate(0.0,0.0,local_20.Height + local_10);
  NuclearReactorSubModule__BuildModels
            ((NuclearReactorSubModule *)this_02,(Darray_L_util__SharedPtr_L_GameModel_G___G_ *)pdVar2);
  Graphics__Translate(0.0,0.0,(local_40.Height / 1000.0) * 0.5 + local_20.Height);
  TurbineSubModule__BuildModels(local_8,(Darray_L_class_util__SharedPtr_L_struct_GameModel_G___G_*)((Darray_L_class_util__SharedPtr_L_struct_GameModel_G___G_*)((Darray_L_util__SharedPtr_L_GameModel_G___G_ *)pdVar2)));
  return;
}

