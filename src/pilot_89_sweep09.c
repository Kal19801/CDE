// pilot_sweep_sweep09.c - assembled by scripts/sweep_assemble.py (r19)
// reuses fam8_assemble fix passes (zip oracle/in-batch protos/vft channel/data closure)
/* ---- r20 incomplete-type forward decls (pointer-position only) ---- */
typedef struct Darray_L_GraphicsResource__Type_G_ Darray_L_GraphicsResource__Type_G_;
typedef struct util__Maybe_L_struct_FixedOrbit_G util__Maybe_L_struct_FixedOrbit_G;
#include "port_prelude.h"
#include "cde_win32_compat.h"
#include "cde_types_r20.h"
typedef union {
  struct {
    undefined4 _0_4_;
    undefined4 _4_4_;
    undefined4 _8_4_;
    undefined4 _12_4_;
  };
  undefined1 raw[32];
} slice_view;
/* ---- r21 hdr-conflict renames (decl stays OLD for game TUs; pilot impl+calls = NEW; linker aliases OLD -> NEW) ---- */
#undef Body__GetSpacecraftComponent_Memoize
#define Body__GetSpacecraftComponent_Memoize Body__GetSpacecraftComponent_Memoize__r20
/* ---- externs: stub-oracle names (K&R; ret types by call site) ---- */
extern int Body__GetSpacecraftComponent_Clear(); /* K&R stub; ret by call site */
extern int FixedOrbit__dtor(); /* K&R stub; ret by call site */
extern int NodeMouseOver__dtor(); /* K&R stub; ret by call site */

//==== 0079d090 79d090_OrbitUI__GetProjectedOrbit ====
// decompiled by BatchDecomp @ 79d090 name=GetProjectedOrbit conv=__thiscall body=323

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util__Maybe_L_struct_FixedOrbit_G __thiscall OrbitUI__GetProjectedOrbit(void)const  */

FixedOrbit * __thiscall OrbitUI__GetProjectedOrbit(OrbitUI *this)

{
  Maybe_L_double_G_ MVar1;
  bool bVar2;
  bool bVar3;
  WorldObject *pWVar4;
  ScenarioEditor *this_00;
  undefined4 *puVar5;
  FixedOrbit *pFVar6;
  undefined4 unaff_ESI;
  FixedOrbit *in_stack_00000004;
  undefined4 uVar7;
  undefined4 in_stack_fffffc40;
  undefined4 uVar8;
  undefined4 uVar9;
  WorldObject local_3b0;
  FixedOrbit local_f8;
  undefined8 local_10;
  char local_5;
  
  bVar3 = false;
  local_10 = (double)(ulonglong)(uint)local_10;
  if (this->IsProjectedOrbit != false) {
    bVar3 = true;
    in_stack_fffffc40 = 0x79d0bb;
    pWVar4 = GetSelection(this,&local_3b0);
    bVar2 = WorldObject__IsFleet(pWVar4);
    local_5 = '\x01';
    if (bVar2) goto LAB_0079d0cd;
  }
  local_5 = '\0';
LAB_0079d0cd:
  if (bVar3) {
    NodeMouseOver__dtor(&local_3b0.Node);
    if (local_3b0.Object.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_3b0.Object.Controller);
    }
  }
  if (local_5 == '\0') {
    FixedOrbit__FixedOrbit(in_stack_00000004);
    *(undefined1 *)&in_stack_00000004[1].OrbitedBody.Pointer = 0;
  }
  else {
    bVar3 = IsInStrategicGame(this);
    if (bVar3) {
      uVar9 = 0x79d109;
      local_10 = StrategicManager__GetLookaheadTimeSinceJ2000_s((StrategicManager *)this->_pad_0x0_0)
      ;
    }
    else {
      this_00 = (ScenarioEditor *)
                MatterCloudComponent__GetParticlesPerPacket((MatterCloudComponent *)this->_pad_0x0_0)
      ;
      uVar9 = 0x79d117;
      local_10 = ScenarioEditor__GetStartTime_s(this_00);
    }
    uVar7 = *(undefined4 *)((char *)&local_10 + 4);
    uVar8 = CONCAT31((int3)((uint)in_stack_fffffc40 >> 8),1);
    pWVar4 = GetSelection(this,&local_3b0);
    puVar5 = (undefined4 *)WorldObject__AsFleet(pWVar4);
    if ((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) {
      bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]);
      if (!bVar3) {
        *puVar5 = 0;
      }
    }
    ((slice_view *)&MVar1.Data)->_4_4_ = uVar8;
    ((slice_view *)&MVar1.Data)->_0_4_ = uVar7;
    ((slice_view *)&MVar1)->_8_4_ = uVar9;
    ((slice_view *)&MVar1)->_12_4_ = unaff_ESI;
    pFVar6 = Fleet__GetEstimatedOrbit((Fleet *)*puVar5,&local_f8,MVar1);
    FixedOrbit__FixedOrbit(in_stack_00000004,pFVar6);
    *(undefined1 *)&in_stack_00000004[1].OrbitedBody.Pointer = 1;
    FixedOrbit__dtor(&local_f8);
    if (((slice_view *)&local_10)->_4_4_ != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_10)->_4_4_);
    }
    NodeMouseOver__dtor(&local_3b0.Node);
    if (local_3b0.Object.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_3b0.Object.Controller);
      return in_stack_00000004;
    }
  }
  return in_stack_00000004;
}


