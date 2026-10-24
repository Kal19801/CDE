// Auto-generated from Ghidra decompilation
#include "port_prelude.h"

/* h3 forward decls: sret/sig fns called before def (implicit-decl conflict fix) */
Str_L_char_G_ * HUDStrategic__GetRunTurnLabel(Str_L_char_G_ *__return_storage_ptr__);
Str_L_char_G_ * HUDStrategic__GetRunTurnVerboseTooltip(Str_L_char_G_ *__return_storage_ptr__);
Range_L_double_G_ * HUDStrategic__GetTimeLeftBarPercentages(Range_L_double_G_ *__return_storage_ptr__);
Color * HUDStrategic__GetTimeLeftColor(Color *__return_storage_ptr__);
AABB_L_util__Vec2_L_int_G___G_ * HUDStrategic__GetWorkableScreenArea(AABB_L_util__Vec2_L_int_G___G_ *__return_storage_ptr__);
void HUDStrategic__SendPopupToBacklog(_func_void *param_1,Str_L_char_G_ param_2,Str_L_char_G_ param_3);

//==== 0077a1e0 MethodCallerConst__private__class_util__Str_char____thiscall_HUDItineraryInfoPanel__GetBeginCancelItineraryTitle_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_struct_HUDItineraryInfoPanel_Cclassutil__Str_L_char_G__G___MethodCallerConst_L__private_classutil__Str_L_char_G____thiscallHUDItineraryInfoPanel__GetBeginCancelItineraryTitle_void_const_G_(void const * const)
    */

Str_L_char_G_ *
util__DelegateFactory_struct_HUDItineraryInfoPanel_class_util__Str_char_____MethodCallerConst__private__class_util__Str_char____thiscall_HUDItineraryInfoPanel__GetBeginCancelItineraryTitle_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ local_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(HUDItineraryInfoPanel__GetBeginCancelItineraryTitle(&local_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 0077a220 MethodCallerConst__private__class_util__Str_char____thiscall_HUDItineraryInfoPanel__GetBeginCancelItineraryVerboseTooltip_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_struct_HUDItineraryInfoPanel_Cclassutil__Str_L_char_G__G___MethodCallerConst_L__private_classutil__Str_L_char_G____thiscallHUDItineraryInfoPanel__GetBeginCancelItineraryVerboseTooltip_void_const_G_(void const *
   const) */

Str_L_char_G_ *
util__DelegateFactory_struct_HUDItineraryInfoPanel_class_util__Str_char_____MethodCallerConst__private__class_util__Str_char____thiscall_HUDItineraryInfoPanel__GetBeginCancelItineraryVerboseTooltip_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ local_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(HUDItineraryInfoPanel__GetBeginCancelItineraryVerboseTooltip(&local_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 0077a470 MethodCallerConst__public__struct_util__Range_double____thiscall_BurnInfoCustomWidget__GetBurnStatusBarRanges_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static struct util__Range_L_double_G_ __cdecl util__DelegateFactory_L_struct_BurnInfoCustomWidget_Cstructutil__Range_L_double_G__G___MethodCallerConst_L__public_struct_util__Range_L_double_G___thiscallBurnInfoCustomWidget__GetBurnStatusBarRanges_void_const_G_(void
   const * const) */

Range_L_double_G_ *
util__DelegateFactory_struct_BurnInfoCustomWidget_struct_util__Range_double_____MethodCallerConst__public__struct_util__Range_double____thiscall_BurnInfoCustomWidget__GetBurnStatusBarRanges_void_const
          (Range_L_double_G_ *__return_storage_ptr__,void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Range_L_double_G_ *pRVar4;
  Range_L_double_G_ local_14;
  
  pRVar4 = (Range_L_double_G_ *)(uintptr_t)(BurnInfoCustomWidget__GetBurnStatusBarRanges(&local_14));
  uVar1 = *(undefined4 *)((int)&pRVar4->Lower + 4);
  uVar2 = *(undefined4 *)&pRVar4->Upper;
  uVar3 = *(undefined4 *)((int)&pRVar4->Upper + 4);
  *(undefined4 *)&__return_storage_ptr__->Lower = *(undefined4 *)&pRVar4->Lower;
  *(undefined4 *)((int)&__return_storage_ptr__->Lower + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Upper = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Upper + 4) = uVar3;
  return __return_storage_ptr__;
}





//==== 0077a490 MethodCallerConst__public__class_util__Str_char____thiscall_BurnInfoCustomWidget__GetBurnStatusBarText_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_struct_BurnInfoCustomWidget_Cclassutil__Str_L_char_G__G___MethodCallerConst_L__public_classutil__Str_L_char_G____thiscallBurnInfoCustomWidget__GetBurnStatusBarText_void_const_G_(void const * const) */

Str_L_char_G_ *
util__DelegateFactory_struct_BurnInfoCustomWidget_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_BurnInfoCustomWidget__GetBurnStatusBarText_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ local_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(BurnInfoCustomWidget__GetBurnStatusBarText(&local_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 0077a5b0 MethodCallerConst__private__struct_util__Range_double____thiscall_HUDItineraryInfoPanel__GetItineraryStatusBarRanges_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static struct util__Range_L_double_G_ __cdecl util__DelegateFactory_L_struct_HUDItineraryInfoPanel_Cstructutil__Range_L_double_G__G___MethodCallerConst_L__private_struct_util__Range_L_double_G___thiscallHUDItineraryInfoPanel__GetItineraryStatusBarRanges_void_const__G_(void const * const) */

Range_L_double_G_ *
util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Range_double_____MethodCallerConst__private__struct_util__Range_double____thiscall_HUDItineraryInfoPanel__GetItineraryStatusBarRanges_void_const
          (Range_L_double_G_ *__return_storage_ptr__,void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Range_L_double_G_ *pRVar4;
  Range_L_double_G_ local_14;
  
  pRVar4 = (Range_L_double_G_ *)(uintptr_t)(HUDItineraryInfoPanel__GetItineraryStatusBarRanges(&local_14));
  uVar1 = *(undefined4 *)((int)&pRVar4->Lower + 4);
  uVar2 = *(undefined4 *)&pRVar4->Upper;
  uVar3 = *(undefined4 *)((int)&pRVar4->Upper + 4);
  *(undefined4 *)&__return_storage_ptr__->Lower = *(undefined4 *)&pRVar4->Lower;
  *(undefined4 *)((int)&__return_storage_ptr__->Lower + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Upper = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Upper + 4) = uVar3;
  return __return_storage_ptr__;
}





//==== 0077a5d0 MethodCallerConst__private__class_util__Str_char____thiscall_HUDItineraryInfoPanel__GetItineraryStatusBarText_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_struct_HUDItineraryInfoPanel_Cclassutil__Str_L_char_G__G___MethodCallerConst_L__private_classutil__Str_L_char_G____thiscallHUDItineraryInfoPanel__GetItineraryStatusBarText_void_const_G_(void const * const) */

Str_L_char_G_ *
util__DelegateFactory_struct_HUDItineraryInfoPanel_class_util__Str_char_____MethodCallerConst__private__class_util__Str_char____thiscall_HUDItineraryInfoPanel__GetItineraryStatusBarText_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ local_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(HUDItineraryInfoPanel__GetItineraryStatusBarText(&local_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 0077a610 MethodCallerConst__private__class_util__Str_char____thiscall_HUDItineraryInfoPanel__GetMissionInfo_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_struct_HUDItineraryInfoPanel_Cclassutil__Str_L_char_G__G___MethodCallerConst_L__private_classutil__Str_L_char_G____thiscallHUDItineraryInfoPanel__GetMissionInfo_void_const_G_(void const * const) */

Str_L_char_G_ *
util__DelegateFactory_struct_HUDItineraryInfoPanel_class_util__Str_char_____MethodCallerConst__private__class_util__Str_char____thiscall_HUDItineraryInfoPanel__GetMissionInfo_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ local_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(HUDItineraryInfoPanel__GetMissionInfo(&local_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 0077a650 MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const__ ====

/* r11-fakecov-fix */
/* disasm 77a650: cdecl(sret@8,obj@0xc); GetMissionInfoColor(obj,&local32); Reflectable vft -> Str 深拷贝 -> Color vft -> 4 dword 拷贝 -> local 清理 */
Color * util__DelegateFactory_L_HUDItineraryInfoPanel_Cutil__Color_G___MethodCallerConst_L__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const__G_(Color *__return_storage_ptr__,void *param_1)

{
  Color local_20;
  Color *pc;

  pc = (Color *)(uintptr_t)
       (HUDItineraryInfoPanel__GetMissionInfoColor(param_1,&local_20));
  __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_5;
  util__Str_char___Str_char
            ((Str_L_char_G_ *)((char *)__return_storage_ptr__ + 4),
            (Str_L_char_G_ *)((char *)pc + 4));
  __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_59;
  *(undefined4 *)((int)__return_storage_ptr__ + 0x10) =
       *(undefined4 *)((int)pc + 0x10);
  *(undefined4 *)((int)__return_storage_ptr__ + 0x14) =
       *(undefined4 *)((int)pc + 0x14);
  *(undefined4 *)((int)__return_storage_ptr__ + 0x18) =
       *(undefined4 *)((int)pc + 0x18);
  *(undefined4 *)((int)__return_storage_ptr__ + 0x1c) =
       *(undefined4 *)((int)pc + 0x1c);
  local_20._pad_0x0_0 = (int)&vftable_5;
  if (*(char **)((char *)&local_20 + 4) != (char *)0x0) {
    port_op_delete(*(char **)((char *)&local_20 + 4));
  }
  return __return_storage_ptr__;
}


//==== 0077a6c0 MethodCallerConst__private__class_util__Str_char____thiscall_HUDItineraryInfoPanel__GetMissionInterceptInfo_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_struct_HUDItineraryInfoPanel_Cclassutil__Str_L_char_G__G___MethodCallerConst_L__private_classutil__Str_L_char_G____thiscallHUDItineraryInfoPanel__GetMissionInterceptInfo_void_const_G_(void const * const) */

Str_L_char_G_ *
util__DelegateFactory_struct_HUDItineraryInfoPanel_class_util__Str_char_____MethodCallerConst__private__class_util__Str_char____thiscall_HUDItineraryInfoPanel__GetMissionInterceptInfo_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ local_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(HUDItineraryInfoPanel__GetMissionInterceptInfo(&local_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 0077a700 MethodCallerConst__private__class_util__Str_char____thiscall_HUDItineraryNodeDragger__GetDraggerInfo_void_const__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_struct_HUDItineraryNodeDragger_Cclassutil__Str_L_char_G__G___MethodCallerConst_L__private_class_util__Str_L_char_G___thiscallHUDItineraryNodeDragger__GetDraggerInfo_void_const_G_(void const *
   const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_struct_HUDItineraryNodeDragger_class_util__Str_char_____MethodCallerConst__private__class_util__Str_char____thiscall_HUDItineraryNodeDragger__GetDraggerInfo_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ SStack_10;
  
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,&SStack_10);
  return __return_storage_ptr__;
}





//==== 0077a730 MethodCallerConst__private__class_util__Str_char____thiscall_HUDFleetInfoPanel__GetPanelTooltip_void_const__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_structHUDFleetInfoPanel_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__private_classutil__Str_L_char_G___thiscall_HUDFleetInfoPanel__GetPanelTooltip_void_const_G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_struct_HUDFleetInfoPanel_class_util__Str_char_____MethodCallerConst__private__class_util__Str_char____thiscall_HUDFleetInfoPanel__GetPanelTooltip_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(HUDFleetInfoPanel__GetPanelTooltip((HUDFleetInfoPanel *)param_1,&SStack_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 0077a770 MethodCallerConst__private__class_util__Darray_class_util__WeakPtr_class_SpacecraftComponent______thiscall_HUDFleetInfoPanel__GetShipsInFleet_void_const__ ====


/* public: static class util__Darray_L_classutil__WeakPtr_L_classSpacecraftComponent_G__G_ __cdecl
   util__DelegateFactory_struct_HUDFleetInfoPanel_class_util__Darray_class_util__WeakPtr_class_SpacecraftComponent_______MethodCallerConst__private__class_util__Darray_class_util__WeakPtr_class_SpacecraftComponent______thiscall_HUDFleetInfoPanel__GetShipsInFleet_void_const(void const * const) */

void * __cdecl
util__DelegateFactory_struct_HUDFleetInfoPanel_class_util__Darray_class_util__WeakPtr_class_SpacecraftComponent_______MethodCallerConst__private__class_util__Darray_class_util__WeakPtr_class_SpacecraftComponent______thiscall_HUDFleetInfoPanel__GetShipsInFleet_void_const__o2
          (void *param_1)

{
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *pDVar1;
  HUDFleetInfoPanel *in_stack_00000008;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ aDStack_14 [16];
  
  pDVar1 = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
           HUDFleetInfoPanel__GetShipsInFleet(in_stack_00000008);
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)param_1,pDVar1);
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___dtor(aDStack_14);
  return param_1;
}





//==== 0077a7a0 MethodCallerConst__private__class_util__Str_char____thiscall_HUDFleetInfoPanel__GetTextInfo_void_const__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_structHUDFleetInfoPanel_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__private_classutil__Str_L_char_G___thiscall_HUDFleetInfoPanel__GetTextInfo_void_const_G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_struct_HUDFleetInfoPanel_class_util__Str_char_____MethodCallerConst__private__class_util__Str_char____thiscall_HUDFleetInfoPanel__GetTextInfo_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(HUDFleetInfoPanel__GetTextInfo((HUDFleetInfoPanel *)param_1,&SStack_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 0077a7e0 MethodCallerConst__public__class_util__Str_char____thiscall_BurnInfoCustomWidget__GetTimeLabel_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_struct_BurnInfoCustomWidget_Cclassutil__Str_L_char_G__G___MethodCallerConst_L__public_classutil__Str_L_char_G____thiscallBurnInfoCustomWidget__GetTimeLabel_void_const_G_(void const * const) */

Str_L_char_G_ *
util__DelegateFactory_struct_BurnInfoCustomWidget_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_BurnInfoCustomWidget__GetTimeLabel_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ local_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(BurnInfoCustomWidget__GetTimeLabel(&local_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 0077ab00 Darray_util__tuple2_util__Str_char__util__Darray_ItineraryNode_____ ====


/* public:  util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_structItineraryNode_G__G__G___Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_structItineraryNode_G__G__G_(class util__Darray_L_structutil__tuple2_L_class_util__Str_L_char_G__Cclassutil__Darray_L_structItineraryNode_G__G__G_ const &) */

Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G___G_ *

util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_struct_ItineraryNode_______Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_struct_ItineraryNode
          (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G___G_
           *this,Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G___G_
                 *param_1)

{
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G___G_
  *pDVar1;
  uint *puVar2;
  uint uVar3;
  Str_L_char_G_ *pSVar4;
  uint uVar5;
  Str_L_char_G_ *this_00;
  
  pDVar1 = param_1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = &vftable_469;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  param_1 = (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G___G_
             *)(**(code **)(*(int *)param_1 + 0xc))();
  SetSize(this,(int *)&param_1);
  uVar5 = *(uint *)(this + 0xc);
  uVar3 = -(uint)((int)((ulonglong)uVar5 * 0x1c >> 0x20) != 0) | (uint)((ulonglong)uVar5 * 0x1c);
  puVar2 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
  if (puVar2 == (uint *)0x0) {
    this_00 = (Str_L_char_G_ *)0x0;
  }
  else {
    *puVar2 = uVar5;
    this_00 = (Str_L_char_G_ *)(puVar2 + 1);
    if (uVar5 != 0) {
      puVar2 = puVar2 + 6;
      pSVar4 = this_00;
      do {
        pSVar4->Data = (char *)0x0;
        pSVar4 = (Str_L_char_G_ *)&pSVar4[2].Capacity;
        puVar2[-4] = 0;
        puVar2[-3] = 0;
        puVar2[-2] = (uint)&vftable_439;
        puVar2[-1] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        uVar5 = uVar5 - 1;
        puVar2 = puVar2 + 7;
      } while (uVar5 != 0);
    }
  }
  *(Str_L_char_G_ **)(this + 4) = this_00;
  pSVar4 = *(Str_L_char_G_ **)(pDVar1 + 4);
  if (pSVar4 == (Str_L_char_G_ *)((int)pSVar4 + *(int *)(pDVar1 + 8) * 0x1c)) {
    return this;
  }
  do {
    util__Maybe_struct_util__ClassMember___operator(this_00,pSVar4);
    Darray_L_struct_ItineraryNode_G___op_assign
              ((Darray_L_struct_ItineraryNode_G_ *)(this_00 + 1),
               (Darray_L_struct_ItineraryNode_G_ *)(pSVar4 + 1));
    pSVar4 = (Str_L_char_G_ *)&pSVar4[2].Capacity;
    this_00 = (Str_L_char_G_ *)&this_00[2].Capacity;
  } while (pSVar4 != (Str_L_char_G_ *)(*(int *)(pDVar1 + 4) + *(int *)(pDVar1 + 8) * 0x1c));
  return this;
}





//==== 0077ada0 UIListBox_ItineraryNode_ ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public:  UIListBox_L_structItineraryNode_G___UIListBox_L_structItineraryNode_G_(struct
   UIAttributes,struct util__Attribute_L_classutil__Str_L_char_G__G_ const &,class
   util__Delegate_L_int_CstructItineraryNode_G_,struct util__Attribute_L_classutil__Darray_L_struct_util__tuple2_L_classutil__Str_L_char_G__Cclassutil__Darray_L_structItineraryNode_G__G__G__G_ const &,class
   util__Delegate_L_void_CstructItineraryNode_G_,class util__Delegate_L_classutil__Str_L_char_G__Cstruct_ItineraryNode_G_,class util__Delegate_L_structItineraryNode_G_,class util__Delegate_L_class_util__Str_L_char_G__CstructItineraryNode_G_,class util__Delegate_L_void___cdecl_P__void__Cstruct_ItineraryNode_G_,class util__Maybe_L_int_G_,class util__Delegate_L_structutil__Color_Cstruct_ItineraryNode_G_,class util__Delegate_L_classutil__Str_L_char_G__CstructItineraryNode_G_,class
   util__Delegate_L_structUIWidget_P_CstructItineraryNode_G_,bool,bool) */

UIListBox_L_struct_ItineraryNode_G_ * 
UIListBox_struct_ItineraryNode___UIListBox_struct_ItineraryNode
          (UIListBox_L_struct_ItineraryNode_G_ *this)

{
  undefined8 stack0x00000004;
  undefined8 stack0xfffffe98;
  UIAttributes UVar1;
  bool bVar2;
  undefined4 *puVar3;
  SharedPtr_L_struct_UIWidget_G_ *pSVar4;
  ReferenceControllerRegistry *this_00;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *param_2;
  undefined4 in_stack_00000150;
  undefined4 in_stack_00000154;
  undefined4 in_stack_00000158;
  undefined4 in_stack_0000015c;
  undefined4 in_stack_00000160;
  undefined4 in_stack_00000164;
  undefined4 in_stack_00000168;
  undefined4 in_stack_0000016c;
  undefined4 in_stack_00000170;
  undefined4 in_stack_00000174;
  undefined4 in_stack_00000178;
  undefined4 in_stack_0000017c;
  undefined4 in_stack_00000180;
  undefined4 in_stack_00000184;
  UIListBox_L_struct_ItineraryNode_G_ in_stack_00000188;
  undefined4 in_stack_0000018c;
  undefined4 in_stack_00000190;
  undefined4 in_stack_00000194;
  undefined4 in_stack_00000198;
  undefined4 in_stack_0000019c;
  undefined4 in_stack_000001a0;
  UIListBox_L_struct_ItineraryNode_G_ in_stack_000001a4;
  UIListBox_L_struct_ItineraryNode_G_ in_stack_000001a8;
  undefined1 auVar7 [12];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [44];
  undefined1 auVar16 [44];
  undefined1 in_stack_fffffe98 [316];
  float in_stack_ffffffd4;
  float in_stack_ffffffd8;
  undefined4 in_stack_ffffffdc;
  int *piVar17;
  undefined **local_14;
  tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G_ *local_10;
  int *local_c;
  ReferenceController *local_8;
  undefined1 auVar15 [32];
  
  puVar3 = param_2;
  UIAttributes__UIAttributes((UIAttributes *)&stack0xfffffe98,(UIAttributes *)&stack0x00000004);
  UVar1.TextColor.Data.Value.Value = in_stack_ffffffd4;
  *(uint32_t *)&auVar7 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffe98) + 4)));
  *(uint32_t *)&auVar10 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffe98) + 32)));
  *(uint32_t *)&auVar11 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffe98) + 44)));
  *(uint32_t *)&auVar13 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffe98) + 180)));
  *(uint32_t *)&auVar14 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffe98) + 196)));
  *(uint32_t *)&auVar16 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffe98) + 240)));
  UVar1.Parent = (Manager *)(*(uint32_t*)&(in_stack_fffffe98));
  UVar1.Tag.Data = (char *)(*(uint32_t*)&(auVar7));
  UVar1.Tag.Capacity = (*(uint32_t*)((char*)&(auVar7)+4));
  UVar1.Tag.Length = (*(uint32_t*)((char*)&(auVar7)+8));
  uVar8 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffe98) + 16)),0);
  uVar9 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffe98) + 16)),8);
  UVar1.Location.Getter.Callee = (void *)(int)uVar8;
  UVar1.Location.Getter.CallbackFunction =
       (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar8 >> 0x20);
  UVar1.Location.Value.X = (int)uVar9;
  UVar1.Location.Value.Y = (int)((ulonglong)uVar9 >> 0x20);
  UVar1.Visible.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar10));
  UVar1.Visible.Getter.CallbackFunction =
       (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar10)) >> 0x20);
  UVar1.Visible.Value = (bool)auVar10[8];
  (*(uint24_t *)((char *)&(UVar1.Visible) + 9)) = (*(uint24_t*)((char*)&(auVar10)+9));
  UVar1.Enabled.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar11));
  UVar1.Enabled.Getter.CallbackFunction =
       (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar11)) >> 0x20);
  UVar1.Enabled.Value = (bool)auVar11[8];
  (*(uint24_t *)((char *)&(UVar1.Enabled) + 9)) = (*(uint24_t*)((char*)&(auVar11)+9));
  uVar8 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffe98) + 56)),0);
  uVar9 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffe98) + 56)),8);
  UVar1.DesiredSize.Getter.Callee = (void *)(int)uVar8;
  UVar1.DesiredSize.Getter.CallbackFunction =
       (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar8 >> 0x20);
  UVar1.DesiredSize.Value.X = (int)uVar9;
  UVar1.DesiredSize.Value.Y = (int)((ulonglong)uVar9 >> 0x20);
  uVar8 = SUB248((*(uint32_t *)((char *)&(in_stack_fffffe98) + 72)),0);
  *(uint32_t *)&auVar12 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffffe98) + 72)),8));
  UVar1.FillProportion.Getter.Callee = (void *)(int)uVar8;
  UVar1.FillProportion.Getter.CallbackFunction =
       (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar8 >> 0x20);
  UVar1.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar12));
  UVar1.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar12)+8));
  uVar8 = SUB128((*(uint32_t *)((char *)&(in_stack_fffffe98) + 96)),0);
  UVar1.HitTestShape.Getter.Callee = (void *)(int)uVar8;
  UVar1.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)(int)((ulonglong)uVar8 >> 0x20));
  UVar1.HitTestShape.Value = SUB124((*(uint32_t *)((char *)&(in_stack_fffffe98) + 96)),8);
  (*(uint32_t *)((char *)&(UVar1) + 108)) = (*(uint32_t *)((char *)&(in_stack_fffffe98) + 108));
  uVar8 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffe98) + 112)),0);
  UVar1.Depth.Getter.Callee = (void *)(int)uVar8;
  UVar1.Depth.Getter.CallbackFunction =
       (_func___cdecl_double_void_ptr *)(int)((ulonglong)uVar8 >> 0x20);
  UVar1.Depth.Value = (double)SUB168((*(uint32_t *)((char *)&(in_stack_fffffe98) + 112)),8);
  uVar8 = SUB128((*(uint32_t *)((char *)&(in_stack_fffffe98) + 128)),0);
  UVar1.Icon.Getter.Callee = (void *)(int)uVar8;
  UVar1.Icon.Getter.CallbackFunction = (void (* (*)(void *))(void))((_func___cdecl__func___cdecl_void_ptr_void_ptr *)(int)((ulonglong)uVar8 >> 0x20));
  UVar1.Icon.Value = (_func___cdecl_void *)SUB124((*(uint32_t *)((char *)&(in_stack_fffffe98) + 128)),8);
  uVar8 = SUB208((*(uint32_t *)((char *)&(in_stack_fffffe98) + 140)),0);
  *(uint32_t *)&auVar7 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffffe98) + 140)),8));
  UVar1.Tooltip.Getter.Callee = (void *)(int)uVar8;
  UVar1.Tooltip.Getter.CallbackFunction =
       (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar8 >> 0x20);
  UVar1.Tooltip.Value.Data = (char *)(*(uint32_t*)&(auVar7));
  UVar1.Tooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar7)+4));
  UVar1.Tooltip.Value.Length = (*(uint32_t*)((char*)&(auVar7)+8));
  uVar8 = SUB208((*(uint32_t *)((char *)&(in_stack_fffffe98) + 160)),0);
  *(uint32_t *)&auVar7 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffffe98) + 160)),8));
  UVar1.VerboseTooltip.Getter.Callee = (void *)(int)uVar8;
  UVar1.VerboseTooltip.Getter.CallbackFunction =
       (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar8 >> 0x20);
  UVar1.VerboseTooltip.Value.Data = (char *)(*(uint32_t*)&(auVar7));
  UVar1.VerboseTooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar7)+4));
  UVar1.VerboseTooltip.Value.Length = (*(uint32_t*)((char*)&(auVar7)+8));
  uVar8 = SUB128((*(uint32_t *)((char *)&(auVar13) + 0)),0);
  UVar1.TextFont.Data.Getter.Callee = (void *)(int)uVar8;
  UVar1.TextFont.Data.Getter.CallbackFunction =
       (_func___cdecl_Font_ptr_void_ptr *)(int)((ulonglong)uVar8 >> 0x20);
  UVar1.TextFont.Data.Value = (Font *)SUB124((*(uint32_t *)((char *)&(auVar13) + 0)),8);
  UVar1.TextFont.IsValidData = (bool)auVar13[0xc];
  (*(uint32_t *)((char *)&(UVar1.TextFont) + 13)) = (*(uint32_t *)((char *)&(auVar13) + 13));
  uVar8 = SUB408((*(uint32_t *)((char *)&(auVar14) + 0)),0);
  *(uint32_t *)&auVar15 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar14) + 0)),8));
  UVar1.ForegroundColor.Data.Getter.Callee = (void *)(int)uVar8;
  UVar1.ForegroundColor.Data.Getter.CallbackFunction =
       (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar8 >> 0x20);
  UVar1.ForegroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar15));
  UVar1.ForegroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar15)+4));
  UVar1.ForegroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar15)+8));
  UVar1.ForegroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar15) + 12));
  UVar1.ForegroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar15) + 16));
  UVar1.ForegroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar15) + 20));
  UVar1.ForegroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar15) + 24));
  UVar1.ForegroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar15) + 28));
  UVar1.ForegroundColor.IsValidData = (bool)auVar14[0x28];
  (*(uint32_t *)((char *)&(UVar1.ForegroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar14) + 41));
  uVar8 = SUB408((*(uint32_t *)((char *)&(auVar16) + 0)),0);
  *(uint32_t *)&auVar15 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar16) + 0)),8));
  UVar1.BackgroundColor.Data.Getter.Callee = (void *)(int)uVar8;
  UVar1.BackgroundColor.Data.Getter.CallbackFunction =
       (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar8 >> 0x20);
  UVar1.BackgroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar15));
  UVar1.BackgroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar15)+4));
  UVar1.BackgroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar15)+8));
  UVar1.BackgroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar15) + 12));
  UVar1.BackgroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar15) + 16));
  UVar1.BackgroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar15) + 20));
  UVar1.BackgroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar15) + 24));
  UVar1.BackgroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar15) + 28));
  UVar1.BackgroundColor.IsValidData = (bool)auVar16[0x28];
  (*(uint32_t *)((char *)&(UVar1.BackgroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar16) + 41));
  UVar1.TextColor.Data.Getter.Callee = (void *)(int)(*(uint64_t *)((char *)&(in_stack_fffffe98) + 284));
  UVar1.TextColor.Data.Getter.CallbackFunction =
       (_func___cdecl_Color_void_ptr *)(int)((ulonglong)(*(uint64_t *)((char *)&(in_stack_fffffe98) + 284)) >> 0x20);
  UVar1.TextColor.Data.Value._pad_0x0_0 = (*(uint32_t *)((char *)&(in_stack_fffffe98) + 292));
  UVar1.TextColor.Data.Value._pad_0x4_1 = (*(uint32_t *)((char *)&(in_stack_fffffe98) + 296));
  UVar1.TextColor.Data.Value._pad_0x8_2 = (*(uint32_t *)((char *)&(in_stack_fffffe98) + 300));
  UVar1.TextColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(in_stack_fffffe98) + 304));
  UVar1.TextColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(in_stack_fffffe98) + 308));
  UVar1.TextColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(in_stack_fffffe98) + 312));
  UVar1.TextColor.Data.Value.Alpha = in_stack_ffffffd8;
  UVar1.TextColor.IsValidData = SUB41(in_stack_ffffffdc,0);
  (*(uint32_t *)((char *)&(UVar1.TextColor) + 41)) = SUB43(in_stack_ffffffdc,1);
  UIWidget__UIWidget((UIWidget *)this,UVar1);
  *(undefined ***)this = &vftable_470;
  *(undefined4 *)(this + 0x168) = *puVar3;
  *(undefined4 *)(this + 0x16c) = puVar3[1];
  util__Str_char___Str_char((Str_L_char_G_ *)(this + 0x170),(Str_L_char_G_ *)(puVar3 + 2));
  *(undefined4 *)(this + 0x17c) = in_stack_00000184;
  this[0x180] = in_stack_00000188;
  *(undefined4 *)(this + 0x184) = in_stack_00000150;
  *(undefined4 *)(this + 0x188) = in_stack_00000154;
  *(undefined4 *)(this + 0x18c) = in_stack_0000015c;
  *(undefined4 *)(this + 400) = in_stack_00000160;
  *(undefined4 *)(this + 0x194) = in_stack_00000164;
  *(undefined4 *)(this + 0x198) = in_stack_00000168;
  *(undefined4 *)(this + 0x19c) = in_stack_0000016c;
  *(undefined4 *)(this + 0x1a0) = in_stack_00000170;
  *(undefined4 *)(this + 0x1a4) = in_stack_0000017c;
  *(undefined4 *)(this + 0x1a8) = in_stack_00000180;
  *(undefined4 *)(this + 0x1ac) = in_stack_00000174;
  *(undefined4 *)(this + 0x1b0) = in_stack_00000178;
  *(undefined4 *)(this + 0x1b4) = in_stack_0000018c;
  *(undefined4 *)(this + 0x1b8) = in_stack_00000190;
  *(undefined4 *)(this + 0x1bc) = in_stack_00000194;
  *(undefined4 *)(this + 0x1c0) = in_stack_00000198;
  *(undefined4 *)(this + 0x1c4) = in_stack_0000019c;
  *(undefined4 *)(this + 0x1c8) = in_stack_000001a0;
  this[0x1cc] = in_stack_000001a8;
  this[0x1cd] = in_stack_000001a4;
  *(undefined4 *)(this + 0x1d0) = 0;
  *(undefined4 *)(this + 0x1d4) = 0;
  *(undefined4 *)(this + 0x1d8) = 0;
  local_14 = &vftable_469;
  local_10 = (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G_ *)0x0;
  local_c = (int *)0x0;
  local_8 = (ReferenceController *)0x0;
  *(undefined4 *)(this + 0x1dc) = 0;
  *(undefined4 *)(this + 0x1e0) = 0;
  util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_struct_ItineraryNode_______Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_struct_ItineraryNode
            ((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G___G_
              *)(this + 0x1e4),
             (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G___G_
              *)&local_14);
  local_14 = &vftable_469;
  if (local_10 != (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G_ *)0x0) {
    util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G____vector_deleting_destructor_(local_10);
  }
  *(undefined4 *)(this + 500) = 0;
  *(undefined4 *)(this + 0x1f8) = 100;
  puVar3 = (undefined4 *)(uintptr_t)(port_op_new(0x644));
  if (puVar3 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = puVar3 + 1;
    *puVar3 = 100;
    iVar5 = 100;
    puVar3 = puVar6;
    do {
      *puVar3 = (undefined4)(uintptr_t)(&vftable_473);
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      iVar5 = iVar5 + -1;
      puVar3 = puVar3 + 4;
    } while (iVar5 != 0);
  }
  *(undefined4 **)(this + 500) = puVar6;
  *(undefined4 *)(this + 0x1fc) = 0;
  *(undefined4 *)(this + 0x200) = 0;
  *(undefined4 *)(this + 0x204) = 0;
  *(undefined4 *)(this + 0x208) = 0;
  pSVar4 = (SharedPtr_L_struct_UIWidget_G_ *)Generate(this);
  UIWidget__AddChildWidget_struct_UIWidget((UIWidget *)this,pSVar4);
  if ((local_8 != (ReferenceController *)0x0) &&
     (bVar2 = util__ReferenceController__ReleaseStrongReference(local_8), bVar2)) {
    if (local_c != (int *)0x0) {
      (**(code **)(uintptr_t)(*local_c + 4))();
    }
    piVar17 = local_c;
    this_00 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(this_00,piVar17);
  }
  UIAttributes___UIAttributes((UIAttributes *)&stack0x00000004);
  return this;
}

//==== 0077e1b0 Darray_util__tuple2_util__Str_char__util__Darray_ItineraryNode______0077e1b0 ====


/* public: virtual  Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_structItineraryNode_G__G__G___dtor(void) */

void 
util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_struct_ItineraryNode________Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_struct_ItineraryNode(Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G___G_
           *this)

{
  *(undefined ***)this = &vftable_469;
  if (*(tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G_ **)(this + 4) !=
      (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G_ *)0x0) {
    tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G____vector_deleting_destructor_
              (*(tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G_ **)
                (this + 4),3);
  }
  *(undefined ***)this = (undefined **)(&vftable);
  *(undefined4 *)(this + 4) = 0;
  return;
}





//==== 0077e1e0 tuple2_ItineraryNode_util__WeakPtr_UIWidget___ ====

/* public:  tuple2_L_structItineraryNode_Cclassutil__WeakPtr_L_structUIWidget_G__G___dtor(void) */

void __thiscall
util__tuple2_struct_ItineraryNode_class_util__WeakPtr_struct_UIWidget______tuple2_struct_ItineraryNode_class_util__WeakPtr_struct_UIWidget(tuple2_L_struct_ItineraryNode_Cclass_util__WeakPtr_L_struct_UIWidget_G___G_ *this)

{
  int *piVar1;
  ReferenceController *pRVar2;
  HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *pHVar3;
  undefined4 *puVar4;
  Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_ *pDVar5;
  int iVar6;
  
  if (*(ReferenceController **)(this + 0x154) != (ReferenceController *)0x0) {
    ReferenceController__ReleaseWeakReference(*(ReferenceController **)(this + 0x154));
  }
  if (*(ReferenceController **)(this + 300) != (ReferenceController *)0x0) {
    ReferenceController__ReleaseWeakReference(*(ReferenceController **)(this + 300));
  }
  if (*(ReferenceController **)(this + 0x104) != (ReferenceController *)0x0) {
    ReferenceController__ReleaseWeakReference(*(ReferenceController **)(this + 0x104));
  }
  if (*(ReferenceController **)(this + 0xfc) != (ReferenceController *)0x0) {
    ReferenceController__ReleaseWeakReference(*(ReferenceController **)(this + 0xfc));
  }
  if (*(ReferenceController **)(this + 0xf4) != (ReferenceController *)0x0) {
    ReferenceController__ReleaseWeakReference(*(ReferenceController **)(this + 0xf4));
  }
  pRVar2 = *(ReferenceController **)(this + 4);
  if (pRVar2 == (ReferenceController *)0x0) {
    return;
  }
  piVar1 = &pRVar2->WeakReferenceCount;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.cpp",0x15
              ,"WeakReferenceCount >= 0",(char *)0x0);
    DebugBreak();
  }
  if ((pRVar2->StrongReferenceCount == 0) && (pRVar2->WeakReferenceCount == 0)) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_0098956c) {
      _Init_thread_header(&DAT_0098956c);
      if (DAT_0098956c == -1) {
        DAT_00989568 = (undefined4)(uintptr_t)((HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0);
        pHVar3 = (HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)(uintptr_t)(port_op_new(8));
        if (pHVar3 == (HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0) {
          pHVar3 = (HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0;
        }
        else {
          pHVar3->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                          *)0x0;
          pHVar3->Capacity = 0;
          pHVar3->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                          *)0x0;
          pHVar3->Capacity = 10000;
          puVar4 = (undefined4 *)(uintptr_t)(port_op_new(0x27104));
          if (puVar4 == (undefined4 *)0x0) {
            pHVar3->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                            *)0x0;
          }
          else {
            *puVar4 = 10000;
            iVar6 = 10000;
            pDVar5 = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                      *)(puVar4 + 1);
            do {
              pDVar5->_pad_0x0_0 =
                   (int)&vftable_554;
              pDVar5->Data = (tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0;
              pDVar5->Size = 0;
              pDVar5->Capacity = 0;
              iVar6 = iVar6 + -1;
              pDVar5 = pDVar5 + 1;
            } while (iVar6 != 0);
            pHVar3->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                            *)(puVar4 + 1);
          }
        }
        DAT_00989568 = (undefined4)(uintptr_t)(pHVar3);
        atexit(FUN_0090ff50);
        _Init_thread_footer(&DAT_0098956c);
      }
    }
    ReferenceControllerRegistry__Unregister((ReferenceControllerRegistry *)DAT_00989568,pRVar2);
  }
  return;
}

//==== 0077e240 operator___0077e240 ====


/* public: virtual struct util__tuple2_L_structItineraryNode_CenumItineraryMarker__Type_G_ & 
   util__Darray_struct_util__tuple2_struct_ItineraryNode_enum_ItineraryMarker__Type_____operator(int const &)const  */

tuple2_L_struct_ItineraryNode_Cenum_ItineraryMarker__Type_G_ * 
util__Darray_struct_util__tuple2_struct_ItineraryNode_enum_ItineraryMarker__Type_____operator__o2
          (Darray_L_struct_util__tuple2_L_struct_ItineraryNode_Cenum_ItineraryMarker__Type_G___G_ *this,
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
  return (tuple2_L_struct_ItineraryNode_Cenum_ItineraryMarker__Type_G_ *)
         (iVar1 * 0x158 + *(int *)(this + 4));
}





//==== 0077eca0 vector_deleting_destructor_0077eca0 ====


/* public: virtual void * __thiscall util__Darray_L_structutil__tuple2_L_structItineraryNode_Cclass_util__WeakPtr_L_structUIWidget_G__G__G_:: 0 vectordeletingdestructor(unsigned int) */

void * 
util__Darray_struct_util__tuple2_struct_ItineraryNode_class_util__WeakPtr_struct_UIWidget________vector_deleting_destructor
          (Darray_L_struct_util__tuple2_L_struct_ItineraryNode_Cclass_util__WeakPtr_L_struct_UIWidget_G___G___G_
           *this,uint param_1)

{
  Darray_L_struct_util__tuple2_L_struct_ItineraryNode_Cclass_util__WeakPtr_L_struct_UIWidget_G___G___G_ *pDVar1;
  Darray_L_struct_util__tuple2_L_struct_ItineraryNode_Cclass_util__WeakPtr_L_struct_UIWidget_G___G___G_ *pDVar2;
  Darray_L_struct_util__tuple2_L_struct_ItineraryNode_Cclass_util__WeakPtr_L_struct_UIWidget_G___G___G_ *pDVar3;
  int iVar4;
  
  if ((param_1 & 2) != 0) {
    pDVar1 = this + -4;
    iVar4 = *(int *)pDVar1;
    pDVar3 = this + iVar4 * 0x10;
    while (iVar4 != 0) {
      pDVar2 = pDVar3 + -0x10;
      iVar4 = iVar4 + -1;
      *(undefined ***)pDVar2 = &vftable_473;
      if (*(tuple2_L_struct_ItineraryNode_Cclass_util__WeakPtr_L_struct_UIWidget_G___G_ **)(pDVar3 + -0xc) !=
          (tuple2_L_struct_ItineraryNode_Cclass_util__WeakPtr_L_struct_UIWidget_G___G_ *)0x0) {
        tuple2_L_struct_ItineraryNode_Cclass_util__WeakPtr_L_struct_UIWidget_G___G____vector_deleting_destructor_
                  (*(tuple2_L_struct_ItineraryNode_Cclass_util__WeakPtr_L_struct_UIWidget_G___G_ **)
                    (pDVar3 + -0xc),3);
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
  *(undefined ***)this = &vftable_473;
  if (*(tuple2_L_struct_ItineraryNode_Cclass_util__WeakPtr_L_struct_UIWidget_G___G_ **)(this + 4) !=
      (tuple2_L_struct_ItineraryNode_Cclass_util__WeakPtr_L_struct_UIWidget_G___G_ *)0x0) {
    tuple2_L_struct_ItineraryNode_Cclass_util__WeakPtr_L_struct_UIWidget_G___G____vector_deleting_destructor_
              (*(tuple2_L_struct_ItineraryNode_Cclass_util__WeakPtr_L_struct_UIWidget_G___G_ **)(this + 4),3)
    ;
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = (undefined **)(&vftable);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 0077ed50 vector_deleting_destructor_0077ed50 ====


/* public: void * __thiscall util__tuple2_L_structItineraryNode_Cclassutil__WeakPtr_L_structUIWidget_G___G_:: 0 vectordeletingdestructor(unsigned int) */

void * 
util__tuple2_struct_ItineraryNode_class_util__WeakPtr_struct_UIWidget______vector_deleting_destructor
          (tuple2_L_struct_ItineraryNode_Cclass_util__WeakPtr_L_struct_UIWidget_G___G_ *this,uint param_1)

{
  tuple2_L_struct_ItineraryNode_Cclass_util__WeakPtr_L_struct_UIWidget_G___G_ *ptVar1;
  ReferenceController *this_00;
  tuple2_L_struct_ItineraryNode_Cclass_util__WeakPtr_L_struct_UIWidget_G___G_ *ptVar2;
  int iVar3;
  
  if ((param_1 & 2) != 0) {
    ptVar1 = this + -4;
    iVar3 = *(int *)ptVar1;
    if (iVar3 != 0) {
      ptVar2 = this + iVar3 * 0x158 + 300;
      do {
        iVar3 = iVar3 + -1;
        if (*(ReferenceController **)(ptVar2 + -0x130) != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(*(ReferenceController **)(ptVar2 + -0x130));
        }
        this_00 = *(ReferenceController **)(ptVar2 + -0x158);
        if (this_00 != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(this_00);
        }
        if (*(ReferenceController **)(ptVar2 + -0x180) != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(*(ReferenceController **)(ptVar2 + -0x180));
        }
        if (*(ReferenceController **)(ptVar2 + -0x188) != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(*(ReferenceController **)(ptVar2 + -0x188));
        }
        if (*(ReferenceController **)(ptVar2 + -400) != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(*(ReferenceController **)(ptVar2 + -400));
        }
        if (*(ReferenceController **)(ptVar2 + -0x280) != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(*(ReferenceController **)(ptVar2 + -0x280));
        }
        ptVar2 = ptVar2 + -0x158;
      } while (iVar3 != 0);
    }
    if ((param_1 & 1) != 0) {
      port_op_delete(ptVar1,*(int *)ptVar1 * 0x158 + 4);
    }
    return ptVar1;
  }
  tuple2_L_struct_ItineraryNode_Cclass_util__WeakPtr_L_struct_UIWidget_G___G___dtor(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x158);
  }
  return this;
}





//==== 0077ef10 scalar_deleting_destructor_0077ef10 ====


/* public: virtual void * __thiscall util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_structItineraryNode_G__G__G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_struct_ItineraryNode________scalar_deleting_destructor
          (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G___G_
           *this,uint param_1)

{
  *(undefined ***)this = &vftable_469;
  if (*(tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G_ **)(this + 4) !=
      (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G_ *)0x0) {
    tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G____vector_deleting_destructor_
              (*(tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G_ **)
                (this + 4),3);
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = (undefined **)(&vftable);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 0077ef50 scalar_deleting_destructor_0077ef50 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void * __thiscall UIListBox_L_structItineraryNode_G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
UIListBox_struct_ItineraryNode____scalar_deleting_destructor
          (UIListBox_L_struct_ItineraryNode_G_ *this,uint param_1)

{
  int *piVar1;
  
  if (*(ReferenceController **)(this + 0x208) != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(*(ReferenceController **)(this + 0x208));
  }
  if (*(ReferenceController **)(this + 0x200) != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(*(ReferenceController **)(this + 0x200));
  }
  piVar1 = *(int **)(this + 500);
  if (piVar1 != (int *)0x0) {
    if (piVar1[-1] == 0) {
      port_op_delete(piVar1 + -1);
    }
    else {
      (**(code **)(uintptr_t)(*piVar1 + 0x18))(3);
    }
  }
  *(undefined4 *)(this + 500) = 0;
  *(undefined ***)(this + 0x1e4) =
       &vftable_469;
  if (*(tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G_ **)(this + 0x1e8) !=
      (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G_ *)0x0) {
    util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G____vector_deleting_destructor_
              (*(tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G_ **)
                (this + 0x1e8),3);
  }
  *(undefined4 *)(this + 0x1e8) = 0;
  *(undefined ***)(this + 0x1e4) = (undefined **)(&vftable);
  if (*(void **)(this + 0x1d0) != (void *)0x0) {
    port_op_delete(*(void **)(this + 0x1d0));
    *(undefined4 *)(this + 0x1d0) = 0;
  }
  if (*(void **)(this + 0x170) != (void *)0x0) {
    port_op_delete(*(void **)(this + 0x170));
    *(undefined4 *)(this + 0x170) = 0;
  }
  *(undefined ***)this = &vftable_49;
  *(undefined ***)(this + 0x158) = (undefined **)(&vftable_48);
  if (*(SharedPtr_L_struct_UIWidget_G_ **)(this + 0x15c) != (SharedPtr_L_struct_UIWidget_G_ *)0x0) {
    util__SharedPtr_struct_UIWidget____vector_deleting_destructor
              (*(SharedPtr_L_struct_UIWidget_G_ **)(this + 0x15c),3);
  }
  *(undefined4 *)(this + 0x15c) = 0;
  *(undefined ***)(this + 0x158) = (undefined **)(&vftable);
  if (*(ReferenceController **)(this + 0x154) != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(*(ReferenceController **)(this + 0x154));
  }
  UIAttributes___UIAttributes((UIAttributes *)(this + 8));
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x210);
  }
  return this;
}





//==== 0077f140 scalar_deleting_destructor_0077f140 ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void * __thiscall OrbitDirectionArrow:: 0 scalardeletingdestructor(unsigned int)
    */

void * __thiscall
OrbitDirectionArrow___scalar_deleting_destructor(OrbitDirectionArrow *this,uint param_1)

{
  ReferenceController *this_00;
  
  this_00 = (this->ParentOrbit).Controller;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  this->_pad_0x0_0 = (int)&vftable_49;
  this->_pad_0x158_86 = (int)&vftable_48;
  if ((SharedPtr_L_UIWidget_G_ *)this->_pad_0x15c_87 != (SharedPtr_L_UIWidget_G_ *)0x0) {
    util__SharedPtr_L_UIWidget_G____vector_deleting_destructor_
              ((SharedPtr_L_UIWidget_G_ *)this->_pad_0x15c_87,3);
  }
  this->_pad_0x15c_87 = 0;
  this->_pad_0x158_86 = (int)&vftable;
  if ((ReferenceController *)this->_pad_0x154_85 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)this->_pad_0x154_85);
  }
  UIAttributes___UIAttributes((UIAttributes *)&this->_pad_0x8_2);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x170);
  }
  return this;
}

//==== 0077f1c0 scalar_deleting_destructor_0077f1c0 ====


/* public: virtual void * __thiscall UIListBox_L_structItineraryNode_G___ListButton:: 0 scalardeletingdestructor(unsigned int) */

void * 
UIListBox_struct_ItineraryNode___ListButton___scalar_deleting_destructor
          (ListButton *this,uint param_1)

{
  if (*(ReferenceController **)(this + 0x2ec) != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(*(ReferenceController **)(this + 0x2ec));
  }
  if (*(ReferenceController **)(this + 0x2c4) != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(*(ReferenceController **)(this + 0x2c4));
  }
  if (*(ReferenceController **)(this + 700) != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(*(ReferenceController **)(this + 700));
  }
  if (*(ReferenceController **)(this + 0x2b4) != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(*(ReferenceController **)(this + 0x2b4));
  }
  if (*(ReferenceController **)(this + 0x1c4) != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(*(ReferenceController **)(this + 0x1c4));
  }
  if (*(void **)(this + 0x1b4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 0x1b4));
    *(undefined4 *)(this + 0x1b4) = 0;
  }
  UIButton___UIButton((UIButton *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x310);
  }
  return this;
}





//==== 0077f7e0 CheckSize_0077f7e0 ====


/* private: bool  util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_structItineraryNode_G__G__G___CheckSize(int) */

bool 
util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_struct_ItineraryNode_______CheckSize(Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G___G_
            *this,int param_1)

{
  Str_L_char_G_ *pSVar1;
  bool bVar2;
  uint *puVar3;
  uint uVar4;
  Str_L_char_G_ *pSVar5;
  Str_L_char_G_ *this_00;
  uint uVar6;
  Str_L_char_G_ *pSVar7;
  bool bVar8;
  Str_L_char_G_ *pSStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar4 = *(uint *)(this + 8);
  bVar8 = -1 < (int)uVar4;
  bVar2 = !bVar8;
  if (bVar2) {
    pSStack_c = (Str_L_char_G_ *)0x0;
    SetSize(this,(int *)&pSStack_c);
    uVar4 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar2;
  bVar2 = (int)uVar4 < 0x40000000;
  if (!bVar2) {
    pSStack_c = (Str_L_char_G_ *)0x3fffffff;
    SetSize(this,(int *)&pSStack_c);
    uVar4 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar6 = *(uint *)(this + 0xc);
  if ((int)uVar4 <= (int)uVar6) {
    return bVar2 && bVar8;
  }
  if (uVar6 == 0) {
    *(uint *)(this + 0xc) = uVar4;
    uVar6 = uVar4;
  }
  if ((int)uVar6 < (int)uVar4) {
    do {
      uVar6 = uVar6 * 2;
    } while ((int)uVar6 < (int)uVar4);
    *(uint *)(this + 0xc) = uVar6;
  }
  if (0x3fffffff < (int)uVar6) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar6 = 0x3fffffff;
  }
  uVar4 = -(uint)((int)((ulonglong)uVar6 * 0x1c >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 0x1c);
  puVar3 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
  if (puVar3 == (uint *)0x0) {
    pSStack_c = (Str_L_char_G_ *)0x0;
  }
  else {
    *puVar3 = uVar6;
    pSStack_c = (Str_L_char_G_ *)(puVar3 + 1);
    if (uVar6 != 0) {
      puVar3 = puVar3 + 6;
      pSVar5 = pSStack_c;
      do {
        pSVar5->Data = (char *)0x0;
        pSVar5 = (Str_L_char_G_ *)&pSVar5[2].Capacity;
        puVar3[-4] = 0;
        puVar3[-3] = 0;
        puVar3[-2] = (uint)&vftable_439;
        puVar3[-1] = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        uVar6 = uVar6 - 1;
        puVar3 = puVar3 + 7;
      } while (uVar6 != 0);
    }
  }
  pSVar5 = *(Str_L_char_G_ **)(this + 4);
  if (pSVar5 != (Str_L_char_G_ *)0x0) {
    pSVar1 = (Str_L_char_G_ *)((int)pSStack_c + *(int *)(this + 8) * 0x1c);
    this_00 = pSStack_c;
    pSVar7 = pSVar5;
    if (pSVar5 != (Str_L_char_G_ *)(param_1 * 0x1c + (int)pSVar5)) {
      do {
        if (this_00 == pSVar1) break;
        util__Maybe_struct_util__ClassMember___operator(this_00,pSVar7);
        Darray_L_struct_ItineraryNode_G___op_assign
                  ((Darray_L_struct_ItineraryNode_G_ *)(this_00 + 1),
                   (Darray_L_struct_ItineraryNode_G_ *)(pSVar7 + 1));
        pSVar7 = (Str_L_char_G_ *)&pSVar7[2].Capacity;
        pSVar5 = *(Str_L_char_G_ **)(this + 4);
        this_00 = (Str_L_char_G_ *)&this_00[2].Capacity;
      } while (pSVar7 != (Str_L_char_G_ *)(param_1 * 0x1c + (int)pSVar5));
    }
    if (pSVar5 != (Str_L_char_G_ *)0x0) {
      tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G____vector_deleting_destructor_
                ((tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G_ *)pSVar5,3
                );
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(Str_L_char_G_ **)(this + 4) = pSStack_c;
  return bStack_5;
}





//==== 0077f990 CheckSizeDestructive_0077f990 ====


/* private: bool  util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_structItineraryNode_G__G__G___CheckSizeDestructive(void) */

bool 
util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_struct_ItineraryNode_______CheckSizeDestructive
          (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G___G_
           *this)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  bool bVar5;
  uint uVar6;
  bool bVar7;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G___G_
  *pDStack_8;
  
  uVar3 = *(uint *)(this + 8);
  bVar7 = -1 < (int)uVar3;
  pDStack_8 = this;
  if (!bVar7) {
    pDStack_8 = (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G___G_
                 *)0x0;
    SetSize(this,(int *)&pDStack_8);
    uVar3 = *(uint *)(this + 8);
  }
  bVar5 = (int)uVar3 < 0x40000000;
  if (!bVar5) {
    pDStack_8 = (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G___G_
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
    if (*(tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G_ **)(this + 4) !=
        (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G_ *)0x0) {
      tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G____vector_deleting_destructor_
                (*(tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G_ **)
                  (this + 4),3);
      uVar6 = *(uint *)(this + 0xc);
    }
    *(undefined4 *)(this + 4) = 0;
    uVar3 = -(uint)((int)((ulonglong)uVar6 * 0x1c >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 0x1c);
    puVar1 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
    if (puVar1 == (uint *)0x0) {
      puVar4 = (uint *)0x0;
    }
    else {
      *puVar1 = uVar6;
      puVar4 = puVar1 + 1;
      if (uVar6 != 0) {
        puVar2 = puVar1 + 6;
        puVar1 = puVar4;
        do {
          *puVar1 = 0;
          puVar1 = puVar1 + 7;
          puVar2[-4] = 0;
          puVar2[-3] = 0;
          puVar2[-2] = (uint)&vftable_439;
          puVar2[-1] = 0;
          *puVar2 = 0;
          puVar2[1] = 0;
          uVar6 = uVar6 - 1;
          puVar2 = puVar2 + 7;
        } while (uVar6 != 0);
        *(uint **)(this + 4) = puVar4;
        return bVar5;
      }
    }
    *(uint **)(this + 4) = puVar4;
  }
  return bVar5;
}





//==== 0077fae0 Clear_0077fae0 ====


/* public: virtual void  util__Darray_L_structutil__tuple2_L_structItineraryNode_Cclass_util__WeakPtr_L_structUIWidget_G__G__G___Clear(void) */

void 
util__Darray_struct_util__tuple2_struct_ItineraryNode_class_util__WeakPtr_struct_UIWidget_______Clear(Darray_L_struct_util__tuple2_L_struct_ItineraryNode_Cclass_util__WeakPtr_L_struct_UIWidget_G___G___G_ *this
     )

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 0077fb00 Clear_0077fb00 ====


/* public: virtual void  util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_structItineraryNode_G__G__G___Clear(void) */

void 
util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_struct_ItineraryNode_______Clear(Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G___G_
        *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 00780c40 Get_00780c40 ====


/* public: class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclassutil__Darray_L_struct_ItineraryNode_G__G__G_ const  util__Attribute_L_classutil__Darray_L_structutil__tuple2_L_class_util__Str_L_char_G__Cclassutil__Darray_L_structItineraryNode_G__G__G__G___Get(void)const  */

Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G___G_ *

util__Attribute_class_util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_struct_ItineraryNode_________Get(Attribute_L_class_util__Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G___G___G_
      *this)

{
  bool bVar1;
  bool bVar2;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G___G_
  *pDVar3;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G___G_
  *in_stack_00000004;
  undefined **ppuStack_48;
  tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G_ *ptStack_44;
  undefined **ppuStack_38;
  tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G_ *ptStack_34;
  undefined **ppuStack_28;
  tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G_ *ptStack_24;
  undefined **ppuStack_18;
  tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G_ *ptStack_14;
  undefined4 uStack_8;
  
  uStack_8 = 0;
  if ((*(int *)this == 0) || (*(code **)(uintptr_t)(this + 4) == (code *)0x0)) {
    pDVar3 = (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G___G_
              *)Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G___G___Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G___G_
                          ((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G___G_
                            *)&ppuStack_28,
                           (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G___G_
                            *)(this + 8));
    bVar2 = false;
    bVar1 = true;
  }
  else {
    pDVar3 = (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G___G_
              *)(**(code **)(uintptr_t)(this + 4))(&ppuStack_48,*(int *)this);
    pDVar3 = (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G___G_
              *)Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G___G___Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G___G_
                          ((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G___G_
                            *)&ppuStack_18,pDVar3);
    Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G___G___Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G___G_
              ((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G___G_
                *)&ppuStack_38,pDVar3);
    ppuStack_18 = &vftable_469;
    if (ptStack_14 != (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G_ *)0x0
       ) {
      tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G____vector_deleting_destructor_(ptStack_14,3);
    }
    bVar2 = true;
    bVar1 = false;
    ptStack_14 = (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G_ *)0x0;
    ppuStack_18 = (undefined **)(&vftable);
    ppuStack_48 = &vftable_469;
    if (ptStack_44 != (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G_ *)0x0
       ) {
      tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G____vector_deleting_destructor_(ptStack_44,3);
    }
    pDVar3 = (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G___G_
              *)&ppuStack_38;
  }
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G___G___Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G___G_
            (in_stack_00000004,pDVar3);
  if (bVar1) {
    ppuStack_28 = &vftable_469;
    if (ptStack_24 != (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G_ *)0x0
       ) {
      tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G____vector_deleting_destructor_(ptStack_24,3);
    }
    ptStack_24 = (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G_ *)0x0;
    ppuStack_28 = (undefined **)(&vftable);
  }
  if (bVar2) {
    ppuStack_38 = &vftable_469;
    if (ptStack_34 != (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G_ *)0x0
       ) {
      tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G____vector_deleting_destructor_(ptStack_34,3);
    }
  }
  return in_stack_00000004;
}





//==== 00780e00 GetBeginCancelItineraryTitle ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* private: class util__Str_L_char_G_ 
   HUDItineraryInfoPanel__GetBeginCancelItineraryTitle(void)const  */

Str_L_char_G_ * HUDItineraryInfoPanel__GetBeginCancelItineraryTitle__o2(Str_L_char_G_ *__return_storage_ptr__)

{
  bool bVar1;
  LocStr *pLVar2;
  Str_L_char_G_ *pSVar3;
  Str_L_char_G_ *pSVar4;
  void *local_68 [3];
  void *local_5c;
  void *local_50 [3];
  void *local_44;
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  undefined4 local_8;
  
  local_8 = 0;
  bVar1 = HasMission();
  bVar1 = !bVar1;
  if (bVar1) {
    util__Str_char___Str_char(&local_2c,"BeginTrajectory");
    local_14.Data = (char *)0x0;
    pLVar2 = (LocStr *)local_50;
    local_14.Capacity = 0;
    pSVar3 = &local_2c;
    local_14.Length = 0;
    pSVar4 = &local_14;
  }
  else {
    util__Str_char___Str_char(&local_38,"CancelTrajectory");
    local_20.Data = (char *)0x0;
    pLVar2 = (LocStr *)local_68;
    local_20.Capacity = 0;
    pSVar3 = &local_38;
    local_20.Length = 0;
    pSVar4 = &local_20;
  }
  pLVar2 = (LocStr *)util__LocStr__LocStr(pLVar2,pSVar3,pSVar4);
  pSVar3 = util__LocStr__operator__o3(pLVar2);
  util__Str_char___Str_char(__return_storage_ptr__,pSVar3);
  if (bVar1) {
    if (local_44 != (void *)0x0) {
      port_op_delete(local_44);
      local_44 = (void *)0x0;
    }
    if (local_50[0] != (void *)0x0) {
      port_op_delete(local_50[0]);
      local_50[0] = (void *)0x0;
    }
  }
  if (bVar1) {
    if (local_14.Data != (char *)0x0) {
      port_op_delete(local_14.Data);
      local_14.Data = (char *)0x0;
    }
  }
  if (bVar1) {
    if (local_2c.Data != (char *)0x0) {
      port_op_delete(local_2c.Data);
      local_2c.Data = (char *)0x0;
    }
  }
  if (!bVar1) {
    if (local_5c != (void *)0x0) {
      port_op_delete(local_5c);
      local_5c = (void *)0x0;
    }
    if (local_68[0] != (void *)0x0) {
      port_op_delete(local_68[0]);
      local_68[0] = (void *)0x0;
    }
  }
  if (!bVar1) {
    if (local_20.Data != (char *)0x0) {
      port_op_delete(local_20.Data);
      local_20.Data = (char *)0x0;
    }
  }
  if ((local_38.Data != (char *)0x0) && (!bVar1)) {
    port_op_delete(local_38.Data);
  }
  return __return_storage_ptr__;
}





//==== 00784790 IsVisible_00784790 ====


/* public: virtual bool  UIListBox_L_structItineraryNode_G___ListButton__IsVisible(void)const
    */

bool __thiscall UIListBox_struct_ItineraryNode___ListButton__IsVisible(ListButton *this)

{
  undefined8 stack0xfffffffc;
  char cVar1;
  char cVar2;
  uint uVar3;
  Str_L_char_G_ *pSVar4;
  int iVar5;
  char *pcVar6;
  char cVar7;
  bool bVar8;
  char *pcVar9;
  Str_L_char_G_ SStack_40;
  uint uStack_30;
  uint uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  char *pcStack_1c;
  undefined1 uStack_15;
  Str_L_char_G_ SStack_14;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar8 = false;
  pcStack_1c = (char *)0x0;
  util__MakeLowercase_char(&SStack_14,(Str_L_char_G_ *)(*(int *)(this + 0x1b0) + 0x1d0));
  if (SStack_14.Length != 0) {
    pcVar6 = "";
    if (0 < SStack_14.Capacity) {
      pcVar6 = SStack_14.Data;
    }
    pcStack_1c = pcVar6;
    pSVar4 = util__MakeLowercase_char(&SStack_40,(Str_L_char_G_ *)(this + 0x1b4));
    iVar5 = util__CharStringLength(pcVar6);
    if ((0 < iVar5) && (0 < pSVar4->Length)) {
      cVar7 = '\0';
      if (pSVar4->Capacity < 1) {
        pcVar9 = "";
      }
      else {
        pcVar9 = pSVar4->Data;
      }
      cVar1 = *pcVar9;
      while ((cVar1 != '\0' && (cVar2 = *pcVar6, cVar2 != '\0'))) {
        if (cVar7 == '\0') {
          if (cVar1 == cVar2) {
            pcVar6 = pcVar6 + 1;
            uVar3 = uStack_28 >> 8;
            uStack_28 = CONCAT31((int3)uVar3,1);
            uStack_20 = uStack_28;
            if (*pcVar6 == '\0') {
              bVar8 = true;
              goto LAB_0078487f;
            }
LAB_00784864:
            cVar7 = (char)uStack_20;
          }
        }
        else {
          if (cVar1 != cVar2) {
            uStack_30 = uStack_30 & 0xffffff00;
            uStack_24 = 0;
            uStack_20 = uStack_30;
            pcVar6 = pcStack_1c;
            goto LAB_00784864;
          }
          pcVar6 = pcVar6 + 1;
          if (*pcVar6 == '\0') goto LAB_00784872;
        }
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 1;
      }
    }
    cVar7 = '\0';
LAB_00784872:
    uStack_15 = 0;
    bVar8 = true;
    if (cVar7 == '\0') goto LAB_00784883;
  }
LAB_0078487f:
  uStack_15 = 1;
LAB_00784883:
  if ((SStack_40.Data != (char *)0x0) && (bVar8)) {
    port_op_delete(SStack_40.Data);
    SStack_40.Data = (char *)0x0;
  }
  if (SStack_14.Data != (char *)0x0) {
    port_op_delete(SStack_14.Data);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return (bool)uStack_15;
}





//==== 007848d0 Last_007848d0 ====


/* public: virtual struct util__tuple2_L_structItineraryNode_CenumItineraryMarker__Type_G_ & 
   util__Darray_struct_util__tuple2_struct_ItineraryNode_enum_ItineraryMarker__Type_____Last(void)
    */

tuple2_L_struct_ItineraryNode_Cenum_ItineraryMarker__Type_G_ * 
util__Darray_struct_util__tuple2_struct_ItineraryNode_enum_ItineraryMarker__Type_____Last__o3
          (Darray_L_struct_util__tuple2_L_struct_ItineraryNode_Cenum_ItineraryMarker__Type_G___G_ *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3c,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = *(int *)(this + 8);
  }
  return (tuple2_L_struct_ItineraryNode_Cenum_ItineraryMarker__Type_G_ *)
         (*(int *)(this + 4) + -0x158 + iVar1 * 0x158);
}





//==== 00784910 Last_00784910 ====


/* public: virtual struct util__tuple2_L_structItineraryNode_CenumItineraryMarker__Type_G_ const &
    util__Darray_struct_util__tuple2_struct_ItineraryNode_enum_ItineraryMarker__Type_____Last__o2(void)const  */

tuple2_L_struct_ItineraryNode_Cenum_ItineraryMarker__Type_G_ * 
util__Darray_struct_util__tuple2_struct_ItineraryNode_enum_ItineraryMarker__Type_____Last__o4
          (Darray_L_struct_util__tuple2_L_struct_ItineraryNode_Cenum_ItineraryMarker__Type_G___G_ *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3d,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = *(int *)(this + 8);
  }
  return (tuple2_L_struct_ItineraryNode_Cenum_ItineraryMarker__Type_G_ *)
         (*(int *)(this + 4) + -0x158 + iVar1 * 0x158);
}





//==== 00785200 SetAll_00785200 ====


/* public: virtual void  util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_structItineraryNode_G__G__G___SetAll(struct util__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_structItineraryNode_G__G_ const &) */

void 
util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_struct_ItineraryNode_______SetAll(Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G___G_
         *this,tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ItineraryNode_G___G_ *param_1)

{
  Str_L_char_G_ *this_00;
  
  this_00 = *(Str_L_char_G_ **)(this + 4);
  if (this_00 != (Str_L_char_G_ *)((int)this_00 + *(int *)(this + 8) * 0x1c)) {
    do {
      util__Maybe_struct_util__ClassMember___operator(this_00,(Str_L_char_G_ *)param_1);
      Darray_L_struct_ItineraryNode_G___op_assign
                ((Darray_L_struct_ItineraryNode_G_ *)(this_00 + 1),
                 (Darray_L_struct_ItineraryNode_G_ *)(param_1 + 0xc));
      this_00 = (Str_L_char_G_ *)&this_00[2].Capacity;
    } while (this_00 != (Str_L_char_G_ *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x1c));
  }
  return;
}





//==== 00785810 MethodCallerConst__private__class_util__Str_char____thiscall_HUDItineraryNodeDragger__GetDraggerName_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_struct_HUDItineraryNodeDragger_Cclassutil__Str_L_char_G__G___MethodCallerConst_L__private_class_util__Str_L_char_G___thiscallHUDItineraryNodeDragger__GetDraggerName_void_const_G_(void const *
   const) */

Str_L_char_G_ *
util__DelegateFactory_struct_HUDItineraryNodeDragger_class_util__Str_char_____MethodCallerConst__private__class_util__Str_char____thiscall_HUDItineraryNodeDragger__GetDraggerName_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ local_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(HUDItineraryNodeDragger__GetDraggerName(&local_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 00785850 MethodCallerConst__private__struct_util__Vec2_int____thiscall_HUDItineraryNodeDragger__GetHUDLocation_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static struct util__Vec2_L_int_G_ __cdecl util__DelegateFactory_L_struct_HUDItineraryNodeDragger_Cstructutil__Vec2_L_int_G__G___MethodCallerConst_L__private_struct_util__Vec2_L_int_G___thiscallHUDItineraryNodeDragger__GetHUDLocation_void_const_G_(void const *
   const) */

Vec2_L_int_G_ util__DelegateFactory_L_HUDItineraryNodeDragger_Cutil__Vec2_L_int_G___G___MethodCallerConst_L__private__struct_util__Vec2_L_int_G____thiscall_HUDItineraryNodeDragger__GetHUDLocation_void_const__G_
                    (void *param_1)

{
  Vec4_L_int_G_ VVar1;
  
  VVar1 = HUDItineraryNodeDragger__GetHUDLocation();
  *(undefined4 *)param_1 = *(undefined4 *)VVar1.X;
  *(undefined4 *)((int)param_1 + 4) = ((undefined4 *)VVar1.X)[1];
  VVar1.Y = (int)param_1;
  VVar1.X = (int)param_1;
}





//==== 00785890 ProjectedMagnitude_double_ ====


/* double const __cdecl util__ProjectedMagnitude_double(struct util__Vec3_L_double_G_ const &,struct
   util__Vec3_L_double_G_ const &) */

double __cdecl util__ProjectedMagnitude_double(Vec3_L_double_G_ *param_1,Vec3_L_double_G_ *param_2)

{
  Maybe_L_double_G_ *pMVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  Maybe_L_double_G_ MStack_2c;
  double dStack_1c;
  double dStack_14;
  double dStack_c;
  
  dStack_c = param_1->Y * param_2->Y + param_1->X * param_2->X + param_1->Z * param_2->Z;
  dVar2 = dStack_c * param_2->X;
  dVar3 = dStack_c * param_2->Y;
  dVar4 = dStack_c * param_2->Z;
  dStack_14 = dVar3 * dVar3 + dVar2 * dVar2 + dVar4 * dVar4;
  pMVar1 = (Maybe_L_double_G_ *)(uintptr_t)(Sqrt(&MStack_2c,&dStack_14));
  if (pMVar1->IsValidData == false) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,"IsValid()",
              (char *)0x0);
    DebugBreak();
  }
  dStack_1c = pMVar1->Data;
  if (NAN(dStack_c) != (dStack_c == 0.0)) {
    return dStack_1c * 0.0;
  }
  dVar2 = Abs(&dStack_c);
  return (dStack_c / dVar2) * dStack_1c;
}





//==== 00786090 GetDepth_00786090 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual double  HUDItineraryNodeDragger__GetDepth(struct
   util__Vec2_L_double_G_)const  */

double HUDItineraryNodeDragger__GetDepth(Vec2_L_double_G_)

{
  return 0.0;
}





//==== 0078c140 MakeTuple_util__Vec3_double__util__Color_ ====

/* struct util__tuple2_L_structutil__Vec3_L_double_G__Cstructutil__Color_G_ __cdecl util__MakeTuple_L_struct_util__Vec3_L_double_G__Cstructutil__Color_G_(struct util__Vec3_L_double_G_,struct util__Color) */

tuple2_L_util__Vec3_L_double_G__Cutil__Color_G_ * __cdecl
util__MakeTuple_struct_util__Vec3_double__struct_util__Color
          (tuple2_L_util__Vec3_L_double_G__Cutil__Color_G_ *__return_storage_ptr__,Vec3_L_double_G_ param_1,
          Color param_2)

{
  undefined4 in_stack_00000008;
  Str_L_char_G_ local_30;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&local_30,(Str_L_char_G_ *)&param_2);
  local_8 = (float)param_2._pad_0xc_3;
  *(uint32_t *)&local_24 = param_2._pad_0xc_3;
  local_c = param_2.Hue_degrees;
  local_20 = param_2.Hue_degrees;
  local_10 = param_2.Saturation;
  *(uint32_t *)&local_1c = param_2.Saturation;
  local_14 = param_2.Value;
  local_18 = param_2.Value;
  (undefined4)((__return_storage_ptr__->Value1).X = in_stack_00000008);
  *(undefined4 *)((int)&(__return_storage_ptr__->Value1).X + 4) = param_1.X;
  (undefined4)((__return_storage_ptr__->Value1).Y = param_1.Y);
  *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Y + 4) = param_1.Y;
  (__return_storage_ptr__->Value1).Z = (double)(*(uint64_t *)((char *)&(param_1) + 12));
  (__return_storage_ptr__->Value2)._pad_0x0_0 = (int)&vftable_5;
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const((Str_L_char_G_ *)&(__return_storage_ptr__->Value2)._pad_0x4_1,&local_30);
  (__return_storage_ptr__->Value2).Hue_degrees = local_8;
  (__return_storage_ptr__->Value2).Saturation = local_c;
  (__return_storage_ptr__->Value2).Value = local_10;
  (__return_storage_ptr__->Value2)._pad_0x0_0 = (int)&vftable_5;
  (__return_storage_ptr__->Value2).Alpha = local_14;
  if (local_30.Data != (char *)0x0) {
    port_op_delete(local_30.Data);
  }
  if (param_2._pad_0x0_0 != 0) {
    port_op_delete((void *)param_2._pad_0x0_0);
  }
  return __return_storage_ptr__;
}

//==== 0078c420 MethodCallerConst__private__class_util__Str_char____thiscall_ItineraryMarker__GetInfo_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_structItineraryMarker_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__private_classutil__Str_L_char_G___thiscall_ItineraryMarker__GetInfo_void_const_G_(void const * const) */

Str_L_char_G_ *
util__DelegateFactory_struct_ItineraryMarker_class_util__Str_char_____MethodCallerConst__private__class_util__Str_char____thiscall_ItineraryMarker__GetInfo_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ local_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(ItineraryMarker__GetInfo(&local_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 0078c530 MethodCallerConst__private__bool___thiscall_ItineraryMarker__IsInteractable_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static bool __cdecl util__DelegateFactory_L_struct_ItineraryMarker_Cbool_G___MethodCallerConst_L__private_bool__thiscall_ItineraryMarker__IsInteractable_void_const_G_(void const * const) */

bool util__DelegateFactory_L_ItineraryMarker_Cbool_G___MethodCallerConst_L__private__bool___thiscall_ItineraryMarker__IsInteractable_void_const__G_
               (void *param_1)

{
  bool bVar1;
  
  if (*(int *)((int)param_1 + 0x2f0) != 0) {
    bVar1 = StrategicManager__IsTurnRunning();
    if (!bVar1) {
      return true;
    }
  }
  return false;
}





//==== 0078c570 PointPlaneSignedDistance_double_ ====


/* double __cdecl util__PointPlaneSignedDistance_double(struct util__Plane_L_double_G_,struct
   util__Vec3_L_double_G_) */

double __cdecl util__PointPlaneSignedDistance_double(Plane_L_double_G_ param_1,Vec3_L_double_G_ param_2)

{
  bool bVar1;
  Maybe_L_double_G_ *pMVar2;
  Maybe_L_double_G_ MStack_34;
  double dStack_24;
  double dStack_1c;
  double dStack_14;
  double dStack_c;
  
  dStack_1c = 1.0;
  dStack_c = param_1.Mode__Normal.X * param_1.Mode__Normal.X + param_1.Mode__Normal.Y * param_1.Mode__Normal.Y +
             param_1.Mode__Normal.Z * param_1.Mode__Normal.Z;
  pMVar2 = (Maybe_L_double_G_ *)(uintptr_t)(Sqrt(&MStack_34,&dStack_c));
  if (pMVar2->IsValidData == false) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,"IsValid()",
              (char *)0x0);
    DebugBreak();
  }
  dStack_24 = pMVar2->Data;
  dStack_14 = 1e-08;
  bVar1 = Equals_L_double_G_(&dStack_24,&dStack_1c,&dStack_14);
  if (!bVar1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\advancedgeometry.inl",0x338
              ,"InPlane.Mode__Normal.IsNormalized()",(char *)0x0);
    DebugBreak();
  }
  return (param_1.Mode__Normal.X * param_2.X + param_1.Mode__Normal.Y * param_2.Y + param_1.Mode__Normal.Z * param_2.Z
         ) - param_1.OriginDistance;
}





//==== 0078ca80 Darray_ItineraryNodeUI__PathNode_ ====


/* public:  util__Darray_L_structItineraryNodeUI__PathNode_G___Darray_L_struct_ItineraryNodeUI__PathNode_G_(class util__Darray_L_structItineraryNodeUI__PathNode_G_ const &) */

Darray_L_struct_ItineraryNodeUI__PathNode_G_ * 
util__Darray_struct_ItineraryNodeUI__PathNode___Darray_struct_ItineraryNodeUI__PathNode
          (Darray_L_struct_ItineraryNodeUI__PathNode_G_ *this,
          Darray_L_struct_ItineraryNodeUI__PathNode_G_ *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Darray_L_struct_ItineraryNodeUI__PathNode_G_ *pDVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  pDVar5 = param_1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = &vftable_476;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  param_1 = (Darray_L_struct_ItineraryNodeUI__PathNode_G_ *)(**(code **)(*(int *)param_1 + 0xc))();
  SetSize(this,(int *)&param_1);
  uVar8 = *(uint *)(this + 0xc);
  puVar6 = (undefined4 *)
           port_op_new(-(uint)((int)((ulonglong)uVar8 * 0x30 >> 0x20) != 0) |
                          (uint)((ulonglong)uVar8 * 0x30));
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else if (uVar8 != 0) {
    puVar7 = puVar6 + 8;
    do {
      puVar7[-8] = 0;
      puVar7[-6] = 0;
      puVar7[-5] = 0;
      puVar7[-4] = 0;
      puVar7[-3] = 0;
      puVar7[-2] = 0;
      puVar7[-1] = 0;
      *puVar7 = 0;
      puVar7[1] = 0;
      *(undefined8 *)(puVar7 + 2) = 0;
      uVar8 = uVar8 - 1;
      puVar7 = puVar7 + 0xc;
    } while (uVar8 != 0);
  }
  *(undefined4 **)(this + 4) = puVar6;
  puVar7 = *(undefined4 **)(pDVar5 + 4);
  if (puVar7 != puVar7 + *(int *)(pDVar5 + 8) * 0xc) {
    do {
      uVar2 = puVar7[1];
      uVar3 = puVar7[2];
      uVar4 = puVar7[3];
      *puVar6 = *puVar7;
      puVar6[1] = uVar2;
      puVar6[2] = uVar3;
      puVar6[3] = uVar4;
      uVar2 = puVar7[5];
      uVar3 = puVar7[6];
      uVar4 = puVar7[7];
      puVar6[4] = puVar7[4];
      puVar6[5] = uVar2;
      puVar6[6] = uVar3;
      puVar6[7] = uVar4;
      puVar1 = puVar7 + 8;
      uVar2 = puVar7[9];
      uVar3 = puVar7[10];
      uVar4 = puVar7[0xb];
      puVar7 = puVar7 + 0xc;
      puVar6[8] = *puVar1;
      puVar6[9] = uVar2;
      puVar6[10] = uVar3;
      puVar6[0xb] = uVar4;
      puVar6 = puVar6 + 0xc;
    } while (puVar7 != (undefined4 *)(*(int *)(pDVar5 + 8) * 0x30 + *(int *)(pDVar5 + 4)));
  }
  return this;
}





//==== 0078cfd0 PointShader ====

/* public: __thiscall PointShader__PointShader(void) */

PointShader * __thiscall PointShader__PointShader(PointShader *this)

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
  this->_pad_0x0_0 = (int)&vftable_478;
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
  local_30 = 0;
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
    pfVar11 = pfVar11 + 4;
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
  iVar10 = local_14->Size;
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
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
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
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 0078d270 SplitResult_ItineraryNodeUI__PathNode_ ====


/* public: __thiscall util__SplitResult_struct_ItineraryNodeUI__PathNode____SplitResult_struct_ItineraryNodeUI__PathNode(void) */

void __thiscall
util__SplitResult_struct_ItineraryNodeUI__PathNode____SplitResult_struct_ItineraryNodeUI__PathNode(SplitResult_L_struct_ItineraryNodeUI__PathNode_G_ *this)

{
  *(undefined ***)(this + 0x10) = &vftable_476;
  if (*(void **)(this + 0x14) != (void *)0x0) {
    port_op_delete(*(void **)(this + 0x14));
  }
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined ***)(this + 0x10) = (undefined **)(&vftable);
  *(undefined ***)this = &vftable_476;
  if (*(void **)(this + 4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 4));
  }
  *(undefined ***)this = (undefined **)(&vftable);
  *(undefined4 *)(this + 4) = 0;
  return;
}





//==== 0078d2c0 tuple2_util__WeakPtr_OrbiterInterface__ItineraryNode_ ====

/* public:  tuple2_L_classutil__WeakPtr_L_structOrbiterInterface_G__CstructItineraryNode_G___dtor(void)
    */

void __thiscall
util__tuple2_class_util__WeakPtr_struct_OrbiterInterface__struct_ItineraryNode____tuple2_class_util__WeakPtr_struct_OrbiterInterface__struct_ItineraryNode(tuple2_L_class_util__WeakPtr_L_struct_OrbiterInterface_G__Cstruct_ItineraryNode_G_ *this)

{
  int *piVar1;
  ReferenceController *pRVar2;
  HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *pHVar3;
  undefined4 *puVar4;
  Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_ *pDVar5;
  int iVar6;
  
  if (*(ReferenceController **)(this + 0x134) != (ReferenceController *)0x0) {
    ReferenceController__ReleaseWeakReference(*(ReferenceController **)(this + 0x134));
  }
  if (*(ReferenceController **)(this + 0x10c) != (ReferenceController *)0x0) {
    ReferenceController__ReleaseWeakReference(*(ReferenceController **)(this + 0x10c));
  }
  if (*(ReferenceController **)(this + 0x104) != (ReferenceController *)0x0) {
    ReferenceController__ReleaseWeakReference(*(ReferenceController **)(this + 0x104));
  }
  if (*(ReferenceController **)(this + 0xfc) != (ReferenceController *)0x0) {
    ReferenceController__ReleaseWeakReference(*(ReferenceController **)(this + 0xfc));
  }
  if (*(ReferenceController **)(this + 0xc) != (ReferenceController *)0x0) {
    ReferenceController__ReleaseWeakReference(*(ReferenceController **)(this + 0xc));
  }
  pRVar2 = *(ReferenceController **)(this + 4);
  if (pRVar2 == (ReferenceController *)0x0) {
    return;
  }
  piVar1 = &pRVar2->WeakReferenceCount;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.cpp",0x15
              ,"WeakReferenceCount >= 0",(char *)0x0);
    DebugBreak();
  }
  if ((pRVar2->StrongReferenceCount == 0) && (pRVar2->WeakReferenceCount == 0)) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_0098956c) {
      _Init_thread_header(&DAT_0098956c);
      if (DAT_0098956c == -1) {
        DAT_00989568 = (undefined4)(uintptr_t)((HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0);
        pHVar3 = (HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)(uintptr_t)(port_op_new(8));
        if (pHVar3 == (HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0) {
          pHVar3 = (HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0;
        }
        else {
          pHVar3->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                          *)0x0;
          pHVar3->Capacity = 0;
          pHVar3->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                          *)0x0;
          pHVar3->Capacity = 10000;
          puVar4 = (undefined4 *)(uintptr_t)(port_op_new(0x27104));
          if (puVar4 == (undefined4 *)0x0) {
            pHVar3->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                            *)0x0;
          }
          else {
            *puVar4 = 10000;
            iVar6 = 10000;
            pDVar5 = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                      *)(puVar4 + 1);
            do {
              pDVar5->_pad_0x0_0 =
                   (int)&vftable_554;
              pDVar5->Data = (tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0;
              pDVar5->Size = 0;
              pDVar5->Capacity = 0;
              iVar6 = iVar6 + -1;
              pDVar5 = pDVar5 + 1;
            } while (iVar6 != 0);
            pHVar3->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                            *)(puVar4 + 1);
          }
        }
        DAT_00989568 = (undefined4)(uintptr_t)(pHVar3);
        atexit(FUN_0090ff50);
        _Init_thread_footer(&DAT_0098956c);
      }
    }
    ReferenceControllerRegistry__Unregister((ReferenceControllerRegistry *)DAT_00989568,pRVar2);
  }
  return;
}

//==== 0078d320 operator__0078d320 ====


/* public: class util__Darray_L_structItineraryNodeUI__PathNode_G_ &  util__Darray_struct_ItineraryNodeUI__PathNode___operator(class util__Darray_L_structItineraryNodeUI__PathNode_G_ const
   &) */

Darray_L_struct_ItineraryNodeUI__PathNode_G_ * 
util__Darray_struct_ItineraryNodeUI__PathNode___operator
          (Darray_L_struct_ItineraryNodeUI__PathNode_G_ *this,
          Darray_L_struct_ItineraryNodeUI__PathNode_G_ *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Darray_L_struct_ItineraryNodeUI__PathNode_G_ *pDVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  
  pDVar5 = param_1;
  param_1 = (Darray_L_struct_ItineraryNodeUI__PathNode_G_ *)(**(code **)(*(int *)param_1 + 0xc))();
  SetSize(this,(int *)&param_1);
  iVar6 = (**(code **)(*(int *)pDVar5 + 0xc))();
  if (iVar6 == 0) {
    (**(code **)(*(int *)this + 0x10))();
    return this;
  }
  uVar9 = *(uint *)(this + 8);
  if ((int)uVar9 < 0) {
    param_1 = (Darray_L_struct_ItineraryNodeUI__PathNode_G_ *)0x0;
    SetSize(this,(int *)&param_1);
    uVar9 = *(uint *)(this + 8);
  }
  if (0x3fffffff < (int)uVar9) {
    param_1 = (Darray_L_struct_ItineraryNodeUI__PathNode_G_ *)0x3fffffff;
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
             port_op_new(-(uint)((int)((ulonglong)uVar10 * 0x30 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar10 * 0x30));
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else if (uVar10 != 0) {
      puVar8 = puVar7 + 8;
      do {
        puVar8[-8] = 0;
        puVar8[-6] = 0;
        puVar8[-5] = 0;
        puVar8[-4] = 0;
        puVar8[-3] = 0;
        puVar8[-2] = 0;
        puVar8[-1] = 0;
        *puVar8 = 0;
        puVar8[1] = 0;
        *(undefined8 *)(puVar8 + 2) = 0;
        uVar10 = uVar10 - 1;
        puVar8 = puVar8 + 0xc;
      } while (uVar10 != 0);
      *(undefined4 **)(this + 4) = puVar7;
      goto LAB_0078d44b;
    }
    *(undefined4 **)(this + 4) = puVar7;
  }
  else {
    puVar7 = *(undefined4 **)(this + 4);
  }
LAB_0078d44b:
  puVar8 = *(undefined4 **)(pDVar5 + 4);
  if (puVar8 != puVar8 + *(int *)(pDVar5 + 8) * 0xc) {
    do {
      uVar2 = puVar8[1];
      uVar3 = puVar8[2];
      uVar4 = puVar8[3];
      *puVar7 = *puVar8;
      puVar7[1] = uVar2;
      puVar7[2] = uVar3;
      puVar7[3] = uVar4;
      uVar2 = puVar8[5];
      uVar3 = puVar8[6];
      uVar4 = puVar8[7];
      puVar7[4] = puVar8[4];
      puVar7[5] = uVar2;
      puVar7[6] = uVar3;
      puVar7[7] = uVar4;
      puVar1 = puVar8 + 8;
      uVar2 = puVar8[9];
      uVar3 = puVar8[10];
      uVar4 = puVar8[0xb];
      puVar8 = puVar8 + 0xc;
      puVar7[8] = *puVar1;
      puVar7[9] = uVar2;
      puVar7[10] = uVar3;
      puVar7[0xb] = uVar4;
      puVar7 = puVar7 + 0xc;
    } while (puVar8 != (undefined4 *)(*(int *)(pDVar5 + 8) * 0x30 + *(int *)(pDVar5 + 4)));
  }
  return this;
}





//==== 0078f120 vector_deleting_destructor_0078f120 ====


/* public: void * __thiscall util__tuple2_L_structutil__Vec3_L_double_G__Cstructutil__Color_G_:: 0 vectordeletingdestructor(unsigned int) */

void * 
util__tuple2_struct_util__Vec3_double__struct_util__Color____vector_deleting_destructor
          (tuple2_L_struct_util__Vec3_L_double_G__Cstruct_util__Color_G_ *this,uint param_1)

{
  tuple2_L_struct_util__Vec3_L_double_G__Cstruct_util__Color_G_ *ptVar1;
  tuple2_L_struct_util__Vec3_L_double_G__Cstruct_util__Color_G_ *ptVar2;
  tuple2_L_struct_util__Vec3_L_double_G__Cstruct_util__Color_G_ *ptVar3;
  int iVar4;
  
  if ((param_1 & 2) == 0) {
    *(undefined ***)(this + 0x18) = &vftable_5;
    if (*(void **)(this + 0x1c) != (void *)0x0) {
      port_op_delete(*(void **)(this + 0x1c));
      *(undefined4 *)(this + 0x1c) = 0;
    }
    if ((param_1 & 1) != 0) {
      port_op_delete(this,0x38);
    }
  }
  else {
    ptVar1 = this + -4;
    iVar4 = *(int *)ptVar1;
    if (iVar4 != 0) {
      ptVar3 = this + iVar4 * 0x38 + 0x1c;
      do {
        ptVar2 = ptVar3 + -0x38;
        iVar4 = iVar4 + -1;
        *(undefined ***)(ptVar3 + -0x3c) = &vftable_5;
        if (*(void **)ptVar2 != (void *)0x0) {
          port_op_delete(*(void **)ptVar2);
          *(undefined4 *)ptVar2 = 0;
        }
        ptVar3 = ptVar2;
      } while (iVar4 != 0);
    }
    this = ptVar1;
    if ((param_1 & 1) != 0) {
      port_op_delete(ptVar1,*(int *)ptVar1 * 0x38 + 4);
      return ptVar1;
    }
  }
  return this;
}





//==== 0078f1e0 vector_deleting_destructor_0078f1e0 ====


/* public: void * __thiscall util__tuple2_L_structItineraryNode_CenumItineraryMarker__Type_G_:: 0 vectordeletingdestructor(unsigned int) */

void * 
util__tuple2_struct_ItineraryNode_enum_ItineraryMarker__Type____vector_deleting_destructor
          (tuple2_L_struct_ItineraryNode_Cenum_ItineraryMarker__Type_G_ *this,uint param_1)

{
  tuple2_L_struct_ItineraryNode_Cenum_ItineraryMarker__Type_G_ *ptVar1;
  ReferenceController *this_00;
  tuple2_L_struct_ItineraryNode_Cenum_ItineraryMarker__Type_G_ *ptVar2;
  int iVar3;
  
  if ((param_1 & 2) != 0) {
    ptVar1 = this + -4;
    iVar3 = *(int *)ptVar1;
    if (iVar3 != 0) {
      ptVar2 = this + iVar3 * 0x158 + 0x104;
      do {
        iVar3 = iVar3 + -1;
        if (*(ReferenceController **)(ptVar2 + -0x130) != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(*(ReferenceController **)(ptVar2 + -0x130));
        }
        this_00 = *(ReferenceController **)(ptVar2 + -0x158);
        if (this_00 != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(this_00);
        }
        if (*(ReferenceController **)(ptVar2 + -0x160) != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(*(ReferenceController **)(ptVar2 + -0x160));
        }
        if (*(ReferenceController **)(ptVar2 + -0x168) != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(*(ReferenceController **)(ptVar2 + -0x168));
        }
        if (*(ReferenceController **)(ptVar2 + -600) != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(*(ReferenceController **)(ptVar2 + -600));
        }
        ptVar2 = ptVar2 + -0x158;
      } while (iVar3 != 0);
    }
    if ((param_1 & 1) != 0) {
      port_op_delete(ptVar1,*(int *)ptVar1 * 0x158 + 4);
    }
    return ptVar1;
  }
  if (*(ReferenceController **)(this + 300) != (ReferenceController *)0x0) {
    ReferenceController__ReleaseWeakReference(*(ReferenceController **)(this + 300));
  }
  if (*(ReferenceController **)(this + 0x104) != (ReferenceController *)0x0) {
    ReferenceController__ReleaseWeakReference(*(ReferenceController **)(this + 0x104));
  }
  if (*(ReferenceController **)(this + 0xfc) != (ReferenceController *)0x0) {
    ReferenceController__ReleaseWeakReference(*(ReferenceController **)(this + 0xfc));
  }
  if (*(ReferenceController **)(this + 0xf4) != (ReferenceController *)0x0) {
    ReferenceController__ReleaseWeakReference(*(ReferenceController **)(this + 0xf4));
  }
  if (*(ReferenceController **)(this + 4) != (ReferenceController *)0x0) {
    ReferenceController__ReleaseWeakReference(*(ReferenceController **)(this + 4));
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x158);
  }
  return this;
}





//==== 0078f2f0 vector_deleting_destructor_0078f2f0 ====


/* public: void * __thiscall util__tuple2_L_classutil__WeakPtr_L_structOrbiterInterface_G__Cstruct_ItineraryNode_G_:: 0 vectordeletingdestructor(unsigned int) */

void * 
util__tuple2_class_util__WeakPtr_struct_OrbiterInterface__struct_ItineraryNode____vector_deleting_destructor
          (tuple2_L_class_util__WeakPtr_L_struct_OrbiterInterface_G__Cstruct_ItineraryNode_G_ *this,
          uint param_1)

{
  tuple2_L_class_util__WeakPtr_L_struct_OrbiterInterface_G__Cstruct_ItineraryNode_G_ *ptVar1;
  ReferenceController *this_00;
  tuple2_L_class_util__WeakPtr_L_struct_OrbiterInterface_G__Cstruct_ItineraryNode_G_ *ptVar2;
  int iVar3;
  
  if ((param_1 & 2) != 0) {
    ptVar1 = this + -4;
    iVar3 = *(int *)ptVar1;
    if (iVar3 != 0) {
      ptVar2 = this + iVar3 * 0x158 + 0x10c;
      do {
        iVar3 = iVar3 + -1;
        if (*(ReferenceController **)(ptVar2 + -0x130) != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(*(ReferenceController **)(ptVar2 + -0x130));
        }
        this_00 = *(ReferenceController **)(ptVar2 + -0x158);
        if (this_00 != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(this_00);
        }
        if (*(ReferenceController **)(ptVar2 + -0x160) != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(*(ReferenceController **)(ptVar2 + -0x160));
        }
        if (*(ReferenceController **)(ptVar2 + -0x168) != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(*(ReferenceController **)(ptVar2 + -0x168));
        }
        if (*(ReferenceController **)(ptVar2 + -600) != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(*(ReferenceController **)(ptVar2 + -600));
        }
        if (*(ReferenceController **)(ptVar2 + -0x260) != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(*(ReferenceController **)(ptVar2 + -0x260));
        }
        ptVar2 = ptVar2 + -0x158;
      } while (iVar3 != 0);
    }
    if ((param_1 & 1) != 0) {
      port_op_delete(ptVar1,*(int *)ptVar1 * 0x158 + 4);
    }
    return ptVar1;
  }
  tuple2_L_class_util__WeakPtr_L_struct_OrbiterInterface_G__Cstruct_ItineraryNode_G___dtor(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x158);
  }
  return this;
}





//==== 0078f3c0 scalar_deleting_destructor_0078f3c0 ====


/* public: virtual void * __thiscall util__Darray_L_structutil__tuple2_L_struct_util__Vec3_L_double_G__Cstructutil__Color_G__G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_util__tuple2_struct_util__Vec3_double__struct_util__Color______scalar_deleting_destructor
          (Darray_L_struct_util__tuple2_L_struct_util__Vec3_L_double_G__Cstruct_util__Color_G___G_ *this,
          uint param_1)

{
  *(undefined ***)this = &vftable_480;
  if (*(tuple2_L_struct_util__Vec3_L_double_G__Cstruct_util__Color_G_ **)(this + 4) !=
      (tuple2_L_struct_util__Vec3_L_double_G__Cstruct_util__Color_G_ *)0x0) {
    tuple2_L_struct_util__Vec3_L_double_G__Cstruct_util__Color_G____vector_deleting_destructor_
              (*(tuple2_L_struct_util__Vec3_L_double_G__Cstruct_util__Color_G_ **)(this + 4),3);
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = (undefined **)(&vftable);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 0078f400 scalar_deleting_destructor_0078f400 ====


/* public: virtual void * __thiscall util__Darray_L_structutil__tuple2_L_structItineraryNode_Cenum_ItineraryMarker__Type_G__G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_util__tuple2_struct_ItineraryNode_enum_ItineraryMarker__Type______scalar_deleting_destructor
          (Darray_L_struct_util__tuple2_L_struct_ItineraryNode_Cenum_ItineraryMarker__Type_G___G_ *this,
          uint param_1)

{
  *(undefined ***)this = &vftable_479;
  if (*(tuple2_L_struct_ItineraryNode_Cenum_ItineraryMarker__Type_G_ **)(this + 4) !=
      (tuple2_L_struct_ItineraryNode_Cenum_ItineraryMarker__Type_G_ *)0x0) {
    tuple2_L_struct_ItineraryNode_Cenum_ItineraryMarker__Type_G____vector_deleting_destructor_
              (*(tuple2_L_struct_ItineraryNode_Cenum_ItineraryMarker__Type_G_ **)(this + 4),3);
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = (undefined **)(&vftable);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 0078f440 scalar_deleting_destructor_0078f440 ====


/* public: virtual void * __thiscall util__Darray_L_structutil__tuple2_L_classutil__WeakPtr_L_struct_OrbiterInterface_G__CstructItineraryNode_G__G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_util__tuple2_class_util__WeakPtr_struct_OrbiterInterface__struct_ItineraryNode______scalar_deleting_destructor
          (Darray_L_struct_util__tuple2_L_class_util__WeakPtr_L_struct_OrbiterInterface_G__Cstruct_ItineraryNode_G___G_
           *this,uint param_1)

{
  *(undefined ***)this = &vftable_481;
  if (*(tuple2_L_class_util__WeakPtr_L_struct_OrbiterInterface_G__Cstruct_ItineraryNode_G_ **)(this + 4) !=
      (tuple2_L_class_util__WeakPtr_L_struct_OrbiterInterface_G__Cstruct_ItineraryNode_G_ *)0x0) {
    tuple2_L_class_util__WeakPtr_L_struct_OrbiterInterface_G__Cstruct_ItineraryNode_G____vector_deleting_destructor_
              (*(tuple2_L_class_util__WeakPtr_L_struct_OrbiterInterface_G__Cstruct_ItineraryNode_G_ **)
                (this + 4),3);
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = (undefined **)(&vftable);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 0078f480 scalar_deleting_destructor_0078f480 ====


/* public: virtual void * __thiscall util__Darray_L_structItineraryNodeUI__PathNode_G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_ItineraryNodeUI__PathNode____scalar_deleting_destructor
          (Darray_L_struct_ItineraryNodeUI__PathNode_G_ *this,uint param_1)

{
  *(undefined ***)this = &vftable_476;
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





//==== 0078f6d0 Add_0078f6d0 ====


/* public: bool  util__Darray_L_structutil__tuple2_L_structutil__Vec3_L_double_G__Cstruct_util__Color_G__G___Add(struct util__tuple2_L_structutil__Vec3_L_double_G__Cstructutil__Color_G_ const &) */

bool 
util__Darray_struct_util__tuple2_struct_util__Vec3_double__struct_util__Color_____Add
          (Darray_L_struct_util__tuple2_L_struct_util__Vec3_L_double_G__Cstruct_util__Color_G___G_ *this,
          tuple2_L_struct_util__Vec3_L_double_G__Cstruct_util__Color_G_ *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  int iStack_8;
  
  iVar2 = *(int *)(this + 8);
  iStack_8 = iVar2 + 1;
  SetSize(this,&iStack_8);
  bVar7 = CheckSize(this,iVar2);
  if (!bVar7) {
  }
  iVar2 = *(int *)(this + 8);
  iVar3 = *(int *)(this + 4);
  uVar4 = *(undefined4 *)(param_1 + 4);
  uVar5 = *(undefined4 *)(param_1 + 8);
  uVar6 = *(undefined4 *)(param_1 + 0xc);
  puVar1 = (undefined4 *)(iVar3 + -0x38 + iVar2 * 0x38);
  *puVar1 = *(undefined4 *)param_1;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  *(undefined8 *)(iVar3 + -0x28 + iVar2 * 0x38) = *(undefined8 *)(param_1 + 0x10);
  util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(iVar3 + -0x1c + iVar2 * 0x38),(Str_L_char_G_ *)(param_1 + 0x1c));
  *(undefined4 *)(iVar3 + -0x10 + iVar2 * 0x38) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(iVar3 + -0xc + iVar2 * 0x38) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(iVar3 + -8 + iVar2 * 0x38) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(iVar3 + -4 + iVar2 * 0x38) = *(undefined4 *)(param_1 + 0x34);
  return true;
}





//==== 0078f850 AsArray ====


/* public: class util__Darray_L_structutil__Plane_L_double_G__G_ __thiscall
   util__Frustum_double___AsArray(void)const  */

Darray_L_struct_util__Line2_L_double_G___G_ * __thiscall
util__Frustum_double___AsArray(Frustum_L_double_G_ *this)

{
  undefined8 stack0x00000004;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Darray_L_struct_util__Line2_L_double_G___G_ *this_00;
  bool bVar5;
  void *pvVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  Darray_L_struct_util__Line2_L_double_G___G_ *in_stack_00000004;
  
  this_00 = in_stack_00000004;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = (undefined **)(&vftable_229);
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 6;
  pvVar6 = (void *)(uintptr_t)(port_op_new(0xc0));
  if (pvVar6 == (void *)0x0) {
    pvVar6 = (void *)0x0;
  }
  else {
    iVar8 = 6;
    puVar7 = (undefined4 *)((int)pvVar6 + 0x10);
    do {
      puVar7[-4] = 0;
      puVar7[-3] = 0;
      puVar7[-2] = 0;
      puVar7[-1] = 0;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      iVar8 = iVar8 + -1;
      puVar7 = puVar7 + 8;
    } while (iVar8 != 0);
  }
  *(void **)(in_stack_00000004 + 4) = pvVar6;
  iVar8 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0xc)) {
    iVar9 = 0;
    do {
      iVar1 = *(int *)(in_stack_00000004 + 4);
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      puVar7 = (undefined4 *)(iVar1 + -0x20 + iVar9);
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7 = (undefined4 *)(iVar1 + -0x10 + iVar9);
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
    } while (iVar8 < *(int *)(in_stack_00000004 + 0xc));
  }
  iVar8 = *(int *)(in_stack_00000004 + 8);
  in_stack_00000004 = (Darray_L_struct_util__Line2_L_double_G___G_ *)(iVar8 + 1);
  Darray_L_struct_util__Line2_L_double_G___G___SetSize(this_00,(int *)&stack0x00000004);
  bVar5 = Darray_L_struct_util__Plane_L_double_G___G___CheckSize
                    ((Darray_L_struct_util__Plane_L_double_G___G_ *)this_00,iVar8);
  if (bVar5) {
    iVar8 = *(int *)(this_00 + 8);
    iVar9 = *(int *)(this_00 + 4);
    uVar2 = *(undefined4 *)((int)&(this->Near).Mode__Normal.X + 4);
    uVar3 = *(undefined4 *)&(this->Near).Mode__Normal.Y;
    uVar4 = *(undefined4 *)((int)&(this->Near).Mode__Normal.Y + 4);
    puVar7 = (undefined4 *)(iVar8 * 0x20 + -0x20 + iVar9);
    *puVar7 = *(undefined4 *)&(this->Near).Mode__Normal.X;
    puVar7[1] = uVar2;
    puVar7[2] = uVar3;
    puVar7[3] = uVar4;
    uVar2 = *(undefined4 *)((int)&(this->Near).Mode__Normal.Z + 4);
    uVar3 = *(undefined4 *)&(this->Near).OriginDistance;
    uVar4 = *(undefined4 *)((int)&(this->Near).OriginDistance + 4);
    puVar7 = (undefined4 *)(iVar8 * 0x20 + -0x10 + iVar9);
    *puVar7 = *(undefined4 *)&(this->Near).Mode__Normal.X;
    puVar7[1] = uVar2;
    puVar7[2] = uVar3;
    puVar7[3] = uVar4;
  }
  iVar8 = *(int *)(this_00 + 8);
  in_stack_00000004 = (Darray_L_struct_util__Line2_L_double_G___G_ *)(iVar8 + 1);
  Darray_L_struct_util__Line2_L_double_G___G___SetSize(this_00,(int *)&stack0x00000004);
  bVar5 = Darray_L_struct_util__Plane_L_double_G___G___CheckSize
                    ((Darray_L_struct_util__Plane_L_double_G___G_ *)this_00,iVar8);
  if (bVar5) {
    iVar8 = *(int *)(this_00 + 8);
    iVar9 = *(int *)(this_00 + 4);
    uVar2 = *(undefined4 *)((int)&(this->Far).Mode__Normal.X + 4);
    uVar3 = *(undefined4 *)&(this->Near).Mode__Normal.Y;
    uVar4 = *(undefined4 *)((int)&(this->Far).Mode__Normal.Y + 4);
    puVar7 = (undefined4 *)(iVar8 * 0x20 + -0x20 + iVar9);
    *puVar7 = *(undefined4 *)&(this->Near).Mode__Normal.X;
    puVar7[1] = uVar2;
    puVar7[2] = uVar3;
    puVar7[3] = uVar4;
    uVar2 = *(undefined4 *)((int)&(this->Far).Mode__Normal.Z + 4);
    uVar3 = *(undefined4 *)&(this->Near).OriginDistance;
    uVar4 = *(undefined4 *)((int)&(this->Far).OriginDistance + 4);
    puVar7 = (undefined4 *)(iVar8 * 0x20 + -0x10 + iVar9);
    *puVar7 = *(undefined4 *)&(this->Near).Mode__Normal.X;
    puVar7[1] = uVar2;
    puVar7[2] = uVar3;
    puVar7[3] = uVar4;
  }
  iVar8 = *(int *)(this_00 + 8);
  in_stack_00000004 = (Darray_L_struct_util__Line2_L_double_G___G_ *)(iVar8 + 1);
  Darray_L_struct_util__Line2_L_double_G___G___SetSize(this_00,(int *)&stack0x00000004);
  bVar5 = Darray_L_struct_util__Plane_L_double_G___G___CheckSize
                    ((Darray_L_struct_util__Plane_L_double_G___G_ *)this_00,iVar8);
  if (bVar5) {
    iVar8 = *(int *)(this_00 + 8);
    iVar9 = *(int *)(this_00 + 4);
    uVar2 = *(undefined4 *)((int)&(this->FaceType__Top).Mode__Normal.X + 4);
    uVar3 = *(undefined4 *)&(this->FaceType__Top).Mode__Normal.Y;
    uVar4 = *(undefined4 *)((int)&(this->FaceType__Top).Mode__Normal.Y + 4);
    puVar7 = (undefined4 *)(iVar8 * 0x20 + -0x20 + iVar9);
    *puVar7 = *(undefined4 *)&(this->FaceType__Top).Mode__Normal.X;
    puVar7[1] = uVar2;
    puVar7[2] = uVar3;
    puVar7[3] = uVar4;
    uVar2 = *(undefined4 *)((int)&(this->FaceType__Top).Mode__Normal.Z + 4);
    uVar3 = *(undefined4 *)&(this->FaceType__Top).OriginDistance;
    uVar4 = *(undefined4 *)((int)&(this->FaceType__Top).OriginDistance + 4);
    puVar7 = (undefined4 *)(iVar8 * 0x20 + -0x10 + iVar9);
    *puVar7 = (this->FaceType__Top).Mode__Normal.Z;
    puVar7[1] = uVar2;
    puVar7[2] = uVar3;
    puVar7[3] = uVar4;
  }
  iVar8 = *(int *)(this_00 + 8);
  in_stack_00000004 = (Darray_L_struct_util__Line2_L_double_G___G_ *)(iVar8 + 1);
  Darray_L_struct_util__Line2_L_double_G___G___SetSize(this_00,(int *)&stack0x00000004);
  bVar5 = Darray_L_struct_util__Plane_L_double_G___G___CheckSize
                    ((Darray_L_struct_util__Plane_L_double_G___G_ *)this_00,iVar8);
  if (bVar5) {
    iVar8 = *(int *)(this_00 + 8);
    iVar9 = *(int *)(this_00 + 4);
    uVar2 = *(undefined4 *)((int)&(this->FaceType__Bottom).Mode__Normal.X + 4);
    uVar3 = *(undefined4 *)&(this->FaceType__Bottom).Mode__Normal.Y;
    uVar4 = *(undefined4 *)((int)&(this->FaceType__Bottom).Mode__Normal.Y + 4);
    puVar7 = (undefined4 *)(iVar8 * 0x20 + -0x20 + iVar9);
    *puVar7 = (this->FaceType__Bottom).Mode__Normal.X;
    puVar7[1] = uVar2;
    puVar7[2] = uVar3;
    puVar7[3] = uVar4;
    uVar2 = *(undefined4 *)((int)&(this->FaceType__Bottom).Mode__Normal.Z + 4);
    uVar3 = *(undefined4 *)&(this->FaceType__Bottom).OriginDistance;
    uVar4 = *(undefined4 *)((int)&(this->FaceType__Bottom).OriginDistance + 4);
    puVar7 = (undefined4 *)(iVar8 * 0x20 + -0x10 + iVar9);
    *puVar7 = *(undefined4 *)&(this->FaceType__Bottom).Mode__Normal.Z;
    puVar7[1] = uVar2;
    puVar7[2] = uVar3;
    puVar7[3] = uVar4;
  }
  iVar8 = *(int *)(this_00 + 8);
  in_stack_00000004 = (Darray_L_struct_util__Line2_L_double_G___G_ *)(iVar8 + 1);
  Darray_L_struct_util__Line2_L_double_G___G___SetSize(this_00,(int *)&stack0x00000004);
  bVar5 = Darray_L_struct_util__Plane_L_double_G___G___CheckSize
                    ((Darray_L_struct_util__Plane_L_double_G___G_ *)this_00,iVar8);
  if (bVar5) {
    iVar8 = *(int *)(this_00 + 8);
    iVar9 = *(int *)(this_00 + 4);
    uVar2 = *(undefined4 *)((int)&(this->FaceType__Left).Mode__Normal.X + 4);
    uVar3 = *(undefined4 *)&(this->FaceType__Left).Mode__Normal.Y;
    uVar4 = *(undefined4 *)((int)&(this->FaceType__Left).Mode__Normal.Y + 4);
    puVar7 = (undefined4 *)(iVar8 * 0x20 + -0x20 + iVar9);
    *puVar7 = *(undefined4 *)&(this->FaceType__Left).Mode__Normal.X;
    puVar7[1] = uVar2;
    puVar7[2] = uVar3;
    puVar7[3] = uVar4;
    uVar2 = *(undefined4 *)((int)&(this->FaceType__Left).Mode__Normal.Z + 4);
    uVar3 = *(undefined4 *)&(this->FaceType__Left).OriginDistance;
    uVar4 = *(undefined4 *)((int)&(this->FaceType__Left).OriginDistance + 4);
    puVar7 = (undefined4 *)(iVar8 * 0x20 + -0x10 + iVar9);
    *puVar7 = *(undefined4 *)&(this->FaceType__Left).Mode__Normal.Z;
    puVar7[1] = uVar2;
    puVar7[2] = uVar3;
    puVar7[3] = uVar4;
  }
  iVar8 = *(int *)(this_00 + 8);
  in_stack_00000004 = (Darray_L_struct_util__Line2_L_double_G___G_ *)(iVar8 + 1);
  Darray_L_struct_util__Line2_L_double_G___G___SetSize(this_00,(int *)&stack0x00000004);
  bVar5 = Darray_L_struct_util__Plane_L_double_G___G___CheckSize
                    ((Darray_L_struct_util__Plane_L_double_G___G_ *)this_00,iVar8);
  if (bVar5) {
    iVar8 = *(int *)(this_00 + 8);
    iVar9 = *(int *)(this_00 + 4);
    uVar2 = *(undefined4 *)((int)&(this->FaceType__Right).Mode__Normal.X + 4);
    uVar3 = *(undefined4 *)&(this->FaceType__Right).Mode__Normal.Y;
    uVar4 = *(undefined4 *)((int)&(this->FaceType__Right).Mode__Normal.Y + 4);
    puVar7 = (undefined4 *)(iVar8 * 0x20 + -0x20 + iVar9);
    *puVar7 = *(undefined4 *)&(this->FaceType__Right).Mode__Normal.X;
    puVar7[1] = uVar2;
    puVar7[2] = uVar3;
    puVar7[3] = uVar4;
    uVar2 = *(undefined4 *)((int)&(this->FaceType__Right).Mode__Normal.Z + 4);
    uVar3 = *(undefined4 *)&(this->FaceType__Right).OriginDistance;
    uVar4 = *(undefined4 *)((int)&(this->FaceType__Right).OriginDistance + 4);
    puVar7 = (undefined4 *)(iVar8 * 0x20 + -0x10 + iVar9);
    *puVar7 = *(undefined4 *)&(this->FaceType__Right).Mode__Normal.Z;
    puVar7[1] = uVar2;
    puVar7[2] = uVar3;
    puVar7[3] = uVar4;
  }
  return this_00;
}





//==== 0078fa60 CheckSize_0078fa60 ====


/* private: bool  util__Darray_L_structutil__tuple2_L_structutil__Vec3_L_double_G__Cstruct_util__Color_G__G___CheckSize(int) */

bool 
util__Darray_struct_util__tuple2_struct_util__Vec3_double__struct_util__Color_____CheckSize
          (Darray_L_struct_util__tuple2_L_struct_util__Vec3_L_double_G__Cstruct_util__Color_G___G_ *this,
          int param_1)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  bool bVar9;
  uint *puStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar4 = *(uint *)(this + 8);
  bVar9 = -1 < (int)uVar4;
  bVar1 = !bVar9;
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
    return bVar1 && bVar9;
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
  uVar4 = -(uint)((int)((ulonglong)uVar5 * 0x38 >> 0x20) != 0) | (uint)((ulonglong)uVar5 * 0x38);
  puVar3 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
  if (puVar3 == (uint *)0x0) {
    puStack_c = (uint *)0x0;
  }
  else {
    *puVar3 = uVar5;
    puVar3 = puVar3 + 1;
    puStack_c = puVar3;
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      Color__Color((Color *)(puVar3 + 6));
      puVar3 = puVar3 + 0xe;
    }
  }
  puVar3 = *(uint **)(this + 4);
  if (puVar3 != (uint *)0x0) {
    puVar7 = puStack_c + *(int *)(this + 8) * 0xe;
    if (puVar3 != puVar3 + param_1 * 0xe) {
      puVar8 = puStack_c + 10;
      puVar6 = puVar3;
      do {
        if (puVar8 + -10 == puVar7) break;
        uVar4 = puVar6[1];
        uVar5 = puVar6[2];
        uVar2 = puVar6[3];
        puVar8[-10] = *puVar6;
        puVar8[-9] = uVar4;
        puVar8[-8] = uVar5;
        puVar8[-7] = uVar2;
        *(undefined8 *)(puVar8 + -6) = *(undefined8 *)(puVar6 + 4);
        util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar8 + -3),(Str_L_char_G_ *)(puVar6 + 7));
        *puVar8 = puVar6[10];
        puVar8[1] = puVar6[0xb];
        puVar8[2] = puVar6[0xc];
        puVar3 = puVar6 + 0xd;
        puVar6 = puVar6 + 0xe;
        puVar8[3] = *puVar3;
        puVar8 = puVar8 + 0xe;
        puVar3 = *(uint **)(this + 4);
      } while (puVar6 != puVar3 + param_1 * 0xe);
    }
    if (puVar3 != (uint *)0x0) {
      uVar4 = puVar3[-1];
      if (uVar4 == 0) {
        uVar4 = 0;
      }
      else {
        puVar7 = puVar3 + uVar4 * 0xe + 7;
        do {
          puVar6 = puVar7 + -0xe;
          uVar4 = uVar4 - 1;
          puVar7[-0xf] = (uint)&vftable_5;
          if ((void *)*puVar6 != (void *)0x0) {
            port_op_delete((void *)*puVar6);
            *puVar6 = 0;
          }
          puVar7 = puVar6;
        } while (uVar4 != 0);
        uVar4 = puVar3[-1];
      }
      port_op_delete(puVar3 + -1,uVar4 * 0x38 + 4);
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(uint **)(this + 4) = puStack_c;
  return bStack_5;
}





//==== 0078ffc0 CheckSize_0078ffc0 ====


/* private: bool  util__Darray_L_structItineraryNodeUI__PathNode_G___CheckSize(int) */

bool 
util__Darray_struct_ItineraryNodeUI__PathNode___CheckSize
          (Darray_L_struct_ItineraryNodeUI__PathNode_G_ *this,int param_1)

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
    SetSize(this,(int *)&puStack_c);
    uVar7 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar2;
  bVar2 = (int)uVar7 < 0x40000000;
  if (!bVar2) {
    puStack_c = (undefined4 *)0x3fffffff;
    SetSize(this,(int *)&puStack_c);
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
              port_op_new(-(uint)((int)((ulonglong)uVar9 * 0x30 >> 0x20) != 0) |
                             (uint)((ulonglong)uVar9 * 0x30));
  if (puStack_c == (undefined4 *)0x0) {
    puStack_c = (undefined4 *)0x0;
  }
  else if (uVar9 != 0) {
    puVar6 = puStack_c + 8;
    do {
      puVar6[-8] = 0;
      puVar6[-6] = 0;
      puVar6[-5] = 0;
      puVar6[-4] = 0;
      puVar6[-3] = 0;
      puVar6[-2] = 0;
      puVar6[-1] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      *(undefined8 *)(puVar6 + 2) = 0;
      uVar9 = uVar9 - 1;
      puVar6 = puVar6 + 0xc;
    } while (uVar9 != 0);
  }
  puVar6 = *(undefined4 **)(this + 4);
  if (puVar6 != (undefined4 *)0x0) {
    iVar1 = *(int *)(this + 8);
    puVar8 = puVar6;
    puVar10 = puStack_c;
    if (puVar6 != puVar6 + param_1 * 0xc) {
      do {
        if (puVar10 == puStack_c + iVar1 * 0xc) break;
        uVar3 = puVar6[1];
        uVar4 = puVar6[2];
        uVar5 = puVar6[3];
        *puVar10 = *puVar6;
        puVar10[1] = uVar3;
        puVar10[2] = uVar4;
        puVar10[3] = uVar5;
        uVar3 = puVar6[5];
        uVar4 = puVar6[6];
        uVar5 = puVar6[7];
        puVar10[4] = puVar6[4];
        puVar10[5] = uVar3;
        puVar10[6] = uVar4;
        puVar10[7] = uVar5;
        puVar8 = puVar6 + 8;
        uVar3 = puVar6[9];
        uVar4 = puVar6[10];
        uVar5 = puVar6[0xb];
        puVar6 = puVar6 + 0xc;
        puVar10[8] = *puVar8;
        puVar10[9] = uVar3;
        puVar10[10] = uVar4;
        puVar10[0xb] = uVar5;
        puVar8 = *(undefined4 **)(this + 4);
        puVar10 = puVar10 + 0xc;
      } while (puVar6 != puVar8 + param_1 * 0xc);
    }
    port_op_delete(puVar8);
    *(undefined4 *)(this + 4) = 0;
  }
  *(undefined4 **)(this + 4) = puStack_c;
  return bStack_5;
}





//==== 00790130 Clear_00790130 ====


/* public: virtual void  util__Darray_L_structutil__tuple2_L_structutil__Vec3_L_double_G__Cstruct_util__Color_G__G___Clear(void) */

void 
util__Darray_struct_util__tuple2_struct_util__Vec3_double__struct_util__Color_____Clear
          (Darray_L_struct_util__tuple2_L_struct_util__Vec3_L_double_G__Cstruct_util__Color_G___G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 00790150 Clear_00790150 ====


/* public: virtual void  util__Darray_L_structutil__tuple2_L_structItineraryNode_Cenum_ItineraryMarker__Type_G__G___Clear(void) */

void 
util__Darray_struct_util__tuple2_struct_ItineraryNode_enum_ItineraryMarker__Type_____Clear
          (Darray_L_struct_util__tuple2_L_struct_ItineraryNode_Cenum_ItineraryMarker__Type_G___G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 00790170 Clear_00790170 ====


/* public: virtual void  util__Darray_L_structutil__tuple2_L_classutil__WeakPtr_L_struct_OrbiterInterface_G__CstructItineraryNode_G__G___Clear(void) */

void 
util__Darray_struct_util__tuple2_class_util__WeakPtr_struct_OrbiterInterface__struct_ItineraryNode_____Clear(Darray_L_struct_util__tuple2_L_class_util__WeakPtr_L_struct_OrbiterInterface_G__Cstruct_ItineraryNode_G___G_
      *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 00790190 Clear_00790190 ====


/* public: virtual void  util__Darray_L_structItineraryNodeUI__PathNode_G___Clear(void) */

void 
util__Darray_struct_ItineraryNodeUI__PathNode___Clear
          (Darray_L_struct_ItineraryNodeUI__PathNode_G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 007901b0 DememoizeAll_007901b0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall GhostedUIButton__DememoizeAll(void)const  */

void __thiscall GhostedUIButton__DememoizeAll(GhostedUIButton *this)

{
  undefined8 stack0xfffffffc;
  GhostedUIButtonMemoizationHandler *pGVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  pGVar1 = &this->GhostedUIButtonMemoizationHandlerInstance;
  iVar2 = (**(code **)((this->GhostedUIButtonMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 +
                      0xc))();
  if (local_c < iVar2) {
    do {
      puVar3 = (undefined4 *)(**(code **)(pGVar1->ResetFunctions)._pad_0x0_0)(&local_c);
      (*(code *)*puVar3)();
      local_c = local_c + 1;
      iVar2 = (**(code **)((pGVar1->ResetFunctions)._pad_0x0_0 + 0xc))();
    } while (local_c < iVar2);
  }
  (**(code **)((pGVar1->ResetFunctions)._pad_0x0_0 + 0x10))();
  return;
}

//==== 007902f0 GetDefaultSetters_007902f0 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   PointShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl PointShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_0c9a0a0c__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_0c9a0a0c__thread_safe_static_guard_0__);
    if ( cde_l2_0c9a0a0c__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_f9cc2910_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_f9cc2910_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_f9cc2910_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_PointShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_0c9a0a0c__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_f9cc2910_DefaultSetters;
}





//==== 00792b70 GetNodeUIVisualSize ====


/* public: static double __cdecl ItineraryNodeUI__GetNodeUIVisualSize(void) */

double __cdecl ItineraryNodeUI__GetNodeUIVisualSize(void)

{
  return 3.5;
}





//==== 00793c30 GetStatic_00793c30 ====


/* public: static class PointShader * __cdecl PointShader__GetStatic(void) */

PointShader * __cdecl PointShader__GetStatic(void)

{
  PointShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_34ce410b__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_6c8ab99d__thread_safe_static_guard_0__);
    if ( cde_l2_0c9a0a0c__thread_safe_static_guard_0__ == -1) {
      this = (PointShader *)port_op_new(0x54);
      if (this == (PointShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0x54);
        pSVar1 = (Shader *)PointShader__PointShader(this);
      }
       cde_l2_ec02fbcc_Singleton =
           (PointShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_6c8ab99d__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_ec02fbcc_Singleton;
}





//==== 00795450 GetValueLocations_00795450 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   PointShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl PointShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_2598770f__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_2598770f__thread_safe_static_guard_0__);
    if ( cde_l2_2598770f__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_3b791d1f_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_3b791d1f_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_3b791d1f_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_PointShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_2598770f__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_3b791d1f_ValueLocations;
}





//==== 00795f60 LoadFarPlaneLocation_00795f60 ====

/* private: static void __cdecl PointShader__LoadFarPlaneLocation(void) */

void __cdecl PointShader__LoadFarPlaneLocation(void)

{
  PointShader *pPVar1;
  PointShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PointShader__GetStatic();
  pcVar4 = "FarPlane";
  pPVar2 = PointShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41);
  local_8 = 0;
  pPVar1 = PointShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 00795fb0 LoadInverseModelMatrixLocation_00795fb0 ====

/* private: static void __cdecl PointShader__LoadInverseModelMatrixLocation(void) */

void __cdecl PointShader__LoadInverseModelMatrixLocation(void)

{
  PointShader *pPVar1;
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
  
  pPVar1 = PointShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pPVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x795fdb;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41);
  pPVar1 = PointShader__GetStatic();
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
  (**(code **)(pPVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 00795ff0 LoadModelMatrixLocation_00795ff0 ====

/* private: static void __cdecl PointShader__LoadModelMatrixLocation(void) */

void __cdecl PointShader__LoadModelMatrixLocation(void)

{
  PointShader *pPVar1;
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
  
  pPVar1 = PointShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pPVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x79601b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41);
  pPVar1 = PointShader__GetStatic();
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
  (**(code **)(pPVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 00796030 LoadNearPlaneLocation_00796030 ====

/* private: static void __cdecl PointShader__LoadNearPlaneLocation(void) */

void __cdecl PointShader__LoadNearPlaneLocation(void)

{
  PointShader *pPVar1;
  PointShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PointShader__GetStatic();
  pcVar4 = "NearPlane";
  pPVar2 = PointShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41);
  local_8 = 0;
  pPVar1 = PointShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 00796080 LoadNormalMatrixLocation_00796080 ====

/* private: static void __cdecl PointShader__LoadNormalMatrixLocation(void) */

void __cdecl PointShader__LoadNormalMatrixLocation(void)

{
  PointShader *pPVar1;
  PointShader *pPVar2;
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
  
  pPVar1 = PointShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pPVar2 = PointShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41);
  pPVar1 = PointShader__GetStatic();
  local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 00796110 LoadTotalTransformMatrixLocation_00796110 ====

/* private: static void __cdecl PointShader__LoadTotalTransformMatrixLocation(void) */

void __cdecl PointShader__LoadTotalTransformMatrixLocation(void)

{
  PointShader *pPVar1;
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
  
  pPVar1 = PointShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pPVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x79613b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41);
  pPVar1 = PointShader__GetStatic();
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
  (**(code **)(pPVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 00796150 PartialResetState_00796150 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall PointShader__PartialResetState(void)const  */

void __thiscall PointShader__PartialResetState(PointShader *this)

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

//==== 00799c70 SetAll_00799c70 ====


/* public: virtual void  util__Darray_L_structutil__tuple2_L_structutil__Vec3_L_double_G__Cstruct_util__Color_G__G___SetAll(struct util__tuple2_L_structutil__Vec3_L_double_G__Cstructutil__Color_G_ const &)
    */

void 
util__Darray_struct_util__tuple2_struct_util__Vec3_double__struct_util__Color_____SetAll
          (Darray_L_struct_util__tuple2_L_struct_util__Vec3_L_double_G__Cstruct_util__Color_G___G_ *this,
          tuple2_L_struct_util__Vec3_L_double_G__Cstruct_util__Color_G_ *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(this + 4);
  if (puVar4 != puVar4 + *(int *)(this + 8) * 0xe) {
    do {
      uVar1 = *(undefined4 *)(param_1 + 4);
      uVar2 = *(undefined4 *)(param_1 + 8);
      uVar3 = *(undefined4 *)(param_1 + 0xc);
      *puVar4 = *(undefined4 *)param_1;
      puVar4[1] = uVar1;
      puVar4[2] = uVar2;
      puVar4[3] = uVar3;
      *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(param_1 + 0x10);
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar4 + 7),(Str_L_char_G_ *)(param_1 + 0x1c));
      puVar4[10] = *(undefined4 *)(param_1 + 0x28);
      puVar4[0xb] = *(undefined4 *)(param_1 + 0x2c);
      puVar4[0xc] = *(undefined4 *)(param_1 + 0x30);
      puVar4[0xd] = *(undefined4 *)(param_1 + 0x34);
      puVar4 = puVar4 + 0xe;
    } while (puVar4 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x38));
  }
  return;
}





//==== 00799db0 SetFarPlane_00799db0 ====

/* public: virtual void  PointShader__SetFarPlane(float const &)const  */

void  PointShader__SetFarPlane(PointShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->FarPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41);
  }
  return;
}

//==== 00799e40 SetFarPlane_00799e40 ====

/* public: virtual void  PointShader__SetFarPlane(double const &)const  */

void  PointShader__SetFarPlane__o3(PointShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->FarPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41);
  }
  return;
}

//==== 00799ed0 SetInverseModelMatrix_00799ed0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PointShader__SetInverseModelMatrix(struct util__Matrix4x4_L_float_G_
   const &)const  */

void  PointShader__SetInverseModelMatrix(PointShader *this,Matrix4x4_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41,
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
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41);
  }
  return;
}

//==== 00799f90 SetInverseModelMatrix_00799f90 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PointShader__SetInverseModelMatrix(struct util__Matrix4x4_L_double_G_
   const &)const  */

void  PointShader__SetInverseModelMatrix__o3(PointShader *this,Matrix4x4_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41);
  }
  return;
}

//==== 0079a080 SetInverseModelMatrixDefault_0079a080 ====

/* private: static void __cdecl PointShader__SetInverseModelMatrixDefault(void) */

void __cdecl PointShader__SetInverseModelMatrixDefault(void)

{
  PointShader *pPVar1;
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
  
  pPVar1 = PointShader__GetStatic();
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
  (**(code **)(pPVar1->_pad_0x0_0 + 0x28))(&local_90);
  return;
}

//==== 0079a160 SetModelMatrix_0079a160 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PointShader__SetModelMatrix(struct util__Matrix4x4_L_float_G_ const
   &)const  */

void  PointShader__SetModelMatrix(PointShader *this,Matrix4x4_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41,
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
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41);
  }
  return;
}

//==== 0079a220 SetModelMatrix_0079a220 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PointShader__SetModelMatrix(struct util__Matrix4x4_L_double_G_ const
   &)const  */

void  PointShader__SetModelMatrix__o3(PointShader *this,Matrix4x4_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41);
  }
  return;
}

//==== 0079a310 SetModelMatrixDefault_0079a310 ====

/* private: static void __cdecl PointShader__SetModelMatrixDefault(void) */

void __cdecl PointShader__SetModelMatrixDefault(void)

{
  PointShader *pPVar1;
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
  
  pPVar1 = PointShader__GetStatic();
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
  (**(code **)(pPVar1->_pad_0x0_0 + 0x20))(&local_90);
  return;
}

//==== 0079a3f0 SetNearPlane_0079a3f0 ====

/* public: virtual void  PointShader__SetNearPlane(float const &)const  */

void  PointShader__SetNearPlane(PointShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NearPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41);
  }
  return;
}

//==== 0079a480 SetNearPlane_0079a480 ====

/* public: virtual void  PointShader__SetNearPlane(double const &)const  */

void  PointShader__SetNearPlane__o3(PointShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NearPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41);
  }
  return;
}

//==== 0079a510 SetNormalMatrix_0079a510 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PointShader__SetNormalMatrix(struct util__Matrix3x3_L_float_G_ const
   &)const  */

void  PointShader__SetNormalMatrix(PointShader *this,Matrix3x3_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NormalMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_2c = param_1->Data[0];
    fStack_28 = param_1->Data[1];
    fStack_24 = param_1->Data[2];
    fStack_20 = param_1->Data[3];
    *(uint32_t *)&local_1c = param_1->Data[4];
    fStack_18 = param_1->Data[5];
    fStack_14 = param_1->Data[6];
    fStack_10 = param_1->Data[7];
    local_c = param_1->Data[8];
    (*___glewUniformMatrix3fv)(iVar1,1,0,&local_2c);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41);
  }
  return;
}

//==== 0079a5d0 SetNormalMatrix_0079a5d0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PointShader__SetNormalMatrix(struct util__Matrix3x3_L_double_G_ const
   &)const  */

void  PointShader__SetNormalMatrix__o3(PointShader *this,Matrix3x3_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NormalMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_2c = (float)param_1->Data[0];
    local_28 = (float)param_1->Data[1];
    *(uint32_t *)&local_24 = (float)param_1->Data[2];
    local_20 = (float)param_1->Data[3];
    *(uint32_t *)&local_1c = (float)param_1->Data[4];
    local_18 = (float)param_1->Data[5];
    local_14 = (float)param_1->Data[6];
    local_10 = (float)param_1->Data[7];
    local_c = (float)param_1->Data[8];
    (*___glewUniformMatrix3fv)(iVar1,1,0,&local_2c);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41);
  }
  return;
}

//==== 0079a6f0 SetSize_0079a6f0 ====


/* private: void  util__Darray_L_structutil__tuple2_L_structutil__Vec3_L_double_G__Cstruct_util__Color_G__G___SetSize(int const &) */

void 
util__Darray_struct_util__tuple2_struct_util__Vec3_double__struct_util__Color_____SetSize
          (Darray_L_struct_util__tuple2_L_struct_util__Vec3_L_double_G__Cstruct_util__Color_G___G_ *this,
          int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 auStack_24 [16];
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
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
      Color__Color((Color *)auStack_24);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      *(undefined8 *)(puVar4 + 4) = 0;
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar4 + 7),(Str_L_char_G_ *)(auStack_24 + 4));
      (*(uint32_t*)&(auStack_24)) = (uint32_t)(uintptr_t)(&vftable_5);
      puVar4[10] = fStack_14;
      puVar4[0xb] = fStack_10;
      puVar4[0xc] = fStack_c;
      puVar4[0xd] = fStack_8;
      if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
        port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
      }
      puVar4 = puVar4 + 0xe;
    } while (puVar4 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x38));
  }
  *(int *)(this + 8) = iVar3;
  return;
}





//==== 0079aaa0 SetSize_0079aaa0 ====


/* private: void  util__Darray_L_structItineraryNodeUI__PathNode_G___SetSize(int const &) */

void 
util__Darray_struct_ItineraryNodeUI__PathNode___SetSize
          (Darray_L_struct_ItineraryNodeUI__PathNode_G_ *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uStack_30;
  
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
     (puVar3 = (undefined4 *)(iVar4 * 0x30 + iVar2),
     puVar3 != (undefined4 *)(*(int *)(this + 8) * 0x30 + iVar2))) {
    do {
      *puVar3 = 0;
      puVar3[1] = uStack_30;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[8] = 0;
      puVar3[9] = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      puVar3 = puVar3 + 0xc;
    } while (puVar3 != (undefined4 *)(*(int *)(this + 8) * 0x30 + *(int *)(this + 4)));
  }
  *(int *)(this + 8) = iVar4;
  return;
}





//==== 0079ab80 SetTotalTransformMatrix_0079ab80 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PointShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void  PointShader__SetTotalTransformMatrix(PointShader *this,Matrix4x4_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41,
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
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41);
  }
  return;
}

//==== 0079ac40 SetTotalTransformMatrix_0079ac40 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PointShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void  PointShader__SetTotalTransformMatrix__o3(PointShader *this,Matrix4x4_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x41);
  }
  return;
}

//==== 0079ad30 SetTotalTransformMatrixDefault_0079ad30 ====

/* private: static void __cdecl PointShader__SetTotalTransformMatrixDefault(void) */

void __cdecl PointShader__SetTotalTransformMatrixDefault(void)

{
  PointShader *pPVar1;
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
  
  pPVar1 = PointShader__GetStatic();
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
  (**(code **)(pPVar1->_pad_0x0_0 + 0x30))(&local_90);
  return;
}

//==== 0079ae10 Setup_0079ae10 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall PointShader__Setup(void) */

bool __thiscall PointShader__Setup(PointShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  Str_L_char_G_ *this_00;
  PointShader *pPVar2;
  Darray_L_void____cdecl_P__void__G_ *pDVar3;
  int iVar4;
  undefined4 *puVar5;
  Str_L_char_G_ *__return_storage_ptr__;
  Str_L_char_G_ *pSVar6;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  int local_10;
  ShaderStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_1c.Length = 0;
  local_1c.Data = (char *)0x0;
  local_1c.Capacity = 0;
  pSVar6 = &this->AdditionalPreprocessor;
  this->IsReadyToUse = false;
  __return_storage_ptr__ = &local_1c;
  this_00 = (Str_L_char_G_ *)
            util__Str_char___Str_char(&local_28,"#define THREE_DIMENSIONAL\n#define POINT_SHADER");
  util__Str_char___operator(this_00,__return_storage_ptr__,pSVar6);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  util__Str_char___Str_char(&local_28,"TexColor");
  util__Str_char___Str_char(&local_34,"Lines");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_34,&local_28,&local_1c);
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  if (bVar1) {
    pPVar2 = PointShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pPVar2);
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
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
  }
  return bVar1;
}

//==== 0079b5c0 MethodCallerConst__private__struct_util__Vec2_int____thiscall_OrbitDirectionArrow__GetArrowApproximateSize_void_const__ ====


/* public: static struct util__Vec2_L_int_G_ __cdecl util__DelegateFactory_L_struct_OrbitDirectionArrow_Cstructutil__Vec2_L_int_G__G___MethodCallerConst_L__private_structutil__Vec2_L_int_G____thiscallOrbitDirectionArrow__GetArrowApproximateSize_void_const_G_(void const * const) */

Vec2_L_int_G_ __cdecl
util__DelegateFactory_struct_OrbitDirectionArrow_struct_util__Vec2_int_____MethodCallerConst__private__struct_util__Vec2_int____thiscall_OrbitDirectionArrow__GetArrowApproximateSize_void_const
          (void *param_1)

{
  Vec4_L_int_G_ VVar1;
  OrbitDirectionArrow *in_stack_00000008;
  
  VVar1 = OrbitDirectionArrow__GetArrowApproximateSize(in_stack_00000008);
  *(undefined4 *)param_1 = *(undefined4 *)VVar1.X;
  *(undefined4 *)((int)param_1 + 4) = ((undefined4 *)VVar1.X)[1];
  VVar1.Y = (int)param_1;
  VVar1.X = (int)param_1;
}





//==== 0079b5f0 MethodCallerConst__private__struct_util__Vec2_int____thiscall_OrbitDirectionArrow__GetArrowLocation_void_const__ ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: static struct util__Vec2_L_int_G_ __cdecl util__DelegateFactory_L_struct_OrbitDirectionArrow_Cstructutil__Vec2_L_int_G__G___MethodCallerConst_L__private_structutil__Vec2_L_int_G____thiscallOrbitDirectionArrow__GetArrowLocation_void_const_G_(void const * const) */

Vec2_L_int_G_ __cdecl
util__DelegateFactory_struct_OrbitDirectionArrow_struct_util__Vec2_int_____MethodCallerConst__private__struct_util__Vec2_int____thiscall_OrbitDirectionArrow__GetArrowLocation_void_const
          (void *param_1)

{
  double dVar1;
  Manager *this;
  Vec4_L_double_G_ VVar2;
  Vec3_L_double_G_ *pVVar3;
  CameraManager *this_00;
  double *pdVar4;
  double *pdVar5;
  Vec2_L_int_G_ VVar6;
  OrbitDirectionArrow *in_stack_00000008;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 uVar13;
  undefined1 auStack_44 [24];
  Vec3_L_double_G_ VStack_2c;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  this = (Manager *)in_stack_00000008->_pad_0x8_2;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  pVVar3 = (Vec3_L_double_G_ *)(uintptr_t)(OrbitDirectionArrow__GetLocation_km(in_stack_00000008,&VStack_2c));
  uVar8 = *(undefined4 *)&pVVar3->X;
  uVar9 = *(undefined4 *)((int)&pVVar3->X + 4);
  uVar10 = *(undefined4 *)&pVVar3->Y;
  uVar11 = *(undefined4 *)((int)&pVVar3->Y + 4);
  puVar7 = auStack_44;
  uVar12 = SUB84(pVVar3->Z,0);
  uVar13 = (undefined1)((ulonglong)pVVar3->Z >> 0x20);
  this_00 = Manager__GetCameras(this);
  VVar2.Y = uVar8;
  *(uint32_t *)&VVar2.X = (uint32_t)(uintptr_t)(puVar7);
  VVar2.Y = uVar9;
  VVar2.Z = uVar10;
  VVar2.Z = uVar11;
  VVar2.W = uVar12;
  pdVar4 = (double *)CameraManager__GetScreenPosition(this_00,VVar2,(bool)uVar13);
  pdVar5 = (double *)&uStack_14;
  if (*(char *)(pdVar4 + 2) != '\0') {
    pdVar5 = pdVar4;
  }
  VVar6.Y = (int)*pdVar5;
  dVar1 = pdVar5[1];
  *(int *)param_1 = VVar6.Y;
  *(int *)((int)param_1 + 4) = (int)dVar1;
  VVar6.X = (int)param_1;
  return VVar6;
}





//==== 0079b660 MethodCallerConst__private__bool___thiscall_OrbitDirectionArrow__IsArrowVisible_void_const__ ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: static bool __cdecl util__DelegateFactory_L_struct_OrbitDirectionArrow_Cbool_G___MethodCallerConst_L__private_bool__thiscall_OrbitDirectionArrow__IsArrowVisible_void_const_G_(void const * const) */

bool __cdecl
util__DelegateFactory_struct_OrbitDirectionArrow_bool___MethodCallerConst__private__bool___thiscall_OrbitDirectionArrow__IsArrowVisible_void_const
          (void *param_1)

{
  Manager *this;
  Vec4_L_double_G_ VVar1;
  bool bVar2;
  char cVar3;
  Vec3_L_double_G_ *pVVar4;
  CameraManager *this_00;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 uVar12;
  undefined1 auStack_34 [24];
  Vec3_L_double_G_ VStack_1c;
  
  if ((*(int *)((int)param_1 + 0x168) != 0) &&
     (*(ReferenceController **)((int)param_1 + 0x16c) != (ReferenceController *)0x0)) {
    bVar2 = ReferenceController__IsDataStillValid(*(ReferenceController **)((int)param_1 + 0x16c));
    if (bVar2) {
      if (*(ReferenceController **)((int)param_1 + 0x16c) != (ReferenceController *)0x0) {
        bVar2 = ReferenceController__IsDataStillValid
                          (*(ReferenceController **)((int)param_1 + 0x16c));
        if (!bVar2) {
          *(undefined4 *)((int)param_1 + 0x168) = 0;
        }
      }
      cVar3 = (**(code **)(**(int **)((int)param_1 + 0x168) + 8))();
      if (cVar3 != '\0') {
        this = *(Manager **)((int)param_1 + 8);
        pVVar4 = (Vec3_L_double_G_ *)(uintptr_t)(OrbitDirectionArrow__GetLocation_km((OrbitDirectionArrow *)param_1,&VStack_1c));
        uVar7 = *(undefined4 *)&pVVar4->X;
        uVar8 = *(undefined4 *)((int)&pVVar4->X + 4);
        uVar9 = *(undefined4 *)&pVVar4->Y;
        uVar10 = *(undefined4 *)((int)&pVVar4->Y + 4);
        puVar6 = auStack_34;
        uVar11 = SUB84(pVVar4->Z,0);
        uVar12 = (undefined1)((ulonglong)pVVar4->Z >> 0x20);
        this_00 = Manager__GetCameras(this);
        VVar1.Y = uVar7;
        *(uint32_t *)&VVar1.X = (uint32_t)(uintptr_t)(puVar6);
        VVar1.Y = uVar8;
        VVar1.Z = uVar9;
        VVar1.Z = uVar10;
        VVar1.W = uVar11;
        iVar5 = CameraManager__GetScreenPosition(this_00,VVar1,(bool)uVar12);
        if (*(char *)(iVar5 + 0x10) != '\0') {
          return true;
        }
      }
    }
  }
  return false;
}





//==== 0079b9b0 OrbitUI ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: __thiscall OrbitUI__OrbitUI(struct UIAttributes,class util__WeakPtr_L_struct_OrbiterInterface_G_,class Faction *,bool) */

OrbitUI * __thiscall
OrbitUI__OrbitUI(OrbitUI *this,UIAttributes param_1,WeakPtr_L_OrbiterInterface_G_ param_2,
                Faction *param_3,bool param_4)

{
  undefined8 stack0xfffffea0;
  UIAttributes UVar1;
  undefined1 auVar2 [12];
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [44];
  undefined1 auVar10 [44];
  undefined1 in_stack_fffffea0 [324];
  undefined1 auVar11 [32];
  undefined4 in_stack_ffffffe4;
  
  param_1.Location.Getter.Callee = (void *)0x0;
  param_1.Location.Getter.CallbackFunction = (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0;
  param_1.Location.Value.X = 0;
  param_1.Location.Value.Y = 0;
  UIAttributes__UIAttributes((UIAttributes *)&stack0xfffffea0,&param_1);
  UVar1.TextColor.IsValidData = SUB41(in_stack_ffffffe4,0);
  (*(uint32_t *)((char *)&(UVar1.TextColor) + 41)) = SUB43(in_stack_ffffffe4,1);
*(uint32_t *)&auVar2 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffea0) + 4)));
*(uint32_t *)&auVar5 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffea0) + 32)));
*(uint32_t *)&auVar6 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffea0) + 44)));
*(uint32_t *)&auVar8 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffea0) + 180)));
*(uint32_t *)&auVar9 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffea0) + 196)));
*(uint32_t *)&auVar10 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffea0) + 240)));
  UVar1.Parent = (Manager *)(*(uint32_t*)&(in_stack_fffffea0));
  UVar1.Tag.Data = (char *)(*(uint32_t*)&(auVar2));
  UVar1.Tag.Capacity = (*(uint32_t*)((char*)&(auVar2)+4));
  UVar1.Tag.Length = (*(uint32_t*)((char*)&(auVar2)+8));
  uVar3 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffea0) + 16)),0);
  uVar4 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffea0) + 16)),8);
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
  uVar3 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffea0) + 56)),0);
  uVar4 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffea0) + 56)),8);
  UVar1.DesiredSize.Getter.Callee = (void *)(int)uVar3;
  UVar1.DesiredSize.Getter.CallbackFunction =
       (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar3 >> 0x20);
  UVar1.DesiredSize.Value.X = (int)uVar4;
  UVar1.DesiredSize.Value.Y = (int)((ulonglong)uVar4 >> 0x20);
  uVar3 = SUB248((*(uint32_t *)((char *)&(in_stack_fffffea0) + 72)),0);
*(uint32_t *)&auVar7 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffffea0) + 72)),8));
  UVar1.FillProportion.Getter.Callee = (void *)(int)uVar3;
  UVar1.FillProportion.Getter.CallbackFunction =
       (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar3 >> 0x20);
  UVar1.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar7));
  UVar1.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar7)+8));
  uVar3 = SUB128((*(uint32_t *)((char *)&(in_stack_fffffea0) + 96)),0);
  UVar1.HitTestShape.Getter.Callee = (void *)(int)uVar3;
  UVar1.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)(int)((ulonglong)uVar3 >> 0x20));
  UVar1.HitTestShape.Value = SUB124((*(uint32_t *)((char *)&(in_stack_fffffea0) + 96)),8);
  (*(uint32_t *)((char *)&(UVar1) + 108)) = (*(uint32_t *)((char *)&(in_stack_fffffea0) + 108));
  uVar3 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffea0) + 112)),0);
  UVar1.Depth.Getter.Callee = (void *)(int)uVar3;
  UVar1.Depth.Getter.CallbackFunction =
       (_func___cdecl_double_void_ptr *)(int)((ulonglong)uVar3 >> 0x20);
  UVar1.Depth.Value = (double)SUB168((*(uint32_t *)((char *)&(in_stack_fffffea0) + 112)),8);
  uVar3 = SUB128((*(uint32_t *)((char *)&(in_stack_fffffea0) + 128)),0);
  UVar1.Icon.Getter.Callee = (void *)(int)uVar3;
  UVar1.Icon.Getter.CallbackFunction = (void (* (*)(void *))(void))((_func___cdecl__func___cdecl_void_ptr_void_ptr *)(int)((ulonglong)uVar3 >> 0x20));
  UVar1.Icon.Value = (_func___cdecl_void *)SUB124((*(uint32_t *)((char *)&(in_stack_fffffea0) + 128)),8);
  uVar3 = SUB208((*(uint32_t *)((char *)&(in_stack_fffffea0) + 140)),0);
*(uint32_t *)&auVar2 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffffea0) + 140)),8));
  UVar1.Tooltip.Getter.Callee = (void *)(int)uVar3;
  UVar1.Tooltip.Getter.CallbackFunction =
       (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar3 >> 0x20);
  UVar1.Tooltip.Value.Data = (char *)(*(uint32_t*)&(auVar2));
  UVar1.Tooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar2)+4));
  UVar1.Tooltip.Value.Length = (*(uint32_t*)((char*)&(auVar2)+8));
  uVar3 = SUB208((*(uint32_t *)((char *)&(in_stack_fffffea0) + 160)),0);
*(uint32_t *)&auVar2 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffffea0) + 160)),8));
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
*(uint32_t *)&auVar11 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar9) + 0)),8));
  UVar1.ForegroundColor.Data.Getter.Callee = (void *)(int)uVar3;
  UVar1.ForegroundColor.Data.Getter.CallbackFunction =
       (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar3 >> 0x20);
  UVar1.ForegroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar11));
  UVar1.ForegroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar11)+4));
  UVar1.ForegroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar11)+8));
  UVar1.ForegroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar11) + 12));
  UVar1.ForegroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar11) + 16));
  UVar1.ForegroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar11) + 20));
  UVar1.ForegroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar11) + 24));
  UVar1.ForegroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar11) + 28));
  UVar1.ForegroundColor.IsValidData = (bool)auVar9[0x28];
  (*(uint32_t *)((char *)&(UVar1.ForegroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar9) + 41));
  uVar3 = SUB408((*(uint32_t *)((char *)&(auVar10) + 0)),0);
*(uint32_t *)&auVar11 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar10) + 0)),8));
  UVar1.BackgroundColor.Data.Getter.Callee = (void *)(int)uVar3;
  UVar1.BackgroundColor.Data.Getter.CallbackFunction =
       (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar3 >> 0x20);
  UVar1.BackgroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar11));
  UVar1.BackgroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar11)+4));
  UVar1.BackgroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar11)+8));
  UVar1.BackgroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar11) + 12));
  UVar1.BackgroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar11) + 16));
  UVar1.BackgroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar11) + 20));
  UVar1.BackgroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar11) + 24));
  UVar1.BackgroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar11) + 28));
  UVar1.BackgroundColor.IsValidData = (bool)auVar10[0x28];
  (*(uint32_t *)((char *)&(UVar1.BackgroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar10) + 41));
  uVar3 = SUB408((*(uint32_t *)((char *)&(in_stack_fffffea0) + 284)),0);
*(uint32_t *)&auVar11 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(in_stack_fffffea0) + 284)),8));
  UVar1.TextColor.Data.Getter.Callee = (void *)(int)uVar3;
  UVar1.TextColor.Data.Getter.CallbackFunction =
       (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar3 >> 0x20);
  UVar1.TextColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar11));
  UVar1.TextColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar11)+4));
  UVar1.TextColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar11)+8));
  UVar1.TextColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar11) + 12));
  UVar1.TextColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar11) + 16));
  UVar1.TextColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar11) + 20));
  UVar1.TextColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar11) + 24));
  UVar1.TextColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar11) + 28));
  UIWidget__UIWidget((UIWidget *)this,UVar1);
  this->_pad_0x0_0 = (int)&vftable_483;
  (this->Orbitee).Pointer = param_2.Pointer;
  (this->Orbitee).Controller = param_2.Controller;
  if (param_2.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_2.Controller);
  }
  this->Alliance = param_3;
  this->IsProjectedOrbit = param_4;
  (this->ArrowUI).Pointer = (OrbitDirectionArrow *)0x0;
  (this->ArrowUI).Controller = (ReferenceController *)0x0;
  UIAttributes___UIAttributes(&param_1);
  if (param_2.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_2.Controller);
  }
  return this;
}

//==== 0079ba70 scalar_deleting_destructor_0079ba70 ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void * __thiscall OrbitUI:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall OrbitUI___scalar_deleting_destructor(OrbitUI *this,uint param_1)

{
  ReferenceController *pRVar1;
  OrbitDirectionArrow *pOVar2;
  bool bVar3;
  ReferenceControllerRegistry *this_00;
  OrbitDirectionArrow *pOVar4;
  
  pRVar1 = (this->ArrowUI).Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    bVar3 = util__ReferenceController__ReleaseStrongReference(pRVar1);
    if (bVar3) {
      pOVar2 = (this->ArrowUI).Pointer;
      pOVar4 = (OrbitDirectionArrow *)0x0;
      if (pOVar2 != (OrbitDirectionArrow *)0x0) {
        (**(code **)(pOVar2->_pad_0x0_0 + 4))(1);
        pOVar4 = (this->ArrowUI).Pointer;
      }
      this_00 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(this_00,pOVar4);
      (this->ArrowUI).Pointer = (OrbitDirectionArrow *)0x0;
    }
  }
  pRVar1 = (this->Orbitee).Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  this->_pad_0x0_0 = (int)&vftable_49;
  this->_pad_0x158_86 = (int)&vftable_48;
  if ((SharedPtr_L_UIWidget_G_ *)this->_pad_0x15c_87 != (SharedPtr_L_UIWidget_G_ *)0x0) {
    util__SharedPtr_L_UIWidget_G____vector_deleting_destructor_
              ((SharedPtr_L_UIWidget_G_ *)this->_pad_0x15c_87,3);
  }
  this->_pad_0x15c_87 = 0;
  this->_pad_0x158_86 = (int)&vftable;
  if ((ReferenceController *)this->_pad_0x154_85 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)this->_pad_0x154_85);
  }
  UIAttributes___UIAttributes((UIAttributes *)&this->_pad_0x8_2);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x180);
  }
  return this;
}

//==== 0079bdd0 GetAngleSubdiv_radians ====


/* public: static double __cdecl OrbitUI__GetAngleSubdiv_radians(double) */

double __cdecl OrbitUI__GetAngleSubdiv_radians(double)

{
  double dVar1;
  double dStack_24;
  double dStack_1c;
  double dStack_14;
  double dStack_c;
  
  dStack_c = util__NormalizeAngle_double(param_1);
  dStack_14 = util__NormalizeAngle_double(0.0);
  dStack_14 = dStack_c - dStack_14;
  dStack_c = dStack_14;
  dStack_24 = util__Abs(&dStack_14);
  dStack_24 = 6.283185307179586 - dStack_24;
  dStack_1c = dStack_c;
  dStack_1c = util__Abs(&dStack_1c);
  dVar1 = dStack_1c;
  if (dStack_24 <= dStack_1c) {
    dVar1 = dStack_24;
  }
  dStack_24 = dVar1 / 3.141592653589793;
  dVar1 = util__Abs(&dStack_24);
  dVar1 = 1.0 - dVar1;
  dStack_24 = dVar1;
  libm_sse2_pow_precise(0.0,0.0);
  return (1.0 - dVar1) * 0.05235987755982988 + dVar1 * 1.5707963267948966e-07;
}





//==== 0079bf20 GetArrowOrbitPeriodAhead_Percent ====


/* public: static double __cdecl OrbitUI__GetArrowOrbitPeriodAhead_Percent(void) */

double __cdecl OrbitUI__GetArrowOrbitPeriodAhead_Percent(void)

{
  return 0.05;
}





//==== 0079bf30 GetArrowSizeBounds_km ====


/* public: static struct util__Range_L_double_G_ __cdecl OrbitUI__GetArrowSizeBounds_km(double) */

Range_L_double_G_ * __cdecl
OrbitUI__GetArrowSizeBounds_km(Range_L_double_G_ *__return_storage_ptr__,double param_1)

{
  double dVar1;
  double dVar2;
  undefined4 in_stack_00000008;
  
  dVar2 = (double)CONCAT44((*(uint32_t*)&(param_1)),in_stack_00000008) * 0.02;
  dVar1 = (double)CONCAT44((*(uint32_t*)&(param_1)),in_stack_00000008) * 0.1;
  __return_storage_ptr__->Lower = dVar2;
  __return_storage_ptr__->Upper = dVar1;
  if (dVar1 < dVar2) {
    __return_storage_ptr__->Lower = dVar1;
    __return_storage_ptr__->Upper = dVar2;
  }
  return __return_storage_ptr__;
}





//==== 0079cd10 GetOrbitLineScale ====


/* double __cdecl GetOrbitLineScale(double) */

double __cdecl GetOrbitLineScale(double)

{
  return param_1 * 0.002;
}





//==== 0079d300 IsArrowVisible ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* private: bool __thiscall OrbitDirectionArrow__IsArrowVisible(void)const  */

bool __thiscall OrbitDirectionArrow__IsArrowVisible(OrbitDirectionArrow *this)

{
  ReferenceController *pRVar1;
  Manager *this_00;
  Vec4_L_double_G_ VVar2;
  bool bVar3;
  char cVar4;
  Vec3_L_double_G_ *pVVar5;
  CameraManager *this_01;
  int iVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 uVar13;
  undefined1 auStack_34 [24];
  Vec3_L_double_G_ VStack_1c;
  
  if (((this->ParentOrbit).Pointer != (OrbitUI *)0x0) &&
     (pRVar1 = (this->ParentOrbit).Controller, pRVar1 != (ReferenceController *)0x0)) {
    bVar3 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (bVar3) {
      pRVar1 = (this->ParentOrbit).Controller;
      if (pRVar1 != (ReferenceController *)0x0) {
        bVar3 = util__ReferenceController__IsDataStillValid(pRVar1);
        if (!bVar3) {
          (this->ParentOrbit).Pointer = (OrbitUI *)0x0;
        }
      }
      cVar4 = (**(code **)(((this->ParentOrbit).Pointer)->_pad_0x0_0 + 8))();
      if (cVar4 != '\0') {
        this_00 = (Manager *)this->_pad_0x8_2;
        pVVar5 = (Vec3_L_double_G_ *)(uintptr_t)(GetLocation_km(this,&VStack_1c));
        uVar8 = *(undefined4 *)&pVVar5->X;
        uVar9 = *(undefined4 *)((int)&pVVar5->X + 4);
        uVar10 = *(undefined4 *)&pVVar5->Y;
        uVar11 = *(undefined4 *)((int)&pVVar5->Y + 4);
        puVar7 = auStack_34;
        uVar12 = SUB84(pVVar5->Z,0);
        uVar13 = (undefined1)((ulonglong)pVVar5->Z >> 0x20);
        this_01 = Manager__GetCameras(this_00);
        VVar2.Y = uVar8;
        *(uint32_t *)&VVar2.X = (uint32_t)(uintptr_t)(puVar7);
        VVar2.Y = uVar9;
        VVar2.Z = uVar10;
        VVar2.Z = uVar11;
        VVar2.W = uVar12;
        iVar6 = CameraManager__GetScreenPosition(this_01,VVar2,(bool)uVar13);
        if (*(char *)(iVar6 + 0x10) != '\0') {
          return true;
        }
      }
    }
  }
  return false;
}





//==== 0079d3b0 IsInStrategicGame ====

/* public: bool __thiscall OrbitUI__IsInStrategicGame(void)const  */

bool __thiscall OrbitUI__IsInStrategicGame(OrbitUI *this)

{
  undefined4 *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  puVar1 = (undefined4 *)this->_pad_0x8_2;
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_7e8f71e4__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_42a675d0__thread_safe_static_guard_0__);
    if ( cde_l2_42a675d0__thread_safe_static_guard_0__ == -1) {
       cde_l2_97a135c8_ID =
           util__GetHash("StrategicManager");
      _Init_thread_footer(& cde_l2_42a675d0__thread_safe_static_guard_0__);
    }
  }
  uVar2 =  cde_l2_97a135c8_ID;
  uVar3 = (**(code **)*puVar1)();
  return uVar3 == uVar2;
}

//==== 0079fcb0 Tick_0079fcb0 ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void __thiscall OrbitUI__Tick(double) */

void __thiscall OrbitUI__Tick(OrbitUI *this,double param_1)

{
  undefined8 stack0xfffffe94;
  undefined8 stack0xffffffdc;
  int iVar1;
  WeakPtr_L_UIWidget_G_ *pWVar2;
  ReferenceController *this_00;
  bool bVar3;
  ReferenceControllerRegistry *pRVar4;
  ReferenceController *pRVar5;
  OrbitUI *pOVar6;
  OrbitDirectionArrow *pOVar7;
  OptionsSection__Interface *pIVar8;
  WeakPtr_L_UIWidget_G_ *pWVar9;
  float fStack_30;
  OrbitDirectionArrow *pOVar10;
  OrbitDirectionArrow *local_c;
  OrbitDirectionArrow *local_8;
  
  if (((this->ArrowUI).Pointer != (OrbitDirectionArrow *)0x0) &&
     ((this->ArrowUI).Controller != (ReferenceController *)0x0)) {
    return;
  }
  local_c = (OrbitDirectionArrow *)(uintptr_t)(port_op_new(0x170));
  if (local_c == (OrbitDirectionArrow *)0x0) {
    pOVar7 = (OrbitDirectionArrow *)0x0;
  }
  else {
    local_8 = (OrbitDirectionArrow *)&stack0xffffffdc;
    pOVar6 = this;
    pRVar4 = util__ReferenceControllerRegistry__Get();
    pRVar5 = util__ReferenceControllerRegistry__GetController(pRVar4,pOVar6);
    if ((pRVar5 == (ReferenceController *)0x0) || (this == (OrbitUI *)0x0)) {
      pRVar5 = (ReferenceController *)0x0;
      pOVar6 = (OrbitUI *)0x0;
      bVar3 = false;
    }
    else {
      util__ReferenceController__AddWeakReference(pRVar5);
      bVar3 = true;
      pOVar6 = this;
    }
    pOVar7 = local_8;
    *(OrbitUI **)local_8 = pOVar6;
    *(ReferenceController **)((int)pOVar7 + 4) = pRVar5;
    if ((pRVar5 != (ReferenceController *)0x0) &&
       (util__ReferenceController__AddWeakReference(pRVar5), bVar3)) {
      util__ReferenceController__ReleaseWeakReference(pRVar5);
    }
    UIWidget__Attr((UIWidget *)this,(UIAttributes *)&stack0xfffffe94);
    pOVar7 = (OrbitDirectionArrow *)OrbitDirectionArrow__OrbitDirectionArrow(local_c);
    if (pOVar7 != (OrbitDirectionArrow *)0x0) goto LAB_0079fd93;
  }
  fStack_30 = 1.1203048e-38;
  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl",
                  0xd4,"NewPointer",(char *)0x0);
  DebugBreak();
LAB_0079fd93:
  pOVar10 = pOVar7;
  pRVar4 = util__ReferenceControllerRegistry__Get();
  pRVar5 = util__ReferenceControllerRegistry__Register(pRVar4,pOVar10);
  if (pRVar5 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(pRVar5);
  }
  local_8 = (this->ArrowUI).Pointer;
  local_c = (OrbitDirectionArrow *)(this->ArrowUI).Controller;
  (this->ArrowUI).Pointer = pOVar7;
  (this->ArrowUI).Controller = pRVar5;
  if (pRVar5 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(pRVar5);
  }
  if ((local_c != (OrbitDirectionArrow *)0x0) &&
     (bVar3 = util__ReferenceController__ReleaseStrongReference((ReferenceController *)local_c),
     bVar3)) {
    if (local_8 != (OrbitDirectionArrow *)0x0) {
      (**(code **)(local_8->_pad_0x0_0 + 4))();
    }
    pOVar10 = local_8;
    pRVar4 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar4,pOVar10);
  }
  if ((pRVar5 != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__ReleaseStrongReference(pRVar5), bVar3)) {
    if (pOVar7 != (OrbitDirectionArrow *)0x0) {
      (**(code **)(pOVar7->_pad_0x0_0 + 4))();
    }
    pRVar4 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar4,pOVar7);
  }
  pRVar5 = (this->ArrowUI).Controller;
  pOVar7 = (this->ArrowUI).Pointer;
  if (pRVar5 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(pRVar5);
  }
  pIVar8 = UIWidget__GetInterfacer((UIWidget *)this);
  if ((pRVar5 != (ReferenceController *)0x0) &&
     (util__ReferenceController__AddWeakReference(pRVar5), pRVar5 != (ReferenceController *)0x0)) {
    util__ReferenceController__AddWeakReference(pRVar5);
  }
  pWVar9 = (((struct Interface *)(uintptr_t)(pIVar8))->RootWidgets).Data;
  local_8 = (OrbitDirectionArrow *)(((struct Interface *)(uintptr_t)(pIVar8))->RootWidgets).Size;
  pWVar2 = pWVar9 + (int)local_8;
  for (; pWVar9 != pWVar2; pWVar9 = pWVar9 + 1) {
    if ((pRVar5 == pWVar9->Controller) && (pOVar7 == (OrbitDirectionArrow *)pWVar9->Pointer))
    goto LAB_0079fed1;
  }
  local_c = (OrbitDirectionArrow *)((int)local_8 + 1);
  util__Darray_class_util__WeakPtr_class_Body_____SetSize
            ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&((struct Interface *)(uintptr_t)(pIVar8))->RootWidgets,(int *)&local_c);
  bVar3 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize
                    ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&((struct Interface *)(uintptr_t)(pIVar8))->RootWidgets,(int)local_8);
  if (bVar3) {
    iVar1 = (((struct Interface *)(uintptr_t)(pIVar8))->RootWidgets).Size;
    pWVar2 = (((struct Interface *)(uintptr_t)(pIVar8))->RootWidgets).Data;
    this_00 = pWVar2[iVar1 + -1].Controller;
    pWVar2[iVar1 + -1].Pointer = (UIWidget *)pOVar7;
    pWVar2[iVar1 + -1].Controller = pRVar5;
    if (pRVar5 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar5);
    }
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(this_00);
    }
  }
LAB_0079fed1:
  if (pRVar5 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar5);
  }
  Interface__AddNewChildWidget(pIVar8,(((UIWidget *)cde_rsp_slot())),(((ReferenceController *)cde_rsp_slot())));
  if (pRVar5 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar5);
    util__ReferenceController__ReleaseWeakReference(pRVar5);
    util__ReferenceController__ReleaseWeakReference(pRVar5);
    if (pRVar5 != (ReferenceController *)0x0) {
      bVar3 = util__ReferenceController__ReleaseStrongReference(pRVar5);
      if (bVar3) {
        if (pOVar7 != (OrbitDirectionArrow *)0x0) {
          (**(code **)(pOVar7->_pad_0x0_0 + 4))();
        }
        pRVar4 = util__ReferenceControllerRegistry__Get();
        util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar4,pOVar7);
      }
      if (pRVar5 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(pRVar5);
      }
    }
  }
  return;
}

//==== 007a0990 GetIcon_007a0990 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual void (__cdecl* BalloonPopupNodePayload__GetIcon(void)const )(void) */

_func_void * BalloonPopupNodePayload__GetIcon(void)

{
  return Icons__Undo;
}





//==== 007a0cb0 Render3D_007a0cb0 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void __thiscall CrosshairsMarker__Render3D(void)const  */

void __thiscall CrosshairsMarker__Render3D(CrosshairsMarker *this)

{
  Manager *this_00;
  Vec4_L_double_G_ VVar1;
  Vec4_L_float_G_ VVar2;
  CameraManager *pCVar3;
  Vec3_L_double_G_ *pVVar4;
  GameManager *this_01;
  Atlas *pAVar5;
  code *pcVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  Vec3_L_double_G_ VStack_1c;
  
  VVar2.Z = 1.0;
  VVar2.X = 1.0;
  VVar2.Y = 1.0;
  glColorLuminance((*(Vec3_L_float_G_ *)&(VVar2)),0.5);
  this_00 = *(Manager **)&this->field_0x8;
  pVVar4 = &VStack_1c;
  pCVar3 = Manager__GetCameras(this_00);
  pVVar4 = CameraManager__GetCameraCenter(pCVar3,pVVar4);
  uVar16 = 0;
  uVar15 = 0;
  pCVar3 = Manager__GetCameras(this_00);
  uVar13 = 0;
  uVar14 = 0x40140000;
  uVar8 = *(undefined4 *)&pVVar4->X;
  uVar9 = *(undefined4 *)((int)&pVVar4->X + 4);
  uVar10 = *(undefined4 *)&pVVar4->Y;
  uVar11 = *(undefined4 *)((int)&pVVar4->Y + 4);
  pcVar7 = (long long int (*)())(Icons__ScreenCenter);
  pcVar6 = (long long int (*)())(Icons__ScreenCenter);
  dVar12 = pVVar4->Z;
  this_01 = Manager__GetParent(this_00);
  pAVar5 = GameManager__GetAtlasForIcon(this_01,(_func_void*)((_func_void*)(pcVar6)));
  VVar1.Y = uVar9;
  VVar1.X = uVar8;
  VVar1.Y = uVar10;
  VVar1.Z = uVar11;
  VVar1.Z = dVar12;
  Icons__RenderIconAsBillboard
            (pAVar5, (_func_void *)pcVar7,(*(Vec3_L_double_G_ *)&VVar1),(double)CONCAT44(uVar14,uVar13),pCVar3,(bool)uVar15,(bool)uVar16);
  return;
}





//==== 007a0d50 Render3DTransparent_007a0d50 ====


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual void  FrameOfReferenceMarker__Render3DTransparent(void)const  */

void FrameOfReferenceMarker__Render3DTransparent(void)

{
  undefined8 stack0xfffffffc;
  DepthStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  Graphics__DepthStack__DepthStack(&local_9,DepthMode__Disabled);

  Draw(true);
  DepthStack__dtor(&local_9);
  Graphics__DepthStack__DepthStack(&local_9,DepthMode__Read);
  Draw(false);
  DepthStack__dtor(&local_9);
  return;
}





//==== 007a10d0 MethodCaller__private__void___thiscall_HUDStrategic__SendPopupToBacklog_void____cdecl___void__class_util__Str_char__class_util__Str_char___ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static void __cdecl util__DelegateFactory_L_structHUDStrategic_Cvoid_Cvoid____cdecl_P__void__Cclassutil__Str_L_char_G__Cclassutil__Str_L_char_G__G___MethodCaller_L__private_void___thiscallHUDStrategic__SendPopupToBacklog_void___cdecl_P__void__Cclassutil__Str_L_char_G__Cclass_util__Str_L_char_G___G_(void *,void (__cdecl*)(void),class util__Str_L_char_G_,class util__Str_L_char_G_) */

void util__DelegateFactory_L_HUDStrategic_Cvoid_Cvoid____cdecl_P__void__Cutil__Str_L_char_G__Cutil__Str_L_char_G___G___MethodCaller_L__private__void___thiscall_HUDStrategic__SendPopupToBacklog_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G___G_
               (void *param_1,_func_void *param_2,Str_L_char_G_ param_3,Str_L_char_G_ param_4)

{
  undefined8 stack0xffffffdc;
  undefined8 stack0xffffffe8;
  Str_L_char_G_ SVar1;
  Str_L_char_G_ SVar2;
  char *in_stack_ffffffdc;
  int iVar3;
  Str_L_char_G_ *pSVar4;
  char *in_stack_ffffffe8;
  int in_stack_ffffffec;
  int in_stack_fffffff0;
  
  pSVar4 = &param_4;
  iVar3 = 0x7a10e9;
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const((Str_L_char_G_ *)&stack0xffffffe8,pSVar4);
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const((Str_L_char_G_ *)&stack0xffffffdc,&param_3);
  SVar1.Capacity = iVar3;
  SVar1.Data = in_stack_ffffffdc;
  SVar1.Length = (int)pSVar4;
  SVar2.Capacity = in_stack_ffffffec;
  SVar2.Data = in_stack_ffffffe8;
  SVar2.Length = in_stack_fffffff0;
  HUDStrategic__SendPopupToBacklog(param_2,SVar1,SVar2);
  if (param_3.Data != (char *)0x0) {
    port_op_delete(param_3.Data);
    param_3.Data = (char *)0x0;
  }
  if (param_4.Data != (char *)0x0) {
    port_op_delete(param_4.Data);
  }
  return;
}





//==== 007a11b0 MethodCaller__private__void___thiscall_HUDStrategic__SetTurnStepToOneDay_void__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static void __cdecl util__DelegateFactory_L_struct_HUDStrategic_Cvoid_G___MethodCaller_L__private_void__thiscall_HUDStrategic__SetTurnStepToOneDay_void__G_(void *) */

void util__DelegateFactory_struct_HUDStrategic_void___MethodCaller__private__void___thiscall_HUDStrategic__SetTurnStepToOneDay_void(void *param_1)

{
  util__DelegateFactory_struct_HUDStrategic_void___MethodCaller__private__void___thiscall_HUDStrategic__SetTurnStepToOneMonth_void(86400.0);
  return;
}





//==== 007a11d0 MethodCaller__private__void___thiscall_HUDStrategic__SetTurnStepToOneHour_void__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static void __cdecl util__DelegateFactory_L_struct_HUDStrategic_Cvoid_G___MethodCaller_L__private_void__thiscall_HUDStrategic__SetTurnStepToOneHour_void__G_(void *) */

void util__DelegateFactory_struct_HUDStrategic_void___MethodCaller__private__void___thiscall_HUDStrategic__SetTurnStepToOneHour_void(void *param_1)

{
  util__DelegateFactory_struct_HUDStrategic_void___MethodCaller__private__void___thiscall_HUDStrategic__SetTurnStepToOneMonth_void(3600.0);
  return;
}





//==== 007a11f0 MethodCaller__private__void___thiscall_HUDStrategic__SetTurnStepToOneMinute_void__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static void __cdecl util__DelegateFactory_L_struct_HUDStrategic_Cvoid_G___MethodCaller_L__private_void__thiscall_HUDStrategic__SetTurnStepToOneMinute_void__G_(void *) */

void util__DelegateFactory_L_HUDStrategic_Cvoid_G___MethodCaller_L__private__void___thiscall_HUDStrategic__SetTurnStepToOneMinute_void__G_
               (void *param_1)

{
  util__DelegateFactory_struct_HUDStrategic_void___MethodCaller__private__void___thiscall_HUDStrategic__SetTurnStepToOneMonth_void(60.0);
  return;
}





//==== 007a1210 MethodCaller__private__void___thiscall_HUDStrategic__SetTurnStepToOneMonth_void__ ====

/* r11-fakecov-fix */
/* disasm 7a1210: cdecl(wrap@8); obj=[wrap+8]; SetTurnStep(obj, 2592000.0) */
void util__DelegateFactory_L_HUDStrategic_Cvoid_G___MethodCaller_L__private__void___thiscall_HUDStrategic__SetTurnStepToOneMonth_void__G_(void *param_1)

{
  StrategicManager__SetTurnStep(*(void **)((char *)param_1 + 8),2592000.0);
  return;
}






//==== 007a1230 MethodCaller__private__void___thiscall_HUDStrategic__SetTurnStepToSixDays_void__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static void __cdecl util__DelegateFactory_L_struct_HUDStrategic_Cvoid_G___MethodCaller_L__private_void__thiscall_HUDStrategic__SetTurnStepToSixDays_void__G_(void *) */

void util__DelegateFactory_struct_HUDStrategic_void___MethodCaller__private__void___thiscall_HUDStrategic__SetTurnStepToSixDays_void(void *param_1)

{
  util__DelegateFactory_struct_HUDStrategic_void___MethodCaller__private__void___thiscall_HUDStrategic__SetTurnStepToOneMonth_void(518400.0);
  return;
}





//==== 007a1260 MethodCaller__private__void___thiscall_HUDStrategic__SetTurnStepToSixHours_void__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static void __cdecl util__DelegateFactory_L_struct_HUDStrategic_Cvoid_G___MethodCaller_L__private_void__thiscall_HUDStrategic__SetTurnStepToSixHours_void__G_(void *) */

void util__DelegateFactory_L_HUDStrategic_Cvoid_G___MethodCaller_L__private__void___thiscall_HUDStrategic__SetTurnStepToSixHours_void__G_
               (void *param_1)

{
  util__DelegateFactory_struct_HUDStrategic_void___MethodCaller__private__void___thiscall_HUDStrategic__SetTurnStepToOneMonth_void(21600.0);
  return;
}





//==== 007a1290 MethodCaller__private__void___thiscall_HUDStrategic__SetTurnStepToTenMinutes_void__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static void __cdecl util__DelegateFactory_L_struct_HUDStrategic_Cvoid_G___MethodCaller_L__private_void__thiscall_HUDStrategic__SetTurnStepToTenMinutes_void__G_(void *) */

void util__DelegateFactory_L_HUDStrategic_Cvoid_G___MethodCaller_L__private__void___thiscall_HUDStrategic__SetTurnStepToTenMinutes_void__G_
               (void *param_1)

{
  util__DelegateFactory_struct_HUDStrategic_void___MethodCaller__private__void___thiscall_HUDStrategic__SetTurnStepToOneMonth_void(600.0);
  return;
}





//==== 007a1340 MethodCaller__private__void___thiscall_HUDStrategic__ToggleProjectOrbitsOnToSelectedPlane_void__ ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_L_struct_HUDStrategic_Cvoid_G___MethodCaller_L__private_void__thiscall_HUDStrategic__ToggleProjectOrbitsOnToSelectedPlane_void__G_(void *) */

void __cdecl
util__DelegateFactory_struct_HUDStrategic_void___MethodCaller__private__void___thiscall_HUDStrategic__ToggleProjectOrbitsOnToSelectedPlane_void
          (void *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  PreferencesBase *pPVar3;
  SimpleSerializationManager *this;
  int iVar4;
  Str_L_char_G_ *pSVar5;
  DataParser *this_00;
  Str_L_char_G_ *pSVar6;
  Darray_L_util__Reflectable_P_G_ *pDVar7;
  PreferencesBase *pPVar8;
  Darray_L_util__Reflectable_P_G_ *pDVar9;
  Str_L_char_G_ SStack_44;
  Str_L_char_G_ SStack_38;
  undefined **ppuStack_2c;
  void *pvStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined **ppuStack_18;
  undefined4 *puStack_14;
  int iStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = 0x7a134e;
  pPVar3 = Manager__GetOptions(*(Manager **)((int)param_1 + 8));
  *(bool *)((int)&pPVar3[2]._pad_0xc_3 + 2) = *(char *)((int)&pPVar3[2]._pad_0xc_3 + 2) == '\0';
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pPVar8 = pPVar3;
  this = (SimpleSerializationManager *)GameManager__GetDataManager(pPVar3->Parent);
  SimpleSerializationManager__CorrectImport(this,(Reflectable *)pPVar8);
  ppuStack_18 = (undefined **)(&vftable_6);
  puStack_14 = (undefined4 *)0x0;
  iStack_10 = 0;
  iStack_c = 1;
  puStack_14 = (undefined4 *)(uintptr_t)(port_op_new(4));
  iVar1 = iStack_10;
  if (puStack_14 == (undefined4 *)0x0) {
    puStack_14 = (undefined4 *)0x0;
  }
  else {
    *puStack_14 = 0;
  }
  iVar4 = 0;
  if (0 < iStack_c) {
    do {
      puStack_14[iVar4] = 0;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iStack_c);
  }
  iStack_1c = iStack_10 + 1;
  Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)&ppuStack_18,&iStack_1c);
  bVar2 = Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)&ppuStack_18,iVar1);
  if (bVar2) {
    puStack_14[iStack_10 + -1] = (undefined4)(uintptr_t)(pPVar3);
  }
  ppuStack_2c = (undefined **)(&vftable_6);
  pvStack_28 = (void *)0x0;
  uStack_24 = 0;
  uStack_20 = 0;
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_38,"Preferences.txt");
  pDVar9 = (Darray_L_util__Reflectable_P_G_ *)&ppuStack_2c;
  pDVar7 = (Darray_L_util__Reflectable_P_G_ *)&ppuStack_18;
  pSVar6 = &SStack_38;
  pSVar5 = GetSaveDataPath(&SStack_44);
  this_00 = GameManager__GetDataManager(pPVar3->Parent);
  SerializationManagerInterface__SaveDataToFile
            ((SerializationManagerInterface *)this_00,pSVar5,pSVar6,pDVar7,pDVar9);
  if (SStack_44.Data != (char *)0x0) {
    port_op_delete(SStack_44.Data);
    SStack_44.Data = (char *)0x0;
  }
  if (SStack_38.Data != (char *)0x0) {
    port_op_delete(SStack_38.Data);
    SStack_38.Data = (char *)0x0;
  }
  ppuStack_2c = (undefined **)(&vftable_6);
  if (pvStack_28 != (void *)0x0) {
    port_op_delete(pvStack_28);
  }
  ppuStack_18 = (undefined **)(&vftable_6);
  if (puStack_14 != (undefined4 *)0x0) {
    port_op_delete(puStack_14);
  }
  return;
}

//==== 007a1360 MethodCaller__private__void___thiscall_HUDStrategic__ToggleProjectTrajectoryOnToReferenceFrame_void__ ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_L_struct_HUDStrategic_Cvoid_G___MethodCaller_L__private_void__thiscall_HUDStrategic__ToggleProjectTrajectoryOnToReferenceFrame_void__G_(void *) */

void __cdecl
util__DelegateFactory_struct_HUDStrategic_void___MethodCaller__private__void___thiscall_HUDStrategic__ToggleProjectTrajectoryOnToReferenceFrame_void
          (void *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  PreferencesBase *pPVar3;
  SimpleSerializationManager *this;
  int iVar4;
  Str_L_char_G_ *pSVar5;
  DataParser *this_00;
  Str_L_char_G_ *pSVar6;
  Darray_L_util__Reflectable_P_G_ *pDVar7;
  PreferencesBase *pPVar8;
  Darray_L_util__Reflectable_P_G_ *pDVar9;
  Str_L_char_G_ SStack_44;
  Str_L_char_G_ SStack_38;
  undefined **ppuStack_2c;
  void *pvStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined **ppuStack_18;
  undefined4 *puStack_14;
  int iStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = 0x7a136e;
  pPVar3 = Manager__GetOptions(*(Manager **)((int)param_1 + 8));
  *(bool *)((int)&pPVar3[2]._pad_0xc_3 + 3) = *(char *)((int)&pPVar3[2]._pad_0xc_3 + 3) == '\0';
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pPVar8 = pPVar3;
  this = (SimpleSerializationManager *)GameManager__GetDataManager(pPVar3->Parent);
  SimpleSerializationManager__CorrectImport(this,(Reflectable *)pPVar8);
  ppuStack_18 = (undefined **)(&vftable_6);
  puStack_14 = (undefined4 *)0x0;
  iStack_10 = 0;
  iStack_c = 1;
  puStack_14 = (undefined4 *)(uintptr_t)(port_op_new(4));
  iVar1 = iStack_10;
  if (puStack_14 == (undefined4 *)0x0) {
    puStack_14 = (undefined4 *)0x0;
  }
  else {
    *puStack_14 = 0;
  }
  iVar4 = 0;
  if (0 < iStack_c) {
    do {
      puStack_14[iVar4] = 0;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iStack_c);
  }
  iStack_1c = iStack_10 + 1;
  Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)&ppuStack_18,&iStack_1c);
  bVar2 = Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)&ppuStack_18,iVar1);
  if (bVar2) {
    puStack_14[iStack_10 + -1] = (undefined4)(uintptr_t)(pPVar3);
  }
  ppuStack_2c = (undefined **)(&vftable_6);
  pvStack_28 = (void *)0x0;
  uStack_24 = 0;
  uStack_20 = 0;
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_38,"Preferences.txt");
  pDVar9 = (Darray_L_util__Reflectable_P_G_ *)&ppuStack_2c;
  pDVar7 = (Darray_L_util__Reflectable_P_G_ *)&ppuStack_18;
  pSVar6 = &SStack_38;
  pSVar5 = GetSaveDataPath(&SStack_44);
  this_00 = GameManager__GetDataManager(pPVar3->Parent);
  SerializationManagerInterface__SaveDataToFile
            ((SerializationManagerInterface *)this_00,pSVar5,pSVar6,pDVar7,pDVar9);
  if (SStack_44.Data != (char *)0x0) {
    port_op_delete(SStack_44.Data);
    SStack_44.Data = (char *)0x0;
  }
  if (SStack_38.Data != (char *)0x0) {
    port_op_delete(SStack_38.Data);
    SStack_38.Data = (char *)0x0;
  }
  ppuStack_2c = (undefined **)(&vftable_6);
  if (pvStack_28 != (void *)0x0) {
    port_op_delete(pvStack_28);
  }
  ppuStack_18 = (undefined **)(&vftable_6);
  if (puStack_14 != (undefined4 *)0x0) {
    port_op_delete(puStack_14);
  }
  return;
}

//==== 007a1380 MethodCaller__public__void___thiscall_Preferences__ToggleShowLagrangePoints_void__ ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_L_classPreferences_Cvoid_G___MethodCaller_L__public__void__thiscallPreferences__ToggleShowLagrangePoints_void__G_(void *) */

void __cdecl
util__DelegateFactory_class_Preferences_void___MethodCaller__public__void___thiscall_Preferences__ToggleShowLagrangePoints_void(void *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  SimpleSerializationManager *this;
  int iVar3;
  Str_L_char_G_ *pSVar4;
  DataParser *this_00;
  Str_L_char_G_ *pSVar5;
  Darray_L_class_util__Reflectable_P_G_ *pDVar6;
  Reflectable *pRVar7;
  Darray_L_class_util__Reflectable_P_G_ *pDVar8;
  Str_L_char_G_ SStack_44;
  Str_L_char_G_ SStack_38;
  undefined **ppuStack_2c;
  void *pvStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined **ppuStack_18;
  undefined4 *puStack_14;
  int iStack_10;
  int iStack_c;
  uint uStack_8;
  
  *(bool *)((int)param_1 + 0x38) = *(char *)((int)param_1 + 0x38) == '\0';
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pRVar7 = (Reflectable *)param_1;
  this = (SimpleSerializationManager *)
         GameManager__GetDataManager(*(GameManager **)((int)param_1 + 0x10));
  SimpleSerializationManager__CorrectImport(this,pRVar7);
  ppuStack_18 = (undefined **)(&vftable_6);
  puStack_14 = (undefined4 *)0x0;
  iStack_10 = 0;
  iStack_c = 1;
  puStack_14 = (undefined4 *)port_op_new(4);
  iVar1 = iStack_10;
  if (puStack_14 == (undefined4 *)0x0) {
    puStack_14 = (undefined4 *)0x0;
  }
  else {
    *puStack_14 = 0;
  }
  iVar3 = 0;
  if (0 < iStack_c) {
    do {
      puStack_14[iVar3] = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iStack_c);
  }
  iStack_1c = iStack_10 + 1;
  Darray_L_class_util__Reflectable_P_G___SetSize
            ((Darray_L_class_util__Reflectable_P_G_ *)&ppuStack_18,&iStack_1c);
  bVar2 = Darray_L_enum_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_enum_GraphicsResource__Type_G_ *)&ppuStack_18,iVar1);
  if (bVar2) {
    puStack_14[iStack_10 + -1] = (undefined4)(uintptr_t)(param_1);
  }
  ppuStack_2c = (undefined **)(&vftable_6);
  pvStack_28 = (void *)0x0;
  uStack_24 = 0;
  uStack_20 = 0;
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_38,"Preferences.txt");
  pDVar8 = (Darray_L_class_util__Reflectable_P_G_ *)&ppuStack_2c;
  pDVar6 = (Darray_L_class_util__Reflectable_P_G_ *)&ppuStack_18;
  pSVar5 = &SStack_38;
  pSVar4 = GetSaveDataPath(&SStack_44);
  this_00 = GameManager__GetDataManager(*(GameManager **)((int)param_1 + 0x10));
  SerializationManagerInterface__SaveDataToFile
            ((SerializationManagerInterface *)this_00,pSVar4,pSVar5,pDVar6,pDVar8);
  if (SStack_44.Data != (char *)0x0) {
    port_op_delete(SStack_44.Data);
    SStack_44.Data = (char *)0x0;
  }
  if (SStack_38.Data != (char *)0x0) {
    port_op_delete(SStack_38.Data);
    SStack_38.Data = (char *)0x0;
  }
  ppuStack_2c = (undefined **)(&vftable_6);
  if (pvStack_28 != (void *)0x0) {
    port_op_delete(pvStack_28);
  }
  ppuStack_18 = (undefined **)(&vftable_6);
  if (puStack_14 != (undefined4 *)0x0) {
    port_op_delete(puStack_14);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 007a1400 MethodCallerConst__private__struct_util__Color___thiscall_HUDTactical__GetIconButtonColor_void_const__ ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: static struct util__Color __cdecl util__DelegateFactory_L_structHUDTactical_Cstruct_util__Color_G___MethodCallerConst_L__private_structutil__Color__thiscall_HUDTactical__GetIconButtonColor_void_const_G_(void const * const) */

Color * __cdecl
util__DelegateFactory_struct_HUDTactical_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDTactical__GetIconButtonColor_void_const
          (Color *__return_storage_ptr__,void *param_1)

{
  CoreUITheme *pCVar1;
  Str_L_char_G_ local_30;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  pCVar1 = (CoreUITheme *)(uintptr_t)(UIWidget__GetTheme());
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&local_30,(Str_L_char_G_ *)&(pCVar1->IconButtonBackgroundColor)._pad_0x4_1);
  *(uint32_t *)&local_24 = (pCVar1->IconButtonBackgroundColor).Hue_degrees;
  local_20 = (pCVar1->IconButtonBackgroundColor).Saturation;
  *(uint32_t *)&local_1c = (pCVar1->IconButtonBackgroundColor).Value;
  local_18 = (pCVar1->IconButtonBackgroundColor).Alpha;
  __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_5;
  local_14 = local_18;
  local_10 = local_1c;
  local_c = local_20;
  local_8 = local_24;
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const((Str_L_char_G_ *)&__return_storage_ptr__->_pad_0x4_1,&local_30);
  __return_storage_ptr__->Hue_degrees = local_8;
  __return_storage_ptr__->Saturation = local_c;
  __return_storage_ptr__->Value = local_10;
  __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_59;
  __return_storage_ptr__->Alpha = local_14;
  if (local_30.Data != (char *)0x0) {
    port_op_delete(local_30.Data);
  }
  return __return_storage_ptr__;
}

//==== 007a14e0 MethodCallerConst__public__struct_util__Vec3_double____thiscall_StrategicManager__GetReferenceShiftedPosition_km_struct_util__Vec3_double__double_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static struct util__Vec3_L_double_G_ __cdecl util__DelegateFactory_L_class_StrategicManager_Cstructutil__Vec3_L_double_G__Cstruct_util__Vec3_L_double_G__Cdouble_G___MethodCallerConst_L__public_structutil__Vec3_L_double_G___thiscall_StrategicManager__GetReferenceShiftedPosition_km_structutil__Vec3_L_double_G__Cdouble_const_G_(void
   const * const,struct util__Vec3_L_double_G_,double) */

Vec3_L_double_G_ *
util__DelegateFactory_class_StrategicManager_struct_util__Vec3_double__struct_util__Vec3_double__double___MethodCallerConst__public__struct_util__Vec3_double____thiscall_StrategicManager__GetReferenceShiftedPosition_km_struct_util__Vec3_double__double_const
          (Vec3_L_double_G_ *__return_storage_ptr__,void *param_1,Vec3_L_double_G_ param_2,double param_3)

{
  undefined8 stack0xffffffe4;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Vec4_L_double_G_ VVar4;
  Vec3_L_double_G_ *pVVar5;
  undefined4 in_stack_ffffffe4;
  
  VVar4.W = SUB84(param_3,0);
  (*(uint32_t *)((char *)&(VVar4) + 0)) = (*(uint32_t *)((char *)&(param_2) + 4));
  pVVar5 = (Vec3_L_double_G_ *)(uintptr_t)(StrategicManager__GetReferenceShiftedPosition_km
                     ((Vec3_L_double_G_ *)&stack0xffffffe4,VVar4,
                      (double)CONCAT44(in_stack_ffffffe4,(int)((ulonglong)param_3 >> 0x20))));
  uVar1 = *(undefined4 *)((int)&pVVar5->X + 4);
  uVar2 = *(undefined4 *)&pVVar5->Y;
  uVar3 = *(undefined4 *)((int)&pVVar5->Y + 4);
  *(undefined4 *)&__return_storage_ptr__->X = *(undefined4 *)&pVVar5->X;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Y = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = uVar3;
  __return_storage_ptr__->Z = pVVar5->Z;
  return __return_storage_ptr__;
}





//==== 007a1530 MethodCallerConst__private__class_util__Str_char____thiscall_HUDStrategic__GetRunTurnLabel_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_structHUDStrategic_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__private_classutil__Str_L_char_G___thiscall_HUDStrategic__GetRunTurnLabel_void_const_G_(void const * const) */

Str_L_char_G_ *
util__DelegateFactory_struct_HUDStrategic_class_util__Str_char_____MethodCallerConst__private__class_util__Str_char____thiscall_HUDStrategic__GetRunTurnLabel_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ local_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(HUDStrategic__GetRunTurnLabel(&local_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 007a1570 MethodCallerConst__private__class_util__Str_char____thiscall_HUDStrategic__GetRunTurnVerboseTooltip_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_structHUDStrategic_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__private_classutil__Str_L_char_G___thiscall_HUDStrategic__GetRunTurnVerboseTooltip_void_const_G_(void const * const) */

Str_L_char_G_ *
util__DelegateFactory_struct_HUDStrategic_class_util__Str_char_____MethodCallerConst__private__class_util__Str_char____thiscall_HUDStrategic__GetRunTurnVerboseTooltip_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ local_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(HUDStrategic__GetRunTurnVerboseTooltip(&local_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 007a1640 MethodCallerConst__private__struct_util__Range_double____thiscall_HUDStrategic__GetTimeLeftBarPercentages_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static struct util__Range_L_double_G_ __cdecl util__DelegateFactory_L_struct_HUDStrategic_Cstructutil__Range_L_double_G__G___MethodCallerConst_L__private_structutil__Range_L_double_G____thiscallHUDStrategic__GetTimeLeftBarPercentages_void_const_G_(void const * const) */

Range_L_double_G_ *
util__DelegateFactory_struct_HUDStrategic_struct_util__Range_double_____MethodCallerConst__private__struct_util__Range_double____thiscall_HUDStrategic__GetTimeLeftBarPercentages_void_const
          (Range_L_double_G_ *__return_storage_ptr__,void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Range_L_double_G_ *pRVar4;
  Range_L_double_G_ local_14;
  
  pRVar4 = (Range_L_double_G_ *)(uintptr_t)(HUDStrategic__GetTimeLeftBarPercentages(&local_14));
  uVar1 = *(undefined4 *)((int)&pRVar4->Lower + 4);
  uVar2 = *(undefined4 *)&pRVar4->Upper;
  uVar3 = *(undefined4 *)((int)&pRVar4->Upper + 4);
  *(undefined4 *)&__return_storage_ptr__->Lower = *(undefined4 *)&pRVar4->Lower;
  *(undefined4 *)((int)&__return_storage_ptr__->Lower + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Upper = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Upper + 4) = uVar3;
  return __return_storage_ptr__;
}





//==== 007a1660 MethodCallerConst__private__struct_util__Color___thiscall_HUDStrategic__GetTimeLeftColor_void_const__ ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static struct util__Color __cdecl util__DelegateFactory_L_structHUDStrategic_Cstruct_util__Color_G___MethodCallerConst_L__private_structutil__Color__thiscall_HUDStrategic__GetTimeLeftColor_void_const_G_(void const * const) */

Color * util__DelegateFactory_L_HUDStrategic_Cutil__Color_G___MethodCallerConst_L__private__struct_util__Color___thiscall_HUDStrategic__GetTimeLeftColor_void_const__G_
                  (Color *__return_storage_ptr__,void *param_1)

{
  Color *pCVar1;
  Color local_24;
  
  pCVar1 = (Color *)(uintptr_t)(HUDStrategic__GetTimeLeftColor(&local_24));
  __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_5;
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const
            ((Str_L_char_G_ *)&__return_storage_ptr__->_pad_0x4_1,(Str_L_char_G_ *)&pCVar1->_pad_0x4_1);
  __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_5;
  __return_storage_ptr__->Hue_degrees = pCVar1->Hue_degrees;
  __return_storage_ptr__->Saturation = pCVar1->Saturation;
  __return_storage_ptr__->Value = pCVar1->Value;
  __return_storage_ptr__->Alpha = pCVar1->Alpha;
  local_24._pad_0x0_0 = (int)&vftable_5;
  if ((void *)local_24._pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)local_24._pad_0x4_1);
  }
  return __return_storage_ptr__;
}

//==== 007a16d0 MethodCallerConst__private__class_util__Str_char____thiscall_HUDStrategic__GetTimeLeftString_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_structHUDStrategic_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__private_classutil__Str_L_char_G___thiscall_HUDStrategic__GetTimeLeftString_void_const_G_(void const * const) */

Str_L_char_G_ *
util__DelegateFactory_struct_HUDStrategic_class_util__Str_char_____MethodCallerConst__private__class_util__Str_char____thiscall_HUDStrategic__GetTimeLeftString_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ local_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(HUDStrategic__GetTimeLeftString(&local_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 007a1710 MethodCallerConst__private__class_util__Str_char____thiscall_HUDStrategic__GetTimeLeftTooltip_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_structHUDStrategic_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__private_classutil__Str_L_char_G___thiscall_HUDStrategic__GetTimeLeftTooltip_void_const_G_(void const * const) */

Str_L_char_G_ *
util__DelegateFactory_struct_HUDStrategic_class_util__Str_char_____MethodCallerConst__private__class_util__Str_char____thiscall_HUDStrategic__GetTimeLeftTooltip_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ local_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(HUDStrategic__GetTimeLeftTooltip(&local_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 007a1750 MethodCallerConst__private__struct_util__AABB_struct_util__Vec2_int______thiscall_HUDStrategic__GetWorkableScreenArea_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static struct util__AABB_L_structutil__Vec2_L_int_G__G_ __cdecl util__DelegateFactory_L_struct_HUDStrategic_Cstructutil__AABB_L_structutil__Vec2_L_int_G__G__G___MethodCallerConst_L__private_struct_util__AABB_L_structutil__Vec2_L_int_G__G___thiscallHUDStrategic__GetWorkableScreenArea_void_const__G_(void const * const) */

AABB_L_util__Vec2_L_int_G___G_ *
util__DelegateFactory_struct_HUDStrategic_struct_util__AABB_struct_util__Vec2_int_______MethodCallerConst__private__struct_util__AABB_struct_util__Vec2_int______thiscall_HUDStrategic__GetWorkableScreenArea_void_const
          (AABB_L_util__Vec2_L_int_G___G_ *__return_storage_ptr__,void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  AABB_L_util__Vec2_L_int_G___G_ *pAVar4;
  AABB_L_util__Vec2_L_int_G___G_ local_14;
  
  pAVar4 = (AABB_L_util__Vec2_L_int_G___G_ *)(uintptr_t)(HUDStrategic__GetWorkableScreenArea(&local_14));
  iVar1 = (pAVar4->Lower).Y;
  iVar2 = (pAVar4->Upper).X;
  iVar3 = (pAVar4->Upper).Y;
  (__return_storage_ptr__->Lower).X = (pAVar4->Lower).X;
  (__return_storage_ptr__->Lower).Y = iVar1;
  (__return_storage_ptr__->Upper).X = iVar2;
  (__return_storage_ptr__->Upper).Y = iVar3;
  return __return_storage_ptr__;
}





//==== 007a1770 MethodCallerConst__public__bool___thiscall_StrategicManager__IsNotInScreenshotMode_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static bool __cdecl util__DelegateFactory_L_class_StrategicManager_Cbool_G___MethodCallerConst_L__public_bool__thiscall_StrategicManager__IsNotInScreenshotMode_void_const_G_(void const * const) */

bool util__DelegateFactory_L_StrategicManager_Cbool_G___MethodCallerConst_L__public__bool___thiscall_StrategicManager__IsNotInScreenshotMode_void_const__G_
               (void *param_1)

{
  bool bVar1;
  
  if (*(char *)((int)param_1 + 0xa68) == '\0') {
    bVar1 = StrategicManager__IsInCutscene();
    if (!bVar1) {
      return true;
    }
  }
  return false;
}





//==== 007a1780 MethodCallerConst__private__bool___thiscall_HUDStrategic__IsOneMinuteTurnStepVisible_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static bool __cdecl util__DelegateFactory_L_struct_HUDStrategic_Cbool_G___MethodCallerConst_L__private_bool__thiscall_HUDStrategic__IsOneMinuteTurnStepVisible_void_const_G_(void const * const) */

bool util__DelegateFactory_L_HUDStrategic_Cbool_G___MethodCallerConst_L__private__bool___thiscall_HUDStrategic__IsOneMinuteTurnStepVisible_void_const__G_
               (void *param_1)

{
  Level *pLVar1;
  
  pLVar1 = (Level *)(uintptr_t)(StrategicManager__GetCurrentLevel());
  return (double)((pLVar1->Difficulty).Capacity * 86400.0 < 31557600.0);
}





//==== 007a17b0 MethodCallerConst__private__bool___thiscall_HUDStrategic__IsOneMonthTurnStepVisible_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static bool __cdecl util__DelegateFactory_L_struct_HUDStrategic_Cbool_G___MethodCallerConst_L__private_bool__thiscall_HUDStrategic__IsOneMonthTurnStepVisible_void_const_G_(void const * const) */

bool util__DelegateFactory_L_HUDStrategic_Cbool_G___MethodCallerConst_L__private__bool___thiscall_HUDStrategic__IsOneMonthTurnStepVisible_void_const__G_
               (void *param_1)

{
  Level *pLVar1;
  
  pLVar1 = (Level *)(uintptr_t)(StrategicManager__GetCurrentLevel());
  return 31557600.0 <= (double)((pLVar1->Difficulty).Capacity * 86400.0);
}





//==== 007a17e0 MethodCallerConst__private__bool___thiscall_HUDStrategic__IsProjectOrbitsOnToSelectedPlane_void_const__ ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: static bool __cdecl util__DelegateFactory_L_struct_HUDStrategic_Cbool_G___MethodCallerConst_L__private_bool__thiscall_HUDStrategic__IsProjectOrbitsOnToSelectedPlane_void_const_G_(void const * const) */

bool __cdecl
util__DelegateFactory_struct_HUDStrategic_bool___MethodCallerConst__private__bool___thiscall_HUDStrategic__IsProjectOrbitsOnToSelectedPlane_void_const
          (void *param_1)

{
  PreferencesBase *pPVar1;
  
  pPVar1 = Manager__GetOptions(*(Manager **)((int)param_1 + 8));
  return (bool)*(undefined1 *)((int)&pPVar1[2]._pad_0xc_3 + 2);
}

//==== 007a1800 MethodCallerConst__private__bool___thiscall_HUDStrategic__IsProjectTrajectoryOnToReferenceFrame_void_const__ ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: static bool __cdecl util__DelegateFactory_L_struct_HUDStrategic_Cbool_G___MethodCallerConst_L__private_bool__thiscall_HUDStrategic__IsProjectTrajectoryOnToReferenceFrame_void_const_G_(void const * const) */

bool __cdecl
util__DelegateFactory_struct_HUDStrategic_bool___MethodCallerConst__private__bool___thiscall_HUDStrategic__IsProjectTrajectoryOnToReferenceFrame_void_const
          (void *param_1)

{
  PreferencesBase *pPVar1;
  
  pPVar1 = Manager__GetOptions(*(Manager **)((int)param_1 + 8));
  return (bool)*(undefined1 *)((int)&pPVar1[2]._pad_0xc_3 + 3);
}

//==== 007a1820 MethodCallerConst__public__bool___thiscall_Preferences__IsShowingLagrangePoints_void_const__ ====


/* public: static bool __cdecl util__DelegateFactory_L_class_Preferences_Cbool_G___MethodCallerConst_L__public_bool__thiscall_Preferences__IsShowingLagrangePoints_void_const_G_(void const * const) */

bool __cdecl
util__DelegateFactory_class_Preferences_bool___MethodCallerConst__public__bool___thiscall_Preferences__IsShowingLagrangePoints_void_const
          (void *param_1)

{
  return (bool)*(undefined1 *)((int)param_1 + 0x38);
}





//==== 007a1830 MethodCallerConst__private__bool___thiscall_HUDStrategic__IsTimeLeftVisible_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static bool __cdecl util__DelegateFactory_L_struct_HUDStrategic_Cbool_G___MethodCallerConst_L__private_bool__thiscall_HUDStrategic__IsTimeLeftVisible_void_const_G_(void const * const) */

bool util__DelegateFactory_L_HUDStrategic_Cbool_G___MethodCallerConst_L__private__bool___thiscall_HUDStrategic__IsTimeLeftVisible_void_const__G_
               (void *param_1)

{
  Maybe_L_double_G_ *pMVar1;
  Maybe_L_double_G_ local_14;
  
  pMVar1 = (Maybe_L_double_G_ *)(uintptr_t)(StrategicManager__GetDeadlineTimeLeft_s(&local_14));
  return pMVar1->IsValidData;
}





//==== 007a1850 MethodCallerConst__private__bool___thiscall_HUDStrategic__IsTurnOneDay_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static bool __cdecl util__DelegateFactory_L_struct_HUDStrategic_Cbool_G___MethodCallerConst_L__private_bool__thiscall_HUDStrategic__IsTurnOneDay_void_const_G_(void const * const) */

bool util__DelegateFactory_L_HUDStrategic_Cbool_G___MethodCallerConst_L__private__bool___thiscall_HUDStrategic__IsTurnOneDay_void_const__G_
               (void *param_1)

{
  double dVar1;
  
  dVar1 = StrategicManager__GetTurnTimeStep_s();
  if (dVar1 == 86400.0) {
    return true;
  }
  return false;
}





//==== 007a1890 MethodCallerConst__private__bool___thiscall_HUDStrategic__IsTurnOneHour_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static bool __cdecl util__DelegateFactory_L_struct_HUDStrategic_Cbool_G___MethodCallerConst_L__private_bool__thiscall_HUDStrategic__IsTurnOneHour_void_const_G_(void const * const) */

bool util__DelegateFactory_L_HUDStrategic_Cbool_G___MethodCallerConst_L__private__bool___thiscall_HUDStrategic__IsTurnOneHour_void_const__G_
               (void *param_1)

{
  double dVar1;
  
  dVar1 = StrategicManager__GetTurnTimeStep_s();
  if (dVar1 == 3600.0) {
    return true;
  }
  return false;
}





//==== 007a18d0 MethodCallerConst__private__bool___thiscall_HUDStrategic__IsTurnOneMinute_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static bool __cdecl util__DelegateFactory_L_struct_HUDStrategic_Cbool_G___MethodCallerConst_L__private_bool__thiscall_HUDStrategic__IsTurnOneMinute_void_const_G_(void const * const) */

bool util__DelegateFactory_L_HUDStrategic_Cbool_G___MethodCallerConst_L__private__bool___thiscall_HUDStrategic__IsTurnOneMinute_void_const__G_
               (void *param_1)

{
  double dVar1;
  
  dVar1 = StrategicManager__GetTurnTimeStep_s();
  if (dVar1 == 60.0) {
    return true;
  }
  return false;
}





//==== 007a1910 MethodCallerConst__private__bool___thiscall_HUDStrategic__IsTurnOneMonth_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static bool __cdecl util__DelegateFactory_L_struct_HUDStrategic_Cbool_G___MethodCallerConst_L__private_bool__thiscall_HUDStrategic__IsTurnOneMonth_void_const_G_(void const * const) */

bool util__DelegateFactory_L_HUDStrategic_Cbool_G___MethodCallerConst_L__private__bool___thiscall_HUDStrategic__IsTurnOneMonth_void_const__G_
               (void *param_1)

{
  double dVar1;
  
  dVar1 = StrategicManager__GetTurnTimeStep_s();
  if (dVar1 == 2592000.0) {
    return true;
  }
  return false;
}





//==== 007a1950 MethodCallerConst__private__bool___thiscall_HUDStrategic__IsTurnSixDays_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static bool __cdecl util__DelegateFactory_L_struct_HUDStrategic_Cbool_G___MethodCallerConst_L__private_bool__thiscall_HUDStrategic__IsTurnSixDays_void_const_G_(void const * const) */

bool util__DelegateFactory_L_HUDStrategic_Cbool_G___MethodCallerConst_L__private__bool___thiscall_HUDStrategic__IsTurnSixDays_void_const__G_
               (void *param_1)

{
  double dVar1;
  
  dVar1 = StrategicManager__GetTurnTimeStep_s();
  if (dVar1 == 518400.0) {
    return true;
  }
  return false;
}





//==== 007a1990 MethodCallerConst__private__bool___thiscall_HUDStrategic__IsTurnSixHours_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static bool __cdecl util__DelegateFactory_L_struct_HUDStrategic_Cbool_G___MethodCallerConst_L__private_bool__thiscall_HUDStrategic__IsTurnSixHours_void_const_G_(void const * const) */

bool util__DelegateFactory_L_HUDStrategic_Cbool_G___MethodCallerConst_L__private__bool___thiscall_HUDStrategic__IsTurnSixHours_void_const__G_
               (void *param_1)

{
  double dVar1;
  
  dVar1 = StrategicManager__GetTurnTimeStep_s();
  if (dVar1 == 21600.0) {
    return true;
  }
  return false;
}





//==== 007a19d0 MethodCallerConst__private__bool___thiscall_HUDStrategic__IsTurnTenMinutes_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static bool __cdecl util__DelegateFactory_L_struct_HUDStrategic_Cbool_G___MethodCallerConst_L__private_bool__thiscall_HUDStrategic__IsTurnTenMinutes_void_const_G_(void const * const) */

bool util__DelegateFactory_L_HUDStrategic_Cbool_G___MethodCallerConst_L__private__bool___thiscall_HUDStrategic__IsTurnTenMinutes_void_const__G_
               (void *param_1)

{
  double dVar1;
  
  dVar1 = StrategicManager__GetTurnTimeStep_s();
  if (dVar1 == 600.0) {
    return true;
  }
  return false;
}





//==== 007a1a10 AABB_util__Vec2_int___ ====


/* public:  util__AABB_L_structutil__Vec2_L_int_G__G___AABB_L_structutil__Vec2_L_int_G__G_(struct
   util__Vec2_L_int_G_,struct util__Vec2_L_int_G_) */

AABB_L_struct_util__Vec2_L_int_G___G_ * __thiscall
util__AABB_struct_util__Vec2_int_____AABB_struct_util__Vec2_int
          (AABB_L_struct_util__Vec2_L_int_G___G_ *this,Vec2_L_int_G_ param_1,Vec3_L_int_G_ param_2)

{
  int iVar1;
  
  iVar1 = param_1.X;
  if (param_2.X <= param_1.X) {
    iVar1 = param_2.X;
  }
  *(int *)this = iVar1;
  iVar1 = param_1.Y;
  if (param_2.Y <= param_1.Y) {
    iVar1 = param_2.Y;
  }
  *(int *)(this + 4) = iVar1;
  if (param_1.X <= param_2.X) {
    param_1.X = param_2.X;
  }
  *(int *)(this + 8) = param_1.X;
  if (param_1.Y <= param_2.Y) {
    param_1.Y = param_2.Y;
  }
  *(int *)(this + 0xc) = param_1.Y;
  return this;
}





//==== 007a1a50 Attribute_util__Darray_WorldObject___ ====


/* public:  util__Attribute_L_classutil__Darray_L_structWorldObject_G__G___Attribute_L_class_util__Darray_L_structWorldObject_G__G_(class util__Delegate_L_classutil__Darray_L_structWorldObject_G__G_
   const &) */

Attribute_L_class_util__Darray_L_struct_WorldObject_G___G_ * 
util__Attribute_class_util__Darray_struct_WorldObject_____Attribute_class_util__Darray_struct_WorldObject
          (Attribute_L_class_util__Darray_L_struct_WorldObject_G___G_ *this,
          Delegate_L_class_util__Darray_L_struct_WorldObject_G___G_ *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined ***)(this + 8) = &vftable_453;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  return this;
}





//==== 007a6700 Darray_util__SharedPtr_BalloonPopup___ ====


/* public: virtual  Darray_L_classutil__SharedPtr_L_structBalloonPopup_G__G___dtor(void) */

void __thiscall
util__Darray_class_util__SharedPtr_struct_BalloonPopup______Darray_class_util__SharedPtr_struct_BalloonPopup(Darray_L_class_util__SharedPtr_L_struct_BalloonPopup_G___G_ *this)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  ReferenceControllerRegistry *this_00;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  iVar2 = *(int *)(this + 4);
  *(undefined ***)this = &vftable_484;
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





//==== 007a6790 operator___007a6790 ====


/* public: bool __thiscall InputModifiers__operator(struct InputModifiers const &)const  */

bool __thiscall InputModifiers__operator(InputModifiers *this,InputModifiers *param_1)

{
  if ((((this->Shift == param_1->Shift) && (this->Control == param_1->Control)) &&
      (this->Alt == param_1->Alt)) && (this->Super == param_1->Super)) {
    return true;
  }
  return false;
}





//==== 007a67c0 scalar_deleting_destructor_007a67c0 ====


/* public: virtual void * __thiscall util__Darray_L_classutil__SharedPtr_L_structBalloonPopup_G___G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_class_util__SharedPtr_struct_BalloonPopup______scalar_deleting_destructor__o2
          (Darray_L_class_util__SharedPtr_L_struct_BalloonPopup_G___G_ *this,uint param_1)

{
  util__Darray_class_util__SharedPtr_struct_BalloonPopup______scalar_deleting_destructor(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 007a6920 Clear_007a6920 ====


/* public: virtual void  util__Darray_L_classutil__SharedPtr_L_structBalloonPopup_G___G___Clear(void) */

void 
util__Darray_class_util__SharedPtr_struct_BalloonPopup_____Clear
          (Darray_L_class_util__SharedPtr_L_struct_BalloonPopup_G___G_ *this)

{
  ReferenceController *this_00;
  bool bVar1;
  ReferenceControllerRegistry *this_01;
  int *piVar2;
  int *piVar3;
  
  if (*(int *)(this + 8) < 1) {
    *(undefined4 *)(this + 8) = 0;
    return;
  }
  piVar2 = *(int **)(this + 4);
  if ((piVar2 != (int *)0x0) && (piVar2 != piVar2 + *(int *)(this + 8) * 2)) {
    do {
      this_00 = (ReferenceController *)piVar2[1];
      piVar3 = (int *)*piVar2;
      *piVar2 = 0;
      piVar2[1] = 0;
      if ((this_00 != (ReferenceController *)0x0) &&
         (bVar1 = ReferenceController__ReleaseStrongReference(this_00), bVar1)) {
        if (piVar3 != (int *)0x0) {
          (**(code **)(uintptr_t)(*piVar3 + 4))(1);
        }
        this_01 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
        ReferenceControllerRegistry__PointerWasDestroyed(this_01,piVar3);
      }
      piVar2 = piVar2 + 2;
    } while (piVar2 != (int *)(*(int *)(this + 4) + *(int *)(this + 8) * 8));
    *(undefined4 *)(this + 8) = 0;
    return;
  }
  *(undefined4 *)(this + 8) = 0;
  return;
}





//==== 007a7a00 GetRunTurnLabel ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* private: class util__Str_L_char_G_  HUDStrategic__GetRunTurnLabel(void)const  */

Str_L_char_G_ * HUDStrategic__GetRunTurnLabel(Str_L_char_G_ *__return_storage_ptr__)

{
  bool bVar1;
  LocStr *pLVar2;
  Str_L_char_G_ *pSVar3;
  Str_L_char_G_ *pSVar4;
  void *local_68 [3];
  void *local_5c;
  void *local_50 [3];
  void *local_44;
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  undefined4 local_8;
  
  local_8 = 0;
  bVar1 = StrategicManager__IsTurnRunning();
  bVar1 = !bVar1;
  if (bVar1) {
    util__Str_char___Str_char(&local_2c,"RunTurn");
    local_14.Data = (char *)0x0;
    pLVar2 = (LocStr *)local_50;
    local_14.Capacity = 0;
    pSVar3 = &local_2c;
    local_14.Length = 0;
    pSVar4 = &local_14;
  }
  else {
    util__Str_char___Str_char(&local_38,"Ellipses");
    local_20.Data = (char *)0x0;
    pLVar2 = (LocStr *)local_68;
    local_20.Capacity = 0;
    pSVar3 = &local_38;
    local_20.Length = 0;
    pSVar4 = &local_20;
  }
  pLVar2 = (LocStr *)util__LocStr__LocStr(pLVar2,pSVar3,pSVar4);
  pSVar3 = util__LocStr__operator__o3(pLVar2);
  util__Str_char___Str_char(__return_storage_ptr__,pSVar3);
  if (bVar1) {
    if (local_44 != (void *)0x0) {
      port_op_delete(local_44);
      local_44 = (void *)0x0;
    }
    if (local_50[0] != (void *)0x0) {
      port_op_delete(local_50[0]);
      local_50[0] = (void *)0x0;
    }
  }
  if (bVar1) {
    if (local_14.Data != (char *)0x0) {
      port_op_delete(local_14.Data);
      local_14.Data = (char *)0x0;
    }
  }
  if (bVar1) {
    if (local_2c.Data != (char *)0x0) {
      port_op_delete(local_2c.Data);
      local_2c.Data = (char *)0x0;
    }
  }
  if (!bVar1) {
    if (local_5c != (void *)0x0) {
      port_op_delete(local_5c);
      local_5c = (void *)0x0;
    }
    if (local_68[0] != (void *)0x0) {
      port_op_delete(local_68[0]);
      local_68[0] = (void *)0x0;
    }
  }
  if (!bVar1) {
    if (local_20.Data != (char *)0x0) {
      port_op_delete(local_20.Data);
      local_20.Data = (char *)0x0;
    }
  }
  if ((local_38.Data != (char *)0x0) && (!bVar1)) {
    port_op_delete(local_38.Data);
  }
  return __return_storage_ptr__;
}





//==== 007a7b80 GetRunTurnVerboseTooltip ====


/* WARNING: Removing unreachable block (ram,0x007a7d3b) */
/* WARNING: Removing unreachable block (ram,0x007a7d48) */
/* WARNING: Removing unreachable block (ram,0x007a7d58) */
/* WARNING: Removing unreachable block (ram,0x007a7d62) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* private: class util__Str_L_char_G_  HUDStrategic__GetRunTurnVerboseTooltip(void)const  */

Str_L_char_G_ * HUDStrategic__GetRunTurnVerboseTooltip(Str_L_char_G_ *__return_storage_ptr__)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  char *pcVar11;
  bool bVar12;
  LocStr *pLVar13;
  Str_L_char_G_ *pSVar14;
  void *local_a4 [3];
  void *local_98;
  LocStr local_8c [24];
  Str_L_char_G_ local_74;
  Str_L_char_G_ local_68;
  Str_L_char_G_ local_5c;
  Str_L_char_G_ local_50;
  undefined4 local_44;
  Str_L_char_G_ local_40;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  Str_L_char_G_ local_10;
  
  local_44 = 0;
  bVar12 = StrategicManager__IsRunningTurnAllowed();
  if (bVar12) {
    pSVar14 = &local_10;
    local_10.Data = (char *)0x0;
    local_10.Capacity = 0;
    local_10.Length = 0;
    bVar10 = false;
    bVar12 = false;
    bVar9 = false;
    bVar8 = false;
    bVar7 = false;
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    bVar3 = false;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    bVar12 = StrategicManager__AreAllItinerariesValid();
    if (bVar12) {
      bVar12 = StrategicManager__GameIsOver();
      bVar12 = !bVar12;
      if (bVar12) {
        local_10.Data = (char *)0x0;
        pSVar14 = &local_10;
        local_10.Capacity = 0;
        local_10.Length = 0;
      }
      else {
        util__Str_char___Str_char(&local_34,"CantRunTurnMissionOver Tooltip");
        local_1c.Data = (char *)0x0;
        local_1c.Capacity = 0;
        local_1c.Length = 0;
        pLVar13 = (LocStr *)util__LocStr__LocStr(local_8c,&local_34,&local_1c);
        pSVar14 = util__LocStr__operator__o3(pLVar13);
        pSVar14 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_68,pSVar14);
      }
      bVar10 = !bVar12;
      bVar9 = true;
      bVar7 = false;
      bVar6 = false;
      bVar5 = false;
      bVar4 = false;
      bVar3 = !bVar12;
      bVar2 = !bVar12;
      pSVar14 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_5c,pSVar14);
    }
    else {
      util__Str_char___Str_char(&local_40,"CantRunTurnInvalidTrajectory Tooltip");
      local_28.Data = (char *)0x0;
      local_28.Capacity = 0;
      local_28.Length = 0;
      pLVar13 = (LocStr *)util__LocStr__LocStr((LocStr *)local_a4,&local_40,&local_28);
      pSVar14 = util__LocStr__operator__o3(pLVar13);
      pSVar14 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_74,pSVar14);
      bVar10 = false;
      bVar12 = false;
      bVar9 = false;
      bVar7 = true;
      bVar6 = true;
      bVar5 = true;
      bVar4 = true;
      bVar3 = false;
      bVar2 = false;
    }
    bVar8 = true;
    bVar1 = false;
    pSVar14 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_50,pSVar14);
  }
  pcVar11 = local_10.Data;
  util__Str_char___Str_char(__return_storage_ptr__,pSVar14);
  if ((bVar8) && (local_50.Data != (char *)0x0)) {
    port_op_delete(local_50.Data);
    local_50.Data = (char *)0x0;
  }
  if ((bVar9) && (local_5c.Data != (char *)0x0)) {
    port_op_delete(local_5c.Data);
    local_5c.Data = (char *)0x0;
  }
  if ((bVar12) && (local_10.Data != (char *)0x0)) {
    port_op_delete(local_10.Data);
  }
  if ((bVar10) && (local_68.Data != (char *)0x0)) {
    port_op_delete(local_68.Data);
    local_68.Data = (char *)0x0;
  }
  if ((bVar2) && (local_1c.Data != (char *)0x0)) {
    port_op_delete(local_1c.Data);
    local_1c.Data = (char *)0x0;
  }
  if ((bVar3) && (local_34.Data != (char *)0x0)) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if ((bVar4) && (local_74.Data != (char *)0x0)) {
    port_op_delete(local_74.Data);
    local_74.Data = (char *)0x0;
  }
  if (bVar5) {
    if (local_98 != (void *)0x0) {
      port_op_delete(local_98);
      local_98 = (void *)0x0;
    }
    if (local_a4[0] != (void *)0x0) {
      port_op_delete(local_a4[0]);
      local_a4[0] = (void *)0x0;
    }
  }
  if ((bVar6) && (local_28.Data != (char *)0x0)) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if ((bVar7) && (local_40.Data != (char *)0x0)) {
    port_op_delete(local_40.Data);
    local_40.Data = (char *)0x0;
  }
  if ((pcVar11 != (char *)0x0) && (bVar1)) {
    port_op_delete(pcVar11);
  }
  return __return_storage_ptr__;
}





//==== 007a7e70 GetTimeLeftBarPercentages ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* private: struct util__Range_L_double_G_  HUDStrategic__GetTimeLeftBarPercentages(void)const
    */

Range_L_double_G_ * HUDStrategic__GetTimeLeftBarPercentages(Range_L_double_G_ *__return_storage_ptr__)

{
  Maybe_L_double_G_ *pMVar1;
  double dVar2;
  double dVar3;
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  double local_c;
  
  pMVar1 = (Maybe_L_double_G_ *)(uintptr_t)(StrategicManager__GetDeadlineTimeLeft_s((Maybe_L_double_G_ *)local_2c));
  if (pMVar1->IsValidData == false) {
    *(undefined4 *)&__return_storage_ptr__->Lower = 0;
    *(undefined4 *)((int)&__return_storage_ptr__->Lower + 4) = 0;
    *(undefined4 *)&__return_storage_ptr__->Upper = 0;
    *(undefined4 *)((int)&__return_storage_ptr__->Upper + 4) = 0;
  }
  else {
    pMVar1 = (Maybe_L_double_G_ *)(uintptr_t)(StrategicManager__GetDeadlineTimeLeft_s((Maybe_L_double_G_ *)local_2c));
    if (pMVar1->IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    (*(uint64_t*)((char*)&(local_2c)+8)) = pMVar1->Data;
    local_c = (double)(*(uint64_t*)((char*)&(local_2c)+8));
    pMVar1 = (Maybe_L_double_G_ *)(uintptr_t)(StrategicManager__GetInitialDeadlineTime_s((Maybe_L_double_G_ *)local_1c));
    if (pMVar1->IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    (*(uint64_t*)((char*)&(local_1c)+8)) = pMVar1->Data;
    dVar3 = StrategicManager__GetTurnTimeStep_s();
    dVar2 = 0.0;
    if (0.0 <= local_c - dVar3) {
      dVar2 = local_c - dVar3;
    }
    dVar3 = 1.0 - dVar2 / (double)(*(uint64_t*)((char*)&(local_1c)+8));
    __return_storage_ptr__->Lower = dVar3;
    dVar2 = 1.0 - (double)(*(uint64_t*)((char*)&(local_2c)+8)) / (double)(*(uint64_t*)((char*)&(local_1c)+8));
    __return_storage_ptr__->Upper = dVar2;
    if (dVar2 < dVar3) {
      __return_storage_ptr__->Lower = dVar2;
      __return_storage_ptr__->Upper = dVar3;
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}





//==== 007a7f80 GetTimeLeftColor ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* private: struct util__Color  HUDStrategic__GetTimeLeftColor(void)const  */

Color * HUDStrategic__GetTimeLeftColor(Color *__return_storage_ptr__)

{
  Maybe_L_double_G_ *pMVar1;
  Preset PVar2;
  float fVar3;
  undefined1 local_1c [16];
  double local_c;
  
  pMVar1 = (Maybe_L_double_G_ *)(uintptr_t)(StrategicManager__GetDeadlineTimeLeft_s((Maybe_L_double_G_ *)local_1c));
  if (pMVar1->IsValidData != false) {
    pMVar1 = (Maybe_L_double_G_ *)(uintptr_t)(StrategicManager__GetDeadlineTimeLeft_s((Maybe_L_double_G_ *)local_1c));
    if (pMVar1->IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    (*(uint64_t*)((char*)&(local_1c)+8)) = pMVar1->Data;
    fVar3 = 1.0;
    local_c = StrategicManager__GetTurnTimeStep_s();
    PVar2 = Preset__LightBlue;
    if ((double)(*(uint64_t*)((char*)&(local_1c)+8)) < local_c) {
      PVar2 = Preset__Red;
    }
    util__Color__Color(__return_storage_ptr__,PVar2,fVar3);
    return __return_storage_ptr__;
  }
  util__Color__Color__o7(__return_storage_ptr__);
  return __return_storage_ptr__;
}





//==== 007a8660 GetWorkableScreenArea ====


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* private: struct util__AABB_L_structutil__Vec2_L_int_G__G_ 
   HUDStrategic__GetWorkableScreenArea(void)const  */

AABB_L_util__Vec2_L_int_G___G_ *
HUDStrategic__GetWorkableScreenArea(AABB_L_util__Vec2_L_int_G___G_ *__return_storage_ptr__)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  NotificationManager *this;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  
  iVar2 = LayoutAttributes__DefaultMargin();
  iVar3 = LayoutAttributes__DefaultPadding();
  this = (NotificationManager *)(uintptr_t)(StrategicManager__GetNotifications());
  bVar1 = NotificationManager__AreNotificationsVisible(this);
  if (bVar1) {
    dVar7 = NotificationManager__GetNotificationHeight();
    iVar4 = (int)dVar7 + iVar3;
  }
  else {
    iVar4 = 0;
  }
  iVar4 = iVar4 + iVar2;
  iVar6 = (*(unsigned int *)((char *)&(Graphics__GlobalState.ViewMatrix.Data[0xf]) + 4) - iVar3) - iVar2;
  iVar5 = ((*(unsigned int *)(&(Graphics__GlobalState.ViewMatrix.Data[0xf])) - iVar3) + -300) - iVar2;
  iVar2 = iVar3 + 0xfa + iVar2;
  iVar3 = iVar2;
  if (iVar5 <= iVar2) {
    iVar3 = iVar5;
  }
  (__return_storage_ptr__->Lower).X = iVar3;
  iVar3 = iVar4;
  if (iVar6 <= iVar4) {
    iVar3 = iVar6;
  }
  (__return_storage_ptr__->Lower).Y = iVar3;
  if (iVar2 <= iVar5) {
    iVar2 = iVar5;
  }
  (__return_storage_ptr__->Upper).X = iVar2;
  if (iVar4 <= iVar6) {
    iVar4 = iVar6;
  }
  (__return_storage_ptr__->Upper).Y = iVar4;
  return __return_storage_ptr__;
}





//==== 007a8b40 SendPopupToBacklog ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* private: void  HUDStrategic__SendPopupToBacklog(void (__cdecl*)(void),class
   util__Str_L_char_G_,class util__Str_L_char_G_) */

void HUDStrategic__SendPopupToBacklog(_func_void *param_1,Str_L_char_G_ param_2,Str_L_char_G_ param_3)

{
  NotificationManager *this;
  BacklogMessage *pBVar1;
  Str_L_char_G_ local_80;
  Str_L_char_G_ local_74;
  undefined1 local_68 [20];
  float local_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  Str_L_char_G_ local_44;
  Str_L_char_G_ local_38;
  bool local_2c;
  int local_28;
  undefined1 local_24 [16];
  float local_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  util__Str_char___Str_char(&local_80,&param_3);
  util__Str_char___Str_char(&local_74,&param_2);
  util__Color__Color((Color *)local_24,Preset__White,1.0);
  (*(uint32_t*)&(local_68)) = (uint32_t)(uintptr_t)(param_1);
  (*(uint32_t*)((char*)&(local_68)+4)) = (uint32_t)(uintptr_t)(&vftable_5);
  util__Str_char___Str_char((Str_L_char_G_ *)(local_68 + 8),(Str_L_char_G_ *)(local_24 + 4));
  (*(uint32_t*)((char*)&(local_68)+4)) = (uint32_t)(uintptr_t)(&vftable_59);
  local_54 = local_14;
  fStack_50 = fStack_10;
  fStack_4c = fStack_c;
  fStack_48 = fStack_8;
  util__Str_char___Str_char(&local_44,&local_74);
  util__Str_char___Str_char(&local_38,&local_80);
  *(uint32_t *)&local_2c = true;
  local_28 = 1;
  (*(uint32_t*)&(local_24)) = (uint32_t)(uintptr_t)(&vftable_5);
  if ((void *)(*(uint32_t*)((char*)&(local_24)+4)) != (void *)0x0) {
    port_op_delete((void *)(*(uint32_t*)((char*)&(local_24)+4)));
    (*(uint32_t*)((char*)&(local_24)+4)) = (uint32_t)(uintptr_t)((void *)0x0);
  }
  if (local_74.Data != (char *)0x0) {
    port_op_delete(local_74.Data);
  }
  if (local_80.Data != (char *)0x0) {
    port_op_delete(local_80.Data);
  }
  pBVar1 = (BacklogMessage *)local_68;
  this = (NotificationManager *)(uintptr_t)(StrategicManager__GetNotifications());
  NotificationManager__AddBacklogMessage(this,pBVar1);
  if (local_38.Data != (char *)0x0) {
    port_op_delete(local_38.Data);
    local_38.Data = (char *)0x0;
  }
  if (local_44.Data != (char *)0x0) {
    port_op_delete(local_44.Data);
    local_44.Data = (char *)0x0;
  }
  (*(uint32_t*)((char*)&(local_68)+4)) = (uint32_t)(uintptr_t)(&vftable_5);
  if ((void *)(*(uint32_t*)((char*)&(local_68)+8)) != (void *)0x0) {
    port_op_delete((void *)(*(uint32_t*)((char*)&(local_68)+8)));
  }
  if (param_2.Data != (char *)0x0) {
    port_op_delete(param_2.Data);
    param_2.Data = (char *)0x0;
  }
  if (param_3.Data != (char *)0x0) {
    port_op_delete(param_3.Data);
  }
  return;
}





//==== 007a8ca0 MethodCallerConst__protected__struct_util__Vec2_int____thiscall_GhostedUIButton__GetSize_void_const__ ====


/* public: static struct util__Vec2_L_int_G_ __cdecl util__DelegateFactory_L_structGhostedUIButton_Cstruct_util__Vec2_L_int_G__G___MethodCallerConst_L__protected_structutil__Vec2_L_int_G___thiscall_GhostedUIButton__GetSize_void_const_G_(void const * const) */

Vec2_L_int_G_ __cdecl
util__DelegateFactory_struct_GhostedUIButton_struct_util__Vec2_int_____MethodCallerConst__protected__struct_util__Vec2_int____thiscall_GhostedUIButton__GetSize_void_const
          (void *param_1)

{
  int iVar1;
  undefined8 uVar2;
  Vec2_L_int_G_ VVar3;
  int *in_stack_00000008;
  
  uVar2 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xcc))();
  VVar3.Y = (int)((ulonglong)uVar2 >> 0x20);
  iVar1 = (int)uVar2 * 2;
  *(int *)param_1 = iVar1;
  *(int *)((int)param_1 + 4) = iVar1;
  VVar3.X = (int)param_1;
}





//==== 007a8e60 GhostedUIButton ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: __thiscall GhostedUIButton__GhostedUIButton(struct UIAttributes,class
   util__Delegate_L_void_G_) */

GhostedUIButton * __thiscall
GhostedUIButton__GhostedUIButton(GhostedUIButton *this,UIAttributes param_1,Delegate_L_void_G_ param_2)

{
  undefined8 stack0xfffffe70;
  Delegate_L_void_G_ DVar1;
  KeyCombination KVar2;
  Delegate_L_void_CInputModifiers_G_ DVar3;
  Delegate_L_void_Cbool_Cbool_Cbool_G_ DVar4;
  UIAttributes in_stack_fffffe70;
  int iVar5;
  InputModifiers IVar6;
  void *pvVar7;
  _func___cdecl_void_void_ptr_InputModifiers *p_Var8;
  bool bVar9;
  void *pvVar10;
  _func___cdecl_void_void_ptr_bool_bool_bool *p_Var11;
  
  p_Var11 = (_func___cdecl_void_void_ptr_bool_bool_bool *)0x0;
  pvVar10 = (void *)0x0;
  bVar9 = false;
  p_Var8 = (_func___cdecl_void_void_ptr_InputModifiers *)0x0;
  pvVar7 = (void *)0x0;
  param_1.HitTestShape.Getter.Callee = (void *)0x0;
  param_1.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)0x0);
  iVar5 = 0;
  IVar6.Shift = false;
  IVar6.Control = false;
  IVar6.Alt = false;
  IVar6.Super = false;
  param_1.HitTestShape.Value = Circle;
  param_1.DesiredSize.Getter.CallbackFunction =
       (Vec2_L_int_G_ (*)(void *))util__DelegateFactory_L_GhostedUIButton_Cutil__Vec2_L_int_G___G___MethodCallerConst_L__protected__struct_util__Vec2_L_int_G____thiscall_GhostedUIButton__GetSize_void_const__G_
  ;
  param_1.DesiredSize.Value.X = 0;
  param_1.DesiredSize.Value.Y = 0;
  param_1.DesiredSize.Getter.Callee = this;
  UIAttributes__UIAttributes((UIAttributes *)&stack0xfffffe70,&param_1);
  DVar1.CallbackFunction = param_2.CallbackFunction;
  DVar1.Callee = param_2.Callee;
  KVar2.Modifier = IVar6;
  KVar2.Key = iVar5;
  DVar3.CallbackFunction = (void (*)(void *, struct InputModifiers))(p_Var8);
  DVar3.Callee = pvVar7;
  DVar4.CallbackFunction = p_Var11;
  DVar4.Callee = pvVar10;
  UISimpleButton__UISimpleButton
            ((UISimpleButton *)this,in_stack_fffffe70,DVar1,KVar2,DVar3,bVar9,DVar4);
  this->_pad_0x0_0 = (int)&vftable_488;
  (this->GhostedUIButtonMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 = 0;
  (this->GhostedUIButtonMemoizationHandlerInstance).ResetFunctions.Data = (pmf_55606f16 *)0x0;
  (this->GhostedUIButtonMemoizationHandlerInstance).ResetFunctions.Size = 0;
  (this->GhostedUIButtonMemoizationHandlerInstance).ResetFunctions.Capacity = 0;
  (this->GhostedUIButtonMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 =
       (int)&vftable_2;
  (this->GhostedUIButtonMemoizationHandlerInstance).ResetFunctions.Data = (pmf_55606f16 *)0x0;
  (this->GhostedUIButtonMemoizationHandlerInstance).ResetFunctions.Size = 0;
  (this->GhostedUIButtonMemoizationHandlerInstance).ResetFunctions.Capacity = 0;
  (this->GetTimeSinceJ2000_s_MemoizedValue).Data = 0.0;
  (this->GetTimeSinceJ2000_s_MemoizedValue).IsValidData = false;
  *(undefined4 *)&(this->GetLocation_km_MemoizedValue).Data.X = 0;
  *(undefined4 *)((int)&(this->GetLocation_km_MemoizedValue).Data.X + 4) = 0;
  *(undefined4 *)&(this->GetLocation_km_MemoizedValue).Data.Y = 0;
  *(undefined4 *)((int)&(this->GetLocation_km_MemoizedValue).Data.Y + 4) = 0;
  (this->GetLocation_km_MemoizedValue).Data.Z = 0.0;
  (this->GetLocation_km_MemoizedValue).IsValidData = false;
  (this->IsHoverLookaheadEnabled_MemoizedValue).Data = false;
  (this->IsHoverLookaheadEnabled_MemoizedValue).IsValidData = false;
  UIAttributes___UIAttributes(&param_1);
  return this;
}

//==== 007a9140 GhostedUIButton_007a9140 ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual __thiscall GhostedUIButton___GhostedUIButton(void) */

void __thiscall GhostedUIButton___GhostedUIButton(GhostedUIButton *this)

{
  pmf_55606f16 *ppVar1;
  
  ppVar1 = (this->GhostedUIButtonMemoizationHandlerInstance).ResetFunctions.Data;
  (this->GhostedUIButtonMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 =
       (int)&vftable_2;
  if (ppVar1 != (pmf_55606f16 *)0x0) {
    port_op_delete(ppVar1);
  }
  (this->GhostedUIButtonMemoizationHandlerInstance).ResetFunctions.Data = (pmf_55606f16 *)0x0;
  (this->GhostedUIButtonMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 =
       (int)&vftable;
  this->_pad_0x0_0 = (int)&vftable_49;
  Darray_L_util__SharedPtr_L_UIWidget_G___G___dtor((Darray_L_util__SharedPtr_L_UIWidget_G___G_ *)&this->_pad_0x158_86);
  if ((ReferenceController *)this->_pad_0x154_85 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)this->_pad_0x154_85);
  }
  this->_pad_0x12c_75 = (int)&vftable_5;
  if ((void *)this->_pad_0x130_76 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x130_76);
    this->_pad_0x130_76 = 0;
  }
  this->_pad_0x100_64 = (int)&vftable_5;
  if ((void *)this->_pad_0x104_65 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x104_65);
    this->_pad_0x104_65 = 0;
  }
  this->_pad_0xd4_53 = (int)&vftable_5;
  if ((void *)this->_pad_0xd8_54 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0xd8_54);
    this->_pad_0xd8_54 = 0;
  }
  if ((void *)this->_pad_0xb0_44 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0xb0_44);
    this->_pad_0xb0_44 = 0;
  }
  if ((void *)this->_pad_0x9c_39 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x9c_39);
    this->_pad_0x9c_39 = 0;
  }
  if ((void *)this->_pad_0xc_3 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0xc_3);
    this->_pad_0xc_3 = 0;
  }
  return;
}

//==== 007a9660 scalar_deleting_destructor_007a9660 ====


/* public: virtual void * __thiscall GhostedUIButton:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall GhostedUIButton___scalar_deleting_destructor(GhostedUIButton *this,uint param_1)

{
  GhostedUIButton___GhostedUIButton(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x1e0);
  }
  return this;
}





//==== 007a96d0 GetClassID_007a96d0 ====


/* public: virtual unsigned long __thiscall GhostedUIButton__GetClassID(void)const  */

ulong __thiscall GhostedUIButton__GetClassID(GhostedUIButton *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_383353e9__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_383353e9__thread_safe_static_guard_0__);
    if ( cde_l2_383353e9__thread_safe_static_guard_0__ == -1) {
       cde_l2_97a135c8_ID =
           util__GetHash("GhostedUIButton");
      _Init_thread_footer(& cde_l2_383353e9__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_97a135c8_ID;
}





//==== 007a9e00 GetLocation_km_Clear ====


/* public: void __thiscall GhostedUIButton__GetLocation_km_Clear(void)const  */

void __thiscall GhostedUIButton__GetLocation_km_Clear(GhostedUIButton *this)

{
  (this->GetLocation_km_MemoizedValue).IsValidData = false;
  *(undefined4 *)&(this->GetLocation_km_MemoizedValue).Data.X = 0;
  *(undefined4 *)((int)&(this->GetLocation_km_MemoizedValue).Data.X + 4) = 0;
  *(undefined4 *)&(this->GetLocation_km_MemoizedValue).Data.Y = 0;
  *(undefined4 *)((int)&(this->GetLocation_km_MemoizedValue).Data.Y + 4) = 0;
  (this->GetLocation_km_MemoizedValue).Data.Z = 0.0;
  return;
}





//==== 007ab810 Render3D_007ab810 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual void  FleetUIButton__Render3D(void)const  */

void FleetUIButton__Render3D(void)

{
  RenderIcon(false,false);
  return;
}





//==== 007ab980 Render3DTransparent_007ab980 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual void  FleetUIButton__Render3DTransparent(void)const  */

void FleetUIButton__Render3DTransparent(void)

{
  RenderIcon(true,true);
  return;
}





//==== 007ac3f0 DoesSphereIntersectFrustum_double_ ====


/* bool __cdecl util__DoesSphereIntersectFrustum_double(struct util__Frustum_L_double_G_ const &,struct
   util__Sphere_L_double_G_) */

bool __cdecl
util__DoesSphereIntersectFrustum_double(Frustum_L_double_G_ *param_1,Sphere_L_double_G_ param_2)

{
  undefined8 stack0xfffffff0;
  double dVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined1 (*pauVar5) [16];
  Maybe_L_double_G_ *pMVar6;
  undefined4 in_stack_00000008;
  Maybe_L_double_G_ MStack_100;
  double dStack_f0;
  undefined8 uStack_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined **ppuStack_b0;
  void *pvStack_ac;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  undefined8 uStack_80;
  undefined1 uStack_71;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  int iStack_18;
  uint uStack_14;
  
  uStack_14 = __security_cookie ^ (uint)&stack0xfffffff0;
  piVar3 = (int *)Frustum_L_double_G___AsArray(param_1);
  iStack_18 = 0;
  iVar4 = (**(code **)(uintptr_t)(*piVar3 + 0xc))();
  if (iStack_18 < iVar4) {
    do {
      pauVar5 = (undefined1 (*) [16])(**(code **)*piVar3)(&iStack_18);
      dStack_50 = (double)CONCAT44(param_2.Center.X,in_stack_00000008);
      dVar1 = *(double *)(pauVar5[1] + 8);
      uStack_48 = (*(uint64_t *)((char *)&(param_2.Center) + 4));
      dStack_f0 = (double)(*(uint64_t *)((char *)&(param_2.Center) + 12));
      uStack_e8 = (*(uint64_t *)((char *)&(param_2) + 20));
      uStack_40 = (*(uint64_t *)((char *)&(param_2.Center) + 12));
      dStack_38 = (double)(*(uint64_t *)((char *)&(param_2) + 20));
      if ((dStack_50 - dVar1 * *(double *)*pauVar5) * *(double *)*pauVar5 +
          ((double)(*(uint64_t *)((char *)&(param_2.Center) + 4)) - dVar1 * *(double *)(*pauVar5 + 8)) *
          *(double *)(*pauVar5 + 8) +
          ((double)(*(uint64_t *)((char *)&(param_2.Center) + 12)) - dVar1 * *(double *)pauVar5[1]) * *(double *)pauVar5[1] <=
          0.0) {
        *(uint32_t *)&auStack_c0 = (uint32_t)(uintptr_t)(*pauVar5);
        dStack_e0 = *(double *)pauVar5[1];
        dStack_d8 = *(double *)(pauVar5[1] + 8);
        dStack_88 = 1.0;
        dVar1 = (*(uint64_t*)((char*)&(auStack_c0)+8));
        (*(uint32_t*)((char*)&(auStack_d0)+8)) = (*(uint32_t*)((char*)&(auStack_c0)+8));
        (*(uint64_t*)&(auStack_d0)) = dVar1;
        (*(uint32_t *)((char *)&(auStack_d0) + 12)) = (*(uint32_t *)((char *)&(auStack_c0) + 12));
        dStack_28 = (double)(*(uint64_t *)((char *)&(param_2.Center) + 4));
        dStack_90 = (*(uint64_t*)&(auStack_c0)) * (*(uint64_t*)&(auStack_c0)) + dVar1 * dVar1 + dStack_e0 * dStack_e0;
        dStack_60 = dStack_e0;
        dStack_58 = dStack_d8;
        dStack_30 = dStack_50;
        pMVar6 = (Maybe_L_double_G_ *)(uintptr_t)(Sqrt(&MStack_100,&dStack_90));
        (*(uint32_t*)((char*)&(uStack_80)+4)) = (uint32_t)(uintptr_t)(pMVar6);
        if (pMVar6->IsValidData == false) {
          LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
          DebugBreak();
        }
        dStack_98 = (((struct Maybe_L_double_G_ *)(uintptr_t)(*(uint32_t *)((char *)&(uStack_80)+4))))->Data;
        uStack_80 = 1e-08;
        bVar2 = Equals_L_double_G_(&dStack_98,&dStack_88,(double *)&uStack_80);
        if (!bVar2) {
          LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\advancedgeometry.inl"
                    ,0x338,"InPlane.Mode__Normal.IsNormalized()",(char *)0x0);
          DebugBreak();
        }
        dStack_a0 = ((double)(*(uint64_t*)&(auStack_c0)) * dStack_30 + (double)(*(uint64_t*)&(auStack_d0)) * dStack_28 +
                    dStack_e0 * dStack_f0) - dStack_58;
        dStack_88 = Abs(&dStack_a0);
        if (dStack_38 < dStack_88) {
          uStack_71 = 0;
          goto LAB_007ac61a;
        }
      }
      iStack_18 = iStack_18 + 1;
      iVar4 = (**(code **)(uintptr_t)(*piVar3 + 0xc))();
    } while (iStack_18 < iVar4);
  }
  uStack_71 = 1;
LAB_007ac61a:
  ppuStack_b0 = (undefined **)(&vftable_229);
  if (pvStack_ac != (void *)0x0) {
    port_op_delete(pvStack_ac);
  }
  __security_check_cookie(uStack_14 ^ (uint)&stack0xfffffff0);
  return (bool)uStack_71;
}





//==== 007ad7d0 IsFinite_double_ ====


/* bool const __cdecl util__IsFinite_double(struct util__Vec3_L_double_G_ const &) */

bool __cdecl util__IsFinite_double(Vec3_L_double_G_ *param_1)

{
  double dVar1;
  
  dVar1 = param_1->X;
  if ((((NAN(dVar1) != (dVar1 == 0.0)) || (!NAN(dVar1 / dVar1))) &&
      ((dVar1 = param_1->Y, NAN(dVar1) != (dVar1 == 0.0) || (!NAN(dVar1 / dVar1))))) &&
     ((dVar1 = param_1->Z, NAN(dVar1) != (dVar1 == 0.0) || (!NAN(dVar1 / dVar1))))) {
    return true;
  }
  return false;
}





//==== 007ae0e0 SharedToWeakArray_ModuleCompartment_ ====


/* class util__Darray_L_classutil__WeakPtr_L_structModuleCompartment_G__G_ __cdecl
   util__SharedToWeakArray_struct_ModuleCompartment(class util__Darray_L_classutil__SharedPtr_L_struct_ModuleCompartment_G__G_ const &) */

void __cdecl
util__SharedToWeakArray_struct_ModuleCompartment__o2
          (Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *param_1)

{
  undefined8 stack0xfffffffc;
  ReferenceController *this;
  undefined4 uVar1;
  int iVar2;
  ReferenceController *this_00;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int *in_stack_00000008;
  int iStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar4 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
  Darray_L_class_util__WeakPtr_L_class_Body_G___G___Darray_L_class_util__WeakPtr_L_class_Body_G___G_
            ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)param_1,iVar4);
  iStack_c = 0;
  iVar4 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
  if (iStack_c < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)*in_stack_00000008)(&iStack_c);
      this = (ReferenceController *)puVar5[1];
      uVar1 = *puVar5;
      if (this != (ReferenceController *)0x0) {
        util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(this);
      }
      iVar4 = *(int *)(param_1 + 8);
      iStack_10 = iVar4 + 1;
      Darray_L_class_util__WeakPtr_L_class_Body_G___G___SetSize
                ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)param_1,&iStack_10);
      bVar3 = Darray_L_class_util__WeakPtr_L_class_Body_G___G___CheckSize
                        ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)param_1,iVar4);
      if (bVar3) {
        iVar4 = *(int *)(param_1 + 8);
        iVar2 = *(int *)(param_1 + 4);
        this_00 = *(ReferenceController **)(iVar2 + -4 + iVar4 * 8);
        *(undefined4 *)(iVar2 + -8 + iVar4 * 8) = uVar1;
        *(ReferenceController **)(iVar2 + -4 + iVar4 * 8) = this;
        if (this != (ReferenceController *)0x0) {
          util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(this);
        }
        if (this_00 != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(this_00);
        }
      }
      if (this != (ReferenceController *)0x0) {
        ReferenceController__ReleaseWeakReference(this);
      }
      iStack_c = iStack_c + 1;
      iVar4 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
    } while (iStack_c < iVar4);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 007ae9f0 Darray_Impact_ ====


/* public:  util__Darray_L_structImpact_G___Darray_L_structImpact_G_(class util__Darray_L_struct_Impact_G_ const &) */

Darray_L_struct_Impact_G_ * 
util__Darray_struct_Impact___Darray_struct_Impact
          (Darray_L_struct_Impact_G_ *this,Darray_L_struct_Impact_G_ *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Darray_L_struct_Impact_G_ *pDVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  pDVar5 = param_1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = &vftable_492;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  param_1 = (Darray_L_struct_Impact_G_ *)(**(code **)(*(int *)param_1 + 0xc))();
  Darray_L_struct_util__AABB_L_struct_util__Vec3_L_double_G___G___G___SetSize
            ((Darray_L_struct_util__AABB_L_struct_util__Vec3_L_double_G___G___G_ *)this,(int *)&param_1);
  uVar8 = *(uint *)(this + 0xc);
  puVar6 = (undefined4 *)
           port_op_new(-(uint)((int)((ulonglong)uVar8 * 0x30 >> 0x20) != 0) |
                          (uint)((ulonglong)uVar8 * 0x30));
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else if (uVar8 != 0) {
    puVar7 = puVar6 + 10;
    do {
      puVar7[-10] = 0;
      puVar7[-9] = 0;
      puVar7[-8] = 0;
      puVar7[-7] = 0;
      puVar7[-6] = 0;
      puVar7[-5] = 0;
      puVar7[-4] = 0;
      puVar7[-3] = 0;
      puVar7[-2] = 0;
      puVar7[-1] = 0;
      *puVar7 = 0;
      puVar7[1] = 0;
      uVar8 = uVar8 - 1;
      puVar7 = puVar7 + 0xc;
    } while (uVar8 != 0);
  }
  *(undefined4 **)(this + 4) = puVar6;
  puVar7 = *(undefined4 **)(pDVar5 + 4);
  if (puVar7 != puVar7 + *(int *)(pDVar5 + 8) * 0xc) {
    do {
      uVar2 = puVar7[1];
      uVar3 = puVar7[2];
      uVar4 = puVar7[3];
      *puVar6 = *puVar7;
      puVar6[1] = uVar2;
      puVar6[2] = uVar3;
      puVar6[3] = uVar4;
      uVar2 = puVar7[5];
      uVar3 = puVar7[6];
      uVar4 = puVar7[7];
      puVar6[4] = puVar7[4];
      puVar6[5] = uVar2;
      puVar6[6] = uVar3;
      puVar6[7] = uVar4;
      puVar1 = puVar7 + 8;
      uVar2 = puVar7[9];
      uVar3 = puVar7[10];
      uVar4 = puVar7[0xb];
      puVar7 = puVar7 + 0xc;
      puVar6[8] = *puVar1;
      puVar6[9] = uVar2;
      puVar6[10] = uVar3;
      puVar6[0xb] = uVar4;
      puVar6 = puVar6 + 0xc;
    } while (puVar7 != (undefined4 *)(*(int *)(pDVar5 + 8) * 0x30 + *(int *)(pDVar5 + 4)));
  }
  return this;
}





//==== 007aead0 Quaternion_double__007aead0 ====


/* public:  util__Quaternion_double___Quaternion_double(struct util__Vec3_L_double_G_ const
   &) */

Quaternion_L_double_G_ * 
util__Quaternion_double___Quaternion_double(Quaternion_L_double_G_ *this,Vec3_L_double_G_ *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  Maybe_L_double_G_ *pMVar3;
  double dVar4;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  Maybe_L_double_G_ MStack_30;
  Vec3_L_double_G_ VStack_20;
  
  Vec3_L_double_G___SafeNormalized(param_1,&VStack_20);
  dStack_48 = param_1->Y * param_1->Y + param_1->X * param_1->X + param_1->Z * param_1->Z;
  pMVar3 = (Maybe_L_double_G_ *)(uintptr_t)(Sqrt(&MStack_30,&dStack_48));
  if (pMVar3->IsValidData == false) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,"IsValid()",
              (char *)0x0);
    DebugBreak();
  }
  dVar4 = pMVar3->Data * 0.5;
  MStack_30.Data = dVar4;
  libm_sse2_sin_precise(0.0);
  dStack_40 = dVar4 * VStack_20.X;
  dStack_38 = dVar4 * VStack_20.Y;
  dStack_48 = dVar4 * VStack_20.Z;
  libm_sse2_cos_precise(0.0);
  dVar4 = dStack_38 * dStack_38 + dStack_40 * dStack_40 + dStack_48 * dStack_48 +
          MStack_30.Data * MStack_30.Data;
  libm_sse2_sqrt_precise(0.0);
  dVar4 = 1.0 / dVar4;
  (*(uint32_t*)((char*)&(auVar2)+8)) = SUB84(dVar4 * dStack_38,0);
  (*(uint64_t*)&(auVar2)) = dVar4 * dStack_40;
  (*(uint32_t *)((char *)&(auVar2) + 12)) = (int)((ulonglong)(dVar4 * dStack_38) >> 0x20);
  this->X = (double)(*(uint64_t*)&(auVar2));
  this->Y = (double)(*(uint64_t*)((char*)&(auVar2)+8));
  (*(uint32_t*)((char*)&(auVar1)+8)) = SUB84(dVar4 * MStack_30.Data,0);
  (*(uint64_t*)&(auVar1)) = dVar4 * dStack_48;
  (*(uint32_t *)((char *)&(auVar1) + 12)) = (int)((ulonglong)(dVar4 * MStack_30.Data) >> 0x20);
  this->Z = (double)(*(uint64_t*)&(auVar1));
  this->W = (double)(*(uint64_t*)((char*)&(auVar1)+8));
  return this;
}





//==== 007b00c0 scalar_deleting_destructor_007b00c0 ====


/* public: virtual void * __thiscall util__Darray_L_structutil__AABB_L_structutil__Vec3_L_double_G__G___G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_util__AABB_struct_util__Vec3_double________scalar_deleting_destructor
          (Darray_L_struct_util__AABB_L_struct_util__Vec3_L_double_G___G___G_ *this,uint param_1)

{
  *(undefined ***)this = &vftable_492;
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





//==== 007b1840 CheckSize_007b1840 ====


/* private: bool  util__Darray_L_structutil__AABB_L_structutil__Vec3_L_double_G__G___G___CheckSize(int) */

bool 
util__Darray_struct_util__AABB_struct_util__Vec3_double_______CheckSize
          (Darray_L_struct_util__AABB_L_struct_util__Vec3_L_double_G___G___G_ *this,int param_1)

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
    SetSize(this,(int *)&puStack_c);
    uVar7 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar2;
  bVar2 = (int)uVar7 < 0x40000000;
  if (!bVar2) {
    puStack_c = (undefined4 *)0x3fffffff;
    SetSize(this,(int *)&puStack_c);
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
              port_op_new(-(uint)((int)((ulonglong)uVar9 * 0x30 >> 0x20) != 0) |
                             (uint)((ulonglong)uVar9 * 0x30));
  if (puStack_c == (undefined4 *)0x0) {
    puStack_c = (undefined4 *)0x0;
  }
  else if (uVar9 != 0) {
    puVar6 = puStack_c + 10;
    do {
      puVar6[-10] = 0;
      puVar6[-9] = 0;
      puVar6[-8] = 0;
      puVar6[-7] = 0;
      puVar6[-6] = 0;
      puVar6[-5] = 0;
      puVar6[-4] = 0;
      puVar6[-3] = 0;
      puVar6[-2] = 0;
      puVar6[-1] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      uVar9 = uVar9 - 1;
      puVar6 = puVar6 + 0xc;
    } while (uVar9 != 0);
  }
  puVar6 = *(undefined4 **)(this + 4);
  if (puVar6 != (undefined4 *)0x0) {
    iVar1 = *(int *)(this + 8);
    puVar8 = puVar6;
    puVar10 = puStack_c;
    if (puVar6 != puVar6 + param_1 * 0xc) {
      do {
        if (puVar10 == puStack_c + iVar1 * 0xc) break;
        uVar3 = puVar6[1];
        uVar4 = puVar6[2];
        uVar5 = puVar6[3];
        *puVar10 = *puVar6;
        puVar10[1] = uVar3;
        puVar10[2] = uVar4;
        puVar10[3] = uVar5;
        uVar3 = puVar6[5];
        uVar4 = puVar6[6];
        uVar5 = puVar6[7];
        puVar10[4] = puVar6[4];
        puVar10[5] = uVar3;
        puVar10[6] = uVar4;
        puVar10[7] = uVar5;
        puVar8 = puVar6 + 8;
        uVar3 = puVar6[9];
        uVar4 = puVar6[10];
        uVar5 = puVar6[0xb];
        puVar6 = puVar6 + 0xc;
        puVar10[8] = *puVar8;
        puVar10[9] = uVar3;
        puVar10[10] = uVar4;
        puVar10[0xb] = uVar5;
        puVar8 = *(undefined4 **)(this + 4);
        puVar10 = puVar10 + 0xc;
      } while (puVar6 != puVar8 + param_1 * 0xc);
    }
    port_op_delete(puVar8);
    *(undefined4 *)(this + 4) = 0;
  }
  *(undefined4 **)(this + 4) = puStack_c;
  return bStack_5;
}





//==== 007b19a0 Clear_007b19a0 ====


/* public: virtual void  util__Darray_L_structutil__Line3_L_double_G__G___Clear(void) */

void __thiscall
util__Darray_struct_util__Line3_double_____Clear(Darray_L_struct_util__Line3_L_double_G___G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  Darray_L_struct_util__AABB_L_struct_util__Vec3_L_double_G___G___G___SetSize
            ((Darray_L_struct_util__AABB_L_struct_util__Vec3_L_double_G___G___G_ *)this,&iStack_8);
  return;
}





//==== 007b29e0 GetClassID_007b29e0 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual unsigned long  Body__GetClassID(void)const  */

ulong Body__GetClassID(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_0c9a0a0c__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_0c9a0a0c__thread_safe_static_guard_0__);
    if ( cde_l2_0c9a0a0c__thread_safe_static_guard_0__ == -1) {
       cde_l2_97a135c8_ID =
           util__GetHash("Body");
      _Init_thread_footer(& cde_l2_0c9a0a0c__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_97a135c8_ID;
}





//==== 007b3800 GetForwardVector_007b3800 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: struct util__Vec3_L_double_G_  Body__GetForwardVector(void)const  */

Vec3_L_double_G_ * Body__GetForwardVector(Vec3_L_double_G_ *__return_storage_ptr__)

{
  undefined8 stack0xffffffdc;
  Quaternion_L_double_G_ QVar1;
  Vec4_L_double_G_ VVar2;
  Quaternion_L_double_G_ *pQVar3;
  undefined4 in_stack_ffffffdc;
  
  pQVar3 = (Quaternion_L_double_G_ *)(uintptr_t)(GetOrientation((Quaternion_L_double_G_ *)&stack0xffffffdc));
  (*(uint32_t *)((char *)&(QVar1.W) + 4)) = 0;
  (*(uint32_t *)((char *)&(QVar1) + 0)) = (uint32_t)(uintptr_t)(*(undefined1 (*) [28])((int)&pQVar3->X + 4));
  VVar2.Z = 0;
  (*(uint32_t *)((char *)&(VVar2) + 0)) = ZEXT812(0);
  VVar2.Z = 0x3ff00000;
  VVar2.W = in_stack_ffffffdc;
  util__Rotate_double(__return_storage_ptr__,QVar1,(*(Vec3_L_double_G_ *)&(VVar2)));
  return __return_storage_ptr__;
}





//==== 007b44c0 GetRightVector_007b44c0 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: struct util__Vec3_L_double_G_  Body__GetRightVector(void)const  */

Vec3_L_double_G_ * Body__GetRightVector(Vec3_L_double_G_ *__return_storage_ptr__)

{
  undefined8 stack0xffffffdc;
  Quaternion_L_double_G_ QVar1;
  Vec4_L_double_G_ VVar2;
  Quaternion_L_double_G_ *pQVar3;
  undefined4 in_stack_ffffffdc;
  
  pQVar3 = (Quaternion_L_double_G_ *)(uintptr_t)(GetOrientation((Quaternion_L_double_G_ *)&stack0xffffffdc));
  (*(uint32_t *)((char *)&(QVar1.W) + 4)) = 0;
  (*(uint32_t *)((char *)&(QVar1) + 0)) = (uint32_t)(uintptr_t)(*(undefined1 (*) [28])((int)&pQVar3->X + 4));
  (*(uint64_t *)((char *)&(VVar2) + 12)) = 0;
  (*(uint32_t *)((char *)&(VVar2) + 0)) = ZEXT812(0x3ff00000);
  VVar2.W = in_stack_ffffffdc;
  util__Rotate_double(__return_storage_ptr__,QVar1,(*(Vec3_L_double_G_ *)&(VVar2)));
  return __return_storage_ptr__;
}





//==== 007b4fc0 GetUpVector_007b4fc0 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: struct util__Vec3_L_double_G_  Body__GetUpVector(void)const  */

Vec3_L_double_G_ * Body__GetUpVector(Vec3_L_double_G_ *__return_storage_ptr__)

{
  undefined8 stack0xffffffdc;
  Quaternion_L_double_G_ QVar1;
  Vec4_L_double_G_ VVar2;
  Quaternion_L_double_G_ *pQVar3;
  undefined4 in_stack_ffffffdc;
  
  pQVar3 = (Quaternion_L_double_G_ *)(uintptr_t)(GetOrientation((Quaternion_L_double_G_ *)&stack0xffffffdc));
  (*(uint32_t *)((char *)&(QVar1.W) + 4)) = 0;
  (*(uint32_t *)((char *)&(QVar1) + 0)) = (uint32_t)(uintptr_t)(*(undefined1 (*) [28])((int)&pQVar3->X + 4));
  (*(uint64_t *)((char *)&(VVar2) + 12)) = 0;
  (*(uint32_t *)((char *)&(VVar2) + 0)) = ZEXT412(0x3ff00000) << 0x40;
  VVar2.W = in_stack_ffffffdc;
  util__Rotate_double(__return_storage_ptr__,QVar1,(*(Vec3_L_double_G_ *)&(VVar2)));
  return __return_storage_ptr__;
}





//==== 007b65a0 SetSize_007b65a0 ====


/* private: void  util__Darray_L_structutil__AABB_L_structutil__Vec3_L_double_G__G___G___SetSize(int const &) */

void 
util__Darray_struct_util__AABB_struct_util__Vec3_double_______SetSize
          (Darray_L_struct_util__AABB_L_struct_util__Vec3_L_double_G___G___G_ *this,int *param_1)

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
     (puVar3 = (undefined4 *)(iVar4 * 0x30 + iVar2),
     puVar3 != (undefined4 *)(*(int *)(this + 8) * 0x30 + iVar2))) {
    do {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[8] = 0;
      puVar3[9] = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      puVar3 = puVar3 + 0xc;
    } while (puVar3 != (undefined4 *)(*(int *)(this + 8) * 0x30 + *(int *)(this + 4)));
  }
  *(int *)(this + 8) = iVar4;
  return;
}





//==== 007bb0a0 MakeTuple_util__Darray_Impact__bool_ ====


/* struct util__tuple2_L_classutil__Darray_L_structImpact_G__Cbool_G_ __cdecl util__MakeTuple_L_class_util__Darray_L_structImpact_G__Cbool_G_(class util__Darray_L_structImpact_G_,bool) */

Darray_L_struct_Impact_G_ * __cdecl
util__MakeTuple_class_util__Darray_struct_Impact__bool
          (Darray_L_struct_Impact_G_ *param_1,undefined **param_2,void *param_3,undefined4 param_4,
          undefined4 param_5,Darray_L_struct_Impact_G_ param_6)

{
  undefined **ppuStack_14;
  void *pvStack_10;
  
  Darray_L_struct_Impact_G___Darray_L_struct_Impact_G_
            ((Darray_L_struct_Impact_G_ *)&ppuStack_14,(Darray_L_struct_Impact_G_ *)&param_2);
  Darray_L_struct_Impact_G___Darray_L_struct_Impact_G_(param_1,(Darray_L_struct_Impact_G_ *)&ppuStack_14);
  param_1[0x10] = param_6;
  ppuStack_14 = &vftable_492;
  if (pvStack_10 != (void *)0x0) {
    port_op_delete(pvStack_10);
  }
  pvStack_10 = (void *)0x0;
  ppuStack_14 = (undefined **)(&vftable);
  param_2 = &vftable_492;
  if (param_3 != (void *)0x0) {
    port_op_delete(param_3);
  }
  return param_1;
}





//==== 007bb380 SkewLinesNearestPoints_0_double_ ====


/* struct util__tuple2_L_double_Cdouble_G_ __cdecl util__SkewLinesNearestPoints_0_double(struct
   util__Line3_L_double_G_,struct util__Line3_L_double_G_) */

tuple2_L_double_Cdouble_G_ * __cdecl
util__SkewLinesNearestPoints_0_double
          (tuple2_L_double_Cdouble_G_ *__return_storage_ptr__,Line3_L_double_G_ param_1,Line3_L_double_G_ param_2
          )

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 in_stack_00000008;
  double dStack_60;
  double dStack_58;
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
  dVar2 = (double)(*(uint64_t *)((char *)&(param_1) + 20)) - (double)CONCAT44(param_1.A.X,in_stack_00000008);
  dVar3 = (double)CONCAT44(param_1.A.X,in_stack_00000008) -
          (double)CONCAT44(param_2.A.X,param_1.B.W);
  dVar6 = (double)(*(uint64_t *)((char *)&(param_1.B) + 4)) - (double)(*(uint64_t *)((char *)&(param_1.A) + 4));
  dVar7 = (double)(*(uint64_t *)((char *)&(param_1.B) + 12)) - (double)(*(uint64_t *)((char *)&(param_1.A) + 12));
  dVar8 = (double)(*(uint64_t *)((char *)&(param_2) + 20)) - (double)CONCAT44(param_2.A.X,param_1.B.W);
  dVar4 = (double)(*(uint64_t *)((char *)&(param_2.B) + 4)) - (double)(*(uint64_t *)((char *)&(param_2.A) + 4));
  dVar5 = (double)(*(uint64_t *)((char *)&(param_2.B) + 12)) - (double)(*(uint64_t *)((char *)&(param_2.A) + 12));
  dStack_48 = dVar6 * dVar6 + dVar2 * dVar2 + dVar7 * dVar7;
  dStack_38 = dVar4 * dVar4 + dVar8 * dVar8 + dVar5 * dVar5;
  dStack_40 = dVar4 * dVar6 + dVar8 * dVar2 + dVar5 * dVar7;
  dStack_58 = ((double)(*(uint64_t *)((char *)&(param_1.A) + 4)) - (double)(*(uint64_t *)((char *)&(param_2.A) + 4))) * dVar6 + dVar3 * dVar2 +
              ((double)(*(uint64_t *)((char *)&(param_1.A) + 12)) - (double)(*(uint64_t *)((char *)&(param_2.A) + 12))) * dVar7;
  dStack_50 = dStack_38 * dStack_48;
  dStack_10 = ((double)(*(uint64_t *)((char *)&(param_1.A) + 4)) - (double)(*(uint64_t *)((char *)&(param_2.A) + 4))) * dVar4 + dVar3 * dVar8 +
              ((double)(*(uint64_t *)((char *)&(param_1.A) + 12)) - (double)(*(uint64_t *)((char *)&(param_2.A) + 12))) * dVar5;
  dStack_60 = dStack_40 * dStack_40;
  dStack_30 = dStack_50 - dStack_60;
  dStack_18 = 1e-08;
  dStack_28 = dStack_30;
  dStack_20 = dStack_30;
  bVar1 = Equals_L_double_G_(&dStack_50,&dStack_60,&dStack_18);
  dVar2 = dStack_10;
  if (bVar1) {
    dStack_18 = 0.0;
    dStack_30 = 1.0;
    dStack_20 = dStack_38;
  }
  else {
    dStack_18 = dStack_10 * dStack_40 - dStack_58 * dStack_38;
    if (0.0 <= dStack_18) {
      dVar2 = dStack_10 * dStack_48 - dStack_58 * dStack_40;
      if (dStack_28 < dStack_18) {
        dStack_18 = dStack_28;
        dStack_20 = dStack_38;
        dVar2 = dStack_10 + dStack_40;
      }
    }
    else {
      dStack_18 = 0.0;
      dStack_20 = dStack_38;
    }
  }
  dStack_10 = dVar2;
  if (0.0 <= dStack_10) {
    if (dStack_20 < dStack_10) {
      dVar2 = dStack_40 - dStack_58;
      dStack_10 = dStack_20;
      if (0.0 <= dVar2) {
        dStack_18 = dStack_30;
        if (dVar2 <= dStack_48) {
          dStack_30 = dStack_48;
          dStack_18 = dVar2;
        }
      }
      else {
        dStack_18 = 0.0;
      }
    }
  }
  else {
    dVar2 = -dStack_58;
    dStack_10 = 0.0;
    if (0.0 <= dVar2) {
      dStack_18 = dStack_30;
      if (dVar2 <= dStack_48) {
        dStack_30 = dStack_48;
        dStack_18 = dVar2;
      }
    }
    else {
      dStack_18 = 0.0;
    }
  }
  dStack_28 = dStack_28 * 1e-08;
  dStack_50 = Abs(&dStack_18);
  if (dStack_28 < dStack_50) {
    dStack_38 = dStack_18 / dStack_30;
  }
  else {
    dStack_38 = 0.0;
  }
  dStack_50 = Abs(&dStack_10);
  if (dStack_28 < dStack_50) {
    dVar2 = dStack_10 / dStack_20;
  }
  else {
    dVar2 = 0.0;
  }
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  dVar3 = dStack_38;
  if (dStack_38 <= 0.0) {
    dVar3 = 0.0;
  }
  if (1.0 <= dVar2) {
    dVar2 = 1.0;
  }
  if (1.0 <= dVar3) {
    dVar3 = 1.0;
  }
  __return_storage_ptr__->Value2 = dVar2;
  __return_storage_ptr__->Value1 = dVar3;
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}





//==== 007bbbd0 Darray_util__Line3_double___ ====


/* public:  util__Darray_L_structutil__Line3_L_double_G__G___Darray_L_structutil__Line3_L_double_G___G_(int) */

Darray_L_struct_util__Line3_L_double_G___G_ * 
util__Darray_struct_util__Line3_double_____Darray_struct_util__Line3_double
          (Darray_L_struct_util__Line3_L_double_G___G_ *this,int param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  *(undefined ***)this = &vftable_492;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(int *)(this + 0xc) = param_1;
  if ((param_1 < 0) || (0x3fffffff < param_1)) {
    *(undefined4 *)(this + 0xc) = 0;
  }
  else if (0 < param_1) {
    pvVar2 = (void *)(uintptr_t)(port_op_new(-(uint)((int)((ulonglong)(uint)param_1 * 0x30 >> 0x20) != 0) |
                            (uint)((ulonglong)(uint)param_1 * 0x30)));
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else if (param_1 != 0) {
      puVar3 = (undefined4 *)((int)pvVar2 + 0x28);
      do {
        puVar3[-10] = 0;
        puVar3[-9] = 0;
        puVar3[-8] = 0;
        puVar3[-7] = 0;
        puVar3[-6] = 0;
        puVar3[-5] = 0;
        puVar3[-4] = 0;
        puVar3[-3] = 0;
        puVar3[-2] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        param_1 = param_1 + -1;
        puVar3 = puVar3 + 0xc;
      } while (param_1 != 0);
    }
    iVar5 = 0;
    *(void **)(this + 4) = pvVar2;
    if (0 < *(int *)(this + 0xc)) {
      iVar4 = 0;
      do {
        iVar1 = *(int *)(this + 4);
        iVar4 = iVar4 + 0x30;
        iVar5 = iVar5 + 1;
        puVar3 = (undefined4 *)(iVar1 + -0x30 + iVar4);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
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





//==== 007bbca0 Darray_util__tuple3_util__WeakPtr_Body__double_double___ ====


/* public:  util__Darray_L_structutil__tuple3_L_classutil__WeakPtr_L_class_Body_G__Cdouble_Cdouble_G__G___Darray_L_structutil__tuple3_L_classutil__WeakPtr_L_classBody_G__Cdouble_Cdouble_G___G_(class util__Darray_L_structutil__tuple3_L_classutil__WeakPtr_L_classBody_G__Cdouble_Cdouble_G__G_ const
   &) */

Darray_L_struct_util__tuple3_L_class_util__WeakPtr_L_class_Body_G__Cdouble_Cdouble_G___G_ * 
util__Darray_struct_util__tuple3_class_util__WeakPtr_class_Body__double_double_____Darray_struct_util__tuple3_class_util__WeakPtr_class_Body__double_double
          (Darray_L_struct_util__tuple3_L_class_util__WeakPtr_L_class_Body_G__Cdouble_Cdouble_G___G_ *this,
          Darray_L_struct_util__tuple3_L_class_util__WeakPtr_L_class_Body_G__Cdouble_Cdouble_G___G_ *param_1)

{
  uint *puVar1;
  ReferenceController *this_00;
  ReferenceController *this_01;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iStack_8;
  
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = &vftable_494;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  iStack_8 = (**(code **)(*(int *)param_1 + 0xc))();
  SetSize(this,&iStack_8);
  uVar4 = *(uint *)(this + 0xc);
  uVar3 = -(uint)((int)((ulonglong)uVar4 * 0x18 >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 0x18);
  puVar2 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
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
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5 = puVar5 + 6;
    }
  }
  *(uint **)(this + 4) = puVar2;
  puVar5 = *(uint **)(param_1 + 4);
  if (puVar5 != puVar5 + *(int *)(param_1 + 8) * 6) {
    puVar2 = puVar2 + 1;
    do {
      this_00 = (ReferenceController *)*puVar2;
      puVar2[-1] = *puVar5;
      this_01 = (ReferenceController *)puVar5[1];
      *puVar2 = (uint)this_01;
      if (this_01 != (ReferenceController *)0x0) {
        util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(this_01);
      }
      if (this_00 != (ReferenceController *)0x0) {
        ReferenceController__ReleaseWeakReference(this_00);
      }
      *(undefined8 *)(puVar2 + 1) = *(undefined8 *)(puVar5 + 2);
      puVar1 = puVar5 + 4;
      puVar5 = puVar5 + 6;
      *(undefined8 *)(puVar2 + 3) = *(undefined8 *)puVar1;
      puVar2 = puVar2 + 6;
    } while (puVar5 != (uint *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 0x18));
    return this;
  }
  return this;
}





//==== 007bbdd0 Darray_util__tuple3_util__WeakPtr_Body__double_double____007bbdd0 ====


/* public:  util__Darray_L_structutil__tuple3_L_classutil__WeakPtr_L_class_Body_G__Cdouble_Cdouble_G__G___Darray_L_structutil__tuple3_L_classutil__WeakPtr_L_classBody_G__Cdouble_Cdouble_G___G_(int) */

Darray_L_struct_util__tuple3_L_class_util__WeakPtr_L_class_Body_G__Cdouble_Cdouble_G___G_ * 
util__Darray_struct_util__tuple3_class_util__WeakPtr_class_Body__double_double_____Darray_struct_util__tuple3_class_util__WeakPtr_class_Body__double_double__o2
          (Darray_L_struct_util__tuple3_L_class_util__WeakPtr_L_class_Body_G__Cdouble_Cdouble_G___G_ *this,
          int param_1)

{
  ReferenceController *this_00;
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  *(undefined ***)this = &vftable_494;
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
          piVar2[3] = 0;
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
        puVar5 = (undefined4 *)(*(int *)(this + 4) + iVar4);
        *puVar5 = 0;
        this_00 = (ReferenceController *)puVar5[1];
        puVar5[1] = 0;
        if (this_00 != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(this_00);
        }
        param_1 = param_1 + 1;
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        iVar4 = iVar4 + 0x18;
      } while (param_1 < *(int *)(this + 0xc));
      return this;
    }
  }
  return this;
}





//==== 007bbed0 Darray_util__tuple3_util__WeakPtr_Body__double_double____007bbed0 ====


/* public: virtual  Darray_L_structutil__tuple3_L_classutil__WeakPtr_L_class_Body_G__Cdouble_Cdouble_G__G___dtor(void) */

void __thiscall
util__Darray_struct_util__tuple3_class_util__WeakPtr_class_Body__double_double______Darray_struct_util__tuple3_class_util__WeakPtr_class_Body__double_double(Darray_L_struct_util__tuple3_L_class_util__WeakPtr_L_class_Body_G__Cdouble_Cdouble_G___G_ *this)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(this + 4);
  *(undefined ***)this = &vftable_494;
  if (iVar4 != 0) {
    piVar1 = (int *)(iVar4 + -4);
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 + 4 + iVar3 * 0x18;
      do {
        puVar2 = (undefined4 *)(iVar4 + -0x18);
        iVar4 = iVar4 + -0x18;
        iVar3 = iVar3 + -1;
        if ((ReferenceController *)*puVar2 != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference((ReferenceController *)*puVar2);
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





//==== 007bbf50 Darray_Impact__007bbf50 ====


/* public: virtual  Darray_L_structImpact_G___dtor(void) */

void __thiscall util__Darray_struct_Impact____Darray_struct_Impact(Darray_L_struct_Impact_G_ *this)

{
  *(undefined ***)this = &vftable_492;
  if (*(void **)(this + 4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 4));
  }
  *(undefined ***)this = (undefined **)(&vftable);
  *(undefined4 *)(this + 4) = 0;
  return;
}





//==== 007bbf80 operator__007bbf80 ====


/* public: class util__Darray_L_structutil__Line3_L_double_G__G_ &  util__Darray_L_struct_util__Line3_L_double_G__G___op_assign(class util__Darray_L_structutil__Line3_L_double_G__G_ const &) */

Darray_L_struct_util__Line3_L_double_G___G_ * 
util__Darray_struct_util__Line3_double_____operator
          (Darray_L_struct_util__Line3_L_double_G___G_ *this,Darray_L_struct_util__Line3_L_double_G___G_ *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Darray_L_struct_util__Line3_L_double_G___G_ *pDVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  
  pDVar5 = param_1;
  param_1 = (Darray_L_struct_util__Line3_L_double_G___G_ *)(**(code **)(*(int *)param_1 + 0xc))();
  Darray_L_struct_util__AABB_L_struct_util__Vec3_L_double_G___G___G___SetSize
            ((Darray_L_struct_util__AABB_L_struct_util__Vec3_L_double_G___G___G_ *)this,(int *)&param_1);
  iVar6 = (**(code **)(*(int *)pDVar5 + 0xc))();
  if (iVar6 == 0) {
    (**(code **)(*(int *)this + 0x10))();
    return this;
  }
  uVar9 = *(uint *)(this + 8);
  if ((int)uVar9 < 0) {
    param_1 = (Darray_L_struct_util__Line3_L_double_G___G_ *)0x0;
    Darray_L_struct_util__AABB_L_struct_util__Vec3_L_double_G___G___G___SetSize
              ((Darray_L_struct_util__AABB_L_struct_util__Vec3_L_double_G___G___G_ *)this,(int *)&param_1);
    uVar9 = *(uint *)(this + 8);
  }
  if (0x3fffffff < (int)uVar9) {
    param_1 = (Darray_L_struct_util__Line3_L_double_G___G_ *)0x3fffffff;
    Darray_L_struct_util__AABB_L_struct_util__Vec3_L_double_G___G___G___SetSize
              ((Darray_L_struct_util__AABB_L_struct_util__Vec3_L_double_G___G___G_ *)this,(int *)&param_1);
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
             port_op_new(-(uint)((int)((ulonglong)uVar10 * 0x30 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar10 * 0x30));
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else if (uVar10 != 0) {
      puVar8 = puVar7 + 10;
      do {
        puVar8[-10] = 0;
        puVar8[-9] = 0;
        puVar8[-8] = 0;
        puVar8[-7] = 0;
        puVar8[-6] = 0;
        puVar8[-5] = 0;
        puVar8[-4] = 0;
        puVar8[-3] = 0;
        puVar8[-2] = 0;
        puVar8[-1] = 0;
        *puVar8 = 0;
        puVar8[1] = 0;
        uVar10 = uVar10 - 1;
        puVar8 = puVar8 + 0xc;
      } while (uVar10 != 0);
      *(undefined4 **)(this + 4) = puVar7;
      goto LAB_007bc0a3;
    }
    *(undefined4 **)(this + 4) = puVar7;
  }
  else {
    puVar7 = *(undefined4 **)(this + 4);
  }
LAB_007bc0a3:
  puVar8 = *(undefined4 **)(pDVar5 + 4);
  if (puVar8 != puVar8 + *(int *)(pDVar5 + 8) * 0xc) {
    do {
      uVar2 = puVar8[1];
      uVar3 = puVar8[2];
      uVar4 = puVar8[3];
      *puVar7 = *puVar8;
      puVar7[1] = uVar2;
      puVar7[2] = uVar3;
      puVar7[3] = uVar4;
      uVar2 = puVar8[5];
      uVar3 = puVar8[6];
      uVar4 = puVar8[7];
      puVar7[4] = puVar8[4];
      puVar7[5] = uVar2;
      puVar7[6] = uVar3;
      puVar7[7] = uVar4;
      puVar1 = puVar8 + 8;
      uVar2 = puVar8[9];
      uVar3 = puVar8[10];
      uVar4 = puVar8[0xb];
      puVar8 = puVar8 + 0xc;
      puVar7[8] = *puVar1;
      puVar7[9] = uVar2;
      puVar7[10] = uVar3;
      puVar7[0xb] = uVar4;
      puVar7 = puVar7 + 0xc;
    } while (puVar8 != (undefined4 *)(*(int *)(pDVar5 + 8) * 0x30 + *(int *)(pDVar5 + 4)));
  }
  return this;
}





//==== 007bc670 operator___007bc670 ====


/* public: class util__Darray_L_structutil__Line3_L_double_G__G_ &  util__Darray_L_struct_util__Line3_L_double_G__G___op_iadd(class util__Darray_L_structutil__Line3_L_double_G__G_ const &) */

Darray_L_struct_util__Line3_L_double_G___G_ * 
util__Darray_struct_util__Line3_double_____operator__o2
          (Darray_L_struct_util__Line3_L_double_G___G_ *this,Darray_L_struct_util__Line3_L_double_G___G_ *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Darray_L_struct_util__Line3_L_double_G___G_ *pDVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  pDVar4 = param_1;
  if (*(int *)(this + 8) != 0) {
    iVar5 = (**(code **)(*(int *)param_1 + 0xc))();
    if (iVar5 != 0) {
      iVar5 = *(int *)(this + 8);
      iVar6 = (**(code **)(*(int *)pDVar4 + 0xc))();
      param_1 = (Darray_L_struct_util__Line3_L_double_G___G_ *)(iVar6 + *(int *)(this + 8));
      Darray_L_struct_util__AABB_L_struct_util__Vec3_L_double_G___G___G___SetSize
                ((Darray_L_struct_util__AABB_L_struct_util__Vec3_L_double_G___G___G_ *)this,(int *)&param_1);
      Darray_L_struct_util__AABB_L_struct_util__Vec3_L_double_G___G___G___CheckSize
                ((Darray_L_struct_util__AABB_L_struct_util__Vec3_L_double_G___G___G_ *)this,iVar5);
      puVar8 = *(undefined4 **)(pDVar4 + 4);
      puVar7 = (undefined4 *)(iVar5 * 0x30 + *(int *)(this + 4));
      if (puVar7 != (undefined4 *)(*(int *)(this + 8) * 0x30 + *(int *)(this + 4))) {
        do {
          uVar1 = puVar8[1];
          uVar2 = puVar8[2];
          uVar3 = puVar8[3];
          *puVar7 = *puVar8;
          puVar7[1] = uVar1;
          puVar7[2] = uVar2;
          puVar7[3] = uVar3;
          uVar1 = puVar8[5];
          uVar2 = puVar8[6];
          uVar3 = puVar8[7];
          puVar7[4] = puVar8[4];
          puVar7[5] = uVar1;
          puVar7[6] = uVar2;
          puVar7[7] = uVar3;
          uVar1 = puVar8[9];
          uVar2 = puVar8[10];
          uVar3 = puVar8[0xb];
          puVar7[8] = puVar8[8];
          puVar7[9] = uVar1;
          puVar7[10] = uVar2;
          puVar7[0xb] = uVar3;
          puVar7 = puVar7 + 0xc;
          puVar8 = puVar8 + 0xc;
        } while (puVar7 != (undefined4 *)(*(int *)(this + 8) * 0x30 + *(int *)(this + 4)));
      }
    }
    return this;
  }
  util__Darray_struct_util__Line3_double_____operator(this,param_1);
  return this;
}





//==== 007bc720 scalar_deleting_destructor_007bc720 ====


/* public: virtual void * __thiscall util__Darray_L_structutil__tuple3_L_classutil__WeakPtr_L_class_Body_G__Cdouble_Cdouble_G__G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_util__tuple3_class_util__WeakPtr_class_Body__double_double______scalar_deleting_destructor__o2
          (Darray_L_struct_util__tuple3_L_class_util__WeakPtr_L_class_Body_G__Cdouble_Cdouble_G___G_ *this,
          uint param_1)

{
  util__Darray_struct_util__tuple3_class_util__WeakPtr_class_Body__double_double______scalar_deleting_destructor(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 007bc750 CheckSize_007bc750 ====


/* private: bool  util__Darray_L_structutil__tuple3_L_classutil__WeakPtr_L_class_Body_G__Cdouble_Cdouble_G__G___CheckSize(int) */

bool 
util__Darray_struct_util__tuple3_class_util__WeakPtr_class_Body__double_double_____CheckSize
          (Darray_L_struct_util__tuple3_L_class_util__WeakPtr_L_class_Body_G__Cdouble_Cdouble_G___G_ *this,
          int param_1)

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
  uVar2 = -(uint)((int)((ulonglong)uVar4 * 0x18 >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 0x18);
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
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3 = puVar3 + 6;
    }
  }
  puVar3 = *(uint **)(this + 4);
  if (puVar3 != (uint *)0x0) {
    puVar7 = puStack_c + *(int *)(this + 8) * 6;
    if (puVar3 != puVar3 + param_1 * 6) {
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
        *(undefined8 *)(puVar5 + 1) = *(undefined8 *)(puVar6 + 2);
        puVar3 = puVar6 + 4;
        puVar6 = puVar6 + 6;
        *(undefined8 *)(puVar5 + 3) = *(undefined8 *)puVar3;
        puVar5 = puVar5 + 6;
        puVar3 = *(uint **)(this + 4);
      } while (puVar6 != puVar3 + param_1 * 6);
    }
    if (puVar3 != (uint *)0x0) {
      uVar2 = puVar3[-1];
      if (uVar2 == 0) {
        uVar2 = 0;
      }
      else {
        puVar7 = puVar3 + uVar2 * 6 + 1;
        do {
          puVar6 = puVar7 + -6;
          puVar7 = puVar7 + -6;
          uVar2 = uVar2 - 1;
          if ((ReferenceController *)*puVar6 != (ReferenceController *)0x0) {
            ReferenceController__ReleaseWeakReference((ReferenceController *)*puVar6);
          }
        } while (uVar2 != 0);
        uVar2 = puVar3[-1];
      }
      port_op_delete(puVar3 + -1,uVar2 * 0x18 + 4);
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(uint **)(this + 4) = puStack_c;
  return bStack_5;
}





//==== 007bc940 CheckSizeDestructive_007bc940 ====


/* private: bool  util__Darray_L_structutil__tuple3_L_classutil__WeakPtr_L_class_Body_G__Cdouble_Cdouble_G__G___CheckSizeDestructive(void) */

bool 
util__Darray_struct_util__tuple3_class_util__WeakPtr_class_Body__double_double_____CheckSizeDestructive
          (Darray_L_struct_util__tuple3_L_class_util__WeakPtr_L_class_Body_G__Cdouble_Cdouble_G___G_ *this)

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
    SetSize(this,(int *)&piStack_c);
    iVar7 = *(int *)(this + 8);
  }
  bStack_5 = !bVar2;
  bVar2 = iVar7 < 0x40000000;
  if (!bVar2) {
    piStack_c = (int *)0x3fffffff;
    SetSize(this,(int *)&piStack_c);
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
        iVar7 = iVar7 + 4 + iVar8 * 0x18;
        do {
          puVar1 = (undefined4 *)(iVar7 + -0x18);
          iVar7 = iVar7 + -0x18;
          iVar8 = iVar8 + -1;
          if ((ReferenceController *)*puVar1 != (ReferenceController *)0x0) {
            ReferenceController__ReleaseWeakReference((ReferenceController *)*puVar1);
          }
        } while (iVar8 != 0);
        iVar8 = *piStack_c;
        uVar6 = bStack_5;
      }
      port_op_delete(piStack_c,iVar8 * 0x18 + 4);
    }
    uVar9 = *(uint *)(this + 0xc);
    *(undefined4 *)(this + 4) = 0;
    uVar5 = -(uint)((int)((ulonglong)uVar9 * 0x18 >> 0x20) != 0) | (uint)((ulonglong)uVar9 * 0x18);
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
          puVar4[2] = 0;
          puVar4[3] = 0;
          puVar4[4] = 0;
          puVar4[5] = 0;
          uVar9 = uVar9 - 1;
          puVar4 = puVar4 + 6;
        } while (uVar9 != 0);
        *(uint **)(this + 4) = puVar3;
        return (bool)uVar6;
      }
    }
    *(uint **)(this + 4) = puVar3;
  }
  return (bool)uVar6;
}





//==== 007bcab0 Clear_007bcab0 ====


/* public: virtual void  util__Darray_L_structutil__tuple3_L_classutil__WeakPtr_L_class_Body_G__Cdouble_Cdouble_G__G___Clear(void) */

void 
util__Darray_struct_util__tuple3_class_util__WeakPtr_class_Body__double_double_____Clear
          (Darray_L_struct_util__tuple3_L_class_util__WeakPtr_L_class_Body_G__Cdouble_Cdouble_G___G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 007bce60 GetCylinderExplosionPixelCount ====


/* int __cdecl Collision__GetCylinderExplosionPixelCount(class util__WeakPtr_L_class_SpacecraftComponent_G_) */

int __cdecl
Collision__GetCylinderExplosionPixelCount(undefined4 param_1,ReferenceController *param_2)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  ReferenceController *pRVar4;
  
  uVar3 = param_1;
  pRVar4 = param_2;
  if (param_2 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_2);
    util__ReferenceController__AddWeakReference(param_2);
  }
  dVar1 = GetPixelRadius_m(uVar3,pRVar4);
  pRVar4 = param_2;
  if (param_2 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_2);
    util__ReferenceController__AddWeakReference(param_2);
  }
  dVar2 = GetExternalExplosionTargetArea_m2(param_1,pRVar4);
  if (param_2 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_2);
  }
  return (int)(dVar2 / (dVar1 * 3.0 * dVar1 * 3.0));
}





//==== 007bd140 Intersects_007bd140 ====


/* public: bool  util__AABB_L_structutil__Vec3_L_double_G__G___Intersects(struct
   util__AABB_L_structutil__Vec3_L_double_G__G_ const &)const  */

bool 
util__AABB_struct_util__Vec3_double_____Intersects
          (AABB_L_struct_util__Vec3_L_double_G___G_ *this,AABB_L_struct_util__Vec3_L_double_G___G_ *param_1)

{
  bool bVar1;
  int iVar2;
  AABB_L_struct_util__Vec3_L_double_G___G_ *pAVar3;
  AABB_L_struct_util__Vec3_L_double_G___G_ *pAVar4;
  int iVar5;
  
  bVar1 = true;
  iVar5 = 0;
  do {
    if (bVar1 == false) {
LAB_007bd1eb:
      bVar1 = false;
    }
    else {
      pAVar4 = this;
      if (iVar5 != 0) {
        if (iVar5 == 1) {
          pAVar4 = this + 8;
        }
        else if (iVar5 == 2) {
          pAVar4 = this + 0x10;
        }
      }
      if (iVar5 == 0) {
LAB_007bd194:
        iVar2 = 0x18;
      }
      else if (iVar5 == 1) {
        iVar2 = 0x20;
      }
      else {
        if (iVar5 != 2) goto LAB_007bd194;
        iVar2 = 0x28;
      }
      if (*(double *)(param_1 + iVar2) < *(double *)pAVar4) goto LAB_007bd1eb;
      pAVar4 = this + 0x18;
      if (iVar5 != 0) {
        if (iVar5 == 1) {
          pAVar4 = this + 0x20;
        }
        else if (iVar5 == 2) {
          pAVar4 = this + 0x28;
        }
      }
      pAVar3 = param_1;
      if (iVar5 != 0) {
        if (iVar5 == 1) {
          pAVar3 = param_1 + 8;
        }
        else if (iVar5 == 2) {
          pAVar3 = param_1 + 0x10;
        }
      }
      if (*(double *)pAVar4 < *(double *)pAVar3) goto LAB_007bd1eb;
      bVar1 = true;
    }
    iVar5 = iVar5 + 1;
    if (2 < iVar5) {
      return bVar1;
    }
  } while( true );
}





//==== 007bd590 SetAll_007bd590 ====


/* public: virtual void  util__Darray_L_structutil__tuple3_L_classutil__WeakPtr_L_class_Body_G__Cdouble_Cdouble_G__G___SetAll(struct util__tuple3_L_classutil__WeakPtr_L_classBody_G__Cdouble_Cdouble_G_
   const &) */

void 
util__Darray_struct_util__tuple3_class_util__WeakPtr_class_Body__double_double_____SetAll
          (Darray_L_struct_util__tuple3_L_class_util__WeakPtr_L_class_Body_G__Cdouble_Cdouble_G___G_ *this,
          tuple3_L_class_util__WeakPtr_L_class_Body_G__Cdouble_Cdouble_G_ *param_1)

{
  ReferenceController *this_00;
  ReferenceController *this_01;
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this + 4);
  if (puVar1 != puVar1 + *(int *)(this + 8) * 6) {
    do {
      this_00 = (ReferenceController *)puVar1[1];
      *puVar1 = *(undefined4 *)param_1;
      this_01 = *(ReferenceController **)(param_1 + 4);
      puVar1[1] = (undefined4)(uintptr_t)(this_01);
      if (this_01 != (ReferenceController *)0x0) {
        util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(this_01);
      }
      if (this_00 != (ReferenceController *)0x0) {
        ReferenceController__ReleaseWeakReference(this_00);
      }
      *(undefined8 *)(puVar1 + 2) = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_1 + 0x10);
      puVar1 = puVar1 + 6;
    } while (puVar1 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x18));
  }
  return;
}





//==== 007bd610 SetSize_007bd610 ====


/* private: void  util__Darray_L_structutil__tuple3_L_classutil__WeakPtr_L_class_Body_G__Cdouble_Cdouble_G__G___SetSize(int const &) */

void 
util__Darray_struct_util__tuple3_class_util__WeakPtr_class_Body__double_double_____SetSize
          (Darray_L_struct_util__tuple3_L_class_util__WeakPtr_L_class_Body_G__Cdouble_Cdouble_G___G_ *this,
          int *param_1)

{
  ReferenceController *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
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
     (puVar4 = (undefined4 *)(iVar2 + iVar3 * 0x18),
     puVar4 != (undefined4 *)(iVar2 + *(int *)(this + 8) * 0x18))) {
    do {
      this_00 = (ReferenceController *)puVar4[1];
      *puVar4 = 0;
      puVar4[1] = 0;
      if (this_00 != (ReferenceController *)0x0) {
        ReferenceController__ReleaseWeakReference(this_00);
      }
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4 = puVar4 + 6;
    } while (puVar4 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x18));
  }
  *(int *)(this + 8) = iVar3;
  return;
}





//==== 007c0830 SplitCircleIntoDiscretePixels ====


/* class util__Darray_L_structutil__Vec2_L_double_G__G_ __cdecl
   Collision__SplitCircleIntoDiscretePixels(double,double) */

Darray_L_struct_util__Vec2_L_double_G___G_ * __cdecl
Collision__SplitCircleIntoDiscretePixels(double param_1,double param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  Maybe_L_double_G_ *pMVar5;
  int iVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  int iVar9;
  int iVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 in_stack_00000014;
  undefined1 auStack_54 [16];
  double dStack_44;
  double dStack_3c;
  double dStack_34;
  double dStack_2c;
  double dStack_24;
  uint uStack_1c;
  int iStack_18;
  double dStack_14;
  int iStack_c;
  int iStack_8;
  
  dStack_14 = (double)CONCAT44((*(uint32_t*)&(param_2)),(*(uint32_t*)((char*)&(param_1)+4))) +
              (double)CONCAT44((*(uint32_t*)&(param_2)),(*(uint32_t*)((char*)&(param_1)+4)));
  dVar12 = (double)CONCAT44(in_stack_00000014,(*(uint32_t*)((char*)&(param_2)+4))) +
           (double)CONCAT44(in_stack_00000014,(*(uint32_t*)((char*)&(param_2)+4)));
  dStack_24 = 3.0;
  pMVar5 = util__Sqrt((Maybe_L_double_G_ *)auStack_54,&dStack_24);
  if (pMVar5->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar15 = -0.5;
  dVar13 = dStack_14 / dVar12;
  dStack_3c = pMVar5->Data * 0.5 * dVar12;
  if (dStack_14 / dStack_3c < 0.0) {
    lVar3 = 0xbfe00000;
  }
  else {
    lVar3 = 0x3fe00000;
  }
  iVar10 = (int)(dStack_14 / dStack_3c + (double)(lVar3 << 0x20));
  if (0.0 <= dVar13) {
    dVar15 = 0.5;
  }
  dStack_14 = dStack_14 * 0.5;
  #if defined(__x86_64__)
  *(undefined16 *)(uintptr_t)(*(uint32_t*)&(param_1)) = ZEXT816(0);
#else
  { undefined16 *cde_p16 = (undefined16 *)(uintptr_t)(*(uint32_t*)&(param_1));
    cde_p16->cde_lo = 0; cde_p16->cde_hi = 0; }
#endif
  *(undefined ***)(*(uint32_t*)&(param_1)) = (undefined **)(&vftable_12);
  *(undefined4 *)((*(uint32_t*)&(param_1)) + 4) = 0;
  *(undefined4 *)((*(uint32_t*)&(param_1)) + 8) = 0;
  iVar6 = (int)(dVar13 + dVar15) + 1;
  if (iVar10 < 1) {
    iVar10 = 1;
  }
  iStack_8 = 1;
  if (0 < iVar6) {
    iStack_8 = iVar6;
  }
  uVar11 = iStack_8 * iVar10;
  *(uint *)((*(uint32_t*)&(param_1)) + 0xc) = uVar11;
  iStack_18 = iVar10;
  if (((int)uVar11 < 0) || (0x3fffffff < (int)uVar11)) {
    *(undefined4 *)((*(uint32_t*)&(param_1)) + 0xc) = 0;
  }
  else if (0 < (int)uVar11) {
    pauVar7 = (undefined1 (*) [16])
              port_op_new(-(uint)((int)((ulonglong)uVar11 * 0x10 >> 0x20) != 0) |
                             (uint)((ulonglong)uVar11 * 0x10));
    if (pauVar7 == (undefined1 (*) [16])0x0) {
      pauVar7 = (undefined1 (*) [16])0x0;
    }
    else if (uVar11 != 0) {
      pauVar8 = pauVar7;
      do {
#if defined(__x86_64__)
        *(undefined16 *)pauVar8 = ZEXT816(0);
#else
        ((undefined16 *)pauVar8)->cde_lo = 0;
        ((undefined16 *)pauVar8)->cde_hi = 0;
#endif
        uVar11 = uVar11 - 1;
        pauVar8 = pauVar8 + 1;
      } while (uVar11 != 0);
    }
    iVar6 = 0;
    *(undefined1 (**) [16])((*(uint32_t*)&(param_1)) + 4) = pauVar7;
    if (0 < *(int *)((*(uint32_t*)&(param_1)) + 0xc)) {
      iVar9 = 0;
      do {
        iVar6 = iVar6 + 1;
        puVar1 = (undefined4 *)(iVar9 + *(int *)((*(uint32_t*)&(param_1)) + 4));
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        iVar9 = iVar9 + 0x10;
      } while (iVar6 < *(int *)((*(uint32_t*)&(param_1)) + 0xc));
    }
  }
  uStack_1c = 0;
  iVar6 = iStack_8;
  iVar9 = iStack_18;
  dVar13 = dStack_14;
  if (0 < iVar10) {
    do {
      iVar10 = 0;
      if (0 < iVar6) {
        dVar14 = (double)(uStack_1c & 1) * 0.5;
        dVar16 = (double)CONCAT44((*(uint32_t*)&(param_2)),(*(uint32_t*)((char*)&(param_1)+4))) *
                 (double)CONCAT44((*(uint32_t*)&(param_2)),(*(uint32_t*)((char*)&(param_1)+4)));
        (*(uint64_t*)((char*)&(auStack_54)+8)) = ((double)(int)uStack_1c + 0.5) * dStack_3c - dVar13;
        dVar15 = (double)(*(uint64_t*)((char*)&(auStack_54)+8)) * (double)(*(uint64_t*)((char*)&(auStack_54)+8));
        iVar6 = iStack_8;
        dStack_34 = dVar15;
        dStack_2c = dVar14;
        dStack_24 = dVar16;
        do {
          dStack_44 = ((double)iVar10 + dVar14) * dVar12 - dVar13;
          if (dStack_44 * dStack_44 + dVar15 <= dVar16) {
            iVar6 = *(int *)((*(uint32_t*)&(param_1)) + 8);
            iStack_c = iVar6 + 1;
            util__Darray_struct_util__Vec2_double_____SetSize((Darray_L_struct_util__Vec2_L_double_G___G_*)((Darray_L_struct_util__Vec2_L_double_G___G_*)((*(uint32_t*)&(param_1)))),&iStack_c);
            bVar4 = util__Darray_struct_util__Vec2_double_____CheckSize((Darray_L_struct_util__Vec2_L_double_G___G_*)((Darray_L_struct_util__Vec2_L_double_G___G_*)((*(uint32_t*)&(param_1)))),iVar6);
            iVar6 = iStack_8;
            dVar15 = dStack_34;
            dVar16 = dStack_24;
            dVar13 = dStack_14;
            dVar14 = dStack_2c;
            if (bVar4) {
              iVar9 = *(int *)((*(uint32_t*)&(param_1)) + 8);
              iVar2 = *(int *)((*(uint32_t*)&(param_1)) + 4);
              *(double *)(iVar2 + -0x10 + iVar9 * 0x10) = dStack_44;
              *(undefined8 *)(iVar2 + -8 + iVar9 * 0x10) = (*(uint64_t*)((char*)&(auStack_54)+8));
            }
          }
          iVar10 = iVar10 + 1;
          iVar9 = iStack_18;
        } while (iVar10 < iVar6);
      }
      uStack_1c = uStack_1c + 1;
    } while ((int)uStack_1c < iVar9);
  }
  if (*(int *)((*(uint32_t*)&(param_1)) + 8) == 0) {
    iStack_c = 1;
    util__Darray_struct_util__Vec2_double_____SetSize((Darray_L_struct_util__Vec2_L_double_G___G_*)((Darray_L_struct_util__Vec2_L_double_G___G_*)((*(uint32_t*)&(param_1)))),&iStack_c);
    bVar4 = util__Darray_struct_util__Vec2_double_____CheckSize((Darray_L_struct_util__Vec2_L_double_G___G_*)((Darray_L_struct_util__Vec2_L_double_G___G_*)((*(uint32_t*)&(param_1)))),0);
    if (bVar4) {
      puVar1 = (undefined4 *)
               (*(int *)((*(uint32_t*)&(param_1)) + 4) + -0x10 + *(int *)((*(uint32_t*)&(param_1)) + 8) * 0x10);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      return (Darray_L_struct_util__Vec2_L_double_G___G_ *)(uintptr_t) (*(uint32_t*)&(param_1));
    }
  }
  return (Darray_L_struct_util__Vec2_L_double_G___G_ *)(uintptr_t) (*(uint32_t*)&(param_1));
}





//==== 007c1690 GetBounds_007c1690 ====


/* public: static struct util__AABB_L_structutil__Vec3_L_double_G__G_ __cdecl
   Collision__RTreeNode__GetBounds(class util__Darray_L_classutil__WeakPtr_L_classBody_G__G_ const &) */

void __cdecl Collision__RTreeNode__GetBounds(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_1)

{
  undefined8 stack0xfffffffc;
  double dVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  undefined **ppuStack_34;
  void *pvStack_30;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined8 uStack_14;
  uint uStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  uStack_c = uStack_c & 0xffffff00;
  piVar2 = (int *)FUN_007c0d80(&ppuStack_34);
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar3 = *piVar2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  iVar3 = (**(code **)(uintptr_t)(iVar3 + 0xc))();
  if (iVar3 < 1) {
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
  }
  else {
    uStack_c = 0;
    puVar4 = (undefined4 *)(**(code **)*piVar2)(&uStack_c);
    uStack_24 = *puVar4;
    uStack_20 = puVar4[1];
    uStack_1c = puVar4[2];
    uStack_18 = puVar4[3];
    uStack_14 = *(undefined8 *)(puVar4 + 4);
  }
  *(undefined4 *)param_1 = uStack_24;
  *(undefined4 *)(param_1 + 4) = uStack_20;
  *(undefined4 *)(param_1 + 8) = uStack_1c;
  *(undefined4 *)(param_1 + 0xc) = uStack_18;
  *(undefined8 *)(param_1 + 0x10) = uStack_14;
  iVar3 = (**(code **)(uintptr_t)(*piVar2 + 0xc))();
  if (iVar3 < 1) {
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
  }
  else {
    uStack_c = 0;
    iVar3 = (**(code **)*piVar2)(&uStack_c);
    uStack_24 = *(undefined4 *)(iVar3 + 0x18);
    uStack_20 = *(undefined4 *)(iVar3 + 0x1c);
    uStack_1c = *(undefined4 *)(iVar3 + 0x20);
    uStack_18 = *(undefined4 *)(iVar3 + 0x24);
    uStack_14 = *(undefined8 *)(iVar3 + 0x28);
  }
  uStack_c = 0;
  *(undefined4 *)(param_1 + 0x18) = uStack_24;
  *(undefined4 *)(param_1 + 0x1c) = uStack_20;
  *(undefined4 *)(param_1 + 0x20) = uStack_1c;
  *(undefined4 *)(param_1 + 0x24) = uStack_18;
  *(undefined8 *)(param_1 + 0x28) = uStack_14;
  iVar3 = (**(code **)(uintptr_t)(*piVar2 + 0xc))();
  if ((int)uStack_c < iVar3) {
    do {
      pdVar5 = (double *)(**(code **)*piVar2)(&uStack_c);
      dVar7 = *(double *)param_1;
      if (*pdVar5 <= *(double *)param_1) {
        dVar7 = *pdVar5;
      }
      dVar1 = *(double *)(param_1 + 8);
      if (pdVar5[1] <= *(double *)(param_1 + 8)) {
        dVar1 = pdVar5[1];
      }
      dVar6 = *(double *)(param_1 + 0x10);
      if (pdVar5[2] <= *(double *)(param_1 + 0x10)) {
        dVar6 = pdVar5[2];
      }
      *(double *)param_1 = dVar7;
      *(double *)(param_1 + 8) = dVar1;
      *(double *)(param_1 + 0x10) = dVar6;
      dVar7 = *(double *)(param_1 + 0x18);
      if (*(double *)(param_1 + 0x18) <= pdVar5[3]) {
        dVar7 = pdVar5[3];
      }
      dVar1 = *(double *)(param_1 + 0x20);
      if (*(double *)(param_1 + 0x20) <= pdVar5[4]) {
        dVar1 = pdVar5[4];
      }
      dVar6 = *(double *)(param_1 + 0x28);
      if (*(double *)(param_1 + 0x28) <= pdVar5[5]) {
        dVar6 = pdVar5[5];
      }
      uStack_c = uStack_c + 1;
      *(double *)(param_1 + 0x18) = dVar7;
      *(double *)(param_1 + 0x20) = dVar1;
      *(double *)(param_1 + 0x28) = dVar6;
      iVar3 = (**(code **)(uintptr_t)(*piVar2 + 0xc))();
    } while ((int)uStack_c < iVar3);
  }
  ppuStack_34 = &vftable_492;
  if (pvStack_30 != (void *)0x0) {
    port_op_delete(pvStack_30);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 007c19b0 GetClassID_007c19b0 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual unsigned long  CapitalShipComponent__GetClassID(void)const  */

ulong CapitalShipComponent__GetClassID(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_ee299c4e__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_ee299c4e__thread_safe_static_guard_0__);
    if ( cde_l2_ee299c4e__thread_safe_static_guard_0__ == -1) {
       cde_l2_97a135c8_ID = util__GetHash("CapitalShipComponent");
      _Init_thread_footer(& cde_l2_ee299c4e__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_97a135c8_ID;
}





//==== 007c1a10 GetClassID_007c1a10 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual unsigned long  Component__GetClassID(void)const  */

ulong Component__GetClassID(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_0edfd0a5__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_0edfd0a5__thread_safe_static_guard_0__);
    if ( cde_l2_0edfd0a5__thread_safe_static_guard_0__ == -1) {
       cde_l2_97a135c8_ID =
           util__GetHash("Component");
      _Init_thread_footer(& cde_l2_0edfd0a5__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_97a135c8_ID;
}





//==== 007c1a80 GetInverseMomentOfInertia_kg_m2 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual class util__Maybe_L_structutil__Matrix3x3_L_double_G__G_ 
   Component__GetInverseMomentOfInertia_kg_m2(void)const  */

Maybe_L_util__Matrix3x3_L_double_G___G_ *
Component__GetInverseMomentOfInertia_kg_m2(Maybe_L_util__Matrix3x3_L_double_G___G_ *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).Data[0] = 1.0;
  *(undefined4 *)((__return_storage_ptr__->Data).Data + 1) = 0;
  *(undefined4 *)((int)(__return_storage_ptr__->Data).Data + 0xc) = 0;
  *(undefined4 *)((__return_storage_ptr__->Data).Data + 2) = 0;
  *(undefined4 *)((int)(__return_storage_ptr__->Data).Data + 0x14) = 0;
  (__return_storage_ptr__->Data).Data[3] = 0.0;
  (__return_storage_ptr__->Data).Data[4] = 1.0;
  *(undefined4 *)((__return_storage_ptr__->Data).Data + 5) = 0;
  *(undefined4 *)((int)(__return_storage_ptr__->Data).Data + 0x2c) = 0;
  *(undefined4 *)((__return_storage_ptr__->Data).Data + 6) = 0;
  *(undefined4 *)((int)(__return_storage_ptr__->Data).Data + 0x34) = 0;
  (__return_storage_ptr__->Data).Data[7] = 0.0;
  (__return_storage_ptr__->Data).Data[8] = 1.0;
  __return_storage_ptr__->IsValidData = false;
  return __return_storage_ptr__;
}





//==== 007c1af0 GetThrustForce_N ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual struct util__Vec3_L_double_G_  Component__GetThrustForce_N(struct
   util__PhysicalState_L_structutil__Vec3_L_double_G__G_)const  */

Vec3_L_double_G_ *
Component__GetThrustForce_N
          (Vec3_L_double_G_ *__return_storage_ptr__,PhysicalState_L_util__Vec3_L_double_G___G_ param_1)

{
  *(undefined4 *)&__return_storage_ptr__->X = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = 0;
  *(undefined4 *)&__return_storage_ptr__->Y = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = 0;
  __return_storage_ptr__->Z = 0.0;
  return __return_storage_ptr__;
}





//==== 007c1b10 GetTorque_N_m_007c1b10 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual struct util__Vec3_L_double_G_  Component__GetTorque_N_m(struct
   util__RotationalState3_L_double_G_)const  */

Vec3_L_double_G_ *
Component__GetTorque_N_m(Vec3_L_double_G_ *__return_storage_ptr__,RotationalState3_L_double_G_ param_1)

{
  *(undefined4 *)&__return_storage_ptr__->X = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = 0;
  *(undefined4 *)&__return_storage_ptr__->Y = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = 0;
  __return_storage_ptr__->Z = 0.0;
  return __return_storage_ptr__;
}





//==== 007c2150 OriginShift_007c2150 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual void  Component__OriginShift(struct util__PhysicalState_L_struct_util__Vec3_L_double_G__G_) */

void Component__OriginShift(PhysicalState_L_util__Vec3_L_double_G___G_)

{
  return;
}





//==== 007c2230 scalar_deleting_destructor_007c2230 ====

/* public: virtual void * __thiscall MatterCloudComponent:: 0 scalardeletingdestructor(unsigned
   int) */

void * __thiscall
MatterCloudComponent___scalar_deleting_destructor(MatterCloudComponent *this,uint param_1)

{
  this->_pad_0x0_0 = (int)&vftable_495;
  if ((ReferenceController *)this->_pad_0x8_2 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)this->_pad_0x8_2);
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x48);
  }
  return this;
}

//==== 007c2820 GetClassID_007c2820 ====


/* public: virtual unsigned long __thiscall ControllableComponent__GetClassID(void)const  */

ulong __thiscall ControllableComponent__GetClassID(ControllableComponent *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_790354ae__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_790354ae__thread_safe_static_guard_0__);
    if ( cde_l2_790354ae__thread_safe_static_guard_0__ == -1) {
       cde_l2_97a135c8_ID = util__GetHash("ControllableComponent");
      _Init_thread_footer(& cde_l2_790354ae__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_97a135c8_ID;
}





//==== 007c2880 GetOrder ====


/* public: class util__Maybe_L_classOrder_G_ __thiscall ControllableComponent__GetOrder(void)const  */

void __thiscall ControllableComponent__GetOrder(ControllableComponent *this)

{
  bool bVar1;
  int TVar2;
  int TVar3;
  int TVar4;
  int *in_stack_00000004;
  
  TVar2 = *(int *)&(*(undefined1 *)((char *)&((this->CurrentOrder).Data) + 0x4));
  TVar3 = *(int *)&(this->CurrentOrder).Data.Orientation.X;
  TVar4 = *(int *)((int)&(this->CurrentOrder).Data.Orientation.X + 4);
  *in_stack_00000004 = (this->CurrentOrder).Data.OrderType;
  in_stack_00000004[1] = TVar2;
  in_stack_00000004[2] = TVar3;
  in_stack_00000004[3] = TVar4;
  TVar2 = *(int *)((int)&(this->CurrentOrder).Data.Orientation.Y + 4);
  TVar3 = *(int *)&(this->CurrentOrder).Data.Orientation.Z;
  TVar4 = *(int *)((int)&(this->CurrentOrder).Data.Orientation.Z + 4);
  in_stack_00000004[4] = *(int *)&(this->CurrentOrder).Data.Orientation.Y;
  in_stack_00000004[5] = TVar2;
  in_stack_00000004[6] = TVar3;
  in_stack_00000004[7] = TVar4;
  bVar1 = (this->CurrentOrder).IsValidData;
  *(double *)(in_stack_00000004 + 8) = (this->CurrentOrder).Data.Orientation.W;
  *(bool *)(in_stack_00000004 + 10) = bVar1;
  return;
}





//==== 007c28b0 HasOrder ====


/* public: bool __thiscall ControllableComponent__HasOrder(enum Order__Type)const  */

bool __thiscall ControllableComponent__HasOrder(ControllableComponent *this,int param_1)

{
  if (((this->CurrentOrder).IsValidData != false) &&
     ((this->CurrentOrder).Data.OrderType == param_1)) {
    return true;
  }
  return false;
}





//==== 007c2a10 IsDodging ====


/* public: bool __thiscall ControllableComponent__IsDodging(void)const  */

bool __thiscall ControllableComponent__IsDodging(ControllableComponent *this)

{
  return this->IsDodgingEnabled;
}





//==== 007c2a20 IsMarkedAsSeparatingFromFleet ====


/* public: bool __thiscall ControllableComponent__IsMarkedAsSeparatingFromFleet(void)const  */

bool __thiscall ControllableComponent__IsMarkedAsSeparatingFromFleet(ControllableComponent *this)

{
  return this->ShouldSplitFromMainFleet;
}





//==== 007c2a30 MarkAsShouldSplitFromMainFleet ====


/* public: void __thiscall ControllableComponent__MarkAsShouldSplitFromMainFleet(bool) */

void __thiscall
ControllableComponent__MarkAsShouldSplitFromMainFleet(ControllableComponent *this,bool param_1)

{
  this->ShouldSplitFromMainFleet = param_1;
  return;
}





//==== 007c2b30 PostTick_007c2b30 ====


/* public: virtual void __thiscall ControllableComponent__PostTick(double) */

void __thiscall ControllableComponent__PostTick(ControllableComponent *this,double param_1)

{
  CheckUnally(this);
  return;
}





//==== 007c2e80 ToggleDodging ====


/* public: void __thiscall ControllableComponent__ToggleDodging(bool) */

void __thiscall ControllableComponent__ToggleDodging(ControllableComponent *this,bool param_1)

{
  this->IsDodgingEnabled = param_1;
  return;
}





//==== 007c3210 GetCenterOfMass_km_007c3210 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual class util__Maybe_L_structutil__Vec3_L_double_G__G_ 
   DebrisComponent__GetCenterOfMass_km(void)const  */

Maybe_L_util__Vec3_L_double_G___G_ *
DebrisComponent__GetCenterOfMass_km(Maybe_L_util__Vec3_L_double_G___G_ *__return_storage_ptr__)

{
  *(undefined4 *)&(__return_storage_ptr__->Data).X = 0;
  *(undefined4 *)((int)&(__return_storage_ptr__->Data).X + 4) = 0;
  *(undefined4 *)&(__return_storage_ptr__->Data).Y = 0;
  *(undefined4 *)((int)&(__return_storage_ptr__->Data).Y + 4) = 0;
  __return_storage_ptr__->IsValidData = true;
  (__return_storage_ptr__->Data).Z = 0.0;
  return __return_storage_ptr__;
}





//==== 007c3230 GetClassID_007c3230 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual unsigned long  DebrisComponent__GetClassID(void)const  */

ulong DebrisComponent__GetClassID(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_03c5de21__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_03c5de21__thread_safe_static_guard_0__);
    if ( cde_l2_03c5de21__thread_safe_static_guard_0__ == -1) {
       cde_l2_97a135c8_ID =
           util__GetHash("DebrisComponent");
      _Init_thread_footer(& cde_l2_03c5de21__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_97a135c8_ID;
}





//==== 007c32f0 GetInverseMomentOfInertia_kg_m2_007c32f0 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual class util__Maybe_L_structutil__Matrix3x3_L_double_G__G_ 
   DebrisComponent__GetInverseMomentOfInertia_kg_m2(void)const  */

Maybe_L_util__Matrix3x3_L_double_G___G_ *
DebrisComponent__GetInverseMomentOfInertia_kg_m2
          (Maybe_L_util__Matrix3x3_L_double_G___G_ *__return_storage_ptr__)

{
  *(undefined4 *)(__return_storage_ptr__->Data).Data = 0;
  *(undefined4 *)((int)(__return_storage_ptr__->Data).Data + 4) = 0x3ff00000;
  *(undefined4 *)((__return_storage_ptr__->Data).Data + 1) = 0;
  *(undefined4 *)((int)(__return_storage_ptr__->Data).Data + 0xc) = 0;
  __return_storage_ptr__->IsValidData = true;
  *(undefined4 *)((__return_storage_ptr__->Data).Data + 2) = 0;
  *(undefined4 *)((int)(__return_storage_ptr__->Data).Data + 0x14) = 0;
  *(undefined4 *)((__return_storage_ptr__->Data).Data + 3) = 0;
  *(undefined4 *)((int)(__return_storage_ptr__->Data).Data + 0x1c) = 0;
  *(undefined4 *)((__return_storage_ptr__->Data).Data + 4) = 0;
  *(undefined4 *)((int)(__return_storage_ptr__->Data).Data + 0x24) = 0x3ff00000;
  *(undefined4 *)((__return_storage_ptr__->Data).Data + 5) = 0;
  *(undefined4 *)((int)(__return_storage_ptr__->Data).Data + 0x2c) = 0;
  *(undefined4 *)((__return_storage_ptr__->Data).Data + 6) = 0;
  *(undefined4 *)((int)(__return_storage_ptr__->Data).Data + 0x34) = 0;
  *(undefined4 *)((__return_storage_ptr__->Data).Data + 7) = 0;
  *(undefined4 *)((int)(__return_storage_ptr__->Data).Data + 0x3c) = 0;
  (__return_storage_ptr__->Data).Data[8] = 1.0;
  return __return_storage_ptr__;
}





//==== 007c3a90 scalar_deleting_destructor_007c3a90 ====

/* public: virtual void * __thiscall MatterComponent:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall MatterComponent___scalar_deleting_destructor(MatterComponent *this,uint param_1)

{
  pmf_fbbda43d *ppVar1;
  
  ppVar1 = (this->MatterComponentMemoizationHandlerInstance).ResetFunctions.Data;
  (this->MatterComponentMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 =
       (int)&vftable_2;
  if (ppVar1 != (pmf_fbbda43d *)0x0) {
    port_op_delete(ppVar1);
  }
  (this->MatterComponentMemoizationHandlerInstance).ResetFunctions.Data = (pmf_fbbda43d *)0x0;
  (this->MatterComponentMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 =
       (int)&vftable;
  this->_pad_0x0_0 = (int)&vftable_495;
  if ((ReferenceController *)this->_pad_0x8_2 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)this->_pad_0x8_2);
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x68);
  }
  return this;
}

//==== 007c3c50 DememoizeAll_007c3c50 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall MatterComponent__DememoizeAll(void)const  */

void __thiscall MatterComponent__DememoizeAll(MatterComponent *this)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  undefined4 *puVar2;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar1 = (**(code **)((this->MatterComponentMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 +
                      0xc))();
  if (local_c < iVar1) {
    do {
      puVar2 = (undefined4 *)
               (**(code **)(this->MatterComponentMemoizationHandlerInstance).ResetFunctions.
                           _pad_0x0_0)(&local_c);
      (*(code *)*puVar2)();
      local_c = local_c + 1;
      iVar1 = (**(code **)((this->MatterComponentMemoizationHandlerInstance).ResetFunctions.
                           _pad_0x0_0 + 0xc))();
    } while (local_c < iVar1);
  }
  (**(code **)((this->MatterComponentMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 + 0x10))
            ();
  return;
}

//==== 007c3cc0 DestroyAPacket ====


/* public: int __thiscall MatterCloudComponent__DestroyAPacket(void) */

int __thiscall MatterCloudComponent__DestroyAPacket(MatterCloudComponent *this)

{
  int *piVar1;
  
  piVar1 = &this->PacketCount;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\tactical\\components\\kineticcloud.cpp"
                    ,0x122,"PacketCount >= 0",(char *)0x0);
    DebugBreak();
  }
  CheckForDeath(this);
  return this->PacketCount;
}





//==== 007c3d00 GetBeamColor_Clear ====


/* public: void __thiscall MatterComponent__GetBeamColor_Clear(void)const  */

void __thiscall MatterComponent__GetBeamColor_Clear(MatterComponent *this)

{
  (this->GetBeamColor_MemoizedValue).IsValidData = false;
  *(undefined4 *)&(this->GetBeamColor_MemoizedValue).Data.X = 0;
  *(undefined4 *)((int)&(this->GetBeamColor_MemoizedValue).Data.X + 4) = 0;
  *(undefined4 *)&(this->GetBeamColor_MemoizedValue).Data.Y = 0;
  *(undefined4 *)((int)&(this->GetBeamColor_MemoizedValue).Data.Y + 4) = 0;
  (this->GetBeamColor_MemoizedValue).Data.Z = 0.0;
  return;
}





//==== 007c3d20 GetClassID_007c3d20 ====


/* public: virtual unsigned long __thiscall MatterCloudComponent__GetClassID(void)const  */

ulong __thiscall MatterCloudComponent__GetClassID(MatterCloudComponent *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_8d77be5c__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_8d77be5c__thread_safe_static_guard_0__);
    if ( cde_l2_8d77be5c__thread_safe_static_guard_0__ == -1) {
       cde_l2_97a135c8_ID = util__GetHash("MatterCloudComponent");
      _Init_thread_footer(& cde_l2_8d77be5c__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_97a135c8_ID;
}





//==== 007c3d80 GetClassID_007c3d80 ====


/* public: virtual unsigned long __thiscall MatterComponent__GetClassID(void)const  */

ulong __thiscall MatterComponent__GetClassID(MatterComponent *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_d56fb6f1__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_d56fb6f1__thread_safe_static_guard_0__);
    if ( cde_l2_d56fb6f1__thread_safe_static_guard_0__ == -1) {
       cde_l2_97a135c8_ID =
           util__GetHash("MatterComponent");
      _Init_thread_footer(& cde_l2_d56fb6f1__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_97a135c8_ID;
}





//==== 007c3de0 GetDensity_kg__m3_007c3de0 ====


/* public: double __thiscall MatterComponent__GetDensity_kg__m3(void)const  */

double __thiscall MatterComponent__GetDensity_kg__m3(MatterComponent *this)

{
  return this->Composition->Density_kg__m3;
}





//==== 007c3e60 GetForwardRadius_km ====


/* public: double __thiscall MatterComponent__GetForwardRadius_km(void)const  */

double __thiscall MatterComponent__GetForwardRadius_km(MatterComponent *this)

{
  return (this->Dimensions_m).Radius;
}





//==== 007c4000 GetMass_kg_007c4000 ====


/* public: virtual class util__Maybe_L_double_G_ __thiscall MatterCloudComponent__GetMass_kg(void)const
    */

Maybe_L_double_G_ * __thiscall
MatterCloudComponent__GetMass_kg(MatterCloudComponent *this,Maybe_L_double_G_ *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  
  iVar1 = this->PacketCount;
  iVar2 = this->ParticlesPerPacket;
  __return_storage_ptr__->IsValidData = true;
  __return_storage_ptr__->Data = (double)(iVar1 * iVar2) * this->ParticleMass_kg;
  return __return_storage_ptr__;
}





//==== 007c4030 GetMass_kg_007c4030 ====


/* public: virtual class util__Maybe_L_double_G_ __thiscall MatterComponent__GetMass_kg(void)const  */

Maybe_L_double_G_ * __thiscall
MatterComponent__GetMass_kg(MatterComponent *this,Maybe_L_double_G_ *__return_storage_ptr__)

{
  __return_storage_ptr__->Data = this->Mass_kg;
  __return_storage_ptr__->IsValidData = true;
  return __return_storage_ptr__;
}





//==== 007c4050 GetParticleDensity_kg__m3 ====


/* public: double __thiscall MatterCloudComponent__GetParticleDensity_kg__m3(void)const  */

double __thiscall MatterCloudComponent__GetParticleDensity_kg__m3(MatterCloudComponent *this)

{
  return this->Composition->Density_kg__m3;
}





//==== 007c4060 GetReductionFraction ====


/* public: double __thiscall ExplosionComponent__GetReductionFraction(void)const  */

double __thiscall ExplosionComponent__GetReductionFraction(ExplosionComponent *this)

{
  return this->ReductionFraction;
}





//==== 007c4070 GetParticleRadius_m ====

/* r11-fakecov-fix */
/* disasm 7c4070: pow(([0x10]/[[0xc]+0x30])*3.0/4pi, 1/3) */
double __thiscall MatterCloudComponent__GetParticleRadius_m(MatterCloudComponent *this)

{
  char *p;
  double vol;

  p = (char *)this;
  vol = (*(double *)(p + 0x10) / *(double *)(*(int *)(p + 0xc) + 0x30)) * 3.0 /
        12.566370614359172;
  return libm_sse2_pow_precise(vol,0.3333333333333333);
}






//==== 007c41d0 GetRadius_km_007c41d0 ====


/* public: virtual class util__Maybe_L_double_G_ __thiscall
   MatterCloudComponent__GetRadius_km(void)const  */

Maybe_L_double_G_ * __thiscall
MatterCloudComponent__GetRadius_km(MatterCloudComponent *this,Maybe_L_double_G_ *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar1 = this->ExpansionVelocity_km__s;
  dVar2 = this->TimeSinceExpansion_s;
  __return_storage_ptr__->IsValidData = true;
  __return_storage_ptr__->Data = (dVar1 * dVar2 * 1000.0 + (this->InitialSize_m).Radius) / 1000.0;
  return __return_storage_ptr__;
}





//==== 007c4210 GetRadius_km_007c4210 ====


/* public: virtual class util__Maybe_L_double_G_ __thiscall MatterComponent__GetRadius_km(void)const  */

Maybe_L_double_G_ * __thiscall
MatterComponent__GetRadius_km(MatterComponent *this,Maybe_L_double_G_ *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->Dimensions_m).Height * 0.5;
  dVar1 = (this->Dimensions_m).Radius;
  dVar1 = dVar1 * dVar1 + dVar2 * dVar2;
  libm_sse2_sqrt_precise(0.0);
  __return_storage_ptr__->Data = dVar1;
  __return_storage_ptr__->IsValidData = true;
  return __return_storage_ptr__;
}





//==== 007c47e0 OnDestroy_007c47e0 ====


/* public: virtual void __thiscall MatterComponent__OnDestroy(void) */

void __thiscall MatterComponent__OnDestroy(MatterComponent *this)

{
  NewBeamStreak(this,0.05);
  return;
}





//==== 007c4800 PostTick_007c4800 ====


/* public: virtual void __thiscall MatterCloudComponent__PostTick(double) */

void __thiscall MatterCloudComponent__PostTick(MatterCloudComponent *this,double param_1)

{
  CheckForDeath(this);
  return;
}





//==== 007c5360 Tick_007c5360 ====


/* public: virtual void __thiscall MatterComponent__Tick(double) */

void __thiscall MatterComponent__Tick(MatterComponent *this,double param_1)

{
  NewBeamStreak(this,param_1);
  return;
}





//==== 007c5610 scalar_deleting_destructor_007c5610 ====

/* public: virtual void * __thiscall ExplosionComponent:: 0 scalardeletingdestructor(unsigned int)
    */

void * __thiscall
ExplosionComponent___scalar_deleting_destructor(ExplosionComponent *this,uint param_1)

{
  MaterialConstituent *pMVar1;
  
  pMVar1 = (this->GasComposition).Data;
  (this->GasComposition)._pad_0x0_0 = (int)&vftable_15;
  if (pMVar1 != (MaterialConstituent *)0x0) {
    port_op_delete(pMVar1);
  }
  (this->GasComposition).Data = (MaterialConstituent *)0x0;
  (this->GasComposition)._pad_0x0_0 = (int)&vftable;
  this->_pad_0x0_0 = (int)&vftable_495;
  if ((ReferenceController *)this->_pad_0x8_2 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)this->_pad_0x8_2);
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x58);
  }
  return this;
}

