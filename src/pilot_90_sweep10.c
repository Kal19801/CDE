// pilot_sweep_sweep10.c - assembled by scripts/sweep_assemble.py (r19)
// reuses fam8_assemble fix passes (zip oracle/in-batch protos/vft channel/data closure)
/* ---- r20 incomplete-type forward decls (pointer-position only) ---- */
typedef struct util__Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G util__Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G;
#include "port_prelude.h"
#include "cde_win32_compat.h"
#include "cde_types_r20.h"
typedef union {
  undefined1 raw[32];
} slice_view;

//==== 0080a190 80a190_MinimapWidget___scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 80a190 name=`scalar_deleting_destructor' conv=__thiscall body=139

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall MinimapWidget::`scalar deleting destructor'(unsigned int) */

void * __thiscall MinimapWidget___scalar_deleting_destructor_(MinimapWidget *this,uint param_1)

{
  ReferenceController *pRVar1;
  
  pRVar1 = (this->RangeWidget).Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  pRVar1 = (this->ItemComponent).Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
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
    operator_delete(this,0x1a8);
  }
  return this;
}


//==== 00814040 814040_SpacecraftCompartmentUI___scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 814040 name=`scalar_deleting_destructor' conv=__thiscall body=120

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall SpacecraftCompartmentUI::`scalar deleting destructor'(unsigned
   int) */

void * __thiscall
SpacecraftCompartmentUI___scalar_deleting_destructor_(SpacecraftCompartmentUI *this,uint param_1)

{
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&(this->ForShips).Value);
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
    operator_delete(this,0x188);
  }
  return this;
}


//==== 008140c0 8140c0_SpacecraftUIOverlay___scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 8140c0 name=`scalar_deleting_destructor' conv=__thiscall body=221

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall SpacecraftUIOverlay::`scalar deleting destructor'(unsigned int)
    */

void * __thiscall
SpacecraftUIOverlay___scalar_deleting_destructor_(SpacecraftUIOverlay *this,uint param_1)

{
  ReferenceController *this_00;
  SharedPtr_L_CompartmentButton_G_ *this_01;
  bool bVar1;
  ReferenceControllerRegistry *this_02;
  ShipArmorButton *pSVar2;
  
  this_00 = (this->ArmorButton).Controller;
  if (this_00 != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__ReleaseStrongReference(this_00);
    if (bVar1) {
      pSVar2 = (this->ArmorButton).Pointer;
      if (pSVar2 != (ShipArmorButton *)0x0) {
        (**(code **)(pSVar2->_pad_0x0_0 + 4))(1);
        pSVar2 = (this->ArmorButton).Pointer;
      }
      this_02 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(this_02,pSVar2);
      (this->ArmorButton).Pointer = (ShipArmorButton *)0x0;
    }
  }
  this_01 = (this->CompartmentButtons).Data;
  (this->CompartmentButtons)._pad_0x0_0 =
       (int)((void *)(0x0091d1bcu));
  if (this_01 != (SharedPtr_L_CompartmentButton_G_ *)0x0) {
    util__SharedPtr_L_struct_UIWidget_G____vector_deleting_destructor
              ((SharedPtr_L_struct_UIWidget_G_ *)this_01,3);
  }
  (this->CompartmentButtons).Data = (SharedPtr_L_CompartmentButton_G_ *)0x0;
  (this->CompartmentButtons)._pad_0x0_0 = (int)((void *)(0x00919488u));
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
    operator_delete(this,0x188);
  }
  return this;
}


//==== 00815280 815280_ModuleUI__GetCompartments ====
extern undefined4 FUN_0080e5c0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 815280 name=GetCompartments conv=__thiscall body=170

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: class util__Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G __thiscall
   ModuleUI__GetCompartments(void)const  */

Darray_L_class_util__WeakPtr_L_class_Body_G___G_ * __thiscall ModuleUI__GetCompartments(ModuleUI *this)

{
  int iVar1;
  ReferenceController *this_00;
  ReferenceController *this_01;
  bool bVar2;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *in_stack_00000004;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_18[16];
  int local_8;
  
  if (this->ModuleType != (Module *)0x0) {
    ShipGroupUI__GetShipsInGroup((ShipGroupUI *)this);
    FUN_0080e5c0();
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_18);
    return in_stack_00000004;
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body(in_stack_00000004,1);
  iVar1 = *(int *)(in_stack_00000004 + 8);
  local_8 = iVar1 + 1;
  util__Darray_class_util__WeakPtr_class_Body_____SetSize(in_stack_00000004,&local_8);
  bVar2 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(in_stack_00000004,iVar1);
  if (bVar2) {
    this_00 = *(ReferenceController **)
               (*(int *)(in_stack_00000004 + 4) + -4 + *(int *)(in_stack_00000004 + 8) * 8);
    iVar1 = *(int *)(in_stack_00000004 + 4) + *(int *)(in_stack_00000004 + 8) * 8;
    *(ModuleCompartment **)(iVar1 + -8) = (this->TargetCompartment).Pointer;
    this_01 = (this->TargetCompartment).Controller;
    *(ReferenceController **)(iVar1 + -4) = this_01;
    if (this_01 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_01);
    }
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(this_00);
    }
  }
  return in_stack_00000004;
}

