// pilot_sweep_sweep05.c - assembled by scripts/sweep_assemble.py (r19)
// reuses fam8_assemble fix passes (zip oracle/in-batch protos/vft channel/data closure)
/* ---- r20 incomplete-type forward decls (pointer-position only) ---- */
typedef struct Darray_L_GraphicsResource__Type_G_ Darray_L_GraphicsResource__Type_G_;
typedef struct util__Darray_L_class_util__WeakPtr_L_struct_PropellantTankCompartment_G___G util__Darray_L_class_util__WeakPtr_L_struct_PropellantTankCompartment_G___G;
typedef struct Darray_L_bool_P_G_ Darray_L_bool_P__G_;
#include "port_prelude.h"
#include "cde_win32_compat.h"
#include "cde_types_r20.h"
typedef union {
  struct {
    undefined8 _0_8_;
  };
  struct {
    undefined4 _0_4_;
    undefined4 _4_4_;
    undefined4 _672_4_;
  };
  struct {
    undefined1 _1_3_[3];
  };
  undefined1 raw[32];
} slice_view;
/* ---- r21 hdr-conflict renames (decl stays OLD for game TUs; pilot impl+calls = NEW; linker aliases OLD -> NEW) ---- */
#undef FUN_0083a790
#define FUN_0083a790 FUN_0083a790__r20
#undef FUN_00855da0
#define FUN_00855da0 FUN_00855da0__r20
#undef FUN_00855e80
#define FUN_00855e80 FUN_00855e80__r20
#undef ModuleDesignManager__RefreshCurrentModule
#define ModuleDesignManager__RefreshCurrentModule ModuleDesignManager__RefreshCurrentModule__r20
#undef PauseMenuHandler__Clear
#define PauseMenuHandler__Clear PauseMenuHandler__Clear__r20
/* ---- externs: stub-oracle names (K&R; ret types by call site) ---- */
extern int CraftInstance_GetModulesOfType_struct_PropellantTankCompartment(); /* K&R stub; ret by call site */
extern int CraftInstance__GetReactionMassModules_Clear(); /* K&R stub; ret by call site */
extern int NodeMouseOver__dtor(); /* K&R stub; ret by call site */
extern int util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent(); /* K&R stub; ret by call site */
extern int util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2(); /* K&R stub; ret by call site */
extern int util__Darray_class_util__WeakPtr_struct_UIWidget_____Darray_class_util__WeakPtr_struct_UIWidget__o2(); /* K&R stub; ret by call site */
extern int util_tuple2_struct_ActorDropdownAction_class_util_WeakPtr_struct_UIWidget_tuple2_struct_ActorDropdownAction_class_util_WeakPtr_struct_UIWidget(); /* K&R stub; ret by call site */

//==== 0041e410 41e410_FUN_0041e410 ====
void FUN_0041e410(void);

// decompiled by BatchDecomp @ 41e410 name=FUN_0041e410 conv=unknown body=61

