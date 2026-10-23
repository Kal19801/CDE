// Auto-generated from Ghidra decompilation
#include "port_prelude.h"

//==== 006609c0 GenerateQuickDiagrams_006609c0 ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual class util__Darray_L_structUIWidget_P_G_ __thiscall
   WeaponModule__GenerateQuickDiagrams(class Manager *)const  */

Manager * __thiscall WeaponModule__GenerateQuickDiagrams(WeaponModule *this,Manager *param_1)

{
  ActorHandler *pAVar1;
  bool bVar2;
  UIWidget *pUVar3;
  GameManager *pGVar4;
  int iVar5;
  Manager *in_stack_00000008;
  WeaponModule *local_8;
  
  local_8 = this;
  pUVar3 = (UIWidget *)(uintptr_t)(GenerateRangeDiagram(this,in_stack_00000008));
  param_1->_pad_0x0_0 = 0;
  param_1->Parent = (GameManager *)0x0;
  (param_1->ActorStore).Pointer = (ActorHandler *)0x0;
  param_1[1]._pad_0x0_0 = 0;
  param_1->_pad_0x0_0 = (int)&vftable_2;
  param_1->Parent = (GameManager *)0x0;
  (param_1->ActorStore).Pointer = (ActorHandler *)0x0;
  param_1[1]._pad_0x0_0 = 1;
  pGVar4 = (GameManager *)(uintptr_t)(port_op_new(4));
  if (pGVar4 == (GameManager *)0x0) {
    pGVar4 = (GameManager *)0x0;
  }
  else {
    *(undefined4 *)pGVar4 = 0;
  }
  iVar5 = 0;
  param_1->Parent = pGVar4;
  if (0 < param_1[1]._pad_0x0_0) {
    do {
      *(undefined4 *)(&param_1->Parent->DebugDraw + iVar5 * 4) = 0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1[1]._pad_0x0_0);
  }
  pAVar1 = (param_1->ActorStore).Pointer;
  local_8 = (WeaponModule *)((int)&pAVar1->Parent + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)param_1,(int *)&local_8);
  bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)param_1,(int)pAVar1);
  if (bVar2) {
    *(UIWidget **)((int)param_1->Parent + (int)(param_1->ActorStore).Pointer * 4 + -4) = pUVar3;
  }
  return param_1;
}

//==== 00660a70 GenerateRangeDiagram ====

/* WARNING: Removing unreachable block (ram,0x00661211) */
/* WARNING: Removing unreachable block (ram,0x0066121e) */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: struct UIWidget * __thiscall WeaponModule__GenerateRangeDiagram(class Manager *)const  */

UIWidget * __thiscall WeaponModule__GenerateRangeDiagram(WeaponModule *this,Manager *param_1)

{
  undefined8 stack0xfffffa00;
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
  float fStack_4c4;
  undefined4 local_4b8 [66];
  undefined4 local_3b0;
  UIAttributes local_39c;
  Args local_254 [272];
  Color local_144;
  void *local_124 [3];
  void *local_118;
  void *local_10c [3];
  void *local_100;
  void *local_f4 [3];
  void *local_e8;
  Str_L_char_G_ local_dc;
  Str_L_char_G_ local_d0;
  Str_L_char_G_ local_c4;
  Str_L_char_G_ local_b8;
  Str_L_char_G_ local_ac;
  void *local_a0;
  _func___cdecl_Color_void_ptr *local_9c;
  undefined **local_98;
  Str_L_char_G_ local_94;
  float fStack_88;
  float fStack_84;
  WeaponModule *pWStack_80;
  float fStack_7c;
  Str_L_char_G_ local_78;
  Str_L_char_G_ local_6c;
  Str_L_char_G_ local_60;
  void *local_54;
  _func___cdecl_Color_void_ptr *local_50;
  undefined **local_4c;
  Str_L_char_G_ local_48;
  code *pcStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  float local_28;
  WeaponModule *local_24;
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
  local_20 = (Str_L_char_G_ *)0x0;
  local_3b0 = 0x660a90;
  *(uint32_t *)&local_24 = (uint32_t)(uintptr_t)(this);
  pLVar18 = (LineGraph *)(uintptr_t)(port_op_new(0x278));
  if (pLVar18 == (LineGraph *)0x0) {
    pUVar25 = (UIWidget *)0x0;
  }
  else {
    local_3b0 = 0x660aad;
    util__Str_char___Str_char(&local_dc,"km");
    local_3b0 = 0x660abd;
    util__Str_char___Str_char(&local_c4,"WeaponRangeChart YAxis");
    local_3b0 = 0x660acd;
    util__Str_char___Str_char(&local_d0,"m^2");
    local_3b0 = 0x660add;
    util__Str_char___Str_char(&local_b8,"WeaponRangeChart XAxis");
    local_3b0 = 0x660aed;
    util__Str_char___Str_char(&local_ac,"WeaponRangeChart Title");
    local_8 = local_4b8;
    pcStack_3c = util__DelegateFactory_L_WeaponModule_Cutil__Range_L_double_G___G___MethodCallerConst_L__public__struct_util__Range_L_double_G____thiscall_WeaponModule__GetChartYRanges_void_const__C0__G_
    ;
    local_94.Length =
         (int)util__DelegateFactory_L_WeaponModule_Cutil__Range_L_double_G___G___MethodCallerConst_L__public__struct_util__Range_L_double_G____thiscall_WeaponModule__GetChartXRanges_void_const__C0__G_
    ;
    uStack_38 = 0;
    uStack_30 = 0;
    local_78.Data = (char *)0x0;
    fStack_88 = 0.0;
    fStack_84 = 0.0;
    pWStack_80 = (WeaponModule *)0x0;
    fStack_7c = 0.0;
    local_78.Capacity = 0;
    local_78.Length = 0;
    local_6c.Data = (char *)0x0;
    local_6c.Capacity = 0;
    local_6c.Length = 0;
    local_60.Data = (char *)0x0;
    local_60.Capacity = 0;
    local_60.Length = 0;
    fStack_4c4 = 9.371277e-39;
    local_94.Capacity = (int)this;
    local_48.Length = (int)this;
    pLVar19 = (LocStr *)util__LocStr__LocStr((LocStr *)local_124,&local_c4,&local_78);
    local_20 = util__LocStr__operator__o3(pLVar19);
    fStack_4c4 = 9.371322e-39;
    pLVar19 = (LocStr *)util__LocStr__LocStr((LocStr *)local_10c,&local_b8,&local_6c);
    pSVar20 = util__LocStr__operator__o3(pLVar19);
    fStack_4c4 = 9.371366e-39;
    pLVar19 = (LocStr *)util__LocStr__LocStr((LocStr *)local_f4,&local_ac,&local_60);
    pSVar21 = util__LocStr__operator__o3(pLVar19);
    *(uint32_t *)&local_1c = 0;
    *(uint32_t *)&local_18 = (uint32_t)(uintptr_t)((void *)0x0);
    util__Str_char___Str_char(&SStack_14,pSVar21);
    puVar22 = (undefined4 *)LineGraph__Args__Args__o3(local_254);
    *puVar22 = local_1c;
    puVar22[1] = (undefined4)(uintptr_t)(local_18);
    util__Str_char___operator__o8((Str_L_char_G_ *)(puVar22 + 2),&SStack_14);
    if ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_14.Data !=
        (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0) {
      port_op_delete(SStack_14.Data);
    }
    *(uint32_t *)&local_1c = 0;
    *(uint32_t *)&local_18 = (uint32_t)(uintptr_t)((void *)0x0);
    util__Str_char___Str_char(&SStack_14,pSVar20);
    puVar22[5] = local_1c;
    puVar22[6] = (undefined4)(uintptr_t)(local_18);
    util__Str_char___operator__o8((Str_L_char_G_ *)(puVar22 + 7),&SStack_14);
    if ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_14.Data !=
        (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0) {
      port_op_delete(SStack_14.Data);
    }
    *(uint32_t *)&local_1c = 0;
    *(uint32_t *)&local_18 = (uint32_t)(uintptr_t)((void *)0x0);
    util__Str_char___Str_char(&SStack_14,&local_d0);
    puVar22[10] = local_1c;
    puVar22[0xb] = (undefined4)(uintptr_t)(local_18);
    util__Str_char___operator__o8((Str_L_char_G_ *)(puVar22 + 0xc),&SStack_14);
    if ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_14.Data !=
        (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0) {
      port_op_delete(SStack_14.Data);
    }
    *(uint32_t *)&local_1c = 0;
    *(uint32_t *)&local_18 = (uint32_t)(uintptr_t)((void *)0x0);
    util__Str_char___Str_char(&SStack_14,local_20);
    puVar22[0xf] = local_1c;
    puVar22[0x10] = (undefined4)(uintptr_t)(local_18);
    util__Str_char___operator__o8((Str_L_char_G_ *)(puVar22 + 0x11),&SStack_14);
    if ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_14.Data !=
        (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0) {
      port_op_delete(SStack_14.Data);
    }
    *(uint32_t *)&local_1c = 0;
    *(uint32_t *)&local_18 = (uint32_t)(uintptr_t)((void *)0x0);
    util__Str_char___Str_char(&SStack_14,&local_dc);
    puVar22[0x14] = local_1c;
    puVar22[0x15] = (undefined4)(uintptr_t)(local_18);
    util__Str_char___operator__o8((Str_L_char_G_ *)(puVar22 + 0x16),&SStack_14);
    if ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_14.Data !=
        (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0) {
      port_op_delete(SStack_14.Data);
    }
    puVar17 = local_8;
    puVar22[0x1a] = local_94.Capacity;
    puVar22[0x1b] = local_94.Length;
    puVar22[0x1c] = fStack_88;
    puVar22[0x1d] = fStack_84;
    puVar22[0x27] = (undefined4)(uintptr_t)(local_24);
    *(ulonglong *)(puVar22 + 0x1e) = CONCAT44(fStack_7c,pWStack_80);
    puVar22[0x28] = (undefined4)(uintptr_t)(util__DelegateFactory_class_WeaponModule_double_double___MethodCallerConst__public__double___thiscall_WeaponModule__GetChartAccurateTargetRange_km_double_const__0);
    *(undefined2 *)(puVar22 + 0x26) = 0x101;
    puVar22[0x20] = local_48.Length;
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
    iVar23 = (int)(uintptr_t) util__Color__Color(&local_144,Preset__Green,1.0);
    local_a0 = (void *)0x0;
    local_9c = (_func___cdecl_Color_void_ptr *)0x0;
    local_98 = &vftable_5;
    util__Str_char___Str_char(&local_94,(Str_L_char_G_ *)(iVar23 + 4));
    fStack_88 = *(float *)(iVar23 + 0x10);
    fStack_84 = *(float *)(iVar23 + 0x14);
    pWStack_80 = *(WeaponModule **)(iVar23 + 0x18);
    fStack_7c = *(float *)(iVar23 + 0x1c);
    local_98 = &vftable_59;
    *(uint32_t *)&local_18 = (uint32_t)(uintptr_t)((void *)0x0);
    SStack_14.Data = (char *)0x0;
    SStack_14.Capacity = 0;
    SStack_14.Length = 200;
    *(uint32_t *)&local_28 = fStack_84;
    *(uint32_t *)&local_24 = (uint32_t)(uintptr_t)(pWStack_80);
    local_20 = (Str_L_char_G_ *)(uintptr_t)*(undefined4 *)&((fStack_7c));
    local_8 = (undefined4 *)(uintptr_t)(*(undefined4 *)&(fStack_88));
    pUVar24 = (UIAttributes *)UIAttributes__UIAttributes(&local_39c,param_1);
    uStack_38 = (undefined8)(uintptr_t)((undefined4 *)(uintptr_t)(0x3ff0000000000000));
    uStack_30 = 0;
    local_48.Length = 0;
    (pUVar24->DesiredSize).Getter.Callee = local_18;
    (pUVar24->DesiredSize).Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_14.Data;
    (pUVar24->DesiredSize).Value.X = SStack_14.Capacity;
    (pUVar24->DesiredSize).Value.Y = SStack_14.Length;
    pcStack_3c = (code *)0x0;
    (pUVar24->FillProportion).Getter.Callee = (void *)0x0;
    (pUVar24->FillProportion).Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0;
    (undefined4)((pUVar24->FillProportion).Value.X = 0);
    *(undefined4 *)((int)&(pUVar24->FillProportion).Value.X + 4) = 0x3ff00000;
    (pUVar24->FillProportion).Value.Y = 0.0;
    *(uint32_t *)&local_54 = (uint32_t)(uintptr_t)(local_a0);
    local_50 = local_9c;
    local_4c = &vftable_5;
    util__Str_char___Str_char(&local_48,&local_94);
    pcStack_3c = (code *)local_8;
    (pUVar24->ForegroundColor).Data.Getter.Callee = local_54;
    (pUVar24->ForegroundColor).Data.Getter.CallbackFunction = local_50;
    uStack_38 = CONCAT44(local_24,local_28);
    local_4c = &vftable_59;
    (*(uint40_t*)&(uStack_30)) = CONCAT14(1,local_20);
    util__Str_char___operator__o8
              ((Str_L_char_G_ *)&(pUVar24->ForegroundColor).Data.Value._pad_0x4_1,&local_48);
    (pUVar24->ForegroundColor).Data.Value.Hue_degrees = (double)(uintptr_t)((float)(int)(uintptr_t)(local_8));
    (pUVar24->ForegroundColor).Data.Value.Saturation = local_28;
    (pUVar24->ForegroundColor).Data.Value.Value = (double)(uintptr_t)((float)(int)(uintptr_t)(local_24));
    (pUVar24->ForegroundColor).Data.Value.Alpha = (double)(uintptr_t)((float)(int)(uintptr_t)(local_20));
    (pUVar24->ForegroundColor).IsValidData = true;
    if (local_48.Data != (char *)0x0) {
      port_op_delete(local_48.Data);
    }
    if (local_94.Data != (char *)0x0) {
      port_op_delete(local_94.Data);
    }
    UIAttributes__UIAttributes((UIAttributes *)&stack0xfffffa00,pUVar24);
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
    UIAttributes___UIAttributes(&local_39c);
  }
  if ((bVar12) &&
     (local_144._pad_0x0_0 = (int)&vftable_5,
     (void *)local_144._pad_0x4_1 != (void *)0x0)) {
    local_3b0 = 0x661132;
    port_op_delete((void *)local_144._pad_0x4_1);
    local_144._pad_0x4_1 = 0;
  }
  if (bVar13) {
    LineGraph__Args___Args(local_254);
  }
  if (bVar14) {
    if (local_e8 != (void *)0x0) {
      local_3b0 = 0x661176;
      port_op_delete(local_e8);
      local_e8 = (void *)0x0;
    }
    if (local_f4[0] != (void *)0x0) {
      local_3b0 = 0x661193;
      port_op_delete(local_f4[0]);
      local_f4[0] = (void *)0x0;
    }
  }
  if ((bVar15) && (local_60.Data != (char *)0x0)) {
    local_3b0 = 0x6611bb;
    port_op_delete(local_60.Data);
    local_60.Data = (char *)0x0;
  }
  if (bVar16) {
    if (local_100 != (void *)0x0) {
      local_3b0 = 0x6611e3;
      port_op_delete(local_100);
      local_100 = (void *)0x0;
    }
    if (local_10c[0] != (void *)0x0) {
      local_3b0 = 0x661200;
      port_op_delete(local_10c[0]);
      local_10c[0] = (void *)0x0;
    }
  }
  if (bVar5) {
    if (local_118 != (void *)0x0) {
      local_3b0 = 0x661246;
      port_op_delete(local_118);
      local_118 = (void *)0x0;
    }
    if (local_124[0] != (void *)0x0) {
      local_3b0 = 0x661263;
      port_op_delete(local_124[0]);
      local_124[0] = (void *)0x0;
    }
  }
  if ((bVar6) && (local_78.Data != (char *)0x0)) {
    local_3b0 = 0x661285;
    port_op_delete(local_78.Data);
    local_78.Data = (char *)0x0;
  }
  if ((bVar7) && (local_ac.Data != (char *)0x0)) {
    local_3b0 = 0x6612a7;
    port_op_delete(local_ac.Data);
    local_ac.Data = (char *)0x0;
  }
  if ((bVar8) && (local_b8.Data != (char *)0x0)) {
    local_3b0 = 0x6612cc;
    port_op_delete(local_b8.Data);
    local_b8.Data = (char *)0x0;
  }
  if ((bVar9) && (local_d0.Data != (char *)0x0)) {
    local_3b0 = 0x6612f1;
    port_op_delete(local_d0.Data);
  }
  if ((bVar10) && (local_c4.Data != (char *)0x0)) {
    local_3b0 = 0x66130c;
    port_op_delete(local_c4.Data);
    local_c4.Data = (char *)0x0;
  }
  if ((local_dc.Data != (char *)0x0) && (bVar4)) {
    local_3b0 = 0x66132e;
    port_op_delete(local_dc.Data);
  }
  return pUVar25;
}

//==== 00661340 GetAccuracyAngle_radians_Clear ====

/* public: void __thiscall WeaponModule__GetAccuracyAngle_radians_Clear(void)const  */

void __thiscall WeaponModule__GetAccuracyAngle_radians_Clear(WeaponModule *this)

{
  *(undefined1 *)&this[1]._pad_0x0_0 = 0;
  this->TargetsShips = false;
  this->TargetsShots = false;
  (undefined6)((*(undefined6 *)(void *)((char *)(uintptr_t)(this) + 0x92)) = 0);
  return;
}

//==== 00661360 GetActualRange_km ====

/* public: double __thiscall WeaponModule__GetActualRange_km(double)const  */

double __thiscall WeaponModule__GetActualRange_km(WeaponModule *this,double param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  Maybe_L_double_G_ *pMVar6;
  float10 fVar7;
  double dVar8;
  double dVar9;
  Maybe_L_double_G_ local_34;
  double local_24;
  double local_1c;
  undefined8 uStack_14;
  undefined8 local_c;
  
  bVar5 = false;
  if ((char)this[1]._pad_0x0_0 == '\0') {
    iVar1 = (int)((this->GetFiringSpeed_km__s_MemoizedValue).IsValidData);
    local_c = (double)CONCAT44(iVar1 + 1,(undefined4)local_c);
    util__Darray_L_util__tuple2_L_Order__Type_Cint_G___G___SetSize
              ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)&this->GetFiringSpeed_km__s_MemoizedValue,
               (int *)((int)&local_c + 4));
    bVar5 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &this->GetFiringSpeed_km__s_MemoizedValue,iVar1);
    if (bVar5) {
      iVar1 = *(int *)((int)&(this->GetFiringSpeed_km__s_MemoizedValue).Data + 4);
      iVar2 = *(int *)&(this->GetFiringSpeed_km__s_MemoizedValue).IsValidData;
      *(code **)(iVar1 + -8 + iVar2 * 8) = (long long int (*)())(GetAccuracyAngle_radians_Clear);
      *(undefined4 *)(iVar1 + -4 + iVar2 * 8) = 0;
    }
    fVar7 = (float10)(**(code **)(this->_pad_0x0_0 + 0x15c))();
    local_34.Data = (double)fVar7;
    local_34.IsValidData = true;
    *(double *)&this->TargetsShips = local_34.Data;
    this[1]._pad_0x0_0 = (*(uint32_t*)((char*)&(local_34)+8));
    this[1]._pad_0x4_1 = (*(uint32_t *)((char *)&(local_34) + 12));
    bVar5 = (char)this[1]._pad_0x0_0 == '\0';
  }
  if (bVar5) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar8 = *(double *)&this->TargetsShips;
  if (dVar8 <= 0.0) {
    dVar8 = 0.0;
  }
  if (3.141592653589793 <= dVar8) {
    dVar8 = 3.141592653589793;
  }
  if (0.0 < dVar8) {
    local_c = dVar8 / 0.8;
    param_1 = param_1 / 3.141592653589793;
    util__Sqrt(&local_34,&param_1);
    if (local_34.IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    param_1 = local_c * 0.5;
    local_c = local_34.Data / 1000.0 + local_34.Data / 1000.0;
    dVar9 = util__Sin(&param_1);
    dVar8 = local_c;
    *(uint32_t *)&local_24 = local_c / (dVar9 + dVar9);
    local_c = 0.980665;
    if ((char)this[1]._pad_0x10_4 == '\0') {
      iVar1 = (int)((this->GetFiringSpeed_km__s_MemoizedValue).IsValidData);
      param_1 = (double)CONCAT44(iVar1 + 1,SUB84(dVar8,0));
      util__Darray_L_util__tuple2_L_Order__Type_Cint_G___G___SetSize
                ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)&this->GetFiringSpeed_km__s_MemoizedValue
                 ,(int *)((int)&param_1 + 4));
      bVar5 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                        ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                         &this->GetFiringSpeed_km__s_MemoizedValue,iVar1);
      if (bVar5) {
        iVar1 = *(int *)((int)&(this->GetFiringSpeed_km__s_MemoizedValue).Data + 4);
      iVar2 = *(int *)&(this->GetFiringSpeed_km__s_MemoizedValue).IsValidData;
        *(code **)(iVar1 + -8 + iVar2 * 8) = (long long int (*)())(GetFiringSpeed_km__s_Clear);
        *(undefined4 *)(iVar1 + -4 + iVar2 * 8) = 0;
      }
      fVar7 = (float10)(**(code **)(this->_pad_0x0_0 + 0x154))();
      uVar3 = uStack_14;
      *(uint64_t *)&local_1c = (double)fVar7;
      uStack_14 = (double)CONCAT71((*(uint56_t*)((char*)&(uStack_14)+1)),1);
      uVar4 = uStack_14;
      (*(uint32_t*)((char*)&(uStack_14)+4)) = SUB84(uVar3,4);
      *(double *)&this[1]._pad_0x8_2 = local_1c;
      this[1]._pad_0x10_4 = (int)uStack_14;
      this[1]._pad_0x14_5 = (*(uint32_t*)((char*)&(uStack_14)+4));
      if ((char)this[1]._pad_0x10_4 == '\0') {
        uStack_14 = (double)uVar4;
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
    }
    uStack_14 = *(double *)&this[1]._pad_0x8_2;
    param_1 = (local_34.Data + local_34.Data) / local_c;
    pMVar6 = util__Sqrt(&local_34,&param_1);
    if (pMVar6->IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    uStack_14 = pMVar6->Data * uStack_14;
    if (uStack_14 <= local_24) {
      *(uint32_t *)&local_24 = uStack_14;
    }
    return local_24;
  }
  return 0.0;
}

//==== 00661a50 GetChartAccurateTargetRange_km ====


/* public: double __thiscall WeaponModule__GetChartAccurateTargetRange_km(double)const  */

double __thiscall WeaponModule__GetChartAccurateTargetRange_km(WeaponModule *this,double param_1)

{
  double dVar1;
  
  dVar1 = GetActualRange_km(this,param_1);
}





//==== 00661a70 GetChartXRanges_00661a70 ====


/* public: struct util__Range_L_double_G_ __thiscall WeaponModule__GetChartXRanges(void)const  */

Range_L_double_G_ * __thiscall
WeaponModule__GetChartXRanges(WeaponModule *this,Range_L_double_G_ *__return_storage_ptr__)

{
  __return_storage_ptr__->Lower = 0.0;
  __return_storage_ptr__->Upper = 5000.0;
  return __return_storage_ptr__;
}





//==== 00661a90 GetChartYRanges_00661a90 ====


/* public: struct util__Range_L_double_G_ __thiscall WeaponModule__GetChartYRanges(void)const  */

Range_L_double_G_ * __thiscall
WeaponModule__GetChartYRanges(WeaponModule *this,Range_L_double_G_ *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = GetActualRange_km(this,5000.0);
  dVar1 = 1.0;
  if (1.0 <= dVar2) {
    dVar1 = dVar2;
  }
  __return_storage_ptr__->Lower = 0.0;
  __return_storage_ptr__->Upper = dVar1;
  if (dVar1 < 0.0) {
    __return_storage_ptr__->Lower = dVar1;
    __return_storage_ptr__->Upper = 0.0;
  }
  return __return_storage_ptr__;
}





//==== 00661b40 GetCostInfo_00661b40 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00661d10) */
/* WARNING: Removing unreachable block (ram,0x00661d1d) */
/* public: virtual class util__Str_L_char_G_ __thiscall WeaponModule__GetCostInfo(void)const  */

Str_L_char_G_ * __thiscall
WeaponModule__GetCostInfo(WeaponModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined8 stack0xfffffe70;
  undefined8 stack0xfffffffc;
  Str_L_char_G_ SVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  LocStr *this_00;
  Str_L_char_G_ *pSVar12;
  Str_L_char_G_ *pSVar13;
  char *in_stack_fffffe70;
  char *pcVar14;
  AmmoInfo *pAVar15;
  AmmoInfo *pAVar16;
  AmmoInfo local_174;
  AmmoInfo local_104;
  void *local_94 [3];
  void *local_88;
  Str_L_char_G_ local_7c;
  Str_L_char_G_ local_70;
  Str_L_char_G_ local_64;
  undefined4 local_58;
  Str_L_char_G_ local_54;
  Str_L_char_G_ local_48;
  Str_L_char_G_ local_3c;
  Str_L_char_G_ local_30;
  Str_L_char_G_ *local_24;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(uint32_t *)&local_24 = (uint32_t)(uintptr_t)(__return_storage_ptr__);
  pAVar16 = &local_174;
  local_58 = 0;
  local_3c.Data = (char *)0x0;
  local_3c.Capacity = 0;
  local_3c.Length = 0;
  iVar11 = (**(code **)(this->_pad_0x0_0 + 0x17c))();
  if (*(char *)(iVar11 + 0x68) == '\0') {
    pcVar14 = (char *)0x0;
    pSVar12 = &local_20;
    bVar10 = false;
    bVar9 = true;
    bVar8 = false;
    bVar7 = false;
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    bVar3 = false;
    bVar2 = false;
    local_20.Data = (char *)0x0;
    local_20.Capacity = 0;
    local_20.Length = 0;
  }
  else {
    util__Str_char___Str_char(&local_54,"GetAmmoInfo()->CostOfOneUnit_c");
    util__Str_char___Str_char(&local_48,"InfoBox WeaponAmmoCost");
    pAVar15 = &local_104;
    pcVar14 = (char *)0x661bba;
    iVar11 = (**(code **)(this->_pad_0x0_0 + 0x17c))();
    if (*(char *)(iVar11 + 0x68) == '\0') {
      pcVar14 = "IsValid()";
      in_stack_fffffe70 = (char *)0x17;
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      pAVar15 = (AmmoInfo *)0x661bde;
      DebugBreak();
    }
    GetUnitsOfType((Str_L_char_G_ *)&stack0xfffffe70,&local_54);
    SVar1.Capacity = (int)pAVar15;
    SVar1.Data = pcVar14;
    SVar1.Length = (int)pAVar16;
    Print(&local_30,
          (double)CONCAT44(in_stack_fffffe70,
                           (int)((ulonglong)*(undefined8 *)(iVar11 + 0x60) >> 0x20)),SVar1);
    local_14.Data = (char *)0x0;
    local_14.Capacity = 0;
    local_14.Length = 0;
    this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)local_94,&local_48,&local_14);
    pSVar12 = util__LocStr__operator__o3(this_00);
    if (pSVar12->Capacity < 1) {
      pcVar14 = "";
    }
    else {
      pcVar14 = pSVar12->Data;
    }
    pSVar12 = util__Printf(&local_7c,(wchar_t*)(pcVar14));
    pSVar13 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_70,"\n");
    local_20.Length = 0;
    local_20.Data = (char *)0x0;
    local_20.Capacity = 0;
    util__Str_char___Str_char(&local_20,pSVar13);
    util__Str_char___operator__o10(&local_20,pSVar12);
    util__Str_char___Str_char(&local_64,&local_20);
    if (local_20.Data != (char *)0x0) {
      port_op_delete(local_20.Data);
    }
    pSVar12 = &local_64;
    bVar10 = true;
    bVar9 = false;
    bVar8 = true;
    bVar7 = true;
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    pcVar14 = local_20.Data;
  }
  util__Str_char___Str_char(&local_3c,pSVar12);
  if ((bVar9) && (pcVar14 != (char *)0x0)) {
    port_op_delete(pcVar14);
  }
  if ((bVar10) && (local_64.Data != (char *)0x0)) {
    port_op_delete(local_64.Data);
  }
  if ((bVar3) && (local_7c.Data != (char *)0x0)) {
    port_op_delete(local_7c.Data);
    local_7c.Data = (char *)0x0;
  }
  if (bVar4) {
    if (local_88 != (void *)0x0) {
      port_op_delete(local_88);
      local_88 = (void *)0x0;
    }
    if (local_94[0] != (void *)0x0) {
      port_op_delete(local_94[0]);
      local_94[0] = (void *)0x0;
    }
  }
  if ((bVar5) && (local_14.Data != (char *)0x0)) {
    port_op_delete(local_14.Data);
    (*(uint64_t*)&(local_14)) = (*(uint64_t*)&(local_14)) & 0xffffffff00000000;
  }
  if ((bVar6) && (local_30.Data != (char *)0x0)) {
    port_op_delete(local_30.Data);
    local_30.Data = (char *)0x0;
  }
  if (bVar7) {
    AmmoInfo___AmmoInfo(&local_104);
  }
  if ((bVar8) && (local_48.Data != (char *)0x0)) {
    port_op_delete(local_48.Data);
    local_48.Data = (char *)0x0;
  }
  if ((local_54.Data != (char *)0x0) && (bVar2)) {
    port_op_delete(local_54.Data);
    local_54.Data = (char *)0x0;
  }
  AmmoInfo___AmmoInfo(&local_174);
  pSVar12 = (Str_L_char_G_ *)(uintptr_t)(Module__GetCostInfo((Module *)this,&local_30));
  local_14.Length = 0;
  local_14.Data = (char *)0x0;
  local_14.Capacity = 0;
  util__Str_char___Str_char(&local_14,pSVar12);
  util__Str_char___operator__o10(&local_14,&local_3c);
  pSVar12 = local_24;
  util__Str_char___Str_char(local_24,&local_14);
  if (local_14.Data != (char *)0x0) {
    port_op_delete(local_14.Data);
  }
  if (local_30.Data != (char *)0x0) {
    port_op_delete(local_30.Data);
    local_30.Data = (char *)0x0;
  }
  if (local_3c.Data != (char *)0x0) {
    port_op_delete(local_3c.Data);
  }
  return pSVar12;
}

//==== 00661eb0 GetCrewRequired_00661eb0 ====

/* public: virtual class util__Darray_L_structCrewJob_G_ __thiscall
   WeaponModule__GetCrewRequired(void)const  */

Darray_L_CrewJob_G_ * __thiscall
WeaponModule__GetCrewRequired(WeaponModule *this,Darray_L_CrewJob_G_ *__return_storage_ptr__)

{
  Darray_L_CrewJob_G_ *this_00;
  Str_L_char_G_ *pSVar1;
  LocStr *pLVar2;
  char *pcVar3;
  int iVar4;
  CraftBlueprint *this_01;
  Darray_L_CrewJob_G_ *pDVar5;
  int iVar6;
  CrewJob *pCVar7;
  char *pcVar8;
  CrewJob *pCVar9;
  float10 fVar10;
  CrewJob local_80;
  void *local_60 [3];
  void *local_54;
  undefined1 local_48 [16];
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  double local_14;
  double local_c;
  
  this_00 = __return_storage_ptr__;
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (CrewJob *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_120;
  __return_storage_ptr__->Data = (CrewJob *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  fVar10 = (float10)(**(code **)(this->_pad_0x0_0 + 0x198))();
  local_14 = 0.2;
  if (((double)fVar10 <= 0.0) ||
     (fVar10 = (float10)(**(code **)(this->_pad_0x0_0 + 0x19c))(), (double)fVar10 <= 0.0)) {
    __return_storage_ptr__ = (Darray_L_CrewJob_G_ *)((uint)__return_storage_ptr__ & 0xffffff);
    local_c = 0.2;
  }
  else {
    __return_storage_ptr__ = (Darray_L_CrewJob_G_ *)CONCAT13(1,(*(uint24_t*)&(__return_storage_ptr__)));
    local_c = 0.3;
  }
  util__Str_char___Str_char((Str_L_char_G_ *)(local_48 + 4),"CrewTechnician");
  pSVar1 = Module__GetQuickName((Module *)this,&local_38);
  if (pSVar1->Capacity < 1) {
    pcVar8 = "";
  }
  else {
    pcVar8 = pSVar1->Data;
  }
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  local_20.Length = 0;
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)local_60,(Str_L_char_G_ *)(local_48 + 4),&local_20);
  pSVar1 = util__LocStr__operator__o3(pLVar2);
  if (pSVar1->Capacity < 1) {
    pcVar3 = "";
  }
  else {
    pcVar3 = pSVar1->Data;
  }
  util__Printf(&local_2c,(wchar_t*)(pcVar3),pcVar8);
  local_80.Dept = CrewDepartment__Engineering;
  util__Str_char___Str_char(&local_80.Name,&local_2c);
  local_80.CrewRequired = local_c;
  local_80.WatchRequired = false;
  if (local_2c.Data != (char *)0x0) {
    port_op_delete(local_2c.Data);
    local_2c.Data = (char *)0x0;
  }
  util__Darray_L_CrewJob_G___Add(this_00,&local_80);
  if (local_80.Name.Data != (char *)0x0) {
    port_op_delete(local_80.Name.Data);
  }
  if (local_54 != (void *)0x0) {
    port_op_delete(local_54);
    *(uint32_t *)&local_54 = (uint32_t)(uintptr_t)((void *)0x0);
  }
  if (local_60[0] != (void *)0x0) {
    port_op_delete(local_60[0]);
    local_60[0] = (void *)0x0;
  }
  if (local_20.Data != (char *)0x0) {
    port_op_delete(local_20.Data);
    local_20.Data = (char *)0x0;
  }
  if (local_38.Data != (char *)0x0) {
    port_op_delete(local_38.Data);
    local_38.Data = (char *)0x0;
  }
  if ((CrewJob *)(*(uint32_t*)((char*)&(local_48)+4)) != (CrewJob *)0x0) {
    port_op_delete((void *)(*(uint32_t*)((char*)&(local_48)+4)));
  }
  if ((*(uint8_t*)((char*)&(__return_storage_ptr__)+3)) != '\0') {
    local_14 = 0.4;
  }
  util__Str_char___Str_char(&local_38,"CrewGunner");
  pSVar1 = Module__GetQuickName((Module *)this,(Str_L_char_G_ *)(local_48 + 4));
  if (pSVar1->Capacity < 1) {
    pcVar8 = "";
  }
  else {
    pcVar8 = pSVar1->Data;
  }
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  local_20.Length = 0;
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)local_60,&local_38,&local_20);
  pSVar1 = util__LocStr__operator__o3(pLVar2);
  if (pSVar1->Capacity < 1) {
    pcVar3 = "";
  }
  else {
    pcVar3 = pSVar1->Data;
  }
  util__Printf(&local_2c,(wchar_t*)(pcVar3),pcVar8);
  local_80.Dept = CrewDepartment__Weapons;
  util__Str_char___Str_char(&local_80.Name,&local_2c);
  local_80.CrewRequired = local_14;
  local_80.WatchRequired = false;
  if (local_2c.Data != (char *)0x0) {
    port_op_delete(local_2c.Data);
    local_2c.Data = (char *)0x0;
  }
  util__Darray_L_CrewJob_G___Add(this_00,&local_80);
  if (local_80.Name.Data != (char *)0x0) {
    port_op_delete(local_80.Name.Data);
  }
  if (local_54 != (void *)0x0) {
    port_op_delete(local_54);
    *(uint32_t *)&local_54 = (uint32_t)(uintptr_t)((void *)0x0);
  }
  if (local_60[0] != (void *)0x0) {
    port_op_delete(local_60[0]);
    local_60[0] = (void *)0x0;
  }
  if (local_20.Data != (char *)0x0) {
    port_op_delete(local_20.Data);
    local_20.Data = (char *)0x0;
  }
  if ((CrewJob *)(*(uint32_t*)((char*)&(local_48)+4)) != (CrewJob *)0x0) {
    port_op_delete((void *)(*(uint32_t*)((char*)&(local_48)+4)));
    (*(uint32_t*)((char*)&(local_48)+4)) = (uint32_t)(uintptr_t)((CrewJob *)0x0);
  }
  if (local_38.Data != (char *)0x0) {
    port_op_delete(local_38.Data);
  }
  iVar4 = (**(code **)(this->_pad_0x0_0 + 0x188))();
  if (iVar4 != 0) {
    pDVar5 = (Darray_L_CrewJob_G_ *)local_48;
    this_01 = (CraftBlueprint *)(**(code **)(this->_pad_0x0_0 + 0x188))();
    pDVar5 = CraftBlueprint__GetCrewRequiredForUseAsPayload(this_01,pDVar5);
    if (this_00->Size == 0) {
      util__Darray_L_CrewJob_G___op_assign(this_00,(Darray_L_struct_CrewJob_G_ *)pDVar5);
      Darray_L_CrewJob_G___dtor((Darray_L_CrewJob_G_ *)local_48);
      return this_00;
    }
    iVar4 = (**(code **)(pDVar5->_pad_0x0_0 + 0xc))();
    if (iVar4 != 0) {
      iVar4 = this_00->Size;
      iVar6 = (**(code **)(pDVar5->_pad_0x0_0 + 0xc))();
      __return_storage_ptr__ = (Darray_L_CrewJob_G_ *)(iVar6 + this_00->Size);
      util__Darray_L_CrewJob_G___SetSize(this_00,(int *)&__return_storage_ptr__);
      util__Darray_L_CrewJob_G___CheckSize(this_00,iVar4);
      pCVar7 = this_00->Data + iVar4;
      pCVar9 = pDVar5->Data;
      if (pCVar7 != this_00->Data + this_00->Size) {
        do {
          pCVar7->Dept = pCVar9->Dept;
          util__Str_char___operator__o8(&pCVar7->Name,&pCVar9->Name);
          pCVar7->CrewRequired = pCVar9->CrewRequired;
          pCVar7->WatchRequired = pCVar9->WatchRequired;
          pCVar7 = pCVar7 + 1;
          pCVar9 = pCVar9 + 1;
        } while (pCVar7 != this_00->Data + this_00->Size);
      }
    }
    Darray_L_CrewJob_G___dtor((Darray_L_CrewJob_G_ *)local_48);
  }
  return this_00;
}

//==== 00662580 GetDefaultTargetDirection ====


/* public: static struct util__Vec3_L_double_G_ __cdecl
   WeaponCompartment__GetDefaultTargetDirection(void) */

Vec3_L_double_G_ * __cdecl
WeaponCompartment__GetDefaultTargetDirection(Vec3_L_double_G_ *__return_storage_ptr__)

{
  FixedOrbit__GetPlanarNormal(__return_storage_ptr__);
  return __return_storage_ptr__;
}





//==== 00662b00 GetFiringSpeed_km__s_Clear ====

/* public: void __thiscall WeaponModule__GetFiringSpeed_km__s_Clear(void)const  */

void __thiscall WeaponModule__GetFiringSpeed_km__s_Clear(WeaponModule *this)

{
  *(undefined1 *)&this[1]._pad_0x10_4 = 0;
  this[1]._pad_0x8_2 = 0;
  this[1]._pad_0xc_3 = 0;
  return;
}

//==== 00662b20 GetFiringSpeed_km__s_Memoize ====

/* public: void __thiscall WeaponModule__GetFiringSpeed_km__s_Memoize(void)const  */

void __thiscall WeaponModule__GetFiringSpeed_km__s_Memoize(WeaponModule *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  float10 fVar4;
  int iStack_10;
  int iStack_c;
  int local_8;
  
  if ((char)this[1]._pad_0x10_4 == '\0') {
    iVar1 = (int)((this->GetFiringSpeed_km__s_MemoizedValue).IsValidData);
    local_8 = iVar1 + 1;
    util__Darray_L_util__tuple2_L_Order__Type_Cint_G___G___SetSize
              ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)&this->GetFiringSpeed_km__s_MemoizedValue,
               &local_8);
    bVar3 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &this->GetFiringSpeed_km__s_MemoizedValue,iVar1);
    if (bVar3) {
      iVar1 = *(int *)((int)&(this->GetFiringSpeed_km__s_MemoizedValue).Data + 4);
      iVar2 = *(int *)&(this->GetFiringSpeed_km__s_MemoizedValue).IsValidData;
      *(code **)(iVar1 + -8 + iVar2 * 8) = (long long int (*)())(GetFiringSpeed_km__s_Clear);
      *(undefined4 *)(iVar1 + -4 + iVar2 * 8) = 0;
    }
    fVar4 = (float10)(**(code **)(this->_pad_0x0_0 + 0x154))();
    iStack_10 = CONCAT31((*(uint24_t*)((char*)&(iStack_10)+1)),1);
    *(double *)&this[1]._pad_0x8_2 = (double)fVar4;
    this[1]._pad_0x10_4 = iStack_10;
    this[1]._pad_0x14_5 = iStack_c;
  }
  return;
}

//==== 00662f40 GetInfoBoxes_00662f40 ====


/* public: virtual class util__Darray_L_structInfoBox_G_ __thiscall
   WeaponModule__GetInfoBoxes(void)const  */

Darray_L_struct_InfoBox_G_ * __thiscall WeaponModule__GetInfoBoxes(WeaponModule *this, Darray_L_struct_InfoBox_G_ *__return_buf__)

{
  Darray_L_struct_InfoBox_G_ *in_stack_00000004 = __return_buf__;
  undefined8 stack0xfffffffc;
  LocStr *pLVar1;
  Str_L_char_G_ *pSVar2;
  InfoBox *pIVar3;
  Darray_L_struct_InfoBox_G_ *pDVar4;
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
  util__Str_char___Str_char(&SStack_30,"InfoBox WeaponShot Tooltip");
  SStack_24.Data = (char *)0x0;
  SStack_24.Capacity = 0;
  SStack_24.Length = 0;
  pcStack_a4 = (char *)0x662faf;
  pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_4c,&SStack_30,&SStack_24);
  pSVar2 = util__LocStr__operator__o3(pLVar1);
  uVar5 = 0;
  uVar6 = 0;
  util__Str_char___Str_char((Str_L_char_G_ *)&pcStack_a4,pSVar2);
  pIVar3 = (InfoBox *)
           InfoBox__InfoBox(&IStack_84,Icons__Bullet,this,(_func___cdecl_Str_L_char_G__void_ptr*)(util__DelegateFactory_class_WeaponModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_WeaponModule__GetShotInfo_void_const__0),0,0,0,(void *)(uintptr_t)(uVar5),(_func___cdecl_Str_L_char_G__void_ptr*)(uVar6),0,0,0,(Delegate_L_bool_G_){0},0);
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
  util__Str_char___Str_char(&SStack_30,"InfoBox WeaponRange Tooltip");
  SStack_24.Data = (char *)0x0;
  SStack_24.Capacity = 0;
  SStack_24.Length = 0;
  pcStack_a4 = (char *)0x6630d1;
  pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_4c,&SStack_30,&SStack_24);
  pSVar2 = util__LocStr__operator__o3(pLVar1);
  uVar5 = 0;
  uVar6 = 0;
  util__Str_char___Str_char((Str_L_char_G_ *)&pcStack_a4,pSVar2);
  pIVar3 = (InfoBox *)
           InfoBox__InfoBox(&IStack_84,Icons__RangeMarker,this,(_func___cdecl_Str_L_char_G__void_ptr*)(util__DelegateFactory_class_WeaponModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_WeaponModule__GetRangeInfo_void_const__0),0,0,0,(void *)(uintptr_t)(uVar5),(_func___cdecl_Str_L_char_G__void_ptr*)(uVar6),0,0,0,(Delegate_L_bool_G_){0},0);
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
  util__Str_char___Str_char(&SStack_30,"InfoBox WeaponReload Tooltip");
  SStack_24.Data = (char *)0x0;
  SStack_24.Capacity = 0;
  SStack_24.Length = 0;
  pcStack_a4 = (char *)0x6631f3;
  pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_4c,&SStack_30,&SStack_24);
  pSVar2 = util__LocStr__operator__o3(pLVar1);
  uVar5 = 0;
  uVar6 = 0;
  util__Str_char___Str_char((Str_L_char_G_ *)&pcStack_a4,pSVar2);
  pIVar3 = (InfoBox *)
           InfoBox__InfoBox(&IStack_84,Icons__TightTimeLimitBadge,this,(_func___cdecl_Str_L_char_G__void_ptr*)(util__DelegateFactory_class_WeaponModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_WeaponModule__GetReloadInfo_void_const__0),0,0,0,(void *)(uintptr_t)(uVar5),(_func___cdecl_Str_L_char_G__void_ptr*)(uVar6),0,0,0,(Delegate_L_bool_G_){0},0);
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
  util__Str_char___Str_char(&SStack_30,"InfoBox WeaponTurret Tooltip");
  SStack_24.Data = (char *)0x0;
  SStack_24.Capacity = 0;
  SStack_24.Length = 0;
  pcStack_a4 = (char *)0x663315;
  pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_4c,&SStack_30,&SStack_24);
  pSVar2 = util__LocStr__operator__o3(pLVar1);
  uVar5 = 0;
  uVar6 = 0;
  util__Str_char___Str_char((Str_L_char_G_ *)&pcStack_a4,pSVar2);
  pIVar3 = (InfoBox *)
           InfoBox__InfoBox(&IStack_84,(_func___cdecl_void *)(uintptr_t)(Icons__FiringArc),this,(_func___cdecl_Str_L_char_G__void_ptr*)(util__DelegateFactory_class_WeaponModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_WeaponModule__GetTurretInfo_void_const__0),0,0,0,(void *)(uintptr_t)uVar5,(_func___cdecl_Str_L_char_G__void_ptr *)(uintptr_t)(uVar6),0,0,0,(Delegate_L_bool_G_){0},0);
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
  return in_stack_00000004;
}





//==== 006649c0 GetReloadChargeTime_s ====

/* public: double __thiscall WeaponModule__GetReloadChargeTime_s(void)const  */

double __thiscall WeaponModule__GetReloadChargeTime_s(WeaponModule *this)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)(**(code **)(this->_pad_0x0_0 + 0x1c0))();
  fVar2 = (float10)(**(code **)(this->_pad_0x0_0 + 0x1b8))();
  return (double)(fVar2 + (float10)(double)fVar1);
}

//==== 006655b0 GetStartingAmmo ====

/* public: double __thiscall WeaponModule__GetStartingAmmo(void)const  */

double __thiscall WeaponModule__GetStartingAmmo(WeaponModule *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(this->_pad_0x0_0 + 0x184))();
  return (double)iVar1;
}

//==== 006655d0 GetStatusBarIcon_006655d0 ====


/* public: virtual void (__cdecl*__thiscall WeaponModule__GetStatusBarIcon(void)const )(void) */

_func_void * __thiscall WeaponModule__GetStatusBarIcon(WeaponModule *this)

{
  return Icons__OutOfAmmo;
}





//==== 00666820 InnerSortFunction_00666820 ====

/* public: virtual bool __thiscall WeaponModule__InnerSortFunction(class Module const *,class Module
   const *)const  */

bool __thiscall WeaponModule__InnerSortFunction(WeaponModule *this,Module *param_1,Module *param_2)

{
  bool bVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)(**(code **)(param_1->_pad_0x0_0 + 0x9c))();
  fVar3 = (float10)(**(code **)(param_2->_pad_0x0_0 + 0x9c))();
  if ((double)fVar2 == (double)fVar3) {
    bVar1 = Module__InnerSortFunction((Module *)this,param_1,param_2);
  }
  fVar2 = (float10)(**(code **)(param_1->_pad_0x0_0 + 0x9c))();
  fVar3 = (float10)(**(code **)(param_2->_pad_0x0_0 + 0x9c))();
  return (double)fVar2 < (double)fVar3;
}

//==== 006671e0 IsTurreted ====

/* public: bool __thiscall WeaponModule__IsTurreted(void)const  */

bool __thiscall WeaponModule__IsTurreted(WeaponModule *this)

{
  float10 fVar1;
  
  fVar1 = (float10)(**(code **)(this->_pad_0x0_0 + 0x198))();
  if (0.0 < (double)fVar1) {
    fVar1 = (float10)(**(code **)(this->_pad_0x0_0 + 0x19c))();
    if (0.0 < (double)fVar1) {
      return true;
    }
  }
  return false;
}

//==== 006672d0 RequiresReloading ====

/* public: bool __thiscall WeaponModule__RequiresReloading(void)const  */

bool __thiscall WeaponModule__RequiresReloading(WeaponModule *this)

{
  float10 fVar1;
  
  fVar1 = (float10)(**(code **)(this->_pad_0x0_0 + 0x1b8))();
  if ((double)fVar1 <= 0.0) {
    fVar1 = (float10)(**(code **)(this->_pad_0x0_0 + 0x1c4))();
    if ((double)fVar1 <= 0.0) {
      fVar1 = (float10)(**(code **)(this->_pad_0x0_0 + 0x1c0))();
      if ((double)fVar1 <= 0.0) {
        return false;
      }
    }
  }
  return true;
}

//==== 00667910 StaticGetPropertyGetters_00667910 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cdouble___thiscall_util__Reflectable___P__void_const_G__G_ __thiscall WeaponModule__StaticGetPropertyGetters(void)const
    */

void __thiscall WeaponModule__StaticGetPropertyGetters(WeaponModule *this)

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
  (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)(this);
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_0097881c) &&
     (_Init_thread_header(&DAT_0097881c), DAT_0097881c == -1)) {
    puVar5 = (undefined4 *)port_op_new(0xa4);
    if (puVar5 == (undefined4 *)0x0) {
      DAT_0095f3b4 = (undefined4)(uintptr_t)((Str_L_char_G_ *)0x0);
    }
    else {
      DAT_0095f3b4 = (undefined4)(uintptr_t)((Str_L_char_G_ *)(puVar5 + 1));
      *puVar5 = 10;
      iVar10 = 10;
      pSVar3 = (Str_L_char_G_ *)(uintptr_t)(DAT_0095f3b4);
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
    if (0 < DAT_0095f3bc) {
      (*(uint32_t*)&(auStack_24)) = (uint32_t)(uintptr_t)((char *)0x0);
      iVar9 = 0;
      (*(uint32_t*)((char*)&(auStack_24)+4)) = (uint32_t)(uintptr_t)((void *)0x0);
      iStack_1c = 0;
      uStack_18 = 0;
      do {
        pSVar3 = (Str_L_char_G_ *)((int)(int)(uintptr_t)(DAT_0095f3b4) + iVar9);
        util__Str_char___operator__o8(pSVar3,(Str_L_char_G_ *)auStack_24);
        iVar10 = iVar10 + 1;
        pSVar3[1].Data = (char *)0x0;
        iVar9 = iVar9 + 0x10;
      } while (iVar10 < DAT_0095f3bc);
    }
    atexit(FUN_008fb7d0);
    iStack_3c = 0x667e9d;
    _Init_thread_footer(&DAT_0097881c);
  }
  if (DAT_0095f3b8 == 0) {
    pDVar2 = (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__G___G_
              *)Module__StaticGetPropertyGetters((Module *)(*(uint32_t*)((char*)&(uStack_14)+4)));
    util__Darray_struct_util__tuple2_class_util__Str_char__double____thiscall_util__Reflectable_____void_const______operator((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__G___G_
                 *)&PTR__vftable__0095f3b0,pDVar2);
    util__Darray_struct_util__tuple2_class_util__Str_char__double____thiscall_util__Reflectable_____void_const_______Darray_struct_util__tuple2_class_util__Str_char__double____thiscall_util__Reflectable_____void_const((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__G___G_
                *)auStack_24);
    pSVar8 = (Str_L_char_G_ *)&stack0xffffffc0;
    (*(uint32_t*)&(uStack_14)) = 0;
    (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)((WeaponModule *)((uint)(*(uint32_t*)((char*)&(uStack_14)+4)) & 0xffffff00));
    pMVar11 = (Maybe_L_int_G_ *)&uStack_14;
    iVar10 = 3;
    pSVar3 = (Str_L_char_G_ *)
             util__Str_char___Str_char((Str_L_char_G_ *)(auStack_24 + 4),"GetTurningPowerDrain_W");
    util__Str_char___SubStr(pSVar3,pSVar8,iVar10,pMVar11);
    FUN_0065e080();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
    pSVar8 = (Str_L_char_G_ *)&stack0xffffffc0;
    (*(uint32_t*)&(uStack_14)) = 0;
    (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)((WeaponModule *)((uint)(*(uint32_t*)((char*)&(uStack_14)+4)) & 0xffffff00));
    pMVar11 = (Maybe_L_int_G_ *)&uStack_14;
    iVar10 = 3;
    pSVar3 = (Str_L_char_G_ *)
             util__Str_char___Str_char((Str_L_char_G_ *)(auStack_24 + 4),"GetReloadPower_W");
    util__Str_char___SubStr(pSVar3,pSVar8,iVar10,pMVar11);
    FUN_0065e080();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
    pSVar8 = (Str_L_char_G_ *)&stack0xffffffc0;
    (*(uint32_t*)&(uStack_14)) = 0;
    (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)((WeaponModule *)((uint)(*(uint32_t*)((char*)&(uStack_14)+4)) & 0xffffff00));
    pMVar11 = (Maybe_L_int_G_ *)&uStack_14;
    iVar10 = 3;
    pSVar3 = (Str_L_char_G_ *)
             util__Str_char___Str_char((Str_L_char_G_ *)(auStack_24 + 4),"GetChargingPower_W");
    util__Str_char___SubStr(pSVar3,pSVar8,iVar10,pMVar11);
    FUN_0065e080();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
    pSVar8 = (Str_L_char_G_ *)&stack0xffffffc0;
    (*(uint32_t*)&(uStack_14)) = 0;
    (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)((WeaponModule *)((uint)(*(uint32_t*)((char*)&(uStack_14)+4)) & 0xffffff00));
    pMVar11 = (Maybe_L_int_G_ *)&uStack_14;
    iVar10 = 3;
    pSVar3 = (Str_L_char_G_ *)
             util__Str_char___Str_char((Str_L_char_G_ *)(auStack_24 + 4),"GetChargingTime_s");
    util__Str_char___SubStr(pSVar3,pSVar8,iVar10,pMVar11);
    FUN_0065e080();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
    pSVar8 = (Str_L_char_G_ *)&stack0xffffffc0;
    (*(uint32_t*)&(uStack_14)) = 0;
    (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)((WeaponModule *)((uint)(*(uint32_t*)((char*)&(uStack_14)+4)) & 0xffffff00));
    pMVar11 = (Maybe_L_int_G_ *)&uStack_14;
    iVar10 = 3;
    pSVar3 = (Str_L_char_G_ *)
             util__Str_char___Str_char((Str_L_char_G_ *)(auStack_24 + 4),"GetCooldownTime_s");
    util__Str_char___SubStr(pSVar3,pSVar8,iVar10,pMVar11);
    FUN_0065e080();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
    pSVar8 = (Str_L_char_G_ *)&stack0xffffffc0;
    (*(uint32_t*)&(uStack_14)) = 0;
    (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)((WeaponModule *)((uint)(*(uint32_t*)((char*)&(uStack_14)+4)) & 0xffffff00));
    pMVar11 = (Maybe_L_int_G_ *)&uStack_14;
    iVar10 = 3;
    pSVar3 = (Str_L_char_G_ *)
             util__Str_char___Str_char((Str_L_char_G_ *)(auStack_24 + 4),"GetMinimumOverheatTime_s");
    util__Str_char___SubStr(pSVar3,pSVar8,iVar10,pMVar11);
    FUN_0065e080();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
    pSVar8 = (Str_L_char_G_ *)&stack0xffffffc0;
    (*(uint32_t*)&(uStack_14)) = 0;
    (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)((WeaponModule *)((uint)(*(uint32_t*)((char*)&(uStack_14)+4)) & 0xffffff00));
    pMVar11 = (Maybe_L_int_G_ *)&uStack_14;
    iVar10 = 3;
    pSVar3 = (Str_L_char_G_ *)
             util__Str_char___Str_char
                       ((Str_L_char_G_ *)(auStack_24 + 4),"GetMaxDeviationAngle_radians");
    util__Str_char___SubStr(pSVar3,pSVar8,iVar10,pMVar11);
    FUN_0065e080();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
    pSVar8 = (Str_L_char_G_ *)&stack0xffffffc0;
    (*(uint32_t*)&(uStack_14)) = 0;
    (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)((WeaponModule *)((uint)(*(uint32_t*)((char*)&(uStack_14)+4)) & 0xffffff00));
    pMVar11 = (Maybe_L_int_G_ *)&uStack_14;
    iVar10 = 3;
    pSVar3 = (Str_L_char_G_ *)
             util__Str_char___Str_char
                       ((Str_L_char_G_ *)(auStack_24 + 4),"GetTurningAngularVelocity_radians__s");
    util__Str_char___SubStr(pSVar3,pSVar8,iVar10,pMVar11);
    FUN_0065e080();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
    pSVar8 = (Str_L_char_G_ *)&stack0xffffffc0;
    (*(uint32_t*)&(uStack_14)) = 0;
    (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)((WeaponModule *)((uint)(*(uint32_t*)((char*)&(uStack_14)+4)) & 0xffffff00));
    pMVar11 = (Maybe_L_int_G_ *)&uStack_14;
    iVar10 = 3;
    pSVar3 = (Str_L_char_G_ *)
             util__Str_char___Str_char((Str_L_char_G_ *)(auStack_24 + 4),"GetReloadTime_s");
    util__Str_char___SubStr(pSVar3,pSVar8,iVar10,pMVar11);
    FUN_0065e080();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
    pSVar8 = (Str_L_char_G_ *)&stack0xffffffc0;
    (*(uint32_t*)&(uStack_14)) = 0;
    (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)((WeaponModule *)((uint)(*(uint32_t*)((char*)&(uStack_14)+4)) & 0xffffff00));
    pMVar11 = (Maybe_L_int_G_ *)&uStack_14;
    iVar10 = 3;
    pSVar3 = (Str_L_char_G_ *)
             util__Str_char___Str_char((Str_L_char_G_ *)(auStack_24 + 4),"GetStartingAmmo");
    util__Str_char___SubStr(pSVar3,pSVar8,iVar10,pMVar11);
    FUN_0065e080();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
    pSVar8 = (Str_L_char_G_ *)&stack0xffffffc0;
    (*(uint32_t*)&(uStack_14)) = 0;
    (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)((WeaponModule *)((uint)(*(uint32_t*)((char*)&(uStack_14)+4)) & 0xffffff00));
    pMVar11 = (Maybe_L_int_G_ *)&uStack_14;
    iVar10 = 3;
    pSVar3 = (Str_L_char_G_ *)
             util__Str_char___Str_char((Str_L_char_G_ *)(auStack_24 + 4),"GetAccuracy_radians");
    util__Str_char___SubStr(pSVar3,pSVar8,iVar10,pMVar11);
    FUN_0065e080();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
    pSVar8 = (Str_L_char_G_ *)&stack0xffffffc0;
    (*(uint32_t*)&(uStack_14)) = 0;
    (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)((WeaponModule *)((uint)(*(uint32_t*)((char*)&(uStack_14)+4)) & 0xffffff00));
    pMVar11 = (Maybe_L_int_G_ *)&uStack_14;
    iVar10 = 3;
    pSVar3 = (Str_L_char_G_ *)
             util__Str_char___Str_char((Str_L_char_G_ *)(auStack_24 + 4),"GetFiringVelocity_km__s");
    util__Str_char___SubStr(pSVar3,pSVar8,iVar10,pMVar11);
    FUN_0065e080();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
  }
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = (undefined **)(&PTR_vftable_0095f33c);
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(int *)(in_stack_00000004 + 0xc) = DAT_0095f3bc;
  (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)((WeaponModule *)(**(code **)(uintptr_t)(PTR__vftable__0095f3b0 + 0xc))());
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
  pSVar8 = (Str_L_char_G_ *)(uintptr_t)(DAT_0095f3b4);
  if (DAT_0095f3b4 != (Str_L_char_G_ *)(DAT_0095f3b8 * 0x10 + (int)DAT_0095f3b4)) {
    do {
      util__Str_char___operator__o8(pSVar3,pSVar8);
      pSVar1 = pSVar8 + 1;
      pSVar8 = (Str_L_char_G_ *)&pSVar8[1].Capacity;
      pSVar3[1].Data = pSVar1->Data;
      pSVar3 = (Str_L_char_G_ *)&pSVar3[1].Capacity;
    } while (pSVar8 != (Str_L_char_G_ *)(DAT_0095f3b8 * 0x10 + (int)DAT_0095f3b4));
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00667eb0 TargetsAnything ====

/* public: virtual bool __thiscall WeaponModule__TargetsAnything(void)const  */

bool __thiscall WeaponModule__TargetsAnything(WeaponModule *this)

{
  if (((char)this[1]._pad_0x18_6 == '\0') && (*(char *)((int)&this[1]._pad_0x18_6 + 1) == '\0')) {
    return false;
  }
  return true;
}

//==== 00668210 GetComposition_00668210 ====


/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   BarrelArmorSubModule__GetComposition(void)const  */

Darray_L_struct_MaterialConstituent_G_ * __thiscall
BarrelArmorSubModule__GetComposition(BarrelArmorSubModule *this)

{
  undefined8 stack0x00000004;
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  Darray_L_struct_MaterialConstituent_G_ *this_00;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  double dVar9;
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
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  if (0.0 < *(double *)(this + 0x18)) {
    dVar2 = *(double *)(this + 0x30);
    iVar7 = *(int *)(this + 0x10);
    dVar9 = dVar2 + *(double *)(this + 0x18);
    dVar3 = *(double *)(this + 0x38);
    dVar4 = *(double *)(iVar7 + 0x30);
    if ((*(int *)(this + 0x88) == 0) || (*(code **)(uintptr_t)(this + 0x8c) == (code *)0x0)) {
      iVar6 = 0;
      iVar8 = 0;
    }
    else {
      iVar6 = (**(code **)(uintptr_t)(this + 0x8c))(*(int *)(this + 0x88));
      iVar7 = *(int *)(this + 0x10);
      iVar8 = *(int *)(in_stack_00000004 + 8);
    }
    in_stack_00000004 = (Darray_L_struct_MaterialConstituent_G_ *)(iVar8 + 1);
    util__Darray_struct_MaterialConstituent___SetSize(this_00,(int *)&stack0x00000004);
    bVar5 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                      ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar8);
    if (bVar5) {
      piVar1 = (int *)(*(int *)(this_00 + 4) + -0x10 + *(int *)(this_00 + 8) * 0x10);
      *piVar1 = iVar7;
      piVar1[1] = iStack_10;
      *(double *)(piVar1 + 2) =
           (double)iVar6 *
           (dVar9 * 3.141592653589793 * dVar9 - dVar2 * 3.141592653589793 * dVar2) * dVar3 * dVar4;
      return this_00;
    }
  }
  return this_00;
}





//==== 00668320 GetStatuses_00668320 ====

/* public: virtual class DesignStatusBuffer  BarrelArmorSubModule__GetStatuses(class
   DataParser *)const  */

DesignStatusBuffer * 
BarrelArmorSubModule__GetStatuses
          (BarrelArmorSubModule *this,DesignStatusBuffer *__return_storage_ptr__,DataParser *param_1
          )

{
  undefined8 stack0xffffff58;
  undefined8 stack0xffffff5c;
  Str_L_char_G_ SVar1;
  Str_L_char_G_ SVar2;
  Str_L_char_G_ SVar3;
  Str_L_char_G_ *pSVar4;
  Str_L_char_G_ *pSVar5;
  char *pcVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  char *in_stack_ffffff5c;
  Str_L_char_G_ *pSVar12;
  int in_stack_ffffff60;
  int in_stack_ffffff64;
  Str_L_char_G_ *pSVar13;
  ModulePlacer *pMVar14;
  Str_L_char_G_ local_84;
  double local_78;
  Str_L_char_G_ local_70;
  Str_L_char_G_ local_64;
  double local_58;
  Str_L_char_G_ local_50;
  Str_L_char_G_ local_44;
  undefined1 local_38 [4];
  undefined8 local_34;
  double local_2c;
  undefined1 local_24 [4];
  undefined8 local_20;
  Str_L_char_G_ local_18;
  double local_c;
  
  __return_storage_ptr__->DataManager = (DataParser *)0x0;
  (__return_storage_ptr__->Messages)._pad_0x0_0 = 0;
  (__return_storage_ptr__->Messages).Data = (DesignStatusMessage *)0x0;
  (__return_storage_ptr__->Messages).Size = 0;
  (undefined8)((__return_storage_ptr__->Messages).Capacity = 0);
  DesignStatusBuffer__DesignStatusBuffer(__return_storage_ptr__,param_1);
  util__Str_char___Str_char(&local_44,"GetBeamDeflectionStress_Pa()");
  util__Str_char___Str_char(&local_50,"GetAverageYieldStrength_Pa()");
  util__Str_char___Str_char(&local_70,"BarrelBeamDeflectionStress");
  local_18.Data = (char *)0x0;
  local_18.Capacity = 0;
  local_18.Length = 0;
  local_2c = *(double *)(this + 0x18) /
             ((*(double *)(this + 0x18) + *(double *)(this + 0x30)) - *(double *)(this + 0x28));
  if (local_2c <= 0.0) {
    *(uint32_t *)&local_2c = 0.0;
  }
  if (1.0 <= local_2c) {
    *(uint32_t *)&local_2c = 1.0;
  }
  local_78 = Material__GetYieldStrength_Pa(*(Material **)(this + 0x24));
  local_58 = Material__GetYieldStrength_Pa(*(Material **)(this + 0x10));
  local_20 = *(double *)(this + 0x18) /
             ((*(double *)(this + 0x18) + *(double *)(this + 0x30)) - *(double *)(this + 0x28));
  if (local_20 <= 0.0) {
    local_20 = 0.0;
  }
  if (1.0 <= local_20) {
    local_20 = 1.0;
  }
  local_c = Material__GetYieldStrength_Pa(*(Material **)(this + 0x24));
  *(uint32_t *)&local_34 = Material__GetYieldStrength_Pa(*(Material **)(this + 0x10));
  pMVar14 = (ModulePlacer *)0x0;
  pSVar13 = &local_18;
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff5c,&local_44);
  dVar10 = GetBeamDeflectionStress_Pa(this);
  pcVar6 = (char *)((ulonglong)dVar10 >> 0x20);
  SVar3.Capacity = in_stack_ffffff64;
  SVar3.Data = (char *)in_stack_ffffff60;
  SVar3.Length = (int)pSVar13;
  pSVar4 = Print(&local_64,(double)CONCAT44(in_stack_ffffff5c,pcVar6),SVar3);
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff58,&local_50);
  SVar1.Capacity = in_stack_ffffff60;
  SVar1.Data = in_stack_ffffff5c;
  SVar1.Length = (int)pSVar4;
  pSVar5 = Print(&local_84,
                 (double)CONCAT44(pcVar6,(int)((ulonglong)
                                               ((1.0 - local_2c) * local_78 + local_2c * local_58)
                                              >> 0x20)),SVar1);
  pSVar12 = &local_70;
  *(uint32_t *)&local_34 = (1.0 - local_20) * local_c + local_20 * local_34;
  local_c = GetBeamDeflectionStress_Pa(this);
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,local_34 < local_c,pSVar12,pSVar5,pSVar4,pSVar13,pMVar14);
  if (local_84.Data != (char *)0x0) {
    port_op_delete(local_84.Data);
    local_84.Data = (char *)0x0;
  }
  if (local_64.Data != (char *)0x0) {
    port_op_delete(local_64.Data);
    local_64.Data = (char *)0x0;
  }
  if (local_18.Data != (char *)0x0) {
    port_op_delete(local_18.Data);
    local_18.Data = (char *)0x0;
  }
  if (local_70.Data != (char *)0x0) {
    port_op_delete(local_70.Data);
    local_70.Data = (char *)0x0;
  }
  if (local_50.Data != (char *)0x0) {
    port_op_delete(local_50.Data);
    local_50.Data = (char *)0x0;
  }
  if (local_44.Data != (char *)0x0) {
    port_op_delete(local_44.Data);
  }
  util__Str_char___Str_char(&local_44,"BarrelThermalExpansionStress");
  dVar10 = *(double *)(this + 0x18);
  *(uint32_t *)&local_24 = (uint32_t)0x0;
  (*(uint32_t*)&(local_20)) = 0;
  (*(uint32_t*)((char*)&(local_20)+4)) = 0;
  *(uint32_t *)&local_38 = (uint32_t)0x0;
  (*(uint32_t*)&(local_34)) = 0;
  (*(uint32_t*)((char*)&(local_34)+4)) = 0;
  local_18.Data = (char *)0x0;
  local_18.Capacity = 0;
  local_18.Length = 0;
  if (dVar10 <= 0.0) {
    local_58 = 0.0;
  }
  else {
    local_58 = Material__GetThermalExpansionMaxTemperatureDelta_K(*(Material **)(this + 0x10));
    local_c = local_58;
  }
  dVar11 = Material__GetThermalExpansionMaxTemperatureDelta_K(*(Material **)(this + 0x24));
  uVar8 = SUB84(dVar11,0);
  uVar9 = (undefined4)((ulonglong)dVar11 >> 0x20);
  if ((dVar10 > 0.0) && (local_58 <= dVar11)) {
    uVar8 = SUB84(local_58,0);
    uVar9 = (undefined4)((ulonglong)local_58 >> 0x20);
  }
  pMVar14 = (ModulePlacer *)0x0;
  pSVar13 = (Str_L_char_G_ *)local_24;
  *(uint64_t *)&local_2c = (double)CONCAT44(uVar9,uVar8);
  pSVar12 = (Str_L_char_G_ *)local_38;
  pSVar4 = &local_18;
  pSVar5 = &local_44;
  local_c = GetAverageFiringTemperatureDelta_K(this);
  pcVar6 = (char *)(uint)(local_2c < local_c);
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,local_2c < local_c,pSVar5,pSVar4,pSVar12,pSVar13,pMVar14);
  if (local_18.Data != (char *)0x0) {
    port_op_delete(local_18.Data);
    local_18.Data = (char *)0x0;
  }
  if (local_38 != (uint32_t)0x0) {
    port_op_delete((void *)local_38);
    *(uint32_t *)&local_38 = (uint32_t)0x0;
  }
  if (local_24 != (uint32_t)0x0) {
    port_op_delete((void *)local_24);
    *(uint32_t *)&local_24 = (uint32_t)0x0;
  }
  if (local_44.Data != (char *)0x0) {
    port_op_delete(local_44.Data);
  }
  util__Str_char___Str_char(&local_64,"CachedPeakPressure_Pa");
  util__Str_char___Str_char(&local_50,"BarrelInternalPressureTooGreat");
  *(uint32_t *)&local_34 = *(double *)(this + 0x18) + *(double *)(this + 0x30);
  local_c = Material__GetYieldStrength_Pa(*(Material **)(this + 0x24));
  local_c = *(double *)(this + 0x50) / local_c;
  dVar10 = local_c;
  libm_sse2_exp_precise(0.0);
  if ((NAN(dVar10)) || ((dVar10 != 0.0 && (NAN(dVar10 / dVar10))))) {
LAB_00668710:
    dVar10 = 0.0;
  }
  else {
    local_c = Material__GetYieldStrength_Pa(*(Material **)(this + 0x24));
    local_c = *(double *)(this + 0x50) / local_c;
    dVar10 = local_c;
    libm_sse2_exp_precise(0.0);
    if (1e+15 < dVar10) goto LAB_00668710;
    local_c = Material__GetYieldStrength_Pa(*(Material **)(this + 0x24));
    local_c = *(double *)(this + 0x50) / local_c;
    dVar10 = local_c;
    libm_sse2_exp_precise(0.0);
    dVar10 = *(double *)(this + 0x28) * dVar10;
  }
  if (dVar10 <= local_34) {
    local_c = Material__GetYieldStrength_Pa(*(Material **)(this + 0x24));
    local_c = *(double *)(this + 0x50) / local_c;
    dVar10 = local_c;
    libm_sse2_exp_precise(0.0);
    if ((!NAN(dVar10) && !NAN(dVar10)) && ((dVar10 == 0.0 || (!NAN(dVar10 / dVar10))))) {
      local_c = Material__GetYieldStrength_Pa(*(Material **)(this + 0x24));
      local_c = *(double *)(this + 0x50) / local_c;
      dVar10 = local_c;
      libm_sse2_exp_precise(0.0);
      if (dVar10 <= 1e+15) {
        bVar7 = false;
        goto LAB_0066877f;
      }
    }
  }
  bVar7 = true;
LAB_0066877f:
  pMVar14 = (ModulePlacer *)0x0;
  pSVar13 = (Str_L_char_G_ *)local_24;
  *(uint32_t *)&local_24 = (uint32_t)0x0;
  pSVar12 = &local_18;
  (*(uint32_t*)&(local_20)) = 0;
  (*(uint32_t*)((char*)&(local_20)+4)) = 0;
  local_18.Data = (char *)0x0;
  local_18.Capacity = 0;
  local_18.Length = 0;
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff58,&local_64);
  SVar2.Capacity = (int)pSVar4;
  SVar2.Data = (char *)pSVar5;
  SVar2.Length = (int)pSVar12;
  pSVar4 = Print(&local_44,
                 (double)CONCAT44(pcVar6,(int)((ulonglong)*(undefined8 *)(this + 0x50) >> 0x20)),
                 SVar2);
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,bVar7,&local_50,pSVar4,pSVar12,pSVar13,pMVar14);
  if (local_44.Data != (char *)0x0) {
    port_op_delete(local_44.Data);
    local_44.Data = (char *)0x0;
  }
  if (local_18.Data != (char *)0x0) {
    port_op_delete(local_18.Data);
    local_18.Data = (char *)0x0;
  }
  if (local_24 != (uint32_t)0x0) {
    port_op_delete((void *)local_24);
    *(uint32_t *)&local_24 = (uint32_t)0x0;
  }
  if (local_50.Data != (char *)0x0) {
    port_op_delete(local_50.Data);
    local_50.Data = (char *)0x0;
  }
  if (local_64.Data != (char *)0x0) {
    port_op_delete(local_64.Data);
  }
  return __return_storage_ptr__;
}

//==== 00668860 GetTypeName_00668860 ====


/* public: virtual class util__Str_L_char_G_  AmmoBaySubModule__ReflectionInfoStruct_struct_AmmoBaySubModule___GetTypeName(void)const  */

Str_L_char_G_ * 
AmmoBaySubModule__ReflectionInfoStruct_struct_AmmoBaySubModule___GetTypeName
          (ReflectionInfoStruct_L_struct_AmmoBaySubModule_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"AmmoBaySubModule");
  return __return_storage_ptr__;
}





//==== 00668880 GetMembers_00668880 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   AmmoBaySubModule__ReflectionInfoStruct_struct_AmmoBaySubModule___GetMembers(void)const  */

undefined4 
AmmoBaySubModule__ReflectionInfoStruct_struct_AmmoBaySubModule___GetMembers__o2
          (ReflectionInfoStruct_L_struct_AmmoBaySubModule_G_ *this)

{
  undefined4 in_stack_00000004;
  
  StaticGetMembers();
}





//==== 006688a0 GetMember_006688a0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   AmmoBaySubModule__ReflectionInfoStruct_struct_AmmoBaySubModule___GetMember(class util__Str_L_char_G_
   const &)const  */

Str_L_char_G_ * 
AmmoBaySubModule__ReflectionInfoStruct_struct_AmmoBaySubModule___GetMember__o2
          (ReflectionInfoStruct_L_struct_AmmoBaySubModule_G_ *this,Str_L_char_G_ *param_1)

{
  StaticGetMember(param_1);
  return param_1;
}





//==== 006688c0 GetFactory_006688c0 ====


/* public: virtual class util__Reflectable * (__cdecl*
   AmmoBaySubModule__ReflectionInfoStruct_struct_AmmoBaySubModule___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall AmmoBaySubModule__ReflectionInfoStruct_struct_AmmoBaySubModule___GetFactory__o2
          (ReflectionInfoStruct_L_struct_AmmoBaySubModule_G_ *this)

{
  return StaticFactory;
}





//==== 006688d0 GetTypeName_006688d0 ====


/* public: virtual class util__Str_L_char_G_ 
   MassProjectileSubModule__ReflectionInfoStruct_class_MassProjectileSubModule___GetTypeName(void)const  */

Str_L_char_G_ * 
MassProjectileSubModule__ReflectionInfoStruct_class_MassProjectileSubModule___GetTypeName
          (ReflectionInfoStruct_L_class_MassProjectileSubModule_G_ *this,
          Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"MassProjectileSubModule");
  return __return_storage_ptr__;
}





//==== 006688f0 GetMembers_006688f0 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   MassProjectileSubModule__ReflectionInfoStruct_class_MassProjectileSubModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
MassProjectileSubModule__ReflectionInfoStruct_class_MassProjectileSubModule___GetMembers
          (ReflectionInfoStruct_L_class_MassProjectileSubModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_7b3f4d73__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_7b3f4d73__thread_safe_static_guard_0__),
      cde_l2_7b3f4d73__thread_safe_static_guard_0__ == -1)) {
     cde_l2_7736d2af_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_7b3f4d73__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_7736d2af_Count);
  iVar3 = 0;
  if (0 <  cde_l2_7736d2af_Count) {
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
    } while (iVar3 <  cde_l2_7736d2af_Count);
  }
  return in_stack_00000004;
}





//==== 00668a30 GetMember_00668a30 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   MassProjectileSubModule__ReflectionInfoStruct_class_MassProjectileSubModule___GetMember(class
   util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
MassProjectileSubModule__ReflectionInfoStruct_class_MassProjectileSubModule___GetMember__o2
          (ReflectionInfoStruct_L_class_MassProjectileSubModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_fb34fb9a__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_fb34fb9a__thread_safe_static_guard_0__),
      cde_l2_fb34fb9a__thread_safe_static_guard_0__ == -1)) {
     cde_l2_c89c35e4_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_fb34fb9a__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_c89c35e4_Count) {
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
LAB_00668abd:
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
          if (cVar3 == '\0') goto LAB_00668abd;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_c89c35e4_Count);
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





//==== 00668bd0 GetFactory_00668bd0 ====


/* public: virtual class util__Reflectable * (__cdecl*
   MassProjectileSubModule__ReflectionInfoStruct_class_MassProjectileSubModule___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall MassProjectileSubModule__ReflectionInfoStruct_class_MassProjectileSubModule___GetFactory
          (ReflectionInfoStruct_L_class_MassProjectileSubModule_G_ *this)

{
  return StaticFactory;
}





//==== 00668be0 GetComposition_00668be0 ====

/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   BarrelCoolingSubModule__GetComposition(void)const  */

Darray_L_MaterialComposition_G_ * __thiscall
BarrelCoolingSubModule__GetComposition
          (BarrelCoolingSubModule *this,Darray_L_MaterialComposition_G_ *__return_storage_ptr__)

{
  Darray_L_struct_MaterialComposition_G_ *pDVar1;
  Darray_L_struct_MaterialComposition_G_ *pDVar2;
  undefined **local_24;
  void *local_20;
  undefined **local_14;
  void *local_10;
  
  pDVar1 = (Darray_L_struct_MaterialComposition_G_ *)
           (**(code **)((this->Cooler)._pad_0x0_0 + 0x68))(&local_24);
  pDVar2 = (Darray_L_struct_MaterialComposition_G_ *)
           (**(code **)((this->Turbopump)._pad_0x0_0 + 0x68))(&local_14);
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (MaterialComposition *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  util__Darray_L_MaterialComposition_G___Darray_L_MaterialComposition_G_(__return_storage_ptr__,pDVar2);
  util__Darray_L_MaterialComposition_G___op_iadd(__return_storage_ptr__,pDVar1);
  local_14 = (undefined **)(&vftable_75);
  if (local_10 != (void *)0x0) {
    port_op_delete(local_10);
  }
  local_10 = (void *)0x0;
  local_14 = (undefined **)(&vftable);
  *(uint32_t *)&local_24 = (uint32_t)(uintptr_t)(&vftable_75);
  if (local_20 != (void *)0x0) {
    port_op_delete(local_20);
  }
  return __return_storage_ptr__;
}

//==== 00668c70 GetPowerUsage_00668c70 ====

/* public: virtual class util__Darray_L_structPowerUsage_G_ __thiscall
   BarrelCoolingSubModule__GetPowerUsage(void)const  */

Darray_L_PowerUsage_G_ * __thiscall
BarrelCoolingSubModule__GetPowerUsage
          (BarrelCoolingSubModule *this,Darray_L_PowerUsage_G_ *__return_storage_ptr__)

{
  (**(code **)((this->Turbopump)._pad_0x0_0 + 0x70))(__return_storage_ptr__);
  return __return_storage_ptr__;
}

//==== 00668c90 GetStatuses_00668c90 ====

/* public: virtual class DesignStatusBuffer  BarrelCoolingSubModule__GetStatuses(class
   DataParser *)const  */

DesignStatusBuffer * 
BarrelCoolingSubModule__GetStatuses
          (BarrelCoolingSubModule *this,DesignStatusBuffer *__return_storage_ptr__,
          DataParser *param_1)

{
  undefined4 uVar1;
  DesignStatusBuffer *this_00;
  double dVar2;
  Str_L_char_G_ *pSVar3;
  Str_L_char_G_ *pSVar4;
  Str_L_char_G_ *pSVar5;
  DesignStatusBuffer *__return_storage_ptr___00;
  Str_L_char_G_ *pSVar6;
  ModulePlacer *pMVar7;
  undefined1 local_54 [24];
  undefined1 local_3c [4];
  undefined1 local_38 [12];
  int local_2c;
  undefined4 local_28;
  Str_L_char_G_ local_24;
  Str_L_char_G_ local_18;
  double local_c;
  
  __return_storage_ptr__->DataManager = (DataParser *)0x0;
  (__return_storage_ptr__->Messages)._pad_0x0_0 = 0;
  (__return_storage_ptr__->Messages).Data = (DesignStatusMessage *)0x0;
  (__return_storage_ptr__->Messages).Size = 0;
  (undefined8)((__return_storage_ptr__->Messages).Capacity = 0);
  uVar1 = (**(code **)((this->Turbopump)._pad_0x0_0 + 100))(local_3c,param_1);
  __return_storage_ptr___00 = (DesignStatusBuffer *)local_54;
  this_00 = (DesignStatusBuffer *)
            (**(code **)((this->Cooler)._pad_0x0_0 + 100))
                      (__return_storage_ptr___00,param_1,__return_storage_ptr__,uVar1);
  DesignStatusBuffer__op_add(this_00,__return_storage_ptr___00,(DesignStatusBuffer *)param_1);
  Darray_L_DesignStatusMessage_G___dtor((Darray_L_DesignStatusMessage_G_ *)(local_54 + 4));
  Darray_L_DesignStatusMessage_G___dtor((Darray_L_DesignStatusMessage_G_ *)local_38);
  util__Str_char___Str_char((Str_L_char_G_ *)(local_54 + 0xc),"BarrelCoolerTemperatureInvalid");
  (*(uint32_t*)((char*)&(local_38)+8)) = (uint32_t)(uintptr_t)((void *)0x0);
  *(uint32_t *)&local_2c = 0;
  *(uint32_t *)&local_28 = 0;
  local_24.Data = (char *)0x0;
  local_24.Capacity = 0;
  local_24.Length = 0;
  local_18.Data = (char *)0x0;
  local_18.Capacity = 0;
  local_18.Length = 0;
  if ((this->CachedPeakFiringTemperatureDelta_K).IsValidData == false) {
    local_c = this->CachedHeatEnergy_J /
              (this->CachedBarrelComposition->BoilingPoint_K * this->CachedBarrelMass_kg);
  }
  else {
    local_c = (this->CachedPeakFiringTemperatureDelta_K).Data;
  }
  pMVar7 = (ModulePlacer *)0x0;
  pSVar6 = (Str_L_char_G_ *)(local_38 + 8);
  pSVar5 = &local_24;
  pSVar4 = &local_18;
  pSVar3 = (Str_L_char_G_ *)(local_54 + 0xc);
  dVar2 = Material__GetSafeUseTemperature_K(this->CachedBarrelComposition);
  local_c = dVar2 - local_c;
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,local_c <= 0.0,pSVar3,pSVar4,pSVar5,pSVar6,pMVar7);
  if (local_18.Data != (char *)0x0) {
    port_op_delete(local_18.Data);
    local_18.Data = (char *)0x0;
  }
  if (local_24.Data != (char *)0x0) {
    port_op_delete(local_24.Data);
    local_24.Data = (char *)0x0;
  }
  if ((void *)(*(uint32_t*)((char*)&(local_38)+8)) != (void *)0x0) {
    port_op_delete((void *)(*(uint32_t*)((char*)&(local_38)+8)));
    (*(uint32_t*)((char*)&(local_38)+8)) = (uint32_t)(uintptr_t)((void *)0x0);
  }
  if ((void *)(*(uint32_t *)((char *)&(local_54) + 12)) != (void *)0x0) {
    port_op_delete((void *)(*(uint32_t *)((char *)&(local_54) + 12)));
  }
  util__Str_char___Str_char((Str_L_char_G_ *)(local_54 + 0xc),"BarrelCoolerWarmerThanAmbient");
  local_18.Data = (char *)0x0;
  local_18.Capacity = 0;
  local_18.Length = 0;
  local_24.Data = (char *)0x0;
  local_24.Capacity = 0;
  local_24.Length = 0;
  (*(uint32_t*)((char*)&(local_38)+8)) = (uint32_t)(uintptr_t)((void *)0x0);
  *(uint32_t *)&local_2c = 0;
  *(uint32_t *)&local_28 = 0;
  if ((this->CachedPeakFiringTemperatureDelta_K).IsValidData == false) {
    local_c = this->CachedHeatEnergy_J /
              (this->CachedBarrelComposition->BoilingPoint_K * this->CachedBarrelMass_kg);
  }
  else {
    local_c = (this->CachedPeakFiringTemperatureDelta_K).Data;
  }
  dVar2 = Material__GetSafeUseTemperature_K(this->CachedBarrelComposition);
  local_c = dVar2 - local_c;
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,local_c <= this->CoolantInletTemperature_K,
             (Str_L_char_G_ *)(local_54 + 0xc),(Str_L_char_G_ *)(local_38 + 8),&local_24,&local_18,
             (ModulePlacer *)0x0);
  if ((void *)(*(uint32_t*)((char*)&(local_38)+8)) != (void *)0x0) {
    port_op_delete((void *)(*(uint32_t*)((char*)&(local_38)+8)));
    (*(uint32_t*)((char*)&(local_38)+8)) = (uint32_t)(uintptr_t)((void *)0x0);
  }
  if (local_24.Data != (char *)0x0) {
    port_op_delete(local_24.Data);
    local_24.Data = (char *)0x0;
  }
  if (local_18.Data != (char *)0x0) {
    port_op_delete(local_18.Data);
    local_18.Data = (char *)0x0;
  }
  if ((void *)(*(uint32_t *)((char *)&(local_54) + 12)) != (void *)0x0) {
    port_op_delete((void *)(*(uint32_t *)((char *)&(local_54) + 12)));
  }
  return __return_storage_ptr__;
}

//==== 00668f20 GetReflectionInfo_00668f20 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   BarrelCoolingSubModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall
BarrelCoolingSubModule__GetReflectionInfo(BarrelCoolingSubModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_344aee7a__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_344aee7a__thread_safe_static_guard_0__);
    if ( cde_l2_344aee7a__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_f2804fdd_ReflectionInfo) = &vftable_320;
      _Init_thread_footer(& cde_l2_344aee7a__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_f2804fdd_ReflectionInfo;
}





//==== 00668f30 scalar_deleting_destructor_00668f30 ====

/* public: virtual void * __thiscall BarrelCoolingSubModule:: 0 scalardeletingdestructor(unsigned
   int) */

void * __thiscall
BarrelCoolingSubModule___scalar_deleting_destructor(BarrelCoolingSubModule *this,uint param_1)

{
  void *pvVar1;
  
  (this->Turbopump)._pad_0x0_0 = (int)&vftable_5;
  pvVar1 = (void *)(this->Turbopump)._pad_0x4_1;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->Turbopump)._pad_0x4_1 = 0;
  }
  (this->Cooler)._pad_0x0_0 = (int)&vftable_5;
  pvVar1 = (void *)(this->Cooler)._pad_0x4_1;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->Cooler)._pad_0x4_1 = 0;
  }
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0xc0);
  }
  return this;
}

//==== 00668fb0 GetTypeName_00668fb0 ====


/* public: virtual class util__Str_L_char_G_ 
   BarrelCoolingSubModule__ReflectionInfoStruct_class_BarrelCoolingSubModule___GetTypeName(void)const  */

Str_L_char_G_ * 
BarrelCoolingSubModule__ReflectionInfoStruct_class_BarrelCoolingSubModule___GetTypeName
          (ReflectionInfoStruct_L_class_BarrelCoolingSubModule_G_ *this,
          Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"BarrelCoolingSubModule");
  return __return_storage_ptr__;
}





//==== 00668fd0 GetMembers_00668fd0 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   BarrelCoolingSubModule__ReflectionInfoStruct_class_BarrelCoolingSubModule___GetMembers(void)const
    */

Darray_L_struct_util__ClassMember_G_ * 
BarrelCoolingSubModule__ReflectionInfoStruct_class_BarrelCoolingSubModule___GetMembers__o2
          (ReflectionInfoStruct_L_class_BarrelCoolingSubModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_2cb5dd15__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_2cb5dd15__thread_safe_static_guard_0__),
      cde_l2_2cb5dd15__thread_safe_static_guard_0__ == -1)) {
     cde_l2_162e3bc9_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_2cb5dd15__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_162e3bc9_Count);
  iVar3 = 0;
  if (0 <  cde_l2_162e3bc9_Count) {
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
    } while (iVar3 <  cde_l2_162e3bc9_Count);
  }
  return in_stack_00000004;
}





//==== 00669110 GetMember_00669110 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   BarrelCoolingSubModule__ReflectionInfoStruct_class_BarrelCoolingSubModule___GetMember(class
   util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
BarrelCoolingSubModule__ReflectionInfoStruct_class_BarrelCoolingSubModule___GetMember__o2
          (ReflectionInfoStruct_L_class_BarrelCoolingSubModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_754b6876__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_754b6876__thread_safe_static_guard_0__),
      cde_l2_754b6876__thread_safe_static_guard_0__ == -1)) {
     cde_l2_23d457c9_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_754b6876__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_23d457c9_Count) {
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
LAB_0066919d:
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
          if (cVar3 == '\0') goto LAB_0066919d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_23d457c9_Count);
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





//==== 006692b0 GetFactory_006692b0 ====


/* public: virtual class util__Reflectable * (__cdecl*
   BarrelCoolingSubModule__ReflectionInfoStruct_class_BarrelCoolingSubModule___GetFactory(void)const
   )(void) */

_func_Reflectable_ptr * 
__thiscall BarrelCoolingSubModule__ReflectionInfoStruct_class_BarrelCoolingSubModule___GetFactory__o2
          (ReflectionInfoStruct_L_class_BarrelCoolingSubModule_G_ *this)

{
  return StaticFactory;
}





//==== 006692c0 AmmoBaySubModule ====

/* public: __thiscall AmmoBaySubModule__AmmoBaySubModule(void) */

AmmoBaySubModule * __thiscall AmmoBaySubModule__AmmoBaySubModule(AmmoBaySubModule *this)

{
  this->_pad_0x4_1 = 0;
  this->_pad_0x8_2 = 0;
  this->_pad_0xc_3 = 0;
  this->_pad_0x0_0 = (int)&vftable_321;
  this->Capacity = 0;
  this->Stacks = 0;
  this->CachedArmorComposition = (Material *)0x0;
  AmmoInfo__AmmoInfo__o3(&this->CachedInfo);
  (this->CachedArmorThickness_m).IsValidData = false;
  (this->CachedArmorThickness_m).Data = 0.0;
  return this;
}

//==== 00669320 MassProjectileSubModule ====

/* public: __thiscall MassProjectileSubModule__MassProjectileSubModule(void) */

MassProjectileSubModule * __thiscall
MassProjectileSubModule__MassProjectileSubModule(MassProjectileSubModule *this)

{
  this->_pad_0x4_1 = 0;
  this->_pad_0x8_2 = 0;
  this->_pad_0xc_3 = 0;
  this->_pad_0x0_0 = (int)&vftable_322;
  this->Composition = (Material *)0x0;
  *(undefined4 *)&this->BoreRadius_m = 0;
  *(undefined4 *)((int)&this->BoreRadius_m + 4) = 0;
  *(undefined4 *)&this->Mass_kg = 0;
  *(undefined4 *)((int)&this->Mass_kg + 4) = 0;
  this->Tracer = (Material *)0x0;
  this->ShipClass__Payload = (CraftBlueprint *)0x0;
  this->CachedBarrelLength_m = 0.0;
  this->CachedPropellantComposition = (Material *)0x0;
  this->CachedPropellantMass_kg = 0.0;
  this->CachedAllowedMaterials = ~MaterialClass__Structural;
  this->CachedPeakPressure_Pa = 0.0;
  return this;
}

//==== 00669380 scalar_deleting_destructor_00669380 ====

/* public: virtual void * __thiscall AmmoBaySubModule:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall
AmmoBaySubModule___scalar_deleting_destructor(AmmoBaySubModule *this,uint param_1)

{
  AmmoInfo___AmmoInfo(&this->CachedInfo);
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x98);
  }
  return this;
}

//==== 006693d0 scalar_deleting_destructor_006693d0 ====

/* public: virtual void * __thiscall MassProjectileSubModule:: 0 scalardeletingdestructor(unsigned
   int) */

void * __thiscall
MassProjectileSubModule___scalar_deleting_destructor(MassProjectileSubModule *this,uint param_1)

{
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x60);
  }
  return this;
}

//==== 00669410 BuildModels_00669410 ====


/* public: void  AmmoBaySubModule__BuildModels(class util__Darray_L_class_util__SharedPtr_L_structGameModel_G__G_ *,double,bool)const  */

void 
AmmoBaySubModule__BuildModels
          (AmmoBaySubModule *this,Darray_L_class_util__SharedPtr_L_struct_GameModel_G___G_ *param_1,
          double param_2,bool param_3)

{
  undefined8 stack0xffffffbc;
  undefined8 stack0xfffffffc;
  int iVar1;
  Quaternion_L_double_G_ QVar2;
  Quaternion_L_double_G_ QVar3;
  Vec4_L_double_G_ VVar4;
  Vec4_L_double_G_ VVar5;
  Darray_L_class_util__SharedPtr_L_struct_GameModel_G___G_ *pDVar6;
  bool bVar7;
  Cylinder_L_double_G_ *pCVar8;
  GameModel *pGVar9;
  ReferenceControllerRegistry *pRVar10;
  undefined4 *puVar11;
  VertexBufferObject *pVVar12;
  int iVar13;
  CustomTexture *this_00;
  int *piVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 in_stack_00000008;
  ReferenceController *pRVar18;
  undefined1 *puVar19;
  code *pcVar20;
  double dVar21;
  GameModel *pGVar22;
  int *piVar23;
  undefined4 uVar24;
  Cylinder_L_double_G_ CStack_e4;
  Cylinder_L_double_G_ CStack_d4;
  Cylinder_L_double_G_ CStack_c4;
  Cylinder_L_double_G_ CStack_b4;
  Cylinder_L_double_G_ CStack_a4;
  Cylinder_L_double_G_ CStack_94;
  undefined1 auStack_84 [4];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 uStack_68;
  undefined1 uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [12];
  GameModel *pGStack_40;
  GameModel *pGStack_3c;
  undefined1 auStack_38 [16];
  Darray_L_class_util__SharedPtr_L_struct_GameModel_G___G_ *pDStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  undefined8 uStack_14;
  TransformStack TStack_9;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pDStack_28 = param_1;
  Graphics__TransformStack__TransformStack(&TStack_9,Style__Default);
  *(uint32_t *)&auStack_5c = ZEXT816(0x3f847ae147ae147b);
  dVar21 = (-(double)CONCAT44((*(uint32_t*)&(param_2)),in_stack_00000008) - 0.01) / 1000.0;
  VVar4.Z = SUB84(dVar21,0);
  VVar4.X = 0.0;
  VVar4.Y = 0.0;
  VVar4.W = (int)((ulonglong)dVar21 >> 0x20);
  Graphics__Translate(VVar4);
  uVar17 = (*(uint32_t*)&(auStack_5c));
  uVar15 = (*(uint32_t*)((char*)&(auStack_5c)+4));
  if ((*(uint8_t*)((char*)&(param_2)+4)) == '\0') {
    if ((this->CachedArmorThickness_m).IsValidData != false) {
      dVar21 = (this->CachedArmorThickness_m).Data;
      uVar17 = SUB84(dVar21,0);
      uVar15 = (undefined4)((ulonglong)dVar21 >> 0x20);
    }
    uStack_1c = (double)CONCAT44(uVar15,uVar17);
    GetUnarmoredDimensions_m(this,(Cylinder_L_double_G_ *)auStack_38);
    pCVar8 = (Cylinder_L_double_G_ *)(uintptr_t)(GetUnarmoredDimensions_m(this,(Cylinder_L_double_G_ *)auStack_4c));
    dVar21 = (uStack_1c + uStack_1c + pCVar8->Height) * 0.5;
  }
  else {
    if ((this->CachedArmorThickness_m).IsValidData != false) {
      dVar21 = (this->CachedArmorThickness_m).Data;
      uVar17 = SUB84(dVar21,0);
      uVar15 = (undefined4)((ulonglong)dVar21 >> 0x20);
    }
    uStack_1c = (double)CONCAT44(uVar15,uVar17);
    pCVar8 = (Cylinder_L_double_G_ *)(uintptr_t)(GetUnarmoredDimensions_m(this,(Cylinder_L_double_G_ *)auStack_38));
    uStack_1c = uStack_1c + uStack_1c + pCVar8->Radius;
    GetUnarmoredDimensions_m(this,(Cylinder_L_double_G_ *)auStack_4c);
    dVar21 = uStack_1c;
  }
  dVar21 = -dVar21 / 1000.0;
  VVar5.Z = SUB84(dVar21,0);
  VVar5.X = 0.0;
  VVar5.Y = 0.0;
  VVar5.W = (int)((ulonglong)dVar21 >> 0x20);
  Graphics__Translate(VVar5);
  uVar17 = (undefined4)((ulonglong)dVar21 >> 0x20);
  pGVar9 = (GameModel *)port_op_new(0xb8);
  if (pGVar9 == (GameModel *)0x0) {
    pGStack_3c = (GameModel *)0x0;
LAB_0066956e:
    pGVar9 = pGStack_3c;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
  }
  else {
    pGVar9 = (GameModel *)
             GameModel__GameModel
                       (pGVar9,this->CachedArmorComposition,(Material *)0x0,
                        ({ __typeof__(((ulonglong)CONCAT31((int3)((uint)uVar17 >> 8),1) << 0x20)) _t_ = ((ulonglong)CONCAT31((int3)((uint)uVar17 >> 8),1) << 0x20); *(Maybe_L_int_G_ *)&_t_; }));
    pGStack_3c = pGVar9;
    if (pGVar9 == (GameModel *)0x0) goto LAB_0066956e;
  }
  pRVar10 = util__ReferenceControllerRegistry__Get();
  (*(uint32_t *)((char *)&(auStack_38) + 12)) = (uint32_t)(uintptr_t)(util__ReferenceControllerRegistry__Register(pRVar10,pGVar9));
  if ((ReferenceController *)(*(uint32_t *)((char *)&(auStack_38) + 12)) != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference((ReferenceController *)(*(uint32_t *)((char *)&(auStack_38) + 12)));
  }
  iVar13 = *(int *)(pDStack_28 + 8);
  pGStack_40 = (GameModel *)(iVar13 + 1);
  util__Darray_class_util__SharedPtr_struct_GameModel_____SetSize
            (pDStack_28,(int *)(auStack_4c + 0xc));
  pDVar6 = pDStack_28;
  bVar7 = util__Darray_class_util__SharedPtr_struct_GameModel_____CheckSize(pDStack_28,iVar13);
  pGVar9 = pGStack_3c;
  if (bVar7) {
    iVar13 = *(int *)(pDVar6 + 8);
    iVar1 = *(int *)(pDVar6 + 4);
    pGStack_40 = *(GameModel **)(iVar1 + -8 + iVar13 * 8);
    uStack_1c = (double)CONCAT44(*(undefined4 *)(iVar1 + -4 + iVar13 * 8),(undefined4)uStack_1c);
    *(GameModel **)(iVar1 + -8 + iVar13 * 8) = pGStack_3c;
    *(undefined4 *)(iVar1 + -4 + iVar13 * 8) = (*(uint32_t *)((char *)&(auStack_38) + 12));
    if ((ReferenceController *)(*(uint32_t *)((char *)&(auStack_38) + 12)) != (ReferenceController *)0x0) {
      util__ReferenceController__AddStrongReference((ReferenceController *)(*(uint32_t *)((char *)&(auStack_38) + 12)));
    }
    if (((*(uint32_t*)((char*)&(uStack_1c)+4)) != (ReferenceController *)0x0) &&
       (bVar7 = util__ReferenceController__ReleaseStrongReference((ReferenceController*)((ReferenceController*)((*(uint32_t*)((char*)&(uStack_1c)+4))))), bVar7)) {
      if (pGStack_40 != (GameModel *)0x0) {
        GameModel___scalar_deleting_destructor(pGStack_40,1);
      }
      pGVar22 = pGStack_40;
      pRVar10 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar10,pGVar22);
    }
  }
  if (((ReferenceController *)(*(uint32_t *)((char *)&(auStack_38) + 12)) != (ReferenceController *)0x0) &&
     (bVar7 = util__ReferenceController__ReleaseStrongReference
                        ((ReferenceController *)(*(uint32_t *)((char *)&(auStack_38) + 12))), bVar7)) {
    if (pGVar9 != (GameModel *)0x0) {
      GameModel___scalar_deleting_destructor(pGVar9,1);
    }
    pRVar10 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar10,pGVar9);
  }
  uVar17 = 0x54442d18;
  uVar15 = 0x3fe921fb;
  uVar24 = 0;
  uVar16 = 0;
  if ((*(uint8_t*)((char*)&(param_2)+4)) != '\0') {
    libm_sse2_sin_precise(0.0);
    uStack_1c = (double)CONCAT44(uVar15,uVar17);
    (*(uint32_t*)((char*)&(auStack_38)+8)) = uVar24;
    (*(uint64_t*)&(auStack_38)) = (double)CONCAT44(uVar15,uVar17) * 0.0;
    (*(uint32_t *)((char *)&(auStack_38) + 12)) = uVar16;
    uVar17 = 0x54442d18;
    uVar15 = 0x3fe921fb;
    libm_sse2_cos_precise(0.0);
    QVar2.Y = SUB84(uStack_1c,0);
    QVar2.X = (*(uint64_t*)&(auStack_38));
    QVar2.Z = (int)((ulonglong)uStack_1c >> 0x20);
    QVar2.Z = (*(uint32_t*)&(auStack_38));
    QVar2.W = (*(uint32_t*)((char*)&(auStack_38)+4));
    QVar2.W = uVar17;
    (*(uint32_t *)((char *)&(QVar2.W) + 4)) = uVar15;
    Graphics__Rotate(QVar2);
  }
  uVar16 = 0;
  uVar15 = 0;
  uVar24 = 0x3fe921fb;
  uVar17 = 0x54442d18;
  libm_sse2_sin_precise(0.0);
  uStack_1c = (double)CONCAT44(uVar16,uVar15);
  (*(uint32_t*)((char*)&(auStack_38)+8)) = uVar15;
  (*(uint64_t*)&(auStack_38)) = (double)CONCAT44(uVar24,uVar17) * 0.0;
  (*(uint32_t *)((char *)&(auStack_38) + 12)) = uVar16;
  uVar15 = 0x54442d18;
  uVar16 = 0x3fe921fb;
  uStack_24 = uVar17;
  uStack_20 = uVar24;
  libm_sse2_cos_precise(0.0);
  QVar3.Y = uStack_20;
  QVar3.X = uStack_24;
  QVar3.Y = (*(uint32_t*)&(auStack_38));
  QVar3.Z = (*(uint32_t*)((char*)&(auStack_38)+4));
  QVar3.Z = (*(uint32_t*)&(auStack_38));
  QVar3.W = (*(uint32_t*)((char*)&(auStack_38)+4));
  QVar3.W = uVar15;
  (*(uint32_t *)((char *)&(QVar3.W) + 4)) = uVar16;
  Graphics__Rotate(QVar3);
  puVar11 = (undefined4 *)(**(code **)(*(int *)pDStack_28 + 8))();
  pGVar9 = (GameModel *)*puVar11;
  if ((this->CachedArmorThickness_m).IsValidData == false) {
    uVar17 = (*(uint32_t*)&(auStack_5c));
    uVar15 = (*(uint32_t*)((char*)&(auStack_5c)+4));
  }
  else {
    dVar21 = (this->CachedArmorThickness_m).Data;
    uVar17 = SUB84(dVar21,0);
    uVar15 = (undefined4)((ulonglong)dVar21 >> 0x20);
  }
  (*(uint64_t*)((char*)&(auStack_38)+8)) = CONCAT44(uVar15,uVar17);
  pCVar8 = (Cylinder_L_double_G_ *)(uintptr_t)(GetUnarmoredDimensions_m(this,&CStack_d4));
  (*(uint64_t*)((char*)&(auStack_38)+8)) = (double)(*(uint64_t*)((char*)&(auStack_38)+8)) + (double)(*(uint64_t*)((char*)&(auStack_38)+8)) + pCVar8->Radius;
  GetUnarmoredDimensions_m(this,&CStack_e4);
  if ((this->CachedArmorThickness_m).IsValidData == false) {
    uVar17 = (*(uint32_t*)&(auStack_5c));
    uVar15 = (*(uint32_t*)((char*)&(auStack_5c)+4));
  }
  else {
    dVar21 = (this->CachedArmorThickness_m).Data;
    uVar17 = SUB84(dVar21,0);
    uVar15 = (undefined4)((ulonglong)dVar21 >> 0x20);
  }
  unique0x100002fe = (double)CONCAT44(uVar15,uVar17);
  GetUnarmoredDimensions_m(this,&CStack_b4);
  pCVar8 = (Cylinder_L_double_G_ *)(uintptr_t)(GetUnarmoredDimensions_m(this,&CStack_c4));
  unique0x10000626 = (stack0xffffffbc + stack0xffffffbc + pCVar8->Height) / 1000.0;
  if ((this->CachedArmorThickness_m).IsValidData == false) {
    uVar17 = (*(uint32_t*)&(auStack_5c));
    uVar15 = (*(uint32_t*)((char*)&(auStack_5c)+4));
  }
  else {
    dVar21 = (this->CachedArmorThickness_m).Data;
    uVar17 = SUB84(dVar21,0);
    uVar15 = (undefined4)((ulonglong)dVar21 >> 0x20);
  }
  uStack_1c = (double)CONCAT44(uVar15,uVar17);
  pCVar8 = (Cylinder_L_double_G_ *)(uintptr_t)(GetUnarmoredDimensions_m(this,&CStack_94));
  uStack_1c = uStack_1c + uStack_1c + pCVar8->Radius;
  GetUnarmoredDimensions_m(this,&CStack_a4);
  uStack_1c = uStack_1c / 1000.0;
  pVVar12 = GameModel__GetVertexObject(pGVar9);
  iVar13 = GetUniversalRadialSegmentation((double)(*(uint64_t*)((char*)&(auStack_38)+8)));
  FillChamferedCylinder(uStack_1c,stack0xffffffbc,0.1,iVar13,pVVar12);
  uStack_14 = 0;
  this_00 = (CustomTexture *)port_op_new(0x3c);
  if (this_00 == (CustomTexture *)0x0) {
    piVar14 = (int *)0x0;
  }
  else {
    piVar14 = (int *)CustomTexture__CustomTexture(this_00);
    if (piVar14 != (int *)0x0) goto LAB_00669899;
  }
  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl",
                  0xd4,"NewPointer",(char *)0x0);
  DebugBreak();
LAB_00669899:
  piVar23 = piVar14;
  pRVar10 = util__ReferenceControllerRegistry__Get();
  (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)(util__ReferenceControllerRegistry__Register(pRVar10,piVar23));
  (*(uint32_t*)&(uStack_14)) = (uint32_t)(uintptr_t)(piVar14);
  if ((*(uint32_t*)((char*)&(uStack_14)+4)) != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference((ReferenceController*)((ReferenceController*)((*(uint32_t*)((char*)&(uStack_14)+4)))));
  }
  auStack_84[0] = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_7c = 1;
  uStack_80 = 1;
  uStack_74 = 2;
  if ((this->CachedArmorThickness_m).IsValidData == false) {
    uVar17 = (*(uint32_t*)&(auStack_5c));
    uVar15 = (*(uint32_t*)((char*)&(auStack_5c)+4));
  }
  else {
    dVar21 = (this->CachedArmorThickness_m).Data;
    uVar17 = SUB84(dVar21,0);
    uVar15 = (undefined4)((ulonglong)dVar21 >> 0x20);
  }
  uStack_1c = (double)CONCAT44(uVar15,uVar17);
  pCVar8 = (Cylinder_L_double_G_ *)(uintptr_t)(GetUnarmoredDimensions_m(this,&CStack_a4));
  uStack_1c = uStack_1c + uStack_1c + pCVar8->Radius;
  GetUnarmoredDimensions_m(this,&CStack_94);
  if ((this->CachedArmorThickness_m).IsValidData == false) {
    uVar17 = (*(uint32_t*)&(auStack_5c));
    uVar15 = (*(uint32_t*)((char*)&(auStack_5c)+4));
  }
  else {
    dVar21 = (this->CachedArmorThickness_m).Data;
    uVar17 = SUB84(dVar21,0);
    uVar15 = (undefined4)((ulonglong)dVar21 >> 0x20);
  }
  (*(uint64_t*)((char*)&(auStack_38)+8)) = CONCAT44(uVar15,uVar17);
  GetUnarmoredDimensions_m(this,&CStack_c4);
  pCVar8 = (Cylinder_L_double_G_ *)(uintptr_t)(GetUnarmoredDimensions_m(this,&CStack_b4));
  uStack_1c = uStack_1c + uStack_1c +
              (double)(*(uint64_t*)((char*)&(auStack_38)+8)) + (double)(*(uint64_t*)((char*)&(auStack_38)+8)) + pCVar8->Height;
  if ((this->CachedArmorThickness_m).IsValidData != false) {
    (*(uint64_t*)((char*)&(auStack_5c)+8)) = 0;
    (*(uint64_t*)&(auStack_5c)) = (this->CachedArmorThickness_m).Data;
  }
  pCVar8 = (Cylinder_L_double_G_ *)(uintptr_t)(GetUnarmoredDimensions_m(this,&CStack_a4));
  uVar17 = (*(uint32_t *)((char *)&(auStack_5c) + 12));
  (*(uint32_t*)((char*)&(auStack_5c)+8)) = (*(uint32_t*)((char*)&(auStack_5c)+8));
  (*(uint64_t*)&(auStack_5c)) = (*(uint64_t*)&(auStack_5c)) + (*(uint64_t*)&(auStack_5c)) + pCVar8->Radius;
  (*(uint32_t *)((char *)&(auStack_5c) + 12)) = uVar17;
  GetUnarmoredDimensions_m(this,&CStack_94);
  uVar24 = 0;
  uVar17 = SUB84(uStack_1c,0);
  uVar15 = (undefined4)((ulonglong)uStack_1c >> 0x20);
  dVar21 = (double)(*(uint64_t*)&(auStack_5c)) * 6.283185307179586;
  pcVar20 = (long long int (*)())(GetGeneralModuleShader);
  puVar19 = auStack_84;
  piVar14 = (int *)uStack_14;
  pRVar18 = (ReferenceController *)(uintptr_t)((*(uint32_t*)((char*)&(uStack_14)+4)));
  if ((*(uint32_t*)((char*)&(uStack_14)+4)) != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference((ReferenceController*)((ReferenceController*)((*(uint32_t*)((char*)&(uStack_14)+4)))));
  }
  ArmorTextureHandler__BuildNormalsTexture_L_class_GeneralModuleShader_P____cdecl_P__void__G_
            (piVar14,pRVar18,puVar19,dVar21,uVar17,uVar15,pcVar20,uVar24);
  puVar11 = (undefined4 *)(**(code **)(*(int *)pDStack_28 + 8))();
  GameModel__SetTexture((GameModel *)*puVar11,(SharedPtr_L_struct_CustomTexture_G_ *)&uStack_14);
  if (((*(uint32_t*)((char*)&(uStack_14)+4)) != (ReferenceController *)0x0) &&
     (bVar7 = util__ReferenceController__ReleaseStrongReference((ReferenceController*)((ReferenceController*)((*(uint32_t*)((char*)&(uStack_14)+4))))), bVar7)) {
    if ((int *)uStack_14 != (int *)0x0) {
      (**(code **)(*(int *)uStack_14 + 0x10))(1);
    }
    piVar14 = (int *)uStack_14;
    pRVar10 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar10,piVar14);
    (*(uint32_t*)&(uStack_14)) = (uint32_t)(uintptr_t)((int *)0x0);
  }
  Graphics__TransformStack___TransformStack(&TStack_9);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00669a90 GetAccuracy_radians_00669a90 ====


/* public: double __thiscall BarrelArmorSubModule__GetAccuracy_radians(void)const  */

double __thiscall BarrelArmorSubModule__GetAccuracy_radians(BarrelArmorSubModule *this)

{
  double dVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar6 = *(double *)(this + 0x28);
  dVar5 = *(double *)(this + 0x70);
  dVar3 = dVar6 * 3.141592653589793 * dVar6;
  dVar1 = *(double *)(this + 0x50);
  if (dVar5 <= 0.0) {
    dVar5 = *(double *)(this + 0x18) + *(double *)(this + 0x30);
  }
  else {
    dVar4 = (*(double *)(this + 0x58) / *(double *)(this + 0x38)) *
            (*(double *)(this + 0x58) / *(double *)(this + 0x38));
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
      dVar5 = *(double *)(this + 0x70);
      dVar6 = *(double *)(this + 0x28);
    }
    dVar5 = (1.0 - dVar4) * dVar5 + dVar4 * *(double *)(this + 0x30) + *(double *)(this + 0x18);
  }
  dVar5 = Mechanics__AnnulusXAreaMomentOfInertia_m4(dVar6,dVar5);
  dVar6 = *(double *)(this + 0x18) /
          ((*(double *)(this + 0x18) + *(double *)(this + 0x30)) - *(double *)(this + 0x28));
  if (dVar6 <= 0.0) {
    dVar6 = 0.0;
  }
  if (1.0 <= dVar6) {
    dVar6 = 1.0;
  }
  dVar4 = Material__GetYoungsModulus_Pa(*(Material **)(this + 0x24));
  dVar7 = Material__GetYoungsModulus_Pa(*(Material **)(this + 0x10));
  dVar6 = Mechanics__GetDeflectionAngleOfAConcentratedLoadedCantileverBeam_radians
                    ((1.0 - dVar6) * dVar4 + dVar6 * dVar7,dVar5,*(double *)(this + 0x38),
                     dVar3 * dVar1,*(double *)(this + 0x58));
  return dVar6;
}





//==== 00669df0 GetAmmoInfo_00669df0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: class util__Maybe_L_structAmmoInfo_G_  MassProjectileSubModule__GetAmmoInfo(class
   util__Str_L_char_G_ const &)const  */

Maybe_L_AmmoInfo_G_ * 
MassProjectileSubModule__GetAmmoInfo
          (MassProjectileSubModule *this,Maybe_L_AmmoInfo_G_ *__return_storage_ptr__,Str_L_char_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  Maybe_L_double_G_ *pMVar1;
  undefined4 *puVar2;
  MaterialComposition *pMVar3;
  int iVar4;
  bool bVar5;
  CraftBlueprint *pCVar6;
  AmmoExplosion *pAVar7;
  Darray_L_MaterialConstituent_G_ *pDVar8;
  Cylinder_L_double_G_ *pCVar9;
  int iVar10;
  int iVar11;
  code *pcVar12;
  double dVar13;
  undefined1 local_124 [16];
  Darray_L_MaterialComposition_G_ local_114;
  Str_L_char_G_ local_104;
  Str_L_char_G_ local_f8;
  ShipClass local_ec;
  bool local_e8;
  AmmoExplosion local_e4;
  double local_c4;
  Str_L_char_G_ local_bc;
  double local_b0;
  AmmoExplosion local_a8;
  Str_L_char_G_ *local_88;
  double local_84;
  Material *local_7c;
  undefined1 auStack_78 [8];
  int iStack_70;
  undefined8 local_6c;
  Darray_L_MaterialComposition_G_ local_64;
  ShipClass *local_54;
  undefined1 local_4d;
  CraftBlueprint *local_4c;
  AmmoExplosion local_48;
  undefined1 local_28 [24];
  double dStack_10;
  uint local_8;
  
  pcVar12 = DebugBreak_exref;
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_88 = param_1;
  local_4c = this->ShipClass__Payload;
  if (local_4c == (CraftBlueprint *)0x0) {
    (*(uint32_t*)&(local_28)) = (uint32_t)(uintptr_t)(&vftable_15);
    (*(uint32_t*)((char*)&(local_28)+4)) = (uint32_t)(uintptr_t)((MaterialConstituent *)0x0);
    pAVar7 = (AmmoExplosion *)local_28;
    (*(uint32_t*)((char*)&(local_28)+8)) = 0;
    (*(uint32_t *)((char *)&(local_28) + 12)) = 0;
    (*(uint64_t *)((char *)&(local_28) + 16)) = 0.0;
    dStack_10 = 0.0;
    local_4c = (CraftBlueprint *)0x0;
    *(uint32_t *)&local_54 = (uint32_t)(uintptr_t)((ShipClass *)0x2);
  }
  else {
    CraftBlueprint__GetAmmoExplosion_Memoize(local_4c);
    pCVar6 = (CraftBlueprint *)
             ((local_4c->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 8);
    pMVar1 = &local_4c->GetEstimatedRollTorque_N_m_MemoizedValue;
    local_4c = pCVar6;
    if (*(char *)&pMVar1->Data == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    pAVar7 = (AmmoExplosion *)AmmoExplosion__AmmoExplosion(&local_a8,(AmmoExplosion *)local_4c);
    local_4c = (CraftBlueprint *)0x1;
    *(uint32_t *)&local_54 = (uint32_t)(uintptr_t)((ShipClass *)0x0);
  }
  AmmoExplosion__AmmoExplosion(&local_48,pAVar7);
  if (local_54 != (ShipClass *)0x0) {
    (*(uint32_t*)&(local_28)) = (uint32_t)(uintptr_t)(&vftable_15);
    if ((MaterialConstituent *)(*(uint32_t*)((char*)&(local_28)+4)) != (MaterialConstituent *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(local_28)+4)));
    }
    (*(uint32_t*)((char*)&(local_28)+4)) = (uint32_t)(uintptr_t)((MaterialConstituent *)0x0);
    (*(uint32_t*)&(local_28)) = (uint32_t)(uintptr_t)(&vftable);
  }
  if ((local_4c != (CraftBlueprint *)0x0) &&
     (local_a8.GasComposition._pad_0x0_0 = (int)&vftable_15,
     local_a8.GasComposition.Data != (MaterialConstituent *)0x0)) {
    port_op_delete(local_a8.GasComposition.Data);
  }
  if ((this->CachedPropellantComposition != (Material *)0x0) &&
     (0.0 < this->CachedPropellantMass_kg)) {
    (*(uint32_t*)&(local_28)) = (uint32_t)(uintptr_t)(&vftable_15);
    (*(uint32_t*)((char*)&(local_28)+4)) = (uint32_t)(uintptr_t)((MaterialConstituent *)0x0);
    (*(uint32_t*)((char*)&(local_28)+8)) = 0;
    (*(uint32_t *)((char *)&(local_28) + 12)) = 0;
    (*(uint64_t *)((char *)&(local_28) + 16)) = 0.0;
    dStack_10 = 0.0;
    pDVar8 = (Darray_L_MaterialConstituent_G_ *)(uintptr_t)(Material__GetDecompositionProductsByMassPercent
                       (this->CachedPropellantComposition,(Darray_L_MaterialConstituent_G_ *)&local_64));
    util__Darray_L_MaterialConstituent_G___op_assign
              ((Darray_L_MaterialConstituent_G_ *)local_28,(Darray_L_struct_MaterialConstituent_G_ *)pDVar8)
    ;
    local_64._pad_0x0_0 = (int)&vftable_15;
    if (local_64.Data != (MaterialComposition *)0x0) {
      port_op_delete(local_64.Data);
    }
    local_4c = (CraftBlueprint *)this->CachedPropellantComposition;
    (*(uint64_t *)((char *)&(local_28) + 16)) = this->CachedPropellantMass_kg;
    Material__GetDecompositionReaction_Memoize((Material *)local_4c);
    if (*(undefined1 *)((int)&(local_4c->GetUpDirection_MemoizedValue).Data.X + 4) == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    local_4c = (CraftBlueprint *)(uintptr_t)((local_4c->GetUpDirection_MemoizedValue).Data.X);
    ChemicalReaction__GetAdiabaticFlameTemperature_K_Memoize((ChemicalReaction *)local_4c);
    if ((bool)((local_4c->MaterialClass__Armor).GetOuterArmorSegmentsByLayer_m_MemoizedValue.Data._pad_0x0_0 ==
        false) ) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dStack_10 = *(double *)&(local_4c->MaterialClass__Armor).GetOuterArmorSegments_m_MemoizedValue.Data.Capacity;
    pAVar7 = CompositeAmmoExplosions(&local_a8,&local_48,(AmmoExplosion *)local_28);
    util__Darray_L_MaterialConstituent_G___op_assign
              (&local_48.GasComposition,(Darray_L_struct_MaterialConstituent_G_ *)pAVar7);
    local_48.Mass_kg = pAVar7->Mass_kg;
    local_48.Temperature_K = pAVar7->Temperature_K;
    local_a8.GasComposition._pad_0x0_0 = (int)&vftable_15;
    if (local_a8.GasComposition.Data != (MaterialConstituent *)0x0) {
      port_op_delete(local_a8.GasComposition.Data);
    }
    (*(uint32_t*)&(local_28)) = (uint32_t)(uintptr_t)(&vftable_15);
    pcVar12 = DebugBreak_exref;
    if ((MaterialConstituent *)(*(uint32_t*)((char*)&(local_28)+4)) != (MaterialConstituent *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(local_28)+4)));
      pcVar12 = DebugBreak_exref;
    }
  }
  local_4c = this->ShipClass__Payload;
  if (local_4c == (CraftBlueprint *)0x0) {
    *(uint64_t *)&local_6c = (double)((ulonglong)local_6c & 0xffffff0000000000);
  }
  else {
    CraftBlueprint__GetShipClass_Memoize(local_4c);
    if ((char)(local_4c->GetMainEngineModules_MemoizedValue).Data._padfb0 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      (*pcVar12)();
    }
    (*(uint40_t*)&(local_6c)) =
         CONCAT14(1,*(undefined4 *)&(local_4c->GetMainEngineModulePlacers_MemoizedValue).IsValidData
                 );
  }
  *(uint32_t *)&local_54 = (uint32_t)(uintptr_t)((ShipClass *)&local_6c);
  local_4c = (CraftBlueprint *)this->CachedPropellantComposition;
  if (local_4c == (CraftBlueprint *)0x0) {
    local_84 = 0.0;
  }
  else {
    Material__GetCost_c__kg_Memoize((Material *)local_4c);
    if ((local_4c->GetForwardDirection_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      (*pcVar12)();
    }
    local_84 = this->CachedPropellantMass_kg * (local_4c->GetForwardDirection_MemoizedValue).Data.Z;
  }
  local_4c = (CraftBlueprint *)this->Composition;
  Material__GetCost_c__kg_Memoize((Material *)local_4c);
  if ((local_4c->GetForwardDirection_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    (*pcVar12)();
  }
  local_b0 = this->Mass_kg * (local_4c->GetForwardDirection_MemoizedValue).Data.Z + local_84;
  local_4d = (undefined1)local_54[1];
  local_64._pad_0x0_0 = (int)&vftable_75;
  local_64.Data = (MaterialComposition *)0x0;
  local_64.Size = 0;
  local_64.Capacity = 1;
  *(uint32_t *)&local_54 = (uint32_t)(uintptr_t)((ShipClass *)*local_54);
  local_64.Data = (struct MaterialComposition *)(uintptr_t)(port_op_new(0x10));
  iVar4 = local_64.Size;
  if (local_64.Data == (MaterialComposition *)0x0) {
    local_64.Data = (MaterialComposition *)0x0;
  }
  else {
    (local_64.Data)->Type = (Material *)0x0;
    (local_64.Data)->Mass_kg = 0.0;
  }
  iVar11 = 0;
  if (0 < local_64.Capacity) {
    iVar10 = 0;
    do {
      iVar11 = iVar11 + 1;
      puVar2 = (undefined4 *)((int)&(local_64.Data)->Type + iVar10);
      *puVar2 = 0;
      puVar2[1] = (*(uint32_t*)&(auStack_78));
      puVar2[2] = 0;
      puVar2[3] = 0;
      iVar10 = iVar10 + 0x10;
    } while (iVar11 < local_64.Capacity);
  }
  local_7c = this->Composition;
  unique0x0000a400 = this->Mass_kg;
  local_4c = (CraftBlueprint *)(local_64.Size + 1);
  util__Darray_L_MaterialConstituent_G___SetSize
            ((Darray_L_MaterialConstituent_G_ *)&local_64,(int *)&local_4c);
  bVar5 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                    ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)&local_64,iVar4);
  iVar4 = local_64.Size;
  if (bVar5) {
    pMVar3 = local_64.Data + local_64.Size + -1;
    pMVar3->Type = local_7c;
    *(undefined4 *)&(*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar3) + 0x4)) = (*(uint32_t*)&(auStack_78));
    *(undefined4 *)&(pMVar3->Mass_kg) = (*(uint32_t*)((char*)&(auStack_78)+4));
    *(int *)((int)&pMVar3->Mass_kg + 4) = iStack_70;
  }
  if ((this->CachedPropellantComposition != (Material *)0x0) &&
     (0.0 < this->CachedPropellantMass_kg)) {
    local_4c = (CraftBlueprint *)(local_64.Size + 1);
    local_7c = this->CachedPropellantComposition;
    unique0x10000d48 = this->CachedPropellantMass_kg;
    util__Darray_L_MaterialConstituent_G___SetSize
              ((Darray_L_MaterialConstituent_G_ *)&local_64,(int *)&local_4c);
    bVar5 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                      ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)&local_64,iVar4);
    if (bVar5) {
      pMVar3 = local_64.Data + local_64.Size + -1;
      pMVar3->Type = local_7c;
      *(undefined4 *)&(*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar3) + 0x4)) = (*(uint32_t*)&(auStack_78));
      *(undefined4 *)&(pMVar3->Mass_kg) = (*(uint32_t*)((char*)&(auStack_78)+4));
      *(int *)((int)&pMVar3->Mass_kg + 4) = iStack_70;
    }
  }
  pCVar6 = this->ShipClass__Payload;
  if (pCVar6 != (CraftBlueprint *)0x0) {
    CraftBlueprint__GetComposition_Memoize(pCVar6);
    if (*(char *)((pCVar6->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 7) ==
        '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    util__Darray_L_MaterialComposition_G___op_iadd
          (&local_64,
               (Darray_L_struct_MaterialComposition_G_ *)
               ((pCVar6->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 5));
    if (this->ShipClass__Payload != (CraftBlueprint *)0x0) {
      pCVar9 = CraftBlueprint__GetStorageCylinder_m
                         (this->ShipClass__Payload,(Cylinder_L_double_G_ *)(local_28 + 0x10));
      dVar13 = pCVar9->Height;
      goto LAB_0066a2d5;
    }
  }
  dVar13 = 0.0;
LAB_0066a2d5:
  local_84 = this->BoreRadius_m;
  if ((this->CachedPropellantComposition == (Material *)0x0) ||
     (this->CachedPropellantMass_kg <= 0.0)) {
    *(uint32_t *)&local_6c = 0.0;
  }
  else {
    local_6c = (this->CachedPropellantMass_kg / this->CachedPropellantComposition->Density_kg__m3) /
               (local_84 * local_84 * 3.141592653589793);
  }
  local_6c = (this->Mass_kg / this->Composition->Density_kg__m3) /
             (local_84 * local_84 * 3.141592653589793) + dVar13 + local_6c;
  AmmoExplosion__AmmoExplosion(&local_a8,&local_48);
  GetAmmoDescription(this,(Str_L_char_G_ *)auStack_78);
  GetAmmoName(this,&local_bc,local_88);
  (*(uint64_t*)&(local_124)) = local_84;
  (*(uint64_t*)((char*)&(local_124)+8)) = local_6c;
  util__Darray_L_MaterialComposition_G___Darray_L_MaterialComposition_G_
            ((Darray_L_MaterialComposition_G_ *)(local_124 + 0x10),
             (Darray_L_struct_MaterialComposition_G_ *)&local_64);
  util__Str_char___Str_char((Str_L_char_G_ *)(local_124 + 0x20),&local_bc);
  util__Str_char___Str_char((Str_L_char_G_ *)(local_124 + 0x2c),(Str_L_char_G_ *)auStack_78);
  local_ec = (ShipClass)local_54;
  local_e8 = (bool)local_4d;
  AmmoExplosion__AmmoExplosion((AmmoExplosion *)(local_124 + 0x40),&local_a8);
  local_c4 = local_b0;
  local_64._pad_0x0_0 = (int)&vftable_75;
  if (local_64.Data != (MaterialComposition *)0x0) {
    port_op_delete(local_64.Data);
  }
  local_64.Data = (MaterialComposition *)0x0;
  local_64._pad_0x0_0 = (int)&vftable;
  if (local_bc.Data != (char *)0x0) {
    port_op_delete(local_bc.Data);
  }
  if ((char *)(*(uint32_t*)&(auStack_78)) != (char *)0x0) {
    port_op_delete((void *)(*(uint32_t*)&(auStack_78)));
  }
  local_a8.GasComposition._pad_0x0_0 = (int)&vftable_15;
  if (local_a8.GasComposition.Data != (MaterialConstituent *)0x0) {
    port_op_delete(local_a8.GasComposition.Data);
  }
  *(undefined4 *)&(__return_storage_ptr__->Data).Dimensions_m.Radius = (*(uint32_t*)&(local_124));
  *(undefined4 *)((int)&(__return_storage_ptr__->Data).Dimensions_m.Radius + 4) = (*(uint32_t*)((char*)&(local_124)+4));
  *(undefined4 *)&(__return_storage_ptr__->Data).Dimensions_m.Height = (*(uint32_t*)((char*)&(local_124)+8));
  *(undefined4 *)((int)&(__return_storage_ptr__->Data).Dimensions_m.Height + 4) = (*(uint32_t *)((char *)&(local_124) + 12));
  util__Darray_L_MaterialComposition_G___Darray_L_MaterialComposition_G_
            (&(__return_storage_ptr__->Data).Composition,
             (Darray_L_struct_MaterialComposition_G_ *)(local_124 + 0x10));
  util__Str_char___Str_char(&(__return_storage_ptr__->Data).Name,(Str_L_char_G_ *)(local_124 + 0x20));
  util__Str_char___Str_char
            (&(__return_storage_ptr__->Data).Descriptor,(Str_L_char_G_ *)(local_124 + 0x2c));
  (__return_storage_ptr__->Data).Class.Data = local_ec;
  (__return_storage_ptr__->Data).Class.IsValidData = local_e8;
  AmmoExplosion__AmmoExplosion
            (&(__return_storage_ptr__->Data).ExplosionPotential,(AmmoExplosion *)(local_124 + 0x40))
  ;
  (__return_storage_ptr__->Data).CostOfOneUnit_c = local_c4;
  __return_storage_ptr__->IsValidData = true;
  AmmoInfo___AmmoInfo((AmmoInfo *)local_124);
  local_48.GasComposition._pad_0x0_0 = (int)&vftable_15;
  if (local_48.GasComposition.Data != (MaterialConstituent *)0x0) {
    port_op_delete(local_48.GasComposition.Data);
  }
  return __return_storage_ptr__;
}

//==== 0066a580 GetAmmoName ====

/* public: class util__Str_L_char_G_  MassProjectileSubModule__GetAmmoName(class
   util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
MassProjectileSubModule__GetAmmoName
          (MassProjectileSubModule *this,Str_L_char_G_ *__return_storage_ptr__,Str_L_char_G_ *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  Str_L_char_G_ *pSVar6;
  LocStr *this_00;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  void *local_50 [3];
  void *local_44;
  void *local_38 [3];
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  undefined4 local_8;
  
  local_8 = 0;
  if (this->ShipClass__Payload == (CraftBlueprint *)0x0) {
    util__Str_char___Str_char(&local_20,"Gun Round");
    local_14.Data = (char *)0x0;
    local_14.Capacity = 0;
    local_14.Length = 0;
    this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)local_50,&local_20,&local_14);
    pSVar6 = util__LocStr__operator__o3(this_00);
    if (pSVar6->Capacity < 1) {
      pcVar8 = "";
    }
    else {
      pcVar8 = pSVar6->Data;
    }
    if (param_1->Capacity < 1) {
      pcVar9 = "";
    }
    else {
      pcVar9 = param_1->Data;
    }
    iVar7 = (int)((this->BoreRadius_m + this->BoreRadius_m) / 0.001);
    if (iVar7 < 1) {
      iVar7 = 1;
    }
    pSVar6 = util__Printf(&local_2c,(wchar_t*)("%imm %s%s"),iVar7,pcVar9,pcVar8);
    bVar5 = false;
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    bVar1 = true;
  }
  else {
    pSVar6 = (Str_L_char_G_ *)(**(code **)(this->ShipClass__Payload->_pad_0x0_0 + 0x48))(local_38);
    bVar5 = true;
    bVar4 = false;
    bVar3 = false;
    bVar2 = false;
    bVar1 = false;
  }
  util__Str_char___Str_char(__return_storage_ptr__,pSVar6);
  if (bVar1) {
    if (local_2c.Data != (char *)0x0) {
      port_op_delete(local_2c.Data);
      local_2c.Data = (char *)0x0;
    }
  }
  if (bVar2) {
    if (local_44 != (void *)0x0) {
      port_op_delete(local_44);
      local_44 = (void *)0x0;
    }
    if (local_50[0] != (void *)0x0) {
      port_op_delete(local_50[0]);
      local_50[0] = (void *)0x0;
    }
  }
  if (bVar3) {
    if (local_14.Data != (char *)0x0) {
      port_op_delete(local_14.Data);
      local_14.Data = (char *)0x0;
    }
  }
  if (bVar4) {
    if (local_20.Data != (char *)0x0) {
      port_op_delete(local_20.Data);
      local_20.Data = (char *)0x0;
    }
  }
  if ((local_38[0] != (void *)0x0) && (bVar5)) {
    port_op_delete(local_38[0]);
  }
  return __return_storage_ptr__;
}

//==== 0066a700 GetArmorMass_kg ====


/* public: double __thiscall AmmoBaySubModule__GetArmorMass_kg(void)const  */

double __thiscall AmmoBaySubModule__GetArmorMass_kg(AmmoBaySubModule *this)

{
  double dVar1;
  Cylinder_L_double_G_ CStack_1c;
  double dStack_c;
  
  if ((this->CachedArmorThickness_m).IsValidData == false) {
    dStack_c = 0.01;
  }
  else {
    dStack_c = (this->CachedArmorThickness_m).Data;
  }
  GetUnarmoredDimensions_m(this,&CStack_1c);
  dVar1 = CStack_1c.Radius * 3.141592653589793 * CStack_1c.Radius;
  return (CStack_1c.Radius * 6.283185307179586 * CStack_1c.Height + dVar1 + dVar1) *
         this->CachedArmorComposition->Density_kg__m3 * dStack_c;
}





//==== 0066a780 GetArmorRadius_m ====


/* public: double __thiscall BarrelArmorSubModule__GetArmorRadius_m(void)const  */

double __thiscall BarrelArmorSubModule__GetArmorRadius_m(BarrelArmorSubModule *this)

{
  return *(double *)(this + 0x30) + *(double *)(this + 0x18);
}





//==== 0066a790 GetArmoredDimensions_m ====


/* public: struct util__Cylinder_L_double_G_ 
   AmmoBaySubModule__GetArmoredDimensions_m(void)const  */

Cylinder_L_double_G_ * 
AmmoBaySubModule__GetArmoredDimensions_m
          (AmmoBaySubModule *this,Cylinder_L_double_G_ *__return_storage_ptr__)

{
  double dVar1;
  Cylinder_L_double_G_ *pCVar2;
  Cylinder_L_double_G_ CStack_34;
  Cylinder_L_double_G_ CStack_24;
  double dStack_14;
  double dStack_c;
  
  dStack_14 = 0.01;
  dStack_c = 0.01;
  if ((this->CachedArmorThickness_m).IsValidData != false) {
    dStack_14 = (this->CachedArmorThickness_m).Data;
    dStack_c = (this->CachedArmorThickness_m).Data;
  }
  pCVar2 = (Cylinder_L_double_G_ *)(uintptr_t)(GetUnarmoredDimensions_m(this,&CStack_24));
  dStack_c = dStack_c + dStack_c + pCVar2->Radius;
  pCVar2 = (Cylinder_L_double_G_ *)(uintptr_t)(GetUnarmoredDimensions_m(this,&CStack_34));
  dVar1 = pCVar2->Height;
  __return_storage_ptr__->Radius = dStack_c;
  __return_storage_ptr__->Height = dStack_14 + dStack_14 + dVar1;
  return __return_storage_ptr__;
}





//==== 0066a820 GetAverageFiringTemperatureDelta_K ====


/* public: double __thiscall BarrelArmorSubModule__GetAverageFiringTemperatureDelta_K(void)const  */

double __thiscall
BarrelArmorSubModule__GetAverageFiringTemperatureDelta_K(BarrelArmorSubModule *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  float10 fVar6;
  double dVar7;
  double dStack_c;
  
  if ((*(int *)(this + 0x40) == 0) || (*(code **)(uintptr_t)(this + 0x44) == (code *)0x0)) {
    dStack_c = 0.0;
  }
  else {
    fVar6 = (float10)(**(code **)(uintptr_t)(this + 0x44))(*(int *)(this + 0x40));
    dStack_c = (double)fVar6;
  }
  dVar1 = *(double *)(this + 0x30);
  dVar2 = *(double *)(this + 0x18);
  dVar3 = *(double *)(this + 0x38);
  dVar4 = *(double *)(*(int *)(this + 0x10) + 0x30);
  if ((*(int *)(this + 0x88) == 0) || (*(code **)(uintptr_t)(this + 0x8c) == (code *)0x0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = (**(code **)(uintptr_t)(this + 0x8c))(*(int *)(this + 0x88));
  }
  if (*(char *)&(this[0x68]) != 0) {
    return *(double *)(this + 0x60);
  }
  dVar7 = *(double *)(this + 0x18) /
          ((*(double *)(this + 0x18) + *(double *)(this + 0x30)) - *(double *)(this + 0x28));
  if (dVar7 <= 0.0) {
    dVar7 = 0.0;
  }
  if (1.0 <= dVar7) {
    dVar7 = 1.0;
  }
  return *(double *)(this + 0x48) /
         (((1.0 - dVar7) * *(double *)(*(int *)(this + 0x24) + 0x90) +
          *(double *)(*(int *)(this + 0x10) + 0x90) * dVar7) *
         ((double)iVar5 *
          ((dVar1 + dVar2) * 3.141592653589793 * (dVar1 + dVar2) - dVar1 * 3.141592653589793 * dVar1
          ) * dVar3 * dVar4 + dStack_c));
}





//==== 0066a950 GetBarrelRadialEndMomentOfInertia_kg_m2 ====


/* public: double __thiscall
   BarrelArmorSubModule__GetBarrelRadialEndMomentOfInertia_kg_m2(void)const  */

double __thiscall
BarrelArmorSubModule__GetBarrelRadialEndMomentOfInertia_kg_m2(BarrelArmorSubModule *this)

{
  double dVar1;
  double dVar2;
  float10 fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar5 = Mechanics__ThickCylindericalShellRadialMomentOfInertia_kg_m2
                    (*(double *)(this + 0x78),*(double *)(this + 0x28),*(double *)(this + 0x70),
                     *(double *)(this + 0x80));
  if ((*(int *)(this + 0x40) == 0) || (*(code **)(uintptr_t)(this + 0x44) == (code *)0x0)) {
    dVar1 = 0.0;
  }
  else {
    fVar3 = (float10)(**(code **)(uintptr_t)(this + 0x44))();
    dVar1 = (double)fVar3;
  }
  dVar6 = Mechanics__ThickCylindericalShellRadialMomentOfInertia_kg_m2
                    (*(double *)(this + 0x38) - *(double *)(this + 0x78),*(double *)(this + 0x28),
                     *(double *)(this + 0x30),dVar1 - *(double *)(this + 0x80));
  dVar1 = *(double *)(this + 0x30);
  dVar4 = *(double *)(this + 0x18) + dVar1;
  dVar7 = Mechanics__ThickCylindericalShellRadialMomentOfInertia_kg_m2
                    (*(double *)(this + 0x38) - *(double *)(this + 0x78),dVar1,dVar4,
                     (dVar4 * 3.141592653589793 * dVar4 - dVar1 * 3.141592653589793 * dVar1) *
                     *(double *)(this + 0x38) * *(double *)(*(int *)(this + 0x10) + 0x30));
  dVar1 = *(double *)(this + 0x78);
  dVar4 = (*(double *)(this + 0x38) - dVar1) * 0.5 + dVar1;
  if ((*(int *)(this + 0x40) == 0) || (*(code **)(uintptr_t)(this + 0x44) == (code *)0x0)) {
    dVar2 = 0.0;
  }
  else {
    fVar3 = (float10)(**(code **)(uintptr_t)(this + 0x44))();
    dVar2 = (double)fVar3;
  }
  return dVar4 * dVar4 * dVar2 + dVar6 + dVar7 + dVar5 +
         dVar1 * 0.5 * dVar1 * 0.5 * *(double *)(this + 0x80);
}





//==== 0066aaf0 GetBarrelRadiantCooling_W ====


/* public: double __thiscall BarrelArmorSubModule__GetBarrelRadiantCooling_W(void)const  */

double __thiscall BarrelArmorSubModule__GetBarrelRadiantCooling_W(BarrelArmorSubModule *this)

{
  Material *pMVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (*(double *)(this + 0x18) <= 0.0) {
    pMVar1 = *(Material **)(this + 0x24);
  }
  else {
    pMVar1 = *(Material **)(this + 0x10);
  }
  dVar2 = GetAverageFiringTemperatureDelta_K(this);
  dVar2 = Physics__GetBlackbodyRadiationPeakWavelength_nm(dVar2 + 2.7);
  dVar2 = Material__GetEmissivityCoefficient(pMVar1,dVar2);
  if (*(double *)(this + 0x18) <= 0.0) {
    pMVar1 = *(Material **)(this + 0x24);
  }
  else {
    pMVar1 = *(Material **)(this + 0x10);
  }
  dVar3 = Material__GetSafeUseTemperature_K(pMVar1);
  dVar4 = GetExposedRadiantArea_m2(this);
  dVar2 = Physics__GetBlackbodyRadiation_W(dVar4,dVar2,dVar3);
  return dVar2;
}





//==== 0066ab80 GetBeamDeflectionStress_Pa ====


/* public: double __thiscall BarrelArmorSubModule__GetBeamDeflectionStress_Pa(void)const  */

double __thiscall BarrelArmorSubModule__GetBeamDeflectionStress_Pa(BarrelArmorSubModule *this)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar5 = *(double *)(this + 0x28);
  dVar4 = *(double *)(this + 0x70);
  dVar2 = dVar5 * 3.141592653589793 * dVar5;
  dVar7 = *(double *)(this + 0x50);
  if (dVar4 <= 0.0) {
    dVar4 = *(double *)(this + 0x18) + *(double *)(this + 0x30);
  }
  else {
    dVar3 = (*(double *)(this + 0x58) / *(double *)(this + 0x38)) *
            (*(double *)(this + 0x58) / *(double *)(this + 0x38));
    if (((dVar3 <= 0.0) && (1.0 <= dVar3)) || ((dVar3 <= 1.0 && (0.0 <= dVar3)))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\modules\\weaponmodules\\weaponsubmodules.cpp"
                      ,0x52,"IsSaturated(t)",(char *)0x0);
      DebugBreak();
      dVar4 = *(double *)(this + 0x70);
      dVar5 = *(double *)(this + 0x28);
    }
    dVar4 = (1.0 - dVar3) * dVar4 + dVar3 * *(double *)(this + 0x30) + *(double *)(this + 0x18);
  }
  dVar4 = Mechanics__AnnulusXAreaMomentOfInertia_m4(dVar5,dVar4);
  dVar5 = *(double *)(this + 0x18) /
          ((*(double *)(this + 0x18) + *(double *)(this + 0x30)) - *(double *)(this + 0x28));
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  if (1.0 <= dVar5) {
    dVar5 = 1.0;
  }
  dVar3 = Material__GetYoungsModulus_Pa(*(Material **)(this + 0x24));
  dVar6 = Material__GetYoungsModulus_Pa(*(Material **)(this + 0x10));
  dVar7 = Mechanics__GetDeflectionOfAConcentratedLoadedCantileverBeam_m
                    ((1.0 - dVar5) * dVar3 + dVar5 * dVar6,dVar4,*(double *)(this + 0x38),
                     dVar2 * dVar7,*(double *)(this + 0x58));
  dVar5 = *(double *)(this + 0x30);
  dVar4 = *(double *)(this + 0x18) / ((*(double *)(this + 0x18) + dVar5) - *(double *)(this + 0x28))
  ;
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  if (1.0 <= dVar4) {
    dVar4 = 1.0;
  }
  dVar2 = Material__GetYoungsModulus_Pa(*(Material **)(this + 0x24));
  dVar3 = Material__GetYoungsModulus_Pa(*(Material **)(this + 0x10));
  return (dVar3 * dVar4 + (1.0 - dVar4) * dVar2) * (dVar7 / dVar5);
}





//==== 0066ad90 GetBoreArea_m2 ====


/* public: double __thiscall MassProjectileSubModule__GetBoreArea_m2(void)const  */

double __thiscall MassProjectileSubModule__GetBoreArea_m2(MassProjectileSubModule *this)

{
  return this->BoreRadius_m * 3.141592653589793 * this->BoreRadius_m;
}





//==== 0066ada0 GetBoreRadius_m ====


/* public: double __thiscall MassProjectileSubModule__GetBoreRadius_m(void)const  */

double __thiscall MassProjectileSubModule__GetBoreRadius_m(MassProjectileSubModule *this)

{
  return this->BoreRadius_m;
}





//==== 0066adb0 GetBounds ====


/* public: static struct util__AABB_L_structutil__Vec3_L_double_G__G_ __cdecl
   TurretedGun__GetBounds(double,class util__Maybe_L_structutil__Cylinder_L_double_G__G_,class
   util__Maybe_L_structutil__Cylinder_L_double_G__G_,double,double,double,double,struct
   util__Vec3_L_double_G_,bool) */

void __cdecl
TurretedGun__GetBounds
          (double *param_1,double param_2,double param_3,double param_4,char param_5,
          undefined4 param_6,double param_7,double param_8,char param_9,undefined4 param_10,
          double param_11,double param_12,double param_13,double param_14,double param_15,
          double param_16,double param_17,char param_18)

{
  undefined8 stack0xfffffffc;
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  uVar1 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (param_5 == '\0') {
    param_3 = 0.0;
    param_4 = 0.0;
  }
  if (param_9 == '\0') {
    param_7 = 0.0;
    param_8 = 0.0;
  }
  if (param_3 <= param_7) {
    param_3 = param_7;
  }
  if (param_3 <= param_2) {
    param_3 = param_2;
  }
  dVar7 = param_8 + param_4 + param_2;
  dVar5 = param_3 * 0.0 + param_2 + param_14;
  dVar6 = (param_2 + param_14) * 0.0 + param_3;
  dVar2 = dVar7 * 0.0 - param_3;
  dVar8 = dVar7 * -1.0 + -(param_3 * 0.0);
  dVar7 = dVar2;
  if (dVar2 <= dVar6) {
    dVar7 = dVar6;
  }
  if (dVar6 <= dVar2) {
    dVar2 = dVar6;
  }
  dVar6 = dVar8;
  if (dVar5 <= dVar8) {
    dVar6 = dVar5;
  }
  if (dVar8 <= dVar5) {
    dVar8 = dVar5;
  }
  if (param_18 == '\0') {
    dVar5 = 0.0;
  }
  else {
    dVar5 = -param_13;
  }
  dVar4 = param_15 * param_13 + param_15 * param_11 + 0.0;
  dVar10 = param_15 * param_11 + 0.0 + 0.0;
  dVar11 = param_17 * param_13 + param_17 * param_11 + dVar5 + param_14;
  dVar5 = param_17 * param_11 + 0.0 + dVar5 + param_14;
  dVar9 = param_16 * param_13 + param_16 * param_11 + 0.0;
  dVar12 = param_16 * param_11 + 0.0 + 0.0;
  dVar3 = dVar10;
  if (dVar10 <= dVar4) {
    dVar3 = dVar4;
  }
  if (dVar4 <= dVar10) {
    dVar10 = dVar4;
  }
  dVar4 = dVar7;
  if (dVar7 <= dVar3 + param_12) {
    dVar4 = dVar3 + param_12;
  }
  dVar3 = dVar12;
  if (dVar12 <= dVar9) {
    dVar3 = dVar9;
  }
  if (dVar9 <= dVar12) {
    dVar12 = dVar9;
  }
  if (dVar7 <= dVar3 + param_12) {
    dVar7 = dVar3 + param_12;
  }
  dVar3 = dVar5;
  if (dVar5 <= dVar11) {
    dVar3 = dVar11;
  }
  if (dVar8 <= dVar3 + param_12) {
    dVar8 = dVar3 + param_12;
  }
  if (dVar11 <= dVar5) {
    dVar5 = dVar11;
  }
  dVar3 = dVar2;
  if (dVar10 - param_12 <= dVar2) {
    dVar3 = dVar10 - param_12;
  }
  if (dVar5 - param_12 <= dVar6) {
    dVar6 = dVar5 - param_12;
  }
  if (dVar12 - param_12 <= dVar2) {
    dVar2 = dVar12 - param_12;
  }
  dVar5 = dVar3;
  if (dVar3 <= dVar4) {
    dVar5 = dVar4;
  }
  if (dVar4 <= dVar3) {
    dVar3 = dVar4;
  }
  *param_1 = dVar3;
  dVar3 = dVar2;
  if (dVar7 <= dVar2) {
    dVar3 = dVar7;
  }
  if (dVar2 <= dVar7) {
    dVar2 = dVar7;
  }
  param_1[1] = dVar3;
  dVar7 = dVar6;
  if (dVar8 <= dVar6) {
    dVar7 = dVar8;
  }
  if (dVar6 <= dVar8) {
    dVar6 = dVar8;
  }
  param_1[2] = dVar7;
  param_1[3] = dVar5;
  param_1[4] = dVar2;
  param_1[5] = dVar6;
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0066afe0 GetComposition_0066afe0 ====


/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   AmmoBaySubModule__GetComposition(void)const  */

void __thiscall AmmoBaySubModule__GetComposition(AmmoBaySubModule *this)

{
  undefined8 stack0xfffffffc;
  int *piVar1;
  Material *pMVar2;
  bool bVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  Darray_L_struct_MaterialComposition_G_ *in_stack_00000004;
  int iStack_2c;
  Cylinder_L_double_G_ CStack_20;
  undefined8 uStack_10;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_MaterialComposition___Darray_struct_MaterialComposition
            (in_stack_00000004,(Darray_L_struct_MaterialComposition_G_ *)&(this->CachedInfo).Composition
            );
  (*(uint32_t*)((char*)&(uStack_10)+4)) = 0;
  iVar4 = (**(code **)(*(int *)in_stack_00000004 + 0xc))();
  if ((*(uint32_t*)((char*)&(uStack_10)+4)) < iVar4) {
    do {
      iVar4 = (*(code *)**(undefined4 **)in_stack_00000004)((int)&uStack_10 + 4);
      *(double *)(iVar4 + 8) = (double)this->Capacity * *(double *)(iVar4 + 8);
      (*(uint32_t*)((char*)&(uStack_10)+4)) = (*(uint32_t*)((char*)&(uStack_10)+4)) + 1;
      iVar4 = (**(code **)(*(int *)in_stack_00000004 + 0xc))();
    } while ((*(uint32_t*)((char*)&(uStack_10)+4)) < iVar4);
  }
  if ((this->CachedArmorThickness_m).IsValidData == false) {
    uStack_10 = 0.01;
  }
  else {
    uStack_10 = (this->CachedArmorThickness_m).Data;
  }
  GetUnarmoredDimensions_m(this,&CStack_20);
  pMVar2 = this->CachedArmorComposition;
  iVar4 = *(int *)(in_stack_00000004 + 8);
  dVar5 = CStack_20.Radius * 3.141592653589793 * CStack_20.Radius;
  dVar6 = pMVar2->Density_kg__m3 * uStack_10;
  uStack_10 = (double)CONCAT44(iVar4 + 1,(undefined4)uStack_10);
  util__Darray_struct_MaterialConstituent___SetSize
            ((Darray_L_struct_MaterialConstituent_G_ *)in_stack_00000004,(int *)((int)&uStack_10 + 4));
  bVar3 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                    ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)in_stack_00000004,
                     iVar4);
  if (bVar3) {
    piVar1 = (int *)(*(int *)(in_stack_00000004 + 4) + -0x10 +
                    *(int *)(in_stack_00000004 + 8) * 0x10);
    *piVar1 = (int)pMVar2;
    piVar1[1] = iStack_2c;
    *(double *)(piVar1 + 2) =
         (CStack_20.Radius * 6.283185307179586 * CStack_20.Height + dVar5 + dVar5) * dVar6;
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0066b100 GetEstimatedBarrelCooldownTime_s ====


/* public: double __thiscall BarrelArmorSubModule__GetEstimatedBarrelCooldownTime_s(void)const  */

double __thiscall BarrelArmorSubModule__GetEstimatedBarrelCooldownTime_s(BarrelArmorSubModule *this)

{
  double dVar1;
  
  dVar1 = GetBarrelRadiantCooling_W(this);
  if (0.0 < dVar1) {
    dVar1 = GetBarrelRadiantCooling_W(this);
    return *(double *)(this + 0x48) / dVar1;
  }
  return 0.0;
}





//==== 0066b140 GetExitCylinder_m ====


/* public: struct util__Cylinder_L_double_G_ 
   MassProjectileSubModule__GetExitCylinder_m(void)const  */

Cylinder_L_double_G_ * 
MassProjectileSubModule__GetExitCylinder_m
          (MassProjectileSubModule *this,Cylinder_L_double_G_ *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  Cylinder_L_double_G_ *pCVar4;
  double dVar5;
  Cylinder_L_double_G_ CStack_14;
  
  if (this->ShipClass__Payload == (CraftBlueprint *)0x0) {
    dVar5 = 0.0;
  }
  else {
    pCVar4 = CraftBlueprint__GetStorageCylinder_m(this->ShipClass__Payload,&CStack_14);
    dVar5 = pCVar4->Height;
  }
  dVar1 = this->Mass_kg;
  dVar2 = this->BoreRadius_m;
  dVar3 = this->Composition->Density_kg__m3;
  __return_storage_ptr__->Radius = dVar2;
  __return_storage_ptr__->Height = (dVar1 / dVar3) / (dVar2 * dVar2 * 3.141592653589793) + dVar5;
  return __return_storage_ptr__;
}





//==== 0066b1a0 GetExitMass_kg ====


/* public: double __thiscall MassProjectileSubModule__GetExitMass_kg(void)const  */

double __thiscall MassProjectileSubModule__GetExitMass_kg(MassProjectileSubModule *this)

{
  double dVar1;
  
  if (this->ShipClass__Payload != (CraftBlueprint *)0x0) {
    dVar1 = CraftBlueprint__GetTotalMass_kg(this->ShipClass__Payload);
    return dVar1 + this->Mass_kg;
  }
  return this->Mass_kg + 0.0;
}





//==== 0066b1d0 GetExposedRadiantArea_m2 ====


/* public: double __thiscall BarrelArmorSubModule__GetExposedRadiantArea_m2(void)const  */

double __thiscall BarrelArmorSubModule__GetExposedRadiantArea_m2(BarrelArmorSubModule *this)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar5;
  undefined4 uVar10;
  double dVar6;
  double dVar11;
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
  
  if (*(char *)&(this[0x20]) == 0) {
    if ((*(int *)(this + 0x88) == 0) || (*(code **)(uintptr_t)(this + 0x8c) == (code *)0x0)) {
      iVar2 = 0;
LAB_0066b222:
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\geometry.inl",0x102
                      ,"Between(CircleCount, 1, 20)",(char *)0x0);
      DebugBreak();
    }
    else {
      iVar2 = (**(code **)(uintptr_t)(this + 0x8c))(*(int *)(this + 0x88));
      if (((1 < iVar2) || (iVar2 < 0x14)) && ((0x14 < iVar2 || (iVar2 < 1)))) goto LAB_0066b222;
    }
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_a8 = 0;
    uStack_a4 = 0x3ff00000;
    uVar3 = 0;
    uVar7 = 0x40080000;
    uStack_a0 = 0x4000000000000000;
    libm_sse2_sqrt_precise(0.0);
    dStack_98 = (double)CONCAT44(uVar7,uVar3) * 0.6666666666666666 + 1.0;
    uVar3 = 0;
    uVar8 = 0x40000000;
    libm_sse2_sqrt_precise(0.0);
    dVar1 = (double)CONCAT44(uVar8,uVar3) + 1.0;
    uVar7 = 0;
    uVar9 = 0x40140000;
    dStack_90 = dVar1;
    libm_sse2_sqrt_precise(0.0);
    dVar5 = 1.0 / (double)CONCAT44(uVar9,uVar7) + 1.0;
    dVar5 = dVar5 + dVar5;
    libm_sse2_sqrt_precise(0.0);
    dStack_88 = dVar5 + 1.0;
    uStack_80 = 0;
    uStack_7c = 0x40080000;
    uStack_78 = 0;
    uStack_74 = 0x40080000;
    uVar4 = 0x3bbba140;
    uVar10 = 0x3fdcb91f;
    libm_sse2_sin_precise(0.0);
    dVar5 = (double)CONCAT44(uVar8,uVar3) + 2.0;
    dStack_70 = 1.0 / (double)CONCAT44(uVar10,uVar4) + 1.0;
    dVar5 = dVar5 + dVar5;
    libm_sse2_sqrt_precise(0.0);
    dStack_68 = dVar5 + 1.0;
    uStack_60 = 0x400e8113950d514c;
    uVar3 = 0x4ae74487;
    uVar4 = 0x3fd65718;
    libm_sse2_sin_precise(0.0);
    uStack_50 = 0x40101e4ff7e6fd6d;
    dStack_58 = 1.0 / (double)CONCAT44(uVar4,uVar3) + 1.0;
    dStack_48 = (double)CONCAT44(uVar9,uVar7) + 2.0;
    uStack_40 = 0x4011504f9338cca2;
    dVar5 = 2.0 / (double)CONCAT44(uVar9,uVar7);
    dVar6 = dVar5 + 1.0;
    libm_sse2_sqrt_precise(0.0);
    dVar5 = dVar6 * 4.0 + dVar5 + 6.0;
    libm_sse2_sqrt_precise(0.0);
    dStack_38 = dVar5 + 1.0;
    uStack_30 = 0x208c6828;
    uStack_2c = 0x40127632;
    uStack_28 = 0xe51949f7;
    uStack_24 = 0x40132b0a;
    uVar3 = 0;
    uVar7 = 0x40180000;
    libm_sse2_sqrt_precise(0.0);
    dVar1 = (double)CONCAT44(uVar7,uVar3) + dVar1;
    (*(uint32_t*)((char*)&(auStack_20)+8)) = SUB84(dVar1,0);
    (*(uint64_t*)&(auStack_20)) = dVar1;
    (*(uint32_t *)((char *)&(auStack_20) + 12)) = (int)((ulonglong)dVar1 >> 0x20);
    uStack_10 = 0x40147d41a5b40143;
    dVar1 = (*(double *)(this + 0x30) + *(double *)(this + 0x18)) *
            *(double *)(&uStack_b0 + iVar2 * 2) * 6.283185307179586 * *(double *)(this + 0x38);
  }
  else {
    dVar1 = 0.0;
  }
  if ((*(int *)(this + 0x88) == 0) || (*(code **)(uintptr_t)(this + 0x8c) == (code *)0x0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(uintptr_t)(this + 0x8c))(*(int *)(this + 0x88));
    if (((iVar2 < 2) && (0x13 < iVar2)) || ((iVar2 < 0x15 && (0 < iVar2)))) goto LAB_0066b4b0;
  }
  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\geometry.inl",0x102,
                  "Between(CircleCount, 1, 20)",(char *)0x0);
  DebugBreak();
LAB_0066b4b0:
  uStack_a0 = 0x4000000000000000;
  uVar3 = 0;
  uVar7 = 0x40080000;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0x3ff00000;
  libm_sse2_sqrt_precise(0.0);
  dStack_98 = (double)CONCAT44(uVar7,uVar3) * 0.6666666666666666 + 1.0;
  uVar3 = 0;
  uVar8 = 0x40000000;
  libm_sse2_sqrt_precise(0.0);
  dVar5 = (double)CONCAT44(uVar8,uVar3) + 1.0;
  uVar7 = 0;
  uVar9 = 0x40140000;
  dStack_90 = dVar5;
  libm_sse2_sqrt_precise(0.0);
  dVar6 = 1.0 / (double)CONCAT44(uVar9,uVar7) + 1.0;
  dVar6 = dVar6 + dVar6;
  libm_sse2_sqrt_precise(0.0);
  dStack_88 = dVar6 + 1.0;
  uStack_80 = 0;
  uStack_7c = 0x40080000;
  uStack_78 = 0;
  uStack_74 = 0x40080000;
  uVar4 = 0x3bbba140;
  uVar10 = 0x3fdcb91f;
  libm_sse2_sin_precise(0.0);
  dVar6 = (double)CONCAT44(uVar8,uVar3) + 2.0;
  dStack_70 = 1.0 / (double)CONCAT44(uVar10,uVar4) + 1.0;
  dVar6 = dVar6 + dVar6;
  libm_sse2_sqrt_precise(0.0);
  dStack_68 = dVar6 + 1.0;
  uStack_60 = 0x400e8113950d514c;
  uVar3 = 0x4ae74487;
  uVar4 = 0x3fd65718;
  libm_sse2_sin_precise(0.0);
  uStack_50 = 0x40101e4ff7e6fd6d;
  dStack_58 = 1.0 / (double)CONCAT44(uVar4,uVar3) + 1.0;
  dStack_48 = (double)CONCAT44(uVar9,uVar7) + 2.0;
  dVar11 = 2.0 / (double)CONCAT44(uVar9,uVar7);
  uStack_40 = 0x4011504f9338cca2;
  dVar6 = dVar11 + 1.0;
  libm_sse2_sqrt_precise(0.0);
  dVar6 = dVar6 * 4.0 + dVar11 + 6.0;
  libm_sse2_sqrt_precise(0.0);
  dStack_38 = dVar6 + 1.0;
  uStack_30 = 0x208c6828;
  uStack_2c = 0x40127632;
  uStack_28 = 0xe51949f7;
  uStack_24 = 0x40132b0a;
  uVar3 = 0;
  uVar7 = 0x40180000;
  libm_sse2_sqrt_precise(0.0);
  dVar5 = (double)CONCAT44(uVar7,uVar3) + dVar5;
  (*(uint32_t*)((char*)&(auStack_20)+8)) = SUB84(dVar5,0);
  (*(uint64_t*)&(auStack_20)) = dVar5;
  (*(uint32_t *)((char *)&(auStack_20) + 12)) = (int)((ulonglong)dVar5 >> 0x20);
  uStack_10 = 0x40147d41a5b40143;
  dVar5 = (*(double *)(this + 0x30) + *(double *)(this + 0x18)) *
          *(double *)(&uStack_b0 + iVar2 * 2);
  return dVar5 * 3.141592653589793 * dVar5 + dVar1;
}





//==== 0066b6e0 GetExternalComposition ====


/* public: class Material * __thiscall BarrelArmorSubModule__GetExternalComposition(void)const  */

Material * __thiscall BarrelArmorSubModule__GetExternalComposition(BarrelArmorSubModule *this)

{
  if (0.0 < *(double *)(this + 0x18)) {
    return *(Material **)(this + 0x10);
  }
  return *(Material **)(this + 0x24);
}





//==== 0066b700 GetInitialBounds ====


/* public: static struct util__AABB_L_structutil__Vec3_L_double_G__G_ __cdecl
   TurretedGun__GetInitialBounds(class util__Maybe_L_double_G_,class util__Maybe_L_struct_util__Cylinder_L_double_G__G_,class util__Maybe_L_structutil__Cylinder_L_double_G___G_,double,double,double,double,bool) */

void __cdecl
TurretedGun__GetInitialBounds__o2
          (undefined1 (*param_1) [16],double param_2,char param_3,undefined4 param_4,
          undefined8 param_5,undefined8 param_6,char param_7,undefined4 param_8,double param_9,
          double param_10,char param_11)

{
  undefined8 stack0xfffffffc;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  uint uVar13;
  double dVar14;
  double in_stack_00000050;
  double in_stack_00000058;
  double in_stack_00000060;
  char in_stack_00000068;
  
  uVar4 = __security_cookie ^ (uint)&stack0xfffffffc;
  dVar14 = 0.0;
  if (param_7 == '\0') {
    uVar8 = 0;
    uVar9 = 0;
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    uVar8 = (undefined4)param_5;
    uVar9 = (undefined4)((ulonglong)param_5 >> 0x20);
    uVar5 = (undefined4)param_6;
    uVar6 = (undefined4)((ulonglong)param_6 >> 0x20);
  }
  if (param_11 == '\0') {
    param_9 = 0.0;
    param_10 = 0.0;
  }
  if ((double)CONCAT44(uVar9,uVar8) <= param_9) {
    uVar8 = SUB84(param_9,0);
    uVar9 = (undefined4)((ulonglong)param_9 >> 0x20);
  }
  param_10 = param_10 + (double)CONCAT44(uVar6,uVar5);
  if (param_3 == '\0') {
    if (in_stack_00000050 <= (double)CONCAT44(uVar9,uVar8)) {
      in_stack_00000050 = (double)CONCAT44(uVar9,uVar8);
    }
    if (in_stack_00000068 != '\0') {
      dVar14 = -in_stack_00000058;
    }
    uVar5 = SUB84(in_stack_00000050,0);
    uVar13 = (uint)((ulonglong)in_stack_00000050 >> 0x20);
    in_stack_00000058 = dVar14 + in_stack_00000058;
    dVar14 = dVar14 - param_10;
    uVar7 = uVar13 ^ 0x80000000;
    if (in_stack_00000050 <= -in_stack_00000050) {
      uVar7 = uVar13;
    }
    uVar10 = uVar13 ^ 0x80000000;
    if (-in_stack_00000050 <= in_stack_00000050) {
      uVar10 = uVar13;
    }
    dVar3 = (double)CONCAT44(uVar10,uVar5);
    *(undefined4 *)*param_1 = uVar5;
    *(uint *)(*param_1 + 4) = uVar7;
    *(undefined4 *)(*param_1 + 8) = uVar5;
    *(uint *)(*param_1 + 0xc) = uVar7;
    dVar11 = dVar14;
    if (dVar14 <= in_stack_00000058) {
      dVar11 = in_stack_00000058;
    }
    if (in_stack_00000058 <= dVar14) {
      dVar14 = in_stack_00000058;
    }
    *(double *)param_1[1] = dVar14;
    *(double *)(param_1[2] + 8) = dVar11;
  }
  else {
    uVar5 = SUB84(param_2,0);
    uVar6 = (int)((ulonglong)param_2 >> 0x20);
    if (param_2 <= (double)CONCAT44(uVar9,uVar8)) {
      uVar5 = uVar8;
      uVar6 = uVar9;
    }
    dVar12 = in_stack_00000058 + in_stack_00000060 + (double)CONCAT44(uVar6,uVar5);
    dVar11 = (double)CONCAT44(uVar6,uVar5) + 0.0;
    dVar14 = -(double)CONCAT44(uVar6,uVar5) - 0.0;
    param_10 = -(double)CONCAT44(uVar6,uVar5) - param_10;
    dVar3 = dVar14;
    if (dVar14 <= dVar11) {
      dVar3 = dVar11;
    }
    if (dVar11 <= dVar14) {
      dVar14 = dVar11;
    }
    (*(uint32_t*)((char*)&(auVar1)+8)) = SUB84(dVar14,0);
    (*(uint64_t*)&(auVar1)) = dVar14;
    (*(uint32_t *)((char *)&(auVar1) + 12)) = (int)((ulonglong)dVar14 >> 0x20);
(*(uint64_t *)(param_1)) = (*(uint64_t *)&(auVar1));
(*(uint64_t *)((char *)(param_1) + 8)) = (*(uint64_t *)((char *)&(auVar1) + 8));
    dVar14 = param_10;
    if (param_10 <= dVar12) {
      dVar14 = dVar12;
    }
    if (dVar12 <= param_10) {
      param_10 = dVar12;
    }
    *(double *)param_1[1] = param_10;
    *(double *)(param_1[2] + 8) = dVar14;
  }
  (*(uint32_t*)((char*)&(auVar2)+8)) = SUB84(dVar3,0);
  (*(uint64_t*)&(auVar2)) = dVar3;
  (*(uint32_t *)((char *)&(auVar2) + 12)) = (int)((ulonglong)dVar3 >> 0x20);
(*(uint64_t *)(param_1[1] + 8)) = (*(uint64_t *)&(auVar2));
(*(uint64_t *)((char *)(param_1[1] + 8) + 8)) = (*(uint64_t *)((char *)&(auVar2) + 8));
  __security_check_cookie(uVar4 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0066b820 GetMassLength_m ====


/* public: double __thiscall MassProjectileSubModule__GetMassLength_m(void)const  */

double __thiscall MassProjectileSubModule__GetMassLength_m(MassProjectileSubModule *this)

{
  return (this->Mass_kg / this->Composition->Density_kg__m3) /
         (this->BoreRadius_m * this->BoreRadius_m * 3.141592653589793);
}





//==== 0066b860 GetMinimumOuterRadius_m ====


/* public: double __thiscall BarrelArmorSubModule__GetMinimumOuterRadius_m(void)const  */

double __thiscall BarrelArmorSubModule__GetMinimumOuterRadius_m(BarrelArmorSubModule *this)

{
  double dVar1;
  
  dVar1 = Material__GetYieldStrength_Pa(*(Material **)(this + 0x24));
  dVar1 = *(double *)(this + 0x50) / dVar1;
  libm_sse2_exp_precise(0.0);
  if ((!NAN(dVar1)) && ((NAN(dVar1) != (dVar1 == 0.0) || (!NAN(dVar1 / dVar1))))) {
    dVar1 = Material__GetYieldStrength_Pa(*(Material **)(this + 0x24));
    dVar1 = *(double *)(this + 0x50) / dVar1;
    libm_sse2_exp_precise(0.0);
    if (dVar1 <= 1e+15) {
      dVar1 = Material__GetYieldStrength_Pa(*(Material **)(this + 0x24));
      dVar1 = *(double *)(this + 0x50) / dVar1;
      libm_sse2_exp_precise(0.0);
      return *(double *)(this + 0x28) * dVar1;
    }
  }
  return 0.0;
}





//==== 0066b910 GetModuleAmmoExplosion_0066b910 ====


/* public: struct AmmoExplosion  AmmoBaySubModule__GetModuleAmmoExplosion(void)const  */

AmmoExplosion * 
AmmoBaySubModule__GetModuleAmmoExplosion
          (AmmoBaySubModule *this,AmmoExplosion *__return_storage_ptr__)

{
  AmmoExplosion__AmmoExplosion(__return_storage_ptr__,&(this->CachedInfo).ExplosionPotential);
  __return_storage_ptr__->Mass_kg = (double)this->Capacity * __return_storage_ptr__->Mass_kg;
  return __return_storage_ptr__;
}





//==== 0066b940 GetName ====

/* WARNING: Removing unreachable block (ram,0x0066ba7a) */
/* WARNING: Removing unreachable block (ram,0x0066ba87) */
/* public: class util__Str_L_char_G_  MassProjectileSubModule__GetName(bool,bool,class
   util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
MassProjectileSubModule__GetName
          (MassProjectileSubModule *this,Str_L_char_G_ *__return_storage_ptr__,bool param_1,bool param_2
          ,Str_L_char_G_ *param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  LocStr *pLVar9;
  Str_L_char_G_ *pSVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  char *pcVar13;
  char *pcVar14;
  bool bVar15;
  void *local_a8 [3];
  void *local_9c;
  void *local_90 [3];
  void *local_84;
  Str_L_char_G_ local_78;
  undefined4 local_6c;
  Str_L_char_G_ local_68;
  Str_L_char_G_ local_5c;
  Str_L_char_G_ local_50;
  Str_L_char_G_ local_44;
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  MassProjectileSubModule *local_14;
  Str_L_char_G_ local_10;
  
  *(uint32_t *)&local_6c = 0;
  local_10.Data = (char *)0x0;
  local_10.Capacity = 0;
  local_10.Length = 0;
  local_14 = this;
  if (param_1) {
    util__Str_char___Str_char(&local_5c,"Gun Turreted");
    local_38.Data = (char *)0x0;
    local_38.Capacity = 0;
    local_38.Length = 0;
    pLVar9 = (LocStr *)util__LocStr__LocStr((LocStr *)local_a8,&local_5c,&local_38);
    pSVar10 = util__LocStr__operator__o3(pLVar9);
    pSVar10 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_50,pSVar10);
    bVar15 = false;
    bVar8 = false;
    bVar7 = true;
    bVar6 = true;
    bVar5 = true;
    bVar4 = false;
    bVar3 = false;
    bVar2 = false;
    bVar1 = true;
    pcVar14 = local_20.Data;
  }
  else {
    bVar15 = !param_2;
    if (bVar15) {
      pSVar10 = &local_20;
      local_20.Data = (char *)0x0;
      local_20.Capacity = 0;
      local_20.Length = 0;
    }
    else {
      util__Str_char___Str_char(&local_68,"Gun Internal");
      local_2c.Data = (char *)0x0;
      local_2c.Capacity = 0;
      local_2c.Length = 0;
      pLVar9 = (LocStr *)util__LocStr__LocStr((LocStr *)local_90,&local_68,&local_2c);
      pSVar10 = util__LocStr__operator__o3(pLVar9);
      pSVar10 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_44,pSVar10);
    }
    pcVar14 = local_20.Data;
    bVar8 = true;
    bVar7 = false;
    bVar6 = false;
    bVar5 = false;
    bVar4 = !bVar15;
    bVar3 = !bVar15;
    bVar2 = !bVar15;
    bVar1 = false;
    pSVar10 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_78,pSVar10);
  }
  util__Str_char___Str_char(&local_10,pSVar10);
  if ((bVar8) && (local_78.Data != (char *)0x0)) {
    port_op_delete(local_78.Data);
    local_78.Data = (char *)0x0;
  }
  if ((bVar15) && (pcVar14 != (char *)0x0)) {
    port_op_delete(pcVar14);
  }
  if (bVar2) {
    if (local_84 != (void *)0x0) {
      port_op_delete(local_84);
      local_84 = (void *)0x0;
    }
    if (local_90[0] != (void *)0x0) {
      port_op_delete(local_90[0]);
      local_90[0] = (void *)0x0;
    }
  }
  if ((bVar3) && (local_2c.Data != (char *)0x0)) {
    port_op_delete(local_2c.Data);
    local_2c.Data = (char *)0x0;
  }
  if ((bVar4) && (local_68.Data != (char *)0x0)) {
    port_op_delete(local_68.Data);
    local_68.Data = (char *)0x0;
  }
  if ((bVar5) && (local_50.Data != (char *)0x0)) {
    port_op_delete(local_50.Data);
    local_50.Data = (char *)0x0;
  }
  if (bVar6) {
    if (local_9c != (void *)0x0) {
      port_op_delete(local_9c);
      local_9c = (void *)0x0;
    }
    if (local_a8[0] != (void *)0x0) {
      port_op_delete(local_a8[0]);
      local_a8[0] = (void *)0x0;
    }
  }
  if ((bVar7) && (local_38.Data != (char *)0x0)) {
    port_op_delete(local_38.Data);
    local_38.Data = (char *)0x0;
  }
  if ((bVar1) && (local_5c.Data != (char *)0x0)) {
    port_op_delete(local_5c.Data);
  }
  if (this->ShipClass__Payload == (CraftBlueprint *)0x0) {
    if (param_3->Capacity < 1) {
      pcVar14 = "";
    }
    else {
      pcVar14 = param_3->Data;
    }
    pcVar13 = "%imm %s%s";
    _param_1 = "";
    if (0 < local_10.Capacity) {
      _param_1 = local_10.Data;
    }
    bVar2 = false;
    bVar1 = false;
    bVar15 = true;
    puVar12 = (undefined1 *)(int)((local_14->BoreRadius_m + local_14->BoreRadius_m) / 0.001);
    if ((int)puVar12 < 1) {
      puVar12 = (undefined1 *)0x1;
    }
    pSVar10 = &local_5c;
  }
  else {
    if (param_3->Capacity < 1) {
      pcVar14 = "";
    }
    else {
      pcVar14 = param_3->Data;
    }
    _param_1 = "";
    if (0 < local_10.Capacity) {
      _param_1 = local_10.Data;
    }
    puVar11 = (undefined4 *)(**(code **)(this->ShipClass__Payload->_pad_0x0_0 + 0x48))(&local_44);
    if ((int)puVar11[1] < 1) {
      puVar12 = (undefined1 *)(&cde_l2_0b2b1c9f_NullString);
      pSVar10 = &local_50;
      pcVar13 = "%s %s%s";
      bVar2 = true;
      bVar1 = true;
      bVar15 = false;
    }
    else {
      puVar12 = (undefined1 *)*puVar11;
      pSVar10 = &local_50;
      pcVar13 = "%s %s%s";
      bVar2 = true;
      bVar1 = true;
      bVar15 = false;
    }
  }
  pSVar10 = util__Printf(pSVar10,(wchar_t*)(pcVar13),puVar12,_param_1,pcVar14);
  util__Str_char___Str_char(__return_storage_ptr__,pSVar10);
  if ((bVar15) && (local_5c.Data != (char *)0x0)) {
    port_op_delete(local_5c.Data);
    local_5c.Data = (char *)0x0;
  }
  if ((bVar1) && (local_50.Data != (char *)0x0)) {
    port_op_delete(local_50.Data);
    local_50.Data = (char *)0x0;
  }
  if ((local_44.Data != (char *)0x0) && (bVar2)) {
    port_op_delete(local_44.Data);
    local_44.Data = (char *)0x0;
  }
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
  }
  return __return_storage_ptr__;
}

//==== 0066c1e0 GetPointerPropertyChoices_0066c1e0 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   MassProjectileSubModule__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

ClassMember * 
MassProjectileSubModule__GetPointerPropertyChoices
          (MassProjectileSubModule *this,ClassMember *param_1,SerializationManagerInterface *param_2
          )

{
  Str_L_char_G_ *this_00;
  bool bVar1;
  bool bVar2;
  tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *ptVar3;
  bool bVar4;
  char *pcVar5;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G___G_
  *pDVar6;
  int iVar7;
  undefined4 *puVar8;
  SerializationManagerInterface SVar9;
  int iVar10;
  Reflectable *in_stack_0000000c;
  Str_L_char_G_ SStack_94;
  Darray_L_class_util__Reflectable_P_G_ aDStack_88 [16];
  undefined **ppuStack_78;
  tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *ptStack_74;
  Str_L_char_G_ SStack_68;
  undefined4 uStack_5c;
  Str_L_char_G_ SStack_58;
  ClassMember *pCStack_4c;
  Str_L_char_G_ SStack_48;
  undefined1 auStack_3c [4];
  tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *ptStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined **ppuStack_2c;
  tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *ptStack_28;
  int iStack_24;
  int iStack_20;
  undefined **ppuStack_1c;
  tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *ptStack_18;
  int iStack_14;
  int iStack_10;
  Reflectable *pRStack_c;
  MassProjectileSubModule *pMStack_8;
  
  pCStack_4c = param_1;
  pRStack_c = in_stack_0000000c;
  uStack_5c = 0;
  if ((*(int *)&param_2[1]) < 1) {
    SVar9 = *(SerializationManagerInterface *)&cde_l2_0b2b1c9f_NullString;
  }
  else {
    SVar9 = *param_2;
  }
  for (pcVar5 = "Composition";
      (pMStack_8 = this, pcVar5[(int)((*(int *)&SVar9) + -0x91fc04)] != '\0' || (*pcVar5 != '\0'));
      pcVar5 = pcVar5 + 1) {
    if (pcVar5[(int)((*(int *)&SVar9) + -0x91fc04)] != *pcVar5) {
      if ((*(int *)&param_2[1]) < 1) {
        SVar9 = *(SerializationManagerInterface *)&cde_l2_0b2b1c9f_NullString;
      }
      else {
        SVar9 = *param_2;
      }
      for (pcVar5 = "Tracer"; (pcVar5[(int)(*(int *)&SVar9 + -0x930c70)] != '\0' || (*pcVar5 != '\0'));
          pcVar5 = pcVar5 + 1) {
        if (pcVar5[(int)((*(int *)&SVar9) + -0x930c70)] != *pcVar5) {
          bVar4 = util__Str_char___operator__o9((Str_L_char_G_ *)param_2,"ShipClass__Payload");
          if (!bVar4) {
            (param_1->Name).Data =
                 (char *)&vftable_85;
            (param_1->Name).Capacity = 0;
            (param_1->Name).Length = 0;
            *(undefined4 *)&param_1->Type = 0;
            return param_1;
          }
          GetCraftBlueprintsExcludingItemsDependingOnDatum
                    ((DataParser *)param_1,pRStack_c,SUB41(pMStack_8,0),true);
          return param_1;
        }
      }
      if (this->ShipClass__Payload == (CraftBlueprint *)0x0) {
        pDVar6 = (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G___G_
                  *)GetMaterials((DataParser *)&ppuStack_78,(int)in_stack_0000000c,true);
        bVar2 = true;
        bVar1 = false;
        bVar4 = false;
      }
      else {
        ppuStack_1c = (undefined **)(&vftable_6);
        ptStack_18 = (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)
                     0x0;
        iStack_14 = 0;
        iStack_10 = 1;
        ptStack_18 = (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)
                     port_op_new(4);
        iVar10 = iStack_14;
        if (ptStack_18 ==
            (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)0x0) {
          ptStack_18 = (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_
                        *)0x0;
        }
        else {
          *(undefined4 *)ptStack_18 = 0;
        }
        iVar7 = 0;
        if (0 < iStack_10) {
          do {
            *(undefined4 *)(ptStack_18 + iVar7 * 4) = 0;
            iVar7 = iVar7 + 1;
          } while (iVar7 < iStack_10);
        }
        pMStack_8 = (MassProjectileSubModule *)(iStack_14 + 1);
        util__Darray_class_util__Reflectable____SetSize
                  ((Darray_L_class_util__Reflectable_P_G_ *)&ppuStack_1c,(int *)&pMStack_8);
        bVar4 = util__Darray_enum_GraphicsResource__Type___CheckSize
                          ((Darray_L_enum_GraphicsResource__Type_G_ *)&ppuStack_1c,iVar10);
        if (bVar4) {
          *(undefined4 *)(ptStack_18 + iStack_14 * 4 + -4) = 0;
        }
        SStack_58.Data = (char *)0x0;
        SStack_58.Capacity = 0;
        SStack_58.Length = 0;
        util__Darray_class_util__Reflectable____Darray_class_util__Reflectable
                  ((Darray_L_class_util__Reflectable_P_G_ *)auStack_3c,
                   (Darray_L_class_util__Reflectable_P_G_ *)&ppuStack_1c);
        util__Str_char___Str_char(&SStack_68,&SStack_58);
        util__Str_char___Str_char(&SStack_94,&SStack_68);
        util__Darray_class_util__Reflectable____Darray_class_util__Reflectable
                  (aDStack_88,(Darray_L_class_util__Reflectable_P_G_ *)auStack_3c);
        if (SStack_68.Data != (char *)0x0) {
          port_op_delete(SStack_68.Data);
        }
        *(uint32_t *)&auStack_3c = (uint32_t)&vftable_6;
        if (ptStack_38 !=
            (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)0x0) {
          port_op_delete(ptStack_38);
        }
        ptStack_38 = (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)
                     0x0;
        *(uint32_t *)&auStack_3c = (uint32_t)&vftable;
        ppuStack_1c = (undefined **)(&vftable_6);
        if (ptStack_18 !=
            (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)0x0) {
          port_op_delete(ptStack_18);
        }
        ppuStack_2c = (undefined **)(&vftable_85);
        ptStack_28 = (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)
                     0x0;
        iStack_24 = 0;
        iStack_20 = 1;
        puVar8 = (undefined4 *)port_op_new(0x20);
        if (puVar8 == (undefined4 *)0x0) {
          ptStack_28 = (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_
                        *)0x0;
        }
        else {
          *puVar8 = 1;
          ptStack_28 = (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_
                        *)(puVar8 + 1);
          *(undefined4 *)ptStack_28 = 0;
          puVar8[2] = 0;
          puVar8[3] = 0;
          puVar8[4] = (undefined4)(uintptr_t)(&vftable_6);
          puVar8[5] = 0;
          puVar8[6] = 0;
          puVar8[7] = 0;
        }
        iVar10 = 0;
        if (0 < iStack_20) {
          iVar7 = 0;
          do {
            this_00 = (Str_L_char_G_ *)(ptStack_28 + iVar7);
            SStack_48.Data = (char *)0x0;
            SStack_48.Capacity = 0;
            SStack_48.Length = 0;
            *(uint32_t *)&auStack_3c = (uint32_t)&vftable_6;
            ptStack_38 = (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_
                          *)0x0;
            uStack_34 = 0;
            uStack_30 = 0;
            util__Str_char___operator__o8(this_00,&SStack_48);
            util__Darray_class_Module____operator
                      ((Darray_L_class_Module_P_G_ *)(this_00 + 1),(Darray_L_class_Module_P_G_ *)auStack_3c);
            *(uint32_t *)&auStack_3c = (uint32_t)&vftable_6;
            if (ptStack_38 !=
                (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)0x0)
            {
              port_op_delete(ptStack_38);
            }
            ptStack_38 = (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_
                          *)0x0;
            *(uint32_t *)&auStack_3c = (uint32_t)&vftable;
            if (SStack_48.Data != (char *)0x0) {
              port_op_delete(SStack_48.Data);
            }
            iVar10 = iVar10 + 1;
            iVar7 = iVar7 + 0x1c;
          } while (iVar10 < iStack_20);
        }
        iVar10 = iStack_24;
        pMStack_8 = (MassProjectileSubModule *)(iStack_24 + 1);
        util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable________SetSize((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G___G_
                   *)&ppuStack_2c,(int *)&pMStack_8);
        bVar4 = util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable________CheckSize((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G___G_
                             *)&ppuStack_2c,iVar10);
        iVar10 = iStack_24;
        ptVar3 = ptStack_28;
        if (bVar4) {
          util__Str_char___operator__o8
                    ((Str_L_char_G_ *)(ptStack_28 + iStack_24 * 0x1c + -0x1c),&SStack_94);
          util__Darray_class_Module____operator
                    ((Darray_L_class_Module_P_G_ *)(ptVar3 + iVar10 * 0x1c + -0x10),
                     (Darray_L_class_Module_P_G_ *)aDStack_88);
        }
        pDVar6 = (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G___G_
                  *)&ppuStack_2c;
        bVar2 = false;
        bVar1 = true;
        bVar4 = true;
        param_1 = pCStack_4c;
      }
      util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable________Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable
                ((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G___G_
                  *)param_1,pDVar6);
      if (bVar4) {
        ppuStack_2c = (undefined **)(&vftable_85);
        if (ptStack_28 !=
            (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)0x0) {
          util__tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable_______vector_deleting_destructor(ptStack_28,3);
        }
        ptStack_28 = (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)
                     0x0;
        ppuStack_2c = (undefined **)(&vftable);
      }
      if (bVar1) {
        util__tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable_______tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable((tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)
                   &SStack_94);
      }
      if (!bVar2) {
        return param_1;
      }
      ppuStack_78 = (undefined **)(&vftable_85);
LAB_0066c603:
      if (ptStack_74 ==
          (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)0x0) {
        return param_1;
      }
      util__tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable_______vector_deleting_destructor(ptStack_74,3);
      return param_1;
    }
  }
  bVar4 = this->CachedAllowedMaterials == ~MaterialClass__Structural;
  if (bVar4) {
    pDVar6 = (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G___G_
              *)GetMaterials__o3((DataParser *)auStack_3c,SUB41(in_stack_0000000c,0));
  }
  else {
    pDVar6 = (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G___G_
              *)GetMaterials((DataParser *)&ppuStack_1c,(int)in_stack_0000000c,
                             SUB41(this->CachedAllowedMaterials,0));
  }
  util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable________Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable
            ((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G___G_
              *)param_1,pDVar6);
  if (bVar4) {
    *(undefined4 *)&(auStack_3c) = (undefined4)(uintptr_t)&vftable_85;;
    if (ptStack_38 !=
        (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)0x0) {
      util__tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable_______vector_deleting_destructor(ptStack_38,3);
    }
    ptStack_38 = (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)0x0;
    *(uint32_t *)&auStack_3c = (uint32_t)&vftable;
  }
  if (bVar4) {
    return param_1;
  }
  ppuStack_1c = (undefined **)(&vftable_85);
  ptStack_74 = ptStack_18;
  goto LAB_0066c603;
}





//==== 0066c670 GetProjectileMinRadius_m_0066c670 ====


/* public: double __thiscall MassProjectileSubModule__GetProjectileMinRadius_m(void)const  */

double __thiscall MassProjectileSubModule__GetProjectileMinRadius_m(MassProjectileSubModule *this)

{
  CraftBlueprint *this_00;
  
  this_00 = this->ShipClass__Payload;
  if (this_00 != (CraftBlueprint *)0x0) {
    CraftBlueprint__GetRadius_km_Memoize(this_00);
    if (*(char *)((this_00->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 6) == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    return (this_00->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data[5] * 1000.0;
  }
  return this->BoreRadius_m;
}





//==== 0066c6e0 GetPropellantLength_m ====


/* public: double __thiscall MassProjectileSubModule__GetPropellantLength_m(void)const  */

double __thiscall MassProjectileSubModule__GetPropellantLength_m(MassProjectileSubModule *this)

{
  if ((this->CachedPropellantComposition != (Material *)0x0) &&
     (0.0 < this->CachedPropellantMass_kg)) {
    return (this->CachedPropellantMass_kg / this->CachedPropellantComposition->Density_kg__m3) /
           (this->BoreRadius_m * this->BoreRadius_m * 3.141592653589793);
  }
  return 0.0;
}





//==== 0066c730 GetReflectionInfo_0066c730 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   AmmoBaySubModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall AmmoBaySubModule__GetReflectionInfo(AmmoBaySubModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_b1533759__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_b1533759__thread_safe_static_guard_0__);
    if ( cde_l2_b1533759__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_05072416_ReflectionInfo) = &vftable_317;
      _Init_thread_footer(& cde_l2_b1533759__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_05072416_ReflectionInfo;
}





//==== 0066c740 GetReflectionInfo_0066c740 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   MassProjectileSubModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall
MassProjectileSubModule__GetReflectionInfo(MassProjectileSubModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_2557f01c__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_2557f01c__thread_safe_static_guard_0__);
    if ( cde_l2_2557f01c__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_367f9d36_ReflectionInfo) = &vftable_318;
      _Init_thread_footer(& cde_l2_2557f01c__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_367f9d36_ReflectionInfo;
}





//==== 0066c750 GetShortName_0066c750 ====

/* public: class util__Str_L_char_G_  MassProjectileSubModule__GetShortName(class
   util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
MassProjectileSubModule__GetShortName
          (MassProjectileSubModule *this,Str_L_char_G_ *__return_storage_ptr__,Str_L_char_G_ *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  Str_L_char_G_ *pSVar6;
  char *pcVar7;
  char *pcVar8;
  void *local_2c [3];
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  undefined4 local_8;
  
  local_8 = 0;
  if (this->ShipClass__Payload == (CraftBlueprint *)0x0) {
    if (param_1->Capacity < 1) {
      pcVar8 = "";
    }
    else {
      pcVar8 = param_1->Data;
    }
    pcVar7 = "%imm %s";
    bVar3 = false;
    bVar2 = false;
    bVar1 = true;
    puVar5 = (undefined1 *)(int)((this->BoreRadius_m + this->BoreRadius_m) / 0.001);
    if ((int)puVar5 < 1) {
      puVar5 = (undefined1 *)0x1;
    }
    pSVar6 = &local_14;
  }
  else {
    if (param_1->Capacity < 1) {
      pcVar8 = "";
    }
    else {
      pcVar8 = param_1->Data;
    }
    puVar4 = (undefined4 *)(**(code **)(this->ShipClass__Payload->_pad_0x0_0 + 0x48))(local_2c);
    if ((int)puVar4[1] < 1) {
      puVar5 = (undefined1 *)(&cde_l2_0b2b1c9f_NullString);
      pSVar6 = &local_20;
      pcVar7 = "%s %s";
      bVar3 = true;
      bVar2 = true;
      bVar1 = false;
    }
    else {
      puVar5 = (undefined1 *)*puVar4;
      pSVar6 = &local_20;
      pcVar7 = "%s %s";
      bVar3 = true;
      bVar2 = true;
      bVar1 = false;
    }
  }
  pSVar6 = util__Printf(pSVar6,(wchar_t*)(pcVar7),puVar5,pcVar8);
  util__Str_char___Str_char(__return_storage_ptr__,pSVar6);
  if (bVar1) {
    if (local_14.Data != (char *)0x0) {
      port_op_delete(local_14.Data);
      local_14.Data = (char *)0x0;
    }
  }
  if (bVar2) {
    if (local_20.Data != (char *)0x0) {
      port_op_delete(local_20.Data);
      local_20.Data = (char *)0x0;
    }
  }
  if ((local_2c[0] != (void *)0x0) && (bVar3)) {
    port_op_delete(local_2c[0]);
  }
  return __return_storage_ptr__;
}

//==== 0066c860 GetStatuses_0066c860 ====

/* public: virtual class DesignStatusBuffer  MassProjectileSubModule__GetStatuses(class
   DataParser *)const  */

DesignStatusBuffer * 
MassProjectileSubModule__GetStatuses
          (MassProjectileSubModule *this,DesignStatusBuffer *__return_storage_ptr__,
          DataParser *param_1)

{
  undefined8 stack0xffffff84;
  undefined8 stack0xffffff88;
  Str_L_char_G_ SVar1;
  Str_L_char_G_ SVar2;
  bool bVar3;
  Cylinder_L_double_G_ *pCVar4;
  Str_L_char_G_ *pSVar5;
  Str_L_char_G_ *pSVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  char *pcVar10;
  Str_L_char_G_ *pSVar11;
  Str_L_char_G_ *pSVar12;
  Str_L_char_G_ *pSVar13;
  ModulePlacer *pMVar14;
  undefined1 local_5c [4];
  Str_L_char_G_ local_58;
  Str_L_char_G_ local_4c;
  Str_L_char_G_ local_40;
  undefined1 local_34 [4];
  double local_30;
  undefined1 local_28 [4];
  double local_24;
  undefined1 local_1c [4];
  undefined8 local_18;
  Str_L_char_G_ local_10;
  
  __return_storage_ptr__->DataManager = (DataParser *)0x0;
  (__return_storage_ptr__->Messages)._pad_0x0_0 = 0;
  (__return_storage_ptr__->Messages).Data = (DesignStatusMessage *)0x0;
  (__return_storage_ptr__->Messages).Size = 0;
  *(undefined8 *)&(__return_storage_ptr__->Messages).Capacity = 0;
  DesignStatusBuffer__DesignStatusBuffer(__return_storage_ptr__,param_1);
  util__Str_char___Str_char(&local_10,"MassProjectilePayloadTooBig");
  if (this->ShipClass__Payload != (CraftBlueprint *)0x0) {
    pCVar4 = CraftBlueprint__GetStorageCylinder_m(this->ShipClass__Payload,(Cylinder_L_double_G_ *)local_5c);
    if (this->BoreRadius_m <= pCVar4->Radius) {
      bVar3 = true;
      goto LAB_0066c8b1;
    }
  }
  bVar3 = false;
LAB_0066c8b1:
  *(uint32_t *)&local_1c = (uint32_t)0x0;
  (*(uint32_t*)&(local_18)) = 0;
  (*(uint32_t*)((char*)&(local_18)+4)) = 0;
  *(uint32_t *)&local_28 = (uint32_t)0x0;
  *(uint32_t *)&local_24 = 0.0;
  *(uint32_t *)&local_34 = (uint32_t)0x0;
  local_30 = 0.0;
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,bVar3,&local_10,(Str_L_char_G_ *)local_34,(Str_L_char_G_ *)local_28,
             (Str_L_char_G_ *)local_1c,(ModulePlacer *)0x0);
  if (local_34 != (uint32_t)0x0) {
    port_op_delete((void *)local_34);
    *(uint32_t *)&local_34 = (uint32_t)0x0;
  }
  if (local_28 != (uint32_t)0x0) {
    port_op_delete((void *)local_28);
    *(uint32_t *)&local_28 = (uint32_t)0x0;
  }
  if (local_1c != (uint32_t)0x0) {
    port_op_delete((void *)local_1c);
    *(uint32_t *)&local_1c = (uint32_t)0x0;
  }
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
  }
  if (this->CachedMassStartsOutBeforeBarrel == false) {
    local_24 = (this->Mass_kg / this->Composition->Density_kg__m3) /
               (this->BoreRadius_m * this->BoreRadius_m * 3.141592653589793);
  }
  else {
    *(uint32_t *)&local_24 = 0.0;
  }
  if (this->ShipClass__Payload == (CraftBlueprint *)0x0) {
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    pCVar4 = CraftBlueprint__GetStorageCylinder_m(this->ShipClass__Payload,(Cylinder_L_double_G_ *)local_5c);
    uVar7 = SUB84(pCVar4->Height,0);
    uVar8 = (undefined4)((ulonglong)pCVar4->Height >> 0x20);
  }
  *(uint64_t *)&local_18 = (double)CONCAT44(uVar8,uVar7);
  if ((this->CachedPropellantComposition == (Material *)0x0) ||
     (this->CachedPropellantMass_kg <= 0.0)) {
    local_30 = 0.0;
  }
  else {
    local_30 = (this->CachedPropellantMass_kg / this->CachedPropellantComposition->Density_kg__m3) /
               (this->BoreRadius_m * this->BoreRadius_m * 3.141592653589793);
  }
  util__Str_char___Str_char(&local_58,"MassProjectileBarrelTooShort");
  if ((local_18 + local_24 + local_30 <= this->CachedBarrelLength_m) ||
     (this->CachedBarrelLength_m <= 0.0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  local_10.Data = (char *)0x0;
  pSVar12 = &local_4c;
  local_10.Capacity = 0;
  pSVar6 = &local_40;
  local_10.Length = 0;
  pSVar11 = &local_58;
  local_4c.Data = (char *)0x0;
  local_4c.Capacity = 0;
  local_4c.Length = 0;
  local_40.Data = (char *)0x0;
  local_40.Capacity = 0;
  local_40.Length = 0;
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,bVar3,pSVar11,pSVar6,pSVar12,&local_10,(ModulePlacer *)0x0);
  if (local_40.Data != (char *)0x0) {
    port_op_delete(local_40.Data);
    local_40.Data = (char *)0x0;
  }
  if (local_4c.Data != (char *)0x0) {
    port_op_delete(local_4c.Data);
    local_4c.Data = (char *)0x0;
  }
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
    local_10.Data = (char *)0x0;
  }
  if (local_58.Data != (char *)0x0) {
    port_op_delete(local_58.Data);
  }
  util__Str_char___Str_char((Str_L_char_G_ *)local_1c,"Composition->GetUltimateTensileStrength_Pa()");
  util__Str_char___Str_char(&local_40,"CachedPeakPressure_Pa");
  util__Str_char___Str_char(&local_4c,"MassProjectileProjectileWillShatter");
  pMVar14 = (ModulePlacer *)0x0;
  pSVar13 = &local_10;
  local_10.Data = (char *)0x0;
  local_10.Capacity = 0;
  local_10.Length = 0;
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff88,(Str_L_char_G_ *)local_1c);
  dVar9 = Material__GetUltimateTensileStrength_Pa(this->Composition);
  pcVar10 = (char *)((ulonglong)dVar9 >> 0x20);
  SVar2.Capacity = (int)pSVar12;
  SVar2.Data = (char *)pSVar6;
  SVar2.Length = (int)pSVar13;
  pSVar5 = Print((Str_L_char_G_ *)local_28,(double)CONCAT44(pSVar11,pcVar10),SVar2);
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff84,&local_40);
  SVar1.Capacity = (int)pSVar6;
  SVar1.Data = (char *)pSVar11;
  SVar1.Length = (int)pSVar5;
  pSVar6 = Print(&local_58,
                 (double)CONCAT44(pcVar10,(int)((ulonglong)this->CachedPeakPressure_Pa >> 0x20)),
                 SVar1);
  pSVar12 = &local_4c;
  local_30 = Material__GetUltimateTensileStrength_Pa(this->Composition);
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,local_30 <= this->CachedPeakPressure_Pa,pSVar12,pSVar6,pSVar5,
             pSVar13,pMVar14);
  if (local_58.Data != (char *)0x0) {
    port_op_delete(local_58.Data);
    local_58.Data = (char *)0x0;
  }
  if (local_28 != (uint32_t)0x0) {
    port_op_delete((void *)local_28);
    *(uint32_t *)&local_28 = (uint32_t)0x0;
  }
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
    local_10.Data = (char *)0x0;
  }
  if (local_4c.Data != (char *)0x0) {
    port_op_delete(local_4c.Data);
    local_4c.Data = (char *)0x0;
  }
  if (local_40.Data != (char *)0x0) {
    port_op_delete(local_40.Data);
    local_40.Data = (char *)0x0;
  }
  if (local_1c != (uint32_t)0x0) {
    port_op_delete((void *)local_1c);
  }
  return __return_storage_ptr__;
}

//==== 0066cc30 GetStorageMass_kg ====


/* public: double __thiscall MassProjectileSubModule__GetStorageMass_kg(void)const  */

double __thiscall MassProjectileSubModule__GetStorageMass_kg(MassProjectileSubModule *this)

{
  double dVar1;
  
  if (this->ShipClass__Payload != (CraftBlueprint *)0x0) {
    dVar1 = CraftBlueprint__GetTotalMass_kg(this->ShipClass__Payload);
    return dVar1 + this->Mass_kg + this->CachedPropellantMass_kg;
  }
  return this->Mass_kg + 0.0 + this->CachedPropellantMass_kg;
}





//==== 0066cc70 GetUnarmoredDimensions_m ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: struct util__Cylinder_L_double_G_ 
   AmmoBaySubModule__GetUnarmoredDimensions_m(void)const  */

Cylinder_L_double_G_ * 
AmmoBaySubModule__GetUnarmoredDimensions_m
          (AmmoBaySubModule *this,Cylinder_L_double_G_ *__return_storage_ptr__)

{
  Maybe_L_double_G_ MStack_24;
  double dStack_14;
  double dStack_c;
  
  dStack_14 = (this->CachedInfo).Dimensions_m.Height;
  dStack_c = (((double)((this->Capacity + -1 + this->Stacks) / this->Stacks) *
              (this->CachedInfo).Dimensions_m.Radius * 3.141592653589793 *
              (this->CachedInfo).Dimensions_m.Radius) / _DAT_00978dc0) / 3.141592653589793;
  util__Sqrt(&MStack_24,&dStack_c);
  if (MStack_24.IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  __return_storage_ptr__->Radius = MStack_24.Data;
  __return_storage_ptr__->Height = (double)this->Stacks * dStack_14;
  return __return_storage_ptr__;
}





//==== 0066cd20 HasArmor_0066cd20 ====


/* public: bool __thiscall BarrelArmorSubModule__HasArmor(void)const  */

bool __thiscall BarrelArmorSubModule__HasArmor(BarrelArmorSubModule *this)

{
  return 0.0 < *(double *)(this + 0x18);
}





//==== 0066cd40 IsExplosive_0066cd40 ====

/* public: bool __thiscall AmmoBaySubModule__IsExplosive(void)const  */

bool __thiscall AmmoBaySubModule__IsExplosive(AmmoBaySubModule *this)

{
  AmmoExplosion *pAVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  AmmoExplosion local_48;
  AmmoExplosion local_28;
  undefined4 local_8;
  
  pAVar1 = &(this->CachedInfo).ExplosionPotential;
  local_8 = 0;
  AmmoExplosion__AmmoExplosion(&local_28,pAVar1);
  iVar3 = (**(code **)(uintptr_t)(local_28.GasComposition._pad_0x0_0 + 0xc))();
  if (iVar3 < 1) {
    bVar2 = false;
  }
  else {
    AmmoExplosion__AmmoExplosion(&local_48,pAVar1);
    bVar2 = true;
    if (0.0 < local_48.Temperature_K) {
      bVar4 = true;
      goto LAB_0066cd90;
    }
  }
  bVar4 = false;
LAB_0066cd90:
  if ((local_48.GasComposition.Data != (MaterialConstituent *)0x0) && (bVar2)) {
    port_op_delete(local_48.GasComposition.Data);
  }
  local_28.GasComposition._pad_0x0_0 = (int)&vftable_15;
  if (local_28.GasComposition.Data != (MaterialConstituent *)0x0) {
    port_op_delete(local_28.GasComposition.Data);
  }
  return bVar4;
}

//==== 0066cdd0 LaunchBullet ====


/* public: void  MassProjectileSubModule__LaunchBullet(class util__SharedPtr_L_class_Body_G_,class util__WeakPtr_L_classBody_G_,class util__WeakPtr_L_classBody_G_)const  */

void 
MassProjectileSubModule__LaunchBullet
          (MassProjectileSubModule *this,int *param_2,ReferenceController *param_3,
          undefined4 param_4,ReferenceController *param_5,undefined4 param_6,
          ReferenceController *param_7)

{
  bool bVar1;
  MatterComponent *pMVar2;
  Cylinder_L_double_G_ *pCVar3;
  int *piVar4;
  ReferenceControllerRegistry *pRVar5;
  ReferenceController *pRVar6;
  double dVar7;
  Material *pMVar8;
  double dVar9;
  Material *pMVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined4 uVar13;
  int *piVar14;
  undefined1 auStack_14 [8];
  int *piStack_c;
  ReferenceController *pRStack_8;
  
  pMVar2 = (MatterComponent *)port_op_new(0x68);
  if (pMVar2 == (MatterComponent *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    uVar13 = 0x68;
    uVar12 = 0;
    memset(0,0,0);
    dVar7 = 0.0;
    uVar11 = 0;
    uVar12 = uVar12 & 0xffffff00;
    pMVar10 = this->Tracer;
    if (this->ShipClass__Payload != (CraftBlueprint *)0x0) {
      pCVar3 = CraftBlueprint__GetStorageCylinder_m(this->ShipClass__Payload,(Cylinder_L_double_G_ *)auStack_14);
      dVar7 = pCVar3->Height;
    }
    dVar9 = this->BoreRadius_m;
    dVar7 = (this->Mass_kg / this->Composition->Density_kg__m3) /
            (dVar9 * dVar9 * 3.141592653589793) + dVar7;
    pMVar8 = this->Composition;
    piVar4 = param_2;
    pRVar6 = param_3;
    if (param_3 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(param_3);
    }
    piVar4 = (int *)MatterComponent__MatterComponent
                              (pMVar2,piVar4,pRVar6,pMVar8,dVar9,dVar7,pMVar10,uVar11,uVar12,uVar13)
    ;
    if (piVar4 != (int *)0x0) goto LAB_0066cea2;
  }
  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl",
                  0xd4,"NewPointer",(char *)0x0);
  DebugBreak();
LAB_0066cea2:
  piVar14 = piVar4;
  pRVar5 = util__ReferenceControllerRegistry__Get();
  pRVar6 = util__ReferenceControllerRegistry__Register(pRVar5,piVar14);
  if (pRVar6 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(pRVar6);
  }
  if ((char)param_2[0xca] != '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\tactical\\body.h",0x2e,"!Created",
                    (char *)0x0);
    DebugBreak();
  }
  piStack_c = piVar4;
  pRStack_8 = pRVar6;
  if (pRVar6 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(pRVar6);
  }
  util__Darray_class_util__SharedPtr_struct_UIWidget_____Add
            ((Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *)(param_2 + 0xc2),
             (SharedPtr_L_struct_UIWidget_G_ *)&piStack_c);
  if (pRVar6 != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__ReleaseStrongReference(pRVar6);
    if (bVar1) {
      if (piVar4 != (int *)0x0) {
        (**(code **)(uintptr_t)(*piVar4 + 4))(1);
      }
      piVar14 = piVar4;
      pRVar5 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar5,piVar14);
    }
    util__ReferenceController__AddWeakReference(pRVar6);
    bVar1 = util__ReferenceController__ReleaseStrongReference(pRVar6);
    if (bVar1) {
      if (piVar4 != (int *)0x0) {
        (**(code **)(uintptr_t)(*piVar4 + 4))(1);
      }
      pRVar5 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar5,piVar4);
    }
    util__ReferenceController__ReleaseWeakReference(pRVar6);
  }
  if ((param_3 != (ReferenceController *)0x0) &&
     (bVar1 = util__ReferenceController__ReleaseStrongReference(param_3), bVar1)) {
    if (param_2 != (int *)0x0) {
      (**(code **)(uintptr_t)(*param_2 + 4))(1);
    }
    pRVar5 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar5,param_2);
  }
  if (param_5 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_5);
  }
  if (param_7 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_7);
  }
  return;
}





//==== 0066cfc0 PassThroughCachedData2_0066cfc0 ====


/* public: void  BarrelArmorSubModule__PassThroughCachedData2(struct
   util__Cylinder_L_double_G_,double,double,struct util__Cylinder_L_double_G_,double) */

void 
BarrelArmorSubModule__PassThroughCachedData2
          (BarrelArmorSubModule *this,Cylinder_L_double_G_ param_1,double param_2,double param_3,
          Cylinder_L_double_G_ param_4,double param_5)

{
  double dVar1;
  
  *(undefined4 *)(this + 0x30) = param_1.Radius;
  *(undefined4 *)(this + 0x34) = (*(uint32_t *)((char *)&(param_1.Radius) + 4));
  *(undefined4 *)(this + 0x38) = param_1.Height;
  *(undefined4 *)(this + 0x3c) = (*(uint32_t *)((char *)&(param_1.Height) + 4));
  if (*(double *)(this + 0x30) < *(double *)(this + 0x28) ||
      *(double *)(this + 0x30) == *(double *)(this + 0x28)) {
    util__LogEnsure("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\modules\\weaponmodules\\weaponsubmodules.cpp"
                    ,0xef,"CachedSize_m.Radius > CachedBoreRadius_m",(char *)0x0);
  }
  *(double *)(this + 0x50) = param_2;
  dVar1 = param_1.Height;
  if (dVar1 < param_3) {
    util__LogEnsure("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\modules\\weaponmodules\\weaponsubmodules.cpp"
                    ,0xf1,"PeakPressureLengthAlong_m <= Size_m.Height",(char *)0x0);
  }
  if (dVar1 <= param_3) {
    param_3 = dVar1;
  }
  *(undefined4 *)(this + 0x70) = param_4.Radius;
  *(undefined4 *)(this + 0x74) = (*(uint32_t *)((char *)&(param_4.Radius) + 4));
  *(undefined4 *)(this + 0x78) = param_4.Height;
  *(undefined4 *)(this + 0x7c) = (*(uint32_t *)((char *)&(param_4.Height) + 4));
  *(double *)(this + 0x58) = param_3;
  *(double *)(this + 0x80) = param_5;
  return;
}





//==== 0066d060 PassThroughCachedData2_0066d060 ====


/* public: void __thiscall MassProjectileSubModule__PassThroughCachedData2(double) */

void __thiscall
MassProjectileSubModule__PassThroughCachedData2(MassProjectileSubModule *this,double param_1)

{
  this->CachedPeakPressure_Pa = param_1;
  return;
}





//==== 0066d080 PassThroughCachedData3_0066d080 ====


/* public: void  BarrelArmorSubModule__PassThroughCachedData3(double,class
   util__Maybe_L_double_G_) */

void 
BarrelArmorSubModule__PassThroughCachedData3
          (BarrelArmorSubModule *this,double param_1,Maybe_L_double_G_ param_2)

{
  *(double *)(this + 0x48) = param_1;
  *(undefined4 *)(this + 0x60) = param_2.Data;
  *(undefined4 *)(this + 100) = (*(uint32_t *)((char *)&(param_2.Data) + 4));
  *(undefined4 *)(this + 0x68) = (*(uint32_t*)((char*)&(param_2)+8));
  *(undefined4 *)(this + 0x6c) = (*(uint32_t *)((char *)&(param_2) + 12));
  return;
}





//==== 0066d0a0 PassThroughCachedData_0066d0a0 ====


/* public: void  AmmoBaySubModule__PassThroughCachedData(class Material *,struct
   AmmoInfo,class util__Maybe_L_double_G_) */

void 
AmmoBaySubModule__PassThroughCachedData
          (AmmoBaySubModule *this,Material *param_1,AmmoInfo param_2,Maybe_L_double_G_ param_3)

{
  undefined8 stack0x00000008;
  undefined4 in_stack_00000008;
  
  this->CachedArmorComposition = param_1;
  *(undefined4 *)&(this->CachedInfo).Dimensions_m.Radius = in_stack_00000008;
  *(undefined4 *)((int)&(this->CachedInfo).Dimensions_m.Radius + 4) =
       param_2.Dimensions_m.Radius;
  *(undefined4 *)&(this->CachedInfo).Dimensions_m.Height = (*(uint32_t *)((char *)&(param_2.Dimensions_m.Radius) + 4));
  *(undefined4 *)((int)&(this->CachedInfo).Dimensions_m.Height + 4) =
       param_2.Dimensions_m.Height;
  util__Darray_struct_MaterialConstituent___operator
            ((Darray_L_struct_MaterialConstituent_G_ *)&(this->CachedInfo).Composition,
             (Darray_L_struct_MaterialConstituent_G_ *)((int)&param_2.Dimensions_m.Height + 4));
  util__Str_char___operator__o8(&(this->CachedInfo).Name,(Str_L_char_G_ *)&param_2.Composition.Capacity);
  util__Str_char___operator__o8(&(this->CachedInfo).Descriptor,(Str_L_char_G_ *)&param_2.Name.Length);
  (this->CachedInfo).Class.Data = param_2.Descriptor.Length;
  *(ShipClass *)&(this->CachedInfo).Class.IsValidData = param_2.Class.Data;
  util__Darray_struct_MaterialConstituent___operator
            ((Darray_L_struct_MaterialConstituent_G_ *)&(this->CachedInfo).ExplosionPotential,
             (Darray_L_struct_MaterialConstituent_G_ *)&param_2.Class.IsValidData);
  *(int *)&((this->CachedInfo).ExplosionPotential.Mass_kg) = param_2.ExplosionPotential.GasComposition.Capacity;
  *(undefined4 *)((int)&(this->CachedInfo).ExplosionPotential.Mass_kg + 4) =
       param_2.ExplosionPotential.Mass_kg;
  *(undefined4 *)&((this->CachedInfo).ExplosionPotential.Temperature_K) = (*(uint32_t *)((char *)&(param_2.ExplosionPotential.Mass_kg) + 4));
  *(undefined4 *)((int)&(this->CachedInfo).ExplosionPotential.Temperature_K + 4) =
       param_2.ExplosionPotential.Temperature_K;
  (this->CachedInfo).CostOfOneUnit_c = (double)(*(uint64_t *)((char *)&(param_2) + 92));
  *(undefined4 *)&(this->CachedArmorThickness_m).Data = (*(uint32_t *)((char *)&(param_2.CostOfOneUnit_c) + 4));
  *(undefined4 *)((int)&(this->CachedArmorThickness_m).Data + 4) = param_3.Data;
  *(undefined4 *)&(this->CachedArmorThickness_m).IsValidData = (*(uint32_t *)((char *)&(param_3.Data) + 4));
  *(undefined4 *)&(this->CachedArmorThickness_m).field_0xc = (undefined4)param_3.IsValidData;
  *(undefined3 *)&(*(undefined3 *)(void *)((char *)&((this->CachedArmorThickness_m)) + 0xd)) = (*(uint24_t*)((char*)&(param_3)+9));
  AmmoInfo___AmmoInfo((AmmoInfo *)&stack0x00000008);
  return;
}





//==== 0066d120 PassThroughCachedData_0066d120 ====


/* public: void  BarrelArmorSubModule__PassThroughCachedData(bool,class
   util__Delegate_L_double_G_,class Material *,double,class util__Delegate_L_int_G_) */

void 
BarrelArmorSubModule__PassThroughCachedData
          (BarrelArmorSubModule *this,bool param_1,Delegate_L_double_G_ param_2,Material *param_3,
          double param_4,Delegate_L_int_G_ param_5)

{
  this[0x20] = (BarrelArmorSubModule)param_1;
  *(void **)(this + 0x40) = param_2.Callee;
  *(_func___cdecl_double_void_ptr **)(this + 0x44) = param_2.CallbackFunction;
  *(Material **)(this + 0x24) = param_3;
  *(void **)(this + 0x88) = param_5.Callee;
  *(double *)(this + 0x28) = param_4;
  *(_func___cdecl_int_void_ptr **)(this + 0x8c) = param_5.CallbackFunction;
  return;
}





//==== 0066d160 PassThroughCachedData_0066d160 ====


/* public: void  MassProjectileSubModule__PassThroughCachedData(class DataParser
   *,double,class Material *,double,enum MaterialClass__Type,bool) */

void 
MassProjectileSubModule__PassThroughCachedData
          (MassProjectileSubModule *this,DataParser *param_1,double param_2,Material *param_3,
          double param_4,int param_5,bool param_6)

{
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000018;
  
  this->CachedPropellantComposition = (struct Material *)(uintptr_t)((*(uint32_t*)((char*)&(param_2)+4)));
  this->CachedBarrelLength_m = (double)CONCAT44((*(uint32_t*)&(param_2)),in_stack_00000008);
  this->CachedAllowedMaterials = (*(uint32_t*)&(param_4));
  this->CachedPropellantMass_kg = (double)CONCAT44(in_stack_00000018,param_3);
  this->CachedMassStartsOutBeforeBarrel = (*(uint8_t*)((char*)&(param_4)+4));
  util__SimpleSerializationManager__CorrectImport
            ((SimpleSerializationManager *)param_1,(Reflectable *)this);
  if (this->ShipClass__Payload != (CraftBlueprint *)0x0) {
    CraftBlueprint__FinalizeData(this->ShipClass__Payload,param_1);
  }
  return;
}





//==== 0066dad0 StaticFactory_0066dad0 ====

/* public: static class util__Reflectable * __cdecl AmmoBaySubModule__ReflectionInfoStruct_L_struct_AmmoBaySubModule_G___StaticFactory(void) */

Reflectable * __cdecl AmmoBaySubModule__ReflectionInfoStruct_struct_AmmoBaySubModule___StaticFactory(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x98));
  if (pRVar1 != (Reflectable *)0x0) {
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_321;
    pRVar1[1]._pad_0x0_0 = 0;
    pRVar1[1].Name.Data = (char *)0x0;
    pRVar1[1].Name.Capacity = 0;
    AmmoInfo__AmmoInfo__o3((AmmoInfo *)(pRVar1 + 2));
    *(undefined1 *)&pRVar1[9]._pad_0x0_0 = 0;
    pRVar1[8].Name.Capacity = 0;
    pRVar1[8].Name.Length = 0;
  }
  return (Reflectable *)0x0;
}

//==== 0066db40 StaticFactory_0066db40 ====

/* public: static class util__Reflectable * __cdecl
   BarrelCoolingSubModule__ReflectionInfoStruct_class_BarrelCoolingSubModule___StaticFactory(void)
    */

Reflectable * __cdecl
BarrelCoolingSubModule__ReflectionInfoStruct_class_BarrelCoolingSubModule___StaticFactory__o2(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0xc0));
  if (pRVar1 != (Reflectable *)0x0) {
    memset(pRVar1,0,0xc0);
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_319;
    pRVar1[1].Name.Length = 0;
    pRVar1[2]._pad_0x0_0 = 0;
    pRVar1[2].Name.Data = (char *)0x0;
    pRVar1[1].Name.Capacity = (int)&vftable_207;
    pRVar1[3]._pad_0x0_0 = 0;
    pRVar1[3].Name.Data = (char *)0x0;
    pRVar1[3].Name.Capacity = 0;
    pRVar1[3].Name.Length = 0;
    TurbopumpSubModule__TurbopumpSubModule((TurbopumpSubModule *)&pRVar1[4].Name.Capacity);
    *(undefined1 *)&pRVar1[0xb].Name.Capacity = 0;
    pRVar1[0xb]._pad_0x0_0 = 0;
    pRVar1[0xb].Name.Data = (char *)0x0;
  }
  return (Reflectable *)0x0;
}

//==== 0066dbd0 StaticFactory_0066dbd0 ====

/* public: static class util__Reflectable * __cdecl
   MassProjectileSubModule__ReflectionInfoStruct_class_MassProjectileSubModule___StaticFactory(void)
    */

Reflectable * __cdecl
MassProjectileSubModule__ReflectionInfoStruct_class_MassProjectileSubModule___StaticFactory__o2(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x60));
  if (pRVar1 != (Reflectable *)0x0) {
    memset(pRVar1,0,0x60);
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_322;
    pRVar1[1]._pad_0x0_0 = 0;
    pRVar1[1].Name.Capacity = 0;
    pRVar1[1].Name.Length = 0;
    pRVar1[2]._pad_0x0_0 = 0;
    pRVar1[2].Name.Data = (char *)0x0;
    pRVar1[2].Name.Capacity = 0;
    pRVar1[2].Name.Length = 0;
    pRVar1[3].Name.Capacity = 0;
    pRVar1[3].Name.Length = 0;
    pRVar1[4]._pad_0x0_0 = 0;
    pRVar1[4].Name.Capacity = 0;
    pRVar1[4].Name.Length = 0;
    pRVar1[5]._pad_0x0_0 = -1;
    pRVar1[5].Name.Capacity = 0;
    pRVar1[5].Name.Length = 0;
  }
  return (Reflectable *)0x0;
}

//==== 0066dc50 StaticGetMember_0066dc50 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class util__Maybe_L_structutil__ClassMember_G_ const __cdecl
   AmmoBaySubModule__ReflectionInfoStruct_struct_AmmoBaySubModule___StaticGetMember(class
   util__Str_L_char_G_ const &) */

Str_L_char_G_ * __cdecl
AmmoBaySubModule__ReflectionInfoStruct_struct_AmmoBaySubModule___StaticGetMember__o2(Str_L_char_G_ *param_1)

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
        cde_l2_df1207a4__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_df1207a4__thread_safe_static_guard_0__),
      cde_l2_df1207a4__thread_safe_static_guard_0__ == -1)) {
     cde_l2_52ea3e33_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_df1207a4__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_52ea3e33_Count) {
    piVar7 = &DAT_00978c88;
    do {
      if ((*(int *)(iStack_c + 4) <
            cde_l2_7141cc7c__thread_safe_static_guard_0__) &&
         (_Init_thread_header(& cde_l2_7141cc7c__thread_safe_static_guard_0__),
          cde_l2_7141cc7c__thread_safe_static_guard_0__ == -1)) {
        util__Str_char___Str_char
                  ((Str_L_char_G_ *)
                   & cde_l2_33e03ee7_StaticMembers,"DummyValue_DO_NOT_USE");
        DAT_00978c84 = 0;
        DAT_00978c88 = 0;
        DAT_00978c8c = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978c90,"Unused");
        _DAT_00978c9c = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978ca0,"Capacity");
        _DAT_00978cac = 2;
        _DAT_00978cb0 = 0x10;
        _DAT_00978cb4 = 4;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978cb8,"int");
        _DAT_00978cc4 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978cc8,"Stacks");
        _DAT_00978cd4 = 2;
        _DAT_00978cd8 = 0x14;
        _DAT_00978cdc = 4;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978ce0,"int");
        _DAT_00978cec = 0;
        atexit( private__static_struct_util__ClassMember_const___cdecl_AmmoBaySubModule__ReflectionInfoStruct_struct_AmmoBaySubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
        _Init_thread_footer(& cde_l2_7141cc7c__thread_safe_static_guard_0__);
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
LAB_0066dd22:
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
          if (cVar3 == '\0') goto LAB_0066dd22;
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
    } while (iVar6 <  cde_l2_52ea3e33_Count);
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





//==== 0066df50 StaticGetMemberByIndex_0066df50 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   BarrelCoolingSubModule__ReflectionInfoStruct_class_BarrelCoolingSubModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
BarrelCoolingSubModule__ReflectionInfoStruct_class_BarrelCoolingSubModule___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_a6fd462b__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_a6fd462b__thread_safe_static_guard_0__);
    if ( cde_l2_a6fd462b__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_ced9dd5d_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00978944 = 0;
      _DAT_00978948 = 0;
      _DAT_0097894c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978950,"Unused");
      _DAT_0097895c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978960,"Coolant");
      _DAT_0097896c = 8;
      _DAT_00978970 = 0x10;
      _DAT_00978974 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978978,"Material");
      _DAT_00978984 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978988,"Cooler");
      _DAT_00978994 = 10;
      _DAT_00978998 = 0x18;
      _DAT_0097899c = 0x30;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009789a0,"CylindricalCoolerSubModule");
      _DAT_009789ac = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009789b0,"Turbopump");
      _DAT_009789bc = 10;
      _DAT_009789c0 = 0x48;
      _DAT_009789c4 = 0x48;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009789c8,"TurbopumpSubModule");
      _DAT_009789d4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009789d8,"CoolantInletTemperature_K");
      _DAT_009789e4 = 4;
      _DAT_009789e8 = 0x90;
      _DAT_009789ec = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009789f0,"double");
      _DAT_009789fc = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_BarrelCoolingSubModule__ReflectionInfoStruct_class_BarrelCoolingSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_a6fd462b__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_ced9dd5d_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_00978944 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_00978948 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_0097894c + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_00978950 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0097895c)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0097895d)[iVar1];
  return __return_storage_ptr__;
}





//==== 0066e150 StaticGetMemberByIndex_0066e150 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   MassProjectileSubModule__ReflectionInfoStruct_class_MassProjectileSubModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
MassProjectileSubModule__ReflectionInfoStruct_class_MassProjectileSubModule___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_e156566a__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_e156566a__thread_safe_static_guard_0__);
    if ( cde_l2_e156566a__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_11a7bf7e_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00978b0c = 0;
      _DAT_00978b10 = 0;
      _DAT_00978b14 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978b18,"Unused");
      _DAT_00978b24 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978b28,"Composition");
      _DAT_00978b34 = 8;
      _DAT_00978b38 = 0x10;
      _DAT_00978b3c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978b40,"Material");
      _DAT_00978b4c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978b50,"BoreRadius_m");
      _DAT_00978b5c = 4;
      _DAT_00978b60 = 0x18;
      _DAT_00978b64 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978b68,"double");
      _DAT_00978b74 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978b78,"Mass_kg");
      _DAT_00978b84 = 4;
      _DAT_00978b88 = 0x20;
      _DAT_00978b8c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978b90,"double");
      _DAT_00978b9c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978ba0,"Tracer");
      _DAT_00978bac = 8;
      _DAT_00978bb0 = 0x28;
      _DAT_00978bb4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978bb8,"Material");
      _DAT_00978bc4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978bc8,"ShipClass__Payload");
      _DAT_00978bd4 = 8;
      _DAT_00978bd8 = 0x2c;
      _DAT_00978bdc = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978be0,"CraftBlueprint");
      _DAT_00978bec = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_MassProjectileSubModule__ReflectionInfoStruct_class_MassProjectileSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_e156566a__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_11a7bf7e_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_00978b0c + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_00978b10 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_00978b14 + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_00978b18 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_00978b24)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_00978b25)[iVar1];
  return __return_storage_ptr__;
}





//==== 0066e390 StaticGetMemberCount_0066e390 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl AmmoBaySubModule__ReflectionInfoStruct_struct_AmmoBaySubModule___StaticGetMemberCount(void) */

int __cdecl
AmmoBaySubModule__ReflectionInfoStruct_struct_AmmoBaySubModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_6ecd6f7f__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_6ecd6f7f__thread_safe_static_guard_0__);
    if ( cde_l2_6ecd6f7f__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_6582142a_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00978c04 = 0;
      _DAT_00978c08 = 0;
      _DAT_00978c0c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978c10,"Unused");
      _DAT_00978c1c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978c20,"Capacity");
      _DAT_00978c2c = 2;
      _DAT_00978c30 = 0x10;
      _DAT_00978c34 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978c38,"int");
      _DAT_00978c44 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978c48,"Stacks");
      _DAT_00978c54 = 2;
      _DAT_00978c58 = 0x14;
      _DAT_00978c5c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978c60,"int");
      _DAT_00978c6c = 0;
      atexit( private__static_int_const___cdecl_AmmoBaySubModule__ReflectionInfoStruct_struct_AmmoBaySubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_6ecd6f7f__thread_safe_static_guard_0__);
    }
  }
  return 3;
}





//==== 0066e4c0 StaticGetMemberCount_0066e4c0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl BarrelCoolingSubModule__ReflectionInfoStruct_class_BarrelCoolingSubModule___StaticGetMemberCount(void) */

int __cdecl
BarrelCoolingSubModule__ReflectionInfoStruct_class_BarrelCoolingSubModule___StaticGetMemberCount
          (void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_730b9b78__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_730b9b78__thread_safe_static_guard_0__);
    if ( cde_l2_730b9b78__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_af2a72ae_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00978874 = 0;
      _DAT_00978878 = 0;
      _DAT_0097887c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978880,"Unused");
      _DAT_0097888c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978890,"Coolant");
      _DAT_0097889c = 8;
      _DAT_009788a0 = 0x10;
      _DAT_009788a4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009788a8,"Material");
      _DAT_009788b4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009788b8,"Cooler");
      _DAT_009788c4 = 10;
      _DAT_009788c8 = 0x18;
      _DAT_009788cc = 0x30;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009788d0,"CylindricalCoolerSubModule");
      _DAT_009788dc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009788e0,"Turbopump");
      _DAT_009788ec = 10;
      _DAT_009788f0 = 0x48;
      _DAT_009788f4 = 0x48;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009788f8,"TurbopumpSubModule");
      _DAT_00978904 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978908,"CoolantInletTemperature_K");
      _DAT_00978914 = 4;
      _DAT_00978918 = 0x90;
      _DAT_0097891c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978920,"double");
      _DAT_0097892c = 0;
      atexit( private__static_int_const___cdecl_BarrelCoolingSubModule__ReflectionInfoStruct_class_BarrelCoolingSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_730b9b78__thread_safe_static_guard_0__);
    }
  }
  return 5;
}





//==== 0066e670 StaticGetMemberCount_0066e670 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl MassProjectileSubModule__ReflectionInfoStruct_class_MassProjectileSubModule___StaticGetMemberCount(void) */

int __cdecl
MassProjectileSubModule__ReflectionInfoStruct_class_MassProjectileSubModule___StaticGetMemberCount
          (void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_273eaa39__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_273eaa39__thread_safe_static_guard_0__);
    if ( cde_l2_273eaa39__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_40662b07_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00978a14 = 0;
      _DAT_00978a18 = 0;
      _DAT_00978a1c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978a20,"Unused");
      _DAT_00978a2c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978a30,"Composition");
      _DAT_00978a3c = 8;
      _DAT_00978a40 = 0x10;
      _DAT_00978a44 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978a48,"Material");
      _DAT_00978a54 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978a58,"BoreRadius_m");
      _DAT_00978a64 = 4;
      _DAT_00978a68 = 0x18;
      _DAT_00978a6c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978a70,"double");
      _DAT_00978a7c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978a80,"Mass_kg");
      _DAT_00978a8c = 4;
      _DAT_00978a90 = 0x20;
      _DAT_00978a94 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978a98,"double");
      _DAT_00978aa4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978aa8,"Tracer");
      _DAT_00978ab4 = 8;
      _DAT_00978ab8 = 0x28;
      _DAT_00978abc = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978ac0,"Material");
      _DAT_00978acc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978ad0,"ShipClass__Payload");
      _DAT_00978adc = 8;
      _DAT_00978ae0 = 0x2c;
      _DAT_00978ae4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978ae8,"CraftBlueprint");
      _DAT_00978af4 = 0;
      atexit( private__static_int_const___cdecl_MassProjectileSubModule__ReflectionInfoStruct_class_MassProjectileSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_273eaa39__thread_safe_static_guard_0__);
    }
  }
  return 6;
}





//==== 0066e870 StaticGetMembers_0066e870 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class util__Darray_L_structutil__ClassMember_G_ const __cdecl
   AmmoBaySubModule__ReflectionInfoStruct_struct_AmmoBaySubModule___StaticGetMembers(void) */

Darray_L_struct_util__ClassMember_G_ * __cdecl
AmmoBaySubModule__ReflectionInfoStruct_struct_AmmoBaySubModule___StaticGetMembers__o2(void)

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
        cde_l2_456d2a6b__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_456d2a6b__thread_safe_static_guard_0__),
      cde_l2_456d2a6b__thread_safe_static_guard_0__ == -1)) {
     cde_l2_94dcff36_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_456d2a6b__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_94dcff36_Count);
  iVar3 = 0;
  if (0 <  cde_l2_94dcff36_Count) {
    puVar4 = &DAT_00978c88;
    do {
      if ((*(int *)(iStack_c + 4) <
            cde_l2_7141cc7c__thread_safe_static_guard_0__) &&
         (_Init_thread_header(& cde_l2_7141cc7c__thread_safe_static_guard_0__),
          cde_l2_7141cc7c__thread_safe_static_guard_0__ == -1)) {
        util__Str_char___Str_char
                  ((Str_L_char_G_ *)
                   & cde_l2_33e03ee7_StaticMembers,"DummyValue_DO_NOT_USE");
        DAT_00978c84 = 0;
        DAT_00978c88 = 0;
        DAT_00978c8c = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978c90,"Unused");
        _DAT_00978c9c = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978ca0,"Capacity");
        _DAT_00978cac = 2;
        _DAT_00978cb0 = 0x10;
        _DAT_00978cb4 = 4;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978cb8,"int");
        _DAT_00978cc4 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978cc8,"Stacks");
        _DAT_00978cd4 = 2;
        _DAT_00978cd8 = 0x14;
        _DAT_00978cdc = 4;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978ce0,"int");
        _DAT_00978cec = 0;
        atexit( private__static_struct_util__ClassMember_const___cdecl_AmmoBaySubModule__ReflectionInfoStruct_struct_AmmoBaySubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
        _Init_thread_footer(& cde_l2_7141cc7c__thread_safe_static_guard_0__);
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
    } while (iVar3 <  cde_l2_94dcff36_Count);
  }
  return in_stack_00000004;
}





//==== 0066eb00 StaticGetReflectionInfo_0066eb00 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct AmmoBaySubModule__ReflectionInfoStruct_L_structAmmoBaySubModule_G_ * __cdecl
   AmmoBaySubModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_struct_AmmoBaySubModule_G_ * __cdecl
AmmoBaySubModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_b1533759__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_b1533759__thread_safe_static_guard_0__);
    if ( cde_l2_b1533759__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_05072416_ReflectionInfo) = &vftable_317;
      _Init_thread_footer(& cde_l2_b1533759__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_05072416_ReflectionInfo;
}





//==== 0066eb60 StaticGetReflectionInfo_0066eb60 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct BarrelCoolingSubModule__ReflectionInfoStruct_L_classBarrelCoolingSubModule_G_
   * __cdecl BarrelCoolingSubModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_BarrelCoolingSubModule_G_ * __cdecl
BarrelCoolingSubModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_344aee7a__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_344aee7a__thread_safe_static_guard_0__);
    if ( cde_l2_344aee7a__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_f2804fdd_ReflectionInfo) = &vftable_320;
      _Init_thread_footer(& cde_l2_344aee7a__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_f2804fdd_ReflectionInfo;
}





//==== 0066ebc0 StaticGetReflectionInfo_0066ebc0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct MassProjectileSubModule__ReflectionInfoStruct_L_class_MassProjectileSubModule_G_ * __cdecl MassProjectileSubModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_MassProjectileSubModule_G_ * __cdecl
MassProjectileSubModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_2557f01c__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_2557f01c__thread_safe_static_guard_0__);
    if ( cde_l2_2557f01c__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_367f9d36_ReflectionInfo) = &vftable_318;
      _Init_thread_footer(& cde_l2_2557f01c__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_367f9d36_ReflectionInfo;
}





//==== 0066efa0 Print_0066efa0 ====


/* public: virtual class util__Str_L_char_G_ __thiscall ChemicalReaction__Print(void)const  */

Str_L_char_G_ * __thiscall
ChemicalReaction__Print(ChemicalReaction *this,Str_L_char_G_ *__return_storage_ptr__)

{
  GetDefaultInfo(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}





//==== 0066efc0 StaticGetPropertyGetters_0066efc0 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cdouble___thiscall_util__Reflectable___P__void_const_G__G_ __thiscall
   ChemicalReaction__StaticGetPropertyGetters(void)const  */

void __thiscall ChemicalReaction__StaticGetPropertyGetters(ChemicalReaction *this)

{
  undefined8 stack0xffffffc0;
  undefined8 stack0xfffffffc;
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ *pSVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  Str_L_char_G_ *pSVar7;
  int iVar8;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cvoid____cdecl_P__void__G___G_ *in_stack_00000004;
  int iVar9;
  Maybe_L_int_G_ *pMVar10;
  int iStack_3c;
  undefined1 auStack_24 [8];
  int iStack_1c;
  undefined4 uStack_18;
  Maybe_L_int_G_ MStack_14;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_0097940c) &&
     (_Init_thread_header(&DAT_0097940c), DAT_0097940c == -1)) {
    puVar4 = (undefined4 *)port_op_new(0xa4);
    if (puVar4 == (undefined4 *)0x0) {
      DAT_0095f3c4 = (undefined4)(uintptr_t)((Str_L_char_G_ *)0x0);
    }
    else {
      DAT_0095f3c4 = (undefined4)(uintptr_t)((Str_L_char_G_ *)(puVar4 + 1));
      *puVar4 = 10;
      iVar9 = 10;
      pSVar2 = (Str_L_char_G_ *)(uintptr_t)(DAT_0095f3c4);
      do {
        pSVar2->Data = (char *)0x0;
        pSVar2->Capacity = 0;
        pSVar2->Length = 0;
        pSVar2[1].Data = (char *)0x0;
        iVar9 = iVar9 + -1;
        pSVar2 = (Str_L_char_G_ *)&pSVar2[1].Capacity;
      } while (iVar9 != 0);
    }
    iVar9 = 0;
    if (0 < DAT_0095f3cc) {
      (*(uint32_t*)&(auStack_24)) = (uint32_t)(uintptr_t)((char *)0x0);
      iVar8 = 0;
      (*(uint32_t*)((char*)&(auStack_24)+4)) = (uint32_t)(uintptr_t)((void *)0x0);
      iStack_1c = 0;
      uStack_18 = 0;
      do {
        pSVar2 = (Str_L_char_G_ *)((int)(int)(uintptr_t)(DAT_0095f3c4) + iVar8);
        util__Str_char___operator__o8(pSVar2,(Str_L_char_G_ *)auStack_24);
        iVar9 = iVar9 + 1;
        pSVar2[1].Data = (char *)0x0;
        iVar8 = iVar8 + 0x10;
      } while (iVar9 < DAT_0095f3cc);
    }
    atexit(FUN_008fc4c0);
    iStack_3c = 0x66f37d;
    _Init_thread_footer(&DAT_0097940c);
  }
  if (DAT_0095f3c8 == 0) {
    pSVar7 = (Str_L_char_G_ *)&stack0xffffffc0;
    MStack_14.Data = 0;
    (*(uint32_t*)((char*)&(MStack_14)+4)) = (*(uint32_t*)((char*)&(MStack_14)+4)) & 0xffffff00;
    pMVar10 = &MStack_14;
    iVar9 = 3;
    pSVar2 = (Str_L_char_G_ *)
             util__Str_char___Str_char((Str_L_char_G_ *)(auStack_24 + 4),"GetExplosionVelocity_m__s");
    util__Str_char___SubStr(pSVar2,pSVar7,iVar9,pMVar10);
    FUN_0066ff50();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
    pSVar7 = (Str_L_char_G_ *)&stack0xffffffc0;
    MStack_14.Data = 0;
    (*(uint32_t*)((char*)&(MStack_14)+4)) = (*(uint32_t*)((char*)&(MStack_14)+4)) & 0xffffff00;
    pMVar10 = &MStack_14;
    iVar9 = 3;
    pSVar2 = (Str_L_char_G_ *)
             util__Str_char___Str_char
                       ((Str_L_char_G_ *)(auStack_24 + 4),"GetExplosiveEnergyDensity_J__kg");
    util__Str_char___SubStr(pSVar2,pSVar7,iVar9,pMVar10);
    FUN_0066ff50();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
    pSVar7 = (Str_L_char_G_ *)&stack0xffffffc0;
    MStack_14.Data = 0;
    (*(uint32_t*)((char*)&(MStack_14)+4)) = (*(uint32_t*)((char*)&(MStack_14)+4)) & 0xffffff00;
    pMVar10 = &MStack_14;
    iVar9 = 3;
    pSVar2 = (Str_L_char_G_ *)
             util__Str_char___Str_char((Str_L_char_G_ *)(auStack_24 + 4),"GetFlameTemperature_K");
    util__Str_char___SubStr(pSVar2,pSVar7,iVar9,pMVar10);
    FUN_0066ff50();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
    pSVar7 = (Str_L_char_G_ *)&stack0xffffffc0;
    MStack_14.Data = 0;
    (*(uint32_t*)((char*)&(MStack_14)+4)) = (*(uint32_t*)((char*)&(MStack_14)+4)) & 0xffffff00;
    pMVar10 = &MStack_14;
    iVar9 = 3;
    pSVar2 = (Str_L_char_G_ *)
             util__Str_char___Str_char((Str_L_char_G_ *)(auStack_24 + 4),"GetFlameSpeed_m__s");
    util__Str_char___SubStr(pSVar2,pSVar7,iVar9,pMVar10);
    FUN_0066ff50();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
    pSVar7 = (Str_L_char_G_ *)&stack0xffffffc0;
    MStack_14.Data = 0;
    (*(uint32_t*)((char*)&(MStack_14)+4)) = (*(uint32_t*)((char*)&(MStack_14)+4)) & 0xffffff00;
    pMVar10 = &MStack_14;
    iVar9 = 3;
    pSVar2 = (Str_L_char_G_ *)
             util__Str_char___Str_char((Str_L_char_G_ *)(auStack_24 + 4),"GetFlameWidth_m");
    util__Str_char___SubStr(pSVar2,pSVar7,iVar9,pMVar10);
    FUN_0066ff50();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
    pSVar7 = (Str_L_char_G_ *)&stack0xffffffc0;
    MStack_14.Data = 0;
    (*(uint32_t*)((char*)&(MStack_14)+4)) = (*(uint32_t*)((char*)&(MStack_14)+4)) & 0xffffff00;
    pMVar10 = &MStack_14;
    iVar9 = 3;
    pSVar2 = (Str_L_char_G_ *)
             util__Str_char___Str_char((Str_L_char_G_ *)(auStack_24 + 4),"GetCharacteristicLength_m");
    util__Str_char___SubStr(pSVar2,pSVar7,iVar9,pMVar10);
    FUN_0066ff50();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
  }
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = (undefined **)(&PTR_vftable_0095f3c0);
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(int *)(in_stack_00000004 + 0xc) = DAT_0095f3cc;
  (*(uint32_t*)((char*)&(MStack_14)+4)) = (**(code **)(uintptr_t)(PTR__vftable__0095f3c0 + 0xc))();
  util__Darray_struct_util__tuple2_class_util__Str_char__void____cdecl___void______SetSize
            (in_stack_00000004,(int *)&MStack_14.IsValidData);
  uVar6 = *(uint *)(in_stack_00000004 + 0xc);
  uVar5 = -(uint)((int)((ulonglong)uVar6 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 0x10);
  puVar3 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar5) | uVar5 + 4);
  if (puVar3 == (uint *)0x0) {
    pSVar2 = (Str_L_char_G_ *)0x0;
  }
  else {
    *puVar3 = uVar6;
    pSVar2 = (Str_L_char_G_ *)(puVar3 + 1);
    pSVar7 = pSVar2;
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      pSVar7->Data = (char *)0x0;
      pSVar7->Capacity = 0;
      pSVar7->Length = 0;
      pSVar7[1].Data = (char *)0x0;
      pSVar7 = (Str_L_char_G_ *)&pSVar7[1].Capacity;
    }
  }
  *(Str_L_char_G_ **)(in_stack_00000004 + 4) = pSVar2;
  pSVar7 = (Str_L_char_G_ *)(uintptr_t)(DAT_0095f3c4);
  if (DAT_0095f3c4 != (Str_L_char_G_ *)(DAT_0095f3c8 * 0x10 + (int)DAT_0095f3c4)) {
    do {
      util__Str_char___operator__o8(pSVar2,pSVar7);
      pSVar1 = pSVar7 + 1;
      pSVar7 = (Str_L_char_G_ *)&pSVar7[1].Capacity;
      pSVar2[1].Data = pSVar1->Data;
      pSVar2 = (Str_L_char_G_ *)&pSVar2[1].Capacity;
    } while (pSVar7 != (Str_L_char_G_ *)(DAT_0095f3c8 * 0x10 + (int)DAT_0095f3c4));
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0066f390 GetReflectionInfo_0066f390 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   ChemicalReaction__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall ChemicalReaction__GetReflectionInfo(ChemicalReaction *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_bdf1d7d7__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_bdf1d7d7__thread_safe_static_guard_0__);
    if ( cde_l2_bdf1d7d7__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_b9fd4440_ReflectionInfo) = &vftable_324;
      _Init_thread_footer(& cde_l2_bdf1d7d7__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_b9fd4440_ReflectionInfo;
}





//==== 0066f3a0 scalar_deleting_destructor_0066f3a0 ====

/* public: virtual void * __thiscall ChemicalReaction:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall
ChemicalReaction___scalar_deleting_destructor(ChemicalReaction *this,uint param_1)

{
  int *piVar1;
  Material **ppMVar2;
  pmf_a5df125c *ppVar3;
  
  piVar1 = (this->ProductCounts).Data;
  (this->ProductCounts)._pad_0x0_0 = (int)&vftable_11;
  if (piVar1 != (int *)0x0) {
    port_op_delete(piVar1);
  }
  (this->ProductCounts).Data = (int *)0x0;
  (this->ProductCounts)._pad_0x0_0 = (int)&vftable;
  ppMVar2 = (this->Products).Data;
  (this->Products)._pad_0x0_0 = (int)&vftable_2;
  if (ppMVar2 != (Material **)0x0) {
    port_op_delete(ppMVar2);
  }
  (this->Products).Data = (Material **)0x0;
  (this->Products)._pad_0x0_0 = (int)&vftable;
  piVar1 = (this->ReactantCounts).Data;
  (this->ReactantCounts)._pad_0x0_0 = (int)&vftable_11;
  if (piVar1 != (int *)0x0) {
    port_op_delete(piVar1);
  }
  (this->ReactantCounts).Data = (int *)0x0;
  (this->ReactantCounts)._pad_0x0_0 = (int)&vftable;
  ppMVar2 = (this->Reactants).Data;
  (this->Reactants)._pad_0x0_0 = (int)&vftable_2;
  if (ppMVar2 != (Material **)0x0) {
    port_op_delete(ppMVar2);
  }
  (this->Reactants).Data = (Material **)0x0;
  (this->Reactants)._pad_0x0_0 = (int)&vftable;
  ppVar3 = (this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Data;
  (this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 =
       (int)&vftable_2;
  if (ppVar3 != (pmf_a5df125c *)0x0) {
    port_op_delete(ppVar3);
  }
  (this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Data = (pmf_a5df125c *)0x0;
  (this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 =
       (int)&vftable;
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0xb8);
  }
  return this;
}

//==== 0066f4a0 GetTypeName_0066f4a0 ====


/* public: virtual class util__Str_L_char_G_  ChemicalReaction__ReflectionInfoStruct_class_ChemicalReaction___GetTypeName(void)const  */

Str_L_char_G_ * 
ChemicalReaction__ReflectionInfoStruct_class_ChemicalReaction___GetTypeName
          (ReflectionInfoStruct_L_class_ChemicalReaction_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"ChemicalReaction");
  return __return_storage_ptr__;
}





//==== 0066f4c0 GetMembers_0066f4c0 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   ChemicalReaction__ReflectionInfoStruct_class_ChemicalReaction___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
ChemicalReaction__ReflectionInfoStruct_class_ChemicalReaction___GetMembers__o2
          (ReflectionInfoStruct_L_class_ChemicalReaction_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_80efc1f9__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_80efc1f9__thread_safe_static_guard_0__),
      cde_l2_80efc1f9__thread_safe_static_guard_0__ == -1)) {
     cde_l2_0e939bca_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_80efc1f9__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_0e939bca_Count);
  iVar3 = 0;
  if (0 <  cde_l2_0e939bca_Count) {
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
    } while (iVar3 <  cde_l2_0e939bca_Count);
  }
  return in_stack_00000004;
}





//==== 0066f600 GetMember_0066f600 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   ChemicalReaction__ReflectionInfoStruct_class_ChemicalReaction___GetMember(class util__Str_L_char_G_
   const &)const  */

Str_L_char_G_ * 
ChemicalReaction__ReflectionInfoStruct_class_ChemicalReaction___GetMember__o2
          (ReflectionInfoStruct_L_class_ChemicalReaction_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_05cafc6a__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_05cafc6a__thread_safe_static_guard_0__),
      cde_l2_05cafc6a__thread_safe_static_guard_0__ == -1)) {
     cde_l2_a9e94e8e_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_05cafc6a__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_a9e94e8e_Count) {
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
LAB_0066f68d:
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
          if (cVar3 == '\0') goto LAB_0066f68d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_a9e94e8e_Count);
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





//==== 0066f7a0 GetFactory_0066f7a0 ====


/* public: virtual class util__Reflectable * (__cdecl*
   ChemicalReaction__ReflectionInfoStruct_class_ChemicalReaction___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall ChemicalReaction__ReflectionInfoStruct_class_ChemicalReaction___GetFactory__o2
          (ReflectionInfoStruct_L_class_ChemicalReaction_G_ *this)

{
  return StaticFactory;
}





//==== 0066f7b0 GetReflectionInfo_0066f7b0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   DissociationReaction__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall DissociationReaction__GetReflectionInfo(DissociationReaction *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_1f37967d__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_1f37967d__thread_safe_static_guard_0__);
    if ( cde_l2_1f37967d__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_4099d4c0_ReflectionInfo) = &vftable_326;
      _Init_thread_footer(& cde_l2_1f37967d__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_4099d4c0_ReflectionInfo;
}





//==== 0066f7c0 scalar_deleting_destructor_0066f7c0 ====

/* public: virtual void * __thiscall DissociationReaction:: 0 scalardeletingdestructor(unsigned
   int) */

void * __thiscall
DissociationReaction___scalar_deleting_destructor(DissociationReaction *this,uint param_1)

{
  double *pdVar1;
  Material **ppMVar2;
  
  pdVar1 = (this->ProductCounts).Data;
  (this->ProductCounts)._pad_0x0_0 = (int)&vftable_63;
  if (pdVar1 != (double *)0x0) {
    port_op_delete(pdVar1);
  }
  (this->ProductCounts).Data = (double *)0x0;
  (this->ProductCounts)._pad_0x0_0 = (int)&vftable;
  ppMVar2 = (this->Products).Data;
  (this->Products)._pad_0x0_0 = (int)&vftable_2;
  if (ppMVar2 != (Material **)0x0) {
    port_op_delete(ppMVar2);
  }
  (this->Products).Data = (Material **)0x0;
  (this->Products)._pad_0x0_0 = (int)&vftable;
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x30);
  }
  return this;
}

//==== 0066f850 GetTypeName_0066f850 ====


/* public: virtual class util__Str_L_char_G_ 
   DissociationReaction__ReflectionInfoStruct_struct_DissociationReaction___GetTypeName(void)const
    */

Str_L_char_G_ * 
DissociationReaction__ReflectionInfoStruct_struct_DissociationReaction___GetTypeName__o2
          (ReflectionInfoStruct_L_struct_DissociationReaction_G_ *this,Str_L_char_G_ *__return_storage_ptr__
          )

{
  util__Str_char___Str_char(__return_storage_ptr__,"DissociationReaction");
  return __return_storage_ptr__;
}





//==== 0066f870 GetMembers_0066f870 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   DissociationReaction__ReflectionInfoStruct_struct_DissociationReaction___GetMembers(void)const
    */

undefined4 
DissociationReaction__ReflectionInfoStruct_struct_DissociationReaction___GetMembers__o2
          (ReflectionInfoStruct_L_struct_DissociationReaction_G_ *this)

{
  undefined4 in_stack_00000004;
  
  StaticGetMembers();
}





//==== 0066f890 GetMember_0066f890 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   DissociationReaction__ReflectionInfoStruct_struct_DissociationReaction___GetMember(class
   util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
DissociationReaction__ReflectionInfoStruct_struct_DissociationReaction___GetMember__o2
          (ReflectionInfoStruct_L_struct_DissociationReaction_G_ *this,Str_L_char_G_ *param_1)

{
  StaticGetMember(param_1);
  return param_1;
}





//==== 0066f8b0 GetFactory_0066f8b0 ====


/* public: virtual class util__Reflectable * (__cdecl*
   DissociationReaction__ReflectionInfoStruct_struct_DissociationReaction___GetFactory(void)const
   )(void) */

_func_Reflectable_ptr * 
__thiscall DissociationReaction__ReflectionInfoStruct_struct_DissociationReaction___GetFactory__o2
          (ReflectionInfoStruct_L_struct_DissociationReaction_G_ *this)

{
  return StaticFactory;
}





//==== 0066fc90 Zip_MaterialConstituent_Material_const__double_ ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* class util__Darray_L_structMaterialConstituent_G_ __cdecl util__Zip_L_structMaterialConstituent_Cclass_Materialconst_P_Cdouble_G_(class util__Darray_L_classMaterialconst_P_G_ const &,class
   util__Darray_L_double_G_ const &) */

Darray_L_MaterialConstituent_G_ * __cdecl
util__Zip_struct_MaterialConstituent_class_Material_const__double
          (Darray_L_MaterialConstituent_G_ *__return_storage_ptr__,Darray_L_Material_const_P_G_ *param_1,
          Darray_L_double_G_ *param_2)

{
  undefined8 stack0xfffffffc;
  MaterialConstituent *pMVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  Darray_L_MaterialConstituent_G_ *pDVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  Material *pMVar10;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  undefined8 local_18;
  Darray_L_MaterialConstituent_G_ *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = __return_storage_ptr__;
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (MaterialConstituent *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  iVar6 = (**(code **)(param_2->_pad_0x0_0 + 0xc))();
  iVar7 = (**(code **)(*(int *)param_1 + 0xc))();
  if (iVar6 < iVar7) {
    iVar6 = iVar7;
  }
  Darray_L_MaterialConstituent_G___Darray_L_MaterialConstituent_G_(local_10,iVar6);
  local_c = 0;
  while( true ) {
    iVar6 = (**(code **)(param_2->_pad_0x0_0 + 0xc))();
    iVar7 = (**(code **)(*(int *)param_1 + 0xc))();
    if (iVar6 < iVar7) {
      iVar6 = iVar7;
    }
    if (iVar6 <= local_c) break;
    iVar6 = (**(code **)(param_2->_pad_0x0_0 + 0xc))();
    if (local_c < iVar6) {
      puVar8 = (undefined8 *)(**(code **)param_2->_pad_0x0_0)(&local_c);
      *(uint32_t *)&local_18 = *puVar8;
    }
    else {
      *(uint32_t *)&local_18 = 0;
    }
    iVar6 = (**(code **)(*(int *)param_1 + 0xc))();
    if (local_c < iVar6) {
      puVar9 = (undefined4 *)(*(code *)**(undefined4 **)param_1)(&local_c);
      pMVar10 = (Material *)*puVar9;
    }
    else {
      pMVar10 = (Material *)0x0;
    }
    uVar3 = local_18;
    iVar6 = local_10->Size;
    uVar2 = (undefined4)local_18;
    *(uint32_t *)&local_18 = CONCAT44(iVar6 + 1,(undefined4)local_18);
    Darray_L_MaterialConstituent_G___SetSize(local_10,(int *)((int)&local_18 + 4));
    pDVar4 = local_10;
    bVar5 = Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                      ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)local_10,iVar6);
    if (bVar5) {
      uStack_1c = (undefined4)((ulonglong)uVar3 >> 0x20);
      pMVar1 = pDVar4->Data + pDVar4->Size + -1;
      pMVar1->Type = pMVar10;
      *(undefined4 *)&(*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar1) + 0x4)) = uStack_24;
      *(undefined4 *)&pMVar1->UnitlessFraction = uVar2;
      *(undefined4 *)((int)&pMVar1->UnitlessFraction + 4) = uStack_1c;
    }
    local_c = local_c + 1;
  }
  return local_10;
}

//==== 0066fdb0 tuple2_util__Darray_Material_const___util__Darray_double___ ====


/* public:  tuple2_L_classutil__Darray_L_classMaterialconst_P_G__Cclass_util__Darray_L_double_G__G___dtor(void) */

void __thiscall
util__tuple2_class_util__Darray_class_Material_const___class_util__Darray_double______tuple2_class_util__Darray_class_Material_const___class_util__Darray_double(tuple2_L_class_util__Darray_L_class_Material_const_P_G__Cclass_util__Darray_L_double_G___G_ *this)

{
  *(undefined ***)(this + 0x10) = (undefined **)(&vftable_63);
  if (*(void **)(this + 0x14) != (void *)0x0) {
    port_op_delete(*(void **)(this + 0x14));
  }
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined ***)(this + 0x10) = (undefined **)(&vftable);
  *(undefined ***)this = (undefined **)(&vftable_2);
  if (*(void **)(this + 4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 4));
  }
  *(undefined ***)this = (undefined **)(&vftable);
  *(undefined4 *)(this + 4) = 0;
  return;
}





//==== 00670330 GetAdiabaticFlameTemperature_K ====


/* public: double __thiscall ChemicalReaction__GetAdiabaticFlameTemperature_K(struct
   MaterialConstituent)const  */

double __thiscall
ChemicalReaction__GetAdiabaticFlameTemperature_K(ChemicalReaction *this,MaterialConstituent param_1)

{
  undefined4 *puVar1;
  MaterialConstituent MVar2;
  int iVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  undefined4 in_stack_ffffffd0;
  int iStack_18;
  undefined **ppuStack_14;
  void *pvStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  (*(uint32_t*)((char*)&(MVar2)+4)) = in_stack_ffffffd0;
  MVar2.Type = param_1.Type;
  MVar2.UnitlessFraction = param_1.UnitlessFraction;
  (*(uint32_t *)((char *)&(MVar2.UnitlessFraction) + 4)) = (*(uint32_t *)((char *)&(param_1.UnitlessFraction) + 4));
  dVar5 = GetEnergyDensity_J__kg(this,MVar2);
  ppuStack_14 = (undefined **)0x0;
  pvStack_10 = (void *)0x0;
  iStack_c = 0;
  uStack_8 = 0;
  GetProducts(this);
  iVar3 = iStack_c;
  if ((param_1.Type != (Material *)0x0) && (0.0 < param_1.UnitlessFraction)) {
    iStack_18 = iStack_c + 1;
    util__Darray_struct_MaterialConstituent___SetSize
              ((Darray_L_struct_MaterialConstituent_G_ *)&ppuStack_14,&iStack_18);
    bVar4 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                      ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)&ppuStack_14,
                       iVar3);
    if (bVar4) {
      puVar1 = (undefined4 *)((int)pvStack_10 + iStack_c * 0x10 + -0x10);
      *puVar1 = (undefined4)(uintptr_t)(param_1.Type);
      puVar1[1] = (*(uint32_t*)((char*)&(param_1)+4));
      puVar1[2] = (undefined4)(uintptr_t)(param_1.UnitlessFraction);
      puVar1[3] = (*(uint32_t *)((char *)&(param_1.UnitlessFraction) + 4));
    }
  }
  dVar6 = Material__GetMixtureSpecificHeat_J__kg_K
                    ((Darray_L_struct_MaterialConstituent_G_ *)&ppuStack_14);
  ppuStack_14 = (undefined **)(&vftable_15);
  if (pvStack_10 != (void *)0x0) {
    port_op_delete(pvStack_10);
  }
  return dVar5 / dVar6;
}





//==== 006703f0 GetAdiabaticFlameTemperature_K_Memoize ====


/* public: void __thiscall ChemicalReaction__GetAdiabaticFlameTemperature_K_Memoize(void)const  */

void __thiscall ChemicalReaction__GetAdiabaticFlameTemperature_K_Memoize(ChemicalReaction *this)

{
  int iVar1;
  bool bVar2;
  Darray_L_struct_MaterialConstituent_G_ *pDVar3;
  double dVar4;
  uint in_stack_ffffffc4;
  undefined4 uStack_24;
  void *pvStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined8 uStack_c;
  
  if ((this->GetAdiabaticFlameTemperature_K_MemoizedValue).IsValidData == false) {
    iVar1 = (this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Size;
    uStack_c = (double)CONCAT44(iVar1 + 1,(undefined4)uStack_c);
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)&this->ChemicalReactionMemoizationHandlerInstance
               ,(int *)((int)&uStack_c + 4));
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)
                       &this->ChemicalReactionMemoizationHandlerInstance,iVar1);
    if (bVar2) {
      (this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Data
      [(this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_a5df125c, GetAdiabaticFlameTemperature_K_Clear);
    }
    if ((this->GetEnergyDensity_J__kg_MemoizedValue).IsValidData == false) {
      iVar1 = (this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Size;
      uStack_c = (double)CONCAT44(iVar1 + 1,(undefined4)uStack_c);
      util__Darray_class_util__Reflectable____SetSize
                ((Darray_L_class_util__Reflectable_P_G_ *)
                 &this->ChemicalReactionMemoizationHandlerInstance,(int *)((int)&uStack_c + 4));
      bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                        ((Darray_L_enum_GraphicsResource__Type_G_ *)
                         &this->ChemicalReactionMemoizationHandlerInstance,iVar1);
      if (bVar2) {
        (this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Data
        [(this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Size + -1] =
             CDE_PMF(pmf_a5df125c, GetEnergyDensity_J__kg_Clear);
      }
      dVar4 = GetEnergyDensity_J__kg(this,*(MaterialConstituent *)cde_zextb(ZEXT416(in_stack_ffffffc4) << 0x20,16))
      ;
      uStack_c = (double)CONCAT71((int7)((ulonglong)dVar4 >> 8),1);
      uStack_14 = SUB84(dVar4,0);
      uStack_10 = (undefined4)((ulonglong)dVar4 >> 0x20);
      *(undefined4 *)&(this->GetEnergyDensity_J__kg_MemoizedValue).Data = uStack_14;
      *(undefined4 *)((int)&(this->GetEnergyDensity_J__kg_MemoizedValue).Data + 4) = uStack_10;
      *(undefined4 *)&(this->GetEnergyDensity_J__kg_MemoizedValue).IsValidData =
           (undefined4)uStack_c;
      *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetEnergyDensity_J__kg_MemoizedValue)) + 0xc)) = uStack_10;
      if ((this->GetEnergyDensity_J__kg_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
    }
    pDVar3 = (Darray_L_struct_MaterialConstituent_G_ *)GetProducts(this);
    uStack_c = Material__GetMixtureSpecificHeat_J__kg_K(pDVar3);
    uStack_c = (this->GetEnergyDensity_J__kg_MemoizedValue).Data / uStack_c;
    if (pvStack_20 != (void *)0x0) {
      port_op_delete(pvStack_20);
    }
    uStack_1c = CONCAT31((*(uint24_t*)((char*)&(uStack_1c)+1)),1);
    uStack_24 = SUB84(uStack_c,0);
    pvStack_20 = (void *)((ulonglong)uStack_c >> 0x20);
    *(undefined4 *)&(this->GetAdiabaticFlameTemperature_K_MemoizedValue).Data = uStack_24;
    *(void **)((int)&(this->GetAdiabaticFlameTemperature_K_MemoizedValue).Data + 4) = pvStack_20;
    *(undefined4 *)&(this->GetAdiabaticFlameTemperature_K_MemoizedValue).IsValidData = uStack_1c;
    *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetAdiabaticFlameTemperature_K_MemoizedValue)) + 0xc)) = uStack_18;
  }
  return;
}





//==== 00670e30 GetDetonationVelocity_m__s_00670e30 ====


/* public: double __thiscall ChemicalReaction__GetDetonationVelocity_m__s(struct
   MaterialConstituent)const  */

double __thiscall
ChemicalReaction__GetDetonationVelocity_m__s(ChemicalReaction *this,MaterialConstituent param_1)

{
  undefined4 *puVar1;
  int iVar2;
  MaterialConstituent MVar3;
  Darray_L_struct_MaterialConstituent_G_ *pDVar4;
  Maybe_L_double_G_ *pMVar5;
  bool bVar6;
  double dVar7;
  undefined4 in_stack_ffffffa4;
  Maybe_L_double_G_ MStack_44;
  undefined **ppuStack_34;
  void *pvStack_30;
  double dStack_2c;
  undefined **ppuStack_24;
  void *pvStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined8 uStack_14;
  undefined8 uStack_c;
  
  bVar6 = (this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).IsValidData == false;
  if (bVar6) {
    iVar2 = (this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Size;
    uStack_c = (double)CONCAT44(iVar2 + 1,(undefined4)uStack_c);
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)&this->ChemicalReactionMemoizationHandlerInstance
               ,(int *)((int)&uStack_c + 4));
    bVar6 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)
                       &this->ChemicalReactionMemoizationHandlerInstance,iVar2);
    if (bVar6) {
      (this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Data
      [(this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_a5df125c, GetTotalEnthalpyOfReaction_J__mol_Clear);
    }
    pDVar4 = (Darray_L_struct_MaterialConstituent_G_ *)GetProducts(this);
    uStack_c = Material__GetMixtureSummedEnthalpyOfFormation_J__mol(pDVar4);
    pDVar4 = (Darray_L_struct_MaterialConstituent_G_ *)GetReactants(this);
    dVar7 = Material__GetMixtureSummedEnthalpyOfFormation_J__mol(pDVar4);
    uStack_c = uStack_c - dVar7;
    ppuStack_24 = (undefined **)(&vftable_15);
    if (pvStack_20 != (void *)0x0) {
      port_op_delete(pvStack_20);
    }
    pvStack_20 = (void *)0x0;
    ppuStack_24 = (undefined **)(&vftable);
    ppuStack_34 = (undefined **)(&vftable_15);
    if (pvStack_30 != (void *)0x0) {
      port_op_delete(pvStack_30);
    }
    dVar7 = uStack_c;
    uStack_14 = uStack_c;
    uStack_c = (double)CONCAT71((*(uint56_t*)((char*)&(uStack_c)+1)),1);
    (*(uint32_t*)&(uStack_14)) = SUB84(dVar7,0);
    (*(uint32_t*)((char*)&(uStack_14)+4)) = (undefined4)((ulonglong)dVar7 >> 0x20);
    pvStack_30 = (void *)0x0;
    ppuStack_34 = (undefined **)(&vftable);
    *(undefined4 *)&((this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).Data) = (undefined4)uStack_14;
    *(undefined4 *)((int)&(this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).Data + 4) =
         (*(uint32_t*)((char*)&(uStack_14)+4));
    *(undefined4 *)&((this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).IsValidData) = (undefined4)uStack_c;
    *(undefined4 *)&((*(undefined4 *)(void *)((char *)&((this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue)) + 0xc))) = (*(uint32_t*)((char*)&(uStack_14)+4));
    bVar6 = (this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).IsValidData == false;
    uStack_14 = dVar7;
  }
  if (bVar6) {
    in_stack_ffffffa4 = 0x13;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if ((this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).Data <= 0.0 &&
      (this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).Data != 0.0) {
    bVar6 = HasGasProducts(this);
    if (bVar6) {
      (*(uint32_t*)((char*)&(MVar3)+4)) = in_stack_ffffffa4;
      MVar3.Type = param_1.Type;
      MVar3.UnitlessFraction = param_1.UnitlessFraction;
      (*(uint32_t *)((char *)&(MVar3.UnitlessFraction) + 4)) = (*(uint32_t *)((char *)&(param_1.UnitlessFraction) + 4));
      dStack_2c = GetDetonationParameter(this,MVar3);
      ppuStack_24 = (undefined **)0x0;
      pvStack_20 = (void *)0x0;
      iStack_1c = 0;
      uStack_18 = 0;
      uStack_c = dStack_2c;
      GetReactants(this);
      iVar2 = iStack_1c;
      if ((param_1.Type != (Material *)0x0) && (0.0 < param_1.UnitlessFraction)) {
        uStack_c = (double)CONCAT44(iStack_1c + 1,(undefined4)uStack_c);
        util__Darray_struct_MaterialConstituent___SetSize
                  ((Darray_L_struct_MaterialConstituent_G_ *)&ppuStack_24,(int *)((int)&uStack_c + 4));
        bVar6 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                          ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)&ppuStack_24,
                           iVar2);
        if (bVar6) {
          puVar1 = (undefined4 *)((int)pvStack_20 + iStack_1c * 0x10 + -0x10);
          *puVar1 = (undefined4)(uintptr_t)(param_1.Type);
          puVar1[1] = (*(uint32_t*)((char*)&(param_1)+4));
          puVar1[2] = (undefined4)(uintptr_t)(param_1.UnitlessFraction);
          puVar1[3] = (*(uint32_t *)((char *)&(param_1.UnitlessFraction) + 4));
        }
      }
      pMVar5 = util__Sqrt(&MStack_44,&dStack_2c);
      if (pMVar5->IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      dVar7 = Material__GetMixtureDensity_kg__m3((Darray_L_struct_MaterialConstituent_G_ *)&ppuStack_24)
      ;
      ppuStack_24 = (undefined **)(&vftable_15);
      uStack_c = pMVar5->Data * (dVar7 * 0.0013 + 1.0) * 1.01 * 1000.0;
      if (pvStack_20 != (void *)0x0) {
        port_op_delete(pvStack_20);
      }
      return uStack_c;
    }
  }
  return 0.0;
}





//==== 00671260 GetEnergyDensity_J__kg_00671260 ====


/* public: double __thiscall ChemicalReaction__GetEnergyDensity_J__kg(struct
   MaterialConstituent)const  */

double __thiscall
ChemicalReaction__GetEnergyDensity_J__kg(ChemicalReaction *this,MaterialConstituent param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  Darray_L_struct_MaterialConstituent_G_ *pDVar3;
  int iVar4;
  double dVar5;
  undefined **ppuStack_74;
  void *pvStack_70;
  undefined **ppuStack_64;
  void *pvStack_60;
  undefined **ppuStack_54;
  void *pvStack_50;
  undefined **ppuStack_44;
  void *pvStack_40;
  undefined **ppuStack_34;
  void *pvStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined **ppuStack_24;
  void *pvStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined8 uStack_14;
  undefined8 uStack_c;
  
  if ((this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).IsValidData == false) {
    iVar4 = (this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Size;
    uStack_c = (double)CONCAT44(iVar4 + 1,(undefined4)uStack_c);
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)&this->ChemicalReactionMemoizationHandlerInstance
               ,(int *)((int)&uStack_c + 4));
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)
                       &this->ChemicalReactionMemoizationHandlerInstance,iVar4);
    if (bVar2) {
      (this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Data
      [(this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_a5df125c, GetTotalEnthalpyOfReaction_J__mol_Clear);
    }
    pDVar3 = (Darray_L_struct_MaterialConstituent_G_ *)GetProducts(this);
    uStack_c = Material__GetMixtureSummedEnthalpyOfFormation_J__mol(pDVar3);
    pDVar3 = (Darray_L_struct_MaterialConstituent_G_ *)GetReactants(this);
    dVar5 = Material__GetMixtureSummedEnthalpyOfFormation_J__mol(pDVar3);
    uStack_c = uStack_c - dVar5;
    ppuStack_44 = (undefined **)(&vftable_15);
    if (pvStack_40 != (void *)0x0) {
      port_op_delete(pvStack_40);
    }
    pvStack_40 = (void *)0x0;
    ppuStack_44 = (undefined **)(&vftable);
    ppuStack_54 = (undefined **)(&vftable_15);
    if (pvStack_50 != (void *)0x0) {
      port_op_delete(pvStack_50);
    }
    dVar5 = uStack_c;
    uStack_14 = uStack_c;
    uStack_c = (double)CONCAT71((*(uint56_t*)((char*)&(uStack_c)+1)),1);
    (*(uint32_t*)&(uStack_14)) = SUB84(dVar5,0);
    (*(uint32_t*)((char*)&(uStack_14)+4)) = (undefined4)((ulonglong)dVar5 >> 0x20);
    pvStack_50 = (void *)0x0;
    ppuStack_54 = (undefined **)(&vftable);
    *(undefined4 *)&((this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).Data) = (undefined4)uStack_14;
    *(undefined4 *)((int)&(this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).Data + 4) =
         (*(uint32_t*)((char*)&(uStack_14)+4));
    *(undefined4 *)&((this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).IsValidData) = (undefined4)uStack_c;
    *(undefined4 *)&((*(undefined4 *)(void *)((char *)&((this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue)) + 0xc))) = (*(uint32_t*)((char*)&(uStack_14)+4));
    uStack_14 = dVar5;
    if ((this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  ppuStack_34 = (undefined **)0x0;
  pvStack_30 = (void *)0x0;
  iStack_2c = 0;
  uStack_28 = 0;
  GetProducts(this);
  iVar4 = iStack_2c;
  if ((param_1.Type != (Material *)0x0) && (0.0 < param_1.UnitlessFraction)) {
    uStack_c = (double)CONCAT44(iStack_2c + 1,(undefined4)uStack_c);
    util__Darray_struct_MaterialConstituent___SetSize
              ((Darray_L_struct_MaterialConstituent_G_ *)&ppuStack_34,(int *)((int)&uStack_c + 4));
    bVar2 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                      ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)&ppuStack_34,
                       iVar4);
    if (bVar2) {
      puVar1 = (undefined4 *)((int)pvStack_30 + iStack_2c * 0x10 + -0x10);
      *puVar1 = (undefined4)(uintptr_t)(param_1.Type);
      puVar1[1] = (*(uint32_t*)((char*)&(param_1)+4));
      puVar1[2] = (undefined4)(uintptr_t)(param_1.UnitlessFraction);
      puVar1[3] = (*(uint32_t *)((char *)&(param_1.UnitlessFraction) + 4));
    }
  }
  ppuStack_24 = (undefined **)0x0;
  pvStack_20 = (void *)0x0;
  iStack_1c = 0;
  uStack_18 = 0;
  GetProducts(this);
  iVar4 = iStack_1c;
  if ((param_1.Type != (Material *)0x0) && (0.0 < param_1.UnitlessFraction)) {
    uStack_c = (double)CONCAT44(iStack_1c + 1,(undefined4)uStack_c);
    util__Darray_struct_MaterialConstituent___SetSize
              ((Darray_L_struct_MaterialConstituent_G_ *)&ppuStack_24,(int *)((int)&uStack_c + 4));
    bVar2 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                      ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)&ppuStack_24,
                       iVar4);
    if (bVar2) {
      puVar1 = (undefined4 *)((int)pvStack_20 + iStack_1c * 0x10 + -0x10);
      *puVar1 = (undefined4)(uintptr_t)(param_1.Type);
      puVar1[1] = (*(uint32_t*)((char*)&(param_1)+4));
      puVar1[2] = (undefined4)(uintptr_t)(param_1.UnitlessFraction);
      puVar1[3] = (*(uint32_t *)((char *)&(param_1.UnitlessFraction) + 4));
    }
  }
  iVar4 = util__Unzip_class_Material_const__double_struct_MaterialConstituent__o2
                    ((Darray_L_struct_MaterialConstituent_G_ *)&ppuStack_74);
  uStack_c = util__Sum_L_double_G_((Darray_L_double_G_ *)(iVar4 + 0x10));
  dVar5 = Material__GetMixtureMolarMass_kg__mol((Darray_L_struct_MaterialConstituent_G_ *)&ppuStack_34);
  ppuStack_64 = (undefined **)(&vftable_63);
  uStack_c = -((this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).Data / (dVar5 * uStack_c));
  if (pvStack_60 != (void *)0x0) {
    port_op_delete(pvStack_60);
  }
  pvStack_60 = (void *)0x0;
  ppuStack_64 = (undefined **)(&vftable);
  ppuStack_74 = (undefined **)(&vftable_2);
  if (pvStack_70 != (void *)0x0) {
    port_op_delete(pvStack_70);
  }
  pvStack_70 = (void *)0x0;
  ppuStack_74 = (undefined **)(&vftable);
  ppuStack_24 = (undefined **)(&vftable_15);
  if (pvStack_20 != (void *)0x0) {
    port_op_delete(pvStack_20);
  }
  pvStack_20 = (void *)0x0;
  ppuStack_24 = (undefined **)(&vftable);
  ppuStack_34 = (undefined **)(&vftable_15);
  if (pvStack_30 != (void *)0x0) {
    port_op_delete(pvStack_30);
  }
  return uStack_c;
}





//==== 006714f0 GetEnergyDensity_J__kg_Memoize ====


/* public: void __thiscall ChemicalReaction__GetEnergyDensity_J__kg_Memoize(void)const  */

void __thiscall ChemicalReaction__GetEnergyDensity_J__kg_Memoize(ChemicalReaction *this)

{
  int iVar1;
  bool bVar2;
  double dVar3;
  uint in_stack_ffffffd4;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined8 uStack_c;
  
  if ((this->GetEnergyDensity_J__kg_MemoizedValue).IsValidData == false) {
    iVar1 = (this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Size;
    uStack_c = CONCAT44(iVar1 + 1,(undefined4)uStack_c);
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)&this->ChemicalReactionMemoizationHandlerInstance
               ,(int *)((int)&uStack_c + 4));
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)
                       &this->ChemicalReactionMemoizationHandlerInstance,iVar1);
    if (bVar2) {
      (this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Data
      [(this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_a5df125c, GetEnergyDensity_J__kg_Clear);
    }
    dVar3 = GetEnergyDensity_J__kg(this,*(MaterialConstituent *)cde_zextb(ZEXT416(in_stack_ffffffd4) << 0x20,16));
    uStack_c = CONCAT71((int7)((ulonglong)dVar3 >> 8),1);
    uStack_14 = SUB84(dVar3,0);
    uStack_10 = (undefined4)((ulonglong)dVar3 >> 0x20);
    *(undefined4 *)&(this->GetEnergyDensity_J__kg_MemoizedValue).Data = uStack_14;
    *(undefined4 *)((int)&(this->GetEnergyDensity_J__kg_MemoizedValue).Data + 4) = uStack_10;
    *(undefined4 *)&(this->GetEnergyDensity_J__kg_MemoizedValue).IsValidData = (undefined4)uStack_c;
    *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetEnergyDensity_J__kg_MemoizedValue)) + 0xc)) = uStack_10;
  }
  return;
}





//==== 00671630 GetExplosiveEnergyDensity_J__kg ====


/* public: double __thiscall ChemicalReaction__GetExplosiveEnergyDensity_J__kg(void)const  */

double __thiscall ChemicalReaction__GetExplosiveEnergyDensity_J__kg(ChemicalReaction *this)

{
  int iVar1;
  bool bVar2;
  double dVar3;
  uint in_stack_ffffffd4;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined8 uStack_c;
  
  if ((this->GetEnergyDensity_J__kg_MemoizedValue).IsValidData == false) {
    iVar1 = (this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Size;
    uStack_c = CONCAT44(iVar1 + 1,(undefined4)uStack_c);
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)&this->ChemicalReactionMemoizationHandlerInstance
               ,(int *)((int)&uStack_c + 4));
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)
                       &this->ChemicalReactionMemoizationHandlerInstance,iVar1);
    if (bVar2) {
      (this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Data
      [(this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_a5df125c, GetEnergyDensity_J__kg_Clear);
    }
    dVar3 = GetEnergyDensity_J__kg(this,*(MaterialConstituent *)cde_zextb(ZEXT416(in_stack_ffffffd4) << 0x20,16));
    uStack_c = CONCAT71((int7)((ulonglong)dVar3 >> 8),1);
    uStack_14 = SUB84(dVar3,0);
    uStack_10 = (undefined4)((ulonglong)dVar3 >> 0x20);
    *(undefined4 *)&(this->GetEnergyDensity_J__kg_MemoizedValue).Data = uStack_14;
    *(undefined4 *)((int)&(this->GetEnergyDensity_J__kg_MemoizedValue).Data + 4) = uStack_10;
    *(undefined4 *)&(this->GetEnergyDensity_J__kg_MemoizedValue).IsValidData = (undefined4)uStack_c;
    *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetEnergyDensity_J__kg_MemoizedValue)) + 0xc)) = uStack_10;
    if ((this->GetEnergyDensity_J__kg_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  return (this->GetEnergyDensity_J__kg_MemoizedValue).Data;
}





//==== 006718d0 GetFlameSpeed_m__s_006718d0 ====


/* public: double __thiscall ChemicalReaction__GetFlameSpeed_m__s(void)const  */

double __thiscall ChemicalReaction__GetFlameSpeed_m__s(ChemicalReaction *this)

{
  double dVar1;
  uint in_stack_fffffff4;
  
  dVar1 = GetLaminarFlameSpeed_m__s(this,*(MaterialConstituent *)cde_zextb(ZEXT416(in_stack_fffffff4) << 0x20,16));
}





//==== 006718f0 GetFlameTemperature_K_006718f0 ====


/* public: double __thiscall ChemicalReaction__GetFlameTemperature_K(void)const  */

double __thiscall ChemicalReaction__GetFlameTemperature_K(ChemicalReaction *this)

{
  int iVar1;
  bool bVar2;
  Darray_L_struct_MaterialConstituent_G_ *pDVar3;
  code *pcVar4;
  double dVar5;
  uint in_stack_ffffffc4;
  void *pvStack_20;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined8 uStack_c;
  
  if ((this->GetAdiabaticFlameTemperature_K_MemoizedValue).IsValidData == false) {
    iVar1 = (this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Size;
    uStack_c = (double)CONCAT44(iVar1 + 1,(undefined4)uStack_c);
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)&this->ChemicalReactionMemoizationHandlerInstance
               ,(int *)((int)&uStack_c + 4));
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)
                       &this->ChemicalReactionMemoizationHandlerInstance,iVar1);
    if (bVar2) {
      (this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Data
      [(this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_a5df125c, GetAdiabaticFlameTemperature_K_Clear);
    }
    pcVar4 = DebugBreak_exref;
    if ((this->GetEnergyDensity_J__kg_MemoizedValue).IsValidData == false) {
      iVar1 = (this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Size;
      uStack_c = (double)CONCAT44(iVar1 + 1,(undefined4)uStack_c);
      util__Darray_class_util__Reflectable____SetSize
                ((Darray_L_class_util__Reflectable_P_G_ *)
                 &this->ChemicalReactionMemoizationHandlerInstance,(int *)((int)&uStack_c + 4));
      bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                        ((Darray_L_enum_GraphicsResource__Type_G_ *)
                         &this->ChemicalReactionMemoizationHandlerInstance,iVar1);
      if (bVar2) {
        (this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Data
        [(this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Size + -1] =
             CDE_PMF(pmf_a5df125c, GetEnergyDensity_J__kg_Clear);
      }
      dVar5 = GetEnergyDensity_J__kg(this,*(MaterialConstituent *)cde_zextb(ZEXT416(in_stack_ffffffc4) << 0x20,16))
      ;
      (*(uint56_t*)((char*)&(uStack_c)+1)) = (undefined7)((ulonglong)dVar5 >> 8);
      uStack_c = (double)CONCAT71((*(uint56_t*)((char*)&(uStack_c)+1)),1);
      uStack_14 = SUB84(dVar5,0);
      uStack_10 = (undefined4)((ulonglong)dVar5 >> 0x20);
      *(undefined4 *)&(this->GetEnergyDensity_J__kg_MemoizedValue).Data = uStack_14;
      *(undefined4 *)((int)&(this->GetEnergyDensity_J__kg_MemoizedValue).Data + 4) = uStack_10;
      *(undefined4 *)&(this->GetEnergyDensity_J__kg_MemoizedValue).IsValidData =
           (undefined4)uStack_c;
      *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetEnergyDensity_J__kg_MemoizedValue)) + 0xc)) = uStack_10;
      pcVar4 = DebugBreak_exref;
      if ((this->GetEnergyDensity_J__kg_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        pcVar4 = DebugBreak_exref;
        DebugBreak();
      }
    }
    pDVar3 = (Darray_L_struct_MaterialConstituent_G_ *)GetProducts(this);
    uStack_c = Material__GetMixtureSpecificHeat_J__kg_K(pDVar3);
    uStack_c = (this->GetEnergyDensity_J__kg_MemoizedValue).Data / uStack_c;
    if (pvStack_20 != (void *)0x0) {
      port_op_delete(pvStack_20);
    }
    dVar5 = uStack_c;
    uStack_c = (double)CONCAT71((*(uint56_t*)((char*)&(uStack_c)+1)),1);
    uStack_14 = SUB84(dVar5,0);
    uStack_10 = (undefined4)((ulonglong)dVar5 >> 0x20);
    *(undefined4 *)&(this->GetAdiabaticFlameTemperature_K_MemoizedValue).Data = uStack_14;
    *(undefined4 *)((int)&(this->GetAdiabaticFlameTemperature_K_MemoizedValue).Data + 4) = uStack_10
    ;
    *(undefined4 *)&((this->GetAdiabaticFlameTemperature_K_MemoizedValue).IsValidData) = (undefined4)uStack_c;
    *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetAdiabaticFlameTemperature_K_MemoizedValue)) + 0xc)) = uStack_10;
    if ((this->GetAdiabaticFlameTemperature_K_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      (*pcVar4)();
    }
  }
  return (this->GetAdiabaticFlameTemperature_K_MemoizedValue).Data;
}





//==== 00671a70 GetFlameWidth_m_00671a70 ====


/* public: double __thiscall ChemicalReaction__GetFlameWidth_m(void)const  */

double __thiscall ChemicalReaction__GetFlameWidth_m(ChemicalReaction *this)

{
  double dVar1;
  uint in_stack_fffffff4;
  
  dVar1 = GetLaminarFlameWidth_m(this,*(MaterialConstituent *)cde_zextb(ZEXT416(in_stack_fffffff4) << 0x20,16));
}





//==== 00671a90 GetGibbsEnergyOfReaction_J__mol ====


/* public: double  DissociationReaction__GetGibbsEnergyOfReaction_J__mol(class Material
   const *,double)const  */

double 
DissociationReaction__GetGibbsEnergyOfReaction_J__mol
          (DissociationReaction *this,Material *param_1,double param_2)

{
  double dVar1;
  double dVar2;
  Darray_L_struct_MaterialConstituent_G_ *pDVar3;
  double dVar4;
  double dVar5;
  undefined4 in_stack_00000008;
  void *pvStack_30;
  void *pvStack_20;
  
  dVar1 = param_1->MeltingPoint_K;
  pDVar3 = (Darray_L_struct_MaterialConstituent_G_ *)GetProducts(this);
  dVar4 = Material__GetMixtureSummedGibbsFreeEnergyOfFormation_J__mol(pDVar3);
  if (pvStack_20 != (void *)0x0) {
    port_op_delete(pvStack_20);
  }
  dVar2 = param_1->GibbsFreeEnergyOfFormation_kJ__mol;
  pDVar3 = (Darray_L_struct_MaterialConstituent_G_ *)GetProducts(this);
  dVar5 = Material__GetMixtureSummedEnthalpyOfFormation_J__mol(pDVar3);
  if (pvStack_30 != (void *)0x0) {
    port_op_delete(pvStack_30);
  }
  return ((1.0 / (double)CONCAT44((*(uint32_t*)&(param_2)),in_stack_00000008) - 0.0033540164346805303) *
          (dVar5 - dVar2 * 1000.0) + (dVar4 - dVar1 * 1000.0) / 298.15) *
         (double)CONCAT44((*(uint32_t*)&(param_2)),in_stack_00000008);
}





//==== 00671fc0 GetNonStoichiometricAdiabaticFlameTemperature_K ====


/* public: double 
   ChemicalReaction__GetNonStoichiometricAdiabaticFlameTemperature_K(double)const  */

double 
ChemicalReaction__GetNonStoichiometricAdiabaticFlameTemperature_K
          (ChemicalReaction *this,double param_1)

{
  bool bVar1;
  Darray_L_struct_MaterialConstituent_G_ *pDVar2;
  int iVar3;
  double dVar4;
  undefined **ppuStack_64;
  void *pvStack_60;
  undefined **ppuStack_54;
  void *pvStack_50;
  undefined8 uStack_44;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined **ppuStack_34;
  void *pvStack_30;
  undefined **ppuStack_24;
  void *pvStack_20;
  undefined **ppuStack_14;
  void *pvStack_10;
  
  GetNonStoichiometricProducts(this,(double)CONCAT44(SUB84(param_1,0),&ppuStack_14));
  if ((this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).IsValidData == false) {
    iVar3 = (this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Size;
    param_1 = (double)CONCAT44(iVar3 + 1,(*(uint32_t*)&(param_1)));
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)&this->ChemicalReactionMemoizationHandlerInstance
               ,(int *)((int)&param_1 + 4));
    bVar1 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)
                       &this->ChemicalReactionMemoizationHandlerInstance,iVar3);
    if (bVar1) {
      (this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Data
      [(this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_a5df125c, GetTotalEnthalpyOfReaction_J__mol_Clear);
    }
    pDVar2 = (Darray_L_struct_MaterialConstituent_G_ *)GetProducts(this);
    param_1 = Material__GetMixtureSummedEnthalpyOfFormation_J__mol(pDVar2);
    pDVar2 = (Darray_L_struct_MaterialConstituent_G_ *)GetReactants(this);
    dVar4 = Material__GetMixtureSummedEnthalpyOfFormation_J__mol(pDVar2);
    param_1 = param_1 - dVar4;
    ppuStack_24 = (undefined **)(&vftable_15);
    if (pvStack_20 != (void *)0x0) {
      port_op_delete(pvStack_20);
    }
    pvStack_20 = (void *)0x0;
    ppuStack_24 = (undefined **)(&vftable);
    ppuStack_34 = (undefined **)(&vftable_15);
    if (pvStack_30 != (void *)0x0) {
      port_op_delete(pvStack_30);
    }
    uStack_44 = param_1;
    dVar4 = uStack_44;
    uStack_3c = CONCAT31((*(uint24_t*)((char*)&(uStack_3c)+1)),1);
    (*(uint32_t*)&(uStack_44)) = SUB84(param_1,0);
    (*(uint32_t*)((char*)&(uStack_44)+4)) = (undefined4)((ulonglong)param_1 >> 0x20);
    pvStack_30 = (void *)0x0;
    ppuStack_34 = (undefined **)(&vftable);
    *(undefined4 *)&((this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).Data) = (undefined4)uStack_44;
    *(undefined4 *)((int)&(this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).Data + 4) =
         (*(uint32_t*)((char*)&(uStack_44)+4));
    *(undefined4 *)&(this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).IsValidData = uStack_3c;
    *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue)) + 0xc)) = uStack_38;
    uStack_44 = dVar4;
    if ((this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  iVar3 = util__Unzip_class_Material_const__double_struct_MaterialConstituent__o2
                    ((Darray_L_struct_MaterialConstituent_G_ *)&ppuStack_64);
  param_1 = util__Sum_L_double_G_((Darray_L_double_G_ *)(iVar3 + 0x10));
  dVar4 = Material__GetMixtureMolarMass_kg__mol((Darray_L_struct_MaterialConstituent_G_ *)&ppuStack_14);
  ppuStack_54 = (undefined **)(&vftable_63);
  param_1 = -((this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).Data / (dVar4));
  if (pvStack_50 != (void *)0x0) {
    port_op_delete(pvStack_50);
  }
  pvStack_50 = (void *)0x0;
  ppuStack_54 = (undefined **)(&vftable);
  ppuStack_64 = (undefined **)(&vftable_2);
  if (pvStack_60 != (void *)0x0) {
    port_op_delete(pvStack_60);
  }
  pvStack_60 = (void *)0x0;
  ppuStack_64 = (undefined **)(&vftable);
  dVar4 = Material__GetMixtureSpecificHeat_J__kg_K
                    ((Darray_L_struct_MaterialConstituent_G_ *)&ppuStack_14);
  param_1 = param_1 / dVar4;
  ppuStack_14 = (undefined **)(&vftable_15);
  if (pvStack_10 != (void *)0x0) {
    port_op_delete(pvStack_10);
  }
  return param_1;
}





//==== 006721a0 GetNonStoichiometricMassRatio ====

/* public: double __thiscall ChemicalReaction__GetNonStoichiometricMassRatio(double)const  */

double __thiscall
ChemicalReaction__GetNonStoichiometricMassRatio(ChemicalReaction *this,double param_1)

{
  Material *pMVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  double dVar5;
  double dVar6;
  undefined4 local_18;
  undefined4 local_14;
  ChemicalReaction *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = this;
  iVar2 = (**(code **)((this->Reactants)._pad_0x0_0 + 0xc))();
  if (iVar2 != 2) {
    return 0.0;
  }
  local_c = 0;
  local_8 = 0;
  *(uint32_t *)&local_18 = 1;
  local_14 = 1;
  puVar3 = (undefined4 *)(**(code **)(this->Reactants)._pad_0x0_0)(&local_8);
  pMVar1 = (Material *)*puVar3;
  piVar4 = (int *)(**(code **)(this->ReactantCounts)._pad_0x0_0)(&local_c);
  iVar2 = *piVar4;
  dVar5 = Material__GetMolarMass_kg__mol(pMVar1);
  puVar3 = (undefined4 *)(**(code **)(local_10->Reactants)._pad_0x0_0)(&local_14);
  pMVar1 = (Material *)*puVar3;
  piVar4 = (int *)(**(code **)(this->ReactantCounts)._pad_0x0_0)(&local_18);
  dVar6 = Material__GetMolarMass_kg__mol(pMVar1);
  return (dVar5 * (double)iVar2 * param_1) / (dVar6 * (double)*piVar4);
}

//==== 00672260 GetNonStoichiometricProducts ====

/* public: class util__Darray_L_structMaterialConstituent_G_ __thiscall
   ChemicalReaction__GetNonStoichiometricProducts(double)const  */

Darray_L_MaterialConstituent_G_ * __thiscall
ChemicalReaction__GetNonStoichiometricProducts
          (ChemicalReaction *this,Darray_L_MaterialConstituent_G_ *__return_storage_ptr__,double param_1
          )

{
  Darray_L_Material__P_G_ *pDVar1;
  MaterialConstituent *pMVar2;
  int iVar3;
  int iVar4;
  Material *pMVar5;
  Darray_L_MaterialConstituent_G_ *this_00;
  bool bVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 in_stack_00000008;
  undefined4 uStack_20;
  
  pDVar1 = &this->Reactants;
  iVar7 = (**(code **)((this->Reactants)._pad_0x0_0 + 0xc))();
  if (iVar7 != 1) {
    iVar7 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
    if (iVar7 != 2) {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\chemicalreactions.cpp"
                      ,0x56,"Reactants.Num() == 1 || Reactants.Num() == 2",(char *)0x0);
      DebugBreak();
    }
  }
  this_00 = __return_storage_ptr__;
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (MaterialConstituent *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  GetProducts(this,__return_storage_ptr__);
  iVar7 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
  if (iVar7 == 2) {
    __return_storage_ptr__ = (Darray_L_MaterialConstituent_G_ *)0x0;
    piVar8 = (int *)(**(code **)(this->ReactantCounts)._pad_0x0_0)(&__return_storage_ptr__);
    dVar10 = (double)CONCAT44((*(uint32_t*)&(param_1)),in_stack_00000008) - 1.0;
    dVar12 = 0.0;
    if (0.0 <= dVar10) {
      dVar12 = dVar10;
    }
    iVar7 = *piVar8;
    __return_storage_ptr__ = (Darray_L_MaterialConstituent_G_ *)0x1;
    piVar8 = (int *)(**(code **)(this->ReactantCounts)._pad_0x0_0)(&__return_storage_ptr__);
    dVar11 = 1.0 / (double)CONCAT44((*(uint32_t*)&(param_1)),in_stack_00000008) - 1.0;
    dVar10 = 0.0;
    if (0.0 <= dVar11) {
      dVar10 = dVar11;
    }
    iVar3 = *piVar8;
    if ((dVar12 * (double)iVar7 != 0.0) && (dVar10 * (double)iVar3 != 0.0)) {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\chemicalreactions.cpp"
                      ,0x5c,"Reactant1ExcessNumber == 0 || Reactant2ExcessNumber == 0",(char *)0x0);
      DebugBreak();
    }
    __return_storage_ptr__ = (Darray_L_MaterialConstituent_G_ *)0x0;
    puVar9 = (undefined4 *)(**(code **)pDVar1->_pad_0x0_0)(&__return_storage_ptr__);
    iVar4 = this_00->Size;
    pMVar5 = (Material *)*puVar9;
    (*(uint32_t*)&(param_1)) = iVar4 + 1;
    util__Darray_L_MaterialConstituent_G___SetSize(this_00,(int *)&param_1);
    bVar6 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                      ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar4);
    if (bVar6) {
      pMVar2 = this_00->Data + this_00->Size + -1;
      pMVar2->Type = pMVar5;
      *(undefined4 *)&(*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar2) + 0x4)) = uStack_20;
      pMVar2->UnitlessFraction = dVar12 * (double)iVar7;
    }
    __return_storage_ptr__ = (Darray_L_MaterialConstituent_G_ *)0x1;
    puVar9 = (undefined4 *)(**(code **)pDVar1->_pad_0x0_0)(&__return_storage_ptr__);
    iVar7 = this_00->Size;
    pMVar5 = (Material *)*puVar9;
    (*(uint32_t*)&(param_1)) = iVar7 + 1;
    util__Darray_L_MaterialConstituent_G___SetSize(this_00,(int *)&param_1);
    bVar6 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                      ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar7);
    if (bVar6) {
      pMVar2 = this_00->Data + this_00->Size + -1;
      pMVar2->Type = pMVar5;
      *(undefined4 *)&(*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar2) + 0x4)) = uStack_20;
      pMVar2->UnitlessFraction = dVar10 * (double)iVar3;
      return this_00;
    }
  }
  return this_00;
}

//==== 00672430 GetProducts_00672430 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: class util__Darray_L_structMaterialConstituent_G_ __thiscall
   ChemicalReaction__GetProducts(void)const  */

Darray_L_MaterialConstituent_G_ * __thiscall
ChemicalReaction__GetProducts
          (ChemicalReaction *this,Darray_L_MaterialConstituent_G_ *__return_storage_ptr__)

{
  undefined8 stack0xfffffffc;
  Darray_L_int_G_ *pDVar1;
  undefined4 uVar2;
  double *pdVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  Darray_L_Material__P_G_ *pDVar9;
  Darray_L_double_G_ local_34;
  undefined **local_24;
  void *pvStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  ChemicalReaction *local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(uint32_t *)&local_34 = *(uint32_t *)&((*(Darray_L_double_G_ *)cde_zextb(0,16)));
  pDVar1 = &this->ProductCounts;
  local_14 = this;
  iVar6 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
  util__Darray_double___Darray_double(&local_34,iVar6);
  local_10 = 0;
  iVar6 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
  if (local_10 < iVar6) {
    do {
      piVar7 = (int *)(**(code **)pDVar1->_pad_0x0_0)(&local_10);
      iVar4 = local_34.Size;
      iVar6 = *piVar7;
      local_c = local_34.Size + 1;
      util__Darray_double___SetSize(&local_34,&local_c);
      bVar5 = util__Darray_double___CheckSize(&local_34,iVar4);
      if (bVar5) {
        local_34.Data[local_34.Size + -1] = (double)iVar6;
      }
      local_10 = local_10 + 1;
      iVar6 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
    } while (local_10 < iVar6);
  }
  pDVar9 = &local_14->Products;
  *(uint32_t *)&local_24 = (uint32_t)(uintptr_t)((undefined **)0x0);
  pvStack_20 = (void *)0x0;
  iStack_1c = 0;
  uStack_18 = 0;
  iVar6 = (**(code **)(pDVar9->_pad_0x0_0 + 0xc))();
  util__Darray_L_Manager_P_G___Darray_L_Manager_P_G_((Darray_L_Manager_P_G_ *)&local_24,iVar6);
  local_c = 0;
  iVar6 = (**(code **)(pDVar9->_pad_0x0_0 + 0xc))();
  if (local_c < iVar6) {
    do {
      puVar8 = (undefined4 *)(**(code **)pDVar9->_pad_0x0_0)(&local_c);
      iVar6 = iStack_1c;
      uVar2 = *puVar8;
      local_14 = (ChemicalReaction *)(iStack_1c + 1);
      util__Darray_L_util__Reflectable_P_G___SetSize
                ((Darray_L_util__Reflectable_P_G_ *)&local_24,(int *)&local_14);
      bVar5 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                        ((Darray_L_GraphicsResource__Type_G_ *)&local_24,iVar6);
      if (bVar5) {
        *(undefined4 *)((int)pvStack_20 + iStack_1c * 4 + -4) = uVar2;
      }
      local_c = local_c + 1;
      iVar6 = (**(code **)(pDVar9->_pad_0x0_0 + 0xc))();
    } while (local_c < iVar6);
  }
  util__Zip_struct_MaterialConstituent_class_Material_const__double
            (__return_storage_ptr__,(Darray_L_Material_const_P_G_ *)&local_24,&local_34);
  *(uint32_t *)&local_24 = (uint32_t)(uintptr_t)(&vftable_2);
  if (pvStack_20 != (void *)0x0) {
    port_op_delete(pvStack_20);
  }
  pdVar3 = local_34.Data;
  pvStack_20 = (void *)0x0;
  *(uint32_t *)&local_24 = (uint32_t)(uintptr_t)(&vftable);
  local_34._pad_0x0_0 = (int)&vftable_63;
  if (pdVar3 != (double *)0x0) {
    port_op_delete(pdVar3);
  }
  return __return_storage_ptr__;
}

//==== 006725b0 GetProducts_006725b0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: class util__Darray_L_structMaterialConstituent_G_ __thiscall
   DissociationReaction__GetProducts(void)const  */

Darray_L_MaterialConstituent_G_ * __thiscall
DissociationReaction__GetProducts
          (DissociationReaction *this,Darray_L_MaterialConstituent_G_ *__return_storage_ptr__)

{
  undefined8 stack0xfffffffc;
  Darray_L_Material__P_G_ *pDVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_20;
  undefined **local_1c;
  void *pvStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pDVar1 = &this->Products;
  *(uint32_t *)&local_1c = (uint32_t)(uintptr_t)((undefined **)0x0);
  pvStack_18 = (void *)0x0;
  iStack_14 = 0;
  uStack_10 = 0;
  iVar4 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
  util__Darray_L_Manager_P_G___Darray_L_Manager_P_G_((Darray_L_Manager_P_G_ *)&local_1c,iVar4);
  local_c = 0;
  iVar4 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
  if (local_c < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)pDVar1->_pad_0x0_0)(&local_c);
      iVar4 = iStack_14;
      uVar2 = *puVar5;
      local_20 = iStack_14 + 1;
      util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)&local_1c,&local_20);
      bVar3 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                        ((Darray_L_GraphicsResource__Type_G_ *)&local_1c,iVar4);
      if (bVar3) {
        *(undefined4 *)((int)pvStack_18 + iStack_14 * 4 + -4) = uVar2;
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
    } while (local_c < iVar4);
  }
  util__Zip_struct_MaterialConstituent_class_Material_const__double
            (__return_storage_ptr__,(Darray_L_Material_const_P_G_ *)&local_1c,&this->ProductCounts);
  *(uint32_t *)&local_1c = (uint32_t)(uintptr_t)(&vftable_2);
  if (pvStack_18 != (void *)0x0) {
    port_op_delete(pvStack_18);
  }
  return __return_storage_ptr__;
}

//==== 00672690 GetProductsByMassPercent ====


/* public: class util__Darray_L_structMaterialConstituent_G_ __thiscall
   ChemicalReaction__GetProductsByMassPercent(void)const  */

Darray_L_MaterialConstituent_G_ * __thiscall ChemicalReaction__GetProductsByMassPercent(ChemicalReaction *this,Darray_L_MaterialConstituent_G_ *param_rv)

{
  undefined8 stack0xfffffffc;
  undefined4 uVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  double dVar6;
  Darray_L_struct_MaterialConstituent_G_ *in_stack_00000004;
  void *pvStack_3c;
  void *pvStack_2c;
  double dStack_20;
  ChemicalReaction *pCStack_18;
  double dStack_14;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pCStack_18 = this;
  piVar3 = (int *)GetProducts(this);
  iStack_c = 0;
  iVar4 = (**(code **)(uintptr_t)(*piVar3 + 0xc))();
  if (iStack_c < iVar4) {
    dStack_20 = 0.0;
    do {
      puVar5 = (undefined4 *)(**(code **)*piVar3)(&iStack_c);
      dVar6 = Material__GetMolarMass_kg__mol((Material *)*puVar5);
      iStack_c = iStack_c + 1;
      dStack_20 = dVar6 * *(double *)(puVar5 + 2) + dStack_20;
      iVar4 = (**(code **)(uintptr_t)(*piVar3 + 0xc))();
      this = pCStack_18;
      dStack_14 = dStack_20;
    } while (iStack_c < iVar4);
  }
  else {
    dStack_14 = 0.0;
  }
  if (pvStack_3c != (void *)0x0) {
    port_op_delete(pvStack_3c);
  }
  piVar3 = (int *)GetProducts(this);
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  iVar4 = (**(code **)(uintptr_t)(*piVar3 + 0xc))();
  util__Darray_struct_MaterialConstituent___Darray_struct_MaterialConstituent
            (in_stack_00000004,iVar4);
  iStack_c = 0;
  iVar4 = (**(code **)(uintptr_t)(*piVar3 + 0xc))();
  if (iStack_c < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)*piVar3)(&iStack_c);
      dVar6 = Material__GetMolarMass_kg__mol((Material *)*puVar5);
      uVar1 = *puVar5;
      iVar4 = *(int *)(in_stack_00000004 + 8);
      dVar6 = (dVar6 * *(double *)(puVar5 + 2)) / dStack_14;
      pCStack_18 = (ChemicalReaction *)(iVar4 + 1);
      util__Darray_struct_MaterialConstituent___SetSize(in_stack_00000004,(int *)&pCStack_18);
      bVar2 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                        ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)
                         in_stack_00000004,iVar4);
      if (bVar2) {
        puVar5 = (undefined4 *)
                 (*(int *)(in_stack_00000004 + 4) + -0x10 + *(int *)(in_stack_00000004 + 8) * 0x10);
        *puVar5 = uVar1;
        puVar5[1] = (undefined4)(uintptr_t)(pvStack_3c);
        *(double *)(puVar5 + 2) = dVar6;
      }
      iStack_c = iStack_c + 1;
      iVar4 = (**(code **)(uintptr_t)(*piVar3 + 0xc))();
    } while (iStack_c < iVar4);
  }
  if (pvStack_2c != (void *)0x0) {
    port_op_delete(pvStack_2c);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return param_rv;
}





//==== 00672800 GetProductsWithDelay ====


/* public: class util__Darray_L_structMaterialConstituent_G_ __thiscall
   ChemicalReaction__GetProductsWithDelay(struct MaterialConstituent const &)const  */

MaterialConstituent * __thiscall
ChemicalReaction__GetProductsWithDelay(ChemicalReaction *this,MaterialConstituent *param_1)

{
  MaterialConstituent *in_stack_00000008;
  
  param_1->Type = (Material *)0x0;
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)(uintptr_t)(param_1) + 0x4)) = 0;
  *(undefined4 *)&param_1->UnitlessFraction = 0;
  *(undefined4 *)((int)&param_1->UnitlessFraction + 4) = 0;
  GetProducts(this);
  if ((in_stack_00000008->Type != (Material *)0x0) && (0.0 < in_stack_00000008->UnitlessFraction)) {
    util__Darray_struct_MaterialConstituent___Add
              ((Darray_L_struct_MaterialConstituent_G_ *)param_1,in_stack_00000008);
  }
  return param_1;
}





//==== 00672840 GetRateConstant__s ====


/* public: double __thiscall ChemicalReaction__GetRateConstant__s(struct MaterialConstituent)const
    */

double __thiscall
ChemicalReaction__GetRateConstant__s(ChemicalReaction *this,MaterialConstituent param_1)

{
  undefined4 *puVar1;
  int iVar2;
  MaterialConstituent MVar3;
  bool bVar4;
  Darray_L_struct_MaterialConstituent_G_ *pDVar5;
  undefined4 uVar6;
  uint uVar7;
  double dVar8;
  undefined4 in_stack_ffffffa8;
  undefined4 uStack_40;
  void *pvStack_30;
  undefined **ppuStack_24;
  void *pvStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined8 uStack_14;
  undefined8 uStack_c;
  
  if ((this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).IsValidData == false) {
    iVar2 = (this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Size;
    uStack_c = (double)CONCAT44(iVar2 + 1,(undefined4)uStack_c);
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)&this->ChemicalReactionMemoizationHandlerInstance
               ,(int *)((int)&uStack_c + 4));
    bVar4 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)
                       &this->ChemicalReactionMemoizationHandlerInstance,iVar2);
    if (bVar4) {
      (this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Data
      [(this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_a5df125c, GetTotalEnthalpyOfReaction_J__mol_Clear);
    }
    pDVar5 = (Darray_L_struct_MaterialConstituent_G_ *)GetProducts(this);
    uStack_c = Material__GetMixtureSummedEnthalpyOfFormation_J__mol(pDVar5);
    pDVar5 = (Darray_L_struct_MaterialConstituent_G_ *)GetReactants(this);
    dVar8 = Material__GetMixtureSummedEnthalpyOfFormation_J__mol(pDVar5);
    uStack_c = uStack_c - dVar8;
    ppuStack_24 = (undefined **)(&vftable_15);
    if (pvStack_20 != (void *)0x0) {
      port_op_delete(pvStack_20);
    }
    pvStack_20 = (void *)0x0;
    ppuStack_24 = (undefined **)(&vftable);
    if (pvStack_30 != (void *)0x0) {
      port_op_delete(pvStack_30);
    }
    dVar8 = uStack_c;
    uStack_14 = uStack_c;
    uStack_c = (double)CONCAT71((*(uint56_t*)((char*)&(uStack_c)+1)),1);
    (*(uint32_t*)&(uStack_14)) = SUB84(dVar8,0);
    (*(uint32_t*)((char*)&(uStack_14)+4)) = (undefined4)((ulonglong)dVar8 >> 0x20);
    *(undefined4 *)&((this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).Data) = (undefined4)uStack_14;
    *(undefined4 *)((int)&(this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).Data + 4) =
         (*(uint32_t*)((char*)&(uStack_14)+4));
    *(undefined4 *)&((this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).IsValidData) = (undefined4)uStack_c;
    *(undefined4 *)&((*(undefined4 *)(void *)((char *)&((this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue)) + 0xc))) = (*(uint32_t*)((char*)&(uStack_14)+4));
    uStack_14 = dVar8;
    if ((this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).IsValidData == false) {
      in_stack_ffffffa8 = 0x13;
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  if (0.0 < (this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).Data ||
      (this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).Data == 0.0) {
    return 0.0;
  }
  uStack_c = param_1.UnitlessFraction;
  (*(uint32_t*)((char*)&(MVar3)+4)) = in_stack_ffffffa8;
  MVar3.Type = param_1.Type;
  MVar3.UnitlessFraction = param_1.UnitlessFraction;
  (*(uint32_t *)((char *)&(MVar3.UnitlessFraction) + 4)) = (*(uint32_t *)((char *)&(param_1.UnitlessFraction) + 4));
  dVar8 = GetEnergyDensity_J__kg(this,MVar3);
  ppuStack_24 = (undefined **)0x0;
  pvStack_20 = (void *)0x0;
  iStack_1c = 0;
  uStack_18 = 0;
  GetProducts(this);
  iVar2 = iStack_1c;
  if ((param_1.Type != (Material *)0x0) && (0.0 < uStack_c)) {
    uStack_c = (double)CONCAT44(iStack_1c + 1,(undefined4)uStack_c);
    util__Darray_struct_MaterialConstituent___SetSize
              ((Darray_L_struct_MaterialConstituent_G_ *)&ppuStack_24,(int *)((int)&uStack_c + 4));
    bVar4 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                      ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)&ppuStack_24,
                       iVar2);
    if (bVar4) {
      puVar1 = (undefined4 *)((int)pvStack_20 + iStack_1c * 0x10 + -0x10);
      *puVar1 = (undefined4)(uintptr_t)(param_1.Type);
      puVar1[1] = uStack_40;
      puVar1[2] = (undefined4)(uintptr_t)(param_1.UnitlessFraction);
      puVar1[3] = (*(uint32_t *)((char *)&(param_1.UnitlessFraction) + 4));
    }
  }
  uStack_c = Material__GetMixtureSpecificHeat_J__kg_K
                       ((Darray_L_struct_MaterialConstituent_G_ *)&ppuStack_24);
  uStack_c = dVar8 / uStack_c;
  ppuStack_24 = (undefined **)(&vftable_15);
  if (pvStack_20 != (void *)0x0) {
    port_op_delete(pvStack_20);
  }
  dVar8 = (this->ActivationEnergy_kJ__mol * 1000.0) / (uStack_c * 8.3144621);
  uVar6 = SUB84(dVar8,0);
  uVar7 = (uint)((ulonglong)dVar8 >> 0x20) ^ 0x80000000;
  libm_sse2_exp_precise(0.0);
  return (double)CONCAT44(uVar7,uVar6) *
         ((Physics__BoltzmannConstant_J__K * uStack_c) / 6.62606957e-34);
}





//==== 00672b50 GetReactants ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: class util__Darray_L_structMaterialConstituent_G_ __thiscall
   ChemicalReaction__GetReactants(void)const  */

Darray_L_MaterialConstituent_G_ * __thiscall
ChemicalReaction__GetReactants
          (ChemicalReaction *this,Darray_L_MaterialConstituent_G_ *__return_storage_ptr__)

{
  undefined8 stack0xfffffffc;
  Darray_L_int_G_ *pDVar1;
  undefined4 uVar2;
  double *pdVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  Darray_L_Material__P_G_ *pDVar9;
  Darray_L_double_G_ local_34;
  undefined **local_24;
  void *pvStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  ChemicalReaction *local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(uint32_t *)&local_34 = *(uint32_t *)&((*(Darray_L_double_G_ *)cde_zextb(0,16)));
  pDVar1 = &this->ReactantCounts;
  local_14 = this;
  iVar6 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
  util__Darray_double___Darray_double(&local_34,iVar6);
  local_10 = 0;
  iVar6 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
  if (local_10 < iVar6) {
    do {
      piVar7 = (int *)(**(code **)pDVar1->_pad_0x0_0)(&local_10);
      iVar4 = local_34.Size;
      iVar6 = *piVar7;
      local_c = local_34.Size + 1;
      util__Darray_double___SetSize(&local_34,&local_c);
      bVar5 = util__Darray_double___CheckSize(&local_34,iVar4);
      if (bVar5) {
        local_34.Data[local_34.Size + -1] = (double)iVar6;
      }
      local_10 = local_10 + 1;
      iVar6 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
    } while (local_10 < iVar6);
  }
  pDVar9 = &local_14->Reactants;
  *(uint32_t *)&local_24 = (uint32_t)(uintptr_t)((undefined **)0x0);
  pvStack_20 = (void *)0x0;
  iStack_1c = 0;
  uStack_18 = 0;
  iVar6 = (**(code **)(pDVar9->_pad_0x0_0 + 0xc))();
  util__Darray_L_Manager_P_G___Darray_L_Manager_P_G_((Darray_L_Manager_P_G_ *)&local_24,iVar6);
  local_c = 0;
  iVar6 = (**(code **)(pDVar9->_pad_0x0_0 + 0xc))();
  if (local_c < iVar6) {
    do {
      puVar8 = (undefined4 *)(**(code **)pDVar9->_pad_0x0_0)(&local_c);
      iVar6 = iStack_1c;
      uVar2 = *puVar8;
      local_14 = (ChemicalReaction *)(iStack_1c + 1);
      util__Darray_L_util__Reflectable_P_G___SetSize
                ((Darray_L_util__Reflectable_P_G_ *)&local_24,(int *)&local_14);
      bVar5 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                        ((Darray_L_GraphicsResource__Type_G_ *)&local_24,iVar6);
      if (bVar5) {
        *(undefined4 *)((int)pvStack_20 + iStack_1c * 4 + -4) = uVar2;
      }
      local_c = local_c + 1;
      iVar6 = (**(code **)(pDVar9->_pad_0x0_0 + 0xc))();
    } while (local_c < iVar6);
  }
  util__Zip_struct_MaterialConstituent_class_Material_const__double
            (__return_storage_ptr__,(Darray_L_Material_const_P_G_ *)&local_24,&local_34);
  *(uint32_t *)&local_24 = (uint32_t)(uintptr_t)(&vftable_2);
  if (pvStack_20 != (void *)0x0) {
    port_op_delete(pvStack_20);
  }
  pdVar3 = local_34.Data;
  pvStack_20 = (void *)0x0;
  *(uint32_t *)&local_24 = (uint32_t)(uintptr_t)(&vftable);
  local_34._pad_0x0_0 = (int)&vftable_63;
  if (pdVar3 != (double *)0x0) {
    port_op_delete(pdVar3);
  }
  return __return_storage_ptr__;
}

//==== 00672cd0 GetReactantsByMassPercent ====


/* public: class util__Darray_L_structMaterialConstituent_G_ __thiscall
   ChemicalReaction__GetReactantsByMassPercent(void)const  */

void * ChemicalReaction__GetReactantsByMassPercent(ChemicalReaction *this)

{
  undefined8 stack0xfffffffc;
  undefined4 uVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  double dVar6;
  Darray_L_struct_MaterialConstituent_G_ *in_stack_00000004;
  void *pvStack_3c;
  void *pvStack_2c;
  double dStack_20;
  ChemicalReaction *pCStack_18;
  double dStack_14;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pCStack_18 = this;
  piVar3 = (int *)GetReactants(this);
  iStack_c = 0;
  iVar4 = (**(code **)(uintptr_t)(*piVar3 + 0xc))();
  if (iStack_c < iVar4) {
    dStack_20 = 0.0;
    do {
      puVar5 = (undefined4 *)(**(code **)*piVar3)(&iStack_c);
      dVar6 = Material__GetMolarMass_kg__mol((Material *)*puVar5);
      iStack_c = iStack_c + 1;
      dStack_20 = dVar6 * *(double *)(puVar5 + 2) + dStack_20;
      iVar4 = (**(code **)(uintptr_t)(*piVar3 + 0xc))();
      this = pCStack_18;
      dStack_14 = dStack_20;
    } while (iStack_c < iVar4);
  }
  else {
    dStack_14 = 0.0;
  }
  if (pvStack_3c != (void *)0x0) {
    port_op_delete(pvStack_3c);
  }
  piVar3 = (int *)GetReactants(this);
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  iVar4 = (**(code **)(uintptr_t)(*piVar3 + 0xc))();
  util__Darray_struct_MaterialConstituent___Darray_struct_MaterialConstituent
            (in_stack_00000004,iVar4);
  iStack_c = 0;
  iVar4 = (**(code **)(uintptr_t)(*piVar3 + 0xc))();
  if (iStack_c < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)*piVar3)(&iStack_c);
      dVar6 = Material__GetMolarMass_kg__mol((Material *)*puVar5);
      uVar1 = *puVar5;
      iVar4 = *(int *)(in_stack_00000004 + 8);
      dVar6 = (dVar6 * *(double *)(puVar5 + 2)) / dStack_14;
      pCStack_18 = (ChemicalReaction *)(iVar4 + 1);
      util__Darray_struct_MaterialConstituent___SetSize(in_stack_00000004,(int *)&pCStack_18);
      bVar2 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                        ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)
                         in_stack_00000004,iVar4);
      if (bVar2) {
        puVar5 = (undefined4 *)
                 (*(int *)(in_stack_00000004 + 4) + -0x10 + *(int *)(in_stack_00000004 + 8) * 0x10);
        *puVar5 = uVar1;
        puVar5[1] = (undefined4)(uintptr_t)(pvStack_3c);
        *(double *)(puVar5 + 2) = dVar6;
      }
      iStack_c = iStack_c + 1;
      iVar4 = (**(code **)(uintptr_t)(*piVar3 + 0xc))();
    } while (iStack_c < iVar4);
  }
  if (pvStack_2c != (void *)0x0) {
    port_op_delete(pvStack_2c);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return 0;
}





//==== 00672f80 GetTotalEnthalpyOfReaction_J__mol_Clear ====


/* public: void __thiscall ChemicalReaction__GetTotalEnthalpyOfReaction_J__mol_Clear(void)const  */

void __thiscall ChemicalReaction__GetTotalEnthalpyOfReaction_J__mol_Clear(ChemicalReaction *this)

{
  (this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).IsValidData = false;
  (this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).Data = 0.0;
  return;
}





//==== 00672fa0 HasGasProducts ====


/* public: bool __thiscall ChemicalReaction__HasGasProducts(void)const  */

bool __thiscall ChemicalReaction__HasGasProducts(ChemicalReaction *this)

{
  undefined8 stack0xfffffffc;
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  void *pvStack_28;
  undefined **ppuStack_1c;
  void *pvStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  ChemicalReaction *pCStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pCStack_c = this;
  piVar2 = (int *)GetProducts(this);
  ppuStack_1c = (undefined **)0x0;
  pvStack_18 = (void *)0x0;
  uStack_14 = 0;
  uStack_10 = 0;
  iVar3 = (**(code **)(uintptr_t)(*piVar2 + 0xc))();
  util__Darray_struct_MaterialConstituent___Darray_struct_MaterialConstituent
            ((Darray_L_struct_MaterialConstituent_G_ *)&ppuStack_1c,iVar3);
  FUN_0066fa60(piVar2,&pCStack_c,&ppuStack_1c);
  if (pvStack_28 != (void *)0x0) {
    port_op_delete(pvStack_28);
  }
  iVar3 = (*(code *)ppuStack_1c[3])();
  ppuStack_1c = (undefined **)(&vftable_15);
  uVar1 = 0 < iVar3;
  if (pvStack_18 != (void *)0x0) {
    port_op_delete(pvStack_18);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar1;
}





//==== 00673040 IsExplosiveComposition ====


/* public: bool __thiscall ChemicalReaction__IsExplosiveComposition(void)const  */

bool __thiscall ChemicalReaction__IsExplosiveComposition(ChemicalReaction *this)

{
  int iVar1;
  Darray_L_struct_MaterialConstituent_G_ *pDVar2;
  code *pcVar3;
  bool bVar4;
  double dVar5;
  uint in_stack_ffffffb4;
  void *pvStack_30;
  undefined4 uStack_24;
  void *pvStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined8 uStack_c;
  
  bVar4 = (this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).IsValidData == false;
  if (bVar4) {
    iVar1 = (this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Size;
    uStack_c = (double)CONCAT44(iVar1 + 1,(undefined4)uStack_c);
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)&this->ChemicalReactionMemoizationHandlerInstance
               ,(int *)((int)&uStack_c + 4));
    bVar4 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)
                       &this->ChemicalReactionMemoizationHandlerInstance,iVar1);
    if (bVar4) {
      (this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Data
      [(this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_a5df125c, GetTotalEnthalpyOfReaction_J__mol_Clear);
    }
    pDVar2 = (Darray_L_struct_MaterialConstituent_G_ *)GetProducts(this);
    uStack_c = Material__GetMixtureSummedEnthalpyOfFormation_J__mol(pDVar2);
    pDVar2 = (Darray_L_struct_MaterialConstituent_G_ *)GetReactants(this);
    dVar5 = Material__GetMixtureSummedEnthalpyOfFormation_J__mol(pDVar2);
    uStack_c = uStack_c - dVar5;
    if (pvStack_20 != (void *)0x0) {
      port_op_delete(pvStack_20);
    }
    if (pvStack_30 != (void *)0x0) {
      port_op_delete(pvStack_30);
    }
    dVar5 = uStack_c;
    uStack_c = (double)CONCAT71((*(uint56_t*)((char*)&(uStack_c)+1)),1);
    uStack_14 = SUB84(dVar5,0);
    uStack_10 = (undefined4)((ulonglong)dVar5 >> 0x20);
    pvStack_30 = (void *)0x0;
    *(undefined4 *)&(this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).Data = uStack_14;
    *(undefined4 *)((int)&(this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).Data + 4) =
         uStack_10;
    *(undefined4 *)&((this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).IsValidData) = (undefined4)uStack_c;
    *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue)) + 0xc)) = uStack_10;
    bVar4 = (this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).IsValidData == false;
  }
  if (bVar4) {
    in_stack_ffffffb4 = 0x13;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if ((this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).Data <= 0.0 &&
      (this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).Data != 0.0) {
    if ((this->GetAdiabaticFlameTemperature_K_MemoizedValue).IsValidData == false) {
      iVar1 = (this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Size;
      uStack_c = (double)CONCAT44(iVar1 + 1,(undefined4)uStack_c);
      util__Darray_class_util__Reflectable____SetSize
                ((Darray_L_class_util__Reflectable_P_G_ *)
                 &this->ChemicalReactionMemoizationHandlerInstance,(int *)((int)&uStack_c + 4));
      bVar4 = util__Darray_enum_GraphicsResource__Type___CheckSize
                        ((Darray_L_enum_GraphicsResource__Type_G_ *)
                         &this->ChemicalReactionMemoizationHandlerInstance,iVar1);
      if (bVar4) {
        (this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Data
        [(this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Size + -1] =
             CDE_PMF(pmf_a5df125c, GetAdiabaticFlameTemperature_K_Clear);
      }
      pcVar3 = DebugBreak_exref;
      if ((this->GetEnergyDensity_J__kg_MemoizedValue).IsValidData == false) {
        iVar1 = (this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Size;
        uStack_c = (double)CONCAT44(iVar1 + 1,(undefined4)uStack_c);
        util__Darray_class_util__Reflectable____SetSize
                  ((Darray_L_class_util__Reflectable_P_G_ *)
                   &this->ChemicalReactionMemoizationHandlerInstance,(int *)((int)&uStack_c + 4));
        bVar4 = util__Darray_enum_GraphicsResource__Type___CheckSize
                          ((Darray_L_enum_GraphicsResource__Type_G_ *)
                           &this->ChemicalReactionMemoizationHandlerInstance,iVar1);
        if (bVar4) {
          (this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Data
          [(this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Size + -1] =
               CDE_PMF(pmf_a5df125c, GetEnergyDensity_J__kg_Clear);
        }
        uStack_c = GetEnergyDensity_J__kg
                             (this,*(MaterialConstituent *)cde_zextb(ZEXT416(in_stack_ffffffb4) << 0x20,16));
        uStack_1c = CONCAT31((*(uint24_t*)((char*)&(uStack_1c)+1)),1);
        uStack_24 = SUB84(uStack_c,0);
        pvStack_20 = (void *)((ulonglong)uStack_c >> 0x20);
        *(undefined4 *)&(this->GetEnergyDensity_J__kg_MemoizedValue).Data = uStack_24;
        *(void **)((int)&(this->GetEnergyDensity_J__kg_MemoizedValue).Data + 4) = pvStack_20;
        *(undefined4 *)&(this->GetEnergyDensity_J__kg_MemoizedValue).IsValidData = uStack_1c;
        *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetEnergyDensity_J__kg_MemoizedValue)) + 0xc)) = uStack_18;
        pcVar3 = DebugBreak_exref;
        if ((this->GetEnergyDensity_J__kg_MemoizedValue).IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          pcVar3 = DebugBreak_exref;
          DebugBreak();
        }
      }
      pDVar2 = (Darray_L_struct_MaterialConstituent_G_ *)GetProducts(this);
      dVar5 = Material__GetMixtureSpecificHeat_J__kg_K(pDVar2);
      uStack_c = (this->GetEnergyDensity_J__kg_MemoizedValue).Data / dVar5;
      if (pvStack_30 != (void *)0x0) {
        port_op_delete(pvStack_30);
      }
      uStack_1c = CONCAT31((*(uint24_t*)((char*)&(uStack_1c)+1)),1);
      uStack_24 = SUB84(uStack_c,0);
      pvStack_20 = (void *)((ulonglong)uStack_c >> 0x20);
      *(undefined4 *)&(this->GetAdiabaticFlameTemperature_K_MemoizedValue).Data = uStack_24;
      *(void **)((int)&(this->GetAdiabaticFlameTemperature_K_MemoizedValue).Data + 4) = pvStack_20;
      *(undefined4 *)&(this->GetAdiabaticFlameTemperature_K_MemoizedValue).IsValidData = uStack_1c;
      *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetAdiabaticFlameTemperature_K_MemoizedValue)) + 0xc)) = uStack_18;
      if ((this->GetAdiabaticFlameTemperature_K_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        (*pcVar3)();
      }
    }
    if (((this->AutoignitionTemperature_K <=
          (this->GetAdiabaticFlameTemperature_K_MemoizedValue).Data) &&
        (NAN(this->CharacteristicLength_m) != (this->CharacteristicLength_m == 0.0))) &&
       (bVar4 = HasGasProducts(this), bVar4)) {
      return true;
    }
  }
  return false;
}





//==== 006732f0 IsLaminarFlameSupersonic ====


/* public: bool __thiscall ChemicalReaction__IsLaminarFlameSupersonic(struct
   MaterialConstituent)const  */

bool __thiscall
ChemicalReaction__IsLaminarFlameSupersonic(ChemicalReaction *this,MaterialConstituent param_1)

{
  MaterialConstituent MVar1;
  double dVar2;
  double dVar3;
  undefined4 in_stack_ffffffdc;
  
  (*(uint32_t*)((char*)&(MVar1)+4)) = in_stack_ffffffdc;
  MVar1.Type = param_1.Type;
  MVar1.UnitlessFraction = param_1.UnitlessFraction;
  (*(uint32_t *)((char *)&(MVar1.UnitlessFraction) + 4)) = (*(uint32_t *)((char *)&(param_1.UnitlessFraction) + 4));
  dVar2 = GetLaminarFlameSpeed_m__s(this,MVar1);
  dVar3 = GetReactantSpeedOfSound_m__s(this);
}





//==== 00673340 IsPropulsiveReaction ====


/* public: bool __thiscall ChemicalReaction__IsPropulsiveReaction(void)const  */

bool __thiscall ChemicalReaction__IsPropulsiveReaction(ChemicalReaction *this)

{
  int iVar1;
  Darray_L_struct_MaterialConstituent_G_ *pDVar2;
  code *pcVar3;
  bool bVar4;
  double dVar5;
  uint in_stack_ffffffb4;
  void *pvStack_30;
  undefined4 uStack_24;
  void *pvStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined8 uStack_c;
  
  bVar4 = (this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).IsValidData == false;
  if (bVar4) {
    iVar1 = (this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Size;
    uStack_c = (double)CONCAT44(iVar1 + 1,(undefined4)uStack_c);
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)&this->ChemicalReactionMemoizationHandlerInstance
               ,(int *)((int)&uStack_c + 4));
    bVar4 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)
                       &this->ChemicalReactionMemoizationHandlerInstance,iVar1);
    if (bVar4) {
      (this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Data
      [(this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_a5df125c, GetTotalEnthalpyOfReaction_J__mol_Clear);
    }
    pDVar2 = (Darray_L_struct_MaterialConstituent_G_ *)GetProducts(this);
    uStack_c = Material__GetMixtureSummedEnthalpyOfFormation_J__mol(pDVar2);
    pDVar2 = (Darray_L_struct_MaterialConstituent_G_ *)GetReactants(this);
    dVar5 = Material__GetMixtureSummedEnthalpyOfFormation_J__mol(pDVar2);
    uStack_c = uStack_c - dVar5;
    if (pvStack_20 != (void *)0x0) {
      port_op_delete(pvStack_20);
    }
    if (pvStack_30 != (void *)0x0) {
      port_op_delete(pvStack_30);
    }
    dVar5 = uStack_c;
    uStack_c = (double)CONCAT71((*(uint56_t*)((char*)&(uStack_c)+1)),1);
    uStack_14 = SUB84(dVar5,0);
    uStack_10 = (undefined4)((ulonglong)dVar5 >> 0x20);
    pvStack_30 = (void *)0x0;
    *(undefined4 *)&(this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).Data = uStack_14;
    *(undefined4 *)((int)&(this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).Data + 4) =
         uStack_10;
    *(undefined4 *)&((this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).IsValidData) = (undefined4)uStack_c;
    *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue)) + 0xc)) = uStack_10;
    bVar4 = (this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).IsValidData == false;
  }
  if (bVar4) {
    in_stack_ffffffb4 = 0x13;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if ((this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).Data <= 0.0 &&
      (this->GetTotalEnthalpyOfReaction_J__mol_MemoizedValue).Data != 0.0) {
    if ((this->GetAdiabaticFlameTemperature_K_MemoizedValue).IsValidData == false) {
      iVar1 = (this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Size;
      uStack_c = (double)CONCAT44(iVar1 + 1,(undefined4)uStack_c);
      util__Darray_class_util__Reflectable____SetSize
                ((Darray_L_class_util__Reflectable_P_G_ *)
                 &this->ChemicalReactionMemoizationHandlerInstance,(int *)((int)&uStack_c + 4));
      bVar4 = util__Darray_enum_GraphicsResource__Type___CheckSize
                        ((Darray_L_enum_GraphicsResource__Type_G_ *)
                         &this->ChemicalReactionMemoizationHandlerInstance,iVar1);
      if (bVar4) {
        (this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Data
        [(this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Size + -1] =
             CDE_PMF(pmf_a5df125c, GetAdiabaticFlameTemperature_K_Clear);
      }
      pcVar3 = DebugBreak_exref;
      if ((this->GetEnergyDensity_J__kg_MemoizedValue).IsValidData == false) {
        iVar1 = (this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Size;
        uStack_c = (double)CONCAT44(iVar1 + 1,(undefined4)uStack_c);
        util__Darray_class_util__Reflectable____SetSize
                  ((Darray_L_class_util__Reflectable_P_G_ *)
                   &this->ChemicalReactionMemoizationHandlerInstance,(int *)((int)&uStack_c + 4));
        bVar4 = util__Darray_enum_GraphicsResource__Type___CheckSize
                          ((Darray_L_enum_GraphicsResource__Type_G_ *)
                           &this->ChemicalReactionMemoizationHandlerInstance,iVar1);
        if (bVar4) {
          (this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Data
          [(this->ChemicalReactionMemoizationHandlerInstance).ResetFunctions.Size + -1] =
               CDE_PMF(pmf_a5df125c, GetEnergyDensity_J__kg_Clear);
        }
        uStack_c = GetEnergyDensity_J__kg
                             (this,*(MaterialConstituent *)cde_zextb(ZEXT416(in_stack_ffffffb4) << 0x20,16));
        uStack_1c = CONCAT31((*(uint24_t*)((char*)&(uStack_1c)+1)),1);
        uStack_24 = SUB84(uStack_c,0);
        pvStack_20 = (void *)((ulonglong)uStack_c >> 0x20);
        *(undefined4 *)&(this->GetEnergyDensity_J__kg_MemoizedValue).Data = uStack_24;
        *(void **)((int)&(this->GetEnergyDensity_J__kg_MemoizedValue).Data + 4) = pvStack_20;
        *(undefined4 *)&(this->GetEnergyDensity_J__kg_MemoizedValue).IsValidData = uStack_1c;
        *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetEnergyDensity_J__kg_MemoizedValue)) + 0xc)) = uStack_18;
        pcVar3 = DebugBreak_exref;
        if ((this->GetEnergyDensity_J__kg_MemoizedValue).IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          pcVar3 = DebugBreak_exref;
          DebugBreak();
        }
      }
      pDVar2 = (Darray_L_struct_MaterialConstituent_G_ *)GetProducts(this);
      dVar5 = Material__GetMixtureSpecificHeat_J__kg_K(pDVar2);
      uStack_c = (this->GetEnergyDensity_J__kg_MemoizedValue).Data / dVar5;
      if (pvStack_30 != (void *)0x0) {
        port_op_delete(pvStack_30);
      }
      uStack_1c = CONCAT31((*(uint24_t*)((char*)&(uStack_1c)+1)),1);
      uStack_24 = SUB84(uStack_c,0);
      pvStack_20 = (void *)((ulonglong)uStack_c >> 0x20);
      *(undefined4 *)&(this->GetAdiabaticFlameTemperature_K_MemoizedValue).Data = uStack_24;
      *(void **)((int)&(this->GetAdiabaticFlameTemperature_K_MemoizedValue).Data + 4) = pvStack_20;
      *(undefined4 *)&(this->GetAdiabaticFlameTemperature_K_MemoizedValue).IsValidData = uStack_1c;
      *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetAdiabaticFlameTemperature_K_MemoizedValue)) + 0xc)) = uStack_18;
      if ((this->GetAdiabaticFlameTemperature_K_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        (*pcVar3)();
      }
    }
    if ((this->AutoignitionTemperature_K <=
         (this->GetAdiabaticFlameTemperature_K_MemoizedValue).Data) &&
       (0.0 < this->CharacteristicLength_m)) {
      return true;
    }
  }
  return false;
}





//==== 006735e0 StaticFactory_006735e0 ====

/* public: static class util__Reflectable * __cdecl
   DissociationReaction__ReflectionInfoStruct_struct_DissociationReaction___StaticFactory(void) */

Reflectable * __cdecl
DissociationReaction__ReflectionInfoStruct_struct_DissociationReaction___StaticFactory__o2(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x30));
  if (pRVar1 != (Reflectable *)0x0) {
    memset(pRVar1,0,0x30);
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_325;
    pRVar1[1]._pad_0x0_0 = (int)&vftable_2;
    pRVar1[1].Name.Data = (char *)0x0;
    pRVar1[1].Name.Capacity = 0;
    pRVar1[1].Name.Length = 0;
    pRVar1[2]._pad_0x0_0 = (int)&vftable_63;
    pRVar1[2].Name.Data = (char *)0x0;
    pRVar1[2].Name.Capacity = 0;
    pRVar1[2].Name.Length = 0;
  }
  return (Reflectable *)0x0;
}

//==== 00673660 StaticFactory_00673660 ====

/* public: static class util__Reflectable * __cdecl ChemicalReaction__ReflectionInfoStruct_L_class_ChemicalReaction_G___StaticFactory(void) */

Reflectable * __cdecl ChemicalReaction__ReflectionInfoStruct_class_ChemicalReaction___StaticFactory(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0xb8));
  if (pRVar1 != (Reflectable *)0x0) {
    memset(pRVar1,0,0xb8);
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_323;
    pRVar1[1]._pad_0x0_0 = 0;
    pRVar1[1].Name.Data = (char *)0x0;
    pRVar1[1].Name.Capacity = 0;
    pRVar1[1].Name.Length = 0;
    pRVar1[1]._pad_0x0_0 = (int)&vftable_2;
    pRVar1[1].Name.Data = (char *)0x0;
    pRVar1[1].Name.Capacity = 0;
    pRVar1[1].Name.Length = 0;
    pRVar1[2]._pad_0x0_0 = (int)&vftable_2;
    pRVar1[2].Name.Data = (char *)0x0;
    pRVar1[2].Name.Capacity = 0;
    pRVar1[2].Name.Length = 0;
    pRVar1[3]._pad_0x0_0 = (int)&vftable_11;
    pRVar1[3].Name.Data = (char *)0x0;
    pRVar1[3].Name.Capacity = 0;
    pRVar1[3].Name.Length = 0;
    pRVar1[4]._pad_0x0_0 = (int)&vftable_2;
    pRVar1[4].Name.Data = (char *)0x0;
    pRVar1[4].Name.Capacity = 0;
    pRVar1[4].Name.Length = 0;
    pRVar1[5]._pad_0x0_0 = (int)&vftable_11;
    pRVar1[5].Name.Data = (char *)0x0;
    pRVar1[5].Name.Capacity = 0;
    pRVar1[5].Name.Length = 0;
    pRVar1[7].Name.Capacity = 0;
    pRVar1[7].Name.Length = 0;
    *(undefined1 *)&pRVar1[8]._pad_0x0_0 = 0;
    pRVar1[8].Name.Capacity = 0;
    pRVar1[8].Name.Length = 0;
    *(undefined1 *)&pRVar1[9]._pad_0x0_0 = 0;
    pRVar1[9].Name.Capacity = 0;
    pRVar1[9].Name.Length = 0;
    *(undefined1 *)&pRVar1[10]._pad_0x0_0 = 0;
    pRVar1[10].Name.Capacity = 0;
    pRVar1[10].Name.Length = 0;
    *(undefined1 *)&pRVar1[0xb]._pad_0x0_0 = 0;
  }
  return (Reflectable *)0x0;
}

//==== 00673780 StaticGetMember_00673780 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class util__Maybe_L_structutil__ClassMember_G_ const __cdecl
   DissociationReaction__ReflectionInfoStruct_struct_DissociationReaction___StaticGetMember(class
   util__Str_L_char_G_ const &) */

Str_L_char_G_ * __cdecl
DissociationReaction__ReflectionInfoStruct_struct_DissociationReaction___StaticGetMember__o2
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
        cde_l2_a9aedf5f__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_a9aedf5f__thread_safe_static_guard_0__),
      cde_l2_a9aedf5f__thread_safe_static_guard_0__ == -1)) {
     cde_l2_a3d2390b_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_a9aedf5f__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_a3d2390b_Count) {
    piVar7 = &DAT_00979070;
    do {
      if ((*(int *)(iStack_c + 4) <
            cde_l2_fdd8d4bb__thread_safe_static_guard_0__) &&
         (_Init_thread_header(& cde_l2_fdd8d4bb__thread_safe_static_guard_0__),
          cde_l2_fdd8d4bb__thread_safe_static_guard_0__ == -1)) {
        util__Str_char___Str_char
                  ((Str_L_char_G_ *)
                   & cde_l2_a74c1d71_StaticMembers,"DummyValue_DO_NOT_USE");
        DAT_0097906c = 0;
        DAT_00979070 = 0;
        DAT_00979074 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979078,"Unused");
        _DAT_00979084 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979088,"Products");
        _DAT_00979094 = 8;
        _DAT_00979098 = 0x10;
        _DAT_0097909c = 4;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009790a0,"Material");
        _DAT_009790ac = 1;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009790b0,"ProductCounts");
        _DAT_009790bc = 4;
        _DAT_009790c0 = 0x20;
        _DAT_009790c4 = 8;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009790c8,"double");
        _DAT_009790d4 = 1;
        atexit( private__static_struct_util__ClassMember_const___cdecl_DissociationReaction__ReflectionInfoStruct_struct_DissociationReaction___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
        _Init_thread_footer(& cde_l2_fdd8d4bb__thread_safe_static_guard_0__);
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
LAB_00673852:
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
          if (cVar3 == '\0') goto LAB_00673852;
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
    } while (iVar6 <  cde_l2_a3d2390b_Count);
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





//==== 00673a70 StaticGetMemberByIndex_00673a70 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   ChemicalReaction__ReflectionInfoStruct_class_ChemicalReaction___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
ChemicalReaction__ReflectionInfoStruct_class_ChemicalReaction___StaticGetMemberByIndex__o2
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_cb368ef9__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_cb368ef9__thread_safe_static_guard_0__);
    if ( cde_l2_cb368ef9__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_c993b4b3_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00979234 = 0;
      _DAT_00979238 = 0;
      _DAT_0097923c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979240,"Unused");
      _DAT_0097924c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979250,"Reactants");
      _DAT_0097925c = 8;
      _DAT_00979260 = 0x20;
      _DAT_00979264 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979268,"Material");
      _DAT_00979274 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979278,"ReactantCounts");
      _DAT_00979284 = 2;
      _DAT_00979288 = 0x30;
      _DAT_0097928c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979290,"int");
      _DAT_0097929c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009792a0,"Products");
      _DAT_009792ac = 8;
      _DAT_009792b0 = 0x40;
      _DAT_009792b4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009792b8,"Material");
      _DAT_009792c4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009792c8,"ProductCounts");
      _DAT_009792d4 = 2;
      _DAT_009792d8 = 0x50;
      _DAT_009792dc = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009792e0,"int");
      _DAT_009792ec = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009792f0,"ActivationEnergy_kJ__mol");
      _DAT_009792fc = 4;
      _DAT_00979300 = 0x60;
      _DAT_00979304 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979308,"double");
      _DAT_00979314 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979318,"AutoignitionTemperature_K");
      _DAT_00979324 = 4;
      _DAT_00979328 = 0x68;
      _DAT_0097932c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979330,"double");
      _DAT_0097933c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979340,"CharacteristicLength_m");
      _DAT_0097934c = 4;
      _DAT_00979350 = 0x70;
      _DAT_00979354 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979358,"double");
      _DAT_00979364 = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_ChemicalReaction__ReflectionInfoStruct_class_ChemicalReaction___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_cb368ef9__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_c993b4b3_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_00979234 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_00979238 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_0097923c + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_00979240 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0097924c)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0097924d)[iVar1];
  return __return_storage_ptr__;
}





//==== 00673d40 StaticGetMemberCount_00673d40 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl DissociationReaction__ReflectionInfoStruct_struct_DissociationReaction___StaticGetMemberCount(void) */

int __cdecl
DissociationReaction__ReflectionInfoStruct_struct_DissociationReaction___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_b6b4adfb__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_b6b4adfb__thread_safe_static_guard_0__);
    if ( cde_l2_b6b4adfb__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_1ccb9eee_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00978fec = 0;
      _DAT_00978ff0 = 0;
      _DAT_00978ff4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00978ff8,"Unused");
      _DAT_00979004 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979008,"Products");
      _DAT_00979014 = 8;
      _DAT_00979018 = 0x10;
      _DAT_0097901c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979020,"Material");
      _DAT_0097902c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979030,"ProductCounts");
      _DAT_0097903c = 4;
      _DAT_00979040 = 0x20;
      _DAT_00979044 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979048,"double");
      _DAT_00979054 = 1;
      atexit( private__static_int_const___cdecl_DissociationReaction__ReflectionInfoStruct_struct_DissociationReaction___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_b6b4adfb__thread_safe_static_guard_0__);
    }
  }
  return 3;
}





//==== 00673e80 StaticGetMemberCount_00673e80 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl ChemicalReaction__ReflectionInfoStruct_class_ChemicalReaction___StaticGetMemberCount(void) */

int __cdecl
ChemicalReaction__ReflectionInfoStruct_class_ChemicalReaction___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_96ea710e__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_96ea710e__thread_safe_static_guard_0__);
    if ( cde_l2_96ea710e__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_2e4edcae_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_009790ec = 0;
      _DAT_009790f0 = 0;
      _DAT_009790f4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009790f8,"Unused");
      _DAT_00979104 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979108,"Reactants");
      _DAT_00979114 = 8;
      _DAT_00979118 = 0x20;
      _DAT_0097911c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979120,"Material");
      _DAT_0097912c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979130,"ReactantCounts");
      _DAT_0097913c = 2;
      _DAT_00979140 = 0x30;
      _DAT_00979144 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979148,"int");
      _DAT_00979154 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979158,"Products");
      _DAT_00979164 = 8;
      _DAT_00979168 = 0x40;
      _DAT_0097916c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979170,"Material");
      _DAT_0097917c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979180,"ProductCounts");
      _DAT_0097918c = 2;
      _DAT_00979190 = 0x50;
      _DAT_00979194 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979198,"int");
      _DAT_009791a4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009791a8,"ActivationEnergy_kJ__mol");
      _DAT_009791b4 = 4;
      _DAT_009791b8 = 0x60;
      _DAT_009791bc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009791c0,"double");
      _DAT_009791cc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009791d0,"AutoignitionTemperature_K");
      _DAT_009791dc = 4;
      _DAT_009791e0 = 0x68;
      _DAT_009791e4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009791e8,"double");
      _DAT_009791f4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009791f8,"CharacteristicLength_m");
      _DAT_00979204 = 4;
      _DAT_00979208 = 0x70;
      _DAT_0097920c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979210,"double");
      _DAT_0097921c = 0;
      atexit( private__static_int_const___cdecl_ChemicalReaction__ReflectionInfoStruct_class_ChemicalReaction___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_96ea710e__thread_safe_static_guard_0__);
    }
  }
  return 8;
}





//==== 00674100 StaticGetMembers_00674100 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class util__Darray_L_structutil__ClassMember_G_ const __cdecl
   DissociationReaction__ReflectionInfoStruct_struct_DissociationReaction___StaticGetMembers(void)
    */

Darray_L_struct_util__ClassMember_G_ * __cdecl
DissociationReaction__ReflectionInfoStruct_struct_DissociationReaction___StaticGetMembers__o2(void)

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
        cde_l2_8f6cdede__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_8f6cdede__thread_safe_static_guard_0__),
      cde_l2_8f6cdede__thread_safe_static_guard_0__ == -1)) {
     cde_l2_1cc77cbd_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_8f6cdede__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_1cc77cbd_Count);
  iVar3 = 0;
  if (0 <  cde_l2_1cc77cbd_Count) {
    puVar4 = &DAT_00979070;
    do {
      if ((*(int *)(iStack_c + 4) <
            cde_l2_fdd8d4bb__thread_safe_static_guard_0__) &&
         (_Init_thread_header(& cde_l2_fdd8d4bb__thread_safe_static_guard_0__),
          cde_l2_fdd8d4bb__thread_safe_static_guard_0__ == -1)) {
        util__Str_char___Str_char
                  ((Str_L_char_G_ *)
                   & cde_l2_a74c1d71_StaticMembers,"DummyValue_DO_NOT_USE");
        DAT_0097906c = 0;
        DAT_00979070 = 0;
        DAT_00979074 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979078,"Unused");
        _DAT_00979084 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979088,"Products");
        _DAT_00979094 = 8;
        _DAT_00979098 = 0x10;
        _DAT_0097909c = 4;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009790a0,"Material");
        _DAT_009790ac = 1;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009790b0,"ProductCounts");
        _DAT_009790bc = 4;
        _DAT_009790c0 = 0x20;
        _DAT_009790c4 = 8;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009790c8,"double");
        _DAT_009790d4 = 1;
        atexit( private__static_struct_util__ClassMember_const___cdecl_DissociationReaction__ReflectionInfoStruct_struct_DissociationReaction___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
        _Init_thread_footer(& cde_l2_fdd8d4bb__thread_safe_static_guard_0__);
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
    } while (iVar3 <  cde_l2_1cc77cbd_Count);
  }
  return in_stack_00000004;
}





//==== 00674390 StaticGetReflectionInfo_00674390 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct ChemicalReaction__ReflectionInfoStruct_L_classChemicalReaction_G_ * __cdecl
   ChemicalReaction__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_ChemicalReaction_G_ * __cdecl
ChemicalReaction__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_bdf1d7d7__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_bdf1d7d7__thread_safe_static_guard_0__);
    if ( cde_l2_bdf1d7d7__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_b9fd4440_ReflectionInfo) = &vftable_324;
      _Init_thread_footer(& cde_l2_bdf1d7d7__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_b9fd4440_ReflectionInfo;
}





//==== 006743f0 StaticGetReflectionInfo_006743f0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct DissociationReaction__ReflectionInfoStruct_L_structDissociationReaction_G_ *
   __cdecl DissociationReaction__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_struct_DissociationReaction_G_ * __cdecl
DissociationReaction__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_1f37967d__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_1f37967d__thread_safe_static_guard_0__);
    if ( cde_l2_1f37967d__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_4099d4c0_ReflectionInfo) = &vftable_326;
      _Init_thread_footer(& cde_l2_1f37967d__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_4099d4c0_ReflectionInfo;
}





//==== 00674450 Validate ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: struct util__tuple2_L_bool_Cclassutil__Str_L_char_G__G_ __thiscall
   ChemicalReaction__Validate(void)const  */

tuple2_L_bool_Cutil__Str_L_char_G___G_ * __thiscall
ChemicalReaction__Validate
          (ChemicalReaction *this,tuple2_L_bool_Cutil__Str_L_char_G___G_ *__return_storage_ptr__)

{
  undefined8 stack0xfffffffc;
  Darray_L_Material__P_G_ *pDVar1;
  tuple2_L_bool_Cutil__Str_L_char_G___G_ *ptVar2;
  ChemicalReaction *pCVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  Darray_L_Material__P_G_ *pDVar7;
  bool bVar8;
  Str_L_char_G_ local_38;
  tuple2_L_bool_Cutil__Str_L_char_G___G_ *local_2c;
  ChemicalReaction *local_28;
  Str_L_char_G_ local_24;
  Str_L_char_G_ local_18;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(uint32_t *)&local_2c = (uint32_t)(uintptr_t)(__return_storage_ptr__);
  pDVar1 = &this->Reactants;
  local_18.Data = (char *)0x0;
  local_18.Capacity = 0;
  local_18.Length = 0;
  *(uint32_t *)&local_28 = (uint32_t)(uintptr_t)(this);
  iVar4 = (**(code **)((this->ReactantCounts)._pad_0x0_0 + 0xc))();
  iVar5 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
  if (iVar5 != iVar4) {
    util__Str_char___Str_char(&local_24,"Reactant count mismatch\n");
    util__Str_char___operator__o10(&local_18,&local_24);
    if (local_24.Data != (char *)0x0) {
      port_op_delete(local_24.Data);
    }
  }
  iVar4 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
  if (iVar4 < 1) {
    util__Str_char___Str_char(&local_24,"Count__Zero reactants\n");
    util__Str_char___operator__o10(&local_18,&local_24);
    if (local_24.Data != (char *)0x0) {
      port_op_delete(local_24.Data);
    }
  }
  pDVar7 = &this->Products;
  iVar4 = (**(code **)((this->Products)._pad_0x0_0 + 0xc))();
  iVar5 = (**(code **)((local_28->ProductCounts)._pad_0x0_0 + 0xc))();
  if (iVar4 != iVar5) {
    util__Str_char___Str_char(&local_24,"Product count mismatch\n");
    util__Str_char___operator__o10(&local_18,&local_24);
    if (local_24.Data != (char *)0x0) {
      port_op_delete(local_24.Data);
    }
  }
  iVar4 = (**(code **)(pDVar7->_pad_0x0_0 + 0xc))();
  if (iVar4 < 1) {
    util__Str_char___Str_char(&local_24,"Count__Zero products\n");
    util__Str_char___operator__o10(&local_18,&local_24);
    if (local_24.Data != (char *)0x0) {
      port_op_delete(local_24.Data);
    }
  }
  local_c = 0;
  iVar4 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
  if (local_c < iVar4) {
    do {
      piVar6 = (int *)(**(code **)pDVar1->_pad_0x0_0)(&local_c);
      if (*piVar6 == 0) {
        util__Str_char___Str_char(&local_24,"Null reactants\n");
        util__Str_char___operator__o10(&local_18,&local_24);
        if (local_24.Data != (char *)0x0) {
          port_op_delete(local_24.Data);
        }
        break;
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
    } while (local_c < iVar4);
  }
  pCVar3 = local_28;
  local_c = 0;
  iVar4 = (**(code **)((local_28->ReactantCounts)._pad_0x0_0 + 0xc))();
  if (local_c < iVar4) {
    do {
      piVar6 = (int *)(**(code **)(pCVar3->ReactantCounts)._pad_0x0_0)(&local_c);
      if ((double)*piVar6 <= 0.0) {
        util__Str_char___Str_char(&local_24,"Non-positive reactant count\n");
        util__Str_char___operator__o10(&local_18,&local_24);
        if (local_24.Data != (char *)0x0) {
          port_op_delete(local_24.Data);
        }
        break;
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)((pCVar3->ReactantCounts)._pad_0x0_0 + 0xc))();
    } while (local_c < iVar4);
  }
  local_c = 0;
  iVar4 = (**(code **)(pDVar7->_pad_0x0_0 + 0xc))();
  if (local_c < iVar4) {
    do {
      piVar6 = (int *)(**(code **)pDVar7->_pad_0x0_0)(&local_c);
      if (*piVar6 == 0) {
        util__Str_char___Str_char(&local_24,"Null products\n");
        util__Str_char___operator__o10(&local_18,&local_24);
        if (local_24.Data != (char *)0x0) {
          port_op_delete(local_24.Data);
        }
        break;
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(pDVar7->_pad_0x0_0 + 0xc))();
    } while (local_c < iVar4);
  }
  local_c = 0;
  iVar4 = (**(code **)((pCVar3->ProductCounts)._pad_0x0_0 + 0xc))();
  if (local_c < iVar4) {
    do {
      piVar6 = (int *)(**(code **)(pCVar3->ProductCounts)._pad_0x0_0)(&local_c);
      if ((double)*piVar6 <= 0.0) {
        util__Str_char___Str_char(&local_24,"Non-positive product count\n");
        util__Str_char___operator__o10(&local_18,&local_24);
        if (local_24.Data != (char *)0x0) {
          port_op_delete(local_24.Data);
        }
        break;
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)((pCVar3->ProductCounts)._pad_0x0_0 + 0xc))();
    } while (local_c < iVar4);
  }
  bVar8 = local_18.Length == 0;
  util__Str_char___Str_char(&local_38,&local_18);
  util__Str_char___Str_char(&local_24,&local_38);
  ptVar2 = local_2c;
  local_2c->Value1 = bVar8;
  util__Str_char___Str_char(&local_2c->Value2,&local_24);
  if (local_24.Data != (char *)0x0) {
    port_op_delete(local_24.Data);
  }
  if (local_38.Data != (char *)0x0) {
    port_op_delete(local_38.Data);
  }
  if (local_18.Data != (char *)0x0) {
    port_op_delete(local_18.Data);
  }
  return ptVar2;
}

//==== 00674790 Validate_00674790 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: struct util__tuple2_L_bool_Cclassutil__Str_L_char_G__G_ __thiscall
   DissociationReaction__Validate(void)const  */

tuple2_L_bool_Cutil__Str_L_char_G___G_ * __thiscall
DissociationReaction__Validate
          (DissociationReaction *this,tuple2_L_bool_Cutil__Str_L_char_G___G_ *__return_storage_ptr__)

{
  undefined8 stack0xfffffffc;
  Darray_L_Material__P_G_ *pDVar1;
  Darray_L_double_G_ *pDVar2;
  tuple2_L_bool_Cutil__Str_L_char_G___G_ *ptVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  double *pdVar7;
  bool bVar8;
  Str_L_char_G_ local_34;
  tuple2_L_bool_Cutil__Str_L_char_G___G_ *local_28;
  Str_L_char_G_ local_24;
  Str_L_char_G_ local_18;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pDVar1 = &this->Products;
  *(uint32_t *)&local_28 = (uint32_t)(uintptr_t)(__return_storage_ptr__);
  pDVar2 = &this->ProductCounts;
  local_18.Data = (char *)0x0;
  local_18.Capacity = 0;
  local_18.Length = 0;
  iVar4 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
  iVar5 = (**(code **)(pDVar2->_pad_0x0_0 + 0xc))();
  if (iVar4 != iVar5) {
    util__Str_char___Str_char(&local_24,"Dissocation product count mismatch\n");
    util__Str_char___operator__o10(&local_18,&local_24);
    if (local_24.Data != (char *)0x0) {
      port_op_delete(local_24.Data);
    }
  }
  local_c = 0;
  iVar4 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
  if (local_c < iVar4) {
    do {
      piVar6 = (int *)(**(code **)pDVar1->_pad_0x0_0)(&local_c);
      if (*piVar6 == 0) {
        util__Str_char___Str_char(&local_24,"Null dissocation products\n");
        util__Str_char___operator__o10(&local_18,&local_24);
        if (local_24.Data != (char *)0x0) {
          port_op_delete(local_24.Data);
        }
        break;
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
    } while (local_c < iVar4);
  }
  local_c = 0;
  iVar4 = (**(code **)(pDVar2->_pad_0x0_0 + 0xc))();
  if (local_c < iVar4) {
    do {
      pdVar7 = (double *)(**(code **)pDVar2->_pad_0x0_0)(&local_c);
      if (*pdVar7 <= 0.0) {
        util__Str_char___Str_char(&local_24,"Dissocation product counts non-positive\n");
        util__Str_char___operator__o10(&local_18,&local_24);
        if (local_24.Data != (char *)0x0) {
          port_op_delete(local_24.Data);
        }
        break;
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(pDVar2->_pad_0x0_0 + 0xc))();
    } while (local_c < iVar4);
  }
  bVar8 = local_18.Length == 0;
  util__Str_char___Str_char(&local_34,&local_18);
  util__Str_char___Str_char(&local_24,&local_34);
  ptVar3 = local_28;
  local_28->Value1 = bVar8;
  util__Str_char___Str_char(&local_28->Value2,&local_24);
  if (local_24.Data != (char *)0x0) {
    port_op_delete(local_24.Data);
  }
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
  }
  if (local_18.Data != (char *)0x0) {
    port_op_delete(local_18.Data);
  }
  return ptVar3;
}

//==== 00674950 ArmorPlate ====


/* public: __thiscall ArmorPlate__ArmorPlate(double) */

ArmorPlate * __thiscall ArmorPlate__ArmorPlate(ArmorPlate *this,double param_1)

{
  this->Thickness_m = (float)param_1;
  return this;
}





//==== 00674970 AddPlasma ====


/* public: void __thiscall DamagerContainer__AddPlasma(struct PlasmaDamager const &) */

void __thiscall DamagerContainer__AddPlasma(DamagerContainer *this,PlasmaDamager *param_1)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  undefined7 uStack_1b;
  
  if ((this->Plasma).IsValidData != false) {
    cVar9 = (this->Plasma).IsValidData;
    if ((bool)cVar9 == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
      cVar9 = (this->Plasma).IsValidData;
    }
    dVar10 = (this->Plasma).Data.Mass_kg;
    dVar11 = param_1->Mass_kg;
    dVar1 = dVar11 + dVar10;
    if (cVar9 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
      dVar10 = (this->Plasma).Data.Mass_kg;
      dVar11 = param_1->Mass_kg;
    }
    dVar10 = dVar10 / dVar1;
    dVar11 = dVar11 / dVar1;
    if ((this->Plasma).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
      if ((this->Plasma).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
    }
    (this->Plasma).Data.Radius_m =
         param_1->Radius_m * dVar11 + (this->Plasma).Data.Radius_m * dVar10;
    if ((this->Plasma).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
      if ((this->Plasma).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
    }
    (this->Plasma).Data.Velocity_km__s =
         param_1->Velocity_km__s * dVar11 + (this->Plasma).Data.Velocity_km__s * dVar10;
    if ((this->Plasma).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    (this->Plasma).Data.Mass_kg = (this->Plasma).Data.Mass_kg + param_1->Mass_kg;
    cVar9 = (this->Plasma).IsValidData;
    if ((bool)cVar9 == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
      cVar9 = (this->Plasma).IsValidData;
    }
    dVar11 = (this->Plasma).Data.SpreadAngle_radians;
    if (dVar11 <= param_1->SpreadAngle_radians) {
      dVar11 = param_1->SpreadAngle_radians;
    }
    if (cVar9 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    (this->Plasma).Data.SpreadAngle_radians = dVar11;
    return;
  }
  uVar5 = *(undefined4 *)&param_1->SpreadAngle_radians;
  uVar6 = *(undefined4 *)((int)&param_1->SpreadAngle_radians + 4);
  uVar7 = *(undefined4 *)&param_1->Velocity_km__s;
  uVar8 = *(undefined4 *)((int)&param_1->Velocity_km__s + 4);
  uVar2 = *(undefined4 *)((int)&param_1->Mass_kg + 4);
  uVar3 = *(undefined4 *)&param_1->Radius_m;
  uVar4 = *(undefined4 *)((int)&param_1->Radius_m + 4);
  *(undefined4 *)&(this->Plasma).Data.Mass_kg = *(undefined4 *)&param_1->Mass_kg;
  *(undefined4 *)((int)&(this->Plasma).Data.Mass_kg + 4) = uVar2;
  *(undefined4 *)&(this->Plasma).Data.Radius_m = uVar3;
  *(undefined4 *)((int)&(this->Plasma).Data.Radius_m + 4) = uVar4;
  *(undefined4 *)&(this->Plasma).Data.SpreadAngle_radians = uVar5;
  *(undefined4 *)((int)&(this->Plasma).Data.SpreadAngle_radians + 4) = uVar6;
  *(undefined4 *)&(this->Plasma).Data.Velocity_km__s = uVar7;
  *(undefined4 *)((int)&(this->Plasma).Data.Velocity_km__s + 4) = uVar8;
  *(ulonglong *)&(this->Plasma).IsValidData = CONCAT71(uStack_1b,1);
  return;
}





//==== 00674b80 ApplyDamage ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: int propagation algorithm not settling */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: struct util__tuple2_L_structDamagerContainer_Cdouble_G_ __thiscall
   ArmorPlate__ApplyDamage(class util__WeakPtr_L_classEffectManager_G_,struct
   util__PhysicalState_L_structutil__Vec3_L_double_G__G_,struct DamagerContainer,class Material const
   *,double,double) */

tuple2_L_DamagerContainer_Cdouble_G_ * __thiscall
ArmorPlate__ApplyDamage
          (ArmorPlate *this,tuple2_L_DamagerContainer_Cdouble_G_ *__return_storage_ptr__,
          WeakPtr_L_EffectManager_G_ param_1,PhysicalState_L_util__Vec3_L_double_G___G_ param_2,
          DamagerContainer param_3,Material *param_4,double param_5,double param_6)

{
  undefined8 stack0xfffffffc;
  PhotonDamager PVar1;
  PlasmaDamager PVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  bool bVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 in_stack_000000c8;
  PlasmaDamager local_18c;
  tuple3_L_util__Maybe_L_MatterDamager_G__Cutil__Maybe_L_PlasmaDamager_G__Cdouble_G_ local_16c;
  double local_114;
  double local_10c;
  undefined8 local_104;
  double local_fc;
  double local_f4;
  double local_ec;
  double local_e4;
  Material *local_dc;
  DamagerContainer local_d8;
  tuple2_L_util__Maybe_L_util__tuple2_L_PhotonDamager_CPlasmaDamager_G___G__Cdouble_G_ local_58;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_dc = (Material *)(*(uint32_t *)((char *)&(param_3) + 124));
  if (this->Thickness_m <= 0.0) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\damage.cpp",0x8c,
                    "Thickness_m > 0.",(char *)0x0);
    DebugBreak();
  }
  bVar6 = Material__IsAnExplosive(local_dc);
  if (bVar6) {
    this->Thickness_m = 0.0;
    *(undefined4 *)&((__return_storage_ptr__->Value1).Photons.Data.Energy_J) = *(undefined4 *)((char *)&param_2.Velocity + 24);
    *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Photons.Data.Energy_J + 4) =
         param_3.Photons.Data.Energy_J;
    *(undefined4 *)&((__return_storage_ptr__->Value1).Photons.Data.Radius_m) = (*(uint32_t *)((char *)&(param_3.Photons.Data.Energy_J) + 4));
    *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Photons.Data.Radius_m + 4) =
         param_3.Photons.Data.Radius_m;
    *(undefined4 *)&((__return_storage_ptr__->Value1).Photons.Data.SpreadAngle_radians) = (*(uint32_t *)((char *)&(param_3.Photons.Data.Radius_m) + 4));
    *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Photons.Data.SpreadAngle_radians + 4) =
         param_3.Photons.Data.SpreadAngle_radians;
    *(undefined4 *)&((__return_storage_ptr__->Value1).Photons.Data.Wavelength_nm) = (*(uint32_t *)((char *)&(param_3.Photons.Data.SpreadAngle_radians) + 4));
    *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Photons.Data.Wavelength_nm + 4) =
         param_3.Photons.Data.Wavelength_nm;
    (__return_storage_ptr__->Value1).Photons.IsValidData = (*(uint8_t *)((char *)&(param_3.Photons.Data.Wavelength_nm) + 4));
    *(undefined4 *)&(__return_storage_ptr__->Value1).Plasma.Data.Mass_kg = (*(uint32_t *)((char *)&(param_3.Photons) + 36));
    *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Plasma.Data.Mass_kg + 4) =
         param_3.Plasma.Data.Mass_kg;
    *(undefined4 *)&((__return_storage_ptr__->Value1).Plasma.Data.Radius_m) = (*(uint32_t *)((char *)&(param_3.Plasma.Data.Mass_kg) + 4));
    *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Plasma.Data.Radius_m + 4) =
         param_3.Plasma.Data.Radius_m;
    *(undefined4 *)&((__return_storage_ptr__->Value1).Plasma.Data.SpreadAngle_radians) = (*(uint32_t *)((char *)&(param_3.Plasma.Data.Radius_m) + 4));
    *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Plasma.Data.SpreadAngle_radians + 4) =
         param_3.Plasma.Data.SpreadAngle_radians;
    *(undefined4 *)&((__return_storage_ptr__->Value1).Plasma.Data.Velocity_km__s) = (*(uint32_t *)((char *)&(param_3.Plasma.Data.SpreadAngle_radians) + 4));
    *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Plasma.Data.Velocity_km__s + 4) =
         param_3.Plasma.Data.Velocity_km__s;
    (__return_storage_ptr__->Value1).Plasma.IsValidData = (*(uint8_t *)((char *)&(param_3.Plasma.Data.Velocity_km__s) + 4));
    *(undefined4 *)&(__return_storage_ptr__->Value1).Matter.Data.Mass_kg = (*(uint32_t *)((char *)&(param_3.Plasma) + 36));
    *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Matter.Data.Mass_kg + 4) =
         param_3.Matter.Data.Mass_kg;
    *(undefined4 *)&((__return_storage_ptr__->Value1).Matter.Data.Radius_m) = (*(uint32_t *)((char *)&(param_3.Matter.Data.Mass_kg) + 4));
    *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Matter.Data.Radius_m + 4) =
         param_3.Matter.Data.Radius_m;
    *(undefined4 *)&((__return_storage_ptr__->Value1).Matter.Data.Density_kg__m3) = (*(uint32_t *)((char *)&(param_3.Matter.Data.Radius_m) + 4));
    *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Matter.Data.Density_kg__m3 + 4) =
         param_3.Matter.Data.Density_kg__m3;
    *(undefined4 *)&((__return_storage_ptr__->Value1).Matter.Data.Velocity_km__s) = (*(uint32_t *)((char *)&(param_3.Matter.Data.Density_kg__m3) + 4));
    *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Matter.Data.Velocity_km__s + 4) =
         param_3.Matter.Data.Velocity_km__s;
    (__return_storage_ptr__->Value1).Matter.IsValidData = (*(uint8_t *)((char *)&(param_3.Matter.Data.Velocity_km__s) + 4));
    (__return_storage_ptr__->Value1).Instakill = (bool)(*(uint8_t *)((char *)&(param_3.Matter) + 36));
    __return_storage_ptr__->Value2 = 0.0;
    goto LAB_0067519a;
  }
  (*(uint64_t *)((char *)&(local_d8.Photons) + 32)) = (*(uint64_t *)((char *)&(local_d8.Photons) + 32)) & 0xffffffffffffff00;
  local_ec = 0.0;
  local_d8.Plasma.IsValidData = false;
  (*(uint64_t *)((char *)&(local_d8.Matter) + 32)) = (*(uint64_t *)((char *)&(local_d8.Matter) + 32)) & 0xffffffffffffff00;
  local_d8.Instakill = false;
  local_d8.Photons.Data.Energy_J = 0;
  (*(uint32_t *)((char *)&(local_d8.Photons.Data.Energy_J) + 4)) = 0;
  local_d8.Photons.Data.Radius_m = 0;
  (*(uint32_t *)((char *)&(local_d8.Photons.Data.Radius_m) + 4)) = 0;
  local_d8.Photons.Data.SpreadAngle_radians = 0;
  (*(uint32_t *)((char *)&(local_d8.Photons.Data.SpreadAngle_radians) + 4)) = 0;
  local_d8.Photons.Data.Wavelength_nm = 0;
  (*(uint32_t *)((char *)&(local_d8.Photons.Data.Wavelength_nm) + 4)) = 0;
  local_d8.Plasma.Data.Mass_kg = 0;
  (*(uint32_t *)((char *)&(local_d8.Plasma.Data.Mass_kg) + 4)) = 0;
  local_d8.Plasma.Data.Radius_m = 0;
  (*(uint32_t *)((char *)&(local_d8.Plasma.Data.Radius_m) + 4)) = 0;
  local_d8.Plasma.Data.SpreadAngle_radians = 0;
  (*(uint32_t *)((char *)&(local_d8.Plasma.Data.SpreadAngle_radians) + 4)) = 0;
  local_d8.Plasma.Data.Velocity_km__s = 0;
  (*(uint32_t *)((char *)&(local_d8.Plasma.Data.Velocity_km__s) + 4)) = 0;
  local_d8.Matter.Data.Mass_kg = 0;
  (*(uint32_t *)((char *)&(local_d8.Matter.Data.Mass_kg) + 4)) = 0;
  local_d8.Matter.Data.Radius_m = 0;
  (*(uint32_t *)((char *)&(local_d8.Matter.Data.Radius_m) + 4)) = 0;
  local_d8.Matter.Data.Density_kg__m3 = 0;
  (*(uint32_t *)((char *)&(local_d8.Matter.Data.Density_kg__m3) + 4)) = 0;
  local_d8.Matter.Data.Velocity_km__s = 0;
  (*(uint32_t *)((char *)&(local_d8.Matter.Data.Velocity_km__s) + 4)) = 0;
  if ((*(uint8_t *)((char *)&(param_3.Photons.Data.Wavelength_nm) + 4)) != false) {
    if ((*(uint64_t *)((char *)&(param_3.Photons.Data) + 4)) <= 0.0) {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\damage.cpp",0x9a,
                      "Damage.Photons->Radius_m > 0.",(char *)0x0);
      DebugBreak();
    }
    if ((*(uint8_t *)((char *)&(param_3.Photons.Data.Wavelength_nm) + 4)) == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    (*(uint32_t *)((char *)&(PVar1.Energy_J) + 4)) = param_3.Photons.Data.Energy_J;
    PVar1.Energy_J = *(undefined4 *)((char *)&param_2.Velocity + 24);
    PVar1.Radius_m = (*(uint32_t *)((char *)&(param_3.Photons.Data.Energy_J) + 4));
    (*(uint32_t *)((char *)&(PVar1.Radius_m) + 4)) = param_3.Photons.Data.Radius_m;
    PVar1.SpreadAngle_radians = (double)(*(uint64_t *)((char *)&(param_3.Photons.Data) + 12));
    PVar1.Wavelength_nm = (*(uint32_t *)((char *)&(param_3.Photons.Data.SpreadAngle_radians) + 4));
    (*(uint32_t *)((char *)&(PVar1.Wavelength_nm) + 4)) = param_3.Photons.Data.Wavelength_nm;
    ApplyLaserDamage(this,&local_58,local_dc,PVar1,(double)CONCAT44(in_stack_000000c8,param_4),
                     param_5);
    dVar7 = local_58.Value1.Data.Value2.Velocity_km__s;
    local_16c.Value1.Data.Density_kg__m3 =
         (double)CONCAT44((*(uint32_t *)((char *)&(local_58.Value1.Data.Value1.Energy_J) + 4)),
                          local_58.Value1.Data.Value1.Energy_J);
    local_ec = (double)CONCAT71((*(uint56_t *)((char *)&(local_58.Value2) + 1)),local_58.Value2) + 0.0;
    local_16c.Value1.Data.Velocity_km__s =
         (double)CONCAT44((*(uint32_t *)((char *)&(local_58.Value1.Data.Value1.Radius_m) + 4)),
                          local_58.Value1.Data.Value1.Radius_m);
    local_16c.Value1.IsValidData = SUB41(local_58.Value1.Data.Value1.SpreadAngle_radians,0);
    local_16c.Value3 = local_58.Value1.IsValidData;
    local_16c.Value2.Data.Radius_m = local_58.Value1.Data.Value2.Mass_kg;
    (*(uint32_t *)((char *)&(local_16c.Value2.Data.Radius_m) + 4)) = (*(uint32_t *)((char *)&(local_58.Value1.Data.Value2.Mass_kg) + 4));
    local_16c.Value2.Data.SpreadAngle_radians = local_58.Value1.Data.Value2.Radius_m;
    (*(uint32_t *)((char *)&(local_16c.Value2.Data.SpreadAngle_radians) + 4)) = (*(uint32_t *)((char *)&(local_58.Value1.Data.Value2.Radius_m) + 4));
    local_16c.Value2.Data.Velocity_km__s =
         local_58.Value1.Data.Value2.SpreadAngle_radians;
    (*(uint32_t *)((char *)&(local_16c.Value2.Data.Velocity_km__s) + 4)) =
         (*(uint32_t *)((char *)&(local_58.Value1.Data.Value2.SpreadAngle_radians) + 4));
    local_16c.Value2.IsValidData = local_58.Value1.Data.Value2.Velocity_km__s;
    (*(uint32_t *)((char *)&(local_16c.Value2) + 33)) = (*(uint24_t *)((char *)&(local_58.Value1.Data.Value2.Velocity_km__s) + 1));
    (*(uint32_t *)((char *)&(local_16c.Value2) + 36)) = (*(uint32_t *)((char *)&(local_58.Value1.Data.Value2.Velocity_km__s) + 4));
    local_58.Value1.Data.Value2.Velocity_km__s = dVar7;
    if (local_58.Value1.IsValidData != false) {
      local_58.Value2 = 1;
      (*(uint64_t *)((char *)&(local_d8.Photons) + 32)) = CONCAT71((*(uint56_t *)((char *)&(local_58.Value2) + 1)),1);
      local_d8.Photons.Data.Energy_J = local_58.Value1.Data.Value1.Energy_J;
      (*(uint32_t *)((char *)&(local_d8.Photons.Data.Energy_J) + 4)) = (*(uint32_t *)((char *)&(local_58.Value1.Data.Value1.Energy_J) + 4));
      local_d8.Photons.Data.Radius_m = local_58.Value1.Data.Value1.Radius_m;
      (*(uint32_t *)((char *)&(local_d8.Photons.Data.Radius_m) + 4)) = (*(uint32_t *)((char *)&(local_58.Value1.Data.Value1.Radius_m) + 4));
      local_d8.Photons.Data.SpreadAngle_radians =
           local_58.Value1.Data.Value1.SpreadAngle_radians;
      (*(uint32_t *)((char *)&(local_d8.Photons.Data.SpreadAngle_radians) + 4)) =
           (*(uint32_t *)((char *)&(local_58.Value1.Data.Value1.SpreadAngle_radians) + 4));
      local_d8.Photons.Data.Wavelength_nm = local_58.Value1.Data.Value1.Wavelength_nm;
      (*(uint32_t *)((char *)&(local_d8.Photons.Data.Wavelength_nm) + 4)) = (*(uint32_t *)((char *)&(local_58.Value1.Data.Value1.Wavelength_nm) + 4));
      DamagerContainer__AddPlasma(&local_d8,(PlasmaDamager *)&local_16c.Value2.Data.Radius_m);
    }
  }
  if (((*(uint8_t *)((char *)&(param_3.Plasma.Data.Velocity_km__s) + 4)) != false) &&
     (local_fc = (*(uint64_t *)((char *)&(param_3.Plasma.Data) + 4)), 0.0 < local_fc)) {
    local_f4 = (*(uint64_t *)((char *)&(param_3) + 36));
    local_114 = (*(uint64_t *)((char *)&(param_3.Plasma.Data) + 12));
    local_104 = (*(uint64_t *)((char *)&(param_3.Plasma.Data) + 20));
    dVar7 = local_f4;
    dVar3 = local_fc;
    dVar4 = local_114;
    uVar5 = local_104;
    if (this->Thickness_m != 0.0) {
      uVar8 = (*(uint32_t *)((char *)&(param_3.Plasma.Data.Mass_kg) + 4));
      uVar9 = param_3.Plasma.Data.Radius_m;
      uVar10 = (*(uint32_t *)((char *)&(param_3.Plasma.Data.SpreadAngle_radians) + 4));
      uVar11 = param_3.Plasma.Data.Velocity_km__s;
      if (local_dc == (Material *)0x0) {
        util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\damage.cpp",
                        0x144,"Composition",(char *)0x0);
        DebugBreak();
        uVar8 = SUB84(local_fc,0);
        uVar9 = (undefined4)((ulonglong)local_fc >> 0x20);
        uVar10 = (undefined4)local_104;
        uVar11 = SUB84(local_104,4);
      }
      local_e4 = (double)CONCAT44(uVar9,uVar8) * 3.141592653589793 * (double)CONCAT44(uVar9,uVar8);
      local_10c = Physics__GetKineticEnergy_J(local_f4,(double)CONCAT44(uVar11,uVar10) * 1000.0);
      if (293.15 <= local_dc->ThermalConductivity_W__m_K) {
        local_e4 = (local_10c /
                   ((local_dc->ThermalConductivity_W__m_K - 293.15) * local_dc->BoilingPoint_K *
                    local_dc->Density_kg__m3 * local_e4)) *
                   (double)CONCAT44(in_stack_000000c8,param_4);
      }
      else {
        local_e4 = (double)this->Thickness_m;
      }
      if (local_e4 <= 0.0) {
        util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\damage.cpp",
                        0x151,"PenetrationDepth_m > 0",(char *)0x0);
        DebugBreak();
      }
      if (local_e4 <= (double)this->Thickness_m) {
        this->Thickness_m = (float)((double)this->Thickness_m - local_e4);
        goto LAB_00675001;
      }
      PVar2.Radius_m = SUB84(local_fc,0);
      PVar2.Mass_kg = local_f4;
      (*(uint32_t *)((char *)&(PVar2.Radius_m) + 4)) = (int)((ulonglong)local_fc >> 0x20);
      PVar2.SpreadAngle_radians = SUB84(local_114,0);
      (*(uint32_t *)((char *)&(PVar2.SpreadAngle_radians) + 4)) = (int)((ulonglong)local_114 >> 0x20);
      PVar2.Velocity_km__s = (int)local_104;
      (*(uint32_t *)((char *)&(PVar2.Velocity_km__s) + 4)) = SUB84(local_104,4);
      GetArmorConvertedToPlasma(this,&local_18c,local_dc,PVar2);
      this->Thickness_m = 0.0;
      local_58.Value1.Data.Value2.Radius_m =
           (double)CONCAT44((*(uint32_t *)((char *)&(local_18c.Mass_kg) + 4)),local_18c.Mass_kg);
      local_58.Value1.Data.Value2.SpreadAngle_radians =
           (double)CONCAT44((*(uint32_t *)((char *)&(local_18c.Radius_m) + 4)),local_18c.Radius_m);
      local_58.Value1.Data.Value2.Velocity_km__s =
           (double)CONCAT44((*(uint32_t *)((char *)&(local_18c.SpreadAngle_radians) + 4)),local_18c.SpreadAngle_radians)
      ;
      (*(uint32_t *)((char *)&(local_58.Value1) + 68)) = (*(uint32_t *)((char *)&(local_18c.Velocity_km__s) + 4));
      (*(uint32_t *)((char *)&(local_58.Value1) + 64)) = local_18c.Velocity_km__s;
      dVar7 = local_58.Value1.Data.Value2.Radius_m;
      dVar3 = local_58.Value1.Data.Value2.SpreadAngle_radians;
      dVar4 = local_58.Value1.Data.Value2.Velocity_km__s;
      uVar5 = (*(uint64_t *)((char *)&(local_58.Value1) + 64));
    }
    (*(uint64_t *)((char *)&(local_58.Value1) + 64)) = uVar5;
    local_58.Value1.Data.Value2.Velocity_km__s = dVar4;
    local_58.Value1.Data.Value2.SpreadAngle_radians = dVar3;
    local_58.Value1.Data.Value2.Radius_m = dVar7;
    local_58.Value2 = 1;
    DamagerContainer__AddPlasma(&local_d8,(PlasmaDamager *)&local_58.Value1.Data.Value2.Radius_m);
  }
LAB_00675001:
  dVar7 = local_ec;
  if ((*(uint8_t *)((char *)&(param_3.Matter.Data.Velocity_km__s) + 4)) != false) {
    if ((*(uint64_t *)((char *)&(param_3.Matter.Data) + 4)) <= 0.0) {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\damage.cpp",0xb3,
                      "Damage.Matter->Radius_m > 0.",(char *)0x0);
      DebugBreak();
    }
    if ((*(uint8_t *)((char *)&(param_3.Matter.Data.Velocity_km__s) + 4)) == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    ApplyMatterDamage(this,&local_16c,local_dc,(*(uint32_t *)((char *)&(param_3) + 76)),
                      (double)CONCAT44(in_stack_000000c8,param_4));
    if (local_16c.Value1.IsValidData != false) {
      local_58.Value2 = 1;
      (*(uint64_t *)((char *)&(local_d8.Matter) + 32)) = CONCAT71((*(uint56_t *)((char *)&(local_58.Value2) + 1)),1);
      local_d8.Matter.Data.Mass_kg = local_16c.Value1.Data.Mass_kg;
      (*(uint32_t *)((char *)&(local_d8.Matter.Data.Mass_kg) + 4)) = (*(uint32_t *)((char *)&(local_16c.Value1.Data.Mass_kg) + 4));
      local_d8.Matter.Data.Radius_m = local_16c.Value1.Data.Radius_m;
      (*(uint32_t *)((char *)&(local_d8.Matter.Data.Radius_m) + 4)) = (*(uint32_t *)((char *)&(local_16c.Value1.Data.Radius_m) + 4));
      local_d8.Matter.Data.Density_kg__m3 = local_16c.Value1.Data.Density_kg__m3;
      (*(uint32_t *)((char *)&(local_d8.Matter.Data.Density_kg__m3) + 4)) = (*(uint32_t *)((char *)&(local_16c.Value1.Data.Density_kg__m3) + 4));
      local_d8.Matter.Data.Velocity_km__s = local_16c.Value1.Data.Velocity_km__s;
      (*(uint32_t *)((char *)&(local_d8.Matter.Data.Velocity_km__s) + 4)) = (*(uint32_t *)((char *)&(local_16c.Value1.Data.Velocity_km__s) + 4));
    }
    if (local_16c.Value2.IsValidData != false) {
      DamagerContainer__AddPlasma(&local_d8,&local_16c.Value2.Data);
    }
    dVar7 = (double)CONCAT71((*(uint56_t *)((char *)&(local_16c.Value3) + 1)),local_16c.Value3) + local_ec;
  }
  if ((*(uint8_t *)((char *)&(param_3.Matter) + 36)) != '\0') {
    this->Thickness_m = 0.0;
  }
  *(undefined4 *)&((__return_storage_ptr__->Value1).Photons.Data.Energy_J) = local_d8.Photons.Data.Energy_J;
  *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Photons.Data.Energy_J + 4) =
       (*(uint32_t *)((char *)&(local_d8.Photons.Data.Energy_J) + 4));
  *(undefined4 *)&((__return_storage_ptr__->Value1).Photons.Data.Radius_m) = local_d8.Photons.Data.Radius_m;
  *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Photons.Data.Radius_m + 4) =
       (*(uint32_t *)((char *)&(local_d8.Photons.Data.Radius_m) + 4));
  *(undefined4 *)&((__return_storage_ptr__->Value1).Photons.Data.SpreadAngle_radians) = local_d8.Photons.Data.SpreadAngle_radians;
  *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Photons.Data.SpreadAngle_radians + 4) =
       (*(uint32_t *)((char *)&(local_d8.Photons.Data.SpreadAngle_radians) + 4));
  *(undefined4 *)&((__return_storage_ptr__->Value1).Photons.Data.Wavelength_nm) = local_d8.Photons.Data.Wavelength_nm;
  *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Photons.Data.Wavelength_nm + 4) =
       (*(uint32_t *)((char *)&(local_d8.Photons.Data.Wavelength_nm) + 4));
  (__return_storage_ptr__->Value1).Photons.IsValidData = local_d8.Photons.IsValidData;
  *(undefined4 *)&((__return_storage_ptr__->Value1).Plasma.Data.Mass_kg) = local_d8.Plasma.Data.Mass_kg;
  *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Plasma.Data.Mass_kg + 4) =
       (*(uint32_t *)((char *)&(local_d8.Plasma.Data.Mass_kg) + 4));
  *(undefined4 *)&((__return_storage_ptr__->Value1).Plasma.Data.Radius_m) = local_d8.Plasma.Data.Radius_m;
  *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Plasma.Data.Radius_m + 4) =
       (*(uint32_t *)((char *)&(local_d8.Plasma.Data.Radius_m) + 4));
  *(undefined4 *)&((__return_storage_ptr__->Value1).Plasma.Data.SpreadAngle_radians) = local_d8.Plasma.Data.SpreadAngle_radians;
  *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Plasma.Data.SpreadAngle_radians + 4) =
       (*(uint32_t *)((char *)&(local_d8.Plasma.Data.SpreadAngle_radians) + 4));
  *(undefined4 *)&((__return_storage_ptr__->Value1).Plasma.Data.Velocity_km__s) = local_d8.Plasma.Data.Velocity_km__s;
  *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Plasma.Data.Velocity_km__s + 4) =
       (*(uint32_t *)((char *)&(local_d8.Plasma.Data.Velocity_km__s) + 4));
  (__return_storage_ptr__->Value1).Plasma.IsValidData = local_d8.Plasma.IsValidData;
  *(undefined4 *)&((__return_storage_ptr__->Value1).Matter.Data.Mass_kg) = local_d8.Matter.Data.Mass_kg;
  *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Matter.Data.Mass_kg + 4) =
       (*(uint32_t *)((char *)&(local_d8.Matter.Data.Mass_kg) + 4));
  *(undefined4 *)&((__return_storage_ptr__->Value1).Matter.Data.Radius_m) = local_d8.Matter.Data.Radius_m;
  *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Matter.Data.Radius_m + 4) =
       (*(uint32_t *)((char *)&(local_d8.Matter.Data.Radius_m) + 4));
  *(undefined4 *)&((__return_storage_ptr__->Value1).Matter.Data.Density_kg__m3) = local_d8.Matter.Data.Density_kg__m3;
  *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Matter.Data.Density_kg__m3 + 4) =
       (*(uint32_t *)((char *)&(local_d8.Matter.Data.Density_kg__m3) + 4));
  *(undefined4 *)&((__return_storage_ptr__->Value1).Matter.Data.Velocity_km__s) = local_d8.Matter.Data.Velocity_km__s;
  *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Matter.Data.Velocity_km__s + 4) =
       (*(uint32_t *)((char *)&(local_d8.Matter.Data.Velocity_km__s) + 4));
  (__return_storage_ptr__->Value1).Matter.IsValidData = local_d8.Matter.IsValidData;
  (__return_storage_ptr__->Value1).Instakill = (bool)(*(uint8_t *)((char *)&(param_3.Matter) + 36));
  __return_storage_ptr__->Value2 = dVar7;
LAB_0067519a:
  if (param_1.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_1.Controller);
  }
  return __return_storage_ptr__;
}

//==== 006751c0 ApplyLaserDamage ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: struct util__tuple2_L_classutil__Maybe_L_structutil__tuple2_L_structPhotonDamager_Cstruct_PlasmaDamager_G__G__Cdouble_G_ __thiscall ArmorPlate__ApplyLaserDamage(class Material const *,struct
   PhotonDamager,double,double) */

tuple2_L_util__Maybe_L_util__tuple2_L_PhotonDamager_CPlasmaDamager_G___G__Cdouble_G_ * __thiscall
ArmorPlate__ApplyLaserDamage
          (ArmorPlate *this,
          tuple2_L_util__Maybe_L_util__tuple2_L_PhotonDamager_CPlasmaDamager_G___G__Cdouble_G_
          *__return_storage_ptr__,Material *param_1,PhotonDamager param_2,double param_3,
          double param_4)

{
  undefined8 stack0xfffffffc;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 local_3c [16];
  double local_2c;
  double local_24;
  double local_1c;
  double local_14;
  Maybe_L_double_G_ *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (this->Thickness_m == 0.0) {
    *(undefined4 *)&(__return_storage_ptr__->Value1).Data.Value1.Energy_J = param_2.Energy_J;
    *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Data.Value1.Energy_J + 4) =
         (*(uint32_t *)((char *)&(param_2.Energy_J) + 4));
    *(undefined4 *)&(__return_storage_ptr__->Value1).Data.Value1.Radius_m = param_2.Radius_m;
    *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Data.Value1.Radius_m + 4) =
         (*(uint32_t *)((char *)&(param_2.Radius_m) + 4));
    *(undefined4 *)&((__return_storage_ptr__->Value1).Data.Value1.SpreadAngle_radians) = param_2.SpreadAngle_radians;
    *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Data.Value1.SpreadAngle_radians + 4) =
         (*(uint32_t *)((char *)&(param_2.SpreadAngle_radians) + 4));
    *(undefined4 *)&((__return_storage_ptr__->Value1).Data.Value1.Wavelength_nm) = param_2.Wavelength_nm;
    *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Data.Value1.Wavelength_nm + 4) =
         (*(uint32_t *)((char *)&(param_2.Wavelength_nm) + 4));
    *(undefined4 *)&(__return_storage_ptr__->Value1).Data.Value2.Mass_kg = 0;
    *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Data.Value2.Mass_kg + 4) = 0;
    *(undefined4 *)&(__return_storage_ptr__->Value1).Data.Value2.Radius_m = 0;
    *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Data.Value2.Radius_m + 4) = 0;
    *(undefined4 *)&(__return_storage_ptr__->Value1).Data.Value2.SpreadAngle_radians = 0;
    *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Data.Value2.SpreadAngle_radians + 4) = 0;
    *(undefined4 *)&(__return_storage_ptr__->Value1).Data.Value2.Velocity_km__s = 0;
    *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Data.Value2.Velocity_km__s + 4) = 0;
    (__return_storage_ptr__->Value1).IsValidData = true;
    __return_storage_ptr__->Value2 = 0.0;
  }
  else {
    dVar2 = param_2.Radius_m;
    *(uint32_t *)&local_24 = dVar2 * 3.141592653589793 * dVar2;
    if ((((param_1 == (Material *)0x0) || (param_1->BoilingPoint_K <= 0.0)) ||
        (param_1->UltimateTensileStrength_MPa <= 0.0)) ||
       (((param_1->Density_kg__m3 <= 0.0 || (param_1->ThermalConductivity_W__m_K <= 0.0)) ||
        ((param_1->Resistivity_Ohm_m <= 0.0 || (param_1->ShearModulus_GPa <= 0.0)))))) {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\damage.cpp",0xf0,
                      "Composition && Composition->SpecificHeat_J__kg_K > 0 && Composition->UltimateTensileStrength_MPa > 0 && Composition->Density_kg__m3 > 0 && Composition->MeltingPoint_K > 0 && Composition->ThermalConductivity_W__m_K > 0 && Composition->ShearModulus_GPa > 0"
                      ,(char *)0x0);
      DebugBreak();
    }
    *(uint32_t *)&local_1c = Material__GetOpaqueThickness_m(param_1,param_2.Wavelength_nm);
    dVar5 = Material__GetThermalDiffusivity_m2__s(param_1);
    local_14 = dVar5 * 4.0 * param_4;
    local_c = util__Sqrt((Maybe_L_double_G_ *)local_3c,&local_14);
    if (local_c->IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar5 = local_c->Data;
    if (local_c->Data <= local_1c) {
      dVar5 = local_1c;
    }
    local_14 = param_1->Density_kg__m3;
    dVar4 = param_1->ThermalConductivity_W__m_K;
    local_c = (Maybe_L_double_G_ *)(uintptr_t)*(undefined4 *)&((this->Thickness_m));
    dVar3 = (param_2.Energy_J / (param_1->BoilingPoint_K * local_24 * local_14 * dVar5)) / dVar4;
    if (dVar3 <= 0.0) {
      dVar3 = 0.0;
    }
    dVar1 = (double)(uintptr_t)((double)(float)(int)(uintptr_t)(local_c));
    if (1.0 <= dVar3) {
      dVar3 = 1.0;
    }
    dVar3 = dVar3 * dVar5 * param_3;
    dVar5 = dVar1;
    if (dVar3 <= dVar1) {
      dVar5 = dVar3;
    }
    (*(uint64_t*)((char*)&(local_3c)+8)) = dVar5 * local_24 * local_14;
    if (dVar3 <= dVar1) {
      this->Thickness_m = (float)(dVar1 - dVar3);
      *(undefined4 *)&(__return_storage_ptr__->Value1).Data.Value1.Energy_J = 0;
      *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Data.Value1.Energy_J + 4) = 0;
      *(undefined4 *)&(__return_storage_ptr__->Value1).Data.Value1.Radius_m = 0;
      *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Data.Value1.Radius_m + 4) = 0;
      *(undefined4 *)&(__return_storage_ptr__->Value1).Data.Value1.SpreadAngle_radians = 0;
      *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Data.Value1.SpreadAngle_radians + 4) =
           0;
      *(undefined4 *)&(__return_storage_ptr__->Value1).Data.Value1.Wavelength_nm = 0;
      *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Data.Value1.Wavelength_nm + 4) = 0;
      *(undefined4 *)&(__return_storage_ptr__->Value1).Data.Value2.Mass_kg = 0;
      *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Data.Value2.Mass_kg + 4) = 0;
      *(undefined4 *)&(__return_storage_ptr__->Value1).Data.Value2.Radius_m = 0;
      *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Data.Value2.Radius_m + 4) = 0;
      *(undefined4 *)&(__return_storage_ptr__->Value1).Data.Value2.SpreadAngle_radians = 0;
      *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Data.Value2.SpreadAngle_radians + 4) =
           0;
      *(undefined4 *)&(__return_storage_ptr__->Value1).Data.Value2.Velocity_km__s = 0;
      *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Data.Value2.Velocity_km__s + 4) = 0;
      (__return_storage_ptr__->Value1).IsValidData = false;
      __return_storage_ptr__->Value2 = (double)(*(uint64_t*)((char*)&(local_3c)+8));
    }
    else {
      *(uint32_t *)&local_2c = (1.0 - dVar1 / dVar3) * param_2.Energy_J;
      if (local_2c <= 0.0) {
        util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\damage.cpp",
                        0x132,"RemainingEnergy_J > 0.",(char *)0x0);
        DebugBreak();
        local_c = (Maybe_L_double_G_ *)(uintptr_t)*(undefined4 *)&((this->Thickness_m));
        dVar4 = param_1->ThermalConductivity_W__m_K;
        local_14 = param_1->Density_kg__m3;
      }
      *(uint32_t *)&local_24 = dVar2;
      dVar5 = Material__GetGasSpeedOfSound_km__s(param_1,dVar4);
      dVar2 = DAT_0095f3d0;
      this->Thickness_m = 0.0;
      (__return_storage_ptr__->Value1).Data.Value1.Energy_J = local_2c;
      *(undefined4 *)&((__return_storage_ptr__->Value1).Data.Value1.Radius_m) = param_2.Radius_m
      ;
      *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Data.Value1.Radius_m + 4) =
           (*(uint32_t *)((char *)&(param_2.Radius_m) + 4));
      *(undefined4 *)&((__return_storage_ptr__->Value1).Data.Value1.SpreadAngle_radians) = param_2.SpreadAngle_radians;
      *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Data.Value1.SpreadAngle_radians + 4) =
           (*(uint32_t *)((char *)&(param_2.SpreadAngle_radians) + 4));
      (__return_storage_ptr__->Value1).Data.Value1.Wavelength_nm = param_2.Wavelength_nm;
      (__return_storage_ptr__->Value1).Data.Value2.Mass_kg =
           local_24 * local_24 * 3.141592653589793 * (double)(float)(int)(uintptr_t)(local_c) * local_14;
      (__return_storage_ptr__->Value1).Data.Value2.Radius_m = local_24;
      (__return_storage_ptr__->Value1).Data.Value2.SpreadAngle_radians = dVar2;
      (__return_storage_ptr__->Value1).Data.Value2.Velocity_km__s = dVar5;
      (__return_storage_ptr__->Value1).IsValidData = true;
      __return_storage_ptr__->Value2 = (double)(*(uint64_t*)((char*)&(local_3c)+8));
    }
  }
  return __return_storage_ptr__;
}

//==== 006759b0 CombineDamage ====


/* public: void __thiscall DamagerContainer__CombineDamage(struct DamagerContainer const &) */

void __thiscall DamagerContainer__CombineDamage(DamagerContainer *this,DamagerContainer *param_1)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  undefined7 uStack_13;
  
  if ((param_1->Matter).IsValidData != false) {
    if ((param_1->Matter).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x12,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    CombineMatter(this,&(param_1->Matter).Data);
  }
  if ((param_1->Photons).IsValidData != false) {
    if ((this->Photons).IsValidData == false) {
      uVar6 = *(undefined4 *)&(param_1->Photons).Data.SpreadAngle_radians;
      uVar7 = *(undefined4 *)((int)&(param_1->Photons).Data.SpreadAngle_radians + 4);
      uVar8 = *(undefined4 *)&(param_1->Photons).Data.Wavelength_nm;
      uVar9 = *(undefined4 *)((int)&(param_1->Photons).Data.Wavelength_nm + 4);
      uVar3 = *(undefined4 *)((int)&(param_1->Photons).Data.Energy_J + 4);
      uVar4 = *(undefined4 *)&(param_1->Photons).Data.Radius_m;
      uVar5 = *(undefined4 *)((int)&(param_1->Photons).Data.Radius_m + 4);
      *(undefined4 *)&((this->Photons).Data.Energy_J) = *(undefined4 *)&(param_1->Photons).Data.Energy_J;
      *(undefined4 *)((int)&(this->Photons).Data.Energy_J + 4) = uVar3;
      *(undefined4 *)&(this->Photons).Data.Radius_m = uVar4;
      *(undefined4 *)((int)&(this->Photons).Data.Radius_m + 4) = uVar5;
      *(undefined4 *)&(this->Photons).Data.SpreadAngle_radians = uVar6;
      *(undefined4 *)((int)&(this->Photons).Data.SpreadAngle_radians + 4) = uVar7;
      *(undefined4 *)&(this->Photons).Data.Wavelength_nm = uVar8;
      *(undefined4 *)((int)&(this->Photons).Data.Wavelength_nm + 4) = uVar9;
      *(ulonglong *)&(this->Photons).IsValidData = CONCAT71(uStack_13,1);
    }
    else {
      dVar1 = (this->Photons).Data.Energy_J;
      dVar2 = (param_1->Photons).Data.Energy_J;
      if (dVar1 <= dVar2) {
        dVar1 = dVar2;
      }
      (this->Photons).Data.Energy_J = dVar1;
      dVar1 = (this->Photons).Data.Radius_m;
      dVar2 = (param_1->Photons).Data.Radius_m;
      if (dVar1 <= dVar2) {
        dVar1 = dVar2;
      }
      cVar10 = (this->Photons).IsValidData;
      if ((bool)cVar10 == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                        "IsValid()",(char *)0x0);
        DebugBreak();
        cVar10 = (this->Photons).IsValidData;
      }
      (this->Photons).Data.Radius_m = dVar1;
      if (cVar10 == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      dVar1 = (this->Photons).Data.SpreadAngle_radians;
      dVar2 = (param_1->Photons).Data.SpreadAngle_radians;
      if (dVar1 <= dVar2) {
        dVar1 = dVar2;
      }
      cVar10 = (this->Photons).IsValidData;
      if ((bool)cVar10 == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                        "IsValid()",(char *)0x0);
        DebugBreak();
        cVar10 = (this->Photons).IsValidData;
      }
      (this->Photons).Data.SpreadAngle_radians = dVar1;
      if (cVar10 == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      dVar1 = (this->Photons).Data.Wavelength_nm;
      dVar2 = (param_1->Photons).Data.Wavelength_nm;
      if (dVar2 <= dVar1) {
        dVar1 = dVar2;
      }
      if ((this->Photons).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      (this->Photons).Data.Wavelength_nm = dVar1;
    }
  }
  if ((param_1->Plasma).IsValidData != false) {
    if ((param_1->Plasma).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x12,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    AddPlasma(this,&(param_1->Plasma).Data);
  }
  return;
}





//==== 00675b60 CombineMatter ====


/* public: void __thiscall DamagerContainer__CombineMatter(struct MatterDamager const &) */

void __thiscall DamagerContainer__CombineMatter(DamagerContainer *this,MatterDamager *param_1)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  undefined7 uStack_13;
  
  if ((this->Matter).IsValidData != false) {
    if ((this->Matter).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
      if ((this->Matter).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
    }
    (this->Matter).Data.Mass_kg = (this->Matter).Data.Mass_kg + param_1->Mass_kg;
    cVar9 = (this->Matter).IsValidData;
    if ((bool)cVar9 == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
      cVar9 = (this->Matter).IsValidData;
    }
    dVar1 = (this->Matter).Data.Radius_m;
    if (dVar1 <= param_1->Radius_m) {
      dVar1 = param_1->Radius_m;
    }
    if (cVar9 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
      cVar9 = (this->Matter).IsValidData;
    }
    (this->Matter).Data.Radius_m = dVar1;
    if (cVar9 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar1 = (this->Matter).Data.Density_kg__m3;
    if (dVar1 <= param_1->Density_kg__m3) {
      dVar1 = param_1->Density_kg__m3;
    }
    cVar9 = (this->Matter).IsValidData;
    if ((bool)cVar9 == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
      cVar9 = (this->Matter).IsValidData;
    }
    (this->Matter).Data.Density_kg__m3 = dVar1;
    if (cVar9 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar1 = (this->Matter).Data.Velocity_km__s;
    if (dVar1 <= param_1->Velocity_km__s) {
      dVar1 = param_1->Velocity_km__s;
    }
    if ((this->Matter).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    (this->Matter).Data.Velocity_km__s = dVar1;
    return;
  }
  uVar5 = *(undefined4 *)&param_1->Density_kg__m3;
  uVar6 = *(undefined4 *)((int)&param_1->Density_kg__m3 + 4);
  uVar7 = *(undefined4 *)&param_1->Velocity_km__s;
  uVar8 = *(undefined4 *)((int)&param_1->Velocity_km__s + 4);
  uVar2 = *(undefined4 *)((int)&param_1->Mass_kg + 4);
  uVar3 = *(undefined4 *)&param_1->Radius_m;
  uVar4 = *(undefined4 *)((int)&param_1->Radius_m + 4);
  *(undefined4 *)&(this->Matter).Data.Mass_kg = *(undefined4 *)&param_1->Mass_kg;
  *(undefined4 *)((int)&(this->Matter).Data.Mass_kg + 4) = uVar2;
  *(undefined4 *)&(this->Matter).Data.Radius_m = uVar3;
  *(undefined4 *)((int)&(this->Matter).Data.Radius_m + 4) = uVar4;
  *(undefined4 *)&(this->Matter).Data.Density_kg__m3 = uVar5;
  *(undefined4 *)((int)&(this->Matter).Data.Density_kg__m3 + 4) = uVar6;
  *(undefined4 *)&(this->Matter).Data.Velocity_km__s = uVar7;
  *(undefined4 *)((int)&(this->Matter).Data.Velocity_km__s + 4) = uVar8;
  *(ulonglong *)&(this->Matter).IsValidData = CONCAT71(uStack_13,1);
  return;
}





//==== 00675d10 Destroy ====


/* public: void __thiscall ArmorPlate__Destroy(void) */

void __thiscall ArmorPlate__Destroy(ArmorPlate *this)

{
  this->Thickness_m = 0.0;
  return;
}





//==== 00675d20 GenerateEffects ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: static void __cdecl ArmorPlate__GenerateEffects(class util__WeakPtr_L_class_EffectManager_G_,struct DamagerContainer,struct util__PhysicalState_L_structutil__Vec3_L_double_G___G_,struct util__Vec3_L_double_G_,double,class Material const *) */

void __cdecl
ArmorPlate__GenerateEffects
          (EffectManager *param_1,ReferenceController *param_2,undefined8 param_3,undefined8 param_4
          ,undefined4 param_5,undefined4 param_6,undefined8 param_7,char param_8)

{
  bool bVar1;
  double dVar2;
  double in_stack_0000005c;
  undefined8 in_stack_00000064;
  double in_stack_00000074;
  char in_stack_0000007c;
  undefined4 in_stack_0000008c;
  undefined4 in_stack_00000090;
  undefined4 in_stack_00000094;
  undefined4 in_stack_00000098;
  undefined4 in_stack_0000009c;
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a4;
  undefined4 in_stack_000000a8;
  undefined4 in_stack_000000ac;
  undefined4 in_stack_000000b0;
  undefined4 in_stack_000000b4;
  undefined4 in_stack_000000b8;
  undefined4 in_stack_000000bc;
  undefined4 in_stack_000000c0;
  uint in_stack_000000c4;
  undefined4 in_stack_000000c8;
  undefined8 in_stack_000000cc;
  undefined8 in_stack_000000d4;
  undefined4 in_stack_000000dc;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint in_stack_ffffffcc;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (param_8 != '\0') {
    uVar7 = 1;
    uVar8 = 0;
    uVar9 = 0;
    uVar10 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = in_stack_ffffffcc & 0xffffff00;
    if (param_8 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if ((param_2 != (ReferenceController *)0x0) &&
       (bVar1 = util__ReferenceController__IsDataStillValid(param_2), !bVar1)) {
      param_1 = (EffectManager *)0x0;
    }
    EffectManager__NewFlash
              (param_1,in_stack_0000008c,in_stack_00000090,in_stack_00000094,in_stack_00000098,
               in_stack_0000009c,in_stack_000000a0,in_stack_000000a4,in_stack_000000a8,
               in_stack_000000ac,in_stack_000000b0,in_stack_000000b4,in_stack_000000b8,param_4,
               param_3,param_7,0,0,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
    if (param_8 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if ((param_2 != (ReferenceController *)0x0) &&
       (bVar1 = util__ReferenceController__IsDataStillValid(param_2), !bVar1)) {
      param_1 = (EffectManager *)0x0;
    }
    in_stack_ffffffcc = in_stack_000000c4;
    EffectManager__NewArmorSparking
              (param_1,in_stack_000000dc,in_stack_0000008c,in_stack_00000090,in_stack_00000094,
               in_stack_00000098,in_stack_0000009c,in_stack_000000a0,in_stack_000000a4,
               in_stack_000000a8,in_stack_000000ac,in_stack_000000b0,in_stack_000000b4,
               in_stack_000000b8,in_stack_000000bc,in_stack_000000c0,in_stack_000000c4,
               in_stack_000000c8,in_stack_000000cc,param_4,in_stack_000000d4);
  }
  if (in_stack_0000007c != '\0') {
    dVar2 = Physics__GetKineticEnergy_J(in_stack_0000005c,in_stack_00000074 * 1000.0);
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar10 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = in_stack_ffffffcc & 0xffffff00;
    if (in_stack_0000007c == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if ((param_2 != (ReferenceController *)0x0) &&
       (bVar1 = util__ReferenceController__IsDataStillValid(param_2), !bVar1)) {
      param_1 = (EffectManager *)0x0;
    }
    EffectManager__NewFlash
              (param_1,in_stack_0000008c,in_stack_00000090,in_stack_00000094,in_stack_00000098,
               in_stack_0000009c,in_stack_000000a0,in_stack_000000a4,in_stack_000000a8,
               in_stack_000000ac,in_stack_000000b0,in_stack_000000b4,in_stack_000000b8,
               in_stack_00000064,dVar2 * 1000.0,0,0x40a6080000000000,0,uVar3,uVar4,uVar5,uVar6,uVar7
               ,uVar8,uVar9,uVar10);
    if (in_stack_0000007c == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if ((param_2 != (ReferenceController *)0x0) &&
       (bVar1 = util__ReferenceController__IsDataStillValid(param_2), !bVar1)) {
      param_1 = (EffectManager *)0x0;
    }
    EffectManager__NewArmorSparking
              (param_1,in_stack_000000dc,in_stack_0000008c,in_stack_00000090,in_stack_00000094,
               in_stack_00000098,in_stack_0000009c,in_stack_000000a0,in_stack_000000a4,
               in_stack_000000a8,in_stack_000000ac,in_stack_000000b0,in_stack_000000b4,
               in_stack_000000b8,in_stack_000000bc,in_stack_000000c0,in_stack_000000c4,
               in_stack_000000c8,in_stack_000000cc,in_stack_00000064,in_stack_000000d4);
  }
  if (param_2 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_2);
  }
  return;
}





//==== 00676090 GetArmorConvertedToPlasma ====


/* private: struct PlasmaDamager  ArmorPlate__GetArmorConvertedToPlasma(class Material
   const *,struct PlasmaDamager)const  */

PlasmaDamager * 
ArmorPlate__GetArmorConvertedToPlasma
          (ArmorPlate *this,PlasmaDamager *__return_storage_ptr__,Material *param_1,
          PlasmaDamager param_2)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dStack_c;
  
  dVar4 = param_2.Radius_m * param_2.Radius_m * 3.141592653589793 * (double)this->Thickness_m *
          param_1->Density_kg__m3;
  dVar5 = param_2.Mass_kg + dVar4;
  if (NAN(dVar5) != (dVar5 == 0.0)) {
    __return_storage_ptr__->Mass_kg = param_2.Mass_kg;
    __return_storage_ptr__->Radius_m = param_2.Radius_m;
    *(undefined4 *)&__return_storage_ptr__->SpreadAngle_radians = param_2.SpreadAngle_radians;
    *(undefined4 *)((int)&__return_storage_ptr__->SpreadAngle_radians + 4) =
         (*(uint32_t *)((char *)&(param_2.SpreadAngle_radians) + 4));
    *(undefined4 *)&__return_storage_ptr__->Velocity_km__s = param_2.Velocity_km__s;
    *(undefined4 *)((int)&__return_storage_ptr__->Velocity_km__s + 4) = (*(uint32_t *)((char *)&(param_2.Velocity_km__s) + 4))
    ;
    return __return_storage_ptr__;
  }
  dVar5 = (param_2.Velocity_km__s * param_2.Mass_kg) / dVar5;
  dVar6 = param_1->ThermalConductivity_W__m_K;
  uVar2 = SUB84(dVar6,0);
  uVar3 = (undefined4)((ulonglong)dVar6 >> 0x20);
  dVar1 = param_1->ThermalExpansion__K;
  if (dVar6 <= dVar1) {
    uVar2 = SUB84(dVar1,0);
    uVar3 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  dStack_c = dVar5;
  dVar6 = Material__GetGasExpansionVelocity_km__s(param_1,(double)CONCAT44(uVar3,uVar2));
  dStack_c = dVar6 / dStack_c;
  libm_sse2_atan_precise(0.0);
  dVar6 = util__Abs(&dStack_c);
  __return_storage_ptr__->Mass_kg = param_2.Mass_kg + dVar4;
  __return_storage_ptr__->Radius_m = param_2.Radius_m;
  uVar2 = 0x54442d18;
  uVar3 = 0x3fe921fb;
  if (dVar6 <= 0.7853981633974483) {
    uVar2 = SUB84(dVar6,0);
    uVar3 = (undefined4)((ulonglong)dVar6 >> 0x20);
  }
  __return_storage_ptr__->SpreadAngle_radians = (double)CONCAT44(uVar3,uVar2);
  __return_storage_ptr__->Velocity_km__s = dVar5;
  return __return_storage_ptr__;
}





//==== 006761a0 GetDamagePercent ====


/* public: double __thiscall ArmorPlate__GetDamagePercent(struct ArmorLayerBlueprint const &)const
    */

double __thiscall ArmorPlate__GetDamagePercent(ArmorPlate *this,ArmorLayerBlueprint *param_1)

{
  return 1.0 - (double)this->Thickness_m / param_1->Thickness_m;
}





//==== 006761d0 GetExplosionFalloffRange_km ====


/* double __cdecl GetExplosionFalloffRange_km(double) */

double __cdecl GetExplosionFalloffRange_km(double)

{
  Maybe_L_double_G_ *pMVar1;
  Maybe_L_double_G_ MStack_14;
  
  param_1 = (param_1 / 1000000.0) / 12.566370614359172;
  pMVar1 = util__Sqrt(&MStack_14,&param_1);
  if (pMVar1->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return pMVar1->Data / 1000.0;
}





//==== 00676240 GetRadius_m_00676240 ====


/* public: double __thiscall DamagerContainer__GetRadius_m(void)const  */

double __thiscall DamagerContainer__GetRadius_m(DamagerContainer *this)

{
  bool bVar1;
  double dStack_34;
  bool bStack_2c;
  double dStack_24;
  bool bStack_1c;
  double dStack_14;
  
  bVar1 = (this->Plasma).IsValidData == false;
  if (bVar1) {
    dStack_14 = 0.0;
  }
  else {
    dStack_14 = (this->Plasma).Data.Radius_m;
  }
  bStack_1c = (this->Matter).IsValidData == false;
  if (bStack_1c) {
    dStack_24 = 0.0;
  }
  else {
    dStack_24 = (this->Matter).Data.Radius_m;
  }
  bStack_1c = !bStack_1c;
  bStack_2c = (this->Photons).IsValidData == false;
  if (bStack_2c) {
    dStack_34 = 0.0;
  }
  else {
    dStack_34 = (this->Photons).Data.Radius_m;
  }
  bStack_2c = !bStack_2c;
  if (bVar1) {
    dStack_14 = 0.0;
  }
  else if (dStack_14 <= 0.0) {
    dStack_14 = 0.0;
  }
  if (bStack_2c) {
    if (bStack_1c) {
      if (dStack_34 <= dStack_24) {
        dStack_34 = dStack_24;
      }
      if (dStack_34 <= dStack_14) {
        dStack_34 = dStack_14;
      }
      return dStack_34;
    }
  }
  else {
    dStack_34 = dStack_24;
    bStack_2c = bStack_1c;
    if (!bStack_1c) {
      dStack_34 = 0.0;
    }
  }
  if (!bStack_2c) {
    return dStack_14;
  }
  if (dStack_34 <= dStack_14) {
    dStack_34 = dStack_14;
  }
  return dStack_34;
}





//==== 00676320 IsDamaged_00676320 ====


/* public: bool __thiscall ArmorPlate__IsDamaged(struct ArmorLayerBlueprint const &)const  */

bool __thiscall ArmorPlate__IsDamaged(ArmorPlate *this,ArmorLayerBlueprint *param_1)

{
  return this->Thickness_m <= (float)param_1->Thickness_m &&
         (float)param_1->Thickness_m != this->Thickness_m;
}





//==== 00676340 IsDestroyed_00676340 ====


/* public: bool __thiscall ArmorPlate__IsDestroyed(void)const  */

bool __thiscall ArmorPlate__IsDestroyed(ArmorPlate *this)

{
  return this->Thickness_m <= 0.0;
}





//==== 00676350 SchmidtHolsappleHypervelocityModel_m ====


/* private: double  ArmorPlate__SchmidtHolsappleHypervelocityModel_m(class Material const
   *,struct MatterDamager,double)const  */

double 
ArmorPlate__SchmidtHolsappleHypervelocityModel_m
          (ArmorPlate *this,Material *param_1,MatterDamager param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 in_stack_00000008;
  
  dVar3 = Material__GetUltimateTensileStrength_Pa(param_1);
  libm_sse2_pow_precise(0.0,0.0);
  dVar1 = (double)CONCAT44(param_2.Mass_kg,in_stack_00000008);
  libm_sse2_pow_precise(0.0,0.0);
  libm_sse2_pow_precise(0.0,0.0);
  libm_sse2_pow_precise(0.0,0.0);
  dVar2 = param_1->Density_kg__m3;
  libm_sse2_pow_precise(0.0,0.0);
  return dVar1 * (double)(*(uint64_t *)((char *)&(param_2) + 20)) * (double)(*(uint64_t *)((char *)&(param_2) + 12)) * 15.69813 * dVar2 * dVar3 *
         (double)CONCAT44((*(uint32_t*)&(param_3)),(*(uint32_t *)((char *)&(param_2.Velocity_km__s) + 4)));
}





//==== 00676410 SplitDamage ====


/* public: struct DamagerContainer  DamagerContainer__SplitDamage(int)const  */

DamagerContainer * 
DamagerContainer__SplitDamage
          (DamagerContainer *this,DamagerContainer *__return_storage_ptr__,int param_1)

{
  bool bVar1;
  Maybe_L_double_G_ *pMVar2;
  Maybe_L_double_G_ MStack_1c;
  double dStack_c;
  
  if (param_1 < 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\damage.cpp",100,
                    "NumberOfPieces > 0",(char *)0x0);
    DebugBreak();
  }
  dStack_c = (double)param_1;
  pMVar2 = util__Sqrt(&MStack_1c,&dStack_c);
  if (pMVar2->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dStack_c = pMVar2->Data;
  if (dStack_c <= 1.0) {
    dStack_c = 1.0;
  }
  (__return_storage_ptr__->Photons).Data.Energy_J = (this->Photons).Data.Energy_J;
  (__return_storage_ptr__->Photons).Data.Radius_m = (this->Photons).Data.Radius_m;
  (__return_storage_ptr__->Photons).Data.SpreadAngle_radians =
       (this->Photons).Data.SpreadAngle_radians;
  (__return_storage_ptr__->Photons).Data.Wavelength_nm = (this->Photons).Data.Wavelength_nm;
  (__return_storage_ptr__->Photons).IsValidData = (this->Photons).IsValidData;
  (__return_storage_ptr__->Plasma).Data.Mass_kg = (this->Plasma).Data.Mass_kg;
  (__return_storage_ptr__->Plasma).Data.Radius_m = (this->Plasma).Data.Radius_m;
  (__return_storage_ptr__->Plasma).Data.SpreadAngle_radians =
       (this->Plasma).Data.SpreadAngle_radians;
  (__return_storage_ptr__->Plasma).Data.Velocity_km__s = (this->Plasma).Data.Velocity_km__s;
  (__return_storage_ptr__->Plasma).IsValidData = (this->Plasma).IsValidData;
  (__return_storage_ptr__->Matter).Data.Mass_kg = (this->Matter).Data.Mass_kg;
  (__return_storage_ptr__->Matter).Data.Radius_m = (this->Matter).Data.Radius_m;
  (__return_storage_ptr__->Matter).Data.Density_kg__m3 = (this->Matter).Data.Density_kg__m3;
  (__return_storage_ptr__->Matter).Data.Velocity_km__s = (this->Matter).Data.Velocity_km__s;
  (__return_storage_ptr__->Matter).IsValidData = (this->Matter).IsValidData;
  bVar1 = (__return_storage_ptr__->Matter).IsValidData;
  __return_storage_ptr__->Instakill = this->Instakill;
  if (bVar1 != false) {
    (__return_storage_ptr__->Matter).Data.Mass_kg =
         (__return_storage_ptr__->Matter).Data.Mass_kg / (double)param_1;
    if ((__return_storage_ptr__->Matter).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    (__return_storage_ptr__->Matter).Data.Radius_m =
         (__return_storage_ptr__->Matter).Data.Radius_m / dStack_c;
  }
  if ((__return_storage_ptr__->Photons).IsValidData != false) {
    (__return_storage_ptr__->Photons).Data.Energy_J =
         (__return_storage_ptr__->Photons).Data.Energy_J / (double)param_1;
    (__return_storage_ptr__->Photons).Data.Radius_m =
         (__return_storage_ptr__->Photons).Data.Radius_m / dStack_c;
  }
  if ((__return_storage_ptr__->Plasma).IsValidData != false) {
    (__return_storage_ptr__->Plasma).Data.Mass_kg =
         (__return_storage_ptr__->Plasma).Data.Mass_kg / (double)param_1;
    if ((__return_storage_ptr__->Plasma).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    (__return_storage_ptr__->Plasma).Data.Radius_m =
         (__return_storage_ptr__->Plasma).Data.Radius_m / dStack_c;
  }
  return __return_storage_ptr__;
}





//==== 006765f0 SpreadDamage ====


/* public: void __thiscall DamagerContainer__SpreadDamage(double) */

void __thiscall DamagerContainer__SpreadDamage(DamagerContainer *this,double param_1)

{
  double *pdVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  double dVar9;
  undefined7 uStack_13;
  
  cVar8 = (this->Plasma).IsValidData;
  if ((bool)cVar8 != false) {
    if (0.0 < (this->Plasma).Data.Velocity_km__s) {
      if ((this->Plasma).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                        "IsValid()",(char *)0x0);
        DebugBreak();
        cVar8 = (this->Plasma).IsValidData;
      }
      if (cVar8 == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      pdVar1 = &(this->Plasma).Data.SpreadAngle_radians;
      dVar9 = util__Tan(pdVar1);
      dVar2 = (this->Plasma).Data.Radius_m;
      if ((this->Plasma).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                        "IsValid()",(char *)0x0);
        DebugBreak();
        if ((this->Plasma).IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
      }
      if ((this->Plasma).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      uVar3 = *(undefined4 *)((int)&(this->Plasma).Data.Mass_kg + 4);
      uVar4 = *(undefined4 *)pdVar1;
      uVar5 = *(undefined4 *)((int)&(this->Plasma).Data.SpreadAngle_radians + 4);
      uVar6 = *(undefined4 *)&(this->Plasma).Data.Velocity_km__s;
      uVar7 = *(undefined4 *)((int)&(this->Plasma).Data.Velocity_km__s + 4);
      *(undefined4 *)&(this->Plasma).Data.Mass_kg = *(undefined4 *)&(this->Plasma).Data.Mass_kg;
      *(undefined4 *)((int)&(this->Plasma).Data.Mass_kg + 4) = uVar3;
      (this->Plasma).Data.Radius_m = dVar2 + dVar9 * param_1;
      *(undefined4 *)&(this->Plasma).Data.SpreadAngle_radians = uVar4;
      *(undefined4 *)((int)&(this->Plasma).Data.SpreadAngle_radians + 4) = uVar5;
      *(undefined4 *)&(this->Plasma).Data.Velocity_km__s = uVar6;
      *(undefined4 *)((int)&(this->Plasma).Data.Velocity_km__s + 4) = uVar7;
      *(ulonglong *)&(this->Plasma).IsValidData = CONCAT71(uStack_13,1);
    }
    else {
      (this->Plasma).IsValidData = false;
      *(undefined4 *)&(this->Plasma).Data.Mass_kg = 0;
      *(undefined4 *)((int)&(this->Plasma).Data.Mass_kg + 4) = 0;
      *(undefined4 *)&(this->Plasma).Data.Radius_m = 0;
      *(undefined4 *)((int)&(this->Plasma).Data.Radius_m + 4) = 0;
      *(undefined4 *)&(this->Plasma).Data.SpreadAngle_radians = 0;
      *(undefined4 *)((int)&(this->Plasma).Data.SpreadAngle_radians + 4) = 0;
      *(undefined4 *)&(this->Plasma).Data.Velocity_km__s = 0;
      *(undefined4 *)((int)&(this->Plasma).Data.Velocity_km__s + 4) = 0;
    }
  }
  if ((this->Photons).IsValidData != false) {
    pdVar1 = &(this->Photons).Data.SpreadAngle_radians;
    dVar9 = util__Tan(pdVar1);
    dVar2 = (this->Photons).Data.Radius_m;
    if ((this->Photons).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
      if ((this->Photons).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                        "IsValid()",(char *)0x0);
        DebugBreak();
        if ((this->Photons).IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
      }
    }
    uVar3 = *(undefined4 *)((int)&(this->Photons).Data.Energy_J + 4);
    uVar4 = *(undefined4 *)pdVar1;
    uVar5 = *(undefined4 *)((int)&(this->Photons).Data.SpreadAngle_radians + 4);
    uVar6 = *(undefined4 *)&(this->Photons).Data.Wavelength_nm;
    uVar7 = *(undefined4 *)((int)&(this->Photons).Data.Wavelength_nm + 4);
    *(undefined4 *)&(this->Photons).Data.Energy_J = *(undefined4 *)&(this->Photons).Data.Energy_J;
    *(undefined4 *)((int)&(this->Photons).Data.Energy_J + 4) = uVar3;
    (this->Photons).Data.Radius_m = dVar2 + dVar9 * param_1;
    *(undefined4 *)&(this->Photons).Data.SpreadAngle_radians = uVar4;
    *(undefined4 *)((int)&(this->Photons).Data.SpreadAngle_radians + 4) = uVar5;
    *(undefined4 *)&(this->Photons).Data.Wavelength_nm = uVar6;
    *(undefined4 *)((int)&(this->Photons).Data.Wavelength_nm + 4) = uVar7;
    *(ulonglong *)&(this->Photons).IsValidData = CONCAT71(uStack_13,1);
  }
  return;
}





//==== 006767e0 USLaboratoryHypovelocityModel_m ====


/* private: double  ArmorPlate__USLaboratoryHypovelocityModel_m(class Material const
   *,struct MatterDamager,double)const  */

double 
ArmorPlate__USLaboratoryHypovelocityModel_m
          (ArmorPlate *this,Material *param_1,MatterDamager param_2,double param_3)

{
  Maybe_L_double_G_ *pMVar1;
  Maybe_L_double_G_ *pMVar2;
  double dVar3;
  undefined4 in_stack_00000008;
  Maybe_L_double_G_ MStack_34;
  Maybe_L_double_G_ MStack_24;
  double dStack_14;
  double dStack_c;
  
  dStack_14 = Material__GetYieldStrength_Pa(param_1);
  dStack_c = (double)(*(uint64_t *)((char *)&(param_2) + 20)) * (double)(*(uint64_t *)((char *)&(param_2) + 20));
  pMVar1 = util__Sqrt(&MStack_24,(double *)((int)&param_2.Radius_m + 4));
  if (pMVar1->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pMVar2 = util__Sqrt(&MStack_34,&dStack_14);
  if (pMVar2->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar3 = dStack_c * (double)CONCAT44(param_2.Mass_kg,in_stack_00000008) * pMVar1->Data;
  libm_sse2_pow_precise(0.0,0.0);
  dStack_c = (dVar3 * 361.986) / pMVar2->Data;
  dVar3 = (double)CONCAT44((*(uint32_t*)&(param_3)),(*(uint32_t *)((char *)&(param_2.Velocity_km__s) + 4)));
  libm_sse2_pow_precise(0.0,0.0);
  return dStack_c * dVar3;
}





//==== 006768c0 GetTypeName_006768c0 ====


/* public: virtual class util__Str_L_char_G_  Element__ReflectionInfoStruct_class_Element___GetTypeName(void)const  */

Str_L_char_G_ * 
Element__ReflectionInfoStruct_class_Element___GetTypeName
          (ReflectionInfoStruct_L_class_Element_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"Element");
  return __return_storage_ptr__;
}





//==== 006768e0 GetMembers_006768e0 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   Element__ReflectionInfoStruct_class_Element___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * __thiscall
Element__ReflectionInfoStruct_class_Element___GetMembers__o2(ReflectionInfoStruct_L_class_Element_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_efca5135__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_efca5135__thread_safe_static_guard_0__),
      cde_l2_efca5135__thread_safe_static_guard_0__ == -1)) {
     cde_l2_1c17d432_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_efca5135__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_1c17d432_Count);
  iVar3 = 0;
  if (0 <  cde_l2_1c17d432_Count) {
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
    } while (iVar3 <  cde_l2_1c17d432_Count);
  }
  return in_stack_00000004;
}





//==== 00676a20 GetMember_00676a20 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   Element__ReflectionInfoStruct_class_Element___GetMember(class util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
Element__ReflectionInfoStruct_class_Element___GetMember__o2
          (ReflectionInfoStruct_L_class_Element_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_72f422d5__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_72f422d5__thread_safe_static_guard_0__),
      cde_l2_72f422d5__thread_safe_static_guard_0__ == -1)) {
     cde_l2_f928019f_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_72f422d5__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_f928019f_Count) {
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
LAB_00676aad:
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
          if (cVar3 == '\0') goto LAB_00676aad;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_f928019f_Count);
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





//==== 00676bc0 GetFactory_00676bc0 ====


/* public: virtual class util__Reflectable * (__cdecl*__thiscall Element__ReflectionInfoStruct_class_Element___GetFactory(void)const )(void) */

_func_Reflectable_ptr * __thiscall
Element__ReflectionInfoStruct_class_Element___GetFactory(ReflectionInfoStruct_L_class_Element_G_ *this)

{
  return StaticFactory;
}





//==== 00676d90 scalar_deleting_destructor_00676d90 ====

/* public: virtual void * __thiscall Element:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall Element___scalar_deleting_destructor(Element *this,uint param_1)

{
  void *pvVar1;
  char *pcVar2;
  
  pvVar1 = (void *)(this->TransmutationParents).Capacity;
  (this->TransmutationParents).Size =
       (int)&vftable_142;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
  }
  (this->TransmutationParents).Capacity = 0;
  (this->TransmutationParents).Size = (int)&vftable;
  pcVar2 = (this->Symbol).Data;
  if (pcVar2 != (char *)0x0) {
    port_op_delete(pcVar2);
    (this->Symbol).Data = (char *)0x0;
  }
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0xf0);
  }
  return this;
}

//==== 00676e20 GetAverageNeutronsProducedPerFission ====


/* public: double __thiscall Element__GetAverageNeutronsProducedPerFission(enum FissionType)const
    */

double __thiscall Element__GetAverageNeutronsProducedPerFission(Element *this,FissionType param_1)

{
  if (param_1 == FissionType__Thermal) {
    return this->AverageNeutronsProducedPerThermalFission;
  }
  return this->AverageNeutronsProducedPerFastFission;
}





//==== 00676e60 GetEffectiveSolarAbundance ====


/* public: double __thiscall Element__GetEffectiveSolarAbundance(void)const  */

double __thiscall Element__GetEffectiveSolarAbundance(Element *this)

{
  float10 fVar1;
  double dVar2;
  
  fVar1 = (float10)FUN_00676bd0(&(this->TransmutationParents).Size);
  dVar2 = *(double *)&this->TransmutationParents;
  if (*(double *)&this->TransmutationParents <= (double)(fVar1 / (float10)2.5)) {
    dVar2 = (double)(fVar1 / (float10)2.5);
  }
  return dVar2;
}





//==== 00676eb0 GetLogarithmicEnergyDecrement ====


/* public: double __thiscall Element__GetLogarithmicEnergyDecrement(void)const  */

double __thiscall Element__GetLogarithmicEnergyDecrement(Element *this)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  iVar1 = this->AtomicMass;
  if (1 < iVar1) {
    dVar3 = (double)iVar1 - 1.0;
    dVar2 = ((double)iVar1 + 1.0) / dVar3;
    libm_sse2_log_precise(0.0);
    return dVar2 * ((dVar3 * dVar3) / ((double)iVar1 + (double)iVar1)) + 1.0;
  }
  return 1.0;
}





//==== 00676f30 GetMicroscopicNeutronAbsorptionCrossSection_b ====


/* public: double __thiscall Element__GetMicroscopicNeutronAbsorptionCrossSection_b(enum
   FissionType)const  */

double __thiscall
Element__GetMicroscopicNeutronAbsorptionCrossSection_b(Element *this,FissionType param_1)

{
  if (param_1 == FissionType__Thermal) {
    return this->MicroscopicThermalNeutronFissionCrossSection_b +
           this->MicroscopicThermalNeutronCaptureCrossSection_b;
  }
  return this->MicroscopicFastNeutronFissionCrossSection_b +
         this->MicroscopicFastNeutronCaptureCrossSection_b;
}





//==== 00676f80 GetMicroscopicNeutronFissionCrossSection_b ====


/* public: double __thiscall Element__GetMicroscopicNeutronFissionCrossSection_b(enum
   FissionType)const  */

double __thiscall
Element__GetMicroscopicNeutronFissionCrossSection_b(Element *this,FissionType param_1)

{
  if (param_1 == FissionType__Thermal) {
    return this->MicroscopicThermalNeutronFissionCrossSection_b;
  }
  return this->MicroscopicFastNeutronFissionCrossSection_b;
}





//==== 00676fc0 GetMicroscopicNeutronScatteringCrossSection_b ====


/* public: double __thiscall Element__GetMicroscopicNeutronScatteringCrossSection_b(enum
   FissionType)const  */

double __thiscall
Element__GetMicroscopicNeutronScatteringCrossSection_b(Element *this,FissionType param_1)

{
  if (param_1 == FissionType__Thermal) {
    return this->MicroscopicThermalNeutronScatteringCrossSection_b;
  }
  return this->MicroscopicFastNeutronScatteringCrossSection_b;
}





//==== 00677000 GetMicroscopicNeutronTotalCrossSection_b ====


/* public: double __thiscall Element__GetMicroscopicNeutronTotalCrossSection_b(enum
   FissionType)const  */

double __thiscall
Element__GetMicroscopicNeutronTotalCrossSection_b(Element *this,FissionType param_1)

{
  return this->MicroscopicThermalNeutronFissionCrossSection_b +
         this->MicroscopicThermalNeutronCaptureCrossSection_b +
         this->MicroscopicThermalNeutronScatteringCrossSection_b;
}





//==== 00677010 GetMolarMass_kg__mol ====


/* public: double __thiscall Element__GetMolarMass_kg__mol(void)const  */

double __thiscall Element__GetMolarMass_kg__mol(Element *this)

{
  return this->MolarMass_g__mol / 1000.0;
}





//==== 00677020 GetNucleusAtomicMass_MeV ====


/* public: double __thiscall Element__GetNucleusAtomicMass_MeV(void)const  */

double __thiscall Element__GetNucleusAtomicMass_MeV(Element *this)

{
  return (double)(this->AtomicMass - this->AtomicNumber) * 939.565378 +
         (double)this->AtomicNumber * 938.272046;
}





//==== 00677060 GetReflectionInfo_00677060 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   Element__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall Element__GetReflectionInfo(Element *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_683626a2__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_683626a2__thread_safe_static_guard_0__);
    if ( cde_l2_683626a2__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_30c89863_ReflectionInfo) = &vftable_327;
      _Init_thread_footer(& cde_l2_683626a2__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_30c89863_ReflectionInfo;
}





//==== 00677070 GetResonanceIntegralAbsorptionCrossSection_b ====


/* public: double __thiscall Element__GetResonanceIntegralAbsorptionCrossSection_b(void)const  */

double __thiscall Element__GetResonanceIntegralAbsorptionCrossSection_b(Element *this)

{
  return this->MicroscopicResonanceIntegralFissionCrossSection_b +
         this->MicroscopicResonanceIntegralCaptureCrossSection_b;
}





//==== 00677080 GetTotalDecayEnergy_eV ====


/* public: double __thiscall Element__GetTotalDecayEnergy_eV(void)const  */

double __thiscall Element__GetTotalDecayEnergy_eV(Element *this)

{
  return (this->BetaDecay_keV + this->AlphaDecay_keV + this->GammaDecay_keV) * 1000.0;
}





//==== 00677090 Print_00677090 ====


/* public: virtual class util__Str_L_char_G_ __thiscall MilitaryDoctrine__Print(void)const  */

Str_L_char_G_ * __thiscall
MilitaryDoctrine__Print(MilitaryDoctrine *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined **ppuStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  ppuStack_14 = (undefined **)(&vftable_4);
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  util__SimpleSerializationManager__PrintDatum
            (__return_storage_ptr__,(Reflectable *)this,
             (Darray_L_class_util__Str_L_char_G___G_ *)&ppuStack_14);
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&ppuStack_14);
  return __return_storage_ptr__;
}





//==== 006770e0 StaticFactory_006770e0 ====

/* public: static class util__Reflectable * __cdecl Element__ReflectionInfoStruct_L_class_Element_G___StaticFactory(void) */

Reflectable * __cdecl Element__ReflectionInfoStruct_class_Element___StaticFactory(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0xf0));
  if (pRVar1 != (Reflectable *)0x0) {
    memset(pRVar1,0,0xf0);
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_328;
    pRVar1[1]._pad_0x0_0 = 0;
    pRVar1[1].Name.Data = (char *)0x0;
    pRVar1[1].Name.Capacity = 0;
    pRVar1[1].Name.Length = 0;
    pRVar1[2]._pad_0x0_0 = 0;
    pRVar1[2].Name.Capacity = 0;
    pRVar1[2].Name.Length = 0;
    *(undefined1 *)&pRVar1[3]._pad_0x0_0 = 0;
    pRVar1[3].Name.Capacity = 0;
    pRVar1[3].Name.Length = 0;
    pRVar1[4]._pad_0x0_0 = 0;
    pRVar1[4].Name.Data = (char *)0x0;
    pRVar1[0xc]._pad_0x0_0 = 0;
    pRVar1[4].Name.Capacity = 0;
    pRVar1[4].Name.Length = 0;
    pRVar1[5]._pad_0x0_0 = 0;
    pRVar1[5].Name.Data = (char *)0x0;
    pRVar1[5].Name.Capacity = 0;
    pRVar1[5].Name.Length = 0;
    pRVar1[6]._pad_0x0_0 = 0;
    pRVar1[6].Name.Data = (char *)0x0;
    pRVar1[6].Name.Capacity = 0;
    pRVar1[6].Name.Length = 0;
    pRVar1[7]._pad_0x0_0 = 0;
    pRVar1[7].Name.Data = (char *)0x0;
    pRVar1[7].Name.Capacity = 0;
    pRVar1[7].Name.Length = 0;
    pRVar1[8]._pad_0x0_0 = 0;
    pRVar1[8].Name.Data = (char *)0x0;
    pRVar1[8].Name.Capacity = 0;
    pRVar1[8].Name.Length = 0;
    pRVar1[9]._pad_0x0_0 = 0;
    pRVar1[9].Name.Data = (char *)0x0;
    pRVar1[9].Name.Capacity = 0;
    pRVar1[9].Name.Length = 0;
    pRVar1[10]._pad_0x0_0 = 0;
    pRVar1[10].Name.Data = (char *)0x0;
    pRVar1[10].Name.Capacity = 0;
    pRVar1[10].Name.Length = 0;
    pRVar1[0xb]._pad_0x0_0 = 0;
    pRVar1[0xb].Name.Data = (char *)0x0;
    pRVar1[0xb].Name.Capacity = 0;
    pRVar1[0xb].Name.Length = 0;
    pRVar1[0xc].Name.Capacity = 0;
    pRVar1[0xc].Name.Length = 0;
    pRVar1[0xd]._pad_0x0_0 = 0;
    pRVar1[0xd].Name.Data = (char *)0x0;
    pRVar1[0xd].Name.Capacity =
         (int)&vftable_142;
    pRVar1[0xd].Name.Length = 0;
    pRVar1[0xe]._pad_0x0_0 = 0;
    pRVar1[0xe].Name.Data = (char *)0x0;
    pRVar1[0xe].Name.Capacity = 0;
  }
  return (Reflectable *)0x0;
}

//==== 006771d0 StaticGetMemberByIndex_006771d0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl Element__ReflectionInfoStruct_class_Element___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
Element__ReflectionInfoStruct_class_Element___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_104b0fc3__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_104b0fc3__thread_safe_static_guard_0__);
    if ( cde_l2_104b0fc3__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_04d7cc27_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00979994 = 0;
      _DAT_00979998 = 0;
      _DAT_0097999c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009799a0,"Unused");
      _DAT_009799ac = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009799b0,"Symbol");
      _DAT_009799bc = 6;
      _DAT_009799c0 = 0x10;
      _DAT_009799c4 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009799c8,"AStr");
      _DAT_009799d4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009799d8,"AtomicMass");
      _DAT_009799e4 = 2;
      _DAT_009799e8 = 0x1c;
      _DAT_009799ec = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009799f0,"int");
      _DAT_009799fc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979a00,"AtomicNumber");
      _DAT_00979a0c = 2;
      _DAT_00979a10 = 0x20;
      _DAT_00979a14 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979a18,"int");
      _DAT_00979a24 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979a28,"MolarMass_g__mol");
      _DAT_00979a34 = 4;
      _DAT_00979a38 = 0x28;
      _DAT_00979a3c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979a40,"double");
      _DAT_00979a4c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979a50,"IsANonmetal");
      _DAT_00979a5c = 1;
      _DAT_00979a60 = 0x30;
      _DAT_00979a64 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979a68,"bool");
      _DAT_00979a74 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979a78,"FirstIonizationEnergy_kJ__mol");
      _DAT_00979a84 = 4;
      _DAT_00979a88 = 0x38;
      _DAT_00979a8c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979a90,"double");
      _DAT_00979a9c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979aa0,"HalfLife_s");
      _DAT_00979aac = 4;
      _DAT_00979ab0 = 0x40;
      _DAT_00979ab4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979ab8,"double");
      _DAT_00979ac4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979ac8,"AlphaDecay_keV");
      _DAT_00979ad4 = 4;
      _DAT_00979ad8 = 0x48;
      _DAT_00979adc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979ae0,"double");
      _DAT_00979aec = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979af0,"BetaDecay_keV");
      _DAT_00979afc = 4;
      _DAT_00979b00 = 0x50;
      _DAT_00979b04 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979b08,"double");
      _DAT_00979b14 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979b18,"GammaDecay_keV");
      _DAT_00979b24 = 4;
      _DAT_00979b28 = 0x58;
      _DAT_00979b2c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979b30,"double");
      _DAT_00979b3c = 0;
      util__Str_char___Str_char
                ((Str_L_char_G_ *)&DAT_00979b40,"MicroscopicThermalNeutronCaptureCrossSection_b");
      _DAT_00979b4c = 4;
      _DAT_00979b50 = 0x60;
      _DAT_00979b54 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979b58,"double");
      _DAT_00979b64 = 0;
      util__Str_char___Str_char
                ((Str_L_char_G_ *)&DAT_00979b68,"MicroscopicThermalNeutronScatteringCrossSection_b");
      _DAT_00979b74 = 4;
      _DAT_00979b78 = 0x68;
      _DAT_00979b7c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979b80,"double");
      _DAT_00979b8c = 0;
      util__Str_char___Str_char
                ((Str_L_char_G_ *)&DAT_00979b90,"MicroscopicThermalNeutronFissionCrossSection_b");
      _DAT_00979b9c = 4;
      _DAT_00979ba0 = 0x70;
      _DAT_00979ba4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979ba8,"double");
      _DAT_00979bb4 = 0;
      util__Str_char___Str_char
                ((Str_L_char_G_ *)&DAT_00979bb8,"MicroscopicFastNeutronCaptureCrossSection_b");
      _DAT_00979bc4 = 4;
      _DAT_00979bc8 = 0x78;
      _DAT_00979bcc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979bd0,"double");
      _DAT_00979bdc = 0;
      util__Str_char___Str_char
                ((Str_L_char_G_ *)&DAT_00979be0,"MicroscopicFastNeutronScatteringCrossSection_b");
      _DAT_00979bec = 4;
      _DAT_00979bf0 = 0x80;
      _DAT_00979bf4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979bf8,"double");
      _DAT_00979c04 = 0;
      util__Str_char___Str_char
                ((Str_L_char_G_ *)&DAT_00979c08,"MicroscopicFastNeutronFissionCrossSection_b");
      _DAT_00979c14 = 4;
      _DAT_00979c18 = 0x88;
      _DAT_00979c1c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979c20,"double");
      _DAT_00979c2c = 0;
      util__Str_char___Str_char
                ((Str_L_char_G_ *)&DAT_00979c30,"MicroscopicResonanceIntegralCaptureCrossSection_b");
      _DAT_00979c3c = 4;
      _DAT_00979c40 = 0x90;
      _DAT_00979c44 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979c48,"double");
      _DAT_00979c54 = 0;
      util__Str_char___Str_char
                ((Str_L_char_G_ *)&DAT_00979c58,"MicroscopicResonanceIntegralScatteringCrossSection_b");
      _DAT_00979c64 = 4;
      _DAT_00979c68 = 0x98;
      _DAT_00979c6c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979c70,"double");
      _DAT_00979c7c = 0;
      util__Str_char___Str_char
                ((Str_L_char_G_ *)&DAT_00979c80,"MicroscopicResonanceIntegralFissionCrossSection_b");
      _DAT_00979c8c = 4;
      _DAT_00979c90 = 0xa0;
      _DAT_00979c94 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979c98,"double");
      _DAT_00979ca4 = 0;
      util__Str_char___Str_char
                ((Str_L_char_G_ *)&DAT_00979ca8,"AverageNeutronsProducedPerThermalFission");
      _DAT_00979cb4 = 4;
      _DAT_00979cb8 = 0xa8;
      _DAT_00979cbc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979cc0,"double");
      _DAT_00979ccc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979cd0,"AverageNeutronsProducedPerFastFission")
      ;
      _DAT_00979cdc = 4;
      _DAT_00979ce0 = 0xb0;
      _DAT_00979ce4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979ce8,"double");
      _DAT_00979cf4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979cf8,"FissionEnergy_MeV");
      _DAT_00979d04 = 4;
      _DAT_00979d08 = 0xb8;
      _DAT_00979d0c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979d10,"double");
      _DAT_00979d1c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979d20,"UnenrichedElement");
      _DAT_00979d2c = 8;
      _DAT_00979d30 = 0xc0;
      _DAT_00979d34 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979d38,"Element");
      _DAT_00979d44 = 0;
      util__Str_char___Str_char
                ((Str_L_char_G_ *)&DAT_00979d48,"MeanGammaRayMassAbsorptionCoefficient_cm2__g");
      _DAT_00979d54 = 4;
      _DAT_00979d58 = 200;
      _DAT_00979d5c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979d60,"double");
      _DAT_00979d6c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979d70,"SolarAbundance");
      _DAT_00979d7c = 4;
      _DAT_00979d80 = 0xd0;
      _DAT_00979d84 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979d88,"double");
      _DAT_00979d94 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979d98,"TransmutationParents");
      _DAT_00979da4 = 8;
      _DAT_00979da8 = 0xd8;
      _DAT_00979dac = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979db0,"Element");
      _DAT_00979dbc = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979dc0,"Emission");
      _DAT_00979dcc = 8;
      _DAT_00979dd0 = 0xe8;
      _DAT_00979dd4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979dd8,"EmissionSpectrum");
      _DAT_00979de4 = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_Element__ReflectionInfoStruct_class_Element___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_104b0fc3__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_04d7cc27_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_00979994 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_00979998 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_0097999c + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_009799a0 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_009799ac)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_009799ad)[iVar1];
  return __return_storage_ptr__;
}





//==== 00677a00 StaticGetMemberCount_00677a00 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl Element__ReflectionInfoStruct_class_Element___StaticGetMemberCount(void) */

int __cdecl Element__ReflectionInfoStruct_class_Element___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_96124559__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_96124559__thread_safe_static_guard_0__);
    if ( cde_l2_96124559__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_0ff96965_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0097952c = 0;
      _DAT_00979530 = 0;
      _DAT_00979534 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979538,"Unused");
      _DAT_00979544 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979548,"Symbol");
      _DAT_00979554 = 6;
      _DAT_00979558 = 0x10;
      _DAT_0097955c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979560,"AStr");
      _DAT_0097956c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979570,"AtomicMass");
      _DAT_0097957c = 2;
      _DAT_00979580 = 0x1c;
      _DAT_00979584 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979588,"int");
      _DAT_00979594 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979598,"AtomicNumber");
      _DAT_009795a4 = 2;
      _DAT_009795a8 = 0x20;
      _DAT_009795ac = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009795b0,"int");
      _DAT_009795bc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009795c0,"MolarMass_g__mol");
      _DAT_009795cc = 4;
      _DAT_009795d0 = 0x28;
      _DAT_009795d4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009795d8,"double");
      _DAT_009795e4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009795e8,"IsANonmetal");
      _DAT_009795f4 = 1;
      _DAT_009795f8 = 0x30;
      _DAT_009795fc = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979600,"bool");
      _DAT_0097960c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979610,"FirstIonizationEnergy_kJ__mol");
      _DAT_0097961c = 4;
      _DAT_00979620 = 0x38;
      _DAT_00979624 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979628,"double");
      _DAT_00979634 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979638,"HalfLife_s");
      _DAT_00979644 = 4;
      _DAT_00979648 = 0x40;
      _DAT_0097964c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979650,"double");
      _DAT_0097965c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979660,"AlphaDecay_keV");
      _DAT_0097966c = 4;
      _DAT_00979670 = 0x48;
      _DAT_00979674 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979678,"double");
      _DAT_00979684 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979688,"BetaDecay_keV");
      _DAT_00979694 = 4;
      _DAT_00979698 = 0x50;
      _DAT_0097969c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009796a0,"double");
      _DAT_009796ac = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009796b0,"GammaDecay_keV");
      _DAT_009796bc = 4;
      _DAT_009796c0 = 0x58;
      _DAT_009796c4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009796c8,"double");
      _DAT_009796d4 = 0;
      util__Str_char___Str_char
                ((Str_L_char_G_ *)&DAT_009796d8,"MicroscopicThermalNeutronCaptureCrossSection_b");
      _DAT_009796e4 = 4;
      _DAT_009796e8 = 0x60;
      _DAT_009796ec = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009796f0,"double");
      _DAT_009796fc = 0;
      util__Str_char___Str_char
                ((Str_L_char_G_ *)&DAT_00979700,"MicroscopicThermalNeutronScatteringCrossSection_b");
      _DAT_0097970c = 4;
      _DAT_00979710 = 0x68;
      _DAT_00979714 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979718,"double");
      _DAT_00979724 = 0;
      util__Str_char___Str_char
                ((Str_L_char_G_ *)&DAT_00979728,"MicroscopicThermalNeutronFissionCrossSection_b");
      _DAT_00979734 = 4;
      _DAT_00979738 = 0x70;
      _DAT_0097973c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979740,"double");
      _DAT_0097974c = 0;
      util__Str_char___Str_char
                ((Str_L_char_G_ *)&DAT_00979750,"MicroscopicFastNeutronCaptureCrossSection_b");
      _DAT_0097975c = 4;
      _DAT_00979760 = 0x78;
      _DAT_00979764 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979768,"double");
      _DAT_00979774 = 0;
      util__Str_char___Str_char
                ((Str_L_char_G_ *)&DAT_00979778,"MicroscopicFastNeutronScatteringCrossSection_b");
      _DAT_00979784 = 4;
      _DAT_00979788 = 0x80;
      _DAT_0097978c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979790,"double");
      _DAT_0097979c = 0;
      util__Str_char___Str_char
                ((Str_L_char_G_ *)&DAT_009797a0,"MicroscopicFastNeutronFissionCrossSection_b");
      _DAT_009797ac = 4;
      _DAT_009797b0 = 0x88;
      _DAT_009797b4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009797b8,"double");
      _DAT_009797c4 = 0;
      util__Str_char___Str_char
                ((Str_L_char_G_ *)&DAT_009797c8,"MicroscopicResonanceIntegralCaptureCrossSection_b");
      _DAT_009797d4 = 4;
      _DAT_009797d8 = 0x90;
      _DAT_009797dc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009797e0,"double");
      _DAT_009797ec = 0;
      util__Str_char___Str_char
                ((Str_L_char_G_ *)&DAT_009797f0,"MicroscopicResonanceIntegralScatteringCrossSection_b");
      _DAT_009797fc = 4;
      _DAT_00979800 = 0x98;
      _DAT_00979804 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979808,"double");
      _DAT_00979814 = 0;
      util__Str_char___Str_char
                ((Str_L_char_G_ *)&DAT_00979818,"MicroscopicResonanceIntegralFissionCrossSection_b");
      _DAT_00979824 = 4;
      _DAT_00979828 = 0xa0;
      _DAT_0097982c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979830,"double");
      _DAT_0097983c = 0;
      util__Str_char___Str_char
                ((Str_L_char_G_ *)&DAT_00979840,"AverageNeutronsProducedPerThermalFission");
      _DAT_0097984c = 4;
      _DAT_00979850 = 0xa8;
      _DAT_00979854 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979858,"double");
      _DAT_00979864 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979868,"AverageNeutronsProducedPerFastFission")
      ;
      _DAT_00979874 = 4;
      _DAT_00979878 = 0xb0;
      _DAT_0097987c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979880,"double");
      _DAT_0097988c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979890,"FissionEnergy_MeV");
      _DAT_0097989c = 4;
      _DAT_009798a0 = 0xb8;
      _DAT_009798a4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009798a8,"double");
      _DAT_009798b4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009798b8,"UnenrichedElement");
      _DAT_009798c4 = 8;
      _DAT_009798c8 = 0xc0;
      _DAT_009798cc = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009798d0,"Element");
      _DAT_009798dc = 0;
      util__Str_char___Str_char
                ((Str_L_char_G_ *)&DAT_009798e0,"MeanGammaRayMassAbsorptionCoefficient_cm2__g");
      _DAT_009798ec = 4;
      _DAT_009798f0 = 200;
      _DAT_009798f4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009798f8,"double");
      _DAT_00979904 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979908,"SolarAbundance");
      _DAT_00979914 = 4;
      _DAT_00979918 = 0xd0;
      _DAT_0097991c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979920,"double");
      _DAT_0097992c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979930,"TransmutationParents");
      _DAT_0097993c = 8;
      _DAT_00979940 = 0xd8;
      _DAT_00979944 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979948,"Element");
      _DAT_00979954 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979958,"Emission");
      _DAT_00979964 = 8;
      _DAT_00979968 = 0xe8;
      _DAT_0097996c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979970,"EmissionSpectrum");
      _DAT_0097997c = 0;
      atexit( private__static_int_const___cdecl_Element__ReflectionInfoStruct_class_Element___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_96124559__thread_safe_static_guard_0__);
    }
  }
  return 0x1c;
}





//==== 006781e0 StaticGetReflectionInfo_006781e0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct Element__ReflectionInfoStruct_L_classElement_G_ * __cdecl
   Element__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_Element_G_ * __cdecl Element__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_683626a2__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_683626a2__thread_safe_static_guard_0__);
    if ( cde_l2_683626a2__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_30c89863_ReflectionInfo) = &vftable_327;
      _Init_thread_footer(& cde_l2_683626a2__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_30c89863_ReflectionInfo;
}





//==== 00678240 GetTypeName_00678240 ====


/* public: virtual class util__Str_L_char_G_  EmissionSpectrum__ReflectionInfoStruct_class_EmissionSpectrum___GetTypeName(void)const  */

Str_L_char_G_ * 
EmissionSpectrum__ReflectionInfoStruct_class_EmissionSpectrum___GetTypeName
          (ReflectionInfoStruct_L_class_EmissionSpectrum_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"EmissionSpectrum");
  return __return_storage_ptr__;
}





//==== 00678260 GetMembers_00678260 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   EmissionSpectrum__ReflectionInfoStruct_class_EmissionSpectrum___GetMembers(void)const  */

undefined4 
EmissionSpectrum__ReflectionInfoStruct_class_EmissionSpectrum___GetMembers__o2
          (ReflectionInfoStruct_L_class_EmissionSpectrum_G_ *this)

{
  undefined4 in_stack_00000004;
  
  StaticGetMembers();
}





//==== 00678280 GetMember_00678280 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   EmissionSpectrum__ReflectionInfoStruct_class_EmissionSpectrum___GetMember(class util__Str_L_char_G_
   const &)const  */

Str_L_char_G_ * 
EmissionSpectrum__ReflectionInfoStruct_class_EmissionSpectrum___GetMember__o2
          (ReflectionInfoStruct_L_class_EmissionSpectrum_G_ *this,Str_L_char_G_ *param_1)

{
  StaticGetMember(param_1);
  return param_1;
}





//==== 006782a0 GetFactory_006782a0 ====


/* public: virtual class util__Reflectable * (__cdecl*
   EmissionSpectrum__ReflectionInfoStruct_class_EmissionSpectrum___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall EmissionSpectrum__ReflectionInfoStruct_class_EmissionSpectrum___GetFactory__o2
          (ReflectionInfoStruct_L_class_EmissionSpectrum_G_ *this)

{
  return StaticFactory;
}





//==== 006782b0 EmissionSpectrum ====

/* public: __thiscall EmissionSpectrum__EmissionSpectrum(class util__Str_L_char_G_ const &,class
   util__Darray_L_structEmissionLine_G_ const &) */

EmissionSpectrum * __thiscall
EmissionSpectrum__EmissionSpectrum
          (EmissionSpectrum *this,Str_L_char_G_ *param_1,Darray_L_EmissionLine_G_ *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Darray_L_EmissionLine_G_ *pDVar4;
  EmissionLine *pEVar5;
  int *piVar6;
  uint uVar7;
  EmissionLine *pEVar8;
  
  pDVar4 = param_2;
  this->_pad_0x4_1 = 0;
  this->_pad_0x8_2 = 0;
  this->_pad_0xc_3 = 0;
  this->_pad_0x0_0 = (int)&vftable_330;
  (this->EmissionLines).Capacity = 0;
  (this->EmissionLines)._pad_0x0_0 = (int)&vftable_138;
  (this->EmissionLines).Data = (EmissionLine *)0x0;
  (this->EmissionLines).Size = 0;
  (this->EmissionLines).Capacity = param_2->Capacity;
  param_2 = (Darray_L_EmissionLine_G_ *)(**(code **)(param_2->_pad_0x0_0 + 0xc))();
  util__Darray_L_EmissionLine_G___SetSize(&this->EmissionLines,(int *)&param_2);
  uVar7 = (this->EmissionLines).Capacity;
  pEVar5 = (EmissionLine *)(uintptr_t)(port_op_new(-(uint)((int)((ulonglong)uVar7 * 0x18 >> 0x20) != 0) |
                          (uint)((ulonglong)uVar7 * 0x18)));
  if (pEVar5 == (EmissionLine *)0x0) {
    pEVar5 = (EmissionLine *)0x0;
  }
  else if (uVar7 != 0) {
    piVar6 = &pEVar5->Degeneracy;
    do {
      *piVar6 = 0;
      *(undefined4 *)&piVar6[-4] = 0;
      piVar6[-3] = 0;
      piVar6[-2] = 0;
      piVar6[-1] = 0;
      uVar7 = uVar7 - 1;
      piVar6 = piVar6 + 6;
    } while (uVar7 != 0);
  }
  (this->EmissionLines).Data = pEVar5;
  pEVar8 = pDVar4->Data;
  if (pEVar8 != pEVar8 + pDVar4->Size) {
    do {
      uVar1 = *(undefined4 *)((int)&pEVar8->Wavelength_nm + 4);
      uVar2 = *(undefined4 *)&pEVar8->TransitionProbability__s;
      uVar3 = *(undefined4 *)((int)&pEVar8->TransitionProbability__s + 4);
      *(undefined4 *)&pEVar5->Wavelength_nm = *(undefined4 *)&pEVar8->Wavelength_nm;
      *(undefined4 *)((int)&pEVar5->Wavelength_nm + 4) = uVar1;
      *(undefined4 *)&pEVar5->TransitionProbability__s = uVar2;
      *(undefined4 *)((int)&pEVar5->TransitionProbability__s + 4) = uVar3;
      piVar6 = &pEVar8->Degeneracy;
      uVar1 = *(undefined4 *)&(*(undefined4 *)(void *)((char *)(uintptr_t)(pEVar8) + 0x14));
      pEVar8 = pEVar8 + 1;
      pEVar5->Degeneracy = *piVar6;
      *(undefined4 *)&(*(undefined4 *)(void *)((char *)(uintptr_t)(pEVar5) + 0x14)) = uVar1;
      pEVar5 = pEVar5 + 1;
    } while (pEVar8 != pDVar4->Data + pDVar4->Size);
  }
  util__Str_char___operator__o8((Str_L_char_G_ *)&this->_pad_0x4_1,param_1);
  return this;
}

//==== 006783c0 operator__006783c0 ====


/* public: class util__Darray_L_structEmissionLine_G_ &  util__Darray_struct_EmissionLine___operator(class util__Darray_L_structEmissionLine_G_ const &) */

Darray_L_struct_EmissionLine_G_ * 
util__Darray_struct_EmissionLine___operator
          (Darray_L_struct_EmissionLine_G_ *this,Darray_L_struct_EmissionLine_G_ *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Darray_L_struct_EmissionLine_G_ *pDVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  
  pDVar5 = param_1;
  param_1 = (Darray_L_struct_EmissionLine_G_ *)(**(code **)(*(int *)param_1 + 0xc))();
  SetSize(this,(int *)&param_1);
  iVar6 = (**(code **)(*(int *)pDVar5 + 0xc))();
  if (iVar6 == 0) {
    (**(code **)(*(int *)this + 0x10))();
    return this;
  }
  uVar8 = *(uint *)(this + 8);
  if ((int)uVar8 < 0) {
    param_1 = (Darray_L_struct_EmissionLine_G_ *)0x0;
    SetSize(this,(int *)&param_1);
    uVar8 = *(uint *)(this + 8);
  }
  if (0x3fffffff < (int)uVar8) {
    param_1 = (Darray_L_struct_EmissionLine_G_ *)0x3fffffff;
    SetSize(this,(int *)&param_1);
    uVar8 = *(uint *)(this + 8);
  }
  uVar10 = *(uint *)(this + 0xc);
  if ((int)uVar10 < (int)uVar8) {
    if (uVar10 == 0) {
      *(uint *)(this + 0xc) = uVar8;
      uVar10 = uVar8;
    }
    if ((int)uVar10 < (int)uVar8) {
      do {
        uVar10 = uVar10 * 2;
      } while ((int)uVar10 < (int)uVar8);
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
             port_op_new(-(uint)((int)((ulonglong)uVar10 * 0x18 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar10 * 0x18));
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else if (uVar10 != 0) {
      puVar9 = puVar7 + 4;
      do {
        *puVar9 = 0;
        puVar9[-4] = 0;
        puVar9[-3] = 0;
        puVar9[-2] = 0;
        puVar9[-1] = 0;
        uVar10 = uVar10 - 1;
        puVar9 = puVar9 + 6;
      } while (uVar10 != 0);
      *(undefined4 **)(this + 4) = puVar7;
      goto LAB_006784e1;
    }
    *(undefined4 **)(this + 4) = puVar7;
  }
  else {
    puVar7 = *(undefined4 **)(this + 4);
  }
LAB_006784e1:
  puVar9 = *(undefined4 **)(pDVar5 + 4);
  if (puVar9 != puVar9 + *(int *)(pDVar5 + 8) * 6) {
    do {
      uVar2 = puVar9[1];
      uVar3 = puVar9[2];
      uVar4 = puVar9[3];
      *puVar7 = *puVar9;
      puVar7[1] = uVar2;
      puVar7[2] = uVar3;
      puVar7[3] = uVar4;
      puVar1 = (undefined8 *)(puVar9 + 4);
      puVar9 = puVar9 + 6;
      *(undefined8 *)(puVar7 + 4) = *puVar1;
      puVar7 = puVar7 + 6;
    } while (puVar9 != (undefined4 *)(*(int *)(pDVar5 + 4) + *(int *)(pDVar5 + 8) * 0x18));
  }
  return this;
}





//==== 00678530 scalar_deleting_destructor_00678530 ====

/* public: virtual void * __thiscall EmissionSpectrum:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall
EmissionSpectrum___scalar_deleting_destructor(EmissionSpectrum *this,uint param_1)

{
  EmissionLine *pEVar1;
  
  pEVar1 = (this->EmissionLines).Data;
  (this->EmissionLines)._pad_0x0_0 = (int)&vftable_138;
  if (pEVar1 != (EmissionLine *)0x0) {
    port_op_delete(pEVar1);
  }
  (this->EmissionLines).Data = (EmissionLine *)0x0;
  (this->EmissionLines)._pad_0x0_0 = (int)&vftable;
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x20);
  }
  return this;
}

//==== 00678940 GetReflectionInfo_00678940 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   EmissionSpectrum__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall EmissionSpectrum__GetReflectionInfo(EmissionSpectrum *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_6b7d026f__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_6b7d026f__thread_safe_static_guard_0__);
    if ( cde_l2_6b7d026f__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_f36c2292_ReflectionInfo) = &vftable_329;
      _Init_thread_footer(& cde_l2_6b7d026f__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_f36c2292_ReflectionInfo;
}





//==== 00678a60 GetVisibleColor ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: struct util__Vec3_L_double_G_ 
   EmissionSpectrum__GetVisibleColor(double,double,double)const  */

Vec3_L_double_G_ * 
EmissionSpectrum__GetVisibleColor
          (EmissionSpectrum *this,Vec3_L_double_G_ *__return_storage_ptr__,double param_1,double param_2
          ,double param_3)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  char cVar2;
  int iVar3;
  double *pdVar4;
  Vec3_L_float_G_ *pVVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  double dVar9;
  undefined4 in_stack_00000008;
  undefined1 uVar10;
  Vec3_L_float_G_ local_74;
  double local_68;
  double local_60;
  double local_58;
  float local_50;
  float local_4c;
  float local_48;
  undefined8 local_44;
  double local_3c;
  double local_34;
  double local_2c;
  double local_24;
  double dStack_1c;
  double local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  dVar9 = (double)CONCAT44((*(uint32_t*)&(param_1)),in_stack_00000008);
  local_44 = (double)CONCAT44(__return_storage_ptr__,(undefined4)local_44);
  if (((dVar9 <= 0.0) || ((double)CONCAT44((*(uint32_t*)&(param_2)),(*(uint32_t*)((char*)&(param_1)+4))) <= 0.0)) ||
     ((double)CONCAT44((*(uint32_t*)&(param_3)),(*(uint32_t*)((char*)&(param_2)+4))) <= 0.0)) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\emissionspectra.cpp"
                    ,0x16,"Temperature_K > 0 && AtomicDensity__m3 > 0 && Volume_m3 > 0",(char *)0x0)
    ;
    DebugBreak();
    dVar9 = (double)CONCAT44((*(uint32_t*)&(param_1)),in_stack_00000008);
  }
  *(uint32_t *)&local_2c = GetTotalProportionConstant(this,dVar9);
  local_c = 0;
  local_14 = 0.0;
  *(uint32_t *)&local_24 = 0.0;
  dStack_1c = 0.0;
  iVar3 = (**(code **)((this->EmissionLines)._pad_0x0_0 + 0xc))();
  if (local_c < iVar3) {
    do {
      uVar10 = (undefined1)(uintptr_t) SUB41(&local_c,0);
      pdVar4 = (double *)(**(code **)(this->EmissionLines)._pad_0x0_0)();
      bVar1 = Physics__IsWavelengthVisible(*pdVar4);
      if (bVar1) {
        pVVar5 = Physics__GetVisibleColorFromWavelength
                           (&local_74,(double)CONCAT44(1,(int)((ulonglong)*pdVar4 >> 0x20)),
                            (bool)uVar10);
        *(uint32_t *)&local_48 = pVVar5->X;
        local_4c = pVVar5->Y;
        local_50 = pVVar5->Z;
        local_60 = (double)CONCAT44((*(uint32_t*)&(param_1)),in_stack_00000008);
        *(uint64_t *)&local_3c = (double)CONCAT44((*(uint32_t*)&(param_2)),(*(uint32_t*)((char*)&(param_1)+4)));
        *(uint64_t *)&local_34 = (double)CONCAT44((*(uint32_t*)&(param_3)),(*(uint32_t*)((char*)&(param_2)+4)));
        local_58 = local_2c;
        local_68 = Physics__GetFrequency_Hz(*pdVar4);
        local_68 = local_68 * 6.62606957e-34;
        dVar9 = local_68 / (Physics__BoltzmannConstant_J__K * local_60);
        uVar6 = SUB84(dVar9,0);
        uVar7 = (uint)((ulonglong)dVar9 >> 0x20) ^ 0x80000000;
        libm_sse2_exp_precise(0.0);
        local_58 = (((double)CONCAT44(uVar7,uVar6) * (double)*(int *)(pdVar4 + 2)) / local_58) *
                   local_3c;
        *(uint32_t *)&local_3c = Physics__GetFrequency_Hz(*pdVar4);
        dVar9 = pdVar4[1] * ((local_3c * 6.62606957e-34) / 12.566370614359172) * local_58 *
                12.566370614359172 * local_34;
        *(uint64_t *)&local_24 = (double)local_48 * dVar9 + local_24;
        dStack_1c = (double)local_4c * dVar9 + dStack_1c;
        local_14 = (double)local_50 * dVar9 + local_14;
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)((this->EmissionLines)._pad_0x0_0 + 0xc))();
    } while (local_c < iVar3);
    __return_storage_ptr__ = (Vec3_L_double_G_ *)(uintptr_t)((*(uint32_t*)((char*)&(local_44)+4)));
  }
  *(uint32_t *)&local_34 = util__Abs(&dStack_1c);
  *(uint32_t *)&local_3c = util__Abs(&local_24);
  local_44 = util__Abs(&local_14);
  if (local_34 <= local_3c) {
    dVar9 = util__Abs(&local_24);
    cVar2 = '\0';
    if (dVar9 < local_44) {
      cVar2 = '\x02';
    }
  }
  else {
    dVar9 = util__Abs(&dStack_1c);
    cVar2 = (dVar9 < local_44) + '\x01';
  }
  if ((cVar2 == '\0') ||
     ((dVar9 = dStack_1c, cVar2 != '\x01' && (dVar9 = local_14, cVar2 != '\x02')))) {
    dVar9 = local_24;
  }
  uVar6 = 0;
  uVar8 = 0x3ff00000;
  if (1.0 <= dVar9) {
    uVar6 = SUB84(dVar9,0);
    uVar8 = (undefined4)((ulonglong)dVar9 >> 0x20);
  }
  __return_storage_ptr__->X = local_24 / (double)CONCAT44(uVar8,uVar6);
  __return_storage_ptr__->Y = dStack_1c / (double)CONCAT44(uVar8,uVar6);
  __return_storage_ptr__->Z = local_14 / (double)CONCAT44(uVar8,uVar6);
  return __return_storage_ptr__;
}

//==== 00678d60 Reset_00678d60 ====

/* public: void __thiscall EmissionSpectrum__Reset(class util__Darray_L_structEmissionLine_G_ const &)
    */

void __thiscall EmissionSpectrum__Reset(EmissionSpectrum *this,Darray_L_EmissionLine_G_ *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Darray_L_EmissionLine_G_ *pDVar4;
  int iVar5;
  EmissionLine *pEVar6;
  uint uVar7;
  int *piVar8;
  Darray_L_EmissionLine_G_ *this_00;
  uint uVar9;
  EmissionLine *pEVar10;
  
  pDVar4 = param_1;
  this_00 = &this->EmissionLines;
  param_1 = (Darray_L_EmissionLine_G_ *)(**(code **)(param_1->_pad_0x0_0 + 0xc))();
  util__Darray_L_EmissionLine_G___SetSize(this_00,(int *)&param_1);
  iVar5 = (**(code **)(pDVar4->_pad_0x0_0 + 0xc))();
  if (iVar5 == 0) {
    (**(code **)(this_00->_pad_0x0_0 + 0x10))();
    return;
  }
  uVar7 = (this->EmissionLines).Size;
  if ((int)uVar7 < 0) {
    param_1 = (Darray_L_EmissionLine_G_ *)0x0;
    util__Darray_L_EmissionLine_G___SetSize(this_00,(int *)&param_1);
    uVar7 = (this->EmissionLines).Size;
  }
  if (0x3fffffff < (int)uVar7) {
    param_1 = (Darray_L_EmissionLine_G_ *)0x3fffffff;
    util__Darray_L_EmissionLine_G___SetSize(this_00,(int *)&param_1);
    uVar7 = (this->EmissionLines).Size;
  }
  uVar9 = (this->EmissionLines).Capacity;
  if ((int)uVar9 < (int)uVar7) {
    if (uVar9 == 0) {
      (this->EmissionLines).Capacity = uVar7;
      uVar9 = uVar7;
    }
    if ((int)uVar9 < (int)uVar7) {
      do {
        uVar9 = uVar9 * 2;
      } while ((int)uVar9 < (int)uVar7);
      (this->EmissionLines).Capacity = uVar9;
    }
    if (0x3fffffff < (int)uVar9) {
      (this->EmissionLines).Capacity = 0x3fffffff;
      uVar9 = 0x3fffffff;
    }
    pEVar6 = (this->EmissionLines).Data;
    if (pEVar6 != (EmissionLine *)0x0) {
      port_op_delete(pEVar6);
      uVar9 = (this->EmissionLines).Capacity;
    }
    (this->EmissionLines).Data = (EmissionLine *)0x0;
    pEVar6 = (EmissionLine *)(uintptr_t)(port_op_new(-(uint)((int)((ulonglong)uVar9 * 0x18 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar9 * 0x18)));
    if (pEVar6 == (EmissionLine *)0x0) {
      pEVar6 = (EmissionLine *)0x0;
    }
    else if (uVar9 != 0) {
      piVar8 = &pEVar6->Degeneracy;
      do {
        *piVar8 = 0;
        *(undefined4 *)&piVar8[-4] = 0;
        piVar8[-3] = 0;
        piVar8[-2] = 0;
        piVar8[-1] = 0;
        uVar9 = uVar9 - 1;
        piVar8 = piVar8 + 6;
      } while (uVar9 != 0);
      (this->EmissionLines).Data = pEVar6;
      goto LAB_006784e1;
    }
    (this->EmissionLines).Data = pEVar6;
  }
  else {
    pEVar6 = (this->EmissionLines).Data;
  }
LAB_006784e1:
  pEVar10 = pDVar4->Data;
  if (pEVar10 != pEVar10 + pDVar4->Size) {
    do {
      uVar1 = *(undefined4 *)((int)&pEVar10->Wavelength_nm + 4);
      uVar2 = *(undefined4 *)&pEVar10->TransitionProbability__s;
      uVar3 = *(undefined4 *)((int)&pEVar10->TransitionProbability__s + 4);
      *(undefined4 *)&pEVar6->Wavelength_nm = *(undefined4 *)&pEVar10->Wavelength_nm;
      *(undefined4 *)((int)&pEVar6->Wavelength_nm + 4) = uVar1;
      *(undefined4 *)&pEVar6->TransitionProbability__s = uVar2;
      *(undefined4 *)((int)&pEVar6->TransitionProbability__s + 4) = uVar3;
      piVar8 = &pEVar10->Degeneracy;
      uVar1 = *(undefined4 *)&(*(undefined4 *)(void *)((char *)(uintptr_t)(pEVar10) + 0x14));
      pEVar10 = pEVar10 + 1;
      pEVar6->Degeneracy = *piVar8;
      *(undefined4 *)&(*(undefined4 *)(void *)((char *)(uintptr_t)(pEVar6) + 0x14)) = uVar1;
      pEVar6 = pEVar6 + 1;
    } while (pEVar10 != pDVar4->Data + pDVar4->Size);
  }
  return;
}

//==== 00678d70 StaticFactory_00678d70 ====

/* public: static class util__Reflectable * __cdecl EmissionSpectrum__ReflectionInfoStruct_L_class_EmissionSpectrum_G___StaticFactory(void) */

Reflectable * __cdecl EmissionSpectrum__ReflectionInfoStruct_class_EmissionSpectrum___StaticFactory(void)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  Reflectable *pRVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined **local_2c;
  undefined4 *local_28;
  int local_24;
  undefined4 local_20;
  Str_L_char_G_ local_1c;
  Reflectable *local_10;
  Str_L_char_G_ *local_c;
  int local_8;
  
  bVar6 = false;
  bVar5 = false;
  local_10 = (Reflectable *)0x0;
  pRVar7 = (Reflectable *)(uintptr_t)(port_op_new(0x20));
  local_10 = pRVar7;
  if (pRVar7 == (Reflectable *)0x0) {
    pRVar7 = (Reflectable *)0x0;
  }
  else {
    local_c = &pRVar7->Name;
    local_1c.Data = (char *)0x0;
    local_1c.Capacity = 0;
    pRVar7->_pad_0x0_0 = 0;
    (pRVar7->Name).Data = (char *)0x0;
    (pRVar7->Name).Capacity = 0;
    (pRVar7->Name).Length = 0;
    local_1c.Length = 0;
    pRVar7[1]._pad_0x0_0 = 0;
    pRVar7[1].Name.Data = (char *)0x0;
    pRVar7[1].Name.Capacity = 0;
    pRVar7[1].Name.Length = 0;
    local_20 = 0;
    *(uint32_t *)&local_2c = (uint32_t)(uintptr_t)(&vftable_138);
    *(uint32_t *)&local_28 = (uint32_t)(uintptr_t)((undefined4 *)0x0);
    *(uint32_t *)&local_24 = 0;
    local_c->Data = (char *)0x0;
    (pRVar7->Name).Capacity = 0;
    (pRVar7->Name).Length = 0;
    pRVar7->_pad_0x0_0 = (int)&vftable_330;
    pRVar7[1].Name.Length = 0;
    ((Darray_L_EmissionLine_G_ *)(pRVar7 + 1))->_pad_0x0_0 = (int)&vftable_138
    ;
    pRVar7[1].Name.Data = (char *)0x0;
    pRVar7[1].Name.Capacity = 0;
    pRVar7[1].Name.Length = 0;
    local_8 = util__Darray_L_CrewDepartment__Type_G___Num((Darray_L_CrewDepartment__Type_G_ *)&local_2c);
    util__Darray_L_EmissionLine_G___SetSize((Darray_L_EmissionLine_G_ *)(pRVar7 + 1),&local_8);
    uVar10 = pRVar7[1].Name.Length;
    pcVar8 = (char *)(uintptr_t)(port_op_new(-(uint)((int)((ulonglong)uVar10 * 0x18 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar10 * 0x18)));
    if (pcVar8 == (char *)0x0) {
      pcVar8 = (char *)0x0;
    }
    else if (uVar10 != 0) {
      pcVar9 = pcVar8 + 0x10;
      do {
        pcVar9[0] = '\0';
        pcVar9[1] = '\0';
        pcVar9[2] = '\0';
        pcVar9[3] = '\0';
        pcVar9[-0xffffffff00000010] = '\0';
        pcVar9[-0xffffffff0000000f] = '\0';
        pcVar9[-0xffffffff0000000e] = '\0';
        pcVar9[-0xffffffff0000000d] = '\0';
        pcVar9[-0xffffffff0000000c] = '\0';
        pcVar9[-0xffffffff0000000b] = '\0';
        pcVar9[-0xffffffff0000000a] = '\0';
        pcVar9[-0xffffffff00000009] = '\0';
        pcVar9[-0xffffffff00000008] = '\0';
        pcVar9[-0xffffffff00000007] = '\0';
        pcVar9[-0xffffffff00000006] = '\0';
        pcVar9[-0xffffffff00000005] = '\0';
        pcVar9[-0xffffffff00000004] = '\0';
        pcVar9[-0xffffffff00000003] = '\0';
        pcVar9[-0xffffffff00000002] = '\0';
        pcVar9[-0xffffffff00000001] = '\0';
        uVar10 = uVar10 - 1;
        pcVar9 = pcVar9 + 0x18;
      } while (uVar10 != 0);
    }
    pRVar7[1].Name.Data = pcVar8;
    puVar11 = local_28;
    if (local_28 != local_28 + local_24 * 6) {
      do {
        uVar2 = puVar11[1];
        uVar3 = puVar11[2];
        uVar4 = puVar11[3];
        *(undefined4 *)pcVar8 = *puVar11;
        *(undefined4 *)(pcVar8 + 4) = uVar2;
        *(undefined4 *)(pcVar8 + 8) = uVar3;
        *(undefined4 *)(pcVar8 + 0xc) = uVar4;
        puVar1 = (undefined8 *)(puVar11 + 4);
        puVar11 = puVar11 + 6;
        *(undefined8 *)(pcVar8 + 0x10) = *puVar1;
        pcVar8 = pcVar8 + 0x18;
      } while (puVar11 != local_28 + local_24 * 6);
    }
    util__Str_char___operator__o8(local_c,&local_1c);
    bVar6 = true;
    bVar5 = true;
    pRVar7 = local_10;
  }
  if ((bVar5) && (local_1c.Data != (char *)0x0)) {
    port_op_delete(local_1c.Data);
  }
  if ((bVar6) && (local_2c = (undefined **)&vftable_138, local_28 != (undefined4 *)0x0))
  {
    port_op_delete(local_28);
  }
  return pRVar7;
}

//==== 00678ee0 StaticGetMember_00678ee0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class util__Maybe_L_structutil__ClassMember_G_ const __cdecl
   EmissionSpectrum__ReflectionInfoStruct_class_EmissionSpectrum___StaticGetMember(class
   util__Str_L_char_G_ const &) */

Str_L_char_G_ * __cdecl
EmissionSpectrum__ReflectionInfoStruct_class_EmissionSpectrum___StaticGetMember__o2(Str_L_char_G_ *param_1)

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
        cde_l2_434aba3e__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_434aba3e__thread_safe_static_guard_0__),
      cde_l2_434aba3e__thread_safe_static_guard_0__ == -1)) {
     cde_l2_c9ca925e_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_434aba3e__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_c9ca925e_Count) {
    piVar7 = &DAT_00979ea4;
    do {
      if ((*(int *)(iStack_c + 4) <
            cde_l2_ac83ab74__thread_safe_static_guard_0__) &&
         (_Init_thread_header(& cde_l2_ac83ab74__thread_safe_static_guard_0__),
          cde_l2_ac83ab74__thread_safe_static_guard_0__ == -1)) {
        util__Str_char___Str_char
                  ((Str_L_char_G_ *)
                   & cde_l2_273eb099_StaticMembers,"DummyValue_DO_NOT_USE");
        DAT_00979ea0 = 0;
        DAT_00979ea4 = 0;
        DAT_00979ea8 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979eac,"Unused");
        _DAT_00979eb8 = 0;
        atexit( private__static_struct_util__ClassMember_const___cdecl_EmissionSpectrum__ReflectionInfoStruct_class_EmissionSpectrum___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
        _Init_thread_footer(& cde_l2_ac83ab74__thread_safe_static_guard_0__);
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
LAB_00678fb2:
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
          if (cVar3 == '\0') goto LAB_00678fb2;
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
    } while (iVar6 <  cde_l2_c9ca925e_Count);
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





//==== 00679140 StaticGetMemberCount_00679140 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl EmissionSpectrum__ReflectionInfoStruct_class_EmissionSpectrum___StaticGetMemberCount(void) */

int __cdecl
EmissionSpectrum__ReflectionInfoStruct_class_EmissionSpectrum___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_de714137__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_de714137__thread_safe_static_guard_0__);
    if ( cde_l2_de714137__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_f5d73fca_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00979e74 = 0;
      _DAT_00979e78 = 0;
      _DAT_00979e7c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979e80,"Unused");
      _DAT_00979e8c = 0;
      atexit( private__static_int_const___cdecl_EmissionSpectrum__ReflectionInfoStruct_class_EmissionSpectrum___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_de714137__thread_safe_static_guard_0__);
    }
  }
  return 1;
}





//==== 006791e0 StaticGetMembers_006791e0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class util__Darray_L_structutil__ClassMember_G_ const __cdecl
   EmissionSpectrum__ReflectionInfoStruct_class_EmissionSpectrum___StaticGetMembers(void) */

Darray_L_struct_util__ClassMember_G_ * __cdecl
EmissionSpectrum__ReflectionInfoStruct_class_EmissionSpectrum___StaticGetMembers__o2(void)

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
        cde_l2_e8046bc7__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_e8046bc7__thread_safe_static_guard_0__),
      cde_l2_e8046bc7__thread_safe_static_guard_0__ == -1)) {
     cde_l2_8c845e26_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_e8046bc7__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_8c845e26_Count);
  iVar3 = 0;
  if (0 <  cde_l2_8c845e26_Count) {
    puVar4 = &DAT_00979ea4;
    do {
      if ((*(int *)(iStack_c + 4) <
            cde_l2_ac83ab74__thread_safe_static_guard_0__) &&
         (_Init_thread_header(& cde_l2_ac83ab74__thread_safe_static_guard_0__),
          cde_l2_ac83ab74__thread_safe_static_guard_0__ == -1)) {
        util__Str_char___Str_char
                  ((Str_L_char_G_ *)
                   & cde_l2_273eb099_StaticMembers,"DummyValue_DO_NOT_USE");
        DAT_00979ea0 = 0;
        DAT_00979ea4 = 0;
        DAT_00979ea8 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00979eac,"Unused");
        _DAT_00979eb8 = 0;
        atexit( private__static_struct_util__ClassMember_const___cdecl_EmissionSpectrum__ReflectionInfoStruct_class_EmissionSpectrum___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
        _Init_thread_footer(& cde_l2_ac83ab74__thread_safe_static_guard_0__);
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
    } while (iVar3 <  cde_l2_8c845e26_Count);
  }
  return in_stack_00000004;
}





//==== 006793f0 StaticGetReflectionInfo_006793f0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct EmissionSpectrum__ReflectionInfoStruct_L_classEmissionSpectrum_G_ * __cdecl
   EmissionSpectrum__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_EmissionSpectrum_G_ * __cdecl
EmissionSpectrum__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_6b7d026f__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_6b7d026f__thread_safe_static_guard_0__);
    if ( cde_l2_6b7d026f__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_f36c2292_ReflectionInfo) = &vftable_329;
      _Init_thread_footer(& cde_l2_6b7d026f__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_f36c2292_ReflectionInfo;
}





//==== 00679870 CompressibleFlowPoint ====


/* public: 
   CompressibleFlowPoint__CompressibleFlowPoint(double,double,double,double,double,double,double) */

CompressibleFlowPoint * 
CompressibleFlowPoint__CompressibleFlowPoint
          (CompressibleFlowPoint *this,double param_1,double param_2,double param_3,double param_4,
          double param_5,double param_6,double param_7)

{
  this->SpecificHeat_J__kg_K = param_1;
  this->SpecificGasConstant_J__kg_K = param_2;
  this->Temperature_K = param_3;
  this->Pressure_Pa = param_4;
  this->MassFlowRate_kg__s = param_5;
  this->Area_m2 = param_6;
  this[1].SpecificHeat_J__kg_K = param_7;
  return this;
}





//==== 006798c0 CompressibleFlowPoint_006798c0 ====


/* public:  CompressibleFlowPoint__CompressibleFlowPoint(class Material
   *,double,double,double,double,double) */

CompressibleFlowPoint * 
CompressibleFlowPoint__CompressibleFlowPoint__o4
          (CompressibleFlowPoint *this,Material *param_1,double param_2,double param_3,
          double param_4,double param_5,double param_6)

{
  double dVar1;
  undefined4 in_stack_00000008;
  
  this->SpecificHeat_J__kg_K = param_1->BoilingPoint_K;
  dVar1 = Material__GetSpecificGasConstant_J__kg_K(param_1);
  this->Temperature_K = (double)CONCAT44((*(uint32_t*)&(param_2)),in_stack_00000008);
  this->Pressure_Pa = (double)CONCAT44((*(uint32_t*)&(param_3)),(*(uint32_t*)((char*)&(param_2)+4)));
  this->MassFlowRate_kg__s = (double)CONCAT44((*(uint32_t*)&(param_4)),(*(uint32_t*)((char*)&(param_3)+4)));
  this->Area_m2 = (double)CONCAT44((*(uint32_t*)&(param_5)),(*(uint32_t*)((char*)&(param_4)+4)));
  this->SpecificGasConstant_J__kg_K = dVar1;
  this[1].SpecificHeat_J__kg_K = (double)CONCAT44((*(uint32_t*)&(param_6)),(*(uint32_t*)((char*)&(param_5)+4)));
  return this;
}





//==== 00679920 CompressibleFlowPoint_00679920 ====


/* public:  CompressibleFlowPoint__CompressibleFlowPoint(void) */

CompressibleFlowPoint * 
CompressibleFlowPoint__CompressibleFlowPoint__o3(CompressibleFlowPoint *this)

{
  *(undefined4 *)&this->SpecificHeat_J__kg_K = 0;
  *(undefined4 *)((int)&this->SpecificHeat_J__kg_K + 4) = 0;
  *(undefined4 *)&this->SpecificGasConstant_J__kg_K = 0;
  *(undefined4 *)((int)&this->SpecificGasConstant_J__kg_K + 4) = 0;
  *(undefined4 *)&this->Temperature_K = 0;
  *(undefined4 *)((int)&this->Temperature_K + 4) = 0;
  *(undefined4 *)&this->Pressure_Pa = 0;
  *(undefined4 *)((int)&this->Pressure_Pa + 4) = 0;
  *(undefined4 *)&this->MassFlowRate_kg__s = 0;
  *(undefined4 *)((int)&this->MassFlowRate_kg__s + 4) = 0;
  *(undefined4 *)&this->Area_m2 = 0;
  *(undefined4 *)((int)&this->Area_m2 + 4) = 0;
  this[1].SpecificHeat_J__kg_K = 0.0;
  return this;
}





//==== 00679940 DoesAreaChangeHaveASonicPoint ====


/* public: bool __thiscall CompressibleFlowPoint__DoesAreaChangeHaveASonicPoint(double)const  */

bool __thiscall
CompressibleFlowPoint__DoesAreaChangeHaveASonicPoint(CompressibleFlowPoint *this,double param_1)

{
  double dVar1;
  
  dVar1 = GetCriticalArea_m2(this);
}





//==== 00679970 GetAreaChangedExitFlow ====


/* public: struct CompressibleFlowPoint 
   CompressibleFlowPoint__GetAreaChangedExitFlow(double)const  */

CompressibleFlowPoint * 
CompressibleFlowPoint__GetAreaChangedExitFlow
          (CompressibleFlowPoint *this,CompressibleFlowPoint *__return_storage_ptr__,double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 in_stack_00000008;
  
  dVar1 = this->SpecificHeat_J__kg_K;
  dVar2 = this->SpecificGasConstant_J__kg_K;
  dVar3 = GetExitTemperature_K(this,(double)CONCAT44((*(uint32_t*)&(param_1)),in_stack_00000008));
  dVar4 = GetExitPressure_Pa(this,(double)CONCAT44((*(uint32_t*)&(param_1)),in_stack_00000008));
  __return_storage_ptr__->SpecificHeat_J__kg_K = dVar1;
  __return_storage_ptr__->SpecificGasConstant_J__kg_K = dVar2;
  __return_storage_ptr__->Temperature_K = dVar3;
  __return_storage_ptr__->Pressure_Pa = dVar4;
  __return_storage_ptr__->MassFlowRate_kg__s = this->MassFlowRate_kg__s;
  __return_storage_ptr__->Area_m2 = (double)CONCAT44((*(uint32_t*)&(param_1)),in_stack_00000008);
  __return_storage_ptr__[1].SpecificHeat_J__kg_K = 0.0;
  return __return_storage_ptr__;
}





//==== 00679a10 GetCriticalArea_m2 ====


/* public: double __thiscall CompressibleFlowPoint__GetCriticalArea_m2(void)const  */

double __thiscall CompressibleFlowPoint__GetCriticalArea_m2(CompressibleFlowPoint *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dStack_c;
  
  dVar5 = this->SpecificGasConstant_J__kg_K;
  dStack_c = this[1].SpecificHeat_J__kg_K;
  dVar4 = dStack_c;
  if (dStack_c <= 0.0) {
    if ((((this->SpecificHeat_J__kg_K <= 0.0) || (dVar5 <= 0.0)) ||
        (dVar4 = this->Temperature_K, dVar4 <= 0.0)) ||
       (((dVar1 = this->Pressure_Pa, dVar1 <= 0.0 ||
         (dVar2 = this->MassFlowRate_kg__s, dVar2 <= 0.0)) || (dVar3 = this->Area_m2, dVar3 <= 0.0))
       )) {
      dVar4 = 0.0;
    }
    else {
      dVar6 = GetGasSpeedOfSound_m__s(this,dVar4);
      dStack_c = this[1].SpecificHeat_J__kg_K;
      dVar4 = (dVar2 / (dVar3 * (dVar1 / (dVar4 * dVar5)))) / dVar6;
    }
  }
  if (dStack_c <= 0.0) {
    if (((this->SpecificHeat_J__kg_K <= 0.0) ||
        (dVar5 = this->SpecificGasConstant_J__kg_K, dVar5 <= 0.0)) ||
       ((dVar1 = this->Temperature_K, dVar1 <= 0.0 ||
        (((dVar2 = this->Pressure_Pa, dVar2 <= 0.0 ||
          (dVar3 = this->MassFlowRate_kg__s, dVar3 <= 0.0)) || (dVar6 = this->Area_m2, dVar6 <= 0.0)
         ))))) {
      dStack_c = 0.0;
    }
    else {
      dStack_c = GetGasSpeedOfSound_m__s(this,dVar1);
      dStack_c = (dVar3 / (dVar6 * (dVar2 / (dVar1 * dVar5)))) / dStack_c;
    }
  }
  dVar5 = this->SpecificHeat_J__kg_K /
          (this->SpecificHeat_J__kg_K - this->SpecificGasConstant_J__kg_K);
  dVar5 = ((dVar5 + 1.0) * 0.5) / ((dVar5 - 1.0) * 0.5 * dVar4 * dVar4 + 1.0);
  libm_sse2_pow_precise(0.0,0.0);
  return dVar5 * this->Area_m2 * dStack_c;
}





//==== 00679bf0 GetDensity_kg__m3_00679bf0 ====


/* public: double __thiscall CompressibleFlowPoint__GetDensity_kg__m3(void)const  */

double __thiscall CompressibleFlowPoint__GetDensity_kg__m3(CompressibleFlowPoint *this)

{
  if ((((0.0 < this->SpecificHeat_J__kg_K) && (0.0 < this->SpecificGasConstant_J__kg_K)) &&
      (0.0 < this->Temperature_K)) &&
     (((0.0 < this->Pressure_Pa && (0.0 < this->MassFlowRate_kg__s)) && (0.0 < this->Area_m2)))) {
    return this->Pressure_Pa / (this->Temperature_K * this->SpecificGasConstant_J__kg_K);
  }
  return 0.0;
}





//==== 00679fd0 GetExitPressure_Pa ====


/* public: double __thiscall CompressibleFlowPoint__GetExitPressure_Pa(double)const  */

double __thiscall
CompressibleFlowPoint__GetExitPressure_Pa(CompressibleFlowPoint *this,double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = 0.0;
  if ((((0.0 < this->SpecificHeat_J__kg_K) && (0.0 < this->SpecificGasConstant_J__kg_K)) &&
      (0.0 < this->Temperature_K)) &&
     (((0.0 < this->Pressure_Pa && (0.0 < this->MassFlowRate_kg__s)) && (0.0 < this->Area_m2)))) {
    dVar5 = GetExitMachNumber(this,param_1);
    dVar1 = this->SpecificHeat_J__kg_K;
    if (((dVar1 <= 0.0) || (dVar4 = this->SpecificGasConstant_J__kg_K, dVar4 <= 0.0)) ||
       ((dVar3 = this->Temperature_K, dVar3 <= 0.0 ||
        (((this->Pressure_Pa <= 0.0 || (this->MassFlowRate_kg__s <= 0.0)) || (this->Area_m2 <= 0.0))
        )))) {
      dVar3 = this->Temperature_K;
      dVar2 = 0.0;
      dVar4 = this->SpecificGasConstant_J__kg_K;
    }
    else {
      dVar2 = this->MassFlowRate_kg__s / (this->Area_m2 * (this->Pressure_Pa / (dVar3 * dVar4)));
    }
    dVar3 = ((dVar2 * dVar2) / (dVar1 + dVar1) + dVar3) / dVar3;
    libm_sse2_pow_precise(0.0,0.0);
    dVar2 = this->Pressure_Pa;
    dVar1 = dVar5 * dVar5 * (dVar1 / (dVar1 - dVar4) - 1.0) * 0.5 + 1.0;
    libm_sse2_pow_precise(0.0,0.0);
    dVar1 = (dVar3 * dVar2) / dVar1;
  }
  return dVar1;
}





//==== 0067a150 GetExitTemperature_K ====


/* public: double __thiscall CompressibleFlowPoint__GetExitTemperature_K(double)const  */

double __thiscall
CompressibleFlowPoint__GetExitTemperature_K(CompressibleFlowPoint *this,double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if ((((0.0 < this->SpecificHeat_J__kg_K) && (0.0 < this->SpecificGasConstant_J__kg_K)) &&
      (0.0 < this->Temperature_K)) &&
     (((0.0 < this->Pressure_Pa && (0.0 < this->MassFlowRate_kg__s)) && (0.0 < this->Area_m2)))) {
    dVar5 = GetExitMachNumber(this,param_1);
    dVar1 = this->SpecificHeat_J__kg_K;
    if (((dVar1 <= 0.0) || (dVar2 = this->SpecificGasConstant_J__kg_K, dVar2 <= 0.0)) ||
       ((dVar4 = this->Temperature_K, dVar4 <= 0.0 ||
        (((this->Pressure_Pa <= 0.0 || (this->MassFlowRate_kg__s <= 0.0)) || (this->Area_m2 <= 0.0))
        )))) {
      dVar4 = this->Temperature_K;
      dVar3 = 0.0;
      dVar2 = this->SpecificGasConstant_J__kg_K;
    }
    else {
      dVar3 = this->MassFlowRate_kg__s / (this->Area_m2 * (this->Pressure_Pa / (dVar4 * dVar2)));
    }
    return ((dVar3 * dVar3) / (dVar1 + dVar1) + dVar4) /
           ((dVar1 / (dVar1 - dVar2) - 1.0) * 0.5 * dVar5 * dVar5 + 1.0);
  }
  return 0.0;
}





//==== 0067a360 IsFlowPointValid ====


/* public: bool __thiscall CompressibleFlowPoint__IsFlowPointValid(void)const  */

bool __thiscall CompressibleFlowPoint__IsFlowPointValid(CompressibleFlowPoint *this)

{
  if ((((0.0 < this->SpecificHeat_J__kg_K) && (0.0 < this->SpecificGasConstant_J__kg_K)) &&
      (0.0 < this->Temperature_K)) &&
     (((0.0 < this->Pressure_Pa && (0.0 < this->MassFlowRate_kg__s)) && (0.0 < this->Area_m2)))) {
    return true;
  }
  return false;
}





//==== 0067a630 DrawCompressibleFlowTube ====


/* void __cdecl DrawCompressibleFlowTube(struct util__Vec2_L_int_G_,struct util__Vec2_L_int_G_,struct
   CompressibleFlowPoint const &,double) */

void __cdecl
DrawCompressibleFlowTube
          (Vec2_L_int_G_ param_1,Vec2_L_int_G_ param_2,CompressibleFlowPoint *param_3,double param_4)

{
  undefined8 stack0xfffffffc;
  double dVar1;
  Vec4_L_double_G_ VVar2;
  Str_L_char_G_ *pSVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  undefined4 in_stack_00000018;
  Str_L_char_G_ SStack_24;
  double dStack_18;
  double dStack_10;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  dVar1 = param_3->Temperature_K / 1000.0;
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  if (1.0 <= dVar1) {
    dVar1 = 1.0;
  }
  dVar6 = (1.0 - dVar1) * 0.0;
  dStack_10 = dVar6 + dVar1 * 0.0;
  dStack_18 = dVar1 * 0.0 + (1.0 - dVar1);
  pSVar3 = (Str_L_char_G_ *)(uintptr_t)(CompressibleFlowPoint__PrintDiagramFlowReport(param_3,&SStack_24));
  uVar4 = 0;
  uVar5 = 0x40240000;
  if (10.0 <= (double)CONCAT44((*(uint32_t*)&(param_4)),in_stack_00000018)) {
    uVar4 = in_stack_00000018;
    uVar5 = (*(uint32_t*)&(param_4));
  }
  VVar2.Y = SUB84(dStack_10,0);
  VVar2.X = dVar6 + dVar1;
  VVar2.Z = (int)((ulonglong)dStack_10 >> 0x20);
  VVar2.Z = SUB84(dStack_18,0);
  VVar2.W = (int)((ulonglong)dStack_18 >> 0x20);
  DrawSingleFlowTube(param_1,param_2,(double)CONCAT44(uVar5,uVar4),(*(Vec3_L_double_G_ *)&(VVar2)),pSVar3);
  if (SStack_24.Data != (char *)0x0) {
    port_op_delete(SStack_24.Data);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0067a710 DrawFlowTube ====


/* void __cdecl DrawFlowTube(struct util__Vec2_L_int_G_,struct util__Vec2_L_int_G_,double) */

void __cdecl DrawFlowTube(Vec2_L_int_G_ param_1,Vec2_L_int_G_ param_2,double param_3)

{
  double dVar1;
  Vec4_L_double_G_ VVar2;
  Str_L_char_G_ *pSVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uStack_2c;
  Str_L_char_G_ SStack_20;
  double dStack_14;
  double dStack_c;
  
  dVar1 = param_3 / 1000.0;
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  if (1.0 <= dVar1) {
    dVar1 = 1.0;
  }
  dVar4 = (1.0 - dVar1) * 0.0;
  dStack_c = dVar4 + dVar1 * 0.0;
  dVar4 = dVar4 + dVar1;
  dStack_14 = dVar1 * 0.0 + (1.0 - dVar1);
  uVar5 = SUB84(dVar4,0);
  uStack_2c = (undefined4)((ulonglong)dVar4 >> 0x20);
  pSVar3 = (Str_L_char_G_ *)(uintptr_t)(PrintTemperature(&SStack_20,(double)CONCAT44(uVar5,(int)((ulonglong)param_3 >> 0x20))));
  VVar2.Y = uStack_2c;
  VVar2.X = uVar5;
  VVar2.Y = SUB84(dStack_c,0);
  VVar2.Z = (int)((ulonglong)dStack_c >> 0x20);
  VVar2.Z = SUB84(dStack_14,0);
  VVar2.W = (int)((ulonglong)dStack_14 >> 0x20);
  DrawSingleFlowTube(param_1,param_2,32.0,(*(Vec3_L_double_G_ *)&(VVar2)),pSVar3);
  if (SStack_20.Data != (char *)0x0) {
    port_op_delete(SStack_20.Data);
  }
  return;
}





//==== 0067a7e0 DrawSingleFlowTube ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* void __cdecl DrawSingleFlowTube(struct util__Vec2_L_int_G_,struct util__Vec2_L_int_G_,double,struct
   util__Vec3_L_double_G_,class util__Str_L_char_G_ const &) */

void __cdecl
DrawSingleFlowTube(Vec2_L_int_G_ param_1,Vec2_L_int_G_ param_2,double param_3,Vec3_L_double_G_ param_4,
                  Str_L_char_G_ *param_5)

{
  undefined8 stack0xffffff00;
  undefined8 stack0xffffff24;
  undefined8 stack0xfffffffc;
  Vec2_L_int_G_ VVar1;
  Color CVar2;
  Vec3_L_double_G_ VVar3;
  Maybe_L_util__Color_G_ MVar4;
  Vec4_L_double_G_ VVar5;
  Line2_L_double_G_ LVar6;
  Line2_L_double_G_ LVar7;
  Vec3_L_float_G_ VVar8;
  undefined1 auVar9 [16];
  int iVar10;
  Color *this;
  Color *pCVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  undefined1 in_stack_ffffff00 [20];
  float fVar15;
  float fVar16;
  int *piVar17;
  undefined **ppuVar18;
  char *pcVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  Font *pFVar25;
  int TVar26;
  int TVar27;
  undefined4 uVar28;
  Verticality VVar29;
  undefined4 uVar30;
  Style SVar31;
  Color local_8c;
  undefined1 local_6c [16];
  undefined1 local_5c [12];
  float fStack_50;
  int local_4c;
  Str_L_char_G_ *local_48;
  int local_44;
  undefined1 local_40 [16];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  DrawStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(uint32_t *)&local_48 = (uint32_t)(uintptr_t)(param_5);
  glLineWidth();
  (*(uint64_t*)&(local_40)) = (undefined8)(param_2.X - param_1.X);
  (*(uint64_t*)((char*)&(local_40)+8)) = (undefined8)(param_2.Y - param_1.Y);
  util__Vec2_double___Normalized((Vec2_L_double_G_ *)local_40,(Vec2_L_double_G_ *)local_5c);
  dVar13 = (double)CONCAT44(fStack_50,(*(uint32_t*)((char*)&(local_5c)+8)));
  dVar14 = param_3 * 0.5 * (double)(*(uint64_t*)&(local_5c));
  *(uint32_t *)&local_24 = (int)(param_3 * 0.5 * -(double)CONCAT44(fStack_50,(*(uint32_t*)((char*)&(local_5c)+8))));
  local_10 = (int)dVar14;
  *(uint32_t *)&local_1c = param_1.X - local_24;
  *(uint32_t *)&local_2c = param_1.X + local_24;
  *(uint32_t *)&local_18 = param_1.Y - local_10;
  *(uint32_t *)&local_28 = local_10 + param_1.Y;
  local_14 = param_2.X - local_24;
  local_10 = param_2.Y - local_10;
  *(uint32_t *)&local_24 = param_2.X + local_24;
  local_20 = (int)dVar14 + param_2.Y;
  local_4c = (param_1.Y + param_2.Y) / 2;
  (*(uint32_t*)((char*)&(local_5c)+8)) = (param_2.X + param_1.X) / 2;
  iVar10 = (int)((double)(*(uint64_t*)&(local_5c)) * param_3 * 0.5);
  iVar12 = (int)(dVar13 * param_3 * 0.5);
  local_30 = (*(uint32_t*)((char*)&(local_5c)+8)) + iVar10;
  local_44 = local_4c + iVar12;
  iVar12 = local_4c - iVar12;
  fStack_50 = (float)((*(uint32_t*)((char*)&(local_5c)+8)) - iVar10);
  VVar8.Y = (float)param_4.Y;
  VVar8.X = (float)param_4.X;
  VVar8.Z = (float)param_4.Z;
  (*(uint32_t *)((char *)&(local_40) + 12)) = (*(uint32_t*)((char*)&(local_5c)+8));
  glColorVec(VVar8);
  Graphics__DrawStack__DrawStack(&local_9,7);
  glVertex2iv();
  glVertex2iv();
  glVertex2iv();
  glVertex2iv();
  Graphics__DrawStack___DrawStack(&local_9);
  glColor(Preset__White,1.0);
  LVar6.A.Y = SUB84((double)local_18,0);
  LVar6.A.X = (double)local_1c;
  LVar6.A.Z = (int)((ulonglong)(double)local_18 >> 0x20);
  LVar6.B.X = SUB84((double)local_14,0);
  LVar6.B.Y = (int)((ulonglong)(double)local_14 >> 0x20);
  LVar6.B.Y = SUB84((double)local_10,0);
  LVar6.B.Z = (int)((ulonglong)(double)local_10 >> 0x20);
  DrawAntialiasedLine(LVar6,1.0);
  uVar28 = 0;
  uVar30 = 0x3ff00000;
  LVar7.A.Y = SUB84((double)local_28,0);
  LVar7.A.X = (double)local_2c;
  LVar7.A.Z = (int)((ulonglong)(double)local_28 >> 0x20);
  LVar7.B.X = SUB84((double)local_24,0);
  LVar7.B.Y = (int)((ulonglong)(double)local_24 >> 0x20);
  LVar7.B.Y = SUB84((double)local_20,0);
  LVar7.B.Z = (int)((ulonglong)(double)local_20 >> 0x20);
  DrawAntialiasedLine(LVar7,1.0);
  dVar13 = (double)local_30;
  dVar14 = (double)iVar12;
  fVar15 = 9.52024e-39;
  VVar3.Y = SUB84(dVar14,0);
  VVar3.X = (double)(int)fStack_50;
  *(uint32_t *)&VVar3.Z = (uint32_t)(uintptr_t)((char *)((ulonglong)dVar14 >> 0x20));
  VVar5.Y = SUB84((double)local_44,0);
  VVar5.X = dVar13;
  VVar5.Z = (int)((ulonglong)(double)local_44 >> 0x20);
  (*(uint64_t*)((char*)&(auVar9)+8)) = 0;
  (*(uint64_t*)&(auVar9)) = CONCAT44(uVar30,uVar28) & 0xffffffffffffff00;
  DrawAntialiasedArrow((*(Vec2_L_double_G_ *)&(VVar3)),(*(Vec2_L_double_G_ *)&((*(Vec4_L_double_G_ *)&(VVar5)))),param_3 * 0.25,2.0,(*(Maybe_L_double_G_ *)cde_shl16((auVar9), 0x40)));
  pCVar11 = (Color *)local_6c;
  SVar31 = Style__Default;
  VVar29 = Verticality__Horizontal;
  TVar27 = Center;
  TVar26 = Center;
  pFVar25 = (Font *)0x0;
  fVar24 = 0.7;
  this = (Color *)util__Color__Color(&local_8c,Preset__Black,1.0);
  pcVar19 = (char *)((ulonglong)dVar14 >> 0x20);
  pCVar11 = util__Color__ReAlphaed(this,pCVar11,fVar24);
  piVar17 = &pCVar11->_pad_0x4_1;
  fVar16 = 9.520349e-39;
  util__Str_char___Str_char((Str_L_char_G_ *)&stack0xffffff24,(Str_L_char_G_ *)piVar17);
  ppuVar18 = &vftable_59;
  fVar20 = pCVar11->Hue_degrees;
  fVar21 = pCVar11->Saturation;
  fVar22 = pCVar11->Value;
  fVar23 = pCVar11->Alpha;
  uVar28 = CONCAT31((int3)((uint)fVar24 >> 8),1);
  util__Color__Color((Color *)&stack0xffffff00,Preset__White,1.0);
  VVar1.Y = local_4c;
  VVar1.X = (*(uint32_t *)((char *)&(local_40) + 12));
  CVar2.Saturation = fVar15;
  CVar2._pad_0x0_0 = (*(uint32_t*)&(in_stack_ffffff00));
  CVar2._pad_0x4_1 = (*(uint32_t*)((char*)&(in_stack_ffffff00)+4));
  CVar2._pad_0x8_2 = (*(uint32_t*)((char*)&(in_stack_ffffff00)+8));
  CVar2._pad_0xc_3 = (*(uint32_t *)((char *)&(in_stack_ffffff00) + 12));
  CVar2.Hue_degrees = (float)(*(uint32_t *)((char *)&(in_stack_ffffff00) + 16));
  CVar2.Value = fVar16;
  CVar2.Alpha = (double)(uintptr_t)((float)(int)(uintptr_t)(piVar17));
  MVar4.Data._pad_0x4_1 = (int)pcVar19;
  MVar4.Data._pad_0x0_0 = (int)ppuVar18;
  MVar4.Data._pad_0x8_2 = SUB84(dVar13,0);
  MVar4.Data._pad_0xc_3 = (int)((ulonglong)dVar13 >> 0x20);
  MVar4.Data.Hue_degrees = fVar20;
  MVar4.Data.Saturation = fVar21;
  MVar4.Data.Value = fVar22;
  MVar4.Data.Alpha = fVar23;
  (*(uint32_t *)((char *)&(MVar4) + 32)) = uVar28;
  UIStaticText__RenderLabel(VVar1,local_48,CVar2,MVar4,pFVar25,TVar26,TVar27,VVar29,SVar31);
  (*(uint32_t*)&(local_6c)) = (uint32_t)(uintptr_t)(&vftable_5);
  if ((void *)(*(uint32_t*)((char*)&(local_6c)+4)) != (void *)0x0) {
    port_op_delete((void *)(*(uint32_t*)((char*)&(local_6c)+4)));
    (*(uint32_t*)((char*)&(local_6c)+4)) = (uint32_t)(uintptr_t)((void *)0x0);
  }
  local_8c._pad_0x0_0 = (int)&vftable_5;
  if ((void *)local_8c._pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)local_8c._pad_0x4_1);
  }
  return;
}

//==== 0067ad80 GetFlowTemperatureColor ====


/* struct util__Vec3_L_double_G_ __cdecl GetFlowTemperatureColor(double) */

Vec3_L_double_G_ * __cdecl GetFlowTemperatureColor(Vec3_L_double_G_ *__return_storage_ptr__,double param_1)

{
  double dVar1;
  double dVar2;
  undefined4 in_stack_00000008;
  
  dVar2 = (double)CONCAT44((*(uint32_t*)&(param_1)),in_stack_00000008) / 1000.0;
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  if (1.0 <= dVar2) {
    dVar2 = 1.0;
  }
  dVar1 = (1.0 - dVar2) * 0.0;
  __return_storage_ptr__->Y = dVar1 + dVar2 * 0.0;
  __return_storage_ptr__->X = dVar1 + dVar2;
  __return_storage_ptr__->Z = dVar2 * 0.0 + (1.0 - dVar2);
  return __return_storage_ptr__;
}





//==== 0067ade0 GetSystemSize ====


/* int __cdecl GetSystemSize(void) */

int __cdecl GetSystemSize(void)

{
  return 0x40;
}





//==== 0067adf0 Normalized_0067adf0 ====


/* public: struct util__Vec2_L_double_G_ const __thiscall util__Vec2_double___Normalized(void)const  */

Vec2_L_double_G_ * __thiscall
util__Vec2_double___Normalized(Vec2_L_double_G_ *this,Vec2_L_double_G_ *__return_storage_ptr__)

{
  double dVar1;
  Maybe_L_double_G_ *pMVar2;
  Maybe_L_double_G_ MStack_1c;
  double dStack_c;
  
  dStack_c = this->X * this->X + this->Y * this->Y;
  pMVar2 = (Maybe_L_double_G_ *)(uintptr_t)(Sqrt(&MStack_1c,&dStack_c));
  if (pMVar2->IsValidData == false) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,"IsValid()",
              (char *)0x0);
    DebugBreak();
  }
  dStack_c = pMVar2->Data;
  if (dStack_c <= 0.0) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\vector.inl",0x98,
              "len > 0",(char *)0x0);
    DebugBreak();
  }
  dVar1 = this->Y;
  __return_storage_ptr__->X = this->X * (1.0 / dStack_c);
  __return_storage_ptr__->Y = (1.0 / dStack_c) * dVar1;
  return __return_storage_ptr__;
}





//==== 0067aeb0 StaticGetPropertyGetters_0067aeb0 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cdouble___thiscall_util__Reflectable___P__void_const_G__G_ __thiscall
   FusionReaction__StaticGetPropertyGetters(void)const  */

void __thiscall FusionReaction__StaticGetPropertyGetters(FusionReaction *this)

{
  undefined8 stack0xffffffc0;
  undefined8 stack0xfffffffc;
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ *pSVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  Str_L_char_G_ *pSVar7;
  int iVar8;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cvoid____cdecl_P__void__G___G_ *in_stack_00000004;
  int iVar9;
  Maybe_L_int_G_ *pMVar10;
  int iStack_3c;
  undefined1 auStack_24 [8];
  int iStack_1c;
  undefined4 uStack_18;
  Maybe_L_int_G_ MStack_14;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_0097a354) &&
     (_Init_thread_header(&DAT_0097a354), DAT_0097a354 == -1)) {
    puVar4 = (undefined4 *)port_op_new(0xa4);
    if (puVar4 == (undefined4 *)0x0) {
      DAT_0095f3dc = (undefined4)(uintptr_t)((Str_L_char_G_ *)0x0);
    }
    else {
      DAT_0095f3dc = (undefined4)(uintptr_t)((Str_L_char_G_ *)(puVar4 + 1));
      *puVar4 = 10;
      iVar9 = 10;
      pSVar2 = (Str_L_char_G_ *)(uintptr_t)(DAT_0095f3dc);
      do {
        pSVar2->Data = (char *)0x0;
        pSVar2->Capacity = 0;
        pSVar2->Length = 0;
        pSVar2[1].Data = (char *)0x0;
        iVar9 = iVar9 + -1;
        pSVar2 = (Str_L_char_G_ *)&pSVar2[1].Capacity;
      } while (iVar9 != 0);
    }
    iVar9 = 0;
    if (0 < DAT_0095f3e4) {
      (*(uint32_t*)&(auStack_24)) = (uint32_t)(uintptr_t)((char *)0x0);
      iVar8 = 0;
      (*(uint32_t*)((char*)&(auStack_24)+4)) = (uint32_t)(uintptr_t)((void *)0x0);
      iStack_1c = 0;
      uStack_18 = 0;
      do {
        pSVar2 = (Str_L_char_G_ *)((int)(int)(uintptr_t)(DAT_0095f3dc) + iVar8);
        util__Str_char___operator__o8(pSVar2,(Str_L_char_G_ *)auStack_24);
        iVar9 = iVar9 + 1;
        pSVar2[1].Data = (char *)0x0;
        iVar8 = iVar8 + 0x10;
      } while (iVar9 < DAT_0095f3e4);
    }
    atexit(FUN_008fcd30);
    iStack_3c = 0x67b1dd;
    _Init_thread_footer(&DAT_0097a354);
  }
  if (DAT_0095f3e0 == 0) {
    pSVar7 = (Str_L_char_G_ *)&stack0xffffffc0;
    MStack_14.Data = 0;
    (*(uint32_t*)((char*)&(MStack_14)+4)) = (*(uint32_t*)((char*)&(MStack_14)+4)) & 0xffffff00;
    pMVar10 = &MStack_14;
    iVar9 = 3;
    pSVar2 = (Str_L_char_G_ *)
             util__Str_char___Str_char((Str_L_char_G_ *)(auStack_24 + 4),"GetAverageTotalEnergy_eV");
    util__Str_char___SubStr(pSVar2,pSVar7,iVar9,pMVar10);
    FUN_0067b510();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
    pSVar7 = (Str_L_char_G_ *)&stack0xffffffc0;
    MStack_14.Data = 0;
    (*(uint32_t*)((char*)&(MStack_14)+4)) = (*(uint32_t*)((char*)&(MStack_14)+4)) & 0xffffff00;
    pMVar10 = &MStack_14;
    iVar9 = 3;
    pSVar2 = (Str_L_char_G_ *)
             util__Str_char___Str_char((Str_L_char_G_ *)(auStack_24 + 4),"GetAstrophysicalFactor_eV_b")
    ;
    util__Str_char___SubStr(pSVar2,pSVar7,iVar9,pMVar10);
    FUN_0067b510();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
    pSVar7 = (Str_L_char_G_ *)&stack0xffffffc0;
    MStack_14.Data = 0;
    (*(uint32_t*)((char*)&(MStack_14)+4)) = (*(uint32_t*)((char*)&(MStack_14)+4)) & 0xffffff00;
    pMVar10 = &MStack_14;
    iVar9 = 3;
    pSVar2 = (Str_L_char_G_ *)
             util__Str_char___Str_char((Str_L_char_G_ *)(auStack_24 + 4),"GetReducedMass_eV");
    util__Str_char___SubStr(pSVar2,pSVar7,iVar9,pMVar10);
    FUN_0067b510();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
    pSVar7 = (Str_L_char_G_ *)&stack0xffffffc0;
    MStack_14.Data = 0;
    (*(uint32_t*)((char*)&(MStack_14)+4)) = (*(uint32_t*)((char*)&(MStack_14)+4)) & 0xffffff00;
    pMVar10 = &MStack_14;
    iVar9 = 3;
    pSVar2 = (Str_L_char_G_ *)util__Str_char___Str_char((Str_L_char_G_ *)(auStack_24 + 4),"GetEffectiveZ");
    util__Str_char___SubStr(pSVar2,pSVar7,iVar9,pMVar10);
    FUN_0067b510();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
  }
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = (undefined **)(&PTR_vftable_0095f3d8);
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(int *)(in_stack_00000004 + 0xc) = DAT_0095f3e4;
  (*(uint32_t*)((char*)&(MStack_14)+4)) = (**(code **)(uintptr_t)(PTR__vftable__0095f3d8 + 0xc))();
  util__Darray_struct_util__tuple2_class_util__Str_char__void____cdecl___void______SetSize
            (in_stack_00000004,(int *)&MStack_14.IsValidData);
  uVar6 = *(uint *)(in_stack_00000004 + 0xc);
  uVar5 = -(uint)((int)((ulonglong)uVar6 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 0x10);
  puVar3 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar5) | uVar5 + 4);
  if (puVar3 == (uint *)0x0) {
    pSVar2 = (Str_L_char_G_ *)0x0;
  }
  else {
    *puVar3 = uVar6;
    pSVar2 = (Str_L_char_G_ *)(puVar3 + 1);
    pSVar7 = pSVar2;
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      pSVar7->Data = (char *)0x0;
      pSVar7->Capacity = 0;
      pSVar7->Length = 0;
      pSVar7[1].Data = (char *)0x0;
      pSVar7 = (Str_L_char_G_ *)&pSVar7[1].Capacity;
    }
  }
  *(Str_L_char_G_ **)(in_stack_00000004 + 4) = pSVar2;
  pSVar7 = (Str_L_char_G_ *)(uintptr_t)(DAT_0095f3dc);
  if (DAT_0095f3dc != (Str_L_char_G_ *)(DAT_0095f3e0 * 0x10 + (int)DAT_0095f3dc)) {
    do {
      util__Str_char___operator__o8(pSVar2,pSVar7);
      pSVar1 = pSVar7 + 1;
      pSVar7 = (Str_L_char_G_ *)&pSVar7[1].Capacity;
      pSVar2[1].Data = pSVar1->Data;
      pSVar2 = (Str_L_char_G_ *)&pSVar2[1].Capacity;
    } while (pSVar7 != (Str_L_char_G_ *)(DAT_0095f3e0 * 0x10 + (int)DAT_0095f3dc));
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0067b1f0 GetReflectionInfo_0067b1f0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   FusionReaction__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall FusionReaction__GetReflectionInfo(FusionReaction *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_70e28cd1__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_70e28cd1__thread_safe_static_guard_0__);
    if ( cde_l2_70e28cd1__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_c5baacf2_ReflectionInfo) = &vftable_332;
      _Init_thread_footer(& cde_l2_70e28cd1__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_c5baacf2_ReflectionInfo;
}





//==== 0067b200 GetTypeName_0067b200 ====


/* public: virtual class util__Str_L_char_G_  FusionReaction__ReflectionInfoStruct_class_FusionReaction___GetTypeName(void)const  */

Str_L_char_G_ * 
FusionReaction__ReflectionInfoStruct_class_FusionReaction___GetTypeName
          (ReflectionInfoStruct_L_class_FusionReaction_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"FusionReaction");
  return __return_storage_ptr__;
}





//==== 0067b220 GetMembers_0067b220 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   FusionReaction__ReflectionInfoStruct_class_FusionReaction___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
FusionReaction__ReflectionInfoStruct_class_FusionReaction___GetMembers__o2
          (ReflectionInfoStruct_L_class_FusionReaction_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_35aa28e7__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_35aa28e7__thread_safe_static_guard_0__),
      cde_l2_35aa28e7__thread_safe_static_guard_0__ == -1)) {
     cde_l2_804e13d1_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_35aa28e7__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_804e13d1_Count);
  iVar3 = 0;
  if (0 <  cde_l2_804e13d1_Count) {
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
    } while (iVar3 <  cde_l2_804e13d1_Count);
  }
  return in_stack_00000004;
}





//==== 0067b360 GetMember_0067b360 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   FusionReaction__ReflectionInfoStruct_class_FusionReaction___GetMember(class util__Str_L_char_G_ const
   &)const  */

Str_L_char_G_ * 
FusionReaction__ReflectionInfoStruct_class_FusionReaction___GetMember__o2
          (ReflectionInfoStruct_L_class_FusionReaction_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_a8785518__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_a8785518__thread_safe_static_guard_0__),
      cde_l2_a8785518__thread_safe_static_guard_0__ == -1)) {
     cde_l2_a7617992_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_a8785518__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_a7617992_Count) {
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
LAB_0067b3ed:
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
          if (cVar3 == '\0') goto LAB_0067b3ed;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_a7617992_Count);
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





//==== 0067b500 GetFactory_0067b500 ====


/* public: virtual class util__Reflectable * (__cdecl*
   FusionReaction__ReflectionInfoStruct_class_FusionReaction___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall FusionReaction__ReflectionInfoStruct_class_FusionReaction___GetFactory__o2
          (ReflectionInfoStruct_L_class_FusionReaction_G_ *this)

{
  return StaticFactory;
}





//==== 0067b5e0 DoesSatisfyLawsonCriterion ====


/* public: bool  FusionReaction__DoesSatisfyLawsonCriterion(double,double,double)const  */

bool 
FusionReaction__DoesSatisfyLawsonCriterion
          (FusionReaction *this,double param_1,double param_2,double param_3)

{
  Maybe_L_double_G_ *pMVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_14 [16];
  
  (*(uint64_t*)((char*)&(auStack_14)+8)) = this->AverageChargedEnergy_MeV * 1000000.0 * 1.602176565e-19;
  dVar2 = param_2 / param_1;
  dVar3 = GetReactivity_m3__s(this,param_3);
  dVar3 = dVar3 * dVar2 * dVar2 * (double)(*(uint64_t*)((char*)&(auStack_14)+8));
  dVar4 = Physics__GetTemperature_eV(param_3);
  param_3 = dVar4 / 1000.0;
  pMVar1 = util__Sqrt((Maybe_L_double_G_ *)auStack_14,&param_3);
  if (pMVar1->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar4 = GetEffectiveZ(this);
  return dVar4 * 5e-37 * (dVar2 + dVar2) * (dVar2 + dVar2) * pMVar1->Data <= dVar3;
}





//==== 0067b6e0 GetAstrophysicalFactor_eV_b ====


/* public: double __thiscall FusionReaction__GetAstrophysicalFactor_eV_b(void)const  */

double __thiscall FusionReaction__GetAstrophysicalFactor_eV_b(FusionReaction *this)

{
  return this->AstrophysicalFactor_keV_b * 1000.0;
}





//==== 0067b6f0 GetAverageTotalEnergy_eV ====


/* public: double __thiscall FusionReaction__GetAverageTotalEnergy_eV(void)const  */

double __thiscall FusionReaction__GetAverageTotalEnergy_eV(FusionReaction *this)

{
  return (this->AverageChargedEnergy_MeV + this->AverageNeutronEnergy_MeV) * 1000000.0;
}





//==== 0067b700 GetConfinementTime_s ====


/* public: double  FusionReaction__GetConfinementTime_s(double,double,double)const  */

double 
FusionReaction__GetConfinementTime_s
          (FusionReaction *this,double param_1,double param_2,double param_3)

{
  Maybe_L_double_G_ *pMVar1;
  double dVar2;
  double dVar3;
  Maybe_L_double_G_ MStack_14;
  
  dVar3 = param_3;
  dVar2 = param_2 / param_1;
  param_2 = dVar2 + dVar2;
  param_3 = dVar2 * 3.0 * Physics__BoltzmannConstant_J__K * param_3;
  dVar3 = Physics__GetTemperature_eV(dVar3);
  param_1 = dVar3 / 1000.0;
  param_2 = param_2 * param_2;
  pMVar1 = util__Sqrt(&MStack_14,&param_1);
  if (pMVar1->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar3 = GetEffectiveZ(this);
  return param_3 / (dVar3 * 5e-37 * param_2 * pMVar1->Data);
}





//==== 0067b7c0 GetEffectiveZ ====

/* public: double __thiscall FusionReaction__GetEffectiveZ(void)const  */

double __thiscall FusionReaction__GetEffectiveZ(FusionReaction *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = (**(code **)((this->Fusor1->Elements)._pad_0x0_0 + 0xc))();
  if (iVar1 != 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\fusionreactions.cpp"
                    ,0x17,"Fusor1->Elements.Num() == 1",(char *)0x0);
    DebugBreak();
  }
  local_8 = 0;
  piVar2 = (int *)(**(code **)(this->Fusor1->Elements)._pad_0x0_0)(&local_8);
  iVar1 = *(int *)(*piVar2 + 0x20);
  iVar3 = (**(code **)((this->Fusor2->Elements)._pad_0x0_0 + 0xc))();
  if (iVar3 != 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\fusionreactions.cpp"
                    ,0x1d,"Fusor2->Elements.Num() == 1",(char *)0x0);
    DebugBreak();
  }
  local_c = 0;
  piVar2 = (int *)(**(code **)(this->Fusor2->Elements)._pad_0x0_0)(&local_c);
  return (double)((*(int *)(*piVar2 + 0x20) * *(int *)(*piVar2 + 0x20) + iVar1 * iVar1) / 2);
}

//==== 0067b880 GetFusionRate__s ====


/* public: double  FusionReaction__GetFusionRate__s(double,double,double,double)const  */

double 
FusionReaction__GetFusionRate__s
          (FusionReaction *this,double param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  
  dVar1 = GetReactivity_m3__s(this,param_4);
  return (param_2 / param_1) * (param_2 / param_1) * dVar1 * param_3;
}





//==== 0067b8c0 GetMaterialCompositions ====

/* public: class util__Darray_L_structMaterialComposition_G_ __thiscall
   FusionReaction__GetMaterialCompositions(double)const  */

Darray_L_MaterialComposition_G_ * __thiscall
FusionReaction__GetMaterialCompositions
          (FusionReaction *this,Darray_L_MaterialComposition_G_ *__return_storage_ptr__,double param_1)

{
  Material *pMVar1;
  Element *this_00;
  double dVar2;
  Darray_L_MaterialComposition_G_ *this_01;
  undefined4 uVar3;
  bool bVar4;
  MaterialComposition *pMVar5;
  MaterialComposition *pMVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  undefined4 in_stack_00000008;
  undefined4 uStack_1c;
  undefined4 local_8;
  
  this_01 = __return_storage_ptr__;
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (MaterialComposition *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_75;
  __return_storage_ptr__->Data = (MaterialComposition *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 2;
  pMVar5 = (MaterialComposition *)(uintptr_t)(port_op_new(0x20));
  uVar3 = (*(uint32_t*)&(param_1));
  if (pMVar5 == (MaterialComposition *)0x0) {
    pMVar5 = (MaterialComposition *)0x0;
  }
  else {
    iVar8 = 2;
    pMVar6 = pMVar5;
    do {
      pMVar6->Type = (Material *)0x0;
      pMVar6->Mass_kg = 0.0;
      iVar8 = iVar8 + -1;
      pMVar6 = pMVar6 + 1;
    } while (iVar8 != 0);
  }
  this_01->Data = pMVar5;
  iVar8 = 0;
  if (0 < this_01->Capacity) {
    iVar9 = 0;
    do {
      iVar8 = iVar8 + 1;
      puVar7 = (undefined4 *)((int)&this_01->Data->Type + iVar9);
      *puVar7 = 0;
      puVar7[1] = uStack_1c;
      puVar7[2] = 0;
      puVar7[3] = 0;
      iVar9 = iVar9 + 0x10;
    } while (iVar8 < this_01->Capacity);
  }
  pMVar1 = this->Fusor1;
  if (pMVar1 == this->Fusor2) {
    iVar8 = this_01->Size;
    __return_storage_ptr__ = (Darray_L_MaterialComposition_G_ *)(iVar8 + 1);
    util__Darray_L_MaterialConstituent_G___SetSize
              ((Darray_L_MaterialConstituent_G_ *)this_01,(int *)&__return_storage_ptr__);
    bVar4 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                      ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)this_01,iVar8);
    if (bVar4) {
      pMVar5 = this_01->Data + this_01->Size + -1;
      pMVar5->Type = pMVar1;
      *(undefined4 *)&(*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar5) + 0x4)) = uStack_1c;
      *(undefined4 *)&pMVar5->Mass_kg = in_stack_00000008;
      *(undefined4 *)((int)&pMVar5->Mass_kg + 4) = uVar3;
      return this_01;
    }
  }
  else {
    iVar8 = (**(code **)((pMVar1->Elements)._pad_0x0_0 + 0xc))();
    if (iVar8 != 1) {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\fusionreactions.cpp"
                      ,0x17,"Fusor1->Elements.Num() == 1",(char *)0x0);
      DebugBreak();
    }
    __return_storage_ptr__ = (Darray_L_MaterialComposition_G_ *)0x0;
    puVar7 = (undefined4 *)(**(code **)(this->Fusor1->Elements)._pad_0x0_0)(&__return_storage_ptr__)
    ;
    this_00 = (Element *)*puVar7;
    iVar8 = (**(code **)((this->Fusor2->Elements)._pad_0x0_0 + 0xc))();
    if (iVar8 != 1) {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\fusionreactions.cpp"
                      ,0x1d,"Fusor2->Elements.Num() == 1",(char *)0x0);
      DebugBreak();
    }
    local_8 = 0;
    puVar7 = (undefined4 *)(**(code **)(this->Fusor2->Elements)._pad_0x0_0)(&local_8);
    dVar2 = (double)CONCAT44((*(uint32_t*)&(param_1)),in_stack_00000008);
    dVar10 = Element__GetMolarMass_kg__mol((Element *)*puVar7);
    in_stack_00000008 = SUB84(dVar10,0);
    (*(uint32_t*)&(param_1)) = (int)((ulonglong)dVar10 >> 0x20);
    dVar10 = Element__GetMolarMass_kg__mol(this_00);
    dVar2 = (dVar2 * 6.022e+23) / (dVar10 + (double)CONCAT44((*(uint32_t*)&(param_1)),in_stack_00000008));
    iVar8 = (**(code **)((this->Fusor1->Elements)._pad_0x0_0 + 0xc))();
    if (iVar8 != 1) {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\fusionreactions.cpp"
                      ,0x17,"Fusor1->Elements.Num() == 1",(char *)0x0);
      DebugBreak();
    }
    __return_storage_ptr__ = (Darray_L_MaterialComposition_G_ *)0x0;
    puVar7 = (undefined4 *)(**(code **)(this->Fusor1->Elements)._pad_0x0_0)(&__return_storage_ptr__)
    ;
    dVar10 = Element__GetMolarMass_kg__mol((Element *)*puVar7);
    iVar8 = this_01->Size;
    pMVar1 = this->Fusor1;
    (*(uint32_t*)&(param_1)) = iVar8 + 1;
    dVar10 = dVar10 * (dVar2 / 6.022e+23);
    in_stack_00000008 = SUB84(dVar10,0);
    util__Darray_L_MaterialConstituent_G___SetSize
              ((Darray_L_MaterialConstituent_G_ *)this_01,(int *)&param_1);
    bVar4 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                      ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)this_01,iVar8);
    if (bVar4) {
      pMVar5 = this_01->Data + this_01->Size + -1;
      pMVar5->Type = pMVar1;
      *(undefined4 *)&(*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar5) + 0x4)) = uStack_1c;
      pMVar5->Mass_kg = dVar10;
    }
    iVar8 = (**(code **)((this->Fusor2->Elements)._pad_0x0_0 + 0xc))();
    if (iVar8 != 1) {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\fusionreactions.cpp"
                      ,0x1d,"Fusor2->Elements.Num() == 1",(char *)0x0);
      DebugBreak();
    }
    __return_storage_ptr__ = (Darray_L_MaterialComposition_G_ *)0x0;
    puVar7 = (undefined4 *)(**(code **)(this->Fusor2->Elements)._pad_0x0_0)(&__return_storage_ptr__)
    ;
    dVar10 = Element__GetMolarMass_kg__mol((Element *)*puVar7);
    iVar8 = this_01->Size;
    pMVar1 = this->Fusor2;
    (*(uint32_t*)&(param_1)) = iVar8 + 1;
    dVar10 = dVar10 * (dVar2 / 6.022e+23);
    in_stack_00000008 = SUB84(dVar10,0);
    util__Darray_L_MaterialConstituent_G___SetSize
              ((Darray_L_MaterialConstituent_G_ *)this_01,(int *)&param_1);
    bVar4 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                      ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)this_01,iVar8);
    if (bVar4) {
      pMVar5 = this_01->Data + this_01->Size + -1;
      pMVar5->Type = pMVar1;
      *(undefined4 *)&(*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar5) + 0x4)) = uStack_1c;
      pMVar5->Mass_kg = dVar10;
    }
  }
  return this_01;
}

//==== 0067bbb0 GetReactionCount ====

/* public: double __thiscall FusionReaction__GetReactionCount(double)const  */

double __thiscall FusionReaction__GetReactionCount(FusionReaction *this,double param_1)

{
  Element *this_00;
  int iVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = (**(code **)((this->Fusor1->Elements)._pad_0x0_0 + 0xc))();
  if (iVar1 != 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\fusionreactions.cpp"
                    ,0x17,"Fusor1->Elements.Num() == 1",(char *)0x0);
    DebugBreak();
  }
  local_8 = 0;
  puVar2 = (undefined4 *)(**(code **)(this->Fusor1->Elements)._pad_0x0_0)(&local_8);
  this_00 = (Element *)*puVar2;
  iVar1 = (**(code **)((this->Fusor2->Elements)._pad_0x0_0 + 0xc))();
  if (iVar1 != 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\fusionreactions.cpp"
                    ,0x1d,"Fusor2->Elements.Num() == 1",(char *)0x0);
    DebugBreak();
  }
  local_c = 0;
  puVar2 = (undefined4 *)(**(code **)(this->Fusor2->Elements)._pad_0x0_0)(&local_c);
  dVar3 = Element__GetMolarMass_kg__mol((Element *)*puVar2);
  dVar4 = Element__GetMolarMass_kg__mol(this_00);
  return (param_1 * 6.022e+23) / (dVar4 + dVar3);
}

//==== 0067bc70 GetReactivity_m3__s ====

/* public: double __thiscall FusionReaction__GetReactivity_m3__s(double)const  */

double __thiscall FusionReaction__GetReactivity_m3__s(FusionReaction *this,double param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 local_8;
  
  dVar5 = Physics__GetTemperature_eV(param_1);
  dVar6 = GetReducedMass_MeV(this);
  iVar1 = (**(code **)((this->Fusor1->Elements)._pad_0x0_0 + 0xc))();
  if (iVar1 != 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\fusionreactions.cpp"
                    ,0x17,"Fusor1->Elements.Num() == 1",(char *)0x0);
    DebugBreak();
  }
  param_1 = (double)((ulonglong)param_1 & 0xffffffff);
  piVar2 = (int *)(**(code **)(this->Fusor1->Elements)._pad_0x0_0)();
  iVar1 = *piVar2;
  iVar3 = (**(code **)((this->Fusor2->Elements)._pad_0x0_0 + 0xc))();
  if (iVar3 != 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\fusionreactions.cpp"
                    ,0x1d,"Fusor2->Elements.Num() == 1",(char *)0x0);
    DebugBreak();
  }
  local_8 = 0;
  piVar2 = (int *)(**(code **)(this->Fusor2->Elements)._pad_0x0_0)(&local_8);
  iVar1 = *(int *)(*piVar2 + 0x20) * *(int *)(iVar1 + 0x20);
  dVar5 = ((double)(iVar1 * iVar1) * (dVar6 / 938.272046)) / (dVar5 / 1000.0);
  libm_sse2_pow_precise(0.0,0.0);
  dVar5 = dVar5 * 6.2696;
  iVar1 = (**(code **)((this->Fusor1->Elements)._pad_0x0_0 + 0xc))();
  if (iVar1 != 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\fusionreactions.cpp"
                    ,0x17,"Fusor1->Elements.Num() == 1",(char *)0x0);
    DebugBreak();
  }
  param_1 = (double)((ulonglong)param_1 & 0xffffffff);
  piVar2 = (int *)(**(code **)(this->Fusor1->Elements)._pad_0x0_0)((int)&param_1 + 4);
  iVar1 = *piVar2;
  iVar3 = (**(code **)((this->Fusor2->Elements)._pad_0x0_0 + 0xc))();
  if (iVar3 != 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\fusionreactions.cpp"
                    ,0x1d,"Fusor2->Elements.Num() == 1",(char *)0x0);
    DebugBreak();
  }
  local_8 = 0;
  piVar2 = (int *)(**(code **)(this->Fusor2->Elements)._pad_0x0_0)(&local_8);
  dVar4 = dVar5 * -3.0;
  iVar3 = *piVar2;
  libm_sse2_exp_precise(0.0);
  return (dVar4 * this->AstrophysicalFactor_keV_b * 6.4e-24 * dVar5 * dVar5) /
         ((double)*(int *)(iVar1 + 0x20) * (dVar6 / 938.272046) * (double)*(int *)(iVar3 + 0x20));
}

//==== 0067be50 GetReducedMass_MeV ====

/* public: double __thiscall FusionReaction__GetReducedMass_MeV(void)const  */

double __thiscall FusionReaction__GetReducedMass_MeV(FusionReaction *this)

{
  Element *this_00;
  Element *this_01;
  Element *this_02;
  Element *this_03;
  int iVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = (**(code **)((this->Fusor1->Elements)._pad_0x0_0 + 0xc))();
  if (iVar1 != 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\fusionreactions.cpp"
                    ,0x17,"Fusor1->Elements.Num() == 1",(char *)0x0);
    DebugBreak();
  }
  local_8 = 0;
  puVar2 = (undefined4 *)(**(code **)(this->Fusor1->Elements)._pad_0x0_0)(&local_8);
  this_00 = (Element *)*puVar2;
  iVar1 = (**(code **)((this->Fusor2->Elements)._pad_0x0_0 + 0xc))();
  if (iVar1 != 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\fusionreactions.cpp"
                    ,0x1d,"Fusor2->Elements.Num() == 1",(char *)0x0);
    DebugBreak();
  }
  local_c = 0;
  puVar2 = (undefined4 *)(**(code **)(this->Fusor2->Elements)._pad_0x0_0)(&local_c);
  this_01 = (Element *)*puVar2;
  iVar1 = (**(code **)((this->Fusor1->Elements)._pad_0x0_0 + 0xc))();
  if (iVar1 != 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\fusionreactions.cpp"
                    ,0x17,"Fusor1->Elements.Num() == 1",(char *)0x0);
    DebugBreak();
  }
  local_10 = 0;
  puVar2 = (undefined4 *)(**(code **)(this->Fusor1->Elements)._pad_0x0_0)(&local_10);
  this_02 = (Element *)*puVar2;
  iVar1 = (**(code **)((this->Fusor2->Elements)._pad_0x0_0 + 0xc))();
  if (iVar1 != 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\fusionreactions.cpp"
                    ,0x1d,"Fusor2->Elements.Num() == 1",(char *)0x0);
    DebugBreak();
  }
  local_14 = 0;
  puVar2 = (undefined4 *)(**(code **)(this->Fusor2->Elements)._pad_0x0_0)(&local_14);
  this_03 = (Element *)*puVar2;
  dVar3 = Element__GetNucleusAtomicMass_MeV(this_01);
  dVar4 = Element__GetNucleusAtomicMass_MeV(this_00);
  dVar5 = Element__GetNucleusAtomicMass_MeV(this_03);
  dVar6 = Element__GetNucleusAtomicMass_MeV(this_02);
  return (dVar4 * dVar3) / (dVar6 + dVar5);
}

//==== 0067bfa0 GetReducedMass_eV ====


/* public: double __thiscall FusionReaction__GetReducedMass_eV(void)const  */

double __thiscall FusionReaction__GetReducedMass_eV(FusionReaction *this)

{
  double dVar1;
  
  dVar1 = GetReducedMass_MeV(this);
  return dVar1 * 1000000.0;
}





//==== 0067bfb0 GetTotalPossibleEnergy_J ====


/* public: double __thiscall FusionReaction__GetTotalPossibleEnergy_J(double)const  */

double __thiscall FusionReaction__GetTotalPossibleEnergy_J(FusionReaction *this,double param_1)

{
  return (this->AverageChargedEnergy_MeV + this->AverageNeutronEnergy_MeV) * param_1 * 1000000.0 *
         1.602176565e-19;
}





//==== 0067bfe0 GetVolumetricHeatingRate_W__m3 ====


/* public: double 
   FusionReaction__GetVolumetricHeatingRate_W__m3(double,double,double)const  */

double 
FusionReaction__GetVolumetricHeatingRate_W__m3
          (FusionReaction *this,double param_1,double param_2,double param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = this->AverageChargedEnergy_MeV;
  dVar2 = GetReactivity_m3__s(this,param_3);
  return (param_2 / param_1) * (param_2 / param_1) * dVar2 * dVar1 * 1000000.0 * 1.602176565e-19;
}





//==== 0067c040 HasValidElements ====

/* public: bool __thiscall FusionReaction__HasValidElements(void)const  */

bool __thiscall FusionReaction__HasValidElements(FusionReaction *this)

{
  int iVar1;
  
  iVar1 = (**(code **)((this->Fusor1->Elements)._pad_0x0_0 + 0xc))();
  if (0 < iVar1) {
    iVar1 = (**(code **)((this->Fusor2->Elements)._pad_0x0_0 + 0xc))();
    if (0 < iVar1) {
      return true;
    }
  }
  return false;
}

//==== 0067c070 StaticFactory_0067c070 ====

/* public: static class util__Reflectable * __cdecl FusionReaction__ReflectionInfoStruct_L_class_FusionReaction_G___StaticFactory(void) */

Reflectable * __cdecl FusionReaction__ReflectionInfoStruct_class_FusionReaction___StaticFactory(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x30));
  if (pRVar1 != (Reflectable *)0x0) {
    memset(pRVar1,0,0x30);
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_331;
  }
  return (Reflectable *)0x0;
}

//==== 0067c0c0 StaticGetMemberByIndex_0067c0c0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl FusionReaction__ReflectionInfoStruct_class_FusionReaction___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
FusionReaction__ReflectionInfoStruct_class_FusionReaction___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_f8ca5b2c__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_f8ca5b2c__thread_safe_static_guard_0__);
    if ( cde_l2_f8ca5b2c__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_ae15fe01_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0097a184 = 0;
      _DAT_0097a188 = 0;
      _DAT_0097a18c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097a190,"Unused");
      _DAT_0097a19c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097a1a0,"Fusor1");
      _DAT_0097a1ac = 8;
      _DAT_0097a1b0 = 0x10;
      _DAT_0097a1b4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097a1b8,"Material");
      _DAT_0097a1c4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097a1c8,"Fusor2");
      _DAT_0097a1d4 = 8;
      _DAT_0097a1d8 = 0x14;
      _DAT_0097a1dc = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097a1e0,"Material");
      _DAT_0097a1ec = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097a1f0,"AverageNeutronEnergy_MeV");
      _DAT_0097a1fc = 4;
      _DAT_0097a200 = 0x18;
      _DAT_0097a204 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097a208,"double");
      _DAT_0097a214 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097a218,"AverageChargedEnergy_MeV");
      _DAT_0097a224 = 4;
      _DAT_0097a228 = 0x20;
      _DAT_0097a22c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097a230,"double");
      _DAT_0097a23c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097a240,"AstrophysicalFactor_keV_b");
      _DAT_0097a24c = 4;
      _DAT_0097a250 = 0x28;
      _DAT_0097a254 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097a258,"double");
      _DAT_0097a264 = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_FusionReaction__ReflectionInfoStruct_class_FusionReaction___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_f8ca5b2c__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_ae15fe01_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_0097a184 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_0097a188 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_0097a18c + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_0097a190 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0097a19c)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0097a19d)[iVar1];
  return __return_storage_ptr__;
}





//==== 0067c300 StaticGetMemberCount_0067c300 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl FusionReaction__ReflectionInfoStruct_class_FusionReaction___StaticGetMemberCount(void) */

int __cdecl FusionReaction__ReflectionInfoStruct_class_FusionReaction___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_2644daef__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_2644daef__thread_safe_static_guard_0__);
    if ( cde_l2_2644daef__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_7ec9d22d_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0097a08c = 0;
      _DAT_0097a090 = 0;
      _DAT_0097a094 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097a098,"Unused");
      _DAT_0097a0a4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097a0a8,"Fusor1");
      _DAT_0097a0b4 = 8;
      _DAT_0097a0b8 = 0x10;
      _DAT_0097a0bc = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097a0c0,"Material");
      _DAT_0097a0cc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097a0d0,"Fusor2");
      _DAT_0097a0dc = 8;
      _DAT_0097a0e0 = 0x14;
      _DAT_0097a0e4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097a0e8,"Material");
      _DAT_0097a0f4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097a0f8,"AverageNeutronEnergy_MeV");
      _DAT_0097a104 = 4;
      _DAT_0097a108 = 0x18;
      _DAT_0097a10c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097a110,"double");
      _DAT_0097a11c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097a120,"AverageChargedEnergy_MeV");
      _DAT_0097a12c = 4;
      _DAT_0097a130 = 0x20;
      _DAT_0097a134 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097a138,"double");
      _DAT_0097a144 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097a148,"AstrophysicalFactor_keV_b");
      _DAT_0097a154 = 4;
      _DAT_0097a158 = 0x28;
      _DAT_0097a15c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097a160,"double");
      _DAT_0097a16c = 0;
      atexit( private__static_int_const___cdecl_FusionReaction__ReflectionInfoStruct_class_FusionReaction___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_2644daef__thread_safe_static_guard_0__);
    }
  }
  return 6;
}





//==== 0067c500 StaticGetReflectionInfo_0067c500 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct FusionReaction__ReflectionInfoStruct_L_classFusionReaction_G_ * __cdecl
   FusionReaction__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_FusionReaction_G_ * __cdecl FusionReaction__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_70e28cd1__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_70e28cd1__thread_safe_static_guard_0__);
    if ( cde_l2_70e28cd1__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_c5baacf2_ReflectionInfo) = &vftable_332;
      _Init_thread_footer(& cde_l2_70e28cd1__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_c5baacf2_ReflectionInfo;
}





//==== 0067c560 GetTypeName_0067c560 ====


/* public: virtual class util__Str_L_char_G_  LasingMedium__ReflectionInfoStruct_struct_LasingMedium___GetTypeName(void)const  */

Str_L_char_G_ * 
LasingMedium__ReflectionInfoStruct_struct_LasingMedium___GetTypeName
          (ReflectionInfoStruct_L_struct_LasingMedium_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"LasingMedium");
  return __return_storage_ptr__;
}





//==== 0067c580 GetMembers_0067c580 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   LasingMedium__ReflectionInfoStruct_struct_LasingMedium___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
LasingMedium__ReflectionInfoStruct_struct_LasingMedium___GetMembers__o2
          (ReflectionInfoStruct_L_struct_LasingMedium_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_61c695e7__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_61c695e7__thread_safe_static_guard_0__),
      cde_l2_61c695e7__thread_safe_static_guard_0__ == -1)) {
     cde_l2_9f435856_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_61c695e7__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_9f435856_Count);
  iVar3 = 0;
  if (0 <  cde_l2_9f435856_Count) {
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
    } while (iVar3 <  cde_l2_9f435856_Count);
  }
  return in_stack_00000004;
}





//==== 0067c6c0 GetMember_0067c6c0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   LasingMedium__ReflectionInfoStruct_struct_LasingMedium___GetMember(class util__Str_L_char_G_ const
   &)const  */

Str_L_char_G_ * 
LasingMedium__ReflectionInfoStruct_struct_LasingMedium___GetMember__o2
          (ReflectionInfoStruct_L_struct_LasingMedium_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_94e3b9ad__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_94e3b9ad__thread_safe_static_guard_0__),
      cde_l2_94e3b9ad__thread_safe_static_guard_0__ == -1)) {
     cde_l2_6ed53d50_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_94e3b9ad__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_6ed53d50_Count) {
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
LAB_0067c74d:
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
          if (cVar3 == '\0') goto LAB_0067c74d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_6ed53d50_Count);
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





//==== 0067c860 GetFactory_0067c860 ====


/* public: virtual class util__Reflectable * (__cdecl*
   LasingMedium__ReflectionInfoStruct_struct_LasingMedium___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall LasingMedium__ReflectionInfoStruct_struct_LasingMedium___GetFactory__o2
          (ReflectionInfoStruct_L_struct_LasingMedium_G_ *this)

{
  return StaticFactory;
}





//==== 0067d000 GetTypedDataOfType_FusionReaction_ ====


/* public: class util__Darray_L_classFusionReaction_P_G_ 
   util__SerializationManagerInterface__GetTypedDataOfType_class_FusionReaction(bool)const  */

void 
util__SerializationManagerInterface__GetTypedDataOfType_class_FusionReaction__o2
          (SerializationManagerInterface *this,bool param_1)

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
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_2c,"FusionReaction");
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
  *(undefined4 *)(_param_1 + 8) = (undefined4)(uintptr_t) (undefined **)(0);
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
  return;
}





//==== 0067d170 Darray_util__Vec3_float___ ====


/* public:  util__Darray_L_structutil__Vec3_L_float_G__G___Darray_L_structutil__Vec3_L_float_G___G_(class util__Darray_L_structutil__Vec3_L_float_G__G_ const &) */

Darray_L_struct_util__Vec3_L_float_G___G_ * 
util__Darray_struct_util__Vec3_float_____Darray_struct_util__Vec3_float
          (Darray_L_struct_util__Vec3_L_float_G___G_ *this,Darray_L_struct_util__Vec3_L_float_G___G_ *param_1)

{
  undefined8 *puVar1;
  Darray_L_struct_util__Vec3_L_float_G___G_ *pDVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  pDVar2 = param_1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = &vftable_335;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  param_1 = (Darray_L_struct_util__Vec3_L_float_G___G_ *)(**(code **)(*(int *)param_1 + 0xc))();
  SetSize(this,(int *)&param_1);
  uVar5 = *(uint *)(this + 0xc);
  puVar3 = (undefined8 *)
           port_op_new(-(uint)((int)((ulonglong)uVar5 * 0xc >> 0x20) != 0) |
                          (uint)((ulonglong)uVar5 * 0xc));
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else if (uVar5 != 0) {
    puVar4 = puVar3 + 1;
    do {
      *(undefined4 *)(puVar4 + -1) = 0;
      *(undefined4 *)((int)puVar4 + -4) = 0;
      *(undefined4 *)puVar4 = 0;
      uVar5 = uVar5 - 1;
      puVar4 = (undefined8 *)((int)puVar4 + 0xc);
    } while (uVar5 != 0);
  }
  *(undefined8 **)(this + 4) = puVar3;
  puVar4 = *(undefined8 **)(pDVar2 + 4);
  if (puVar4 != (undefined8 *)((int)puVar4 + *(int *)(pDVar2 + 8) * 0xc)) {
    do {
      *puVar3 = *puVar4;
      puVar1 = puVar4 + 1;
      puVar4 = (undefined8 *)((int)puVar4 + 0xc);
      *(undefined4 *)(puVar3 + 1) = *(undefined4 *)puVar1;
      puVar3 = (undefined8 *)((int)puVar3 + 0xc);
    } while (puVar4 != (undefined8 *)(*(int *)(pDVar2 + 4) + *(int *)(pDVar2 + 8) * 0xc));
  }
  return this;
}





//==== 0067d250 Darray_util__tuple2_Element__double___ ====


/* public:  util__Darray_L_structutil__tuple2_L_classElement_P_Cdouble_G__G___Darray_L_struct_util__tuple2_L_classElement_P_Cdouble_G__G_(int) */

Darray_L_struct_util__tuple2_L_class_Element_P_Cdouble_G___G_ * 
util__Darray_struct_util__tuple2_class_Element__double_____Darray_struct_util__tuple2_class_Element__double
          (Darray_L_struct_util__tuple2_L_class_Element_P_Cdouble_G___G_ *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_10;
  
  *(undefined ***)this = (undefined **)(&vftable_75);
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





//==== 0067d320 ElementalMakeupReflectionConstructor ====

/* public: 
   ElementalMakeupReflectionConstructor__ElementalMakeupReflectionConstructor(void) */

ElementalMakeupReflectionConstructor * 
ElementalMakeupReflectionConstructor__ElementalMakeupReflectionConstructor
          (ElementalMakeupReflectionConstructor *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  ReflectionRegistry *this_00;
  Str_L_char_G_ *pSVar4;
  Darray_L_util__Str_L_char_G___G_ *pDVar5;
  Darray_L_util__Str_L_char_G___G_ *pDVar6;
  Darray_L_unsigned_int_G_ *pDVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  code *pcVar11;
  Darray_L_util__Str_L_char_G___G_ local_50;
  Darray_L_util__Str_L_char_G___G_ local_40;
  Darray_L_unsigned_int_G_ local_30;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  int local_8;
  
  util__Str_char___Str_char(&local_20,"ElementalMakeup");
  local_30._pad_0x0_0 = (int)&vftable_6;
  local_30.Data = (uint *)0x0;
  local_30.Size = 0;
  local_30.Capacity = 2;
  local_30.Data = (uint *)(uintptr_t)(port_op_new(8));
  iVar1 = local_30.Size;
  if (local_30.Data == (uint *)0x0) {
    local_30.Data = (uint *)0x0;
  }
  else {
    local_30.Data[0] = 0;
    local_30.Data[1] = 0;
  }
  iVar3 = 0;
  if (0 < local_30.Capacity) {
    do {
      local_30.Data[iVar3] = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_30.Capacity);
  }
  local_8 = local_30.Size + 1;
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)&local_30,&local_8);
  bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)&local_30,iVar1);
  iVar1 = local_30.Size;
  if (bVar2) {
    local_30.Data[local_30.Size + -1] = 0;
  }
  local_8 = local_30.Size + 1;
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)&local_30,&local_8);
  bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)&local_30,iVar1);
  if (bVar2) {
    local_30.Data[local_30.Size + -1] = 8;
  }
  local_50._pad_0x0_0 = 0;
  local_50.Data = (Str_L_char_G_ *)0x0;
  local_50.Size = 0;
  local_50.Capacity = 0;
  util__Darray_L_util__Str_L_char_G___G___Darray_L_util__Str_L_char_G___G_(&local_50,2);
  util__Str_char___Str_char(&local_14,"Symbol");
  iVar1 = local_50.Size;
  local_8 = local_50.Size + 1;
  util__Darray_L_util__Str_L_char_G___G___SetSize(&local_50,&local_8);
  bVar2 = util__Darray_L_util__Str_L_char_G___G___CheckSize(&local_50,iVar1);
  if (bVar2) {
    util__Str_char___operator__o8(local_50.Data + local_50.Size + -1,&local_14);
  }
  if (local_14.Data != (char *)0x0) {
    port_op_delete(local_14.Data);
  }
  util__Str_char___Str_char(&local_14,"Amount");
  iVar1 = local_50.Size;
  local_8 = local_50.Size + 1;
  util__Darray_L_util__Str_L_char_G___G___SetSize(&local_50,&local_8);
  bVar2 = util__Darray_L_util__Str_L_char_G___G___CheckSize(&local_50,iVar1);
  if (bVar2) {
    util__Str_char___operator__o8(local_50.Data + local_50.Size + -1,&local_14);
  }
  if (local_14.Data != (char *)0x0) {
    port_op_delete(local_14.Data);
  }
  local_40._pad_0x0_0 = 0;
  local_40.Data = (Str_L_char_G_ *)0x0;
  local_40.Size = 0;
  local_40.Capacity = 0;
  util__Darray_L_util__Str_L_char_G___G___Darray_L_util__Str_L_char_G___G_(&local_40,2);
  util__Str_char___Str_char(&local_14,"Element*");
  iVar1 = local_40.Size;
  local_8 = local_40.Size + 1;
  util__Darray_L_util__Str_L_char_G___G___SetSize(&local_40,&local_8);
  bVar2 = util__Darray_L_util__Str_L_char_G___G___CheckSize(&local_40,iVar1);
  if (bVar2) {
    util__Str_char___operator__o8(local_40.Data + local_40.Size + -1,&local_14);
  }
  if (local_14.Data != (char *)0x0) {
    port_op_delete(local_14.Data);
  }
  util__Str_char___Str_char(&local_14,"double");
  iVar1 = local_40.Size;
  local_8 = local_40.Size + 1;
  util__Darray_L_util__Str_L_char_G___G___SetSize(&local_40,&local_8);
  bVar2 = util__Darray_L_util__Str_L_char_G___G___CheckSize(&local_40,iVar1);
  if (bVar2) {
    util__Str_char___operator__o8(local_40.Data + local_40.Size + -1,&local_14);
  }
  if (local_14.Data != (char *)0x0) {
    port_op_delete(local_14.Data);
  }
  pcVar11 = (long long int (*)())(ChemicalMakeup__CopyUntypedTuple);
  pcVar10 = (long long int (*)())(ChemicalMakeup__ClearUntypedTuple);
  pcVar9 = (long long int (*)())(ChemicalMakeup__DestroyArray);
  pcVar8 = (long long int (*)())(ChemicalMakeup__AllocateArray);
  pDVar7 = &local_30;
  pDVar6 = &local_50;
  pDVar5 = &local_40;
  pSVar4 = &local_20;
  this_00 = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterTuple
            (this_00,pSVar4,pDVar5,pDVar6,pDVar7, (_func_void_ptr_uint *)pcVar8,(_func_void_void_ptr *)pcVar9,(_func_void_void_ptr *)pcVar10,(_func_void_void_ptr_void_ptr *)pcVar11);
  Darray_L_util__Str_L_char_G___G___dtor(&local_40);
  Darray_L_util__Str_L_char_G___G___dtor(&local_50);
  local_30._pad_0x0_0 = (int)&vftable_6;
  if (local_30.Data != (uint *)0x0) {
    port_op_delete(local_30.Data);
  }
  local_30.Data = (uint *)0x0;
  local_30._pad_0x0_0 = (int)&vftable;
  if (local_20.Data != (char *)0x0) {
    port_op_delete(local_20.Data);
  }
  return this;
}

//==== 0067d5f0 Material ====

/* public: __thiscall Material__Material(void) */

Material * __thiscall Material__Material(Material *this)

{
  Darray_L_Material__P_G_ *pDVar1;
  Darray_L_double_G_ *pDVar2;
  
  this->_pad_0x4_1 = 0;
  pDVar1 = &(this->Dissociation).Data.Products;
  this->_pad_0x8_2 = 0;
  this->_pad_0xc_3 = 0;
  this->_pad_0x0_0 = (int)&vftable_336;
  (this->Elements)._pad_0x0_0 =
       (int)&vftable_142;
  (this->Elements).Data = (Element **)0x0;
  (this->Elements).Size = 0;
  (this->Elements).Capacity = 0;
  (this->ElementCount)._pad_0x0_0 = (int)&vftable_63;
  (this->ElementCount).Data = (double *)0x0;
  (this->ElementCount).Size = 0;
  (this->ElementCount).Capacity = 0;
  this->Density_kg__m3 = 0.0;
  this->IsPorous = false;
  this->IsFibrous = false;
  this->IsNanostructured = false;
  this->IsABiomaterial = false;
  *(undefined4 *)&this->YieldStrength_MPa = 0;
  *(undefined4 *)((int)&this->YieldStrength_MPa + 4) = 0;
  *(undefined4 *)&this->UltimateTensileStrength_MPa = 0;
  *(undefined4 *)((int)&this->UltimateTensileStrength_MPa + 4) = 0;
  *(undefined4 *)&this->YoungsModulus_GPa = 0;
  *(undefined4 *)((int)&this->YoungsModulus_GPa + 4) = 0;
  *(undefined4 *)&this->ShearModulus_GPa = 0;
  *(undefined4 *)((int)&this->ShearModulus_GPa + 4) = 0;
  *(undefined4 *)&this->BulkModulus_GPa = 0;
  *(undefined4 *)((int)&this->BulkModulus_GPa + 4) = 0;
  *(undefined4 *)&this->EnthalpyOfFormation_kJ__mol = 0;
  *(undefined4 *)((int)&this->EnthalpyOfFormation_kJ__mol + 4) = 0;
  *(undefined1 *)&this->BondDissociationEnergy_kJ__mol = 0;
  *(undefined4 *)&this->GibbsFreeEnergyOfFormation_kJ__mol = 0;
  *(undefined4 *)((int)&this->GibbsFreeEnergyOfFormation_kJ__mol + 4) = 0;
  *(undefined4 *)&this->SpecificHeat_J__kg_K = 0;
  *(undefined4 *)((int)&this->SpecificHeat_J__kg_K + 4) = 0;
  *(undefined4 *)&this->MeltingPoint_K = 0;
  *(undefined4 *)((int)&this->MeltingPoint_K + 4) = 0;
  *(undefined4 *)&this->BoilingPoint_K = 0;
  *(undefined4 *)((int)&this->BoilingPoint_K + 4) = 0;
  *(undefined4 *)&this->ThermalConductivity_W__m_K = 0;
  *(undefined4 *)((int)&this->ThermalConductivity_W__m_K + 4) = 0;
  *(undefined4 *)&this->ThermalExpansion__K = 0;
  *(undefined4 *)((int)&this->ThermalExpansion__K + 4) = 0;
  *(undefined4 *)&this->Resistivity_Ohm_m = 0;
  *(undefined4 *)((int)&this->Resistivity_Ohm_m + 4) = 0;
  *(undefined4 *)&this->DielectricStrength_MV__m = 0;
  *(undefined4 *)((int)&this->DielectricStrength_MV__m + 4) = 0;
  *(undefined4 *)&this->RelativePermittivity = 0;
  *(undefined4 *)((int)&this->RelativePermittivity + 4) = 0;
  *(undefined4 *)&this->RelativePermeability = 0;
  *(undefined4 *)((int)&this->RelativePermeability + 4) = 0;
  *(undefined4 *)&this->TotalMagneticMoment = 0;
  *(undefined4 *)((int)&this->TotalMagneticMoment + 4) = 0;
  *(undefined4 *)&this->Remanence_T = 0;
  *(undefined4 *)((int)&this->Remanence_T + 4) = 0;
  *(undefined4 *)&this->ThermoelectricSensitivity_V__K = 0;
  *(undefined4 *)((int)&this->ThermoelectricSensitivity_V__K + 4) = 0;
  *(undefined4 *)&this->BandGap_eV = 0;
  *(undefined4 *)((int)&this->BandGap_eV + 4) = 0;
  *(undefined4 *)&this->Viscosity_Pa_s = 0;
  *(undefined4 *)((int)&this->Viscosity_Pa_s + 4) = 0;
  (this->Dissociation).Data._pad_0x0_0 = 0;
  (this->Dissociation).Data._pad_0x4_1 = 0;
  (this->Dissociation).Data._pad_0x8_2 = 0;
  (this->Dissociation).Data._pad_0xc_3 = 0;
  memset(pDVar1,0,0x30);
  (this->Dissociation).Data.Products.Data = (Material **)0x0;
  (this->Dissociation).Data.Products.Size = 0;
  (this->Dissociation).Data.Products.Capacity = 0;
  pDVar1->_pad_0x0_0 = (int)&vftable_325;
  (this->Dissociation).Data.ProductCounts._pad_0x0_0 =
       (int)&vftable_2;
  (this->Dissociation).Data.ProductCounts.Data = (double *)0x0;
  (this->Dissociation).Data.ProductCounts.Size = 0;
  (this->Dissociation).Data.ProductCounts.Capacity = 0;
  (this->Dissociation).IsValidData = cde_ptr_as_double((void *)vftable_63);
  this->RefractiveIndex = (RefractiveIndexSpectrum *)0x0;
  *(undefined4 *)&this->OpticalNonlinearityCoefficient_pm__V = 0;
  *(undefined4 *)((int)&this->OpticalNonlinearityCoefficient_pm__V + 4) = 0;
  *(undefined1 *)&this->ExternalAngularSensitivity__m_radians = 0;
  pDVar2 = &(this->LasingMediumProperties).Data.PumpingBands_nm;
  *(undefined4 *)((int)&this->ExternalAngularSensitivity__m_radians + 4) = 0;
  *(undefined4 *)&this->LasingDamageThreshold_TW__m2 = 0;
  *(undefined4 *)((int)&this->LasingDamageThreshold_TW__m2 + 4) = 0;
  (this->LasingMediumProperties).Data._pad_0x0_0 = 0;
  (this->LasingMediumProperties).Data._pad_0x4_1 = 0;
  (this->LasingMediumProperties).Data._pad_0x8_2 = 0;
  (this->LasingMediumProperties).Data._pad_0xc_3 = 0;
  memset(pDVar2,0,0x50);
  (this->LasingMediumProperties).Data.PumpingBands_nm.Data = (double *)0x0;
  (this->LasingMediumProperties).Data.PumpingBands_nm.Size = 0;
  (this->LasingMediumProperties).Data.PumpingBands_nm.Capacity = 0;
  pDVar2->_pad_0x0_0 = (int)&vftable_334;
  *(undefined ** *)&(this->LasingMediumProperties).Data.IsThreeLevelPumpScheme = (undefined **)(&vftable_63);
  *(undefined4 *)&(*(undefined4 *)((char *)&((this->LasingMediumProperties).Data) + 0x24)) = 0;
  *(undefined4 *)&(this->LasingMediumProperties).Data.TransitionWavelength_nm = 0;
  *(undefined4 *)((int)&(this->LasingMediumProperties).Data.TransitionWavelength_nm + 4) = 0;
  *(undefined1 *)&(this->MaterialMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 = 0;
  (this->MaterialMemoizationHandlerInstance).ResetFunctions.Size = 0;
  (this->MaterialMemoizationHandlerInstance).ResetFunctions.Capacity = 0;
  this->Parent = (DataParser *)0x0;
  (this->GetClasses_MemoizedValue).Data._pad_0x0_0 = 0;
  *(undefined1 *)&(this->GetClasses_MemoizedValue).Data.Data = 0;
  (this->GetClasses_MemoizedValue).Data.Capacity = 0;
  *(undefined4 *)&(this->GetClasses_MemoizedValue).IsValidData = 0;
  (this->GetCategory_MemoizedValue).Data = Category__Metal;
  *(undefined4 *)&(this->GetCategory_MemoizedValue).IsValidData = 0;
  (this->GetClasses_MemoizedValue).Data.Capacity =
       (int)&vftable_2;
  *(undefined4 *)&(this->GetClasses_MemoizedValue).IsValidData = 0;
  (this->GetCategory_MemoizedValue).Data = Category__Metal;
  *(undefined4 *)&(this->GetCategory_MemoizedValue).IsValidData = 0;
  *(undefined4 *)&(this->GetSaturationMagnetization_A__m_MemoizedValue).Data = 0;
  *(undefined ***)((int)&(this->GetSaturationMagnetization_A__m_MemoizedValue).Data + 4) = (undefined **)(&vftable_2);
  *(undefined4 *)&(this->GetSaturationMagnetization_A__m_MemoizedValue).IsValidData = 0;
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetSaturationMagnetization_A__m_MemoizedValue)) + 0xc)) = 0;
  (this->GetReflectanceColor_MemoizedValue).Data.Value1.X = 0.0;
  *(undefined1 *)&(this->GetReflectanceColor_MemoizedValue).Data.Value1.Y = 0;
  (this->GetReflectanceColor_MemoizedValue).Data.Value1.Z = 0.0;
  *(undefined1 *)&(this->GetReflectanceColor_MemoizedValue).Data.Value2.X = 0;
  (this->GetReflectanceColor_MemoizedValue).Data.Value2.Y = 0.0;
  (this->GetReflectanceColor_MemoizedValue).Data.Value2.Z = 0.0;
  (this->GetReflectanceColor_MemoizedValue).IsValidData = false;
  (this->GetEmissivePowers_W_MemoizedValue).Data.Data = (double *)0x0;
  (this->GetEmissivePowers_W_MemoizedValue).Data.Size = 0;
  *(undefined1 *)&(this->GetEmissivePowers_W_MemoizedValue).Data.Capacity = 0;
  (this->GetEmissiveColors_MemoizedValue).Data._pad_0x0_0 = 0;
  (this->GetEmissiveColors_MemoizedValue).Data.Data = (Vec3_L_float_G_ *)0x0;
  (this->GetEmissiveColors_MemoizedValue).Data.Size = 0;
  (this->GetEmissiveColors_MemoizedValue).Data.Capacity = 0;
  *(undefined4 *)&(this->GetEmissiveColors_MemoizedValue).IsValidData = 0;
  *(undefined4 *)&this->GetEmissivePowers_W_MemoizedValue = 0;
  *(undefined1 *)&(this->GetCost_CU__kg_MemoizedValue).Data = 0;
  *(undefined ***)((int)&(this->GetCost_CU__kg_MemoizedValue).Data + 4) = (undefined **)(&vftable_63);
  *(undefined4 *)&(this->GetCost_CU__kg_MemoizedValue).IsValidData = 0;
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetCost_CU__kg_MemoizedValue)) + 0xc)) = 0;
  (this->GetDecompositionReaction_MemoizedValue).Data = (ChemicalReaction *)0x0;
  (this->GetDecompositionReaction_MemoizedValue).IsValidData = false;
  *(undefined ***)&this->IsFusile_MemoizedValue = &vftable_335;
  (this->GetUnenrichedMaterial_MemoizedValue).Data = (Material *)0x0;
  *(undefined4 *)&(this->GetUnenrichedMaterial_MemoizedValue).IsValidData = 0;
  *(undefined4 *)&this->GetCost_CU__kg_MemoizedValue = 0;
  *(undefined1 *)&this[1]._pad_0x0_0 = 0;
  this[1]._pad_0x8_2 = 0;
  this[1]._pad_0xc_3 = 0;
  *(undefined1 *)&this[1].Elements._pad_0x0_0 = 0;
  this[1].Elements.Size = 0;
  *(undefined1 *)&this[1].Elements.Capacity = 0;
  *(undefined2 *)&this[1].ElementCount._pad_0x0_0 = 0;
  this[1].ElementCount.Data = (double *)0x0;
  *(undefined1 *)&this[1].ElementCount.Size = 0;
  return this;
}

//==== 0067d900 DissociationReaction ====

/* public: virtual __thiscall DissociationReaction___DissociationReaction(void) */

void __thiscall DissociationReaction___DissociationReaction(DissociationReaction *this)

{
  double *pdVar1;
  Material **ppMVar2;
  
  pdVar1 = (this->ProductCounts).Data;
  (this->ProductCounts)._pad_0x0_0 = (int)&vftable_63;
  if (pdVar1 != (double *)0x0) {
    port_op_delete(pdVar1);
  }
  (this->ProductCounts).Data = (double *)0x0;
  (this->ProductCounts)._pad_0x0_0 = (int)&vftable;
  ppMVar2 = (this->Products).Data;
  (this->Products)._pad_0x0_0 = (int)&vftable_2;
  if (ppMVar2 != (Material **)0x0) {
    port_op_delete(ppMVar2);
  }
  (this->Products).Data = (Material **)0x0;
  (this->Products)._pad_0x0_0 = (int)&vftable;
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  return;
}

//==== 0067d970 operator__0067d970 ====


/* public: class util__Darray_L_structutil__Vec3_L_float_G__G_ &  util__Darray_L_struct_util__Vec3_L_float_G__G___op_assign(class util__Darray_L_structutil__Vec3_L_float_G__G_ const &) */

Darray_L_struct_util__Vec3_L_float_G___G_ * 
util__Darray_struct_util__Vec3_float_____operator
          (Darray_L_struct_util__Vec3_L_float_G___G_ *this,Darray_L_struct_util__Vec3_L_float_G___G_ *param_1)

{
  undefined8 *puVar1;
  Darray_L_struct_util__Vec3_L_float_G___G_ *pDVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  
  pDVar2 = param_1;
  param_1 = (Darray_L_struct_util__Vec3_L_float_G___G_ *)(**(code **)(*(int *)param_1 + 0xc))();
  SetSize(this,(int *)&param_1);
  iVar3 = (**(code **)(*(int *)pDVar2 + 0xc))();
  if (iVar3 == 0) {
    (**(code **)(*(int *)this + 0x10))();
    return this;
  }
  uVar5 = *(uint *)(this + 8);
  if ((int)uVar5 < 0) {
    param_1 = (Darray_L_struct_util__Vec3_L_float_G___G_ *)0x0;
    SetSize(this,(int *)&param_1);
    uVar5 = *(uint *)(this + 8);
  }
  if (0x3fffffff < (int)uVar5) {
    param_1 = (Darray_L_struct_util__Vec3_L_float_G___G_ *)0x3fffffff;
    SetSize(this,(int *)&param_1);
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
    if (*(void **)(this + 4) != (void *)0x0) {
      port_op_delete(*(void **)(this + 4));
      uVar6 = *(uint *)(this + 0xc);
    }
    *(undefined4 *)(this + 4) = 0;
    puVar4 = (undefined8 *)
             port_op_new(-(uint)((int)((ulonglong)uVar6 * 0xc >> 0x20) != 0) |
                            (uint)((ulonglong)uVar6 * 0xc));
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    else if (uVar6 != 0) {
      puVar7 = puVar4 + 1;
      do {
        *(undefined4 *)(puVar7 + -1) = 0;
        *(undefined4 *)((int)puVar7 + -4) = 0;
        *(undefined4 *)puVar7 = 0;
        uVar6 = uVar6 - 1;
        puVar7 = (undefined8 *)((int)puVar7 + 0xc);
      } while (uVar6 != 0);
      *(undefined8 **)(this + 4) = puVar4;
      goto LAB_0067da9c;
    }
    *(undefined8 **)(this + 4) = puVar4;
  }
  else {
    puVar4 = *(undefined8 **)(this + 4);
  }
LAB_0067da9c:
  puVar7 = *(undefined8 **)(pDVar2 + 4);
  if (puVar7 != (undefined8 *)((int)puVar7 + *(int *)(pDVar2 + 8) * 0xc)) {
    do {
      *puVar4 = *puVar7;
      puVar1 = puVar7 + 1;
      puVar7 = (undefined8 *)((int)puVar7 + 0xc);
      *(undefined4 *)(puVar4 + 1) = *(undefined4 *)puVar1;
      puVar4 = (undefined8 *)((int)puVar4 + 0xc);
    } while (puVar7 != (undefined8 *)(*(int *)(pDVar2 + 4) + *(int *)(pDVar2 + 8) * 0xc));
  }
  return this;
}





//==== 0067dae0 operator___0067dae0 ====


/* public: struct LasingMedium const * __thiscall util__Maybe_struct_LasingMedium___operator(void)const  */

LasingMedium * __thiscall
util__Maybe_struct_LasingMedium___operator(Maybe_L_struct_LasingMedium_G_ *this)

{
  if (*(char *)&(this[0x50]) == 0) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,"IsValid()",
              (char *)0x0);
    DebugBreak();
  }
  return (LasingMedium *)this;
}





//==== 0067e6a0 scalar_deleting_destructor_0067e6a0 ====


/* public: virtual void * __thiscall util__Darray_L_structutil__Vec3_L_float_G__G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_util__Vec3_float______scalar_deleting_destructor
          (Darray_L_struct_util__Vec3_L_float_G___G_ *this,uint param_1)

{
  *(undefined ***)this = &vftable_335;
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





//==== 0067e6f0 scalar_deleting_destructor_0067e6f0 ====

/* public: virtual void * __thiscall LasingMedium:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall LasingMedium___scalar_deleting_destructor(LasingMedium *this,uint param_1)

{
  double *pdVar1;
  
  pdVar1 = (this->PumpingBands_nm).Data;
  (this->PumpingBands_nm)._pad_0x0_0 = (int)&vftable_63;
  if (pdVar1 != (double *)0x0) {
    port_op_delete(pdVar1);
  }
  (this->PumpingBands_nm).Data = (double *)0x0;
  (this->PumpingBands_nm)._pad_0x0_0 = (int)&vftable;
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

//==== 0067e750 scalar_deleting_destructor_0067e750 ====

/* public: virtual void * __thiscall Material:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall Material___scalar_deleting_destructor(Material *this,uint param_1)

{
  Material *pMVar1;
  void *pvVar2;
  double *pdVar3;
  Element **ppEVar4;
  
  pMVar1 = (this->GetUnenrichedMaterial_MemoizedValue).Data;
  *(undefined ***)&this->IsFusile_MemoizedValue = &vftable_335;
  if (pMVar1 != (Material *)0x0) {
    port_op_delete(pMVar1);
  }
  (this->GetUnenrichedMaterial_MemoizedValue).Data = (Material *)0x0;
  *(undefined ***)&this->IsFusile_MemoizedValue = (undefined **)(&vftable);
  pvVar2 = *(void * *)&(this->GetCost_CU__kg_MemoizedValue).IsValidData;
  *(undefined ***)((int)&(this->GetCost_CU__kg_MemoizedValue).Data + 4) = (undefined **)(&vftable_63);
  if (pvVar2 != (void *)0x0) {
    port_op_delete(pvVar2);
  }
  *(undefined4 *)&(this->GetCost_CU__kg_MemoizedValue).IsValidData = 0;
  *(undefined ***)((int)&(this->GetCost_CU__kg_MemoizedValue).Data + 4) = (undefined **)(&vftable);
  pvVar2 = *(void * *)&(this->GetSaturationMagnetization_A__m_MemoizedValue).IsValidData;
  *(undefined ***)((int)&(this->GetSaturationMagnetization_A__m_MemoizedValue).Data + 4) = (undefined **)(&vftable_2);
  if (pvVar2 != (void *)0x0) {
    port_op_delete(pvVar2);
  }
  *(undefined4 *)&(this->GetSaturationMagnetization_A__m_MemoizedValue).IsValidData = 0;
  *(undefined ***)((int)&(this->GetSaturationMagnetization_A__m_MemoizedValue).Data + 4) = (undefined **)(&vftable);
  pvVar2 = *(void * *)&(this->GetClasses_MemoizedValue).IsValidData;
  (this->GetClasses_MemoizedValue).Data.Capacity =
       (int)&vftable_2;
  if (pvVar2 != (void *)0x0) {
    port_op_delete(pvVar2);
  }
  *(undefined4 *)&(this->GetClasses_MemoizedValue).IsValidData = 0;
  (this->GetClasses_MemoizedValue).Data.Capacity =
       (int)&vftable;
  pvVar2 = *(void * *)&(*(undefined1 *)((char *)&((this->LasingMediumProperties).Data) + 0x24));
  *(undefined ** *)&(this->LasingMediumProperties).Data.IsThreeLevelPumpScheme = (undefined **)(&vftable_63);
  if (pvVar2 != (void *)0x0) {
    port_op_delete(pvVar2);
  }
  *(undefined4 *)&(*(undefined4 *)((char *)&((this->LasingMediumProperties).Data) + 0x24)) = 0;
  *(undefined ** *)&(this->LasingMediumProperties).Data.IsThreeLevelPumpScheme = (undefined **)(&vftable);
  (this->LasingMediumProperties).Data.PumpingBands_nm._pad_0x0_0 =
       (int)&vftable_5;
  pdVar3 = (this->LasingMediumProperties).Data.PumpingBands_nm.Data;
  if (pdVar3 != (double *)0x0) {
    port_op_delete(pdVar3);
    (this->LasingMediumProperties).Data.PumpingBands_nm.Data = (double *)0x0;
  }
  DissociationReaction___DissociationReaction((DissociationReaction *)&(this->Dissociation).Data.Products);
  pdVar3 = (this->ElementCount).Data;
  (this->ElementCount)._pad_0x0_0 = (int)&vftable_63;
  if (pdVar3 != (double *)0x0) {
    port_op_delete(pdVar3);
  }
  (this->ElementCount).Data = (double *)0x0;
  (this->ElementCount)._pad_0x0_0 = (int)&vftable;
  ppEVar4 = (this->Elements).Data;
  (this->Elements)._pad_0x0_0 =
       (int)&vftable_142;
  if (ppEVar4 != (Element **)0x0) {
    port_op_delete(ppEVar4);
  }
  (this->Elements).Data = (Element **)0x0;
  (this->Elements)._pad_0x0_0 = (int)&vftable;
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x280);
  }
  return this;
}

//==== 0067e900 AllocateArray_0067e900 ====


/* public: static void * __cdecl ChemicalMakeup__AllocateArray(unsigned int) */

void * __cdecl ChemicalMakeup__AllocateArray(uint)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)
           port_op_new(-(uint)((int)((ulonglong)param_1 * 0x10 >> 0x20) != 0) |
                          (uint)((ulonglong)param_1 * 0x10));
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar2 = puVar1;
    if (param_1 != 0) {
      do {
        *puVar2 = 0;
        *(undefined8 *)(puVar2 + 2) = 0;
        param_1 = param_1 - 1;
        puVar2 = puVar2 + 4;
      } while (param_1 != 0);
      return puVar1;
    }
  }
  return puVar1;
}





//==== 0067e950 CheckSize_0067e950 ====


/* private: bool  util__Darray_L_structutil__Vec3_L_float_G__G___CheckSize(int) */

bool 
util__Darray_struct_util__Vec3_float_____CheckSize
          (Darray_L_struct_util__Vec3_L_float_G___G_ *this,int param_1)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined8 *puStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar4 = *(uint *)(this + 8);
  bVar9 = -1 < (int)uVar4;
  bVar2 = !bVar9;
  if (bVar2) {
    puStack_c = (undefined8 *)0x0;
    SetSize(this,(int *)&puStack_c);
    uVar4 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar2;
  bVar2 = (int)uVar4 < 0x40000000;
  if (!bVar2) {
    puStack_c = (undefined8 *)0x3fffffff;
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
  puStack_c = (undefined8 *)
              port_op_new(-(uint)((int)((ulonglong)uVar7 * 0xc >> 0x20) != 0) |
                             (uint)((ulonglong)uVar7 * 0xc));
  if (puStack_c == (undefined8 *)0x0) {
    puStack_c = (undefined8 *)0x0;
  }
  else if (uVar7 != 0) {
    puVar5 = puStack_c + 1;
    do {
      *(undefined4 *)(puVar5 + -1) = 0;
      *(undefined4 *)((int)puVar5 + -4) = 0;
      *(undefined4 *)puVar5 = 0;
      uVar7 = uVar7 - 1;
      puVar5 = (undefined8 *)((int)puVar5 + 0xc);
    } while (uVar7 != 0);
  }
  puVar3 = puStack_c;
  puVar5 = *(undefined8 **)(this + 4);
  if (puVar5 != (undefined8 *)0x0) {
    iVar1 = *(int *)(this + 8);
    puVar6 = puVar5;
    puVar8 = puStack_c;
    if (puVar5 != (undefined8 *)(param_1 * 0xc + (int)puVar5)) {
      do {
        if (puVar8 == (undefined8 *)((int)puStack_c + iVar1 * 0xc)) break;
        *puVar8 = *puVar5;
        puVar6 = puVar5 + 1;
        puVar5 = (undefined8 *)((int)puVar5 + 0xc);
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)puVar6;
        puVar6 = *(undefined8 **)(this + 4);
        puVar8 = (undefined8 *)((int)puVar8 + 0xc);
      } while (puVar5 != (undefined8 *)(param_1 * 0xc + (int)puVar6));
    }
    port_op_delete(puVar6);
    *(undefined4 *)(this + 4) = 0;
  }
  *(undefined8 **)(this + 4) = puVar3;
  return bStack_5;
}





//==== 0067eab0 Clear_0067eab0 ====


/* public: virtual void  util__Darray_L_structutil__Vec3_L_float_G__G___Clear(void) */

void __thiscall
util__Darray_struct_util__Vec3_float_____Clear(Darray_L_struct_util__Vec3_L_float_G___G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 0067ead0 ClearUntypedTuple_0067ead0 ====


/* public: static void __cdecl ChemicalMakeup__ClearUntypedTuple(void *) */

void __cdecl ChemicalMakeup__ClearUntypedTuple(void *param_1)

{
  undefined4 uStack_10;
  
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((int)param_1 + 4) = uStack_10;
  *(undefined4 *)((int)param_1 + 8) = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  return;
}





//==== 0067eb00 DememoizeAll_0067eb00 ====


/* public: virtual void __thiscall Material__DememoizeAll(void)const  */

void __thiscall Material__DememoizeAll(Material *this)

{
  undefined8 stack0xfffffffc;
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iStack_c = 0;
  piVar1 = &(this->GetClasses_MemoizedValue).Data.Capacity;
  iVar2 = (**(code **)((this->GetClasses_MemoizedValue).Data.Capacity + 0xc))();
  if (iStack_c < iVar2) {
    do {
      puVar3 = (undefined4 *)(**(code **)*piVar1)(&iStack_c);
      (*(code *)*puVar3)();
      iStack_c = iStack_c + 1;
      iVar2 = (**(code **)(uintptr_t)(*piVar1 + 0xc))();
    } while (iStack_c < iVar2);
  }
  (**(code **)(uintptr_t)(*piVar1 + 0x10))();
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0067eb70 GetAbsorptionCoefficient__m ====


/* public: double __thiscall Material__GetAbsorptionCoefficient__m(double)const  */

double __thiscall Material__GetAbsorptionCoefficient__m(Material *this,double param_1)

{
  undefined8 stack0xffffffec;
  RefractiveIndexSpectrum *this_00;
  IndexOfRefraction *pIVar1;
  double dVar2;
  undefined4 in_stack_ffffffec;
  
  this_00 = *(RefractiveIndexSpectrum **)((int)&this->ExternalAngularSensitivity__m_radians + 4);
  if (this_00 == (RefractiveIndexSpectrum *)0x0) {
    dVar2 = 0.0;
  }
  else {
    pIVar1 = RefractiveIndexSpectrum__GetIndexOfRefraction
                       (this_00,(IndexOfRefraction *)&stack0xffffffec,
                        (double)CONCAT44(in_stack_ffffffec,(int)((ulonglong)param_1 >> 0x20)));
    dVar2 = pIVar1->ExtinctionCoefficient;
  }
  return (dVar2 * 12.566370614359172) / (param_1 * 1e-09);
}





//==== 0067ec50 GetAdiabaticFlameTemperature_K_0067ec50 ====


/* WARNING: Removing unreachable block (ram,0x0067ed52) */
/* public: double __thiscall Material__GetAdiabaticFlameTemperature_K(void)const  */

double __thiscall Material__GetAdiabaticFlameTemperature_K(Material *this)

{
  Category CVar1;
  ChemicalReaction *pCVar2;
  bool bVar3;
  undefined4 uStack_c;
  int iStack_8;
  
  bVar3 = (char)this[1].Elements.Capacity == '\0';
  if (bVar3) {
    CVar1 = (this->GetCategory_MemoizedValue).Data;
    _uStack_c = CONCAT44(CVar1 + Category__Nonmetal,uStack_c);
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)&(this->GetClasses_MemoizedValue).Data.Capacity,
               &iStack_8);
    bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)
                       &(this->GetClasses_MemoizedValue).Data.Capacity,CVar1);
    if (bVar3) {
      *(code **)((int)((this->GetClasses_MemoizedValue).IsValidData + -4 +
                (this->GetCategory_MemoizedValue).Data * 4) )= (long long int (*)())(GetDecompositionReaction_Clear);
    }
    pCVar2 = (long long int (*)())((ChemicalReaction *)(uintptr_t)(GetDecompositionReaction_MemoizedFunction(this)));
    _uStack_c = CONCAT14(1,uStack_c);
    this[1].Elements.Size = (int)pCVar2;
    bVar3 = false;
    this[1].Elements.Capacity = iStack_8;
  }
  if (bVar3) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if (this[1].Elements.Size == 0) {
    return 0.0;
  }
  if ((char)this[1].Elements.Capacity == '\0') {
    CVar1 = (this->GetCategory_MemoizedValue).Data;
    _uStack_c = CONCAT44(CVar1 + Category__Nonmetal,uStack_c);
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)&(this->GetClasses_MemoizedValue).Data.Capacity,
               &iStack_8);
    bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)
                       &(this->GetClasses_MemoizedValue).Data.Capacity,CVar1);
    if (bVar3) {
      *(code **)((int)((this->GetClasses_MemoizedValue).IsValidData + -4 +
                (this->GetCategory_MemoizedValue).Data * 4) )= (long long int (*)())(GetDecompositionReaction_Clear);
    }
    pCVar2 = (long long int (*)())((ChemicalReaction *)(uintptr_t)(GetDecompositionReaction_MemoizedFunction(this)));
    _uStack_c = CONCAT14(1,uStack_c);
    this[1].Elements.Size = (int)pCVar2;
    this[1].Elements.Capacity = iStack_8;
  }
  pCVar2 = (ChemicalReaction *)this[1].Elements.Size;
  ChemicalReaction__GetAdiabaticFlameTemperature_K_Memoize(pCVar2);
  if ((pCVar2->GetAdiabaticFlameTemperature_K_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return (pCVar2->GetAdiabaticFlameTemperature_K_MemoizedValue).Data;
}





//==== 0067edd0 GetAtomDensity__m3 ====


/* public: double __thiscall Material__GetAtomDensity__m3(void)const  */

double __thiscall Material__GetAtomDensity__m3(Material *this)

{
  double dVar1;
  double dVar2;
  
  dVar1 = this->Density_kg__m3;
  dVar2 = GetMolarMass_kg__mol(this);
  return (dVar1 * 6.022e+23) / dVar2;
}





//==== 0067ee00 GetAtomNumber ====


/* public: double __thiscall Material__GetAtomNumber(double)const  */

double __thiscall Material__GetAtomNumber(Material *this,double param_1)

{
  double dVar1;
  double dStack_c;
  
  dStack_c = GetMolarMass_kg__mol(this);
  dStack_c = (param_1 * 6.022e+23) / dStack_c;
  dVar1 = util__Floor(&dStack_c);
}





//==== 0067f0f0 GetAverageNeutronsProducedPerFission_0067f0f0 ====


/* public: double __thiscall Material__GetAverageNeutronsProducedPerFission(enum
   FissionType,double)const  */

double __thiscall
Material__GetAverageNeutronsProducedPerFission(Material *this,FissionType param_1,double param_2)

{
  double dVar1;
  Element *this_00;
  Element *this_01;
  double dVar2;
  double dVar3;
  undefined4 in_stack_00000008;
  
  this_00 = (Element *)(uintptr_t)(GetFissileElement(this));
  if ((this_00 == (Element *)0x0) ||
     (this_01 = this_00->UnenrichedElement, this_00->UnenrichedElement == (Element *)0x0)) {
    this_01 = this_00;
  }
  if (this_00 != (Element *)0x0) {
    dVar2 = Element__GetAverageNeutronsProducedPerFission(this_01,param_1);
    dVar1 = (double)CONCAT44((*(uint32_t*)&(param_2)),in_stack_00000008);
    dVar3 = Element__GetAverageNeutronsProducedPerFission(this_00,param_1);
    return dVar3 * (double)CONCAT44((*(uint32_t*)&(param_2)),in_stack_00000008) + dVar2 * (1.0 - dVar1);
  }
  return 0.0;
}





//==== 0067f220 GetBareSphereCriticalMass_kg ====


/* public: double __thiscall Material__GetBareSphereCriticalMass_kg(void)const  */

double __thiscall Material__GetBareSphereCriticalMass_kg(Material *this)

{
  bool bVar1;
  double dVar2;
  
  bVar1 = IsAFissile(this);
  if (bVar1) {
    dVar2 = GetBareSphereCriticalRadius_m(this);
    return dVar2 * dVar2 * dVar2 * 4.1887902047863905 * this->Density_kg__m3;
  }
  return 0.0;
}





//==== 0067f4e0 GetBoilingPoint_K ====


/* public: double __thiscall Material__GetBoilingPoint_K(void)const  */

double __thiscall Material__GetBoilingPoint_K(Material *this)

{
  return this->ThermalExpansion__K;
}





//==== 0067f4f0 GetBulkModulus_Pa ====


/* public: double __thiscall Material__GetBulkModulus_Pa(void)const  */

double __thiscall Material__GetBulkModulus_Pa(Material *this)

{
  double dVar1;
  double dVar2;
  
  if (0.0 < this->BulkModulus_GPa) {
    return this->BulkModulus_GPa * 1000000000.0;
  }
  dVar2 = this->YoungsModulus_GPa;
  if ((NAN(dVar2) == (dVar2 == 0.0)) &&
     (dVar1 = this->ShearModulus_GPa, NAN(dVar1) == (dVar1 == 0.0))) {
    dVar2 = ((dVar1 * dVar2) / ((dVar1 * 3.0 - dVar2) * 3.0)) * 1000000000.0;
    if (dVar2 <= 0.0) {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\materials.cpp",
                      0x152,"OutBulkModulus_GPa > 0",(char *)0x0);
      DebugBreak();
    }
    return dVar2;
  }
  return 0.0;
}





//==== 0067f5a0 GetCategory_Clear ====


/* public: void __thiscall Material__GetCategory_Clear(void)const  */

void __thiscall Material__GetCategory_Clear(Material *this)

{
  (this->GetReflectanceColor_MemoizedValue).Data.Value1.Z = 0.0;
  *(undefined1 *)&(this->GetReflectanceColor_MemoizedValue).Data.Value2.X = 0;
  return;
}





//==== 0067f5c0 GetCategory_MemoizedFunction ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0067f7fa) */
/* WARNING: Removing unreachable block (ram,0x0067f885) */
/* private: enum MaterialCategory__Type __thiscall Material__GetCategory_MemoizedFunction(void)const
    */

int __thiscall Material__GetCategory_MemoizedFunction(Material *this)

{
  undefined8 stack0xfffffffc;
  Category CVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  ChemicalReaction *pCVar6;
  double *pdVar7;
  int TVar8;
  Darray_L_bool_G_ local_34;
  undefined4 local_24;
  undefined **local_20;
  void *pvStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = IsAFluid(this);
  if (bVar2) {
    return 2;
  }
  bVar2 = IsAFissile(this);
  if (bVar2) {
    return 7;
  }
  bVar2 = false;
  if (*(char *)((int)&this[1].ElementCount._pad_0x0_0 + 1) == '\0') {
    CVar1 = (this->GetCategory_MemoizedValue).Data;
    piVar5 = &(this->GetClasses_MemoizedValue).Data.Capacity;
    local_c = CVar1 + Category__Nonmetal;
    util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)piVar5,&local_c);
    bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)piVar5,CVar1);
    if (bVar2) {
      *(code **)((int)((this->GetClasses_MemoizedValue).IsValidData + -4 +
                (this->GetCategory_MemoizedValue).Data * 4) )= (long long int (*)())(IsFusile_Clear);
    }
    local_20 = (long long int (*)())((undefined **)0x0);
    pvStack_1c = (void *)0x0;
    uStack_18 = 0;
    uStack_14 = 0;
    util__SerializationManagerInterface__GetTypedDataOfType_L_FusionReaction_G_
              (*(SerializationManagerInterface **)
                &(this->GetSaturationMagnetization_A__m_MemoizedValue).Data,SUB41(&local_20,0));
    local_34._pad_0x0_0 = 0;
    local_34.Data = (bool *)0x0;
    local_34.Size = 0;
    local_34.Capacity = 0;
    iVar4 = (*(code *)local_20[3])();
    util__Darray_bool___Darray_bool(&local_34,iVar4);
    local_c = 0;
    iVar4 = (*(code *)local_20[3])();
    if (local_c < iVar4) {
      do {
        piVar5 = (int *)(*(code *)*local_20)(&local_c);
        if ((*(Material **)(*piVar5 + 0x10) == this) || (*(Material **)(*piVar5 + 0x14) == this)) {
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
        *(uint32_t *)&local_24 = CONCAT13(uVar3,(undefined3)local_24);
        util__Darray_bool___Add(&local_34,(bool *)((int)&local_24 + 3));
        local_c = local_c + 1;
        iVar4 = (*(code *)local_20[3])();
      } while (local_c < iVar4);
    }
    bVar2 = util__Any(&local_34);
    local_34._pad_0x0_0 = (int)&vftable_178;
    if (local_34.Data != (bool *)0x0) {
      port_op_delete(local_34.Data);
    }
    local_34.Data = (bool *)0x0;
    local_34._pad_0x0_0 = (int)&vftable;
    local_20 = (undefined **)(&vftable_2);
    if (pvStack_1c != (void *)0x0) {
      port_op_delete(pvStack_1c);
    }
    (*(uint24_t*)&(local_24)) = CONCAT12(bVar2,(undefined2)local_24);
    *(uint32_t *)&local_24 = CONCAT13(1,(undefined3)local_24);
    *(undefined2 *)&(this[1].ElementCount._pad_0x0_0) = (*(uint16_t*)((char*)&(local_24)+2));
    bVar2 = *(char *)((int)&this[1].ElementCount._pad_0x0_0 + 1) == '\0';
    pvStack_1c = (void *)0x0;
    local_20 = (undefined **)(&vftable);
  }
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if ((char)this[1].ElementCount._pad_0x0_0 != '\0') {
    return 8;
  }
  if ((char)this[1].Elements.Capacity == '\0') {
    CVar1 = (this->GetCategory_MemoizedValue).Data;
    local_c = CVar1 + Category__Nonmetal;
    util__Darray_L_util__Reflectable_P_G___SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&(this->GetClasses_MemoizedValue).Data.Capacity,
               &local_c);
    bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &(this->GetClasses_MemoizedValue).Data.Capacity,CVar1);
    if (bVar2) {
      *(code **)((int)((this->GetClasses_MemoizedValue).IsValidData + -4 +
                (this->GetCategory_MemoizedValue).Data * 4) )= (long long int (*)())(GetDecompositionReaction_Clear);
    }
    pCVar6 = (long long int (*)())((ChemicalReaction *)(uintptr_t)(GetDecompositionReaction_MemoizedFunction(this)));
    local_c = CONCAT31((*(uint24_t*)((char*)&(local_c)+1)),1);
    this[1].Elements.Size = (int)pCVar6;
    this[1].Elements.Capacity = local_c;
  }
  if (this[1].Elements.Size != 0) {
    if ((char)this[1].Elements.Capacity == '\0') {
      CVar1 = (this->GetCategory_MemoizedValue).Data;
      local_c = CVar1 + Category__Nonmetal;
      util__Darray_L_util__Reflectable_P_G___SetSize
                ((Darray_L_util__Reflectable_P_G_ *)&(this->GetClasses_MemoizedValue).Data.Capacity,
                 &local_c);
      bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                        ((Darray_L_GraphicsResource__Type_G_ *)
                         &(this->GetClasses_MemoizedValue).Data.Capacity,CVar1);
      if (bVar2) {
        *(code **)((int)((this->GetClasses_MemoizedValue).IsValidData + -4 +
                  (this->GetCategory_MemoizedValue).Data * 4) )= (long long int (*)())(GetDecompositionReaction_Clear);
      }
      pCVar6 = (long long int (*)())((ChemicalReaction *)(uintptr_t)(GetDecompositionReaction_MemoizedFunction(this)));
      local_c = CONCAT31((*(uint24_t*)((char*)&(local_c)+1)),1);
      this[1].Elements.Size = (int)pCVar6;
      this[1].Elements.Capacity = local_c;
    }
    bVar2 = ChemicalReaction__IsExplosiveComposition((ChemicalReaction *)this[1].Elements.Size);
    if (bVar2) {
      return 9;
    }
  }
  iVar4 = (**(code **)((this->Elements)._pad_0x0_0 + 0xc))();
  if (iVar4 == 1) {
    local_c = 0;
    pdVar7 = (double *)(**(code **)(this->ElementCount)._pad_0x0_0)(&local_c);
    if (*pdVar7 == 1.0) {
      *(uint32_t *)&local_24 = 0;
      piVar5 = (int *)(**(code **)(this->Elements)._pad_0x0_0)(&local_24);
      if ((((*(char *)(*piVar5 + 0x30) == '\0') && (this->IsPorous == false)) &&
          (this->IsNanostructured == false)) && (this->IsFibrous == false)) {
        return 0;
      }
    }
  }
  iVar4 = (**(code **)((this->Elements)._pad_0x0_0 + 0xc))();
  if (iVar4 == 1) {
    local_c = 0;
    pdVar7 = (double *)(**(code **)(this->ElementCount)._pad_0x0_0)(&local_c);
    if (*pdVar7 == 1.0) {
      *(uint32_t *)&local_24 = 0;
      piVar5 = (int *)(**(code **)(this->Elements)._pad_0x0_0)(&local_24);
      if (*(char *)(*piVar5 + 0x30) != '\0') {
        if (this->IsPorous != false) {
          return 5;
        }
        if ((this->IsNanostructured == false) && (this->IsFibrous == false)) {
          return 1;
        }
      }
    }
  }
  if (this->IsPorous != false) {
    return 5;
  }
  bVar2 = IsAnOrganicCompound(this);
  if (!bVar2) {
    bVar2 = IsAnAlloy(this);
    if (bVar2) {
      return 3;
    }
    bVar2 = IsACeramic(this);
    if (!bVar2) {
      if (((0.0 < *(double *)&(this->LasingMediumProperties).Data._pad_0x8_2) &&
          (bVar2 = IsStructural(this), bVar2)) ||
         ((bVar2 = IsANonlinearOptic(this), bVar2 ||
          (TVar8 = 0xb,
          (char)(this->MaterialMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 != 0)))) {
        TVar8 = 10;
      }
      return TVar8;
    }
    return 4;
  }
  return 6;
}

//==== 0067fa80 GetClasses_Clear ====


/* public: void __thiscall Material__GetClasses_Clear(void)const  */

void __thiscall Material__GetClasses_Clear(Material *this)

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
            ((Darray_L_class_Module_P_G_ *)
             ((int)&(this->GetSaturationMagnetization_A__m_MemoizedValue).Data + 4),
             (Darray_L_class_Module_P_G_ *)&ppuStack_14);
  ppuStack_14 = (undefined **)(&vftable_2);
  if (pvStack_10 != (void *)0x0) {
    port_op_delete(pvStack_10);
  }
  *(undefined1 *)&(this->GetReflectanceColor_MemoizedValue).Data.Value1.Y = 0;
  return;
}





//==== 0067fae0 GetClasses_MemoizedFunction ====

/* WARNING: Removing unreachable block (ram,0x0067fe9d) */
/* WARNING: Removing unreachable block (ram,0x0067fe0c) */
/* private: class util__Darray_L_enumMaterialClass__Type_G_ __thiscall
   Material__GetClasses_MemoizedFunction(void)const  */

Darray_L_util__Reflectable_P_G_ * __thiscall Material__GetClasses_MemoizedFunction(Material *this)

{
  undefined8 stack0x00000004;
  Category CVar1;
  Darray_L_util__Reflectable_P_G_ *this_00;
  bool bVar2;
  ChemicalReaction *pCVar3;
  int iVar4;
  double *pdVar5;
  double dVar6;
  Darray_L_util__Reflectable_P_G_ *in_stack_00000004;
  undefined8 local_c;
  
  this_00 = in_stack_00000004;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = (undefined **)(&vftable_2);
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  bVar2 = IsAStructuralMaterial(this);
  if (bVar2) {
    iVar4 = *(int *)(this_00 + 8);
    in_stack_00000004 = (Darray_L_util__Reflectable_P_G_ *)(iVar4 + 1);
    util__Darray_L_util__Reflectable_P_G___SetSize(this_00,(int *)&stack0x00000004);
    bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)this_00,iVar4);
    if (bVar2) {
      *(undefined4 *)(*(int *)(this_00 + 4) + -4 + *(int *)(this_00 + 8) * 4) = 0;
    }
  }
  bVar2 = IsAFluid(this);
  if ((!bVar2) &&
     ((((local_c = GetHalfLife_s(this), local_c <= 0.0 ||
        (local_c = GetDecayEnergy_eV(this), local_c <= 0.0)) &&
       ((char)(this->MaterialMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 == '\0')) &&
      (bVar2 = IsStructural(this), bVar2)))) {
    iVar4 = *(int *)(this_00 + 8);
    in_stack_00000004 = (Darray_L_util__Reflectable_P_G_ *)(iVar4 + 1);
    util__Darray_L_util__Reflectable_P_G___SetSize(this_00,(int *)&stack0x00000004);
    bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)this_00,iVar4);
    if (bVar2) {
      *(undefined4 *)(*(int *)(this_00 + 4) + -4 + *(int *)(this_00 + 8) * 4) = 1;
    }
  }
  bVar2 = IsAFluid(this);
  if (bVar2) {
    iVar4 = *(int *)(this_00 + 8);
    in_stack_00000004 = (Darray_L_util__Reflectable_P_G_ *)(iVar4 + 1);
    util__Darray_L_util__Reflectable_P_G___SetSize(this_00,(int *)&stack0x00000004);
    bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)this_00,iVar4);
    if (bVar2) {
      *(undefined4 *)(*(int *)(this_00 + 4) + -4 + *(int *)(this_00 + 8) * 4) = 2;
    }
  }
  bVar2 = IsAStructuralMaterial(this);
  if (((bVar2) && (this->RelativePermittivity <= 1.0)) && (0.0 < this->RelativePermittivity)) {
    iVar4 = *(int *)(this_00 + 8);
    in_stack_00000004 = (Darray_L_util__Reflectable_P_G_ *)(iVar4 + 1);
    util__Darray_L_util__Reflectable_P_G___SetSize(this_00,(int *)&stack0x00000004);
    bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)this_00,iVar4);
    if (bVar2) {
      *(undefined4 *)(*(int *)(this_00 + 4) + -4 + *(int *)(this_00 + 8) * 4) = 3;
    }
  }
  bVar2 = IsAStructuralMaterial(this);
  if ((bVar2) && (1.0 < this->RelativePermittivity)) {
    iVar4 = *(int *)(this_00 + 8);
    in_stack_00000004 = (Darray_L_util__Reflectable_P_G_ *)(iVar4 + 1);
    util__Darray_L_util__Reflectable_P_G___SetSize(this_00,(int *)&stack0x00000004);
    bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)this_00,iVar4);
    if (bVar2) {
      *(undefined4 *)(*(int *)(this_00 + 4) + -4 + *(int *)(this_00 + 8) * 4) = 4;
    }
  }
  if ((0.0 < this->RelativePermeability) && (0.0 < this->TotalMagneticMoment)) {
    iVar4 = *(int *)(this_00 + 8);
    in_stack_00000004 = (Darray_L_util__Reflectable_P_G_ *)(iVar4 + 1);
    util__Darray_L_util__Reflectable_P_G___SetSize(this_00,(int *)&stack0x00000004);
    bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)this_00,iVar4);
    if (bVar2) {
      *(undefined4 *)(*(int *)(this_00 + 4) + -4 + *(int *)(this_00 + 8) * 4) = 5;
    }
  }
  if ((((0.0 < this->Remanence_T - 1.0) && (0.0 < this->BandGap_eV)) &&
      (bVar2 = IsAStructuralMaterial(this), bVar2)) && (0.0 < this->ThermoelectricSensitivity_V__K))
  {
    iVar4 = *(int *)(this_00 + 8);
    in_stack_00000004 = (Darray_L_util__Reflectable_P_G_ *)(iVar4 + 1);
    util__Darray_L_util__Reflectable_P_G___SetSize(this_00,(int *)&stack0x00000004);
    bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)this_00,iVar4);
    if (bVar2) {
      *(undefined4 *)(*(int *)(this_00 + 4) + -4 + *(int *)(this_00 + 8) * 4) = 6;
    }
  }
  if (this->Viscosity_Pa_s != 0.0) {
    iVar4 = *(int *)(this_00 + 8);
    in_stack_00000004 = (Darray_L_util__Reflectable_P_G_ *)(iVar4 + 1);
    util__Darray_L_util__Reflectable_P_G___SetSize(this_00,(int *)&stack0x00000004);
    bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)this_00,iVar4);
    if (bVar2) {
      *(undefined4 *)(*(int *)(this_00 + 4) + -4 + *(int *)(this_00 + 8) * 4) = 7;
    }
  }
  if ((char)this[1].Elements.Capacity == '\0') {
    CVar1 = (this->GetCategory_MemoizedValue).Data;
    in_stack_00000004 = (Darray_L_util__Reflectable_P_G_ *)(CVar1 + Category__Nonmetal);
    util__Darray_L_util__Reflectable_P_G___SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&(this->GetClasses_MemoizedValue).Data.Capacity,
               (int *)&stack0x00000004);
    bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &(this->GetClasses_MemoizedValue).Data.Capacity,CVar1);
    if (bVar2) {
      *(code **)((int)((this->GetClasses_MemoizedValue).IsValidData + -4 +
                (this->GetCategory_MemoizedValue).Data * 4) )= (long long int (*)())(GetDecompositionReaction_Clear);
    }
    pCVar3 = (long long int (*)())((ChemicalReaction *)(uintptr_t)(GetDecompositionReaction_MemoizedFunction(this)));
    local_c = (double)CONCAT35((*(uint24_t*)((char*)&(local_c)+5)),0x100000000);
    this[1].Elements.Size = (int)pCVar3;
    this[1].Elements.Capacity = (*(uint32_t*)((char*)&(local_c)+4));
  }
  if (this[1].Elements.Size != 0) {
    if ((char)this[1].Elements.Capacity == '\0') {
      CVar1 = (this->GetCategory_MemoizedValue).Data;
      in_stack_00000004 = (Darray_L_util__Reflectable_P_G_ *)(CVar1 + Category__Nonmetal);
      util__Darray_L_util__Reflectable_P_G___SetSize
                ((Darray_L_util__Reflectable_P_G_ *)&(this->GetClasses_MemoizedValue).Data.Capacity,
                 (int *)&stack0x00000004);
      bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                        ((Darray_L_GraphicsResource__Type_G_ *)
                         &(this->GetClasses_MemoizedValue).Data.Capacity,CVar1);
      if (bVar2) {
        *(code **)((int)((this->GetClasses_MemoizedValue).IsValidData + -4 +
                  (this->GetCategory_MemoizedValue).Data * 4) )= (long long int (*)())(GetDecompositionReaction_Clear);
      }
      pCVar3 = (long long int (*)())((ChemicalReaction *)(uintptr_t)(GetDecompositionReaction_MemoizedFunction(this)));
      local_c = (double)CONCAT35((*(uint24_t*)((char*)&(local_c)+5)),0x100000000);
      this[1].Elements.Size = (int)pCVar3;
      this[1].Elements.Capacity = (*(uint32_t*)((char*)&(local_c)+4));
    }
    bVar2 = ChemicalReaction__IsExplosiveComposition((ChemicalReaction *)this[1].Elements.Size);
    if (bVar2) {
      iVar4 = *(int *)(this_00 + 8);
      in_stack_00000004 = (Darray_L_util__Reflectable_P_G_ *)(iVar4 + 1);
      util__Darray_L_util__Reflectable_P_G___SetSize(this_00,(int *)&stack0x00000004);
      bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                        ((Darray_L_GraphicsResource__Type_G_ *)this_00,iVar4);
      if (bVar2) {
        *(undefined4 *)(*(int *)(this_00 + 4) + -4 + *(int *)(this_00 + 8) * 4) = 8;
      }
    }
  }
  bVar2 = IsADelayComposition(this);
  if (bVar2) {
    iVar4 = *(int *)(this_00 + 8);
    in_stack_00000004 = (Darray_L_util__Reflectable_P_G_ *)(iVar4 + 1);
    util__Darray_L_util__Reflectable_P_G___SetSize(this_00,(int *)&stack0x00000004);
    bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)this_00,iVar4);
    if (bVar2) {
      *(undefined4 *)(*(int *)(this_00 + 4) + -4 + *(int *)(this_00 + 8) * 4) = 9;
    }
  }
  bVar2 = IsAPyrotechnicColorant(this);
  if (bVar2) {
    iVar4 = *(int *)(this_00 + 8);
    in_stack_00000004 = (Darray_L_util__Reflectable_P_G_ *)(iVar4 + 1);
    util__Darray_L_util__Reflectable_P_G___SetSize(this_00,(int *)&stack0x00000004);
    bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)this_00,iVar4);
    if (bVar2) {
      *(undefined4 *)(*(int *)(this_00 + 4) + -4 + *(int *)(this_00 + 8) * 4) = 10;
    }
  }
  bVar2 = IsAFissile(this);
  if (bVar2) {
    iVar4 = *(int *)(this_00 + 8);
    in_stack_00000004 = (Darray_L_util__Reflectable_P_G_ *)(iVar4 + 1);
    util__Darray_L_util__Reflectable_P_G___SetSize(this_00,(int *)&stack0x00000004);
    bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)this_00,iVar4);
    if (bVar2) {
      *(undefined4 *)(*(int *)(this_00 + 4) + -4 + *(int *)(this_00 + 8) * 4) = 0xb;
    }
  }
  dVar6 = GetHalfLife_s(this);
  if ((0.0 < dVar6) && (dVar6 = GetDecayEnergy_eV(this), 0.0 < dVar6)) {
    iVar4 = *(int *)(this_00 + 8);
    in_stack_00000004 = (Darray_L_util__Reflectable_P_G_ *)(iVar4 + 1);
    util__Darray_L_util__Reflectable_P_G___SetSize(this_00,(int *)&stack0x00000004);
    bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)this_00,iVar4);
    if (bVar2) {
      *(undefined4 *)(*(int *)(this_00 + 4) + -4 + *(int *)(this_00 + 8) * 4) = 0xc;
    }
  }
  if ((char)(this->MaterialMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 != '\0') {
    iVar4 = *(int *)(this_00 + 8);
    in_stack_00000004 = (Darray_L_util__Reflectable_P_G_ *)(iVar4 + 1);
    util__Darray_L_util__Reflectable_P_G___SetSize(this_00,(int *)&stack0x00000004);
    bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)this_00,iVar4);
    if (bVar2) {
      *(undefined4 *)(*(int *)(this_00 + 4) + -4 + *(int *)(this_00 + 8) * 4) = 0xd;
    }
  }
  if (0.0 < *(double *)&((this->Dissociation).Data)){
    iVar4 = *(int *)(this_00 + 8);
    in_stack_00000004 = (Darray_L_util__Reflectable_P_G_ *)(iVar4 + 1);
    util__Darray_L_util__Reflectable_P_G___SetSize(this_00,(int *)&stack0x00000004);
    bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)this_00,iVar4);
    if (bVar2) {
      *(undefined4 *)(*(int *)(this_00 + 4) + -4 + *(int *)(this_00 + 8) * 4) = 0xe;
    }
  }
  if ((0.0 < *(double *)&(this->LasingMediumProperties).Data._pad_0x8_2) &&
     (bVar2 = IsStructural(this), bVar2)) {
    iVar4  = *(int *)(this_00 + 8);
    in_stack_00000004 = (Darray_L_util__Reflectable_P_G_ *)(iVar4 + 1);
    util__Darray_L_util__Reflectable_P_G___SetSize(this_00,(int *)&stack0x00000004);
    bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)this_00,iVar4);
    if (bVar2) {
      *(undefined4 *)(*(int *)(this_00 + 4) + -4 + *(int *)(this_00 + 8) * 4) = 0xf;
    }
  }
  if (((0.0 < *(double *)&(this->LasingMediumProperties).Data._pad_0x8_2) &&
      (0.0 < this->LasingDamageThreshold_TW__m2)) &&
     (0.0 < *(double *)&(this->LasingMediumProperties).Data)) {
    iVar4 = *(int *)(this_00 + 8);
    in_stack_00000004 = (Darray_L_util__Reflectable_P_G_ *)(iVar4 + 1);
    util__Darray_L_util__Reflectable_P_G___SetSize(this_00,(int *)&stack0x00000004);
    bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)this_00,iVar4);
    if (bVar2) {
      *(undefined4 *)(*(int *)(this_00 + 4) + -4 + *(int *)(this_00 + 8) * 4) = 0x10;
    }
  }
  bVar2 = IsAFluid(this);
  if ((bVar2) && (iVar4 = (**(code **)((this->Elements)._pad_0x0_0 + 0xc))(), iVar4 == 1)) {
    in_stack_00000004 = (Darray_L_util__Reflectable_P_G_ *)0x0;
    pdVar5 = (double *)(**(code **)(this->ElementCount)._pad_0x0_0)(&stack0x00000004);
    if ((*pdVar5 == 1.0) && (bVar2 = HasEmissionSpectra(this), bVar2)) {
      iVar4 = *(int *)(this_00 + 8);
      in_stack_00000004 = (Darray_L_util__Reflectable_P_G_ *)(iVar4 + 1);
      util__Darray_L_util__Reflectable_P_G___SetSize(this_00,(int *)&stack0x00000004);
      bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                        ((Darray_L_GraphicsResource__Type_G_ *)this_00,iVar4);
      if (bVar2) {
        *(undefined4 *)(*(int *)(this_00 + 4) + -4 + *(int *)(this_00 + 8) * 4) = 0x11;
      }
    }
  }
  bVar2 = IsAFluid(this);
  if (((((!bVar2) && (this->IsPorous == false)) &&
       ((bVar2 = IsAFissile(this), !bVar2 &&
        ((((dVar6 = GetHalfLife_s(this), dVar6 <= 0.0 ||
           (dVar6 = GetDecayEnergy_eV(this), dVar6 <= 0.0)) &&
          ((char)(this->MaterialMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 == '\0')) &&
         ((bVar2 = IsANonlinearOptic(this), !bVar2 && (0.0 < this->Density_kg__m3)))))))) &&
      (0.0 < this->ThermalConductivity_W__m_K)) &&
     (*(int *)((int)&this->ExternalAngularSensitivity__m_radians + 4) != 0)) {
    iVar4 = *(int *)(this_00 + 8);
    in_stack_00000004 = (Darray_L_util__Reflectable_P_G_ *)(iVar4 + 1);
    util__Darray_L_util__Reflectable_P_G___SetSize(this_00,(int *)&stack0x00000004);
    bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)this_00,iVar4);
    if (bVar2) {
      *(undefined4 *)(*(int *)(this_00 + 4) + -4 + *(int *)(this_00 + 8) * 4) = 0x12;
    }
  }
  if (((this->Density_kg__m3 <= 0.0) ||
      (iVar4 = (**(code **)((this->Elements)._pad_0x0_0 + 0xc))(), iVar4 < 1)) &&
     (*(int *)((int)&this->ExternalAngularSensitivity__m_radians + 4) != 0)) {
    iVar4 = *(int *)(this_00 + 8);
    in_stack_00000004 = (Darray_L_util__Reflectable_P_G_ *)(iVar4 + 1);
    util__Darray_L_util__Reflectable_P_G___SetSize(this_00,(int *)&stack0x00000004);
    bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)this_00,iVar4);
    if (bVar2) {
      *(undefined4 *)(*(int *)(this_00 + 4) + -4 + *(int *)(this_00 + 8) * 4) = 0x13;
    }
  }
  return this_00;
}


//==== 006802c0 GetCoercivity_A__m ====


/* public: double __thiscall Material__GetCoercivity_A__m(void)const  */

double __thiscall Material__GetCoercivity_A__m(Material *this)

{
  double dVar1;
  double dVar2;
  
  dVar1 = this->Remanence_T;
  dVar2 = 0.0;
  if (NAN(dVar1) == (dVar1 == 0.0)) {
    dVar2 = this->BandGap_eV / (dVar1 * 1.2566370614359173e-06);
  }
  return dVar2;
}





//==== 00680300 GetConductivity_S__m ====


/* public: double __thiscall Material__GetConductivity_S__m(void)const  */

double __thiscall Material__GetConductivity_S__m(Material *this)

{
  double dVar1;
  
  dVar1 = 0.0;
  if (0.0 < this->RelativePermittivity) {
    dVar1 = 1.0 / this->RelativePermittivity;
  }
  return dVar1;
}





//==== 00680330 GetCost_c__kg_Clear ====

/* public: void __thiscall Material__GetCost_c__kg_Clear(void)const  */

void __thiscall Material__GetCost_c__kg_Clear(Material *this)

{
  *(undefined1 *)&this[1].Elements._pad_0x0_0 = 0;
  this[1]._pad_0x8_2 = 0;
  this[1]._pad_0xc_3 = 0;
  return;
}

//==== 00680350 GetCost_c__kg_Memoize ====

/* public: void __thiscall Material__GetCost_c__kg_Memoize(void)const  */

void __thiscall Material__GetCost_c__kg_Memoize(Material *this)

{
  Category CVar1;
  bool bVar2;
  double dVar3;
  int local_18;
  int iStack_14;
  int iStack_10;
  Element **ppEStack_c;
  int local_8;
  
  if ((char)this[1].Elements._pad_0x0_0 == '\0') {
    CVar1 = (this->GetCategory_MemoizedValue).Data;
    local_8 = CVar1 + Category__Nonmetal;
    util__Darray_L_util__Reflectable_P_G___SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&(this->GetClasses_MemoizedValue).Data.Capacity,
               &local_8);
    bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &(this->GetClasses_MemoizedValue).Data.Capacity,CVar1);
    if (bVar2) {
      *(code **)((int)((this->GetClasses_MemoizedValue).IsValidData + -4 +
                (this->GetCategory_MemoizedValue).Data * 4) )= (long long int (*)())(GetCost_c__kg_Clear);
    }
    dVar3 = (GetCost_c__kg_MemoizedFunction(this));
    iStack_10 = CONCAT31((*(uint24_t*)((char*)&(iStack_10)+1)),1);
    *(uint32_t *)&local_18 = SUB84(dVar3,0);
    iStack_14 = (int)((ulonglong)dVar3 >> 0x20);
    this[1]._pad_0x8_2 = local_18;
    this[1]._pad_0xc_3 = iStack_14;
    this[1].Elements._pad_0x0_0 = iStack_10;
    this[1].Elements.Data = ppEStack_c;
  }
  return;
}

//==== 006806a0 GetCylindricalExplosiveVelocity_m__s ====


/* WARNING: Removing unreachable block (ram,0x006807b9) */
/* public: double __thiscall Material__GetCylindricalExplosiveVelocity_m__s(double,double)const  */

double __thiscall
Material__GetCylindricalExplosiveVelocity_m__s(Material *this,double param_1,double param_2)

{
  Category CVar1;
  ChemicalReaction *pCVar2;
  Maybe_L_double_G_ *pMVar3;
  bool bVar4;
  Maybe_L_double_G_ MStack_14;
  
  bVar4 = (char)this[1].Elements.Capacity == '\0';
  param_1 = param_2 / param_1 + 0.5;
  if (bVar4) {
    CVar1 = (this->GetCategory_MemoizedValue).Data;
    param_2 = (double)CONCAT44(CVar1 + Category__Nonmetal,(*(uint32_t*)&(param_2)));
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)&(this->GetClasses_MemoizedValue).Data.Capacity,
               (int *)((int)&param_2 + 4));
    bVar4 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)
                       &(this->GetClasses_MemoizedValue).Data.Capacity,CVar1);
    if (bVar4) {
      *(code **)((int)((this->GetClasses_MemoizedValue).IsValidData + -4 +
                (this->GetCategory_MemoizedValue).Data * 4) )= (long long int (*)())(GetDecompositionReaction_Clear);
    }
    pCVar2 = (long long int (*)())((ChemicalReaction *)(uintptr_t)(GetDecompositionReaction_MemoizedFunction(this)));
    (*(uint40_t*)&(param_2)) = CONCAT14(1,(*(uint32_t*)&(param_2)));
    this[1].Elements.Size = (int)pCVar2;
    bVar4 = false;
    this[1].Elements.Capacity = (*(uint32_t*)((char*)&(param_2)+4));
  }
  if (bVar4) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if (this[1].Elements.Size == 0) {
    param_2 = 0.0;
  }
  else {
    if ((char)this[1].Elements.Capacity == '\0') {
      CVar1 = (this->GetCategory_MemoizedValue).Data;
      param_2 = (double)CONCAT44(CVar1 + Category__Nonmetal,(*(uint32_t*)&(param_2)));
      util__Darray_class_util__Reflectable____SetSize
                ((Darray_L_class_util__Reflectable_P_G_ *)&(this->GetClasses_MemoizedValue).Data.Capacity
                 ,(int *)((int)&param_2 + 4));
      bVar4 = util__Darray_enum_GraphicsResource__Type___CheckSize
                        ((Darray_L_enum_GraphicsResource__Type_G_ *)
                         &(this->GetClasses_MemoizedValue).Data.Capacity,CVar1);
      if (bVar4) {
        *(code **)((int)((this->GetClasses_MemoizedValue).IsValidData + -4 +
                  (this->GetCategory_MemoizedValue).Data * 4) )= (long long int (*)())(GetDecompositionReaction_Clear);
      }
      pCVar2 = (long long int (*)())((ChemicalReaction *)(uintptr_t)(GetDecompositionReaction_MemoizedFunction(this)));
      (*(uint40_t*)&(param_2)) = CONCAT14(1,(*(uint32_t*)&(param_2)));
      this[1].Elements.Size = (int)pCVar2;
      this[1].Elements.Capacity = (*(uint32_t*)((char*)&(param_2)+4));
    }
    pCVar2 = (ChemicalReaction *)this[1].Elements.Size;
    ChemicalReaction__GetDetonationVelocity_m__s_Memoize(pCVar2);
    if ((pCVar2->GetDetonationVelocity_m__s_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    param_2 = (pCVar2->GetDetonationVelocity_m__s_MemoizedValue).Data;
  }
  pMVar3 = util__Sqrt(&MStack_14,&param_1);
  if (pMVar3->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return (param_2 / 2.97) / pMVar3->Data;
}





//==== 00680910 GetDecompositionProductsByMassPercent ====


/* WARNING: Removing unreachable block (ram,0x00680982) */
/* public: class util__Darray_L_structMaterialConstituent_G_ 
   Material__GetDecompositionProductsByMassPercent(void)const  */

undefined4  Material__GetDecompositionProductsByMassPercent(Material *this)

{
  Category CVar1;
  bool bVar2;
  ChemicalReaction *pCVar3;
  undefined4 in_stack_00000004;
  int iStack_8;
  
  if ((char)this[1].Elements.Capacity == '\0') {
    CVar1 = (this->GetCategory_MemoizedValue).Data;
    iStack_8 = CVar1 + Category__Nonmetal;
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)&(this->GetClasses_MemoizedValue).Data.Capacity,
               &iStack_8);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)
                       &(this->GetClasses_MemoizedValue).Data.Capacity,CVar1);
    if (bVar2) {
      *(code **)((int)((this->GetClasses_MemoizedValue).IsValidData + -4 +
                (this->GetCategory_MemoizedValue).Data * 4) )= (long long int (*)())(GetDecompositionReaction_Clear);
    }
    pCVar3 = (long long int (*)())((ChemicalReaction *)(uintptr_t)(GetDecompositionReaction_MemoizedFunction(this)));
    iStack_8 = CONCAT31((*(uint24_t*)((char*)&(iStack_8)+1)),1);
    this[1].Elements.Size = (int)pCVar3;
    this[1].Elements.Capacity = iStack_8;
  }
  ChemicalReaction__GetProductsByMassPercent((ChemicalReaction *)this[1].Elements.Size,(Darray_L_MaterialConstituent_G_ *)(uintptr_t)in_stack_00000004);
  return in_stack_00000004;
}





//==== 006809c0 GetDecompositionReaction_Clear ====


/* public: void __thiscall Material__GetDecompositionReaction_Clear(void)const  */

void __thiscall Material__GetDecompositionReaction_Clear(Material *this)

{
  this[1].Elements.Size = 0;
  *(undefined1 *)&this[1].Elements.Capacity = 0;
  return;
}





//==== 006809e0 GetDecompositionReaction_Memoize ====


/* public: void __thiscall Material__GetDecompositionReaction_Memoize(void)const  */

void __thiscall Material__GetDecompositionReaction_Memoize(Material *this)

{
  Category CVar1;
  bool bVar2;
  ChemicalReaction *pCVar3;
  int iStack_8;
  
  if ((char)this[1].Elements.Capacity == '\0') {
    CVar1 = (this->GetCategory_MemoizedValue).Data;
    iStack_8 = CVar1 + Category__Nonmetal;
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)&(this->GetClasses_MemoizedValue).Data.Capacity,
               &iStack_8);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)
                       &(this->GetClasses_MemoizedValue).Data.Capacity,CVar1);
    if (bVar2) {
      *(code **)((int)((this->GetClasses_MemoizedValue).IsValidData + -4 +
                (this->GetCategory_MemoizedValue).Data * 4) )= (long long int (*)())(GetDecompositionReaction_Clear);
    }
    pCVar3 = (long long int (*)())((ChemicalReaction *)(uintptr_t)(GetDecompositionReaction_MemoizedFunction(this)));
    iStack_8 = CONCAT31((*(uint24_t*)((char*)&(iStack_8)+1)),1);
    this[1].Elements.Size = (int)pCVar3;
    this[1].Elements.Capacity = iStack_8;
  }
  return;
}





//==== 00680a60 GetDecompositionReaction_MemoizedFunction ====


/* private: class ChemicalReaction * __thiscall
   Material__GetDecompositionReaction_MemoizedFunction(void)const  */

ChemicalReaction * __thiscall Material__GetDecompositionReaction_MemoizedFunction(Material *this)

{
  undefined8 stack0xfffffffc;
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  ChemicalReaction *pCVar8;
  Str_L_char_G_ SStack_40;
  int iStack_34;
  Material *pMStack_30;
  undefined **ppuStack_2c;
  void *pvStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined **ppuStack_1c;
  undefined4 *puStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar5 = *(int * *)&(this->GetSaturationMagnetization_A__m_MemoizedValue).Data;
  ppuStack_2c = (undefined **)0x0;
  pvStack_28 = (void *)0x0;
  iStack_24 = 0;
  uStack_20 = 0;
  util__Str_char___Str_char(&SStack_40,"ChemicalReaction");
  (**(code **)(uintptr_t)(*piVar5 + 4))(&ppuStack_1c,&SStack_40,0);
  if (SStack_40.Data != (char *)0x0) {
    port_op_delete(SStack_40.Data);
    SStack_40.Data = (char *)0x0;
  }
  ppuStack_2c = (undefined **)0x0;
  pvStack_28 = (void *)0x0;
  iStack_24 = 0;
  uStack_20 = 0;
  iVar3 = (*(code *)ppuStack_1c[3])();
  util__Darray_class_Manager____Darray_class_Manager((Darray_L_class_Manager_P_G_ *)&ppuStack_2c,iVar3)
  ;
  iStack_c = 0;
  iVar3 = (*(code *)ppuStack_1c[3])();
  if (iStack_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(*(code *)*ppuStack_1c)(&iStack_c);
      iVar3 = iStack_24;
      uVar1 = *puVar4;
      pMStack_30 = (Material *)(iStack_24 + 1);
      util__Darray_class_util__Reflectable____SetSize
                ((Darray_L_class_util__Reflectable_P_G_ *)&ppuStack_2c,(int *)&pMStack_30);
      bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                        ((Darray_L_enum_GraphicsResource__Type_G_ *)&ppuStack_2c,iVar3);
      if (bVar2) {
        *(undefined4 *)((int)pvStack_28 + iStack_24 * 4 + -4) = uVar1;
      }
      iStack_c = iStack_c + 1;
      iVar3 = (*(code *)ppuStack_1c[3])();
    } while (iStack_c < iVar3);
  }
  ppuStack_1c = (undefined **)(&vftable_6);
  if (puStack_18 != (undefined4 *)0x0) {
    port_op_delete(puStack_18);
  }
  ppuStack_1c = (undefined **)0x0;
  puStack_18 = (undefined4 *)0x0;
  iStack_14 = 0;
  uStack_10 = 0;
  pMStack_30 = this;
  iVar3 = (*(code *)ppuStack_2c[3])();
  util__Darray_class_Manager____Darray_class_Manager((Darray_L_class_Manager_P_G_ *)&ppuStack_1c,iVar3)
  ;
  iStack_c = 0;
  iVar3 = (*(code *)ppuStack_2c[3])();
  if (iStack_c < iVar3) {
    do {
      piVar5 = (int *)(*(code *)*ppuStack_2c)(&iStack_c);
      iVar3 = *piVar5;
      iVar6 = (**(code **)(*(int *)(iVar3 + 0x20) + 0xc))();
      if (iVar6 == 1) {
        piVar7 = (int *)(**(code **)(*(int *)(iVar3 + 0x20) + 0x20))();
        iVar3 = iStack_14;
        if ((Material *)*piVar7 == pMStack_30) {
          iStack_34 = iStack_14 + 1;
          util__Darray_class_util__Reflectable____SetSize
                    ((Darray_L_class_util__Reflectable_P_G_ *)&ppuStack_1c,&iStack_34);
          bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                            ((Darray_L_enum_GraphicsResource__Type_G_ *)&ppuStack_1c,iVar3);
          if (bVar2) {
            puStack_18[iStack_14 + -1] = *piVar5;
          }
        }
      }
      iStack_c = iStack_c + 1;
      iVar3 = (*(code *)ppuStack_2c[3])();
    } while (iStack_c < iVar3);
  }
  if (1 < iStack_14) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\function.inl",0x30,
                    "FilteredArray.Num() <= 1",(char *)0x0);
    DebugBreak();
  }
  if (iStack_14 < 1) {
    pCVar8 = (ChemicalReaction *)0x0;
  }
  else {
    pCVar8 = (ChemicalReaction *)*puStack_18;
  }
  ppuStack_1c = (undefined **)(&vftable_2);
  if (puStack_18 != (undefined4 *)0x0) {
    port_op_delete(puStack_18);
  }
  ppuStack_2c = (undefined **)(&vftable_2);
  if (pvStack_28 != (void *)0x0) {
    port_op_delete(pvStack_28);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return pCVar8;
}





//==== 00682730 GetDensity_kg__m3_00682730 ====


/* public: double __thiscall Material__GetDensity_kg__m3(void)const  */

double __thiscall Material__GetDensity_kg__m3(Material *this)

{
  return this->Density_kg__m3;
}





//==== 00682740 GetDetonationVelocity_m__s_00682740 ====


/* WARNING: Removing unreachable block (ram,0x00682842) */
/* public: double __thiscall Material__GetDetonationVelocity_m__s(void)const  */

double __thiscall Material__GetDetonationVelocity_m__s(Material *this)

{
  Category CVar1;
  ChemicalReaction *pCVar2;
  bool bVar3;
  undefined4 uStack_c;
  int iStack_8;
  
  bVar3 = (char)this[1].Elements.Capacity == '\0';
  if (bVar3) {
    CVar1 = (this->GetCategory_MemoizedValue).Data;
    _uStack_c = CONCAT44(CVar1 + Category__Nonmetal,uStack_c);
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)&(this->GetClasses_MemoizedValue).Data.Capacity,
               &iStack_8);
    bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)
                       &(this->GetClasses_MemoizedValue).Data.Capacity,CVar1);
    if (bVar3) {
      *(code **)((int)((this->GetClasses_MemoizedValue).IsValidData + -4 +
                (this->GetCategory_MemoizedValue).Data * 4) )= (long long int (*)())(GetDecompositionReaction_Clear);
    }
    pCVar2 = (long long int (*)())((ChemicalReaction *)(uintptr_t)(GetDecompositionReaction_MemoizedFunction(this)));
    _uStack_c = CONCAT14(1,uStack_c);
    this[1].Elements.Size = (int)pCVar2;
    bVar3 = false;
    this[1].Elements.Capacity = iStack_8;
  }
  if (bVar3) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if (this[1].Elements.Size == 0) {
    return 0.0;
  }
  if ((char)this[1].Elements.Capacity == '\0') {
    CVar1 = (this->GetCategory_MemoizedValue).Data;
    _uStack_c = CONCAT44(CVar1 + Category__Nonmetal,uStack_c);
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)&(this->GetClasses_MemoizedValue).Data.Capacity,
               &iStack_8);
    bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)
                       &(this->GetClasses_MemoizedValue).Data.Capacity,CVar1);
    if (bVar3) {
      *(code **)((int)((this->GetClasses_MemoizedValue).IsValidData + -4 +
                (this->GetCategory_MemoizedValue).Data * 4) )= (long long int (*)())(GetDecompositionReaction_Clear);
    }
    pCVar2 = (long long int (*)())((ChemicalReaction *)(uintptr_t)(GetDecompositionReaction_MemoizedFunction(this)));
    _uStack_c = CONCAT14(1,uStack_c);
    this[1].Elements.Size = (int)pCVar2;
    this[1].Elements.Capacity = iStack_8;
  }
  pCVar2 = (ChemicalReaction *)this[1].Elements.Size;
  ChemicalReaction__GetDetonationVelocity_m__s_Memoize(pCVar2);
  if ((pCVar2->GetDetonationVelocity_m__s_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return (pCVar2->GetDetonationVelocity_m__s_MemoizedValue).Data;
}





//==== 006828c0 GetDiagramColor ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00682958) */
/* public: struct util__Vec3_L_float_G_ __thiscall Material__GetDiagramColor(void)const  */

Vec3_L_float_G_ * __thiscall
Material__GetDiagramColor(Material *this,Vec3_L_float_G_ *__return_storage_ptr__)

{
  undefined8 stack0xfffffffc;
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  Category CVar4;
  float fVar5;
  bool bVar6;
  char cVar7;
  tuple2_L_util__Vec3_L_float_G__Cutil__Vec3_L_float_G___G_ *ptVar8;
  Vec3_L_float_G_ *pVVar9;
  Vec3_L_float_G_ *pVVar10;
  float fVar11;
  undefined4 local_48;
  tuple2_L_util__Vec3_L_float_G__Cutil__Vec3_L_float_G___G_ local_44;
  undefined1 local_2c [8];
  float fStack_24;
  float local_20;
  float local_1c;
  float local_18;
  Vec3_L_float_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((char)((this->GetCost_CU__kg_MemoizedValue).Data == '\0')){
    CVar4 = (this->GetCategory_MemoizedValue).Data;
    *(uint32_t *)&local_1c = (float)(CVar4 + Category__Nonmetal);
    util__Darray_L_util__Reflectable_P_G___SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&(this->GetClasses_MemoizedValue).Data.Capacity,
               (int *)&local_1c);
    bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &(this->GetClasses_MemoizedValue).Data.Capacity,CVar4);
    if (bVar6) {
      *(code **)((int)((this->GetClasses_MemoizedValue).IsValidData + -4 +
                (this->GetCategory_MemoizedValue).Data * 4) )= (long long int (*)())(GetReflectanceColor_Clear);
    }
    ptVar8 = (long long int (*)())((tuple2_L_util__Vec3_L_float_G__Cutil__Vec3_L_float_G___G_ *)(uintptr_t)(GetReflectanceColor_MemoizedFunction(this,&local_44)));
    *(uint32_t *)&(local_48) = CONCAT31((*(uint24_t*)((char*)&(local_48)+1)),1);
    pVVar9 = (Vec3_L_float_G_ *)(uintptr_t)*(undefined4 *)&(((ptVar8->Value1).Y));
    fVar11 = (ptVar8->Value1).Z;
    fVar5 = (ptVar8->Value2).X;
    uVar2 = *(undefined8 *)&(ptVar8->Value2).Y;
    (this->GetEmissiveColors_MemoizedValue).Data._pad_0x0_0 = (int)(ptVar8->Value1).X;
    (this->GetEmissiveColors_MemoizedValue).Data.Data = pVVar9;
    (this->GetEmissiveColors_MemoizedValue).Data.Size = (int)fVar11;
    (this->GetEmissiveColors_MemoizedValue).Data.Capacity = (int)fVar5;
    *(undefined8 *)&(this->GetEmissiveColors_MemoizedValue).IsValidData = uVar2;
    *(undefined4 *)&(this->GetCost_CU__kg_MemoizedValue).Data = local_48;
  }
  local_14.Z = *(float *)&this->GetEmissivePowers_W_MemoizedValue;
  (*(uint64_t*)&(local_14)) = *(undefined8 *)&(this->GetEmissiveColors_MemoizedValue).Data.Capacity;
  *(uint32_t *)&local_18 = util__Abs(&local_14.Y);
  local_20 = util__Abs(&local_14.X);
  *(uint32_t *)&local_1c = util__Abs(&local_14.Z);
  if (local_20 <= local_18) {
    *(uint32_t *)&local_18 = util__Abs(&local_14.X);
    cVar7 = '\0';
    if (local_1c < local_18) {
      cVar7 = '\x02';
    }
  }
  else {
    *(uint32_t *)&local_18 = util__Abs(&local_14.Y);
    cVar7 = (local_1c < local_18) + '\x01';
  }
  if (cVar7 != '\0') {
    if (cVar7 == '\x01') {
      fVar11 = local_14.Y;
      goto LAB_00682a20;
    }
    fVar11 = local_14.Z;
    if (cVar7 == '\x02') goto LAB_00682a20;
  }
  fVar11 = local_14.X;
LAB_00682a20:
  register0x00001200 = (double)fVar11;
  *(uint32_t *)&local_18 = util__Abs(&local_14.Y);
  local_20 = util__Abs(&local_14.X);
  *(uint32_t *)&local_1c = util__Abs(&local_14.Z);
  if (local_18 <= local_20) {
    *(uint32_t *)&local_18 = util__Abs(&local_14.X);
    cVar7 = '\0';
    if (local_18 < local_1c) {
      cVar7 = '\x02';
    }
  }
  else {
    *(uint32_t *)&local_18 = util__Abs(&local_14.Y);
    cVar7 = (local_18 < local_1c) + '\x01';
  }
  if ((cVar7 == '\0') ||
     ((fVar11 = local_14.Y, cVar7 != '\x01' && (fVar11 = local_14.Z, cVar7 != '\x02')))) {
    fVar11 = local_14.X;
  }
  if (fVar11 == 0.0) {
    pVVar9 = &local_14;
    local_14.X = 0.2;
    local_14.Y = 0.2;
    local_14.Z = 0.2;
  }
  else {
    if (0.2 <= fVar11) {
      if (unique0x1000034a <= 0.800000011920929) {
        fStack_24 = local_14.Z;
        pVVar9 = (Vec3_L_float_G_ *)local_2c;
      }
      else {
        pVVar9 = &local_14;
        fVar11 = 0.8 / (float)unique0x1000034a;
        local_14.Y = fVar11 * local_14.Y;
        local_14.X = fVar11 * local_14.X;
        local_14.Z = fVar11 * local_14.Z;
      }
      pVVar10 = &local_44.Value2;
      local_44.Value2.X = pVVar9->X;
      local_44.Value2.Y = pVVar9->Y;
      local_44.Value2.Z = pVVar9->Z;
    }
    else {
      pVVar10 = &local_14;
      fVar11 = 0.2 / fVar11;
      local_14.Y = fVar11 * local_14.Y;
      local_14.X = fVar11 * local_14.X;
      local_14.Z = fVar11 * local_14.Z;
    }
    uVar1 = pVVar10->X;
    uVar3 = pVVar10->Y;
    fStack_24 = pVVar10->Z;
    pVVar9 = (Vec3_L_float_G_ *)local_2c;
    (*(uint32_t*)&(local_2c)) = uVar1;
    (*(uint32_t*)((char*)&(local_2c)+4)) = uVar3;
  }
  fVar5 = pVVar9->Y;
  fVar11 = pVVar9->Z;
  __return_storage_ptr__->X = pVVar9->X;
  __return_storage_ptr__->Y = fVar5;
  __return_storage_ptr__->Z = fVar11;
  return __return_storage_ptr__;
}

//==== 00682be0 GetDielectricStrength_V__m ====


/* public: double __thiscall Material__GetDielectricStrength_V__m(void)const  */

double __thiscall Material__GetDielectricStrength_V__m(Material *this)

{
  return this->RelativePermeability * 1000000.0;
}





//==== 00682c40 GetElements ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: class util__Darray_L_structutil__tuple2_L_classElement_P_Cdouble_G__G_ __thiscall
   Material__GetElements(void)const  */

Darray_L_MaterialConstituent_G_ * __thiscall Material__GetElements(Material *this)

{
  undefined8 stack0xfffffffc;
  Darray_L_double_G_ *pDVar1;
  Darray_L_Element__P_G_ *pDVar2;
  MaterialConstituent *pMVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  Darray_L_MaterialConstituent_G_ *pDVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  Material *pMVar12;
  Darray_L_MaterialConstituent_G_ *in_stack_00000004;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  undefined8 local_18;
  Darray_L_MaterialConstituent_G_ *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pDVar1 = &this->ElementCount;
  local_10 = in_stack_00000004;
  in_stack_00000004->_pad_0x0_0 = 0;
  in_stack_00000004->Data = (MaterialConstituent *)0x0;
  in_stack_00000004->Size = 0;
  in_stack_00000004->Capacity = 0;
  pDVar2 = &this->Elements;
  iVar8 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
  iVar9 = (**(code **)(pDVar2->_pad_0x0_0 + 0xc))();
  if (iVar8 < iVar9) {
    iVar8 = iVar9;
  }
  util__Darray_L_util__tuple2_L_Element_P_Cdouble_G___G___Darray_L_util__tuple2_L_Element_P_Cdouble_G___G_
            ((Darray_L_util__tuple2_L_Element_P_Cdouble_G___G_ *)local_10,iVar8);
  local_c = 0;
  while( true ) {
    iVar8 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
    iVar9 = (**(code **)(pDVar2->_pad_0x0_0 + 0xc))();
    if (iVar8 < iVar9) {
      iVar8 = iVar9;
    }
    if (iVar8 <= local_c) break;
    iVar8 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
    if (local_c < iVar8) {
      puVar10 = (undefined8 *)(**(code **)pDVar1->_pad_0x0_0)(&local_c);
      *(uint32_t *)&local_18 = *puVar10;
    }
    else {
      *(uint32_t *)&local_18 = 0;
    }
    iVar8 = (**(code **)(pDVar2->_pad_0x0_0 + 0xc))();
    if (local_c < iVar8) {
      puVar11 = (undefined4 *)(**(code **)pDVar2->_pad_0x0_0)(&local_c);
      pMVar12 = (Material *)*puVar11;
    }
    else {
      pMVar12 = (Material *)0x0;
    }
    uVar5 = local_18;
    iVar8 = local_10->Size;
    uVar4 = (undefined4)local_18;
    *(uint32_t *)&local_18 = CONCAT44(iVar8 + 1,(undefined4)local_18);
    util__Darray_L_MaterialConstituent_G___SetSize(local_10,(int *)((int)&local_18 + 4));
    pDVar6 = local_10;
    bVar7 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                      ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)local_10,iVar8);
    if (bVar7) {
      uStack_1c = (undefined4)((ulonglong)uVar5 >> 0x20);
      pMVar3 = pDVar6->Data + pDVar6->Size + -1;
      pMVar3->Type = pMVar12;
      *(undefined4 *)&(*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar3) + 0x4)) = uStack_24;
      *(undefined4 *)&pMVar3->UnitlessFraction = uVar4;
      *(undefined4 *)((int)&pMVar3->UnitlessFraction + 4) = uStack_1c;
    }
    local_c = local_c + 1;
  }
  return local_10;
}

//==== 00682d60 GetEmissionColor ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: struct util__Vec3_L_float_G_  Material__GetEmissionColor(double,double)const  */

Vec3_L_float_G_ * 
Material__GetEmissionColor
          (Material *this,Vec3_L_float_G_ *__return_storage_ptr__,double param_1,double param_2)

{
  undefined8 stack0xfffffffc;
  Maybe_L_bool_G_ *this_00;
  undefined8 uVar1;
  Category CVar2;
  bool bVar3;
  int iVar4;
  Vec3_L_float_G_ *pVVar5;
  Darray_L_util__Vec3_L_float_G___G_ *pDVar6;
  undefined8 *puVar7;
  Vec3_L_float_G_ **ppVVar8;
  code *pcVar9;
  float fVar10;
  undefined4 in_stack_00000008;
  float local_40;
  int local_3c;
  Vec3_L_float_G_ *local_38;
  undefined8 local_34;
  Darray_L_util__Vec3_L_float_G___G_ local_2c;
  float local_1c;
  Darray_L_util__Vec3_L_float_G___G_ local_18;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar4 = (int)(((double)CONCAT44((*(uint32_t*)&(param_1)),in_stack_00000008) / 5000.0) * 50.0);
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  *(uint32_t *)&local_3c = 0x32;
  if (iVar4 < 0x32) {
    *(uint32_t *)&local_3c = iVar4;
  }
  pVVar5 = (Vec3_L_float_G_ *)(local_3c + 1);
  if ((int)pVVar5 < 1) {
    pVVar5 = (Vec3_L_float_G_ *)0x0;
  }
  *(uint32_t *)&local_38 = (uint32_t)(uintptr_t)((Vec3_L_float_G_ *)0x32);
  if ((int)pVVar5 < 0x32) {
    *(uint32_t *)&local_38 = (uint32_t)(uintptr_t)(pVVar5);
  }
  *(uint64_t *)&(local_34) = ((double)CONCAT44((*(uint32_t*)&(param_1)),in_stack_00000008) - (double)local_3c * 100.0) / 100.0;
  if (local_34 <= 0.0) {
    *(uint32_t *)&local_34 = 0.0;
  }
  if (1.0 <= local_34) {
    *(uint32_t *)&local_34 = 1.0;
  }
  bVar3 = HasEmissionSpectra(this);
  if (bVar3) {
    if ((char)this[1]._pad_0x0_0 == '\0') {
      CVar2 = (this->GetCategory_MemoizedValue).Data;
      *(uint32_t *)&local_40 = (float)(CVar2 + Category__Nonmetal);
      util__Darray_L_util__Reflectable_P_G___SetSize
                ((Darray_L_util__Reflectable_P_G_ *)&(this->GetClasses_MemoizedValue).Data.Capacity,
                 (int *)&local_40);
      bVar3 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                        ((Darray_L_GraphicsResource__Type_G_ *)
                         &(this->GetClasses_MemoizedValue).Data.Capacity,CVar2);
      if (bVar3) {
        *(code **)((int)((this->GetClasses_MemoizedValue).IsValidData + -4 +
                  (this->GetCategory_MemoizedValue).Data * 4) )= (long long int (*)())(GetEmissiveColors_Clear);
      }
      pDVar6 = (long long int (*)())((Darray_L_util__Vec3_L_float_G___G_ *)(uintptr_t)(GetEmissiveColors_MemoizedFunction(this,&local_18)));
      util__Darray_L_util__Vec3_L_float_G___G___Darray_L_util__Vec3_L_float_G___G_
                (&local_2c,(Darray_L_struct_util__Vec3_L_float_G___G_ *)pDVar6);
      *(uint32_t *)&local_1c = (float)CONCAT31((*(uint24_t*)((char*)&(local_1c)+1)),1);
      util__Darray_L_util__Vec3_L_float_G___G___op_assign
                ((Darray_L_util__Vec3_L_float_G___G_ *)&this->IsFusile_MemoizedValue,
                 (Darray_L_struct_util__Vec3_L_float_G___G_ *)&local_2c);
      *(undefined1 *)&(this[1]._pad_0x0_0) = (*(uint8_t*)&(local_1c));
      local_2c._pad_0x0_0 = (int)&vftable_335;
      if (local_2c.Data != (Vec3_L_float_G_ *)0x0) {
        port_op_delete(local_2c.Data);
      }
      local_2c.Data = (Vec3_L_float_G_ *)0x0;
      local_2c._pad_0x0_0 = (int)&vftable;
      local_18._pad_0x0_0 = (int)&vftable_335;
      if (local_18.Data != (Vec3_L_float_G_ *)0x0) {
        port_op_delete(local_18.Data);
      }
      (*(uint64_t*)((char*)&(local_18)+4)) = (*(uint64_t*)((char*)&(local_18)+4)) & 0xffffffff00000000;
      local_18._pad_0x0_0 = (int)&vftable;
    }
    pcVar9 = DebugBreak_exref;
    this_00 = &this->IsFusile_MemoizedValue;
    if ((char)this[1]._pad_0x0_0 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if ((char)this[1]._pad_0x0_0 == '\0') {
      CVar2 = (this->GetCategory_MemoizedValue).Data;
      *(uint32_t *)&local_40 = (float)(CVar2 + Category__Nonmetal);
      util__Darray_L_util__Reflectable_P_G___SetSize
                ((Darray_L_util__Reflectable_P_G_ *)&(this->GetClasses_MemoizedValue).Data.Capacity,
                 (int *)&local_40);
      bVar3 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                        ((Darray_L_GraphicsResource__Type_G_ *)
                         &(this->GetClasses_MemoizedValue).Data.Capacity,CVar2);
      if (bVar3) {
        *(code **)((int)((this->GetClasses_MemoizedValue).IsValidData + -4 +
                  (this->GetCategory_MemoizedValue).Data * 4) )= (long long int (*)())(GetEmissiveColors_Clear);
      }
      pDVar6 = (long long int (*)())((Darray_L_util__Vec3_L_float_G___G_ *)(uintptr_t)(GetEmissiveColors_MemoizedFunction(this,&local_18)));
      util__Darray_L_util__Vec3_L_float_G___G___Darray_L_util__Vec3_L_float_G___G_
                (&local_2c,(Darray_L_struct_util__Vec3_L_float_G___G_ *)pDVar6);
      *(uint32_t *)&local_1c = (float)CONCAT31((*(uint24_t*)((char*)&(local_1c)+1)),1);
      util__Darray_L_util__Vec3_L_float_G___G___op_assign
                ((Darray_L_util__Vec3_L_float_G___G_ *)this_00,
                 (Darray_L_struct_util__Vec3_L_float_G___G_ *)&local_2c);
      *(undefined1 *)&(this[1]._pad_0x0_0) = (*(uint8_t*)&(local_1c));
      local_2c._pad_0x0_0 = (int)&vftable_335;
      if (local_2c.Data != (Vec3_L_float_G_ *)0x0) {
        port_op_delete(local_2c.Data);
      }
      local_2c.Data = (Vec3_L_float_G_ *)0x0;
      local_2c._pad_0x0_0 = (int)&vftable;
      local_18._pad_0x0_0 = (int)&vftable_335;
      if (local_18.Data != (Vec3_L_float_G_ *)0x0) {
        port_op_delete(local_18.Data);
      }
      (*(uint64_t*)((char*)&(local_18)+4)) = (*(uint64_t*)((char*)&(local_18)+4)) & 0xffffffff00000000;
      local_18._pad_0x0_0 = (int)&vftable;
      pcVar9 = DebugBreak_exref;
    }
    if ((char)this[1]._pad_0x0_0 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      (*pcVar9)();
    }
    *(uint32_t *)&local_40 = (float)local_34;
    puVar7 = (undefined8 *)(*(code *)**(undefined4 **)&this_00->Data)(&local_38);
    (*(uint64_t*)((char*)&(local_2c)+8)) = *puVar7;
    *(uint32_t *)&local_1c = *(float *)(puVar7 + 1);
    puVar7 = (undefined8 *)(*(code *)**(undefined4 **)&this_00->Data)(&local_3c);
    ppVVar8 = &local_38;
    fVar10 = 1.0 - local_40;
    uVar1 = *puVar7;
    local_18.Data = (Vec3_L_float_G_ *)uVar1;
    local_18.Size = SUB84(uVar1,4);
    local_18.Capacity = (int)*(float *)(puVar7 + 1);
    local_18.Data = (Vec3_L_float_G_ *)uVar1;
    local_18.Size = SUB84(uVar1,4);
    *(uint32_t *)&local_38 = (double)(uintptr_t)((Vec3_L_float_G_ *)(uintptr_t)((float)(int)(uintptr_t)(local_2c).Size * local_40 + fVar10 * (float)(int)(uintptr_t)(local_18).Data));
    local_34 = (double)CONCAT44(local_1c * local_40 + fVar10 * *(float *)(puVar7 + 1),
                                (float)local_2c.Capacity * local_40 + fVar10 * (float)local_18.Size)
    ;
  }
  else {
    ppVVar8 = &local_18.Data;
    local_18.Data = (Vec3_L_float_G_ *)0x0;
    local_18.Size = 0;
    local_18.Capacity = 0;
  }
  pVVar5 = ppVVar8[2];
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)ppVVar8;
  __return_storage_ptr__->Z = (double)(uintptr_t)((float)(int)(uintptr_t)(pVVar5));
  return __return_storage_ptr__;
}

//==== 00683390 GetEmissiveColors_Clear ====

/* public: void __thiscall Material__GetEmissiveColors_Clear(void)const  */

void __thiscall Material__GetEmissiveColors_Clear(Material *this)

{
  undefined **local_14;
  void *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = &vftable_335;
  local_10 = (void *)0x0;
  local_c = 0;
  local_8 = 0;
  util__Darray_L_util__Vec3_L_float_G___G___op_assign
            ((Darray_L_util__Vec3_L_float_G___G_ *)&this->IsFusile_MemoizedValue,
             (Darray_L_struct_util__Vec3_L_float_G___G_ *)&local_14);
  local_14 = &vftable_335;
  if (local_10 != (void *)0x0) {
    port_op_delete(local_10);
  }
  *(undefined1 *)&this[1]._pad_0x0_0 = 0;
  return;
}

//==== 006833f0 GetEmissiveColors_MemoizedFunction ====


/* private: class util__Darray_L_structutil__Vec3_L_float_G__G_ __thiscall
   Material__GetEmissiveColors_MemoizedFunction(void)const  */

void __thiscall Material__GetEmissiveColors_MemoizedFunction(Material *this)

{
  undefined8 stack0xfffffffc;
  undefined8 uVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  Vec3_L_double_G_ *pVVar6;
  float *pfVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  Darray_L_struct_util__Vec3_L_float_G___G_ *in_stack_00000004;
  int *piVar12;
  Vec3_L_double_G_ VStack_9c;
  undefined **ppuStack_84;
  void *pvStack_80;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float afStack_68 [4];
  float fStack_58;
  float fStack_54;
  undefined8 uStack_50;
  float fStack_48;
  Darray_L_struct_util__Vec3_L_float_G___G_ *pDStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  float fStack_28;
  double dStack_24;
  undefined **ppuStack_1c;
  void *pvStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pDStack_44 = in_stack_00000004;
  bVar2 = HasEmissionSpectra(this);
  if (bVar2) {
    ppuStack_1c = &vftable_335;
    pvStack_18 = (void *)0x0;
    iStack_14 = 0;
    iStack_10 = 0x32;
    pvStack_18 = (void *)(uintptr_t)(port_op_new(600));
    iVar4 = iStack_14;
    if (pvStack_18 == (void *)0x0) {
      pvStack_18 = (void *)0x0;
    }
    else {
      iVar10 = 0x32;
      puVar8 = (undefined4 *)((int)pvStack_18 + 8);
      do {
        puVar8[-2] = 0;
        puVar8[-1] = 0;
        *puVar8 = 0;
        iVar10 = iVar10 + -1;
        puVar8 = puVar8 + 3;
      } while (iVar10 != 0);
    }
    iVar10 = 0;
    if (0 < iStack_10) {
      iVar9 = 0;
      do {
        *(undefined8 *)(iVar9 + (int)pvStack_18) = 0;
        *(undefined4 *)(iVar9 + 8 + (int)pvStack_18) = 0;
        iVar10 = iVar10 + 1;
        iVar9 = iVar9 + 0xc;
      } while (iVar10 < iStack_10);
    }
    uStack_34 = 0;
    (*(uint32_t*)&(uStack_30)) = 0;
    (*(uint32_t*)((char*)&(uStack_30)+4)) = 0;
    fStack_28 = (float)(iStack_14 + 1);
    util__Darray_struct_util__Vec3_float_____SetSize
              ((Darray_L_struct_util__Vec3_L_float_G___G_ *)&ppuStack_1c,(int *)&fStack_28);
    bVar2 = util__Darray_struct_util__Vec3_float_____CheckSize
                      ((Darray_L_struct_util__Vec3_L_float_G___G_ *)&ppuStack_1c,iVar4);
    if (bVar2) {
      *(ulonglong *)((int)pvStack_18 + iStack_14 * 0xc + -0xc) =
           CONCAT44((undefined4)uStack_30,uStack_34);
      *(undefined4 *)((int)pvStack_18 + iStack_14 * 0xc + -4) = (*(uint32_t*)((char*)&(uStack_30)+4));
    }
    dStack_24 = 100.0;
    do {
      dVar11 = util__Sum_L_double_G_(&this->ElementCount);
      fStack_40 = (float)dVar11;
      piVar3 = (int *)GetElements(this);
      iStack_c = 0;
      fStack_38 = 0.0;
      fStack_3c = 0.0;
      fStack_28 = 0.0;
      iVar4 = (**(code **)(uintptr_t)(*piVar3 + 0xc))();
      if (iStack_c < iVar4) {
        do {
          piVar12 = &iStack_c;
          piVar5 = (int *)(**(code **)*piVar3)();
          if (*(int *)(*piVar5 + 0xe8) == 0) {
            afStack_68[0] = 0.0;
            pfVar7 = afStack_68;
            afStack_68[1] = 0.0;
            afStack_68[2] = 0.0;
          }
          else {
            uStack_30 = this->Density_kg__m3 * 6.022e+23;
            dVar11 = GetMolarMass_kg__mol(this);
            uStack_30 = uStack_30 / dVar11;
            pVVar6 = EmissionSpectrum__GetVisibleColor
                               (*(EmissionSpectrum **)(*piVar5 + 0xe8),&VStack_9c,
                                (double)CONCAT44(SUB84(uStack_30,0),
                                                 (int)((ulonglong)dStack_24 >> 0x20)),
                                (double)((ulonglong)uStack_30 >> 0x20),
                                (double)CONCAT44(piVar12,0x3ff00000));
            dVar11 = *(double *)(piVar5 + 2);
            fStack_74 = (float)(dVar11 * pVVar6->X);
            fStack_70 = (float)(pVVar6->Y * dVar11);
            pfVar7 = &fStack_74;
            fStack_6c = (float)(pVVar6->Z * dVar11);
          }
          uVar1 = *(undefined8 *)pfVar7;
          fStack_48 = pfVar7[2];
          (*(uint32_t*)&(uStack_50)) = (float)uVar1;
          fStack_38 = (float)uStack_50 + fStack_38;
          iStack_c = iStack_c + 1;
          (*(uint32_t*)((char*)&(uStack_50)+4)) = (float)((ulonglong)uVar1 >> 0x20);
          fStack_3c = (*(uint32_t*)((char*)&(uStack_50)+4)) + fStack_3c;
          fStack_28 = fStack_48 + fStack_28;
          uStack_50 = uVar1;
          iVar4 = (**(code **)(uintptr_t)(*piVar3 + 0xc))();
        } while (iStack_c < iVar4);
      }
      afStack_68[3] = fStack_38 / fStack_40;
      ppuStack_84 = (undefined **)(&vftable_75);
      fStack_58 = fStack_3c / fStack_40;
      fStack_54 = fStack_28 / fStack_40;
      if (pvStack_80 != (void *)0x0) {
        port_op_delete(pvStack_80);
      }
      iVar4 = iStack_14;
      pvStack_80 = (void *)0x0;
      ppuStack_84 = (undefined **)(&vftable);
      fStack_40 = (float)(iStack_14 + 1);
      util__Darray_struct_util__Vec3_float_____SetSize
                ((Darray_L_struct_util__Vec3_L_float_G___G_ *)&ppuStack_1c,(int *)&fStack_40);
      bVar2 = util__Darray_struct_util__Vec3_float_____CheckSize
                        ((Darray_L_struct_util__Vec3_L_float_G___G_ *)&ppuStack_1c,iVar4);
      if (bVar2) {
        *(ulonglong *)((int)pvStack_18 + iStack_14 * 0xc + -0xc) = CONCAT44(fStack_58,afStack_68[3])
        ;
        *(float *)((int)pvStack_18 + iStack_14 * 0xc + -4) = fStack_54;
      }
      dStack_24 = dStack_24 + 100.0;
    } while (dStack_24 <= 5000.0);
    util__Darray_struct_util__Vec3_float_____Darray_struct_util__Vec3_float
              (pDStack_44,(Darray_L_struct_util__Vec3_L_float_G___G_ *)&ppuStack_1c);
    ppuStack_1c = &vftable_335;
    if (pvStack_18 != (void *)0x0) {
      port_op_delete(pvStack_18);
    }
    __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  *(undefined ***)in_stack_00000004 = &vftable_335;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00683790 GetEmissivePowers_W_Clear ====

/* public: void __thiscall Material__GetEmissivePowers_W_Clear(void)const  */

void __thiscall Material__GetEmissivePowers_W_Clear(Material *this)

{
  Darray_L_double_G_ local_14;
  
  local_14._pad_0x0_0 = (int)&vftable_63;
  local_14.Data = (double *)0x0;
  local_14.Size = 0;
  local_14.Capacity = 0;
  util__Darray_double___operator
            ((Darray_L_double_G_ *)((int)&(this->GetCost_CU__kg_MemoizedValue).Data + 4),&local_14);
  local_14._pad_0x0_0 = (int)&vftable_63;
  if (local_14.Data != (double *)0x0) {
    port_op_delete(local_14.Data);
  }
  (this->GetDecompositionReaction_MemoizedValue).IsValidData = false;
  return;
}

//==== 006837f0 GetEmissivePowers_W_MemoizedFunction ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: class util__Darray_L_double_G_ 
   Material__GetEmissivePowers_W_MemoizedFunction(void)const  */

Darray_L_double_G_ * 
Material__GetEmissivePowers_W_MemoizedFunction
          (Material *this,Darray_L_double_G_ *__return_storage_ptr__)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  double dVar5;
  double dVar6;
  void *local_44;
  double local_38;
  double local_24;
  Darray_L_double_G_ local_1c;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar1 = HasEmissionSpectra(this);
  if (!bVar1) {
    __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_63;
    __return_storage_ptr__->Data = (double *)0x0;
    __return_storage_ptr__->Size = 0;
    __return_storage_ptr__->Capacity = 0;
    return __return_storage_ptr__;
  }
  local_1c._pad_0x0_0 = 0;
  local_1c.Data = (double *)0x0;
  local_1c.Size = 0;
  local_1c.Capacity = 0;
  util__Darray_double___Darray_double(&local_1c,0x32);
  iVar3 = local_1c.Size;
  local_c = local_1c.Size + 1;
  util__Darray_double___SetSize(&local_1c,&local_c);
  bVar1 = util__Darray_double___CheckSize(&local_1c,iVar3);
  if (bVar1) {
    local_1c.Data[local_1c.Size + -1] = 0.0;
  }
  *(uint32_t *)&local_24 = 100.0;
  do {
    piVar2 = (int *)GetElements(this);
    local_c = 0;
    *(uint32_t *)&local_38 = 0.0;
    iVar3 = (**(code **)(uintptr_t)(*piVar2 + 0xc))();
    if (local_c < iVar3) {
      do {
        piVar4 = (int *)(**(code **)*piVar2)(&local_c);
        if (*(int *)(*piVar4 + 0xe8) == 0) {
          dVar6 = 0.0;
        }
        else {
          dVar6 = this->Density_kg__m3;
          dVar5 = GetMolarMass_kg__mol(this);
          dVar6 = EmissionSpectrum__GetPowerEmitted_W
                            (*(EmissionSpectrum **)(*piVar4 + 0xe8),local_24,
                             (dVar6 * 6.022e+23) / dVar5,1.0);
          dVar6 = dVar6 * *(double *)(piVar4 + 2);
        }
        *(uint32_t *)&local_38 = dVar6 + local_38;
        local_c = local_c + 1;
        iVar3 = (**(code **)(uintptr_t)(*piVar2 + 0xc))();
      } while (local_c < iVar3);
    }
    dVar6 = util__Sum_L_double_G_(&this->ElementCount);
    if (local_44 != (void *)0x0) {
      port_op_delete(local_44);
    }
    iVar3 = local_1c.Size;
    local_44 = (void *)0x0;
    local_c = local_1c.Size + 1;
    util__Darray_double___SetSize(&local_1c,&local_c);
    bVar1 = util__Darray_double___CheckSize(&local_1c,iVar3);
    if (bVar1) {
      local_1c.Data[local_1c.Size + -1] = local_38 / dVar6;
    }
    *(uint32_t *)&local_24 = local_24 + 100.0;
  } while (local_24 <= 5000.0);
  util__Darray_double___Darray_double(__return_storage_ptr__,&local_1c);
  local_1c._pad_0x0_0 = (int)&vftable_63;
  if (local_1c.Data != (double *)0x0) {
    port_op_delete(local_1c.Data);
  }
  return __return_storage_ptr__;
}

//==== 00683ba0 GetEmissiveRadiativePower_W ====


/* public: double __thiscall Material__GetEmissiveRadiativePower_W(double,double,double)const  */

double __thiscall
Material__GetEmissiveRadiativePower_W(Material *this,double param_1,double param_2,double param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = GetEmissionPower_W(this,param_1,param_2 * param_3);
  dVar2 = Physics__GetBlackbodyRadiation_W(param_2,1.0,param_1);
  return dVar2 + dVar1;
}





//==== 00683c00 GetEmissivityCoefficient ====


/* public: double __thiscall Material__GetEmissivityCoefficient(double)const  */

double __thiscall Material__GetEmissivityCoefficient(Material *this,double param_1)

{
  return 1.0;
}





//==== 00683c10 GetEnergyBudgetRemaining_J ====


/* public: double __thiscall Material__GetEnergyBudgetRemaining_J(double,double)const  */

double __thiscall Material__GetEnergyBudgetRemaining_J(Material *this,double param_1,double param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = this->ThermalConductivity_W__m_K * 0.95;
  dVar2 = 0.0;
  if (0.0 <= dVar1) {
    dVar2 = dVar1;
  }
  dVar1 = 0.0;
  if (0.0 <= dVar2 - param_1) {
    dVar1 = dVar2 - param_1;
  }
  return dVar1 * param_2 * this->BoilingPoint_K;
}





//==== 00683c50 GetEnergyDensity_J__kg_00683c50 ====


/* WARNING: Removing unreachable block (ram,0x00683d52) */
/* public: double __thiscall Material__GetEnergyDensity_J__kg(void)const  */

double __thiscall Material__GetEnergyDensity_J__kg(Material *this)

{
  Category CVar1;
  ChemicalReaction *pCVar2;
  bool bVar3;
  undefined4 uStack_c;
  int iStack_8;
  
  bVar3 = (char)this[1].Elements.Capacity == '\0';
  if (bVar3) {
    CVar1 = (this->GetCategory_MemoizedValue).Data;
    _uStack_c = CONCAT44(CVar1 + Category__Nonmetal,uStack_c);
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)&(this->GetClasses_MemoizedValue).Data.Capacity,
               &iStack_8);
    bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)
                       &(this->GetClasses_MemoizedValue).Data.Capacity,CVar1);
    if (bVar3) {
      *(code **)((int)((this->GetClasses_MemoizedValue).IsValidData + -4 +
                (this->GetCategory_MemoizedValue).Data * 4) )= (long long int (*)())(GetDecompositionReaction_Clear);
    }
    pCVar2 = (long long int (*)())((ChemicalReaction *)(uintptr_t)(GetDecompositionReaction_MemoizedFunction(this)));
    _uStack_c = CONCAT14(1,uStack_c);
    this[1].Elements.Size = (int)pCVar2;
    bVar3 = false;
    this[1].Elements.Capacity = iStack_8;
  }
  if (bVar3) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if (this[1].Elements.Size == 0) {
    return 0.0;
  }
  if ((char)this[1].Elements.Capacity == '\0') {
    CVar1 = (this->GetCategory_MemoizedValue).Data;
    _uStack_c = CONCAT44(CVar1 + Category__Nonmetal,uStack_c);
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)&(this->GetClasses_MemoizedValue).Data.Capacity,
               &iStack_8);
    bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)
                       &(this->GetClasses_MemoizedValue).Data.Capacity,CVar1);
    if (bVar3) {
      *(code **)((int)((this->GetClasses_MemoizedValue).IsValidData + -4 +
                (this->GetCategory_MemoizedValue).Data * 4) )= (long long int (*)())(GetDecompositionReaction_Clear);
    }
    pCVar2 = (long long int (*)())((ChemicalReaction *)(uintptr_t)(GetDecompositionReaction_MemoizedFunction(this)));
    _uStack_c = CONCAT14(1,uStack_c);
    this[1].Elements.Size = (int)pCVar2;
    this[1].Elements.Capacity = iStack_8;
  }
  pCVar2 = (ChemicalReaction *)this[1].Elements.Size;
  ChemicalReaction__GetEnergyDensity_J__kg_Memoize(pCVar2);
  if ((pCVar2->GetEnergyDensity_J__kg_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return (pCVar2->GetEnergyDensity_J__kg_MemoizedValue).Data;
}





//==== 00683dd0 GetEnergyFromTemperatureIncrease_J ====


/* public: double __thiscall Material__GetEnergyFromTemperatureIncrease_J(double,double)const  */

double __thiscall
Material__GetEnergyFromTemperatureIncrease_J(Material *this,double param_1,double param_2)

{
  return param_1 * param_2 * this->BoilingPoint_K;
}





//==== 00683df0 GetFinalDissociationProducts ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: class util__Darray_L_structMaterialConstituent_G_ __thiscall
   Material__GetFinalDissociationProducts(double,double)const  */

Darray_L_MaterialConstituent_G_ * __thiscall
Material__GetFinalDissociationProducts
          (Material *this,Darray_L_MaterialConstituent_G_ *__return_storage_ptr__,double param_1,
          double param_2)

{
  undefined8 stack0xfffffffc;
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined4 uVar5;
  MaterialConstituent *pMVar6;
  int iVar7;
  MaterialConstituent *pMVar8;
  MaterialConstituent *pMVar9;
  int iVar10;
  uint uVar11;
  undefined4 in_stack_00000008;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined1 local_18 [12];
  int iStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  uStack_20 = (double)CONCAT44((*(uint32_t*)&(param_1)),in_stack_00000008);
  unique0x1000025a = (double)CONCAT44((*(uint32_t*)&(param_2)),(*(uint32_t*)((char*)&(param_1)+4)));
  if (*(char *)&this->ExternalAngularSensitivity__m_radians == '\0') {
    (*(uint32_t*)&(local_18)) = (uint32_t)(uintptr_t)(&vftable_15);
    (*(uint32_t*)((char*)&(local_18)+4)) = (uint32_t)(uintptr_t)((MaterialConstituent *)0x0);
    (*(uint32_t*)((char*)&(local_18)+8)) = 0;
    iStack_c = 1;
    (*(uint32_t*)((char*)&(local_18)+4)) = port_op_new(0x10);
    uVar5 = (*(uint32_t*)((char*)&(local_18)+8));
    if ((MaterialConstituent *)(*(uint32_t*)((char*)&(local_18)+4)) == (MaterialConstituent *)0x0) {
      (*(uint32_t*)((char*)&(local_18)+4)) = (uint32_t)(uintptr_t)((MaterialConstituent *)0x0);
    }
    else {
      ((MaterialConstituent *)(*(uint32_t*)((char*)&(local_18)+4)))->Type = (Material *)0x0;
      ((MaterialConstituent *)(*(uint32_t*)((char*)&(local_18)+4)))->UnitlessFraction = 0.0;
    }
    iVar10 = 0;
    if (0 < iStack_c) {
      iVar7 = 0;
      do {
        uStack_20 = 0.0;
        iVar10 = iVar10 + 1;
        puVar1 = (undefined4 *)((int)&((MaterialConstituent *)(*(uint32_t*)((char*)&(local_18)+4)))->Type + iVar7);
        *puVar1 = 0;
        puVar1[1] = uStack_24;
        puVar1[2] = 0;
        puVar1[3] = 0;
        iVar7 = iVar7 + 0x10;
      } while (iVar10 < iStack_c);
    }
    uStack_20 = (double)CONCAT44((*(uint32_t*)((char*)&(local_18)+8)) + 1,(undefined4)uStack_20);
    util__Darray_L_MaterialConstituent_G___SetSize
              ((Darray_L_MaterialConstituent_G_ *)local_18,(int *)((int)&uStack_20 + 4));
    bVar4 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                      ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)local_18,uVar5);
    if (bVar4) {
      pMVar8 = (MaterialConstituent *)((*(uint32_t*)((char*)&(local_18)+4)) + ((*(uint32_t*)((char*)&(local_18)+8)) + -1) * 0x10);
      pMVar8->Type = this;
      *(undefined4 *)&(*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar8) + 0x4)) = uStack_34;
      *(undefined4 *)&pMVar8->UnitlessFraction = 0;
      *(undefined4 *)((int)&pMVar8->UnitlessFraction + 4) = 0x3ff00000;
    }
    __return_storage_ptr__->Capacity = iStack_c;
    __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_15;
    __return_storage_ptr__->Data = (MaterialConstituent *)0x0;
    __return_storage_ptr__->Size = 0;
    uVar5 = (**(code **)((*(uint32_t*)&(local_18)) + 0xc))();
    uStack_20 = (double)CONCAT44(uVar5,(undefined4)uStack_20);
    util__Darray_L_MaterialConstituent_G___SetSize(__return_storage_ptr__,(int *)((int)&uStack_20 + 4));
    uVar11 = __return_storage_ptr__->Capacity;
    pMVar6 = (MaterialConstituent *)(uintptr_t)(port_op_new(-(uint)((int)((ulonglong)uVar11 * 0x10 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar11 * 0x10)));
    pMVar8 = pMVar6;
    if (pMVar6 == (MaterialConstituent *)0x0) {
      pMVar6 = (MaterialConstituent *)0x0;
    }
    else {
      for (; uVar11 != 0; uVar11 = uVar11 - 1) {
        pMVar8->Type = (Material *)0x0;
        pMVar8->UnitlessFraction = 0.0;
        pMVar8 = pMVar8 + 1;
      }
    }
    __return_storage_ptr__->Data = pMVar6;
    pMVar8 = (MaterialConstituent *)(*(uint32_t*)((char*)&(local_18)+4));
    if ((MaterialConstituent *)(*(uint32_t*)((char*)&(local_18)+4)) !=
        (MaterialConstituent *)((*(uint32_t*)((char*)&(local_18)+4)) + (*(uint32_t*)((char*)&(local_18)+8)) * 0x10)) {
      do {
        uVar5 = *(undefined4 *)&(*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar8) + 0x4));
        uVar2 = *(undefined4 *)&pMVar8->UnitlessFraction;
        uVar3 = *(undefined4 *)((int)&pMVar8->UnitlessFraction + 4);
        pMVar9 = pMVar8 + 1;
        pMVar6->Type = pMVar8->Type;
        *(undefined4 *)&(*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar6) + 0x4)) = uVar5;
        *(undefined4 *)&pMVar6->UnitlessFraction = uVar2;
        *(undefined4 *)((int)&pMVar6->UnitlessFraction + 4) = uVar3;
        pMVar8 = pMVar9;
        pMVar6 = pMVar6 + 1;
      } while (pMVar9 != (MaterialConstituent *)((*(uint32_t*)((char*)&(local_18)+4)) + (*(uint32_t*)((char*)&(local_18)+8)) * 0x10));
    }
    (*(uint32_t*)&(local_18)) = (uint32_t)(uintptr_t)(&vftable_15);
    if ((MaterialConstituent *)(*(uint32_t*)((char*)&(local_18)+4)) != (MaterialConstituent *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(local_18)+4)));
    }
    return __return_storage_ptr__;
  }
  DissociationReaction__GetFinalProducts
            ((DissociationReaction *)&(this->Dissociation).Data.Products,__return_storage_ptr__,this
             ,uStack_20,unique0x1000025a);
  return __return_storage_ptr__;
}

//==== 006840c0 GetFissileElement ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: class Element * __thiscall Material__GetFissileElement(void)const  */

Element * __thiscall Material__GetFissileElement(Material *this)

{
  undefined8 stack0xfffffffc;
  Darray_L_Element__P_G_ *pDVar1;
  double dVar2;
  bool bVar3;
  Element *pEVar4;
  int iVar5;
  int *piVar6;
  double local_20;
  Element *local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pDVar1 = &this->Elements;
  iVar5 = (**(code **)((this->Elements)._pad_0x0_0 + 0xc))();
  if (iVar5 < 1) {
    return (Element *)0x0;
  }
  iVar5 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
  if (iVar5 < 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\function.inl",0x179,
                    "ArrayToCheck.Num() > 0",(char *)0x0);
    DebugBreak();
  }
  local_14 = (Element *)0x0;
  bVar3 = false;
  local_20 = 0.0;
  local_c = 0;
  iVar5 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
  pEVar4 = (Element *)0x0;
  if (local_c < iVar5) {
    do {
      piVar6 = (int *)(**(code **)pDVar1->_pad_0x0_0)(&local_c);
      dVar2 = ((Element *)*piVar6)->FissionEnergy_MeV;
      if ((!bVar3) || (local_14 = pEVar4, local_20 < dVar2)) {
        bVar3 = true;
        local_20 = dVar2;
        local_14 = (Element *)*piVar6;
      }
      local_c = local_c + 1;
      iVar5 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
      pEVar4 = local_14;
    } while (local_c < iVar5);
  }
  if (!bVar3) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\function.inl",0x186,
                    "BestType.IsValid()",(char *)0x0);
    DebugBreak();
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return local_14;
}

//==== 006841f0 GetFissionEnergy_MeV ====


/* public: double __thiscall Material__GetFissionEnergy_MeV(void)const  */

double __thiscall Material__GetFissionEnergy_MeV(Material *this)

{
  Element *pEVar1;
  
  pEVar1 = (Element *)(uintptr_t)(GetFissileElement(this));
  if (pEVar1 != (Element *)0x0) {
    return pEVar1->FissionEnergy_MeV;
  }
  return 0.0;
}





//==== 00684460 GetGasDensity_kg__m3 ====


/* public: double __thiscall Material__GetGasDensity_kg__m3(double,double) */

double __thiscall Material__GetGasDensity_kg__m3(Material *this,double param_1,double param_2)

{
  double dVar1;
  
  dVar1 = 0.0;
  if (NAN(param_1) == (param_1 == 0.0)) {
    dVar1 = GetMolarMass_kg__mol(this);
    dVar1 = param_2 / ((8.3144621 / dVar1) * param_1);
  }
  return dVar1;
}





//==== 006844b0 GetGasExpansionVelocity_km__s ====

/* public: double __thiscall Material__GetGasExpansionVelocity_km__s(double)const  */

double __thiscall Material__GetGasExpansionVelocity_km__s(Material *this,double param_1)

{
  Category CVar1;
  double dVar2;
  bool bVar3;
  Maybe_L_double_G_ *pMVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  Maybe_L_double_G_ local_34;
  double local_24;
  undefined8 uStack_1c;
  double local_14;
  undefined8 uStack_c;
  
  if ((this->GetReflectanceColor_MemoizedValue).IsValidData == false) {
    CVar1 = (this->GetCategory_MemoizedValue).Data;
    uStack_c = (double)CONCAT44(CVar1 + Category__Nonmetal,(undefined4)uStack_c);
    util__Darray_L_util__Reflectable_P_G___SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&(this->GetClasses_MemoizedValue).Data.Capacity,
               (int *)((int)&uStack_c + 4));
    bVar3 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &(this->GetClasses_MemoizedValue).Data.Capacity,CVar1);
    if (bVar3) {
      *(code **)((int)((this->GetClasses_MemoizedValue).IsValidData + -4 +
                (this->GetCategory_MemoizedValue).Data * 4) )= (long long int (*)())(GetHeatCapacityRatio_Clear);
    }
    if (this->BoilingPoint_K <= 0.0) {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\materials.cpp",
                      0xdb,"SpecificHeat_J__kg_K > 0",(char *)0x0);
      DebugBreak();
    }
    dVar7 = GetMolarMass_kg__mol(this);
    uStack_c = 8.3144621 / dVar7;
    *(uint32_t *)&local_24 = this->BoilingPoint_K;
    uVar5 = SUB84(local_24,0);
    uVar6 = (undefined4)((ulonglong)local_24 >> 0x20);
    if (local_24 <= uStack_c) {
      *(uint32_t *)&local_24 = local_24 * 0.5;
    }
    else {
      dVar7 = GetMolarMass_kg__mol(this);
      uStack_c = 8.3144621 / dVar7;
      *(uint32_t *)&local_24 = this->BoilingPoint_K;
      uVar5 = SUB84(local_24,0);
      uVar6 = (undefined4)((ulonglong)local_24 >> 0x20);
      *(uint32_t *)&local_24 = local_24 - uStack_c;
    }
    dVar7 = uStack_1c;
    *(uint64_t *)&local_24 = (double)CONCAT44(uVar6,uVar5) / local_24;
    uStack_1c = (double)CONCAT71((*(uint56_t*)((char*)&(uStack_1c)+1)),1);
    dVar2 = uStack_1c;
    (*(uint32_t*)((char*)&(uStack_1c)+4)) = SUB84(dVar7,4);
    *(double *)&(this->GetReflectanceColor_MemoizedValue).Data.Value2.Y = local_24;
    *(undefined4 *)&(this->GetReflectanceColor_MemoizedValue).IsValidData = (undefined4)uStack_1c;
    (this->GetEmissivePowers_W_MemoizedValue).Data._pad_0x0_0 = (*(uint32_t*)((char*)&(uStack_1c)+4));
    uStack_1c = dVar2;
    if ((this->GetReflectanceColor_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
      if ((this->GetReflectanceColor_MemoizedValue).IsValidData == false) {
        CVar1 = (this->GetCategory_MemoizedValue).Data;
        uStack_c = (double)CONCAT44(CVar1 + Category__Nonmetal,(undefined4)uStack_c);
        util__Darray_L_util__Reflectable_P_G___SetSize
                  ((Darray_L_util__Reflectable_P_G_ *)&(this->GetClasses_MemoizedValue).Data.Capacity,
                   (int *)((int)&uStack_c + 4));
        bVar3 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                          ((Darray_L_GraphicsResource__Type_G_ *)
                           &(this->GetClasses_MemoizedValue).Data.Capacity,CVar1);
        if (bVar3) {
          *(code **)((int)((this->GetClasses_MemoizedValue).IsValidData + -4 +
                    (this->GetCategory_MemoizedValue).Data * 4) )= (long long int (*)())(GetHeatCapacityRatio_Clear);
        }
        if (this->BoilingPoint_K <= 0.0) {
          util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\materials.cpp"
                          ,0xdb,"SpecificHeat_J__kg_K > 0",(char *)0x0);
          DebugBreak();
        }
        dVar7 = GetMolarMass_kg__mol(this);
        uStack_c = 8.3144621 / dVar7;
        local_14 = this->BoilingPoint_K;
        uVar5 = SUB84(local_14,0);
        uVar6 = (undefined4)((ulonglong)local_14 >> 0x20);
        if (local_14 <= uStack_c) {
          local_14 = local_14 * 0.5;
        }
        else {
          dVar7 = GetMolarMass_kg__mol(this);
          uStack_c = 8.3144621 / dVar7;
          local_14 = this->BoilingPoint_K;
          uVar5 = SUB84(local_14,0);
          uVar6 = (undefined4)((ulonglong)local_14 >> 0x20);
          local_14 = local_14 - uStack_c;
        }
        dVar7 = uStack_c;
        local_14 = (double)CONCAT44(uVar6,uVar5) / local_14;
        uStack_c = (double)CONCAT71((*(uint56_t*)((char*)&(uStack_c)+1)),1);
        dVar2 = uStack_c;
        (*(uint32_t*)((char*)&(uStack_c)+4)) = SUB84(dVar7,4);
        *(double *)&(this->GetReflectanceColor_MemoizedValue).Data.Value2.Y = local_14;
        *(undefined4 *)&(this->GetReflectanceColor_MemoizedValue).IsValidData = (undefined4)uStack_c
        ;
        (this->GetEmissivePowers_W_MemoizedValue).Data._pad_0x0_0 = (*(uint32_t*)((char*)&(uStack_c)+4));
        uStack_c = dVar2;
        if ((this->GetReflectanceColor_MemoizedValue).IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
      }
    }
  }
  dVar7 = GetMolarMass_kg__mol(this);
  uStack_c = 8.3144621 / dVar7;
  uStack_1c = *(double *)&(this->GetReflectanceColor_MemoizedValue).Data.Value2.Y * param_1 *
              uStack_c;
  pMVar4 = util__Sqrt(&local_34,(double *)&uStack_1c);
  if (pMVar4->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return (2.0 / (*(double *)&(this->GetReflectanceColor_MemoizedValue).Data.Value2.Y - 1.0)) *
         (pMVar4->Data / 1000.0);
}

//==== 00684760 GetGasPressure_Pa ====


/* public: double __thiscall Material__GetGasPressure_Pa(double,double,double) */

double __thiscall
Material__GetGasPressure_Pa(Material *this,double param_1,double param_2,double param_3)

{
  double dVar1;
  
  dVar1 = GetMolarMass_kg__mol(this);
  return ((8.3144621 / dVar1) * param_1 * param_2) / param_3;
}





//==== 006847a0 GetGasSpeedOfSound_km__s ====

/* public: double __thiscall Material__GetGasSpeedOfSound_km__s(double)const  */

double __thiscall Material__GetGasSpeedOfSound_km__s(Material *this,double param_1)

{
  Category CVar1;
  undefined8 uVar2;
  bool bVar3;
  Maybe_L_double_G_ *pMVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  Maybe_L_double_G_ local_2c;
  double local_1c;
  double local_14;
  undefined8 uStack_c;
  
  pcVar5 = DebugBreak_exref;
  if ((this->GetReflectanceColor_MemoizedValue).IsValidData == false) {
    CVar1 = (this->GetCategory_MemoizedValue).Data;
    uStack_c = (double)CONCAT44(CVar1 + Category__Nonmetal,(undefined4)uStack_c);
    util__Darray_L_util__Reflectable_P_G___SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&(this->GetClasses_MemoizedValue).Data.Capacity,
               (int *)((int)&uStack_c + 4));
    bVar3 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &(this->GetClasses_MemoizedValue).Data.Capacity,CVar1);
    if (bVar3) {
      *(code **)((int)((this->GetClasses_MemoizedValue).IsValidData + -4 +
                (this->GetCategory_MemoizedValue).Data * 4) )= (long long int (*)())(GetHeatCapacityRatio_Clear);
    }
    pcVar5 = (long long int (*)())(DebugBreak_exref);
    if (this->BoilingPoint_K <= 0.0) {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\materials.cpp",
                      0xdb,"SpecificHeat_J__kg_K > 0",(char *)0x0);
      pcVar5 = DebugBreak_exref;
      DebugBreak();
    }
    dVar8 = GetMolarMass_kg__mol(this);
    uStack_c = 8.3144621 / dVar8;
    local_14 = this->BoilingPoint_K;
    uVar6 = SUB84(local_14,0);
    uVar7 = (undefined4)((ulonglong)local_14 >> 0x20);
    if (local_14 <= uStack_c) {
      local_14 = local_14 * 0.5;
    }
    else {
      dVar8 = GetMolarMass_kg__mol(this);
      uStack_c = 8.3144621 / dVar8;
      local_14 = this->BoilingPoint_K;
      uVar6 = SUB84(local_14,0);
      uVar7 = (undefined4)((ulonglong)local_14 >> 0x20);
      local_14 = local_14 - uStack_c;
    }
    dVar8 = uStack_c;
    local_14 = (double)CONCAT44(uVar7,uVar6) / local_14;
    uStack_c = (double)CONCAT71((*(uint56_t*)((char*)&(uStack_c)+1)),1);
    uVar2 = uStack_c;
    (*(uint32_t*)((char*)&(uStack_c)+4)) = SUB84(dVar8,4);
    *(double *)&(this->GetReflectanceColor_MemoizedValue).Data.Value2.Y = local_14;
    *(undefined4 *)&(this->GetReflectanceColor_MemoizedValue).IsValidData = (undefined4)uStack_c;
    (this->GetEmissivePowers_W_MemoizedValue).Data._pad_0x0_0 = (*(uint32_t*)((char*)&(uStack_c)+4));
    uStack_c = (double)uVar2;
    if ((this->GetReflectanceColor_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      (*pcVar5)();
    }
  }
  dVar8 = GetMolarMass_kg__mol(this);
  uStack_c = 8.3144621 / dVar8;
  local_1c = *(double *)&(this->GetReflectanceColor_MemoizedValue).Data.Value2.Y * param_1 *
             uStack_c;
  pMVar4 = util__Sqrt(&local_2c,&local_1c);
  if (pMVar4->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    (*pcVar5)();
  }
  return pMVar4->Data / 1000.0;
}

//==== 00684a40 GetHeatCapacityRatio_Clear ====


/* public: void __thiscall Material__GetHeatCapacityRatio_Clear(void)const  */

void __thiscall Material__GetHeatCapacityRatio_Clear(Material *this)

{
  (this->GetReflectanceColor_MemoizedValue).IsValidData = false;
  (this->GetReflectanceColor_MemoizedValue).Data.Value2.Y = 0.0;
  (this->GetReflectanceColor_MemoizedValue).Data.Value2.Z = 0.0;
  return;
}





//==== 00684a60 GetHeatCapacityRatio_Memoize ====

/* public: void __thiscall Material__GetHeatCapacityRatio_Memoize(void)const  */

void __thiscall Material__GetHeatCapacityRatio_Memoize(Material *this)

{
  Category CVar1;
  double dVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  undefined8 uStack_c;
  
  if ((this->GetReflectanceColor_MemoizedValue).IsValidData == false) {
    CVar1 = (this->GetCategory_MemoizedValue).Data;
    uStack_c = (double)CONCAT44(CVar1 + Category__Nonmetal,(undefined4)uStack_c);
    util__Darray_L_util__Reflectable_P_G___SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&(this->GetClasses_MemoizedValue).Data.Capacity,
               (int *)((int)&uStack_c + 4));
    bVar3 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &(this->GetClasses_MemoizedValue).Data.Capacity,CVar1);
    if (bVar3) {
      *(code **)((int)((this->GetClasses_MemoizedValue).IsValidData + -4 +
                (this->GetCategory_MemoizedValue).Data * 4) )= (long long int (*)())(GetHeatCapacityRatio_Clear);
    }
    if (this->BoilingPoint_K <= 0.0) {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\materials.cpp",
                      0xdb,"SpecificHeat_J__kg_K > 0",(char *)0x0);
      DebugBreak();
    }
    uStack_c = GetMolarMass_kg__mol(this);
    uStack_c = 8.3144621 / uStack_c;
    dVar6 = this->BoilingPoint_K;
    uVar4 = SUB84(dVar6,0);
    uVar5 = (undefined4)((ulonglong)dVar6 >> 0x20);
    if (dVar6 <= uStack_c) {
      dVar6 = dVar6 * 0.5;
    }
    else {
      uStack_c = GetMolarMass_kg__mol(this);
      uStack_c = 8.3144621 / uStack_c;
      dVar6 = this->BoilingPoint_K;
      uVar4 = SUB84(dVar6,0);
      uVar5 = (undefined4)((ulonglong)dVar6 >> 0x20);
      dVar6 = dVar6 - uStack_c;
    }
    dVar2 = uStack_c;
    uStack_c = (double)CONCAT71((*(uint56_t*)((char*)&(uStack_c)+1)),1);
    (*(uint32_t*)((char*)&(uStack_c)+4)) = SUB84(dVar2,4);
    *(double *)&((this->GetReflectanceColor_MemoizedValue).Data.Value2.Y) = (double)CONCAT44(uVar5,uVar4) / dVar6;
    *(undefined4 *)&(this->GetReflectanceColor_MemoizedValue).IsValidData = (undefined4)uStack_c;
    (this->GetEmissivePowers_W_MemoizedValue).Data._pad_0x0_0 = (*(uint32_t*)((char*)&(uStack_c)+4));
  }
  return;
}

//==== 00684b60 GetIndexOfRefraction ====


/* public: double __thiscall Material__GetIndexOfRefraction(double)const  */

double __thiscall Material__GetIndexOfRefraction(Material *this,double param_1)

{
  undefined8 stack0xffffffec;
  RefractiveIndexSpectrum *this_00;
  IndexOfRefraction *pIVar1;
  undefined4 in_stack_ffffffec;
  
  this_00 = *(RefractiveIndexSpectrum **)((int)&this->ExternalAngularSensitivity__m_radians + 4);
  if (this_00 != (RefractiveIndexSpectrum *)0x0) {
    pIVar1 = RefractiveIndexSpectrum__GetIndexOfRefraction
                       (this_00,(IndexOfRefraction *)&stack0xffffffec,
                        (double)CONCAT44(in_stack_ffffffec,(int)((ulonglong)param_1 >> 0x20)));
    return pIVar1->RefractionIndex;
  }
  return 1.0;
}





//==== 00684bb0 GetInfinitelyTampedSandwichExplosiveVelocity_m__s ====


/* WARNING: Removing unreachable block (ram,0x00684cc9) */
/* public: double 
   Material__GetInfinitelyTampedSandwichExplosiveVelocity_m__s(double,double)const  */

double 
Material__GetInfinitelyTampedSandwichExplosiveVelocity_m__s
          (Material *this,double param_1,double param_2)

{
  Category CVar1;
  ChemicalReaction *pCVar2;
  Maybe_L_double_G_ *pMVar3;
  bool bVar4;
  Maybe_L_double_G_ MStack_14;
  
  bVar4 = (char)this[1].Elements.Capacity == '\0';
  param_1 = param_2 / param_1 + 0.3333333333333333;
  if (bVar4) {
    CVar1 = (this->GetCategory_MemoizedValue).Data;
    param_2 = (double)CONCAT44(CVar1 + Category__Nonmetal,(*(uint32_t*)&(param_2)));
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)&(this->GetClasses_MemoizedValue).Data.Capacity,
               (int *)((int)&param_2 + 4));
    bVar4 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)
                       &(this->GetClasses_MemoizedValue).Data.Capacity,CVar1);
    if (bVar4) {
      *(code **)((int)((this->GetClasses_MemoizedValue).IsValidData + -4 +
                (this->GetCategory_MemoizedValue).Data * 4) )= (long long int (*)())(GetDecompositionReaction_Clear);
    }
    pCVar2 = (long long int (*)())((ChemicalReaction *)(uintptr_t)(GetDecompositionReaction_MemoizedFunction(this)));
    (*(uint40_t*)&(param_2)) = CONCAT14(1,(*(uint32_t*)&(param_2)));
    this[1].Elements.Size = (int)pCVar2;
    bVar4 = false;
    this[1].Elements.Capacity = (*(uint32_t*)((char*)&(param_2)+4));
  }
  if (bVar4) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if (this[1].Elements.Size == 0) {
    param_2 = 0.0;
  }
  else {
    if ((char)this[1].Elements.Capacity == '\0') {
      CVar1 = (this->GetCategory_MemoizedValue).Data;
      param_2 = (double)CONCAT44(CVar1 + Category__Nonmetal,(*(uint32_t*)&(param_2)));
      util__Darray_class_util__Reflectable____SetSize
                ((Darray_L_class_util__Reflectable_P_G_ *)&(this->GetClasses_MemoizedValue).Data.Capacity
                 ,(int *)((int)&param_2 + 4));
      bVar4 = util__Darray_enum_GraphicsResource__Type___CheckSize
                        ((Darray_L_enum_GraphicsResource__Type_G_ *)
                         &(this->GetClasses_MemoizedValue).Data.Capacity,CVar1);
      if (bVar4) {
        *(code **)((int)((this->GetClasses_MemoizedValue).IsValidData + -4 +
                  (this->GetCategory_MemoizedValue).Data * 4) )= (long long int (*)())(GetDecompositionReaction_Clear);
      }
      pCVar2 = (long long int (*)())((ChemicalReaction *)(uintptr_t)(GetDecompositionReaction_MemoizedFunction(this)));
      (*(uint40_t*)&(param_2)) = CONCAT14(1,(*(uint32_t*)&(param_2)));
      this[1].Elements.Size = (int)pCVar2;
      this[1].Elements.Capacity = (*(uint32_t*)((char*)&(param_2)+4));
    }
    pCVar2 = (ChemicalReaction *)this[1].Elements.Size;
    ChemicalReaction__GetDetonationVelocity_m__s_Memoize(pCVar2);
    if ((pCVar2->GetDetonationVelocity_m__s_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    param_2 = (pCVar2->GetDetonationVelocity_m__s_MemoizedValue).Data;
  }
  pMVar3 = util__Sqrt(&MStack_14,&param_1);
  if (pMVar3->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return (param_2 / 2.97) / pMVar3->Data;
}





//==== 00684d70 GetLasingDamageThreshold_W__m2 ====

/* public: double __thiscall Material__GetLasingDamageThreshold_W__m2(void)const  */

double __thiscall Material__GetLasingDamageThreshold_W__m2(Material *this)

{
  return (double)((this->LasingMediumProperties).Data._pad_0x8_2 * 1000000000000.0);
}

//==== 00685170 GetMagneticSaturationFluxDensity_T ====


/* public: double __thiscall Material__GetMagneticSaturationFluxDensity_T(void)const  */

double __thiscall Material__GetMagneticSaturationFluxDensity_T(Material *this)

{
  Category CVar1;
  undefined8 uVar2;
  bool bVar3;
  double dVar4;
  undefined8 uStack_c;
  
  if ((char)(this->GetEmissivePowers_W_MemoizedValue).Data.Capacity == '\0') {
    CVar1 = (this->GetCategory_MemoizedValue).Data;
    uStack_c = (double)CONCAT44(CVar1 + Category__Nonmetal,(int)uStack_c);
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)&(this->GetClasses_MemoizedValue).Data.Capacity,
               (int *)((int)&uStack_c + 4));
    bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)
                       &(this->GetClasses_MemoizedValue).Data.Capacity,CVar1);
    if (bVar3) {
      *(code **)((int)((this->GetClasses_MemoizedValue).IsValidData + -4 +
                (this->GetCategory_MemoizedValue).Data * 4) )= (long long int (*)())(GetSaturationMagnetization_A__m_Clear);
    }
    uStack_c = (this->Density_kg__m3 * 6.022e+23);
    dVar4 = GetMolarMass_kg__mol(this);
    dVar4 = uStack_c / dVar4;
    uStack_c = (double)CONCAT71((int7)((ulonglong)dVar4 >> 8),1);
    uVar2 = uStack_c;
    (*(uint32_t*)((char*)&(uStack_c)+4)) = (undefined4)((ulonglong)dVar4 >> 0x20);
    *(double *)&((this->GetEmissivePowers_W_MemoizedValue).Data.Data) = Physics__BohrMagneton_J__T * dVar4 * this->ThermoelectricSensitivity_V__K;
    (this->GetEmissivePowers_W_MemoizedValue).Data.Capacity = (int)uStack_c;
    *(undefined4 *)&(this->GetEmissivePowers_W_MemoizedValue).IsValidData = (*(uint32_t*)((char*)&(uStack_c)+4));
    if ((char)(this->GetEmissivePowers_W_MemoizedValue).Data.Capacity == '\0') {
      uStack_c = (double)uVar2;
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  return (double)(*(double *)(this->GetEmissivePowers_W_MemoizedValue).Data.Data * 1.2566370614359173e-06);
}





//==== 00685250 GetMagneticSusceptibility ====


/* public: double __thiscall Material__GetMagneticSusceptibility(void)const  */

double __thiscall Material__GetMagneticSusceptibility(Material *this)

{
  return this->Remanence_T - 1.0;
}





//==== 00685260 GetMaterials ====


/* class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclassutil__Darray_L_class_util__Reflectable_P_G__G__G_ __cdecl GetMaterials(class DataParser *,enum MaterialClass__Type,bool)
    */

void * GetMaterials(DataParser *param_1,int param_2,bool param_3)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  HashMap_L_class_util__Str_L_char_G__Cclass_util__Reflectable_P_G_ *this;
  undefined4 uVar4;
  int iStack_38;
  undefined **ppuStack_34;
  Str_L_char_G_ SStack_30;
  undefined **ppuStack_24;
  void *pvStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  bool *pbStack_14;
  int iStack_10;
  undefined1 auStack_c [4];
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_0097a740) &&
     (_Init_thread_header(&DAT_0097a740), DAT_0097a740 == -1)) {
    DAT_0097a730 = 0;
    DAT_0097a734 = 0;
    uRam0097a738 = 0;
    uRam0097a73c = 0;
    util__Str_char___Str_char(&SStack_30,"Material");
    this = (HashMap_L_class_util__Str_L_char_G__Cclass_util__Reflectable_P_G_ *)(util__SimpleSerializationManager__GetDataTypeTable
                     ((SimpleSerializationManager *)param_2,&SStack_30));
    uVar4 = util__HashMap_class_util__Str_char__class_util__Reflectable____ValuesToDarray(this);
    auStack_c[0] = 0;
    FUN_004f1250(&DAT_0097a730,uVar4,auStack_c);
    ppuStack_24 = (undefined **)(&vftable_6);
    if (pvStack_20 != (void *)0x0) {
      port_op_delete(pvStack_20);
    }
    pvStack_20 = (void *)0x0;
    ppuStack_24 = (undefined **)(&vftable);
    if (SStack_30.Data != (char *)0x0) {
      port_op_delete(SStack_30.Data);
    }
    atexit((_func_4879 *)&LAB_008fcf60);
    _Init_thread_footer(&DAT_0097a740);
  }
  pbStack_14 = &param_3;
  ppuStack_34 = (undefined **)0x0;
  SStack_30.Data = (char *)0x0;
  SStack_30.Capacity = 0;
  SStack_30.Length = 0;
  iVar2 = (**(code **)(uintptr_t)(DAT_0097a730 + 0xc))();
  util__Darray_class_util__Reflectable____Darray_class_util__Reflectable
            ((Darray_L_class_util__Reflectable_P_G_ *)&ppuStack_34,iVar2);
  FUN_0067c9e0(&DAT_0097a730,&pbStack_14,&ppuStack_34);
  ppuStack_24 = (undefined **)0x0;
  pvStack_20 = (void *)0x0;
  iStack_1c = 0;
  uStack_18 = 0;
  iVar2 = (*(code *)ppuStack_34[3])();
  util__Darray_class_util__Reflectable____Darray_class_util__Reflectable
            ((Darray_L_class_util__Reflectable_P_G_ *)&ppuStack_24,iVar2);
  iStack_10 = 0;
  iVar2 = (*(code *)ppuStack_34[3])();
  if (iStack_10 < iVar2) {
    do {
      puVar3 = (undefined4 *)(*(code *)*ppuStack_34)(&iStack_10);
      iVar2 = iStack_1c;
      uVar4 = *puVar3;
      iStack_38 = iStack_1c + 1;
      util__Darray_class_util__Reflectable____SetSize
                ((Darray_L_class_util__Reflectable_P_G_ *)&ppuStack_24,&iStack_38);
      bVar1 = util__Darray_enum_GraphicsResource__Type___CheckSize
                        ((Darray_L_enum_GraphicsResource__Type_G_ *)&ppuStack_24,iVar2);
      if (bVar1) {
        *(undefined4 *)((int)pvStack_20 + iStack_1c * 4 + -4) = uVar4;
      }
      iStack_10 = iStack_10 + 1;
      iVar2 = (*(code *)ppuStack_34[3])();
    } while (iStack_10 < iVar2);
  }
  Material__SubsectionMaterials((Darray_L_class_util__Reflectable_P_G_ *)param_1,SUB41(&ppuStack_24,0));
  ppuStack_24 = (undefined **)(&vftable_6);
  if (pvStack_20 != (void *)0x0) {
    port_op_delete(pvStack_20);
  }
  pvStack_20 = (void *)0x0;
  ppuStack_24 = (undefined **)(&vftable);
  ppuStack_34 = (undefined **)(&vftable_6);
  if (SStack_30.Data != (char *)0x0) {
    port_op_delete(SStack_30.Data);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return 0;
}





//==== 00685460 GetMaterials_00685460 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclassutil__Darray_L_class_util__Reflectable_P_G__G__G_ __cdecl GetMaterials(class DataParser *,bool) */

DataParser * __cdecl GetMaterials__o3(DataParser *param_1,bool param_2)

{
  HashMap_L_class_util__Str_L_char_G__Cclass_util__Reflectable_P_G_ *this;
  undefined4 uVar1;
  undefined3 in_stack_00000009;
  Str_L_char_G_ SStack_24;
  undefined **ppuStack_18;
  void *pvStack_14;
  undefined1 auStack_8 [4];
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_0097a72c) {
    _Init_thread_header(&DAT_0097a72c);
    if (DAT_0097a72c == -1) {
      _DAT_0097a71c = 0;
      DAT_0097a720 = 0;
      uRam0097a724 = 0;
      uRam0097a728 = 0;
      util__Str_char___Str_char(&SStack_24,"Material");
      this = util__SimpleSerializationManager__GetDataTypeTable((SimpleSerializationManager *)(uintptr_t)(_param_2),&SStack_24);
      uVar1 = util__HashMap_class_util__Str_char__class_util__Reflectable____ValuesToDarray(this);
      auStack_8[0] = 0;
      FUN_004f1250(&DAT_0097a71c,uVar1,auStack_8);
      ppuStack_18 = (undefined **)(&vftable_6);
      if (pvStack_14 != (void *)0x0) {
        port_op_delete(pvStack_14);
      }
      pvStack_14 = (void *)0x0;
      ppuStack_18 = (undefined **)(&vftable);
      if (SStack_24.Data != (char *)0x0) {
        port_op_delete(SStack_24.Data);
      }
      atexit((_func_4879 *)&LAB_008fcfa0);
      _Init_thread_footer(&DAT_0097a72c);
    }
  }
  Material__SubsectionMaterials((Darray_L_class_util__Reflectable_P_G_ *)param_1,true);
  return param_1;
}




