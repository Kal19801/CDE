// Auto-generated from Ghidra decompilation
#include "port_prelude.h"

//==== 005958a0 GetHullLength_m_005958a0 ====


/* public: virtual double __thiscall FuseModule__GetHullLength_m(void)const  */

double __thiscall FuseModule__GetHullLength_m(FuseModule *this)

{
  double dVar1;
  
  dVar1 = ((0.001 / Material__DefaultMaterial->Density_kg__m3) * 1.1 *
          *(double *)(this + 0x70) * 0.5 * *(double *)(this + 0x70) * 0.5) / 3.141592653589793;
  libm_sse2_pow_precise(0.0,0.0);
}





//==== 00595900 GetReflectionInfo_00595900 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   FuseModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall FuseModule__GetReflectionInfo(FuseModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_3fb114c6__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_3fb114c6__thread_safe_static_guard_0__);
    if ( cde_l2_3fb114c6__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_33f933fc_ReflectionInfo) = &vftable_165;
      _Init_thread_footer(& cde_l2_3fb114c6__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_33f933fc_ReflectionInfo;
}





//==== 00595910 scalar_deleting_destructor_00595910 ====


/* public: virtual void * __thiscall FuseModule:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall FuseModule___scalar_deleting_destructor(FuseModule *this,uint param_1)

{
  Module___Module((Module *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x98);
  }
  return this;
}





//==== 00595940 GetTypeName_00595940 ====


/* public: virtual class util__Str_L_char_G_  FuseModule__ReflectionInfoStruct_class_FuseModule___GetTypeName(void)const  */

Str_L_char_G_ * 
FuseModule__ReflectionInfoStruct_class_FuseModule___GetTypeName
          (ReflectionInfoStruct_L_class_FuseModule_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"FuseModule");
  return __return_storage_ptr__;
}





//==== 00595960 GetMembers_00595960 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   FuseModule__ReflectionInfoStruct_class_FuseModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
FuseModule__ReflectionInfoStruct_class_FuseModule___GetMembers__o2
          (ReflectionInfoStruct_L_class_FuseModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_40670b97__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_40670b97__thread_safe_static_guard_0__),
      cde_l2_40670b97__thread_safe_static_guard_0__ == -1)) {
     cde_l2_146ce813_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_40670b97__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_146ce813_Count);
  iVar3 = 0;
  if (0 <  cde_l2_146ce813_Count) {
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
    } while (iVar3 <  cde_l2_146ce813_Count);
  }
  return in_stack_00000004;
}





//==== 00595aa0 GetMember_00595aa0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   FuseModule__ReflectionInfoStruct_class_FuseModule___GetMember(class util__Str_L_char_G_ const &)const
    */

Str_L_char_G_ * 
FuseModule__ReflectionInfoStruct_class_FuseModule___GetMember__o2
          (ReflectionInfoStruct_L_class_FuseModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_1d9e320d__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_1d9e320d__thread_safe_static_guard_0__),
      cde_l2_1d9e320d__thread_safe_static_guard_0__ == -1)) {
     cde_l2_fff51a37_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_1d9e320d__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_fff51a37_Count) {
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
LAB_00595b2d:
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
          if (cVar3 == '\0') goto LAB_00595b2d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_fff51a37_Count);
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





//==== 00595c40 GetFactory_00595c40 ====


/* public: virtual class util__Reflectable * (__cdecl*
   FuseModule__ReflectionInfoStruct_class_FuseModule___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall FuseModule__ReflectionInfoStruct_class_FuseModule___GetFactory__o2
          (ReflectionInfoStruct_L_class_FuseModule_G_ *this)

{
  return StaticFactory;
}





//==== 00595c50 GetTypeSearchString ====


/* public: virtual class util__Str_L_char_G_ __thiscall SubModule__GetTypeSearchString(void)const  */

Str_L_char_G_ * __thiscall
SubModule__GetTypeSearchString(SubModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"SubModule");
  return __return_storage_ptr__;
}





//==== 00595c70 GetStatuses ====


/* public: virtual class DesignStatusBuffer  SubModule__GetStatuses(class DataParser
   *)const  */

DesignStatusBuffer * 
SubModule__GetStatuses
          (SubModule *this,DesignStatusBuffer *__return_storage_ptr__,DataParser *param_1)

{
  DesignStatusBuffer__DesignStatusBuffer(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}





//==== 00595c90 GetComposition_00595c90 ====


/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   SubModule__GetComposition(void)const  */

void __thiscall SubModule__GetComposition(SubModule *this)

{
  undefined4 *in_stack_00000004;
  
  *in_stack_00000004 = (undefined4)(uintptr_t)(&vftable_75);
  in_stack_00000004[1] = 0;
  in_stack_00000004[2] = 0;
  in_stack_00000004[3] = 0;
  return;
}





//==== 00595cc0 GetAdditionalCosts ====


/* public: virtual class util__Darray_L_structStructureCost_G_ __thiscall
   SubModule__GetAdditionalCosts(void)const  */

void __thiscall SubModule__GetAdditionalCosts(SubModule *this)

{
  undefined4 *in_stack_00000004;
  
  *in_stack_00000004 = (undefined4)(uintptr_t)(&vftable_105);
  in_stack_00000004[1] = 0;
  in_stack_00000004[2] = 0;
  in_stack_00000004[3] = 0;
  return;
}





//==== 00595cf0 GetClassID_00595cf0 ====


/* public: virtual unsigned long __thiscall Module__GetClassID(void)const  */

ulong __thiscall Module__GetClassID(Module *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_546f0822__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_546f0822__thread_safe_static_guard_0__);
    if ( cde_l2_546f0822__thread_safe_static_guard_0__ == -1) {
       cde_l2_df3c7a20_ID =
           util__GetHash("Module");
      _Init_thread_footer(& cde_l2_546f0822__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_df3c7a20_ID;
}





//==== 00595d50 Clear_00595d50 ====


/* public: virtual void  util__Darray_L_void___thiscallWeaponModule___P__void_const__G___Clear(void) */

void 
util__Darray_void____thiscall_WeaponModule_____void_const____Clear
          (Darray_L_void____thiscall_WeaponModule___P__void_const__G_ *this)

{
  pmf_9003fa49 *ppVar1;
  
  if (((0 < this->Size) && (ppVar1 = this->Data, ppVar1 != (pmf_9003fa49 *)0x0)) &&
     (ppVar1 != ppVar1 + this->Size)) {
    do {
      *(undefined4 *)ppVar1 = 0;
      *(undefined4 *)&ppVar1->field1_0x1 = 0;
      ppVar1 = ppVar1 + 1;
    } while (ppVar1 != this->Data + this->Size);
    this->Size = 0;
    return;
  }
  this->Size = 0;
  return;
}





//==== 00595da0 scalar_deleting_destructor_00595da0 ====

/* public: virtual void * __thiscall util__Darray_L_void___thiscallWeaponModule___P__void_const__G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_void____thiscall_WeaponModule_____void_const_____scalar_deleting_destructor
          (Darray_L_void____thiscall_WeaponModule___P__void_const__G_ *this,uint param_1)

{
  this->_pad_0x0_0 = (int)&vftable_166;
  if (this->Data != (pmf_9003fa49 *)0x0) {
    port_op_delete(this->Data);
  }
  this->Data = (pmf_9003fa49 *)0x0;
  this->_pad_0x0_0 = (int)&vftable;
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}

//==== 00595df0 DememoizeAll_00595df0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall Module__DememoizeAll(void)const  */

void __thiscall Module__DememoizeAll(Module *this)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  undefined4 *puVar2;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar1 = (**(code **)((this->Models)._padfb0 + 0xc))();
  if (local_c < iVar1) {
    do {
      puVar2 = (undefined4 *)(**(code **)(this->Models)._padfb0)(&local_c);
      (*(code *)*puVar2)();
      local_c = local_c + 1;
      iVar1 = (**(code **)((this->Models)._padfb0 + 0xc))();
    } while (local_c < iVar1);
  }
  (**(code **)((this->Models)._padfb0 + 0x10))();
  return;
}

//==== 00595e60 GetMass_kg ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual class util__Maybe_L_double_G_  Component__GetMass_kg(void)const  */

Maybe_L_double_G_ * Component__GetMass_kg(Maybe_L_double_G_ *__return_storage_ptr__)

{
  __return_storage_ptr__->Data = 0.0;
  __return_storage_ptr__->IsValidData = false;
  return __return_storage_ptr__;
}





//==== 00595e80 GetBoundingCylinder_km ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual class util__Maybe_L_structutil__Cylinder_L_double_G__G_ 
   Component__GetBoundingCylinder_km(void)const  */

Maybe_L_util__Cylinder_L_double_G___G_ *
Component__GetBoundingCylinder_km(Maybe_L_util__Cylinder_L_double_G___G_ *__return_storage_ptr__)

{
  (undefined4)((__return_storage_ptr__->Data).Radius = 0);
  *(undefined4 *)((int)&(__return_storage_ptr__->Data).Radius + 4) = 0;
  (undefined4)((__return_storage_ptr__->Data).Height = 0);
  *(undefined4 *)((int)&(__return_storage_ptr__->Data).Height + 4) = 0;
  __return_storage_ptr__->IsValidData = false;
  return __return_storage_ptr__;
}





//==== 00595ea0 GetCrewRequired ====


/* public: virtual class util__Darray_L_structCrewJob_G_ __thiscall Module__GetCrewRequired(void)const
    */

void __thiscall Module__GetCrewRequired(Module *this)

{
  undefined4 *in_stack_00000004;
  
  *in_stack_00000004 = (undefined4)(uintptr_t)(&vftable_120);
  in_stack_00000004[1] = 0;
  in_stack_00000004[2] = 0;
  in_stack_00000004[3] = 0;
  return;
}





//==== 00595ed0 GetEngagementRange_km ====


/* public: virtual class util__Maybe_L_double_G_ __thiscall Module__GetEngagementRange_km(double)const
    */

Maybe_L_double_G_ * __thiscall
Module__GetEngagementRange_km(Module *this,Maybe_L_double_G_ *__return_storage_ptr__,double param_1)

{
  __return_storage_ptr__->Data = 0.0;
  __return_storage_ptr__->IsValidData = false;
  return __return_storage_ptr__;
}





//==== 00595ef0 GetCoolantProperties ====


/* public: virtual class util__Maybe_L_structModuleCoolantProperties_G_ __thiscall
   Module__GetCoolantProperties(void)const  */

void __thiscall Module__GetCoolantProperties(Module *this)

{
  undefined4 *in_stack_00000004;
  
  *in_stack_00000004 = 0;
  in_stack_00000004[2] = 0;
  in_stack_00000004[3] = 0;
  in_stack_00000004[4] = 0;
  in_stack_00000004[5] = 0;
  in_stack_00000004[6] = 0;
  in_stack_00000004[7] = 0;
  in_stack_00000004[8] = 0;
  in_stack_00000004[9] = 0;
  *(undefined1 *)(in_stack_00000004 + 10) = 0;
  return;
}





//==== 00595f10 GetRadiationShielding ====


/* public: virtual struct util__tuple2_L_classMaterial_P_Cstructutil__Cylinder_L_double_G__G_ __thiscall
   Module__GetRadiationShielding(void)const  */

void __thiscall Module__GetRadiationShielding(Module *this)

{
  undefined4 *in_stack_00000004;
  
  *in_stack_00000004 = 0;
  in_stack_00000004[2] = 0;
  in_stack_00000004[3] = 0;
  in_stack_00000004[4] = 0;
  in_stack_00000004[5] = 0;
  return;
}





//==== 00595f30 GetModuleAmmoExplosion ====

/* public: virtual struct AmmoExplosion __thiscall Module__GetModuleAmmoExplosion(void)const  */

AmmoExplosion * __thiscall
Module__GetModuleAmmoExplosion(Module *this,AmmoExplosion *__return_storage_ptr__)

{
  (__return_storage_ptr__->GasComposition)._pad_0x0_0 =
       (int)&vftable_15;
  (__return_storage_ptr__->GasComposition).Data = (MaterialConstituent *)0x0;
  (__return_storage_ptr__->GasComposition).Size = 0;
  (__return_storage_ptr__->GasComposition).Capacity = 0;
  *(undefined4 *)&__return_storage_ptr__->Mass_kg = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->Mass_kg + 4) = 0;
  *(undefined4 *)&__return_storage_ptr__->Temperature_K = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->Temperature_K + 4) = 0;
  return __return_storage_ptr__;
}

//==== 00595f60 RenderInitialStateTransparent ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void  Module__RenderInitialStateTransparent(double,class CameraManager
   *,struct util__Vec3_L_double_G_)const  */

void 
Module__RenderInitialStateTransparent
          (Module *this,double param_1,CameraManager *param_2,Vec3_L_double_G_ param_3)

{
  return;
}





//==== 00595f70 GetOneLineStatus ====


/* public: virtual class util__Maybe_L_classutil__Str_L_char_G__G_ 
   Module__GetOneLineStatus(class util__Darray_L_classutil__WeakPtr_L_structModuleCompartment_G__G_ const
   &)const  */

void 
Module__GetOneLineStatus
          (Module *this,Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(char *)&(param_1[0xc]) = 0x0;
  return;
}





//==== 00595fa0 GetDecimalPropertyBoundaries ====


/* public: virtual class util__Maybe_L_structutil__Range_L_double_G__G_ __thiscall
   util__Reflectable__GetDecimalPropertyBoundaries(struct util__ClassMember const &)const  */

void __thiscall
util__Reflectable__GetDecimalPropertyBoundaries(Reflectable *this,ClassMember *param_1)

{
  (param_1->Name).Data = (char *)0x0;
  (param_1->Name).Capacity = 0;
  (param_1->Name).Length = 0;
  *(undefined4 *)&param_1->Type = 0;
  *(undefined1 *)&param_1->Offset = 0;
  return;
}





//==== 00595fc0 GetShortName ====

/* public: virtual class util__Str_L_char_G_ __thiscall Module__GetShortName(void)const  */

Str_L_char_G_ * __thiscall Module__GetShortName(Module *this,Str_L_char_G_ *__return_storage_ptr__)

{
  (**(code **)(this->_pad_0x0_0 + 0x124))(__return_storage_ptr__);
  return __return_storage_ptr__;
}

//==== 00595fe0 GetTypeSearchString_00595fe0 ====


/* public: virtual class util__Str_L_char_G_ __thiscall Module__GetTypeSearchString(void)const  */

Str_L_char_G_ * __thiscall Module__GetTypeSearchString(Module *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"Module");
  return __return_storage_ptr__;
}





//==== 00596000 Clear_00596000 ====


/* public: virtual void  util__Darray_L_classutil__SharedPtr_L_structGameModel_G___G___Clear(void) */

void 
util__Darray_class_util__SharedPtr_struct_GameModel_____Clear
          (Darray_L_class_util__SharedPtr_L_struct_GameModel_G___G_ *this)

{
  ReferenceController *this_00;
  bool bVar1;
  ReferenceControllerRegistry *this_01;
  undefined4 *puVar2;
  GameModel *this_02;
  
  if (*(int *)(this + 8) < 1) {
    *(undefined4 *)(this + 8) = 0;
    return;
  }
  puVar2 = *(undefined4 **)(this + 4);
  if ((puVar2 != (undefined4 *)0x0) && (puVar2 != puVar2 + *(int *)(this + 8) * 2)) {
    do {
      this_00 = (ReferenceController *)puVar2[1];
      this_02 = (GameModel *)*puVar2;
      *puVar2 = 0;
      puVar2[1] = 0;
      if ((this_00 != (ReferenceController *)0x0) &&
         (bVar1 = ReferenceController__ReleaseStrongReference(this_00), bVar1)) {
        if (this_02 != (GameModel *)0x0) {
          GameModel___scalar_deleting_destructor(this_02,1);
        }
        this_01 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
        ReferenceControllerRegistry__PointerWasDestroyed(this_01,this_02);
      }
      puVar2 = puVar2 + 2;
    } while (puVar2 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 8));
    *(undefined4 *)(this + 8) = 0;
    return;
  }
  *(undefined4 *)(this + 8) = 0;
  return;
}





//==== 00596090 SetAll_00596090 ====


/* public: virtual void  util__Darray_L_classutil__SharedPtr_L_structGameModel_G___G___SetAll(class util__SharedPtr_L_structGameModel_G_ const &) */

void 
util__Darray_class_util__SharedPtr_struct_GameModel_____SetAll
          (Darray_L_class_util__SharedPtr_L_struct_GameModel_G___G_ *this,
          SharedPtr_L_struct_GameModel_G_ *param_1)

{
  ReferenceController *this_00;
  ReferenceController *this_01;
  bool bVar1;
  ReferenceControllerRegistry *this_02;
  undefined4 *puVar2;
  GameModel *this_03;
  
  puVar2 = *(undefined4 **)(this + 4);
  if (puVar2 != puVar2 + *(int *)(this + 8) * 2) {
    do {
      this_03 = (GameModel *)*puVar2;
      this_00 = (ReferenceController *)puVar2[1];
      *puVar2 = *(undefined4 *)param_1;
      this_01 = *(ReferenceController **)(param_1 + 4);
      puVar2[1] = (undefined4)(uintptr_t)(this_01);
      if (this_01 != (ReferenceController *)0x0) {
        ReferenceController__AddStrongReference(this_01);
      }
      if ((this_00 != (ReferenceController *)0x0) &&
         (bVar1 = ReferenceController__ReleaseStrongReference(this_00), bVar1)) {
        if (this_03 != (GameModel *)0x0) {
          GameModel___scalar_deleting_destructor(this_03,1);
        }
        this_02 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
        ReferenceControllerRegistry__PointerWasDestroyed(this_02,this_03);
      }
      puVar2 = puVar2 + 2;
    } while (puVar2 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 8));
  }
  return;
}





//==== 00596120 scalar_deleting_destructor_00596120 ====


/* public: virtual void * __thiscall util__Darray_L_classutil__SharedPtr_L_structGameModel_G__G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_class_util__SharedPtr_struct_GameModel______scalar_deleting_destructor__o2
          (Darray_L_class_util__SharedPtr_L_struct_GameModel_G___G_ *this,uint param_1)

{
  util__Darray_class_util__SharedPtr_struct_GameModel______scalar_deleting_destructor(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 00596150 scalar_deleting_destructor_00596150 ====


/* public: virtual void * __thiscall Module:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall Module___scalar_deleting_destructor(Module *this,uint param_1)

{
  Module___Module(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x70);
  }
  return this;
}





//==== 00596180 MethodCaller__private__void___thiscall_RemoteControlCompartment__Destroy_void__ ====


/* public: static void __cdecl util__DelegateFactory_L_struct_RemoteControlCompartment_Cvoid_G___MethodCaller_L__private_void__thiscall_RemoteControlCompartment__Destroy_void__G_(void *) */

void __cdecl
util__DelegateFactory_struct_RemoteControlCompartment_void___MethodCaller__private__void___thiscall_RemoteControlCompartment__Destroy_void(void *param_1)

{
  *(undefined1 *)((int)param_1 + 0x108) = 1;
  return;
}





//==== 00596190 tuple5_void____cdecl___void__util__Str_char__util__Str_char__util__Delegate_void__util__Str_char___ ====


/* public:  util__tuple5_L_void___cdecl_P__void__Cclassutil__Str_L_char_G__Cclass_util__Str_L_char_G__Cclassutil__Delegate_L_void_G__Cclassutil__Str_L_char_G__G___tuple5_L_void____cdecl_P__void__Cclassutil__Str_L_char_G__Cclassutil__Str_L_char_G__Cclassutil__Delegate_L_void_G__Cclass_util__Str_L_char_G__G_(void (__cdecl*)(void),class util__Str_L_char_G_,class util__Str_L_char_G_,class
   util__Delegate_L_void_G_,class util__Str_L_char_G_) */

tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G_
* 
util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__class_util__Delegate_void__class_util__Str_char_____tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__class_util__Delegate_void__class_util__Str_char
          (tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G_
           *this,_func_void *param_1,Str_L_char_G_ param_2,Str_L_char_G_ param_3,Delegate_L_void_G_ param_4,
          Str_L_char_G_ param_5)

{
  *(_func_void **)this = param_1;
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const((Str_L_char_G_ *)(this + 4),&param_2);
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const((Str_L_char_G_ *)(this + 0x10),&param_3);
  *(void **)(this + 0x1c) = param_4.Callee;
  *(_func___cdecl_void_void_ptr **)(this + 0x20) = param_4.CallbackFunction;
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const((Str_L_char_G_ *)(this + 0x24),&param_5);
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





//==== 00596210 HomingProperties ====

/* public: __thiscall HomingProperties__HomingProperties(void) */

HomingProperties * __thiscall HomingProperties__HomingProperties(HomingProperties *this)

{
  this->_pad_0x4_1 = 0;
  this->_pad_0x8_2 = 0;
  *(undefined4 *)&this->field_0xc = 0;
  this->_pad_0x0_0 = (int)&vftable_162;
  (this->BoostPhase)._pad_0x4_1 = 0;
  (this->BoostPhase)._pad_0x8_2 = 0;
  (this->BoostPhase)._pad_0xc_3 = 0;
  (this->BoostPhase)._pad_0x0_0 = (int)&vftable_160;
  (this->BoostPhase).GuidanceLaw = GuidanceAlgorithm__Unguided;
  (this->BoostPhase).Accelerate = false;
  (this->BoostPhase).DampingEngineMultiplier = 1.0;
  (this->MidcoursePhase)._pad_0x4_1 = 0;
  (this->MidcoursePhase)._pad_0x8_2 = 0;
  (this->MidcoursePhase)._pad_0xc_3 = 0;
  (this->MidcoursePhase)._pad_0x0_0 = (int)&vftable_160;
  (this->MidcoursePhase).GuidanceLaw = GuidanceAlgorithm__Unguided;
  (this->MidcoursePhase).Accelerate = false;
  (this->MidcoursePhase).DampingEngineMultiplier = 1.0;
  (this->TerminalPhase)._pad_0x4_1 = 0;
  (this->TerminalPhase)._pad_0x8_2 = 0;
  (this->TerminalPhase)._pad_0xc_3 = 0;
  (this->TerminalPhase)._pad_0x0_0 = (int)&vftable_160;
  (this->TerminalPhase).GuidanceLaw = GuidanceAlgorithm__Unguided;
  (this->TerminalPhase).Accelerate = false;
  (this->TerminalPhase).DampingEngineMultiplier = 1.0;
  return this;
}

//==== 005962c0 Darray_util__SharedPtr_GameModel___ ====


/* public: virtual  Darray_L_class_util__SharedPtr_L_structGameModel_G__G___dtor(void) */

void __thiscall
util__Darray_class_util__SharedPtr_struct_GameModel______Darray_class_util__SharedPtr_struct_GameModel(Darray_L_class_util__SharedPtr_L_struct_GameModel_G___G_ *this)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  GameModel *this_00;
  ReferenceControllerRegistry *this_01;
  undefined4 *puVar5;
  int iVar6;
  
  iVar3 = *(int *)(this + 4);
  *(undefined ***)this = &vftable_167;
  if (iVar3 != 0) {
    piVar1 = (int *)(iVar3 + -4);
    iVar6 = *piVar1;
    puVar5 = (undefined4 *)(iVar3 + iVar6 * 8);
    if (iVar6 != 0) {
      do {
        puVar2 = puVar5 + -1;
        puVar5 = puVar5 + -2;
        iVar6 = iVar6 + -1;
        if ((ReferenceController *)*puVar2 != (ReferenceController *)0x0) {
          bVar4 = ReferenceController__ReleaseStrongReference((ReferenceController *)*puVar2);
          if (bVar4) {
            this_00 = (GameModel *)*puVar5;
            if (this_00 != (GameModel *)0x0) {
              GameModel___scalar_deleting_destructor(this_00,1);
              this_00 = (GameModel *)*puVar5;
            }
            this_01 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
            ReferenceControllerRegistry__PointerWasDestroyed(this_01,this_00);
            *puVar5 = 0;
          }
        }
      } while (iVar6 != 0);
      iVar6 = *piVar1;
    }
    port_op_delete(piVar1,iVar6 * 8 + 4);
  }
  *(undefined ***)this = (undefined **)(&vftable);
  *(undefined4 *)(this + 4) = 0;
  return;
}





//==== 00596350 tuple5_void____cdecl___void__util__Str_char__util__Str_char__bool__util__Str_char___ ====


/* public:  tuple5_L_void___cdecl_P__void__Cclass_util__Str_L_char_G__Cclassutil__Str_L_char_G__Cbool_P_Cclassutil__Str_L_char_G__G___dtor(void) */

void 
util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__bool__class_util__Str_char______tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__bool__class_util__Str_char(tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G_
           *this)

{
  if (*(void **)(this + 0x20) != (void *)0x0) {
    port_op_delete(*(void **)(this + 0x20));
    *(undefined4 *)(this + 0x20) = 0;
  }
  if (*(void **)(this + 0x10) != (void *)0x0) {
    port_op_delete(*(void **)(this + 0x10));
    *(undefined4 *)(this + 0x10) = 0;
  }
  if (*(void **)(this + 4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 4));
    *(undefined4 *)(this + 4) = 0;
  }
  return;
}





//==== 005963a0 HomingProperties_005963a0 ====

/* public: virtual __thiscall HomingProperties___HomingProperties(void) */

void __thiscall HomingProperties___HomingProperties(HomingProperties *this)

{
  void *pvVar1;
  
  (this->TerminalPhase)._pad_0x0_0 = (int)&vftable_5;
  pvVar1 = (void *)(this->TerminalPhase)._pad_0x4_1;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->TerminalPhase)._pad_0x4_1 = 0;
  }
  (this->MidcoursePhase)._pad_0x0_0 = (int)&vftable_5;
  pvVar1 = (void *)(this->MidcoursePhase)._pad_0x4_1;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->MidcoursePhase)._pad_0x4_1 = 0;
  }
  (this->BoostPhase)._pad_0x0_0 = (int)&vftable_5;
  pvVar1 = (void *)(this->BoostPhase)._pad_0x4_1;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->BoostPhase)._pad_0x4_1 = 0;
  }
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  return;
}

//==== 00596420 Module ====

/* public: virtual __thiscall Module___Module(void) */

void __thiscall Module___Module(Module *this)

{
  SharedPtr_L_GameModel_G_ *pSVar1;
  void *pvVar2;
  
  this->_pad_0x0_0 = (int)&vftable_for_EditorReflectable__3;
  *(undefined4 *)&(this->GetTotalPowerUsage_W_MemoizedValue).field_0xc = (undefined4)(uintptr_t)&vftable_for_util__RTTIBaseClass__3;
  Darray_L_util__SharedPtr_L_GameModel_G___G___dtor((Darray_L_util__SharedPtr_L_GameModel_G___G_ *)&this[1]._pad_0x8_2);
  pSVar1 = (this->Models).Data;
  (this->Models)._padfb0 =
       (int)&vftable_166;
  if (pSVar1 != (SharedPtr_L_GameModel_G_ *)0x0) {
    port_op_delete(pSVar1);
  }
  (this->Models).Data = (SharedPtr_L_GameModel_G_ *)0x0;
  (this->Models)._padfb0 = (int)&vftable;
  pvVar2 = (void *)(this->ModuleMemoizationHandlerInstance).ResetFunctions.Capacity;
  if (pvVar2 != (void *)0x0) {
    port_op_delete(pvVar2);
    (this->ModuleMemoizationHandlerInstance).ResetFunctions.Capacity = 0;
  }
  if ((void *)this->_pad_0x10_4 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x10_4);
    this->_pad_0x10_4 = 0;
  }
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  return;
}

//==== 005964b0 operator___005964b0 ====


/* public: virtual struct WorldLight &  util__Darray_L_structWorldLight_G___op_subscript(int
   const &)const  */

WorldLight * __thiscall
util__Darray_struct_WorldLight___operator(Darray_L_struct_WorldLight_G_ *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 < 0) || (*(int *)(this + 8) <= iVar1)) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.inl",0xa0,
              "Index >= 0 && Index < Size",(char *)0x0);
    DebugBreak();
    iVar1 = *param_1;
  }
  return (WorldLight *)(iVar1 * 0x68 + *(int *)(this + 4));
}





//==== 00596500 vector_deleting_destructor_00596500 ====


/* public: void * __thiscall util__tuple5_L_void___cdecl_P__void__Cclassutil__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclassutil__Str_L_char_G__G_:: 0 vectordeletingdestructor(unsigned int) */

void * 
util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__bool__class_util__Str_char______vector_deleting_destructor
          (tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G_
           *this,uint param_1)

{
  tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G_
  *ptVar1;
  tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G_
  *ptVar2;
  tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G_
  *ptVar3;
  int iVar4;
  
  if ((param_1 & 2) != 0) {
    ptVar1 = this + -4;
    iVar4 = *(int *)ptVar1;
    if (iVar4 != 0) {
      ptVar3 = this + iVar4 * 0x2c + 0x10;
      do {
        ptVar2 = ptVar3 + -0x2c;
        iVar4 = iVar4 + -1;
        if (*(void **)(ptVar3 + -0x1c) != (void *)0x0) {
          port_op_delete(*(void **)(ptVar3 + -0x1c));
          *(undefined4 *)(ptVar3 + -0x1c) = 0;
        }
        if (*(void **)ptVar2 != (void *)0x0) {
          port_op_delete(*(void **)ptVar2);
          *(undefined4 *)ptVar2 = 0;
        }
        if (*(void **)(ptVar3 + -0x38) != (void *)0x0) {
          port_op_delete(*(void **)(ptVar3 + -0x38));
          *(undefined4 *)(ptVar3 + -0x38) = 0;
        }
        ptVar3 = ptVar2;
      } while (iVar4 != 0);
    }
    if ((param_1 & 1) != 0) {
      port_op_delete(ptVar1,*(int *)ptVar1 * 0x2c + 4);
    }
    return ptVar1;
  }
  if (*(void **)(this + 0x20) != (void *)0x0) {
    port_op_delete(*(void **)(this + 0x20));
    *(undefined4 *)(this + 0x20) = 0;
  }
  if (*(void **)(this + 0x10) != (void *)0x0) {
    port_op_delete(*(void **)(this + 0x10));
    *(undefined4 *)(this + 0x10) = 0;
  }
  if (*(void **)(this + 4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 4));
    *(undefined4 *)(this + 4) = 0;
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x2c);
  }
  return this;
}





//==== 005965f0 vector_deleting_destructor_005965f0 ====


/* public: void * __thiscall util__tuple5_L_void___cdecl_P__void__Cclassutil__Str_L_char_G__Cclass_util__Str_L_char_G__Cclassutil__Delegate_L_void_G__Cclassutil__Str_L_char_G__G_:: 0 vectordeletingdestructor(unsigned int) */

void * 
util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__class_util__Delegate_void__class_util__Str_char______vector_deleting_destructor
          (tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G_
           *this,uint param_1)

{
  tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G_
  *ptVar1;
  tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G_
  *ptVar2;
  tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G_
  *ptVar3;
  int iVar4;
  
  if ((param_1 & 2) != 0) {
    ptVar1 = this + -4;
    iVar4 = *(int *)ptVar1;
    if (iVar4 != 0) {
      ptVar3 = this + iVar4 * 0x30 + 0x10;
      do {
        ptVar2 = ptVar3 + -0x30;
        iVar4 = iVar4 + -1;
        if (*(void **)(ptVar3 + -0x1c) != (void *)0x0) {
          port_op_delete(*(void **)(ptVar3 + -0x1c));
          *(undefined4 *)(ptVar3 + -0x1c) = 0;
        }
        if (*(void **)ptVar2 != (void *)0x0) {
          port_op_delete(*(void **)ptVar2);
          *(undefined4 *)ptVar2 = 0;
        }
        if (*(void **)(ptVar3 + -0x3c) != (void *)0x0) {
          port_op_delete(*(void **)(ptVar3 + -0x3c));
          *(undefined4 *)(ptVar3 + -0x3c) = 0;
        }
        ptVar3 = ptVar2;
      } while (iVar4 != 0);
    }
    if ((param_1 & 1) != 0) {
      port_op_delete(ptVar1,*(int *)ptVar1 * 0x30 + 4);
    }
    return ptVar1;
  }
  if (*(void **)(this + 0x24) != (void *)0x0) {
    port_op_delete(*(void **)(this + 0x24));
    *(undefined4 *)(this + 0x24) = 0;
  }
  if (*(void **)(this + 0x10) != (void *)0x0) {
    port_op_delete(*(void **)(this + 0x10));
    *(undefined4 *)(this + 0x10) = 0;
  }
  if (*(void **)(this + 4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 4));
    *(undefined4 *)(this + 4) = 0;
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x30);
  }
  return this;
}





//==== 005966f0 scalar_deleting_destructor_005966f0 ====


/* public: virtual void * __thiscall util__Darray_L_structutil__tuple5_L_void___cdecl_P__void__Cclass_util__Str_L_char_G__Cclassutil__Str_L_char_G__Cbool_P_Cclassutil__Str_L_char_G__G__G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__bool__class_util__Str_char________scalar_deleting_destructor
          (Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G___G_
           *this,uint param_1)

{
  *(undefined ***)this = (undefined **)(&vftable_170);
  if (*(tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G_
        **)(this + 4) !=
      (tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G_
       *)0x0) {
    tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G____vector_deleting_destructor_
              (*(tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G_
                 **)(this + 4),3);
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = (undefined **)(&vftable);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 00596730 scalar_deleting_destructor_00596730 ====


/* public: virtual void * __thiscall util__Darray_L_structutil__tuple5_L_void___cdecl_P__void__Cclass_util__Str_L_char_G__Cclassutil__Str_L_char_G__Cclassutil__Delegate_L_void_G__Cclassutil__Str_L_char_G__G___G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__class_util__Delegate_void__class_util__Str_char________scalar_deleting_destructor
          (Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G___G_
           *this,uint param_1)

{
  *(undefined ***)this = &vftable_169;
  if (*(tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G_
        **)(this + 4) !=
      (tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G_
       *)0x0) {
    tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G____vector_deleting_destructor_
              (*(tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G_
                 **)(this + 4),3);
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = (undefined **)(&vftable);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 00596770 scalar_deleting_destructor_00596770 ====


/* public: virtual void * __thiscall util__Darray_L_structutil__tuple6_L_void___cdecl_P__void__Cclass_util__Str_L_char_G__Cclassutil__Str_L_char_G__Cint_P_Cint_Cclassutil__Str_L_char_G__G__G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_util__tuple6_void____cdecl___void__class_util__Str_char__class_util__Str_char__int__int_class_util__Str_char________scalar_deleting_destructor
          (Darray_L_struct_util__tuple6_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cint_P_Cint_Cclass_util__Str_L_char_G___G___G_
           *this,uint param_1)

{
  *(undefined ***)this = &vftable_171;
  if (*(tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G_
        **)(this + 4) !=
      (tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G_
       *)0x0) {
    tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G____vector_deleting_destructor_
              (*(tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G_
                 **)(this + 4),3);
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = (undefined **)(&vftable);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 005967e0 Add_005967e0 ====


/* public: bool  util__Darray_L_structutil__tuple5_L_void___cdecl_P__void__Cclass_util__Str_L_char_G__Cclassutil__Str_L_char_G__Cbool_P_Cclassutil__Str_L_char_G__G__G___Add(struct
   util__tuple5_L_void___cdecl_P__void__Cclassutil__Str_L_char_G__Cclassutil__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G__G_ const &) */

bool 
util__Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__bool__class_util__Str_char_______Add(Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G___G_
      *this,tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G_
            *param_1)

{
  bool bVar1;
  int iVar2;
  int iStack_8;
  
  iVar2 = *(int *)(this + 8);
  iStack_8 = iVar2 + 1;
  SetSize(this,&iStack_8);
  bVar1 = CheckSize(this,iVar2);
  if (!bVar1) {
  }
  iVar2 = *(int *)(this + 4) + *(int *)(this + 8) * 0x2c;
  *(undefined4 *)(iVar2 + -0x2c) = *(undefined4 *)param_1;
  util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(iVar2 + -0x28),(Str_L_char_G_ *)(param_1 + 4));
  util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(iVar2 + -0x1c),(Str_L_char_G_ *)(param_1 + 0x10));
  *(undefined4 *)(iVar2 + -0x10) = *(undefined4 *)(param_1 + 0x1c);
  util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(iVar2 + -0xc),(Str_L_char_G_ *)(param_1 + 0x20));
  return true;
}





//==== 00596860 Add_00596860 ====


/* public: bool  util__Darray_L_structutil__tuple5_L_void___cdecl_P__void__Cclass_util__Str_L_char_G__Cclassutil__Str_L_char_G__Cclassutil__Delegate_L_void_G__Cclassutil__Str_L_char_G__G___G___Add(struct util__tuple5_L_void___cdecl_P__void__Cclassutil__Str_L_char_G__Cclass_util__Str_L_char_G__Cclassutil__Delegate_L_void_G__Cclassutil__Str_L_char_G__G_ const &) */

bool 
util__Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__class_util__Delegate_void__class_util__Str_char_______Add(Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G___G_
      *this,tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G_
            *param_1)

{
  bool bVar1;
  int iVar2;
  int iStack_8;
  
  iVar2 = *(int *)(this + 8);
  iStack_8 = iVar2 + 1;
  SetSize(this,&iStack_8);
  bVar1 = CheckSize(this,iVar2);
  if (!bVar1) {
  }
  iVar2 = *(int *)(this + 4) + *(int *)(this + 8) * 0x30;
  *(undefined4 *)(iVar2 + -0x30) = *(undefined4 *)param_1;
  util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(iVar2 + -0x2c),(Str_L_char_G_ *)(param_1 + 4));
  util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(iVar2 + -0x20),(Str_L_char_G_ *)(param_1 + 0x10));
  *(undefined4 *)(iVar2 + -0x14) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(iVar2 + -0x10) = *(undefined4 *)(param_1 + 0x20);
  util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(iVar2 + -0xc),(Str_L_char_G_ *)(param_1 + 0x24));
  return true;
}





//==== 005968e0 Add_005968e0 ====


/* public: bool  util__Darray_L_structutil__tuple6_L_void___cdecl_P__void__Cclass_util__Str_L_char_G__Cclassutil__Str_L_char_G__Cint_P_Cint_Cclassutil__Str_L_char_G__G__G___Add(struct
   util__tuple6_L_void___cdecl_P__void__Cclassutil__Str_L_char_G__Cclassutil__Str_L_char_G__Cint_P_Cint_Cclass_util__Str_L_char_G__G_ const &) */

bool 
util__Darray_struct_util__tuple6_void____cdecl___void__class_util__Str_char__class_util__Str_char__int__int_class_util__Str_char_______Add(Darray_L_struct_util__tuple6_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cint_P_Cint_Cclass_util__Str_L_char_G___G___G_
      *this,tuple6_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cint_P_Cint_Cclass_util__Str_L_char_G___G_
            *param_1)

{
  bool bVar1;
  int iVar2;
  int iStack_8;
  
  iVar2 = *(int *)(this + 8);
  iStack_8 = iVar2 + 1;
  SetSize(this,&iStack_8);
  bVar1 = CheckSize(this,iVar2);
  if (!bVar1) {
  }
  iVar2 = *(int *)(this + 4) + *(int *)(this + 8) * 0x30;
  *(undefined4 *)(iVar2 + -0x30) = *(undefined4 *)param_1;
  util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(iVar2 + -0x2c),(Str_L_char_G_ *)(param_1 + 4));
  util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(iVar2 + -0x20),(Str_L_char_G_ *)(param_1 + 0x10));
  *(undefined4 *)(iVar2 + -0x14) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(iVar2 + -0x10) = *(undefined4 *)(param_1 + 0x20);
  util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(iVar2 + -0xc),(Str_L_char_G_ *)(param_1 + 0x24));
  return true;
}





//==== 00596960 CheckSize_00596960 ====


/* private: bool  util__Darray_L_structutil__tuple5_L_void___cdecl_P__void__Cclass_util__Str_L_char_G__Cclassutil__Str_L_char_G__Cbool_P_Cclassutil__Str_L_char_G__G__G___CheckSize(int) */

bool 
util__Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__bool__class_util__Str_char_______CheckSize(Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G___G_
            *this,int param_1)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G_
  *this_00;
  Str_L_char_G_ *this_01;
  uint uVar5;
  tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G_
  *ptVar6;
  bool bVar7;
  uint *puStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar4 = *(uint *)(this + 8);
  bVar7 = -1 < (int)uVar4;
  bVar1 = !bVar7;
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
    return bVar1 && bVar7;
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
  uVar4 = -(uint)((int)((ulonglong)uVar5 * 0x2c >> 0x20) != 0) | (uint)((ulonglong)uVar5 * 0x2c);
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
        puVar2 = puVar2 + 0xb;
        puVar3[-2] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        uVar5 = uVar5 - 1;
        puVar3 = puVar3 + 0xb;
      } while (uVar5 != 0);
    }
  }
  this_00 = *(tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G_
              **)(this + 4);
  puVar2 = puStack_c;
  if (this_00 !=
      (tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G_
       *)0x0) {
    puVar2 = puStack_c + *(int *)(this + 8) * 0xb;
    if (this_00 != this_00 + param_1 * 0x2c) {
      this_01 = (Str_L_char_G_ *)(puStack_c + 4);
      ptVar6 = this_00;
      do {
        if ((uint *)&this_01[-2].Length == puVar2) break;
        this_01[-2].Length = *(int *)ptVar6;
        util__Maybe_struct_util__ClassMember___operator(this_01 + -1,(Str_L_char_G_ *)(ptVar6 + 4));
        util__Maybe_struct_util__ClassMember___operator(this_01,(Str_L_char_G_ *)(ptVar6 + 0x10));
        this_01[1].Data = *(char **)(ptVar6 + 0x1c);
        util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)&this_01[1].Capacity,(Str_L_char_G_ *)(ptVar6 + 0x20));
        ptVar6 = ptVar6 + 0x2c;
        this_00 = *(tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G_
                    **)(this + 4);
        this_01 = (Str_L_char_G_ *)&this_01[3].Length;
      } while (ptVar6 != this_00 + param_1 * 0x2c);
    }
    puVar2 = puStack_c;
    if (this_00 !=
        (tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G_
         *)0x0) {
      tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G____vector_deleting_destructor_(this_00,3);
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(uint **)(this + 4) = puVar2;
  return bStack_5;
}





//==== 00596b40 CheckSize_00596b40 ====


/* private: bool  util__Darray_L_structutil__tuple5_L_void___cdecl_P__void__Cclass_util__Str_L_char_G__Cclassutil__Str_L_char_G__Cclassutil__Delegate_L_void_G__Cclassutil__Str_L_char_G__G___G___CheckSize(int) */

bool 
util__Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__class_util__Delegate_void__class_util__Str_char_______CheckSize(Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G___G_
            *this,int param_1)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G_
  *this_00;
  Str_L_char_G_ *this_01;
  uint uVar5;
  tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G_
  *ptVar6;
  bool bVar7;
  uint *puStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar4 = *(uint *)(this + 8);
  bVar7 = -1 < (int)uVar4;
  bVar1 = !bVar7;
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
    return bVar1 && bVar7;
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
  uVar4 = -(uint)((int)((ulonglong)uVar5 * 0x30 >> 0x20) != 0) | (uint)((ulonglong)uVar5 * 0x30);
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
        puVar2 = puVar2 + 0xc;
        puVar3[-2] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3[8] = 0;
        uVar5 = uVar5 - 1;
        puVar3 = puVar3 + 0xc;
      } while (uVar5 != 0);
    }
  }
  this_00 = *(tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G_
              **)(this + 4);
  puVar2 = puStack_c;
  if (this_00 !=
      (tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G_
       *)0x0) {
    puVar2 = puStack_c + *(int *)(this + 8) * 0xc;
    if (this_00 != this_00 + param_1 * 0x30) {
      this_01 = (Str_L_char_G_ *)(puStack_c + 4);
      ptVar6 = this_00;
      do {
        if ((uint *)&this_01[-2].Length == puVar2) break;
        this_01[-2].Length = *(int *)ptVar6;
        util__Maybe_struct_util__ClassMember___operator(this_01 + -1,(Str_L_char_G_ *)(ptVar6 + 4));
        util__Maybe_struct_util__ClassMember___operator(this_01,(Str_L_char_G_ *)(ptVar6 + 0x10));
        this_01[1].Data = *(char **)(ptVar6 + 0x1c);
        this_01[1].Capacity = *(int *)(ptVar6 + 0x20);
        util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)&this_01[1].Length,(Str_L_char_G_ *)(ptVar6 + 0x24));
        ptVar6 = ptVar6 + 0x30;
        this_00 = *(tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G_
                    **)(this + 4);
        this_01 = this_01 + 4;
      } while (ptVar6 != this_00 + param_1 * 0x30);
    }
    puVar2 = puStack_c;
    if (this_00 !=
        (tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G_
         *)0x0) {
      tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G____vector_deleting_destructor_(this_00,3);
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(uint **)(this + 4) = puVar2;
  return bStack_5;
}





//==== 00596d40 CheckSize_00596d40 ====


/* private: bool  util__Darray_L_structutil__tuple6_L_void___cdecl_P__void__Cclass_util__Str_L_char_G__Cclassutil__Str_L_char_G__Cint_P_Cint_Cclassutil__Str_L_char_G__G__G___CheckSize(int) */

bool 
util__Darray_struct_util__tuple6_void____cdecl___void__class_util__Str_char__class_util__Str_char__int__int_class_util__Str_char_______CheckSize(Darray_L_struct_util__tuple6_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cint_P_Cint_Cclass_util__Str_L_char_G___G___G_
            *this,int param_1)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G_
  *this_00;
  Str_L_char_G_ *this_01;
  uint uVar5;
  tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G_
  *ptVar6;
  bool bVar7;
  uint *puStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar4 = *(uint *)(this + 8);
  bVar7 = -1 < (int)uVar4;
  bVar1 = !bVar7;
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
    return bVar1 && bVar7;
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
  uVar4 = -(uint)((int)((ulonglong)uVar5 * 0x30 >> 0x20) != 0) | (uint)((ulonglong)uVar5 * 0x30);
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
        puVar2 = puVar2 + 0xc;
        puVar3[-2] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3[8] = 0;
        uVar5 = uVar5 - 1;
        puVar3 = puVar3 + 0xc;
      } while (uVar5 != 0);
    }
  }
  this_00 = *(tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G_
              **)(this + 4);
  puVar2 = puStack_c;
  if (this_00 !=
      (tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G_
       *)0x0) {
    puVar2 = puStack_c + *(int *)(this + 8) * 0xc;
    if (this_00 != this_00 + param_1 * 0x30) {
      this_01 = (Str_L_char_G_ *)(puStack_c + 4);
      ptVar6 = this_00;
      do {
        if ((uint *)&this_01[-2].Length == puVar2) break;
        this_01[-2].Length = *(int *)ptVar6;
        util__Maybe_struct_util__ClassMember___operator(this_01 + -1,(Str_L_char_G_ *)(ptVar6 + 4));
        util__Maybe_struct_util__ClassMember___operator(this_01,(Str_L_char_G_ *)(ptVar6 + 0x10));
        this_01[1].Data = *(char **)(ptVar6 + 0x1c);
        this_01[1].Capacity = *(int *)(ptVar6 + 0x20);
        util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)&this_01[1].Length,(Str_L_char_G_ *)(ptVar6 + 0x24));
        ptVar6 = ptVar6 + 0x30;
        this_00 = *(tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G_
                    **)(this + 4);
        this_01 = this_01 + 4;
      } while (ptVar6 != this_00 + param_1 * 0x30);
    }
    puVar2 = puStack_c;
    if (this_00 !=
        (tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G_
         *)0x0) {
      tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G____vector_deleting_destructor_(this_00,3);
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(uint **)(this + 4) = puVar2;
  return bStack_5;
}





//==== 00596f40 Clear_00596f40 ====


/* public: virtual void  util__Darray_L_structutil__tuple5_L_void___cdecl_P__void__Cclass_util__Str_L_char_G__Cclassutil__Str_L_char_G__Cbool_P_Cclassutil__Str_L_char_G__G__G___Clear(void) */

void 
util__Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__bool__class_util__Str_char_______Clear(Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G___G_
        *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 00596f60 Clear_00596f60 ====


/* public: virtual void  util__Darray_L_structutil__tuple5_L_void___cdecl_P__void__Cclass_util__Str_L_char_G__Cclassutil__Str_L_char_G__Cclassutil__Delegate_L_void_G__Cclassutil__Str_L_char_G__G___G___Clear(void) */

void 
util__Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__class_util__Delegate_void__class_util__Str_char_______Clear(Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G___G_
        *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 00596f80 Clear_00596f80 ====


/* public: virtual void  util__Darray_L_structutil__tuple6_L_void___cdecl_P__void__Cclass_util__Str_L_char_G__Cclassutil__Str_L_char_G__Cint_P_Cint_Cclassutil__Str_L_char_G__G__G___Clear(void) */

void 
util__Darray_struct_util__tuple6_void____cdecl___void__class_util__Str_char__class_util__Str_char__int__int_class_util__Str_char_______Clear(Darray_L_struct_util__tuple6_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cint_P_Cint_Cclass_util__Str_L_char_G___G___G_
        *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 00596fa0 Clear_00596fa0 ====


/* public: virtual void  util__Darray_L_structWorldLight_G___Clear(void) */

void __thiscall util__Darray_struct_WorldLight___Clear(Darray_L_struct_WorldLight_G_ *this)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_6c [24];
  undefined1 uStack_c;
  
  if (*(int *)(this + 8) < 1) {
    *(undefined4 *)(this + 8) = 0;
    return;
  }
  puVar2 = *(undefined4 **)(this + 4);
  if ((puVar2 != (undefined4 *)0x0) && (puVar2 != puVar2 + *(int *)(this + 8) * 0x1a)) {
    do {
      uStack_c = 0;
      puVar3 = puVar2 + 0x1a;
      auStack_6c[0] = 0;
      auStack_6c[1] = 0;
      auStack_6c[2] = 0;
      auStack_6c[3] = 0;
      auStack_6c[4] = 0;
      auStack_6c[5] = 0;
      auStack_6c[6] = 0;
      auStack_6c[7] = 0;
      auStack_6c[8] = 0;
      auStack_6c[9] = 0;
      auStack_6c[10] = 0;
      auStack_6c[0xb] = 0;
      auStack_6c[0xc] = 0;
      auStack_6c[0xd] = 0;
      auStack_6c[0xe] = 0;
      auStack_6c[0xf] = 0;
      auStack_6c[0x10] = 0;
      auStack_6c[0x11] = 0;
      auStack_6c[0x12] = 0;
      auStack_6c[0x13] = 0;
      auStack_6c[0x14] = 0;
      auStack_6c[0x15] = 0;
      auStack_6c[0x16] = 0;
      auStack_6c[0x17] = 0;
      puVar4 = auStack_6c;
      for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar2 = puVar2 + 1;
      }
      puVar2 = puVar3;
    } while (puVar3 != (undefined4 *)(*(int *)(this + 8) * 0x68 + *(int *)(this + 4)));
    *(undefined4 *)(this + 8) = 0;
    return;
  }
  *(undefined4 *)(this + 8) = 0;
  return;
}





//==== 00597040 GetCommandsGiven ====


/* public: virtual struct CommandType __thiscall FuseCompartment__GetCommandsGiven(void)const  */

void __thiscall FuseCompartment__GetCommandsGiven(FuseCompartment *this)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 *in_stack_00000004;
  
  iVar1 = *(int *)(this + 0x38);
  if ((*(char *)(iVar1 + 0x88) == '\0') || (*(double *)(this + 0x110) < *(double *)(iVar1 + 0x90)))
  {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  if ((*(char *)(iVar1 + 0x78) != '\0') && (*(double *)(iVar1 + 0x80) <= *(double *)(this + 0x110)))
  {
    *in_stack_00000004 = 0;
    in_stack_00000004[1] = 1;
    in_stack_00000004[2] = uVar2;
    return;
  }
  *in_stack_00000004 = 0;
  in_stack_00000004[1] = 0;
  in_stack_00000004[2] = uVar2;
  return;
}





//==== 005970b0 GetCommandsGiven_005970b0 ====


/* public: virtual struct CommandType __thiscall CrewCompartment__GetCommandsGiven(void)const  */

void __thiscall CrewCompartment__GetCommandsGiven(CrewCompartment *this)

{
  undefined2 *in_stack_00000004;
  
  *in_stack_00000004 = 1;
  *(undefined1 *)(in_stack_00000004 + 1) = 0;
  return;
}





//==== 005970d0 GetCompartmentPieceRotation ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual struct util__Quaternion_L_double_G_ 
   ModuleCompartment__GetCompartmentPieceRotation(void)const  */

Quaternion_L_double_G_ *
ModuleCompartment__GetCompartmentPieceRotation(Quaternion_L_double_G_ *__return_storage_ptr__)

{
  *(undefined4 *)&__return_storage_ptr__->X = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = 0;
  *(undefined4 *)&__return_storage_ptr__->Y = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = 0;
  __return_storage_ptr__->Z = 0.0;
  __return_storage_ptr__->W = 1.0;
  return __return_storage_ptr__;
}





//==== 00597130 GetCurrentCollisionShellDirection ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual struct util__Vec3_L_double_G_ 
   ModuleCompartment__GetCurrentCollisionShellDirection(void)const  */

Vec3_L_double_G_ *
ModuleCompartment__GetCurrentCollisionShellDirection(Vec3_L_double_G_ *__return_storage_ptr__)

{
  *(undefined4 *)&__return_storage_ptr__->X = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = 0;
  *(undefined4 *)&__return_storage_ptr__->Y = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = 0;
  __return_storage_ptr__->Z = 1.0;
  return __return_storage_ptr__;
}





//==== 00597160 GetHomingProperties_00597160 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual struct util__tuple3_L_classHomingPropertiesconst_P_Cenum_ForceMissilePhase__Type_Cbool_G_  ModuleCompartment__GetHomingProperties(void)const  */

void ModuleCompartment__GetHomingProperties(void)

{
  undefined4 *in_stack_00000004;
  
  *in_stack_00000004 = 0;
  in_stack_00000004[1] = 0;
  *(undefined1 *)(in_stack_00000004 + 2) = 1;
  return;
}





//==== 00597180 GetHomingProperties_00597180 ====

/* public: virtual struct util__tuple3_L_classHomingPropertiesconst_P_Cenum_ForceMissilePhase__Type_Cbool_G_ __thiscall RemoteControlCompartment__GetHomingProperties(void)const
    */

void __thiscall RemoteControlCompartment__GetHomingProperties(RemoteControlCompartment *this)

{
  int iVar1;
  int *in_stack_00000004;
  
  *in_stack_00000004 = this->_pad_0x38_14 + 0x78;
  iVar1 = this[1]._pad_0x0_0;
  in_stack_00000004[1] = this->ForcePhase;
  *(char *)(in_stack_00000004 + 2) = (char)iVar1;
  return;
}

//==== 005971b0 GetOperatingTemperature_K ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual double  ModuleCompartment__GetOperatingTemperature_K(void)const  */

double ModuleCompartment__GetOperatingTemperature_K(void)

{
  return 2.7;
}





//==== 005971c0 GetUIActions ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual class util__Darray_L_structutil__tuple5_L_void___cdecl_P__void__Cclass_util__Str_L_char_G__Cclassutil__Str_L_char_G__Cclassutil__Delegate_L_void_G__Cclassutil__Str_L_char_G__G__G_
    ModuleCompartment__GetUIActions(void) */

void ModuleCompartment__GetUIActions(void)

{
  undefined4 *in_stack_00000004;
  
  *in_stack_00000004 = (undefined4)(uintptr_t)(&vftable_169);
  in_stack_00000004[1] = 0;
  in_stack_00000004[2] = 0;
  in_stack_00000004[3] = 0;
  return;
}





//==== 005971f0 GetUIActions_005971f0 ====


/* public: virtual class util__Darray_L_structutil__tuple5_L_void___cdecl_P__void__Cclass_util__Str_L_char_G__Cclassutil__Str_L_char_G__Cclassutil__Delegate_L_void_G__Cclassutil__Str_L_char_G__G__G_
   __thiscall RemoteControlCompartment__GetUIActions(void) */

void __thiscall RemoteControlCompartment__GetUIActions(RemoteControlCompartment *this)

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
  RemoteControlCompartment *pRStack_44;
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
  util__Str_char___Str_char(&SStack_90,"RemoteControlUI Disarm Tooltip");
  util__Str_char___Str_char(&SStack_30,"RemoteControlUI Disarm");
  SStack_24.Data = (char *)0x0;
  SStack_24.Capacity = 0;
  SStack_24.Length = 0;
  SStack_18.Data = (char *)0x0;
  SStack_18.Capacity = 0;
  SStack_18.Length = 0;
  util__Str_char___Str_char(&SStack_84,"Disarm");
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_c0,&SStack_90,&SStack_24);
  pSVar3 = util__LocStr__operator__o3(pLVar2);
  util__Str_char___Str_char(&SStack_78,pSVar3);
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_a8,&SStack_30,&SStack_18);
  pSVar3 = util__LocStr__operator__o3(pLVar2);
  util__Str_char___Str_char(&SStack_6c,pSVar3);
  pcStack_60 = (long long int (*)())(Icons__RedX);
  util__Str_char___Str_char(&SStack_5c,&SStack_6c);
  util__Str_char___Str_char(&SStack_50,&SStack_78);
  pcStack_40 = (long long int (*)())(util__DelegateFactory_struct_RemoteControlCompartment_void___MethodCaller__private__void___thiscall_RemoteControlCompartment__Destroy_void);
  pRStack_44 = this;
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
    *(RemoteControlCompartment **)(iVar4 + -0x14) = pRStack_44;
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





//==== 005974a0 GetUIRadioButtonActions ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual class util__Darray_L_structutil__tuple6_L_void___cdecl_P__void__Cclass_util__Str_L_char_G__Cclassutil__Str_L_char_G__Cint_P_Cint_Cclassutil__Str_L_char_G__G__G_ 
   ModuleCompartment__GetUIRadioButtonActions(void) */

void ModuleCompartment__GetUIRadioButtonActions(void)

{
  undefined4 *in_stack_00000004;
  
  *in_stack_00000004 = (undefined4)(uintptr_t)(&vftable_171);
  in_stack_00000004[1] = 0;
  in_stack_00000004[2] = 0;
  in_stack_00000004[3] = 0;
  return;
}





//==== 005974d0 GetUIRadioButtonActions_005974d0 ====


/* public: virtual class util__Darray_L_structutil__tuple6_L_void___cdecl_P__void__Cclass_util__Str_L_char_G__Cclassutil__Str_L_char_G__Cint_P_Cint_Cclassutil__Str_L_char_G__G__G_ __thiscall
   RemoteControlCompartment__GetUIRadioButtonActions(void) */

Darray_L_struct_util__tuple6_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cint_P_Cint_Cclass_util__Str_L_char_G___G___G_
* __thiscall RemoteControlCompartment__GetUIRadioButtonActions(RemoteControlCompartment *this)

{
  undefined8 stack0xffffff34;
  undefined8 stack0xffffff40;
  undefined8 stack0xffffff54;
  Str_L_char_G_ SVar1;
  Str_L_char_G_ SVar2;
  Str_L_char_G_ SVar3;
  Str_L_char_G_ SVar4;
  Delegate_L_void_G_ DVar5;
  Delegate_L_void_G_ DVar6;
  Delegate_L_void_G_ DVar7;
  Delegate_L_void_G_ DVar8;
  Str_L_char_G_ SVar9;
  Str_L_char_G_ SVar10;
  Str_L_char_G_ SVar11;
  Str_L_char_G_ SVar12;
  LocStr *pLVar13;
  Str_L_char_G_ *pSVar14;
  Str_L_char_G_ *pSVar15;
  tuple6_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cint_P_Cint_Cclass_util__Str_L_char_G___G_
  *ptVar16;
  Darray_L_struct_util__tuple6_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cint_P_Cint_Cclass_util__Str_L_char_G___G___G_
  *in_stack_00000004;
  char *pcVar17;
  int iVar18;
  Str_L_char_G_ in_stack_ffffff40;
  ForceMissilePhase *pFVar19;
  ForceMissilePhase *pFVar20;
  _func___cdecl_void_void_ptr *p_Var21;
  char *in_stack_ffffff54;
  int iVar22;
  char *pcVar23;
  tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G_
  atStack_94 [4];
  void *pvStack_90;
  void *pvStack_84;
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
  *(undefined ***)in_stack_00000004 =
       &vftable_171;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Str_char___Str_char(&SStack_34,"RemoteControlUI DefaultPhase Tooltip");
  pcVar23 = "RemoteControlUI DefaultPhase";
  iVar22 = 0x59751c;
  util__Str_char___Str_char(&SStack_28,"RemoteControlUI DefaultPhase");
  SStack_1c.Data = (char *)0x0;
  SStack_1c.Capacity = 0;
  SStack_1c.Length = 0;
  pFVar20 = &this->ForcePhase;
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  util__Str_char___Str_char((Str_L_char_G_ *)&stack0xffffff54,"Style__Default Phase");
  p_Var21 = (_func___cdecl_void_void_ptr *)0x0;
  pcVar17 = (char *)0x597573;
  pFVar19 = pFVar20;
  pLVar13 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_64,&SStack_34,&SStack_1c);
  pSVar14 = util__LocStr__operator__o3(pLVar13);
  iVar18 = 0x597582;
  util__Str_char___Str_char((Str_L_char_G_ *)&stack0xffffff40,pSVar14);
  pLVar13 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_4c,&SStack_28,&SStack_10);
  pSVar15 = util__LocStr__operator__o3(pLVar13);
  util__Str_char___Str_char((Str_L_char_G_ *)&stack0xffffff34,pSVar15);
  SVar1.Capacity = iVar18;
  SVar1.Data = pcVar17;
  SVar1.Length = (int)pSVar14;
  DVar5.CallbackFunction = p_Var21;
  DVar5.Callee = pFVar19;
  SVar9.Capacity = iVar22;
  SVar9.Data = in_stack_ffffff54;
  SVar9.Length = (int)pcVar23;
  ptVar16 = (tuple6_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cint_P_Cint_Cclass_util__Str_L_char_G___G_
             *)util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__class_util__Delegate_void__class_util__Str_char_____tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__class_util__Delegate_void__class_util__Str_char
                         (atStack_94,(_func_void *)(uintptr_t)(Icons__Target),SVar1,in_stack_ffffff40,DVar5,SVar9);
  util__Darray_struct_util__tuple6_void____cdecl___void__class_util__Str_char__class_util__Str_char__int__int_class_util__Str_char_______Add(in_stack_00000004,ptVar16);
  if (pvStack_70 != (void *)0x0) {
    port_op_delete(pvStack_70);
    pvStack_70 = (void *)0x0;
  }
  if (pvStack_84 != (void *)0x0) {
    port_op_delete(pvStack_84);
    pvStack_84 = (void *)0x0;
  }
  if (pvStack_90 != (void *)0x0) {
    port_op_delete(pvStack_90);
    pvStack_90 = (void *)0x0;
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
  util__Str_char___Str_char(&SStack_34,"RemoteControlUI BoostPhase Tooltip");
  pcVar23 = "RemoteControlUI BoostPhase";
  iVar22 = 0x5976d4;
  util__Str_char___Str_char(&SStack_28,"RemoteControlUI BoostPhase");
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  SStack_1c.Data = (char *)0x0;
  SStack_1c.Capacity = 0;
  SStack_1c.Length = 0;
  util__Str_char___Str_char((Str_L_char_G_ *)&stack0xffffff54,"MissilePhase__Boost Phase");
  p_Var21 = (_func___cdecl_void_void_ptr *)0x1;
  pcVar17 = (char *)0x597725;
  pFVar19 = pFVar20;
  pLVar13 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_4c,&SStack_34,&SStack_10);
  pSVar14 = util__LocStr__operator__o3(pLVar13);
  iVar18 = 0x597734;
  util__Str_char___Str_char((Str_L_char_G_ *)&stack0xffffff40,pSVar14);
  pLVar13 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_64,&SStack_28,&SStack_1c);
  pSVar15 = util__LocStr__operator__o3(pLVar13);
  util__Str_char___Str_char((Str_L_char_G_ *)&stack0xffffff34,pSVar15);
  SVar2.Capacity = iVar18;
  SVar2.Data = pcVar17;
  SVar2.Length = (int)pSVar14;
  DVar6.CallbackFunction = p_Var21;
  DVar6.Callee = pFVar19;
  SVar10.Capacity = iVar22;
  SVar10.Data = in_stack_ffffff54;
  SVar10.Length = (int)pcVar23;
  ptVar16 = (tuple6_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cint_P_Cint_Cclass_util__Str_L_char_G___G_
             *)util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__class_util__Delegate_void__class_util__Str_char_____tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__class_util__Delegate_void__class_util__Str_char
                         (atStack_94,Icons__HomingBoostPhase,SVar2,in_stack_ffffff40,DVar6,SVar10);
  util__Darray_struct_util__tuple6_void____cdecl___void__class_util__Str_char__class_util__Str_char__int__int_class_util__Str_char_______Add(in_stack_00000004,ptVar16);
  if (pvStack_70 != (void *)0x0) {
    port_op_delete(pvStack_70);
    pvStack_70 = (void *)0x0;
  }
  if (pvStack_84 != (void *)0x0) {
    port_op_delete(pvStack_84);
    pvStack_84 = (void *)0x0;
  }
  if (pvStack_90 != (void *)0x0) {
    port_op_delete(pvStack_90);
    pvStack_90 = (void *)0x0;
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
  util__Str_char___Str_char(&SStack_34,"RemoteControlUI MidcoursePhase Tooltip");
  pcVar23 = "RemoteControlUI MidcoursePhase";
  iVar22 = 0x597886;
  util__Str_char___Str_char(&SStack_28,"RemoteControlUI MidcoursePhase");
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  SStack_1c.Data = (char *)0x0;
  SStack_1c.Capacity = 0;
  SStack_1c.Length = 0;
  util__Str_char___Str_char((Str_L_char_G_ *)&stack0xffffff54,"MissilePhase__Midcourse Phase");
  p_Var21 = (_func___cdecl_void_void_ptr *)0x2;
  pcVar17 = (char *)0x5978d7;
  pFVar19 = pFVar20;
  pLVar13 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_4c,&SStack_34,&SStack_10);
  pSVar14 = util__LocStr__operator__o3(pLVar13);
  iVar18 = 0x5978e6;
  util__Str_char___Str_char((Str_L_char_G_ *)&stack0xffffff40,pSVar14);
  pLVar13 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_64,&SStack_28,&SStack_1c);
  pSVar15 = util__LocStr__operator__o3(pLVar13);
  util__Str_char___Str_char((Str_L_char_G_ *)&stack0xffffff34,pSVar15);
  SVar3.Capacity = iVar18;
  SVar3.Data = pcVar17;
  SVar3.Length = (int)pSVar14;
  DVar7.CallbackFunction = p_Var21;
  DVar7.Callee = pFVar19;
  SVar11.Capacity = iVar22;
  SVar11.Data = in_stack_ffffff54;
  SVar11.Length = (int)pcVar23;
  ptVar16 = (tuple6_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cint_P_Cint_Cclass_util__Str_L_char_G___G_
             *)util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__class_util__Delegate_void__class_util__Str_char_____tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__class_util__Delegate_void__class_util__Str_char
                         (atStack_94,Icons__HomingMidcoursePhase,SVar3,in_stack_ffffff40,DVar7,
                          SVar11);
  util__Darray_struct_util__tuple6_void____cdecl___void__class_util__Str_char__class_util__Str_char__int__int_class_util__Str_char_______Add(in_stack_00000004,ptVar16);
  if (pvStack_70 != (void *)0x0) {
    port_op_delete(pvStack_70);
    pvStack_70 = (void *)0x0;
  }
  if (pvStack_84 != (void *)0x0) {
    port_op_delete(pvStack_84);
    pvStack_84 = (void *)0x0;
  }
  if (pvStack_90 != (void *)0x0) {
    port_op_delete(pvStack_90);
    pvStack_90 = (void *)0x0;
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
  util__Str_char___Str_char(&SStack_34,"RemoteControlUI TerminalPhase Tooltip");
  pcVar23 = "RemoteControlUI TerminalPhase";
  iVar22 = 0x597a38;
  util__Str_char___Str_char(&SStack_28,"RemoteControlUI TerminalPhase");
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  SStack_1c.Data = (char *)0x0;
  SStack_1c.Capacity = 0;
  SStack_1c.Length = 0;
  util__Str_char___Str_char((Str_L_char_G_ *)&stack0xffffff54,"MissilePhase__Terminal Phase");
  p_Var21 = (_func___cdecl_void_void_ptr *)0x3;
  pcVar17 = (char *)0x597a89;
  pLVar13 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_4c,&SStack_34,&SStack_10);
  pSVar14 = util__LocStr__operator__o3(pLVar13);
  iVar18 = 0x597a98;
  util__Str_char___Str_char((Str_L_char_G_ *)&stack0xffffff40,pSVar14);
  pLVar13 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_64,&SStack_28,&SStack_1c);
  pSVar15 = util__LocStr__operator__o3(pLVar13);
  util__Str_char___Str_char((Str_L_char_G_ *)&stack0xffffff34,pSVar15);
  SVar4.Capacity = iVar18;
  SVar4.Data = pcVar17;
  SVar4.Length = (int)pSVar14;
  DVar8.CallbackFunction = p_Var21;
  DVar8.Callee = pFVar20;
  SVar12.Capacity = iVar22;
  SVar12.Data = in_stack_ffffff54;
  SVar12.Length = (int)pcVar23;
  ptVar16 = (tuple6_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cint_P_Cint_Cclass_util__Str_L_char_G___G_
             *)util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__class_util__Delegate_void__class_util__Str_char_____tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__class_util__Delegate_void__class_util__Str_char
                         (atStack_94,Icons__HomingTerminalPhase,SVar4,in_stack_ffffff40,DVar8,SVar12
                         );
  util__Darray_struct_util__tuple6_void____cdecl___void__class_util__Str_char__class_util__Str_char__int__int_class_util__Str_char_______Add(in_stack_00000004,ptVar16);
  if (pvStack_70 != (void *)0x0) {
    port_op_delete(pvStack_70);
    pvStack_70 = (void *)0x0;
  }
  if (pvStack_84 != (void *)0x0) {
    port_op_delete(pvStack_84);
    pvStack_84 = (void *)0x0;
  }
  if (pvStack_90 != (void *)0x0) {
    port_op_delete(pvStack_90);
    pvStack_90 = (void *)0x0;
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





//==== 00597be0 GetUIToggleActions ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual class util__Darray_L_structutil__tuple5_L_void___cdecl_P__void__Cclass_util__Str_L_char_G__Cclassutil__Str_L_char_G__Cbool_P_Cclassutil__Str_L_char_G__G__G_ 
   ModuleCompartment__GetUIToggleActions(void) */

void ModuleCompartment__GetUIToggleActions(void)

{
  undefined4 *in_stack_00000004;
  
  *in_stack_00000004 = (undefined4)(uintptr_t)(&vftable_170);
  in_stack_00000004[1] = 0;
  in_stack_00000004[2] = 0;
  in_stack_00000004[3] = 0;
  return;
}





//==== 00597c10 GetUIToggleActions_00597c10 ====


/* public: virtual class util__Darray_L_structutil__tuple5_L_void___cdecl_P__void__Cclass_util__Str_L_char_G__Cclassutil__Str_L_char_G__Cbool_P_Cclassutil__Str_L_char_G__G__G_ __thiscall
   RemoteControlCompartment__GetUIToggleActions(void) */

Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G___G_
* __thiscall RemoteControlCompartment__GetUIToggleActions(RemoteControlCompartment *this)

{
  undefined8 stack0x00000004;
  Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G___G_
  *this_00;
  bool bVar1;
  LocStr *pLVar2;
  Str_L_char_G_ *pSVar3;
  int iVar4;
  Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G___G_
  *in_stack_00000004;
  void *apvStack_b4 [3];
  void *pvStack_a8;
  void *apvStack_9c [3];
  void *pvStack_90;
  Str_L_char_G_ SStack_84;
  Str_L_char_G_ SStack_78;
  Str_L_char_G_ SStack_6c;
  Str_L_char_G_ SStack_60;
  code *pcStack_54;
  Str_L_char_G_ SStack_50;
  Str_L_char_G_ SStack_44;
  RemoteControlCompartment *pRStack_38;
  Str_L_char_G_ SStack_34;
  Str_L_char_G_ SStack_28;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
  this_00 = in_stack_00000004;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = (undefined **)(&vftable_170);
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Str_char___Str_char(&SStack_84,"RemoteControlUI DistributeHoming Tooltip");
  util__Str_char___Str_char(&SStack_28,"RemoteControlUI DistributeHoming");
  SStack_1c.Data = (char *)0x0;
  SStack_1c.Capacity = 0;
  SStack_1c.Length = 0;
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  util__Str_char___Str_char(&SStack_78,"Distribute AIOrder__Homing");
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_b4,&SStack_84,&SStack_1c);
  pSVar3 = util__LocStr__operator__o3(pLVar2);
  util__Str_char___Str_char(&SStack_6c,pSVar3);
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_9c,&SStack_28,&SStack_10);
  pSVar3 = util__LocStr__operator__o3(pLVar2);
  util__Str_char___Str_char(&SStack_60,pSVar3);
  pcStack_54 = (long long int (*)())(Icons__DistributeTargeting);
  util__Str_char___Str_char(&SStack_50,&SStack_60);
  util__Str_char___Str_char(&SStack_44,&SStack_6c);
  pRStack_38 = this + 1;
  util__Str_char___Str_char(&SStack_34,&SStack_78);
  if (SStack_60.Data != (char *)0x0) {
    port_op_delete(SStack_60.Data);
  }
  if (SStack_6c.Data != (char *)0x0) {
    port_op_delete(SStack_6c.Data);
  }
  if (SStack_78.Data != (char *)0x0) {
    port_op_delete(SStack_78.Data);
  }
  iVar4 = *(int *)(in_stack_00000004 + 8);
  in_stack_00000004 =
       (Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G___G_
        *)(iVar4 + 1);
  util__Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__bool__class_util__Str_char_______SetSize(this_00,(int *)&stack0x00000004);
  bVar1 = util__Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__bool__class_util__Str_char_______CheckSize(this_00,iVar4);
  if (bVar1) {
    iVar4 = *(int *)(this_00 + 8) * 0x2c + *(int *)(this_00 + 4);
    *(code **)(iVar4 + -0x2c) = pcStack_54;
    util__Str_char___operator__o8((Str_L_char_G_ *)(iVar4 + -0x28),&SStack_50);
    util__Str_char___operator__o8((Str_L_char_G_ *)(iVar4 + -0x1c),&SStack_44);
    *(RemoteControlCompartment **)(iVar4 + -0x10) = pRStack_38;
    util__Str_char___operator__o8((Str_L_char_G_ *)(iVar4 + -0xc),&SStack_34);
  }
  if (SStack_34.Data != (char *)0x0) {
    port_op_delete(SStack_34.Data);
  }
  if (SStack_44.Data != (char *)0x0) {
    port_op_delete(SStack_44.Data);
  }
  if (SStack_50.Data != (char *)0x0) {
    port_op_delete(SStack_50.Data);
  }
  if (pvStack_90 != (void *)0x0) {
    port_op_delete(pvStack_90);
    pvStack_90 = (void *)0x0;
  }
  if (apvStack_9c[0] != (void *)0x0) {
    port_op_delete(apvStack_9c[0]);
    apvStack_9c[0] = (void *)0x0;
  }
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
    SStack_10.Data = (char *)0x0;
  }
  if (pvStack_a8 != (void *)0x0) {
    port_op_delete(pvStack_a8);
    pvStack_a8 = (void *)0x0;
  }
  if (apvStack_b4[0] != (void *)0x0) {
    port_op_delete(apvStack_b4[0]);
    apvStack_b4[0] = (void *)0x0;
  }
  if (SStack_1c.Data != (char *)0x0) {
    port_op_delete(SStack_1c.Data);
    SStack_1c.Data = (char *)0x0;
  }
  if (SStack_28.Data != (char *)0x0) {
    port_op_delete(SStack_28.Data);
    SStack_28.Data = (char *)0x0;
  }
  if (SStack_84.Data != (char *)0x0) {
    port_op_delete(SStack_84.Data);
  }
  return this_00;
}





//==== 00597eb0 GetWorldLights ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual class util__Darray_L_structWorldLight_G_ __thiscall
   Manager__GetWorldLights(void)const  */

void __thiscall Manager__GetWorldLights(Manager *this)

{
  undefined4 *in_stack_00000004;
  
  *in_stack_00000004 = (undefined4)(uintptr_t)(&vftable_168);
  in_stack_00000004[1] = 0;
  in_stack_00000004[2] = 0;
  in_stack_00000004[3] = 0;
  return;
}





//==== 00597ee0 IsRadiatorLighting ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: bool __thiscall Preferences__IsRadiatorLighting(void)const  */

bool __thiscall Preferences__IsRadiatorLighting(Preferences *this)

{
  return (this->OptionsSection__Graphics).Lighting.RadiatorLighting;
}





//==== 00597f10 Last_00597f10 ====


/* public: virtual struct WorldLight &  util__Darray_L_structWorldLight_G___Last(void) */

WorldLight * __thiscall util__Darray_struct_WorldLight___Last(Darray_L_struct_WorldLight_G_ *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3c,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = *(int *)(this + 8);
  }
  return (WorldLight *)(*(int *)(this + 4) + -0x68 + iVar1 * 0x68);
}





//==== 00597f50 Last_00597f50 ====


/* public: virtual struct WorldLight const & __thiscall util__Darray_struct_WorldLight___Last(void)const  */

WorldLight *  util__Darray_struct_WorldLight___Last__o3(Darray_L_struct_WorldLight_G_ *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3d,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = *(int *)(this + 8);
  }
  return (WorldLight *)(*(int *)(this + 4) + -0x68 + iVar1 * 0x68);
}





//==== 00597f90 Disable ====


/* public: virtual void __thiscall PayloadCompartment__Disable(void) */

void __thiscall PayloadCompartment__Disable(PayloadCompartment *this)

{
  this->Disabled = true;
  return;
}





//==== 00597fa0 SetAll_00597fa0 ====


/* public: virtual void  util__Darray_L_structutil__tuple5_L_void___cdecl_P__void__Cclass_util__Str_L_char_G__Cclassutil__Str_L_char_G__Cbool_P_Cclassutil__Str_L_char_G__G__G___SetAll(struct
   util__tuple5_L_void___cdecl_P__void__Cclassutil__Str_L_char_G__Cclassutil__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G__G_ const &) */

void 
util__Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__bool__class_util__Str_char_______SetAll(Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G___G_
         *this,tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G_
               *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this + 4);
  if (puVar1 != puVar1 + *(int *)(this + 8) * 0xb) {
    do {
      *puVar1 = *(undefined4 *)param_1;
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar1 + 1),(Str_L_char_G_ *)(param_1 + 4));
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar1 + 4),(Str_L_char_G_ *)(param_1 + 0x10));
      puVar1[7] = *(undefined4 *)(param_1 + 0x1c);
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar1 + 8),(Str_L_char_G_ *)(param_1 + 0x20));
      puVar1 = puVar1 + 0xb;
    } while (puVar1 != (undefined4 *)(*(int *)(this + 8) * 0x2c + *(int *)(this + 4)));
  }
  return;
}





//==== 00598010 SetAll_00598010 ====


/* public: virtual void  util__Darray_L_structutil__tuple5_L_void___cdecl_P__void__Cclass_util__Str_L_char_G__Cclassutil__Str_L_char_G__Cclassutil__Delegate_L_void_G__Cclassutil__Str_L_char_G__G___G___SetAll(struct util__tuple5_L_void___cdecl_P__void__Cclassutil__Str_L_char_G__Cclass_util__Str_L_char_G__Cclassutil__Delegate_L_void_G__Cclassutil__Str_L_char_G__G_ const &) */

void 
util__Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__class_util__Delegate_void__class_util__Str_char_______SetAll(Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G___G_
         *this,tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G_
               *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this + 4);
  if (puVar1 != puVar1 + *(int *)(this + 8) * 0xc) {
    do {
      *puVar1 = *(undefined4 *)param_1;
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar1 + 1),(Str_L_char_G_ *)(param_1 + 4));
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar1 + 4),(Str_L_char_G_ *)(param_1 + 0x10));
      puVar1[7] = *(undefined4 *)(param_1 + 0x1c);
      puVar1[8] = *(undefined4 *)(param_1 + 0x20);
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar1 + 9),(Str_L_char_G_ *)(param_1 + 0x24));
      puVar1 = puVar1 + 0xc;
    } while (puVar1 != (undefined4 *)(*(int *)(this + 8) * 0x30 + *(int *)(this + 4)));
  }
  return;
}





//==== 00598080 SetAll_00598080 ====


/* public: virtual void  util__Darray_L_structWorldLight_G___SetAll(struct WorldLight const
   &) */

void __thiscall
util__Darray_struct_WorldLight___SetAll(Darray_L_struct_WorldLight_G_ *this,WorldLight *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  WorldLight *pWVar4;
  
  puVar1 = *(undefined4 **)(this + 4);
  if (puVar1 != puVar1 + *(int *)(this + 8) * 0x1a) {
    do {
      puVar2 = puVar1 + 0x1a;
      pWVar4 = param_1;
      for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar1 = (undefined4)((pWVar4->RelativePosition_km).X);
        pWVar4 = (WorldLight *)((int)&(pWVar4->RelativePosition_km).X + 4);
        puVar1 = puVar1 + 1;
      }
      puVar1 = puVar2;
    } while (puVar2 != (undefined4 *)(*(int *)(this + 8) * 0x68 + *(int *)(this + 4)));
  }
  return;
}





//==== 005980c0 SetSize_005980c0 ====


/* private: void  util__Darray_L_structutil__tuple5_L_void___cdecl_P__void__Cclass_util__Str_L_char_G__Cclassutil__Str_L_char_G__Cbool_P_Cclassutil__Str_L_char_G__G__G___SetSize(int const &) */

void 
util__Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__bool__class_util__Str_char_______SetSize(Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G___G_
          *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  Str_L_char_G_ SStack_2c;
  Str_L_char_G_ SStack_20;
  undefined4 uStack_14;
  Str_L_char_G_ SStack_10;
  
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
     (puVar4 = (undefined4 *)(iVar3 * 0x2c + iVar2),
     puVar4 != (undefined4 *)(*(int *)(this + 8) * 0x2c + iVar2))) {
    do {
      SStack_10.Capacity = 0;
      SStack_10.Length = 0;
      SStack_2c.Data = (char *)0x0;
      SStack_2c.Capacity = 0;
      SStack_2c.Length = 0;
      SStack_20.Data = (char *)0x0;
      *puVar4 = 0;
      SStack_20.Capacity = 0;
      SStack_20.Length = 0;
      uStack_14 = 0;
      SStack_10.Data = (char *)0x0;
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar4 + 1),&SStack_2c);
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar4 + 4),&SStack_20);
      puVar4[7] = 0;
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar4 + 8),&SStack_10);
      puVar4 = puVar4 + 0xb;
    } while (puVar4 != (undefined4 *)(*(int *)(this + 8) * 0x2c + *(int *)(this + 4)));
  }
  *(int *)(this + 8) = iVar3;
  return;
}





//==== 005981b0 SetSize_005981b0 ====


/* private: void  util__Darray_L_structutil__tuple5_L_void___cdecl_P__void__Cclass_util__Str_L_char_G__Cclassutil__Str_L_char_G__Cclassutil__Delegate_L_void_G__Cclassutil__Str_L_char_G__G___G___SetSize(int const &) */

void 
util__Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__class_util__Delegate_void__class_util__Str_char_______SetSize(Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G___G_
          *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  Str_L_char_G_ SStack_30;
  Str_L_char_G_ SStack_24;
  undefined4 uStack_18;
  undefined4 uStack_14;
  Str_L_char_G_ SStack_10;
  
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
     (puVar4 = (undefined4 *)(iVar3 * 0x30 + iVar2),
     puVar4 != (undefined4 *)(*(int *)(this + 8) * 0x30 + iVar2))) {
    do {
      SStack_24.Capacity = 0;
      SStack_24.Length = 0;
      SStack_30.Data = (char *)0x0;
      SStack_30.Capacity = 0;
      SStack_30.Length = 0;
      SStack_24.Data = (char *)0x0;
      uStack_18 = 0;
      uStack_14 = 0;
      SStack_10.Data = (char *)0x0;
      SStack_10.Capacity = 0;
      SStack_10.Length = 0;
      *puVar4 = 0;
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar4 + 1),&SStack_30);
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar4 + 4),&SStack_24);
      puVar4[7] = 0;
      puVar4[8] = 0;
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar4 + 9),&SStack_10);
      puVar4 = puVar4 + 0xc;
    } while (puVar4 != (undefined4 *)(*(int *)(this + 8) * 0x30 + *(int *)(this + 4)));
  }
  *(int *)(this + 8) = iVar3;
  return;
}





//==== 005982e0 SetSize_005982e0 ====


/* private: void  util__Darray_L_structutil__tuple6_L_void___cdecl_P__void__Cclass_util__Str_L_char_G__Cclassutil__Str_L_char_G__Cint_P_Cint_Cclassutil__Str_L_char_G__G__G___SetSize(int const &)
    */

void 
util__Darray_struct_util__tuple6_void____cdecl___void__class_util__Str_char__class_util__Str_char__int__int_class_util__Str_char_______SetSize(Darray_L_struct_util__tuple6_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cint_P_Cint_Cclass_util__Str_L_char_G___G___G_
          *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  Str_L_char_G_ SStack_30;
  Str_L_char_G_ SStack_24;
  undefined4 uStack_18;
  undefined4 uStack_14;
  Str_L_char_G_ SStack_10;
  
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
     (puVar4 = (undefined4 *)(iVar3 * 0x30 + iVar2),
     puVar4 != (undefined4 *)(*(int *)(this + 8) * 0x30 + iVar2))) {
    do {
      SStack_10.Data = (char *)0x0;
      SStack_10.Capacity = 0;
      SStack_30.Data = (char *)0x0;
      SStack_30.Capacity = 0;
      SStack_30.Length = 0;
      SStack_24.Data = (char *)0x0;
      SStack_10.Length = 0;
      SStack_24.Capacity = 0;
      SStack_24.Length = 0;
      uStack_18 = 0;
      uStack_14 = 0;
      *puVar4 = 0;
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar4 + 1),&SStack_30);
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar4 + 4),&SStack_24);
      puVar4[7] = 0;
      puVar4[8] = 0;
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar4 + 9),&SStack_10);
      puVar4 = puVar4 + 0xc;
    } while (puVar4 != (undefined4 *)(*(int *)(this + 8) * 0x30 + *(int *)(this + 4)));
  }
  *(int *)(this + 8) = iVar3;
  return;
}





//==== 005983f0 SingleItem_005983f0 ====


/* public: static class util__Darray_L_classutil__Str_L_char_G__G_ __cdecl util__Darray_L_class_util__Str_L_char_G__G___SingleItem(class util__Str_L_char_G_ const &) */

Str_L_char_G_ * __cdecl util__Darray_class_util__Str_char_____SingleItem(Str_L_char_G_ *param_1)

{
  Str_L_char_G_ *this;
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  Str_L_char_G_ *in_stack_00000008;
  Str_L_char_G_ SStack_10;
  
  this = param_1;
  param_1->Data = (char *)0x0;
  param_1->Capacity = 0;
  param_1->Length = 0;
  param_1[1].Data = (char *)0x0;
  param_1->Data = (char *)&vftable_4;
  param_1->Capacity = 0;
  param_1->Length = 0;
  param_1[1].Data = (char *)0x1;
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
  this->Capacity = (int)puVar3;
  if (0 < (int)this[1].Data) {
    SStack_10.Data = (char *)0x0;
    iVar5 = 0;
    SStack_10.Capacity = 0;
    SStack_10.Length = 0;
    do {
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(this->Capacity + iVar5),&SStack_10);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0xc;
    } while (iVar4 < (int)this[1].Data);
  }
  iVar4 = this->Length;
  param_1 = (Str_L_char_G_ *)(iVar4 + 1);
  SetSize((Darray_L_class_util__Str_L_char_G___G_ *)this,(int *)&param_1);
  bVar1 = CheckSize((Darray_L_class_util__Str_L_char_G___G_ *)this,iVar4);
  if (bVar1) {
    util__Maybe_struct_util__ClassMember___operator
              ((Str_L_char_G_ *)(this->Capacity + this->Length * 0xc + -0xc),in_stack_00000008);
  }
  return this;
}





//==== 005984c0 StaticFactory_005984c0 ====

/* public: static class util__Reflectable * __cdecl FuseModule__ReflectionInfoStruct_L_class_FuseModule_G___StaticFactory(void) */

Reflectable * __cdecl FuseModule__ReflectionInfoStruct_class_FuseModule___StaticFactory(void)

{
  Module *this;
  
  this = (Module *)(uintptr_t)(port_op_new(0x98));
  if (this != (Module *)0x0) {
    memset(this,0,0x98);
    Module__Module(this);
    this->_pad_0x0_0 = (int)&vftable_for_EditorReflectable__2;
    *(undefined4 *)&(this->GetTotalPowerUsage_W_MemoizedValue).field_0xc = (undefined4)(uintptr_t)&vftable_for_util__RTTIBaseClass__2;
    *(undefined8 *)&this[1].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = (undefined8)(uintptr_t) (undefined **)(0x4000000000000000);
    return (Reflectable *)this;
  }
  return (Reflectable *)0x0;
}

//==== 00598510 StaticFactory_00598510 ====

/* public: static class util__Reflectable * __cdecl HomingPhase__ReflectionInfoStruct_L_class_HomingPhase_G___StaticFactory(void) */

Reflectable * __cdecl HomingPhase__ReflectionInfoStruct_class_HomingPhase___StaticFactory(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x20));
  if (pRVar1 != (Reflectable *)0x0) {
    pRVar1->_pad_0x0_0 = 0;
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1[1]._pad_0x0_0 = 0;
    pRVar1[1].Name.Data = (char *)0x0;
    pRVar1[1].Name.Capacity = 0;
    pRVar1[1].Name.Length = 0;
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_160;
    pRVar1[1]._pad_0x0_0 = 0;
    *(undefined1 *)&pRVar1[1].Name.Data = 0;
    pRVar1[1].Name.Capacity = 0;
    pRVar1[1].Name.Length = 0x3ff00000;
  }
  return (Reflectable *)0x0;
}

//==== 00598560 StaticFactory_00598560 ====

/* public: static class util__Reflectable * __cdecl HomingProperties__ReflectionInfoStruct_L_class_HomingProperties_G___StaticFactory(void) */

Reflectable * __cdecl HomingProperties__ReflectionInfoStruct_class_HomingProperties___StaticFactory(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x80));
  if (pRVar1 != (Reflectable *)0x0) {
    memset(pRVar1,0,0x80);
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_162;
    pRVar1[1].Name.Length = 0;
    pRVar1[2]._pad_0x0_0 = 0;
    pRVar1[2].Name.Data = (char *)0x0;
    pRVar1[1].Name.Capacity = (int)&vftable_160;
    pRVar1[2].Name.Capacity = 0;
    *(undefined1 *)&pRVar1[2].Name.Length = 0;
    pRVar1[3]._pad_0x0_0 = 0;
    pRVar1[3].Name.Data = (char *)0x3ff00000;
    pRVar1[3].Name.Length = 0;
    pRVar1[4]._pad_0x0_0 = 0;
    pRVar1[4].Name.Data = (char *)0x0;
    pRVar1[3].Name.Capacity = (int)&vftable_160;
    pRVar1[4].Name.Capacity = 0;
    *(undefined1 *)&pRVar1[4].Name.Length = 0;
    pRVar1[5]._pad_0x0_0 = 0;
    pRVar1[5].Name.Data = (char *)0x3ff00000;
    pRVar1[5].Name.Length = 0;
    pRVar1[6]._pad_0x0_0 = 0;
    pRVar1[6].Name.Data = (char *)0x0;
    pRVar1[5].Name.Capacity = (int)&vftable_160;
    pRVar1[6].Name.Capacity = 0;
    *(undefined1 *)&pRVar1[6].Name.Length = 0;
    pRVar1[7]._pad_0x0_0 = 0;
    pRVar1[7].Name.Data = (char *)0x3ff00000;
  }
  return (Reflectable *)0x0;
}

//==== 00598590 StaticFactory_00598590 ====

/* public: static class util__Reflectable * __cdecl RemoteControlModule__ReflectionInfoStruct_L_class_RemoteControlModule_G___StaticFactory(void) */

Reflectable * __cdecl
RemoteControlModule__ReflectionInfoStruct_class_RemoteControlModule___StaticFactory(void)

{
  Module *this;
  
  this = (Module *)(uintptr_t)(port_op_new(0xf8));
  if (this != (Module *)0x0) {
    memset(this,0,0xf8);
    Module__Module(this);
    this->_pad_0x0_0 = (int)&vftable_for_EditorReflectable_;
    *(undefined4 *)&(this->GetTotalPowerUsage_W_MemoizedValue).field_0xc = (undefined4)(uintptr_t)&vftable_for_util__RTTIBaseClass_;
    *(undefined8 *)&this[1].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity =
         0x4000000000000000;
    memset(&this[1].GetTotalPowerUsage_W_MemoizedValue,0,0x80);
    HomingProperties__HomingProperties
              ((HomingProperties *)&this[1].GetTotalPowerUsage_W_MemoizedValue);
    return (Reflectable *)this;
  }
  return (Reflectable *)0x0;
}

//==== 00598600 StaticGetMemberByIndex_00598600 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl FuseModule__ReflectionInfoStruct_class_FuseModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
FuseModule__ReflectionInfoStruct_class_FuseModule___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_8900ea68__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_8900ea68__thread_safe_static_guard_0__);
    if ( cde_l2_8900ea68__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_54f4b571_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096729c = 0;
      _DAT_009672a0 = 0;
      _DAT_009672a4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009672a8,"Unused");
      _DAT_009672b4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009672b8,"SteamWorkshopID");
      _DAT_009672c4 = 6;
      _DAT_009672c8 = 0x10;
      _DAT_009672cc = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009672d0,"AStr");
      _DAT_009672dc = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009672e0,"Description");
      _DAT_009672ec = 6;
      _DAT_009672f0 = 0x20;
      _DAT_009672f4 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009672f8,"AStr");
      _DAT_00967304 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967308,"UsesCustomName");
      _DAT_00967314 = 1;
      _DAT_00967318 = 0x68;
      _DAT_0096731c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967320,"bool");
      _DAT_0096732c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967330,"AspectRatio");
      _DAT_0096733c = 4;
      _DAT_00967340 = 0x70;
      _DAT_00967344 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967348,"double");
      _DAT_00967354 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967358,"TriggerEngines");
      _DAT_00967364 = 1;
      _DAT_00967368 = 0x78;
      _DAT_0096736c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967370,"bool");
      _DAT_0096737c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967380,"EngineDelay_s");
      _DAT_0096738c = 4;
      _DAT_00967390 = 0x80;
      _DAT_00967394 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967398,"double");
      _DAT_009673a4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009673a8,"TriggerPayloads");
      _DAT_009673b4 = 1;
      _DAT_009673b8 = 0x88;
      _DAT_009673bc = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009673c0,"bool");
      _DAT_009673cc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009673d0,"PayloadDelay_s");
      _DAT_009673dc = 4;
      _DAT_009673e0 = 0x90;
      _DAT_009673e4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009673e8,"double");
      _DAT_009673f4 = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_FuseModule__ReflectionInfoStruct_class_FuseModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_8900ea68__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_54f4b571_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_0096729c + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_009672a0 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_009672a4 + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_009672a8 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_009672b4)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_009672b5)[iVar1];
  return __return_storage_ptr__;
}





//==== 00598910 StaticGetMemberByIndex_00598910 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl HomingPhase__ReflectionInfoStruct_class_HomingPhase___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
HomingPhase__ReflectionInfoStruct_class_HomingPhase___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_49f35873__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_49f35873__thread_safe_static_guard_0__);
    if ( cde_l2_49f35873__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_b81a1826_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00967894 = 0;
      _DAT_00967898 = 0;
      _DAT_0096789c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009678a0,"Unused");
      _DAT_009678ac = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009678b0,"GuidanceLaw");
      _DAT_009678bc = 9;
      _DAT_009678c0 = 0x10;
      _DAT_009678c4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009678c8,"GuidanceAlgorithm");
      _DAT_009678d4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009678d8,"Accelerate");
      _DAT_009678e4 = 1;
      _DAT_009678e8 = 0x14;
      _DAT_009678ec = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009678f0,"bool");
      _DAT_009678fc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967900,"DampingEngineMultiplier");
      _DAT_0096790c = 4;
      _DAT_00967910 = 0x18;
      _DAT_00967914 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967918,"double");
      _DAT_00967924 = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_HomingPhase__ReflectionInfoStruct_class_HomingPhase___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_49f35873__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_b81a1826_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_00967894 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_00967898 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_0096789c + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_009678a0 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_009678ac)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_009678ad)[iVar1];
  return __return_storage_ptr__;
}





//==== 00598ad0 StaticGetMemberByIndex_00598ad0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   HomingProperties__ReflectionInfoStruct_class_HomingProperties___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
HomingProperties__ReflectionInfoStruct_class_HomingProperties___StaticGetMemberByIndex__o2
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_7e22b4b8__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_7e22b4b8__thread_safe_static_guard_0__);
    if ( cde_l2_7e22b4b8__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_5c368793_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_009676f4 = 0;
      _DAT_009676f8 = 0;
      _DAT_009676fc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967700,"Unused");
      _DAT_0096770c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967710,"PropellantForBoostPhase_Percent");
      _DAT_0096771c = 4;
      _DAT_00967720 = 0x10;
      _DAT_00967724 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967728,"double");
      _DAT_00967734 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967738,"BoostPhase");
      _DAT_00967744 = 10;
      _DAT_00967748 = 0x18;
      _DAT_0096774c = 0x20;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967750,"HomingPhase");
      _DAT_0096775c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967760,"MidcoursePhase");
      _DAT_0096776c = 10;
      _DAT_00967770 = 0x38;
      _DAT_00967774 = 0x20;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967778,"HomingPhase");
      _DAT_00967784 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967788,"TerminalPhase");
      _DAT_00967794 = 10;
      _DAT_00967798 = 0x58;
      _DAT_0096779c = 0x20;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009677a0,"HomingPhase");
      _DAT_009677ac = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009677b0,"IrradianceCutoff_Percent");
      _DAT_009677bc = 4;
      _DAT_009677c0 = 0x78;
      _DAT_009677c4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009677c8,"double");
      _DAT_009677d4 = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_HomingProperties__ReflectionInfoStruct_class_HomingProperties___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_7e22b4b8__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_5c368793_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_009676f4 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_009676f8 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_009676fc + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_00967700 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0096770c)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0096770d)[iVar1];
  return __return_storage_ptr__;
}





//==== 00598d10 StaticGetMemberByIndex_00598d10 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   RemoteControlModule__ReflectionInfoStruct_class_RemoteControlModule___StaticGetMemberByIndex(int)
    */

ClassMember * __cdecl
RemoteControlModule__ReflectionInfoStruct_class_RemoteControlModule___StaticGetMemberByIndex__o2
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_f44dcb24__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_f44dcb24__thread_safe_static_guard_0__);
    if ( cde_l2_f44dcb24__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_2cdeaf04_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00967504 = 0;
      _DAT_00967508 = 0;
      _DAT_0096750c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967510,"Unused");
      _DAT_0096751c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967520,"SteamWorkshopID");
      _DAT_0096752c = 6;
      _DAT_00967530 = 0x10;
      _DAT_00967534 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967538,"AStr");
      _DAT_00967544 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967548,"Description");
      _DAT_00967554 = 6;
      _DAT_00967558 = 0x20;
      _DAT_0096755c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967560,"AStr");
      _DAT_0096756c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967570,"UsesCustomName");
      _DAT_0096757c = 1;
      _DAT_00967580 = 0x68;
      _DAT_00967584 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967588,"bool");
      _DAT_00967594 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967598,"AspectRatio");
      _DAT_009675a4 = 4;
      _DAT_009675a8 = 0x70;
      _DAT_009675ac = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009675b0,"double");
      _DAT_009675bc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009675c0,"HomingBehavior");
      _DAT_009675cc = 10;
      _DAT_009675d0 = 0x78;
      _DAT_009675d4 = 0x80;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009675d8,"HomingProperties");
      _DAT_009675e4 = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_RemoteControlModule__ReflectionInfoStruct_class_RemoteControlModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_f44dcb24__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_2cdeaf04_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_00967504 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_00967508 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_0096750c + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_00967510 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0096751c)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0096751d)[iVar1];
  return __return_storage_ptr__;
}





//==== 00598f50 StaticGetMemberCount_00598f50 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl FuseModule__ReflectionInfoStruct_class_FuseModule___StaticGetMemberCount(void) */

int __cdecl FuseModule__ReflectionInfoStruct_class_FuseModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_21f0c3b4__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_21f0c3b4__thread_safe_static_guard_0__);
    if ( cde_l2_21f0c3b4__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_d34e67be_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096712c = 0;
      _DAT_00967130 = 0;
      _DAT_00967134 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967138,"Unused");
      _DAT_00967144 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967148,"SteamWorkshopID");
      _DAT_00967154 = 6;
      _DAT_00967158 = 0x10;
      _DAT_0096715c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967160,"AStr");
      _DAT_0096716c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967170,"Description");
      _DAT_0096717c = 6;
      _DAT_00967180 = 0x20;
      _DAT_00967184 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967188,"AStr");
      _DAT_00967194 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967198,"UsesCustomName");
      _DAT_009671a4 = 1;
      _DAT_009671a8 = 0x68;
      _DAT_009671ac = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009671b0,"bool");
      _DAT_009671bc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009671c0,"AspectRatio");
      _DAT_009671cc = 4;
      _DAT_009671d0 = 0x70;
      _DAT_009671d4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009671d8,"double");
      _DAT_009671e4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009671e8,"TriggerEngines");
      _DAT_009671f4 = 1;
      _DAT_009671f8 = 0x78;
      _DAT_009671fc = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967200,"bool");
      _DAT_0096720c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967210,"EngineDelay_s");
      _DAT_0096721c = 4;
      _DAT_00967220 = 0x80;
      _DAT_00967224 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967228,"double");
      _DAT_00967234 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967238,"TriggerPayloads");
      _DAT_00967244 = 1;
      _DAT_00967248 = 0x88;
      _DAT_0096724c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967250,"bool");
      _DAT_0096725c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967260,"PayloadDelay_s");
      _DAT_0096726c = 4;
      _DAT_00967270 = 0x90;
      _DAT_00967274 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967278,"double");
      _DAT_00967284 = 0;
      atexit( private__static_int_const___cdecl_FuseModule__ReflectionInfoStruct_class_FuseModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_21f0c3b4__thread_safe_static_guard_0__);
    }
  }
  return 9;
}





//==== 00599220 StaticGetMemberCount_00599220 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl HomingPhase__ReflectionInfoStruct_class_HomingPhase___StaticGetMemberCount(void) */

int __cdecl HomingPhase__ReflectionInfoStruct_class_HomingPhase___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_4e46dd0e__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_4e46dd0e__thread_safe_static_guard_0__);
    if ( cde_l2_4e46dd0e__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_a77d235d_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_009677ec = 0;
      _DAT_009677f0 = 0;
      _DAT_009677f4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009677f8,"Unused");
      _DAT_00967804 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967808,"GuidanceLaw");
      _DAT_00967814 = 9;
      _DAT_00967818 = 0x10;
      _DAT_0096781c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967820,"GuidanceAlgorithm");
      _DAT_0096782c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967830,"Accelerate");
      _DAT_0096783c = 1;
      _DAT_00967840 = 0x14;
      _DAT_00967844 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967848,"bool");
      _DAT_00967854 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967858,"DampingEngineMultiplier");
      _DAT_00967864 = 4;
      _DAT_00967868 = 0x18;
      _DAT_0096786c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967870,"double");
      _DAT_0096787c = 0;
      atexit( private__static_int_const___cdecl_HomingPhase__ReflectionInfoStruct_class_HomingPhase___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_4e46dd0e__thread_safe_static_guard_0__);
    }
  }
  return 4;
}





//==== 00599390 StaticGetMemberCount_00599390 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl HomingProperties__ReflectionInfoStruct_class_HomingProperties___StaticGetMemberCount(void) */

int __cdecl
HomingProperties__ReflectionInfoStruct_class_HomingProperties___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_05f4369b__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_05f4369b__thread_safe_static_guard_0__);
    if ( cde_l2_05f4369b__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_1107da81_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_009675fc = 0;
      _DAT_00967600 = 0;
      _DAT_00967604 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967608,"Unused");
      _DAT_00967614 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967618,"PropellantForBoostPhase_Percent");
      _DAT_00967624 = 4;
      _DAT_00967628 = 0x10;
      _DAT_0096762c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967630,"double");
      _DAT_0096763c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967640,"BoostPhase");
      _DAT_0096764c = 10;
      _DAT_00967650 = 0x18;
      _DAT_00967654 = 0x20;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967658,"HomingPhase");
      _DAT_00967664 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967668,"MidcoursePhase");
      _DAT_00967674 = 10;
      _DAT_00967678 = 0x38;
      _DAT_0096767c = 0x20;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967680,"HomingPhase");
      _DAT_0096768c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967690,"TerminalPhase");
      _DAT_0096769c = 10;
      _DAT_009676a0 = 0x58;
      _DAT_009676a4 = 0x20;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009676a8,"HomingPhase");
      _DAT_009676b4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009676b8,"IrradianceCutoff_Percent");
      _DAT_009676c4 = 4;
      _DAT_009676c8 = 0x78;
      _DAT_009676cc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009676d0,"double");
      _DAT_009676dc = 0;
      atexit( private__static_int_const___cdecl_HomingProperties__ReflectionInfoStruct_class_HomingProperties___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_05f4369b__thread_safe_static_guard_0__);
    }
  }
  return 6;
}





//==== 00599590 StaticGetMemberCount_00599590 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl RemoteControlModule__ReflectionInfoStruct_class_RemoteControlModule___StaticGetMemberCount(void) */

int __cdecl
RemoteControlModule__ReflectionInfoStruct_class_RemoteControlModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_346d9e59__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_346d9e59__thread_safe_static_guard_0__);
    if ( cde_l2_346d9e59__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_7bbd5456_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096740c = 0;
      _DAT_00967410 = 0;
      _DAT_00967414 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967418,"Unused");
      _DAT_00967424 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967428,"SteamWorkshopID");
      _DAT_00967434 = 6;
      _DAT_00967438 = 0x10;
      _DAT_0096743c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967440,"AStr");
      _DAT_0096744c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967450,"Description");
      _DAT_0096745c = 6;
      _DAT_00967460 = 0x20;
      _DAT_00967464 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967468,"AStr");
      _DAT_00967474 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967478,"UsesCustomName");
      _DAT_00967484 = 1;
      _DAT_00967488 = 0x68;
      _DAT_0096748c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967490,"bool");
      _DAT_0096749c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009674a0,"AspectRatio");
      _DAT_009674ac = 4;
      _DAT_009674b0 = 0x70;
      _DAT_009674b4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009674b8,"double");
      _DAT_009674c4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009674c8,"HomingBehavior");
      _DAT_009674d4 = 10;
      _DAT_009674d8 = 0x78;
      _DAT_009674dc = 0x80;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009674e0,"HomingProperties");
      _DAT_009674ec = 0;
      atexit( private__static_int_const___cdecl_RemoteControlModule__ReflectionInfoStruct_class_RemoteControlModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_346d9e59__thread_safe_static_guard_0__);
    }
  }
  return 6;
}





//==== 00599790 StaticGetReflectionInfo_00599790 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct FuseModule__ReflectionInfoStruct_L_classFuseModule_G_ * __cdecl
   FuseModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_FuseModule_G_ * __cdecl FuseModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_3fb114c6__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_3fb114c6__thread_safe_static_guard_0__);
    if ( cde_l2_3fb114c6__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_33f933fc_ReflectionInfo) = &vftable_165;
      _Init_thread_footer(& cde_l2_3fb114c6__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoStruct_L_class_FuseModule_G_ * *)&cde_l2_33f933fc_ReflectionInfo;
}





//==== 005997f0 StaticGetReflectionInfo_005997f0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct HomingPhase__ReflectionInfoStruct_L_classHomingPhase_G_ * __cdecl
   HomingPhase__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_HomingPhase_G_ * __cdecl HomingPhase__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_ab8f5560__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_ab8f5560__thread_safe_static_guard_0__);
    if ( cde_l2_ab8f5560__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_d8efdbb5_ReflectionInfo) = &vftable_161;
      _Init_thread_footer(& cde_l2_ab8f5560__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoStruct_L_class_HomingPhase_G_ * *)&cde_l2_d8efdbb5_ReflectionInfo;
}





//==== 00599850 StaticGetReflectionInfo_00599850 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct HomingProperties__ReflectionInfoStruct_L_classHomingProperties_G_ * __cdecl
   HomingProperties__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_HomingProperties_G_ * __cdecl
HomingProperties__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_e304a245__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_e304a245__thread_safe_static_guard_0__);
    if ( cde_l2_e304a245__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_d36338ef_ReflectionInfo) = &vftable_163;
      _Init_thread_footer(& cde_l2_e304a245__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoStruct_L_class_HomingProperties_G_ * *)&cde_l2_d36338ef_ReflectionInfo;
}





//==== 005998b0 StaticGetReflectionInfo_005998b0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct RemoteControlModule__ReflectionInfoStruct_L_classRemoteControlModule_G_ *
   __cdecl RemoteControlModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_RemoteControlModule_G_ * __cdecl
RemoteControlModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_819c7f21__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_819c7f21__thread_safe_static_guard_0__);
    if ( cde_l2_819c7f21__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_27442561_ReflectionInfo) = &vftable_164;
      _Init_thread_footer(& cde_l2_819c7f21__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoStruct_L_class_RemoteControlModule_G_ * *)&cde_l2_27442561_ReflectionInfo;
}





//==== 00599910 Tick_00599910 ====


/* public: virtual void __thiscall FuseCompartment__Tick(double) */

void __thiscall FuseCompartment__Tick(FuseCompartment *this,double param_1)

{
  *(double *)(this + 0x110) = param_1 + *(double *)(this + 0x110);
  return;
}





//==== 00599930 GetClassID_00599930 ====


/* public: virtual unsigned long __thiscall CrewModule__GetClassID(void)const  */

ulong __thiscall CrewModule__GetClassID(CrewModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_5d9f7d8c__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_5d9f7d8c__thread_safe_static_guard_0__);
    if ( cde_l2_5d9f7d8c__thread_safe_static_guard_0__ == -1) {
       cde_l2_df3c7a20_ID =
           util__GetHash("CrewModule");
      _Init_thread_footer(& cde_l2_5d9f7d8c__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_df3c7a20_ID;
}





//==== 00599990 GetGeneratedName_00599990 ====

/* public: virtual class util__Str_L_char_G_ __thiscall CrewModule__GetGeneratedName(void)const  */

Str_L_char_G_ * __thiscall
CrewModule__GetGeneratedName(CrewModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  LocStr *pLVar1;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ *pSVar3;
  Str_L_char_G_ *this_00;
  Str_L_char_G_ *pSVar4;
  Str_L_char_G_ *__return_storage_ptr___00;
  void *local_7c [3];
  void *local_70;
  void *local_64 [3];
  void *local_58;
  Str_L_char_G_ local_4c;
  Str_L_char_G_ local_40;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char(&local_4c,"Command CrewModule");
  util__Str_char___Str_char(&local_28,"Space");
  local_1c.Data = (char *)0x0;
  local_1c.Capacity = 0;
  local_1c.Length = 0;
  local_10.Data = (char *)0x0;
  local_10.Capacity = 0;
  local_10.Length = 0;
  pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)local_7c,&local_4c,&local_1c);
  pSVar2 = util__LocStr__operator__o3(pLVar1);
  __return_storage_ptr___00 = __return_storage_ptr__;
  pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)local_64,&local_28,&local_10);
  pSVar3 = util__LocStr__operator__o3(pLVar1);
  pSVar4 = &local_34;
  this_00 = util__Printf(&local_40, (void *)("%i"),this[1]._pad_0x8_2);
  pSVar4 = util__Str_char___operator(this_00,pSVar4,pSVar3);
  util__Str_char___operator(pSVar4,__return_storage_ptr___00,pSVar2);
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_40.Data != (char *)0x0) {
    port_op_delete(local_40.Data);
    local_40.Data = (char *)0x0;
  }
  if (local_58 != (void *)0x0) {
    port_op_delete(local_58);
    local_58 = (void *)0x0;
  }
  if (local_64[0] != (void *)0x0) {
    port_op_delete(local_64[0]);
    local_64[0] = (void *)0x0;
  }
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
    local_10.Data = (char *)0x0;
  }
  if (local_70 != (void *)0x0) {
    port_op_delete(local_70);
    local_70 = (void *)0x0;
  }
  if (local_7c[0] != (void *)0x0) {
    port_op_delete(local_7c[0]);
    local_7c[0] = (void *)0x0;
  }
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
    local_1c.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_4c.Data != (char *)0x0) {
    port_op_delete(local_4c.Data);
  }
  return __return_storage_ptr__;
}

//==== 00599b30 GetIcon_00599b30 ====


/* public: virtual void (__cdecl*__thiscall CrewModule__GetIcon(void)const )(void) */

_func_void * __thiscall CrewModule__GetIcon(CrewModule *this)

{
  return Icons__OutOfCrew;
}





//==== 00599c30 GetComposition_00599c30 ====

/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   CrewModule__GetComposition(void)const  */

Darray_L_MaterialComposition_G_ * __thiscall
CrewModule__GetComposition(CrewModule *this,Darray_L_MaterialComposition_G_ *__return_storage_ptr__)

{
  MaterialComposition *pMVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  Material *pMVar7;
  int iVar8;
  Darray_L_MaterialComposition_G_ *this_00;
  bool bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uStack_40;
  undefined4 uStack_20;
  double local_c;
  
  this_00 = __return_storage_ptr__;
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (MaterialComposition *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  Module__GetComposition((Module *)this,__return_storage_ptr__);
  pMVar7 = Oxygen;
  dVar10 = Physics__DefaultShipOperationalTime_s / 86400.0;
  iVar5 = this_00->Size;
  __return_storage_ptr__ = (Darray_L_MaterialComposition_G_ *)(iVar5 + 1);
  iVar6 = this[1]._pad_0x8_2;
  util__Darray_L_MaterialConstituent_G___SetSize
            ((Darray_L_MaterialConstituent_G_ *)this_00,(int *)&__return_storage_ptr__);
  bVar9 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                    ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar5);
  if (bVar9) {
    pMVar1 = this_00->Data + this_00->Size + -1;
    pMVar1->Type = pMVar7;
    (undefined4)((*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar1) + 0x4)) = uStack_40);
    pMVar1->Mass_kg = (double)iVar6 * 0.89 * dVar10;
  }
  pMVar7 = Nitrogen;
  iVar5 = this[1]._pad_0x8_2;
  iVar6 = this_00->Size;
  __return_storage_ptr__ = (Darray_L_MaterialComposition_G_ *)(iVar6 + 1);
  util__Darray_L_MaterialConstituent_G___SetSize
            ((Darray_L_MaterialConstituent_G_ *)this_00,(int *)&__return_storage_ptr__);
  bVar9 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                    ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar6);
  if (bVar9) {
    pMVar1 = this_00->Data + this_00->Size + -1;
    pMVar1->Type = pMVar7;
    (undefined4)((*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar1) + 0x4)) = uStack_40);
    pMVar1->Mass_kg = ((double)iVar5 * 0.83) / 0.79;
  }
  pMVar7 = Water;
  iVar5 = this[1]._pad_0x8_2;
  iVar6 = this_00->Size;
  __return_storage_ptr__ = (Darray_L_MaterialComposition_G_ *)(iVar6 + 1);
  util__Darray_L_MaterialConstituent_G___SetSize
            ((Darray_L_MaterialConstituent_G_ *)this_00,(int *)&__return_storage_ptr__);
  bVar9 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                    ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar6);
  if (bVar9) {
    pMVar1 = this_00->Data + this_00->Size + -1;
    pMVar1->Type = pMVar7;
    (undefined4)((*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar1) + 0x4)) = uStack_40);
    pMVar1->Mass_kg = (double)iVar5 * 29.95;
  }
  pMVar7 = Food;
  dVar10 = Physics__DefaultShipOperationalTime_s / 86400.0;
  iVar5 = this_00->Size;
  __return_storage_ptr__ = (Darray_L_MaterialComposition_G_ *)(iVar5 + 1);
  iVar6 = this[1]._pad_0x8_2;
  util__Darray_L_MaterialConstituent_G___SetSize
            ((Darray_L_MaterialConstituent_G_ *)this_00,(int *)&__return_storage_ptr__);
  bVar9 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                    ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar5);
  if (bVar9) {
    pMVar1 = this_00->Data + this_00->Size + -1;
    pMVar1->Type = pMVar7;
    (undefined4)((*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar1) + 0x4)) = uStack_40);
    pMVar1->Mass_kg = (double)iVar6 * 0.62 * dVar10;
  }
  dVar10 = GetDeckRadius_m(this);
  local_c = dVar10 * 3.141592653589793 * dVar10 * 0.25;
  dVar12 = util__Ceil(&local_c);
  iVar5 = this[1]._pad_0xc_3;
  dVar10 = *(double *)(this[1]._pad_0x10_4 + 0x30);
  dVar13 = GetDeckRadius_m(this);
  dVar14 = GetDeckThickness_m(this);
  dVar2 = *(double *)(this[1]._pad_0x10_4 + 0x30);
  dVar3 = *(double *)&this[1]._pad_0x18_6;
  iVar6 = this[1]._pad_0xc_3;
  dVar15 = GetDeckThickness_m(this);
  dVar16 = GetDeckRadius_m(this);
  pMVar7 = (Material *)this[1]._pad_0x10_4;
  iVar8 = this_00->Size;
  dVar11 = dVar16 * 3.141592653589793 * dVar16;
  dVar4 = pMVar7->Density_kg__m3;
  __return_storage_ptr__ = (Darray_L_MaterialComposition_G_ *)(iVar8 + 1);
  util__Darray_L_MaterialConstituent_G___SetSize
            ((Darray_L_MaterialConstituent_G_ *)this_00,(int *)&__return_storage_ptr__);
  bVar9 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                    ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar8);
  if (bVar9) {
    pMVar1 = this_00->Data + this_00->Size + -1;
    pMVar1->Type = pMVar7;
    (undefined4)((*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar1) + 0x4)) = uStack_20);
    pMVar1->Mass_kg =
         (dVar16 * 6.283185307179586 * (dVar15 + 2.25) * (double)iVar6 + dVar11 + dVar11) * dVar3 *
         dVar4 + dVar2 * dVar14 * dVar13 * 3.141592653589793 * dVar13 +
                 (double)iVar5 * 0.011309733552923255 * (double)(int)dVar12 * dVar10;
  }
  pMVar7 = g_Human;
  iVar5 = this[1]._pad_0x8_2;
  iVar6 = this_00->Size;
  __return_storage_ptr__ = (Darray_L_MaterialComposition_G_ *)(iVar6 + 1);
  util__Darray_L_MaterialConstituent_G___SetSize
            ((Darray_L_MaterialConstituent_G_ *)this_00,(int *)&__return_storage_ptr__);
  bVar9 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                    ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar6);
  if (bVar9) {
    pMVar1 = this_00->Data + this_00->Size + -1;
    pMVar1->Type = pMVar7;
    (undefined4)((*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar1) + 0x4)) = uStack_40);
    pMVar1->Mass_kg = (double)iVar5 * 60.0 * 0.97;
  }
  pMVar7 = Material__DefaultMaterial;
  iVar5 = this[1]._pad_0x8_2;
  iVar6 = this_00->Size;
  __return_storage_ptr__ = (Darray_L_MaterialComposition_G_ *)(iVar6 + 1);
  util__Darray_L_MaterialConstituent_G___SetSize
            ((Darray_L_MaterialConstituent_G_ *)this_00,(int *)&__return_storage_ptr__);
  bVar9 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                    ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar6);
  if (bVar9) {
    pMVar1 = this_00->Data + this_00->Size + -1;
    pMVar1->Type = pMVar7;
    (undefined4)((*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar1) + 0x4)) = uStack_40);
    pMVar1->Mass_kg = (double)(iVar5 * 800) + (double)(iVar5 * 400) + (double)(iVar5 * 1000);
  }
  return this_00;
}

//==== 0059a010 GetPowerUsage ====

/* public: virtual class util__Darray_L_structPowerUsage_G_ __thiscall
   CrewModule__GetPowerUsage(void)const  */

Darray_L_PowerUsage_G_ * __thiscall
CrewModule__GetPowerUsage(CrewModule *this,Darray_L_PowerUsage_G_ *__return_storage_ptr__)

{
  int iVar1;
  PowerUsage *pPVar2;
  Darray_L_PowerUsage_G_ *this_00;
  bool bVar3;
  LocStr *this_01;
  Str_L_char_G_ *pSVar4;
  double dVar5;
  Str_L_char_G_ local_68;
  double local_58;
  void *local_50 [3];
  void *local_44;
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  double local_14;
  double local_c;
  
  this_00 = __return_storage_ptr__;
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (PowerUsage *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  Module__GetPowerUsage((Module *)this,__return_storage_ptr__);
  util__Str_char___Str_char(&local_38,"PowerUse CrewQuarters");
  local_c = GetDeckRadius_m(this);
  *(uint32_t *)&local_14 = (local_c * 3.141592653589793 * local_c) / 9.0;
  dVar5 = util__Floor(&local_14);
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  local_20.Length = 0;
  local_c = (double)this[1]._pad_0x8_2 * 271.1 + dVar5 * (double)this[1]._pad_0xc_3 * 33.0;
  this_01 = (LocStr *)util__LocStr__LocStr((LocStr *)local_50,&local_38,&local_20);
  pSVar4 = util__LocStr__operator__o3(this_01);
  util__Str_char___Str_char(&local_2c,pSVar4);
  util__Str_char___Str_char(&local_68,&local_2c);
  local_58 = local_c;
  if (local_2c.Data != (char *)0x0) {
    port_op_delete(local_2c.Data);
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
    util__Str_char___operator__o8(&pPVar2[iVar1 + -1].Label,&local_68);
    pPVar2[iVar1 + -1].PowerUsed_W = local_c;
  }
  if (local_68.Data != (char *)0x0) {
    port_op_delete(local_68.Data);
  }
  if (local_44 != (void *)0x0) {
    port_op_delete(local_44);
    local_44 = (void *)0x0;
  }
  if (local_50[0] != (void *)0x0) {
    port_op_delete(local_50[0]);
    local_50[0] = (void *)0x0;
  }
  if (local_20.Data != (char *)0x0) {
    port_op_delete(local_20.Data);
    local_20.Data = (char *)0x0;
  }
  if (local_38.Data != (char *)0x0) {
    port_op_delete(local_38.Data);
  }
  return this_00;
}

//==== 0059a1b0 GetHullRadius_m_0059a1b0 ====

/* public: virtual double __thiscall CrewModule__GetHullRadius_m(void)const  */

double __thiscall CrewModule__GetHullRadius_m(CrewModule *this)

{
  double dVar1;
  
  dVar1 = GetDeckRadius_m(this);
  return dVar1 + *(double *)&this[1]._pad_0x18_6;
}

//==== 0059a1c0 GetHullLength_m_0059a1c0 ====

/* public: virtual double __thiscall CrewModule__GetHullLength_m(void)const  */

double __thiscall CrewModule__GetHullLength_m(CrewModule *this)

{
  double dVar1;
  
  dVar1 = GetDeckThickness_m(this);
  return *(double *)&this[1]._pad_0x18_6 + *(double *)&this[1]._pad_0x18_6 +
         (double)this[1]._pad_0xc_3 * (dVar1 + 2.25);
}

//==== 0059a230 GetCrewRequired_0059a230 ====


/* public: virtual class util__Darray_L_structCrewJob_G_ __thiscall
   CrewModule__GetCrewRequired(void)const  */

Darray_L_struct_CrewJob_G_ * __thiscall CrewModule__GetCrewRequired(CrewModule *this)

{
  LocStr *pLVar1;
  Str_L_char_G_ *pSVar2;
  Darray_L_struct_CrewJob_G_ *in_stack_00000004;
  CrewJob CStack_60;
  void *apvStack_40 [3];
  void *pvStack_34;
  Str_L_char_G_ SStack_28;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = &vftable_120;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Str_char___Str_char(&SStack_28,"CrewWasteWaterTechnician");
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_40,&SStack_28,&SStack_10);
  pSVar2 = util__LocStr__operator__o3(pLVar1);
  util__Str_char___Str_char(&SStack_1c,pSVar2);
  CStack_60.Dept = CrewDepartment__Operations;
  util__Str_char___Str_char(&CStack_60.Name,&SStack_1c);
  CStack_60.CrewRequired = 1.0;
  CStack_60.WatchRequired = false;
  if (SStack_1c.Data != (char *)0x0) {
    port_op_delete(SStack_1c.Data);
  }
  util__Darray_struct_CrewJob___Add(in_stack_00000004,&CStack_60);
  if (CStack_60.Name.Data != (char *)0x0) {
    port_op_delete(CStack_60.Name.Data);
  }
  if (pvStack_34 != (void *)0x0) {
    port_op_delete(pvStack_34);
    pvStack_34 = (void *)0x0;
  }
  if (apvStack_40[0] != (void *)0x0) {
    port_op_delete(apvStack_40[0]);
    apvStack_40[0] = (void *)0x0;
  }
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
    SStack_10.Data = (char *)0x0;
  }
  if (SStack_28.Data != (char *)0x0) {
    port_op_delete(SStack_28.Data);
  }
  util__Str_char___Str_char(&SStack_1c,"CrewAirTechnician");
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_40,&SStack_1c,&SStack_10);
  pSVar2 = util__LocStr__operator__o3(pLVar1);
  util__Str_char___Str_char(&SStack_28,pSVar2);
  CStack_60.Dept = CrewDepartment__Operations;
  util__Str_char___Str_char(&CStack_60.Name,&SStack_28);
  CStack_60.CrewRequired = 1.0;
  CStack_60.WatchRequired = false;
  if (SStack_28.Data != (char *)0x0) {
    port_op_delete(SStack_28.Data);
  }
  util__Darray_struct_CrewJob___Add(in_stack_00000004,&CStack_60);
  if (CStack_60.Name.Data != (char *)0x0) {
    port_op_delete(CStack_60.Name.Data);
  }
  if (pvStack_34 != (void *)0x0) {
    port_op_delete(pvStack_34);
    pvStack_34 = (void *)0x0;
  }
  if (apvStack_40[0] != (void *)0x0) {
    port_op_delete(apvStack_40[0]);
    apvStack_40[0] = (void *)0x0;
  }
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
    SStack_10.Data = (char *)0x0;
  }
  if (SStack_1c.Data != (char *)0x0) {
    port_op_delete(SStack_1c.Data);
  }
  return in_stack_00000004;
}





//==== 0059a430 GetStructuralMaterial_0059a430 ====

/* public: virtual class Material const * __thiscall
   RadiationShieldModule__GetStructuralMaterial(void)const  */

Material * __thiscall RadiationShieldModule__GetStructuralMaterial(RadiationShieldModule *this)

{
  return (Material *)this[1]._pad_0x8_2;
}

//==== 0059a440 GetCoolantProperties_0059a440 ====

/* public: virtual class util__Maybe_L_structModuleCoolantProperties_G_ __thiscall
   CrewModule__GetCoolantProperties(void)const  */

Maybe_L_ModuleCoolantProperties_G_ * __thiscall
CrewModule__GetCoolantProperties
          (CrewModule *this,Maybe_L_ModuleCoolantProperties_G_ *__return_storage_ptr__)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double local_c;
  
  dVar4 = GetDeckRadius_m(this);
  local_c = (dVar4 * 3.141592653589793 * dVar4) / 9.0;
  dVar5 = util__Floor(&local_c);
  iVar1 = this[1]._pad_0xc_3;
  dVar4 = g_Coolant->Density_kg__m3;
  dVar2 = (double)this[1]._pad_0x8_2;
  (__return_storage_ptr__->Data).Coolant = g_Coolant;
  dVar3 = dVar2 * 2.40039 * 0.01;
  (__return_storage_ptr__->Data).PeakTemperature_K = 293.15;
  (__return_storage_ptr__->Data).Volume_m3 = dVar3;
  (__return_storage_ptr__->Data).HeatTransferRate_W =
       dVar2 * 271.1 + dVar5 * (double)iVar1 * 33.0 + dVar2 * 73.0324074074074;
  (__return_storage_ptr__->Data).MassFlowRate_kg__s = dVar4 * dVar3 * 10.0;
  __return_storage_ptr__->IsValidData = true;
  return __return_storage_ptr__;
}

//==== 0059a540 GetRadiationShielding_0059a540 ====

/* public: virtual struct util__tuple2_L_classMaterial_P_Cstructutil__Cylinder_L_double_G__G_ __thiscall
   CrewModule__GetRadiationShielding(void)const  */

void __thiscall CrewModule__GetRadiationShielding(CrewModule *this)

{
  double dVar1;
  float10 fVar2;
  int *in_stack_00000004;
  
  dVar1 = *(double *)&this[1]._pad_0x18_6;
  fVar2 = (float10)(**(code **)(this->_pad_0x0_0 + 0xa4))();
  *in_stack_00000004 = this[1]._pad_0x10_4;
  *(double *)(in_stack_00000004 + 2) = (double)fVar2;
  *(double *)(in_stack_00000004 + 4) = dVar1 + dVar1;
  return;
}

//==== 0059a590 InnerSortFunction ====


/* public: virtual bool __thiscall CrewModule__InnerSortFunction(class Module const *,class Module
   const *)const  */

bool __thiscall CrewModule__InnerSortFunction(CrewModule *this,Module *param_1,Module *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = param_1[1].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity;
  iVar1 = param_2[1].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity;
  if (iVar2 == iVar1) {
    bVar3 = Module__InnerSortFunction((Module *)this,param_1,param_2);
  }
  return iVar2 < iVar1;
}





//==== 0059a5c0 StaticGetPropertyGetters_0059a5c0 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cdouble___thiscall_util__Reflectable___P__void_const_G__G_ __thiscall CrewModule__StaticGetPropertyGetters(void)const
    */

void __thiscall CrewModule__StaticGetPropertyGetters(CrewModule *this)

{
  undefined8 stack0xfffffffc;
  int *piVar1;
  Str_L_char_G_ *pSVar2;
  bool bVar3;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__G___G_
  *pDVar4;
  Str_L_char_G_ *pSVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  Str_L_char_G_ *pSVar11;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cvoid____cdecl_P__void__G___G_ *in_stack_00000004;
  int iVar12;
  Maybe_L_int_G_ *pMVar13;
  Str_L_char_G_ SStack_4c;
  Str_L_char_G_ SStack_40;
  Str_L_char_G_ SStack_34;
  code *pcStack_28;
  undefined1 auStack_24 [8];
  int iStack_1c;
  undefined4 uStack_18;
  undefined1 auStack_14 [8];
  CrewModule *pCStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pCStack_c = this;
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_009681fc) &&
     (_Init_thread_header(&DAT_009681fc), DAT_009681fc == -1)) {
    puVar8 = (undefined4 *)port_op_new(0xa4);
    if (puVar8 == (undefined4 *)0x0) {
      DAT_0095f350 = (undefined4)(uintptr_t)((Str_L_char_G_ *)0x0);
    }
    else {
      DAT_0095f350 = (undefined4)(uintptr_t)((Str_L_char_G_ *)(puVar8 + 1));
      *puVar8 = 10;
      iVar12 = 10;
      pSVar11 = (Str_L_char_G_ *)(uintptr_t)(DAT_0095f350);
      do {
        pSVar11->Data = (char *)0x0;
        pSVar11->Capacity = 0;
        pSVar11->Length = 0;
        pSVar11[1].Data = (char *)0x0;
        iVar12 = iVar12 + -1;
        pSVar11 = (Str_L_char_G_ *)&pSVar11[1].Capacity;
      } while (iVar12 != 0);
    }
    iVar12 = 0;
    if (0 < DAT_0095f358) {
      (*(uint32_t*)&(auStack_24)) = (uint32_t)(uintptr_t)((char *)0x0);
      iVar6 = 0;
      (*(uint32_t*)((char*)&(auStack_24)+4)) = (uint32_t)(uintptr_t)((void *)0x0);
      iStack_1c = 0;
      uStack_18 = 0;
      do {
        pSVar11 = (Str_L_char_G_ *)((int)(int)(uintptr_t)(DAT_0095f350) + iVar6);
        util__Str_char___operator__o8(pSVar11,(Str_L_char_G_ *)auStack_24);
        iVar12 = iVar12 + 1;
        pSVar11[1].Data = (char *)0x0;
        iVar6 = iVar6 + 0x10;
      } while (iVar12 < DAT_0095f358);
    }
    atexit(FUN_008ec810);
    _Init_thread_footer(&DAT_009681fc);
  }
  if (DAT_0095f354 == 0) {
    pDVar4 = (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__G___G_
              *)Module__StaticGetPropertyGetters((Module *)pCStack_c);
    util__Darray_struct_util__tuple2_class_util__Str_char__double____thiscall_util__Reflectable_____void_const______operator((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__G___G_
                 *)&PTR__vftable__0095f34c,pDVar4);
    util__Darray_struct_util__tuple2_class_util__Str_char__double____thiscall_util__Reflectable_____void_const_______Darray_struct_util__tuple2_class_util__Str_char__double____thiscall_util__Reflectable_____void_const((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__G___G_
                *)&SStack_34);
    pMVar13 = (Maybe_L_int_G_ *)(auStack_14 + 4);
    (*(uint32_t*)((char*)&(auStack_14)+4)) = 0;
    iVar12 = 3;
    pSVar11 = &SStack_4c;
    pCStack_c = (CrewModule *)((uint)pCStack_c & 0xffffff00);
    pSVar5 = (Str_L_char_G_ *)util__Str_char___Str_char((Str_L_char_G_ *)(auStack_24 + 4),"GetCrewAdded");
    util__Str_char___SubStr(pSVar5,pSVar11,iVar12,pMVar13);
    util__Str_char___Str_char(&SStack_40,&SStack_4c);
    util__Str_char___Str_char((Str_L_char_G_ *)auStack_14,&SStack_40);
    util__Str_char___Str_char(&SStack_34,(Str_L_char_G_ *)auStack_14);
    pcStack_28 = (long long int (*)())(GetCrewAdded);
    if ((char *)(*(uint32_t*)&(auStack_14)) != (char *)0x0) {
      port_op_delete((void *)(*(uint32_t*)&(auStack_14)));
    }
    if (SStack_40.Data != (char *)0x0) {
      port_op_delete(SStack_40.Data);
    }
    iVar6 = (**(code **)(uintptr_t)(PTR__vftable__0095f34c + 0xc))();
    iVar12 = DAT_0095f354;
    if (-1 < iVar6) {
      pCStack_c = (CrewModule *)(DAT_0095f354 + 1);
      util__Darray_struct_util__tuple2_class_util__Str_char__void____cdecl___void______SetSize
                ((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cvoid____cdecl_P__void__G___G_ *)
                 &PTR__vftable__0095f34c,(int *)&pCStack_c);
      bVar3 = util__Darray_struct_util__tuple2_class_util__Str_char__double____thiscall_util__Reflectable_____void_const______CheckSize((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__G___G_
                           *)&PTR__vftable__0095f34c,iVar12);
      if ((bVar3) &&
         (pSVar11 = (Str_L_char_G_ *)((int)DAT_0095f350 + DAT_0095f354 * 0x10 + -0x10),
         DAT_0095f350 <= pSVar11)) {
        do {
          if (iVar12 == 0) {
            util__Str_char___operator__o8(pSVar11,&SStack_34);
            pSVar11[1].Data = (char *)GetCrewAdded;
            break;
          }
          piVar1 = &pSVar11[-2].Length;
          util__Str_char___operator__o8(pSVar11,(Str_L_char_G_ *)piVar1);
          iVar12 = iVar12 + -1;
          pSVar11[1].Data = (char *)pSVar11[-1].Length;
          pSVar11 = (Str_L_char_G_ *)piVar1;
        } while (DAT_0095f350 <= piVar1);
      }
    }
    if (SStack_34.Data != (char *)0x0) {
      port_op_delete(SStack_34.Data);
    }
    if (SStack_4c.Data != (char *)0x0) {
      port_op_delete(SStack_4c.Data);
    }
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
  }
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = (undefined **)(&PTR_vftable_0095f33c);
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(int *)(in_stack_00000004 + 0xc) = DAT_0095f358;
  pCStack_c = (CrewModule *)(**(code **)(uintptr_t)(PTR__vftable__0095f34c + 0xc))();
  util__Darray_struct_util__tuple2_class_util__Str_char__void____cdecl___void______SetSize
            (in_stack_00000004,(int *)&pCStack_c);
  uVar10 = *(uint *)(in_stack_00000004 + 0xc);
  uVar9 = -(uint)((int)((ulonglong)uVar10 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar10 * 0x10);
  puVar7 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar9) | uVar9 + 4);
  if (puVar7 == (uint *)0x0) {
    pSVar11 = (Str_L_char_G_ *)0x0;
  }
  else {
    *puVar7 = uVar10;
    pSVar11 = (Str_L_char_G_ *)(puVar7 + 1);
    pSVar5 = pSVar11;
    for (; uVar10 != 0; uVar10 = uVar10 - 1) {
      pSVar5->Data = (char *)0x0;
      pSVar5->Capacity = 0;
      pSVar5->Length = 0;
      pSVar5[1].Data = (char *)0x0;
      pSVar5 = (Str_L_char_G_ *)&pSVar5[1].Capacity;
    }
  }
  *(Str_L_char_G_ **)(in_stack_00000004 + 4) = pSVar11;
  pSVar5 = (Str_L_char_G_ *)(uintptr_t)(DAT_0095f350);
  if (DAT_0095f350 != (Str_L_char_G_ *)(DAT_0095f354 * 0x10 + (int)DAT_0095f350)) {
    do {
      util__Str_char___operator__o8(pSVar11,pSVar5);
      pSVar2 = pSVar5 + 1;
      pSVar5 = (Str_L_char_G_ *)&pSVar5[1].Capacity;
      pSVar11[1].Data = pSVar2->Data;
      pSVar11 = (Str_L_char_G_ *)&pSVar11[1].Capacity;
    } while (pSVar5 != (Str_L_char_G_ *)(DAT_0095f354 * 0x10 + (int)DAT_0095f350));
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0059abb0 GetIntegerPropertyBoundaries ====

/* public: virtual class util__Maybe_L_structutil__Range_L_int_G__G_ __thiscall
   CrewModule__GetIntegerPropertyBoundaries(struct util__ClassMember const &)const  */

Maybe_L_util__Range_L_int_G___G_ * __thiscall
CrewModule__GetIntegerPropertyBoundaries
          (CrewModule *this,Maybe_L_util__Range_L_int_G___G_ *__return_storage_ptr__,ClassMember *param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  if ((param_1->Name).Capacity < 1) {
    pcVar4 = "";
  }
  else {
    pcVar4 = (param_1->Name).Data;
  }
  for (pcVar1 = "Decks"; (pcVar1[(int)(pcVar4 + -0x9252f4)] != '\0' || (*pcVar1 != '\0'));
      pcVar1 = pcVar1 + 1) {
    if (pcVar1[(int)(pcVar4 + -0x9252f4)] != *pcVar1) {
      (__return_storage_ptr__->Data).Lower = 0;
      (__return_storage_ptr__->Data).Upper = 0;
      __return_storage_ptr__->IsValidData = false;
      return __return_storage_ptr__;
    }
  }
  iVar2 = this[1]._pad_0x8_2 + 2;
  if (iVar2 < 0x96) {
    iVar2 = iVar2 / 3;
  }
  else {
    iVar2 = 0x32;
  }
  iVar3 = iVar2;
  iVar5 = 1;
  if (iVar2 < 1) {
    iVar3 = 1;
    iVar5 = iVar2;
  }
  (__return_storage_ptr__->Data).Lower = iVar5;
  (__return_storage_ptr__->Data).Upper = iVar3;
  __return_storage_ptr__->IsValidData = true;
  return __return_storage_ptr__;
}

//==== 0059ac50 GetPointerPropertyChoices_0059ac50 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   CrewModule__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

ClassMember * 
CrewModule__GetPointerPropertyChoices
          (CrewModule *this,ClassMember *param_1,SerializationManagerInterface *param_2)

{
  char *pcVar1;
  SerializationManagerInterface SVar2;
  int in_stack_0000000c;
  undefined1 uVar3;
  
  if ((*(int *)&(param_2[1])) < 1) {
    SVar2 = (*(SerializationManagerInterface *)
            &cde_l2_0b2b1c9f_NullString);
  }
  else {
    SVar2 = *param_2;
  }
  for (pcVar1 = "StructureMaterial";
      (pcVar1[(int)((*(int *)&(SVar2)) + -0x9252fc)] != '\0' || (*pcVar1 != '\0')); pcVar1 = pcVar1 + 1) {
    if (pcVar1[(int)((*(int *)&(SVar2)) + -0x9252fc)] != *pcVar1) {
      if ((*(int *)&(param_2[1])) < 1) {
        SVar2 = (*(SerializationManagerInterface *)
                &cde_l2_0b2b1c9f_NullString);
      }
      else {
        SVar2 = *param_2;
      }
      for (pcVar1 = "Coolant"; (pcVar1[(int)((*(int *)&(SVar2)) + -0x925310)] != '\0' || (*pcVar1 != '\0'));
          pcVar1 = pcVar1 + 1) {
        if (pcVar1[(int)((*(int *)&(SVar2)) + -0x925310)] != *pcVar1) {
          (param_1->Name).Data =
               (char *)&vftable_85;
          (param_1->Name).Capacity = 0;
          (param_1->Name).Length = 0;
          *(undefined4 *)&param_1->Type = 0;
          return param_1;
        }
      }
      uVar3 = 2;
LAB_0059ac8a:
      GetMaterials((DataParser *)param_1,in_stack_0000000c,(bool)uVar3);
      return param_1;
    }
  }
  uVar3 = false;
  goto LAB_0059ac8a;
}





//==== 0059ad00 GetReflectionInfo_0059ad00 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   CrewModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall CrewModule__GetReflectionInfo(CrewModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_57e04e9a__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_57e04e9a__thread_safe_static_guard_0__);
    if ( cde_l2_57e04e9a__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_011496d9_ReflectionInfo) = &vftable_174;
      _Init_thread_footer(& cde_l2_57e04e9a__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_011496d9_ReflectionInfo;
}





//==== 0059ad10 scalar_deleting_destructor_0059ad10 ====


/* public: virtual void * __thiscall CargoModule:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall CargoModule___scalar_deleting_destructor(CargoModule *this,uint param_1)

{
  Module___Module((Module *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x88);
  }
  return this;
}





//==== 0059ad40 GetTypeName_0059ad40 ====


/* public: virtual class util__Str_L_char_G_  CrewModule__ReflectionInfoStruct_class_CrewModule___GetTypeName(void)const  */

Str_L_char_G_ * 
CrewModule__ReflectionInfoStruct_class_CrewModule___GetTypeName
          (ReflectionInfoStruct_L_class_CrewModule_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"CrewModule");
  return __return_storage_ptr__;
}





//==== 0059ad60 GetMembers_0059ad60 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   CrewModule__ReflectionInfoStruct_class_CrewModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
CrewModule__ReflectionInfoStruct_class_CrewModule___GetMembers__o2
          (ReflectionInfoStruct_L_class_CrewModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_87ee4545__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_87ee4545__thread_safe_static_guard_0__),
      cde_l2_87ee4545__thread_safe_static_guard_0__ == -1)) {
     cde_l2_f069d062_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_87ee4545__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_f069d062_Count);
  iVar3 = 0;
  if (0 <  cde_l2_f069d062_Count) {
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
    } while (iVar3 <  cde_l2_f069d062_Count);
  }
  return in_stack_00000004;
}





//==== 0059aea0 GetMember_0059aea0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   CrewModule__ReflectionInfoStruct_class_CrewModule___GetMember(class util__Str_L_char_G_ const &)const
    */

Str_L_char_G_ * 
CrewModule__ReflectionInfoStruct_class_CrewModule___GetMember__o2
          (ReflectionInfoStruct_L_class_CrewModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_54760b25__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_54760b25__thread_safe_static_guard_0__),
      cde_l2_54760b25__thread_safe_static_guard_0__ == -1)) {
     cde_l2_81bdaf24_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_54760b25__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_81bdaf24_Count) {
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
LAB_0059af2d:
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
          if (cVar3 == '\0') goto LAB_0059af2d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_81bdaf24_Count);
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





//==== 0059b040 GetFactory_0059b040 ====


/* public: virtual class util__Reflectable * (__cdecl*
   CrewModule__ReflectionInfoStruct_class_CrewModule___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall CrewModule__ReflectionInfoStruct_class_CrewModule___GetFactory__o2
          (ReflectionInfoStruct_L_class_CrewModule_G_ *this)

{
  return StaticFactory;
}





//==== 0059b0d0 Darray_util__tuple5_void____cdecl___void__util__Str_char__util__Str_char__bool__util__Str_char_____ ====


/* public: virtual  Darray_L_struct_util__tuple5_L_void___cdecl_P__void__Cclassutil__Str_L_char_G__Cclassutil__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G__G__G___dtor(void) */

void 
util__Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__bool__class_util__Str_char________Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__bool__class_util__Str_char(Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G___G_
           *this)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar3 = *(int *)(this + 4);
  *(undefined ***)this = (undefined **)(&vftable_170);
  if (iVar3 != 0) {
    piVar1 = (int *)(iVar3 + -4);
    iVar5 = *piVar1;
    if (iVar5 != 0) {
      puVar4 = (undefined4 *)(iVar5 * 0x2c + 0x10 + iVar3);
      do {
        puVar2 = puVar4 + -0xb;
        iVar5 = iVar5 + -1;
        if ((void *)puVar4[-7] != (void *)0x0) {
          port_op_delete((void *)puVar4[-7]);
          puVar4[-7] = 0;
        }
        if ((void *)*puVar2 != (void *)0x0) {
          port_op_delete((void *)*puVar2);
          *puVar2 = 0;
        }
        if ((void *)puVar4[-0xe] != (void *)0x0) {
          port_op_delete((void *)puVar4[-0xe]);
          puVar4[-0xe] = 0;
        }
        puVar4 = puVar2;
      } while (iVar5 != 0);
      iVar5 = *piVar1;
    }
    port_op_delete(piVar1,iVar5 * 0x2c + 4);
  }
  *(undefined ***)this = (undefined **)(&vftable);
  *(undefined4 *)(this + 4) = 0;
  return;
}





//==== 0059b180 Darray_util__tuple5_void____cdecl___void__util__Str_char__util__Str_char__util__Delegate_void__util__Str_char_____ ====


/* public: virtual  Darray_L_structutil__tuple5_L_void___cdecl_P__void__Cclassutil__Str_L_char_G__Cclass_util__Str_L_char_G__Cclassutil__Delegate_L_void_G__Cclassutil__Str_L_char_G__G__G___dtor(void) */

void 
util__Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__class_util__Delegate_void__class_util__Str_char________Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__class_util__Delegate_void__class_util__Str_char(Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G___G_
           *this)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar3 = *(int *)(this + 4);
  *(undefined ***)this = &vftable_169;
  if (iVar3 != 0) {
    piVar1 = (int *)(iVar3 + -4);
    iVar5 = *piVar1;
    if (iVar5 != 0) {
      puVar4 = (undefined4 *)(iVar5 * 0x30 + 0x10 + iVar3);
      do {
        puVar2 = puVar4 + -0xc;
        iVar5 = iVar5 + -1;
        if ((void *)puVar4[-7] != (void *)0x0) {
          port_op_delete((void *)puVar4[-7]);
          puVar4[-7] = 0;
        }
        if ((void *)*puVar2 != (void *)0x0) {
          port_op_delete((void *)*puVar2);
          *puVar2 = 0;
        }
        if ((void *)puVar4[-0xf] != (void *)0x0) {
          port_op_delete((void *)puVar4[-0xf]);
          puVar4[-0xf] = 0;
        }
        puVar4 = puVar2;
      } while (iVar5 != 0);
      iVar5 = *piVar1;
    }
    port_op_delete(piVar1,iVar5 * 0x30 + 4);
  }
  *(undefined ***)this = (undefined **)(&vftable);
  *(undefined4 *)(this + 4) = 0;
  return;
}





//==== 0059b230 Darray_util__tuple6_void____cdecl___void__util__Str_char__util__Str_char__int__int_util__Str_char_____ ====


/* public: virtual  Darray_L_struct_util__tuple6_L_void___cdecl_P__void__Cclassutil__Str_L_char_G__Cclassutil__Str_L_char_G__Cint_P_Cint_Cclass_util__Str_L_char_G__G__G___dtor(void) */

void 
util__Darray_struct_util__tuple6_void____cdecl___void__class_util__Str_char__class_util__Str_char__int__int_class_util__Str_char________Darray_struct_util__tuple6_void____cdecl___void__class_util__Str_char__class_util__Str_char__int__int_class_util__Str_char(Darray_L_struct_util__tuple6_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cint_P_Cint_Cclass_util__Str_L_char_G___G___G_
           *this)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar3 = *(int *)(this + 4);
  *(undefined ***)this = &vftable_171;
  if (iVar3 != 0) {
    piVar1 = (int *)(iVar3 + -4);
    iVar5 = *piVar1;
    if (iVar5 != 0) {
      puVar4 = (undefined4 *)(iVar5 * 0x30 + 0x10 + iVar3);
      do {
        puVar2 = puVar4 + -0xc;
        iVar5 = iVar5 + -1;
        if ((void *)puVar4[-7] != (void *)0x0) {
          port_op_delete((void *)puVar4[-7]);
          puVar4[-7] = 0;
        }
        if ((void *)*puVar2 != (void *)0x0) {
          port_op_delete((void *)*puVar2);
          *puVar2 = 0;
        }
        if ((void *)puVar4[-0xf] != (void *)0x0) {
          port_op_delete((void *)puVar4[-0xf]);
          puVar4[-0xf] = 0;
        }
        puVar4 = puVar2;
      } while (iVar5 != 0);
      iVar5 = *piVar1;
    }
    port_op_delete(piVar1,iVar5 * 0x30 + 4);
  }
  *(undefined ***)this = (undefined **)(&vftable);
  *(undefined4 *)(this + 4) = 0;
  return;
}





//==== 0059b2e0 operator__0059b2e0 ====


/* public: class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cdouble___thiscall_util__Reflectable___P__void_const_G__G_ &  util__Darray_L_structutil__tuple2_L_class_util__Str_L_char_G__Cdouble___thiscallutil__Reflectable___P__void_const_G__G___op_assign(class
   util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cdouble___thiscall_util__Reflectable___P__void_const_G__G_ const &) */

Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__G___G_
* 
util__Darray_struct_util__tuple2_class_util__Str_char__double____thiscall_util__Reflectable_____void_const______operator(Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__G___G_
            *this,Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__G___G_
                  *param_1)

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
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cvoid____cdecl_P__void__G___G___SetSize
            ((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cvoid____cdecl_P__void__G___G_ *)this,
             &iStack_8);
  iVar2 = (**(code **)(*(int *)param_1 + 0xc))();
  if (iVar2 == 0) {
    (**(code **)(*(int *)this + 0x10))();
    return this;
  }
  uVar5 = *(uint *)(this + 8);
  if ((int)uVar5 < 0) {
    iStack_8 = 0;
    Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cvoid____cdecl_P__void__G___G___SetSize
              ((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cvoid____cdecl_P__void__G___G_ *)this,
               &iStack_8);
    uVar5 = *(uint *)(this + 8);
  }
  if (0x3fffffff < (int)uVar5) {
    iStack_8 = 0x3fffffff;
    Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cvoid____cdecl_P__void__G___G___SetSize
              ((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cvoid____cdecl_P__void__G___G_ *)this,
               &iStack_8);
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
    if (*(tuple2_L_class_util__Str_L_char_G__Cvoid____cdecl_P__void__G_ **)(this + 4) !=
        (tuple2_L_class_util__Str_L_char_G__Cvoid____cdecl_P__void__G_ *)0x0) {
      tuple2_L_class_util__Str_L_char_G__Cvoid____cdecl_P__void__G____vector_deleting_destructor_
                (*(tuple2_L_class_util__Str_L_char_G__Cvoid____cdecl_P__void__G_ **)(this + 4),3);
      uVar6 = *(uint *)(this + 0xc);
    }
    *(undefined4 *)(this + 4) = 0;
    uVar5 = -(uint)((int)((ulonglong)uVar6 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 0x10);
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
          pSVar4[1].Data = (char *)0x0;
          uVar6 = uVar6 - 1;
          pSVar4 = (Str_L_char_G_ *)&pSVar4[1].Capacity;
        } while (uVar6 != 0);
        *(Str_L_char_G_ **)(this + 4) = this_00;
        goto LAB_0059b422;
      }
    }
    *(Str_L_char_G_ **)(this + 4) = this_00;
  }
  else {
    this_00 = *(Str_L_char_G_ **)(this + 4);
  }
LAB_0059b422:
  pSVar4 = *(Str_L_char_G_ **)(param_1 + 4);
  if (pSVar4 == (Str_L_char_G_ *)(*(int *)(param_1 + 8) * 0x10 + (int)pSVar4)) {
    return this;
  }
  do {
    util__Maybe_struct_util__ClassMember___operator(this_00,pSVar4);
    pSVar1 = pSVar4 + 1;
    pSVar4 = (Str_L_char_G_ *)&pSVar4[1].Capacity;
    this_00[1].Data = pSVar1->Data;
    this_00 = (Str_L_char_G_ *)&this_00[1].Capacity;
  } while (pSVar4 != (Str_L_char_G_ *)(*(int *)(param_1 + 8) * 0x10 + *(int *)(param_1 + 4)));
  return this;
}





//==== 0059b4d0 DememoizeAll_0059b4d0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall AmmoCompartment__DememoizeAll(void)const  */

void __thiscall AmmoCompartment__DememoizeAll(AmmoCompartment *this)

{
  undefined8 stack0xfffffffc;
  AmmoCompartmentMemoizationHandler *pAVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar2 = (**(code **)(this->_pad_0x8_2 + 0xc))();
  if (local_c < iVar2) {
    do {
      puVar3 = (undefined4 *)(**(code **)this->_pad_0x8_2)(&local_c);
      (*(code *)*puVar3)();
      local_c = local_c + 1;
      iVar2 = (**(code **)(this->_pad_0x8_2 + 0xc))();
    } while (local_c < iVar2);
  }
  (**(code **)(this->_pad_0x8_2 + 0x10))();
  pAVar1 = &this->AmmoCompartmentMemoizationHandlerInstance;
  local_c = 0;
  iVar2 = (**(code **)((this->AmmoCompartmentMemoizationHandlerInstance).ResetFunctions._padfb0 +
                      0xc))();
  if (local_c < iVar2) {
    do {
      puVar3 = (undefined4 *)(**(code **)(pAVar1->ResetFunctions)._padfb0)(&local_c);
      (*(code *)*puVar3)();
      local_c = local_c + 1;
      iVar2 = (**(code **)((pAVar1->ResetFunctions)._padfb0 + 0xc))();
    } while (local_c < iVar2);
  }
  (**(code **)((pAVar1->ResetFunctions)._padfb0 + 0x10))();
  return;
}

//==== 0059b590 GetCrewAdded ====

/* public: double __thiscall CrewModule__GetCrewAdded(void)const  */

double __thiscall CrewModule__GetCrewAdded(CrewModule *this)

{
  return (double)this[1]._pad_0x8_2;
}

//==== 0059b5b0 GetDeckRadius_m ====

/* public: double __thiscall CrewModule__GetDeckRadius_m(void)const  */

double __thiscall CrewModule__GetDeckRadius_m(CrewModule *this)

{
  int iVar1;
  double dVar2;
  
  iVar1 = this[1]._pad_0x8_2;
  dVar2 = (double)iVar1;
  return (((dVar2 * 0.89 * (Physics__DefaultShipOperationalTime_s / 86400.0)) /
           Oxygen->Density_kg__m3 + ((dVar2 * 0.83) / 0.79) / Nitrogen->Density_kg__m3 +
           (dVar2 * 29.95) / Water->Density_kg__m3 +
           (dVar2 * 0.62 * (Physics__DefaultShipOperationalTime_s / 86400.0)) / 350.0 +
           dVar2 * 2.40039 + (double)((iVar1 + 2) / 3) * 0.623565 +
           (double)((iVar1 * 2 + 2) / 3) * 2.40039 + dVar2 * 2.40039 * 3.0) /
         (double)this[1]._pad_0xc_3) / 15.904312808798327;
}

//==== 0059b710 GetDeckThickness_m ====

/* public: double __thiscall CrewModule__GetDeckThickness_m(void)const  */

double __thiscall CrewModule__GetDeckThickness_m(CrewModule *this)

{
  Vec3_L_double_G_ VVar1;
  double dVar2;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_009681f8) {
    _Init_thread_header(&DAT_009681f8);
    if (DAT_009681f8 == -1) {
      DAT_009681f0 = 14709.974999999999;
      _Init_thread_footer(&DAT_009681f8);
    }
  }
  dVar2 = Material__GetYieldStrength_Pa((Material *)this[1]._pad_0x10_4);
  VVar1.Z = 0x40000000;
  (*(uint32_t *)((char *)&(VVar1) + 0)) = ZEXT812(0x4000000000000000);
  dVar2 = Mechanics__GetThicknessForAnEdgeClampedRectangularPlate_m((*(Vec2_L_double_G_ *)&(VVar1)),DAT_009681f0,dVar2);
  return dVar2;
}

//==== 0059b7a0 GetHeatGenerated_W ====

/* public: double __thiscall CrewModule__GetHeatGenerated_W(void)const  */

double __thiscall CrewModule__GetHeatGenerated_W(CrewModule *this)

{
  double dVar1;
  double local_c;
  
  dVar1 = GetDeckRadius_m(this);
  local_c = (dVar1 * 3.141592653589793 * dVar1) / 9.0;
  dVar1 = util__Floor(&local_c);
  return (double)this[1]._pad_0x8_2 * 271.1 + dVar1 * (double)this[1]._pad_0xc_3 * 33.0 +
         (double)this[1]._pad_0x8_2 * 73.0324074074074;
}

//==== 0059b840 GetMirrorFocalLengthLimit_m_Clear ====

/* public: void __thiscall LaserModule__GetMirrorFocalLengthLimit_m_Clear(void)const  */

void __thiscall LaserModule__GetMirrorFocalLengthLimit_m_Clear(LaserModule *this)

{
  (undefined1)((this->ArcLamp).ArcLampPumpSubModuleMemoizationHandlerInstance.ResetFunctions.Size
       = 0);
  (this->ArcLamp).ArcLampPumpSubModuleMemoizationHandlerInstance.ResetFunctions._padfb0 = 0;
  (this->ArcLamp).ArcLampPumpSubModuleMemoizationHandlerInstance.ResetFunctions.Data =
       (pmf_bdf1185d *)0x0;
  return;
}

//==== 0059c4c0 StaticFactory_0059c4c0 ====

/* public: static class util__Reflectable * __cdecl CrewModule__ReflectionInfoStruct_L_class_CrewModule_G___StaticFactory(void) */

Reflectable * __cdecl CrewModule__ReflectionInfoStruct_class_CrewModule___StaticFactory(void)

{
  Module *this;
  
  this = (Module *)(uintptr_t)(port_op_new(0x88));
  if (this != (Module *)0x0) {
    memset(this,0,0x88);
    Module__Module(this);
    this->_pad_0x0_0 = (int)&vftable_for_EditorReflectable__4;
    *(undefined4 *)&(this->GetTotalPowerUsage_W_MemoizedValue).field_0xc = (undefined4)(uintptr_t)&vftable_for_util__RTTIBaseClass__4;
    return (Reflectable *)this;
  }
  return (Reflectable *)0x0;
}

//==== 0059c500 StaticGetMemberByIndex_0059c500 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl CrewModule__ReflectionInfoStruct_class_CrewModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
CrewModule__ReflectionInfoStruct_class_CrewModule___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_0fd48c2f__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_0fd48c2f__thread_safe_static_guard_0__);
    if ( cde_l2_0fd48c2f__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_47f9b8c5_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_009680a4 = 0;
      _DAT_009680a8 = 0;
      _DAT_009680ac = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009680b0,"Unused");
      _DAT_009680bc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009680c0,"SteamWorkshopID");
      _DAT_009680cc = 6;
      _DAT_009680d0 = 0x10;
      _DAT_009680d4 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009680d8,"AStr");
      _DAT_009680e4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009680e8,"Description");
      _DAT_009680f4 = 6;
      _DAT_009680f8 = 0x20;
      _DAT_009680fc = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968100,"AStr");
      _DAT_0096810c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968110,"UsesCustomName");
      _DAT_0096811c = 1;
      _DAT_00968120 = 0x68;
      _DAT_00968124 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968128,"bool");
      _DAT_00968134 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968138,"CrewCapacity");
      _DAT_00968144 = 2;
      _DAT_00968148 = 0x70;
      _DAT_0096814c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968150,"int");
      _DAT_0096815c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968160,"Decks");
      _DAT_0096816c = 2;
      _DAT_00968170 = 0x74;
      _DAT_00968174 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968178,"int");
      _DAT_00968184 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968188,"StructureMaterial");
      _DAT_00968194 = 8;
      _DAT_00968198 = 0x78;
      _DAT_0096819c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009681a0,"Material");
      _DAT_009681ac = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009681b0,"ShellThickness_m");
      _DAT_009681bc = 4;
      _DAT_009681c0 = 0x80;
      _DAT_009681c4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009681c8,"double");
      _DAT_009681d4 = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_CrewModule__ReflectionInfoStruct_class_CrewModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_0fd48c2f__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_47f9b8c5_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_009680a4 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_009680a8 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_009680ac + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_009680b0 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_009680bc)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_009680bd)[iVar1];
  return __return_storage_ptr__;
}





//==== 0059c7d0 StaticGetMemberCount_0059c7d0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl CrewModule__ReflectionInfoStruct_class_CrewModule___StaticGetMemberCount(void) */

int __cdecl CrewModule__ReflectionInfoStruct_class_CrewModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_4541f48a__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_4541f48a__thread_safe_static_guard_0__);
    if ( cde_l2_4541f48a__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_bee549ba_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00967f5c = 0;
      _DAT_00967f60 = 0;
      _DAT_00967f64 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967f68,"Unused");
      _DAT_00967f74 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967f78,"SteamWorkshopID");
      _DAT_00967f84 = 6;
      _DAT_00967f88 = 0x10;
      _DAT_00967f8c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967f90,"AStr");
      _DAT_00967f9c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967fa0,"Description");
      _DAT_00967fac = 6;
      _DAT_00967fb0 = 0x20;
      _DAT_00967fb4 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967fb8,"AStr");
      _DAT_00967fc4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967fc8,"UsesCustomName");
      _DAT_00967fd4 = 1;
      _DAT_00967fd8 = 0x68;
      _DAT_00967fdc = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967fe0,"bool");
      _DAT_00967fec = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00967ff0,"CrewCapacity");
      _DAT_00967ffc = 2;
      _DAT_00968000 = 0x70;
      _DAT_00968004 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968008,"int");
      _DAT_00968014 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968018,"Decks");
      _DAT_00968024 = 2;
      _DAT_00968028 = 0x74;
      _DAT_0096802c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968030,"int");
      _DAT_0096803c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968040,"StructureMaterial");
      _DAT_0096804c = 8;
      _DAT_00968050 = 0x78;
      _DAT_00968054 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968058,"Material");
      _DAT_00968064 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968068,"ShellThickness_m");
      _DAT_00968074 = 4;
      _DAT_00968078 = 0x80;
      _DAT_0096807c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968080,"double");
      _DAT_0096808c = 0;
      atexit( private__static_int_const___cdecl_CrewModule__ReflectionInfoStruct_class_CrewModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_4541f48a__thread_safe_static_guard_0__);
    }
  }
  return 8;
}





//==== 0059ca50 StaticGetReflectionInfo_0059ca50 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct CrewModule__ReflectionInfoStruct_L_classCrewModule_G_ * __cdecl
   CrewModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_CrewModule_G_ * __cdecl CrewModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_57e04e9a__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_57e04e9a__thread_safe_static_guard_0__);
    if ( cde_l2_57e04e9a__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_011496d9_ReflectionInfo) = &vftable_174;
      _Init_thread_footer(& cde_l2_57e04e9a__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoStruct_L_class_CrewModule_G_ * *)&cde_l2_011496d9_ReflectionInfo;
}





//==== 0059e7b0 PointLineDistance_2_0_double_ ====


/* double __cdecl util__PointLineDistance_2_0_double(struct util__Line3_L_double_G_,struct
   util__Vec3_L_double_G_) */

double __cdecl util__PointLineDistance_2_0_double(Line3_L_double_G_ param_1,Vec3_L_double_G_ param_2)

{
  double dVar1;
  double dVar2;
  Maybe_L_double_G_ *pMVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_24 [8];
  Maybe_L_double_G_ MStack_1c;
  double dStack_c;
  
  *(uint32_t *)&dVar2 = *(uint32_t *)&(param_1.A);
  dVar6 = param_1.B.X - dVar2;
  dVar1 = param_1.A.Y;
  dVar7 = param_1.B.Y - dVar1;
  dVar4 = param_1.B.Z - param_1.A.Z;
  dVar5 = dVar7 * dVar7 + dVar6 * dVar6 + dVar4 * dVar4;
  if (NAN(dVar5) == (dVar5 == 0.0)) {
    dVar5 = ((param_2.Y - dVar1) * dVar7 + (param_2.X - dVar2) * dVar6 +
            (param_2.Z - param_1.A.Z) * dVar4) / dVar5;
    param_1.A.Z = dVar5 * dVar4 + param_1.A.Z;
    dVar1 = dVar5 * dVar7 + dVar1;
    unique0x10000151 = SUB84(dVar1,0);
    *(uint32_t *)&auStack_24 = (uint64_t)(dVar5 * dVar6 + dVar2);
    unique0x10000155 = (int)((ulonglong)dVar1 >> 0x20);
  }
  else {
    *(Vec4_L_double_G_ *)auStack_24 = param_1.A;
  }
  dStack_c = (param_2.Y - MStack_1c.Data) * (param_2.Y - MStack_1c.Data) +
             (param_2.X - (double)(int)(uintptr_t)(auStack_24)) * (param_2.X - (double)(int)(uintptr_t)(auStack_24)) +
             (param_2.Z - param_1.A.Z) * (param_2.Z - param_1.A.Z);
  pMVar3 = (Maybe_L_double_G_ *)(uintptr_t)(Sqrt((Maybe_L_double_G_ *)(auStack_24 + 8),&dStack_c));
  if (pMVar3->IsValidData == false) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,"IsValid()",
              (char *)0x0);
    DebugBreak();
  }
  return pMVar3->Data;
}





//==== 0059e8e0 Darray_CompartmentCollisionShell__0059e8e0 ====


/* public:  util__Darray_L_structCompartmentCollisionShell_G___Darray_L_struct_CompartmentCollisionShell_G_(int) */

Darray_L_struct_CompartmentCollisionShell_G_ * 
util__Darray_struct_CompartmentCollisionShell___Darray_struct_CompartmentCollisionShell
          (Darray_L_struct_CompartmentCollisionShell_G_ *this,int param_1)

{
  ReferenceController *this_00;
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 auStack_114 [28];
  undefined1 uStack_a4;
  undefined1 uStack_9c;
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
  undefined8 uStack_44;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 uStack_14;
  undefined7 uStack_13;
  Darray_L_struct_CompartmentCollisionShell_G_ *pDStack_c;
  int iStack_8;
  
  *(undefined ***)this = (undefined **)(&vftable_114);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(int *)(this + 0xc) = param_1;
  if ((param_1 < 0) || (0x3fffffff < param_1)) {
    *(undefined4 *)(this + 0xc) = 0;
  }
  else if (0 < param_1) {
    uVar3 = -(uint)((int)((ulonglong)(uint)param_1 * 0x118 >> 0x20) != 0) |
            (uint)((ulonglong)(uint)param_1 * 0x118);
    pDStack_c = this;
    piVar1 = (int *)port_op_new(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
    if (piVar1 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      *piVar1 = param_1;
      piVar5 = piVar1 + 1;
      if (param_1 != 0) {
        piVar2 = piVar1 + 0xf;
        piVar1 = piVar5;
        do {
          *piVar1 = 0;
          piVar1 = piVar1 + 0x46;
          piVar2[-0xd] = 0;
          piVar2[-0xc] = 0;
          piVar2[-0xb] = 0;
          piVar2[-10] = 0;
          piVar2[-9] = 0;
          piVar2[-8] = 0;
          piVar2[-7] = 0;
          piVar2[-6] = 0;
          piVar2[-5] = 0;
          piVar2[-4] = 0;
          piVar2[-3] = 0;
          piVar2[-2] = 0;
          piVar2[-1] = 0;
          *piVar2 = 0;
          piVar2[1] = 0;
          piVar2[2] = 0;
          piVar2[3] = 0;
          piVar2[4] = 0;
          piVar2[5] = 0;
          piVar2[6] = 0;
          piVar2[7] = 0;
          piVar2[8] = 0;
          piVar2[9] = 0;
          piVar2[10] = 0;
          piVar2[0xb] = 0;
          piVar2[0xc] = 0;
          piVar2[0xd] = 0;
          *(undefined1 *)(piVar2 + 0x12) = 0;
          piVar2[0xe] = 0;
          piVar2[0xf] = 0;
          piVar2[0x10] = 0;
          piVar2[0x11] = 0;
          *(undefined1 *)(piVar2 + 0x14) = 0;
          piVar2[0x16] = 0;
          piVar2[0x17] = 0;
          piVar2[0x18] = 0;
          piVar2[0x19] = 0;
          piVar2[0x1a] = 0;
          piVar2[0x1b] = 0;
          piVar2[0x1c] = 0;
          piVar2[0x1d] = 0;
          piVar2[0x1e] = 0;
          piVar2[0x1f] = 0;
          piVar2[0x20] = 0;
          piVar2[0x21] = 0;
          piVar2[0x22] = 0;
          piVar2[0x23] = 0;
          piVar2[0x24] = 0;
          piVar2[0x25] = 0;
          piVar2[0x26] = 0;
          piVar2[0x27] = 0;
          piVar2[0x28] = 0;
          piVar2[0x29] = 0;
          piVar2[0x2a] = 0;
          piVar2[0x2b] = 0;
          *(undefined1 *)(piVar2 + 0x2c) = 0;
          piVar2[0x2e] = 0;
          piVar2[0x2f] = 0;
          piVar2[0x30] = 0;
          piVar2[0x31] = 0;
          piVar2[0x32] = 0;
          piVar2[0x33] = 0;
          piVar2[0x34] = 0;
          piVar2[0x35] = 0;
          *(undefined1 *)(piVar2 + 0x36) = 0;
          param_1 = param_1 + -1;
          piVar2 = piVar2 + 0x46;
        } while (param_1 != 0);
      }
    }
    *(int **)(this + 4) = piVar5;
    param_1 = 0;
    if (0 < *(int *)(this + 0xc)) {
      iStack_8 = 0;
      do {
        puVar6 = (undefined4 *)(*(int *)(this + 4) + iStack_8);
        uStack_a4 = 0;
        auStack_114[0] = 0;
        auStack_114[1] = 0;
        auStack_114[2] = 0;
        auStack_114[3] = 0;
        uStack_9c = 0;
        auStack_114[4] = 0;
        auStack_114[5] = 0;
        auStack_114[6] = 0;
        auStack_114[7] = 0;
        this_00 = (ReferenceController *)puVar6[1];
        uStack_44 = 0;
        uStack_3c = uStack_3c & 0xffffff00;
        uStack_14 = 0;
        *puVar6 = 0;
        puVar6[1] = 0;
        auStack_114[8] = 0;
        auStack_114[9] = 0;
        auStack_114[10] = 0;
        auStack_114[0xb] = 0;
        auStack_114[0xc] = 0;
        auStack_114[0xd] = 0;
        auStack_114[0xe] = 0;
        auStack_114[0xf] = 0;
        auStack_114[0x10] = 0;
        auStack_114[0x11] = 0;
        auStack_114[0x12] = 0;
        auStack_114[0x13] = 0;
        auStack_114[0x14] = 0;
        auStack_114[0x15] = 0;
        auStack_114[0x16] = 0;
        auStack_114[0x17] = 0;
        auStack_114[0x18] = 0;
        auStack_114[0x19] = 0;
        auStack_114[0x1a] = 0;
        auStack_114[0x1b] = 0;
        uStack_94 = 0;
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
        uStack_34 = 0;
        uStack_30 = 0;
        uStack_2c = 0;
        uStack_28 = 0;
        uStack_24 = 0;
        uStack_20 = 0;
        uStack_1c = 0;
        uStack_18 = 0;
        if (this_00 != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(this_00);
        }
        puVar6[2] = 0;
        puVar6[0x24] = 0;
        puVar6[0x25] = 0;
        puVar6[0x26] = 0;
        puVar6[0x27] = 0;
        puVar6[3] = 0;
        puVar6[0x28] = 0;
        puVar6[0x29] = 0;
        puVar6[0x2a] = 0;
        puVar6[0x2b] = 0;
        puVar6[0x2c] = 0;
        puVar6[0x2d] = 0;
        puVar6[0x2e] = 0;
        puVar6[0x2f] = 0;
        param_1 = param_1 + 1;
        puVar6[0x30] = 0;
        puVar6[0x31] = 0;
        puVar6[0x32] = 0;
        puVar6[0x33] = 0;
        puVar6[0x34] = 0;
        puVar6[0x35] = 0;
        puVar6[0x36] = 0;
        puVar6[0x37] = 0;
        puVar7 = auStack_114;
        puVar8 = puVar6 + 4;
        for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar6[0x38] = (undefined4)uStack_44;
        puVar6[0x39] = (*(uint32_t*)((char*)&(uStack_44)+4));
        puVar6[0x3a] = uStack_3c;
        puVar6[0x3b] = uStack_38;
        iStack_8 = iStack_8 + 0x118;
        puVar6[0x3c] = 0;
        puVar6[0x3d] = 0;
        puVar6[0x3e] = 0;
        puVar6[0x3f] = 0;
        puVar6[0x40] = 0;
        puVar6[0x41] = 0;
        puVar6[0x42] = 0;
        puVar6[0x43] = 0;
        *(ulonglong *)(puVar6 + 0x44) = CONCAT71(uStack_13,uStack_14);
        this = pDStack_c;
      } while (param_1 < *(int *)(pDStack_c + 0xc));
      return pDStack_c;
    }
  }
  return this;
}





//==== 0059eb70 Darray_bool_ ====

/* public: __thiscall util__Darray_bool___Darray_bool(int) */

Darray_L_bool_G_ * __thiscall util__Darray_bool___Darray_bool(Darray_L_bool_G_ *this,int param_1)

{
  bool *pbVar1;
  int iVar2;
  
  this->_pad_0x0_0 = (int)&vftable_178;
  this->Data = (bool *)0x0;
  this->Size = 0;
  this->Capacity = param_1;
  if ((param_1 < 0) || (0x3fffffff < param_1)) {
    this->Capacity = 0;
  }
  else if (0 < param_1) {
    pbVar1 = (_Bool *)(uintptr_t)(port_op_new(param_1));
    if (pbVar1 == (bool *)0x0) {
      pbVar1 = (bool *)0x0;
    }
    else {
      memset(pbVar1,0,param_1);
    }
    iVar2 = 0;
    this->Data = pbVar1;
    if (0 < this->Capacity) {
      do {
        this->Data[iVar2] = false;
        iVar2 = iVar2 + 1;
      } while (iVar2 < this->Capacity);
      return this;
    }
  }
  return this;
}

//==== 0059ef10 operator___0059ef10 ====


/* public: virtual bool & __thiscall util__Darray_bool___operator(int const &)const  */

bool * __thiscall util__Darray_bool___operator(Darray_L_bool_G_ *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 < 0) || (this->Size <= iVar1)) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.inl",0xa0,
              "Index >= 0 && Index < Size",(char *)0x0);
    DebugBreak();
    iVar1 = *param_1;
  }
  return this->Data + iVar1;
}





//==== 0059f880 scalar_deleting_destructor_0059f880 ====


/* public: virtual void * __thiscall util__AutoDarray_L_structCompartmentPiece_G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__AutoDarray_struct_CompartmentPiece____scalar_deleting_destructor
          (AutoDarray_L_struct_CompartmentPiece_G_ *this,uint param_1)

{
  *(undefined ***)this = &vftable_176;
  FreeAll(this);
  *(undefined ***)this = (undefined **)(&vftable_2);
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





//==== 0059f8d0 scalar_deleting_destructor_0059f8d0 ====

/* public: virtual void * __thiscall util__Darray_L_bool_G_:: 0 scalardeletingdestructor(unsigned int)
    */

void * __thiscall util__Darray_bool____scalar_deleting_destructor(Darray_L_bool_G_ *this,uint param_1)

{
  this->_pad_0x0_0 = (int)&vftable_178;
  if (this->Data != (bool *)0x0) {
    port_op_delete(this->Data);
  }
  this->Data = (bool *)0x0;
  this->_pad_0x0_0 = (int)&vftable;
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}

//==== 0059f9f0 Add_0059f9f0 ====


/* public: bool __thiscall util__Darray_bool___Add(bool const &) */

bool __thiscall util__Darray_bool___Add(Darray_L_bool_G_ *this,bool *param_1)

{
  bool bVar1;
  bool *pbVar2;
  bool *pbVar3;
  uint uVar4;
  bool *pbVar5;
  char cVar6;
  bool *pbVar7;
  bool *pbVar8;
  uint uVar9;
  bool *pbVar10;
  bool bVar11;
  bool *pbStack_10;
  int iStack_c;
  bool bStack_5;
  
  iStack_c = this->Size;
  pbStack_10 = (bool *)(iStack_c + 1);
  SetSize(this,(int *)&pbStack_10);
  uVar4 = this->Size;
  bStack_5 = true;
  bVar11 = -1 < (int)uVar4;
  bVar1 = !bVar11;
  if (bVar1) {
    pbStack_10 = (bool *)0x0;
    SetSize(this,(int *)&pbStack_10);
    uVar4 = this->Size;
  }
  bStack_5 = !bVar1;
  bVar1 = (int)uVar4 < 0x40000000;
  if (!bVar1) {
    pbStack_10 = (bool *)0x3fffffff;
    SetSize(this,(int *)&pbStack_10);
    uVar4 = this->Size;
    bStack_5 = false;
  }
  uVar9 = this->Capacity;
  cVar6 = bVar1 && bVar11;
  if ((int)uVar9 < (int)uVar4) {
    if (uVar9 == 0) {
      this->Capacity = uVar4;
      uVar9 = uVar4;
    }
    if ((int)uVar9 < (int)uVar4) {
      do {
        uVar9 = uVar9 * 2;
      } while ((int)uVar9 < (int)uVar4);
      this->Capacity = uVar9;
    }
    if (0x3fffffff < (int)uVar9) {
      this->Capacity = 0x3fffffff;
      uVar9 = 0x3fffffff;
    }
    pbVar2 = (bool *)port_op_new(uVar9);
    if (pbVar2 == (bool *)0x0) {
      pbVar2 = (bool *)0x0;
      pbStack_10 = (bool *)0x0;
    }
    else {
      pbStack_10 = pbVar2;
      memset(pbVar2,0,uVar9);
    }
    pbVar5 = this->Data;
    if (pbVar5 != (bool *)0x0) {
      pbVar3 = pbVar2 + this->Size;
      pbVar7 = pbVar5;
      pbVar10 = pbVar2;
      if (pbVar5 != pbVar5 + iStack_c) {
        do {
          pbVar2 = pbStack_10;
          if (pbVar10 == pbVar3) break;
          pbVar8 = pbVar7 + 1;
          *pbVar10 = *pbVar7;
          pbVar5 = this->Data;
          pbVar7 = pbVar8;
          pbVar10 = pbVar10 + 1;
        } while (pbVar8 != pbVar5 + iStack_c);
      }
      port_op_delete(pbVar5);
      this->Data = (bool *)0x0;
    }
    this->Data = pbVar2;
    cVar6 = bStack_5;
  }
  if (cVar6 != '\0') {
    this->Data[this->Size + -1] = *param_1;
    return true;
  }
  return false;
}





//==== 0059fda0 CheckSize_0059fda0 ====


/* private: bool __thiscall util__Darray_bool___CheckSize(int) */

bool __thiscall util__Darray_bool___CheckSize(Darray_L_bool_G_ *this,int param_1)

{
  bool bVar1;
  bool *pbVar2;
  bool *pbVar3;
  uint uVar4;
  bool *pbVar5;
  bool *pbVar6;
  bool *pbVar7;
  uint uVar8;
  bool *pbVar9;
  bool bVar10;
  bool *pbStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar4 = this->Size;
  bVar10 = -1 < (int)uVar4;
  bVar1 = !bVar10;
  if (bVar1) {
    pbStack_c = (bool *)0x0;
    SetSize(this,(int *)&pbStack_c);
    uVar4 = this->Size;
  }
  bStack_5 = !bVar1;
  bVar1 = (int)uVar4 < 0x40000000;
  if (!bVar1) {
    pbStack_c = (bool *)0x3fffffff;
    SetSize(this,(int *)&pbStack_c);
    uVar4 = this->Size;
    bStack_5 = false;
  }
  uVar8 = this->Capacity;
  if ((int)uVar4 <= (int)uVar8) {
    return bVar1 && bVar10;
  }
  if (uVar8 == 0) {
    this->Capacity = uVar4;
    uVar8 = uVar4;
  }
  if ((int)uVar8 < (int)uVar4) {
    do {
      uVar8 = uVar8 * 2;
    } while ((int)uVar8 < (int)uVar4);
    this->Capacity = uVar8;
  }
  if (0x3fffffff < (int)uVar8) {
    this->Capacity = 0x3fffffff;
    uVar8 = 0x3fffffff;
  }
  pbVar2 = (bool *)port_op_new(uVar8);
  if (pbVar2 == (bool *)0x0) {
    pbVar2 = (bool *)0x0;
    pbStack_c = (bool *)0x0;
  }
  else {
    pbStack_c = pbVar2;
    memset(pbVar2,0,uVar8);
  }
  pbVar5 = this->Data;
  if (pbVar5 != (bool *)0x0) {
    pbVar3 = pbVar2 + this->Size;
    pbVar6 = pbVar5;
    pbVar9 = pbVar2;
    if (pbVar5 != pbVar5 + param_1) {
      do {
        pbVar2 = pbStack_c;
        if (pbVar9 == pbVar3) break;
        pbVar7 = pbVar6 + 1;
        *pbVar9 = *pbVar6;
        pbVar5 = this->Data;
        pbVar6 = pbVar7;
        pbVar9 = pbVar9 + 1;
      } while (pbVar7 != pbVar5 + param_1);
    }
    port_op_delete(pbVar5);
    this->Data = (bool *)0x0;
  }
  this->Data = pbVar2;
  return bStack_5;
}





//==== 0059fed0 Clear_0059fed0 ====


/* public: virtual void  util__AutoDarray_L_structCompartmentPiece_G___Clear(void) */

void __thiscall
util__AutoDarray_struct_CompartmentPiece___Clear(AutoDarray_L_struct_CompartmentPiece_G_ *this)

{
  AutoDarray_L_struct_CompartmentPiece_G_ *pAStack_8;
  
  pAStack_8 = this;
  FreeAll(this);
  pAStack_8 = (AutoDarray_L_struct_CompartmentPiece_G_ *)0x0;
  Darray_L_class_util__Reflectable_P_G___SetSize
            ((Darray_L_class_util__Reflectable_P_G_ *)this,(int *)&pAStack_8);
  return;
}





//==== 0059ff00 Clear_0059ff00 ====


/* public: virtual void __thiscall util__Darray_bool___Clear(void) */

void __thiscall util__Darray_bool___Clear(Darray_L_bool_G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 0059ff90 FreeAll_0059ff90 ====


/* private: void  util__AutoDarray_L_structCompartmentPiece_G___FreeAll(void) */

void __thiscall
util__AutoDarray_struct_CompartmentPiece___FreeAll(AutoDarray_L_struct_CompartmentPiece_G_ *this)

{
  void *pvVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(this + 4);
  if (puVar2 != puVar2 + *(int *)(this + 8)) {
    do {
      pvVar1 = (void *)*puVar2;
      if (pvVar1 != (void *)0x0) {
        if (*(ReferenceController **)((int)pvVar1 + 0x34) != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(*(ReferenceController **)((int)pvVar1 + 0x34));
        }
        port_op_delete(pvVar1,0x158);
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 4));
  }
  return;
}





//==== 005a08e0 GetCommandsGiven_005a08e0 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual struct CommandType  ModuleCompartment__GetCommandsGiven(void)const  */

void ModuleCompartment__GetCommandsGiven(void)

{
  undefined2 *in_stack_00000004;
  
  *in_stack_00000004 = 0;
  *(undefined1 *)(in_stack_00000004 + 1) = 0;
  return;
}





//==== 005a0900 GetCompartmentAngle_radians ====


/* public: static double __cdecl ModuleCompartment__GetCompartmentAngle_radians(struct
   util__Vec3_L_double_G_) */

double __cdecl ModuleCompartment__GetCompartmentAngle_radians(Vec3_L_double_G_ param_1)

{
  float10 fVar1;
  
  if (NAN(param_1.Y) == (param_1.Y == 0.0)) {
                    /* WARNING: Could not recover jumptable at 0x008e4512. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar1 = (float10)_CIatan2();
    return (double)fVar1;
  }
  return 0.0;
}





//==== 005a0a80 GetLocalSpaceShipForward ====


/* public: static struct util__Vec3_L_double_G_ __cdecl
   ModuleCompartment__GetLocalSpaceShipForward(void) */

Vec3_L_double_G_ * __cdecl
ModuleCompartment__GetLocalSpaceShipForward(Vec3_L_double_G_ *__return_storage_ptr__)

{
  __return_storage_ptr__->X = -1.0;
  *(undefined4 *)&__return_storage_ptr__->Y = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = 0;
  *(undefined4 *)&__return_storage_ptr__->Z = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->Z + 4) = 0;
  return __return_storage_ptr__;
}





//==== 005a0aa0 GetPlanarNormal ====


/* public: static struct util__Vec3_L_double_G_ __cdecl FixedOrbit__GetPlanarNormal(void) */

Vec3_L_double_G_ * __cdecl FixedOrbit__GetPlanarNormal(Vec3_L_double_G_ *__return_storage_ptr__)

{
  *(undefined4 *)&__return_storage_ptr__->X = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = 0;
  *(undefined4 *)&__return_storage_ptr__->Y = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = 0;
  __return_storage_ptr__->Z = 1.0;
  return __return_storage_ptr__;
}





//==== 005a1290 Last_005a1290 ====


/* public: virtual bool & __thiscall util__Darray_bool___Last(void) */

bool * __thiscall util__Darray_bool___Last(Darray_L_bool_G_ *this)

{
  int iVar1;
  
  iVar1 = this->Size;
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3c,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = this->Size;
  }
  return this->Data + iVar1 + -1;
}





//==== 005a12d0 Last_005a12d0 ====


/* public: virtual bool const & __thiscall util__Darray_bool___Last(void)const  */

bool *  util__Darray_bool___Last__o3(Darray_L_bool_G_ *this)

{
  int iVar1;
  
  iVar1 = this->Size;
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3d,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = this->Size;
  }
  return this->Data + iVar1 + -1;
}





//==== 005a1d10 SetAll_005a1d10 ====


/* public: virtual void __thiscall util__Darray_bool___SetAll(bool const &) */

void __thiscall util__Darray_bool___SetAll(Darray_L_bool_G_ *this,bool *param_1)

{
  bool *pbVar1;
  
  pbVar1 = this->Data;
  if (pbVar1 != pbVar1 + this->Size) {
    do {
      *pbVar1 = *param_1;
      pbVar1 = pbVar1 + 1;
    } while (pbVar1 != this->Data + this->Size);
  }
  return;
}





//==== 005a1d40 SetFromMatrix ====


/* private: void __thiscall util__Quaternion_double___SetFromMatrix(struct util__Matrix3x3_L_double_G_
   const &) */

void __thiscall
util__Quaternion_double___SetFromMatrix(Quaternion_L_double_G_ *this,Matrix3x3_L_double_G_ *param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  
  dVar8 = param_1->Data[0];
  dVar1 = param_1->Data[4];
  dVar6 = param_1->Data[8];
  dVar5 = dVar8 + dVar1 + dVar6;
  if (dVar5 <= 0.0) {
    if ((dVar8 <= dVar1) || (dVar8 <= dVar6)) {
      if (dVar1 <= dVar6) {
        dVar1 = ((dVar6 + 1.0) - dVar8) - dVar1;
        uVar9 = (undefined4)((ulonglong)dVar1 >> 0x20);
        uVar4 = SUB84(dVar1,0);
        libm_sse2_sqrt_precise(0.0);
        dVar8 = (double)CONCAT44(uVar9,uVar4) + (double)CONCAT44(uVar9,uVar4);
        dVar1 = 1.0 / dVar8;
        dVar8 = dVar8 * 0.25;
        this->W = (param_1->Data[1] - param_1->Data[3]) * dVar1;
        this->X = (param_1->Data[2] + param_1->Data[6]) * dVar1;
        this->Y = (param_1->Data[7] + param_1->Data[5]) * dVar1;
      }
      else {
        dVar6 = ((dVar1 + 1.0) - dVar8) - dVar6;
        uVar4 = SUB84(dVar6,0);
        uVar9 = (undefined4)((ulonglong)dVar6 >> 0x20);
        libm_sse2_sqrt_precise(0.0);
        dVar5 = (double)CONCAT44(uVar9,uVar4) + (double)CONCAT44(uVar9,uVar4);
        dVar8 = 1.0 / dVar5;
        this->W = (param_1->Data[6] - param_1->Data[2]) * dVar8;
        dVar1 = param_1->Data[3];
        dVar6 = param_1->Data[1];
        this->Y = dVar5 * 0.25;
        this->X = (dVar1 + dVar6) * dVar8;
        dVar8 = (param_1->Data[7] + param_1->Data[5]) * dVar8;
      }
    }
    else {
      dVar6 = ((dVar8 + 1.0) - dVar1) - dVar6;
      libm_sse2_sqrt_precise(0.0);
      dVar1 = param_1->Data[5];
      dVar5 = param_1->Data[7];
      dVar8 = 1.0 / (dVar6 + dVar6);
      this->X = (dVar6 + dVar6) * 0.25;
      this->W = (dVar1 - dVar5) * dVar8;
      this->Y = (param_1->Data[3] + param_1->Data[1]) * dVar8;
      dVar8 = (param_1->Data[6] + param_1->Data[2]) * dVar8;
    }
  }
  else {
    dVar5 = dVar5 + 1.0;
    libm_sse2_sqrt_precise(0.0);
    dVar8 = 1.0 / (dVar5 + dVar5);
    this->W = (dVar5 + dVar5) * 0.25;
    this->X = (param_1->Data[5] - param_1->Data[7]) * dVar8;
    this->Y = (param_1->Data[6] - param_1->Data[2]) * dVar8;
    dVar8 = (param_1->Data[1] - param_1->Data[3]) * dVar8;
  }
  this->Z = dVar8;
  dVar1 = this->X;
  dVar6 = this->W;
  dVar5 = this->Y * this->Y + dVar1 * dVar1 + dVar8 * dVar8 + dVar6 * dVar6;
  libm_sse2_sqrt_precise(0.0);
  dVar5 = 1.0 / dVar5;
  dVar7 = this->Y * dVar5;
  (*(uint32_t*)((char*)&(auVar2)+8)) = SUB84(dVar7,0);
  (*(uint64_t*)&(auVar2)) = dVar1 * dVar5;
  (*(uint32_t *)((char *)&(auVar2) + 12)) = (int)((ulonglong)dVar7 >> 0x20);
  this->X = (double)(*(uint64_t*)&(auVar2));
  this->Y = (double)(*(uint64_t*)((char*)&(auVar2)+8));
  (*(uint32_t*)((char*)&(auVar3)+8)) = SUB84(dVar6 * dVar5,0);
  (*(uint64_t*)&(auVar3)) = dVar8 * dVar5;
  (*(uint32_t *)((char *)&(auVar3) + 12)) = (int)((ulonglong)(dVar6 * dVar5) >> 0x20);
  this->Z = (double)(*(uint64_t*)&(auVar3));
  this->W = (double)(*(uint64_t*)((char*)&(auVar3)+8));
  return;
}





//==== 005a1fe0 SetSize_005a1fe0 ====


/* private: void __thiscall util__Darray_bool___SetSize(int const &) */

void __thiscall util__Darray_bool___SetSize(Darray_L_bool_G_ *this,int *param_1)

{
  bool *pbVar1;
  bool bVar2;
  int iVar3;
  bool *pbVar4;
  int iVar5;
  
  iVar3 = *param_1;
  if (((iVar3 < 1) && (0x3ffffffe < iVar3)) || ((iVar3 < 0x40000000 && (-1 < iVar3)))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (!bVar2) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.inl",0x2a5,
              "Between(value, 0, DARRAY_MAX_SIZE)",(char *)0x0);
    DebugBreak();
    iVar3 = *param_1;
  }
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  iVar5 = 0x3fffffff;
  if (iVar3 < 0x3fffffff) {
    iVar5 = iVar3;
  }
  if (((iVar5 < this->Size) && (pbVar1 = this->Data, pbVar1 != (bool *)0x0)) &&
     (pbVar4 = pbVar1 + iVar5, pbVar4 != pbVar1 + this->Size)) {
    do {
      *pbVar4 = false;
      pbVar4 = pbVar4 + 1;
    } while (pbVar4 != this->Data + this->Size);
  }
  this->Size = iVar5;
  return;
}





//==== 005a2270 GetType_005a2270 ====


/* public: virtual enum Module__Type __thiscall EngineModule__GetType(void)const  */

int __thiscall EngineModule__GetType(EngineModule *this)

{
  return Engine;
}





//==== 005a2280 GetReferenceIrradiance_005a2280 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual double __thiscall Manager__GetReferenceIrradiance(void)const  */

double __thiscall Manager__GetReferenceIrradiance(Manager *this)

{
  return 1.0;
}





//==== 005a2290 GetClassID_005a2290 ====


/* public: virtual unsigned long __thiscall BlackBoxEngineModule__GetClassID(void)const  */

ulong __thiscall BlackBoxEngineModule__GetClassID(BlackBoxEngineModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_efd6887f__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_efd6887f__thread_safe_static_guard_0__);
    if ( cde_l2_efd6887f__thread_safe_static_guard_0__ == -1) {
       cde_l2_df3c7a20_ID = util__GetHash("BlackBoxEngineModule");
      _Init_thread_footer(& cde_l2_efd6887f__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_df3c7a20_ID;
}





//==== 005a22f0 GetCustomModelFileNames ====

/* public: virtual class util__Darray_L_classutil__Str_L_char_G__G_ __thiscall
   BlackBoxEngineModule__GetCustomModelFileNames(void)const  */

Darray_L_util__Str_L_char_G___G_ * __thiscall
BlackBoxEngineModule__GetCustomModelFileNames
          (BlackBoxEngineModule *this,Darray_L_util__Str_L_char_G___G_ *__return_storage_ptr__)

{
  bool bVar1;
  undefined4 *puVar2;
  Str_L_char_G_ *pSVar3;
  int iVar4;
  int iVar5;
  Str_L_char_G_ local_18;
  BlackBoxEngineModule *local_c;
  int local_8;
  
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (Str_L_char_G_ *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_4;
  __return_storage_ptr__->Data = (Str_L_char_G_ *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 1;
  local_c = this;
  puVar2 = (undefined4 *)(uintptr_t)(port_op_new(0x10));
  if (puVar2 == (undefined4 *)0x0) {
    pSVar3 = (Str_L_char_G_ *)0x0;
  }
  else {
    *puVar2 = 1;
    pSVar3 = (Str_L_char_G_ *)(puVar2 + 1);
    pSVar3->Data = (char *)0x0;
    puVar2[2] = 0;
    puVar2[3] = 0;
  }
  iVar4 = 0;
  __return_storage_ptr__->Data = pSVar3;
  if (0 < __return_storage_ptr__->Capacity) {
    local_18.Data = (char *)0x0;
    iVar5 = 0;
    local_18.Capacity = 0;
    local_18.Length = 0;
    do {
      util__Str_char___operator__o8
                ((Str_L_char_G_ *)((int)&__return_storage_ptr__->Data->Data + iVar5),&local_18);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0xc;
    } while (iVar4 < __return_storage_ptr__->Capacity);
  }
  iVar4 = __return_storage_ptr__->Size;
  local_8 = iVar4 + 1;
  util__Darray_L_util__Str_L_char_G___G___SetSize(__return_storage_ptr__,&local_8);
  bVar1 = util__Darray_L_util__Str_L_char_G___G___CheckSize(__return_storage_ptr__,iVar4);
  if (bVar1) {
    util__Str_char___operator__o8
              (__return_storage_ptr__->Data + __return_storage_ptr__->Size + -1,
               (Str_L_char_G_ *)&local_c[1]._pad_0x6c_27);
  }
  return __return_storage_ptr__;
}

//==== 005a23d0 GetGeneratedName_005a23d0 ====

/* public: virtual class util__Str_L_char_G_ __thiscall
   BlackBoxEngineModule__GetGeneratedName(void)const  */

Str_L_char_G_ * __thiscall
BlackBoxEngineModule__GetGeneratedName(BlackBoxEngineModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,(Str_L_char_G_ *)&this[1]._pad_0x60_24);
  return __return_storage_ptr__;
}

//==== 005a23f0 GetIcon_005a23f0 ====


/* public: virtual void (__cdecl*__thiscall BlackBoxEngineModule__GetIcon(void)const )(void) */

_func_void * __thiscall BlackBoxEngineModule__GetIcon(BlackBoxEngineModule *this)

{
  return (_func_void *)(uintptr_t) Icons__RocketEngine;
}





//==== 005a2400 Instantiate_005a2400 ====

/* public: virtual class util__SharedPtr_L_structModuleCompartment_G_ __thiscall
   MagnetoplasmadynamicThrusterModule__Instantiate(void)const  */

undefined4 * __thiscall
MagnetoplasmadynamicThrusterModule__Instantiate(MagnetoplasmadynamicThrusterModule *this)

{
  bool bVar1;
  EngineCompartment *this_00;
  ReferenceControllerRegistry *pRVar2;
  ReferenceController *this_01;
  undefined4 *in_stack_00000004;
  EngineCompartment *pEVar3;
  
  this_00 = (EngineCompartment *)(uintptr_t)(port_op_new(0x178));
  if (this_00 == (EngineCompartment *)0x0) {
    this_00 = (EngineCompartment *)0x0;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
  }
  else {
    EngineCompartment__EngineCompartment(this_00);
    this_00->_pad_0x0_0 = (int)&vftable_181;
  }
  pEVar3 = this_00;
  pRVar2 = util__ReferenceControllerRegistry__Get();
  this_01 = util__ReferenceControllerRegistry__Register(pRVar2,pEVar3);
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
  }
  *in_stack_00000004 = (undefined4)(uintptr_t)(this_00);
  in_stack_00000004[1] = (undefined4)(uintptr_t)(this_01);
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
    bVar1 = util__ReferenceController__ReleaseStrongReference(this_01);
    if (bVar1) {
      if (this_00 != (EngineCompartment *)0x0) {
        (**(code **)this_00->_pad_0x0_0)(1);
      }
      pRVar2 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar2,this_00);
    }
  }
  return in_stack_00000004;
}

//==== 005a24b0 GetComposition_005a24b0 ====

/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   BlackBoxEngineModule__GetComposition(void)const  */

Darray_L_MaterialComposition_G_ * __thiscall
BlackBoxEngineModule__GetComposition
          (BlackBoxEngineModule *this,Darray_L_MaterialComposition_G_ *__return_storage_ptr__)

{
  MaterialComposition *pMVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Material *pMVar4;
  int iVar5;
  Darray_L_MaterialComposition_G_ *this_00;
  bool bVar6;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  this_00 = __return_storage_ptr__;
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (MaterialComposition *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  Module__GetComposition((Module *)this,__return_storage_ptr__);
  pMVar4 = (Material *)this[1]._pad_0x90_36;
  uVar2 = this[1]._pad_0x88_34;
  uVar3 = this[1]._pad_0x8c_35;
  iVar5 = this_00->Size;
  __return_storage_ptr__ = (Darray_L_MaterialComposition_G_ *)(iVar5 + 1);
  util__Darray_L_MaterialConstituent_G___SetSize
            ((Darray_L_MaterialConstituent_G_ *)this_00,(int *)&__return_storage_ptr__);
  bVar6 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                    ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar5);
  if (bVar6) {
    pMVar1 = this_00->Data + this_00->Size + -1;
    pMVar1->Type = pMVar4;
    (undefined4)((*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar1) + 0x4)) = uStack_10);
    *(undefined4 *)&pMVar1->Mass_kg = uVar2;
    *(undefined4 *)((int)&pMVar1->Mass_kg + 4) = uVar3;
  }
  return this_00;
}

//==== 005a2520 GetPowerUsage_005a2520 ====

/* public: virtual class util__Darray_L_structPowerUsage_G_ __thiscall
   BlackBoxEngineModule__GetPowerUsage(void)const  */

Darray_L_PowerUsage_G_ * __thiscall
BlackBoxEngineModule__GetPowerUsage
          (BlackBoxEngineModule *this,Darray_L_PowerUsage_G_ *__return_storage_ptr__)

{
  int iVar1;
  PowerUsage *pPVar2;
  Darray_L_PowerUsage_G_ *this_00;
  bool bVar3;
  Str_L_char_G_ local_30;
  double local_20;
  Str_L_char_G_ local_18;
  double local_c;
  
  this_00 = __return_storage_ptr__;
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (PowerUsage *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  Module__GetPowerUsage((Module *)this,__return_storage_ptr__);
  util__Str_char___Str_char(&local_18,(Str_L_char_G_ *)&this[1]._pad_0x60_24);
  local_c = *(double *)&this[1]._pad_0x98_38;
  util__Str_char___Str_char(&local_30,&local_18);
  local_20 = local_c;
  if (local_18.Data != (char *)0x0) {
    port_op_delete(local_18.Data);
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
    util__Str_char___operator__o8(&pPVar2[iVar1 + -1].Label,&local_30);
    pPVar2[iVar1 + -1].PowerUsed_W = local_c;
  }
  if (local_30.Data != (char *)0x0) {
    port_op_delete(local_30.Data);
  }
  return this_00;
}

//==== 005a25e0 GetMaxMassFlowRate_kg__s ====

/* public: virtual double __thiscall BlackBoxEngineModule__GetMaxMassFlowRate_kg__s(void)const  */

double __thiscall BlackBoxEngineModule__GetMaxMassFlowRate_kg__s(BlackBoxEngineModule *this)

{
  return *(double *)&this[1]._pad_0xb0_44 / (*(double *)&this[1]._pad_0xa8_42 * 1000.0);
}

//==== 005a2600 GetEffectiveExhaustVelocity_km__s ====

/* public: virtual double __thiscall
   BlackBoxEngineModule__GetEffectiveExhaustVelocity_km__s(void)const  */

double __thiscall
BlackBoxEngineModule__GetEffectiveExhaustVelocity_km__s(BlackBoxEngineModule *this)

{
  return *(double *)&this[1]._pad_0xa8_42;
}

//==== 005a2610 GetMaxThrust_N_005a2610 ====

/* public: virtual double __thiscall BlackBoxEngineModule__GetMaxThrust_N(void)const  */

double __thiscall BlackBoxEngineModule__GetMaxThrust_N(BlackBoxEngineModule *this)

{
  return *(double *)&this[1]._pad_0xb0_44;
}

//==== 005a2620 GetSolePropellant ====

/* public: virtual class Material const * __thiscall
   BlackBoxEngineModule__GetSolePropellant(void)const  */

Material * __thiscall BlackBoxEngineModule__GetSolePropellant(BlackBoxEngineModule *this)

{
  return (Material *)this[1]._pad_0xa0_40;
}

//==== 005a2630 GetStructuralMaterial_005a2630 ====

/* public: virtual class Material const * __thiscall
   BlackBoxEngineModule__GetStructuralMaterial(void)const  */

Material * __thiscall BlackBoxEngineModule__GetStructuralMaterial(BlackBoxEngineModule *this)

{
  return (Material *)this[1]._pad_0x90_36;
}

//==== 005a2640 GetStructuralThickness_m_005a2640 ====


/* public: virtual double __thiscall BlackBoxWeaponModule__GetStructuralThickness_m(void)const  */

double __thiscall BlackBoxWeaponModule__GetStructuralThickness_m(BlackBoxWeaponModule *this)

{
  return 0.1;
}





//==== 005a2650 GetEngineDimensions_m ====

/* public: virtual struct util__Cylinder_L_double_G_ 
   BlackBoxEngineModule__GetEngineDimensions_m(void)const  */

Cylinder_L_double_G_ * 
BlackBoxEngineModule__GetEngineDimensions_m
          (BlackBoxEngineModule *this,Cylinder_L_double_G_ *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = this[1]._pad_0x7c_31;
  iVar2 = this[1]._pad_0x80_32;
  iVar3 = this[1]._pad_0x84_33;
  *(int *)&__return_storage_ptr__->Radius = this[1]._pad_0x78_30;
  *(int *)((int)&__return_storage_ptr__->Radius + 4) = iVar1;
  *(int *)&__return_storage_ptr__->Height = iVar2;
  *(int *)((int)&__return_storage_ptr__->Height + 4) = iVar3;
  return __return_storage_ptr__;
}

//==== 005a2670 GetReloadTime_s ====


/* public: virtual double __thiscall BlackBoxWeaponModule__GetReloadTime_s(void)const  */

double __thiscall BlackBoxWeaponModule__GetReloadTime_s(BlackBoxWeaponModule *this)

{
  return (double)((this->Turret).Data.field1_0x1);
}





//==== 005a2680 GetHullLength_m_005a2680 ====

/* public: virtual double __thiscall BlackBoxEngineModule__GetHullLength_m(void)const  */

double __thiscall BlackBoxEngineModule__GetHullLength_m(BlackBoxEngineModule *this)

{
  return *(double *)&this[1]._pad_0x80_32;
}

//==== 005a2690 GetEngineMass_kg ====

/* public: virtual double __thiscall BlackBoxEngineModule__GetEngineMass_kg(void)const  */

double __thiscall BlackBoxEngineModule__GetEngineMass_kg(BlackBoxEngineModule *this)

{
  return *(double *)&this[1]._pad_0x88_34;
}

//==== 005a26a0 GetHeatSignature_W ====

/* public: virtual double __thiscall BlackBoxEngineModule__GetHeatSignature_W(void)const  */

double __thiscall BlackBoxEngineModule__GetHeatSignature_W(BlackBoxEngineModule *this)

{
  return *(double *)&this[1]._pad_0xb8_46;
}

//==== 005a26b0 GetMaxGimbalAngle_radians ====

/* public: virtual double __thiscall BlackBoxEngineModule__GetMaxGimbalAngle_radians(void)const  */

double __thiscall BlackBoxEngineModule__GetMaxGimbalAngle_radians(BlackBoxEngineModule *this)

{
  return *(double *)&this[1]._pad_0x28_10 * 0.017453292519943295;
}

//==== 005a2900 GetPointerPropertyChoices_005a2900 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   BlackBoxEngineModule__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

ClassMember * 
BlackBoxEngineModule__GetPointerPropertyChoices
          (BlackBoxEngineModule *this,ClassMember *param_1,SerializationManagerInterface *param_2)

{
  char *pcVar1;
  SerializationManagerInterface SVar2;
  int in_stack_0000000c;
  undefined1 uVar3;
  
  if ((*(int *)&(param_2[1])) < 1) {
    SVar2 = (*(SerializationManagerInterface *)
            &cde_l2_0b2b1c9f_NullString);
  }
  else {
    SVar2 = *param_2;
  }
  for (pcVar1 = "Propellant"; (pcVar1[(int)((*(int *)&(SVar2)) + -0x9216a0)] != '\0' || (*pcVar1 != '\0'));
      pcVar1 = pcVar1 + 1) {
    if (pcVar1[(int)((*(int *)&(SVar2)) + -0x9216a0)] != *pcVar1) {
      if ((*(int *)&(param_2[1])) < 1) {
        SVar2 = (*(SerializationManagerInterface *)
                &cde_l2_0b2b1c9f_NullString);
      }
      else {
        SVar2 = *param_2;
      }
      for (pcVar1 = "PrimaryComposition";
          (pcVar1[(int)((*(int *)&(SVar2)) + -0x9258bc)] != '\0' || (*pcVar1 != '\0')); pcVar1 = pcVar1 + 1)
      {
        if (pcVar1[(int)((*(int *)&(SVar2)) + -0x9258bc)] != *pcVar1) {
          (param_1->Name).Data =
               (char *)&vftable_85;
          (param_1->Name).Capacity = 0;
          (param_1->Name).Length = 0;
          *(undefined4 *)&param_1->Type = 0;
          return param_1;
        }
      }
      uVar3 = false;
LAB_005a293a:
      GetMaterials((DataParser *)param_1,in_stack_0000000c,(bool)uVar3);
      return param_1;
    }
  }
  uVar3 = 2;
  goto LAB_005a293a;
}





//==== 005a29b0 GetReflectionInfo_005a29b0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   BlackBoxEngineModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall BlackBoxEngineModule__GetReflectionInfo(BlackBoxEngineModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_f4fb9b70__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_f4fb9b70__thread_safe_static_guard_0__);
    if ( cde_l2_f4fb9b70__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_dc0a8fa4_ReflectionInfo) = &vftable_179;
      _Init_thread_footer(& cde_l2_f4fb9b70__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_dc0a8fa4_ReflectionInfo;
}





//==== 005a29c0 scalar_deleting_destructor_005a29c0 ====

/* public: virtual void * __thiscall BlackBoxEngineModule:: 0 scalardeletingdestructor(unsigned
   int) */

void * __thiscall
BlackBoxEngineModule___scalar_deleting_destructor(BlackBoxEngineModule *this,uint param_1)

{
  if ((void *)this[1]._pad_0x6c_27 != (void *)0x0) {
    port_op_delete((void *)this[1]._pad_0x6c_27);
    this[1]._pad_0x6c_27 = 0;
  }
  if ((void *)this[1]._pad_0x60_24 != (void *)0x0) {
    port_op_delete((void *)this[1]._pad_0x60_24);
    this[1]._pad_0x60_24 = 0;
  }
  EngineModule___EngineModule((EngineModule *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x210);
  }
  return this;
}

//==== 005a2a30 GetTypeName_005a2a30 ====


/* public: virtual class util__Str_L_char_G_  BlackBoxEngineModule__ReflectionInfoStruct_class_BlackBoxEngineModule___GetTypeName(void)const  */

Str_L_char_G_ * 
BlackBoxEngineModule__ReflectionInfoStruct_class_BlackBoxEngineModule___GetTypeName
          (ReflectionInfoStruct_L_class_BlackBoxEngineModule_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"BlackBoxEngineModule");
  return __return_storage_ptr__;
}





//==== 005a2a50 GetMembers_005a2a50 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   BlackBoxEngineModule__ReflectionInfoStruct_class_BlackBoxEngineModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
BlackBoxEngineModule__ReflectionInfoStruct_class_BlackBoxEngineModule___GetMembers__o2
          (ReflectionInfoStruct_L_class_BlackBoxEngineModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_5d58ecf1__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_5d58ecf1__thread_safe_static_guard_0__),
      cde_l2_5d58ecf1__thread_safe_static_guard_0__ == -1)) {
     cde_l2_5d429cda_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_5d58ecf1__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_5d429cda_Count);
  iVar3 = 0;
  if (0 <  cde_l2_5d429cda_Count) {
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
    } while (iVar3 <  cde_l2_5d429cda_Count);
  }
  return in_stack_00000004;
}





//==== 005a2b90 GetMember_005a2b90 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   BlackBoxEngineModule__ReflectionInfoStruct_class_BlackBoxEngineModule___GetMember(class
   util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
BlackBoxEngineModule__ReflectionInfoStruct_class_BlackBoxEngineModule___GetMember__o2
          (ReflectionInfoStruct_L_class_BlackBoxEngineModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_637cc0e1__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_637cc0e1__thread_safe_static_guard_0__),
      cde_l2_637cc0e1__thread_safe_static_guard_0__ == -1)) {
     cde_l2_e734ef36_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_637cc0e1__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_e734ef36_Count) {
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
LAB_005a2c1d:
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
          if (cVar3 == '\0') goto LAB_005a2c1d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_e734ef36_Count);
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





//==== 005a2d30 GetFactory_005a2d30 ====


/* public: virtual class util__Reflectable * (__cdecl*
   BlackBoxEngineModule__ReflectionInfoStruct_class_BlackBoxEngineModule___GetFactory(void)const
   )(void) */

_func_Reflectable_ptr * 
__thiscall BlackBoxEngineModule__ReflectionInfoStruct_class_BlackBoxEngineModule___GetFactory__o2
          (ReflectionInfoStruct_L_class_BlackBoxEngineModule_G_ *this)

{
  return StaticFactory;
}





//==== 005a2d40 SharedPtr_GameColorModel_ ====

/* public: __thiscall SharedPtr_L_struct_GameColorModel_G___dtor(void) */

void 
util__SharedPtr_struct_GameColorModel____SharedPtr_struct_GameColorModel(SharedPtr_L_GameColorModel_G_ *this)

{
  VertexBufferObjectInterface *this_00;
  bool bVar1;
  ReferenceControllerRegistry *this_01;
  GameColorModel *pGVar2;
  
  if (this->Controller != (ReferenceController *)0x0) {
    bVar1 = ReferenceController__ReleaseStrongReference(this->Controller);
    if (bVar1) {
      this_00 = (VertexBufferObjectInterface *)this->Pointer;
      pGVar2 = (GameColorModel *)0x0;
      if (this_00 != (VertexBufferObjectInterface *)0x0) {
        this_00[1]._pad_0x0_0 = (int)&vftable_10;
        if ((void *)this_00[1].Type != (void *)0x0) {
          port_op_delete((void *)this_00[1].Type);
        }
        this_00[1].Type = 0;
        this_00[1]._pad_0x0_0 = (int)&vftable;
        VertexBufferObjectInterface___VertexBufferObjectInterface(this_00);
        port_op_delete(this_00,0xa0);
        pGVar2 = this->Pointer;
      }
      this_01 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
      ReferenceControllerRegistry__PointerWasDestroyed(this_01,pGVar2);
      this->Pointer = (GameColorModel *)0x0;
    }
  }
  return;
}

//==== 005a2dc0 EngineModule ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual __thiscall EngineModule___EngineModule(void) */

void __thiscall EngineModule___EngineModule(EngineModule *this)

{
  ReferenceController *pRVar1;
  VertexBufferObjectInterface *this_00;
  bool bVar2;
  ReferenceControllerRegistry *this_01;
  void *pvVar3;
  
  pRVar1 = *(ReferenceController **)((int)&this[1].Gimbal.Data.CachedObjectRadius_m + 4);
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  Darray_L_util__WeakPtr_L_UIWidget_G___G___dtor((Darray_L_util__WeakPtr_L_UIWidget_G___G_ *)&this[1].Gimbal.Data.MomentumWheels.CachedHeight_m)
  ;
  Darray_L_util__WeakPtr_L_UIWidget_G___G___dtor((Darray_L_util__WeakPtr_L_UIWidget_G___G_ *)&this[1].Gimbal.Data.MomentumWheels.CachedAxisCount
            );
  pRVar1 = *(ReferenceController **)
            ((int)&this[1].Gimbal.Data.MomentumWheels.RotationalSpeed_RPM + 4);
  if (pRVar1 != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__ReleaseStrongReference(pRVar1);
    if (bVar2) {
      this_00 = *(VertexBufferObjectInterface **)
                 &this[1].Gimbal.Data.MomentumWheels.RotationalSpeed_RPM;
      pvVar3 = (void *)0x0;
      if (this_00 != (VertexBufferObjectInterface *)0x0) {
        this_00[1]._pad_0x0_0 = (int)&vftable_10;
        if ((void *)this_00[1].Type != (void *)0x0) {
          port_op_delete((void *)this_00[1].Type);
        }
        this_00[1].Type = 0;
        this_00[1]._pad_0x0_0 = (int)&vftable;
        VertexBufferObjectInterface___VertexBufferObjectInterface(this_00);
        port_op_delete(this_00,0xa0);
        pvVar3 = *(void **)&this[1].Gimbal.Data.MomentumWheels.RotationalSpeed_RPM;
      }
      this_01 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(this_01,pvVar3);
      *(undefined4 *)&this[1].Gimbal.Data.MomentumWheels.RotationalSpeed_RPM = 0;
    }
  }
  TurretSubModule___TurretSubModule((TurretSubModule *)&(this->Gimbal).Data.ArmorThickness_m);
  this->_pad_0x0_0 = (int)&vftable_for_EditorReflectable__3;
  this->_pad_0x34_13 = (int)&vftable_for_util__RTTIBaseClass__3;
  Darray_L_util__SharedPtr_L_GameModel_G___G___dtor((Darray_L_util__SharedPtr_L_GameModel_G___G_ *)&(this->Gimbal).Data._pad_0x8_2);
  this->_pad_0x38_14 = (int)&vftable_166;
  if ((void *)this->_pad_0x3c_15 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x3c_15);
  }
  this->_pad_0x3c_15 = 0;
  this->_pad_0x38_14 = (int)&vftable;
  if ((void *)this->_pad_0x20_8 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x20_8);
    this->_pad_0x20_8 = 0;
  }
  if ((void *)this->_pad_0x10_4 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x10_4);
    this->_pad_0x10_4 = 0;
  }
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  return;
}

//==== 005a2e80 TurretSubModule ====

/* public: virtual __thiscall TurretSubModule___TurretSubModule(void) */

void __thiscall TurretSubModule___TurretSubModule(TurretSubModule *this)

{
  ReferenceController *this_00;
  void *pvVar1;
  
  this_00 = *(ReferenceController **)((int)&this[1].CachedObjectEndRadialMomentOfInertia_kg_m2 + 4);
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  *(undefined ***)&this->CachedObjectMass_kg = &vftable_5;
  pvVar1 = *(void **)((int)&this->CachedObjectMass_kg + 4);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    *(undefined4 *)((int)&this->CachedObjectMass_kg + 4) = 0;
  }
  (this->MomentumWheels)._pad_0x8_2 = (int)&vftable_5;
  pvVar1 = (void *)(this->MomentumWheels)._pad_0xc_3;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->MomentumWheels)._pad_0xc_3 = 0;
  }
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  return;
}

//==== 005a2ef0 vector_deleting_destructor_005a2ef0 ====


/* public: void * __thiscall util__SharedPtr_L_structGameModel_G_:: 0 vectordeletingdestructor(unsigned int) */

void * 
util__SharedPtr_struct_GameModel____vector_deleting_destructor
          (SharedPtr_L_struct_GameModel_G_ *this,uint param_1)

{
  SharedPtr_L_struct_GameModel_G_ *pSVar1;
  SharedPtr_L_struct_GameModel_G_ *pSVar2;
  SharedPtr_L_struct_GameModel_G_ *pSVar3;
  bool bVar4;
  GameModel *pGVar5;
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
        pGVar5 = *(GameModel **)pSVar3;
        if (pGVar5 != (GameModel *)0x0) {
          GameModel___scalar_deleting_destructor(pGVar5,1);
          pGVar5 = *(GameModel **)pSVar3;
        }
        pRVar6 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
        ReferenceControllerRegistry__PointerWasDestroyed(pRVar6,pGVar5);
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
    pGVar5 = *(GameModel **)this;
    if (pGVar5 != (GameModel *)0x0) {
      GameModel___scalar_deleting_destructor(pGVar5,1);
      pGVar5 = *(GameModel **)this;
    }
    pRVar6 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
    ReferenceControllerRegistry__PointerWasDestroyed(pRVar6,pGVar5);
    *(undefined4 *)this = 0;
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,8);
  }
  return this;
}





//==== 005a2fc0 scalar_deleting_destructor_005a2fc0 ====


/* public: virtual void * __thiscall util__Darray_L_classutil__Darray_L_classutil__WeakPtr_L_struct_PropellantTankCompartment_G__G__G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_class_util__Darray_class_util__WeakPtr_struct_PropellantTankCompartment________scalar_deleting_destructor
          (Darray_L_class_util__Darray_L_class_util__WeakPtr_L_struct_PropellantTankCompartment_G___G___G_ *this
          ,uint param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 4);
  *(undefined ***)this = &vftable_180;
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





//==== 005a3090 Add_005a3090 ====


/* public: bool  util__Darray_L_classutil__SharedPtr_L_structGameModel_G__G___Add(class
   util__SharedPtr_L_structGameModel_G_ const &) */

bool 
util__Darray_class_util__SharedPtr_struct_GameModel_____Add
          (Darray_L_class_util__SharedPtr_L_struct_GameModel_G___G_ *this,
          SharedPtr_L_struct_GameModel_G_ *param_1)

{
  int iVar1;
  ReferenceController *this_00;
  ReferenceController *this_01;
  bool bVar2;
  ReferenceControllerRegistry *this_02;
  GameModel *this_03;
  int iStack_8;
  
  iVar1 = *(int *)(this + 8);
  iStack_8 = iVar1 + 1;
  SetSize(this,&iStack_8);
  bVar2 = CheckSize(this,iVar1);
  if (!bVar2) {
  }
  this_03 = *(GameModel **)(*(int *)(this + 4) + -8 + *(int *)(this + 8) * 8);
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
      if (this_03 != (GameModel *)0x0) {
        GameModel___scalar_deleting_destructor(this_03,1);
      }
      this_02 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
      ReferenceControllerRegistry__PointerWasDestroyed(this_02,this_03);
    }
  }
  return true;
}





//==== 005a3120 CheckSize_005a3120 ====


/* private: bool  util__Darray_L_classutil__SharedPtr_L_structGameModel_G__G___CheckSize(int)
    */

bool 
util__Darray_class_util__SharedPtr_struct_GameModel_____CheckSize
          (Darray_L_class_util__SharedPtr_L_struct_GameModel_G___G_ *this,int param_1)

{
  uint *puVar1;
  ReferenceController *this_00;
  ReferenceController *this_01;
  bool bVar2;
  ReferenceControllerRegistry *this_02;
  uint uVar3;
  SharedPtr_L_struct_GameModel_G_ *this_03;
  uint uVar4;
  uint *puVar5;
  SharedPtr_L_struct_GameModel_G_ *pSVar6;
  bool bVar7;
  GameModel *this_04;
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
  this_03 = *(SharedPtr_L_struct_GameModel_G_ **)(this + 4);
  if (this_03 != (SharedPtr_L_struct_GameModel_G_ *)0x0) {
    puVar1 = puStack_c + *(int *)(this + 8) * 2;
    puVar5 = puStack_c;
    pSVar6 = this_03;
    if (this_03 != this_03 + param_1 * 8) {
      do {
        if (puVar5 == puVar1) break;
        this_04 = (GameModel *)*puVar5;
        this_00 = (ReferenceController *)puVar5[1];
        *puVar5 = *(uint *)pSVar6;
        this_01 = *(ReferenceController **)(pSVar6 + 4);
        puVar5[1] = (uint)this_01;
        if (this_01 != (ReferenceController *)0x0) {
          ReferenceController__AddStrongReference(this_01);
        }
        if ((this_00 != (ReferenceController *)0x0) &&
           (bVar2 = ReferenceController__ReleaseStrongReference(this_00), bVar2)) {
          if (this_04 != (GameModel *)0x0) {
            GameModel___scalar_deleting_destructor(this_04,1);
          }
          this_02 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
          ReferenceControllerRegistry__PointerWasDestroyed(this_02,this_04);
        }
        pSVar6 = pSVar6 + 8;
        this_03 = *(SharedPtr_L_struct_GameModel_G_ **)(this + 4);
        puVar5 = puVar5 + 2;
      } while (pSVar6 != this_03 + param_1 * 8);
    }
    if (this_03 != (SharedPtr_L_struct_GameModel_G_ *)0x0) {
      SharedPtr_L_struct_GameModel_G____vector_deleting_destructor_(this_03,3);
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(uint **)(this + 4) = puStack_c;
  return bStack_5;
}





//==== 005a32d0 Clear_005a32d0 ====


/* public: virtual void  util__Darray_L_classutil__Darray_L_classutil__WeakPtr_L_struct_PropellantTankCompartment_G__G__G___Clear(void) */

void 
util__Darray_class_util__Darray_class_util__WeakPtr_struct_PropellantTankCompartment_______Clear
          (Darray_L_class_util__Darray_L_class_util__WeakPtr_L_struct_PropellantTankCompartment_G___G___G_ *this
          )

{
  undefined4 *puVar1;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *this_00;
  int iVar2;
  int iVar3;
  undefined **ppuStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  Darray_L_class_util__Darray_L_class_util__WeakPtr_L_struct_PropellantTankCompartment_G___G___G_ *pDStack_c;
  int *piStack_8;
  
  if (*(int *)(this + 8) < 1) {
    *(undefined4 *)(this + 8) = 0;
    return;
  }
  this_00 = *(Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ **)(this + 4);
  if ((this_00 != (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)0x0) &&
     (pDStack_c = this, this_00 != this_00 + *(int *)(this + 8) * 0x10)) {
    do {
      ppuStack_1c = &vftable_66;
      iStack_18 = 0;
      uStack_14 = 0;
      uStack_10 = 0;
      Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___op_assign
                (this_00,(Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&ppuStack_1c);
      ppuStack_1c = &vftable_66;
      if (iStack_18 != 0) {
        iVar2 = *(int *)(iStack_18 + -4);
        piStack_8 = (int *)(iStack_18 + -4);
        if (iVar2 != 0) {
          iVar3 = iStack_18 + 4 + iVar2 * 8;
          do {
            puVar1 = (undefined4 *)(iVar3 + -8);
            iVar3 = iVar3 + -8;
            iVar2 = iVar2 + -1;
            if ((ReferenceController *)*puVar1 != (ReferenceController *)0x0) {
              ReferenceController__ReleaseWeakReference((ReferenceController *)*puVar1);
            }
          } while (iVar2 != 0);
          iVar2 = *piStack_8;
          this = pDStack_c;
        }
        port_op_delete(piStack_8,iVar2 * 8 + 4);
      }
      this_00 = this_00 + 0x10;
    } while (this_00 !=
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             (*(int *)(this + 8) * 0x10 + *(int *)(this + 4)));
    *(undefined4 *)(this + 8) = 0;
    return;
  }
  *(undefined4 *)(this + 8) = 0;
  return;
}





//==== 005a33d0 Disable_005a33d0 ====


/* public: virtual void __thiscall EngineCompartment__Disable(void) */

void __thiscall EngineCompartment__Disable(EngineCompartment *this)

{
  this->Disabled = true;
  return;
}





//==== 005a33e0 GetCurrentCollisionShellDirection_005a33e0 ====


/* public: virtual struct util__Vec3_L_double_G_ 
   EngineCompartment__GetCurrentCollisionShellDirection(void)const  */

Vec3_L_double_G_ * 
EngineCompartment__GetCurrentCollisionShellDirection
          (EngineCompartment *this,Vec3_L_double_G_ *__return_storage_ptr__)

{
  undefined8 stack0xfffffff0;
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  uVar7 = __security_cookie ^ (uint)&stack0xfffffff0;
  dVar3 = (this->GimbalOrientation).X;
  dVar10 = (this->GimbalOrientation).Y;
  (*(uint64_t*)&(auVar1)) = (this->GimbalOrientation).Z;
  (*(uint64_t*)((char*)&(auVar1)+8)) = (this->GimbalOrientation).W;
  dVar13 = (*(uint64_t*)&(auVar1));
  dVar4 = -dVar3;
  dVar6 = -dVar10;
  dVar2 = (*(uint64_t*)((char*)&(auVar1)+8));
  dVar5 = -dVar13;
  dVar9 = dVar3 * 0.0;
  dVar14 = dVar2 * 0.0;
  dVar8 = dVar13 * 0.0;
  dVar11 = dVar10 * 0.0;
  dVar12 = ((dVar9 + dVar10) - dVar8) + dVar14;
  dVar3 = (dVar11 - dVar3) + dVar8 + dVar14;
  dVar10 = (dVar9 - dVar11) + dVar8 + dVar2;
  dVar14 = dVar14 - (dVar11 + dVar9 + dVar13);
  __return_storage_ptr__->X = ((dVar3 * dVar5 + dVar12 * dVar2) - dVar10 * dVar6) + dVar4 * dVar14;
  __return_storage_ptr__->Y = (dVar3 * dVar2 - dVar5 * dVar12) + dVar4 * dVar10 + dVar6 * dVar14;
  __return_storage_ptr__->Z = (dVar6 * dVar12 - dVar4 * dVar3) + dVar10 * dVar2 + dVar5 * dVar14;
  __security_check_cookie(uVar7 ^ (uint)&stack0xfffffff0);
  return __return_storage_ptr__;
}





//==== 005a3570 GetHeatSignature_W_005a3570 ====

/* public: virtual double __thiscall EngineCompartment__GetHeatSignature_W(void)const  */

double __thiscall EngineCompartment__GetHeatSignature_W(EngineCompartment *this)

{
  float10 fVar1;
  
  if (this->IsBurning != false) {
    fVar1 = (float10)(**(code **)(*(int *)this->_pad_0x38_14 + 0x178))();
    return (double)fVar1;
  }
  return 0.0;
}

//==== 005a35a0 IsBounceLighting ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: bool __thiscall Preferences__IsBounceLighting(void)const  */

bool __thiscall Preferences__IsBounceLighting(Preferences *this)

{
  return (this->OptionsSection__Graphics).Lighting.BounceLighting;
}





//==== 005a35b0 SetAll_005a35b0 ====


/* public: virtual void  util__Darray_L_classutil__Darray_L_classutil__WeakPtr_L_class_SpacecraftComponent_G__G__G___SetAll(class util__Darray_L_classutil__WeakPtr_L_class_SpacecraftComponent_G__G_ const &) */

void 
util__Darray_class_util__Darray_class_util__WeakPtr_class_SpacecraftComponent_______SetAll
          (Darray_L_class_util__Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___G_ *this,
          Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *param_1)

{
  ReferenceController *this_00;
  ReferenceController *this_01;
  int iVar1;
  undefined4 *puVar2;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *this_02;
  undefined4 *puVar3;
  int iStack_c;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *pDStack_8;
  
  this_02 = *(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ **)(this + 4);
  if (this_02 != this_02 + *(int *)(this + 8) * 0x10) {
    do {
      pDStack_8 = this_02;
      iStack_c = (**(code **)(*(int *)param_1 + 0xc))();
      Darray_L_class_util__WeakPtr_L_class_Body_G___G___SetSize(this_02,&iStack_c);
      iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
      if (iVar1 == 0) {
        (**(code **)(*(int *)this_02 + 0x10))();
        pDStack_8 = this_02;
      }
      else {
        Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___CheckSizeDestructive
                  ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)this_02);
        puVar3 = *(undefined4 **)(this_02 + 4);
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
        }
      }
      this_02 = pDStack_8 + 0x10;
    } while (this_02 !=
             (Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)
             (*(int *)(this + 8) * 0x10 + *(int *)(this + 4)));
  }
  return;
}





//==== 005a3670 SetSize_005a3670 ====


/* private: void  util__Darray_L_classutil__SharedPtr_L_structGameModel_G__G___SetSize(int
   const &) */

void 
util__Darray_class_util__SharedPtr_struct_GameModel_____SetSize
          (Darray_L_class_util__SharedPtr_L_struct_GameModel_G___G_ *this,int *param_1)

{
  ReferenceController *this_00;
  bool bVar1;
  int iVar2;
  ReferenceControllerRegistry *this_01;
  int iVar3;
  undefined4 *puVar4;
  GameModel *this_02;
  
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
      this_02 = (GameModel *)*puVar4;
      *puVar4 = 0;
      puVar4[1] = 0;
      if ((this_00 != (ReferenceController *)0x0) &&
         (bVar1 = ReferenceController__ReleaseStrongReference(this_00), bVar1)) {
        if (this_02 != (GameModel *)0x0) {
          GameModel___scalar_deleting_destructor(this_02,1);
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





//==== 005a3750 StaticFactory_005a3750 ====

/* public: static class util__Reflectable * __cdecl BlackBoxEngineModule__ReflectionInfoStruct_L_class_BlackBoxEngineModule_G___StaticFactory(void) */

Reflectable * __cdecl
BlackBoxEngineModule__ReflectionInfoStruct_class_BlackBoxEngineModule___StaticFactory(void)

{
  EngineModule *this;
  
  this = (EngineModule *)(uintptr_t)(port_op_new(0x210));
  if (this != (EngineModule *)0x0) {
    memset(this,0,0x210);
    EngineModule__EngineModule(this);
    this->_pad_0x0_0 = (int)&vftable_for_EditorReflectable__5;
    this->_pad_0x34_13 = (int)&vftable_for_util__RTTIBaseClass__5;
    *(undefined4 *)&this[1].Gimbal.Data.CachedObjectEndRadialMomentOfInertia_kg_m2 = 0;
    *(undefined4 *)((int)&this[1].Gimbal.Data.CachedObjectEndRadialMomentOfInertia_kg_m2 + 4) = 0;
    *(undefined4 *)&this[1].Gimbal.Data.CachedObjectMass_kg = 0;
    *(undefined4 *)((int)&this[1].Gimbal.Data.CachedObjectMass_kg + 4) = 0;
    this[1].Gimbal.Data.ExtruderModel.Pointer = (GameModel *)0x0;
    this[1].Gimbal.Data.ExtruderModel.Controller = (ReferenceController *)0x0;
    *(undefined4 *)&this[1].Gimbal.IsValidData = 0;
  *(undefined4 *)((char *)&this[1].Gimbal + 0x8c) = 0;
    *(undefined4 *)&this[1].GimbalAngle_degrees = 0;
    *(undefined4 *)((int)&this[1].GimbalAngle_degrees + 4) = 0;
    return (Reflectable *)this;
  }
  return (Reflectable *)0x0;
}

//==== 005a37e0 StaticGetMemberByIndex_005a37e0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   BlackBoxEngineModule__ReflectionInfoStruct_class_BlackBoxEngineModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
BlackBoxEngineModule__ReflectionInfoStruct_class_BlackBoxEngineModule___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_36e25c3f__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_36e25c3f__thread_safe_static_guard_0__);
    if ( cde_l2_36e25c3f__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_61847c77_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096871c = 0;
      _DAT_00968720 = 0;
      _DAT_00968724 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968728,"Unused");
      _DAT_00968734 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968738,"SteamWorkshopID");
      _DAT_00968744 = 6;
      _DAT_00968748 = 0x10;
      _DAT_0096874c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968750,"AStr");
      _DAT_0096875c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968760,"Description");
      _DAT_0096876c = 6;
      _DAT_00968770 = 0x20;
      _DAT_00968774 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968778,"AStr");
      _DAT_00968784 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968788,"EngineName");
      _DAT_00968794 = 6;
      _DAT_00968798 = 0x1b0;
      _DAT_0096879c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009687a0,"AStr");
      _DAT_009687ac = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009687b0,"ModelFileName");
      _DAT_009687bc = 6;
      _DAT_009687c0 = 0x1bc;
      _DAT_009687c4 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009687c8,"AStr");
      _DAT_009687d4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009687d8,"Dimensions");
      _DAT_009687e4 = 0xb;
      _DAT_009687e8 = 0x1c8;
      _DAT_009687ec = 0x10;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009687f0,"ModuleCylinder");
      _DAT_009687fc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968800,"Mass_kg");
      _DAT_0096880c = 4;
      _DAT_00968810 = 0x1d8;
      _DAT_00968814 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968818,"double");
      _DAT_00968824 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968828,"PrimaryComposition");
      _DAT_00968834 = 8;
      _DAT_00968838 = 0x1e0;
      _DAT_0096883c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968840,"Material");
      _DAT_0096884c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968850,"PowerConsumption_W");
      _DAT_0096885c = 4;
      _DAT_00968860 = 0x1e8;
      _DAT_00968864 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968868,"double");
      _DAT_00968874 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968878,"Propellant");
      _DAT_00968884 = 8;
      _DAT_00968888 = 0x1f0;
      _DAT_0096888c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968890,"Material");
      _DAT_0096889c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009688a0,"ExhaustVelocity_km__s");
      _DAT_009688ac = 4;
      _DAT_009688b0 = 0x1f8;
      _DAT_009688b4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009688b8,"double");
      _DAT_009688c4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009688c8,"Thrust_N");
      _DAT_009688d4 = 4;
      _DAT_009688d8 = 0x200;
      _DAT_009688dc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009688e0,"double");
      _DAT_009688ec = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009688f0,"HeatSignature_W");
      _DAT_009688fc = 4;
      _DAT_00968900 = 0x208;
      _DAT_00968904 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968908,"double");
      _DAT_00968914 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968918,"GimbalAngle_degrees");
      _DAT_00968924 = 4;
      _DAT_00968928 = 0x178;
      _DAT_0096892c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968930,"double");
      _DAT_0096893c = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_BlackBoxEngineModule__ReflectionInfoStruct_class_BlackBoxEngineModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_36e25c3f__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_61847c77_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_0096871c + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_00968720 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_00968724 + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_00968728 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_00968734)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_00968735)[iVar1];
  return __return_storage_ptr__;
}





//==== 005a3c50 StaticGetMemberCount_005a3c50 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl BlackBoxEngineModule__ReflectionInfoStruct_class_BlackBoxEngineModule___StaticGetMemberCount(void) */

int __cdecl
BlackBoxEngineModule__ReflectionInfoStruct_class_BlackBoxEngineModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_8398534f__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_8398534f__thread_safe_static_guard_0__);
    if ( cde_l2_8398534f__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_e6af31ce_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_009684e4 = 0;
      _DAT_009684e8 = 0;
      _DAT_009684ec = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009684f0,"Unused");
      _DAT_009684fc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968500,"SteamWorkshopID");
      _DAT_0096850c = 6;
      _DAT_00968510 = 0x10;
      _DAT_00968514 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968518,"AStr");
      _DAT_00968524 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968528,"Description");
      _DAT_00968534 = 6;
      _DAT_00968538 = 0x20;
      _DAT_0096853c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968540,"AStr");
      _DAT_0096854c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968550,"EngineName");
      _DAT_0096855c = 6;
      _DAT_00968560 = 0x1b0;
      _DAT_00968564 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968568,"AStr");
      _DAT_00968574 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968578,"ModelFileName");
      _DAT_00968584 = 6;
      _DAT_00968588 = 0x1bc;
      _DAT_0096858c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968590,"AStr");
      _DAT_0096859c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009685a0,"Dimensions");
      _DAT_009685ac = 0xb;
      _DAT_009685b0 = 0x1c8;
      _DAT_009685b4 = 0x10;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009685b8,"ModuleCylinder");
      _DAT_009685c4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009685c8,"Mass_kg");
      _DAT_009685d4 = 4;
      _DAT_009685d8 = 0x1d8;
      _DAT_009685dc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009685e0,"double");
      _DAT_009685ec = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009685f0,"PrimaryComposition");
      _DAT_009685fc = 8;
      _DAT_00968600 = 0x1e0;
      _DAT_00968604 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968608,"Material");
      _DAT_00968614 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968618,"PowerConsumption_W");
      _DAT_00968624 = 4;
      _DAT_00968628 = 0x1e8;
      _DAT_0096862c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968630,"double");
      _DAT_0096863c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968640,"Propellant");
      _DAT_0096864c = 8;
      _DAT_00968650 = 0x1f0;
      _DAT_00968654 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968658,"Material");
      _DAT_00968664 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968668,"ExhaustVelocity_km__s");
      _DAT_00968674 = 4;
      _DAT_00968678 = 0x1f8;
      _DAT_0096867c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968680,"double");
      _DAT_0096868c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968690,"Thrust_N");
      _DAT_0096869c = 4;
      _DAT_009686a0 = 0x200;
      _DAT_009686a4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009686a8,"double");
      _DAT_009686b4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009686b8,"HeatSignature_W");
      _DAT_009686c4 = 4;
      _DAT_009686c8 = 0x208;
      _DAT_009686cc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009686d0,"double");
      _DAT_009686dc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009686e0,"GimbalAngle_degrees");
      _DAT_009686ec = 4;
      _DAT_009686f0 = 0x178;
      _DAT_009686f4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009686f8,"double");
      _DAT_00968704 = 0;
      atexit( private__static_int_const___cdecl_BlackBoxEngineModule__ReflectionInfoStruct_class_BlackBoxEngineModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_8398534f__thread_safe_static_guard_0__);
    }
  }
  return 0xe;
}





//==== 005a4070 StaticGetReflectionInfo_005a4070 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct BlackBoxEngineModule__ReflectionInfoStruct_L_classBlackBoxEngineModule_G_ *
   __cdecl BlackBoxEngineModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_BlackBoxEngineModule_G_ * __cdecl
BlackBoxEngineModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_f4fb9b70__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_f4fb9b70__thread_safe_static_guard_0__);
    if ( cde_l2_f4fb9b70__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_dc0a8fa4_ReflectionInfo) = &vftable_179;
      _Init_thread_footer(& cde_l2_f4fb9b70__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoStruct_L_class_BlackBoxEngineModule_G_ * *)&cde_l2_dc0a8fa4_ReflectionInfo;
}





//==== 005a40d0 ToggleEnabled ====


/* public: virtual void __thiscall RefuelerCompartment__ToggleEnabled(void) */

void __thiscall RefuelerCompartment__ToggleEnabled(RefuelerCompartment *this)

{
  this->AutoRefuelActive = this->AutoRefuelActive == false;
  return;
}





//==== 005a40f0 DememoizeAll_005a40f0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall ChemicalReaction__DememoizeAll(void)const  */

void __thiscall ChemicalReaction__DememoizeAll(ChemicalReaction *this)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  undefined4 *puVar2;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar1 = (**(code **)((this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions._padfb0
                      + 0xc))();
  if (local_c < iVar1) {
    do {
      puVar2 = (undefined4 *)
               (**(code **)(this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.
                           _pad_0x0_0)(&local_c);
      (*(code *)*puVar2)();
      local_c = local_c + 1;
      iVar1 = (**(code **)((this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.
                           _pad_0x0_0 + 0xc))();
    } while (local_c < iVar1);
  }
  (**(code **)((this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions._padfb0 + 0x10))
            ();
  return;
}

//==== 005a4160 GetReflectionInfo_005a4160 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   ThermalRocketSubModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall
ThermalRocketSubModule__GetReflectionInfo(ThermalRocketSubModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_d5510392__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_d5510392__thread_safe_static_guard_0__);
    if ( cde_l2_d5510392__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_4bc1ea64_ReflectionInfo) = &vftable_183;
      _Init_thread_footer(& cde_l2_d5510392__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_4bc1ea64_ReflectionInfo;
}





//==== 005a41c0 scalar_deleting_destructor_005a41c0 ====


/* public: virtual void * __thiscall ThermalRocketSubModule:: 0 scalardeletingdestructor(unsigned
   int) */

void * __thiscall
ThermalRocketSubModule___scalar_deleting_destructor(ThermalRocketSubModule *this,uint param_1)

{
  ThermalRocketSubModule___ThermalRocketSubModule(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x140);
  }
  return this;
}





//==== 005a41f0 GetTypeName_005a41f0 ====


/* public: virtual class util__Str_L_char_G_ 
   ThermalRocketSubModule__ReflectionInfoStruct_class_ThermalRocketSubModule___GetTypeName(void)const  */

Str_L_char_G_ * 
ThermalRocketSubModule__ReflectionInfoStruct_class_ThermalRocketSubModule___GetTypeName
          (ReflectionInfoStruct_L_class_ThermalRocketSubModule_G_ *this,
          Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"ThermalRocketSubModule");
  return __return_storage_ptr__;
}





//==== 005a4210 GetMembers_005a4210 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   ThermalRocketSubModule__ReflectionInfoStruct_class_ThermalRocketSubModule___GetMembers(void)const
    */

Darray_L_struct_util__ClassMember_G_ * 
ThermalRocketSubModule__ReflectionInfoStruct_class_ThermalRocketSubModule___GetMembers__o2
          (ReflectionInfoStruct_L_class_ThermalRocketSubModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_71260906__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_71260906__thread_safe_static_guard_0__),
      cde_l2_71260906__thread_safe_static_guard_0__ == -1)) {
     cde_l2_761b86bf_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_71260906__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_761b86bf_Count);
  iVar3 = 0;
  if (0 <  cde_l2_761b86bf_Count) {
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
    } while (iVar3 <  cde_l2_761b86bf_Count);
  }
  return in_stack_00000004;
}





//==== 005a4350 GetMember_005a4350 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   ThermalRocketSubModule__ReflectionInfoStruct_class_ThermalRocketSubModule___GetMember(class
   util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
ThermalRocketSubModule__ReflectionInfoStruct_class_ThermalRocketSubModule___GetMember__o2
          (ReflectionInfoStruct_L_class_ThermalRocketSubModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_93df550e__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_93df550e__thread_safe_static_guard_0__),
      cde_l2_93df550e__thread_safe_static_guard_0__ == -1)) {
     cde_l2_5fe565e9_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_93df550e__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_5fe565e9_Count) {
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
LAB_005a43dd:
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
          if (cVar3 == '\0') goto LAB_005a43dd;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_5fe565e9_Count);
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





//==== 005a44f0 GetFactory_005a44f0 ====


/* public: virtual class util__Reflectable * (__cdecl*
   ThermalRocketSubModule__ReflectionInfoStruct_class_ThermalRocketSubModule___GetFactory(void)const
   )(void) */

_func_Reflectable_ptr * 
__thiscall ThermalRocketSubModule__ReflectionInfoStruct_class_ThermalRocketSubModule___GetFactory__o2
          (ReflectionInfoStruct_L_class_ThermalRocketSubModule_G_ *this)

{
  return StaticFactory;
}





//==== 005a4500 GetClassID_005a4500 ====


/* public: virtual unsigned long __thiscall CombustionRocketModule__GetClassID(void)const  */

ulong __thiscall CombustionRocketModule__GetClassID(CombustionRocketModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_f9d1cb29__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_f9d1cb29__thread_safe_static_guard_0__);
    if ( cde_l2_f9d1cb29__thread_safe_static_guard_0__ == -1) {
       cde_l2_df3c7a20_ID = util__GetHash("CombustionRocketModule");
      _Init_thread_footer(& cde_l2_f9d1cb29__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_df3c7a20_ID;
}





//==== 005a4560 DememoizeAll_005a4560 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall CombustionRocketModule__DememoizeAll(void)const  */

void __thiscall CombustionRocketModule__DememoizeAll(CombustionRocketModule *this)

{
  undefined8 stack0xfffffffc;
  double *pdVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar2 = (**(code **)(this->_pad_0x38_14 + 0xc))();
  if (local_c < iVar2) {
    do {
      puVar3 = (undefined4 *)(**(code **)this->_pad_0x38_14)(&local_c);
      (*(code *)*puVar3)();
      local_c = local_c + 1;
      iVar2 = (**(code **)(this->_pad_0x38_14 + 0xc))();
    } while (local_c < iVar2);
  }
  (**(code **)(this->_pad_0x38_14 + 0x10))();
  pdVar1 = &(this->ThermalRocket).ChamberWallThickness_m;
  local_c = 0;
  iVar2 = (int)(uintptr_t) (**(code **)(*(int *)&(this->ThermalRocket).ChamberWallThickness_m + 0xc))();
  if (local_c < iVar2) {
    do {
      puVar3 = (undefined4 *)(*(code *)**(undefined4 **)pdVar1)(&local_c);
      (*(code *)*puVar3)();
      local_c = local_c + 1;
      iVar2 = (**(code **)(*(int *)pdVar1 + 0xc))();
    } while (local_c < iVar2);
  }
  (**(code **)(*(int *)pdVar1 + 0x10))();
  return;
}

//==== 005a4bf0 GetShortName_005a4bf0 ====


/* public: virtual class util__Str_L_char_G_ __thiscall CombustionRocketModule__GetShortName(void)const
    */

Str_L_char_G_ * __thiscall
CombustionRocketModule__GetShortName(CombustionRocketModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  LocStr *this_00;
  Str_L_char_G_ *pSVar1;
  void *apvStack_34 [3];
  void *pvStack_28;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
  util__Str_char___Str_char(&SStack_1c,"Engine CombustionRocket");
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_34,&SStack_1c,&SStack_10);
  pSVar1 = util__LocStr__operator__o3(this_00);
  util__Str_char___Str_char(__return_storage_ptr__,pSVar1);
  if (pvStack_28 != (void *)0x0) {
    port_op_delete(pvStack_28);
    pvStack_28 = (void *)0x0;
  }
  if (apvStack_34[0] != (void *)0x0) {
    port_op_delete(apvStack_34[0]);
    apvStack_34[0] = (void *)0x0;
  }
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
    SStack_10.Data = (char *)0x0;
  }
  if (SStack_1c.Data != (char *)0x0) {
    port_op_delete(SStack_1c.Data);
  }
  return __return_storage_ptr__;
}





//==== 005a4ca0 GetIcon_005a4ca0 ====


/* public: virtual void (__cdecl*__thiscall CombustionRocketModule__GetIcon(void)const )(void) */

_func_void * __thiscall CombustionRocketModule__GetIcon(CombustionRocketModule *this)

{
  return Icons__ChemicalPropulsion;
}





//==== 005a4cb0 Instantiate_005a4cb0 ====

/* public: virtual class util__SharedPtr_L_structModuleCompartment_G_ __thiscall
   CombustionRocketModule__Instantiate(void)const  */

undefined4 * __thiscall CombustionRocketModule__Instantiate(CombustionRocketModule *this)

{
  bool bVar1;
  EngineCompartment *this_00;
  ReferenceControllerRegistry *pRVar2;
  ReferenceController *this_01;
  undefined4 *in_stack_00000004;
  EngineCompartment *pEVar3;
  
  this_00 = (EngineCompartment *)(uintptr_t)(port_op_new(0x1a0));
  if (this_00 == (EngineCompartment *)0x0) {
    this_00 = (EngineCompartment *)0x0;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
  }
  else {
    EngineCompartment__EngineCompartment(this_00);
    this_00->_pad_0x0_0 = (int)&vftable_192;
    this_00[1]._pad_0x0_0 = 0;
    this_00[1]._pad_0x4_1 = 0;
    this_00[1]._pad_0x8_2 = 0;
    this_00[1]._pad_0xc_3 = 0;
    this_00[1]._pad_0x0_0 = (int)&vftable_2;
    this_00[1]._pad_0x4_1 = 0;
    this_00[1]._pad_0x8_2 = 0;
    this_00[1]._pad_0xc_3 = 0;
    this_00[1]._pad_0x10_4 = 0;
    this_00[1]._pad_0x14_5 = 0;
    *(undefined1 *)&this_00[1]._pad_0x18_6 = 0;
    this_00[1]._pad_0x20_8 = -0x66666666;
    this_00[1]._pad_0x24_9 = 0x40059999;
  }
  pEVar3 = this_00;
  pRVar2 = util__ReferenceControllerRegistry__Get();
  this_01 = util__ReferenceControllerRegistry__Register(pRVar2,pEVar3);
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
  }
  *in_stack_00000004 = (undefined4)(uintptr_t)(this_00);
  in_stack_00000004[1] = (undefined4)(uintptr_t)(this_01);
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
    bVar1 = util__ReferenceController__ReleaseStrongReference(this_01);
    if (bVar1) {
      if (this_00 != (EngineCompartment *)0x0) {
        (**(code **)this_00->_pad_0x0_0)(1);
      }
      pRVar2 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar2,this_00);
    }
  }
  return in_stack_00000004;
}

//==== 005a4db0 GetComposition_005a4db0 ====

/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   CombustionRocketModule__GetComposition(void)const  */

Darray_L_MaterialComposition_G_ * __thiscall
CombustionRocketModule__GetComposition
          (CombustionRocketModule *this,Darray_L_MaterialComposition_G_ *__return_storage_ptr__)

{
  Material *pMVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  Darray_L_struct_MaterialConstituent_G_ *pDVar6;
  int iVar7;
  undefined4 *puVar8;
  MaterialComposition *pMVar9;
  undefined **local_1c;
  void *local_18;
  int *local_c;
  int local_8;
  
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (MaterialComposition *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  Module__GetComposition((Module *)this,__return_storage_ptr__);
  iVar5 = EngineModule__GetAttachmentCount((EngineModule *)this);
  iVar5 = iVar5 + -1;
  if (0 < iVar5) {
    local_c = &(this->ThermalRocket).Injector._pad_0x8_2;
    do {
      pDVar6 = (Darray_L_struct_MaterialConstituent_G_ *)(**(code **)(uintptr_t)(*local_c + 0x68))(&local_1c);
      if (__return_storage_ptr__->Size == 0) {
        util__Darray_L_MaterialConstituent_G___op_assign
                  ((Darray_L_MaterialConstituent_G_ *)__return_storage_ptr__,pDVar6);
      }
      else {
        iVar7 = (**(code **)(*(int *)pDVar6 + 0xc))();
        if (iVar7 != 0) {
          iVar7 = __return_storage_ptr__->Size;
          local_8 = (**(code **)(*(int *)pDVar6 + 0xc))();
          local_8 = local_8 + __return_storage_ptr__->Size;
          util__Darray_L_MaterialConstituent_G___SetSize
                    ((Darray_L_MaterialConstituent_G_ *)__return_storage_ptr__,&local_8);
          util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                    ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)__return_storage_ptr__,iVar7);
          puVar8 = *(undefined4 **)(pDVar6 + 4);
          pMVar9 = __return_storage_ptr__->Data + iVar7;
          if (pMVar9 != __return_storage_ptr__->Data + __return_storage_ptr__->Size) {
            do {
              pMVar1 = (Material *)*puVar8;
              uVar2 = puVar8[1];
              uVar3 = puVar8[2];
              uVar4 = puVar8[3];
              puVar8 = puVar8 + 4;
              pMVar9->Type = pMVar1;
              (undefined4)((*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar9) + 0x4)) = uVar2);
              *(undefined4 *)&pMVar9->Mass_kg = uVar3;
              *(undefined4 *)((int)&pMVar9->Mass_kg + 4) = uVar4;
              pMVar9 = pMVar9 + 1;
            } while (pMVar9 != __return_storage_ptr__->Data + __return_storage_ptr__->Size);
          }
        }
      }
      local_1c = (undefined **)(&vftable_75);
      if (local_18 != (void *)0x0) {
        port_op_delete(local_18);
      }
      iVar5 = iVar5 + -1;
      *(uint32_t *)&local_18 = (uint32_t)(uintptr_t)((void *)0x0);
      local_1c = (undefined **)(&vftable);
    } while (iVar5 != 0);
  }
  return __return_storage_ptr__;
}

//==== 005a4eb0 GetCrewRequired_005a4eb0 ====

/* public: virtual class util__Darray_L_structCrewJob_G_ __thiscall
   CombustionRocketModule__GetCrewRequired(void)const  */

Darray_L_CrewJob_G_ * __thiscall
CombustionRocketModule__GetCrewRequired
          (CombustionRocketModule *this,Darray_L_CrewJob_G_ *__return_storage_ptr__)

{
  int iVar1;
  
  iVar1 = EngineModule__GetAttachmentCount((EngineModule *)this);
  ThermalRocketSubModule__GetCrewRequired
            ((ThermalRocketSubModule *)&(this->ThermalRocket).Injector._pad_0x8_2,
             __return_storage_ptr__,iVar1);
  return __return_storage_ptr__;
}

//==== 005a4ee0 GetMaxMassFlowRate_kg__s_005a4ee0 ====

/* public: virtual double __thiscall CombustionRocketModule__GetMaxMassFlowRate_kg__s(void)const  */

double __thiscall CombustionRocketModule__GetMaxMassFlowRate_kg__s(CombustionRocketModule *this)

{
  int iVar1;
  double dVar2;
  
  dVar2 = ThermalRocketSubModule__GetMaxMassFlowRate_kg__s
                    ((ThermalRocketSubModule *)&(this->ThermalRocket).Injector._pad_0x8_2);
  iVar1 = EngineModule__GetAttachmentCount((EngineModule *)this);
  return (double)iVar1 * dVar2;
}

//==== 005a4f20 GetEffectiveExhaustVelocity_km__s_005a4f20 ====

/* public: virtual double __thiscall
   CombustionRocketModule__GetEffectiveExhaustVelocity_km__s(void)const  */

double __thiscall
CombustionRocketModule__GetEffectiveExhaustVelocity_km__s(CombustionRocketModule *this)

{
  ThermalRocketSubModule__GetEffectiveExhaustVelocity_km__s_Memoize();
  if ((char)((this->ThermalRocket).Injector.CachedFluidDensity_kg__m3 == '\0')) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return (double)((this->ThermalRocket).Injector.CachedNoFluid);
}

//==== 005a4f60 GetMaxThrust_N_005a4f60 ====

/* public: virtual double __thiscall CombustionRocketModule__GetMaxThrust_N(void)const  */

double __thiscall CombustionRocketModule__GetMaxThrust_N(CombustionRocketModule *this)

{
  int iVar1;
  double dVar2;
  
  dVar2 = ThermalRocketSubModule__GetMaxThrust_N();
  iVar1 = EngineModule__GetAttachmentCount((EngineModule *)this);
  return (double)iVar1 * dVar2;
}

//==== 005a4fa0 GetPropellants ====


/* public: virtual class util__Darray_L_structMaterialConstituent_G_ __thiscall
   CombustionRocketModule__GetPropellants(void)const  */

Darray_L_struct_MaterialConstituent_G_ * __thiscall
CombustionRocketModule__GetPropellants(CombustionRocketModule *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  Darray_L_struct_MaterialConstituent_G_ *pDVar4;
  Darray_L_struct_MaterialConstituent_G_ *in_stack_00000004;
  undefined **ppuStack_2c;
  void *pvStack_28;
  undefined1 uStack_1c;
  undefined **ppuStack_18;
  void *pvStack_14;
  int iStack_8;
  
  if ((char)((this->ThermalRocket).RegenerativeCooling_Percent == '\0')) {
    iVar1 = (int)((this->ThermalRocket).ChamberContractionRatio);
    iStack_8 = iVar1 + 1;
    util__Darray_struct_util__tuple2_enum_Order__Type_int_____SetSize
              ((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)
               &(this->ThermalRocket).ChamberWallThickness_m,&iStack_8);
    bVar3 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &(this->ThermalRocket).ChamberWallThickness_m,iVar1);
    if (bVar3) {
      iVar1 = *(int *)((int)&(this->ThermalRocket).ChamberWallThickness_m + 4);
      iVar2 = *(int *)&(this->ThermalRocket).ChamberContractionRatio;
      *(code **)(iVar1 + -8 + iVar2 * 8) = (long long int (*)())(CalculatePropellants_Clear);
      *(undefined4 *)(iVar1 + -4 + iVar2 * 8) = 0;
    }
    pDVar4 = (Darray_L_struct_MaterialConstituent_G_ *)CalculatePropellants_MemoizedFunction(this);
    util__Darray_struct_MaterialConstituent___Darray_struct_MaterialConstituent
              ((Darray_L_struct_MaterialConstituent_G_ *)&ppuStack_2c,pDVar4);
    uStack_1c = 1;
    util__Darray_struct_MaterialConstituent___operator
              ((Darray_L_struct_MaterialConstituent_G_ *)&(this->ThermalRocket).NozzleExpansionRatio,
               (Darray_L_struct_MaterialConstituent_G_ *)&ppuStack_2c);
    *(undefined1 *)&(this->ThermalRocket).RegenerativeCooling_Percent = uStack_1c;
    ppuStack_2c = (undefined **)(&vftable_15);
    if (pvStack_28 != (void *)0x0) {
      port_op_delete(pvStack_28);
    }
    pvStack_28 = (void *)0x0;
    ppuStack_2c = (undefined **)(&vftable);
    ppuStack_18 = (undefined **)(&vftable_15);
    if (pvStack_14 != (void *)0x0) {
      port_op_delete(pvStack_14);
    }
    pvStack_14 = (void *)0x0;
    ppuStack_18 = (undefined **)(&vftable);
  }
  if ((char)((this->ThermalRocket).RegenerativeCooling_Percent == '\0')){
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  util__Darray_struct_MaterialConstituent___Darray_struct_MaterialConstituent
            (in_stack_00000004,
             (Darray_L_struct_MaterialConstituent_G_ *)&(this->ThermalRocket).NozzleExpansionRatio);
  return in_stack_00000004;
}





//==== 005a50c0 GetStructuralMaterial_005a50c0 ====

/* public: virtual class Material const * __thiscall
   CombustionRocketModule__GetStructuralMaterial(void)const  */

Material * __thiscall CombustionRocketModule__GetStructuralMaterial(CombustionRocketModule *this)

{
  return (Material *)this[1]._pad_0x0_0;
}

//==== 005a50d0 GetStructuralThickness_m_005a50d0 ====

/* public: virtual double __thiscall CombustionRocketModule__GetStructuralThickness_m(void)const  */

double __thiscall CombustionRocketModule__GetStructuralThickness_m(CombustionRocketModule *this)

{
  return *(double *)&this[1]._pad_0x10_4;
}

//==== 005a50e0 GetEngineDimensions_m_005a50e0 ====

/* public: virtual struct util__Cylinder_L_double_G_ 
   CombustionRocketModule__GetEngineDimensions_m(void)const  */

Cylinder_L_double_G_ * 
CombustionRocketModule__GetEngineDimensions_m
          (CombustionRocketModule *this,Cylinder_L_double_G_ *__return_storage_ptr__)

{
  ThermalRocketSubModule__GetEngineDimensions_m
            ((ThermalRocketSubModule *)&(this->ThermalRocket).Injector._pad_0x8_2,
             __return_storage_ptr__);
  return __return_storage_ptr__;
}

//==== 005a5100 GetEngineInitialRadius_m ====

/* public: virtual double __thiscall CombustionRocketModule__GetEngineInitialRadius_m(void)const  */

double __thiscall CombustionRocketModule__GetEngineInitialRadius_m(CombustionRocketModule *this)

{
  Cylinder_L_double_G_ *pCVar1;
  Cylinder_L_double_G_ CStack_14;
  
  pCVar1 = TurbopumpSubModule__GetTurbopumpCylinder_m
                     ((TurbopumpSubModule *)&this[1]._pad_0x38_14,&CStack_14);
  return pCVar1->Radius;
}

//==== 005a5110 GetEngineEndMomentOfInertia_kg_m2 ====

/* public: virtual double __thiscall
   CombustionRocketModule__GetEngineEndMomentOfInertia_kg_m2(void)const  */

double __thiscall
CombustionRocketModule__GetEngineEndMomentOfInertia_kg_m2(CombustionRocketModule *this)

{
  int *this_00;
  double dVar1;
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  double dStack_24;
  double dStack_1c;
  double dStack_14;
  double dStack_c;
  
  this_00 = &(this->ThermalRocket).Injector._pad_0x8_2;
  dStack_c = (*(double *)&this[1]._pad_0x8_2 * 3.141592653589793 * *(double *)&this[1]._pad_0x8_2 *
             *(double *)&this[1]._pad_0x20_8) / 3.141592653589793;
  util__Sqrt((Maybe_L_double_G_ *)auStack_34,&dStack_c);
  if (auStack_34[8] == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dStack_c = (*(double *)&this[1]._pad_0x8_2 * 3.141592653589793 * *(double *)&this[1]._pad_0x8_2 *
             *(double *)&this[1]._pad_0x18_6) / 3.141592653589793;
  util__Sqrt((Maybe_L_double_G_ *)auStack_44,&dStack_c);
  if (auStack_44[8] == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if ((double)(*(uint64_t*)&(auStack_44)) <= (double)(*(uint64_t*)&(auStack_34))) {
    (*(uint64_t*)&(auStack_44)) = (*(uint64_t*)&(auStack_34));
  }
  dStack_c = *(double *)&this[1]._pad_0x88_34;
  (*(uint64_t*)((char*)&(auStack_34)+8)) = (*(uint64_t*)&(auStack_44));
  dVar1 = ThermalRocketSubModule__GetNozzleLength_m((ThermalRocketSubModule *)this_00);
  dStack_c = dVar1 + dStack_c;
  (*(uint64_t*)((char*)&(auStack_44)+8)) = TurbopumpSubModule__GetLength_m((TurbopumpSubModule *)&this[1]._pad_0x38_14);
  (*(uint64_t*)((char*)&(auStack_44)+8)) = (double)(*(uint64_t*)((char*)&(auStack_44)+8)) + dStack_c * 0.5;
  dStack_14 = *(double *)&this[1]._pad_0x10_4;
  dVar1 = ThermalRocketSubModule__GetPrimarySurfaceArea_m2((ThermalRocketSubModule *)this_00);
  dStack_1c = *(double *)(this[1]._pad_0x0_0 + 0x30) * dVar1 * dStack_14;
  dStack_24 = *(double *)&this[1]._pad_0x10_4;
  dStack_14 = dStack_24;
  dVar1 = ThermalRocketSubModule__GetPrimarySurfaceArea_m2((ThermalRocketSubModule *)this_00);
  dStack_14 = *(double *)(this[1]._pad_0x0_0 + 0x30) * dVar1 * dStack_14;
  dVar1 = Mechanics__ThickCylindericalShellRadialMomentOfInertia_kg_m2
                    (dStack_c,(double)(*(uint64_t*)((char*)&(auStack_34)+8)),dStack_24 + (double)(*(uint64_t*)((char*)&(auStack_34)+8)),
                     dStack_1c);
  (*(uint64_t*)((char*)&(auStack_44)+8)) = dVar1 + (double)(*(uint64_t*)((char*)&(auStack_44)+8)) * (double)(*(uint64_t*)((char*)&(auStack_44)+8)) * dStack_14;
  dVar1 = TurbopumpSubModule__GetEndRadialMomentOfInertia_kg_m2
                    ((TurbopumpSubModule *)&this[1]._pad_0x38_14);
  return dVar1 + (double)(*(uint64_t*)((char*)&(auStack_44)+8));
}

//==== 005a5120 GetEngineMass_kg_005a5120 ====

/* public: virtual double __thiscall CombustionRocketModule__GetEngineMass_kg(void)const  */

double __thiscall CombustionRocketModule__GetEngineMass_kg(CombustionRocketModule *this)

{
  int iVar1;
  double dVar2;
  
  dVar2 = ThermalRocketSubModule__GetTotalMass_kg
                    ((ThermalRocketSubModule *)&(this->ThermalRocket).Injector._pad_0x8_2);
  iVar1 = EngineModule__GetAttachmentCount((EngineModule *)this);
  return (double)iVar1 * dVar2;
}

//==== 005a5160 GetHeatSignature_W_005a5160 ====

/* public: virtual double __thiscall CombustionRocketModule__GetHeatSignature_W(void)const  */

double __thiscall CombustionRocketModule__GetHeatSignature_W(CombustionRocketModule *this)

{
  int iVar1;
  double dVar2;
  
  dVar2 = ThermalRocketSubModule__GetHeatSignature_W
                    ((ThermalRocketSubModule *)&(this->ThermalRocket).Injector._pad_0x8_2);
  iVar1 = EngineModule__GetAttachmentCount((EngineModule *)this);
  return (double)iVar1 * dVar2;
}

//==== 005a51a0 GetSteadyStateTemperature_K ====

/* public: virtual double __thiscall CombustionRocketModule__GetSteadyStateTemperature_K(void)const
    */

double __thiscall CombustionRocketModule__GetSteadyStateTemperature_K(CombustionRocketModule *this)

{
  int *this_00;
  float10 fVar1;
  double dVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  this_00 = &(this->ThermalRocket).Injector._pad_0x8_2;
  uVar4 = 0x3e45798ee2308c3a;
  uVar3 = 0x14;
  dVar2 = ThermalRocketSubModule__GetGasWallTemperature_K((ThermalRocketSubModule *)this_00);
  fVar1 = (float10)FUN_005c2210(this_00,0,dVar2,uVar3,uVar4);
  return (double)fVar1;
}

//==== 005a51b0 GetInfoBoxes_005a51b0 ====


/* public: virtual class util__Darray_L_structInfoBox_G_ __thiscall
   CombustionRocketModule__GetInfoBoxes(void)const  */

void __thiscall CombustionRocketModule__GetInfoBoxes(CombustionRocketModule *this)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  uint uVar2;
  bool bVar3;
  LocStr *this_00;
  Str_L_char_G_ *pSVar4;
  Darray_L_struct_InfoBox_G_ *in_stack_00000004;
  void *apvStack_a8 [3];
  void *pvStack_9c;
  Str_L_char_G_ SStack_90;
  CombustionRocketModule *pCStack_84;
  code *pcStack_80;
  Str_L_char_G_ SStack_7c;
  code *pcStack_70;
  CombustionRocketModule *pCStack_6c;
  code *pcStack_68;
  Str_L_char_G_ SStack_64;
  undefined4 uStack_58;
  undefined4 uStack_54;
  Str_L_char_G_ SStack_50;
  undefined8 uStack_44;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  Str_L_char_G_ SStack_30;
  Str_L_char_G_ SStack_24;
  CombustionRocketModule *pCStack_18;
  code *pcStack_14;
  uint uStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  EngineModule__GetInfoBoxes((EngineModule *)this);
  util__Str_char___Str_char(&SStack_90,"InfoBox BipropellantMassRatio Tooltip");
  pcStack_14 = (long long int (*)())(util__DelegateFactory_class_CombustionRocketModule_bool___MethodCallerConst__public__bool___thiscall_CombustionRocketModule__IsBipropellant_void_const__0);
  uStack_10 = uStack_10 & 0xffffff00;
  SStack_24.Data = (char *)0x0;
  SStack_24.Capacity = 0;
  SStack_24.Length = 0;
  pCStack_18 = this;
  this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_a8,&SStack_90,&SStack_24);
  pSVar4 = util__LocStr__operator__o3(this_00);
  uStack_38 = 0;
  uStack_34 = 0;
  util__Str_char___Str_char(&SStack_30,pSVar4);
  pcStack_80 = (long long int (*)())(util__DelegateFactory_class_CombustionRocketModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_CombustionRocketModule__GetBipropellantInfo_void_const__0);
  SStack_7c.Data = (char *)0x0;
  SStack_7c.Capacity = 0;
  SStack_7c.Length = 0;
  pcStack_70 = (long long int (*)())(Icons__PropellantTank);
  pcStack_68 = (long long int (*)())(util__DelegateFactory_class_CombustionRocketModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_CombustionRocketModule__GetBipropellantInfo_void_const__0);
  pCStack_84 = this;
  pCStack_6c = this;
  util__Str_char___Str_char(&SStack_64,&SStack_7c);
  uStack_58 = uStack_38;
  uStack_54 = uStack_34;
  util__Str_char___Str_char(&SStack_50,&SStack_30);
  uVar2 = uStack_10;
  uStack_44 = CONCAT44(pcStack_14,pCStack_18);
  uStack_3c = uStack_10;
  if (SStack_30.Data != (char *)0x0) {
    port_op_delete(SStack_30.Data);
  }
  iVar1 = *(int *)(in_stack_00000004 + 8);
  iStack_c = iVar1 + 1;
  util__Darray_struct_InfoBox___SetSize(in_stack_00000004,&iStack_c);
  bVar3 = util__Darray_struct_InfoBox___CheckSize(in_stack_00000004,iVar1);
  if (bVar3) {
    iVar1 = *(int *)(in_stack_00000004 + 4) + *(int *)(in_stack_00000004 + 8) * 0x38;
    *(code **)(iVar1 + -0x38) = pcStack_70;
    *(CombustionRocketModule **)(iVar1 + -0x34) = pCStack_6c;
    *(code **)(iVar1 + -0x30) = pcStack_68;
    util__Str_char___operator__o8((Str_L_char_G_ *)(iVar1 + -0x2c),&SStack_64);
    *(undefined4 *)(iVar1 + -0x20) = uStack_58;
    *(undefined4 *)(iVar1 + -0x1c) = uStack_54;
    util__Str_char___operator__o8((Str_L_char_G_ *)(iVar1 + -0x18),&SStack_50);
    *(ulonglong *)(iVar1 + -0xc) = CONCAT44(pcStack_14,pCStack_18);
    *(uint *)(iVar1 + -4) = uVar2;
  }
  if (SStack_50.Data != (char *)0x0) {
    port_op_delete(SStack_50.Data);
  }
  if (SStack_64.Data != (char *)0x0) {
    port_op_delete(SStack_64.Data);
  }
  if (pvStack_9c != (void *)0x0) {
    port_op_delete(pvStack_9c);
    pvStack_9c = (void *)0x0;
  }
  if (apvStack_a8[0] != (void *)0x0) {
    port_op_delete(apvStack_a8[0]);
    apvStack_a8[0] = (void *)0x0;
  }
  if (SStack_24.Data != (char *)0x0) {
    port_op_delete(SStack_24.Data);
    SStack_24.Data = (char *)0x0;
  }
  if (SStack_90.Data != (char *)0x0) {
    port_op_delete(SStack_90.Data);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 005a53c0 GetAdvancedInfo_005a53c0 ====


/* public: virtual class util__Str_L_char_G_ 
   CombustionRocketModule__GetAdvancedInfo(void)const  */

Str_L_char_G_ * 
CombustionRocketModule__GetAdvancedInfo
          (CombustionRocketModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  EngineModule__GetAdvancedInfo((EngineModule *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}





//==== 005a53e0 GenerateDesignUI ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual struct UIWidget * __thiscall CombustionRocketModule__GenerateDesignUI(class
   Manager *)const  */

UIWidget * __thiscall
CombustionRocketModule__GenerateDesignUI(CombustionRocketModule *this,Manager *param_1)

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
    fVar12 = 8.295348e-39;
    UIAttributes__UIAttributes(&local_164,param_1);
    local_1c = 0;
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
    this_00->_pad_0x0_0 = (int)&vftable_193;
    this_00[1]._pad_0x0_0 = (int)this;
    UIAttributes___UIAttributes(&local_164);
  }
  return (UIWidget *)0x0;
}

//==== 005a5490 BuildModels_005a5490 ====

/* public: virtual void __thiscall CombustionRocketModule__BuildModels(void) */

void __thiscall CombustionRocketModule__BuildModels(CombustionRocketModule *this)

{
  undefined8 stack0xfffffee0;
  undefined8 stack0xffffff10;
  undefined8 stack0xffffff58;
  ReferenceController *this_00;
  Maybe_L_TurretSubModule_G_ MVar1;
  undefined **ppuVar2;
  Str_L_char_G_ in_stack_fffffee0;
  undefined8 uVar3;
  undefined4 in_stack_fffffef4;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 in_stack_ffffff08;
  undefined **ppuVar8;
  Str_L_char_G_ in_stack_ffffff10;
  int iVar9;
  undefined4 in_stack_ffffff20;
  undefined8 uVar10;
  int iVar11;
  undefined4 in_stack_ffffff30;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 uVar15;
  undefined7 in_stack_ffffff4d;
  undefined **ppuVar16;
  Str_L_char_G_ in_stack_ffffff58;
  int iVar17;
  undefined4 in_stack_ffffff68;
  double dVar18;
  
  EngineModule__GetStartingHeight_m((EngineModule *)this);
  util__Str_char___Str_char((Str_L_char_G_ *)&stack0xfffffee0,(Str_L_char_G_ *)&this->_pad_0x74_29);
  ppuVar2 = &vftable_5;
  (*(uint32_t*)&(uVar3)) = this->_pad_0x80_32;
  (*(uint32_t*)((char*)&(uVar3)+4)) = this->_pad_0x84_33;
  uVar4 = CONCAT31((int3)((uint)in_stack_fffffef4 >> 8),(char)this->_pad_0x88_34);
  iVar5 = this->_pad_0x8c_35;
  (*(uint32_t*)&(uVar6)) = this->_pad_0x90_36;
  (*(uint32_t*)((char*)&(uVar6)+4)) = this->_pad_0x94_37;
  iVar7 = this->_pad_0x98_38;
  util__Str_char___Str_char((Str_L_char_G_ *)&stack0xffffff10,(Str_L_char_G_ *)&this->_pad_0xa4_41);
  ppuVar8 = &vftable_186;
  iVar9 = this->_pad_0xb0_44;
  (*(uint32_t*)&(uVar10)) = this->_pad_0xb8_46;
  (*(uint32_t*)((char*)&(uVar10)+4)) = this->_pad_0xbc_47;
  iVar11 = this->_pad_0xc0_48;
  (*(uint32_t*)&(uVar12)) = this->_pad_0xc8_50;
  (*(uint32_t*)((char*)&(uVar12)+4)) = this->_pad_0xcc_51;
  (*(uint32_t*)&(uVar13)) = this->_pad_0xd0_52;
  (*(uint32_t*)((char*)&(uVar13)+4)) = this->_pad_0xd4_53;
  (*(uint32_t*)&(uVar14)) = this->_pad_0xd8_54;
  (*(uint32_t*)((char*)&(uVar14)+4)) = this->_pad_0xdc_55;
  uVar15 = (undefined1)this->_pad_0xe0_56;
  util__Str_char___Str_char((Str_L_char_G_ *)&stack0xffffff58,(Str_L_char_G_ *)&this->_pad_0xec_59);
  ppuVar16 = &vftable_188;
  iVar17 = (this->CombustionRocketModuleMemoizationHandlerInstance).ResetFunctions.Size;
  dVar18 = cde_ptr_as_double((void *)(uintptr_t)*(uint32_t *)&((this->CalculatePropellants_MemoizedValue).Data));
  this_00 = *(ReferenceController **)
             ((int)&(this->ThermalRocket).GetGasExpansionPlume_MemoizedValue.Data.StartTemperature_K
             + 4);
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
  }
  MVar1.Data._pad_0x4_1 = (int)in_stack_fffffee0.Data;
  MVar1.Data._pad_0x8_2 = in_stack_fffffee0.Capacity;
  (*(uint32_t *)((char *)&(MVar1.Data) + 12)) = in_stack_fffffee0.Length;
  MVar1.Data._pad_0x0_0 = (int)ppuVar2;
  MVar1.Data.InnerRadius_m = (double)uVar3;
  (*(uint32_t *)((char *)&(MVar1.Data) + 24)) = uVar4;
  MVar1.Data.ArmorComposition = (Material *)iVar5;
  MVar1.Data.ArmorThickness_m = (double)uVar6;
  MVar1.Data.MomentumWheels._pad_0x0_0 = iVar7;
  MVar1.Data.MomentumWheels._pad_0x4_1 = in_stack_ffffff08;
  MVar1.Data.MomentumWheels._pad_0x8_2 = (int)ppuVar8;
  MVar1.Data.MomentumWheels._pad_0xc_3 = (int)in_stack_ffffff10.Data;
  MVar1.Data.MomentumWheels.Composition = (Material *)in_stack_ffffff10.Capacity;
  (*(uint32_t *)((char *)&(MVar1.Data.MomentumWheels) + 20)) = in_stack_ffffff10.Length;
  MVar1.Data.MomentumWheels.RotationalSpeed_RPM = iVar9;
  (*(uint32_t *)((char *)&(MVar1.Data.MomentumWheels.RotationalSpeed_RPM) + 4)) = in_stack_ffffff20;
  (*(uint64_t *)((char *)&(MVar1.Data.MomentumWheels) + 32)) = uVar10;
  MVar1.Data.MomentumWheels.CachedRadius_m = iVar11;
  (*(uint32_t *)((char *)&(MVar1.Data.MomentumWheels.CachedRadius_m) + 4)) = in_stack_ffffff30;
  MVar1.Data.MomentumWheels.CachedHeight_m = (double)uVar12;
  (*(uint64_t *)((char *)&(MVar1.Data.MomentumWheels) + 56)) = uVar13;
  MVar1.Data.CachedObjectRadius_m = (double)uVar14;
  MVar1.Data.CachedObjectEndRadialMomentOfInertia_kg_m2 = uVar15;
  (*(uint56_t *)((char *)&(MVar1.Data.CachedObjectEndRadialMomentOfInertia_kg_m2) + 1)) = in_stack_ffffff4d;
  MVar1.Data.CachedObjectMass_kg = *(double *)(void *)&ppuVar16;
  (*(uint32_t *)((char *)&(MVar1.Data) + 124)) = *(uint32_t *)&(in_stack_ffffff58);
  (*(uint32_t *)((char *)&(MVar1) + 136)) = iVar17;
  (*(uint32_t *)((char *)&(MVar1) + 140)) = in_stack_ffffff68;
  ThermalRocketSubModule__BuildModels
            ((ThermalRocketSubModule *)&(this->ThermalRocket).Injector._pad_0x8_2,
             (Darray_L_util__SharedPtr_L_GameModel_G___G_ *)&this->_pad_0x58_22,
             (Darray_L_util__WeakPtr_L_GameModel_G___G_ *)
             &(this->ThermalRocket).GetGasExpansionPlume_MemoizedValue.IsValidData,
             (Darray_L_util__WeakPtr_L_GameModel_G___G_ *)
             &(this->ThermalRocket).GetExhaustPlumeModelRatio_MemoizedValue.IsValidData,
             (WeakPtr_L_GameModel_G_ *)&(this->ThermalRocket).ThroatRadius_m,MVar1,dVar18);
  return;
}

//==== 005a56c0 GetExhaustPlumeModelRatio ====

/* public: virtual double __thiscall CombustionRocketModule__GetExhaustPlumeModelRatio(void)const
    */

double __thiscall CombustionRocketModule__GetExhaustPlumeModelRatio(CombustionRocketModule *this)

{
  ThermalRocketSubModule__GetExhaustPlumeModelRatio_Memoize();
  if ((char)(this->ThermalRocket).CachedProducts.Capacity == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return cde_ptr_as_double((void *)((this->ThermalRocket).CachedProducts.Data));
}

//==== 005a5700 SetCachedData ====

/* public: virtual void __thiscall CombustionRocketModule__SetCachedData(class DataParser *) */

void __thiscall
CombustionRocketModule__SetCachedData(CombustionRocketModule *this,DataParser *param_1)

{
  undefined4 uVar1;
  Material *pMVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  Darray_L_MaterialConstituent_G_ *pDVar6;
  double dVar7;
  undefined ***pppuVar8;
  undefined **local_28;
  void *local_24;
  undefined1 local_18 [16];
  undefined4 local_8;
  
  EngineModule__SetCachedData((EngineModule *)this,param_1);
  param_1 = (DataParser *)0x0;
  puVar4 = (undefined4 *)
           (*(code *)**(undefined4 **)
                       (*(int *)((int)&(this->ThermalRocket).RegenerativeCooling_Percent + 4) + 0x20
                       ))(&param_1);
  local_8 = 0;
  pMVar2 = (Material *)*puVar4;
  piVar5 = (int *)(*(code *)**(undefined4 **)
                              (*(int *)((int)&(this->ThermalRocket).RegenerativeCooling_Percent + 4)
                              + 0x20))(&local_8);
  pppuVar8 = &local_28;
  iVar3 = *piVar5;
  (*(uint64_t*)((char*)&(local_18)+8)) =
       *(double *)(*(int *)((int)&(this->ThermalRocket).RegenerativeCooling_Percent + 4) + 0x70) /
       *(double *)&this[1]._pad_0x18_6;
  pDVar6 = (Darray_L_MaterialConstituent_G_ *)(**(code **)(this->_pad_0x0_0 + 0x170))();
  ThermalRocketSubModule__PassThroughCachedData
            ((ThermalRocketSubModule *)&(this->ThermalRocket).Injector._pad_0x8_2,
             (double)(*(uint64_t*)((char*)&(local_18)+8)),*(double *)(iVar3 + 0x98),pMVar2,pDVar6);
  local_28 = (undefined **)(&vftable_15);
  if (local_24 != (void *)0x0) {
    port_op_delete(local_24);
  }
  dVar7 = ChemicalReaction__GetNonStoichiometricAdiabaticFlameTemperature_K
                    (*(ChemicalReaction **)
                      ((int)&(this->ThermalRocket).RegenerativeCooling_Percent + 4),
                     (*(double *)&((this->ThermalRocket).Injector)));
  ThermalRocketSubModule__PassThroughCachedData2
            ((ThermalRocketSubModule *)&(this->ThermalRocket).Injector._pad_0x8_2,dVar7);
  uVar1 = (this->ThermalRocket).Injector._pad_0x4_1;
  ChemicalReaction__GetNonStoichiometricProducts
            (*(ChemicalReaction **)((int)&(this->ThermalRocket).RegenerativeCooling_Percent + 4),
             (Darray_L_MaterialConstituent_G_ *)local_18,(double)CONCAT44(pppuVar8,uVar1));
  ThermalRocketSubModule__PassThroughCachedData3
            ((ThermalRocketSubModule *)&(this->ThermalRocket).Injector._pad_0x8_2,
             (Darray_L_MaterialConstituent_G_ *)local_18);
  (*(uint32_t*)&(local_18)) = (uint32_t)(uintptr_t)(&vftable_15);
  if ((MaterialConstituent *)(*(uint32_t*)((char*)&(local_18)+4)) != (MaterialConstituent *)0x0) {
    port_op_delete((void *)(*(uint32_t*)((char*)&(local_18)+4)));
  }
  return;
}

//==== 005a5830 GetDecimalPropertyBoundaries_005a5830 ====


/* public: virtual class util__Maybe_L_structutil__Range_L_double_G__G_ 
   CombustionRocketModule__GetDecimalPropertyBoundaries(struct util__ClassMember const &)const  */

void 
CombustionRocketModule__GetDecimalPropertyBoundaries
          (CombustionRocketModule *this,ClassMember *param_1)

{
  char *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 *in_stack_00000008;
  undefined4 uStack_8;
  
  if ((int)in_stack_00000008[1] < 1) {
    puVar3 = (undefined1 *)(&cde_l2_0b2b1c9f_NullString);
  }
  else {
    puVar3 = (undefined1 *)*in_stack_00000008;
  }
  for (pcVar1 = "StoichiometricMixtureRatio";
      (pcVar1[(int)(puVar3 + -0x925d60)] != '\0' || (*pcVar1 != '\0')); pcVar1 = pcVar1 + 1) {
    if (pcVar1[(int)(puVar3 + -0x925d60)] != *pcVar1) {
      if ((int)in_stack_00000008[1] < 1) {
        puVar3 = (undefined1 *)(&cde_l2_0b2b1c9f_NullString);
      }
      else {
        puVar3 = (undefined1 *)*in_stack_00000008;
      }
      for (pcVar1 = "GimbalAngle_degrees";
          (pcVar1[(int)(puVar3 + -0x925940)] != '\0' || (*pcVar1 != '\0')); pcVar1 = pcVar1 + 1) {
        if (pcVar1[(int)(puVar3 + -0x925940)] != *pcVar1) {
          (param_1->Name).Data = (char *)0x0;
          (param_1->Name).Capacity = 0;
          (param_1->Name).Length = 0;
          *(undefined4 *)&param_1->Type = 0;
          *(undefined1 *)&param_1->Offset = 0;
          return;
        }
      }
      uStack_8 = 0;
      if ((char)((this->ThermalRocket).GetGasExpansionPlume_MemoizedValue.Data.
                    ExhaustVelocity_km__s != '\0') ) {
        uStack_8 = 0x40568000;
      }
      (param_1->Name).Data = (char *)0x0;
      (param_1->Name).Capacity = 0;
      (param_1->Name).Length = 0;
      *(undefined4 *)&param_1->Type = uStack_8;
      *(undefined1 *)&param_1->Offset = 1;
      return;
    }
  }
  iVar2 = (**(code **)(*(int *)(*(int *)((int)&(this->ThermalRocket).RegenerativeCooling_Percent + 4
                                        ) + 0x20) + 0xc))();
  if (iVar2 == 2) {
    pcVar1 = (char *)0x9999999a;
    iVar2 = 0x3fb99999;
    uVar4 = 0x40240000;
  }
  else {
    pcVar1 = (char *)0x0;
    iVar2 = 0;
    uVar4 = 0;
  }
  (param_1->Name).Data = pcVar1;
  (param_1->Name).Capacity = iVar2;
  (param_1->Name).Length = 0;
  *(undefined4 *)&param_1->Type = uVar4;
  *(undefined1 *)&param_1->Offset = 1;
  return;
}





//==== 005a5920 GetPointerPropertyChoices_005a5920 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   CombustionRocketModule__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

void 
CombustionRocketModule__GetPointerPropertyChoices
          (CombustionRocketModule *this,ClassMember *param_1,SerializationManagerInterface *param_2)

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
  int iStack_10;
  char acStack_c [4];
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((*(int *)&(param_2[1])) < 1) {
    SVar6 = (*(SerializationManagerInterface *)
            &cde_l2_0b2b1c9f_NullString);
  }
  else {
    SVar6 = *param_2;
  }
  for (pcVar3 = "Reaction";
      (cVar1 = pcVar3[(int)((*(int *)&(SVar6)) + -0x925d7c)], cVar1 != '\0' || (*pcVar3 != '\0'));
      pcVar3 = pcVar3 + 1) {
    if (cVar1 != *pcVar3) {
      (param_1->Name).Data =
           (char *)&vftable_85;
      (param_1->Name).Capacity = 0;
      (param_1->Name).Length = 0;
      *(undefined4 *)&param_1->Type = 0;
LAB_005a5aeb:
      __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  acStack_c[0] = cVar1;
  util__Str_char___Str_char(&SStack_54,"ChemicalReaction");
  (**(code **)(uintptr_t)(*in_stack_0000000c + 4))(&ppuStack_34,&SStack_54,0);
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
  iStack_10 = 0;
  iVar4 = (*(code *)ppuStack_34[3])();
  if (iStack_10 < iVar4) {
    do {
      puVar5 = (undefined4 *)(*(code *)*ppuStack_34)(&iStack_10);
      bVar2 = ChemicalReaction__IsPropulsiveReaction((ChemicalReaction *)*puVar5);
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
      iStack_10 = iStack_10 + 1;
      iVar4 = (*(code *)ppuStack_34[3])();
    } while (iStack_10 < iVar4);
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
    __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  goto LAB_005a5aeb;
}





//==== 005a5b00 GetReflectionInfo_005a5b00 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   CombustionRocketModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall
CombustionRocketModule__GetReflectionInfo(CombustionRocketModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_218958c3__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_218958c3__thread_safe_static_guard_0__);
    if ( cde_l2_218958c3__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_44aa4e3c_ReflectionInfo) = &vftable_184;
      _Init_thread_footer(& cde_l2_218958c3__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_44aa4e3c_ReflectionInfo;
}





//==== 005a5b10 scalar_deleting_destructor_005a5b10 ====

/* public: virtual void * __thiscall CombustionRocketModule:: 0 scalardeletingdestructor(unsigned
   int) */

void * __thiscall
CombustionRocketModule___scalar_deleting_destructor(CombustionRocketModule *this,uint param_1)

{
  void *pvVar1;
  
  ThermalRocketSubModule___ThermalRocketSubModule((ThermalRocketSubModule *)&(this->ThermalRocket).Injector._pad_0x8_2);
  pvVar1 = *(void **)((int)&(this->ThermalRocket).NozzleExpansionRatio + 4);
  (this->ThermalRocket).NozzleExpansionRatio = cde_ptr_as_double((void *)&vftable_15);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
  }
  *(undefined4 *)((int)&(this->ThermalRocket).NozzleExpansionRatio + 4) = 0;
  (this->ThermalRocket).NozzleExpansionRatio = cde_ptr_as_double((void *)&vftable);
  pvVar1 = *(void **)((int)&(this->ThermalRocket).ChamberWallThickness_m + 4);
*(uint32_t *)&((this->ThermalRocket).ChamberWallThickness_m) = (uint32_t)(uintptr_t)(&vftable_109);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
  }
  *(undefined4 *)((int)&(this->ThermalRocket).ChamberWallThickness_m + 4) = 0;
  (this->ThermalRocket).ChamberWallThickness_m = cde_ptr_as_double((void *)&vftable);
  EngineModule___EngineModule((EngineModule *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,800);
  }
  return this;
}

//==== 005a5bb0 GetTypeName_005a5bb0 ====


/* public: virtual class util__Str_L_char_G_ 
   CombustionRocketModule__ReflectionInfoStruct_class_CombustionRocketModule___GetTypeName(void)const  */

Str_L_char_G_ * 
CombustionRocketModule__ReflectionInfoStruct_class_CombustionRocketModule___GetTypeName
          (ReflectionInfoStruct_L_class_CombustionRocketModule_G_ *this,
          Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"CombustionRocketModule");
  return __return_storage_ptr__;
}





//==== 005a5bd0 GetMembers_005a5bd0 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   CombustionRocketModule__ReflectionInfoStruct_class_CombustionRocketModule___GetMembers(void)const
    */

Darray_L_struct_util__ClassMember_G_ * 
CombustionRocketModule__ReflectionInfoStruct_class_CombustionRocketModule___GetMembers__o2
          (ReflectionInfoStruct_L_class_CombustionRocketModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_f6687498__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_f6687498__thread_safe_static_guard_0__),
      cde_l2_f6687498__thread_safe_static_guard_0__ == -1)) {
     cde_l2_f87c073d_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_f6687498__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_f87c073d_Count);
  iVar3 = 0;
  if (0 <  cde_l2_f87c073d_Count) {
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
    } while (iVar3 <  cde_l2_f87c073d_Count);
  }
  return in_stack_00000004;
}





//==== 005a5d10 GetMember_005a5d10 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   CombustionRocketModule__ReflectionInfoStruct_class_CombustionRocketModule___GetMember(class
   util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
CombustionRocketModule__ReflectionInfoStruct_class_CombustionRocketModule___GetMember__o2
          (ReflectionInfoStruct_L_class_CombustionRocketModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_3269eac9__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_3269eac9__thread_safe_static_guard_0__),
      cde_l2_3269eac9__thread_safe_static_guard_0__ == -1)) {
     cde_l2_fc156a0c_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_3269eac9__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_fc156a0c_Count) {
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
LAB_005a5d9d:
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
          if (cVar3 == '\0') goto LAB_005a5d9d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_fc156a0c_Count);
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





//==== 005a5eb0 GetFactory_005a5eb0 ====


/* public: virtual class util__Reflectable * (__cdecl*
   CombustionRocketModule__ReflectionInfoStruct_class_CombustionRocketModule___GetFactory(void)const
   )(void) */

_func_Reflectable_ptr * 
__thiscall CombustionRocketModule__ReflectionInfoStruct_class_CombustionRocketModule___GetFactory__o2
          (ReflectionInfoStruct_L_class_CombustionRocketModule_G_ *this)

{
  return StaticFactory;
}





//==== 005a5ec0 MethodCallerConst__public__class_util__Str_char____thiscall_CombustionRocketModule__GetBipropellantInfo_void_const__0__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_class_CombustionRocketModule_Cclassutil__Str_L_char_G__G___MethodCallerConst_L__public_classutil__Str_L_char_G____thiscallCombustionRocketModule__GetBipropellantInfo_void_const_C0__G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_class_CombustionRocketModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_CombustionRocketModule__GetBipropellantInfo_void_const__0
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_10;
  
  pSVar1 = CombustionRocketModule__GetBipropellantInfo((CombustionRocketModule *)param_1,&SStack_10)
  ;
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 005a5f00 MethodCallerConst__public__bool___thiscall_CombustionRocketModule__IsBipropellant_void_const__0__ ====


/* public: static bool __cdecl util__DelegateFactory_L_class_CombustionRocketModule_Cbool_G___MethodCallerConst_L__public_bool__thiscall_CombustionRocketModule__IsBipropellant_void_const_C0__G_(void const * const) */

bool __cdecl
util__DelegateFactory_class_CombustionRocketModule_bool___MethodCallerConst__public__bool___thiscall_CombustionRocketModule__IsBipropellant_void_const__0
          (void *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(*(int *)((int)param_1 + 0x1d4) + 0x20) + 0xc))();
  return iVar1 == 2;
}





//==== 005a5f10 Darray_MaterialConstituent__005a5f10 ====


/* public:  util__Darray_L_structMaterialConstituent_G___Darray_L_struct_MaterialConstituent_G_(int) */

Darray_L_struct_MaterialConstituent_G_ * 
util__Darray_struct_MaterialConstituent___Darray_struct_MaterialConstituent__o2
          (Darray_L_struct_MaterialConstituent_G_ *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_10;
  
  *(undefined ***)this = (undefined **)(&vftable_15);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(int *)(this + 0xc) = param_1;
  if ((param_1 < 0) || (0x3fffffff < param_1)) {
    *(undefined4 *)(this + 0xc) = 0;
  }
  else if (0 < param_1) {
    puVar1 = (undefined4 *)
             port_op_new(-(uint)((int)((ulonglong)(uint)param_1 * 0x10 >> 0x20) != 0) |
                            (uint)((ulonglong)(uint)param_1 * 0x10));
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar2 = puVar1;
      if (param_1 != 0) {
        do {
          *puVar2 = 0;
          *(undefined8 *)(puVar2 + 2) = 0;
          param_1 = param_1 + -1;
          puVar2 = puVar2 + 4;
        } while (param_1 != 0);
      }
    }
    iVar4 = 0;
    *(undefined4 **)(this + 4) = puVar1;
    if (0 < *(int *)(this + 0xc)) {
      iVar3 = 0;
      do {
        iVar3 = iVar3 + 0x10;
        iVar4 = iVar4 + 1;
        puVar1 = (undefined4 *)(*(int *)(this + 4) + -0x10 + iVar3);
        *puVar1 = 0;
        puVar1[1] = uStack_10;
        puVar1[2] = 0;
        puVar1[3] = 0;
      } while (iVar4 < *(int *)(this + 0xc));
      return this;
    }
  }
  return this;
}





//==== 005a5fe0 CollisionCylinder ====


/* public: __thiscall CollisionCylinder__CollisionCylinder(struct CollisionCylinder const &) */

CollisionCylinder * __thiscall
CollisionCylinder__CollisionCylinder(CollisionCylinder *this,CollisionCylinder *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)((int)&(param_1->Tube_km).A.X + 4);
  uVar2 = (undefined4)((param_1->Tube_km).A.Y);
  uVar3 = *(undefined4 *)((int)&(param_1->Tube_km).A.Y + 4);
  uVar2 = *(undefined4 *)&(param_1->Tube_km).A.Y;
  *(undefined4 *)((int)&(this->Tube_km).A.X + 4) = uVar1;
  *(undefined4 *)&(this->Tube_km).A.Y = uVar2;
  *(undefined4 *)((int)&(this->Tube_km).A.Y + 4) = uVar3;
  uVar1 = *(undefined4 *)((int)&(param_1->Tube_km).A.Z + 4);
  uVar2 = *(undefined4 *)&(param_1->Tube_km).B.X;
  uVar3 = *(undefined4 *)((int)&(param_1->Tube_km).B.X + 4);
  uVar2 = *(undefined4 *)&(param_1->Tube_km).A.Y;
  *(undefined4 *)((int)&(this->Tube_km).A.Z + 4) = uVar1;
  *(undefined4 *)&(this->Tube_km).B.X = uVar2;
  *(undefined4 *)((int)&(this->Tube_km).B.X + 4) = uVar3;
  uVar1 = *(undefined4 *)((int)&(param_1->Tube_km).B.Y + 4);
  uVar2 = *(undefined4 *)&(param_1->Tube_km).B.Z;
  uVar3 = *(undefined4 *)((int)&(param_1->Tube_km).B.Z + 4);
  uVar2 = *(undefined4 *)&(param_1->Tube_km).A.Y;
  *(undefined4 *)((int)&(this->Tube_km).B.Y + 4) = uVar1;
  *(undefined4 *)&(this->Tube_km).B.Z = uVar2;
  *(undefined4 *)((int)&(this->Tube_km).B.Z + 4) = uVar3;
  uVar1 = *(undefined4 *)((int)&(param_1->TubeDirection).X + 4);
  uVar2 = *(undefined4 *)&(param_1->TubeDirection).Y;
  uVar3 = *(undefined4 *)((int)&(param_1->TubeDirection).Y + 4);
  uVar2 = *(undefined4 *)&(param_1->TubeDirection).Y;
  *(undefined4 *)((int)&(this->TubeDirection).X + 4) = uVar1;
  *(undefined4 *)&(this->TubeDirection).Y = uVar2;
  *(undefined4 *)((int)&(this->TubeDirection).Y + 4) = uVar3;
  (this->TubeDirection).Z = (param_1->TubeDirection).Z;
  uVar1 = *(undefined4 *)((int)&(param_1->TubeUp).X + 4);
  uVar2 = *(undefined4 *)&(param_1->TubeUp).Y;
  uVar3 = *(undefined4 *)((int)&(param_1->TubeUp).Y + 4);
  uVar2 = *(undefined4 *)&(param_1->TubeUp).Y;
  *(undefined4 *)((int)&(this->TubeUp).X + 4) = uVar1;
  *(undefined4 *)&(this->TubeUp).Y = uVar2;
  *(undefined4 *)((int)&(this->TubeUp).Y + 4) = uVar3;
  (this->TubeUp).Z = (param_1->TubeUp).Z;
  (this->Radii_km).X = (param_1->Radii_km).X;
  (this->Radii_km).Y = (param_1->Radii_km).Y;
  this->Capped = param_1->Capped;
  return this;
}





//==== 005a6040 NormalShader ====

/* public: __thiscall NormalShader__NormalShader(void) */

NormalShader * __thiscall NormalShader__NormalShader(NormalShader *this)

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
  this->_pad_0x0_0 = (int)&vftable_185;
  (this->ModelMatrixRegisterInstance).Location = -1;
  *(uint32_t *)&local_18 = GetValueLocations();
  iVar10 = local_18->Size;
  *(uint32_t *)&local_14 = (uint32_t)(uintptr_t)((Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1));
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar5 = local_18;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadModelMatrixLocation);
  }
  local_30 = 0;
  iStack_2c = 1;
  iStack_28 = (int)(uintptr_t) (void (*)(void))(2);
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
    pfVar11 = pfVar11 + 4;
  } while (iVar7 < 4);
  (this->InverseModelMatrixRegisterInstance).Location = -1;
  *(uint32_t *)&local_14 = GetValueLocations();
  iVar10 = local_14->Size;
  *(uint32_t *)&local_18 = (uint32_t)(uintptr_t)((Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1));
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
  *(uint32_t *)&local_14 = GetValueLocations();
  iVar10 = local_14->Size;
  *(uint32_t *)&local_18 = (uint32_t)(uintptr_t)((Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1));
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
  *(uint32_t *)&local_14 = GetValueLocations();
  iVar10 = local_14->Size;
  *(uint32_t *)&local_18 = (uint32_t)(uintptr_t)((Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1));
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadNormalMatrixLocation);
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  *(uint32_t *)&local_14 = GetValueLocations();
  iVar10 = (int)(uintptr_t) (void (*)(void))(local_14->Size);
  *(uint32_t *)&local_18 = (uint32_t)(uintptr_t)((Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1));
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadNearPlaneLocation);
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  *(uint32_t *)&local_14 = GetValueLocations();
  iVar10 = (int)(uintptr_t) (void (*)(void))(local_14->Size);
  *(uint32_t *)&local_18 = (uint32_t)(uintptr_t)((Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1));
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadFarPlaneLocation);
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = (int)(uintptr_t) (void (*)(void))(0);
  this->IsReadyToUse = false;
  return this;
}

//==== 005a62e0 ThermalRocketSubModule ====

/* public: __thiscall ThermalRocketSubModule__ThermalRocketSubModule(void) */

ThermalRocketSubModule * __thiscall
ThermalRocketSubModule__ThermalRocketSubModule(ThermalRocketSubModule *this)

{
  this->_pad_0x4_1 = 0;
  this->_pad_0x8_2 = 0;
  this->_pad_0xc_3 = 0;
  this->_pad_0x0_0 = (int)&vftable_182;
  (this->ThermalRocketSubModuleMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 = 0;
  (this->ThermalRocketSubModuleMemoizationHandlerInstance).ResetFunctions.Data = (pmf_c3f813f6 *)0x0
  ;
  (this->ThermalRocketSubModuleMemoizationHandlerInstance).ResetFunctions.Size = 0;
  (this->ThermalRocketSubModuleMemoizationHandlerInstance).ResetFunctions.Capacity = 0;
  (this->ThermalRocketSubModuleMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 =
       (int)&vftable_142;
  (this->ThermalRocketSubModuleMemoizationHandlerInstance).ResetFunctions.Data = (pmf_c3f813f6 *)0x0
  ;
  (this->ThermalRocketSubModuleMemoizationHandlerInstance).ResetFunctions.Size = 0;
  (this->ThermalRocketSubModuleMemoizationHandlerInstance).ResetFunctions.Capacity = 0;
  (this->GetEffectiveExhaustVelocity_km__s_MemoizedValue).Data = 0.0;
  (this->GetEffectiveExhaustVelocity_km__s_MemoizedValue).IsValidData = false;
  (this->GetGasExpansionPlume_MemoizedValue).Data.Products._pad_0x0_0 =
       (int)&vftable_15;
  (this->GetGasExpansionPlume_MemoizedValue).Data.Products.Data = (MaterialConstituent *)0x0;
  (this->GetGasExpansionPlume_MemoizedValue).Data.Products.Size = 0;
  (this->GetGasExpansionPlume_MemoizedValue).Data.Products.Capacity = 0;
  *(undefined4 *)&(this->GetGasExpansionPlume_MemoizedValue).Data.StartRadius_m = 0;
  *(undefined4 *)((int)&(this->GetGasExpansionPlume_MemoizedValue).Data.StartRadius_m + 4) = 0;
  *(undefined4 *)&(this->GetGasExpansionPlume_MemoizedValue).Data.StartTemperature_K = 0;
  *(undefined4 *)((int)&(this->GetGasExpansionPlume_MemoizedValue).Data.StartTemperature_K + 4) = 0;
  (this->GetGasExpansionPlume_MemoizedValue).Data.DisableShimmer = false;
  *(undefined4 *)&(this->GetGasExpansionPlume_MemoizedValue).Data.ExhaustVelocity_km__s = 0;
  *(undefined4 *)((int)&(this->GetGasExpansionPlume_MemoizedValue).Data.ExhaustVelocity_km__s + 4) =
       0;
  *(undefined4 *)&(this->GetGasExpansionPlume_MemoizedValue).Data.MassFlowRate_kg__s = 0;
  *(undefined4 *)((int)&(this->GetGasExpansionPlume_MemoizedValue).Data.MassFlowRate_kg__s + 4) = 0;
  (this->GetGasExpansionPlume_MemoizedValue).IsValidData = false;
  (this->GetExhaustPlumeModelRatio_MemoizedValue).Data = 0.0;
  (this->GetExhaustPlumeModelRatio_MemoizedValue).IsValidData = false;
  TurbopumpSubModule__TurbopumpSubModule(&this->Injector);
  (this->CachedReactants)._pad_0x0_0 = (int)&vftable_15;
  (this->CachedReactants).Data = (MaterialConstituent *)0x0;
  (this->CachedReactants).Size = 0;
  (this->CachedReactants).Capacity = 0;
  (this->CachedProducts)._pad_0x0_0 = (int)&vftable_15;
  (this->CachedProducts).Data = (MaterialConstituent *)0x0;
  (this->CachedProducts).Size = 0;
  (this->CachedProducts).Capacity = 0;
  return this;
}

//==== 005a63c0 Darray_util__SharedPtr_UIWidget___ ====


/* public: virtual  Darray_L_class_util__SharedPtr_L_structUIWidget_G__G___dtor(void) */

void __thiscall
util__Darray_class_util__SharedPtr_struct_UIWidget______Darray_class_util__SharedPtr_struct_UIWidget(Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *this)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  ReferenceControllerRegistry *this_00;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  iVar2 = *(int *)(this + 4);
  *(undefined ***)this = (undefined **)(&vftable_48);
  if (iVar2 != 0) {
    piVar1 = (int *)(iVar2 + -4);
    iVar6 = *piVar1;
    piVar5 = (int *)(iVar2 + iVar6 * 8);
    if (iVar6 != 0) {
      do {
        piVar4 = piVar5 + -1;
        piVar5 = piVar5 + -2;
        iVar6 = iVar6 + -1;
        if ((ReferenceController *)*piVar4 != (ReferenceController *)0x0) {
          bVar3 = ReferenceController__ReleaseStrongReference((ReferenceController *)*piVar4);
          if (bVar3) {
            piVar4 = (int *)*piVar5;
            if (piVar4 != (int *)0x0) {
              (**(code **)(uintptr_t)(*piVar4 + 4))(1);
              piVar4 = (int *)*piVar5;
            }
            this_00 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
            ReferenceControllerRegistry__PointerWasDestroyed(this_00,piVar4);
            *piVar5 = 0;
          }
        }
      } while (iVar6 != 0);
      iVar6 = *piVar1;
    }
    port_op_delete(piVar1,iVar6 * 8 + 4);
  }
  *(undefined ***)this = (undefined **)(&vftable);
  *(undefined4 *)(this + 4) = 0;
  return;
}





//==== 005a6450 ThermalRocketSubModule_005a6450 ====

/* public: virtual __thiscall ThermalRocketSubModule___ThermalRocketSubModule(void) */

void __thiscall ThermalRocketSubModule___ThermalRocketSubModule(ThermalRocketSubModule *this)

{
  MaterialConstituent *pMVar1;
  void *pvVar2;
  pmf_c3f813f6 *ppVar3;
  
  pMVar1 = (this->CachedProducts).Data;
  (this->CachedProducts)._pad_0x0_0 = (int)&vftable_15;
  if (pMVar1 != (MaterialConstituent *)0x0) {
    port_op_delete(pMVar1);
  }
  (this->CachedProducts).Data = (MaterialConstituent *)0x0;
  (this->CachedProducts)._pad_0x0_0 = (int)&vftable;
  pMVar1 = (this->CachedReactants).Data;
  (this->CachedReactants)._pad_0x0_0 = (int)&vftable_15;
  if (pMVar1 != (MaterialConstituent *)0x0) {
    port_op_delete(pMVar1);
  }
  (this->CachedReactants).Data = (MaterialConstituent *)0x0;
  (this->CachedReactants)._pad_0x0_0 = (int)&vftable;
  (this->Injector)._pad_0x0_0 = (int)&vftable_5;
  pvVar2 = (void *)(this->Injector)._pad_0x4_1;
  if (pvVar2 != (void *)0x0) {
    port_op_delete(pvVar2);
    (this->Injector)._pad_0x4_1 = 0;
  }
  pMVar1 = (this->GetGasExpansionPlume_MemoizedValue).Data.Products.Data;
  (this->GetGasExpansionPlume_MemoizedValue).Data.Products._pad_0x0_0 =
       (int)&vftable_15;
  if (pMVar1 != (MaterialConstituent *)0x0) {
    port_op_delete(pMVar1);
  }
  (this->GetGasExpansionPlume_MemoizedValue).Data.Products.Data = (MaterialConstituent *)0x0;
  (this->GetGasExpansionPlume_MemoizedValue).Data.Products._pad_0x0_0 =
       (int)&vftable;
  ppVar3 = (this->ThermalRocketSubModuleMemoizationHandlerInstance).ResetFunctions.Data;
  (this->ThermalRocketSubModuleMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 =
       (int)&vftable_142;
  if (ppVar3 != (pmf_c3f813f6 *)0x0) {
    port_op_delete(ppVar3);
  }
  (this->ThermalRocketSubModuleMemoizationHandlerInstance).ResetFunctions.Data = (pmf_c3f813f6 *)0x0
  ;
  (this->ThermalRocketSubModuleMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 =
       (int)&vftable;
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  return;
}

//==== 005a6550 operator__005a6550 ====


/* public: class util__Darray_L_classutil__SharedPtr_L_classArmorTextureHandler_G__G_ & 
   util__Darray_class_util__SharedPtr_class_ArmorTextureHandler_____operator(class
   util__Darray_L_classutil__SharedPtr_L_classArmorTextureHandler_G__G_ const &) */

Darray_L_class_util__SharedPtr_L_class_ArmorTextureHandler_G___G_ * 
util__Darray_class_util__SharedPtr_class_ArmorTextureHandler_____operator__o2
          (Darray_L_class_util__SharedPtr_L_class_ArmorTextureHandler_G___G_ *this,
          Darray_L_class_util__SharedPtr_L_class_ArmorTextureHandler_G___G_ *param_1)

{
  ReferenceController *this_00;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  ReferenceControllerRegistry *this_01;
  uint uVar5;
  uint uVar6;
  ArmorTextureHandler *this_02;
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
    if (*(SharedPtr_L_class_ArmorTextureHandler_G_ **)(this + 4) !=
        (SharedPtr_L_class_ArmorTextureHandler_G_ *)0x0) {
      SharedPtr_L_class_ArmorTextureHandler_G____vector_deleting_destructor_
                (*(SharedPtr_L_class_ArmorTextureHandler_G_ **)(this + 4),3);
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
        goto LAB_005a6684;
      }
    }
    *(uint **)(this + 4) = puVar3;
  }
  else {
    puVar3 = *(uint **)(this + 4);
  }
LAB_005a6684:
  puVar4 = *(uint **)(param_1 + 4);
  if (puVar4 == puVar4 + *(int *)(param_1 + 8) * 2) {
    return this;
  }
  do {
    this_02 = (ArmorTextureHandler *)*puVar3;
    pRStack_8 = (ReferenceController *)puVar3[1];
    *puVar3 = *puVar4;
    this_00 = (ReferenceController *)puVar4[1];
    puVar3[1] = (uint)this_00;
    if (this_00 != (ReferenceController *)0x0) {
      ReferenceController__AddStrongReference(this_00);
    }
    if ((pRStack_8 != (ReferenceController *)0x0) &&
       (bVar1 = ReferenceController__ReleaseStrongReference(pRStack_8), bVar1)) {
      if (this_02 != (ArmorTextureHandler *)0x0) {
        ArmorTextureHandler___scalar_deleting_destructor(this_02,1);
      }
      this_01 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
      ReferenceControllerRegistry__PointerWasDestroyed(this_01,this_02);
    }
    puVar4 = puVar4 + 2;
    puVar3 = puVar3 + 2;
  } while (puVar4 != (uint *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 8));
  return this;
}





//==== 005a6720 scalar_deleting_destructor_005a6720 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void * __thiscall ModuleDiagram_L_classRailgunModule_G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
ModuleDiagram_class_RailgunModule____scalar_deleting_destructor
          (ModuleDiagram_L_class_RailgunModule_G_ *this,uint param_1)

{
  *(undefined ***)this = &vftable_49;
  util__Darray_class_util__SharedPtr_struct_UIWidget______Darray_class_util__SharedPtr_struct_UIWidget((Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *)(this + 0x158));
  if (*(ReferenceController **)(this + 0x154) != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(*(ReferenceController **)(this + 0x154));
  }
  UIAttributes___UIAttributes((UIAttributes *)(this + 8));
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x170);
  }
  return this;
}





//==== 005a6810 scalar_deleting_destructor_005a6810 ====

/* public: virtual void * __thiscall OrbitalElements:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall OrbitalElements___scalar_deleting_destructor(OrbitalElements *this,uint param_1)

{
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x48);
  }
  return this;
}

//==== 005a6850 scalar_deleting_destructor_005a6850 ====

/* public: virtual void * __thiscall InterceptionProtocol:: 0 scalardeletingdestructor(unsigned
   int) */

void * __thiscall
InterceptionProtocol___scalar_deleting_destructor(InterceptionProtocol *this,uint param_1)

{
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x40);
  }
  return this;
}

//==== 005a6890 scalar_deleting_destructor_005a6890 ====


/* public: virtual void * __thiscall ExtrudableSoloTurretSubModule:: 0 scalardeletingdestructor(unsigned int) */

void * 
ExtrudableSoloTurretSubModule___scalar_deleting_destructor
          (ExtrudableSoloTurretSubModule *this,uint param_1)

{
  TurretSubModule___TurretSubModule((TurretSubModule *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x100);
  }
  return this;
}





//==== 005a68c0 CalculatePropellants_Clear ====


/* public: void __thiscall CombustionRocketModule__CalculatePropellants_Clear(void)const  */

void __thiscall CombustionRocketModule__CalculatePropellants_Clear(CombustionRocketModule *this)

{
  undefined **ppuStack_14;
  void *pvStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  ppuStack_14 = (undefined **)(&vftable_15);
  pvStack_10 = (void *)0x0;
  uStack_c = 0;
  uStack_8 = 0;
  util__Darray_struct_MaterialConstituent___operator
            ((Darray_L_struct_MaterialConstituent_G_ *)&(this->ThermalRocket).NozzleExpansionRatio,
             (Darray_L_struct_MaterialConstituent_G_ *)&ppuStack_14);
  ppuStack_14 = (undefined **)(&vftable_15);
  if (pvStack_10 != (void *)0x0) {
    port_op_delete(pvStack_10);
  }
  *(undefined1 *)&(this->ThermalRocket).RegenerativeCooling_Percent = 0;
  return;
}





//==== 005a6920 CalculatePropellants_MemoizedFunction ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: class util__Darray_L_structMaterialConstituent_G_ __thiscall
   CombustionRocketModule__CalculatePropellants_MemoizedFunction(void)const  */

Darray_L_MaterialConstituent_G_ * __thiscall
CombustionRocketModule__CalculatePropellants_MemoizedFunction
          (CombustionRocketModule *this,Darray_L_MaterialConstituent_G_ *__return_storage_ptr__)

{
  undefined8 stack0xfffffffc;
  undefined4 uVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  MaterialConstituent *pMVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  Material *pMVar9;
  int *piVar10;
  double dVar11;
  undefined4 uStack_44;
  undefined4 uStack_3c;
  undefined8 local_38;
  Darray_L_double_G_ local_30;
  int local_20;
  Darray_L_MaterialConstituent_G_ local_1c;
  uint local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar4 = (**(code **)(*(int *)(*(int *)((int)&(this->ThermalRocket).RegenerativeCooling_Percent + 4
                                        ) + 0x20) + 0xc))();
  if (((1 < iVar4) || (iVar4 < 2)) && ((2 < iVar4 || (iVar4 < 1)))) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\modules\\enginemodules\\combustionrocketmodules.cpp"
                    ,0x59,"Between(Reaction->Reactants.Num(), 1, 2)",(char *)0x0);
    DebugBreak();
  }
  iVar4 = (**(code **)(*(int *)(*(int *)((int)&(this->ThermalRocket).RegenerativeCooling_Percent + 4
                                        ) + 0x20) + 0xc))();
  if (iVar4 == 2) {
    local_30._pad_0x0_0 = (int)&vftable_63;
    local_30.Data = (double *)0x0;
    local_30.Size = 0;
    local_30.Capacity = iVar4;
    local_30.Data = (double *)(uintptr_t)(port_op_new(0x10));
    if ((MaterialConstituent *)local_30.Data == (MaterialConstituent *)0x0) {
      local_30.Data = (double *)0x0;
    }
    else {
      ((MaterialConstituent *)local_30.Data)->Type = (Material *)0x0;
      *(undefined4 *)&(*(undefined4 *)(void *)((char *)(uintptr_t)(((MaterialConstituent *)local_30.Data)) + 0x4)) = 0;
      *(undefined4 *)&((MaterialConstituent *)local_30.Data)->UnitlessFraction = 0;
      *(undefined4 *)((int)&((MaterialConstituent *)local_30.Data)->UnitlessFraction + 4) = 0;
    }
    iVar4 = 0;
    if (0 < local_30.Capacity) {
      do {
        *(undefined8 *)(&((MaterialConstituent *)local_30.Data)->Type + iVar4 * 2) = 0;
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_30.Capacity);
    }
    local_38 = ChemicalReaction__GetNonStoichiometricMassRatio(
                         (*(ChemicalReaction **)
                           ((int)&(this->ThermalRocket).RegenerativeCooling_Percent + 4)),
                          *(double *)&((this->ThermalRocket).Injector));
    dVar11 = ChemicalReaction__GetNonStoichiometricMassRatio
                       (*(ChemicalReaction **)
                         ((int)&(this->ThermalRocket).RegenerativeCooling_Percent + 4),
                        *(double *)&(this->ThermalRocket).Injector);
    iVar4 = local_30.Size;
    local_c = local_30.Size + 1;
    local_38 = local_38 / (dVar11 + 1.0);
    util__Darray_double___SetSize(&local_30,(int *)&local_c);
    bVar3 = util__Darray_double___CheckSize(&local_30,iVar4);
    if (bVar3) {
      *(double *)((int)local_30.Data + local_30.Size * 8 + -8) = local_38;
    }
    dVar11 = ChemicalReaction__GetNonStoichiometricMassRatio
                       (*(ChemicalReaction **)
                         ((int)&(this->ThermalRocket).RegenerativeCooling_Percent + 4),
                        *(double *)&((this->ThermalRocket).Injector));
    iVar4 = local_30.Size;
    local_c = local_30.Size + 1;
    local_38 = 1.0 / (dVar11 + 1.0);
    util__Darray_double___SetSize(&local_30,(int *)&local_c);
    bVar3 = util__Darray_double___CheckSize(&local_30,iVar4);
    if (bVar3) {
      *(double *)((int)local_30.Data + local_30.Size * 8 + -8) = local_38;
    }
    piVar10 = (int *)(*(int *)((int)&(this->ThermalRocket).RegenerativeCooling_Percent + 4) + 0x20);
    local_1c._pad_0x0_0 = 0;
    local_1c.Data = (MaterialConstituent *)0x0;
    local_1c.Size = 0;
    local_1c.Capacity = 0;
    local_1c.Capacity = (**(code **)(uintptr_t)(*piVar10 + 0xc))();
    local_1c._pad_0x0_0 = (int)&vftable_2;
    local_1c.Data = (MaterialConstituent *)0x0;
    local_1c.Size = 0;
    if ((local_1c.Capacity < 0) || (0x3fffffff < local_1c.Capacity)) {
      local_1c.Capacity = 0;
    }
    else if (0 < local_1c.Capacity) {
      local_c = -(uint)((int)((ulonglong)(uint)local_1c.Capacity * 4 >> 0x20) != 0) |
                (uint)((ulonglong)(uint)local_1c.Capacity * 4);
      pMVar5 = (MaterialConstituent *)(uintptr_t)(port_op_new(local_c));
      if (pMVar5 == (MaterialConstituent *)0x0) {
        pMVar5 = (MaterialConstituent *)0x0;
      }
      else {
        memset(pMVar5,0,0);
      }
      iVar4 = 0;
      local_1c.Data = pMVar5;
      if (0 < local_1c.Capacity) {
        do {
          (&pMVar5->Type)[iVar4] = (Material *)0x0;
          iVar4 = iVar4 + 1;
        } while (iVar4 < local_1c.Capacity);
      }
    }
    local_c = 0;
    iVar4 = (**(code **)(uintptr_t)(*piVar10 + 0xc))();
    if ((int)local_c < iVar4) {
      do {
        puVar6 = (undefined4 *)(**(code **)*piVar10)();
        iVar4 = local_1c.Size;
        local_38 = (double)CONCAT44(*puVar6,(uint)local_38);
        local_20 = local_1c.Size + 1;
        util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)&local_1c,&local_20)
        ;
        bVar3 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                          ((Darray_L_GraphicsResource__Type_G_ *)&local_1c,iVar4);
        if (bVar3) {
          *(undefined4 *)((int)local_1c.Data + local_1c.Size * 4 + -4) = (*(uint32_t*)((char*)&(local_38)+4));
        }
        local_c = local_c + 1;
        iVar4 = (**(code **)(uintptr_t)(*piVar10 + 0xc))();
      } while ((int)local_c < iVar4);
    }
    __return_storage_ptr__->_pad_0x0_0 = 0;
    __return_storage_ptr__->Data = (MaterialConstituent *)0x0;
    __return_storage_ptr__->Size = 0;
    __return_storage_ptr__->Capacity = 0;
    iVar4 = (**(code **)(uintptr_t)(local_30._pad_0x0_0 + 0xc))();
    iVar7 = (**(code **)(uintptr_t)(local_1c._pad_0x0_0 + 0xc))();
    if (iVar4 < iVar7) {
      iVar4 = iVar7;
    }
    util__Darray_L_MaterialConstituent_G___Darray_L_MaterialConstituent_G_(__return_storage_ptr__,iVar4);
    local_20 = 0;
    while( true ) {
      iVar4 = (**(code **)(uintptr_t)(local_30._pad_0x0_0 + 0xc))();
      iVar7 = (**(code **)(uintptr_t)(local_1c._pad_0x0_0 + 0xc))();
      if (iVar4 < iVar7) {
        iVar4 = iVar7;
      }
      if (iVar4 <= local_20) break;
      iVar4 = (**(code **)(uintptr_t)(local_30._pad_0x0_0 + 0xc))();
      if (local_20 < iVar4) {
        puVar8 = (undefined8 *)(**(code **)local_30._pad_0x0_0)();
        local_38 = (double)*puVar8;
      }
      else {
        local_38 = 0.0;
      }
      iVar4 = (**(code **)(uintptr_t)(local_1c._pad_0x0_0 + 0xc))();
      if (local_20 < iVar4) {
        puVar6 = (undefined4 *)(**(code **)local_1c._pad_0x0_0)();
        pMVar9 = (Material *)*puVar6;
      }
      else {
        pMVar9 = (Material *)0x0;
      }
      uVar2 = local_38;
      iVar4 = __return_storage_ptr__->Size;
      uVar1 = (uint)local_38;
      local_38 = (double)CONCAT44(iVar4 + 1,(uint)local_38);
      util__Darray_L_MaterialConstituent_G___SetSize(__return_storage_ptr__,(int *)((int)&local_38 + 4))
      ;
      bVar3 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                        ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)__return_storage_ptr__,iVar4
                        );
      if (bVar3) {
        uStack_3c = (undefined4)((ulonglong)uVar2 >> 0x20);
        pMVar5 = __return_storage_ptr__->Data + __return_storage_ptr__->Size + -1;
        pMVar5->Type = pMVar9;
        *(undefined4 *)&(*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar5) + 0x4)) = uStack_44;
        *(undefined4 *)&pMVar5->UnitlessFraction = uVar1;
        *(undefined4 *)((int)&pMVar5->UnitlessFraction + 4) = uStack_3c;
      }
      local_20 = local_20 + 1;
    }
    local_1c._pad_0x0_0 = (int)&vftable_2;
    if (local_1c.Data != (MaterialConstituent *)0x0) {
      port_op_delete(local_1c.Data);
    }
    local_1c.Data = (MaterialConstituent *)0x0;
    local_1c._pad_0x0_0 = (int)&vftable;
    local_30._pad_0x0_0 = (int)&vftable_63;
    pMVar5 = (MaterialConstituent *)local_30.Data;
  }
  else {
    local_1c._pad_0x0_0 = (int)&vftable_15;
    local_1c.Data = (MaterialConstituent *)0x0;
    local_1c.Size = 0;
    local_1c.Capacity = 1;
    local_1c.Data = (struct MaterialConstituent *)(uintptr_t)(port_op_new(0x10));
    if (local_1c.Data == (MaterialConstituent *)0x0) {
      local_1c.Data = (MaterialConstituent *)0x0;
    }
    else {
      (local_1c.Data)->Type = (Material *)0x0;
      (local_1c.Data)->UnitlessFraction = 0.0;
    }
    iVar4 = 0;
    if (0 < local_1c.Capacity) {
      iVar7 = 0;
      do {
        iVar4 = iVar4 + 1;
        puVar6 = (undefined4 *)((int)&(local_1c.Data)->Type + iVar7);
        *puVar6 = 0;
        puVar6[1] = uStack_44;
        puVar6[2] = 0;
        puVar6[3] = 0;
        iVar7 = iVar7 + 0x10;
      } while (iVar4 < local_1c.Capacity);
    }
    local_38 = (double)(ulonglong)(uint)local_38;
    puVar6 = (undefined4 *)
             (*(code *)**(undefined4 **)
                         (*(int *)((int)&(this->ThermalRocket).RegenerativeCooling_Percent + 4) +
                         0x20))();
    iVar4 = local_1c.Size;
    pMVar9 = (Material *)*puVar6;
    local_c = local_1c.Size + 1;
    util__Darray_L_MaterialConstituent_G___SetSize(&local_1c,(int *)&local_c);
    bVar3 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                      ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)&local_1c,iVar4);
    if (bVar3) {
      pMVar5 = local_1c.Data + local_1c.Size + -1;
      pMVar5->Type = pMVar9;
      *(undefined4 *)&(*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar5) + 0x4)) = uStack_44;
      *(undefined4 *)&pMVar5->UnitlessFraction = 0;
      *(undefined4 *)((int)&pMVar5->UnitlessFraction + 4) = 0x3ff00000;
    }
    util__Darray_L_MaterialConstituent_G___Darray_L_MaterialConstituent_G_
              (__return_storage_ptr__,(Darray_L_struct_MaterialConstituent_G_ *)&local_1c);
    local_1c._pad_0x0_0 = (int)&vftable_15;
    pMVar5 = local_1c.Data;
  }
  if (pMVar5 != (MaterialConstituent *)0x0) {
    port_op_delete(pMVar5);
  }
  return __return_storage_ptr__;
}

//==== 005a6de0 CheckSize_005a6de0 ====


/* private: bool  util__Darray_L_void___thiscallFleet___P__void_const_G___CheckSize(int) */

bool 
util__Darray_void____thiscall_Fleet_____void_const____CheckSize
          (Darray_L_void____thiscall_Fleet___P__void_const__G_ *this,int param_1)

{
  undefined1 *puVar1;
  pmf_02045bc9 *ppVar2;
  bool bVar3;
  uint uVar4;
  pmf_02045bc9 *ppVar5;
  pmf_02045bc9 *ppVar6;
  pmf_02045bc9 *ppVar7;
  uint uVar8;
  bool bVar9;
  pmf_02045bc9 *ppStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar8 = this->Size;
  bVar9 = -1 < (int)uVar8;
  bVar3 = !bVar9;
  if (bVar3) {
    ppStack_c = (pmf_02045bc9 *)0x0;
    Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G___SetSize
              ((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)this,(int *)&ppStack_c);
    uVar8 = this->Size;
  }
  bStack_5 = !bVar3;
  bVar3 = (int)uVar8 < 0x40000000;
  if (!bVar3) {
    ppStack_c = (pmf_02045bc9 *)0x3fffffff;
    Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G___SetSize
              ((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)this,(int *)&ppStack_c);
    uVar8 = this->Size;
    bStack_5 = false;
  }
  uVar4 = this->Capacity;
  if ((int)uVar8 <= (int)uVar4) {
    return bVar3 && bVar9;
  }
  if (uVar4 == 0) {
    this->Capacity = uVar8;
    uVar4 = uVar8;
  }
  if ((int)uVar4 < (int)uVar8) {
    do {
      uVar4 = uVar4 * 2;
    } while ((int)uVar4 < (int)uVar8);
    this->Capacity = uVar4;
  }
  if (0x3fffffff < (int)uVar4) {
    this->Capacity = 0x3fffffff;
    uVar4 = 0x3fffffff;
  }
  uVar8 = -(uint)((int)((ulonglong)uVar4 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 8);
  ppVar5 = (pmf_02045bc9 *)port_op_new(uVar8);
  if (ppVar5 == (pmf_02045bc9 *)0x0) {
    ppVar5 = (pmf_02045bc9 *)0x0;
    ppStack_c = (pmf_02045bc9 *)0x0;
  }
  else {
    ppStack_c = ppVar5;
    memset(ppVar5,0,uVar8);
  }
  ppVar6 = this->Data;
  if (ppVar6 != (pmf_02045bc9 *)0x0) {
    ppVar2 = ppVar5 + this->Size;
    ppVar7 = ppVar6;
    if (ppVar6 != ppVar6 + param_1) {
      do {
        if (ppVar5 == ppVar2) break;
        *(undefined4 *)ppVar5 = *(undefined4 *)ppVar6;
        puVar1 = &ppVar6->field1_0x1;
        ppVar6 = ppVar6 + 1;
        *(undefined4 *)&ppVar5->field1_0x1 = *(undefined4 *)puVar1;
        ppVar5 = ppVar5 + 1;
        ppVar7 = this->Data;
      } while (ppVar6 != ppVar7 + param_1);
    }
    port_op_delete(ppVar7);
    this->Data = (pmf_02045bc9 *)0x0;
  }
  this->Data = ppStack_c;
  return bStack_5;
}





//==== 005a6f20 DememoizeAll_005a6f20 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall ResistojetCompartment__DememoizeAll(void)const  */

void __thiscall ResistojetCompartment__DememoizeAll(ResistojetCompartment *this)

{
  undefined8 stack0xfffffffc;
  ResistojetCompartmentMemoizationHandler *pRVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar2 = (**(code **)(this->_pad_0x8_2 + 0xc))();
  if (local_c < iVar2) {
    do {
      puVar3 = (undefined4 *)(**(code **)this->_pad_0x8_2)(&local_c);
      (*(code *)*puVar3)();
      local_c = local_c + 1;
      iVar2 = (**(code **)(this->_pad_0x8_2 + 0xc))();
    } while (local_c < iVar2);
  }
  (**(code **)(this->_pad_0x8_2 + 0x10))();
  pRVar1 = &this->ResistojetCompartmentMemoizationHandlerInstance;
  local_c = 0;
  iVar2 = (**(code **)((this->ResistojetCompartmentMemoizationHandlerInstance).ResetFunctions.
                       _pad_0x0_0 + 0xc))();
  if (local_c < iVar2) {
    do {
      puVar3 = (undefined4 *)(**(code **)(pRVar1->ResetFunctions)._pad_0x0_0)(&local_c);
      (*(code *)*puVar3)();
      local_c = local_c + 1;
      iVar2 = (**(code **)((pRVar1->ResetFunctions)._pad_0x0_0 + 0xc))();
    } while (local_c < iVar2);
  }
  (**(code **)((pRVar1->ResetFunctions)._pad_0x0_0 + 0x10))();
  return;
}

//==== 005a6fe0 GenerateTextures_005a6fe0 ====

/* public: virtual void __thiscall CombustionRocketCompartment__GenerateTextures(void) */

void __thiscall CombustionRocketCompartment__GenerateTextures(CombustionRocketCompartment *this)

{
  EngineModule *this_00;
  ReferenceController *this_01;
  bool bVar1;
  int iVar2;
  Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G_ *pDVar3;
  int iVar4;
  ReferenceControllerRegistry *this_02;
  SharedPtr_L_ArmorTextureHandler_G_ *pSVar5;
  undefined4 *puVar6;
  int *this_03;
  ArmorTextureHandler *this_04;
  Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G_ local_1c;
  int *local_c;
  ReferenceController *local_8;
  
  EngineCompartment__GenerateTextures((EngineCompartment *)this);
  this_00 = (EngineModule *)this->_pad_0x38_14;
  iVar2 = EngineModule__GetAttachmentCount(this_00);
  pDVar3 = ThermalRocketSubModule__GenerateTextures
                     ((ThermalRocketSubModule *)(this_00 + 2),&local_1c,iVar2);
  this_03 = &this->_pad_0x4c_19;
  local_c = this_03;
  if (this->_pad_0x54_21 == 0) {
    util__Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G___op_assign
              ((Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G_ *)this_03,
               (Darray_L_class_util__SharedPtr_L_class_ArmorTextureHandler_G___G_ *)pDVar3);
  }
  else {
    iVar2 = (**(code **)(pDVar3->_pad_0x0_0 + 0xc))();
    if (iVar2 != 0) {
      iVar2 = this->_pad_0x54_21;
      iVar4 = (**(code **)(pDVar3->_pad_0x0_0 + 0xc))();
      local_8 = (ReferenceController *)(iVar4 + this->_pad_0x54_21);
      util__Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G___SetSize
                ((Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G_ *)this_03,(int *)&local_8);
      util__Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G___CheckSize
                ((Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G_ *)this_03,iVar2);
      pSVar5 = pDVar3->Data;
      puVar6 = (undefined4 *)(this->_pad_0x50_20 + iVar2 * 8);
      if (puVar6 != (undefined4 *)(this->_pad_0x50_20 + this->_pad_0x54_21 * 8)) {
        do {
          this_04 = (ArmorTextureHandler *)*puVar6;
          local_8 = (ReferenceController *)puVar6[1];
          *puVar6 = (undefined4)(uintptr_t)(pSVar5->Pointer);
          this_01 = pSVar5->Controller;
          puVar6[1] = (undefined4)(uintptr_t)(this_01);
          if (this_01 != (ReferenceController *)0x0) {
            util__ReferenceController__AddStrongReference(this_01);
          }
          if ((local_8 != (ReferenceController *)0x0) &&
             (bVar1 = util__ReferenceController__ReleaseStrongReference(local_8), bVar1)) {
            if (this_04 != (ArmorTextureHandler *)0x0) {
              ArmorTextureHandler___scalar_deleting_destructor(this_04,1);
            }
            this_02 = util__ReferenceControllerRegistry__Get();
            util__ReferenceControllerRegistry__PointerWasDestroyed(this_02,this_04);
          }
          puVar6 = puVar6 + 2;
          pSVar5 = pSVar5 + 1;
        } while (puVar6 != (undefined4 *)(local_c[1] + local_c[2] * 8));
      }
    }
  }
  local_1c._pad_0x0_0 = (int)&vftable_91;
  if (local_1c.Data != (SharedPtr_L_ArmorTextureHandler_G_ *)0x0) {
    util__SharedPtr_L_ArmorTextureHandler_G_____vector_deleting_destructor_(local_1c.Data,3);
  }
  return;
}

//==== 005a70f0 GetBipropellantInfo ====

/* WARNING: Removing unreachable block (ram,0x005a72a5) */
/* WARNING: Removing unreachable block (ram,0x005a72b5) */
/* WARNING: Removing unreachable block (ram,0x005a72c8) */
/* WARNING: Removing unreachable block (ram,0x005a72d2) */
/* public: class util__Str_L_char_G_  CombustionRocketModule__GetBipropellantInfo(void)const
    */

Str_L_char_G_ * 
CombustionRocketModule__GetBipropellantInfo
          (CombustionRocketModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auVar11 [4];
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  Str_L_char_G_ *pSVar15;
  LocStr *this_00;
  char *pcVar16;
  char *pcVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  LocStr local_9c [24];
  Str_L_char_G_ local_84;
  Str_L_char_G_ local_78;
  void *local_6c [3];
  void *local_60 [3];
  Str_L_char_G_ local_54;
  undefined **local_48;
  void *local_44;
  undefined **local_38;
  void *local_34;
  Str_L_char_G_ local_28;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14 [4];
  double local_10;
  int *local_8;
  
  local_8 = (int *)0x0;
  iVar12 = (**(code **)(*(int *)(*(int *)((int)&(this->ThermalRocket).RegenerativeCooling_Percent +
                                         4) + 0x20) + 0xc))();
  if (iVar12 < 2) {
    pSVar15 = (Str_L_char_G_ *)local_14;
    *(uint32_t *)&local_14 = (uint32_t)0x0;
    bVar10 = false;
    bVar9 = true;
    bVar8 = false;
    bVar7 = false;
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    bVar3 = false;
    bVar2 = false;
    local_10 = 0.0;
  }
  else {
    *(uint32_t *)&local_18 = 1;
    local_1c = 0;
    util__Str_char___Str_char(&local_84,"InfoBox BipropellantMassRatio");
    puVar13 = (undefined4 *)(**(code **)(this->_pad_0x0_0 + 0x170))(&local_48);
    puVar13 = (undefined4 *)(**(code **)*puVar13)(&local_18);
    piVar1 = (int *)*puVar13;
    puVar14 = (undefined4 *)(**(code **)(this->_pad_0x0_0 + 0x170))(&local_38);
    puVar13 = &local_1c;
    puVar14 = (undefined4 *)(**(code **)*puVar14)();
    local_8 = (int *)*puVar14;
    local_10 = ChemicalReaction__GetNonStoichiometricMassRatio
                         (*(ChemicalReaction **)
                           ((int)&(this->ThermalRocket).RegenerativeCooling_Percent + 4),
                          *(double *)&(this->ThermalRocket).Injector);
    pSVar15 = PrintSigFigures(&local_78,(double)CONCAT44(3,(int)((ulonglong)local_10 >> 0x20)),
                              (int)puVar13);
    if (pSVar15->Capacity < 1) {
      pcVar17 = "";
    }
    else {
      pcVar17 = pSVar15->Data;
    }
    puVar13 = (undefined4 *)(**(code **)(uintptr_t)(*piVar1 + 0x48))(local_6c);
    if ((int)puVar13[1] < 1) {
      puVar19 = (undefined1 *)(&cde_l2_0b2b1c9f_NullString);
    }
    else {
      puVar19 = (undefined1 *)*puVar13;
    }
    puVar13 = (undefined4 *)(**(code **)(uintptr_t)(*local_8 + 0x48))(local_60);
    if ((int)puVar13[1] < 1) {
      puVar18 = (undefined1 *)(&cde_l2_0b2b1c9f_NullString);
    }
    else {
      puVar18 = (undefined1 *)*puVar13;
    }
    local_28.Data = (char *)0x0;
    local_28.Capacity = 0;
    local_28.Length = 0;
    this_00 = (LocStr *)util__LocStr__LocStr(local_9c,&local_84,&local_28);
    pSVar15 = util__LocStr__operator__o3(this_00);
    if (pSVar15->Capacity < 1) {
      pcVar16 = "";
    }
    else {
      pcVar16 = pSVar15->Data;
    }
    pSVar15 = util__Printf(&local_54,pcVar16,puVar18,puVar19,pcVar17);
    bVar10 = true;
    bVar9 = false;
    bVar8 = true;
    bVar7 = true;
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
  }
  memcpy(&auVar11, &local_14, 4);
  util__Str_char___Str_char(__return_storage_ptr__,pSVar15);
  if ((bVar9) && (auVar11 != (uint32_t)0x0)) {
    port_op_delete((void *)auVar11);
  }
  if ((bVar10) && (local_54.Data != (char *)0x0)) {
    port_op_delete(local_54.Data);
    local_54.Data = (char *)0x0;
  }
  if ((bVar3) && (local_28.Data != (char *)0x0)) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if ((bVar4) && (local_60[0] != (void *)0x0)) {
    port_op_delete(local_60[0]);
    local_60[0] = (void *)0x0;
  }
  if ((bVar5) && (local_6c[0] != (void *)0x0)) {
    port_op_delete(local_6c[0]);
    local_6c[0] = (void *)0x0;
  }
  if ((bVar6) && (local_78.Data != (char *)0x0)) {
    port_op_delete(local_78.Data);
    local_78.Data = (char *)0x0;
  }
  if (bVar7) {
    local_38 = (undefined **)(&vftable_15);
    if (local_34 != (void *)0x0) {
      port_op_delete(local_34);
    }
    local_34 = (void *)0x0;
    local_38 = (undefined **)(&vftable);
  }
  if (bVar8) {
    *(uint32_t *)&local_48 = (uint32_t)(uintptr_t)(&vftable_15);
    if (local_44 != (void *)0x0) {
      port_op_delete(local_44);
    }
    local_44 = (void *)0x0;
    *(uint32_t *)&local_48 = (uint32_t)(uintptr_t)(&vftable);
  }
  if ((local_84.Data != (char *)0x0) && (bVar2)) {
    port_op_delete(local_84.Data);
  }
  return __return_storage_ptr__;
}

//==== 005a73e0 GetDefaultSetters_005a73e0 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   NormalShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl NormalShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_8ff5f04c__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_8ff5f04c__thread_safe_static_guard_0__);
    if ( cde_l2_8ff5f04c__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_4f27befe_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_4f27befe_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_4f27befe_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_NormalShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_8ff5f04c__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_4f27befe_DefaultSetters;
}





//==== 005a7470 GetFactory_005a7470 ====


/* public: virtual class util__Reflectable * (__cdecl*
   TurretSubModule__ReflectionInfoStruct_struct_TurretSubModule___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall TurretSubModule__ReflectionInfoStruct_struct_TurretSubModule___GetFactory__o2
          (ReflectionInfoStruct_L_struct_TurretSubModule_G_ *this)

{
  return StaticFactory;
}





//==== 005a7480 GetFactory_005a7480 ====


/* public: virtual class util__Reflectable * (__cdecl*
   ReactionWheelSubModule__ReflectionInfoStruct_class_ReactionWheelSubModule___GetFactory(void)const
   )(void) */

_func_Reflectable_ptr * 
__thiscall ReactionWheelSubModule__ReflectionInfoStruct_class_ReactionWheelSubModule___GetFactory__o2
          (ReflectionInfoStruct_L_class_ReactionWheelSubModule_G_ *this)

{
  return StaticFactory;
}





//==== 005a7490 GetFactory_005a7490 ====


/* public: virtual class util__Reflectable * (__cdecl*
   TurretMotorSubModule__ReflectionInfoStruct_class_TurretMotorSubModule___GetFactory(void)const
   )(void) */

_func_Reflectable_ptr * 
__thiscall TurretMotorSubModule__ReflectionInfoStruct_class_TurretMotorSubModule___GetFactory__o2
          (ReflectionInfoStruct_L_class_TurretMotorSubModule_G_ *this)

{
  return StaticFactory;
}





//==== 005a74a0 GetMember_005a74a0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   TurretSubModule__ReflectionInfoStruct_struct_TurretSubModule___GetMember(class util__Str_L_char_G_
   const &)const  */

Str_L_char_G_ * 
TurretSubModule__ReflectionInfoStruct_struct_TurretSubModule___GetMember__o2
          (ReflectionInfoStruct_L_struct_TurretSubModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_c9175d42__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_c9175d42__thread_safe_static_guard_0__),
      cde_l2_c9175d42__thread_safe_static_guard_0__ == -1)) {
     cde_l2_9edb8223_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_c9175d42__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_9edb8223_Count) {
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
LAB_005a752d:
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
          if (cVar3 == '\0') goto LAB_005a752d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_9edb8223_Count);
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





//==== 005a7640 GetMember_005a7640 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   ReactionWheelSubModule__ReflectionInfoStruct_class_ReactionWheelSubModule___GetMember(class
   util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
ReactionWheelSubModule__ReflectionInfoStruct_class_ReactionWheelSubModule___GetMember__o2
          (ReflectionInfoStruct_L_class_ReactionWheelSubModule_G_ *this,Str_L_char_G_ *param_1)

{
  StaticGetMember(param_1);
  return param_1;
}





//==== 005a7660 GetMember_005a7660 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   TurretMotorSubModule__ReflectionInfoStruct_class_TurretMotorSubModule___GetMember(class
   util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
TurretMotorSubModule__ReflectionInfoStruct_class_TurretMotorSubModule___GetMember__o2
          (ReflectionInfoStruct_L_class_TurretMotorSubModule_G_ *this,Str_L_char_G_ *param_1)

{
  StaticGetMember(param_1);
  return param_1;
}





//==== 005a7680 GetMembers_005a7680 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   TurretSubModule__ReflectionInfoStruct_struct_TurretSubModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
TurretSubModule__ReflectionInfoStruct_struct_TurretSubModule___GetMembers__o2
          (ReflectionInfoStruct_L_struct_TurretSubModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_eba0faf7__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_eba0faf7__thread_safe_static_guard_0__),
      cde_l2_eba0faf7__thread_safe_static_guard_0__ == -1)) {
     cde_l2_4b79e88a_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_eba0faf7__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_4b79e88a_Count);
  iVar3 = 0;
  if (0 <  cde_l2_4b79e88a_Count) {
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
    } while (iVar3 <  cde_l2_4b79e88a_Count);
  }
  return in_stack_00000004;
}





//==== 005a77c0 GetMembers_005a77c0 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   ReactionWheelSubModule__ReflectionInfoStruct_class_ReactionWheelSubModule___GetMembers(void)const
    */

undefined4 
ReactionWheelSubModule__ReflectionInfoStruct_class_ReactionWheelSubModule___GetMembers__o2
          (ReflectionInfoStruct_L_class_ReactionWheelSubModule_G_ *this)

{
  undefined4 in_stack_00000004;
  
  StaticGetMembers();
}





//==== 005a77e0 GetMembers_005a77e0 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   TurretMotorSubModule__ReflectionInfoStruct_class_TurretMotorSubModule___GetMembers(void)const  */

undefined4 
TurretMotorSubModule__ReflectionInfoStruct_class_TurretMotorSubModule___GetMembers__o2
          (ReflectionInfoStruct_L_class_TurretMotorSubModule_G_ *this)

{
  undefined4 in_stack_00000004;
  
  StaticGetMembers();
}





//==== 005a7800 GetOperatingTemperature_K_005a7800 ====


/* public: virtual double __thiscall ResistojetCompartment__GetOperatingTemperature_K(void)const  */

double __thiscall ResistojetCompartment__GetOperatingTemperature_K(ResistojetCompartment *this)

{
  return this->Temperature_K;
}





//==== 005a7810 StaticGetReflectionInfo_005a7810 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct ReactionWheelSubModule__ReflectionInfoStruct_L_classReactionWheelSubModule_G_
   * __cdecl ReactionWheelSubModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_ReactionWheelSubModule_G_ * __cdecl
ReactionWheelSubModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_46326b3d__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_46326b3d__thread_safe_static_guard_0__);
    if ( cde_l2_46326b3d__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_7cbe3341_ReflectionInfo) = &vftable_189;
      _Init_thread_footer(& cde_l2_46326b3d__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_7cbe3341_ReflectionInfo;
}





//==== 005a7870 StaticGetReflectionInfo_005a7870 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct TurretMotorSubModule__ReflectionInfoStruct_L_classTurretMotorSubModule_G_ *
   __cdecl TurretMotorSubModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_TurretMotorSubModule_G_ * __cdecl
TurretMotorSubModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_96d048b0__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_96d048b0__thread_safe_static_guard_0__);
    if ( cde_l2_96d048b0__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_a12499c3_ReflectionInfo) = &vftable_187;
      _Init_thread_footer(& cde_l2_96d048b0__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_a12499c3_ReflectionInfo;
}





//==== 005a78d0 StaticGetReflectionInfo_005a78d0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct TurretSubModule__ReflectionInfoStruct_L_structTurretSubModule_G_ * __cdecl
   TurretSubModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_struct_TurretSubModule_G_ * __cdecl
TurretSubModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_2c63cca8__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_2c63cca8__thread_safe_static_guard_0__);
    if ( cde_l2_2c63cca8__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_3c692e0c_ReflectionInfo) = &vftable_191;
      _Init_thread_footer(& cde_l2_2c63cca8__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_3c692e0c_ReflectionInfo;
}





//==== 005a7930 GetStatic_005a7930 ====


/* public: static class NormalShader * __cdecl NormalShader__GetStatic(void) */

NormalShader * __cdecl NormalShader__GetStatic(void)

{
  NormalShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_e9042b09__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_afd79325__thread_safe_static_guard_0__);
    if ( cde_l2_afd79325__thread_safe_static_guard_0__ == -1) {
      this = (NormalShader *)port_op_new(0x54);
      if (this == (NormalShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0x54);
        pSVar1 = (Shader *)NormalShader__NormalShader(this);
      }
       cde_l2_c64bb9ad_Singleton =
           (NormalShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_afd79325__thread_safe_static_guard_0__);
    }
  }
  return cde_l2_c64bb9ad_Singleton;

}





//==== 005a79b0 GetTypeName_005a79b0 ====


/* public: virtual class util__Str_L_char_G_  TurretSubModule__ReflectionInfoStruct_struct_TurretSubModule___GetTypeName(void)const  */

Str_L_char_G_ * 
TurretSubModule__ReflectionInfoStruct_struct_TurretSubModule___GetTypeName
          (ReflectionInfoStruct_L_struct_TurretSubModule_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"TurretSubModule");
  return __return_storage_ptr__;
}





//==== 005a79d0 GetTypeName_005a79d0 ====


/* public: virtual class util__Str_L_char_G_ 
   ReactionWheelSubModule__ReflectionInfoStruct_class_ReactionWheelSubModule___GetTypeName(void)const  */

Str_L_char_G_ * 
ReactionWheelSubModule__ReflectionInfoStruct_class_ReactionWheelSubModule___GetTypeName
          (ReflectionInfoStruct_L_class_ReactionWheelSubModule_G_ *this,
          Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"ReactionWheelSubModule");
  return __return_storage_ptr__;
}





//==== 005a79f0 GetTypeName_005a79f0 ====


/* public: virtual class util__Str_L_char_G_  TurretMotorSubModule__ReflectionInfoStruct_class_TurretMotorSubModule___GetTypeName(void)const  */

Str_L_char_G_ * 
TurretMotorSubModule__ReflectionInfoStruct_class_TurretMotorSubModule___GetTypeName
          (ReflectionInfoStruct_L_class_TurretMotorSubModule_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"TurretMotorSubModule");
  return __return_storage_ptr__;
}





//==== 005a7a10 GetValueLocations_005a7a10 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   NormalShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl NormalShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_dccb9d24__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_dccb9d24__thread_safe_static_guard_0__);
    if ( cde_l2_dccb9d24__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_4b6dffaf_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_4b6dffaf_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_4b6dffaf_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_NormalShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_dccb9d24__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_4b6dffaf_ValueLocations;
}





//==== 005a7aa0 IsBipropellant ====


/* public: bool __thiscall CombustionRocketModule__IsBipropellant(void)const  */

bool __thiscall CombustionRocketModule__IsBipropellant(CombustionRocketModule *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(*(int *)((int)&(this->ThermalRocket).RegenerativeCooling_Percent + 4
                                        ) + 0x20) + 0xc))();
  return iVar1 == 2;
}





//==== 005a7ac0 LoadFarPlaneLocation_005a7ac0 ====

/* private: static void __cdecl NormalShader__LoadFarPlaneLocation(void) */

void __cdecl NormalShader__LoadFarPlaneLocation(void)

{
  NormalShader *pNVar1;
  NormalShader *pNVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pNVar1 = NormalShader__GetStatic();
  pcVar4 = "FarPlane";
  pNVar2 = NormalShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pNVar2->_pad_0x4_1,pcVar4);
  (pNVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5);
  local_8 = 0;
  pNVar1 = NormalShader__GetStatic();
  (**(code **)(pNVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 005a7b10 LoadInverseModelMatrixLocation_005a7b10 ====

/* private: static void __cdecl NormalShader__LoadInverseModelMatrixLocation(void) */

void __cdecl NormalShader__LoadInverseModelMatrixLocation(void)

{
  NormalShader *pNVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float afStack_dc [18];
  float fStack_94;
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
  float afStack_54 [7];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pNVar1 = NormalShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pNVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x5a7b3b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5);
  pNVar1 = NormalShader__GetStatic();
  iVar2 = 0;
  pfVar4 = afStack_54;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = afStack_dc;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  fStack_94 = afStack_54[0];
  uStack_90 = afStack_54[1];
  uStack_8c = afStack_54[2];
  uStack_88 = afStack_54[3];
  uStack_84 = afStack_54[4];
  uStack_80 = afStack_54[5];
  uStack_7c = afStack_54[6];
  uStack_78 = uStack_38;
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  uStack_60 = uStack_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  (**(code **)(pNVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 005a7b50 LoadModelMatrixLocation_005a7b50 ====

/* private: static void __cdecl NormalShader__LoadModelMatrixLocation(void) */

void __cdecl NormalShader__LoadModelMatrixLocation(void)

{
  NormalShader *pNVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float afStack_dc [18];
  float fStack_94;
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
  float afStack_54 [7];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pNVar1 = NormalShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pNVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x5a7b7b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5);
  pNVar1 = NormalShader__GetStatic();
  iVar2 = 0;
  pfVar4 = afStack_54;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = afStack_dc;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  fStack_94 = afStack_54[0];
  uStack_90 = afStack_54[1];
  uStack_8c = afStack_54[2];
  uStack_88 = afStack_54[3];
  uStack_84 = afStack_54[4];
  uStack_80 = afStack_54[5];
  uStack_7c = afStack_54[6];
  uStack_78 = uStack_38;
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  uStack_60 = uStack_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  (**(code **)(pNVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 005a7b90 LoadNearPlaneLocation_005a7b90 ====

/* private: static void __cdecl NormalShader__LoadNearPlaneLocation(void) */

void __cdecl NormalShader__LoadNearPlaneLocation(void)

{
  NormalShader *pNVar1;
  NormalShader *pNVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pNVar1 = NormalShader__GetStatic();
  pcVar4 = "NearPlane";
  pNVar2 = NormalShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pNVar2->_pad_0x4_1,pcVar4);
  (pNVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5);
  local_8 = 0;
  pNVar1 = NormalShader__GetStatic();
  (**(code **)(pNVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 005a7be0 LoadNormalMatrixLocation_005a7be0 ====

/* private: static void __cdecl NormalShader__LoadNormalMatrixLocation(void) */

void __cdecl NormalShader__LoadNormalMatrixLocation(void)

{
  NormalShader *pNVar1;
  NormalShader *pNVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  
  pNVar1 = NormalShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pNVar2 = NormalShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pNVar2->_pad_0x4_1,pcVar4);
  (pNVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5);
  pNVar1 = NormalShader__GetStatic();
  local_20 = 0x3f800000;
  *(uint32_t *)&local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pNVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 005a7c70 LoadTotalTransformMatrixLocation_005a7c70 ====

/* private: static void __cdecl NormalShader__LoadTotalTransformMatrixLocation(void) */

void __cdecl NormalShader__LoadTotalTransformMatrixLocation(void)

{
  NormalShader *pNVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float afStack_dc [18];
  float fStack_94;
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
  float afStack_54 [7];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pNVar1 = NormalShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pNVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x5a7c9b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5);
  pNVar1 = NormalShader__GetStatic();
  iVar2 = 0;
  pfVar4 = afStack_54;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = afStack_dc;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  fStack_94 = afStack_54[0];
  uStack_90 = afStack_54[1];
  uStack_8c = afStack_54[2];
  uStack_88 = afStack_54[3];
  uStack_84 = afStack_54[4];
  uStack_80 = afStack_54[5];
  uStack_7c = afStack_54[6];
  uStack_78 = uStack_38;
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  uStack_60 = uStack_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  (**(code **)(pNVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 005a7e60 PartialResetState_005a7e60 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall NormalShader__PartialResetState(void)const  */

void __thiscall NormalShader__PartialResetState(NormalShader *this)

{
  undefined8 stack0xfffffffc;
  Darray_L_void____cdecl_P__void__G_ *pDVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (this->IsReadyToUse != false) {
    pDVar1 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetDefaultSetters());
    local_c = 0;
    iVar2 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
    if (local_c < iVar2) {
      do {
        puVar3 = (undefined4 *)(**(code **)pDVar1->_pad_0x0_0)(&local_c);
        (*(code *)*puVar3)();
        local_c = local_c + 1;
        iVar2 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
      } while (local_c < iVar2);
    }
  }
  return;
}

//==== 005a7ec0 Render_005a7ec0 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void  ModuleDiagram_L_classCombustionRocketModule_G___Render(void)const
    */

void 
ModuleDiagram_class_CombustionRocketModule___Render
          (ModuleDiagram_L_class_CombustionRocketModule_G_ *this)

{
  undefined8 stack0xfffffffc;
  Manager *this_00;
  int iVar1;
  NormalShader *pNVar2;
  CoreUITheme *pCVar3;
  Font *pFVar4;
  Vec2_L_int_G_ VVar5;
  Maybe_L_struct_TurretSubModule_G_ *pMVar6;
  int iVar7;
  int iVar8;
  ShaderStack SStack_9;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pNVar2 = NormalShader__GetStatic();
  Graphics__ShaderStack__ShaderStack(&SStack_9,(Shader *)pNVar2);
  this_00 = *(Manager **)(this + 8);
  UIWidget__GetTrueSize((UIWidget *)this,&VVar5);
  iVar1 = *(int *)(this + 0x168);
  iVar8 = ((int *)VVar5.X)[1];
  iVar7 = *(int *)VVar5.X;
  pMVar6 = (Maybe_L_struct_TurretSubModule_G_ *)(iVar1 + 0x70);
  pCVar3 = (CoreUITheme *)(uintptr_t)(Manager__GetTheme(this_00));
  pFVar4 = ThemeFont__Get((ThemeFont *)&(pCVar3->MainFont).FontUsed.CharInfo[1].BitmapSize.Y);
  VVar5.Y = iVar8;
  VVar5.X = iVar7;
  ThermalRocketSubModule__RenderUIDiagram
            ((ThermalRocketSubModule *)(iVar1 + 0x1e0),pFVar4,pMVar6,VVar5);
  Graphics__ShaderStack___ShaderStack(&SStack_9);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 005a7f40 SetFarPlane_005a7f40 ====

/* public: virtual void  NormalShader__SetFarPlane(float const &)const  */

void  NormalShader__SetFarPlane(NormalShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->FarPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5);
  }
  return;
}

//==== 005a7fd0 SetFarPlane_005a7fd0 ====

/* public: virtual void  NormalShader__SetFarPlane(double const &)const  */

void  NormalShader__SetFarPlane__o3(NormalShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->FarPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5);
  }
  return;
}

//==== 005a8060 SetInverseModelMatrix_005a8060 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  NormalShader__SetInverseModelMatrix(struct util__Matrix4x4_L_float_G_
   const &)const  */

void  NormalShader__SetInverseModelMatrix(NormalShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->InverseModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    *(uint32_t *)&local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5);
  }
  return;
}

//==== 005a8120 SetInverseModelMatrix_005a8120 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  NormalShader__SetInverseModelMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void  NormalShader__SetInverseModelMatrix__o3(NormalShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->InverseModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5);
  }
  return;
}

//==== 005a8210 SetInverseModelMatrixDefault_005a8210 ====

/* private: static void __cdecl NormalShader__SetInverseModelMatrixDefault(void) */

void __cdecl NormalShader__SetInverseModelMatrixDefault(void)

{
  NormalShader *pNVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pNVar1 = NormalShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pNVar1->_pad_0x0_0 + 0x28))(&local_90);
  return;
}

//==== 005a82f0 SetModelMatrix_005a82f0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  NormalShader__SetModelMatrix(struct util__Matrix4x4_L_float_G_ const
   &)const  */

void  NormalShader__SetModelMatrix(NormalShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    *(uint32_t *)&local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5);
  }
  return;
}

//==== 005a83b0 SetModelMatrix_005a83b0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  NormalShader__SetModelMatrix(struct util__Matrix4x4_L_double_G_ const
   &)const  */

void  NormalShader__SetModelMatrix__o3(NormalShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5);
  }
  return;
}

//==== 005a84a0 SetModelMatrixDefault_005a84a0 ====

/* private: static void __cdecl NormalShader__SetModelMatrixDefault(void) */

void __cdecl NormalShader__SetModelMatrixDefault(void)

{
  NormalShader *pNVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pNVar1 = NormalShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pNVar1->_pad_0x0_0 + 0x20))(&local_90);
  return;
}

//==== 005a8580 SetNearPlane_005a8580 ====

/* public: virtual void  NormalShader__SetNearPlane(float const &)const  */

void  NormalShader__SetNearPlane(NormalShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NearPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5);
  }
  return;
}

//==== 005a8610 SetNearPlane_005a8610 ====

/* public: virtual void  NormalShader__SetNearPlane(double const &)const  */

void  NormalShader__SetNearPlane__o3(NormalShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NearPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5);
  }
  return;
}

//==== 005a86a0 SetNormalMatrix_005a86a0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  NormalShader__SetNormalMatrix(struct util__Matrix3x3_L_float_G_ const
   &)const  */

void  NormalShader__SetNormalMatrix(NormalShader *this,Matrix3x3_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float local_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NormalMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    local_2c = param_1->Data[0];
    fStack_28 = param_1->Data[1];
    fStack_24 = param_1->Data[2];
    fStack_20 = param_1->Data[3];
    local_1c = param_1->Data[4];
    fStack_18 = param_1->Data[5];
    fStack_14 = param_1->Data[6];
    fStack_10 = param_1->Data[7];
    local_c = param_1->Data[8];
    (*___glewUniformMatrix3fv)(iVar1,1,0,&local_2c);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5);
  }
  return;
}

//==== 005a8760 SetNormalMatrix_005a8760 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  NormalShader__SetNormalMatrix(struct util__Matrix3x3_L_double_G_
   const &)const  */

void  NormalShader__SetNormalMatrix__o3(NormalShader *this,Matrix3x3_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NormalMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    local_2c = (float)param_1->Data[0];
    local_28 = (float)param_1->Data[1];
    *(uint32_t *)&local_24 = (float)param_1->Data[2];
    local_20 = (float)param_1->Data[3];
    local_1c = (float)param_1->Data[4];
    *(uint32_t *)&local_18 = (float)param_1->Data[5];
    *(uint32_t *)&local_14 = (float)param_1->Data[6];
    local_10 = (float)param_1->Data[7];
    local_c = (float)param_1->Data[8];
    (*___glewUniformMatrix3fv)(iVar1,1,0,&local_2c);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5);
  }
  return;
}

//==== 005a8880 SetTotalTransformMatrix_005a8880 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  NormalShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void  NormalShader__SetTotalTransformMatrix(NormalShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TotalTransformMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    *(uint32_t *)&local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5);
  }
  return;
}

//==== 005a8940 SetTotalTransformMatrix_005a8940 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  NormalShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void  NormalShader__SetTotalTransformMatrix__o3(NormalShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TotalTransformMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",5);
  }
  return;
}

//==== 005a8a30 SetTotalTransformMatrixDefault_005a8a30 ====

/* private: static void __cdecl NormalShader__SetTotalTransformMatrixDefault(void) */

void __cdecl NormalShader__SetTotalTransformMatrixDefault(void)

{
  NormalShader *pNVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pNVar1 = NormalShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pNVar1->_pad_0x0_0 + 0x30))(&local_90);
  return;
}

//==== 005a8b10 Setup_005a8b10 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall NormalShader__Setup(void) */

bool __thiscall NormalShader__Setup(NormalShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  NormalShader *pNVar2;
  Darray_L_void____cdecl_P__void__G_ *pDVar3;
  int iVar4;
  undefined4 *puVar5;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  int local_10;
  ShaderStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_28.Length = 0;
  local_34.Data = (char *)0x0;
  local_28.Data = (char *)0x0;
  local_28.Capacity = 0;
  this->IsReadyToUse = false;
  local_34.Capacity = 0;
  local_34.Length = 0;
  local_1c.Data = (char *)0x0;
  local_1c.Capacity = 0;
  local_1c.Length = 0;
  util__Str_char___Str_char(&local_1c,&local_34);
  util__Str_char___operator__o10(&local_1c,&this->AdditionalPreprocessor);
  util__Str_char___Str_char(&local_28,&local_1c);
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
  }
  util__Str_char___Str_char(&local_1c,"Color");
  util__Str_char___Str_char(&local_34,"Mode__Normal");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_34,&local_1c,&local_28);
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
  }
  if (bVar1) {
    pNVar2 = NormalShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pNVar2);
    pDVar3 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
    local_10 = 0;
    iVar4 = (**(code **)(pDVar3->_pad_0x0_0 + 0xc))();
    if (local_10 < iVar4) {
      do {
        puVar5 = (undefined4 *)(**(code **)pDVar3->_pad_0x0_0)(&local_10);
        (*(code *)*puVar5)();
        local_10 = local_10 + 1;
        iVar4 = (**(code **)(pDVar3->_pad_0x0_0 + 0xc))();
      } while (local_10 < iVar4);
    }
    Graphics__ShaderStack___ShaderStack(&local_9);
  }
  this->IsReadyToUse = bVar1;
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  return bVar1;
}

//==== 005a8c60 StaticFactory_005a8c60 ====

/* public: static class util__Reflectable * __cdecl TurretSubModule__ReflectionInfoStruct_L_struct_TurretSubModule_G___StaticFactory(void) */

Reflectable * __cdecl TurretSubModule__ReflectionInfoStruct_struct_TurretSubModule___StaticFactory(void)

{
  int *piVar1;
  Reflectable *pRVar2;
  
  pRVar2 = (Reflectable *)(uintptr_t)(port_op_new(0x100));
  if (pRVar2 != (Reflectable *)0x0) {
    pRVar2->_pad_0x0_0 = 0;
    (pRVar2->Name).Data = (char *)0x0;
    (pRVar2->Name).Capacity = 0;
    (pRVar2->Name).Length = 0;
    (pRVar2->Name).Data = (char *)0x0;
    (pRVar2->Name).Capacity = 0;
    (pRVar2->Name).Length = 0;
    pRVar2->_pad_0x0_0 = (int)&vftable_190;
    pRVar2[1]._pad_0x0_0 = 0;
    pRVar2[1].Name.Data = (char *)0x0;
    *(undefined1 *)&pRVar2[1].Name.Capacity = 0;
    pRVar2[1].Name.Length = 0;
    pRVar2[2]._pad_0x0_0 = 0;
    pRVar2[2].Name.Data = (char *)0x0;
    pRVar2[2].Name.Capacity = 1;
    memset(pRVar2 + 3,0,0x40);
    pRVar2[3].Name.Data = (char *)0x0;
    pRVar2[3].Name.Capacity = 0;
    pRVar2[3].Name.Length = 0;
    pRVar2[3]._pad_0x0_0 = (int)&vftable_186;
    *(undefined1 *)&pRVar2[7]._pad_0x0_0 = 0;
    piVar1 = &pRVar2[7].Name.Capacity;
    memset(piVar1,0,0x48);
    pRVar2[7].Name.Length = 0;
    pRVar2[8]._pad_0x0_0 = 0;
    pRVar2[8].Name.Data = (char *)0x0;
    *piVar1 = (int)&vftable_188;
    *(undefined1 *)&pRVar2[0xc]._pad_0x0_0 = 0;
    pRVar2[0xc].Name.Capacity = 0;
    pRVar2[0xc].Name.Length = 0;
    pRVar2[0xd].Name.Capacity = 0;
    pRVar2[0xd].Name.Length = 0;
    pRVar2[0xd]._pad_0x0_0 = 0;
    pRVar2[0xd].Name.Data = (char *)0x0;
    pRVar2[0xe].Name.Capacity = 0;
    pRVar2[0xe].Name.Length = 0;
    pRVar2[0xe]._pad_0x0_0 = 0;
    pRVar2[0xe].Name.Data = (char *)0x0;
    pRVar2[0xf]._pad_0x0_0 = 0;
    pRVar2[0xf].Name.Data = (char *)0x0;
    pRVar2[0xf].Name.Capacity = 0;
    pRVar2[0xf].Name.Length = 0;
  }
  return (Reflectable *)0x0;
}

//==== 005a8c80 StaticFactory_005a8c80 ====

/* public: static class util__Reflectable * __cdecl
   CombustionRocketModule__ReflectionInfoStruct_class_CombustionRocketModule___StaticFactory(void)
    */

Reflectable * __cdecl
CombustionRocketModule__ReflectionInfoStruct_class_CombustionRocketModule___StaticFactory__o2(void)

{
  EngineModule *this;
  
  this = (EngineModule *)(uintptr_t)(port_op_new(800));
  if (this != (EngineModule *)0x0) {
    memset(this,0,800);
    EngineModule__EngineModule(this);
    this->_pad_0x0_0 = (int)&vftable_for_EditorReflectable__6;
    this->_pad_0x34_13 = (int)&vftable_for_util__RTTIBaseClass__6;
    *(undefined4 *)&this[1].Gimbal.Data.CachedObjectEndRadialMomentOfInertia_kg_m2 = 0;
    *(undefined4 *)((int)&this[1].Gimbal.Data.CachedObjectEndRadialMomentOfInertia_kg_m2 + 4) = 0;
    *(undefined4 *)&this[1].Gimbal.Data.CachedObjectMass_kg = 0;
    *(undefined4 *)((int)&this[1].Gimbal.Data.CachedObjectMass_kg + 4) = 0;
    *(undefined ***)&this[1].Gimbal.Data.CachedObjectEndRadialMomentOfInertia_kg_m2 =
         &vftable_109;
    *(undefined4 *)((int)&this[1].Gimbal.Data.CachedObjectEndRadialMomentOfInertia_kg_m2 + 4) = 0;
    *(undefined4 *)&this[1].Gimbal.Data.CachedObjectMass_kg = 0;
    *(undefined4 *)((int)&this[1].Gimbal.Data.CachedObjectMass_kg + 4) = 0;
    this[1].Gimbal.Data.ExtruderModel.Pointer =
         (GameModel *)&vftable_15;
    this[1].Gimbal.Data.ExtruderModel.Controller = (ReferenceController *)0x0;
    *(undefined4 *)&this[1].Gimbal.IsValidData = 0;
  *(undefined4 *)((char *)&this[1].Gimbal + 0x8c) = 0;
    *(undefined1 *)&this[1].GimbalAngle_degrees = 0;
    ThermalRocketSubModule__ThermalRocketSubModule((ThermalRocketSubModule *)(this + 2));
    return (Reflectable *)this;
  }
  return (Reflectable *)0x0;
}

//==== 005a8d30 StaticFactory_005a8d30 ====

/* public: static class util__Reflectable * __cdecl
   ReactionWheelSubModule__ReflectionInfoStruct_class_ReactionWheelSubModule___StaticFactory(void)
    */

Reflectable * __cdecl
ReactionWheelSubModule__ReflectionInfoStruct_class_ReactionWheelSubModule___StaticFactory__o2(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x48));
  if (pRVar1 != (Reflectable *)0x0) {
    memset(pRVar1,0,0x48);
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_188;
  }
  return (Reflectable *)0x0;
}

//==== 005a8d80 StaticFactory_005a8d80 ====

/* public: static class util__Reflectable * __cdecl
   ThermalRocketSubModule__ReflectionInfoStruct_class_ThermalRocketSubModule___StaticFactory(void)
    */

Reflectable * __cdecl
ThermalRocketSubModule__ReflectionInfoStruct_class_ThermalRocketSubModule___StaticFactory__o2(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x140));
  if (pRVar1 != (Reflectable *)0x0) {
    memset(pRVar1,0,0x140);
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_182;
    pRVar1[1]._pad_0x0_0 = 0;
    pRVar1[1].Name.Data = (char *)0x0;
    pRVar1[1].Name.Capacity = 0;
    pRVar1[1].Name.Length = 0;
    pRVar1[1]._pad_0x0_0 =
         (int)&vftable_142;
    pRVar1[1].Name.Data = (char *)0x0;
    pRVar1[1].Name.Capacity = 0;
    pRVar1[1].Name.Length = 0;
    pRVar1[2]._pad_0x0_0 = 0;
    pRVar1[2].Name.Data = (char *)0x0;
    *(undefined1 *)&pRVar1[2].Name.Capacity = 0;
    pRVar1[3]._pad_0x0_0 = (int)&vftable_15;
    pRVar1[3].Name.Data = (char *)0x0;
    pRVar1[3].Name.Capacity = 0;
    pRVar1[3].Name.Length = 0;
    pRVar1[4]._pad_0x0_0 = 0;
    pRVar1[4].Name.Data = (char *)0x0;
    pRVar1[4].Name.Capacity = 0;
    pRVar1[4].Name.Length = 0;
    *(undefined1 *)&pRVar1[6]._pad_0x0_0 = 0;
    pRVar1[5]._pad_0x0_0 = 0;
    pRVar1[5].Name.Data = (char *)0x0;
    pRVar1[5].Name.Capacity = 0;
    pRVar1[5].Name.Length = 0;
    *(undefined1 *)&pRVar1[6].Name.Capacity = 0;
    pRVar1[7]._pad_0x0_0 = 0;
    pRVar1[7].Name.Data = (char *)0x0;
    *(undefined1 *)&pRVar1[7].Name.Capacity = 0;
    TurbopumpSubModule__TurbopumpSubModule((TurbopumpSubModule *)&pRVar1[0xb].Name.Capacity);
    pRVar1[0x11].Name.Length = (int)&vftable_15;
    pRVar1[0x12]._pad_0x0_0 = 0;
    pRVar1[0x12].Name.Data = (char *)0x0;
    pRVar1[0x12].Name.Capacity = 0;
    pRVar1[0x12].Name.Length = (int)&vftable_15;
    pRVar1[0x13]._pad_0x0_0 = 0;
    pRVar1[0x13].Name.Data = (char *)0x0;
    pRVar1[0x13].Name.Capacity = 0;
  }
  return (Reflectable *)0x0;
}

//==== 005a8db0 StaticFactory_005a8db0 ====

/* public: static class util__Reflectable * __cdecl TurretMotorSubModule__ReflectionInfoStruct_L_class_TurretMotorSubModule_G___StaticFactory(void) */

Reflectable * __cdecl
TurretMotorSubModule__ReflectionInfoStruct_class_TurretMotorSubModule___StaticFactory(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x40));
  if (pRVar1 != (Reflectable *)0x0) {
    memset(pRVar1,0,0x40);
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_186;
  }
  return (Reflectable *)0x0;
}

//==== 005a8e00 StaticGetMember_005a8e00 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class util__Maybe_L_structutil__ClassMember_G_ const __cdecl
   ReactionWheelSubModule__ReflectionInfoStruct_class_ReactionWheelSubModule___StaticGetMember(class
   util__Str_L_char_G_ const &) */

Str_L_char_G_ * __cdecl
ReactionWheelSubModule__ReflectionInfoStruct_class_ReactionWheelSubModule___StaticGetMember__o2
          (Str_L_char_G_ *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *in_stack_00000008;
  Str_L_char_G_ SStack_34;
  char *pcStack_28;
  int iStack_24;
  int iStack_20;
  Str_L_char_G_ SStack_1c;
  undefined1 uStack_10;
  undefined1 uStack_f;
  int iStack_c;
  undefined1 uStack_6;
  undefined1 uStack_5;
  
  iStack_c = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  if ((*(int *)(iStack_c + 4) <
        cde_l2_9213d1f9__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_9213d1f9__thread_safe_static_guard_0__),
      cde_l2_9213d1f9__thread_safe_static_guard_0__ == -1)) {
     cde_l2_8f518496_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_9213d1f9__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_8f518496_Count) {
    piVar7 = &DAT_00969788;
    do {
      if ((*(int *)(iStack_c + 4) <
            cde_l2_f29ada5c__thread_safe_static_guard_0__) &&
         (_Init_thread_header(& cde_l2_f29ada5c__thread_safe_static_guard_0__),
          cde_l2_f29ada5c__thread_safe_static_guard_0__ == -1)) {
        util__Str_char___Str_char
                  ((Str_L_char_G_ *)
                   & cde_l2_066272e6_StaticMembers,"DummyValue_DO_NOT_USE");
        DAT_00969784 = 0;
        DAT_00969788 = 0;
        DAT_0096978c = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969790,"Unused");
        _DAT_0096979c = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009697a0,"Composition");
        _DAT_009697ac = 8;
        _DAT_009697b0 = 0x10;
        _DAT_009697b4 = 4;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009697b8,"Material");
        _DAT_009697c4 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009697c8,"RotationalSpeed_RPM");
        _DAT_009697d4 = 4;
        _DAT_009697d8 = 0x18;
        _DAT_009697dc = 8;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009697e0,"double");
        _DAT_009697ec = 0;
        atexit( private__static_struct_util__ClassMember_const___cdecl_ReactionWheelSubModule__ReflectionInfoStruct_class_ReactionWheelSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
        _Init_thread_footer(& cde_l2_f29ada5c__thread_safe_static_guard_0__);
      }
      util__Str_char___Str_char(&SStack_34,(Str_L_char_G_ *)(piVar7 + -4));
      pcStack_28 = (char *)piVar7[-1];
      iStack_24 = *piVar7;
      iStack_20 = piVar7[1];
      util__Str_char___Str_char(&SStack_1c,(Str_L_char_G_ *)(piVar7 + 2));
      pcVar1 = SStack_34.Data;
      uStack_10 = (undefined1)piVar7[5];
      uStack_f = *(undefined1 *)((int)piVar7 + 0x15);
      uStack_6 = uStack_f;
      uStack_5 = uStack_10;
      if (SStack_34.Length == in_stack_00000008[2]) {
        pcVar2 = "";
        if (0 < SStack_34.Capacity) {
          pcVar2 = SStack_34.Data;
        }
        if ((int)in_stack_00000008[1] < 1) {
          puVar4 = (undefined1 *)(&cde_l2_0b2b1c9f_NullString);
        }
        else {
          puVar4 = (undefined1 *)*in_stack_00000008;
        }
        cVar3 = *pcVar2;
        if (cVar3 == '\0') {
LAB_005a8ed2:
          util__Str_char___Str_char(param_1,&SStack_34);
          param_1[1].Data = pcStack_28;
          param_1[1].Capacity = iStack_24;
          param_1[1].Length = iStack_20;
          util__Str_char___Str_char(param_1 + 2,&SStack_1c);
          *(undefined1 *)&param_1[3].Data = uStack_5;
          *(undefined1 *)((int)&param_1[3].Data + 1) = uStack_6;
          *(undefined1 *)&param_1[3].Capacity = 1;
          if (SStack_1c.Data != (char *)0x0) {
            port_op_delete(SStack_1c.Data);
          }
          if (SStack_34.Data != (char *)0x0) {
            port_op_delete(SStack_34.Data);
          }
          return param_1;
        }
        iVar5 = (int)puVar4 - (int)pcVar2;
        while (cVar3 == pcVar2[iVar5]) {
          cVar3 = pcVar2[1];
          pcVar2 = pcVar2 + 1;
          if (cVar3 == '\0') goto LAB_005a8ed2;
        }
      }
      if (SStack_1c.Data != (char *)0x0) {
        port_op_delete(SStack_1c.Data);
      }
      if (pcVar1 != (char *)0x0) {
        port_op_delete(pcVar1);
      }
      iVar6 = iVar6 + 1;
      piVar7 = piVar7 + 10;
    } while (iVar6 <  cde_l2_8f518496_Count);
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





//==== 005a90f0 StaticGetMember_005a90f0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class util__Maybe_L_structutil__ClassMember_G_ const __cdecl
   TurretMotorSubModule__ReflectionInfoStruct_class_TurretMotorSubModule___StaticGetMember(class
   util__Str_L_char_G_ const &) */

Str_L_char_G_ * __cdecl
TurretMotorSubModule__ReflectionInfoStruct_class_TurretMotorSubModule___StaticGetMember__o2
          (Str_L_char_G_ *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *in_stack_00000008;
  Str_L_char_G_ SStack_34;
  char *pcStack_28;
  int iStack_24;
  int iStack_20;
  Str_L_char_G_ SStack_1c;
  undefined1 uStack_10;
  undefined1 uStack_f;
  int iStack_c;
  undefined1 uStack_6;
  undefined1 uStack_5;
  
  iStack_c = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  if ((*(int *)(iStack_c + 4) <
        cde_l2_140a02b5__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_140a02b5__thread_safe_static_guard_0__),
      cde_l2_140a02b5__thread_safe_static_guard_0__ == -1)) {
     cde_l2_85a5d9b1_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_140a02b5__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_85a5d9b1_Count) {
    piVar7 = &DAT_00969888;
    do {
      if ((*(int *)(iStack_c + 4) <
            cde_l2_121e1ca5__thread_safe_static_guard_0__) &&
         (_Init_thread_header(& cde_l2_121e1ca5__thread_safe_static_guard_0__),
          cde_l2_121e1ca5__thread_safe_static_guard_0__ == -1)) {
        util__Str_char___Str_char
                  ((Str_L_char_G_ *)
                   & cde_l2_0a803dd0_StaticMembers,"DummyValue_DO_NOT_USE");
        DAT_00969884 = 0;
        DAT_00969888 = 0;
        DAT_0096988c = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969890,"Unused");
        _DAT_0096989c = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009698a0,"PermanentMagnet");
        _DAT_009698ac = 8;
        _DAT_009698b0 = 0x10;
        _DAT_009698b4 = 4;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009698b8,"Material");
        _DAT_009698c4 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009698c8,"PowerConsumption_W");
        _DAT_009698d4 = 4;
        _DAT_009698d8 = 0x18;
        _DAT_009698dc = 8;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009698e0,"double");
        _DAT_009698ec = 0;
        atexit( private__static_struct_util__ClassMember_const___cdecl_TurretMotorSubModule__ReflectionInfoStruct_class_TurretMotorSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
        _Init_thread_footer(& cde_l2_121e1ca5__thread_safe_static_guard_0__);
      }
      util__Str_char___Str_char(&SStack_34,(Str_L_char_G_ *)(piVar7 + -4));
      pcStack_28 = (char *)piVar7[-1];
      iStack_24 = *piVar7;
      iStack_20 = piVar7[1];
      util__Str_char___Str_char(&SStack_1c,(Str_L_char_G_ *)(piVar7 + 2));
      pcVar1 = SStack_34.Data;
      uStack_10 = (undefined1)piVar7[5];
      uStack_f = *(undefined1 *)((int)piVar7 + 0x15);
      uStack_6 = uStack_f;
      uStack_5 = uStack_10;
      if (SStack_34.Length == in_stack_00000008[2]) {
        pcVar2 = "";
        if (0 < SStack_34.Capacity) {
          pcVar2 = SStack_34.Data;
        }
        if ((int)in_stack_00000008[1] < 1) {
          puVar4 = (undefined1 *)(&cde_l2_0b2b1c9f_NullString);
        }
        else {
          puVar4 = (undefined1 *)*in_stack_00000008;
        }
        cVar3 = *pcVar2;
        if (cVar3 == '\0') {
LAB_005a91c2:
          util__Str_char___Str_char(param_1,&SStack_34);
          param_1[1].Data = pcStack_28;
          param_1[1].Capacity = iStack_24;
          param_1[1].Length = iStack_20;
          util__Str_char___Str_char(param_1 + 2,&SStack_1c);
          *(undefined1 *)&param_1[3].Data = uStack_5;
          *(undefined1 *)((int)&param_1[3].Data + 1) = uStack_6;
          *(undefined1 *)&param_1[3].Capacity = 1;
          if (SStack_1c.Data != (char *)0x0) {
            port_op_delete(SStack_1c.Data);
          }
          if (SStack_34.Data != (char *)0x0) {
            port_op_delete(SStack_34.Data);
          }
          return param_1;
        }
        iVar5 = (int)puVar4 - (int)pcVar2;
        while (cVar3 == pcVar2[iVar5]) {
          cVar3 = pcVar2[1];
          pcVar2 = pcVar2 + 1;
          if (cVar3 == '\0') goto LAB_005a91c2;
        }
      }
      if (SStack_1c.Data != (char *)0x0) {
        port_op_delete(SStack_1c.Data);
      }
      if (pcVar1 != (char *)0x0) {
        port_op_delete(pcVar1);
      }
      iVar6 = iVar6 + 1;
      piVar7 = piVar7 + 10;
    } while (iVar6 <  cde_l2_85a5d9b1_Count);
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





//==== 005a93e0 StaticGetMemberByIndex_005a93e0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   TurretSubModule__ReflectionInfoStruct_struct_TurretSubModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
TurretSubModule__ReflectionInfoStruct_struct_TurretSubModule___StaticGetMemberByIndex__o2
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_4d9d81bd__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_4d9d81bd__thread_safe_static_guard_0__);
    if ( cde_l2_4d9d81bd__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_3bc70748_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_009695e4 = 0;
      _DAT_009695e8 = 0;
      _DAT_009695ec = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009695f0,"Unused");
      _DAT_009695fc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969600,"InnerRadius_m");
      _DAT_0096960c = 4;
      _DAT_00969610 = 0x10;
      _DAT_00969614 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969618,"double");
      _DAT_00969624 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969628,"ArmorComposition");
      _DAT_00969634 = 8;
      _DAT_00969638 = 0x1c;
      _DAT_0096963c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969640,"Material");
      _DAT_0096964c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969650,"ArmorThickness_m");
      _DAT_0096965c = 4;
      _DAT_00969660 = 0x20;
      _DAT_00969664 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969668,"double");
      _DAT_00969674 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969678,"AttachmentCount");
      _DAT_00969684 = 2;
      _DAT_00969688 = 0x28;
      _DAT_0096968c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969690,"int");
      _DAT_0096969c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009696a0,"ElectricActuators");
      _DAT_009696ac = 10;
      _DAT_009696b0 = 0x30;
      _DAT_009696b4 = 0x40;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009696b8,"TurretMotorSubModule");
      _DAT_009696c4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009696c8,"MomentumWheels");
      _DAT_009696d4 = 10;
      _DAT_009696d8 = 0x78;
      _DAT_009696dc = 0x48;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009696e0,"ReactionWheelSubModule");
      _DAT_009696ec = 0x100;
      atexit( private__static_struct_util__ClassMember_const___cdecl_TurretSubModule__ReflectionInfoStruct_struct_TurretSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_4d9d81bd__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_3bc70748_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_009695e4 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_009695e8 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_009695ec + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_009695f0 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_009695fc)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_009695fd)[iVar1];
  return __return_storage_ptr__;
}





//==== 005a9660 StaticGetMemberByIndex_005a9660 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   CombustionRocketModule__ReflectionInfoStruct_class_CombustionRocketModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
CombustionRocketModule__ReflectionInfoStruct_class_CombustionRocketModule___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_c2915777__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_c2915777__thread_safe_static_guard_0__);
    if ( cde_l2_c2915777__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_cf54be1d_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00968d44 = 0;
      _DAT_00968d48 = 0;
      _DAT_00968d4c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968d50,"Unused");
      _DAT_00968d5c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968d60,"SteamWorkshopID");
      _DAT_00968d6c = 6;
      _DAT_00968d70 = 0x10;
      _DAT_00968d74 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968d78,"AStr");
      _DAT_00968d84 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968d88,"Description");
      _DAT_00968d94 = 6;
      _DAT_00968d98 = 0x20;
      _DAT_00968d9c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968da0,"AStr");
      _DAT_00968dac = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968db0,"UsesCustomName");
      _DAT_00968dbc = 1;
      _DAT_00968dc0 = 0x68;
      _DAT_00968dc4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968dc8,"bool");
      _DAT_00968dd4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968dd8,"Reaction");
      _DAT_00968de4 = 8;
      _DAT_00968de8 = 0x1d4;
      _DAT_00968dec = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968df0,"ChemicalReaction");
      _DAT_00968dfc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968e00,"StoichiometricMixtureRatio");
      _DAT_00968e0c = 4;
      _DAT_00968e10 = 0x1d8;
      _DAT_00968e14 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968e18,"double");
      _DAT_00968e24 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968e28,"ThermalRocket");
      _DAT_00968e34 = 10;
      _DAT_00968e38 = 0x1e0;
      _DAT_00968e3c = 0x140;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968e40,"ThermalRocketSubModule");
      _DAT_00968e4c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968e50,"Gimbal");
      _DAT_00968e5c = 10;
      _DAT_00968e60 = 0x70;
      _DAT_00968e64 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968e68,"TurretSubModule");
      _DAT_00968e74 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968e78,"GimbalAngle_degrees");
      _DAT_00968e84 = 4;
      _DAT_00968e88 = 0x178;
      _DAT_00968e8c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968e90,"double");
      _DAT_00968e9c = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_CombustionRocketModule__ReflectionInfoStruct_class_CombustionRocketModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_c2915777__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_cf54be1d_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_00968d44 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_00968d48 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_00968d4c + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_00968d50 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_00968d5c)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_00968d5d)[iVar1];
  return __return_storage_ptr__;
}





//==== 005a9970 StaticGetMemberByIndex_005a9970 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   ThermalRocketSubModule__ReflectionInfoStruct_class_ThermalRocketSubModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
ThermalRocketSubModule__ReflectionInfoStruct_class_ThermalRocketSubModule___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_d38ef213__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_d38ef213__thread_safe_static_guard_0__);
    if ( cde_l2_d38ef213__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_0a66a6db_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00969024 = 0;
      _DAT_00969028 = 0;
      _DAT_0096902c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969030,"Unused");
      _DAT_0096903c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969040,"ChamberComposition");
      _DAT_0096904c = 8;
      _DAT_00969050 = 0x80;
      _DAT_00969054 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969058,"Material");
      _DAT_00969064 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969068,"ThroatRadius_m");
      _DAT_00969074 = 4;
      _DAT_00969078 = 0x88;
      _DAT_0096907c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969080,"double");
      _DAT_0096908c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969090,"ChamberWallThickness_m");
      _DAT_0096909c = 4;
      _DAT_009690a0 = 0x90;
      _DAT_009690a4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009690a8,"double");
      _DAT_009690b4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009690b8,"ChamberContractionRatio");
      _DAT_009690c4 = 4;
      _DAT_009690c8 = 0x98;
      _DAT_009690cc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009690d0,"double");
      _DAT_009690dc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009690e0,"NozzleExpansionRatio");
      _DAT_009690ec = 4;
      _DAT_009690f0 = 0xa0;
      _DAT_009690f4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009690f8,"double");
      _DAT_00969104 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969108,"NozzleExpansionAngle_degrees");
      _DAT_00969114 = 4;
      _DAT_00969118 = 0xa8;
      _DAT_0096911c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969120,"double");
      _DAT_0096912c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969130,"RegenerativeCooling_Percent");
      _DAT_0096913c = 4;
      _DAT_00969140 = 0xb0;
      _DAT_00969144 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969148,"double");
      _DAT_00969154 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969158,"Injector");
      _DAT_00969164 = 10;
      _DAT_00969168 = 0xb8;
      _DAT_0096916c = 0x48;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969170,"TurbopumpSubModule");
      _DAT_0096917c = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_ThermalRocketSubModule__ReflectionInfoStruct_class_ThermalRocketSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_d38ef213__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_0a66a6db_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_00969024 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_00969028 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_0096902c + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_00969030 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0096903c)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0096903d)[iVar1];
  return __return_storage_ptr__;
}





//==== 005a9c80 StaticGetMemberCount_005a9c80 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl TurretSubModule__ReflectionInfoStruct_struct_TurretSubModule___StaticGetMemberCount(void) */

int __cdecl
TurretSubModule__ReflectionInfoStruct_struct_TurretSubModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_6b1c62e4__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_6b1c62e4__thread_safe_static_guard_0__);
    if ( cde_l2_6b1c62e4__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_31a64d9b_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_009694c4 = 0;
      _DAT_009694c8 = 0;
      _DAT_009694cc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009694d0,"Unused");
      _DAT_009694dc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009694e0,"InnerRadius_m");
      _DAT_009694ec = 4;
      _DAT_009694f0 = 0x10;
      _DAT_009694f4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009694f8,"double");
      _DAT_00969504 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969508,"ArmorComposition");
      _DAT_00969514 = 8;
      _DAT_00969518 = 0x1c;
      _DAT_0096951c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969520,"Material");
      _DAT_0096952c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969530,"ArmorThickness_m");
      _DAT_0096953c = 4;
      _DAT_00969540 = 0x20;
      _DAT_00969544 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969548,"double");
      _DAT_00969554 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969558,"AttachmentCount");
      _DAT_00969564 = 2;
      _DAT_00969568 = 0x28;
      _DAT_0096956c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969570,"int");
      _DAT_0096957c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969580,"ElectricActuators");
      _DAT_0096958c = 10;
      _DAT_00969590 = 0x30;
      _DAT_00969594 = 0x40;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969598,"TurretMotorSubModule");
      _DAT_009695a4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009695a8,"MomentumWheels");
      _DAT_009695b4 = 10;
      _DAT_009695b8 = 0x78;
      _DAT_009695bc = 0x48;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009695c0,"ReactionWheelSubModule");
      _DAT_009695cc = 0x100;
      atexit( private__static_int_const___cdecl_TurretSubModule__ReflectionInfoStruct_struct_TurretSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_6b1c62e4__thread_safe_static_guard_0__);
    }
  }
  return 7;
}





//==== 005a9ec0 StaticGetMemberCount_005a9ec0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl CombustionRocketModule__ReflectionInfoStruct_class_CombustionRocketModule___StaticGetMemberCount(void) */

int __cdecl
CombustionRocketModule__ReflectionInfoStruct_class_CombustionRocketModule___StaticGetMemberCount
          (void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_dc8b6227__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_dc8b6227__thread_safe_static_guard_0__);
    if ( cde_l2_dc8b6227__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_a4c25d95_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00968bd4 = 0;
      _DAT_00968bd8 = 0;
      _DAT_00968bdc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968be0,"Unused");
      _DAT_00968bec = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968bf0,"SteamWorkshopID");
      _DAT_00968bfc = 6;
      _DAT_00968c00 = 0x10;
      _DAT_00968c04 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968c08,"AStr");
      _DAT_00968c14 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968c18,"Description");
      _DAT_00968c24 = 6;
      _DAT_00968c28 = 0x20;
      _DAT_00968c2c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968c30,"AStr");
      _DAT_00968c3c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968c40,"UsesCustomName");
      _DAT_00968c4c = 1;
      _DAT_00968c50 = 0x68;
      _DAT_00968c54 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968c58,"bool");
      _DAT_00968c64 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968c68,"Reaction");
      _DAT_00968c74 = 8;
      _DAT_00968c78 = 0x1d4;
      _DAT_00968c7c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968c80,"ChemicalReaction");
      _DAT_00968c8c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968c90,"StoichiometricMixtureRatio");
      _DAT_00968c9c = 4;
      _DAT_00968ca0 = 0x1d8;
      _DAT_00968ca4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968ca8,"double");
      _DAT_00968cb4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968cb8,"ThermalRocket");
      _DAT_00968cc4 = 10;
      _DAT_00968cc8 = 0x1e0;
      _DAT_00968ccc = 0x140;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968cd0,"ThermalRocketSubModule");
      _DAT_00968cdc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968ce0,"Gimbal");
      _DAT_00968cec = 10;
      _DAT_00968cf0 = 0x70;
      _DAT_00968cf4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968cf8,"TurretSubModule");
      _DAT_00968d04 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968d08,"GimbalAngle_degrees");
      _DAT_00968d14 = 4;
      _DAT_00968d18 = 0x178;
      _DAT_00968d1c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968d20,"double");
      _DAT_00968d2c = 0;
      atexit( private__static_int_const___cdecl_CombustionRocketModule__ReflectionInfoStruct_class_CombustionRocketModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_dc8b6227__thread_safe_static_guard_0__);
    }
  }
  return 9;
}





//==== 005aa190 StaticGetMemberCount_005aa190 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl ReactionWheelSubModule__ReflectionInfoStruct_class_ReactionWheelSubModule___StaticGetMemberCount(void) */

int __cdecl
ReactionWheelSubModule__ReflectionInfoStruct_class_ReactionWheelSubModule___StaticGetMemberCount
          (void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_d32b740e__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_d32b740e__thread_safe_static_guard_0__);
    if ( cde_l2_d32b740e__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_7a991169_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00969704 = 0;
      _DAT_00969708 = 0;
      _DAT_0096970c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969710,"Unused");
      _DAT_0096971c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969720,"Composition");
      _DAT_0096972c = 8;
      _DAT_00969730 = 0x10;
      _DAT_00969734 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969738,"Material");
      _DAT_00969744 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969748,"RotationalSpeed_RPM");
      _DAT_00969754 = 4;
      _DAT_00969758 = 0x18;
      _DAT_0096975c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969760,"double");
      _DAT_0096976c = 0;
      atexit( private__static_int_const___cdecl_ReactionWheelSubModule__ReflectionInfoStruct_class_ReactionWheelSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_d32b740e__thread_safe_static_guard_0__);
    }
  }
  return 3;
}





//==== 005aa2c0 StaticGetMemberCount_005aa2c0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl ThermalRocketSubModule__ReflectionInfoStruct_class_ThermalRocketSubModule___StaticGetMemberCount(void) */

int __cdecl
ThermalRocketSubModule__ReflectionInfoStruct_class_ThermalRocketSubModule___StaticGetMemberCount
          (void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_83909f4d__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_83909f4d__thread_safe_static_guard_0__);
    if ( cde_l2_83909f4d__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_8bfa9956_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00968eb4 = 0;
      _DAT_00968eb8 = 0;
      _DAT_00968ebc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968ec0,"Unused");
      _DAT_00968ecc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968ed0,"ChamberComposition");
      _DAT_00968edc = 8;
      _DAT_00968ee0 = 0x80;
      _DAT_00968ee4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968ee8,"Material");
      _DAT_00968ef4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968ef8,"ThroatRadius_m");
      _DAT_00968f04 = 4;
      _DAT_00968f08 = 0x88;
      _DAT_00968f0c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968f10,"double");
      _DAT_00968f1c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968f20,"ChamberWallThickness_m");
      _DAT_00968f2c = 4;
      _DAT_00968f30 = 0x90;
      _DAT_00968f34 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968f38,"double");
      _DAT_00968f44 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968f48,"ChamberContractionRatio");
      _DAT_00968f54 = 4;
      _DAT_00968f58 = 0x98;
      _DAT_00968f5c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968f60,"double");
      _DAT_00968f6c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968f70,"NozzleExpansionRatio");
      _DAT_00968f7c = 4;
      _DAT_00968f80 = 0xa0;
      _DAT_00968f84 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968f88,"double");
      _DAT_00968f94 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968f98,"NozzleExpansionAngle_degrees");
      _DAT_00968fa4 = 4;
      _DAT_00968fa8 = 0xa8;
      _DAT_00968fac = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968fb0,"double");
      _DAT_00968fbc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968fc0,"RegenerativeCooling_Percent");
      _DAT_00968fcc = 4;
      _DAT_00968fd0 = 0xb0;
      _DAT_00968fd4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968fd8,"double");
      _DAT_00968fe4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00968fe8,"Injector");
      _DAT_00968ff4 = 10;
      _DAT_00968ff8 = 0xb8;
      _DAT_00968ffc = 0x48;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969000,"TurbopumpSubModule");
      _DAT_0096900c = 0;
      atexit( private__static_int_const___cdecl_ThermalRocketSubModule__ReflectionInfoStruct_class_ThermalRocketSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_83909f4d__thread_safe_static_guard_0__);
    }
  }
  return 9;
}





//==== 005aa590 StaticGetMemberCount_005aa590 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl TurretMotorSubModule__ReflectionInfoStruct_class_TurretMotorSubModule___StaticGetMemberCount(void) */

int __cdecl
TurretMotorSubModule__ReflectionInfoStruct_class_TurretMotorSubModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_0bb00c58__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_0bb00c58__thread_safe_static_guard_0__);
    if ( cde_l2_0bb00c58__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_d5068fe8_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00969804 = 0;
      _DAT_00969808 = 0;
      _DAT_0096980c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969810,"Unused");
      _DAT_0096981c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969820,"PermanentMagnet");
      _DAT_0096982c = 8;
      _DAT_00969830 = 0x10;
      _DAT_00969834 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969838,"Material");
      _DAT_00969844 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969848,"PowerConsumption_W");
      _DAT_00969854 = 4;
      _DAT_00969858 = 0x18;
      _DAT_0096985c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969860,"double");
      _DAT_0096986c = 0;
      atexit( private__static_int_const___cdecl_TurretMotorSubModule__ReflectionInfoStruct_class_TurretMotorSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_0bb00c58__thread_safe_static_guard_0__);
    }
  }
  return 3;
}





//==== 005aa6c0 StaticGetMembers_005aa6c0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class util__Darray_L_structutil__ClassMember_G_ const __cdecl
   ReactionWheelSubModule__ReflectionInfoStruct_class_ReactionWheelSubModule___StaticGetMembers(void) */

Darray_L_struct_util__ClassMember_G_ * __cdecl
ReactionWheelSubModule__ReflectionInfoStruct_class_ReactionWheelSubModule___StaticGetMembers(void)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  Str_L_char_G_ SStack_38;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  Str_L_char_G_ SStack_20;
  undefined1 uStack_14;
  undefined1 uStack_13;
  int iStack_10;
  int iStack_c;
  undefined1 uStack_6;
  undefined1 uStack_5;
  
  iStack_c = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  if ((*(int *)(iStack_c + 4) <
        cde_l2_c5bd8a34__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_c5bd8a34__thread_safe_static_guard_0__),
      cde_l2_c5bd8a34__thread_safe_static_guard_0__ == -1)) {
     cde_l2_5a4bbde9_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_c5bd8a34__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_5a4bbde9_Count);
  iVar3 = 0;
  if (0 <  cde_l2_5a4bbde9_Count) {
    puVar4 = &DAT_00969788;
    do {
      if ((*(int *)(iStack_c + 4) <
            cde_l2_f29ada5c__thread_safe_static_guard_0__) &&
         (_Init_thread_header(& cde_l2_f29ada5c__thread_safe_static_guard_0__),
          cde_l2_f29ada5c__thread_safe_static_guard_0__ == -1)) {
        util__Str_char___Str_char
                  ((Str_L_char_G_ *)
                   & cde_l2_066272e6_StaticMembers,"DummyValue_DO_NOT_USE");
        DAT_00969784 = 0;
        DAT_00969788 = 0;
        DAT_0096978c = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969790,"Unused");
        _DAT_0096979c = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009697a0,"Composition");
        _DAT_009697ac = 8;
        _DAT_009697b0 = 0x10;
        _DAT_009697b4 = 4;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009697b8,"Material");
        _DAT_009697c4 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009697c8,"RotationalSpeed_RPM");
        _DAT_009697d4 = 4;
        _DAT_009697d8 = 0x18;
        _DAT_009697dc = 8;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009697e0,"double");
        _DAT_009697ec = 0;
        atexit( private__static_struct_util__ClassMember_const___cdecl_ReactionWheelSubModule__ReflectionInfoStruct_class_ReactionWheelSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
        _Init_thread_footer(& cde_l2_f29ada5c__thread_safe_static_guard_0__);
      }
      util__Str_char___Str_char(&SStack_38,(Str_L_char_G_ *)(puVar4 + -4));
      uStack_2c = puVar4[-1];
      uStack_28 = *puVar4;
      uStack_24 = puVar4[1];
      util__Str_char___Str_char(&SStack_20,(Str_L_char_G_ *)(puVar4 + 2));
      uStack_14 = *(undefined1 *)(puVar4 + 5);
      iVar1 = *(int *)(in_stack_00000004 + 8);
      uStack_13 = *(undefined1 *)((int)puVar4 + 0x15);
      iStack_10 = iVar1 + 1;
      uStack_6 = uStack_13;
      uStack_5 = uStack_14;
      util__Darray_struct_util__ClassMember___SetSize(in_stack_00000004,&iStack_10);
      bVar2 = util__Darray_struct_util__ClassMember___CheckSize(in_stack_00000004,iVar1);
      if (bVar2) {
        iVar1 = *(int *)(in_stack_00000004 + 4) + *(int *)(in_stack_00000004 + 8) * 0x28;
        util__Str_char___operator__o8((Str_L_char_G_ *)(iVar1 + -0x28),&SStack_38);
        *(undefined4 *)(iVar1 + -0x1c) = uStack_2c;
        *(undefined4 *)(iVar1 + -0x18) = uStack_28;
        *(undefined4 *)(iVar1 + -0x14) = uStack_24;
        util__Str_char___operator__o8((Str_L_char_G_ *)(iVar1 + -0x10),&SStack_20);
        *(undefined1 *)(iVar1 + -4) = uStack_5;
        *(undefined1 *)(iVar1 + -3) = uStack_6;
      }
      if (SStack_20.Data != (char *)0x0) {
        port_op_delete(SStack_20.Data);
      }
      if (SStack_38.Data != (char *)0x0) {
        port_op_delete(SStack_38.Data);
      }
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 10;
    } while (iVar3 <  cde_l2_5a4bbde9_Count);
  }
  return in_stack_00000004;
}





//==== 005aa950 StaticGetMembers_005aa950 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class util__Darray_L_structutil__ClassMember_G_ const __cdecl
   TurretMotorSubModule__ReflectionInfoStruct_class_TurretMotorSubModule___StaticGetMembers(void) */

Darray_L_struct_util__ClassMember_G_ * __cdecl
TurretMotorSubModule__ReflectionInfoStruct_class_TurretMotorSubModule___StaticGetMembers__o2(void)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  Str_L_char_G_ SStack_38;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  Str_L_char_G_ SStack_20;
  undefined1 uStack_14;
  undefined1 uStack_13;
  int iStack_10;
  int iStack_c;
  undefined1 uStack_6;
  undefined1 uStack_5;
  
  iStack_c = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  if ((*(int *)(iStack_c + 4) <
        cde_l2_44127e49__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_44127e49__thread_safe_static_guard_0__),
      cde_l2_44127e49__thread_safe_static_guard_0__ == -1)) {
     cde_l2_6284d653_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_44127e49__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_6284d653_Count);
  iVar3 = 0;
  if (0 <  cde_l2_6284d653_Count) {
    puVar4 = &DAT_00969888;
    do {
      if ((*(int *)(iStack_c + 4) <
            cde_l2_121e1ca5__thread_safe_static_guard_0__) &&
         (_Init_thread_header(& cde_l2_121e1ca5__thread_safe_static_guard_0__),
          cde_l2_121e1ca5__thread_safe_static_guard_0__ == -1)) {
        util__Str_char___Str_char
                  ((Str_L_char_G_ *)
                   & cde_l2_0a803dd0_StaticMembers,"DummyValue_DO_NOT_USE");
        DAT_00969884 = 0;
        DAT_00969888 = 0;
        DAT_0096988c = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969890,"Unused");
        _DAT_0096989c = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009698a0,"PermanentMagnet");
        _DAT_009698ac = 8;
        _DAT_009698b0 = 0x10;
        _DAT_009698b4 = 4;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009698b8,"Material");
        _DAT_009698c4 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009698c8,"PowerConsumption_W");
        _DAT_009698d4 = 4;
        _DAT_009698d8 = 0x18;
        _DAT_009698dc = 8;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009698e0,"double");
        _DAT_009698ec = 0;
        atexit( private__static_struct_util__ClassMember_const___cdecl_TurretMotorSubModule__ReflectionInfoStruct_class_TurretMotorSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
        _Init_thread_footer(& cde_l2_121e1ca5__thread_safe_static_guard_0__);
      }
      util__Str_char___Str_char(&SStack_38,(Str_L_char_G_ *)(puVar4 + -4));
      uStack_2c = puVar4[-1];
      uStack_28 = *puVar4;
      uStack_24 = puVar4[1];
      util__Str_char___Str_char(&SStack_20,(Str_L_char_G_ *)(puVar4 + 2));
      uStack_14 = *(undefined1 *)(puVar4 + 5);
      iVar1 = *(int *)(in_stack_00000004 + 8);
      uStack_13 = *(undefined1 *)((int)puVar4 + 0x15);
      iStack_10 = iVar1 + 1;
      uStack_6 = uStack_13;
      uStack_5 = uStack_14;
      util__Darray_struct_util__ClassMember___SetSize(in_stack_00000004,&iStack_10);
      bVar2 = util__Darray_struct_util__ClassMember___CheckSize(in_stack_00000004,iVar1);
      if (bVar2) {
        iVar1 = *(int *)(in_stack_00000004 + 4) + *(int *)(in_stack_00000004 + 8) * 0x28;
        util__Str_char___operator__o8((Str_L_char_G_ *)(iVar1 + -0x28),&SStack_38);
        *(undefined4 *)(iVar1 + -0x1c) = uStack_2c;
        *(undefined4 *)(iVar1 + -0x18) = uStack_28;
        *(undefined4 *)(iVar1 + -0x14) = uStack_24;
        util__Str_char___operator__o8((Str_L_char_G_ *)(iVar1 + -0x10),&SStack_20);
        *(undefined1 *)(iVar1 + -4) = uStack_5;
        *(undefined1 *)(iVar1 + -3) = uStack_6;
      }
      if (SStack_20.Data != (char *)0x0) {
        port_op_delete(SStack_20.Data);
      }
      if (SStack_38.Data != (char *)0x0) {
        port_op_delete(SStack_38.Data);
      }
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 10;
    } while (iVar3 <  cde_l2_6284d653_Count);
  }
  return in_stack_00000004;
}





//==== 005aabe0 StaticGetReflectionInfo_005aabe0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct CombustionRocketModule__ReflectionInfoStruct_L_classCombustionRocketModule_G_
   * __cdecl CombustionRocketModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_CombustionRocketModule_G_ * __cdecl
CombustionRocketModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_218958c3__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_218958c3__thread_safe_static_guard_0__);
    if ( cde_l2_218958c3__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_44aa4e3c_ReflectionInfo) = &vftable_184;
      _Init_thread_footer(& cde_l2_218958c3__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_44aa4e3c_ReflectionInfo;
}





//==== 005aad60 GetTypeName_005aad60 ====


/* public: virtual class util__Str_L_char_G_ 
   MagnetoplasmadynamicThrusterModule__ReflectionInfoStruct_class_MagnetoplasmadynamicThrusterModule___GetTypeName(void)const  */

Str_L_char_G_ * 
MagnetoplasmadynamicThrusterModule__ReflectionInfoStruct_class_MagnetoplasmadynamicThrusterModule___GetTypeName(ReflectionInfoStruct_L_class_MagnetoplasmadynamicThrusterModule_G_ *this,
           Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"MagnetoplasmadynamicThrusterModule");
  return __return_storage_ptr__;
}





//==== 005aad80 GetMembers_005aad80 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const __thiscall
   MagnetoplasmadynamicThrusterModule__ReflectionInfoStruct_class_MagnetoplasmadynamicThrusterModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * __thiscall
MagnetoplasmadynamicThrusterModule__ReflectionInfoStruct_class_MagnetoplasmadynamicThrusterModule___GetMembers(ReflectionInfoStruct_L_class_MagnetoplasmadynamicThrusterModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_fa9d0f11__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_fa9d0f11__thread_safe_static_guard_0__),
      cde_l2_fa9d0f11__thread_safe_static_guard_0__ == -1)) {
     cde_l2_b2b3b75f_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_fa9d0f11__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_b2b3b75f_Count);
  iVar3 = 0;
  if (0 <  cde_l2_b2b3b75f_Count) {
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
    } while (iVar3 <  cde_l2_b2b3b75f_Count);
  }
  return in_stack_00000004;
}





//==== 005aaec0 GetMember_005aaec0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const __thiscall
   MagnetoplasmadynamicThrusterModule__ReflectionInfoStruct_class_MagnetoplasmadynamicThrusterModule___GetMember(class util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * __thiscall
MagnetoplasmadynamicThrusterModule__ReflectionInfoStruct_class_MagnetoplasmadynamicThrusterModule___GetMember(ReflectionInfoStruct_L_class_MagnetoplasmadynamicThrusterModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_5210fca1__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_5210fca1__thread_safe_static_guard_0__),
      cde_l2_5210fca1__thread_safe_static_guard_0__ == -1)) {
     cde_l2_c6158fa7_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_5210fca1__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_c6158fa7_Count) {
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
LAB_005aaf4d:
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
          if (cVar3 == '\0') goto LAB_005aaf4d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_c6158fa7_Count);
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





//==== 005ab060 GetFactory_005ab060 ====


/* public: virtual class util__Reflectable * (__cdecl*__thiscall
   MagnetoplasmadynamicThrusterModule__ReflectionInfoStruct_class_MagnetoplasmadynamicThrusterModule___GetFactory(void)const )(void) */

_func_Reflectable_ptr * __thiscall
MagnetoplasmadynamicThrusterModule__ReflectionInfoStruct_class_MagnetoplasmadynamicThrusterModule___GetFactory(ReflectionInfoStruct_L_class_MagnetoplasmadynamicThrusterModule_G_ *this)

{
  return StaticFactory;
}





//==== 005ab2f0 MethodCallerConst__public__class_util__Darray_struct_util__tuple2_class_util__Str_char__double______thiscall_MagnetoplasmadynamicThrusterModule__GetVoltageChartData_void_const__0__ ====


/* public: static class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cdouble_G__G_ __cdecl
   util__DelegateFactory_class_MagnetoplasmadynamicThrusterModule_class_util__Darray_struct_util__tuple2_class_util__Str_char__double_______MethodCallerConst__public__class_util__Darray_struct_util__tuple2_class_util__Str_char__double______thiscall_MagnetoplasmadynamicThrusterModule__GetVoltageChartData_void_const__0(void const * const) */

void * __cdecl
util__DelegateFactory_class_MagnetoplasmadynamicThrusterModule_class_util__Darray_struct_util__tuple2_class_util__Str_char__double_______MethodCallerConst__public__class_util__Darray_struct_util__tuple2_class_util__Str_char__double______thiscall_MagnetoplasmadynamicThrusterModule__GetVoltageChartData_void_const__0__o2
          (void *param_1)

{
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ *pDVar1;
  MagnetoplasmadynamicThrusterModule *in_stack_00000008;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ aDStack_14 [16];
  
  pDVar1 = (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ *)
           MagnetoplasmadynamicThrusterModule__GetVoltageChartData((MagnetoplasmadynamicThrusterModule *)in_stack_00000008,aDStack_14);
  pDVar1 = aDStack_14;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G___Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_
            ((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ *)param_1,pDVar1);
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G___Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G___dtor(aDStack_14);
  return param_1;
}





//==== 005ab320 MethodCallerConst__public__class_util__Str_char____thiscall_MagnetoplasmadynamicThrusterModule__GetVoltageTitle_void_const__0__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_class_MagnetoplasmadynamicThrusterModule_Cclassutil__Str_L_char_G__G___MethodCallerConst_L__public_class_util__Str_L_char_G___thiscallMagnetoplasmadynamicThrusterModule__GetVoltageTitle_void_const__C0__G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_class_MagnetoplasmadynamicThrusterModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_MagnetoplasmadynamicThrusterModule__GetVoltageTitle_void_const__0
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(MagnetoplasmadynamicThrusterModule__GetVoltageTitle
                     ((MagnetoplasmadynamicThrusterModule *)param_1,&SStack_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 005ab360 Pow_double_ ====


/* double __cdecl util__Pow_double(double,int) */

double __cdecl util__Pow_double(double param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dStack_c;
  
  if (param_2 < 0) {
    param_1 = 1.0 / param_1;
  }
  iVar1 = (param_2 ^ param_2 >> 0x1f) - (param_2 >> 0x1f);
  if (iVar1 != 0) {
    if (iVar1 != 1) {
      iVar2 = iVar1 + -1;
      iVar3 = 0;
      dStack_c = param_1;
      if (7 < iVar2) {
        iVar1 = (iVar1 - 9U >> 3) + 1;
        iVar3 = iVar1 * 8;
        do {
          dStack_c = dStack_c * param_1 * param_1 * param_1 * param_1 * param_1 * param_1 * param_1
                     * param_1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      if (iVar3 < iVar2) {
        iVar2 = iVar2 - iVar3;
        do {
          dStack_c = dStack_c * param_1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      return dStack_c;
    }
    return param_1;
  }
  return 1.0;
}





//==== 005ab520 scalar_deleting_destructor_005ab520 ====

/* public: virtual void * __thiscall MagnetoplasmadynamicThrusterModule:: 0 scalardeletingdestructor(unsigned int) */

void * 
MagnetoplasmadynamicThrusterModule___scalar_deleting_destructor
          (MagnetoplasmadynamicThrusterModule *this,uint param_1)

{
  this[1]._pad_0x78_30 = (int)&vftable_5;
  if ((void *)this[1]._pad_0x7c_31 != (void *)0x0) {
    port_op_delete((void *)this[1]._pad_0x7c_31);
    this[1]._pad_0x7c_31 = 0;
  }
  EngineModule___EngineModule((EngineModule *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x230);
  }
  return this;
}

//==== 005ab570 BuildModels_005ab570 ====

/* public: virtual void __thiscall MagnetoplasmadynamicThrusterModule__BuildModels(void) */

void __thiscall
MagnetoplasmadynamicThrusterModule__BuildModels(MagnetoplasmadynamicThrusterModule *this)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  Quaternion_L_double_G_ QVar2;
  MagnetoplasmadynamicThrusterModule *pMVar3;
  bool bVar4;
  Cylinder_L_double_G_ *pCVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  GameModel *pGVar9;
  ReferenceControllerRegistry *pRVar10;
  ReferenceController *pRVar11;
  VertexBufferObject *pVVar12;
  undefined8 *puVar13;
  ReferenceController *this_00;
  int *piVar14;
  int *piVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 uVar19;
  MagnetoplasmadynamicThrusterModule *pMVar20;
  GameModel *pGVar21;
  undefined1 local_64 [12];
  ReferenceController *pRStack_58;
  undefined **local_54;
  void *pvStack_50;
  undefined8 uStack_4c;
  MagnetoplasmadynamicThrusterModule *local_44;
  undefined1 local_40 [4];
  void *pvStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined **local_30;
  void *pvStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined **local_20;
  void *pvStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int local_10;
  TransformStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar14 = &this[1]._pad_0x18_6;
  local_44 = this;
  (**(code **)(uintptr_t)(this[1]._pad_0x18_6 + 0x10))();
  pMVar3 = this + 1;
  (**(code **)(uintptr_t)(this[1]._pad_0x28_10 + 0x10))();
  if ((char)this[1]._pad_0x0_0 != '\0') {
    Graphics__TransformStack__TransformStack(&local_9,Style__Default);
    pCVar5 = EngineModule__GetGimballedEngineDimensions_m
                       ((EngineModule *)this,(Cylinder_L_double_G_ *)local_40);
    Graphics__Translate(0.0,0.0,-pCVar5->Height / 1000.0);
    if ((char)this[1]._pad_0x0_0 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    uStack_4c = TurretSubModule__GetOuterRadius_m((TurretSubModule *)&this->_pad_0x70_28);
    Graphics__Translate(0.0,0.0,uStack_4c / 1000.0);
    if ((char)this[1]._pad_0x0_0 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    piVar15 = &this->_pad_0x58_22;
    TurretSubModule__BuildModels
              ((TurretSubModule *)&this->_pad_0x70_28,
               (Darray_L_class_util__SharedPtr_L_struct_GameModel_G___G_ *)piVar15,true);
    local_10 = 0;
    iVar6 = (**(code **)(uintptr_t)(*piVar15 + 0xc))();
    if (local_10 < iVar6) {
      do {
        puVar7 = (undefined4 *)(**(code **)*piVar15)(&local_10);
        pRVar11 = (ReferenceController *)puVar7[1];
        uStack_4c = (double)CONCAT44(*puVar7,(undefined4)uStack_4c);
        if (pRVar11 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar11);
        }
        iVar6 = piVar14[2];
        pRStack_58 = (ReferenceController *)(iVar6 + 1);
        util__Darray_class_util__WeakPtr_class_Body_____SetSize
                  ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_44[1]._pad_0x18_6,
                   (int *)(local_64 + 0xc));
        pMVar20 = local_44;
        piVar14 = &local_44[1]._pad_0x18_6;
        bVar4 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize
                          ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)piVar14,iVar6);
        if (bVar4) {
          iVar6 = pMVar20[1]._pad_0x20_8;
          iVar1 = pMVar20[1]._pad_0x1c_7;
          this_00 = *(ReferenceController **)(iVar1 + -4 + iVar6 * 8);
          pRStack_58 = this_00;
          *(ReferenceController **)(iVar1 + -8 + iVar6 * 8) = (ReferenceController *)(uintptr_t)((*(uint32_t*)((char*)&(uStack_4c)+4)));
          *(ReferenceController **)(iVar1 + -4 + iVar6 * 8) = pRVar11;
          if (pRVar11 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(pRVar11);
            this_00 = pRStack_58;
          }
          if (this_00 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(this_00);
          }
        }
        if (pRVar11 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar11);
        }
        local_10 = local_10 + 1;
        piVar15 = &local_44->_pad_0x58_22;
        iVar6 = (**(code **)(uintptr_t)(*piVar15 + 0xc))();
      } while (local_10 < iVar6);
    }
    Graphics__TransformStack___TransformStack(&local_9);
    this = local_44;
  }
  pCVar5 = EngineModule__GetGimballedEngineDimensions_m
                     ((EngineModule *)this,(Cylinder_L_double_G_ *)local_40);
  Graphics__Translate(0.0,0.0,-pCVar5->Height / 1000.0);
  if ((char)this[1]._pad_0x0_0 != '\0') {
    uStack_4c = TurretSubModule__GetOuterRadius_m((TurretSubModule *)&this->_pad_0x70_28);
    Graphics__Translate(0.0,0.0,uStack_4c / 1000.0);
    if ((char)this[1]._pad_0x0_0 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    uStack_4c = TurretSubModule__GetObjectOffsetFromTurret_m((TurretSubModule *)&this->_pad_0x70_28)
    ;
    Graphics__Translate(0.0,0.0,uStack_4c / 1000.0);
  }
  uStack_4c = TurbopumpSubModule__GetLength_m((TurbopumpSubModule *)&this[1]._pad_0x78_30);
  Graphics__Translate(0.0,0.0,(uStack_4c / 1000.0) * 0.5);
  piVar14 = &this->_pad_0x58_22;
  TurbopumpSubModule__BuildModels
            ((TurbopumpSubModule *)&this[1]._pad_0x78_30,
             (Darray_L_class_util__SharedPtr_L_struct_GameModel_G___G_ *)piVar14);
  puVar7 = (undefined4 *)(**(code **)(uintptr_t)(*piVar14 + 8))();
  pRVar11 = (ReferenceController *)puVar7[1];
  (*(uint32_t*)((char*)&(local_64)+8)) = *puVar7;
  pRStack_58 = pRVar11;
  (*(uint32_t*)((char*)&(uStack_4c)+4)) = (uint32_t)(uintptr_t)(pRVar11);
  if (pRVar11 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar11);
  }
  util__Darray_class_util__WeakPtr_class_Body_____Add
            ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&this[1]._pad_0x28_10,
             (WeakPtr_L_class_Body_G_ *)(local_64 + 8));
  if ((*(uint32_t*)((char*)&(uStack_4c)+4)) != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController*)((ReferenceController*)((*(uint32_t*)((char*)&(uStack_4c)+4)))));
  }
  uStack_4c = TurbopumpSubModule__GetLength_m((TurbopumpSubModule *)&this[1]._pad_0x78_30);
  Graphics__Translate(0.0,0.0,(uStack_4c / 1000.0) * 0.5);
  local_10 = GetUniversalRadialSegmentation
                       (*(double *)&this[1]._pad_0x48_18 + *(double *)&this[1]._pad_0x40_16 +
                        *(double *)&this[1]._pad_0x50_20);
  if (local_10 < 0x18) {
    local_10 = 0x18;
  }
  Graphics__Translate(0.0,0.0,(*(double *)&this[1]._pad_0x58_22 + *(double *)&this[1]._pad_0x50_20)
                              / 1000.0);
  *(uint32_t *)&local_40 = (uint32_t)0x0;
  pvStack_3c = (void *)0x0;
  uStack_38 = 0;
  uStack_34 = 0;
  pRVar11 = pRStack_58;
  uVar8 = GetCathodeSpline_m(this);
  FUN_005ab220(local_40,uVar8,pRVar11);
  local_54 = (undefined **)(&vftable_12);
  if (pvStack_50 != (void *)0x0) {
    port_op_delete(pvStack_50);
  }
  local_30 = (undefined **)0x0;
  pvStack_2c = (void *)0x0;
  uStack_28 = 0;
  uStack_24 = 0;
  pRVar11 = pRStack_58;
  uVar8 = GetAnodeSpline_m(this);
  FUN_005ab220(&local_30,uVar8,pRVar11);
  local_54 = (undefined **)(&vftable_12);
  if (pvStack_50 != (void *)0x0) {
    port_op_delete(pvStack_50);
  }
  local_20 = (undefined **)0x0;
  pvStack_1c = (void *)0x0;
  uStack_18 = 0;
  uStack_14 = 0;
  pRVar11 = pRStack_58;
  uVar8 = GetInsulatorSpline_m(this);
  FUN_005ab220(&local_20,uVar8,pRVar11);
  local_54 = (undefined **)(&vftable_12);
  if (pvStack_50 != (void *)0x0) {
    port_op_delete(pvStack_50);
  }
  Graphics__TransformStack__TransformStack(&local_9,Style__Default);
  uVar8 = 0x54442d18;
  uVar17 = 0xbfe921fb;
  uVar16 = 0;
  uVar19 = 0;
  libm_sse2_sin_precise(0.0);
  uStack_4c = (double)CONCAT44(uVar19,uVar16);
  (*(uint32_t*)((char*)&(local_64)+8)) = uVar16;
  (*(uint64_t*)&(local_64)) = (double)CONCAT44(uVar17,uVar8) * 0.0;
  pRStack_58 = (ReferenceController *)uVar19;
  uVar16 = 0x54442d18;
  uVar18 = 0xbfe921fb;
  local_54 = (undefined **)uVar8;
  pvStack_50 = (void *)uVar17;
  libm_sse2_cos_precise(0.0);
  *(uint32_t *)&QVar2.Y = (uint32_t)(uintptr_t)(pvStack_50);
  *(uint32_t *)&QVar2.X = (uint32_t)(uintptr_t)(local_54);
  QVar2.Y = (*(uint32_t*)&(local_64));
  QVar2.Z = (*(uint32_t*)((char*)&(local_64)+4));
  QVar2.Z = (*(uint32_t*)&(local_64));
  QVar2.W = (*(uint32_t*)((char*)&(local_64)+4));
  QVar2.W = uVar16;
  (*(uint32_t *)((char *)&(QVar2.W) + 4)) = uVar18;
  Graphics__Rotate(QVar2);
  pGVar9 = (GameModel *)(uintptr_t)(port_op_new(0xb8));
  if (pGVar9 == (GameModel *)0x0) {
    local_44 = (MagnetoplasmadynamicThrusterModule *)0x0;
LAB_005aba7e:
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
  }
  else {
    local_44 = (MagnetoplasmadynamicThrusterModule *)
               GameModel__GameModel
                         (pGVar9,(Material *)this[1]._pad_0x68_26,(Material *)0x0,
                          ({ __typeof__(((ulonglong)(uVar18 & 0xffffff00) << 0x20)) _t_ = ((ulonglong)(uVar18 & 0xffffff00) << 0x20); *(Maybe_L_int_G_ *)&_t_; }));
    if (local_44 == (MagnetoplasmadynamicThrusterModule *)0x0) goto LAB_005aba7e;
  }
  uStack_4c = (double)CONCAT44((*(uint32_t*)((char*)&(uStack_4c)+4)),local_44);
  pMVar20 = local_44;
  pRVar10 = util__ReferenceControllerRegistry__Get();
  pRVar11 = util__ReferenceControllerRegistry__Register(pRVar10,pMVar20);
  (*(uint32_t*)((char*)&(uStack_4c)+4)) = (uint32_t)(uintptr_t)(pRVar11);
  if (pRVar11 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(pRVar11);
  }
  util__Darray_class_util__SharedPtr_struct_GameModel_____Add
            ((Darray_L_class_util__SharedPtr_L_struct_GameModel_G___G_ *)piVar14,
             (SharedPtr_L_struct_GameModel_G_ *)&uStack_4c);
  if (((*(uint32_t*)((char*)&(uStack_4c)+4)) != (ReferenceController *)0x0) &&
     (bVar4 = util__ReferenceController__ReleaseStrongReference((ReferenceController*)((ReferenceController*)((*(uint32_t*)((char*)&(uStack_4c)+4))))), bVar4)) {
    if (local_44 != (MagnetoplasmadynamicThrusterModule *)0x0) {
      GameModel___scalar_deleting_destructor((GameModel *)local_44,1);
    }
    pMVar20 = local_44;
    pRVar10 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar10,pMVar20);
  }
  puVar7 = (undefined4 *)(**(code **)(uintptr_t)(*piVar14 + 8))();
  pVVar12 = GameModel__GetVertexObject((GameModel *)*puVar7);
  RenderSpline((Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_20,local_10,false,false,pVVar12);
  puVar7 = (undefined4 *)(**(code **)(uintptr_t)(*piVar14 + 8))();
  (*(uint32_t*)((char*)&(uStack_4c)+4)) = (uint32_t)(uintptr_t)((ReferenceController *)puVar7[1]);
  (*(uint32_t*)((char*)&(local_64)+8)) = *puVar7;
  pRStack_58 = (ReferenceController *)(uintptr_t)((*(uint32_t*)((char*)&(uStack_4c)+4)));
  if ((*(uint32_t*)((char*)&(uStack_4c)+4)) != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference((ReferenceController*)((ReferenceController*)((*(uint32_t*)((char*)&(uStack_4c)+4)))));
  }
  util__Darray_class_util__WeakPtr_class_Body_____Add
            ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&this[1]._pad_0x28_10,
             (WeakPtr_L_class_Body_G_ *)(local_64 + 8));
  if ((*(uint32_t*)((char*)&(uStack_4c)+4)) != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController*)((ReferenceController*)((*(uint32_t*)((char*)&(uStack_4c)+4)))));
  }
  uVar18 = 0;
  pGVar9 = (GameModel *)(uintptr_t)(port_op_new(0xb8));
  if (pGVar9 == (GameModel *)0x0) {
    local_44 = (MagnetoplasmadynamicThrusterModule *)0x0;
LAB_005abb99:
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
  }
  else {
    local_44 = (MagnetoplasmadynamicThrusterModule *)
               GameModel__GameModel
                         (pGVar9,(Material *)this[1]._pad_0x64_25,(Material *)0x0,
                          ({ __typeof__(((ulonglong)(uVar18 & 0xffffff00) << 0x20)) _t_ = ((ulonglong)(uVar18 & 0xffffff00) << 0x20); *(Maybe_L_int_G_ *)&_t_; }));
    if (local_44 == (MagnetoplasmadynamicThrusterModule *)0x0) goto LAB_005abb99;
  }
  uStack_4c = (double)CONCAT44((*(uint32_t*)((char*)&(uStack_4c)+4)),local_44);
  pMVar20 = local_44;
  pRVar10 = util__ReferenceControllerRegistry__Get();
  pRVar11 = util__ReferenceControllerRegistry__Register(pRVar10,pMVar20);
  (*(uint32_t*)((char*)&(uStack_4c)+4)) = (uint32_t)(uintptr_t)(pRVar11);
  if (pRVar11 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(pRVar11);
  }
  util__Darray_class_util__SharedPtr_struct_GameModel_____Add
            ((Darray_L_class_util__SharedPtr_L_struct_GameModel_G___G_ *)piVar14,
             (SharedPtr_L_struct_GameModel_G_ *)&uStack_4c);
  if (((*(uint32_t*)((char*)&(uStack_4c)+4)) != (ReferenceController *)0x0) &&
     (bVar4 = util__ReferenceController__ReleaseStrongReference((ReferenceController*)((ReferenceController*)((*(uint32_t*)((char*)&(uStack_4c)+4))))), bVar4)) {
    if (local_44 != (MagnetoplasmadynamicThrusterModule *)0x0) {
      GameModel___scalar_deleting_destructor((GameModel *)local_44,1);
    }
    pMVar20 = local_44;
    pRVar10 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar10,pMVar20);
  }
  puVar7 = (undefined4 *)(**(code **)(uintptr_t)(*piVar14 + 8))();
  pVVar12 = GameModel__GetVertexObject((GameModel *)*puVar7);
  RenderSpline((Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_30,local_10,false,false,pVVar12);
  puVar7 = (undefined4 *)(**(code **)(uintptr_t)(*piVar14 + 8))();
  (*(uint32_t*)((char*)&(uStack_4c)+4)) = (uint32_t)(uintptr_t)((ReferenceController *)puVar7[1]);
  (*(uint32_t*)((char*)&(local_64)+8)) = *puVar7;
  pRStack_58 = (ReferenceController *)(uintptr_t)((*(uint32_t*)((char*)&(uStack_4c)+4)));
  if ((*(uint32_t*)((char*)&(uStack_4c)+4)) != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference((ReferenceController*)((ReferenceController*)((*(uint32_t*)((char*)&(uStack_4c)+4)))));
  }
  util__Darray_class_util__WeakPtr_class_Body_____Add
            ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&this[1]._pad_0x28_10,
             (WeakPtr_L_class_Body_G_ *)(local_64 + 8));
  if ((*(uint32_t*)((char*)&(uStack_4c)+4)) != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController*)((ReferenceController*)((*(uint32_t*)((char*)&(uStack_4c)+4)))));
  }
  uVar18 = 0;
  pGVar9 = (GameModel *)(uintptr_t)(port_op_new(0xb8));
  if (pGVar9 == (GameModel *)0x0) {
    pGVar9 = (GameModel *)0x0;
  }
  else {
    pGVar9 = (GameModel *)
             GameModel__GameModel
                       (pGVar9,(Material *)this[1]._pad_0x60_24,(Material *)0x0,
                        ({ __typeof__(((ulonglong)(uVar18 & 0xffffff00) << 0x20)) _t_ = ((ulonglong)(uVar18 & 0xffffff00) << 0x20); *(Maybe_L_int_G_ *)&_t_; }));
    if (pGVar9 != (GameModel *)0x0) goto LAB_005abccd;
  }
  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl",
                  0xd4,"NewPointer",(char *)0x0);
  DebugBreak();
LAB_005abccd:
  uStack_4c = (double)CONCAT44((*(uint32_t*)((char*)&(uStack_4c)+4)),pGVar9);
  pGVar21 = pGVar9;
  pRVar10 = util__ReferenceControllerRegistry__Get();
  pRVar11 = util__ReferenceControllerRegistry__Register(pRVar10,pGVar21);
  (*(uint32_t*)((char*)&(uStack_4c)+4)) = (uint32_t)(uintptr_t)(pRVar11);
  if (pRVar11 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(pRVar11);
  }
  util__Darray_class_util__SharedPtr_struct_GameModel_____Add
            ((Darray_L_class_util__SharedPtr_L_struct_GameModel_G___G_ *)piVar14,
             (SharedPtr_L_struct_GameModel_G_ *)&uStack_4c);
  if (((*(uint32_t*)((char*)&(uStack_4c)+4)) != (ReferenceController *)0x0) &&
     (bVar4 = util__ReferenceController__ReleaseStrongReference((ReferenceController*)((ReferenceController*)((*(uint32_t*)((char*)&(uStack_4c)+4))))), bVar4)) {
    if (pGVar9 != (GameModel *)0x0) {
      GameModel___scalar_deleting_destructor(pGVar9,1);
    }
    pRVar10 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar10,pGVar9);
  }
  puVar7 = (undefined4 *)(**(code **)(uintptr_t)(*piVar14 + 8))();
  pVVar12 = GameModel__GetVertexObject((GameModel *)*puVar7);
  RenderSpline((Darray_L_struct_util__Vec2_L_double_G___G_ *)local_40,local_10,false,false,pVVar12);
  puVar13 = (undefined8 *)(**(code **)(uintptr_t)(*piVar14 + 8))();
  pRVar11 = *(ReferenceController **)((int)puVar13 + 4);
  uStack_4c = (double)*puVar13;
  if (pRVar11 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar11);
  }
  util__Darray_class_util__WeakPtr_class_Body_____Add
            ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&pMVar3->_pad_0x28_10,
             (WeakPtr_L_class_Body_G_ *)&uStack_4c);
  if (pRVar11 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar11);
  }
  Graphics__TransformStack___TransformStack(&local_9);
  local_20 = (undefined **)(&vftable_12);
  if (pvStack_1c != (void *)0x0) {
    port_op_delete(pvStack_1c);
  }
  pvStack_1c = (void *)0x0;
  local_20 = (undefined **)(&vftable);
  local_30 = (undefined **)(&vftable_12);
  if (pvStack_2c != (void *)0x0) {
    port_op_delete(pvStack_2c);
  }
  pvStack_2c = (void *)0x0;
  local_30 = (undefined **)(&vftable);
  *(uint32_t *)&local_40 = (uint32_t)&vftable_12;
  if (pvStack_3c != (void *)0x0) {
    port_op_delete(pvStack_3c);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

//==== 005abe00 GenerateDesignUI_005abe00 ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual struct UIWidget * 
   MagnetoplasmadynamicThrusterModule__GenerateDesignUI(class Manager *)const  */

UIWidget * 
MagnetoplasmadynamicThrusterModule__GenerateDesignUI
          (MagnetoplasmadynamicThrusterModule *this,Manager *param_1)

{
  undefined8 stack0xfffffa0c;
  undefined8 stack0xfffffa2c;
  undefined8 stack0xfffffa40;
  UIAttributes UVar1;
  UIAttributes UVar2;
  UIAttributes UVar3;
  LayoutAttributes LVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  UIWidget *pUVar8;
  PieChart *this_00;
  UIAttributes *pUVar9;
  float *pfVar10;
  Data *pDVar11;
  bool bVar12;
  undefined1 in_stack_fffffa0c [24];
  int in_stack_fffffa24;
  int in_stack_fffffa28;
  Attribute_L_bool_G_ in_stack_fffffa2c;
  void *in_stack_fffffa38;
  _func___cdecl_bool_void_ptr *in_stack_fffffa3c;
  undefined1 auVar13 [12];
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [44];
  undefined1 auVar22 [44];
  undefined1 in_stack_fffffa40 [276];
  undefined1 auVar23 [44];
  float in_stack_fffffb54;
  int in_stack_fffffb58;
  float fVar24;
  void *in_stack_fffffb5c;
  void *pvVar25;
  _func___cdecl_Color_void_ptr *in_stack_fffffb60;
  _func___cdecl_Color_void_ptr *p_Var26;
  float in_stack_fffffb64;
  float fVar27;
  float in_stack_fffffb68;
  float fVar28;
  float in_stack_fffffb6c;
  float fVar29;
  int in_stack_fffffb70;
  float fVar30;
  float in_stack_fffffb74;
  Attribute_L_util__Str_L_char_G___G_ *pAVar31;
  float fVar32;
  float in_stack_fffffb78;
  float fVar33;
  float in_stack_fffffb7c;
  Attribute_L_util__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___G_ *pAVar34;
  float fVar35;
  bool bVar36;
  float fVar37;
  float fVar38;
  Manager *pMVar39;
  UIAttributes local_46c;
  UIAttributes local_324;
  UIAttributes local_1dc;
  LayoutAttributes local_94;
  Attribute_L_util__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___G_ local_64;
  Darray_L_util__SharedPtr_L_UIWidget_G___G_ local_4c;
  Attribute_L_util__Str_L_char_G___G_ local_3c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined8 uStack_18;
  UIRowLayout *local_10;
  UIWidget *local_c;
  UIWidget *local_8;
  undefined1 auVar21 [32];
  
  bVar7 = false;
  bVar6 = false;
  bVar12 = false;
  bVar5 = false;
  bVar36 = false;
  local_10 = (UIRowLayout *)0x0;
  local_10 = (UIRowLayout *)(uintptr_t)(port_op_new(0x218));
  if (local_10 == (UIRowLayout *)0x0) {
    pUVar8 = (UIWidget *)0x0;
  }
  else {
    pUVar8 = (UIWidget *)(uintptr_t)(port_op_new(0x170));
    if (pUVar8 == (UIWidget *)0x0) {
      local_8 = (UIWidget *)0x0;
    }
    else {
      fVar37 = 8.333465e-39;
      pMVar39 = param_1;
      local_8 = pUVar8;
      UIAttributes__UIAttributes(&local_1dc,param_1);
      local_28 = 0;
      uStack_20 = 0x3ff0000000000000;
      uStack_18 = 0x3ff0000000000000;
      uStack_24 = 0;
      local_1dc.FillProportion.Getter.Callee = (void *)0x0;
      local_1dc.FillProportion.Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0;
      local_1dc.FillProportion.Value.X = 0;
      local_1dc.FillProportion.Value.Y = 0x3ff00000;
      local_1dc.FillProportion.Value.Y = 1.0;
      in_stack_fffffa38 = (void *)0x5abe8b;
      UIAttributes__UIAttributes((UIAttributes *)&stack0xfffffa40,&local_1dc);
      in_stack_fffffa3c = (_func___cdecl_bool_void_ptr *)0x5abe92;
      UVar3.BackgroundColor.Data.Value.Alpha = in_stack_fffffb54;
*(uint32_t *)&auVar13 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffa40) + 4)));
*(uint32_t *)&auVar16 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffa40) + 32)));
*(uint32_t *)&auVar17 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffa40) + 44)));
*(uint32_t *)&auVar19 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffa40) + 180)));
*(uint32_t *)&auVar20 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffa40) + 196)));
      UVar3.Parent = (Manager *)(*(uint32_t*)&(in_stack_fffffa40));
      UVar3.Tag.Data = (char *)(*(uint32_t*)&(auVar13));
      UVar3.Tag.Capacity = (*(uint32_t*)((char*)&(auVar13)+4));
      UVar3.Tag.Length = (*(uint32_t*)((char*)&(auVar13)+8));
      uVar14 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffa40) + 16)),0);
      uVar15 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffa40) + 16)),8);
      UVar3.Location.Getter.Callee = (void *)(int)uVar14;
      UVar3.Location.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar14 >> 0x20);
      UVar3.Location.Value.X = (int)uVar15;
      UVar3.Location.Value.Y = (int)((ulonglong)uVar15 >> 0x20);
      UVar3.Visible.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar16));
      UVar3.Visible.Getter.CallbackFunction =
           (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar16)) >> 0x20);
      UVar3.Visible.Value = (bool)auVar16[8];
      (*(uint24_t *)((char *)&(UVar3.Visible) + 9)) = (*(uint24_t*)((char*)&(auVar16)+9));
      UVar3.Enabled.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar17));
      UVar3.Enabled.Getter.CallbackFunction =
           (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar17)) >> 0x20);
      UVar3.Enabled.Value = (bool)auVar17[8];
      (*(uint24_t *)((char *)&(UVar3.Enabled) + 9)) = (*(uint24_t*)((char*)&(auVar17)+9));
      uVar14 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffa40) + 56)),0);
      uVar15 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffa40) + 56)),8);
      UVar3.DesiredSize.Getter.Callee = (void *)(int)uVar14;
      UVar3.DesiredSize.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar14 >> 0x20);
      UVar3.DesiredSize.Value.X = (int)uVar15;
      UVar3.DesiredSize.Value.Y = (int)((ulonglong)uVar15 >> 0x20);
      uVar14 = SUB248((*(uint32_t *)((char *)&(in_stack_fffffa40) + 72)),0);
*(uint32_t *)&auVar18 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffffa40) + 72)),8));
      UVar3.FillProportion.Getter.Callee = (void *)(int)uVar14;
      UVar3.FillProportion.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar14 >> 0x20);
      UVar3.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar18));
      UVar3.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar18)+8));
      uVar14 = SUB128((*(uint32_t *)((char *)&(in_stack_fffffa40) + 96)),0);
      UVar3.HitTestShape.Getter.Callee = (void *)(int)uVar14;
      UVar3.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)(int)((ulonglong)uVar14 >> 0x20));
      UVar3.HitTestShape.Value = SUB124((*(uint32_t *)((char *)&(in_stack_fffffa40) + 96)),8);
      (*(uint32_t *)((char *)&(UVar3) + 108)) = (*(uint32_t *)((char *)&(in_stack_fffffa40) + 108));
      uVar14 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffa40) + 112)),0);
      UVar3.Depth.Getter.Callee = (void *)(int)uVar14;
      UVar3.Depth.Getter.CallbackFunction =
           (_func___cdecl_double_void_ptr *)(int)((ulonglong)uVar14 >> 0x20);
      UVar3.Depth.Value = (double)SUB168((*(uint32_t *)((char *)&(in_stack_fffffa40) + 112)),8);
      uVar14 = SUB128((*(uint32_t *)((char *)&(in_stack_fffffa40) + 128)),0);
      UVar3.Icon.Getter.Callee = (void *)(int)uVar14;
      UVar3.Icon.Getter.CallbackFunction = (void (* (*)(void *))(void))((_func___cdecl__func___cdecl_void_ptr_void_ptr *)(int)((ulonglong)uVar14 >> 0x20));
      UVar3.Icon.Value = (_func___cdecl_void *)SUB124((*(uint32_t *)((char *)&(in_stack_fffffa40) + 128)),8);
      uVar14 = SUB208((*(uint32_t *)((char *)&(in_stack_fffffa40) + 140)),0);
*(uint32_t *)&auVar13 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffffa40) + 140)),8));
      UVar3.Tooltip.Getter.Callee = (void *)(int)uVar14;
      UVar3.Tooltip.Getter.CallbackFunction =
           (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar14 >> 0x20);
      UVar3.Tooltip.Value.Data = (char *)(*(uint32_t*)&(auVar13));
      UVar3.Tooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar13)+4));
      UVar3.Tooltip.Value.Length = (*(uint32_t*)((char*)&(auVar13)+8));
      uVar14 = SUB208((*(uint32_t *)((char *)&(in_stack_fffffa40) + 160)),0);
*(uint32_t *)&auVar13 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffffa40) + 160)),8));
      UVar3.VerboseTooltip.Getter.Callee = (void *)(int)uVar14;
      UVar3.VerboseTooltip.Getter.CallbackFunction =
           (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar14 >> 0x20);
      UVar3.VerboseTooltip.Value.Data = (char *)(*(uint32_t*)&(auVar13));
      UVar3.VerboseTooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar13)+4));
      UVar3.VerboseTooltip.Value.Length = (*(uint32_t*)((char*)&(auVar13)+8));
      uVar14 = SUB128((*(uint32_t *)((char *)&(auVar19) + 0)),0);
      UVar3.TextFont.Data.Getter.Callee = (void *)(int)uVar14;
      UVar3.TextFont.Data.Getter.CallbackFunction =
           (_func___cdecl_Font_ptr_void_ptr *)(int)((ulonglong)uVar14 >> 0x20);
      UVar3.TextFont.Data.Value = (Font *)SUB124((*(uint32_t *)((char *)&(auVar19) + 0)),8);
      UVar3.TextFont.IsValidData = (bool)auVar19[0xc];
      (*(uint32_t *)((char *)&(UVar3.TextFont) + 13)) = (*(uint32_t *)((char *)&(auVar19) + 13));
      uVar14 = SUB408((*(uint32_t *)((char *)&(auVar20) + 0)),0);
*(uint32_t *)&auVar21 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar20) + 0)),8));
      UVar3.ForegroundColor.Data.Getter.Callee = (void *)(int)uVar14;
      UVar3.ForegroundColor.Data.Getter.CallbackFunction =
           (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar14 >> 0x20);
      UVar3.ForegroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar21));
      UVar3.ForegroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar21)+4));
      UVar3.ForegroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar21)+8));
      UVar3.ForegroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar21) + 12));
      UVar3.ForegroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar21) + 16));
      UVar3.ForegroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar21) + 20));
      UVar3.ForegroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar21) + 24));
      UVar3.ForegroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar21) + 28));
      UVar3.ForegroundColor.IsValidData = (bool)auVar20[0x28];
      (*(uint32_t *)((char *)&(UVar3.ForegroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar20) + 41));
      UVar3.BackgroundColor.Data.Getter.Callee = (void *)(int)(*(uint64_t *)((char *)&(in_stack_fffffa40) + 240));
      UVar3.BackgroundColor.Data.Getter.CallbackFunction =
           (_func___cdecl_Color_void_ptr *)(int)((ulonglong)(*(uint64_t *)((char *)&(in_stack_fffffa40) + 240)) >> 0x20);
      UVar3.BackgroundColor.Data.Value._pad_0x0_0 = (*(uint32_t *)((char *)&(in_stack_fffffa40) + 248));
      UVar3.BackgroundColor.Data.Value._pad_0x4_1 = (*(uint32_t *)((char *)&(in_stack_fffffa40) + 252));
      UVar3.BackgroundColor.Data.Value._pad_0x8_2 = (*(uint32_t *)((char *)&(in_stack_fffffa40) + 256));
      UVar3.BackgroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(in_stack_fffffa40) + 260));
      UVar3.BackgroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(in_stack_fffffa40) + 264));
      UVar3.BackgroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(in_stack_fffffa40) + 268));
      UVar3.BackgroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(in_stack_fffffa40) + 272));
      (*(uint32_t *)((char *)&(UVar3.BackgroundColor) + 40)) = in_stack_fffffb58;
      UVar3.TextColor.Data.Getter.Callee = in_stack_fffffb5c;
      UVar3.TextColor.Data.Getter.CallbackFunction = in_stack_fffffb60;
      UVar3.TextColor.Data.Value._pad_0x0_0 = (int)in_stack_fffffb64;
      UVar3.TextColor.Data.Value._pad_0x4_1 = (int)in_stack_fffffb68;
      UVar3.TextColor.Data.Value._pad_0x8_2 = (int)in_stack_fffffb6c;
      UVar3.TextColor.Data.Value._pad_0xc_3 = in_stack_fffffb70;
      UVar3.TextColor.Data.Value.Hue_degrees = in_stack_fffffb74;
      UVar3.TextColor.Data.Value.Saturation = in_stack_fffffb78;
      UVar3.TextColor.Data.Value.Value = in_stack_fffffb7c;
      UVar3.TextColor.Data.Value.Alpha = fVar37;
      (*(uint32_t *)((char *)&(UVar3.TextColor) + 40)) = (uint32_t)(uintptr_t)(pMVar39);
      UIWidget__UIWidget(pUVar8,UVar3);
      pUVar8->_pad_0x0_0 = (int)&vftable_195;
      pUVar8[1]._pad_0x0_0 = (int)this;
      UIAttributes___UIAttributes(&local_1dc);
    }
    this_00 = (PieChart *)(uintptr_t)(port_op_new(0x1e0));
    bVar12 = this_00 == (PieChart *)0x0;
    if (bVar12) {
      local_c = (UIWidget *)0x0;
    }
    else {
      local_64.Getter.CallbackFunction =
           util__DelegateFactory_L_MagnetoplasmadynamicThrusterModule_Cutil__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___G___MethodCallerConst_L__public__class_util__Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G____thiscall_MagnetoplasmadynamicThrusterModule__GetVoltageChartData_void_const__C0__G_
      ;
      local_64.Value._pad_0x0_0 =
           (int)&vftable_105;
      local_64.Value.Data = (tuple2_L_util__Str_L_char_G__Cdouble_G_ *)0x0;
      local_64.Value.Size = 0;
      local_64.Value.Capacity = 0;
      local_3c.Getter.CallbackFunction =
           util__DelegateFactory_L_MagnetoplasmadynamicThrusterModule_Cutil__Str_L_char_G___G___MethodCallerConst_L__public__class_util__Str_L_char_G____thiscall_MagnetoplasmadynamicThrusterModule__GetVoltageTitle_void_const__C0__G_
      ;
      local_3c.Value.Data = (char *)0x0;
      local_3c.Value.Capacity = 0;
      local_3c.Value.Length = 0;
      local_64.Getter.Callee = this;
      local_3c.Getter.Callee = this;
      pUVar9 = (UIAttributes *)UIAttributes__UIAttributes(&local_46c,param_1);
      pAVar34 = &local_64;
      pUVar8 = (UIWidget *)0x0;
      bVar36 = false;
      fVar37 = 1.4013e-43;
      pAVar31 = &local_3c;
      local_28 = 0;
      uStack_20 = 0x3ff0000000000000;
      uStack_18 = 0;
      uStack_24 = 0;
      (pUVar9->FillProportion).Getter.Callee = (void *)0x0;
      (pUVar9->FillProportion).Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0;
      *(undefined4 *)&(pUVar9->FillProportion).Value.X = 0;
      *(undefined4 *)((int)&(pUVar9->FillProportion).Value.X + 4) = 0x3ff00000;
      (pUVar9->FillProportion).Value.Y = 0.0;
      in_stack_fffffa24 = 0x5abf3e;
      UIAttributes__UIAttributes((UIAttributes *)&stack0xfffffa2c,pUVar9);
      in_stack_fffffa28 = 0x5abf45;
      UVar2.Tag.Length = (int)in_stack_fffffa38;
      (*(uint32_t *)((char *)&(UVar2) + 0)) = *(uint32_t *)&(in_stack_fffffa2c);
      UVar2.Location.Getter.Callee = in_stack_fffffa3c;
*(uint32_t *)&auVar13 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffa40) + 12)));
*(uint32_t *)&auVar16 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffa40) + 24)));
*(uint32_t *)&auVar19 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffa40) + 160)));
*(uint32_t *)&auVar20 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffa40) + 176)));
*(uint32_t *)&auVar22 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffa40) + 220)));
      UVar2.Location.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_int_G__void_ptr *)(*(uint32_t*)&(in_stack_fffffa40));
      UVar2.Location.Value.X = (int)(*(uint64_t*)((char*)&(in_stack_fffffa40)+4));
      UVar2.Location.Value.Y = (int)((ulonglong)(*(uint64_t*)((char*)&(in_stack_fffffa40)+4)) >> 0x20);
      UVar2.Visible.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar13));
      UVar2.Visible.Getter.CallbackFunction =
           (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar13)) >> 0x20);
      UVar2.Visible.Value = (bool)auVar13[8];
      (*(uint24_t *)((char *)&(UVar2.Visible) + 9)) = (*(uint24_t*)((char*)&(auVar13)+9));
      UVar2.Enabled.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar16));
      UVar2.Enabled.Getter.CallbackFunction =
           (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar16)) >> 0x20);
      UVar2.Enabled.Value = (bool)auVar16[8];
      (*(uint24_t *)((char *)&(UVar2.Enabled) + 9)) = (*(uint24_t*)((char*)&(auVar16)+9));
      uVar14 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffa40) + 36)),0);
      uVar15 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffa40) + 36)),8);
      UVar2.DesiredSize.Getter.Callee = (void *)(int)uVar14;
      UVar2.DesiredSize.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar14 >> 0x20);
      UVar2.DesiredSize.Value.X = (int)uVar15;
      UVar2.DesiredSize.Value.Y = (int)((ulonglong)uVar15 >> 0x20);
      uVar14 = SUB248((*(uint32_t *)((char *)&(in_stack_fffffa40) + 52)),0);
*(uint32_t *)&auVar18 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffffa40) + 52)),8));
      UVar2.FillProportion.Getter.Callee = (void *)(int)uVar14;
      UVar2.FillProportion.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar14 >> 0x20);
      UVar2.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar18));
      UVar2.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar18)+8));
      uVar14 = SUB128((*(uint32_t *)((char *)&(in_stack_fffffa40) + 76)),0);
      UVar2.HitTestShape.Getter.Callee = (void *)(int)uVar14;
      UVar2.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)(int)((ulonglong)uVar14 >> 0x20));
      UVar2.HitTestShape.Value = SUB124((*(uint32_t *)((char *)&(in_stack_fffffa40) + 76)),8);
      (*(uint32_t *)((char *)&(UVar2) + 108)) = (*(uint32_t *)((char *)&(in_stack_fffffa40) + 88));
      uVar14 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffa40) + 92)),0);
      UVar2.Depth.Getter.Callee = (void *)(int)uVar14;
      UVar2.Depth.Getter.CallbackFunction =
           (_func___cdecl_double_void_ptr *)(int)((ulonglong)uVar14 >> 0x20);
      UVar2.Depth.Value = (double)SUB168((*(uint32_t *)((char *)&(in_stack_fffffa40) + 92)),8);
      uVar14 = SUB128((*(uint32_t *)((char *)&(in_stack_fffffa40) + 108)),0);
      UVar2.Icon.Getter.Callee = (void *)(int)uVar14;
      UVar2.Icon.Getter.CallbackFunction = (void (* (*)(void *))(void))((_func___cdecl__func___cdecl_void_ptr_void_ptr *)(int)((ulonglong)uVar14 >> 0x20));
      UVar2.Icon.Value = (_func___cdecl_void *)SUB124((*(uint32_t *)((char *)&(in_stack_fffffa40) + 108)),8);
      uVar14 = SUB208((*(uint32_t *)((char *)&(in_stack_fffffa40) + 120)),0);
*(uint32_t *)&auVar13 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffffa40) + 120)),8));
      UVar2.Tooltip.Getter.Callee = (void *)(int)uVar14;
      UVar2.Tooltip.Getter.CallbackFunction =
           (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar14 >> 0x20);
      UVar2.Tooltip.Value.Data = (char *)(*(uint32_t*)&(auVar13));
      UVar2.Tooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar13)+4));
      UVar2.Tooltip.Value.Length = (*(uint32_t*)((char*)&(auVar13)+8));
      uVar14 = SUB208((*(uint32_t *)((char *)&(in_stack_fffffa40) + 140)),0);
*(uint32_t *)&auVar13 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffffa40) + 140)),8));
      UVar2.VerboseTooltip.Getter.Callee = (void *)(int)uVar14;
      UVar2.VerboseTooltip.Getter.CallbackFunction =
           (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar14 >> 0x20);
      UVar2.VerboseTooltip.Value.Data = (char *)(*(uint32_t*)&(auVar13));
      UVar2.VerboseTooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar13)+4));
      UVar2.VerboseTooltip.Value.Length = (*(uint32_t*)((char*)&(auVar13)+8));
      uVar14 = SUB128((*(uint32_t *)((char *)&(auVar19) + 0)),0);
      UVar2.TextFont.Data.Getter.Callee = (void *)(int)uVar14;
      UVar2.TextFont.Data.Getter.CallbackFunction =
           (_func___cdecl_Font_ptr_void_ptr *)(int)((ulonglong)uVar14 >> 0x20);
      UVar2.TextFont.Data.Value = (Font *)SUB124((*(uint32_t *)((char *)&(auVar19) + 0)),8);
      UVar2.TextFont.IsValidData = (bool)auVar19[0xc];
      (*(uint32_t *)((char *)&(UVar2.TextFont) + 13)) = (*(uint32_t *)((char *)&(auVar19) + 13));
      uVar14 = SUB408((*(uint32_t *)((char *)&(auVar20) + 0)),0);
*(uint32_t *)&auVar21 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar20) + 0)),8));
      UVar2.ForegroundColor.Data.Getter.Callee = (void *)(int)uVar14;
      UVar2.ForegroundColor.Data.Getter.CallbackFunction =
           (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar14 >> 0x20);
      UVar2.ForegroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar21));
      UVar2.ForegroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar21)+4));
      UVar2.ForegroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar21)+8));
      UVar2.ForegroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar21) + 12));
      UVar2.ForegroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar21) + 16));
      UVar2.ForegroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar21) + 20));
      UVar2.ForegroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar21) + 24));
      UVar2.ForegroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar21) + 28));
      UVar2.ForegroundColor.IsValidData = (bool)auVar20[0x28];
      (*(uint32_t *)((char *)&(UVar2.ForegroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar20) + 41));
      uVar14 = SUB408((*(uint32_t *)((char *)&(auVar22) + 0)),0);
*(uint32_t *)&auVar21 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar22) + 0)),8));
      UVar2.BackgroundColor.Data.Getter.Callee = (void *)(int)uVar14;
      UVar2.BackgroundColor.Data.Getter.CallbackFunction =
           (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar14 >> 0x20);
      UVar2.BackgroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar21));
      UVar2.BackgroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar21)+4));
      UVar2.BackgroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar21)+8));
      UVar2.BackgroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar21) + 12));
      UVar2.BackgroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar21) + 16));
      UVar2.BackgroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar21) + 20));
      UVar2.BackgroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar21) + 24));
      UVar2.BackgroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar21) + 28));
      UVar2.BackgroundColor.IsValidData = (bool)auVar22[0x28];
      (*(uint32_t *)((char *)&(UVar2.BackgroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar22) + 41));
      UVar2.TextColor.Data.Getter.Callee = (void *)(int)(*(uint64_t *)((char *)&(in_stack_fffffa40) + 264));
      UVar2.TextColor.Data.Getter.CallbackFunction =
           (_func___cdecl_Color_void_ptr *)(int)((ulonglong)(*(uint64_t *)((char *)&(in_stack_fffffa40) + 264)) >> 0x20);
      UVar2.TextColor.Data.Value._pad_0x0_0 = (*(uint32_t *)((char *)&(in_stack_fffffa40) + 272));
      UVar2.TextColor.Data.Value._pad_0x4_1 = (int)in_stack_fffffb54;
      UVar2.TextColor.Data.Value._pad_0x8_2 = in_stack_fffffb58;
      UVar2.TextColor.Data.Value._pad_0xc_3 = (int)in_stack_fffffb5c;
      UVar2.TextColor.Data.Value.Hue_degrees = (double)(uintptr_t)((float)(int)(uintptr_t)(in_stack_fffffb60));
      UVar2.TextColor.Data.Value.Saturation = in_stack_fffffb64;
      UVar2.TextColor.Data.Value.Value = in_stack_fffffb68;
      UVar2.TextColor.Data.Value.Alpha = in_stack_fffffb6c;
      (*(uint32_t *)((char *)&(UVar2.TextColor) + 40)) = in_stack_fffffb70;
      local_c = (UIWidget *)
                PieChart__PieChart(this_00,UVar2,pAVar31,(int)fVar37,(Attribute_L_util__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___G_*)((Attribute_L_util__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___G_*)(pAVar34)),bVar36,pUVar8);
    }
    bVar7 = !bVar12;
    bVar6 = !bVar12;
    bVar12 = !bVar12;
    local_4c._pad_0x0_0 = (int)&vftable_48;
    bVar5 = true;
    bVar36 = true;
    local_4c.Data = (SharedPtr_L_UIWidget_G_ *)0x0;
    local_4c.Size = 0;
    local_4c.Capacity = 0;
    pfVar10 = (float *)LayoutAttributes__LayoutAttributes(&local_94);
    *(undefined1 *)(pfVar10 + 0xb) = 1;
    pUVar9 = (UIAttributes *)UIAttributes__UIAttributes(&local_324,param_1);
    local_28 = 0;
    uStack_20 = 0x3ff0000000000000;
    uStack_18 = 0x3ff0000000000000;
    uStack_24 = 0;
    (pUVar9->FillProportion).Getter.Callee = (void *)0x0;
    (pUVar9->FillProportion).Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0;
    *(undefined4 *)&(pUVar9->FillProportion).Value.X = 0;
    *(undefined4 *)((int)&(pUVar9->FillProportion).Value.X + 4) = 0x3ff00000;
    (pUVar9->FillProportion).Value.Y = 1.0;
    pUVar8 = local_8;
    pDVar11 = (Data *)(uintptr_t)(UILayout__Data__Add((Data *)&local_4c,local_c));
    pDVar11 = (Data *)(uintptr_t)(UILayout__Data__Add(pDVar11,pUVar8));
    fVar37 = *pfVar10;
    fVar24 = pfVar10[1];
    pvVar25 = *(void **)&(pfVar10[2]);
    p_Var26 = *(_func___cdecl_Color_void_ptr *)&(pfVar10[3]);
    fVar27 = pfVar10[4];
    fVar28 = pfVar10[5];
    fVar29 = pfVar10[6];
    fVar30 = pfVar10[7];
    fVar32 = pfVar10[8];
    fVar33 = pfVar10[9];
    fVar35 = pfVar10[10];
    fVar38 = pfVar10[0xb];
    UIAttributes__UIAttributes((UIAttributes *)&stack0xfffffa0c,pUVar9);
    UVar1.Location.Value.X = in_stack_fffffa24;
*(uint32_t *)&auVar13 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffa0c) + 4)));
    UVar1.Parent = (Manager *)(*(uint32_t*)&(in_stack_fffffa0c));
    UVar1.Tag.Data = (char *)(*(uint32_t*)&(auVar13));
    UVar1.Tag.Capacity = (*(uint32_t*)((char*)&(auVar13)+4));
    UVar1.Tag.Length = (*(uint32_t*)((char*)&(auVar13)+8));
    UVar1.Location.Getter.Callee = (void *)(int)(*(uint64_t *)((char *)&(in_stack_fffffa0c) + 16));
    UVar1.Location.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)(*(uint64_t *)((char *)&(in_stack_fffffa0c) + 16)) >> 0x20);
    UVar1.Location.Value.Y = in_stack_fffffa28;
    UVar1.Visible = in_stack_fffffa2c;
    UVar1.Enabled.Getter.Callee = in_stack_fffffa38;
    UVar1.Enabled.Getter.CallbackFunction = in_stack_fffffa3c;
*(uint32_t *)&auVar19 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffa40) + 128)));
*(uint32_t *)&auVar20 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffa40) + 144)));
*(uint32_t *)&auVar22 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffa40) + 188)));
*(uint32_t *)&auVar23 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffa40) + 232)));
    UVar1.Enabled.Value = (bool)in_stack_fffffa40[0];
    (*(uint24_t *)((char *)&(UVar1.Enabled) + 9)) = (*(uint24_t*)((char*)&(in_stack_fffffa40)+1));
    uVar14 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffa40) + 4)),0);
    uVar15 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffa40) + 4)),8);
    UVar1.DesiredSize.Getter.Callee = (void *)(int)uVar14;
    UVar1.DesiredSize.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar14 >> 0x20);
    UVar1.DesiredSize.Value.X = (int)uVar15;
    UVar1.DesiredSize.Value.Y = (int)((ulonglong)uVar15 >> 0x20);
    uVar14 = SUB248((*(uint32_t *)((char *)&(in_stack_fffffa40) + 20)),0);
*(uint32_t *)&auVar18 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffffa40) + 20)),8));
    UVar1.FillProportion.Getter.Callee = (void *)(int)uVar14;
    UVar1.FillProportion.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar14 >> 0x20);
    UVar1.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar18));
    UVar1.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar18)+8));
    uVar14 = SUB128((*(uint32_t *)((char *)&(in_stack_fffffa40) + 44)),0);
    UVar1.HitTestShape.Getter.Callee = (void *)(int)uVar14;
    UVar1.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)(int)((ulonglong)uVar14 >> 0x20));
    UVar1.HitTestShape.Value = SUB124((*(uint32_t *)((char *)&(in_stack_fffffa40) + 44)),8);
    (*(uint32_t *)((char *)&(UVar1) + 108)) = (*(uint32_t *)((char *)&(in_stack_fffffa40) + 56));
    uVar14 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffa40) + 60)),0);
    UVar1.Depth.Getter.Callee = (void *)(int)uVar14;
    UVar1.Depth.Getter.CallbackFunction =
         (_func___cdecl_double_void_ptr *)(int)((ulonglong)uVar14 >> 0x20);
    UVar1.Depth.Value = (double)SUB168((*(uint32_t *)((char *)&(in_stack_fffffa40) + 60)),8);
    uVar14 = SUB128((*(uint32_t *)((char *)&(in_stack_fffffa40) + 76)),0);
    UVar1.Icon.Getter.Callee = (void *)(int)uVar14;
    UVar1.Icon.Getter.CallbackFunction = (void (* (*)(void *))(void))((_func___cdecl__func___cdecl_void_ptr_void_ptr *)(int)((ulonglong)uVar14 >> 0x20));
    UVar1.Icon.Value = (_func___cdecl_void *)SUB124((*(uint32_t *)((char *)&(in_stack_fffffa40) + 76)),8);
    uVar14 = SUB208((*(uint32_t *)((char *)&(in_stack_fffffa40) + 88)),0);
*(uint32_t *)&auVar13 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffffa40) + 88)),8));
    UVar1.Tooltip.Getter.Callee = (void *)(int)uVar14;
    UVar1.Tooltip.Getter.CallbackFunction =
         (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar14 >> 0x20);
    UVar1.Tooltip.Value.Data = (char *)(*(uint32_t*)&(auVar13));
    UVar1.Tooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar13)+4));
    UVar1.Tooltip.Value.Length = (*(uint32_t*)((char*)&(auVar13)+8));
    uVar14 = SUB208((*(uint32_t *)((char *)&(in_stack_fffffa40) + 108)),0);
*(uint32_t *)&auVar13 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffffa40) + 108)),8));
    UVar1.VerboseTooltip.Getter.Callee = (void *)(int)uVar14;
    UVar1.VerboseTooltip.Getter.CallbackFunction =
         (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar14 >> 0x20);
    UVar1.VerboseTooltip.Value.Data = (char *)(*(uint32_t*)&(auVar13));
    UVar1.VerboseTooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar13)+4));
    UVar1.VerboseTooltip.Value.Length = (*(uint32_t*)((char*)&(auVar13)+8));
    uVar14 = SUB128((*(uint32_t *)((char *)&(auVar19) + 0)),0);
    UVar1.TextFont.Data.Getter.Callee = (void *)(int)uVar14;
    UVar1.TextFont.Data.Getter.CallbackFunction =
         (_func___cdecl_Font_ptr_void_ptr *)(int)((ulonglong)uVar14 >> 0x20);
    UVar1.TextFont.Data.Value = (Font *)SUB124((*(uint32_t *)((char *)&(auVar19) + 0)),8);
    UVar1.TextFont.IsValidData = (bool)auVar19[0xc];
    (*(uint32_t *)((char *)&(UVar1.TextFont) + 13)) = (*(uint32_t *)((char *)&(auVar19) + 13));
    uVar14 = SUB408((*(uint32_t *)((char *)&(auVar20) + 0)),0);
*(uint32_t *)&auVar21 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar20) + 0)),8));
    UVar1.ForegroundColor.Data.Getter.Callee = (void *)(int)uVar14;
    UVar1.ForegroundColor.Data.Getter.CallbackFunction =
         (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar14 >> 0x20);
    UVar1.ForegroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar21));
    UVar1.ForegroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar21)+4));
    UVar1.ForegroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar21)+8));
    UVar1.ForegroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar21) + 12));
    UVar1.ForegroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar21) + 16));
    UVar1.ForegroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar21) + 20));
    UVar1.ForegroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar21) + 24));
    UVar1.ForegroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar21) + 28));
    UVar1.ForegroundColor.IsValidData = (bool)auVar20[0x28];
    (*(uint32_t *)((char *)&(UVar1.ForegroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar20) + 41));
    uVar14 = SUB408((*(uint32_t *)((char *)&(auVar22) + 0)),0);
*(uint32_t *)&auVar21 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar22) + 0)),8));
    UVar1.BackgroundColor.Data.Getter.Callee = (void *)(int)uVar14;
    UVar1.BackgroundColor.Data.Getter.CallbackFunction =
         (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar14 >> 0x20);
    UVar1.BackgroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar21));
    UVar1.BackgroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar21)+4));
    UVar1.BackgroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar21)+8));
    UVar1.BackgroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar21) + 12));
    UVar1.BackgroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar21) + 16));
    UVar1.BackgroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar21) + 20));
    UVar1.BackgroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar21) + 24));
    UVar1.BackgroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar21) + 28));
    UVar1.BackgroundColor.IsValidData = (bool)auVar22[0x28];
    (*(uint32_t *)((char *)&(UVar1.BackgroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar22) + 41));
    uVar14 = SUB408((*(uint32_t *)((char *)&(auVar23) + 0)),0);
*(uint32_t *)&auVar21 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar23) + 0)),8));
    UVar1.TextColor.Data.Getter.Callee = (void *)(int)uVar14;
    UVar1.TextColor.Data.Getter.CallbackFunction =
         (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar14 >> 0x20);
    UVar1.TextColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar21));
    UVar1.TextColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar21)+4));
    UVar1.TextColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar21)+8));
    UVar1.TextColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar21) + 12));
    UVar1.TextColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar21) + 16));
    UVar1.TextColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar21) + 20));
    UVar1.TextColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar21) + 24));
    UVar1.TextColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar21) + 28));
    UVar1.TextColor.IsValidData = (bool)auVar23[0x28];
    (*(uint32_t *)((char *)&(UVar1.TextColor) + 41)) = (*(uint32_t *)((char *)&(auVar23) + 41));
    LVar4.Margin.Getter.CallbackFunction = *(_func___cdecl_Vec2_L_int_G__void_ptr *)&(fVar24);
    LVar4.Margin.Getter.Callee = *(void **)&(fVar37);
    LVar4.Margin.Value.X = (int)pvVar25;
    LVar4.Margin.Value.Y = (int)p_Var26;
    LVar4.Padding.Getter.Callee = *(void **)&(fVar27);
    LVar4.Padding.Getter.CallbackFunction = *(_func___cdecl_int_void_ptr *)&(fVar28);
    LVar4.Padding.Value = (int)fVar29;
    LVar4.Background__HasBackground.Getter.Callee = *(void **)&(fVar30);
    LVar4.Background__HasBackground.Getter.CallbackFunction = *(_func___cdecl_bool_void_ptr *)&(fVar32);
    (*(uint32_t *)((char *)&(LVar4.Background__HasBackground) + 8)) = fVar33;
    (*(uint32_t *)((char *)&(LVar4) + 40)) = fVar35;
    (*(uint32_t *)((char *)&(LVar4) + 44)) = fVar38;
    pUVar8 = (UIWidget *)UIRowLayout__UIRowLayout(local_10,UVar1,LVar4,pDVar11);
  }
  if (bVar36) {
    UIAttributes___UIAttributes(&local_324);
  }
  if (bVar5) {
    Darray_L_util__SharedPtr_L_UIWidget_G___G___dtor(&local_4c);
  }
  if (bVar12) {
    UIAttributes___UIAttributes(&local_46c);
  }
  if (bVar6) {
    if (local_3c.Value.Data != (char *)0x0) {
      port_op_delete(local_3c.Value.Data);
      local_3c.Value.Data = (char *)0x0;
    }
  }
  if (bVar7) {
    util__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___dtor(&local_64.Value);
  }
  return pUVar8;
}

//==== 005ac680 GetAnodeSpline_m ====

/* public: class util__Darray_L_structutil__Vec2_L_double_G__G_ __thiscall
   MagnetoplasmadynamicThrusterModule__GetAnodeSpline_m(void)const  */

Darray_L_util__Vec2_L_double_G___G_ * __thiscall
MagnetoplasmadynamicThrusterModule__GetAnodeSpline_m
          (MagnetoplasmadynamicThrusterModule *this,
          Darray_L_util__Vec2_L_double_G___G_ *__return_storage_ptr__)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  Darray_L_util__Vec2_L_double_G___G_ *this_00;
  bool bVar6;
  Vec2_L_double_G_ *pVVar7;
  Vec2_L_double_G_ *pVVar8;
  int iVar9;
  int iVar10;
  
  this_00 = __return_storage_ptr__;
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (Vec2_L_double_G_ *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_12;
  __return_storage_ptr__->Data = (Vec2_L_double_G_ *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 4;
  pVVar7 = (Vec2_L_double_G_ *)(uintptr_t)(port_op_new(0x40));
  if (pVVar7 == (Vec2_L_double_G_ *)0x0) {
    pVVar7 = (Vec2_L_double_G_ *)0x0;
  }
  else {
    iVar9 = 4;
    pVVar8 = pVVar7;
    do {
      *(undefined4 *)&pVVar8->X = 0;
      *(undefined4 *)((int)&pVVar8->X + 4) = 0;
      *(undefined4 *)&pVVar8->Y = 0;
      *(undefined4 *)((int)&pVVar8->Y + 4) = 0;
      iVar9 = iVar9 + -1;
      pVVar8 = pVVar8 + 1;
    } while (iVar9 != 0);
  }
  this_00->Data = pVVar7;
  iVar9 = 0;
  if (0 < this_00->Capacity) {
    iVar10 = 0;
    do {
      iVar9 = iVar9 + 1;
      puVar1 = (undefined4 *)((int)&this_00->Data->X + iVar10);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      iVar10 = iVar10 + 0x10;
    } while (iVar9 < this_00->Capacity);
  }
  dVar2 = *(double *)&this[1]._pad_0x48_18;
  iVar9 = this_00->Size;
  dVar3 = *(double *)&this[1]._pad_0x40_16;
  __return_storage_ptr__ = (Darray_L_util__Vec2_L_double_G___G_ *)(iVar9 + 1);
  dVar4 = *(double *)&this[1]._pad_0x58_22;
  util__Darray_L_util__Vec2_L_double_G___G___SetSize(this_00,(int *)&__return_storage_ptr__);
  bVar6 = util__Darray_L_util__Vec2_L_double_G___G___CheckSize(this_00,iVar9);
  if (bVar6) {
    iVar9 = this_00->Size;
    pVVar7 = this_00->Data;
    pVVar7[iVar9 + -1].X = dVar2 + dVar3;
    pVVar7[iVar9 + -1].Y = dVar4;
  }
  iVar9 = this_00->Size;
  dVar2 = *(double *)&this[1]._pad_0x48_18;
  dVar3 = *(double *)&this[1]._pad_0x40_16;
  __return_storage_ptr__ = (Darray_L_util__Vec2_L_double_G___G_ *)(iVar9 + 1);
  util__Darray_L_util__Vec2_L_double_G___G___SetSize(this_00,(int *)&__return_storage_ptr__);
  bVar6 = util__Darray_L_util__Vec2_L_double_G___G___CheckSize(this_00,iVar9);
  if (bVar6) {
    iVar9 = this_00->Size;
    pVVar7 = this_00->Data;
    pVVar7[iVar9 + -1].X = dVar2 + dVar3;
    pVVar7[iVar9 + -1].Y = 0.0;
  }
  dVar2 = *(double *)&this[1]._pad_0x48_18;
  dVar3 = *(double *)&this[1]._pad_0x40_16;
  iVar9 = this_00->Size;
  dVar4 = *(double *)&this[1]._pad_0x50_20;
  __return_storage_ptr__ = (Darray_L_util__Vec2_L_double_G___G_ *)(iVar9 + 1);
  util__Darray_L_util__Vec2_L_double_G___G___SetSize(this_00,(int *)&__return_storage_ptr__);
  bVar6 = util__Darray_L_util__Vec2_L_double_G___G___CheckSize(this_00,iVar9);
  if (bVar6) {
    iVar9 = this_00->Size;
    pVVar7 = this_00->Data;
    pVVar7[iVar9 + -1].X = dVar2 + dVar3 + dVar4;
    pVVar7[iVar9 + -1].Y = 0.0;
  }
  dVar2 = *(double *)&this[1]._pad_0x48_18;
  dVar3 = *(double *)&this[1]._pad_0x40_16;
  iVar9 = this_00->Size;
  dVar4 = *(double *)&this[1]._pad_0x50_20;
  __return_storage_ptr__ = (Darray_L_util__Vec2_L_double_G___G_ *)(iVar9 + 1);
  dVar5 = *(double *)&this[1]._pad_0x58_22;
  util__Darray_L_util__Vec2_L_double_G___G___SetSize(this_00,(int *)&__return_storage_ptr__);
  bVar6 = util__Darray_L_util__Vec2_L_double_G___G___CheckSize(this_00,iVar9);
  if (bVar6) {
    iVar9 = this_00->Size;
    pVVar7 = this_00->Data;
    pVVar7[iVar9 + -1].X = dVar2 + dVar3 + dVar4;
    pVVar7[iVar9 + -1].Y = dVar5;
  }
  return this_00;
}

//==== 005ac880 GetCathodeSpline_m ====

/* public: class util__Darray_L_structutil__Vec2_L_double_G__G_ __thiscall
   MagnetoplasmadynamicThrusterModule__GetCathodeSpline_m(void)const  */

Darray_L_util__Vec2_L_double_G___G_ * __thiscall
MagnetoplasmadynamicThrusterModule__GetCathodeSpline_m
          (MagnetoplasmadynamicThrusterModule *this,
          Darray_L_util__Vec2_L_double_G___G_ *__return_storage_ptr__)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  Darray_L_util__Vec2_L_double_G___G_ *this_00;
  bool bVar4;
  Vec2_L_double_G_ *pVVar5;
  Vec2_L_double_G_ *pVVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  
  this_00 = __return_storage_ptr__;
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (Vec2_L_double_G_ *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_12;
  __return_storage_ptr__->Data = (Vec2_L_double_G_ *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 3;
  pVVar5 = (Vec2_L_double_G_ *)(uintptr_t)(port_op_new(0x30));
  if (pVVar5 == (Vec2_L_double_G_ *)0x0) {
    pVVar5 = (Vec2_L_double_G_ *)0x0;
  }
  else {
    iVar7 = 3;
    pVVar6 = pVVar5;
    do {
      *(undefined4 *)&pVVar6->X = 0;
      *(undefined4 *)((int)&pVVar6->X + 4) = 0;
      *(undefined4 *)&pVVar6->Y = 0;
      *(undefined4 *)((int)&pVVar6->Y + 4) = 0;
      iVar7 = iVar7 + -1;
      pVVar6 = pVVar6 + 1;
    } while (iVar7 != 0);
  }
  this_00->Data = pVVar5;
  iVar7 = 0;
  if (0 < this_00->Capacity) {
    iVar8 = 0;
    do {
      iVar7 = iVar7 + 1;
      puVar1 = (undefined4 *)((int)&this_00->Data->X + iVar8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      iVar8 = iVar8 + 0x10;
    } while (iVar7 < this_00->Capacity);
  }
  iVar7 = this_00->Size;
  __return_storage_ptr__ = (Darray_L_util__Vec2_L_double_G___G_ *)(iVar7 + 1);
  util__Darray_L_util__Vec2_L_double_G___G___SetSize(this_00,(int *)&__return_storage_ptr__);
  bVar4 = util__Darray_L_util__Vec2_L_double_G___G___CheckSize(this_00,iVar7);
  if (bVar4) {
    pVVar5 = this_00->Data + this_00->Size + -1;
    *(undefined4 *)&pVVar5->X = 0;
    *(undefined4 *)((int)&pVVar5->X + 4) = 0;
    *(undefined4 *)&pVVar5->Y = 0;
    *(undefined4 *)((int)&pVVar5->Y + 4) = 0;
  }
  dVar3 = *(double *)&this[1]._pad_0x58_22 * 0.5;
  iVar7 = this_00->Size;
  dVar2 = *(double *)&this[1]._pad_0x40_16;
  dVar9 = dVar2;
  if (dVar3 <= dVar2) {
    dVar9 = dVar3;
  }
  __return_storage_ptr__ = (Darray_L_util__Vec2_L_double_G___G_ *)(iVar7 + 1);
  util__Darray_L_util__Vec2_L_double_G___G___SetSize(this_00,(int *)&__return_storage_ptr__);
  bVar4 = util__Darray_L_util__Vec2_L_double_G___G___CheckSize(this_00,iVar7);
  if (bVar4) {
    iVar7 = this_00->Size;
    pVVar5 = this_00->Data;
    pVVar5[iVar7 + -1].X = dVar2;
    pVVar5[iVar7 + -1].Y = dVar9;
  }
  iVar7 = this_00->Size;
  dVar2 = *(double *)&this[1]._pad_0x40_16;
  dVar3 = *(double *)&this[1]._pad_0x58_22;
  __return_storage_ptr__ = (Darray_L_util__Vec2_L_double_G___G_ *)(iVar7 + 1);
  util__Darray_L_util__Vec2_L_double_G___G___SetSize(this_00,(int *)&__return_storage_ptr__);
  bVar4 = util__Darray_L_util__Vec2_L_double_G___G___CheckSize(this_00,iVar7);
  if (bVar4) {
    iVar7 = this_00->Size;
    pVVar5 = this_00->Data;
    pVVar5[iVar7 + -1].X = dVar2;
    pVVar5[iVar7 + -1].Y = dVar3;
  }
  return this_00;
}

//==== 005acb50 GetClassID_005acb50 ====


/* public: virtual unsigned long __thiscall
   MagnetoplasmadynamicThrusterModule__GetClassID(void)const  */

ulong __thiscall
MagnetoplasmadynamicThrusterModule__GetClassID(MagnetoplasmadynamicThrusterModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_db98d0c9__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_db98d0c9__thread_safe_static_guard_0__);
    if ( cde_l2_db98d0c9__thread_safe_static_guard_0__ == -1) {
       cde_l2_df3c7a20_ID = util__GetHash("MagnetoplasmadynamicThrusterModule");
      _Init_thread_footer(& cde_l2_db98d0c9__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_df3c7a20_ID;
}





//==== 005acbb0 GetComposition_005acbb0 ====

/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   MagnetoplasmadynamicThrusterModule__GetComposition(void)const  */

Darray_L_MaterialComposition_G_ * __thiscall
MagnetoplasmadynamicThrusterModule__GetComposition
          (MagnetoplasmadynamicThrusterModule *this,
          Darray_L_MaterialComposition_G_ *__return_storage_ptr__)

{
  MaterialComposition *pMVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  Material *pMVar5;
  Darray_L_MaterialComposition_G_ *this_00;
  bool bVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  undefined4 uStack_10;
  
  this_00 = __return_storage_ptr__;
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (MaterialComposition *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  Module__GetComposition((Module *)this,__return_storage_ptr__);
  dVar9 = *(double *)&this[1]._pad_0x40_16 + *(double *)&this[1]._pad_0x48_18;
  dVar8 = *(double *)&this[1]._pad_0x50_20 + dVar9;
  dVar2 = *(double *)&this[1]._pad_0x58_22;
  dVar3 = *(double *)(this[1]._pad_0x64_25 + 0x30);
  iVar7 = EngineModule__GetAttachmentCount((EngineModule *)this);
  iVar4 = this_00->Size;
  pMVar5 = (Material *)this[1]._pad_0x60_24;
  __return_storage_ptr__ = (Darray_L_MaterialComposition_G_ *)(iVar4 + 1);
  util__Darray_L_MaterialConstituent_G___SetSize
            ((Darray_L_MaterialConstituent_G_ *)this_00,(int *)&__return_storage_ptr__);
  bVar6 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                    ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar4);
  if (bVar6) {
    pMVar1 = this_00->Data + this_00->Size + -1;
    pMVar1->Type = pMVar5;
    *(undefined4 *)&(*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar1) + 0x4)) = uStack_10;
    pMVar1->Mass_kg =
         (double)iVar7 *
         (dVar8 * 3.141592653589793 * dVar8 - dVar9 * 3.141592653589793 * dVar9) * dVar2 * dVar3;
  }
  dVar2 = *(double *)&this[1]._pad_0x40_16;
  dVar3 = *(double *)&this[1]._pad_0x58_22;
  dVar8 = *(double *)(this[1]._pad_0x60_24 + 0x30);
  iVar7 = EngineModule__GetAttachmentCount((EngineModule *)this);
  iVar4 = this_00->Size;
  pMVar5 = (Material *)this[1]._pad_0x64_25;
  __return_storage_ptr__ = (Darray_L_MaterialComposition_G_ *)(iVar4 + 1);
  util__Darray_L_MaterialConstituent_G___SetSize
            ((Darray_L_MaterialConstituent_G_ *)this_00,(int *)&__return_storage_ptr__);
  bVar6 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                    ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar4);
  if (bVar6) {
    pMVar1 = this_00->Data + this_00->Size + -1;
    pMVar1->Type = pMVar5;
    *(undefined4 *)&(*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar1) + 0x4)) = uStack_10;
    pMVar1->Mass_kg = (double)iVar7 * dVar2 * dVar2 * 3.141592653589793 * dVar3 * dVar8;
  }
  dVar2 = *(double *)&this[1]._pad_0x50_20;
  dVar8 = *(double *)&this[1]._pad_0x40_16 + *(double *)&this[1]._pad_0x48_18 + dVar2;
  dVar3 = *(double *)(this[1]._pad_0x68_26 + 0x30);
  iVar7 = EngineModule__GetAttachmentCount((EngineModule *)this);
  iVar4 = this_00->Size;
  pMVar5 = (Material *)this[1]._pad_0x68_26;
  __return_storage_ptr__ = (Darray_L_MaterialComposition_G_ *)(iVar4 + 1);
  util__Darray_L_MaterialConstituent_G___SetSize
            ((Darray_L_MaterialConstituent_G_ *)this_00,(int *)&__return_storage_ptr__);
  bVar6 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                    ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar4);
  if (bVar6) {
    pMVar1 = this_00->Data + this_00->Size + -1;
    pMVar1->Type = pMVar5;
    *(undefined4 *)&(*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar1) + 0x4)) = uStack_10;
    pMVar1->Mass_kg = (double)iVar7 * dVar8 * dVar8 * 3.141592653589793 * dVar2 * dVar3;
  }
  return this_00;
}

//==== 005acd90 GetCrewRequired_005acd90 ====


/* public: virtual class util__Darray_L_structCrewJob_G_ __thiscall
   MagnetoplasmadynamicThrusterModule__GetCrewRequired(void)const  */

Darray_L_struct_CrewJob_G_ * __thiscall
MagnetoplasmadynamicThrusterModule__GetCrewRequired(MagnetoplasmadynamicThrusterModule *this)

{
  undefined8 stack0x00000004;
  Darray_L_struct_CrewJob_G_ *this_00;
  bool bVar1;
  Str_L_char_G_ *pSVar2;
  LocStr *this_01;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  Darray_L_struct_CrewJob_G_ *in_stack_00000004;
  Str_L_char_G_ SStack_70;
  double dStack_64;
  undefined1 uStack_5c;
  void *apvStack_54 [3];
  void *pvStack_48;
  Str_L_char_G_ SStack_3c;
  Str_L_char_G_ SStack_30;
  Str_L_char_G_ SStack_24;
  Str_L_char_G_ SStack_18;
  double dStack_c;
  
  this_00 = in_stack_00000004;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = &vftable_120;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Str_char___Str_char(&SStack_3c,"CrewTechnician");
  pSVar2 = Module__GetQuickName((Module *)this,&SStack_30);
  if (pSVar2->Capacity < 1) {
    pcVar5 = "";
  }
  else {
    pcVar5 = pSVar2->Data;
  }
  SStack_18.Data = (char *)0x0;
  SStack_18.Capacity = 0;
  SStack_18.Length = 0;
  this_01 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_54,&SStack_3c,&SStack_18);
  pSVar2 = util__LocStr__operator__o3(this_01);
  if (pSVar2->Capacity < 1) {
    pcVar3 = "";
  }
  else {
    pcVar3 = pSVar2->Data;
  }
  util__Printf(&SStack_24,pcVar3,pcVar5);
  iVar4 = EngineModule__GetAttachmentCount((EngineModule *)this);
  dStack_c = (double)iVar4 * 0.2;
  util__Str_char___Str_char(&SStack_70,&SStack_24);
  dStack_64 = dStack_c;
  uStack_5c = 1;
  if (SStack_24.Data != (char *)0x0) {
    port_op_delete(SStack_24.Data);
    SStack_24.Data = (char *)0x0;
  }
  iVar4 = *(int *)(in_stack_00000004 + 8);
  in_stack_00000004 = (Darray_L_struct_CrewJob_G_ *)(iVar4 + 1);
  util__Darray_struct_CrewJob___SetSize(this_00,(int *)&stack0x00000004);
  bVar1 = util__Darray_struct_CrewJob___CheckSize(this_00,iVar4);
  if (bVar1) {
    iVar4 = *(int *)(this_00 + 4);
    iVar6 = *(int *)(this_00 + 8) * 0x20;
    *(undefined4 *)(iVar6 + -0x20 + iVar4) = 2;
    util__Str_char___operator__o8((Str_L_char_G_ *)(iVar4 + -0x1c + iVar6),&SStack_70);
    *(double *)(iVar6 + -0x10 + iVar4) = dStack_c;
    *(undefined1 *)(iVar6 + -8 + iVar4) = 1;
  }
  if (SStack_70.Data != (char *)0x0) {
    port_op_delete(SStack_70.Data);
  }
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
  if (SStack_30.Data != (char *)0x0) {
    port_op_delete(SStack_30.Data);
    SStack_30.Data = (char *)0x0;
  }
  if (SStack_3c.Data != (char *)0x0) {
    port_op_delete(SStack_3c.Data);
  }
  return this_00;
}





//==== 005acf60 GetDecimalPropertyBoundaries_005acf60 ====


/* public: virtual class util__Maybe_L_structutil__Range_L_double_G__G_ __thiscall
   ResistojetModule__GetDecimalPropertyBoundaries(struct util__ClassMember const &)const  */

void __thiscall
ResistojetModule__GetDecimalPropertyBoundaries(ResistojetModule *this,ClassMember *param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined4 *in_stack_00000008;
  undefined4 uStack_8;
  
  if ((int)in_stack_00000008[1] < 1) {
    puVar2 = (undefined1 *)(&cde_l2_0b2b1c9f_NullString);
  }
  else {
    puVar2 = (undefined1 *)*in_stack_00000008;
  }
  for (pcVar1 = "GimbalAngle_degrees";
      (pcVar1[(int)(puVar2 + -0x925940)] != '\0' || (*pcVar1 != '\0')); pcVar1 = pcVar1 + 1) {
    if (pcVar1[(int)(puVar2 + -0x925940)] != *pcVar1) {
      (param_1->Name).Data = (char *)0x0;
      (param_1->Name).Capacity = 0;
      (param_1->Name).Length = 0;
      *(undefined4 *)&param_1->Type = 0;
      *(undefined1 *)&param_1->Offset = 0;
      return;
    }
  }
  uStack_8 = 0;
  if ((this->ThermalRocket).GetGasExpansionPlume_MemoizedValue.Data.DisableShimmer != false) {
    uStack_8 = 0x40568000;
  }
  (param_1->Name).Data = (char *)0x0;
  (param_1->Name).Capacity = 0;
  (param_1->Name).Length = 0;
  *(undefined4 *)&param_1->Type = uStack_8;
  *(undefined1 *)&param_1->Offset = 1;
  return;
}





//==== 005acfe0 GetEffectiveExhaustVelocity_km__s_005acfe0 ====

/* public: virtual double 
   MagnetoplasmadynamicThrusterModule__GetEffectiveExhaustVelocity_km__s(void)const  */

double 
MagnetoplasmadynamicThrusterModule__GetEffectiveExhaustVelocity_km__s
          (MagnetoplasmadynamicThrusterModule *this)

{
  double dVar1;
  double dVar2;
  
  dVar1 = TurbopumpSubModule__GetMassFlowRate_kg__s((TurbopumpSubModule *)&this[1]._pad_0x78_30);
  dVar2 = GetThrust_N(this);
  dVar1 = (dVar2 / dVar1) / 1000.0;
  if (149896229.0 <= dVar1) {
    dVar1 = 149896229.0;
  }
  return dVar1;
}

//==== 005ad040 GetEngineDimensions_m_005ad040 ====

/* public: virtual struct util__Cylinder_L_double_G_ 
   MagnetoplasmadynamicThrusterModule__GetEngineDimensions_m(void)const  */

Cylinder_L_double_G_ * 
MagnetoplasmadynamicThrusterModule__GetEngineDimensions_m
          (MagnetoplasmadynamicThrusterModule *this,Cylinder_L_double_G_ *__return_storage_ptr__)

{
  Cylinder_L_double_G_ *pCVar1;
  Cylinder_L_double_G_ local_34;
  Cylinder_L_double_G_ local_24;
  double local_14;
  double local_c;
  
  local_c = *(double *)&this[1]._pad_0x50_20;
  *(uint32_t *)&local_14 = *(double *)&this[1]._pad_0x48_18 + *(double *)&this[1]._pad_0x40_16 + local_c;
  pCVar1 = TurbopumpSubModule__GetTurbopumpCylinder_m
                     ((TurbopumpSubModule *)&this[1]._pad_0x78_30,&local_24);
  local_c = local_c + *(double *)&this[1]._pad_0x58_22 + pCVar1->Height;
  pCVar1 = TurbopumpSubModule__GetTurbopumpCylinder_m
                     ((TurbopumpSubModule *)&this[1]._pad_0x78_30,&local_34);
  if (local_14 <= pCVar1->Radius) {
    *(uint32_t *)&local_14 = pCVar1->Radius;
  }
  __return_storage_ptr__->Radius = local_14;
  __return_storage_ptr__->Height = local_c;
  return __return_storage_ptr__;
}

//==== 005ad0d0 GetEngineEndMomentOfInertia_kg_m2_005ad0d0 ====

/* public: virtual double 
   MagnetoplasmadynamicThrusterModule__GetEngineEndMomentOfInertia_kg_m2(void)const  */

double 
MagnetoplasmadynamicThrusterModule__GetEngineEndMomentOfInertia_kg_m2
          (MagnetoplasmadynamicThrusterModule *this)

{
  double dVar1;
  Cylinder_L_double_G_ CVar2;
  Cylinder_L_double_G_ CVar3;
  double dVar4;
  double dVar5;
  double dVar6;
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
  
  dVar5 = *(double *)&this[1]._pad_0x50_20;
  dVar11 = TurbopumpSubModule__GetLength_m((TurbopumpSubModule *)&this[1]._pad_0x78_30);
  dVar1 = *(double *)&this[1]._pad_0x58_22;
  dVar8 = *(double *)&this[1]._pad_0x48_18 + *(double *)&this[1]._pad_0x40_16;
  dVar4 = dVar1 * 0.5 + dVar11 + dVar5;
  dVar5 = dVar8 + *(double *)&this[1]._pad_0x50_20;
  CVar2.Height = dVar1;
  CVar2.Radius = *(double *)&this[1]._pad_0x40_16;
  dVar12 = Mechanics__SolidCylinderRadialMomentOfInertia_kg_m2
                     (CVar2,(dVar5 * 3.141592653589793 * dVar5 - dVar8 * 3.141592653589793 * dVar8)
                            * dVar1 * *(double *)(this[1]._pad_0x64_25 + 0x30));
  dVar5 = *(double *)&this[1]._pad_0x40_16;
  dVar9 = *(double *)&this[1]._pad_0x48_18 + dVar5;
  dVar1 = *(double *)&this[1]._pad_0x58_22;
  dVar6 = dVar9 + *(double *)&this[1]._pad_0x50_20;
  dVar10 = dVar5 * dVar5 * 3.141592653589793 * dVar1 * *(double *)(this[1]._pad_0x60_24 + 0x30);
  dVar5 = *(double *)(this[1]._pad_0x64_25 + 0x30);
  dVar13 = Mechanics__ThickCylindericalShellRadialMomentOfInertia_kg_m2(dVar1,dVar9,dVar6,dVar10);
  dVar8 = *(double *)&this[1]._pad_0x50_20;
  dVar14 = TurbopumpSubModule__GetLength_m((TurbopumpSubModule *)&this[1]._pad_0x78_30);
  dVar11 = *(double *)&this[1]._pad_0x50_20;
  dVar7 = *(double *)&this[1]._pad_0x48_18 + *(double *)&this[1]._pad_0x40_16 + dVar11;
  dVar14 = dVar14 + dVar8 * 0.5;
  CVar3.Height = dVar11;
  CVar3.Radius = dVar7;
  dVar15 = Mechanics__SolidCylinderRadialMomentOfInertia_kg_m2
                     (CVar3,dVar7 * dVar7 * 3.141592653589793 * dVar11 *
                            *(double *)(this[1]._pad_0x68_26 + 0x30));
  dVar8 = *(double *)&this[1]._pad_0x50_20;
  dVar7 = *(double *)&this[1]._pad_0x48_18 + *(double *)&this[1]._pad_0x40_16 + dVar8;
  dVar11 = *(double *)(this[1]._pad_0x68_26 + 0x30);
  dVar16 = TurbopumpSubModule__GetEndRadialMomentOfInertia_kg_m2
                     ((TurbopumpSubModule *)&this[1]._pad_0x78_30);
  return dVar16 + dVar13 + dVar12 +
                  ((dVar6 * 3.141592653589793 * dVar6 - dVar9 * 3.141592653589793 * dVar9) * dVar1 *
                   dVar5 + dVar10) * dVar4 * dVar4 +
         dVar7 * dVar7 * 3.141592653589793 * dVar8 * dVar11 * dVar14 * dVar14 + dVar15;
}

//==== 005ad0e0 GetEngineEndRadialMomentOfInertia_kg_m2 ====

/* public: double 
   MagnetoplasmadynamicThrusterModule__GetEngineEndRadialMomentOfInertia_kg_m2(void)const  */

double 
MagnetoplasmadynamicThrusterModule__GetEngineEndRadialMomentOfInertia_kg_m2
          (MagnetoplasmadynamicThrusterModule *this)

{
  double dVar1;
  Cylinder_L_double_G_ CVar2;
  Cylinder_L_double_G_ CVar3;
  double dVar4;
  double dVar5;
  double dVar6;
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
  
  dVar5 = *(double *)&this[1]._pad_0x50_20;
  dVar11 = TurbopumpSubModule__GetLength_m((TurbopumpSubModule *)&this[1]._pad_0x78_30);
  dVar1 = *(double *)&this[1]._pad_0x58_22;
  dVar8 = *(double *)&this[1]._pad_0x48_18 + *(double *)&this[1]._pad_0x40_16;
  dVar4 = dVar1 * 0.5 + dVar11 + dVar5;
  dVar5 = dVar8 + *(double *)&this[1]._pad_0x50_20;
  CVar2.Height = dVar1;
  CVar2.Radius = *(double *)&this[1]._pad_0x40_16;
  dVar12 = Mechanics__SolidCylinderRadialMomentOfInertia_kg_m2
                     (CVar2,(dVar5 * 3.141592653589793 * dVar5 - dVar8 * 3.141592653589793 * dVar8)
                            * dVar1 * *(double *)(this[1]._pad_0x64_25 + 0x30));
  dVar5 = *(double *)&this[1]._pad_0x40_16;
  dVar9 = *(double *)&this[1]._pad_0x48_18 + dVar5;
  dVar1 = *(double *)&this[1]._pad_0x58_22;
  dVar6 = dVar9 + *(double *)&this[1]._pad_0x50_20;
  dVar10 = dVar5 * dVar5 * 3.141592653589793 * dVar1 * *(double *)(this[1]._pad_0x60_24 + 0x30);
  dVar5 = *(double *)(this[1]._pad_0x64_25 + 0x30);
  dVar13 = Mechanics__ThickCylindericalShellRadialMomentOfInertia_kg_m2(dVar1,dVar9,dVar6,dVar10);
  dVar8 = *(double *)&this[1]._pad_0x50_20;
  dVar14 = TurbopumpSubModule__GetLength_m((TurbopumpSubModule *)&this[1]._pad_0x78_30);
  dVar11 = *(double *)&this[1]._pad_0x50_20;
  dVar7 = *(double *)&this[1]._pad_0x48_18 + *(double *)&this[1]._pad_0x40_16 + dVar11;
  dVar14 = dVar14 + dVar8 * 0.5;
  CVar3.Height = dVar11;
  CVar3.Radius = dVar7;
  dVar15 = Mechanics__SolidCylinderRadialMomentOfInertia_kg_m2
                     (CVar3,dVar7 * dVar7 * 3.141592653589793 * dVar11 *
                            *(double *)(this[1]._pad_0x68_26 + 0x30));
  dVar8 = *(double *)&this[1]._pad_0x50_20;
  dVar7 = *(double *)&this[1]._pad_0x48_18 + *(double *)&this[1]._pad_0x40_16 + dVar8;
  dVar11 = *(double *)(this[1]._pad_0x68_26 + 0x30);
  dVar16 = TurbopumpSubModule__GetEndRadialMomentOfInertia_kg_m2
                     ((TurbopumpSubModule *)&this[1]._pad_0x78_30);
  return dVar16 + dVar13 + dVar12 +
                  ((dVar6 * 3.141592653589793 * dVar6 - dVar9 * 3.141592653589793 * dVar9) * dVar1 *
                   dVar5 + dVar10) * dVar4 * dVar4 +
         dVar7 * dVar7 * 3.141592653589793 * dVar8 * dVar11 * dVar14 * dVar14 + dVar15;
}

//==== 005ad350 GetEngineInitialRadius_m_005ad350 ====

/* public: virtual double 
   MagnetoplasmadynamicThrusterModule__GetEngineInitialRadius_m(void)const  */

double 
MagnetoplasmadynamicThrusterModule__GetEngineInitialRadius_m
          (MagnetoplasmadynamicThrusterModule *this)

{
  Cylinder_L_double_G_ *pCVar1;
  Cylinder_L_double_G_ local_14;
  
  pCVar1 = TurbopumpSubModule__GetTurbopumpCylinder_m
                     ((TurbopumpSubModule *)&this[1]._pad_0x78_30,&local_14);
  return pCVar1->Radius;
}

//==== 005ad370 GetEngineMass_kg_005ad370 ====

/* public: virtual double __thiscall MagnetoplasmadynamicThrusterModule__GetEngineMass_kg(void)const
    */

double __thiscall
MagnetoplasmadynamicThrusterModule__GetEngineMass_kg(MagnetoplasmadynamicThrusterModule *this)

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
  
  dVar1 = *(double *)&this[1]._pad_0x40_16;
  dVar2 = *(double *)&this[1]._pad_0x50_20;
  dVar7 = *(double *)&this[1]._pad_0x48_18 + dVar1;
  dVar3 = *(double *)&this[1]._pad_0x58_22;
  dVar8 = dVar7 + dVar2;
  dVar4 = *(double *)(this[1]._pad_0x64_25 + 0x30);
  dVar5 = *(double *)(this[1]._pad_0x60_24 + 0x30);
  dVar6 = *(double *)(this[1]._pad_0x68_26 + 0x30);
  dVar9 = TurbopumpSubModule__GetSolidMass_kg((TurbopumpSubModule *)&this[1]._pad_0x78_30);
  return dVar1 * dVar1 * 3.141592653589793 * dVar3 * dVar5 +
         (dVar8 * 3.141592653589793 * dVar8 - dVar7 * 3.141592653589793 * dVar7) * dVar3 * dVar4 +
         dVar8 * dVar8 * 3.141592653589793 * dVar2 * dVar6 + dVar9;
}

//==== 005adc20 GetIcon_005adc20 ====


/* public: virtual void (__cdecl*__thiscall MagnetoplasmadynamicThrusterModule__GetIcon(void)const
   )(void) */

_func_void * __thiscall
MagnetoplasmadynamicThrusterModule__GetIcon(MagnetoplasmadynamicThrusterModule *this)

{
  return Icons__IonThruster;
}





//==== 005adc30 GetInsulatorSpline_m ====

/* public: class util__Darray_L_structutil__Vec2_L_double_G__G_ __thiscall
   MagnetoplasmadynamicThrusterModule__GetInsulatorSpline_m(void)const  */

Darray_L_util__Vec2_L_double_G___G_ * __thiscall
MagnetoplasmadynamicThrusterModule__GetInsulatorSpline_m
          (MagnetoplasmadynamicThrusterModule *this,
          Darray_L_util__Vec2_L_double_G___G_ *__return_storage_ptr__)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  Darray_L_util__Vec2_L_double_G___G_ *this_00;
  bool bVar6;
  Vec2_L_double_G_ *pVVar7;
  Vec2_L_double_G_ *pVVar8;
  int iVar9;
  int iVar10;
  
  this_00 = __return_storage_ptr__;
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (Vec2_L_double_G_ *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_12;
  __return_storage_ptr__->Data = (Vec2_L_double_G_ *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 4;
  pVVar7 = (Vec2_L_double_G_ *)(uintptr_t)(port_op_new(0x40));
  if (pVVar7 == (Vec2_L_double_G_ *)0x0) {
    pVVar7 = (Vec2_L_double_G_ *)0x0;
  }
  else {
    iVar9 = 4;
    pVVar8 = pVVar7;
    do {
      *(undefined4 *)&pVVar8->X = 0;
      *(undefined4 *)((int)&pVVar8->X + 4) = 0;
      *(undefined4 *)&pVVar8->Y = 0;
      *(undefined4 *)((int)&pVVar8->Y + 4) = 0;
      iVar9 = iVar9 + -1;
      pVVar8 = pVVar8 + 1;
    } while (iVar9 != 0);
  }
  this_00->Data = pVVar7;
  iVar9 = 0;
  if (0 < this_00->Capacity) {
    iVar10 = 0;
    do {
      iVar9 = iVar9 + 1;
      puVar1 = (undefined4 *)((int)&this_00->Data->X + iVar10);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      iVar10 = iVar10 + 0x10;
    } while (iVar9 < this_00->Capacity);
  }
  iVar9 = this_00->Size;
  dVar2 = *(double *)&this[1]._pad_0x58_22;
  __return_storage_ptr__ = (Darray_L_util__Vec2_L_double_G___G_ *)(iVar9 + 1);
  util__Darray_L_util__Vec2_L_double_G___G___SetSize(this_00,(int *)&__return_storage_ptr__);
  bVar6 = util__Darray_L_util__Vec2_L_double_G___G___CheckSize(this_00,iVar9);
  if (bVar6) {
    iVar9 = this_00->Size;
    pVVar7 = this_00->Data;
    pVVar7[iVar9 + -1].X = 0.0;
    pVVar7[iVar9 + -1].Y = dVar2;
  }
  dVar2 = *(double *)&this[1]._pad_0x40_16;
  dVar3 = *(double *)&this[1]._pad_0x48_18;
  iVar9 = this_00->Size;
  dVar4 = *(double *)&this[1]._pad_0x50_20;
  __return_storage_ptr__ = (Darray_L_util__Vec2_L_double_G___G_ *)(iVar9 + 1);
  dVar5 = *(double *)&this[1]._pad_0x58_22;
  util__Darray_L_util__Vec2_L_double_G___G___SetSize(this_00,(int *)&__return_storage_ptr__);
  bVar6 = util__Darray_L_util__Vec2_L_double_G___G___CheckSize(this_00,iVar9);
  if (bVar6) {
    iVar9 = this_00->Size;
    pVVar7 = this_00->Data;
    pVVar7[iVar9 + -1].X = dVar2 + dVar3 + dVar4;
    pVVar7[iVar9 + -1].Y = dVar5;
  }
  dVar2 = *(double *)&this[1]._pad_0x40_16;
  dVar3 = *(double *)&this[1]._pad_0x48_18;
  dVar4 = *(double *)&this[1]._pad_0x50_20;
  iVar9 = this_00->Size;
  __return_storage_ptr__ = (Darray_L_util__Vec2_L_double_G___G_ *)(iVar9 + 1);
  dVar5 = *(double *)&this[1]._pad_0x58_22;
  util__Darray_L_util__Vec2_L_double_G___G___SetSize(this_00,(int *)&__return_storage_ptr__);
  bVar6 = util__Darray_L_util__Vec2_L_double_G___G___CheckSize(this_00,iVar9);
  if (bVar6) {
    iVar9 = this_00->Size;
    pVVar7 = this_00->Data;
    pVVar7[iVar9 + -1].X = dVar2 + dVar3 + dVar4;
    pVVar7[iVar9 + -1].Y = dVar5 + dVar4;
  }
  iVar9 = this_00->Size;
  dVar2 = *(double *)&this[1]._pad_0x58_22;
  dVar3 = *(double *)&this[1]._pad_0x50_20;
  __return_storage_ptr__ = (Darray_L_util__Vec2_L_double_G___G_ *)(iVar9 + 1);
  util__Darray_L_util__Vec2_L_double_G___G___SetSize(this_00,(int *)&__return_storage_ptr__);
  bVar6 = util__Darray_L_util__Vec2_L_double_G___G___CheckSize(this_00,iVar9);
  if (bVar6) {
    iVar9 = this_00->Size;
    pVVar7 = this_00->Data;
    pVVar7[iVar9 + -1].X = 0.0;
    pVVar7[iVar9 + -1].Y = dVar2 + dVar3;
  }
  return this_00;
}

//==== 005ade30 GetMaxMassFlowRate_kg__s_005ade30 ====

/* public: virtual double 
   MagnetoplasmadynamicThrusterModule__GetMaxMassFlowRate_kg__s(void)const  */

double 
MagnetoplasmadynamicThrusterModule__GetMaxMassFlowRate_kg__s
          (MagnetoplasmadynamicThrusterModule *this)

{
  int iVar1;
  double dVar2;
  
  dVar2 = TurbopumpSubModule__GetMassFlowRate_kg__s((TurbopumpSubModule *)&this[1]._pad_0x78_30);
  iVar1 = EngineModule__GetAttachmentCount((EngineModule *)this);
  return (double)iVar1 * dVar2;
}

//==== 005ade70 GetMaxThrust_N_005ade70 ====


/* public: virtual double __thiscall MagnetoplasmadynamicThrusterModule__GetMaxThrust_N(void)const
    */

double __thiscall
MagnetoplasmadynamicThrusterModule__GetMaxThrust_N(MagnetoplasmadynamicThrusterModule *this)

{
  int iVar1;
  double dVar2;
  
  iVar1 = EngineModule__GetAttachmentCount((EngineModule *)this);
  dVar2 = GetThrust_N(this);
  return dVar2 * (double)iVar1;
}





//==== 005adea0 GetPointerPropertyChoices_005adea0 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   MagnetoplasmadynamicThrusterModule__GetPointerPropertyChoices(struct util__ClassMember const
   &,class util__SerializationManagerInterface const *)const  */

ClassMember * 
MagnetoplasmadynamicThrusterModule__GetPointerPropertyChoices
          (MagnetoplasmadynamicThrusterModule *this,ClassMember *param_1,
          SerializationManagerInterface *param_2)

{
  bool bVar1;
  char *pcVar2;
  SerializationManagerInterface SVar3;
  int in_stack_0000000c;
  undefined1 uVar4;
  
  if (*(int *)&param_2[1] < 1) {
    SVar3 = *(SerializationManagerInterface *)&cde_l2_0b2b1c9f_NullString;
  }
  else {
    SVar3 = *param_2;
  }
  pcVar2 = "Propellant";
  while( true ) {
    if ((pcVar2[(int)(*(int *)&SVar3 + -0x9216a0)] == '\0') && (*pcVar2 == '\0')) {
      uVar4 = 2;
      goto LAB_005adeda;
    }
    if (pcVar2[(int)(*(int *)&SVar3 + -0x9216a0)] != *pcVar2) break;
    pcVar2 = pcVar2 + 1;
  }
  if (*(int *)&param_2[1] < 1) {
    SVar3 = *(SerializationManagerInterface *)&cde_l2_0b2b1c9f_NullString;
  }
  else {
    SVar3 = *param_2;
  }
  pcVar2 = "CathodeComposition";
  while( true ) {
    if ((pcVar2[(int)(*(int *)&SVar3 + -0x926360)] == '\0') && (*pcVar2 == '\0')) goto LAB_005adf2c;
    if (pcVar2[(int)(*(int *)&SVar3 + -0x926360)] != *pcVar2) break;
    pcVar2 = pcVar2 + 1;
  }
  bVar1 = util__Str_char___operator__o9((Str_L_char_G_ *)param_2,"AnodeComposition");
  if (bVar1) {
LAB_005adf2c:
    uVar4 = 3;
  }
  else {
    bVar1 = util__Str_char___operator__o9((Str_L_char_G_ *)param_2,"InsulatorComposition");
    if (!bVar1) {
      (param_1->Name).Data =
           (char *)&vftable_85;
      (param_1->Name).Capacity = 0;
      (param_1->Name).Length = 0;
      *(undefined4 *)&param_1->Type = 0;
      return param_1;
    }
    uVar4 = 4;
  }
LAB_005adeda:
  GetMaterials((DataParser *)param_1,in_stack_0000000c,(bool)uVar4);
  return param_1;
}





//==== 005adf70 GetPowerUsage_005adf70 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual class util__Darray_L_structPowerUsage_G_ __thiscall
   MagnetoplasmadynamicThrusterModule__GetPowerUsage(void)const  */

Darray_L_PowerUsage_G_ * __thiscall
MagnetoplasmadynamicThrusterModule__GetPowerUsage
          (MagnetoplasmadynamicThrusterModule *this,Darray_L_PowerUsage_G_ *__return_storage_ptr__)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  int iVar2;
  LocStr *this_00;
  Str_L_char_G_ *pSVar3;
  int iVar4;
  PowerUsage *pPVar5;
  double dVar6;
  Str_L_char_G_ local_7c;
  double local_6c;
  void *local_64 [3];
  void *local_58;
  Str_L_char_G_ local_4c;
  Str_L_char_G_ local_40;
  double local_34;
  double local_2c;
  undefined1 local_24 [8];
  MagnetoplasmadynamicThrusterModule *pMStack_1c;
  undefined8 local_18;
  int local_10;
  char local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pMStack_1c = this;
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (PowerUsage *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  Module__GetPowerUsage((Module *)this,__return_storage_ptr__);
  (*(uint40_t*)&(local_18)) = (uint5)(uint)local_18;
  FUN_005ab070(&local_10,(*(uint32_t*)((char*)&(local_18)+4)));
  if (local_c == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  iVar2 = (**(code **)__return_storage_ptr__->_pad_0x0_0)(&local_10);
  local_34 = *(double *)(iVar2 + 0x10);
  if (local_c == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  iVar2 = (**(code **)(__return_storage_ptr__->_pad_0x0_0 + 0xc))();
  if (iVar2 != 0) {
    iVar2 = (**(code **)(__return_storage_ptr__->_pad_0x0_0 + 0xc))();
    if (((local_10 < 1) && (iVar2 + -1 <= local_10)) ||
       ((local_10 <= iVar2 + -1 && (-1 < local_10)))) {
      iVar2 = 0;
      pPVar5 = __return_storage_ptr__->Data;
      bVar1 = false;
      *(uint64_t *)&local_18 = (double)((ulonglong)local_18 & 0xffffffff);
      iVar4 = local_10;
      if (pPVar5 != pPVar5 + __return_storage_ptr__->Size) {
        do {
          if (bVar1) {
            util__Str_char___operator__o8(&pPVar5[-1].Label,&pPVar5->Label);
            pPVar5[-1].PowerUsed_W = pPVar5->PowerUsed_W;
            iVar2 = (*(uint32_t*)((char*)&(local_18)+4));
            iVar4 = local_10;
          }
          else if (iVar2 == iVar4) {
            bVar1 = true;
          }
          iVar2 = iVar2 + 1;
          *(uint32_t *)&local_18 = (double)CONCAT44(iVar2,(uint)local_18);
          pPVar5 = pPVar5 + 1;
        } while (pPVar5 != __return_storage_ptr__->Data + __return_storage_ptr__->Size);
        if (bVar1) {
          *(uint32_t *)&local_18 = (double)CONCAT44(__return_storage_ptr__->Size + -1,(uint)local_18);
          util__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___SetSize
                    ((Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ *)__return_storage_ptr__,
                     (int *)((int)&local_18 + 4));
        }
      }
      this = pMStack_1c;
    }
  }
  util__Str_char___Str_char(&local_4c,"PowerUse InjectorAndThruster");
  join_0x00001100_8_ = GetThrust_N(this);
  *(uint32_t *)&local_18 = *(double *)&this[1]._pad_0x70_28;
  local_2c = join_0x00001100_8_ * join_0x00001100_8_;
  join_0x00001100_8_ =
       TurbopumpSubModule__GetMassFlowRate_kg__s((TurbopumpSubModule *)&this[1]._pad_0x78_30);
  local_2c = (local_2c / (join_0x00001100_8_ * (local_18 + local_18))) * 1.25;
  dVar6 = GetTotalVoltage_V(this);
  local_2c = local_2c / dVar6;
  dVar6 = EngineModule__GetThrustPower_W((EngineModule *)this);
  local_2c = dVar6 / local_2c;
  local_40.Data = (char *)0x0;
  local_40.Capacity = 0;
  local_40.Length = 0;
  this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)local_64,&local_4c,&local_40);
  pSVar3 = util__LocStr__operator__o3(this_00);
  util__Str_char___Str_char((Str_L_char_G_ *)local_24,pSVar3);
  util__Str_char___Str_char(&local_7c,(Str_L_char_G_ *)local_24);
  local_6c = local_2c + local_34;
  local_34 = local_6c;
  if ((char *)(*(uint32_t*)&(local_24)) != (char *)0x0) {
    port_op_delete((void *)(*(uint32_t*)&(local_24)));
  }
  iVar2 = __return_storage_ptr__->Size;
  pMStack_1c = (MagnetoplasmadynamicThrusterModule *)(iVar2 + 1);
  util__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___SetSize
            ((Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ *)__return_storage_ptr__,
             (int *)&pMStack_1c);
  bVar1 = util__Darray_L_PowerUsage_G___CheckSize(__return_storage_ptr__,iVar2);
  if (bVar1) {
    iVar2 = __return_storage_ptr__->Size;
    pPVar5 = __return_storage_ptr__->Data;
    util__Str_char___operator__o8(&pPVar5[iVar2 + -1].Label,&local_7c);
    pPVar5[iVar2 + -1].PowerUsed_W = local_34;
  }
  if (local_7c.Data != (char *)0x0) {
    port_op_delete(local_7c.Data);
  }
  if (local_58 != (void *)0x0) {
    port_op_delete(local_58);
    local_58 = (void *)0x0;
  }
  if (local_64[0] != (void *)0x0) {
    port_op_delete(local_64[0]);
    local_64[0] = (void *)0x0;
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

//==== 005ae250 GetReflectionInfo_005ae250 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   MagnetoplasmadynamicThrusterModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall
MagnetoplasmadynamicThrusterModule__GetReflectionInfo(MagnetoplasmadynamicThrusterModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_d6946334__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_d6946334__thread_safe_static_guard_0__);
    if ( cde_l2_d6946334__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_d3e6b623_ReflectionInfo) = &vftable_194;
      _Init_thread_footer(& cde_l2_d6946334__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_d3e6b623_ReflectionInfo;
}





//==== 005ae260 GetShortName_005ae260 ====


/* public: virtual class util__Str_L_char_G_ 
   MagnetoplasmadynamicThrusterModule__GetShortName(void)const  */

Str_L_char_G_ * 
MagnetoplasmadynamicThrusterModule__GetShortName
          (MagnetoplasmadynamicThrusterModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  LocStr *this_00;
  Str_L_char_G_ *pSVar1;
  void *apvStack_34 [3];
  void *pvStack_28;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
  util__Str_char___Str_char(&SStack_1c,"Engine MPDThruster");
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_34,&SStack_1c,&SStack_10);
  pSVar1 = util__LocStr__operator__o3(this_00);
  util__Str_char___Str_char(__return_storage_ptr__,pSVar1);
  if (pvStack_28 != (void *)0x0) {
    port_op_delete(pvStack_28);
    pvStack_28 = (void *)0x0;
  }
  if (apvStack_34[0] != (void *)0x0) {
    port_op_delete(apvStack_34[0]);
    apvStack_34[0] = (void *)0x0;
  }
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
    SStack_10.Data = (char *)0x0;
  }
  if (SStack_1c.Data != (char *)0x0) {
    port_op_delete(SStack_1c.Data);
  }
  return __return_storage_ptr__;
}





//==== 005ae310 GetSolePropellant_005ae310 ====

/* public: virtual class Material * __thiscall
   MagnetoplasmadynamicThrusterModule__GetSolePropellant(void)const  */

Material * __thiscall
MagnetoplasmadynamicThrusterModule__GetSolePropellant(MagnetoplasmadynamicThrusterModule *this)

{
  return (Material *)this[1]._pad_0x6c_27;
}

//==== 005aef30 GetStructuralMaterial_005aef30 ====

/* public: virtual class Material const * __thiscall
   MagnetoplasmadynamicThrusterModule__GetStructuralMaterial(void)const  */

Material * __thiscall
MagnetoplasmadynamicThrusterModule__GetStructuralMaterial(MagnetoplasmadynamicThrusterModule *this)

{
  return (Material *)this[1]._pad_0x64_25;
}

//==== 005aef40 GetStructuralThickness_m_005aef40 ====

/* public: virtual double 
   MagnetoplasmadynamicThrusterModule__GetStructuralThickness_m(void)const  */

double 
MagnetoplasmadynamicThrusterModule__GetStructuralThickness_m
          (MagnetoplasmadynamicThrusterModule *this)

{
  return *(double *)&this[1]._pad_0x50_20;
}

//==== 005aef50 GetThrustCoefficient ====

/* public: double __thiscall MagnetoplasmadynamicThrusterModule__GetThrustCoefficient(void)const  */

double __thiscall
MagnetoplasmadynamicThrusterModule__GetThrustCoefficient(MagnetoplasmadynamicThrusterModule *this)

{
  Maybe_L_double_G_ *pMVar1;
  double dVar2;
  Maybe_L_double_G_ local_6c;
  Maybe_L_double_G_ local_5c;
  undefined1 local_4c [8];
  double local_44;
  undefined1 local_3c [16];
  double local_2c;
  double local_24;
  double local_1c;
  double local_14;
  double local_c;
  
  *(uint32_t *)&local_24 = *(double *)&this[1]._pad_0x70_28;
  local_1c = TurbopumpSubModule__GetMassFlowRate_kg__s((TurbopumpSubModule *)&this[1]._pad_0x78_30);
  dVar2 = Material__GetFirstIonizationEnergy_kJ__mol((Material *)this[1]._pad_0x6c_27);
  local_c = dVar2 * 1000.0 + dVar2 * 1000.0;
  local_2c = Material__GetMolarMass_kg__mol((Material *)this[1]._pad_0x6c_27);
  local_2c = local_c / local_2c;
  local_c = local_2c;
  pMVar1 = util__Sqrt((Maybe_L_double_G_ *)local_3c,&local_2c);
  if (pMVar1->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_1c = pMVar1->Data * local_1c * 4.0 * 3.141592653589793;
  dVar2 = (*(double *)&this[1]._pad_0x48_18 + *(double *)&this[1]._pad_0x40_16) /
          *(double *)&this[1]._pad_0x40_16 + 0.75;
  libm_sse2_log_precise(0.0);
  *(uint32_t *)&local_14 = local_1c / (dVar2 * 1.2566370614359173e-06);
  pMVar1 = util__Sqrt((Maybe_L_double_G_ *)local_4c,&local_14);
  if (pMVar1->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  *(uint32_t *)&local_24 = local_24 / pMVar1->Data;
  (*(uint64_t*)((char*)&(local_3c)+8)) =
       TurbopumpSubModule__GetMassFlowRate_kg__s((TurbopumpSubModule *)&this[1]._pad_0x78_30);
  local_c = *(double *)&this[1]._pad_0x70_28;
  local_2c = TurbopumpSubModule__GetMassFlowRate_kg__s((TurbopumpSubModule *)&this[1]._pad_0x78_30);
  dVar2 = Material__GetFirstIonizationEnergy_kJ__mol((Material *)this[1]._pad_0x6c_27);
  *(uint32_t *)&local_14 = dVar2 * 1000.0 + dVar2 * 1000.0;
  local_1c = Material__GetMolarMass_kg__mol((Material *)this[1]._pad_0x6c_27);
  local_1c = local_14 / local_1c;
  *(uint32_t *)&local_14 = local_1c;
  pMVar1 = util__Sqrt(&local_5c,&local_1c);
  if (pMVar1->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  *(uint32_t *)&local_14 = pMVar1->Data * local_2c * 4.0 * 3.141592653589793;
  dVar2 = (*(double *)&this[1]._pad_0x48_18 + *(double *)&this[1]._pad_0x40_16) /
          *(double *)&this[1]._pad_0x40_16 + 0.75;
  libm_sse2_log_precise(0.0);
  local_44 = local_14 / (dVar2 * 1.2566370614359173e-06);
  pMVar1 = util__Sqrt(&local_6c,&local_44);
  if (pMVar1->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_c = local_c / pMVar1->Data;
  local_c = local_c * local_c;
  dVar2 = (*(double *)&this[1]._pad_0x48_18 + *(double *)&this[1]._pad_0x40_16) /
          *(double *)&this[1]._pad_0x40_16 + local_24 * local_24;
  libm_sse2_log_precise(0.0);
  return dVar2 + ((double)(*(uint64_t*)((char*)&(local_3c)+8)) / 0.066) / local_c;
}