//==== 007a67f0 7a67f0_FrameOfReferenceMarker___scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 7a67f0 name=`scalar_deleting_destructor' conv=__thiscall body=135

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall FrameOfReferenceMarker::`scalar deleting destructor'(unsigned
   int) */

void * __thiscall
FrameOfReferenceMarker___scalar_deleting_destructor_(FrameOfReferenceMarker *this,uint param_1)

{
  ReferenceController *this_00;
  
  NodeMouseOver__dtor(&(this->LastReference).Node);
  this_00 = (this->LastReference).Object.Controller;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
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
    operator_delete(this,0x430);
  }
  return this;
}


//==== 007a6880 7a6880_HUDStrategic___scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 7a6880 name=`scalar_deleting_destructor' conv=__thiscall body=150

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall HUDStrategic::`scalar deleting destructor'(unsigned int) */

void * __thiscall HUDStrategic___scalar_deleting_destructor_(HUDStrategic *this,uint param_1)

{
  ReferenceController *pRVar1;
  
  pRVar1 = (this->ItineraryUI).Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  util__Darray_class_util__SharedPtr_struct_BalloonPopup______Darray_class_util__SharedPtr_struct_BalloonPopup((Darray_L_class_util__SharedPtr_L_struct_BalloonPopup_G___G_ *)
             &(this->PopupManager).BalloonPopups);
  pRVar1 = (this->Dropdown).Popup.Controller;
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
    operator_delete(this,0x1c0);
  }
  return this;
}


//==== 007b4780 7b4780_Body__GetSpacecraftComponent_Memoize ====
extern undefined4 FUN_0065da20(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_007acfc0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 7b4780 name=FUN_0065da20 conv=__thiscall body=405

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__GetSpacecraftComponent_Memoize(void)const  */

void __thiscall Body__GetSpacecraftComponent_Memoize(Body *this)

{
  undefined4 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  ReferenceController *pRVar4;
  ReferenceController *this_00;
  ReferenceController *this_01;
  Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *pDVar5;
  Darray_L_util__SharedPtr_L_Component_G___G_ *pDVar6;
  Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ local_40[16];
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_30[16];
  ReferenceController *local_20;
  SpacecraftComponent *local_1c;
  undefined4 local_18;
  undefined4 *puStack_14;
  int iStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_20 = (ReferenceController *)0x0;
  if ((this->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
    iVar1 = (this->BodyMemoizationHandlerInstance).ResetFunctions.Size;
    local_1c = (SpacecraftComponent *)(iVar1 + 1);
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->BodyMemoizationHandlerInstance,
               (int *)&local_1c);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&this->BodyMemoizationHandlerInstance,
                       iVar1);
    if (bVar2) {
      (this->BodyMemoizationHandlerInstance).ResetFunctions.Data
      [(this->BodyMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_eabaeed5, Body__GetSpacecraftComponent_Clear);
    }
    pDVar6 = &this->Components;
    pDVar5 = local_40;
    local_18 = 0;
    puStack_14 = (undefined4 *)0x0;
    iStack_10 = 0;
    uStack_c = 0;
    uVar3 = util__GetSpacecraftComponent_Memoize(pDVar5);
    local_1c = (SpacecraftComponent *)((uint)local_1c & 0xffffff00);
    uVar3 = FUN_007acfc0(local_30,uVar3,local_1c,pDVar5,pDVar6);
    local_1c = (SpacecraftComponent *)((uint)local_1c & 0xffffff00);
    FUN_0065da20(&local_18,uVar3,local_1c);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_30);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_40);
    iVar1 = iStack_10;
    if (1 < iStack_10) {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\tactical\\body.cpp",0x1d7,
                      "CraftComps.Num() <= 1",(char *)0x0);
      DebugBreak();
    }
    if (iVar1 == 1) {
      this_00 = (ReferenceController *)puStack_14[1];
      local_1c = (SpacecraftComponent *)*puStack_14;
      if (this_00 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(this_00);
      }
      pRVar4 = (ReferenceController *)0x1;
      this_01 = this_00;
      if (this_00 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(this_00);
        pRVar4 = (ReferenceController *)0x1;
      }
    }
    else {
      pRVar4 = (ReferenceController *)0x2;
      local_1c = (SpacecraftComponent *)0x0;
      this_00 = (ReferenceController *)0x0;
      this_01 = local_20;
    }
    if ((((uint)pRVar4 & 2) != 0) &&
       (local_20 = (ReferenceController *)((uint)pRVar4 & 0xfffffffd), pRVar4 = local_20,
       local_1c != (SpacecraftComponent *)0x0)) {
      util__ReferenceController__ReleaseWeakReference((ReferenceController *)local_1c);
      pRVar4 = local_20;
    }
    if ((this_01 != (ReferenceController *)0x0) && (((uint)pRVar4 & 1) != 0)) {
      util__ReferenceController__ReleaseWeakReference(this_01);
    }
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_18);
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_00);
    }
    pRVar4 = (this->GetSpacecraftComponent_MemoizedValue).Data.Controller;
    (this->GetSpacecraftComponent_MemoizedValue).Data.Pointer = local_1c;
    (this->GetSpacecraftComponent_MemoizedValue).Data.Controller = this_00;
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_00);
    }
    if (pRVar4 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(pRVar4);
    }
    (this->GetSpacecraftComponent_MemoizedValue).IsValidData = true;
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(this_00);
      util__ReferenceController__ReleaseWeakReference(this_00);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

