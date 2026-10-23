// Auto-generated from Ghidra decompilation
#include "port_prelude.h"

//==== 00615100 GetReflectionInfo_00615100 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   TurboelectricFissionReactorModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall
TurboelectricFissionReactorModule__GetReflectionInfo(TurboelectricFissionReactorModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_3c84f118__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_3c84f118__thread_safe_static_guard_0__);
    if ( cde_l2_3c84f118__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_b8551ecc_ReflectionInfo) = &vftable_267;
      _Init_thread_footer(& cde_l2_3c84f118__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_b8551ecc_ReflectionInfo;
}





//==== 00615110 scalar_deleting_destructor_00615110 ====


/* public: virtual void * __thiscall TurboelectricFissionReactorModule:: 0 scalardeletingdestructor(unsigned int) */

void * 
TurboelectricFissionReactorModule___scalar_deleting_destructor
          (TurboelectricFissionReactorModule *this,uint param_1)

{
  void *pvVar1;
  
  (this->Turbine).StageCount = (int)&vftable_5;
  pvVar1 = (void *)((*(undefined4 *)((char *)&((this->Turbine)) + 0x34)));
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (undefined4)((*(undefined4 *)(void *)((char *)&((this->Turbine)) + 0x34)) = 0);
  }
  *(uint32_t *)&(this->Turbopump).CachedFluidDensity_kg__m3 = (uint32_t)(uintptr_t)(&vftable_5);
  pvVar1 = *(void **)((int)&(this->Turbopump).CachedFluidDensity_kg__m3 + 4);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    *(undefined4 *)((int)&(this->Turbopump).CachedFluidDensity_kg__m3 + 4) = 0;
  }
  pvVar1 = *(void **)((int)&(this->NuclearReactor).GetEmittedRadiation_MemoizedValue.Data.
                            GammaRays_W + 4);
*(uint32_t *)&((this->NuclearReactor).GetEmittedRadiation_MemoizedValue.Data.GammaRays_W) = (uint32_t)(uintptr_t)(&vftable_142);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
  }
  *(undefined4 *)
   ((int)&(this->NuclearReactor).GetEmittedRadiation_MemoizedValue.Data.GammaRays_W + 4) = 0;
  *(uint32_t *)&(this->NuclearReactor).GetEmittedRadiation_MemoizedValue.Data.GammaRays_W = (uint32_t)(uintptr_t)((undefined **)(&vftable));
*(uint32_t *)&((this->NuclearReactor).GetEmittedRadiation_MemoizedValue.Data.ThermalNeutrons_W) = (uint32_t)(uintptr_t)(&vftable_5);
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
    port_op_delete(this,0x1f8);
  }
  return this;
}





//==== 006151e0 GetTypeName_006151e0 ====


/* public: virtual class util__Str_L_char_G_ 
   TurboelectricFissionReactorModule__ReflectionInfoStruct_class_TurboelectricFissionReactorModule___GetTypeName(void)const  */

Str_L_char_G_ * 
TurboelectricFissionReactorModule__ReflectionInfoStruct_class_TurboelectricFissionReactorModule___GetTypeName(ReflectionInfoStruct_L_class_TurboelectricFissionReactorModule_G_ *this,
           Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"TurboelectricFissionReactorModule");
  return __return_storage_ptr__;
}





//==== 00615200 GetMembers_00615200 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const __thiscall
   TurboelectricFissionReactorModule__ReflectionInfoStruct_class_TurboelectricFissionReactorModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * __thiscall
TurboelectricFissionReactorModule__ReflectionInfoStruct_class_TurboelectricFissionReactorModule___GetMembers(ReflectionInfoStruct_L_class_TurboelectricFissionReactorModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_d46d07e2__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_d46d07e2__thread_safe_static_guard_0__),
      cde_l2_d46d07e2__thread_safe_static_guard_0__ == -1)) {
     cde_l2_d0cdacc7_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_d46d07e2__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_d0cdacc7_Count);
  iVar3 = 0;
  if (0 <  cde_l2_d0cdacc7_Count) {
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
    } while (iVar3 <  cde_l2_d0cdacc7_Count);
  }
  return in_stack_00000004;
}





//==== 00615340 GetMember_00615340 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const __thiscall
   TurboelectricFissionReactorModule__ReflectionInfoStruct_class_TurboelectricFissionReactorModule___GetMember(class util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * __thiscall
TurboelectricFissionReactorModule__ReflectionInfoStruct_class_TurboelectricFissionReactorModule___GetMember(ReflectionInfoStruct_L_class_TurboelectricFissionReactorModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_86ed8dd7__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_86ed8dd7__thread_safe_static_guard_0__),
      cde_l2_86ed8dd7__thread_safe_static_guard_0__ == -1)) {
     cde_l2_df7e8c32_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_86ed8dd7__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_df7e8c32_Count) {
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
LAB_006153cd:
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
          if (cVar3 == '\0') goto LAB_006153cd;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_df7e8c32_Count);
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





//==== 006154e0 GetFactory_006154e0 ====


/* public: virtual class util__Reflectable * (__cdecl*__thiscall
   TurboelectricFissionReactorModule__ReflectionInfoStruct_class_TurboelectricFissionReactorModule___GetFactory(void)const )(void) */

_func_Reflectable_ptr * __thiscall
TurboelectricFissionReactorModule__ReflectionInfoStruct_class_TurboelectricFissionReactorModule___GetFactory(ReflectionInfoStruct_L_class_TurboelectricFissionReactorModule_G_ *this)

{
  return StaticFactory;
}





//==== 006154f0 MakeTuple_CompressibleFlowPoint_util__Str_char___ ====


/* struct util__tuple2_L_structCompressibleFlowPoint_Cclassutil__Str_L_char_G__G_ __cdecl
   util__MakeTuple_struct_CompressibleFlowPoint_class_util__Str_char(struct
   CompressibleFlowPoint,class util__Str_L_char_G_) */

double __cdecl
util__MakeTuple_struct_CompressibleFlowPoint_class_util__Str_char__o2
          (CompressibleFlowPoint param_1,Str_L_char_G_ param_2)

{
  undefined8 stack0x00000040;
  char *in_stack_00000040;
  Str_L_char_G_ SStack_10;
  
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_10,(Str_L_char_G_ *)&stack0x00000040);
  *(uint32_t *)&(param_1.SpecificHeat_J__kg_K) = (*(uint32_t *)((char *)&(param_1.SpecificHeat_J__kg_K) + 4));
  (*(uint32_t *)((char *)&(param_1.SpecificHeat_J__kg_K) + 4)) = param_1.SpecificGasConstant_J__kg_K;
  (*(uint32_t *)((char *)&(param_1.SpecificHeat_J__kg_K) + 8)) = (*(uint32_t *)((char *)&(param_1.SpecificGasConstant_J__kg_K) + 4));
  (*(uint32_t *)((char *)&(param_1.SpecificHeat_J__kg_K) + 12)) = param_1.Temperature_K;
  (*(uint32_t *)((char *)&(param_1.SpecificHeat_J__kg_K) + 16)) = (*(uint32_t *)((char *)&(param_1.Temperature_K) + 4));
  (*(uint32_t *)((char *)&(param_1.SpecificHeat_J__kg_K) + 20)) = param_1.Pressure_Pa;
  (*(uint32_t *)((char *)&(param_1.SpecificHeat_J__kg_K) + 24)) = (*(uint32_t *)((char *)&(param_1.Pressure_Pa) + 4));
  (*(uint32_t *)((char *)&(param_1.SpecificHeat_J__kg_K) + 28)) = param_1.MassFlowRate_kg__s;
  (*(uint32_t *)((char *)&(param_1.SpecificHeat_J__kg_K) + 32)) = (*(uint32_t *)((char *)&(param_1.MassFlowRate_kg__s) + 4));
  (*(uint32_t *)((char *)&(param_1.SpecificHeat_J__kg_K) + 36)) = param_1.Area_m2;
  (*(uint32_t *)((char *)&(param_1.SpecificHeat_J__kg_K) + 40)) = (*(uint32_t *)((char *)&(param_1.Area_m2) + 4));
  (*(uint32_t *)((char *)&(param_1.SpecificHeat_J__kg_K) + 44)) = (uint32_t)(uintptr_t) param_2.Data;
  *(undefined8 *)((char *)&(param_1.SpecificHeat_J__kg_K) + 0xc) = (*(uint64_t*)((char*)&(param_2)+4));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const((Str_L_char_G_ *)((char *)&(param_1.SpecificHeat_J__kg_K) + 0xe),&SStack_10);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  if (in_stack_00000040 != (char *)0x0) {
    port_op_delete(in_stack_00000040);
  }
  return param_1.SpecificHeat_J__kg_K;
}





//==== 00615560 Darray_util__tuple2_CompressibleFlowPoint_util__Str_char_____ ====


/* public: virtual  Darray_L_structutil__tuple2_L_structCompressibleFlowPoint_Cclass_util__Str_L_char_G__G__G___dtor(void) */

void __thiscall
util__Darray_struct_util__tuple2_struct_CompressibleFlowPoint_class_util__Str_char________Darray_struct_util__tuple2_struct_CompressibleFlowPoint_class_util__Str_char(Darray_L_struct_util__tuple2_L_struct_CompressibleFlowPoint_Cclass_util__Str_L_char_G___G___G_ *this)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = *(int *)(this + 4);
  *(undefined ***)this = &vftable_268;
  if (iVar4 != 0) {
    piVar1 = (int *)(iVar4 + -4);
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      iVar4 = 0;
    }
    else {
      puVar5 = (undefined4 *)(iVar4 + 0x38 + iVar3 * 0x48);
      do {
        puVar2 = puVar5 + -0x12;
        puVar5 = puVar5 + -0x12;
        iVar3 = iVar3 + -1;
        if ((void *)*puVar2 != (void *)0x0) {
          port_op_delete((void *)*puVar2);
          *puVar5 = 0;
        }
      } while (iVar3 != 0);
      iVar4 = *piVar1;
    }
    port_op_delete(piVar1,iVar4 * 0x48 + 4);
  }
  *(undefined ***)this = (undefined **)(&vftable);
  *(undefined4 *)(this + 4) = 0;
  return;
}





//==== 006155e0 operator___006155e0 ====


/* public: virtual struct util__tuple2_L_structCompressibleFlowPoint_Cclassutil__Str_L_char_G__G_ &
    util__Darray_struct_util__tuple2_struct_CompressibleFlowPoint_class_util__Str_char_______operator(int const &)const  */

tuple2_L_struct_CompressibleFlowPoint_Cclass_util__Str_L_char_G___G_ * 
util__Darray_struct_util__tuple2_struct_CompressibleFlowPoint_class_util__Str_char_______operator__o2
          (Darray_L_struct_util__tuple2_L_struct_CompressibleFlowPoint_Cclass_util__Str_L_char_G___G___G_ *this,
          int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 < 0) || (*(int *)(this + 8) <= iVar1)) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.inl",0xa0,
              "Index >= 0 && Index < Size",(char *)0x0);
    DebugBreak();
    iVar1 = *param_1;
  }
  return (tuple2_L_struct_CompressibleFlowPoint_Cclass_util__Str_L_char_G___G_ *)
         (*(int *)(this + 4) + iVar1 * 0x48);
}





//==== 00615630 operator___00615630 ====


/* public: virtual struct util__tuple5_L_structutil__Vec2_L_int_G__Ccharconst_P_Cstruct_CompressibleFlowPoint_Cdouble_Cvoid___cdecl_P__void__G_ &  util__Darray_L_struct_util__tuple5_L_structutil__Vec2_L_int_G__Ccharconst_P_CstructCompressibleFlowPoint_Cdouble_Cvoid____cdecl_P__void__G__G___op_subscript(int const &)const  */

tuple5_L_struct_util__Vec2_L_int_G__Cchar_const_P_Cstruct_CompressibleFlowPoint_Cdouble_Cvoid____cdecl_P__void__G_
* 
util__Darray_struct_util__tuple5_struct_util__Vec2_int__char_const__struct_CompressibleFlowPoint_double_void____cdecl___void______operator(Darray_L_struct_util__tuple5_L_struct_util__Vec2_L_int_G__Cchar_const_P_Cstruct_CompressibleFlowPoint_Cdouble_Cvoid____cdecl_P__void__G___G_
             *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 < 0) || (*(int *)(this + 8) <= iVar1)) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.inl",0xa0,
              "Index >= 0 && Index < Size",(char *)0x0);
    DebugBreak();
    iVar1 = *param_1;
  }
  return (tuple5_L_struct_util__Vec2_L_int_G__Cchar_const_P_Cstruct_CompressibleFlowPoint_Cdouble_Cvoid____cdecl_P__void__G_
          *)(iVar1 * 0x58 + *(int *)(this + 4));
}





//==== 00615680 scalar_deleting_destructor_00615680 ====


/* public: virtual void * __thiscall util__Darray_L_structutil__tuple2_L_struct_CompressibleFlowPoint_Cclassutil__Str_L_char_G__G__G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_util__tuple2_struct_CompressibleFlowPoint_class_util__Str_char________scalar_deleting_destructor__o2
          (Darray_L_struct_util__tuple2_L_struct_CompressibleFlowPoint_Cclass_util__Str_L_char_G___G___G_ *this,
          uint param_1)

{
  util__Darray_struct_util__tuple2_struct_CompressibleFlowPoint_class_util__Str_char________scalar_deleting_destructor(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 006156b0 scalar_deleting_destructor_006156b0 ====


/* public: virtual void * __thiscall util__Darray_L_structutil__tuple5_L_structutil__Vec2_L_int_G__Cchar_const_P_CstructCompressibleFlowPoint_Cdouble_Cvoid___cdecl_P__void__G__G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_util__tuple5_struct_util__Vec2_int__char_const__struct_CompressibleFlowPoint_double_void____cdecl___void_______scalar_deleting_destructor
          (Darray_L_struct_util__tuple5_L_struct_util__Vec2_L_int_G__Cchar_const_P_Cstruct_CompressibleFlowPoint_Cdouble_Cvoid____cdecl_P__void__G___G_
           *this,uint param_1)

{
  *(undefined ***)this = &vftable_270;
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





//==== 00615700 Add_00615700 ====


/* public: bool  util__Darray_L_structutil__tuple2_L_structCompressibleFlowPoint_Cclass_util__Str_L_char_G__G__G___Add(struct util__tuple2_L_structCompressibleFlowPoint_Cclassutil__Str_L_char_G__G_
   const &) */

bool 
util__Darray_struct_util__tuple2_struct_CompressibleFlowPoint_class_util__Str_char_______Add
          (Darray_L_struct_util__tuple2_L_struct_CompressibleFlowPoint_Cclass_util__Str_L_char_G___G___G_ *this,
          tuple2_L_struct_CompressibleFlowPoint_Cclass_util__Str_L_char_G___G_ *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  int iStack_8;
  
  iVar1 = *(int *)(this + 8);
  iStack_8 = iVar1 + 1;
  SetSize(this,&iStack_8);
  bVar5 = CheckSize(this,iVar1);
  if (!bVar5) {
  }
  iVar1 = *(int *)(this + 4) + *(int *)(this + 8) * 0x48;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(iVar1 + -0x48) = *(undefined4 *)param_1;
  *(undefined4 *)(iVar1 + -0x44) = uVar2;
  *(undefined4 *)(iVar1 + -0x40) = uVar3;
  *(undefined4 *)(iVar1 + -0x3c) = uVar4;
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(iVar1 + -0x38) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(iVar1 + -0x34) = uVar2;
  *(undefined4 *)(iVar1 + -0x30) = uVar3;
  *(undefined4 *)(iVar1 + -0x2c) = uVar4;
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(iVar1 + -0x28) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(iVar1 + -0x24) = uVar2;
  *(undefined4 *)(iVar1 + -0x20) = uVar3;
  *(undefined4 *)(iVar1 + -0x1c) = uVar4;
  *(undefined8 *)(iVar1 + -0x18) = *(undefined8 *)(param_1 + 0x30);
  util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(iVar1 + -0x10),(Str_L_char_G_ *)(param_1 + 0x38));
  return true;
}





//==== 00615780 Add_00615780 ====


/* public: bool  util__Darray_L_structutil__tuple5_L_structutil__Vec2_L_int_G__Ccharconst__P_CstructCompressibleFlowPoint_Cdouble_Cvoid___cdecl_P__void__G__G___Add(struct util__tuple5_L_struct_util__Vec2_L_int_G__Ccharconst_P_CstructCompressibleFlowPoint_Cdouble_Cvoid___cdecl_P__void__G_ const &)
    */

bool 
util__Darray_struct_util__tuple5_struct_util__Vec2_int__char_const__struct_CompressibleFlowPoint_double_void____cdecl___void______Add(Darray_L_struct_util__tuple5_L_struct_util__Vec2_L_int_G__Cchar_const_P_Cstruct_CompressibleFlowPoint_Cdouble_Cvoid____cdecl_P__void__G___G_
      *this,tuple5_L_struct_util__Vec2_L_int_G__Cchar_const_P_Cstruct_CompressibleFlowPoint_Cdouble_Cvoid____cdecl_P__void__G_
            *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  int iStack_8;
  
  iVar5 = *(int *)(this + 8);
  iStack_8 = iVar5 + 1;
  SetSize(this,&iStack_8);
  bVar4 = CheckSize(this,iVar5);
  if (!bVar4) {
  }
  iVar5 = *(int *)(this + 8) * 0x58 + *(int *)(this + 4);
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(iVar5 + -0x58) = *(undefined4 *)param_1;
  *(undefined4 *)(iVar5 + -0x54) = uVar1;
  *(undefined4 *)(iVar5 + -0x50) = uVar2;
  *(undefined4 *)(iVar5 + -0x4c) = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(iVar5 + -0x48) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(iVar5 + -0x44) = uVar1;
  *(undefined4 *)(iVar5 + -0x40) = uVar2;
  *(undefined4 *)(iVar5 + -0x3c) = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(iVar5 + -0x38) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(iVar5 + -0x34) = uVar1;
  *(undefined4 *)(iVar5 + -0x30) = uVar2;
  *(undefined4 *)(iVar5 + -0x2c) = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(iVar5 + -0x28) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(iVar5 + -0x24) = uVar1;
  *(undefined4 *)(iVar5 + -0x20) = uVar2;
  *(undefined4 *)(iVar5 + -0x1c) = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x44);
  uVar2 = *(undefined4 *)(param_1 + 0x48);
  uVar3 = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(iVar5 + -0x18) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(iVar5 + -0x14) = uVar1;
  *(undefined4 *)(iVar5 + -0x10) = uVar2;
  *(undefined4 *)(iVar5 + -0xc) = uVar3;
  *(undefined8 *)(iVar5 + -8) = *(undefined8 *)(param_1 + 0x50);
  return true;
}





//==== 00615800 CheckSize_00615800 ====


/* private: bool  util__Darray_L_structutil__tuple2_L_structCompressibleFlowPoint_Cclass_util__Str_L_char_G__G__G___CheckSize(int) */

bool 
util__Darray_struct_util__tuple2_struct_CompressibleFlowPoint_class_util__Str_char_______CheckSize
          (Darray_L_struct_util__tuple2_L_struct_CompressibleFlowPoint_Cclass_util__Str_L_char_G___G___G_ *this,
          int param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  CompressibleFlowPoint *pCVar9;
  CompressibleFlowPoint *pCVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  bool bVar14;
  CompressibleFlowPoint *pCStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar7 = *(uint *)(this + 8);
  bVar14 = -1 < (int)uVar7;
  bVar2 = !bVar14;
  if (bVar2) {
    pCStack_c = (CompressibleFlowPoint *)0x0;
    SetSize(this,(int *)&pCStack_c);
    uVar7 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar2;
  bVar2 = (int)uVar7 < 0x40000000;
  if (!bVar2) {
    pCStack_c = (CompressibleFlowPoint *)0x3fffffff;
    SetSize(this,(int *)&pCStack_c);
    uVar7 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar11 = *(uint *)(this + 0xc);
  if ((int)uVar7 <= (int)uVar11) {
    return bVar2 && bVar14;
  }
  if (uVar11 == 0) {
    *(uint *)(this + 0xc) = uVar7;
    uVar11 = uVar7;
  }
  if ((int)uVar11 < (int)uVar7) {
    do {
      uVar11 = uVar11 * 2;
    } while ((int)uVar11 < (int)uVar7);
    *(uint *)(this + 0xc) = uVar11;
  }
  if (0x3fffffff < (int)uVar11) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar11 = 0x3fffffff;
  }
  uVar7 = -(uint)((int)((ulonglong)uVar11 * 0x48 >> 0x20) != 0) | (uint)((ulonglong)uVar11 * 0x48);
  puVar6 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar7) | uVar7 + 4);
  if (puVar6 == (uint *)0x0) {
    pCStack_c = (CompressibleFlowPoint *)0x0;
  }
  else {
    *puVar6 = uVar11;
    pCVar9 = (CompressibleFlowPoint *)(puVar6 + 1);
    pCStack_c = pCVar9;
    if (uVar11 != 0) {
      puVar6 = puVar6 + 0x11;
      do {
        CompressibleFlowPoint__CompressibleFlowPoint__o3(pCVar9);
        pCVar9 = (CompressibleFlowPoint *)&pCVar9[1].Pressure_Pa;
        puVar6[-2] = 0;
        puVar6[-1] = 0;
        *puVar6 = 0;
        uVar11 = uVar11 - 1;
        puVar6 = puVar6 + 0x12;
      } while (uVar11 != 0);
    }
  }
  puVar8 = *(undefined4 **)(this + 4);
  if (puVar8 != (undefined4 *)0x0) {
    pCVar9 = (CompressibleFlowPoint *)((int)pCStack_c + *(int *)(this + 8) * 0x48);
    pCVar10 = pCStack_c;
    puVar12 = puVar8;
    if (puVar8 != puVar8 + param_1 * 0x12) {
      do {
        if (pCVar10 == pCVar9) break;
        uVar3 = puVar12[1];
        uVar4 = puVar12[2];
        uVar5 = puVar12[3];
        *(undefined4 *)&pCVar10->SpecificHeat_J__kg_K = *puVar12;
        *(undefined4 *)((int)&pCVar10->SpecificHeat_J__kg_K + 4) = uVar3;
        *(undefined4 *)&pCVar10->SpecificGasConstant_J__kg_K = uVar4;
        *(undefined4 *)((int)&pCVar10->SpecificGasConstant_J__kg_K + 4) = uVar5;
        uVar3 = puVar12[5];
        uVar4 = puVar12[6];
        uVar5 = puVar12[7];
        *(undefined4 *)&pCVar10->Temperature_K = puVar12[4];
        *(undefined4 *)((int)&pCVar10->Temperature_K + 4) = uVar3;
        *(undefined4 *)&pCVar10->Pressure_Pa = uVar4;
        *(undefined4 *)((int)&pCVar10->Pressure_Pa + 4) = uVar5;
        uVar3 = puVar12[9];
        uVar4 = puVar12[10];
        uVar5 = puVar12[0xb];
        *(undefined4 *)&pCVar10->MassFlowRate_kg__s = puVar12[8];
        *(undefined4 *)((int)&pCVar10->MassFlowRate_kg__s + 4) = uVar3;
        *(undefined4 *)&pCVar10->Area_m2 = uVar4;
        *(undefined4 *)((int)&pCVar10->Area_m2 + 4) = uVar5;
        pCVar10[1].SpecificHeat_J__kg_K = *(double *)(puVar12 + 0xc);
        util__Maybe_struct_util__ClassMember___operator
                  ((Str_L_char_G_ *)&pCVar10[1].SpecificGasConstant_J__kg_K,(Str_L_char_G_ *)(puVar12 + 0xe)
                  );
        puVar12 = puVar12 + 0x12;
        puVar8 = *(undefined4 **)(this + 4);
        pCVar10 = (CompressibleFlowPoint *)&pCVar10[1].Pressure_Pa;
      } while (puVar12 != puVar8 + param_1 * 0x12);
    }
    if (puVar8 != (undefined4 *)0x0) {
      iVar13 = puVar8[-1];
      if (iVar13 != 0) {
        puVar12 = puVar8 + iVar13 * 0x12 + 0xe;
        do {
          puVar1 = puVar12 + -0x12;
          puVar12 = puVar12 + -0x12;
          iVar13 = iVar13 + -1;
          if ((void *)*puVar1 != (void *)0x0) {
            port_op_delete((void *)*puVar1);
            *puVar12 = 0;
          }
        } while (iVar13 != 0);
        iVar13 = puVar8[-1];
      }
      port_op_delete(puVar8 + -1,iVar13 * 0x48 + 4);
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(CompressibleFlowPoint **)(this + 4) = pCStack_c;
  return bStack_5;
}





//==== 006159f0 CheckSize_006159f0 ====


/* private: bool  util__Darray_L_structutil__tuple5_L_structutil__Vec2_L_int_G__Ccharconst__P_CstructCompressibleFlowPoint_Cdouble_Cvoid___cdecl_P__void__G__G___CheckSize(int) */

bool 
util__Darray_struct_util__tuple5_struct_util__Vec2_int__char_const__struct_CompressibleFlowPoint_double_void____cdecl___void______CheckSize(Darray_L_struct_util__tuple5_L_struct_util__Vec2_L_int_G__Cchar_const_P_Cstruct_CompressibleFlowPoint_Cdouble_Cvoid____cdecl_P__void__G___G_
            *this,int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  bool bVar12;
  undefined4 *puStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar7 = *(uint *)(this + 8);
  bVar12 = -1 < (int)uVar7;
  bVar3 = !bVar12;
  if (bVar3) {
    puStack_c = (undefined4 *)0x0;
    SetSize(this,(int *)&puStack_c);
    uVar7 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar3;
  bVar3 = (int)uVar7 < 0x40000000;
  if (!bVar3) {
    puStack_c = (undefined4 *)0x3fffffff;
    SetSize(this,(int *)&puStack_c);
    uVar7 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar10 = *(uint *)(this + 0xc);
  if ((int)uVar7 <= (int)uVar10) {
    return bVar3 && bVar12;
  }
  if (uVar10 == 0) {
    *(uint *)(this + 0xc) = uVar7;
    uVar10 = uVar7;
  }
  if ((int)uVar10 < (int)uVar7) {
    do {
      uVar10 = uVar10 * 2;
    } while ((int)uVar10 < (int)uVar7);
    *(uint *)(this + 0xc) = uVar10;
  }
  if (0x3fffffff < (int)uVar10) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar10 = 0x3fffffff;
  }
  puStack_c = (undefined4 *)
              port_op_new(-(uint)((int)((ulonglong)uVar10 * 0x58 >> 0x20) != 0) |
                             (uint)((ulonglong)uVar10 * 0x58));
  if (puStack_c == (undefined4 *)0x0) {
    puStack_c = (undefined4 *)0x0;
  }
  else if (uVar10 != 0) {
    puVar8 = puStack_c + 2;
    do {
      puVar8[-2] = 0;
      puVar8[-1] = 0;
      *puVar8 = 0;
      CompressibleFlowPoint__CompressibleFlowPoint__o3((CompressibleFlowPoint *)(puVar8 + 2));
      puVar8[0x12] = 0;
      *(undefined8 *)(puVar8 + 0x10) = 0;
      puVar8 = puVar8 + 0x16;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  puVar8 = *(undefined4 **)(this + 4);
  if (puVar8 != (undefined4 *)0x0) {
    iVar2 = *(int *)(this + 8);
    puVar9 = puStack_c;
    puVar11 = puVar8;
    if (puVar8 != puVar8 + param_1 * 0x16) {
      do {
        if (puVar9 == puStack_c + iVar2 * 0x16) break;
        uVar4 = puVar8[1];
        uVar5 = puVar8[2];
        uVar6 = puVar8[3];
        *puVar9 = *puVar8;
        puVar9[1] = uVar4;
        puVar9[2] = uVar5;
        puVar9[3] = uVar6;
        uVar4 = puVar8[5];
        uVar5 = puVar8[6];
        uVar6 = puVar8[7];
        puVar9[4] = puVar8[4];
        puVar9[5] = uVar4;
        puVar9[6] = uVar5;
        puVar9[7] = uVar6;
        uVar4 = puVar8[9];
        uVar5 = puVar8[10];
        uVar6 = puVar8[0xb];
        puVar9[8] = puVar8[8];
        puVar9[9] = uVar4;
        puVar9[10] = uVar5;
        puVar9[0xb] = uVar6;
        uVar4 = puVar8[0xd];
        uVar5 = puVar8[0xe];
        uVar6 = puVar8[0xf];
        puVar9[0xc] = puVar8[0xc];
        puVar9[0xd] = uVar4;
        puVar9[0xe] = uVar5;
        puVar9[0xf] = uVar6;
        uVar4 = puVar8[0x11];
        uVar5 = puVar8[0x12];
        uVar6 = puVar8[0x13];
        puVar9[0x10] = puVar8[0x10];
        puVar9[0x11] = uVar4;
        puVar9[0x12] = uVar5;
        puVar9[0x13] = uVar6;
        puVar1 = (undefined8 *)(puVar8 + 0x14);
        puVar8 = puVar8 + 0x16;
        *(undefined8 *)(puVar9 + 0x14) = *puVar1;
        puVar11 = *(undefined4 **)(this + 4);
        puVar9 = puVar9 + 0x16;
      } while (puVar8 != puVar11 + param_1 * 0x16);
    }
    port_op_delete(puVar11);
    *(undefined4 *)(this + 4) = 0;
  }
  *(undefined4 **)(this + 4) = puStack_c;
  return bStack_5;
}





//==== 00615b90 Clear_00615b90 ====


/* public: virtual void  util__Darray_L_structutil__tuple2_L_struct_CompressibleFlowPoint_Cclassutil__Str_L_char_G__G__G___Clear(void) */

void 
util__Darray_struct_util__tuple2_struct_CompressibleFlowPoint_class_util__Str_char_______Clear
          (Darray_L_struct_util__tuple2_L_struct_CompressibleFlowPoint_Cclass_util__Str_L_char_G___G___G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 00615bb0 Clear_00615bb0 ====


/* public: virtual void  util__Darray_L_structutil__tuple5_L_structutil__Vec2_L_int_G__Cchar_const_P_CstructCompressibleFlowPoint_Cdouble_Cvoid___cdecl_P__void__G__G___Clear(void) */

void 
util__Darray_struct_util__tuple5_struct_util__Vec2_int__char_const__struct_CompressibleFlowPoint_double_void____cdecl___void______Clear(Darray_L_struct_util__tuple5_L_struct_util__Vec2_L_int_G__Cchar_const_P_Cstruct_CompressibleFlowPoint_Cdouble_Cvoid____cdecl_P__void__G___G_
        *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 00616890 Last_00616890 ====


/* public: virtual struct util__tuple2_L_structCompressibleFlowPoint_Cclassutil__Str_L_char_G__G_ &
    util__Darray_struct_util__tuple2_struct_CompressibleFlowPoint_class_util__Str_char_______Last(void) */

tuple2_L_struct_CompressibleFlowPoint_Cclass_util__Str_L_char_G___G_ * 
util__Darray_struct_util__tuple2_struct_CompressibleFlowPoint_class_util__Str_char_______Last__o2
          (Darray_L_struct_util__tuple2_L_struct_CompressibleFlowPoint_Cclass_util__Str_L_char_G___G___G_ *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3c,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = *(int *)(this + 8);
  }
  return (tuple2_L_struct_CompressibleFlowPoint_Cclass_util__Str_L_char_G___G_ *)
         (*(int *)(this + 4) + iVar1 * 0x48 + -0x48);
}





//==== 006168d0 Last_006168d0 ====


/* public: virtual struct util__tuple2_L_structCompressibleFlowPoint_Cclassutil__Str_L_char_G__G_ const &
    util__Darray_struct_util__tuple2_struct_CompressibleFlowPoint_class_util__Str_char_______Last(void)const  */

tuple2_L_struct_CompressibleFlowPoint_Cclass_util__Str_L_char_G___G_ * 
util__Darray_struct_util__tuple2_struct_CompressibleFlowPoint_class_util__Str_char_______Last__o3
          (Darray_L_struct_util__tuple2_L_struct_CompressibleFlowPoint_Cclass_util__Str_L_char_G___G___G_ *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3d,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = *(int *)(this + 8);
  }
  return (tuple2_L_struct_CompressibleFlowPoint_Cclass_util__Str_L_char_G___G_ *)
         (*(int *)(this + 4) + iVar1 * 0x48 + -0x48);
}





//==== 00616910 Last_00616910 ====


/* public: virtual struct util__tuple5_L_structutil__Vec2_L_int_G__Ccharconst_P_Cstruct_CompressibleFlowPoint_Cdouble_Cvoid___cdecl_P__void__G_ &  util__Darray_L_struct_util__tuple5_L_structutil__Vec2_L_int_G__Ccharconst_P_CstructCompressibleFlowPoint_Cdouble_Cvoid____cdecl_P__void__G__G___Last(void) */

tuple5_L_struct_util__Vec2_L_int_G__Cchar_const_P_Cstruct_CompressibleFlowPoint_Cdouble_Cvoid____cdecl_P__void__G_
* 
util__Darray_struct_util__tuple5_struct_util__Vec2_int__char_const__struct_CompressibleFlowPoint_double_void____cdecl___void______Last(Darray_L_struct_util__tuple5_L_struct_util__Vec2_L_int_G__Cchar_const_P_Cstruct_CompressibleFlowPoint_Cdouble_Cvoid____cdecl_P__void__G___G_
       *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3c,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = *(int *)(this + 8);
  }
  return (tuple5_L_struct_util__Vec2_L_int_G__Cchar_const_P_Cstruct_CompressibleFlowPoint_Cdouble_Cvoid____cdecl_P__void__G_
          *)(*(int *)(this + 4) + -0x58 + iVar1 * 0x58);
}





//==== 00616950 Last_00616950 ====


/* public: virtual struct util__tuple5_L_structutil__Vec2_L_int_G__Ccharconst_P_Cstruct_CompressibleFlowPoint_Cdouble_Cvoid___cdecl_P__void__G_ const &  util__Darray_L_struct_util__tuple5_L_structutil__Vec2_L_int_G__Ccharconst_P_CstructCompressibleFlowPoint_Cdouble_Cvoid____cdecl_P__void__G__G___Last(void)const  */

tuple5_L_struct_util__Vec2_L_int_G__Cchar_const_P_Cstruct_CompressibleFlowPoint_Cdouble_Cvoid____cdecl_P__void__G_
* 
util__Darray_struct_util__tuple5_struct_util__Vec2_int__char_const__struct_CompressibleFlowPoint_double_void____cdecl___void______Last__o3(Darray_L_struct_util__tuple5_L_struct_util__Vec2_L_int_G__Cchar_const_P_Cstruct_CompressibleFlowPoint_Cdouble_Cvoid____cdecl_P__void__G___G_
       *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3d,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = *(int *)(this + 8);
  }
  return (tuple5_L_struct_util__Vec2_L_int_G__Cchar_const_P_Cstruct_CompressibleFlowPoint_Cdouble_Cvoid____cdecl_P__void__G_
          *)(*(int *)(this + 4) + -0x58 + iVar1 * 0x58);
}





//==== 00616990 Render_00616990 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void  ModuleDiagram_class_TurboelectricFissionReactorModule___Render(void)const  */

void 
ModuleDiagram_class_TurboelectricFissionReactorModule___Render
          (ModuleDiagram_L_class_TurboelectricFissionReactorModule_G_ *this)

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
  TurboelectricFissionReactorModule__RenderDiagram
            (*(TurboelectricFissionReactorModule **)(this + 0x168),pMVar1,*(Vec2_L_int_G_ *)VVar3.X);
  Graphics__ShaderStack___ShaderStack(&SStack_9);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 006169f0 RenderDiagram_006169f0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void  TurboelectricFissionReactorModule__RenderDiagram(class Manager *,struct
   util__Vec2_L_int_G_)const  */

void 
TurboelectricFissionReactorModule__RenderDiagram
          (TurboelectricFissionReactorModule *this,Manager *param_1,Vec2_L_int_G_ param_2)

{
  undefined8 stack0xfffffe34;
  undefined8 stack0xfffffffc;
  double *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Material *pMVar4;
  Vec4_L_int_G_ VVar5;
  Vec3_L_int_G_ VVar6;
  Str_L_char_G_ SVar7;
  Str_L_char_G_ SVar8;
  Manager *this_01;
  _func_void *p_Var9;
  TurboelectricFissionReactorModule *this_02;
  int iVar10;
  void *pvVar11;
  CompressibleFlowPoint *pCVar12;
  CompressibleFlowPoint *this_03;
  int *piVar13;
  Vec2_L_int_G_ *pVVar14;
  GameManager *this_04;
  Atlas *pAVar15;
  undefined4 *puVar16;
  int iVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  int iVar24;
  undefined4 uVar25;
  char *in_stack_fffffe34;
  Str_L_char_G_ *__return_storage_ptr__;
  int iVar26;
  char *pcVar27;
  int iVar28;
  _func_void *p_Var29;
  int iVar30;
  int local_1b0;
  int iStack_1ac;
  char *pcStack_1a8;
  undefined4 uStack_1a4;
  undefined1 local_1a0 [20];
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  int local_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  Vec2_L_int_G_ local_170;
  Vec2_L_int_G_ VStack_168;
  Vec2_L_int_G_ local_160;
  int local_158;
  Str_L_char_G_ SStack_154;
  Str_L_char_G_ local_148;
  Manager *local_13c;
  char *local_138;
  Vec2_L_int_G_ local_134;
  undefined1 local_12c [12];
  char *local_120;
  undefined **local_11c;
  void *pvStack_118;
  int iStack_114;
  int iStack_110;
  undefined1 local_10c [48];
  undefined8 local_dc;
  int local_d4;
  int local_d0;
  char *local_cc;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined1 local_b4 [48];
  code *local_84;
  int iStack_80;
  Str_L_char_G_ local_7c;
  Str_L_char_G_ local_70;
  int local_64;
  int iStack_60;
  char *pcStack_5c;
  int iStack_58;
  undefined1 local_54 [48];
  double local_24;
  Vec2_L_int_G_ VStack_1c;
  undefined8 local_14;
  TurboelectricFissionReactorModule *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar13 = &(this->Turbine).StageCount;
  this_00 = &(this->Turbopump).CachedFluidDensity_kg__m3;
  local_13c = param_1;
  local_c = this;
  (*(uint64_t*)((char*)&(local_12c)+4)) = TurbineSubModule__GetTotalCrossSectionalArea_m2((TurbineSubModule *)piVar13);
  dVar18 = TurbopumpSubModule__GetTotalCrossSectionalArea_m2((TurbopumpSubModule *)this_00);
  (*(uint64_t*)((char*)&(local_12c)+4)) = (double)(*(uint64_t*)((char*)&(local_12c)+4)) / dVar18;
  iVar10 = GetSystemSize();
  iVar30 = 0x3f800000;
  dVar18 = 1.0;
  if ((double)(*(uint64_t*)((char*)&(local_12c)+4)) <= 1.0) {
    dVar18 = (double)(*(uint64_t*)((char*)&(local_12c)+4));
  }
  dVar19 = 1.0;
  if (1.0 / (double)(*(uint64_t*)((char*)&(local_12c)+4)) <= 1.0) {
    dVar19 = 1.0 / (double)(*(uint64_t*)((char*)&(local_12c)+4));
  }
  (*(uint64_t*)((char*)&(local_12c)+4)) = dVar18 * (double)(iVar10 / 2);
  local_134 = ({ __typeof__((dVar19 * (double)(iVar10 / 2))) _t_ = (dVar19 * (double)(iVar10 / 2)); *(Vec2_L_int_G_ *)&_t_; });
  glLineWidth();
  local_7c.Length = 0;
  pcVar27 = "Turbopump.GetPowerRequired_W()";
  local_7c.Data = (char *)0x0;
  local_7c.Capacity = 0;
  iVar10 = 0x616ab7;
  util__Str_char___Str_char(&SStack_154,"Turbopump.GetPowerRequired_W()");
  GetUnitsOfType((Str_L_char_G_ *)&stack0xfffffe34,&SStack_154);
  dVar18 = TurbopumpSubModule__GetPowerRequired_W((TurbopumpSubModule *)this_00);
  SVar7.Capacity = (int)pcVar27;
  SVar7.Data = (char *)iVar10;
  SVar7.Length = iVar30;
  Print(&local_148,(double)CONCAT44(in_stack_fffffe34,(int)((ulonglong)dVar18 >> 0x20)),SVar7);
  __return_storage_ptr__ = &local_7c;
  util__Printf(__return_storage_ptr__,(wchar_t*)("%s"));
  if (local_148.Data != (char *)0x0) {
    port_op_delete(local_148.Data);
    local_148.Data = (char *)0x0;
  }
  if (SStack_154.Data != (char *)0x0) {
    port_op_delete(SStack_154.Data);
  }
  local_70.Length = 0;
  pcVar27 = "Turbine.GetPowerGenerated_W()";
  local_70.Data = (char *)0x0;
  local_70.Capacity = 0;
  iVar10 = 0x616b58;
  util__Str_char___Str_char(&local_148,"Turbine.GetPowerGenerated_W()");
  GetUnitsOfType((Str_L_char_G_ *)&stack0xfffffe34,&local_148);
  dVar18 = TurbineSubModule__GetPowerGenerated_W((TurbineSubModule *)piVar13);
  SVar8.Capacity = (int)pcVar27;
  SVar8.Data = (char *)iVar10;
  SVar8.Length = iVar30;
  Print(&SStack_154,(double)CONCAT44(__return_storage_ptr__,(int)((ulonglong)dVar18 >> 0x20)),SVar8)
  ;
  util__Printf(&local_70,(wchar_t*)("%s"));
  if (SStack_154.Data != (char *)0x0) {
    port_op_delete(SStack_154.Data);
    SStack_154.Data = (char *)0x0;
  }
  if (local_148.Data != (char *)0x0) {
    port_op_delete(local_148.Data);
  }
  local_138 = "";
  if (0 < local_7c.Capacity) {
    local_138 = local_7c.Data;
  }
  local_120 = "";
  if (0 < local_70.Capacity) {
    local_120 = local_70.Data;
  }
  local_11c = &vftable_270;
  pvStack_118 = (void *)0x0;
  iStack_114 = 0;
  iStack_110 = 6;
  pvVar11 = (void *)(uintptr_t)(port_op_new(0x210));
  if (pvVar11 == (void *)0x0) {
    pvVar11 = (void *)0x0;
  }
  else {
    iVar10 = 6;
    puVar16 = (undefined4 *)((int)pvVar11 + 8);
    do {
      puVar16[-2] = 0;
      puVar16[-1] = 0;
      *puVar16 = 0;
      CompressibleFlowPoint__CompressibleFlowPoint__o3((CompressibleFlowPoint *)(puVar16 + 2));
      puVar16[0x12] = 0;
      *(undefined8 *)(puVar16 + 0x10) = 0;
      puVar16 = puVar16 + 0x16;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  iVar10 = 0;
  pvStack_118 = pvVar11;
  if (0 < iStack_110) {
    iVar17 = 0;
    do {
      local_1b0 = 0;
      iStack_1ac = 0;
      pcStack_1a8 = (char *)0x0;
      CompressibleFlowPoint__CompressibleFlowPoint__o3((CompressibleFlowPoint *)local_1a0);
      (*(uint64_t *)&(local_160)) &= 0xffffffff00000000;
      VStack_168.X = 0;
      VStack_168.Y = 0;
      iVar10 = iVar10 + 1;
      puVar16 = (undefined4 *)((int)pvStack_118 + iVar17);
      *puVar16 = local_1b0;
      puVar16[1] = iStack_1ac;
      puVar16[2] = (undefined4)(uintptr_t)(pcStack_1a8);
      puVar16[3] = uStack_1a4;
      puVar16 = (undefined4 *)((int)pvStack_118 + iVar17 + 0x10);
      *puVar16 = (*(uint32_t*)&(local_1a0));
      puVar16[1] = (*(uint32_t*)((char*)&(local_1a0)+4));
      puVar16[2] = (*(uint32_t*)((char*)&(local_1a0)+8));
      puVar16[3] = (*(uint32_t *)((char *)&(local_1a0) + 12));
      puVar16 = (undefined4 *)((int)pvStack_118 + iVar17 + 0x20);
      *puVar16 = (*(uint32_t *)((char *)&(local_1a0) + 16));
      puVar16[1] = iStack_18c;
      puVar16[2] = iStack_188;
      puVar16[3] = iStack_184;
      puVar16 = (undefined4 *)((int)pvStack_118 + iVar17 + 0x30);
      *puVar16 = local_180;
      puVar16[1] = iStack_17c;
      puVar16[2] = iStack_178;
      puVar16[3] = iStack_174;
      puVar16 = (undefined4 *)((int)pvStack_118 + iVar17 + 0x40);
      *puVar16 = local_170.X;
      puVar16[1] = local_170.Y;
      puVar16[2] = 0;
      puVar16[3] = 0;
      *(Vec2_L_int_G_ *)((int)pvStack_118 + iVar17 + 0x50) = local_160;
      iVar17 = iVar17 + 0x58;
    } while (iVar10 < iStack_110);
  }
  iVar10 = GetSystemSize();
  this_02 = local_c;
  pCVar12 = (CompressibleFlowPoint *)(uintptr_t)(GetTurbopumpExitFlowPoint(local_c,(CompressibleFlowPoint *)(local_1a0 + 0x10)));
  local_cc = local_138;
  local_c4 = *(undefined4 *)&pCVar12->SpecificHeat_J__kg_K;
  uStack_c0 = *(undefined4 *)((int)&pCVar12->SpecificHeat_J__kg_K + 4);
  uStack_bc = *(undefined4 *)&pCVar12->SpecificGasConstant_J__kg_K;
  uStack_b8 = *(undefined4 *)((int)&pCVar12->SpecificGasConstant_J__kg_K + 4);
  local_84 = (long long int (*)())(Icons__Turbine);
  (*(uint32_t*)&(local_b4)) = *(undefined4 *)&pCVar12->Temperature_K;
  (*(uint32_t*)((char*)&(local_b4)+4)) = *(int *)((int)&pCVar12->Temperature_K + 4);
  (*(uint32_t*)((char*)&(local_b4)+8)) = *(undefined4 *)&pCVar12->Pressure_Pa;
  (*(uint32_t *)((char *)&(local_b4) + 12)) = *(int *)((int)&pCVar12->Pressure_Pa + 4);
  (*(uint32_t *)((char *)&(local_b4) + 16)) = *(undefined4 *)&pCVar12->MassFlowRate_kg__s;
  (*(uint32_t *)((char *)&(local_b4) + 20)) = *(int *)((int)&pCVar12->MassFlowRate_kg__s + 4);
  (*(uint32_t *)((char *)&(local_b4) + 24)) = *(undefined4 *)&pCVar12->Area_m2;
  (*(uint32_t *)((char *)&(local_b4) + 28)) = *(int *)((int)&pCVar12->Area_m2 + 4);
  (*(uint64_t *)((char *)&(local_b4) + 32)) = pCVar12[1].SpecificHeat_J__kg_K;
  (*(uint32_t *)((char *)&(local_b4) + 40)) = local_134.X;
  (*(uint32_t *)((char *)&(local_b4) + 44)) = local_134.Y;
  local_d4 = param_2.X / 2;
  local_d0 = iVar10 / 2;
  util__Darray_L_util__tuple5_L_util__Vec2_L_int_G__Cchar_const_P_CCompressibleFlowPoint_Cdouble_Cvoid____cdecl_P__void__G___G___Add((Darray_L_util__tuple5_L_util__Vec2_L_int_G__Cchar_const_P_CCompressibleFlowPoint_Cdouble_Cvoid____cdecl_P__void__G___G_
         *)&local_11c,
        (tuple5_L_util__Vec2_L_int_G__Cchar_const_P_CCompressibleFlowPoint_Cdouble_Cvoid____cdecl_P__void__G_ *)
        &local_d4);
  GetTurbopumpExitFlowPoint(this_02,(CompressibleFlowPoint *)local_10c);
  pMVar4 = (Material *)(uintptr_t)*(uint32_t *)&(this_02->NuclearReactor).ControlRodMass_kg;
  iVar10 = 0;
  iVar17 = 0;
  uVar25 = (*(uint32_t *)((char *)&(local_10c) + 24));
  uVar20 = (*(uint32_t *)((char *)&(local_10c) + 28));
  uVar21 = (*(uint32_t *)((char *)&(local_10c) + 32));
  uVar22 = (*(uint32_t *)((char *)&(local_10c) + 36));
  uVar23 = (*(uint32_t *)((char *)&(local_10c) + 40));
  pcVar27 = (char *)(*(uint32_t *)((char *)&(local_10c) + 44));
  dVar18 = NuclearReactorSubModule__GetTemperatureJump_K
                     ((NuclearReactorSubModule *)
                      &(this_02->NuclearReactor).GetEmittedRadiation_MemoizedValue);
  CompressibleFlowPoint__CompressibleFlowPoint
            ((CompressibleFlowPoint *)local_b4,pMVar4,
             (double)CONCAT44(uVar25,(int)((ulonglong)
                                           (dVar18 + (double)CONCAT44((*(uint32_t *)((char *)&(local_10c) + 20)),
                                                                      (*(uint32_t *)((char *)&(local_10c) + 16)))) >> 0x20)),
             (double)CONCAT44(uVar21,uVar20),(double)CONCAT44(uVar23,uVar22),
             (double)CONCAT44(iVar10,pcVar27),(double)CONCAT44(iVar30,iVar17));
  local_1b0 = GetSystemSize();
  pcStack_1a8 = "";
  (*(uint64_t *)&(local_160)) &= 0xffffffff00000000;
  (*(uint32_t*)&(local_1a0)) = (*(uint32_t*)&(local_b4));
  (*(uint32_t*)((char*)&(local_1a0)+4)) = (*(uint32_t*)((char*)&(local_b4)+4));
  (*(uint32_t*)((char*)&(local_1a0)+8)) = (*(uint32_t*)((char*)&(local_b4)+8));
  (*(uint32_t *)((char *)&(local_1a0) + 12)) = (*(uint32_t *)((char *)&(local_b4) + 12));
  local_1b0 = local_1b0 / 2;
  iStack_1ac = param_2.Y / 3;
  (*(uint32_t *)((char *)&(local_1a0) + 16)) = (*(uint32_t *)((char *)&(local_b4) + 16));
  iStack_18c = (*(uint32_t *)((char *)&(local_b4) + 20));
  iStack_188 = (*(uint32_t *)((char *)&(local_b4) + 24));
  iStack_184 = (*(uint32_t *)((char *)&(local_b4) + 28));
  local_180 = (*(uint32_t *)((char *)&(local_b4) + 32));
  iStack_17c = (*(uint32_t *)((char *)&(local_b4) + 36));
  iStack_178 = (*(uint32_t *)((char *)&(local_b4) + 40));
  iStack_174 = (*(uint32_t *)((char *)&(local_b4) + 44));
  local_170.Y = iStack_80;
  local_170.X = (int)local_84;
  VStack_168 = local_134;
  util__Darray_L_util__tuple5_L_util__Vec2_L_int_G__Cchar_const_P_CCompressibleFlowPoint_Cdouble_Cvoid____cdecl_P__void__G___G___Add((Darray_L_util__tuple5_L_util__Vec2_L_int_G__Cchar_const_P_CCompressibleFlowPoint_Cdouble_Cvoid____cdecl_P__void__G___G_
         *)&local_11c,
        (tuple5_L_util__Vec2_L_int_G__Cchar_const_P_CCompressibleFlowPoint_Cdouble_Cvoid____cdecl_P__void__G_ *)
        &local_1b0);
  GetTurbopumpExitFlowPoint(this_02,(CompressibleFlowPoint *)local_b4);
  pMVar4 = (Material *)(uintptr_t)*(uint32_t *)&(this_02->NuclearReactor).ControlRodMass_kg;
  iVar26 = 0;
  iVar28 = 0;
  iVar10 = (*(uint32_t *)((char *)&(local_b4) + 24));
  iVar17 = (*(uint32_t *)((char *)&(local_b4) + 28));
  uVar25 = (*(uint32_t *)((char *)&(local_b4) + 32));
  uVar20 = (*(uint32_t *)((char *)&(local_b4) + 36));
  iVar24 = (*(uint32_t *)((char *)&(local_b4) + 40));
  pcVar27 = (char *)(*(uint32_t *)((char *)&(local_b4) + 44));
  dVar18 = NuclearReactorSubModule__GetTemperatureJump_K
                     ((NuclearReactorSubModule *)
                      &(this_02->NuclearReactor).GetEmittedRadiation_MemoizedValue);
  CompressibleFlowPoint__CompressibleFlowPoint
            ((CompressibleFlowPoint *)(local_1a0 + 0x10),pMVar4,
             (double)CONCAT44(iVar10,(int)((ulonglong)
                                           (dVar18 + (double)CONCAT44((*(uint32_t *)((char *)&(local_b4) + 20)),
                                                                      (*(uint32_t *)((char *)&(local_b4) + 16)))) >> 0x20)),
             (double)CONCAT44(uVar25,iVar17),(double)CONCAT44(iVar24,uVar20),
             (double)CONCAT44(iVar26,pcVar27),(double)CONCAT44(iVar30,iVar28));
  dVar18 = TurbineSubModule__GetTotalCrossSectionalArea_m2
                     ((TurbineSubModule *)&(this_02->Turbine).StageCount);
  CompressibleFlowPoint__GetAreaChangedExitFlow
            ((CompressibleFlowPoint *)(local_1a0 + 0x10),(CompressibleFlowPoint *)local_10c,
             (double)CONCAT44(iVar30,(int)((ulonglong)dVar18 >> 0x20)));
  local_64 = GetSystemSize();
  pcStack_5c = "";
  (*(uint32_t*)&(local_14)) = Icons__RadiationHazard;
  (*(uint32_t*)&(local_54)) = (*(uint32_t*)&(local_10c));
  (*(uint32_t*)((char*)&(local_54)+4)) = (*(uint32_t*)((char*)&(local_10c)+4));
  (*(uint32_t*)((char*)&(local_54)+8)) = (*(uint32_t*)((char*)&(local_10c)+8));
  (*(uint32_t *)((char *)&(local_54) + 12)) = (*(uint32_t *)((char *)&(local_10c) + 12));
  local_64 = local_64 / 2;
  iStack_60 = (param_2.Y * 2) / 3;
  (*(uint32_t *)((char *)&(local_54) + 16)) = (*(uint32_t *)((char *)&(local_10c) + 16));
  (*(uint32_t *)((char *)&(local_54) + 20)) = (*(uint32_t *)((char *)&(local_10c) + 20));
  (*(uint32_t *)((char *)&(local_54) + 24)) = (*(uint32_t *)((char *)&(local_10c) + 24));
  (*(uint32_t *)((char *)&(local_54) + 28)) = (*(uint32_t *)((char *)&(local_10c) + 28));
  (*(uint32_t *)((char *)&(local_54) + 32)) = (*(uint32_t *)((char *)&(local_10c) + 32));
  (*(uint32_t *)((char *)&(local_54) + 36)) = (*(uint32_t *)((char *)&(local_10c) + 36));
  (*(uint32_t *)((char *)&(local_54) + 40)) = (*(uint32_t *)((char *)&(local_10c) + 40));
  (*(uint32_t *)((char *)&(local_54) + 44)) = (*(uint32_t *)((char *)&(local_10c) + 44));
  local_24 = (double)local_dc;
  VStack_1c.X = (*(uint32_t*)((char*)&(local_12c)+4));
  VStack_1c.Y = (*(uint32_t*)((char*)&(local_12c)+8));
  util__Darray_L_util__tuple5_L_util__Vec2_L_int_G__Cchar_const_P_CCompressibleFlowPoint_Cdouble_Cvoid____cdecl_P__void__G___G___Add((Darray_L_util__tuple5_L_util__Vec2_L_int_G__Cchar_const_P_CCompressibleFlowPoint_Cdouble_Cvoid____cdecl_P__void__G___G_
         *)&local_11c,
        (tuple5_L_util__Vec2_L_int_G__Cchar_const_P_CCompressibleFlowPoint_Cdouble_Cvoid____cdecl_P__void__G_ *)
        &local_64);
  iVar10 = GetSystemSize();
  pCVar12 = (CompressibleFlowPoint *)(uintptr_t)(GetTurbineExitFlowPoint(this_02,(CompressibleFlowPoint *)(local_1a0 + 0x10)));
  (*(uint32_t*)&(local_54)) = *(undefined4 *)&pCVar12->SpecificHeat_J__kg_K;
  (*(uint32_t*)((char*)&(local_54)+4)) = *(undefined4 *)((int)&pCVar12->SpecificHeat_J__kg_K + 4);
  (*(uint32_t*)((char*)&(local_54)+8)) = *(undefined4 *)&pCVar12->SpecificGasConstant_J__kg_K;
  (*(uint32_t *)((char *)&(local_54) + 12)) = *(undefined4 *)((int)&pCVar12->SpecificGasConstant_J__kg_K + 4);
  pcStack_5c = local_120;
  (*(uint32_t *)((char *)&(local_54) + 16)) = *(undefined4 *)&pCVar12->Temperature_K;
  (*(uint32_t *)((char *)&(local_54) + 20)) = *(undefined4 *)((int)&pCVar12->Temperature_K + 4);
  (*(uint32_t *)((char *)&(local_54) + 24)) = *(undefined4 *)&pCVar12->Pressure_Pa;
  (*(uint32_t *)((char *)&(local_54) + 28)) = *(undefined4 *)((int)&pCVar12->Pressure_Pa + 4);
  (*(uint32_t*)&(local_14)) = (uint32_t)(uintptr_t)(Icons__Turbine);
  (*(uint32_t *)((char *)&(local_54) + 32)) = *(undefined4 *)&pCVar12->MassFlowRate_kg__s;
  (*(uint32_t *)((char *)&(local_54) + 36)) = *(undefined4 *)((int)&pCVar12->MassFlowRate_kg__s + 4);
  (*(uint32_t *)((char *)&(local_54) + 40)) = *(undefined4 *)&pCVar12->Area_m2;
  (*(uint32_t *)((char *)&(local_54) + 44)) = *(undefined4 *)((int)&pCVar12->Area_m2 + 4);
  local_24 = pCVar12[1].SpecificHeat_J__kg_K;
  VStack_1c.X = (*(uint32_t*)((char*)&(local_12c)+4));
  VStack_1c.Y = (*(uint32_t*)((char*)&(local_12c)+8));
  local_64 = param_2.X / 2;
  iStack_60 = param_2.Y - iVar10 / 2;
  util__Darray_L_util__tuple5_L_util__Vec2_L_int_G__Cchar_const_P_CCompressibleFlowPoint_Cdouble_Cvoid____cdecl_P__void__G___G___Add((Darray_L_util__tuple5_L_util__Vec2_L_int_G__Cchar_const_P_CCompressibleFlowPoint_Cdouble_Cvoid____cdecl_P__void__G___G_
         *)&local_11c,
        (tuple5_L_util__Vec2_L_int_G__Cchar_const_P_CCompressibleFlowPoint_Cdouble_Cvoid____cdecl_P__void__G_ *)
        &local_64);
  dVar18 = TurbopumpSubModule__GetTotalCrossSectionalArea_m2
                     ((TurbopumpSubModule *)&(this_02->Turbopump).CachedFluidDensity_kg__m3);
  pCVar12 = (CompressibleFlowPoint *)local_b4;
  iVar10 = (int)((ulonglong)dVar18 >> 0x20);
  this_03 = (CompressibleFlowPoint *)(uintptr_t)(GetTurbineExitFlowPoint(this_02,(CompressibleFlowPoint *)(local_1a0 + 0x10)));
  CompressibleFlowPoint__GetAreaChangedExitFlow(this_03,pCVar12,(double)CONCAT44(iVar30,iVar10));
  iVar10 = GetSystemSize();
  pcStack_5c = "";
  local_64 = param_2.X - iVar10 / 2;
  (*(uint32_t*)&(local_14)) = (uint32_t)(uintptr_t)(Icons__Radiator);
  (*(uint32_t*)&(local_54)) = (*(uint32_t*)&(local_b4));
  (*(uint32_t*)((char*)&(local_54)+4)) = (*(uint32_t*)((char*)&(local_b4)+4));
  (*(uint32_t*)((char*)&(local_54)+8)) = (*(uint32_t*)((char*)&(local_b4)+8));
  (*(uint32_t *)((char *)&(local_54) + 12)) = (*(uint32_t *)((char *)&(local_b4) + 12));
  iStack_60 = (param_2.Y * 2) / 3;
  (*(uint32_t *)((char *)&(local_54) + 16)) = (*(uint32_t *)((char *)&(local_b4) + 16));
  (*(uint32_t *)((char *)&(local_54) + 20)) = (*(uint32_t *)((char *)&(local_b4) + 20));
  (*(uint32_t *)((char *)&(local_54) + 24)) = (*(uint32_t *)((char *)&(local_b4) + 24));
  (*(uint32_t *)((char *)&(local_54) + 28)) = (*(uint32_t *)((char *)&(local_b4) + 28));
  (*(uint32_t *)((char *)&(local_54) + 32)) = (*(uint32_t *)((char *)&(local_b4) + 32));
  (*(uint32_t *)((char *)&(local_54) + 36)) = (*(uint32_t *)((char *)&(local_b4) + 36));
  (*(uint32_t *)((char *)&(local_54) + 40)) = (*(uint32_t *)((char *)&(local_b4) + 40));
  (*(uint32_t *)((char *)&(local_54) + 44)) = (*(uint32_t *)((char *)&(local_b4) + 44));
  local_24 = (double)CONCAT44(iStack_80,local_84);
  VStack_1c = local_134;
  util__Darray_L_util__tuple5_L_util__Vec2_L_int_G__Cchar_const_P_CCompressibleFlowPoint_Cdouble_Cvoid____cdecl_P__void__G___G___Add((Darray_L_util__tuple5_L_util__Vec2_L_int_G__Cchar_const_P_CCompressibleFlowPoint_Cdouble_Cvoid____cdecl_P__void__G___G_
         *)&local_11c,
        (tuple5_L_util__Vec2_L_int_G__Cchar_const_P_CCompressibleFlowPoint_Cdouble_Cvoid____cdecl_P__void__G_ *)
        &local_64);
  pMVar4 = (Material *)(uintptr_t)*(uint32_t *)&(this_02->NuclearReactor).ControlRodMass_kg;
  iVar10 = 0;
  iVar17 = 0;
  dVar18 = TurbopumpSubModule__GetTotalCrossSectionalArea_m2
                     ((TurbopumpSubModule *)&(this_02->Turbopump).CachedFluidDensity_kg__m3);
  uVar25 = SUB84(dVar18,0);
  pcVar27 = (char *)((ulonglong)dVar18 >> 0x20);
  dVar19 = TurbopumpSubModule__GetMassFlowRate_kg__s
                     ((TurbopumpSubModule *)&(this_02->Turbopump).CachedFluidDensity_kg__m3);
  uVar1 = this_02[1]._pad_0x20_8;
  uVar2 = this_02[1]._pad_0x24_9;
  uVar3 = this_02[1]._pad_0x2c_11;
  dVar18 = (double)CONCAT44(uVar1,uVar3);
  CompressibleFlowPoint__CompressibleFlowPoint
            ((CompressibleFlowPoint *)local_b4,pMVar4,dVar18,(double)CONCAT44(SUB84(dVar19,0),uVar2)
             ,(double)CONCAT44(uVar25,(int)((ulonglong)dVar19 >> 0x20)),
             (double)CONCAT44(iVar10,pcVar27),(double)CONCAT44(iVar30,iVar17));
  iVar10 = GetSystemSize();
  local_64 = param_2.X - iVar10 / 2;
  iStack_60 = param_2.Y / 3;
  (*(uint32_t*)&(local_54)) = (*(uint32_t*)&(local_b4));
  (*(uint32_t*)((char*)&(local_54)+4)) = (*(uint32_t*)((char*)&(local_b4)+4));
  (*(uint32_t*)((char*)&(local_54)+8)) = (*(uint32_t*)((char*)&(local_b4)+8));
  (*(uint32_t *)((char *)&(local_54) + 12)) = (*(uint32_t *)((char *)&(local_b4) + 12));
  pcStack_5c = "";
  (*(uint32_t *)((char *)&(local_54) + 16)) = (*(uint32_t *)((char *)&(local_b4) + 16));
  (*(uint32_t *)((char *)&(local_54) + 20)) = (*(uint32_t *)((char *)&(local_b4) + 20));
  (*(uint32_t *)((char *)&(local_54) + 24)) = (*(uint32_t *)((char *)&(local_b4) + 24));
  (*(uint32_t *)((char *)&(local_54) + 28)) = (*(uint32_t *)((char *)&(local_b4) + 28));
  local_14 = (ulonglong)(*(uint32_t*)((char*)&(local_14)+4)) << 0x20;
  (*(uint32_t *)((char *)&(local_54) + 32)) = (*(uint32_t *)((char *)&(local_b4) + 32));
  (*(uint32_t *)((char *)&(local_54) + 36)) = (*(uint32_t *)((char *)&(local_b4) + 36));
  (*(uint32_t *)((char *)&(local_54) + 40)) = (*(uint32_t *)((char *)&(local_b4) + 40));
  (*(uint32_t *)((char *)&(local_54) + 44)) = (*(uint32_t *)((char *)&(local_b4) + 44));
  local_24 = (double)CONCAT44(iStack_80,local_84);
  VStack_1c = local_134;
  util__Darray_L_util__tuple5_L_util__Vec2_L_int_G__Cchar_const_P_CCompressibleFlowPoint_Cdouble_Cvoid____cdecl_P__void__G___G___Add((Darray_L_util__tuple5_L_util__Vec2_L_int_G__Cchar_const_P_CCompressibleFlowPoint_Cdouble_Cvoid____cdecl_P__void__G___G_
         *)&local_11c,
        (tuple5_L_util__Vec2_L_int_G__Cchar_const_P_CCompressibleFlowPoint_Cdouble_Cvoid____cdecl_P__void__G_ *)
        &local_64);
  local_c = (TurboelectricFissionReactorModule *)0x0;
  if (0 < iStack_114) {
    do {
      piVar13 = (int *)(*(code *)*local_11c)();
      local_64 = *piVar13;
      iStack_60 = piVar13[1];
      pcStack_5c = (char *)piVar13[2];
      iStack_58 = piVar13[3];
      (*(uint32_t*)&(local_54)) = piVar13[4];
      (*(uint32_t*)((char*)&(local_54)+4)) = piVar13[5];
      (*(uint32_t*)((char*)&(local_54)+8)) = piVar13[6];
      (*(uint32_t *)((char *)&(local_54) + 12)) = piVar13[7];
      (*(uint32_t *)((char *)&(local_54) + 16)) = piVar13[8];
      (*(uint32_t *)((char *)&(local_54) + 20)) = piVar13[9];
      (*(uint32_t *)((char *)&(local_54) + 24)) = piVar13[10];
      (*(uint32_t *)((char *)&(local_54) + 28)) = piVar13[0xb];
      (*(uint32_t *)((char *)&(local_54) + 32)) = piVar13[0xc];
      (*(uint32_t *)((char *)&(local_54) + 36)) = piVar13[0xd];
      (*(uint32_t *)((char *)&(local_54) + 40)) = piVar13[0xe];
      (*(uint32_t *)((char *)&(local_54) + 44)) = piVar13[0xf];
      local_24 = *(double *)(piVar13 + 0x10);
      VStack_1c = *(Vec2_L_int_G_ *)(piVar13 + 0x12);
      local_14 = *(longlong *)(piVar13 + 0x14);
      local_120 = (char *)(((int)local_c + 1) % iStack_114);
      pVVar14 = (Vec2_L_int_G_ *)(*(code *)*local_11c)();
      (*(uint32_t*)&(local_1a0)) = pVVar14[2].X;
      (*(uint32_t*)((char*)&(local_1a0)+4)) = pVVar14[2].Y;
      (*(uint32_t*)((char*)&(local_1a0)+8)) = pVVar14[3].X;
      (*(uint32_t *)((char *)&(local_1a0) + 12)) = pVVar14[3].Y;
      (*(uint32_t *)((char *)&(local_1a0) + 16)) = pVVar14[4].X;
      iStack_18c = pVVar14[4].Y;
      iStack_188 = pVVar14[5].X;
      iStack_184 = pVVar14[5].Y;
      local_180 = pVVar14[6].X;
      iStack_17c = pVVar14[6].Y;
      iStack_178 = pVVar14[7].X;
      iStack_174 = pVVar14[7].Y;
      local_170 = pVVar14[8];
      VStack_168 = pVVar14[9];
      local_160 = pVVar14[10];
      VVar5.Y = iStack_60;
      VVar5.X = local_64;
      DrawCompressibleFlowTube
                ((*(Vec2_L_int_G_ *)&VVar5),*pVVar14,(CompressibleFlowPoint *)local_54,
                 (double)CONCAT44(iVar30,VStack_1c.Y));
      local_c = (TurboelectricFissionReactorModule *)((int)local_c + 1);
    } while ((int)local_c < iStack_114);
  }
  this_01 = local_13c;
  local_c = (TurboelectricFissionReactorModule *)0x0;
  if (0 < iStack_114) {
    do {
      piVar13 = (int *)(*(code *)*local_11c)();
      (*(uint32_t*)&(local_54)) = piVar13[4];
      (*(uint32_t*)((char*)&(local_54)+4)) = piVar13[5];
      (*(uint32_t*)((char*)&(local_54)+8)) = piVar13[6];
      (*(uint32_t *)((char *)&(local_54) + 12)) = piVar13[7];
      local_158 = *piVar13;
      SStack_154.Data = (char *)piVar13[1];
      SStack_154.Capacity = piVar13[2];
      SStack_154.Length = piVar13[3];
      (*(uint32_t *)((char *)&(local_54) + 16)) = piVar13[8];
      (*(uint32_t *)((char *)&(local_54) + 20)) = piVar13[9];
      (*(uint32_t *)((char *)&(local_54) + 24)) = piVar13[10];
      (*(uint32_t *)((char *)&(local_54) + 28)) = piVar13[0xb];
      (*(uint32_t *)((char *)&(local_54) + 32)) = piVar13[0xc];
      (*(uint32_t *)((char *)&(local_54) + 36)) = piVar13[0xd];
      (*(uint32_t *)((char *)&(local_54) + 40)) = piVar13[0xe];
      (*(uint32_t *)((char *)&(local_54) + 44)) = piVar13[0xf];
      local_24 = *(double *)(piVar13 + 0x10);
      VStack_1c = *(Vec2_L_int_G_ *)(piVar13 + 0x12);
      local_14 = *(longlong *)(piVar13 + 0x14);
      util__Str_char___Str_char((Str_L_char_G_ *)local_12c,(char *)SStack_154.Capacity);
      p_Var9 = (void (*)(void))((code *)local_14);
      p_Var29 = (void (*)(void))((code *)local_14);
      this_04 = Manager__GetParent(this_01);
      pAVar15 = GameManager__GetAtlasForIcon(this_04,p_Var29);
      VVar6.Y = (int)SStack_154.Data;
      VVar6.X = local_158;
      DrawSystem(VVar6,(Str_L_char_G_ *)local_12c,p_Var9,pAVar15);
      if ((char *)(*(uint32_t*)&(local_12c)) != (char *)0x0) {
        port_op_delete((void *)(*(uint32_t*)&(local_12c)));
        (*(uint32_t*)&(local_12c)) = (uint32_t)(uintptr_t)((char *)0x0);
      }
      local_c = (TurboelectricFissionReactorModule *)((int)local_c + 1);
    } while ((int)local_c < iStack_114);
  }
  local_11c = &vftable_270;
  if (pvStack_118 != (void *)0x0) {
    port_op_delete(pvStack_118);
  }
  pvStack_118 = (void *)0x0;
  local_11c = (undefined **)(&vftable);
  if (local_70.Data != (char *)0x0) {
    port_op_delete(local_70.Data);
    (*(uint64_t*)&(local_70)) = (*(uint64_t*)&(local_70)) & 0xffffffff00000000;
  }
  if (local_7c.Data != (char *)0x0) {
    port_op_delete(local_7c.Data);
  }
  return;
}

//==== 00617410 SetAll_00617410 ====


/* public: virtual void  util__Darray_L_structutil__tuple2_L_struct_CompressibleFlowPoint_Cclassutil__Str_L_char_G__G__G___SetAll(struct util__tuple2_L_struct_CompressibleFlowPoint_Cclassutil__Str_L_char_G__G_ const &) */

void 
util__Darray_struct_util__tuple2_struct_CompressibleFlowPoint_class_util__Str_char_______SetAll
          (Darray_L_struct_util__tuple2_L_struct_CompressibleFlowPoint_Cclass_util__Str_L_char_G___G___G_ *this,
          tuple2_L_struct_CompressibleFlowPoint_Cclass_util__Str_L_char_G___G_ *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(this + 4);
  if (puVar4 != puVar4 + *(int *)(this + 8) * 0x12) {
    do {
      uVar1 = *(undefined4 *)(param_1 + 4);
      uVar2 = *(undefined4 *)(param_1 + 8);
      uVar3 = *(undefined4 *)(param_1 + 0xc);
      *puVar4 = *(undefined4 *)param_1;
      puVar4[1] = uVar1;
      puVar4[2] = uVar2;
      puVar4[3] = uVar3;
      uVar1 = *(undefined4 *)(param_1 + 0x14);
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      uVar3 = *(undefined4 *)(param_1 + 0x1c);
      puVar4[4] = *(undefined4 *)(param_1 + 0x10);
      puVar4[5] = uVar1;
      puVar4[6] = uVar2;
      puVar4[7] = uVar3;
      uVar1 = *(undefined4 *)(param_1 + 0x24);
      uVar2 = *(undefined4 *)(param_1 + 0x28);
      uVar3 = *(undefined4 *)(param_1 + 0x2c);
      puVar4[8] = *(undefined4 *)(param_1 + 0x20);
      puVar4[9] = uVar1;
      puVar4[10] = uVar2;
      puVar4[0xb] = uVar3;
      *(undefined8 *)(puVar4 + 0xc) = *(undefined8 *)(param_1 + 0x30);
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar4 + 0xe),(Str_L_char_G_ *)(param_1 + 0x38));
      puVar4 = puVar4 + 0x12;
    } while (puVar4 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x48));
  }
  return;
}





//==== 00617480 SetAll_00617480 ====


/* public: virtual void  util__Darray_L_structutil__tuple5_L_structutil__Vec2_L_int_G__Cchar_const_P_CstructCompressibleFlowPoint_Cdouble_Cvoid___cdecl_P__void__G__G___SetAll(struct
   util__tuple5_L_structutil__Vec2_L_int_G__Ccharconst_P_CstructCompressibleFlowPoint_Cdouble_Cvoid____cdecl_P__void__G_ const &) */

void 
util__Darray_struct_util__tuple5_struct_util__Vec2_int__char_const__struct_CompressibleFlowPoint_double_void____cdecl___void______SetAll(Darray_L_struct_util__tuple5_L_struct_util__Vec2_L_int_G__Cchar_const_P_Cstruct_CompressibleFlowPoint_Cdouble_Cvoid____cdecl_P__void__G___G_
         *this,tuple5_L_struct_util__Vec2_L_int_G__Cchar_const_P_Cstruct_CompressibleFlowPoint_Cdouble_Cvoid____cdecl_P__void__G_
               *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(this + 4);
  if (puVar4 != puVar4 + *(int *)(this + 8) * 0x16) {
    do {
      uVar1 = *(undefined4 *)(param_1 + 4);
      uVar2 = *(undefined4 *)(param_1 + 8);
      uVar3 = *(undefined4 *)(param_1 + 0xc);
      *puVar4 = *(undefined4 *)param_1;
      puVar4[1] = uVar1;
      puVar4[2] = uVar2;
      puVar4[3] = uVar3;
      uVar1 = *(undefined4 *)(param_1 + 0x14);
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      uVar3 = *(undefined4 *)(param_1 + 0x1c);
      puVar4[4] = *(undefined4 *)(param_1 + 0x10);
      puVar4[5] = uVar1;
      puVar4[6] = uVar2;
      puVar4[7] = uVar3;
      uVar1 = *(undefined4 *)(param_1 + 0x24);
      uVar2 = *(undefined4 *)(param_1 + 0x28);
      uVar3 = *(undefined4 *)(param_1 + 0x2c);
      puVar4[8] = *(undefined4 *)(param_1 + 0x20);
      puVar4[9] = uVar1;
      puVar4[10] = uVar2;
      puVar4[0xb] = uVar3;
      uVar1 = *(undefined4 *)(param_1 + 0x34);
      uVar2 = *(undefined4 *)(param_1 + 0x38);
      uVar3 = *(undefined4 *)(param_1 + 0x3c);
      puVar4[0xc] = *(undefined4 *)(param_1 + 0x30);
      puVar4[0xd] = uVar1;
      puVar4[0xe] = uVar2;
      puVar4[0xf] = uVar3;
      uVar1 = *(undefined4 *)(param_1 + 0x44);
      uVar2 = *(undefined4 *)(param_1 + 0x48);
      uVar3 = *(undefined4 *)(param_1 + 0x4c);
      puVar4[0x10] = *(undefined4 *)(param_1 + 0x40);
      puVar4[0x11] = uVar1;
      puVar4[0x12] = uVar2;
      puVar4[0x13] = uVar3;
      *(undefined8 *)(puVar4 + 0x14) = *(undefined8 *)(param_1 + 0x50);
      puVar4 = puVar4 + 0x16;
    } while (puVar4 != (undefined4 *)(*(int *)(this + 8) * 0x58 + *(int *)(this + 4)));
  }
  return;
}





//==== 006174e0 SetSize_006174e0 ====


/* private: void  util__Darray_L_structutil__tuple2_L_structCompressibleFlowPoint_Cclass_util__Str_L_char_G__G__G___SetSize(int const &) */

void 
util__Darray_struct_util__tuple2_struct_CompressibleFlowPoint_class_util__Str_char_______SetSize
          (Darray_L_struct_util__tuple2_L_struct_CompressibleFlowPoint_Cclass_util__Str_L_char_G___G___G_ *this,
          int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  CompressibleFlowPoint CStack_4c;
  undefined8 uStack_1c;
  Str_L_char_G_ SStack_14;
  
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
     (puVar4 = (undefined4 *)(iVar2 + iVar3 * 0x48),
     puVar4 != (undefined4 *)(iVar2 + *(int *)(this + 8) * 0x48))) {
    do {
      CompressibleFlowPoint__CompressibleFlowPoint__o3(&CStack_4c);
      SStack_14.Data = (char *)0x0;
      *puVar4 = CStack_4c.SpecificHeat_J__kg_K;
      puVar4[1] = (*(uint32_t *)((char *)&(CStack_4c.SpecificHeat_J__kg_K) + 4));
      puVar4[2] = CStack_4c.SpecificGasConstant_J__kg_K;
      puVar4[3] = (*(uint32_t *)((char *)&(CStack_4c.SpecificGasConstant_J__kg_K) + 4));
      SStack_14.Capacity = 0;
      SStack_14.Length = 0;
      puVar4[4] = CStack_4c.Temperature_K;
      puVar4[5] = (*(uint32_t *)((char *)&(CStack_4c.Temperature_K) + 4));
      puVar4[6] = CStack_4c.Pressure_Pa;
      puVar4[7] = (*(uint32_t *)((char *)&(CStack_4c.Pressure_Pa) + 4));
      puVar4[8] = CStack_4c.MassFlowRate_kg__s;
      puVar4[9] = (*(uint32_t *)((char *)&(CStack_4c.MassFlowRate_kg__s) + 4));
      puVar4[10] = CStack_4c.Area_m2;
      puVar4[0xb] = (*(uint32_t *)((char *)&(CStack_4c.Area_m2) + 4));
      *(undefined8 *)(puVar4 + 0xc) = uStack_1c;
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar4 + 0xe),&SStack_14);
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      puVar4 = puVar4 + 0x12;
    } while (puVar4 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x48));
  }
  *(int *)(this + 8) = iVar3;
  return;
}





//==== 006175e0 SetSize_006175e0 ====


/* private: void  util__Darray_L_structutil__tuple5_L_structutil__Vec2_L_int_G__Ccharconst__P_CstructCompressibleFlowPoint_Cdouble_Cvoid___cdecl_P__void__G__G___SetSize(int const &) */

void 
util__Darray_struct_util__tuple5_struct_util__Vec2_int__char_const__struct_CompressibleFlowPoint_double_void____cdecl___void______SetSize(Darray_L_struct_util__tuple5_L_struct_util__Vec2_L_int_G__Cchar_const_P_Cstruct_CompressibleFlowPoint_Cdouble_Cvoid____cdecl_P__void__G___G_
          *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uStack_50;
  CompressibleFlowPoint CStack_4c;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined8 uStack_14;
  undefined4 uStack_c;
  uint uStack_8;
  
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
     (puVar4 = (undefined4 *)(iVar3 * 0x58 + iVar2),
     puVar4 != (undefined4 *)(*(int *)(this + 8) * 0x58 + iVar2))) {
    do {
      CompressibleFlowPoint__CompressibleFlowPoint__o3(&CStack_4c);
      uStack_c = 0;
      uStack_14 = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = uStack_50;
      puVar4[4] = CStack_4c.SpecificHeat_J__kg_K;
      puVar4[5] = (*(uint32_t *)((char *)&(CStack_4c.SpecificHeat_J__kg_K) + 4));
      puVar4[6] = CStack_4c.SpecificGasConstant_J__kg_K;
      puVar4[7] = (*(uint32_t *)((char *)&(CStack_4c.SpecificGasConstant_J__kg_K) + 4));
      puVar4[8] = CStack_4c.Temperature_K;
      puVar4[9] = (*(uint32_t *)((char *)&(CStack_4c.Temperature_K) + 4));
      puVar4[10] = CStack_4c.Pressure_Pa;
      puVar4[0xb] = (*(uint32_t *)((char *)&(CStack_4c.Pressure_Pa) + 4));
      puVar4[0xc] = CStack_4c.MassFlowRate_kg__s;
      puVar4[0xd] = (*(uint32_t *)((char *)&(CStack_4c.MassFlowRate_kg__s) + 4));
      puVar4[0xe] = CStack_4c.Area_m2;
      puVar4[0xf] = (*(uint32_t *)((char *)&(CStack_4c.Area_m2) + 4));
      puVar4[0x10] = uStack_1c;
      puVar4[0x11] = uStack_18;
      puVar4[0x12] = 0;
      puVar4[0x13] = 0;
      *(ulonglong *)(puVar4 + 0x14) = (ulonglong)uStack_8 << 0x20;
      puVar4 = puVar4 + 0x16;
    } while (puVar4 != (undefined4 *)(*(int *)(this + 8) * 0x58 + *(int *)(this + 4)));
  }
  *(int *)(this + 8) = iVar3;
  return;
}





//==== 006176e0 StaticFactory_006176e0 ====

/* public: static class util__Reflectable * __cdecl
   TurboelectricFissionReactorModule__ReflectionInfoStruct_class_TurboelectricFissionReactorModule___StaticFactory(void) */

Reflectable * __cdecl
TurboelectricFissionReactorModule__ReflectionInfoStruct_class_TurboelectricFissionReactorModule___StaticFactory__o2(void)

{
  Module *this;
  
  this = (Module *)(uintptr_t)(port_op_new(0x1f8));
  if (this != (Module *)0x0) {
    memset(this,0,0x1f8);
    Module__Module(this);
    this->_pad_0x0_0 = (int)&vftable_for_EditorReflectable__23;
    *(undefined4 *)&(this->GetTotalPowerUsage_W_MemoizedValue).field_0xc = (undefined4)(uintptr_t)&vftable_for_util__RTTIBaseClass__22;
    this[1].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    *(undefined4 *)&this[1].ModuleMemoizationHandlerInstance = 0;
    *(undefined4 *)&this[1].GetTotalPowerUsage_W_MemoizedValue.Data = 0;
    *(undefined4 *)((int)&this[1].GetTotalPowerUsage_W_MemoizedValue.Data + 4) = 0;
    NuclearReactorSubModule__NuclearReactorSubModule
              ((NuclearReactorSubModule *)&this[1].GetTotalPowerUsage_W_MemoizedValue.IsValidData);
    TurbopumpSubModule__TurbopumpSubModule((TurbopumpSubModule *)&this[4]._pad_0x8_2);
    this[5]._pad_0x0_0 = 0;
    this[5]._pad_0x4_1 = 0;
    this[5]._pad_0x8_2 = 0;
    this[5]._pad_0xc_3 = 0;
    this[5]._pad_0x4_1 = 0;
    this[5]._pad_0x8_2 = 0;
    this[5]._pad_0xc_3 = 0;
    this[5]._pad_0x0_0 = (int)&vftable_234;
    return (Reflectable *)this;
  }
  return (Reflectable *)0x0;
}

//==== 00617770 StaticGetMemberByIndex_00617770 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   TurboelectricFissionReactorModule__ReflectionInfoStruct_class_TurboelectricFissionReactorModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
TurboelectricFissionReactorModule__ReflectionInfoStruct_class_TurboelectricFissionReactorModule___StaticGetMemberByIndex(ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_fcbaca41__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_fcbaca41__thread_safe_static_guard_0__);
    if ( cde_l2_fcbaca41__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_757d911a_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00972814 = 0;
      _DAT_00972818 = 0;
      _DAT_0097281c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972820,"Unused");
      _DAT_0097282c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972830,"SteamWorkshopID");
      _DAT_0097283c = 6;
      _DAT_00972840 = 0x10;
      _DAT_00972844 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972848,"AStr");
      _DAT_00972854 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972858,"Description");
      _DAT_00972864 = 6;
      _DAT_00972868 = 0x20;
      _DAT_0097286c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972870,"AStr");
      _DAT_0097287c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972880,"UsesCustomName");
      _DAT_0097288c = 1;
      _DAT_00972890 = 0x68;
      _DAT_00972894 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972898,"bool");
      _DAT_009728a4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009728a8,"ReactorCoreDimensions_m");
      _DAT_009728b4 = 0xb;
      _DAT_009728b8 = 0x70;
      _DAT_009728bc = 0x10;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009728c0,"ModuleCylinder");
      _DAT_009728cc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009728d0,"NuclearReactor");
      _DAT_009728dc = 10;
      _DAT_009728e0 = 0x80;
      _DAT_009728e4 = 200;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009728e8,"NuclearReactorSubModule");
      _DAT_009728f4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009728f8,"Turbopump");
      _DAT_00972904 = 10;
      _DAT_00972908 = 0x148;
      _DAT_0097290c = 0x48;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972910,"TurbopumpSubModule");
      _DAT_0097291c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972920,"Turbine");
      _DAT_0097292c = 10;
      _DAT_00972930 = 400;
      _DAT_00972934 = 0x58;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972938,"TurbineSubModule");
      _DAT_00972944 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972948,"CoolantInletPressure_Pa");
      _DAT_00972954 = 4;
      _DAT_00972958 = 0x1e8;
      _DAT_0097295c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972960,"double");
      _DAT_0097296c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972970,"CoolantInletTemperature_K");
      _DAT_0097297c = 4;
      _DAT_00972980 = 0x1f0;
      _DAT_00972984 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972988,"double");
      _DAT_00972994 = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_TurboelectricFissionReactorModule__ReflectionInfoStruct_class_TurboelectricFissionReactorModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_fcbaca41__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_757d911a_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_00972814 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_00972818 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_0097281c + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_00972820 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0097282c)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0097282d)[iVar1];
  return __return_storage_ptr__;
}





//==== 00617ac0 StaticGetMemberCount_00617ac0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl TurboelectricFissionReactorModule__ReflectionInfoStruct_class_TurboelectricFissionReactorModule___StaticGetMemberCount(void) */

int __cdecl
TurboelectricFissionReactorModule__ReflectionInfoStruct_class_TurboelectricFissionReactorModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_2e9e20c9__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_2e9e20c9__thread_safe_static_guard_0__);
    if ( cde_l2_2e9e20c9__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_4390dac6_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0097267c = 0;
      _DAT_00972680 = 0;
      _DAT_00972684 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972688,"Unused");
      _DAT_00972694 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972698,"SteamWorkshopID");
      _DAT_009726a4 = 6;
      _DAT_009726a8 = 0x10;
      _DAT_009726ac = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009726b0,"AStr");
      _DAT_009726bc = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009726c0,"Description");
      _DAT_009726cc = 6;
      _DAT_009726d0 = 0x20;
      _DAT_009726d4 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009726d8,"AStr");
      _DAT_009726e4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009726e8,"UsesCustomName");
      _DAT_009726f4 = 1;
      _DAT_009726f8 = 0x68;
      _DAT_009726fc = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972700,"bool");
      _DAT_0097270c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972710,"ReactorCoreDimensions_m");
      _DAT_0097271c = 0xb;
      _DAT_00972720 = 0x70;
      _DAT_00972724 = 0x10;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972728,"ModuleCylinder");
      _DAT_00972734 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972738,"NuclearReactor");
      _DAT_00972744 = 10;
      _DAT_00972748 = 0x80;
      _DAT_0097274c = 200;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972750,"NuclearReactorSubModule");
      _DAT_0097275c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972760,"Turbopump");
      _DAT_0097276c = 10;
      _DAT_00972770 = 0x148;
      _DAT_00972774 = 0x48;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972778,"TurbopumpSubModule");
      _DAT_00972784 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972788,"Turbine");
      _DAT_00972794 = 10;
      _DAT_00972798 = 400;
      _DAT_0097279c = 0x58;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009727a0,"TurbineSubModule");
      _DAT_009727ac = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009727b0,"CoolantInletPressure_Pa");
      _DAT_009727bc = 4;
      _DAT_009727c0 = 0x1e8;
      _DAT_009727c4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009727c8,"double");
      _DAT_009727d4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009727d8,"CoolantInletTemperature_K");
      _DAT_009727e4 = 4;
      _DAT_009727e8 = 0x1f0;
      _DAT_009727ec = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009727f0,"double");
      _DAT_009727fc = 0;
      atexit( private__static_int_const___cdecl_TurboelectricFissionReactorModule__ReflectionInfoStruct_class_TurboelectricFissionReactorModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_2e9e20c9__thread_safe_static_guard_0__);
    }
  }
  return 10;
}





//==== 00617dd0 StaticGetReflectionInfo_00617dd0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct TurboelectricFissionReactorModule__ReflectionInfoStruct_L_class_TurboelectricFissionReactorModule_G_ * __cdecl
   TurboelectricFissionReactorModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_TurboelectricFissionReactorModule_G_ * __cdecl
TurboelectricFissionReactorModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_3c84f118__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_3c84f118__thread_safe_static_guard_0__);
    if ( cde_l2_3c84f118__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_b8551ecc_ReflectionInfo) = &vftable_267;
      _Init_thread_footer(& cde_l2_3c84f118__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoStruct_L_class_TurboelectricFissionReactorModule_G_ * *)&cde_l2_b8551ecc_ReflectionInfo;
}





//==== 00617e30 GetClassID_00617e30 ====


/* public: virtual unsigned long __thiscall AmmoModule__GetClassID(void)const  */

ulong __thiscall AmmoModule__GetClassID(AmmoModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_0b163742__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_0b163742__thread_safe_static_guard_0__);
    if ( cde_l2_0b163742__thread_safe_static_guard_0__ == -1) {
       cde_l2r_c7a80f0d_ID =
           util__GetHash("AmmoModule");
      _Init_thread_footer(& cde_l2_0b163742__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2r_c7a80f0d_ID;
}





//==== 00617e90 GetReflectionDependencies_00617e90 ====


/* public: virtual class util__Darray_L_classutil__Reflectable_P_G_ __thiscall
   AmmoModule__GetReflectionDependencies(void)const  */

Darray_L_class_util__Reflectable_P_G_ * __thiscall
AmmoModule__GetReflectionDependencies(AmmoModule *this)

{
  undefined8 stack0x00000004;
  Material *pMVar1;
  Darray_L_class_util__Reflectable_P_G_ *this_00;
  bool bVar2;
  Darray_L_class_util__Reflectable_P_G_ *in_stack_00000004;
  
  this_00 = in_stack_00000004;
  in_stack_00000004 = (Darray_L_class_util__Reflectable_P_G_ *)0x1;
  *(undefined4 *)this_00 = 0;
  *(undefined4 *)(this_00 + 4) = 0;
  *(undefined4 *)(this_00 + 8) = 0;
  *(undefined4 *)(this_00 + 0xc) = 0;
  *(undefined ***)this_00 = (undefined **)(&vftable_6);
  *(undefined4 *)(this_00 + 4) = 0;
  *(undefined4 *)(this_00 + 8) = 0;
  *(undefined4 *)(this_00 + 0xc) = 0;
  pMVar1 = (this->AmmoBay).CachedArmorComposition;
  util__Darray_class_util__Reflectable____SetSize(this_00,(int *)&stack0x00000004);
  bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                    ((Darray_L_enum_GraphicsResource__Type_G_ *)this_00,0);
  if (bVar2) {
    *(Material **)(*(int *)(this_00 + 4) + -4 + *(int *)(this_00 + 8) * 4) = pMVar1;
  }
  return this_00;
}





//==== 00617ef0 GetGeneratedName_00617ef0 ====

/* public: virtual class util__Str_L_char_G_ __thiscall AmmoModule__GetGeneratedName(void)const  */

Str_L_char_G_ * __thiscall
AmmoModule__GetGeneratedName(AmmoModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  int iVar1;
  LocStr *this_00;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ *this_01;
  Str_L_char_G_ *pSVar3;
  Str_L_char_G_ *__return_storage_ptr___00;
  Str_L_char_G_ *pSVar4;
  AmmoInfo local_bc;
  void *local_4c [3];
  void *local_40;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char(&local_34,"Space");
  iVar1 = (**(code **)(((this->AmmoBay).CachedArmorComposition)->_pad_0x0_0 + 0x17c))(&local_bc);
  if (*(char *)(iVar1 + 0x68) == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pSVar4 = (Str_L_char_G_ *)(iVar1 + 0x20);
  local_10.Data = (char *)0x0;
  local_10.Capacity = 0;
  local_10.Length = 0;
  __return_storage_ptr___00 = __return_storage_ptr__;
  this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)local_4c,&local_34,&local_10);
  pSVar2 = util__LocStr__operator__o3(this_00);
  pSVar3 = &local_1c;
  this_01 = util__Printf(&local_28,(wchar_t*)("%ix"),(this->AmmoBay).CachedInfo.Composition._pad_0x0_0);
  pSVar3 = util__Str_char___operator(this_01,pSVar3,pSVar2);
  util__Str_char___operator(pSVar3,__return_storage_ptr___00,pSVar4);
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
    local_1c.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_40 != (void *)0x0) {
    port_op_delete(local_40);
    local_40 = (void *)0x0;
  }
  if (local_4c[0] != (void *)0x0) {
    port_op_delete(local_4c[0]);
    local_4c[0] = (void *)0x0;
  }
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
    local_10.Data = (char *)0x0;
  }
  AmmoInfo___AmmoInfo(&local_bc);
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
  }
  return __return_storage_ptr__;
}

//==== 00618040 DefaultMargin ====


/* public: static int __cdecl LayoutAttributes__DefaultMargin(void) */

int __cdecl LayoutAttributes__DefaultMargin(void)

{
  return 2;
}





//==== 00618050 GetIcon_00618050 ====


/* public: virtual void (__cdecl*__thiscall AmmoModule__GetIcon(void)const )(void) */

_func_void * __thiscall AmmoModule__GetIcon(AmmoModule *this)

{
  int TVar1;
  code *pcVar2;
  
  TVar1 = GetAmmoClass(this);
  if (TVar1 == 5) {
    return Icons__StationAmmo;
  }
  TVar1 = GetAmmoClass(this);
  if (TVar1 != 0) {
    TVar1 = GetAmmoClass(this);
    if (TVar1 != 1) {
      TVar1 = GetAmmoClass(this);
      if (TVar1 == 2) {
        return Icons__DroneAmmo;
      }
      TVar1 = GetAmmoClass(this);
      if (TVar1 == 3) {
        return Icons__MissileAmmo;
      }
      TVar1 = GetAmmoClass(this);
      pcVar2 = (long long int (*)())(Icons__OutOfAmmo);
      if (TVar1 == 4) {
        pcVar2 = (long long int (*)())(Icons__PayloadAmmo);
      }
      return (_func_void *)(pcVar2);
    }
  }
  return Icons__CapitalShipAmmo;
}





//==== 006181c0 GetHullRadius_m_006181c0 ====


/* public: virtual double __thiscall AmmoModule__GetHullRadius_m(void)const  */

double __thiscall AmmoModule__GetHullRadius_m(AmmoModule *this)

{
  Cylinder_L_double_G_ *pCVar1;
  Cylinder_L_double_G_ CStack_14;
  
  pCVar1 = AmmoBaySubModule__GetArmoredDimensions_m
                     ((AmmoBaySubModule *)&(this->AmmoBay).CachedInfo,&CStack_14);
  return pCVar1->Radius;
}





//==== 006181e0 GetHullLength_m_006181e0 ====


/* public: virtual double __thiscall AmmoModule__GetHullLength_m(void)const  */

double __thiscall AmmoModule__GetHullLength_m(AmmoModule *this)

{
  Cylinder_L_double_G_ *pCVar1;
  Cylinder_L_double_G_ CStack_14;
  
  pCVar1 = AmmoBaySubModule__GetArmoredDimensions_m
                     ((AmmoBaySubModule *)&(this->AmmoBay).CachedInfo,&CStack_14);
  return pCVar1->Height;
}





//==== 00618200 GetStructuralMaterial_00618200 ====

/* public: virtual class Material const * __thiscall AmmoModule__GetStructuralMaterial(void)const
    */

Material * __thiscall AmmoModule__GetStructuralMaterial(AmmoModule *this)

{
  return (Material *)this[1]._pad_0x10_4;
}

//==== 00618220 GetModuleAmmoExplosion_00618220 ====


/* public: virtual struct AmmoExplosion __thiscall AmmoModule__GetModuleAmmoExplosion(void)const  */

AmmoExplosion * __thiscall
AmmoModule__GetModuleAmmoExplosion(AmmoModule *this,AmmoExplosion *__return_storage_ptr__)

{
  AmmoBaySubModule__GetModuleAmmoExplosion
            ((AmmoBaySubModule *)&(this->AmmoBay).CachedInfo,__return_storage_ptr__);
  return __return_storage_ptr__;
}





//==== 00618240 GetRadiationShielding_00618240 ====

/* public: virtual struct util__tuple2_L_classMaterial_P_Cstructutil__Cylinder_L_double_G__G_ __thiscall
   AmmoModule__GetRadiationShielding(void)const  */

void __thiscall AmmoModule__GetRadiationShielding(AmmoModule *this)

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

//==== 00618290 GetStatuses_00618290 ====

/* public: virtual class DesignStatusBuffer  AmmoModule__GetStatuses(class DataParser
   *)const  */

DesignStatusBuffer * 
AmmoModule__GetStatuses
          (AmmoModule *this,DesignStatusBuffer *__return_storage_ptr__,DataParser *param_1)

{
  bool bVar1;
  DesignStatusBuffer *this_00;
  undefined1 local_4c [4];
  Darray_L_DesignStatusMessage_G_ local_48;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  Str_L_char_G_ local_10;
  
  __return_storage_ptr__->DataManager = (DataParser *)0x0;
  (__return_storage_ptr__->Messages)._pad_0x0_0 = 0;
  (__return_storage_ptr__->Messages).Data = (DesignStatusMessage *)0x0;
  (__return_storage_ptr__->Messages).Size = 0;
  (undefined8)((__return_storage_ptr__->Messages).Capacity = 0);
  Module__GetStatuses((Module *)this,__return_storage_ptr__,param_1);
  util__Str_char___Str_char(&local_34,"AmmoModuleSuppliedModuleErrors");
  local_28.Data = (char *)0x0;
  local_28.Capacity = 0;
  local_28.Length = 0;
  local_1c.Data = (char *)0x0;
  local_1c.Capacity = 0;
  local_1c.Length = 0;
  local_10.Data = (char *)0x0;
  local_10.Capacity = 0;
  local_10.Length = 0;
  this_00 = (DesignStatusBuffer *)
            (**(code **)(((this->AmmoBay).CachedArmorComposition)->_pad_0x0_0 + 0xdc))(local_4c,0);
  bVar1 = DesignStatusBuffer__IsOperational(this_00);
  Darray_L_DesignStatusMessage_G___dtor(&local_48);
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,!bVar1,&local_34,&local_10,&local_1c,&local_28,
             (ModulePlacer *)0x0);
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

//==== 006183b0 GetOneLineStatus_006183b0 ====

/* public: virtual class util__Maybe_L_classutil__Str_L_char_G__G_ 
   AmmoModule__GetOneLineStatus(class util__Darray_L_classutil__WeakPtr_L_structModuleCompartment_G__G_
   const &)const  */

void 
AmmoModule__GetOneLineStatus
          (AmmoModule *this,Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *param_1)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  int iVar2;
  int *piVar3;
  Str_L_char_G_ *pSVar4;
  int iVar5;
  int *in_stack_00000008;
  Str_L_char_G_ local_30;
  AmmoModule *local_24;
  int *local_20;
  undefined4 *local_1c [4];
  uint local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(uint32_t *)&local_20 = (uint32_t)(uintptr_t)(in_stack_00000008);
  local_24 = this;
  iVar2 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
  if (iVar2 != 0) {
    local_c = local_c & 0xffffff00;
    FUN_00526b80(local_1c);
    iVar5 = 0;
    local_c = 0;
    iVar2 = (*(code *)local_1c[0][3])();
    if ((int)local_c < iVar2) {
      do {
        piVar3 = (int *)(*(code *)*local_1c[0])(&local_c);
        if (((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]),
           !bVar1)) {
          *piVar3 = 0;
        }
        iVar5 = iVar5 + *(int *)(*piVar3 + 0x118);
        local_c = local_c + 1;
        iVar2 = (*(code *)local_1c[0][3])();
        in_stack_00000008 = local_20;
      } while ((int)local_c < iVar2);
    }
    iVar2 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
    pSVar4 = util__Printf(&local_30,(wchar_t*)("%i / %i"),iVar5,
                          iVar2 * (local_24->AmmoBay).CachedInfo.Composition._pad_0x0_0);
    util__Str_char___Str_char((Str_L_char_G_ *)param_1,pSVar4);
    *(char *)&(param_1[0xc]) = 0x1;
    if (local_30.Data != (char *)0x0) {
      port_op_delete(local_30.Data);
      local_30.Data = (char *)0x0;
    }
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_1c);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(char *)&(param_1[0xc]) = 0x0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

//==== 006184d0 GetOneLineStatusBarPercentages_006184d0 ====

/* public: virtual class util__Maybe_L_structutil__Range_L_double_G__G_ 
   AmmoModule__GetOneLineStatusBarPercentages(class util__Darray_L_classutil__WeakPtr_L_struct_ModuleCompartment_G__G_ const &)const  */

void 
AmmoModule__GetOneLineStatusBarPercentages
          (AmmoModule *this,Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *param_1)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *in_stack_00000008;
  double local_28;
  undefined4 *local_1c [4];
  uint local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar2 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
  if (iVar2 != 0) {
    local_c = local_c & 0xffffff00;
    FUN_00526b80(local_1c);
    local_c = 0;
    local_28 = 0.0;
    iVar2 = (*(code *)local_1c[0][3])();
    if ((int)local_c < iVar2) {
      do {
        piVar3 = (int *)(*(code *)*local_1c[0])(&local_c);
        if (((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]),
           !bVar1)) {
          *piVar3 = 0;
        }
        local_c = local_c + 1;
        local_28 = (double)*(int *)(*piVar3 + 0x118) + local_28;
        iVar2 = (*(code *)local_1c[0][3])();
      } while ((int)local_c < iVar2);
    }
    iVar4 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
    iVar2 = (this->AmmoBay).CachedInfo.Composition._pad_0x0_0;
    *(char *)&(param_1[0x10]) = 0x1;
    local_28 = local_28 / (double)(iVar4 * iVar2);
    if (local_28 <= 0.0) {
      local_28 = 0.0;
    }
    if (1.0 <= local_28) {
      local_28 = 1.0;
    }
    *(double *)param_1 = local_28;
    *(double *)(param_1 + 8) = local_28;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_1c);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(char *)&(param_1[0x10]) = 0x0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

//==== 006185f0 GetInfoBoxes_006185f0 ====


/* public: virtual class util__Darray_L_structInfoBox_G_ __thiscall AmmoModule__GetInfoBoxes(void)const
    */

Darray_L_struct_InfoBox_G_ * __thiscall AmmoModule__GetInfoBoxes(AmmoModule *this, Darray_L_struct_InfoBox_G_ *__return_buf__)

{
  Darray_L_struct_InfoBox_G_ *in_stack_00000004 = __return_buf__;
  undefined8 stack0xfffffffc;
  int iVar1;
  uint uVar2;
  bool bVar3;
  LocStr *pLVar4;
  Str_L_char_G_ *pSVar5;
  void *apvStack_d8 [3];
  void *pvStack_cc;
  void *apvStack_c0 [3];
  void *pvStack_b4;
  Str_L_char_G_ SStack_a8;
  code *pcStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  Str_L_char_G_ SStack_90;
  undefined4 uStack_84;
  undefined4 uStack_80;
  Str_L_char_G_ SStack_7c;
  undefined8 uStack_70;
  uint uStack_68;
  Str_L_char_G_ SStack_64;
  undefined4 uStack_58;
  undefined4 uStack_54;
  Str_L_char_G_ SStack_50;
  undefined4 uStack_44;
  undefined4 uStack_40;
  Str_L_char_G_ SStack_3c;
  Str_L_char_G_ SStack_30;
  Str_L_char_G_ SStack_24;
  AmmoModule *pAStack_18;
  code *pcStack_14;
  uint uStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_InfoBox___Darray_struct_InfoBox(in_stack_00000004,1);
  util__Str_char___Str_char(&SStack_a8,"InfoBox ExplosionHazard Tooltip");
  util__Str_char___Str_char(&SStack_64,"InfoBox ExplosionHazard");
  pcStack_14 = (long long int (*)())(util__DelegateFactory_L_class_AmmoModule_Cbool_G___MethodCallerConst_L__public__bool___thiscall_AmmoModule__IsExplosive_void_const__C0__G_);
  uStack_10 = uStack_10 & 0xffffff00;
  SStack_30.Data = (char *)0x0;
  SStack_30.Capacity = 0;
  SStack_30.Length = 0;
  pAStack_18 = this;
  pLVar4 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_d8,&SStack_a8,&SStack_30);
  pSVar5 = util__LocStr__operator__o3(pLVar4);
  uStack_58 = 0;
  uStack_54 = 0;
  util__Str_char___Str_char(&SStack_50,pSVar5);
  SStack_24.Data = (char *)0x0;
  SStack_24.Capacity = 0;
  SStack_24.Length = 0;
  pLVar4 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_c0,&SStack_64,&SStack_24);
  pSVar5 = util__LocStr__operator__o3(pLVar4);
  uStack_44 = 0;
  uStack_40 = 0;
  util__Str_char___Str_char(&SStack_3c,pSVar5);
  uStack_98 = uStack_44;
  uStack_94 = uStack_40;
  pcStack_9c = (code *)(uintptr_t) Icons__Explosion;
  util__Str_char___Str_char(&SStack_90,&SStack_3c);
  uStack_84 = uStack_58;
  uStack_80 = uStack_54;
  util__Str_char___Str_char(&SStack_7c,&SStack_50);
  uVar2 = uStack_10;
  uStack_70 = CONCAT44(pcStack_14,pAStack_18);
  uStack_68 = uStack_10;
  if (SStack_3c.Data != (char *)0x0) {
    port_op_delete(SStack_3c.Data);
  }
  if (SStack_50.Data != (char *)0x0) {
    port_op_delete(SStack_50.Data);
  }
  iVar1 = *(int *)(in_stack_00000004 + 8);
  iStack_c = iVar1 + 1;
  util__Darray_struct_InfoBox___SetSize(in_stack_00000004,&iStack_c);
  bVar3 = util__Darray_struct_InfoBox___CheckSize(in_stack_00000004,iVar1);
  if (bVar3) {
    iVar1 = *(int *)(in_stack_00000004 + 4) + *(int *)(in_stack_00000004 + 8) * 0x38;
    *(code **)(iVar1 + -0x38) = pcStack_9c;
    *(undefined4 *)(iVar1 + -0x34) = uStack_98;
    *(undefined4 *)(iVar1 + -0x30) = uStack_94;
    util__Str_char___operator__o8((Str_L_char_G_ *)(iVar1 + -0x2c),&SStack_90);
    *(undefined4 *)(iVar1 + -0x20) = uStack_84;
    *(undefined4 *)(iVar1 + -0x1c) = uStack_80;
    util__Str_char___operator__o8((Str_L_char_G_ *)(iVar1 + -0x18),&SStack_7c);
    *(ulonglong *)(iVar1 + -0xc) = CONCAT44(pcStack_14,pAStack_18);
    *(uint *)(iVar1 + -4) = uVar2;
  }
  if (SStack_7c.Data != (char *)0x0) {
    port_op_delete(SStack_7c.Data);
  }
  if (SStack_90.Data != (char *)0x0) {
    port_op_delete(SStack_90.Data);
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
  if (pvStack_cc != (void *)0x0) {
    port_op_delete(pvStack_cc);
    pvStack_cc = (void *)0x0;
  }
  if (apvStack_d8[0] != (void *)0x0) {
    port_op_delete(apvStack_d8[0]);
    apvStack_d8[0] = (void *)0x0;
  }
  if (SStack_30.Data != (char *)0x0) {
    port_op_delete(SStack_30.Data);
    SStack_30.Data = (char *)0x0;
  }
  if (SStack_64.Data != (char *)0x0) {
    port_op_delete(SStack_64.Data);
    SStack_64.Data = (char *)0x0;
  }
  if (SStack_a8.Data != (char *)0x0) {
    port_op_delete(SStack_a8.Data);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return in_stack_00000004;
}





//==== 00618a00 SetCachedData_00618a00 ====

/* public: virtual void __thiscall AmmoModule__SetCachedData(class DataParser *) */

void __thiscall AmmoModule__SetCachedData(AmmoModule *this,DataParser *param_1)

{
  undefined8 stack0xffffff04;
  AmmoInfo AVar1;
  Maybe_L_double_G_ MVar2;
  AmmoInfo *pAVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined8 uVar7;
  undefined1 in_stack_ffffff08 [80];
  undefined1 auVar8 [16];
  undefined4 in_stack_ffffff58;
  char *in_stack_ffffff5c;
  undefined4 in_stack_ffffff60;
  char *in_stack_ffffff64;
  undefined4 uVar9;
  AmmoInfo *pAVar10;
  undefined8 uVar11;
  undefined4 in_stack_ffffff78;
  undefined4 uVar12;
  undefined4 uVar13;
  AmmoInfo local_74;
  
  uVar13 = 0x618a1b;
  (**(code **)(((this->AmmoBay).CachedArmorComposition)->_pad_0x0_0 + 0x144))();
  (*(uint32_t*)&(uVar11)) = this[1]._pad_0x18_6;
  (*(uint32_t*)((char*)&(uVar11)+4)) = this[1]._pad_0x1c_7;
  pAVar10 = &local_74;
  uVar12 = CONCAT31((int3)((uint)in_stack_ffffff78 >> 8),1);
  uVar9 = 0x618a42;
  pAVar3 = (AmmoInfo *)(**(code **)(((this->AmmoBay).CachedArmorComposition)->_pad_0x0_0 + 0x17c))()
  ;
  if (*(char *)&pAVar3[1].Dimensions_m.Radius == '\0') {
    in_stack_ffffff64 = "IsValid()";
    in_stack_ffffff60 = 0x13;
    in_stack_ffffff5c = "\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h";
    in_stack_ffffff58 = 0x618a5d;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    uVar9 = 0x618a66;
    DebugBreak();
  }
  AmmoInfo__AmmoInfo((AmmoInfo *)&stack0xffffff04,pAVar3);
  AVar1.ExplosionPotential.Mass_kg = in_stack_ffffff58;
  *(uint32_t *)&auVar4 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_ffffff08) + 16)));
  *(uint32_t *)&auVar5 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_ffffff08) + 32)));
  *(uint32_t *)&auVar6 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_ffffff08) + 44)));
  uVar7 = (*(uint64_t *)((char *)&(in_stack_ffffff08) + 56));
  *(uint32_t *)&auVar8 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_ffffff08) + 64)));
  AVar1.Dimensions_m.Radius = (double)SUB168((*(uint32_t *)((char *)&(in_stack_ffffff08) + 0)),0);
  AVar1.Dimensions_m.Height = (double)SUB168((*(uint32_t *)((char *)&(in_stack_ffffff08) + 0)),8);
  AVar1.Composition._pad_0x0_0 = (*(uint32_t*)&(auVar4));
  AVar1.Composition.Data = (MaterialComposition *)(*(uint32_t*)((char*)&(auVar4)+4));
  AVar1.Composition.Size = (*(uint32_t*)((char*)&(auVar4)+8));
  AVar1.Composition.Capacity = (*(uint32_t *)((char *)&(auVar4) + 12));
  AVar1.Name.Data = (char *)(*(uint32_t*)&(auVar5));
  AVar1.Name.Capacity = (*(uint32_t*)((char*)&(auVar5)+4));
  AVar1.Name.Length = (*(uint32_t*)((char*)&(auVar5)+8));
  AVar1.Descriptor.Data = (char *)(*(uint32_t*)&(auVar6));
  AVar1.Descriptor.Capacity = (*(uint32_t*)((char*)&(auVar6)+4));
  AVar1.Descriptor.Length = (*(uint32_t*)((char*)&(auVar6)+8));
  AVar1.Class.Data = (int)uVar7;
  AVar1.Class.IsValidData = (bool)(char)((ulonglong)uVar7 >> 0x20);
  (*(uint24_t *)((char *)&(AVar1.Class) + 5)) = (int3)((ulonglong)uVar7 >> 0x28);
  AVar1.ExplosionPotential.GasComposition._pad_0x0_0 = (*(uint32_t*)&(auVar8));
  AVar1.ExplosionPotential.GasComposition.Data = (MaterialConstituent *)(*(uint32_t*)((char*)&(auVar8)+4));
  AVar1.ExplosionPotential.GasComposition.Size = (*(uint32_t*)((char*)&(auVar8)+8));
  AVar1.ExplosionPotential.GasComposition.Capacity = (*(uint32_t *)((char *)&(auVar8) + 12));
  (*(uint32_t *)((char *)&(AVar1.ExplosionPotential.Mass_kg) + 4)) = (uint32_t)(uintptr_t)(in_stack_ffffff5c);
  AVar1.ExplosionPotential.Temperature_K = in_stack_ffffff60;
  (*(uint32_t *)((char *)&(AVar1.ExplosionPotential.Temperature_K) + 4)) = (uint32_t)(uintptr_t)(in_stack_ffffff64);
  AVar1.CostOfOneUnit_c = uVar9;
  (*(uint32_t *)((char *)&(AVar1.CostOfOneUnit_c) + 4)) = (uint32_t)(uintptr_t)(pAVar10);
  (*(uint32_t*)((char*)&(MVar2)+8)) = uVar12;
  MVar2.Data = (double)uVar11;
  (*(uint32_t *)((char *)&(MVar2) + 12)) = uVar13;
  AmmoBaySubModule__PassThroughCachedData
            ((AmmoBaySubModule *)&(this->AmmoBay).CachedInfo,(Material *)this[1]._pad_0x10_4,AVar1,
             MVar2);
  AmmoInfo___AmmoInfo(&local_74);
  return;
}

//==== 00618aa0 GetPointerPropertyChoices_00618aa0 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   AmmoModule__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

void 
AmmoModule__GetPointerPropertyChoices
          (AmmoModule *this,ClassMember *param_1,SerializationManagerInterface *param_2)

{
  undefined8 stack0xfffffffc;
  int *piVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  SerializationManagerInterface SVar8;
  int *in_stack_0000000c;
  Str_L_char_G_ SStack_58;
  undefined **ppuStack_4c;
  void *pvStack_48;
  undefined **ppuStack_3c;
  void *pvStack_38;
  ClassMember *pCStack_2c;
  int iStack_28;
  undefined **ppuStack_24;
  void *pvStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  char cStack_14;
  int *piStack_10;
  char acStack_c [4];
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pCStack_2c = param_1;
  piStack_10 = in_stack_0000000c;
  if ((*(int *)&(param_2[1])) < 1) {
    SVar8 = (*(SerializationManagerInterface *)
            &cde_l2_0b2b1c9f_NullString);
  }
  else {
    SVar8 = *param_2;
  }
  pcVar4 = "SuppliedModule";
  while( true ) {
    cVar2 = pcVar4[(int)((*(int *)&(SVar8)) + -0x92caa4)];
    if ((cVar2 == '\0') && (*pcVar4 == '\0')) {
      acStack_c[0] = cVar2;
      util__Str_char___Str_char(&SStack_58,"Module");
      cStack_14 = acStack_c[0];
      piVar5 = (int *)(**(code **)(uintptr_t)(*piStack_10 + 4))(&ppuStack_4c,&SStack_58,0);
      ppuStack_24 = (undefined **)0x0;
      pvStack_20 = (void *)0x0;
      iStack_1c = 0;
      uStack_18 = 0;
      iVar6 = (**(code **)(uintptr_t)(*piVar5 + 0xc))();
      util__Darray_class_util__Reflectable____Darray_class_util__Reflectable
                ((Darray_L_class_util__Reflectable_P_G_ *)&ppuStack_24,iVar6);
      piStack_10 = (int *)0x0;
      iVar6 = (**(code **)(uintptr_t)(*piVar5 + 0xc))();
      if ((int)piStack_10 < iVar6) {
        do {
          puVar7 = (undefined4 *)(**(code **)*piVar5)(&piStack_10);
          piVar1 = (int *)*puVar7;
          iVar6 = (**(code **)(uintptr_t)(*piVar1 + 0x130))();
          if (((iVar6 == 0) && (cVar2 = (**(code **)(uintptr_t)(*piVar1 + 0x180))(), cVar2 != '\0')) &&
             (cVar2 = (**(code **)(uintptr_t)(*piVar1 + 0x1d4))(), iVar6 = iStack_1c, cVar2 != '\0')) {
            iStack_28 = iStack_1c + 1;
            util__Darray_class_util__Reflectable____SetSize
                      ((Darray_L_class_util__Reflectable_P_G_ *)&ppuStack_24,&iStack_28);
            bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize
                              ((Darray_L_enum_GraphicsResource__Type_G_ *)&ppuStack_24,iVar6);
            if (bVar3) {
              *(undefined4 *)((int)pvStack_20 + iStack_1c * 4 + -4) = *puVar7;
            }
          }
          piStack_10 = (int *)((int)piStack_10 + 1);
          iVar6 = (**(code **)(uintptr_t)(*piVar5 + 0xc))();
          param_1 = pCStack_2c;
        } while ((int)piStack_10 < iVar6);
      }
      acStack_c[0] = '\0';
      FUN_004f1250(&ppuStack_3c,&ppuStack_24,acStack_c);
      AsListing_class_util__Reflectable((Darray_L_class_util__Reflectable_P_G_ *)param_1);
      ppuStack_3c = (undefined **)(&vftable_6);
      if (pvStack_38 != (void *)0x0) {
        port_op_delete(pvStack_38);
      }
      pvStack_38 = (void *)0x0;
      ppuStack_3c = (undefined **)(&vftable);
      ppuStack_24 = (undefined **)(&vftable_6);
      if (pvStack_20 != (void *)0x0) {
        port_op_delete(pvStack_20);
      }
      pvStack_20 = (void *)0x0;
      ppuStack_24 = (undefined **)(&vftable);
      ppuStack_4c = (undefined **)(&vftable_6);
      if (pvStack_48 != (void *)0x0) {
        port_op_delete(pvStack_48);
      }
      pvStack_48 = (void *)0x0;
      ppuStack_4c = (undefined **)(&vftable);
      if (SStack_58.Data != (char *)0x0) {
        port_op_delete(SStack_58.Data);
      }
      goto LAB_00618cd4;
    }
    if (cVar2 != *pcVar4) break;
    pcVar4 = pcVar4 + 1;
  }
  if ((*(int *)&(param_2[1])) < 1) {
    SVar8 = (*(SerializationManagerInterface *)
            &cde_l2_0b2b1c9f_NullString);
  }
  else {
    SVar8 = *param_2;
  }
  for (pcVar4 = "ArmorComposition";
      (pcVar4[(int)((*(int *)&(SVar8)) + -0x926270)] != '\0' || (*pcVar4 != '\0')); pcVar4 = pcVar4 + 1) {
    if (pcVar4[(int)((*(int *)&(SVar8)) + -0x926270)] != *pcVar4) {
      (param_1->Name).Data =
           (char *)&vftable_85;
      (param_1->Name).Capacity = 0;
      (param_1->Name).Length = 0;
      *(undefined4 *)&param_1->Type = 0;
LAB_00618cd4:
      __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  GetMaterials((DataParser *)param_1,(int)in_stack_0000000c,true);
  goto LAB_00618cd4;
}





//==== 00618cf0 GetReflectionInfo_00618cf0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   AmmoModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall AmmoModule__GetReflectionInfo(AmmoModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_582b8c3c__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_582b8c3c__thread_safe_static_guard_0__);
    if ( cde_l2_582b8c3c__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_a9db3557_ReflectionInfo) = &vftable_271;
      _Init_thread_footer(& cde_l2_582b8c3c__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_a9db3557_ReflectionInfo;
}





//==== 00618d00 scalar_deleting_destructor_00618d00 ====

/* public: virtual void * __thiscall AmmoModule:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall AmmoModule___scalar_deleting_destructor(AmmoModule *this,uint param_1)

{
  void *pvVar1;
  
  AmmoInfo___AmmoInfo((AmmoInfo *)&(this->AmmoBay).CachedInfo.Name);
  *(uint32_t *)&(this->AmmoBay).CachedInfo.Dimensions_m.Radius = (uint32_t)(uintptr_t)(&vftable_5);
  pvVar1 = *(void **)((int)&(this->AmmoBay).CachedInfo.Dimensions_m.Radius + 4);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    *(undefined4 *)((int)&(this->AmmoBay).CachedInfo.Dimensions_m.Radius + 4) = 0;
  }
  pvVar1 = (void *)(this->AmmoBay)._pad_0xc_3;
  (this->AmmoBay)._pad_0x8_2 =
       (int)&vftable_166;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
  }
  (this->AmmoBay)._pad_0xc_3 = 0;
  (this->AmmoBay)._pad_0x8_2 = (int)&vftable;
  Module___Module((Module *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x130);
  }
  return this;
}

//==== 00618d80 GetTypeName_00618d80 ====


/* public: virtual class util__Str_L_char_G_  AmmoModule__ReflectionInfoStruct_class_AmmoModule___GetTypeName(void)const  */

Str_L_char_G_ * 
AmmoModule__ReflectionInfoStruct_class_AmmoModule___GetTypeName
          (ReflectionInfoStruct_L_class_AmmoModule_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"AmmoModule");
  return __return_storage_ptr__;
}





//==== 00618da0 GetMembers_00618da0 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   AmmoModule__ReflectionInfoStruct_class_AmmoModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
AmmoModule__ReflectionInfoStruct_class_AmmoModule___GetMembers__o2
          (ReflectionInfoStruct_L_class_AmmoModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_3b0fc3b6__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_3b0fc3b6__thread_safe_static_guard_0__),
      cde_l2_3b0fc3b6__thread_safe_static_guard_0__ == -1)) {
     cde_l2_aceeb059_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_3b0fc3b6__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_aceeb059_Count);
  iVar3 = 0;
  if (0 <  cde_l2_aceeb059_Count) {
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
    } while (iVar3 <  cde_l2_aceeb059_Count);
  }
  return in_stack_00000004;
}





//==== 00618ee0 GetMember_00618ee0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   AmmoModule__ReflectionInfoStruct_class_AmmoModule___GetMember(class util__Str_L_char_G_ const &)const
    */

Str_L_char_G_ * 
AmmoModule__ReflectionInfoStruct_class_AmmoModule___GetMember__o2
          (ReflectionInfoStruct_L_class_AmmoModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_5621e6cb__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_5621e6cb__thread_safe_static_guard_0__),
      cde_l2_5621e6cb__thread_safe_static_guard_0__ == -1)) {
     cde_l2_e7185290_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_5621e6cb__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_e7185290_Count) {
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
LAB_00618f6d:
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
          if (cVar3 == '\0') goto LAB_00618f6d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_e7185290_Count);
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





//==== 00619080 GetFactory_00619080 ====


/* public: virtual class util__Reflectable * (__cdecl*
   AmmoModule__ReflectionInfoStruct_class_AmmoModule___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall AmmoModule__ReflectionInfoStruct_class_AmmoModule___GetFactory__o2
          (ReflectionInfoStruct_L_class_AmmoModule_G_ *this)

{
  return StaticFactory;
}





//==== 00619090 MethodCallerConst__public__bool___thiscall_AmmoModule__IsExplosive_void_const__0__ ====

/* public: static bool __cdecl util__DelegateFactory_L_class_AmmoModule_Cbool_G___MethodCallerConst_L__public_bool__thiscallAmmoModule__IsExplosive_void_const__C0__G_(void const * const) */

bool __cdecl
util__DelegateFactory_class_AmmoModule_bool___MethodCallerConst__public__bool___thiscall_AmmoModule__IsExplosive_void_const__0(void *param_1)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  AmmoExplosion AStack_48;
  AmmoExplosion AStack_28;
  undefined4 uStack_8;
  
  uStack_8 = 0;
  AmmoExplosion__AmmoExplosion(&AStack_28,(AmmoExplosion *)((int)param_1 + 0xe8));
  iVar2 = (**(code **)(uintptr_t)(AStack_28.GasComposition._pad_0x0_0 + 0xc))();
  if (iVar2 < 1) {
    bVar1 = false;
  }
  else {
    AmmoExplosion__AmmoExplosion(&AStack_48,(AmmoExplosion *)((int)param_1 + 0xe8));
    bVar1 = true;
    if (0.0 < AStack_48.Temperature_K) {
      bVar3 = true;
      goto LAB_0066cd90;
    }
  }
  bVar3 = false;
LAB_0066cd90:
  if ((AStack_48.GasComposition.Data != (MaterialConstituent *)0x0) && (bVar1)) {
    port_op_delete(AStack_48.GasComposition.Data);
  }
  AStack_28.GasComposition._pad_0x0_0 = (int)&vftable_15;
  if (AStack_28.GasComposition.Data != (MaterialConstituent *)0x0) {
    port_op_delete(AStack_28.GasComposition.Data);
  }
  return bVar3;
}

//==== 006190a0 AmmoInfo_006190a0 ====

/* public:  AmmoInfo__AmmoInfo(struct AmmoInfo const &) */

void  AmmoInfo__AmmoInfo(AmmoInfo *this,AmmoInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Material **ppMVar4;
  AmmoInfo *pAVar5;
  MaterialComposition *pMVar6;
  MaterialConstituent *pMVar7;
  MaterialComposition *pMVar8;
  MaterialConstituent *pMVar9;
  uint uVar10;
  int local_c;
  AmmoInfo *local_8;
  
  (this->Dimensions_m).Radius = (param_1->Dimensions_m).Radius;
  (this->Dimensions_m).Height = (param_1->Dimensions_m).Height;
  (this->Composition).Capacity = 0;
  (this->Composition)._pad_0x0_0 = (int)&vftable_75;
  (this->Composition).Data = (MaterialComposition *)0x0;
  (this->Composition).Size = 0;
  (this->Composition).Capacity = (param_1->Composition).Capacity;
  local_8 = this;
  local_c = (**(code **)((param_1->Composition)._pad_0x0_0 + 0xc))();
  util__Darray_L_MaterialConstituent_G___SetSize
            ((Darray_L_MaterialConstituent_G_ *)&this->Composition,&local_c);
  uVar10 = (this->Composition).Capacity;
  pMVar6 = (MaterialComposition *)(uintptr_t)(port_op_new(-(uint)((int)((ulonglong)uVar10 * 0x10 >> 0x20) != 0) |
                          (uint)((ulonglong)uVar10 * 0x10)));
  pAVar5 = local_8;
  pMVar8 = pMVar6;
  if (pMVar6 == (MaterialComposition *)0x0) {
    pMVar6 = (MaterialComposition *)0x0;
  }
  else {
    for (; uVar10 != 0; uVar10 = uVar10 - 1) {
      pMVar8->Type = (Material *)0x0;
      pMVar8->Mass_kg = 0.0;
      pMVar8 = pMVar8 + 1;
    }
  }
  (this->Composition).Data = pMVar6;
  pMVar8 = (param_1->Composition).Data;
  if (pMVar8 != pMVar8 + (param_1->Composition).Size) {
    do {
      ppMVar4 = &pMVar8->Type;
      uVar1 = (undefined4)((*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar8) + 0x4)));
      uVar2 = *(undefined4 *)&pMVar8->Mass_kg;
      uVar3 = *(undefined4 *)((int)&pMVar8->Mass_kg + 4);
      pMVar8 = pMVar8 + 1;
      pMVar6->Type = *ppMVar4;
      (undefined4)((*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar6) + 0x4)) = uVar1);
      *(undefined4 *)&pMVar6->Mass_kg = uVar2;
      *(undefined4 *)((int)&pMVar6->Mass_kg + 4) = uVar3;
      pMVar6 = pMVar6 + 1;
    } while (pMVar8 != (param_1->Composition).Data + (param_1->Composition).Size);
  }
  util__Str_char___Str_char(&local_8->Name,&param_1->Name);
  util__Str_char___Str_char(&pAVar5->Descriptor,&param_1->Descriptor);
  (pAVar5->Class).Data = (param_1->Class).Data;
  (pAVar5->Class).IsValidData = (param_1->Class).IsValidData;
  (pAVar5->ExplosionPotential).GasComposition.Capacity = 0;
  (pAVar5->ExplosionPotential).GasComposition._pad_0x0_0 =
       (int)&vftable_15;
  (pAVar5->ExplosionPotential).GasComposition.Data = (MaterialConstituent *)0x0;
  (pAVar5->ExplosionPotential).GasComposition.Size = 0;
  (pAVar5->ExplosionPotential).GasComposition.Capacity =
       (param_1->ExplosionPotential).GasComposition.Capacity;
  local_c = (**(code **)((param_1->ExplosionPotential).GasComposition._pad_0x0_0 + 0xc))();
  util__Darray_L_MaterialConstituent_G___SetSize(&(pAVar5->ExplosionPotential).GasComposition,&local_c);
  uVar10 = (pAVar5->ExplosionPotential).GasComposition.Capacity;
  pMVar7 = (MaterialConstituent *)(uintptr_t)(port_op_new(-(uint)((int)((ulonglong)uVar10 * 0x10 >> 0x20) != 0) |
                          (uint)((ulonglong)uVar10 * 0x10)));
  pMVar9 = pMVar7;
  if (pMVar7 == (MaterialConstituent *)0x0) {
    pMVar7 = (MaterialConstituent *)0x0;
  }
  else {
    for (; uVar10 != 0; uVar10 = uVar10 - 1) {
      pMVar9->Type = (Material *)0x0;
      pMVar9->UnitlessFraction = 0.0;
      pMVar9 = pMVar9 + 1;
    }
  }
  (pAVar5->ExplosionPotential).GasComposition.Data = pMVar7;
  pMVar9 = (param_1->ExplosionPotential).GasComposition.Data;
  if (pMVar9 != pMVar9 + (param_1->ExplosionPotential).GasComposition.Size) {
    do {
      ppMVar4 = &pMVar9->Type;
      uVar1 = (undefined4)((*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar9) + 0x4)));
      uVar2 = *(undefined4 *)&pMVar9->UnitlessFraction;
      uVar3 = *(undefined4 *)((int)&pMVar9->UnitlessFraction + 4);
      pMVar9 = pMVar9 + 1;
      pMVar7->Type = *ppMVar4;
      (undefined4)((*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar7) + 0x4)) = uVar1);
      *(undefined4 *)&pMVar7->UnitlessFraction = uVar2;
      *(undefined4 *)((int)&pMVar7->UnitlessFraction + 4) = uVar3;
      pMVar7 = pMVar7 + 1;
    } while (pMVar9 != (param_1->ExplosionPotential).GasComposition.Data +
                       (param_1->ExplosionPotential).GasComposition.Size);
  }
  (pAVar5->ExplosionPotential).Mass_kg = (param_1->ExplosionPotential).Mass_kg;
  (pAVar5->ExplosionPotential).Temperature_K = (param_1->ExplosionPotential).Temperature_K;
  pAVar5->CostOfOneUnit_c = param_1->CostOfOneUnit_c;
  return;
}

//==== 00619290 GetAmmoClass ====

/* public: enum ShipClass__Type __thiscall AmmoModule__GetAmmoClass(void)const  */

int __thiscall AmmoModule__GetAmmoClass(AmmoModule *this)

{
  int TVar1;
  int iVar2;
  AmmoInfo local_74;
  
  iVar2 = (**(code **)(((this->AmmoBay).CachedArmorComposition)->_pad_0x0_0 + 0x17c))(&local_74);
  if (*(char *)(iVar2 + 0x68) == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if (*(char *)(iVar2 + 0x3c) != '\0') {
    TVar1 = *(int *)(iVar2 + 0x38);
    AmmoInfo___AmmoInfo(&local_74);
    return TVar1;
  }
  AmmoInfo___AmmoInfo(&local_74);
  return 4;
}

//==== 00619300 GetAmmoMass_kg_Clear ====


/* public: void __thiscall AmmoCompartment__GetAmmoMass_kg_Clear(void)const  */

void __thiscall AmmoCompartment__GetAmmoMass_kg_Clear(AmmoCompartment *this)

{
  (this->GetAmmoMass_kg_MemoizedValue).IsValidData = false;
  (this->GetAmmoMass_kg_MemoizedValue).Data = 0.0;
  return;
}





//==== 00619320 GetDryMass_kg_00619320 ====

/* public: virtual double __thiscall AmmoCompartment__GetDryMass_kg(void)const  */

double __thiscall AmmoCompartment__GetDryMass_kg(AmmoCompartment *this)

{
  undefined8 stack0xfffffff5;
  int iVar1;
  int iVar2;
  bool bVar3;
  double dVar4;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int iStack_8;
  
  if ((this->GetAmmoMass_kg_MemoizedValue).IsValidData == false) {
    iVar2 = (this->AmmoCompartmentMemoizationHandlerInstance).ResetFunctions.Size;
    iVar1 = iVar2 + 1;
    _uStack_c = CONCAT44(iVar1,uStack_c);
    util__Darray_L_util__Reflectable_P_G___SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&this->AmmoCompartmentMemoizationHandlerInstance,
               &iStack_8);
    bVar3 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &this->AmmoCompartmentMemoizationHandlerInstance,iVar2);
    if (bVar3) {
      (this->AmmoCompartmentMemoizationHandlerInstance).ResetFunctions.Data
      [(this->AmmoCompartmentMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_c80f96c6, GetAmmoMass_kg_Clear);
    }
    dVar4 = AmmoBaySubModule__GetAmmoMass_kg((AmmoBaySubModule *)(this->_pad_0x38_14 + 0x88));
    _uStack_c = CONCAT71(stack0xfffffff5,1);
    local_14 = SUB84(dVar4,0);
    uStack_10 = (undefined4)((ulonglong)dVar4 >> 0x20);
    *(undefined4 *)&(this->GetAmmoMass_kg_MemoizedValue).Data = local_14;
    *(undefined4 *)((int)&(this->GetAmmoMass_kg_MemoizedValue).Data + 4) = uStack_10;
    (undefined4)((this->GetAmmoMass_kg_MemoizedValue).IsValidData = uStack_c);
    *(int *)&(this->GetAmmoMass_kg_MemoizedValue).field_0xc = iVar1;
    if ((this->GetAmmoMass_kg_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  return (double)this->CurrentAmmo * (this->GetAmmoMass_kg_MemoizedValue).Data +
         *(double *)&this->_pad_0x90_36;
}

//==== 00619460 IsExplosive ====

/* public: bool __thiscall AmmoModule__IsExplosive(void)const  */

bool __thiscall AmmoModule__IsExplosive(AmmoModule *this)

{
  double *pdVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  AmmoExplosion AStack_48;
  AmmoExplosion AStack_28;
  undefined4 uStack_8;
  
  pdVar1 = &(this->AmmoBay).CachedInfo.CostOfOneUnit_c;
  uStack_8 = 0;
  AmmoExplosion__AmmoExplosion(&AStack_28,(AmmoExplosion *)pdVar1);
  iVar3 = (**(code **)(uintptr_t)(AStack_28.GasComposition._pad_0x0_0 + 0xc))();
  if (iVar3 < 1) {
    bVar2 = false;
  }
  else {
    AmmoExplosion__AmmoExplosion(&AStack_48,(AmmoExplosion *)pdVar1);
    bVar2 = true;
    if (0.0 < AStack_48.Temperature_K) {
      bVar4 = true;
      goto LAB_0066cd90;
    }
  }
  bVar4 = false;
LAB_0066cd90:
  if ((AStack_48.GasComposition.Data != (MaterialConstituent *)0x0) && (bVar2)) {
    port_op_delete(AStack_48.GasComposition.Data);
  }
  AStack_28.GasComposition._pad_0x0_0 = (int)&vftable_15;
  if (AStack_28.GasComposition.Data != (MaterialConstituent *)0x0) {
    port_op_delete(AStack_28.GasComposition.Data);
  }
  return bVar4;
}

//==== 00619660 StaticFactory_00619660 ====

/* public: static class util__Reflectable * __cdecl AmmoModule__ReflectionInfoStruct_L_class_AmmoModule_G___StaticFactory(void) */

Reflectable * __cdecl AmmoModule__ReflectionInfoStruct_class_AmmoModule___StaticFactory(void)

{
  Module *this;
  
  this = (Module *)(uintptr_t)(port_op_new(0x130));
  if (this != (Module *)0x0) {
    memset(this,0,0x130);
    Module__Module(this);
    this->_pad_0x0_0 = (int)&vftable_for_EditorReflectable__24;
    *(undefined4 *)&(this->GetTotalPowerUsage_W_MemoizedValue).field_0xc = (undefined4)(uintptr_t)&vftable_for_util__RTTIBaseClass__23;
    this[1].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = (int)(uintptr_t) (undefined **)(0);
    *(undefined4 *)&this[1].ModuleMemoizationHandlerInstance = 0;
    *(undefined4 *)&this[1].GetTotalPowerUsage_W_MemoizedValue.Data = 0;
    *(undefined4 *)((int)&this[1].GetTotalPowerUsage_W_MemoizedValue.Data + 4) = 0;
    this[1].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity =
         (int)&vftable_166;
    *(undefined4 *)&this[1].ModuleMemoizationHandlerInstance = 0;
    *(undefined4 *)&this[1].GetTotalPowerUsage_W_MemoizedValue.Data = 0;
    *(undefined4 *)((int)&this[1].GetTotalPowerUsage_W_MemoizedValue.Data + 4) = 0;
    AmmoBaySubModule__AmmoBaySubModule((AmmoBaySubModule *)&this[1].Models);
    return (Reflectable *)this;
  }
  return (Reflectable *)0x0;
}

//==== 006196d0 StaticGetMemberByIndex_006196d0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl AmmoModule__ReflectionInfoStruct_class_AmmoModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
AmmoModule__ReflectionInfoStruct_class_AmmoModule___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_270291c4__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_270291c4__thread_safe_static_guard_0__);
    if ( cde_l2_270291c4__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_90564f90_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00972dac = 0;
      _DAT_00972db0 = 0;
      _DAT_00972db4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972db8,"Unused");
      _DAT_00972dc4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972dc8,"SteamWorkshopID");
      _DAT_00972dd4 = 6;
      _DAT_00972dd8 = 0x10;
      _DAT_00972ddc = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972de0,"AStr");
      _DAT_00972dec = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972df0,"Description");
      _DAT_00972dfc = 6;
      _DAT_00972e00 = 0x20;
      _DAT_00972e04 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972e08,"AStr");
      _DAT_00972e14 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972e18,"UsesCustomName");
      _DAT_00972e24 = 1;
      _DAT_00972e28 = 0x68;
      _DAT_00972e2c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972e30,"bool");
      _DAT_00972e3c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972e40,"SuppliedModule");
      _DAT_00972e4c = 8;
      _DAT_00972e50 = 0x80;
      _DAT_00972e54 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972e58,"Module");
      _DAT_00972e64 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972e68,"AmmoBay");
      _DAT_00972e74 = 10;
      _DAT_00972e78 = 0x88;
      _DAT_00972e7c = 0x98;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972e80,"AmmoBaySubModule");
      _DAT_00972e8c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972e90,"ArmorComposition");
      _DAT_00972e9c = 8;
      _DAT_00972ea0 = 0x120;
      _DAT_00972ea4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972ea8,"Material");
      _DAT_00972eb4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972eb8,"ArmorThickness_m");
      _DAT_00972ec4 = 4;
      _DAT_00972ec8 = 0x128;
      _DAT_00972ecc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972ed0,"double");
      _DAT_00972edc = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_AmmoModule__ReflectionInfoStruct_class_AmmoModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_270291c4__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_90564f90_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_00972dac + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_00972db0 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_00972db4 + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_00972db8 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_00972dc4)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_00972dc5)[iVar1];
  return __return_storage_ptr__;
}





//==== 006199a0 StaticGetMemberCount_006199a0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl AmmoModule__ReflectionInfoStruct_class_AmmoModule___StaticGetMemberCount(void) */

int __cdecl AmmoModule__ReflectionInfoStruct_class_AmmoModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_54f9d572__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_54f9d572__thread_safe_static_guard_0__);
    if ( cde_l2_54f9d572__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_ef8615db_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00972c64 = 0;
      _DAT_00972c68 = 0;
      _DAT_00972c6c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972c70,"Unused");
      _DAT_00972c7c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972c80,"SteamWorkshopID");
      _DAT_00972c8c = 6;
      _DAT_00972c90 = 0x10;
      _DAT_00972c94 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972c98,"AStr");
      _DAT_00972ca4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972ca8,"Description");
      _DAT_00972cb4 = 6;
      _DAT_00972cb8 = 0x20;
      _DAT_00972cbc = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972cc0,"AStr");
      _DAT_00972ccc = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972cd0,"UsesCustomName");
      _DAT_00972cdc = 1;
      _DAT_00972ce0 = 0x68;
      _DAT_00972ce4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972ce8,"bool");
      _DAT_00972cf4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972cf8,"SuppliedModule");
      _DAT_00972d04 = 8;
      _DAT_00972d08 = 0x80;
      _DAT_00972d0c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972d10,"Module");
      _DAT_00972d1c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972d20,"AmmoBay");
      _DAT_00972d2c = 10;
      _DAT_00972d30 = 0x88;
      _DAT_00972d34 = 0x98;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972d38,"AmmoBaySubModule");
      _DAT_00972d44 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972d48,"ArmorComposition");
      _DAT_00972d54 = 8;
      _DAT_00972d58 = 0x120;
      _DAT_00972d5c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972d60,"Material");
      _DAT_00972d6c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972d70,"ArmorThickness_m");
      _DAT_00972d7c = 4;
      _DAT_00972d80 = 0x128;
      _DAT_00972d84 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00972d88,"double");
      _DAT_00972d94 = 0;
      atexit( private__static_int_const___cdecl_AmmoModule__ReflectionInfoStruct_class_AmmoModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_54f9d572__thread_safe_static_guard_0__);
    }
  }
  return 8;
}





//==== 00619c20 StaticGetReflectionInfo_00619c20 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct AmmoModule__ReflectionInfoStruct_L_classAmmoModule_G_ * __cdecl
   AmmoModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_AmmoModule_G_ * __cdecl AmmoModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_582b8c3c__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_582b8c3c__thread_safe_static_guard_0__);
    if ( cde_l2_582b8c3c__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_a9db3557_ReflectionInfo) = &vftable_271;
      _Init_thread_footer(& cde_l2_582b8c3c__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoStruct_L_class_AmmoModule_G_ * *)&cde_l2_a9db3557_ReflectionInfo;
}





//==== 00619c80 GetClassID_00619c80 ====


/* public: virtual unsigned long __thiscall WeaponModule__GetClassID(void)const  */

ulong __thiscall WeaponModule__GetClassID(WeaponModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_995f4d76__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_995f4d76__thread_safe_static_guard_0__);
    if ( cde_l2_995f4d76__thread_safe_static_guard_0__ == -1) {
       cde_l2r_94dc5f65_ID =
           util__GetHash("WeaponModule");
      _Init_thread_footer(& cde_l2_995f4d76__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2r_94dc5f65_ID;
}





//==== 00619ce0 GetRadiusAtDistance_m ====

/* public: virtual double __thiscall WeaponModule__GetRadiusAtDistance_m(double)const  */

double __thiscall WeaponModule__GetRadiusAtDistance_m(WeaponModule *this,double param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)(**(code **)(this->_pad_0x0_0 + 0x158))();
  return (double)fVar1;
}

//==== 00619cf0 GetAmmoInfo ====


/* public: virtual class util__Maybe_L_structAmmoInfo_G_ __thiscall
   WeaponModule__GetAmmoInfo(void)const  */

AmmoInfo * __thiscall WeaponModule__GetAmmoInfo(WeaponModule *this)

{
  AmmoInfo *in_stack_00000004;
  
  AmmoInfo__AmmoInfo__o3(in_stack_00000004);
  *(undefined1 *)&in_stack_00000004[1].Dimensions_m.Radius = 0;
}





//==== 00619d10 GetEnergyNeededToFire_J ====


/* public: virtual double __thiscall WeaponModule__GetEnergyNeededToFire_J(double)const  */

double __thiscall WeaponModule__GetEnergyNeededToFire_J(WeaponModule *this,double param_1)

{
  return 0.0;
}





//==== 00619d20 DememoizeAll_00619d20 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall WeaponModule__DememoizeAll(void)const  */

void __thiscall WeaponModule__DememoizeAll(WeaponModule *this)

{
  undefined8 stack0xfffffffc;
  Maybe_L_double_G_ *pMVar1;
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
  pMVar1 = &this->GetFiringSpeed_km__s_MemoizedValue;
  local_c = 0;
  iVar2 = (int)(uintptr_t) (**(code **)(*(int *)&(this->GetFiringSpeed_km__s_MemoizedValue).Data + 0xc))();
  if (local_c < iVar2) {
    do {
      puVar3 = (undefined4 *)(*(code *)**(undefined4 **)&pMVar1->Data)(&local_c);
      (*(code *)*puVar3)();
      local_c = local_c + 1;
      iVar2 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
    } while (local_c < iVar2);
  }
  (**(code **)(*(int *)&pMVar1->Data + 0x10))();
  return;
}

//==== 00619de0 scalar_deleting_destructor_00619de0 ====


/* public: virtual void * __thiscall WeaponModule:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall WeaponModule___scalar_deleting_destructor(WeaponModule *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((int)&(this->GetFiringSpeed_km__s_MemoizedValue).Data + 4);
*(uint32_t *)&((this->GetFiringSpeed_km__s_MemoizedValue).Data) = (uint32_t)(uintptr_t)(&vftable_166);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
  }
  *(undefined4 *)((int)&(this->GetFiringSpeed_km__s_MemoizedValue).Data + 4) = 0;
  (this->GetFiringSpeed_km__s_MemoizedValue).Data = cde_ptr_as_double((void *)&vftable);
  Module___Module((Module *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0xb8);
  }
  return this;
}





//==== 00619e40 GetReflectionInfo_00619e40 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   BlackBoxLaserInfoSubModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall
BlackBoxLaserInfoSubModule__GetReflectionInfo(BlackBoxLaserInfoSubModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_04c61cda__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_04c61cda__thread_safe_static_guard_0__);
    if ( cde_l2_04c61cda__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_e61b2b24_ReflectionInfo) = &vftable_274;
      _Init_thread_footer(& cde_l2_04c61cda__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_e61b2b24_ReflectionInfo;
}





//==== 00619e50 scalar_deleting_destructor_00619e50 ====

/* public: virtual void * __thiscall BlackBoxLaserInfoSubModule:: 0 scalardeletingdestructor(unsigned int) */

void * 
BlackBoxLaserInfoSubModule___scalar_deleting_destructor
          (BlackBoxLaserInfoSubModule *this,uint param_1)

{
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x50);
  }
  return this;
}

//==== 00619e90 GetTypeName_00619e90 ====


/* public: virtual class util__Str_L_char_G_ 
   BlackBoxLaserInfoSubModule__ReflectionInfoStruct_struct_BlackBoxLaserInfoSubModule___GetTypeName(void)const  */

Str_L_char_G_ * 
BlackBoxLaserInfoSubModule__ReflectionInfoStruct_struct_BlackBoxLaserInfoSubModule___GetTypeName
          (ReflectionInfoStruct_L_struct_BlackBoxLaserInfoSubModule_G_ *this,
          Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"BlackBoxLaserInfoSubModule");
  return __return_storage_ptr__;
}





//==== 00619eb0 GetMembers_00619eb0 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   BlackBoxLaserInfoSubModule__ReflectionInfoStruct_struct_BlackBoxLaserInfoSubModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
BlackBoxLaserInfoSubModule__ReflectionInfoStruct_struct_BlackBoxLaserInfoSubModule___GetMembers
          (ReflectionInfoStruct_L_struct_BlackBoxLaserInfoSubModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_e5330997__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_e5330997__thread_safe_static_guard_0__),
      cde_l2_e5330997__thread_safe_static_guard_0__ == -1)) {
     cde_l2_04117f17_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_e5330997__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_04117f17_Count);
  iVar3 = 0;
  if (0 <  cde_l2_04117f17_Count) {
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
    } while (iVar3 <  cde_l2_04117f17_Count);
  }
  return in_stack_00000004;
}





//==== 0061a000 GetMember_0061a000 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   BlackBoxLaserInfoSubModule__ReflectionInfoStruct_struct_BlackBoxLaserInfoSubModule___GetMember(class util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
BlackBoxLaserInfoSubModule__ReflectionInfoStruct_struct_BlackBoxLaserInfoSubModule___GetMember
          (ReflectionInfoStruct_L_struct_BlackBoxLaserInfoSubModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_347e5843__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_347e5843__thread_safe_static_guard_0__),
      cde_l2_347e5843__thread_safe_static_guard_0__ == -1)) {
     cde_l2_4e783edf_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_347e5843__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_4e783edf_Count) {
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
LAB_0061a08d:
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
          if (cVar3 == '\0') goto LAB_0061a08d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_4e783edf_Count);
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





//==== 0061a1a0 GetFactory_0061a1a0 ====


/* public: virtual class util__Reflectable * (__cdecl*
   BlackBoxLaserInfoSubModule__ReflectionInfoStruct_struct_BlackBoxLaserInfoSubModule___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall BlackBoxLaserInfoSubModule__ReflectionInfoStruct_struct_BlackBoxLaserInfoSubModule___GetFactory
          (ReflectionInfoStruct_L_struct_BlackBoxLaserInfoSubModule_G_ *this)

{
  return StaticFactory;
}





//==== 0061a1b0 GetClassID_0061a1b0 ====


/* public: virtual unsigned long __thiscall BlackBoxWeaponModule__GetClassID(void)const  */

ulong __thiscall BlackBoxWeaponModule__GetClassID(BlackBoxWeaponModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_dd0e9da4__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_dd0e9da4__thread_safe_static_guard_0__);
    if ( cde_l2_dd0e9da4__thread_safe_static_guard_0__ == -1) {
       cde_l2r_f5921323_ID = util__GetHash("BlackBoxWeaponModule");
      _Init_thread_footer(& cde_l2_dd0e9da4__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2r_f5921323_ID;
}





//==== 0061a210 GetCustomModelFileNames_0061a210 ====


/* public: virtual class util__Darray_L_classutil__Str_L_char_G__G_ __thiscall
   BlackBoxWeaponModule__GetCustomModelFileNames(void)const  */

Darray_L_class_util__Str_L_char_G___G_ * __thiscall
BlackBoxWeaponModule__GetCustomModelFileNames(BlackBoxWeaponModule *this)

{
  int iVar1;
  bool bVar2;
  Darray_L_class_util__Str_L_char_G___G_ *in_stack_00000004;
  BlackBoxWeaponModule *pBStack_8;
  
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  pBStack_8 = this;
  util__Darray_class_util__Str_char_____Darray_class_util__Str_char(in_stack_00000004,1);
  iVar1 = *(int *)(in_stack_00000004 + 8);
  pBStack_8 = (BlackBoxWeaponModule *)(iVar1 + 1);
  util__Darray_class_util__Str_char_____SetSize(in_stack_00000004,(int *)&pBStack_8);
  bVar2 = util__Darray_class_util__Str_char_____CheckSize(in_stack_00000004,iVar1);
  if (bVar2) {
    util__Str_char___operator__o8
              ((Str_L_char_G_ *)
               (*(int *)(in_stack_00000004 + 4) + *(int *)(in_stack_00000004 + 8) * 0xc + -0xc),
               (Str_L_char_G_ *)((int)&this->Mass_kg + 4));
  }
  return in_stack_00000004;
}





//==== 0061a280 GetGeneratedName_0061a280 ====


/* public: virtual class util__Str_L_char_G_ __thiscall
   BlackBoxWeaponModule__GetGeneratedName(void)const  */

Str_L_char_G_ * __thiscall
BlackBoxWeaponModule__GetGeneratedName(BlackBoxWeaponModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,(Str_L_char_G_ *)&(this->Dimensions).Height_m);
  return __return_storage_ptr__;
}





//==== 0061a2a0 GetIcon_0061a2a0 ====


/* public: virtual void (__cdecl*__thiscall BlackBoxWeaponModule__GetIcon(void)const )(void) */

_func_void * __thiscall BlackBoxWeaponModule__GetIcon(BlackBoxWeaponModule *this)

{
  return Icons__LaserAndBullet;
}





//==== 0061a360 GetComposition_0061a360 ====

/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   BlackBoxWeaponModule__GetComposition(void)const  */

Darray_L_MaterialComposition_G_ * __thiscall
BlackBoxWeaponModule__GetComposition
          (BlackBoxWeaponModule *this,Darray_L_MaterialComposition_G_ *__return_storage_ptr__)

{
  MaterialComposition *pMVar1;
  double dVar2;
  Material *pMVar3;
  int iVar4;
  Darray_L_MaterialComposition_G_ *this_00;
  bool bVar5;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  this_00 = __return_storage_ptr__;
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (MaterialComposition *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  Module__GetComposition((Module *)this,__return_storage_ptr__);
  pMVar3 = (Material *)(this->Projectile).Data._pad_0x0_0;
  dVar2 = this->Accuracy_radians;
  iVar4 = this_00->Size;
  __return_storage_ptr__ = (Darray_L_MaterialComposition_G_ *)(iVar4 + 1);
  util__Darray_L_MaterialConstituent_G___SetSize
            ((Darray_L_MaterialConstituent_G_ *)this_00,(int *)&__return_storage_ptr__);
  bVar5 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                    ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar4);
  if (bVar5) {
    uStack_c = SUB84(dVar2,0);
    uStack_8 = (undefined4)((ulonglong)dVar2 >> 0x20);
    pMVar1 = this_00->Data + this_00->Size + -1;
    pMVar1->Type = pMVar3;
    (undefined4)((*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar1) + 0x4)) = uStack_10);
    *(undefined4 *)&pMVar1->Mass_kg = uStack_c;
    *(undefined4 *)((int)&pMVar1->Mass_kg + 4) = uStack_8;
  }
  return this_00;
}

//==== 0061a3d0 GetPowerUsage_0061a3d0 ====

/* public: virtual class util__Darray_L_structPowerUsage_G_ __thiscall
   BlackBoxWeaponModule__GetPowerUsage(void)const  */

Darray_L_PowerUsage_G_ * __thiscall
BlackBoxWeaponModule__GetPowerUsage
          (BlackBoxWeaponModule *this,Darray_L_PowerUsage_G_ *__return_storage_ptr__)

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
  util__Str_char___Str_char(&local_18,(Str_L_char_G_ *)&(this->Dimensions).Height_m);
  local_c = *(double *)&(this->Projectile).Data._pad_0x8_2;
  util__Str_char___Str_char(&local_30,&local_18);
  *(uint32_t *)&local_20 = local_c;
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

//==== 0061a490 GetStructuralMaterial_0061a490 ====

/* public: virtual class Material const * __thiscall
   BlackBoxWeaponModule__GetStructuralMaterial(void)const  */

Material * __thiscall BlackBoxWeaponModule__GetStructuralMaterial(BlackBoxWeaponModule *this)

{
  return (Material *)(this->Projectile).Data._pad_0x0_0;
}

//==== 0061a4a0 GetRelativePermeability ====


/* public: double __thiscall Material__GetRelativePermeability(void)const  */

double __thiscall Material__GetRelativePermeability(Material *this)

{
  return this->Remanence_T;
}





//==== 0061a4b0 GetTotalMagneticMoment ====


/* public: double __thiscall Material__GetTotalMagneticMoment(void)const  */

double __thiscall Material__GetTotalMagneticMoment(Material *this)

{
  return this->ThermoelectricSensitivity_V__K;
}





//==== 0061a4c0 GetAmmoInfo_0061a4c0 ====


/* public: virtual class util__Maybe_L_structAmmoInfo_G_ __thiscall
   BlackBoxWeaponModule__GetAmmoInfo(void)const  */

AmmoInfo * __thiscall BlackBoxWeaponModule__GetAmmoInfo(BlackBoxWeaponModule *this)

{
  AmmoInfo *pAVar1;
  bool bVar2;
  AmmoInfo *in_stack_00000004;
  AmmoInfo AStack_e8;
  AmmoInfo AStack_78;
  undefined1 uStack_10;
  int iStack_8;
  
  bVar2 = *(char *)&(this->LaserBeam).Data.Efficiency_Percent == '\0';
  if (bVar2) {
    AmmoInfo__AmmoInfo__o3(&AStack_78);
    uStack_10 = 0;
    pAVar1 = &AStack_78;
    iStack_8 = 2;
  }
  else {
    pAVar1 = (AmmoInfo *)
             MassProjectileSubModule__GetAmmoInfo
                       ((MassProjectileSubModule *)&(this->Projectile).Data.Mass_kg,
                        (Str_L_char_G_ *)&AStack_e8);
    iStack_8 = 0;
  }
  AmmoInfo__AmmoInfo(in_stack_00000004,pAVar1);
  *(undefined1 *)&in_stack_00000004[1].Dimensions_m.Radius =
       *(undefined1 *)&pAVar1[1].Dimensions_m.Radius;
  if (iStack_8 != 0) {
    AmmoInfo___AmmoInfo(&AStack_78);
  }
  if (!bVar2) {
    AmmoInfo___AmmoInfo(&AStack_e8);
  }
  return in_stack_00000004;
}





//==== 0061a560 RequiresAmmo ====


/* public: virtual bool __thiscall BlackBoxWeaponModule__RequiresAmmo(void)const  */

bool __thiscall BlackBoxWeaponModule__RequiresAmmo(BlackBoxWeaponModule *this)

{
  return (bool)(undefined1)((this->LaserBeam).Data.Efficiency_Percent);
}





//==== 0061a570 GetInternalAmmo ====

/* public: virtual int __thiscall BlackBoxWeaponModule__GetInternalAmmo(void)const  */

int __thiscall BlackBoxWeaponModule__GetInternalAmmo(BlackBoxWeaponModule *this)

{
  if ((char)this[1]._pad_0x90_36 != '\0') {
    return this[1]._pad_0x8_2;
  }
  return 0;
}

//==== 0061a590 GetPayload ====


/* public: virtual class CraftBlueprint * __thiscall BlackBoxWeaponModule__GetPayload(void)const  */

CraftBlueprint * __thiscall BlackBoxWeaponModule__GetPayload(BlackBoxWeaponModule *this)

{
  if ((char)((this->LaserBeam).Data.Efficiency_Percent != '\0')){
    return *(CraftBlueprint **)((int)&(this->Projectile).Data.CachedPropellantMass_kg + 4);
  }
  return (CraftBlueprint *)0x0;
}





//==== 0061a5b0 GetFiringVelocity_km__s ====


/* public: virtual double __thiscall BlackBoxWeaponModule__GetFiringVelocity_km__s(void)const  */

double __thiscall BlackBoxWeaponModule__GetFiringVelocity_km__s(BlackBoxWeaponModule *this)

{
  if ((this->Turret).Data.field0_0x0 != '\0') {
    return 299792458.0;
  }
  return cde_ptr_as_double((void *)((this->Projectile).Data.Composition));
}





//==== 0061a5f0 GetEngagementRange_km_0061a5f0 ====


/* public: virtual class util__Maybe_L_double_G_ 
   BlackBoxWeaponModule__GetEngagementRange_km(double)const  */

Maybe_L_double_G_ * 
BlackBoxWeaponModule__GetEngagementRange_km
          (BlackBoxWeaponModule *this,Maybe_L_double_G_ *__return_storage_ptr__,double param_1)

{
  char cVar1;
  double dVar2;
  undefined4 in_stack_00000008;
  
  if ((char)((this->LaserBeam).Data.Efficiency_Percent != '\0')){
    dVar2 = WeaponModule__GetActualRange_km
                      ((WeaponModule *)this,(double)CONCAT44((*(uint32_t*)&(param_1)),in_stack_00000008));
    __return_storage_ptr__->Data = dVar2;
    __return_storage_ptr__->IsValidData = true;
    return __return_storage_ptr__;
  }
  cVar1 = (this->Turret).Data.field0_0x0;
  if (cVar1 != '\0') {
    __return_storage_ptr__->Data = (double)((this->Turret).Data.field8_0x8);
    __return_storage_ptr__->IsValidData = cVar1 != '\0';
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Data = 0.0;
  __return_storage_ptr__->IsValidData = false;
  return __return_storage_ptr__;
}





//==== 0061a670 GetMaxDeviationAngle_radians_0061a670 ====


/* public: virtual double __thiscall BlackBoxWeaponModule__GetMaxDeviationAngle_radians(void)const
    */

double __thiscall BlackBoxWeaponModule__GetMaxDeviationAngle_radians(BlackBoxWeaponModule *this)

{
  double dVar1;
  
  if ((this->AttachedAmmoBay).Data.CachedArmorThickness_m.IsValidData != false) {
    if ((this->AttachedAmmoBay).Data.CachedArmorThickness_m.IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar1 = TurretSubModule__GetMaxDeviationAngle_radians
                      ((TurretSubModule *)&(this->Turret).Data.field0_0x0);
    return dVar1;
  }
  return 0.0;
}





//==== 0061a6d0 GetTurningAngularVelocity_radians__s ====


/* public: virtual double __thiscall
   BlackBoxWeaponModule__GetTurningAngularVelocity_radians__s(void)const  */

double __thiscall
BlackBoxWeaponModule__GetTurningAngularVelocity_radians__s(BlackBoxWeaponModule *this)

{
  double dVar1;
  
  if ((this->AttachedAmmoBay).Data.CachedArmorThickness_m.IsValidData != false) {
    if ((this->AttachedAmmoBay).Data.CachedArmorThickness_m.IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar1 = TurretSubModule__GetRotationalSpeed_radians__s
                      ((TurretSubModule *)&(this->Turret).Data.field0_0x0);
    return dVar1;
  }
  return 0.0;
}





//==== 0061a730 GetTurningPowerDrain_W ====


/* public: virtual double __thiscall BlackBoxWeaponModule__GetTurningPowerDrain_W(void)const  */

double __thiscall BlackBoxWeaponModule__GetTurningPowerDrain_W(BlackBoxWeaponModule *this)

{
  double dVar1;
  
  if ((this->AttachedAmmoBay).Data.CachedArmorThickness_m.IsValidData != false) {
    if ((this->AttachedAmmoBay).Data.CachedArmorThickness_m.IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar1 = TurretSubModule__GetPowerConsumption_W
                      ((TurretSubModule *)&(this->Turret).Data.field0_0x0);
    return dVar1;
  }
  return 0.0;
}





//==== 0061a790 GetProjectileMinRadius_m ====


/* public: virtual double __thiscall BlackBoxWeaponModule__GetProjectileMinRadius_m(void)const  */

double __thiscall BlackBoxWeaponModule__GetProjectileMinRadius_m(BlackBoxWeaponModule *this)

{
  double dVar1;
  
  if ((char)((this->LaserBeam).Data.Efficiency_Percent != '\0')){
    if ((char)((this->LaserBeam).Data.Efficiency_Percent == '\0')){
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar1 = MassProjectileSubModule__GetProjectileMinRadius_m
                      ((MassProjectileSubModule *)&(this->Projectile).Data.Mass_kg);
    return dVar1;
  }
  return 0.0;
}





//==== 0061a7f0 GetShotCreationOffset_m_0061a7f0 ====

/* public: virtual double __thiscall BlackBoxWeaponModule__GetShotCreationOffset_m(void)const  */

double __thiscall BlackBoxWeaponModule__GetShotCreationOffset_m(BlackBoxWeaponModule *this)

{
  float10 fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0061a7f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float10)(**(code **)(this->_pad_0x0_0 + 0xa8))();
  return (double)fVar1;
}

//==== 0061a800 GetCenterExtrusionOffset_m ====


/* public: virtual double __thiscall BlackBoxWeaponModule__GetCenterExtrusionOffset_m(void)const  */

double __thiscall BlackBoxWeaponModule__GetCenterExtrusionOffset_m(BlackBoxWeaponModule *this)

{
  double dVar1;
  
  if ((this->AttachedAmmoBay).Data.CachedArmorThickness_m.IsValidData != false) {
    if ((this->AttachedAmmoBay).Data.CachedArmorThickness_m.IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar1 = TurretSubModule__GetExtruderLength_m((TurretSubModule *)&(this->Turret).Data.field0_0x0)
    ;
    return dVar1;
  }
  return 0.0;
}





//==== 0061a860 GetRadiusAtDistance_m_0061a860 ====

/* public: virtual double __thiscall BlackBoxWeaponModule__GetRadiusAtDistance_m(double)const  */

double __thiscall
BlackBoxWeaponModule__GetRadiusAtDistance_m(BlackBoxWeaponModule *this,double param_1)

{
  float10 fVar1;
  double dVar2;
  double local_c;
  
  if ((char)((this->LaserBeam).Data.Efficiency_Percent != '\0')){
    fVar1 = (float10)(**(code **)(this->_pad_0x0_0 + 0x158))();
    return (double)fVar1;
  }
  if ((this->Turret).Data.field0_0x0 != '\0') {
    dVar2 = Physics__GetDiffractionLimitedAngle_radians
                      ((double)((this->LaserBeam).Data.Coolant,
                       (this->LaserBeam).Data.RadiatorTemperature_K));
    local_c = dVar2 * (this->LaserBeam).Data.EngagementRange_km * 0.5;
    dVar2 = util__Tan(&local_c);
    return param_1 * 1000.0 * dVar2;
  }
  return 0.0;
}

//==== 0061a8f0 GenerateQuickDiagrams_0061a8f0 ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual class util__Darray_L_structUIWidget_P_G_ __thiscall
   BlackBoxWeaponModule__GenerateQuickDiagrams(class Manager *)const  */

Manager * __thiscall
BlackBoxWeaponModule__GenerateQuickDiagrams(BlackBoxWeaponModule *this,Manager *param_1)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  UIWidget *pUVar4;
  int iVar5;
  Darray_L_bool_P_G_ *pDVar6;
  Manager *in_stack_00000008;
  Manager local_28;
  int local_18;
  undefined **local_14;
  undefined4 *puStack_10;
  int iStack_c;
  int iStack_8;
  
  if ((this->Turret).Data.field0_0x0 == '\0') {
    pDVar6 = (Darray_L_bool_P_G_ *)WeaponModule__GenerateQuickDiagrams((WeaponModule *)this,&local_28);
    bVar1 = false;
    bVar3 = true;
  }
  else {
    pUVar4 = (UIWidget *)(uintptr_t)(GenerateDamageRangeChart(this,in_stack_00000008));
    local_14 = (undefined **)(&vftable_2);
    puStack_10 = (undefined4 *)0x0;
    iStack_c = 0;
    iStack_8 = 1;
    puStack_10 = (undefined4 *)(uintptr_t)(port_op_new(4));
    iVar2 = iStack_c;
    if (puStack_10 == (undefined4 *)0x0) {
      puStack_10 = (undefined4 *)0x0;
    }
    else {
      *puStack_10 = 0;
    }
    iVar5 = 0;
    if (0 < iStack_8) {
      do {
        puStack_10[iVar5] = 0;
        iVar5 = iVar5 + 1;
      } while (iVar5 < iStack_8);
    }
    local_18 = iStack_c + 1;
    util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)&local_14,&local_18);
    bVar3 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)&local_14,iVar2);
    if (bVar3) {
      puStack_10[iStack_c + -1] = (undefined4)(uintptr_t)(pUVar4);
    }
    pDVar6 = (Darray_L_bool_P_G_ *)&local_14;
    bVar1 = true;
    bVar3 = false;
  }
  util__Darray_bool____Darray_bool((Darray_L_bool_P_G_ *)param_1,pDVar6);
  if (bVar3) {
    local_28._pad_0x0_0 = (int)&vftable_2;
    if (local_28.Parent != (GameManager *)0x0) {
      port_op_delete(local_28.Parent);
    }
    local_28.Parent = (GameManager *)0x0;
    local_28._pad_0x0_0 = (int)&vftable;
  }
  if ((bVar1) &&
     (local_14 = (undefined **)&vftable_2, puStack_10 != (undefined4 *)0x0)) {
    port_op_delete(puStack_10);
  }
  return param_1;
}

//==== 0061aa10 GetCoolantProperties_0061aa10 ====

/* public: virtual class util__Maybe_L_structModuleCoolantProperties_G_ __thiscall
   BlackBoxWeaponModule__GetCoolantProperties(void)const  */

Maybe_L_ModuleCoolantProperties_G_ * __thiscall
BlackBoxWeaponModule__GetCoolantProperties
          (BlackBoxWeaponModule *this,Maybe_L_ModuleCoolantProperties_G_ *__return_storage_ptr__)

{
  Material *pMVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  bVar2 = (this->Turret).Data.field0_0x0 == '\0';
  if (bVar2) {
    dVar4 = 0.0;
    dVar5 = 0.0;
    dVar3 = 0.0;
    pMVar1 = (Material *)0x0;
  }
  else {
    dVar5 = this->ReloadTime_s;
    dVar4 = *(double *)&(this->Turret).Data;
    dVar3 = (1.0 - (this->LaserBeam).Data.CoolantMassFlowRate_kg__s) *
            *(double *)&(this->Projectile).Data._pad_0x8_2;
    pMVar1 = *(Material * *)&(this->LaserBeam).IsValidData;
  }
  (__return_storage_ptr__->Data).Coolant = pMVar1;
  (__return_storage_ptr__->Data).Volume_m3 = 0.0;
  (__return_storage_ptr__->Data).MassFlowRate_kg__s = dVar5;
  (__return_storage_ptr__->Data).PeakTemperature_K = dVar4;
  (__return_storage_ptr__->Data).HeatTransferRate_W = dVar3;
  __return_storage_ptr__->IsValidData = !bVar2;
  return __return_storage_ptr__;
}

//==== 0061af20 GetStatuses_0061af20 ====

/* public: virtual class DesignStatusBuffer  BlackBoxWeaponModule__GetStatuses(class
   DataParser *)const  */

DesignStatusBuffer * 
BlackBoxWeaponModule__GetStatuses
          (BlackBoxWeaponModule *this,DesignStatusBuffer *__return_storage_ptr__,DataParser *param_1
          )

{
  char cVar1;
  bool bVar2;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  Str_L_char_G_ local_10;
  
  __return_storage_ptr__->DataManager = (DataParser *)0x0;
  (__return_storage_ptr__->Messages)._pad_0x0_0 = 0;
  (__return_storage_ptr__->Messages).Data = (DesignStatusMessage *)0x0;
  (__return_storage_ptr__->Messages).Size = 0;
  *(undefined8 *)&(__return_storage_ptr__->Messages).Capacity = 0;
  WeaponModule__GetStatuses((WeaponModule *)this,__return_storage_ptr__,param_1);
  util__Str_char___Str_char(&local_34,"BlackBoxWeaponCantDoBothWeaponTypes");
  cVar1 = *(char *)&(this->LaserBeam).Data.Efficiency_Percent;
  if ((this->Turret).Data.field0_0x0 == '\0') {
    if (cVar1 == '\0') goto LAB_0061b02b;
  }
  else if (cVar1 != '\0') {
LAB_0061b02b:
    bVar2 = true;
    goto LAB_0061af6b;
  }
  bVar2 = false;
LAB_0061af6b:
  local_28.Data = (char *)0x0;
  local_28.Capacity = 0;
  local_28.Length = 0;
  local_1c.Data = (char *)0x0;
  local_1c.Capacity = 0;
  local_1c.Length = 0;
  local_10.Data = (char *)0x0;
  local_10.Capacity = 0;
  local_10.Length = 0;
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,bVar2,&local_34,&local_10,&local_1c,&local_28,
             (ModulePlacer *)0x0);
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

//==== 0061b040 GetPointerPropertyChoices_0061b040 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   BlackBoxWeaponModule__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

ClassMember * 
BlackBoxWeaponModule__GetPointerPropertyChoices
          (BlackBoxWeaponModule *this,ClassMember *param_1,SerializationManagerInterface *param_2)

{
  char *pcVar1;
  SerializationManagerInterface SVar2;
  int in_stack_0000000c;
  
  if ((*(int *)&param_2[1]) < 1) {
    SVar2 = *(SerializationManagerInterface *)&cde_l2_0b2b1c9f_NullString;
  }
  else {
    SVar2 = *param_2;
  }
  for (pcVar1 = "PrimaryComposition";
      (pcVar1[(int)(*(int *)&SVar2 + -0x9258bc)] != '\0' || (*pcVar1 != '\0')); pcVar1 = pcVar1 + 1) {
    if (pcVar1[(int)((*(int *)&SVar2) + -0x9258bc)] != *pcVar1) {
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





//==== 0061b0c0 GetMutuallyExclusiveProperties_0061b0c0 ====


/* public: virtual class util__Darray_L_classutil__Str_L_char_G__G_ __thiscall
   BlackBoxWeaponModule__GetMutuallyExclusiveProperties(void)const  */

Darray_L_class_util__Str_L_char_G___G_ * __thiscall
BlackBoxWeaponModule__GetMutuallyExclusiveProperties(BlackBoxWeaponModule *this)

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
  util__Darray_class_util__Str_char_____Darray_class_util__Str_char(in_stack_00000004,2);
  util__Str_char___Str_char(&SStack_10,"Projectile");
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
  util__Str_char___Str_char(&SStack_10,"LaserBeam");
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





//==== 0061b190 GetReflectionInfo_0061b190 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   BlackBoxWeaponModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall BlackBoxWeaponModule__GetReflectionInfo(BlackBoxWeaponModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_3ae175ff__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_3ae175ff__thread_safe_static_guard_0__);
    if ( cde_l2_3ae175ff__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_4d70c1da_ReflectionInfo) = &vftable_275;
      _Init_thread_footer(& cde_l2_3ae175ff__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_4d70c1da_ReflectionInfo;
}





//==== 0061b1a0 scalar_deleting_destructor_0061b1a0 ====

/* public: virtual void * __thiscall BlackBoxWeaponModule:: 0 scalardeletingdestructor(unsigned
   int) */

void * __thiscall
BlackBoxWeaponModule___scalar_deleting_destructor(BlackBoxWeaponModule *this,uint param_1)

{
  void *pvVar1;
  
  AmmoInfo___AmmoInfo((AmmoInfo *)&this[1]._pad_0x18_6);
  *(undefined ** *)&(this->AttachedAmmoBay).IsValidData = &vftable_5;
  pvVar1 = *(void * *)&(*(undefined4 *)((char *)&((this->AttachedAmmoBay)) + 0x9c));
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->AttachedAmmoBay)) + 0x9c)) = 0;
  }
  TurretSubModule___TurretSubModule((TurretSubModule *)&(this->Turret).Data.field0_0x0);
  *(undefined ** *)&(this->LaserBeam).Data.ApertureRadius_m = &vftable_5;
  pvVar1 = *(void **)((int)&(this->LaserBeam).Data.ApertureRadius_m + 4);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    *(undefined4 *)((int)&(this->LaserBeam).Data.ApertureRadius_m + 4) = 0;
  }
  *(undefined ** *)&(this->Projectile).Data.Mass_kg = &vftable_5;
  pvVar1 = *(void **)((int)&(this->Projectile).Data.Mass_kg + 4);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    *(undefined4 *)((int)&(this->Projectile).Data.Mass_kg + 4) = 0;
  }
  pvVar1 = *(void **)((int)&this->Mass_kg + 4);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    *(undefined4 *)((int)&this->Mass_kg + 4) = 0;
  }
  pvVar1 = *(void * *)&(this->Dimensions).Height_m;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    *(undefined4 *)&(this->Dimensions).Height_m = 0;
  }
  this->_pad_0x80_32 = (int)&vftable_166;
  if ((void *)this->_pad_0x84_33 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x84_33);
  }
  this->_pad_0x84_33 = 0;
  this->_pad_0x80_32 = (int)&vftable;
  Module___Module((Module *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x378);
  }
  return this;
}

//==== 0061b2c0 GetTypeName_0061b2c0 ====


/* public: virtual class util__Str_L_char_G_  BlackBoxWeaponModule__ReflectionInfoStruct_class_BlackBoxWeaponModule___GetTypeName(void)const  */

Str_L_char_G_ * 
BlackBoxWeaponModule__ReflectionInfoStruct_class_BlackBoxWeaponModule___GetTypeName
          (ReflectionInfoStruct_L_class_BlackBoxWeaponModule_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"BlackBoxWeaponModule");
  return __return_storage_ptr__;
}





//==== 0061b2e0 GetMembers_0061b2e0 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   BlackBoxWeaponModule__ReflectionInfoStruct_class_BlackBoxWeaponModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
BlackBoxWeaponModule__ReflectionInfoStruct_class_BlackBoxWeaponModule___GetMembers__o2
          (ReflectionInfoStruct_L_class_BlackBoxWeaponModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_5999164f__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_5999164f__thread_safe_static_guard_0__),
      cde_l2_5999164f__thread_safe_static_guard_0__ == -1)) {
     cde_l2_0a5c55ad_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_5999164f__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_0a5c55ad_Count);
  iVar3 = 0;
  if (0 <  cde_l2_0a5c55ad_Count) {
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
    } while (iVar3 <  cde_l2_0a5c55ad_Count);
  }
  return in_stack_00000004;
}





//==== 0061b420 GetMember_0061b420 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   BlackBoxWeaponModule__ReflectionInfoStruct_class_BlackBoxWeaponModule___GetMember(class
   util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
BlackBoxWeaponModule__ReflectionInfoStruct_class_BlackBoxWeaponModule___GetMember__o2
          (ReflectionInfoStruct_L_class_BlackBoxWeaponModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_0aba7b67__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_0aba7b67__thread_safe_static_guard_0__),
      cde_l2_0aba7b67__thread_safe_static_guard_0__ == -1)) {
     cde_l2_0fe509fd_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_0aba7b67__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_0fe509fd_Count) {
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
LAB_0061b4ad:
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
          if (cVar3 == '\0') goto LAB_0061b4ad;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_0fe509fd_Count);
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





//==== 0061b5c0 GetFactory_0061b5c0 ====


/* public: virtual class util__Reflectable * (__cdecl*
   BlackBoxWeaponModule__ReflectionInfoStruct_class_BlackBoxWeaponModule___GetFactory(void)const
   )(void) */

_func_Reflectable_ptr * 
__thiscall BlackBoxWeaponModule__ReflectionInfoStruct_class_BlackBoxWeaponModule___GetFactory__o2
          (ReflectionInfoStruct_L_class_BlackBoxWeaponModule_G_ *this)

{
  return StaticFactory;
}





//==== 0061b5d0 MethodCallerConst___thunk_____thiscall_LaserModule__vcall_352__flat_____0__ ====


/* public: static double __cdecl util__DelegateFactory_L_class_LaserModule_Cdouble_Cdouble_G___MethodCallerConst_L___thunk____thiscall_LaserModule____PUNK_P_vcall_352_C_flat______C0__G_(void const * const,double) */

double __cdecl
util__DelegateFactory_class_LaserModule_double_double___MethodCallerConst___thunk_____thiscall_LaserModule___vcall__352__flat_______0
          (void *param_1,double param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)LaserModule___vcall__352__flat((LaserModule *)param_1);
  return (double)fVar1;
}





//==== 0061b5f0 MethodCallerConst__public__double___thiscall_BlackBoxWeaponModule__GetDamageChartIntensity_MW__m2_double_const__0__ ====


/* public: static double __cdecl util__DelegateFactory_L_class_BlackBoxWeaponModule_Cdouble_Cdouble_G___MethodCallerConst_L__public_double__thiscall_BlackBoxWeaponModule__GetDamageChartIntensity_MW__m2_double_const_C0__G_(void const * const,double)
    */

double __cdecl
util__DelegateFactory_class_BlackBoxWeaponModule_double_double___MethodCallerConst__public__double___thiscall_BlackBoxWeaponModule__GetDamageChartIntensity_MW__m2_double_const__0
          (void *param_1,double param_2)

{
  double dVar1;
  undefined4 in_stack_00000008;
  
  dVar1 = BlackBoxWeaponModule__GetDamageChartIntensity_MW__m2
                    ((BlackBoxWeaponModule *)param_1,
                     (double)CONCAT44((*(uint32_t*)&(param_2)),in_stack_00000008));
}





//==== 0061b610 MethodCallerConst__public__struct_util__Range_double____thiscall_BlackBoxWeaponModule__GetLaserChartXRanges_void_const__0__ ====


/* public: static struct util__Range_L_double_G_ __cdecl util__DelegateFactory_L_class_BlackBoxWeaponModule_Cstructutil__Range_L_double_G__G___MethodCallerConst_L__public_struct_util__Range_L_double_G___thiscallBlackBoxWeaponModule__GetLaserChartXRanges_void_const_C0__G_(void
   const * const) */

Range_L_double_G_ * __cdecl
util__DelegateFactory_class_BlackBoxWeaponModule_struct_util__Range_double_____MethodCallerConst__public__struct_util__Range_double____thiscall_BlackBoxWeaponModule__GetLaserChartXRanges_void_const__0
          (Range_L_double_G_ *__return_storage_ptr__,void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Range_L_double_G_ *pRVar4;
  Range_L_double_G_ RStack_14;
  
  pRVar4 = BlackBoxWeaponModule__GetLaserChartXRanges((BlackBoxWeaponModule *)param_1,&RStack_14);
  uVar1 = *(undefined4 *)((int)&pRVar4->Lower + 4);
  uVar2 = *(undefined4 *)&pRVar4->Upper;
  uVar3 = *(undefined4 *)((int)&pRVar4->Upper + 4);
  *(undefined4 *)&__return_storage_ptr__->Lower = *(undefined4 *)&pRVar4->Lower;
  *(undefined4 *)((int)&__return_storage_ptr__->Lower + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Upper = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Upper + 4) = uVar3;
  return __return_storage_ptr__;
}





//==== 0061b630 MethodCallerConst__public__struct_util__Range_double____thiscall_BlackBoxWeaponModule__GetLaserChartYRanges_void_const__0__ ====


/* public: static struct util__Range_L_double_G_ __cdecl util__DelegateFactory_L_class_BlackBoxWeaponModule_Cstructutil__Range_L_double_G__G___MethodCallerConst_L__public_struct_util__Range_L_double_G___thiscallBlackBoxWeaponModule__GetLaserChartYRanges_void_const_C0__G_(void
   const * const) */

Range_L_double_G_ * __cdecl
util__DelegateFactory_class_BlackBoxWeaponModule_struct_util__Range_double_____MethodCallerConst__public__struct_util__Range_double____thiscall_BlackBoxWeaponModule__GetLaserChartYRanges_void_const__0
          (Range_L_double_G_ *__return_storage_ptr__,void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Range_L_double_G_ *pRVar4;
  Range_L_double_G_ RStack_14;
  
  pRVar4 = BlackBoxWeaponModule__GetLaserChartYRanges((BlackBoxWeaponModule *)param_1,&RStack_14);
  uVar1 = *(undefined4 *)((int)&pRVar4->Lower + 4);
  uVar2 = *(undefined4 *)&pRVar4->Upper;
  uVar3 = *(undefined4 *)((int)&pRVar4->Upper + 4);
  *(undefined4 *)&__return_storage_ptr__->Lower = *(undefined4 *)&pRVar4->Lower;
  *(undefined4 *)((int)&__return_storage_ptr__->Lower + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Upper = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Upper + 4) = uVar3;
  return __return_storage_ptr__;
}





//==== 0061b650 AmmoInfo_0061b650 ====

/* public:  AmmoInfo__AmmoInfo(void) */

AmmoInfo * __thiscall AmmoInfo__AmmoInfo__o3(AmmoInfo *this)

{
  *(undefined4 *)&(this->Dimensions_m).Radius = 0;
  *(undefined4 *)((int)&(this->Dimensions_m).Radius + 4) = 0;
  *(undefined4 *)&(this->Dimensions_m).Height = 0;
  *(undefined4 *)((int)&(this->Dimensions_m).Height + 4) = 0;
  (this->Composition)._pad_0x0_0 = (int)&vftable_75;
  (this->Composition).Data = (MaterialComposition *)0x0;
  (this->Composition).Size = 0;
  (this->Composition).Capacity = 0;
  (this->Name).Data = (char *)0x0;
  (this->Name).Capacity = 0;
  (this->Name).Length = 0;
  (this->Descriptor).Data = (char *)0x0;
  (this->Descriptor).Capacity = 0;
  (this->Descriptor).Length = 0;
  (this->Class).Data = ShipClass__Warship;
  (this->Class).IsValidData = false;
  (this->ExplosionPotential).GasComposition._pad_0x0_0 =
       (int)&vftable_15;
  (this->ExplosionPotential).GasComposition.Data = (MaterialConstituent *)0x0;
  (this->ExplosionPotential).GasComposition.Size = 0;
  (this->ExplosionPotential).GasComposition.Capacity = 0;
  *(undefined4 *)&(this->ExplosionPotential).Mass_kg = 0;
  *(undefined4 *)((int)&(this->ExplosionPotential).Mass_kg + 4) = 0;
  *(undefined4 *)&(this->ExplosionPotential).Temperature_K = 0;
  *(undefined4 *)((int)&(this->ExplosionPotential).Temperature_K + 4) = 0;
  this->CostOfOneUnit_c = 0.0;
  return this;
}

//==== 0061b730 FireWeapon ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void  BlackBoxWeaponCompartment__FireWeapon(class util__SharedPtr_L_class_Body_G_,class util__WeakPtr_L_classBody_G_,double,struct util__PhysicalState_L_structutil__Vec3_L_double_G___G_) */

void 
BlackBoxWeaponCompartment__FireWeapon
          (BlackBoxWeaponCompartment *this,int *param_2,ReferenceController *param_3,
          undefined4 param_4,ReferenceController *param_5,double param_6,undefined4 param_7,
          undefined4 param_8,undefined4 param_9,undefined4 param_10,undefined4 param_11,
          undefined4 param_12,undefined4 param_13,undefined4 param_14,undefined4 param_15,
          undefined4 param_16,undefined4 param_17,undefined4 param_18)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  PhotonPacketComponent *pPVar4;
  int *piVar5;
  ReferenceController *pRVar6;
  ReferenceControllerRegistry *pRVar7;
  int iVar8;
  code *pcVar9;
  EffectManager *pEVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int *in_stack_ffffffbc;
  uint uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  double dVar17;
  undefined8 uVar18;
  int *piVar20;
  undefined8 uVar19;
  ReferenceController *pRStack_8;
  
  iVar1 = *(int *)&this->field_0x38;
  if (*(char *)(iVar1 + 0x168) != '\0') {
    if (*(int *)(iVar1 + 0x134) == 0) {
      uVar16 = CONCAT44(param_5,param_4);
      if (param_5 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(param_5);
      }
      uVar18 = *(undefined8 *)&this->field_0x30;
      if (*(ReferenceController **)&this->field_0x34 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(*(ReferenceController **)&this->field_0x34);
      }
      uVar19 = CONCAT44(param_3,param_2);
      if (param_3 != (ReferenceController *)0x0) {
        util__ReferenceController__AddStrongReference(param_3);
      }
      iVar1 = *(int *)&this->field_0x38;
      if (*(char *)(iVar1 + 0x168) == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      MassProjectileSubModule__LaunchBullet(
                ((MassProjectileSubModule *)(iVar1 + 0x108),uVar19,uVar18,uVar16));


    }
    goto LAB_0061bb15;
  }
  if (*(char *)(iVar1 + 0x1c0) == '\0') goto LAB_0061bb15;
  param_6 = *(double *)(iVar1 + 0x188) * *(double *)(iVar1 + 0xf0) * param_6;
  pPVar4 = (PhotonPacketComponent *)port_op_new(0x40);
  if (pPVar4 == (PhotonPacketComponent *)0x0) {
    piVar5 = (int *)0x0;
LAB_0061b895:
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
  }
  else {
    memset(0,0,0);
    iVar1 = *(int *)&this->field_0x38;
    if (*(char *)(iVar1 + 0x1c0) == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    uVar18 = CONCAT44(util__DelegateFactory_class_LaserModule_double_double___MethodCallerConst___thunk_____thiscall_LaserModule___vcall__352__flat_______0
                      ,iVar1);
    uVar16 = *(undefined8 *)(iVar1 + 0x180);
    in_stack_ffffffbc = param_2;
    pRVar6 = param_3;
    dVar17 = param_6;
    if (param_3 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(param_3);
    }
    piVar5 = (int *)PhotonPacketComponent__PhotonPacketComponent
                              (pPVar4,in_stack_ffffffbc,pRVar6,uVar16,dVar17,uVar18);
    if (piVar5 == (int *)0x0) goto LAB_0061b895;
  }
  piVar20 = piVar5;
  pRVar7 = util__ReferenceControllerRegistry__Get();
  pRVar6 = util__ReferenceControllerRegistry__Register(pRVar7,piVar20);
  if (pRVar6 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(pRVar6);
  }
  if ((char)param_2[0xca] != '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\tactical\\body.h",0x2e,"!Created",
                    (char *)0x0);
    DebugBreak();
  }
  if (pRVar6 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(pRVar6);
  }
  iVar1 = param_2[0xc4];
  pRStack_8 = (ReferenceController *)(iVar1 + 1);
  util__Darray_class_util__SharedPtr_struct_UIWidget_____SetSize
            ((Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *)(param_2 + 0xc2),(int *)&pRStack_8);
  bVar3 = util__Darray_class_util__SharedPtr_struct_UIWidget_____CheckSize
                    ((Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *)(param_2 + 0xc2),iVar1);
  if (bVar3) {
    iVar1 = param_2[0xc4];
    iVar8 = param_2[0xc3];
    pRStack_8 = *(ReferenceController **)(iVar8 + -4 + iVar1 * 8);
    piVar20 = *(int **)(iVar8 + -8 + iVar1 * 8);
    *(int **)(iVar8 + -8 + iVar1 * 8) = piVar5;
    *(ReferenceController **)(iVar8 + -4 + iVar1 * 8) = pRVar6;
    if (pRVar6 != (ReferenceController *)0x0) {
      util__ReferenceController__AddStrongReference(pRVar6);
    }
    if ((pRStack_8 != (ReferenceController *)0x0) &&
       (bVar3 = util__ReferenceController__ReleaseStrongReference(pRStack_8), bVar3)) {
      if (piVar20 != (int *)0x0) {
        (**(code **)(uintptr_t)(*piVar20 + 4))();
      }
      pRVar7 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar7,piVar20);
    }
  }
  if (pRVar6 != (ReferenceController *)0x0) {
    bVar3 = util__ReferenceController__ReleaseStrongReference(pRVar6);
    if (bVar3) {
      if (piVar5 != (int *)0x0) {
        (**(code **)(uintptr_t)(*piVar5 + 4))();
      }
      piVar20 = piVar5;
      pRVar7 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar7,piVar20);
    }
    util__ReferenceController__AddWeakReference(pRVar6);
    bVar3 = util__ReferenceController__ReleaseStrongReference(pRVar6);
    if (bVar3) {
      if (piVar5 != (int *)0x0) {
        (**(code **)(uintptr_t)(*piVar5 + 4))();
      }
      pRVar7 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar7,piVar5);
    }
    util__ReferenceController__ReleaseWeakReference(pRVar6);
  }
  uVar15 = 1;
  uVar16 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = (uint)in_stack_ffffffbc & 0xffffff00;
  iVar1 = *(int *)&this->field_0x38;
  iVar8 = iVar1;
  pcVar9 = DebugBreak_exref;
  if (*(char *)(iVar1 + 0x1c0) == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    pcVar9 = DebugBreak_exref;
    DebugBreak();
    iVar8 = *(int *)&this->field_0x38;
  }
  if (*(char *)(iVar8 + 0x1c0) == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    (*pcVar9)();
  }
  if ((*(ReferenceController **)&this->field_0x34 != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__IsDataStillValid
                        (*(ReferenceController **)&this->field_0x34), !bVar3)) {
    *(undefined4 *)&this->field_0x30 = 0;
  }
  iVar2 = *(int *)(*(int *)&this->field_0x30 + 0x1dc);
  pRVar6 = *(ReferenceController **)(iVar2 + 0xf4);
  pEVar10 = *(EffectManager **)(iVar2 + 0xf0);
  if (((pRVar6 != (ReferenceController *)0x0) &&
      (util__ReferenceController__AddWeakReference(pRVar6), pRVar6 != (ReferenceController *)0x0))
     && (bVar3 = util__ReferenceController__IsDataStillValid(pRVar6), !bVar3)) {
    pEVar10 = (EffectManager *)0x0;
  }
  EffectManager__NewFlash
            (pEVar10,param_7,param_8,param_9,param_10,param_11,param_12,param_13,param_14,param_15,
             param_16,param_17,param_18,*(undefined8 *)(iVar8 + 400),param_6,
             *(undefined8 *)(iVar1 + 0x180),0,0,uVar11,uVar12,uVar13,uVar14,uVar15,uVar16,uVar18,
             uVar19);
  if (pRVar6 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar6);
  }
LAB_0061bb15:
  if ((param_3 != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__ReleaseStrongReference(param_3), bVar3)) {
    if (param_2 != (int *)0x0) {
      (**(code **)(uintptr_t)(*param_2 + 4))();
    }
    pRVar7 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar7,param_2);
  }
  if (param_5 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_5);
  }
  return;
}





//==== 0061bb60 GenerateDamageRangeChart ====

/* WARNING: Removing unreachable block (ram,0x0061c300) */
/* WARNING: Removing unreachable block (ram,0x0061c30d) */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: struct UIWidget * __thiscall BlackBoxWeaponModule__GenerateDamageRangeChart(class Manager
   *)const  */

UIWidget * __thiscall
BlackBoxWeaponModule__GenerateDamageRangeChart(BlackBoxWeaponModule *this,Manager *param_1)

{
  undefined8 stack0xfffff9fc;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
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
  undefined4 *puVar17;
  LineGraph *pLVar18;
  LocStr *pLVar19;
  Str_L_char_G_ *pSVar20;
  Str_L_char_G_ *pSVar21;
  undefined4 *puVar22;
  int iVar23;
  UIAttributes *pUVar24;
  UIWidget *pUVar25;
  float fStack_4c8;
  undefined4 local_4bc [66];
  undefined4 local_3b4;
  UIAttributes local_3a0;
  Args local_258 [272];
  Color local_148;
  void *local_128 [3];
  void *local_11c;
  void *local_110 [3];
  void *local_104;
  void *local_f8 [3];
  void *local_ec;
  Str_L_char_G_ local_e0;
  Str_L_char_G_ local_d4;
  Str_L_char_G_ local_c8;
  Str_L_char_G_ local_bc;
  Str_L_char_G_ local_b0;
  void *local_a4;
  _func___cdecl_Color_void_ptr *local_a0;
  undefined **local_9c;
  Str_L_char_G_ local_98;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  Str_L_char_G_ local_7c;
  Str_L_char_G_ local_70;
  Str_L_char_G_ local_64;
  BlackBoxWeaponModule *local_58;
  void *local_54;
  _func___cdecl_Color_void_ptr *local_50;
  undefined **local_4c;
  Str_L_char_G_ local_48;
  code *pcStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  Str_L_char_G_ *local_28;
  Str_L_char_G_ *local_24;
  Str_L_char_G_ *local_20;
  undefined4 local_1c;
  void *local_18;
  Str_L_char_G_ SStack_14;
  undefined4 *local_8;
  
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
  bVar4 = false;
  *(uint32_t *)&local_20 = (uint32_t)(uintptr_t)((Str_L_char_G_ *)0x0);
  local_3b4 = 0x61bb80;
  local_58 = this;
  pLVar18 = (LineGraph *)(uintptr_t)(port_op_new(0x278));
  if (pLVar18 == (LineGraph *)0x0) {
    pUVar25 = (UIWidget *)0x0;
  }
  else {
    local_3b4 = 0x61bb9d;
    util__Str_char___Str_char(&local_e0,"LaserIntensityChart YAxis");
    local_3b4 = 0x61bbad;
    util__Str_char___Str_char(&local_bc,"LaserIntensityChart XAxis");
    local_3b4 = 0x61bbbd;
    util__Str_char___Str_char(&local_b0,"LaserIntensityChart Title");
    local_8 = local_4bc;
    pcStack_3c = util__DelegateFactory_L_BlackBoxWeaponModule_Cutil__Range_L_double_G___G___MethodCallerConst_L__public__struct_util__Range_L_double_G____thiscall_BlackBoxWeaponModule__GetLaserChartYRanges_void_const__C0__G_
    ;
    uStack_38 = 0;
    uStack_30 = 0;
    local_98.Length =
         (int)util__DelegateFactory_L_BlackBoxWeaponModule_Cutil__Range_L_double_G___G___MethodCallerConst_L__public__struct_util__Range_L_double_G____thiscall_BlackBoxWeaponModule__GetLaserChartXRanges_void_const__C0__G_
    ;
    fStack_8c = 0.0;
    fStack_88 = 0.0;
    fStack_84 = 0.0;
    fStack_80 = 0.0;
    local_7c.Data = (char *)0x0;
    local_7c.Capacity = 0;
    local_7c.Length = 0;
    local_70.Data = (char *)0x0;
    local_70.Capacity = 0;
    local_70.Length = 0;
    local_64.Data = (char *)0x0;
    local_64.Capacity = 0;
    local_64.Length = 0;
    local_98.Capacity = (int)this;
    local_48.Length = (int)this;
    local_24 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_d4,"MW/m^2");
    fStack_4c8 = 8.975555e-39;
    pLVar19 = (LocStr *)util__LocStr__LocStr((LocStr *)local_128,&local_e0,&local_7c);
    local_28 = util__LocStr__operator__o3(pLVar19);
    *(uint32_t *)&local_20 = (uint32_t)(uintptr_t)((Str_L_char_G_ *)util__Str_char___Str_char(&local_c8,"km"));
    fStack_4c8 = 8.975626e-39;
    pLVar19 = (LocStr *)util__LocStr__LocStr((LocStr *)local_110,&local_bc,&local_70);
    pSVar20 = util__LocStr__operator__o3(pLVar19);
    fStack_4c8 = 8.97567e-39;
    pLVar19 = (LocStr *)util__LocStr__LocStr((LocStr *)local_f8,&local_b0,&local_64);
    pSVar21 = util__LocStr__operator__o3(pLVar19);
    local_1c = 0;
    local_18 = (void *)0x0;
    util__Str_char___Str_char(&SStack_14,pSVar21);
    puVar22 = (undefined4 *)LineGraph__Args__Args__o3(local_258);
    *puVar22 = local_1c;
    puVar22[1] = (undefined4)(uintptr_t)(local_18);
    util__Str_char___operator__o8((Str_L_char_G_ *)(puVar22 + 2),&SStack_14);
    if ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_14.Data !=
        (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0) {
      port_op_delete(SStack_14.Data);
    }
    local_1c = 0;
    local_18 = (void *)0x0;
    util__Str_char___Str_char(&SStack_14,pSVar20);
    puVar22[5] = local_1c;
    puVar22[6] = (undefined4)(uintptr_t)(local_18);
    util__Str_char___operator__o8((Str_L_char_G_ *)(puVar22 + 7),&SStack_14);
    if ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_14.Data !=
        (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0) {
      port_op_delete(SStack_14.Data);
    }
    local_1c = 0;
    local_18 = (void *)0x0;
    util__Str_char___Str_char(&SStack_14,local_20);
    puVar22[10] = local_1c;
    puVar22[0xb] = (undefined4)(uintptr_t)(local_18);
    util__Str_char___operator__o8((Str_L_char_G_ *)(puVar22 + 0xc),&SStack_14);
    if ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_14.Data !=
        (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0) {
      port_op_delete(SStack_14.Data);
    }
    local_1c = 0;
    local_18 = (void *)0x0;
    util__Str_char___Str_char(&SStack_14,local_28);
    puVar22[0xf] = local_1c;
    puVar22[0x10] = (undefined4)(uintptr_t)(local_18);
    util__Str_char___operator__o8((Str_L_char_G_ *)(puVar22 + 0x11),&SStack_14);
    if ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_14.Data !=
        (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0) {
      port_op_delete(SStack_14.Data);
    }
    local_1c = 0;
    local_18 = (void *)0x0;
    util__Str_char___Str_char(&SStack_14,local_24);
    puVar22[0x14] = local_1c;
    puVar22[0x15] = (undefined4)(uintptr_t)(local_18);
    util__Str_char___operator__o8((Str_L_char_G_ *)(puVar22 + 0x16),&SStack_14);
    if ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_14.Data !=
        (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0) {
      port_op_delete(SStack_14.Data);
    }
    puVar17 = local_8;
    puVar22[0x1a] = local_98.Capacity;
    puVar22[0x1b] = local_98.Length;
    puVar22[0x1c] = fStack_8c;
    puVar22[0x1d] = fStack_88;
    puVar22[0x27] = (undefined4)(uintptr_t)(local_58);
    *(ulonglong *)(puVar22 + 0x1e) = CONCAT44(fStack_80,fStack_84);
    puVar22[0x28] = (undefined4)(uintptr_t)(util__DelegateFactory_class_BlackBoxWeaponModule_double_double___MethodCallerConst__public__double___thiscall_BlackBoxWeaponModule__GetDamageChartIntensity_MW__m2_double_const__0);
    *(undefined1 *)(puVar22 + 0x26) = 1;
    puVar22[0x20] = (undefined4)(uintptr_t)(local_48.Length);
    puVar22[0x21] = (undefined4)(uintptr_t)(pcStack_3c);
    puVar22[0x22] = (undefined4)uStack_38;
    puVar22[0x23] = (*(uint32_t*)((char*)&(uStack_38)+4));
    *(undefined8 *)(puVar22 + 0x24) = uStack_30;
    *local_8 = *puVar22;
    puVar17[1] = puVar22[1];
    util__Str_char___Str_char((Str_L_char_G_ *)(puVar17 + 2),(Str_L_char_G_ *)(puVar22 + 2));
    puVar17 = local_8;
    local_8[5] = puVar22[5];
    puVar17[6] = puVar22[6];
    util__Str_char___Str_char((Str_L_char_G_ *)(puVar17 + 7),(Str_L_char_G_ *)(puVar22 + 7));
    puVar17 = local_8;
    local_8[10] = puVar22[10];
    puVar17[0xb] = puVar22[0xb];
    util__Str_char___Str_char((Str_L_char_G_ *)(puVar17 + 0xc),(Str_L_char_G_ *)(puVar22 + 0xc));
    puVar17 = local_8;
    local_8[0xf] = puVar22[0xf];
    puVar17[0x10] = puVar22[0x10];
    util__Str_char___Str_char((Str_L_char_G_ *)(puVar17 + 0x11),(Str_L_char_G_ *)(puVar22 + 0x11));
    puVar17 = local_8;
    local_8[0x14] = puVar22[0x14];
    puVar17[0x15] = puVar22[0x15];
    util__Str_char___Str_char((Str_L_char_G_ *)(puVar17 + 0x16),(Str_L_char_G_ *)(puVar22 + 0x16));
    uVar1 = puVar22[0x1b];
    uVar2 = puVar22[0x1c];
    uVar3 = puVar22[0x1d];
    puVar17[0x1a] = puVar22[0x1a];
    puVar17[0x1b] = uVar1;
    puVar17[0x1c] = uVar2;
    puVar17[0x1d] = uVar3;
    *(undefined8 *)(puVar17 + 0x1e) = *(undefined8 *)(puVar22 + 0x1e);
    uVar1 = puVar22[0x21];
    uVar2 = puVar22[0x22];
    uVar3 = puVar22[0x23];
    puVar17[0x20] = puVar22[0x20];
    puVar17[0x21] = uVar1;
    puVar17[0x22] = uVar2;
    puVar17[0x23] = uVar3;
    *(undefined8 *)(puVar17 + 0x24) = *(undefined8 *)(puVar22 + 0x24);
    *(undefined1 *)(puVar17 + 0x26) = *(undefined1 *)(puVar22 + 0x26);
    *(undefined1 *)((int)puVar17 + 0x99) = *(undefined1 *)((int)puVar22 + 0x99);
    *(undefined1 *)((int)puVar17 + 0x9a) = *(undefined1 *)((int)puVar22 + 0x9a);
    puVar17[0x27] = puVar22[0x27];
    puVar17[0x28] = puVar22[0x28];
    puVar17[0x29] = puVar22[0x29];
    puVar17[0x2a] = puVar22[0x2a];
    *(undefined8 *)(puVar17 + 0x2b) = *(undefined8 *)(puVar22 + 0x2b);
    puVar17[0x2d] = puVar22[0x2d];
    puVar17[0x2e] = puVar22[0x2e];
    puVar17[0x2f] = puVar22[0x2f];
    util__Darray_L_util__Str_L_char_G___G___Darray_L_util__Str_L_char_G___G_
              ((Darray_L_util__Str_L_char_G___G_ *)(puVar17 + 0x30),
               (Darray_L_class_util__Str_L_char_G___G_ *)(puVar22 + 0x30));
    puVar17[0x34] = puVar22[0x34];
    puVar17[0x35] = puVar22[0x35];
    util__Darray_L_Body__RadialImpulse_G___Darray_L_Body__RadialImpulse_G_
              ((Darray_L_Body__RadialImpulse_G_ *)(puVar17 + 0x36),
               (Darray_L_struct_Body__RadialImpulse_G_ *)(puVar22 + 0x36));
    puVar17[0x3a] = puVar22[0x3a];
    puVar17[0x3b] = puVar22[0x3b];
    util__Darray_L_Body__RadialImpulse_G___Darray_L_Body__RadialImpulse_G_
              ((Darray_L_Body__RadialImpulse_G_ *)(puVar17 + 0x3c),
               (Darray_L_struct_Body__RadialImpulse_G_ *)(puVar22 + 0x3c));
    puVar17[0x40] = puVar22[0x40];
    puVar17[0x41] = puVar22[0x41];
    puVar17[0x42] = puVar22[0x42];
    puVar17[0x43] = puVar22[0x43];
    iVar23 = (int)(uintptr_t) util__Color__Color(&local_148,Preset__Green,1.0);
    *(uint32_t *)&local_a4 = (uint32_t)(uintptr_t)((void *)0x0);
    local_a0 = (_func___cdecl_Color_void_ptr *)0x0;
    local_9c = &vftable_5;
    util__Str_char___Str_char(&local_98,(Str_L_char_G_ *)(iVar23 + 4));
    fStack_8c = *(float *)(iVar23 + 0x10);
    fStack_88 = *(float *)(iVar23 + 0x14);
    fStack_84 = *(float *)(iVar23 + 0x18);
    fStack_80 = *(float *)(iVar23 + 0x1c);
    local_9c = &vftable_59;
    local_18 = (void *)0x0;
    SStack_14.Data = (char *)0x0;
    SStack_14.Capacity = 0;
    SStack_14.Length = 200;
    local_28 = (Str_L_char_G_ *)(uintptr_t)*(undefined4 *)&((fStack_84));
    local_24 = (Str_L_char_G_ *)(uintptr_t)*(undefined4 *)&((fStack_88));
    *(uint32_t *)&(local_20) = *(uint32_t *)&(fStack_80);
    local_8 = (undefined4 *)(uintptr_t)(*(undefined4 *)&(fStack_8c));
    pUVar24 = (UIAttributes *)UIAttributes__UIAttributes(&local_3a0,param_1);
    uStack_38 = 0x3ff0000000000000;
    uStack_30 = 0;
    local_48.Length = (int)(uintptr_t)(0);
    (pUVar24->DesiredSize).Getter.Callee = local_18;
    (pUVar24->DesiredSize).Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_14.Data;
    (pUVar24->DesiredSize).Value.X = SStack_14.Capacity;
    (pUVar24->DesiredSize).Value.Y = SStack_14.Length;
    pcStack_3c = (code *)0x0;
    (pUVar24->FillProportion).Getter.Callee = (void *)0x0;
    (pUVar24->FillProportion).Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0;
    *(undefined4 *)&(pUVar24->FillProportion).Value.X = 0;
    *(undefined4 *)((int)&(pUVar24->FillProportion).Value.X + 4) = 0x3ff00000;
    (pUVar24->FillProportion).Value.Y = 0.0;
    memcpy(&local_54, &local_a4, 16);
    *(uint32_t *)&local_50 = (uint32_t)(uintptr_t)(local_a0);
    *(uint32_t *)&local_4c = (uint32_t)(uintptr_t)(&vftable_5);
    util__Str_char___Str_char(&local_48,&local_98);
    pcStack_3c = (code *)local_8;
    (pUVar24->ForegroundColor).Data.Getter.Callee = local_54;
    (pUVar24->ForegroundColor).Data.Getter.CallbackFunction = local_50;
    uStack_38 = CONCAT44(local_28,local_24);
    *(uint32_t *)&local_4c = (uint32_t)(uintptr_t)(&vftable_59);
    (*(uint40_t*)&(uStack_30)) = CONCAT14(1,local_20);
    util__Str_char___operator__o8
              ((Str_L_char_G_ *)&(pUVar24->ForegroundColor).Data.Value._pad_0x4_1,&local_48);
    (pUVar24->ForegroundColor).Data.Value.Hue_degrees = (double)(uintptr_t)((float)(int)(uintptr_t)(local_8));
    (pUVar24->ForegroundColor).Data.Value.Saturation = (double)(uintptr_t)((float)(int)(uintptr_t)(local_24));
    (pUVar24->ForegroundColor).Data.Value.Value = (double)(uintptr_t)((float)(int)(uintptr_t)(local_28));
    (pUVar24->ForegroundColor).Data.Value.Alpha = (double)(uintptr_t)((float)(int)(uintptr_t)(local_20));
    (pUVar24->ForegroundColor).IsValidData = true;
    if (local_48.Data != (char *)0x0) {
      port_op_delete(local_48.Data);
    }
    if (local_98.Data != (char *)0x0) {
      port_op_delete(local_98.Data);
    }
    UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff9fc,pUVar24);
    pUVar25 = (UIWidget *)LineGraph__LineGraph(pLVar18);
    bVar16 = true;
    bVar15 = true;
    bVar14 = true;
    bVar13 = true;
    bVar12 = true;
    bVar11 = true;
    bVar10 = true;
    bVar9 = true;
    bVar8 = true;
    bVar7 = true;
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
  }
  if (bVar11) {
    UIAttributes___UIAttributes(&local_3a0);
  }
  if ((bVar12) &&
     (local_148._pad_0x0_0 = (int)&vftable_5,
     (void *)local_148._pad_0x4_1 != (void *)0x0)) {
    local_3b4 = 0x61c221;
    port_op_delete((void *)local_148._pad_0x4_1);
    local_148._pad_0x4_1 = 0;
  }
  if (bVar13) {
    LineGraph__Args___Args(local_258);
  }
  if (bVar14) {
    if (local_ec != (void *)0x0) {
      local_3b4 = 0x61c265;
      port_op_delete(local_ec);
      local_ec = (void *)0x0;
    }
    if (local_f8[0] != (void *)0x0) {
      local_3b4 = 0x61c282;
      port_op_delete(local_f8[0]);
      local_f8[0] = (void *)0x0;
    }
  }
  if ((bVar15) && (local_64.Data != (char *)0x0)) {
    local_3b4 = 0x61c2aa;
    port_op_delete(local_64.Data);
    local_64.Data = (char *)0x0;
  }
  if (bVar16) {
    if (local_104 != (void *)0x0) {
      local_3b4 = 0x61c2d2;
      port_op_delete(local_104);
      local_104 = (void *)0x0;
    }
    if (local_110[0] != (void *)0x0) {
      local_3b4 = 0x61c2ef;
      port_op_delete(local_110[0]);
      local_110[0] = (void *)0x0;
    }
  }
  if ((bVar5) && (local_c8.Data != (char *)0x0)) {
    local_3b4 = 0x61c335;
    port_op_delete(local_c8.Data);
    local_c8.Data = (char *)0x0;
  }
  if (bVar6) {
    if (local_11c != (void *)0x0) {
      local_3b4 = 0x61c35a;
      port_op_delete(local_11c);
      local_11c = (void *)0x0;
    }
    if (local_128[0] != (void *)0x0) {
      local_3b4 = 0x61c377;
      port_op_delete(local_128[0]);
      local_128[0] = (void *)0x0;
    }
  }
  if ((bVar7) && (local_7c.Data != (char *)0x0)) {
    local_3b4 = 0x61c399;
    port_op_delete(local_7c.Data);
    local_7c.Data = (char *)0x0;
  }
  if ((bVar8) && (local_d4.Data != (char *)0x0)) {
    local_3b4 = 0x61c3bb;
    port_op_delete(local_d4.Data);
    local_d4.Data = (char *)0x0;
  }
  if ((bVar9) && (local_b0.Data != (char *)0x0)) {
    local_3b4 = 0x61c3e0;
    port_op_delete(local_b0.Data);
    local_b0.Data = (char *)0x0;
  }
  if ((bVar10) && (local_bc.Data != (char *)0x0)) {
    local_3b4 = 0x61c405;
    port_op_delete(local_bc.Data);
    local_bc.Data = (char *)0x0;
  }
  if ((local_e0.Data != (char *)0x0) && (bVar4)) {
    local_3b4 = 0x61c427;
    port_op_delete(local_e0.Data);
  }
  return pUVar25;
}

//==== 0061c470 GetDamageChartIntensity_MW__m2 ====

/* public: double __thiscall BlackBoxWeaponModule__GetDamageChartIntensity_MW__m2(double)const  */

double __thiscall
BlackBoxWeaponModule__GetDamageChartIntensity_MW__m2(BlackBoxWeaponModule *this,double param_1)

{
  float10 fVar1;
  double dVar2;
  
  dVar2 = 0.1;
  if (0.1 <= param_1) {
    dVar2 = param_1;
  }
  if ((this->Turret).Data.field0_0x0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  fVar1 = (float10)(**(code **)(this->_pad_0x0_0 + 0x160))(dVar2);
  dVar2 = Physics__GetGaussianBeamEdgeLossCorrection_Percent();
  return (dVar2 * (((this->LaserBeam).Data.CoolantMassFlowRate_kg__s *
                   *(double *)&(this->Projectile).Data._pad_0x8_2) /
                  ((double)fVar1 * 3.141592653589793 * (double)fVar1))) / 1000000.0;
}

//==== 0061c510 GetLaserChartXRanges ====


/* public: struct util__Range_L_double_G_ 
   BlackBoxWeaponModule__GetLaserChartXRanges(void)const  */

Range_L_double_G_ * 
BlackBoxWeaponModule__GetLaserChartXRanges
          (BlackBoxWeaponModule *this,Range_L_double_G_ *__return_storage_ptr__)

{
  double dVar1;
  
  if ((this->Turret).Data.field0_0x0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar1 = *(double *)&(this->Turret).Data.field8_0x8;
  __return_storage_ptr__->Lower = 0.0;
  __return_storage_ptr__->Upper = dVar1;
  if (dVar1 < 0.0) {
    __return_storage_ptr__->Lower = dVar1;
    __return_storage_ptr__->Upper = 0.0;
  }
  return __return_storage_ptr__;
}





//==== 0061c570 GetLaserChartYRanges ====

/* public: struct util__Range_L_double_G_ 
   BlackBoxWeaponModule__GetLaserChartYRanges(void)const  */

Range_L_double_G_ * 
BlackBoxWeaponModule__GetLaserChartYRanges
          (BlackBoxWeaponModule *this,Range_L_double_G_ *__return_storage_ptr__)

{
  char cVar1;
  float10 fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  cVar1 = (this->Turret).Data.field0_0x0;
  if (cVar1 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                    "IsValid()",(char *)0x0);
    DebugBreak();
    cVar1 = (this->Turret).Data.field0_0x0;
  }
  dVar3 = *(double *)&(this->Turret).Data.field8_0x8 * 0.1;
  dVar4 = 1.0;
  if (1.0 <= dVar3) {
    dVar4 = dVar3;
  }
  if (cVar1 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  fVar2 = (float10)(**(code **)(this->_pad_0x0_0 + 0x160))(dVar4);
  dVar5 = Physics__GetGaussianBeamEdgeLossCorrection_Percent();
  dVar4 = (this->LaserBeam).Data.CoolantMassFlowRate_kg__s;
  dVar3 = *(double *)&(this->Projectile).Data._pad_0x8_2;
  __return_storage_ptr__->Lower = 0.0;
  dVar4 = (dVar5 * ((dVar4 * dVar3) / ((double)fVar2 * 3.141592653589793 * (double)fVar2))) /
          1000000.0;
  __return_storage_ptr__->Upper = dVar4;
  if (dVar4 < 0.0) {
    __return_storage_ptr__->Lower = dVar4;
    __return_storage_ptr__->Upper = 0.0;
  }
  return __return_storage_ptr__;
}

//==== 0061c680 StaticFactory_0061c680 ====

/* public: static class util__Reflectable * __cdecl
   BlackBoxLaserInfoSubModule__ReflectionInfoStruct_struct_BlackBoxLaserInfoSubModule___StaticFactory(void) */

Reflectable * __cdecl
BlackBoxLaserInfoSubModule__ReflectionInfoStruct_struct_BlackBoxLaserInfoSubModule___StaticFactory__o2(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x50));
  if (pRVar1 != (Reflectable *)0x0) {
    memset(pRVar1,0,0x50);
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_273;
  }
  return (Reflectable *)0x0;
}

//==== 0061c6d0 StaticFactory_0061c6d0 ====

/* public: static class util__Reflectable * __cdecl BlackBoxWeaponModule__ReflectionInfoStruct_L_class_BlackBoxWeaponModule_G___StaticFactory(void) */

Reflectable * __cdecl
BlackBoxWeaponModule__ReflectionInfoStruct_class_BlackBoxWeaponModule___StaticFactory(void)

{
  bool *pbVar1;
  Module *this;
  
  this = (Module *)(uintptr_t)(port_op_new(0x378));
  if (this != (Module *)0x0) {
    memset(this,0,0x378);
    Module__Module(this);
    *(undefined1 *)&this[1].GetTotalPowerUsage_W_MemoizedValue.Data = 0;
    *(undefined8 *)&this[1].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    *(undefined4 *)&this[1].GetTotalPowerUsage_W_MemoizedValue.IsValidData = 0;
  *(undefined4 *)((char *)&this[1].GetTotalPowerUsage_W_MemoizedValue + 0xc) = 0;
    this[1].Models._pad_0x0_0 = 0;
    this[1].Models.Data = (SharedPtr_L_GameModel_G_ *)0x0;
    *(undefined ***)&this[1].GetTotalPowerUsage_W_MemoizedValue.IsValidData =
         &vftable_166;
  *(undefined4 *)((char *)&this[1].GetTotalPowerUsage_W_MemoizedValue + 0xc) = 0;
    this[1].Models._pad_0x0_0 = 0;
    this[1].Models.Data = (SharedPtr_L_GameModel_G_ *)0x0;
    this[1].Models.Size = 0;
    this[1].Models.Capacity = 0;
    this[1].UsesCustomName = false;
    this[2]._pad_0x0_0 = 0;
    this[2]._pad_0x4_1 = 0;
    *(undefined1 *)&this[2]._pad_0x8_2 = 0;
    this->_pad_0x0_0 = (int)&vftable_for_EditorReflectable__26;
    *(undefined4 *)&(this->GetTotalPowerUsage_W_MemoizedValue).field_0xc = (undefined4)(uintptr_t)vftable_for_util__RTTIBaseClass__25;
    this[2].ModuleMemoizationHandlerInstance.ResetFunctions.Data = (pmf_27707b45 *)0x0;
    this[2].ModuleMemoizationHandlerInstance.ResetFunctions.Size = 0;
    this[2].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    *(undefined4 *)&this[2].ModuleMemoizationHandlerInstance = (undefined4)(uintptr_t) (undefined **)(0);
    *(undefined4 *)&this[2].GetTotalPowerUsage_W_MemoizedValue.Data = 0;
    *(undefined4 *)((int)&this[2].GetTotalPowerUsage_W_MemoizedValue.Data + 4) = 0;
    *(undefined4 *)&this[2].GetTotalPowerUsage_W_MemoizedValue.IsValidData = 0;
  *(undefined4 *)((char *)&this[2].GetTotalPowerUsage_W_MemoizedValue + 0xc) = 0;
    this[2].Models._pad_0x0_0 = 0;
    this[2].Models.Data = (SharedPtr_L_GameModel_G_ *)0x0;
    MassProjectileSubModule__MassProjectileSubModule
              ((MassProjectileSubModule *)
               &this[3].ModuleMemoizationHandlerInstance.ResetFunctions.Data);
    pbVar1 = &this[4].GetTotalPowerUsage_W_MemoizedValue.IsValidData;
    *(undefined1 *)&this[4].GetTotalPowerUsage_W_MemoizedValue.Data = 0;
    memset(pbVar1,0,0x50);
  *(undefined4 *)((char *)&this[4].GetTotalPowerUsage_W_MemoizedValue + 0xc) = 0;
    this[4].Models._pad_0x0_0 = 0;
    this[4].Models.Data = (SharedPtr_L_GameModel_G_ *)0x0;
    *(undefined ***)pbVar1 = &vftable_273;
    this[5].GetTotalPowerUsage_W_MemoizedValue.IsValidData = false;
    TurretSubModule__TurretSubModule((TurretSubModule *)&this[5].Models.Size);
    this[5].Models.Size = (int)&vftable_237;
    *(undefined1 *)&this[9]._pad_0x0_0 = 0;
    AmmoBaySubModule__AmmoBaySubModule((AmmoBaySubModule *)&this[9]._pad_0x8_2);
    *(undefined1 *)&this[0xb]._pad_0x0_0 = 0;
    return (Reflectable *)this;
  }
  return (Reflectable *)0x0;
}

//==== 0061c830 StaticGetMemberByIndex_0061c830 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   BlackBoxLaserInfoSubModule__ReflectionInfoStruct_struct_BlackBoxLaserInfoSubModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
BlackBoxLaserInfoSubModule__ReflectionInfoStruct_struct_BlackBoxLaserInfoSubModule___StaticGetMemberByIndex(ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_3ca195e8__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_3ca195e8__thread_safe_static_guard_0__);
    if ( cde_l2_3ca195e8__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_03b6f7cc_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_009738f4 = 0;
      _DAT_009738f8 = 0;
      _DAT_009738fc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973900,"Unused");
      _DAT_0097390c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973910,"Wavelength_nm");
      _DAT_0097391c = 4;
      _DAT_00973920 = 0x10;
      _DAT_00973924 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973928,"double");
      _DAT_00973934 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973938,"Efficiency_Percent");
      _DAT_00973944 = 4;
      _DAT_00973948 = 0x18;
      _DAT_0097394c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973950,"double");
      _DAT_0097395c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973960,"ApertureRadius_m");
      _DAT_0097396c = 4;
      _DAT_00973970 = 0x20;
      _DAT_00973974 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973978,"double");
      _DAT_00973984 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973988,"BeamQualityFactor");
      _DAT_00973994 = 4;
      _DAT_00973998 = 0x28;
      _DAT_0097399c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009739a0,"double");
      _DAT_009739ac = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009739b0,"Coolant");
      _DAT_009739bc = 8;
      _DAT_009739c0 = 0x30;
      _DAT_009739c4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009739c8,"Material");
      _DAT_009739d4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009739d8,"CoolantMassFlowRate_kg__s");
      _DAT_009739e4 = 4;
      _DAT_009739e8 = 0x38;
      _DAT_009739ec = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009739f0,"double");
      _DAT_009739fc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973a00,"RadiatorTemperature_K");
      _DAT_00973a0c = 4;
      _DAT_00973a10 = 0x40;
      _DAT_00973a14 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973a18,"double");
      _DAT_00973a24 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973a28,"EngagementRange_km");
      _DAT_00973a34 = 4;
      _DAT_00973a38 = 0x48;
      _DAT_00973a3c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973a40,"double");
      _DAT_00973a4c = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_BlackBoxLaserInfoSubModule__ReflectionInfoStruct_struct_BlackBoxLaserInfoSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_3ca195e8__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_03b6f7cc_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_009738f4 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_009738f8 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_009738fc + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_00973900 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0097390c)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0097390d)[iVar1];
  return __return_storage_ptr__;
}





//==== 0061cb40 StaticGetMemberByIndex_0061cb40 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   BlackBoxWeaponModule__ReflectionInfoStruct_class_BlackBoxWeaponModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
BlackBoxWeaponModule__ReflectionInfoStruct_class_BlackBoxWeaponModule___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_83499188__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_83499188__thread_safe_static_guard_0__);
    if ( cde_l2_83499188__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_b821bdee_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_009734ac = 0;
      _DAT_009734b0 = 0;
      _DAT_009734b4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009734b8,"Unused");
      _DAT_009734c4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009734c8,"SteamWorkshopID");
      _DAT_009734d4 = 6;
      _DAT_009734d8 = 0x10;
      _DAT_009734dc = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009734e0,"AStr");
      _DAT_009734ec = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009734f0,"Description");
      _DAT_009734fc = 6;
      _DAT_00973500 = 0x20;
      _DAT_00973504 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973508,"AStr");
      _DAT_00973514 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973518,"WeaponName");
      _DAT_00973524 = 6;
      _DAT_00973528 = 0xb8;
      _DAT_0097352c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973530,"AStr");
      _DAT_0097353c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973540,"ModelFileName");
      _DAT_0097354c = 6;
      _DAT_00973550 = 0xc4;
      _DAT_00973554 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973558,"AStr");
      _DAT_00973564 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973568,"Dimensions");
      _DAT_00973574 = 0xb;
      _DAT_00973578 = 0xd0;
      _DAT_0097357c = 0x10;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973580,"ModuleCylinder");
      _DAT_0097358c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973590,"Mass_kg");
      _DAT_0097359c = 4;
      _DAT_009735a0 = 0xe0;
      _DAT_009735a4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009735a8,"double");
      _DAT_009735b4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009735b8,"PrimaryComposition");
      _DAT_009735c4 = 8;
      _DAT_009735c8 = 0xe8;
      _DAT_009735cc = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009735d0,"Material");
      _DAT_009735dc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009735e0,"PowerConsumption_W");
      _DAT_009735ec = 4;
      _DAT_009735f0 = 0xf0;
      _DAT_009735f4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009735f8,"double");
      _DAT_00973604 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973608,"MuzzleVelocity_km__s");
      _DAT_00973614 = 4;
      _DAT_00973618 = 0xf8;
      _DAT_0097361c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973620,"double");
      _DAT_0097362c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973630,"Accuracy_radians");
      _DAT_0097363c = 4;
      _DAT_00973640 = 0x100;
      _DAT_00973644 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973648,"double");
      _DAT_00973654 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973658,"Projectile");
      _DAT_00973664 = 10;
      _DAT_00973668 = 0x108;
      _DAT_0097366c = 0x60;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973670,"MassProjectileSubModule");
      _DAT_0097367c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973680,"LaserBeam");
      _DAT_0097368c = 10;
      _DAT_00973690 = 0x170;
      _DAT_00973694 = 0x50;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973698,"BlackBoxLaserInfoSubModule");
      _DAT_009736a4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009736a8,"ReloadTime_s");
      _DAT_009736b4 = 4;
      _DAT_009736b8 = 0x1c8;
      _DAT_009736bc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009736c0,"double");
      _DAT_009736cc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009736d0,"Turret");
      _DAT_009736dc = 10;
      _DAT_009736e0 = 0x1d0;
      _DAT_009736e4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009736e8,"ExtrudableTurretSubModule");
      _DAT_009736f4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009736f8,"AttachedAmmoBay");
      _DAT_00973704 = 10;
      _DAT_00973708 = 0x2d8;
      _DAT_0097370c = 0x98;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973710,"AmmoBaySubModule");
      _DAT_0097371c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973720,"TargetsShips");
      _DAT_0097372c = 1;
      _DAT_00973730 = 0xb0;
      _DAT_00973734 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973738,"bool");
      _DAT_00973744 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973748,"TargetsShots");
      _DAT_00973754 = 1;
      _DAT_00973758 = 0xb1;
      _DAT_0097375c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973760,"bool");
      _DAT_0097376c = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_BlackBoxWeaponModule__ReflectionInfoStruct_class_BlackBoxWeaponModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_83499188__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_b821bdee_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_009734ac + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_009734b0 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_009734b4 + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_009734b8 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_009734c4)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_009734c5)[iVar1];
  return __return_storage_ptr__;
}





//==== 0061d0c0 StaticGetMemberCount_0061d0c0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl BlackBoxLaserInfoSubModule__ReflectionInfoStruct_struct_BlackBoxLaserInfoSubModule___StaticGetMemberCount(void) */

int __cdecl
BlackBoxLaserInfoSubModule__ReflectionInfoStruct_struct_BlackBoxLaserInfoSubModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_0b65082c__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_0b65082c__thread_safe_static_guard_0__);
    if ( cde_l2_0b65082c__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_039a7640_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00973784 = 0;
      _DAT_00973788 = 0;
      _DAT_0097378c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973790,"Unused");
      _DAT_0097379c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009737a0,"Wavelength_nm");
      _DAT_009737ac = 4;
      _DAT_009737b0 = 0x10;
      _DAT_009737b4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009737b8,"double");
      _DAT_009737c4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009737c8,"Efficiency_Percent");
      _DAT_009737d4 = 4;
      _DAT_009737d8 = 0x18;
      _DAT_009737dc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009737e0,"double");
      _DAT_009737ec = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009737f0,"ApertureRadius_m");
      _DAT_009737fc = 4;
      _DAT_00973800 = 0x20;
      _DAT_00973804 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973808,"double");
      _DAT_00973814 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973818,"BeamQualityFactor");
      _DAT_00973824 = 4;
      _DAT_00973828 = 0x28;
      _DAT_0097382c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973830,"double");
      _DAT_0097383c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973840,"Coolant");
      _DAT_0097384c = 8;
      _DAT_00973850 = 0x30;
      _DAT_00973854 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973858,"Material");
      _DAT_00973864 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973868,"CoolantMassFlowRate_kg__s");
      _DAT_00973874 = 4;
      _DAT_00973878 = 0x38;
      _DAT_0097387c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973880,"double");
      _DAT_0097388c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973890,"RadiatorTemperature_K");
      _DAT_0097389c = 4;
      _DAT_009738a0 = 0x40;
      _DAT_009738a4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009738a8,"double");
      _DAT_009738b4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009738b8,"EngagementRange_km");
      _DAT_009738c4 = 4;
      _DAT_009738c8 = 0x48;
      _DAT_009738cc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009738d0,"double");
      _DAT_009738dc = 0;
      atexit( private__static_int_const___cdecl_BlackBoxLaserInfoSubModule__ReflectionInfoStruct_struct_BlackBoxLaserInfoSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_0b65082c__thread_safe_static_guard_0__);
    }
  }
  return 9;
}





//==== 0061d390 StaticGetMemberCount_0061d390 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl BlackBoxWeaponModule__ReflectionInfoStruct_class_BlackBoxWeaponModule___StaticGetMemberCount(void) */

int __cdecl
BlackBoxWeaponModule__ReflectionInfoStruct_class_BlackBoxWeaponModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_53b39bc6__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_53b39bc6__thread_safe_static_guard_0__);
    if ( cde_l2_53b39bc6__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_9943d9b0_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_009731d4 = 0;
      _DAT_009731d8 = 0;
      _DAT_009731dc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009731e0,"Unused");
      _DAT_009731ec = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009731f0,"SteamWorkshopID");
      _DAT_009731fc = 6;
      _DAT_00973200 = 0x10;
      _DAT_00973204 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973208,"AStr");
      _DAT_00973214 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973218,"Description");
      _DAT_00973224 = 6;
      _DAT_00973228 = 0x20;
      _DAT_0097322c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973230,"AStr");
      _DAT_0097323c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973240,"WeaponName");
      _DAT_0097324c = 6;
      _DAT_00973250 = 0xb8;
      _DAT_00973254 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973258,"AStr");
      _DAT_00973264 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973268,"ModelFileName");
      _DAT_00973274 = 6;
      _DAT_00973278 = 0xc4;
      _DAT_0097327c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973280,"AStr");
      _DAT_0097328c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973290,"Dimensions");
      _DAT_0097329c = 0xb;
      _DAT_009732a0 = 0xd0;
      _DAT_009732a4 = 0x10;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009732a8,"ModuleCylinder");
      _DAT_009732b4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009732b8,"Mass_kg");
      _DAT_009732c4 = 4;
      _DAT_009732c8 = 0xe0;
      _DAT_009732cc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009732d0,"double");
      _DAT_009732dc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009732e0,"PrimaryComposition");
      _DAT_009732ec = 8;
      _DAT_009732f0 = 0xe8;
      _DAT_009732f4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009732f8,"Material");
      _DAT_00973304 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973308,"PowerConsumption_W");
      _DAT_00973314 = 4;
      _DAT_00973318 = 0xf0;
      _DAT_0097331c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973320,"double");
      _DAT_0097332c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973330,"MuzzleVelocity_km__s");
      _DAT_0097333c = 4;
      _DAT_00973340 = 0xf8;
      _DAT_00973344 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973348,"double");
      _DAT_00973354 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973358,"Accuracy_radians");
      _DAT_00973364 = 4;
      _DAT_00973368 = 0x100;
      _DAT_0097336c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973370,"double");
      _DAT_0097337c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973380,"Projectile");
      _DAT_0097338c = 10;
      _DAT_00973390 = 0x108;
      _DAT_00973394 = 0x60;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973398,"MassProjectileSubModule");
      _DAT_009733a4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009733a8,"LaserBeam");
      _DAT_009733b4 = 10;
      _DAT_009733b8 = 0x170;
      _DAT_009733bc = 0x50;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009733c0,"BlackBoxLaserInfoSubModule");
      _DAT_009733cc = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009733d0,"ReloadTime_s");
      _DAT_009733dc = 4;
      _DAT_009733e0 = 0x1c8;
      _DAT_009733e4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009733e8,"double");
      _DAT_009733f4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009733f8,"Turret");
      _DAT_00973404 = 10;
      _DAT_00973408 = 0x1d0;
      _DAT_0097340c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973410,"ExtrudableTurretSubModule");
      _DAT_0097341c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973420,"AttachedAmmoBay");
      _DAT_0097342c = 10;
      _DAT_00973430 = 0x2d8;
      _DAT_00973434 = 0x98;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973438,"AmmoBaySubModule");
      _DAT_00973444 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973448,"TargetsShips");
      _DAT_00973454 = 1;
      _DAT_00973458 = 0xb0;
      _DAT_0097345c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973460,"bool");
      _DAT_0097346c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973470,"TargetsShots");
      _DAT_0097347c = 1;
      _DAT_00973480 = 0xb1;
      _DAT_00973484 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973488,"bool");
      _DAT_00973494 = 0;
      atexit( private__static_int_const___cdecl_BlackBoxWeaponModule__ReflectionInfoStruct_class_BlackBoxWeaponModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_53b39bc6__thread_safe_static_guard_0__);
    }
  }
  return 0x12;
}





//==== 0061d8c0 StaticGetReflectionInfo_0061d8c0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct BlackBoxLaserInfoSubModule__ReflectionInfoStruct_L_struct_BlackBoxLaserInfoSubModule_G_ * __cdecl BlackBoxLaserInfoSubModule__StaticGetReflectionInfo(void)
    */

ReflectionInfoStruct_L_struct_BlackBoxLaserInfoSubModule_G_ * __cdecl
BlackBoxLaserInfoSubModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_04c61cda__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_04c61cda__thread_safe_static_guard_0__);
    if ( cde_l2_04c61cda__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_e61b2b24_ReflectionInfo) = &vftable_274;
      _Init_thread_footer(& cde_l2_04c61cda__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_e61b2b24_ReflectionInfo;
}





//==== 0061d920 StaticGetReflectionInfo_0061d920 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct BlackBoxWeaponModule__ReflectionInfoStruct_L_classBlackBoxWeaponModule_G_ *
   __cdecl BlackBoxWeaponModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_BlackBoxWeaponModule_G_ * __cdecl
BlackBoxWeaponModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_3ae175ff__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_3ae175ff__thread_safe_static_guard_0__);
    if ( cde_l2_3ae175ff__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_4d70c1da_ReflectionInfo) = &vftable_275;
      _Init_thread_footer(& cde_l2_3ae175ff__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_4d70c1da_ReflectionInfo;
}





//==== 0061d9a0 GetClassID_0061d9a0 ====


/* public: virtual unsigned long __thiscall BlastLauncherModule__GetClassID(void)const  */

ulong __thiscall BlastLauncherModule__GetClassID(BlastLauncherModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_37add954__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_37add954__thread_safe_static_guard_0__);
    if ( cde_l2_37add954__thread_safe_static_guard_0__ == -1) {
       cde_l2r_9af776d9_ID = util__GetHash("BlastLauncherModule");
      _Init_thread_footer(& cde_l2_37add954__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2r_9af776d9_ID;
}





//==== 0061da00 DememoizeAll_0061da00 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall RailgunModule__DememoizeAll(void)const  */

void __thiscall RailgunModule__DememoizeAll(RailgunModule *this)

{
  undefined8 stack0xfffffffc;
  int *piVar1;
  Maybe_L_BallisticExitCharacteristics_G_ *pMVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  Module__DememoizeAll((Module *)this);
  piVar1 = &this->_pad_0x80_32;
  local_c = 0;
  iVar3 = (**(code **)(this->_pad_0x80_32 + 0xc))();
  if (local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)*piVar1)(&local_c);
      (*(code *)*puVar4)();
      local_c = local_c + 1;
      iVar3 = (**(code **)(uintptr_t)(*piVar1 + 0xc))();
    } while (local_c < iVar3);
  }
  (**(code **)(uintptr_t)(*piVar1 + 0x10))();
  pMVar2 = &this->GetFiringCharacteristics_MemoizedValue;
  local_c = 0;
  iVar3 = (**(code **)(*(int *)&(this->GetFiringCharacteristics_MemoizedValue).Data.Velocity_km__s +
                      0xc))();
  if (local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)&((pMVar2->Data).Velocity_km__s))(&local_c);
      (*(code *)*puVar4)();
      local_c = local_c + 1;
      iVar3 = (**(code **)((int)((pMVar2->Data).Velocity_km__s + 0xc)))();
    } while (local_c < iVar3);
  }
  (**(code **)((int)((pMVar2->Data).Velocity_km__s + 0x10)))();
  return;
}

//==== 0061dac0 GetReflectionDependencies_0061dac0 ====


/* public: virtual class util__Darray_L_classutil__Reflectable_P_G_ __thiscall
   BlastLauncherModule__GetReflectionDependencies(void)const  */

Darray_L_class_util__Reflectable_P_G_ * __thiscall
BlastLauncherModule__GetReflectionDependencies(BlastLauncherModule *this)

{
  undefined8 stack0x00000004;
  undefined4 uVar1;
  Darray_L_class_util__Reflectable_P_G_ *this_00;
  bool bVar2;
  Darray_L_class_util__Reflectable_P_G_ *in_stack_00000004;
  
  this_00 = in_stack_00000004;
  in_stack_00000004 = (Darray_L_class_util__Reflectable_P_G_ *)0x1;
  *(undefined4 *)this_00 = 0;
  *(undefined4 *)(this_00 + 4) = 0;
  *(undefined4 *)(this_00 + 8) = 0;
  *(undefined4 *)(this_00 + 0xc) = 0;
  *(undefined ***)this_00 = (undefined **)(&vftable_6);
  *(undefined4 *)(this_00 + 4) = 0;
  *(undefined4 *)(this_00 + 8) = 0;
  *(undefined4 *)(this_00 + 0xc) = 0;
  uVar1 = *(undefined4 *)(this + 0x140);
  util__Darray_class_util__Reflectable____SetSize(this_00,(int *)&stack0x00000004);
  bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                    ((Darray_L_enum_GraphicsResource__Type_G_ *)this_00,0);
  if (bVar2) {
    *(undefined4 *)(*(int *)(this_00 + 4) + -4 + *(int *)(this_00 + 8) * 4) = uVar1;
  }
  return this_00;
}





//==== 0061db20 GetGeneratedName_0061db20 ====


/* public: virtual class util__Str_L_char_G_ __thiscall BlastLauncherModule__GetGeneratedName(void)const
    */

Str_L_char_G_ * __thiscall
BlastLauncherModule__GetGeneratedName(BlastLauncherModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  LocStr *pLVar4;
  Str_L_char_G_ *__return_storage_ptr___00;
  Str_L_char_G_ *pSVar5;
  Str_L_char_G_ *pSVar6;
  Str_L_char_G_ *this_00;
  Str_L_char_G_ *pSVar7;
  Str_L_char_G_ *pSVar8;
  Str_L_char_G_ *pSVar9;
  Str_L_char_G_ *__return_storage_ptr___01;
  Str_L_char_G_ *pSVar10;
  void *apvStack_d0 [3];
  void *pvStack_c4;
  void *apvStack_b8 [3];
  void *pvStack_ac;
  void *apvStack_a0 [3];
  void *pvStack_94;
  Str_L_char_G_ SStack_88;
  Str_L_char_G_ SStack_7c;
  Str_L_char_G_ SStack_70;
  Str_L_char_G_ SStack_64;
  Str_L_char_G_ SStack_58;
  Str_L_char_G_ SStack_4c;
  Str_L_char_G_ SStack_40;
  Str_L_char_G_ SStack_34;
  Str_L_char_G_ SStack_28;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
  util__Str_char___Str_char(&SStack_88,"Weapon BlastLauncher");
  util__Str_char___Str_char(&SStack_40,"Space");
  util__Str_char___Str_char(&SStack_34,"Space");
  iVar1 = *(int *)(this + 0x148);
  iVar2 = *(int *)(this + 0x144);
  piVar3 = *(int **)(this + 0x140);
  SStack_28.Data = (char *)0x0;
  SStack_28.Capacity = 0;
  SStack_28.Length = 0;
  SStack_1c.Data = (char *)0x0;
  SStack_1c.Capacity = 0;
  SStack_1c.Length = 0;
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  pLVar4 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_d0,&SStack_88,&SStack_28);
  util__LocStr__operator__o3(pLVar4);
  pSVar10 = __return_storage_ptr__;
  pLVar4 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_b8,&SStack_40,&SStack_1c);
  __return_storage_ptr___00 = util__LocStr__operator__o3(pLVar4);
  pSVar9 = &SStack_4c;
  __return_storage_ptr___01 = &SStack_7c;
  pSVar5 = (Str_L_char_G_ *)(**(code **)(uintptr_t)(*piVar3 + 0x48))();
  pSVar8 = &SStack_58;
  pLVar4 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_a0,&SStack_34,&SStack_10);
  pSVar6 = util__LocStr__operator__o3(pLVar4);
  pSVar7 = &SStack_64;
  this_00 = util__Printf(&SStack_70,"%ix",iVar1 * iVar2);
  pSVar7 = util__Str_char___operator(this_00,pSVar7,pSVar6);
  pSVar8 = util__Str_char___operator(pSVar7,pSVar8,pSVar5);
  pSVar9 = util__Str_char___operator(pSVar8,__return_storage_ptr___01,pSVar9);
  util__Str_char___operator(pSVar9,__return_storage_ptr___00,pSVar10);
  if (SStack_4c.Data != (char *)0x0) {
    port_op_delete(SStack_4c.Data);
    SStack_4c.Data = (char *)0x0;
  }
  if (SStack_58.Data != (char *)0x0) {
    port_op_delete(SStack_58.Data);
    SStack_58.Data = (char *)0x0;
  }
  if (SStack_64.Data != (char *)0x0) {
    port_op_delete(SStack_64.Data);
    SStack_64.Data = (char *)0x0;
  }
  if (SStack_70.Data != (char *)0x0) {
    port_op_delete(SStack_70.Data);
    SStack_70.Data = (char *)0x0;
  }
  if (pvStack_94 != (void *)0x0) {
    port_op_delete(pvStack_94);
    pvStack_94 = (void *)0x0;
  }
  if (apvStack_a0[0] != (void *)0x0) {
    port_op_delete(apvStack_a0[0]);
    apvStack_a0[0] = (void *)0x0;
  }
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
    SStack_10.Data = (char *)0x0;
  }
  if (SStack_7c.Data != (char *)0x0) {
    port_op_delete(SStack_7c.Data);
    SStack_7c.Data = (char *)0x0;
  }
  if (pvStack_ac != (void *)0x0) {
    port_op_delete(pvStack_ac);
    pvStack_ac = (void *)0x0;
  }
  if (apvStack_b8[0] != (void *)0x0) {
    port_op_delete(apvStack_b8[0]);
    apvStack_b8[0] = (void *)0x0;
  }
  if (SStack_1c.Data != (char *)0x0) {
    port_op_delete(SStack_1c.Data);
    SStack_1c.Data = (char *)0x0;
  }
  if (pvStack_c4 != (void *)0x0) {
    port_op_delete(pvStack_c4);
    pvStack_c4 = (void *)0x0;
  }
  if (apvStack_d0[0] != (void *)0x0) {
    port_op_delete(apvStack_d0[0]);
    apvStack_d0[0] = (void *)0x0;
  }
  if (SStack_28.Data != (char *)0x0) {
    port_op_delete(SStack_28.Data);
    SStack_28.Data = (char *)0x0;
  }
  if (SStack_34.Data != (char *)0x0) {
    port_op_delete(SStack_34.Data);
    SStack_34.Data = (char *)0x0;
  }
  if (SStack_40.Data != (char *)0x0) {
    port_op_delete(SStack_40.Data);
    SStack_40.Data = (char *)0x0;
  }
  if (SStack_88.Data != (char *)0x0) {
    port_op_delete(SStack_88.Data);
  }
  return __return_storage_ptr__;
}





//==== 0061de00 GetShortName_0061de00 ====


/* public: virtual class util__Str_L_char_G_ __thiscall BlastLauncherModule__GetShortName(void)const  */

Str_L_char_G_ * __thiscall
BlastLauncherModule__GetShortName(BlastLauncherModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  int *piVar1;
  LocStr *pLVar2;
  Str_L_char_G_ *__return_storage_ptr___00;
  Str_L_char_G_ *this_00;
  Str_L_char_G_ *pSVar3;
  Str_L_char_G_ *__return_storage_ptr___01;
  Str_L_char_G_ *pSVar4;
  void *apvStack_7c [3];
  void *pvStack_70;
  void *apvStack_64 [3];
  void *pvStack_58;
  Str_L_char_G_ SStack_4c;
  Str_L_char_G_ SStack_40;
  Str_L_char_G_ SStack_34;
  Str_L_char_G_ SStack_28;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
  util__Str_char___Str_char(&SStack_4c,"Weapon BlastLauncher");
  util__Str_char___Str_char(&SStack_28,"Space");
  piVar1 = *(int **)(this + 0x140);
  SStack_1c.Data = (char *)0x0;
  SStack_1c.Capacity = 0;
  SStack_1c.Length = 0;
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_7c,&SStack_4c,&SStack_1c);
  util__LocStr__operator__o3(pLVar2);
  pSVar4 = __return_storage_ptr__;
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_64,&SStack_28,&SStack_10);
  __return_storage_ptr___00 = util__LocStr__operator__o3(pLVar2);
  pSVar3 = &SStack_34;
  __return_storage_ptr___01 = &SStack_40;
  this_00 = (Str_L_char_G_ *)(**(code **)(uintptr_t)(*piVar1 + 0x48))();
  pSVar3 = util__Str_char___operator(this_00,__return_storage_ptr___01,pSVar3);
  util__Str_char___operator(pSVar3,__return_storage_ptr___00,pSVar4);
  if (SStack_34.Data != (char *)0x0) {
    port_op_delete(SStack_34.Data);
    SStack_34.Data = (char *)0x0;
  }
  if (SStack_40.Data != (char *)0x0) {
    port_op_delete(SStack_40.Data);
    SStack_40.Data = (char *)0x0;
  }
  if (pvStack_58 != (void *)0x0) {
    port_op_delete(pvStack_58);
    pvStack_58 = (void *)0x0;
  }
  if (apvStack_64[0] != (void *)0x0) {
    port_op_delete(apvStack_64[0]);
    apvStack_64[0] = (void *)0x0;
  }
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
    SStack_10.Data = (char *)0x0;
  }
  if (pvStack_70 != (void *)0x0) {
    port_op_delete(pvStack_70);
    pvStack_70 = (void *)0x0;
  }
  if (apvStack_7c[0] != (void *)0x0) {
    port_op_delete(apvStack_7c[0]);
    apvStack_7c[0] = (void *)0x0;
  }
  if (SStack_1c.Data != (char *)0x0) {
    port_op_delete(SStack_1c.Data);
    SStack_1c.Data = (char *)0x0;
  }
  if (SStack_28.Data != (char *)0x0) {
    port_op_delete(SStack_28.Data);
    SStack_28.Data = (char *)0x0;
  }
  if (SStack_4c.Data != (char *)0x0) {
    port_op_delete(SStack_4c.Data);
  }
  return __return_storage_ptr__;
}





//==== 0061df90 GetTag_0061df90 ====


/* public: virtual class util__Str_L_char_G_ __thiscall BlastLauncherModule__GetTag(void)const  */

Str_L_char_G_ * __thiscall
BlastLauncherModule__GetTag(BlastLauncherModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"Blast Launcher");
  return __return_storage_ptr__;
}





//==== 0061dfb0 GetIcon_0061dfb0 ====

/* public: virtual void (__cdecl*__thiscall BlastLauncherModule__GetIcon(void)const )(void) */

_func_void * __thiscall BlastLauncherModule__GetIcon(BlastLauncherModule *this)

{
  CraftBlueprint *pCVar1;
  code *pcVar2;
  
  pCVar1 = *(CraftBlueprint **)(this + 0x140);
  CraftBlueprint__GetShipClass_Memoize(pCVar1);
  if ((char)(pCVar1->GetMainEngineModules_MemoizedValue).Data._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if ((int)((pCVar1->GetMainEngineModulePlacers_MemoizedValue).IsValidData == 5)){
    return Icons__StationBlastLauncher;
  }
  pCVar1 = *(CraftBlueprint **)(this + 0x140);
  CraftBlueprint__GetShipClass_Memoize(pCVar1);
  if ((char)(pCVar1->GetMainEngineModules_MemoizedValue).Data._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if ((int)((pCVar1->GetMainEngineModulePlacers_MemoizedValue).IsValidData == 0)){
    return Icons__CapitalShipBlastLauncher;
  }
  pCVar1 = *(CraftBlueprint **)(this + 0x140);
  CraftBlueprint__GetShipClass_Memoize(pCVar1);
  if ((char)(pCVar1->GetMainEngineModules_MemoizedValue).Data._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if ((int)((pCVar1->GetMainEngineModulePlacers_MemoizedValue).IsValidData == 2)){
    return Icons__DroneBlastLauncher;
  }
  pCVar1 = *(CraftBlueprint **)(this + 0x140);
  CraftBlueprint__GetShipClass_Memoize(pCVar1);
  if ((char)(pCVar1->GetMainEngineModules_MemoizedValue).Data._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if ((int)((pCVar1->GetMainEngineModulePlacers_MemoizedValue).IsValidData == 3)){
    return Icons__MissileBlastLauncher;
  }
  pCVar1 = *(CraftBlueprint **)(this + 0x140);
  CraftBlueprint__GetShipClass_Memoize(pCVar1);
  if ((char)(pCVar1->GetMainEngineModules_MemoizedValue).Data._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pcVar2 = (long long int (*)())((_func_void *)0x0);
  if ((int)((pCVar1->GetMainEngineModulePlacers_MemoizedValue).IsValidData == 4)){
    pcVar2 = (long long int (*)())(Icons__PayloadBlastLauncher);
  }
  return (_func_void *)(pcVar2);
}

//==== 0061e1b0 GetCubicBoundingBox_m_0061e1b0 ====


/* public: virtual struct util__AABB_L_structutil__Vec3_L_double_G__G_ __thiscall
   BlastLauncherModule__GetCubicBoundingBox_m(void)const  */

undefined4 * __thiscall BlastLauncherModule__GetCubicBoundingBox_m(BlastLauncherModule *this)

{
  double dVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  Vec3_L_double_G_ *pVVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar13;
  double dVar12;
  undefined4 uVar14;
  undefined4 uVar15;
  double dVar16;
  undefined4 *in_stack_00000004;
  undefined7 uStack_67;
  Vec3_L_double_G_ VStack_60;
  Vec3_L_double_G_ VStack_48;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  double dStack_20;
  double dStack_18;
  undefined4 *puStack_10;
  undefined8 uStack_c;
  
  puStack_10 = in_stack_00000004;
  if (*(char *)&(this[0xf8]) == 0) {
    iVar2 = *(int *)(this + 0xc0);
    uStack_c = (double)CONCAT44(iVar2 + 1,(undefined4)uStack_c);
    util__Darray_struct_util__tuple2_enum_Order__Type_int_____SetSize
              ((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)(this + 0xb8),
               (int *)((int)&uStack_c + 4));
    bVar4 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)(this + 0xb8),iVar2);
    if (bVar4) {
      iVar2 = *(int *)(this + 0xbc);
      iVar3 = *(int *)(this + 0xc0);
      *(code **)(iVar2 + -8 + iVar3 * 8) = (long long int (*)())(CarrierModule__GetCachedBoundingBox_m_Clear);
      *(undefined4 *)(iVar2 + -4 + iVar3 * 8) = 0;
    }
    pVVar5 = (Vec3_L_double_G_ *)(uintptr_t)(GetDimensions_m(this,&VStack_48));
    dStack_18 = pVVar5->X * 0.5;
    dStack_20 = pVVar5->Y * 0.5;
    uStack_30 = SUB84(dStack_20,0);
    uStack_c = -dStack_18;
    uStack_2c = (uint)((ulonglong)dStack_20 >> 0x20) ^ 0x80000000;
    uStack_28 = 0;
    uStack_24 = 0x80000000;
    pVVar5 = (Vec3_L_double_G_ *)(uintptr_t)(GetDimensions_m(this,&VStack_60));
    uVar14 = SUB84(uStack_c,0);
    uVar15 = (undefined4)((ulonglong)uStack_c >> 0x20);
    dVar1 = pVVar5->Z;
    uVar9 = SUB84(dVar1,0);
    uVar13 = (uint)((ulonglong)dVar1 >> 0x20) ^ 0x80000000;
    if (dStack_18 <= uStack_c) {
      uVar14 = SUB84(dStack_18,0);
      uVar15 = (undefined4)((ulonglong)dStack_18 >> 0x20);
    }
    uVar7 = (uint)((ulonglong)dStack_20 >> 0x20);
    uVar6 = uStack_30;
    uVar8 = uStack_2c;
    if (dStack_20 <= (double)CONCAT44(uStack_2c,uStack_30)) {
      uVar6 = SUB84(dStack_20,0);
      uVar8 = uVar7;
    }
    dVar16 = uStack_c;
    if (uStack_c <= dStack_18) {
      dVar16 = dStack_18;
    }
    uVar10 = uStack_30;
    uVar11 = uStack_2c;
    if ((double)CONCAT44(uStack_2c,uStack_30) <= dStack_20) {
      uVar10 = SUB84(dStack_20,0);
      uVar11 = uVar7;
    }
    if (0.0 <= -dVar1) {
      uVar9 = 0;
      uVar13 = 0;
    }
    dVar12 = -dVar1;
    if (-dVar1 <= 0.0) {
      dVar12 = 0.0;
    }
    *(undefined4 *)(this + 200) = uVar14;
    *(undefined4 *)(this + 0xcc) = uVar15;
    *(undefined4 *)(this + 0xd0) = uVar6;
    *(uint *)(this + 0xd4) = uVar8;
    *(undefined4 *)(this + 0xd8) = uVar9;
    *(uint *)(this + 0xdc) = uVar13;
    *(int *)(this + 0xe0) = SUB84(dVar16,0);
    *(int *)(this + 0xe4) = (int)((ulonglong)dVar16 >> 0x20);
    *(undefined4 *)(this + 0xe8) = uVar10;
    *(uint *)(this + 0xec) = uVar11;
    *(int *)(this + 0xf0) = SUB84(dVar12,0);
    *(int *)(this + 0xf4) = (int)((ulonglong)dVar12 >> 0x20);
    *(ulonglong *)(this + 0xf8) = CONCAT71(uStack_67,1);
    in_stack_00000004 = puStack_10;
    if (*(char *)&(this[0xf8]) == 0) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  uVar9 = *(undefined4 *)(this + 0xcc);
  uVar14 = *(undefined4 *)(this + 0xd0);
  uVar15 = *(undefined4 *)(this + 0xd4);
  *in_stack_00000004 = *(undefined4 *)(this + 200);
  in_stack_00000004[1] = uVar9;
  in_stack_00000004[2] = uVar14;
  in_stack_00000004[3] = uVar15;
  uVar9 = *(undefined4 *)(this + 0xdc);
  uVar14 = *(undefined4 *)(this + 0xe0);
  uVar15 = *(undefined4 *)(this + 0xe4);
  in_stack_00000004[4] = *(undefined4 *)(this + 0xd8);
  in_stack_00000004[5] = uVar9;
  in_stack_00000004[6] = uVar14;
  in_stack_00000004[7] = uVar15;
  uVar9 = *(undefined4 *)(this + 0xec);
  uVar14 = *(undefined4 *)(this + 0xf0);
  uVar15 = *(undefined4 *)(this + 0xf4);
  in_stack_00000004[8] = *(undefined4 *)(this + 0xe8);
  in_stack_00000004[9] = uVar9;
  in_stack_00000004[10] = uVar14;
  in_stack_00000004[0xb] = uVar15;
  return in_stack_00000004;
}





//==== 0061e330 GetArmorCarvingBox_m ====


/* public: virtual class util__Maybe_L_structutil__Vec2_L_double_G__G_ __thiscall
   BlastLauncherModule__GetArmorCarvingBox_m(void)const  */

void __thiscall BlastLauncherModule__GetArmorCarvingBox_m(BlastLauncherModule *this)

{
  double dVar1;
  Vec3_L_double_G_ *pVVar2;
  undefined4 *in_stack_00000004;
  Vec3_L_double_G_ VStack_44;
  Vec3_L_double_G_ VStack_2c;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  pVVar2 = (Vec3_L_double_G_ *)(uintptr_t)(GetDimensions_m(this,&VStack_2c));
  uStack_14 = *(undefined4 *)&pVVar2->Y;
  uStack_10 = *(undefined4 *)((int)&pVVar2->Y + 4);
  uStack_c = 0;
  uStack_8 = 0;
  pVVar2 = (Vec3_L_double_G_ *)(uintptr_t)(GetDimensions_m(this,&VStack_44));
  dVar1 = pVVar2->X;
  *in_stack_00000004 = uStack_14;
  in_stack_00000004[1] = uStack_10;
  in_stack_00000004[2] = SUB84(dVar1,0);
  in_stack_00000004[3] = (int)((ulonglong)dVar1 >> 0x20);
  *(undefined1 *)(in_stack_00000004 + 4) = 1;
  return;
}





//==== 0061e380 GetComposition_0061e380 ====


/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   BlastLauncherModule__GetComposition(void)const  */

void __thiscall BlastLauncherModule__GetComposition(BlastLauncherModule *this,Darray_L_struct_MaterialComposition_G_ * __return_storage_ptr__)

{
  undefined8 stack0xfffffffc;
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  CraftBlueprint *this_00;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  double dVar8;

  undefined4 uStack_3c;
  undefined4 uStack_34;
  undefined **ppuStack_30;
  void *pvStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined **ppuStack_20;
  void *pvStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  ppuStack_20 = (undefined **)0x0;
  pvStack_1c = (void *)0x0;
  iStack_18 = 0;
  uStack_14 = 0;
  Module__GetComposition((Module *)this,(Darray_L_MaterialComposition_G_ *)__return_storage_ptr__);
  dVar8 = GetStructureMass_kg(this);
  iVar7 = iStack_18;
  uVar2 = *(undefined4 *)(this + 0x158);
  uStack_10 = SUB84(dVar8,0);
  uVar5 = uStack_10;
  _uStack_10 = CONCAT44(iStack_18 + 1,uStack_10);
  util__Darray_struct_MaterialConstituent___SetSize
            ((Darray_L_struct_MaterialConstituent_G_ *)&ppuStack_20,&iStack_c);
  bVar6 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                    ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)&ppuStack_20,iVar7)
  ;
  iVar7 = iStack_18;
  if (bVar6) {
    uStack_34 = (undefined4)((ulonglong)dVar8 >> 0x20);
    puVar1 = (undefined4 *)((int)pvStack_1c + iStack_18 * 0x10 + -0x10);
    *puVar1 = uVar2;
    puVar1[1] = uStack_3c;
    puVar1[2] = uVar5;
    puVar1[3] = uStack_34;
  }
  uVar2 = *(undefined4 *)(this + 0x14c);
  iVar3 = *(int *)(this + 0x148);
  iVar4 = *(int *)(this + 0x144);
  dVar8 = *(double *)(this + 0x150);
  iStack_c = iStack_18 + 1;
  util__Darray_struct_MaterialConstituent___SetSize
            ((Darray_L_struct_MaterialConstituent_G_ *)&ppuStack_20,&iStack_c);
  bVar6 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                    ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)&ppuStack_20,iVar7)
  ;
  if (bVar6) {
    puVar1 = (undefined4 *)((int)pvStack_1c + iStack_18 * 0x10 + -0x10);
    *puVar1 = uVar2;
    puVar1[1] = uStack_3c;
    *(double *)(puVar1 + 2) = (double)(iVar3 * iVar4) * dVar8;
  }
  this_00 = *(CraftBlueprint **)(this + 0x140);
  ppuStack_30 = (undefined **)0x0;
  pvStack_2c = (void *)0x0;
  uStack_28 = 0;
  uStack_24 = 0;
  CraftBlueprint__GetComposition_Memoize(this_00);
  if (*(char *)((this_00->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 7) ==
      '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  util__Darray_struct_MaterialComposition___Darray_struct_MaterialComposition
            ((Darray_L_struct_MaterialComposition_G_ *)&ppuStack_30,
             (Darray_L_struct_MaterialComposition_G_ *)
             ((this_00->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 5));
  iStack_c = 0;
  iVar7 = (*(code *)ppuStack_30[3])();
  if (iStack_c < iVar7) {
    do {
      iVar7 = (*(code *)*ppuStack_30)(&iStack_c);
      *(double *)(iVar7 + 8) =
           (double)(*(int *)(this + 0x148) * *(int *)(this + 0x144)) * *(double *)(iVar7 + 8);
      iStack_c = iStack_c + 1;
      iVar7 = (*(code *)ppuStack_30[3])();
    } while (iStack_c < iVar7);
  }
  *(undefined4 *)__return_storage_ptr__ = 0;
  *(undefined4 *)(__return_storage_ptr__ + 4) = 0;
  *(undefined4 *)(__return_storage_ptr__ + 8) = 0;
  *(undefined4 *)(__return_storage_ptr__ + 0xc) = 0;
  util__Darray_struct_MaterialComposition___Darray_struct_MaterialComposition
            (__return_storage_ptr__,(Darray_L_struct_MaterialComposition_G_ *)&ppuStack_20);
  util__Darray_struct_MaterialComposition___operator
          (__return_storage_ptr__,(Darray_L_struct_MaterialComposition_G_ *)&ppuStack_30);
  ppuStack_30 = (undefined **)(&vftable_75);
  if (pvStack_2c != (void *)0x0) {
    port_op_delete(pvStack_2c);
  }
  pvStack_2c = (void *)0x0;
  ppuStack_30 = (undefined **)(&vftable);
  ppuStack_20 = (undefined **)(&vftable_75);
  if (pvStack_1c != (void *)0x0) {
    port_op_delete(pvStack_1c);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0061e560 GetAmmoInfo_0061e560 ====

/* public: virtual class util__Maybe_L_structAmmoInfo_G_ __thiscall
   BlastLauncherModule__GetAmmoInfo(void)const  */

Maybe_L_AmmoInfo_G_ * __thiscall
BlastLauncherModule__GetAmmoInfo(BlastLauncherModule *this,Maybe_L_AmmoInfo_G_ *__return_storage_ptr__)

{
  undefined8 stack0xffffffe4;
  undefined4 *puVar1;
  MaterialComposition *pMVar2;
  CraftBlueprint *pCVar3;
  Material *this_00;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  AmmoExplosion local_d4;
  Cylinder_L_double_G_ local_b4;
  undefined1 local_a4 [16];
  Darray_L_MaterialComposition_G_ local_94;
  Str_L_char_G_ local_84;
  Str_L_char_G_ local_78;
  ShipClass local_6c;
  bool local_68;
  Darray_L_MaterialConstituent_G_ local_64;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  double local_44;
  double local_3c;
  ShipClass local_34;
  Material *local_30;
  Str_L_char_G_ SStack_2c;
  undefined1 local_20 [8];
  int iStack_18;
  Darray_L_MaterialComposition_G_ local_14;
  
  pCVar3 = *(CraftBlueprint **)(this + 0x140);
  CraftBlueprint__GetShipClass_Memoize(pCVar3);
  if ((char)(pCVar3->GetMainEngineModules_MemoizedValue).Data._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_34 = *(ShipClass *)&(pCVar3->GetMainEngineModulePlacers_MemoizedValue).IsValidData;
  this_00 = *(Material **)(this + 0x14c);
  if (this_00 == (Material *)0x0) {
    unique0x1000042b = 0.0;
  }
  else {
    Material__GetCost_c__kg_Memoize(this_00);
    if ((char)this_00[1].Elements._pad_0x0_0 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    unique0x10000293 = *(double *)(this + 0x150) * *(double *)&this_00[1]._pad_0x8_2;
  }
  pCVar3 = *(CraftBlueprint **)(this + 0x140);
  CraftBlueprint__GetTotalCost_c_Memoize(pCVar3);
  if ((char)((pCVar3->GetApproximateComposition_MemoizedValue).Data == '\0')){
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_3c = *(double *)&(pCVar3->GetCrossSection_m2_MemoizedValue).IsValidData + stack0xffffffe4;
  local_14._pad_0x0_0 = (int)&vftable_75;
  local_14.Data = (MaterialComposition *)0x0;
  local_14.Size = 0;
  local_14.Capacity = 1;
  local_14.Data = (struct MaterialComposition *)(uintptr_t)(port_op_new(0x10));
  iVar4 = local_14.Size;
  if (local_14.Data == (MaterialComposition *)0x0) {
    local_14.Data = (MaterialComposition *)0x0;
  }
  else {
    (local_14.Data)->Type = (Material *)0x0;
    (local_14.Data)->Mass_kg = 0.0;
  }
  iVar7 = 0;
  if (0 < local_14.Capacity) {
    iVar6 = 0;
    do {
      iVar7 = iVar7 + 1;
      puVar1 = (undefined4 *)((int)&(local_14.Data)->Type + iVar6);
      *puVar1 = 0;
      puVar1[1] = (undefined4)(uintptr_t)(SStack_2c.Data);
      puVar1[2] = 0;
      puVar1[3] = 0;
      iVar6 = iVar6 + 0x10;
    } while (iVar7 < local_14.Capacity);
  }
  local_30 = *(Material **)(this + 0x14c);
  (*(uint64_t*)((char*)&(SStack_2c)+4)) = *(undefined8 *)(this + 0x150);
  iStack_18 = local_14.Size + 1;
  util__Darray_L_MaterialConstituent_G___SetSize((Darray_L_MaterialConstituent_G_ *)&local_14,&iStack_18);
  bVar5 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                    ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)&local_14,iVar4);
  if (bVar5) {
    pMVar2 = local_14.Data + local_14.Size + -1;
    pMVar2->Type = local_30;
    *(char * *)&(*(undefined1 *)(void *)((char *)(uintptr_t)(pMVar2) + 0x4)) = SStack_2c.Data;
    *(int *)&pMVar2->Mass_kg = SStack_2c.Capacity;
    *(int *)((int)&pMVar2->Mass_kg + 4) = SStack_2c.Length;
  }
  pCVar3 = *(CraftBlueprint **)(this + 0x140);
  if (pCVar3 != (CraftBlueprint *)0x0) {
    CraftBlueprint__GetComposition_Memoize(pCVar3);
    if (*(char *)((pCVar3->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 7) ==
        '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    util__Darray_L_MaterialComposition_G___op_iadd
          (&local_14,
               (Darray_L_struct_MaterialComposition_G_ *)
               ((pCVar3->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 5));
  }
  GetSingleAmmoExplosion(this,&local_d4);
  (**(code **)(**(int **)(this + 0x140) + 0x48))(&SStack_2c);
  (**(code **)(**(int **)(this + 0x140) + 0x48))(local_20);
  CraftBlueprint__GetStorageCylinder_m(*(CraftBlueprint **)(this + 0x140),&local_b4);
  (*(uint32_t*)&(local_a4)) = local_b4.Radius;
  (*(uint32_t*)((char*)&(local_a4)+4)) = (*(uint32_t *)((char *)&(local_b4.Radius) + 4));
  (*(uint32_t*)((char*)&(local_a4)+8)) = local_b4.Height;
  (*(uint32_t *)((char *)&(local_a4) + 12)) = (*(uint32_t *)((char *)&(local_b4.Height) + 4));
  util__Darray_L_MaterialComposition_G___Darray_L_MaterialComposition_G_
            ((Darray_L_MaterialComposition_G_ *)(local_a4 + 0x10),
             (Darray_L_struct_MaterialComposition_G_ *)&local_14);
  util__Str_char___Str_char((Str_L_char_G_ *)(local_a4 + 0x20),(Str_L_char_G_ *)local_20);
  util__Str_char___Str_char((Str_L_char_G_ *)(local_a4 + 0x2c),&SStack_2c);
  local_6c = local_34;
  local_68 = true;
  util__Darray_L_MaterialConstituent_G___Darray_L_MaterialConstituent_G_
            ((Darray_L_MaterialConstituent_G_ *)(local_a4 + 0x40),
             (Darray_L_struct_MaterialConstituent_G_ *)&local_d4);
  local_14._pad_0x0_0 = (int)&vftable_75;
  *(uint32_t *)&local_54 = local_d4.Mass_kg;
  uStack_50 = (*(uint32_t *)((char *)&(local_d4.Mass_kg) + 4));
  uStack_4c = local_d4.Temperature_K;
  uStack_48 = (*(uint32_t *)((char *)&(local_d4.Temperature_K) + 4));
  local_44 = local_3c;
  if (local_14.Data != (MaterialComposition *)0x0) {
    port_op_delete(local_14.Data);
  }
  local_14.Data = (MaterialComposition *)0x0;
  local_14._pad_0x0_0 = (int)&vftable;
  if ((char *)(*(uint32_t*)&(local_20)) != (char *)0x0) {
    port_op_delete((void *)(*(uint32_t*)&(local_20)));
    (*(uint32_t*)&(local_20)) = (uint32_t)(uintptr_t)((char *)0x0);
  }
  if (SStack_2c.Data != (char *)0x0) {
    port_op_delete(SStack_2c.Data);
    SStack_2c.Data = (char *)0x0;
  }
  local_d4.GasComposition._pad_0x0_0 = (int)&vftable_15;
  if (local_d4.GasComposition.Data != (MaterialConstituent *)0x0) {
    port_op_delete(local_d4.GasComposition.Data);
  }
  *(undefined4 *)&(__return_storage_ptr__->Data).Dimensions_m.Radius = (*(uint32_t*)&(local_a4));
  *(undefined4 *)((int)&(__return_storage_ptr__->Data).Dimensions_m.Radius + 4) = (*(uint32_t*)((char*)&(local_a4)+4));
  *(undefined4 *)&(__return_storage_ptr__->Data).Dimensions_m.Height = (*(uint32_t*)((char*)&(local_a4)+8));
  *(undefined4 *)((int)&(__return_storage_ptr__->Data).Dimensions_m.Height + 4) = (*(uint32_t *)((char *)&(local_a4) + 12));
  util__Darray_L_MaterialComposition_G___Darray_L_MaterialComposition_G_
            (&(__return_storage_ptr__->Data).Composition,
             (Darray_L_struct_MaterialComposition_G_ *)(local_a4 + 0x10));
  util__Str_char___Str_char(&(__return_storage_ptr__->Data).Name,(Str_L_char_G_ *)(local_a4 + 0x20));
  util__Str_char___Str_char
            (&(__return_storage_ptr__->Data).Descriptor,(Str_L_char_G_ *)(local_a4 + 0x2c));
  (__return_storage_ptr__->Data).Class.Data = local_6c;
  (__return_storage_ptr__->Data).Class.IsValidData = local_68;
  util__Darray_L_MaterialConstituent_G___Darray_L_MaterialConstituent_G_
            (&(__return_storage_ptr__->Data).ExplosionPotential.GasComposition,
             (Darray_L_struct_MaterialConstituent_G_ *)(local_a4 + 0x40));
  *(undefined4 *)&(__return_storage_ptr__->Data).ExplosionPotential.Mass_kg = local_54;
  *(undefined4 *)((int)&(__return_storage_ptr__->Data).ExplosionPotential.Mass_kg + 4) = uStack_50;
  *(undefined4 *)&(__return_storage_ptr__->Data).ExplosionPotential.Temperature_K = uStack_4c;
  *(undefined4 *)((int)&(__return_storage_ptr__->Data).ExplosionPotential.Temperature_K + 4) =
       uStack_48;
  (__return_storage_ptr__->Data).CostOfOneUnit_c = local_44;
  __return_storage_ptr__->IsValidData = true;
  AmmoInfo___AmmoInfo((AmmoInfo *)local_a4);
  return __return_storage_ptr__;
}

//==== 0061e8d0 GetInternalAmmo_0061e8d0 ====


/* public: virtual int __thiscall BlastLauncherModule__GetInternalAmmo(void)const  */

int __thiscall BlastLauncherModule__GetInternalAmmo(BlastLauncherModule *this)

{
  return *(int *)(this + 0x148) * *(int *)(this + 0x144);
}





//==== 0061e8e0 GetPayload_0061e8e0 ====


/* public: virtual class CraftBlueprint * __thiscall BlastLauncherModule__GetPayload(void)const  */

CraftBlueprint * __thiscall BlastLauncherModule__GetPayload(BlastLauncherModule *this)

{
  return *(CraftBlueprint **)(this + 0x140);
}





//==== 0061e900 GetCrewRequired_0061e900 ====


/* public: virtual class util__Darray_L_structCrewJob_G_ __thiscall
   BlastLauncherModule__GetCrewRequired(void)const  */

Darray_L_struct_CrewJob_G_ * __thiscall BlastLauncherModule__GetCrewRequired(BlastLauncherModule *this,Darray_L_struct_CrewJob_G_ * __return_storage_ptr__)

{
  undefined8 stack0x00000004;
  Darray_L_struct_CrewJob_G_ *this_00;
  int iVar1;
  CraftBlueprint *this_01;
  Darray_L_struct_CrewJob_G_ *pDVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;

  Darray_L_struct_CrewJob_G_ aDStack_14 [16];
  
  this_00 = __return_storage_ptr__;
  *(undefined4 *)__return_storage_ptr__ = 0;
  *(undefined4 *)(__return_storage_ptr__ + 4) = 0;
  *(undefined4 *)(__return_storage_ptr__ + 8) = 0;
  *(undefined4 *)(__return_storage_ptr__ + 0xc) = 0;
  *(undefined ***)__return_storage_ptr__ = &vftable_120;
  *(undefined4 *)(__return_storage_ptr__ + 4) = 0;
  *(undefined4 *)(__return_storage_ptr__ + 8) = 0;
  *(undefined4 *)(__return_storage_ptr__ + 0xc) = 0;
  iVar1 = (**(code **)(*(int *)this + 0x188))();
  if (iVar1 != 0) {
    this_01 = (CraftBlueprint *)(**(code **)(*(int *)this + 0x188))(aDStack_14);
Darray_L_CrewJob_G_ aRv_7828;
    pDVar2 = (Darray_L_struct_CrewJob_G_ *)CraftBlueprint__GetCrewRequiredForUseAsPayload(this_01,&aRv_7828);
pDVar2 = (Darray_L_struct_CrewJob_G_ *)&aRv_7828;
    if (*(int *)(this_00 + 8) == 0) {
      util__Darray_struct_CrewJob___operator(this_00,pDVar2);
      util__Darray_struct_CrewJob____Darray_struct_CrewJob(aDStack_14);
    }
    iVar1 = (**(code **)(*(int *)pDVar2 + 0xc))();
    if (iVar1 != 0) {
      iVar1 = *(int *)(this_00 + 8);
      iVar3 = (**(code **)(*(int *)pDVar2 + 0xc))();
      __return_storage_ptr__ = (Darray_L_struct_CrewJob_G_ *)(iVar3 + *(int *)(this_00 + 8));
      util__Darray_struct_CrewJob___SetSize(this_00,(int *)&stack0x00000004);
      util__Darray_struct_CrewJob___CheckSize(this_00,iVar1);
      puVar5 = *(undefined4 **)(pDVar2 + 4);
      puVar4 = (undefined4 *)(iVar1 * 0x20 + *(int *)(this_00 + 4));
      if (puVar4 != (undefined4 *)(*(int *)(this_00 + 8) * 0x20 + *(int *)(this_00 + 4))) {
        do {
          *puVar4 = *puVar5;
          util__Str_char___operator__o8((Str_L_char_G_ *)(puVar4 + 1),(Str_L_char_G_ *)(puVar5 + 1));
          *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(puVar5 + 4);
          *(undefined1 *)(puVar4 + 6) = *(undefined1 *)(puVar5 + 6);
          puVar4 = puVar4 + 8;
          puVar5 = puVar5 + 8;
        } while (puVar4 != (undefined4 *)(*(int *)(this_00 + 8) * 0x20 + *(int *)(this_00 + 4)));
      }
    }
    util__Darray_struct_CrewJob____Darray_struct_CrewJob(aDStack_14);
  }
  return this_00;
}





//==== 0061ea10 GetFiringVelocity_km__s_0061ea10 ====


/* public: virtual double __thiscall BlastLauncherModule__GetFiringVelocity_km__s(void)const  */

double __thiscall BlastLauncherModule__GetFiringVelocity_km__s(BlastLauncherModule *this)

{
  double dVar1;
  
  dVar1 = CraftBlueprint__GetTotalMass_kg(*(CraftBlueprint **)(this + 0x140));
  dVar1 = Material__GetInfinitelyTampedSandwichExplosiveVelocity_m__s
                    (*(Material **)(this + 0x14c),*(double *)(this + 0x150),dVar1);
  return dVar1 / 1000.0;
}





//==== 0061ea50 GetReloadTime_s_0061ea50 ====


/* public: virtual double __thiscall BlastLauncherModule__GetReloadTime_s(void)const  */

double __thiscall BlastLauncherModule__GetReloadTime_s(BlastLauncherModule *this)

{
  Cylinder_L_double_G_ *pCVar1;
  double dVar2;
  Cylinder_L_double_G_ CStack_1c;
  double dStack_c;
  
  dVar2 = CraftBlueprint__GetTotalMass_kg(*(CraftBlueprint **)(this + 0x140));
  dStack_c = Material__GetInfinitelyTampedSandwichExplosiveVelocity_m__s
                       (*(Material **)(this + 0x14c),*(double *)(this + 0x150),dVar2);
  pCVar1 = CraftBlueprint__GetStorageCylinder_m(*(CraftBlueprint **)(this + 0x140),&CStack_1c);
  return (pCVar1->Height / ((dStack_c / 1000.0) * 1000.0)) * 1.25;
}





//==== 0061ead0 GetStructuralMaterial_0061ead0 ====


/* public: virtual class Material const * __thiscall
   BlastLauncherModule__GetStructuralMaterial(void)const  */

Material * __thiscall BlastLauncherModule__GetStructuralMaterial(BlastLauncherModule *this)

{
  return *(Material **)(this + 0x158);
}





//==== 0061eae0 GetEngagementRange_km_0061eae0 ====


/* public: virtual class util__Maybe_L_double_G_ 
   BlastLauncherModule__GetEngagementRange_km(double)const  */

Maybe_L_double_G_ * 
BlastLauncherModule__GetEngagementRange_km
          (BlastLauncherModule *this,Maybe_L_double_G_ *__return_storage_ptr__,double param_1)

{
  if (0.0 < *(double *)(this + 0x168)) {
    __return_storage_ptr__->Data = *(double *)(this + 0x168);
    __return_storage_ptr__->IsValidData = true;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Data = 0.0;
  __return_storage_ptr__->IsValidData = false;
  return __return_storage_ptr__;
}





//==== 0061ec20 BuildModels_0061ec20 ====


/* public: virtual void __thiscall BlastLauncherModule__BuildModels(void) */

void __thiscall BlastLauncherModule__BuildModels(BlastLauncherModule *this)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  ReferenceController *this_00;
  Vec4_L_double_G_ VVar2;
  Vec4_L_double_G_ VVar3;
  Maybe_L_int_G_ MVar4;
  bool bVar5;
  GameModel *pGVar6;
  ReferenceControllerRegistry *pRVar7;
  Vec3_L_double_G_ *pVVar8;
  undefined4 *puVar9;
  VertexBufferObject *pVVar10;
  CustomTexture *this_01;
  int *piVar11;
  Shader *pSVar12;
  BlastLauncherShader *pBVar13;
  Maybe_L_double_G_ *pMVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double dVar17;
  double dVar18;
  ReferenceController *pRVar19;
  undefined1 *puVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  code *pcVar23;
  int iVar24;
  undefined4 uVar25;
  uint uVar26;
  GameModel *pGVar27;
  int *piVar28;
  Vec4_L_double_G_ VStack_80;
  undefined1 auStack_68 [4];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 uStack_4c;
  undefined1 uStack_48;
  undefined4 uStack_44;
  ReferenceController *pRStack_40;
  undefined8 uStack_3c;
  GameModel *pGStack_34;
  GameModel *pGStack_30;
  undefined1 auStack_2c [24];
  undefined8 uStack_14;
  ShaderStack SStack_9;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  uVar26 = 0;
  pGVar6 = (GameModel *)port_op_new(0xb8);
  if (pGVar6 == (GameModel *)0x0) {
    pGStack_34 = (GameModel *)0x0;
LAB_0061ec74:
    pGVar6 = pGStack_34;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
  }
  else {
    pGVar6 = (GameModel *)
             GameModel__GameModel
                       (pGVar6,*(Material **)(this + 0x158),(Material *)0x0,
                        ({ __typeof__(((ulonglong)(uVar26 & 0xffffff00) << 0x20)) _t_ = ((ulonglong)(uVar26 & 0xffffff00) << 0x20); *(Maybe_L_int_G_ *)&_t_; }));
    pGStack_34 = pGVar6;
    if (pGVar6 == (GameModel *)0x0) goto LAB_0061ec74;
  }
  pRVar7 = util__ReferenceControllerRegistry__Get();
  pRStack_40 = util__ReferenceControllerRegistry__Register(pRVar7,pGVar6);
  if (pRStack_40 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(pRStack_40);
  }
  iVar24 = *(int *)(this + 0x60);
  pGStack_30 = (GameModel *)(iVar24 + 1);
  util__Darray_class_util__SharedPtr_struct_GameModel_____SetSize
            ((Darray_L_class_util__SharedPtr_L_struct_GameModel_G___G_ *)(this + 0x58),(int *)&pGStack_30);
  bVar5 = util__Darray_class_util__SharedPtr_struct_GameModel_____CheckSize
                    ((Darray_L_class_util__SharedPtr_L_struct_GameModel_G___G_ *)(this + 0x58),iVar24);
  pGVar6 = pGStack_34;
  if (bVar5) {
    iVar24 = *(int *)(this + 0x60);
    iVar1 = *(int *)(this + 0x5c);
    pGStack_30 = *(GameModel **)(iVar1 + -8 + iVar24 * 8);
    uStack_3c = (double)CONCAT44(*(undefined4 *)(iVar1 + -4 + iVar24 * 8),(undefined4)uStack_3c);
    *(GameModel **)(iVar1 + -8 + iVar24 * 8) = pGStack_34;
    *(ReferenceController **)(iVar1 + -4 + iVar24 * 8) = pRStack_40;
    if (pRStack_40 != (ReferenceController *)0x0) {
      util__ReferenceController__AddStrongReference(pRStack_40);
    }
    if (((*(uint32_t*)((char*)&(uStack_3c)+4)) != (ReferenceController *)0x0) &&
       (bVar5 = util__ReferenceController__ReleaseStrongReference((ReferenceController*)((ReferenceController*)((*(uint32_t*)((char*)&(uStack_3c)+4))))), bVar5)) {
      if (pGStack_30 != (GameModel *)0x0) {
        GameModel___scalar_deleting_destructor(pGStack_30,1);
      }
      pGVar27 = pGStack_30;
      pRVar7 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar7,pGVar27);
    }
  }
  if ((pRStack_40 != (ReferenceController *)0x0) &&
     (bVar5 = util__ReferenceController__ReleaseStrongReference(pRStack_40), bVar5)) {
    if (pGVar6 != (GameModel *)0x0) {
      GameModel___scalar_deleting_destructor(pGVar6,1);
    }
    pRVar7 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar7,pGVar6);
  }
  pVVar8 = (Vec3_L_double_G_ *)(uintptr_t)(GetDimensions_m(this,(Vec3_L_double_G_ *)auStack_2c));
  dVar17 = (pVVar8->Z * 0.5) / -1000.0;
  uVar15 = SUB84(dVar17,0);
  VVar3.Z = uVar15;
  VVar3.X = 0.0;
  VVar3.Y = 0.0;
  VVar3.W = (int)((ulonglong)dVar17 >> 0x20);
  Graphics__Translate(VVar3);
  puVar9 = (undefined4 *)(**(code **)(*(int *)(this + 0x58) + 8))();
  pVVar10 = GameModel__GetVertexObject((GameModel *)*puVar9);
  iVar24 = 2;
  uVar15 = CONCAT31((int3)((uint)uVar15 >> 8),1);
  pVVar8 = (Vec3_L_double_G_ *)(uintptr_t)(GetDimensions_m(this,(Vec3_L_double_G_ *)auStack_2c));
  dVar17 = pVVar8->Y / 1000.0;
  dVar18 = pVVar8->Z / 1000.0;
  VVar2.Y = SUB84(dVar17,0);
  VVar2.X = pVVar8->X / 1000.0;
  VVar2.Z = (int)((ulonglong)dVar17 >> 0x20);
  VVar2.Z = SUB84(dVar18,0);
  VVar2.W = (int)((ulonglong)dVar18 >> 0x20);
  (*(uint32_t*)((char*)&(MVar4)+4)) = uVar15;
  MVar4.Data = iVar24;
  FillRectangularPrism((*(Vec4_L_double_G_ *)&(VVar2)),MVar4,pVVar10);
  uStack_14 = 0;
  this_01 = (CustomTexture *)port_op_new(0x3c);
  if (this_01 == (CustomTexture *)0x0) {
    piVar11 = (int *)0x0;
  }
  else {
    piVar11 = (int *)CustomTexture__CustomTexture(this_01);
    if (piVar11 != (int *)0x0) goto LAB_0061ee3b;
  }
  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl",
                  0xd4,"NewPointer",(char *)0x0);
  DebugBreak();
LAB_0061ee3b:
  piVar28 = piVar11;
  pRVar7 = util__ReferenceControllerRegistry__Get();
  (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)(util__ReferenceControllerRegistry__Register(pRVar7,piVar28));
  (*(uint32_t*)&(uStack_14)) = (uint32_t)(uintptr_t)(piVar11);
  if ((*(uint32_t*)((char*)&(uStack_14)+4)) != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference((ReferenceController*)((ReferenceController*)((*(uint32_t*)((char*)&(uStack_14)+4)))));
  }
  auStack_68[0] = 0;
  uStack_5c = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_60 = 1;
  uStack_64 = 1;
  uStack_58 = 2;
  pVVar8 = (Vec3_L_double_G_ *)(uintptr_t)(GetDimensions_m(this,(Vec3_L_double_G_ *)auStack_2c));
  uStack_3c = pVVar8->Y;
  pVVar8 = (Vec3_L_double_G_ *)(uintptr_t)(GetDimensions_m(this,&VStack_80));
  VStack_80.Y = pVVar8->X;
  VStack_80.Z = uStack_3c;
  pSVar12 = (Shader *)BlastLauncherShader__GetStatic();
  Graphics__ShaderStack__ShaderStack(&SStack_9,pSVar12);
  CraftBlueprint__GetStorageCylinder_m
            (*(CraftBlueprint **)(this + 0x140),(Cylinder_L_double_G_ *)(auStack_2c + 8));
  uStack_3c = (double)(*(uint64_t*)((char*)&(auStack_2c)+8)) * 2.0;
  pBVar13 = BlastLauncherShader__GetStatic();
  (**(code **)(*(int *)pBVar13 + 0x5c))(&uStack_3c);
  pMVar14 = (Maybe_L_double_G_ *)(uintptr_t)(GetTubeThicknessNeeded_m(this,(Maybe_L_double_G_ *)(auStack_2c + 8)));
  if (pMVar14->IsValidData == false) {
    uVar15 = 0;
    uVar16 = 0;
  }
  else {
    uVar15 = SUB84(pMVar14->Data,0);
    uVar16 = (undefined4)((ulonglong)pMVar14->Data >> 0x20);
  }
  uStack_3c = (double)CONCAT44(uVar16,uVar15);
  pBVar13 = BlastLauncherShader__GetStatic();
  (**(code **)(*(int *)pBVar13 + 100))(&uStack_3c);
  uVar25 = 1;
  pcVar23 = (long long int (*)())(GetBlastLauncherShader);
  puVar20 = auStack_68;
  piVar11 = (int *)uStack_14;
  pRVar19 = (ReferenceController *)(uintptr_t)((*(uint32_t*)((char*)&(uStack_14)+4)));
  uVar15 = VStack_80.Y;
  uVar16 = VStack_80.Z;
  uVar21 = VStack_80.Z;
  uVar22 = VStack_80.W;
  if ((*(uint32_t*)((char*)&(uStack_14)+4)) != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference((ReferenceController*)((ReferenceController*)((*(uint32_t*)((char*)&(uStack_14)+4)))));
  }
  ArmorTextureHandler__BuildNormalsTexture_L_class_GeneralModuleShader_P____cdecl_P__void__G_
            (piVar11,pRVar19,puVar20,uVar15,uVar16,uVar21,uVar22,pcVar23,uVar25);
  puVar9 = (undefined4 *)(**(code **)(*(int *)(this + 0x58) + 8))();
  GameModel__SetTexture((GameModel *)*puVar9,(SharedPtr_L_struct_CustomTexture_G_ *)&uStack_14);
  Graphics__ShaderStack___ShaderStack(&SStack_9);
  if (((*(uint32_t*)((char*)&(uStack_14)+4)) != (ReferenceController *)0x0) &&
     (bVar5 = util__ReferenceController__ReleaseStrongReference((ReferenceController*)((ReferenceController*)((*(uint32_t*)((char*)&(uStack_14)+4))))), bVar5)) {
    if ((int *)uStack_14 != (int *)0x0) {
      (**(code **)(*(int *)uStack_14 + 0x10))(1);
    }
    piVar11 = (int *)uStack_14;
    pRVar7 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar7,piVar11);
  }
  puVar9 = (undefined4 *)(**(code **)(*(int *)(this + 0x58) + 8))();
  pRVar19 = *(ReferenceController **)(this + 0x180);
  *(undefined4 *)(this + 0x17c) = *puVar9;
  this_00 = (ReferenceController *)puVar9[1];
  *(ReferenceController **)(this + 0x180) = this_00;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
  }
  if (pRVar19 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar19);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0061f000 RenderInitialStateTransparent_0061f000 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void  BlastLauncherModule__RenderInitialStateTransparent(double,class
   CameraManager *,struct util__Vec3_L_double_G_)const  */

void 
BlastLauncherModule__RenderInitialStateTransparent
          (BlastLauncherModule *this,double param_1,CameraManager *param_2,Vec3_L_double_G_ param_3)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  Vec4_L_double_G_ VVar2;
  int iVar3;
  Maybe_L_double_G_ *pMVar4;
  Vec3_L_double_G_ *pVVar5;
  bool bVar6;
  float10 fVar7;
  double dVar8;
  Vec3_L_double_G_ VStack_64;
  Maybe_L_double_G_ MStack_4c;
  double dStack_3c;
  double dStack_34;
  double dStack_2c;
  undefined8 uStack_24;
  Cylinder_L_double_G_ CStack_1c;
  TransformStack TStack_9;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar1 = *(int *)(this + 0x144);
  iVar3 = *(int *)(this + 0x148);
  fVar7 = (float10)(**(code **)(*(int *)this + 0x1b8))();
  fVar7 = fVar7 * (float10)(iVar1 * iVar3) + (float10)1.0;
  dStack_34 = (double)fVar7;
  dStack_2c = (double)fVar7;
  uStack_24 = param_1;
  if (NAN(dStack_2c) == (dStack_2c == 0.0)) {
    uStack_24 = param_1 / dStack_2c;
    dVar8 = util__Floor((double *)&uStack_24);
    uStack_24 = param_1 - dVar8 * dStack_34;
    if (dStack_2c <= 0.0) {
      bVar6 = dStack_2c < uStack_24;
    }
    else {
      bVar6 = uStack_24 < dStack_2c;
    }
    if (bVar6) {
      if (dStack_2c <= 0.0) {
        bVar6 = uStack_24 < 0.0;
      }
      else {
        bVar6 = 0.0 < uStack_24;
      }
      if ((!bVar6 && uStack_24 != 0.0) &&
         (uStack_24 = uStack_24 + dStack_2c,
         (NAN(*(double *)&(uStack_24)) || NAN(dStack_2c)) != (*(double *)&(uStack_24) == dStack_2c))) {
        uStack_24 = 0.0;
      }
    }
    else {
      uStack_24 = 0.0;
    }
  }
  fVar7 = (float10)(**(code **)(*(int *)this + 0x1b8))();
  dStack_2c = (double)((float10)uStack_24 / fVar7);
  if ((int)((float10)uStack_24 / fVar7) < iVar1 * iVar3) {
    fVar7 = (float10)(**(code **)(*(int *)this + 0x1ac))();
    iVar3 = (int)dStack_2c;
    dStack_3c = (double)fVar7;
    iVar1 = *(int *)(this + 0x148);
    uStack_24 = (double)CONCAT44(iVar3 % iVar1,(undefined4)uStack_24);
    CraftBlueprint__GetStorageCylinder_m(*(CraftBlueprint **)(this + 0x140),&CStack_1c);
    dStack_34 = CStack_1c.Radius * 2.0;
    pMVar4 = (Maybe_L_double_G_ *)(uintptr_t)(GetTubeThicknessNeeded_m(this,&MStack_4c));
    if (pMVar4->IsValidData == false) {
      dVar8 = 0.0;
    }
    else {
      dVar8 = pMVar4->Data;
    }
    dStack_2c = -(dVar8 + dStack_34);
    pVVar5 = (Vec3_L_double_G_ *)(uintptr_t)(GetDimensions_m(this,&VStack_64));
    CStack_1c.Radius =
         ((double)(iVar3 / iVar1) * dStack_2c + dStack_2c * 0.5 + pVVar5->X * 0.5 + 0.0) / 1000.0;
    CStack_1c.Height = 0.0;
    dVar8 = dStack_2c * 0.0 + 0.0 + dStack_3c;
    dStack_3c = ((double)(*(uint32_t*)((char*)&(uStack_24)+4)) * dStack_2c + dStack_2c * 0.5 + pVVar5->Y * 0.5 + 0.0) /
                1000.0;
    dStack_2c = dVar8 / 1000.0;
    Graphics__TransformStack__TransformStack(&TStack_9,Style__Default);
    VVar2.Y = dStack_3c;
    VVar2.X = CStack_1c.Radius;
    VVar2.Z = SUB84(dStack_2c,0);
    VVar2.W = (int)((ulonglong)dStack_2c >> 0x20);
    Graphics__Translate(VVar2);
    RenderMuzzleFlash(this);
    Graphics__TransformStack___TransformStack(&TStack_9);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0061f250 SetCachedData_0061f250 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall BlastLauncherModule__SetCachedData(class DataParser *) */

void __thiscall BlastLauncherModule__SetCachedData(BlastLauncherModule *this,DataParser *param_1)

{
  undefined8 stack0xfffffffc;
  ArmorLayerBlueprint **this_00;
  Module *this_01;
  CraftBlueprint *this_02;
  Darray_L_struct_ModulePlacer_G_ *pDVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined **ppuStack_1c;
  void *pvStack_18;
  uint uStack_c;
  uint uStack_8;
  
  this_02 = *(CraftBlueprint **)(this + 0x140);
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  uStack_c = uStack_c & 0xffffff00;
  this_00 = &(this_02->MaterialClass__Armor).ArmorLayers.Data;
  pDVar1 = (Darray_L_struct_ModulePlacer_G_ *)FUN_00534450(&ppuStack_1c,this_00,uStack_c);
  util__Darray_L_ModulePlacer_G___op_assign((Darray_L_ModulePlacer_G_ *)this_00,pDVar1);
  ppuStack_1c = &vftable_121;
  if (pvStack_18 != (void *)0x0) {
    port_op_delete(pvStack_18);
  }
  piVar2 = (int *)CraftBlueprint__GetModules(this_02);
  uStack_c = 0;
  iVar3 = (**(code **)(uintptr_t)(*piVar2 + 0xc))();
  if ((int)uStack_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)*piVar2)(&uStack_c);
      this_01 = (Module *)*puVar4;
      Module__FullDememoize(this_01);
      (**(code **)(this_01->_pad_0x0_0 + 0x144))(param_1);
      Module__UpdateName(this_01,param_1);
      uStack_c = uStack_c + 1;
      iVar3 = (**(code **)(uintptr_t)(*piVar2 + 0xc))();
    } while ((int)uStack_c < iVar3);
  }
  ppuStack_1c = (undefined **)(&vftable_6);
  if (pvStack_18 != (void *)0x0) {
    port_op_delete(pvStack_18);
  }
  CraftBlueprint__CleanupModulePositions(this_02);
  (**(code **)(this_02->_pad_0x0_0 + 0x70))();
  (**(code **)((this_02->MaterialClass__Armor).CraftBlueprintArmorMemoizationHandlerInstance.ResetFunctions.Size +
              100))();
  return;
}

//==== 0061f260 GetStatuses_0061f260 ====

/* public: virtual class DesignStatusBuffer  BlastLauncherModule__GetStatuses(class
   DataParser *)const  */

DesignStatusBuffer * 
BlastLauncherModule__GetStatuses
          (BlastLauncherModule *this,DesignStatusBuffer *__return_storage_ptr__,DataParser *param_1)

{
  Maybe_L_double_G_ *pMVar1;
  Maybe_L_double_G_ local_44;
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
  util__Str_char___Str_char(&local_34,"BlastLauncherWallsTooWeak");
  local_28.Data = (char *)0x0;
  local_28.Capacity = 0;
  local_28.Length = 0;
  local_1c.Data = (char *)0x0;
  local_1c.Capacity = 0;
  local_1c.Length = 0;
  local_10.Data = (char *)0x0;
  local_10.Capacity = 0;
  local_10.Length = 0;
  pMVar1 = (Maybe_L_double_G_ *)(uintptr_t)(GetTubeThicknessNeeded_m(this,&local_44));
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,pMVar1->IsValidData == false,&local_34,&local_10,&local_1c,
             &local_28,(ModulePlacer *)0x0);
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

//==== 0061f360 GetPointerPropertyChoices_0061f360 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   BlastLauncherModule__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

ClassMember * 
BlastLauncherModule__GetPointerPropertyChoices
          (BlastLauncherModule *this,ClassMember *param_1,SerializationManagerInterface *param_2)

{
  bool bVar1;
  char *pcVar2;
  SerializationManagerInterface SVar3;
  Reflectable *in_stack_0000000c;
  undefined1 uVar4;
  
  if (*(int *)&param_2[1] < 1) {
    SVar3 = *(SerializationManagerInterface *)&cde_l2_0b2b1c9f_NullString;
  }
  else {
    SVar3 = *param_2;
  }
  for (pcVar2 = "ArmorMaterial";
      (pcVar2[(int)(*(int *)&SVar3 + -0x92d288)] != '\0' || (*pcVar2 != '\0')); pcVar2 = pcVar2 + 1) {
    if (pcVar2[(int)(*(int *)&SVar3 + -0x92d288)] != *pcVar2) {
      if (*(int *)&param_2[1] < 1) {
        SVar3 = *(SerializationManagerInterface *)&cde_l2_0b2b1c9f_NullString;
      }
      else {
        SVar3 = *param_2;
      }
      for (pcVar2 = "ExplosiveMaterial";
          (pcVar2[(int)(*(int *)&SVar3 + -0x92d298)] != '\0' || (*pcVar2 != '\0')); pcVar2 = pcVar2 + 1)
      {
        if (pcVar2[(int)(*(int *)&SVar3 + -0x92d298)] != *pcVar2) {
          bVar1 = util__Str_char___operator__o9((Str_L_char_G_ *)param_2,"ShipClass__Payload");
          if (!bVar1) {
            (param_1->Name).Data =
                 (char *)&vftable_85;
            (param_1->Name).Capacity = 0;
            (param_1->Name).Length = 0;
            *(undefined4 *)&param_1->Type = 0;
            return param_1;
          }
          GetCraftBlueprintsExcludingItemsDependingOnDatum
                    ((DataParser *)param_1,in_stack_0000000c,SUB41(this,0),false);
          return param_1;
        }
      }
      uVar4 = 8;
LAB_0061f39a:
      GetMaterials((DataParser *)param_1,(int)in_stack_0000000c,(bool)uVar4);
      return param_1;
    }
  }
  uVar4 = true;
  goto LAB_0061f39a;
}





//==== 0061f440 DestroyModels_0061f440 ====

/* public: virtual void __thiscall BlastLauncherModule__DestroyModels(void) */

void __thiscall BlastLauncherModule__DestroyModels(BlastLauncherModule *this)

{
  ReferenceController *this_00;
  bool bVar1;
  ReferenceControllerRegistry *this_01;
  VertexBufferObjectInterface *this_02;
  
  Module__DestroyModels((Module *)this);
  this_00 = *(ReferenceController **)(this + 0x178);
  this_02 = *(VertexBufferObjectInterface **)(this + 0x174);
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined4 *)(this + 0x178) = 0;
  if (this_00 != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__ReleaseStrongReference(this_00);
    if (bVar1) {
      if (this_02 != (VertexBufferObjectInterface *)0x0) {
        this_02[1]._pad_0x0_0 = (int)&vftable_10;
        if ((void *)this_02[1].Type != (void *)0x0) {
          port_op_delete((void *)this_02[1].Type);
        }
        this_02[1].Type = 0;
        this_02[1]._pad_0x0_0 = (int)&vftable;
        VertexBufferObjectInterface___VertexBufferObjectInterface(this_02);
        port_op_delete(this_02,0xa0);
      }
      this_01 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(this_01,this_02);
    }
  }
  return;
}

//==== 0061f4d0 GenerateModels_0061f4d0 ====


/* public: virtual void __thiscall BlastLauncherModule__GenerateModels(void) */

void __thiscall BlastLauncherModule__GenerateModels(BlastLauncherModule *this)

{
  undefined8 stack0xfffffffc;
  VertexBufferObject *this_00;
  TransformStack TStack_a;
  TransformStack TStack_9;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  Module__GenerateModels((Module *)this);
  Graphics__TransformStack__TransformStack(&TStack_a,GraphicsTransformFlag__ClearToIdentity);
  BuildExhaustPlumeModel(this);
  if ((*(int *)(this + 0x174) != 0) && (*(int *)(this + 0x178) != 0)) {
    Graphics__TransformStack__TransformStack(&TStack_9,GraphicsTransformFlag__ClearToIdentity);
    this_00 = GameModel__GetVertexObject(*(GameModel **)(this + 0x174));
    VertexBufferObjectInterface__Generate((VertexBufferObjectInterface *)this_00);
    Graphics__TransformStack___TransformStack(&TStack_9);
  }
  Graphics__TransformStack___TransformStack(&TStack_a);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0061f550 GetReflectionInfo_0061f550 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   BlastLauncherModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall BlastLauncherModule__GetReflectionInfo(BlastLauncherModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_36277275__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_36277275__thread_safe_static_guard_0__);
    if ( cde_l2_36277275__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_c0b31902_ReflectionInfo) = &vftable_277;
      _Init_thread_footer(& cde_l2_36277275__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_c0b31902_ReflectionInfo;
}





//==== 0061f560 scalar_deleting_destructor_0061f560 ====


/* public: virtual void * __thiscall BlastLauncherModule:: 0 scalardeletingdestructor(unsigned int)
    */

void * __thiscall
BlastLauncherModule___scalar_deleting_destructor(BlastLauncherModule *this,uint param_1)

{
  if (*(ReferenceController **)(this + 0x180) != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(*(ReferenceController **)(this + 0x180));
  }
  SharedPtr_L_struct_GameColorModel_G___dtor((SharedPtr_L_struct_GameColorModel_G_ *)(this + 0x174));
  *(undefined ***)(this + 0x100) = (undefined **)(&vftable_15);
  if (*(void **)(this + 0x104) != (void *)0x0) {
    port_op_delete(*(void **)(this + 0x104));
  }
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined ***)(this + 0x100) = (undefined **)(&vftable);
  *(undefined ***)(this + 0xb8) =
       &vftable_109;
  if (*(void **)(this + 0xbc) != (void *)0x0) {
    port_op_delete(*(void **)(this + 0xbc));
  }
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined ***)(this + 0xb8) = (undefined **)(&vftable);
  *(undefined ***)(this + 0x80) =
       &vftable_166;
  if (*(void **)(this + 0x84) != (void *)0x0) {
    port_op_delete(*(void **)(this + 0x84));
  }
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined ***)(this + 0x80) = (undefined **)(&vftable);
  Module___Module((Module *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x188);
  }
  return this;
}





//==== 0061f640 GetTypeName_0061f640 ====


/* public: virtual class util__Str_L_char_G_  BlastLauncherModule__ReflectionInfoStruct_class_BlastLauncherModule___GetTypeName(void)const  */

Str_L_char_G_ * 
BlastLauncherModule__ReflectionInfoStruct_class_BlastLauncherModule___GetTypeName
          (ReflectionInfoStruct_L_class_BlastLauncherModule_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"BlastLauncherModule");
  return __return_storage_ptr__;
}





//==== 0061f660 GetMembers_0061f660 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   BlastLauncherModule__ReflectionInfoStruct_class_BlastLauncherModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
BlastLauncherModule__ReflectionInfoStruct_class_BlastLauncherModule___GetMembers__o2
          (ReflectionInfoStruct_L_class_BlastLauncherModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_0d182ac6__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_0d182ac6__thread_safe_static_guard_0__),
      cde_l2_0d182ac6__thread_safe_static_guard_0__ == -1)) {
     cde_l2_9084e40f_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_0d182ac6__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_9084e40f_Count);
  iVar3 = 0;
  if (0 <  cde_l2_9084e40f_Count) {
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
    } while (iVar3 <  cde_l2_9084e40f_Count);
  }
  return in_stack_00000004;
}





//==== 0061f7a0 GetMember_0061f7a0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   BlastLauncherModule__ReflectionInfoStruct_class_BlastLauncherModule___GetMember(class
   util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
BlastLauncherModule__ReflectionInfoStruct_class_BlastLauncherModule___GetMember__o2
          (ReflectionInfoStruct_L_class_BlastLauncherModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_f4131486__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_f4131486__thread_safe_static_guard_0__),
      cde_l2_f4131486__thread_safe_static_guard_0__ == -1)) {
     cde_l2_aff734be_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_f4131486__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_aff734be_Count) {
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
LAB_0061f82d:
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
          if (cVar3 == '\0') goto LAB_0061f82d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_aff734be_Count);
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





//==== 0061f940 GetFactory_0061f940 ====


/* public: virtual class util__Reflectable * (__cdecl*
   BlastLauncherModule__ReflectionInfoStruct_class_BlastLauncherModule___GetFactory(void)const
   )(void) */

_func_Reflectable_ptr * 
__thiscall BlastLauncherModule__ReflectionInfoStruct_class_BlastLauncherModule___GetFactory__o2
          (ReflectionInfoStruct_L_class_BlastLauncherModule_G_ *this)

{
  return StaticFactory;
}





//==== 0061fec0 EndOfSessionResolution_0061fec0 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual bool  RailgunCompartment__EndOfSessionResolution(void) */

bool RailgunCompartment__EndOfSessionResolution(void)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = WeaponCompartment__EndOfSessionResolution();
  bVar2 = LauncherSubCompartment__EndOfSessionResolution();
  if ((bVar1) && (bVar2)) {
    return true;
  }
  return false;
}





//==== 00620320 GetBlastLauncherShader ====


/* class BlastLauncherShader * __cdecl GetBlastLauncherShader(void) */

BlastLauncherShader * __cdecl GetBlastLauncherShader(void)

{
  BlastLauncherShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_74ed122d__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_f679ee27__thread_safe_static_guard_0__);
    if ( cde_l2_f679ee27__thread_safe_static_guard_0__ == -1) {
      this = (BlastLauncherShader *)port_op_new(100);
      if (this == (BlastLauncherShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,100);
        pSVar1 = (Shader *)BlastLauncherShader__BlastLauncherShader(this);
      }
       cde_l2_e773a530_Singleton = (BlastLauncherShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_f679ee27__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_e773a530_Singleton;
}





//==== 00620330 GetCachedBoundingBox_m_Clear ====

/* public: void __thiscall CarrierModule__GetCachedBoundingBox_m_Clear(void)const  */

void __thiscall CarrierModule__GetCachedBoundingBox_m_Clear(CarrierModule *this)

{
  *(undefined1 *)&(this->Launcher)._pad_0x0_0 = 0;
  *(undefined4 *)&(this->GetCachedBoundingBox_m_MemoizedValue).Data.Upper.Y = 0;
  *(undefined4 *)((int)&(this->GetCachedBoundingBox_m_MemoizedValue).Data.Upper.Y + 4) = 0;
  *(undefined4 *)&(this->GetCachedBoundingBox_m_MemoizedValue).Data.Upper.Z = 0;
  *(undefined4 *)((int)&(this->GetCachedBoundingBox_m_MemoizedValue).Data.Upper.Z + 4) = 0;
  *(undefined4 *)&(this->GetCachedBoundingBox_m_MemoizedValue).IsValidData = 0;
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetCachedBoundingBox_m_MemoizedValue)) + 0x34)) = 0;
  *(undefined4 *)&(this->GetCachedPowerUsed_W_MemoizedValue).Data = 0;
  *(undefined4 *)((int)&(this->GetCachedPowerUsed_W_MemoizedValue).Data + 4) = 0;
  *(undefined4 *)&(this->GetCachedPowerUsed_W_MemoizedValue).IsValidData = 0;
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetCachedPowerUsed_W_MemoizedValue)) + 0xc)) = 0;
  this->ShipClass__Payload = (CraftBlueprint *)0x0;
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)(uintptr_t)(this) + 0xf4)) = 0;
  return;
}

//==== 00620360 GetDimensions_m ====


/* public: struct util__Vec3_L_double_G_ __thiscall BlastLauncherModule__GetDimensions_m(void)const  */

Vec3_L_double_G_ * __thiscall
BlastLauncherModule__GetDimensions_m(BlastLauncherModule *this,Vec3_L_double_G_ *__return_storage_ptr__)

{
  undefined8 stack0xfffffffc;
  Maybe_L_double_G_ *pMVar1;
  Cylinder_L_double_G_ *pCVar2;
  double dVar3;
  Cylinder_L_double_G_ CStack_58;
  Maybe_L_double_G_ MStack_48;
  double dStack_38;
  undefined1 auStack_30 [16];
  double dStack_20;
  Cylinder_L_double_G_ CStack_18;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  CraftBlueprint__GetStorageCylinder_m(*(CraftBlueprint **)(this + 0x140),&CStack_18);
  dStack_20 = CStack_18.Radius * 2.0;
  pMVar1 = (Maybe_L_double_G_ *)(uintptr_t)(GetTubeThicknessNeeded_m(this,(Maybe_L_double_G_ *)auStack_30));
  dVar3 = 0.0;
  dStack_38 = 0.0;
  if (pMVar1->IsValidData != false) {
    dVar3 = pMVar1->Data;
  }
  dStack_20 = dVar3 + dStack_20;
  CraftBlueprint__GetStorageCylinder_m(*(CraftBlueprint **)(this + 0x140),&CStack_18);
  (*(uint64_t*)((char*)&(auStack_30)+8)) =
       (*(double *)(this + 0x150) / *(double *)(*(int *)(this + 0x14c) + 0x30)) /
       (CStack_18.Radius * 2.0 * CStack_18.Radius * 2.0);
  pCVar2 = CraftBlueprint__GetStorageCylinder_m(*(CraftBlueprint **)(this + 0x140),&CStack_58);
  (*(uint64_t*)((char*)&(auStack_30)+8)) = pCVar2->Height + (double)(*(uint64_t*)((char*)&(auStack_30)+8));
  pMVar1 = (Maybe_L_double_G_ *)(uintptr_t)(GetTubeThicknessNeeded_m(this,&MStack_48));
  if (pMVar1->IsValidData == false) {
    dVar3 = 0.0;
  }
  else {
    dVar3 = pMVar1->Data;
  }
  CStack_18.Height = dVar3 + (double)(*(uint64_t*)((char*)&(auStack_30)+8)) + *(double *)(this + 0x160);
  pMVar1 = (Maybe_L_double_G_ *)(uintptr_t)(GetTubeThicknessNeeded_m(this,&MStack_48));
  if (pMVar1->IsValidData == false) {
    (*(uint64_t*)((char*)&(auStack_30)+8)) = 0.0;
  }
  else {
    (*(uint64_t*)((char*)&(auStack_30)+8)) = pMVar1->Data;
  }
  (*(uint64_t*)((char*)&(auStack_30)+8)) = (double)*(int *)(this + 0x148) * dStack_20 + (double)(*(uint64_t*)((char*)&(auStack_30)+8));
  pMVar1 = (Maybe_L_double_G_ *)(uintptr_t)(GetTubeThicknessNeeded_m(this,&MStack_48));
  if (pMVar1->IsValidData != false) {
    dStack_38 = pMVar1->Data;
  }
  __return_storage_ptr__->X = (double)*(int *)(this + 0x144) * dStack_20 + dStack_38;
  __return_storage_ptr__->Y = (double)(*(uint64_t*)((char*)&(auStack_30)+8));
  __return_storage_ptr__->Z = CStack_18.Height;
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}





//==== 006204e0 GetGasExpansionPlume_Clear_006204e0 ====


/* public: void __thiscall BlastLauncherModule__GetGasExpansionPlume_Clear(void)const  */

void __thiscall BlastLauncherModule__GetGasExpansionPlume_Clear(BlastLauncherModule *this)

{
  undefined **ppuStack_3c;
  void *pvStack_38;
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
  BlastLauncherModule BStack_c;
  
  ppuStack_3c = (undefined **)(&vftable_15);
  pvStack_38 = (void *)0x0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  *(char *)&(BStack_c) = 0x0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  util__Darray_struct_MaterialConstituent___operator
            ((Darray_L_struct_MaterialConstituent_G_ *)(this + 0x100),
             (Darray_L_struct_MaterialConstituent_G_ *)&ppuStack_3c);
  this[0x130] = BStack_c;
  ppuStack_3c = (undefined **)(&vftable_15);
  *(undefined4 *)(this + 0x110) = uStack_2c;
  *(undefined4 *)(this + 0x114) = uStack_28;
  *(undefined4 *)(this + 0x118) = uStack_24;
  *(undefined4 *)(this + 0x11c) = uStack_20;
  *(undefined4 *)(this + 0x120) = uStack_1c;
  *(undefined4 *)(this + 0x124) = uStack_18;
  *(undefined4 *)(this + 0x128) = uStack_14;
  *(undefined4 *)(this + 300) = uStack_10;
  if (pvStack_38 != (void *)0x0) {
    port_op_delete(pvStack_38);
  }
  *(char *)&(this[0x138]) = 0x0;
  return;
}





//==== 00620560 GetGasExpansionPlume_Memoize ====


/* public: void __thiscall BlastLauncherModule__GetGasExpansionPlume_Memoize(void)const  */

void __thiscall BlastLauncherModule__GetGasExpansionPlume_Memoize(BlastLauncherModule *this)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  int iVar2;
  bool bVar3;
  Maybe_L_double_G_ *pMVar4;
  Cylinder_L_double_G_ *pCVar5;
  float10 fVar6;
  Cylinder_L_double_G_ CStack_f8;
  Maybe_L_double_G_ MStack_e8;
  undefined **ppuStack_d8;
  void *pvStack_d4;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  BlastLauncherModule BStack_a8;
  double dStack_a0;
  double dStack_98;
  undefined **ppuStack_90;
  void *pvStack_8c;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  BlastLauncherModule BStack_60;
  BlastLauncherModule BStack_58;
  undefined **ppuStack_50;
  void *pvStack_4c;
  double dStack_40;
  double dStack_38;
  undefined8 uStack_30;
  Cylinder_L_double_G_ CStack_28;
  Cylinder_L_double_G_ CStack_18;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (*(char *)&(this[0x138]) == 0) {
    iVar1 = *(int *)(this + 0xc0);
    uStack_30 = (double)CONCAT44(iVar1 + 1,(undefined4)uStack_30);
    util__Darray_struct_util__tuple2_enum_Order__Type_int_____SetSize
              ((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)(this + 0xb8),
               (int *)((int)&uStack_30 + 4));
    bVar3 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)(this + 0xb8),iVar1);
    if (bVar3) {
      iVar1 = *(int *)(this + 0xbc);
      iVar2 = *(int *)(this + 0xc0);
      *(code **)(iVar1 + -8 + iVar2 * 8) = (long long int (*)())(GetGasExpansionPlume_Clear);
      *(undefined4 *)(iVar1 + -4 + iVar2 * 8) = 0;
    }
    dStack_98 = 2.0;
    CraftBlueprint__GetStorageCylinder_m(*(CraftBlueprint **)(this + 0x140),&CStack_18);
    uStack_30 = (CStack_18.Radius * 2.0);
    pMVar4 = util__Sqrt(&MStack_e8,&dStack_98);
    if (pMVar4->IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    uStack_30 = uStack_30 * pMVar4->Data * 0.5;
    fVar6 = (float10)(**(code **)(*(int *)this + 0x154))();
    dStack_40 = (double)fVar6;
    CraftBlueprint__GetStorageCylinder_m(*(CraftBlueprint **)(this + 0x140),&CStack_28);
    dStack_38 = (*(double *)(this + 0x150) / *(double *)(*(int *)(this + 0x14c) + 0x30)) /
                (CStack_28.Radius * 2.0 * CStack_28.Radius * 2.0);
    pCVar5 = CraftBlueprint__GetStorageCylinder_m(*(CraftBlueprint **)(this + 0x140),&CStack_f8);
    dStack_a0 = (dStack_40 * 1000.0 * *(double *)(this + 0x150)) /
                (*(double *)(this + 0x160) + pCVar5->Height + dStack_38);
    Material__GetDecompositionProductsByMassPercent(*(Material **)(this + 0x14c));
    dStack_40 = Material__GetAdiabaticFlameTemperature_K(*(Material **)(this + 0x14c));
    fVar6 = (float10)(**(code **)(*(int *)this + 0x154))();
    dStack_38 = (double)fVar6;
    util__Darray_struct_MaterialConstituent___Darray_struct_MaterialConstituent
              ((Darray_L_struct_MaterialConstituent_G_ *)&ppuStack_d8,
               (Darray_L_struct_MaterialConstituent_G_ *)&ppuStack_50);
    uStack_c8 = uStack_30;
    uStack_c0 = dStack_40;
    uStack_b8 = dStack_38;
    uStack_b0 = dStack_a0;
    *(char *)&(BStack_a8) = 0x1;
    ppuStack_50 = (undefined **)(&vftable_15);
    if (pvStack_4c != (void *)0x0) {
      port_op_delete(pvStack_4c);
    }
    pvStack_4c = (void *)0x0;
    ppuStack_50 = (undefined **)(&vftable);
    util__Darray_struct_MaterialConstituent___Darray_struct_MaterialConstituent
              ((Darray_L_struct_MaterialConstituent_G_ *)&ppuStack_90,
               (Darray_L_struct_MaterialConstituent_G_ *)&ppuStack_d8);
    BStack_60 = BStack_a8;
    uStack_80 = (undefined4)uStack_c8;
    uStack_7c = (*(uint32_t*)((char*)&(uStack_c8)+4));
    uStack_78 = (undefined4)uStack_c0;
    uStack_74 = (*(uint32_t*)((char*)&(uStack_c0)+4));
    *(char *)&(BStack_58) = 0x1;
    uStack_70 = (undefined4)uStack_b8;
    uStack_6c = (*(uint32_t*)((char*)&(uStack_b8)+4));
    uStack_68 = (undefined4)uStack_b0;
    uStack_64 = (*(uint32_t*)((char*)&(uStack_b0)+4));
    util__Darray_struct_MaterialConstituent___operator
              ((Darray_L_struct_MaterialConstituent_G_ *)(this + 0x100),
               (Darray_L_struct_MaterialConstituent_G_ *)&ppuStack_90);
    this[0x130] = BStack_60;
    *(undefined4 *)(this + 0x110) = uStack_80;
    *(undefined4 *)(this + 0x114) = uStack_7c;
    *(undefined4 *)(this + 0x118) = uStack_78;
    *(undefined4 *)(this + 0x11c) = uStack_74;
    ppuStack_90 = (undefined **)(&vftable_15);
    *(undefined4 *)(this + 0x120) = uStack_70;
    *(undefined4 *)(this + 0x124) = uStack_6c;
    *(undefined4 *)(this + 0x128) = uStack_68;
    *(undefined4 *)(this + 300) = uStack_64;
    this[0x138] = BStack_58;
    if (pvStack_8c != (void *)0x0) {
      port_op_delete(pvStack_8c);
    }
    pvStack_8c = (void *)0x0;
    ppuStack_90 = (undefined **)(&vftable);
    ppuStack_d8 = (undefined **)(&vftable_15);
    if (pvStack_d4 != (void *)0x0) {
      port_op_delete(pvStack_d4);
    }
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00620860 GetSingleAmmoExplosion ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: struct AmmoExplosion  BlastLauncherModule__GetSingleAmmoExplosion(void)const
    */

AmmoExplosion * 
BlastLauncherModule__GetSingleAmmoExplosion
          (BlastLauncherModule *this,AmmoExplosion *__return_storage_ptr__)

{
  undefined8 stack0xfffffffc;
  CraftBlueprint *this_00;
  Material *this_01;
  ChemicalReaction *this_02;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Darray_L_MaterialConstituent_G_ *pDVar4;
  AmmoExplosion *pAVar5;
  code *pcVar6;
  undefined1 local_50 [16];
  undefined8 local_40;
  double dStack_38;
  int local_30;
  int local_2c;
  AmmoExplosion local_28;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  this_00 = *(CraftBlueprint **)(this + 0x140);
  if (this_00 == (CraftBlueprint *)0x0) {
    local_28.GasComposition._pad_0x0_0 = (int)&vftable_15;
    local_28.GasComposition.Data = (MaterialConstituent *)0x0;
    pAVar5 = &local_28;
    local_28.GasComposition.Size = 0;
    local_28.GasComposition.Capacity = 0;
    local_28.Mass_kg = 0.0;
    local_28.Temperature_K = 0.0;
    local_30 = 0;
    *(uint32_t *)&local_2c = 2;
  }
  else {
    CraftBlueprint__GetAmmoExplosion_Memoize(this_00);
    if ((char)((this_00->GetEstimatedRollTorque_N_m_MemoizedValue).Data == '\0')){
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    util__Darray_L_MaterialConstituent_G___Darray_L_MaterialConstituent_G_
              ((Darray_L_MaterialConstituent_G_ *)local_50,
               (Darray_L_struct_MaterialConstituent_G_ *)
               ((this_00->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 8));
    local_40 = (this_00->GetEstimatedTurnTorque_N_m_MemoizedValue).Data;
    dStack_38 = *(double *)&(this_00->GetEstimatedTurnTorque_N_m_MemoizedValue).IsValidData;
    pAVar5 = (AmmoExplosion *)local_50;
    local_30 = 1;
    *(uint32_t *)&local_2c = 0;
  }
  util__Darray_L_MaterialConstituent_G___Darray_L_MaterialConstituent_G_
            (&__return_storage_ptr__->GasComposition,(Darray_L_struct_MaterialConstituent_G_ *)pAVar5);
  uVar1 = *(undefined4 *)((int)&pAVar5->Mass_kg + 4);
  uVar2 = *(undefined4 *)&pAVar5->Temperature_K;
  uVar3 = *(undefined4 *)((int)&pAVar5->Temperature_K + 4);
  *(undefined4 *)&__return_storage_ptr__->Mass_kg = *(undefined4 *)&pAVar5->Mass_kg;
  *(undefined4 *)((int)&__return_storage_ptr__->Mass_kg + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Temperature_K = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Temperature_K + 4) = uVar3;
  if (local_2c != 0) {
    local_28.GasComposition._pad_0x0_0 = (int)&vftable_15;
    if (local_28.GasComposition.Data != (MaterialConstituent *)0x0) {
      port_op_delete(local_28.GasComposition.Data);
    }
    local_28.GasComposition.Data = (MaterialConstituent *)0x0;
    local_28.GasComposition._pad_0x0_0 = (int)&vftable;
  }
  if ((local_30 != 0) &&
     ((*(uint32_t*)&(local_50)) = (uint32_t)(uintptr_t)(&vftable_15),
     (MaterialConstituent *)(*(uint32_t*)((char*)&(local_50)+4)) != (MaterialConstituent *)0x0)) {
    port_op_delete((void *)(uintptr_t)*(uint32_t *)((char *)&(local_50)+4));
  }
  if ((*(Material **)(this + 0x14c) != (Material *)0x0) && (0.0 < *(double *)(this + 0x150))) {
    local_28.GasComposition._pad_0x0_0 = (int)&vftable_15;
    local_28.GasComposition.Data = (MaterialConstituent *)0x0;
    local_28.GasComposition.Size = 0;
    local_28.GasComposition.Capacity = 0;
    local_28.Mass_kg = 0.0;
    local_28.Temperature_K = 0.0;
    pDVar4 = (Darray_L_MaterialConstituent_G_ *)(uintptr_t)(Material__GetDecompositionProductsByMassPercent
                       (*(Material **)(this + 0x14c),(Darray_L_MaterialConstituent_G_ *)&local_40));
    util__Darray_L_MaterialConstituent_G___op_assign
              (&local_28.GasComposition,(Darray_L_struct_MaterialConstituent_G_ *)pDVar4);
    local_40 = (double)CONCAT44((*(uint32_t*)((char*)&(local_40)+4)),&vftable_15);
    if ((*(uint32_t*)((char*)&(local_40)+4)) != (MaterialConstituent *)0x0) {
      port_op_delete((*(uint32_t*)((char*)&(local_40)+4)));
    }
    local_28.Mass_kg = *(double *)(this + 0x150);
    this_01 = *(Material **)(this + 0x14c);
    Material__GetDecompositionReaction_Memoize(this_01);
    pcVar6 = DebugBreak_exref;
    if ((char)this_01[1].Elements.Capacity == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      pcVar6 = DebugBreak_exref;
      DebugBreak();
    }
    this_02 = (ChemicalReaction *)this_01[1].Elements.Size;
    ChemicalReaction__GetAdiabaticFlameTemperature_K_Memoize(this_02);
    if ((this_02->GetAdiabaticFlameTemperature_K_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      (*pcVar6)();
    }
    local_28.Temperature_K = (this_02->GetAdiabaticFlameTemperature_K_MemoizedValue).Data;
    pAVar5 = CompositeAmmoExplosions((AmmoExplosion *)local_50,__return_storage_ptr__,&local_28);
    util__Darray_L_MaterialConstituent_G___op_assign
              (&__return_storage_ptr__->GasComposition,(Darray_L_struct_MaterialConstituent_G_ *)pAVar5)
    ;
    __return_storage_ptr__->Mass_kg = pAVar5->Mass_kg;
    __return_storage_ptr__->Temperature_K = pAVar5->Temperature_K;
    (*(uint32_t*)&(local_50)) = (uint32_t)(uintptr_t)(&vftable_15);
    if ((MaterialConstituent *)(*(uint32_t*)((char*)&(local_50)+4)) != (MaterialConstituent *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(local_50)+4)));
    }
    local_28.GasComposition._pad_0x0_0 = (int)&vftable_15;
    if (local_28.GasComposition.Data != (MaterialConstituent *)0x0) {
      port_op_delete(local_28.GasComposition.Data);
    }
  }
  return __return_storage_ptr__;
}


//==== 00620d80 GetUIActions_00620d80 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual class util__Darray_L_structutil__tuple5_L_void___cdecl_P__void__Cclass_util__Str_L_char_G__Cclassutil__Str_L_char_G__Cclassutil__Delegate_L_void_G__Cclassutil__Str_L_char_G__G__G_
    CarrierCompartment__GetUIActions(void) */

undefined4 CarrierCompartment__GetUIActions(void)

{
  undefined4 in_stack_00000004;
  
  LauncherSubCompartment__GetUIActions();
}





//==== 00620da0 GetUIToggleActions_00620da0 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual class util__Darray_L_structutil__tuple5_L_void___cdecl_P__void__Cclass_util__Str_L_char_G__Cclassutil__Str_L_char_G__Cbool_P_Cclassutil__Str_L_char_G__G__G_ 
   CarrierCompartment__GetUIToggleActions(void) */

undefined4 CarrierCompartment__GetUIToggleActions(void)

{
  undefined4 in_stack_00000004;
  
  LauncherSubCompartment__GetUIToggleActions();
}





//==== 00621380 RenderMuzzleFlash ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall BlastLauncherModule__RenderMuzzleFlash(void)const  */

void __thiscall BlastLauncherModule__RenderMuzzleFlash(BlastLauncherModule *this)

{
  undefined8 stack0xfffffffc;
  ExhaustShader *pEVar1;
  float10 fVar2;
  double local_14;
  ShaderStack local_b;
  BlendStack local_a;
  CullStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((*(int *)(this + 0x174) != 0) && (*(int *)(this + 0x178) != 0)) {
    pEVar1 = ExhaustShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_b,(Shader *)pEVar1);
    Graphics__BlendStack__BlendStack(&local_a,BlendMode__Sum);
    Graphics__CullStack__CullStack(&local_9,CullMode__Disabled);
    fVar2 = (float10)(**(code **)(*(int *)this + 0x154))();
    local_14 = (double)(fVar2 * (float10)100.0);
    pEVar1 = ExhaustShader__GetStatic();
    (**(code **)(pEVar1->_pad_0x0_0 + 0x54))(&local_14);
    GetGasExpansionPlume_Memoize(this);
    if (*(char *)&(this[0x138]) == 0) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    local_14 = GasExpansionPlume__GetExhaustPlumeModelRatio((GasExpansionPlume *)(this + 0x100),0.0)
    ;
    pEVar1 = ExhaustShader__GetStatic();
    (**(code **)(pEVar1->_pad_0x0_0 + 0x5c))();
    GameColorModel__Render(*(GameColorModel **)(this + 0x174));
    CullStack__dtor(&local_9);
    BlendStack__dtor(&local_a);
    Graphics__ShaderStack___ShaderStack(&local_b);
  }
  return;
}

//==== 006215a0 RunActions_006215a0 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual void  RailgunCompartment__RunActions(double) */

void RailgunCompartment__RunActions(double)

{
  LauncherSubCompartment__RunActions(param_1);
  return;
}





//==== 006215c0 StaticFactory_006215c0 ====

/* public: static class util__Reflectable * __cdecl BlastLauncherModule__ReflectionInfoStruct_L_class_BlastLauncherModule_G___StaticFactory(void) */

Reflectable * __cdecl
BlastLauncherModule__ReflectionInfoStruct_class_BlastLauncherModule___StaticFactory(void)

{
  Module *this;
  
  this = (Module *)(uintptr_t)(port_op_new(0x188));
  if (this != (Module *)0x0) {
    memset(this,0,0x188);
    Module__Module(this);
    *(undefined1 *)&this[1].GetTotalPowerUsage_W_MemoizedValue.Data = 0;
    *(undefined8 *)&this[1].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    *(undefined4 *)&this[1].GetTotalPowerUsage_W_MemoizedValue.IsValidData = 0;
  *(undefined4 *)((char *)&this[1].GetTotalPowerUsage_W_MemoizedValue + 0xc) = 0;
    this[1].Models._pad_0x0_0 = 0;
    this[1].Models.Data = (SharedPtr_L_GameModel_G_ *)0x0;
    *(undefined ***)&this[1].GetTotalPowerUsage_W_MemoizedValue.IsValidData =
         &vftable_166;
  *(undefined4 *)((char *)&this[1].GetTotalPowerUsage_W_MemoizedValue + 0xc) = 0;
    this[1].Models._pad_0x0_0 = 0;
    this[1].Models.Data = (SharedPtr_L_GameModel_G_ *)0x0;
    this[1].Models.Size = 0;
    this[1].Models.Capacity = 0;
    this[1].UsesCustomName = false;
    this[2]._pad_0x0_0 = 0;
    this[2]._pad_0x4_1 = 0;
    *(undefined1 *)&this[2]._pad_0x8_2 = 0;
    this->_pad_0x0_0 = (int)&vftable_for_EditorReflectable__27;
    *(undefined4 *)&(this->GetTotalPowerUsage_W_MemoizedValue).field_0xc = (undefined4)(uintptr_t)vftable_for_util__RTTIBaseClass__26;
    this[2].ModuleMemoizationHandlerInstance.ResetFunctions.Data = (pmf_27707b45 *)0x0;
    this[2].ModuleMemoizationHandlerInstance.ResetFunctions.Size = 0;
    this[2].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    *(undefined4 *)&this[2].ModuleMemoizationHandlerInstance = 0;
    this[2].ModuleMemoizationHandlerInstance.ResetFunctions.Data = (undefined **)((pmf_27707b45 *)&vftable_109);
    this[2].ModuleMemoizationHandlerInstance.ResetFunctions.Size = 0;
    this[2].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    *(undefined4 *)&this[2].ModuleMemoizationHandlerInstance = 0;
    *(undefined4 *)&this[2].GetTotalPowerUsage_W_MemoizedValue.Data = 0;
    *(undefined4 *)((int)&this[2].GetTotalPowerUsage_W_MemoizedValue.Data + 4) = 0;
    *(undefined4 *)&this[2].GetTotalPowerUsage_W_MemoizedValue.IsValidData = 0;
  *(undefined4 *)((char *)&this[2].GetTotalPowerUsage_W_MemoizedValue + 0xc) = 0;
    this[2].Models._pad_0x0_0 = 0;
    this[2].Models.Data = (SharedPtr_L_GameModel_G_ *)0x0;
    this[2].Models.Size = 0;
    this[2].Models.Capacity = 0;
    this[2].UsesCustomName = false;
    this[2].IsUserCreated = false;
  *(undefined2 *)((char *)&this[2] + 0x4a) = 0;
  *(undefined4 *)((char *)&this[2] + 0x4c) = 0;
    this[3]._pad_0x0_0 = 0;
    this[3]._pad_0x4_1 = 0;
    *(undefined1 *)&this[3]._pad_0x8_2 = 0;
    this[3]._pad_0x10_4 = (int)&vftable_15;
    this[3].ModuleMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 = 0;
    this[3].ModuleMemoizationHandlerInstance.ResetFunctions.Data = (pmf_27707b45 *)0x0;
    this[3].ModuleMemoizationHandlerInstance.ResetFunctions.Size = 0;
    this[3].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    *(undefined4 *)&this[3].ModuleMemoizationHandlerInstance = 0;
    *(undefined4 *)&this[3].GetTotalPowerUsage_W_MemoizedValue.Data = 0;
    *(undefined4 *)((int)&this[3].GetTotalPowerUsage_W_MemoizedValue.Data + 4) = 0;
    *(undefined1 *)&this[3].Models.Size = 0;
    *(undefined4 *)&this[3].GetTotalPowerUsage_W_MemoizedValue.IsValidData = 0;
  *(undefined4 *)((char *)&this[3].GetTotalPowerUsage_W_MemoizedValue + 0xc) = 0;
    this[3].Models._pad_0x0_0 = 0;
    this[3].Models.Data = (SharedPtr_L_GameModel_G_ *)0x0;
    this[3].UsesCustomName = false;
  *(undefined4 *)((char *)&this[4].GetTotalPowerUsage_W_MemoizedValue + 0xc) = 0;
    this[4].Models._pad_0x0_0 = 0;
    this[4].Models.Data = (SharedPtr_L_GameModel_G_ *)0x0;
    this[4].Models.Size = 0;
    return (Reflectable *)this;
  }
  return (Reflectable *)0x0;
}

//==== 00621720 StaticGetMemberByIndex_00621720 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   BlastLauncherModule__ReflectionInfoStruct_class_BlastLauncherModule___StaticGetMemberByIndex(int)
    */

ClassMember * __cdecl
BlastLauncherModule__ReflectionInfoStruct_class_BlastLauncherModule___StaticGetMemberByIndex__o2
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_f412dc5a__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_f412dc5a__thread_safe_static_guard_0__);
    if ( cde_l2_f412dc5a__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_6dac0c5c_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00973fe4 = 0;
      _DAT_00973fe8 = 0;
      _DAT_00973fec = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973ff0,"Unused");
      _DAT_00973ffc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974000,"SteamWorkshopID");
      _DAT_0097400c = 6;
      _DAT_00974010 = 0x10;
      _DAT_00974014 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974018,"AStr");
      _DAT_00974024 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974028,"Description");
      _DAT_00974034 = 6;
      _DAT_00974038 = 0x20;
      _DAT_0097403c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974040,"AStr");
      _DAT_0097404c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974050,"UsesCustomName");
      _DAT_0097405c = 1;
      _DAT_00974060 = 0x68;
      _DAT_00974064 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974068,"bool");
      _DAT_00974074 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974078,"ShipClass__Payload");
      _DAT_00974084 = 8;
      _DAT_00974088 = 0x140;
      _DAT_0097408c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974090,"CraftBlueprint");
      _DAT_0097409c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009740a0,"PayloadRows");
      _DAT_009740ac = 2;
      _DAT_009740b0 = 0x144;
      _DAT_009740b4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009740b8,"int");
      _DAT_009740c4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009740c8,"PayloadColumns");
      _DAT_009740d4 = 2;
      _DAT_009740d8 = 0x148;
      _DAT_009740dc = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009740e0,"int");
      _DAT_009740ec = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009740f0,"ExplosiveMaterial");
      _DAT_009740fc = 8;
      _DAT_00974100 = 0x14c;
      _DAT_00974104 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974108,"Material");
      _DAT_00974114 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974118,"ExplosiveMass_kg");
      _DAT_00974124 = 4;
      _DAT_00974128 = 0x150;
      _DAT_0097412c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974130,"double");
      _DAT_0097413c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974140,"ArmorMaterial");
      _DAT_0097414c = 8;
      _DAT_00974150 = 0x158;
      _DAT_00974154 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974158,"Material");
      _DAT_00974164 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974168,"ArmorThickness_m");
      _DAT_00974174 = 4;
      _DAT_00974178 = 0x160;
      _DAT_0097417c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974180,"double");
      _DAT_0097418c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974190,"EngagementRange_km");
      _DAT_0097419c = 4;
      _DAT_009741a0 = 0x168;
      _DAT_009741a4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009741a8,"double");
      _DAT_009741b4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009741b8,"TargetsShips");
      _DAT_009741c4 = 1;
      _DAT_009741c8 = 0xb0;
      _DAT_009741cc = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009741d0,"bool");
      _DAT_009741dc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009741e0,"TargetsShots");
      _DAT_009741ec = 1;
      _DAT_009741f0 = 0xb1;
      _DAT_009741f4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009741f8,"bool");
      _DAT_00974204 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974208,"LaunchCountCap");
      _DAT_00974214 = 2;
      _DAT_00974218 = 0x170;
      _DAT_0097421c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974220,"int");
      _DAT_0097422c = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_BlastLauncherModule__ReflectionInfoStruct_class_BlastLauncherModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_f412dc5a__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_6dac0c5c_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_00973fe4 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_00973fe8 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_00973fec + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_00973ff0 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_00973ffc)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_00973ffd)[iVar1];
  return __return_storage_ptr__;
}





//==== 00621be0 StaticGetMemberCount_00621be0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl BlastLauncherModule__ReflectionInfoStruct_class_BlastLauncherModule___StaticGetMemberCount(void) */

int __cdecl
BlastLauncherModule__ReflectionInfoStruct_class_BlastLauncherModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_3686e9fe__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_3686e9fe__thread_safe_static_guard_0__);
    if ( cde_l2_3686e9fe__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_47f3d86e_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00973d84 = 0;
      _DAT_00973d88 = 0;
      _DAT_00973d8c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973d90,"Unused");
      _DAT_00973d9c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973da0,"SteamWorkshopID");
      _DAT_00973dac = 6;
      _DAT_00973db0 = 0x10;
      _DAT_00973db4 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973db8,"AStr");
      _DAT_00973dc4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973dc8,"Description");
      _DAT_00973dd4 = 6;
      _DAT_00973dd8 = 0x20;
      _DAT_00973ddc = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973de0,"AStr");
      _DAT_00973dec = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973df0,"UsesCustomName");
      _DAT_00973dfc = 1;
      _DAT_00973e00 = 0x68;
      _DAT_00973e04 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973e08,"bool");
      _DAT_00973e14 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973e18,"ShipClass__Payload");
      _DAT_00973e24 = 8;
      _DAT_00973e28 = 0x140;
      _DAT_00973e2c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973e30,"CraftBlueprint");
      _DAT_00973e3c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973e40,"PayloadRows");
      _DAT_00973e4c = 2;
      _DAT_00973e50 = 0x144;
      _DAT_00973e54 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973e58,"int");
      _DAT_00973e64 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973e68,"PayloadColumns");
      _DAT_00973e74 = 2;
      _DAT_00973e78 = 0x148;
      _DAT_00973e7c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973e80,"int");
      _DAT_00973e8c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973e90,"ExplosiveMaterial");
      _DAT_00973e9c = 8;
      _DAT_00973ea0 = 0x14c;
      _DAT_00973ea4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973ea8,"Material");
      _DAT_00973eb4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973eb8,"ExplosiveMass_kg");
      _DAT_00973ec4 = 4;
      _DAT_00973ec8 = 0x150;
      _DAT_00973ecc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973ed0,"double");
      _DAT_00973edc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973ee0,"ArmorMaterial");
      _DAT_00973eec = 8;
      _DAT_00973ef0 = 0x158;
      _DAT_00973ef4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973ef8,"Material");
      _DAT_00973f04 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973f08,"ArmorThickness_m");
      _DAT_00973f14 = 4;
      _DAT_00973f18 = 0x160;
      _DAT_00973f1c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973f20,"double");
      _DAT_00973f2c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973f30,"EngagementRange_km");
      _DAT_00973f3c = 4;
      _DAT_00973f40 = 0x168;
      _DAT_00973f44 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973f48,"double");
      _DAT_00973f54 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973f58,"TargetsShips");
      _DAT_00973f64 = 1;
      _DAT_00973f68 = 0xb0;
      _DAT_00973f6c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973f70,"bool");
      _DAT_00973f7c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973f80,"TargetsShots");
      _DAT_00973f8c = 1;
      _DAT_00973f90 = 0xb1;
      _DAT_00973f94 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973f98,"bool");
      _DAT_00973fa4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973fa8,"LaunchCountCap");
      _DAT_00973fb4 = 2;
      _DAT_00973fb8 = 0x170;
      _DAT_00973fbc = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00973fc0,"int");
      _DAT_00973fcc = 0;
      atexit( private__static_int_const___cdecl_BlastLauncherModule__ReflectionInfoStruct_class_BlastLauncherModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_3686e9fe__thread_safe_static_guard_0__);
    }
  }
  return 0xf;
}





//==== 00622040 StaticGetReflectionInfo_00622040 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct BlastLauncherModule__ReflectionInfoStruct_L_classBlastLauncherModule_G_ *
   __cdecl BlastLauncherModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_BlastLauncherModule_G_ * __cdecl
BlastLauncherModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_36277275__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_36277275__thread_safe_static_guard_0__);
    if ( cde_l2_36277275__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_c0b31902_ReflectionInfo) = &vftable_277;
      _Init_thread_footer(& cde_l2_36277275__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_c0b31902_ReflectionInfo;
}





//==== 006220a0 GetClassID_006220a0 ====


/* public: virtual unsigned long __thiscall CarrierModule__GetClassID(void)const  */

ulong __thiscall CarrierModule__GetClassID(CarrierModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_0950cd33__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_0950cd33__thread_safe_static_guard_0__);
    if ( cde_l2_0950cd33__thread_safe_static_guard_0__ == -1) {
       cde_l2r_6c7073ee_ID =
           util__GetHash("CarrierModule");
      _Init_thread_footer(& cde_l2_0950cd33__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2r_6c7073ee_ID;
}





//==== 00622100 DememoizeAll_00622100 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall CarrierModule__DememoizeAll(void)const  */

void __thiscall CarrierModule__DememoizeAll(CarrierModule *this)

{
  undefined8 stack0xfffffffc;
  int *piVar1;
  double *pdVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar3 = (**(code **)(this->_pad_0x38_14 + 0xc))();
  if (local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)this->_pad_0x38_14)(&local_c);
      (*(code *)*puVar4)();
      local_c = local_c + 1;
      iVar3 = (**(code **)(this->_pad_0x38_14 + 0xc))();
    } while (local_c < iVar3);
  }
  (**(code **)(this->_pad_0x38_14 + 0x10))();
  piVar1 = &this->_pad_0x80_32;
  local_c = 0;
  iVar3 = (**(code **)(this->_pad_0x80_32 + 0xc))();
  if (local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)*piVar1)(&local_c);
      (*(code *)*puVar4)();
      local_c = local_c + 1;
      iVar3 = (**(code **)(uintptr_t)(*piVar1 + 0xc))();
    } while (local_c < iVar3);
  }
  (**(code **)(uintptr_t)(*piVar1 + 0x10))();
  pdVar2 = &(this->GetCachedBoundingBox_m_MemoizedValue).Data.Lower.Z;
  local_c = 0;
  iVar3 = (**(code **)(*(int *)&(this->GetCachedBoundingBox_m_MemoizedValue).Data.Lower.Z + 0xc))();
  if (local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(*(code *)**(undefined4 **)pdVar2)(&local_c);
      (*(code *)*puVar4)();
      local_c = local_c + 1;
      iVar3 = (**(code **)(*(int *)pdVar2 + 0xc))();
    } while (local_c < iVar3);
  }
  (**(code **)(*(int *)pdVar2 + 0x10))();
  return;
}

//==== 00622200 GetReflectionDependencies_00622200 ====


/* public: virtual class util__Darray_L_classutil__Reflectable_P_G_ __thiscall
   CarrierModule__GetReflectionDependencies(void)const  */

Darray_L_class_util__Reflectable_P_G_ * __thiscall
CarrierModule__GetReflectionDependencies(CarrierModule *this)

{
  undefined8 stack0x00000004;
  undefined4 uVar1;
  Darray_L_class_util__Reflectable_P_G_ *this_00;
  bool bVar2;
  Darray_L_class_util__Reflectable_P_G_ *in_stack_00000004;
  
  this_00 = in_stack_00000004;
  in_stack_00000004 = (Darray_L_class_util__Reflectable_P_G_ *)0x1;
  *(undefined4 *)this_00 = 0;
  *(undefined4 *)(this_00 + 4) = 0;
  *(undefined4 *)(this_00 + 8) = 0;
  *(undefined4 *)(this_00 + 0xc) = 0;
  *(undefined ***)this_00 = (undefined **)(&vftable_6);
  *(undefined4 *)(this_00 + 4) = 0;
  *(undefined4 *)(this_00 + 8) = 0;
  *(undefined4 *)(this_00 + 0xc) = 0;
  uVar1 = *(undefined4 *)&(this->Launcher).TrackLength_m;
  util__Darray_class_util__Reflectable____SetSize(this_00,(int *)&stack0x00000004);
  bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                    ((Darray_L_enum_GraphicsResource__Type_G_ *)this_00,0);
  if (bVar2) {
    *(undefined4 *)(*(int *)(this_00 + 4) + -4 + *(int *)(this_00 + 8) * 4) = uVar1;
  }
  return this_00;
}





//==== 00622260 GetGeneratedName_00622260 ====

/* public: virtual class util__Str_L_char_G_ __thiscall CarrierModule__GetGeneratedName(void)const  */

Str_L_char_G_ * __thiscall
CarrierModule__GetGeneratedName(CarrierModule *this,Str_L_char_G_ *__return_storage_ptr__)

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
  float10 fVar12;
  char *in_stack_fffffed4;
  int in_stack_fffffed8;
  int iVar13;
  Str_L_char_G_ *__return_storage_ptr___01;
  Str_L_char_G_ *pSVar14;
  Material *pMStack_e8;
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
  
  util__Str_char___Str_char(&local_98,"Weapon Launcher");
  util__Str_char___Str_char(&local_50,"Space");
  util__Str_char___Str_char(&local_44,"Space");
  util__Str_char___Str_char(&local_38,"GetCachedPowerUsed_W()");
  local_2c.Data = (char *)0x0;
  local_2c.Capacity = 0;
  local_2c.Length = 0;
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  local_20.Length = 0;
  local_14.Data = (char *)0x0;
  local_14.Capacity = 0;
  local_14.Length = 0;
  if ((char)((this->Launcher).Stator == '\0')){
    iVar13 = *(int *)&(this->GetCachedBoundingBox_m_MemoizedValue).Data.Upper.X;
    local_8 = iVar13 + 1;
    util__Darray_L_util__tuple2_L_Order__Type_Cint_G___G___SetSize
              ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)
               &(this->GetCachedBoundingBox_m_MemoizedValue).Data.Lower.Z,&local_8);
    bVar5 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &(this->GetCachedBoundingBox_m_MemoizedValue).Data.Lower.Z,iVar13);
    if (bVar5) {
      iVar13 = *(int *)((int)&(this->GetCachedBoundingBox_m_MemoizedValue).Data.Lower.Z + 4);
      iVar2 = *(int *)&(this->GetCachedBoundingBox_m_MemoizedValue).Data.Upper.X;
      *(code **)(iVar13 + -8 + iVar2 * 8) = (long long int (*)())(RailgunModule__GetHeatGeneratedPerShot_J_Clear);
      *(undefined4 *)(iVar13 + -4 + iVar2 * 8) = 0;
    }
    fVar12 = (float10)(**(code **)(this->_pad_0x0_0 + 0x9c))();
    pMStack_e8 = (Material *)CONCAT31((*(uint24_t*)((char*)&(pMStack_e8)+1)),1);
    *(double *)&(this->Launcher)._pad_0x8_2 = (double)fVar12;
    (this->Launcher).Stator = pMStack_e8;
    *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->Launcher)) + 0x14)) = uStack_e4;
    if ((char)((this->Launcher).Stator == '\0')){
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  piVar3 = *(int * *)&(this->Launcher).TrackLength_m;
  pLVar6 = (LocStr *)util__LocStr__LocStr((LocStr *)local_e0,&local_98,&local_2c);
  util__LocStr__operator__o3(pLVar6);
  pSVar14 = __return_storage_ptr__;
  pLVar6 = (LocStr *)util__LocStr__LocStr((LocStr *)local_c8,&local_50,&local_20);
  __return_storage_ptr___00 = util__LocStr__operator__o3(pLVar6);
  pSVar11 = &local_5c;
  __return_storage_ptr___01 = &local_8c;
  pSVar7 = (Str_L_char_G_ *)(**(code **)(uintptr_t)(*piVar3 + 0x48))();
  pSVar10 = &local_68;
  iVar13 = 0x6223f1;
  pLVar6 = (LocStr *)util__LocStr__LocStr((LocStr *)local_b0,&local_44,&local_14);
  pSVar8 = util__LocStr__operator__o3(pLVar6);
  pSVar9 = &local_74;
  GetUnitsOfType((Str_L_char_G_ *)&stack0xfffffed4,&local_38);
  uVar1 = (this->Launcher)._pad_0xc_3;
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
    *(uint32_t *)&local_a4 = (uint32_t)(uintptr_t)((void *)0x0);
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

//==== 00622610 GetShortName_00622610 ====


/* public: virtual class util__Str_L_char_G_ __thiscall CarrierModule__GetShortName(void)const  */

Str_L_char_G_ * __thiscall
CarrierModule__GetShortName(CarrierModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  int *piVar1;
  LocStr *pLVar2;
  Str_L_char_G_ *__return_storage_ptr___00;
  Str_L_char_G_ *this_00;
  Str_L_char_G_ *pSVar3;
  Str_L_char_G_ *__return_storage_ptr___01;
  Str_L_char_G_ *pSVar4;
  void *apvStack_7c [3];
  void *pvStack_70;
  void *apvStack_64 [3];
  void *pvStack_58;
  Str_L_char_G_ SStack_4c;
  Str_L_char_G_ SStack_40;
  Str_L_char_G_ SStack_34;
  Str_L_char_G_ SStack_28;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
  util__Str_char___Str_char(&SStack_4c,"Weapon Launcher");
  util__Str_char___Str_char(&SStack_28,"Space");
  piVar1 = *(int * *)&(this->Launcher).TrackLength_m;
  SStack_1c.Data = (char *)0x0;
  SStack_1c.Capacity = 0;
  SStack_1c.Length = 0;
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_7c,&SStack_4c,&SStack_1c);
  util__LocStr__operator__o3(pLVar2);
  pSVar4 = __return_storage_ptr__;
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_64,&SStack_28,&SStack_10);
  __return_storage_ptr___00 = util__LocStr__operator__o3(pLVar2);
  pSVar3 = &SStack_34;
  __return_storage_ptr___01 = &SStack_40;
  this_00 = (Str_L_char_G_ *)(**(code **)(uintptr_t)(*piVar1 + 0x48))();
  pSVar3 = util__Str_char___operator(this_00,__return_storage_ptr___01,pSVar3);
  util__Str_char___operator(pSVar3,__return_storage_ptr___00,pSVar4);
  if (SStack_34.Data != (char *)0x0) {
    port_op_delete(SStack_34.Data);
    SStack_34.Data = (char *)0x0;
  }
  if (SStack_40.Data != (char *)0x0) {
    port_op_delete(SStack_40.Data);
    SStack_40.Data = (char *)0x0;
  }
  if (pvStack_58 != (void *)0x0) {
    port_op_delete(pvStack_58);
    pvStack_58 = (void *)0x0;
  }
  if (apvStack_64[0] != (void *)0x0) {
    port_op_delete(apvStack_64[0]);
    apvStack_64[0] = (void *)0x0;
  }
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
    SStack_10.Data = (char *)0x0;
  }
  if (pvStack_70 != (void *)0x0) {
    port_op_delete(pvStack_70);
    pvStack_70 = (void *)0x0;
  }
  if (apvStack_7c[0] != (void *)0x0) {
    port_op_delete(apvStack_7c[0]);
    apvStack_7c[0] = (void *)0x0;
  }
  if (SStack_1c.Data != (char *)0x0) {
    port_op_delete(SStack_1c.Data);
    SStack_1c.Data = (char *)0x0;
  }
  if (SStack_28.Data != (char *)0x0) {
    port_op_delete(SStack_28.Data);
    SStack_28.Data = (char *)0x0;
  }
  if (SStack_4c.Data != (char *)0x0) {
    port_op_delete(SStack_4c.Data);
  }
  return __return_storage_ptr__;
}





//==== 006227a0 GetTag_006227a0 ====


/* public: virtual class util__Str_L_char_G_ __thiscall CarrierModule__GetTag(void)const  */

Str_L_char_G_ * __thiscall CarrierModule__GetTag(CarrierModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"Launcher");
  return __return_storage_ptr__;
}





//==== 006227c0 GetIcon_006227c0 ====

/* public: virtual void (__cdecl*__thiscall CarrierModule__GetIcon(void)const )(void) */

_func_void * __thiscall CarrierModule__GetIcon(CarrierModule *this)

{
  CraftBlueprint *pCVar1;
  code *pcVar2;
  
  pCVar1 = *(CraftBlueprint * *)&(this->Launcher).TrackLength_m;
  CraftBlueprint__GetShipClass_Memoize(pCVar1);
  if ((char)(pCVar1->GetMainEngineModules_MemoizedValue).Data._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if ((int)((pCVar1->GetMainEngineModulePlacers_MemoizedValue).IsValidData == 5)){
    return Icons__StationLauncher;
  }
  pCVar1 = *(CraftBlueprint * *)&(this->Launcher).TrackLength_m;
  CraftBlueprint__GetShipClass_Memoize(pCVar1);
  if ((char)(pCVar1->GetMainEngineModules_MemoizedValue).Data._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if ((int)((pCVar1->GetMainEngineModulePlacers_MemoizedValue).IsValidData == 0)){
    return Icons__CapitalShipLauncher;
  }
  pCVar1 = *(CraftBlueprint * *)&(this->Launcher).TrackLength_m;
  CraftBlueprint__GetShipClass_Memoize(pCVar1);
  if ((char)(pCVar1->GetMainEngineModules_MemoizedValue).Data._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if ((int)((pCVar1->GetMainEngineModulePlacers_MemoizedValue).IsValidData == 2)){
    return Icons__DroneLauncher;
  }
  pCVar1 = *(CraftBlueprint * *)&(this->Launcher).TrackLength_m;
  CraftBlueprint__GetShipClass_Memoize(pCVar1);
  if ((char)(pCVar1->GetMainEngineModules_MemoizedValue).Data._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if ((int)((pCVar1->GetMainEngineModulePlacers_MemoizedValue).IsValidData == 3)){
    return Icons__MissileLauncher;
  }
  pCVar1 = *(CraftBlueprint * *)&(this->Launcher).TrackLength_m;
  CraftBlueprint__GetShipClass_Memoize(pCVar1);
  if ((char)(pCVar1->GetMainEngineModules_MemoizedValue).Data._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pcVar2 = (long long int (*)())((_func_void *)0x0);
  if ((int)((pCVar1->GetMainEngineModulePlacers_MemoizedValue).IsValidData == 4)){
    pcVar2 = (long long int (*)())(Icons__PayloadLauncher);
  }
  return (_func_void *)(pcVar2);
}

//==== 006229c0 GetCubicBoundingBox_m_006229c0 ====

/* public: virtual struct util__AABB_L_structutil__Vec3_L_double_G__G_ __thiscall
   CarrierModule__GetCubicBoundingBox_m(void)const  */

AABB_L_util__Vec3_L_double_G___G_ * __thiscall
CarrierModule__GetCubicBoundingBox_m
          (CarrierModule *this,AABB_L_util__Vec3_L_double_G___G_ *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CraftBlueprint *pCVar4;
  
  GetCachedBoundingBox_m_Memoize(this);
  if ((char)(this->Launcher)._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  uVar1 = *(undefined4 *)((int)&(this->GetCachedBoundingBox_m_MemoizedValue).Data.Upper.Y + 4);
  uVar2 = *(undefined4 *)&(this->GetCachedBoundingBox_m_MemoizedValue).Data.Upper.Z;
  uVar3 = *(undefined4 *)((int)&(this->GetCachedBoundingBox_m_MemoizedValue).Data.Upper.Z + 4);
  *(undefined4 *)&((__return_storage_ptr__->Lower).X) = *(undefined4 *)&(this->GetCachedBoundingBox_m_MemoizedValue).Data.Upper.Y;
  *(undefined4 *)((int)&(__return_storage_ptr__->Lower).X + 4) = uVar1;
  *(undefined4 *)&(__return_storage_ptr__->Lower).Y = uVar2;
  *(undefined4 *)((int)&(__return_storage_ptr__->Lower).Y + 4) = uVar3;
  uVar1 = *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetCachedBoundingBox_m_MemoizedValue)) + 0x34));
  uVar2 = *(undefined4 *)&(this->GetCachedPowerUsed_W_MemoizedValue).Data;
  uVar3 = *(undefined4 *)((int)&(this->GetCachedPowerUsed_W_MemoizedValue).Data + 4);
  *(undefined4 *)&((__return_storage_ptr__->Lower).Z) = *(undefined4 *)&(this->GetCachedBoundingBox_m_MemoizedValue).IsValidData;
  *(undefined4 *)((int)&(__return_storage_ptr__->Lower).Z + 4) = uVar1;
  *(undefined4 *)&(__return_storage_ptr__->Upper).X = uVar2;
  *(undefined4 *)((int)&(__return_storage_ptr__->Upper).X + 4) = uVar3;
  uVar1 = *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetCachedPowerUsed_W_MemoizedValue)) + 0xc));
  pCVar4 = this->ShipClass__Payload;
  uVar2 = *(undefined4 *)&(*(undefined4 *)(void *)((char *)(uintptr_t)(this) + 0xf4));
  *(undefined4 *)&((__return_storage_ptr__->Upper).Y) = *(undefined4 *)&(this->GetCachedPowerUsed_W_MemoizedValue).IsValidData;
  *(undefined4 *)((int)&(__return_storage_ptr__->Upper).Y + 4) = uVar1;
  *(CraftBlueprint * *)&(__return_storage_ptr__->Upper).Z = pCVar4;
  *(undefined4 *)((int)&(__return_storage_ptr__->Upper).Z + 4) = uVar2;
  return __return_storage_ptr__;
}

//==== 00622a20 GetArmorCarvingBox_m_00622a20 ====


/* public: virtual class util__Maybe_L_structutil__Vec2_L_double_G__G_ __thiscall
   CarrierModule__GetArmorCarvingBox_m(void)const  */

void __thiscall CarrierModule__GetArmorCarvingBox_m(CarrierModule *this)

{
  undefined8 stack0xfffffffc;
  double *in_stack_00000004;
  Cylinder_L_double_G_ CStack_58;
  Cylinder_L_double_G_ CStack_48;
  double dStack_38;
  double dStack_30;
  Cylinder_L_double_G_ CStack_28;
  Cylinder_L_double_G_ CStack_18;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  CraftBlueprint__GetStorageCylinder_m
            ((CraftBlueprint *)(uintptr_t)*(uint32_t *)&((this->Launcher).TrackLength_m),&CStack_18);
  LinearInductionMotorSubModule__GetTotalThickness_m
            ((LinearInductionMotorSubModule *)&(this->Launcher).StatorDepth_m);
  CraftBlueprint__GetStorageCylinder_m
            ((CraftBlueprint *)(uintptr_t)*(uint32_t *)&((this->Launcher).TrackLength_m),&CStack_48);
  dStack_38 = CStack_18.Height;
  CraftBlueprint__GetStorageCylinder_m
            ((CraftBlueprint *)(uintptr_t)*(uint32_t *)&((this->Launcher).TrackLength_m),&CStack_28);
  dStack_30 = LinearInductionMotorSubModule__GetTotalThickness_m
                        ((LinearInductionMotorSubModule *)&(this->Launcher).StatorDepth_m);
  dStack_30 = dStack_30 + CStack_28.Radius * 2.0;
  CraftBlueprint__GetStorageCylinder_m
            ((CraftBlueprint *)(uintptr_t)*(uint32_t *)&((this->Launcher).TrackLength_m),&CStack_58);
  *in_stack_00000004 = dStack_30;
  in_stack_00000004[1] = dStack_38;
  *(undefined1 *)(in_stack_00000004 + 2) = 1;
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00622ae0 GetComposition_00622ae0 ====


/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   CarrierModule__GetComposition(void)const  */

void __thiscall CarrierModule__GetComposition(CarrierModule *this,Darray_L_struct_MaterialConstituent_G_ * __return_storage_ptr__)

{
  undefined8 stack0xfffffffc;
  int *piVar1;
  int iVar2;
  bool bVar3;

  Cylinder_L_double_G_ CStack_60;
  Cylinder_L_double_G_ CStack_50;
  int iStack_40;
  int iStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  Cylinder_L_double_G_ CStack_28;
  Cylinder_L_double_G_ CStack_18;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)__return_storage_ptr__ = 0;
  *(undefined4 *)(__return_storage_ptr__ + 4) = 0;
  *(undefined4 *)(__return_storage_ptr__ + 8) = 0;
  *(undefined4 *)(__return_storage_ptr__ + 0xc) = 0;
  Module__GetComposition((Module *)this,(Darray_L_MaterialComposition_G_ *)__return_storage_ptr__);
  CraftBlueprint__GetStorageCylinder_m
            ((CraftBlueprint *)(uintptr_t)*(uint32_t *)&((this->Launcher).TrackLength_m),&CStack_18);
  uStack_30 = LinearInductionMotorSubModule__GetTotalThickness_m
                        ((LinearInductionMotorSubModule *)&(this->Launcher).StatorDepth_m);
  uStack_30 = uStack_30 + CStack_18.Radius * 2.0;
  CraftBlueprint__GetStorageCylinder_m
            ((CraftBlueprint *)(uintptr_t)*(uint32_t *)&((this->Launcher).TrackLength_m),&CStack_50);
  CraftBlueprint__GetStorageCylinder_m
            ((CraftBlueprint *)(uintptr_t)*(uint32_t *)&((this->Launcher).TrackLength_m),&CStack_28);
  LinearInductionMotorSubModule__GetTotalThickness_m
            ((LinearInductionMotorSubModule *)&(this->Launcher).StatorDepth_m);
  CraftBlueprint__GetStorageCylinder_m
            ((CraftBlueprint *)(uintptr_t)*(uint32_t *)&((this->Launcher).TrackLength_m),&CStack_60);
  iStack_40 = (this->AttachedAmmoBay).Data.Capacity;
  iVar2 = *(int *)(__return_storage_ptr__ + 8);
  uStack_38 = CStack_28.Height * uStack_30 *
              *(double *)&(this->AttachedAmmoBay).Data.CachedArmorComposition *
              *(double *)(iStack_40 + 0x30);
  uStack_30 = (double)CONCAT44(iVar2 + 1,(undefined4)uStack_30);
  util__Darray_struct_MaterialConstituent___SetSize(__return_storage_ptr__,(int *)((int)&uStack_30 + 4));
  bVar3 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                    ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)__return_storage_ptr__,
                     iVar2);
  if (bVar3) {
    piVar1 = (int *)(*(int *)(__return_storage_ptr__ + 4) + -0x10 +
                    *(int *)(__return_storage_ptr__ + 8) * 0x10);
    *piVar1 = iStack_40;
    piVar1[1] = iStack_3c;
    piVar1[2] = (int)uStack_38;
    piVar1[3] = (*(uint32_t*)((char*)&(uStack_38)+4));
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00622be0 GetAmmoInfo_00622be0 ====

/* public: virtual class util__Maybe_L_structAmmoInfo_G_ __thiscall
   CarrierModule__GetAmmoInfo(void)const  */

Maybe_L_AmmoInfo_G_ * __thiscall
CarrierModule__GetAmmoInfo(CarrierModule *this,Maybe_L_AmmoInfo_G_ *__return_storage_ptr__)

{
  CraftBlueprint *pCVar1;
  AmmoExplosion local_d4;
  undefined1 local_b4 [16];
  Darray_L_MaterialComposition_G_ local_a4;
  Str_L_char_G_ local_94;
  Str_L_char_G_ local_88;
  ShipClass local_7c;
  bool local_78;
  AmmoExplosion local_74;
  double local_54;
  Cylinder_L_double_G_ local_4c;
  Str_L_char_G_ local_3c;
  Str_L_char_G_ local_30;
  Darray_L_MaterialComposition_G_ local_24;
  ShipClass local_14;
  undefined8 local_10;
  AmmoExplosion *local_8;
  
  pCVar1 = *(CraftBlueprint * *)&(this->Launcher).TrackLength_m;
  CraftBlueprint__GetShipClass_Memoize(pCVar1);
  if ((char)(pCVar1->GetMainEngineModules_MemoizedValue).Data._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_14 = *(ShipClass *)&(pCVar1->GetMainEngineModulePlacers_MemoizedValue).IsValidData;
  pCVar1 = *(CraftBlueprint * *)&(this->Launcher).TrackLength_m;
  local_10 = (double)CONCAT44(pCVar1,(undefined4)local_10);
  CraftBlueprint__GetTotalCost_c_Memoize(pCVar1);
  if ((char)((pCVar1->GetApproximateComposition_MemoizedValue).Data == '\0')){
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pCVar1 = *(CraftBlueprint * *)&(this->Launcher).TrackLength_m;
  CraftBlueprint__GetAmmoExplosion_Memoize(pCVar1);
  local_8 = (AmmoExplosion *)
            ((pCVar1->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 8);
  if ((char)((pCVar1->GetEstimatedRollTorque_N_m_MemoizedValue).Data == '\0')){
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pCVar1 = *(CraftBlueprint * *)&(this->Launcher).TrackLength_m;
  CraftBlueprint__GetComposition_Memoize(pCVar1);
  if (*(char *)((pCVar1->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 7) == '\0'
     ) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  AmmoExplosion__AmmoExplosion(&local_d4,local_8);
  (**(code **)(*(int *)(*(uint32_t *)&(this->Launcher).TrackLength_m + 0x48)))(&local_3c);
  (**(code **)(*(int *)(*(uint32_t *)&(this->Launcher).TrackLength_m + 0x48)))(&local_30);
  util__Darray_L_MaterialComposition_G___Darray_L_MaterialComposition_G_
            (&local_24,
             (Darray_L_struct_MaterialComposition_G_ *)
             ((pCVar1->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 5));
  CraftBlueprint__GetStorageCylinder_m
            ((CraftBlueprint *)(uintptr_t)*(uint32_t *)&((this->Launcher).TrackLength_m),&local_4c);
  local_10 = *(double *)((*(uint32_t*)((char*)&(local_10)+4)) + 0x450);
  (*(uint32_t*)&(local_b4)) = local_4c.Radius;
  (*(uint32_t*)((char*)&(local_b4)+4)) = (*(uint32_t *)((char *)&(local_4c.Radius) + 4));
  (*(uint32_t*)((char*)&(local_b4)+8)) = local_4c.Height;
  (*(uint32_t *)((char *)&(local_b4) + 12)) = (*(uint32_t *)((char *)&(local_4c.Height) + 4));
  util__Darray_L_MaterialComposition_G___Darray_L_MaterialComposition_G_
            ((Darray_L_MaterialComposition_G_ *)(local_b4 + 0x10),
             (Darray_L_struct_MaterialComposition_G_ *)&local_24);
  util__Str_char___Str_char((Str_L_char_G_ *)(local_b4 + 0x20),&local_30);
  util__Str_char___Str_char((Str_L_char_G_ *)(local_b4 + 0x2c),&local_3c);
  local_7c = local_14;
  local_78 = true;
  AmmoExplosion__AmmoExplosion((AmmoExplosion *)(local_b4 + 0x40),&local_d4);
  *(uint32_t *)&local_54 = local_10;
  local_24._pad_0x0_0 = (int)&vftable_75;
  if (local_24.Data != (MaterialComposition *)0x0) {
    port_op_delete(local_24.Data);
  }
  local_24.Data = (MaterialComposition *)0x0;
  local_24._pad_0x0_0 = (int)&vftable;
  if (local_30.Data != (char *)0x0) {
    port_op_delete(local_30.Data);
    local_30.Data = (char *)0x0;
  }
  if (local_3c.Data != (char *)0x0) {
    port_op_delete(local_3c.Data);
    local_3c.Data = (char *)0x0;
  }
  local_d4.GasComposition._pad_0x0_0 = (int)&vftable_15;
  if (local_d4.GasComposition.Data != (MaterialConstituent *)0x0) {
    port_op_delete(local_d4.GasComposition.Data);
  }
  *(undefined4 *)&(__return_storage_ptr__->Data).Dimensions_m.Radius = (*(uint32_t*)&(local_b4));
  *(undefined4 *)((int)&(__return_storage_ptr__->Data).Dimensions_m.Radius + 4) = (*(uint32_t*)((char*)&(local_b4)+4));
  *(undefined4 *)&(__return_storage_ptr__->Data).Dimensions_m.Height = (*(uint32_t*)((char*)&(local_b4)+8));
  *(undefined4 *)((int)&(__return_storage_ptr__->Data).Dimensions_m.Height + 4) = (*(uint32_t *)((char *)&(local_b4) + 12));
  util__Darray_L_MaterialComposition_G___Darray_L_MaterialComposition_G_
            (&(__return_storage_ptr__->Data).Composition,
             (Darray_L_struct_MaterialComposition_G_ *)(local_b4 + 0x10));
  util__Str_char___Str_char(&(__return_storage_ptr__->Data).Name,(Str_L_char_G_ *)(local_b4 + 0x20));
  util__Str_char___Str_char
            (&(__return_storage_ptr__->Data).Descriptor,(Str_L_char_G_ *)(local_b4 + 0x2c));
  (__return_storage_ptr__->Data).Class.Data = local_7c;
  (__return_storage_ptr__->Data).Class.IsValidData = local_78;
  AmmoExplosion__AmmoExplosion
            (&(__return_storage_ptr__->Data).ExplosionPotential,(AmmoExplosion *)(local_b4 + 0x40));
  (__return_storage_ptr__->Data).CostOfOneUnit_c = local_54;
  __return_storage_ptr__->IsValidData = true;
  AmmoInfo___AmmoInfo((AmmoInfo *)local_b4);
  return __return_storage_ptr__;
}

//==== 00622e60 GetInternalAmmo_00622e60 ====

/* public: virtual int __thiscall CarrierModule__GetInternalAmmo(void)const  */

int __thiscall CarrierModule__GetInternalAmmo(CarrierModule *this)

{
  if ((char)this[1]._pad_0x0_0 != '\0') {
    return (this->AttachedAmmoBay).Data.CachedInfo.Composition._pad_0x0_0;
  }
  return 0;
}

//==== 00622e80 GetPayload_00622e80 ====


/* public: virtual class CraftBlueprint * __thiscall CarrierModule__GetPayload(void)const  */

CraftBlueprint * __thiscall CarrierModule__GetPayload(CarrierModule *this)

{
  return (CraftBlueprint *)(uintptr_t)*(uint32_t *)&(this->Launcher).TrackLength_m;
}





//==== 00622e90 GetLaunchCap ====

/* public: virtual int __thiscall CarrierModule__GetLaunchCap(void)const  */

int __thiscall CarrierModule__GetLaunchCap(CarrierModule *this)

{
  return this[1]._pad_0x10_4;
}

//==== 00622ea0 GetCrewRequired_00622ea0 ====


/* public: virtual class util__Darray_L_structCrewJob_G_ __thiscall
   CarrierModule__GetCrewRequired(void)const  */

Darray_L_struct_CrewJob_G_ * __thiscall CarrierModule__GetCrewRequired(CarrierModule *this)

{
  undefined8 stack0x00000004;
  Darray_L_struct_CrewJob_G_ *this_00;
  bool bVar1;
  Str_L_char_G_ *pSVar2;
  LocStr *this_01;
  char *pcVar3;
  Darray_L_struct_CrewJob_G_ *pDVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  Darray_L_struct_CrewJob_G_ *in_stack_00000004;
  Str_L_char_G_ SStack_70;
  undefined8 uStack_64;
  undefined1 uStack_5c;
  void *apvStack_54 [3];
  void *pvStack_48;
  Darray_L_struct_CrewJob_G_ aDStack_3c [4];
  Str_L_char_G_ SStack_38;
  Str_L_char_G_ SStack_2c;
  Str_L_char_G_ SStack_20;
  Str_L_char_G_ SStack_14;
  CarrierModule *pCStack_8;
  
  this_00 = in_stack_00000004;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = &vftable_120;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  pCStack_8 = this;
  util__Str_char___Str_char(&SStack_38,"CrewTechnician");
  pSVar2 = Module__GetQuickName((Module *)this,&SStack_2c);
  if (pSVar2->Capacity < 1) {
    pcVar6 = "";
  }
  else {
    pcVar6 = pSVar2->Data;
  }
  SStack_14.Data = (char *)0x0;
  SStack_14.Capacity = 0;
  SStack_14.Length = 0;
  this_01 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_54,&SStack_38,&SStack_14);
  pSVar2 = util__LocStr__operator__o3(this_01);
  if (pSVar2->Capacity < 1) {
    pcVar3 = "";
  }
  else {
    pcVar3 = pSVar2->Data;
  }
  util__Printf(&SStack_20,pcVar3,pcVar6);
  util__Str_char___Str_char(&SStack_70,&SStack_20);
  uStack_64 = 0x3fe0000000000000;
  uStack_5c = 0;
  if (SStack_20.Data != (char *)0x0) {
    port_op_delete(SStack_20.Data);
    SStack_20.Data = (char *)0x0;
  }
  iVar5 = *(int *)(in_stack_00000004 + 8);
  in_stack_00000004 = (Darray_L_struct_CrewJob_G_ *)(iVar5 + 1);
  util__Darray_struct_CrewJob___SetSize(this_00,(int *)&stack0x00000004);
  bVar1 = util__Darray_struct_CrewJob___CheckSize(this_00,iVar5);
  if (bVar1) {
    iVar5 = *(int *)(this_00 + 4);
    iVar8 = *(int *)(this_00 + 8) * 0x20;
    *(undefined4 *)(iVar8 + -0x20 + iVar5) = 3;
    util__Str_char___operator__o8((Str_L_char_G_ *)(iVar5 + -0x1c + iVar8),&SStack_70);
    *(undefined8 *)(iVar8 + -0x10 + iVar5) = 0x3fe0000000000000;
    *(undefined1 *)(iVar8 + -8 + iVar5) = 0;
    this = pCStack_8;
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
  if (SStack_14.Data != (char *)0x0) {
    port_op_delete(SStack_14.Data);
    SStack_14.Data = (char *)0x0;
  }
  if (SStack_2c.Data != (char *)0x0) {
    port_op_delete(SStack_2c.Data);
    SStack_2c.Data = (char *)0x0;
  }
  if (SStack_38.Data != (char *)0x0) {
    port_op_delete(SStack_38.Data);
  }
  pDVar4 = (Darray_L_struct_CrewJob_G_ *)
           CraftBlueprint__GetCrewRequiredForUseAsPayload
           (*(CraftBlueprint **)((int)this + 0x110),(Darray_L_struct_CrewJob_G_ *)aDStack_3c);
  if (*(int *)(this_00 + 8) == 0) {
    util__Darray_struct_CrewJob___operator(this_00,pDVar4);
    util__Darray_struct_CrewJob____Darray_struct_CrewJob(aDStack_3c);
    return this_00;
  }
  iVar5 = (**(code **)(*(int *)pDVar4 + 0xc))();
  if (iVar5 != 0) {
    iVar5 = *(int *)(this_00 + 8);
    iVar8 = (**(code **)(*(int *)pDVar4 + 0xc))();
    in_stack_00000004 = (Darray_L_struct_CrewJob_G_ *)(iVar8 + *(int *)(this_00 + 8));
    util__Darray_struct_CrewJob___SetSize(this_00,(int *)&stack0x00000004);
    util__Darray_struct_CrewJob___CheckSize(this_00,iVar5);
    puVar7 = (undefined4 *)(iVar5 * 0x20 + *(int *)(this_00 + 4));
    puVar9 = *(undefined4 **)(pDVar4 + 4);
    if (puVar7 != (undefined4 *)(*(int *)(this_00 + 8) * 0x20 + *(int *)(this_00 + 4))) {
      do {
        *puVar7 = *puVar9;
        util__Str_char___operator__o8((Str_L_char_G_ *)(puVar7 + 1),(Str_L_char_G_ *)(puVar9 + 1));
        *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(puVar9 + 4);
        *(undefined1 *)(puVar7 + 6) = *(undefined1 *)(puVar9 + 6);
        puVar7 = puVar7 + 8;
        puVar9 = puVar9 + 8;
      } while (puVar7 != (undefined4 *)(*(int *)(this_00 + 8) * 0x20 + *(int *)(this_00 + 4)));
    }
  }
  util__Darray_struct_CrewJob____Darray_struct_CrewJob(aDStack_3c);
  return this_00;
}





//==== 00623110 GetFiringVelocity_km__s_00623110 ====


/* public: virtual double __thiscall CarrierModule__GetFiringVelocity_km__s(void)const  */

double __thiscall CarrierModule__GetFiringVelocity_km__s(CarrierModule *this)

{
  double dVar1;
  
  dVar1 = LinearInductionMotorSubModule__GetExitVelocity_m__s
                    ((LinearInductionMotorSubModule *)&(this->Launcher).StatorDepth_m);
  return dVar1 / 1000.0;
}





//==== 00623130 GetEngagementRange_km_00623130 ====

/* public: virtual class util__Maybe_L_double_G_ 
   CarrierModule__GetEngagementRange_km(double)const  */

Maybe_L_double_G_ * 
CarrierModule__GetEngagementRange_km
          (CarrierModule *this,Maybe_L_double_G_ *__return_storage_ptr__,double param_1)

{
  if (0.0 < *(double *)&this[1]._pad_0x8_2) {
    __return_storage_ptr__->Data = *(double *)&this[1]._pad_0x8_2;
    __return_storage_ptr__->IsValidData = true;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Data = 0.0;
  __return_storage_ptr__->IsValidData = false;
  return __return_storage_ptr__;
}

//==== 00623170 GetEnergyNeededToFire_J_00623170 ====


/* public: virtual double __thiscall CarrierModule__GetEnergyNeededToFire_J(double)const  */

double __thiscall CarrierModule__GetEnergyNeededToFire_J(CarrierModule *this,double param_1)

{
  double dVar1;
  
  dVar1 = LinearInductionMotorSubModule__GetFiringTime_s
                    ((LinearInductionMotorSubModule *)&(this->Launcher).StatorDepth_m);
  if (param_1 <= dVar1) {
    dVar1 = param_1;
  }
  return dVar1 * (this->Launcher).Cooler.CachedDimensions_m.Radius;
}





//==== 006231b0 GetHeatFromFire_J ====


/* public: virtual double __thiscall CarrierModule__GetHeatFromFire_J(double)const  */

double __thiscall CarrierModule__GetHeatFromFire_J(CarrierModule *this,double param_1)

{
  double dVar1;
  
  dVar1 = LinearInductionMotorSubModule__GetFiringEnergy_J
                    ((LinearInductionMotorSubModule *)&(this->Launcher).StatorDepth_m);
}





//==== 006231c0 GetCoolantProperties_006231c0 ====


/* public: virtual class util__Maybe_L_structModuleCoolantProperties_G_ __thiscall
   CarrierModule__GetCoolantProperties(void)const  */

void __thiscall CarrierModule__GetCoolantProperties(CarrierModule *this)

{
  Material *pMVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 *in_stack_00000004;
  
  pMVar1 = (this->Launcher).Cooler.CachedCoolant;
  dVar2 = CylindricalCoolerSubModule__GetCoolantTotalVolume_m3
                    ((CylindricalCoolerSubModule *)
                     &(this->Launcher).Cooler.CachedDimensions_m.Height);
  dVar3 = TurbopumpSubModule__GetMassFlowRate_kg__s
                    ((TurbopumpSubModule *)&(this->CoolantTurbopump).RotationalSpeed_RPM);
  dVar4 = LinearInductionMotorSubModule__GetTemperatureAfterFiring_K
                    ((LinearInductionMotorSubModule *)&(this->Launcher).StatorDepth_m);
  dVar5 = LinearInductionMotorSubModule__GetHeatTransferRate_W
                    ((LinearInductionMotorSubModule *)&(this->Launcher).StatorDepth_m);
  *(double *)(in_stack_00000004 + 2) = dVar2;
  *(double *)(in_stack_00000004 + 4) = dVar3;
  *(double *)(in_stack_00000004 + 6) = dVar4;
  *in_stack_00000004 = (undefined4)(uintptr_t)(pMVar1);
  *(double *)(in_stack_00000004 + 8) = dVar5;
  *(undefined1 *)(in_stack_00000004 + 10) = 1;
  return;
}





//==== 00623250 GetReloadPower_W ====


/* public: virtual double __thiscall CarrierModule__GetReloadPower_W(void)const  */

double __thiscall CarrierModule__GetReloadPower_W(CarrierModule *this)

{
  return (this->Launcher).Cooler.CachedDimensions_m.Radius;
}





//==== 00623260 GetReloadTime_s_00623260 ====


/* public: virtual double __thiscall CarrierModule__GetReloadTime_s(void)const  */

double __thiscall CarrierModule__GetReloadTime_s(CarrierModule *this)

{
  double *this_00;
  double dVar1;
  double dVar2;
  double dVar3;
  
  this_00 = &(this->Launcher).StatorDepth_m;
  dVar1 = LinearInductionMotorSubModule__GetPayloadClearanceTime_s
                    ((LinearInductionMotorSubModule *)this_00);
  dVar2 = LinearInductionMotorSubModule__GetCooldownTime_s((LinearInductionMotorSubModule *)this_00)
  ;
  dVar3 = LinearInductionMotorSubModule__GetReloadTime_s((LinearInductionMotorSubModule *)this_00);
  if (dVar3 <= dVar2) {
    dVar3 = dVar2;
  }
  if (dVar3 <= dVar1) {
    dVar3 = dVar1;
  }
  return dVar3;
}





//==== 006238c0 SetCachedData_006238c0 ====

/* public: virtual void __thiscall CarrierModule__SetCachedData(class DataParser *) */

void __thiscall CarrierModule__SetCachedData(CarrierModule *this,DataParser *param_1)

{
  undefined8 stack0xfffffef4;
  undefined8 stack0xffffff04;
  undefined8 stack0xffffff10;
  undefined8 stack0xffffff24;
  undefined4 uVar1;
  undefined4 uVar2;
  Material *pMVar3;
  CraftBlueprint *this_00;
  AmmoInfo AVar4;
  Maybe_L_double_G_ MVar5;
  Cylinder_L_double_G_ *pCVar6;
  undefined8 *puVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined1 in_stack_fffffef4 [40];
  undefined1 uVar12;
  undefined1 in_stack_ffffff21 [11];
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  char *pcVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  AmmoInfo *pAVar24;
  undefined4 uVar25;
  AmmoInfo local_94;
  Cylinder_L_double_G_ local_24;
  double local_14;
  double local_c;
  
  CraftBlueprint__FinalizeData((CraftBlueprint *)&(this->Launcher).TrackLength_m,param_1);
  pMVar3 = (this->Launcher).Cooler.CachedCoolant;
  TurbopumpSubModule__PassThroughCachedData
            ((TurbopumpSubModule *)&(this->CoolantTurbopump).RotationalSpeed_RPM,
             pMVar3->Density_kg__m3,pMVar3,false);
  TurbopumpSubModule__PassThroughCachedData2
            ((TurbopumpSubModule *)&(this->CoolantTurbopump).RotationalSpeed_RPM,
             *(double *)&(this->AttachedAmmoBay).Data._pad_0x8_2);
  this_00 = *(CraftBlueprint * *)&(this->Launcher).TrackLength_m;
  CraftBlueprint__GetBoundingCylinder_m_Memoize(this_00);
  if (*(char *)((this_00->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 1) ==
      '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_14 = CraftBlueprint__GetTotalMass_kg((CraftBlueprint *)&(this->Launcher).TrackLength_m);
  local_c = *(double *)&(this_00->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).IsValidData;
  dVar9 = TurbopumpSubModule__GetMassFlowRate_kg__s
                    ((TurbopumpSubModule *)&(this->CoolantTurbopump).RotationalSpeed_RPM);
  uVar1 = (this->AttachedAmmoBay).Data._pad_0x8_2;
  uVar2 = (this->AttachedAmmoBay).Data._pad_0xc_3;
  uVar10 = SUB84(dVar9,0);
  uVar25 = (undefined4)((ulonglong)dVar9 >> 0x20);
  dVar9 = TurbopumpSubModule__GetOutletNormalVelocity_m__s
                    ((TurbopumpSubModule *)&(this->CoolantTurbopump).RotationalSpeed_RPM);
  dVar8 = local_c + local_c;
  uVar21 = SUB84(dVar9,0);
  uVar23 = (undefined4)((ulonglong)dVar9 >> 0x20);
  uVar16 = SUB84(local_14,0);
  pcVar17 = (char *)((ulonglong)local_14 >> 0x20);
  pCVar6 = CraftBlueprint__GetStorageCylinder_m
                     ((CraftBlueprint *)&(this->Launcher).TrackLength_m,&local_24);
  dVar9 = pCVar6->Height;
  iVar14 = SUB84(dVar9,0);
  uVar15 = (undefined4)((ulonglong)dVar9 >> 0x20);
  iVar13 = 0x6239de;
  LinearInductionMotorSubModule__PassThroughCachedData
            ((LinearInductionMotorSubModule *)&(this->Launcher).StatorDepth_m,dVar9,
             (double)CONCAT44(pcVar17,uVar16),dVar8,(double)CONCAT44(uVar23,uVar21),
             (double)CONCAT44(uVar2,uVar1),(double)CONCAT44(uVar25,uVar10));
  if ((char)this[1]._pad_0x0_0 != '\0') {
    uVar11 = *(undefined8 *)&(this->AttachedAmmoBay).Data.CachedArmorComposition;
    pAVar24 = &local_94;
    uVar1 = (undefined4)uVar11;
    uVar2 = (undefined4)((ulonglong)uVar11 >> 0x20);
    uVar21 = CONCAT31((int3)((uint)uVar10 >> 8),1);
    puVar7 = (undefined8 *)(**(code **)(this->_pad_0x0_0 + 0x17c))();
    if (*(char *)(puVar7 + 0xd) == '\0') {
      uVar18 = 0x13;
      pcVar17 = "\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h";
      uVar16 = 0x623a2c;
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
      dVar8 = (double)(ulonglong)uVar18;
    }
    uVar10 = (undefined4)((ulonglong)*puVar7 >> 0x20);
    uVar11 = puVar7[1];
    util__Darray_L_MaterialComposition_G___Darray_L_MaterialComposition_G_
              ((Darray_L_MaterialComposition_G_ *)&stack0xfffffef4,
               (Darray_L_struct_MaterialComposition_G_ *)(puVar7 + 2));
    util__Str_char___Str_char((Str_L_char_G_ *)&stack0xffffff04,(Str_L_char_G_ *)(puVar7 + 4));
    util__Str_char___Str_char((Str_L_char_G_ *)&stack0xffffff10,(Str_L_char_G_ *)((int)puVar7 + 0x2c));
    uVar19 = SUB84(dVar8,0);
    uVar23 = *(undefined4 *)(puVar7 + 7);
    uVar12 = *(undefined1 *)((int)puVar7 + 0x3c);
    AmmoExplosion__AmmoExplosion((AmmoExplosion *)&stack0xffffff24,(AmmoExplosion *)(puVar7 + 8));
    uVar20 = (undefined4)puVar7[0xc];
    uVar22 = (undefined4)((ulonglong)puVar7[0xc] >> 0x20);
    if ((char)this[1]._pad_0x0_0 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    (*(uint64_t *)((char *)&(AVar4.Dimensions_m) + 4)) = uVar11;
    AVar4.Dimensions_m.Radius = uVar10;
    (*(uint32_t *)((char *)&(AVar4) + 12)) = (uint32_t)(uintptr_t)(in_stack_fffffef4);
    AVar4.Descriptor.Length = uVar23;
    AVar4.Class.Data = uVar12;
    (*(uint32_t *)((char *)&(AVar4) + 57)) = (uint32_t)(uintptr_t)(in_stack_ffffff21);
    AVar4.ExplosionPotential.GasComposition.Data = (MaterialConstituent *)iVar13;
    AVar4.ExplosionPotential.GasComposition.Size = iVar14;
    AVar4.ExplosionPotential.GasComposition.Capacity = uVar15;
    AVar4.ExplosionPotential.Mass_kg = uVar16;
    (*(uint32_t *)((char *)&(AVar4.ExplosionPotential.Mass_kg) + 4)) = (uint32_t)(uintptr_t)(pcVar17);
    AVar4.ExplosionPotential.Temperature_K = uVar19;
    (*(uint32_t *)((char *)&(AVar4.ExplosionPotential.Temperature_K) + 4)) = uVar20;
    AVar4.CostOfOneUnit_c = uVar22;
    (*(uint32_t *)((char *)&(AVar4.CostOfOneUnit_c) + 4)) = (uint32_t)(uintptr_t)(pAVar24);
    (*(uint32_t *)((char *)&(MVar5.Data) + 4)) = uVar2;
    MVar5.Data = uVar1;
    (*(uint32_t*)((char*)&(MVar5)+8)) = uVar21;
    (*(uint32_t *)((char *)&(MVar5) + 12)) = uVar25;
    AmmoBaySubModule__PassThroughCachedData
              ((AmmoBaySubModule *)&(this->AttachedAmmoBay).Data.CachedInfo,
               (Material *)(this->AttachedAmmoBay).Data.Capacity,AVar4,MVar5);
    AmmoInfo___AmmoInfo(&local_94);
  }
  return;
}

//==== 00623ae0 GetStatuses_00623ae0 ====

/* public: virtual class DesignStatusBuffer  CarrierModule__GetStatuses(class DataParser
   *)const  */

DesignStatusBuffer * 
CarrierModule__GetStatuses
          (CarrierModule *this,DesignStatusBuffer *__return_storage_ptr__,DataParser *param_1)

{
  __return_storage_ptr__->DataManager = (DataParser *)0x0;
  (__return_storage_ptr__->Messages)._pad_0x0_0 = 0;
  (__return_storage_ptr__->Messages).Data = (DesignStatusMessage *)0x0;
  (__return_storage_ptr__->Messages).Size = 0;
  *(undefined8 *)&(__return_storage_ptr__->Messages).Capacity = 0;
  Module__GetStatuses((Module *)this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

//==== 00623b10 GetPointerPropertyChoices_00623b10 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   CarrierModule__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

ClassMember * 
CarrierModule__GetPointerPropertyChoices
          (CarrierModule *this,ClassMember *param_1,SerializationManagerInterface *param_2)

{
  bool bVar1;
  char *pcVar2;
  SerializationManagerInterface SVar3;
  Reflectable *in_stack_0000000c;
  undefined1 uVar4;
  
  if (*(int *)&param_2[1] < 1) {
    SVar3 = *(SerializationManagerInterface *)&cde_l2_0b2b1c9f_NullString;
  }
  else {
    SVar3 = *param_2;
  }
  for (pcVar2 = "ArmorMaterial";
      (pcVar2[(int)(*(int *)&SVar3 + -0x92d288)] != '\0' || (*pcVar2 != '\0')); pcVar2 = pcVar2 + 1) {
    if (pcVar2[(int)(*(int *)&SVar3 + -0x92d288)] != *pcVar2) {
      if (*(int *)&param_2[1] < 1) {
        SVar3 = *(SerializationManagerInterface *)&cde_l2_0b2b1c9f_NullString;
      }
      else {
        SVar3 = *param_2;
      }
      for (pcVar2 = "Coolant"; (pcVar2[(int)(*(int *)&SVar3 + -0x925310)] != '\0' || (*pcVar2 != '\0'));
          pcVar2 = pcVar2 + 1) {
        if (pcVar2[(int)(*(int *)&SVar3 + -0x925310)] != *pcVar2) {
          bVar1 = util__Str_char___operator__o9((Str_L_char_G_ *)param_2,"ShipClass__Payload");
          if (!bVar1) {
            (param_1->Name).Data =
                 (char *)&vftable_85;
            (param_1->Name).Capacity = 0;
            (param_1->Name).Length = 0;
            *(undefined4 *)&param_1->Type = 0;
            return param_1;
          }
          GetCraftBlueprintsExcludingItemsDependingOnDatum
                    ((DataParser *)param_1,in_stack_0000000c,SUB41(this,0),false);
          return param_1;
        }
      }
      uVar4 = 2;
LAB_00623b4a:
      GetMaterials((DataParser *)param_1,(int)in_stack_0000000c,(bool)uVar4);
      return param_1;
    }
  }
  uVar4 = true;
  goto LAB_00623b4a;
}





//==== 00623bf0 GetReflectionInfo_00623bf0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   CarrierModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall CarrierModule__GetReflectionInfo(CarrierModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_c3f18a7d__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_c3f18a7d__thread_safe_static_guard_0__);
    if ( cde_l2_c3f18a7d__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_e1188d33_ReflectionInfo) = &vftable_279;
      _Init_thread_footer(& cde_l2_c3f18a7d__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_e1188d33_ReflectionInfo;
}





//==== 00623c00 scalar_deleting_destructor_00623c00 ====

/* public: virtual void * __thiscall CarrierModule:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall CarrierModule___scalar_deleting_destructor(CarrierModule *this,uint param_1)

{
  void *pvVar1;
  
  if ((ReferenceController *)this[1]._pad_0x20_8 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)this[1]._pad_0x20_8);
  }
  if ((ReferenceController *)this[1]._pad_0x18_6 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)this[1]._pad_0x18_6);
  }
  AmmoInfo___AmmoInfo((AmmoInfo *)&(this->AttachedAmmoBay).Data.CachedInfo.Name);
*(uint32_t *)&((this->AttachedAmmoBay).Data.CachedInfo.Dimensions_m.Radius) = (uint32_t)(uintptr_t)(&vftable_5);
  pvVar1 = *(void **)((int)&(this->AttachedAmmoBay).Data.CachedInfo.Dimensions_m.Radius + 4);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    *(undefined4 *)((int)&(this->AttachedAmmoBay).Data.CachedInfo.Dimensions_m.Radius + 4) = 0;
  }
  *(undefined ** *)&(this->CoolantTurbopump).RotationalSpeed_RPM = &vftable_5;
  pvVar1 = *(void **)((int)&(this->CoolantTurbopump).RotationalSpeed_RPM + 4);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    *(undefined4 *)((int)&(this->CoolantTurbopump).RotationalSpeed_RPM + 4) = 0;
  }
*(uint32_t *)&((this->Launcher).Cooler.CachedDimensions_m.Height) = (uint32_t)(uintptr_t)(&vftable_5);
  pvVar1 = *(void **)((int)&(this->Launcher).Cooler.CachedDimensions_m.Height + 4);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    *(undefined4 *)((int)&(this->Launcher).Cooler.CachedDimensions_m.Height + 4) = 0;
  }
  *(undefined ** *)&(this->Launcher).StatorDepth_m = &vftable_5;
  pvVar1 = *(void **)((int)&(this->Launcher).StatorDepth_m + 4);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    *(undefined4 *)((int)&(this->Launcher).StatorDepth_m + 4) = 0;
  }
  pvVar1 = *(void **)((int)&(this->GetCachedBoundingBox_m_MemoizedValue).Data.Lower.Z + 4);
*(uint32_t *)&((this->GetCachedBoundingBox_m_MemoizedValue).Data.Lower.Z) = (uint32_t)(uintptr_t)(&vftable_109);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
  }
  *(undefined4 *)((int)&(this->GetCachedBoundingBox_m_MemoizedValue).Data.Lower.Z + 4) = 0;
  *(undefined ** *)&(this->GetCachedBoundingBox_m_MemoizedValue).Data.Lower.Z = (undefined **)(&vftable);
  this->_pad_0x80_32 = (int)&vftable_166;
  if ((void *)this->_pad_0x84_33 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x84_33);
  }
  this->_pad_0x84_33 = 0;
  this->_pad_0x80_32 = (int)&vftable;
  Module___Module((Module *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x2d8);
  }
  return this;
}

//==== 00623d50 GetTypeName_00623d50 ====


/* public: virtual class util__Str_L_char_G_  CarrierModule__ReflectionInfoStruct_class_CarrierModule___GetTypeName(void)const  */

Str_L_char_G_ * 
CarrierModule__ReflectionInfoStruct_class_CarrierModule___GetTypeName
          (ReflectionInfoStruct_L_class_CarrierModule_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"CarrierModule");
  return __return_storage_ptr__;
}





//==== 00623d70 GetMembers_00623d70 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   CarrierModule__ReflectionInfoStruct_class_CarrierModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
CarrierModule__ReflectionInfoStruct_class_CarrierModule___GetMembers__o2
          (ReflectionInfoStruct_L_class_CarrierModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_a0d5c8ff__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_a0d5c8ff__thread_safe_static_guard_0__),
      cde_l2_a0d5c8ff__thread_safe_static_guard_0__ == -1)) {
     cde_l2_dbf8c3aa_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_a0d5c8ff__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_dbf8c3aa_Count);
  iVar3 = 0;
  if (0 <  cde_l2_dbf8c3aa_Count) {
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
    } while (iVar3 <  cde_l2_dbf8c3aa_Count);
  }
  return in_stack_00000004;
}





//==== 00623eb0 GetMember_00623eb0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   CarrierModule__ReflectionInfoStruct_class_CarrierModule___GetMember(class util__Str_L_char_G_ const
   &)const  */

Str_L_char_G_ * 
CarrierModule__ReflectionInfoStruct_class_CarrierModule___GetMember__o2
          (ReflectionInfoStruct_L_class_CarrierModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_a45a5086__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_a45a5086__thread_safe_static_guard_0__),
      cde_l2_a45a5086__thread_safe_static_guard_0__ == -1)) {
     cde_l2_adde5ac2_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_a45a5086__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_adde5ac2_Count) {
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
LAB_00623f3d:
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
          if (cVar3 == '\0') goto LAB_00623f3d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_adde5ac2_Count);
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





//==== 00624050 GetFactory_00624050 ====


/* public: virtual class util__Reflectable * (__cdecl*
   CarrierModule__ReflectionInfoStruct_class_CarrierModule___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall CarrierModule__ReflectionInfoStruct_class_CarrierModule___GetFactory__o2
          (ReflectionInfoStruct_L_class_CarrierModule_G_ *this)

{
  return StaticFactory;
}





//==== 00624750 GetCachedBoundingBox_m_Memoize ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall CarrierModule__GetCachedBoundingBox_m_Memoize(void)const  */

void __thiscall CarrierModule__GetCachedBoundingBox_m_Memoize(CarrierModule *this)

{
  undefined8 stack0xfffffffc;
  double *this_00;
  int iVar1;
  int iVar2;
  CarrierModule *pCVar3;
  bool bVar4;
  Cylinder_L_double_G_ *pCVar5;
  double dVar6;
  undefined4 uVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  uint uVar12;
  double dVar11;
  uint uVar13;
  uint uVar14;
  undefined7 uStack_77;
  Cylinder_L_double_G_ local_70;
  Cylinder_L_double_G_ local_60;
  Cylinder_L_double_G_ local_50;
  double local_40;
  undefined8 local_38;
  undefined8 local_30;
  Cylinder_L_double_G_ local_28;
  Cylinder_L_double_G_ local_18;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((char)(this->Launcher)._pad_0x0_0 == '\0') {
    iVar1 = *(int *)&(this->GetCachedBoundingBox_m_MemoizedValue).Data.Upper.X;
    this_00 = &(this->GetCachedBoundingBox_m_MemoizedValue).Data.Lower.Z;
    local_30 = (double)CONCAT44(iVar1 + 1,(undefined4)local_30);
    (*(uint32_t*)((char*)&(local_38)+4)) = (uint32_t)(uintptr_t)(this);
    util__Darray_L_util__tuple2_L_Order__Type_Cint_G___G___SetSize
              ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)this_00,(int *)((int)&local_30 + 4));
    bVar4 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)this_00,iVar1);
    pCVar3 = (CarrierModule *)(uintptr_t)((*(uint32_t*)((char*)&(local_38)+4)));
    if (bVar4) {
      iVar1 = *(int *)((int)&(this->GetCachedBoundingBox_m_MemoizedValue).Data.Lower.Z + 4);
      iVar2 = *(int *)&(this->GetCachedBoundingBox_m_MemoizedValue).Data.Upper.X;
      *(code **)(iVar1 + -8 + iVar2 * 8) = (long long int (*)())(GetCachedBoundingBox_m_Clear);
      *(undefined4 *)(iVar1 + -4 + iVar2 * 8) = 0;
    }
    if ((char)*(uint32_t *)((char *)&(local_38) + 8) == '\0') {
      pCVar5 = &local_18;
      local_18.Radius = 0;
      (*(uint32_t *)((char *)&(local_18.Radius) + 4)) = 0;
      local_18.Height = 0;
      (*(uint32_t *)((char *)&(local_18.Height) + 4)) = 0;
      local_38 = 0.0;
    }
    else {
      pCVar5 = AmmoBaySubModule__GetArmoredDimensions_m
                         ((AmmoBaySubModule *)&((((struct CarrierModule *)(uintptr_t)(*(uint32_t *)((char *)&(local_38)+4))))->AttachedAmmoBay).Data.CachedInfo,
                          &local_50);
      local_38 = pCVar5->Radius;
    }
    local_40 = pCVar5->Height;
    CraftBlueprint__GetStorageCylinder_m
              ((CraftBlueprint *)(uintptr_t)*(uint32_t *)&((pCVar3->Launcher).TrackLength_m),&local_18);
    local_30 = LinearInductionMotorSubModule__GetTotalThickness_m
                         ((LinearInductionMotorSubModule *)&(pCVar3->Launcher).StatorDepth_m);
    local_30 = local_30 + (double)CONCAT44((*(uint32_t *)((char *)&(local_18.Radius) + 4)),local_18.Radius) * 2.0;
    CraftBlueprint__GetStorageCylinder_m
              ((CraftBlueprint *)(uintptr_t)*(uint32_t *)&((pCVar3->Launcher).TrackLength_m),&local_60);
    local_30 = local_30 * 0.5;
    dVar9 = (double)CONCAT44((*(uint32_t *)((char *)&(local_18.Height) + 4)),local_18.Height) * 0.5;
    if (local_30 <= local_38) {
      local_30 = local_38;
    }
    dVar6 = local_40 * 0.5;
    local_40 = dVar9;
    if (dVar9 <= dVar6) {
      local_40 = dVar6;
    }
    CraftBlueprint__GetStorageCylinder_m
              ((CraftBlueprint *)&(pCVar3->Launcher).TrackLength_m,&local_28);
    LinearInductionMotorSubModule__GetTotalThickness_m
              ((LinearInductionMotorSubModule *)&(pCVar3->Launcher).StatorDepth_m);
    pCVar5 = CraftBlueprint__GetStorageCylinder_m
                       ((CraftBlueprint *)&(pCVar3->Launcher).TrackLength_m,&local_70);
    uVar12 = (uint)((ulonglong)local_40 >> 0x20);
    uVar13 = (uint)((ulonglong)local_30 >> 0x20);
    uVar8 = uVar12 ^ 0x80000000;
    if (local_40 <= -local_40) {
      uVar8 = uVar12;
    }
    dVar9 = -local_40;
    if (-local_40 <= local_40) {
      dVar9 = local_40;
    }
    dVar10 = pCVar5->Radius + pCVar5->Radius + *(double *)&(pCVar3->Launcher).Coolant +
             *(double *)&(pCVar3->AttachedAmmoBay).Data.CachedArmorComposition + local_38 + local_38
    ;
    uVar7 = SUB84(dVar10,0);
    uVar12 = (uint)((ulonglong)dVar10 >> 0x20) ^ 0x80000000;
    dVar11 = -dVar10;
    dVar6 = -local_30;
    if (local_30 <= -local_30) {
      dVar6 = local_30;
    }
    if (0.0 <= -dVar10) {
      uVar7 = 0;
      uVar12 = 0;
    }
    if (dVar11 <= 0.0) {
      dVar11 = 0.0;
    }
    uVar14 = uVar13 ^ 0x80000000;
    if (-local_30 <= local_30) {
      uVar14 = uVar13;
    }
    *(int *)&(pCVar3->GetCachedBoundingBox_m_MemoizedValue).Data.Upper.Y = SUB84(local_40,0);
    *(uint *)((int)&(pCVar3->GetCachedBoundingBox_m_MemoizedValue).Data.Upper.Y + 4) = uVar8;
    *(int *)&(pCVar3->GetCachedBoundingBox_m_MemoizedValue).Data.Upper.Z = SUB84(dVar6,0);
    *(int *)((int)&(pCVar3->GetCachedBoundingBox_m_MemoizedValue).Data.Upper.Z + 4) =
         (int)((ulonglong)dVar6 >> 0x20);
    *(undefined4 *)&(pCVar3->GetCachedBoundingBox_m_MemoizedValue).IsValidData = uVar7;
    *(uint *)&(pCVar3->GetCachedBoundingBox_m_MemoizedValue).field_0x34 = uVar12;
    *(int *)&(pCVar3->GetCachedPowerUsed_W_MemoizedValue).Data = SUB84(dVar9,0);
    *(int *)((int)&(pCVar3->GetCachedPowerUsed_W_MemoizedValue).Data + 4) =
         (int)((ulonglong)dVar9 >> 0x20);
    *(int *)&(pCVar3->GetCachedPowerUsed_W_MemoizedValue).IsValidData = SUB84(local_30,0);
    *(uint *)&(pCVar3->GetCachedPowerUsed_W_MemoizedValue).field_0xc = uVar14;
    pCVar3->ShipClass__Payload = (struct CraftBlueprint *)(uintptr_t)(SUB84(dVar11,0));
    *(int *)&(*(undefined1 *)(void *)((char *)(uintptr_t)(pCVar3) + 0xf4)) = (int)((ulonglong)dVar11 >> 0x20);
    (pCVar3->Launcher)._pad_0x0_0 = (int)CONCAT71(uStack_77,1);
    (pCVar3->Launcher)._pad_0x4_1 = (int)((uint7)uStack_77 >> 0x18);
  }
  return;
}

//==== 00624950 GetHeatGeneratedPerShot_J_Clear ====

/* public: void __thiscall RailgunModule__GetHeatGeneratedPerShot_J_Clear(void)const  */

void __thiscall RailgunModule__GetHeatGeneratedPerShot_J_Clear(RailgunModule *this)

{
  *(undefined1 *)&(this->Rails).Composition = 0;
  (this->Rails)._pad_0x8_2 = 0;
  (this->Rails)._pad_0xc_3 = 0;
  return;
}

//==== 00624ba0 StaticFactory_00624ba0 ====

/* public: static class util__Reflectable * __cdecl CarrierModule__ReflectionInfoStruct_L_class_CarrierModule_G___StaticFactory(void) */

Reflectable * __cdecl CarrierModule__ReflectionInfoStruct_class_CarrierModule___StaticFactory(void)

{
  Module *this;
  
  this = (Module *)(uintptr_t)(port_op_new(0x2d8));
  if (this != (Module *)0x0) {
    memset(this,0,0x2d8);
    Module__Module(this);
    *(undefined1 *)&this[1].GetTotalPowerUsage_W_MemoizedValue.Data = 0;
    *(undefined8 *)&this[1].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    *(undefined4 *)&this[1].GetTotalPowerUsage_W_MemoizedValue.IsValidData = 0;
  *(undefined4 *)((char *)&this[1].GetTotalPowerUsage_W_MemoizedValue + 0xc) = 0;
    this[1].Models._pad_0x0_0 = 0;
    this[1].Models.Data = (SharedPtr_L_GameModel_G_ *)0x0;
    *(undefined ***)&this[1].GetTotalPowerUsage_W_MemoizedValue.IsValidData =
         &vftable_166;
  *(undefined4 *)((char *)&this[1].GetTotalPowerUsage_W_MemoizedValue + 0xc) = 0;
    this[1].Models._pad_0x0_0 = 0;
    this[1].Models.Data = (SharedPtr_L_GameModel_G_ *)0x0;
    this[1].Models.Size = 0;
    this[1].Models.Capacity = 0;
    this[1].UsesCustomName = false;
    this[2]._pad_0x0_0 = 0;
    this[2]._pad_0x4_1 = 0;
    *(undefined1 *)&this[2]._pad_0x8_2 = 0;
    this->_pad_0x0_0 = (int)&vftable_for_EditorReflectable__28;
    *(undefined4 *)&(this->GetTotalPowerUsage_W_MemoizedValue).field_0xc = (undefined4)(uintptr_t)vftable_for_util__RTTIBaseClass__27;
    this[2].ModuleMemoizationHandlerInstance.ResetFunctions.Data = (pmf_27707b45 *)0x0;
    this[2].ModuleMemoizationHandlerInstance.ResetFunctions.Size = 0;
    this[2].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    *(undefined4 *)&this[2].ModuleMemoizationHandlerInstance = 0;
    this[2].ModuleMemoizationHandlerInstance.ResetFunctions.Data =
         (pmf_27707b45 *)&vftable_109;
    this[2].ModuleMemoizationHandlerInstance.ResetFunctions.Size = 0;
    this[2].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    *(undefined4 *)&this[2].ModuleMemoizationHandlerInstance = 0;
    *(undefined4 *)&this[2].GetTotalPowerUsage_W_MemoizedValue.Data = 0;
    *(undefined4 *)((int)&this[2].GetTotalPowerUsage_W_MemoizedValue.Data + 4) = 0;
    *(undefined4 *)&this[2].GetTotalPowerUsage_W_MemoizedValue.IsValidData = 0;
  *(undefined4 *)((char *)&this[2].GetTotalPowerUsage_W_MemoizedValue + 0xc) = 0;
    this[2].Models._pad_0x0_0 = 0;
    this[2].Models.Data = (SharedPtr_L_GameModel_G_ *)0x0;
    this[2].Models.Size = 0;
    this[2].Models.Capacity = 0;
    this[2].UsesCustomName = false;
    this[2].IsUserCreated = false;
  *(undefined2 *)((char *)&this[2] + 0x4a) = 0;
  *(undefined4 *)((char *)&this[2] + 0x4c) = 0;
    this[3]._pad_0x0_0 = 0;
    this[3]._pad_0x4_1 = 0;
    *(undefined1 *)&this[3]._pad_0x8_2 = 0;
    this[3]._pad_0x10_4 = 0;
    this[3].ModuleMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 = 0;
    *(undefined1 *)&this[3].ModuleMemoizationHandlerInstance.ResetFunctions.Data = 0;
    *(undefined4 *)((int)&this[3].GetTotalPowerUsage_W_MemoizedValue.Data + 4) = 0;
    *(undefined4 *)&this[3].GetTotalPowerUsage_W_MemoizedValue.IsValidData = 0;
  *(undefined4 *)((char *)&this[3].GetTotalPowerUsage_W_MemoizedValue + 0xc) = 0;
    *(undefined ***)&this[3].GetTotalPowerUsage_W_MemoizedValue.Data =
         &vftable_209;
    *(undefined4 *)&this[4].ModuleMemoizationHandlerInstance = 0;
    *(undefined4 *)&this[4].GetTotalPowerUsage_W_MemoizedValue.Data = 0;
    *(undefined4 *)((int)&this[4].GetTotalPowerUsage_W_MemoizedValue.Data + 4) = 0;
    this[4].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity =
         (int)&vftable_207;
    this[4].Models._pad_0x0_0 = 0;
    this[4].Models.Data = (SharedPtr_L_GameModel_G_ *)0x0;
    this[4].Models.Size = 0;
    this[4].Models.Capacity = 0;
    TurbopumpSubModule__TurbopumpSubModule
              ((TurbopumpSubModule *)&this[5].GetTotalPowerUsage_W_MemoizedValue);
    AmmoBaySubModule__AmmoBaySubModule((AmmoBaySubModule *)&this[6].Models);
    this[8].GetTotalPowerUsage_W_MemoizedValue.IsValidData = false;
    this[8].Models.Capacity = 0;
    this[8].UsesCustomName = false;
    this[8].IsUserCreated = false;
  *(undefined2 *)((char *)&this[8] + 0x4a) = 0;
  *(undefined4 *)((char *)&this[8] + 0x4c) = 0;
    this[9]._pad_0x0_0 = 0;
    return (Reflectable *)this;
  }
  return (Reflectable *)0x0;
}

//==== 00624d60 StaticGetMemberByIndex_00624d60 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl CarrierModule__ReflectionInfoStruct_class_CarrierModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
CarrierModule__ReflectionInfoStruct_class_CarrierModule___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_e445c3df__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_e445c3df__thread_safe_static_guard_0__);
    if ( cde_l2_e445c3df__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_06169002_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0097476c = 0;
      _DAT_00974770 = 0;
      _DAT_00974774 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974778,"Unused");
      _DAT_00974784 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974788,"SteamWorkshopID");
      _DAT_00974794 = 6;
      _DAT_00974798 = 0x10;
      _DAT_0097479c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009747a0,"AStr");
      _DAT_009747ac = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009747b0,"Description");
      _DAT_009747bc = 6;
      _DAT_009747c0 = 0x20;
      _DAT_009747c4 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009747c8,"AStr");
      _DAT_009747d4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009747d8,"UsesCustomName");
      _DAT_009747e4 = 1;
      _DAT_009747e8 = 0x68;
      _DAT_009747ec = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009747f0,"bool");
      _DAT_009747fc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974800,"ShipClass__Payload");
      _DAT_0097480c = 8;
      _DAT_00974810 = 0x110;
      _DAT_00974814 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974818,"CraftBlueprint");
      _DAT_00974824 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974828,"Launcher");
      _DAT_00974834 = 10;
      _DAT_00974838 = 0x118;
      _DAT_0097483c = 0xa0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974840,"LinearInductionMotorSubModule");
      _DAT_0097484c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974850,"CoolantTurbopump");
      _DAT_0097485c = 10;
      _DAT_00974860 = 0x1b8;
      _DAT_00974864 = 0x48;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974868,"TurbopumpSubModule");
      _DAT_00974874 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974878,"CoolantInletTemperature_K");
      _DAT_00974884 = 4;
      _DAT_00974888 = 0x200;
      _DAT_0097488c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974890,"double");
      _DAT_0097489c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009748a0,"ArmorMaterial");
      _DAT_009748ac = 8;
      _DAT_009748b0 = 0x208;
      _DAT_009748b4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009748b8,"Material");
      _DAT_009748c4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009748c8,"ArmorThickness_m");
      _DAT_009748d4 = 4;
      _DAT_009748d8 = 0x210;
      _DAT_009748dc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009748e0,"double");
      _DAT_009748ec = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009748f0,"AttachedAmmoBay");
      _DAT_009748fc = 10;
      _DAT_00974900 = 0x218;
      _DAT_00974904 = 0x98;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974908,"AmmoBaySubModule");
      _DAT_00974914 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974918,"EngagementRange_km");
      _DAT_00974924 = 4;
      _DAT_00974928 = 0x2b8;
      _DAT_0097492c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974930,"double");
      _DAT_0097493c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974940,"TargetsShips");
      _DAT_0097494c = 1;
      _DAT_00974950 = 0xb0;
      _DAT_00974954 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974958,"bool");
      _DAT_00974964 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974968,"TargetsShots");
      _DAT_00974974 = 1;
      _DAT_00974978 = 0xb1;
      _DAT_0097497c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974980,"bool");
      _DAT_0097498c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974990,"LaunchCountCap");
      _DAT_0097499c = 2;
      _DAT_009749a0 = 0x2c0;
      _DAT_009749a4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009749a8,"int");
      _DAT_009749b4 = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_CarrierModule__ReflectionInfoStruct_class_CarrierModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_e445c3df__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_06169002_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_0097476c + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_00974770 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_00974774 + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_00974778 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_00974784)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_00974785)[iVar1];
  return __return_storage_ptr__;
}





//==== 00625210 StaticGetMemberCount_00625210 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl CarrierModule__ReflectionInfoStruct_class_CarrierModule___StaticGetMemberCount(void) */

int __cdecl CarrierModule__ReflectionInfoStruct_class_CarrierModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_c5939cb8__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_c5939cb8__thread_safe_static_guard_0__);
    if ( cde_l2_c5939cb8__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_21db3970_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0097450c = 0;
      _DAT_00974510 = 0;
      _DAT_00974514 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974518,"Unused");
      _DAT_00974524 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974528,"SteamWorkshopID");
      _DAT_00974534 = 6;
      _DAT_00974538 = 0x10;
      _DAT_0097453c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974540,"AStr");
      _DAT_0097454c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974550,"Description");
      _DAT_0097455c = 6;
      _DAT_00974560 = 0x20;
      _DAT_00974564 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974568,"AStr");
      _DAT_00974574 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974578,"UsesCustomName");
      _DAT_00974584 = 1;
      _DAT_00974588 = 0x68;
      _DAT_0097458c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974590,"bool");
      _DAT_0097459c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009745a0,"ShipClass__Payload");
      _DAT_009745ac = 8;
      _DAT_009745b0 = 0x110;
      _DAT_009745b4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009745b8,"CraftBlueprint");
      _DAT_009745c4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009745c8,"Launcher");
      _DAT_009745d4 = 10;
      _DAT_009745d8 = 0x118;
      _DAT_009745dc = 0xa0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009745e0,"LinearInductionMotorSubModule");
      _DAT_009745ec = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009745f0,"CoolantTurbopump");
      _DAT_009745fc = 10;
      _DAT_00974600 = 0x1b8;
      _DAT_00974604 = 0x48;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974608,"TurbopumpSubModule");
      _DAT_00974614 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974618,"CoolantInletTemperature_K");
      _DAT_00974624 = 4;
      _DAT_00974628 = 0x200;
      _DAT_0097462c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974630,"double");
      _DAT_0097463c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974640,"ArmorMaterial");
      _DAT_0097464c = 8;
      _DAT_00974650 = 0x208;
      _DAT_00974654 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974658,"Material");
      _DAT_00974664 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974668,"ArmorThickness_m");
      _DAT_00974674 = 4;
      _DAT_00974678 = 0x210;
      _DAT_0097467c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974680,"double");
      _DAT_0097468c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974690,"AttachedAmmoBay");
      _DAT_0097469c = 10;
      _DAT_009746a0 = 0x218;
      _DAT_009746a4 = 0x98;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009746a8,"AmmoBaySubModule");
      _DAT_009746b4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009746b8,"EngagementRange_km");
      _DAT_009746c4 = 4;
      _DAT_009746c8 = 0x2b8;
      _DAT_009746cc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009746d0,"double");
      _DAT_009746dc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009746e0,"TargetsShips");
      _DAT_009746ec = 1;
      _DAT_009746f0 = 0xb0;
      _DAT_009746f4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009746f8,"bool");
      _DAT_00974704 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974708,"TargetsShots");
      _DAT_00974714 = 1;
      _DAT_00974718 = 0xb1;
      _DAT_0097471c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974720,"bool");
      _DAT_0097472c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974730,"LaunchCountCap");
      _DAT_0097473c = 2;
      _DAT_00974740 = 0x2c0;
      _DAT_00974744 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974748,"int");
      _DAT_00974754 = 0;
      atexit( private__static_int_const___cdecl_CarrierModule__ReflectionInfoStruct_class_CarrierModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_c5939cb8__thread_safe_static_guard_0__);
    }
  }
  return 0xf;
}





//==== 00625670 StaticGetReflectionInfo_00625670 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct CarrierModule__ReflectionInfoStruct_L_classCarrierModule_G_ * __cdecl
   CarrierModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_CarrierModule_G_ * __cdecl CarrierModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_c3f18a7d__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_c3f18a7d__thread_safe_static_guard_0__);
    if ( cde_l2_c3f18a7d__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_e1188d33_ReflectionInfo) = &vftable_279;
      _Init_thread_footer(& cde_l2_c3f18a7d__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_e1188d33_ReflectionInfo;
}





//==== 006256d0 GetTypeName_006256d0 ====


/* public: virtual class util__Str_L_char_G_  SolenoidSubModule__ReflectionInfoStruct_class_SolenoidSubModule___GetTypeName(void)const  */

Str_L_char_G_ * 
SolenoidSubModule__ReflectionInfoStruct_class_SolenoidSubModule___GetTypeName
          (ReflectionInfoStruct_L_class_SolenoidSubModule_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"SolenoidSubModule");
  return __return_storage_ptr__;
}





//==== 006256f0 GetMembers_006256f0 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   SolenoidSubModule__ReflectionInfoStruct_class_SolenoidSubModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
SolenoidSubModule__ReflectionInfoStruct_class_SolenoidSubModule___GetMembers__o2
          (ReflectionInfoStruct_L_class_SolenoidSubModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_fcfdfafa__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_fcfdfafa__thread_safe_static_guard_0__),
      cde_l2_fcfdfafa__thread_safe_static_guard_0__ == -1)) {
     cde_l2_353f6405_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_fcfdfafa__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_353f6405_Count);
  iVar3 = 0;
  if (0 <  cde_l2_353f6405_Count) {
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
    } while (iVar3 <  cde_l2_353f6405_Count);
  }
  return in_stack_00000004;
}





//==== 00625830 GetMember_00625830 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   SolenoidSubModule__ReflectionInfoStruct_class_SolenoidSubModule___GetMember(class util__Str_L_char_G_
   const &)const  */

Str_L_char_G_ * 
SolenoidSubModule__ReflectionInfoStruct_class_SolenoidSubModule___GetMember__o2
          (ReflectionInfoStruct_L_class_SolenoidSubModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_3ef3f831__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_3ef3f831__thread_safe_static_guard_0__),
      cde_l2_3ef3f831__thread_safe_static_guard_0__ == -1)) {
     cde_l2_7ca84982_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_3ef3f831__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_7ca84982_Count) {
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
LAB_006258bd:
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
          if (cVar3 == '\0') goto LAB_006258bd;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_7ca84982_Count);
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





//==== 006259d0 GetFactory_006259d0 ====


/* public: virtual class util__Reflectable * (__cdecl*
   SolenoidSubModule__ReflectionInfoStruct_class_SolenoidSubModule___GetFactory(void)const )(void)
    */

_func_Reflectable_ptr * 
__thiscall SolenoidSubModule__ReflectionInfoStruct_class_SolenoidSubModule___GetFactory__o2
          (ReflectionInfoStruct_L_class_SolenoidSubModule_G_ *this)

{
  return StaticFactory;
}





//==== 006259e0 GetTypeName_006259e0 ====


/* public: virtual class util__Str_L_char_G_  CoilgunModule__ReflectionInfoStruct_class_CoilgunModule___GetTypeName(void)const  */

Str_L_char_G_ * 
CoilgunModule__ReflectionInfoStruct_class_CoilgunModule___GetTypeName
          (ReflectionInfoStruct_L_class_CoilgunModule_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"CoilgunModule");
  return __return_storage_ptr__;
}





//==== 00625a00 GetMembers_00625a00 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   CoilgunModule__ReflectionInfoStruct_class_CoilgunModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
CoilgunModule__ReflectionInfoStruct_class_CoilgunModule___GetMembers__o2
          (ReflectionInfoStruct_L_class_CoilgunModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_8df20337__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_8df20337__thread_safe_static_guard_0__),
      cde_l2_8df20337__thread_safe_static_guard_0__ == -1)) {
     cde_l2_85802362_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_8df20337__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_85802362_Count);
  iVar3 = 0;
  if (0 <  cde_l2_85802362_Count) {
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
    } while (iVar3 <  cde_l2_85802362_Count);
  }
  return in_stack_00000004;
}





//==== 00625b40 GetMember_00625b40 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   CoilgunModule__ReflectionInfoStruct_class_CoilgunModule___GetMember(class util__Str_L_char_G_ const
   &)const  */

Str_L_char_G_ * 
CoilgunModule__ReflectionInfoStruct_class_CoilgunModule___GetMember__o2
          (ReflectionInfoStruct_L_class_CoilgunModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_9faf2736__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_9faf2736__thread_safe_static_guard_0__),
      cde_l2_9faf2736__thread_safe_static_guard_0__ == -1)) {
     cde_l2_9f617163_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_9faf2736__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_9f617163_Count) {
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
LAB_00625bcd:
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
          if (cVar3 == '\0') goto LAB_00625bcd;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_9f617163_Count);
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





//==== 00625ce0 GetFactory_00625ce0 ====


/* public: virtual class util__Reflectable * (__cdecl*
   CoilgunModule__ReflectionInfoStruct_class_CoilgunModule___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall CoilgunModule__ReflectionInfoStruct_class_CoilgunModule___GetFactory__o2
          (ReflectionInfoStruct_L_class_CoilgunModule_G_ *this)

{
  return StaticFactory;
}





//==== 00626720 MethodCallerConst__public__double___thiscall_BarrelArmorSubModule__GetBarrelRadialEndMomentOfInertia_kg_m2_void_const__ ====


/* public: static double __cdecl util__DelegateFactory_L_struct_BarrelArmorSubModule_Cdouble_G___MethodCallerConst_L__public_double__thiscall_BarrelArmorSubModule__GetBarrelRadialEndMomentOfInertia_kg_m2_void_const_G_(void const * const) */

double __cdecl
util__DelegateFactory_struct_BarrelArmorSubModule_double___MethodCallerConst__public__double___thiscall_BarrelArmorSubModule__GetBarrelRadialEndMomentOfInertia_kg_m2_void_const
          (void *param_1)

{
  double dVar1;
  double dVar2;
  float10 fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar5 = Mechanics__ThickCylindericalShellRadialMomentOfInertia_kg_m2
                    (*(double *)((int)param_1 + 0x78),*(double *)((int)param_1 + 0x28),
                     *(double *)((int)param_1 + 0x70),*(double *)((int)param_1 + 0x80));
  if ((*(int *)((int)param_1 + 0x40) == 0) || (*(code **)((int)param_1 + 0x44) == (code *)0x0)) {
    dVar1 = 0.0;
  }
  else {
    fVar3 = (float10)(**(code **)((int)param_1 + 0x44))();
    dVar1 = (double)fVar3;
  }
  dVar6 = Mechanics__ThickCylindericalShellRadialMomentOfInertia_kg_m2
                    (*(double *)((int)param_1 + 0x38) - *(double *)((int)param_1 + 0x78),
                     *(double *)((int)param_1 + 0x28),*(double *)((int)param_1 + 0x30),
                     dVar1 - *(double *)((int)param_1 + 0x80));
  dVar1 = *(double *)((int)param_1 + 0x30);
  dVar4 = *(double *)((int)param_1 + 0x18) + dVar1;
  dVar7 = Mechanics__ThickCylindericalShellRadialMomentOfInertia_kg_m2
                    (*(double *)((int)param_1 + 0x38) - *(double *)((int)param_1 + 0x78),dVar1,dVar4
                     ,(dVar4 * 3.141592653589793 * dVar4 - dVar1 * 3.141592653589793 * dVar1) *
                      *(double *)((int)param_1 + 0x38) *
                      *(double *)(*(int *)((int)param_1 + 0x10) + 0x30));
  dVar1 = *(double *)((int)param_1 + 0x78);
  dVar4 = (*(double *)((int)param_1 + 0x38) - dVar1) * 0.5 + dVar1;
  if ((*(int *)((int)param_1 + 0x40) == 0) || (*(code **)((int)param_1 + 0x44) == (code *)0x0)) {
    dVar2 = 0.0;
  }
  else {
    fVar3 = (float10)(**(code **)((int)param_1 + 0x44))();
    dVar2 = (double)fVar3;
  }
  return dVar4 * dVar4 * dVar2 + dVar6 + dVar7 + dVar5 +
         dVar1 * 0.5 * dVar1 * 0.5 * *(double *)((int)param_1 + 0x80);
}





//==== 00626730 MethodCallerConst__public__struct_util__Range_double____thiscall_CoilgunModule__GetAccelChartXLimits_void_const__0__ ====


/* public: static struct util__Range_L_double_G_ __cdecl util__DelegateFactory_L_class_CoilgunModule_Cstructutil__Range_L_double_G__G___MethodCallerConst_L__public_structutil__Range_L_double_G____thiscallCoilgunModule__GetAccelChartXLimits_void_const_C0__G_(void const * const) */

Range_L_double_G_ * __cdecl
util__DelegateFactory_class_CoilgunModule_struct_util__Range_double_____MethodCallerConst__public__struct_util__Range_double____thiscall_CoilgunModule__GetAccelChartXLimits_void_const__0
          (Range_L_double_G_ *__return_storage_ptr__,void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Range_L_double_G_ *pRVar4;
  Range_L_double_G_ RStack_14;
  
  pRVar4 = CoilgunModule__GetAccelChartXLimits((CoilgunModule *)param_1,&RStack_14);
  uVar1 = *(undefined4 *)((int)&pRVar4->Lower + 4);
  uVar2 = *(undefined4 *)&pRVar4->Upper;
  uVar3 = *(undefined4 *)((int)&pRVar4->Upper + 4);
  *(undefined4 *)&__return_storage_ptr__->Lower = *(undefined4 *)&pRVar4->Lower;
  *(undefined4 *)((int)&__return_storage_ptr__->Lower + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Upper = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Upper + 4) = uVar3;
  return __return_storage_ptr__;
}





//==== 00626750 MethodCallerConst__public__struct_util__Range_double____thiscall_CoilgunModule__GetAccelChartYLimits_void_const__0__ ====


/* public: static struct util__Range_L_double_G_ __cdecl util__DelegateFactory_L_class_CoilgunModule_Cstructutil__Range_L_double_G__G___MethodCallerConst_L__public_structutil__Range_L_double_G____thiscallCoilgunModule__GetAccelChartYLimits_void_const_C0__G_(void const * const) */

Range_L_double_G_ * __cdecl
util__DelegateFactory_class_CoilgunModule_struct_util__Range_double_____MethodCallerConst__public__struct_util__Range_double____thiscall_CoilgunModule__GetAccelChartYLimits_void_const__0
          (Range_L_double_G_ *__return_storage_ptr__,void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Range_L_double_G_ *pRVar4;
  Range_L_double_G_ RStack_14;
  
  pRVar4 = CoilgunModule__GetAccelChartYLimits((CoilgunModule *)param_1,&RStack_14);
  uVar1 = *(undefined4 *)((int)&pRVar4->Lower + 4);
  uVar2 = *(undefined4 *)&pRVar4->Upper;
  uVar3 = *(undefined4 *)((int)&pRVar4->Upper + 4);
  *(undefined4 *)&__return_storage_ptr__->Lower = *(undefined4 *)&pRVar4->Lower;
  *(undefined4 *)((int)&__return_storage_ptr__->Lower + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Upper = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Upper + 4) = uVar3;
  return __return_storage_ptr__;
}





//==== 00626770 MethodCallerConst__public__double___thiscall_CoilgunModule__GetBarrelAndArmorRadius_m_void_const__0__ ====


/* public: static double __cdecl util__DelegateFactory_L_class_CoilgunModule_Cdouble_G___MethodCallerConst_L__public_double__thiscall_CoilgunModule__GetBarrelAndArmorRadius_m_void_const_C0__G_(void const * const) */

double __cdecl
util__DelegateFactory_class_CoilgunModule_double___MethodCallerConst__public__double___thiscall_CoilgunModule__GetBarrelAndArmorRadius_m_void_const__0
          (void *param_1)

{
  return (*(double *)((int)param_1 + 0x168) + *(double *)((int)param_1 + 0x168)) *
         (double)*(int *)((int)param_1 + 0x174) + *(double *)((int)param_1 + 0x178) +
         *(double *)((int)param_1 + 0x1b0);
}





//==== 00626780 MethodCallerConst__public__int___thiscall_CoilgunModule__GetBarrelCount_void_const__0__ ====


/* public: static int __cdecl util__DelegateFactory_L_class_CoilgunModule_Cint_G___MethodCallerConst_L__public_int__thiscall_CoilgunModule__GetBarrelCount_void_const_C0__G_(void const * const) */

int __cdecl
util__DelegateFactory_class_CoilgunModule_int___MethodCallerConst__public__int___thiscall_CoilgunModule__GetBarrelCount_void_const__0
          (void *param_1)

{
  if (*(char *)((int)param_1 + 0x3b8) != '\0') {
    return *(int *)((int)param_1 + 0x2e0);
  }
  return 1;
}





//==== 00626790 MethodCallerConst__public__double___thiscall_CoilgunModule__GetBarrelMass_kg_void_const__0__ ====


/* public: static double __cdecl util__DelegateFactory_L_class_CoilgunModule_Cdouble_G___MethodCallerConst_L__public_double__thiscall_CoilgunModule__GetBarrelMass_kg_void_const_C0__G_(void const * const) */

double __cdecl
util__DelegateFactory_class_CoilgunModule_double___MethodCallerConst__public__double___thiscall_CoilgunModule__GetBarrelMass_kg_void_const__0
          (void *param_1)

{
  double dVar1;
  
  dVar1 = SolenoidSubModule__GetVolume_m3((SolenoidSubModule *)((int)param_1 + 0x150));
  return dVar1 * *(double *)(*(int *)((int)param_1 + 0x160) + 0x30) *
         (double)*(int *)((int)param_1 + 400);
}





//==== 006267a0 MethodCallerConst__public__double___thiscall_CoilgunModule__GetChartAcceleration_m__s2_double_const__0__ ====


/* public: static double __cdecl util__DelegateFactory_L_class_CoilgunModule_Cdouble_Cdouble_G___MethodCallerConst_L__public_double__thiscall_CoilgunModule__GetChartAcceleration_m__s2_double_const_C0__G_(void const * const,double) */

double __cdecl
util__DelegateFactory_class_CoilgunModule_double_double___MethodCallerConst__public__double___thiscall_CoilgunModule__GetChartAcceleration_m__s2_double_const__0
          (void *param_1,double param_2)

{
  double dVar1;
  undefined4 in_stack_00000008;
  
  dVar1 = CoilgunModule__GetChartAcceleration_m__s2
                    ((CoilgunModule *)param_1,(double)CONCAT44((*(uint32_t*)&(param_2)),in_stack_00000008));
}





//==== 006267c0 Darray_util__tuple5_void____cdecl___void__util__Str_char__util__Str_char__bool__util__Str_char______006267c0 ====


/* public:  util__Darray_L_structutil__tuple5_L_void___cdecl_P__void__Cclass_util__Str_L_char_G__Cclassutil__Str_L_char_G__Cbool_P_Cclassutil__Str_L_char_G__G__G___Darray_L_struct_util__tuple5_L_void___cdecl_P__void__Cclassutil__Str_L_char_G__Cclassutil__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G__G__G_(class util__Darray_L_structutil__tuple5_L_void___cdecl_P__void__Cclass_util__Str_L_char_G__Cclassutil__Str_L_char_G__Cbool_P_Cclassutil__Str_L_char_G__G__G_ const &) */

Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G___G_
* 
util__Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__bool__class_util__Str_char_______Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__bool__class_util__Str_char
          (Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G___G_
           *this,Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G___G_
                 *param_1)

{
  Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G___G_
  *pDVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  Str_L_char_G_ *this_00;
  
  pDVar1 = param_1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = (undefined **)(&vftable_170);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  param_1 = (Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G___G_
             *)(**(code **)(*(int *)param_1 + 0xc))();
  SetSize(this,(int *)&param_1);
  uVar5 = *(uint *)(this + 0xc);
  uVar4 = -(uint)((int)((ulonglong)uVar5 * 0x2c >> 0x20) != 0) | (uint)((ulonglong)uVar5 * 0x2c);
  puVar2 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
  if (puVar2 == (uint *)0x0) {
    puVar7 = (uint *)0x0;
  }
  else {
    *puVar2 = uVar5;
    puVar7 = puVar2 + 1;
    if (uVar5 != 0) {
      puVar3 = puVar2 + 4;
      puVar2 = puVar7;
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
  *(uint **)(this + 4) = puVar7;
  piVar6 = *(int **)(pDVar1 + 4);
  if (piVar6 == piVar6 + *(int *)(pDVar1 + 8) * 0xb) {
    return this;
  }
  this_00 = (Str_L_char_G_ *)(puVar7 + 4);
  do {
    this_00[-2].Length = *piVar6;
    util__Maybe_struct_util__ClassMember___operator(this_00 + -1,(Str_L_char_G_ *)(piVar6 + 1));
    util__Maybe_struct_util__ClassMember___operator(this_00,(Str_L_char_G_ *)(piVar6 + 4));
    this_00[1].Data = (char *)piVar6[7];
    util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)&this_00[1].Capacity,(Str_L_char_G_ *)(piVar6 + 8));
    piVar6 = piVar6 + 0xb;
    this_00 = (Str_L_char_G_ *)&this_00[3].Length;
  } while (piVar6 != (int *)(*(int *)(pDVar1 + 8) * 0x2c + *(int *)(pDVar1 + 4)));
  return this;
}





//==== 00626920 Darray_util__tuple5_void____cdecl___void__util__Str_char__util__Str_char__util__Delegate_void__util__Str_char______00626920 ====


/* public:  util__Darray_L_structutil__tuple5_L_void___cdecl_P__void__Cclass_util__Str_L_char_G__Cclassutil__Str_L_char_G__Cclassutil__Delegate_L_void_G__Cclassutil__Str_L_char_G__G___G___Darray_L_structutil__tuple5_L_void___cdecl_P__void__Cclassutil__Str_L_char_G__Cclass_util__Str_L_char_G__Cclassutil__Delegate_L_void_G__Cclassutil__Str_L_char_G__G__G_(class util__Darray_L_struct_util__tuple5_L_void___cdecl_P__void__Cclassutil__Str_L_char_G__Cclassutil__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclassutil__Str_L_char_G__G__G_ const &) */

Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G___G_
* 
util__Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__class_util__Delegate_void__class_util__Str_char_______Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__class_util__Delegate_void__class_util__Str_char
          (Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G___G_
           *this,Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G___G_
                 *param_1)

{
  Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G___G_
  *pDVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  Str_L_char_G_ *this_00;
  
  pDVar1 = param_1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = &vftable_169;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  param_1 = (Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G___G_
             *)(**(code **)(*(int *)param_1 + 0xc))();
  SetSize(this,(int *)&param_1);
  uVar5 = *(uint *)(this + 0xc);
  uVar4 = -(uint)((int)((ulonglong)uVar5 * 0x30 >> 0x20) != 0) | (uint)((ulonglong)uVar5 * 0x30);
  puVar2 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
  if (puVar2 == (uint *)0x0) {
    puVar7 = (uint *)0x0;
  }
  else {
    *puVar2 = uVar5;
    puVar7 = puVar2 + 1;
    if (uVar5 != 0) {
      puVar3 = puVar2 + 4;
      puVar2 = puVar7;
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
  *(uint **)(this + 4) = puVar7;
  piVar6 = *(int **)(pDVar1 + 4);
  if (piVar6 == piVar6 + *(int *)(pDVar1 + 8) * 0xc) {
    return this;
  }
  this_00 = (Str_L_char_G_ *)(puVar7 + 4);
  do {
    this_00[-2].Length = *piVar6;
    util__Maybe_struct_util__ClassMember___operator(this_00 + -1,(Str_L_char_G_ *)(piVar6 + 1));
    util__Maybe_struct_util__ClassMember___operator(this_00,(Str_L_char_G_ *)(piVar6 + 4));
    this_00[1].Data = (char *)piVar6[7];
    this_00[1].Capacity = piVar6[8];
    util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)&this_00[1].Length,(Str_L_char_G_ *)(piVar6 + 9));
    piVar6 = piVar6 + 0xc;
    this_00 = this_00 + 4;
  } while (piVar6 != (int *)(*(int *)(pDVar1 + 8) * 0x30 + *(int *)(pDVar1 + 4)));
  return this;
}





//==== 00626aa0 CoilgunModule ====

/* public: __thiscall CoilgunModule__CoilgunModule(void) */

CoilgunModule * __thiscall CoilgunModule__CoilgunModule(CoilgunModule *this)

{
  int *piVar1;
  double *pdVar2;
  Sarray_L_double_C500_G_ *this_00;
  double local_c;
  
  Module__Module((Module *)this);
  *(undefined1 *)&this->_pad_0x78_30 = 0;
  this->_pad_0x70_28 = 0;
  this->_pad_0x74_29 = 0;
  this->_pad_0x80_32 = 0;
  this->_pad_0x84_33 = 0;
  this->_pad_0x88_34 = 0;
  this->_pad_0x8c_35 = 0;
  this->_pad_0x80_32 = (int)&vftable_166;
  this->_pad_0x84_33 = 0;
  this->_pad_0x88_34 = 0;
  this->_pad_0x8c_35 = 0;
  this->_pad_0x90_36 = 0;
  this->_pad_0x94_37 = 0;
  *(undefined1 *)&(this->CoilgunModuleMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 = 0;
  (this->CoilgunModuleMemoizationHandlerInstance).ResetFunctions.Size = 0;
  (this->CoilgunModuleMemoizationHandlerInstance).ResetFunctions.Capacity = 0;
  *(undefined1 *)&(this->GetTotalFiringCharacteristics_MemoizedValue).Data.Velocity_km__s = 0;
  this->_pad_0x0_0 = (int)&vftable_for_EditorReflectable__29;
  this->_pad_0x34_13 = (int)&vftable_for_util__RTTIBaseClass__28;
  *(undefined4 *)&(this->GetTotalFiringCharacteristics_MemoizedValue).IsValidData = 0;
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetTotalFiringCharacteristics_MemoizedValue)) + 0x14)) = 0;
  *(undefined4 *)&(this->GetExitVelocity_km__s_MemoizedValue).Data = 0;
  *(undefined4 *)((int)&(this->GetExitVelocity_km__s_MemoizedValue).Data + 4) = 0;
  (undefined **)((this->GetTotalFiringCharacteristics_MemoizedValue).IsValidData =
       &vftable_109);
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetTotalFiringCharacteristics_MemoizedValue)) + 0x14)) = 0;
  *(undefined4 *)&(this->GetExitVelocity_km__s_MemoizedValue).Data = 0;
  *(undefined4 *)((int)&(this->GetExitVelocity_km__s_MemoizedValue).Data + 4) = 0;
  *(undefined4 *)&(this->GetExitVelocity_km__s_MemoizedValue).IsValidData = 0;
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetExitVelocity_km__s_MemoizedValue)) + 0xc)) = 0;
  *(undefined4 *)&this->PowerConsumption_W = 0;
  *(undefined4 *)((int)&this->PowerConsumption_W + 4) = 0;
  *(undefined1 *)&(this->Capacitor).Data._pad_0x0_0 = 0;
  (this->Capacitor).Data._pad_0x8_2 = 0;
  (this->Capacitor).Data._pad_0xc_3 = 0;
  *(undefined1 *)&(this->Capacitor).Data.DielectricComposition = 0;
  (this->Capacitor).Data.Dimensions_m.Radius = 0.0;
  CapacitorSubModule__CapacitorSubModule
            ((CapacitorSubModule *)&(this->Capacitor).Data.Dimensions_m.Height);
  piVar1 = &(this->Coil).NumberOfTurns;
  *(undefined1 *)&(this->Coil).WireRadius_m = 0;
  memset(piVar1,0,0x40);
  (this->Coil).NumberOfLayers = 0;
  *(undefined4 *)&(this->Coil).CachedCoilInnerRadius_m = 0;
  *(undefined4 *)((int)&(this->Coil).CachedCoilInnerRadius_m + 4) = 0;
  *piVar1 = (int)&vftable_285;
  pdVar2 = &(this->Barrel).CachedBoreRadius_m;
  (this->Barrel).CachedComposition = (Material *)0x0;
  memset(pdVar2,0,0x90);
  *(undefined4 *)((int)&(this->Barrel).CachedBoreRadius_m + 4) = 0;
  *(undefined4 *)&(this->Barrel).CachedSize_m.Radius = 0;
  *(undefined4 *)((int)&(this->Barrel).CachedSize_m.Radius + 4) = 0;
  *(undefined ***)pdVar2 = &vftable_283;
  *(undefined4 *)&(this->Barrel).CachedPeakTemperatureJump_K.IsValidData = 0;
  *(undefined4 *)&(*(undefined4 *)((char *)&((this->Barrel).CachedPeakTemperatureJump_K) + 0xc)) = 0;
  *(undefined4 *)&(this->Barrel).CachedPeakPressureLengthAlong_m = 0;
  *(undefined4 *)((int)&(this->Barrel).CachedPeakPressureLengthAlong_m + 4) = 0;
  *(undefined4 *)&(this->Barrel).CachedPeakTemperatureJump_K.Data = 0;
  *(undefined4 *)((int)&(this->Barrel).CachedPeakTemperatureJump_K.Data + 4) = 0;
  *(undefined1 *)&(this->Armature)._pad_0x8_2 = 0;
  (this->Armature)._pad_0x0_0 = 0;
  (this->Armature)._pad_0x4_1 = 0;
  (this->Armature).Composition = (Material *)0x0;
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->Armature)) + 0x14)) = 0;
  *(undefined4 *)&(this->Armature).BoreRadius_m = 0;
  *(undefined4 *)((int)&(this->Armature).BoreRadius_m + 4) = 0;
  (this->Armature).Tracer = (Material *)0x0;
  (this->Armature).ShipClass__Payload = (CraftBlueprint *)0x0;
  MassProjectileSubModule__MassProjectileSubModule
            ((MassProjectileSubModule *)&(this->Armature).CachedMassStartsOutBeforeBarrel);
  *(undefined4 *)&(this->Turret).Data.field0_0x0 = 0;
  *(undefined4 *)&(this->Turret).Data.field0_0x0 = 0;
  *(undefined4 *)&(this->Turret).Data.field1_0x1 = 0;
  *(undefined ** *)&(this->Turret).Data.field8_0x8 = &vftable_211;
  *(undefined8 *)&(this->Turret).Data.field1_0x1 = 0;
  TurretSubModule__TurretSubModule((TurretSubModule *)&(this->Turret).Data.field3_0x3);
  *(undefined ** *)&(this->Turret).Data.field3_0x3 = &vftable_237;
  *(undefined1 *)&(this->TurretModel).Pointer = 0;
  AmmoBaySubModule__AmmoBaySubModule((AmmoBaySubModule *)&this->BarrelModel);
  *(undefined1 *)((this->ChartAcceleration_m__s).Data + 0x11) = 0;
  *(undefined4 *)((this->ChartAcceleration_m__s).Data + 0x12) = 0;
  *(undefined4 *)((int)(this->ChartAcceleration_m__s).Data + 0x94) = 0;
  *(undefined4 *)((this->ChartAcceleration_m__s).Data + 0x13) = 0;
  *(undefined4 *)((int)(this->ChartAcceleration_m__s).Data + 0x9c) = 0;
  *(undefined4 *)((this->ChartAcceleration_m__s).Data + 0x14) = 0;
  *(undefined4 *)((int)(this->ChartAcceleration_m__s).Data + 0xa4) = 0;
  this_00 = (Sarray_L_double_C500_G_ *)((this->ChartAcceleration_m__s).Data + 0x15);
  this_00->_pad_0x0_0 = (int)&vftable_286;
  local_c = 0.0;
  util__Sarray_double_500___SetAll(this_00,&local_c);
  return this;
}

//==== 00626cf0 CoilgunModule_00626cf0 ====

/* public: virtual __thiscall CoilgunModule___CoilgunModule(void) */

void __thiscall CoilgunModule___CoilgunModule(CoilgunModule *this)

{
  ReferenceController *pRVar1;
  void *pvVar2;
  Material *this_00;
  
  *(undefined ***)((this->ChartAcceleration_m__s).Data + 0x15) =
       &vftable_286;
  pRVar1 = *(ReferenceController **)((int)(this->ChartAcceleration_m__s).Data + 0xa4);
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  pRVar1 = *(ReferenceController **)((int)(this->ChartAcceleration_m__s).Data + 0x9c);
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  pRVar1 = *(ReferenceController **)((int)(this->ChartAcceleration_m__s).Data + 0x94);
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  AmmoInfo___AmmoInfo((AmmoInfo *)((this->ChartAcceleration_m__s).Data + 2));
  (this->BarrelModel).Pointer = (GameModel *)&vftable_5;
  pRVar1 = (this->BarrelModel).Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    port_op_delete(pRVar1);
    (this->BarrelModel).Controller = (ReferenceController *)0x0;
  }
  TurretSubModule___TurretSubModule((TurretSubModule *)&(this->Turret).Data.field3_0x3);
  *(undefined ** *)&(this->Turret).Data.field8_0x8 = &vftable_5;
  pvVar2 = *(void * *)&(this->Turret).Data.field0_0x0;
  if (pvVar2 != (void *)0x0) {
    port_op_delete(pvVar2);
    *(undefined4 *)&(this->Turret).Data.field0_0x0 = 0;
  }
  *(undefined ** *)&(this->Armature).CachedMassStartsOutBeforeBarrel = &vftable_5;
  pvVar2 = *(void **)((char *)&(this->Armature) + 0x34);
  if (pvVar2 != (void *)0x0) {
    port_op_delete(pvVar2);
    *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->Armature)) + 0x34)) = 0;
  }
  *(undefined ** *)&(this->Barrel).CachedBoreRadius_m = &vftable_5;
  pvVar2 = *(void **)((int)&(this->Barrel).CachedBoreRadius_m + 4);
  if (pvVar2 != (void *)0x0) {
    port_op_delete(pvVar2);
    *(undefined4 *)((int)&(this->Barrel).CachedBoreRadius_m + 4) = 0;
  }
  (this->Coil).NumberOfTurns = (int)&vftable_5;
  pvVar2 = (void *)(this->Coil).NumberOfLayers;
  if (pvVar2 != (void *)0x0) {
    port_op_delete(pvVar2);
    (this->Coil).NumberOfLayers = 0;
  }
  this_00 = (this->Coil).Composition;
  if (this_00 != (Material *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)this_00);
  }
  *(undefined ** *)&(this->Capacitor).Data.Dimensions_m.Height = &vftable_5;
  pvVar2 = *(void **)((int)&(this->Capacitor).Data.Dimensions_m.Height + 4);
  if (pvVar2 != (void *)0x0) {
    port_op_delete(pvVar2);
    *(undefined4 *)((int)&(this->Capacitor).Data.Dimensions_m.Height + 4) = 0;
  }
  pvVar2 = *(void * *)&(this->GetTotalFiringCharacteristics_MemoizedValue).field_0x14;
  (undefined **)((this->GetTotalFiringCharacteristics_MemoizedValue).IsValidData =
       &vftable_109);
  if (pvVar2 != (void *)0x0) {
    port_op_delete(pvVar2);
  }
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetTotalFiringCharacteristics_MemoizedValue)) + 0x14)) = 0;
  (this->GetTotalFiringCharacteristics_MemoizedValue).IsValidData = cde_ptr_as_double((void *)&vftable);
  this->_pad_0x80_32 = (int)&vftable_166;
  if ((void *)this->_pad_0x84_33 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x84_33);
  }
  this->_pad_0x84_33 = 0;
  this->_pad_0x80_32 = (int)&vftable;
  this->_pad_0x0_0 = (int)&vftable_for_EditorReflectable__3;
  this->_pad_0x34_13 = (int)&vftable_for_util__RTTIBaseClass__3;
  Darray_L_util__SharedPtr_L_GameModel_G___G___dtor((Darray_L_util__SharedPtr_L_GameModel_G___G_ *)&this->_pad_0x58_22);
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

//==== 006272a0 operator___006272a0 ====


/* public: class util__Darray_L_structutil__tuple5_L_void___cdecl_P__void__Cclassutil__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclassutil__Str_L_char_G__G__G_ &  util__Darray_L_struct_util__tuple5_L_void___cdecl_P__void__Cclassutil__Str_L_char_G__Cclassutil__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G__G__G___op_iadd(class util__Darray_L_structutil__tuple5_L_void____cdecl_P__void__Cclassutil__Str_L_char_G__Cclassutil__Str_L_char_G__Cbool_P_Cclassutil__Str_L_char_G__G__G_
   const &) */

Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G___G_
* 
util__Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__bool__class_util__Str_char_______operator(Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G___G_
             *this,Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G___G_
                   *param_1)

{
  Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G___G_
  *pDVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G___G_
  *pDVar6;
  
  pDVar1 = param_1;
  if (*(int *)(this + 8) == 0) {
    param_1 = (Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G___G_
               *)(**(code **)(*(int *)param_1 + 0xc))();
    SetSize(this,(int *)&param_1);
    iVar2 = (**(code **)(*(int *)pDVar1 + 0xc))();
    if (iVar2 == 0) {
      (**(code **)(*(int *)this + 0x10))();
      return this;
    }
    CheckSizeDestructive(this);
    pDVar6 = *(Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G___G_
               **)(this + 4);
    puVar4 = *(undefined4 **)(pDVar1 + 4);
    param_1 = pDVar6;
    if (puVar4 != puVar4 + *(int *)(pDVar1 + 8) * 0xb) {
      do {
        *(undefined4 *)pDVar6 = *puVar4;
        util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(pDVar6 + 4),(Str_L_char_G_ *)(puVar4 + 1));
        util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(pDVar6 + 0x10),(Str_L_char_G_ *)(puVar4 + 4));
        *(undefined4 *)(pDVar6 + 0x1c) = puVar4[7];
        util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(pDVar6 + 0x20),(Str_L_char_G_ *)(puVar4 + 8));
        pDVar6 = pDVar6 + 0x2c;
        puVar4 = puVar4 + 0xb;
      } while (puVar4 != (undefined4 *)(*(int *)(pDVar1 + 8) * 0x2c + *(int *)(pDVar1 + 4)));
      return this;
    }
  }
  else {
    iVar2 = (**(code **)(*(int *)param_1 + 0xc))();
    if (iVar2 != 0) {
      iVar2 = *(int *)(this + 8);
      iVar3 = (**(code **)(*(int *)pDVar1 + 0xc))();
      param_1 = (Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G___G_
                 *)(iVar3 + *(int *)(this + 8));
      SetSize(this,(int *)&param_1);
      CheckSize(this,iVar2);
      puVar4 = *(undefined4 **)(pDVar1 + 4);
      puVar5 = (undefined4 *)(iVar2 * 0x2c + *(int *)(this + 4));
      if (puVar5 != (undefined4 *)(*(int *)(this + 8) * 0x2c + *(int *)(this + 4))) {
        do {
          *puVar5 = *puVar4;
          util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar5 + 1),(Str_L_char_G_ *)(puVar4 + 1));
          util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar5 + 4),(Str_L_char_G_ *)(puVar4 + 4));
          puVar5[7] = puVar4[7];
          util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar5 + 8),(Str_L_char_G_ *)(puVar4 + 8));
          puVar4 = puVar4 + 0xb;
          puVar5 = puVar5 + 0xb;
        } while (puVar5 != (undefined4 *)(*(int *)(this + 8) * 0x2c + *(int *)(this + 4)));
      }
    }
  }
  return this;
}





//==== 006273f0 operator___006273f0 ====


/* public: class util__Darray_L_structutil__tuple5_L_void___cdecl_P__void__Cclassutil__Str_L_char_G__Cclass_util__Str_L_char_G__Cclassutil__Delegate_L_void_G__Cclassutil__Str_L_char_G__G__G_ & 
   util__Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__class_util__Delegate_void__class_util__Str_char_______operator(class
   util__Darray_L_structutil__tuple5_L_void___cdecl_P__void__Cclassutil__Str_L_char_G__Cclass_util__Str_L_char_G__Cclassutil__Delegate_L_void_G__Cclassutil__Str_L_char_G__G__G_ const &) */

Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G___G_
* 
util__Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__class_util__Delegate_void__class_util__Str_char_______operator__o3(Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G___G_
             *this,Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G___G_
                   *param_1)

{
  Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G___G_
  *pDVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iStack_8;
  
  pDVar1 = param_1;
  if (*(int *)(this + 8) == 0) {
    iStack_8 = (**(code **)(*(int *)param_1 + 0xc))();
    SetSize(this,&iStack_8);
    iVar2 = (**(code **)(*(int *)pDVar1 + 0xc))();
    if (iVar2 == 0) {
      (**(code **)(*(int *)this + 0x10))();
      return this;
    }
    CheckSizeDestructive(this);
    pDVar1 = param_1;
    puVar4 = *(undefined4 **)(this + 4);
    puVar5 = *(undefined4 **)(param_1 + 4);
    if (puVar5 != puVar5 + *(int *)(param_1 + 8) * 0xc) {
      do {
        *puVar4 = *puVar5;
        util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar4 + 1),(Str_L_char_G_ *)(puVar5 + 1));
        util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar4 + 4),(Str_L_char_G_ *)(puVar5 + 4));
        puVar4[7] = puVar5[7];
        puVar4[8] = puVar5[8];
        util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar4 + 9),(Str_L_char_G_ *)(puVar5 + 9));
        puVar4 = puVar4 + 0xc;
        puVar5 = puVar5 + 0xc;
      } while (puVar5 != (undefined4 *)(*(int *)(pDVar1 + 8) * 0x30 + *(int *)(pDVar1 + 4)));
      return this;
    }
  }
  else {
    iVar2 = (**(code **)(*(int *)param_1 + 0xc))();
    if (iVar2 != 0) {
      iVar2 = *(int *)(this + 8);
      iVar3 = (**(code **)(*(int *)pDVar1 + 0xc))();
      param_1 = (Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G___G_
                 *)(iVar3 + *(int *)(this + 8));
      SetSize(this,(int *)&param_1);
      CheckSize(this,iVar2);
      puVar4 = *(undefined4 **)(pDVar1 + 4);
      puVar5 = (undefined4 *)(iVar2 * 0x30 + *(int *)(this + 4));
      if (puVar5 != (undefined4 *)(*(int *)(this + 8) * 0x30 + *(int *)(this + 4))) {
        do {
          *puVar5 = *puVar4;
          util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar5 + 1),(Str_L_char_G_ *)(puVar4 + 1));
          util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar5 + 4),(Str_L_char_G_ *)(puVar4 + 4));
          puVar5[7] = puVar4[7];
          puVar5[8] = puVar4[8];
          util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar5 + 9),(Str_L_char_G_ *)(puVar4 + 9));
          puVar4 = puVar4 + 0xc;
          puVar5 = puVar5 + 0xc;
        } while (puVar5 != (undefined4 *)(*(int *)(this + 8) * 0x30 + *(int *)(this + 4)));
      }
    }
  }
  return this;
}





//==== 00627560 scalar_deleting_destructor_00627560 ====


/* public: virtual void * __thiscall BarrelArmorSubModule:: 0 scalardeletingdestructor(unsigned
   int) */

void * __thiscall
BarrelArmorSubModule___scalar_deleting_destructor(BarrelArmorSubModule *this,uint param_1)

{
  *(undefined ***)this = &vftable_5;
  if (*(void **)(this + 4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 4));
    *(undefined4 *)(this + 4) = 0;
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x90);
  }
  return this;
}





//==== 006275a0 scalar_deleting_destructor_006275a0 ====


/* public: virtual void * __thiscall CoilgunModule:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall CoilgunModule___scalar_deleting_destructor(CoilgunModule *this,uint param_1)

{
  CoilgunModule___CoilgunModule(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x1420);
  }
  return this;
}





//==== 00627e90 CheckSize_00627e90 ====


/* private: bool  util__Darray_L_structBody__RadialImpulse_G___CheckSize(int) */

bool 
util__Darray_struct_Body__RadialImpulse___CheckSize
          (Darray_L_struct_Body__RadialImpulse_G_ *this,int param_1)

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
    puVar6 = puStack_c + 6;
    do {
      puVar6[-6] = 0;
      puVar6[-5] = 0;
      puVar6[-4] = 0;
      puVar6[-3] = 0;
      puVar6[-2] = 0;
      puVar6[-1] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
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





//==== 00627fe0 CheckSizeDestructive_00627fe0 ====


/* private: bool  util__Darray_L_structutil__tuple5_L_void___cdecl_P__void__Cclass_util__Str_L_char_G__Cclassutil__Str_L_char_G__Cbool_P_Cclassutil__Str_L_char_G__G___G___CheckSizeDestructive(void) */

bool 
util__Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__bool__class_util__Str_char_______CheckSizeDestructive
          (Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G___G_
           *this)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  bool bVar5;
  uint uVar6;
  bool bVar7;
  Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G___G_
  *pDStack_8;
  
  uVar3 = *(uint *)(this + 8);
  bVar7 = -1 < (int)uVar3;
  pDStack_8 = this;
  if (!bVar7) {
    pDStack_8 = (Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G___G_
                 *)0x0;
    SetSize(this,(int *)&pDStack_8);
    uVar3 = *(uint *)(this + 8);
  }
  bVar5 = (int)uVar3 < 0x40000000;
  if (!bVar5) {
    pDStack_8 = (Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G___G_
                 *)0x3fffffff;
    SetSize(this,(int *)&pDStack_8);
    uVar3 = *(uint *)(this + 8);
  }
  bVar5 = bVar5 && bVar7;
  uVar6 = *(uint *)(this + 0xc);
  if ((int)uVar6 < (int)uVar3) {
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
    if (*(tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G_
          **)(this + 4) !=
        (tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G_
         *)0x0) {
      tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G____vector_deleting_destructor_
                (*(tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G_
                   **)(this + 4),3);
      uVar6 = *(uint *)(this + 0xc);
    }
    *(undefined4 *)(this + 4) = 0;
    uVar3 = -(uint)((int)((ulonglong)uVar6 * 0x2c >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 0x2c);
    puVar1 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
    if (puVar1 == (uint *)0x0) {
      puVar4 = (uint *)0x0;
    }
    else {
      *puVar1 = uVar6;
      puVar4 = puVar1 + 1;
      if (uVar6 != 0) {
        puVar2 = puVar1 + 4;
        puVar1 = puVar4;
        do {
          *puVar1 = 0;
          puVar1 = puVar1 + 0xb;
          puVar2[-2] = 0;
          puVar2[-1] = 0;
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
          puVar2[3] = 0;
          puVar2[4] = 0;
          puVar2[5] = 0;
          puVar2[6] = 0;
          puVar2[7] = 0;
          uVar6 = uVar6 - 1;
          puVar2 = puVar2 + 0xb;
        } while (uVar6 != 0);
        *(uint **)(this + 4) = puVar4;
        return bVar5;
      }
    }
    *(uint **)(this + 4) = puVar4;
  }
  return bVar5;
}





//==== 00628150 CheckSizeDestructive_00628150 ====


/* private: bool  util__Darray_L_structutil__tuple5_L_void___cdecl_P__void__Cclass_util__Str_L_char_G__Cclassutil__Str_L_char_G__Cclassutil__Delegate_L_void_G__Cclassutil__Str_L_char_G__G___G___CheckSizeDestructive(void) */

bool 
util__Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__class_util__Delegate_void__class_util__Str_char_______CheckSizeDestructive
          (Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G___G_
           *this)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  bool bVar5;
  uint uVar6;
  bool bVar7;
  Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G___G_
  *pDStack_8;
  
  uVar3 = *(uint *)(this + 8);
  bVar7 = -1 < (int)uVar3;
  pDStack_8 = this;
  if (!bVar7) {
    pDStack_8 = (Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G___G_
                 *)0x0;
    SetSize(this,(int *)&pDStack_8);
    uVar3 = *(uint *)(this + 8);
  }
  bVar5 = (int)uVar3 < 0x40000000;
  if (!bVar5) {
    pDStack_8 = (Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G___G_
                 *)0x3fffffff;
    SetSize(this,(int *)&pDStack_8);
    uVar3 = *(uint *)(this + 8);
  }
  bVar5 = bVar5 && bVar7;
  uVar6 = *(uint *)(this + 0xc);
  if ((int)uVar6 < (int)uVar3) {
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
    if (*(tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G_
          **)(this + 4) !=
        (tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G_
         *)0x0) {
      tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G____vector_deleting_destructor_
                (*(tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G_
                   **)(this + 4),3);
      uVar6 = *(uint *)(this + 0xc);
    }
    *(undefined4 *)(this + 4) = 0;
    uVar3 = -(uint)((int)((ulonglong)uVar6 * 0x30 >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 0x30);
    puVar1 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
    if (puVar1 == (uint *)0x0) {
      puVar4 = (uint *)0x0;
    }
    else {
      *puVar1 = uVar6;
      puVar4 = puVar1 + 1;
      if (uVar6 != 0) {
        puVar2 = puVar1 + 4;
        puVar1 = puVar4;
        do {
          *puVar1 = 0;
          puVar1 = puVar1 + 0xc;
          puVar2[-2] = 0;
          puVar2[-1] = 0;
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
          puVar2[3] = 0;
          puVar2[4] = 0;
          puVar2[5] = 0;
          puVar2[6] = 0;
          puVar2[7] = 0;
          puVar2[8] = 0;
          uVar6 = uVar6 - 1;
          puVar2 = puVar2 + 0xc;
        } while (uVar6 != 0);
        *(uint **)(this + 4) = puVar4;
        return bVar5;
      }
    }
    *(uint **)(this + 4) = puVar4;
  }
  return bVar5;
}





//==== 006282c0 Clear_006282c0 ====

/* public: virtual void __thiscall util__Sarray_double_500___Clear(void) */

void __thiscall util__Sarray_double_500___Clear(Sarray_L_double_C500_G_ *this)

{
  undefined8 local_c;
  
  local_c = 0;
  (**(code **)(this->_pad_0x0_0 + 0x10))(&local_c);
  return;
}

//==== 006288e0 GenerateDesignUI_006288e0 ====

/* WARNING: Removing unreachable block (ram,0x00629213) */
/* WARNING: Removing unreachable block (ram,0x00629220) */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual struct UIWidget * __thiscall CoilgunModule__GenerateDesignUI(class Manager
   *)const  */

UIWidget * __thiscall CoilgunModule__GenerateDesignUI(CoilgunModule *this,Manager *param_1)

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
      fVar50 = 9.049091e-39;
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
      in_stack_fffff82c = (void *)0x62896b;
      UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff834,&local_2d8);
      in_stack_fffff830 = (_func___cdecl_bool_void_ptr *)0x628972;
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
      pUVar23->_pad_0x0_0 = (int)&vftable_288;
      pUVar23[1]._pad_0x0_0 = (int)this;
      UIAttributes___UIAttributes(&local_2d8);
    }
    local_60 = (LineGraph *)(uintptr_t)(port_op_new(0x278));
    if (local_60 == (LineGraph *)0x0) {
      local_8 = (UIWidget *)0x0;
    }
    else {
      util__Str_char___Str_char(&local_f8,"m/s^2");
      util__Str_char___Str_char(&local_e0,"CoilgunAccelerationChart YAxis");
      util__Str_char___Str_char(&local_ec,"m");
      util__Str_char___Str_char(&local_d4,"CoilgunAccelerationChart XAxis");
      util__Str_char___Str_char(&local_c8,"CoilgunAccelerationChart Title");
      *(uint32_t *)&local_20 = (uint32_t)(uintptr_t)((undefined4 *)&stack0xfffff86c);
      pcStack_44 = util__DelegateFactory_L_CoilgunModule_Cutil__Range_L_double_G___G___MethodCallerConst_L__public__struct_util__Range_L_double_G____thiscall_CoilgunModule__GetAccelChartYLimits_void_const__C0__G_
      ;
      local_a0.Length =
           (int)util__DelegateFactory_L_CoilgunModule_Cutil__Range_L_double_G___G___MethodCallerConst_L__public__struct_util__Range_L_double_G____thiscall_CoilgunModule__GetAccelChartXLimits_void_const__C0__G_
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
      in_stack_fffff860 = (void *)0x628a97;
      pLVar24 = (LocStr *)util__LocStr__LocStr((LocStr *)local_110,&local_c8,&local_6c);
      pSVar26 = util__LocStr__operator__o3(pLVar24);
      local_1c = 0;
      local_18 = (void *)0x0;
      util__Str_char___Str_char(&SStack_14,pSVar26);
      puVar27 = (undefined4 *)LineGraph__Args__Args__o3(local_3e8);
      *puVar27 = local_1c;
      puVar27[1] = (undefined4)(uintptr_t)(local_18);
      util__Str_char___operator__o8((Str_L_char_G_ *)(puVar27 + 2),&SStack_14);
      if ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_14.Data !=
          (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      local_1c = 0;
      local_18 = (void *)0x0;
      util__Str_char___Str_char(&SStack_14,pSVar25);
      puVar27[5] = local_1c;
      puVar27[6] = (undefined4)(uintptr_t)(local_18);
      util__Str_char___operator__o8((Str_L_char_G_ *)(puVar27 + 7),&SStack_14);
      if ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_14.Data !=
          (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      local_1c = 0;
      local_18 = (void *)0x0;
      util__Str_char___Str_char(&SStack_14,&local_ec);
      puVar27[10] = local_1c;
      puVar27[0xb] = (undefined4)(uintptr_t)(local_18);
      util__Str_char___operator__o8((Str_L_char_G_ *)(puVar27 + 0xc),&SStack_14);
      if ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_14.Data !=
          (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      local_1c = 0;
      local_18 = (void *)0x0;
      util__Str_char___Str_char(&SStack_14,(Str_L_char_G_ *)local_8);
      puVar27[0xf] = local_1c;
      puVar27[0x10] = (undefined4)(uintptr_t)(local_18);
      util__Str_char___operator__o8((Str_L_char_G_ *)(puVar27 + 0x11),&SStack_14);
      if ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_14.Data !=
          (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      local_1c = 0;
      local_18 = (void *)0x0;
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
      puVar27[0x28] = (undefined4)(uintptr_t)(util__DelegateFactory_L_CoilgunModule_Cdouble_Cdouble_G___MethodCallerConst_L__public__double___thiscall_CoilgunModule__GetChartAcceleration_m__s2_double_const__C0__G_);
      *(ulonglong *)(puVar27 + 0x1e) = CONCAT44(fStack_88,fStack_8c);
      pSVar25 = (Str_L_char_G_ *)(local_20 + 2);
      *(undefined1 *)(puVar27 + 0x26) = 1;
      puVar27[0x20] = local_50.Length;
      puVar27[0x21] = (undefined4)(uintptr_t)(pcStack_44);
      puVar27[0x22] = (undefined4)uStack_40;
      puVar27[0x23] = (undefined4)(uintptr_t)((*(uint32_t*)((char*)&(uStack_40)+4)));
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
      in_stack_fffff864 = (_func___cdecl_bool_void_ptr *)0x628dd3;
      util__Darray_L_Body__RadialImpulse_G___Darray_L_Body__RadialImpulse_G_
                ((Darray_L_Body__RadialImpulse_G_ *)(puVar22 + 0x3c),in_stack_fffff868);
      puVar22[0x40] = puVar27[0x40];
      puVar22[0x41] = puVar27[0x41];
      puVar22[0x42] = puVar27[0x42];
      puVar22[0x43] = puVar27[0x43];
      iVar28 = (int)(uintptr_t)util__Color__Color(&local_160,Preset__Green,1.0);
      local_ac = (void *)0x0;
      local_a8 = (_func___cdecl_Color_void_ptr *)0x0;
      *(uint32_t *)&local_a4 = (uint32_t)(uintptr_t)(&vftable_5);
      util__Str_char___Str_char(&local_a0,(Str_L_char_G_ *)(iVar28 + 4));
      fStack_94 = *(float *)(iVar28 + 0x10);
      fStack_90 = *(float *)(iVar28 + 0x14);
      fStack_8c = *(float *)(iVar28 + 0x18);
      fStack_88 = *(float *)(iVar28 + 0x1c);
      *(uint32_t *)&local_a4 = (uint32_t)(uintptr_t)(&vftable_59);
      local_18 = (void *)0x0;
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
      (pUVar29->FillProportion).Getter.Callee = (void *)0x0;
      (pUVar29->FillProportion).Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0
      ;
      *(undefined4 *)&(pUVar29->FillProportion).Value.X = 0;
      *(undefined4 *)((int)&(pUVar29->FillProportion).Value.X + 4) = 0x3ff00000;
      local_58 = local_a8;
      (pUVar29->FillProportion).Value.Y = 0.0;
      *(uint32_t *)&local_54 = (uint32_t)(uintptr_t)(&vftable_5);
      util__Str_char___Str_char(&local_50,&local_a0);
      pcStack_44 = *(code *)&(local_24);
      (pUVar29->ForegroundColor).Data.Getter.Callee = local_5c;
      (pUVar29->ForegroundColor).Data.Getter.CallbackFunction = local_58;
      uStack_40 = CONCAT44(local_20,local_28);
      *(uint32_t *)&local_54 = (uint32_t)(uintptr_t)(&vftable_59);
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
    iStack_808 = 0x6290b3;
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

//==== 00629440 GetAccelChartXLimits ====


/* public: struct util__Range_L_double_G_ __thiscall CoilgunModule__GetAccelChartXLimits(void)const  */

Range_L_double_G_ * __thiscall
CoilgunModule__GetAccelChartXLimits(CoilgunModule *this,Range_L_double_G_ *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = (this->Coil).CachedEnergyConservingPeakSquaredFieldTerm;
  dVar1 = (dVar1 + dVar1) * (double)this->NumberOfStages *
          (double)(int)(this->Barrel).CachedComposition;
  __return_storage_ptr__->Lower = 0.0;
  __return_storage_ptr__->Upper = dVar1;
  if (dVar1 < 0.0) {
    __return_storage_ptr__->Lower = dVar1;
    __return_storage_ptr__->Upper = 0.0;
  }
  return __return_storage_ptr__;
}





//==== 006294a0 GetAccelChartYLimits ====


/* public: struct util__Range_L_double_G_ __thiscall CoilgunModule__GetAccelChartYLimits(void)const  */

Range_L_double_G_ * __thiscall
CoilgunModule__GetAccelChartYLimits(CoilgunModule *this,Range_L_double_G_ *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  double *pdVar3;
  double dStack_c;
  
  dStack_c = 0.0;
  iVar2 = 0;
  iVar1 = (**(code **)(*(int *)((this->ChartAcceleration_m__s).Data + 0x15) + 8))();
  if (0 < iVar1) {
    pdVar3 = (this->ChartAcceleration_m__s).Data + 0x16;
    do {
      if ((iVar2 < 0) || (499 < iVar2)) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\sarray.inl",0x35,
                        "Index >= 0 && Index < Size",(char *)0x0);
        DebugBreak();
      }
      if (dStack_c <= *pdVar3) {
        dStack_c = *pdVar3;
      }
      iVar2 = iVar2 + 1;
      pdVar3 = pdVar3 + 1;
      iVar1 = (**(code **)(*(int *)((this->ChartAcceleration_m__s).Data + 0x15) + 8))();
    } while (iVar2 < iVar1);
  }
  __return_storage_ptr__->Lower = 0.0;
  __return_storage_ptr__->Upper = dStack_c;
  if (dStack_c < 0.0) {
    __return_storage_ptr__->Lower = dStack_c;
    __return_storage_ptr__->Upper = 0.0;
  }
  return __return_storage_ptr__;
}





//==== 00629550 GetAccuracy_radians_00629550 ====

/* public: virtual double __thiscall ConventionalGunModule__GetAccuracy_radians(void)const  */

double __thiscall ConventionalGunModule__GetAccuracy_radians(ConventionalGunModule *this)

{
  double dVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar6 = (this->BarrelProperties).CachedPeakTemperatureJump_K.Data;
  dVar5 = (this->Propellant).GrainRadius_m;
  dVar3 = dVar6 * 3.141592653589793 * dVar6;
  dVar1 = *(double *)&this->Propellant;
  if (dVar5 <= 0.0) {
    dVar5 = (this->BarrelProperties).CachedPeakPressure_Pa +
            *(double *)&(this->BarrelProperties).CachedPeakTemperatureJump_K.IsValidData;
  }
  else {
    dVar4 = *(double *)&(this->Propellant)._pad_0x8_2 /
            (this->BarrelProperties).CachedMantletSize_m.Radius;
    dVar4 = dVar4 * dVar4;
    if (((dVar4 <= 0.0) && (1.0 <= dVar4)) || ((dVar4 <= 1.0 && (0.0 <= dVar4)))) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (!bVar2) {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\modules\\weaponmodules\\weaponsubmodules.cpp"
                      ,0x52,"IsSaturated(t)",(char *)0x0);
      DebugBreak();
      dVar5 = (this->Propellant).GrainRadius_m;
      dVar6 = (this->BarrelProperties).CachedPeakTemperatureJump_K.Data;
    }
    dVar5 = (1.0 - dVar4) * dVar5 +
            dVar4 * *(double *)&(this->BarrelProperties).CachedPeakTemperatureJump_K.IsValidData +
            (this->BarrelProperties).CachedPeakPressure_Pa;
  }
  dVar5 = Mechanics__AnnulusXAreaMomentOfInertia_m4(dVar6,dVar5);
  dVar6 = (this->BarrelProperties).CachedPeakPressure_Pa;
  dVar6 = dVar6 / ((dVar6 + *(double *)
                             &(this->BarrelProperties).CachedPeakTemperatureJump_K.IsValidData) -
                  (this->BarrelProperties).CachedPeakTemperatureJump_K.Data);
  if (dVar6 <= 0.0) {
    dVar6 = 0.0;
  }
  if (1.0 <= dVar6) {
    dVar6 = 1.0;
  }
  dVar4 = Material__GetYoungsModulus_Pa
                    (*(Material **)
                      ((int)&(this->BarrelProperties).CachedPeakPressureLengthAlong_m + 4));
  dVar7 = Material__GetYoungsModulus_Pa((Material *)&(this->BarrelProperties).CachedHeatEnergy_J);
  dVar6 = Mechanics__GetDeflectionAngleOfAConcentratedLoadedCantileverBeam_radians
                    ((1.0 - dVar6) * dVar4 + dVar6 * dVar7,dVar5,
                     (this->BarrelProperties).CachedMantletSize_m.Radius,dVar3 * dVar1,
                     *(double *)&(this->Propellant)._pad_0x8_2);
  return dVar6;
}

//==== 00629ca0 GetAmmoInfo_00629ca0 ====


/* public: virtual class util__Maybe_L_structAmmoInfo_G_ __thiscall
   CoilgunModule__GetAmmoInfo(void)const  */

Str_L_char_G_ * __thiscall CoilgunModule__GetAmmoInfo(CoilgunModule *this)

{
  LocStr *this_00;
  Str_L_char_G_ *in_stack_00000004;
  void *apvStack_34 [3];
  void *pvStack_28;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
  util__Str_char___Str_char(&SStack_1c,"Weapon Coilgun");
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_34,&SStack_1c,&SStack_10);
  util__LocStr__operator__o3(this_00);
  MassProjectileSubModule__GetAmmoInfo
            ((MassProjectileSubModule *)&(this->Armature).CachedMassStartsOutBeforeBarrel,
             in_stack_00000004);
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
  return in_stack_00000004;
}





//==== 00629d60 GetArmorCarvingRadius_m_00629d60 ====


/* public: virtual class util__Maybe_L_double_G_ __thiscall
   CoilgunModule__GetArmorCarvingRadius_m(void)const  */

Maybe_L_double_G_ * __thiscall
CoilgunModule__GetArmorCarvingRadius_m(CoilgunModule *this,Maybe_L_double_G_ *__return_storage_ptr__)

{
  double dVar1;
  
  if ((char)((this->TurretModel).Pointer == '\0')){
    dVar1 = BarrelArmorSubModule__GetArmorRadius_m
                      ((BarrelArmorSubModule *)&(this->Barrel).CachedBoreRadius_m);
  }
  else {
    if ((char)((this->TurretModel).Pointer == '\0')){
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar1 = TurretSubModule__GetOuterRadius_m((TurretSubModule *)&(this->Turret).Data.field3_0x3);
  }
  __return_storage_ptr__->Data = dVar1;
  __return_storage_ptr__->IsValidData = true;
  return __return_storage_ptr__;
}





//==== 00629dd0 GetBarrelAndArmorRadius_m ====


/* public: double __thiscall CoilgunModule__GetBarrelAndArmorRadius_m(void)const  */

double __thiscall CoilgunModule__GetBarrelAndArmorRadius_m(CoilgunModule *this)

{
  double dVar1;
  
  dVar1 = (this->Coil).CachedEnergyConservingPeakSquaredFieldTerm;
  return (dVar1 + dVar1) * (double)(int)((*(int *)(void *)((char *)(this) + 0x174))) + this->BarrelArmorThickness_m +
         (this->Barrel).CachedMass_kg;
}





//==== 00629e10 GetBarrelCount ====


/* public: int __thiscall CoilgunModule__GetBarrelCount(void)const  */

int __thiscall CoilgunModule__GetBarrelCount(CoilgunModule *this)

{
  if ((char)((this->TurretModel).Pointer != '\0')){
    return (int)((this->Turret).Data.field0_0x0);
  }
  return 1;
}





//==== 00629e30 GetBarrelMass_kg ====


/* public: double __thiscall CoilgunModule__GetBarrelMass_kg(void)const  */

double __thiscall CoilgunModule__GetBarrelMass_kg(CoilgunModule *this)

{
  double dVar1;
  
  dVar1 = SolenoidSubModule__GetVolume_m3((SolenoidSubModule *)&(this->Coil).NumberOfTurns);
  return dVar1 * ((this->Coil).CachedArmatureComposition)->Density_kg__m3 *
         (double)(int)(this->Barrel).CachedComposition;
}





//==== 00629e70 GetCenterExtrusionOffset_m_00629e70 ====


/* public: virtual double __thiscall CoilgunModule__GetCenterExtrusionOffset_m(void)const  */

double __thiscall CoilgunModule__GetCenterExtrusionOffset_m(CoilgunModule *this)

{
  double dVar1;
  
  if ((char)((this->TurretModel).Pointer != '\0')){
    if ((char)((this->TurretModel).Pointer == '\0')){
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar1 = TurretSubModule__GetExtruderLength_m((TurretSubModule *)&(this->Turret).Data.field3_0x3)
    ;
    return dVar1;
  }
  return 0.0;
}





//==== 00629ed0 GetChargingPower_W ====


/* public: virtual double __thiscall CoilgunModule__GetChargingPower_W(void)const  */

double __thiscall CoilgunModule__GetChargingPower_W(CoilgunModule *this)

{
  if ((char)((this->Coil).WireRadius_m != '\0')){
    return (this->Capacitor).Data.Dimensions_m.Radius;
  }
  return 0.0;
}





//==== 00629f10 GetChargingTime_s ====


/* public: virtual double __thiscall CoilgunModule__GetChargingTime_s(void)const  */

double __thiscall CoilgunModule__GetChargingTime_s(CoilgunModule *this)

{
  double dVar1;
  
  if ((char)((this->Coil).WireRadius_m != '\0')){
    if ((char)((this->Coil).WireRadius_m == '\0')){
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar1 = CapacitorSubModule__GetChargeTime_s
                      ((CapacitorSubModule *)&(this->Capacitor).Data.Dimensions_m.Height);
    return dVar1;
  }
  return 0.0;
}





//==== 00629f70 GetChartAcceleration_m__s2 ====


/* public: double __thiscall CoilgunModule__GetChartAcceleration_m__s2(double)const  */

double __thiscall CoilgunModule__GetChartAcceleration_m__s2(CoilgunModule *this,double param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  
  dVar4 = (this->Coil).CachedEnergyConservingPeakSquaredFieldTerm;
  dVar4 = param_1 / (((dVar4 + dVar4) * (double)this->NumberOfStages *
                     (double)(int)(this->Barrel).CachedComposition) / 500.0);
  iVar1 = (int)dVar4;
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  iVar2 = 499;
  if (iVar1 < 499) {
    iVar2 = iVar1;
  }
  iVar1 = iVar2 + 1;
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  iVar3 = 499;
  if (iVar1 < 499) {
    iVar3 = iVar1;
  }
  dVar4 = dVar4 - (double)iVar2;
  if ((iVar3 < 0) || (499 < iVar3)) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\sarray.inl",0x35,
                    "Index >= 0 && Index < Size",(char *)0x0);
    DebugBreak();
  }
  if ((iVar2 < 0) || (499 < iVar2)) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\sarray.inl",0x35,
                    "Index >= 0 && Index < Size",(char *)0x0);
    DebugBreak();
  }
  return (1.0 - dVar4) * (this->ChartAcceleration_m__s).Data[iVar2 + 0x16] +
         dVar4 * (this->ChartAcceleration_m__s).Data[iVar3 + 0x16];
}





//==== 0062a070 GetClassID_0062a070 ====


/* public: virtual unsigned long __thiscall CoilgunModule__GetClassID(void)const  */

ulong __thiscall CoilgunModule__GetClassID(CoilgunModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_28da7bc4__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_28da7bc4__thread_safe_static_guard_0__);
    if ( cde_l2_28da7bc4__thread_safe_static_guard_0__ == -1) {
       cde_l2r_68bd837b_ID =
           util__GetHash("CoilgunModule");
      _Init_thread_footer(& cde_l2_28da7bc4__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2r_68bd837b_ID;
}





//==== 0062a0d0 GetComposition_0062a0d0 ====


/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   CoilgunModule__GetComposition(void)const  */

Darray_L_struct_MaterialConstituent_G_ * __thiscall CoilgunModule__GetComposition(CoilgunModule *this,Darray_L_struct_MaterialConstituent_G_ * __return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Darray_L_struct_MaterialConstituent_G_ *pDVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;

  undefined **ppuStack_1c;
  void *pvStack_18;
  int *piStack_c;
  int iStack_8;
  
  *(undefined4 *)__return_storage_ptr__ = 0;
  *(undefined4 *)(__return_storage_ptr__ + 4) = 0;
  *(undefined4 *)(__return_storage_ptr__ + 8) = 0;
  *(undefined4 *)(__return_storage_ptr__ + 0xc) = 0;
  Module__GetComposition((Module *)this,(Darray_L_MaterialComposition_G_ *)__return_storage_ptr__);
  if ((char)((this->TurretModel).Pointer == '\0')){
    iVar8 = 1;
  }
  else {
    iVar8 = *(int *)&(this->Turret).Data.field0_0x0;
  }
  iVar8 = (int)(this->Barrel).CachedComposition * iVar8 + -1;
  if (0 < iVar8) {
    piStack_c = &(this->Coil).NumberOfTurns;
    do {
      pDVar5 = (Darray_L_struct_MaterialConstituent_G_ *)(**(code **)(uintptr_t)(*piStack_c + 0x68))(&ppuStack_1c);
      if (*(int *)(__return_storage_ptr__ + 8) == 0) {
        util__Darray_struct_MaterialConstituent___operator(__return_storage_ptr__,pDVar5);
      }
      else {
        iVar6 = (**(code **)(*(int *)pDVar5 + 0xc))();
        if (iVar6 != 0) {
          iVar6 = *(int *)(__return_storage_ptr__ + 8);
          iStack_8 = (**(code **)(*(int *)pDVar5 + 0xc))();
          iStack_8 = iStack_8 + *(int *)(__return_storage_ptr__ + 8);
          util__Darray_struct_MaterialConstituent___SetSize(__return_storage_ptr__,&iStack_8);
          util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                    ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)__return_storage_ptr__,
                     iVar6);
          puVar7 = *(undefined4 **)(pDVar5 + 4);
          puVar9 = (undefined4 *)(iVar6 * 0x10 + *(int *)(__return_storage_ptr__ + 4));
          if (puVar9 != (undefined4 *)
                        (*(int *)(__return_storage_ptr__ + 8) * 0x10 + *(int *)(__return_storage_ptr__ + 4)))
          {
            do {
              uVar1 = *puVar7;
              uVar2 = puVar7[1];
              uVar3 = puVar7[2];
              uVar4 = puVar7[3];
              puVar7 = puVar7 + 4;
              *puVar9 = uVar1;
              puVar9[1] = uVar2;
              puVar9[2] = uVar3;
              puVar9[3] = uVar4;
              puVar9 = puVar9 + 4;
            } while (puVar9 != (undefined4 *)
                               (*(int *)(__return_storage_ptr__ + 8) * 0x10 +
                               *(int *)(__return_storage_ptr__ + 4)));
          }
        }
      }
      ppuStack_1c = (undefined **)(&vftable_75);
      if (pvStack_18 != (void *)0x0) {
        port_op_delete(pvStack_18);
      }
      iVar8 = iVar8 + -1;
      pvStack_18 = (void *)0x0;
      ppuStack_1c = (undefined **)(&vftable);
    } while (iVar8 != 0);
  }
  return __return_storage_ptr__;
}





//==== 0062a1e0 GetComposition_0062a1e0 ====


/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   SolenoidSubModule__GetComposition(void)const  */

Darray_L_struct_MaterialConstituent_G_ * __thiscall
SolenoidSubModule__GetComposition(SolenoidSubModule *this)

{
  undefined8 stack0x00000004;
  int *piVar1;
  double dVar2;
  Material *pMVar3;
  Darray_L_struct_MaterialConstituent_G_ *this_00;
  bool bVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  Darray_L_struct_MaterialConstituent_G_ *in_stack_00000004;
  int iStack_10;
  
  this_00 = in_stack_00000004;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = (undefined **)(&vftable_75);
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 1;
  puVar5 = (undefined4 *)port_op_new(0x10);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = 0;
    *(undefined8 *)(puVar5 + 2) = 0;
  }
  iVar7 = 0;
  *(undefined4 **)(in_stack_00000004 + 4) = puVar5;
  if (0 < *(int *)(in_stack_00000004 + 0xc)) {
    iVar6 = 0;
    do {
      iVar6 = iVar6 + 0x10;
      iVar7 = iVar7 + 1;
      puVar5 = (undefined4 *)(*(int *)(in_stack_00000004 + 4) + -0x10 + iVar6);
      *puVar5 = 0;
      puVar5[1] = iStack_10;
      puVar5[2] = 0;
      puVar5[3] = 0;
    } while (iVar7 < *(int *)(in_stack_00000004 + 0xc));
  }
  pMVar3 = this->Composition;
  dVar8 = GetVolume_m3(this);
  dVar2 = pMVar3->Density_kg__m3;
  iVar7 = *(int *)(in_stack_00000004 + 8);
  in_stack_00000004 = (Darray_L_struct_MaterialConstituent_G_ *)(iVar7 + 1);
  util__Darray_struct_MaterialConstituent___SetSize(this_00,(int *)&stack0x00000004);
  bVar4 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                    ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar7);
  if (bVar4) {
    piVar1 = (int *)(*(int *)(this_00 + 4) + -0x10 + *(int *)(this_00 + 8) * 0x10);
    *piVar1 = (int)pMVar3;
    piVar1[1] = iStack_10;
    *(double *)(piVar1 + 2) = dVar8 * dVar2;
  }
  return this_00;
}





//==== 0062a2b0 GetCooldownTime_s_0062a2b0 ====


/* public: virtual double __thiscall ConventionalGunModule__GetCooldownTime_s(void)const  */

double __thiscall ConventionalGunModule__GetCooldownTime_s(ConventionalGunModule *this)

{
  double *this_00;
  double dVar1;
  
  this_00 = &(this->BarrelProperties).CachedSize_m.Height;
  dVar1 = BarrelArmorSubModule__GetBarrelRadiantCooling_W((BarrelArmorSubModule *)this_00);
  if (0.0 < dVar1) {
    dVar1 = BarrelArmorSubModule__GetBarrelRadiantCooling_W((BarrelArmorSubModule *)this_00);
    return (this->BarrelProperties).CachedMantletMass_kg / dVar1;
  }
  return 0.0;
}





//==== 0062a2c0 GetCubicBoundingBox_m_0062a2c0 ====


/* public: virtual struct util__AABB_L_structutil__Vec3_L_double_G__G_ __thiscall
   CoilgunModule__GetCubicBoundingBox_m(void)const  */

undefined4 __thiscall CoilgunModule__GetCubicBoundingBox_m(CoilgunModule *this)

{
  Cylinder_L_double_G_ *pCVar1;
  int iVar2;
  bool bVar3;
  double dVar4;
  undefined4 in_stack_00000004;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  bool bStack_74;
  Cylinder_L_double_G_ CStack_6c;
  Cylinder_L_double_G_ CStack_5c;
  Cylinder_L_double_G_ CStack_4c;
  double dStack_3c;
  bool bStack_34;
  double dStack_2c;
  double dStack_24;
  double dStack_1c;
  double dStack_14;
  undefined4 *puStack_c;
  Cylinder_L_double_G_ *pCStack_8;
  
  if ((char)((this->TurretModel).Pointer == '\0')){
    dStack_14 = 0.0;
  }
  else {
    dStack_1c = TurretSubModule__GetExtruderLength_m
                          ((TurretSubModule *)&(this->Turret).Data.field3_0x3);
    dStack_14 = dStack_1c;
  }
  if ((char)((this->TurretModel).Pointer == '\0')){
    dStack_1c = 0.0;
  }
  else {
    dStack_1c = TurretSubModule__GetObjectOffsetFromTurret_m
                          ((TurretSubModule *)&(this->Turret).Data.field3_0x3);
  }
  if ((char)((this->Coil).WireRadius_m == '\0')){
    pCStack_8 = &CStack_4c;
    CStack_4c.Radius = 0;
    (*(uint32_t *)((char *)&(CStack_4c.Radius) + 4)) = 0;
    CStack_4c.Height = 0;
    (*(uint32_t *)((char *)&(CStack_4c.Height) + 4)) = 0;
  }
  else {
    pCStack_8 = CapacitorSubModule__GetTotalDimensions_m
                          ((CapacitorSubModule *)&(this->Capacitor).Data.Dimensions_m.Height,
                           &CStack_5c);
  }
  bVar3 = *(char *)((this->ChartAcceleration_m__s).Data + 0x11) == '\0';
  if (bVar3) {
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
  }
  else {
    pCVar1 = AmmoBaySubModule__GetArmoredDimensions_m
                       ((AmmoBaySubModule *)&this->BarrelModel,&CStack_6c);
    uStack_84 = *(undefined4 *)&pCVar1->Radius;
    uStack_80 = *(undefined4 *)((int)&pCVar1->Radius + 4);
    uStack_7c = *(undefined4 *)&pCVar1->Height;
    uStack_78 = *(undefined4 *)((int)&pCVar1->Height + 4);
  }
  bStack_74 = !bVar3;
  bVar3 = *(char *)&(this->TurretModel).Pointer == '\0';
  puStack_c = &uStack_84;
  if (bVar3) {
    dStack_3c = 0.0;
  }
  else {
    dStack_3c = TurretSubModule__GetOuterRadius_m
                          ((TurretSubModule *)&(this->Turret).Data.field3_0x3);
  }
  bStack_34 = !bVar3;
  dVar4 = (this->Coil).CachedEnergyConservingPeakSquaredFieldTerm;
  dVar4 = dVar4 + dVar4;
  dStack_2c = (double)this->NumberOfStages * dVar4 * (double)(int)(this->Barrel).CachedComposition;
  dStack_24 = (double)(int)((*(int *)(void *)((char *)(this) + 0x174))) * dVar4 + this->BarrelArmorThickness_m +
              (this->Barrel).CachedMass_kg;
  if ((char)((this->TurretModel).Pointer == '\0')){
    iVar2 = 1;
  }
  else {
    iVar2 = *(int *)&(this->Turret).Data.field0_0x0;
  }
  dVar4 = util__GetCirclePackingInACircleRadius_double(iVar2);
  dStack_24 = dVar4 * dStack_24;
  TurretedGun__GetInitialBounds((undefined1 (*)[16])(in_stack_00000004),dStack_3c,bStack_34);
  return in_stack_00000004;
}





//==== 0062a740 GetEnergyConservingPeakSquaredFieldTerm ====

/* public: double __thiscall CoilgunModule__GetEnergyConservingPeakSquaredFieldTerm(void)const  */

double __thiscall CoilgunModule__GetEnergyConservingPeakSquaredFieldTerm(CoilgunModule *this)

{
  double dVar1;
  int iVar2;
  Material *pMVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double local_24;
  double local_1c;
  double local_14;
  double local_c;
  
  dVar5 = (this->Coil).CachedEnergyConservingPeakSquaredFieldTerm;
  dVar5 = dVar5 + dVar5;
  if ((char)((this->Coil).WireRadius_m != '\0')){
    local_c = this->BarrelArmorThickness_m;
    dVar4 = (double)(int)((*(int *)(void *)((char *)(this) + 0x174))) * dVar5 + local_c;
    local_1c = 1.0 / dVar5;
    local_14 = ((dVar4 * dVar4 - local_c * local_c) *
                ((((this->Coil).CachedArmatureComposition)->RelativePermittivity *
                 12.566370614359172) / 3.141592653589793) * (double)this->NumberOfStages * dVar5) /
               (dVar5 * dVar5 * dVar5 * dVar5);
    local_24 = Material__GetMagneticSusceptibility((Material *)(this->Barrel)._pad_0x0_0);
    dVar5 = (this->Coil).CachedEnergyConservingPeakSquaredFieldTerm;
    local_c = local_c * 3.141592653589793 * local_c * 1.2566370614359173e-06;
    iVar2 = this->NumberOfStages;
    local_24 = local_24 * local_c;
    pMVar3 = (this->Barrel).CachedComposition;
    dVar4 = CapacitorSubModule__GetCapacitance_F
                      ((CapacitorSubModule *)&(this->Capacitor).Data.Dimensions_m.Height);
    return (dVar4 * 2.0 * local_14 * local_14) /
           (local_1c * local_1c * local_24 * (dVar5 + dVar5) * (double)iVar2 * (double)(int)pMVar3);
  }
  iVar2 = this->NumberOfStages;
  pMVar3 = (this->Barrel).CachedComposition;
  dVar6 = MassProjectileSubModule__GetExitMass_kg
                    ((MassProjectileSubModule *)&(this->Armature).CachedMassStartsOutBeforeBarrel);
  dVar4 = (this->Coil).CachedEnergyConservingPeakSquaredFieldTerm;
  dVar4 = dVar4 + dVar4;
  dVar1 = this->BarrelArmorThickness_m;
  local_24 = (dVar6 + dVar6) /
             ((this->Capacitor).Data.Dimensions_m.Radius *
             (double)iVar2 * dVar5 * (double)(int)pMVar3);
  local_14 = 1.0 / dVar4;
  dVar5 = (double)(int)((*(int *)(void *)((char *)(this) + 0x174))) * dVar4 + dVar1;
  local_1c = ((dVar5 * dVar5 - dVar1 * dVar1) *
              ((((this->Coil).CachedArmatureComposition)->RelativePermittivity * 12.566370614359172)
              / 3.141592653589793) * (double)this->NumberOfStages * dVar4) /
             (dVar4 * dVar4 * dVar4 * dVar4);
  local_c = Material__GetMagneticSusceptibility((Material *)(this->Barrel)._pad_0x0_0);
  local_c = local_c * dVar1 * 3.141592653589793 * dVar1 * 1.2566370614359173e-06;
  dVar5 = util__Cbrt(&local_24);
  return (dVar5 * 4.0 * local_1c) / (local_14 * local_14 * local_c);
}

//==== 0062adf0 GetEngagementRange_km_0062adf0 ====


/* public: virtual class util__Maybe_L_double_G_ 
   RailgunModule__GetEngagementRange_km(double)const  */

Maybe_L_double_G_ * 
RailgunModule__GetEngagementRange_km
          (RailgunModule *this,Maybe_L_double_G_ *__return_storage_ptr__,double param_1)

{
  double dVar1;
  undefined4 in_stack_00000008;
  
  dVar1 = WeaponModule__GetActualRange_km
                    ((WeaponModule *)this,(double)CONCAT44((*(uint32_t*)&(param_1)),in_stack_00000008));
  __return_storage_ptr__->Data = dVar1;
  __return_storage_ptr__->IsValidData = true;
  return __return_storage_ptr__;
}





//==== 0062ae20 GetExitVelocity_km__s_Clear ====

/* public: void __thiscall CoilgunModule__GetExitVelocity_km__s_Clear(void)const  */

void __thiscall CoilgunModule__GetExitVelocity_km__s_Clear(CoilgunModule *this)

{
  *(undefined1 *)&(this->Capacitor).Data.DielectricComposition = 0;
  (this->Capacitor).Data._pad_0x8_2 = 0;
  (this->Capacitor).Data._pad_0xc_3 = 0;
  return;
}

//==== 0062ae40 GetExitVelocity_km__s_Memoize ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: int propagation algorithm not settling */
/* public: void __thiscall CoilgunModule__GetExitVelocity_km__s_Memoize(void)const  */

void __thiscall CoilgunModule__GetExitVelocity_km__s_Memoize(CoilgunModule *this)

{
  undefined8 stack0xfffffffc;
  bool *this_00;
  double *pdVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  double *pdVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined7 uVar8;
  undefined4 uVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  uint local_40;
  int *local_34;
  double *pdStack_30;
  undefined8 uStack_2c;
  double local_24;
  double local_1c [2];
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((char)((this->Capacitor).Data.DielectricComposition == '\0')){
    iVar3 = *(int *)&(this->GetExitVelocity_km__s_MemoizedValue).Data;
    this_00 = &(this->GetTotalFiringCharacteristics_MemoizedValue).IsValidData;
    local_c = iVar3 + 1;
    util__Darray_L_util__tuple2_L_Order__Type_Cint_G___G___SetSize
              ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)this_00,&local_c);
    bVar10 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                       ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)this_00,iVar3);
    if (bVar10) {
      iVar3 = *(int *)&(this->GetTotalFiringCharacteristics_MemoizedValue).field_0x14;
      iVar4 = *(int *)&(this->GetExitVelocity_km__s_MemoizedValue).Data;
      *(code **)(iVar3 + -8 + iVar4 * 8) = (long long int (*)())(GetExitVelocity_km__s_Clear);
      *(undefined4 *)(iVar3 + -4 + iVar4 * 8) = 0;
    }
    if ((char)(this->Capacitor).Data._pad_0x0_0 == '\0') {
      iVar3 = *(int *)&(this->GetExitVelocity_km__s_MemoizedValue).Data;
      local_c = iVar3 + 1;
      util__Darray_L_util__tuple2_L_Order__Type_Cint_G___G___SetSize
                ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)this_00,&local_c);
      bVar10 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                         ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)this_00,iVar3);
      if (bVar10) {
        iVar3 = *(int *)&(this->GetTotalFiringCharacteristics_MemoizedValue).field_0x14;
        iVar4 = *(int *)&(this->GetExitVelocity_km__s_MemoizedValue).Data;
        *(code **)(iVar3 + -8 + iVar4 * 8) = (long long int (*)())(GetTotalFiringCharacteristics_Clear);
        *(undefined4 *)(iVar3 + -4 + iVar4 * 8) = 0;
      }
      dVar13 = LinearMotorSubModule__GetLauncherVelocity_km__s
                         ((LinearMotorSubModule *)&(this->Turret).Data.field8_0x8);
      pdVar1 = (this->ChartAcceleration_m__s).Data + 0x15;
      dVar11 = (this->Coil).CachedEnergyConservingPeakSquaredFieldTerm;
      dVar11 = (dVar11 + dVar11) * (double)this->NumberOfStages;
      dVar12 = (double)(int)(this->Barrel).CachedComposition * dVar11;
      if ((char)((this->Coil).WireRadius_m == '\0')){
        uStack_2c = dVar12;
        local_24 = GetMaxCurrent_A(this);
        local_40 = local_40 & 0xffffff00;
        FUN_00625cf0(&local_34,SUB84(uStack_2c,0),(int)((ulonglong)uStack_2c >> 0x20),
                     dVar13 * 1000.0,this,&local_24,local_40,pdVar1);
      }
      else {
        pdVar5 = local_1c + 1;
        local_c = 1;
        _local_34 = CONCAT44(local_1c,&local_c);
        local_1c[1] = 0.0;
        uStack_2c = (double)CONCAT44(this,pdVar5);
        local_1c[0] = dVar11;
        FUN_00626200(&local_34,dVar12,dVar13 * 1000.0,&local_c,local_1c,pdVar5,this,pdVar5,&local_c,
                     pdVar1);
      }
      uVar6 = (undefined4)(uintptr_t)((Material *)uStack_2c);
      uVar9 = (*(uint32_t*)((char*)&(uStack_2c)+4));
      uVar8 = (*(uint56_t*)((char*)&(uStack_2c)+1));
      uStack_2c = (double)CONCAT71((*(uint56_t*)((char*)&(uStack_2c)+1)),1);
      uVar2 = uStack_2c;
      *(int * *)&(this->GetExitVelocity_km__s_MemoizedValue).IsValidData = local_34;
      *(double * *)&(this->GetExitVelocity_km__s_MemoizedValue).field_0xc = pdStack_30;
      *(undefined4 *)&this->PowerConsumption_W = uVar6;
      *(undefined4 *)((int)&this->PowerConsumption_W + 4) = uVar9;
      (*(uint32_t*)((char*)&(uStack_2c)+4)) = SUB74(uVar8,3);
      (this->Capacitor).Data._pad_0x0_0 = (int)(Material *)uStack_2c;
      (this->Capacitor).Data._pad_0x4_1 = (*(uint32_t*)((char*)&(uStack_2c)+4));
      uStack_2c = (double)uVar2;
      if ((char)(this->Capacitor).Data._pad_0x0_0 == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
    }
    uVar7 = uStack_2c;
    uVar2 = *(undefined8 *)&(this->GetExitVelocity_km__s_MemoizedValue).IsValidData;
    uStack_2c = (double)CONCAT71((*(uint56_t*)((char*)&(uStack_2c)+1)),1);
    local_34 = (int *)uVar2;
    pdStack_30 = (double *)((ulonglong)uVar2 >> 0x20);
    (*(uint32_t*)((char*)&(uStack_2c)+4)) = SUB84(uVar7,4);
    (this->Capacitor).Data._pad_0x8_2 = (int)local_34;
    (this->Capacitor).Data._pad_0xc_3 = (int)pdStack_30;
    (this->Capacitor).Data.DielectricComposition = (Material *)uStack_2c;
    *(undefined4 *)&(*(undefined4 *)((char *)&((this->Capacitor).Data) + 0x14)) = (*(uint32_t*)((char*)&(uStack_2c)+4));
  }
  return;
}

//==== 0062b050 GetFactory_0062b050 ====


/* public: virtual class util__Reflectable * (__cdecl*
   BarrelArmorSubModule__ReflectionInfoStruct_struct_BarrelArmorSubModule___GetFactory(void)const
   )(void) */

_func_Reflectable_ptr * 
__thiscall BarrelArmorSubModule__ReflectionInfoStruct_struct_BarrelArmorSubModule___GetFactory__o2
          (ReflectionInfoStruct_L_struct_BarrelArmorSubModule_G_ *this)

{
  return StaticFactory;
}





//==== 0062b060 GetFieldTerm ====


/* public: double __thiscall SolenoidSubModule__GetFieldTerm(double)const  */

double __thiscall SolenoidSubModule__GetFieldTerm(SolenoidSubModule *this,double param_1)

{
  Maybe_L_double_G_ *pMVar1;
  double dVar2;
  Maybe_L_double_G_ MStack_40;
  Maybe_L_double_G_ MStack_30;
  double dStack_20;
  double dStack_18;
  double dStack_10;
  Maybe_L_double_G_ *pMStack_8;
  
  dVar2 = this->WireRadius_m + this->WireRadius_m;
  dStack_10 = (double)this->NumberOfTurns * dVar2 - param_1;
  dStack_20 = ((double)this->NumberOfLayers * dVar2 + this->CachedCoilInnerRadius_m +
              this->CachedCoilInnerRadius_m) * 0.5;
  dStack_20 = dStack_20 * dStack_20;
  dStack_18 = dStack_10 * dStack_10 + dStack_20;
  dStack_20 = param_1 * param_1 + dStack_20;
  pMStack_8 = util__Sqrt(&MStack_30,&dStack_18);
  if (pMStack_8->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pMVar1 = util__Sqrt(&MStack_40,&dStack_20);
  if (pMVar1->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return (param_1 / pMVar1->Data + dStack_10 / pMStack_8->Data) * (double)this->NumberOfLayers;
}





//==== 0062b170 GetFiringVelocity_km__s_0062b170 ====

/* public: virtual double __thiscall CoilgunModule__GetFiringVelocity_km__s(void)const  */

double __thiscall CoilgunModule__GetFiringVelocity_km__s(CoilgunModule *this)

{
  GetExitVelocity_km__s_Memoize(this);
  if ((char)((this->Capacitor).Data.DielectricComposition == '\0')){
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return (double)((this->Capacitor).Data._pad_0x8_2);
}

//==== 0062b1b0 GetForceAt_N ====


/* public: double __thiscall CoilgunModule__GetForceAt_N(double,double)const  */

double __thiscall CoilgunModule__GetForceAt_N(CoilgunModule *this,double param_1,double param_2)

{
  Material *pMVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar5 = (this->Coil).CachedEnergyConservingPeakSquaredFieldTerm;
  dVar3 = util__DecimalMod_double(param_1,(dVar5 + dVar5) * (double)this->NumberOfStages);
  dVar5 = (this->Coil).CachedEnergyConservingPeakSquaredFieldTerm;
  dVar2 = (dVar5 + dVar5) * (double)this->NumberOfStages;
  pMVar1 = (this->Barrel).CachedComposition;
  dVar5 = dVar3;
  dVar6 = param_2;
  dVar4 = MassProjectileSubModule__GetMassLength_m
                    ((MassProjectileSubModule *)&(this->Armature).CachedMassStartsOutBeforeBarrel);
  dVar5 = SolenoidSubModule__GetForce_N
                    ((SolenoidSubModule *)&(this->Coil).NumberOfTurns,dVar3 - dVar4,dVar5,dVar6);
  if ((double)(int)pMVar1 * dVar2 < dVar2 + param_1) {
    dVar6 = 0.0;
  }
  else {
    dVar6 = dVar3 - dVar2;
    dVar4 = MassProjectileSubModule__GetMassLength_m
                      ((MassProjectileSubModule *)&(this->Armature).CachedMassStartsOutBeforeBarrel)
    ;
    dVar6 = SolenoidSubModule__GetForce_N
                      ((SolenoidSubModule *)&(this->Coil).NumberOfTurns,(dVar3 - dVar2) - dVar4,
                       dVar6,param_2);
  }
  if (dVar5 <= dVar6) {
    dVar5 = dVar6;
  }
  return dVar5;
}





//==== 0062b2e0 GetForce_N ====


/* public: double __thiscall SolenoidSubModule__GetForce_N(double,double,double)const  */

double __thiscall
SolenoidSubModule__GetForce_N(SolenoidSubModule *this,double param_1,double param_2,double param_3)

{
  Material *this_00;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  this_00 = this->CachedArmatureComposition;
  Material__GetSaturationMagnetization_A__m_Memoize(this_00);
  if ((char)(this_00->GetEmissivePowers_W_MemoizedValue).Data.Capacity == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar2 = *(double *)&(this_00->GetEmissivePowers_W_MemoizedValue).Data.Data;
  if (param_2 <= param_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\modules\\weaponmodules\\coilgunmodules.cpp"
                    ,0xba,"EndPosition_m > StartPosition_m",(char *)0x0);
    DebugBreak();
  }
  dVar5 = this->WireRadius_m;
  dVar3 = GetFieldTerm(this,param_2);
  dVar3 = dVar3 * (1.0 / (dVar5 + dVar5)) * param_3 * 0.5;
  dVar5 = this->WireRadius_m;
  dVar4 = GetFieldTerm(this,param_1);
  dVar4 = dVar4 * (1.0 / (dVar5 + dVar5)) * param_3 * 0.5;
  dVar5 = GetFieldTerm(this,(this->WireRadius_m + this->WireRadius_m) * (double)this->NumberOfTurns
                            * 0.5);
  dVar1 = this->CachedEnergyConservingPeakSquaredFieldTerm / (dVar5 * dVar5);
  dVar5 = this->CachedCoilInnerRadius_m;
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  if (1.0 <= dVar1) {
    dVar1 = 1.0;
  }
  dVar2 = dVar2 * dVar2;
  dVar3 = -(((dVar3 * dVar3 - dVar4 * dVar4) * dVar1) / dVar2);
  libm_sse2_exp_precise(0.0);
  dVar4 = Material__GetMagneticSusceptibility(this->CachedArmatureComposition);
  return dVar4 * dVar5 * 3.141592653589793 * dVar5 * 1.2566370614359173e-06 * (1.0 - dVar3) * dVar2;
}





//==== 0062b900 GetHeatFromFire_J_0062b900 ====


/* public: virtual double __thiscall CoilgunModule__GetHeatFromFire_J(double)const  */

double __thiscall CoilgunModule__GetHeatFromFire_J(CoilgunModule *this,double param_1)

{
  double dVar1;
  
  dVar1 = GetEnergyLostToHeating_J(this);
}





//==== 0062b910 GetIcon_0062b910 ====


/* public: virtual void (__cdecl*__thiscall CoilgunModule__GetIcon(void)const )(void) */

_func_void * __thiscall CoilgunModule__GetIcon(CoilgunModule *this)

{
  return Icons__Coilgun;
}





//==== 0062b920 GetInternalAmmo_0062b920 ====


/* public: virtual int __thiscall CoilgunModule__GetInternalAmmo(void)const  */

int __thiscall CoilgunModule__GetInternalAmmo(CoilgunModule *this)

{
  if (*(char *)((this->ChartAcceleration_m__s).Data + 0x11) != '\0') {
    return *(int *)(this->ChartAcceleration_m__s).Data;
  }
  return 0;
}





//==== 0062bb90 GetMaxCurrent_A ====


/* public: double __thiscall CoilgunModule__GetMaxCurrent_A(void)const  */

double __thiscall CoilgunModule__GetMaxCurrent_A(CoilgunModule *this)

{
  double dVar1;
  Maybe_L_double_G_ *pMVar2;
  double dVar3;
  double dVar4;
  Maybe_L_double_G_ MStack_1c;
  double dStack_c;
  
  if ((char)((this->Coil).WireRadius_m != '\0')){
    if ((char)((this->Coil).WireRadius_m == '\0')){
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar4 = CapacitorSubModule__GetInitialCurrent
                      ((CapacitorSubModule *)&(this->Capacitor).Data.Dimensions_m.Height);
    return dVar4;
  }
  dVar4 = (this->Coil).CachedEnergyConservingPeakSquaredFieldTerm;
  dVar1 = this->BarrelArmorThickness_m;
  dVar4 = dVar4 + dVar4;
  dVar3 = (double)(int)((*(int *)(void *)((char *)(this) + 0x174))) * dVar4 + dVar1;
  dStack_c = (this->Capacitor).Data.Dimensions_m.Radius /
             (((dVar3 * dVar3 - dVar1 * dVar1) *
               ((((this->Coil).CachedArmatureComposition)->RelativePermittivity * 12.566370614359172
                ) / 3.141592653589793) * (double)this->NumberOfStages * dVar4) /
             (dVar4 * dVar4 * dVar4 * dVar4));
  pMVar2 = util__Sqrt(&MStack_1c,&dStack_c);
  if (pMVar2->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return pMVar2->Data;
}





//==== 0062bcb0 GetMaxDeviationAngle_radians_0062bcb0 ====


/* public: virtual double __thiscall CoilgunModule__GetMaxDeviationAngle_radians(void)const  */

double __thiscall CoilgunModule__GetMaxDeviationAngle_radians(CoilgunModule *this)

{
  double dVar1;
  
  if ((char)((this->TurretModel).Pointer != '\0')){
    if ((char)((this->TurretModel).Pointer == '\0')){
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar1 = TurretSubModule__GetMaxDeviationAngle_radians
                      ((TurretSubModule *)&(this->Turret).Data.field3_0x3);
    return dVar1;
  }
  return 0.0;
}





//==== 0062bd10 GetMember_0062bd10 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   BarrelArmorSubModule__ReflectionInfoStruct_struct_BarrelArmorSubModule___GetMember(class
   util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
BarrelArmorSubModule__ReflectionInfoStruct_struct_BarrelArmorSubModule___GetMember__o2
          (ReflectionInfoStruct_L_struct_BarrelArmorSubModule_G_ *this,Str_L_char_G_ *param_1)

{
  StaticGetMember(param_1);
  return param_1;
}





//==== 0062bd30 GetMembers_0062bd30 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   BarrelArmorSubModule__ReflectionInfoStruct_struct_BarrelArmorSubModule___GetMembers(void)const
    */

undefined4 
BarrelArmorSubModule__ReflectionInfoStruct_struct_BarrelArmorSubModule___GetMembers__o2
          (ReflectionInfoStruct_L_struct_BarrelArmorSubModule_G_ *this)

{
  undefined4 in_stack_00000004;
  
  StaticGetMembers();
}





//==== 0062bd50 GetMinimumOverheatTime_s ====

/* public: virtual double __thiscall CoilgunModule__GetMinimumOverheatTime_s(void)const  */

double __thiscall CoilgunModule__GetMinimumOverheatTime_s(CoilgunModule *this)

{
  Material *pMVar1;
  int iVar2;
  float10 fVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = SolenoidSubModule__GetVolume_m3((SolenoidSubModule *)&(this->Coil).NumberOfTurns);
  pMVar1 = (this->Coil).CachedArmatureComposition;
  if ((char)((this->TurretModel).Pointer == '\0')){
    iVar2 = 1;
  }
  else {
    iVar2 = *(int *)&(this->Turret).Data.field0_0x0;
  }
  dVar4 = Material__GetEnergyBudgetRemaining_J(pMVar1,2.7,dVar4 * pMVar1->Density_kg__m3);
  dVar5 = GetEnergyLostToHeating_J(this);
  pMVar1 = (this->Barrel).CachedComposition;
  fVar3 = (float10)(**(code **)(this->_pad_0x0_0 + 0x1b8))();
  return (double)(fVar3 * (float10)(dVar4 / (dVar5 / (double)((int)pMVar1 * iVar2))));
}

//==== 0062bdf0 GetMutuallyExclusiveProperties_0062bdf0 ====


/* public: virtual class util__Darray_L_classutil__Str_L_char_G__G_ __thiscall
   RailgunModule__GetMutuallyExclusiveProperties(void)const  */

Darray_L_class_util__Str_L_char_G___G_ * __thiscall
RailgunModule__GetMutuallyExclusiveProperties(RailgunModule *this)

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
  util__Str_char___Str_char(&SStack_10,"ExternalMount");
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
  util__Str_char___Str_char(&SStack_10,"InternalMount");
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
  util__Str_char___Str_char(&SStack_10,"Turret");
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





//==== 0062bfd0 GetPayload_0062bfd0 ====


/* public: virtual class CraftBlueprint * __thiscall CoilgunModule__GetPayload(void)const  */

CraftBlueprint * __thiscall CoilgunModule__GetPayload(CoilgunModule *this)

{
  return *(CraftBlueprint **)((int)&(this->Armature).CachedPeakPressure_Pa + 4);
}





//==== 0062bfe0 GetPeakForce_N ====

/* public: double __thiscall CoilgunModule__GetPeakForce_N(void)const  */

double __thiscall CoilgunModule__GetPeakForce_N(CoilgunModule *this)

{
  int *this_00;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar2 = (this->Coil).CachedEnergyConservingPeakSquaredFieldTerm;
  this_00 = &(this->Coil).NumberOfTurns;
  dVar2 = (dVar2 + dVar2) * (double)this->NumberOfStages * 0.5;
  dVar3 = MassProjectileSubModule__GetMassLength_m
                    ((MassProjectileSubModule *)&(this->Armature).CachedMassStartsOutBeforeBarrel);
  dVar4 = GetMaxCurrent_A(this);
  if (dVar2 <= dVar2 - dVar3) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\modules\\weaponmodules\\coilgunmodules.cpp"
                    ,0xaf,"EndPosition_m > StartPosition_m",(char *)0x0);
    DebugBreak();
  }
  dVar1 = (this->Coil).CachedEnergyConservingPeakSquaredFieldTerm;
  dVar5 = SolenoidSubModule__GetFieldTerm((SolenoidSubModule *)this_00,dVar2);
  dVar5 = dVar5 * (1.0 / (dVar1 + dVar1)) * dVar4 * 0.5;
  dVar1 = (this->Coil).CachedEnergyConservingPeakSquaredFieldTerm;
  dVar6 = SolenoidSubModule__GetFieldTerm((SolenoidSubModule *)this_00,dVar2 - dVar3);
  dVar6 = dVar6 * (1.0 / (dVar1 + dVar1)) * dVar4 * 0.5;
  dVar2 = this->BarrelArmorThickness_m;
  dVar4 = Material__GetMagneticSusceptibility((Material *)(this->Barrel)._pad_0x0_0);
  dVar3 = (this->Coil).CachedEnergyConservingPeakSquaredFieldTerm;
  dVar3 = SolenoidSubModule__GetFieldTerm
                    ((SolenoidSubModule *)this_00,
                     (dVar3 + dVar3) * (double)this->NumberOfStages * 0.5);
  dVar3 = *(double *)&(this->Barrel)._pad_0x8_2 / (dVar3 * dVar3);
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  if (1.0 <= dVar3) {
    dVar3 = 1.0;
  }
  return dVar3 * (dVar5 * dVar5 - dVar6 * dVar6) *
                 dVar4 * dVar2 * 3.141592653589793 * dVar2 * 1.2566370614359173e-06;
}

//==== 0062c1b0 GetPointerPropertyChoices_0062c1b0 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   RailsSubModule__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

ClassMember * 
RailsSubModule__GetPointerPropertyChoices
          (RailsSubModule *this,ClassMember *param_1,SerializationManagerInterface *param_2)

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
  for (pcVar1 = "Composition"; (pcVar1[(int)(*(int *)&SVar2 + -0x91fc04)] != '\0' || (*pcVar1 != '\0'));
      pcVar1 = pcVar1 + 1) {
    if (pcVar1[(int)(*(int *)&SVar2 + -0x91fc04)] != *pcVar1) {
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





//==== 0062c230 GetPowerUsage_0062c230 ====


/* public: virtual class util__Darray_L_structPowerUsage_G_ __thiscall
   CoilgunModule__GetPowerUsage(void)const  */

Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ * __thiscall
CoilgunModule__GetPowerUsage(CoilgunModule *this,Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ * __return_storage_ptr__)

{
  undefined8 stack0x00000004;
  int iVar1;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ *this_00;
  bool bVar2;
  LocStr *this_01;
  Str_L_char_G_ *pSVar3;

  Str_L_char_G_ SStack_60;
  double dStack_50;
  void *apvStack_48 [3];
  void *pvStack_3c;
  Str_L_char_G_ SStack_30;
  Str_L_char_G_ SStack_24;
  Str_L_char_G_ SStack_18;
  double dStack_c;
  
  this_00 = __return_storage_ptr__;
  *(undefined4 *)__return_storage_ptr__ = 0;
  *(undefined4 *)(__return_storage_ptr__ + 4) = 0;
  *(undefined4 *)(__return_storage_ptr__ + 8) = 0;
  *(undefined4 *)(__return_storage_ptr__ + 0xc) = 0;
  Module__GetPowerUsage((Module *)this,(Darray_L_PowerUsage_G_ *)__return_storage_ptr__);
  if ((char)((this->Coil).WireRadius_m == '\0')){
    util__Str_char___Str_char(&SStack_30,"PowerUse Solenoid");
    SStack_18.Data = (char *)0x0;
    SStack_18.Capacity = 0;
    SStack_18.Length = 0;
    this_01 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_48,&SStack_30,&SStack_18);
    pSVar3 = util__LocStr__operator__o3(this_01);
    util__Str_char___Str_char(&SStack_24,pSVar3);
    dStack_c = (this->Capacitor).Data.Dimensions_m.Radius;
    util__Str_char___Str_char(&SStack_60,&SStack_24);
    dStack_50 = dStack_c;
    if (SStack_24.Data != (char *)0x0) {
      port_op_delete(SStack_24.Data);
    }
    iVar1 = *(int *)(__return_storage_ptr__ + 8);
    __return_storage_ptr__ = (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ *)(iVar1 + 1);
    util__Darray_struct_util__tuple2_class_util__Str_char__double_____SetSize
              (this_00,(int *)&stack0x00000004);
    bVar2 = util__Darray_struct_PowerUsage___CheckSize((Darray_L_struct_PowerUsage_G_ *)this_00,iVar1);
    if (bVar2) {
      iVar1 = *(int *)(this_00 + 4) + *(int *)(this_00 + 8) * 0x18;
      util__Str_char___operator__o8((Str_L_char_G_ *)(iVar1 + -0x18),&SStack_60);
      *(double *)(iVar1 + -8) = dStack_c;
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
  }
  return this_00;
}





//==== 0062c380 GetProjectileMinRadius_m_0062c380 ====


/* public: virtual double __thiscall CoilgunModule__GetProjectileMinRadius_m(void)const  */

double __thiscall CoilgunModule__GetProjectileMinRadius_m(CoilgunModule *this)

{
  CraftBlueprint *this_00;
  
  this_00 = *(CraftBlueprint **)((int)&(this->Armature).CachedPeakPressure_Pa + 4);
  if (this_00 != (CraftBlueprint *)0x0) {
    CraftBlueprint__GetRadius_km_Memoize(this_00);
    if (*(char *)((this_00->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 6) == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    return (this_00->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data[5] * 1000.0;
  }
  return (this->Armature).CachedPropellantMass_kg;
}





//==== 0062c390 GetReflectionDependencies_0062c390 ====


/* public: virtual class util__Darray_L_classutil__Reflectable_P_G_ __thiscall
   CoilgunModule__GetReflectionDependencies(void)const  */

Darray_L_class_util__Reflectable_P_G_ * __thiscall
CoilgunModule__GetReflectionDependencies(CoilgunModule *this)

{
  undefined8 stack0x00000004;
  int iVar1;
  Darray_L_class_util__Reflectable_P_G_ *this_00;
  bool bVar2;
  Darray_L_class_util__Reflectable_P_G_ *in_stack_00000004;
  
  this_00 = in_stack_00000004;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = (undefined **)(&vftable_6);
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  iVar1 = *(int *)((int)&(this->Armature).CachedPeakPressure_Pa + 4);
  if (iVar1 != 0) {
    in_stack_00000004 = (Darray_L_class_util__Reflectable_P_G_ *)0x1;
    util__Darray_class_util__Reflectable____SetSize(this_00,(int *)&stack0x00000004);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)this_00,0);
    if (bVar2) {
      *(int *)(*(int *)(this_00 + 4) + -4 + *(int *)(this_00 + 8) * 4) = iVar1;
    }
  }
  return this_00;
}





//==== 0062c400 GetReflectionInfo_0062c400 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   BarrelArmorSubModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall BarrelArmorSubModule__GetReflectionInfo(BarrelArmorSubModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_4236c46b__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_4236c46b__thread_safe_static_guard_0__);
    if ( cde_l2_4236c46b__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_92e68d58_ReflectionInfo) = &vftable_284;
      _Init_thread_footer(& cde_l2_4236c46b__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_92e68d58_ReflectionInfo;
}





//==== 0062c460 GetReflectionInfo_0062c460 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   CoilgunModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall CoilgunModule__GetReflectionInfo(CoilgunModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_acccc4ca__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_acccc4ca__thread_safe_static_guard_0__);
    if ( cde_l2_acccc4ca__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_fdced18e_ReflectionInfo) = &vftable_282;
      _Init_thread_footer(& cde_l2_acccc4ca__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_fdced18e_ReflectionInfo;
}





//==== 0062c470 GetReflectionInfo_0062c470 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   SolenoidSubModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall SolenoidSubModule__GetReflectionInfo(SolenoidSubModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_5ebfaabf__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_5ebfaabf__thread_safe_static_guard_0__);
    if ( cde_l2_5ebfaabf__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_94ebd20c_ReflectionInfo) = &vftable_281;
      _Init_thread_footer(& cde_l2_5ebfaabf__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_94ebd20c_ReflectionInfo;
}





//==== 0062c480 GetReloadPower_W_0062c480 ====


/* public: virtual double __thiscall CoilgunModule__GetReloadPower_W(void)const  */

double __thiscall CoilgunModule__GetReloadPower_W(CoilgunModule *this)

{
  return (double)((this->Turret).Data.field1_0x1);
}





//==== 0062c490 GetReloadTime_s_0062c490 ====


/* public: virtual double __thiscall CoilgunModule__GetReloadTime_s(void)const  */

double __thiscall CoilgunModule__GetReloadTime_s(CoilgunModule *this)

{
  double dVar1;
  
  dVar1 = *(double *)&(this->Turret).Data.field0_0x0;
  dVar1 = dVar1 * dVar1;
  dVar1 = ((dVar1 + dVar1) * *(double *)&(this->Turret).Data.field2_0x2) /
          (*(double *)&(this->Turret).Data.field1_0x1 * 0.85);
  libm_sse2_pow_precise(0.0,0.0);
  return dVar1 * 10.0;
}





//==== 0062c4a0 GetShortName_0062c4a0 ====


/* public: virtual class util__Str_L_char_G_ __thiscall CoilgunModule__GetShortName(void)const  */

Str_L_char_G_ * __thiscall
CoilgunModule__GetShortName(CoilgunModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  LocStr *this_00;
  Str_L_char_G_ *pSVar1;
  void *apvStack_34 [3];
  void *pvStack_28;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
  util__Str_char___Str_char(&SStack_1c,"Weapon Coilgun");
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_34,&SStack_1c,&SStack_10);
  pSVar1 = util__LocStr__operator__o3(this_00);
  MassProjectileSubModule__GetShortName
            ((MassProjectileSubModule *)&(this->Armature).CachedMassStartsOutBeforeBarrel,
             __return_storage_ptr__,pSVar1);
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





//==== 0062c560 GetShotCreationOffset_m_0062c560 ====


/* public: virtual double __thiscall CoilgunModule__GetShotCreationOffset_m(void)const  */

double __thiscall CoilgunModule__GetShotCreationOffset_m(CoilgunModule *this)

{
  double dVar1;
  double dVar2;
  
  if ((char)((this->TurretModel).Pointer == '\0')){
    dVar2 = 0.0;
  }
  else {
    dVar2 = TurretSubModule__GetShotCreationOffset_m
                      ((TurretSubModule *)&(this->Turret).Data.field3_0x3);
  }
  if ((this->Turret).Data.field1_0x1 != '\0') {
    return dVar2 + 0.0;
  }
  dVar1 = (this->Coil).CachedEnergyConservingPeakSquaredFieldTerm;
  return dVar2 + (dVar1 + dVar1) * (double)this->NumberOfStages *
                 (double)(int)(this->Barrel).CachedComposition;
}





//==== 0062c5e0 GetStatuses_0062c5e0 ====

/* public: virtual class DesignStatusBuffer  CoilgunModule__GetStatuses(class DataParser
   *)const  */

DesignStatusBuffer * 
CoilgunModule__GetStatuses
          (CoilgunModule *this,DesignStatusBuffer *__return_storage_ptr__,DataParser *param_1)

{
  Material *this_00;
  Maybe_L_double_G_ *pMVar1;
  int *this_01;
  double dVar2;
  Maybe_L_double_G_ local_5c;
  Str_L_char_G_ local_4c;
  Str_L_char_G_ local_40;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  double local_1c;
  double local_14;
  double local_c;
  
  __return_storage_ptr__->DataManager = (DataParser *)0x0;
  (__return_storage_ptr__->Messages)._pad_0x0_0 = 0;
  (__return_storage_ptr__->Messages).Data = (DesignStatusMessage *)0x0;
  (__return_storage_ptr__->Messages).Size = 0;
  *(undefined8 *)&(__return_storage_ptr__->Messages).Capacity = 0;
  WeaponModule__GetStatuses((WeaponModule *)this,__return_storage_ptr__,param_1);
  util__Str_char___Str_char(&local_4c,"CoilgunSaturation");
  local_40.Data = (char *)0x0;
  local_40.Capacity = 0;
  local_40.Length = 0;
  local_34.Data = (char *)0x0;
  local_34.Capacity = 0;
  local_34.Length = 0;
  local_28.Data = (char *)0x0;
  local_28.Capacity = 0;
  local_28.Length = 0;
  local_14 = GetMaxCurrent_A(this);
  this_01 = &(this->Coil).NumberOfTurns;
  dVar2 = (this->Coil).CachedEnergyConservingPeakSquaredFieldTerm;
  dVar2 = SolenoidSubModule__GetFieldTerm
                    ((SolenoidSubModule *)this_01,
                     (dVar2 + dVar2) * (double)this->NumberOfStages * 0.5);
  local_1c = *(double *)&(this->Barrel)._pad_0x8_2 / (dVar2 * dVar2);
  if (local_1c <= 0.0) {
    local_1c = 0.0;
  }
  if (1.0 <= local_1c) {
    local_1c = 1.0;
  }
  local_c = (this->Coil).CachedEnergyConservingPeakSquaredFieldTerm;
  local_c = local_c + local_c;
  dVar2 = SolenoidSubModule__GetFieldTerm
                    ((SolenoidSubModule *)this_01,(double)this->NumberOfStages * local_c * 0.5);
  local_14 = dVar2 * (1.0 / local_c) * local_14 * 0.5;
  pMVar1 = util__Sqrt(&local_5c,&local_1c);
  if (pMVar1->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_14 = pMVar1->Data * local_14;
  this_00 = (Material *)(this->Barrel)._pad_0x0_0;
  Material__GetSaturationMagnetization_A__m_Memoize(this_00);
  if ((char)(this_00->GetEmissivePowers_W_MemoizedValue).Data.Capacity == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  DesignStatusBuffer__CheckWarning
            (__return_storage_ptr__,
             *(double *)&(this_00->GetEmissivePowers_W_MemoizedValue).Data.Data <= local_14,
             &local_4c,&local_28,&local_34,&local_40,(ModulePlacer *)0x0);
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
  return __return_storage_ptr__;
}

//==== 0062c810 GetTotalFiringCharacteristics_Clear ====

/* public: void __thiscall CoilgunModule__GetTotalFiringCharacteristics_Clear(void)const  */

void __thiscall CoilgunModule__GetTotalFiringCharacteristics_Clear(CoilgunModule *this)

{
  *(undefined1 *)&(this->Capacitor).Data._pad_0x0_0 = 0;
  *(undefined4 *)&(this->GetExitVelocity_km__s_MemoizedValue).IsValidData = 0;
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetExitVelocity_km__s_MemoizedValue)) + 0xc)) = 0;
  *(undefined4 *)&this->PowerConsumption_W = 0;
  *(undefined4 *)((int)&this->PowerConsumption_W + 4) = 0;
  return;
}

//==== 0062c830 GetTurningAngularVelocity_radians__s_0062c830 ====


/* public: virtual double __thiscall CoilgunModule__GetTurningAngularVelocity_radians__s(void)const
    */

double __thiscall CoilgunModule__GetTurningAngularVelocity_radians__s(CoilgunModule *this)

{
  double dVar1;
  
  if ((char)((this->TurretModel).Pointer != '\0')){
    if ((char)((this->TurretModel).Pointer == '\0')){
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar1 = TurretSubModule__GetRotationalSpeed_radians__s
                      ((TurretSubModule *)&(this->Turret).Data.field3_0x3);
    return dVar1;
  }
  return 0.0;
}





//==== 0062c890 GetTurningPowerDrain_W_0062c890 ====


/* public: virtual double __thiscall CoilgunModule__GetTurningPowerDrain_W(void)const  */

double __thiscall CoilgunModule__GetTurningPowerDrain_W(CoilgunModule *this)

{
  double dVar1;
  
  if ((char)((this->TurretModel).Pointer != '\0')){
    if ((char)((this->TurretModel).Pointer == '\0')){
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar1 = TurretSubModule__GetPowerConsumption_W
                      ((TurretSubModule *)&(this->Turret).Data.field3_0x3);
    return dVar1;
  }
  return 0.0;
}





//==== 0062c8f0 GetTypeName_0062c8f0 ====


/* public: virtual class util__Str_L_char_G_ 
   BarrelArmorSubModule__ReflectionInfoStruct_struct_BarrelArmorSubModule___GetTypeName(void)const
    */

Str_L_char_G_ * 
BarrelArmorSubModule__ReflectionInfoStruct_struct_BarrelArmorSubModule___GetTypeName__o2
          (ReflectionInfoStruct_L_struct_BarrelArmorSubModule_G_ *this,Str_L_char_G_ *__return_storage_ptr__
          )

{
  util__Str_char___Str_char(__return_storage_ptr__,"BarrelArmorSubModule");
  return __return_storage_ptr__;
}





//==== 0062c910 GetUIActions_0062c910 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual class util__Darray_L_structutil__tuple5_L_void___cdecl_P__void__Cclass_util__Str_L_char_G__Cclassutil__Str_L_char_G__Cclassutil__Delegate_L_void_G__Cclassutil__Str_L_char_G__G__G_
    RailgunCompartment__GetUIActions(void) */

Darray_L_util__tuple5_L_void____cdecl_P__void__Cutil__Str_L_char_G__Cutil__Str_L_char_G__Cutil__Delegate_L_void_G__Cutil__Str_L_char_G___G___G_
* RailgunCompartment__GetUIActions(void)

{
  Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G___G_
  *pDVar1;
  Darray_L_util__tuple5_L_void____cdecl_P__void__Cutil__Str_L_char_G__Cutil__Str_L_char_G__Cutil__Delegate_L_void_G__Cutil__Str_L_char_G___G___G_
  *in_stack_00000004;
  tuple5_L_void____cdecl_P__void__Cutil__Str_L_char_G__Cutil__Str_L_char_G__Cutil__Delegate_L_void_G__Cutil__Str_L_char_G___G_
  *local_20;
  undefined **local_14;
  tuple5_L_void____cdecl_P__void__Cutil__Str_L_char_G__Cutil__Str_L_char_G__Cutil__Delegate_L_void_G__Cutil__Str_L_char_G___G_
  *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = &vftable_169;
  local_10 = (tuple5_L_void____cdecl_P__void__Cutil__Str_L_char_G__Cutil__Str_L_char_G__Cutil__Delegate_L_void_G__Cutil__Str_L_char_G___G_
              *)0x0;
  local_c = 0;
  local_8 = 0;
  pDVar1 = (Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G___G_
            *)LauncherSubCompartment__GetUIActions();
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_L_util__tuple5_L_void____cdecl_P__void__Cutil__Str_L_char_G__Cutil__Str_L_char_G__Cutil__Delegate_L_void_G__Cutil__Str_L_char_G___G___G___Darray_L_util__tuple5_L_void____cdecl_P__void__Cutil__Str_L_char_G__Cutil__Str_L_char_G__Cutil__Delegate_L_void_G__Cutil__Str_L_char_G___G___G_
            (in_stack_00000004,
             (Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G___G_
              *)&local_14);
  util__Darray_L_util__tuple5_L_void____cdecl_P__void__Cutil__Str_L_char_G__Cutil__Str_L_char_G__Cutil__Delegate_L_void_G__Cutil__Str_L_char_G___G___G___op_iadd(in_stack_00000004,pDVar1);
  local_14 = &vftable_169;
  if (local_10 !=
      (tuple5_L_void____cdecl_P__void__Cutil__Str_L_char_G__Cutil__Str_L_char_G__Cutil__Delegate_L_void_G__Cutil__Str_L_char_G___G_
       *)0x0) {
    util__tuple5_L_void____cdecl_P__void__Cutil__Str_L_char_G__Cutil__Str_L_char_G__Cutil__Delegate_L_void_G__Cutil__Str_L_char_G___G_____vector_deleting_destructor_(local_10,3);
  }
  local_10 = (tuple5_L_void____cdecl_P__void__Cutil__Str_L_char_G__Cutil__Str_L_char_G__Cutil__Delegate_L_void_G__Cutil__Str_L_char_G___G_
              *)0x0;
  local_14 = (undefined **)(&vftable);
  if (local_20 !=
      (tuple5_L_void____cdecl_P__void__Cutil__Str_L_char_G__Cutil__Str_L_char_G__Cutil__Delegate_L_void_G__Cutil__Str_L_char_G___G_
       *)0x0) {
    util__tuple5_L_void____cdecl_P__void__Cutil__Str_L_char_G__Cutil__Str_L_char_G__Cutil__Delegate_L_void_G__Cutil__Str_L_char_G___G_____vector_deleting_destructor_(local_20,3);
  }
  return in_stack_00000004;
}





//==== 0062c9b0 GetUIToggleActions_0062c9b0 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual class util__Darray_L_structutil__tuple5_L_void___cdecl_P__void__Cclass_util__Str_L_char_G__Cclassutil__Str_L_char_G__Cbool_P_Cclassutil__Str_L_char_G__G__G_ 
   RailgunCompartment__GetUIToggleActions(void) */

Darray_L_util__tuple5_L_void____cdecl_P__void__Cutil__Str_L_char_G__Cutil__Str_L_char_G__Cbool_P_Cutil__Str_L_char_G___G___G_
* RailgunCompartment__GetUIToggleActions(void)

{
  Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G___G_
  *pDVar1;
  Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G___G_
  *pDVar2;
  Darray_L_util__tuple5_L_void____cdecl_P__void__Cutil__Str_L_char_G__Cutil__Str_L_char_G__Cbool_P_Cutil__Str_L_char_G___G___G_
  *in_stack_00000004;
  tuple5_L_void____cdecl_P__void__Cutil__Str_L_char_G__Cutil__Str_L_char_G__Cbool_P_Cutil__Str_L_char_G___G_ *local_20;
  tuple5_L_void____cdecl_P__void__Cutil__Str_L_char_G__Cutil__Str_L_char_G__Cbool_P_Cutil__Str_L_char_G___G_ *local_10;
  
  pDVar1 = (Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G___G_
            *)LauncherSubCompartment__GetUIToggleActions();
  pDVar2 = (Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G___G_
            *)WeaponCompartment__GetUIToggleActions();
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_L_util__tuple5_L_void____cdecl_P__void__Cutil__Str_L_char_G__Cutil__Str_L_char_G__Cbool_P_Cutil__Str_L_char_G___G___G___Darray_L_util__tuple5_L_void____cdecl_P__void__Cutil__Str_L_char_G__Cutil__Str_L_char_G__Cbool_P_Cutil__Str_L_char_G___G___G_
            (in_stack_00000004,pDVar2);
  util__Darray_L_util__tuple5_L_void____cdecl_P__void__Cutil__Str_L_char_G__Cutil__Str_L_char_G__Cbool_P_Cutil__Str_L_char_G___G___G___op_iadd(in_stack_00000004,pDVar1);
  if (local_10 !=
      (tuple5_L_void____cdecl_P__void__Cutil__Str_L_char_G__Cutil__Str_L_char_G__Cbool_P_Cutil__Str_L_char_G___G_ *)0x0) {
    util__tuple5_L_void____cdecl_P__void__Cutil__Str_L_char_G__Cutil__Str_L_char_G__Cbool_P_Cutil__Str_L_char_G___G____vector_deleting_destructor_(local_10,3);
  }
  if (local_20 !=
      (tuple5_L_void____cdecl_P__void__Cutil__Str_L_char_G__Cutil__Str_L_char_G__Cbool_P_Cutil__Str_L_char_G___G_ *)0x0) {
    util__tuple5_L_void____cdecl_P__void__Cutil__Str_L_char_G__Cutil__Str_L_char_G__Cbool_P_Cutil__Str_L_char_G___G____vector_deleting_destructor_(local_20,3);
  }
  return in_stack_00000004;
}





//==== 0062ca40 GetVolume_m3 ====


/* public: double __thiscall SolenoidSubModule__GetVolume_m3(void)const  */

double __thiscall SolenoidSubModule__GetVolume_m3(SolenoidSubModule *this)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dStack_c;
  
  dVar5 = 0.0;
  iVar4 = 0;
  dStack_c = 0.0;
  iVar2 = this->NumberOfLayers;
  if (7 < iVar2) {
    dVar7 = this->WireRadius_m;
    iVar3 = 2;
    dVar1 = this->CachedCoilInnerRadius_m;
    dVar8 = dVar7 + dVar7;
    dVar7 = dVar7 * 3.141592653589793 * dVar7;
    do {
      dVar6 = (double)this->NumberOfTurns;
      dVar5 = (((double)iVar4 + 0.5) * dVar8 + dVar1) * 6.283185307179586 * dVar7 *
              (double)this->NumberOfTurns + dVar5 +
              (((double)(iVar3 + -1) + 0.5) * dVar8 + dVar1) * 6.283185307179586 * dVar7 * dVar6 +
              (((double)iVar3 + 0.5) * dVar8 + dVar1) * 6.283185307179586 * dVar7 * dVar6 +
              (((double)(iVar3 + 1) + 0.5) * dVar8 + dVar1) * 6.283185307179586 * dVar7 * dVar6 +
              (((double)(iVar3 + 2) + 0.5) * dVar8 + dVar1) * 6.283185307179586 * dVar7 * dVar6 +
              (((double)(iVar3 + 3) + 0.5) * dVar8 + dVar1) * 6.283185307179586 * dVar7 * dVar6 +
              (((double)(iVar3 + 4) + 0.5) * dVar8 + dVar1) * 6.283185307179586 * dVar7 * dVar6 +
              (((double)(iVar3 + 5) + 0.5) * dVar8 + dVar1) * 6.283185307179586 * dVar7 * dVar6;
      iVar4 = iVar4 + 8;
      iVar3 = iVar3 + 8;
      dStack_c = dVar5;
    } while (iVar4 < iVar2 + -7);
  }
  if (iVar4 < iVar2) {
    dVar5 = this->WireRadius_m;
    do {
      iVar3 = iVar4 + 1;
      dStack_c = dStack_c +
                 (((double)iVar4 + 0.5) * (dVar5 + dVar5) + this->CachedCoilInnerRadius_m) *
                 6.283185307179586 * dVar5 * 3.141592653589793 * dVar5 * (double)this->NumberOfTurns
      ;
      iVar4 = iVar3;
    } while (iVar3 < iVar2);
  }
  return dStack_c;
}





//==== 0062cd50 Last_0062cd50 ====


/* public: virtual double & __thiscall util__Sarray_double_500___Last(void) */

double * __thiscall util__Sarray_double_500___Last(Sarray_L_double_C500_G_ *this)

{
  return this->Data + 499;
}





//==== 0062cd60 Num_0062cd60 ====


/* public: virtual int const __thiscall util__Sarray_double_500___Num(void)const  */

int __thiscall util__Sarray_double_500___Num(Sarray_L_double_C500_G_ *this)

{
  return 500;
}





//==== 0062d0a0 Render_0062d0a0 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void  ModuleDiagram_L_classCoilgunModule_G___Render(void)const  */

void __thiscall ModuleDiagram_class_CoilgunModule___Render(ModuleDiagram_L_class_CoilgunModule_G_ *this)

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
  CoilgunModule__RenderDiagram(*(CoilgunModule **)(this + 0x168),pMVar1,*(Vec2_L_int_G_ *)VVar3.X);
  Graphics__ShaderStack___ShaderStack(&SStack_9);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0062d1d0 Render_0062d1d0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall CoilgunModule__Render(struct util__Vec3_L_double_G_,double,bool)const  */

void __thiscall
CoilgunModule__Render(CoilgunModule *this,Vec3_L_double_G_ param_1,double param_2,bool param_3)

{
  undefined8 stack0xfffffffc;
  ReferenceController *pRVar1;
  Vec4_L_double_G_ VVar2;
  Vec4_L_double_G_ VVar3;
  Quaternion_L_double_G_ QVar4;
  Vec4_L_double_G_ VVar5;
  Vec3_L_double_G_ VVar6;
  bool bVar7;
  Vec3_L_double_G_ *pVVar8;
  int iVar9;
  Vec2_L_double_G_ *pVVar10;
  int iVar11;
  float10 fVar12;
  double dVar13;
  Quaternion_L_double_G_ local_4c;
  undefined1 local_2c [16];
  double local_1c;
  double local_14;
  TransformStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((*(int *)((this->ChartAcceleration_m__s).Data + 0x12) != 0) &&
     (pRVar1 = *(ReferenceController **)((int)(this->ChartAcceleration_m__s).Data + 0x94),
     pRVar1 != (ReferenceController *)0x0)) {
    bVar7 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (bVar7) {
      pRVar1 = *(ReferenceController **)((int)(this->ChartAcceleration_m__s).Data + 0x94);
      if (pRVar1 != (ReferenceController *)0x0) {
        bVar7 = util__ReferenceController__IsDataStillValid(pRVar1);
        if (!bVar7) {
          *(undefined4 *)((this->ChartAcceleration_m__s).Data + 0x12) = 0;
        }
      }
      GameModel__Render(*(GameModel **)((this->ChartAcceleration_m__s).Data + 0x12),0.0,0.0,false);
    }
  }
  if ((char)((this->Coil).WireRadius_m != '\0')){
    CapacitorSubModule__Render
              ((CapacitorSubModule *)&(this->Capacitor).Data.Dimensions_m.Height,false);
  }
  if ((char)((this->TurretModel).Pointer != '\0')){
    pVVar8 = WeaponCompartment__GetDefaultTargetDirection((Vec3_L_double_G_ *)local_2c);
    VVar2.W = (int)((ulonglong)pVVar8->Z >> 0x20);
    (*(uint32_t *)((char *)&(VVar2) + 0)) = (uint32_t)(uintptr_t)(*(undefined1 (*) [20])pVVar8);
    TurretSubModule__RenderExtruderModel
              ((TurretSubModule *)&(this->Turret).Data.field3_0x3,(*(Vec4_L_double_G_ *)&VVar2),(*(Vec4_L_double_G_ *)&param_1),false,false);
  }
  fVar12 = (float10)(**(code **)(this->_pad_0x0_0 + 0x1b0))();
  local_1c = (double)(fVar12 / (float10)1000.0);
  VVar5.Z = SUB84(local_1c,0);
  VVar5.X = 0.0;
  VVar5.Y = 0.0;
  VVar5.W = (int)((ulonglong)local_1c >> 0x20);
  Graphics__Translate(VVar5);
  pVVar8 = WeaponCompartment__GetDefaultTargetDirection((Vec3_L_double_G_ *)local_2c);
  VVar3.W = (int)((ulonglong)pVVar8->Z >> 0x20);
  (*(uint32_t *)((char *)&(VVar3) + 0)) = (uint32_t)(uintptr_t)(*(undefined1 (*) [20])pVVar8);
  util__Quaternion_double___Quaternion_double(&local_4c,VVar3,param_1);
  QVar4.Y = local_4c.Y;
  QVar4.X = local_4c.X;
  QVar4.Y = local_4c.Y;
  QVar4.Z = local_4c.Z;
  QVar4.Z = local_4c.Z;
  QVar4.W = local_4c.W;
  QVar4.W = local_4c.W;
  (*(uint32_t *)((char *)&(QVar4.W) + 4)) = (*(uint32_t *)((char *)&(local_4c.W) + 4));
  Graphics__Rotate(QVar4);
  if ((*(int *)((this->ChartAcceleration_m__s).Data + 0x13) != 0) &&
     (pRVar1 = *(ReferenceController **)((int)(this->ChartAcceleration_m__s).Data + 0x9c),
     pRVar1 != (ReferenceController *)0x0)) {
    bVar7 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (bVar7) {
      pRVar1 = *(ReferenceController **)((int)(this->ChartAcceleration_m__s).Data + 0x9c);
      if (pRVar1 != (ReferenceController *)0x0) {
        bVar7 = util__ReferenceController__IsDataStillValid(pRVar1);
        if (!bVar7) {
          *(undefined4 *)((this->ChartAcceleration_m__s).Data + 0x13) = 0;
        }
      }
      GameModel__Render(*(GameModel **)((this->ChartAcceleration_m__s).Data + 0x13),0.0,0.0,param_3)
      ;
    }
  }
  iVar11 = 0;
  while( true ) {
    if ((char)((this->TurretModel).Pointer == '\0')){
      iVar9 = 1;
    }
    else {
      iVar9 = *(int *)&(this->Turret).Data.field0_0x0;
    }
    if (iVar9 <= iVar11) break;
    Graphics__TransformStack__TransformStack(&local_9,Style__Default);
    dVar13 = (this->Coil).CachedEnergyConservingPeakSquaredFieldTerm;
    local_14 = (dVar13 + dVar13) * (double)(int)((*(int *)(void *)((char *)(this) + 0x174))) + this->BarrelArmorThickness_m
               + (this->Barrel).CachedMass_kg;
    if ((char)((this->TurretModel).Pointer == '\0')){
      iVar9 = 1;
    }
    else {
      iVar9 = *(int *)&(this->Turret).Data.field0_0x0;
    }
    pVVar10 = util__GetCirclePackingInACircleOffset_double
                        ((Vec2_L_double_G_ *)(local_2c + 8),iVar9,iVar11);
    dVar13 = (pVVar10->Y * local_14) / 1000.0;
    VVar6.Y = SUB84(dVar13,0);
    VVar6.X = (pVVar10->X * local_14) / 1000.0;
    VVar6.Z = (int)((ulonglong)dVar13 >> 0x20);
    VVar6.Z = 0.0;
    Graphics__Translate(VVar6);
    pRVar1 = *(ReferenceController **)((int)(this->ChartAcceleration_m__s).Data + 0xa4);
    if (pRVar1 != (ReferenceController *)0x0) {
      bVar7 = util__ReferenceController__IsDataStillValid(pRVar1);
      if (!bVar7) {
        *(undefined4 *)((this->ChartAcceleration_m__s).Data + 0x14) = 0;
      }
    }
    GameModel__Render(*(GameModel **)((this->ChartAcceleration_m__s).Data + 0x14),param_2,0.0,true);
    Graphics__TransformStack___TransformStack(&local_9);
    iVar11 = iVar11 + 1;
  }
  return;
}

//==== 0062e080 RenderInitialState_0062e080 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void  CoilgunModule__RenderInitialState(double,class CameraManager
   *,class util__Darray_L_classutil__SharedPtr_L_classArmorTextureHandler_G__G_ const &,double,struct
   util__Vec3_L_double_G_)const  */

void 
CoilgunModule__RenderInitialState
          (CoilgunModule *this,double param_1,CameraManager *param_2,
          Darray_L_class_util__SharedPtr_L_class_ArmorTextureHandler_G___G_ *param_3,double param_4,
          Vec3_L_double_G_ param_5)

{
  Vec3_L_double_G_ VVar1;
  int iVar2;
  double dVar3;
  double dStack_c;
  
  dStack_c = param_1 / 5.0;
  dVar3 = util__Floor(&dStack_c);
  dVar3 = param_1 - dVar3 * 5.0;
  if ((5.0 <= dVar3) || ((dVar3 < 0.0 && (dVar3 = dVar3 + 5.0, NAN(dVar3) != (dVar3 == 5.0))))) {
    dVar3 = 0.0;
  }
  param_1 = (dVar3 * 6.283185307179586) / 5.0;
  dVar3 = util__Cos(&param_1);
  param_1 = (dVar3 + 1.0) * 0.5;
  dStack_c = Material__GetSafeUseTemperature_K((this->Coil).CachedArmatureComposition);
  if (param_4 <= 0.0) {
    param_4 = (1.0 - param_1) * 2.7 + dStack_c * param_1;
  }
  iVar2 = (**(code **)(*(int *)param_3 + 0xc))();
  VVar1.Y = param_5.Y;
  VVar1.X = param_5.X;
  VVar1.Y = param_5.Y;
  VVar1.Z = param_5.Z;
  VVar1.Z = param_5.Z;
  Render(this,VVar1,param_4,0 < iVar2);
  return;
}





//==== 0062e1a0 RenderInitialStateSimple_0062e1a0 ====


/* public: virtual void __thiscall CoilgunModule__RenderInitialStateSimple(struct
   util__Vec3_L_double_G_)const  */

void __thiscall CoilgunModule__RenderInitialStateSimple(CoilgunModule *this,Vec3_L_double_G_ param_1)

{
  RenderSimple(this,param_1,true);
  return;
}





//==== 0062e1d0 RenderInitialStateTransparent_0062e1d0 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void  CoilgunModule__RenderInitialStateTransparent(double,class
   CameraManager *,struct util__Vec3_L_double_G_)const  */

void 
CoilgunModule__RenderInitialStateTransparent
          (CoilgunModule *this,double param_1,CameraManager *param_2,Vec3_L_double_G_ param_3)

{
  undefined8 stack0xfffffffc;
  Vec3_L_double_G_ VVar1;
  int iVar2;
  Vec2_L_double_G_ *pVVar3;
  int iVar4;
  float10 fVar5;
  double dVar6;
  double dVar7;
  Vec2_L_double_G_ VStack_24;
  double dStack_14;
  TransformStack TStack_9;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  VStack_24.Y = WeaponModule__GetReloadChargeTime_s((WeaponModule *)this);
  VStack_24.Y = VStack_24.Y + VStack_24.Y;
  if ((char)((this->TurretModel).Pointer == '\0')){
    iVar4 = 1;
  }
  else {
    iVar4 = *(int *)&(this->Turret).Data.field0_0x0;
  }
  Interface__GetUITime_s((OptionsSection__Interface *)(param_2->Parent->Managers).Data);
  dStack_14 = (double)iVar4 * VStack_24.Y;
  fVar5 = (float10)__CIfmod();
  dStack_14 = (double)fVar5;
  if ((char)((this->TurretModel).Pointer == '\0')){
    iVar4 = 1;
  }
  else {
    iVar4 = *(int *)&(this->Turret).Data.field0_0x0;
  }
  dVar6 = dStack_14 / VStack_24.Y;
  Graphics__TransformStack__TransformStack(&TStack_9,Style__Default);
  dVar7 = (this->Coil).CachedEnergyConservingPeakSquaredFieldTerm;
  dStack_14 = (dVar7 + dVar7) * (double)(int)((*(int *)(void *)((char *)(this) + 0x174))) + this->BarrelArmorThickness_m +
              (this->Barrel).CachedMass_kg;
  if ((char)((this->TurretModel).Pointer == '\0')){
    iVar2 = 1;
  }
  else {
    iVar2 = *(int *)&(this->Turret).Data.field0_0x0;
  }
  pVVar3 = util__GetCirclePackingInACircleOffset_double(&VStack_24,iVar2,(int)dVar6 % iVar4);
  dVar7 = (pVVar3->Y * dStack_14) / 1000.0;
  VVar1.Y = SUB84(dVar7,0);
  VVar1.X = (pVVar3->X * dStack_14) / 1000.0;
  VVar1.Z = (int)((ulonglong)dVar7 >> 0x20);
  VVar1.Z = 0.0;
  Graphics__Translate(VVar1);
  MassProjectileSubModule__RenderForViewing
            ((MassProjectileSubModule *)&(this->Armature).CachedMassStartsOutBeforeBarrel,param_1,
             param_2,(WeaponModule *)this);
  Graphics__TransformStack___TransformStack(&TStack_9);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0062e370 RenderSimple_0062e370 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall CoilgunModule__RenderSimple(struct util__Vec3_L_double_G_,bool)const  */

void __thiscall CoilgunModule__RenderSimple(CoilgunModule *this,Vec3_L_double_G_ param_1,bool param_2)

{
  undefined8 stack0xfffffffc;
  ReferenceController *pRVar1;
  Vec4_L_double_G_ VVar2;
  Vec4_L_double_G_ VVar3;
  Quaternion_L_double_G_ QVar4;
  Vec4_L_double_G_ VVar5;
  Vec3_L_double_G_ VVar6;
  bool bVar7;
  Vec3_L_double_G_ *pVVar8;
  int iVar9;
  Vec2_L_double_G_ *pVVar10;
  int iVar11;
  float10 fVar12;
  double dVar13;
  Quaternion_L_double_G_ local_4c;
  undefined1 local_2c [16];
  double local_1c;
  double local_14;
  TransformStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((*(int *)((this->ChartAcceleration_m__s).Data + 0x12) != 0) &&
     (pRVar1 = *(ReferenceController **)((int)(this->ChartAcceleration_m__s).Data + 0x94),
     pRVar1 != (ReferenceController *)0x0)) {
    bVar7 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (bVar7) {
      pRVar1 = *(ReferenceController **)((int)(this->ChartAcceleration_m__s).Data + 0x94);
      if (pRVar1 != (ReferenceController *)0x0) {
        bVar7 = util__ReferenceController__IsDataStillValid(pRVar1);
        if (!bVar7) {
          *(undefined4 *)((this->ChartAcceleration_m__s).Data + 0x12) = 0;
        }
      }
      GameModel__RenderSimple(*(GameModel **)((this->ChartAcceleration_m__s).Data + 0x12));
    }
  }
  if ((char)((this->Coil).WireRadius_m != '\0')){
    CapacitorSubModule__Render
              ((CapacitorSubModule *)&(this->Capacitor).Data.Dimensions_m.Height,true);
  }
  if ((char)((this->TurretModel).Pointer != '\0')){
    pVVar8 = WeaponCompartment__GetDefaultTargetDirection((Vec3_L_double_G_ *)local_2c);
    VVar2.W = (int)((ulonglong)pVVar8->Z >> 0x20);
    (*(uint32_t *)((char *)&(VVar2) + 0)) = (uint32_t)(uintptr_t)(*(undefined1 (*) [20])pVVar8);
    TurretSubModule__RenderExtruderModel
              ((TurretSubModule *)&(this->Turret).Data.field3_0x3,(*(Vec4_L_double_G_ *)&VVar2),(*(Vec4_L_double_G_ *)&param_1),false,true);
  }
  fVar12 = (float10)(**(code **)(this->_pad_0x0_0 + 0x1b0))();
  local_1c = (double)(fVar12 / (float10)1000.0);
  VVar5.Z = SUB84(local_1c,0);
  VVar5.X = 0.0;
  VVar5.Y = 0.0;
  VVar5.W = (int)((ulonglong)local_1c >> 0x20);
  Graphics__Translate(VVar5);
  pVVar8 = WeaponCompartment__GetDefaultTargetDirection((Vec3_L_double_G_ *)local_2c);
  VVar3.W = (int)((ulonglong)pVVar8->Z >> 0x20);
  (*(uint32_t *)((char *)&(VVar3) + 0)) = (uint32_t)(uintptr_t)(*(undefined1 (*) [20])pVVar8);
  util__Quaternion_double___Quaternion_double(&local_4c,VVar3,param_1);
  QVar4.Y = local_4c.Y;
  QVar4.X = local_4c.X;
  QVar4.Y = local_4c.Y;
  QVar4.Z = local_4c.Z;
  QVar4.Z = local_4c.Z;
  QVar4.W = local_4c.W;
  QVar4.W = local_4c.W;
  (*(uint32_t *)((char *)&(QVar4.W) + 4)) = (*(uint32_t *)((char *)&(local_4c.W) + 4));
  Graphics__Rotate(QVar4);
  if ((*(int *)((this->ChartAcceleration_m__s).Data + 0x13) != 0) &&
     (pRVar1 = *(ReferenceController **)((int)(this->ChartAcceleration_m__s).Data + 0x9c),
     pRVar1 != (ReferenceController *)0x0)) {
    bVar7 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (bVar7) {
      pRVar1 = *(ReferenceController **)((int)(this->ChartAcceleration_m__s).Data + 0x9c);
      if (pRVar1 != (ReferenceController *)0x0) {
        bVar7 = util__ReferenceController__IsDataStillValid(pRVar1);
        if (!bVar7) {
          *(undefined4 *)((this->ChartAcceleration_m__s).Data + 0x13) = 0;
        }
      }
      GameModel__RenderSimple(*(GameModel **)((this->ChartAcceleration_m__s).Data + 0x13));
    }
  }
  if (param_2) {
    iVar11 = 0;
    while( true ) {
      if ((char)((this->TurretModel).Pointer == '\0')){
        iVar9 = 1;
      }
      else {
        iVar9 = *(int *)&(this->Turret).Data.field0_0x0;
      }
      if (iVar9 <= iVar11) break;
      Graphics__TransformStack__TransformStack(&local_9,Style__Default);
      dVar13 = (this->Coil).CachedEnergyConservingPeakSquaredFieldTerm;
      local_14 = (dVar13 + dVar13) * (double)(int)((*(int *)(void *)((char *)(this) + 0x174))) +
                 this->BarrelArmorThickness_m + (this->Barrel).CachedMass_kg;
      if ((char)((this->TurretModel).Pointer == '\0')){
        iVar9 = 1;
      }
      else {
        iVar9 = *(int *)&(this->Turret).Data.field0_0x0;
      }
      pVVar10 = util__GetCirclePackingInACircleOffset_double
                          ((Vec2_L_double_G_ *)(local_2c + 8),iVar9,iVar11);
      dVar13 = (pVVar10->Y * local_14) / 1000.0;
      VVar6.Y = SUB84(dVar13,0);
      VVar6.X = (pVVar10->X * local_14) / 1000.0;
      VVar6.Z = (int)((ulonglong)dVar13 >> 0x20);
      VVar6.Z = 0.0;
      Graphics__Translate(VVar6);
      pRVar1 = *(ReferenceController **)((int)(this->ChartAcceleration_m__s).Data + 0xa4);
      if (pRVar1 != (ReferenceController *)0x0) {
        bVar7 = util__ReferenceController__IsDataStillValid(pRVar1);
        if (!bVar7) {
          *(undefined4 *)((this->ChartAcceleration_m__s).Data + 0x14) = 0;
        }
      }
      GameModel__RenderSimple(*(GameModel **)((this->ChartAcceleration_m__s).Data + 0x14));
      Graphics__TransformStack___TransformStack(&local_9);
      iVar11 = iVar11 + 1;
    }
  }
  return;
}

//==== 0062e620 SetAll_0062e620 ====


/* public: virtual void __thiscall util__Sarray_double_500___SetAll(double const &) */

void __thiscall util__Sarray_double_500___SetAll(Sarray_L_double_C500_G_ *this,double *param_1)

{
  double *pdVar1;
  int iVar2;
  
  iVar2 = 0x32;
  pdVar1 = this->Data + 1;
  do {
    pdVar1[-1] = *param_1;
    *pdVar1 = *param_1;
    pdVar1[1] = *param_1;
    pdVar1[2] = *param_1;
    pdVar1[3] = *param_1;
    pdVar1[4] = *param_1;
    pdVar1[5] = *param_1;
    pdVar1[6] = *param_1;
    pdVar1[7] = *param_1;
    pdVar1[8] = *param_1;
    iVar2 = iVar2 + -1;
    pdVar1 = pdVar1 + 10;
  } while (iVar2 != 0);
  return;
}





//==== 0062ec60 StaticFactory_0062ec60 ====

/* public: static class util__Reflectable * __cdecl
   BarrelArmorSubModule__ReflectionInfoStruct_struct_BarrelArmorSubModule___StaticFactory(void) */

Reflectable * __cdecl
BarrelArmorSubModule__ReflectionInfoStruct_struct_BarrelArmorSubModule___StaticFactory__o2(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x90));
  if (pRVar1 != (Reflectable *)0x0) {
    memset(pRVar1,0,0x90);
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_283;
    pRVar1[4]._pad_0x0_0 = 0;
    pRVar1[4].Name.Data = (char *)0x0;
    pRVar1[3]._pad_0x0_0 = 0;
    pRVar1[3].Name.Data = (char *)0x0;
    pRVar1[3].Name.Capacity = 0;
    pRVar1[3].Name.Length = 0;
    *(undefined1 *)&pRVar1[6].Name.Capacity = 0;
    pRVar1[6]._pad_0x0_0 = 0;
    pRVar1[6].Name.Data = (char *)0x0;
    pRVar1[7]._pad_0x0_0 = 0;
    pRVar1[7].Name.Data = (char *)0x0;
    pRVar1[7].Name.Capacity = 0;
    pRVar1[7].Name.Length = 0;
    pRVar1[8].Name.Capacity = 0;
    pRVar1[8].Name.Length = 0;
  }
  return (Reflectable *)0x0;
}

//==== 0062ece0 StaticFactory_0062ece0 ====

/* public: static class util__Reflectable * __cdecl CoilgunModule__ReflectionInfoStruct_L_class_CoilgunModule_G___StaticFactory(void) */

Reflectable * __cdecl CoilgunModule__ReflectionInfoStruct_class_CoilgunModule___StaticFactory(void)

{
  undefined8 stack0xfffffff4;
  pmf_27707b45 **this;
  Module *this_00;
  
  this_00 = (Module *)(uintptr_t)(port_op_new(0x1420));
  if (this_00 != (Module *)0x0) {
    memset(this_00,0,0);
    Module__Module(this_00);
    *(undefined1 *)&this_00[1].GetTotalPowerUsage_W_MemoizedValue.Data = 0;
    *(undefined8 *)&this_00[1].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    *(undefined4 *)&this_00[1].GetTotalPowerUsage_W_MemoizedValue.IsValidData = 0;
    *(undefined4 *)&((*(undefined4 *)((char *)&(this_00[1].GetTotalPowerUsage_W_MemoizedValue) + 0xc))) = 0;
    this_00[1].Models._pad_0x0_0 = 0;
    this_00[1].Models.Data = (SharedPtr_L_GameModel_G_ *)0x0;
    *(undefined ***)&this_00[1].GetTotalPowerUsage_W_MemoizedValue.IsValidData =
         &vftable_166;
    *(undefined4 *)&((*(undefined4 *)((char *)&(this_00[1].GetTotalPowerUsage_W_MemoizedValue) + 0xc))) = 0;
    this_00[1].Models._pad_0x0_0 = 0;
    this_00[1].Models.Data = (SharedPtr_L_GameModel_G_ *)0x0;
    this_00[1].Models.Size = 0;
    this_00[1].Models.Capacity = 0;
    this_00[1].UsesCustomName = false;
    this_00[2]._pad_0x0_0 = 0;
    this_00[2]._pad_0x4_1 = 0;
    *(undefined1 *)&this_00[2]._pad_0x8_2 = 0;
    this_00->_pad_0x0_0 = (int)&vftable_for_EditorReflectable__29;
    *(undefined ** *)&(this_00->GetTotalPowerUsage_W_MemoizedValue).field_0xc = (undefined **)(&vftable_for_util__RTTIBaseClass__28);
    this_00[2].ModuleMemoizationHandlerInstance.ResetFunctions.Data = (pmf_27707b45 *)0x0;
    this_00[2].ModuleMemoizationHandlerInstance.ResetFunctions.Size = 0;
    this_00[2].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    *(undefined4 *)&this_00[2].ModuleMemoizationHandlerInstance = 0;
    this_00[2].ModuleMemoizationHandlerInstance.ResetFunctions.Data =
         (pmf_27707b45 *)&vftable_109;
    this_00[2].ModuleMemoizationHandlerInstance.ResetFunctions.Size = 0;
    this_00[2].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    *(undefined4 *)&this_00[2].ModuleMemoizationHandlerInstance = 0;
    *(undefined4 *)&this_00[2].GetTotalPowerUsage_W_MemoizedValue.Data = 0;
    *(undefined4 *)((int)&this_00[2].GetTotalPowerUsage_W_MemoizedValue.Data + 4) = 0;
    *(undefined4 *)&this_00[2].GetTotalPowerUsage_W_MemoizedValue.IsValidData = 0;
    *(undefined4 *)&((*(undefined4 *)((char *)&(this_00[2].GetTotalPowerUsage_W_MemoizedValue) + 0xc))) = 0;
    *(undefined1 *)&this_00[2].Models._pad_0x0_0 = 0;
    this_00[2].Models.Size = 0;
    this_00[2].Models.Capacity = 0;
    this_00[2].UsesCustomName = false;
    this_00[3]._pad_0x0_0 = 0;
    this_00[3]._pad_0x4_1 = 0;
    CapacitorSubModule__CapacitorSubModule((CapacitorSubModule *)&this_00[3]._pad_0x8_2);
    *(undefined1 *)&this_00[4]._pad_0x8_2 = 0;
    memset(&this_00[4]._pad_0x10_4,0,0x40);
    this_00[4].ModuleMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 = 0;
    this_00[4].ModuleMemoizationHandlerInstance.ResetFunctions.Data = (pmf_27707b45 *)0x0;
    this_00[4].ModuleMemoizationHandlerInstance.ResetFunctions.Size = 0;
    this_00[4]._pad_0x10_4 = (int)&vftable_285;
    this_00[5]._pad_0x0_0 = 0;
    memset(&this_00[5]._pad_0x8_2,0,0x90);
    this_00[5]._pad_0xc_3 = 0;
    this_00[5]._pad_0x10_4 = 0;
    this_00[5].ModuleMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 = 0;
    this_00[5]._pad_0x8_2 = (int)&vftable_283;
    this_00[5].UsesCustomName = false;
    this_00[5].IsUserCreated = false;
    *(undefined2 *)(void *)((char *)(this_00 + 5) + 0x4a) = 0;
    *(undefined4 *)(void *)((char *)(this_00 + 5) + 0x4c) = 0;
    this_00[5].Models._pad_0x0_0 = 0;
    this_00[5].Models.Data = (SharedPtr_L_GameModel_G_ *)0x0;
    this_00[5].Models.Size = 0;
    this_00[5].Models.Capacity = 0;
    *(undefined1 *)&this_00[6].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    this_00[6].ModuleMemoizationHandlerInstance.ResetFunctions.Data = (pmf_27707b45 *)0x0;
    this_00[6].ModuleMemoizationHandlerInstance.ResetFunctions.Size = 0;
    *(undefined4 *)&this_00[6].GetTotalPowerUsage_W_MemoizedValue.Data = 0;
    *(undefined4 *)((int)&this_00[6].GetTotalPowerUsage_W_MemoizedValue.Data + 4) = 0;
    *(undefined4 *)&this_00[6].GetTotalPowerUsage_W_MemoizedValue.IsValidData = 0;
    *(undefined4 *)&((*(undefined4 *)((char *)&(this_00[6].GetTotalPowerUsage_W_MemoizedValue) + 0xc))) = 0;
    this_00[6].Models.Size = 0;
    this_00[6].Models.Capacity = 0;
    MassProjectileSubModule__MassProjectileSubModule
              ((MassProjectileSubModule *)&this_00[6].UsesCustomName);
    this_00[8]._pad_0xc_3 = 0;
    this_00[8]._pad_0x10_4 = 0;
    this_00[8].ModuleMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 = 0;
    this_00[8]._pad_0x8_2 = (int)&vftable_211;
    this_00[8].ModuleMemoizationHandlerInstance.ResetFunctions.Data = (pmf_27707b45 *)0x0;
    this_00[8].ModuleMemoizationHandlerInstance.ResetFunctions.Size = 0;
    TurretSubModule__TurretSubModule((TurretSubModule *)&this_00[8].Models);
    this_00[8].Models._pad_0x0_0 = (int)&vftable_237;
    this_00[0xb].UsesCustomName = false;
    AmmoBaySubModule__AmmoBaySubModule((AmmoBaySubModule *)(this_00 + 0xc));
    this_00[0xd].UsesCustomName = false;
    this_00[0xe]._pad_0x0_0 = 0;
    this_00[0xe]._pad_0x4_1 = 0;
    this_00[0xe]._pad_0x8_2 = 0;
    this_00[0xe]._pad_0xc_3 = 0;
    this_00[0xe]._pad_0x10_4 = 0;
    this_00[0xe].ModuleMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 = 0;
    this = &this_00[0xe].ModuleMemoizationHandlerInstance.ResetFunctions.Data;
    *this = (pmf_27707b45 *)&vftable_286;
    util__Sarray_double_500___SetAll((Sarray_L_double_C500_G_ *)this,(double *)&stack0xfffffff4);
    return (Reflectable *)this_00;
  }
  return (Reflectable *)0x0;
}

//==== 0062ed10 StaticFactory_0062ed10 ====

/* public: static class util__Reflectable * __cdecl SolenoidSubModule__ReflectionInfoStruct_L_class_SolenoidSubModule_G___StaticFactory(void) */

Reflectable * __cdecl
SolenoidSubModule__ReflectionInfoStruct_class_SolenoidSubModule___StaticFactory(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x40));
  if (pRVar1 != (Reflectable *)0x0) {
    memset(pRVar1,0,0x40);
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_285;
  }
  return (Reflectable *)0x0;
}

//==== 0062ed60 StaticGetMember_0062ed60 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class util__Maybe_L_structutil__ClassMember_G_ const __cdecl
   BarrelArmorSubModule__ReflectionInfoStruct_struct_BarrelArmorSubModule___StaticGetMember(class
   util__Str_L_char_G_ const &) */

Str_L_char_G_ * __cdecl
BarrelArmorSubModule__ReflectionInfoStruct_struct_BarrelArmorSubModule___StaticGetMember__o2
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
        cde_l2_55b5baaf__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_55b5baaf__thread_safe_static_guard_0__),
      cde_l2_55b5baaf__thread_safe_static_guard_0__ == -1)) {
     cde_l2_b61df2a7_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_55b5baaf__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_b61df2a7_Count) {
    piVar7 = &DAT_00975730;
    do {
      if ((*(int *)(iStack_c + 4) <
            cde_l2_0d09b3cf__thread_safe_static_guard_0__) &&
         (_Init_thread_header(& cde_l2_0d09b3cf__thread_safe_static_guard_0__),
          cde_l2_0d09b3cf__thread_safe_static_guard_0__ == -1)) {
        util__Str_char___Str_char
                  ((Str_L_char_G_ *)
                   & cde_l2_dcf08f40_StaticMembers,"DummyValue_DO_NOT_USE");
        DAT_0097572c = 0;
        DAT_00975730 = 0;
        DAT_00975734 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975738,"Unused");
        _DAT_00975744 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975748,"Composition");
        _DAT_00975754 = 8;
        _DAT_00975758 = 0x10;
        _DAT_0097575c = 4;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975760,"Material");
        _DAT_0097576c = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975770,"Thickness_m");
        _DAT_0097577c = 4;
        _DAT_00975780 = 0x18;
        _DAT_00975784 = 8;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975788,"double");
        _DAT_00975794 = 0;
        atexit( private__static_struct_util__ClassMember_const___cdecl_BarrelArmorSubModule__ReflectionInfoStruct_struct_BarrelArmorSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
        _Init_thread_footer(& cde_l2_0d09b3cf__thread_safe_static_guard_0__);
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
LAB_0062ee32:
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
          if (cVar3 == '\0') goto LAB_0062ee32;
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
    } while (iVar6 <  cde_l2_b61df2a7_Count);
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





//==== 0062f050 StaticGetMemberByIndex_0062f050 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl CoilgunModule__ReflectionInfoStruct_class_CoilgunModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
CoilgunModule__ReflectionInfoStruct_class_CoilgunModule___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_fb31387f__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_fb31387f__thread_safe_static_guard_0__);
    if ( cde_l2_fb31387f__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_38582842_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00974f7c = 0;
      _DAT_00974f80 = 0;
      _DAT_00974f84 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974f88,"Unused");
      _DAT_00974f94 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974f98,"SteamWorkshopID");
      _DAT_00974fa4 = 6;
      _DAT_00974fa8 = 0x10;
      _DAT_00974fac = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974fb0,"AStr");
      _DAT_00974fbc = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974fc0,"Description");
      _DAT_00974fcc = 6;
      _DAT_00974fd0 = 0x20;
      _DAT_00974fd4 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974fd8,"AStr");
      _DAT_00974fe4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974fe8,"UsesCustomName");
      _DAT_00974ff4 = 1;
      _DAT_00974ff8 = 0x68;
      _DAT_00974ffc = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975000,"bool");
      _DAT_0097500c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975010,"PowerConsumption_W");
      _DAT_0097501c = 4;
      _DAT_00975020 = 0xf0;
      _DAT_00975024 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975028,"double");
      _DAT_00975034 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975038,"Capacitor");
      _DAT_00975044 = 10;
      _DAT_00975048 = 0xf8;
      _DAT_0097504c = 0x50;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975050,"CapacitorSubModule");
      _DAT_0097505c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975060,"Coil");
      _DAT_0097506c = 10;
      _DAT_00975070 = 0x150;
      _DAT_00975074 = 0x40;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975078,"SolenoidSubModule");
      _DAT_00975084 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975088,"NumberOfStages");
      _DAT_00975094 = 2;
      _DAT_00975098 = 400;
      _DAT_0097509c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009750a0,"int");
      _DAT_009750ac = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009750b0,"BarrelArmor");
      _DAT_009750bc = 10;
      _DAT_009750c0 = 0x198;
      _DAT_009750c4 = 0x90;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009750c8,"BarrelArmorSubModule");
      _DAT_009750d4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009750d8,"Armature");
      _DAT_009750e4 = 10;
      _DAT_009750e8 = 0x228;
      _DAT_009750ec = 0x60;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009750f0,"MassProjectileSubModule");
      _DAT_009750fc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975100,"Loader");
      _DAT_0097510c = 10;
      _DAT_00975110 = 0x288;
      _DAT_00975114 = 0x28;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975118,"LinearMotorSubModule");
      _DAT_00975124 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975128,"ExternalMount");
      _DAT_00975134 = 1;
      _DAT_00975138 = 0x2b0;
      _DAT_0097513c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975140,"bool");
      _DAT_0097514c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975150,"InternalMount");
      _DAT_0097515c = 1;
      _DAT_00975160 = 0x2b1;
      _DAT_00975164 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975168,"bool");
      _DAT_00975174 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975178,"Turret");
      _DAT_00975184 = 10;
      _DAT_00975188 = 0x2b8;
      _DAT_0097518c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975190,"ExtrudableTurretSubModule");
      _DAT_0097519c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009751a0,"AttachedAmmoBay");
      _DAT_009751ac = 10;
      _DAT_009751b0 = 0x3c0;
      _DAT_009751b4 = 0x98;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009751b8,"AmmoBaySubModule");
      _DAT_009751c4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009751c8,"TargetsShips");
      _DAT_009751d4 = 1;
      _DAT_009751d8 = 0xb0;
      _DAT_009751dc = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009751e0,"bool");
      _DAT_009751ec = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009751f0,"TargetsShots");
      _DAT_009751fc = 1;
      _DAT_00975200 = 0xb1;
      _DAT_00975204 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975208,"bool");
      _DAT_00975214 = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_CoilgunModule__ReflectionInfoStruct_class_CoilgunModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_fb31387f__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_38582842_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_00974f7c + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_00974f80 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_00974f84 + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_00974f88 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_00974f94)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_00974f95)[iVar1];
  return __return_storage_ptr__;
}





//==== 0062f590 StaticGetMemberByIndex_0062f590 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   SolenoidSubModule__ReflectionInfoStruct_class_SolenoidSubModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
SolenoidSubModule__ReflectionInfoStruct_class_SolenoidSubModule___StaticGetMemberByIndex__o2
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_0d1159b9__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_0d1159b9__thread_safe_static_guard_0__);
    if ( cde_l2_0d1159b9__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_d85f0cdc_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_009752fc = 0;
      _DAT_00975300 = 0;
      _DAT_00975304 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975308,"Unused");
      _DAT_00975314 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975318,"Composition");
      _DAT_00975324 = 8;
      _DAT_00975328 = 0x10;
      _DAT_0097532c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975330,"Material");
      _DAT_0097533c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975340,"WireRadius_m");
      _DAT_0097534c = 4;
      _DAT_00975350 = 0x18;
      _DAT_00975354 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975358,"double");
      _DAT_00975364 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975368,"NumberOfTurns");
      _DAT_00975374 = 2;
      _DAT_00975378 = 0x20;
      _DAT_0097537c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975380,"int");
      _DAT_0097538c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975390,"NumberOfLayers");
      _DAT_0097539c = 2;
      _DAT_009753a0 = 0x24;
      _DAT_009753a4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009753a8,"int");
      _DAT_009753b4 = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_SolenoidSubModule__ReflectionInfoStruct_class_SolenoidSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_0d1159b9__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_d85f0cdc_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_009752fc + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_00975300 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_00975304 + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_00975308 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_00975314)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_00975315)[iVar1];
  return __return_storage_ptr__;
}





//==== 0062f790 StaticGetMemberCount_0062f790 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl BarrelArmorSubModule__ReflectionInfoStruct_struct_BarrelArmorSubModule___StaticGetMemberCount(void) */

int __cdecl
BarrelArmorSubModule__ReflectionInfoStruct_struct_BarrelArmorSubModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_62cb0f69__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_62cb0f69__thread_safe_static_guard_0__);
    if ( cde_l2_62cb0f69__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_4da1240f_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_009756ac = 0;
      _DAT_009756b0 = 0;
      _DAT_009756b4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009756b8,"Unused");
      _DAT_009756c4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009756c8,"Composition");
      _DAT_009756d4 = 8;
      _DAT_009756d8 = 0x10;
      _DAT_009756dc = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009756e0,"Material");
      _DAT_009756ec = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009756f0,"Thickness_m");
      _DAT_009756fc = 4;
      _DAT_00975700 = 0x18;
      _DAT_00975704 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975708,"double");
      _DAT_00975714 = 0;
      atexit( private__static_int_const___cdecl_BarrelArmorSubModule__ReflectionInfoStruct_struct_BarrelArmorSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_62cb0f69__thread_safe_static_guard_0__);
    }
  }
  return 3;
}





//==== 0062f8c0 StaticGetMemberCount_0062f8c0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl CoilgunModule__ReflectionInfoStruct_class_CoilgunModule___StaticGetMemberCount(void) */

int __cdecl CoilgunModule__ReflectionInfoStruct_class_CoilgunModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_a29ff00f__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_a29ff00f__thread_safe_static_guard_0__);
    if ( cde_l2_a29ff00f__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_223eb767_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00974ccc = 0;
      _DAT_00974cd0 = 0;
      _DAT_00974cd4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974cd8,"Unused");
      _DAT_00974ce4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974ce8,"SteamWorkshopID");
      _DAT_00974cf4 = 6;
      _DAT_00974cf8 = 0x10;
      _DAT_00974cfc = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974d00,"AStr");
      _DAT_00974d0c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974d10,"Description");
      _DAT_00974d1c = 6;
      _DAT_00974d20 = 0x20;
      _DAT_00974d24 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974d28,"AStr");
      _DAT_00974d34 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974d38,"UsesCustomName");
      _DAT_00974d44 = 1;
      _DAT_00974d48 = 0x68;
      _DAT_00974d4c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974d50,"bool");
      _DAT_00974d5c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974d60,"PowerConsumption_W");
      _DAT_00974d6c = 4;
      _DAT_00974d70 = 0xf0;
      _DAT_00974d74 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974d78,"double");
      _DAT_00974d84 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974d88,"Capacitor");
      _DAT_00974d94 = 10;
      _DAT_00974d98 = 0xf8;
      _DAT_00974d9c = 0x50;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974da0,"CapacitorSubModule");
      _DAT_00974dac = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974db0,"Coil");
      _DAT_00974dbc = 10;
      _DAT_00974dc0 = 0x150;
      _DAT_00974dc4 = 0x40;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974dc8,"SolenoidSubModule");
      _DAT_00974dd4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974dd8,"NumberOfStages");
      _DAT_00974de4 = 2;
      _DAT_00974de8 = 400;
      _DAT_00974dec = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974df0,"int");
      _DAT_00974dfc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974e00,"BarrelArmor");
      _DAT_00974e0c = 10;
      _DAT_00974e10 = 0x198;
      _DAT_00974e14 = 0x90;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974e18,"BarrelArmorSubModule");
      _DAT_00974e24 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974e28,"Armature");
      _DAT_00974e34 = 10;
      _DAT_00974e38 = 0x228;
      _DAT_00974e3c = 0x60;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974e40,"MassProjectileSubModule");
      _DAT_00974e4c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974e50,"Loader");
      _DAT_00974e5c = 10;
      _DAT_00974e60 = 0x288;
      _DAT_00974e64 = 0x28;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974e68,"LinearMotorSubModule");
      _DAT_00974e74 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974e78,"ExternalMount");
      _DAT_00974e84 = 1;
      _DAT_00974e88 = 0x2b0;
      _DAT_00974e8c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974e90,"bool");
      _DAT_00974e9c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974ea0,"InternalMount");
      _DAT_00974eac = 1;
      _DAT_00974eb0 = 0x2b1;
      _DAT_00974eb4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974eb8,"bool");
      _DAT_00974ec4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974ec8,"Turret");
      _DAT_00974ed4 = 10;
      _DAT_00974ed8 = 0x2b8;
      _DAT_00974edc = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974ee0,"ExtrudableTurretSubModule");
      _DAT_00974eec = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974ef0,"AttachedAmmoBay");
      _DAT_00974efc = 10;
      _DAT_00974f00 = 0x3c0;
      _DAT_00974f04 = 0x98;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974f08,"AmmoBaySubModule");
      _DAT_00974f14 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974f18,"TargetsShips");
      _DAT_00974f24 = 1;
      _DAT_00974f28 = 0xb0;
      _DAT_00974f2c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974f30,"bool");
      _DAT_00974f3c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974f40,"TargetsShots");
      _DAT_00974f4c = 1;
      _DAT_00974f50 = 0xb1;
      _DAT_00974f54 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00974f58,"bool");
      _DAT_00974f64 = 0;
      atexit( private__static_int_const___cdecl_CoilgunModule__ReflectionInfoStruct_class_CoilgunModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_a29ff00f__thread_safe_static_guard_0__);
    }
  }
  return 0x11;
}





//==== 0062fdb0 StaticGetMemberCount_0062fdb0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl SolenoidSubModule__ReflectionInfoStruct_class_SolenoidSubModule___StaticGetMemberCount(void) */

int __cdecl
SolenoidSubModule__ReflectionInfoStruct_class_SolenoidSubModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_9be08cce__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_9be08cce__thread_safe_static_guard_0__);
    if ( cde_l2_9be08cce__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_560e6a5a_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0097522c = 0;
      _DAT_00975230 = 0;
      _DAT_00975234 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975238,"Unused");
      _DAT_00975244 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975248,"Composition");
      _DAT_00975254 = 8;
      _DAT_00975258 = 0x10;
      _DAT_0097525c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975260,"Material");
      _DAT_0097526c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975270,"WireRadius_m");
      _DAT_0097527c = 4;
      _DAT_00975280 = 0x18;
      _DAT_00975284 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975288,"double");
      _DAT_00975294 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975298,"NumberOfTurns");
      _DAT_009752a4 = 2;
      _DAT_009752a8 = 0x20;
      _DAT_009752ac = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009752b0,"int");
      _DAT_009752bc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009752c0,"NumberOfLayers");
      _DAT_009752cc = 2;
      _DAT_009752d0 = 0x24;
      _DAT_009752d4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009752d8,"int");
      _DAT_009752e4 = 0;
      atexit( private__static_int_const___cdecl_SolenoidSubModule__ReflectionInfoStruct_class_SolenoidSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_9be08cce__thread_safe_static_guard_0__);
    }
  }
  return 5;
}





//==== 0062ff60 StaticGetMembers_0062ff60 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class util__Darray_L_structutil__ClassMember_G_ const __cdecl
   BarrelArmorSubModule__ReflectionInfoStruct_struct_BarrelArmorSubModule___StaticGetMembers(void)
    */

Darray_L_struct_util__ClassMember_G_ * __cdecl
BarrelArmorSubModule__ReflectionInfoStruct_struct_BarrelArmorSubModule___StaticGetMembers__o2(void)

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
        cde_l2_50300e32__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_50300e32__thread_safe_static_guard_0__),
      cde_l2_50300e32__thread_safe_static_guard_0__ == -1)) {
     cde_l2_1bc16441_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_50300e32__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_1bc16441_Count);
  iVar3 = 0;
  if (0 <  cde_l2_1bc16441_Count) {
    puVar4 = &DAT_00975730;
    do {
      if ((*(int *)(iStack_c + 4) <
            cde_l2_0d09b3cf__thread_safe_static_guard_0__) &&
         (_Init_thread_header(& cde_l2_0d09b3cf__thread_safe_static_guard_0__),
          cde_l2_0d09b3cf__thread_safe_static_guard_0__ == -1)) {
        util__Str_char___Str_char
                  ((Str_L_char_G_ *)
                   & cde_l2_dcf08f40_StaticMembers,"DummyValue_DO_NOT_USE");
        DAT_0097572c = 0;
        DAT_00975730 = 0;
        DAT_00975734 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975738,"Unused");
        _DAT_00975744 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975748,"Composition");
        _DAT_00975754 = 8;
        _DAT_00975758 = 0x10;
        _DAT_0097575c = 4;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975760,"Material");
        _DAT_0097576c = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975770,"Thickness_m");
        _DAT_0097577c = 4;
        _DAT_00975780 = 0x18;
        _DAT_00975784 = 8;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00975788,"double");
        _DAT_00975794 = 0;
        atexit( private__static_struct_util__ClassMember_const___cdecl_BarrelArmorSubModule__ReflectionInfoStruct_struct_BarrelArmorSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
        _Init_thread_footer(& cde_l2_0d09b3cf__thread_safe_static_guard_0__);
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
    } while (iVar3 <  cde_l2_1bc16441_Count);
  }
  return in_stack_00000004;
}





//==== 006301f0 StaticGetReflectionInfo_006301f0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct CoilgunModule__ReflectionInfoStruct_L_classCoilgunModule_G_ * __cdecl
   CoilgunModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_CoilgunModule_G_ * __cdecl CoilgunModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_acccc4ca__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_acccc4ca__thread_safe_static_guard_0__);
    if ( cde_l2_acccc4ca__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_fdced18e_ReflectionInfo) = &vftable_282;
      _Init_thread_footer(& cde_l2_acccc4ca__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_fdced18e_ReflectionInfo;
}





//==== 00630250 StaticGetReflectionInfo_00630250 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct SolenoidSubModule__ReflectionInfoStruct_L_classSolenoidSubModule_G_ * __cdecl
   SolenoidSubModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_SolenoidSubModule_G_ * __cdecl
SolenoidSubModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_5ebfaabf__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_5ebfaabf__thread_safe_static_guard_0__);
    if ( cde_l2_5ebfaabf__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_94ebd20c_ReflectionInfo) = &vftable_281;
      _Init_thread_footer(& cde_l2_5ebfaabf__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_94ebd20c_ReflectionInfo;
}





//==== 00630300 GetTypeName_00630300 ====


/* public: virtual class util__Str_L_char_G_ 
   BallisticTubeSubModule__ReflectionInfoStruct_struct_BallisticTubeSubModule___GetTypeName(void)const  */

Str_L_char_G_ * 
BallisticTubeSubModule__ReflectionInfoStruct_struct_BallisticTubeSubModule___GetTypeName
          (ReflectionInfoStruct_L_struct_BallisticTubeSubModule_G_ *this,
          Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"BallisticTubeSubModule");
  return __return_storage_ptr__;
}





//==== 00630320 GetMembers_00630320 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   BallisticTubeSubModule__ReflectionInfoStruct_struct_BallisticTubeSubModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
BallisticTubeSubModule__ReflectionInfoStruct_struct_BallisticTubeSubModule___GetMembers
          (ReflectionInfoStruct_L_struct_BallisticTubeSubModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_a88c069e__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_a88c069e__thread_safe_static_guard_0__),
      cde_l2_a88c069e__thread_safe_static_guard_0__ == -1)) {
     cde_l2_01ee9bdd_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_a88c069e__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_01ee9bdd_Count);
  iVar3 = 0;
  if (0 <  cde_l2_01ee9bdd_Count) {
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
    } while (iVar3 <  cde_l2_01ee9bdd_Count);
  }
  return in_stack_00000004;
}





//==== 00630460 GetMember_00630460 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   BallisticTubeSubModule__ReflectionInfoStruct_struct_BallisticTubeSubModule___GetMember(class
   util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
BallisticTubeSubModule__ReflectionInfoStruct_struct_BallisticTubeSubModule___GetMember__o2
          (ReflectionInfoStruct_L_struct_BallisticTubeSubModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_a1fabe9f__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_a1fabe9f__thread_safe_static_guard_0__),
      cde_l2_a1fabe9f__thread_safe_static_guard_0__ == -1)) {
     cde_l2_fe684159_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_a1fabe9f__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_fe684159_Count) {
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
LAB_006304ed:
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
          if (cVar3 == '\0') goto LAB_006304ed;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_fe684159_Count);
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





//==== 00630600 GetFactory_00630600 ====


/* public: virtual class util__Reflectable * (__cdecl*
   BallisticTubeSubModule__ReflectionInfoStruct_struct_BallisticTubeSubModule___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall BallisticTubeSubModule__ReflectionInfoStruct_struct_BallisticTubeSubModule___GetFactory
          (ReflectionInfoStruct_L_struct_BallisticTubeSubModule_G_ *this)

{
  return StaticFactory;
}





//==== 00630610 GetTypeName_00630610 ====


/* public: virtual class util__Str_L_char_G_ 
   SolidPropellantSubModule__ReflectionInfoStruct_struct_SolidPropellantSubModule___GetTypeName(void)const  */

Str_L_char_G_ * 
SolidPropellantSubModule__ReflectionInfoStruct_struct_SolidPropellantSubModule___GetTypeName
          (ReflectionInfoStruct_L_struct_SolidPropellantSubModule_G_ *this,
          Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"SolidPropellantSubModule");
  return __return_storage_ptr__;
}





//==== 00630630 GetMembers_00630630 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   SolidPropellantSubModule__ReflectionInfoStruct_struct_SolidPropellantSubModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
SolidPropellantSubModule__ReflectionInfoStruct_struct_SolidPropellantSubModule___GetMembers
          (ReflectionInfoStruct_L_struct_SolidPropellantSubModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_82bcc6e6__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_82bcc6e6__thread_safe_static_guard_0__),
      cde_l2_82bcc6e6__thread_safe_static_guard_0__ == -1)) {
     cde_l2_1176ee8e_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_82bcc6e6__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_1176ee8e_Count);
  iVar3 = 0;
  if (0 <  cde_l2_1176ee8e_Count) {
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
    } while (iVar3 <  cde_l2_1176ee8e_Count);
  }
  return in_stack_00000004;
}





//==== 00630770 GetMember_00630770 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   SolidPropellantSubModule__ReflectionInfoStruct_struct_SolidPropellantSubModule___GetMember(class
   util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
SolidPropellantSubModule__ReflectionInfoStruct_struct_SolidPropellantSubModule___GetMember__o2
          (ReflectionInfoStruct_L_struct_SolidPropellantSubModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_4e6b5dfc__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_4e6b5dfc__thread_safe_static_guard_0__),
      cde_l2_4e6b5dfc__thread_safe_static_guard_0__ == -1)) {
     cde_l2_ad99d72f_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_4e6b5dfc__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_ad99d72f_Count) {
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
LAB_006307fd:
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
          if (cVar3 == '\0') goto LAB_006307fd;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_ad99d72f_Count);
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





//==== 00630910 GetFactory_00630910 ====


/* public: virtual class util__Reflectable * (__cdecl*
   SolidPropellantSubModule__ReflectionInfoStruct_struct_SolidPropellantSubModule___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall SolidPropellantSubModule__ReflectionInfoStruct_struct_SolidPropellantSubModule___GetFactory
          (ReflectionInfoStruct_L_struct_SolidPropellantSubModule_G_ *this)

{
  return StaticFactory;
}





//==== 00630920 GetTypeName_00630920 ====


/* public: virtual class util__Str_L_char_G_ 
   ConventionalGunModule__ReflectionInfoStruct_class_ConventionalGunModule___GetTypeName(void)const
    */

Str_L_char_G_ * 
ConventionalGunModule__ReflectionInfoStruct_class_ConventionalGunModule___GetTypeName__o2
          (ReflectionInfoStruct_L_class_ConventionalGunModule_G_ *this,Str_L_char_G_ *__return_storage_ptr__
          )

{
  util__Str_char___Str_char(__return_storage_ptr__,"ConventionalGunModule");
  return __return_storage_ptr__;
}





//==== 00630940 GetMembers_00630940 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   ConventionalGunModule__ReflectionInfoStruct_class_ConventionalGunModule___GetMembers(void)const
    */

Darray_L_struct_util__ClassMember_G_ * 
ConventionalGunModule__ReflectionInfoStruct_class_ConventionalGunModule___GetMembers__o2
          (ReflectionInfoStruct_L_class_ConventionalGunModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_6d8c840a__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_6d8c840a__thread_safe_static_guard_0__),
      cde_l2_6d8c840a__thread_safe_static_guard_0__ == -1)) {
     cde_l2_5807c47e_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_6d8c840a__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_5807c47e_Count);
  iVar3 = 0;
  if (0 <  cde_l2_5807c47e_Count) {
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
    } while (iVar3 <  cde_l2_5807c47e_Count);
  }
  return in_stack_00000004;
}





//==== 00630a80 GetMember_00630a80 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   ConventionalGunModule__ReflectionInfoStruct_class_ConventionalGunModule___GetMember(class
   util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
ConventionalGunModule__ReflectionInfoStruct_class_ConventionalGunModule___GetMember__o2
          (ReflectionInfoStruct_L_class_ConventionalGunModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_d44a58c6__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_d44a58c6__thread_safe_static_guard_0__),
      cde_l2_d44a58c6__thread_safe_static_guard_0__ == -1)) {
     cde_l2_20bd4289_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_d44a58c6__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_20bd4289_Count) {
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
LAB_00630b0d:
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
          if (cVar3 == '\0') goto LAB_00630b0d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_20bd4289_Count);
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





//==== 00630c20 GetFactory_00630c20 ====


/* public: virtual class util__Reflectable * (__cdecl*
   ConventionalGunModule__ReflectionInfoStruct_class_ConventionalGunModule___GetFactory(void)const
   )(void) */

_func_Reflectable_ptr * 
__thiscall ConventionalGunModule__ReflectionInfoStruct_class_ConventionalGunModule___GetFactory__o2
          (ReflectionInfoStruct_L_class_ConventionalGunModule_G_ *this)

{
  return StaticFactory;
}





//==== 00630c30 MethodCallerConst__public__double___thiscall_BallisticTubeSubModule__GetBarrelMass_kg_void_const__ ====


/* public: static double __cdecl util__DelegateFactory_L_struct_BallisticTubeSubModule_Cdouble_G___MethodCallerConst_L__public_double__thiscall_BallisticTubeSubModule__GetBarrelMass_kg_void_const_G_(void const * const) */

double __cdecl
util__DelegateFactory_struct_BallisticTubeSubModule_double___MethodCallerConst__public__double___thiscall_BallisticTubeSubModule__GetBarrelMass_kg_void_const
          (void *param_1)

{
  double dVar1;
  float10 fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_14;
  
  if ((*(int *)((int)param_1 + 0x30) == 0) || (*(code **)((int)param_1 + 0x34) == (code *)0x0)) {
    dVar6 = 0.0;
  }
  else {
    fVar2 = (float10)(**(code **)((int)param_1 + 0x34))(*(int *)((int)param_1 + 0x30));
    dVar6 = (double)fVar2;
  }
  dVar1 = *(double *)((int)param_1 + 0x18);
  if ((*(int *)((int)param_1 + 0x30) == 0) || (*(code **)((int)param_1 + 0x34) == (code *)0x0)) {
    uStack_14 = 0.0;
  }
  else {
    fVar2 = (float10)(**(code **)((int)param_1 + 0x34))(*(int *)((int)param_1 + 0x30));
    uStack_14 = (double)fVar2;
  }
  if ((*(int *)((int)param_1 + 0x28) == 0) || (*(code **)((int)param_1 + 0x2c) == (code *)0x0)) {
    dVar3 = 0.0;
  }
  else {
    fVar2 = (float10)(**(code **)((int)param_1 + 0x2c))(*(int *)((int)param_1 + 0x28));
    dVar3 = (double)fVar2;
  }
  dVar3 = *(double *)((int)param_1 + 0x20) + dVar3;
  dVar3 = dVar3 + dVar3;
  if ((*(int *)((int)param_1 + 0x30) == 0) || (*(code **)((int)param_1 + 0x34) == (code *)0x0)) {
    dVar4 = 0.0;
  }
  else {
    fVar2 = (float10)(**(code **)((int)param_1 + 0x34))(*(int *)((int)param_1 + 0x30));
    dVar4 = (double)fVar2;
  }
  dVar8 = *(double *)((int)param_1 + 0x18);
  dVar4 = dVar8 + dVar4;
  if ((*(int *)((int)param_1 + 0x28) == 0) || (*(code **)((int)param_1 + 0x2c) == (code *)0x0)) {
    dVar7 = 0.0;
  }
  else {
    fVar2 = (float10)(**(code **)((int)param_1 + 0x2c))(*(int *)((int)param_1 + 0x28));
    dVar8 = *(double *)((int)param_1 + 0x18);
    dVar7 = (double)fVar2;
  }
  dVar5 = 0.0;
  dVar7 = *(double *)((int)param_1 + 0x20) + dVar7;
  dVar4 = dVar8 - dVar4 * 0.15;
  if ((*(int *)((int)param_1 + 0x28) != 0) && (*(code **)((int)param_1 + 0x2c) != (code *)0x0)) {
    fVar2 = (float10)(**(code **)((int)param_1 + 0x2c))(*(int *)((int)param_1 + 0x28));
    dVar8 = *(double *)((int)param_1 + 0x18);
    dVar5 = (double)fVar2;
  }
  return ((dVar7 * dVar7 * 3.141592653589793 * dVar4 +
          dVar3 * dVar3 * 3.141592653589793 * (uStack_14 + (dVar1 + dVar6) * 0.15)) -
         dVar5 * dVar5 * 3.141592653589793 * dVar8) *
         *(double *)(*(int *)((int)param_1 + 0x10) + 0x30);
}





//==== 00630c40 MethodCallerConst__public__double___thiscall_MassProjectileSubModule__GetBoreRadius_m_void_const__ ====


/* public: static double __cdecl util__DelegateFactory_L_class_MassProjectileSubModule_Cdouble_G___MethodCallerConst_L__public_double__thiscall_MassProjectileSubModule__GetBoreRadius_m_void_const_G_(void const * const) */

double __cdecl
util__DelegateFactory_class_MassProjectileSubModule_double___MethodCallerConst__public__double___thiscall_MassProjectileSubModule__GetBoreRadius_m_void_const
          (void *param_1)

{
  return *(double *)((int)param_1 + 0x18);
}





//==== 00630c50 MethodCallerConst__public__double___thiscall_BarrelArmorSubModule__GetMinimumOuterRadius_m_void_const__ ====


/* public: static double __cdecl util__DelegateFactory_L_struct_BarrelArmorSubModule_Cdouble_G___MethodCallerConst_L__public_double__thiscall_BarrelArmorSubModule__GetMinimumOuterRadius_m_void_const_G_(void const * const) */

double __cdecl
util__DelegateFactory_struct_BarrelArmorSubModule_double___MethodCallerConst__public__double___thiscall_BarrelArmorSubModule__GetMinimumOuterRadius_m_void_const
          (void *param_1)

{
  double dVar1;
  
  dVar1 = Material__GetYieldStrength_Pa(*(Material **)((int)param_1 + 0x24));
  dVar1 = *(double *)((int)param_1 + 0x50) / dVar1;
  libm_sse2_exp_precise(0.0);
  if ((!NAN(dVar1)) && ((NAN(dVar1) != (dVar1 == 0.0) || (!NAN(dVar1 / dVar1))))) {
    dVar1 = Material__GetYieldStrength_Pa(*(Material **)((int)param_1 + 0x24));
    dVar1 = *(double *)((int)param_1 + 0x50) / dVar1;
    libm_sse2_exp_precise(0.0);
    if (dVar1 <= 1e+15) {
      dVar1 = Material__GetYieldStrength_Pa(*(Material **)((int)param_1 + 0x24));
      dVar1 = *(double *)((int)param_1 + 0x50) / dVar1;
      libm_sse2_exp_precise(0.0);
      return *(double *)((int)param_1 + 0x28) * dVar1;
    }
  }
  return 0.0;
}





//==== 00630c60 MethodCallerConst__public__int___thiscall_ConventionalGunModule__GetBarrelCount_void_const__0__ ====


/* public: static int __cdecl util__DelegateFactory_L_class_ConventionalGunModule_Cint_G___MethodCallerConst_L__public_int__thiscall_ConventionalGunModule__GetBarrelCount_void_const_C0__G_(void const * const) */

int __cdecl
util__DelegateFactory_class_ConventionalGunModule_int___MethodCallerConst__public__int___thiscall_ConventionalGunModule__GetBarrelCount_void_const__0
          (void *param_1)

{
  if (*(char *)((int)param_1 + 0x3e0) != '\0') {
    return *(int *)((int)param_1 + 0x308);
  }
  return 1;
}





//==== 00630c70 MethodCallerConst__public__double___thiscall_ConventionalGunModule__GetChartBreechPressure_MPa_double_const__0__ ====


/* public: static double __cdecl util__DelegateFactory_L_class_ConventionalGunModule_Cdouble_Cdouble_G___MethodCallerConst_L__public_double__thiscall_ConventionalGunModule__GetChartBreechPressure_MPa_double_const_C0__G_(void const * const,double) */

double __cdecl
util__DelegateFactory_class_ConventionalGunModule_double_double___MethodCallerConst__public__double___thiscall_ConventionalGunModule__GetChartBreechPressure_MPa_double_const__0
          (void *param_1,double param_2)

{
  double dVar1;
  undefined4 in_stack_00000008;
  
  dVar1 = ConventionalGunModule__GetChartBreechPressure_MPa
                    ((ConventionalGunModule *)param_1,
                     (double)CONCAT44((*(uint32_t*)&(param_2)),in_stack_00000008));
}





//==== 00630c90 MethodCallerConst__public__struct_util__Range_double____thiscall_ConventionalGunModule__GetPressureChartXRanges_void_const__0__ ====


/* public: static struct util__Range_L_double_G_ __cdecl util__DelegateFactory_L_class_ConventionalGunModule_Cstructutil__Range_L_double_G__G___MethodCallerConst_L__public_struct_util__Range_L_double_G___thiscallConventionalGunModule__GetPressureChartXRanges_void_const__C0__G_(void const * const) */

Range_L_double_G_ * __cdecl
util__DelegateFactory_class_ConventionalGunModule_struct_util__Range_double_____MethodCallerConst__public__struct_util__Range_double____thiscall_ConventionalGunModule__GetPressureChartXRanges_void_const__0
          (Range_L_double_G_ *__return_storage_ptr__,void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Range_L_double_G_ *pRVar4;
  Range_L_double_G_ RStack_14;
  
  pRVar4 = ConventionalGunModule__GetPressureChartXRanges
                     ((ConventionalGunModule *)param_1,&RStack_14);
  uVar1 = *(undefined4 *)((int)&pRVar4->Lower + 4);
  uVar2 = *(undefined4 *)&pRVar4->Upper;
  uVar3 = *(undefined4 *)((int)&pRVar4->Upper + 4);
  *(undefined4 *)&__return_storage_ptr__->Lower = *(undefined4 *)&pRVar4->Lower;
  *(undefined4 *)((int)&__return_storage_ptr__->Lower + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Upper = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Upper + 4) = uVar3;
  return __return_storage_ptr__;
}





//==== 00630cb0 MethodCallerConst__public__struct_util__Range_double____thiscall_ConventionalGunModule__GetPressureChartYRanges_void_const__0__ ====


/* public: static struct util__Range_L_double_G_ __cdecl util__DelegateFactory_L_class_ConventionalGunModule_Cstructutil__Range_L_double_G__G___MethodCallerConst_L__public_struct_util__Range_L_double_G___thiscallConventionalGunModule__GetPressureChartYRanges_void_const__C0__G_(void const * const) */

Range_L_double_G_ * __cdecl
util__DelegateFactory_class_ConventionalGunModule_struct_util__Range_double_____MethodCallerConst__public__struct_util__Range_double____thiscall_ConventionalGunModule__GetPressureChartYRanges_void_const__0
          (Range_L_double_G_ *__return_storage_ptr__,void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Range_L_double_G_ *pRVar4;
  Range_L_double_G_ RStack_14;
  
  pRVar4 = ConventionalGunModule__GetPressureChartYRanges
                     ((ConventionalGunModule *)param_1,&RStack_14);
  uVar1 = *(undefined4 *)((int)&pRVar4->Lower + 4);
  uVar2 = *(undefined4 *)&pRVar4->Upper;
  uVar3 = *(undefined4 *)((int)&pRVar4->Upper + 4);
  *(undefined4 *)&__return_storage_ptr__->Lower = *(undefined4 *)&pRVar4->Lower;
  *(undefined4 *)((int)&__return_storage_ptr__->Lower + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Upper = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Upper + 4) = uVar3;
  return __return_storage_ptr__;
}





//==== 00630cd0 MethodCallerConst__public__double___thiscall_ConventionalGunModule__GetTotalBarrelRadius_m_void_const__0__ ====


/* public: static double __cdecl util__DelegateFactory_L_class_ConventionalGunModule_Cdouble_G___MethodCallerConst_L__public_double__thiscall_ConventionalGunModule__GetTotalBarrelRadius_m_void_const_C0__G_(void const * const) */

double __cdecl
util__DelegateFactory_class_ConventionalGunModule_double___MethodCallerConst__public__double___thiscall_ConventionalGunModule__GetTotalBarrelRadius_m_void_const__0
          (void *param_1)

{
  return *(double *)((int)param_1 + 0x1c8) + *(double *)((int)param_1 + 0x1b0);
}





//==== 00630ce0 ConventionalGunModule ====

/* public: __thiscall ConventionalGunModule__ConventionalGunModule(void) */

ConventionalGunModule * __thiscall
ConventionalGunModule__ConventionalGunModule(ConventionalGunModule *this)

{
  double *pdVar1;
  
  Module__Module((Module *)this);
  *(undefined1 *)&this->_pad_0x78_30 = 0;
  pdVar1 = &(this->Barrel).Thickness_m;
  this->_pad_0x70_28 = 0;
  this->_pad_0x74_29 = 0;
  this->_pad_0x80_32 = 0;
  this->_pad_0x84_33 = 0;
  this->_pad_0x88_34 = 0;
  this->_pad_0x8c_35 = 0;
  this->_pad_0x80_32 = (int)&vftable_166;
  this->_pad_0x84_33 = 0;
  this->_pad_0x88_34 = 0;
  this->_pad_0x8c_35 = 0;
  this->_pad_0x90_36 = 0;
  this->_pad_0x94_37 = 0;
  *(undefined1 *)&((this->ConventionalGunModuleMemoizationHandlerInstance).ResetFunctions._pad_0x0_0) = 0;
  (this->ConventionalGunModuleMemoizationHandlerInstance).ResetFunctions.Size = 0;
  (this->ConventionalGunModuleMemoizationHandlerInstance).ResetFunctions.Capacity = 0;
  *(undefined1 *)&(this->GetCentralBallisticParameter_MemoizedValue).Data = 0;
  this->_pad_0x0_0 = (int)&vftable_for_EditorReflectable__30;
  this->_pad_0x34_13 = (int)&vftable_for_util__RTTIBaseClass__29;
  *(undefined4 *)&(this->GetChargeBurnoutLength_m_MemoizedValue).Data = 0;
  *(undefined4 *)((int)&(this->GetChargeBurnoutLength_m_MemoizedValue).Data + 4) = 0;
  *(undefined4 *)&(this->GetChargeBurnoutLength_m_MemoizedValue).IsValidData = 0;
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetChargeBurnoutLength_m_MemoizedValue)) + 0xc)) = 0;
*(uint32_t *)&((this->GetChargeBurnoutLength_m_MemoizedValue).Data) = (uint32_t)(uintptr_t)(&vftable_109);
  *(undefined4 *)((int)&(this->GetChargeBurnoutLength_m_MemoizedValue).Data + 4) = 0;
  *(undefined4 *)&(this->GetChargeBurnoutLength_m_MemoizedValue).IsValidData = 0;
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetChargeBurnoutLength_m_MemoizedValue)) + 0xc)) = 0;
  (this->GetPeakPressure_Pa_MemoizedValue).Data = 0.0;
  (this->GetPeakPressure_Pa_MemoizedValue).IsValidData = false;
  (this->GetEnergyLostToGasExpansion_J_MemoizedValue).Data = 0.0;
  (this->GetEnergyLostToGasExpansion_J_MemoizedValue).IsValidData = false;
  (this->GetGunFlashColor_MemoizedValue).Data.X = 0.0;
  (this->GetGunFlashColor_MemoizedValue).Data.Y = 0.0;
  *(undefined1 *)&(this->GetGunFlashColor_MemoizedValue).Data.Z = 0;
  (this->GetGasExpansionPlume_MemoizedValue).Data.Products._pad_0x0_0 = 0;
  (this->GetGasExpansionPlume_MemoizedValue).Data.Products.Data = (MaterialConstituent *)0x0;
  *(undefined1 *)&(this->GetGasExpansionPlume_MemoizedValue).Data.Products.Size = 0;
  *(undefined4 *)&(this->GetGasExpansionPlume_MemoizedValue).Data.StartRadius_m = 0;
  *(undefined4 *)((int)&(this->GetGasExpansionPlume_MemoizedValue).Data.StartRadius_m + 4) = 0;
  *(undefined4 *)&(this->GetGasExpansionPlume_MemoizedValue).Data.StartTemperature_K = 0;
  *(undefined1 *)((int)&(this->GetGasExpansionPlume_MemoizedValue).Data.StartTemperature_K + 4) = 0;
  *(undefined ** *)&(this->GetGasExpansionPlume_MemoizedValue).Data.ExhaustVelocity_km__s = (undefined **)(&vftable_15);
  *(undefined4 *)((int)&(this->GetGasExpansionPlume_MemoizedValue).Data.ExhaustVelocity_km__s + 4) =
       0;
  *(undefined4 *)&(this->GetGasExpansionPlume_MemoizedValue).Data.MassFlowRate_kg__s = 0;
  *(undefined4 *)((int)&(this->GetGasExpansionPlume_MemoizedValue).Data.MassFlowRate_kg__s + 4) = 0;
  *(undefined4 *)&(this->GetGasExpansionPlume_MemoizedValue).Data.DisableShimmer = 0;
  *(undefined4 *)&(*(undefined4 *)((char *)&((this->GetGasExpansionPlume_MemoizedValue).Data) + 0x34)) = 0;
  *(undefined4 *)&(this->GetGasExpansionPlume_MemoizedValue).IsValidData = 0;
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetGasExpansionPlume_MemoizedValue)) + 0x3c)) = 0;
  *(undefined1 *)&(this->Barrel).Composition = 0;
  (this->Barrel)._pad_0x0_0 = 0;
  (this->Barrel)._pad_0x4_1 = 0;
  (this->Barrel)._pad_0x8_2 = 0;
  (this->Barrel)._pad_0xc_3 = 0;
  *(undefined1 *)&(this->Barrel).Length_m = 0;
  memset(pdVar1,0,0x40);
  *(undefined4 *)((int)&(this->Barrel).Thickness_m + 4) = 0;
  *(undefined4 *)&(this->Barrel).CachedBoreRadius_m = 0;
  *(undefined4 *)((int)&(this->Barrel).CachedBoreRadius_m + 4) = 0;
  *(undefined ***)pdVar1 = &vftable_292;
  (this->BarrelProperties).CachedComposition = (Material *)0x0;
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->BarrelProperties)) + 0x14)) = 0;
  *(undefined4 *)&(this->BarrelProperties).CachedBoreRadius_m = 0;
  *(undefined4 *)((int)&(this->BarrelProperties).CachedBoreRadius_m + 4) = 0;
  *(undefined4 *)&(this->BarrelProperties).CachedSize_m.Radius = 0;
  *(undefined4 *)((int)&(this->BarrelProperties).CachedSize_m.Radius + 4) = 0;
  pdVar1 = &(this->BarrelProperties).CachedSize_m.Height;
  memset(pdVar1,0,0x90);
  *(undefined4 *)((int)&(this->BarrelProperties).CachedSize_m.Height + 4) = 0;
  *(undefined4 *)&(this->BarrelProperties).CachedMass_kg = 0;
  *(undefined4 *)((int)&(this->BarrelProperties).CachedMass_kg + 4) = 0;
  *(undefined ***)pdVar1 = &vftable_283;
  *(undefined4 *)&(this->BarrelProperties).CachedMantletSize_m.Height = 0;
  *(undefined4 *)((int)&(this->BarrelProperties).CachedMantletSize_m.Height + 4) = 0;
  *(undefined4 *)&(this->BarrelProperties).CachedPeakTemperatureJump_K.IsValidData = 0;
  *(undefined4 *)&(*(undefined4 *)((char *)&((this->BarrelProperties).CachedPeakTemperatureJump_K) + 0xc)) = 0;
  *(undefined4 *)&(this->BarrelProperties).CachedMantletSize_m.Radius = 0;
  *(undefined4 *)((int)&(this->BarrelProperties).CachedMantletSize_m.Radius + 4) = 0;
  *(undefined1 *)&(this->Propellant).Mass_kg = 0;
  *(undefined8 *)&(this->Propellant).Composition = 0;
  *(undefined4 *)&(this->Propellant).GrainRadius_m = 0;
  *(undefined4 *)((int)&(this->Propellant).GrainRadius_m + 4) = 0;
  (this->Projectile)._pad_0x0_0 = 0;
  (this->Projectile)._pad_0x4_1 = 0;
  (this->Projectile).Composition = (Material *)0x0;
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->Projectile)) + 0x14)) = 0;
  *(undefined4 *)&(this->Projectile).BoreRadius_m = 0;
  *(undefined4 *)((int)&(this->Projectile).BoreRadius_m + 4) = 0;
  *(undefined4 *)&(this->Projectile).Mass_kg = 0;
  *(undefined4 *)((int)&(this->Projectile).Mass_kg + 4) = 0;
  (this->Projectile).Tracer = (Material *)0x0;
  (this->Projectile).ShipClass__Payload = (CraftBlueprint *)0x0;
  *(undefined4 *)&(this->Projectile).CachedMassStartsOutBeforeBarrel = 0;
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->Projectile)) + 0x34)) = 0;
  (this->Projectile).CachedBarrelLength_m = 0.0;
  *(undefined4 *)((int)&(this->Projectile).BoreRadius_m + 4) = 0;
  *(undefined4 *)&(this->Projectile).Mass_kg = 0;
  *(undefined4 *)((int)&(this->Projectile).Mass_kg + 4) = 0;
  *(undefined ** *)&(this->Projectile).BoreRadius_m = &vftable_293;
  MassProjectileSubModule__MassProjectileSubModule
            ((MassProjectileSubModule *)&(this->Projectile).CachedPropellantComposition);
  *(undefined4 *)&(this->Turret).Data.field1_0x1 = 0;
  *(undefined4 *)&(this->Turret).Data.field0_0x0 = 0;
  *(undefined4 *)&(this->Turret).Data.field2_0x2 = 0;
  *(undefined ** *)&(this->Turret).Data.field1_0x1 = &vftable_211;
  *(undefined8 *)&(this->Turret).Data.field2_0x2 = 0;
  TurretSubModule__TurretSubModule((TurretSubModule *)&(this->Turret).Data.field4_0x4);
  *(undefined ** *)&(this->Turret).Data.field4_0x4 = &vftable_237;
  *(undefined1 *)&(this->BarrelModel).Pointer = 0;
  AmmoBaySubModule__AmmoBaySubModule((AmmoBaySubModule *)(this + 1));
  *(undefined1 *)&this[1].ConventionalGunModuleMemoizationHandlerInstance.ResetFunctions._pad_0x0_0
       = 0;
  this[1].ConventionalGunModuleMemoizationHandlerInstance.ResetFunctions.Size = 0;
  this[1].ConventionalGunModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
  *(undefined4 *)&this[1].GetCentralBallisticParameter_MemoizedValue.Data = 0;
  *(undefined4 *)((int)&this[1].GetCentralBallisticParameter_MemoizedValue.Data + 4) = 0;
  *(undefined4 *)&this[1].GetCentralBallisticParameter_MemoizedValue.IsValidData = 0;
  *(undefined4 *)((char *)&this[1].GetCentralBallisticParameter_MemoizedValue + 0xc) = 0;
  *(undefined4 *)&this[1].GetChargeBurnoutLength_m_MemoizedValue.Data = 0;
  *(undefined4 *)((int)&this[1].GetChargeBurnoutLength_m_MemoizedValue.Data + 4) = 0;
  return this;
}

//==== 00630ff0 ConventionalGunModule_00630ff0 ====

/* public: virtual __thiscall ConventionalGunModule___ConventionalGunModule(void) */

void __thiscall ConventionalGunModule___ConventionalGunModule(ConventionalGunModule *this)

{
  ReferenceController *pRVar1;
  void *pvVar2;
  
  pRVar1 = *(ReferenceController **)((int)&this[1].GetChargeBurnoutLength_m_MemoizedValue.Data + 4);
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  pRVar1 = (*(ReferenceController **)((char *)&(this[1].GetCentralBallisticParameter_MemoizedValue) + 0xc));
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  pRVar1 = *(ReferenceController **)
            ((int)&this[1].GetCentralBallisticParameter_MemoizedValue.Data + 4);
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  util__SharedPtr_struct_GameColorModel____SharedPtr_struct_GameColorModel((SharedPtr_L_GameColorModel_G_ *)
             &this[1].ConventionalGunModuleMemoizationHandlerInstance.ResetFunctions.Size);
  AmmoInfo___AmmoInfo((AmmoInfo *)&this[1]._pad_0x20_8);
  this[1]._pad_0x0_0 = (int)&vftable_5;
  if ((void *)this[1]._pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this[1]._pad_0x4_1);
    this[1]._pad_0x4_1 = 0;
  }
  TurretSubModule___TurretSubModule((TurretSubModule *)&(this->Turret).Data.field4_0x4);
  *(undefined ** *)&(this->Turret).Data.field1_0x1 = &vftable_5;
  pvVar2 = *(void * *)&(this->Turret).Data.field1_0x1;
  if (pvVar2 != (void *)0x0) {
    port_op_delete(pvVar2);
    *(undefined4 *)&(this->Turret).Data.field1_0x1 = 0;
  }
  (this->Projectile).CachedPropellantComposition = (Material *)&vftable_5;
  pvVar2 = *(void **)((char *)&(this->Projectile) + 0x44);
  if (pvVar2 != (void *)0x0) {
    port_op_delete(pvVar2);
    *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->Projectile)) + 0x44)) = 0;
  }
  *(undefined ** *)&(this->Projectile).BoreRadius_m = &vftable_5;
  pvVar2 = *(void **)((int)&(this->Projectile).BoreRadius_m + 4);
  if (pvVar2 != (void *)0x0) {
    port_op_delete(pvVar2);
    *(undefined4 *)((int)&(this->Projectile).BoreRadius_m + 4) = 0;
  }
  *(undefined ** *)&(this->BarrelProperties).CachedSize_m.Height = &vftable_5;
  pvVar2 = *(void **)((int)&(this->BarrelProperties).CachedSize_m.Height + 4);
  if (pvVar2 != (void *)0x0) {
    port_op_delete(pvVar2);
    *(undefined4 *)((int)&(this->BarrelProperties).CachedSize_m.Height + 4) = 0;
  }
  *(undefined ** *)&(this->Barrel).Thickness_m = &vftable_5;
  pvVar2 = *(void **)((int)&(this->Barrel).Thickness_m + 4);
  if (pvVar2 != (void *)0x0) {
    port_op_delete(pvVar2);
    *(undefined4 *)((int)&(this->Barrel).Thickness_m + 4) = 0;
  }
  pvVar2 = *(void **)((int)&(this->GetGasExpansionPlume_MemoizedValue).Data.ExhaustVelocity_km__s +
                     4);
  *(undefined ** *)&(this->GetGasExpansionPlume_MemoizedValue).Data.ExhaustVelocity_km__s = (undefined **)(&vftable_15);
  if (pvVar2 != (void *)0x0) {
    port_op_delete(pvVar2);
  }
  *(undefined4 *)((int)&(this->GetGasExpansionPlume_MemoizedValue).Data.ExhaustVelocity_km__s + 4) =
       0;
  *(undefined ** *)&(this->GetGasExpansionPlume_MemoizedValue).Data.ExhaustVelocity_km__s = (undefined **)(&vftable);
  pvVar2 = *(void **)((int)&(this->GetChargeBurnoutLength_m_MemoizedValue).Data + 4);
*(uint32_t *)&((this->GetChargeBurnoutLength_m_MemoizedValue).Data) = (uint32_t)(uintptr_t)(&vftable_109);
  if (pvVar2 != (void *)0x0) {
    port_op_delete(pvVar2);
  }
  *(undefined4 *)((int)&(this->GetChargeBurnoutLength_m_MemoizedValue).Data + 4) = 0;
  (this->GetChargeBurnoutLength_m_MemoizedValue).Data = cde_ptr_as_double((void *)&vftable);
  this->_pad_0x80_32 = (int)&vftable_166;
  if ((void *)this->_pad_0x84_33 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x84_33);
  }
  this->_pad_0x84_33 = 0;
  this->_pad_0x80_32 = (int)&vftable;
  this->_pad_0x0_0 = (int)&vftable_for_EditorReflectable__3;
  this->_pad_0x34_13 = (int)&vftable_for_util__RTTIBaseClass__3;
  Darray_L_util__SharedPtr_L_GameModel_G___G___dtor((Darray_L_util__SharedPtr_L_GameModel_G___G_ *)&this->_pad_0x58_22);
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

//==== 006311d0 scalar_deleting_destructor_006311d0 ====


/* public: virtual void * __thiscall ConventionalGunModule:: 0 scalardeletingdestructor(unsigned
   int) */

void * __thiscall
ConventionalGunModule___scalar_deleting_destructor(ConventionalGunModule *this,uint param_1)

{
  ConventionalGunModule___ConventionalGunModule(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x4a8);
  }
  return this;
}





//==== 00632340 BurnsAllPropellant ====


/* public: bool __thiscall ConventionalGunModule__BurnsAllPropellant(void)const  */

bool __thiscall ConventionalGunModule__BurnsAllPropellant(ConventionalGunModule *this)

{
  double dVar1;
  
  GetChargeBurnoutLength_m_Memoize(this);
  if ((this->GetEnergyLostToGasExpansion_J_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar1 = (this->GetEnergyLostToGasExpansion_J_MemoizedValue).Data;
  if ((NAN(dVar1) != (dVar1 == 0.0)) || (!NAN(dVar1 / dVar1))) {
    GetChargeBurnoutLength_m_Memoize(this);
    if ((this->GetEnergyLostToGasExpansion_J_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if ((this->GetEnergyLostToGasExpansion_J_MemoizedValue).Data <=
        *(double *)&this->BarrelProperties) {
      return true;
    }
  }
  return false;
}





//==== 006323e0 DestroyModels_006323e0 ====

/* public: virtual void __thiscall ConventionalGunModule__DestroyModels(void) */

void __thiscall ConventionalGunModule__DestroyModels(ConventionalGunModule *this)

{
  ReferenceController *this_00;
  bool bVar1;
  ReferenceControllerRegistry *this_01;
  VertexBufferObjectInterface *this_02;
  
  Module__DestroyModels((Module *)this);
  this_00 = (ReferenceController *)
            this[1].ConventionalGunModuleMemoizationHandlerInstance.ResetFunctions.Capacity;
  this_02 = (VertexBufferObjectInterface *)
            this[1].ConventionalGunModuleMemoizationHandlerInstance.ResetFunctions.Size;
  this[1].ConventionalGunModuleMemoizationHandlerInstance.ResetFunctions.Size = 0;
  this[1].ConventionalGunModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
  if (this_00 != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__ReleaseStrongReference(this_00);
    if (bVar1) {
      if (this_02 != (VertexBufferObjectInterface *)0x0) {
        this_02[1]._pad_0x0_0 = (int)&vftable_10;
        if ((void *)this_02[1].Type != (void *)0x0) {
          port_op_delete((void *)this_02[1].Type);
        }
        this_02[1].Type = 0;
        this_02[1]._pad_0x0_0 = (int)&vftable;
        VertexBufferObjectInterface___VertexBufferObjectInterface(this_02);
        port_op_delete(this_02,0xa0);
      }
      this_01 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(this_01,this_02);
    }
  }
  return;
}

//==== 00632be0 GenerateDesignUI_00632be0 ====

/* WARNING: Removing unreachable block (ram,0x00633513) */
/* WARNING: Removing unreachable block (ram,0x00633520) */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual struct UIWidget * __thiscall ConventionalGunModule__GenerateDesignUI(class
   Manager *)const  */

UIWidget * __thiscall
ConventionalGunModule__GenerateDesignUI(ConventionalGunModule *this,Manager *param_1)

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
      fVar50 = 9.107564e-39;
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
      in_stack_fffff82c = (void *)0x632c6b;
      UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff834,&local_2d8);
      in_stack_fffff830 = (_func___cdecl_bool_void_ptr *)0x632c72;
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
      pUVar23->_pad_0x0_0 = (int)&vftable_295;
      pUVar23[1]._pad_0x0_0 = (int)this;
      UIAttributes___UIAttributes(&local_2d8);
    }
    local_60 = (LineGraph *)(uintptr_t)(port_op_new(0x278));
    if (local_60 == (LineGraph *)0x0) {
      local_8 = (UIWidget *)0x0;
    }
    else {
      util__Str_char___Str_char(&local_f8,"MPa");
      util__Str_char___Str_char(&local_e0,"ConventionalGunPressureChart YAxis");
      util__Str_char___Str_char(&local_ec,"m");
      util__Str_char___Str_char(&local_d4,"ConventionalGunPressureChart XAxis");
      util__Str_char___Str_char(&local_c8,"ConventionalGunPressureChart Title");
      *(uint32_t *)&local_20 = (uint32_t)(uintptr_t)((undefined4 *)&stack0xfffff86c);
      pcStack_44 = util__DelegateFactory_L_ConventionalGunModule_Cutil__Range_L_double_G___G___MethodCallerConst_L__public__struct_util__Range_L_double_G____thiscall_ConventionalGunModule__GetPressureChartYRanges_void_const__C0__G_
      ;
      local_a0.Length =
           (int)util__DelegateFactory_L_ConventionalGunModule_Cutil__Range_L_double_G___G___MethodCallerConst_L__public__struct_util__Range_L_double_G____thiscall_ConventionalGunModule__GetPressureChartXRanges_void_const__C0__G_
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
      in_stack_fffff860 = (void *)0x632d97;
      pLVar24 = (LocStr *)util__LocStr__LocStr((LocStr *)local_110,&local_c8,&local_6c);
      pSVar26 = util__LocStr__operator__o3(pLVar24);
      local_1c = 0;
      local_18 = (void *)0x0;
      util__Str_char___Str_char(&SStack_14,pSVar26);
      puVar27 = (undefined4 *)LineGraph__Args__Args__o3(local_3e8);
      *puVar27 = local_1c;
      puVar27[1] = (undefined4)(uintptr_t)(local_18);
      util__Str_char___operator__o8((Str_L_char_G_ *)(puVar27 + 2),&SStack_14);
      if ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_14.Data !=
          (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      local_1c = 0;
      local_18 = (void *)0x0;
      util__Str_char___Str_char(&SStack_14,pSVar25);
      puVar27[5] = local_1c;
      puVar27[6] = (undefined4)(uintptr_t)(local_18);
      util__Str_char___operator__o8((Str_L_char_G_ *)(puVar27 + 7),&SStack_14);
      if ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_14.Data !=
          (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      local_1c = 0;
      local_18 = (void *)0x0;
      util__Str_char___Str_char(&SStack_14,&local_ec);
      puVar27[10] = local_1c;
      puVar27[0xb] = (undefined4)(uintptr_t)(local_18);
      util__Str_char___operator__o8((Str_L_char_G_ *)(puVar27 + 0xc),&SStack_14);
      if ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_14.Data !=
          (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      local_1c = 0;
      local_18 = (void *)0x0;
      util__Str_char___Str_char(&SStack_14,(Str_L_char_G_ *)local_8);
      puVar27[0xf] = local_1c;
      puVar27[0x10] = (undefined4)(uintptr_t)(local_18);
      util__Str_char___operator__o8((Str_L_char_G_ *)(puVar27 + 0x11),&SStack_14);
      if ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_14.Data !=
          (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      local_1c = 0;
      local_18 = (void *)0x0;
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
      puVar27[0x28] = (undefined4)(uintptr_t)(util__DelegateFactory_L_ConventionalGunModule_Cdouble_Cdouble_G___MethodCallerConst_L__public__double___thiscall_ConventionalGunModule__GetChartBreechPressure_MPa_double_const__C0__G_);
      *(ulonglong *)(puVar27 + 0x1e) = CONCAT44(fStack_88,fStack_8c);
      pSVar25 = (Str_L_char_G_ *)(local_20 + 2);
      *(undefined1 *)(puVar27 + 0x26) = 1;
      puVar27[0x20] = local_50.Length;
      puVar27[0x21] = (undefined4)(uintptr_t)(pcStack_44);
      puVar27[0x22] = (undefined4)uStack_40;
      puVar27[0x23] = (*(uint32_t*)((char*)&(uStack_40)+4));
      *(undefined8 *)(puVar27 + 0x24) = uStack_38;
      *local_20 = *puVar27;
      puVar22[1] = (undefined4)(uintptr_t)(puVar27[1]);
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
      in_stack_fffff864 = (_func___cdecl_bool_void_ptr *)0x6330d3;
      util__Darray_L_Body__RadialImpulse_G___Darray_L_Body__RadialImpulse_G_
                ((Darray_L_Body__RadialImpulse_G_ *)(puVar22 + 0x3c),in_stack_fffff868);
      puVar22[0x40] = puVar27[0x40];
      puVar22[0x41] = puVar27[0x41];
      puVar22[0x42] = puVar27[0x42];
      puVar22[0x43] = puVar27[0x43];
      iVar28 = (int)(uintptr_t)util__Color__Color(&local_160,Preset__Green,1.0);
      local_ac = (void *)0x0;
      local_a8 = (_func___cdecl_Color_void_ptr *)0x0;
      *(uint32_t *)&local_a4 = (uint32_t)(uintptr_t)(&vftable_5);
      util__Str_char___Str_char(&local_a0,(Str_L_char_G_ *)(iVar28 + 4));
      fStack_94 = *(float *)(iVar28 + 0x10);
      fStack_90 = *(float *)(iVar28 + 0x14);
      fStack_8c = *(float *)(iVar28 + 0x18);
      fStack_88 = *(float *)(iVar28 + 0x1c);
      *(uint32_t *)&local_a4 = (uint32_t)(uintptr_t)(&vftable_59);
      local_18 = (void *)0x0;
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
      (pUVar29->FillProportion).Getter.Callee = (void *)0x0;
      (pUVar29->FillProportion).Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0
      ;
      *(undefined4 *)&(pUVar29->FillProportion).Value.X = 0;
      *(undefined4 *)((int)&(pUVar29->FillProportion).Value.X + 4) = 0x3ff00000;
      local_58 = local_a8;
      (pUVar29->FillProportion).Value.Y = 0.0;
      *(uint32_t *)&local_54 = (uint32_t)(uintptr_t)(&vftable_5);
      util__Str_char___Str_char(&local_50,&local_a0);
      pcStack_44 = *(code *)&(local_24);
      (pUVar29->ForegroundColor).Data.Getter.Callee = local_5c;
      (pUVar29->ForegroundColor).Data.Getter.CallbackFunction = local_58;
      uStack_40 = CONCAT44(local_20,local_28);
      *(uint32_t *)&local_54 = (uint32_t)(uintptr_t)(&vftable_59);
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
    iStack_808 = 0x6333b3;
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

//==== 00633640 GenerateModels_00633640 ====


/* public: virtual void __thiscall ConventionalGunModule__GenerateModels(void) */

void __thiscall ConventionalGunModule__GenerateModels(ConventionalGunModule *this)

{
  undefined8 stack0xfffffffc;
  VertexBufferObject *this_00;
  TransformStack TStack_a;
  TransformStack TStack_9;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  Module__GenerateModels((Module *)this);
  Graphics__TransformStack__TransformStack(&TStack_a,GraphicsTransformFlag__ClearToIdentity);
  BuildExhaustPlumeModel(this);
  if ((this[1].ConventionalGunModuleMemoizationHandlerInstance.ResetFunctions.Size != 0) &&
     (this[1].ConventionalGunModuleMemoizationHandlerInstance.ResetFunctions.Capacity != 0)) {
    Graphics__TransformStack__TransformStack(&TStack_9,GraphicsTransformFlag__ClearToIdentity);
    this_00 = GameModel__GetVertexObject
                        ((GameModel *)
                         this[1].ConventionalGunModuleMemoizationHandlerInstance.ResetFunctions.Size
                        );
    VertexBufferObjectInterface__Generate((VertexBufferObjectInterface *)this_00);
    Graphics__TransformStack___TransformStack(&TStack_9);
  }
  Graphics__TransformStack___TransformStack(&TStack_a);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00633cd0 GetAmmoInfo_00633cd0 ====


/* public: virtual class util__Maybe_L_structAmmoInfo_G_ __thiscall
   ConventionalGunModule__GetAmmoInfo(void)const  */

Str_L_char_G_ * __thiscall ConventionalGunModule__GetAmmoInfo(ConventionalGunModule *this)

{
  LocStr *this_00;
  Str_L_char_G_ *in_stack_00000004;
  void *apvStack_34 [3];
  void *pvStack_28;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
  util__Str_char___Str_char(&SStack_1c,"Weapon Cannon");
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_34,&SStack_1c,&SStack_10);
  util__LocStr__operator__o3(this_00);
  MassProjectileSubModule__GetAmmoInfo
            ((MassProjectileSubModule *)&(this->Projectile).CachedPropellantComposition,
             in_stack_00000004);
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
  return in_stack_00000004;
}





//==== 00633d90 GetArmorCarvingRadius_m_00633d90 ====


/* public: virtual class util__Maybe_L_double_G_ 
   ConventionalGunModule__GetArmorCarvingRadius_m(void)const  */

Maybe_L_double_G_ * 
ConventionalGunModule__GetArmorCarvingRadius_m
          (ConventionalGunModule *this,Maybe_L_double_G_ *__return_storage_ptr__)

{
  double dVar1;
  
  if ((char)((this->BarrelModel).Pointer == '\0')){
    dVar1 = BarrelArmorSubModule__GetArmorRadius_m
                      ((BarrelArmorSubModule *)&(this->BarrelProperties).CachedSize_m.Height);
  }
  else {
    if ((char)((this->BarrelModel).Pointer == '\0')){
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar1 = TurretSubModule__GetOuterRadius_m((TurretSubModule *)&(this->Turret).Data.field4_0x4);
  }
  __return_storage_ptr__->Data = dVar1;
  __return_storage_ptr__->IsValidData = true;
  return __return_storage_ptr__;
}





//==== 00633e00 GetAverageBurnRateCoefficient_m2__s_kg ====


/* public: double __thiscall
   ConventionalGunModule__GetAverageBurnRateCoefficient_m2__s_kg(void)const  */

double __thiscall
ConventionalGunModule__GetAverageBurnRateCoefficient_m2__s_kg(ConventionalGunModule *this)

{
  double dVar1;
  double dVar2;
  Material *this_00;
  MaterialConstituent MVar3;
  Darray_L_struct_MaterialConstituent_G_ *pDVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 in_stack_ffffffb8;
  undefined4 uVar13;
  undefined4 uVar14;
  void *pvStack_30;
  
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  this_00 = (this->Projectile).Tracer;
  Material__GetDecompositionReaction_Memoize(this_00);
  if ((char)this_00[1].Elements.Capacity == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  (*(uint32_t*)((char*)&(MVar3)+4)) = in_stack_ffffffb8;
  MVar3.Type = (Material *)uVar12;
  MVar3.UnitlessFraction = uVar13;
  (*(uint32_t *)((char *)&(MVar3.UnitlessFraction) + 4)) = uVar14;
  dVar5 = ChemicalReaction__GetLaminarFlameSpeed_m__s
                    ((ChemicalReaction *)this_00[1].Elements.Size,MVar3);
  pDVar4 = (Darray_L_struct_MaterialConstituent_G_ *)
           Material__GetDecompositionProductsByMassPercent((this->Projectile).Tracer);
  dVar6 = Material__GetMixtureSpecificGasConstant_J__kg_K(pDVar4);
  if (pvStack_30 != (void *)0x0) {
    port_op_delete(pvStack_30);
  }
  dVar7 = Material__GetAdiabaticFlameTemperature_K((this->Projectile).Tracer);
  dVar8 = MassProjectileSubModule__GetBoreArea_m2
                    ((MassProjectileSubModule *)&(this->Projectile).CachedPropellantComposition);
  dVar9 = MassProjectileSubModule__GetPropellantLength_m
                    ((MassProjectileSubModule *)&(this->Projectile).CachedPropellantComposition);
  dVar1 = *(double *)&(this->Projectile).CachedMassStartsOutBeforeBarrel;
  dVar10 = MassProjectileSubModule__GetExitMass_kg
                     ((MassProjectileSubModule *)&(this->Projectile).CachedPropellantComposition);
  dVar2 = *(double *)&(this->Projectile).CachedMassStartsOutBeforeBarrel;
  dVar11 = MassProjectileSubModule__GetExitMass_kg
                     ((MassProjectileSubModule *)&(this->Projectile).CachedPropellantComposition);
  return dVar5 / (((dVar2 / (dVar10 + dVar10) + 1.0) /
                  (*(double *)&(this->Projectile).CachedMassStartsOutBeforeBarrel / (dVar11 * 3.0) +
                  1.0)) * ((dVar1 * dVar7 * dVar6) / (dVar9 * dVar8)));
}





//==== 00633f60 PreloadedAmmoCount ====


/* public: virtual int __thiscall ConventionalGunModule__PreloadedAmmoCount(void)const  */

int __thiscall ConventionalGunModule__PreloadedAmmoCount(ConventionalGunModule *this)

{
  if ((char)((this->BarrelModel).Pointer != '\0')){
    return (int)((this->Turret).Data.field0_0x0);
  }
  return 1;
}





//==== 00633f80 GetBarrelMass_kg_00633f80 ====


/* public: double __thiscall BallisticTubeSubModule__GetBarrelMass_kg(void)const  */

double __thiscall BallisticTubeSubModule__GetBarrelMass_kg(BallisticTubeSubModule *this)

{
  double dVar1;
  code *pcVar2;
  float10 fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dStack_14;
  
  if ((*(int *)&this->CachedBreechThickness_m == 0) ||
     (pcVar2 = *(code **)((int)&this->CachedBreechThickness_m + 4), pcVar2 == (code *)0x0)) {
    dVar7 = 0.0;
  }
  else {
    fVar3 = (float10)(*pcVar2)(*(int *)&this->CachedBreechThickness_m);
    dVar7 = (double)fVar3;
  }
  dVar1 = this->Length_m;
  if ((*(int *)&this->CachedBreechThickness_m == 0) ||
     (pcVar2 = *(code **)((int)&this->CachedBreechThickness_m + 4), pcVar2 == (code *)0x0)) {
    dStack_14 = 0.0;
  }
  else {
    fVar3 = (float10)(*pcVar2)(*(int *)&this->CachedBreechThickness_m);
    dStack_14 = (double)fVar3;
  }
  if ((*(int *)&this->CachedBoreRadius_m == 0) ||
     (pcVar2 = *(code **)((int)&this->CachedBoreRadius_m + 4), pcVar2 == (code *)0x0)) {
    dVar4 = 0.0;
  }
  else {
    fVar3 = (float10)(*pcVar2)(*(int *)&this->CachedBoreRadius_m);
    dVar4 = (double)fVar3;
  }
  dVar4 = this->Thickness_m + dVar4;
  dVar4 = dVar4 + dVar4;
  if ((*(int *)&this->CachedBreechThickness_m == 0) ||
     (pcVar2 = *(code **)((int)&this->CachedBreechThickness_m + 4), pcVar2 == (code *)0x0)) {
    dVar5 = 0.0;
  }
  else {
    fVar3 = (float10)(*pcVar2)(*(int *)&this->CachedBreechThickness_m);
    dVar5 = (double)fVar3;
  }
  dVar9 = this->Length_m;
  dVar5 = dVar9 + dVar5;
  if ((*(int *)&this->CachedBoreRadius_m == 0) ||
     (pcVar2 = *(code **)((int)&this->CachedBoreRadius_m + 4), pcVar2 == (code *)0x0)) {
    dVar8 = 0.0;
  }
  else {
    fVar3 = (float10)(*pcVar2)(*(int *)&this->CachedBoreRadius_m);
    dVar9 = this->Length_m;
    dVar8 = (double)fVar3;
  }
  dVar6 = 0.0;
  dVar8 = this->Thickness_m + dVar8;
  dVar5 = dVar9 - dVar5 * 0.15;
  if ((*(int *)&this->CachedBoreRadius_m != 0) &&
     (pcVar2 = *(code **)((int)&this->CachedBoreRadius_m + 4), pcVar2 != (code *)0x0)) {
    fVar3 = (float10)(*pcVar2)(*(int *)&this->CachedBoreRadius_m);
    dVar9 = this->Length_m;
    dVar6 = (double)fVar3;
  }
  return ((dVar8 * dVar8 * 3.141592653589793 * dVar5 +
          dVar4 * dVar4 * 3.141592653589793 * (dStack_14 + (dVar1 + dVar7) * 0.15)) -
         dVar6 * dVar6 * 3.141592653589793 * dVar9) * this->Composition->Density_kg__m3;
}





//==== 00634440 GetCenterExtrusionOffset_m_00634440 ====


/* public: virtual double __thiscall ConventionalGunModule__GetCenterExtrusionOffset_m(void)const
    */

double __thiscall ConventionalGunModule__GetCenterExtrusionOffset_m(ConventionalGunModule *this)

{
  double dVar1;
  
  if ((char)((this->BarrelModel).Pointer != '\0')){
    if ((char)((this->BarrelModel).Pointer == '\0')){
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar1 = TurretSubModule__GetExtruderLength_m((TurretSubModule *)&(this->Turret).Data.field4_0x4)
    ;
    return dVar1;
  }
  return 0.0;
}





//==== 00634720 GetChartBreechPressure_MPa ====


/* public: double __thiscall ConventionalGunModule__GetChartBreechPressure_MPa(double)const  */

double __thiscall
ConventionalGunModule__GetChartBreechPressure_MPa(ConventionalGunModule *this,double param_1)

{
  Darray_L_struct_MaterialConstituent_G_ *pDVar1;
  double dVar2;
  double dVar3;
  void *pvStack_20;
  
  dVar2 = GetWebBurnFractionAtDistance(this,param_1);
  dVar3 = GetBreechPressureForWebFraction_Pa(this,dVar2);
  if (dVar2 <= 0.0) {
    GetChargeBurnoutLength_m_Memoize(this);
    if ((this->GetEnergyLostToGasExpansion_J_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    pDVar1 = (Darray_L_struct_MaterialConstituent_G_ *)
             Material__GetDecompositionProductsByMassPercent((this->Projectile).Tracer);
    Material__GetMixtureAdiabaticIndex(pDVar1);
    if (pvStack_20 != (void *)0x0) {
      port_op_delete(pvStack_20);
    }
    dVar2 = (this->GetEnergyLostToGasExpansion_J_MemoizedValue).Data / param_1;
    libm_sse2_pow_precise(0.0,0.0);
    dVar3 = dVar2 * dVar3;
  }
  GetPeakPressure_Pa_Memoize(this);
  if ((char)((this->GetGunFlashColor_MemoizedValue).Data.Z == '\0')){
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar2 = *(double *)&(this->GetGunFlashColor_MemoizedValue).Data;
  if (dVar2 <= dVar3) {
    dVar3 = dVar2;
  }
  return dVar3 / 1000000.0;
}





//==== 00634840 GetClassID_00634840 ====


/* public: virtual unsigned long __thiscall ConventionalGunModule__GetClassID(void)const  */

ulong __thiscall ConventionalGunModule__GetClassID(ConventionalGunModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_e6200242__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_e6200242__thread_safe_static_guard_0__);
    if ( cde_l2_e6200242__thread_safe_static_guard_0__ == -1) {
       cde_l2r_9e83e527_ID = util__GetHash("ConventionalGunModule");
      _Init_thread_footer(& cde_l2_e6200242__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2r_9e83e527_ID;
}





//==== 006348a0 GetComposition_006348a0 ====

/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   BallisticTubeSubModule__GetComposition(void)const  */

Darray_L_MaterialComposition_G_ * __thiscall
BallisticTubeSubModule__GetComposition
          (BallisticTubeSubModule *this,Darray_L_MaterialComposition_G_ *__return_storage_ptr__)

{
  undefined4 *puVar1;
  Material *pMVar2;
  Darray_L_MaterialComposition_G_ *this_00;
  bool bVar3;
  MaterialComposition *pMVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  undefined4 uStack_20;
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
  pMVar4 = (MaterialComposition *)(uintptr_t)(port_op_new(0x10));
  if (pMVar4 == (MaterialComposition *)0x0) {
    pMVar4 = (MaterialComposition *)0x0;
  }
  else {
    pMVar4->Type = (Material *)0x0;
    pMVar4->Mass_kg = 0.0;
  }
  iVar6 = 0;
  this_00->Data = pMVar4;
  if (0 < this_00->Capacity) {
    iVar5 = 0;
    do {
      iVar6 = iVar6 + 1;
      puVar1 = (undefined4 *)((int)&this_00->Data->Type + iVar5);
      *puVar1 = 0;
      puVar1[1] = uStack_10;
      puVar1[2] = 0;
      puVar1[3] = 0;
      iVar5 = iVar5 + 0x10;
    } while (iVar6 < this_00->Capacity);
  }
  if ((this[1]._pad_0x0_0 == 0) || ((code *)this[1]._pad_0x4_1 == (code *)0x0)) {
    iVar6 = 0;
  }
  else {
    iVar6 = (*(code *)this[1]._pad_0x4_1)(this[1]._pad_0x0_0);
  }
  dVar7 = GetBarrelMass_kg(this);
  pMVar2 = this->Composition;
  iVar5 = this_00->Size;
  __return_storage_ptr__ = (Darray_L_MaterialComposition_G_ *)(iVar5 + 1);
  util__Darray_L_MaterialConstituent_G___SetSize
            ((Darray_L_MaterialConstituent_G_ *)this_00,(int *)&__return_storage_ptr__);
  bVar3 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                    ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar5);
  if (bVar3) {
    pMVar4 = this_00->Data + this_00->Size + -1;
    pMVar4->Type = pMVar2;
    *(undefined4 *)&(*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar4) + 0x4)) = uStack_20;
    pMVar4->Mass_kg = dVar7 * (double)iVar6;
  }
  return this_00;
}

//==== 006349b0 GetCubicBoundingBox_m_006349b0 ====


/* public: virtual struct util__AABB_L_structutil__Vec3_L_double_G__G_ __thiscall
   ConventionalGunModule__GetCubicBoundingBox_m(void)const  */

undefined4 __thiscall ConventionalGunModule__GetCubicBoundingBox_m(ConventionalGunModule *this)

{
  code *pcVar1;
  Cylinder_L_double_G_ *pCVar2;
  int iVar3;
  bool bVar4;
  float10 fVar5;
  double dVar6;
  undefined4 in_stack_00000004;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  bool bStack_50;
  Cylinder_L_double_G_ CStack_48;
  double dStack_38;
  bool bStack_30;
  double dStack_28;
  double dStack_20;
  double dStack_18;
  undefined8 uStack_10;
  undefined4 *puStack_8;
  
  if ((char)((this->BarrelModel).Pointer == '\0')){
    dStack_18 = 0.0;
  }
  else {
    dStack_20 = TurretSubModule__GetExtruderLength_m
                          ((TurretSubModule *)&(this->Turret).Data.field4_0x4);
    dStack_18 = dStack_20;
  }
  if ((char)((this->BarrelModel).Pointer == '\0')){
    dStack_20 = 0.0;
  }
  else {
    dStack_20 = TurretSubModule__GetObjectOffsetFromTurret_m
                          ((TurretSubModule *)&(this->Turret).Data.field4_0x4);
  }
  bVar4 = (char)this[1].ConventionalGunModuleMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 ==
          '\0';
  if (bVar4) {
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
  }
  else {
    pCVar2 = AmmoBaySubModule__GetArmoredDimensions_m((AmmoBaySubModule *)(this + 1),&CStack_48);
    uStack_60 = *(undefined4 *)&pCVar2->Radius;
    uStack_5c = *(undefined4 *)((int)&pCVar2->Radius + 4);
    uStack_58 = *(undefined4 *)&pCVar2->Height;
    uStack_54 = *(undefined4 *)((int)&pCVar2->Height + 4);
  }
  bStack_50 = !bVar4;
  bVar4 = *(char *)&(this->BarrelModel).Pointer == '\0';
  puStack_8 = &uStack_60;
  if (bVar4) {
    dStack_38 = 0.0;
  }
  else {
    dStack_38 = TurretSubModule__GetOuterRadius_m
                          ((TurretSubModule *)&(this->Turret).Data.field4_0x4);
  }
  bStack_30 = !bVar4;
  iVar3 = *(int *)&(this->BarrelProperties).CachedBoreRadius_m;
  dStack_28 = 0.0;
  if ((iVar3 != 0) &&
     (pcVar1 = *(code **)((int)&(this->BarrelProperties).CachedBoreRadius_m + 4),
     uStack_10 = (double)CONCAT44(pcVar1,(undefined4)uStack_10), dStack_28 = 0.0,
     pcVar1 != (code *)0x0)) {
    fVar5 = (float10)(*pcVar1)(iVar3);
    uStack_10 = (double)fVar5;
    dStack_28 = uStack_10;
  }
  dStack_28 = *(double *)&this->BarrelProperties + dStack_28;
  uStack_10 = BarrelArmorSubModule__GetArmorRadius_m
                        ((BarrelArmorSubModule *)&(this->BarrelProperties).CachedSize_m.Height);
  if ((char)((this->BarrelModel).Pointer == '\0')){
    iVar3 = 1;
  }
  else {
    iVar3 = *(int *)&(this->Turret).Data.field0_0x0;
  }
  dVar6 = util__GetCirclePackingInACircleRadius_double(iVar3);
  uStack_10 = dVar6 * uStack_10;
  TurretedGun__GetInitialBounds((undefined1 (*)[16])(in_stack_00000004),dStack_38,bStack_30);
  return in_stack_00000004;
}





//==== 00634d90 GetFiringTemperatureJump_K_Clear ====


/* public: void __thiscall LaserModule__GetFiringTemperatureJump_K_Clear(void)const  */

void __thiscall LaserModule__GetFiringTemperatureJump_K_Clear(LaserModule *this)

{
  (this->GetMirrorFocalLengthLimit_m_MemoizedValue).IsValidData = false;
  (this->GetMirrorFocalLengthLimit_m_MemoizedValue).Data = 0.0;
  return;
}