void FUN_0041e410(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_L_char_G___Str_L_char_G(&local_10,"TankEjectorSubModule");
  pRVar1 = (ReflectionInfoBase *)TankEjectorSubModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 004206e0 4206e0_FUN_004206e0 ====
void FUN_004206e0(void);

// decompiled by BatchDecomp @ 4206e0 name=FUN_004206e0 conv=unknown body=61

void FUN_004206e0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  ThermalRocketSubModule *this_00;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_L_char_G___Str_L_char_G(&local_10,"ThermalRocketSubModule");
  pRVar1 = ThermalRocketSubModule__GetReflectionInfo(this_00);
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 004291d0 4291d0_FUN_004291d0 ====
void FUN_004291d0(void);

// decompiled by BatchDecomp @ 4291d0 name=FUN_004291d0 conv=unknown body=61

void FUN_004291d0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_L_char_G___Str_L_char_G(&local_10,"TurbopumpSubModule");
  pRVar1 = (ReflectionInfoBase *)TurbopumpSubModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0042a370 42a370_FUN_0042a370 ====
void FUN_0042a370(void);

// decompiled by BatchDecomp @ 42a370 name=FUN_0042a370 conv=unknown body=61

void FUN_0042a370(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_L_char_G___Str_L_char_G(&local_10,"TurretSubModule");
  pRVar1 = (ReflectionInfoBase *)TurretSubModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 00430c60 430c60_FUN_00430c60 ====
void FUN_00430c60(void);

// decompiled by BatchDecomp @ 430c60 name=FUN_00430c60 conv=unknown body=61

void FUN_00430c60(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_L_char_G___Str_L_char_G(&local_10,"ThermocoupleSubModule");
  pRVar1 = (ReflectionInfoBase *)ThermocoupleSubModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 00432f70 432f70_FUN_00432f70 ====
void FUN_00432f70(void);

// decompiled by BatchDecomp @ 432f70 name=FUN_00432f70 conv=unknown body=61

void FUN_00432f70(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_L_char_G___Str_L_char_G(&local_10,"ThermoelectricFissionReactorModule");
  pRVar1 = (ReflectionInfoBase *)ThermoelectricFissionReactorModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 004341a0 4341a0_FUN_004341a0 ====
void FUN_004341a0(void);

// decompiled by BatchDecomp @ 4341a0 name=FUN_004341a0 conv=unknown body=61

void FUN_004341a0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_L_char_G___Str_L_char_G(&local_10,"TurboelectricFissionReactorModule");
  pRVar1 = (ReflectionInfoBase *)TurboelectricFissionReactorModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0043f980 43f980_FUN_0043f980 ====
void FUN_0043f980(void);

// decompiled by BatchDecomp @ 43f980 name=FUN_0043f980 conv=unknown body=61

void FUN_0043f980(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_L_char_G___Str_L_char_G(&local_10,"StandaloneLaserMountModule");
  pRVar1 = (ReflectionInfoBase *)StandaloneLaserMountModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0044b8a0 44b8a0_FUN_0044b8a0 ====
void FUN_0044b8a0(void);

// decompiled by BatchDecomp @ 44b8a0 name=FUN_0044b8a0 conv=unknown body=61

void FUN_0044b8a0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_L_char_G___Str_L_char_G(&local_10,"TextureSettings");
  pRVar1 = (ReflectionInfoBase *)TextureSettings__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0044e3b0 44e3b0_FUN_0044e3b0 ====
void FUN_0044e3b0(void);

// decompiled by BatchDecomp @ 44e3b0 name=FUN_0044e3b0 conv=unknown body=61

void FUN_0044e3b0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  StarterFleet *this_00;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_L_char_G___Str_L_char_G(&local_10,"StarterFleet");
  pRVar1 = StarterFleet__GetReflectionInfo(this_00);
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 004817d0 4817d0_FUN_004817d0 ====
void FUN_004817d0(void);

// decompiled by BatchDecomp @ 4817d0 name=FUN_004817d0 conv=unknown body=61

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_004817d0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  ThemeFont *this_00;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_L_char_G___Str_L_char_G(&local_10,"ThemeFont");
  pRVar1 = ThemeFont__GetReflectionInfo(this_00);
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 004d1410 4d1410_ModuleProblemIndicator___scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 4d1410 name=`scalar_deleting_destructor' conv=__thiscall body=109

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall ModuleProblemIndicator::`scalar deleting destructor'(unsigned
   int) */

void * __thiscall
ModuleProblemIndicator___scalar_deleting_destructor_(ModuleProblemIndicator *this,uint param_1)

{
  this->_pad_0x0_0 = (int)((void *)(0x0091d1e0u));
  this->_pad_0x0_0 = (int)((void *)(0x0091d1bcu));
  if ((SharedPtr_L_struct_UIWidget_G_ *)this->_pad_0x0_0 != (SharedPtr_L_struct_UIWidget_G_ *)0x0) {
    util__SharedPtr_L_struct_UIWidget_G____vector_deleting_destructor
              ((SharedPtr_L_struct_UIWidget_G_ *)this->_pad_0x0_0,3);
  }
  this->_pad_0x0_0 = 0;
  this->_pad_0x0_0 = (int)((void *)(0x00919488u));
  if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)this->_pad_0x0_0);
  }
  UIAttributes___UIAttributes((UIAttributes *)&this->_pad_0x0_0);
  if ((param_1 & 1) != 0) {
    operator_delete(this,0x180);
  }
  return this;
}


//==== 004e0320 4e0320_DeltaVWidget___scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 4e0320 name=`scalar_deleting_destructor' conv=__thiscall body=120

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall DeltaVWidget::`scalar deleting destructor'(unsigned int) */

void * __thiscall DeltaVWidget___scalar_deleting_destructor_(DeltaVWidget *this,uint param_1)

{
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&(this->ShipGroup).Value);
  this->_pad_0x0_0 = (int)((void *)(0x0091d1e0u));
  this->_pad_0x0_0 = (int)((void *)(0x0091d1bcu));
  if ((SharedPtr_L_struct_UIWidget_G_ *)this->_pad_0x0_0 != (SharedPtr_L_struct_UIWidget_G_ *)0x0) {
    util__SharedPtr_L_struct_UIWidget_G____vector_deleting_destructor
              ((SharedPtr_L_struct_UIWidget_G_ *)this->_pad_0x0_0,3);
  }
  this->_pad_0x0_0 = 0;
  this->_pad_0x0_0 = (int)((void *)(0x00919488u));
  if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)this->_pad_0x0_0);
  }
  UIAttributes___UIAttributes((UIAttributes *)&this->_pad_0x0_0);
  if ((param_1 & 1) != 0) {
    operator_delete(this,0x180);
  }
  return this;
}


//==== 004fcd40 4fcd40_PauseMenuHandler___scalar_deleting_destructor_ ====
#undef PauseMenu /* auto(v2): compat 僵尸宏撞成员名 */

// decompiled by BatchDecomp @ 4fcd40 name=`scalar_deleting_destructor' conv=__thiscall body=243

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall PauseMenuHandler::`scalar deleting destructor'(unsigned int) */

void * __thiscall
PauseMenuHandler___scalar_deleting_destructor_(PauseMenuHandler *this,uint param_1)

{
  void *pvVar1;
  _func___cdecl_void_void_ptr *p_Var2;
  ReferenceController *this_00;
  bool bVar3;
  ReferenceControllerRegistry *this_01;
  UIWidget *pUVar4;
  
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&this[1]._pad_0x0_0);
  pvVar1 = (this->OptionsEditor).MutualExclusivePreChange.Callee;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  p_Var2 = (this->OptionsEditor).MutualExclusivePreChange.CallbackFunction;
  if (p_Var2 != (_func___cdecl_void_void_ptr *)0x0) {
    operator_delete__(p_Var2);
  }
  (this->OptionsEditor).MutualExclusivePreChange.Callee = (void *)0x0;
  (this->OptionsEditor).MutualExclusivePreChange.CallbackFunction =
       (_func___cdecl_void_void_ptr *)0x0;
  this_00 = (this->PauseMenu).Controller;
  if (this_00 != (ReferenceController *)0x0) {
    bVar3 = util__ReferenceController__ReleaseStrongReference(this_00);
    if (bVar3) {
      pUVar4 = (this->PauseMenu).Pointer;
      if (pUVar4 != (UIWidget *)0x0) {
        (**(code **)(pUVar4->_pad_0x0_0 + 4))(1);
        pUVar4 = (this->PauseMenu).Pointer;
      }
      this_01 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(this_01,pUVar4);
      (this->PauseMenu).Pointer = (UIWidget *)0x0;
    }
  }
  this->_pad_0x0_0 = (int)((void *)(0x0091d1e0u));
  this->_pad_0x0_0 = (int)((void *)(0x0091d1bcu));
  if ((SharedPtr_L_struct_UIWidget_G_ *)this->_pad_0x0_0 != (SharedPtr_L_struct_UIWidget_G_ *)0x0) {
    util__SharedPtr_L_struct_UIWidget_G____vector_deleting_destructor
              ((SharedPtr_L_struct_UIWidget_G_ *)this->_pad_0x0_0,3);
  }
  this->_pad_0x0_0 = 0;
  this->_pad_0x0_0 = (int)((void *)(0x00919488u));
  if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)this->_pad_0x0_0);
  }
  UIAttributes___UIAttributes((UIAttributes *)&this->_pad_0x0_0);
  if ((param_1 & 1) != 0) {
    operator_delete(this,0x1d8);
  }
  return this;
}


//==== 004fd660 4fd660_PauseMenuHandler__Clear ====
#undef PauseMenu /* auto(v2): compat 僵尸宏撞成员名 */

// decompiled by BatchDecomp @ 4fd660 name=Clear conv=__thiscall body=97

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall PauseMenuHandler__Clear(void) */

void __thiscall PauseMenuHandler__Clear(PauseMenuHandler *this)

{
  ReferenceController *this_00;
  bool bVar1;
  Interface *this_01;
  ReferenceControllerRegistry *this_02;
  UIWidget *pUVar2;
  
  this_01 = UIWidget__GetInterfacer((UIWidget *)this);
  Interface__KillPopup(this_01);
  this_00 = (this->PauseMenu).Controller;
  pUVar2 = (this->PauseMenu).Pointer;
  (this->PauseMenu).Pointer = (UIWidget *)0x0;
  (this->PauseMenu).Controller = (ReferenceController *)0x0;
  if (this_00 != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__ReleaseStrongReference(this_00);
    if (bVar1) {
      if (pUVar2 != (UIWidget *)0x0) {
        (**(code **)(pUVar2->_pad_0x0_0 + 4))(1);
      }
      this_02 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(this_02,pUVar2);
    }
  }
  *(undefined1 *)&this[1]._pad_0x0_0 = 0;
  return;
}


//==== 00530fd0 530fd0_CraftInstance__GetReactionMassSuppliers ====
// decompiled by BatchDecomp @ 530fd0 name=GetReactionMassSuppliers conv=__thiscall body=425

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util__Darray_L_class_util__WeakPtr_L_struct_PropellantTankCompartment_G___G __thiscall
   CraftInstance__GetReactionMassSuppliers(class Material const *)const  */

void __thiscall CraftInstance__GetReactionMassSuppliers(CraftInstance *this,Material *param_1)

{
  undefined4 stack0x00000008;
  undefined4 stack0xfffffffc;
  ReferenceController *this_00;
  ReferenceController *this_01;
  bool bVar1;
  int iVar2;
  int *piVar3;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_48[16];
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_38[16];
  bool local_28;
  int local_24;
  int *local_20;
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
  if ((this->GetReactionMassModules_MemoizedValue).IsValidData == false) {
    iVar2 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_c = iVar2 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_c);
    bVar1 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar2);
    if (bVar1) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, CraftInstance__GetReactionMassModules_Clear);
    }
    CraftInstance_GetModulesOfType_struct_PropellantTankCompartment(this,(Type)local_48);
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent(local_38,local_48);
    local_28 = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetReactionMassModules_MemoizedValue,local_38);
    (this->GetReactionMassModules_MemoizedValue).IsValidData = local_28;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_38);
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_48);
  }
  if ((this->GetReactionMassModules_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_1c,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &this->GetReactionMassModules_MemoizedValue);
  local_20 = (int *)&stack0x00000008;
  param_1->_pad_0x0_0 = 0;
  param_1->_pad_0x0_0 = 0;
  param_1->_pad_0x0_0 = 0;
  param_1->_pad_0x0_0 = 0;
  iVar2 = (*(code *)local_1c[3])();
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)param_1,iVar2);
  local_c = 0;
  iVar2 = (*(code *)local_1c[3])();
  if (local_c < iVar2) {
    do {
      piVar3 = (int *)(*(code *)*local_1c)(&local_c);
      if ((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) {
        bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]);
        if (!bVar1) {
          *piVar3 = 0;
        }
      }
      if (*(int *)(*(int *)(*(int *)(uintptr_t)piVar3 + 0x38) + 0x70) == *local_20) {
        iVar2 = param_1->_pad_0x0_0;
        local_24 = iVar2 + 1;
        util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)param_1,&local_24);
        bVar1 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)param_1,iVar2);
        if (bVar1) {
          this_00 = *(ReferenceController **)(param_1->_pad_0x0_0 + -4 + param_1->_pad_0x0_0 * 8);
          iVar2 = param_1->_pad_0x0_0 + param_1->_pad_0x0_0 * 8;
          *(int *)(iVar2 + -8) = *piVar3;
          this_01 = (ReferenceController *)piVar3[1];
          *(ReferenceController **)(iVar2 + -4) = this_01;
          if (this_01 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this_01);
          }
          if (this_00 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(this_00);
          }
        }
      }
      local_c = local_c + 1;
      iVar2 = (*(code *)local_1c[3])();
    } while (local_c < iVar2);
  }
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_1c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00531180 531180_CraftInstance__GetReactionMass_kg ====
// decompiled by BatchDecomp @ 531180 name=GetReactionMass_kg conv=__thiscall body=667

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall CraftInstance__GetReactionMass_kg(bool)const  */

double __thiscall CraftInstance__GetReactionMass_kg(CraftInstance *this,bool param_1)

{
  undefined4 stack0xfffffffc;
  Material **ppMVar1;
  bool bVar2;
  bool bVar3;
  Darray_L_bool_P__G_ *pDVar4;
  int iVar5;
  int *piVar6;
  Material **ppMVar7;
  CraftInstance *pCVar8;
  bool bVar10;
  float10 extraout_ST0;
  double dVar11;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_48[16];
  bool local_38;
  undefined **local_34;
  void *local_30[3];
  bool local_24;
  undefined **local_20;
  void *local_1c;
  double local_18;
  CraftInstance *local_10;
  int local_c;
  uint local_8;
  Maybe_L_util__Darray_L_util__WeakPtr_L_PropellantTankCompartment_G___G___G_ *pMVar9;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar10 = (this->GetAllMainEnginePropellantsUsed_MemoizedValue).IsValidData == false;
  local_10 = this;
  if (bVar10) {
    iVar5 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_c = iVar5 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_c);
    bVar10 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                        &this->CraftInstanceMemoizationHandlerInstance,iVar5);
    if (bVar10) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, GetAllMainEnginePropellantsUsed_Clear);
    }
    pDVar4 = (Darray_L_bool_P_G_ *)GetAllMainEnginePropellantsUsed_MemoizedFunction(this);
    util__Darray_bool____Darray_bool((Darray_L_bool_P_G_ *)&local_34,pDVar4);
    local_24 = true;
    util__Darray_class_Module____operator
              ((Darray_L_class_Module_P_G_ *)&this->GetAllMainEnginePropellantsUsed_MemoizedValue,
               (Darray_L_class_Module_P_G_ *)&local_34);
    (this->GetAllMainEnginePropellantsUsed_MemoizedValue).IsValidData = local_24;
    local_34 = ((void *)(0x009194a4u));
    if (local_30[0] != (void *)0x0) {
      operator_delete__(local_30[0]);
    }
    local_30[0] = (void *)0x0;
    local_34 = ((void *)(0x00919488u));
    local_20 = ((void *)(0x009194a4u));
    if (local_1c != (void *)0x0) {
      operator_delete__(local_1c);
    }
    bVar10 = (this->GetAllMainEnginePropellantsUsed_MemoizedValue).IsValidData == false;
    local_1c = (void *)0x0;
    local_20 = ((void *)(0x00919488u));
  }
  if (bVar10) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pCVar8 = this;
  if ((this->GetReactionMassModules_MemoizedValue).IsValidData == false) {
    iVar5 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_c = iVar5 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_c);
    bVar10 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                        &this->CraftInstanceMemoizationHandlerInstance,iVar5);
    pCVar8 = local_10;
    if (bVar10) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, CraftInstance__GetReactionMassModules_Clear);
    }
    CraftInstance_GetModulesOfType_struct_PropellantTankCompartment(local_10,(Type)local_30);
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent(local_48,(Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_30);
    local_38 = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &pCVar8->GetReactionMassModules_MemoizedValue,local_48);
    (pCVar8->GetReactionMassModules_MemoizedValue).IsValidData = local_38;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_48);
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_30);
  }
  pMVar9 = &pCVar8->GetReactionMassModules_MemoizedValue;
  if ((pCVar8->GetReactionMassModules_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_18 = 0.0;
  local_c = 0;
  iVar5 = (**(code **)(*(int *)&pMVar9->Data + 0xc))();
  if (local_c < iVar5) {
    do {
      piVar6 = (int *)(**(code **)*(int *)&pMVar9->Data)(&local_c);
      if (((ReferenceController *)piVar6[1] != (ReferenceController *)0x0) &&
         (bVar10 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar6[1]),
         !bVar10)) {
        *piVar6 = 0;
      }
      bVar10 = PropellantTankCompartment__WillDetachWhenEmpty((PropellantTankCompartment *)*piVar6);
      if ((param_1) || (!bVar10)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((ReferenceController *)piVar6[1] != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar6[1]),
         !bVar3)) {
        *piVar6 = 0;
      }
      ppMVar7 = (local_10->GetAllMainEnginePropellantsUsed_MemoizedValue).Data.Data;
      ppMVar1 = ppMVar7 + (local_10->GetAllMainEnginePropellantsUsed_MemoizedValue).Data.Size;
      for (; ppMVar7 != ppMVar1; ppMVar7 = ppMVar7 + 1) {
        if (*ppMVar7 == *(Material **)(*(int *)(*(int *)(uintptr_t)piVar6 + 0x38) + 0x70)) {
          bVar3 = false;
          goto LAB_005313ad;
        }
      }
      bVar3 = true;
LAB_005313ad:
      if ((((param_1) && (!bVar10)) || (bVar3)) || (bVar2)) {
        dVar11 = 0.0;
      }
      else {
        if (((ReferenceController *)piVar6[1] != (ReferenceController *)0x0) &&
           (bVar10 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar6[1]),
           !bVar10)) {
          *piVar6 = 0;
        }
        dVar11 = *(double *)(*(int *)(uintptr_t)piVar6 + 0x108);
      }
      local_18 = dVar11 + local_18;
      local_c = local_c + 1;
      iVar5 = (**(code **)(*(int *)&pMVar9->Data + 0xc))();
    } while (local_c < iVar5);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00532b40 532b40_util__Darray_struct_CompartmentCollisionShell___Last ====
// decompiled by BatchDecomp @ 532b40 name=Last conv=__thiscall body=59

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual struct CompartmentCollisionShell & __thiscall util__Darray_L_struct____CompartmentCollisionShell_G___Last(void) */

CompartmentCollisionShell * __thiscall
util__Darray_L_struct_CompartmentCollisionShell_G___Last(Darray_L_struct_CompartmentCollisionShell_G_ *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3c,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = *(int *)(this + 8);
  }
  return (CompartmentCollisionShell *)(*(int *)(this + 4) + -0x118 + iVar1 * 0x118);
}


//==== 0058ade0 58ade0_ModuleDesignManager__RefreshCurrentModule ====
// decompiled by BatchDecomp @ 58ade0 name=RefreshCurrentModule conv=__thiscall body=106

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall ModuleDesignManager__RefreshCurrentModule(void) */

void __thiscall ModuleDesignManager__RefreshCurrentModule(ModuleDesignManager *this)

{
  Module *this_00;
  ReferenceController *pRVar1;
  bool bVar2;
  GameManager *this_01;
  DataParser *pDVar3;
  HWND unaff_EDI;
  
  this_00 = this->SelectedModule;
  if (this_00 != (Module *)0x0) {
    this_01 = (GameManager *)Manager__GetParent(unaff_EDI);
    pDVar3 = GameManager__GetDataManager(this_01);
    Module__FullGenerate(this_00,pDVar3);
  }
  if (((this->MessageBoxA).Options.Data != (tuple2_L_util__Str_L_char_G__Cutil__Delegate_L_void_G___G_ *)0x0) &&
     (pRVar1 = (ReferenceController *)(this->MessageBoxA).Options.Size,
     pRVar1 != (ReferenceController *)0x0)) {
    bVar2 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (bVar2) {
      pRVar1 = (ReferenceController *)(this->MessageBoxA).Options.Size;
      if (pRVar1 != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid(pRVar1);
        if (!bVar2) {
          (this->MessageBoxA).Options.Data = (tuple2_L_util__Str_L_char_G__Cutil__Delegate_L_void_G___G_ *)0x0;
        }
      }
      ErrorMessageUI__Rebuild((ErrorMessageUI *)(this->MessageBoxA).Options.Data);
      return;
    }
  }
  return;
}


//==== 0058ee20 58ee20_ShipListUI___scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 58ee20 name=`scalar_deleting_destructor' conv=__thiscall body=109

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall ShipListUI::`scalar deleting destructor'(unsigned int) */

void * __thiscall ShipListUI___scalar_deleting_destructor_(ShipListUI *this,uint param_1)

{
  this->_pad_0x0_0 = (int)((void *)(0x0091d1e0u));
  this->_pad_0x0_0 = (int)((void *)(0x0091d1bcu));
  if ((SharedPtr_L_struct_UIWidget_G_ *)this->_pad_0x0_0 != (SharedPtr_L_struct_UIWidget_G_ *)0x0) {
    util__SharedPtr_L_struct_UIWidget_G____vector_deleting_destructor
              ((SharedPtr_L_struct_UIWidget_G_ *)this->_pad_0x0_0,3);
  }
  this->_pad_0x0_0 = 0;
  this->_pad_0x0_0 = (int)((void *)(0x00919488u));
  if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)this->_pad_0x0_0);
  }
  UIAttributes___UIAttributes((UIAttributes *)&this->_pad_0x0_0);
  if ((param_1 & 1) != 0) {
    operator_delete(this,0x178);
  }
  return this;
}


//==== 0076ec70 76ec70_FUN_0076ec70 ====
void FUN_0076ec70(ActorDropdownAction *param_1,undefined4 param_2);
extern undefined4 FUN_0076efe0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 76ec70 name=FUN_0076ec70 conv=unknown body=873

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_0076ec70(ActorDropdownAction *param_1,undefined4 param_2)

{
  undefined4 stack0x0000000c;
  undefined4 stack0xfffffffc;
  ReferenceController *pRVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ReferenceController *this;
  ReferenceController *pRVar5;
  ActorDropdownAction *pAVar6;
  ActorDropdownAction local_b8c;
  uint local_8c4;
  ReferenceController *local_8c0;
  ReferenceController *local_8bc;
  undefined1 local_8b4[20];
  ReferenceController *local_8a0;
  undefined1 local_894[684];
  ReferenceController *local_5e8;
  ReferenceController *local_5e4;
  uint local_5dc;
  ReferenceController *local_5d8;
  undefined1 local_5d4[20];
  ReferenceController *local_5c0;
  undefined1 local_5b4[680];
  uint local_30c;
  ReferenceController *local_308;
  ReferenceController *local_304;
  undefined8 local_2fc;
  ReferenceController *local_2f8;
  undefined1 *local_2f4;
  ActorDropdownAction *pAStack_2f0;
  ActorDropdownAction *local_2e8;
  ReferenceController *local_2e4;
  ActorDropdownAction local_2e0;
  uint local_18;
  ReferenceController *local_14;
  char local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_2e8 = param_1;
  local_2e4 = (ReferenceController *)0x0;
  util_tuple2_struct_ActorDropdownAction_class_util_WeakPtr_struct_UIWidget_tuple2_struct_ActorDropdownAction_class_util_WeakPtr_struct_UIWidget((tuple2_L_struct_ActorDropdownAction_Cclass_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_2e0)
  ;
  local_2f4 = &stack0x0000000c;
  local_10 = '\0';
  pAStack_2f0 = &local_2e0;
  local_2e4 = (ReferenceController *)0x0;
  FUN_0076efe0(param_2,CONCAT44(pAStack_2f0,local_2f4),&local_2e4);
  if (local_10 == '\0') {
    util_tuple2_struct_ActorDropdownAction_class_util_WeakPtr_struct_UIWidget_tuple2_struct_ActorDropdownAction_class_util_WeakPtr_struct_UIWidget((tuple2_L_struct_ActorDropdownAction_Cclass_util__WeakPtr_L_struct_UIWidget_G___G_ *)local_8b4
              );
    pAVar6 = (ActorDropdownAction *)local_8b4;
    local_5e4 = (ReferenceController *)0x0;
    bVar4 = false;
    bVar3 = false;
    bVar2 = true;
    local_5dc = local_5dc & 0xffffff00;
    pRVar5 = local_8c0;
  }
  else {
    ActorDropdownAction__ActorDropdownAction((ActorDropdownAction *)(local_5d4 + 0x10),&local_2e0);
    local_2fc = local_18;
    local_2f8 = local_14;
    if (local_14 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(local_14);
    }
    pRVar1 = local_2e4;
    ActorDropdownAction__ActorDropdownAction((ActorDropdownAction *)(local_8b4 + 0x10),(ActorDropdownAction *)(local_5d4 + 0x10));
    pRVar5 = local_2f8;
    local_5dc = local_2fc;
    local_5d8 = local_2f8;
    if (local_2f8 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(local_2f8);
    }
    ActorDropdownAction__ActorDropdownAction(&local_b8c,(ActorDropdownAction *)(local_8b4 + 0x10));
    this = local_5d8;
    local_8c4 = local_5dc;
    local_8c0 = local_5d8;
    if (local_5d8 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(local_5d8);
    }
    local_8bc = pRVar1;
    if (this != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(this);
    }
    if (local_5e4 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_5e4);
    }
    NodeMouseOver__dtor((NodeMouseOver *)local_894);
    if (local_8a0 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_8a0);
    }
    if (pRVar5 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(pRVar5);
    }
    if (local_304 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_304);
    }
    NodeMouseOver__dtor((NodeMouseOver *)local_5b4);
    if (local_5c0 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_5c0);
    }
    ActorDropdownAction__ActorDropdownAction((ActorDropdownAction *)local_5d4,&local_b8c);
    pRVar5 = local_8c0;
    local_30c = local_8c4;
    local_308 = local_8c0;
    if (local_8c0 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(local_8c0);
    }
    pAVar6 = (ActorDropdownAction *)local_5d4;
    local_304 = local_8bc;
    bVar4 = true;
    bVar3 = true;
    bVar2 = false;
    ((slice_view *)&local_2fc)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&local_2fc)->_1_3_[0] | (((slice_view *)&local_2fc)->_1_3_[1] << 8) | (((slice_view *)&local_2fc)->_1_3_[2] << 16)) << 8));
  }
  ActorDropdownAction__ActorDropdownAction(local_2e8,pAVar6);
  local_2e8[1].Data.Object.Pointer = pAVar6[1].Data.Object.Pointer;
  pRVar1 = pAVar6[1].Data.Object.Controller;
  local_2e8[1].Data.Object.Controller = pRVar1;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar1);
  }
  local_2e8[1].Data.LPointID = pAVar6[1].Data.LPointID;
  *(undefined1 *)&local_2e8[1].Data.Node.LastNode.Parent.Pointer =
       *(undefined1 *)&pAVar6[1].Data.Node.LastNode.Parent.Pointer;
  if (bVar2) {
    if (local_5e8 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_5e8);
    }
    if ((ReferenceController *)((slice_view *)&local_894)->_672_4_ != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference((ReferenceController *)((slice_view *)&local_894)->_672_4_);
    }
    NodeMouseOver__dtor((NodeMouseOver *)(local_8b4 + 0x10));
    if ((ReferenceController *)((slice_view *)&local_8b4)->_4_4_ != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference((ReferenceController *)((slice_view *)&local_8b4)->_4_4_);
    }
  }
  if (bVar3) {
    if (local_308 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_308);
    }
    if ((ReferenceController *)((slice_view *)&local_5b4)->_672_4_ != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference((ReferenceController *)((slice_view *)&local_5b4)->_672_4_);
    }
    NodeMouseOver__dtor((NodeMouseOver *)(local_5d4 + 0x10));
    if ((ReferenceController *)((slice_view *)&local_5d4)->_4_4_ != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference((ReferenceController *)((slice_view *)&local_5d4)->_4_4_);
    }
  }
  if (bVar4) {
    if (pRVar5 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(pRVar5);
    }
    if (local_b8c.AdditionalFleet.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_b8c.AdditionalFleet.Controller);
    }
    NodeMouseOver__dtor(&local_b8c.Data.Node);
    if (local_b8c.Data.Object.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_b8c.Data.Object.Controller);
    }
  }
  if (local_14 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_14);
  }
  if (local_2e0.AdditionalFleet.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_2e0.AdditionalFleet.Controller);
  }
  NodeMouseOver__dtor(&local_2e0.Data.Node);
  if (local_2e0.Data.Object.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_2e0.Data.Object.Controller);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 007a91e0 7a91e0_FUN_007a91e0 ====
void __thiscall FUN_007a91e0(int *param_1,Actor *param_2,ReferenceController *param_3,int param_4);

// decompiled by BatchDecomp @ 7a91e0 name=FUN_007a91e0 conv=unknown body=1081

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FUN_007a91e0(int *param_1,Actor *param_2,ReferenceController *param_3,int param_4)

{
  undefined4 stack0x00000014;
  undefined4 stack0xfffffffc;
  bool bVar1;
  bool bVar2;
  WorldObject *pWVar3;
  Str_L_char_G_ *pSVar4;
  LocStr *pLVar5;
  Str_L_char_G_ *pSVar6;
  WorldObject local_3a4;
  void *local_ec[3];
  void *local_e0;
  void *local_d4[3];
  void *local_c8;
  void *local_bc[3];
  void *local_b0;
  Str_L_char_G_ local_a4;
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
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pWVar3 = StrategicManager__GetReferenceObject(*(StrategicManager **)(*param_1 + 8),&local_3a4);
  if (((param_3 == (pWVar3->Object).Controller) && (param_2 == (pWVar3->Object).Pointer)) &&
     (pWVar3->LPointID == param_4)) {
    bVar1 = ItineraryNode__IsValid(&(pWVar3->Node).LastNode);
    bVar2 = ItineraryNode__IsValid((ItineraryNode *)&stack0x00000014);
    if (bVar1 == bVar2) {
      bVar1 = true;
      goto LAB_007a923b;
    }
  }
  bVar1 = false;
LAB_007a923b:
  NodeMouseOver__dtor(&local_3a4.Node);
  if (local_3a4.Object.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_3a4.Object.Controller);
  }
  if (*(char *)param_1[1] == '\0') {
    util__Str_char___Str_char__o5(&local_38,"\n");
    util__Str_char___operator__o10((Str_L_char_G_ *)param_1[2],&local_38);
    if (local_38.Data != (char *)0x0) {
      operator_delete__(local_38.Data);
    }
  }
  pSVar4 = WorldObject__GetName((WorldObject *)&param_2,&local_68);
  util__Str_char___operator__o10((Str_L_char_G_ *)param_1[2],pSVar4);
  if (local_68.Data != (char *)0x0) {
    operator_delete__(local_68.Data);
  }
  if (bVar1) {
    util__Str_char___Str_char__o5(&local_68,"RightParen");
    util__Str_char___Str_char__o5(&local_38,"CurrentFrameOfReference");
    util__Str_char___Str_char__o5(&local_74,"LeftParen");
    local_5c.Data = (char *)0x0;
    local_5c.Capacity = 0;
    local_5c.Length = 0;
    local_50.Data = (char *)0x0;
    local_50.Capacity = 0;
    local_50.Length = 0;
    local_44.Data = (char *)0x0;
    local_44.Capacity = 0;
    local_44.Length = 0;
    pLVar5 = (LocStr *)util__LocStr__LocStr((LocStr *)local_bc,&local_74,&local_44);
    pSVar4 = util__LocStr__operator__o3(pLVar5);
    pSVar6 = (Str_L_char_G_ *)util__Str_char___Str_char__o5(&local_a4,"\n");
    local_14.Length = 0;
    local_14.Data = (char *)0x0;
    local_14.Capacity = 0;
    util__Str_char___Str_char(&local_14,pSVar6);
    util__Str_char___operator__o10(&local_14,pSVar4);
    util__Str_char___Str_char(&local_98,&local_14);
    if (local_14.Data != (char *)0x0) {
      operator_delete__(local_14.Data);
      ((slice_view *)&local_14)->_0_8_ = ((slice_view *)&local_14)->_0_8_ & 0xffffffff00000000;
    }
    pLVar5 = (LocStr *)util__LocStr__LocStr((LocStr *)local_d4,&local_38,&local_50);
    pSVar4 = util__LocStr__operator__o3(pLVar5);
    local_20.Length = 0;
    local_20.Data = (char *)0x0;
    local_20.Capacity = 0;
    util__Str_char___Str_char(&local_20,&local_98);
    util__Str_char___operator__o10(&local_20,pSVar4);
    util__Str_char___Str_char(&local_8c,&local_20);
    if (local_20.Data != (char *)0x0) {
      operator_delete__(local_20.Data);
      ((slice_view *)&local_20)->_0_8_ = ((slice_view *)&local_20)->_0_8_ & 0xffffffff00000000;
    }
    pLVar5 = (LocStr *)util__LocStr__LocStr((LocStr *)local_ec,&local_68,&local_5c);
    pSVar4 = util__LocStr__operator__o3(pLVar5);
    local_2c.Length = 0;
    local_2c.Data = (char *)0x0;
    local_2c.Capacity = 0;
    util__Str_char___Str_char(&local_2c,&local_8c);
    util__Str_char___operator__o10(&local_2c,pSVar4);
    util__Str_char___Str_char(&local_80,&local_2c);
    if (local_2c.Data != (char *)0x0) {
      operator_delete__(local_2c.Data);
      ((slice_view *)&local_2c)->_0_8_ = ((slice_view *)&local_2c)->_0_8_ & 0xffffffff00000000;
    }
    util__Str_char___operator__o10((Str_L_char_G_ *)param_1[2],&local_80);
    if (local_80.Data != (char *)0x0) {
      operator_delete__(local_80.Data);
    }
    if (local_8c.Data != (char *)0x0) {
      operator_delete__(local_8c.Data);
    }
    if (local_98.Data != (char *)0x0) {
      operator_delete__(local_98.Data);
    }
    if (local_a4.Data != (char *)0x0) {
      operator_delete__(local_a4.Data);
      local_a4.Data = (char *)0x0;
    }
    if (local_b0 != (void *)0x0) {
      operator_delete__(local_b0);
      local_b0 = (void *)0x0;
    }
    if (local_bc[0] != (void *)0x0) {
      operator_delete__(local_bc[0]);
      local_bc[0] = (void *)0x0;
    }
    if (local_44.Data != (char *)0x0) {
      operator_delete__(local_44.Data);
      local_44.Data = (char *)0x0;
    }
    if (local_c8 != (void *)0x0) {
      operator_delete__(local_c8);
      local_c8 = (void *)0x0;
    }
    if (local_d4[0] != (void *)0x0) {
      operator_delete__(local_d4[0]);
      local_d4[0] = (void *)0x0;
    }
    if (local_50.Data != (char *)0x0) {
      operator_delete__(local_50.Data);
      local_50.Data = (char *)0x0;
    }
    if (local_e0 != (void *)0x0) {
      operator_delete__(local_e0);
      local_e0 = (void *)0x0;
    }
    if (local_ec[0] != (void *)0x0) {
      operator_delete__(local_ec[0]);
      local_ec[0] = (void *)0x0;
    }
    if (local_5c.Data != (char *)0x0) {
      operator_delete__(local_5c.Data);
      local_5c.Data = (char *)0x0;
    }
    if (local_74.Data != (char *)0x0) {
      operator_delete__(local_74.Data);
      local_74.Data = (char *)0x0;
    }
    if (local_38.Data != (char *)0x0) {
      operator_delete__(local_38.Data);
      local_38.Data = (char *)0x0;
    }
    if (local_68.Data != (char *)0x0) {
      operator_delete__(local_68.Data);
    }
  }
  *(undefined1 *)param_1[1] = 0;
  NodeMouseOver__dtor((NodeMouseOver *)&stack0x00000014);
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0083a790 83a790_FUN_0083a790 ====
void __thiscall FUN_0083a790(GameManager *param_1,Str_L_char_G_ *param_2,undefined4 param_3,int param_4, TextureInitOptions *param_5);

// decompiled by BatchDecomp @ 83a790 name=FUN_0083a790 conv=unknown body=507

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FUN_0083a790(GameManager *param_1,Str_L_char_G_ *param_2,undefined4 param_3,int param_4,
            TextureInitOptions *param_5)

{
  undefined4 stack0xfffffffc;
  Type TVar1;
  Type TVar2;
  Type TVar3;
  int iVar4;
  bool bVar5;
  char *pcVar6;
  Str_L_char_G_ *pSVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  char *pcVar11;
  undefined4 uVar12;
  Str_L_char_G_ local_54;
  Str_L_char_G_ local_48;
  int local_3c;
  Str_L_char_G_ local_38;
  undefined4 *local_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  TextureStack local_1c;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_2c = (undefined4 *)0x0;
  uStack_28 = 0;
  iStack_24 = 0;
  uStack_20 = 0;
  GameManager__GetValidFileInAllResourcePaths(param_1,(ResourceType)&local_2c,param_2);
  local_c = 0;
  if (0 < iStack_24) {
    do {
      pSVar7 = (Str_L_char_G_ *)(*(code *)*local_2c)(&local_c);
      util__Str_char___Str_char(&local_48,pSVar7);
      uVar12 = 0xb3;
      local_38.Length = 0;
      *(undefined4 *)(param_4 + 0x10) = 0;
      TVar1 = param_5->TextureS;
      TVar2 = param_5->TextureT;
      TVar3 = param_5->TextureR;
      *(undefined4 *)(param_4 + 0x14) = *(undefined4 *)param_5;
      *(Type *)(param_4 + 0x18) = TVar1;
      *(Type *)(param_4 + 0x1c) = TVar2;
      *(Type *)(param_4 + 0x20) = TVar3;
      iVar9 = (param_5->Mipmaps).Data.MinLevel;
      iVar4 = (param_5->Mipmaps).Data.MaxLevel.Data;
      uVar10 = *(undefined4 *)&(param_5->Mipmaps).Data.MaxLevel.IsValidData;
      *(Type *)(param_4 + 0x24) = param_5->Channels;
      *(int *)(param_4 + 0x28) = iVar9;
      *(int *)(param_4 + 0x2c) = iVar4;
      *(undefined4 *)(param_4 + 0x30) = uVar10;
      *(undefined8 *)(param_4 + 0x34) = *(undefined8 *)&(param_5->Mipmaps).IsValidData;
      if ((param_5->Mipmaps).IsValidData == false) {
        uVar12 = 0xb0;
      }
      local_38.Data = (char *)0x0;
      local_38.Capacity = 0;
      util__Str_char___Str_char(&local_38,&local_48);
      pcVar6 = local_38.Data;
      pcVar8 = "";
      if (0 < local_38.Capacity) {
        pcVar8 = local_38.Data;
      }
      iVar9 = _SOIL_load_OGL_texture(pcVar8,0,0,uVar12);
      local_3c = iVar9;
      glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\textures.cpp",0x156);
      pcVar8 = local_48.Data;
      if (iVar9 == 0) {
        pcVar11 = "";
        if (0 < local_48.Capacity) {
          pcVar11 = local_48.Data;
        }
        uVar10 = _SOIL_last_result();
        pSVar7 = util__Printf(&local_54,
                              "Error: Could not initialize texture file %s (SOIL Error: %s)!\n",
                              pcVar11,uVar10);
        util__Log(pSVar7);
        if (local_54.Data != (char *)0x0) {
          operator_delete__(local_54.Data);
          local_54.Data = (char *)0x0;
        }
        if (pcVar6 != (char *)0x0) {
          operator_delete__(pcVar6);
          ((slice_view *)&local_38)->_0_8_ = ((slice_view *)&local_38)->_0_8_ & 0xffffffff00000000;
        }
        bVar5 = false;
      }
      else {
        *(int *)(param_4 + 0xc) = local_3c;
        glGetTexLevelParameteriv(0xde1,0,0x1000,param_4 + 4);
        glGetTexLevelParameteriv(0xde1,0,0x1001,param_4 + 8);
        if (pcVar6 != (char *)0x0) {
          operator_delete__(pcVar6);
          ((slice_view *)&local_38)->_0_8_ = ((slice_view *)&local_38)->_0_8_ & 0xffffffff00000000;
        }
        bVar5 = true;
      }
      Graphics__TextureStack__TextureStack(&local_1c,*(uint *)(param_4 + 0xc),*(Type *)(param_4 + 0x10),0);
      ResolveTextureInitOptions(param_5,*(Type *)(param_4 + 0x10));
      Graphics__TextureStack___TextureStack(&local_1c);
      if (pcVar8 != (char *)0x0) {
        operator_delete__(pcVar8);
        local_48.Data = (char *)0x0;
      }
    } while ((!bVar5) && (local_c = local_c + 1, local_c < iStack_24));
  }
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&local_2c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00855da0 855da0_FUN_00855da0 ====
undefined4 FUN_00855da0(undefined4 param_1,uint param_2,uint param_3);
extern undefined4 FUN_00855e00(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_00855ea0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 855da0 name=FUN_00855da0 conv=unknown body=92

undefined4 FUN_00855da0(undefined4 param_1,uint param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00855e80(param_1);
  if (param_2 < param_3) {
    do {
      iVar3 = FUN_00855e00(param_2,0x20);
      if (iVar2 == iVar3) {
        cVar1 = FUN_00855ea0(param_1,param_2,iVar3);
        if (cVar1 != '\0') {
          return 1;
        }
      }
      param_2 = param_2 + 1 + iVar3;
    } while (param_2 < param_3);
  }
  return 0;
}


//==== 008a9ff0 8a9ff0_FUN_008a9ff0 ====
void FUN_008a9ff0(int *param_1,int *param_2,Interface *param_3,Vec2_L_double_G_ *param_4);
extern undefined4 FUN_008ac5f0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 8a9ff0 name=FUN_008a9ff0 conv=unknown body=490

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_008a9ff0(int *param_1,int *param_2,Interface *param_3,Vec2_L_double_G_ *param_4)

{
  undefined4 stack0xfffffffc;
  ReferenceController *pRVar1;
  ReferenceController *pRVar2;
  undefined4 uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 local_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined8 local_24;
  int local_1c;
  int iStack_18;
  undefined4 uStack_14;
  int iStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar6 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
  if (local_c < iVar6) {
    do {
      puVar7 = (undefined4 *)(**(code **)*param_1)(&local_c);
      if (((*param_2 == 0) || ((ReferenceController *)param_2[1] == (ReferenceController *)0x0)) ||
         (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]),
         !bVar4)) {
        local_1c = 0;
        iStack_18 = 0;
        uStack_14 = 0;
        iStack_10 = 0;
        util__Stack_class_util__WeakPtr_struct_UIWidget_____Stack_class_util__WeakPtr_struct_UIWidget((Stack_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_1c,0);
        local_34 = 0;
        iStack_30 = 0;
        iStack_2c = 0;
        uStack_28 = 0;
        util__Darray_class_util__WeakPtr_struct_UIWidget_____Darray_class_util__WeakPtr_struct_UIWidget__o2((Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_34,1);
        iVar6 = iStack_2c;
        local_24 = CONCAT44(iStack_2c + 1,(int)local_24);
        util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_34,(int *)((int)&local_24 + 4)
                  );
        bVar4 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_34,iVar6);
        if (bVar4) {
          pRVar1 = *(ReferenceController **)(iStack_30 + -4 + iStack_2c * 8);
          iVar6 = iStack_30 + iStack_2c * 8;
          *(undefined4 *)(iVar6 + -8) = *puVar7;
          pRVar2 = (ReferenceController *)puVar7[1];
          *(ReferenceController **)(iVar6 + -4) = pRVar2;
          if (pRVar2 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(pRVar2);
          }
          if (pRVar1 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(pRVar1);
          }
        }
        Interface__GetWidgetDisplayStackRecursive(param_3,(Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_34,
                   (Stack_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_1c,*param_4);
        util__Darray_class_util__WeakPtr_struct_UIWidget______Darray_class_util__WeakPtr_struct_UIWidget((Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_34);
        while ((0 < iStack_18 &&
               (((*param_2 == 0 || ((ReferenceController *)param_2[1] == (ReferenceController *)0x0)
                 ) || (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]), !bVar4))))) {
          local_24 = 0;
          if (iStack_18 == 0) {
            local_24 = 0;
          }
          else {
            pRVar1 = *(ReferenceController **)(local_1c + -4 + iStack_18 * 8);
            uVar3 = *(undefined4 *)(local_1c + -8 + iStack_18 * 8);
            if (pRVar1 != (ReferenceController *)0x0) {
              util__ReferenceController__AddWeakReference(pRVar1);
            }
            iStack_18 = iStack_18 + -1;
            local_24 = CONCAT44(pRVar1,uVar3);
            iStack_10 = local_1c + iStack_18 * 8;
            if (pRVar1 != (ReferenceController *)0x0) {
              util__ReferenceController__AddWeakReference(pRVar1);
              util__ReferenceController__ReleaseWeakReference(pRVar1);
            }
          }
          cVar5 = FUN_008ac5f0(&local_24);
          pRVar1 = ((slice_view *)&local_24)->_4_4_;
          if (cVar5 != '\0') {
            pRVar2 = (ReferenceController *)param_2[1];
            *param_2 = (int)local_24;
            param_2[1] = (int)((slice_view *)&local_24)->_4_4_;
            if (((slice_view *)&local_24)->_4_4_ != (ReferenceController *)0x0) {
              util__ReferenceController__AddWeakReference(((slice_view *)&local_24)->_4_4_);
            }
            if (pRVar2 != (ReferenceController *)0x0) {
              util__ReferenceController__ReleaseWeakReference(pRVar2);
            }
          }
          if (pRVar1 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(pRVar1);
          }
        }
        util__Stack_class_util__WeakPtr_struct_UIWidget______Stack_class_util__WeakPtr_struct_UIWidget((Stack_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_1c);
      }
      local_c = local_c + 1;
      iVar6 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
    } while (local_c < iVar6);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 008dc510 8dc510___glfwInputFramebufferSize ====
// decompiled by BatchDecomp @ 8dc510 name=__glfwInputFramebufferSize conv=unknown body=21

void __glfwInputFramebufferSize(int param_1)

{
  if (*(code **)(param_1 + 0x25c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008dc522. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x25c))();
    return;
  }
  return;
}


//==== 008dc570 8dc570___glfwInputWindowFocus ====
// decompiled by BatchDecomp @ 8dc570 name=__glfwInputWindowFocus conv=unknown body=128

void __glfwInputWindowFocus(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    if (*(code **)(param_1 + 0x254) != (code *)0x0) {
      (**(code **)(param_1 + 0x254))(param_1,0);
    }
    iVar1 = 0;
    do {
      if (*(char *)(param_1 + 0x68 + iVar1) == '\x01') {
        __glfwInputKey(param_1,iVar1,0,0,0);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x15d);
    iVar1 = 0;
    do {
      if (*(char *)(param_1 + 0x60 + iVar1) == '\x01') {
        __glfwInputMouseClick(param_1,iVar1,0,0);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 8);
  }
  else if (*(code **)(param_1 + 0x254) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008dc58e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x254))();
    return;
  }
  return;
}


//==== 008dc5f0 8dc5f0___glfwInputWindowIconify ====
// decompiled by BatchDecomp @ 8dc5f0 name=__glfwInputWindowIconify conv=unknown body=21

void __glfwInputWindowIconify(int param_1)

{
  if (*(code **)(param_1 + 600) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008dc602. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 600))();
    return;
  }
  return;
}


//==== 008dc620 8dc620___glfwInputWindowPos ====
// decompiled by BatchDecomp @ 8dc620 name=__glfwInputWindowPos conv=unknown body=21

void __glfwInputWindowPos(int param_1)

{
  if (*(code **)(param_1 + 0x244) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008dc632. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x244))();
    return;
  }
  return;
}


//==== 008dc640 8dc640___glfwInputWindowSize ====
// decompiled by BatchDecomp @ 8dc640 name=__glfwInputWindowSize conv=unknown body=21

void __glfwInputWindowSize(int param_1)

{
  if (*(code **)(param_1 + 0x248) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008dc652. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x248))();
    return;
  }
  return;
}


//==== 008dcd20 8dcd20___glfwInputChar ====
// decompiled by BatchDecomp @ 8dcd20 name=__glfwInputChar conv=unknown body=76

void __glfwInputChar(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  if ((0x1f < param_2) && ((param_2 < 0x7f || (0x9f < param_2)))) {
    if (*(code **)(param_1 + 0x278) != (code *)0x0) {
      (**(code **)(param_1 + 0x278))(param_1,param_2,param_3);
    }
    if ((param_4 != 0) && (*(code **)(param_1 + 0x274) != (code *)0x0)) {
      (**(code **)(param_1 + 0x274))(param_1,param_2);
    }
  }
  return;
}


//==== 008dec50 8dec50___glfwPlatformIconifyWindow ====
// decompiled by BatchDecomp @ 8dec50 name=__glfwPlatformIconifyWindow conv=unknown body=19

void __glfwPlatformIconifyWindow(int param_1)

{
  ShowWindow(*(HWND *)(param_1 + 0x280),6);
  return;
}


//==== 008dfc00 8dfc00_FUN_008dfc00 ====
void FUN_008dfc00(DWORD param_1,DWORD param_2,int param_3,int param_4,int *param_5,int *param_6);

// decompiled by BatchDecomp @ 8dfc00 name=FUN_008dfc00 conv=unknown body=114

void FUN_008dfc00(DWORD param_1,DWORD param_2,int param_3,int param_4,int *param_5,int *param_6)

{
  tagRECT local_14;
  uint local_4;
  
  local_4 = __security_cookie ^ (uint)&local_14;
  local_14.right = param_3;
  local_14.bottom = param_4;
  local_14.left = 0;
  local_14.top = 0;
  AdjustWindowRectEx(&local_14,param_1,0,param_2);
  *param_5 = local_14.right - local_14.left;
  *param_6 = local_14.bottom - local_14.top;
  __security_check_cookie(local_4 ^ (uint)&local_14);
  return;
}


//==== 008dfcd0 8dfcd0_FUN_008dfcd0 ====
undefined4 FUN_008dfcd0(int param_1);

// decompiled by BatchDecomp @ 8dfcd0 name=FUN_008dfcd0 conv=unknown body=27

undefined4 FUN_008dfcd0(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x34) != 0) || (uVar1 = 0x40000, *(int *)(param_1 + 0x10) != 0)) {
    uVar1 = 0x40008;
  }
  return uVar1;
}


//==== 008dfcf0 8dfcf0_FUN_008dfcf0 ====
undefined4 FUN_008dfcf0(int param_1);

// decompiled by BatchDecomp @ 8dfcf0 name=FUN_008dfcf0 conv=unknown body=40

undefined4 FUN_008dfcf0(int param_1)

{
  if ((*(int *)(param_1 + 0x34) == 0) && (*(int *)(param_1 + 8) != 0)) {
    if (*(int *)(param_1 + 4) != 0) {
      return 0x6cf0000;
    }
    return 0x6ca0000;
  }
  return 0x86000000;
}


//==== 008dfd20 8dfd20_FUN_008dfd20 ====
void FUN_008dfd20(int param_1);

// decompiled by BatchDecomp @ 8dfd20 name=FUN_008dfd20 conv=unknown body=34

void FUN_008dfd20(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x34) + 0xc) == param_1) {
    __glfwInputMonitorWindowChange(*(int *)(param_1 + 0x34),0);
    __glfwRestoreVideoModeWin32(*(undefined4 *)(param_1 + 0x34));
  }
  return;
}


//==== 008dfe80 8dfe80_FUN_008dfe80 ====
void FUN_008dfe80(int param_1);

// decompiled by BatchDecomp @ 8dfe80 name=FUN_008dfe80 conv=unknown body=60

void FUN_008dfe80(int param_1)

{
  HCURSOR hCursor;
  
  if (*(int *)(param_1 + 0x5c) != 0x34001) {
    SetCursor((HCURSOR)0x0);
    return;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    SetCursor(*(HCURSOR *)(*(int *)(param_1 + 0x38) + 4));
    return;
  }
  hCursor = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
  SetCursor(hCursor);
  return;
}

