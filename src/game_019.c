// Auto-generated from Ghidra decompilation
#include "port_prelude.h"

//==== 006f8150 OnClick_006f8150 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void  UIDropButton_L_classutil__Reflectable_P_G___OnClick(void) */

void __thiscall
UIDropButton_class_util__Reflectable____OnClick(UIDropButton_L_class_util__Reflectable_P_G_ *this)

{
  UIDropButton_L_class_util__Reflectable_P_G_ UVar1;
  undefined4 uVar2;
  ReferenceController *this_00;
  ReferenceController *this_01;
  UIDropButton_L_class_util__Reflectable_P_G_ *pUVar3;
  bool bVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  ReferenceControllerRegistry *pRVar8;
  Vec2_L_int_G_ VVar9;
  UIDropButton_L_class_util__Reflectable_P_G_ *pUVar10;
  code *pcVar11;
  UIDropButton_L_class_util__Reflectable_P_G_ *pUVar12;
  code *pcVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *ptStack_34;
  undefined1 auStack_28 [16];
  int *piStack_18;
  ReferenceController *pRStack_14;
  int iStack_10;
  int *piStack_c;
  UIDropButton_L_class_util__Reflectable_P_G_ *pUStack_8;
  
  pUStack_8 = this;
  piStack_c = (int *)(**(code **)(*(int *)this + 0x10))(auStack_28);
  if ((char)piStack_c[2] == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  piVar5 = (int *)UIWidget__GetParentOffsetLocation((UIWidget *)this);
  if ((char)piVar5[2] == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  uVar28 = *(undefined4 *)(this + 0x200);
  uVar27 = *(undefined4 *)(this + 0x1fc);
  iStack_10 = *piVar5 + *piStack_c;
  uVar24 = 0;
  uVar25 = 0;
  uVar26 = 0;
  uVar23 = *(undefined4 *)(this + 0x1f8);
  uVar22 = *(undefined4 *)(this + 500);
  uVar20 = 0;
  uVar21 = 0;
  uVar2 = *(undefined4 *)(this + 8);
  UVar1 = this[0x1b8];
  piStack_c = (int *)(piVar5[1] + piStack_c[1]);
  UIWidget__GetTrueSize((UIWidget *)this,&VVar9);
  uVar19 = *(undefined4 *)(pUStack_8 + 0x1e8);
  uVar18 = *(undefined4 *)(pUStack_8 + 0x1e4);
  uVar17 = *(undefined4 *)(pUStack_8 + 0x1f0);
  uVar16 = *(undefined4 *)(pUStack_8 + 0x1ec);
  uVar15 = *(undefined4 *)(pUStack_8 + 0x1d8);
  uVar14 = *(undefined4 *)(pUStack_8 + 0x1d4);
  pcVar13 = (long long int (*)())(_get_startup_commit_mode);
  pcVar11 = (long long int (*)())(util__Delegate_void_class_util__Reflectable____MethodCaller_struct_UIDropButton_class_util__Reflectable____public__void___thiscall_UIDropButton_class_util__Reflectable____OnSelectItem_class_util__Reflectable);
  pUVar10 = pUStack_8;
  pUVar12 = pUStack_8;
  uVar6 = (undefined4)(uintptr_t)(util__Attribute_class_util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable__________Get((Attribute_L_class_util__Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G___G___G_
                 *)(pUStack_8 + 0x1bc)));
  pUVar3 = pUStack_8;
  CreateDropMenu_class_util__Reflectable(&piStack_18,uVar2,iStack_10,piStack_c,*(undefined4 *)VVar9.X,
                      ((undefined4 *)VVar9.X)[1],*(undefined4 *)(pUStack_8 + 0x1b0),
                      *(undefined4 *)(pUStack_8 + 0x1b4),0x1c2,UVar1,uVar6,pUVar10,pcVar11,pUVar12,
                      pcVar13,uVar14,uVar15,uVar16,uVar17,uVar18,uVar19,uVar20,uVar21,uVar22,uVar23,
                      uVar24,uVar25,uVar26,uVar27,uVar28);
  puVar7 = (undefined4 *)(&piStack_18);
  piVar5 = *(int **)(pUVar3 + 0x204);
  this_00 = *(ReferenceController **)(pUVar3 + 0x208);
  *(undefined4 *)(pUVar3 + 0x204) = *puVar7;
  this_01 = (ReferenceController *)puVar7[1];
  *(ReferenceController **)(pUVar3 + 0x208) = this_01;
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
  }
  if (this_00 != (ReferenceController *)0x0) {
    bVar4 = util__ReferenceController__ReleaseStrongReference(this_00);
    if (bVar4) {
      if (piVar5 != (int *)0x0) {
        (**(code **)(uintptr_t)(*piVar5 + 4))(1);
      }
      pRVar8 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar8,piVar5);
    }
  }
  if (pRStack_14 != (ReferenceController *)0x0) {
    bVar4 = util__ReferenceController__ReleaseStrongReference(pRStack_14);
    if (bVar4) {
      if (piStack_18 != (int *)0x0) {
        (**(code **)(uintptr_t)(*piStack_18 + 4))(1);
      }
      pRVar8 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar8,piStack_18);
      piStack_18 = (int *)0x0;
    }
  }
  if (ptStack_34 !=
      (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)0x0) {
    util__tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable_______vector_deleting_destructor(ptStack_34,3);
  }
  return;
}





//==== 006f8340 OnRequestDeleteCampaign ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* private: void __thiscall ScenarioEditor__OnRequestDeleteCampaign(class util__Reflectable *) */

void __thiscall ScenarioEditor__OnRequestDeleteCampaign(ScenarioEditor *this,Reflectable *param_1)

{
  Delegate_L_void_G_ DVar1;
  Delegate_L_void_G_ DVar2;
  GameManager *pGVar3;
  DataParser *pDVar4;
  Campaign **ppCVar5;
  Campaign *pCVar6;
  undefined4 *puVar7;
  LocStr *pLVar8;
  Str_L_char_G_ *pSVar9;
  Str_L_char_G_ *pSVar10;
  Str_L_char_G_ *pSVar11;
  undefined1 *puVar12;
  char *pcVar13;
  ScenarioEditor *pSVar14;
  code *pcVar15;
  void *pvVar16;
  _func___cdecl_void_void_ptr *p_Var17;
  void *local_ac [3];
  void *local_a0;
  void *local_94 [3];
  void *local_88;
  void *local_7c [3];
  void *local_70;
  Str_L_char_G_ local_64;
  void *local_58 [3];
  Str_L_char_G_ local_4c;
  Str_L_char_G_ local_40;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  Str_L_char_G_ local_10;
  
  pGVar3 = Manager__GetParent(*(Manager **)this);
  pDVar4 = GameManager__GetDataManager(pGVar3);
  ppCVar5 = GetCurrentCampaignEditable(pDVar4);
  *ppCVar5 = (Campaign *)param_1;
  *(undefined4 *)(this + 100) = 0;
  RegeneratePropertyUI(this);
  UpdateListBoxUI(this);
  util__Str_char___Str_char(&local_64,"Cancel");
  util__Str_char___Str_char(&local_40,"Delete");
  util__Str_char___Str_char(&local_34,"AreYouSureYouWishToDelete Message");
  pCVar6 = *(Campaign **)(this + 100);
  if (pCVar6 == (Campaign *)0x0) {
    pGVar3 = Manager__GetParent(*(Manager **)this);
    pDVar4 = GameManager__GetDataManager(pGVar3);
    pCVar6 = GetCurrentCampaign(pDVar4);
  }
  local_28.Data = (char *)0x0;
  local_28.Capacity = 0;
  local_28.Length = 0;
  local_1c.Data = (char *)0x0;
  local_1c.Capacity = 0;
  local_1c.Length = 0;
  puVar7 = (undefined4 *)(**(code **)(pCVar6->_pad_0x0_0 + 0x48))(local_58);
  if ((int)puVar7[1] < 1) {
    puVar12 = (undefined1 *)(&cde_l2_0b2b1c9f_NullString);
  }
  else {
    puVar12 = (undefined1 *)*puVar7;
  }
  local_10.Data = (char *)0x0;
  local_10.Capacity = 0;
  local_10.Length = 0;
  pLVar8 = (LocStr *)util__LocStr__LocStr((LocStr *)local_7c,&local_34,&local_10);
  pSVar9 = util__LocStr__operator__o3(pLVar8);
  if (pSVar9->Capacity < 1) {
    pcVar13 = "";
  }
  else {
    pcVar13 = pSVar9->Data;
  }
  pLVar8 = (LocStr *)util__LocStr__LocStr((LocStr *)local_ac,&local_64,&local_28);
  pSVar9 = util__LocStr__operator__o3(pLVar8);
  pLVar8 = (LocStr *)util__LocStr__LocStr((LocStr *)local_94,&local_40,&local_1c);
  pSVar10 = util__LocStr__operator__o3(pLVar8);
  p_Var17 = (_func___cdecl_void_void_ptr *)0x0;
  pvVar16 = (void *)0x0;
  pcVar15 = (long long int (*)())(util__DelegateFactory_L_ScenarioEditor_Cvoid_G___MethodCaller_L__private__void___thiscall_ScenarioEditor__DeleteObject_void__G_);
  pSVar14 = this;
  pSVar11 = util__Printf(&local_4c,(wchar_t*)(pcVar13),puVar12);
  DVar1.CallbackFunction = (void (*)(void *))(pcVar15);
  DVar1.Callee = pSVar14;
  DVar2.CallbackFunction = p_Var17;
  DVar2.Callee = pvVar16;
  ModalDialog__Open__o5((ModalDialog *)(this + 0x68),pSVar11,DVar1,DVar2,pSVar10,pSVar9);
  if (local_4c.Data != (char *)0x0) {
    port_op_delete(local_4c.Data);
    local_4c.Data = (char *)0x0;
  }
  if (local_70 != (void *)0x0) {
    port_op_delete(local_70);
    local_70 = (void *)0x0;
  }
  if (local_7c[0] != (void *)0x0) {
    port_op_delete(local_7c[0]);
    local_7c[0] = (void *)0x0;
  }
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
    local_10.Data = (char *)0x0;
  }
  if (local_58[0] != (void *)0x0) {
    port_op_delete(local_58[0]);
    local_58[0] = (void *)0x0;
  }
  if (local_88 != (void *)0x0) {
    port_op_delete(local_88);
    local_88 = (void *)0x0;
  }
  if (local_94[0] != (void *)0x0) {
    port_op_delete(local_94[0]);
    local_94[0] = (void *)0x0;
  }
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
    local_1c.Data = (char *)0x0;
  }
  if (local_a0 != (void *)0x0) {
    port_op_delete(local_a0);
    local_a0 = (void *)0x0;
  }
  if (local_ac[0] != (void *)0x0) {
    port_op_delete(local_ac[0]);
    local_ac[0] = (void *)0x0;
  }
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
  if (local_64.Data != (char *)0x0) {
    port_op_delete(local_64.Data);
  }
  return;
}

//==== 006f8600 Open_006f8600 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall ScenarioEditor__Open(void) */

void __thiscall ScenarioEditor__Open(ScenarioEditor *this)

{
  Delegate_L_void_G_ DVar1;
  Delegate_L_void_G_ DVar2;
  OptionsSection__Interface *this_00;
  code *pcVar3;
  ScenarioEditor *pSVar4;
  code *pcVar5;
  
  pcVar5 = (long long int (*)())(util__DelegateFactory_class_ScenarioEditor_void___MethodCaller__private__void___thiscall_ScenarioEditor__TearDownScreen_void);
  pcVar3 = util__DelegateFactory_L_class_ScenarioEditor_Cvoid_G___MethodCaller_L__private__void___thiscall_ScenarioEditor__BuildScenarioEditorScreen_void__G_;
  pSVar4 = this;
  this_00 = Manager__GetInterfacer(*(Manager **)this);
  DVar1.CallbackFunction = (void (*)(void *))(pcVar3);
  DVar1.Callee = this;
  DVar2.CallbackFunction = (void (*)(void *))(pcVar5);
  DVar2.Callee = pSVar4;
  Interface__NewScreen(this_00,DVar1,DVar2);
  return;
}





//==== 006f89b0 RegeneratePropertyUI ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* private: void __thiscall ScenarioEditor__RegeneratePropertyUI(void) */

void __thiscall ScenarioEditor__RegeneratePropertyUI(ScenarioEditor *this)

{
  bool bVar1;
  GameManager *pGVar2;
  DataParser *pDVar3;
  DataParser *pDVar4;
  Campaign *pCVar5;
  UIWidget *pUVar6;
  ReferenceControllerRegistry *pRVar7;
  ReferenceController *this_00;
  double dVar8;
  UIWidget *pUVar9;
  SharedPtr_L_UIWidget_G_ local_14;
  ReferenceController *local_c;
  UIWidget *local_8;
  
  if (((*(int *)(this + 0xac) == 0) ||
      (*(ReferenceController **)(this + 0xb0) == (ReferenceController *)0x0)) ||
     (bVar1 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(this + 0xb0)),
     !bVar1)) {
    dVar8 = 0.0;
  }
  else {
    if ((*(ReferenceController **)(this + 0xb0) != (ReferenceController *)0x0) &&
       (bVar1 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(this + 0xb0)),
       !bVar1)) {
      *(undefined4 *)(this + 0xac) = 0;
    }
    dVar8 = UILayout__GetScrollPosition_Percent(*(UILayout **)(this + 0xac));
  }
  pGVar2 = Manager__GetParent(*(Manager **)this);
  pDVar3 = GameManager__GetDataManager(pGVar2);
  pCVar5 = *(Campaign **)(this + 100);
  if (pCVar5 == (Campaign *)0x0) {
    pGVar2 = Manager__GetParent(*(Manager **)this);
    pDVar4 = GameManager__GetDataManager(pGVar2);
    pCVar5 = GetCurrentCampaign(pDVar4);
  }
  pUVar6 = PropertyEditor__GenerateEditor
                     ((PropertyEditor *)(this + 8),pDVar3,pCVar5,600,this,
                      util__DelegateFactory_L_ScenarioEditor_Cvoid_G___MethodCaller_L__private__void___thiscall_ScenarioEditor__RefreshCurrentLevel_void__G_
                      ,this,util__DelegateFactory_L_ScenarioEditor_Cvoid_G___MethodCaller_L__private__void___thiscall_ScenarioEditor__RebuildCurrentLevel_void__G_
                      ,0,0,this,
                      util__DelegateFactory_L_ScenarioEditor_Cutil__Str_L_char_G__Cdouble_Cutil__Str_L_char_G___G___MethodCallerConst_L__private__class_util__Str_L_char_G____thiscall_ScenarioEditor__GetDecimalPrinting_double_Cclass_util__Str_L_char_G__const__G_
                      ,0,0,0,0);
  if (pUVar6 == (UIWidget *)0x0) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
  }
  pUVar9 = pUVar6;
  pRVar7 = util__ReferenceControllerRegistry__Get();
  this_00 = util__ReferenceControllerRegistry__Register(pRVar7,pUVar9);
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_00);
  }
  *(uint32_t *)&local_c = (uint32_t)(uintptr_t)(*(ReferenceController **)(this + 0x88));
  local_8 = *(UIWidget **)(this + 0x84);
  if (((local_c != (ReferenceController *)0x0) &&
      (util__ReferenceController__AddWeakReference(local_c), local_c != (ReferenceController *)0x0))
     && (bVar1 = util__ReferenceController__IsDataStillValid(local_c), !bVar1)) {
    local_8 = (UIWidget *)0x0;
  }
  UIWidget__PurgeChildWidgets(local_8);
  local_14.Controller = this_00;
  local_14.Pointer = pUVar6;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_00);
  }
  util__Darray_L_util__SharedPtr_L_UIWidget_G___G___Add(&local_8->ChildWidgets,&local_14);
  if ((this_00 != (ReferenceController *)0x0) &&
     (bVar1 = util__ReferenceController__ReleaseStrongReference(this_00), bVar1)) {
    if (pUVar6 != (UIWidget *)0x0) {
      (**(code **)(pUVar6->_pad_0x0_0 + 4))();
    }
    pUVar9 = pUVar6;
    pRVar7 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar7,pUVar9);
  }
  UIWidget__ProperlyParentChildWidgets();
  if ((this_00 != (ReferenceController *)0x0) &&
     (bVar1 = util__ReferenceController__ReleaseStrongReference(this_00), bVar1)) {
    if (pUVar6 != (UIWidget *)0x0) {
      (**(code **)(pUVar6->_pad_0x0_0 + 4))();
    }
    pRVar7 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar7,pUVar6);
  }
  if (local_c != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_c);
  }
  if (((*(int *)(this + 0xac) != 0) &&
      (*(ReferenceController **)(this + 0xb0) != (ReferenceController *)0x0)) &&
     (bVar1 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(this + 0xb0)),
     bVar1)) {
    if ((*(ReferenceController **)(this + 0xb0) != (ReferenceController *)0x0) &&
       (bVar1 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(this + 0xb0)),
       !bVar1)) {
      *(undefined4 *)(this + 0xac) = 0;
    }
    UILayout__Scroll(*(UILayout **)(this + 0xac),dVar8);
  }
  return;
}

//==== 006f8be0 RemoveAt_006f8be0 ====


/* public: bool  util__Darray_L_structLevel_P_G___RemoveAt(int const &) */

bool __thiscall util__Darray_struct_Level____RemoveAt(Darray_L_struct_Level_P_G_ *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = (**(code **)(*(int *)this + 0xc))();
  if (iVar2 != 0) {
    iVar3 = (**(code **)(*(int *)this + 0xc))();
    iVar2 = *param_1;
    if (((iVar2 < 1) && (iVar3 + -1 <= iVar2)) || ((iVar2 <= iVar3 + -1 && (-1 < iVar2)))) {
      puVar4 = *(undefined4 **)(this + 4);
      bVar1 = false;
      iVar2 = 0;
      if (puVar4 != puVar4 + *(int *)(this + 8)) {
        do {
          if (bVar1) {
            puVar4[-1] = *puVar4;
          }
          else {
            bVar1 = false;
            if (iVar2 == *param_1) {
              bVar1 = true;
            }
          }
          puVar4 = puVar4 + 1;
          iVar2 = iVar2 + 1;
        } while (puVar4 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 4));
        if (bVar1) {
          param_1 = (int *)(*(int *)(this + 8) + -1);
          Darray_L_class_util__Reflectable_P_G___SetSize
                    ((Darray_L_class_util__Reflectable_P_G_ *)this,(int *)&param_1);
          return true;
        }
      }
    }
  }
  return false;
}





//==== 006f8f00 Render_006f8f00 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void __thiscall LevelEditorBody__Render(void)const  */

void __thiscall LevelEditorBody__Render(LevelEditorBody *this)

{
  undefined8 stack0xfffffffc;
  Reflectable *this_00;
  Vec4_L_double_G_ VVar1;
  Vec4_L_double_G_ VVar2;
  Quaternion_L_double_G_ QVar3;
  Quaternion_L_double_G_ QVar4;
  Vec4_L_double_G_ VVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  PlanetShader *pPVar10;
  CelestialBody *pCVar11;
  Vec3_L_double_G_ *pVVar12;
  Maybe_L_double_G_ *pMVar13;
  PostProcessor *pPVar14;
  Reflectable *pRVar15;
  float10 fVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  Vec3_L_double_G_ local_cc;
  Maybe_L_double_G_ local_b4;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  Vec3_L_double_G_ local_90;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_55;
  Vec3_L_double_G_ local_54;
  Vec3_L_double_G_ local_3c;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  double local_14;
  TransformStack local_a;
  ShaderStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (*(CelestialBody **)(this + 0x14) != (CelestialBody *)0x0) {
    ScenarioEditor__GetBodyPosition_km(&local_90,*(CelestialBody **)(this + 0x14));
    pCVar11 = *(CelestialBody **)(this + 0x14);
    VVar1.Y = local_90.Y;
    VVar1.X = local_90.X;
    VVar1.Z = local_90.Z;
    VVar1.Z = SUB84(local_90.Z,0);
    VVar1.W = (int)((ulonglong)local_90.Z >> 0x20);
    local_60 = Graphics__GetWorldRadiusFromScreenRadius((*(Vec4_L_double_G_ *)&(VVar1)),2.0);
    local_68 = CelestialBody__GetVisualRadius_km(pCVar11);
    if ((local_60 <= local_68) ||
       (bVar6 = CelestialBody__IsLuminousBody(*(CelestialBody **)(this + 0x14)), bVar6)) {
      Graphics__TransformStack__TransformStack(&local_a,Style__Default);
      VVar5.Y = local_90.Y;
      VVar5.X = local_90.X;
      VVar5.Z = local_90.Z;
      VVar5.Z = SUB84(local_90.Z,0);
      VVar5.W = (int)((ulonglong)local_90.Z >> 0x20);
      Graphics__Translate(VVar5);
      dVar22 = CelestialBody__GetRadius_km(*(CelestialBody **)(this + 0x14));
      VVar2.Y = local_90.Y;
      VVar2.X = local_90.X;
      VVar2.Z = local_90.Z;
      VVar2.Z = SUB84(local_90.Z,0);
      VVar2.W = (int)((ulonglong)local_90.Z >> 0x20);
      local_68 = Graphics__GetScreenRadiusFromWorldRadius((*(Vec4_L_double_G_ *)&(VVar2)),dVar22);
      iVar7 = util__Abs((int *)((int)Graphics__GlobalState.ViewMatrix.Data + 0x7c));
      iVar8 = util__Abs((int *)(Graphics__GlobalState.ViewMatrix.Data + 0xf));
      iVar9 = (*(undefined4 *)((char *)&(Graphics__GlobalState.ViewMatrix.Data[0xf]) + 0));
      if (iVar7 < iVar8) {
        iVar9 = (*(undefined4 *)((char *)&(Graphics__GlobalState.ViewMatrix.Data[0xf]) + 4));
      }
      local_60 = *(double *)(*(int *)(this + 0x14) + 0x118);
      uVar20 = SUB84(local_60,0);
      uVar21 = (undefined4)((ulonglong)local_60 >> 0x20);
      this_00 = *(Reflectable **)(*(int *)(*(int *)(this + 0x10) + 4) + 100);
      (*(uint64_t*)((char*)&(local_78)+8)) = local_60;
      local_a4 = CONCAT31((*(uint24_t*)((char*)&(local_a4)+1)),(double)(iVar9 / 2) < local_68 * 4.0);
      if (this_00 == (Reflectable *)0x0) {
        pRVar15 = (Reflectable *)0x0;
      }
      else {
        bVar6 = util__Reflectable__IsType_struct_Level(this_00);
        uVar20 = SUB84(local_60,0);
        uVar21 = (undefined4)((ulonglong)local_60 >> 0x20);
        pRVar15 = (Reflectable *)0x0;
        if (bVar6) {
          pRVar15 = this_00;
        }
      }
      dVar22 = 0.0;
      if (0.0 <= (double)CONCAT44(uVar21,uVar20) && (double)CONCAT44(uVar21,uVar20) != 0.0) {
        local_68 = *(double *)&pRVar15[3].Name.Capacity * 31557600.0 +
                   (double)CONCAT44(uVar21,uVar20) * 0.5;
        fVar16 = (float10)__CIfmod();
        (*(uint64_t*)((char*)&(local_78)+8)) = (double)fVar16;
        dVar22 = ((double)fVar16 / local_60) * 6.283185307179586;
      }
      local_60 = dVar22;
      FixedOrbit__GetPlanarNormal(&local_3c);
      FixedOrbit__GetEquinoxNormal(&local_54);
      local_a0 = local_54.X;
      uStack_9c = local_54.Y;
      uStack_98 = (double)CONCAT44(local_54.Z,local_54.Y);
      (*(uint64_t*)((char*)&(local_78)+8)) = local_54.Z;
      local_68 = CelestialBody__GetAbsoluteAxialTilt_radians(*(CelestialBody **)(this + 0x14));
      local_68 = local_68 * 0.5;
      (*(uint64_t*)((char*)&(auVar18)+8)) = 0;
      (*(uint64_t*)&(auVar18)) = local_68;
      libm_sse2_sin_precise(0.0);
      dVar17 = (*(uint64_t*)&(auVar18));
      (*(uint64_t*)((char*)&(local_b4)+8)) = (*(uint64_t*)((char*)&(auVar18)+8));
      local_b4.Data = dVar17 * (double)CONCAT44(uStack_9c,local_a0);
      dVar22 = dVar17 * (double)(*(uint64_t*)((char*)&(local_78)+8));
      uStack_98 = dVar17 * uStack_98;
      (*(uint32_t*)((char*)&(local_78)+8)) = (*(uint32_t*)((char*)&(auVar18)+8));
      (*(uint64_t*)&(local_78)) = dVar22;
      (*(uint32_t *)((char *)&(local_78) + 12)) = (*(uint32_t *)((char *)&(auVar18) + 12));
      uVar20 = (undefined4)local_68;
      uVar21 = (*(uint32_t*)((char*)&(local_68)+4));
      libm_sse2_cos_precise(0.0);
      QVar3.Y = SUB84(uStack_98,0);
      QVar3.X = local_b4.Data;
      QVar3.Z = (int)((ulonglong)uStack_98 >> 0x20);
      QVar3.Z = (*(uint32_t*)&(local_78));
      QVar3.W = (*(uint32_t*)((char*)&(local_78)+4));
      QVar3.W = uVar20;
      (*(uint32_t *)((char *)&(QVar3.W) + 4)) = uVar21;
      Graphics__Rotate(QVar3);
      (*(uint64_t*)&(auVar19)) = local_60 * 0.5;
      (*(uint64_t*)((char*)&(auVar19)+8)) = 0;
      local_60 = (*(uint64_t*)&(auVar19));
      libm_sse2_sin_precise(0.0);
      dVar22 = (*(uint64_t*)&(auVar19));
      (*(uint64_t*)((char*)&(local_b4)+8)) = (*(uint64_t*)((char*)&(auVar19)+8));
      local_b4.Data = dVar22 * local_3c.X;
      uStack_98 = dVar22 * local_3c.Y;
      (*(uint32_t*)((char*)&(local_78)+8)) = (*(uint32_t*)((char*)&(auVar19)+8));
      (*(uint64_t*)&(local_78)) = dVar22 * local_3c.Z;
      (*(uint32_t *)((char *)&(local_78) + 12)) = (*(uint32_t *)((char *)&(auVar19) + 12));
      uVar20 = (undefined4)local_60;
      uVar21 = (*(uint32_t*)((char*)&(local_60)+4));
      libm_sse2_cos_precise(0.0);
      QVar4.Y = SUB84(uStack_98,0);
      QVar4.X = local_b4.Data;
      QVar4.Z = (int)((ulonglong)uStack_98 >> 0x20);
      QVar4.Z = (*(uint32_t*)&(local_78));
      QVar4.W = (*(uint32_t*)((char*)&(local_78)+4));
      QVar4.W = uVar20;
      (*(uint32_t *)((char *)&(QVar4.W) + 4)) = uVar21;
      Graphics__Rotate(QVar4);
      pPVar10 = PlanetShader__GetStatic();
      Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pPVar10);
      fVar16 = (float10)(**(code **)(*(int *)**(undefined4 **)(*(int *)(this + 0x10) + 4) + 0x74))()
      ;
      uStack_98 = (double)fVar16;
      pPVar10 = PlanetShader__GetStatic();
      (**(code **)(pPVar10->_pad_0x0_0 + 0xec))(&uStack_98);
      pCVar11 = ScenarioEditor__GetBrightestBody(*(ScenarioEditor **)(*(int *)(this + 0x10) + 4));
      pVVar12 = (Vec3_L_double_G_ *)(uintptr_t)(ScenarioEditor__GetBodyPosition_km(&local_cc,pCVar11));
      local_68 = local_90.Y - pVVar12->Y;
      local_90.X = local_90.X - pVVar12->X;
      local_60 = local_90.Z - pVVar12->Z;
      (*(uint64_t*)((char*)&(local_78)+8)) = local_90.X;
      uStack_98 = local_68 * local_68 + local_90.X * local_90.X + local_60 * local_60;
      pMVar13 = util__Sqrt(&local_b4,(double *)&uStack_98);
      if (pMVar13->IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      local_90.Z = 0.0;
      if (((((double)(*(uint64_t*)((char*)&(local_78)+8)) == 0.0) && (local_68 == 0.0)) && (local_60 == 0.0)) ||
         (pMVar13->Data == 0.0)) {
        local_90.X = 0.0;
        local_90.Y = 0.0;
      }
      else {
        local_90.Z = 1.0 / pMVar13->Data;
        local_90.X = local_90.Z * (double)(*(uint64_t*)((char*)&(local_78)+8));
        local_90.Y = local_90.Z * local_68;
        local_90.Z = local_90.Z * local_60;
      }
      local_24 = local_90.X;
      uStack_20 = local_90.Y;
      uStack_1c = local_90.Y;
      uStack_18 = local_90.Z;
      local_14 = local_90.Z;
      pPVar10 = PlanetShader__GetStatic();
      (**(code **)(pPVar10->_pad_0x0_0 + 0xc0))(&local_24);
      local_55 = 0;
      pPVar10 = PlanetShader__GetStatic();
      (**(code **)(pPVar10->_pad_0x0_0 + 200))(&local_55);
      uVar20 = local_a4;
      pPVar14 = GameManager__GetPostProcessor(*(GameManager **)(this + 4));
      CelestialBody__RenderModel(*(CelestialBody **)(this + 0x14),pPVar14,SUB41(uVar20,0));
      Graphics__ShaderStack___ShaderStack(&local_9);
      Graphics__TransformStack___TransformStack(&local_a);
    }
  }
  return;
}

//==== 006f93d0 RenderTransparent_006f93d0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void __thiscall LevelEditorBody__RenderTransparent(void)const  */

void __thiscall LevelEditorBody__RenderTransparent(LevelEditorBody *this)

{
  undefined8 stack0xfffffffc;
  Reflectable *this_00;
  Vec4_L_double_G_ VVar1;
  Quaternion_L_double_G_ QVar2;
  Quaternion_L_double_G_ QVar3;
  Vec4_L_double_G_ VVar4;
  bool bVar5;
  RingsShader *pRVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  WorldLight *pWVar10;
  CelestialBody *pCVar11;
  Vec3_L_double_G_ *pVVar12;
  Maybe_L_double_G_ *pMVar13;
  PostProcessor *pPVar14;
  Reflectable *pRVar15;
  float10 fVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  int iVar21;
  undefined1 auVar20 [16];
  undefined4 uVar22;
  WorldLight local_1dc;
  WorldLight local_174;
  Vec3_L_double_G_ local_10c;
  undefined1 local_f4 [16];
  double dStack_e4;
  undefined1 local_dc [12];
  int iStack_d0;
  undefined **local_cc;
  void *pvStack_c8;
  undefined8 uStack_c4;
  undefined8 local_bc;
  undefined **local_b4;
  void *pvStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  double local_a4;
  Vec3_L_double_G_ local_9c;
  WorldLight local_84;
  undefined1 local_1c [17];
  CullStack local_b;
  TransformStack local_a;
  ShaderStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_bc = (double)(ulonglong)(uint)local_bc;
  if ((*(int *)(this + 0x14) != 0) && (*(char *)(*(int *)(this + 0x14) + 0x1c0) != '\0')) {
    Graphics__CullStack__CullStack(&local_b,Style__Default);
    ScenarioEditor__GetBodyPosition_km(&local_10c,*(CelestialBody **)(this + 0x14));
    pCVar11 = *(CelestialBody **)(this + 0x14);
    VVar1.Y = local_10c.Y;
    VVar1.X = local_10c.X;
    VVar1.Y = local_10c.Y;
    VVar1.Z = local_10c.Z;
    VVar1.Z = SUB84(local_10c.Z,0);
    VVar1.W = (int)((ulonglong)local_10c.Z >> 0x20);
    local_bc = Graphics__GetWorldRadiusFromScreenRadius((*(Vec4_L_double_G_ *)&(VVar1)),2.0);
    join_0x00001100_8_ = CelestialBody__GetVisualRadius_km(pCVar11);
    if ((local_bc <= join_0x00001100_8_) ||
       (bVar5 = CelestialBody__IsLuminousBody(*(CelestialBody **)(this + 0x14)), bVar5)) {
      Graphics__TransformStack__TransformStack(&local_a,Style__Default);
      VVar4.Y = local_10c.Y;
      VVar4.X = local_10c.X;
      VVar4.Y = local_10c.Y;
      VVar4.Z = local_10c.Z;
      VVar4.Z = SUB84(local_10c.Z,0);
      VVar4.W = (int)((ulonglong)local_10c.Z >> 0x20);
      Graphics__Translate(VVar4);
      local_bc = *(double *)(*(int *)(this + 0x14) + 0x118);
      uVar9 = SUB84(local_bc,0);
      uVar22 = (undefined4)((ulonglong)local_bc >> 0x20);
      (*(uint64_t*)((char*)&(local_1c)+8)) = local_bc;
      this_00 = *(Reflectable **)(*(int *)(*(int *)(this + 0x10) + 4) + 100);
      if (this_00 == (Reflectable *)0x0) {
        pRVar15 = (Reflectable *)0x0;
      }
      else {
        bVar5 = util__Reflectable__IsType_struct_Level(this_00);
        uVar9 = SUB84(local_bc,0);
        uVar22 = (undefined4)((ulonglong)local_bc >> 0x20);
        pRVar15 = (Reflectable *)0x0;
        if (bVar5) {
          pRVar15 = this_00;
        }
      }
      dVar17 = 0.0;
      if (0.0 <= (double)CONCAT44(uVar22,uVar9) && (double)CONCAT44(uVar22,uVar9) != 0.0) {
        unique0x100002de =
             *(double *)&pRVar15[3].Name.Capacity * 31557600.0 +
             (double)CONCAT44(uVar22,uVar9) * 0.5;
        fVar16 = (float10)__CIfmod();
        (*(uint64_t*)((char*)&(local_1c)+8)) = (double)fVar16;
        dVar17 = ((double)fVar16 / local_bc) * 6.283185307179586;
      }
      local_bc = dVar17;
      FixedOrbit__GetPlanarNormal(&local_9c);
      FixedOrbit__GetEquinoxNormal((Vec3_L_double_G_ *)&local_b4);
      local_cc = local_b4;
      pvStack_c8 = pvStack_b0;
      uStack_c4 = (double)CONCAT44(uStack_a8,uStack_ac);
      (*(uint64_t*)((char*)&(local_1c)+8)) = local_a4;
      join_0x00001100_8_ =
           CelestialBody__GetAbsoluteAxialTilt_radians(*(CelestialBody **)(this + 0x14));
      unique0x1000055c = join_0x00001100_8_ * 0.5;
      (*(uint64_t*)((char*)&(auVar19)+8)) = 0;
      (*(uint64_t*)&(auVar19)) = unique0x1000055c;
      libm_sse2_sin_precise(0.0);
      dVar18 = (*(uint64_t*)&(auVar19));
      dStack_e4 = (*(uint64_t*)((char*)&(auVar19)+8));
      (*(uint64_t*)((char*)&(local_f4)+8)) = dVar18 * (double)CONCAT44(pvStack_c8,local_cc);
      dVar17 = dVar18 * (double)(*(uint64_t*)((char*)&(local_1c)+8));
      uStack_c4 = dVar18 * uStack_c4;
      (*(uint32_t*)((char*)&(local_1c)+8)) = (*(uint32_t*)((char*)&(auVar19)+8));
      (*(uint64_t*)&(local_1c)) = dVar17;
      (*(uint32_t *)((char *)&(local_1c) + 12)) = (*(uint32_t *)((char *)&(auVar19) + 12));
      iVar8 = (*(uint32_t*)((char*)&(local_dc)+8));
      iVar21 = iStack_d0;
      libm_sse2_cos_precise(0.0);
      QVar2.Y = SUB84(uStack_c4,0);
      QVar2.X = (double)(*(uint64_t*)((char*)&(local_f4)+8));
      QVar2.Z = (int)((ulonglong)uStack_c4 >> 0x20);
      QVar2.Z = (*(uint32_t*)&(local_1c));
      QVar2.W = (*(uint32_t*)((char*)&(local_1c)+4));
      QVar2.W = iVar8;
      (*(uint32_t *)((char *)&(QVar2.W) + 4)) = iVar21;
      Graphics__Rotate(QVar2);
      (*(uint64_t*)&(auVar20)) = local_bc * 0.5;
      (*(uint64_t*)((char*)&(auVar20)+8)) = 0;
      local_bc = (*(uint64_t*)&(auVar20));
      libm_sse2_sin_precise(0.0);
      dVar17 = (*(uint64_t*)&(auVar20));
      dStack_e4 = (*(uint64_t*)((char*)&(auVar20)+8));
      (*(uint64_t*)((char*)&(local_f4)+8)) = dVar17 * local_9c.X;
      uStack_c4 = dVar17 * local_9c.Y;
      (*(uint32_t*)((char*)&(local_1c)+8)) = (*(uint32_t*)((char*)&(auVar20)+8));
      (*(uint64_t*)&(local_1c)) = dVar17 * local_9c.Z;
      (*(uint32_t *)((char *)&(local_1c) + 12)) = (*(uint32_t *)((char *)&(auVar20) + 12));
      uVar9 = (uint)local_bc;
      uVar22 = (*(uint32_t*)((char*)&(local_bc)+4));
      libm_sse2_cos_precise(0.0);
      QVar3.Y = SUB84(uStack_c4,0);
      QVar3.X = (double)(*(uint64_t*)((char*)&(local_f4)+8));
      QVar3.Z = (int)((ulonglong)uStack_c4 >> 0x20);
      QVar3.Z = (*(uint32_t*)&(local_1c));
      QVar3.W = (*(uint32_t*)((char*)&(local_1c)+4));
      QVar3.W = uVar9;
      (*(uint32_t *)((char *)&(QVar3.W) + 4)) = uVar22;
      Graphics__Rotate(QVar3);
      pRVar6 = RingsShader__GetStatic();
      Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pRVar6);
      fVar16 = (float10)(**(code **)(*(int *)**(undefined4 **)(*(int *)(this + 0x10) + 4) + 0x74))()
      ;
      uStack_c4 = (double)fVar16;
      pRVar6 = RingsShader__GetStatic();
      (**(code **)(pRVar6->_pad_0x0_0 + 0x88))(&uStack_c4);
      piVar7 = (int *)(**(code **)(**(int **)(this + 0xc) + 0x70))(&local_cc);
      iVar8 = (**(code **)(uintptr_t)(*piVar7 + 0xc))();
      if (iVar8 < 1) {
        local_174.IsMainLight = false;
        local_174.RelativePosition_km.X = 0;
        local_174.RelativePosition_km.Y = 0;
        local_174.RelativePosition_km.Y = 0;
        local_174.RelativePosition_km.Z = 0;
        pWVar10 = &local_174;
        local_174.RelativePosition_km.Z = 0;
        local_174.RelativePosition_km.W = 0;
        local_174.Color.X = 0;
        local_174.Color.Y = 0;
        local_174.Color.Y = 0;
        local_174.Color.Z = 0;
        local_174.Color.Z = 0;
        local_174.Color.W = 0;
        local_174.InitialRadius_km = 0;
        (*(uint32_t *)((char *)&(local_174.InitialRadius_km) + 4)) = 0;
        local_174.Power_W = 0;
        (*(uint32_t *)((char *)&(local_174.Power_W) + 4)) = 0;
        local_174.ConeDirection.X = 0;
        local_174.ConeDirection.Y = 0;
        local_174.ConeDirection.Y = 0;
        local_174.ConeDirection.Z = 0;
        local_174.ConeDirection.Z = 0;
        local_174.ConeDirection.W = 0;
        local_174.ConeHalfAngle_radians = 0;
        (*(uint32_t *)((char *)&(local_174.ConeHalfAngle_radians) + 4)) = 0;
      }
      else {
        (*(uint40_t*)&(local_bc)) = (uint5)(uint)local_bc;
        uVar9 = (**(code **)(**(int **)(this + 0xc) + 0x70))(local_dc,(*(uint32_t*)((char*)&(local_bc)+4)));
        piVar7 = (int *)FUN_006ea7d0(local_f4 + 8,uVar9);
        pWVar10 = (WorldLight *)(**(code **)(uintptr_t)(*piVar7 + 0x20))();
        pWVar10 = (WorldLight *)WorldLight__WorldLight(&local_1dc,pWVar10);
      }
      WorldLight__WorldLight(&local_84,pWVar10);
      if (iVar8 >= 1) {
        Darray_L_WorldLight_G___dtor((Darray_L_WorldLight_G_ *)(local_f4 + 8));
        Darray_L_WorldLight_G___dtor((Darray_L_WorldLight_G_ *)local_dc);
      }
      local_cc = &vftable_168;
      if (pvStack_c8 != (void *)0x0) {
        port_op_delete(pvStack_c8);
      }
      pCVar11 = ScenarioEditor__GetBrightestBody(*(ScenarioEditor **)(*(int *)(this + 0x10) + 4));
      pVVar12 = (Vec3_L_double_G_ *)(uintptr_t)(ScenarioEditor__GetBodyPosition_km((Vec3_L_double_G_ *)local_f4,pCVar11));
      dVar17 = (double)CONCAT44(local_10c.Y,local_10c.X) - pVVar12->X;
      dVar18 = (double)CONCAT44(local_10c.Z,local_10c.Y) - pVVar12->Y;
      local_10c.Z = local_10c.Z - pVVar12->Z;
      uStack_c4 = dVar17 * dVar17 + dVar18 * dVar18 + local_10c.Z * local_10c.Z;
      pMVar13 = util__Sqrt((Maybe_L_double_G_ *)(local_f4 + 8),(double *)&uStack_c4);
      if (pMVar13->IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      (*(uint64_t*)((char*)&(local_1c)+8)) = 0.0;
      if (0.0 < pMVar13->Data) {
        dVar17 = pMVar13->Data * 1000.0;
        (*(uint64_t*)((char*)&(local_1c)+8)) = local_84.Power_W / (dVar17 * dVar17 * 12.566370614359172);
      }
      pRVar6 = RingsShader__GetStatic();
      (**(code **)(pRVar6->_pad_0x0_0 + 100))(&local_84.Color);
      pRVar6 = RingsShader__GetStatic();
      (**(code **)(pRVar6->_pad_0x0_0 + 0x6c))(local_1c + 8);
      pPVar14 = GameManager__GetPostProcessor(*(GameManager **)(this + 4));
      CelestialBody__RenderTransparent(*(CelestialBody **)(this + 0x14),pPVar14);
      Graphics__ShaderStack___ShaderStack(&local_9);
      Graphics__TransformStack___TransformStack(&local_a);
    }
    CullStack__dtor(&local_b);
  }
  return;
}

//==== 006f98e0 RequestDeleteObject ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* private: void __thiscall ScenarioEditor__RequestDeleteObject(void) */

void __thiscall ScenarioEditor__RequestDeleteObject(ScenarioEditor *this)

{
  Delegate_L_void_G_ DVar1;
  Delegate_L_void_G_ DVar2;
  GameManager *pGVar3;
  DataParser *pDVar4;
  Campaign *pCVar5;
  undefined4 *puVar6;
  LocStr *pLVar7;
  Str_L_char_G_ *pSVar8;
  Str_L_char_G_ *pSVar9;
  Str_L_char_G_ *pSVar10;
  undefined1 *puVar11;
  char *pcVar12;
  ScenarioEditor *pSVar13;
  code *pcVar14;
  void *pvVar15;
  _func___cdecl_void_void_ptr *p_Var16;
  void *local_ac [3];
  void *local_a0;
  void *local_94 [3];
  void *local_88;
  void *local_7c [3];
  void *local_70;
  Str_L_char_G_ local_64;
  void *local_58 [3];
  Str_L_char_G_ local_4c;
  Str_L_char_G_ local_40;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  Str_L_char_G_ local_10;
  
  if (*(int *)(this + 100) == 0) {
    pGVar3 = Manager__GetParent(*(Manager **)this);
    pDVar4 = GameManager__GetDataManager(pGVar3);
    pCVar5 = GetCurrentCampaign(pDVar4);
    if (pCVar5 == (Campaign *)0x0) {
      return;
    }
  }
  util__Str_char___Str_char(&local_64,"Cancel");
  util__Str_char___Str_char(&local_40,"Delete");
  util__Str_char___Str_char(&local_34,"AreYouSureYouWishToDelete Message");
  pCVar5 = *(Campaign **)(this + 100);
  if (pCVar5 == (Campaign *)0x0) {
    pGVar3 = Manager__GetParent(*(Manager **)this);
    pDVar4 = GameManager__GetDataManager(pGVar3);
    pCVar5 = GetCurrentCampaign(pDVar4);
  }
  local_28.Data = (char *)0x0;
  local_28.Capacity = 0;
  local_28.Length = 0;
  local_1c.Data = (char *)0x0;
  local_1c.Capacity = 0;
  local_1c.Length = 0;
  puVar6 = (undefined4 *)(**(code **)(pCVar5->_pad_0x0_0 + 0x48))(local_58);
  if ((int)puVar6[1] < 1) {
    puVar11 = (undefined1 *)(&cde_l2_0b2b1c9f_NullString);
  }
  else {
    puVar11 = (undefined1 *)*puVar6;
  }
  local_10.Data = (char *)0x0;
  local_10.Capacity = 0;
  local_10.Length = 0;
  pLVar7 = (LocStr *)util__LocStr__LocStr((LocStr *)local_7c,&local_34,&local_10);
  pSVar8 = util__LocStr__operator__o3(pLVar7);
  if (pSVar8->Capacity < 1) {
    pcVar12 = "";
  }
  else {
    pcVar12 = pSVar8->Data;
  }
  pLVar7 = (LocStr *)util__LocStr__LocStr((LocStr *)local_ac,&local_64,&local_28);
  pSVar8 = util__LocStr__operator__o3(pLVar7);
  pLVar7 = (LocStr *)util__LocStr__LocStr((LocStr *)local_94,&local_40,&local_1c);
  pSVar9 = util__LocStr__operator__o3(pLVar7);
  p_Var16 = (_func___cdecl_void_void_ptr *)0x0;
  pvVar15 = (void *)0x0;
  pcVar14 = (long long int (*)())(util__DelegateFactory_L_ScenarioEditor_Cvoid_G___MethodCaller_L__private__void___thiscall_ScenarioEditor__DeleteObject_void__G_);
  pSVar13 = this;
  pSVar10 = util__Printf(&local_4c,(wchar_t*)(pcVar12),puVar11);
  DVar1.CallbackFunction = (void (*)(void *))(pcVar14);
  DVar1.Callee = pSVar13;
  DVar2.CallbackFunction = p_Var16;
  DVar2.Callee = pvVar15;
  ModalDialog__Open__o5((ModalDialog *)(this + 0x68),pSVar10,DVar1,DVar2,pSVar9,pSVar8);
  if (local_4c.Data != (char *)0x0) {
    port_op_delete(local_4c.Data);
    local_4c.Data = (char *)0x0;
  }
  if (local_70 != (void *)0x0) {
    port_op_delete(local_70);
    local_70 = (void *)0x0;
  }
  if (local_7c[0] != (void *)0x0) {
    port_op_delete(local_7c[0]);
    local_7c[0] = (void *)0x0;
  }
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
    local_10.Data = (char *)0x0;
  }
  if (local_58[0] != (void *)0x0) {
    port_op_delete(local_58[0]);
    local_58[0] = (void *)0x0;
  }
  if (local_88 != (void *)0x0) {
    port_op_delete(local_88);
    local_88 = (void *)0x0;
  }
  if (local_94[0] != (void *)0x0) {
    port_op_delete(local_94[0]);
    local_94[0] = (void *)0x0;
  }
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
    local_1c.Data = (char *)0x0;
  }
  if (local_a0 != (void *)0x0) {
    port_op_delete(local_a0);
    local_a0 = (void *)0x0;
  }
  if (local_ac[0] != (void *)0x0) {
    port_op_delete(local_ac[0]);
    local_ac[0] = (void *)0x0;
  }
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
  if (local_64.Data != (char *)0x0) {
    port_op_delete(local_64.Data);
  }
  return;
}

//==== 006f9b90 SaveAndBack_006f9b90 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall ScenarioEditor__SaveAndBack(void) */

void __thiscall ScenarioEditor__SaveAndBack(ScenarioEditor *this)

{
  Reflectable *this_00;
  Level *this_01;
  bool bVar1;
  OptionsSection__Interface *this_02;
  MetagameManager *this_03;
  Reflectable *pRVar2;
  Level *this_04;
  int iVar3;
  
  MainManager__PlayTitleMusic(*(MainManager **)this);
  UpdateListBoxUI(this);
  this_00 = *(Reflectable **)(this + 100);
  if (this_00 != (Reflectable *)0x0) {
    bVar1 = util__Reflectable__IsType_L_struct_Level_G_(this_00);
    pRVar2 = (Reflectable *)0x0;
    if (bVar1) {
      pRVar2 = this_00;
    }
    if (pRVar2 != (Reflectable *)0x0) {
      this_01 = *(Level **)(this + 100);
      if (this_01 == (Level *)0x0) {
        this_04 = (Level *)0x0;
      }
      else {
        bVar1 = util__Reflectable__IsType_L_struct_Level_G_((Reflectable *)this_01);
        this_04 = (Level *)0x0;
        if (bVar1) {
          this_04 = this_01;
        }
      }
      Level__CacheNecessaryLimits(this_04);
    }
  }
  this_03 = MainManager__GetMetagame(*(MainManager **)this);
  MetagameManager__SaveAllDesigns(this_03);
  iVar3 = 1;
  this_02 = Manager__GetInterfacer(*(Manager **)this);
  Interface__ExitScreen(this_02,iVar3);
  return;
}





//==== 006f9bf0 Select_006f9bf0 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall LevelEditor__Select(class util__WeakPtr_L_classLevelEditorBody_G_) */

void __thiscall LevelEditor__Select(LevelEditor *this,int param_2,ReferenceController *param_3)

{
  Vec4_L_double_G_ VVar1;
  bool bVar2;
  Vec3_L_double_G_ *pVVar3;
  CameraManager *pCVar4;
  double dVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  Vec3_L_double_G_ *__return_storage_ptr__;
  uint uVar9;
  Vec3_L_double_G_ VStack_3c;
  Vec3_L_double_G_ VStack_24;
  ReferenceController *pRStack_c;
  int iStack_8;
  
  iStack_8 = param_2;
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_3);
  }
  pRStack_c = *(ReferenceController **)(this + 0x84);
  *(int *)(this + 0x80) = iStack_8;
  *(ReferenceController **)(this + 0x84) = param_3;
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_3);
  }
  if (pRStack_c != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRStack_c);
  }
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  if (((param_2 != 0) && (param_3 != (ReferenceController *)0x0)) &&
     (bVar2 = util__ReferenceController__IsDataStillValid(param_3), bVar2)) {
    *(undefined4 *)(this + 0x68) = 0;
    *(undefined4 *)(this + 0x6c) = 0;
    *(undefined4 *)(this + 0x70) = 0;
    *(undefined4 *)(this + 0x74) = 0;
    *(undefined8 *)(this + 0x78) = 0;
    if ((param_3 != (ReferenceController *)0x0) &&
       (bVar2 = util__ReferenceController__IsDataStillValid(param_3), !bVar2)) {
      param_2 = 0;
    }
    if (*(CelestialBody **)(param_2 + 0x14) == (CelestialBody *)0x0) {
      pVVar3 = (Vec3_L_double_G_ *)(uintptr_t)(ScenarioEditor__GetFleetPosition_km
                         (*(ScenarioEditor **)(*(int *)(param_2 + 0x10) + 4),&VStack_24,
                          *(StartingFleet **)(param_2 + 0x18)));
    }
    else {
      pVVar3 = (Vec3_L_double_G_ *)(uintptr_t)(ScenarioEditor__GetBodyPosition_km
                         (*(ScenarioEditor **)(*(int *)(param_2 + 0x10) + 4),&VStack_3c,
                          *(CelestialBody **)(param_2 + 0x14)));
    }
    uVar7 = *(uint *)((int)&pVVar3->X + 4);
    uVar6 = *(undefined4 *)&pVVar3->Y;
    uVar9 = *(uint *)((int)&pVVar3->Y + 4);
    dVar5 = pVVar3->Z;
    __return_storage_ptr__ = &VStack_24;
    *(undefined4 *)(this + 0x68) = *(undefined4 *)&pVVar3->X;
    *(uint *)(this + 0x6c) = uVar7 ^ 0x80000000;
    *(undefined4 *)(this + 0x70) = uVar6;
    *(uint *)(this + 0x74) = uVar9 ^ 0x80000000;
    *(double *)(this + 0x78) = -dVar5;
    pCVar4 = Manager__GetCameras(*(Manager **)this);
    pVVar3 = CameraManager__GetCameraCenter(pCVar4,__return_storage_ptr__);
    dVar5 = -pVVar3->X;
    uVar7 = (uint)((ulonglong)pVVar3->Y >> 0x20) ^ 0x80000000;
    uVar9 = (uint)((ulonglong)pVVar3->Z >> 0x20) ^ 0x80000000;
    uVar6 = SUB84(pVVar3->Y,0);
    uVar8 = SUB84(pVVar3->Z,0);
    pCVar4 = Manager__GetCameras(*(Manager **)this);
    VVar1.Y = uVar6;
    VVar1.X = dVar5;
    VVar1.Z = uVar7;
    VVar1.Z = uVar8;
    VVar1.W = uVar9;
    CameraManager__AddCameraOffset(pCVar4,(*(Vec4_L_double_G_ *)&(VVar1)));
  }
  GenerateUI(this);
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  return;
}





//==== 006f9d60 SetMainBody ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: void __thiscall LevelEditor__SetMainBody(void) */

void __thiscall LevelEditor__SetMainBody(LevelEditor *this)

{
  undefined8 stack0xfffffffc;
  Reflectable *pRVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  Reflectable *pRVar7;
  int local_34;
  undefined **local_30;
  int *local_2c;
  int local_28;
  undefined4 local_24;
  undefined **local_20;
  int *local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined1 local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(uint32_t *)&local_c = 0;
  pRVar1 = *(Reflectable **)(*(int *)(this + 4) + 100);
  if (pRVar1 == (Reflectable *)0x0) {
    pRVar7 = (Reflectable *)0x0;
    *(uint32_t *)&local_c = 0;
  }
  else {
    bVar3 = util__Reflectable__IsType_struct_Level(pRVar1);
    pRVar7 = (Reflectable *)0x0;
    if (bVar3) {
      pRVar7 = pRVar1;
    }
  }
  pRVar7 = pRVar7 + 0x20;
  local_30 = (undefined **)(&vftable_2);
  local_2c = (int *)0x0;
  local_28 = 0;
  local_24 = 0;
  local_20 = (undefined **)(&vftable_2);
  *(uint32_t *)&local_1c = (uint32_t)(uintptr_t)((int *)0x0);
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  iVar4 = (**(code **)(pRVar7->_pad_0x0_0 + 0xc))();
  if (local_10 < iVar4) {
    do {
      piVar5 = (int *)(**(code **)pRVar7->_pad_0x0_0)(&local_10);
      iVar2 = local_18;
      iVar4 = local_28;
      if (*(char *)(*piVar5 + 0xf8) == '\0') {
        *(uint32_t *)&local_34 = local_28 + 1;
        util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)&local_30,&local_34)
        ;
        bVar3 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                          ((Darray_L_GraphicsResource__Type_G_ *)&local_30,iVar4);
        piVar6 = local_2c;
        iVar4 = local_28;
        if (bVar3) {
LAB_006f9e5d:
          piVar6[iVar4 + -1] = *piVar5;
        }
      }
      else {
        *(uint32_t *)&local_34 = local_18 + 1;
        util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)&local_20,&local_34)
        ;
        bVar3 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                          ((Darray_L_GraphicsResource__Type_G_ *)&local_20,iVar2);
        piVar6 = local_1c;
        iVar4 = local_18;
        if (bVar3) goto LAB_006f9e5d;
      }
      local_10 = local_10 + 1;
      iVar4 = (**(code **)(pRVar7->_pad_0x0_0 + 0xc))();
    } while (local_10 < iVar4);
  }
  if (local_18 < 1) {
    if (local_28 < 1) {
      iVar4 = 0;
    }
    else {
      iVar4 = *local_2c;
    }
  }
  else {
    iVar4 = *local_1c;
  }
  pRVar1 = *(Reflectable **)(*(int *)(this + 4) + 100);
  if (pRVar1 == (Reflectable *)0x0) {
    pRVar7 = (Reflectable *)0x0;
  }
  else {
    bVar3 = util__Reflectable__IsType_struct_Level(pRVar1);
    pRVar7 = (Reflectable *)0x0;
    if (bVar3) {
      pRVar7 = pRVar1;
    }
  }
  pRVar7[0x1f].Name.Capacity = iVar4;
  pRVar1 = *(Reflectable **)(*(int *)(this + 4) + 100);
  if (pRVar1 == (Reflectable *)0x0) {
    pRVar7 = (Reflectable *)0x0;
  }
  else {
    bVar3 = util__Reflectable__IsType_struct_Level(pRVar1);
    pRVar7 = (Reflectable *)0x0;
    if (bVar3) {
      pRVar7 = pRVar1;
    }
  }
  pRVar7[0x1f].Name.Length = iVar4;
  local_20 = (undefined **)(&vftable_2);
  if (local_1c != (int *)0x0) {
    port_op_delete(local_1c);
  }
  *(uint32_t *)&local_1c = (uint32_t)(uintptr_t)((int *)0x0);
  local_20 = (undefined **)(&vftable);
  local_30 = (undefined **)(&vftable_2);
  if (local_2c != (int *)0x0) {
    port_op_delete(local_2c);
  }
  return;
}

//==== 006f9f30 SetupLevel ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* private: void __thiscall LevelEditor__SetupLevel(void) */

void __thiscall LevelEditor__SetupLevel(LevelEditor *this)

{
  double dVar1;
  double dVar2;
  Reflectable *pRVar3;
  uint uVar4;
  bool bVar5;
  undefined4 uVar6;
  ActorHandler *this_00;
  ScenarioEditor *this_01;
  Vec3_L_double_G_ *pVVar7;
  Reflectable *pRVar8;
  LevelEditor *pLVar9;
  undefined1 auStack_1c [12];
  void *pvStack_10;
  
  (**(code **)(*(int *)(this + 0x348) + 0x10))();
  pLVar9 = this;
  uVar6 = (undefined4)(uintptr_t)(ScenarioEditor__GetAllBodies(*(ScenarioEditor **)(this + 4)));
  FUN_006ea960(uVar6,pLVar9);
  (*(uint32_t*)((char*)&(auStack_1c)+8)) = (uint32_t)(uintptr_t)(&vftable_2);
  if (pvStack_10 != (void *)0x0) {
    port_op_delete(pvStack_10);
  }
  pRVar3 = *(Reflectable **)(*(int *)(this + 4) + 100);
  if (pRVar3 == (Reflectable *)0x0) {
    pRVar8 = (Reflectable *)0x0;
  }
  else {
    bVar5 = util__Reflectable__IsType_L_struct_Level_G_(pRVar3);
    pRVar8 = (Reflectable *)0x0;
    if (bVar5) {
      pRVar8 = pRVar3;
    }
  }
  FUN_006eab40(pRVar8 + 0x21,this);
  this_00 = (ActorHandler *)
            util__Darray_enum_CrewDepartment__Type___Num
                      (*(Darray_L_enum_CrewDepartment__Type_G_ **)this);
  ActorHandler__ResolvePendingActors(this_00);
  this_01 = *(ScenarioEditor **)(this + 4);
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  pRVar3 = *(Reflectable **)(this_01 + 100);
  if (pRVar3 == (Reflectable *)0x0) {
    pRVar8 = (Reflectable *)0x0;
  }
  else {
    bVar5 = util__Reflectable__IsType_L_struct_Level_G_(pRVar3);
    this_01 = *(ScenarioEditor **)(this + 4);
    pRVar8 = (Reflectable *)0x0;
    if (bVar5) {
      pRVar8 = pRVar3;
    }
  }
  pVVar7 = (Vec3_L_double_G_ *)(uintptr_t)(ScenarioEditor__GetBodyPosition_km
                     (this_01,(Vec3_L_double_G_ *)auStack_1c,(CelestialBody *)pRVar8[0x1f].Name.Capacity
                     ));
  uVar4 = *(uint *)((int)&pVVar7->X + 4);
  dVar1 = pVVar7->Y;
  dVar2 = pVVar7->Z;
  *(undefined4 *)(this + 0x68) = *(undefined4 *)&pVVar7->X;
  *(uint *)(this + 0x6c) = uVar4 ^ 0x80000000;
  *(int *)(this + 0x70) = SUB84(dVar1,0);
  *(uint *)(this + 0x74) = (uint)((ulonglong)dVar1 >> 0x20) ^ 0x80000000;
  *(double *)(this + 0x78) = -dVar2;
  DeselectAll(this);
  return;
}





//==== 006fa030 StaticFactory_006fa030 ====

/* public: static class util__Reflectable * __cdecl CelestialOrbit__ReflectionInfoStruct_L_struct_CelestialOrbit_G___StaticFactory(void) */

Reflectable * __cdecl CelestialOrbit__ReflectionInfoStruct_struct_CelestialOrbit___StaticFactory(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x60));
  if (pRVar1 != (Reflectable *)0x0) {
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_403;
    pRVar1[1]._pad_0x0_0 = 0;
    pRVar1[1].Name.Length = 0;
    pRVar1[2]._pad_0x0_0 = 0;
    pRVar1[2].Name.Data = (char *)0x0;
    pRVar1[1].Name.Capacity = (int)&vftable_396;
    pRVar1[2].Name.Capacity = 0;
    pRVar1[2].Name.Length = 0;
    pRVar1[3]._pad_0x0_0 = 0;
    pRVar1[3].Name.Data = (char *)0x0;
    pRVar1[3].Name.Capacity = 0;
    pRVar1[3].Name.Length = 0;
    pRVar1[4]._pad_0x0_0 = 0;
    pRVar1[4].Name.Data = (char *)0x0;
    pRVar1[4].Name.Capacity = 0;
    pRVar1[4].Name.Length = 0;
    pRVar1[5]._pad_0x0_0 = 0;
    pRVar1[5].Name.Data = (char *)0x0;
    pRVar1[5].Name.Capacity = 0;
    pRVar1[5].Name.Length = 0;
  }
  return (Reflectable *)0x0;
}

//==== 006fa0a0 StaticFactory_006fa0a0 ====

/* public: static class util__Reflectable * __cdecl OrbitalElements__ReflectionInfoStruct_L_struct_OrbitalElements_G___StaticFactory(void) */

Reflectable * __cdecl OrbitalElements__ReflectionInfoStruct_struct_OrbitalElements___StaticFactory(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x48));
  if (pRVar1 != (Reflectable *)0x0) {
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_396;
    pRVar1[1]._pad_0x0_0 = 0;
    pRVar1[1].Name.Data = (char *)0x0;
    pRVar1[1].Name.Capacity = 0;
    pRVar1[1].Name.Length = 0;
    pRVar1[2]._pad_0x0_0 = 0;
    pRVar1[2].Name.Data = (char *)0x0;
    pRVar1[2].Name.Capacity = 0;
    pRVar1[2].Name.Length = 0;
    pRVar1[3]._pad_0x0_0 = 0;
    pRVar1[3].Name.Data = (char *)0x0;
    pRVar1[3].Name.Capacity = 0;
    pRVar1[3].Name.Length = 0;
    pRVar1[4]._pad_0x0_0 = 0;
    pRVar1[4].Name.Data = (char *)0x0;
  }
  return (Reflectable *)0x0;
}

//==== 006fa0f0 StaticFactory_006fa0f0 ====

/* public: static class util__Reflectable * __cdecl StarterFleet__ReflectionInfoStruct_L_struct_StarterFleet_G___StaticFactory(void) */

Reflectable * __cdecl StarterFleet__ReflectionInfoStruct_struct_StarterFleet___StaticFactory(void)

{
  Reflectable *this;
  
  this = (Reflectable *)(uintptr_t)(port_op_new(0xe0));
  if (this != (Reflectable *)0x0) {
    EditorReflectable__EditorReflectable((EditorReflectable *)this);
    this->_pad_0x0_0 = (int)&vftable_400;
    this[3].Name.Data = (char *)&vftable_2;
    this[3].Name.Capacity = 0;
    this[3].Name.Length = 0;
    this[4]._pad_0x0_0 = 0;
    this[4].Name.Data = (char *)0x1;
    this[4].Name.Length = 0;
    this[5]._pad_0x0_0 = 0;
    this[5].Name.Data = (char *)0x0;
    this[4].Name.Capacity = (int)&vftable_396;
    this[5].Name.Capacity = 0;
    this[5].Name.Length = 0;
    this[6]._pad_0x0_0 = 0;
    this[6].Name.Data = (char *)0x0;
    this[6].Name.Capacity = 0;
    this[6].Name.Length = 0;
    this[7]._pad_0x0_0 = 0;
    this[7].Name.Data = (char *)0x0;
    this[7].Name.Capacity = 0;
    this[7].Name.Length = 0;
    this[8]._pad_0x0_0 = 0;
    this[8].Name.Data = (char *)0x0;
    this[8].Name.Capacity = 0;
    this[8].Name.Length = 0;
    *(undefined1 *)&this[9]._pad_0x0_0 = 0;
    this[9].Name.Capacity = 0;
    this[9].Name.Length = 0;
    this[10]._pad_0x0_0 = 0;
    this[10].Name.Data = (char *)0x0;
    this[10].Name.Capacity = 0;
    *(undefined2 *)&this[10].Name.Length = 0;
    *(undefined1 *)((int)&this[10].Name.Length + 2) = 0;
    this[0xb]._pad_0x0_0 = 0;
    this[0xb].Name.Data = (char *)0x0;
    this[0xb].Name.Capacity = 0;
    this[0xb].Name.Length = 0;
    *(undefined1 *)&this[0xc]._pad_0x0_0 = 0;
    this[0xc].Name.Capacity = (int)&vftable_2;
    this[0xc].Name.Length = 0;
    this[0xd]._pad_0x0_0 = 0;
    this[0xd].Name.Data = (char *)0x0;
    *(undefined1 *)&this[0xd].Name.Capacity = 0;
  }
  return (Reflectable *)0x0;
}

//==== 006fa110 StaticGetMember_006fa110 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class util__Maybe_L_structutil__ClassMember_G_ const __cdecl
   CelestialOrbit__ReflectionInfoStruct_struct_CelestialOrbit___StaticGetMember(class
   util__Str_L_char_G_ const &) */

Str_L_char_G_ * __cdecl
CelestialOrbit__ReflectionInfoStruct_struct_CelestialOrbit___StaticGetMember__o2(Str_L_char_G_ *param_1)

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
        cde_l2_f3eaf3bd__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_f3eaf3bd__thread_safe_static_guard_0__),
      cde_l2_f3eaf3bd__thread_safe_static_guard_0__ == -1)) {
     cde_l2_fce86333_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_f3eaf3bd__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_fce86333_Count) {
    piVar7 = &DAT_0097dcd8;
    do {
      if ((*(int *)(iStack_c + 4) <
            cde_l2_73915c00__thread_safe_static_guard_0__) &&
         (_Init_thread_header(& cde_l2_73915c00__thread_safe_static_guard_0__),
          cde_l2_73915c00__thread_safe_static_guard_0__ == -1)) {
        util__Str_char___Str_char
                  ((Str_L_char_G_ *)
                   & cde_l2_487b6e3a_StaticMembers,"DummyValue_DO_NOT_USE");
        DAT_0097dcd4 = 0;
        DAT_0097dcd8 = 0;
        DAT_0097dcdc = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097dce0,"Unused");
        _DAT_0097dcec = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097dcf0,"ParentBody");
        _DAT_0097dcfc = 8;
        _DAT_0097dd00 = 0x10;
        _DAT_0097dd04 = 4;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097dd08,"CelestialBody");
        _DAT_0097dd14 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097dd18,"Elements");
        _DAT_0097dd24 = 10;
        _DAT_0097dd28 = 0x18;
        _DAT_0097dd2c = 0x48;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097dd30,"OrbitalElements");
        _DAT_0097dd3c = 0;
        atexit( private__static_struct_util__ClassMember_const___cdecl_CelestialOrbit__ReflectionInfoStruct_struct_CelestialOrbit___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
        _Init_thread_footer(& cde_l2_73915c00__thread_safe_static_guard_0__);
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
LAB_006fa1e2:
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
          if (cVar3 == '\0') goto LAB_006fa1e2;
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
    } while (iVar6 <  cde_l2_fce86333_Count);
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





//==== 006fa400 StaticGetMemberByIndex_006fa400 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   OrbitalElements__ReflectionInfoStruct_struct_OrbitalElements___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
OrbitalElements__ReflectionInfoStruct_struct_OrbitalElements___StaticGetMemberByIndex__o2
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_4457264d__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_4457264d__thread_safe_static_guard_0__);
    if ( cde_l2_4457264d__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_80f3411b_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0097e2bc = 0;
      _DAT_0097e2c0 = 0;
      _DAT_0097e2c4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e2c8,"Unused");
      _DAT_0097e2d4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e2d8,"Epoch_JulianYears");
      _DAT_0097e2e4 = 4;
      _DAT_0097e2e8 = 0x10;
      _DAT_0097e2ec = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e2f0,"double");
      _DAT_0097e2fc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e300,"SemiMajorAxis_km");
      _DAT_0097e30c = 4;
      _DAT_0097e310 = 0x18;
      _DAT_0097e314 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e318,"double");
      _DAT_0097e324 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e328,"Eccentricity");
      _DAT_0097e334 = 4;
      _DAT_0097e338 = 0x20;
      _DAT_0097e33c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e340,"double");
      _DAT_0097e34c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e350,"InclinationToRelativePlane_degrees");
      _DAT_0097e35c = 4;
      _DAT_0097e360 = 0x28;
      _DAT_0097e364 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e368,"double");
      _DAT_0097e374 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e378,"LongitudeOfAscendingNode_degrees");
      _DAT_0097e384 = 4;
      _DAT_0097e388 = 0x30;
      _DAT_0097e38c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e390,"double");
      _DAT_0097e39c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e3a0,"ArgumentOfPeriapsis_degrees");
      _DAT_0097e3ac = 4;
      _DAT_0097e3b0 = 0x38;
      _DAT_0097e3b4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e3b8,"double");
      _DAT_0097e3c4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e3c8,"MeanAnomaly_degrees");
      _DAT_0097e3d4 = 4;
      _DAT_0097e3d8 = 0x40;
      _DAT_0097e3dc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e3e0,"double");
      _DAT_0097e3ec = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_OrbitalElements__ReflectionInfoStruct_struct_OrbitalElements___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_4457264d__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_80f3411b_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_0097e2bc + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_0097e2c0 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_0097e2c4 + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_0097e2c8 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0097e2d4)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0097e2d5)[iVar1];
  return __return_storage_ptr__;
}





//==== 006fa6d0 StaticGetMemberByIndex_006fa6d0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl StarterFleet__ReflectionInfoStruct_struct_StarterFleet___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
StarterFleet__ReflectionInfoStruct_struct_StarterFleet___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_425bb6c0__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_425bb6c0__thread_safe_static_guard_0__);
    if ( cde_l2_425bb6c0__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_6eddbe5a_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0097df64 = 0;
      _DAT_0097df68 = 0;
      _DAT_0097df6c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097df70,"Unused");
      _DAT_0097df7c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097df80,"ShipTypes");
      _DAT_0097df8c = 8;
      _DAT_0097df90 = 0x34;
      _DAT_0097df94 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097df98,"CraftBlueprint");
      _DAT_0097dfa4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097dfa8,"ShipCount");
      _DAT_0097dfb4 = 2;
      _DAT_0097dfb8 = 0x44;
      _DAT_0097dfbc = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097dfc0,"int");
      _DAT_0097dfcc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097dfd0,"CustomOrbit");
      _DAT_0097dfdc = 10;
      _DAT_0097dfe0 = 0x48;
      _DAT_0097dfe4 = 0x48;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097dfe8,"OrbitalElements");
      _DAT_0097dff4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097dff8,"FuelLossPercent");
      _DAT_0097e004 = 4;
      _DAT_0097e008 = 0x98;
      _DAT_0097e00c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e010,"double");
      _DAT_0097e01c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e020,"AmmoLossPercent");
      _DAT_0097e02c = 4;
      _DAT_0097e030 = 0xa0;
      _DAT_0097e034 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e038,"double");
      _DAT_0097e044 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e048,"MissionCritical");
      _DAT_0097e054 = 1;
      _DAT_0097e058 = 0xa8;
      _DAT_0097e05c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e060,"bool");
      _DAT_0097e06c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e070,"CanCustomize");
      _DAT_0097e07c = 1;
      _DAT_0097e080 = 0xa9;
      _DAT_0097e084 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e088,"bool");
      _DAT_0097e094 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e098,"CivilianShipsOnly");
      _DAT_0097e0a4 = 1;
      _DAT_0097e0a8 = 0xaa;
      _DAT_0097e0ac = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e0b0,"bool");
      _DAT_0097e0bc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e0c0,"CanUseSpaceStations");
      _DAT_0097e0cc = 1;
      _DAT_0097e0d0 = 0xab;
      _DAT_0097e0d4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e0d8,"bool");
      _DAT_0097e0e4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e0e8,"MissionStartFlag");
      _DAT_0097e0f4 = 1;
      _DAT_0097e0f8 = 0xac;
      _DAT_0097e0fc = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e100,"bool");
      _DAT_0097e10c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e110,"MissionEndFlag");
      _DAT_0097e11c = 1;
      _DAT_0097e120 = 0xad;
      _DAT_0097e124 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e128,"bool");
      _DAT_0097e134 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e138,"FlagsOnlyApplyToStations");
      _DAT_0097e144 = 1;
      _DAT_0097e148 = 0xae;
      _DAT_0097e14c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e150,"bool");
      _DAT_0097e15c = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_StarterFleet__ReflectionInfoStruct_struct_StarterFleet___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_425bb6c0__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_6eddbe5a_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_0097df64 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_0097df68 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_0097df6c + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_0097df70 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0097df7c)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0097df7d)[iVar1];
  return __return_storage_ptr__;
}





//==== 006faaf0 StaticGetMemberCount_006faaf0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl CelestialOrbit__ReflectionInfoStruct_struct_CelestialOrbit___StaticGetMemberCount(void) */

int __cdecl CelestialOrbit__ReflectionInfoStruct_struct_CelestialOrbit___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_69c89d85__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_69c89d85__thread_safe_static_guard_0__);
    if ( cde_l2_69c89d85__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_cdca6c07_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0097dc54 = 0;
      _DAT_0097dc58 = 0;
      _DAT_0097dc5c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097dc60,"Unused");
      _DAT_0097dc6c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097dc70,"ParentBody");
      _DAT_0097dc7c = 8;
      _DAT_0097dc80 = 0x10;
      _DAT_0097dc84 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097dc88,"CelestialBody");
      _DAT_0097dc94 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097dc98,"Elements");
      _DAT_0097dca4 = 10;
      _DAT_0097dca8 = 0x18;
      _DAT_0097dcac = 0x48;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097dcb0,"OrbitalElements");
      _DAT_0097dcbc = 0;
      atexit( private__static_int_const___cdecl_CelestialOrbit__ReflectionInfoStruct_struct_CelestialOrbit___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_69c89d85__thread_safe_static_guard_0__);
    }
  }
  return 3;
}





//==== 006fac20 StaticGetMemberCount_006fac20 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl OrbitalElements__ReflectionInfoStruct_struct_OrbitalElements___StaticGetMemberCount(void) */

int __cdecl
OrbitalElements__ReflectionInfoStruct_struct_OrbitalElements___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_cf87a823__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_cf87a823__thread_safe_static_guard_0__);
    if ( cde_l2_cf87a823__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_44ed98ed_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0097e174 = 0;
      _DAT_0097e178 = 0;
      _DAT_0097e17c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e180,"Unused");
      _DAT_0097e18c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e190,"Epoch_JulianYears");
      _DAT_0097e19c = 4;
      _DAT_0097e1a0 = 0x10;
      _DAT_0097e1a4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e1a8,"double");
      _DAT_0097e1b4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e1b8,"SemiMajorAxis_km");
      _DAT_0097e1c4 = 4;
      _DAT_0097e1c8 = 0x18;
      _DAT_0097e1cc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e1d0,"double");
      _DAT_0097e1dc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e1e0,"Eccentricity");
      _DAT_0097e1ec = 4;
      _DAT_0097e1f0 = 0x20;
      _DAT_0097e1f4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e1f8,"double");
      _DAT_0097e204 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e208,"InclinationToRelativePlane_degrees");
      _DAT_0097e214 = 4;
      _DAT_0097e218 = 0x28;
      _DAT_0097e21c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e220,"double");
      _DAT_0097e22c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e230,"LongitudeOfAscendingNode_degrees");
      _DAT_0097e23c = 4;
      _DAT_0097e240 = 0x30;
      _DAT_0097e244 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e248,"double");
      _DAT_0097e254 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e258,"ArgumentOfPeriapsis_degrees");
      _DAT_0097e264 = 4;
      _DAT_0097e268 = 0x38;
      _DAT_0097e26c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e270,"double");
      _DAT_0097e27c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e280,"MeanAnomaly_degrees");
      _DAT_0097e28c = 4;
      _DAT_0097e290 = 0x40;
      _DAT_0097e294 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e298,"double");
      _DAT_0097e2a4 = 0;
      atexit( private__static_int_const___cdecl_OrbitalElements__ReflectionInfoStruct_struct_OrbitalElements___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_cf87a823__thread_safe_static_guard_0__);
    }
  }
  return 8;
}





//==== 006faea0 StaticGetMemberCount_006faea0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl StarterFleet__ReflectionInfoStruct_struct_StarterFleet___StaticGetMemberCount(void) */

int __cdecl StarterFleet__ReflectionInfoStruct_struct_StarterFleet___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_fdb3247d__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_fdb3247d__thread_safe_static_guard_0__);
    if ( cde_l2_fdb3247d__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_5fccce41_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0097dd54 = 0;
      _DAT_0097dd58 = 0;
      _DAT_0097dd5c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097dd60,"Unused");
      _DAT_0097dd6c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097dd70,"ShipTypes");
      _DAT_0097dd7c = 8;
      _DAT_0097dd80 = 0x34;
      _DAT_0097dd84 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097dd88,"CraftBlueprint");
      _DAT_0097dd94 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097dd98,"ShipCount");
      _DAT_0097dda4 = 2;
      _DAT_0097dda8 = 0x44;
      _DAT_0097ddac = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ddb0,"int");
      _DAT_0097ddbc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ddc0,"CustomOrbit");
      _DAT_0097ddcc = 10;
      _DAT_0097ddd0 = 0x48;
      _DAT_0097ddd4 = 0x48;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ddd8,"OrbitalElements");
      _DAT_0097dde4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097dde8,"FuelLossPercent");
      _DAT_0097ddf4 = 4;
      _DAT_0097ddf8 = 0x98;
      _DAT_0097ddfc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097de00,"double");
      _DAT_0097de0c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097de10,"AmmoLossPercent");
      _DAT_0097de1c = 4;
      _DAT_0097de20 = 0xa0;
      _DAT_0097de24 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097de28,"double");
      _DAT_0097de34 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097de38,"MissionCritical");
      _DAT_0097de44 = 1;
      _DAT_0097de48 = 0xa8;
      _DAT_0097de4c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097de50,"bool");
      _DAT_0097de5c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097de60,"CanCustomize");
      _DAT_0097de6c = 1;
      _DAT_0097de70 = 0xa9;
      _DAT_0097de74 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097de78,"bool");
      _DAT_0097de84 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097de88,"CivilianShipsOnly");
      _DAT_0097de94 = 1;
      _DAT_0097de98 = 0xaa;
      _DAT_0097de9c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097dea0,"bool");
      _DAT_0097deac = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097deb0,"CanUseSpaceStations");
      _DAT_0097debc = 1;
      _DAT_0097dec0 = 0xab;
      _DAT_0097dec4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097dec8,"bool");
      _DAT_0097ded4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ded8,"MissionStartFlag");
      _DAT_0097dee4 = 1;
      _DAT_0097dee8 = 0xac;
      _DAT_0097deec = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097def0,"bool");
      _DAT_0097defc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097df00,"MissionEndFlag");
      _DAT_0097df0c = 1;
      _DAT_0097df10 = 0xad;
      _DAT_0097df14 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097df18,"bool");
      _DAT_0097df24 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097df28,"FlagsOnlyApplyToStations");
      _DAT_0097df34 = 1;
      _DAT_0097df38 = 0xae;
      _DAT_0097df3c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097df40,"bool");
      _DAT_0097df4c = 0;
      atexit( private__static_int_const___cdecl_StarterFleet__ReflectionInfoStruct_struct_StarterFleet___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_fdb3247d__thread_safe_static_guard_0__);
    }
  }
  return 0xd;
}





//==== 006fb280 StaticGetMembers_006fb280 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class util__Darray_L_structutil__ClassMember_G_ const __cdecl
   CelestialOrbit__ReflectionInfoStruct_struct_CelestialOrbit___StaticGetMembers(void) */

Darray_L_struct_util__ClassMember_G_ * __cdecl
CelestialOrbit__ReflectionInfoStruct_struct_CelestialOrbit___StaticGetMembers__o2(void)

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
        cde_l2_a6a10684__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_a6a10684__thread_safe_static_guard_0__),
      cde_l2_a6a10684__thread_safe_static_guard_0__ == -1)) {
     cde_l2_9eaf3fb7_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_a6a10684__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_9eaf3fb7_Count);
  iVar3 = 0;
  if (0 <  cde_l2_9eaf3fb7_Count) {
    puVar4 = &DAT_0097dcd8;
    do {
      if ((*(int *)(iStack_c + 4) <
            cde_l2_73915c00__thread_safe_static_guard_0__) &&
         (_Init_thread_header(& cde_l2_73915c00__thread_safe_static_guard_0__),
          cde_l2_73915c00__thread_safe_static_guard_0__ == -1)) {
        util__Str_char___Str_char
                  ((Str_L_char_G_ *)
                   & cde_l2_487b6e3a_StaticMembers,"DummyValue_DO_NOT_USE");
        DAT_0097dcd4 = 0;
        DAT_0097dcd8 = 0;
        DAT_0097dcdc = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097dce0,"Unused");
        _DAT_0097dcec = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097dcf0,"ParentBody");
        _DAT_0097dcfc = 8;
        _DAT_0097dd00 = 0x10;
        _DAT_0097dd04 = 4;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097dd08,"CelestialBody");
        _DAT_0097dd14 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097dd18,"Elements");
        _DAT_0097dd24 = 10;
        _DAT_0097dd28 = 0x18;
        _DAT_0097dd2c = 0x48;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097dd30,"OrbitalElements");
        _DAT_0097dd3c = 0;
        atexit( private__static_struct_util__ClassMember_const___cdecl_CelestialOrbit__ReflectionInfoStruct_struct_CelestialOrbit___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
        _Init_thread_footer(& cde_l2_73915c00__thread_safe_static_guard_0__);
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
    } while (iVar3 <  cde_l2_9eaf3fb7_Count);
  }
  return in_stack_00000004;
}





//==== 006fb510 UpdateListBoxUI ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* private: void __thiscall ScenarioEditor__UpdateListBoxUI(void) */

void __thiscall ScenarioEditor__UpdateListBoxUI(ScenarioEditor *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  GameManager *this_00;
  DataParser *pDVar2;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G___G_
  *pDVar3;
  tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *ptVar4;
  void *apvStack_80 [3];
  void *pvStack_74;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined **ppuStack_5c;
  Str_L_char_G_ SStack_58;
  undefined **ppuStack_4c;
  tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *ptStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined **ppuStack_34;
  tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *ptStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined **ppuStack_1c;
  tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *ptStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 auStack_c [4];
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  this_00 = Manager__GetParent(*(Manager **)this);
  pDVar2 = GameManager__GetDataManager(this_00);
  if (*(Reflectable **)(this + 100) == (Reflectable *)0x0) {
    ppuStack_4c = (undefined **)0x0;
    ptStack_48 = (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)0x0;
    uStack_44 = 0;
    uStack_40 = 0;
    GetCurrentCampaign(pDVar2);
    util__MapCast_class_util__Reflectable__struct_CelestialBody
              ((Darray_L_struct_CelestialBody_P_G_ *)&ppuStack_4c);
    if ((*(int *)(this + 0x94) != 0) &&
       (*(ReferenceController **)(this + 0x98) != (ReferenceController *)0x0)) {
      bVar1 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(this + 0x98));
      if (bVar1) {
        pDVar3 = (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G___G_
                  *)AsListing_class_util__Reflectable
                              ((Darray_L_class_util__Reflectable_P_G_ *)&ppuStack_1c);
        uStack_64 = 0;
        uStack_60 = 0;
        util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable________Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable
                  ((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G___G_
                    *)&ppuStack_5c,pDVar3);
        if (*(ReferenceController **)(this + 0x98) != (ReferenceController *)0x0) {
          bVar1 = util__ReferenceController__IsDataStillValid
                            (*(ReferenceController **)(this + 0x98));
          if (!bVar1) {
            *(undefined4 *)(this + 0x94) = 0;
          }
        }
        UIListBox_class_util__Reflectable____Rebuild
                  (*(UIListBox_L_class_util__Reflectable_P_G_ **)(this + 0x94),
                   (Attribute_L_class_util__Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G___G___G_
                    *)&uStack_64);
        ppuStack_5c = (undefined **)(&vftable_85);
        if ((tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)
            SStack_58.Data !=
            (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)0x0) {
          util__tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable_______vector_deleting_destructor
                    ((tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)
                     SStack_58.Data,3);
        }
        SStack_58.Data = (char *)0x0;
        ppuStack_5c = (undefined **)(&vftable);
        ppuStack_1c = (undefined **)(&vftable_85);
        if (ptStack_18 !=
            (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)0x0) {
          util__tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable_______vector_deleting_destructor(ptStack_18,3);
        }
      }
    }
    ppuStack_34 = (undefined **)0x0;
    ptStack_30 = (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)0x0;
    uStack_2c = 0;
    uStack_28 = 0;
    util__Str_char___Str_char(&SStack_58,"Campaign");
    (**(code **)(*(int *)pDVar2 + 4))(&ppuStack_1c,&SStack_58,0);
    if ((tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)
        SStack_58.Data !=
        (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)0x0) {
      port_op_delete(SStack_58.Data);
      SStack_58.Data = (char *)0x0;
    }
    auStack_c[0] = 0;
    FUN_004f1250(&ppuStack_34,&ppuStack_1c,auStack_c);
    ppuStack_1c = (undefined **)(&vftable_6);
    if (ptStack_18 !=
        (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)0x0) {
      port_op_delete(ptStack_18);
    }
    if ((*(int *)(this + 0x8c) != 0) &&
       (*(ReferenceController **)(this + 0x90) != (ReferenceController *)0x0)) {
      bVar1 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(this + 0x90));
      if (bVar1) {
        util__Maybe_class_util__LocStr___Maybe_class_util__LocStr
                  ((Maybe_L_class_util__LocStr_G_ *)apvStack_80);
        GetListingOfEditorReflectables((Darray_L_class_util__Reflectable_P_G_ *)&ppuStack_5c,
                               (Maybe_L_class_util__LocStr_G_ *)&ppuStack_34);
        pDVar3 = (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G___G_
                  *)((Darray_L_class_util__Reflectable_P_G_ *)&ppuStack_5c);
        uStack_24 = 0;
        uStack_20 = 0;
        util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable________Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable
                  ((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G___G_
                    *)&ppuStack_1c,pDVar3);
        if (*(ReferenceController **)(this + 0x90) != (ReferenceController *)0x0) {
          bVar1 = util__ReferenceController__IsDataStillValid
                            (*(ReferenceController **)(this + 0x90));
          if (!bVar1) {
            *(undefined4 *)(this + 0x8c) = 0;
          }
        }
        UIListBox_class_util__Reflectable____Rebuild
                  (*(UIListBox_L_class_util__Reflectable_P_G_ **)(this + 0x8c),
                   (Attribute_L_class_util__Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G___G___G_
                    *)&uStack_24);
        ppuStack_1c = (undefined **)(&vftable_85);
        if (ptStack_18 !=
            (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)0x0) {
          util__tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable_______vector_deleting_destructor(ptStack_18,3);
        }
        ptStack_18 = (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)
                     0x0;
        ppuStack_1c = (undefined **)(&vftable);
        ppuStack_5c = (undefined **)(&vftable_85);
        if ((tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)
            SStack_58.Data !=
            (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)0x0) {
          util__tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable_______vector_deleting_destructor
                    ((tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)
                     SStack_58.Data,3);
        }
        SStack_58.Data = (char *)0x0;
        ppuStack_5c = (undefined **)(&vftable);
        if (pvStack_74 != (void *)0x0) {
          port_op_delete(pvStack_74);
          pvStack_74 = (void *)0x0;
        }
        if (apvStack_80[0] != (void *)0x0) {
          port_op_delete(apvStack_80[0]);
        }
      }
    }
    ppuStack_34 = (undefined **)(&vftable_6);
    if (ptStack_30 !=
        (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)0x0) {
      port_op_delete(ptStack_30);
    }
    ptStack_30 = (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)0x0;
    ppuStack_34 = (undefined **)(&vftable);
LAB_006fbab4:
    ppuStack_4c = (undefined **)(&vftable_6);
    ptVar4 = ptStack_48;
  }
  else {
    bVar1 = util__Reflectable__IsType_L_class_Faction_G_(*(Reflectable **)(this + 100));
    if (!bVar1) {
      bVar1 = util__Reflectable__IsType_L_struct_Speaker_G_(*(Reflectable **)(this + 100));
      if (!bVar1) {
        bVar1 = util__Reflectable__IsType_L_struct_Level_G_(*(Reflectable **)(this + 100));
        if (bVar1) {
          ppuStack_1c = (undefined **)0x0;
          ptStack_18 = (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_
                        *)0x0;
          uStack_14 = 0;
          uStack_10 = 0;
          GetCurrentCampaign(pDVar2);
          util__MapCast_class_util__Reflectable__struct_CelestialBody
                    ((Darray_L_struct_CelestialBody_P_G_ *)&ppuStack_1c);
          if ((*(int *)(this + 0x94) != 0) &&
             (*(ReferenceController **)(this + 0x98) != (ReferenceController *)0x0)) {
            bVar1 = util__ReferenceController__IsDataStillValid
                              (*(ReferenceController **)(this + 0x98));
            if (bVar1) {
              pDVar3 = (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G___G_
                        *)AsListing_class_util__Reflectable
                                    ((Darray_L_class_util__Reflectable_P_G_ *)&ppuStack_4c);
              util__Attribute_class_util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable__________Attribute_class_util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable
                        ((Attribute_L_class_util__Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G___G___G_
                          *)&uStack_3c,pDVar3);
              if (*(ReferenceController **)(this + 0x98) != (ReferenceController *)0x0) {
                bVar1 = util__ReferenceController__IsDataStillValid
                                  (*(ReferenceController **)(this + 0x98));
                if (!bVar1) {
                  *(undefined4 *)(this + 0x94) = 0;
                }
              }
              UIListBox_class_util__Reflectable____Rebuild
                        (*(UIListBox_L_class_util__Reflectable_P_G_ **)(this + 0x94),
                         (Attribute_L_class_util__Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G___G___G_
                          *)&uStack_3c);
              ppuStack_34 = (undefined **)(&vftable_85);
              if (ptStack_30 !=
                  (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)0x0
                 ) {
                util__tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable_______vector_deleting_destructor(ptStack_30,3);
              }
              ptStack_30 = (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_
                            *)0x0;
              ppuStack_34 = (undefined **)(&vftable);
              util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable_________Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G___G_
                          *)&ppuStack_4c);
              if (*(ReferenceController **)(this + 0x98) != (ReferenceController *)0x0) {
                bVar1 = util__ReferenceController__IsDataStillValid
                                  (*(ReferenceController **)(this + 0x98));
                if (!bVar1) {
                  *(undefined4 *)(this + 0x94) = 0;
                }
              }
              UIListBox_class_util__Reflectable____ScrollToDatum
                        (*(UIListBox_L_class_util__Reflectable_P_G_ **)(this + 0x94),
                         *(Reflectable **)(this + 100));
            }
          }
          util__Darray_class_util__Reflectable_____Darray_class_util__Reflectable((Darray_L_class_util__Reflectable_P_G_ *)&ppuStack_1c);
        }
        goto LAB_006fbbd7;
      }
      ppuStack_4c = (undefined **)0x0;
      ptStack_48 = (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)
                   0x0;
      uStack_44 = 0;
      uStack_40 = 0;
      util__Str_char___Str_char(&SStack_58,"Speaker");
      (**(code **)(*(int *)pDVar2 + 4))(&ppuStack_1c,&SStack_58,0);
      if ((tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)
          SStack_58.Data !=
          (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)0x0) {
        port_op_delete(SStack_58.Data);
        SStack_58.Data = (char *)0x0;
      }
      auStack_c[0] = 0;
      FUN_004f1250(&ppuStack_4c,&ppuStack_1c,auStack_c);
      ppuStack_1c = (undefined **)(&vftable_6);
      if (ptStack_18 !=
          (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)0x0) {
        port_op_delete(ptStack_18);
      }
      if ((*(int *)(this + 0xa4) != 0) &&
         (*(ReferenceController **)(this + 0xa8) != (ReferenceController *)0x0)) {
        bVar1 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(this + 0xa8));
        if (bVar1) {
          util__Maybe_class_util__LocStr___Maybe_class_util__LocStr
                    ((Maybe_L_class_util__LocStr_G_ *)apvStack_80);
          GetListingOfEditorReflectables((Darray_L_class_util__Reflectable_P_G_ *)&ppuStack_1c,
                                 (Maybe_L_class_util__LocStr_G_ *)&ppuStack_4c);
          pDVar3 = (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G___G_
                    *)((Darray_L_class_util__Reflectable_P_G_ *)&ppuStack_1c);
          uStack_3c = 0;
          uStack_38 = 0;
          util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable________Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable
                    ((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G___G_
                      *)&ppuStack_34,pDVar3);
          if (*(ReferenceController **)(this + 0xa8) != (ReferenceController *)0x0) {
            bVar1 = util__ReferenceController__IsDataStillValid
                              (*(ReferenceController **)(this + 0xa8));
            if (!bVar1) {
              *(undefined4 *)(this + 0xa4) = 0;
            }
          }
          UIListBox_class_util__Reflectable____Rebuild
                    (*(UIListBox_L_class_util__Reflectable_P_G_ **)(this + 0xa4),
                     (Attribute_L_class_util__Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G___G___G_
                      *)&uStack_3c);
          ppuStack_34 = (undefined **)(&vftable_85);
          if (ptStack_30 !=
              (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)0x0) {
            util__tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable_______vector_deleting_destructor(ptStack_30,3);
          }
          ptStack_30 = (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_
                        *)0x0;
          ppuStack_34 = (undefined **)(&vftable);
          util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable_________Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G___G_
                      *)&ppuStack_1c);
          if (pvStack_74 != (void *)0x0) {
            port_op_delete(pvStack_74);
            pvStack_74 = (void *)0x0;
          }
          if (apvStack_80[0] != (void *)0x0) {
            port_op_delete(apvStack_80[0]);
          }
          if (*(ReferenceController **)(this + 0xa8) != (ReferenceController *)0x0) {
            bVar1 = util__ReferenceController__IsDataStillValid
                              (*(ReferenceController **)(this + 0xa8));
            if (!bVar1) {
              *(undefined4 *)(this + 0xa4) = 0;
            }
          }
          UIListBox_class_util__Reflectable____ScrollToDatum
                    (*(UIListBox_L_class_util__Reflectable_P_G_ **)(this + 0xa4),
                     *(Reflectable **)(this + 100));
        }
      }
      goto LAB_006fbab4;
    }
    ppuStack_34 = (undefined **)0x0;
    ptStack_30 = (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)0x0;
    uStack_2c = 0;
    uStack_28 = 0;
    util__Str_char___Str_char(&SStack_58,"Faction");
    (**(code **)(*(int *)pDVar2 + 4))(&ppuStack_1c,&SStack_58,0);
    if ((tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)
        SStack_58.Data !=
        (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)0x0) {
      port_op_delete(SStack_58.Data);
      SStack_58.Data = (char *)0x0;
    }
    auStack_c[0] = 0;
    FUN_004f1250(&ppuStack_34,&ppuStack_1c,auStack_c);
    ppuStack_1c = (undefined **)(&vftable_6);
    if (ptStack_18 !=
        (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)0x0) {
      port_op_delete(ptStack_18);
    }
    if ((*(int *)(this + 0x9c) != 0) &&
       (*(ReferenceController **)(this + 0xa0) != (ReferenceController *)0x0)) {
      bVar1 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(this + 0xa0));
      if (bVar1) {
        util__Maybe_class_util__LocStr___Maybe_class_util__LocStr
                  ((Maybe_L_class_util__LocStr_G_ *)apvStack_80);
        GetListingOfEditorReflectables((Darray_L_class_util__Reflectable_P_G_ *)&ppuStack_4c,
                               (Maybe_L_class_util__LocStr_G_ *)&ppuStack_34);
        pDVar3 = (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G___G_
                  *)((Darray_L_class_util__Reflectable_P_G_ *)&ppuStack_4c);
        uStack_24 = 0;
        uStack_20 = 0;
        util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable________Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable
                  ((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G___G_
                    *)&ppuStack_1c,pDVar3);
        if (*(ReferenceController **)(this + 0xa0) != (ReferenceController *)0x0) {
          bVar1 = util__ReferenceController__IsDataStillValid
                            (*(ReferenceController **)(this + 0xa0));
          if (!bVar1) {
            *(undefined4 *)(this + 0x9c) = 0;
          }
        }
        UIListBox_class_util__Reflectable____Rebuild
                  (*(UIListBox_L_class_util__Reflectable_P_G_ **)(this + 0x9c),
                   (Attribute_L_class_util__Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G___G___G_
                    *)&uStack_24);
        ppuStack_1c = (undefined **)(&vftable_85);
        if (ptStack_18 !=
            (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)0x0) {
          util__tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable_______vector_deleting_destructor(ptStack_18,3);
        }
        ptStack_18 = (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)
                     0x0;
        ppuStack_1c = (undefined **)(&vftable);
        ppuStack_4c = (undefined **)(&vftable_85);
        if (ptStack_48 !=
            (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)0x0) {
          util__tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable_______vector_deleting_destructor(ptStack_48,3);
        }
        ptStack_48 = (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)
                     0x0;
        ppuStack_4c = (undefined **)(&vftable);
        if (pvStack_74 != (void *)0x0) {
          port_op_delete(pvStack_74);
          pvStack_74 = (void *)0x0;
        }
        if (apvStack_80[0] != (void *)0x0) {
          port_op_delete(apvStack_80[0]);
        }
        if (*(ReferenceController **)(this + 0xa0) != (ReferenceController *)0x0) {
          bVar1 = util__ReferenceController__IsDataStillValid
                            (*(ReferenceController **)(this + 0xa0));
          if (!bVar1) {
            *(undefined4 *)(this + 0x9c) = 0;
          }
        }
        UIListBox_class_util__Reflectable____ScrollToDatum
                  (*(UIListBox_L_class_util__Reflectable_P_G_ **)(this + 0x9c),
                   *(Reflectable **)(this + 100));
      }
    }
    ppuStack_34 = (undefined **)(&vftable_6);
    ptVar4 = ptStack_30;
  }
  if (ptVar4 != (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)0x0)
  {
    port_op_delete(ptVar4);
    __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_006fbbd7:
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 006fbbf0 GetPointerPropertyChoices_006fbbf0 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   StarterFleet__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

ClassMember * 
StarterFleet__GetPointerPropertyChoices
          (StarterFleet *this,ClassMember *param_1,SerializationManagerInterface *param_2)

{
  char *pcVar1;
  SerializationManagerInterface SVar2;
  int *in_stack_0000000c;
  undefined **ppuStack_20;
  void *pvStack_1c;
  Str_L_char_G_ SStack_10;
  
  if ((*(int *)&(param_2[1])) < 1) {
    SVar2 = (*(SerializationManagerInterface *)
            &cde_l2_0b2b1c9f_NullString);
  }
  else {
    SVar2 = *param_2;
  }
  for (pcVar1 = "ShipTypes"; (pcVar1[(int)((*(int *)&(SVar2)) + -0x936f14)] != '\0' || (*pcVar1 != '\0'));
      pcVar1 = pcVar1 + 1) {
    if (pcVar1[(int)((*(int *)&(SVar2)) + -0x936f14)] != *pcVar1) {
      (param_1->Name).Data =
           (char *)&vftable_85;
      (param_1->Name).Capacity = 0;
      (param_1->Name).Length = 0;
      *(undefined4 *)&param_1->Type = 0;
      return param_1;
    }
  }
  util__Str_char___Str_char(&SStack_10,"CraftBlueprint");
  (**(code **)(uintptr_t)(*in_stack_0000000c + 4))(&ppuStack_20,&SStack_10,0);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
    SStack_10.Data = (char *)0x0;
  }
  CraftBlueprint__SubsectionCrafts
            ((Darray_L_class_util__Reflectable_P_G_ *)param_1,SUB41(&ppuStack_20,0));
  ppuStack_20 = (undefined **)(&vftable_6);
  if (pvStack_1c != (void *)0x0) {
    port_op_delete(pvStack_1c);
  }
  return param_1;
}





//==== 006fbcc0 GetTypeName_006fbcc0 ====


/* public: virtual class util__Str_L_char_G_  CustomObjective__ReflectionInfoStruct_struct_CustomObjective___GetTypeName(void)const  */

Str_L_char_G_ * 
CustomObjective__ReflectionInfoStruct_struct_CustomObjective___GetTypeName
          (ReflectionInfoStruct_L_struct_CustomObjective_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"CustomObjective");
  return __return_storage_ptr__;
}





//==== 006fbce0 GetMembers_006fbce0 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   CustomObjective__ReflectionInfoStruct_struct_CustomObjective___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
CustomObjective__ReflectionInfoStruct_struct_CustomObjective___GetMembers__o2
          (ReflectionInfoStruct_L_struct_CustomObjective_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_c17cf3cd__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_c17cf3cd__thread_safe_static_guard_0__),
      cde_l2_c17cf3cd__thread_safe_static_guard_0__ == -1)) {
     cde_l2_e0792fa0_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_c17cf3cd__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_e0792fa0_Count);
  iVar3 = 0;
  if (0 <  cde_l2_e0792fa0_Count) {
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
    } while (iVar3 <  cde_l2_e0792fa0_Count);
  }
  return in_stack_00000004;
}





//==== 006fbe20 GetMember_006fbe20 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   CustomObjective__ReflectionInfoStruct_struct_CustomObjective___GetMember(class util__Str_L_char_G_
   const &)const  */

Str_L_char_G_ * 
CustomObjective__ReflectionInfoStruct_struct_CustomObjective___GetMember__o2
          (ReflectionInfoStruct_L_struct_CustomObjective_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_81a7f5fc__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_81a7f5fc__thread_safe_static_guard_0__),
      cde_l2_81a7f5fc__thread_safe_static_guard_0__ == -1)) {
     cde_l2_e30fdbb5_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_81a7f5fc__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_e30fdbb5_Count) {
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
LAB_006fbead:
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
          if (cVar3 == '\0') goto LAB_006fbead;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_e30fdbb5_Count);
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





//==== 006fbfc0 GetFactory_006fbfc0 ====


/* public: virtual class util__Reflectable * (__cdecl*
   CustomObjective__ReflectionInfoStruct_struct_CustomObjective___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall CustomObjective__ReflectionInfoStruct_struct_CustomObjective___GetFactory__o2
          (ReflectionInfoStruct_L_struct_CustomObjective_G_ *this)

{
  return StaticFactory;
}





//==== 006fbfd0 GetTypeName_006fbfd0 ====


/* public: virtual class util__Str_L_char_G_  CutsceneMessage__ReflectionInfoStruct_struct_CutsceneMessage___GetTypeName(void)const  */

Str_L_char_G_ * 
CutsceneMessage__ReflectionInfoStruct_struct_CutsceneMessage___GetTypeName
          (ReflectionInfoStruct_L_struct_CutsceneMessage_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"CutsceneMessage");
  return __return_storage_ptr__;
}





//==== 006fbff0 GetMembers_006fbff0 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   CutsceneMessage__ReflectionInfoStruct_struct_CutsceneMessage___GetMembers(void)const  */

undefined4 
CutsceneMessage__ReflectionInfoStruct_struct_CutsceneMessage___GetMembers__o2
          (ReflectionInfoStruct_L_struct_CutsceneMessage_G_ *this)

{
  undefined4 in_stack_00000004;
  
  StaticGetMembers();
}





//==== 006fc010 GetMember_006fc010 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   CutsceneMessage__ReflectionInfoStruct_struct_CutsceneMessage___GetMember(class util__Str_L_char_G_
   const &)const  */

Str_L_char_G_ * 
CutsceneMessage__ReflectionInfoStruct_struct_CutsceneMessage___GetMember__o2
          (ReflectionInfoStruct_L_struct_CutsceneMessage_G_ *this,Str_L_char_G_ *param_1)

{
  StaticGetMember(param_1);
  return param_1;
}





//==== 006fc030 GetFactory_006fc030 ====


/* public: virtual class util__Reflectable * (__cdecl*
   CutsceneMessage__ReflectionInfoStruct_struct_CutsceneMessage___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall CutsceneMessage__ReflectionInfoStruct_struct_CutsceneMessage___GetFactory__o2
          (ReflectionInfoStruct_L_struct_CutsceneMessage_G_ *this)

{
  return StaticFactory;
}





//==== 006fc040 GetTypeName_006fc040 ====


/* public: virtual class util__Str_L_char_G_  LevelMessages__ReflectionInfoStruct_struct_LevelMessages___GetTypeName(void)const  */

Str_L_char_G_ * 
LevelMessages__ReflectionInfoStruct_struct_LevelMessages___GetTypeName
          (ReflectionInfoStruct_L_struct_LevelMessages_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"LevelMessages");
  return __return_storage_ptr__;
}





//==== 006fc060 GetMembers_006fc060 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   LevelMessages__ReflectionInfoStruct_struct_LevelMessages___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
LevelMessages__ReflectionInfoStruct_struct_LevelMessages___GetMembers__o2
          (ReflectionInfoStruct_L_struct_LevelMessages_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_44d41311__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_44d41311__thread_safe_static_guard_0__),
      cde_l2_44d41311__thread_safe_static_guard_0__ == -1)) {
     cde_l2_08c7bbdf_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_44d41311__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_08c7bbdf_Count);
  iVar3 = 0;
  if (0 <  cde_l2_08c7bbdf_Count) {
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
    } while (iVar3 <  cde_l2_08c7bbdf_Count);
  }
  return in_stack_00000004;
}





//==== 006fc1a0 GetMember_006fc1a0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   LevelMessages__ReflectionInfoStruct_struct_LevelMessages___GetMember(class util__Str_L_char_G_ const
   &)const  */

Str_L_char_G_ * 
LevelMessages__ReflectionInfoStruct_struct_LevelMessages___GetMember__o2
          (ReflectionInfoStruct_L_struct_LevelMessages_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_4b582083__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_4b582083__thread_safe_static_guard_0__),
      cde_l2_4b582083__thread_safe_static_guard_0__ == -1)) {
     cde_l2_4d6a10d2_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_4b582083__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_4d6a10d2_Count) {
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
LAB_006fc22d:
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
          if (cVar3 == '\0') goto LAB_006fc22d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_4d6a10d2_Count);
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





//==== 006fc340 GetFactory_006fc340 ====


/* public: virtual class util__Reflectable * (__cdecl*
   LevelMessages__ReflectionInfoStruct_struct_LevelMessages___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall LevelMessages__ReflectionInfoStruct_struct_LevelMessages___GetFactory__o2
          (ReflectionInfoStruct_L_struct_LevelMessages_G_ *this)

{
  return StaticFactory;
}





//==== 006fc350 GetTypeName_006fc350 ====


/* public: virtual class util__Str_L_char_G_  LevelBadges__ReflectionInfoStruct_struct_LevelBadges___GetTypeName(void)const  */

Str_L_char_G_ * 
LevelBadges__ReflectionInfoStruct_struct_LevelBadges___GetTypeName
          (ReflectionInfoStruct_L_struct_LevelBadges_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"LevelBadges");
  return __return_storage_ptr__;
}





//==== 006fc370 GetMembers_006fc370 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   LevelBadges__ReflectionInfoStruct_struct_LevelBadges___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
LevelBadges__ReflectionInfoStruct_struct_LevelBadges___GetMembers__o2
          (ReflectionInfoStruct_L_struct_LevelBadges_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_10fbd82f__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_10fbd82f__thread_safe_static_guard_0__),
      cde_l2_10fbd82f__thread_safe_static_guard_0__ == -1)) {
     cde_l2_a236e13e_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_10fbd82f__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_a236e13e_Count);
  iVar3 = 0;
  if (0 <  cde_l2_a236e13e_Count) {
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
    } while (iVar3 <  cde_l2_a236e13e_Count);
  }
  return in_stack_00000004;
}





//==== 006fc4b0 GetMember_006fc4b0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   LevelBadges__ReflectionInfoStruct_struct_LevelBadges___GetMember(class util__Str_L_char_G_ const
   &)const  */

Str_L_char_G_ * 
LevelBadges__ReflectionInfoStruct_struct_LevelBadges___GetMember__o2
          (ReflectionInfoStruct_L_struct_LevelBadges_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_50deacda__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_50deacda__thread_safe_static_guard_0__),
      cde_l2_50deacda__thread_safe_static_guard_0__ == -1)) {
     cde_l2_50545bf3_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_50deacda__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_50545bf3_Count) {
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
LAB_006fc53d:
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
          if (cVar3 == '\0') goto LAB_006fc53d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_50545bf3_Count);
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





//==== 006fc650 GetFactory_006fc650 ====


/* public: virtual class util__Reflectable * (__cdecl*
   LevelBadges__ReflectionInfoStruct_struct_LevelBadges___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall LevelBadges__ReflectionInfoStruct_struct_LevelBadges___GetFactory__o2
          (ReflectionInfoStruct_L_struct_LevelBadges_G_ *this)

{
  return StaticFactory;
}





//==== 006fc660 GetTypeName_006fc660 ====


/* public: virtual class util__Str_L_char_G_  CelestialLocation__ReflectionInfoStruct_struct_CelestialLocation___GetTypeName(void)const  */

Str_L_char_G_ * 
CelestialLocation__ReflectionInfoStruct_struct_CelestialLocation___GetTypeName
          (ReflectionInfoStruct_L_struct_CelestialLocation_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"CelestialLocation");
  return __return_storage_ptr__;
}





//==== 006fc680 GetMembers_006fc680 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   CelestialLocation__ReflectionInfoStruct_struct_CelestialLocation___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
CelestialLocation__ReflectionInfoStruct_struct_CelestialLocation___GetMembers__o2
          (ReflectionInfoStruct_L_struct_CelestialLocation_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_136a2cb6__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_136a2cb6__thread_safe_static_guard_0__),
      cde_l2_136a2cb6__thread_safe_static_guard_0__ == -1)) {
     cde_l2_e56534e8_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_136a2cb6__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_e56534e8_Count);
  iVar3 = 0;
  if (0 <  cde_l2_e56534e8_Count) {
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
    } while (iVar3 <  cde_l2_e56534e8_Count);
  }
  return in_stack_00000004;
}





//==== 006fc7c0 GetMember_006fc7c0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   CelestialLocation__ReflectionInfoStruct_struct_CelestialLocation___GetMember(class
   util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
CelestialLocation__ReflectionInfoStruct_struct_CelestialLocation___GetMember__o2
          (ReflectionInfoStruct_L_struct_CelestialLocation_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_fafd6e71__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_fafd6e71__thread_safe_static_guard_0__),
      cde_l2_fafd6e71__thread_safe_static_guard_0__ == -1)) {
     cde_l2_486b1ce7_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_fafd6e71__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_486b1ce7_Count) {
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
LAB_006fc84d:
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
          if (cVar3 == '\0') goto LAB_006fc84d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_486b1ce7_Count);
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





//==== 006fc960 GetFactory_006fc960 ====


/* public: virtual class util__Reflectable * (__cdecl*
   CelestialLocation__ReflectionInfoStruct_struct_CelestialLocation___GetFactory(void)const )(void)
    */

_func_Reflectable_ptr * 
__thiscall CelestialLocation__ReflectionInfoStruct_struct_CelestialLocation___GetFactory__o2
          (ReflectionInfoStruct_L_struct_CelestialLocation_G_ *this)

{
  return StaticFactory;
}





//==== 006fc970 GetTypeName_006fc970 ====


/* public: virtual class util__Str_L_char_G_  Level__ReflectionInfoStruct_struct_Level___GetTypeName(void)const  */

Str_L_char_G_ * 
Level__ReflectionInfoStruct_struct_Level___GetTypeName
          (ReflectionInfoStruct_L_struct_Level_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"Level");
  return __return_storage_ptr__;
}





//==== 006fc990 GetMembers_006fc990 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   Level__ReflectionInfoStruct_struct_Level___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * __thiscall
Level__ReflectionInfoStruct_struct_Level___GetMembers__o2(ReflectionInfoStruct_L_struct_Level_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_495df8a3__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_495df8a3__thread_safe_static_guard_0__),
      cde_l2_495df8a3__thread_safe_static_guard_0__ == -1)) {
     cde_l2_9e585c3f_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_495df8a3__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_9e585c3f_Count);
  iVar3 = 0;
  if (0 <  cde_l2_9e585c3f_Count) {
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
    } while (iVar3 <  cde_l2_9e585c3f_Count);
  }
  return in_stack_00000004;
}





//==== 006fcad0 GetMember_006fcad0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   Level__ReflectionInfoStruct_struct_Level___GetMember(class util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
Level__ReflectionInfoStruct_struct_Level___GetMember__o2
          (ReflectionInfoStruct_L_struct_Level_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_b18a9677__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_b18a9677__thread_safe_static_guard_0__),
      cde_l2_b18a9677__thread_safe_static_guard_0__ == -1)) {
     cde_l2_60c922f8_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_b18a9677__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_60c922f8_Count) {
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
LAB_006fcb5d:
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
          if (cVar3 == '\0') goto LAB_006fcb5d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_60c922f8_Count);
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





//==== 006fcc70 GetFactory_006fcc70 ====


/* public: virtual class util__Reflectable * (__cdecl*__thiscall Level__ReflectionInfoStruct_struct_Level___GetFactory(void)const )(void) */

_func_Reflectable_ptr * __thiscall
Level__ReflectionInfoStruct_struct_Level___GetFactory(ReflectionInfoStruct_L_struct_Level_G_ *this)

{
  return StaticFactory;
}





//==== 006fcc80 GetTypeName_006fcc80 ====


/* public: virtual class util__Str_L_char_G_  Campaign__ReflectionInfoStruct_struct_Campaign___GetTypeName(void)const  */

Str_L_char_G_ * 
Campaign__ReflectionInfoStruct_struct_Campaign___GetTypeName
          (ReflectionInfoStruct_L_struct_Campaign_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"Campaign");
  return __return_storage_ptr__;
}





//==== 006fcca0 GetMembers_006fcca0 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   Campaign__ReflectionInfoStruct_struct_Campaign___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
Campaign__ReflectionInfoStruct_struct_Campaign___GetMembers__o2
          (ReflectionInfoStruct_L_struct_Campaign_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_ed67cc0d__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_ed67cc0d__thread_safe_static_guard_0__),
      cde_l2_ed67cc0d__thread_safe_static_guard_0__ == -1)) {
     cde_l2_f3d6b6c2_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_ed67cc0d__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_f3d6b6c2_Count);
  iVar3 = 0;
  if (0 <  cde_l2_f3d6b6c2_Count) {
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
    } while (iVar3 <  cde_l2_f3d6b6c2_Count);
  }
  return in_stack_00000004;
}





//==== 006fcde0 GetMember_006fcde0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   Campaign__ReflectionInfoStruct_struct_Campaign___GetMember(class util__Str_L_char_G_ const &)const
    */

Str_L_char_G_ * 
Campaign__ReflectionInfoStruct_struct_Campaign___GetMember__o2
          (ReflectionInfoStruct_L_struct_Campaign_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_24a56ec7__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_24a56ec7__thread_safe_static_guard_0__),
      cde_l2_24a56ec7__thread_safe_static_guard_0__ == -1)) {
     cde_l2_7ac7509c_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_24a56ec7__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_7ac7509c_Count) {
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
LAB_006fce6d:
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
          if (cVar3 == '\0') goto LAB_006fce6d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_7ac7509c_Count);
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





//==== 006fcf80 GetFactory_006fcf80 ====


/* public: virtual class util__Reflectable * (__cdecl*
   Campaign__ReflectionInfoStruct_struct_Campaign___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall Campaign__ReflectionInfoStruct_struct_Campaign___GetFactory__o2
          (ReflectionInfoStruct_L_struct_Campaign_G_ *this)

{
  return StaticFactory;
}





//==== 006fcf90 GetTypeName_006fcf90 ====


/* public: virtual class util__Str_L_char_G_  GlobalSaveValues__ReflectionInfoStruct_struct_GlobalSaveValues___GetTypeName(void)const  */

Str_L_char_G_ * 
GlobalSaveValues__ReflectionInfoStruct_struct_GlobalSaveValues___GetTypeName
          (ReflectionInfoStruct_L_struct_GlobalSaveValues_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"GlobalSaveValues");
  return __return_storage_ptr__;
}





//==== 006fcfb0 GetMembers_006fcfb0 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   GlobalSaveValues__ReflectionInfoStruct_struct_GlobalSaveValues___GetMembers(void)const  */

undefined4 
GlobalSaveValues__ReflectionInfoStruct_struct_GlobalSaveValues___GetMembers__o2
          (ReflectionInfoStruct_L_struct_GlobalSaveValues_G_ *this)

{
  undefined4 in_stack_00000004;
  
  StaticGetMembers();
}





//==== 006fcfd0 GetMember_006fcfd0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   GlobalSaveValues__ReflectionInfoStruct_struct_GlobalSaveValues___GetMember(class util__Str_L_char_G_
   const &)const  */

Str_L_char_G_ * 
GlobalSaveValues__ReflectionInfoStruct_struct_GlobalSaveValues___GetMember__o2
          (ReflectionInfoStruct_L_struct_GlobalSaveValues_G_ *this,Str_L_char_G_ *param_1)

{
  StaticGetMember(param_1);
  return param_1;
}





//==== 006fcff0 GetFactory_006fcff0 ====


/* public: virtual class util__Reflectable * (__cdecl*
   GlobalSaveValues__ReflectionInfoStruct_struct_GlobalSaveValues___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall GlobalSaveValues__ReflectionInfoStruct_struct_GlobalSaveValues___GetFactory__o2
          (ReflectionInfoStruct_L_struct_GlobalSaveValues_G_ *this)

{
  return StaticFactory;
}





//==== 006fd000 GetReflectionDependencies_006fd000 ====


/* public: virtual class util__Darray_L_classutil__Reflectable_P_G_ __thiscall
   StarterFleet__GetReflectionDependencies(void)const  */

void __thiscall StarterFleet__GetReflectionDependencies(StarterFleet *this)

{
  undefined8 stack0xfffffffc;
  int *piVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  Darray_L_class_util__Reflectable_P_G_ *in_stack_00000004;
  int iStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar1 = (int *)((int)&(this->CustomOrbit).Data.Epoch_JulianYears + 4);
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  iVar4 = (**(code **)(uintptr_t)(*piVar1 + 0xc))();
  util__Darray_class_util__Reflectable____Darray_class_util__Reflectable(in_stack_00000004,iVar4);
  iStack_c = 0;
  iVar4 = (**(code **)(uintptr_t)(*piVar1 + 0xc))();
  if (iStack_c < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)*piVar1)(&iStack_c);
      iVar4 = *(int *)(in_stack_00000004 + 8);
      uVar2 = *puVar5;
      iStack_10 = iVar4 + 1;
      util__Darray_class_util__Reflectable____SetSize(in_stack_00000004,&iStack_10);
      bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize
                        ((Darray_L_enum_GraphicsResource__Type_G_ *)in_stack_00000004,iVar4);
      if (bVar3) {
        *(undefined4 *)(*(int *)(in_stack_00000004 + 4) + -4 + *(int *)(in_stack_00000004 + 8) * 4)
             = uVar2;
      }
      iStack_c = iStack_c + 1;
      iVar4 = (**(code **)(uintptr_t)(*piVar1 + 0xc))();
    } while (iStack_c < iVar4);
  }
  util__Darray_class_WeaponModule____RemoveDuplicates
            ((Darray_L_class_WeaponModule_P_G_ *)in_stack_00000004);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 006fd6f0 Darray_NewsItem___006fd6f0 ====


/* public:  util__Darray_L_classNewsItem_P_G___Darray_L_classNewsItem_P_G_(class
   util__Darray_L_classNewsItem_P_G_ const &) */

Darray_L_class_NewsItem_P_G_ * 
util__Darray_class_NewsItem____Darray_class_NewsItem__o2
          (Darray_L_class_NewsItem_P_G_ *this,Darray_L_class_NewsItem_P_G_ *param_1)

{
  Darray_L_class_NewsItem_P_G_ *pDVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  pDVar1 = param_1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = &vftable_142;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  param_1 = (Darray_L_class_NewsItem_P_G_ *)(**(code **)(*(int *)param_1 + 0xc))();
  Darray_L_class_util__Reflectable_P_G___SetSize
            ((Darray_L_class_util__Reflectable_P_G_ *)this,(int *)&param_1);
  param_1 = (Darray_L_class_NewsItem_P_G_ *)
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





//==== 006fd7a0 Darray_NewsItem___006fd7a0 ====


/* public:  util__Darray_L_classNewsItem_P_G___Darray_L_classNewsItem_P_G_(int) */

Darray_L_class_NewsItem_P_G_ * 
util__Darray_class_NewsItem____Darray_class_NewsItem(Darray_L_class_NewsItem_P_G_ *this,int param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  
  *(undefined ***)this = &vftable_142;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(int *)(this + 0xc) = param_1;
  if ((param_1 < 0) || (0x3fffffff < param_1)) {
    *(undefined4 *)(this + 0xc) = 0;
  }
  else if (0 < param_1) {
    uVar3 = -(uint)((int)((ulonglong)(uint)param_1 * 4 >> 0x20) != 0) |
            (uint)((ulonglong)(uint)param_1 * 4);
    pvVar1 = (void *)(uintptr_t)(port_op_new(uVar3));
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      memset(pvVar1,0,uVar3);
    }
    *(void **)(this + 4) = pvVar1;
    iVar2 = 0;
    if (0 < *(int *)(this + 0xc)) {
      do {
        *(undefined4 *)(*(int *)(this + 4) + iVar2 * 4) = 0;
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(this + 0xc));
      return this;
    }
  }
  return this;
}





//==== 006fd840 Darray_LevelRecordMetadata__006fd840 ====


/* public:  util__Darray_L_structLevelRecordMetadata_G___Darray_L_struct_LevelRecordMetadata_G_(int) */

Darray_L_struct_LevelRecordMetadata_G_ * 
util__Darray_struct_LevelRecordMetadata___Darray_struct_LevelRecordMetadata
          (Darray_L_struct_LevelRecordMetadata_G_ *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  Str_L_char_G_ SStack_2c;
  Str_L_char_G_ SStack_20;
  Str_L_char_G_ SStack_14;
  undefined4 uStack_8;
  
  *(undefined ***)this = &vftable_78;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(int *)(this + 0xc) = param_1;
  if ((param_1 < 0) || (0x3fffffff < param_1)) {
    *(undefined4 *)(this + 0xc) = 0;
  }
  else if (0 < param_1) {
    uVar3 = -(uint)((int)((ulonglong)(uint)param_1 * 0x2c >> 0x20) != 0) |
            (uint)((ulonglong)(uint)param_1 * 0x2c);
    piVar1 = (int *)port_op_new(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
    if (piVar1 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      *piVar1 = param_1;
      piVar4 = piVar1 + 1;
      if (param_1 != 0) {
        piVar2 = piVar1 + 4;
        piVar1 = piVar4;
        do {
          *piVar1 = 0;
          piVar1 = piVar1 + 0xb;
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
          param_1 = param_1 + -1;
          piVar2 = piVar2 + 0xb;
        } while (param_1 != 0);
      }
    }
    *(int **)(this + 4) = piVar4;
    param_1 = 0;
    if (0 < *(int *)(this + 0xc)) {
      iVar5 = 0;
      do {
        puVar6 = (undefined4 *)(*(int *)(this + 4) + iVar5);
        SStack_14.Length = 0;
        SStack_2c.Data = (char *)0x0;
        SStack_2c.Capacity = 0;
        SStack_2c.Length = 0;
        SStack_20.Data = (char *)0x0;
        uStack_8 = 0;
        SStack_20.Capacity = 0;
        SStack_20.Length = 0;
        SStack_14.Data = (char *)0x0;
        SStack_14.Capacity = 0;
        *puVar6 = 0;
        util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar6 + 1),&SStack_2c);
        util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar6 + 4),&SStack_20);
        util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar6 + 7),&SStack_14);
        iVar5 = iVar5 + 0x2c;
        param_1 = param_1 + 1;
        puVar6[10] = 0;
      } while (param_1 < *(int *)(this + 0xc));
      return this;
    }
  }
  return this;
}





//==== 006fd9c0 Campaign ====

/* public: __thiscall Campaign__Campaign(void) */

Campaign * __thiscall Campaign__Campaign(Campaign *this)

{
  EditorReflectable__EditorReflectable((EditorReflectable *)this);
  this->_pad_0x0_0 = (int)&vftable_422;
  this->SandboxLevel = (Level *)0x0;
  this->ModPriority = (int)&vftable_2;
  this[1]._pad_0x0_0 = 0;
  this[1]._pad_0x4_1 = 0;
  this[1]._pad_0x8_2 = 0;
  this[1]._pad_0xc_3 = (int)&vftable_2;
  this[1].MainMenuMusic = (SoundEffect *)0x0;
  this[1].LevelOrder._padfb0 = 0;
  this[1].LevelOrder.Data = (Level **)0x0;
  this[1].LevelOrder.Size = 0;
  *(undefined1 *)&this[1].LevelOrder.Capacity = 0;
  return this;
}

//==== 006fda20 CutsceneMessage ====

/* public: __thiscall CutsceneMessage__CutsceneMessage(void) */

CutsceneMessage * __thiscall CutsceneMessage__CutsceneMessage(CutsceneMessage *this)

{
  Str_L_char_G_ local_1c;
  Str_L_char_G_ local_10;
  
  local_1c.Data = (char *)0x0;
  local_1c.Capacity = 0;
  local_1c.Length = 0;
  this->_pad_0x4_1 = 0;
  this->_pad_0x8_2 = 0;
  this->_pad_0xc_3 = 0;
  this->_pad_0x0_0 = (int)&vftable_415;
  local_10.Data = (char *)0x0;
  local_10.Capacity = 0;
  local_10.Length = 0;
  util__LocStr__LocStr((LocStr *)&this->Message,&local_10,&local_1c);
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
    local_10.Data = (char *)0x0;
  }
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
  }
  return this;
}

//==== 006fdab0 Level ====

/* public: __thiscall Level__Level(void) */

Level * __thiscall Level__Level(Level *this)

{
  Str_L_char_G_ local_1c;
  Str_L_char_G_ local_10;
  
  EditorReflectable__EditorReflectable((EditorReflectable *)this);
  this->_pad_0x0_0 = (int)&vftable_421;
  (this->QuickInstructions).Capacity = 0;
  local_1c.Data = (char *)0x0;
  local_1c.Capacity = 0;
  (this->QuickInstructions).Length = 0;
  (this->Difficulty).Data = (char *)0x0;
  (this->Difficulty).Capacity = 0;
  (this->Difficulty).Length = 0;
  local_1c.Length = 0;
  local_10.Data = (char *)0x0;
  local_10.Capacity = 0;
  local_10.Length = 0;
  util__LocStr__LocStr((LocStr *)&this->TimeLimit_JulianDays,&local_10,&local_1c);
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
    local_10.Data = (char *)0x0;
  }
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
  }
  local_1c.Data = (char *)0x0;
  local_1c.Capacity = 0;
  local_1c.Length = 0;
  local_10.Data = (char *)0x0;
  local_10.Capacity = 0;
  local_10.Length = 0;
  util__LocStr__LocStr((LocStr *)&(this->Location).MainBody,&local_10,&local_1c);
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
    local_10.Data = (char *)0x0;
  }
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
  }
  this->PlayerAlliance = (Faction *)0x0;
  this->EnemyAlliance = (Faction *)0x0;
  (this->AdditionalAlliances)._padfb0 = 0;
  (this->AdditionalAlliances).Data = (Faction **)0x0;
  (this->AdditionalAlliances).Size = (int)&vftable_2;
  (this->AdditionalAlliances).Capacity = 0;
  this->AI = (MilitaryDoctrine *)0x0;
  this->AlliedAI = (MilitaryDoctrine *)0x0;
  *(undefined2 *)&this->Music = 0;
  *(undefined4 *)&this->UnlockModuleDesign = 0;
  (this->Fleets)._pad_0x0_0 = 0;
  (this->Fleets).Data = (StartingFleet *)0x0;
  (this->Fleets).Size = 0;
  (this->Fleets).Capacity = 0;
  (this->Fleets)._pad_0x0_0 = 0;
  (this->Fleets).Data = (StartingFleet *)0x0;
  (this->Fleets).Size = 0;
  *(undefined ***)&this->UnlockModuleDesign = &vftable_414;
  *(undefined1 *)&(this->Messages)._pad_0x0_0 = 0;
  (this->Messages)._pad_0x4_1 = (int)&vftable_2;
  (this->Messages)._pad_0x8_2 = 0;
  (this->Messages)._pad_0xc_3 = 0;
  (this->Messages).Starting._pad_0x0_0 = 0;
  (this->Messages).Starting.Size = 0;
  (this->Messages).Starting.Capacity = 0;
  (this->Messages).StartingTutorial._pad_0x0_0 = 0;
  (this->Messages).Starting.Data = (LevelSpeakerMessage *)&vftable_419;
  (this->Messages).StartingTutorial.Data = (LevelTutorialMessage *)0x0;
  (this->Messages).StartingTutorial.Size = 0;
  *(undefined1 *)&(this->Messages).StartingTutorial.Capacity = 0;
  LevelMessages__LevelMessages((LevelMessages *)&(this->Messages).NewTrajectoryTutorial);
  *(undefined1 *)&(this->VictoryCondition).Data._pad_0xc_3 = 0;
  *(undefined4 *)&(this->VictoryCondition).IsValidData = 0;
  this[1]._pad_0x0_0 = 0;
  this[1]._pad_0x4_1 = 0;
  (undefined **)((this->VictoryCondition).Data.AllShipsWithFlagsHaveFuel =
       &vftable_420);
  this[1]._pad_0x8_2 = 0;
  *(undefined4 *)((char *)&this[1] + 0xc) = 0;
  *(undefined ***)&this[1].JulianYear = (undefined **)(&vftable_2);
  *(undefined4 *)((int)&this[1].JulianYear + 4) = 0;
  this[1].Description.Data = (char *)0x0;
  this[1].Description.Capacity = 0;
  this[1].Description.Length = (int)&vftable_356;
  this[1].ShortDescription.Data = (char *)0x0;
  this[1].ShortDescription.Capacity = 0;
  this[1].ShortDescription.Length = 0;
  *(undefined1 *)&this[1].QuickInstructions.Data = 0;
  return this;
}

//==== 006fdd50 LevelMessages ====

/* public: __thiscall LevelMessages__LevelMessages(void) */

LevelMessages * __thiscall LevelMessages__LevelMessages(LevelMessages *this)

{
  this->_pad_0x4_1 = 0;
  this->_pad_0x8_2 = 0;
  this->_pad_0xc_3 = 0;
  this->_pad_0x0_0 = (int)&vftable_418;
  (this->Starting)._pad_0x0_0 = (int)&vftable_416;
  (this->Starting).Data = (LevelSpeakerMessage *)0x0;
  (this->Starting).Size = 0;
  (this->Starting).Capacity = 0;
  (this->StartingTutorial)._pad_0x0_0 = (int)&vftable_417;
  (this->StartingTutorial).Data = (LevelTutorialMessage *)0x0;
  (this->StartingTutorial).Size = 0;
  (this->StartingTutorial).Capacity = 0;
  (this->NewTrajectoryTutorial)._pad_0x0_0 = (int)&vftable_417;
  (this->NewTrajectoryTutorial).Data = (LevelTutorialMessage *)0x0;
  (this->NewTrajectoryTutorial).Size = 0;
  (this->NewTrajectoryTutorial).Capacity = 0;
  (this->EnterCombat)._pad_0x0_0 = (int)&vftable_416;
  (this->EnterCombat).Data = (LevelSpeakerMessage *)0x0;
  (this->EnterCombat).Size = 0;
  (this->EnterCombat).Capacity = 0;
  (this->EnterCombatTutorial)._pad_0x0_0 = (int)&vftable_417;
  (this->EnterCombatTutorial).Data = (LevelTutorialMessage *)0x0;
  (this->EnterCombatTutorial).Size = 0;
  (this->EnterCombatTutorial).Capacity = 0;
  (this->GotIntoRangeTutorial)._pad_0x0_0 = (int)&vftable_417;
  (this->GotIntoRangeTutorial).Data = (LevelTutorialMessage *)0x0;
  (this->GotIntoRangeTutorial).Size = 0;
  (this->GotIntoRangeTutorial).Capacity = 0;
  (this->EnemiesDamagedTutorial)._pad_0x0_0 = (int)&vftable_417;
  (this->EnemiesDamagedTutorial).Data = (LevelTutorialMessage *)0x0;
  (this->EnemiesDamagedTutorial).Size = 0;
  (this->EnemiesDamagedTutorial).Capacity = 0;
  (this->AlliesDamagedTutorial)._pad_0x0_0 = (int)&vftable_417;
  (this->AlliesDamagedTutorial).Data = (LevelTutorialMessage *)0x0;
  (this->AlliesDamagedTutorial).Size = 0;
  (this->AlliesDamagedTutorial).Capacity = 0;
  (this->EnemiesLostModuleTutorial)._pad_0x0_0 = (int)&vftable_417
  ;
  (this->EnemiesLostModuleTutorial).Data = (LevelTutorialMessage *)0x0;
  (this->EnemiesLostModuleTutorial).Size = 0;
  (this->EnemiesLostModuleTutorial).Capacity = 0;
  (this->AlliesLostModuleTutorial)._pad_0x0_0 = (int)&vftable_417;
  (this->AlliesLostModuleTutorial).Data = (LevelTutorialMessage *)0x0;
  (this->AlliesLostModuleTutorial).Size = 0;
  (this->AlliesLostModuleTutorial).Capacity = 0;
  (this->MissionFailure)._pad_0x0_0 = (int)&vftable_416;
  (this->MissionFailure).Data = (LevelSpeakerMessage *)0x0;
  (this->MissionFailure).Size = 0;
  (this->MissionFailure).Capacity = 0;
  (this->MissionSuccess)._pad_0x0_0 = (int)&vftable_416;
  (this->MissionSuccess).Data = (LevelSpeakerMessage *)0x0;
  (this->MissionSuccess).Size = 0;
  (this->MissionSuccess).Capacity = 0;
  memset(&this->StartingCutscene,0,0x2c);
  CutsceneMessage__CutsceneMessage(&(this->StartingCutscene).Data);
  *(undefined1 *)&this[1]._pad_0x4_1 = 0;
  *(undefined1 *)&this[1]._pad_0x8_2 = 0;
  return this;
}

//==== 006fdf30 LevelRecord_006fdf30 ====

/* public:  LevelRecord__LevelRecord__o3(void) */

LevelRecord * __thiscall LevelRecord__LevelRecord(LevelRecord *this)

{
  this->_pad_0x4_1 = 0;
  this->_pad_0x8_2 = 0;
  this->_pad_0xc_3 = 0;
  this->_pad_0x0_0 = (int)&vftable_64;
  this->ForLevel = (Level *)0x0;
  (this->TimeElapsed_s).Data = 0.0;
  (this->TimeElapsed_s).IsValidData = false;
  (this->DeltaVSpent_km__s).Data = 0.0;
  (this->DeltaVSpent_km__s).IsValidData = false;
  (this->CapitalShipsAlive_Percent).Data = 0.0;
  (this->CapitalShipsAlive_Percent).IsValidData = false;
  (this->CapitalShipsUnscathed_Percent).Data = 0.0;
  (this->CapitalShipsUnscathed_Percent).IsValidData = false;
  (this->EnemyModulesLeft_Percent).Data = 0.0;
  (this->EnemyModulesLeft_Percent).IsValidData = false;
  this->IsADeveloperRecord = false;
  return this;
}

//==== 006fdf90 LevelRecordMetadata ====


/* public:  LevelRecordMetadata__LevelRecordMetadata(unsigned int,class
   util__Str_L_char_G_,class util__Str_L_char_G_,class util__Str_L_char_G_,bool,bool,bool,bool) */

LevelRecordMetadata * 
LevelRecordMetadata__LevelRecordMetadata
          (LevelRecordMetadata *this,uint param_1,Str_L_char_G_ param_2,Str_L_char_G_ param_3,
          Str_L_char_G_ param_4,bool param_5,bool param_6,bool param_7,bool param_8)

{
  this->Offset = param_1;
  util__Str_char___Str_char(&this->Name,&param_2);
  util__Str_char___Str_char(&this->Tooltip,&param_3);
  util__Str_char___Str_char((Str_L_char_G_ *)&this->LessIsBetter,&param_4);
  *(bool *)&this[1].Name.Capacity = param_5;
  *(bool *)((int)&this[1].Name.Capacity + 1) = param_6;
  *(bool *)((int)&this[1].Name.Capacity + 2) = param_7;
  *(bool *)((int)&this[1].Name.Capacity + 3) = param_8;
  if (param_2.Data != (char *)0x0) {
    port_op_delete(param_2.Data);
    param_2.Data = (char *)0x0;
  }
  if (param_3.Data != (char *)0x0) {
    port_op_delete(param_3.Data);
    param_3.Data = (char *)0x0;
  }
  if (param_4.Data != (char *)0x0) {
    port_op_delete(param_4.Data);
  }
  return this;
}





//==== 006fe020 LevelSpeakerMessage ====


/* public: __thiscall LevelSpeakerMessage__LevelSpeakerMessage(void) */

LevelSpeakerMessage * __thiscall LevelSpeakerMessage__LevelSpeakerMessage(LevelSpeakerMessage *this)

{
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
  SStack_1c.Data = (char *)0x0;
  SStack_1c.Capacity = 0;
  SStack_1c.Length = 0;
  this->Talker = (Speaker *)0x0;
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  util__LocStr__LocStr((LocStr *)&this->Message,&SStack_10,&SStack_1c);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
    SStack_10.Data = (char *)0x0;
  }
  if (SStack_1c.Data != (char *)0x0) {
    port_op_delete(SStack_1c.Data);
  }
  return this;
}





//==== 006fe0a0 LevelSpeakerMessageReflectionConstructor ====

/* public: 
   LevelSpeakerMessageReflectionConstructor__LevelSpeakerMessageReflectionConstructor(void) */

LevelSpeakerMessageReflectionConstructor * 
LevelSpeakerMessageReflectionConstructor__LevelSpeakerMessageReflectionConstructor
          (LevelSpeakerMessageReflectionConstructor *this)

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
  
  util__Str_char___Str_char(&local_20,"LevelSpeakerMessage");
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
    local_30.Data[local_30.Size + -1] = 4;
  }
  local_50._pad_0x0_0 = 0;
  local_50.Data = (Str_L_char_G_ *)0x0;
  local_50.Size = 0;
  local_50.Capacity = 0;
  util__Darray_L_util__Str_L_char_G___G___Darray_L_util__Str_L_char_G___G_(&local_50,2);
  util__Str_char___Str_char(&local_14,"Talker");
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
  util__Str_char___Str_char(&local_14,"Message");
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
  util__Str_char___Str_char(&local_14,"Speaker*");
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
  util__Str_char___Str_char(&local_14,"LocStr");
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
  pcVar11 = (long long int (*)())(LevelSpeakerMessage__CopyUntypedTuple);
  pcVar10 = (long long int (*)())(LevelSpeakerMessage__ClearUntypedTuple);
  pcVar9 = (long long int (*)())(LevelSpeakerMessage__DestroyArray);
  pcVar8 = (long long int (*)())(LevelSpeakerMessage__AllocateArray);
  pDVar7 = &local_30;
  pDVar6 = &local_50;
  pDVar5 = &local_40;
  pSVar4 = &local_20;
  this_00 = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterTuple
            (this_00,pSVar4,pDVar5,pDVar6,pDVar7, (_func_void_ptr_uint *)(uintptr_t)pcVar8,(_func_void_void_ptr *)pcVar9,(_func_void_void_ptr *)pcVar10,(_func_void_void_ptr_void_ptr *)pcVar11);
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

//==== 006fe370 LevelTutorialMessage ====


/* public: __thiscall LevelTutorialMessage__LevelTutorialMessage(void) */

LevelTutorialMessage * __thiscall
LevelTutorialMessage__LevelTutorialMessage(LevelTutorialMessage *this)

{
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
  SStack_1c.Data = (char *)0x0;
  SStack_1c.Capacity = 0;
  SStack_1c.Length = 0;
  this->Talker = (Speaker *)0x0;
  (this->TutorialTag).Data = (char *)0x0;
  (this->TutorialTag).Capacity = 0;
  (this->TutorialTag).Length = 0;
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  util__LocStr__LocStr((LocStr *)&this->Message,&SStack_10,&SStack_1c);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
    SStack_10.Data = (char *)0x0;
  }
  if (SStack_1c.Data != (char *)0x0) {
    port_op_delete(SStack_1c.Data);
  }
  return this;
}





//==== 006fe400 LevelTutorialMessageReflectionConstructor ====

/* public: 
   LevelTutorialMessageReflectionConstructor__LevelTutorialMessageReflectionConstructor(void) */

LevelTutorialMessageReflectionConstructor * 
LevelTutorialMessageReflectionConstructor__LevelTutorialMessageReflectionConstructor
          (LevelTutorialMessageReflectionConstructor *this)

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
  
  util__Str_char___Str_char(&local_20,"LevelTutorialMessage");
  local_30._pad_0x0_0 = (int)&vftable_6;
  local_30.Data = (uint *)0x0;
  local_30.Size = 0;
  local_30.Capacity = 3;
  local_30.Data = (uint *)(uintptr_t)(port_op_new(0xc));
  iVar1 = local_30.Size;
  if (local_30.Data == (uint *)0x0) {
    local_30.Data = (uint *)0x0;
  }
  else {
    local_30.Data[0] = 0;
    local_30.Data[1] = 0;
    local_30.Data[2] = 0;
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
  iVar1 = local_30.Size;
  if (bVar2) {
    local_30.Data[local_30.Size + -1] = 4;
  }
  local_8 = local_30.Size + 1;
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)&local_30,&local_8);
  bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)&local_30,iVar1);
  if (bVar2) {
    local_30.Data[local_30.Size + -1] = 0x10;
  }
  local_50._pad_0x0_0 = 0;
  local_50.Data = (Str_L_char_G_ *)0x0;
  local_50.Size = 0;
  local_50.Capacity = 0;
  util__Darray_L_util__Str_L_char_G___G___Darray_L_util__Str_L_char_G___G_(&local_50,3);
  util__Str_char___Str_char(&local_14,"Talker");
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
  util__Str_char___Str_char(&local_14,"TutorialTag");
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
  util__Str_char___Str_char(&local_14,"Message");
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
  util__Darray_L_util__Str_L_char_G___G___Darray_L_util__Str_L_char_G___G_(&local_40,3);
  util__Str_char___Str_char(&local_14,"Speaker*");
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
  util__Str_char___Str_char(&local_14,"AStr");
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
  util__Str_char___Str_char(&local_14,"LocStr");
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
  pcVar11 = (long long int (*)())(LevelTutorialMessage__CopyUntypedTuple);
  pcVar10 = (long long int (*)())(LevelTutorialMessage__ClearUntypedTuple);
  pcVar9 = (long long int (*)())(LevelTutorialMessage__DestroyArray);
  pcVar8 = (long long int (*)())(LevelTutorialMessage__AllocateArray);
  pDVar7 = &local_30;
  pDVar6 = &local_50;
  pDVar5 = &local_40;
  pSVar4 = &local_20;
  this_00 = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterTuple
            (this_00,pSVar4,pDVar5,pDVar6,pDVar7, (_func_void_ptr_uint *)(uintptr_t)pcVar8,(_func_void_void_ptr *)pcVar9,(_func_void_void_ptr *)pcVar10,(_func_void_void_ptr_void_ptr *)pcVar11);
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

//==== 006fe7c0 Level_006fe7c0 ====

/* public: virtual __thiscall Level___Level(void) */

void __thiscall Level___Level(Level *this)

{
  char *pcVar1;
  void *pvVar2;
  CelestialBody **ppCVar3;
  CelestialBody *pCVar4;
  
  pcVar1 = this[1].ShortDescription.Data;
  this[1].Description.Length = (int)&vftable_356;
  if (pcVar1 != (char *)0x0) {
    port_op_delete(pcVar1);
  }
  this[1].ShortDescription.Data = (char *)0x0;
  this[1].Description.Length = (int)&vftable;
  pvVar2 = *(void **)((int)&this[1].JulianYear + 4);
  *(undefined ***)&this[1].JulianYear = (undefined **)(&vftable_2);
  if (pvVar2 != (void *)0x0) {
    port_op_delete(pvVar2);
  }
  *(undefined4 *)((int)&this[1].JulianYear + 4) = 0;
  *(undefined ***)&this[1].JulianYear = (undefined **)(&vftable);
  (undefined **)((this->VictoryCondition).Data.AllShipsWithFlagsHaveFuel =
       &vftable_5);
  pvVar2 = (void *)((this->VictoryCondition).IsValidData);
  if (pvVar2 != (void *)0x0) {
    port_op_delete(pvVar2);
    *(undefined4 *)&(this->VictoryCondition).IsValidData = 0;
  }
  LevelMessages___LevelMessages((LevelMessages *)&(this->Messages).NewTrajectoryTutorial);
  (this->Messages).Starting.Data = (LevelSpeakerMessage *)&vftable_5;
  pvVar2 = (void *)(this->Messages).Starting.Size;
  if (pvVar2 != (void *)0x0) {
    port_op_delete(pvVar2);
    (this->Messages).Starting.Size = 0;
  }
  pvVar2 = (void *)(this->Messages)._pad_0x8_2;
  (this->Messages)._pad_0x4_1 = (int)&vftable_2;
  if (pvVar2 != (void *)0x0) {
    port_op_delete(pvVar2);
  }
  (this->Messages)._pad_0x8_2 = 0;
  (this->Messages)._pad_0x4_1 = (int)&vftable;
  *(undefined ***)&this->UnlockModuleDesign = &vftable_5;
  pvVar2 = (void *)(this->Fleets)._pad_0x0_0;
  if (pvVar2 != (void *)0x0) {
    port_op_delete(pvVar2);
    (this->Fleets)._pad_0x0_0 = 0;
  }
  pvVar2 = (void *)(this->AdditionalAlliances).Capacity;
  (this->AdditionalAlliances).Size = (int)&vftable_2;
  if (pvVar2 != (void *)0x0) {
    port_op_delete(pvVar2);
  }
  (this->AdditionalAlliances).Capacity = 0;
  (this->AdditionalAlliances).Size = (int)&vftable;
  ppCVar3 = (this->Location).FilteredBodies.Data;
  if (ppCVar3 != (CelestialBody **)0x0) {
    port_op_delete(ppCVar3);
    (this->Location).FilteredBodies.Data = (CelestialBody **)0x0;
  }
  pCVar4 = (this->Location).MainBody;
  if (pCVar4 != (CelestialBody *)0x0) {
    port_op_delete(pCVar4);
    (this->Location).MainBody = (CelestialBody *)0x0;
  }
  pvVar2 = (void *)(this->Location)._pad_0x4_1;
  if (pvVar2 != (void *)0x0) {
    port_op_delete(pvVar2);
    (this->Location)._pad_0x4_1 = 0;
  }
  if (*(void **)&this->TimeLimit_JulianDays != (void *)0x0) {
    port_op_delete(*(void **)&this->TimeLimit_JulianDays);
    *(undefined4 *)&this->TimeLimit_JulianDays = 0;
  }
  pvVar2 = (void *)(this->Description).Length;
  if (pvVar2 != (void *)0x0) {
    port_op_delete(pvVar2);
    (this->Description).Length = 0;
  }
  if (*(void **)&this->JulianYear != (void *)0x0) {
    port_op_delete(*(void **)&this->JulianYear);
    *(undefined4 *)&this->JulianYear = 0;
  }
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  return;
}

//==== 006fe9b0 LevelMessages_006fe9b0 ====

/* public: virtual __thiscall LevelMessages___LevelMessages(void) */

void __thiscall LevelMessages___LevelMessages(LevelMessages *this)

{
  void *pvVar1;
  char *pcVar2;
  LevelSpeakerMessage *pLVar3;
  LevelTutorialMessage *pLVar4;
  
  pvVar1 = (void *)((this->StartingCutscene).IsValidData);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    *(undefined4 *)&(this->StartingCutscene).IsValidData = 0;
  }
  pcVar2 = (this->StartingCutscene).Data.Message.Data;
  if (pcVar2 != (char *)0x0) {
    port_op_delete(pcVar2);
    (this->StartingCutscene).Data.Message.Data = (char *)0x0;
  }
  (this->StartingCutscene).Data._pad_0x0_0 = (int)&vftable_5;
  pvVar1 = (void *)(this->StartingCutscene).Data._pad_0x4_1;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->StartingCutscene).Data._pad_0x4_1 = 0;
  }
  pLVar3 = (this->MissionSuccess).Data;
  (this->MissionSuccess)._pad_0x0_0 = (int)&vftable_416;
  if (pLVar3 != (LevelSpeakerMessage *)0x0) {
    LevelSpeakerMessage___vector_deleting_destructor(pLVar3,3);
  }
  (this->MissionSuccess).Data = (LevelSpeakerMessage *)0x0;
  (this->MissionSuccess)._pad_0x0_0 = (int)&vftable;
  pLVar3 = (this->MissionFailure).Data;
  (this->MissionFailure)._pad_0x0_0 = (int)&vftable_416;
  if (pLVar3 != (LevelSpeakerMessage *)0x0) {
    LevelSpeakerMessage___vector_deleting_destructor(pLVar3,3);
  }
  (this->MissionFailure).Data = (LevelSpeakerMessage *)0x0;
  (this->MissionFailure)._pad_0x0_0 = (int)&vftable;
  pLVar4 = (this->AlliesLostModuleTutorial).Data;
  (this->AlliesLostModuleTutorial)._pad_0x0_0 = (int)&vftable_417;
  if (pLVar4 != (LevelTutorialMessage *)0x0) {
    LevelTutorialMessage___vector_deleting_destructor(pLVar4,3);
  }
  (this->AlliesLostModuleTutorial).Data = (LevelTutorialMessage *)0x0;
  (this->AlliesLostModuleTutorial)._pad_0x0_0 = (int)&vftable;
  pLVar4 = (this->EnemiesLostModuleTutorial).Data;
  (this->EnemiesLostModuleTutorial)._pad_0x0_0 = (int)&vftable_417
  ;
  if (pLVar4 != (LevelTutorialMessage *)0x0) {
    LevelTutorialMessage___vector_deleting_destructor(pLVar4,3);
  }
  (this->EnemiesLostModuleTutorial).Data = (LevelTutorialMessage *)0x0;
  (this->EnemiesLostModuleTutorial)._pad_0x0_0 = (int)&vftable
  ;
  pLVar4 = (this->AlliesDamagedTutorial).Data;
  (this->AlliesDamagedTutorial)._pad_0x0_0 = (int)&vftable_417;
  if (pLVar4 != (LevelTutorialMessage *)0x0) {
    LevelTutorialMessage___vector_deleting_destructor(pLVar4,3);
  }
  (this->AlliesDamagedTutorial).Data = (LevelTutorialMessage *)0x0;
  (this->AlliesDamagedTutorial)._pad_0x0_0 = (int)&vftable;
  pLVar4 = (this->EnemiesDamagedTutorial).Data;
  (this->EnemiesDamagedTutorial)._pad_0x0_0 = (int)&vftable_417;
  if (pLVar4 != (LevelTutorialMessage *)0x0) {
    LevelTutorialMessage___vector_deleting_destructor(pLVar4,3);
  }
  (this->EnemiesDamagedTutorial).Data = (LevelTutorialMessage *)0x0;
  (this->EnemiesDamagedTutorial)._pad_0x0_0 = (int)&vftable;
  pLVar4 = (this->GotIntoRangeTutorial).Data;
  (this->GotIntoRangeTutorial)._pad_0x0_0 = (int)&vftable_417;
  if (pLVar4 != (LevelTutorialMessage *)0x0) {
    LevelTutorialMessage___vector_deleting_destructor(pLVar4,3);
  }
  (this->GotIntoRangeTutorial).Data = (LevelTutorialMessage *)0x0;
  (this->GotIntoRangeTutorial)._pad_0x0_0 = (int)&vftable;
  pLVar4 = (this->EnterCombatTutorial).Data;
  (this->EnterCombatTutorial)._pad_0x0_0 = (int)&vftable_417;
  if (pLVar4 != (LevelTutorialMessage *)0x0) {
    LevelTutorialMessage___vector_deleting_destructor(pLVar4,3);
  }
  (this->EnterCombatTutorial).Data = (LevelTutorialMessage *)0x0;
  (this->EnterCombatTutorial)._pad_0x0_0 = (int)&vftable;
  pLVar3 = (this->EnterCombat).Data;
  (this->EnterCombat)._pad_0x0_0 = (int)&vftable_416;
  if (pLVar3 != (LevelSpeakerMessage *)0x0) {
    LevelSpeakerMessage___vector_deleting_destructor(pLVar3,3);
  }
  (this->EnterCombat).Data = (LevelSpeakerMessage *)0x0;
  (this->EnterCombat)._pad_0x0_0 = (int)&vftable;
  pLVar4 = (this->NewTrajectoryTutorial).Data;
  (this->NewTrajectoryTutorial)._pad_0x0_0 = (int)&vftable_417;
  if (pLVar4 != (LevelTutorialMessage *)0x0) {
    LevelTutorialMessage___vector_deleting_destructor(pLVar4,3);
  }
  (this->NewTrajectoryTutorial).Data = (LevelTutorialMessage *)0x0;
  (this->NewTrajectoryTutorial)._pad_0x0_0 = (int)&vftable;
  pLVar4 = (this->StartingTutorial).Data;
  (this->StartingTutorial)._pad_0x0_0 = (int)&vftable_417;
  if (pLVar4 != (LevelTutorialMessage *)0x0) {
    LevelTutorialMessage___vector_deleting_destructor(pLVar4,3);
  }
  (this->StartingTutorial).Data = (LevelTutorialMessage *)0x0;
  (this->StartingTutorial)._pad_0x0_0 = (int)&vftable;
  pLVar3 = (this->Starting).Data;
  (this->Starting)._pad_0x0_0 = (int)&vftable_416;
  if (pLVar3 != (LevelSpeakerMessage *)0x0) {
    LevelSpeakerMessage___vector_deleting_destructor(pLVar3,3);
  }
  (this->Starting).Data = (LevelSpeakerMessage *)0x0;
  (this->Starting)._pad_0x0_0 = (int)&vftable;
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  return;
}

//==== 006fed10 scalar_deleting_destructor_006fed10 ====


/* public: virtual void * __thiscall util__Darray_L_structLevelSpeakerMessage_G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_LevelSpeakerMessage____scalar_deleting_destructor
          (Darray_L_struct_LevelSpeakerMessage_G_ *this,uint param_1)

{
  *(undefined ***)this = &vftable_416;
  if (*(LevelSpeakerMessage **)(this + 4) != (LevelSpeakerMessage *)0x0) {
    LevelSpeakerMessage___vector_deleting_destructor(*(LevelSpeakerMessage **)(this + 4),3);
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = (undefined **)(&vftable);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 006fed50 scalar_deleting_destructor_006fed50 ====


/* public: virtual void * __thiscall util__Darray_L_structLevelTutorialMessage_G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_LevelTutorialMessage____scalar_deleting_destructor
          (Darray_L_struct_LevelTutorialMessage_G_ *this,uint param_1)

{
  *(undefined ***)this = &vftable_417;
  if (*(LevelTutorialMessage **)(this + 4) != (LevelTutorialMessage *)0x0) {
    LevelTutorialMessage___vector_deleting_destructor(*(LevelTutorialMessage **)(this + 4),3);
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = (undefined **)(&vftable);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 006fed90 scalar_deleting_destructor_006fed90 ====

/* public: virtual void * __thiscall Campaign:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall Campaign___scalar_deleting_destructor(Campaign *this,uint param_1)

{
  void *pvVar1;
  
  this[1]._pad_0xc_3 = (int)&vftable_2;
  if (this[1].MainMenuMusic != (SoundEffect *)0x0) {
    port_op_delete(this[1].MainMenuMusic);
  }
  this[1].MainMenuMusic = (SoundEffect *)0x0;
  this[1]._pad_0xc_3 = (int)&vftable;
  pvVar1 = (void *)this[1]._pad_0x0_0;
  this->ModPriority = (int)&vftable_2;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
  }
  this[1]._pad_0x0_0 = 0;
  this->ModPriority = (int)&vftable;
  pvVar1 = (void *)(this->LevelOrder).Capacity;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->LevelOrder).Capacity = 0;
  }
  if (this->MainMenuMusic != (SoundEffect *)0x0) {
    port_op_delete(this->MainMenuMusic);
    this->MainMenuMusic = (SoundEffect *)0x0;
  }
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

//==== 006fee50 scalar_deleting_destructor_006fee50 ====

/* public: virtual void * __thiscall CelestialLocation:: 0 scalardeletingdestructor(unsigned int)
    */

void * __thiscall
CelestialLocation___scalar_deleting_destructor(CelestialLocation *this,uint param_1)

{
  CelestialBody **ppCVar1;
  
  ppCVar1 = (this->FilteredBodies).Data;
  (this->FilteredBodies)._padfb0 = (int)&vftable_2;
  if (ppCVar1 != (CelestialBody **)0x0) {
    port_op_delete(ppCVar1);
  }
  (this->FilteredBodies).Data = (CelestialBody **)0x0;
  (this->FilteredBodies)._padfb0 = (int)&vftable;
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x28);
  }
  return this;
}

//==== 006feeb0 scalar_deleting_destructor_006feeb0 ====

/* public: virtual void * __thiscall CutsceneMessage:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall CutsceneMessage___scalar_deleting_destructor(CutsceneMessage *this,uint param_1)

{
  char *pcVar1;
  
  if ((void *)this[1]._pad_0x0_0 != (void *)0x0) {
    port_op_delete((void *)this[1]._pad_0x0_0);
    this[1]._pad_0x0_0 = 0;
  }
  pcVar1 = (this->Message).Data;
  if (pcVar1 != (char *)0x0) {
    port_op_delete(pcVar1);
    (this->Message).Data = (char *)0x0;
  }
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x2c);
  }
  return this;
}

//==== 006fef20 scalar_deleting_destructor_006fef20 ====


/* public: virtual void * __thiscall Level:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall Level___scalar_deleting_destructor(Level *this,uint param_1)

{
  Level___Level(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x228);
  }
  return this;
}





//==== 006fef50 scalar_deleting_destructor_006fef50 ====


/* public: virtual void * __thiscall LevelMessages:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall LevelMessages___scalar_deleting_destructor(LevelMessages *this,uint param_1)

{
  LevelMessages___LevelMessages(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x104);
  }
  return this;
}





//==== 006fef80 Add_006fef80 ====


/* public: bool  util__Darray_L_structLevelRecordMetadata_G___Add(struct LevelRecordMetadata
   const &) */

bool 
util__Darray_struct_LevelRecordMetadata___Add
          (Darray_L_struct_LevelRecordMetadata_G_ *this,LevelRecordMetadata *param_1)

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
  *(uint *)(iVar2 + -0x2c) = param_1->Offset;
  util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(iVar2 + -0x28),&param_1->Name);
  util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(iVar2 + -0x1c),&param_1->Tooltip);
  util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(iVar2 + -0x10),(Str_L_char_G_ *)&param_1->LessIsBetter);
  *(char *)(iVar2 + -4) = (char)param_1[1].Name.Capacity;
  *(undefined1 *)(iVar2 + -3) = *(undefined1 *)((int)&param_1[1].Name.Capacity + 1);
  *(undefined1 *)(iVar2 + -2) = *(undefined1 *)((int)&param_1[1].Name.Capacity + 2);
  *(undefined1 *)(iVar2 + -1) = *(undefined1 *)((int)&param_1[1].Name.Capacity + 3);
  return true;
}





//==== 006ff010 AllocateArray_006ff010 ====


/* public: static void * __cdecl LevelSpeakerMessage__AllocateArray(unsigned int) */

void * __cdecl LevelSpeakerMessage__AllocateArray(uint)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
  uVar2 = -(uint)((int)((ulonglong)param_1 * 0x1c >> 0x20) != 0) | (uint)((ulonglong)param_1 * 0x1c)
  ;
  puVar1 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar2) | uVar2 + 4);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = param_1;
    puVar3 = puVar1 + 1;
    if (param_1 != 0) {
      do {
        *puVar3 = 0;
        SStack_1c.Data = (char *)0x0;
        SStack_1c.Capacity = 0;
        param_1 = param_1 - 1;
        SStack_1c.Length = 0;
        SStack_10.Data = (char *)0x0;
        SStack_10.Capacity = 0;
        SStack_10.Length = 0;
        util__LocStr__LocStr((LocStr *)(puVar3 + 1),&SStack_10,&SStack_1c);
        if (SStack_10.Data != (char *)0x0) {
          port_op_delete(SStack_10.Data);
          SStack_10.Data = (char *)0x0;
        }
        if (SStack_1c.Data != (char *)0x0) {
          port_op_delete(SStack_1c.Data);
        }
        puVar3 = puVar3 + 7;
      } while (param_1 != 0);
    }
    return puVar1 + 1;
  }
  return (void *)0x0;
}





//==== 006ff0e0 AllocateArray_006ff0e0 ====


/* public: static void * __cdecl LevelTutorialMessage__AllocateArray(unsigned int) */

void * __cdecl LevelTutorialMessage__AllocateArray(uint)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
  uVar2 = -(uint)((int)((ulonglong)param_1 * 0x28 >> 0x20) != 0) | (uint)((ulonglong)param_1 * 0x28)
  ;
  puVar1 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar2) | uVar2 + 4);
  if (puVar1 == (uint *)0x0) {
    return (void *)0x0;
  }
  *puVar1 = param_1;
  if (param_1 != 0) {
    puVar3 = puVar1 + 4;
    puVar4 = puVar1 + 1;
    do {
      *puVar4 = 0;
      puVar3[-2] = 0;
      puVar3[-1] = 0;
      param_1 = param_1 - 1;
      *puVar3 = 0;
      SStack_1c.Data = (char *)0x0;
      SStack_1c.Capacity = 0;
      SStack_1c.Length = 0;
      SStack_10.Data = (char *)0x0;
      SStack_10.Capacity = 0;
      SStack_10.Length = 0;
      util__LocStr__LocStr((LocStr *)(puVar3 + 1),&SStack_10,&SStack_1c);
      if (SStack_10.Data != (char *)0x0) {
        port_op_delete(SStack_10.Data);
        SStack_10.Data = (char *)0x0;
      }
      if (SStack_1c.Data != (char *)0x0) {
        port_op_delete(SStack_1c.Data);
      }
      puVar4 = puVar4 + 10;
      puVar3 = puVar3 + 10;
    } while (param_1 != 0);
  }
  return puVar1 + 1;
}





//==== 006ff1e0 AllocateArray_006ff1e0 ====


/* public: static void * __cdecl StartingFleet__AllocateArray(unsigned int) */

void * __cdecl StartingFleet__AllocateArray(uint)

{
  void *pvVar1;
  undefined4 *puVar2;
  
  pvVar1 = (void *)(uintptr_t)(port_op_new(-(uint)((int)((ulonglong)param_1 * 0x14 >> 0x20) != 0) |
                          (uint)((ulonglong)param_1 * 0x14)));
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else if (param_1 != 0) {
    puVar2 = (undefined4 *)((int)pvVar1 + 8);
    do {
      puVar2[-2] = 0;
      puVar2[-1] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      param_1 = param_1 - 1;
      puVar2 = puVar2 + 5;
    } while (param_1 != 0);
    return pvVar1;
  }
  return pvVar1;
}





//==== 006ff250 AreOnlyCivilianShipsAllowedInFleet ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: bool __thiscall Level__AreOnlyCivilianShipsAllowedInFleet(bool)const  */

bool __thiscall Level__AreOnlyCivilianShipsAllowedInFleet(Level *this,bool param_1)

{
  undefined8 stack0xfffffffc;
  int *piVar1;
  int iVar2;
  int iVar3;
  Faction *pFVar4;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(uint32_t *)&local_c = 0;
  piVar1 = &this[1].Description.Length;
  iVar2 = (**(code **)(uintptr_t)(this[1].Description.Length + 0xc))();
  if (local_c < iVar2) {
    do {
      iVar3 = (**(code **)*piVar1)(&local_c);
      iVar2 = *(int *)(iVar3 + 0x10);
      if ((iVar2 != 0) && (*(char *)(iVar2 + 0xa9) != '\0')) {
        if (param_1) {
          pFVar4 = this->PlayerAlliance;
        }
        else {
          pFVar4 = (Faction *)(this->AdditionalAlliances)._padfb0;
        }
        if ((*(Faction **)(iVar3 + 8) == pFVar4) && (*(char *)(iVar2 + 0xaa) != '\0')) {
          return true;
        }
      }
      *(uint32_t *)&local_c = local_c + 1;
      iVar2 = (**(code **)(uintptr_t)(*piVar1 + 0xc))();
    } while (local_c < iVar2);
  }
  return false;
}

//==== 006ff300 AreSpaceStationsAllowed ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: bool __thiscall Level__AreSpaceStationsAllowed(bool)const  */

bool __thiscall Level__AreSpaceStationsAllowed(Level *this,bool param_1)

{
  undefined8 stack0xfffffffc;
  int *piVar1;
  int iVar2;
  int iVar3;
  Faction *pFVar4;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(uint32_t *)&local_c = 0;
  piVar1 = &this[1].Description.Length;
  iVar2 = (**(code **)(uintptr_t)(this[1].Description.Length + 0xc))();
  if (local_c < iVar2) {
    do {
      iVar3 = (**(code **)*piVar1)(&local_c);
      iVar2 = *(int *)(iVar3 + 0x10);
      if ((iVar2 != 0) && (*(char *)(iVar2 + 0xa9) != '\0')) {
        if (param_1) {
          pFVar4 = this->PlayerAlliance;
        }
        else {
          pFVar4 = (Faction *)(this->AdditionalAlliances)._padfb0;
        }
        if ((*(Faction **)(iVar3 + 8) == pFVar4) && (*(char *)(iVar2 + 0xab) != '\0')) {
          return true;
        }
      }
      *(uint32_t *)&local_c = local_c + 1;
      iVar2 = (**(code **)(uintptr_t)(*piVar1 + 0xc))();
    } while (local_c < iVar2);
  }
  return false;
}

//==== 006ff3b0 CacheNecessaryLimits ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall Level__CacheNecessaryLimits(void) */

void __thiscall Level__CacheNecessaryLimits(Level *this)

{
  undefined8 stack0xfffffffc;
  int *piVar1;
  StarterFleet *this_00;
  int iVar2;
  float10 fVar3;
  undefined **local_34;
  void *local_30;
  int local_28;
  int iStack_24;
  tuple2_L_double_Cdouble_G_ local_20;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar1 = &this[1].Description.Length;
  *(uint32_t *)&local_c = 0;
  iVar2 = (**(code **)(uintptr_t)(this[1].Description.Length + 0xc))();
  if (local_c < iVar2) {
    do {
      iVar2 = (**(code **)*piVar1)(&local_c);
      this_00 = *(StarterFleet **)(iVar2 + 0x10);
      if ((this_00 != (StarterFleet *)0x0) &&
         (*(char *)((int)&(this_00->CachedOriginalShipTypes).Data.Size + 1) != '\0')) {
        if ((char)this_00[1]._pad_0x8_2 == '\0') {
          StarterFleet__CalculateMassAndCost_kg_And_c(this_00,&local_20);
          fVar3 = (float10)FUN_006fec20(local_20.Value1,2);
          local_20.Value1 = (double)fVar3;
          fVar3 = (float10)FUN_006fec20(local_20.Value2,2);
          local_20.Value2 = (double)fVar3;
          local_28 = CONCAT31((*(uint24_t*)((char*)&(local_28)+1)),1);
          (undefined4)((this_00->CachedOriginalShipTypes).IsValidData = local_20.Value1);
          *(undefined4 *)&this_00->CachedOriginalShipTypes = *(uint32_t *)((char *)&(local_20.Value1) + 4);
          *(double *)(this_00 + 1) = local_20.Value2;
          this_00[1]._pad_0x8_2 = local_28;
          this_00[1]._pad_0xc_3 = iStack_24;
        }
        if ((char)this_00[1].CustomOrbit.Data._pad_0x0_0 == '\0') {
          util__Darray_bool____Darray_bool
                    ((Darray_L_bool_P_G_ *)&local_34,
                     (Darray_L_bool_P_G_ *)((int)&(this_00->CustomOrbit).Data.Epoch_JulianYears + 4));
          iStack_24 = CONCAT31((*(uint24_t*)((char*)&(iStack_24)+1)),1);
          util__Darray_L_Module_P_G___op_assign
                    ((Darray_L_Module_P_G_ *)&this_00[1].ShipTypes,(Darray_L_class_Module_P_G_ *)&local_34);
          *(undefined1 *)&this_00[1].CustomOrbit.Data._pad_0x0_0 = (undefined1)iStack_24;
          *(uint32_t *)&local_34 = (uint32_t)(uintptr_t)(&vftable_2);
          if (local_30 != (void *)0x0) {
            port_op_delete(local_30);
          }
        }
      }
      *(uint32_t *)&local_c = local_c + 1;
      iVar2 = (**(code **)(uintptr_t)(*piVar1 + 0xc))();
    } while (local_c < iVar2);
  }
  return;
}

//==== 006ff4e0 CalculateMassAndCost_kg_And_c ====


/* public: struct util__tuple2_L_double_Cdouble_G_ 
   StarterFleet__CalculateMassAndCost_kg_And_c(void)const  */

tuple2_L_double_Cdouble_G_ * 
StarterFleet__CalculateMassAndCost_kg_And_c
          (StarterFleet *this,tuple2_L_double_Cdouble_G_ *__return_storage_ptr__)

{
  undefined8 stack0xfffffffc;
  int *piVar1;
  CraftBlueprint *this_00;
  int iVar2;
  undefined4 *puVar3;
  double dVar4;
  double dStack_28;
  double dStack_20;
  int iStack_10;
  tuple2_L_double_Cdouble_G_ *ptStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar1 = (int *)((int)&(this->CustomOrbit).Data.Epoch_JulianYears + 4);
  ptStack_c = __return_storage_ptr__;
  dStack_20 = 0.0;
  iStack_10 = 0;
  iVar2 = (**(code **)(*(int *)((int)&(this->CustomOrbit).Data.Epoch_JulianYears + 4) + 0xc))();
  if (iStack_10 < iVar2) {
    do {
      puVar3 = (undefined4 *)(**(code **)*piVar1)(&iStack_10);
      this_00 = (CraftBlueprint *)*puVar3;
      CraftBlueprint__GetTotalCost_c_Memoize(this_00);
      if ((char)((this_00->GetApproximateComposition_MemoizedValue).Data == '\0')){
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      dStack_20 = *(double *)&(this_00->GetCrossSection_m2_MemoizedValue).IsValidData + dStack_20;
      iStack_10 = iStack_10 + 1;
      iVar2 = (**(code **)(uintptr_t)(*piVar1 + 0xc))();
      __return_storage_ptr__ = ptStack_c;
    } while (iStack_10 < iVar2);
  }
  ptStack_c = (tuple2_L_double_Cdouble_G_ *)0x0;
  iVar2 = (**(code **)(uintptr_t)(*piVar1 + 0xc))();
  if ((int)ptStack_c < iVar2) {
    dStack_28 = 0.0;
    do {
      puVar3 = (undefined4 *)(**(code **)*piVar1)(&ptStack_c);
      dVar4 = CraftBlueprint__GetTotalMass_kg((CraftBlueprint *)*puVar3);
      dStack_28 = dVar4 + dStack_28;
      ptStack_c = (tuple2_L_double_Cdouble_G_ *)((int)&ptStack_c->Value1 + 1);
      iVar2 = (**(code **)(uintptr_t)(*piVar1 + 0xc))();
    } while ((int)ptStack_c < iVar2);
  }
  else {
    dStack_28 = 0.0;
  }
  __return_storage_ptr__->Value1 = dStack_28;
  __return_storage_ptr__->Value2 = dStack_20;
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}





//==== 006ff600 CanAccessModuleDesign ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: bool __thiscall Campaign__CanAccessModuleDesign(class DataParser *)const  */

bool __thiscall Campaign__CanAccessModuleDesign(Campaign *this,DataParser *param_1)

{
  undefined8 stack0xfffffffc;
  int *piVar1;
  Level *pLVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  LevelRecord *pLVar6;
  int TVar7;
  int *piVar8;
  Attribute_L_LevelRecord_G_ local_1ec;
  Attribute_L_LevelRecord_G_ local_174;
  Attribute_L_LevelRecord_G_ local_fc;
  LevelRecord local_84;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = 0;
  piVar1 = &this->ModPriority;
  *(uint32_t *)&local_c = 0;
  iVar3 = (**(code **)(this->ModPriority + 0xc))();
  if (local_c < iVar3) {
    do {
      piVar4 = (int *)(**(code **)*piVar1)(&local_c);
      if ((local_10 == 0) && (*(char *)(*piVar4 + 0x220) != '\0')) {
        local_10 = *piVar4;
      }
      *(uint32_t *)&local_c = local_c + 1;
      iVar3 = (**(code **)(uintptr_t)(*piVar1 + 0xc))();
    } while (local_c < iVar3);
  }
  piVar8 = (int *)this[1]._pad_0x0_0;
  local_14 = 0;
  piVar4 = piVar8 + this[1]._pad_0x4_1;
  while( true ) {
    if (piVar8 == piVar4) {
      return true;
    }
    if (*piVar8 == local_10) break;
    piVar8 = piVar8 + 1;
    local_14 = local_14 + 1;
  }
  if (local_14 < 1) {
    return true;
  }
  local_14 = local_14 + -1;
  puVar5 = (undefined4 *)(**(code **)*piVar1)(&local_14);
  pLVar2 = (Level *)*puVar5;
  if (pLVar2 == (Level *)0x0) {
    return true;
  }
  pLVar6 = LevelRecord__GetLevelRecord(pLVar2,param_1,true);
  local_1ec.Getter.Callee = (void *)0x0;
  local_1ec.Getter.CallbackFunction = (_func___cdecl_LevelRecord_void_ptr *)0x0;
  LevelRecord__LevelRecord(&local_1ec.Value);
  pLVar6 = LevelRecord__GetLevelRecord(pLVar2,param_1,false);
  local_174.Getter.Callee = (void *)0x0;
  local_174.Getter.CallbackFunction = (_func___cdecl_LevelRecord_void_ptr *)0x0;
  LevelRecord__LevelRecord(&local_174.Value);
  local_84._pad_0x4_1 = 0;
  local_84._pad_0x8_2 = 0;
  local_84._pad_0xc_3 = 0;
  local_84._pad_0x0_0 = (int)&vftable_64;
  local_84.ForLevel = (Level *)0x0;
  local_84.TimeElapsed_s.Data = 0.0;
  local_84.TimeElapsed_s.IsValidData = false;
  local_84.DeltaVSpent_km__s.Data = 0.0;
  local_84.DeltaVSpent_km__s.IsValidData = false;
  local_84.CapitalShipsAlive_Percent.Data = 0.0;
  local_84.CapitalShipsAlive_Percent.IsValidData = false;
  local_84.CapitalShipsUnscathed_Percent.Data = 0.0;
  local_84.CapitalShipsUnscathed_Percent.IsValidData = false;
  local_84.EnemyModulesLeft_Percent.Data = 0.0;
  local_84.EnemyModulesLeft_Percent.IsValidData = false;
  local_84.IsADeveloperRecord = false;
  local_fc.Getter.Callee = (void *)0x0;
  local_fc.Getter.CallbackFunction = (_func___cdecl_LevelRecord_void_ptr *)0x0;
  LevelRecord__LevelRecord(&local_fc.Value);
  TVar7 = LevelRecord__GetRatingForLevel(&local_fc,&local_174,&local_1ec);
  local_fc.Value._pad_0x0_0 = (int)&vftable_5;
  if ((void *)local_fc.Value._pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)local_fc.Value._pad_0x4_1);
    local_fc.Value._pad_0x4_1 = 0;
  }
  if ((void *)local_84._pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)local_84._pad_0x4_1);
  }
  local_174.Value._pad_0x0_0 = (int)&vftable_5;
  if ((void *)local_174.Value._pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)local_174.Value._pad_0x4_1);
    local_174.Value._pad_0x4_1 = 0;
  }
  if ((void *)local_1ec.Value._pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)local_1ec.Value._pad_0x4_1);
  }
  if (0 < (int)TVar7) {
    return true;
  }
  return false;
}

//==== 006ff840 CanAccessShipDesign ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: bool __thiscall Campaign__CanAccessShipDesign(class DataParser *)const  */

bool __thiscall Campaign__CanAccessShipDesign(Campaign *this,DataParser *param_1)

{
  undefined8 stack0xfffffffc;
  int *piVar1;
  Level *pLVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  LevelRecord *pLVar9;
  int TVar10;
  int *piVar11;
  Attribute_L_LevelRecord_G_ local_1f8;
  Attribute_L_LevelRecord_G_ local_180;
  Attribute_L_LevelRecord_G_ local_108;
  LevelRecord local_90;
  Campaign *local_20;
  DataParser *local_1c;
  int local_18;
  int local_14;
  int local_10;
  char local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_18 = 0;
  piVar1 = &this->ModPriority;
  *(uint32_t *)&local_1c = (uint32_t)(uintptr_t)(param_1);
  local_14 = 0;
  local_20 = this;
  iVar4 = (**(code **)(this->ModPriority + 0xc))();
  if (local_14 < iVar4) {
    do {
      piVar5 = (int *)(**(code **)*piVar1)(&local_14);
      iVar4 = *piVar5;
      iVar3 = local_18;
      if (local_18 == 0) {
        *(uint32_t *)&local_c = '\x01';
        local_10 = 0;
        iVar6 = (**(code **)(*(int *)(iVar4 + 0x210) + 0xc))();
        iVar3 = local_18;
        if (local_10 < iVar6) {
          do {
            iVar6 = (*(code *)**(undefined4 **)(iVar4 + 0x210))(&local_10);
            if ((*(int *)(iVar6 + 0x10) != 0) && (*(char *)(*(int *)(iVar6 + 0x10) + 0xa9) != '\0'))
            {
              if (local_c == '\0') {
                iVar7 = *(int *)(iVar4 + 0x80);
              }
              else {
                iVar7 = *(int *)(iVar4 + 0x78);
              }
              iVar3 = iVar4;
              if (*(int *)(iVar6 + 8) == iVar7) break;
            }
            local_10 = local_10 + 1;
            iVar6 = (**(code **)(*(int *)(iVar4 + 0x210) + 0xc))();
            iVar3 = local_18;
          } while (local_10 < iVar6);
        }
      }
      local_18 = iVar3;
      local_14 = local_14 + 1;
      iVar4 = (**(code **)(uintptr_t)(*piVar1 + 0xc))();
      this = local_20;
      param_1 = local_1c;
    } while (local_14 < iVar4);
  }
  piVar11 = (int *)this[1]._pad_0x0_0;
  iVar4 = 0;
  piVar5 = piVar11 + this[1]._pad_0x4_1;
  while( true ) {
    if (piVar11 == piVar5) {
      return true;
    }
    if (*piVar11 == local_18) break;
    piVar11 = piVar11 + 1;
    iVar4 = iVar4 + 1;
  }
  if (iVar4 < 1) {
    return true;
  }
  *(uint32_t *)&local_1c = (uint32_t)(uintptr_t)((DataParser *)(iVar4 + -1));
  puVar8 = (undefined4 *)(**(code **)*piVar1)(&local_1c);
  pLVar2 = (Level *)*puVar8;
  if (pLVar2 == (Level *)0x0) {
    return true;
  }
  pLVar9 = LevelRecord__GetLevelRecord(pLVar2,param_1,true);
  local_1f8.Getter.Callee = (void *)0x0;
  local_1f8.Getter.CallbackFunction = (_func___cdecl_LevelRecord_void_ptr *)0x0;
  LevelRecord__LevelRecord(&local_1f8.Value);
  pLVar9 = LevelRecord__GetLevelRecord(pLVar2,param_1,false);
  local_180.Getter.Callee = (void *)0x0;
  local_180.Getter.CallbackFunction = (_func___cdecl_LevelRecord_void_ptr *)0x0;
  LevelRecord__LevelRecord(&local_180.Value);
  local_90._pad_0x4_1 = 0;
  local_90._pad_0x8_2 = 0;
  local_90._pad_0xc_3 = 0;
  local_90._pad_0x0_0 = (int)&vftable_64;
  local_90.ForLevel = (Level *)0x0;
  local_90.TimeElapsed_s.Data = 0.0;
  local_90.TimeElapsed_s.IsValidData = false;
  local_90.DeltaVSpent_km__s.Data = 0.0;
  local_90.DeltaVSpent_km__s.IsValidData = false;
  local_90.CapitalShipsAlive_Percent.Data = 0.0;
  local_90.CapitalShipsAlive_Percent.IsValidData = false;
  local_90.CapitalShipsUnscathed_Percent.Data = 0.0;
  local_90.CapitalShipsUnscathed_Percent.IsValidData = false;
  local_90.EnemyModulesLeft_Percent.Data = 0.0;
  local_90.EnemyModulesLeft_Percent.IsValidData = false;
  local_90.IsADeveloperRecord = false;
  local_108.Getter.Callee = (void *)0x0;
  local_108.Getter.CallbackFunction = (_func___cdecl_LevelRecord_void_ptr *)0x0;
  LevelRecord__LevelRecord(&local_108.Value);
  TVar10 = LevelRecord__GetRatingForLevel(&local_108,&local_180,&local_1f8);
  local_108.Value._pad_0x0_0 = (int)&vftable_5;
  if ((void *)local_108.Value._pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)local_108.Value._pad_0x4_1);
    local_108.Value._pad_0x4_1 = 0;
  }
  if ((void *)local_90._pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)local_90._pad_0x4_1);
  }
  local_180.Value._pad_0x0_0 = (int)&vftable_5;
  if ((void *)local_180.Value._pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)local_180.Value._pad_0x4_1);
    local_180.Value._pad_0x4_1 = 0;
  }
  if ((void *)local_1f8.Value._pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)local_1f8.Value._pad_0x4_1);
  }
  if (0 < (int)TVar10) {
    return true;
  }
  return false;
}

//==== 006ffb00 CanCustomizeAnyFleet ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: bool __thiscall Level__CanCustomizeAnyFleet(bool)const  */

bool __thiscall Level__CanCustomizeAnyFleet(Level *this,bool param_1)

{
  undefined8 stack0xfffffffc;
  int *piVar1;
  int iVar2;
  Faction *pFVar3;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(uint32_t *)&local_c = 0;
  piVar1 = &this[1].Description.Length;
  iVar2 = (**(code **)(uintptr_t)(this[1].Description.Length + 0xc))();
  if (local_c < iVar2) {
    do {
      iVar2 = (**(code **)*piVar1)(&local_c);
      if ((*(int *)(iVar2 + 0x10) != 0) && (*(char *)(*(int *)(iVar2 + 0x10) + 0xa9) != '\0')) {
        if (param_1) {
          pFVar3 = this->PlayerAlliance;
        }
        else {
          pFVar3 = (Faction *)(this->AdditionalAlliances)._padfb0;
        }
        if (*(Faction **)(iVar2 + 8) == pFVar3) {
          return true;
        }
      }
      *(uint32_t *)&local_c = local_c + 1;
      iVar2 = (**(code **)(uintptr_t)(*piVar1 + 0xc))();
    } while (local_c < iVar2);
  }
  return false;
}

//==== 006ffba0 CheckSize_006ffba0 ====


/* private: bool  util__Darray_L_structLevelRecordMetadata_G___CheckSize(int) */

bool 
util__Darray_struct_LevelRecordMetadata___CheckSize
          (Darray_L_struct_LevelRecordMetadata_G_ *this,int param_1)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  LevelRecordMetadata *pLVar5;
  Str_L_char_G_ *this_00;
  uint uVar6;
  LevelRecordMetadata *pLVar7;
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
  uVar6 = *(uint *)(this + 0xc);
  if ((int)uVar4 <= (int)uVar6) {
    return bVar1 && bVar8;
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
  uVar4 = -(uint)((int)((ulonglong)uVar6 * 0x2c >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 0x2c);
  puVar2 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
  if (puVar2 == (uint *)0x0) {
    puStack_c = (uint *)0x0;
  }
  else {
    *puVar2 = uVar6;
    puStack_c = puVar2 + 1;
    if (uVar6 != 0) {
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
        uVar6 = uVar6 - 1;
        puVar3 = puVar3 + 0xb;
      } while (uVar6 != 0);
    }
  }
  pLVar5 = *(LevelRecordMetadata **)(this + 4);
  puVar2 = puStack_c;
  if (pLVar5 != (LevelRecordMetadata *)0x0) {
    puVar2 = puStack_c + *(int *)(this + 8) * 0xb;
    if (pLVar5 != (LevelRecordMetadata *)(param_1 * 0x2c + (int)pLVar5)) {
      this_00 = (Str_L_char_G_ *)(puStack_c + 4);
      pLVar7 = pLVar5;
      do {
        if ((uint *)&this_00[-2].Length == puVar2) break;
        this_00[-2].Length = pLVar7->Offset;
        util__Maybe_struct_util__ClassMember___operator(this_00 + -1,&pLVar7->Name);
        util__Maybe_struct_util__ClassMember___operator(this_00,&pLVar7->Tooltip);
        util__Maybe_struct_util__ClassMember___operator(this_00 + 1,(Str_L_char_G_ *)&pLVar7->LessIsBetter);
        *(char *)&this_00[2].Data = (char)pLVar7[1].Name.Capacity;
        *(undefined1 *)((int)&this_00[2].Data + 1) =
             *(undefined1 *)((int)&pLVar7[1].Name.Capacity + 1);
        *(undefined1 *)((int)&this_00[2].Data + 2) =
             *(undefined1 *)((int)&pLVar7[1].Name.Capacity + 2);
        pLVar5 = pLVar7 + 1;
        pLVar7 = (LevelRecordMetadata *)&pLVar7[1].Name.Length;
        *(undefined1 *)((int)&this_00[2].Data + 3) =
             *(undefined1 *)((int)&(pLVar5->Name).Capacity + 3);
        this_00 = (Str_L_char_G_ *)&this_00[3].Length;
        pLVar5 = *(LevelRecordMetadata **)(this + 4);
      } while (pLVar7 != (LevelRecordMetadata *)(param_1 * 0x2c + (int)pLVar5));
    }
    puVar2 = puStack_c;
    if (pLVar5 != (LevelRecordMetadata *)0x0) {
      LevelRecordMetadata___vector_deleting_destructor(pLVar5,3);
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(uint **)(this + 4) = puVar2;
  return bStack_5;
}





//==== 006ffda0 CheckSize_006ffda0 ====


/* private: bool  util__Stack_L_structCelestialBody_P_G___CheckSize(int) */

bool __thiscall
util__Stack_struct_CelestialBody____CheckSize(Stack_L_struct_CelestialBody_P_G_ *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  bool bVar7;
  uint uVar8;
  undefined4 *puVar9;
  bool bVar10;
  bool bStack_5;
  
  uVar8 = *(uint *)(this + 4);
  bVar10 = -1 < (int)uVar8;
  if (!bVar10) {
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 0xc) = *(undefined4 *)this;
    uVar8 = 0;
  }
  bVar7 = (int)uVar8 < 0x40000000;
  bVar3 = !bVar7;
  if (bVar3) {
    *(undefined4 *)(this + 4) = 0x3fffffff;
    *(int *)(this + 0xc) = *(int *)this + -4;
    uVar8 = 0x3fffffff;
  }
  bStack_5 = !bVar3 && bVar10;
  bVar7 = bVar7 && bVar10;
  uVar4 = *(uint *)(this + 8);
  if ((int)uVar4 < (int)uVar8) {
    if (uVar4 == 0) {
      *(uint *)(this + 8) = uVar8;
      uVar4 = uVar8;
    }
    if ((int)uVar4 < (int)uVar8) {
      do {
        uVar4 = uVar4 * 2;
      } while ((int)uVar4 < (int)uVar8);
      *(uint *)(this + 8) = uVar4;
    }
    if (0x3fffffff < (int)uVar4) {
      *(undefined4 *)(this + 8) = 0x3fffffff;
      uVar4 = 0x3fffffff;
    }
    puVar9 = (undefined4 *)0x0;
    if (0 < (int)uVar4) {
      uVar8 = -(uint)((int)((ulonglong)uVar4 * 4 >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 4);
      puVar9 = (undefined4 *)port_op_new(uVar8);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        memset(puVar9,0,uVar8);
      }
      iVar1 = *(int *)(this + 4);
      puVar6 = *(undefined4 **)this;
      puVar5 = puVar9;
      bVar7 = bStack_5;
      if (puVar6 != puVar6 + param_1) {
        do {
          if (puVar5 == puVar9 + iVar1) break;
          uVar2 = *puVar6;
          puVar6 = puVar6 + 1;
          *puVar5 = uVar2;
          puVar5 = puVar5 + 1;
        } while (puVar6 != (undefined4 *)(*(int *)this + param_1 * 4));
      }
    }
    if (*(void **)this != (void *)0x0) {
      port_op_delete(*(void **)this);
    }
    *(undefined4 **)this = puVar9;
    *(undefined4 **)(this + 0xc) = puVar9 + *(int *)(this + 4);
  }
  return bVar7;
}





//==== 006ffec0 Clear_006ffec0 ====


/* public: virtual void  util__Darray_L_structLevelSpeakerMessage_G___Clear(void) */

void __thiscall
util__Darray_struct_LevelSpeakerMessage___Clear(Darray_L_struct_LevelSpeakerMessage_G_ *this)

{
  undefined4 *puVar1;
  Str_L_char_G_ SStack_34;
  Str_L_char_G_ SStack_28;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
  if (0 < *(int *)(this + 8)) {
    puVar1 = *(undefined4 **)(this + 4);
    if ((puVar1 != (undefined4 *)0x0) && (puVar1 != puVar1 + *(int *)(this + 8) * 7)) {
      do {
        SStack_1c.Data = (char *)0x0;
        SStack_1c.Capacity = 0;
        SStack_1c.Length = 0;
        SStack_10.Data = (char *)0x0;
        SStack_10.Capacity = 0;
        SStack_10.Length = 0;
        LocStr__LocStr((LocStr *)&SStack_34,&SStack_10,&SStack_1c);
        if (SStack_10.Data != (char *)0x0) {
          port_op_delete(SStack_10.Data);
          SStack_10.Data = (char *)0x0;
        }
        if (SStack_1c.Data != (char *)0x0) {
          port_op_delete(SStack_1c.Data);
          SStack_1c.Data = (char *)0x0;
        }
        *puVar1 = 0;
        util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar1 + 1),&SStack_34);
        util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar1 + 4),&SStack_28);
        if (SStack_28.Data != (char *)0x0) {
          port_op_delete(SStack_28.Data);
          SStack_28.Data = (char *)0x0;
        }
        if (SStack_34.Data != (char *)0x0) {
          port_op_delete(SStack_34.Data);
        }
        puVar1 = puVar1 + 7;
      } while (puVar1 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x1c));
    }
    *(undefined4 *)(this + 8) = 0;
    return;
  }
  *(undefined4 *)(this + 8) = 0;
  return;
}





//==== 006fffe0 Clear_006fffe0 ====


/* public: virtual void  util__Darray_L_structLevelTutorialMessage_G___Clear(void) */

void __thiscall
util__Darray_struct_LevelTutorialMessage___Clear(Darray_L_struct_LevelTutorialMessage_G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 00700000 ClearUntypedTuple_00700000 ====


/* public: static void __cdecl LevelSpeakerMessage__ClearUntypedTuple(void *) */

void __cdecl LevelSpeakerMessage__ClearUntypedTuple(void *param_1)

{
  undefined4 *puVar1;
  LevelSpeakerMessage LStack_20;
  void *pvStack_10;
  
  puVar1 = (undefined4 *)LevelSpeakerMessage__LevelSpeakerMessage(&LStack_20);
  *(undefined4 *)param_1 = *puVar1;
  util__Str_char___operator__o8((Str_L_char_G_ *)((int)param_1 + 4),(Str_L_char_G_ *)(puVar1 + 1));
  util__Str_char___operator__o8((Str_L_char_G_ *)((int)param_1 + 0x10),(Str_L_char_G_ *)(puVar1 + 4));
  if (pvStack_10 != (void *)0x0) {
    port_op_delete(pvStack_10);
    pvStack_10 = (void *)0x0;
  }
  if (LStack_20.Message.Data != (char *)0x0) {
    port_op_delete(LStack_20.Message.Data);
  }
  return;
}





//==== 00700060 ClearUntypedTuple_00700060 ====


/* public: static void __cdecl LevelTutorialMessage__ClearUntypedTuple(void *) */

void __cdecl LevelTutorialMessage__ClearUntypedTuple(void *param_1)

{
  undefined4 *puVar1;
  LevelTutorialMessage LStack_2c;
  void *pvStack_10;
  
  puVar1 = (undefined4 *)LevelTutorialMessage__LevelTutorialMessage(&LStack_2c);
  *(undefined4 *)param_1 = *puVar1;
  util__Str_char___operator__o8((Str_L_char_G_ *)((int)param_1 + 4),(Str_L_char_G_ *)(puVar1 + 1));
  util__Str_char___operator__o8((Str_L_char_G_ *)((int)param_1 + 0x10),(Str_L_char_G_ *)(puVar1 + 4));
  util__Str_char___operator__o8((Str_L_char_G_ *)((int)param_1 + 0x1c),(Str_L_char_G_ *)(puVar1 + 7));
  if (pvStack_10 != (void *)0x0) {
    port_op_delete(pvStack_10);
    pvStack_10 = (void *)0x0;
  }
  if (LStack_2c.Message.Data != (char *)0x0) {
    port_op_delete(LStack_2c.Message.Data);
    LStack_2c.Message.Data = (char *)0x0;
  }
  if (LStack_2c.TutorialTag.Data != (char *)0x0) {
    port_op_delete(LStack_2c.TutorialTag.Data);
  }
  return;
}





//==== 007000f0 ClearUntypedTuple_007000f0 ====


/* public: static void __cdecl StartingFleet__ClearUntypedTuple(void *) */

void __cdecl StartingFleet__ClearUntypedTuple(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((int)param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 8) = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined4 *)((int)param_1 + 0x10) = 0;
  return;
}





//==== 00700110 CopyUntypedTuple_00700110 ====


/* public: static void __cdecl LevelSpeakerMessage__CopyUntypedTuple(void *,void *) */

void __cdecl LevelSpeakerMessage__CopyUntypedTuple(void *param_1,void *param_2)

{
                    /* WARNING: Load optimize_e__size is inaccurate */
  *(undefined4 *)param_1 = *(int *)param_2;
  util__Str_char___operator__o8((Str_L_char_G_ *)((int)param_1 + 4),(Str_L_char_G_ *)((int)param_2 + 4));
  util__Str_char___operator__o8((Str_L_char_G_ *)((int)param_1 + 0x10),(Str_L_char_G_ *)((int)param_2 + 0x10));
  return;
}





//==== 00700140 CopyUntypedTuple_00700140 ====


/* public: static void __cdecl LevelTutorialMessage__CopyUntypedTuple(void *,void *) */

void __cdecl LevelTutorialMessage__CopyUntypedTuple(void *param_1,void *param_2)

{
                    /* WARNING: Load optimize_e__size is inaccurate */
  *(undefined4 *)param_1 = *(int *)param_2;
  util__Str_char___operator__o8((Str_L_char_G_ *)((int)param_1 + 4),(Str_L_char_G_ *)((int)param_2 + 4));
  util__Str_char___operator__o8((Str_L_char_G_ *)((int)param_1 + 0x10),(Str_L_char_G_ *)((int)param_2 + 0x10));
  util__Str_char___operator__o8((Str_L_char_G_ *)((int)param_1 + 0x1c),(Str_L_char_G_ *)((int)param_2 + 0x1c));
  return;
}





//==== 00700180 CopyUntypedTuple_00700180 ====


/* public: static void __cdecl StartingFleet__CopyUntypedTuple(void *,void *) */

void __cdecl StartingFleet__CopyUntypedTuple(void *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
                    /* WARNING: Load optimize_e__size is inaccurate */
  uVar1 = *(undefined4 *)((int)param_2 + 4);
  uVar2 = *(undefined4 *)((int)param_2 + 8);
  uVar3 = *(undefined4 *)((int)param_2 + 0xc);
  *(undefined4 *)param_1 = *(int *)param_2;
  *(undefined4 *)((int)param_1 + 4) = uVar1;
  *(undefined4 *)((int)param_1 + 8) = uVar2;
  *(undefined4 *)((int)param_1 + 0xc) = uVar3;
  *(undefined4 *)((int)param_1 + 0x10) = *(undefined4 *)((int)param_2 + 0x10);
  return;
}





//==== 007001a0 DestroyArray_007001a0 ====


/* public: static void __cdecl LevelSpeakerMessage__DestroyArray(void *) */

void __cdecl LevelSpeakerMessage__DestroyArray(void *param_1)

{
  if (param_1 != (void *)0x0) {
    _vector_deleting_destructor_((LevelSpeakerMessage *)param_1,3);
  }
  return;
}





//==== 007001c0 DestroyArray_007001c0 ====


/* public: static void __cdecl LevelTutorialMessage__DestroyArray(void *) */

void __cdecl LevelTutorialMessage__DestroyArray(void *param_1)

{
  if (param_1 != (void *)0x0) {
    _vector_deleting_destructor_((LevelTutorialMessage *)param_1,3);
  }
  return;
}





//==== 007001e0 GenerateName ====

/* public: class util__Str_L_char_G_ __thiscall LevelRecord__GenerateName(void)const  */

Str_L_char_G_ * __thiscall
LevelRecord__GenerateName(LevelRecord *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined1 *puVar1;
  char *pcVar2;
  
  if (this->ForLevel->_pad_0x8_2 < 1) {
    puVar1 = (undefined1 *)(&cde_l2_0b2b1c9f_NullString);
  }
  else {
    puVar1 = (undefined1 *)this->ForLevel->_pad_0x4_1;
  }
  pcVar2 = "Dev";
  if (this->IsADeveloperRecord == false) {
    pcVar2 = "User";
  }
  util__Printf(__return_storage_ptr__,(wchar_t*)("%s %s"),pcVar2,puVar1);
  return __return_storage_ptr__;
}

//==== 00700220 Get_00700220 ====

/* public: struct LevelRecord const  util__Attribute_L_structLevelRecord_G___Get(void)const
    */

LevelRecord * 
util__Attribute_struct_LevelRecord___Get(Attribute_L_LevelRecord_G_ *this,LevelRecord *__return_storage_ptr__)

{
  void *pvVar1;
  _func___cdecl_LevelRecord_void_ptr *p_Var2;
  bool bVar3;
  bool bVar4;
  LevelRecord *pLVar5;
  LevelRecord local_1c8;
  LevelRecord local_158;
  LevelRecord local_e8;
  LevelRecord local_78;
  undefined4 local_8;
  
  pvVar1 = (this->Getter).Callee;
  local_8 = 0;
  if ((pvVar1 == (void *)0x0) ||
     (p_Var2 = (this->Getter).CallbackFunction, p_Var2 == (_func___cdecl_LevelRecord_void_ptr *)0x0)
     ) {
    pLVar5 = (LevelRecord *)LevelRecord__LevelRecord(&local_e8);
    bVar4 = false;
    bVar3 = true;
  }
  else {
    pLVar5 = ((LevelRecord *(*)(void *,void *))p_Var2)(&local_158,pvVar1);
    pLVar5 = (LevelRecord *)LevelRecord__LevelRecord(&local_78);
    LevelRecord__LevelRecord(&local_1c8);
    local_78._pad_0x0_0 = (int)&vftable_5;
    if ((void *)local_78._pad_0x4_1 != (void *)0x0) {
      port_op_delete((void *)local_78._pad_0x4_1);
      local_78._pad_0x4_1 = 0;
    }
    bVar4 = true;
    bVar3 = false;
    local_158._pad_0x0_0 = (int)&vftable_5;
    if ((void *)local_158._pad_0x4_1 != (void *)0x0) {
      port_op_delete((void *)local_158._pad_0x4_1);
    }
    pLVar5 = &local_1c8;
  }
  LevelRecord__LevelRecord(__return_storage_ptr__);
  if (bVar3) {
    local_e8._pad_0x0_0 = (int)&vftable_5;
    if ((void *)local_e8._pad_0x4_1 != (void *)0x0) {
      port_op_delete((void *)local_e8._pad_0x4_1);
      local_e8._pad_0x4_1 = 0;
    }
  }
  if (((void *)local_1c8._pad_0x4_1 != (void *)0x0) && (bVar4)) {
    port_op_delete((void *)local_1c8._pad_0x4_1);
  }
  return __return_storage_ptr__;
}

//==== 00700320 Get_00700320 ====


/* public: static struct GlobalSaveValues * __cdecl GlobalSaveValues__Get(class DataParser *) */

GlobalSaveValues * __cdecl GlobalSaveValues__Get(DataParser *param_1)

{
  undefined8 stack0xfffffffc;
  char cVar1;
  undefined4 *puVar2;
  GlobalSaveValues *pGVar3;
  undefined **ppuStack_34;
  void *pvStack_30;
  Str_L_char_G_ SStack_24;
  undefined **ppuStack_18;
  undefined4 *puStack_14;
  int iStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  ppuStack_18 = (undefined **)0x0;
  puStack_14 = (undefined4 *)0x0;
  iStack_10 = 0;
  uStack_c = 0;
  util__Str_char___Str_char(&SStack_24,"GlobalSaveValues");
  (**(code **)(*(int *)param_1 + 4))(&ppuStack_18,&SStack_24,0);
  if (SStack_24.Data != (char *)0x0) {
    port_op_delete(SStack_24.Data);
  }
  if (iStack_10 == 0) {
    puVar2 = (undefined4 *)port_op_new(0x14);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = (undefined4)(uintptr_t)(&vftable_423);
      *(undefined1 *)(puVar2 + 4) = 0;
    }
    util__Str_char___Str_char(&SStack_24,"Defaults");
    util__Str_char___operator__o8((Str_L_char_G_ *)(puVar2 + 1),&SStack_24);
    if (SStack_24.Data != (char *)0x0) {
      port_op_delete(SStack_24.Data);
    }
    cVar1 = (**(code **)(*(int *)param_1 + 8))(puVar2);
    if (cVar1 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\main\\levels.cpp",0x2e1,"Success",
                      (char *)0x0);
      DebugBreak();
    }
    util__Str_char___Str_char(&SStack_24,"GlobalSaveValues");
    (**(code **)(*(int *)param_1 + 4))(&ppuStack_34,&SStack_24,0);
    if (SStack_24.Data != (char *)0x0) {
      port_op_delete(SStack_24.Data);
    }
    puVar2 = (undefined4 *)(*(code *)ppuStack_34[8])();
    pGVar3 = (GlobalSaveValues *)*puVar2;
    ppuStack_34 = (undefined **)(&vftable_6);
    if (pvStack_30 != (void *)0x0) {
      port_op_delete(pvStack_30);
    }
  }
  else {
    if (iStack_10 != 1) {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\main\\levels.cpp",0x2e6,
                      "SaveValues.Num() == 1",(char *)0x0);
      DebugBreak();
    }
    if (iStack_10 < 1) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3a,
                      "Size > 0",(char *)0x0);
      DebugBreak();
    }
    pGVar3 = (GlobalSaveValues *)*puStack_14;
  }
  ppuStack_18 = (undefined **)(&vftable_6);
  if (puStack_14 != (undefined4 *)0x0) {
    port_op_delete(puStack_14);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return pGVar3;
}





//==== 007004d0 GetAllBodies_007004d0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: class util__Darray_L_structCelestialBody_P_G_ __thiscall Level__GetAllBodies(class
   MetagameManager *)const  */

MetagameManager * __thiscall Level__GetAllBodies(Level *this,MetagameManager *param_1)

{
  undefined4 pvStack_24;
  undefined4 pvStack_44;
  undefined4 pMVar2;
  undefined4 pvVar9;
  int iVar5;
  bool bVar1;
  int *piVar7;
  bool bVar4;
  int *piVar10;
  int piStack_34;
  int *piVar8;
  int iVar11;
  int iStack_30;
  undefined8 stack0x00000008;
  undefined8 stack0xfffffffc;
  int iVar3;
  Darray_L_bool_P_G_ *pDVar6;
  undefined **local_7c;
  void *local_78;
  MetagameManager *local_6c;
  int local_68;
  int local_64;
  undefined **local_60;
  undefined4 *puStack_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  char local_49;
  undefined **local_48;
  int iStack_40;
  undefined4 uStack_3c;
  undefined **local_38;
  undefined4 uStack_2c;
  undefined **local_28;
  int iStack_20;
  undefined4 uStack_1c;
  void *local_18;
  int iStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_6c = param_1;
  local_28 = (undefined **)(&vftable_2);
  pvStack_24 = (undefined4)(uintptr_t)0x0;
  iStack_20 = 0;
  uStack_1c = 0;
  local_48 = (undefined **)0x0;
  pvStack_44 = (undefined4)(uintptr_t)0x0;
  iStack_40 = 0;
  uStack_3c = 0;
  util__Darray_bool____Darray_bool
            ((Darray_L_bool_P_G_ *)&local_48,(Darray_L_bool_P_G_ *)&this[1].JulianYear);
  local_49 = iStack_40 == 0;
  local_68 = this[1]._pad_0x8_2;
  if (local_68 == 0) {
    util__Darray_bool____Darray_bool((Darray_L_bool_P_G_ *)param_1,(Darray_L_bool_P_G_ *)&local_28);
    local_48 = (undefined **)(&vftable_2);
    if (pvStack_44 != (void *)0x0) {
      port_op_delete(pvStack_44);
    }
    pvStack_44 = (undefined4)(uintptr_t)0x0;
    local_48 = (undefined **)(&vftable);
    local_28 = (undefined **)(&vftable_2);
    if (pvStack_24 != (void *)0x0) {
      port_op_delete(pvStack_24);
    }
    return param_1;
  }
  local_18 = (void *)0x0;
  uStack_10 = 0;
  iStack_14 = 1;
  pvStack_c = (void *)0x4;
  iVar11 = 0;
  iVar5 = local_68;
  while( true ) {
    bVar4 = util__Stack_L_CelestialBody_P_G___CheckSize((Stack_L_CelestialBody_P_G_ *)&local_18,iVar11);
    iVar11 = iStack_14;
    pvVar9 = (undefined4)(uintptr_t) local_18;
    if (bVar4) {
      *(int *)((int)local_18 + iStack_14 * 4 + -4) = iVar5;
    }
    if (iStack_14 < 1) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\stack.inl",0xa2,
                      "Size > 0",(char *)0x0);
      DebugBreak();
    }
    iVar5 = *(int *)((int)pvVar9 + iVar11 * 4 + -4);
    if (*(char *)(iVar5 + 0xf8) == '\0') break;
    if (iVar11 < 1) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\stack.inl",0xa2,
                      "Size > 0",(char *)0x0);
      DebugBreak();
      iVar5 = *(int *)((int)pvVar9 + iVar11 * 4 + -4);
    }
    if (*(char *)(iVar5 + 0xf8) == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    iVar3 = iStack_20;
    local_50 = *(int *)(iVar5 + 0xa8);
    local_64 = iStack_20 + 1;
    util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)&local_28,&local_64);
    bVar4 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)&local_28,iVar3);
    if (bVar4) {
      *(int *)((int)pvStack_24 + iStack_20 * 4 + -4) = local_50;
    }
    iStack_14 = iVar11 + 1;
    pvStack_c = (void *)((int)pvVar9 + (iVar11 + 1) * 4);
    iVar5 = local_50;
  }
  local_38 = (undefined **)0x0;
  piStack_34 = (int)(uintptr_t)0x0;
  iStack_30 = 0;
  uStack_2c = 0;
  if (local_49 == '\0') {
    pDVar6 = (Darray_L_bool_P_G_ *)
             util__Darray_bool____Darray_bool
                       ((Darray_L_bool_P_G_ *)&local_7c,(Darray_L_bool_P_G_ *)&local_48);
    bVar1 = false;
    bVar4 = true;
  }
  else {
    local_60 = (undefined **)(&vftable_2);
    puStack_5c = (undefined4 *)0x0;
    iStack_58 = 0;
    iStack_54 = 1;
    puStack_5c = (undefined4 *)(uintptr_t)(port_op_new(4));
    iVar11 = iStack_58;
    if (puStack_5c == (undefined4 *)0x0) {
      puStack_5c = (undefined4 *)0x0;
    }
    else {
      *puStack_5c = 0;
    }
    iVar5 = 0;
    if (0 < iStack_54) {
      do {
        puStack_5c[iVar5] = 0;
        iVar5 = iVar5 + 1;
      } while (iVar5 < iStack_54);
    }
    local_64 = iStack_58 + 1;
    util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)&local_60,&local_64);
    bVar4 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)&local_60,iVar11);
    if (bVar4) {
      puStack_5c[iStack_58 + -1] = local_68;
    }
    pDVar6 = (Darray_L_bool_P_G_ *)&local_60;
    bVar1 = true;
    bVar4 = false;
  }
  util__Darray_bool____Darray_bool((Darray_L_bool_P_G_ *)&local_38,pDVar6);
  if (bVar4) {
    local_7c = (undefined **)(&vftable_2);
    if (local_78 != (void *)0x0) {
      port_op_delete(local_78);
    }
    *(uint32_t *)&local_78 = (uint32_t)(uintptr_t)((void *)0x0);
    local_7c = (undefined **)(&vftable);
  }
  if ((bVar1) &&
     (local_60 = (undefined **)&vftable_2, puStack_5c != (undefined4 *)0x0)) {
    port_op_delete(puStack_5c);
  }
  if (1 < iStack_30) {
    iVar11 = 0;
    local_50 = 0;
    piVar8 = (int *)(uintptr_t) piStack_34;
    piVar10 = (int *)(uintptr_t) piStack_34;
    if (piStack_34 != piStack_34 + iStack_30) {
      do {
        bVar4 = false;
        piVar7 = (int *)(uintptr_t) piStack_34;
        while ((bVar1 = bVar4, piVar7 != piVar8 && (bVar1 = true, !bVar4))) {
          iVar5 = *piVar7;
          piVar7 = piVar7 + 1;
          bVar4 = *piVar8 == iVar5;
        }
        *piVar10 = *piVar8;
        if (!bVar1) {
          piVar10 = piVar10 + 1;
          iVar11 = iVar11 + 1;
        }
        piVar8 = piVar8 + 1;
        pvVar9 = (undefined4)(uintptr_t) local_18;
        local_50 = iVar11;
      } while (piVar8 != piStack_34 + iStack_30);
    }
    util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)&local_38,&local_50);
  }
  FUN_006fd0b0(&local_38,&local_28,&stack0x00000008);
  pMVar2 = (undefined4)(uintptr_t) local_6c;
  util__Darray_bool____Darray_bool((Darray_L_bool_P_G_ *)local_6c,(Darray_L_bool_P_G_ *)&local_28);
  local_38 = (undefined **)(&vftable_2);
  if (piStack_34 != (int *)0x0) {
    port_op_delete(piStack_34);
  }
  piStack_34 = (int)(uintptr_t)0x0;
  local_38 = (undefined **)(&vftable);
  if (pvVar9 != (void *)0x0) {
    port_op_delete(pvVar9);
  }
  local_48 = (undefined **)(&vftable_2);
  if (pvStack_44 != (void *)0x0) {
    port_op_delete(pvStack_44);
  }
  pvStack_44 = (undefined4)(uintptr_t)0x0;
  local_48 = (undefined **)(&vftable);
  local_28 = (undefined **)(&vftable_2);
  if (pvStack_24 != (void *)0x0) {
    port_op_delete(pvStack_24);
  }
  return (MetagameManager *)(uintptr_t) pMVar2;
}

//==== 007008b0 GetCurrentCampaign ====


/* struct Campaign * __cdecl GetCurrentCampaign(class DataParser *) */

Campaign * __cdecl GetCurrentCampaign(DataParser *param_1)

{
  if (DAT_0097fcec == (Campaign *)0x0) {
    DAT_0097fcec = (undefined4)(uintptr_t)(GetDefaultCampaign(param_1));
  }
  return (Campaign *)(uintptr_t)DAT_0097fcec;
}





//==== 007008d0 GetCurrentCampaignEditable ====


/* struct Campaign * * __cdecl GetCurrentCampaignEditable(class DataParser *) */

Campaign ** __cdecl GetCurrentCampaignEditable(DataParser *param_1)

{
  if (DAT_0097fcec == (Campaign *)0x0) {
    DAT_0097fcec = (undefined4)(uintptr_t)(GetDefaultCampaign(param_1));
  }
  return &DAT_0097fcec;
}





//==== 00700900 GetDefaultCampaign ====


/* struct Campaign * __cdecl GetDefaultCampaign(class DataParser *) */

Campaign * __cdecl GetDefaultCampaign(DataParser *param_1)

{
  undefined8 stack0xfffffffc;
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  Campaign *pCVar6;
  int iStack_48;
  undefined **ppuStack_44;
  Str_L_char_G_ SStack_40;
  undefined **ppuStack_34;
  void *pvStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined **ppuStack_24;
  undefined4 *puStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  undefined1 uStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  ppuStack_34 = (undefined **)0x0;
  pvStack_30 = (void *)0x0;
  iStack_2c = 0;
  uStack_28 = 0;
  util__Str_char___Str_char(&SStack_40,"Campaign");
  (**(code **)(*(int *)param_1 + 4))(&ppuStack_34,&SStack_40,0);
  if (SStack_40.Data != (char *)0x0) {
    port_op_delete(SStack_40.Data);
  }
  if (iStack_2c < 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\main\\levels.cpp",0x96,
                    "AllCampaigns.Num() > 0",(char *)0x0);
    DebugBreak();
  }
  uStack_c = 0;
  ppuStack_24 = (undefined **)0x0;
  puStack_20 = (undefined4 *)0x0;
  iStack_1c = 0;
  uStack_18 = 0;
  ppuStack_44 = (undefined **)0x0;
  SStack_40.Data = (char *)0x0;
  SStack_40.Capacity = 0;
  SStack_40.Length = 0;
  iVar3 = (*(code *)ppuStack_34[3])();
  util__Darray_class_Manager____Darray_class_Manager((Darray_L_class_Manager_P_G_ *)&ppuStack_44,iVar3)
  ;
  iStack_14 = 0;
  iVar3 = (*(code *)ppuStack_34[3])();
  if (iStack_14 < iVar3) {
    do {
      puVar4 = (undefined4 *)(*(code *)*ppuStack_34)(&iStack_14);
      iVar3 = SStack_40.Capacity;
      uVar1 = *puVar4;
      iStack_10 = SStack_40.Capacity + 1;
      util__Darray_class_util__Reflectable____SetSize
                ((Darray_L_class_util__Reflectable_P_G_ *)&ppuStack_44,&iStack_10);
      bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                        ((Darray_L_enum_GraphicsResource__Type_G_ *)&ppuStack_44,iVar3);
      if (bVar2) {
        *(undefined4 *)(SStack_40.Data + SStack_40.Capacity * 4 + -4) = uVar1;
      }
      iStack_14 = iStack_14 + 1;
      iVar3 = (*(code *)ppuStack_34[3])();
    } while (iStack_14 < iVar3);
  }
  ppuStack_24 = (undefined **)0x0;
  puStack_20 = (undefined4 *)0x0;
  iStack_1c = 0;
  uStack_18 = 0;
  iVar3 = (*(code *)ppuStack_44[3])();
  util__Darray_class_Manager____Darray_class_Manager((Darray_L_class_Manager_P_G_ *)&ppuStack_24,iVar3)
  ;
  iStack_10 = 0;
  iVar3 = (*(code *)ppuStack_44[3])();
  if (iStack_10 < iVar3) {
    do {
      piVar5 = (int *)(*(code *)*ppuStack_44)(&iStack_10);
      iVar3 = iStack_1c;
      if (*(char *)(*piVar5 + 0x5c) != '\0') {
        iStack_48 = iStack_1c + 1;
        util__Darray_class_util__Reflectable____SetSize
                  ((Darray_L_class_util__Reflectable_P_G_ *)&ppuStack_24,&iStack_48);
        bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                          ((Darray_L_enum_GraphicsResource__Type_G_ *)&ppuStack_24,iVar3);
        if (bVar2) {
          puStack_20[iStack_1c + -1] = *piVar5;
        }
      }
      iStack_10 = iStack_10 + 1;
      iVar3 = (*(code *)ppuStack_44[3])();
    } while (iStack_10 < iVar3);
  }
  ppuStack_44 = (undefined **)(&vftable_2);
  if (SStack_40.Data != (char *)0x0) {
    port_op_delete(SStack_40.Data);
  }
  if (iStack_1c != 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\main\\levels.cpp",0x9b,
                    "Defaults.Num() == 1",(char *)0x0);
    DebugBreak();
  }
  if (iStack_1c < 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3a,
                    "Size > 0",(char *)0x0);
    DebugBreak();
  }
  pCVar6 = (Campaign *)*puStack_20;
  ppuStack_24 = (undefined **)(&vftable_2);
  port_op_delete(puStack_20);
  puStack_20 = (undefined4 *)0x0;
  ppuStack_24 = (undefined **)(&vftable);
  ppuStack_34 = (undefined **)(&vftable_6);
  if (pvStack_30 != (void *)0x0) {
    port_op_delete(pvStack_30);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return pCVar6;
}





//==== 00700b30 GetFirstLevelUnlockingModuleDesign ====


/* public: struct Level * __thiscall Campaign__GetFirstLevelUnlockingModuleDesign(void)const  */

Level * __thiscall Campaign__GetFirstLevelUnlockingModuleDesign(Campaign *this)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  int *piVar2;
  Level *pLStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pLStack_10 = (Level *)0x0;
  iStack_c = 0;
  iVar1 = (**(code **)(this->ModPriority + 0xc))();
  if (iStack_c < iVar1) {
    do {
      piVar2 = (int *)(**(code **)this->ModPriority)(&iStack_c);
      if ((pLStack_10 == (Level *)0x0) &&
         ((char)(((Level *)*piVar2)[1].QuickInstructions.Data != '\0')) ) {
        pLStack_10 = (Level *)*piVar2;
      }
      iStack_c = iStack_c + 1;
      iVar1 = (**(code **)(this->ModPriority + 0xc))();
    } while (iStack_c < iVar1);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return pLStack_10;
}





//==== 00700ba0 GetFirstLevelWithCombat ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: struct Level * __thiscall Campaign__GetFirstLevelWithCombat(void)const  */

Level * __thiscall Campaign__GetFirstLevelWithCombat(Campaign *this)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  int *piVar2;
  Level *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = (Level *)0x0;
  *(uint32_t *)&local_c = 0;
  iVar1 = (**(code **)(this->ModPriority + 0xc))();
  if (local_c < iVar1) {
    do {
      piVar2 = (int *)(**(code **)this->ModPriority)(&local_c);
      if ((local_10 == (Level *)0x0) && ((((Level *)*piVar2)->AdditionalAlliances)._padfb0 != 0))
      {
        local_10 = (Level *)*piVar2;
      }
      *(uint32_t *)&local_c = local_c + 1;
      iVar1 = (**(code **)(this->ModPriority + 0xc))();
    } while (local_c < iVar1);
  }
  return local_10;
}

//==== 00700c10 GetFirstLevelWithPrecisionCombat ====


/* public: struct Level * __thiscall Campaign__GetFirstLevelWithPrecisionCombat(void)const  */

Level * __thiscall Campaign__GetFirstLevelWithPrecisionCombat(Campaign *this)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  int *piVar2;
  Level *pLStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pLStack_10 = (Level *)0x0;
  iStack_c = 0;
  iVar1 = (**(code **)(this->ModPriority + 0xc))();
  if (iStack_c < iVar1) {
    do {
      piVar2 = (int *)(**(code **)this->ModPriority)(&iStack_c);
      if ((pLStack_10 == (Level *)0x0) &&
         ((char)(((Level *)*piVar2)->Messages).StartingTutorial.Capacity != '\0')) {
        pLStack_10 = (Level *)*piVar2;
      }
      iStack_c = iStack_c + 1;
      iVar1 = (**(code **)(this->ModPriority + 0xc))();
    } while (iStack_c < iVar1);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return pLStack_10;
}





//==== 00700c80 GetFirstUnbeatenLevel ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: struct Level * __thiscall Campaign__GetFirstUnbeatenLevel(class DataParser *)const  */

Level * __thiscall Campaign__GetFirstUnbeatenLevel(Campaign *this,DataParser *param_1)

{
  undefined8 stack0xfffffffc;
  Level *pLVar1;
  int iVar2;
  undefined4 *puVar3;
  LevelRecord *pLVar4;
  int TVar5;
  Attribute_L_LevelRecord_G_ local_1e8;
  Attribute_L_LevelRecord_G_ local_170;
  Attribute_L_LevelRecord_G_ local_f8;
  LevelRecord local_80;
  Level *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = (Level *)0x0;
  *(uint32_t *)&local_c = 0;
  iVar2 = (**(code **)(this->ModPriority + 0xc))();
  if (local_c < iVar2) {
    do {
      puVar3 = (undefined4 *)(**(code **)this->ModPriority)(&local_c);
      pLVar1 = (Level *)*puVar3;
      if (local_10 == (Level *)0x0) {
        pLVar4 = LevelRecord__GetLevelRecord(pLVar1,param_1,true);
        local_1e8.Getter.Callee = (void *)0x0;
        local_1e8.Getter.CallbackFunction = (_func___cdecl_LevelRecord_void_ptr *)0x0;
        LevelRecord__LevelRecord(&local_1e8.Value);
        pLVar4 = LevelRecord__GetLevelRecord(pLVar1,param_1,false);
        local_170.Getter.Callee = (void *)0x0;
        local_170.Getter.CallbackFunction = (_func___cdecl_LevelRecord_void_ptr *)0x0;
        LevelRecord__LevelRecord(&local_170.Value);
        local_80._pad_0x4_1 = 0;
        local_80._pad_0x8_2 = 0;
        local_80._pad_0xc_3 = 0;
        local_80._pad_0x0_0 = (int)&vftable_64;
        local_80.ForLevel = (Level *)0x0;
        local_80.TimeElapsed_s.Data = 0.0;
        local_80.TimeElapsed_s.IsValidData = false;
        local_80.DeltaVSpent_km__s.Data = 0.0;
        local_80.DeltaVSpent_km__s.IsValidData = false;
        local_80.CapitalShipsAlive_Percent.Data = 0.0;
        local_80.CapitalShipsAlive_Percent.IsValidData = false;
        local_80.CapitalShipsUnscathed_Percent.Data = 0.0;
        local_80.CapitalShipsUnscathed_Percent.IsValidData = false;
        local_80.EnemyModulesLeft_Percent.Data = 0.0;
        local_80.EnemyModulesLeft_Percent.IsValidData = false;
        local_80.IsADeveloperRecord = false;
        local_f8.Getter.Callee = (void *)0x0;
        local_f8.Getter.CallbackFunction = (_func___cdecl_LevelRecord_void_ptr *)0x0;
        LevelRecord__LevelRecord(&local_f8.Value);
        TVar5 = LevelRecord__GetRatingForLevel(&local_f8,&local_170,&local_1e8);
        local_f8.Value._pad_0x0_0 = (int)&vftable_5;
        if ((void *)local_f8.Value._pad_0x4_1 != (void *)0x0) {
          port_op_delete((void *)local_f8.Value._pad_0x4_1);
          local_f8.Value._pad_0x4_1 = 0;
        }
        if ((void *)local_80._pad_0x4_1 != (void *)0x0) {
          port_op_delete((void *)local_80._pad_0x4_1);
        }
        local_170.Value._pad_0x0_0 = (int)&vftable_5;
        if ((void *)local_170.Value._pad_0x4_1 != (void *)0x0) {
          port_op_delete((void *)local_170.Value._pad_0x4_1);
          local_170.Value._pad_0x4_1 = 0;
        }
        if ((void *)local_1e8.Value._pad_0x4_1 != (void *)0x0) {
          port_op_delete((void *)local_1e8.Value._pad_0x4_1);
        }
        if ((int)TVar5 < 1) {
          local_10 = pLVar1;
        }
      }
      *(uint32_t *)&local_c = local_c + 1;
      iVar2 = (**(code **)(this->ModPriority + 0xc))();
    } while (local_c < iVar2);
  }
  return local_10;
}

//==== 00700e70 GetImportantBody ====

/* public: struct CelestialBody * __thiscall Level__GetImportantBody(void)const  */

CelestialBody * __thiscall Level__GetImportantBody(Level *this)

{
  CelestialBody *pCVar1;
  
  pCVar1 = *(CelestialBody **)((char *)&(this[1]) + 0xc);
  if (pCVar1 == (CelestialBody *)0x0) {
    pCVar1 = (CelestialBody *)this[1]._pad_0x8_2;
  }
  return pCVar1;
}

//==== 00700e90 GetLastLevelWithoutFleetCustomization ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: struct Level * __thiscall Campaign__GetLastLevelWithoutFleetCustomization(void)const  */

Level * __thiscall Campaign__GetLastLevelWithoutFleetCustomization(Campaign *this)

{
  undefined8 stack0xfffffffc;
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  Campaign *local_1c;
  int local_18;
  int local_14;
  int local_10;
  char local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_18 = 0;
  piVar1 = &this->ModPriority;
  local_14 = 0;
  *(uint32_t *)&local_1c = (uint32_t)(uintptr_t)(this);
  iVar3 = (**(code **)(this->ModPriority + 0xc))();
  if (local_14 < iVar3) {
    do {
      piVar4 = (int *)(**(code **)*piVar1)(&local_14);
      iVar3 = *piVar4;
      iVar2 = local_18;
      if (local_18 == 0) {
        *(uint32_t *)&local_c = '\x01';
        local_10 = 0;
        iVar5 = (**(code **)(*(int *)(iVar3 + 0x210) + 0xc))();
        iVar2 = local_18;
        if (local_10 < iVar5) {
          do {
            iVar5 = (*(code *)**(undefined4 **)(iVar3 + 0x210))(&local_10);
            if ((*(int *)(iVar5 + 0x10) != 0) && (*(char *)(*(int *)(iVar5 + 0x10) + 0xa9) != '\0'))
            {
              if (local_c == '\0') {
                iVar6 = *(int *)(iVar3 + 0x80);
              }
              else {
                iVar6 = *(int *)(iVar3 + 0x78);
              }
              iVar2 = iVar3;
              if (*(int *)(iVar5 + 8) == iVar6) break;
            }
            local_10 = local_10 + 1;
            iVar5 = (**(code **)(*(int *)(iVar3 + 0x210) + 0xc))();
            iVar2 = local_18;
          } while (local_10 < iVar5);
        }
      }
      local_18 = iVar2;
      local_14 = local_14 + 1;
      iVar3 = (**(code **)(uintptr_t)(*piVar1 + 0xc))();
      this = local_1c;
    } while (local_14 < iVar3);
  }
  piVar8 = (int *)this[1]._pad_0x0_0;
  iVar3 = 0;
  piVar4 = piVar8 + this[1]._pad_0x4_1;
  while( true ) {
    if (piVar8 == piVar4) {
      return (Level *)0x0;
    }
    if (*piVar8 == local_18) break;
    piVar8 = piVar8 + 1;
    iVar3 = iVar3 + 1;
  }
  if (iVar3 < 1) {
    return (Level *)0x0;
  }
  *(uint32_t *)&local_1c = (uint32_t)(uintptr_t)((Campaign *)(iVar3 + -1));
  puVar7 = (undefined4 *)(**(code **)*piVar1)(&local_1c);
  return (Level *)*puVar7;
}

//==== 00700fc0 GetLastLevelWithoutModuleDesign ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: struct Level * __thiscall Campaign__GetLastLevelWithoutModuleDesign(void)const  */

Level * __thiscall Campaign__GetLastLevelWithoutModuleDesign(Campaign *this)

{
  undefined8 stack0xfffffffc;
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = 0;
  piVar1 = &this->ModPriority;
  *(uint32_t *)&local_c = 0;
  iVar2 = (**(code **)(this->ModPriority + 0xc))();
  if (local_c < iVar2) {
    do {
      piVar3 = (int *)(**(code **)*piVar1)(&local_c);
      if ((local_10 == 0) && (*(char *)(*piVar3 + 0x220) != '\0')) {
        local_10 = *piVar3;
      }
      *(uint32_t *)&local_c = local_c + 1;
      iVar2 = (**(code **)(uintptr_t)(*piVar1 + 0xc))();
    } while (local_c < iVar2);
  }
  piVar5 = (int *)this[1]._pad_0x0_0;
  iVar2 = 0;
  piVar3 = piVar5 + this[1]._pad_0x4_1;
  while( true ) {
    if (piVar5 == piVar3) {
      return (Level *)0x0;
    }
    if (*piVar5 == local_10) break;
    piVar5 = piVar5 + 1;
    iVar2 = iVar2 + 1;
  }
  if (iVar2 < 1) {
    return (Level *)0x0;
  }
  local_10 = iVar2 + -1;
  puVar4 = (undefined4 *)(**(code **)*piVar1)(&local_10);
  return (Level *)*puVar4;
}

//==== 00701080 GetLevelRecord ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: static struct LevelRecord * __cdecl LevelRecord__GetLevelRecord(struct Level *,class
   DataParser *,bool) */

LevelRecord * __cdecl LevelRecord__GetLevelRecord(Level *param_1,DataParser *param_2,bool param_3)

{
  undefined8 stack0xfffffffc;
  DataParser *pDVar1;
  bool bVar2;
  char cVar3;
  LevelRecord *pLVar4;
  int iVar5;
  int *piVar6;
  undefined1 *puVar7;
  char *pcVar8;
  int local_3c;
  undefined **local_38;
  undefined4 *puStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  Str_L_char_G_ local_28;
  undefined **local_1c;
  int *piStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int local_c;
  uint local_8;
  
  pDVar1 = param_2;
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (param_1 == (Level *)0x0) {
    return (LevelRecord *)0x0;
  }
  *(uint32_t *)&local_1c = (uint32_t)(uintptr_t)((undefined **)0x0);
  piStack_18 = (int *)0x0;
  iStack_14 = 0;
  uStack_10 = 0;
  util__Str_char___Str_char(&local_28,"LevelRecord");
  (**(code **)(*(int *)pDVar1 + 4))(&local_1c,&local_28,0);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  piVar6 = piStack_18;
  do {
    if (piVar6 == piStack_18 + iStack_14) {
      pLVar4 = (LevelRecord *)(uintptr_t)(port_op_new(0x70));
      if (pLVar4 == (LevelRecord *)0x0) {
        pLVar4 = (LevelRecord *)0x0;
      }
      else {
        pLVar4 = (LevelRecord *)LevelRecord__LevelRecord(pLVar4);
      }
      pLVar4->IsADeveloperRecord = param_3;
      pLVar4->ForLevel = param_1;
      if (param_1->_pad_0x8_2 < 1) {
        puVar7 = (undefined1 *)(&cde_l2_0b2b1c9f_NullString);
      }
      else {
        puVar7 = (undefined1 *)param_1->_pad_0x4_1;
      }
      pcVar8 = "Dev";
      if (pLVar4->IsADeveloperRecord == false) {
        pcVar8 = "User";
      }
      util__Printf(&local_28,(wchar_t*)("%s %s"),pcVar8,puVar7);
      util__Str_char___operator__o8((Str_L_char_G_ *)&pLVar4->_pad_0x4_1,&local_28);
      if (local_28.Data != (char *)0x0) {
        port_op_delete(local_28.Data);
      }
      cVar3 = (**(code **)(*(int *)pDVar1 + 8))(pLVar4);
      if (cVar3 == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\main\\levels.cpp",0x289,"Success",
                        (char *)0x0);
        DebugBreak();
      }
LAB_007012af:
      *(uint32_t *)&local_1c = (uint32_t)(uintptr_t)(&vftable_6);
      if (piStack_18 != (int *)0x0) {
        port_op_delete(piStack_18);
      }
      return pLVar4;
    }
    if ((*(Level **)(*piVar6 + 0x10) == param_1) && ((bool)*(char *)(*piVar6 + 0x68) == param_3)) {
      local_28.Capacity = (int)&param_1;
      local_28.Length = (int)&param_3;
      local_38 = (undefined **)0x0;
      puStack_34 = (undefined4 *)0x0;
      iStack_30 = 0;
      uStack_2c = 0;
      iVar5 = (*(code *)local_1c[3])();
      util__Darray_L_util__Reflectable_P_G___Darray_L_util__Reflectable_P_G_
                ((Darray_L_util__Reflectable_P_G_ *)&local_38,iVar5);
      *(uint32_t *)&local_c = 0;
      iVar5 = (*(code *)local_1c[3])();
      if (local_c < iVar5) {
        do {
          piVar6 = (int *)(*(code *)*local_1c)(&local_c);
          iVar5 = iStack_30;
          if ((*(Level **)(*piVar6 + 0x10) == *(Level **)local_28.Capacity) &&
             ((bool)*(char *)(*piVar6 + 0x68) == *(bool *)local_28.Length)) {
            local_3c = iStack_30 + 1;
            util__Darray_L_util__Reflectable_P_G___SetSize
                      ((Darray_L_util__Reflectable_P_G_ *)&local_38,&local_3c);
            bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                              ((Darray_L_GraphicsResource__Type_G_ *)&local_38,iVar5);
            if (bVar2) {
              puStack_34[iStack_30 + -1] = *piVar6;
            }
          }
          *(uint32_t *)&local_c = local_c + 1;
          iVar5 = (*(code *)local_1c[3])();
        } while (local_c < iVar5);
      }
      if (iStack_30 != 1) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\function.inl",
                        0x38,"FilteredArray.Num() == 1",(char *)0x0);
        DebugBreak();
      }
      if (iStack_30 < 1) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3a,
                        "Size > 0",(char *)0x0);
        DebugBreak();
      }
      pLVar4 = (LevelRecord *)*puStack_34;
      local_38 = (undefined **)(&vftable_6);
      port_op_delete(puStack_34);
      goto LAB_007012af;
    }
    piVar6 = piVar6 + 1;
  } while( true );
}

//==== 00701bc0 GetNewsBulletins ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: class util__Darray_L_classNewsItem_P_G_ __thiscall Campaign__GetNewsBulletins(class
   DataParser *,struct Level *)const  */

DataParser * __thiscall
Campaign__GetNewsBulletins(Campaign *this,DataParser *param_1,Level *param_2)

{
  undefined8 stack0xfffffffc;
  undefined4 uVar1;
  DataParser *pDVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  Darray_L_class_NewsItem_P_G_ *pDVar8;
  int iVar9;
  int *piVar10;
  int in_stack_0000000c;
  Str_L_char_G_ local_68;
  DataParser *local_5c;
  undefined **local_58;
  void *local_54;
  int local_48;
  undefined **local_44;
  void *pvStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined **local_34;
  void *pvStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined **local_24;
  void *pvStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  int *local_14;
  undefined4 *local_10;
  undefined1 local_c [4];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar7 = (int *)this[1]._pad_0x0_0;
  local_14 = &this->ModPriority;
  piVar10 = piVar7 + this[1]._pad_0x4_1;
  local_5c = param_1;
  while( true ) {
    if (piVar7 == piVar10) {
      local_24 = (undefined **)0x0;
      pvStack_20 = (void *)0x0;
      iStack_1c = 0;
      uStack_18 = 0;
      util__Str_char___Str_char(&local_68,"NewsItem");
      (**(code **)(param_2->_pad_0x0_0 + 4))(&local_58,&local_68,0);
      if (local_68.Data != (char *)0x0) {
        port_op_delete(local_68.Data);
        local_68.Data = (char *)0x0;
      }
      local_24 = (undefined **)0x0;
      pvStack_20 = (void *)0x0;
      iStack_1c = 0;
      uStack_18 = 0;
      iVar4 = (*(code *)local_58[3])();
      util__Darray_L_NewsItem_P_G___Darray_L_NewsItem_P_G_((Darray_L_NewsItem_P_G_ *)&local_24,iVar4);
      local_10 = (undefined4 *)0x0;
      iVar4 = (*(code *)local_58[3])();
      if ((int)local_10 < iVar4) {
        do {
          puVar5 = (undefined4 *)(*(code *)*local_58)(&local_10);
          iVar4 = iStack_1c;
          uVar1 = *puVar5;
          local_48 = iStack_1c + 1;
          util__Darray_L_util__Reflectable_P_G___SetSize
                    ((Darray_L_util__Reflectable_P_G_ *)&local_24,&local_48);
          bVar3 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                            ((Darray_L_GraphicsResource__Type_G_ *)&local_24,iVar4);
          if (bVar3) {
            *(undefined4 *)((int)pvStack_20 + iStack_1c * 4 + -4) = uVar1;
          }
          local_10 = (undefined4 *)((int)local_10 + 1);
          iVar4 = (*(code *)local_58[3])();
        } while ((int)local_10 < iVar4);
      }
      local_58 = (undefined **)(&vftable_6);
      if (local_54 != (void *)0x0) {
        port_op_delete(local_54);
      }
      piVar10 = local_14;
      iVar4 = iStack_1c;
      iVar6 = (**(code **)(uintptr_t)(*local_14 + 0xc))();
      iVar9 = iStack_1c;
      piVar7 = (int *)(iVar4 / iVar6);
      local_14 = piVar7;
      iVar4 = (**(code **)(uintptr_t)(*piVar10 + 0xc))();
      local_44 = (undefined **)0x0;
      pvStack_40 = (void *)0x0;
      iStack_3c = 0;
      uStack_38 = 0;
      local_c[0] = 0;
      iVar9 = iVar9 - iVar4 * (int)piVar7;
      pDVar8 = (Darray_L_class_NewsItem_P_G_ *)FUN_006fd550(&local_58,&local_24,local_c);
      util__Darray_L_NewsItem_P_G___Darray_L_NewsItem_P_G_((Darray_L_NewsItem_P_G_ *)&local_44,pDVar8);
      local_58 = &vftable_142;
      if (local_54 != (void *)0x0) {
        port_op_delete(local_54);
      }
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
      local_48 = (uint)(0 < iVar9) + (int)piVar7;
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
      iVar4 = iVar9;
      if (-1 < iVar9) {
        iVar4 = 0;
      }
      *(uint32_t *)&local_34 = (uint32_t)(uintptr_t)((undefined **)0x0);
      pvStack_30 = (void *)0x0;
      iStack_2c = 0;
      uStack_28 = 0;
      iVar6 = 0;
      if (-1 < -iVar9) {
        iVar6 = -iVar9;
      }
      piVar10 = (int *)(iVar4 * ((int)local_14 + 1) + iVar6 * (int)local_14);
      util__Darray_L_NewsItem_P_G___Darray_L_NewsItem_P_G_((Darray_L_NewsItem_P_G_ *)&local_34,(int)local_14);
      iVar4 = local_48;
      if (0 < local_48) {
        do {
          local_14 = piVar10;
          if ((int)piVar10 < iStack_3c) {
            local_10 = (undefined4 *)(*(code *)*local_44)(&local_14);
            iVar9 = iStack_2c;
            local_48 = iStack_2c + 1;
            util__Darray_L_util__Reflectable_P_G___SetSize
                      ((Darray_L_util__Reflectable_P_G_ *)&local_34,&local_48);
            bVar3 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                              ((Darray_L_GraphicsResource__Type_G_ *)&local_34,iVar9);
            if (bVar3) {
              *(undefined4 *)((int)pvStack_30 + iStack_2c * 4 + -4) = *local_10;
            }
          }
          piVar10 = (int *)((int)piVar10 + 1);
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      pDVar2 = local_5c;
      util__Darray_L_NewsItem_P_G___Darray_L_NewsItem_P_G_
                ((Darray_L_NewsItem_P_G_ *)local_5c,(Darray_L_class_NewsItem_P_G_ *)&local_34);
      *(uint32_t *)&local_34 = (uint32_t)(uintptr_t)(&vftable_142);
      if (pvStack_30 != (void *)0x0) {
        port_op_delete(pvStack_30);
      }
      pvStack_30 = (void *)0x0;
      *(uint32_t *)&local_34 = (uint32_t)(uintptr_t)(&vftable);
      local_44 = &vftable_142;
      if (pvStack_40 != (void *)0x0) {
        port_op_delete(pvStack_40);
      }
      pvStack_40 = (void *)0x0;
      local_44 = (undefined **)(&vftable);
      local_24 = &vftable_142;
      if (pvStack_20 != (void *)0x0) {
        port_op_delete(pvStack_20);
      }
      return pDVar2;
    }
    if (*piVar7 == in_stack_0000000c) break;
    piVar7 = piVar7 + 1;
  }
  *(undefined ***)param_1 = &vftable_142;
  *(undefined4 *)&param_1->field_0x4 = 0;
  *(undefined4 *)&param_1->field_0x8 = 0;
  *(undefined4 *)&param_1->field_0xc = 0;
  return param_1;
}

//==== 00701ed0 GetPointerPropertyChoices_00701ed0 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_  Campaign__GetPointerPropertyChoices(struct
   util__ClassMember const &,class util__SerializationManagerInterface const *)const  */

void 
Campaign__GetPointerPropertyChoices
          (Campaign *this,ClassMember *param_1,SerializationManagerInterface *param_2)

{
  undefined8 stack0xfffffffc;
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
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
  for (pcVar3 = "MainMenuMusic";
      (cVar1 = pcVar3[(int)((*(int *)&(SVar6)) + -0x93761c)], cVar1 != '\0' || (*pcVar3 != '\0'));
      pcVar3 = pcVar3 + 1) {
    if (cVar1 != *pcVar3) {
      (param_1->Name).Data =
           (char *)&vftable_85;
      (param_1->Name).Capacity = 0;
      (param_1->Name).Length = 0;
      *(undefined4 *)&param_1->Type = 0;
LAB_00702098:
      __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  acStack_c[0] = cVar1;
  util__Str_char___Str_char(&SStack_54,"SoundEffect");
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
      piVar5 = (int *)(*(code *)*ppuStack_34)(&iStack_10);
      iVar4 = iStack_1c;
      if (*(char *)(*piVar5 + 0x35) != '\0') {
        iStack_38 = iStack_1c + 1;
        util__Darray_class_util__Reflectable____SetSize
                  ((Darray_L_class_util__Reflectable_P_G_ *)&ppuStack_24,&iStack_38);
        bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                          ((Darray_L_enum_GraphicsResource__Type_G_ *)&ppuStack_24,iVar4);
        if (bVar2) {
          *(int *)((int)pvStack_20 + iStack_1c * 4 + -4) = *piVar5;
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
  goto LAB_00702098;
}





//==== 007020b0 GetPointerPropertyChoices_007020b0 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   CutsceneMessage__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

ClassMember * 
CutsceneMessage__GetPointerPropertyChoices
          (CutsceneMessage *this,ClassMember *param_1,SerializationManagerInterface *param_2)

{
  char *pcVar1;
  SerializationManagerInterface SVar2;
  int *in_stack_0000000c;
  undefined **ppuStack_34;
  void *pvStack_30;
  Str_L_char_G_ SStack_24;
  undefined **ppuStack_18;
  void *pvStack_14;
  undefined1 auStack_8 [4];
  
  if ((*(int *)&(param_2[1])) < 1) {
    SVar2 = (*(SerializationManagerInterface *)
            &cde_l2_0b2b1c9f_NullString);
  }
  else {
    SVar2 = *param_2;
  }
  for (pcVar1 = "Talker"; (pcVar1[(int)((*(int *)&(SVar2)) + -0x91f2cc)] != '\0' || (*pcVar1 != '\0'));
      pcVar1 = pcVar1 + 1) {
    if (pcVar1[(int)((*(int *)&(SVar2)) + -0x91f2cc)] != *pcVar1) {
      (param_1->Name).Data =
           (char *)&vftable_85;
      (param_1->Name).Capacity = 0;
      (param_1->Name).Length = 0;
      *(undefined4 *)&param_1->Type = 0;
      return param_1;
    }
  }
  util__Str_char___Str_char(&SStack_24,"Speaker");
  (**(code **)(uintptr_t)(*in_stack_0000000c + 4))(&ppuStack_34,&SStack_24,0);
  if (SStack_24.Data != (char *)0x0) {
    port_op_delete(SStack_24.Data);
    SStack_24.Data = (char *)0x0;
  }
  auStack_8[0] = 0;
  FUN_004f1250(&ppuStack_18,&ppuStack_34,auStack_8);
  AsListing_class_util__Reflectable((Darray_L_class_util__Reflectable_P_G_ *)param_1);
  ppuStack_18 = (undefined **)(&vftable_6);
  if (pvStack_14 != (void *)0x0) {
    port_op_delete(pvStack_14);
  }
  pvStack_14 = (void *)0x0;
  ppuStack_18 = (undefined **)(&vftable);
  ppuStack_34 = (undefined **)(&vftable_6);
  if (pvStack_30 == (void *)0x0) {
    return param_1;
  }
  port_op_delete(pvStack_30);
  return param_1;
}





//==== 007021c0 GetPointerPropertyChoices_007021c0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ __thiscall Level__GetPointerPropertyChoices(struct
   util__ClassMember const &,class util__SerializationManagerInterface const *)const  */

ClassMember * __thiscall
Level__GetPointerPropertyChoices
          (Level *this,ClassMember *param_1,SerializationManagerInterface *param_2)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  SerializationManagerInterface SVar6;
  SerializationManagerInterface *in_stack_0000000c;
  Str_L_char_G_ local_58;
  undefined **local_4c;
  void *local_48;
  undefined **local_3c;
  void *pvStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined **local_2c;
  void *local_28;
  Level *local_1c;
  char local_18;
  Level *local_14;
  Level *local_10;
  char local_c [4];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((*(int *)&(param_2[1])) < 1) {
    SVar6 = (*(SerializationManagerInterface *)
            &cde_l2_0b2b1c9f_NullString);
  }
  else {
    SVar6 = *param_2;
  }
  pcVar2 = "Music";
  while( true ) {
    local_c[0] = pcVar2[(int)((*(int *)&(SVar6)) + -0x91e67c)];
    local_10 = this;
    if ((local_c[0] == '\0') && (*pcVar2 == '\0')) {
      util__Str_char___Str_char(&local_58,"SoundEffect");
      (**(code **)(*(int *)(in_stack_0000000c) + 4))(&local_2c,&local_58,0);
      if (local_58.Data != (char *)0x0) {
        port_op_delete(local_58.Data);
        local_58.Data = (char *)0x0;
      }
      local_18 = local_c[0];
      local_3c = (undefined **)0x0;
      pvStack_38 = (void *)0x0;
      iStack_34 = 0;
      uStack_30 = 0;
      iVar3 = (*(code *)local_2c[3])();
      util__Darray_L_util__Reflectable_P_G___Darray_L_util__Reflectable_P_G_
                ((Darray_L_util__Reflectable_P_G_ *)&local_3c,iVar3);
      local_10 = (Level *)0x0;
      iVar3 = (*(code *)local_2c[3])();
      if ((int)local_10 < iVar3) {
        do {
          piVar4 = (int *)(*(code *)*local_2c)(&local_10);
          iVar3 = iStack_34;
          if (*(char *)(*piVar4 + 0x35) != '\0') {
            local_14 = (Level *)(iStack_34 + 1);
            util__Darray_L_util__Reflectable_P_G___SetSize
                      ((Darray_L_util__Reflectable_P_G_ *)&local_3c,(int *)&local_14);
            bVar1 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                              ((Darray_L_GraphicsResource__Type_G_ *)&local_3c,iVar3);
            if (bVar1) {
              *(int *)((int)pvStack_38 + iStack_34 * 4 + -4) = *piVar4;
            }
          }
          local_10 = (Level *)((int)&local_10->_pad_0x0_0 + 1);
          iVar3 = (*(code *)local_2c[3])();
        } while ((int)local_10 < iVar3);
      }
      goto LAB_007022d5;
    }
    if (local_c[0] != *pcVar2) break;
    pcVar2 = pcVar2 + 1;
  }
  if ((*(int *)&(param_2[1])) < 1) {
    SVar6 = (*(SerializationManagerInterface *)
            &cde_l2_0b2b1c9f_NullString);
  }
  else {
    SVar6 = *param_2;
  }
  for (pcVar2 = "PlayerAlliance";
      (pcVar2[(int)((*(int *)&(SVar6)) + -0x937574)] != '\0' || (*pcVar2 != '\0')); pcVar2 = pcVar2 + 1) {
    if (pcVar2[(int)((*(int *)&(SVar6)) + -0x937574)] != *pcVar2) {
      bVar1 = util__Str_char___operator__o9((Str_L_char_G_ *)param_2,"EnemyAlliance");
      if (bVar1) {
        util__Str_char___Str_char(&local_58,"Faction");
        (**(code **)(*(int *)(in_stack_0000000c) + 4))(&local_2c,&local_58,1);
        if (local_58.Data != (char *)0x0) {
          port_op_delete(local_58.Data);
          local_58.Data = (char *)0x0;
        }
        *(uint32_t *)&local_1c = (uint32_t)(uintptr_t)(local_10);
        local_3c = (undefined **)0x0;
        pvStack_38 = (void *)0x0;
        iStack_34 = 0;
        uStack_30 = 0;
        iVar3 = (*(code *)local_2c[3])();
        util__Darray_L_util__Reflectable_P_G___Darray_L_util__Reflectable_P_G_
                  ((Darray_L_util__Reflectable_P_G_ *)&local_3c,iVar3);
        local_10 = (Level *)0x0;
        iVar3 = (*(code *)local_2c[3])();
        if ((int)local_10 < iVar3) {
          do {
            piVar4 = (int *)(*(code *)*local_2c)(&local_10);
            iVar3 = iStack_34;
            if ((Faction *)*piVar4 != local_1c->PlayerAlliance) {
              local_14 = (Level *)(iStack_34 + 1);
              util__Darray_L_util__Reflectable_P_G___SetSize
                        ((Darray_L_util__Reflectable_P_G_ *)&local_3c,(int *)&local_14);
              bVar1 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                                ((Darray_L_GraphicsResource__Type_G_ *)&local_3c,iVar3);
              if (bVar1) {
                *(int *)((int)pvStack_38 + iStack_34 * 4 + -4) = *piVar4;
              }
            }
            local_10 = (Level *)((int)&local_10->_pad_0x0_0 + 1);
            iVar3 = (*(code *)local_2c[3])();
          } while ((int)local_10 < iVar3);
        }
LAB_007022d5:
        local_c[0] = '\0';
        FUN_004f1250(&local_4c,&local_3c,local_c);
        AsListing_L_util__Reflectable_P_G_((Darray_L_util__Reflectable_P_G_ *)param_1);
        *(uint32_t *)&local_4c = (uint32_t)(uintptr_t)(&vftable_6);
        if (local_48 != (void *)0x0) {
          port_op_delete(local_48);
        }
        local_48 = (void *)0x0;
        *(uint32_t *)&local_4c = (uint32_t)(uintptr_t)(&vftable);
        local_3c = (undefined **)(&vftable_6);
        if (pvStack_38 != (void *)0x0) {
          port_op_delete(pvStack_38);
        }
        pvStack_38 = (void *)0x0;
        local_3c = (undefined **)(&vftable);
      }
      else {
        bVar1 = util__Str_char___operator__o9((Str_L_char_G_ *)param_2,"AI");
        if ((!bVar1) &&
           (bVar1 = util__Str_char___operator__o9((Str_L_char_G_ *)param_2,"AlliedAI"), !bVar1)) {
          bVar1 = util__Str_char___operator__o9((Str_L_char_G_ *)param_2,"AdditionalAlliances");
          if (bVar1) {
            uVar5 = util__SerializationManagerInterface__GetDataOfType_L_Faction_G_
                              (in_stack_0000000c,SUB41(&local_2c,0));
            local_c[0] = '\0';
            FUN_004f1250(&local_4c,uVar5,local_c);
            AsListing_L_util__Reflectable_P_G_((Darray_L_util__Reflectable_P_G_ *)param_1);
            Darray_L_util__Reflectable_P_G___dtor((Darray_L_util__Reflectable_P_G_ *)&local_4c);
            Darray_L_util__Reflectable_P_G___dtor((Darray_L_util__Reflectable_P_G_ *)&local_2c);
            return param_1;
          }
          bVar1 = util__Str_char___operator__o9((Str_L_char_G_ *)param_2,"BriefingSubject__RecommendedReading");
          if (bVar1) {
            util__Str_char___Str_char(&local_58,"Concept");
            (**(code **)(*(int *)(in_stack_0000000c) + 4))(&local_4c,&local_58,0);
            if (local_58.Data != (char *)0x0) {
              port_op_delete(local_58.Data);
              local_58.Data = (char *)0x0;
            }
            Concept__SubsectionConcepts((Darray_L_util__Reflectable_P_G_ *)param_1);
            Darray_L_util__Reflectable_P_G___dtor((Darray_L_util__Reflectable_P_G_ *)&local_4c);
            return param_1;
          }
          (param_1->Name).Data =
               (char *)&vftable_85;
          (param_1->Name).Capacity = 0;
          (param_1->Name).Length = 0;
          *(undefined4 *)&param_1->Type = 0;
          return param_1;
        }
        util__Str_char___Str_char(&local_58,"MilitaryDoctrine");
        (**(code **)(*(int *)(in_stack_0000000c) + 4))(&local_2c,&local_58,1);
        if (local_58.Data != (char *)0x0) {
          port_op_delete(local_58.Data);
          local_58.Data = (char *)0x0;
        }
        local_c[0] = '\0';
        FUN_004f1250(&local_4c,&local_2c,local_c);
        AsListing_L_util__Reflectable_P_G_((Darray_L_util__Reflectable_P_G_ *)param_1);
        *(uint32_t *)&local_4c = (uint32_t)(uintptr_t)(&vftable_6);
        if (local_48 != (void *)0x0) {
          port_op_delete(local_48);
        }
        local_48 = (void *)0x0;
        *(uint32_t *)&local_4c = (uint32_t)(uintptr_t)(&vftable);
      }
      local_2c = (undefined **)(&vftable_6);
      if (local_28 != (void *)0x0) {
        port_op_delete(local_28);
      }
      return param_1;
    }
  }
  util__Str_char___Str_char(&local_58,"Faction");
  (**(code **)(*(int *)(in_stack_0000000c) + 4))(&local_2c,&local_58,0);
  if (local_58.Data != (char *)0x0) {
    port_op_delete(local_58.Data);
    local_58.Data = (char *)0x0;
  }
  local_14 = local_10;
  local_3c = (undefined **)0x0;
  pvStack_38 = (void *)0x0;
  iStack_34 = 0;
  uStack_30 = 0;
  iVar3 = (*(code *)local_2c[3])();
  util__Darray_L_util__Reflectable_P_G___Darray_L_util__Reflectable_P_G_
            ((Darray_L_util__Reflectable_P_G_ *)&local_3c,iVar3);
  local_10 = (Level *)0x0;
  iVar3 = (*(code *)local_2c[3])();
  if ((int)local_10 < iVar3) {
    do {
      piVar4 = (int *)(*(code *)*local_2c)(&local_10);
      iVar3 = iStack_34;
      if (*piVar4 != (local_14->AdditionalAlliances)._padfb0) {
        *(uint32_t *)&local_1c = (uint32_t)(uintptr_t)((Level *)(iStack_34 + 1));
        util__Darray_L_util__Reflectable_P_G___SetSize
                  ((Darray_L_util__Reflectable_P_G_ *)&local_3c,(int *)&local_1c);
        bVar1 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                          ((Darray_L_GraphicsResource__Type_G_ *)&local_3c,iVar3);
        if (bVar1) {
          *(int *)((int)pvStack_38 + iStack_34 * 4 + -4) = *piVar4;
        }
      }
      local_10 = (Level *)((int)&local_10->_pad_0x0_0 + 1);
      iVar3 = (*(code *)local_2c[3])();
    } while ((int)local_10 < iVar3);
  }
  goto LAB_007022d5;
}

//==== 007026d0 GetPointerPropertyChoices_007026d0 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   LevelMessages__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

ClassMember * 
LevelMessages__GetPointerPropertyChoices
          (LevelMessages *this,ClassMember *param_1,SerializationManagerInterface *param_2)

{
  int *in_stack_0000000c;
  undefined **ppuStack_34;
  void *pvStack_30;
  Str_L_char_G_ SStack_24;
  undefined **ppuStack_18;
  void *pvStack_14;
  undefined1 auStack_8 [4];
  
  util__Str_char___Str_char(&SStack_24,"Speaker");
  (**(code **)(uintptr_t)(*in_stack_0000000c + 4))(&ppuStack_34,&SStack_24,0);
  if (SStack_24.Data != (char *)0x0) {
    port_op_delete(SStack_24.Data);
    SStack_24.Data = (char *)0x0;
  }
  auStack_8[0] = 0;
  FUN_004f1250(&ppuStack_18,&ppuStack_34,auStack_8);
  AsListing_class_util__Reflectable((Darray_L_class_util__Reflectable_P_G_ *)param_1);
  ppuStack_18 = (undefined **)(&vftable_6);
  if (pvStack_14 != (void *)0x0) {
    port_op_delete(pvStack_14);
  }
  pvStack_14 = (void *)0x0;
  ppuStack_18 = (undefined **)(&vftable);
  ppuStack_34 = (undefined **)(&vftable_6);
  if (pvStack_30 != (void *)0x0) {
    port_op_delete(pvStack_30);
  }
  return param_1;
}





//==== 00702780 GetRatingForLevel ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: static enum LevelRating__Type __cdecl LevelRecord__GetRatingForLevel(struct
   util__Attribute_L_structLevelRecord_G_ const &,struct util__Attribute_L_structLevelRecord_G_ const
   &,struct util__Attribute_L_structLevelRecord_G_ const &) */

int __cdecl
LevelRecord__GetRatingForLevel
          (Attribute_L_LevelRecord_G_ *param_1,Attribute_L_LevelRecord_G_ *param_2,
          Attribute_L_LevelRecord_G_ *param_3)

{
  undefined8 stack0xfffffffc;
  char cVar1;
  char cVar2;
  Attribute_L_LevelRecord_G_ *this;
  bool bVar3;
  LevelRecord *pLVar4;
  Darray_L_LevelRecordMetadata_G_ *pDVar5;
  int iVar6;
  LevelRecordMetadata *pLVar7;
  char cVar8;
  int TVar9;
  LevelRecord local_124;
  LevelRecord local_b4;
  Darray_L_LevelRecordMetadata_G_ local_44;
  char local_31;
  Darray_L_LevelRecordMetadata_G_ local_30;
  Darray_L_util__Attribute_L_LevelRecord_G___G_ local_20;
  LevelRecord *local_10;
  Attribute_L_LevelRecord_G_ *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(uint32_t *)&local_c = (uint32_t)(uintptr_t)(param_3);
  local_10 = (LevelRecord *)0x0;
  pLVar4 = (LevelRecord *)(uintptr_t)(util__Attribute_struct_LevelRecord___Get(param_2,&local_b4));
  bVar3 = false;
  if ((pLVar4->TimeElapsed_s).IsValidData == false) {
    pLVar4 = (LevelRecord *)(uintptr_t)(util__Attribute_struct_LevelRecord___Get(param_1,&local_124));
    bVar3 = true;
    local_31 = '\x01';
    if ((pLVar4->TimeElapsed_s).IsValidData != false) goto LAB_007027de;
  }
  else {
LAB_007027de:
    local_31 = '\0';
  }
  if ((bVar3) &&
     (local_124._pad_0x0_0 = (int)&vftable_5,
     (void *)local_124._pad_0x4_1 != (void *)0x0)) {
    port_op_delete((void *)local_124._pad_0x4_1);
    local_124._pad_0x4_1 = 0;
  }
  local_b4._pad_0x0_0 = (int)&vftable_5;
  if ((void *)local_b4._pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)local_b4._pad_0x4_1);
  }
  if (local_31 != '\0') {
    return 0;
  }
  local_20._pad_0x0_0 = 0;
  local_20.Data = (Attribute_L_LevelRecord_G_ *)0x0;
  local_20.Size = 0;
  local_20.Capacity = 0;
  util__Darray_struct_util__Attribute_struct_LevelRecord_____Darray_struct_util__Attribute_struct_LevelRecord(&local_20,3);
  iVar6 = local_20.Size;
  local_10 = (LevelRecord *)(local_20.Size + 1);
  util__Darray_struct_util__Attribute_struct_LevelRecord_____SetSize(&local_20,(int *)&local_10);
  bVar3 = util__Darray_struct_util__Attribute_struct_LevelRecord_____CheckSize(&local_20,iVar6);
  if (bVar3) {
    util__Attribute_L_LevelRecord_G___op_assign
              (local_20.Data + local_20.Size + -1,(Attribute_L_struct_LevelRecord_G_ *)param_1);
  }
  iVar6 = local_20.Size;
  local_10 = (LevelRecord *)(local_20.Size + 1);
  util__Darray_struct_util__Attribute_struct_LevelRecord_____SetSize(&local_20,(int *)&local_10);
  bVar3 = util__Darray_struct_util__Attribute_struct_LevelRecord_____CheckSize(&local_20,iVar6);
  if (bVar3) {
    util__Attribute_L_LevelRecord_G___op_assign
              (local_20.Data + local_20.Size + -1,(Attribute_L_struct_LevelRecord_G_ *)param_2);
  }
  iVar6 = local_20.Size;
  local_10 = (LevelRecord *)(local_20.Size + 1);
  util__Darray_struct_util__Attribute_struct_LevelRecord_____SetSize(&local_20,(int *)&local_10);
  bVar3 = util__Darray_struct_util__Attribute_struct_LevelRecord_____CheckSize(&local_20,iVar6);
  this = local_c;
  if (bVar3) {
    util__Attribute_L_LevelRecord_G___op_assign
              (local_20.Data + local_20.Size + -1,(Attribute_L_struct_LevelRecord_G_ *)local_c);
  }
  local_30._pad_0x0_0 = 0;
  local_30.Data = (LevelRecordMetadata *)0x0;
  local_30.Size = 0;
  local_30.Capacity = 0;
  local_10 = (LevelRecord *)(uintptr_t)(util__Attribute_struct_LevelRecord___Get(this,&local_b4));
  pDVar5 = (Darray_L_LevelRecordMetadata_G_ *)(uintptr_t)(GetMetadata(&local_44));
  local_30._pad_0x0_0 = 0;
  local_30.Data = (LevelRecordMetadata *)0x0;
  local_30.Size = 0;
  local_30.Capacity = 0;
  iVar6 = (**(code **)(pDVar5->_pad_0x0_0 + 0xc))();
  util__Darray_L_LevelRecordMetadata_G___Darray_L_LevelRecordMetadata_G_(&local_30,iVar6);
  *(uint32_t *)&local_c = (uint32_t)(uintptr_t)((Attribute_L_LevelRecord_G_ *)0x0);
  iVar6 = (**(code **)(pDVar5->_pad_0x0_0 + 0xc))();
  if ((int)local_c < iVar6) {
    do {
      pLVar7 = (LevelRecordMetadata *)(**(code **)pDVar5->_pad_0x0_0)(&local_c);
      cVar1 = *(char *)((int)&(local_10->ForLevel->Messages).StartingTutorial.Size + 2);
      cVar2 = (char)(local_10->ForLevel->Messages).StartingTutorial.Capacity;
      cVar8 = cVar2;
      if ((*(char *)((int)&pLVar7[1].Name.Capacity + 3) == '\0') &&
         (cVar8 = cVar1, *(char *)((int)&pLVar7[1].Name.Capacity + 1) == '\0')) {
        if (*(char *)((int)&pLVar7[1].Name.Capacity + 2) != '\0') {
          if ((cVar1 == '\0') && (cVar2 == '\0')) {
            cVar8 = '\x01';
          }
          else {
            cVar8 = '\0';
          }
          goto LAB_00702996;
        }
LAB_0070299a:
        util__Darray_L_LevelRecordMetadata_G___Add(&local_30,pLVar7);
      }
      else {
LAB_00702996:
        if (cVar8 != '\0') goto LAB_0070299a;
      }
      *(uint32_t *)&local_c = (uint32_t)(uintptr_t)((Attribute_L_LevelRecord_G_ *)((int)&(local_c->Getter).Callee + 1));
      iVar6 = (**(code **)(pDVar5->_pad_0x0_0 + 0xc))();
    } while ((int)local_c < iVar6);
  }
  local_44._pad_0x0_0 = (int)&vftable_78;
  if (local_44.Data != (LevelRecordMetadata *)0x0) {
    LevelRecordMetadata___vector_deleting_destructor(local_44.Data,3);
  }
  local_b4._pad_0x0_0 = (int)&vftable_5;
  if ((void *)local_b4._pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)local_b4._pad_0x4_1);
  }
  *(uint32_t *)&local_c = (uint32_t)(uintptr_t)((Attribute_L_LevelRecord_G_ *)0x0);
  iVar6 = (**(code **)(uintptr_t)(local_30._pad_0x0_0 + 0xc))();
  if ((int)local_c < iVar6) {
    do {
      pLVar7 = (LevelRecordMetadata *)(**(code **)local_30._pad_0x0_0)(&local_c);
      bVar3 = IsBetterThanOtherRecords(param_1,&local_20,pLVar7);
      if ((!bVar3) && (bVar3 = IsBetterThanOtherRecords(param_2,&local_20,pLVar7), !bVar3)) {
        *(uint32_t *)&local_c = (uint32_t)(uintptr_t)((Attribute_L_LevelRecord_G_ *)0x0);
        iVar6 = (**(code **)(uintptr_t)(local_30._pad_0x0_0 + 0xc))();
        if (iVar6 <= (int)local_c) goto LAB_00702aeb;
        goto LAB_00702aa8;
      }
      *(uint32_t *)&local_c = (uint32_t)(uintptr_t)((Attribute_L_LevelRecord_G_ *)((int)&(local_c->Getter).Callee + 1));
      iVar6 = (**(code **)(uintptr_t)(local_30._pad_0x0_0 + 0xc))();
    } while ((int)local_c < iVar6);
  }
  TVar9 = 3;
LAB_00702a48:
  local_30._pad_0x0_0 = (int)&vftable_78;
  if (local_30.Data != (LevelRecordMetadata *)0x0) {
    LevelRecordMetadata___vector_deleting_destructor(local_30.Data,3);
  }
  local_30.Data = (LevelRecordMetadata *)0x0;
  local_30._pad_0x0_0 = (int)&vftable;
  local_20._pad_0x0_0 = (int)&vftable_76;
  if (local_20.Data != (Attribute_L_LevelRecord_G_ *)0x0) {
    util__Attribute_L_LevelRecord_G_____vector_deleting_destructor_(local_20.Data,3);
  }
  return TVar9;
  while( true ) {
    *(uint32_t *)&local_c = (uint32_t)(uintptr_t)((Attribute_L_LevelRecord_G_ *)((int)&(local_c->Getter).Callee + 1));
    iVar6 = (**(code **)(uintptr_t)(local_30._pad_0x0_0 + 0xc))();
    if (iVar6 <= (int)local_c) break;
LAB_00702aa8:
    pLVar7 = (LevelRecordMetadata *)(**(code **)local_30._pad_0x0_0)(&local_c);
    bVar3 = IsBetterThanOtherRecords(param_1,&local_20,pLVar7);
    if ((bVar3) || (bVar3 = IsBetterThanOtherRecords(param_2,&local_20,pLVar7), bVar3)) {
      TVar9 = 2;
      goto LAB_00702a48;
    }
  }
LAB_00702aeb:
  TVar9 = 1;
  goto LAB_00702a48;
}

//==== 00702b00 GetRatingForLevel_00702b00 ====

/* public: static enum LevelRating__Type __cdecl LevelRecord__GetRatingForLevel(class DataParser
   *,struct Level *) */

int __cdecl LevelRecord__GetRatingForLevel__o3(DataParser *param_1,Level *param_2)

{
  LevelRecord *pLVar1;
  int TVar2;
  Attribute_L_LevelRecord_G_ local_1dc;
  Attribute_L_LevelRecord_G_ local_164;
  Attribute_L_LevelRecord_G_ local_ec;
  LevelRecord local_74;
  
  pLVar1 = (LevelRecord *)(uintptr_t)(GetLevelRecord(param_2,param_1,true));
  local_1dc.Getter.Callee = (void *)0x0;
  local_1dc.Getter.CallbackFunction = (_func___cdecl_LevelRecord_void_ptr *)0x0;
  LevelRecord__LevelRecord(&local_1dc.Value);
  pLVar1 = (LevelRecord *)(uintptr_t)(GetLevelRecord(param_2,param_1,false));
  local_164.Getter.Callee = (void *)0x0;
  local_164.Getter.CallbackFunction = (_func___cdecl_LevelRecord_void_ptr *)0x0;
  LevelRecord__LevelRecord(&local_164.Value);
  local_74._pad_0x4_1 = 0;
  local_74._pad_0x8_2 = 0;
  local_74._pad_0xc_3 = 0;
  local_74._pad_0x0_0 = (int)&vftable_64;
  local_74.ForLevel = (Level *)0x0;
  local_74.TimeElapsed_s.Data = 0.0;
  local_74.TimeElapsed_s.IsValidData = false;
  local_74.DeltaVSpent_km__s.Data = 0.0;
  local_74.DeltaVSpent_km__s.IsValidData = false;
  local_74.CapitalShipsAlive_Percent.Data = 0.0;
  local_74.CapitalShipsAlive_Percent.IsValidData = false;
  local_74.CapitalShipsUnscathed_Percent.Data = 0.0;
  local_74.CapitalShipsUnscathed_Percent.IsValidData = false;
  local_74.EnemyModulesLeft_Percent.Data = 0.0;
  local_74.EnemyModulesLeft_Percent.IsValidData = false;
  local_74.IsADeveloperRecord = false;
  local_ec.Getter.Callee = (void *)0x0;
  local_ec.Getter.CallbackFunction = (_func___cdecl_LevelRecord_void_ptr *)0x0;
  LevelRecord__LevelRecord(&local_ec.Value);
  TVar2 = GetRatingForLevel(&local_ec,&local_164,&local_1dc);
  local_ec.Value._pad_0x0_0 = (int)&vftable_5;
  if ((void *)local_ec.Value._pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)local_ec.Value._pad_0x4_1);
    local_ec.Value._pad_0x4_1 = 0;
  }
  if ((void *)local_74._pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)local_74._pad_0x4_1);
  }
  local_164.Value._pad_0x0_0 = (int)&vftable_5;
  if ((void *)local_164.Value._pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)local_164.Value._pad_0x4_1);
    local_164.Value._pad_0x4_1 = 0;
  }
  if ((void *)local_1dc.Value._pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)local_1dc.Value._pad_0x4_1);
  }
  return TVar2;
}

//==== 00702c80 GetRatingIcon ====


/* public: static void (__cdecl*__cdecl LevelRecord__GetRatingIcon(enum LevelRating__Type))(void) */

_func_void * __cdecl LevelRecord__GetRatingIcon(int)

{
  code *pcVar1;
  
  if (param_1 == 3) {
    return Icons__GoldAward;
  }
  if (param_1 == 2) {
    return Icons__SilverAward;
  }
  pcVar1 = (long long int (*)())((_func_void *)0x0);
  if (param_1 == 1) {
    pcVar1 = (long long int (*)())(Icons__BronzeAward);
  }
  return (_func_void *)(pcVar1);
}





//==== 00702cb0 GetReflectionDependencies_00702cb0 ====

/* public: virtual class util__Darray_L_classutil__Reflectable_P_G_ __thiscall
   Campaign__GetReflectionDependencies(void)const  */

Darray_L_util__Reflectable_P_G_ * __thiscall Campaign__GetReflectionDependencies(Campaign *this)

{
  int iVar1;
  int iVar2;
  Darray_L_class_WeaponModule_P_G_ *pDVar3;
  Darray_L_util__Reflectable_P_G_ *in_stack_00000004;
  undefined **local_14;
  void *local_10;
  
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  iVar1 = (**(code **)(this->ModPriority + 0xc))();
  iVar2 = (**(code **)(uintptr_t)(this[1]._pad_0xc_3 + 0xc))();
  util__Darray_L_util__Reflectable_P_G___Darray_L_util__Reflectable_P_G_(in_stack_00000004,iVar1 + iVar2);
  pDVar3 = (Darray_L_class_WeaponModule_P_G_ *)
           util__MapCast_L_util__Reflectable_P_CCelestialBody_P_G_((Darray_L_CelestialBody_P_G_ *)&local_14);
  util__Darray_L_WeaponModule_P_G___op_iadd((Darray_L_WeaponModule_P_G_ *)in_stack_00000004,pDVar3);
  local_14 = (undefined **)(&vftable_6);
  if (local_10 != (void *)0x0) {
    port_op_delete(local_10);
  }
  pDVar3 = (Darray_L_class_WeaponModule_P_G_ *)
           util__MapCast_L_util__Reflectable_P_CCelestialBody_P_G_((Darray_L_CelestialBody_P_G_ *)&local_14);
  util__Darray_L_WeaponModule_P_G___op_iadd((Darray_L_WeaponModule_P_G_ *)in_stack_00000004,pDVar3);
  local_14 = (undefined **)(&vftable_6);
  if (local_10 != (void *)0x0) {
    port_op_delete(local_10);
  }
  util__Darray_L_WeaponModule_P_G___RemoveDuplicates((Darray_L_WeaponModule_P_G_ *)in_stack_00000004);
  return in_stack_00000004;
}

//==== 00702d60 GetReflectionDependencies_00702d60 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual class util__Darray_L_classutil__Reflectable_P_G_ __thiscall
   Level__GetReflectionDependencies(void)const  */

Darray_L_WeaponModule_P_G_ * __thiscall Level__GetReflectionDependencies(Level *this)

{
  undefined8 stack0xfffffffc;
  double *pdVar1;
  Darray_L_LevelSpeakerMessage_G_ *pDVar2;
  Darray_L_LevelTutorialMessage_G_ *pDVar3;
  Maybe_L_CutsceneMessage_G_ *pMVar4;
  Speaker **ppSVar5;
  bool *pbVar6;
  undefined4 uVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  Level *pLVar16;
  Darray_L_util__Reflectable_P_G_ *in_stack_00000004;
  int local_4c;
  undefined **local_48;
  void *pvStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  Darray_L_util__Reflectable_P_G_ *local_38;
  Level *local_34;
  int *local_30;
  undefined **local_2c;
  int *piStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined **local_1c;
  int *piStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar13 = &this[1].Description.Length;
  local_38 = in_stack_00000004;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(uint32_t *)&local_34 = (uint32_t)(uintptr_t)(this);
  local_30 = piVar13;
  iVar10 = (**(code **)(uintptr_t)(*piVar13 + 0xc))();
  util__Darray_L_util__Reflectable_P_G___Darray_L_util__Reflectable_P_G_(in_stack_00000004,iVar10);
  pdVar1 = &this[1].JulianYear;
  local_48 = (undefined **)0x0;
  pvStack_44 = (void *)0x0;
  iStack_40 = 0;
  uStack_3c = 0;
  iVar10 = (**(code **)(*(int *)&this[1].JulianYear + 0xc))();
  util__Darray_L_util__Reflectable_P_G___Darray_L_util__Reflectable_P_G_
            ((Darray_L_util__Reflectable_P_G_ *)&local_48,iVar10);
  *(uint32_t *)&local_c = 0;
  iVar10 = (**(code **)(*(int *)pdVar1 + 0xc))();
  if (local_c < iVar10) {
    do {
      puVar11 = (undefined4 *)(*(code *)**(undefined4 **)pdVar1)(&local_c);
      iVar10 = iStack_40;
      uVar7 = *puVar11;
      *(uint32_t *)&local_4c = iStack_40 + 1;
      util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)&local_48,&local_4c);
      bVar9 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                        ((Darray_L_GraphicsResource__Type_G_ *)&local_48,iVar10);
      if (bVar9) {
        *(undefined4 *)((int)pvStack_44 + iStack_40 * 4 + -4) = uVar7;
      }
      *(uint32_t *)&local_c = local_c + 1;
      iVar10 = (**(code **)(*(int *)pdVar1 + 0xc))();
      piVar13 = local_30;
      this = local_34;
    } while (local_c < iVar10);
  }
  util__Darray_L_WeaponModule_P_G___op_iadd
          ((Darray_L_WeaponModule_P_G_ *)local_38,(Darray_L_class_WeaponModule_P_G_ *)&local_48);
  local_48 = (undefined **)(&vftable_6);
  if (pvStack_44 != (void *)0x0) {
    port_op_delete(pvStack_44);
  }
  iVar10 = this[1]._pad_0x8_2;
  piVar12 = *(int **)(local_38 + 4);
  iVar14 = *(int *)(local_38 + 8);
  piVar15 = piVar12 + iVar14;
  for (; piVar12 != piVar15; piVar12 = piVar12 + 1) {
    if (*piVar12 == iVar10) goto LAB_00702e8c;
  }
  local_30 = (int *)(iVar14 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize(local_38,(int *)&local_30);
  bVar9 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_38,iVar14);
  if (bVar9) {
    *(int *)(*(int *)(local_38 + 4) + -4 + *(int *)(local_38 + 8) * 4) = iVar10;
  }
LAB_00702e8c:
  piVar12 = *(int **)(local_38 + 4);
  iVar10 = *(int *)(local_38 + 8);
  piVar15 = piVar12 + iVar10;
  iVar14 = *(int *)((char *)&(local_34[1]) + 0xc);
  for (; piVar12 != piVar15; piVar12 = piVar12 + 1) {
    if (*piVar12 == iVar14) goto LAB_00702ed8;
  }
  local_30 = (int *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize(local_38,(int *)&local_30);
  bVar9 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_38,iVar10);
  if (bVar9) {
    *(int *)(*(int *)(local_38 + 4) + -4 + *(int *)(local_38 + 8) * 4) = iVar14;
  }
LAB_00702ed8:
  FUN_006fd220(piVar13,local_38);
  pLVar16 = local_34;
  pDVar2 = &(local_34->Messages).EnterCombat;
  *(uint32_t *)&local_c = 0;
  *(uint32_t *)&local_1c = (uint32_t)(uintptr_t)(&vftable_2);
  piStack_18 = (int *)0x0;
  iStack_14 = 0;
  uStack_10 = 0;
  iVar10 = (**(code **)((local_34->Messages).EnterCombat._pad_0x0_0 + 0xc))();
  if (local_c < iVar10) {
    do {
      piVar13 = (int *)(**(code **)pDVar2->_pad_0x0_0)(&local_c);
      iVar10 = iStack_14;
      if (piStack_18 != piStack_18 + iStack_14) {
        piVar15 = piStack_18;
        do {
          local_30 = piVar13;
          if (*piVar15 == *piVar13) goto LAB_00702f7c;
          piVar15 = piVar15 + 1;
        } while (piVar15 != piStack_18 + iStack_14);
      }
      local_30 = (int *)(iStack_14 + 1);
      util__Darray_L_util__Reflectable_P_G___SetSize
                ((Darray_L_util__Reflectable_P_G_ *)&local_1c,(int *)&local_30);
      bVar9 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                        ((Darray_L_GraphicsResource__Type_G_ *)&local_1c,iVar10);
      if (bVar9) {
        piStack_18[iStack_14 + -1] = *piVar13;
      }
LAB_00702f7c:
      *(uint32_t *)&local_c = local_c + 1;
      iVar10 = (**(code **)(pDVar2->_pad_0x0_0 + 0xc))();
      pLVar16 = local_34;
    } while (local_c < iVar10);
  }
  pDVar3 = &(pLVar16->Messages).EnterCombatTutorial;
  *(uint32_t *)&local_c = 0;
  iVar10 = (**(code **)((pLVar16->Messages).EnterCombatTutorial._pad_0x0_0 + 0xc))();
  if (local_c < iVar10) {
    do {
      piVar13 = (int *)(**(code **)pDVar3->_pad_0x0_0)(&local_c);
      iVar10 = iStack_14;
      if (piStack_18 != piStack_18 + iStack_14) {
        piVar15 = piStack_18;
        do {
          local_30 = piVar13;
          if (*piVar15 == *piVar13) goto LAB_00703009;
          piVar15 = piVar15 + 1;
        } while (piVar15 != piStack_18 + iStack_14);
      }
      local_30 = (int *)(iStack_14 + 1);
      util__Darray_L_util__Reflectable_P_G___SetSize
                ((Darray_L_util__Reflectable_P_G_ *)&local_1c,(int *)&local_30);
      bVar9 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                        ((Darray_L_GraphicsResource__Type_G_ *)&local_1c,iVar10);
      if (bVar9) {
        piStack_18[iStack_14 + -1] = *piVar13;
      }
LAB_00703009:
      *(uint32_t *)&local_c = local_c + 1;
      iVar10 = (**(code **)(pDVar3->_pad_0x0_0 + 0xc))();
      pLVar16 = local_34;
    } while (local_c < iVar10);
  }
  pDVar3 = &(pLVar16->Messages).GotIntoRangeTutorial;
  *(uint32_t *)&local_c = 0;
  iVar10 = (**(code **)((pLVar16->Messages).GotIntoRangeTutorial._pad_0x0_0 + 0xc))();
  if (local_c < iVar10) {
    do {
      piVar13 = (int *)(**(code **)pDVar3->_pad_0x0_0)(&local_c);
      iVar10 = iStack_14;
      if (piStack_18 != piStack_18 + iStack_14) {
        piVar15 = piStack_18;
        do {
          local_30 = piVar13;
          if (*piVar15 == *piVar13) goto LAB_0070308f;
          piVar15 = piVar15 + 1;
        } while (piVar15 != piStack_18 + iStack_14);
      }
      local_30 = (int *)(iStack_14 + 1);
      util__Darray_L_util__Reflectable_P_G___SetSize
                ((Darray_L_util__Reflectable_P_G_ *)&local_1c,(int *)&local_30);
      bVar9 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                        ((Darray_L_GraphicsResource__Type_G_ *)&local_1c,iVar10);
      if (bVar9) {
        piStack_18[iStack_14 + -1] = *piVar13;
      }
LAB_0070308f:
      *(uint32_t *)&local_c = local_c + 1;
      iVar10 = (**(code **)(pDVar3->_pad_0x0_0 + 0xc))();
      pLVar16 = local_34;
    } while (local_c < iVar10);
  }
  pDVar3 = &(pLVar16->Messages).EnemiesDamagedTutorial;
  *(uint32_t *)&local_c = 0;
  iVar10 = (**(code **)((pLVar16->Messages).EnemiesDamagedTutorial._pad_0x0_0 + 0xc))();
  if (local_c < iVar10) {
    do {
      piVar13 = (int *)(**(code **)pDVar3->_pad_0x0_0)(&local_c);
      iVar10 = iStack_14;
      if (piStack_18 != piStack_18 + iStack_14) {
        piVar15 = piStack_18;
        do {
          local_30 = piVar13;
          if (*piVar15 == *piVar13) goto LAB_00703119;
          piVar15 = piVar15 + 1;
        } while (piVar15 != piStack_18 + iStack_14);
      }
      local_30 = (int *)(iStack_14 + 1);
      util__Darray_L_util__Reflectable_P_G___SetSize
                ((Darray_L_util__Reflectable_P_G_ *)&local_1c,(int *)&local_30);
      bVar9 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                        ((Darray_L_GraphicsResource__Type_G_ *)&local_1c,iVar10);
      if (bVar9) {
        piStack_18[iStack_14 + -1] = *piVar13;
      }
LAB_00703119:
      *(uint32_t *)&local_c = local_c + 1;
      iVar10 = (**(code **)(pDVar3->_pad_0x0_0 + 0xc))();
      pLVar16 = local_34;
    } while (local_c < iVar10);
  }
  pDVar3 = &(pLVar16->Messages).AlliesDamagedTutorial;
  *(uint32_t *)&local_c = 0;
  iVar10 = (**(code **)((pLVar16->Messages).AlliesDamagedTutorial._pad_0x0_0 + 0xc))();
  if (local_c < iVar10) {
    do {
      piVar13 = (int *)(**(code **)pDVar3->_pad_0x0_0)(&local_c);
      iVar10 = iStack_14;
      if (piStack_18 != piStack_18 + iStack_14) {
        piVar15 = piStack_18;
        do {
          local_30 = piVar13;
          if (*piVar15 == *piVar13) goto LAB_0070319f;
          piVar15 = piVar15 + 1;
        } while (piVar15 != piStack_18 + iStack_14);
      }
      local_30 = (int *)(iStack_14 + 1);
      util__Darray_L_util__Reflectable_P_G___SetSize
                ((Darray_L_util__Reflectable_P_G_ *)&local_1c,(int *)&local_30);
      bVar9 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                        ((Darray_L_GraphicsResource__Type_G_ *)&local_1c,iVar10);
      if (bVar9) {
        piStack_18[iStack_14 + -1] = *piVar13;
      }
LAB_0070319f:
      *(uint32_t *)&local_c = local_c + 1;
      iVar10 = (**(code **)(pDVar3->_pad_0x0_0 + 0xc))();
      pLVar16 = local_34;
    } while (local_c < iVar10);
  }
  pDVar3 = &(pLVar16->Messages).EnemiesLostModuleTutorial;
  *(uint32_t *)&local_c = 0;
  iVar10 = (**(code **)((pLVar16->Messages).EnemiesLostModuleTutorial._pad_0x0_0 + 0xc))();
  if (local_c < iVar10) {
    do {
      piVar13 = (int *)(**(code **)pDVar3->_pad_0x0_0)(&local_c);
      iVar10 = iStack_14;
      if (piStack_18 != piStack_18 + iStack_14) {
        piVar15 = piStack_18;
        do {
          local_30 = piVar13;
          if (*piVar15 == *piVar13) goto LAB_00703229;
          piVar15 = piVar15 + 1;
        } while (piVar15 != piStack_18 + iStack_14);
      }
      local_30 = (int *)(iStack_14 + 1);
      util__Darray_L_util__Reflectable_P_G___SetSize
                ((Darray_L_util__Reflectable_P_G_ *)&local_1c,(int *)&local_30);
      bVar9 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                        ((Darray_L_GraphicsResource__Type_G_ *)&local_1c,iVar10);
      if (bVar9) {
        piStack_18[iStack_14 + -1] = *piVar13;
      }
LAB_00703229:
      *(uint32_t *)&local_c = local_c + 1;
      iVar10 = (**(code **)(pDVar3->_pad_0x0_0 + 0xc))();
      pLVar16 = local_34;
    } while (local_c < iVar10);
  }
  pDVar3 = &(pLVar16->Messages).AlliesLostModuleTutorial;
  *(uint32_t *)&local_c = 0;
  iVar10 = (**(code **)((pLVar16->Messages).AlliesLostModuleTutorial._pad_0x0_0 + 0xc))();
  if (local_c < iVar10) {
    do {
      piVar13 = (int *)(**(code **)pDVar3->_pad_0x0_0)(&local_c);
      iVar10 = iStack_14;
      if (piStack_18 != piStack_18 + iStack_14) {
        piVar15 = piStack_18;
        do {
          local_30 = piVar13;
          if (*piVar15 == *piVar13) goto LAB_007032af;
          piVar15 = piVar15 + 1;
        } while (piVar15 != piStack_18 + iStack_14);
      }
      local_30 = (int *)(iStack_14 + 1);
      util__Darray_L_util__Reflectable_P_G___SetSize
                ((Darray_L_util__Reflectable_P_G_ *)&local_1c,(int *)&local_30);
      bVar9 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                        ((Darray_L_GraphicsResource__Type_G_ *)&local_1c,iVar10);
      if (bVar9) {
        piStack_18[iStack_14 + -1] = *piVar13;
      }
LAB_007032af:
      *(uint32_t *)&local_c = local_c + 1;
      iVar10 = (**(code **)(pDVar3->_pad_0x0_0 + 0xc))();
      pLVar16 = local_34;
    } while (local_c < iVar10);
  }
  pDVar2 = &(pLVar16->Messages).MissionFailure;
  *(uint32_t *)&local_c = 0;
  iVar10 = (**(code **)((pLVar16->Messages).MissionFailure._pad_0x0_0 + 0xc))();
  if (local_c < iVar10) {
    do {
      piVar13 = (int *)(**(code **)pDVar2->_pad_0x0_0)(&local_c);
      iVar10 = iStack_14;
      if (piStack_18 != piStack_18 + iStack_14) {
        piVar15 = piStack_18;
        do {
          local_30 = piVar13;
          if (*piVar15 == *piVar13) goto LAB_00703339;
          piVar15 = piVar15 + 1;
        } while (piVar15 != piStack_18 + iStack_14);
      }
      local_30 = (int *)(iStack_14 + 1);
      util__Darray_L_util__Reflectable_P_G___SetSize
                ((Darray_L_util__Reflectable_P_G_ *)&local_1c,(int *)&local_30);
      bVar9 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                        ((Darray_L_GraphicsResource__Type_G_ *)&local_1c,iVar10);
      if (bVar9) {
        piStack_18[iStack_14 + -1] = *piVar13;
      }
LAB_00703339:
      *(uint32_t *)&local_c = local_c + 1;
      iVar10 = (**(code **)(pDVar2->_pad_0x0_0 + 0xc))();
      pLVar16 = local_34;
    } while (local_c < iVar10);
  }
  pDVar2 = &(pLVar16->Messages).MissionSuccess;
  *(uint32_t *)&local_c = 0;
  iVar10 = (**(code **)((pLVar16->Messages).MissionSuccess._pad_0x0_0 + 0xc))();
  if (local_c < iVar10) {
    do {
      piVar13 = (int *)(**(code **)pDVar2->_pad_0x0_0)(&local_c);
      iVar10 = iStack_14;
      if (piStack_18 != piStack_18 + iStack_14) {
        piVar15 = piStack_18;
        do {
          local_30 = piVar13;
          if (*piVar15 == *piVar13) goto LAB_007033bf;
          piVar15 = piVar15 + 1;
        } while (piVar15 != piStack_18 + iStack_14);
      }
      local_30 = (int *)(iStack_14 + 1);
      util__Darray_L_util__Reflectable_P_G___SetSize
                ((Darray_L_util__Reflectable_P_G_ *)&local_1c,(int *)&local_30);
      bVar9 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                        ((Darray_L_GraphicsResource__Type_G_ *)&local_1c,iVar10);
      if (bVar9) {
        piStack_18[iStack_14 + -1] = *piVar13;
      }
LAB_007033bf:
      *(uint32_t *)&local_c = local_c + 1;
      iVar10 = (**(code **)(pDVar2->_pad_0x0_0 + 0xc))();
      pLVar16 = local_34;
    } while (local_c < iVar10);
  }
  pMVar4 = &(pLVar16->Messages).StartingCutscene;
  *(uint32_t *)&local_c = 0;
  iVar10 = (**(code **)((pLVar16->Messages).StartingCutscene.Data._pad_0x0_0 + 0xc))();
  if (local_c < iVar10) {
    do {
      piVar13 = (int *)(**(code **)(pMVar4->Data)._pad_0x0_0)(&local_c);
      iVar10 = iStack_14;
      if (piStack_18 != piStack_18 + iStack_14) {
        piVar15 = piStack_18;
        do {
          local_30 = piVar13;
          if (*piVar15 == *piVar13) goto LAB_00703449;
          piVar15 = piVar15 + 1;
        } while (piVar15 != piStack_18 + iStack_14);
      }
      local_30 = (int *)(iStack_14 + 1);
      util__Darray_L_util__Reflectable_P_G___SetSize
                ((Darray_L_util__Reflectable_P_G_ *)&local_1c,(int *)&local_30);
      bVar9 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                        ((Darray_L_GraphicsResource__Type_G_ *)&local_1c,iVar10);
      if (bVar9) {
        piStack_18[iStack_14 + -1] = *piVar13;
      }
LAB_00703449:
      *(uint32_t *)&local_c = local_c + 1;
      iVar10 = (**(code **)((pMVar4->Data)._pad_0x0_0 + 0xc))();
      pLVar16 = local_34;
    } while (local_c < iVar10);
  }
  ppSVar5 = &(pLVar16->Messages).StartingCutscene.Data.Talker;
  *(uint32_t *)&local_c = 0;
  iVar10 = (*(code *)((pLVar16->Messages).StartingCutscene.Data.Talker)->_pad_0xc_3)();
  if (local_c < iVar10) {
    do {
      piVar13 = (int *)(*(code *)(*ppSVar5)->_pad_0x0_0)(&local_c);
      iVar10 = iStack_14;
      if (piStack_18 != piStack_18 + iStack_14) {
        piVar15 = piStack_18;
        do {
          local_30 = piVar13;
          if (*piVar15 == *piVar13) goto LAB_007034cf;
          piVar15 = piVar15 + 1;
        } while (piVar15 != piStack_18 + iStack_14);
      }
      local_30 = (int *)(iStack_14 + 1);
      util__Darray_L_util__Reflectable_P_G___SetSize
                ((Darray_L_util__Reflectable_P_G_ *)&local_1c,(int *)&local_30);
      bVar9 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                        ((Darray_L_GraphicsResource__Type_G_ *)&local_1c,iVar10);
      if (bVar9) {
        piStack_18[iStack_14 + -1] = *piVar13;
      }
LAB_007034cf:
      *(uint32_t *)&local_c = local_c + 1;
      iVar10 = (*(code *)(*ppSVar5)->_pad_0xc_3)();
      pLVar16 = local_34;
    } while (local_c < iVar10);
  }
  pbVar6 = &(pLVar16->Messages).StartingCutscene.IsValidData;
  *(uint32_t *)&local_c = 0;
  iVar10 = (int)(uintptr_t) (**(code ***)(void *)((char *)&(pLVar16->Messages).StartingCutscene.IsValidData + 0xc))();
  if (local_c < iVar10) {
    do {
      piVar13 = (int *)(*(code *)**(undefined4 **)pbVar6)(&local_c);
      iVar10 = iStack_14;
      if (piStack_18 != piStack_18 + iStack_14) {
        piVar15 = piStack_18;
        do {
          local_30 = piVar13;
          if (*piVar15 == *piVar13) goto LAB_00703559;
          piVar15 = piVar15 + 1;
        } while (piVar15 != piStack_18 + iStack_14);
      }
      local_30 = (int *)(iStack_14 + 1);
      util__Darray_L_util__Reflectable_P_G___SetSize
                ((Darray_L_util__Reflectable_P_G_ *)&local_1c,(int *)&local_30);
      bVar9 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                        ((Darray_L_GraphicsResource__Type_G_ *)&local_1c,iVar10);
      if (bVar9) {
        piStack_18[iStack_14 + -1] = *piVar13;
      }
LAB_00703559:
      *(uint32_t *)&local_c = local_c + 1;
      iVar10 = (**(code **)(*(int *)pbVar6 + 0xc))();
      pLVar16 = local_34;
    } while (local_c < iVar10);
  }
  iVar10 = iStack_14;
  if ((char)(pLVar16->VictoryCondition).Data._pad_0x4_1 != '\0') {
    if (piStack_18 != piStack_18 + iStack_14) {
      piVar13 = piStack_18;
      do {
        if (*piVar13 == *(int *)&(pLVar16->Badges).PrecisionCombat) goto LAB_007035c1;
        piVar13 = piVar13 + 1;
      } while (piVar13 != piStack_18 + iStack_14);
    }
    local_30 = (int *)(iStack_14 + 1);
    util__Darray_L_util__Reflectable_P_G___SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&local_1c,(int *)&local_30);
    bVar9 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)&local_1c,iVar10);
    if (bVar9) {
      piStack_18[iStack_14 + -1] = (int)((pLVar16->Badges).PrecisionCombat);
    }
  }
LAB_007035c1:
  local_48 = (undefined **)0x0;
  pvStack_44 = (void *)0x0;
  iStack_40 = 0;
  uStack_3c = 0;
  iVar10 = (*(code *)local_1c[3])();
  util__Darray_L_util__Reflectable_P_G___Darray_L_util__Reflectable_P_G_
            ((Darray_L_util__Reflectable_P_G_ *)&local_48,iVar10);
  *(uint32_t *)&local_c = 0;
  iVar10 = (*(code *)local_1c[3])();
  if (local_c < iVar10) {
    do {
      puVar11 = (undefined4 *)(*(code *)*local_1c)(&local_c);
      iVar10 = iStack_40;
      uVar7 = *puVar11;
      local_30 = (int *)(iStack_40 + 1);
      util__Darray_L_util__Reflectable_P_G___SetSize
                ((Darray_L_util__Reflectable_P_G_ *)&local_48,(int *)&local_30);
      bVar9 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                        ((Darray_L_GraphicsResource__Type_G_ *)&local_48,iVar10);
      if (bVar9) {
        *(undefined4 *)((int)pvStack_44 + iStack_40 * 4 + -4) = uVar7;
      }
      *(uint32_t *)&local_c = local_c + 1;
      iVar10 = (*(code *)local_1c[3])();
    } while (local_c < iVar10);
  }
  util__Darray_L_WeaponModule_P_G___op_iadd
          ((Darray_L_WeaponModule_P_G_ *)local_38,(Darray_L_class_WeaponModule_P_G_ *)&local_48);
  local_48 = (undefined **)(&vftable_6);
  if (pvStack_44 != (void *)0x0) {
    port_op_delete(pvStack_44);
  }
  local_30 = (int *)0x1;
  local_2c = (undefined **)(&vftable_2);
  piStack_28 = (int *)0x0;
  iStack_24 = 0;
  uStack_20 = 0;
  util__Darray_L_util__Reflectable_P_G___SetSize
            ((Darray_L_util__Reflectable_P_G_ *)&local_2c,(int *)&local_30);
  bVar9 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)&local_2c,0);
  iVar10 = iStack_24;
  if (bVar9) {
    piStack_28[iStack_24 + -1] = (int)pLVar16->PlayerAlliance;
  }
  if (piStack_28 != piStack_28 + iStack_24) {
    piVar13 = piStack_28;
    do {
      if (*piVar13 == (pLVar16->AdditionalAlliances)._padfb0) goto LAB_007036ff;
      piVar13 = piVar13 + 1;
    } while (piVar13 != piStack_28 + iStack_24);
  }
  local_30 = (int *)(iStack_24 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize
            ((Darray_L_util__Reflectable_P_G_ *)&local_2c,(int *)&local_30);
  bVar9 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)&local_2c,iVar10);
  if (bVar9) {
    piStack_28[iStack_24 + -1] = (pLVar16->AdditionalAlliances)._padfb0;
  }
LAB_007036ff:
  piVar13 = &(pLVar16->AdditionalAlliances).Size;
  if (iStack_24 == 0) {
    util__Darray_L_Module_P_G___op_assign((Darray_L_Module_P_G_ *)&local_2c,(Darray_L_class_Module_P_G_ *)piVar13);
  }
  else {
    iVar14 = (**(code **)(uintptr_t)(*piVar13 + 0xc))();
    iVar10 = iStack_24;
    if (iVar14 != 0) {
      iVar14 = (**(code **)(uintptr_t)(*piVar13 + 0xc))();
      local_30 = (int *)(iVar14 + iStack_24);
      util__Darray_L_util__Reflectable_P_G___SetSize
                ((Darray_L_util__Reflectable_P_G_ *)&local_2c,(int *)&local_30);
      util__Darray_L_GraphicsResource__Type_G___CheckSize
                ((Darray_L_GraphicsResource__Type_G_ *)&local_2c,iVar10);
      piVar13 = (int *)(pLVar16->AdditionalAlliances).Capacity;
      piVar15 = piStack_28 + iVar10;
      if (piVar15 != piStack_28 + iStack_24) {
        do {
          iVar10 = *piVar13;
          piVar13 = piVar13 + 1;
          *piVar15 = iVar10;
          piVar15 = piVar15 + 1;
        } while (piVar15 != piStack_28 + iStack_24);
      }
    }
  }
  if (1 < iStack_24) {
    iVar10 = 0;
    *(uint32_t *)&local_c = 0;
    piVar13 = piStack_28;
    piVar15 = piStack_28;
    if (piStack_28 != piStack_28 + iStack_24) {
      do {
        bVar9 = false;
        piVar12 = piStack_28;
        while ((bVar8 = bVar9, piVar12 != piVar13 && (bVar8 = true, !bVar9))) {
          iVar14 = *piVar12;
          piVar12 = piVar12 + 1;
          bVar9 = *piVar13 == iVar14;
        }
        *piVar15 = *piVar13;
        if (!bVar8) {
          piVar15 = piVar15 + 1;
          iVar10 = iVar10 + 1;
        }
        piVar13 = piVar13 + 1;
        *(uint32_t *)&local_c = iVar10;
      } while (piVar13 != piStack_28 + iStack_24);
    }
    util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)&local_2c,&local_c);
  }
  local_48 = (undefined **)0x0;
  pvStack_44 = (void *)0x0;
  iStack_40 = 0;
  uStack_3c = 0;
  iVar10 = (*(code *)local_2c[3])();
  util__Darray_L_util__Reflectable_P_G___Darray_L_util__Reflectable_P_G_
            ((Darray_L_util__Reflectable_P_G_ *)&local_48,iVar10);
  *(uint32_t *)&local_c = 0;
  iVar10 = (*(code *)local_2c[3])();
  if (local_c < iVar10) {
    do {
      puVar11 = (undefined4 *)(*(code *)*local_2c)(&local_c);
      iVar10 = iStack_40;
      uVar7 = *puVar11;
      local_30 = (int *)(iStack_40 + 1);
      util__Darray_L_util__Reflectable_P_G___SetSize
                ((Darray_L_util__Reflectable_P_G_ *)&local_48,(int *)&local_30);
      bVar9 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                        ((Darray_L_GraphicsResource__Type_G_ *)&local_48,iVar10);
      if (bVar9) {
        *(undefined4 *)((int)pvStack_44 + iStack_40 * 4 + -4) = uVar7;
      }
      *(uint32_t *)&local_c = local_c + 1;
      iVar10 = (*(code *)local_2c[3])();
    } while (local_c < iVar10);
  }
  util__Darray_L_WeaponModule_P_G___op_iadd
          ((Darray_L_WeaponModule_P_G_ *)local_38,(Darray_L_class_WeaponModule_P_G_ *)&local_48);
  local_48 = (undefined **)(&vftable_6);
  if (pvStack_44 != (void *)0x0) {
    port_op_delete(pvStack_44);
  }
  local_2c = (undefined **)(&vftable_2);
  if (piStack_28 != (int *)0x0) {
    port_op_delete(piStack_28);
  }
  piStack_28 = (int *)0x0;
  local_2c = (undefined **)(&vftable);
  *(uint32_t *)&local_1c = (uint32_t)(uintptr_t)(&vftable_2);
  if (piStack_18 != (int *)0x0) {
    port_op_delete(piStack_18);
  }
  return (Darray_L_WeaponModule_P_G_ *)local_38;
}

//==== 007038d0 GetReflectionInfo_007038d0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   Campaign__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall Campaign__GetReflectionInfo(Campaign *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_a43b675d__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_a43b675d__thread_safe_static_guard_0__);
    if ( cde_l2_a43b675d__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_850eb621_ReflectionInfo) = &vftable_412;
      _Init_thread_footer(& cde_l2_a43b675d__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_850eb621_ReflectionInfo;
}





//==== 007038e0 GetReflectionInfo_007038e0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   CelestialLocation__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall CelestialLocation__GetReflectionInfo(CelestialLocation *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_f59f8f61__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_f59f8f61__thread_safe_static_guard_0__);
    if ( cde_l2_f59f8f61__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_52c2eca7_ReflectionInfo) = &vftable_410;
      _Init_thread_footer(& cde_l2_f59f8f61__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_52c2eca7_ReflectionInfo;
}





//==== 007038f0 GetReflectionInfo_007038f0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   CustomObjective__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall CustomObjective__GetReflectionInfo(CustomObjective *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_f06cae4b__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_f06cae4b__thread_safe_static_guard_0__);
    if ( cde_l2_f06cae4b__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_99906997_ReflectionInfo) = &vftable_406;
      _Init_thread_footer(& cde_l2_f06cae4b__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_99906997_ReflectionInfo;
}





//==== 00703900 GetReflectionInfo_00703900 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   CutsceneMessage__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall CutsceneMessage__GetReflectionInfo(CutsceneMessage *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_49d4218d__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_49d4218d__thread_safe_static_guard_0__);
    if ( cde_l2_49d4218d__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_a0872554_ReflectionInfo) = &vftable_407;
      _Init_thread_footer(& cde_l2_49d4218d__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_a0872554_ReflectionInfo;
}





//==== 00703910 GetReflectionInfo_00703910 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   GlobalSaveValues__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall GlobalSaveValues__GetReflectionInfo(GlobalSaveValues *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_f67407ce__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_f67407ce__thread_safe_static_guard_0__);
    if ( cde_l2_f67407ce__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_60391d63_ReflectionInfo) = &vftable_413;
      _Init_thread_footer(& cde_l2_f67407ce__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_60391d63_ReflectionInfo;
}





//==== 00703920 GetReflectionInfo_00703920 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall Level__GetReflectionInfo(void)const
    */

ReflectionInfoBase * __thiscall Level__GetReflectionInfo(Level *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_f21f6eb8__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_f21f6eb8__thread_safe_static_guard_0__);
    if ( cde_l2_f21f6eb8__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_52eba083_ReflectionInfo) = &vftable_411;
      _Init_thread_footer(& cde_l2_f21f6eb8__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_52eba083_ReflectionInfo;
}





//==== 00703930 GetReflectionInfo_00703930 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   LevelBadges__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall LevelBadges__GetReflectionInfo(LevelBadges *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_eb0fbde4__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_eb0fbde4__thread_safe_static_guard_0__);
    if ( cde_l2_eb0fbde4__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_4fb72a60_ReflectionInfo) = &vftable_409;
      _Init_thread_footer(& cde_l2_eb0fbde4__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_4fb72a60_ReflectionInfo;
}





//==== 00703940 GetReflectionInfo_00703940 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   LevelMessages__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall LevelMessages__GetReflectionInfo(LevelMessages *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_d1144c01__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_d1144c01__thread_safe_static_guard_0__);
    if ( cde_l2_d1144c01__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_7a4e2a63_ReflectionInfo) = &vftable_408;
      _Init_thread_footer(& cde_l2_d1144c01__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_7a4e2a63_ReflectionInfo;
}





//==== 00703950 GetReflectionNames_00703950 ====


/* public: static class util__Darray_L_classutil__Str_L_char_G__G_ __cdecl
   StartingFleet__GetReflectionNames(void) */

Darray_L_class_util__Str_L_char_G___G_ * __cdecl StartingFleet__GetReflectionNames(void)

{
  undefined8 stack0x00000004;
  int iVar1;
  Darray_L_class_util__Str_L_char_G___G_ *this;
  bool bVar2;
  Darray_L_class_util__Str_L_char_G___G_ *in_stack_00000004;
  Str_L_char_G_ SStack_10;
  
  this = in_stack_00000004;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_class_util__Str_char_____Darray_class_util__Str_char(in_stack_00000004,5);
  util__Str_char___Str_char(&SStack_10,"StartingBody");
  iVar1 = *(int *)(in_stack_00000004 + 8);
  in_stack_00000004 = (Darray_L_class_util__Str_L_char_G___G_ *)(iVar1 + 1);
  util__Darray_class_util__Str_char_____SetSize(this,(int *)&stack0x00000004);
  bVar2 = util__Darray_class_util__Str_char_____CheckSize(this,iVar1);
  if (bVar2) {
    util__Str_char___operator__o8
              ((Str_L_char_G_ *)(*(int *)(this + 4) + (*(int *)(this + 8) * 3 + -3) * 4),&SStack_10);
  }
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  util__Str_char___Str_char(&SStack_10,"LPoint");
  iVar1 = *(int *)(this + 8);
  in_stack_00000004 = (Darray_L_class_util__Str_L_char_G___G_ *)(iVar1 + 1);
  util__Darray_class_util__Str_char_____SetSize(this,(int *)&stack0x00000004);
  bVar2 = util__Darray_class_util__Str_char_____CheckSize(this,iVar1);
  if (bVar2) {
    util__Str_char___operator__o8
              ((Str_L_char_G_ *)(*(int *)(this + 4) + (*(int *)(this + 8) * 3 + -3) * 4),&SStack_10);
  }
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  util__Str_char___Str_char(&SStack_10,"Alliance");
  iVar1 = *(int *)(this + 8);
  in_stack_00000004 = (Darray_L_class_util__Str_L_char_G___G_ *)(iVar1 + 1);
  util__Darray_class_util__Str_char_____SetSize(this,(int *)&stack0x00000004);
  bVar2 = util__Darray_class_util__Str_char_____CheckSize(this,iVar1);
  if (bVar2) {
    util__Str_char___operator__o8
              ((Str_L_char_G_ *)(*(int *)(this + 4) + (*(int *)(this + 8) * 3 + -3) * 4),&SStack_10);
  }
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  util__Str_char___Str_char(&SStack_10,"SoloShipType");
  iVar1 = *(int *)(this + 8);
  in_stack_00000004 = (Darray_L_class_util__Str_L_char_G___G_ *)(iVar1 + 1);
  util__Darray_class_util__Str_char_____SetSize(this,(int *)&stack0x00000004);
  bVar2 = util__Darray_class_util__Str_char_____CheckSize(this,iVar1);
  if (bVar2) {
    util__Str_char___operator__o8
              ((Str_L_char_G_ *)(*(int *)(this + 4) + (*(int *)(this + 8) * 3 + -3) * 4),&SStack_10);
  }
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  util__Str_char___Str_char(&SStack_10,"FleetType");
  iVar1 = *(int *)(this + 8);
  in_stack_00000004 = (Darray_L_class_util__Str_L_char_G___G_ *)(iVar1 + 1);
  util__Darray_class_util__Str_char_____SetSize(this,(int *)&stack0x00000004);
  bVar2 = util__Darray_class_util__Str_char_____CheckSize(this,iVar1);
  if (bVar2) {
    util__Str_char___operator__o8
              ((Str_L_char_G_ *)(*(int *)(this + 4) + (*(int *)(this + 8) * 3 + -3) * 4),&SStack_10);
  }
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return this;
}





//==== 00703b20 GetReflectionOffsets_00703b20 ====

/* public: static class util__Darray_L_unsignedint_G_ __cdecl StartingFleet__GetReflectionOffsets(void)
    */

Darray_L_unsigned_int_G_ * __cdecl
StartingFleet__GetReflectionOffsets(Darray_L_unsigned_int_G_ *__return_storage_ptr__)

{
  Darray_L_unsigned_int_G_ *this;
  bool bVar1;
  uint *puVar2;
  int iVar3;
  
  this = __return_storage_ptr__;
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (uint *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_6;
  __return_storage_ptr__->Data = (uint *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 5;
  puVar2 = (uint *)(uintptr_t)(port_op_new(0x14));
  if (puVar2 == (uint *)0x0) {
    puVar2 = (uint *)0x0;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
  }
  iVar3 = 0;
  this->Data = puVar2;
  if (0 < this->Capacity) {
    do {
      this->Data[iVar3] = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < this->Capacity);
  }
  iVar3 = this->Size;
  __return_storage_ptr__ = (Darray_L_unsigned_int_G_ *)(iVar3 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize
            ((Darray_L_util__Reflectable_P_G_ *)this,(int *)&__return_storage_ptr__);
  bVar1 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)this,iVar3);
  if (bVar1) {
    this->Data[this->Size + -1] = 0;
  }
  iVar3 = this->Size;
  __return_storage_ptr__ = (Darray_L_unsigned_int_G_ *)(iVar3 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize
            ((Darray_L_util__Reflectable_P_G_ *)this,(int *)&__return_storage_ptr__);
  bVar1 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)this,iVar3);
  if (bVar1) {
    this->Data[this->Size + -1] = 4;
  }
  iVar3 = this->Size;
  __return_storage_ptr__ = (Darray_L_unsigned_int_G_ *)(iVar3 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize
            ((Darray_L_util__Reflectable_P_G_ *)this,(int *)&__return_storage_ptr__);
  bVar1 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)this,iVar3);
  if (bVar1) {
    this->Data[this->Size + -1] = 8;
  }
  iVar3 = this->Size;
  __return_storage_ptr__ = (Darray_L_unsigned_int_G_ *)(iVar3 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize
            ((Darray_L_util__Reflectable_P_G_ *)this,(int *)&__return_storage_ptr__);
  bVar1 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)this,iVar3);
  if (bVar1) {
    this->Data[this->Size + -1] = 0xc;
  }
  iVar3 = this->Size;
  __return_storage_ptr__ = (Darray_L_unsigned_int_G_ *)(iVar3 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize
            ((Darray_L_util__Reflectable_P_G_ *)this,(int *)&__return_storage_ptr__);
  bVar1 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)this,iVar3);
  if (bVar1) {
    this->Data[this->Size + -1] = 0x10;
  }
  return this;
}

//==== 00703c70 GetReflectionTypes_00703c70 ====


/* public: static class util__Darray_L_classutil__Str_L_char_G__G_ __cdecl
   StartingFleet__GetReflectionTypes(void) */

Darray_L_class_util__Str_L_char_G___G_ * __cdecl StartingFleet__GetReflectionTypes(void)

{
  undefined8 stack0x00000004;
  int iVar1;
  Darray_L_class_util__Str_L_char_G___G_ *this;
  bool bVar2;
  Darray_L_class_util__Str_L_char_G___G_ *in_stack_00000004;
  Str_L_char_G_ SStack_10;
  
  this = in_stack_00000004;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_class_util__Str_char_____Darray_class_util__Str_char(in_stack_00000004,5);
  util__Str_char___Str_char(&SStack_10,"CelestialBody*");
  iVar1 = *(int *)(in_stack_00000004 + 8);
  in_stack_00000004 = (Darray_L_class_util__Str_L_char_G___G_ *)(iVar1 + 1);
  util__Darray_class_util__Str_char_____SetSize(this,(int *)&stack0x00000004);
  bVar2 = util__Darray_class_util__Str_char_____CheckSize(this,iVar1);
  if (bVar2) {
    util__Str_char___operator__o8
              ((Str_L_char_G_ *)(*(int *)(this + 4) + (*(int *)(this + 8) * 3 + -3) * 4),&SStack_10);
  }
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  util__Str_char___Str_char(&SStack_10,"int");
  iVar1 = *(int *)(this + 8);
  in_stack_00000004 = (Darray_L_class_util__Str_L_char_G___G_ *)(iVar1 + 1);
  util__Darray_class_util__Str_char_____SetSize(this,(int *)&stack0x00000004);
  bVar2 = util__Darray_class_util__Str_char_____CheckSize(this,iVar1);
  if (bVar2) {
    util__Str_char___operator__o8
              ((Str_L_char_G_ *)(*(int *)(this + 4) + (*(int *)(this + 8) * 3 + -3) * 4),&SStack_10);
  }
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  util__Str_char___Str_char(&SStack_10,"Faction*");
  iVar1 = *(int *)(this + 8);
  in_stack_00000004 = (Darray_L_class_util__Str_L_char_G___G_ *)(iVar1 + 1);
  util__Darray_class_util__Str_char_____SetSize(this,(int *)&stack0x00000004);
  bVar2 = util__Darray_class_util__Str_char_____CheckSize(this,iVar1);
  if (bVar2) {
    util__Str_char___operator__o8
              ((Str_L_char_G_ *)(*(int *)(this + 4) + (*(int *)(this + 8) * 3 + -3) * 4),&SStack_10);
  }
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  util__Str_char___Str_char(&SStack_10,"CraftBlueprint*");
  iVar1 = *(int *)(this + 8);
  in_stack_00000004 = (Darray_L_class_util__Str_L_char_G___G_ *)(iVar1 + 1);
  util__Darray_class_util__Str_char_____SetSize(this,(int *)&stack0x00000004);
  bVar2 = util__Darray_class_util__Str_char_____CheckSize(this,iVar1);
  if (bVar2) {
    util__Str_char___operator__o8
              ((Str_L_char_G_ *)(*(int *)(this + 4) + (*(int *)(this + 8) * 3 + -3) * 4),&SStack_10);
  }
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  util__Str_char___Str_char(&SStack_10,"StarterFleet*");
  iVar1 = *(int *)(this + 8);
  in_stack_00000004 = (Darray_L_class_util__Str_L_char_G___G_ *)(iVar1 + 1);
  util__Darray_class_util__Str_char_____SetSize(this,(int *)&stack0x00000004);
  bVar2 = util__Darray_class_util__Str_char_____CheckSize(this,iVar1);
  if (bVar2) {
    util__Str_char___operator__o8
              ((Str_L_char_G_ *)(*(int *)(this + 4) + (*(int *)(this + 8) * 3 + -3) * 4),&SStack_10);
  }
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return this;
}





//==== 00703e40 GetRelevantMetadata ====


/* public: class util__Darray_L_structLevelRecordMetadata_G_ 
   LevelRecord__GetRelevantMetadata(void)const  */

void * LevelRecord__GetRelevantMetadata(LevelRecord *this)

{
  undefined8 stack0xfffffffc;
  char cVar1;
  char cVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  LevelRecordMetadata *pLVar6;
  Darray_L_struct_LevelRecordMetadata_G_ *in_stack_00000004;
  LevelRecordMetadata *pLStack_1c;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar4 = (int *)GetMetadata();
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  iVar5 = (**(code **)(uintptr_t)(*piVar4 + 0xc))();
  util__Darray_struct_LevelRecordMetadata___Darray_struct_LevelRecordMetadata
            (in_stack_00000004,iVar5);
  iStack_c = 0;
  iVar5 = (**(code **)(uintptr_t)(*piVar4 + 0xc))();
  if (iStack_c < iVar5) {
    do {
      pLVar6 = (LevelRecordMetadata *)(**(code **)*piVar4)(&iStack_c);
      cVar1 = *(char *)((int)&(this->ForLevel->Messages).StartingTutorial.Size + 2);
      cVar2 = (char)(this->ForLevel->Messages).StartingTutorial.Capacity;
      cVar3 = cVar2;
      if ((*(char *)((int)&pLVar6[1].Name.Capacity + 3) == '\0') &&
         (cVar3 = cVar1, *(char *)((int)&pLVar6[1].Name.Capacity + 1) == '\0')) {
        if (*(char *)((int)&pLVar6[1].Name.Capacity + 2) != '\0') {
          if ((cVar1 == '\0') && (cVar2 == '\0')) {
            cVar3 = '\x01';
          }
          else {
            cVar3 = '\0';
          }
          goto LAB_00703ed2;
        }
LAB_00703ed6:
        util__Darray_struct_LevelRecordMetadata___Add(in_stack_00000004,pLVar6);
      }
      else {
LAB_00703ed2:
        if (cVar3 != '\0') goto LAB_00703ed6;
      }
      iStack_c = iStack_c + 1;
      iVar5 = (**(code **)(uintptr_t)(*piVar4 + 0xc))();
    } while (iStack_c < iVar5);
  }
  if (pLStack_1c != (LevelRecordMetadata *)0x0) {
    LevelRecordMetadata___vector_deleting_destructor(pLStack_1c,3);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return 0;
}





//==== 00703f20 GetStringPropertyMaxLength_00703f20 ====


/* public: virtual class util__Maybe_L_int_G_ __thiscall
   CutsceneMessage__GetStringPropertyMaxLength(struct util__ClassMember const &)const  */

Maybe_L_int_G_ __thiscall
CutsceneMessage__GetStringPropertyMaxLength(CutsceneMessage *this,ClassMember *param_1)

{
  bool bVar1;
  char *pcVar2;
  undefined1 *puVar3;
  Maybe_L_int_G_ MVar4;
  undefined4 *in_stack_00000008;
  
  if ((int)in_stack_00000008[1] < 1) {
    puVar3 = (undefined1 *)(&cde_l2_0b2b1c9f_NullString);
  }
  else {
    puVar3 = (undefined1 *)*in_stack_00000008;
  }
  pcVar2 = "Message";
  while( true ) {
    if ((pcVar2[(int)(puVar3 + -0x91f2e0)] == '\0') && (*pcVar2 == '\0')) break;
    if (pcVar2[(int)(puVar3 + -0x91f2e0)] != *pcVar2) {
      bVar1 = false;
LAB_00703f5b:
      pcVar2 = (char *)0x0;
      if (bVar1) {
        pcVar2 = (char *)0x3e8;
      }
      (param_1->Name).Data = pcVar2;
      (undefined1)((param_1->Name).Capacity = 1);
      (*(uint32_t*)((char*)&(MVar4)+4)) = 1000;
      MVar4.Data = (int)param_1;
      return MVar4;
    }
    pcVar2 = pcVar2 + 1;
  }
  bVar1 = true;
  goto LAB_00703f5b;
}





//==== 00703f80 GetStringPropertyMaxLength_00703f80 ====


/* public: virtual class util__Maybe_L_int_G_ __thiscall Level__GetStringPropertyMaxLength(struct
   util__ClassMember const &)const  */

Maybe_L_int_G_ __thiscall Level__GetStringPropertyMaxLength(Level *this,ClassMember *param_1)

{
  bool bVar1;
  char *pcVar2;
  undefined1 *puVar3;
  Maybe_L_int_G_ MVar4;
  Maybe_L_int_G_ MVar5;
  undefined4 *in_stack_00000008;
  
  if ((int)in_stack_00000008[1] < 1) {
    puVar3 = (undefined1 *)(&cde_l2_0b2b1c9f_NullString);
  }
  else {
    puVar3 = (undefined1 *)*in_stack_00000008;
  }
  pcVar2 = "Description";
  (*(uint32_t*)((char*)&(MVar4)+4)) = (uint32_t)(uintptr_t)(puVar3 + -0x91f30c);
  while( true ) {
    if ((pcVar2[(int)(*(uint32_t*)((char*)&(MVar4)+4))] == '\0') && (*pcVar2 == '\0')) {
      (param_1->Name).Data = (char *)0x2710;
      (undefined1)((param_1->Name).Capacity = 1);
      MVar4.Data = (int)param_1;
      return MVar4;
    }
    if (pcVar2[(int)(*(uint32_t*)((char*)&(MVar4)+4))] != *pcVar2) break;
    pcVar2 = pcVar2 + 1;
  }
  if ((int)in_stack_00000008[1] < 1) {
    puVar3 = (undefined1 *)(&cde_l2_0b2b1c9f_NullString);
  }
  else {
    puVar3 = (undefined1 *)*in_stack_00000008;
  }
  for (pcVar2 = "ShortDescription"; (pcVar2[(int)(puVar3 + -0x9375c8)] != '\0' || (*pcVar2 != '\0'))
      ; pcVar2 = pcVar2 + 1) {
    if (pcVar2[(int)(puVar3 + -0x9375c8)] != *pcVar2) {
      bVar1 = false;
LAB_00703ffb:
      pcVar2 = (char *)0x0;
      if (bVar1) {
        pcVar2 = (char *)0x12c;
      }
      (param_1->Name).Data = pcVar2;
      (undefined1)((param_1->Name).Capacity = 1);
      (*(uint32_t*)((char*)&(MVar5)+4)) = 300;
      MVar5.Data = (int)param_1;
      return MVar5;
    }
  }
  bVar1 = true;
  goto LAB_00703ffb;
}





//==== 00704040 GetValue ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: static class util__Maybe_L_double_G_ __cdecl LevelRecord__GetValue(struct
   util__Attribute_L_structLevelRecord_G_ const &,struct LevelRecordMetadata const &) */

Maybe_L_double_G_ * __cdecl
LevelRecord__GetValue
          (Maybe_L_double_G_ *__return_storage_ptr__,Attribute_L_LevelRecord_G_ *param_1,
          LevelRecordMetadata *param_2)

{
  undefined8 stack0xfffffffc;
  double dVar1;
  Level *pLVar2;
  LevelRecord *pLVar3;
  LevelRecord local_78;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pLVar3 = (LevelRecord *)(uintptr_t)(util__Attribute_struct_LevelRecord___Get(param_1,&local_78));
  pLVar2 = pLVar3->ForLevel;
  local_78._pad_0x0_0 = (int)&vftable_5;
  if ((void *)local_78._pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)local_78._pad_0x4_1);
  }
  if (pLVar2 == (Level *)0x0) {
    __return_storage_ptr__->IsValidData = false;
    __return_storage_ptr__->Data = 0.0;
    return __return_storage_ptr__;
  }
  util__Attribute_struct_LevelRecord___Get(param_1,&local_78);
  dVar1 = *(double *)((int)&local_78._pad_0x0_0 + param_2->Offset);
  __return_storage_ptr__->IsValidData = *(bool *)((int)&local_78._pad_0x8_2 + param_2->Offset);
  __return_storage_ptr__->Data = dVar1;
  if ((void *)local_78._pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)local_78._pad_0x4_1);
  }
  return __return_storage_ptr__;
}

//==== 00704100 HasChangedAnyCustomizableFleets ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: bool __thiscall Level__HasChangedAnyCustomizableFleets(void)const  */

bool __thiscall Level__HasChangedAnyCustomizableFleets(Level *this)

{
  undefined8 stack0xfffffffc;
  int *piVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  Darray_L_bool_P_G_ *pDVar6;
  undefined **local_40;
  void *local_3c;
  Darray_L_int_G_ local_30;
  undefined **local_20;
  void *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar1 = &this[1].Description.Length;
  local_10 = 0;
  iVar3 = (**(code **)(uintptr_t)(this[1].Description.Length + 0xc))();
  if (local_10 < iVar3) {
    do {
      iVar3 = (**(code **)*piVar1)(&local_10);
      iVar3 = *(int *)(iVar3 + 0x10);
      if ((iVar3 != 0) && (*(char *)(iVar3 + 0xa9) != '\0')) {
        local_20 = (undefined **)(&vftable_2);
        pDVar6 = (Darray_L_bool_P_G_ *)&local_20;
        if (*(char *)(iVar3 + 0xd8) != '\0') {
          pDVar6 = (Darray_L_bool_P_G_ *)(iVar3 + 200);
        }
        *(uint32_t *)&local_1c = (uint32_t)(uintptr_t)((void *)0x0);
        local_18 = 0;
        local_14 = 0;
        util__Darray_bool____Darray_bool((Darray_L_bool_P_G_ *)&local_30,pDVar6);
        piVar4 = (int *)util__Zip_class_CraftBlueprint_const__int__o2
                                  ((Darray_L_CraftBlueprint_const_P_G_ *)&local_40,&local_30);
        *(uint32_t *)&local_c = 0;
        iVar3 = (**(code **)(uintptr_t)(*piVar4 + 0xc))();
        if (local_c < iVar3) {
          do {
            piVar5 = (int *)(**(code **)*piVar4)(&local_c);
            if (*piVar5 != piVar5[1]) {
              bVar2 = true;
              goto LAB_007041dd;
            }
            *(uint32_t *)&local_c = local_c + 1;
            iVar3 = (**(code **)(uintptr_t)(*piVar4 + 0xc))();
          } while (local_c < iVar3);
        }
        bVar2 = false;
LAB_007041dd:
        local_40 = &vftable_109;
        if (local_3c != (void *)0x0) {
          port_op_delete(local_3c);
        }
        local_3c = (void *)0x0;
        local_40 = (undefined **)(&vftable);
        local_30._pad_0x0_0 = (int)&vftable_2;
        if (local_30.Data != (int *)0x0) {
          port_op_delete(local_30.Data);
        }
        local_30.Data = (int *)0x0;
        local_30._pad_0x0_0 = (int)&vftable;
        local_20 = (undefined **)(&vftable_2);
        if (local_1c != (void *)0x0) {
          port_op_delete(local_1c);
        }
        *(uint32_t *)&local_1c = (uint32_t)(uintptr_t)((void *)0x0);
        local_20 = (undefined **)(&vftable);
        if (bVar2) {
          return true;
        }
      }
      local_10 = local_10 + 1;
      iVar3 = (**(code **)(uintptr_t)(*piVar1 + 0xc))();
    } while (local_10 < iVar3);
  }
  return false;
}

//==== 00704290 IsAllowedToPlayLevel ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: bool __thiscall Campaign__IsAllowedToPlayLevel(class DataParser *,struct Level *)const
    */

bool __thiscall Campaign__IsAllowedToPlayLevel(Campaign *this,DataParser *param_1,Level *param_2)

{
  undefined8 stack0xfffffffc;
  int *piVar1;
  Level *pLVar2;
  undefined4 *puVar3;
  LevelRecord *pLVar4;
  int TVar5;
  int *piVar6;
  int iVar7;
  Attribute_L_LevelRecord_G_ local_1e4;
  Attribute_L_LevelRecord_G_ local_16c;
  Attribute_L_LevelRecord_G_ local_f4;
  LevelRecord local_7c;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar7 = 0;
  piVar6 = (int *)this[1]._pad_0x0_0;
  piVar1 = piVar6 + this[1]._pad_0x4_1;
  for (; piVar6 != piVar1; piVar6 = piVar6 + 1) {
    if ((Level *)*piVar6 == param_2) goto LAB_007042e9;
    iVar7 = iVar7 + 1;
  }
  iVar7 = 0;
  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                  "IsValid()",(char *)0x0);
  DebugBreak();
LAB_007042e9:
  *(uint32_t *)&local_c = iVar7 + -1;
  if (-1 < local_c) {
    puVar3 = (undefined4 *)(**(code **)this->ModPriority)(&local_c);
    pLVar2 = (Level *)*puVar3;
    pLVar4 = LevelRecord__GetLevelRecord(pLVar2,param_1,true);
    local_1e4.Getter.Callee = (void *)0x0;
    local_1e4.Getter.CallbackFunction = (_func___cdecl_LevelRecord_void_ptr *)0x0;
    LevelRecord__LevelRecord(&local_1e4.Value);
    pLVar4 = LevelRecord__GetLevelRecord(pLVar2,param_1,false);
    local_16c.Getter.Callee = (void *)0x0;
    local_16c.Getter.CallbackFunction = (_func___cdecl_LevelRecord_void_ptr *)0x0;
    LevelRecord__LevelRecord(&local_16c.Value);
    local_7c._pad_0x4_1 = 0;
    local_7c._pad_0x8_2 = 0;
    local_7c._pad_0xc_3 = 0;
    local_7c._pad_0x0_0 = (int)&vftable_64;
    local_7c.ForLevel = (Level *)0x0;
    local_7c.TimeElapsed_s.Data = 0.0;
    local_7c.TimeElapsed_s.IsValidData = false;
    local_7c.DeltaVSpent_km__s.Data = 0.0;
    local_7c.DeltaVSpent_km__s.IsValidData = false;
    local_7c.CapitalShipsAlive_Percent.Data = 0.0;
    local_7c.CapitalShipsAlive_Percent.IsValidData = false;
    local_7c.CapitalShipsUnscathed_Percent.Data = 0.0;
    local_7c.CapitalShipsUnscathed_Percent.IsValidData = false;
    local_7c.EnemyModulesLeft_Percent.Data = 0.0;
    local_7c.EnemyModulesLeft_Percent.IsValidData = false;
    local_7c.IsADeveloperRecord = false;
    local_f4.Getter.Callee = (void *)0x0;
    local_f4.Getter.CallbackFunction = (_func___cdecl_LevelRecord_void_ptr *)0x0;
    LevelRecord__LevelRecord(&local_f4.Value);
    TVar5 = LevelRecord__GetRatingForLevel( (void *)((DataParser*)(&local_f4)), (void *)((Level*)((Level*)(&local_16c))),&local_1e4);
    local_f4.Value._pad_0x0_0 = (int)&vftable_5;
    if ((void *)local_f4.Value._pad_0x4_1 != (void *)0x0) {
      port_op_delete((void *)local_f4.Value._pad_0x4_1);
      local_f4.Value._pad_0x4_1 = 0;
    }
    if ((void *)local_7c._pad_0x4_1 != (void *)0x0) {
      port_op_delete((void *)local_7c._pad_0x4_1);
    }
    local_16c.Value._pad_0x0_0 = (int)&vftable_5;
    if ((void *)local_16c.Value._pad_0x4_1 != (void *)0x0) {
      port_op_delete((void *)local_16c.Value._pad_0x4_1);
      local_16c.Value._pad_0x4_1 = 0;
    }
    if ((void *)local_1e4.Value._pad_0x4_1 != (void *)0x0) {
      port_op_delete((void *)local_1e4.Value._pad_0x4_1);
    }
    if ((int)TVar5 < 1) {
      return false;
    }
  }
  return true;
}

//==== 007044a0 IsBetterThanOtherRecords ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: static bool __cdecl LevelRecord__IsBetterThanOtherRecords(struct util__Attribute_L_struct_LevelRecord_G_ const &,class util__Darray_L_structutil__Attribute_L_structLevelRecord_G__G_ const
   &,struct LevelRecordMetadata const &) */

bool __cdecl
LevelRecord__IsBetterThanOtherRecords
          (Attribute_L_LevelRecord_G_ *param_1,Darray_L_util__Attribute_L_LevelRecord_G___G_ *param_2,
          LevelRecordMetadata *param_3)

{
  undefined8 stack0xfffffffc;
  char cVar1;
  Level *pLVar2;
  uint uVar3;
  int iVar4;
  LevelRecord *pLVar5;
  bool bVar6;
  LevelRecord local_108;
  Attribute_L_LevelRecord_G_ *local_98;
  Darray_L_util__Attribute_L_LevelRecord_G___G_ *local_94;
  LevelRecordMetadata *local_90;
  LevelRecord local_8c;
  Maybe_L_double_G_ local_1c;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_94 = param_2;
  local_90 = param_3;
  GetValue(&local_1c,param_1,param_3);
  if (local_1c.IsValidData == false) {
    return false;
  }
  *(uint32_t *)&local_c = 0;
  iVar4 = (**(code **)(param_2->_pad_0x0_0 + 0xc))();
  if (local_c < iVar4) {
    do {
      local_98 = (Attribute_L_LevelRecord_G_ *)(**(code **)param_2->_pad_0x0_0)(&local_c);
      pLVar5 = (LevelRecord *)(uintptr_t)(util__Attribute_struct_LevelRecord___Get(local_98,&local_108));
      pLVar2 = pLVar5->ForLevel;
      local_108._pad_0x0_0 = (int)&vftable_5;
      if ((void *)local_108._pad_0x4_1 != (void *)0x0) {
        port_op_delete((void *)local_108._pad_0x4_1);
        local_108._pad_0x4_1 = 0;
      }
      if (pLVar2 != (Level *)0x0) {
        util__Attribute_struct_LevelRecord___Get(local_98,&local_8c);
        uVar3 = local_90->Offset;
        cVar1 = *(char *)((int)&local_8c._pad_0x8_2 + uVar3);
        if ((void *)local_8c._pad_0x4_1 != (void *)0x0) {
          port_op_delete((void *)local_8c._pad_0x4_1);
        }
        param_2 = local_94;
        if (cVar1 != '\0') {
          if ((char)local_90[1].Name.Capacity == '\0') {
            if (local_1c.IsValidData == false) {
              util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",
                              0x13,"IsValid()",(char *)0x0);
              DebugBreak();
            }
            if (cVar1 == '\0') {
              util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",
                              0x13,"IsValid()",(char *)0x0);
              DebugBreak();
            }
            bVar6 = local_1c.Data < *(double *)((int)&local_8c._pad_0x0_0 + uVar3);
          }
          else {
            if (local_1c.IsValidData == false) {
              util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",
                              0x13,"IsValid()",(char *)0x0);
              DebugBreak();
            }
            if (cVar1 == '\0') {
              util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",
                              0x13,"IsValid()",(char *)0x0);
              DebugBreak();
            }
            bVar6 = *(double *)((int)&local_8c._pad_0x0_0 + uVar3) < local_1c.Data;
          }
          param_2 = local_94;
          if (bVar6) {
            return false;
          }
        }
      }
      *(uint32_t *)&local_c = local_c + 1;
      iVar4 = (**(code **)(param_2->_pad_0x0_0 + 0xc))();
    } while (local_c < iVar4);
  }
  return true;
}

//==== 00704680 IsCurrentCampaignTheDefault ====


/* bool __cdecl IsCurrentCampaignTheDefault(class DataParser *) */

bool __cdecl IsCurrentCampaignTheDefault(DataParser *param_1)

{
  Campaign *pCVar1;
  Campaign *pCVar2;
  
  if (DAT_0097fcec == (Campaign *)0x0) {
    DAT_0097fcec = (undefined4)(uintptr_t)(GetDefaultCampaign(param_1));
  }
  pCVar1 = (Campaign *)(uintptr_t)(DAT_0097fcec);
  pCVar2 = GetDefaultCampaign(param_1);
  return pCVar2 == pCVar1;
}





//==== 007046c0 IsCurrentlyWithinLimits ====

/* public: bool __thiscall StarterFleet__IsCurrentlyWithinLimits(void)const  */

bool __thiscall StarterFleet__IsCurrentlyWithinLimits(StarterFleet *this)

{
  tuple2_L_double_Cdouble_G_ local_14;
  
  CalculateMassAndCost_kg_And_c(this,&local_14);
  if ((char)this[1]._pad_0x8_2 != '\0') {
    if ((double)((this->CachedOriginalShipTypes).IsValidData == 0.0)){
      if ((char)this[1]._pad_0x8_2 == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      if (*(double *)(this + 1) == 0.0) {
        return true;
      }
    }
    if ((char)this[1]._pad_0x8_2 != '\0') goto LAB_0070474e;
  }
  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                  "IsValid()",(char *)0x0);
  DebugBreak();
LAB_0070474e:
  if (local_14.Value1 <= (double)((this->CachedOriginalShipTypes).IsValidData)){
    if ((char)this[1]._pad_0x8_2 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if (local_14.Value2 <= *(double *)(this + 1)) {
      return true;
    }
  }
  return false;
}

//==== 007047a0 IsEntireCampaignBeaten ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: bool __thiscall Campaign__IsEntireCampaignBeaten(class DataParser *,enum
   LevelRating__Type)const  */

bool __thiscall Campaign__IsEntireCampaignBeaten(Campaign *this,DataParser *param_1,int param_2)

{
  undefined8 stack0xfffffffc;
  Level *pLVar1;
  int iVar2;
  undefined4 *puVar3;
  LevelRecord *pLVar4;
  int TVar5;
  Attribute_L_LevelRecord_G_ local_1e8;
  Attribute_L_LevelRecord_G_ local_170;
  Attribute_L_LevelRecord_G_ local_f8;
  LevelRecord local_80;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(uint32_t *)&local_c = 0;
  iVar2 = (**(code **)(this->ModPriority + 0xc))();
  if (local_c < iVar2) {
    do {
      puVar3 = (undefined4 *)(**(code **)this->ModPriority)(&local_c);
      pLVar1 = (Level *)*puVar3;
      local_10 = param_2;
      pLVar4 = LevelRecord__GetLevelRecord(pLVar1,param_1,true);
      local_1e8.Getter.Callee = (void *)0x0;
      local_1e8.Getter.CallbackFunction = (_func___cdecl_LevelRecord_void_ptr *)0x0;
      LevelRecord__LevelRecord(&local_1e8.Value);
      pLVar4 = LevelRecord__GetLevelRecord(pLVar1,param_1,false);
      local_170.Getter.Callee = (void *)0x0;
      local_170.Getter.CallbackFunction = (_func___cdecl_LevelRecord_void_ptr *)0x0;
      LevelRecord__LevelRecord(&local_170.Value);
      local_80._pad_0x4_1 = 0;
      local_80._pad_0x8_2 = 0;
      local_80._pad_0xc_3 = 0;
      local_80._pad_0x0_0 = (int)&vftable_64;
      local_80.ForLevel = (Level *)0x0;
      local_80.TimeElapsed_s.Data = 0.0;
      local_80.TimeElapsed_s.IsValidData = false;
      local_80.DeltaVSpent_km__s.Data = 0.0;
      local_80.DeltaVSpent_km__s.IsValidData = false;
      local_80.CapitalShipsAlive_Percent.Data = 0.0;
      local_80.CapitalShipsAlive_Percent.IsValidData = false;
      local_80.CapitalShipsUnscathed_Percent.Data = 0.0;
      local_80.CapitalShipsUnscathed_Percent.IsValidData = false;
      local_80.EnemyModulesLeft_Percent.Data = 0.0;
      local_80.EnemyModulesLeft_Percent.IsValidData = false;
      local_80.IsADeveloperRecord = false;
      local_f8.Getter.Callee = (void *)0x0;
      local_f8.Getter.CallbackFunction = (_func___cdecl_LevelRecord_void_ptr *)0x0;
      LevelRecord__LevelRecord(&local_f8.Value);
      TVar5 = LevelRecord__GetRatingForLevel( (void *)((DataParser*)(&local_f8)), (void *)((Level*)((Level*)(&local_170))),&local_1e8);
      local_f8.Value._pad_0x0_0 = (int)&vftable_5;
      if ((void *)local_f8.Value._pad_0x4_1 != (void *)0x0) {
        port_op_delete((void *)local_f8.Value._pad_0x4_1);
        local_f8.Value._pad_0x4_1 = 0;
      }
      if ((void *)local_80._pad_0x4_1 != (void *)0x0) {
        port_op_delete((void *)local_80._pad_0x4_1);
      }
      local_170.Value._pad_0x0_0 = (int)&vftable_5;
      if ((void *)local_170.Value._pad_0x4_1 != (void *)0x0) {
        port_op_delete((void *)local_170.Value._pad_0x4_1);
        local_170.Value._pad_0x4_1 = 0;
      }
      if ((void *)local_1e8.Value._pad_0x4_1 != (void *)0x0) {
        port_op_delete((void *)local_1e8.Value._pad_0x4_1);
      }
      if ((int)TVar5 < (int)local_10) {
        return false;
      }
      *(uint32_t *)&local_c = local_c + 1;
      iVar2 = (**(code **)(this->ModPriority + 0xc))();
    } while (local_c < iVar2);
  }
  return true;
}

//==== 00704990 IsLastLevel ====

/* public: bool __thiscall Level__IsLastLevel(class DataParser *)const  */

bool __thiscall Level__IsLastLevel(Level *this,DataParser *param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (DAT_0097fcec == (Campaign *)0x0) {
    DAT_0097fcec = (undefined4)(uintptr_t)(GetDefaultCampaign(param_1));
  }
  piVar2 = (int *)((Campaign *)(uintptr_t)DAT_0097fcec)[1]._pad_0x0_0;
  piVar1 = piVar2 + ((Campaign *)(uintptr_t)DAT_0097fcec)[1]._pad_0x4_1;
  while( true ) {
    if (piVar2 == piVar1) {
      return false;
    }
    if ((Level *)*piVar2 == this) break;
    piVar2 = piVar2 + 1;
  }
  if (DAT_0097fcec == (Campaign *)0x0) {
    DAT_0097fcec = (undefined4)(uintptr_t)(GetDefaultCampaign(param_1));
  }
  piVar1 = (int *)(**(code **)(((struct Campaign *)0x0097fcecu)->ModPriority + 8))();
  if ((Level *)*piVar1 != this) {
    return false;
  }
  return true;
}

//==== 00704a00 IsLevelBeaten ====

/* public: bool __thiscall Campaign__IsLevelBeaten(class DataParser *,struct Level *,enum
   LevelRating__Type)const  */

bool __thiscall
Campaign__IsLevelBeaten(Campaign *this,DataParser *param_1,Level *param_2,int param_3)

{
  LevelRecord *pLVar1;
  int TVar2;
  Attribute_L_LevelRecord_G_ local_1dc;
  Attribute_L_LevelRecord_G_ local_164;
  Attribute_L_LevelRecord_G_ local_ec;
  LevelRecord local_74;
  
  pLVar1 = LevelRecord__GetLevelRecord(param_2,param_1,true);
  local_1dc.Getter.Callee = (void *)0x0;
  local_1dc.Getter.CallbackFunction = (_func___cdecl_LevelRecord_void_ptr *)0x0;
  LevelRecord__LevelRecord(&local_1dc.Value);
  pLVar1 = LevelRecord__GetLevelRecord(param_2,param_1,false);
  local_164.Getter.Callee = (void *)0x0;
  local_164.Getter.CallbackFunction = (_func___cdecl_LevelRecord_void_ptr *)0x0;
  LevelRecord__LevelRecord(&local_164.Value);
  local_74._pad_0x4_1 = 0;
  local_74._pad_0x8_2 = 0;
  local_74._pad_0xc_3 = 0;
  local_74._pad_0x0_0 = (int)&vftable_64;
  local_74.ForLevel = (Level *)0x0;
  local_74.TimeElapsed_s.Data = 0.0;
  local_74.TimeElapsed_s.IsValidData = false;
  local_74.DeltaVSpent_km__s.Data = 0.0;
  local_74.DeltaVSpent_km__s.IsValidData = false;
  local_74.CapitalShipsAlive_Percent.Data = 0.0;
  local_74.CapitalShipsAlive_Percent.IsValidData = false;
  local_74.CapitalShipsUnscathed_Percent.Data = 0.0;
  local_74.CapitalShipsUnscathed_Percent.IsValidData = false;
  local_74.EnemyModulesLeft_Percent.Data = 0.0;
  local_74.EnemyModulesLeft_Percent.IsValidData = false;
  local_74.IsADeveloperRecord = false;
  local_ec.Getter.Callee = (void *)0x0;
  local_ec.Getter.CallbackFunction = (_func___cdecl_LevelRecord_void_ptr *)0x0;
  LevelRecord__LevelRecord(&local_ec.Value);
  TVar2 = LevelRecord__GetRatingForLevel( (void *)((DataParser*)(&local_ec)), (void *)((Level*)((Level*)(&local_164))),&local_1dc);
  local_ec.Value._pad_0x0_0 = (int)&vftable_5;
  if ((void *)local_ec.Value._pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)local_ec.Value._pad_0x4_1);
    local_ec.Value._pad_0x4_1 = 0;
  }
  if ((void *)local_74._pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)local_74._pad_0x4_1);
  }
  local_164.Value._pad_0x0_0 = (int)&vftable_5;
  if ((void *)local_164.Value._pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)local_164.Value._pad_0x4_1);
    local_164.Value._pad_0x4_1 = 0;
  }
  if ((void *)local_1dc.Value._pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)local_1dc.Value._pad_0x4_1);
  }
  return (int)param_3 <= (int)TVar2;
}

//==== 00704b80 IsPartOfCampaign ====

/* public: bool __thiscall Level__IsPartOfCampaign(class DataParser *)const  */

bool __thiscall Level__IsPartOfCampaign(Level *this,DataParser *param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (DAT_0097fcec == (Campaign *)0x0) {
    DAT_0097fcec = (undefined4)(uintptr_t)(GetDefaultCampaign(param_1));
  }
  piVar2 = (int *)((Campaign *)(uintptr_t)DAT_0097fcec)[1]._pad_0x0_0;
  piVar1 = piVar2 + ((Campaign *)(uintptr_t)DAT_0097fcec)[1]._pad_0x4_1;
  while( true ) {
    if (piVar2 == piVar1) {
      return false;
    }
    if ((Level *)*piVar2 == this) break;
    piVar2 = piVar2 + 1;
  }
  return true;
}

//==== 00704bd0 IsPropertyReadOnly_00704bd0 ====


/* public: virtual bool __thiscall Campaign__IsPropertyReadOnly(struct util__ClassMember const
   &)const  */

bool __thiscall Campaign__IsPropertyReadOnly(Campaign *this,ClassMember *param_1)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  
  if ((param_1->Name).Capacity < 1) {
    pcVar3 = "";
  }
  else {
    pcVar3 = (param_1->Name).Data;
  }
  pcVar2 = "LevelOrder";
  while( true ) {
    if ((pcVar2[(int)(pcVar3 + -0x9375dc)] == '\0') && (*pcVar2 == '\0')) {
      return true;
    }
    if (pcVar2[(int)(pcVar3 + -0x9375dc)] != *pcVar2) break;
    pcVar2 = pcVar2 + 1;
  }
  if ((param_1->Name).Capacity < 1) {
    pcVar3 = "";
  }
  else {
    pcVar3 = (param_1->Name).Data;
  }
  pcVar2 = "EndingLevels";
  while( true ) {
    if ((pcVar2[(int)(pcVar3 + -0x9375e8)] == '\0') && (*pcVar2 == '\0')) {
      return true;
    }
    if (pcVar2[(int)(pcVar3 + -0x9375e8)] != *pcVar2) break;
    pcVar2 = pcVar2 + 1;
  }
  bVar1 = util__Str_char___operator__o9(&param_1->Name,"SandboxLevel");
  if (((!bVar1) && (bVar1 = util__Str_char___operator__o9(&param_1->Name,"IsDefaultCampaign"), !bVar1)
      ) && (bVar1 = EditorReflectable__IsPropertyReadOnly((EditorReflectable *)this,param_1), !bVar1
           )) {
    return bVar1;
  }
  return true;
}





//==== 00704c70 IsPropertyReadOnly_00704c70 ====


/* public: virtual bool __thiscall Level__IsPropertyReadOnly(struct util__ClassMember const &)const
    */

bool __thiscall Level__IsPropertyReadOnly(Level *this,ClassMember *param_1)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  
  if ((param_1->Name).Capacity < 1) {
    pcVar3 = "";
  }
  else {
    pcVar3 = (param_1->Name).Data;
  }
  for (pcVar2 = "UnlockModuleDesign";
      (pcVar2[(int)(pcVar3 + -0x937534)] != '\0' || (*pcVar2 != '\0')); pcVar2 = pcVar2 + 1) {
    if (pcVar2[(int)(pcVar3 + -0x937534)] != *pcVar2) {
      if ((param_1->Name).Capacity < 1) {
        pcVar3 = "";
      }
      else {
        pcVar3 = (param_1->Name).Data;
      }
      for (pcVar2 = "Fleets"; (pcVar2[(int)(pcVar3 + -0x937548)] != '\0' || (*pcVar2 != '\0'));
          pcVar2 = pcVar2 + 1) {
        if (pcVar2[(int)(pcVar3 + -0x937548)] != *pcVar2) {
          bVar1 = util__Str_char___operator__o9(&param_1->Name,"Location");
          if (bVar1) {
            return true;
          }
          return bVar1;
        }
      }
      return true;
    }
  }
  return true;
}





//==== 00704d00 IsSimpleCombatLevel ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: bool __thiscall Level__IsSimpleCombatLevel(void)const  */

bool __thiscall Level__IsSimpleCombatLevel(Level *this)

{
  undefined8 stack0xfffffffc;
  int *piVar1;
  int iVar2;
  int *piVar3;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((this->PlayerAlliance != (Faction *)0x0) && ((this->AdditionalAlliances)._padfb0 != 0)) {
    *(uint32_t *)&local_c = (**(code **)(*(int *)&this[1].JulianYear + 0xc))();
    if ((local_c == 0) &&
       ((*(int *)((char *)&(this[1]) + 0xc) == 0 && ((this->AdditionalAlliances).Data != (Faction **)0x0))))
    {
      piVar1 = &this[1].Description.Length;
      iVar2 = (**(code **)(uintptr_t)(*piVar1 + 0xc))();
      local_10 = 0;
      if (local_c < iVar2) {
        do {
          piVar3 = (int *)(**(code **)*piVar1)(&local_c);
          if (((Faction *)piVar3[2] == this->PlayerAlliance) && (*piVar3 == this[1]._pad_0x8_2)) {
            local_10 = local_10 + 1;
          }
          *(uint32_t *)&local_c = local_c + 1;
          iVar2 = (**(code **)(uintptr_t)(*piVar1 + 0xc))();
        } while (local_c < iVar2);
      }
      if (local_10 == 1) {
        local_10 = 0;
        *(uint32_t *)&local_c = 0;
        iVar2 = (**(code **)(uintptr_t)(*piVar1 + 0xc))();
        if (local_c < iVar2) {
          do {
            piVar3 = (int *)(**(code **)*piVar1)(&local_c);
            if ((piVar3[2] == (this->AdditionalAlliances)._padfb0) &&
               (*piVar3 == this[1]._pad_0x8_2)) {
              local_10 = local_10 + 1;
            }
            *(uint32_t *)&local_c = local_c + 1;
            iVar2 = (**(code **)(uintptr_t)(*piVar1 + 0xc))();
          } while (local_c < iVar2);
        }
        if (local_10 == 1) {
          return true;
        }
      }
    }
  }
  return false;
}

//==== 00704e30 IsUnlimited ====

/* public: bool __thiscall StarterFleet__IsUnlimited(void)const  */

bool __thiscall StarterFleet__IsUnlimited(StarterFleet *this)

{
  if (((char)this[1]._pad_0x8_2 != '\0') &&
     ((double)((this->CachedOriginalShipTypes).IsValidData == 0.0)) ) {
    if ((char)this[1]._pad_0x8_2 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if (*(double *)(this + 1) == 0.0) {
      return true;
    }
  }
  return false;
}

//==== 00704ea0 Print_00704ea0 ====


/* public: virtual class util__Str_L_char_G_ __thiscall Level__Print(void)const  */

Str_L_char_G_ * __thiscall Level__Print(Level *this,Str_L_char_G_ *__return_storage_ptr__)

{
  Str_L_char_G_ *this_00;
  Str_L_char_G_ *__return_storage_ptr___00;
  char cVar1;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ SStack_10;
  
  util__Str_char___Str_char(&SStack_10,"\n\n");
  pSVar2 = &SStack_10;
  cVar1 = '\n';
  __return_storage_ptr___00 = __return_storage_ptr__;
  this_00 = util__LocStr__operator__o3((LocStr *)&this->TimeLimit_JulianDays);
  util__Str_char___Replace(this_00,__return_storage_ptr___00,cVar1,pSVar2);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 00704ef0 ResetFleetsToDefault ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall Level__ResetFleetsToDefault(bool) */

void __thiscall Level__ResetFleetsToDefault(Level *this,bool param_1)

{
  undefined8 stack0xfffffffc;
  int *piVar1;
  int iVar2;
  int iVar3;
  Faction *pFVar4;
  Darray_L_bool_P_G_ *pDVar5;
  undefined **local_2c;
  void *local_28;
  undefined **local_1c;
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(uint32_t *)&local_c = 0;
  piVar1 = &this[1].Description.Length;
  iVar2 = (**(code **)(uintptr_t)(this[1].Description.Length + 0xc))();
  if (local_c < iVar2) {
    do {
      iVar3 = (**(code **)*piVar1)(&local_c);
      iVar2 = *(int *)(iVar3 + 0x10);
      if (iVar2 != 0) {
        if (param_1) {
          pFVar4 = this->PlayerAlliance;
        }
        else {
          pFVar4 = (Faction *)(this->AdditionalAlliances)._padfb0;
        }
        if ((*(Faction **)(iVar3 + 8) == pFVar4) && (*(char *)(iVar2 + 0xa9) != '\0')) {
          *(uint32_t *)&local_1c = (uint32_t)(uintptr_t)(&vftable_2);
          local_18 = (void *)0x0;
          local_14 = 0;
          local_10 = 0;
          pDVar5 = (Darray_L_bool_P_G_ *)&local_1c;
          if (*(char *)(iVar2 + 0xd8) != '\0') {
            pDVar5 = (Darray_L_bool_P_G_ *)(iVar2 + 200);
          }
          util__Darray_bool____Darray_bool((Darray_L_bool_P_G_ *)&local_2c,pDVar5);
          util__Darray_L_Module_P_G___op_assign
                    ((Darray_L_Module_P_G_ *)(*(int *)(iVar3 + 0x10) + 0x34),
                     (Darray_L_class_Module_P_G_ *)&local_2c);
          local_2c = (undefined **)(&vftable_2);
          if (local_28 != (void *)0x0) {
            port_op_delete(local_28);
          }
          local_28 = (void *)0x0;
          local_2c = (undefined **)(&vftable);
          *(uint32_t *)&local_1c = (uint32_t)(uintptr_t)(&vftable_2);
          if (local_18 != (void *)0x0) {
            port_op_delete(local_18);
          }
          local_18 = (void *)0x0;
          *(uint32_t *)&local_1c = (uint32_t)(uintptr_t)(&vftable);
        }
      }
      *(uint32_t *)&local_c = local_c + 1;
      iVar2 = (**(code **)(uintptr_t)(*piVar1 + 0xc))();
    } while (local_c < iVar2);
  }
  return;
}

//==== 00705020 SetAll_00705020 ====


/* public: virtual void  util__Darray_L_structLevelSpeakerMessage_G___SetAll(struct
   LevelSpeakerMessage const &) */

void 
util__Darray_struct_LevelSpeakerMessage___SetAll
          (Darray_L_struct_LevelSpeakerMessage_G_ *this,LevelSpeakerMessage *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this + 4);
  if (puVar1 != puVar1 + *(int *)(this + 8) * 7) {
    do {
      *puVar1 = (undefined4)(uintptr_t)(param_1->Talker);
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar1 + 1),&param_1->Message);
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar1 + 4),(Str_L_char_G_ *)(param_1 + 1));
      puVar1 = puVar1 + 7;
    } while (puVar1 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x1c));
  }
  return;
}





//==== 00705090 SetAll_00705090 ====


/* public: virtual void  util__Darray_L_structLevelTutorialMessage_G___SetAll(struct
   LevelTutorialMessage const &) */

void 
util__Darray_struct_LevelTutorialMessage___SetAll
          (Darray_L_struct_LevelTutorialMessage_G_ *this,LevelTutorialMessage *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this + 4);
  if (puVar1 != puVar1 + *(int *)(this + 8) * 10) {
    do {
      *puVar1 = (undefined4)(uintptr_t)(param_1->Talker);
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar1 + 1),&param_1->TutorialTag);
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar1 + 4),&param_1->Message);
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar1 + 7),(Str_L_char_G_ *)(param_1 + 1));
      puVar1 = puVar1 + 10;
    } while (puVar1 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x28));
  }
  return;
}





//==== 00705100 SetSize_00705100 ====


/* private: void  util__Darray_L_structLevelRecordMetadata_G___SetSize(int const &) */

void 
util__Darray_struct_LevelRecordMetadata___SetSize
          (Darray_L_struct_LevelRecordMetadata_G_ *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  Str_L_char_G_ SStack_2c;
  Str_L_char_G_ SStack_20;
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
  iVar3 = 0x3fffffff;
  if (iVar2 < 0x3fffffff) {
    iVar3 = iVar2;
  }
  if (((iVar3 < *(int *)(this + 8)) && (iVar2 = *(int *)(this + 4), iVar2 != 0)) &&
     (puVar4 = (undefined4 *)(iVar3 * 0x2c + iVar2),
     puVar4 != (undefined4 *)(*(int *)(this + 8) * 0x2c + iVar2))) {
    do {
      SStack_14.Length = 0;
      uStack_8 = 0;
      SStack_2c.Data = (char *)0x0;
      SStack_2c.Capacity = 0;
      SStack_2c.Length = 0;
      SStack_20.Data = (char *)0x0;
      *puVar4 = 0;
      SStack_20.Capacity = 0;
      SStack_20.Length = 0;
      SStack_14.Data = (char *)0x0;
      SStack_14.Capacity = 0;
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar4 + 1),&SStack_2c);
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar4 + 4),&SStack_20);
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar4 + 7),&SStack_14);
      puVar4[10] = 0;
      puVar4 = puVar4 + 0xb;
    } while (puVar4 != (undefined4 *)(*(int *)(this + 8) * 0x2c + *(int *)(this + 4)));
  }
  *(int *)(this + 8) = iVar3;
  return;
}





//==== 007051f0 SetSize_007051f0 ====


/* private: void  util__Darray_L_structLevelTutorialMessage_G___SetSize(int const &) */

void 
util__Darray_struct_LevelTutorialMessage___SetSize
          (Darray_L_struct_LevelTutorialMessage_G_ *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  Str_L_char_G_ SStack_40;
  Str_L_char_G_ SStack_34;
  Str_L_char_G_ SStack_28;
  Str_L_char_G_ SStack_1c;
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
     (puVar4 = (undefined4 *)(iVar2 + iVar3 * 0x28),
     puVar4 != (undefined4 *)(iVar2 + *(int *)(this + 8) * 0x28))) {
    do {
      SStack_1c.Data = (char *)0x0;
      SStack_1c.Capacity = 0;
      SStack_1c.Length = 0;
      SStack_10.Data = (char *)0x0;
      SStack_40.Data = (char *)0x0;
      SStack_40.Capacity = 0;
      SStack_40.Length = 0;
      SStack_10.Capacity = 0;
      SStack_10.Length = 0;
      LocStr__LocStr((LocStr *)&SStack_34,&SStack_10,&SStack_1c);
      if (SStack_10.Data != (char *)0x0) {
        port_op_delete(SStack_10.Data);
        SStack_10.Data = (char *)0x0;
      }
      if (SStack_1c.Data != (char *)0x0) {
        port_op_delete(SStack_1c.Data);
        SStack_1c.Data = (char *)0x0;
      }
      *puVar4 = 0;
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar4 + 1),&SStack_40);
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar4 + 4),&SStack_34);
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar4 + 7),&SStack_28);
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
      }
      puVar4 = puVar4 + 10;
    } while (puVar4 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x28));
  }
  *(int *)(this + 8) = iVar3;
  return;
}





//==== 00705380 StaticFactory_00705380 ====

/* public: static class util__Reflectable * __cdecl Campaign__ReflectionInfoStruct_L_struct_Campaign_G___StaticFactory(void) */

Reflectable * __cdecl Campaign__ReflectionInfoStruct_struct_Campaign___StaticFactory(void)

{
  Reflectable *this;
  
  this = (Reflectable *)(uintptr_t)(port_op_new(0x60));
  if (this != (Reflectable *)0x0) {
    EditorReflectable__EditorReflectable((EditorReflectable *)this);
    this->_pad_0x0_0 = (int)&vftable_422;
    this[3].Name.Data = (char *)0x0;
    this[3].Name.Capacity = (int)&vftable_2;
    this[3].Name.Length = 0;
    this[4]._pad_0x0_0 = 0;
    this[4].Name.Data = (char *)0x0;
    this[4].Name.Capacity = (int)&vftable_2;
    this[4].Name.Length = 0;
    this[5]._pad_0x0_0 = 0;
    this[5].Name.Data = (char *)0x0;
    this[5].Name.Capacity = 0;
    *(undefined1 *)&this[5].Name.Length = 0;
  }
  return (Reflectable *)0x0;
}

//==== 007053f0 StaticFactory_007053f0 ====

/* public: static class util__Reflectable * __cdecl CelestialLocation__ReflectionInfoStruct_L_struct_CelestialLocation_G___StaticFactory(void) */

Reflectable * __cdecl
CelestialLocation__ReflectionInfoStruct_struct_CelestialLocation___StaticFactory(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x28));
  if (pRVar1 != (Reflectable *)0x0) {
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_420;
    pRVar1[1]._pad_0x0_0 = 0;
    pRVar1[1].Name.Data = (char *)0x0;
    pRVar1[1].Name.Capacity = (int)&vftable_2;
    pRVar1[1].Name.Length = 0;
    pRVar1[2]._pad_0x0_0 = 0;
    pRVar1[2].Name.Data = (char *)0x0;
  }
  return (Reflectable *)0x0;
}

//==== 00705450 StaticFactory_00705450 ====

/* public: static class util__Reflectable * __cdecl CustomObjective__ReflectionInfoStruct_L_struct_CustomObjective_G___StaticFactory(void) */

Reflectable * __cdecl CustomObjective__ReflectionInfoStruct_struct_CustomObjective___StaticFactory(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x14));
  if (pRVar1 != (Reflectable *)0x0) {
    pRVar1->_pad_0x0_0 = 0;
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1[1]._pad_0x0_0 = 0;
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_414;
  }
  return (Reflectable *)0x0;
}

//==== 00705490 StaticFactory_00705490 ====

/* public: static class util__Reflectable * __cdecl CutsceneMessage__ReflectionInfoStruct_L_struct_CutsceneMessage_G___StaticFactory(void) */

Reflectable * __cdecl CutsceneMessage__ReflectionInfoStruct_struct_CutsceneMessage___StaticFactory(void)

{
  Reflectable *pRVar1;
  Str_L_char_G_ SStack_1c;
  Reflectable *pRStack_10;
  int iStack_c;
  
  iStack_c = 0x705498;
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x2c));
  if (pRVar1 != (Reflectable *)0x0) {
    iStack_c = 0;
    SStack_1c.Length = 0x7054ab;
    pRStack_10 = pRVar1;
    memset(0,0,0);
    SStack_1c.Data = (char *)0x0;
    SStack_1c.Capacity = 0;
    SStack_1c.Length = 0;
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_415;
    pRStack_10 = (Reflectable *)0x0;
    iStack_c = 0;
    util__LocStr__LocStr((LocStr *)&pRVar1[1].Name,(Str_L_char_G_ *)&pRStack_10,&SStack_1c);
    if (pRStack_10 != (Reflectable *)0x0) {
      port_op_delete(pRStack_10);
      pRStack_10 = (Reflectable *)0x0;
    }
    if (SStack_1c.Data != (char *)0x0) {
      port_op_delete(SStack_1c.Data);
    }
    return pRVar1;
  }
  return (Reflectable *)0x0;
}

//==== 007054c0 StaticFactory_007054c0 ====

/* public: static class util__Reflectable * __cdecl GlobalSaveValues__ReflectionInfoStruct_L_struct_GlobalSaveValues_G___StaticFactory(void) */

Reflectable * __cdecl GlobalSaveValues__ReflectionInfoStruct_struct_GlobalSaveValues___StaticFactory(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x14));
  if (pRVar1 != (Reflectable *)0x0) {
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_423;
    *(undefined1 *)&pRVar1[1]._pad_0x0_0 = 0;
  }
  return (Reflectable *)0x0;
}

//==== 00705500 StaticFactory_00705500 ====

/* public: static class util__Reflectable * __cdecl Level__ReflectionInfoStruct_L_struct_Level_G___StaticFactory(void) */

Reflectable * __cdecl Level__ReflectionInfoStruct_struct_Level___StaticFactory(void)

{
  Reflectable *this;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
  SStack_10.Length = 0x70550a;
  this = (Reflectable *)(uintptr_t)(port_op_new(0x228));
  if (this != (Reflectable *)0x0) {
    EditorReflectable__EditorReflectable((EditorReflectable *)this);
    this->_pad_0x0_0 = (int)&vftable_421;
    this[3].Name.Data = (char *)0x0;
    SStack_1c.Data = (char *)0x0;
    SStack_1c.Capacity = 0;
    this[3].Name.Capacity = 0;
    this[3].Name.Length = 0;
    this[4]._pad_0x0_0 = 0;
    this[4].Name.Data = (char *)0x0;
    SStack_1c.Length = 0;
    SStack_10.Data = (char *)0x0;
    SStack_10.Capacity = 0;
    SStack_10.Length = 0;
    util__LocStr__LocStr((LocStr *)&this[4].Name.Capacity,&SStack_10,&SStack_1c);
    if (SStack_10.Data != (char *)0x0) {
      port_op_delete(SStack_10.Data);
      SStack_10.Data = (char *)0x0;
    }
    if (SStack_1c.Data != (char *)0x0) {
      port_op_delete(SStack_1c.Data);
    }
    SStack_1c.Data = (char *)0x0;
    SStack_1c.Capacity = 0;
    SStack_1c.Length = 0;
    SStack_10.Data = (char *)0x0;
    SStack_10.Capacity = 0;
    SStack_10.Length = 0;
    util__LocStr__LocStr((LocStr *)(this + 6),&SStack_10,&SStack_1c);
    if (SStack_10.Data != (char *)0x0) {
      port_op_delete(SStack_10.Data);
      SStack_10.Data = (char *)0x0;
    }
    if (SStack_1c.Data != (char *)0x0) {
      port_op_delete(SStack_1c.Data);
    }
    this[7].Name.Capacity = 0;
    this[7].Name.Length = 0;
    this[8]._pad_0x0_0 = 0;
    this[8].Name.Data = (char *)0x0;
    this[8].Name.Capacity = (int)&vftable_2;
    this[8].Name.Length = 0;
    this[9]._pad_0x0_0 = 0;
    this[9].Name.Data = (char *)0x0;
    *(undefined2 *)&this[9].Name.Capacity = 0;
    this[9].Name.Length = 0;
    this[10]._pad_0x0_0 = 0;
    this[10].Name.Data = (char *)0x0;
    this[10].Name.Capacity = 0;
    this[10].Name.Length = 0;
    this[10]._pad_0x0_0 = 0;
    this[10].Name.Data = (char *)0x0;
    this[10].Name.Capacity = 0;
    this[9].Name.Length = (int)&vftable_414;
    *(undefined1 *)&this[0xb]._pad_0x0_0 = 0;
    this[0xb].Name.Data = (char *)&vftable_2;
    this[0xb].Name.Capacity = 0;
    this[0xb].Name.Length = 0;
    this[0xc]._pad_0x0_0 = 0;
    this[0xc].Name.Capacity = 0;
    this[0xc].Name.Length = 0;
    this[0xd]._pad_0x0_0 = 0;
    this[0xc].Name.Data = (char *)&vftable_419;
    this[0xd].Name.Data = (char *)0x0;
    this[0xd].Name.Capacity = 0;
    *(undefined1 *)&this[0xd].Name.Length = 0;
    LevelMessages__LevelMessages((LevelMessages *)(this + 0xe));
    *(undefined1 *)&this[0x1e].Name.Data = 0;
    this[0x1e].Name.Length = 0;
    this[0x1f]._pad_0x0_0 = 0;
    this[0x1f].Name.Data = (char *)0x0;
    this[0x1e].Name.Capacity = (int)&vftable_420;
    this[0x1f].Name.Capacity = 0;
    this[0x1f].Name.Length = 0;
    this[0x20]._pad_0x0_0 = (int)&vftable_2;
    this[0x20].Name.Data = (char *)0x0;
    this[0x20].Name.Capacity = 0;
    this[0x20].Name.Length = 0;
    this[0x21]._pad_0x0_0 = (int)&vftable_356;
    this[0x21].Name.Data = (char *)0x0;
    this[0x21].Name.Capacity = 0;
    this[0x21].Name.Length = 0;
    *(undefined1 *)&this[0x22]._pad_0x0_0 = 0;
    return this;
  }
  return (Reflectable *)0x0;
}

//==== 00705520 StaticFactory_00705520 ====

/* public: static class util__Reflectable * __cdecl LevelBadges__ReflectionInfoStruct_L_struct_LevelBadges_G___StaticFactory(void) */

Reflectable * __cdecl LevelBadges__ReflectionInfoStruct_struct_LevelBadges___StaticFactory(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x1c));
  if (pRVar1 != (Reflectable *)0x0) {
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_419;
    pRVar1[1]._pad_0x0_0 = 0;
    pRVar1[1].Name.Data = (char *)0x0;
    *(undefined1 *)&pRVar1[1].Name.Capacity = 0;
  }
  return (Reflectable *)0x0;
}

//==== 00705560 StaticFactory_00705560 ====

/* public: static class util__Reflectable * __cdecl LevelMessages__ReflectionInfoStruct_L_struct_LevelMessages_G___StaticFactory(void) */

Reflectable * __cdecl LevelMessages__ReflectionInfoStruct_struct_LevelMessages___StaticFactory(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x104));
  if (pRVar1 != (Reflectable *)0x0) {
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_418;
    pRVar1[1]._pad_0x0_0 = (int)&vftable_416;
    pRVar1[1].Name.Data = (char *)0x0;
    pRVar1[1].Name.Capacity = 0;
    pRVar1[1].Name.Length = 0;
    pRVar1[2]._pad_0x0_0 = (int)&vftable_417;
    pRVar1[2].Name.Data = (char *)0x0;
    pRVar1[2].Name.Capacity = 0;
    pRVar1[2].Name.Length = 0;
    pRVar1[3]._pad_0x0_0 = (int)&vftable_417;
    pRVar1[3].Name.Data = (char *)0x0;
    pRVar1[3].Name.Capacity = 0;
    pRVar1[3].Name.Length = 0;
    pRVar1[4]._pad_0x0_0 = (int)&vftable_416;
    pRVar1[4].Name.Data = (char *)0x0;
    pRVar1[4].Name.Capacity = 0;
    pRVar1[4].Name.Length = 0;
    pRVar1[5]._pad_0x0_0 = (int)&vftable_417;
    pRVar1[5].Name.Data = (char *)0x0;
    pRVar1[5].Name.Capacity = 0;
    pRVar1[5].Name.Length = 0;
    pRVar1[6]._pad_0x0_0 = (int)&vftable_417;
    pRVar1[6].Name.Data = (char *)0x0;
    pRVar1[6].Name.Capacity = 0;
    pRVar1[6].Name.Length = 0;
    pRVar1[7]._pad_0x0_0 = (int)&vftable_417;
    pRVar1[7].Name.Data = (char *)0x0;
    pRVar1[7].Name.Capacity = 0;
    pRVar1[7].Name.Length = 0;
    pRVar1[8]._pad_0x0_0 = (int)&vftable_417;
    pRVar1[8].Name.Data = (char *)0x0;
    pRVar1[8].Name.Capacity = 0;
    pRVar1[8].Name.Length = 0;
    pRVar1[9]._pad_0x0_0 = (int)&vftable_417;
    pRVar1[9].Name.Data = (char *)0x0;
    pRVar1[9].Name.Capacity = 0;
    pRVar1[9].Name.Length = 0;
    pRVar1[10]._pad_0x0_0 = (int)&vftable_417;
    pRVar1[10].Name.Data = (char *)0x0;
    pRVar1[10].Name.Capacity = 0;
    pRVar1[10].Name.Length = 0;
    pRVar1[0xb]._pad_0x0_0 = (int)&vftable_416;
    pRVar1[0xb].Name.Data = (char *)0x0;
    pRVar1[0xb].Name.Capacity = 0;
    pRVar1[0xb].Name.Length = 0;
    pRVar1[0xc]._pad_0x0_0 = (int)&vftable_416;
    pRVar1[0xc].Name.Data = (char *)0x0;
    pRVar1[0xc].Name.Capacity = 0;
    pRVar1[0xc].Name.Length = 0;
    memset((CutsceneMessage *)(pRVar1 + 0xd),0,0x2c);
    CutsceneMessage__CutsceneMessage((CutsceneMessage *)(pRVar1 + 0xd));
    *(undefined1 *)&pRVar1[0xf].Name.Length = 0;
    *(undefined1 *)&pRVar1[0x10]._pad_0x0_0 = 0;
  }
  return (Reflectable *)0x0;
}

//==== 00705580 StaticGetMember_00705580 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class util__Maybe_L_structutil__ClassMember_G_ const __cdecl
   CutsceneMessage__ReflectionInfoStruct_struct_CutsceneMessage___StaticGetMember(class
   util__Str_L_char_G_ const &) */

Str_L_char_G_ * __cdecl
CutsceneMessage__ReflectionInfoStruct_struct_CutsceneMessage___StaticGetMember__o2(Str_L_char_G_ *param_1)

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
        cde_l2_e7157912__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_e7157912__thread_safe_static_guard_0__),
      cde_l2_e7157912__thread_safe_static_guard_0__ == -1)) {
     cde_l2_6f1de54c_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_e7157912__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_6f1de54c_Count) {
    piVar7 = &DAT_0097f7e0;
    do {
      if ((*(int *)(iStack_c + 4) <
            cde_l2_deb41632__thread_safe_static_guard_0__) &&
         (_Init_thread_header(& cde_l2_deb41632__thread_safe_static_guard_0__),
          cde_l2_deb41632__thread_safe_static_guard_0__ == -1)) {
        util__Str_char___Str_char
                  ((Str_L_char_G_ *)
                   & cde_l2_cab4da66_StaticMembers,"DummyValue_DO_NOT_USE");
        DAT_0097f7dc = 0;
        DAT_0097f7e0 = 0;
        DAT_0097f7e4 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f7e8,"Unused");
        _DAT_0097f7f4 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f7f8,"Talker");
        _DAT_0097f804 = 8;
        _DAT_0097f808 = 0x10;
        _DAT_0097f80c = 4;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f810,"Speaker");
        _DAT_0097f81c = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f820,"Message");
        _DAT_0097f82c = 7;
        _DAT_0097f830 = 0x14;
        _DAT_0097f834 = 0x18;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f838,"LocStr");
        _DAT_0097f844 = 0;
        atexit( private__static_struct_util__ClassMember_const___cdecl_CutsceneMessage__ReflectionInfoStruct_struct_CutsceneMessage___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
        _Init_thread_footer(& cde_l2_deb41632__thread_safe_static_guard_0__);
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
LAB_00705652:
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
          if (cVar3 == '\0') goto LAB_00705652;
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
    } while (iVar6 <  cde_l2_6f1de54c_Count);
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





//==== 00705870 StaticGetMember_00705870 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class util__Maybe_L_structutil__ClassMember_G_ const __cdecl
   GlobalSaveValues__ReflectionInfoStruct_struct_GlobalSaveValues___StaticGetMember(class
   util__Str_L_char_G_ const &) */

Str_L_char_G_ * __cdecl
GlobalSaveValues__ReflectionInfoStruct_struct_GlobalSaveValues___StaticGetMember__o2(Str_L_char_G_ *param_1)

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
        cde_l2_e7b5df70__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_e7b5df70__thread_safe_static_guard_0__),
      cde_l2_e7b5df70__thread_safe_static_guard_0__ == -1)) {
     cde_l2_40169fa9_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_e7b5df70__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_40169fa9_Count) {
    piVar7 = &DAT_0097e490;
    do {
      if ((*(int *)(iStack_c + 4) <
            cde_l2_31dbbc9e__thread_safe_static_guard_0__) &&
         (_Init_thread_header(& cde_l2_31dbbc9e__thread_safe_static_guard_0__),
          cde_l2_31dbbc9e__thread_safe_static_guard_0__ == -1)) {
        util__Str_char___Str_char
                  ((Str_L_char_G_ *)
                   & cde_l2_7cf2651e_StaticMembers,"DummyValue_DO_NOT_USE");
        DAT_0097e48c = 0;
        DAT_0097e490 = 0;
        DAT_0097e494 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e498,"Unused");
        _DAT_0097e4a4 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e4a8,"AllNonLevelContentIsUnlocked");
        _DAT_0097e4b4 = 1;
        _DAT_0097e4b8 = 0x10;
        _DAT_0097e4bc = 1;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e4c0,"bool");
        _DAT_0097e4cc = 0;
        atexit( private__static_struct_util__ClassMember_const___cdecl_GlobalSaveValues__ReflectionInfoStruct_struct_GlobalSaveValues___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
        _Init_thread_footer(& cde_l2_31dbbc9e__thread_safe_static_guard_0__);
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
LAB_00705942:
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
          if (cVar3 == '\0') goto LAB_00705942;
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
    } while (iVar6 <  cde_l2_40169fa9_Count);
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





//==== 00705b20 StaticGetMemberByIndex_00705b20 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl Campaign__ReflectionInfoStruct_struct_Campaign___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
Campaign__ReflectionInfoStruct_struct_Campaign___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_7ef0479b__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_7ef0479b__thread_safe_static_guard_0__);
    if ( cde_l2_7ef0479b__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_962674c9_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0097e62c = 0;
      _DAT_0097e630 = 0;
      _DAT_0097e634 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e638,"Unused");
      _DAT_0097e644 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e648,"SteamWorkshopID");
      _DAT_0097e654 = 6;
      _DAT_0097e658 = 0x10;
      _DAT_0097e65c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e660,"AStr");
      _DAT_0097e66c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e670,"Description");
      _DAT_0097e67c = 6;
      _DAT_0097e680 = 0x20;
      _DAT_0097e684 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e688,"AStr");
      _DAT_0097e694 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e698,"MainMenuMusic");
      _DAT_0097e6a4 = 8;
      _DAT_0097e6a8 = 0x34;
      _DAT_0097e6ac = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e6b0,"SoundEffect");
      _DAT_0097e6bc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e6c0,"LevelOrder");
      _DAT_0097e6cc = 8;
      _DAT_0097e6d0 = 0x38;
      _DAT_0097e6d4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e6d8,"Level");
      _DAT_0097e6e4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e6e8,"EndingLevels");
      _DAT_0097e6f4 = 8;
      _DAT_0097e6f8 = 0x48;
      _DAT_0097e6fc = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e700,"Level");
      _DAT_0097e70c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e710,"SandboxLevel");
      _DAT_0097e71c = 8;
      _DAT_0097e720 = 0x58;
      _DAT_0097e724 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e728,"Level");
      _DAT_0097e734 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e738,"IsDefaultCampaign");
      _DAT_0097e744 = 1;
      _DAT_0097e748 = 0x5c;
      _DAT_0097e74c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e750,"bool");
      _DAT_0097e75c = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_Campaign__ReflectionInfoStruct_struct_Campaign___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_7ef0479b__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_962674c9_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_0097e62c + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_0097e630 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_0097e634 + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_0097e638 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0097e644)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0097e645)[iVar1];
  return __return_storage_ptr__;
}





//==== 00705df0 StaticGetMemberByIndex_00705df0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   CelestialLocation__ReflectionInfoStruct_struct_CelestialLocation___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
CelestialLocation__ReflectionInfoStruct_struct_CelestialLocation___StaticGetMemberByIndex__o2
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_89a25a1a__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_89a25a1a__thread_safe_static_guard_0__);
    if ( cde_l2_89a25a1a__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_df50fd5d_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0097eebc = 0;
      _DAT_0097eec0 = 0;
      _DAT_0097eec4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097eec8,"Unused");
      _DAT_0097eed4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097eed8,"MainBody");
      _DAT_0097eee4 = 8;
      _DAT_0097eee8 = 0x10;
      _DAT_0097eeec = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097eef0,"CelestialBody");
      _DAT_0097eefc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ef00,"ViewingBody");
      _DAT_0097ef0c = 8;
      _DAT_0097ef10 = 0x14;
      _DAT_0097ef14 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ef18,"CelestialBody");
      _DAT_0097ef24 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ef28,"FilteredBodies");
      _DAT_0097ef34 = 8;
      _DAT_0097ef38 = 0x18;
      _DAT_0097ef3c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ef40,"CelestialBody");
      _DAT_0097ef4c = 1;
      atexit( private__static_struct_util__ClassMember_const___cdecl_CelestialLocation__ReflectionInfoStruct_struct_CelestialLocation___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_89a25a1a__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_df50fd5d_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_0097eebc + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_0097eec0 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_0097eec4 + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_0097eec8 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0097eed4)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0097eed5)[iVar1];
  return __return_storage_ptr__;
}





//==== 00705fb0 StaticGetMemberByIndex_00705fb0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   CustomObjective__ReflectionInfoStruct_struct_CustomObjective___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
CustomObjective__ReflectionInfoStruct_struct_CustomObjective___StaticGetMemberByIndex__o2
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_862d862c__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_862d862c__thread_safe_static_guard_0__);
    if ( cde_l2_862d862c__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_5107484f_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0097f904 = 0;
      _DAT_0097f908 = 0;
      _DAT_0097f90c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f910,"Unused");
      _DAT_0097f91c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f920,"AllShipsWithFlagsHaveFuel");
      _DAT_0097f92c = 1;
      _DAT_0097f930 = 0x10;
      _DAT_0097f934 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f938,"bool");
      _DAT_0097f944 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f948,"OneFleetWithBothAStartAndEndFlag");
      _DAT_0097f954 = 1;
      _DAT_0097f958 = 0x11;
      _DAT_0097f95c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f960,"bool");
      _DAT_0097f96c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f970,"AllFlaggedEnemyShipsAreDisabled");
      _DAT_0097f97c = 1;
      _DAT_0097f980 = 0x12;
      _DAT_0097f984 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f988,"bool");
      _DAT_0097f994 = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_CustomObjective__ReflectionInfoStruct_struct_CustomObjective___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_862d862c__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_5107484f_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_0097f904 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_0097f908 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_0097f90c + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_0097f910 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0097f91c)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0097f91d)[iVar1];
  return __return_storage_ptr__;
}





//==== 00706170 StaticGetMemberByIndex_00706170 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl Level__ReflectionInfoStruct_struct_Level___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
Level__ReflectionInfoStruct_struct_Level___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_6e40d0ba__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_6e40d0ba__thread_safe_static_guard_0__);
    if ( cde_l2_6e40d0ba__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_48a2f3db_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0097eac4 = 0;
      _DAT_0097eac8 = 0;
      _DAT_0097eacc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ead0,"Unused");
      _DAT_0097eadc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097eae0,"Music");
      _DAT_0097eaec = 8;
      _DAT_0097eaf0 = 0x34;
      _DAT_0097eaf4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097eaf8,"SoundEffect");
      _DAT_0097eb04 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097eb08,"Date_JulianYears");
      _DAT_0097eb14 = 4;
      _DAT_0097eb18 = 0x38;
      _DAT_0097eb1c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097eb20,"double");
      _DAT_0097eb2c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097eb30,"TimeLimit_JulianDays");
      _DAT_0097eb3c = 4;
      _DAT_0097eb40 = 0x40;
      _DAT_0097eb44 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097eb48,"double");
      _DAT_0097eb54 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097eb58,"Description");
      _DAT_0097eb64 = 7;
      _DAT_0097eb68 = 0x48;
      _DAT_0097eb6c = 0x18;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097eb70,"LocStr");
      _DAT_0097eb7c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097eb80,"ShortDescription");
      _DAT_0097eb8c = 7;
      _DAT_0097eb90 = 0x60;
      _DAT_0097eb94 = 0x18;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097eb98,"LocStr");
      _DAT_0097eba4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097eba8,"PlayerAlliance");
      _DAT_0097ebb4 = 8;
      _DAT_0097ebb8 = 0x78;
      _DAT_0097ebbc = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ebc0,"Faction");
      _DAT_0097ebcc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ebd0,"AlliedAI");
      _DAT_0097ebdc = 8;
      _DAT_0097ebe0 = 0x7c;
      _DAT_0097ebe4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ebe8,"MilitaryDoctrine");
      _DAT_0097ebf4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ebf8,"EnemyAlliance");
      _DAT_0097ec04 = 8;
      _DAT_0097ec08 = 0x80;
      _DAT_0097ec0c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ec10,"Faction");
      _DAT_0097ec1c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ec20,"AI");
      _DAT_0097ec2c = 8;
      _DAT_0097ec30 = 0x84;
      _DAT_0097ec34 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ec38,"MilitaryDoctrine");
      _DAT_0097ec44 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ec48,"AdditionalAlliances");
      _DAT_0097ec54 = 8;
      _DAT_0097ec58 = 0x88;
      _DAT_0097ec5c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ec60,"Faction");
      _DAT_0097ec6c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ec70,"IsADefendLevel");
      _DAT_0097ec7c = 1;
      _DAT_0097ec80 = 0x98;
      _DAT_0097ec84 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ec88,"bool");
      _DAT_0097ec94 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ec98,"InstantCombat");
      _DAT_0097eca4 = 1;
      _DAT_0097eca8 = 0x99;
      _DAT_0097ecac = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ecb0,"bool");
      _DAT_0097ecbc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ecc0,"VictoryCondition");
      _DAT_0097eccc = 10;
      _DAT_0097ecd0 = 0x9c;
      _DAT_0097ecd4 = 0x14;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ecd8,"CustomObjective");
      _DAT_0097ece4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ece8,"BriefingSubject__RecommendedReading");
      _DAT_0097ecf4 = 8;
      _DAT_0097ecf8 = 0xb4;
      _DAT_0097ecfc = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ed00,"Concept");
      _DAT_0097ed0c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ed10,"Badges");
      _DAT_0097ed1c = 10;
      _DAT_0097ed20 = 0xc4;
      _DAT_0097ed24 = 0x1c;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ed28,"LevelBadges");
      _DAT_0097ed34 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ed38,"Messages");
      _DAT_0097ed44 = 10;
      _DAT_0097ed48 = 0xe0;
      _DAT_0097ed4c = 0x104;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ed50,"LevelMessages");
      _DAT_0097ed5c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ed60,"PreventDisablingHelp");
      _DAT_0097ed6c = 1;
      _DAT_0097ed70 = 0x1e4;
      _DAT_0097ed74 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ed78,"bool");
      _DAT_0097ed84 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ed88,"Location");
      _DAT_0097ed94 = 10;
      _DAT_0097ed98 = 0x1e8;
      _DAT_0097ed9c = 0x28;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097eda0,"CelestialLocation");
      _DAT_0097edac = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097edb0,"Fleets");
      _DAT_0097edbc = 0xb;
      _DAT_0097edc0 = 0x210;
      _DAT_0097edc4 = 0x14;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097edc8,"StartingFleet");
      _DAT_0097edd4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097edd8,"UnlockModuleDesign");
      _DAT_0097ede4 = 1;
      _DAT_0097ede8 = 0x220;
      _DAT_0097edec = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097edf0,"bool");
      _DAT_0097edfc = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_Level__ReflectionInfoStruct_struct_Level___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_6e40d0ba__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_48a2f3db_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_0097eac4 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_0097eac8 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_0097eacc + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_0097ead0 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0097eadc)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0097eadd)[iVar1];
  return __return_storage_ptr__;
}





//==== 007067c0 StaticGetMemberByIndex_007067c0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl LevelBadges__ReflectionInfoStruct_struct_LevelBadges___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
LevelBadges__ReflectionInfoStruct_struct_LevelBadges___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_9870da10__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_9870da10__thread_safe_static_guard_0__);
    if ( cde_l2_9870da10__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_fbb0d12f_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0097f0fc = 0;
      _DAT_0097f100 = 0;
      _DAT_0097f104 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f108,"Unused");
      _DAT_0097f114 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f118,"TightDeltaVBudget");
      _DAT_0097f124 = 1;
      _DAT_0097f128 = 0x10;
      _DAT_0097f12c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f130,"bool");
      _DAT_0097f13c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f140,"HighGravitation");
      _DAT_0097f14c = 1;
      _DAT_0097f150 = 0x11;
      _DAT_0097f154 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f158,"bool");
      _DAT_0097f164 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f168,"OutOfPlaneManeuvering");
      _DAT_0097f174 = 1;
      _DAT_0097f178 = 0x12;
      _DAT_0097f17c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f180,"bool");
      _DAT_0097f18c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f190,"RetrogradeManeuvering");
      _DAT_0097f19c = 1;
      _DAT_0097f1a0 = 0x13;
      _DAT_0097f1a4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f1a8,"bool");
      _DAT_0097f1b4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f1b8,"TightTimeLimits");
      _DAT_0097f1c4 = 1;
      _DAT_0097f1c8 = 0x14;
      _DAT_0097f1cc = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f1d0,"bool");
      _DAT_0097f1dc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f1e0,"TransferOrbits");
      _DAT_0097f1ec = 1;
      _DAT_0097f1f0 = 0x15;
      _DAT_0097f1f4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f1f8,"bool");
      _DAT_0097f204 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f208,"FleetCombat");
      _DAT_0097f214 = 1;
      _DAT_0097f218 = 0x16;
      _DAT_0097f21c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f220,"bool");
      _DAT_0097f22c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f230,"AggressiveEnemies");
      _DAT_0097f23c = 1;
      _DAT_0097f240 = 0x17;
      _DAT_0097f244 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f248,"bool");
      _DAT_0097f254 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f258,"PrecisionCombat");
      _DAT_0097f264 = 1;
      _DAT_0097f268 = 0x18;
      _DAT_0097f26c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f270,"bool");
      _DAT_0097f27c = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_LevelBadges__ReflectionInfoStruct_struct_LevelBadges___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_9870da10__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_fbb0d12f_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_0097f0fc + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_0097f100 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_0097f104 + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_0097f108 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0097f114)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0097f115)[iVar1];
  return __return_storage_ptr__;
}





//==== 00706b10 StaticGetMemberByIndex_00706b10 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl LevelMessages__ReflectionInfoStruct_struct_LevelMessages___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
LevelMessages__ReflectionInfoStruct_struct_LevelMessages___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_8c9bdcbc__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_8c9bdcbc__thread_safe_static_guard_0__);
    if ( cde_l2_8c9bdcbc__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_a6b42484_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0097f4fc = 0;
      _DAT_0097f500 = 0;
      _DAT_0097f504 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f508,"Unused");
      _DAT_0097f514 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f518,"Starting");
      _DAT_0097f524 = 0xb;
      _DAT_0097f528 = 0x10;
      _DAT_0097f52c = 0x1c;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f530,"LevelSpeakerMessage");
      _DAT_0097f53c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f540,"StartingTutorial");
      _DAT_0097f54c = 0xb;
      _DAT_0097f550 = 0x20;
      _DAT_0097f554 = 0x28;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f558,"LevelTutorialMessage");
      _DAT_0097f564 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f568,"NewTrajectoryTutorial");
      _DAT_0097f574 = 0xb;
      _DAT_0097f578 = 0x30;
      _DAT_0097f57c = 0x28;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f580,"LevelTutorialMessage");
      _DAT_0097f58c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f590,"EnterCombat");
      _DAT_0097f59c = 0xb;
      _DAT_0097f5a0 = 0x40;
      _DAT_0097f5a4 = 0x1c;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f5a8,"LevelSpeakerMessage");
      _DAT_0097f5b4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f5b8,"EnterCombatTutorial");
      _DAT_0097f5c4 = 0xb;
      _DAT_0097f5c8 = 0x50;
      _DAT_0097f5cc = 0x28;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f5d0,"LevelTutorialMessage");
      _DAT_0097f5dc = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f5e0,"GotIntoRangeTutorial");
      _DAT_0097f5ec = 0xb;
      _DAT_0097f5f0 = 0x60;
      _DAT_0097f5f4 = 0x28;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f5f8,"LevelTutorialMessage");
      _DAT_0097f604 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f608,"EnemiesDamagedTutorial");
      _DAT_0097f614 = 0xb;
      _DAT_0097f618 = 0x70;
      _DAT_0097f61c = 0x28;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f620,"LevelTutorialMessage");
      _DAT_0097f62c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f630,"AlliesDamagedTutorial");
      _DAT_0097f63c = 0xb;
      _DAT_0097f640 = 0x80;
      _DAT_0097f644 = 0x28;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f648,"LevelTutorialMessage");
      _DAT_0097f654 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f658,"EnemiesLostModuleTutorial");
      _DAT_0097f664 = 0xb;
      _DAT_0097f668 = 0x90;
      _DAT_0097f66c = 0x28;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f670,"LevelTutorialMessage");
      _DAT_0097f67c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f680,"AlliesLostModuleTutorial");
      _DAT_0097f68c = 0xb;
      _DAT_0097f690 = 0xa0;
      _DAT_0097f694 = 0x28;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f698,"LevelTutorialMessage");
      _DAT_0097f6a4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f6a8,"MissionFailure");
      _DAT_0097f6b4 = 0xb;
      _DAT_0097f6b8 = 0xb0;
      _DAT_0097f6bc = 0x1c;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f6c0,"LevelSpeakerMessage");
      _DAT_0097f6cc = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f6d0,"MissionSuccess");
      _DAT_0097f6dc = 0xb;
      _DAT_0097f6e0 = 0xc0;
      _DAT_0097f6e4 = 0x1c;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f6e8,"LevelSpeakerMessage");
      _DAT_0097f6f4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f6f8,"StartingCutscene");
      _DAT_0097f704 = 10;
      _DAT_0097f708 = 0xd0;
      _DAT_0097f70c = 0x2c;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f710,"CutsceneMessage");
      _DAT_0097f71c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f720,"PauseCombatForTutorialMessages");
      _DAT_0097f72c = 1;
      _DAT_0097f730 = 0x100;
      _DAT_0097f734 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f738,"bool");
      _DAT_0097f744 = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_LevelMessages__ReflectionInfoStruct_struct_LevelMessages___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_8c9bdcbc__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_a6b42484_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_0097f4fc + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_0097f500 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_0097f504 + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_0097f508 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0097f514)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0097f515)[iVar1];
  return __return_storage_ptr__;
}





//==== 00706fd0 StaticGetMemberCount_00706fd0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl Campaign__ReflectionInfoStruct_struct_Campaign___StaticGetMemberCount(void) */

int __cdecl Campaign__ReflectionInfoStruct_struct_Campaign___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_cc8c50de__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_cc8c50de__thread_safe_static_guard_0__);
    if ( cde_l2_cc8c50de__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_71b6df07_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0097e4e4 = 0;
      _DAT_0097e4e8 = 0;
      _DAT_0097e4ec = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e4f0,"Unused");
      _DAT_0097e4fc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e500,"SteamWorkshopID");
      _DAT_0097e50c = 6;
      _DAT_0097e510 = 0x10;
      _DAT_0097e514 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e518,"AStr");
      _DAT_0097e524 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e528,"Description");
      _DAT_0097e534 = 6;
      _DAT_0097e538 = 0x20;
      _DAT_0097e53c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e540,"AStr");
      _DAT_0097e54c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e550,"MainMenuMusic");
      _DAT_0097e55c = 8;
      _DAT_0097e560 = 0x34;
      _DAT_0097e564 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e568,"SoundEffect");
      _DAT_0097e574 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e578,"LevelOrder");
      _DAT_0097e584 = 8;
      _DAT_0097e588 = 0x38;
      _DAT_0097e58c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e590,"Level");
      _DAT_0097e59c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e5a0,"EndingLevels");
      _DAT_0097e5ac = 8;
      _DAT_0097e5b0 = 0x48;
      _DAT_0097e5b4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e5b8,"Level");
      _DAT_0097e5c4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e5c8,"SandboxLevel");
      _DAT_0097e5d4 = 8;
      _DAT_0097e5d8 = 0x58;
      _DAT_0097e5dc = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e5e0,"Level");
      _DAT_0097e5ec = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e5f0,"IsDefaultCampaign");
      _DAT_0097e5fc = 1;
      _DAT_0097e600 = 0x5c;
      _DAT_0097e604 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e608,"bool");
      _DAT_0097e614 = 0;
      atexit( private__static_int_const___cdecl_Campaign__ReflectionInfoStruct_struct_Campaign___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_cc8c50de__thread_safe_static_guard_0__);
    }
  }
  return 8;
}





//==== 00707250 StaticGetMemberCount_00707250 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl CelestialLocation__ReflectionInfoStruct_struct_CelestialLocation___StaticGetMemberCount(void) */

int __cdecl
CelestialLocation__ReflectionInfoStruct_struct_CelestialLocation___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_6485eb94__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_6485eb94__thread_safe_static_guard_0__);
    if ( cde_l2_6485eb94__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_2ee8ee55_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0097ee14 = 0;
      _DAT_0097ee18 = 0;
      _DAT_0097ee1c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ee20,"Unused");
      _DAT_0097ee2c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ee30,"MainBody");
      _DAT_0097ee3c = 8;
      _DAT_0097ee40 = 0x10;
      _DAT_0097ee44 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ee48,"CelestialBody");
      _DAT_0097ee54 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ee58,"ViewingBody");
      _DAT_0097ee64 = 8;
      _DAT_0097ee68 = 0x14;
      _DAT_0097ee6c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ee70,"CelestialBody");
      _DAT_0097ee7c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ee80,"FilteredBodies");
      _DAT_0097ee8c = 8;
      _DAT_0097ee90 = 0x18;
      _DAT_0097ee94 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ee98,"CelestialBody");
      _DAT_0097eea4 = 1;
      atexit( private__static_int_const___cdecl_CelestialLocation__ReflectionInfoStruct_struct_CelestialLocation___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_6485eb94__thread_safe_static_guard_0__);
    }
  }
  return 4;
}





//==== 007073c0 StaticGetMemberCount_007073c0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl CustomObjective__ReflectionInfoStruct_struct_CustomObjective___StaticGetMemberCount(void) */

int __cdecl
CustomObjective__ReflectionInfoStruct_struct_CustomObjective___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_9555734f__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_9555734f__thread_safe_static_guard_0__);
    if ( cde_l2_9555734f__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_3c06d42c_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0097f85c = 0;
      _DAT_0097f860 = 0;
      _DAT_0097f864 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f868,"Unused");
      _DAT_0097f874 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f878,"AllShipsWithFlagsHaveFuel");
      _DAT_0097f884 = 1;
      _DAT_0097f888 = 0x10;
      _DAT_0097f88c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f890,"bool");
      _DAT_0097f89c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f8a0,"OneFleetWithBothAStartAndEndFlag");
      _DAT_0097f8ac = 1;
      _DAT_0097f8b0 = 0x11;
      _DAT_0097f8b4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f8b8,"bool");
      _DAT_0097f8c4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f8c8,"AllFlaggedEnemyShipsAreDisabled");
      _DAT_0097f8d4 = 1;
      _DAT_0097f8d8 = 0x12;
      _DAT_0097f8dc = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f8e0,"bool");
      _DAT_0097f8ec = 0;
      atexit( private__static_int_const___cdecl_CustomObjective__ReflectionInfoStruct_struct_CustomObjective___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_9555734f__thread_safe_static_guard_0__);
    }
  }
  return 4;
}





//==== 00707530 StaticGetMemberCount_00707530 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl CutsceneMessage__ReflectionInfoStruct_struct_CutsceneMessage___StaticGetMemberCount(void) */

int __cdecl
CutsceneMessage__ReflectionInfoStruct_struct_CutsceneMessage___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_b7c45d4c__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_b7c45d4c__thread_safe_static_guard_0__);
    if ( cde_l2_b7c45d4c__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_92c18cee_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0097f75c = 0;
      _DAT_0097f760 = 0;
      _DAT_0097f764 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f768,"Unused");
      _DAT_0097f774 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f778,"Talker");
      _DAT_0097f784 = 8;
      _DAT_0097f788 = 0x10;
      _DAT_0097f78c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f790,"Speaker");
      _DAT_0097f79c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f7a0,"Message");
      _DAT_0097f7ac = 7;
      _DAT_0097f7b0 = 0x14;
      _DAT_0097f7b4 = 0x18;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f7b8,"LocStr");
      _DAT_0097f7c4 = 0;
      atexit( private__static_int_const___cdecl_CutsceneMessage__ReflectionInfoStruct_struct_CutsceneMessage___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_b7c45d4c__thread_safe_static_guard_0__);
    }
  }
  return 3;
}





//==== 00707660 StaticGetMemberCount_00707660 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl GlobalSaveValues__ReflectionInfoStruct_struct_GlobalSaveValues___StaticGetMemberCount(void) */

int __cdecl
GlobalSaveValues__ReflectionInfoStruct_struct_GlobalSaveValues___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_cc521f6c__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_cc521f6c__thread_safe_static_guard_0__);
    if ( cde_l2_cc521f6c__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_81f04500_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0097e434 = 0;
      _DAT_0097e438 = 0;
      _DAT_0097e43c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e440,"Unused");
      _DAT_0097e44c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e450,"AllNonLevelContentIsUnlocked");
      _DAT_0097e45c = 1;
      _DAT_0097e460 = 0x10;
      _DAT_0097e464 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e468,"bool");
      _DAT_0097e474 = 0;
      atexit( private__static_int_const___cdecl_GlobalSaveValues__ReflectionInfoStruct_struct_GlobalSaveValues___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_cc521f6c__thread_safe_static_guard_0__);
    }
  }
  return 2;
}





//==== 00707740 StaticGetMemberCount_00707740 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl Level__ReflectionInfoStruct_struct_Level___StaticGetMemberCount(void) */

int __cdecl Level__ReflectionInfoStruct_struct_Level___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_86c74de1__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_86c74de1__thread_safe_static_guard_0__);
    if ( cde_l2_86c74de1__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_e0172ef9_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0097e774 = 0;
      _DAT_0097e778 = 0;
      _DAT_0097e77c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e780,"Unused");
      _DAT_0097e78c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e790,"Music");
      _DAT_0097e79c = 8;
      _DAT_0097e7a0 = 0x34;
      _DAT_0097e7a4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e7a8,"SoundEffect");
      _DAT_0097e7b4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e7b8,"Date_JulianYears");
      _DAT_0097e7c4 = 4;
      _DAT_0097e7c8 = 0x38;
      _DAT_0097e7cc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e7d0,"double");
      _DAT_0097e7dc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e7e0,"TimeLimit_JulianDays");
      _DAT_0097e7ec = 4;
      _DAT_0097e7f0 = 0x40;
      _DAT_0097e7f4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e7f8,"double");
      _DAT_0097e804 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e808,"Description");
      _DAT_0097e814 = 7;
      _DAT_0097e818 = 0x48;
      _DAT_0097e81c = 0x18;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e820,"LocStr");
      _DAT_0097e82c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e830,"ShortDescription");
      _DAT_0097e83c = 7;
      _DAT_0097e840 = 0x60;
      _DAT_0097e844 = 0x18;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e848,"LocStr");
      _DAT_0097e854 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e858,"PlayerAlliance");
      _DAT_0097e864 = 8;
      _DAT_0097e868 = 0x78;
      _DAT_0097e86c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e870,"Faction");
      _DAT_0097e87c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e880,"AlliedAI");
      _DAT_0097e88c = 8;
      _DAT_0097e890 = 0x7c;
      _DAT_0097e894 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e898,"MilitaryDoctrine");
      _DAT_0097e8a4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e8a8,"EnemyAlliance");
      _DAT_0097e8b4 = 8;
      _DAT_0097e8b8 = 0x80;
      _DAT_0097e8bc = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e8c0,"Faction");
      _DAT_0097e8cc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e8d0,"AI");
      _DAT_0097e8dc = 8;
      _DAT_0097e8e0 = 0x84;
      _DAT_0097e8e4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e8e8,"MilitaryDoctrine");
      _DAT_0097e8f4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e8f8,"AdditionalAlliances");
      _DAT_0097e904 = 8;
      _DAT_0097e908 = 0x88;
      _DAT_0097e90c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e910,"Faction");
      _DAT_0097e91c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e920,"IsADefendLevel");
      _DAT_0097e92c = 1;
      _DAT_0097e930 = 0x98;
      _DAT_0097e934 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e938,"bool");
      _DAT_0097e944 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e948,"InstantCombat");
      _DAT_0097e954 = 1;
      _DAT_0097e958 = 0x99;
      _DAT_0097e95c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e960,"bool");
      _DAT_0097e96c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e970,"VictoryCondition");
      _DAT_0097e97c = 10;
      _DAT_0097e980 = 0x9c;
      _DAT_0097e984 = 0x14;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e988,"CustomObjective");
      _DAT_0097e994 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e998,"BriefingSubject__RecommendedReading");
      _DAT_0097e9a4 = 8;
      _DAT_0097e9a8 = 0xb4;
      _DAT_0097e9ac = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e9b0,"Concept");
      _DAT_0097e9bc = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e9c0,"Badges");
      _DAT_0097e9cc = 10;
      _DAT_0097e9d0 = 0xc4;
      _DAT_0097e9d4 = 0x1c;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e9d8,"LevelBadges");
      _DAT_0097e9e4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e9e8,"Messages");
      _DAT_0097e9f4 = 10;
      _DAT_0097e9f8 = 0xe0;
      _DAT_0097e9fc = 0x104;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ea00,"LevelMessages");
      _DAT_0097ea0c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ea10,"PreventDisablingHelp");
      _DAT_0097ea1c = 1;
      _DAT_0097ea20 = 0x1e4;
      _DAT_0097ea24 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ea28,"bool");
      _DAT_0097ea34 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ea38,"Location");
      _DAT_0097ea44 = 10;
      _DAT_0097ea48 = 0x1e8;
      _DAT_0097ea4c = 0x28;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ea50,"CelestialLocation");
      _DAT_0097ea5c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ea60,"Fleets");
      _DAT_0097ea6c = 0xb;
      _DAT_0097ea70 = 0x210;
      _DAT_0097ea74 = 0x14;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ea78,"StartingFleet");
      _DAT_0097ea84 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ea88,"UnlockModuleDesign");
      _DAT_0097ea94 = 1;
      _DAT_0097ea98 = 0x220;
      _DAT_0097ea9c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097eaa0,"bool");
      _DAT_0097eaac = 0;
      atexit( private__static_int_const___cdecl_Level__ReflectionInfoStruct_struct_Level___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_86c74de1__thread_safe_static_guard_0__);
    }
  }
  return 0x15;
}





//==== 00707d40 StaticGetMemberCount_00707d40 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl LevelBadges__ReflectionInfoStruct_struct_LevelBadges___StaticGetMemberCount(void) */

int __cdecl LevelBadges__ReflectionInfoStruct_struct_LevelBadges___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_4da79772__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_4da79772__thread_safe_static_guard_0__);
    if ( cde_l2_4da79772__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_39c797d3_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0097ef64 = 0;
      _DAT_0097ef68 = 0;
      _DAT_0097ef6c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ef70,"Unused");
      _DAT_0097ef7c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ef80,"TightDeltaVBudget");
      _DAT_0097ef8c = 1;
      _DAT_0097ef90 = 0x10;
      _DAT_0097ef94 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097ef98,"bool");
      _DAT_0097efa4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097efa8,"HighGravitation");
      _DAT_0097efb4 = 1;
      _DAT_0097efb8 = 0x11;
      _DAT_0097efbc = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097efc0,"bool");
      _DAT_0097efcc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097efd0,"OutOfPlaneManeuvering");
      _DAT_0097efdc = 1;
      _DAT_0097efe0 = 0x12;
      _DAT_0097efe4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097efe8,"bool");
      _DAT_0097eff4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097eff8,"RetrogradeManeuvering");
      _DAT_0097f004 = 1;
      _DAT_0097f008 = 0x13;
      _DAT_0097f00c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f010,"bool");
      _DAT_0097f01c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f020,"TightTimeLimits");
      _DAT_0097f02c = 1;
      _DAT_0097f030 = 0x14;
      _DAT_0097f034 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f038,"bool");
      _DAT_0097f044 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f048,"TransferOrbits");
      _DAT_0097f054 = 1;
      _DAT_0097f058 = 0x15;
      _DAT_0097f05c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f060,"bool");
      _DAT_0097f06c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f070,"FleetCombat");
      _DAT_0097f07c = 1;
      _DAT_0097f080 = 0x16;
      _DAT_0097f084 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f088,"bool");
      _DAT_0097f094 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f098,"AggressiveEnemies");
      _DAT_0097f0a4 = 1;
      _DAT_0097f0a8 = 0x17;
      _DAT_0097f0ac = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f0b0,"bool");
      _DAT_0097f0bc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f0c0,"PrecisionCombat");
      _DAT_0097f0cc = 1;
      _DAT_0097f0d0 = 0x18;
      _DAT_0097f0d4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f0d8,"bool");
      _DAT_0097f0e4 = 0;
      atexit( private__static_int_const___cdecl_LevelBadges__ReflectionInfoStruct_struct_LevelBadges___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_4da79772__thread_safe_static_guard_0__);
    }
  }
  return 10;
}





//==== 00708050 StaticGetMemberCount_00708050 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl LevelMessages__ReflectionInfoStruct_struct_LevelMessages___StaticGetMemberCount(void) */

int __cdecl LevelMessages__ReflectionInfoStruct_struct_LevelMessages___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_a508ecef__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_a508ecef__thread_safe_static_guard_0__);
    if ( cde_l2_a508ecef__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_dd38c976_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0097f29c = 0;
      _DAT_0097f2a0 = 0;
      _DAT_0097f2a4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f2a8,"Unused");
      _DAT_0097f2b4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f2b8,"Starting");
      _DAT_0097f2c4 = 0xb;
      _DAT_0097f2c8 = 0x10;
      _DAT_0097f2cc = 0x1c;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f2d0,"LevelSpeakerMessage");
      _DAT_0097f2dc = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f2e0,"StartingTutorial");
      _DAT_0097f2ec = 0xb;
      _DAT_0097f2f0 = 0x20;
      _DAT_0097f2f4 = 0x28;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f2f8,"LevelTutorialMessage");
      _DAT_0097f304 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f308,"NewTrajectoryTutorial");
      _DAT_0097f314 = 0xb;
      _DAT_0097f318 = 0x30;
      _DAT_0097f31c = 0x28;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f320,"LevelTutorialMessage");
      _DAT_0097f32c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f330,"EnterCombat");
      _DAT_0097f33c = 0xb;
      _DAT_0097f340 = 0x40;
      _DAT_0097f344 = 0x1c;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f348,"LevelSpeakerMessage");
      _DAT_0097f354 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f358,"EnterCombatTutorial");
      _DAT_0097f364 = 0xb;
      _DAT_0097f368 = 0x50;
      _DAT_0097f36c = 0x28;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f370,"LevelTutorialMessage");
      _DAT_0097f37c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f380,"GotIntoRangeTutorial");
      _DAT_0097f38c = 0xb;
      _DAT_0097f390 = 0x60;
      _DAT_0097f394 = 0x28;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f398,"LevelTutorialMessage");
      _DAT_0097f3a4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f3a8,"EnemiesDamagedTutorial");
      _DAT_0097f3b4 = 0xb;
      _DAT_0097f3b8 = 0x70;
      _DAT_0097f3bc = 0x28;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f3c0,"LevelTutorialMessage");
      _DAT_0097f3cc = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f3d0,"AlliesDamagedTutorial");
      _DAT_0097f3dc = 0xb;
      _DAT_0097f3e0 = 0x80;
      _DAT_0097f3e4 = 0x28;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f3e8,"LevelTutorialMessage");
      _DAT_0097f3f4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f3f8,"EnemiesLostModuleTutorial");
      _DAT_0097f404 = 0xb;
      _DAT_0097f408 = 0x90;
      _DAT_0097f40c = 0x28;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f410,"LevelTutorialMessage");
      _DAT_0097f41c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f420,"AlliesLostModuleTutorial");
      _DAT_0097f42c = 0xb;
      _DAT_0097f430 = 0xa0;
      _DAT_0097f434 = 0x28;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f438,"LevelTutorialMessage");
      _DAT_0097f444 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f448,"MissionFailure");
      _DAT_0097f454 = 0xb;
      _DAT_0097f458 = 0xb0;
      _DAT_0097f45c = 0x1c;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f460,"LevelSpeakerMessage");
      _DAT_0097f46c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f470,"MissionSuccess");
      _DAT_0097f47c = 0xb;
      _DAT_0097f480 = 0xc0;
      _DAT_0097f484 = 0x1c;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f488,"LevelSpeakerMessage");
      _DAT_0097f494 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f498,"StartingCutscene");
      _DAT_0097f4a4 = 10;
      _DAT_0097f4a8 = 0xd0;
      _DAT_0097f4ac = 0x2c;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f4b0,"CutsceneMessage");
      _DAT_0097f4bc = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f4c0,"PauseCombatForTutorialMessages");
      _DAT_0097f4cc = 1;
      _DAT_0097f4d0 = 0x100;
      _DAT_0097f4d4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f4d8,"bool");
      _DAT_0097f4e4 = 0;
      atexit( private__static_int_const___cdecl_LevelMessages__ReflectionInfoStruct_struct_LevelMessages___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_a508ecef__thread_safe_static_guard_0__);
    }
  }
  return 0xf;
}





//==== 007084b0 StaticGetMembers_007084b0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class util__Darray_L_structutil__ClassMember_G_ const __cdecl
   CutsceneMessage__ReflectionInfoStruct_struct_CutsceneMessage___StaticGetMembers(void) */

Darray_L_struct_util__ClassMember_G_ * __cdecl
CutsceneMessage__ReflectionInfoStruct_struct_CutsceneMessage___StaticGetMembers__o2(void)

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
        cde_l2_58a9fb64__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_58a9fb64__thread_safe_static_guard_0__),
      cde_l2_58a9fb64__thread_safe_static_guard_0__ == -1)) {
     cde_l2_77592b23_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_58a9fb64__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_77592b23_Count);
  iVar3 = 0;
  if (0 <  cde_l2_77592b23_Count) {
    puVar4 = &DAT_0097f7e0;
    do {
      if ((*(int *)(iStack_c + 4) <
            cde_l2_deb41632__thread_safe_static_guard_0__) &&
         (_Init_thread_header(& cde_l2_deb41632__thread_safe_static_guard_0__),
          cde_l2_deb41632__thread_safe_static_guard_0__ == -1)) {
        util__Str_char___Str_char
                  ((Str_L_char_G_ *)
                   & cde_l2_cab4da66_StaticMembers,"DummyValue_DO_NOT_USE");
        DAT_0097f7dc = 0;
        DAT_0097f7e0 = 0;
        DAT_0097f7e4 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f7e8,"Unused");
        _DAT_0097f7f4 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f7f8,"Talker");
        _DAT_0097f804 = 8;
        _DAT_0097f808 = 0x10;
        _DAT_0097f80c = 4;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f810,"Speaker");
        _DAT_0097f81c = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f820,"Message");
        _DAT_0097f82c = 7;
        _DAT_0097f830 = 0x14;
        _DAT_0097f834 = 0x18;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097f838,"LocStr");
        _DAT_0097f844 = 0;
        atexit( private__static_struct_util__ClassMember_const___cdecl_CutsceneMessage__ReflectionInfoStruct_struct_CutsceneMessage___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
        _Init_thread_footer(& cde_l2_deb41632__thread_safe_static_guard_0__);
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
    } while (iVar3 <  cde_l2_77592b23_Count);
  }
  return in_stack_00000004;
}





//==== 00708740 StaticGetMembers_00708740 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class util__Darray_L_structutil__ClassMember_G_ const __cdecl
   GlobalSaveValues__ReflectionInfoStruct_struct_GlobalSaveValues___StaticGetMembers(void) */

Darray_L_struct_util__ClassMember_G_ * __cdecl
GlobalSaveValues__ReflectionInfoStruct_struct_GlobalSaveValues___StaticGetMembers__o2(void)

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
        cde_l2_37cfbd85__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_37cfbd85__thread_safe_static_guard_0__),
      cde_l2_37cfbd85__thread_safe_static_guard_0__ == -1)) {
     cde_l2_9d16e177_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_37cfbd85__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_9d16e177_Count);
  iVar3 = 0;
  if (0 <  cde_l2_9d16e177_Count) {
    puVar4 = &DAT_0097e490;
    do {
      if ((*(int *)(iStack_c + 4) <
            cde_l2_31dbbc9e__thread_safe_static_guard_0__) &&
         (_Init_thread_header(& cde_l2_31dbbc9e__thread_safe_static_guard_0__),
          cde_l2_31dbbc9e__thread_safe_static_guard_0__ == -1)) {
        util__Str_char___Str_char
                  ((Str_L_char_G_ *)
                   & cde_l2_7cf2651e_StaticMembers,"DummyValue_DO_NOT_USE");
        DAT_0097e48c = 0;
        DAT_0097e490 = 0;
        DAT_0097e494 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e498,"Unused");
        _DAT_0097e4a4 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e4a8,"AllNonLevelContentIsUnlocked");
        _DAT_0097e4b4 = 1;
        _DAT_0097e4b8 = 0x10;
        _DAT_0097e4bc = 1;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0097e4c0,"bool");
        _DAT_0097e4cc = 0;
        atexit( private__static_struct_util__ClassMember_const___cdecl_GlobalSaveValues__ReflectionInfoStruct_struct_GlobalSaveValues___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
        _Init_thread_footer(& cde_l2_31dbbc9e__thread_safe_static_guard_0__);
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
    } while (iVar3 <  cde_l2_9d16e177_Count);
  }
  return in_stack_00000004;
}





//==== 00708990 StaticGetMembers_00708990 ====


/* public: static class util__Darray_L_structutil__ClassMember_G_ const __cdecl
   LevelRecord__ReflectionInfoStruct_struct_LevelRecord___StaticGetMembers(void) */

Darray_L_struct_util__ClassMember_G_ * __cdecl
LevelRecord__ReflectionInfoStruct_struct_LevelRecord___StaticGetMembers__o2(void)

{
  int iVar1;
  bool bVar2;
  ClassMember *pCVar3;
  int iVar4;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_30;
  int iStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_ab203267__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_ab203267__thread_safe_static_guard_0__),
      cde_l2_ab203267__thread_safe_static_guard_0__ == -1)) {
     cde_l2_f52cbc27_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_ab203267__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_f52cbc27_Count);
  iVar4 = 0;
  if (0 <  cde_l2_f52cbc27_Count) {
    do {
      pCVar3 = (ClassMember *)(uintptr_t)(StaticGetMemberByIndex(&CStack_30,iVar4));
      iVar1 = *(int *)(in_stack_00000004 + 8);
      iStack_8 = iVar1 + 1;
      util__Darray_struct_util__ClassMember___SetSize(in_stack_00000004,&iStack_8);
      bVar2 = util__Darray_struct_util__ClassMember___CheckSize(in_stack_00000004,iVar1);
      if (bVar2) {
        iVar1 = *(int *)(in_stack_00000004 + 4) + *(int *)(in_stack_00000004 + 8) * 0x28;
        util__Str_char___operator__o8((Str_L_char_G_ *)(iVar1 + -0x28),&pCVar3->Name);
        *(undefined4 *)(iVar1 + -0x1c) = *(undefined4 *)&pCVar3->Type;
        *(uint *)(iVar1 + -0x18) = pCVar3->Offset;
        *(uint *)(iVar1 + -0x14) = pCVar3->Size;
        util__Str_char___operator__o8((Str_L_char_G_ *)(iVar1 + -0x10),&pCVar3->AdditionalType);
        *(bool *)(iVar1 + -4) = pCVar3->IsArray;
        *(bool *)(iVar1 + -3) = pCVar3->IsMaybe;
      }
      if (CStack_30.AdditionalType.Data != (char *)0x0) {
        port_op_delete(CStack_30.AdditionalType.Data);
        CStack_30.AdditionalType.Data = (char *)0x0;
      }
      if (CStack_30.Name.Data != (char *)0x0) {
        port_op_delete(CStack_30.Name.Data);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 <  cde_l2_f52cbc27_Count);
  }
  return in_stack_00000004;
}





//==== 00708ad0 StaticGetReflectionInfo_00708ad0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct Campaign__ReflectionInfoStruct_L_structCampaign_G_ * __cdecl
   Campaign__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_struct_Campaign_G_ * __cdecl Campaign__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_a43b675d__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_a43b675d__thread_safe_static_guard_0__);
    if ( cde_l2_a43b675d__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_850eb621_ReflectionInfo) = &vftable_412;
      _Init_thread_footer(& cde_l2_a43b675d__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoStruct_L_struct_Campaign_G_ * *)&cde_l2_850eb621_ReflectionInfo;
}





//==== 00708b30 StaticGetReflectionInfo_00708b30 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct CelestialLocation__ReflectionInfoStruct_L_structCelestialLocation_G_ * __cdecl
   CelestialLocation__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_struct_CelestialLocation_G_ * __cdecl
CelestialLocation__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_f59f8f61__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_f59f8f61__thread_safe_static_guard_0__);
    if ( cde_l2_f59f8f61__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_52c2eca7_ReflectionInfo) = &vftable_410;
      _Init_thread_footer(& cde_l2_f59f8f61__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoStruct_L_struct_CelestialLocation_G_ * *)&cde_l2_52c2eca7_ReflectionInfo;
}





//==== 00708b90 StaticGetReflectionInfo_00708b90 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct CustomObjective__ReflectionInfoStruct_L_structCustomObjective_G_ * __cdecl
   CustomObjective__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_struct_CustomObjective_G_ * __cdecl
CustomObjective__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_f06cae4b__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_f06cae4b__thread_safe_static_guard_0__);
    if ( cde_l2_f06cae4b__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_99906997_ReflectionInfo) = &vftable_406;
      _Init_thread_footer(& cde_l2_f06cae4b__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoStruct_L_struct_CustomObjective_G_ * *)&cde_l2_99906997_ReflectionInfo;
}





//==== 00708bf0 StaticGetReflectionInfo_00708bf0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct CutsceneMessage__ReflectionInfoStruct_L_structCutsceneMessage_G_ * __cdecl
   CutsceneMessage__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_struct_CutsceneMessage_G_ * __cdecl
CutsceneMessage__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_49d4218d__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_49d4218d__thread_safe_static_guard_0__);
    if ( cde_l2_49d4218d__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_a0872554_ReflectionInfo) = &vftable_407;
      _Init_thread_footer(& cde_l2_49d4218d__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoStruct_L_struct_CutsceneMessage_G_ * *)&cde_l2_a0872554_ReflectionInfo;
}





//==== 00708c50 StaticGetReflectionInfo_00708c50 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct GlobalSaveValues__ReflectionInfoStruct_L_structGlobalSaveValues_G_ * __cdecl
   GlobalSaveValues__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_struct_GlobalSaveValues_G_ * __cdecl
GlobalSaveValues__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_f67407ce__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_f67407ce__thread_safe_static_guard_0__);
    if ( cde_l2_f67407ce__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_60391d63_ReflectionInfo) = &vftable_413;
      _Init_thread_footer(& cde_l2_f67407ce__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoStruct_L_struct_GlobalSaveValues_G_ * *)&cde_l2_60391d63_ReflectionInfo;
}





//==== 00708cb0 StaticGetReflectionInfo_00708cb0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct Level__ReflectionInfoStruct_L_structLevel_G_ * __cdecl
   Level__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_struct_Level_G_ * __cdecl Level__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_f21f6eb8__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_f21f6eb8__thread_safe_static_guard_0__);
    if ( cde_l2_f21f6eb8__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_52eba083_ReflectionInfo) = &vftable_411;
      _Init_thread_footer(& cde_l2_f21f6eb8__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoStruct_L_struct_Level_G_ * *)&cde_l2_52eba083_ReflectionInfo;
}





//==== 00708d10 StaticGetReflectionInfo_00708d10 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct LevelBadges__ReflectionInfoStruct_L_structLevelBadges_G_ * __cdecl
   LevelBadges__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_struct_LevelBadges_G_ * __cdecl LevelBadges__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_eb0fbde4__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_eb0fbde4__thread_safe_static_guard_0__);
    if ( cde_l2_eb0fbde4__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_4fb72a60_ReflectionInfo) = &vftable_409;
      _Init_thread_footer(& cde_l2_eb0fbde4__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoStruct_L_struct_LevelBadges_G_ * *)&cde_l2_4fb72a60_ReflectionInfo;
}





//==== 00708d70 StaticGetReflectionInfo_00708d70 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct LevelMessages__ReflectionInfoStruct_L_structLevelMessages_G_ * __cdecl
   LevelMessages__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_struct_LevelMessages_G_ * __cdecl LevelMessages__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_d1144c01__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_d1144c01__thread_safe_static_guard_0__);
    if ( cde_l2_d1144c01__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_7a4e2a63_ReflectionInfo) = &vftable_408;
      _Init_thread_footer(& cde_l2_d1144c01__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoStruct_L_struct_LevelMessages_G_ * *)&cde_l2_7a4e2a63_ReflectionInfo;
}





//==== 00708dd0 UpdateRecord ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: static void __cdecl LevelRecord__UpdateRecord(struct LevelRecord const &,struct
   LevelRecord *) */

void __cdecl LevelRecord__UpdateRecord(LevelRecord *param_1,LevelRecord *param_2)

{
  undefined8 stack0xfffffffc;
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  Darray_L_LevelRecordMetadata_G_ *pDVar5;
  int iVar6;
  int *piVar7;
  double *pdVar8;
  char cVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  Darray_L_LevelRecordMetadata_G_ local_3c;
  double local_2c;
  char local_24;
  double local_1c;
  char cStack_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((param_1->ForLevel != param_2->ForLevel) ||
     (param_1->IsADeveloperRecord != param_2->IsADeveloperRecord)) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\main\\levels.cpp",0x2cd,
                    "NewRecord.ForLevel == OriginalRecord->ForLevel && NewRecord.IsADeveloperRecord == OriginalRecord->IsADeveloperRecord"
                    ,(char *)0x0);
    DebugBreak();
  }
  pDVar5 = (Darray_L_LevelRecordMetadata_G_ *)(uintptr_t)(GetMetadata(&local_3c));
  *(uint32_t *)&local_c = 0;
  iVar6 = (**(code **)(pDVar5->_pad_0x0_0 + 0xc))();
  if (local_c < iVar6) {
    do {
      piVar7 = (int *)(**(code **)pDVar5->_pad_0x0_0)(&local_c);
      iVar6 = *piVar7;
      dVar2 = *(double *)((int)&param_1->_pad_0x0_0 + iVar6);
      cVar9 = *(char *)((int)&param_1->_pad_0x8_2 + iVar6);
      dVar3 = *(double *)((int)&param_2->_pad_0x0_0 + iVar6);
      uVar11 = SUB84(dVar3,0);
      uVar12 = (undefined4)((ulonglong)dVar3 >> 0x20);
      cVar4 = *(char *)((int)&param_2->_pad_0x8_2 + iVar6);
      uVar13 = SUB84(dVar2,0);
      uVar14 = (undefined4)((ulonglong)dVar2 >> 0x20);
      if ((char)piVar7[10] == '\0') {
        if (cVar4 == '\0') {
          uVar11 = uVar13;
          uVar12 = uVar14;
          if (cVar9 == '\0') {
            uVar11 = 0;
            uVar12 = 0;
          }
        }
        else {
          bVar10 = cVar9 != '\0';
          cVar9 = cVar4;
          if (bVar10) {
            if (dVar3 <= dVar2) {
              uVar11 = uVar13;
              uVar12 = uVar14;
            }
            cVar9 = '\x01';
          }
        }
        local_2c = (double)CONCAT44(uVar12,uVar11);
        pdVar8 = &local_2c;
        local_24 = cVar9;
      }
      else if (cVar4 == '\0') {
        if (cVar9 == '\0') {
          uVar11 = 0;
          uVar12 = 0;
          goto LAB_00708ea0;
        }
        pdVar8 = &local_1c;
        *(uint32_t *)&local_1c = dVar2;
        cStack_14 = cVar9;
      }
      else {
        bVar10 = cVar9 == '\0';
        cVar9 = cVar4;
        if (bVar10) {
LAB_00708ea0:
          *(uint64_t *)&local_1c = (double)CONCAT44(uVar12,uVar11);
          pdVar8 = &local_1c;
          cStack_14 = cVar9;
        }
        else {
          if (dVar2 <= dVar3) {
            uVar11 = uVar13;
            uVar12 = uVar14;
          }
          cStack_14 = '\x01';
          pdVar8 = &local_1c;
          *(uint64_t *)&local_1c = (double)CONCAT44(uVar12,uVar11);
        }
      }
      uVar11 = *(undefined4 *)((int)pdVar8 + 4);
      uVar12 = *(undefined4 *)(pdVar8 + 1);
      uVar13 = *(undefined4 *)((int)pdVar8 + 0xc);
      puVar1 = (undefined4 *)((int)&param_2->_pad_0x0_0 + iVar6);
      *puVar1 = *(undefined4 *)pdVar8;
      puVar1[1] = uVar11;
      puVar1[2] = uVar12;
      puVar1[3] = uVar13;
      *(uint32_t *)&local_c = local_c + 1;
      iVar6 = (**(code **)(pDVar5->_pad_0x0_0 + 0xc))();
    } while (local_c < iVar6);
  }
  local_3c._pad_0x0_0 = (int)&vftable_78;
  if (local_3c.Data != (LevelRecordMetadata *)0x0) {
    LevelRecordMetadata___vector_deleting_destructor(local_3c.Data,3);
  }
  return;
}

//==== 00708f20 AddNewWidgetAndStore_HUDItineraryNodeDragger_ ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: class util__WeakPtr_L_structHUDItineraryNodeDragger_G_ 
   Interface__AddNewWidgetAndStore_struct_HUDItineraryNodeDragger(class util__SharedPtr_L_struct_HUDItineraryNodeDragger_G_) */

undefined4 * 
Interface__AddNewWidgetAndStore_struct_HUDItineraryNodeDragger__o2
          (OptionsSection__Interface *this,undefined4 *param_2,UIWidget *param_3,ReferenceController *param_4)

{
  SharedPtr_L_UIWidget_G_ *pSVar1;
  bool bVar2;
  ReferenceControllerRegistry *pRVar3;
  SharedPtr_L_UIWidget_G_ *pSVar4;
  UIWidget *pUVar5;
  ReferenceController *pRVar6;
  UIWidget *local_10;
  ReferenceController *pRStack_c;
  OptionsSection__Interface *local_8;
  
  _local_10 = CONCAT44(param_4,param_3);
  local_8 = this;
  if (param_4 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(param_4);
  }
  pSVar4 = (((struct Interface *)(uintptr_t)(local_8))->StoredWidgets).Data;
  pSVar1 = pSVar4 + (((struct Interface *)(uintptr_t)(local_8))->StoredWidgets).Size;
  for (; pSVar4 != pSVar1; pSVar4 = pSVar4 + 1) {
    if ((param_4 == pSVar4->Controller) && (param_3 == pSVar4->Pointer)) goto LAB_00708f7e;
  }
  util__Darray_class_util__SharedPtr_struct_UIWidget_____Add
            ((Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *)&((struct Interface *)(uintptr_t)(local_8))->StoredWidgets,
             (SharedPtr_L_struct_UIWidget_G_ *)&local_10);
LAB_00708f7e:
  pUVar5 = param_3;
  pRVar6 = param_4;
  if (param_4 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_4);
  }
  AddNewWidget_L_struct_UIWidget_G_(local_8,&local_10,pUVar5,pRVar6);
  if (pRStack_c != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRStack_c);
  }
  *param_2 = (undefined4)(uintptr_t)(param_3);
  param_2[1] = (undefined4)(uintptr_t)(param_4);
  if (param_4 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_4);
    bVar2 = util__ReferenceController__ReleaseStrongReference(param_4);
    if (bVar2) {
      if (param_3 != (UIWidget *)0x0) {
        (**(code **)(param_3->_pad_0x0_0 + 4))(1);
      }
      pUVar5 = param_3;
      pRVar3 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar3,pUVar5);
    }
  }
  if ((param_4 != (ReferenceController *)0x0) &&
     (bVar2 = util__ReferenceController__ReleaseStrongReference(param_4), bVar2)) {
    if (param_3 != (UIWidget *)0x0) {
      (**(code **)(param_3->_pad_0x0_0 + 4))(1);
    }
    pRVar3 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar3,param_3);
  }
  return param_2;
}

//==== 00709030 MethodCaller__private__void___thiscall_MainManager__BuildMainMenu_void__ ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_L_classMainManager_Cvoid_G___MethodCaller_L__private__void__thiscallMainManager__BuildMainMenu_void__G_(void *) */

void __cdecl
util__DelegateFactory_class_MainManager_void___MethodCaller__private__void___thiscall_MainManager__BuildMainMenu_void(void *param_1)

{
  undefined8 stack0xfffff220;
  undefined8 stack0xfffff22c;
  undefined8 stack0xfffff248;
  undefined8 stack0xfffff394;
  double dVar1;
  UIAttributes UVar2;
  UIAttributes UVar3;
  UIAttributes UVar4;
  UIAttributes UVar5;
  UIAttributes UVar6;
  UIAttributes UVar7;
  LayoutAttributes LVar8;
  LayoutAttributes LVar9;
  LayoutAttributes LVar10;
  LayoutAttributes LVar11;
  Delegate_L_void_G_ DVar12;
  Delegate_L_void_G_ DVar13;
  bool bVar14;
  UIImage *this;
  UIAttributes *pUVar15;
  void *pvVar16;
  ReferenceControllerRegistry *pRVar17;
  ReferenceController *pRVar18;
  OptionsSection__Interface *pIVar19;
  int iVar20;
  Font *pFVar21;
  UIButton *pUVar22;
  LocStr *pLVar23;
  Str_L_char_G_ *pSVar24;
  LogisticManager *pLVar25;
  UIWidget *pUVar26;
  Data *pDVar27;
  LayoutAttributes *pLVar28;
  undefined4 *puVar29;
  SharedPtr_L_UIWidget_G_ *pSVar30;
  uint uVar31;
  SharedPtr_L_UIWidget_G_ *pSVar32;
  UIAttributes *in_stack_fffff220;
  char *in_stack_fffff224;
  int in_stack_fffff228;
  undefined1 in_stack_fffff22c [20];
  _func___cdecl_Vec2_L_int_G__void_ptr *in_stack_fffff240;
  _func___cdecl_bool_void_ptr *in_stack_fffff244;
  undefined1 auVar33 [12];
  undefined1 auVar38 [16];
  undefined8 uVar34;
  undefined8 uVar35;
  undefined1 auVar36 [12];
  undefined1 auVar37 [12];
  undefined1 auVar39 [16];
  undefined1 auVar40 [44];
  undefined1 auVar42 [44];
  undefined1 in_stack_fffff248 [288];
  undefined1 auVar43 [44];
  _func___cdecl_Color_void_ptr *in_stack_fffff368;
  _func___cdecl_Color_void_ptr *p_Var44;
  float in_stack_fffff36c;
  _func___cdecl_Vec2_L_int_G__void_ptr *p_Var45;
  float fVar46;
  int in_stack_fffff370;
  int in_stack_fffff374;
  int iVar47;
  int in_stack_fffff378;
  int iVar48;
  float in_stack_fffff37c;
  _func___cdecl_int_void_ptr *p_Var49;
  float fVar50;
  float in_stack_fffff380;
  float fVar51;
  char *in_stack_fffff384;
  UIWidget *pUVar52;
  void *pvVar53;
  float fVar54;
  float in_stack_fffff388;
  UIWidget *pUVar55;
  _func___cdecl_bool_void_ptr *p_Var56;
  float fVar57;
  undefined4 in_stack_fffff38c;
  undefined4 uVar58;
  UIWidget *pUVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined1 uVar62;
  UIWidget *pUVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  UIWidget *pUVar66;
  Manager *pMVar67;
  int iVar68;
  code *pcVar69;
  UIWidget *pUVar70;
  UIAttributes UStack_c58;
  UIAttributes UStack_b10;
  UIAttributes UStack_9c8;
  UIAttributes UStack_880;
  UIAttributes UStack_738;
  UIAttributes UStack_5f0;
  LayoutAttributes LStack_4a8;
  LayoutAttributes LStack_478;
  LayoutAttributes LStack_448;
  LayoutAttributes LStack_418;
  UIAttributes UStack_3e8;
  void *apvStack_2a0 [3];
  void *pvStack_294;
  void *apvStack_288 [3];
  void *pvStack_27c;
  void *apvStack_270 [3];
  void *pvStack_264;
  void *apvStack_258 [3];
  void *pvStack_24c;
  void *apvStack_240 [3];
  void *pvStack_234;
  void *apvStack_228 [3];
  void *pvStack_21c;
  void *apvStack_210 [3];
  void *pvStack_204;
  Str_L_char_G_ SStack_1f8;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  Str_L_char_G_ SStack_1e4;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  Str_L_char_G_ SStack_1d0;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  Str_L_char_G_ SStack_1bc;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  Str_L_char_G_ SStack_1a8;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  Str_L_char_G_ SStack_194;
  undefined4 uStack_188;
  undefined4 uStack_184;
  Str_L_char_G_ SStack_180;
  undefined4 uStack_174;
  undefined4 uStack_170;
  Str_L_char_G_ SStack_16c;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  Str_L_char_G_ SStack_158;
  Str_L_char_G_ SStack_14c;
  Str_L_char_G_ SStack_140;
  Str_L_char_G_ SStack_134;
  Str_L_char_G_ SStack_128;
  Str_L_char_G_ SStack_11c;
  Str_L_char_G_ SStack_110;
  void *pvStack_104;
  undefined4 uStack_100;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  Manager *pMStack_ec;
  _func___cdecl_Vec2_L_int_G__void_ptr *p_Stack_e8;
  Str_L_char_G_ SStack_e0;
  Str_L_char_G_ SStack_d4;
  Str_L_char_G_ SStack_c8;
  Str_L_char_G_ SStack_bc;
  Str_L_char_G_ SStack_b0;
  Str_L_char_G_ SStack_a4;
  Str_L_char_G_ SStack_98;
  Str_L_char_G_ SStack_8c;
  Data DStack_80;
  Str_L_char_G_ SStack_70;
  undefined8 uStack_64;
  UIWidget *pUStack_5c;
  UIWidget *pUStack_58;
  UIWidget *pUStack_54;
  UIRowLayout *pUStack_50;
  undefined1 auStack_4c [8];
  undefined8 uStack_44;
  UIWidget *pUStack_3c;
  undefined8 uStack_38;
  UIWidget *pUStack_30;
  UIWidget *pUStack_2c;
  Manager *pMStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  undefined8 uStack_14;
  OptionsSection__Interface *pIStack_c;
  uint uStack_8;
  undefined1 auVar41 [32];
  
  uStack_38 = (double)(ulonglong)(uint)uStack_38;
  pMStack_28 = param_1;
  uStack_8 = 0;
  GameManager__SwitchToSession(*(GameManager **)((int)param_1 + 4),param_1,false);
  MainManager__PlayTitleMusic(param_1);
  this = (UIImage *)(uintptr_t)(port_op_new(0x178));
  if (this == (UIImage *)0x0) {
    pvVar16 = (void *)0x0;
  }
  else {
    pUVar15 = (UIAttributes *)UIAttributes__UIAttributes(&UStack_3e8,param_1);
    pcVar69 = (long long int (*)())(MethodCallerConst_L__private__void___thiscall_MainManager__RenderHeroShot_void_const__G_);
    bVar14 = false;
    uStack_fc = 0x3ff0000000000000;
    uStack_f4 = 0x3ff0000000000000;
    pvStack_104 = (void *)0x0;
    uStack_100 = 0;
    (pUVar15->FillProportion).Getter.Callee = (void *)0x0;
    (pUVar15->FillProportion).Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0;
    (undefined4)((pUVar15->FillProportion).Value.X = 0);
    *(undefined4 *)((int)&(pUVar15->FillProportion).Value.X + 4) = 0x3ff00000;
    (pUVar15->FillProportion).Value.Y = 1.0;
    in_stack_fffff240 = (_func___cdecl_Vec2_L_int_G__void_ptr *)0x7098fc;
    pvVar16 = param_1;
    UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff248,pUVar15);
    in_stack_fffff244 = (_func___cdecl_bool_void_ptr *)0x709903;
    UVar6.TextColor.Data.Getter.CallbackFunction = in_stack_fffff368;
    *(uint32_t *)&auVar33 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 4)));
    *(uint32_t *)&auVar36 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 32)));
    *(uint32_t *)&auVar37 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 44)));
    *(uint32_t *)&auVar39 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 180)));
    *(uint32_t *)&auVar40 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 196)));
    *(uint32_t *)&auVar42 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 240)));
    UVar6.Parent = (Manager *)(*(uint32_t*)&(in_stack_fffff248));
    UVar6.Tag.Data = (char *)(*(uint32_t*)&(auVar33));
    UVar6.Tag.Capacity = (*(uint32_t*)((char*)&(auVar33)+4));
    UVar6.Tag.Length = (*(uint32_t*)((char*)&(auVar33)+8));
    uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 16)),0);
    uVar35 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 16)),8);
    UVar6.Location.Getter.Callee = (void *)(int)uVar34;
    UVar6.Location.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar6.Location.Value.X = (int)uVar35;
    UVar6.Location.Value.Y = (int)((ulonglong)uVar35 >> 0x20);
    UVar6.Visible.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar36));
    UVar6.Visible.Getter.CallbackFunction =
         (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar36)) >> 0x20);
    UVar6.Visible.Value = (bool)auVar36[8];
    (*(uint24_t *)((char *)&(UVar6.Visible) + 9)) = (*(uint24_t*)((char*)&(auVar36)+9));
    UVar6.Enabled.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar37));
    UVar6.Enabled.Getter.CallbackFunction =
         (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar37)) >> 0x20);
    UVar6.Enabled.Value = (bool)auVar37[8];
    (*(uint24_t *)((char *)&(UVar6.Enabled) + 9)) = (*(uint24_t*)((char*)&(auVar37)+9));
    uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 56)),0);
    uVar35 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 56)),8);
    UVar6.DesiredSize.Getter.Callee = (void *)(int)uVar34;
    UVar6.DesiredSize.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar6.DesiredSize.Value.X = (int)uVar35;
    UVar6.DesiredSize.Value.Y = (int)((ulonglong)uVar35 >> 0x20);
    uVar34 = SUB248((*(uint32_t *)((char *)&(in_stack_fffff248) + 72)),0);
    *(uint32_t *)&auVar38 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffff248) + 72)),8));
    UVar6.FillProportion.Getter.Callee = (void *)(int)uVar34;
    UVar6.FillProportion.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar6.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar38));
    UVar6.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar38)+8));
    uVar34 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff248) + 96)),0);
    UVar6.HitTestShape.Getter.Callee = (void *)(int)uVar34;
    UVar6.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)(int)((ulonglong)uVar34 >> 0x20));
    UVar6.HitTestShape.Value = SUB124((*(uint32_t *)((char *)&(in_stack_fffff248) + 96)),8);
    (*(uint32_t *)((char *)&(UVar6) + 108)) = (*(uint32_t *)((char *)&(in_stack_fffff248) + 108));
    uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 112)),0);
    UVar6.Depth.Getter.Callee = (void *)(int)uVar34;
    UVar6.Depth.Getter.CallbackFunction =
         (_func___cdecl_double_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar6.Depth.Value = (double)SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 112)),8);
    uVar34 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff248) + 128)),0);
    UVar6.Icon.Getter.Callee = (void *)(int)uVar34;
    UVar6.Icon.Getter.CallbackFunction = (void (* (*)(void *))(void))((_func___cdecl__func___cdecl_void_ptr_void_ptr *)(int)((ulonglong)uVar34 >> 0x20));
    UVar6.Icon.Value = (_func___cdecl_void *)SUB124((*(uint32_t *)((char *)&(in_stack_fffff248) + 128)),8);
    uVar34 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff248) + 140)),0);
    *(uint32_t *)&auVar33 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff248) + 140)),8));
    UVar6.Tooltip.Getter.Callee = (void *)(int)uVar34;
    UVar6.Tooltip.Getter.CallbackFunction =
         (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar6.Tooltip.Value.Data = (char *)(*(uint32_t*)&(auVar33));
    UVar6.Tooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar33)+4));
    UVar6.Tooltip.Value.Length = (*(uint32_t*)((char*)&(auVar33)+8));
    uVar34 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff248) + 160)),0);
*(uint32_t *)&auVar33 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff248) + 160)),8));
    UVar6.VerboseTooltip.Getter.Callee = (void *)(int)uVar34;
    UVar6.VerboseTooltip.Getter.CallbackFunction =
         (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar6.VerboseTooltip.Value.Data = (char *)(*(uint32_t*)&(auVar33));
    UVar6.VerboseTooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar33)+4));
    UVar6.VerboseTooltip.Value.Length = (*(uint32_t*)((char*)&(auVar33)+8));
    uVar34 = SUB128((*(uint32_t *)((char *)&(auVar39) + 0)),0);
    UVar6.TextFont.Data.Getter.Callee = (void *)(int)uVar34;
    UVar6.TextFont.Data.Getter.CallbackFunction =
         (_func___cdecl_Font_ptr_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar6.TextFont.Data.Value = (Font *)SUB124((*(uint32_t *)((char *)&(auVar39) + 0)),8);
    UVar6.TextFont.IsValidData = (bool)auVar39[0xc];
    (*(uint32_t *)((char *)&(UVar6.TextFont) + 13)) = (*(uint32_t *)((char *)&(auVar39) + 13));
    uVar34 = SUB408((*(uint32_t *)((char *)&(auVar40) + 0)),0);
*(uint32_t *)&auVar41 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar40) + 0)),8));
    UVar6.ForegroundColor.Data.Getter.Callee = (void *)(int)uVar34;
    UVar6.ForegroundColor.Data.Getter.CallbackFunction =
         (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar6.ForegroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar41));
    UVar6.ForegroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar41)+4));
    UVar6.ForegroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar41)+8));
    UVar6.ForegroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar41) + 12));
    UVar6.ForegroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar41) + 16));
    UVar6.ForegroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar41) + 20));
    UVar6.ForegroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar41) + 24));
    UVar6.ForegroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar41) + 28));
    UVar6.ForegroundColor.IsValidData = (bool)auVar40[0x28];
    (*(uint32_t *)((char *)&(UVar6.ForegroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar40) + 41));
    uVar34 = SUB408((*(uint32_t *)((char *)&(auVar42) + 0)),0);
*(uint32_t *)&auVar41 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar42) + 0)),8));
    UVar6.BackgroundColor.Data.Getter.Callee = (void *)(int)uVar34;
    UVar6.BackgroundColor.Data.Getter.CallbackFunction =
         (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar6.BackgroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar41));
    UVar6.BackgroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar41)+4));
    UVar6.BackgroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar41)+8));
    UVar6.BackgroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar41) + 12));
    UVar6.BackgroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar41) + 16));
    UVar6.BackgroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar41) + 20));
    UVar6.BackgroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar41) + 24));
    UVar6.BackgroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar41) + 28));
    UVar6.BackgroundColor.IsValidData = (bool)auVar42[0x28];
    (*(uint32_t *)((char *)&(UVar6.BackgroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar42) + 41));
    UVar6.TextColor.Data.Getter.Callee = (void *)(*(uint32_t *)((char *)&(in_stack_fffff248) + 284));
    UVar6.TextColor.Data.Value._pad_0x0_0 = (int)in_stack_fffff36c;
    UVar6.TextColor.Data.Value._pad_0x4_1 = in_stack_fffff370;
    UVar6.TextColor.Data.Value._pad_0x8_2 = in_stack_fffff374;
    UVar6.TextColor.Data.Value._pad_0xc_3 = in_stack_fffff378;
    UVar6.TextColor.Data.Value.Hue_degrees = in_stack_fffff37c;
    UVar6.TextColor.Data.Value.Saturation = in_stack_fffff380;
    UVar6.TextColor.Data.Value.Value = (double)(uintptr_t)((float)(int)(uintptr_t)(in_stack_fffff384));
    UVar6.TextColor.Data.Value.Alpha = in_stack_fffff388;
    UVar6.TextColor.IsValidData = SUB41(in_stack_fffff38c,0);
    (*(uint32_t *)((char *)&(UVar6.TextColor) + 41)) = SUB43(in_stack_fffff38c,1);
    DVar12.CallbackFunction = (void (*)(void *))(pcVar69);
    DVar12.Callee = pvVar16;
    pvVar16 = (void *)UIImage__UIImage(this,UVar6,bVar14,DVar12);
  }
  bVar14 = this != (UIImage *)0x0;
  uVar31 = (uint)bVar14;
  pIStack_c = (OptionsSection__Interface *)&stack0xfffff394;
  pIVar19 = (OptionsSection__Interface *)&stack0xfffff394;
  if (pvVar16 == (void *)0x0) {
    in_stack_fffff388 = 2.97075e-43;
    in_stack_fffff384 =
         "\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl";
    in_stack_fffff380 = 1.0340525e-38;
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl",0xd4
              ,"NewPointer",(char *)0x0);
    DebugBreak();
    pIVar19 = pIStack_c;
  }
  pIStack_c = pIVar19;
  pvVar53 = pvVar16;
  pRVar17 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
  pRVar18 = (ReferenceController *)(uintptr_t)(ReferenceControllerRegistry__Register(pRVar17,pvVar53));
  pIVar19 = pIStack_c;
  ((struct Actor *)(uintptr_t)(pIStack_c))->Parent = pvVar16;
  *(ReferenceController **)&((struct Interface *)(uintptr_t)(pIVar19))->StoredWidgets = pRVar18;
  if (pRVar18 != (ReferenceController *)0x0) {
    ReferenceController__AddStrongReference(pRVar18);
  }
  pIVar19 = Manager__GetInterfacer(param_1);
  (*(uint8_t*)&(uVar58)) = true;
  (*(uint24_t*)((char*)&(uVar58)+1)) = 0x7099;
  Interface__AddNewWidgetAndStore_struct_HUDItineraryNodeDragger__o2(pIVar19,0,(((UIWidget *)cde_rsp_slot())),(((ReferenceController *)cde_rsp_slot())));
  if ((*(uint32_t*)((char*)&(uStack_38)+4)) != (UIRowLayout *)0x0) {
    ReferenceController__ReleaseWeakReference((ReferenceController *)(*(uint32_t*)((char*)&(uStack_38)+4)));
  }
  if (bVar14) {
    uVar31 = 0;
    UIAttributes___UIAttributes(&UStack_3e8);
  }
  (*(uint32_t*)&(uStack_44)) =
       SUB84((double)(*(undefined4 *)((char *)&(Graphics__GlobalState.ViewMatrix.Data[0xf]) + 4)) /
             (double)(*(struct Quaternion_L_double_G_ *)(MinimumScreenResolution)).Y,0);
  (*(double *)&(auStack_4c)) = ((double)*(unsigned int *)(&(Graphics__GlobalState.ViewMatrix.Data[0xf])) /
               (double)(*(struct Quaternion_L_double_G_ *)(MinimumScreenResolution)).X);
  (*(uint32_t*)((char*)&(uStack_44)+4)) =
       (int)((ulonglong)
             ((double)*(unsigned int *)((char *)&(Graphics__GlobalState.ViewMatrix.Data[0xf]) + 4) /
             (double)(*(struct Quaternion_L_double_G_ *)(MinimumScreenResolution)).Y) >> 0x20);
  uStack_64 = Abs((double *)(auStack_4c + 8));
  uStack_38 = Abs((double *)auStack_4c);
  if (uStack_38 <= uStack_64) {
    iVar20 = (*(uint32_t*)&(auStack_4c));
    pSVar32 = (SharedPtr_L_UIWidget_G_ *)(uintptr_t)((*(uint32_t*)((char*)&(auStack_4c)+4)));
  }
  else {
    iVar20 = (*(uint32_t*)((char*)&(auStack_4c)+8));
    pSVar32 = (SharedPtr_L_UIWidget_G_ *)(*(uint32_t *)((char *)&(auStack_4c) + 12));
  }
  dVar1 = (double)CONCAT44(pSVar32,iVar20) * 0.7;
  if (dVar1 <= 0.7) {
    dVar1 = 0.7;
  }
  if (1.0 <= dVar1) {
    dVar1 = 1.0;
  }
  pUStack_2c = (UIWidget *)(int)(dVar1 * 300.0);
  pUStack_30 = (UIWidget *)(int)(dVar1 * 50.0);
  iVar20 = (int)(uintptr_t) Manager__GetTheme(param_1);
  pFVar21 = ThemeFont__Get((ThemeFont *)(iVar20 + 0x40c));
  SStack_70.Data = (char *)0x0;
  (*(uint32_t*)&(uStack_44)) = (int)pUStack_2c;
  SStack_70.Capacity = 0;
  (*(uint32_t*)((char*)&(auVar33)+8)) = 0;
  (*(uint64_t*)&(auVar33)) = uStack_44;
  _auStack_4c = (*(uint32_t *)cde_shl16(auVar33, 0x40));
  (*(uint32_t*)((char*)&(uStack_44)+4)) = (int)pUStack_30;
  pUVar15 = (UIAttributes *)UIAttributes__UIAttributes(&UStack_5f0,param_1);
  (*(uint40_t*)&(uStack_14)) = CONCAT14(1,pFVar21);
  (pUVar15->DesiredSize).Getter.Callee = (void *)(*(uint32_t*)&(auStack_4c));
  (pUVar15->DesiredSize).Getter.CallbackFunction =
       (_func___cdecl_Vec2_L_int_G__void_ptr *)(*(uint32_t*)((char*)&(auStack_4c)+4));
  (pUVar15->DesiredSize).Value.X = (int)uStack_44;
  (pUVar15->DesiredSize).Value.Y = (*(uint32_t*)((char*)&(uStack_44)+4));
  (*(uint32_t*)&(uStack_1c)) = (uint32_t)(uintptr_t)((Manager *)SStack_70.Data);
  (*(uint32_t*)((char*)&(uStack_1c)+4)) = (uint32_t)(uintptr_t)((code *)SStack_70.Capacity);
  (pUVar15->TextFont).Data.Getter.Callee = SStack_70.Data;
  (pUVar15->TextFont).Data.Getter.CallbackFunction =
       (_func___cdecl_Font_ptr_void_ptr *)SStack_70.Capacity;
  (pUVar15->TextFont).Data.Value = pFVar21;
  *(UIWidget * *)&(pUVar15->TextFont).IsValidData = (UIWidget *)(uintptr_t)((*(uint32_t*)((char*)&(uStack_14)+4)));
  UIAttributes__UIAttributes(&UStack_3e8,pUVar15);
  UIAttributes___UIAttributes(&UStack_5f0);
  pvVar16 = (void *)(uintptr_t)(port_op_new(0x218));
  uStack_38 = (double)CONCAT44(pvVar16,(uint)uStack_38);
  if (pvVar16 == (void *)0x0) {
    pUVar26 = (UIWidget *)0x0;
  }
  else {
    pvVar16 = (void *)(uintptr_t)(port_op_new(0x218));
    uStack_64 = (double)CONCAT44(pvVar16,(undefined4)uStack_64);
    if (pvVar16 == (void *)0x0) {
      pUStack_3c = (UIWidget *)0x0;
    }
    else {
      pUStack_50 = (UIRowLayout *)(uintptr_t)(port_op_new(0x218));
      if (pUStack_50 == (UIRowLayout *)0x0) {
        pIStack_c = (OptionsSection__Interface *)0x0;
      }
      else {
        pUVar22 = (UIButton *)(uintptr_t)(port_op_new(0x1b0));
        if (pUVar22 == (UIButton *)0x0) {
          pUStack_54 = (UIWidget *)0x0;
        }
        else {
          util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_1f8,"Exit");
          SStack_e0.Data = (char *)0x0;
          SStack_e0.Capacity = 0;
          SStack_e0.Length = 0;
          pLVar23 = (LocStr *)LocStr__LocStr((LocStr *)&pvStack_104,&SStack_1f8,&SStack_e0);
          pSVar24 = (Str_L_char_G_ *)(uintptr_t)(LocStr__op_mul(pLVar23));
          uStack_1ec = 0;
          uStack_1e8 = 0;
          util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_1e4,pSVar24);
          uVar31 = uVar31 | 0x1e;
          in_stack_fffff224 = (char *)0x709bcf;
          UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff22c,&UStack_3e8);
          in_stack_fffff228 = 0x709bd6;
          pUStack_54 = (UIWidget *)UIButton__UIButton(pUVar22,(UIAttributes){0},(((Attribute_L_util__Str_L_char_G___G_ *)cde_rsp_slot())),(Delegate_L_void_G_){0},(KeyCombination){0},(Delegate_L_void_CInputModifiers_G_){0},0,(Delegate_L_void_Cbool_Cbool_Cbool_G_){0});
        }
        pUVar22 = (UIButton *)(uintptr_t)(port_op_new(0x1b0));
        if (pUVar22 == (UIButton *)0x0) {
          pUStack_58 = (UIWidget *)0x0;
        }
        else {
          util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_70,"Infolinks");
          SStack_d4.Data = (char *)0x0;
          SStack_d4.Capacity = 0;
          SStack_d4.Length = 0;
          pLVar23 = (LocStr *)LocStr__LocStr((LocStr *)apvStack_2a0,&SStack_70,&SStack_d4);
          pSVar24 = (Str_L_char_G_ *)(uintptr_t)(LocStr__op_mul(pLVar23));
          uStack_1d8 = 0;
          uStack_1d4 = 0;
          util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_1d0,pSVar24);
          uVar31 = uVar31 | 0x1e0;
          in_stack_fffff224 = (char *)0x709ca7;
          UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff22c,&UStack_3e8);
          in_stack_fffff228 = 0x709cae;
          pUStack_58 = (UIWidget *)UIButton__UIButton(pUVar22,(UIAttributes){0},(((Attribute_L_util__Str_L_char_G___G_ *)cde_rsp_slot())),(Delegate_L_void_G_){0},(KeyCombination){0},(Delegate_L_void_CInputModifiers_G_){0},0,(Delegate_L_void_Cbool_Cbool_Cbool_G_){0});
        }
        pIStack_c = (OptionsSection__Interface *)(uintptr_t)(port_op_new(0x1b0));
        if (pIStack_c == (OptionsSection__Interface *)0x0) {
          pUStack_5c = (UIWidget *)0x0;
        }
        else {
          util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_128,"LevelEditor");
          SStack_c8.Data = (char *)0x0;
          SStack_c8.Capacity = 0;
          SStack_c8.Length = 0;
          pLVar23 = (LocStr *)LocStr__LocStr((LocStr *)apvStack_288,&SStack_128,&SStack_c8);
          pSVar24 = (Str_L_char_G_ *)(uintptr_t)(LocStr__op_mul(pLVar23));
          uStack_1c4 = 0;
          uStack_1c0 = 0;
          util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_1bc,pSVar24);
          iVar20 = (int)(uintptr_t) Manager__GetTheme(param_1);
          pFVar21 = ThemeFont__Get((ThemeFont *)(iVar20 + 0x40c));
          pMStack_ec = (Manager *)0x0;
          p_Stack_e8 = (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0;
          uStack_1c = 0;
          uVar31 = uVar31 | 0x3e00;
          (*(uint32_t*)&(uStack_14)) = (uint32_t)(uintptr_t)(pUStack_2c);
          (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)(pUStack_30);
          pLVar25 = GameManager__GetManager_class_LogisticManager(pMStack_28->Parent);
          pUVar15 = ShipDesignManager__GetLevelEditorAccessAttributes
                              ((pLVar25->ShipDesigner).Pointer,&UStack_c58);
          pUVar52 = (UIWidget *)(uintptr_t)((*(uint32_t*)((char*)&(uStack_14)+4)));
          pUVar26 = (UIWidget *)uStack_14;
          (*(uint40_t*)&(uStack_14)) = CONCAT14(1,pFVar21);
          (pUVar15->DesiredSize).Getter.Callee = (Manager *)uStack_1c;
          (pUVar15->DesiredSize).Getter.CallbackFunction = (Vec2_L_int_G_ (*)(void *))(uintptr_t) (*(uint32_t*)((char*)&(uStack_1c)+4));
          (pUVar15->DesiredSize).Value.X = (int)pUVar26;
          (pUVar15->DesiredSize).Value.Y = (int)pUVar52;
          (*(uint32_t*)&(uStack_1c)) = (uint32_t)(uintptr_t)(pMStack_ec);
          (*(uint32_t*)((char*)&(uStack_1c)+4)) = (uint32_t)(uintptr_t)(p_Stack_e8);
          (pUVar15->TextFont).Data.Getter.Callee = pMStack_ec;
          (pUVar15->TextFont).Data.Getter.CallbackFunction =
               (_func___cdecl_Font_ptr_void_ptr *)p_Stack_e8;
          (pUVar15->TextFont).Data.Value = pFVar21;
          *(UIWidget * *)&(pUVar15->TextFont).IsValidData = (UIWidget *)(uintptr_t)((*(uint32_t*)((char*)&(uStack_14)+4)));
          in_stack_fffff224 = (char *)0x709e08;
          UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff22c,pUVar15);
          in_stack_fffff228 = 0x709e10;
          pUStack_5c = (UIWidget *)UIButton__UIButton((UIButton *)pIStack_c,(UIAttributes){0},(((Attribute_L_util__Str_L_char_G___G_ *)cde_rsp_slot())),(Delegate_L_void_G_){0},(KeyCombination){0},(Delegate_L_void_CInputModifiers_G_){0},0,(Delegate_L_void_Cbool_Cbool_Cbool_G_){0});
          param_1 = pMStack_28;
        }
        pIStack_c = (OptionsSection__Interface *)(uintptr_t)(port_op_new(0x1b0));
        if (pIStack_c == (OptionsSection__Interface *)0x0) {
          pUStack_30 = (UIWidget *)0x0;
        }
        else {
          util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_11c,"State__ModuleDesign");
          SStack_bc.Data = (char *)0x0;
          SStack_bc.Capacity = 0;
          SStack_bc.Length = 0;
          pLVar23 = (LocStr *)LocStr__LocStr((LocStr *)apvStack_270,&SStack_11c,&SStack_bc);
          pSVar24 = (Str_L_char_G_ *)(uintptr_t)(LocStr__op_mul(pLVar23));
          uStack_1b0 = 0;
          uStack_1ac = 0;
          util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_1a8,pSVar24);
          iVar20 = (int)(uintptr_t) Manager__GetTheme(param_1);
          pFVar21 = ThemeFont__Get((ThemeFont *)(iVar20 + 0x40c));
          pMStack_ec = (Manager *)0x0;
          p_Stack_e8 = (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0;
          uStack_1c = 0;
          uVar31 = uVar31 | 0x7c000;
          (*(uint32_t*)&(uStack_14)) = (uint32_t)(uintptr_t)(pUStack_2c);
          (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)(pUStack_30);
          pLVar25 = GameManager__GetManager_class_LogisticManager(pMStack_28->Parent);
          in_stack_fffff220 = &UStack_b10;
          pUVar15 = ShipDesignManager__GetAccessAttributes
                              ((pLVar25->ShipDesigner).Pointer,in_stack_fffff220,true,false);
          pUVar52 = (UIWidget *)(uintptr_t)((*(uint32_t*)((char*)&(uStack_14)+4)));
          pUVar26 = (UIWidget *)uStack_14;
          (*(uint40_t*)&(uStack_14)) = CONCAT14(1,pFVar21);
          (pUVar15->DesiredSize).Getter.Callee = (Manager *)uStack_1c;
          (pUVar15->DesiredSize).Getter.CallbackFunction = (Vec2_L_int_G_ (*)(void *))(uintptr_t) (*(uint32_t*)((char*)&(uStack_1c)+4));
          (pUVar15->DesiredSize).Value.X = (int)pUVar26;
          (pUVar15->DesiredSize).Value.Y = (int)pUVar52;
          (*(uint32_t*)&(uStack_1c)) = (uint32_t)(uintptr_t)(pMStack_ec);
          (*(uint32_t*)((char*)&(uStack_1c)+4)) = (uint32_t)(uintptr_t)(p_Stack_e8);
          (pUVar15->TextFont).Data.Getter.Callee = pMStack_ec;
          (pUVar15->TextFont).Data.Getter.CallbackFunction =
               (_func___cdecl_Font_ptr_void_ptr *)p_Stack_e8;
          (pUVar15->TextFont).Data.Value = pFVar21;
          *(UIWidget * *)&(pUVar15->TextFont).IsValidData = (UIWidget *)(uintptr_t)((*(uint32_t*)((char*)&(uStack_14)+4)));
          in_stack_fffff224 = (char *)0x709f71;
          UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff22c,pUVar15);
          in_stack_fffff228 = 0x709f79;
          pUStack_30 = (UIWidget *)UIButton__UIButton((UIButton *)pIStack_c,(UIAttributes){0},(((Attribute_L_util__Str_L_char_G___G_ *)cde_rsp_slot())),(Delegate_L_void_G_){0},(KeyCombination){0},(Delegate_L_void_CInputModifiers_G_){0},0,(Delegate_L_void_Cbool_Cbool_Cbool_G_){0});
        }
        pUVar22 = (UIButton *)(uintptr_t)(port_op_new(0x1b0));
        if (pUVar22 == (UIButton *)0x0) {
          pUStack_2c = (UIWidget *)0x0;
          param_1 = pMStack_28;
        }
        else {
          util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_110,"State__ShipDesign");
          SStack_b0.Data = (char *)0x0;
          SStack_b0.Capacity = 0;
          SStack_b0.Length = 0;
          pLVar23 = (LocStr *)LocStr__LocStr((LocStr *)apvStack_258,&SStack_110,&SStack_b0);
          pSVar24 = (Str_L_char_G_ *)(uintptr_t)(LocStr__op_mul(pLVar23));
          uStack_19c = 0;
          uStack_198 = 0;
          util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_194,pSVar24);
          param_1 = pMStack_28;
          uVar31 = uVar31 | 0x780000;
          in_stack_fffff224 = (char *)0x70a056;
          UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff22c,&UStack_3e8);
          in_stack_fffff228 = 0x70a05d;
          pUStack_2c = (UIWidget *)UIButton__UIButton(pUVar22,(UIAttributes){0},(((Attribute_L_util__Str_L_char_G___G_ *)cde_rsp_slot())),(Delegate_L_void_G_){0},(KeyCombination){0},(Delegate_L_void_CInputModifiers_G_){0},0,(Delegate_L_void_Cbool_Cbool_Cbool_G_){0});
        }
        pUVar22 = (UIButton *)(uintptr_t)(port_op_new(0x1b0));
        if (pUVar22 == (UIButton *)0x0) {
          pUStack_3c = (UIWidget *)0x0;
        }
        else {
          util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_134,"Options");
          SStack_a4.Data = (char *)0x0;
          SStack_a4.Capacity = 0;
          SStack_a4.Length = 0;
          pLVar23 = (LocStr *)LocStr__LocStr((LocStr *)apvStack_240,&SStack_134,&SStack_a4);
          pSVar24 = (Str_L_char_G_ *)(uintptr_t)(LocStr__op_mul(pLVar23));
          uStack_188 = 0;
          uStack_184 = 0;
          util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_180,pSVar24);
          uVar31 = uVar31 | 0x7800000;
          in_stack_fffff224 = (char *)0x70a13a;
          UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff22c,&UStack_3e8);
          in_stack_fffff228 = 0x70a141;
          pUStack_3c = (UIWidget *)UIButton__UIButton(pUVar22,(UIAttributes){0},(((Attribute_L_util__Str_L_char_G___G_ *)cde_rsp_slot())),(Delegate_L_void_G_){0},(KeyCombination){0},(Delegate_L_void_CInputModifiers_G_){0},0,(Delegate_L_void_Cbool_Cbool_Cbool_G_){0});
        }
        pUVar22 = (UIButton *)(uintptr_t)(port_op_new(0x1b0));
        if (pUVar22 == (UIButton *)0x0) {
          pIStack_c = (OptionsSection__Interface *)0x0;
        }
        else {
          util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_14c,"Sandbox");
          SStack_98.Data = (char *)0x0;
          SStack_98.Capacity = 0;
          SStack_98.Length = 0;
          pLVar23 = (LocStr *)LocStr__LocStr((LocStr *)apvStack_228,&SStack_14c,&SStack_98);
          pSVar24 = (Str_L_char_G_ *)(uintptr_t)(LocStr__op_mul(pLVar23));
          uStack_174 = 0;
          uStack_170 = 0;
          util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_16c,pSVar24);
          uVar31 = uVar31 | 0x78000000;
          in_stack_fffff224 = (char *)0x70a21b;
          UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff22c,&UStack_3e8);
          in_stack_fffff228 = 0x70a222;
          pIStack_c = (OptionsSection__Interface *)UIButton__UIButton(pUVar22,(UIAttributes){0},(((Attribute_L_util__Str_L_char_G___G_ *)cde_rsp_slot())),(Delegate_L_void_G_){0},(KeyCombination){0},(Delegate_L_void_CInputModifiers_G_){0},0,(Delegate_L_void_Cbool_Cbool_Cbool_G_){0});
        }
        pUVar22 = (UIButton *)(uintptr_t)(port_op_new(0x1b0));
        if (pUVar22 == (UIButton *)0x0) {
          pUVar26 = (UIWidget *)0x0;
        }
        else {
          util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_140,"Campaign");
          SStack_8c.Data = (char *)0x0;
          SStack_8c.Capacity = 0;
          SStack_8c.Length = 0;
          uVar31 = uVar31 | 0x80000000;
          pLVar23 = (LocStr *)LocStr__LocStr((LocStr *)apvStack_210,&SStack_140,&SStack_8c);
          pSVar24 = (Str_L_char_G_ *)(uintptr_t)(LocStr__op_mul(pLVar23));
          uStack_160 = 0;
          uStack_15c = 0;
          util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_158,pSVar24);
          in_stack_fffff224 = (char *)0x70a2f3;
          UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff22c,&UStack_3e8);
          in_stack_fffff228 = 0x70a2fa;
          pUVar26 = (UIWidget *)UIButton__UIButton(pUVar22,(UIAttributes){0},(((Attribute_L_util__Str_L_char_G___G_ *)cde_rsp_slot())),(Delegate_L_void_G_){0},(KeyCombination){0},(Delegate_L_void_CInputModifiers_G_){0},0,(Delegate_L_void_Cbool_Cbool_Cbool_G_){0});
          uStack_8 = 7;
        }
        uStack_8 = uStack_8 | 8;
        _auStack_4c = ZEXT812(0x91d1bc);
        (*(uint32_t*)((char*)&(uStack_44)+4)) = 0;
        pIVar19 = pIStack_c;
        pUVar52 = pUStack_3c;
        pUVar55 = pUStack_2c;
        pUVar59 = pUStack_30;
        pUVar63 = pUStack_5c;
        pUVar66 = pUStack_58;
        pUVar70 = pUStack_54;
        pDVar27 = (Data *)(uintptr_t)(UILayout__Data__Add((Data *)auStack_4c,pUVar26));
        pDVar27 = (Data *)(uintptr_t)(UILayout__Data__Add(pDVar27,(UIWidget *)pIVar19));
        pDVar27 = (Data *)(uintptr_t)(UILayout__Data__Add(pDVar27,pUVar52));
        pDVar27 = (Data *)(uintptr_t)(UILayout__Data__Add(pDVar27,pUVar55));
        pDVar27 = (Data *)(uintptr_t)(UILayout__Data__Add(pDVar27,pUVar59));
        pDVar27 = (Data *)(uintptr_t)(UILayout__Data__Add(pDVar27,pUVar63));
        pDVar27 = (Data *)(uintptr_t)(UILayout__Data__Add(pDVar27,pUVar66));
        pDVar27 = (Data *)(uintptr_t)(UILayout__Data__Add(pDVar27,pUVar70));
        (*(uint32_t*)&(uStack_1c)) = (uint32_t)(uintptr_t)((Manager *)0x0);
        (*(uint32_t*)((char*)&(uStack_1c)+4)) = (uint32_t)(uintptr_t)((_func___cdecl_Vec2_L_int_G__void_ptr *)0x0);
        uStack_14 = 0x800000008;
        pLVar28 = LayoutAttributes__Bordered(&LStack_418);
        (pLVar28->Margin).Getter.Callee = (Manager *)uStack_1c;
        (pLVar28->Margin).Getter.CallbackFunction = (Vec2_L_int_G_ (*)(void *))(uintptr_t) (*(uint32_t*)((char*)&(uStack_1c)+4));
        (pLVar28->Margin).Value.X = (int)(UIWidget *)uStack_14;
        (pLVar28->Margin).Value.Y = (int)(*(uint32_t*)((char*)&(uStack_14)+4));
        p_Var44 = (pLVar28->Margin).Getter.Callee;
        p_Var45 = (pLVar28->Margin).Getter.CallbackFunction;
        iVar20 = (pLVar28->Margin).Value.X;
        iVar47 = (pLVar28->Margin).Value.Y;
        pvVar16 = (pLVar28->Padding).Getter.Callee;
        p_Var49 = (pLVar28->Padding).Getter.CallbackFunction;
        fVar46 = (float)(pLVar28->Padding).Value;
        pvVar53 = (pLVar28->Background__HasBackground).Getter.Callee;
        p_Var56 = (pLVar28->Background__HasBackground).Getter.CallbackFunction;
        (*(uint8_t*)&(uVar60)) = (pLVar28->Background__HasBackground).Value;
        (*(uint24_t*)((char*)&(uVar60)+1)) = (*(undefined3 *)(void *)((char *)&((pLVar28->Background__HasBackground)) + 0x9));
        (*(uint8_t*)&(uVar64)) = pLVar28->IsEmbossed;
        (*(uint8_t*)((char*)&(uVar64)+1)) = pLVar28->IsCentered;
        (*(uint8_t*)((char*)&(uVar64)+2)) = pLVar28->DoesScrollbarHaveTrough;
        (*(uint8_t*)((char*)&(uVar64)+3)) = pLVar28->AlwaysConsumeScrolls;
        iVar48 = *(int *)&pLVar28->HasFlexibleSizing;
        UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff220,param_1);
        UVar2.Tag.Data = in_stack_fffff224;
        UVar2.Parent = (Manager *)in_stack_fffff220;
        UVar2.Tag.Capacity = in_stack_fffff228;
        UVar2.Tag.Length = (*(uint32_t*)&(in_stack_fffff22c));
        uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff22c) + 4)),0);
        uVar35 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff22c) + 4)),8);
        UVar2.Location.Getter.Callee = (void *)(int)uVar34;
        UVar2.Location.Getter.CallbackFunction =
             (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
        UVar2.Location.Value.X = (int)uVar35;
        UVar2.Location.Value.Y = (int)((ulonglong)uVar35 >> 0x20);
        UVar2.Visible.Getter.Callee = in_stack_fffff240;
        UVar2.Visible.Getter.CallbackFunction = in_stack_fffff244;
*(uint32_t *)&auVar33 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 4)));
*(uint32_t *)&auVar39 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 140)));
*(uint32_t *)&auVar40 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 156)));
*(uint32_t *)&auVar42 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 200)));
*(uint32_t *)&auVar43 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 244)));
        UVar2.Visible.Value = (bool)in_stack_fffff248[0];
        (*(uint24_t *)((char *)&(UVar2.Visible) + 9)) = (*(uint24_t*)((char*)&(in_stack_fffff248)+1));
        UVar2.Enabled.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar33));
        UVar2.Enabled.Getter.CallbackFunction =
             (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar33)) >> 0x20);
        UVar2.Enabled.Value = (bool)auVar33[8];
        (*(uint24_t *)((char *)&(UVar2.Enabled) + 9)) = (*(uint24_t*)((char*)&(auVar33)+9));
        uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 16)),0);
        uVar35 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 16)),8);
        UVar2.DesiredSize.Getter.Callee = (void *)(int)uVar34;
        UVar2.DesiredSize.Getter.CallbackFunction =
             (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
        UVar2.DesiredSize.Value.X = (int)uVar35;
        UVar2.DesiredSize.Value.Y = (int)((ulonglong)uVar35 >> 0x20);
        uVar34 = SUB248((*(uint32_t *)((char *)&(in_stack_fffff248) + 32)),0);
*(uint32_t *)&auVar38 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffff248) + 32)),8));
        UVar2.FillProportion.Getter.Callee = (void *)(int)uVar34;
        UVar2.FillProportion.Getter.CallbackFunction =
             (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
        UVar2.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar38));
        UVar2.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar38)+8));
        uVar34 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff248) + 56)),0);
        UVar2.HitTestShape.Getter.Callee = (void *)(int)uVar34;
        UVar2.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)(int)((ulonglong)uVar34 >> 0x20));
        UVar2.HitTestShape.Value = SUB124((*(uint32_t *)((char *)&(in_stack_fffff248) + 56)),8);
        (*(uint32_t *)((char *)&(UVar2) + 108)) = (*(uint32_t *)((char *)&(in_stack_fffff248) + 68));
        uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 72)),0);
        UVar2.Depth.Getter.Callee = (void *)(int)uVar34;
        UVar2.Depth.Getter.CallbackFunction =
             (_func___cdecl_double_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
        UVar2.Depth.Value = (double)SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 72)),8);
        uVar34 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff248) + 88)),0);
        UVar2.Icon.Getter.Callee = (void *)(int)uVar34;
        UVar2.Icon.Getter.CallbackFunction = (void (* (*)(void *))(void))((_func___cdecl__func___cdecl_void_ptr_void_ptr *)(int)((ulonglong)uVar34 >> 0x20));
        UVar2.Icon.Value = (_func___cdecl_void *)SUB124((*(uint32_t *)((char *)&(in_stack_fffff248) + 88)),8);
        uVar34 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff248) + 100)),0);
*(uint32_t *)&auVar33 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff248) + 100)),8));
        UVar2.Tooltip.Getter.Callee = (void *)(int)uVar34;
        UVar2.Tooltip.Getter.CallbackFunction =
             (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
        UVar2.Tooltip.Value.Data = (char *)(*(uint32_t*)&(auVar33));
        UVar2.Tooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar33)+4));
        UVar2.Tooltip.Value.Length = (*(uint32_t*)((char*)&(auVar33)+8));
        uVar34 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff248) + 120)),0);
*(uint32_t *)&auVar33 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff248) + 120)),8));
        UVar2.VerboseTooltip.Getter.Callee = (void *)(int)uVar34;
        UVar2.VerboseTooltip.Getter.CallbackFunction =
             (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
        UVar2.VerboseTooltip.Value.Data = (char *)(*(uint32_t*)&(auVar33));
        UVar2.VerboseTooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar33)+4));
        UVar2.VerboseTooltip.Value.Length = (*(uint32_t*)((char*)&(auVar33)+8));
        uVar34 = SUB128((*(uint32_t *)((char *)&(auVar39) + 0)),0);
        UVar2.TextFont.Data.Getter.Callee = (void *)(int)uVar34;
        UVar2.TextFont.Data.Getter.CallbackFunction =
             (_func___cdecl_Font_ptr_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
        UVar2.TextFont.Data.Value = (Font *)SUB124((*(uint32_t *)((char *)&(auVar39) + 0)),8);
        UVar2.TextFont.IsValidData = (bool)auVar39[0xc];
        (*(uint32_t *)((char *)&(UVar2.TextFont) + 13)) = (*(uint32_t *)((char *)&(auVar39) + 13));
        uVar34 = SUB408((*(uint32_t *)((char *)&(auVar40) + 0)),0);
*(uint32_t *)&auVar41 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar40) + 0)),8));
        UVar2.ForegroundColor.Data.Getter.Callee = (void *)(int)uVar34;
        UVar2.ForegroundColor.Data.Getter.CallbackFunction =
             (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
        UVar2.ForegroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar41));
        UVar2.ForegroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar41)+4));
        UVar2.ForegroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar41)+8));
        UVar2.ForegroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar41) + 12));
        UVar2.ForegroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar41) + 16));
        UVar2.ForegroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar41) + 20));
        UVar2.ForegroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar41) + 24));
        UVar2.ForegroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar41) + 28));
        UVar2.ForegroundColor.IsValidData = (bool)auVar40[0x28];
        (*(uint32_t *)((char *)&(UVar2.ForegroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar40) + 41));
        uVar34 = SUB408((*(uint32_t *)((char *)&(auVar42) + 0)),0);
*(uint32_t *)&auVar41 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar42) + 0)),8));
        UVar2.BackgroundColor.Data.Getter.Callee = (void *)(int)uVar34;
        UVar2.BackgroundColor.Data.Getter.CallbackFunction =
             (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
        UVar2.BackgroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar41));
        UVar2.BackgroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar41)+4));
        UVar2.BackgroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar41)+8));
        UVar2.BackgroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar41) + 12));
        UVar2.BackgroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar41) + 16));
        UVar2.BackgroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar41) + 20));
        UVar2.BackgroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar41) + 24));
        UVar2.BackgroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar41) + 28));
        UVar2.BackgroundColor.IsValidData = (bool)auVar42[0x28];
        (*(uint32_t *)((char *)&(UVar2.BackgroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar42) + 41));
        uVar34 = SUB408((*(uint32_t *)((char *)&(auVar43) + 0)),0);
*(uint32_t *)&auVar41 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar43) + 0)),8));
        UVar2.TextColor.Data.Getter.Callee = (void *)(int)uVar34;
        UVar2.TextColor.Data.Getter.CallbackFunction =
             (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
        UVar2.TextColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar41));
        UVar2.TextColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar41)+4));
        UVar2.TextColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar41)+8));
        UVar2.TextColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar41) + 12));
        UVar2.TextColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar41) + 16));
        UVar2.TextColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar41) + 20));
        UVar2.TextColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar41) + 24));
        UVar2.TextColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar41) + 28));
        UVar2.TextColor.IsValidData = (bool)auVar43[0x28];
        (*(uint32_t *)((char *)&(UVar2.TextColor) + 41)) = (*(uint32_t *)((char *)&(auVar43) + 41));
        LVar8.Margin.Getter.CallbackFunction = p_Var45;
        LVar8.Margin.Getter.Callee = p_Var44;
        LVar8.Margin.Value.X = iVar20;
        LVar8.Margin.Value.Y = iVar47;
        LVar8.Padding.Getter.Callee = pvVar16;
        LVar8.Padding.Getter.CallbackFunction = p_Var49;
        LVar8.Padding.Value = (int)fVar46;
        LVar8.Background__HasBackground.Getter.Callee = pvVar53;
        LVar8.Background__HasBackground.Getter.CallbackFunction = p_Var56;
        LVar8.Background__HasBackground.Value = SUB41(uVar60,0);
        (*(uint24_t *)((char *)&(LVar8.Background__HasBackground) + 9)) = SUB43(uVar60,1);
        LVar8.IsEmbossed = (bool)(char)uVar64;
        LVar8.IsCentered = (bool)(char)((uint)uVar64 >> 8);
        LVar8.DoesScrollbarHaveTrough = (bool)(char)((uint)uVar64 >> 0x10);
        LVar8.AlwaysConsumeScrolls = (bool)(char)((uint)uVar64 >> 0x18);
        (*(uint32_t *)((char *)&(LVar8) + 44)) = iVar48;
        pIStack_c = (OptionsSection__Interface *)UIRowLayout__UIRowLayout(pUStack_50,UVar2,LVar8,pDVar27);
      }
      uStack_8 = uStack_8 | 0x10;
      puVar29 = (undefined4 *)LayoutAttributes__LayoutAttributes(&LStack_448);
      *(undefined1 *)((int)puVar29 + 0x29) = 1;
      pUVar15 = (UIAttributes *)UIAttributes__UIAttributes(&UStack_9c8,param_1);
      (*(uint32_t*)&(uStack_1c)) = (uint32_t)(uintptr_t)((Manager *)0x0);
      (*(uint32_t*)((char*)&(uStack_1c)+4)) = (uint32_t)(uintptr_t)((_func___cdecl_Vec2_L_int_G__void_ptr *)0x3ff00000);
      uStack_14 = 0x3ff0000000000000;
      uStack_24 = 0;
      uStack_20 = 0;
      (pUVar15->FillProportion).Getter.Callee = (void *)0x0;
      (pUVar15->FillProportion).Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0
      ;
      *(undefined4 *)&(pUVar15->FillProportion).Value.X = 0;
      *(undefined4 *)((int)&(pUVar15->FillProportion).Value.X + 4) = 0x3ff00000;
      (pUVar15->FillProportion).Value.Y = 1.0;
      in_stack_fffff368 = (_func___cdecl_Color_void_ptr *)*puVar29;
      in_stack_fffff36c = (float)puVar29[1];
      in_stack_fffff370 = puVar29[2];
      in_stack_fffff374 = puVar29[3];
      in_stack_fffff378 = puVar29[4];
      in_stack_fffff37c = (float)puVar29[5];
      in_stack_fffff380 = (float)puVar29[6];
      in_stack_fffff384 = (char *)puVar29[7];
      in_stack_fffff388 = (float)puVar29[8];
      uVar58 = puVar29[9];
      uVar60 = puVar29[10];
      iVar20 = puVar29[0xb];
      pIVar19 = pIStack_c;
      UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff220,pUVar15);
      UVar3.Tag.Data = in_stack_fffff224;
      UVar3.Parent = (Manager *)in_stack_fffff220;
      UVar3.Tag.Capacity = in_stack_fffff228;
      UVar3.Tag.Length = (*(uint32_t*)&(in_stack_fffff22c));
      uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff22c) + 4)),0);
      uVar35 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff22c) + 4)),8);
      UVar3.Location.Getter.Callee = (void *)(int)uVar34;
      UVar3.Location.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar3.Location.Value.X = (int)uVar35;
      UVar3.Location.Value.Y = (int)((ulonglong)uVar35 >> 0x20);
      UVar3.Visible.Getter.Callee = in_stack_fffff240;
      UVar3.Visible.Getter.CallbackFunction = in_stack_fffff244;
*(uint32_t *)&auVar33 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 4)));
*(uint32_t *)&auVar39 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 140)));
*(uint32_t *)&auVar40 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 156)));
*(uint32_t *)&auVar42 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 200)));
*(uint32_t *)&auVar43 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 244)));
      UVar3.Visible.Value = (bool)in_stack_fffff248[0];
      (*(uint24_t *)((char *)&(UVar3.Visible) + 9)) = (*(uint24_t*)((char*)&(in_stack_fffff248)+1));
      UVar3.Enabled.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar33));
      UVar3.Enabled.Getter.CallbackFunction =
           (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar33)) >> 0x20);
      UVar3.Enabled.Value = (bool)auVar33[8];
      (*(uint24_t *)((char *)&(UVar3.Enabled) + 9)) = (*(uint24_t*)((char*)&(auVar33)+9));
      uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 16)),0);
      uVar35 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 16)),8);
      UVar3.DesiredSize.Getter.Callee = (void *)(int)uVar34;
      UVar3.DesiredSize.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar3.DesiredSize.Value.X = (int)uVar35;
      UVar3.DesiredSize.Value.Y = (int)((ulonglong)uVar35 >> 0x20);
      uVar34 = SUB248((*(uint32_t *)((char *)&(in_stack_fffff248) + 32)),0);
*(uint32_t *)&auVar38 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffff248) + 32)),8));
      UVar3.FillProportion.Getter.Callee = (void *)(int)uVar34;
      UVar3.FillProportion.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar3.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar38));
      UVar3.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar38)+8));
      uVar34 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff248) + 56)),0);
      UVar3.HitTestShape.Getter.Callee = (void *)(int)uVar34;
      UVar3.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)(int)((ulonglong)uVar34 >> 0x20));
      UVar3.HitTestShape.Value = SUB124((*(uint32_t *)((char *)&(in_stack_fffff248) + 56)),8);
      (*(uint32_t *)((char *)&(UVar3) + 108)) = (*(uint32_t *)((char *)&(in_stack_fffff248) + 68));
      uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 72)),0);
      UVar3.Depth.Getter.Callee = (void *)(int)uVar34;
      UVar3.Depth.Getter.CallbackFunction =
           (_func___cdecl_double_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar3.Depth.Value = (double)SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 72)),8);
      uVar34 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff248) + 88)),0);
      UVar3.Icon.Getter.Callee = (void *)(int)uVar34;
      UVar3.Icon.Getter.CallbackFunction = (void (* (*)(void *))(void))((_func___cdecl__func___cdecl_void_ptr_void_ptr *)(int)((ulonglong)uVar34 >> 0x20));
      UVar3.Icon.Value = (_func___cdecl_void *)SUB124((*(uint32_t *)((char *)&(in_stack_fffff248) + 88)),8);
      uVar34 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff248) + 100)),0);
*(uint32_t *)&auVar33 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff248) + 100)),8));
      UVar3.Tooltip.Getter.Callee = (void *)(int)uVar34;
      UVar3.Tooltip.Getter.CallbackFunction =
           (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar3.Tooltip.Value.Data = (char *)(*(uint32_t*)&(auVar33));
      UVar3.Tooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar33)+4));
      UVar3.Tooltip.Value.Length = (*(uint32_t*)((char*)&(auVar33)+8));
      uVar34 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff248) + 120)),0);
*(uint32_t *)&auVar33 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff248) + 120)),8));
      UVar3.VerboseTooltip.Getter.Callee = (void *)(int)uVar34;
      UVar3.VerboseTooltip.Getter.CallbackFunction =
           (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar3.VerboseTooltip.Value.Data = (char *)(*(uint32_t*)&(auVar33));
      UVar3.VerboseTooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar33)+4));
      UVar3.VerboseTooltip.Value.Length = (*(uint32_t*)((char*)&(auVar33)+8));
      uVar34 = SUB128((*(uint32_t *)((char *)&(auVar39) + 0)),0);
      UVar3.TextFont.Data.Getter.Callee = (void *)(int)uVar34;
      UVar3.TextFont.Data.Getter.CallbackFunction =
           (_func___cdecl_Font_ptr_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar3.TextFont.Data.Value = (Font *)SUB124((*(uint32_t *)((char *)&(auVar39) + 0)),8);
      UVar3.TextFont.IsValidData = (bool)auVar39[0xc];
      (*(uint32_t *)((char *)&(UVar3.TextFont) + 13)) = (*(uint32_t *)((char *)&(auVar39) + 13));
      uVar34 = SUB408((*(uint32_t *)((char *)&(auVar40) + 0)),0);
*(uint32_t *)&auVar41 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar40) + 0)),8));
      UVar3.ForegroundColor.Data.Getter.Callee = (void *)(int)uVar34;
      UVar3.ForegroundColor.Data.Getter.CallbackFunction =
           (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar3.ForegroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar41));
      UVar3.ForegroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar41)+4));
      UVar3.ForegroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar41)+8));
      UVar3.ForegroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar41) + 12));
      UVar3.ForegroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar41) + 16));
      UVar3.ForegroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar41) + 20));
      UVar3.ForegroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar41) + 24));
      UVar3.ForegroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar41) + 28));
      UVar3.ForegroundColor.IsValidData = (bool)auVar40[0x28];
      (*(uint32_t *)((char *)&(UVar3.ForegroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar40) + 41));
      uVar34 = SUB408((*(uint32_t *)((char *)&(auVar42) + 0)),0);
*(uint32_t *)&auVar41 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar42) + 0)),8));
      UVar3.BackgroundColor.Data.Getter.Callee = (void *)(int)uVar34;
      UVar3.BackgroundColor.Data.Getter.CallbackFunction =
           (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar3.BackgroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar41));
      UVar3.BackgroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar41)+4));
      UVar3.BackgroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar41)+8));
      UVar3.BackgroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar41) + 12));
      UVar3.BackgroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar41) + 16));
      UVar3.BackgroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar41) + 20));
      UVar3.BackgroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar41) + 24));
      UVar3.BackgroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar41) + 28));
      UVar3.BackgroundColor.IsValidData = (bool)auVar42[0x28];
      (*(uint32_t *)((char *)&(UVar3.BackgroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar42) + 41));
      uVar34 = SUB408((*(uint32_t *)((char *)&(auVar43) + 0)),0);
*(uint32_t *)&auVar41 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar43) + 0)),8));
      UVar3.TextColor.Data.Getter.Callee = (void *)(int)uVar34;
      UVar3.TextColor.Data.Getter.CallbackFunction =
           (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar3.TextColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar41));
      UVar3.TextColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar41)+4));
      UVar3.TextColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar41)+8));
      UVar3.TextColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar41) + 12));
      UVar3.TextColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar41) + 16));
      UVar3.TextColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar41) + 20));
      UVar3.TextColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar41) + 24));
      UVar3.TextColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar41) + 28));
      UVar3.TextColor.IsValidData = (bool)auVar43[0x28];
      (*(uint32_t *)((char *)&(UVar3.TextColor) + 41)) = (*(uint32_t *)((char *)&(auVar43) + 41));
      LVar9.Margin.Getter.CallbackFunction = *(_func___cdecl_Vec2_L_int_G__void_ptr *)&(in_stack_fffff36c);
      LVar9.Margin.Getter.Callee = in_stack_fffff368;
      LVar9.Margin.Value.X = in_stack_fffff370;
      LVar9.Margin.Value.Y = in_stack_fffff374;
      LVar9.Padding.Getter.Callee = (void *)in_stack_fffff378;
      LVar9.Padding.Getter.CallbackFunction = *(_func___cdecl_int_void_ptr *)&(in_stack_fffff37c);
      LVar9.Padding.Value = (int)in_stack_fffff380;
      LVar9.Background__HasBackground.Getter.Callee = in_stack_fffff384;
      LVar9.Background__HasBackground.Getter.CallbackFunction = (_func___cdecl_bool_void_ptr *)(uintptr_t)*(uint32_t *)&in_stack_fffff388
      ;
      LVar9.Background__HasBackground.Value = SUB41(uVar58,0);
      (*(uint24_t *)((char *)&(LVar9.Background__HasBackground) + 9)) = SUB43(uVar58,1);
      LVar9.IsEmbossed = (bool)(char)uVar60;
      LVar9.IsCentered = (bool)(char)((uint)uVar60 >> 8);
      LVar9.DoesScrollbarHaveTrough = (bool)(char)((uint)uVar60 >> 0x10);
      LVar9.AlwaysConsumeScrolls = (bool)(char)((uint)uVar60 >> 0x18);
      (*(uint32_t *)((char *)&(LVar9) + 44)) = iVar20;
      pUStack_3c = (UIWidget *)
                   UIBoxLayout__UIBoxLayout((*(uint32_t*)((char*)&(uStack_64)+4)),UVar3,LVar9,(UIWidget *)pIVar19);
    }
    pUStack_50 = (UIRowLayout *)(uintptr_t)(port_op_new(0x218));
    if (pUStack_50 == (UIRowLayout *)0x0) {
      pUVar26 = (UIWidget *)0x0;
    }
    else {
      pvVar16 = (void *)(uintptr_t)(port_op_new(0x178));
      uStack_64 = (double)CONCAT44(pvVar16,(undefined4)uStack_64);
      if (pvVar16 == (void *)0x0) {
        pIStack_c = (OptionsSection__Interface *)0x0;
      }
      else {
        uStack_8 = uStack_8 | 0x20;
        pcVar69 = (long long int (*)())(MethodCallerConst_L__private__void___thiscall_MainManager__RenderTitle_void_const__G_);
        uVar62 = 0;
        (*(uint32_t*)((char*)&(uStack_1c)+4)) = (uint32_t)(uintptr_t)
             util__DelegateFactory_class_MainManager_struct_util__Vec2_int_____MethodCallerConst__private__struct_util__Vec2_int____thiscall_MainManager__GetMainTitleSize_void_const
        ;
        uStack_14 = 0;
        pMVar67 = param_1;
        (*(uint32_t*)&(uStack_1c)) = (uint32_t)(uintptr_t)(param_1);
        pUVar15 = (UIAttributes *)UIAttributes__UIAttributes(&UStack_880,param_1);
        (pUVar15->DesiredSize).Getter.Callee = (Manager *)uStack_1c;
        (pUVar15->DesiredSize).Getter.CallbackFunction = (Vec2_L_int_G_ (*)(void *))(uintptr_t) (*(uint32_t*)((char*)&(uStack_1c)+4));
        (pUVar15->DesiredSize).Value.X = (int)(UIWidget *)uStack_14;
        (pUVar15->DesiredSize).Value.Y = (int)(*(uint32_t*)((char*)&(uStack_14)+4));
        in_stack_fffff240 = (_func___cdecl_Vec2_L_int_G__void_ptr *)0x70a4ec;
        UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff248,pUVar15);
        in_stack_fffff244 = (_func___cdecl_bool_void_ptr *)0x70a4f4;
        UVar7.TextColor.Data.Getter.CallbackFunction = in_stack_fffff368;
*(uint32_t *)&auVar33 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 4)));
*(uint32_t *)&auVar36 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 32)));
*(uint32_t *)&auVar37 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 44)));
*(uint32_t *)&auVar39 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 180)));
*(uint32_t *)&auVar40 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 196)));
*(uint32_t *)&auVar42 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 240)));
        UVar7.Parent = (Manager *)(*(uint32_t*)&(in_stack_fffff248));
        UVar7.Tag.Data = (char *)(*(uint32_t*)&(auVar33));
        UVar7.Tag.Capacity = (*(uint32_t*)((char*)&(auVar33)+4));
        UVar7.Tag.Length = (*(uint32_t*)((char*)&(auVar33)+8));
        uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 16)),0);
        uVar35 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 16)),8);
        UVar7.Location.Getter.Callee = (void *)(int)uVar34;
        UVar7.Location.Getter.CallbackFunction =
             (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
        UVar7.Location.Value.X = (int)uVar35;
        UVar7.Location.Value.Y = (int)((ulonglong)uVar35 >> 0x20);
        UVar7.Visible.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar36));
        UVar7.Visible.Getter.CallbackFunction =
             (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar36)) >> 0x20);
        UVar7.Visible.Value = (bool)auVar36[8];
        (*(uint24_t *)((char *)&(UVar7.Visible) + 9)) = (*(uint24_t*)((char*)&(auVar36)+9));
        UVar7.Enabled.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar37));
        UVar7.Enabled.Getter.CallbackFunction =
             (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar37)) >> 0x20);
        UVar7.Enabled.Value = (bool)auVar37[8];
        (*(uint24_t *)((char *)&(UVar7.Enabled) + 9)) = (*(uint24_t*)((char*)&(auVar37)+9));
        uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 56)),0);
        uVar35 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 56)),8);
        UVar7.DesiredSize.Getter.Callee = (void *)(int)uVar34;
        UVar7.DesiredSize.Getter.CallbackFunction =
             (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
        UVar7.DesiredSize.Value.X = (int)uVar35;
        UVar7.DesiredSize.Value.Y = (int)((ulonglong)uVar35 >> 0x20);
        uVar34 = SUB248((*(uint32_t *)((char *)&(in_stack_fffff248) + 72)),0);
*(uint32_t *)&auVar38 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffff248) + 72)),8));
        UVar7.FillProportion.Getter.Callee = (void *)(int)uVar34;
        UVar7.FillProportion.Getter.CallbackFunction =
             (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
        UVar7.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar38));
        UVar7.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar38)+8));
        uVar34 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff248) + 96)),0);
        UVar7.HitTestShape.Getter.Callee = (void *)(int)uVar34;
        UVar7.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)(int)((ulonglong)uVar34 >> 0x20));
        UVar7.HitTestShape.Value = SUB124((*(uint32_t *)((char *)&(in_stack_fffff248) + 96)),8);
        (*(uint32_t *)((char *)&(UVar7) + 108)) = (*(uint32_t *)((char *)&(in_stack_fffff248) + 108));
        uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 112)),0);
        UVar7.Depth.Getter.Callee = (void *)(int)uVar34;
        UVar7.Depth.Getter.CallbackFunction =
             (_func___cdecl_double_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
        UVar7.Depth.Value = (double)SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 112)),8);
        uVar34 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff248) + 128)),0);
        UVar7.Icon.Getter.Callee = (void *)(int)uVar34;
        UVar7.Icon.Getter.CallbackFunction = (void (* (*)(void *))(void))((_func___cdecl__func___cdecl_void_ptr_void_ptr *)(int)((ulonglong)uVar34 >> 0x20));
        UVar7.Icon.Value = (_func___cdecl_void *)SUB124((*(uint32_t *)((char *)&(in_stack_fffff248) + 128)),8);
        uVar34 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff248) + 140)),0);
*(uint32_t *)&auVar33 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff248) + 140)),8));
        UVar7.Tooltip.Getter.Callee = (void *)(int)uVar34;
        UVar7.Tooltip.Getter.CallbackFunction =
             (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
        UVar7.Tooltip.Value.Data = (char *)(*(uint32_t*)&(auVar33));
        UVar7.Tooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar33)+4));
        UVar7.Tooltip.Value.Length = (*(uint32_t*)((char*)&(auVar33)+8));
        uVar34 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff248) + 160)),0);
*(uint32_t *)&auVar33 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff248) + 160)),8));
        UVar7.VerboseTooltip.Getter.Callee = (void *)(int)uVar34;
        UVar7.VerboseTooltip.Getter.CallbackFunction =
             (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
        UVar7.VerboseTooltip.Value.Data = (char *)(*(uint32_t*)&(auVar33));
        UVar7.VerboseTooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar33)+4));
        UVar7.VerboseTooltip.Value.Length = (*(uint32_t*)((char*)&(auVar33)+8));
        uVar34 = SUB128((*(uint32_t *)((char *)&(auVar39) + 0)),0);
        UVar7.TextFont.Data.Getter.Callee = (void *)(int)uVar34;
        UVar7.TextFont.Data.Getter.CallbackFunction =
             (_func___cdecl_Font_ptr_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
        UVar7.TextFont.Data.Value = (Font *)SUB124((*(uint32_t *)((char *)&(auVar39) + 0)),8);
        UVar7.TextFont.IsValidData = (bool)auVar39[0xc];
        (*(uint32_t *)((char *)&(UVar7.TextFont) + 13)) = (*(uint32_t *)((char *)&(auVar39) + 13));
        uVar34 = SUB408((*(uint32_t *)((char *)&(auVar40) + 0)),0);
*(uint32_t *)&auVar41 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar40) + 0)),8));
        UVar7.ForegroundColor.Data.Getter.Callee = (void *)(int)uVar34;
        UVar7.ForegroundColor.Data.Getter.CallbackFunction =
             (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
        UVar7.ForegroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar41));
        UVar7.ForegroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar41)+4));
        UVar7.ForegroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar41)+8));
        UVar7.ForegroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar41) + 12));
        UVar7.ForegroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar41) + 16));
        UVar7.ForegroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar41) + 20));
        UVar7.ForegroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar41) + 24));
        UVar7.ForegroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar41) + 28));
        UVar7.ForegroundColor.IsValidData = (bool)auVar40[0x28];
        (*(uint32_t *)((char *)&(UVar7.ForegroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar40) + 41));
        uVar34 = SUB408((*(uint32_t *)((char *)&(auVar42) + 0)),0);
*(uint32_t *)&auVar41 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar42) + 0)),8));
        UVar7.BackgroundColor.Data.Getter.Callee = (void *)(int)uVar34;
        UVar7.BackgroundColor.Data.Getter.CallbackFunction =
             (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
        UVar7.BackgroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar41));
        UVar7.BackgroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar41)+4));
        UVar7.BackgroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar41)+8));
        UVar7.BackgroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar41) + 12));
        UVar7.BackgroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar41) + 16));
        UVar7.BackgroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar41) + 20));
        UVar7.BackgroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar41) + 24));
        UVar7.BackgroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar41) + 28));
        UVar7.BackgroundColor.IsValidData = (bool)auVar42[0x28];
        (*(uint32_t *)((char *)&(UVar7.BackgroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar42) + 41));
        UVar7.TextColor.Data.Getter.Callee = (void *)(*(uint32_t *)((char *)&(in_stack_fffff248) + 284));
        UVar7.TextColor.Data.Value._pad_0x0_0 = (int)in_stack_fffff36c;
        UVar7.TextColor.Data.Value._pad_0x4_1 = in_stack_fffff370;
        UVar7.TextColor.Data.Value._pad_0x8_2 = in_stack_fffff374;
        UVar7.TextColor.Data.Value._pad_0xc_3 = in_stack_fffff378;
        UVar7.TextColor.Data.Value.Hue_degrees = in_stack_fffff37c;
        UVar7.TextColor.Data.Value.Saturation = in_stack_fffff380;
        UVar7.TextColor.Data.Value.Value = (double)(uintptr_t)((float)(int)(uintptr_t)(in_stack_fffff384));
        UVar7.TextColor.Data.Value.Alpha = in_stack_fffff388;
        UVar7.TextColor.IsValidData = SUB41(uVar58,0);
        (*(uint32_t *)((char *)&(UVar7.TextColor) + 41)) = SUB43(uVar58,1);
        DVar13.CallbackFunction = (void (*)(void *))(pcVar69);
        DVar13.Callee = pMVar67;
        pIStack_c = (OptionsSection__Interface *)
                    UIImage__UIImage((UIImage *)(*(uint32_t*)((char*)&(uStack_64)+4)),UVar7,(bool)uVar62,DVar13);
      }
      uStack_8 = uStack_8 | 0x40;
      puVar29 = (undefined4 *)LayoutAttributes__LayoutAttributes(&LStack_478);
      *(undefined1 *)((int)puVar29 + 0x29) = 1;
      pUVar15 = (UIAttributes *)UIAttributes__UIAttributes(&UStack_738,param_1);
      (*(uint32_t*)&(uStack_1c)) = (uint32_t)(uintptr_t)((Manager *)0x0);
      (*(uint32_t*)((char*)&(uStack_1c)+4)) = (uint32_t)(uintptr_t)((_func___cdecl_Vec2_L_int_G__void_ptr *)0x3ff00000);
      uStack_14 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      (pUVar15->FillProportion).Getter.Callee = (void *)0x0;
      (pUVar15->FillProportion).Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0
      ;
      *(undefined4 *)&(pUVar15->FillProportion).Value.X = 0;
      *(undefined4 *)((int)&(pUVar15->FillProportion).Value.X + 4) = 0x3ff00000;
      (pUVar15->FillProportion).Value.Y = 0.0;
      p_Var44 = (_func___cdecl_Color_void_ptr *)*puVar29;
      fVar46 = (float)puVar29[1];
      iVar20 = puVar29[2];
      iVar47 = puVar29[3];
      iVar48 = puVar29[4];
      fVar50 = (float)puVar29[5];
      fVar51 = (float)puVar29[6];
      fVar54 = (float)puVar29[7];
      fVar57 = (float)puVar29[8];
      uVar58 = puVar29[9];
      uVar60 = puVar29[10];
      iVar68 = puVar29[0xb];
      pIVar19 = pIStack_c;
      UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff220,pUVar15);
      UVar4.Tag.Data = in_stack_fffff224;
      UVar4.Parent = (Manager *)in_stack_fffff220;
      UVar4.Tag.Capacity = in_stack_fffff228;
      UVar4.Tag.Length = (*(uint32_t*)&(in_stack_fffff22c));
      uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff22c) + 4)),0);
      uVar35 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff22c) + 4)),8);
      UVar4.Location.Getter.Callee = (void *)(int)uVar34;
      UVar4.Location.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar4.Location.Value.X = (int)uVar35;
      UVar4.Location.Value.Y = (int)((ulonglong)uVar35 >> 0x20);
      UVar4.Visible.Getter.Callee = in_stack_fffff240;
      UVar4.Visible.Getter.CallbackFunction = in_stack_fffff244;
*(uint32_t *)&auVar33 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 4)));
*(uint32_t *)&auVar39 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 140)));
*(uint32_t *)&auVar40 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 156)));
*(uint32_t *)&auVar42 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 200)));
*(uint32_t *)&auVar43 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 244)));
      UVar4.Visible.Value = (bool)in_stack_fffff248[0];
      (*(uint24_t *)((char *)&(UVar4.Visible) + 9)) = (*(uint24_t*)((char*)&(in_stack_fffff248)+1));
      UVar4.Enabled.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar33));
      UVar4.Enabled.Getter.CallbackFunction =
           (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar33)) >> 0x20);
      UVar4.Enabled.Value = (bool)auVar33[8];
      (*(uint24_t *)((char *)&(UVar4.Enabled) + 9)) = (*(uint24_t*)((char*)&(auVar33)+9));
      uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 16)),0);
      uVar35 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 16)),8);
      UVar4.DesiredSize.Getter.Callee = (void *)(int)uVar34;
      UVar4.DesiredSize.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar4.DesiredSize.Value.X = (int)uVar35;
      UVar4.DesiredSize.Value.Y = (int)((ulonglong)uVar35 >> 0x20);
      uVar34 = SUB248((*(uint32_t *)((char *)&(in_stack_fffff248) + 32)),0);
*(uint32_t *)&auVar38 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffff248) + 32)),8));
      UVar4.FillProportion.Getter.Callee = (void *)(int)uVar34;
      UVar4.FillProportion.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar4.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar38));
      UVar4.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar38)+8));
      uVar34 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff248) + 56)),0);
      UVar4.HitTestShape.Getter.Callee = (void *)(int)uVar34;
      UVar4.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)(int)((ulonglong)uVar34 >> 0x20));
      UVar4.HitTestShape.Value = SUB124((*(uint32_t *)((char *)&(in_stack_fffff248) + 56)),8);
      (*(uint32_t *)((char *)&(UVar4) + 108)) = (*(uint32_t *)((char *)&(in_stack_fffff248) + 68));
      uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 72)),0);
      UVar4.Depth.Getter.Callee = (void *)(int)uVar34;
      UVar4.Depth.Getter.CallbackFunction =
           (_func___cdecl_double_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar4.Depth.Value = (double)SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 72)),8);
      uVar34 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff248) + 88)),0);
      UVar4.Icon.Getter.Callee = (void *)(int)uVar34;
      UVar4.Icon.Getter.CallbackFunction = (void (* (*)(void *))(void))((_func___cdecl__func___cdecl_void_ptr_void_ptr *)(int)((ulonglong)uVar34 >> 0x20));
      UVar4.Icon.Value = (_func___cdecl_void *)SUB124((*(uint32_t *)((char *)&(in_stack_fffff248) + 88)),8);
      uVar34 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff248) + 100)),0);
*(uint32_t *)&auVar33 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff248) + 100)),8));
      UVar4.Tooltip.Getter.Callee = (void *)(int)uVar34;
      UVar4.Tooltip.Getter.CallbackFunction =
           (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar4.Tooltip.Value.Data = (char *)(*(uint32_t*)&(auVar33));
      UVar4.Tooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar33)+4));
      UVar4.Tooltip.Value.Length = (*(uint32_t*)((char*)&(auVar33)+8));
      uVar34 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff248) + 120)),0);
*(uint32_t *)&auVar33 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff248) + 120)),8));
      UVar4.VerboseTooltip.Getter.Callee = (void *)(int)uVar34;
      UVar4.VerboseTooltip.Getter.CallbackFunction =
           (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar4.VerboseTooltip.Value.Data = (char *)(*(uint32_t*)&(auVar33));
      UVar4.VerboseTooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar33)+4));
      UVar4.VerboseTooltip.Value.Length = (*(uint32_t*)((char*)&(auVar33)+8));
      uVar34 = SUB128((*(uint32_t *)((char *)&(auVar39) + 0)),0);
      UVar4.TextFont.Data.Getter.Callee = (void *)(int)uVar34;
      UVar4.TextFont.Data.Getter.CallbackFunction =
           (_func___cdecl_Font_ptr_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar4.TextFont.Data.Value = (Font *)SUB124((*(uint32_t *)((char *)&(auVar39) + 0)),8);
      UVar4.TextFont.IsValidData = (bool)auVar39[0xc];
      (*(uint32_t *)((char *)&(UVar4.TextFont) + 13)) = (*(uint32_t *)((char *)&(auVar39) + 13));
      uVar34 = SUB408((*(uint32_t *)((char *)&(auVar40) + 0)),0);
*(uint32_t *)&auVar41 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar40) + 0)),8));
      UVar4.ForegroundColor.Data.Getter.Callee = (void *)(int)uVar34;
      UVar4.ForegroundColor.Data.Getter.CallbackFunction =
           (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar4.ForegroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar41));
      UVar4.ForegroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar41)+4));
      UVar4.ForegroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar41)+8));
      UVar4.ForegroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar41) + 12));
      UVar4.ForegroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar41) + 16));
      UVar4.ForegroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar41) + 20));
      UVar4.ForegroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar41) + 24));
      UVar4.ForegroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar41) + 28));
      UVar4.ForegroundColor.IsValidData = (bool)auVar40[0x28];
      (*(uint32_t *)((char *)&(UVar4.ForegroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar40) + 41));
      uVar34 = SUB408((*(uint32_t *)((char *)&(auVar42) + 0)),0);
*(uint32_t *)&auVar41 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar42) + 0)),8));
      UVar4.BackgroundColor.Data.Getter.Callee = (void *)(int)uVar34;
      UVar4.BackgroundColor.Data.Getter.CallbackFunction =
           (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar4.BackgroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar41));
      UVar4.BackgroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar41)+4));
      UVar4.BackgroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar41)+8));
      UVar4.BackgroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar41) + 12));
      UVar4.BackgroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar41) + 16));
      UVar4.BackgroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar41) + 20));
      UVar4.BackgroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar41) + 24));
      UVar4.BackgroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar41) + 28));
      UVar4.BackgroundColor.IsValidData = (bool)auVar42[0x28];
      (*(uint32_t *)((char *)&(UVar4.BackgroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar42) + 41));
      uVar34 = SUB408((*(uint32_t *)((char *)&(auVar43) + 0)),0);
*(uint32_t *)&auVar41 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar43) + 0)),8));
      UVar4.TextColor.Data.Getter.Callee = (void *)(int)uVar34;
      UVar4.TextColor.Data.Getter.CallbackFunction =
           (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar4.TextColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar41));
      UVar4.TextColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar41)+4));
      UVar4.TextColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar41)+8));
      UVar4.TextColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar41) + 12));
      UVar4.TextColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar41) + 16));
      UVar4.TextColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar41) + 20));
      UVar4.TextColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar41) + 24));
      UVar4.TextColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar41) + 28));
      UVar4.TextColor.IsValidData = (bool)auVar43[0x28];
      (*(uint32_t *)((char *)&(UVar4.TextColor) + 41)) = (*(uint32_t *)((char *)&(auVar43) + 41));
      LVar10.Margin.Getter.CallbackFunction = *(_func___cdecl_Vec2_L_int_G__void_ptr *)&(fVar46);
      LVar10.Margin.Getter.Callee = p_Var44;
      LVar10.Margin.Value.X = iVar20;
      LVar10.Margin.Value.Y = iVar47;
      LVar10.Padding.Getter.Callee = (void *)iVar48;
      LVar10.Padding.Getter.CallbackFunction = *(_func___cdecl_int_void_ptr *)&(fVar50);
      LVar10.Padding.Value = (int)fVar51;
      LVar10.Background__HasBackground.Getter.Callee = *(void **)&(fVar54);
      LVar10.Background__HasBackground.Getter.CallbackFunction = *(_func___cdecl_bool_void_ptr *)&(fVar57);
      LVar10.Background__HasBackground.Value = SUB41(uVar58,0);
      (*(uint24_t *)((char *)&(LVar10.Background__HasBackground) + 9)) = SUB43(uVar58,1);
      LVar10.IsEmbossed = (bool)(char)uVar60;
      LVar10.IsCentered = (bool)(char)((uint)uVar60 >> 8);
      LVar10.DoesScrollbarHaveTrough = (bool)(char)((uint)uVar60 >> 0x10);
      LVar10.AlwaysConsumeScrolls = (bool)(char)((uint)uVar60 >> 0x18);
      (*(uint32_t *)((char *)&(LVar10) + 44)) = iVar68;
      pUVar26 = (UIWidget *)
                UIBoxLayout__UIBoxLayout((UIBoxLayout *)pUStack_50,UVar4,LVar10,(UIWidget *)pIVar19)
      ;
    }
    uStack_8 = uStack_8 | 0x180;
    DStack_80.Widgets._pad_0x0_0 = (int)&vftable_48;
    DStack_80.Widgets.Data = (SharedPtr_L_UIWidget_G_ *)0x0;
    DStack_80.Widgets.Size = 0;
    DStack_80.Widgets.Capacity = 0;
    pUVar52 = pUStack_3c;
    pDVar27 = (Data *)(uintptr_t)(UILayout__Data__Add(&DStack_80,pUVar26));
    pDVar27 = (Data *)(uintptr_t)(UILayout__Data__Add(pDVar27,pUVar52));
    uStack_1c = 0;
    (*(uint32_t*)&(uStack_14)) = (uint32_t)(uintptr_t)((UIWidget *)0x14);
    (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)((UIWidget *)0x14);
    pLVar28 = LayoutAttributes__OpenScreen(&LStack_4a8);
    (pLVar28->Margin).Getter.Callee = (Manager *)uStack_1c;
    (pLVar28->Margin).Getter.CallbackFunction = (Vec2_L_int_G_ (*)(void *))(uintptr_t) (*(uint32_t*)((char*)&(uStack_1c)+4));
    (pLVar28->Margin).Value.X = (int)(UIWidget *)uStack_14;
    (pLVar28->Margin).Value.Y = (int)(*(uint32_t*)((char*)&(uStack_14)+4));
    pUVar15 = (UIAttributes *)UIAttributes__UIAttributes(&UStack_5f0,param_1);
    (*(uint32_t*)&(uStack_1c)) = (uint32_t)(uintptr_t)((Manager *)0x0);
    (*(uint32_t*)((char*)&(uStack_1c)+4)) = (uint32_t)(uintptr_t)((_func___cdecl_Vec2_L_int_G__void_ptr *)0x3ff00000);
    uStack_14 = 0x3ff0000000000000;
    uStack_24 = 0;
    uStack_20 = 0;
    (pUVar15->FillProportion).Getter.Callee = (void *)0x0;
    (pUVar15->FillProportion).Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0;
    *(undefined4 *)&(pUVar15->FillProportion).Value.X = 0;
    *(undefined4 *)((int)&(pUVar15->FillProportion).Value.X + 4) = 0x3ff00000;
    (pUVar15->FillProportion).Value.Y = 1.0;
    p_Var44 = (pLVar28->Margin).Getter.Callee;
    p_Var45 = (pLVar28->Margin).Getter.CallbackFunction;
    iVar20 = (pLVar28->Margin).Value.X;
    iVar47 = (pLVar28->Margin).Value.Y;
    pvVar16 = (pLVar28->Padding).Getter.Callee;
    p_Var49 = (pLVar28->Padding).Getter.CallbackFunction;
    fVar46 = (float)(pLVar28->Padding).Value;
    pvVar53 = (pLVar28->Background__HasBackground).Getter.Callee;
    p_Var56 = (pLVar28->Background__HasBackground).Getter.CallbackFunction;
    (*(uint8_t*)&(uVar61)) = (pLVar28->Background__HasBackground).Value;
    (*(uint24_t*)((char*)&(uVar61)+1)) = (*(undefined3 *)(void *)((char *)&((pLVar28->Background__HasBackground)) + 0x9));
    (*(uint8_t*)&(uVar65)) = pLVar28->IsEmbossed;
    (*(uint8_t*)((char*)&(uVar65)+1)) = pLVar28->IsCentered;
    (*(uint8_t*)((char*)&(uVar65)+2)) = pLVar28->DoesScrollbarHaveTrough;
    (*(uint8_t*)((char*)&(uVar65)+3)) = pLVar28->AlwaysConsumeScrolls;
    iVar48 = *(int *)&pLVar28->HasFlexibleSizing;
    UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff220,pUVar15);
    UVar5.Tag.Data = in_stack_fffff224;
    UVar5.Parent = (Manager *)in_stack_fffff220;
    UVar5.Tag.Capacity = in_stack_fffff228;
    UVar5.Tag.Length = (*(uint32_t*)&(in_stack_fffff22c));
    uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff22c) + 4)),0);
    uVar35 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff22c) + 4)),8);
    UVar5.Location.Getter.Callee = (void *)(int)uVar34;
    UVar5.Location.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar5.Location.Value.X = (int)uVar35;
    UVar5.Location.Value.Y = (int)((ulonglong)uVar35 >> 0x20);
    UVar5.Visible.Getter.Callee = in_stack_fffff240;
    UVar5.Visible.Getter.CallbackFunction = in_stack_fffff244;
*(uint32_t *)&auVar33 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 4)));
*(uint32_t *)&auVar39 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 140)));
*(uint32_t *)&auVar40 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 156)));
*(uint32_t *)&auVar42 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 200)));
*(uint32_t *)&auVar43 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 244)));
    UVar5.Visible.Value = (bool)in_stack_fffff248[0];
    (*(uint24_t *)((char *)&(UVar5.Visible) + 9)) = (*(uint24_t*)((char*)&(in_stack_fffff248)+1));
    UVar5.Enabled.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar33));
    UVar5.Enabled.Getter.CallbackFunction =
         (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar33)) >> 0x20);
    UVar5.Enabled.Value = (bool)auVar33[8];
    (*(uint24_t *)((char *)&(UVar5.Enabled) + 9)) = (*(uint24_t*)((char*)&(auVar33)+9));
    uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 16)),0);
    uVar35 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 16)),8);
    UVar5.DesiredSize.Getter.Callee = (void *)(int)uVar34;
    UVar5.DesiredSize.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar5.DesiredSize.Value.X = (int)uVar35;
    UVar5.DesiredSize.Value.Y = (int)((ulonglong)uVar35 >> 0x20);
    uVar34 = SUB248((*(uint32_t *)((char *)&(in_stack_fffff248) + 32)),0);
*(uint32_t *)&auVar38 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffff248) + 32)),8));
    UVar5.FillProportion.Getter.Callee = (void *)(int)uVar34;
    UVar5.FillProportion.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar5.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar38));
    UVar5.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar38)+8));
    uVar34 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff248) + 56)),0);
    UVar5.HitTestShape.Getter.Callee = (void *)(int)uVar34;
    UVar5.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)(int)((ulonglong)uVar34 >> 0x20));
    UVar5.HitTestShape.Value = SUB124((*(uint32_t *)((char *)&(in_stack_fffff248) + 56)),8);
    (*(uint32_t *)((char *)&(UVar5) + 108)) = (*(uint32_t *)((char *)&(in_stack_fffff248) + 68));
    uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 72)),0);
    UVar5.Depth.Getter.Callee = (void *)(int)uVar34;
    UVar5.Depth.Getter.CallbackFunction =
         (_func___cdecl_double_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar5.Depth.Value = (double)SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 72)),8);
    uVar34 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff248) + 88)),0);
    UVar5.Icon.Getter.Callee = (void *)(int)uVar34;
    UVar5.Icon.Getter.CallbackFunction = (void (* (*)(void *))(void))((_func___cdecl__func___cdecl_void_ptr_void_ptr *)(int)((ulonglong)uVar34 >> 0x20));
    UVar5.Icon.Value = (_func___cdecl_void *)SUB124((*(uint32_t *)((char *)&(in_stack_fffff248) + 88)),8);
    uVar34 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff248) + 100)),0);
*(uint32_t *)&auVar33 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff248) + 100)),8));
    UVar5.Tooltip.Getter.Callee = (void *)(int)uVar34;
    UVar5.Tooltip.Getter.CallbackFunction =
         (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar5.Tooltip.Value.Data = (char *)(*(uint32_t*)&(auVar33));
    UVar5.Tooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar33)+4));
    UVar5.Tooltip.Value.Length = (*(uint32_t*)((char*)&(auVar33)+8));
    uVar34 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff248) + 120)),0);
*(uint32_t *)&auVar33 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff248) + 120)),8));
    UVar5.VerboseTooltip.Getter.Callee = (void *)(int)uVar34;
    UVar5.VerboseTooltip.Getter.CallbackFunction =
         (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar5.VerboseTooltip.Value.Data = (char *)(*(uint32_t*)&(auVar33));
    UVar5.VerboseTooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar33)+4));
    UVar5.VerboseTooltip.Value.Length = (*(uint32_t*)((char*)&(auVar33)+8));
    uVar34 = SUB128((*(uint32_t *)((char *)&(auVar39) + 0)),0);
    UVar5.TextFont.Data.Getter.Callee = (void *)(int)uVar34;
    UVar5.TextFont.Data.Getter.CallbackFunction =
         (_func___cdecl_Font_ptr_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar5.TextFont.Data.Value = (Font *)SUB124((*(uint32_t *)((char *)&(auVar39) + 0)),8);
    UVar5.TextFont.IsValidData = (bool)auVar39[0xc];
    (*(uint32_t *)((char *)&(UVar5.TextFont) + 13)) = (*(uint32_t *)((char *)&(auVar39) + 13));
    uVar34 = SUB408((*(uint32_t *)((char *)&(auVar40) + 0)),0);
*(uint32_t *)&auVar41 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar40) + 0)),8));
    UVar5.ForegroundColor.Data.Getter.Callee = (void *)(int)uVar34;
    UVar5.ForegroundColor.Data.Getter.CallbackFunction =
         (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar5.ForegroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar41));
    UVar5.ForegroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar41)+4));
    UVar5.ForegroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar41)+8));
    UVar5.ForegroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar41) + 12));
    UVar5.ForegroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar41) + 16));
    UVar5.ForegroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar41) + 20));
    UVar5.ForegroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar41) + 24));
    UVar5.ForegroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar41) + 28));
    UVar5.ForegroundColor.IsValidData = (bool)auVar40[0x28];
    (*(uint32_t *)((char *)&(UVar5.ForegroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar40) + 41));
    uVar34 = SUB408((*(uint32_t *)((char *)&(auVar42) + 0)),0);
*(uint32_t *)&auVar41 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar42) + 0)),8));
    UVar5.BackgroundColor.Data.Getter.Callee = (void *)(int)uVar34;
    UVar5.BackgroundColor.Data.Getter.CallbackFunction =
         (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar5.BackgroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar41));
    UVar5.BackgroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar41)+4));
    UVar5.BackgroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar41)+8));
    UVar5.BackgroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar41) + 12));
    UVar5.BackgroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar41) + 16));
    UVar5.BackgroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar41) + 20));
    UVar5.BackgroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar41) + 24));
    UVar5.BackgroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar41) + 28));
    UVar5.BackgroundColor.IsValidData = (bool)auVar42[0x28];
    (*(uint32_t *)((char *)&(UVar5.BackgroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar42) + 41));
    uVar34 = SUB408((*(uint32_t *)((char *)&(auVar43) + 0)),0);
*(uint32_t *)&auVar41 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar43) + 0)),8));
    UVar5.TextColor.Data.Getter.Callee = (void *)(int)uVar34;
    UVar5.TextColor.Data.Getter.CallbackFunction =
         (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar5.TextColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar41));
    UVar5.TextColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar41)+4));
    UVar5.TextColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar41)+8));
    UVar5.TextColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar41) + 12));
    UVar5.TextColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar41) + 16));
    UVar5.TextColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar41) + 20));
    UVar5.TextColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar41) + 24));
    UVar5.TextColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar41) + 28));
    UVar5.TextColor.IsValidData = (bool)auVar43[0x28];
    (*(uint32_t *)((char *)&(UVar5.TextColor) + 41)) = (*(uint32_t *)((char *)&(auVar43) + 41));
    LVar11.Margin.Getter.CallbackFunction = p_Var45;
    LVar11.Margin.Getter.Callee = p_Var44;
    LVar11.Margin.Value.X = iVar20;
    LVar11.Margin.Value.Y = iVar47;
    LVar11.Padding.Getter.Callee = pvVar16;
    LVar11.Padding.Getter.CallbackFunction = p_Var49;
    LVar11.Padding.Value = (int)fVar46;
    LVar11.Background__HasBackground.Getter.Callee = pvVar53;
    LVar11.Background__HasBackground.Getter.CallbackFunction = p_Var56;
    LVar11.Background__HasBackground.Value = SUB41(uVar61,0);
    (*(uint24_t *)((char *)&(LVar11.Background__HasBackground) + 9)) = SUB43(uVar61,1);
    LVar11.IsEmbossed = (bool)(char)uVar65;
    LVar11.IsCentered = (bool)(char)((uint)uVar65 >> 8);
    LVar11.DoesScrollbarHaveTrough = (bool)(char)((uint)uVar65 >> 0x10);
    LVar11.AlwaysConsumeScrolls = (bool)(char)((uint)uVar65 >> 0x18);
    (*(uint32_t *)((char *)&(LVar11) + 44)) = iVar48;
    pUVar26 = (UIWidget *)UIRowLayout__UIRowLayout__o2((UIRowLayout *)(uintptr_t)(*(uint32_t*)((char*)&(uStack_38)+4)),UVar5,LVar11,pDVar27);
    if (pUVar26 != (UIWidget *)0x0) goto LAB_0070a688;
  }
  LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl",0xd4,
            "NewPointer",(char *)0x0);
  DebugBreak();
LAB_0070a688:
  pUVar52 = pUVar26;
  pRVar17 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
  pRVar18 = (ReferenceController *)(uintptr_t)(ReferenceControllerRegistry__Register(pRVar17,pUVar52));
  if (pRVar18 != (ReferenceController *)0x0) {
    ReferenceController__AddStrongReference(pRVar18);
  }
  pIStack_c = Manager__GetInterfacer(pMStack_28);
  uStack_38 = (double)CONCAT44(pRVar18,pUVar26);
  if (pRVar18 != (ReferenceController *)0x0) {
    ReferenceController__AddStrongReference(pRVar18);
  }
  pSVar30 = (((struct Interface *)(uintptr_t)(pIStack_c))->StoredWidgets).Data;
  pSVar32 = pSVar30 + (((struct Interface *)(uintptr_t)(pIStack_c))->StoredWidgets).Size;
  for (; pSVar30 != pSVar32; pSVar30 = pSVar30 + 1) {
    if ((pRVar18 == pSVar30->Controller) && (pUVar26 == pSVar30->Pointer)) goto LAB_0070a6f9;
  }
  Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G___Add
            ((Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *)&((struct Interface *)(uintptr_t)(pIStack_c))->StoredWidgets,
             (SharedPtr_L_struct_UIWidget_G_ *)&uStack_38);
LAB_0070a6f9:
  if (pRVar18 != (ReferenceController *)0x0) {
    util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(pRVar18);
  }
  Interface__AddNewWidget_struct_UIWidget(pIStack_c,0,(((UIWidget *)cde_rsp_slot())),(((ReferenceController *)cde_rsp_slot())));
  if ((*(uint32_t*)((char*)&(uStack_38)+4)) != (UIRowLayout *)0x0) {
    ReferenceController__ReleaseWeakReference((ReferenceController *)(*(uint32_t*)((char*)&(uStack_38)+4)));
  }
  if (pRVar18 != (ReferenceController *)0x0) {
    util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(pRVar18);
    bVar14 = ReferenceController__ReleaseStrongReference(pRVar18);
    if (bVar14) {
      if (pUVar26 != (UIWidget *)0x0) {
        (**(code **)(pUVar26->_pad_0x0_0 + 4))();
      }
      pUVar52 = pUVar26;
      pRVar17 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
      ReferenceControllerRegistry__PointerWasDestroyed(pRVar17,pUVar52);
    }
    bVar14 = ReferenceController__ReleaseStrongReference(pRVar18);
    if (bVar14) {
      if (pUVar26 != (UIWidget *)0x0) {
        (**(code **)(pUVar26->_pad_0x0_0 + 4))();
      }
      pRVar17 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
      ReferenceControllerRegistry__PointerWasDestroyed(pRVar17,pUVar26);
    }
    ReferenceController__ReleaseWeakReference(pRVar18);
  }
  if ((uStack_8 & 0x100) != 0) {
    uStack_8 = uStack_8 & 0xfffffeff;
    UIAttributes___UIAttributes(&UStack_5f0);
  }
  if ((char)uStack_8 < '\0') {
    uStack_8 = uStack_8 & 0xffffff7f;
    DStack_80.Widgets._pad_0x0_0 = (int)&vftable_48;
    if (DStack_80.Widgets.Data != (SharedPtr_L_UIWidget_G_ *)0x0) {
      SharedPtr_L_struct_UIWidget_G____vector_deleting_destructor_
                ((SharedPtr_L_struct_UIWidget_G_ *)DStack_80.Widgets.Data,3);
    }
    DStack_80.Widgets.Data = (SharedPtr_L_UIWidget_G_ *)0x0;
    DStack_80.Widgets._pad_0x0_0 = (int)&vftable;
  }
  if ((uStack_8 & 0x40) != 0) {
    uStack_8 = uStack_8 & 0xffffffbf;
    UIAttributes___UIAttributes(&UStack_738);
  }
  if ((uStack_8 & 0x20) != 0) {
    uStack_8 = uStack_8 & 0xffffffdf;
    UIAttributes___UIAttributes(&UStack_880);
  }
  if ((uStack_8 & 0x10) != 0) {
    uStack_8 = uStack_8 & 0xffffffef;
    UIAttributes___UIAttributes(&UStack_9c8);
  }
  if ((uStack_8 & 8) != 0) {
    uVar58 = (*(uint32_t*)((char*)&(auStack_4c)+4));
    uStack_8 = uStack_8 & 0xfffffff7;
    (*(uint32_t*)&(auStack_4c)) = (uint32_t)(uintptr_t)(&vftable_48);
    if ((SharedPtr_L_UIWidget_G_ *)uVar58 != (SharedPtr_L_UIWidget_G_ *)0x0) {
      SharedPtr_L_struct_UIWidget_G____vector_deleting_destructor_
                ((SharedPtr_L_struct_UIWidget_G_ *)uVar58,3);
    }
    (*(uint64_t*)((char*)&(auVar38)+8)) = 0;
    (*(uint64_t*)&(auVar38)) = uStack_44;
    *(Darray_L_util__SharedPtr_L_UIWidget_G___G_ *)&_auStack_4c = (*(Darray_L_util__SharedPtr_L_UIWidget_G___G_ *)cde_shl16((auVar38), 0x40));
    (*(uint32_t*)&(auStack_4c)) = (uint32_t)(uintptr_t)(&vftable);
  }
  if (((uStack_8 & 4) != 0) && (uStack_8 = uStack_8 & 0xfffffffb, SStack_158.Data != (char *)0x0)) {
    port_op_delete(SStack_158.Data);
    SStack_158.Data = (char *)0x0;
  }
  if ((uStack_8 & 2) != 0) {
    uStack_8 = uStack_8 & 0xfffffffd;
    if (pvStack_204 != (void *)0x0) {
      port_op_delete(pvStack_204);
      pvStack_204 = (void *)0x0;
    }
    if (apvStack_210[0] != (void *)0x0) {
      port_op_delete(apvStack_210[0]);
      apvStack_210[0] = (void *)0x0;
    }
  }
  if ((SStack_8c.Data != (char *)0x0) && ((uStack_8 & 1) != 0)) {
    port_op_delete(SStack_8c.Data);
    SStack_8c.Data = (char *)0x0;
  }
  if (((int)uVar31 < 0) && (uVar31 = uVar31 & 0x7fffffff, SStack_140.Data != (char *)0x0)) {
    port_op_delete(SStack_140.Data);
    SStack_140.Data = (char *)0x0;
  }
  if (((uVar31 & 0x40000000) != 0) && (uVar31 = uVar31 & 0xbfffffff, SStack_16c.Data != (char *)0x0)
     ) {
    port_op_delete(SStack_16c.Data);
    SStack_16c.Data = (char *)0x0;
  }
  if ((uVar31 & 0x20000000) != 0) {
    uVar31 = uVar31 & 0xdfffffff;
    if (pvStack_21c != (void *)0x0) {
      port_op_delete(pvStack_21c);
      pvStack_21c = (void *)0x0;
    }
    if (apvStack_228[0] != (void *)0x0) {
      port_op_delete(apvStack_228[0]);
      apvStack_228[0] = (void *)0x0;
    }
  }
  if (((uVar31 & 0x10000000) != 0) && (uVar31 = uVar31 & 0xefffffff, SStack_98.Data != (char *)0x0))
  {
    port_op_delete(SStack_98.Data);
    SStack_98.Data = (char *)0x0;
  }
  if (((uVar31 & 0x8000000) != 0) && (uVar31 = uVar31 & 0xf7ffffff, SStack_14c.Data != (char *)0x0))
  {
    port_op_delete(SStack_14c.Data);
    SStack_14c.Data = (char *)0x0;
  }
  if (((uVar31 & 0x4000000) != 0) && (uVar31 = uVar31 & 0xfbffffff, SStack_180.Data != (char *)0x0))
  {
    port_op_delete(SStack_180.Data);
    SStack_180.Data = (char *)0x0;
  }
  if ((uVar31 & 0x2000000) != 0) {
    uVar31 = uVar31 & 0xfdffffff;
    if (pvStack_234 != (void *)0x0) {
      port_op_delete(pvStack_234);
      pvStack_234 = (void *)0x0;
    }
    if (apvStack_240[0] != (void *)0x0) {
      port_op_delete(apvStack_240[0]);
      apvStack_240[0] = (void *)0x0;
    }
  }
  if (((uVar31 & 0x1000000) != 0) && (uVar31 = uVar31 & 0xfeffffff, SStack_a4.Data != (char *)0x0))
  {
    port_op_delete(SStack_a4.Data);
    SStack_a4.Data = (char *)0x0;
  }
  if (((uVar31 & 0x800000) != 0) && (uVar31 = uVar31 & 0xff7fffff, SStack_134.Data != (char *)0x0))
  {
    port_op_delete(SStack_134.Data);
    SStack_134.Data = (char *)0x0;
  }
  if (((uVar31 & 0x400000) != 0) && (uVar31 = uVar31 & 0xffbfffff, SStack_194.Data != (char *)0x0))
  {
    port_op_delete(SStack_194.Data);
    SStack_194.Data = (char *)0x0;
  }
  if ((uVar31 & 0x200000) != 0) {
    uVar31 = uVar31 & 0xffdfffff;
    if (pvStack_24c != (void *)0x0) {
      port_op_delete(pvStack_24c);
      pvStack_24c = (void *)0x0;
    }
    if (apvStack_258[0] != (void *)0x0) {
      port_op_delete(apvStack_258[0]);
      apvStack_258[0] = (void *)0x0;
    }
  }
  if (((uVar31 & 0x100000) != 0) && (uVar31 = uVar31 & 0xffefffff, SStack_b0.Data != (char *)0x0)) {
    port_op_delete(SStack_b0.Data);
    SStack_b0.Data = (char *)0x0;
  }
  if (((uVar31 & 0x80000) != 0) && (uVar31 = uVar31 & 0xfff7ffff, SStack_110.Data != (char *)0x0)) {
    port_op_delete(SStack_110.Data);
    SStack_110.Data = (char *)0x0;
  }
  if ((uVar31 & 0x40000) != 0) {
    uVar31 = uVar31 & 0xfffbffff;
    UIAttributes___UIAttributes(&UStack_b10);
  }
  if (((uVar31 & 0x20000) != 0) && (uVar31 = uVar31 & 0xfffdffff, SStack_1a8.Data != (char *)0x0)) {
    port_op_delete(SStack_1a8.Data);
    SStack_1a8.Data = (char *)0x0;
  }
  if ((uVar31 & 0x10000) != 0) {
    uVar31 = uVar31 & 0xfffeffff;
    if (pvStack_264 != (void *)0x0) {
      port_op_delete(pvStack_264);
      pvStack_264 = (void *)0x0;
    }
    if (apvStack_270[0] != (void *)0x0) {
      port_op_delete(apvStack_270[0]);
      apvStack_270[0] = (void *)0x0;
    }
  }
  if (((uVar31 & 0x8000) != 0) && (uVar31 = uVar31 & 0xffff7fff, SStack_bc.Data != (char *)0x0)) {
    port_op_delete(SStack_bc.Data);
    SStack_bc.Data = (char *)0x0;
  }
  if (((uVar31 & 0x4000) != 0) && (uVar31 = uVar31 & 0xffffbfff, SStack_11c.Data != (char *)0x0)) {
    port_op_delete(SStack_11c.Data);
    SStack_11c.Data = (char *)0x0;
  }
  if ((uVar31 & 0x2000) != 0) {
    uVar31 = uVar31 & 0xffffdfff;
    UIAttributes___UIAttributes(&UStack_c58);
  }
  if (((uVar31 & 0x1000) != 0) && (uVar31 = uVar31 & 0xffffefff, SStack_1bc.Data != (char *)0x0)) {
    port_op_delete(SStack_1bc.Data);
    SStack_1bc.Data = (char *)0x0;
  }
  if ((uVar31 & 0x800) != 0) {
    uVar31 = uVar31 & 0xfffff7ff;
    if (pvStack_27c != (void *)0x0) {
      port_op_delete(pvStack_27c);
      pvStack_27c = (void *)0x0;
    }
    if (apvStack_288[0] != (void *)0x0) {
      port_op_delete(apvStack_288[0]);
      apvStack_288[0] = (void *)0x0;
    }
  }
  if (((uVar31 & 0x400) != 0) && (uVar31 = uVar31 & 0xfffffbff, SStack_c8.Data != (char *)0x0)) {
    port_op_delete(SStack_c8.Data);
    SStack_c8.Data = (char *)0x0;
  }
  if (((uVar31 & 0x200) != 0) && (uVar31 = uVar31 & 0xfffffdff, SStack_128.Data != (char *)0x0)) {
    port_op_delete(SStack_128.Data);
    SStack_128.Data = (char *)0x0;
  }
  if (((uVar31 & 0x100) != 0) && (uVar31 = uVar31 & 0xfffffeff, SStack_1d0.Data != (char *)0x0)) {
    port_op_delete(SStack_1d0.Data);
    SStack_1d0.Data = (char *)0x0;
  }
  if ((char)uVar31 < '\0') {
    uVar31 = uVar31 & 0xffffff7f;
    if (pvStack_294 != (void *)0x0) {
      port_op_delete(pvStack_294);
      pvStack_294 = (void *)0x0;
    }
    if (apvStack_2a0[0] != (void *)0x0) {
      port_op_delete(apvStack_2a0[0]);
      apvStack_2a0[0] = (void *)0x0;
    }
  }
  if (((uVar31 & 0x40) != 0) && (uVar31 = uVar31 & 0xffffffbf, SStack_d4.Data != (char *)0x0)) {
    port_op_delete(SStack_d4.Data);
    SStack_d4.Data = (char *)0x0;
  }
  if (((uVar31 & 0x20) != 0) &&
     (uVar31 = uVar31 & 0xffffffdf, (Manager *)SStack_70.Data != (Manager *)0x0)) {
    port_op_delete(SStack_70.Data);
    SStack_70.Data = (char *)0x0;
  }
  if (((uVar31 & 0x10) != 0) && (uVar31 = uVar31 & 0xffffffef, SStack_1e4.Data != (char *)0x0)) {
    port_op_delete(SStack_1e4.Data);
    SStack_1e4.Data = (char *)0x0;
  }
  if ((uVar31 & 8) != 0) {
    uVar31 = uVar31 & 0xfffffff7;
    if ((*(uint32_t*)((char*)&(uStack_fc)+4)) != (void *)0x0) {
      port_op_delete((*(uint32_t*)((char*)&(uStack_fc)+4)));
      uStack_fc = uStack_fc & 0xffffffff;
    }
    if (pvStack_104 != (void *)0x0) {
      port_op_delete(pvStack_104);
      pvStack_104 = (void *)0x0;
    }
  }
  if (((uVar31 & 4) != 0) && (uVar31 = uVar31 & 0xfffffffb, SStack_e0.Data != (char *)0x0)) {
    port_op_delete(SStack_e0.Data);
    SStack_e0.Data = (char *)0x0;
  }
  if ((SStack_1f8.Data != (char *)0x0) && ((uVar31 & 2) != 0)) {
    port_op_delete(SStack_1f8.Data);
  }
  GameManager__SetIsInLoadingScreen(pMStack_28->Parent,false);
  UIAttributes___UIAttributes(&UStack_3e8);
  return;
}

//==== 00709050 MethodCaller__public__void___thiscall_MainManager__Exit_void__ ====


/* public: static void __cdecl util__DelegateFactory_L_classMainManager_Cvoid_G___MethodCaller_L__public__void__thiscallMainManager__Exit_void__G_(void *) */

void __cdecl
util__DelegateFactory_class_MainManager_void___MethodCaller__public__void___thiscall_MainManager__Exit_void(void *param_1)

{
  *(undefined1 *)(*(int *)((int)param_1 + 4) + 0x72) = 1;
  return;
}





//==== 00709060 MethodCaller__private__void___thiscall_MainManager__OnChangedPreferences_void__ ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_L_classMainManager_Cvoid_G___MethodCaller_L__private__void__thiscallMainManager__OnChangedPreferences_void__G_(void *) */

void util__DelegateFactory_class_MainManager_void___MethodCaller__private__void___thiscall_MainManager__OnChangedPreferences_void(void *param_1)

{
  Vec4_L_int_G_ VVar1;
  bool bVar2;
  PreferencesBase *this;
  SimpleSerializationManager *this_00;
  undefined4 *puVar3;
  int iVar4;
  Str_L_char_G_ *pSVar5;
  DataParser *this_01;
  int iVar6;
  PostProcessor *this_02;
  Str_L_char_G_ *pSVar7;
  Darray_L_util__Reflectable_P_G_ *pDVar8;
  PreferencesBase *pPVar9;
  Darray_L_util__Reflectable_P_G_ *pDVar10;
  Str_L_char_G_ SStack_44;
  Str_L_char_G_ SStack_38;
  undefined **ppuStack_2c;
  void *pvStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined **ppuStack_18;
  int iVar11;
  
  this = (PreferencesBase *)CapitalShipComponent__GetID();
  RebuildWindow(false);
  (**(code **)(this->_pad_0x0_0 + 0xa8))();
  iVar6 = (**(code **)(this->_pad_0x0_0 + 0x98))();
  iVar11 = iVar6;
  this_02 = GameManager__GetPostProcessor(this->Parent);
  VVar1.Y = iVar11;
  VVar1.X = iVar6;
  PostProcessor__SetShadowBufferSize(this_02,(*(Vec3_L_int_G_ *)&(VVar1)));
  GameManager__GetPostProcessor(this->Parent);
  PostProcessor__Initialize();
  bVar2 = SetupShaders(this);
  if (!bVar2) {
    ppuStack_18 = (undefined **)0x864ae1;
    LogAssert("\\mac\\home\\documents\\code\\engine\\system\\options.cpp",0x54,"Success",(char *)0x0
             );
    DebugBreak();
  }
  SetCursorIcon();
  (**(code **)(this->_pad_0x0_0 + 0xac))();
  PreferencesBase__SetLanguage(this);
  pPVar9 = this;
  this_00 = (SimpleSerializationManager *)GameManager__GetDataManager(this->Parent);
  SimpleSerializationManager__CorrectImport(this_00,(Reflectable *)pPVar9);
  ppuStack_18 = (undefined **)(&vftable_6);
  iVar11 = 0;
  iVar6 = 1;
  puVar3 = (undefined4 *)(uintptr_t)(port_op_new(4));
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 0;
  }
  iVar4 = 0;
  if (0 < iVar6) {
    do {
      puVar3[iVar4] = 0;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar6);
  }
  iStack_1c = iVar11 + 1;
  iVar6 = iVar11;
  Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)&ppuStack_18,&iStack_1c);
  bVar2 = Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)&ppuStack_18,iVar11);
  if (bVar2) {
    puVar3[iVar6 + -1] = (undefined4)(uintptr_t)(this);
  }
  ppuStack_2c = (undefined **)(&vftable_6);
  pvStack_28 = (void *)0x0;
  uStack_24 = 0;
  uStack_20 = 0;
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_38,"Preferences.txt");
  pDVar10 = (Darray_L_util__Reflectable_P_G_ *)&ppuStack_2c;
  pDVar8 = (Darray_L_util__Reflectable_P_G_ *)&ppuStack_18;
  pSVar7 = &SStack_38;
  pSVar5 = GetSaveDataPath(&SStack_44);
  this_01 = GameManager__GetDataManager(this->Parent);
  SerializationManagerInterface__SaveDataToFile
            ((SerializationManagerInterface *)this_01,pSVar5,pSVar7,pDVar8,pDVar10);
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
  if (puVar3 != (undefined4 *)0x0) {
    port_op_delete(puVar3);
  }
  return;
}

//==== 00709080 MethodCaller__public__void___thiscall_MainManager__OpenInfolinks_void__ ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_L_classMainManager_Cvoid_G___MethodCaller_L__public__void__thiscallMainManager__OpenInfolinks_void__G_(void *) */

void __cdecl
util__DelegateFactory_class_MainManager_void___MethodCaller__public__void___thiscall_MainManager__OpenInfolinks_void(void *param_1)

{
  undefined8 stack0xfffffd34;
  undefined8 stack0xfffffe80;
  UIAttributes UVar1;
  Delegate_L_void_G_ DVar2;
  ReferenceController *pRVar3;
  UIImage *this;
  UIAttributes *pUVar4;
  void *pvVar5;
  ReferenceControllerRegistry *this_00;
  ReferenceController *this_01;
  OptionsSection__Interface *pIVar6;
  undefined1 auVar7 [12];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [44];
  undefined1 auVar16 [44];
  undefined1 in_stack_fffffd34 [312];
  float in_stack_fffffe6c;
  float in_stack_fffffe70;
  float in_stack_fffffe74;
  undefined4 in_stack_fffffe78;
  bool bVar17;
  void *pvVar18;
  code *pcVar19;
  UIAttributes UStack_16c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  undefined8 uStack_14;
  ReferenceController *pRStack_8;
  undefined1 auVar15 [32];
  
  pRStack_8 = (ReferenceController *)0x0;
  this = (UIImage *)(uintptr_t)(port_op_new(0x178));
  if (this == (UIImage *)0x0) {
    pvVar5 = (void *)0x0;
  }
  else {
    pUVar4 = (UIAttributes *)UIAttributes__UIAttributes(&UStack_16c,param_1);
    pcVar19 = (long long int (*)())(MethodCallerConst_L__private__void___thiscall_MainManager__RenderHeroShot_void_const__G_);
    bVar17 = false;
    uStack_1c = 0x3ff0000000000000;
    uStack_14 = 0x3ff0000000000000;
    uStack_24 = 0;
    uStack_20 = 0;
    (pUVar4->FillProportion).Getter.Callee = (void *)0x0;
    (pUVar4->FillProportion).Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0;
    *(undefined4 *)&(pUVar4->FillProportion).Value.X = 0;
    *(undefined4 *)((int)&(pUVar4->FillProportion).Value.X + 4) = 0x3ff00000;
    (pUVar4->FillProportion).Value.Y = 1.0;
    pvVar5 = param_1;
    UIAttributes__UIAttributes((UIAttributes *)&stack0xfffffd34,pUVar4);
    UVar1.TextColor.Data.Value.Saturation = in_stack_fffffe6c;
*(uint32_t *)&auVar7 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffd34) + 4)));
*(uint32_t *)&auVar10 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffd34) + 32)));
*(uint32_t *)&auVar11 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffd34) + 44)));
*(uint32_t *)&auVar13 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffd34) + 180)));
*(uint32_t *)&auVar14 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffd34) + 196)));
*(uint32_t *)&auVar16 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffd34) + 240)));
    UVar1.Parent = (Manager *)(*(uint32_t*)&(in_stack_fffffd34));
    UVar1.Tag.Data = (char *)(*(uint32_t*)&(auVar7));
    UVar1.Tag.Capacity = (*(uint32_t*)((char*)&(auVar7)+4));
    UVar1.Tag.Length = (*(uint32_t*)((char*)&(auVar7)+8));
    uVar8 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffd34) + 16)),0);
    uVar9 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffd34) + 16)),8);
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
    uVar8 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffd34) + 56)),0);
    uVar9 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffd34) + 56)),8);
    UVar1.DesiredSize.Getter.Callee = (void *)(int)uVar8;
    UVar1.DesiredSize.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar8 >> 0x20);
    UVar1.DesiredSize.Value.X = (int)uVar9;
    UVar1.DesiredSize.Value.Y = (int)((ulonglong)uVar9 >> 0x20);
    uVar8 = SUB248((*(uint32_t *)((char *)&(in_stack_fffffd34) + 72)),0);
*(uint32_t *)&auVar12 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffffd34) + 72)),8));
    UVar1.FillProportion.Getter.Callee = (void *)(int)uVar8;
    UVar1.FillProportion.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar8 >> 0x20);
    UVar1.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar12));
    UVar1.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar12)+8));
    uVar8 = SUB128((*(uint32_t *)((char *)&(in_stack_fffffd34) + 96)),0);
    UVar1.HitTestShape.Getter.Callee = (void *)(int)uVar8;
    UVar1.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)(int)((ulonglong)uVar8 >> 0x20));
    UVar1.HitTestShape.Value = SUB124((*(uint32_t *)((char *)&(in_stack_fffffd34) + 96)),8);
    (*(uint32_t *)((char *)&(UVar1) + 108)) = (*(uint32_t *)((char *)&(in_stack_fffffd34) + 108));
    uVar8 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffd34) + 112)),0);
    UVar1.Depth.Getter.Callee = (void *)(int)uVar8;
    UVar1.Depth.Getter.CallbackFunction =
         (_func___cdecl_double_void_ptr *)(int)((ulonglong)uVar8 >> 0x20);
    UVar1.Depth.Value = (double)SUB168((*(uint32_t *)((char *)&(in_stack_fffffd34) + 112)),8);
    uVar8 = SUB128((*(uint32_t *)((char *)&(in_stack_fffffd34) + 128)),0);
    UVar1.Icon.Getter.Callee = (void *)(int)uVar8;
    UVar1.Icon.Getter.CallbackFunction = (void (* (*)(void *))(void))((_func___cdecl__func___cdecl_void_ptr_void_ptr *)(int)((ulonglong)uVar8 >> 0x20));
    UVar1.Icon.Value = (_func___cdecl_void *)SUB124((*(uint32_t *)((char *)&(in_stack_fffffd34) + 128)),8);
    uVar8 = SUB208((*(uint32_t *)((char *)&(in_stack_fffffd34) + 140)),0);
*(uint32_t *)&auVar7 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffffd34) + 140)),8));
    UVar1.Tooltip.Getter.Callee = (void *)(int)uVar8;
    UVar1.Tooltip.Getter.CallbackFunction =
         (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar8 >> 0x20);
    UVar1.Tooltip.Value.Data = (char *)(*(uint32_t*)&(auVar7));
    UVar1.Tooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar7)+4));
    UVar1.Tooltip.Value.Length = (*(uint32_t*)((char*)&(auVar7)+8));
    uVar8 = SUB208((*(uint32_t *)((char *)&(in_stack_fffffd34) + 160)),0);
*(uint32_t *)&auVar7 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffffd34) + 160)),8));
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
    UVar1.TextColor.Data.Getter.Callee = (void *)(int)(*(uint64_t *)((char *)&(in_stack_fffffd34) + 284));
    UVar1.TextColor.Data.Getter.CallbackFunction =
         (_func___cdecl_Color_void_ptr *)(int)((ulonglong)(*(uint64_t *)((char *)&(in_stack_fffffd34) + 284)) >> 0x20);
    UVar1.TextColor.Data.Value._pad_0x0_0 = (*(uint32_t *)((char *)&(in_stack_fffffd34) + 292));
    UVar1.TextColor.Data.Value._pad_0x4_1 = (*(uint32_t *)((char *)&(in_stack_fffffd34) + 296));
    UVar1.TextColor.Data.Value._pad_0x8_2 = (*(uint32_t *)((char *)&(in_stack_fffffd34) + 300));
    UVar1.TextColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(in_stack_fffffd34) + 304));
    UVar1.TextColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(in_stack_fffffd34) + 308));
    UVar1.TextColor.Data.Value.Value = in_stack_fffffe70;
    UVar1.TextColor.Data.Value.Alpha = in_stack_fffffe74;
    UVar1.TextColor.IsValidData = SUB41(in_stack_fffffe78,0);
    (*(uint32_t *)((char *)&(UVar1.TextColor) + 41)) = SUB43(in_stack_fffffe78,1);
    DVar2.CallbackFunction = (void (*)(void *))(pcVar19);
    DVar2.Callee = pvVar5;
    pvVar5 = (void *)UIImage__UIImage(this,UVar1,bVar17,DVar2);
  }
  pRStack_8 = (ReferenceController *)&stack0xfffffe80;
  pRVar3 = (ReferenceController *)&stack0xfffffe80;
  if (pvVar5 == (void *)0x0) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl",0xd4
              ,"NewPointer",(char *)0x0);
    DebugBreak();
    pRVar3 = pRStack_8;
  }
  pRStack_8 = pRVar3;
  pvVar18 = pvVar5;
  this_00 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
  this_01 = (ReferenceController *)(uintptr_t)(ReferenceControllerRegistry__Register(this_00,pvVar18));
  pRVar3 = pRStack_8;
  pRStack_8->StrongReferenceCount = (int)pvVar5;
  pRVar3->WeakReferenceCount = (int)this_01;
  if (this_01 != (ReferenceController *)0x0) {
    ReferenceController__AddStrongReference(this_01);
  }
  pIVar6 = Manager__GetInterfacer(param_1);
  Interface__AddNewWidgetAndStore_struct_HUDItineraryNodeDragger__o2(pIVar6,0,(((UIWidget *)cde_rsp_slot())),(((ReferenceController *)cde_rsp_slot())));
  if (pRStack_8 != (ReferenceController *)0x0) {
    ReferenceController__ReleaseWeakReference(pRStack_8);
  }
  if (this != (UIImage *)0x0) {
    UIAttributes___UIAttributes(&UStack_16c);
  }
  InfolinksManager__Open(*(InfolinksManager **)((int)param_1 + 0x10));
  return;
}

//==== 00709090 MethodCaller__public__void___thiscall_MainManager__OpenLevelEditor_void__ ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_L_classMainManager_Cvoid_G___MethodCaller_L__public__void__thiscallMainManager__OpenLevelEditor_void__G_(void *) */

void __cdecl
util__DelegateFactory_class_MainManager_void___MethodCaller__public__void___thiscall_MainManager__OpenLevelEditor_void(void *param_1)

{
  Delegate_L_void_G_ DVar1;
  Delegate_L_void_G_ DVar2;
  OptionsSection__Interface *this;
  undefined4 *puVar3;
  code *pcVar4;
  undefined4 *puVar5;
  code *pcVar6;
  
  MainManager__PlayTitleMusic((MainManager *)param_1);
  puVar3 = *(undefined4 **)((int)param_1 + 0x18);
  pcVar6 = (code *)util__DelegateFactory_class_ScenarioEditor_void___MethodCaller__private__void___thiscall_ScenarioEditor__TearDownScreen_void;
  pcVar4 = util__DelegateFactory_L_class_ScenarioEditor_Cvoid_G___MethodCaller_L__private__void___thiscall_ScenarioEditor__BuildScenarioEditorScreen_void__G_;
  puVar5 = puVar3;
  this = Manager__GetInterfacer((Manager *)*puVar3);
  DVar1.CallbackFunction = (void (*)(void *))(pcVar4);
  DVar1.Callee = puVar3;
  DVar2.CallbackFunction = (void (*)(void *))(pcVar6);
  DVar2.Callee = puVar5;
  Interface__NewScreen(this,DVar1,DVar2);
  return;
}





//==== 007090b0 MethodCaller__public__void___thiscall_MainManager__OpenLevelsMenu_void__ ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_L_classMainManager_Cvoid_G___MethodCaller_L__public__void__thiscallMainManager__OpenLevelsMenu_void__G_(void *) */

void __cdecl
util__DelegateFactory_class_MainManager_void___MethodCaller__public__void___thiscall_MainManager__OpenLevelsMenu_void(void *param_1)

{
  Delegate_L_void_G_ DVar1;
  Delegate_L_void_G_ DVar2;
  OptionsSection__Interface *this;
  undefined4 *puVar3;
  code *pcVar4;
  undefined4 *puVar5;
  code *pcVar6;
  
  MainManager__PlayTitleMusic((MainManager *)param_1);
  puVar3 = *(undefined4 **)((int)param_1 + 0x14);
  pcVar6 = (code *)util__DelegateFactory_class_BriefingsHandler_void___MethodCaller__private__void___thiscall_BriefingsHandler__TearDownScreen_void;
  pcVar4 = (code *)util__DelegateFactory_L_class_BriefingsHandler_Cvoid_G___MethodCaller_L__private__void___thiscall_BriefingsHandler__BuildLevelsScreen_void__G_;
  puVar5 = puVar3;
  this = Manager__GetInterfacer((Manager *)*puVar3);
  DVar1.CallbackFunction = (void (*)(void *))(pcVar4);
  DVar1.Callee = puVar3;
  DVar2.CallbackFunction = (void (*)(void *))(pcVar6);
  DVar2.Callee = puVar5;
  Interface__NewScreen(this,DVar1,DVar2);
  return;
}





//==== 007090d0 MethodCaller__public__void___thiscall_MainManager__OpenModuleDesign_void__ ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_L_classMainManager_Cvoid_G___MethodCaller_L__public__void__thiscallMainManager__OpenModuleDesign_void__G_(void *) */

void __cdecl
util__DelegateFactory_class_MainManager_void___MethodCaller__public__void___thiscall_MainManager__OpenModuleDesign_void(void *param_1)

{
  Delegate_L_void_G_ DVar1;
  Delegate_L_void_G_ DVar2;
  OptionsSection__Interface *this;
  LogisticManager *pLVar3;
  ModuleDesignManager *pMVar4;
  bool bVar5;
  code *pcVar6;
  ModuleDesignManager *pMVar7;
  code *pcVar8;
  
  bVar5 = false;
  pLVar3 = (LogisticManager *)(uintptr_t)(GameManager__GetManager_L_LogisticManager_G_(*(GameManager **)((int)param_1 + 4)));
  GameManager__SwitchToSession(*(GameManager **)((int)param_1 + 4),(Manager *)pLVar3,bVar5);
  pLVar3 = (LogisticManager *)(uintptr_t)(GameManager__GetManager_L_LogisticManager_G_(*(GameManager **)((int)param_1 + 4)));
  pLVar3->CurrentState = State__ModuleDesign;
  GameManager__SwitchToSession((GameManager *)pLVar3->_pad_0x4_1,(Manager *)pLVar3,false);
  pMVar4 = (pLVar3->ModuleDesigner).Pointer;
  pcVar8 = DelegateFactory_L_ModuleDesignManager_Cvoid_G___MethodCaller_L__private__void___thiscall_ModuleDesignManager__DestroyViewer_void__G_;
  pcVar6 = DelegateFactory_L_ModuleDesignManager_Cvoid_G___MethodCaller_L__private__void___thiscall_ModuleDesignManager__BuildModuleList_void__G_;
  pMVar7 = pMVar4;
  this = Manager__GetInterfacer((Manager *)pMVar4->Parent);
  DVar1.CallbackFunction = (void (*)(void *))(pcVar6);
  DVar1.Callee = pMVar4;
  DVar2.CallbackFunction = (void (*)(void *))(pcVar8);
  DVar2.Callee = pMVar7;
  Interface__NewScreen(this,DVar1,DVar2);
  return;
}

//==== 00709100 MethodCaller__public__void___thiscall_MainManager__OpenOptions_void__ ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_L_classMainManager_Cvoid_G___MethodCaller_L__public__void__thiscallMainManager__OpenOptions_void__G_(void *) */

void __cdecl
util__DelegateFactory_class_MainManager_void___MethodCaller__public__void___thiscall_MainManager__OpenOptions_void(void *param_1)

{
  Delegate_L_void_G_ DVar1;
  Delegate_L_void_G_ DVar2;
  OptionsSection__Interface *this;
  code *pcVar3;
  void *pvVar4;
  _func___cdecl_void_void_ptr *p_Var5;
  
  p_Var5 = (_func___cdecl_void_void_ptr *)0x0;
  pvVar4 = (void *)0x0;
  pcVar3 = (long long int (*)())(MethodCaller_L__private__void___thiscall_MainManager__BuildOptionsMenu_void__G_);
  this = Manager__GetInterfacer((Manager *)param_1);
  DVar1.CallbackFunction = (void (*)(void *))(pcVar3);
  DVar1.Callee = param_1;
  DVar2.CallbackFunction = p_Var5;
  DVar2.Callee = pvVar4;
  Interface__NewScreen(this,DVar1,DVar2);
  return;
}





//==== 00709120 MethodCaller__public__void___thiscall_MainManager__OpenSandboxMenu_void__ ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_L_classMainManager_Cvoid_G___MethodCaller_L__public__void__thiscallMainManager__OpenSandboxMenu_void__G_(void *) */

void __cdecl
util__DelegateFactory_class_MainManager_void___MethodCaller__public__void___thiscall_MainManager__OpenSandboxMenu_void(void *param_1)

{
  MainManager__PlayTitleMusic((MainManager *)param_1);
  BriefingsHandler__OpenSandboxMode(*(BriefingsHandler **)((int)param_1 + 0x14),false);
  return;
}





//==== 00709140 MethodCaller__public__void___thiscall_MainManager__OpenShipDesign_void__ ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_L_classMainManager_Cvoid_G___MethodCaller_L__public__void__thiscallMainManager__OpenShipDesign_void__G_(void *) */

void __cdecl
util__DelegateFactory_class_MainManager_void___MethodCaller__public__void___thiscall_MainManager__OpenShipDesign_void(void *param_1)

{
  Delegate_L_void_G_ DVar1;
  Delegate_L_void_G_ DVar2;
  OptionsSection__Interface *this;
  LogisticManager *pLVar3;
  ShipDesignManager *pSVar4;
  bool bVar5;
  code *pcVar6;
  ShipDesignManager *pSVar7;
  code *pcVar8;
  
  bVar5 = false;
  pLVar3 = (LogisticManager *)(uintptr_t)(GameManager__GetManager_L_LogisticManager_G_(*(GameManager **)((int)param_1 + 4)));
  GameManager__SwitchToSession(*(GameManager **)((int)param_1 + 4),(Manager *)pLVar3,bVar5);
  pLVar3 = (LogisticManager *)(uintptr_t)(GameManager__GetManager_L_LogisticManager_G_(*(GameManager **)((int)param_1 + 4)));
  pLVar3->CurrentState = State__ShipDesign;
  GameManager__SwitchToSession((GameManager *)pLVar3->_pad_0x4_1,(Manager *)pLVar3,false);
  pSVar4 = (pLVar3->ShipDesigner).Pointer;
  pcVar8 = DelegateFactory_L_ShipDesignManager_Cvoid_G___MethodCaller_L__private__void___thiscall_ShipDesignManager__DestroyViewer_void__G_;
  pcVar6 = util__DelegateFactory_L_ShipDesignManager_Cvoid_G___MethodCaller_L__private__void___thiscall_ShipDesignManager__BuildCraftList_void__G_;
  pSVar7 = pSVar4;
  this = Manager__GetInterfacer((Manager *)pSVar4->Parent);
  DVar1.CallbackFunction = (void (*)(void *))(pcVar6);
  DVar1.Callee = pSVar4;
  DVar2.CallbackFunction = (void (*)(void *))(pcVar8);
  DVar2.Callee = pSVar7;
  Interface__NewScreen(this,DVar1,DVar2);
  return;
}

//==== 00709170 MethodCallerConst__private__struct_util__Vec2_int____thiscall_MainManager__GetMainTitleSize_void_const__ ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: static struct util__Vec2_L_int_G_ __cdecl util__DelegateFactory_L_classMainManager_Cstruct_util__Vec2_L_int_G__G___MethodCallerConst_L__private_structutil__Vec2_L_int_G___thiscall_MainManager__GetMainTitleSize_void_const_G_(void const * const) */

Vec2_L_int_G_ __cdecl
util__DelegateFactory_class_MainManager_struct_util__Vec2_int_____MethodCallerConst__private__struct_util__Vec2_int____thiscall_MainManager__GetMainTitleSize_void_const
          (void *param_1)

{
  Vec4_L_int_G_ VVar1;
  MainManager *in_stack_00000008;
  
  MainManager__GetMainTitleSize(in_stack_00000008,&VVar1);
  *(undefined4 *)param_1 = *(undefined4 *)VVar1.X;
  *(undefined4 *)((int)param_1 + 4) = ((undefined4 *)VVar1.X)[1];
  VVar1.Y = (int)param_1;
  VVar1.X = (int)param_1;
}





//==== 007091a0 MethodCallerConst__private__void___thiscall_MainManager__RenderHeroShot_void_const__ ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_L_class_MainManager_Cvoid_G___MethodCallerConst_L__private_void__thiscall_MainManager__RenderHeroShot_void_const_G_(void const * const) */

void __cdecl
util__DelegateFactory_class_MainManager_void___MethodCallerConst__private__void___thiscall_MainManager__RenderHeroShot_void_const(void *param_1)

{
  Vec4_L_int_G_ VVar1;
  
  VVar1.Y = *(unsigned int *)((char *)&(Graphics__GlobalState.ViewMatrix.Data[0xf]) + 4);
  VVar1.X = *(unsigned int *)(&(Graphics__GlobalState.ViewMatrix.Data[0xf]));
  GameManager__RenderLoadingTexture(*(GameManager **)((int)param_1 + 4),(*(Vec4_L_int_G_ *)&(VVar1)));
  return;
}





//==== 007091c0 MethodCallerConst__private__void___thiscall_MainManager__RenderTitle_void_const__ ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_L_class_MainManager_Cvoid_G___MethodCallerConst_L__private_void__thiscall_MainManager__RenderTitle_void_const_G_(void const * const) */

void __cdecl
util__DelegateFactory_class_MainManager_void___MethodCallerConst__private__void___thiscall_MainManager__RenderTitle_void_const(void *param_1)

{
  Vec4_L_int_G_ VVar1;
  
  MainManager__GetMainTitleSize((MainManager *)param_1,&VVar1);
  GameManager__RenderMainLogo
            (*(GameManager **)((int)param_1 + 4),*(undefined4 *)VVar1.X,((undefined4 *)VVar1.X)[1],1
            );
  return;
}





//==== 00709200 MainManager ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: __thiscall MainManager__MainManager(class GameManager *) */

MainManager * __thiscall MainManager__MainManager(MainManager *this,GameManager *param_1)

{
  MetagameManager *pMVar1;
  InfolinksManager *pIVar2;
  BriefingsHandler *pBVar3;
  ScenarioEditor *this_00;
  Manager *pMVar4;
  Darray_L_util__Str_L_char_G___G_ local_2c;
  Attribute_L_bool_G_ local_1c;
  Attribute_L_bool_G_ local_10;
  
  Manager__Manager((Manager *)this,param_1,(void *)0x0,
                   (void *)0x0,0,(((_func___cdecl_void_void_ptr_WeakPtr_L_Actor_G_ *)cde_rsp_slot())));
  this->_pad_0x0_0 = (int)&vftable_425;
  pMVar1 = (MetagameManager *)(uintptr_t)(port_op_new(0x14));
  if (pMVar1 == (MetagameManager *)0x0) {
    pMVar1 = (MetagameManager *)0x0;
  }
  else {
    pMVar1->Parent = (GameManager *)0x0;
    (pMVar1->StarChart)._pad_0x0_0 = 0;
    (pMVar1->StarChart).Data = (StarDatum *)0x0;
    (pMVar1->StarChart).Size = 0;
    (pMVar1->StarChart).Capacity = 0;
    pMVar1 = (MetagameManager *)MetagameManager__MetagameManager(pMVar1,param_1);
  }
  (this->Metagame).Pointer = pMVar1;
  pIVar2 = (InfolinksManager *)(uintptr_t)(port_op_new(0x50));
  if (pIVar2 == (InfolinksManager *)0x0) {
    pIVar2 = (InfolinksManager *)0x0;
  }
  else {
    memset(pIVar2,0,0x50);
    pIVar2 = (InfolinksManager *)InfolinksManager__InfolinksManager(pIVar2,this);
  }
  (this->Infolinks).Pointer = pIVar2;
  pBVar3 = (BriefingsHandler *)(uintptr_t)(port_op_new(0x54));
  if (pBVar3 == (BriefingsHandler *)0x0) {
    pBVar3 = (BriefingsHandler *)0x0;
  }
  else {
    memset(pBVar3,0,0x54);
    pBVar3 = (BriefingsHandler *)BriefingsHandler__BriefingsHandler(pBVar3,this);
  }
  (this->Briefings).Pointer = pBVar3;
  this_00 = (ScenarioEditor *)(uintptr_t)(port_op_new(0xb4));
  if (this_00 == (ScenarioEditor *)0x0) {
    pMVar4 = (Manager *)0x0;
  }
  else {
    memset(this_00,0,0xb4);
    pMVar4 = (Manager *)ScenarioEditor__ScenarioEditor(this_00,this);
  }
  (this->Editor).Parent = pMVar4;
  local_10.Getter.Callee = (void *)0x0;
  local_10.Getter.CallbackFunction = (_func___cdecl_bool_void_ptr *)0x0;
  local_10.Value = false;
  local_1c.Getter.Callee = (void *)0x0;
  local_1c.Getter.CallbackFunction = (_func___cdecl_bool_void_ptr *)0x0;
  local_1c.Value = true;
  local_2c._pad_0x0_0 = (int)&vftable_4;
  local_2c.Data = (Str_L_char_G_ *)0x0;
  local_2c.Size = 0;
  local_2c.Capacity = 0;
  PropertyEditor__PropertyEditor
            ((PropertyEditor *)&(this->Editor).EditedDatum,(Manager *)this,&local_1c,&local_10,
             &local_2c);
  Darray_L_util__Str_L_char_G___G___dtor(&local_2c);
  (this->Starscape).Starscape._pad_0x20_8 = 0;
  *(undefined1 *)&(this->Starscape).Starscape._pad_0x24_9 = 1;
  (this->Starscape).Starscape._pad_0x28_10 = (int)param_1;
  ColorVertexBufferObject__ColorVertexBufferObject
            ((ColorVertexBufferObject *)&(this->Starscape).Starscape._pad_0x30_12);
  return this;
}

//==== 00709360 AutoPtr_BriefingsHandler_ ====


/* public:  AutoPtr_L_classBriefingsHandler_G___dtor(void)
    */

void __thiscall
util__AutoPtr_class_BriefingsHandler____AutoPtr_class_BriefingsHandler(AutoPtr_L_class_BriefingsHandler_G_ *this)

{
  void *pvVar1;
  bool bVar2;
  ReferenceControllerRegistry *this_00;
  int *piVar3;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    if (*(ReferenceController **)((int)pvVar1 + 0x50) != (ReferenceController *)0x0) {
      ReferenceController__ReleaseWeakReference(*(ReferenceController **)((int)pvVar1 + 0x50));
    }
    if (*(ReferenceController **)((int)pvVar1 + 0x48) != (ReferenceController *)0x0) {
      ReferenceController__ReleaseWeakReference(*(ReferenceController **)((int)pvVar1 + 0x48));
    }
    if (*(ReferenceController **)((int)pvVar1 + 0x40) != (ReferenceController *)0x0) {
      ReferenceController__ReleaseWeakReference(*(ReferenceController **)((int)pvVar1 + 0x40));
    }
    if (*(ReferenceController **)((int)pvVar1 + 0x38) != (ReferenceController *)0x0) {
      ReferenceController__ReleaseWeakReference(*(ReferenceController **)((int)pvVar1 + 0x38));
    }
    Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Delegate_L_void_G___G___G___Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Delegate_L_void_G___G___G___dtor((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Delegate_L_void_G___G___G_ *)
               ((int)pvVar1 + 0x24));
    if (*(ReferenceController **)((int)pvVar1 + 0x20) != (ReferenceController *)0x0) {
      bVar2 = ReferenceController__ReleaseStrongReference
                        (*(ReferenceController **)((int)pvVar1 + 0x20));
      if (bVar2) {
        piVar3 = *(int **)((int)pvVar1 + 0x1c);
        if (piVar3 != (int *)0x0) {
          (**(code **)(uintptr_t)(*piVar3 + 4))(1);
          piVar3 = *(int **)((int)pvVar1 + 0x1c);
        }
        this_00 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
        ReferenceControllerRegistry__PointerWasDestroyed(this_00,piVar3);
        *(undefined4 *)((int)pvVar1 + 0x1c) = 0;
      }
    }
    port_op_delete(pvVar1,0x54);
  }
  *(undefined4 *)this = 0;
  return;
}





//==== 007093f0 AutoPtr_InfolinksManager_ ====


/* public:  AutoPtr_L_classInfolinksManager_G___dtor(void)
    */

void __thiscall
util__AutoPtr_class_InfolinksManager____AutoPtr_class_InfolinksManager(AutoPtr_L_class_InfolinksManager_G_ *this)

{
  undefined4 *puVar1;
  bool bVar2;
  ReferenceControllerRegistry *pRVar3;
  int *piVar4;
  
  puVar1 = *(undefined4 **)this;
  if (puVar1 != (undefined4 *)0x0) {
    if ((ReferenceController *)puVar1[0x13] != (ReferenceController *)0x0) {
      bVar2 = ReferenceController__ReleaseStrongReference((ReferenceController *)puVar1[0x13]);
      if (bVar2) {
        piVar4 = (int *)puVar1[0x12];
        if (piVar4 != (int *)0x0) {
          (**(code **)(uintptr_t)(*piVar4 + 4))(1);
          piVar4 = (int *)puVar1[0x12];
        }
        pRVar3 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
        ReferenceControllerRegistry__PointerWasDestroyed(pRVar3,piVar4);
        puVar1[0x12] = 0;
      }
    }
    Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Delegate_L_void_G___G___G___Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Delegate_L_void_G___G___G___dtor((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Delegate_L_void_G___G___G_ *)
               (puVar1 + 0xe));
    if ((ReferenceController *)puVar1[0xd] != (ReferenceController *)0x0) {
      bVar2 = ReferenceController__ReleaseStrongReference((ReferenceController *)puVar1[0xd]);
      if (bVar2) {
        piVar4 = (int *)puVar1[0xc];
        if (piVar4 != (int *)0x0) {
          (**(code **)(uintptr_t)(*piVar4 + 4))(1);
          piVar4 = (int *)puVar1[0xc];
        }
        pRVar3 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
        ReferenceControllerRegistry__PointerWasDestroyed(pRVar3,piVar4);
        puVar1[0xc] = 0;
      }
    }
    if ((ReferenceController *)puVar1[10] != (ReferenceController *)0x0) {
      ReferenceController__ReleaseWeakReference((ReferenceController *)puVar1[10]);
    }
    if ((ReferenceController *)puVar1[8] != (ReferenceController *)0x0) {
      ReferenceController__ReleaseWeakReference((ReferenceController *)puVar1[8]);
    }
    if ((ReferenceController *)puVar1[6] != (ReferenceController *)0x0) {
      ReferenceController__ReleaseWeakReference((ReferenceController *)puVar1[6]);
    }
    if ((void *)*puVar1 != (void *)0x0) {
      port_op_delete((void *)*puVar1);
      *puVar1 = 0;
    }
    port_op_delete(puVar1,0x50);
  }
  *(undefined4 *)this = 0;
  return;
}





//==== 007096f0 scalar_deleting_destructor_007096f0 ====


/* public: virtual void * __thiscall util__Darray_L_structColorVertex_G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_ColorVertex____scalar_deleting_destructor
          (Darray_L_struct_ColorVertex_G_ *this,uint param_1)

{
  *(undefined ***)this = &vftable_424;
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





//==== 00709740 scalar_deleting_destructor_00709740 ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void * __thiscall MainManager:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall MainManager___scalar_deleting_destructor(MainManager *this,uint param_1)

{
  _func___cdecl_void_void_ptr *p_Var1;
  void *pvVar2;
  Manager *pMVar3;
  MetagameManager *pMVar4;
  StarDatum *pSVar5;
  ActorHandler *this_00;
  
  p_Var1 = this[1].Editor.Refresh.CallbackFunction;
  this[1].Editor.Refresh.Callee = &vftable_424;
  if (p_Var1 != (_func___cdecl_void_void_ptr *)0x0) {
    port_op_delete(p_Var1);
  }
  this[1].Editor.Refresh.CallbackFunction = (_func___cdecl_void_void_ptr *)0x0;
  this[1].Editor.Refresh.Callee = &vftable;
  VertexBufferObjectInterface___VertexBufferObjectInterface((VertexBufferObjectInterface *)&(this->Starscape).Starscape._pad_0x30_12);
  Darray_L_util__Str_L_char_G___G___dtor((Darray_L_util__Str_L_char_G___G_ *)&(this->Starscape).Starscape);
  p_Var1 = (this->Editor).MutualExclusivePreChange.CallbackFunction;
  if (p_Var1 != (_func___cdecl_void_void_ptr *)0x0) {
    port_op_delete(p_Var1);
  }
  pvVar2 = (this->Editor).EnabledAttribute.Getter.Callee;
  if (pvVar2 != (void *)0x0) {
    port_op_delete(pvVar2);
  }
  (this->Editor).MutualExclusivePreChange.CallbackFunction = (_func___cdecl_void_void_ptr *)0x0;
  (this->Editor).EnabledAttribute.Getter.Callee = (void *)0x0;
  pMVar3 = (this->Editor).Parent;
  if (pMVar3 != (Manager *)0x0) {
    ScenarioEditor__dtor();
    port_op_delete(pMVar3,0xb4);
  }
  (this->Editor).Parent = (Manager *)0x0;
  AutoPtr_L_BriefingsHandler_G___dtor(&this->Briefings);
  AutoPtr_L_InfolinksManager_G___dtor(&this->Infolinks);
  pMVar4 = (this->Metagame).Pointer;
  if (pMVar4 != (MetagameManager *)0x0) {
    pSVar5 = (pMVar4->StarChart).Data;
    (pMVar4->StarChart)._pad_0x0_0 = (int)&vftable_51;
    if (pSVar5 != (StarDatum *)0x0) {
      port_op_delete(pSVar5);
    }
    (pMVar4->StarChart).Data = (StarDatum *)0x0;
    (pMVar4->StarChart)._pad_0x0_0 = (int)&vftable;
    port_op_delete(pMVar4,0x14);
  }
  (this->Metagame).Pointer = (MetagameManager *)0x0;
  this->_pad_0x0_0 = (int)&vftable_130;
  this_00 = (ActorHandler *)this->_pad_0x8_2;
  if (this_00 != (ActorHandler *)0x0) {
    ActorHandler___ActorHandler(this_00);
    port_op_delete(this_00,0x44);
  }
  this->_pad_0x8_2 = 0;
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x128);
  }
  return this;
}

//==== 00709870 BuildMainMenu ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* private: void __thiscall MainManager__BuildMainMenu(void) */

void __thiscall MainManager__BuildMainMenu(MainManager *this)

{
  undefined8 stack0xfffff220;
  undefined8 stack0xfffff22c;
  undefined8 stack0xfffff248;
  undefined8 stack0xfffff394;
  double dVar1;
  UIAttributes UVar2;
  UIAttributes UVar3;
  UIAttributes UVar4;
  UIAttributes UVar5;
  UIAttributes UVar6;
  UIAttributes UVar7;
  LayoutAttributes LVar8;
  LayoutAttributes LVar9;
  LayoutAttributes LVar10;
  LayoutAttributes LVar11;
  Delegate_L_void_G_ DVar12;
  Delegate_L_void_G_ DVar13;
  bool bVar14;
  UIImage *this_00;
  UIAttributes *pUVar15;
  void *pvVar16;
  ReferenceControllerRegistry *pRVar17;
  ReferenceController *pRVar18;
  OptionsSection__Interface *pIVar19;
  int iVar20;
  Font *pFVar21;
  UIButton *pUVar22;
  LocStr *pLVar23;
  Str_L_char_G_ *pSVar24;
  LogisticManager *pLVar25;
  UIWidget *pUVar26;
  Data *pDVar27;
  LayoutAttributes *pLVar28;
  undefined4 *puVar29;
  SharedPtr_L_UIWidget_G_ *pSVar30;
  uint uVar31;
  SharedPtr_L_UIWidget_G_ *pSVar32;
  UIAttributes *in_stack_fffff220;
  char *in_stack_fffff224;
  int in_stack_fffff228;
  undefined1 in_stack_fffff22c [20];
  _func___cdecl_Vec2_L_int_G__void_ptr *in_stack_fffff240;
  _func___cdecl_bool_void_ptr *in_stack_fffff244;
  undefined1 auVar33 [12];
  undefined1 auVar38 [16];
  undefined8 uVar34;
  undefined8 uVar35;
  undefined1 auVar36 [12];
  undefined1 auVar37 [12];
  undefined1 auVar39 [16];
  undefined1 auVar40 [44];
  undefined1 auVar42 [44];
  undefined1 in_stack_fffff248 [288];
  undefined1 auVar43 [44];
  _func___cdecl_Color_void_ptr *in_stack_fffff368;
  _func___cdecl_Color_void_ptr *p_Var44;
  float in_stack_fffff36c;
  _func___cdecl_Vec2_L_int_G__void_ptr *p_Var45;
  float fVar46;
  int in_stack_fffff370;
  int in_stack_fffff374;
  int iVar47;
  int in_stack_fffff378;
  int iVar48;
  float in_stack_fffff37c;
  _func___cdecl_int_void_ptr *p_Var49;
  float fVar50;
  float in_stack_fffff380;
  float fVar51;
  char *in_stack_fffff384;
  UIWidget *pUVar52;
  void *pvVar53;
  float fVar54;
  float in_stack_fffff388;
  UIWidget *pUVar55;
  _func___cdecl_bool_void_ptr *p_Var56;
  float fVar57;
  undefined4 in_stack_fffff38c;
  undefined4 uVar58;
  UIWidget *pUVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined1 uVar62;
  UIWidget *pUVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  MainManager *pMVar66;
  UIWidget *pUVar67;
  int iVar68;
  code *pcVar69;
  UIWidget *pUVar70;
  UIAttributes local_c58;
  UIAttributes local_b10;
  UIAttributes local_9c8;
  UIAttributes local_880;
  UIAttributes local_738;
  UIAttributes local_5f0;
  LayoutAttributes local_4a8;
  LayoutAttributes local_478;
  LayoutAttributes local_448;
  LayoutAttributes local_418;
  UIAttributes local_3e8;
  void *local_2a0 [3];
  void *local_294;
  void *local_288 [3];
  void *local_27c;
  void *local_270 [3];
  void *local_264;
  void *local_258 [3];
  void *local_24c;
  void *local_240 [3];
  void *local_234;
  void *local_228 [3];
  void *local_21c;
  void *local_210 [3];
  void *local_204;
  Str_L_char_G_ local_1f8;
  undefined4 local_1ec;
  undefined4 local_1e8;
  Str_L_char_G_ local_1e4;
  undefined4 local_1d8;
  undefined4 local_1d4;
  Str_L_char_G_ local_1d0;
  undefined4 local_1c4;
  undefined4 local_1c0;
  Str_L_char_G_ local_1bc;
  undefined4 local_1b0;
  undefined4 local_1ac;
  Str_L_char_G_ local_1a8;
  undefined4 local_19c;
  undefined4 local_198;
  Str_L_char_G_ local_194;
  undefined4 local_188;
  undefined4 local_184;
  Str_L_char_G_ local_180;
  undefined4 local_174;
  undefined4 local_170;
  Str_L_char_G_ local_16c;
  undefined4 local_160;
  undefined4 local_15c;
  Str_L_char_G_ local_158;
  Str_L_char_G_ local_14c;
  Str_L_char_G_ local_140;
  Str_L_char_G_ local_134;
  Str_L_char_G_ local_128;
  Str_L_char_G_ local_11c;
  Str_L_char_G_ local_110;
  void *local_104;
  undefined4 uStack_100;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  MainManager *local_ec;
  _func___cdecl_Vec2_L_int_G__void_ptr *p_Stack_e8;
  Str_L_char_G_ local_e0;
  Str_L_char_G_ local_d4;
  Str_L_char_G_ local_c8;
  Str_L_char_G_ local_bc;
  Str_L_char_G_ local_b0;
  Str_L_char_G_ local_a4;
  Str_L_char_G_ local_98;
  Str_L_char_G_ local_8c;
  Data local_80;
  Str_L_char_G_ local_70;
  undefined8 local_64;
  UIWidget *local_5c;
  UIWidget *local_58;
  UIWidget *local_54;
  UIRowLayout *local_50;
  undefined1 local_4c [8];
  undefined8 uStack_44;
  UIWidget *local_3c;
  undefined8 local_38;
  UIWidget *local_30;
  UIWidget *local_2c;
  MainManager *local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  undefined8 uStack_14;
  OptionsSection__Interface *local_c;
  uint local_8;
  undefined1 auVar41 [32];
  
  local_38 = (double)(ulonglong)(uint)local_38;
  local_8 = 0;
  local_28 = this;
  GameManager__SwitchToSession((GameManager *)this->_pad_0x4_1,(Manager *)this,false);
  PlayTitleMusic(this);
  this_00 = (UIImage *)(uintptr_t)(port_op_new(0x178));
  if (this_00 == (UIImage *)0x0) {
    pvVar16 = (void *)0x0;
  }
  else {
    pUVar15 = (UIAttributes *)UIAttributes__UIAttributes(&local_3e8,(Manager *)this);
    pcVar69 = (long long int (*)())(util__DelegateFactory_class_MainManager_void___MethodCallerConst__private__void___thiscall_MainManager__RenderHeroShot_void_const);
    bVar14 = false;
    uStack_fc = 0x3ff0000000000000;
    uStack_f4 = 0x3ff0000000000000;
    local_104 = (void *)0x0;
    uStack_100 = 0;
    (pUVar15->FillProportion).Getter.Callee = (void *)0x0;
    (pUVar15->FillProportion).Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0;
    *(undefined4 *)&(pUVar15->FillProportion).Value.X = 0;
    *(undefined4 *)((int)&(pUVar15->FillProportion).Value.X + 4) = 0x3ff00000;
    (pUVar15->FillProportion).Value.Y = 1.0;
    in_stack_fffff240 = (_func___cdecl_Vec2_L_int_G__void_ptr *)0x7098fc;
    pMVar66 = this;
    UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff248,pUVar15);
    in_stack_fffff244 = (_func___cdecl_bool_void_ptr *)0x709903;
    UVar6.TextColor.Data.Getter.CallbackFunction = in_stack_fffff368;
*(uint32_t *)&auVar33 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 4)));
*(uint32_t *)&auVar36 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 32)));
*(uint32_t *)&auVar37 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 44)));
*(uint32_t *)&auVar39 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 180)));
*(uint32_t *)&auVar40 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 196)));
*(uint32_t *)&auVar42 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 240)));
    UVar6.Parent = (Manager *)(*(uint32_t*)&(in_stack_fffff248));
    UVar6.Tag.Data = (char *)(*(uint32_t*)&(auVar33));
    UVar6.Tag.Capacity = (*(uint32_t*)((char*)&(auVar33)+4));
    UVar6.Tag.Length = (*(uint32_t*)((char*)&(auVar33)+8));
    uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 16)),0);
    uVar35 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 16)),8);
    UVar6.Location.Getter.Callee = (void *)(int)uVar34;
    UVar6.Location.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar6.Location.Value.X = (int)uVar35;
    UVar6.Location.Value.Y = (int)((ulonglong)uVar35 >> 0x20);
    UVar6.Visible.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar36));
    UVar6.Visible.Getter.CallbackFunction =
         (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar36)) >> 0x20);
    UVar6.Visible.Value = (bool)auVar36[8];
    (*(uint24_t *)((char *)&(UVar6.Visible) + 9)) = (*(uint24_t*)((char*)&(auVar36)+9));
    UVar6.Enabled.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar37));
    UVar6.Enabled.Getter.CallbackFunction =
         (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar37)) >> 0x20);
    UVar6.Enabled.Value = (bool)auVar37[8];
    (*(uint24_t *)((char *)&(UVar6.Enabled) + 9)) = (*(uint24_t*)((char*)&(auVar37)+9));
    uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 56)),0);
    uVar35 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 56)),8);
    UVar6.DesiredSize.Getter.Callee = (void *)(int)uVar34;
    UVar6.DesiredSize.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar6.DesiredSize.Value.X = (int)uVar35;
    UVar6.DesiredSize.Value.Y = (int)((ulonglong)uVar35 >> 0x20);
    uVar34 = SUB248((*(uint32_t *)((char *)&(in_stack_fffff248) + 72)),0);
*(uint32_t *)&auVar38 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffff248) + 72)),8));
    UVar6.FillProportion.Getter.Callee = (void *)(int)uVar34;
    UVar6.FillProportion.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar6.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar38));
    UVar6.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar38)+8));
    uVar34 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff248) + 96)),0);
    UVar6.HitTestShape.Getter.Callee = (void *)(int)uVar34;
    UVar6.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)(int)((ulonglong)uVar34 >> 0x20));
    UVar6.HitTestShape.Value = SUB124((*(uint32_t *)((char *)&(in_stack_fffff248) + 96)),8);
    (*(uint32_t *)((char *)&(UVar6) + 108)) = (*(uint32_t *)((char *)&(in_stack_fffff248) + 108));
    uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 112)),0);
    UVar6.Depth.Getter.Callee = (void *)(int)uVar34;
    UVar6.Depth.Getter.CallbackFunction =
         (_func___cdecl_double_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar6.Depth.Value = (double)SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 112)),8);
    uVar34 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff248) + 128)),0);
    UVar6.Icon.Getter.Callee = (void *)(int)uVar34;
    UVar6.Icon.Getter.CallbackFunction = (void (* (*)(void *))(void))((_func___cdecl__func___cdecl_void_ptr_void_ptr *)(int)((ulonglong)uVar34 >> 0x20));
    UVar6.Icon.Value = (_func___cdecl_void *)SUB124((*(uint32_t *)((char *)&(in_stack_fffff248) + 128)),8);
    uVar34 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff248) + 140)),0);
*(uint32_t *)&auVar33 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff248) + 140)),8));
    UVar6.Tooltip.Getter.Callee = (void *)(int)uVar34;
    UVar6.Tooltip.Getter.CallbackFunction =
         (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar6.Tooltip.Value.Data = (char *)(*(uint32_t*)&(auVar33));
    UVar6.Tooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar33)+4));
    UVar6.Tooltip.Value.Length = (*(uint32_t*)((char*)&(auVar33)+8));
    uVar34 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff248) + 160)),0);
*(uint32_t *)&auVar33 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff248) + 160)),8));
    UVar6.VerboseTooltip.Getter.Callee = (void *)(int)uVar34;
    UVar6.VerboseTooltip.Getter.CallbackFunction =
         (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar6.VerboseTooltip.Value.Data = (char *)(*(uint32_t*)&(auVar33));
    UVar6.VerboseTooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar33)+4));
    UVar6.VerboseTooltip.Value.Length = (*(uint32_t*)((char*)&(auVar33)+8));
    uVar34 = SUB128((*(uint32_t *)((char *)&(auVar39) + 0)),0);
    UVar6.TextFont.Data.Getter.Callee = (void *)(int)uVar34;
    UVar6.TextFont.Data.Getter.CallbackFunction =
         (_func___cdecl_Font_ptr_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar6.TextFont.Data.Value = (Font *)SUB124((*(uint32_t *)((char *)&(auVar39) + 0)),8);
    UVar6.TextFont.IsValidData = (bool)auVar39[0xc];
    (*(uint32_t *)((char *)&(UVar6.TextFont) + 13)) = (*(uint32_t *)((char *)&(auVar39) + 13));
    uVar34 = SUB408((*(uint32_t *)((char *)&(auVar40) + 0)),0);
*(uint32_t *)&auVar41 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar40) + 0)),8));
    UVar6.ForegroundColor.Data.Getter.Callee = (void *)(int)uVar34;
    UVar6.ForegroundColor.Data.Getter.CallbackFunction =
         (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar6.ForegroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar41));
    UVar6.ForegroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar41)+4));
    UVar6.ForegroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar41)+8));
    UVar6.ForegroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar41) + 12));
    UVar6.ForegroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar41) + 16));
    UVar6.ForegroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar41) + 20));
    UVar6.ForegroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar41) + 24));
    UVar6.ForegroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar41) + 28));
    UVar6.ForegroundColor.IsValidData = (bool)auVar40[0x28];
    (*(uint32_t *)((char *)&(UVar6.ForegroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar40) + 41));
    uVar34 = SUB408((*(uint32_t *)((char *)&(auVar42) + 0)),0);
*(uint32_t *)&auVar41 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar42) + 0)),8));
    UVar6.BackgroundColor.Data.Getter.Callee = (void *)(int)uVar34;
    UVar6.BackgroundColor.Data.Getter.CallbackFunction =
         (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar6.BackgroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar41));
    UVar6.BackgroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar41)+4));
    UVar6.BackgroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar41)+8));
    UVar6.BackgroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar41) + 12));
    UVar6.BackgroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar41) + 16));
    UVar6.BackgroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar41) + 20));
    UVar6.BackgroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar41) + 24));
    UVar6.BackgroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar41) + 28));
    UVar6.BackgroundColor.IsValidData = (bool)auVar42[0x28];
    (*(uint32_t *)((char *)&(UVar6.BackgroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar42) + 41));
    UVar6.TextColor.Data.Getter.Callee = (void *)(*(uint32_t *)((char *)&(in_stack_fffff248) + 284));
    UVar6.TextColor.Data.Value._pad_0x0_0 = (int)in_stack_fffff36c;
    UVar6.TextColor.Data.Value._pad_0x4_1 = in_stack_fffff370;
    UVar6.TextColor.Data.Value._pad_0x8_2 = in_stack_fffff374;
    UVar6.TextColor.Data.Value._pad_0xc_3 = in_stack_fffff378;
    UVar6.TextColor.Data.Value.Hue_degrees = in_stack_fffff37c;
    UVar6.TextColor.Data.Value.Saturation = in_stack_fffff380;
    UVar6.TextColor.Data.Value.Value = (double)(uintptr_t)((float)(int)(uintptr_t)(in_stack_fffff384));
    UVar6.TextColor.Data.Value.Alpha = in_stack_fffff388;
    UVar6.TextColor.IsValidData = SUB41(in_stack_fffff38c,0);
    (*(uint32_t *)((char *)&(UVar6.TextColor) + 41)) = SUB43(in_stack_fffff38c,1);
    DVar12.CallbackFunction = (void (*)(void *))(pcVar69);
    DVar12.Callee = pMVar66;
    pvVar16 = (void *)UIImage__UIImage(this_00,UVar6,bVar14,DVar12);
  }
  bVar14 = this_00 != (UIImage *)0x0;
  uVar31 = (uint)bVar14;
  *(uint32_t *)&local_c = (uint32_t)(uintptr_t)((OptionsSection__Interface *)&stack0xfffff394);
  pIVar19 = (OptionsSection__Interface *)&stack0xfffff394;
  if (pvVar16 == (void *)0x0) {
    in_stack_fffff388 = 2.97075e-43;
    in_stack_fffff384 =
         "\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl";
    in_stack_fffff380 = 1.0340525e-38;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
    pIVar19 = local_c;
  }
  *(uint32_t *)&local_c = (uint32_t)(uintptr_t)(pIVar19);
  pvVar53 = pvVar16;
  pRVar17 = util__ReferenceControllerRegistry__Get();
  pRVar18 = util__ReferenceControllerRegistry__Register(pRVar17,pvVar53);
  pIVar19 = local_c;
  ((struct Actor *)(uintptr_t)(local_c))->Parent = pvVar16;
  *(ReferenceController * *)&((struct Interface *)(uintptr_t)(pIVar19))->StoredWidgets = pRVar18;
  if (pRVar18 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(pRVar18);
  }
  pIVar19 = Manager__GetInterfacer((Manager *)this);
  (*(uint8_t*)&(uVar58)) = true;
  (*(uint24_t*)((char*)&(uVar58)+1)) = 0x7099;
  Interface__AddNewWidgetAndStore_struct_HUDItineraryNodeDragger__o2(pIVar19,0,(((UIWidget *)cde_rsp_slot())),(((ReferenceController *)cde_rsp_slot())));
  if ((*(uint32_t*)((char*)&(local_38)+4)) != (UIRowLayout *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)(*(uint32_t*)((char*)&(local_38)+4)));
  }
  if (bVar14) {
    uVar31 = 0;
    UIAttributes___UIAttributes(&local_3e8);
  }
  (*(uint32_t*)&(uStack_44)) =
       SUB84((double)(*(undefined4 *)((char *)&(Graphics__GlobalState.ViewMatrix.Data[0xf]) + 4)) /
             (double)(*(struct Quaternion_L_double_G_ *)(MinimumScreenResolution)).Y,0);
  (*(double *)&(local_4c)) = ((double)*(unsigned int *)(&(Graphics__GlobalState.ViewMatrix.Data[0xf])) /
             (double)(*(struct Quaternion_L_double_G_ *)(MinimumScreenResolution)).X);
  (*(uint32_t*)((char*)&(uStack_44)+4)) =
       (int)((ulonglong)
             ((double)*(unsigned int *)((char *)&(Graphics__GlobalState.ViewMatrix.Data[0xf]) + 4) /
             (double)(*(struct Quaternion_L_double_G_ *)(MinimumScreenResolution)).Y) >> 0x20);
  local_64 = util__Abs((double *)(local_4c + 8));
  local_38 = util__Abs((double *)local_4c);
  if (local_38 <= local_64) {
    iVar20 = (*(uint32_t*)&(local_4c));
    pSVar32 = (SharedPtr_L_UIWidget_G_ *)(uintptr_t)((*(uint32_t*)((char*)&(local_4c)+4)));
  }
  else {
    iVar20 = (*(uint32_t*)((char*)&(local_4c)+8));
    pSVar32 = (SharedPtr_L_UIWidget_G_ *)(*(uint32_t *)((char *)&(local_4c) + 12));
  }
  dVar1 = (double)CONCAT44(pSVar32,iVar20) * 0.7;
  if (dVar1 <= 0.7) {
    dVar1 = 0.7;
  }
  if (1.0 <= dVar1) {
    dVar1 = 1.0;
  }
  local_2c = (UIWidget *)(int)(dVar1 * 300.0);
  local_30 = (UIWidget *)(int)(dVar1 * 50.0);
  iVar20 = (int)(uintptr_t) Manager__GetTheme((Manager *)this);
  pFVar21 = ThemeFont__Get((ThemeFont *)(iVar20 + 0x40c));
  local_70.Data = (char *)0x0;
  (*(uint32_t*)&(uStack_44)) = (int)local_2c;
  local_70.Capacity = 0;
  (*(uint32_t*)((char*)&(auVar33)+8)) = 0;
  (*(uint64_t*)&(auVar33)) = uStack_44;
  _local_4c = (*(uint32_t *)cde_shl16(auVar33, 0x40));
  (*(uint32_t*)((char*)&(uStack_44)+4)) = (int)local_30;
  pUVar15 = (UIAttributes *)UIAttributes__UIAttributes(&local_5f0,(Manager *)this);
  (*(uint40_t*)&(uStack_14)) = CONCAT14(1,pFVar21);
  (pUVar15->DesiredSize).Getter.Callee = (void *)(*(uint32_t*)&(local_4c));
  (pUVar15->DesiredSize).Getter.CallbackFunction =
       (_func___cdecl_Vec2_L_int_G__void_ptr *)(*(uint32_t*)((char*)&(local_4c)+4));
  (pUVar15->DesiredSize).Value.X = (int)uStack_44;
  (pUVar15->DesiredSize).Value.Y = (*(uint32_t*)((char*)&(uStack_44)+4));
  (*(uint32_t*)&(uStack_1c)) = (uint32_t)(uintptr_t)((MainManager *)local_70.Data);
  (*(uint32_t*)((char*)&(uStack_1c)+4)) = (uint32_t)(uintptr_t)((code *)local_70.Capacity);
  (pUVar15->TextFont).Data.Getter.Callee = local_70.Data;
  (pUVar15->TextFont).Data.Getter.CallbackFunction =
       (_func___cdecl_Font_ptr_void_ptr *)local_70.Capacity;
  (pUVar15->TextFont).Data.Value = pFVar21;
  *(UIWidget * *)&(pUVar15->TextFont).IsValidData = (UIWidget *)(uintptr_t)((*(uint32_t*)((char*)&(uStack_14)+4)));
  UIAttributes__UIAttributes(&local_3e8,pUVar15);
  UIAttributes___UIAttributes(&local_5f0);
  pvVar16 = (void *)(uintptr_t)(port_op_new(0x218));
  local_38 = (double)CONCAT44(pvVar16,(uint)local_38);
  if (pvVar16 == (void *)0x0) {
    pUVar26 = (UIWidget *)0x0;
  }
  else {
    pvVar16 = (void *)(uintptr_t)(port_op_new(0x218));
    local_64 = (double)CONCAT44(pvVar16,(undefined4)local_64);
    if (pvVar16 == (void *)0x0) {
      local_3c = (UIWidget *)0x0;
    }
    else {
      local_50 = (UIRowLayout *)(uintptr_t)(port_op_new(0x218));
      if (local_50 == (UIRowLayout *)0x0) {
        *(uint32_t *)&local_c = (uint32_t)(uintptr_t)((OptionsSection__Interface *)0x0);
      }
      else {
        pUVar22 = (UIButton *)(uintptr_t)(port_op_new(0x1b0));
        if (pUVar22 == (UIButton *)0x0) {
          *(uint32_t *)&local_54 = (uint32_t)(uintptr_t)((UIWidget *)0x0);
        }
        else {
          util__Str_char___Str_char(&local_1f8,"Exit");
          local_e0.Data = (char *)0x0;
          local_e0.Capacity = 0;
          local_e0.Length = 0;
          pLVar23 = (LocStr *)util__LocStr__LocStr((LocStr *)&local_104,&local_1f8,&local_e0);
          pSVar24 = util__LocStr__operator__o3(pLVar23);
          local_1ec = 0;
          local_1e8 = 0;
          util__Str_char___Str_char(&local_1e4,pSVar24);
          uVar31 = uVar31 | 0x1e;
          in_stack_fffff224 = (char *)0x709bcf;
          UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff22c,&local_3e8);
          in_stack_fffff228 = 0x709bd6;
          *(uint32_t *)&local_54 = (uint32_t)(uintptr_t)((UIWidget *)UIButton__UIButton(pUVar22,(UIAttributes){0},(((Attribute_L_util__Str_L_char_G___G_ *)cde_rsp_slot())),(Delegate_L_void_G_){0},(KeyCombination){0},(Delegate_L_void_CInputModifiers_G_){0},0,(Delegate_L_void_Cbool_Cbool_Cbool_G_){0}));
        }
        pUVar22 = (UIButton *)(uintptr_t)(port_op_new(0x1b0));
        if (pUVar22 == (UIButton *)0x0) {
          local_58 = (UIWidget *)0x0;
        }
        else {
          util__Str_char___Str_char(&local_70,"Infolinks");
          local_d4.Data = (char *)0x0;
          local_d4.Capacity = 0;
          local_d4.Length = 0;
          pLVar23 = (LocStr *)util__LocStr__LocStr((LocStr *)local_2a0,&local_70,&local_d4);
          pSVar24 = util__LocStr__operator__o3(pLVar23);
          local_1d8 = 0;
          local_1d4 = 0;
          util__Str_char___Str_char(&local_1d0,pSVar24);
          uVar31 = uVar31 | 0x1e0;
          in_stack_fffff224 = (char *)0x709ca7;
          UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff22c,&local_3e8);
          in_stack_fffff228 = 0x709cae;
          local_58 = (UIWidget *)UIButton__UIButton(pUVar22,(UIAttributes){0},(((Attribute_L_util__Str_L_char_G___G_ *)cde_rsp_slot())),(Delegate_L_void_G_){0},(KeyCombination){0},(Delegate_L_void_CInputModifiers_G_){0},0,(Delegate_L_void_Cbool_Cbool_Cbool_G_){0});
        }
        *(uint32_t *)&local_c = port_op_new(0x1b0);
        if (local_c == (OptionsSection__Interface *)0x0) {
          local_5c = (UIWidget *)0x0;
        }
        else {
          util__Str_char___Str_char(&local_128,"LevelEditor");
          local_c8.Data = (char *)0x0;
          local_c8.Capacity = 0;
          local_c8.Length = 0;
          pLVar23 = (LocStr *)util__LocStr__LocStr((LocStr *)local_288,&local_128,&local_c8);
          pSVar24 = util__LocStr__operator__o3(pLVar23);
          local_1c4 = 0;
          local_1c0 = 0;
          util__Str_char___Str_char(&local_1bc,pSVar24);
          iVar20 = (int)(uintptr_t) Manager__GetTheme((Manager *)this);
          pFVar21 = ThemeFont__Get((ThemeFont *)(iVar20 + 0x40c));
          local_ec = (MainManager *)0x0;
          p_Stack_e8 = (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0;
          uStack_1c = 0;
          uVar31 = uVar31 | 0x3e00;
          (*(uint32_t*)&(uStack_14)) = (uint32_t)(uintptr_t)(local_2c);
          (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)(local_30);
          pLVar25 = GameManager__GetManager_class_LogisticManager
                              ((GameManager *)local_28->_pad_0x4_1);
          pUVar15 = ShipDesignManager__GetLevelEditorAccessAttributes
                              ((pLVar25->ShipDesigner).Pointer,&local_c58);
          pUVar52 = (UIWidget *)(uintptr_t)((*(uint32_t*)((char*)&(uStack_14)+4)));
          pUVar26 = (UIWidget *)uStack_14;
          (*(uint40_t*)&(uStack_14)) = CONCAT14(1,pFVar21);
          (pUVar15->DesiredSize).Getter.Callee = (MainManager *)uStack_1c;
          (pUVar15->DesiredSize).Getter.CallbackFunction = (Vec2_L_int_G_ (*)(void *))(uintptr_t) (*(uint32_t*)((char*)&(uStack_1c)+4));
          (pUVar15->DesiredSize).Value.X = (int)pUVar26;
          (pUVar15->DesiredSize).Value.Y = (int)pUVar52;
          (*(uint32_t*)&(uStack_1c)) = (uint32_t)(uintptr_t)(local_ec);
          (*(uint32_t*)((char*)&(uStack_1c)+4)) = (uint32_t)(uintptr_t)(p_Stack_e8);
          (pUVar15->TextFont).Data.Getter.Callee = local_ec;
          (pUVar15->TextFont).Data.Getter.CallbackFunction =
               (_func___cdecl_Font_ptr_void_ptr *)p_Stack_e8;
          (pUVar15->TextFont).Data.Value = pFVar21;
          *(UIWidget * *)&(pUVar15->TextFont).IsValidData = (UIWidget *)(uintptr_t)((*(uint32_t*)((char*)&(uStack_14)+4)));
          in_stack_fffff224 = (char *)0x709e08;
          UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff22c,pUVar15);
          in_stack_fffff228 = 0x709e10;
          local_5c = (UIWidget *)UIButton__UIButton((UIButton *)local_c,(UIAttributes){0},(((Attribute_L_util__Str_L_char_G___G_ *)cde_rsp_slot())),(Delegate_L_void_G_){0},(KeyCombination){0},(Delegate_L_void_CInputModifiers_G_){0},0,(Delegate_L_void_Cbool_Cbool_Cbool_G_){0});
          this = local_28;
        }
        *(uint32_t *)&local_c = port_op_new(0x1b0);
        if (local_c == (OptionsSection__Interface *)0x0) {
          local_30 = (UIWidget *)0x0;
        }
        else {
          util__Str_char___Str_char(&local_11c,"State__ModuleDesign");
          local_bc.Data = (char *)0x0;
          local_bc.Capacity = 0;
          local_bc.Length = 0;
          pLVar23 = (LocStr *)util__LocStr__LocStr((LocStr *)local_270,&local_11c,&local_bc);
          pSVar24 = util__LocStr__operator__o3(pLVar23);
          local_1b0 = 0;
          local_1ac = 0;
          util__Str_char___Str_char(&local_1a8,pSVar24);
          iVar20 = (int)(uintptr_t) Manager__GetTheme((Manager *)this);
          pFVar21 = ThemeFont__Get((ThemeFont *)(iVar20 + 0x40c));
          local_ec = (MainManager *)0x0;
          p_Stack_e8 = (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0;
          uStack_1c = 0;
          uVar31 = uVar31 | 0x7c000;
          (*(uint32_t*)&(uStack_14)) = (uint32_t)(uintptr_t)(local_2c);
          (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)(local_30);
          pLVar25 = GameManager__GetManager_class_LogisticManager
                              ((GameManager *)local_28->_pad_0x4_1);
          in_stack_fffff220 = &local_b10;
          pUVar15 = ShipDesignManager__GetAccessAttributes
                              ((pLVar25->ShipDesigner).Pointer,in_stack_fffff220,true,false);
          pUVar52 = (UIWidget *)(uintptr_t)((*(uint32_t*)((char*)&(uStack_14)+4)));
          pUVar26 = (UIWidget *)uStack_14;
          (*(uint40_t*)&(uStack_14)) = CONCAT14(1,pFVar21);
          (pUVar15->DesiredSize).Getter.Callee = (MainManager *)uStack_1c;
          (pUVar15->DesiredSize).Getter.CallbackFunction = (Vec2_L_int_G_ (*)(void *))(uintptr_t) (*(uint32_t*)((char*)&(uStack_1c)+4));
          (pUVar15->DesiredSize).Value.X = (int)pUVar26;
          (pUVar15->DesiredSize).Value.Y = (int)pUVar52;
          (*(uint32_t*)&(uStack_1c)) = (uint32_t)(uintptr_t)(local_ec);
          (*(uint32_t*)((char*)&(uStack_1c)+4)) = (uint32_t)(uintptr_t)(p_Stack_e8);
          (pUVar15->TextFont).Data.Getter.Callee = local_ec;
          (pUVar15->TextFont).Data.Getter.CallbackFunction =
               (_func___cdecl_Font_ptr_void_ptr *)p_Stack_e8;
          (pUVar15->TextFont).Data.Value = pFVar21;
          *(UIWidget * *)&(pUVar15->TextFont).IsValidData = (UIWidget *)(uintptr_t)((*(uint32_t*)((char*)&(uStack_14)+4)));
          in_stack_fffff224 = (char *)0x709f71;
          UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff22c,pUVar15);
          in_stack_fffff228 = 0x709f79;
          local_30 = (UIWidget *)UIButton__UIButton((UIButton *)local_c,(UIAttributes){0},(((Attribute_L_util__Str_L_char_G___G_ *)cde_rsp_slot())),(Delegate_L_void_G_){0},(KeyCombination){0},(Delegate_L_void_CInputModifiers_G_){0},0,(Delegate_L_void_Cbool_Cbool_Cbool_G_){0});
        }
        pUVar22 = (UIButton *)(uintptr_t)(port_op_new(0x1b0));
        if (pUVar22 == (UIButton *)0x0) {
          local_2c = (UIWidget *)0x0;
          this = local_28;
        }
        else {
          util__Str_char___Str_char(&local_110,"State__ShipDesign");
          local_b0.Data = (char *)0x0;
          local_b0.Capacity = 0;
          local_b0.Length = 0;
          pLVar23 = (LocStr *)util__LocStr__LocStr((LocStr *)local_258,&local_110,&local_b0);
          pSVar24 = util__LocStr__operator__o3(pLVar23);
          local_19c = 0;
          local_198 = 0;
          util__Str_char___Str_char(&local_194,pSVar24);
          this = local_28;
          uVar31 = uVar31 | 0x780000;
          in_stack_fffff224 = (char *)0x70a056;
          UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff22c,&local_3e8);
          in_stack_fffff228 = 0x70a05d;
          local_2c = (UIWidget *)UIButton__UIButton(pUVar22,(UIAttributes){0},(((Attribute_L_util__Str_L_char_G___G_ *)cde_rsp_slot())),(Delegate_L_void_G_){0},(KeyCombination){0},(Delegate_L_void_CInputModifiers_G_){0},0,(Delegate_L_void_Cbool_Cbool_Cbool_G_){0});
        }
        pUVar22 = (UIButton *)(uintptr_t)(port_op_new(0x1b0));
        if (pUVar22 == (UIButton *)0x0) {
          local_3c = (UIWidget *)0x0;
        }
        else {
          util__Str_char___Str_char(&local_134,"Options");
          local_a4.Data = (char *)0x0;
          local_a4.Capacity = 0;
          local_a4.Length = 0;
          pLVar23 = (LocStr *)util__LocStr__LocStr((LocStr *)local_240,&local_134,&local_a4);
          pSVar24 = util__LocStr__operator__o3(pLVar23);
          local_188 = 0;
          local_184 = 0;
          util__Str_char___Str_char(&local_180,pSVar24);
          uVar31 = uVar31 | 0x7800000;
          in_stack_fffff224 = (char *)0x70a13a;
          UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff22c,&local_3e8);
          in_stack_fffff228 = 0x70a141;
          local_3c = (UIWidget *)UIButton__UIButton(pUVar22,(UIAttributes){0},(((Attribute_L_util__Str_L_char_G___G_ *)cde_rsp_slot())),(Delegate_L_void_G_){0},(KeyCombination){0},(Delegate_L_void_CInputModifiers_G_){0},0,(Delegate_L_void_Cbool_Cbool_Cbool_G_){0});
        }
        pUVar22 = (UIButton *)(uintptr_t)(port_op_new(0x1b0));
        if (pUVar22 == (UIButton *)0x0) {
          *(uint32_t *)&local_c = (uint32_t)(uintptr_t)((OptionsSection__Interface *)0x0);
        }
        else {
          util__Str_char___Str_char(&local_14c,"Sandbox");
          local_98.Data = (char *)0x0;
          local_98.Capacity = 0;
          local_98.Length = 0;
          pLVar23 = (LocStr *)util__LocStr__LocStr((LocStr *)local_228,&local_14c,&local_98);
          pSVar24 = util__LocStr__operator__o3(pLVar23);
          local_174 = 0;
          local_170 = 0;
          util__Str_char___Str_char(&local_16c,pSVar24);
          uVar31 = uVar31 | 0x78000000;
          in_stack_fffff224 = (char *)0x70a21b;
          UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff22c,&local_3e8);
          in_stack_fffff228 = 0x70a222;
          *(uint32_t *)&local_c = (uint32_t)(uintptr_t)((OptionsSection__Interface *)UIButton__UIButton(pUVar22,(UIAttributes){0},(((Attribute_L_util__Str_L_char_G___G_ *)cde_rsp_slot())),(Delegate_L_void_G_){0},(KeyCombination){0},(Delegate_L_void_CInputModifiers_G_){0},0,(Delegate_L_void_Cbool_Cbool_Cbool_G_){0}));
        }
        pUVar22 = (UIButton *)(uintptr_t)(port_op_new(0x1b0));
        if (pUVar22 == (UIButton *)0x0) {
          pUVar26 = (UIWidget *)0x0;
        }
        else {
          util__Str_char___Str_char(&local_140,"Campaign");
          local_8c.Data = (char *)0x0;
          local_8c.Capacity = 0;
          local_8c.Length = 0;
          uVar31 = uVar31 | 0x80000000;
          pLVar23 = (LocStr *)util__LocStr__LocStr((LocStr *)local_210,&local_140,&local_8c);
          pSVar24 = util__LocStr__operator__o3(pLVar23);
          local_160 = 0;
          local_15c = 0;
          util__Str_char___Str_char(&local_158,pSVar24);
          in_stack_fffff224 = (char *)0x70a2f3;
          UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff22c,&local_3e8);
          in_stack_fffff228 = 0x70a2fa;
          pUVar26 = (UIWidget *)UIButton__UIButton(pUVar22,(UIAttributes){0},(((Attribute_L_util__Str_L_char_G___G_ *)cde_rsp_slot())),(Delegate_L_void_G_){0},(KeyCombination){0},(Delegate_L_void_CInputModifiers_G_){0},0,(Delegate_L_void_Cbool_Cbool_Cbool_G_){0});
          local_8 = 7;
        }
        local_8 = local_8 | 8;
        _local_4c = ZEXT812(0x91d1bc);
        (*(uint32_t*)((char*)&(uStack_44)+4)) = 0;
        pIVar19 = local_c;
        pUVar52 = local_3c;
        pUVar55 = local_2c;
        pUVar59 = local_30;
        pUVar63 = local_5c;
        pUVar67 = local_58;
        pUVar70 = local_54;
        pDVar27 = (Data *)(uintptr_t)(UILayout__Data__Add((Data *)local_4c,pUVar26));
        pDVar27 = (Data *)(uintptr_t)(UILayout__Data__Add(pDVar27,(UIWidget *)pIVar19));
        pDVar27 = (Data *)(uintptr_t)(UILayout__Data__Add(pDVar27,pUVar52));
        pDVar27 = (Data *)(uintptr_t)(UILayout__Data__Add(pDVar27,pUVar55));
        pDVar27 = (Data *)(uintptr_t)(UILayout__Data__Add(pDVar27,pUVar59));
        pDVar27 = (Data *)(uintptr_t)(UILayout__Data__Add(pDVar27,pUVar63));
        pDVar27 = (Data *)(uintptr_t)(UILayout__Data__Add(pDVar27,pUVar67));
        pDVar27 = (Data *)(uintptr_t)(UILayout__Data__Add(pDVar27,pUVar70));
        (*(uint32_t*)&(uStack_1c)) = (uint32_t)(uintptr_t)((MainManager *)0x0);
        (*(uint32_t*)((char*)&(uStack_1c)+4)) = (uint32_t)(uintptr_t)((_func___cdecl_Vec2_L_int_G__void_ptr *)0x0);
        uStack_14 = 0x800000008;
        pLVar28 = LayoutAttributes__Bordered(&local_418);
        (pLVar28->Margin).Getter.Callee = (MainManager *)uStack_1c;
        (pLVar28->Margin).Getter.CallbackFunction = (Vec2_L_int_G_ (*)(void *))(uintptr_t) (*(uint32_t*)((char*)&(uStack_1c)+4));
        (pLVar28->Margin).Value.X = (int)(UIWidget *)uStack_14;
        (pLVar28->Margin).Value.Y = (int)(*(uint32_t*)((char*)&(uStack_14)+4));
        p_Var44 = (pLVar28->Margin).Getter.Callee;
        p_Var45 = (pLVar28->Margin).Getter.CallbackFunction;
        iVar20 = (pLVar28->Margin).Value.X;
        iVar47 = (pLVar28->Margin).Value.Y;
        pvVar16 = (pLVar28->Padding).Getter.Callee;
        p_Var49 = (pLVar28->Padding).Getter.CallbackFunction;
        fVar46 = (float)(pLVar28->Padding).Value;
        pvVar53 = (pLVar28->Background__HasBackground).Getter.Callee;
        p_Var56 = (pLVar28->Background__HasBackground).Getter.CallbackFunction;
        (*(uint8_t*)&(uVar60)) = (pLVar28->Background__HasBackground).Value;
        (*(uint24_t*)((char*)&(uVar60)+1)) = (*(undefined3 *)(void *)((char *)&((pLVar28->Background__HasBackground)) + 0x9));
        (*(uint8_t*)&(uVar64)) = pLVar28->IsEmbossed;
        (*(uint8_t*)((char*)&(uVar64)+1)) = pLVar28->IsCentered;
        (*(uint8_t*)((char*)&(uVar64)+2)) = pLVar28->DoesScrollbarHaveTrough;
        (*(uint8_t*)((char*)&(uVar64)+3)) = pLVar28->AlwaysConsumeScrolls;
        iVar48 = *(int *)&pLVar28->HasFlexibleSizing;
        UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff220,(Manager *)this);
        UVar2.Tag.Data = in_stack_fffff224;
        UVar2.Parent = (Manager *)in_stack_fffff220;
        UVar2.Tag.Capacity = in_stack_fffff228;
        UVar2.Tag.Length = (*(uint32_t*)&(in_stack_fffff22c));
        uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff22c) + 4)),0);
        uVar35 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff22c) + 4)),8);
        UVar2.Location.Getter.Callee = (void *)(int)uVar34;
        UVar2.Location.Getter.CallbackFunction =
             (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
        UVar2.Location.Value.X = (int)uVar35;
        UVar2.Location.Value.Y = (int)((ulonglong)uVar35 >> 0x20);
        UVar2.Visible.Getter.Callee = in_stack_fffff240;
        UVar2.Visible.Getter.CallbackFunction = in_stack_fffff244;
*(uint32_t *)&auVar33 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 4)));
*(uint32_t *)&auVar39 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 140)));
*(uint32_t *)&auVar40 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 156)));
*(uint32_t *)&auVar42 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 200)));
*(uint32_t *)&auVar43 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 244)));
        UVar2.Visible.Value = (bool)in_stack_fffff248[0];
        (*(uint24_t *)((char *)&(UVar2.Visible) + 9)) = (*(uint24_t*)((char*)&(in_stack_fffff248)+1));
        UVar2.Enabled.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar33));
        UVar2.Enabled.Getter.CallbackFunction =
             (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar33)) >> 0x20);
        UVar2.Enabled.Value = (bool)auVar33[8];
        (*(uint24_t *)((char *)&(UVar2.Enabled) + 9)) = (*(uint24_t*)((char*)&(auVar33)+9));
        uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 16)),0);
        uVar35 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 16)),8);
        UVar2.DesiredSize.Getter.Callee = (void *)(int)uVar34;
        UVar2.DesiredSize.Getter.CallbackFunction =
             (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
        UVar2.DesiredSize.Value.X = (int)uVar35;
        UVar2.DesiredSize.Value.Y = (int)((ulonglong)uVar35 >> 0x20);
        uVar34 = SUB248((*(uint32_t *)((char *)&(in_stack_fffff248) + 32)),0);
*(uint32_t *)&auVar38 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffff248) + 32)),8));
        UVar2.FillProportion.Getter.Callee = (void *)(int)uVar34;
        UVar2.FillProportion.Getter.CallbackFunction =
             (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
        UVar2.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar38));
        UVar2.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar38)+8));
        uVar34 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff248) + 56)),0);
        UVar2.HitTestShape.Getter.Callee = (void *)(int)uVar34;
        UVar2.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)(int)((ulonglong)uVar34 >> 0x20));
        UVar2.HitTestShape.Value = SUB124((*(uint32_t *)((char *)&(in_stack_fffff248) + 56)),8);
        (*(uint32_t *)((char *)&(UVar2) + 108)) = (*(uint32_t *)((char *)&(in_stack_fffff248) + 68));
        uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 72)),0);
        UVar2.Depth.Getter.Callee = (void *)(int)uVar34;
        UVar2.Depth.Getter.CallbackFunction =
             (_func___cdecl_double_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
        UVar2.Depth.Value = (double)SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 72)),8);
        uVar34 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff248) + 88)),0);
        UVar2.Icon.Getter.Callee = (void *)(int)uVar34;
        UVar2.Icon.Getter.CallbackFunction = (void (* (*)(void *))(void))((_func___cdecl__func___cdecl_void_ptr_void_ptr *)(int)((ulonglong)uVar34 >> 0x20));
        UVar2.Icon.Value = (_func___cdecl_void *)SUB124((*(uint32_t *)((char *)&(in_stack_fffff248) + 88)),8);
        uVar34 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff248) + 100)),0);
*(uint32_t *)&auVar33 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff248) + 100)),8));
        UVar2.Tooltip.Getter.Callee = (void *)(int)uVar34;
        UVar2.Tooltip.Getter.CallbackFunction =
             (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
        UVar2.Tooltip.Value.Data = (char *)(*(uint32_t*)&(auVar33));
        UVar2.Tooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar33)+4));
        UVar2.Tooltip.Value.Length = (*(uint32_t*)((char*)&(auVar33)+8));
        uVar34 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff248) + 120)),0);
*(uint32_t *)&auVar33 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff248) + 120)),8));
        UVar2.VerboseTooltip.Getter.Callee = (void *)(int)uVar34;
        UVar2.VerboseTooltip.Getter.CallbackFunction =
             (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
        UVar2.VerboseTooltip.Value.Data = (char *)(*(uint32_t*)&(auVar33));
        UVar2.VerboseTooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar33)+4));
        UVar2.VerboseTooltip.Value.Length = (*(uint32_t*)((char*)&(auVar33)+8));
        uVar34 = SUB128((*(uint32_t *)((char *)&(auVar39) + 0)),0);
        UVar2.TextFont.Data.Getter.Callee = (void *)(int)uVar34;
        UVar2.TextFont.Data.Getter.CallbackFunction =
             (_func___cdecl_Font_ptr_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
        UVar2.TextFont.Data.Value = (Font *)SUB124((*(uint32_t *)((char *)&(auVar39) + 0)),8);
        UVar2.TextFont.IsValidData = (bool)auVar39[0xc];
        (*(uint32_t *)((char *)&(UVar2.TextFont) + 13)) = (*(uint32_t *)((char *)&(auVar39) + 13));
        uVar34 = SUB408((*(uint32_t *)((char *)&(auVar40) + 0)),0);
*(uint32_t *)&auVar41 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar40) + 0)),8));
        UVar2.ForegroundColor.Data.Getter.Callee = (void *)(int)uVar34;
        UVar2.ForegroundColor.Data.Getter.CallbackFunction =
             (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
        UVar2.ForegroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar41));
        UVar2.ForegroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar41)+4));
        UVar2.ForegroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar41)+8));
        UVar2.ForegroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar41) + 12));
        UVar2.ForegroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar41) + 16));
        UVar2.ForegroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar41) + 20));
        UVar2.ForegroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar41) + 24));
        UVar2.ForegroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar41) + 28));
        UVar2.ForegroundColor.IsValidData = (bool)auVar40[0x28];
        (*(uint32_t *)((char *)&(UVar2.ForegroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar40) + 41));
        uVar34 = SUB408((*(uint32_t *)((char *)&(auVar42) + 0)),0);
*(uint32_t *)&auVar41 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar42) + 0)),8));
        UVar2.BackgroundColor.Data.Getter.Callee = (void *)(int)uVar34;
        UVar2.BackgroundColor.Data.Getter.CallbackFunction =
             (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
        UVar2.BackgroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar41));
        UVar2.BackgroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar41)+4));
        UVar2.BackgroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar41)+8));
        UVar2.BackgroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar41) + 12));
        UVar2.BackgroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar41) + 16));
        UVar2.BackgroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar41) + 20));
        UVar2.BackgroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar41) + 24));
        UVar2.BackgroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar41) + 28));
        UVar2.BackgroundColor.IsValidData = (bool)auVar42[0x28];
        (*(uint32_t *)((char *)&(UVar2.BackgroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar42) + 41));
        uVar34 = SUB408((*(uint32_t *)((char *)&(auVar43) + 0)),0);
*(uint32_t *)&auVar41 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar43) + 0)),8));
        UVar2.TextColor.Data.Getter.Callee = (void *)(int)uVar34;
        UVar2.TextColor.Data.Getter.CallbackFunction =
             (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
        UVar2.TextColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar41));
        UVar2.TextColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar41)+4));
        UVar2.TextColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar41)+8));
        UVar2.TextColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar41) + 12));
        UVar2.TextColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar41) + 16));
        UVar2.TextColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar41) + 20));
        UVar2.TextColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar41) + 24));
        UVar2.TextColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar41) + 28));
        UVar2.TextColor.IsValidData = (bool)auVar43[0x28];
        (*(uint32_t *)((char *)&(UVar2.TextColor) + 41)) = (*(uint32_t *)((char *)&(auVar43) + 41));
        LVar8.Margin.Getter.CallbackFunction = p_Var45;
        LVar8.Margin.Getter.Callee = p_Var44;
        LVar8.Margin.Value.X = iVar20;
        LVar8.Margin.Value.Y = iVar47;
        LVar8.Padding.Getter.Callee = pvVar16;
        LVar8.Padding.Getter.CallbackFunction = p_Var49;
        LVar8.Padding.Value = (int)fVar46;
        LVar8.Background__HasBackground.Getter.Callee = pvVar53;
        LVar8.Background__HasBackground.Getter.CallbackFunction = p_Var56;
        LVar8.Background__HasBackground.Value = SUB41(uVar60,0);
        (*(uint24_t *)((char *)&(LVar8.Background__HasBackground) + 9)) = SUB43(uVar60,1);
        LVar8.IsEmbossed = (bool)(char)uVar64;
        LVar8.IsCentered = (bool)(char)((uint)uVar64 >> 8);
        LVar8.DoesScrollbarHaveTrough = (bool)(char)((uint)uVar64 >> 0x10);
        LVar8.AlwaysConsumeScrolls = (bool)(char)((uint)uVar64 >> 0x18);
        (*(uint32_t *)((char *)&(LVar8) + 44)) = iVar48;
        *(uint32_t *)&local_c = (uint32_t)(uintptr_t)((OptionsSection__Interface *)UIRowLayout__UIRowLayout(local_50,UVar2,LVar8,pDVar27));
      }
      local_8 = local_8 | 0x10;
      puVar29 = (undefined4 *)LayoutAttributes__LayoutAttributes(&local_448);
      *(undefined1 *)((int)puVar29 + 0x29) = 1;
      pUVar15 = (UIAttributes *)UIAttributes__UIAttributes(&local_9c8,(Manager *)this);
      (*(uint32_t*)&(uStack_1c)) = (uint32_t)(uintptr_t)((MainManager *)0x0);
      (*(uint32_t*)((char*)&(uStack_1c)+4)) = (uint32_t)(uintptr_t)((_func___cdecl_Vec2_L_int_G__void_ptr *)0x3ff00000);
      uStack_14 = 0x3ff0000000000000;
      local_24 = 0;
      uStack_20 = 0;
      (pUVar15->FillProportion).Getter.Callee = (void *)0x0;
      (pUVar15->FillProportion).Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0
      ;
      *(undefined4 *)&(pUVar15->FillProportion).Value.X = 0;
      *(undefined4 *)((int)&(pUVar15->FillProportion).Value.X + 4) = 0x3ff00000;
      (pUVar15->FillProportion).Value.Y = 1.0;
      in_stack_fffff368 = (_func___cdecl_Color_void_ptr *)*puVar29;
      in_stack_fffff36c = (float)puVar29[1];
      in_stack_fffff370 = puVar29[2];
      in_stack_fffff374 = puVar29[3];
      in_stack_fffff378 = puVar29[4];
      in_stack_fffff37c = (float)puVar29[5];
      in_stack_fffff380 = (float)puVar29[6];
      in_stack_fffff384 = (char *)puVar29[7];
      in_stack_fffff388 = (float)puVar29[8];
      uVar58 = puVar29[9];
      uVar60 = puVar29[10];
      iVar20 = puVar29[0xb];
      pIVar19 = local_c;
      UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff220,pUVar15);
      UVar3.Tag.Data = in_stack_fffff224;
      UVar3.Parent = (Manager *)in_stack_fffff220;
      UVar3.Tag.Capacity = in_stack_fffff228;
      UVar3.Tag.Length = (*(uint32_t*)&(in_stack_fffff22c));
      uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff22c) + 4)),0);
      uVar35 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff22c) + 4)),8);
      UVar3.Location.Getter.Callee = (void *)(int)uVar34;
      UVar3.Location.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar3.Location.Value.X = (int)uVar35;
      UVar3.Location.Value.Y = (int)((ulonglong)uVar35 >> 0x20);
      UVar3.Visible.Getter.Callee = in_stack_fffff240;
      UVar3.Visible.Getter.CallbackFunction = in_stack_fffff244;
*(uint32_t *)&auVar33 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 4)));
*(uint32_t *)&auVar39 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 140)));
*(uint32_t *)&auVar40 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 156)));
*(uint32_t *)&auVar42 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 200)));
*(uint32_t *)&auVar43 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 244)));
      UVar3.Visible.Value = (bool)in_stack_fffff248[0];
      (*(uint24_t *)((char *)&(UVar3.Visible) + 9)) = (*(uint24_t*)((char*)&(in_stack_fffff248)+1));
      UVar3.Enabled.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar33));
      UVar3.Enabled.Getter.CallbackFunction =
           (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar33)) >> 0x20);
      UVar3.Enabled.Value = (bool)auVar33[8];
      (*(uint24_t *)((char *)&(UVar3.Enabled) + 9)) = (*(uint24_t*)((char*)&(auVar33)+9));
      uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 16)),0);
      uVar35 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 16)),8);
      UVar3.DesiredSize.Getter.Callee = (void *)(int)uVar34;
      UVar3.DesiredSize.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar3.DesiredSize.Value.X = (int)uVar35;
      UVar3.DesiredSize.Value.Y = (int)((ulonglong)uVar35 >> 0x20);
      uVar34 = SUB248((*(uint32_t *)((char *)&(in_stack_fffff248) + 32)),0);
*(uint32_t *)&auVar38 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffff248) + 32)),8));
      UVar3.FillProportion.Getter.Callee = (void *)(int)uVar34;
      UVar3.FillProportion.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar3.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar38));
      UVar3.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar38)+8));
      uVar34 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff248) + 56)),0);
      UVar3.HitTestShape.Getter.Callee = (void *)(int)uVar34;
      UVar3.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)(int)((ulonglong)uVar34 >> 0x20));
      UVar3.HitTestShape.Value = SUB124((*(uint32_t *)((char *)&(in_stack_fffff248) + 56)),8);
      (*(uint32_t *)((char *)&(UVar3) + 108)) = (*(uint32_t *)((char *)&(in_stack_fffff248) + 68));
      uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 72)),0);
      UVar3.Depth.Getter.Callee = (void *)(int)uVar34;
      UVar3.Depth.Getter.CallbackFunction =
           (_func___cdecl_double_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar3.Depth.Value = (double)SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 72)),8);
      uVar34 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff248) + 88)),0);
      UVar3.Icon.Getter.Callee = (void *)(int)uVar34;
      UVar3.Icon.Getter.CallbackFunction = (void (* (*)(void *))(void))((_func___cdecl__func___cdecl_void_ptr_void_ptr *)(int)((ulonglong)uVar34 >> 0x20));
      UVar3.Icon.Value = (_func___cdecl_void *)SUB124((*(uint32_t *)((char *)&(in_stack_fffff248) + 88)),8);
      uVar34 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff248) + 100)),0);
*(uint32_t *)&auVar33 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff248) + 100)),8));
      UVar3.Tooltip.Getter.Callee = (void *)(int)uVar34;
      UVar3.Tooltip.Getter.CallbackFunction =
           (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar3.Tooltip.Value.Data = (char *)(*(uint32_t*)&(auVar33));
      UVar3.Tooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar33)+4));
      UVar3.Tooltip.Value.Length = (*(uint32_t*)((char*)&(auVar33)+8));
      uVar34 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff248) + 120)),0);
*(uint32_t *)&auVar33 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff248) + 120)),8));
      UVar3.VerboseTooltip.Getter.Callee = (void *)(int)uVar34;
      UVar3.VerboseTooltip.Getter.CallbackFunction =
           (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar3.VerboseTooltip.Value.Data = (char *)(*(uint32_t*)&(auVar33));
      UVar3.VerboseTooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar33)+4));
      UVar3.VerboseTooltip.Value.Length = (*(uint32_t*)((char*)&(auVar33)+8));
      uVar34 = SUB128((*(uint32_t *)((char *)&(auVar39) + 0)),0);
      UVar3.TextFont.Data.Getter.Callee = (void *)(int)uVar34;
      UVar3.TextFont.Data.Getter.CallbackFunction =
           (_func___cdecl_Font_ptr_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar3.TextFont.Data.Value = (Font *)SUB124((*(uint32_t *)((char *)&(auVar39) + 0)),8);
      UVar3.TextFont.IsValidData = (bool)auVar39[0xc];
      (*(uint32_t *)((char *)&(UVar3.TextFont) + 13)) = (*(uint32_t *)((char *)&(auVar39) + 13));
      uVar34 = SUB408((*(uint32_t *)((char *)&(auVar40) + 0)),0);
*(uint32_t *)&auVar41 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar40) + 0)),8));
      UVar3.ForegroundColor.Data.Getter.Callee = (void *)(int)uVar34;
      UVar3.ForegroundColor.Data.Getter.CallbackFunction =
           (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar3.ForegroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar41));
      UVar3.ForegroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar41)+4));
      UVar3.ForegroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar41)+8));
      UVar3.ForegroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar41) + 12));
      UVar3.ForegroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar41) + 16));
      UVar3.ForegroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar41) + 20));
      UVar3.ForegroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar41) + 24));
      UVar3.ForegroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar41) + 28));
      UVar3.ForegroundColor.IsValidData = (bool)auVar40[0x28];
      (*(uint32_t *)((char *)&(UVar3.ForegroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar40) + 41));
      uVar34 = SUB408((*(uint32_t *)((char *)&(auVar42) + 0)),0);
*(uint32_t *)&auVar41 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar42) + 0)),8));
      UVar3.BackgroundColor.Data.Getter.Callee = (void *)(int)uVar34;
      UVar3.BackgroundColor.Data.Getter.CallbackFunction =
           (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar3.BackgroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar41));
      UVar3.BackgroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar41)+4));
      UVar3.BackgroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar41)+8));
      UVar3.BackgroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar41) + 12));
      UVar3.BackgroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar41) + 16));
      UVar3.BackgroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar41) + 20));
      UVar3.BackgroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar41) + 24));
      UVar3.BackgroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar41) + 28));
      UVar3.BackgroundColor.IsValidData = (bool)auVar42[0x28];
      (*(uint32_t *)((char *)&(UVar3.BackgroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar42) + 41));
      uVar34 = SUB408((*(uint32_t *)((char *)&(auVar43) + 0)),0);
*(uint32_t *)&auVar41 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar43) + 0)),8));
      UVar3.TextColor.Data.Getter.Callee = (void *)(int)uVar34;
      UVar3.TextColor.Data.Getter.CallbackFunction =
           (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar3.TextColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar41));
      UVar3.TextColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar41)+4));
      UVar3.TextColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar41)+8));
      UVar3.TextColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar41) + 12));
      UVar3.TextColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar41) + 16));
      UVar3.TextColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar41) + 20));
      UVar3.TextColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar41) + 24));
      UVar3.TextColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar41) + 28));
      UVar3.TextColor.IsValidData = (bool)auVar43[0x28];
      (*(uint32_t *)((char *)&(UVar3.TextColor) + 41)) = (*(uint32_t *)((char *)&(auVar43) + 41));
      LVar9.Margin.Getter.CallbackFunction = *(_func___cdecl_Vec2_L_int_G__void_ptr *)&(in_stack_fffff36c);
      LVar9.Margin.Getter.Callee = in_stack_fffff368;
      LVar9.Margin.Value.X = in_stack_fffff370;
      LVar9.Margin.Value.Y = in_stack_fffff374;
      LVar9.Padding.Getter.Callee = (void *)in_stack_fffff378;
      LVar9.Padding.Getter.CallbackFunction = *(_func___cdecl_int_void_ptr *)&(in_stack_fffff37c);
      LVar9.Padding.Value = (int)in_stack_fffff380;
      LVar9.Background__HasBackground.Getter.Callee = in_stack_fffff384;
      LVar9.Background__HasBackground.Getter.CallbackFunction = (_func___cdecl_bool_void_ptr *)(uintptr_t)*(uint32_t *)&in_stack_fffff388
      ;
      LVar9.Background__HasBackground.Value = SUB41(uVar58,0);
      (*(uint24_t *)((char *)&(LVar9.Background__HasBackground) + 9)) = SUB43(uVar58,1);
      LVar9.IsEmbossed = (bool)(char)uVar60;
      LVar9.IsCentered = (bool)(char)((uint)uVar60 >> 8);
      LVar9.DoesScrollbarHaveTrough = (bool)(char)((uint)uVar60 >> 0x10);
      LVar9.AlwaysConsumeScrolls = (bool)(char)((uint)uVar60 >> 0x18);
      (*(uint32_t *)((char *)&(LVar9) + 44)) = iVar20;
      local_3c = (UIWidget *)
                 UIBoxLayout__UIBoxLayout((*(uint32_t*)((char*)&(local_64)+4)),UVar3,LVar9,(UIWidget *)pIVar19);
    }
    local_50 = (UIRowLayout *)(uintptr_t)(port_op_new(0x218));
    if (local_50 == (UIRowLayout *)0x0) {
      pUVar26 = (UIWidget *)0x0;
    }
    else {
      pvVar16 = (void *)(uintptr_t)(port_op_new(0x178));
      local_64 = (double)CONCAT44(pvVar16,(undefined4)local_64);
      if (pvVar16 == (void *)0x0) {
        *(uint32_t *)&local_c = (uint32_t)(uintptr_t)((OptionsSection__Interface *)0x0);
      }
      else {
        local_8 = local_8 | 0x20;
        pcVar69 = (long long int (*)())(util__DelegateFactory_class_MainManager_void___MethodCallerConst__private__void___thiscall_MainManager__RenderTitle_void_const);
        uVar62 = 0;
        (*(uint32_t*)((char*)&(uStack_1c)+4)) = (uint32_t)(uintptr_t)(util__DelegateFactory_class_MainManager_struct_util__Vec2_int_____MethodCallerConst__private__struct_util__Vec2_int____thiscall_MainManager__GetMainTitleSize_void_const);
        uStack_14 = 0;
        pMVar66 = this;
        (*(uint32_t*)&(uStack_1c)) = (uint32_t)(uintptr_t)(this);
        pUVar15 = (UIAttributes *)UIAttributes__UIAttributes(&local_880,(Manager *)this);
        (pUVar15->DesiredSize).Getter.Callee = (MainManager *)uStack_1c;
        (pUVar15->DesiredSize).Getter.CallbackFunction = (Vec2_L_int_G_ (*)(void *))(uintptr_t) (*(uint32_t*)((char*)&(uStack_1c)+4));
        (pUVar15->DesiredSize).Value.X = (int)(UIWidget *)uStack_14;
        (pUVar15->DesiredSize).Value.Y = (int)(*(uint32_t*)((char*)&(uStack_14)+4));
        in_stack_fffff240 = (_func___cdecl_Vec2_L_int_G__void_ptr *)0x70a4ec;
        UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff248,pUVar15);
        in_stack_fffff244 = (_func___cdecl_bool_void_ptr *)0x70a4f4;
        UVar7.TextColor.Data.Getter.CallbackFunction = in_stack_fffff368;
*(uint32_t *)&auVar33 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 4)));
*(uint32_t *)&auVar36 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 32)));
*(uint32_t *)&auVar37 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 44)));
*(uint32_t *)&auVar39 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 180)));
*(uint32_t *)&auVar40 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 196)));
*(uint32_t *)&auVar42 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 240)));
        UVar7.Parent = (Manager *)(*(uint32_t*)&(in_stack_fffff248));
        UVar7.Tag.Data = (char *)(*(uint32_t*)&(auVar33));
        UVar7.Tag.Capacity = (*(uint32_t*)((char*)&(auVar33)+4));
        UVar7.Tag.Length = (*(uint32_t*)((char*)&(auVar33)+8));
        uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 16)),0);
        uVar35 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 16)),8);
        UVar7.Location.Getter.Callee = (void *)(int)uVar34;
        UVar7.Location.Getter.CallbackFunction =
             (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
        UVar7.Location.Value.X = (int)uVar35;
        UVar7.Location.Value.Y = (int)((ulonglong)uVar35 >> 0x20);
        UVar7.Visible.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar36));
        UVar7.Visible.Getter.CallbackFunction =
             (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar36)) >> 0x20);
        UVar7.Visible.Value = (bool)auVar36[8];
        (*(uint24_t *)((char *)&(UVar7.Visible) + 9)) = (*(uint24_t*)((char*)&(auVar36)+9));
        UVar7.Enabled.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar37));
        UVar7.Enabled.Getter.CallbackFunction =
             (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar37)) >> 0x20);
        UVar7.Enabled.Value = (bool)auVar37[8];
        (*(uint24_t *)((char *)&(UVar7.Enabled) + 9)) = (*(uint24_t*)((char*)&(auVar37)+9));
        uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 56)),0);
        uVar35 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 56)),8);
        UVar7.DesiredSize.Getter.Callee = (void *)(int)uVar34;
        UVar7.DesiredSize.Getter.CallbackFunction =
             (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
        UVar7.DesiredSize.Value.X = (int)uVar35;
        UVar7.DesiredSize.Value.Y = (int)((ulonglong)uVar35 >> 0x20);
        uVar34 = SUB248((*(uint32_t *)((char *)&(in_stack_fffff248) + 72)),0);
*(uint32_t *)&auVar38 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffff248) + 72)),8));
        UVar7.FillProportion.Getter.Callee = (void *)(int)uVar34;
        UVar7.FillProportion.Getter.CallbackFunction =
             (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
        UVar7.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar38));
        UVar7.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar38)+8));
        uVar34 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff248) + 96)),0);
        UVar7.HitTestShape.Getter.Callee = (void *)(int)uVar34;
        UVar7.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)(int)((ulonglong)uVar34 >> 0x20));
        UVar7.HitTestShape.Value = SUB124((*(uint32_t *)((char *)&(in_stack_fffff248) + 96)),8);
        (*(uint32_t *)((char *)&(UVar7) + 108)) = (*(uint32_t *)((char *)&(in_stack_fffff248) + 108));
        uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 112)),0);
        UVar7.Depth.Getter.Callee = (void *)(int)uVar34;
        UVar7.Depth.Getter.CallbackFunction =
             (_func___cdecl_double_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
        UVar7.Depth.Value = (double)SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 112)),8);
        uVar34 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff248) + 128)),0);
        UVar7.Icon.Getter.Callee = (void *)(int)uVar34;
        UVar7.Icon.Getter.CallbackFunction = (void (* (*)(void *))(void))((_func___cdecl__func___cdecl_void_ptr_void_ptr *)(int)((ulonglong)uVar34 >> 0x20));
        UVar7.Icon.Value = (_func___cdecl_void *)SUB124((*(uint32_t *)((char *)&(in_stack_fffff248) + 128)),8);
        uVar34 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff248) + 140)),0);
*(uint32_t *)&auVar33 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff248) + 140)),8));
        UVar7.Tooltip.Getter.Callee = (void *)(int)uVar34;
        UVar7.Tooltip.Getter.CallbackFunction =
             (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
        UVar7.Tooltip.Value.Data = (char *)(*(uint32_t*)&(auVar33));
        UVar7.Tooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar33)+4));
        UVar7.Tooltip.Value.Length = (*(uint32_t*)((char*)&(auVar33)+8));
        uVar34 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff248) + 160)),0);
*(uint32_t *)&auVar33 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff248) + 160)),8));
        UVar7.VerboseTooltip.Getter.Callee = (void *)(int)uVar34;
        UVar7.VerboseTooltip.Getter.CallbackFunction =
             (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
        UVar7.VerboseTooltip.Value.Data = (char *)(*(uint32_t*)&(auVar33));
        UVar7.VerboseTooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar33)+4));
        UVar7.VerboseTooltip.Value.Length = (*(uint32_t*)((char*)&(auVar33)+8));
        uVar34 = SUB128((*(uint32_t *)((char *)&(auVar39) + 0)),0);
        UVar7.TextFont.Data.Getter.Callee = (void *)(int)uVar34;
        UVar7.TextFont.Data.Getter.CallbackFunction =
             (_func___cdecl_Font_ptr_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
        UVar7.TextFont.Data.Value = (Font *)SUB124((*(uint32_t *)((char *)&(auVar39) + 0)),8);
        UVar7.TextFont.IsValidData = (bool)auVar39[0xc];
        (*(uint32_t *)((char *)&(UVar7.TextFont) + 13)) = (*(uint32_t *)((char *)&(auVar39) + 13));
        uVar34 = SUB408((*(uint32_t *)((char *)&(auVar40) + 0)),0);
*(uint32_t *)&auVar41 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar40) + 0)),8));
        UVar7.ForegroundColor.Data.Getter.Callee = (void *)(int)uVar34;
        UVar7.ForegroundColor.Data.Getter.CallbackFunction =
             (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
        UVar7.ForegroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar41));
        UVar7.ForegroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar41)+4));
        UVar7.ForegroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar41)+8));
        UVar7.ForegroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar41) + 12));
        UVar7.ForegroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar41) + 16));
        UVar7.ForegroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar41) + 20));
        UVar7.ForegroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar41) + 24));
        UVar7.ForegroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar41) + 28));
        UVar7.ForegroundColor.IsValidData = (bool)auVar40[0x28];
        (*(uint32_t *)((char *)&(UVar7.ForegroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar40) + 41));
        uVar34 = SUB408((*(uint32_t *)((char *)&(auVar42) + 0)),0);
*(uint32_t *)&auVar41 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar42) + 0)),8));
        UVar7.BackgroundColor.Data.Getter.Callee = (void *)(int)uVar34;
        UVar7.BackgroundColor.Data.Getter.CallbackFunction =
             (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
        UVar7.BackgroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar41));
        UVar7.BackgroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar41)+4));
        UVar7.BackgroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar41)+8));
        UVar7.BackgroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar41) + 12));
        UVar7.BackgroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar41) + 16));
        UVar7.BackgroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar41) + 20));
        UVar7.BackgroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar41) + 24));
        UVar7.BackgroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar41) + 28));
        UVar7.BackgroundColor.IsValidData = (bool)auVar42[0x28];
        (*(uint32_t *)((char *)&(UVar7.BackgroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar42) + 41));
        UVar7.TextColor.Data.Getter.Callee = (void *)(*(uint32_t *)((char *)&(in_stack_fffff248) + 284));
        UVar7.TextColor.Data.Value._pad_0x0_0 = (int)in_stack_fffff36c;
        UVar7.TextColor.Data.Value._pad_0x4_1 = in_stack_fffff370;
        UVar7.TextColor.Data.Value._pad_0x8_2 = in_stack_fffff374;
        UVar7.TextColor.Data.Value._pad_0xc_3 = in_stack_fffff378;
        UVar7.TextColor.Data.Value.Hue_degrees = in_stack_fffff37c;
        UVar7.TextColor.Data.Value.Saturation = in_stack_fffff380;
        UVar7.TextColor.Data.Value.Value = (double)(uintptr_t)((float)(int)(uintptr_t)(in_stack_fffff384));
        UVar7.TextColor.Data.Value.Alpha = in_stack_fffff388;
        UVar7.TextColor.IsValidData = SUB41(uVar58,0);
        (*(uint32_t *)((char *)&(UVar7.TextColor) + 41)) = SUB43(uVar58,1);
        DVar13.CallbackFunction = (void (*)(void *))(pcVar69);
        DVar13.Callee = pMVar66;
        local_c = (OptionsSection__Interface *)UIImage__UIImage((UIImage *)(*(uint32_t*)((char*)&(local_64)+4)),UVar7,(bool)uVar62,DVar13)
        ;
      }
      local_8 = local_8 | 0x40;
      puVar29 = (undefined4 *)LayoutAttributes__LayoutAttributes(&local_478);
      *(undefined1 *)((int)puVar29 + 0x29) = 1;
      pUVar15 = (UIAttributes *)UIAttributes__UIAttributes(&local_738,(Manager *)this);
      (*(uint32_t*)&(uStack_1c)) = (uint32_t)(uintptr_t)((MainManager *)0x0);
      (*(uint32_t*)((char*)&(uStack_1c)+4)) = (uint32_t)(uintptr_t)((_func___cdecl_Vec2_L_int_G__void_ptr *)0x3ff00000);
      uStack_14 = 0;
      local_24 = 0;
      uStack_20 = 0;
      (pUVar15->FillProportion).Getter.Callee = (void *)0x0;
      (pUVar15->FillProportion).Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0
      ;
      *(undefined4 *)&(pUVar15->FillProportion).Value.X = 0;
      *(undefined4 *)((int)&(pUVar15->FillProportion).Value.X + 4) = 0x3ff00000;
      (pUVar15->FillProportion).Value.Y = 0.0;
      p_Var44 = (_func___cdecl_Color_void_ptr *)*puVar29;
      fVar46 = (float)puVar29[1];
      iVar20 = puVar29[2];
      iVar47 = puVar29[3];
      iVar48 = puVar29[4];
      fVar50 = (float)puVar29[5];
      fVar51 = (float)puVar29[6];
      fVar54 = (float)puVar29[7];
      fVar57 = (float)puVar29[8];
      uVar58 = puVar29[9];
      uVar60 = puVar29[10];
      iVar68 = puVar29[0xb];
      pIVar19 = local_c;
      UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff220,pUVar15);
      UVar4.Tag.Data = in_stack_fffff224;
      UVar4.Parent = (Manager *)in_stack_fffff220;
      UVar4.Tag.Capacity = in_stack_fffff228;
      UVar4.Tag.Length = (*(uint32_t*)&(in_stack_fffff22c));
      uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff22c) + 4)),0);
      uVar35 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff22c) + 4)),8);
      UVar4.Location.Getter.Callee = (void *)(int)uVar34;
      UVar4.Location.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar4.Location.Value.X = (int)uVar35;
      UVar4.Location.Value.Y = (int)((ulonglong)uVar35 >> 0x20);
      UVar4.Visible.Getter.Callee = in_stack_fffff240;
      UVar4.Visible.Getter.CallbackFunction = in_stack_fffff244;
*(uint32_t *)&auVar33 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 4)));
*(uint32_t *)&auVar39 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 140)));
*(uint32_t *)&auVar40 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 156)));
*(uint32_t *)&auVar42 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 200)));
*(uint32_t *)&auVar43 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 244)));
      UVar4.Visible.Value = (bool)in_stack_fffff248[0];
      (*(uint24_t *)((char *)&(UVar4.Visible) + 9)) = (*(uint24_t*)((char*)&(in_stack_fffff248)+1));
      UVar4.Enabled.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar33));
      UVar4.Enabled.Getter.CallbackFunction =
           (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar33)) >> 0x20);
      UVar4.Enabled.Value = (bool)auVar33[8];
      (*(uint24_t *)((char *)&(UVar4.Enabled) + 9)) = (*(uint24_t*)((char*)&(auVar33)+9));
      uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 16)),0);
      uVar35 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 16)),8);
      UVar4.DesiredSize.Getter.Callee = (void *)(int)uVar34;
      UVar4.DesiredSize.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar4.DesiredSize.Value.X = (int)uVar35;
      UVar4.DesiredSize.Value.Y = (int)((ulonglong)uVar35 >> 0x20);
      uVar34 = SUB248((*(uint32_t *)((char *)&(in_stack_fffff248) + 32)),0);
*(uint32_t *)&auVar38 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffff248) + 32)),8));
      UVar4.FillProportion.Getter.Callee = (void *)(int)uVar34;
      UVar4.FillProportion.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar4.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar38));
      UVar4.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar38)+8));
      uVar34 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff248) + 56)),0);
      UVar4.HitTestShape.Getter.Callee = (void *)(int)uVar34;
      UVar4.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)(int)((ulonglong)uVar34 >> 0x20));
      UVar4.HitTestShape.Value = SUB124((*(uint32_t *)((char *)&(in_stack_fffff248) + 56)),8);
      (*(uint32_t *)((char *)&(UVar4) + 108)) = (*(uint32_t *)((char *)&(in_stack_fffff248) + 68));
      uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 72)),0);
      UVar4.Depth.Getter.Callee = (void *)(int)uVar34;
      UVar4.Depth.Getter.CallbackFunction =
           (_func___cdecl_double_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar4.Depth.Value = (double)SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 72)),8);
      uVar34 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff248) + 88)),0);
      UVar4.Icon.Getter.Callee = (void *)(int)uVar34;
      UVar4.Icon.Getter.CallbackFunction = (void (* (*)(void *))(void))((_func___cdecl__func___cdecl_void_ptr_void_ptr *)(int)((ulonglong)uVar34 >> 0x20));
      UVar4.Icon.Value = (_func___cdecl_void *)SUB124((*(uint32_t *)((char *)&(in_stack_fffff248) + 88)),8);
      uVar34 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff248) + 100)),0);
*(uint32_t *)&auVar33 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff248) + 100)),8));
      UVar4.Tooltip.Getter.Callee = (void *)(int)uVar34;
      UVar4.Tooltip.Getter.CallbackFunction =
           (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar4.Tooltip.Value.Data = (char *)(*(uint32_t*)&(auVar33));
      UVar4.Tooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar33)+4));
      UVar4.Tooltip.Value.Length = (*(uint32_t*)((char*)&(auVar33)+8));
      uVar34 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff248) + 120)),0);
*(uint32_t *)&auVar33 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff248) + 120)),8));
      UVar4.VerboseTooltip.Getter.Callee = (void *)(int)uVar34;
      UVar4.VerboseTooltip.Getter.CallbackFunction =
           (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar4.VerboseTooltip.Value.Data = (char *)(*(uint32_t*)&(auVar33));
      UVar4.VerboseTooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar33)+4));
      UVar4.VerboseTooltip.Value.Length = (*(uint32_t*)((char*)&(auVar33)+8));
      uVar34 = SUB128((*(uint32_t *)((char *)&(auVar39) + 0)),0);
      UVar4.TextFont.Data.Getter.Callee = (void *)(int)uVar34;
      UVar4.TextFont.Data.Getter.CallbackFunction =
           (_func___cdecl_Font_ptr_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar4.TextFont.Data.Value = (Font *)SUB124((*(uint32_t *)((char *)&(auVar39) + 0)),8);
      UVar4.TextFont.IsValidData = (bool)auVar39[0xc];
      (*(uint32_t *)((char *)&(UVar4.TextFont) + 13)) = (*(uint32_t *)((char *)&(auVar39) + 13));
      uVar34 = SUB408((*(uint32_t *)((char *)&(auVar40) + 0)),0);
*(uint32_t *)&auVar41 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar40) + 0)),8));
      UVar4.ForegroundColor.Data.Getter.Callee = (void *)(int)uVar34;
      UVar4.ForegroundColor.Data.Getter.CallbackFunction =
           (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar4.ForegroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar41));
      UVar4.ForegroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar41)+4));
      UVar4.ForegroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar41)+8));
      UVar4.ForegroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar41) + 12));
      UVar4.ForegroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar41) + 16));
      UVar4.ForegroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar41) + 20));
      UVar4.ForegroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar41) + 24));
      UVar4.ForegroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar41) + 28));
      UVar4.ForegroundColor.IsValidData = (bool)auVar40[0x28];
      (*(uint32_t *)((char *)&(UVar4.ForegroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar40) + 41));
      uVar34 = SUB408((*(uint32_t *)((char *)&(auVar42) + 0)),0);
*(uint32_t *)&auVar41 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar42) + 0)),8));
      UVar4.BackgroundColor.Data.Getter.Callee = (void *)(int)uVar34;
      UVar4.BackgroundColor.Data.Getter.CallbackFunction =
           (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar4.BackgroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar41));
      UVar4.BackgroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar41)+4));
      UVar4.BackgroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar41)+8));
      UVar4.BackgroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar41) + 12));
      UVar4.BackgroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar41) + 16));
      UVar4.BackgroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar41) + 20));
      UVar4.BackgroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar41) + 24));
      UVar4.BackgroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar41) + 28));
      UVar4.BackgroundColor.IsValidData = (bool)auVar42[0x28];
      (*(uint32_t *)((char *)&(UVar4.BackgroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar42) + 41));
      uVar34 = SUB408((*(uint32_t *)((char *)&(auVar43) + 0)),0);
*(uint32_t *)&auVar41 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar43) + 0)),8));
      UVar4.TextColor.Data.Getter.Callee = (void *)(int)uVar34;
      UVar4.TextColor.Data.Getter.CallbackFunction =
           (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
      UVar4.TextColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar41));
      UVar4.TextColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar41)+4));
      UVar4.TextColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar41)+8));
      UVar4.TextColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar41) + 12));
      UVar4.TextColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar41) + 16));
      UVar4.TextColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar41) + 20));
      UVar4.TextColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar41) + 24));
      UVar4.TextColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar41) + 28));
      UVar4.TextColor.IsValidData = (bool)auVar43[0x28];
      (*(uint32_t *)((char *)&(UVar4.TextColor) + 41)) = (*(uint32_t *)((char *)&(auVar43) + 41));
      LVar10.Margin.Getter.CallbackFunction = *(_func___cdecl_Vec2_L_int_G__void_ptr *)&(fVar46);
      LVar10.Margin.Getter.Callee = p_Var44;
      LVar10.Margin.Value.X = iVar20;
      LVar10.Margin.Value.Y = iVar47;
      LVar10.Padding.Getter.Callee = (void *)iVar48;
      LVar10.Padding.Getter.CallbackFunction = *(_func___cdecl_int_void_ptr *)&(fVar50);
      LVar10.Padding.Value = (int)fVar51;
      LVar10.Background__HasBackground.Getter.Callee = *(void **)&(fVar54);
      LVar10.Background__HasBackground.Getter.CallbackFunction = *(_func___cdecl_bool_void_ptr *)&(fVar57);
      LVar10.Background__HasBackground.Value = SUB41(uVar58,0);
      (*(uint24_t *)((char *)&(LVar10.Background__HasBackground) + 9)) = SUB43(uVar58,1);
      LVar10.IsEmbossed = (bool)(char)uVar60;
      LVar10.IsCentered = (bool)(char)((uint)uVar60 >> 8);
      LVar10.DoesScrollbarHaveTrough = (bool)(char)((uint)uVar60 >> 0x10);
      LVar10.AlwaysConsumeScrolls = (bool)(char)((uint)uVar60 >> 0x18);
      (*(uint32_t *)((char *)&(LVar10) + 44)) = iVar68;
      pUVar26 = (UIWidget *)
                UIBoxLayout__UIBoxLayout((UIBoxLayout *)local_50,UVar4,LVar10,(UIWidget *)pIVar19);
    }
    local_8 = local_8 | 0x180;
    local_80.Widgets._pad_0x0_0 =
         (int)&vftable_48;
    local_80.Widgets.Data = (SharedPtr_L_UIWidget_G_ *)0x0;
    local_80.Widgets.Size = 0;
    local_80.Widgets.Capacity = 0;
    pUVar52 = local_3c;
    pDVar27 = (Data *)(uintptr_t)(UILayout__Data__Add(&local_80,pUVar26));
    pDVar27 = (Data *)(uintptr_t)(UILayout__Data__Add(pDVar27,pUVar52));
    uStack_1c = 0;
    (*(uint32_t*)&(uStack_14)) = (uint32_t)(uintptr_t)((UIWidget *)0x14);
    (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)((UIWidget *)0x14);
    pLVar28 = LayoutAttributes__OpenScreen(&local_4a8);
    (pLVar28->Margin).Getter.Callee = (MainManager *)uStack_1c;
    (pLVar28->Margin).Getter.CallbackFunction = (Vec2_L_int_G_ (*)(void *))(uintptr_t) (*(uint32_t*)((char*)&(uStack_1c)+4));
    (pLVar28->Margin).Value.X = (int)(UIWidget *)uStack_14;
    (pLVar28->Margin).Value.Y = (int)(*(uint32_t*)((char*)&(uStack_14)+4));
    pUVar15 = (UIAttributes *)UIAttributes__UIAttributes(&local_5f0,(Manager *)this);
    (*(uint32_t*)&(uStack_1c)) = (uint32_t)(uintptr_t)((MainManager *)0x0);
    (*(uint32_t*)((char*)&(uStack_1c)+4)) = (uint32_t)(uintptr_t)((_func___cdecl_Vec2_L_int_G__void_ptr *)0x3ff00000);
    uStack_14 = 0x3ff0000000000000;
    local_24 = 0;
    uStack_20 = 0;
    (pUVar15->FillProportion).Getter.Callee = (void *)0x0;
    (pUVar15->FillProportion).Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0;
    *(undefined4 *)&(pUVar15->FillProportion).Value.X = 0;
    *(undefined4 *)((int)&(pUVar15->FillProportion).Value.X + 4) = 0x3ff00000;
    (pUVar15->FillProportion).Value.Y = 1.0;
    p_Var44 = (pLVar28->Margin).Getter.Callee;
    p_Var45 = (pLVar28->Margin).Getter.CallbackFunction;
    iVar20 = (pLVar28->Margin).Value.X;
    iVar47 = (pLVar28->Margin).Value.Y;
    pvVar16 = (pLVar28->Padding).Getter.Callee;
    p_Var49 = (pLVar28->Padding).Getter.CallbackFunction;
    fVar46 = (float)(pLVar28->Padding).Value;
    pvVar53 = (pLVar28->Background__HasBackground).Getter.Callee;
    p_Var56 = (pLVar28->Background__HasBackground).Getter.CallbackFunction;
    (*(uint8_t*)&(uVar61)) = (pLVar28->Background__HasBackground).Value;
    (*(uint24_t*)((char*)&(uVar61)+1)) = (*(undefined3 *)(void *)((char *)&((pLVar28->Background__HasBackground)) + 0x9));
    (*(uint8_t*)&(uVar65)) = pLVar28->IsEmbossed;
    (*(uint8_t*)((char*)&(uVar65)+1)) = pLVar28->IsCentered;
    (*(uint8_t*)((char*)&(uVar65)+2)) = pLVar28->DoesScrollbarHaveTrough;
    (*(uint8_t*)((char*)&(uVar65)+3)) = pLVar28->AlwaysConsumeScrolls;
    iVar48 = *(int *)&pLVar28->HasFlexibleSizing;
    UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff220,pUVar15);
    UVar5.Tag.Data = in_stack_fffff224;
    UVar5.Parent = (Manager *)in_stack_fffff220;
    UVar5.Tag.Capacity = in_stack_fffff228;
    UVar5.Tag.Length = (*(uint32_t*)&(in_stack_fffff22c));
    uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff22c) + 4)),0);
    uVar35 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff22c) + 4)),8);
    UVar5.Location.Getter.Callee = (void *)(int)uVar34;
    UVar5.Location.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar5.Location.Value.X = (int)uVar35;
    UVar5.Location.Value.Y = (int)((ulonglong)uVar35 >> 0x20);
    UVar5.Visible.Getter.Callee = in_stack_fffff240;
    UVar5.Visible.Getter.CallbackFunction = in_stack_fffff244;
*(uint32_t *)&auVar33 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 4)));
*(uint32_t *)&auVar39 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 140)));
*(uint32_t *)&auVar40 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 156)));
*(uint32_t *)&auVar42 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 200)));
*(uint32_t *)&auVar43 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff248) + 244)));
    UVar5.Visible.Value = (bool)in_stack_fffff248[0];
    (*(uint24_t *)((char *)&(UVar5.Visible) + 9)) = (*(uint24_t*)((char*)&(in_stack_fffff248)+1));
    UVar5.Enabled.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar33));
    UVar5.Enabled.Getter.CallbackFunction =
         (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar33)) >> 0x20);
    UVar5.Enabled.Value = (bool)auVar33[8];
    (*(uint24_t *)((char *)&(UVar5.Enabled) + 9)) = (*(uint24_t*)((char*)&(auVar33)+9));
    uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 16)),0);
    uVar35 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 16)),8);
    UVar5.DesiredSize.Getter.Callee = (void *)(int)uVar34;
    UVar5.DesiredSize.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar5.DesiredSize.Value.X = (int)uVar35;
    UVar5.DesiredSize.Value.Y = (int)((ulonglong)uVar35 >> 0x20);
    uVar34 = SUB248((*(uint32_t *)((char *)&(in_stack_fffff248) + 32)),0);
*(uint32_t *)&auVar38 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffff248) + 32)),8));
    UVar5.FillProportion.Getter.Callee = (void *)(int)uVar34;
    UVar5.FillProportion.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar5.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar38));
    UVar5.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar38)+8));
    uVar34 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff248) + 56)),0);
    UVar5.HitTestShape.Getter.Callee = (void *)(int)uVar34;
    UVar5.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)(int)((ulonglong)uVar34 >> 0x20));
    UVar5.HitTestShape.Value = SUB124((*(uint32_t *)((char *)&(in_stack_fffff248) + 56)),8);
    (*(uint32_t *)((char *)&(UVar5) + 108)) = (*(uint32_t *)((char *)&(in_stack_fffff248) + 68));
    uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 72)),0);
    UVar5.Depth.Getter.Callee = (void *)(int)uVar34;
    UVar5.Depth.Getter.CallbackFunction =
         (_func___cdecl_double_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar5.Depth.Value = (double)SUB168((*(uint32_t *)((char *)&(in_stack_fffff248) + 72)),8);
    uVar34 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff248) + 88)),0);
    UVar5.Icon.Getter.Callee = (void *)(int)uVar34;
    UVar5.Icon.Getter.CallbackFunction = (void (* (*)(void *))(void))((_func___cdecl__func___cdecl_void_ptr_void_ptr *)(int)((ulonglong)uVar34 >> 0x20));
    UVar5.Icon.Value = (_func___cdecl_void *)SUB124((*(uint32_t *)((char *)&(in_stack_fffff248) + 88)),8);
    uVar34 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff248) + 100)),0);
*(uint32_t *)&auVar33 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff248) + 100)),8));
    UVar5.Tooltip.Getter.Callee = (void *)(int)uVar34;
    UVar5.Tooltip.Getter.CallbackFunction =
         (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar5.Tooltip.Value.Data = (char *)(*(uint32_t*)&(auVar33));
    UVar5.Tooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar33)+4));
    UVar5.Tooltip.Value.Length = (*(uint32_t*)((char*)&(auVar33)+8));
    uVar34 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff248) + 120)),0);
*(uint32_t *)&auVar33 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff248) + 120)),8));
    UVar5.VerboseTooltip.Getter.Callee = (void *)(int)uVar34;
    UVar5.VerboseTooltip.Getter.CallbackFunction =
         (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar5.VerboseTooltip.Value.Data = (char *)(*(uint32_t*)&(auVar33));
    UVar5.VerboseTooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar33)+4));
    UVar5.VerboseTooltip.Value.Length = (*(uint32_t*)((char*)&(auVar33)+8));
    uVar34 = SUB128((*(uint32_t *)((char *)&(auVar39) + 0)),0);
    UVar5.TextFont.Data.Getter.Callee = (void *)(int)uVar34;
    UVar5.TextFont.Data.Getter.CallbackFunction =
         (_func___cdecl_Font_ptr_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar5.TextFont.Data.Value = (Font *)SUB124((*(uint32_t *)((char *)&(auVar39) + 0)),8);
    UVar5.TextFont.IsValidData = (bool)auVar39[0xc];
    (*(uint32_t *)((char *)&(UVar5.TextFont) + 13)) = (*(uint32_t *)((char *)&(auVar39) + 13));
    uVar34 = SUB408((*(uint32_t *)((char *)&(auVar40) + 0)),0);
*(uint32_t *)&auVar41 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar40) + 0)),8));
    UVar5.ForegroundColor.Data.Getter.Callee = (void *)(int)uVar34;
    UVar5.ForegroundColor.Data.Getter.CallbackFunction =
         (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar5.ForegroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar41));
    UVar5.ForegroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar41)+4));
    UVar5.ForegroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar41)+8));
    UVar5.ForegroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar41) + 12));
    UVar5.ForegroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar41) + 16));
    UVar5.ForegroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar41) + 20));
    UVar5.ForegroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar41) + 24));
    UVar5.ForegroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar41) + 28));
    UVar5.ForegroundColor.IsValidData = (bool)auVar40[0x28];
    (*(uint32_t *)((char *)&(UVar5.ForegroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar40) + 41));
    uVar34 = SUB408((*(uint32_t *)((char *)&(auVar42) + 0)),0);
*(uint32_t *)&auVar41 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar42) + 0)),8));
    UVar5.BackgroundColor.Data.Getter.Callee = (void *)(int)uVar34;
    UVar5.BackgroundColor.Data.Getter.CallbackFunction =
         (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar5.BackgroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar41));
    UVar5.BackgroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar41)+4));
    UVar5.BackgroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar41)+8));
    UVar5.BackgroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar41) + 12));
    UVar5.BackgroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar41) + 16));
    UVar5.BackgroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar41) + 20));
    UVar5.BackgroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar41) + 24));
    UVar5.BackgroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar41) + 28));
    UVar5.BackgroundColor.IsValidData = (bool)auVar42[0x28];
    (*(uint32_t *)((char *)&(UVar5.BackgroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar42) + 41));
    uVar34 = SUB408((*(uint32_t *)((char *)&(auVar43) + 0)),0);
*(uint32_t *)&auVar41 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar43) + 0)),8));
    UVar5.TextColor.Data.Getter.Callee = (void *)(int)uVar34;
    UVar5.TextColor.Data.Getter.CallbackFunction =
         (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar34 >> 0x20);
    UVar5.TextColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar41));
    UVar5.TextColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar41)+4));
    UVar5.TextColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar41)+8));
    UVar5.TextColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar41) + 12));
    UVar5.TextColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar41) + 16));
    UVar5.TextColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar41) + 20));
    UVar5.TextColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar41) + 24));
    UVar5.TextColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar41) + 28));
    UVar5.TextColor.IsValidData = (bool)auVar43[0x28];
    (*(uint32_t *)((char *)&(UVar5.TextColor) + 41)) = (*(uint32_t *)((char *)&(auVar43) + 41));
    LVar11.Margin.Getter.CallbackFunction = p_Var45;
    LVar11.Margin.Getter.Callee = p_Var44;
    LVar11.Margin.Value.X = iVar20;
    LVar11.Margin.Value.Y = iVar47;
    LVar11.Padding.Getter.Callee = pvVar16;
    LVar11.Padding.Getter.CallbackFunction = p_Var49;
    LVar11.Padding.Value = (int)fVar46;
    LVar11.Background__HasBackground.Getter.Callee = pvVar53;
    LVar11.Background__HasBackground.Getter.CallbackFunction = p_Var56;
    LVar11.Background__HasBackground.Value = SUB41(uVar61,0);
    (*(uint24_t *)((char *)&(LVar11.Background__HasBackground) + 9)) = SUB43(uVar61,1);
    LVar11.IsEmbossed = (bool)(char)uVar65;
    LVar11.IsCentered = (bool)(char)((uint)uVar65 >> 8);
    LVar11.DoesScrollbarHaveTrough = (bool)(char)((uint)uVar65 >> 0x10);
    LVar11.AlwaysConsumeScrolls = (bool)(char)((uint)uVar65 >> 0x18);
    (*(uint32_t *)((char *)&(LVar11) + 44)) = iVar48;
    pUVar26 = (UIWidget *)UIRowLayout__UIRowLayout__o2((UIRowLayout *)(uintptr_t)(*(uint32_t*)((char*)&(local_38)+4)),UVar5,LVar11,pDVar27);
    if (pUVar26 != (UIWidget *)0x0) goto LAB_0070a688;
  }
  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl",
                  0xd4,"NewPointer",(char *)0x0);
  DebugBreak();
LAB_0070a688:
  pUVar52 = pUVar26;
  pRVar17 = util__ReferenceControllerRegistry__Get();
  pRVar18 = util__ReferenceControllerRegistry__Register(pRVar17,pUVar52);
  if (pRVar18 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(pRVar18);
  }
  *(uint32_t *)&local_c = (uint32_t)(uintptr_t)(Manager__GetInterfacer((Manager *)local_28));
  local_38 = (double)CONCAT44(pRVar18,pUVar26);
  if (pRVar18 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(pRVar18);
  }
  pSVar30 = (((struct Interface *)(uintptr_t)(local_c))->StoredWidgets).Data;
  pSVar32 = pSVar30 + (((struct Interface *)(uintptr_t)(local_c))->StoredWidgets).Size;
  for (; pSVar30 != pSVar32; pSVar30 = pSVar30 + 1) {
    if ((pRVar18 == pSVar30->Controller) && (pUVar26 == pSVar30->Pointer)) goto LAB_0070a6f9;
  }
  util__Darray_class_util__SharedPtr_struct_UIWidget_____Add
            ((Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *)&((struct Interface *)(uintptr_t)(local_c))->StoredWidgets,
             (SharedPtr_L_struct_UIWidget_G_ *)&local_38);
LAB_0070a6f9:
  if (pRVar18 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar18);
  }
  Interface__AddNewWidget_struct_UIWidget(local_c,0,(((UIWidget *)cde_rsp_slot())),(((ReferenceController *)cde_rsp_slot())));
  if ((*(uint32_t*)((char*)&(local_38)+4)) != (UIRowLayout *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)(*(uint32_t*)((char*)&(local_38)+4)));
  }
  if (pRVar18 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar18);
    bVar14 = util__ReferenceController__ReleaseStrongReference(pRVar18);
    if (bVar14) {
      if (pUVar26 != (UIWidget *)0x0) {
        (**(code **)(pUVar26->_pad_0x0_0 + 4))();
      }
      pUVar52 = pUVar26;
      pRVar17 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar17,pUVar52);
    }
    bVar14 = util__ReferenceController__ReleaseStrongReference(pRVar18);
    if (bVar14) {
      if (pUVar26 != (UIWidget *)0x0) {
        (**(code **)(pUVar26->_pad_0x0_0 + 4))();
      }
      pRVar17 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar17,pUVar26);
    }
    util__ReferenceController__ReleaseWeakReference(pRVar18);
  }
  if ((local_8 & 0x100) != 0) {
    local_8 = local_8 & 0xfffffeff;
    UIAttributes___UIAttributes(&local_5f0);
  }
  if ((char)local_8 < '\0') {
    local_8 = local_8 & 0xffffff7f;
    local_80.Widgets._pad_0x0_0 =
         (int)&vftable_48;
    if (local_80.Widgets.Data != (SharedPtr_L_UIWidget_G_ *)0x0) {
      util__SharedPtr_struct_UIWidget____vector_deleting_destructor
                ((SharedPtr_L_struct_UIWidget_G_ *)local_80.Widgets.Data,3);
    }
    local_80.Widgets.Data = (SharedPtr_L_UIWidget_G_ *)0x0;
    local_80.Widgets._pad_0x0_0 = (int)&vftable;
  }
  if ((local_8 & 0x40) != 0) {
    local_8 = local_8 & 0xffffffbf;
    UIAttributes___UIAttributes(&local_738);
  }
  if ((local_8 & 0x20) != 0) {
    local_8 = local_8 & 0xffffffdf;
    UIAttributes___UIAttributes(&local_880);
  }
  if ((local_8 & 0x10) != 0) {
    local_8 = local_8 & 0xffffffef;
    UIAttributes___UIAttributes(&local_9c8);
  }
  if ((local_8 & 8) != 0) {
    uVar58 = (*(uint32_t*)((char*)&(local_4c)+4));
    local_8 = local_8 & 0xfffffff7;
    (*(uint32_t*)&(local_4c)) = (uint32_t)(uintptr_t)(&vftable_48);
    if ((SharedPtr_L_UIWidget_G_ *)uVar58 != (SharedPtr_L_UIWidget_G_ *)0x0) {
      util__SharedPtr_struct_UIWidget____vector_deleting_destructor
                ((SharedPtr_L_struct_UIWidget_G_ *)uVar58,3);
    }
    (*(uint64_t*)((char*)&(auVar38)+8)) = 0;
    (*(uint64_t*)&(auVar38)) = uStack_44;
    *(Darray_L_util__SharedPtr_L_UIWidget_G___G_ *)&_local_4c = (*(Darray_L_util__SharedPtr_L_UIWidget_G___G_ *)cde_shl16((auVar38), 0x40));
    (*(uint32_t*)&(local_4c)) = (uint32_t)(uintptr_t)(&vftable);
  }
  if (((local_8 & 4) != 0) && (local_8 = local_8 & 0xfffffffb, local_158.Data != (char *)0x0)) {
    port_op_delete(local_158.Data);
    local_158.Data = (char *)0x0;
  }
  if ((local_8 & 2) != 0) {
    local_8 = local_8 & 0xfffffffd;
    if (local_204 != (void *)0x0) {
      port_op_delete(local_204);
      local_204 = (void *)0x0;
    }
    if (local_210[0] != (void *)0x0) {
      port_op_delete(local_210[0]);
      local_210[0] = (void *)0x0;
    }
  }
  if ((local_8c.Data != (char *)0x0) && ((local_8 & 1) != 0)) {
    port_op_delete(local_8c.Data);
    local_8c.Data = (char *)0x0;
  }
  if (((int)uVar31 < 0) && (uVar31 = uVar31 & 0x7fffffff, local_140.Data != (char *)0x0)) {
    port_op_delete(local_140.Data);
    local_140.Data = (char *)0x0;
  }
  if (((uVar31 & 0x40000000) != 0) && (uVar31 = uVar31 & 0xbfffffff, local_16c.Data != (char *)0x0))
  {
    port_op_delete(local_16c.Data);
    local_16c.Data = (char *)0x0;
  }
  if ((uVar31 & 0x20000000) != 0) {
    uVar31 = uVar31 & 0xdfffffff;
    if (local_21c != (void *)0x0) {
      port_op_delete(local_21c);
      local_21c = (void *)0x0;
    }
    if (local_228[0] != (void *)0x0) {
      port_op_delete(local_228[0]);
      local_228[0] = (void *)0x0;
    }
  }
  if (((uVar31 & 0x10000000) != 0) && (uVar31 = uVar31 & 0xefffffff, local_98.Data != (char *)0x0))
  {
    port_op_delete(local_98.Data);
    local_98.Data = (char *)0x0;
  }
  if (((uVar31 & 0x8000000) != 0) && (uVar31 = uVar31 & 0xf7ffffff, local_14c.Data != (char *)0x0))
  {
    port_op_delete(local_14c.Data);
    local_14c.Data = (char *)0x0;
  }
  if (((uVar31 & 0x4000000) != 0) && (uVar31 = uVar31 & 0xfbffffff, local_180.Data != (char *)0x0))
  {
    port_op_delete(local_180.Data);
    local_180.Data = (char *)0x0;
  }
  if ((uVar31 & 0x2000000) != 0) {
    uVar31 = uVar31 & 0xfdffffff;
    if (local_234 != (void *)0x0) {
      port_op_delete(local_234);
      local_234 = (void *)0x0;
    }
    if (local_240[0] != (void *)0x0) {
      port_op_delete(local_240[0]);
      local_240[0] = (void *)0x0;
    }
  }
  if (((uVar31 & 0x1000000) != 0) && (uVar31 = uVar31 & 0xfeffffff, local_a4.Data != (char *)0x0)) {
    port_op_delete(local_a4.Data);
    local_a4.Data = (char *)0x0;
  }
  if (((uVar31 & 0x800000) != 0) && (uVar31 = uVar31 & 0xff7fffff, local_134.Data != (char *)0x0)) {
    port_op_delete(local_134.Data);
    local_134.Data = (char *)0x0;
  }
  if (((uVar31 & 0x400000) != 0) && (uVar31 = uVar31 & 0xffbfffff, local_194.Data != (char *)0x0)) {
    port_op_delete(local_194.Data);
    local_194.Data = (char *)0x0;
  }
  if ((uVar31 & 0x200000) != 0) {
    uVar31 = uVar31 & 0xffdfffff;
    if (local_24c != (void *)0x0) {
      port_op_delete(local_24c);
      local_24c = (void *)0x0;
    }
    if (local_258[0] != (void *)0x0) {
      port_op_delete(local_258[0]);
      local_258[0] = (void *)0x0;
    }
  }
  if (((uVar31 & 0x100000) != 0) && (uVar31 = uVar31 & 0xffefffff, local_b0.Data != (char *)0x0)) {
    port_op_delete(local_b0.Data);
    local_b0.Data = (char *)0x0;
  }
  if (((uVar31 & 0x80000) != 0) && (uVar31 = uVar31 & 0xfff7ffff, local_110.Data != (char *)0x0)) {
    port_op_delete(local_110.Data);
    local_110.Data = (char *)0x0;
  }
  if ((uVar31 & 0x40000) != 0) {
    uVar31 = uVar31 & 0xfffbffff;
    UIAttributes___UIAttributes(&local_b10);
  }
  if (((uVar31 & 0x20000) != 0) && (uVar31 = uVar31 & 0xfffdffff, local_1a8.Data != (char *)0x0)) {
    port_op_delete(local_1a8.Data);
    local_1a8.Data = (char *)0x0;
  }
  if ((uVar31 & 0x10000) != 0) {
    uVar31 = uVar31 & 0xfffeffff;
    if (local_264 != (void *)0x0) {
      port_op_delete(local_264);
      local_264 = (void *)0x0;
    }
    if (local_270[0] != (void *)0x0) {
      port_op_delete(local_270[0]);
      local_270[0] = (void *)0x0;
    }
  }
  if (((uVar31 & 0x8000) != 0) && (uVar31 = uVar31 & 0xffff7fff, local_bc.Data != (char *)0x0)) {
    port_op_delete(local_bc.Data);
    local_bc.Data = (char *)0x0;
  }
  if (((uVar31 & 0x4000) != 0) && (uVar31 = uVar31 & 0xffffbfff, local_11c.Data != (char *)0x0)) {
    port_op_delete(local_11c.Data);
    local_11c.Data = (char *)0x0;
  }
  if ((uVar31 & 0x2000) != 0) {
    uVar31 = uVar31 & 0xffffdfff;
    UIAttributes___UIAttributes(&local_c58);
  }
  if (((uVar31 & 0x1000) != 0) && (uVar31 = uVar31 & 0xffffefff, local_1bc.Data != (char *)0x0)) {
    port_op_delete(local_1bc.Data);
    local_1bc.Data = (char *)0x0;
  }
  if ((uVar31 & 0x800) != 0) {
    uVar31 = uVar31 & 0xfffff7ff;
    if (local_27c != (void *)0x0) {
      port_op_delete(local_27c);
      local_27c = (void *)0x0;
    }
    if (local_288[0] != (void *)0x0) {
      port_op_delete(local_288[0]);
      local_288[0] = (void *)0x0;
    }
  }
  if (((uVar31 & 0x400) != 0) && (uVar31 = uVar31 & 0xfffffbff, local_c8.Data != (char *)0x0)) {
    port_op_delete(local_c8.Data);
    local_c8.Data = (char *)0x0;
  }
  if (((uVar31 & 0x200) != 0) && (uVar31 = uVar31 & 0xfffffdff, local_128.Data != (char *)0x0)) {
    port_op_delete(local_128.Data);
    local_128.Data = (char *)0x0;
  }
  if (((uVar31 & 0x100) != 0) && (uVar31 = uVar31 & 0xfffffeff, local_1d0.Data != (char *)0x0)) {
    port_op_delete(local_1d0.Data);
    local_1d0.Data = (char *)0x0;
  }
  if ((char)uVar31 < '\0') {
    uVar31 = uVar31 & 0xffffff7f;
    if (local_294 != (void *)0x0) {
      port_op_delete(local_294);
      local_294 = (void *)0x0;
    }
    if (local_2a0[0] != (void *)0x0) {
      port_op_delete(local_2a0[0]);
      local_2a0[0] = (void *)0x0;
    }
  }
  if (((uVar31 & 0x40) != 0) && (uVar31 = uVar31 & 0xffffffbf, local_d4.Data != (char *)0x0)) {
    port_op_delete(local_d4.Data);
    local_d4.Data = (char *)0x0;
  }
  if (((uVar31 & 0x20) != 0) &&
     (uVar31 = uVar31 & 0xffffffdf, (MainManager *)local_70.Data != (MainManager *)0x0)) {
    port_op_delete(local_70.Data);
    local_70.Data = (char *)0x0;
  }
  if (((uVar31 & 0x10) != 0) && (uVar31 = uVar31 & 0xffffffef, local_1e4.Data != (char *)0x0)) {
    port_op_delete(local_1e4.Data);
    local_1e4.Data = (char *)0x0;
  }
  if ((uVar31 & 8) != 0) {
    uVar31 = uVar31 & 0xfffffff7;
    if ((*(uint32_t*)((char*)&(uStack_fc)+4)) != (void *)0x0) {
      port_op_delete((*(uint32_t*)((char*)&(uStack_fc)+4)));
      uStack_fc = uStack_fc & 0xffffffff;
    }
    if (local_104 != (void *)0x0) {
      port_op_delete(local_104);
      local_104 = (void *)0x0;
    }
  }
  if (((uVar31 & 4) != 0) && (uVar31 = uVar31 & 0xfffffffb, local_e0.Data != (char *)0x0)) {
    port_op_delete(local_e0.Data);
    local_e0.Data = (char *)0x0;
  }
  if ((local_1f8.Data != (char *)0x0) && ((uVar31 & 2) != 0)) {
    port_op_delete(local_1f8.Data);
  }
  GameManager__SetIsInLoadingScreen((GameManager *)local_28->_pad_0x4_1,false);
  UIAttributes___UIAttributes(&local_3e8);
  return;
}

//==== 0070b540 Clear_0070b540 ====


/* public: virtual void  util__Darray_L_structColorVertex_G___Clear(void) */

void __thiscall util__Darray_struct_ColorVertex___Clear(Darray_L_struct_ColorVertex_G_ *this)

{
  undefined4 *puVar1;
  
  if (*(int *)(this + 8) < 1) {
    *(undefined4 *)(this + 8) = 0;
    return;
  }
  puVar1 = *(undefined4 **)(this + 4);
  if ((puVar1 != (undefined4 *)0x0) && (puVar1 != puVar1 + *(int *)(this + 8) * 10)) {
    do {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      *(undefined8 *)(puVar1 + 8) = 0;
      puVar1 = puVar1 + 10;
    } while (puVar1 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x28));
  }
  *(undefined4 *)(this + 8) = 0;
  return;
}





//==== 0070b5c0 GetAudio ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: class AudioManager * __thiscall GameManager__GetAudio(void)const  */

AudioManager * __thiscall GameManager__GetAudio(GameManager *this)

{
  return (AudioManager *)(this->Interfacer).Pointer;
}





//==== 0070b5d0 GetCameraHeightBounds_0070b5d0 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual struct util__Range_L_double_G_ __thiscall
   MainManager__GetCameraHeightBounds(void)const  */

Range_L_double_G_ * __thiscall
MainManager__GetCameraHeightBounds(MainManager *this,Range_L_double_G_ *__return_storage_ptr__)

{
  Manager *this_00;
  BriefingsHandler *this_01;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  Range_L_double_G_ *pRVar5;
  double dVar6;
  Range_L_double_G_ RStack_34;
  undefined8 uStack_24;
  undefined8 uStack_1c;
  double dStack_c;
  
  bVar4 = ScenarioEditor__IsOpen((ScenarioEditor *)(this->Editor).Parent);
  this_00 = (this->Editor).Parent;
  if (bVar4) {
    pRVar5 = ScenarioEditor__GetCameraHeightBounds((ScenarioEditor *)this_00,&RStack_34);
    uVar1 = *(undefined4 *)((int)&pRVar5->Lower + 4);
    uVar2 = *(undefined4 *)&pRVar5->Upper;
    uVar3 = *(undefined4 *)((int)&pRVar5->Upper + 4);
    *(undefined4 *)&__return_storage_ptr__->Lower = *(undefined4 *)&pRVar5->Lower;
    *(undefined4 *)((int)&__return_storage_ptr__->Lower + 4) = uVar1;
    *(undefined4 *)&__return_storage_ptr__->Upper = uVar2;
    *(undefined4 *)((int)&__return_storage_ptr__->Upper + 4) = uVar3;
    return __return_storage_ptr__;
  }
  bVar4 = ScenarioEditor__IsOpen((ScenarioEditor *)this_00);
  if (bVar4) {
    uStack_24 = 0.0;
    uStack_1c = 0.0;
  }
  else {
    this_01 = (this->Briefings).Pointer;
    uStack_24 = BriefingsHandler__GetObjectRadius_km(this_01);
    uStack_24 = uStack_24 + uStack_24;
    dStack_c = uStack_24;
    dVar6 = BriefingsHandler__GetObjectRadius_km(this_01);
    dVar6 = dVar6 * 10.0;
    uStack_1c = dVar6;
    if (dVar6 < dStack_c) {
      uStack_1c = dStack_c;
      uStack_24 = dVar6;
    }
  }
  *(int *)&__return_storage_ptr__->Lower = SUB84(uStack_24,0);
  *(undefined4 *)((int)&__return_storage_ptr__->Lower + 4) = (*(uint32_t*)((char*)&(uStack_24)+4));
  *(int *)&__return_storage_ptr__->Upper = SUB84(uStack_1c,0);
  *(undefined4 *)((int)&__return_storage_ptr__->Upper + 4) = (*(uint32_t*)((char*)&(uStack_1c)+4));
  return __return_storage_ptr__;
}





//==== 0070b680 GetParticlesPerPacket ====


/* public: int __thiscall MatterCloudComponent__GetParticlesPerPacket(void)const  */

int __thiscall MatterCloudComponent__GetParticlesPerPacket(MatterCloudComponent *this)

{
  return this->ParticlesPerPacket;
}





//==== 0070b690 GetClassID_0070b690 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual unsigned long __thiscall MainManager__GetClassID(void)const  */

ulong __thiscall MainManager__GetClassID(MainManager *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_a5b9cb36__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_a5b9cb36__thread_safe_static_guard_0__);
    if ( cde_l2_a5b9cb36__thread_safe_static_guard_0__ == -1) {
       cde_l2r_613ae9b6_ID =
           util__GetHash("MainManager");
      _Init_thread_footer(& cde_l2_a5b9cb36__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2r_613ae9b6_ID;
}





//==== 0070ba80 GetSpaceSphereRadius_km ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: double __thiscall MainManager__GetSpaceSphereRadius_km(void)const  */

double __thiscall MainManager__GetSpaceSphereRadius_km(MainManager *this)

{
  Range_L_double_G_ *pRVar1;
  Range_L_double_G_ local_14;
  
  pRVar1 = CameraManager__GetCameraNearFarPlanes
                     (*(CameraManager **)(this->_pad_0x4_1 + 0x24),&local_14);
  return pRVar1->Upper * 0.1;
}

//==== 0070bab0 GetStarscape ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: struct Starbox const * __thiscall MainManager__GetStarscape(void)const  */

Starbox * __thiscall MainManager__GetStarscape(MainManager *this)

{
  return (Starbox *)&(this->Starscape).Starscape._pad_0x28_10;
}

//==== 0070bac0 GetWorldLights_0070bac0 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual class util__Darray_L_structWorldLight_G_ __thiscall
   MainManager__GetWorldLights(void)const  */

undefined4 * __thiscall MainManager__GetWorldLights(MainManager *this)

{
  bool bVar1;
  undefined4 *in_stack_00000004;
  
  bVar1 = ScenarioEditor__IsOpen((ScenarioEditor *)(this->Editor).Parent);
  if (bVar1) {
    ScenarioEditor__GetWorldLights((ScenarioEditor *)(this->Editor).Parent);
  }
  *in_stack_00000004 = (undefined4)(uintptr_t)(&vftable_168);
  in_stack_00000004[1] = 0;
  in_stack_00000004[2] = 0;
  in_stack_00000004[3] = 0;
  return in_stack_00000004;
}





//==== 0070bb10 HandleKeyboardInput_0070bb10 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual bool __thiscall MainManager__HandleKeyboardInput(int,enum KeyInput__Type,struct
   InputModifiers const &) */

bool __thiscall
MainManager__HandleKeyboardInput(MainManager *this,int param_1,int param_2,InputModifiers *param_3)

{
  bool bVar1;
  OptionsSection__Interface *pIVar2;
  int iVar3;
  
  if ((param_1 == 0x100) && (param_2 == Pressed)) {
    pIVar2 = Manager__GetInterfacer((Manager *)this);
    bVar1 = Interface__IsAtBaseScreen(pIVar2);
    if (!bVar1) {
      iVar3 = 1;
      pIVar2 = Manager__GetInterfacer((Manager *)this);
      Interface__ExitScreen(pIVar2,iVar3);
      return true;
    }
  }
  return false;
}





//==== 0070bb60 LoadData ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void __thiscall MainManager__LoadData(void) */

void __thiscall MainManager__LoadData(MainManager *this)

{
  undefined8 stack0xfffffffc;
  MetagameManager *this_00;
  char *pcVar1;
  DataParser *pDVar2;
  char *pcVar3;
  SimpleSerializationManager *pSVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  Str_L_char_G_ *pSVar8;
  undefined1 uVar9;
  Str_L_char_G_ *pSVar10;
  MetagameManager *pMVar11;
  int TVar12;
  int TVar13;
  Str_L_char_G_ SStack_48;
  Str_L_char_G_ SStack_3c;
  undefined1 auStack_30 [16];
  Str_L_char_G_ SStack_20;
  undefined1 auStack_14 [4];
  Str_L_char_G_ SStack_10;
  
  this_00 = (this->Metagame).Pointer;
  SStack_10.Length = __security_cookie ^ (uint)&stack0xfffffffc;
  SStack_20.Data = (char *)0x0;
  SStack_20.Capacity = 0;
  SStack_20.Length = 0;
  MetagameManager__LoadCore(this_00,&SStack_20);
  MetagameManager__LoadDesigns(this_00,&SStack_20);
  util__Str_char___Str_char(&SStack_3c,"Levels");
  SStack_48.Data = (char *)0x0;
  SStack_48.Capacity = 0;
  SStack_48.Length = 0;
  GameManager__Load(this_00->Parent,&SStack_3c,&SStack_20,&SStack_48);
  if (SStack_48.Data != (char *)0x0) {
    port_op_delete(SStack_48.Data);
  }
  if (SStack_3c.Data != (char *)0x0) {
    port_op_delete(SStack_3c.Data);
  }
  TVar12 = 2;
  pDVar2 = GameManager__GetDataManager(this_00->Parent);
  DataParser__SetCurrentLoadType(pDVar2,TVar12);
  util__Str_char___Str_char(&SStack_3c,"User Levels");
  pcVar1 = SStack_3c.Data;
  pcVar3 = "";
  if (0 < SStack_3c.Capacity) {
    pcVar3 = SStack_3c.Data;
  }
  util__Printf(&SStack_3c,(wchar_t*)("Loading %s..."),pcVar3);
  StartLoading((Str_L_char_G_ *)(auStack_14 + 4));
  if (SStack_3c.Data != (char *)0x0) {
    port_op_delete(SStack_3c.Data);
  }
  TVar13 = GroupType__None;
  pSVar4 = (SimpleSerializationManager *)GameManager__GetDataManager(this_00->Parent);
  util__SimpleSerializationManager__SetDatumOverrideErrorState(pSVar4,TVar13);
  SStack_48.Data = (char *)0x0;
  SStack_48.Capacity = 0;
  SStack_48.Length = 0;
  util__Str_char___Str_char(&SStack_3c,"UserLevels.txt");
  pSVar10 = &SStack_3c;
  pSVar8 = (Str_L_char_G_ *)auStack_30;
  pDVar2 = GameManager__GetDataManager(this_00->Parent);
  DataParser__LoadSaveableFile(pDVar2,pSVar8,pSVar10);
  if (SStack_3c.Data != (char *)0x0) {
    port_op_delete(SStack_3c.Data);
    SStack_3c.Data = (char *)0x0;
  }
  if (SStack_48.Data != (char *)0x0) {
    port_op_delete(SStack_48.Data);
    SStack_48.Data = (char *)0x0;
  }
  util__Str_char___operator__o10(&SStack_20,(Str_L_char_G_ *)(auStack_30 + 4));
  TVar13 = Ensure;
  pSVar4 = (SimpleSerializationManager *)GameManager__GetDataManager(this_00->Parent);
  util__SimpleSerializationManager__SetDatumOverrideErrorState(pSVar4,TVar13);
  if ((void *)(*(uint32_t*)((char*)&(auStack_30)+4)) != (void *)0x0) {
    port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_30)+4)));
  }
  EndLoading((Timer *)(auStack_14 + 4));
  if (pcVar1 != (char *)0x0) {
    port_op_delete(pcVar1);
  }
  TVar12 = 0;
  pDVar2 = GameManager__GetDataManager(this_00->Parent);
  DataParser__SetCurrentLoadType(pDVar2,TVar12);
  util__Str_char___Str_char(&SStack_3c,"Imports");
  pcVar1 = SStack_3c.Data;
  pcVar3 = "";
  if (0 < SStack_3c.Capacity) {
    pcVar3 = SStack_3c.Data;
  }
  util__Printf(&SStack_3c,(wchar_t*)("Loading %s..."),pcVar3);
  StartLoading((Str_L_char_G_ *)(auStack_14 + 4));
  if (SStack_3c.Data != (char *)0x0) {
    port_op_delete(SStack_3c.Data);
  }
  pMVar11 = (MetagameManager *)auStack_30;
  pDVar2 = GameManager__GetDataManager(this_00->Parent);
  DataParser__LoadImports(pDVar2,pMVar11);
  util__Str_char___operator__o10(&SStack_20,(Str_L_char_G_ *)(auStack_30 + 4));
  if ((void *)(*(uint32_t*)((char*)&(auStack_30)+4)) != (void *)0x0) {
    port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_30)+4)));
  }
  EndLoading((Timer *)(auStack_14 + 4));
  if (pcVar1 != (char *)0x0) {
    port_op_delete(pcVar1);
  }
  MetagameManager__FinishDesigns(this_00);
  uVar9 = (undefined1)(uintptr_t) SUB41(auStack_30,0);
  pDVar2 = GameManager__GetDataManager(this_00->Parent);
  piVar5 = (int *)util__SerializationManagerInterface__GetTypedDataOfType_L_struct_Level_G_
                            ((SerializationManagerInterface *)pDVar2,(bool)uVar9);
  SStack_10.Capacity = 0;
  iVar6 = (**(code **)(uintptr_t)(*piVar5 + 0xc))();
  if (SStack_10.Capacity < iVar6) {
    do {
      puVar7 = (undefined4 *)(**(code **)*piVar5)(&SStack_10.Capacity);
      Level__CacheNecessaryLimits((Level *)*puVar7);
      SStack_10.Capacity = SStack_10.Capacity + 1;
      iVar6 = (**(code **)(uintptr_t)(*piVar5 + 0xc))();
    } while (SStack_10.Capacity < iVar6);
  }
  (*(uint32_t*)&(auStack_30)) = (uint32_t)(uintptr_t)(&vftable_2);
  if ((void *)(*(uint32_t*)((char*)&(auStack_30)+4)) != (void *)0x0) {
    port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_30)+4)));
  }
  MetagameManager__LoadRecords(this_00,&SStack_20);
  SStack_10.Capacity = 0;
  _auStack_14 = 0;
  util__Str_char___Str_char((Str_L_char_G_ *)auStack_14,(Str_L_char_G_ *)&this_00->Parent->DataManager);
  util__Str_char___operator__o10((Str_L_char_G_ *)auStack_14,&SStack_20);
  util__Str_char___Str_char(&SStack_3c,(Str_L_char_G_ *)auStack_14);
  if (auStack_14 != (uint32_t)0x0) {
    port_op_delete((void *)auStack_14);
    _auStack_14 = _auStack_14 & 0xffffffff00000000;
  }
  util__Str_char___operator__o8(&SStack_20,&SStack_3c);
  if (SStack_3c.Data != (char *)0x0) {
    port_op_delete(SStack_3c.Data);
  }
  puVar7 = (undefined4 *)port_op_new(0x1c);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *(undefined8 *)(puVar7 + 4) = 0;
    puVar7[6] = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *puVar7 = (undefined4)(uintptr_t)(&vftable_139);
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
  }
  util__Str_char___operator__o8((Str_L_char_G_ *)(puVar7 + 4),&SStack_20);
  pDVar2 = GameManager__GetDataManager(this_00->Parent);
  (**(code **)(*(int *)pDVar2 + 8))(puVar7);
  MetagameManager__PostLoadingWork(this_00);
  if (SStack_20.Data != (char *)0x0) {
    port_op_delete(SStack_20.Data);
  }
  __security_check_cookie(SStack_10.Length ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0070bb70 LoadGraphicsResources_0070bb70 ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void __thiscall MainManager__LoadGraphicsResources(void) */

void __thiscall MainManager__LoadGraphicsResources(MainManager *this)

{
  bool bVar1;
  CustomTexture *this_00;
  
  Starbox__Build((Starbox *)&(this->Starscape).Starscape._pad_0x28_10);
  GetBlackbodyTexture();
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_0097a7c4) {
    _Init_thread_header(&DAT_0097a7c4);
    if (DAT_0097a7c4 == -1) {
      this_00 = (CustomTexture *)(uintptr_t)(port_op_new(0x3c));
      if (this_00 == (CustomTexture *)0x0) {
        DAT_0097a7c0 = (undefined4)(uintptr_t)((CustomTexture *)0x0);
      }
      else {
        DAT_0097a7c0 = (undefined4)(uintptr_t)((CustomTexture *)CustomTexture__CustomTexture(this_00));
      }
      atexit(FUN_008fd2f0);
      _Init_thread_footer(&DAT_0097a7c4);
    }
  }
  bVar1 = CustomTexture__IsInitialized((CustomTexture *)(uintptr_t)DAT_0097a7c0);
  if (!bVar1) {
    InstantiateSpectraTexture(DAT_0097a7c0);
  }
  return;
}

//==== 0070bb90 OpenInfolinks ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall MainManager__OpenInfolinks(void) */

void __thiscall MainManager__OpenInfolinks(MainManager *this)

{
  undefined8 stack0xfffffd34;
  undefined8 stack0xfffffe80;
  UIAttributes UVar1;
  Delegate_L_void_G_ DVar2;
  ReferenceController *pRVar3;
  UIImage *this_00;
  UIAttributes *pUVar4;
  void *pvVar5;
  ReferenceControllerRegistry *this_01;
  ReferenceController *this_02;
  OptionsSection__Interface *pIVar6;
  undefined1 auVar7 [12];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [44];
  undefined1 auVar16 [44];
  undefined1 in_stack_fffffd34 [312];
  float in_stack_fffffe6c;
  float in_stack_fffffe70;
  float in_stack_fffffe74;
  undefined4 in_stack_fffffe78;
  bool bVar17;
  void *pvVar18;
  MainManager *pMVar19;
  code *pcVar20;
  UIAttributes local_16c;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  undefined8 uStack_14;
  ReferenceController *local_8;
  undefined1 auVar15 [32];
  
  local_8 = (ReferenceController *)0x0;
  this_00 = (UIImage *)(uintptr_t)(port_op_new(0x178));
  if (this_00 == (UIImage *)0x0) {
    pvVar5 = (void *)0x0;
  }
  else {
    pUVar4 = (UIAttributes *)UIAttributes__UIAttributes(&local_16c,(Manager *)this);
    pcVar20 = (long long int (*)())(util__DelegateFactory_class_MainManager_void___MethodCallerConst__private__void___thiscall_MainManager__RenderHeroShot_void_const);
    bVar17 = false;
    uStack_1c = 0x3ff0000000000000;
    uStack_14 = 0x3ff0000000000000;
    local_24 = 0;
    uStack_20 = 0;
    (pUVar4->FillProportion).Getter.Callee = (void *)0x0;
    (pUVar4->FillProportion).Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0;
    *(undefined4 *)&(pUVar4->FillProportion).Value.X = 0;
    *(undefined4 *)((int)&(pUVar4->FillProportion).Value.X + 4) = 0x3ff00000;
    (pUVar4->FillProportion).Value.Y = 1.0;
    pMVar19 = this;
    UIAttributes__UIAttributes((UIAttributes *)&stack0xfffffd34,pUVar4);
    UVar1.TextColor.Data.Value.Saturation = in_stack_fffffe6c;
*(uint32_t *)&auVar7 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffd34) + 4)));
*(uint32_t *)&auVar10 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffd34) + 32)));
*(uint32_t *)&auVar11 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffd34) + 44)));
*(uint32_t *)&auVar13 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffd34) + 180)));
*(uint32_t *)&auVar14 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffd34) + 196)));
*(uint32_t *)&auVar16 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffd34) + 240)));
    UVar1.Parent = (Manager *)(*(uint32_t*)&(in_stack_fffffd34));
    UVar1.Tag.Data = (char *)(*(uint32_t*)&(auVar7));
    UVar1.Tag.Capacity = (*(uint32_t*)((char*)&(auVar7)+4));
    UVar1.Tag.Length = (*(uint32_t*)((char*)&(auVar7)+8));
    uVar8 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffd34) + 16)),0);
    uVar9 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffd34) + 16)),8);
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
    uVar8 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffd34) + 56)),0);
    uVar9 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffd34) + 56)),8);
    UVar1.DesiredSize.Getter.Callee = (void *)(int)uVar8;
    UVar1.DesiredSize.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar8 >> 0x20);
    UVar1.DesiredSize.Value.X = (int)uVar9;
    UVar1.DesiredSize.Value.Y = (int)((ulonglong)uVar9 >> 0x20);
    uVar8 = SUB248((*(uint32_t *)((char *)&(in_stack_fffffd34) + 72)),0);
*(uint32_t *)&auVar12 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffffd34) + 72)),8));
    UVar1.FillProportion.Getter.Callee = (void *)(int)uVar8;
    UVar1.FillProportion.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar8 >> 0x20);
    UVar1.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar12));
    UVar1.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar12)+8));
    uVar8 = SUB128((*(uint32_t *)((char *)&(in_stack_fffffd34) + 96)),0);
    UVar1.HitTestShape.Getter.Callee = (void *)(int)uVar8;
    UVar1.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)(int)((ulonglong)uVar8 >> 0x20));
    UVar1.HitTestShape.Value = SUB124((*(uint32_t *)((char *)&(in_stack_fffffd34) + 96)),8);
    (*(uint32_t *)((char *)&(UVar1) + 108)) = (*(uint32_t *)((char *)&(in_stack_fffffd34) + 108));
    uVar8 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffd34) + 112)),0);
    UVar1.Depth.Getter.Callee = (void *)(int)uVar8;
    UVar1.Depth.Getter.CallbackFunction =
         (_func___cdecl_double_void_ptr *)(int)((ulonglong)uVar8 >> 0x20);
    UVar1.Depth.Value = (double)SUB168((*(uint32_t *)((char *)&(in_stack_fffffd34) + 112)),8);
    uVar8 = SUB128((*(uint32_t *)((char *)&(in_stack_fffffd34) + 128)),0);
    UVar1.Icon.Getter.Callee = (void *)(int)uVar8;
    UVar1.Icon.Getter.CallbackFunction = (void (* (*)(void *))(void))((_func___cdecl__func___cdecl_void_ptr_void_ptr *)(int)((ulonglong)uVar8 >> 0x20));
    UVar1.Icon.Value = (_func___cdecl_void *)SUB124((*(uint32_t *)((char *)&(in_stack_fffffd34) + 128)),8);
    uVar8 = SUB208((*(uint32_t *)((char *)&(in_stack_fffffd34) + 140)),0);
*(uint32_t *)&auVar7 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffffd34) + 140)),8));
    UVar1.Tooltip.Getter.Callee = (void *)(int)uVar8;
    UVar1.Tooltip.Getter.CallbackFunction =
         (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar8 >> 0x20);
    UVar1.Tooltip.Value.Data = (char *)(*(uint32_t*)&(auVar7));
    UVar1.Tooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar7)+4));
    UVar1.Tooltip.Value.Length = (*(uint32_t*)((char*)&(auVar7)+8));
    uVar8 = SUB208((*(uint32_t *)((char *)&(in_stack_fffffd34) + 160)),0);
*(uint32_t *)&auVar7 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffffd34) + 160)),8));
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
    UVar1.TextColor.Data.Getter.Callee = (void *)(int)(*(uint64_t *)((char *)&(in_stack_fffffd34) + 284));
    UVar1.TextColor.Data.Getter.CallbackFunction =
         (_func___cdecl_Color_void_ptr *)(int)((ulonglong)(*(uint64_t *)((char *)&(in_stack_fffffd34) + 284)) >> 0x20);
    UVar1.TextColor.Data.Value._pad_0x0_0 = (*(uint32_t *)((char *)&(in_stack_fffffd34) + 292));
    UVar1.TextColor.Data.Value._pad_0x4_1 = (*(uint32_t *)((char *)&(in_stack_fffffd34) + 296));
    UVar1.TextColor.Data.Value._pad_0x8_2 = (*(uint32_t *)((char *)&(in_stack_fffffd34) + 300));
    UVar1.TextColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(in_stack_fffffd34) + 304));
    UVar1.TextColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(in_stack_fffffd34) + 308));
    UVar1.TextColor.Data.Value.Value = in_stack_fffffe70;
    UVar1.TextColor.Data.Value.Alpha = in_stack_fffffe74;
    UVar1.TextColor.IsValidData = SUB41(in_stack_fffffe78,0);
    (*(uint32_t *)((char *)&(UVar1.TextColor) + 41)) = SUB43(in_stack_fffffe78,1);
    DVar2.CallbackFunction = (void (*)(void *))(pcVar20);
    DVar2.Callee = pMVar19;
    pvVar5 = (void *)UIImage__UIImage(this_00,UVar1,bVar17,DVar2);
  }
  local_8 = (ReferenceController *)&stack0xfffffe80;
  pRVar3 = (ReferenceController *)&stack0xfffffe80;
  if (pvVar5 == (void *)0x0) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
    pRVar3 = local_8;
  }
  local_8 = pRVar3;
  pvVar18 = pvVar5;
  this_01 = util__ReferenceControllerRegistry__Get();
  this_02 = util__ReferenceControllerRegistry__Register(this_01,pvVar18);
  pRVar3 = local_8;
  local_8->StrongReferenceCount = (int)pvVar5;
  pRVar3->WeakReferenceCount = (int)this_02;
  if (this_02 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_02);
  }
  pIVar6 = Manager__GetInterfacer((Manager *)this);
  Interface__AddNewWidgetAndStore_struct_HUDItineraryNodeDragger__o2(pIVar6,0,(((UIWidget *)cde_rsp_slot())),(((ReferenceController *)cde_rsp_slot())));
  if (local_8 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_8);
  }
  if (this_00 != (UIImage *)0x0) {
    UIAttributes___UIAttributes(&local_16c);
  }
  InfolinksManager__Open((this->Infolinks).Pointer);
  return;
}

//==== 0070bc90 OpenLevelBriefing_0070bc90 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall MainManager__OpenLevelBriefing(struct Level *,bool) */

void __thiscall MainManager__OpenLevelBriefing(MainManager *this,Level *param_1,bool param_2)

{
  BriefingsHandler *this_00;
  Delegate_L_void_G_ DVar1;
  Delegate_L_void_G_ DVar2;
  bool bVar3;
  OptionsSection__Interface *this_01;
  GameManager *this_02;
  DataParser *pDVar4;
  BriefingsHandler *pBVar5;
  code *pcVar6;
  BriefingsHandler *pBVar7;
  code *pcVar8;
  
  PlayTitleMusic(this);
  this_02 = Manager__GetParent((Manager *)this);
  pDVar4 = GameManager__GetDataManager(this_02);
  bVar3 = Level__IsPartOfCampaign(param_1,pDVar4);
  this_00 = (this->Briefings).Pointer;
  if (bVar3) {
    pcVar8 = (long long int (*)())(util__DelegateFactory_class_BriefingsHandler_void___MethodCaller__private__void___thiscall_BriefingsHandler__DestroyViewer_void);
    pcVar6 = (long long int (*)())(util__DelegateFactory_L_class_BriefingsHandler_Cvoid_G___MethodCaller_L__private__void___thiscall_BriefingsHandler__BuildBriefingMenu_void__G_);
    this_00->SelectedLevel = param_1;
    pBVar5 = this_00;
    pBVar7 = this_00;
    this_01 = Manager__GetInterfacer((Manager *)this_00->Parent);
    DVar1.CallbackFunction = (void (*)(void *))(pcVar6);
    DVar1.Callee = pBVar5;
    DVar2.CallbackFunction = (void (*)(void *))(pcVar8);
    DVar2.Callee = pBVar7;
    Interface__NewScreen(this_01,DVar1,DVar2);
    if (param_2) {
      this_00->SelectedSubject = BriefingSubject__AlliedCrafts;
      this_00->SelectedData = (Reflectable *)0x0;
      this_00->SelectedCraft = (CraftBlueprint *)0x0;
      BriefingsHandler__RebuildSublevels(this_00,true);
    }
    return;
  }
  BriefingsHandler__OpenSandboxMode(this_00,param_2);
  return;
}





//==== 0070bcd0 OpenLevelsMenu_0070bcd0 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall MainManager__OpenLevelsMenu(void) */

void __thiscall MainManager__OpenLevelsMenu(MainManager *this)

{
  Delegate_L_void_G_ DVar1;
  Delegate_L_void_G_ DVar2;
  OptionsSection__Interface *this_00;
  BriefingsHandler *pBVar3;
  code *pcVar4;
  BriefingsHandler *pBVar5;
  code *pcVar6;
  
  PlayTitleMusic(this);
  pBVar3 = (this->Briefings).Pointer;
  pcVar6 = (long long int (*)())(util__DelegateFactory_class_BriefingsHandler_void___MethodCaller__private__void___thiscall_BriefingsHandler__TearDownScreen_void);
  pcVar4 = (long long int (*)())(util__DelegateFactory_L_class_BriefingsHandler_Cvoid_G___MethodCaller_L__private__void___thiscall_BriefingsHandler__BuildLevelsScreen_void__G_);
  pBVar5 = pBVar3;
  this_00 = Manager__GetInterfacer((Manager *)pBVar3->Parent);
  DVar1.CallbackFunction = (void (*)(void *))(pcVar4);
  DVar1.Callee = pBVar3;
  DVar2.CallbackFunction = (void (*)(void *))(pcVar6);
  DVar2.Callee = pBVar5;
  Interface__NewScreen(this_00,DVar1,DVar2);
  return;
}





//==== 0070bcf0 OpenMainMenu ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall MainManager__OpenMainMenu(void) */

void __thiscall MainManager__OpenMainMenu(MainManager *this)

{
  Delegate_L_void_G_ DVar1;
  Delegate_L_void_G_ DVar2;
  OptionsSection__Interface *this_00;
  code *pcVar3;
  void *pvVar4;
  _func___cdecl_void_void_ptr *p_Var5;
  
  p_Var5 = (_func___cdecl_void_void_ptr *)0x0;
  pvVar4 = (void *)0x0;
  pcVar3 = (long long int (*)())(util__DelegateFactory_class_MainManager_void___MethodCaller__private__void___thiscall_MainManager__BuildMainMenu_void);
  this_00 = Manager__GetInterfacer((Manager *)this);
  DVar1.CallbackFunction = (void (*)(void *))(pcVar3);
  DVar1.Callee = this;
  DVar2.CallbackFunction = p_Var5;
  DVar2.Callee = pvVar4;
  Interface__NewScreen(this_00,DVar1,DVar2);
  return;
}





//==== 0070bd10 OpenShipDesign_0070bd10 ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall MainManager__OpenShipDesign(void) */

void __thiscall MainManager__OpenShipDesign(MainManager *this)

{
  Delegate_L_void_G_ DVar1;
  Delegate_L_void_G_ DVar2;
  OptionsSection__Interface *this_00;
  LogisticManager *pLVar3;
  ShipDesignManager *pSVar4;
  code *pcVar5;
  bool bVar6;
  ShipDesignManager *pSVar7;
  code *pcVar8;
  
  bVar6 = false;
  pLVar3 = (LogisticManager *)(uintptr_t)(GameManager__GetManager_L_LogisticManager_G_((GameManager *)this->_pad_0x4_1));
  GameManager__SwitchToSession((GameManager *)this->_pad_0x4_1,(Manager *)pLVar3,bVar6);
  pLVar3 = (LogisticManager *)(uintptr_t)(GameManager__GetManager_L_LogisticManager_G_((GameManager *)this->_pad_0x4_1));
  pLVar3->CurrentState = State__ShipDesign;
  GameManager__SwitchToSession((GameManager *)pLVar3->_pad_0x4_1,(Manager *)pLVar3,false);
  pSVar4 = (pLVar3->ShipDesigner).Pointer;
  pcVar8 = (long long int (*)())(util__DelegateFactory_class_ShipDesignManager_void___MethodCaller__private__void___thiscall_ShipDesignManager__DestroyViewer_void);
  pcVar5 = util__DelegateFactory_L_ShipDesignManager_Cvoid_G___MethodCaller_L__private__void___thiscall_ShipDesignManager__BuildCraftList_void__G_;
  pSVar7 = pSVar4;
  this_00 = Manager__GetInterfacer((Manager *)pSVar4->Parent);
  DVar1.CallbackFunction = (void (*)(void *))(pcVar5);
  DVar1.Callee = pSVar4;
  DVar2.CallbackFunction = (void (*)(void *))(pcVar8);
  DVar2.Callee = pSVar7;
  Interface__NewScreen(this_00,DVar1,DVar2);
  return;
}

//==== 0070bd40 PlayTitleMusic ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall MainManager__PlayTitleMusic(void) */

void * __thiscall MainManager__PlayTitleMusic(MainManager *this)

{
  undefined8 stack0xfffffff4;
  GameManager *pGVar1;
  DataParser *pDVar2;
  Campaign *pCVar3;
  AudioManager *this_00;
  SoundEffect *pSVar4;
  undefined1 uVar5;
  Level *pLVar6;
  undefined **local_1c;
  void *local_18;
  
  if ((char)(this->Starscape).Starscape._pad_0x24_9 != '\0') {
    uVar5 = (undefined1)(uintptr_t) SUB41(&local_1c,0);
    pGVar1 = Manager__GetParent((Manager *)this);
    pDVar2 = GameManager__GetDataManager(pGVar1);
    util__SerializationManagerInterface__GetTypedDataOfType_L_SoundEffect_G_
              ((SerializationManagerInterface *)pDVar2,(bool)uVar5);
    pGVar1 = Manager__GetParent((Manager *)this);
    pDVar2 = GameManager__GetDataManager(pGVar1);
    pCVar3 = GetCurrentCampaign(pDVar2);
    pLVar6 = pCVar3->SandboxLevel;
    pSVar4 = (SoundEffect *)&stack0xfffffff4;
    pGVar1 = Manager__GetParent((Manager *)this);
    this_00 = GameManager__GetAudio(pGVar1);
    AudioManager__PlayMusic(this_00,pSVar4,(Darray_L_SoundEffect_P_G_ *)pLVar6);
    *(uint32_t *)&local_1c = (uint32_t)(uintptr_t)(&vftable_2);
    if (local_18 != (void *)0x0) {
      port_op_delete(local_18);
    }
  }
  return 0;
}

//==== 0070bdc0 PreRender ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void __thiscall MainManager__PreRender(void)const  */

void __thiscall MainManager__PreRender(MainManager *this)

{
  undefined8 stack0xfffffffc;
  Vec4_L_double_G_ VVar1;
  Vec4_L_double_G_ VVar2;
  Vec3_L_double_G_ *pVVar3;
  StarShader *pSVar4;
  MainManager *this_00;
  int *piVar5;
  undefined4 uVar6;
  Vec3_L_double_G_ VStack_30;
  double dStack_18;
  TransformStack TStack_d;
  ShaderStack SStack_c;
  DepthStack DStack_b;
  BlendStack BStack_a;
  TransformStack TStack_9;
  uint uStack_8;
  
  piVar5 = &(this->Starscape).Starscape._pad_0x28_10;
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  Graphics__TransformStack__TransformStack(&TStack_d,Style__Default);
  pVVar3 = (Vec3_L_double_G_ *)(uintptr_t)(CameraManager__GetCameraPos(*(CameraManager **)(*piVar5 + 0x24),&VStack_30));
  VVar1.W = (int)((ulonglong)pVVar3->Z >> 0x20);
  (*(uint32_t *)((char *)&(VVar1) + 0)) = (uint32_t)(uintptr_t)(*(undefined1 (*) [20])pVVar3);
  Graphics__Translate(VVar1);
  if (*(char *)*piVar5 == '\0') {
    pSVar4 = StarShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&SStack_c,(Shader *)pSVar4);
  Graphics__DepthStack__DepthStack(&DStack_b,DepthMode__Disabled);

    Graphics__BlendStack__BlendStack(&BStack_a,BlendMode__Sum);
    glPointSize(0x3f800000);
    Graphics__TransformStack__TransformStack(&TStack_9,Style__Default);
    this_00 = (MainManager *)(uintptr_t)(GameManager__GetManager_L_MainManager_G_((GameManager *)*piVar5));
    dStack_18 = GetSpaceSphereRadius_km(this_00);
    uVar6 = (undefined4)((ulonglong)dStack_18 >> 0x20);
    VVar2.Y = SUB84(dStack_18,0);
    VVar2.X = dStack_18;
    VVar2.Z = uVar6;
    VVar2.Z = SUB84(dStack_18,0);
    VVar2.W = uVar6;
    Graphics__Scale(VVar2);
    VertexBufferObjectInterface__Render
              ((VertexBufferObjectInterface *)&(this->Starscape).Starscape._pad_0x30_12);
    Graphics__TransformStack___TransformStack(&TStack_9);
    BlendStack__dtor(&BStack_a);
    DepthStack__dtor(&DStack_b);
    Graphics__ShaderStack___ShaderStack(&SStack_c);
  }
  Graphics__TransformStack___TransformStack(&TStack_d);
  return;
}

//==== 0070bdd0 RenderShadows_0070bdd0 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void __thiscall MainManager__RenderShadows(enum PostProcessor__ShadowBuffer)const
    */

void __thiscall MainManager__RenderShadows(MainManager *this,ShadowBuffer param_1)

{
  bool bVar1;
  
  bVar1 = ScenarioEditor__IsOpen((ScenarioEditor *)(this->Editor).Parent);
  if ((!bVar1) && (param_1 == 0)) {
    BriefingsHandler__RenderShadows((this->Briefings).Pointer);
  }
  return;
}





//==== 0070be00 SetPlayTitleMusicEnabled ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall MainManager__SetPlayTitleMusicEnabled(bool) */

void __thiscall MainManager__SetPlayTitleMusicEnabled(MainManager *this,bool param_1)

{
  *(bool *)&(this->Starscape).Starscape._pad_0x24_9 = param_1;
  return;
}

//==== 0070be10 SetupShadows_0070be10 ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void __thiscall MainManager__SetupShadows(void)const  */

void __thiscall MainManager__SetupShadows(MainManager *this)

{
  ReferenceController *this_00;
  BriefingsHandler *this_01;
  undefined4 uVar1;
  Vec4_L_double_G_ VVar2;
  Vec4_L_double_G_ VVar3;
  Vec4_L_double_G_ VVar4;
  Vec4_L_double_G_ VVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  bool bVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  CelestialBody *this_02;
  double dVar12;
  double dVar13;
  undefined ***pppuVar14;
  undefined **ppuStack_38;
  void *pvStack_34;
  double dStack_30;
  double dStack_28;
  double dStack_20;
  double dStack_18;
  ulonglong uStack_10;
  undefined4 uStack_8;
  
  uStack_8 = 0x70be1b;
  bVar8 = ScenarioEditor__IsOpen((ScenarioEditor *)(this->Editor).Parent);
  if (bVar8) {
    return;
  }
  this_01 = (this->Briefings).Pointer;
  piVar9 = (int *)(**(code **)(this_01->Parent->_pad_0x0_0 + 0x6c))(&ppuStack_38);
  iVar10 = (**(code **)(uintptr_t)(*piVar9 + 0xc))();
  ppuStack_38 = &vftable_92;
  (*(uint8_t*)((char*)&(uStack_8)+3)) = iVar10 == 0;
  if (pvStack_34 != (void *)0x0) {
    port_op_delete(pvStack_34);
  }
  if ((*(uint8_t*)((char*)&(uStack_8)+3)) == '\0') {
    pppuVar14 = &ppuStack_38;
    piVar9 = (int *)(**(code **)(this_01->Parent->_pad_0x0_0 + 0x6c))();
    puVar11 = (undefined4 *)(**(code **)(uintptr_t)(*piVar9 + 0x20))();
    uVar1 = *puVar11;
    *(uint32_t *)&auVar7 = (uint32_t)(uintptr_t)(*(undefined1 (*) [12])(puVar11 + 1));
    *(uint32_t *)&auVar6 = (uint32_t)(uintptr_t)(*(undefined1 (*) [12])(puVar11 + 1));
    uStack_10 = *(ulonglong *)(puVar11 + 4);
    ppuStack_38 = &vftable_92;
    if (pvStack_34 != (void *)0x0) {
      port_op_delete(pvStack_34);
    }
    this_02 = BriefingsHandler__GetLevelCelestialObject(this_01);
    if (this_02 != (CelestialBody *)0x0) {
      dStack_18 = CelestialBody__GetVisualRadius_km(this_02);
      dStack_28 = dStack_18 * 1.1;
      uStack_10 = uStack_10 ^ 0x8000000000000000;
      dStack_20 = dStack_28;
      dStack_30 = CelestialBody__GetAverageDistanceToIlluminator_km(this_02);
      dVar13 = CelestialBody__GetRadius_km(this_02);
      dStack_20 = dVar13 / dStack_20;
      dVar13 = dStack_20;
      if (1.0 <= dStack_20) {
        dVar13 = 1.0;
      }
      VVar2.W = uVar1;
      (*(uint32_t *)((char *)&(VVar2) + 0)) = ZEXT820(0);
      (*(uint64_t *)((char *)&(VVar4) + 12)) = uStack_10;
      (*(uint32_t *)((char *)&(VVar4) + 0)) = (uint32_t)(uintptr_t)(auVar6);
      VVar4.W = SUB84(dVar13 * 0.01,0);
      Graphics__SetShadowMatrix
                (0,(double)CONCAT44(SUB84(dStack_30,0),(int)((ulonglong)dStack_18 >> 0x20)),
                 (double)CONCAT44(SUB84(dStack_28,0),(int)((ulonglong)dStack_30 >> 0x20)),
                 (double)((ulonglong)dStack_28 >> 0x20),(*(Vec3_L_double_G_ *)&VVar2),(*(Vec3_L_double_G_ *)&VVar4),
                 (double)CONCAT44(pppuVar14,(int)((ulonglong)(dVar13 * 0.01) >> 0x20)));
      return;
    }
    this_00 = (this_01->Viewer).Controller;
    if (this_00 != (ReferenceController *)0x0) {
      bVar8 = util__ReferenceController__IsDataStillValid(this_00);
      if (!bVar8) {
        (this_01->Viewer).Pointer = (ObjectViewer *)0x0;
      }
    }
    dStack_30 = ObjectViewer__GetTotalSizeOfAllObjects_km((this_01->Viewer).Pointer);
    dVar12 = dStack_30 * 1.1;
    dVar13 = dStack_30 / dVar12;
    if (1.0 <= dVar13) {
      dVar13 = 1.0;
    }
    VVar3.W = uVar1;
    (*(uint32_t *)((char *)&(VVar3) + 0)) = ZEXT820(0);
    (*(uint64_t *)((char *)&(VVar5) + 12)) = uStack_10 ^ 0x8000000000000000;
    (*(uint32_t *)((char *)&(VVar5) + 0)) = (uint32_t)(uintptr_t)(auVar7);
    VVar5.W = SUB84(dVar13 * 0.001,0);
    Graphics__SetShadowMatrix
              (0,(double)CONCAT44(SUB84(dStack_30 * 10.0,0),(int)((ulonglong)dStack_30 >> 0x20)),
               (double)CONCAT44(SUB84(dVar12,0),(int)((ulonglong)(dStack_30 * 10.0) >> 0x20)),
               (double)((ulonglong)dVar12 >> 0x20),(*(Vec3_L_double_G_ *)&VVar3),(*(Vec3_L_double_G_ *)&VVar5),
               (double)CONCAT44(pppuVar14,(int)((ulonglong)(dVar13 * 0.001) >> 0x20)));
  }
  return;
}

//==== 0070be30 StartTestingSession_0070be30 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void __thiscall MainManager__StartTestingSession(void) */

void __thiscall MainManager__StartTestingSession(MainManager *this)

{
  undefined8 stack0xffffffc0;
  InfolinksManager *this_00;
  Str_L_char_G_ SVar1;
  Delegate_L_void_G_ DVar2;
  Delegate_L_void_G_ DVar3;
  OptionsSection__Interface *this_01;
  GameManager *this_02;
  DataParser *pDVar4;
  int *piVar5;
  char *in_stack_ffffffc0;
  int iVar6;
  MainManager *pMVar7;
  int iVar8;
  code *pcVar9;
  void *pvVar10;
  _func___cdecl_void_void_ptr *p_Var11;
  int iStack_20;
  void *pvStack_1c;
  Str_L_char_G_ SStack_10;
  
  TriggerAchievements(this);
  p_Var11 = (_func___cdecl_void_void_ptr *)0x0;
  pvVar10 = (void *)0x0;
  pcVar9 = (long long int (*)())(util__DelegateFactory_class_MainManager_void___MethodCaller__private__void___thiscall_MainManager__BuildMainMenu_void);
  pMVar7 = this;
  this_01 = Manager__GetInterfacer((Manager *)this);
  iVar6 = 0x70be57;
  DVar2.CallbackFunction = (void (*)(void *))(pcVar9);
  DVar2.Callee = pMVar7;
  DVar3.CallbackFunction = p_Var11;
  DVar3.Callee = pvVar10;
  Interface__NewScreen(this_01,DVar2,DVar3);
  this_02 = Manager__GetParent((Manager *)this);
  pDVar4 = GameManager__GetDataManager(this_02);
  util__Str_char___Str_char(&SStack_10,"ImportLog");
  (**(code **)(*(int *)pDVar4 + 4))();
  if (SStack_10.Data != (char *)0x0) {
    iVar6 = 0x70be92;
    port_op_delete(SStack_10.Data);
  }
  piVar5 = (int *)(**(code **)(uintptr_t)(iStack_20 + 0x20))();
  iVar8 = *piVar5;
  if (pvStack_1c != (void *)0x0) {
    iVar6 = 0x70beb4;
    port_op_delete(pvStack_1c);
  }
  if (*(int *)(iVar8 + 0x18) != 0) {
    iVar8 = 0x70bed2;
    OpenInfolinks(this);
    this_00 = (this->Infolinks).Pointer;
    util__Str_char___Str_char((Str_L_char_G_ *)&stack0xffffffc0,"ImportLog");
    SVar1.Capacity = iVar6;
    SVar1.Data = in_stack_ffffffc0;
    SVar1.Length = iVar8;
    InfolinksManager__GetInfolinksTopLevelOnSelected(this_00,SVar1);
  }
  return;
}





//==== 0070bf00 TriggerAchievements ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0070c07d) */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall MainManager__TriggerAchievements(void) */

void __thiscall MainManager__TriggerAchievements(MainManager *this)

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
  SteamHandler *this_00;
  DataParser *pDVar10;
  Campaign *this_01;
  int iVar11;
  undefined4 *puVar12;
  Level *pLVar13;
  int TVar14;
  
  this_00 = (SteamHandler *)
            MatterCloudComponent__GetParticlesPerPacket((MatterCloudComponent *)this->_pad_0x4_1);
  bVar1 = SteamHandler__IsEnabled(this_00);
  if (bVar1) {
    pDVar10 = GameManager__GetDataManager((GameManager *)this->_pad_0x4_1);
    this_01 = GetCurrentCampaign(pDVar10);
    iVar11 = (**(code **)(this_01->ModPriority + 0xc))();
    if (0 < iVar11) {
      puVar12 = (undefined4 *)(**(code **)(this_01->ModPriority + 0x20))();
      bVar1 = Campaign__IsLevelBeaten(this_01,pDVar10,(Level *)*puVar12,1);
      TVar14 = 1;
      pLVar13 = Campaign__GetFirstLevelWithCombat(this_01);
      bVar2 = Campaign__IsLevelBeaten(this_01,pDVar10,pLVar13,TVar14);
      TVar14 = 1;
      pLVar13 = Campaign__GetFirstLevelWithPrecisionCombat(this_01);
      bVar3 = Campaign__IsLevelBeaten(this_01,pDVar10,pLVar13,TVar14);
      bVar4 = Campaign__CanAccessShipDesign(this_01,pDVar10);
      bVar5 = Campaign__CanAccessModuleDesign(this_01,pDVar10);
      puVar12 = (undefined4 *)(**(code **)(this_01->ModPriority + 8))();
      bVar6 = Campaign__IsAllowedToPlayLevel(this_01,pDVar10,(Level *)*puVar12);
      bVar7 = Campaign__IsEntireCampaignBeaten(this_01,pDVar10,1);
      bVar8 = Campaign__IsEntireCampaignBeaten(this_01,pDVar10,2);
      bVar9 = Campaign__IsEntireCampaignBeaten(this_01,pDVar10,3);
      FUN_00709660(bVar1,0);
      FUN_00709660(bVar2,1);
      FUN_00709660(bVar3,2);
      FUN_00709660(bVar4,3);
      FUN_00709660(bVar5,4);
      FUN_00709660(bVar6,5);
      FUN_00709660(bVar7,6);
      FUN_00709660(bVar8,7);
      FUN_00709660(bVar9,8);
    }
  }
  return;
}

//==== 0070c0a0 operator___CelestialObject_ ====


/* public: bool const __thiscall util__WeakPtr_L_classCelestialObject_G___op_eq<class
   CelestialObject>(class util__WeakPtr_L_classCelestialObject_G_ const &)const  */

bool 
util__WeakPtr_class_CelestialObject___operator___class_CelestialObject
          (WeakPtr_L_class_CelestialObject_G_ *this,WeakPtr_L_class_CelestialObject_G_ *param_1)

{
  if ((*(int *)(param_1 + 4) == *(int *)(this + 4)) && (*(int *)param_1 == *(int *)this)) {
    return true;
  }
  return false;
}





//==== 0070c700 PlanePlaneIntersection_double_ ====


/* class util__Maybe_L_structutil__Line3_L_double_G__G_ __cdecl
   util__PlanePlaneIntersection_double(struct util__Plane_L_double_G_,struct util__Plane_L_double_G_) */

void __cdecl util__PlanePlaneIntersection_double(Plane_L_double_G_ param_1,Plane_L_double_G_ param_2)

{
  undefined8 stack0xfffffffc;
  double dVar1;
  int iVar2;
  int iVar3;
  Vec3_L_double_G_ *pVVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined4 in_stack_00000044;
  undefined1 auStack_98 [16];
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 uStack_68;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [16];
  double dStack_28;
  Vec3_L_double_G_ VStack_20;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  VStack_20.X = (double)(*(uint64_t *)((char *)&(param_2) + 20)) * (double)(*(uint64_t *)((char *)&(param_1.Mode__Normal) + 12)) -
                (double)(*(uint64_t *)((char *)&(param_1) + 20)) * (double)(*(uint64_t *)((char *)&(param_2.Mode__Normal) + 12));
  VStack_20.Y = (double)(*(uint64_t *)((char *)&(param_1) + 20)) * (double)(*(uint64_t *)((char *)&(param_2.Mode__Normal) + 4)) -
                (double)(*(uint64_t *)((char *)&(param_2) + 20)) * (double)(*(uint64_t *)((char *)&(param_1.Mode__Normal) + 4));
  VStack_20.Z = (double)(*(uint64_t *)((char *)&(param_2.Mode__Normal) + 12)) * (double)(*(uint64_t *)((char *)&(param_1.Mode__Normal) + 4)) -
                (double)(*(uint64_t *)((char *)&(param_2.Mode__Normal) + 4)) * (double)(*(uint64_t *)((char *)&(param_1.Mode__Normal) + 12));
  Vec3_L_double_G___SafeNormalized(&VStack_20,(Vec3_L_double_G_ *)auStack_38);
  if (((NAN((double)(*(uint64_t*)&(auStack_38))) != ((double)(*(uint64_t*)&(auStack_38)) == 0.0)) &&
      (NAN((double)(*(uint64_t*)((char*)&(auStack_38)+8))) != ((double)(*(uint64_t*)((char*)&(auStack_38)+8)) == 0.0))) &&
     (NAN(dStack_28) != (dStack_28 == 0.0))) {
    param_1.Mode__Normal.X = 0;
    ((double *)&(param_1.Mode__Normal.X))[1] = 0;
    ((double *)&(param_1.Mode__Normal.X))[2] = 0;
    ((double *)&(param_1.Mode__Normal.X))[3] = 0;
    ((double *)&(param_1.Mode__Normal.X))[4] = 0;
    ((double *)&(param_1.Mode__Normal.X))[5] = 0;
    ((double *)&(param_1.Mode__Normal.X))[6] = 0;
    ((double *)&(param_1.Mode__Normal.X))[7] = 0;
    ((double *)&(param_1.Mode__Normal.X))[8] = 0;
    ((double *)&(param_1.Mode__Normal.X))[9] = 0;
    ((double *)&(param_1.Mode__Normal.X))[10] = 0;
    ((undefined4 *)&(param_1.Mode__Normal.X))[0xb] = 0;
    *(undefined1 *)(*(uint32_t *)&param_1.Mode__Normal.X + 0xc) = 0;
    __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar2 = Vec3_L_double_G___LargestDim((Vec3_L_double_G_ *)auStack_38);
  iVar3 = Vec3_L_double_G___SmallestDim((Vec3_L_double_G_ *)auStack_38);
  iVar5 = 3 - iVar3;
  iVar6 = iVar5 - iVar2;
  dVar15 = (double)(*(uint64_t *)((char *)&(param_1.Mode__Normal) + 4));
  if (((iVar5 != iVar2) && (dVar15 = (double)(*(uint64_t *)((char *)&(param_1.Mode__Normal) + 12)), iVar6 != 1)) &&
     (dVar15 = (double)(*(uint64_t *)((char *)&(param_1.Mode__Normal) + 4)), iVar6 == 2)) {
    dVar15 = (double)(*(uint64_t *)((char *)&(param_1) + 20));
  }
  dVar14 = (double)(*(uint64_t *)((char *)&(param_1.Mode__Normal) + 4));
  if (((iVar3 != 0) && (dVar14 = (double)(*(uint64_t *)((char *)&(param_1.Mode__Normal) + 12)), iVar3 != 1)) &&
     (dVar14 = (double)(*(uint64_t *)((char *)&(param_1.Mode__Normal) + 4)), iVar3 == 2)) {
    dVar14 = (double)(*(uint64_t *)((char *)&(param_1) + 20));
  }
  uVar9 = param_2.Mode__Normal.Y;
  uVar11 = param_2.Mode__Normal.Y;
  uVar7 = uVar9;
  uVar8 = uVar11;
  if (((iVar5 != iVar2) &&
      (uVar7 = param_2.Mode__Normal.Z, uVar8 = param_2.Mode__Normal.Z, iVar6 != 1)) &&
     (uVar7 = uVar9, uVar8 = uVar11, iVar6 == 2)) {
    uVar7 =(*(double *)((char *)&(param_2.Mode__Normal) + 0x18));
    uVar8 = param_2.OriginDistance;
  }
  uVar10 = uVar9;
  uVar12 = uVar11;
  if (((iVar3 != 0) &&
      (uVar10 = param_2.Mode__Normal.Z, uVar12 = param_2.Mode__Normal.Z, iVar3 != 1)) &&
     (uVar10 = uVar9, uVar12 = uVar11, iVar3 == 2)) {
    uVar10 =(*(double *)((char *)&(param_2.Mode__Normal) + 0x18));
    uVar12 = param_2.OriginDistance;
  }
  dVar1 = (double)CONCAT44(in_stack_00000044,(*(uint32_t *)((char *)&(param_2.OriginDistance) + 4)));
  dVar13 = -dVar1;
  VStack_20.Z = 0.0;
  VStack_20.X = 0.0;
  VStack_20.Y = 0.0;
  if (NAN((double)CONCAT44(uVar12,uVar10)) == ((double)CONCAT44(uVar12,uVar10) == 0.0)) {
    if (iVar5 == iVar2) {
LAB_0070c90b:
      pVVar4 = &VStack_20;
    }
    else if (iVar6 == 1) {
      pVVar4 = (Vec3_L_double_G_ *)&VStack_20.Y;
    }
    else {
      if (iVar6 != 2) goto LAB_0070c90b;
      pVVar4 = (Vec3_L_double_G_ *)&VStack_20.Z;
    }
    pVVar4->X = ((dVar14 * dVar13) / (double)CONCAT44(uVar12,uVar10) -
                -(double)CONCAT44(param_2.Mode__Normal.X,(*(uint32_t *)((char *)&(param_1.OriginDistance) + 4)))) /
                (dVar15 - (dVar14 * (double)CONCAT44(uVar8,uVar7)) / (double)CONCAT44(uVar12,uVar10)
                );
  }
  else if (iVar5 == iVar2) {
LAB_0070c8df:
    VStack_20.X = -(-dVar1 / (double)CONCAT44(uVar8,uVar7));
  }
  else if (iVar6 == 1) {
    VStack_20.Y = -(-dVar1 / (double)CONCAT44(uVar8,uVar7));
  }
  else {
    if (iVar6 != 2) goto LAB_0070c8df;
    VStack_20.Z = -(-dVar1 / (double)CONCAT44(uVar8,uVar7));
  }
  if (NAN((double)CONCAT44(uVar8,uVar7)) != ((double)CONCAT44(uVar8,uVar7) == 0.0)) {
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        VStack_20.Y = -(dVar13 / (double)CONCAT44(uVar12,uVar10));
        goto LAB_0070c9cf;
      }
      if (iVar3 == 2) {
        VStack_20.Z = -(dVar13 / (double)CONCAT44(uVar12,uVar10));
        goto LAB_0070c9cf;
      }
    }
    VStack_20.X = -(dVar13 / (double)CONCAT44(uVar12,uVar10));
    goto LAB_0070c9cf;
  }
  if (iVar3 == 0) {
LAB_0070c9a8:
    pVVar4 = &VStack_20;
  }
  else if (iVar3 == 1) {
    pVVar4 = (Vec3_L_double_G_ *)&VStack_20.Y;
  }
  else {
    if (iVar3 != 2) goto LAB_0070c9a8;
    pVVar4 = (Vec3_L_double_G_ *)&VStack_20.Z;
  }
  pVVar4->X = ((dVar15 * dVar13) / (double)CONCAT44(uVar8,uVar7) -
              -(double)CONCAT44(param_2.Mode__Normal.X,(*(uint32_t *)((char *)&(param_1.OriginDistance) + 4)))) /
              (dVar14 - (dVar15 * (double)CONCAT44(uVar12,uVar10)) / (double)CONCAT44(uVar8,uVar7));
LAB_0070c9cf:
  if (((NAN(VStack_20.X)) || (NAN(VStack_20.Y))) || (NAN(VStack_20.Z))) {
    dVar15 = 0.0;
    dVar1 = 0.0;
    uStack_68 = 0;
    *(uint32_t *)&auStack_98 = ZEXT816(0);
    uStack_88 = 0;
    uStack_84 = 0;
    dVar14 = 0.0;
  }
  else {
    dVar14 = VStack_20.X + (double)(*(uint64_t*)&(auStack_38));
    dVar15 = VStack_20.Y + (double)(*(uint64_t*)((char*)&(auStack_38)+8));
    uStack_68 = 1;
    dStack_28 = VStack_20.Z + dStack_28;
    (*(uint32_t*)((char*)&(auStack_98)+8)) = SUB84(VStack_20.Y,0);
    (*(uint64_t*)&(auStack_98)) = VStack_20.X;
    (*(uint32_t *)((char *)&(auStack_98) + 12)) = (int)((ulonglong)VStack_20.Y >> 0x20);
    (*(uint32_t*)((char*)&(auStack_38)+8)) = SUB84(dVar15,0);
    (*(uint64_t*)&(auStack_38)) = dVar14;
    (*(uint32_t *)((char *)&(auStack_38) + 12)) = (int)((ulonglong)dVar15 >> 0x20);
    uStack_40 = SUB84(VStack_20.Z,0);
    uStack_3c = (undefined4)((ulonglong)VStack_20.Z >> 0x20);
    uStack_88 = uStack_40;
    uStack_84 = uStack_3c;
    dVar1 = dStack_28;
  }
  param_1.Mode__Normal.X = (*(uint32_t*)&(auStack_98));
  ((double *)&(param_1.Mode__Normal.X))[1] = (*(uint32_t*)((char*)&(auStack_98)+4));
  ((double *)&(param_1.Mode__Normal.X))[2] = (*(uint32_t*)((char*)&(auStack_98)+8));
  ((double *)&(param_1.Mode__Normal.X))[3] = (*(uint32_t *)((char *)&(auStack_98) + 12));
  ((double *)&(param_1.Mode__Normal.X))[4] = uStack_88;
  ((double *)&(param_1.Mode__Normal.X))[5] = uStack_84;
  *(double *)(*(uint32_t *)&param_1.Mode__Normal.X + 6) = dVar14;
  *(undefined1 *)(*(uint32_t *)&param_1.Mode__Normal.X + 0xc) = uStack_68;
  *(double *)(*(uint32_t *)&param_1.Mode__Normal.X + 8) = dVar15;
  *(double *)(*(uint32_t *)&param_1.Mode__Normal.X + 10) = dVar1;
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0070caa0 Plane_double__0070caa0 ====


/* public:  util__Plane_double___Plane_double(struct util__Vec3_L_double_G_,double) */

Plane_L_double_G_ * 
util__Plane_double___Plane_double(Plane_L_double_G_ *this,Vec3_L_double_G_ param_1,double param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  Maybe_L_double_G_ *pMVar5;
  Maybe_L_double_G_ MStack_2c;
  double dStack_1c;
  double dStack_14;
  double dStack_c;
  
  *(undefined4 *)&(this->Mode__Normal).X = param_1.X;
  *(undefined4 *)((int)&(this->Mode__Normal).X + 4) = param_1.Y;
  *(undefined4 *)&(this->Mode__Normal).Y = param_1.Y;
  *(undefined4 *)((int)&(this->Mode__Normal).Y + 4) = param_1.Z;
  (this->Mode__Normal).Z = param_1.Z;
  this->OriginDistance = param_2;
  dVar1 = (this->Mode__Normal).Y;
  dVar2 = (this->Mode__Normal).X;
  dStack_14 = 1.0;
  dVar3 = (this->Mode__Normal).Z;
  param_2 = dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3;
  pMVar5 = (Maybe_L_double_G_ *)(uintptr_t)(Sqrt(&MStack_2c,&param_2));
  if (pMVar5->IsValidData == false) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,"IsValid()",
              (char *)0x0);
    DebugBreak();
  }
  dStack_1c = pMVar5->Data;
  dStack_c = 1e-08;
  bVar4 = Equals_L_double_G_(&dStack_1c,&dStack_14,&dStack_c);
  if (((!bVar4) || (dVar1 = this->OriginDistance, NAN(dVar1))) ||
     ((NAN(dVar1) == (dVar1 == 0.0) && (NAN(dVar1 / dVar1))))) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\plane.h",0x1d,
              "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return this;
}





//==== 0070f9c0 GetEccentricAnomalyFromMeanAnomaly_radians ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: double 
   FixedOrbit__GetEccentricAnomalyFromMeanAnomaly_radians(double,double)const  */

double FixedOrbit__GetEccentricAnomalyFromMeanAnomaly_radians(double param_1,double param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_0070c5d0(&param_2,&param_1,&param_2,param_1,0x14,0x3e45798ee2308c3a);
  return (double)fVar1;
}





//==== 0070fa80 GetEquinoxNormal ====


/* public: static struct util__Vec3_L_double_G_ __cdecl FixedOrbit__GetEquinoxNormal(void) */

Vec3_L_double_G_ * __cdecl FixedOrbit__GetEquinoxNormal(Vec3_L_double_G_ *__return_storage_ptr__)

{
  __return_storage_ptr__->X = 1.0;
  *(undefined4 *)&__return_storage_ptr__->Y = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = 0;
  *(undefined4 *)&__return_storage_ptr__->Z = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->Z + 4) = 0;
  return __return_storage_ptr__;
}





//==== 00710550 GetMeanAnomalyFromEccentricAnomaly_radians ====


/* public: static double __cdecl
   FixedOrbit__GetMeanAnomalyFromEccentricAnomaly_radians(double,double) */

double __cdecl FixedOrbit__GetMeanAnomalyFromEccentricAnomaly_radians(double param_1,double param_2)

{
  double dVar1;
  
  dVar1 = util__Sin(&param_1);
  return param_1 - dVar1 * param_2;
}





//==== 00711840 GetRelativePosition_km ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: struct util__Vec3_L_double_G_  FixedOrbit__GetRelativePosition_km(double)const  */

Vec3_L_double_G_ *
FixedOrbit__GetRelativePosition_km(Vec3_L_double_G_ *__return_storage_ptr__,double param_1)

{
  undefined8 stack0xffffffcc;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  PhysicalState_L_util__Vec3_L_double_G___G_ *pPVar4;
  undefined4 in_stack_ffffffcc;
  
  pPVar4 = (PhysicalState_L_util__Vec3_L_double_G___G_ *)(uintptr_t)(GetRelativeOrbitalState
                     ((PhysicalState_L_util__Vec3_L_double_G___G_ *)&stack0xffffffcc,
                      (double)CONCAT44(in_stack_ffffffcc,(*(uint32_t*)&(param_1)))));
  uVar1 = *(undefined4 *)((int)&(pPVar4->Position).X + 4);
  uVar2 = *(undefined4 *)&(pPVar4->Position).Y;
  uVar3 = *(undefined4 *)((int)&(pPVar4->Position).Y + 4);
  (undefined4)(__return_storage_ptr__->X = *(undefined4 *)&(pPVar4->Position).X);
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Y = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = uVar3;
  __return_storage_ptr__->Z = (pPVar4->Position).Z;
  return __return_storage_ptr__;
}





//==== 00711880 GetRemainingTimeToApoapsis_s ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: double  FixedOrbit__GetRemainingTimeToApoapsis_s(double)const  */

double FixedOrbit__GetRemainingTimeToApoapsis_s(double)

{
  double dVar1;
  double dVar2;
  
  dVar1 = GetMeanAnomaly_radians(param_1);
  dVar1 = util__NormalizeAngle_double(3.141592653589793 - dVar1);
  dVar2 = GetAverageAngularVelocity__s();
  return dVar1 / dVar2;
}





//==== 007118d0 GetRemainingTimeToPeriapsis_s ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: double  FixedOrbit__GetRemainingTimeToPeriapsis_s(double)const  */

double FixedOrbit__GetRemainingTimeToPeriapsis_s(double)

{
  double dVar1;
  double dVar2;
  
  dVar1 = GetMeanAnomaly_radians(param_1);
  dVar2 = GetAverageAngularVelocity__s();
  return (6.283185307179586 - dVar1) / dVar2;
}





//==== 00711af0 GetSemimajorAxisRangeForRandomization_km ====

/* public: static struct util__Range_L_double_G_ __cdecl
   OrbitalElements__GetSemimajorAxisRangeForRandomization_km(struct CelestialBody *,class
   util__Maybe_L_double_G_) */

Range_L_double_G_ * __cdecl
OrbitalElements__GetSemimajorAxisRangeForRandomization_km
          (Range_L_double_G_ *__return_storage_ptr__,CelestialBody *param_1,Maybe_L_double_G_ param_2)

{
  bool bVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double local_20;
  double local_18;
  double local_10;
  
  CelestialBody__GetStabilityRegionRadius_km_Memoize(param_1);
  if ((char)param_1[1].Atmosphere.Data._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  bVar1 = param_1[1].RingSystem.IsValidData;
  dVar3 = *(double *)&param_1[1].RingSystem.Data.AlphaTexture.Type;
  if (bVar1 != false) {
    dVar4 = CelestialBody__GetRadius_km(param_1);
    bVar2 = true;
    if (dVar4 < dVar3) goto LAB_00711b65;
  }
  bVar2 = false;
LAB_00711b65:
  dVar4 = CelestialBody__GetRadius_km(param_1);
  dVar4 = dVar4 * 1.1;
  dVar5 = CelestialBody__GetRadius_km(param_1);
  dVar5 = dVar5 * 1.1;
  __return_storage_ptr__->Lower = dVar4;
  __return_storage_ptr__->Upper = dVar5;
  if (dVar5 < dVar4) {
    __return_storage_ptr__->Lower = dVar5;
    __return_storage_ptr__->Upper = dVar4;
  }
  if (bVar2) {
    local_20 = CelestialBody__GetRadius_km(param_1);
    local_20 = local_20 * 1.1;
    if (bVar1 == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    local_18 = dVar3 * 0.9;
    if (local_18 <= local_20) {
      if (bVar1 == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      local_20 = CelestialBody__GetRadius_km(param_1);
      local_18 = dVar3;
    }
    dVar3 = local_20;
    if (local_18 < local_20) {
      dVar3 = local_18;
      local_18 = local_20;
    }
    local_20 = dVar3;
    __return_storage_ptr__->Lower = local_20;
    __return_storage_ptr__->Upper = local_18;
    if (param_2.IsValidData != false) {
      dVar4 = ((local_18 - local_20) / 20.0) * 0.5;
      dVar3 = param_2.Data * (local_18 - local_20) * 0.5 + local_20;
      dVar5 = dVar3 - dVar4;
      dVar4 = dVar4 + dVar3;
      dVar3 = dVar5;
      if (dVar4 < dVar5) {
        dVar3 = dVar4;
        dVar4 = dVar5;
      }
      if ((local_18 < dVar3) || (dVar4 < local_20)) {
        local_10 = 0.0;
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
        local_20 = 0.0;
      }
      else {
        local_10 = local_18;
        if (dVar4 <= local_18) {
          local_10 = dVar4;
        }
        if (local_20 <= dVar3) {
          local_20 = dVar3;
        }
        if (local_10 < local_20) {
          __return_storage_ptr__->Lower = local_10;
          __return_storage_ptr__->Upper = local_20;
          return __return_storage_ptr__;
        }
      }
      __return_storage_ptr__->Lower = local_20;
      __return_storage_ptr__->Upper = local_10;
    }
  }
  return __return_storage_ptr__;
}

//==== 007135e0 IsApoapsisCrossingImminent ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: bool  FixedOrbit__IsApoapsisCrossingImminent(struct util__Range_L_double_G_)const
    */

bool FixedOrbit__IsApoapsisCrossingImminent(Range_L_double_G_ param_1)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = GetAverageAngularVelocity__s();
  dVar3 = GetMeanAnomaly_radians(param_1.Lower);
  dVar4 = GetMeanAnomaly_radians(param_1.Upper);
  if ((3.141592653589793 < dVar3) || (dVar4 < 3.141592653589793)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((dVar2 * (param_1.Upper - param_1.Lower) < 6.283185307179586) && (!bVar1)) {
    return false;
  }
  return true;
}





//==== 00713bf0 IsPeriapsisCrossingImminent ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: bool  FixedOrbit__IsPeriapsisCrossingImminent(struct util__Range_L_double_G_)const
    */

bool FixedOrbit__IsPeriapsisCrossingImminent(Range_L_double_G_ param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = GetAverageAngularVelocity__s();
  dVar2 = GetMeanAnomaly_radians(param_1.Lower);
  dVar3 = GetMeanAnomaly_radians(param_1.Upper);
  if ((dVar1 * (param_1.Upper - param_1.Lower) < 6.283185307179586) && (dVar2 <= dVar3)) {
  }
  return true;
}





//==== 00713c80 IsStateInRetrogradeOrbit ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: bool  FixedOrbit__IsStateInRetrogradeOrbit(struct util__PhysicalState_L_struct_util__Vec3_L_double_G__G_)const  */

bool FixedOrbit__IsStateInRetrogradeOrbit(PhysicalState_L_util__Vec3_L_double_G___G_ param_1)

{
  undefined1 local_34 [24];
  double local_1c;
  double local_14;
  double local_c;
  
  ProjectStateOnToOrbit
            (local_34,param_1.Position.X,param_1.Position.Y,param_1.Position.Y,
             param_1.Position.Z,param_1.Position.Z,(*(double *)((char *)&(param_1.Position) + 0x18)),
             param_1.Velocity.X,param_1.Velocity.Y,param_1.Velocity.Y,
             param_1.Velocity.Z,param_1.Velocity.Z,(*(double *)((char *)&(param_1.Velocity) + 0x18)),0);
  return local_1c * param_1.Velocity.X + local_14 * param_1.Velocity.Y +
         local_c * param_1.Velocity.Z < 0.0;
}





//==== 00713cf0 Length ====


/* public: double const __thiscall util__Vec3_double___Length(void)const  */

double __thiscall util__Vec3_double___Length(Vec3_L_double_G_ *this)

{
  Maybe_L_double_G_ *pMVar1;
  Maybe_L_double_G_ MStack_1c;
  double dStack_c;
  
  dStack_c = this->X * this->X + this->Y * this->Y + this->Z * this->Z;
  pMVar1 = (Maybe_L_double_G_ *)(uintptr_t)(Sqrt(&MStack_1c,&dStack_c));
  if (pMVar1->IsValidData == false) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,"IsValid()",
              (char *)0x0);
    DebugBreak();
  }
  return pMVar1->Data;
}





//==== 00713f30 RandomOrbit ====

/* public: static struct OrbitalElements __cdecl OrbitalElements__RandomOrbit(class
   util__WeakPtr_L_classCelestialObject_G_,class util__Maybe_L_double_G_) */

OrbitalElements * __cdecl
OrbitalElements__RandomOrbit
          (OrbitalElements *__return_storage_ptr__,int param_2,ReferenceController *param_3,
          undefined8 param_4,undefined1 param_5)

{
  Maybe_L_double_G_ MVar1;
  bool bVar2;
  Range_L_double_G_ *pRVar3;
  int iVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 in_stack_ffffffcc;
  undefined4 uVar8;
  undefined4 in_stack_ffffffd0;
  Range_L_double_G_ local_24;
  double local_14;
  double local_c;
  
  uVar6 = (undefined4)param_4;
  uVar7 = (undefined4)((ulonglong)param_4 >> 0x20);
  uVar8 = CONCAT31((int3)((uint)in_stack_ffffffcc >> 8),param_5);
  if ((param_3 != (ReferenceController *)0x0) &&
     (bVar2 = util__ReferenceController__IsDataStillValid(param_3), !bVar2)) {
    param_2 = 0;
  }
  (*(uint32_t *)((char *)&(MVar1.Data) + 4)) = uVar7;
  MVar1.Data = uVar6;
  (*(uint32_t*)((char*)&(MVar1)+8)) = uVar8;
  (*(uint32_t *)((char *)&(MVar1) + 12)) = in_stack_ffffffd0;
  pRVar3 = (Range_L_double_G_ *)(uintptr_t)(GetSemimajorAxisRangeForRandomization_km
                     (&local_24,*(CelestialBody **)(param_2 + 0x4c),MVar1));
  local_14 = pRVar3->Lower;
  *(uint32_t *)&local_c = pRVar3->Upper;
  iVar4 = rand();
  __return_storage_ptr__->_pad_0x4_1 = 0;
  __return_storage_ptr__->_pad_0x8_2 = 0;
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)(uintptr_t)(__return_storage_ptr__) + 0xc)) = 0;
  __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_396;
  *(undefined4 *)&__return_storage_ptr__->ArgumentOfPeriapsis_degrees = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->ArgumentOfPeriapsis_degrees + 4) = 0;
  *(undefined4 *)&__return_storage_ptr__->MeanAnomaly_degrees = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->MeanAnomaly_degrees + 4) = 0;
  *(undefined4 *)&__return_storage_ptr__->Eccentricity = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->Eccentricity + 4) = 0;
  *(undefined4 *)&__return_storage_ptr__->InclinationToRelativePlane_degrees = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->InclinationToRelativePlane_degrees + 4) = 0;
  __return_storage_ptr__->LongitudeOfAscendingNode_degrees = 0.0;
  __return_storage_ptr__->Epoch_JulianYears = 2000.0;
  __return_storage_ptr__->SemiMajorAxis_km =
       (double)iVar4 * 3.0517578125e-05 * (local_c - local_14) + local_14;
  iVar4 = rand();
  dVar5 = util__NormalizeAngle_double((double)iVar4 * 3.0517578125e-05 * 6.283185307179586 + 0.0);
  __return_storage_ptr__->ArgumentOfPeriapsis_degrees = dVar5 * 57.29577951308232;
  iVar4 = rand();
  dVar5 = util__NormalizeAngle_double((double)iVar4 * 3.0517578125e-05 * 6.283185307179586 + 0.0);
  __return_storage_ptr__->MeanAnomaly_degrees = dVar5 * 57.29577951308232;
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  return __return_storage_ptr__;
}

//==== 00714720 GetCoastVelocity_km__s ====


/* struct util__Vec3_L_double_G_ __cdecl Astrogation__GetCoastVelocity_km__s(struct
   util__PhysicalState_L_structutil__Vec3_L_double_G__G_,struct util__PhysicalState_L_struct_util__Vec3_L_double_G__G_,struct util__Range_L_double_G_,double) */

Vec3_L_double_G_ * __cdecl
Astrogation__GetCoastVelocity_km__s
          (Vec3_L_double_G_ *__return_storage_ptr__,double param_2,double param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          undefined4 param_9,undefined4 param_10,undefined4 param_11,double param_12,double param_13
          ,double param_14,double param_15,undefined4 param_16,undefined4 param_17,
          undefined4 param_18,undefined4 param_19,undefined4 param_20,undefined4 param_21,
          undefined4 param_22,undefined4 param_23)

{
  undefined8 stack0xffffffd8;
  undefined8 stack0xfffffff0;
  Maybe_L_double_G_ *pMVar1;
  double dVar2;
  double dVar3;
  Vec3_L_double_G_ VStack_c8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [24];
  double dStack_90;
  double dStack_88;
  byte bStack_79;
  undefined1 auStack_78 [16];
  double dStack_68;
  double dStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [16];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [12];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  
  uStack_14 = __security_cookie ^ (uint)&stack0xfffffff0;
  (*(uint64_t*)((char*)&(auStack_78)+8)) = param_13;
  (*(uint64_t*)&(auStack_78)) = param_12;
  (*(uint64_t*)((char*)&(auStack_48)+8)) = param_3;
  (*(uint64_t*)&(auStack_48)) = param_2;
  dStack_68 = param_14;
  dStack_60 = param_15;
  uStack_58 = param_16;
  uStack_54 = param_17;
  uStack_50 = param_18;
  uStack_4c = param_19;
  uStack_38 = param_4;
  uStack_34 = param_5;
  (*(uint32_t*)((char*)&(auStack_30)+4)) = param_7;
  (*(uint32_t*)&(auStack_30)) = param_6;
  (*(uint32_t*)((char*)&(auStack_30)+8)) = param_8;
  uStack_24 = param_9;
  uStack_20 = param_10;
  uStack_1c = param_11;
  VStack_c8.X = param_12 - param_2;
  unique0x1000039e = SUB84(param_3,0);
  *(uint32_t *)&auStack_b0 = (uint64_t)param_3;
  unique0x100003a2 = (int)((ulonglong)param_3 >> 0x20);
  __return_storage_ptr__->Z = 0.0;
  VStack_c8.Y = param_13 - param_3;
  VStack_c8.Z = param_14 - (double)CONCAT44(param_5,param_4);
  *(undefined4 *)&__return_storage_ptr__->X = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = 0;
  *(undefined4 *)&__return_storage_ptr__->Y = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = 0;
  if (((NAN(VStack_c8.X) == (VStack_c8.X == 0.0)) || (NAN(VStack_c8.Y) == (VStack_c8.Y == 0.0))) ||
     (NAN(VStack_c8.Z) == (VStack_c8.Z == 0.0))) {
    util__Vec3_double___Normalized(&VStack_c8,(Vec3_L_double_G_ *)auStack_b0);
    unique0x100003da = stack0xffffffd8 - (double)CONCAT44(uStack_54,uStack_58);
    dStack_88 = (double)CONCAT44(uStack_1c,uStack_20) - (double)CONCAT44(uStack_4c,uStack_50);
    dVar3 = unique0x100003da * (double)(*(uint64_t*)&(auStack_a8)) +
            ((double)(*(uint64_t*)&(auStack_30)) - dStack_60) * (double)(int)(uintptr_t)(auStack_b0) +
            dStack_88 * (double)(*(uint64_t*)((char*)&(auStack_a8)+8));
    dVar2 = dVar3 * (double)(*(uint64_t*)&(auStack_a8));
    dStack_90 = dVar3 * (double)(*(uint64_t*)((char*)&(auStack_a8)+8));
    unique0x100003e2 = unique0x100003da - dVar2;
    dStack_88 = dStack_88 - dStack_90;
    (*(uint32_t*)((char*)&(auStack_48)+8)) = SUB84(unique0x100003e2,0);
    (*(uint64_t*)&(auStack_48)) = (double)(uintptr_t)(((double)(*(uint64_t*)&(auStack_30)) - dStack_60) - dVar3 * (double)(int)(uintptr_t)(auStack_b0));
    (*(uint32_t *)((char *)&(auStack_48) + 12)) = (int)((ulonglong)unique0x100003e2 >> 0x20);
    (*(uint32_t*)((char*)&(auStack_30)+8)) = SUB84(dVar2,0);
    (*(uint64_t*)&(auStack_30)) = (double)(uintptr_t)(dVar3 * (double)(int)(uintptr_t)(auStack_b0));
    uStack_24 = (int)((ulonglong)dVar2 >> 0x20);
  }
  else {
    *(uint32_t *)&auStack_48 = ZEXT816(0);
    uStack_38 = 0;
    uStack_34 = 0;
    _auStack_30 = ZEXT816(0);
    uStack_20 = 0;
    uStack_1c = 0;
    dStack_90 = 0.0;
    dStack_88 = 0.0;
  }
  (*(uint64_t*)((char*)&(auStack_a8)+8)) = param_14 - (double)CONCAT44(param_5,param_4);
  (*(uint64_t*)&(auStack_a8)) = param_13 - param_3;
  *(uint32_t *)&auStack_b0 = (uint64_t)(param_12 - param_2);
  util__Vec3_double___SafeNormalized((Vec3_L_double_G_ *)auStack_b0,&VStack_c8);
  __return_storage_ptr__->X = __return_storage_ptr__->X - (double)(*(uint64_t*)&(auStack_48));
  __return_storage_ptr__->Y = __return_storage_ptr__->Y - (double)(*(uint64_t*)((char*)&(auStack_48)+8));
  __return_storage_ptr__->Z = __return_storage_ptr__->Z - dStack_88;
  bStack_79 = 0.0 < (double)(*(uint64_t*)&(auStack_30)) * VStack_c8.X + stack0xffffffd8 * VStack_c8.Y +
                    dStack_90 * VStack_c8.Z;
  dStack_88 = (double)(*(uint64_t*)&(auStack_30)) * (double)(*(uint64_t*)&(auStack_30)) +
              stack0xffffffd8 * stack0xffffffd8 + dStack_90 * dStack_90;
  pMVar1 = util__Sqrt((Maybe_L_double_G_ *)(auStack_b0 + 8),&dStack_88);
  if (pMVar1->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar3 = (double)(int)((uint)bStack_79 * 2 + -1) * pMVar1->Data;
  if (dVar3 <= (double)CONCAT44(param_21,param_20)) {
    dVar3 = (double)CONCAT44(param_21,param_20);
  }
  if ((double)CONCAT44(param_23,param_22) <= dVar3) {
    dVar3 = (double)CONCAT44(param_23,param_22);
  }
  __return_storage_ptr__->X =
       (VStack_c8.X * dVar3 - (double)(*(uint64_t*)&(auStack_30))) + __return_storage_ptr__->X;
  __return_storage_ptr__->Y = (VStack_c8.Y * dVar3 - stack0xffffffd8) + __return_storage_ptr__->Y;
  __return_storage_ptr__->Z = (VStack_c8.Z * dVar3 - dStack_90) + __return_storage_ptr__->Z;
  __security_check_cookie(uStack_14 ^ (uint)&stack0xfffffff0);
  return __return_storage_ptr__;
}





//==== 00716070 GetTypeName_00716070 ====


/* public: virtual class util__Str_L_char_G_  CelestialRing__ReflectionInfoStruct_struct_CelestialRing___GetTypeName(void)const  */

Str_L_char_G_ * 
CelestialRing__ReflectionInfoStruct_struct_CelestialRing___GetTypeName
          (ReflectionInfoStruct_L_struct_CelestialRing_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"CelestialRing");
  return __return_storage_ptr__;
}





//==== 00716090 GetMembers_00716090 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   CelestialRing__ReflectionInfoStruct_struct_CelestialRing___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
CelestialRing__ReflectionInfoStruct_struct_CelestialRing___GetMembers__o2
          (ReflectionInfoStruct_L_struct_CelestialRing_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_aeeca2b3__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_aeeca2b3__thread_safe_static_guard_0__),
      cde_l2_aeeca2b3__thread_safe_static_guard_0__ == -1)) {
     cde_l2_479feee4_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_aeeca2b3__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_479feee4_Count);
  iVar3 = 0;
  if (0 <  cde_l2_479feee4_Count) {
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
    } while (iVar3 <  cde_l2_479feee4_Count);
  }
  return in_stack_00000004;
}





//==== 007161d0 GetMember_007161d0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   CelestialRing__ReflectionInfoStruct_struct_CelestialRing___GetMember(class util__Str_L_char_G_ const
   &)const  */

Str_L_char_G_ * 
CelestialRing__ReflectionInfoStruct_struct_CelestialRing___GetMember__o2
          (ReflectionInfoStruct_L_struct_CelestialRing_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_ab54ee57__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_ab54ee57__thread_safe_static_guard_0__),
      cde_l2_ab54ee57__thread_safe_static_guard_0__ == -1)) {
     cde_l2_87163737_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_ab54ee57__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_87163737_Count) {
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
LAB_0071625d:
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
          if (cVar3 == '\0') goto LAB_0071625d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_87163737_Count);
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





//==== 00716370 GetFactory_00716370 ====


/* public: virtual class util__Reflectable * (__cdecl*
   CelestialRing__ReflectionInfoStruct_struct_CelestialRing___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall CelestialRing__ReflectionInfoStruct_struct_CelestialRing___GetFactory__o2
          (ReflectionInfoStruct_L_struct_CelestialRing_G_ *this)

{
  return StaticFactory;
}





//==== 00716380 GetTypeName_00716380 ====


/* public: virtual class util__Str_L_char_G_  CelestialRotation__ReflectionInfoStruct_struct_CelestialRotation___GetTypeName(void)const  */

Str_L_char_G_ * 
CelestialRotation__ReflectionInfoStruct_struct_CelestialRotation___GetTypeName
          (ReflectionInfoStruct_L_struct_CelestialRotation_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"CelestialRotation");
  return __return_storage_ptr__;
}





//==== 007163a0 GetMembers_007163a0 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   CelestialRotation__ReflectionInfoStruct_struct_CelestialRotation___GetMembers(void)const  */

undefined4 
CelestialRotation__ReflectionInfoStruct_struct_CelestialRotation___GetMembers__o2
          (ReflectionInfoStruct_L_struct_CelestialRotation_G_ *this)

{
  undefined4 in_stack_00000004;
  
  StaticGetMembers();
}





//==== 007163c0 GetMember_007163c0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   CelestialRotation__ReflectionInfoStruct_struct_CelestialRotation___GetMember(class
   util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
CelestialRotation__ReflectionInfoStruct_struct_CelestialRotation___GetMember__o2
          (ReflectionInfoStruct_L_struct_CelestialRotation_G_ *this,Str_L_char_G_ *param_1)

{
  StaticGetMember(param_1);
  return param_1;
}





//==== 007163e0 GetFactory_007163e0 ====


/* public: virtual class util__Reflectable * (__cdecl*
   CelestialRotation__ReflectionInfoStruct_struct_CelestialRotation___GetFactory(void)const )(void)
    */

_func_Reflectable_ptr * 
__thiscall CelestialRotation__ReflectionInfoStruct_struct_CelestialRotation___GetFactory__o2
          (ReflectionInfoStruct_L_struct_CelestialRotation_G_ *this)

{
  return StaticFactory;
}





//==== 007163f0 GetTypeName_007163f0 ====


/* public: virtual class util__Str_L_char_G_  CelestialAtmosphere__ReflectionInfoStruct_struct_CelestialAtmosphere___GetTypeName(void)const  */

Str_L_char_G_ * 
CelestialAtmosphere__ReflectionInfoStruct_struct_CelestialAtmosphere___GetTypeName
          (ReflectionInfoStruct_L_struct_CelestialAtmosphere_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"CelestialAtmosphere");
  return __return_storage_ptr__;
}





//==== 00716410 GetMembers_00716410 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   CelestialAtmosphere__ReflectionInfoStruct_struct_CelestialAtmosphere___GetMembers(void)const  */

undefined4 
CelestialAtmosphere__ReflectionInfoStruct_struct_CelestialAtmosphere___GetMembers__o2
          (ReflectionInfoStruct_L_struct_CelestialAtmosphere_G_ *this)

{
  undefined4 in_stack_00000004;
  
  StaticGetMembers();
}





//==== 00716430 GetMember_00716430 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   CelestialAtmosphere__ReflectionInfoStruct_struct_CelestialAtmosphere___GetMember(class
   util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
CelestialAtmosphere__ReflectionInfoStruct_struct_CelestialAtmosphere___GetMember__o2
          (ReflectionInfoStruct_L_struct_CelestialAtmosphere_G_ *this,Str_L_char_G_ *param_1)

{
  StaticGetMember(param_1);
  return param_1;
}





//==== 00716450 GetFactory_00716450 ====


/* public: virtual class util__Reflectable * (__cdecl*
   CelestialAtmosphere__ReflectionInfoStruct_struct_CelestialAtmosphere___GetFactory(void)const
   )(void) */

_func_Reflectable_ptr * 
__thiscall CelestialAtmosphere__ReflectionInfoStruct_struct_CelestialAtmosphere___GetFactory__o2
          (ReflectionInfoStruct_L_struct_CelestialAtmosphere_G_ *this)

{
  return StaticFactory;
}





//==== 00716460 GetReflectionInfo_00716460 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   AsteroidSpectralType__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall AsteroidSpectralType__GetReflectionInfo(AsteroidSpectralType *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_e44a51a5__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_e44a51a5__thread_safe_static_guard_0__);
    if ( cde_l2_e44a51a5__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_14398a68_ReflectionInfo) = &vftable_430;
      _Init_thread_footer(& cde_l2_e44a51a5__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_14398a68_ReflectionInfo;
}





//==== 00716470 scalar_deleting_destructor_00716470 ====

/* public: virtual void * __thiscall AsteroidSpectralType:: 0 scalardeletingdestructor(unsigned
   int) */

void * __thiscall
AsteroidSpectralType___scalar_deleting_destructor(AsteroidSpectralType *this,uint param_1)

{
  Material **ppMVar1;
  
  ppMVar1 = (this->Composition).Data;
  (this->Composition)._pad_0x0_0 = (int)&vftable_2;
  if (ppMVar1 != (Material **)0x0) {
    port_op_delete(ppMVar1);
  }
  (this->Composition).Data = (Material **)0x0;
  (this->Composition)._pad_0x0_0 = (int)&vftable;
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

//==== 007164d0 GetTypeName_007164d0 ====


/* public: virtual class util__Str_L_char_G_ 
   AsteroidSpectralType__ReflectionInfoStruct_struct_AsteroidSpectralType___GetTypeName(void)const
    */

Str_L_char_G_ * 
AsteroidSpectralType__ReflectionInfoStruct_struct_AsteroidSpectralType___GetTypeName__o2
          (ReflectionInfoStruct_L_struct_AsteroidSpectralType_G_ *this,Str_L_char_G_ *__return_storage_ptr__
          )

{
  util__Str_char___Str_char(__return_storage_ptr__,"AsteroidSpectralType");
  return __return_storage_ptr__;
}





//==== 007164f0 GetMembers_007164f0 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   AsteroidSpectralType__ReflectionInfoStruct_struct_AsteroidSpectralType___GetMembers(void)const
    */

undefined4 
AsteroidSpectralType__ReflectionInfoStruct_struct_AsteroidSpectralType___GetMembers__o2
          (ReflectionInfoStruct_L_struct_AsteroidSpectralType_G_ *this)

{
  undefined4 in_stack_00000004;
  
  StaticGetMembers();
}





//==== 00716510 GetMember_00716510 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   AsteroidSpectralType__ReflectionInfoStruct_struct_AsteroidSpectralType___GetMember(class
   util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
AsteroidSpectralType__ReflectionInfoStruct_struct_AsteroidSpectralType___GetMember__o2
          (ReflectionInfoStruct_L_struct_AsteroidSpectralType_G_ *this,Str_L_char_G_ *param_1)

{
  StaticGetMember(param_1);
  return param_1;
}





//==== 00716530 GetFactory_00716530 ====


/* public: virtual class util__Reflectable * (__cdecl*
   AsteroidSpectralType__ReflectionInfoStruct_struct_AsteroidSpectralType___GetFactory(void)const
   )(void) */

_func_Reflectable_ptr * 
__thiscall AsteroidSpectralType__ReflectionInfoStruct_struct_AsteroidSpectralType___GetFactory__o2
          (ReflectionInfoStruct_L_struct_AsteroidSpectralType_G_ *this)

{
  return StaticFactory;
}





//==== 00716540 GetTypeName_00716540 ====


/* public: virtual class util__Str_L_char_G_  CelestialBody__ReflectionInfoStruct_struct_CelestialBody___GetTypeName(void)const  */

Str_L_char_G_ * 
CelestialBody__ReflectionInfoStruct_struct_CelestialBody___GetTypeName
          (ReflectionInfoStruct_L_struct_CelestialBody_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"CelestialBody");
  return __return_storage_ptr__;
}





//==== 00716560 GetMembers_00716560 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   CelestialBody__ReflectionInfoStruct_struct_CelestialBody___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
CelestialBody__ReflectionInfoStruct_struct_CelestialBody___GetMembers__o2
          (ReflectionInfoStruct_L_struct_CelestialBody_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_a3fdbce7__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_a3fdbce7__thread_safe_static_guard_0__),
      cde_l2_a3fdbce7__thread_safe_static_guard_0__ == -1)) {
     cde_l2_fb0caebb_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_a3fdbce7__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_fb0caebb_Count);
  iVar3 = 0;
  if (0 <  cde_l2_fb0caebb_Count) {
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
    } while (iVar3 <  cde_l2_fb0caebb_Count);
  }
  return in_stack_00000004;
}





//==== 007166a0 GetMember_007166a0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   CelestialBody__ReflectionInfoStruct_struct_CelestialBody___GetMember(class util__Str_L_char_G_ const
   &)const  */

Str_L_char_G_ * 
CelestialBody__ReflectionInfoStruct_struct_CelestialBody___GetMember__o2
          (ReflectionInfoStruct_L_struct_CelestialBody_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_97ab4a4a__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_97ab4a4a__thread_safe_static_guard_0__),
      cde_l2_97ab4a4a__thread_safe_static_guard_0__ == -1)) {
     cde_l2_42ee816b_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_97ab4a4a__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_42ee816b_Count) {
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
LAB_0071672d:
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
          if (cVar3 == '\0') goto LAB_0071672d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_42ee816b_Count);
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





//==== 00716840 GetFactory_00716840 ====


/* public: virtual class util__Reflectable * (__cdecl*
   CelestialBody__ReflectionInfoStruct_struct_CelestialBody___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall CelestialBody__ReflectionInfoStruct_struct_CelestialBody___GetFactory__o2
          (ReflectionInfoStruct_L_struct_CelestialBody_G_ *this)

{
  return StaticFactory;
}





//==== 007170f0 SeedRandomFromHash_util__Str_char___ ====


/* void __cdecl util__SeedRandomFromHash_L_classutil__Str_L_char_G__G_(class util__Str_L_char_G_) */

void __cdecl util__SeedRandomFromHash_class_util__Str_char(Str_L_char_G_ param_1)

{
  char *pcVar1;
  ulong _Seed;
  
  pcVar1 = "";
  if (0 < param_1.Capacity) {
    pcVar1 = param_1.Data;
  }
  _Seed = GetHash(pcVar1);
  srand(_Seed);
  if (param_1.Data != (char *)0x0) {
    port_op_delete(param_1.Data);
  }
  return;
}





//==== 00717130 CelestialBody ====

/* public: __thiscall CelestialBody__CelestialBody(void) */

CelestialBody * __thiscall CelestialBody__CelestialBody(CelestialBody *this)

{
  CelestialBody *pCVar1;
  
  EditorReflectable__EditorReflectable((EditorReflectable *)this);
  this->_pad_0x0_0 = (int)&vftable_437;
  *(undefined4 *)((int)&(this->Radii_km).X_km + 4) = 0;
  *(undefined4 *)&(this->Radii_km).Y_km = 0;
  *(undefined4 *)((int)&(this->Radii_km).Y_km + 4) = 0;
  *(undefined4 *)&(this->Radii_km).Z_km = 0;
  *(undefined ***)((int)&(this->Radii_km).X_km + 4) = (undefined **)(&vftable_2);
  *(undefined4 *)&(this->Radii_km).Y_km = 0;
  *(undefined4 *)((int)&(this->Radii_km).Y_km + 4) = 0;
  *(undefined4 *)&(this->Radii_km).Z_km = 0;
  *(undefined4 *)&this->SurfaceTemperature_K = 0;
  *(undefined4 *)((int)&this->SurfaceTemperature_K + 4) = 0;
  *(undefined4 *)&this->Albedo = 0;
  *(undefined4 *)((int)&this->Albedo + 4) = 0;
  this->SpectralType = (AsteroidSpectralType *)0x0;
  *(undefined4 *)&this->IsGasComposition = 0;
  (this->Orbit).Data._pad_0x0_0 = 0;
  (this->Orbit).Data._pad_0x4_1 = 0;
  (this->Orbit).Data._pad_0x8_2 = 0;
  (this->Orbit).Data._pad_0xc_3 = 0;
  (this->Orbit).Data.ParentBody = (CelestialBody *)0x0;
  *(undefined4 *)&(*(undefined4 *)((char *)&((this->Orbit).Data) + 0x14)) = 0;
  (this->Orbit).Data.Elements._pad_0x0_0 = 0;
  *(undefined8 *)&(this->Orbit).Data.Elements._pad_0x8_2 = 0;
  (this->Orbit).Data.Elements.Epoch_JulianYears = 0.5;
  *(undefined4 *)&(this->Orbit).Data.Elements.SemiMajorAxis_km = 0;
  *(undefined1 *)((int)&(this->Orbit).Data.Elements.SemiMajorAxis_km + 4) = 0;
  *(undefined4 *)((int)&(this->Orbit).Data.Elements.Eccentricity + 4) = 0;
  *(undefined4 *)&(this->Orbit).Data.Elements.InclinationToRelativePlane_degrees = 0;
  *(undefined4 *)((int)&(this->Orbit).Data.Elements.InclinationToRelativePlane_degrees + 4) = 0;
  *(undefined ** *)&(this->Orbit).Data.Elements.Eccentricity = &vftable_403;
  *(undefined4 *)&(this->Orbit).Data.Elements.LongitudeOfAscendingNode_degrees = 0;
  *(undefined4 *)((int)&(this->Orbit).Data.Elements.ArgumentOfPeriapsis_degrees + 4) = 0;
  *(undefined4 *)&(this->Orbit).Data.Elements.MeanAnomaly_degrees = 0;
  *(undefined4 *)((int)&(this->Orbit).Data.Elements.MeanAnomaly_degrees + 4) = 0;
  *(undefined ** *)&((this->Orbit).Data.Elements.ArgumentOfPeriapsis_degrees) =
       &vftable_396;
  *(undefined4 *)&(this->Orbit).IsValidData = 0;
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->Orbit)) + 0x64)) = 0;
  (this->Rotation)._pad_0x0_0 = 0;
  (this->Rotation)._pad_0x4_1 = 0;
  (this->Rotation)._pad_0x8_2 = 0;
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->Rotation)) + 0xc)) = 0;
  *(undefined4 *)&(this->Rotation).AxialTilt_degrees = 0;
  *(undefined4 *)((int)&(this->Rotation).AxialTilt_degrees + 4) = 0;
  *(undefined4 *)&(this->Rotation).SiderealRotationPeriod_s = 0;
  *(undefined4 *)((int)&(this->Rotation).SiderealRotationPeriod_s + 4) = 0;
  (this->RingSystem).Data._pad_0x0_0 = 0;
  (this->RingSystem).Data._pad_0x4_1 = 0;
  *(undefined8 *)&(this->RingSystem).Data._pad_0x8_2 = 0;
  *(undefined1 *)&(this->RingSystem).Data.Radius_km = 0;
  (this->RingSystem).Data.DiffuseTexture.TextureSize.X = 0;
  (this->RingSystem).Data.DiffuseTexture.TextureSize.Y = 0;
  (this->RingSystem).Data.DiffuseTexture.Texture = 0;
  (this->RingSystem).Data.DiffuseTexture._pad_0x0_0 = (int)&vftable_434;
  (this->RingSystem).Data.DiffuseTexture.Type = Type__TwoDimensional;
  *(undefined4 *)&(this->RingSystem).Data.DiffuseTexture.IsTextureMipmapped = 0;
  (this->RingSystem).Data.AlphaTexture._pad_0x0_0 = 0;
  (this->RingSystem).Data.AlphaTexture.TextureSize.X = 0;
  (this->RingSystem).Data.AlphaTexture.Texture = 0;
  (this->RingSystem).Data.AlphaTexture.Type = Type__TwoDimensional;
  *(undefined4 *)&(this->RingSystem).Data.AlphaTexture.IsTextureMipmapped = 0;
  (this->RingSystem).Data.AlphaTexture.TextureSize.Y = (int)&vftable_433;
  *(undefined4 *)&(this->RingSystem).IsValidData = 0;
  *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->RingSystem)) + 0x4c)) = 0;
  (this->Atmosphere).Data._pad_0x0_0 = 0;
  (this->Atmosphere).Data._pad_0x4_1 = 0;
  *(undefined1 *)&(this->Atmosphere).Data._pad_0x8_2 = 0;
  CustomTexture__CustomTexture((CustomTexture *)&(*(undefined1 *)((char *)&((this->Atmosphere).Data) + 0xc)));
  CustomTexture__CustomTexture((CustomTexture *)&(this->NormalCubeTexture).TextureSize);
  *(undefined1 *)&(this->Model)._pad_0x0_0 = 0;
  (this->Model)._pad_0xc_3 = 0;
  (this->Model)._pad_0x10_4 = 0;
  (this->Model)._pad_0x14_5 = 0;
  (this->Model)._pad_0x8_2 = (int)&vftable_436;
  (this->Model)._pad_0x18_6 = 0;
  (this->Model)._pad_0x1c_7 = 0;
  (this->Model)._pad_0x20_8 = (int)&vftable_435;
  (this->Model)._pad_0x24_9 = 0;
  (this->Model)._pad_0x28_10 = 0;
  (this->Model)._pad_0x2c_11 = 0;
  *(undefined1 *)&(this->Model)._pad_0x30_12 = 0;
  CubeMap__CubeMap((Type__CubeMap *)&(this->Model)._pad_0x38_14);
  CubeMap__CubeMap((Type__CubeMap *)&(this->Model)._pad_0x70_28);
  CubeMap__CubeMap((Type__CubeMap *)&(this->HiResModel)._pad_0x8_2);
  CubeMap__CubeMap((Type__CubeMap *)&(this->HiResModel)._pad_0x40_16);
  (this->HiResModel)._pad_0x78_30 = 0;
  (this->HiResModel)._pad_0x7c_31 = 0;
  VertexBufferObject__VertexBufferObject((VertexBufferObject *)&(this->HiResModel)._pad_0x80_32);
  VertexBufferObject__VertexBufferObject((VertexBufferObject *)&this[1].Radius_km);
  this[1].Rotation._pad_0x0_0 = 0;
  this[1].Rotation._pad_0x4_1 = 0;
  this[1].Rotation._pad_0x8_2 = 0;
  *(undefined4 *)&this[1].Rotation.AxialTilt_degrees = 0;
  *(undefined4 *)((int)&this[1].Rotation.AxialTilt_degrees + 4) = 0;
  *(undefined4 *)&this[1].Rotation.SiderealRotationPeriod_s = 0;
  *(undefined4 *)((int)&this[1].Rotation.SiderealRotationPeriod_s + 4) = 0;
  this[1].RingSystem.Data._pad_0x0_0 = 0;
  this[1].RingSystem.Data._pad_0x4_1 = 0;
  this[1].RingSystem.Data._pad_0x8_2 = 0;
  *(undefined4 *)&((*(undefined4 *)((char *)&(this[1].RingSystem.Data) + 0xc))) = 0;
  *(undefined1 *)&this[1].RingSystem.Data.Radius_km = 0;
  this[1].RingSystem.Data.DiffuseTexture._pad_0x0_0 = 0;
  this[1].RingSystem.Data.DiffuseTexture.TextureSize.X = 0;
  *(undefined1 *)&this[1].RingSystem.Data.DiffuseTexture.TextureSize.Y = 0;
  *(undefined2 *)&this[1].RingSystem.Data.DiffuseTexture.Type = Type__TwoDimensional;
  this[1].RingSystem.Data.AlphaTexture._pad_0x0_0 = 0;
  this[1].RingSystem.Data.AlphaTexture.TextureSize.X = 0;
  *(undefined1 *)&this[1].RingSystem.Data.AlphaTexture.TextureSize.Y = 0;
  pCVar1 = this + 1;
  (pCVar1->RingSystem).Data.AlphaTexture.Type = Type__TwoDimensional;
  (pCVar1->RingSystem).Data.AlphaTexture.IsTextureMipmapped = false;
  *(undefined3 *)&(*(undefined3 *)((char *)&((pCVar1->RingSystem).Data.AlphaTexture) + 0x15)) = 0;
  this[1].RingSystem.IsValidData = false;
  *(undefined1 *)&this[1].Atmosphere.Data._pad_0x0_0 = 0;
  *(undefined8 *)&this[1].Atmosphere.Data._pad_0x8_2 = 0;
  *(undefined1 *)&this[1].Atmosphere.Data.SurfacePressure_Pa = 0;
  *(undefined1 *)&this[1].Atmosphere.Data.Composition._pad_0x0_0 = 0;
  return this;
}

//==== 00717400 ChemicalMakeupReflectionConstructor ====

/* public:  ChemicalMakeupReflectionConstructor__ChemicalMakeupReflectionConstructor(void)
    */

ChemicalMakeupReflectionConstructor * 
ChemicalMakeupReflectionConstructor__ChemicalMakeupReflectionConstructor
          (ChemicalMakeupReflectionConstructor *this)

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
  
  util__Str_char___Str_char(&local_20,"ChemicalMakeup");
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
  util__Str_char___Str_char(&local_14,"Chemical");
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
  util__Str_char___Str_char(&local_14,"Percentage");
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
  util__Str_char___Str_char(&local_14,"Material*");
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
            (this_00,pSVar4,pDVar5,pDVar6,pDVar7, (_func_void_ptr_uint *)(uintptr_t)pcVar8,(_func_void_void_ptr *)pcVar9,(_func_void_void_ptr *)pcVar10,(_func_void_void_ptr_void_ptr *)pcVar11);
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

//==== 007176d0 NonSphericalRadiiReflectionConstructor ====

/* public: 
   NonSphericalRadiiReflectionConstructor__NonSphericalRadiiReflectionConstructor(void) */

NonSphericalRadiiReflectionConstructor * 
NonSphericalRadiiReflectionConstructor__NonSphericalRadiiReflectionConstructor
          (NonSphericalRadiiReflectionConstructor *this)

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
  
  util__Str_char___Str_char(&local_20,"NonSphericalRadii");
  local_30._pad_0x0_0 = (int)&vftable_6;
  local_30.Data = (uint *)0x0;
  local_30.Size = 0;
  local_30.Capacity = 3;
  local_30.Data = (uint *)(uintptr_t)(port_op_new(0xc));
  iVar1 = local_30.Size;
  if (local_30.Data == (uint *)0x0) {
    local_30.Data = (uint *)0x0;
  }
  else {
    local_30.Data[0] = 0;
    local_30.Data[1] = 0;
    local_30.Data[2] = 0;
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
  iVar1 = local_30.Size;
  if (bVar2) {
    local_30.Data[local_30.Size + -1] = 8;
  }
  local_8 = local_30.Size + 1;
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)&local_30,&local_8);
  bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)&local_30,iVar1);
  if (bVar2) {
    local_30.Data[local_30.Size + -1] = 0x10;
  }
  local_50._pad_0x0_0 = 0;
  local_50.Data = (Str_L_char_G_ *)0x0;
  local_50.Size = 0;
  local_50.Capacity = 0;
  util__Darray_L_util__Str_L_char_G___G___Darray_L_util__Str_L_char_G___G_(&local_50,3);
  util__Str_char___Str_char(&local_14,"X_km");
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
  util__Str_char___Str_char(&local_14,"Y_km");
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
  util__Str_char___Str_char(&local_14,"Z_km");
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
  util__Darray_L_util__Str_L_char_G___G___Darray_L_util__Str_L_char_G___G_(&local_40,3);
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
  pcVar11 = (long long int (*)())(NonSphericalRadii__CopyUntypedTuple);
  pcVar10 = (long long int (*)())(NonSphericalRadii__ClearUntypedTuple);
  pcVar9 = (long long int (*)())(ChemicalMakeup__DestroyArray);
  pcVar8 = (long long int (*)())(NonSphericalRadii__AllocateArray);
  pDVar7 = &local_30;
  pDVar6 = &local_50;
  pDVar5 = &local_40;
  pSVar4 = &local_20;
  this_00 = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterTuple
            (this_00,pSVar4,pDVar5,pDVar6,pDVar7, (_func_void_ptr_uint *)(uintptr_t)pcVar8,(_func_void_void_ptr *)pcVar9,(_func_void_void_ptr *)pcVar10,(_func_void_void_ptr_void_ptr *)pcVar11);
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

//==== 00717a90 CelestialBody_00717a90 ====

/* public: virtual __thiscall CelestialBody___CelestialBody(void) */

void __thiscall CelestialBody___CelestialBody(CelestialBody *this)

{
  void *pvVar1;
  ReferenceController *this_00;
  CelestialBody *pCVar2;
  
  pvVar1 = (void *)this[1].Rotation._pad_0x0_0;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    this[1].Rotation._pad_0x0_0 = 0;
  }
  pvVar1 = *(void **)((int)&this[1].Orbit.Data.Elements.MeanAnomaly_degrees + 4);
  *(undefined ***)&this[1].Orbit.Data.Elements.MeanAnomaly_degrees =
       &vftable_8;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
  }
  *(undefined4 *)((int)&this[1].Orbit.Data.Elements.MeanAnomaly_degrees + 4) = 0;
  *(undefined ***)&this[1].Orbit.Data.Elements.MeanAnomaly_degrees = (undefined **)(&vftable);
  VertexBufferObjectInterface___VertexBufferObjectInterface((VertexBufferObjectInterface *)&this[1].Radius_km);
  pvVar1 = (void *)this[1].CelestialBodyMemoizationHandlerInstance.ResetFunctions.Capacity;
  this[1].CelestialBodyMemoizationHandlerInstance.ResetFunctions.Size =
       (int)&vftable_8;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
  }
  this[1].CelestialBodyMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
  this[1].CelestialBodyMemoizationHandlerInstance.ResetFunctions.Size =
       (int)&vftable;
  VertexBufferObjectInterface___VertexBufferObjectInterface((VertexBufferObjectInterface *)&(this->HiResModel)._pad_0x80_32);
  this_00 = (ReferenceController *)(this->HiResModel)._pad_0x7c_31;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  (this->HiResModel)._pad_0x40_16 = (int)&vftable_432;
  CubeMap__Destroy((Type__CubeMap *)&(this->HiResModel)._pad_0x40_16);
  GraphicsResourceInterface___GraphicsResourceInterface((GraphicsResourceInterface *)&(this->HiResModel)._pad_0x40_16);
  (this->HiResModel)._pad_0x8_2 = (int)&vftable_432;
  CubeMap__Destroy((Type__CubeMap *)&(this->HiResModel)._pad_0x8_2);
  GraphicsResourceInterface___GraphicsResourceInterface((GraphicsResourceInterface *)&(this->HiResModel)._pad_0x8_2);
  (this->Model)._pad_0x70_28 = (int)&vftable_432;
  CubeMap__Destroy((Type__CubeMap *)&(this->Model)._pad_0x70_28);
  GraphicsResourceInterface___GraphicsResourceInterface((GraphicsResourceInterface *)&(this->Model)._pad_0x70_28);
  (this->Model)._pad_0x38_14 = (int)&vftable_432;
  CubeMap__Destroy((Type__CubeMap *)&(this->Model)._pad_0x38_14);
  GraphicsResourceInterface___GraphicsResourceInterface((GraphicsResourceInterface *)&(this->Model)._pad_0x38_14);
  pvVar1 = (void *)(this->Model)._pad_0x24_9;
  (this->Model)._pad_0x20_8 = (int)&vftable_435;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
  }
  (this->Model)._pad_0x24_9 = 0;
  (this->Model)._pad_0x20_8 = (int)&vftable;
  (this->Model)._pad_0x8_2 = (int)&vftable_5;
  pvVar1 = (void *)(this->Model)._pad_0xc_3;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->Model)._pad_0xc_3 = 0;
  }
  (this->NormalCubeTexture).TextureSize.X = (int)&vftable_141;
  CustomTexture__Destroy((CustomTexture *)&(this->NormalCubeTexture).TextureSize);
  GraphicsResourceInterface___GraphicsResourceInterface((GraphicsResourceInterface *)&(this->NormalCubeTexture).TextureSize);
  *(undefined ** *)&(*(undefined1 *)((char *)&((this->Atmosphere).Data) + 0xc)) = &vftable_141;
  CustomTexture__Destroy((CustomTexture *)&(*(undefined1 *)((char *)&((this->Atmosphere).Data) + 0xc)));
  GraphicsResourceInterface___GraphicsResourceInterface((GraphicsResourceInterface *)&(*(undefined1 *)((char *)&((this->Atmosphere).Data) + 0xc)));
  (this->RingSystem).Data.AlphaTexture.TextureSize.Y = (int)&vftable_5;
  pvVar1 = (void *)(this->RingSystem).Data.AlphaTexture.Texture;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->RingSystem).Data.AlphaTexture.Texture = 0;
  }
  (this->RingSystem).Data.DiffuseTexture._pad_0x0_0 = (int)&vftable_5;
  pvVar1 = (void *)(this->RingSystem).Data.DiffuseTexture.TextureSize.X;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->RingSystem).Data.DiffuseTexture.TextureSize.X = 0;
  }
*(uint32_t *)&((this->Orbit).Data.Elements.ArgumentOfPeriapsis_degrees) = (uint32_t)(uintptr_t)(&vftable_5);
  pvVar1 = *(void **)((int)&(this->Orbit).Data.Elements.ArgumentOfPeriapsis_degrees + 4);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    *(undefined4 *)((int)&(this->Orbit).Data.Elements.ArgumentOfPeriapsis_degrees + 4) = 0;
  }
  *(undefined ** *)&(this->Orbit).Data.Elements.Eccentricity = &vftable_5;
  pvVar1 = *(void **)((int)&(this->Orbit).Data.Elements.Eccentricity + 4);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    *(undefined4 *)((int)&(this->Orbit).Data.Elements.Eccentricity + 4) = 0;
  }
  pCVar2 = (this->Orbit).Data.ParentBody;
  if (pCVar2 != (CelestialBody *)0x0) {
    port_op_delete(pCVar2);
    (this->Orbit).Data.ParentBody = (CelestialBody *)0x0;
  }
  pvVar1 = *(void * *)&(this->Radii_km).Y_km;
  *(undefined ***)((int)&(this->Radii_km).X_km + 4) = (undefined **)(&vftable_2);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
  }
  *(undefined4 *)&(this->Radii_km).Y_km = 0;
  *(undefined ***)((int)&(this->Radii_km).X_km + 4) = (undefined **)(&vftable);
  if (*(void **)&this->Mass_kg != (void *)0x0) {
    port_op_delete(*(void **)&this->Mass_kg);
    *(undefined4 *)&this->Mass_kg = 0;
  }
  pvVar1 = (void *)(this->CelestialBodyMemoizationHandlerInstance).ResetFunctions._pad_0x0_0;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->CelestialBodyMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 = 0;
  }
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  return;
}

//==== 007186d0 scalar_deleting_destructor_007186d0 ====


/* public: virtual void * __thiscall util__Darray_L_structChemicalMakeup_G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_ChemicalMakeup____scalar_deleting_destructor
          (Darray_L_struct_ChemicalMakeup_G_ *this,uint param_1)

{
  *(undefined ***)this = &vftable_435;
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





//==== 00718720 scalar_deleting_destructor_00718720 ====

/* public: virtual void * __thiscall CelestialAtmosphere:: 0 scalardeletingdestructor(unsigned int)
    */

void * __thiscall
CelestialAtmosphere___scalar_deleting_destructor(CelestialAtmosphere *this,uint param_1)

{
  ChemicalMakeup *pCVar1;
  
  pCVar1 = (this->Composition).Data;
  (this->Composition)._pad_0x0_0 = (int)&vftable_435;
  if (pCVar1 != (ChemicalMakeup *)0x0) {
    port_op_delete(pCVar1);
  }
  (this->Composition).Data = (ChemicalMakeup *)0x0;
  (this->Composition)._pad_0x0_0 = (int)&vftable;
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x28);
  }
  return this;
}

//==== 00718780 scalar_deleting_destructor_00718780 ====


/* public: virtual void * __thiscall CelestialBody:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall CelestialBody___scalar_deleting_destructor(CelestialBody *this,uint param_1)

{
  CelestialBody___CelestialBody(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x4b0);
  }
  return this;
}





//==== 007187b0 scalar_deleting_destructor_007187b0 ====

/* public: virtual void * __thiscall CelestialRing:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall CelestialRing___scalar_deleting_destructor(CelestialRing *this,uint param_1)

{
  this[1].DiffuseTexture._pad_0x0_0 = (int)&vftable_141;
  CustomTexture__Destroy(&this[1].DiffuseTexture);
  GraphicsResourceInterface___GraphicsResourceInterface((GraphicsResourceInterface *)&this[1].DiffuseTexture);
  (this->DiffuseTexture).Texture = (uint)&vftable_141;
  CustomTexture__Destroy((CustomTexture *)&(this->DiffuseTexture).Texture);
  GraphicsResourceInterface___GraphicsResourceInterface((GraphicsResourceInterface *)&(this->DiffuseTexture).Texture);
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0xa0);
  }
  return this;
}

//==== 00718820 scalar_deleting_destructor_00718820 ====

/* public: virtual void * __thiscall Type__CubeMap:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall CubeMap___scalar_deleting_destructor(Type__CubeMap *this,uint param_1)

{
  ((struct CubeMap *)(uintptr_t)(this))->_pad_0x0_0 = (int)&vftable_432;
  Destroy(this);
  GraphicsResourceInterface___GraphicsResourceInterface((GraphicsResourceInterface *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x38);
  }
  return this;
}

//==== 00718850 AllocateArray_00718850 ====


/* public: static void * __cdecl NonSphericalRadii__AllocateArray(unsigned int) */

void * __cdecl NonSphericalRadii__AllocateArray(uint)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  pvVar1 = (void *)(uintptr_t)(port_op_new(-(uint)((int)((ulonglong)param_1 * 0x18 >> 0x20) != 0) |
                          (uint)((ulonglong)param_1 * 0x18)));
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else if (param_1 != 0) {
    puVar2 = (undefined8 *)((int)pvVar1 + 0x10);
    do {
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + -2) = 0;
      *(undefined4 *)((int)puVar2 + -0xc) = 0;
      *(undefined4 *)(puVar2 + -1) = 0;
      *(undefined4 *)((int)puVar2 + -4) = 0;
      param_1 = param_1 - 1;
      puVar2 = puVar2 + 3;
    } while (param_1 != 0);
    return pvVar1;
  }
  return pvVar1;
}





//==== 007188a0 AreRingsVisible ====

/* public: bool __thiscall CelestialBody__AreRingsVisible(void)const  */

bool __thiscall CelestialBody__AreRingsVisible(CelestialBody *this)

{
  bool bVar1;
  
  if ((char)(this->Model)._pad_0x0_0 != '\0') {
    bVar1 = CustomTexture__IsInitialized((CustomTexture *)&(*(undefined1 *)((char *)&((this->Atmosphere).Data) + 0xc)));
    if (bVar1) {
      if ((char)(this->Model)._pad_0x0_0 == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      bVar1 = CustomTexture__IsInitialized((CustomTexture *)&(this->NormalCubeTexture).TextureSize);
      if (bVar1) {
        return true;
      }
    }
  }
  return false;
}

//==== 00718900 CanSupportOrbits ====

/* public: bool __thiscall CelestialBody__CanSupportOrbits(void)const  */

bool __thiscall CelestialBody__CanSupportOrbits(CelestialBody *this)

{
  if ((char)((this->RingSystem).Data.Radius_km != '\0')){
    GetStabilityRegionRadius_km_Memoize(this);
    if ((char)this[1].Atmosphere.Data._pad_0x0_0 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if (this[1].RingSystem.IsValidData == false) {
      return false;
    }
  }
  return true;
}

//==== 00718950 Clear_00718950 ====


/* public: virtual void  util__Darray_L_structChemicalMakeup_G___Clear(void) */

void __thiscall util__Darray_struct_ChemicalMakeup___Clear(Darray_L_struct_ChemicalMakeup_G_ *this)

{
  undefined4 *puVar1;
  undefined4 uStack_10;
  
  if (((0 < *(int *)(this + 8)) &&
      (puVar1 = *(undefined4 **)(this + 4), puVar1 != (undefined4 *)0x0)) &&
     (puVar1 != puVar1 + *(int *)(this + 8) * 4)) {
    do {
      *puVar1 = 0;
      puVar1[1] = uStack_10;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1 = puVar1 + 4;
    } while (puVar1 != (undefined4 *)(*(int *)(this + 8) * 0x10 + *(int *)(this + 4)));
  }
  *(undefined4 *)(this + 8) = 0;
  return;
}





//==== 007189a0 ClearUntypedTuple_007189a0 ====


/* public: static void __cdecl NonSphericalRadii__ClearUntypedTuple(void *) */

void __cdecl NonSphericalRadii__ClearUntypedTuple(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((int)param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 8) = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined8 *)((int)param_1 + 0x10) = 0;
  return;
}





//==== 007189c0 CopyUntypedTuple_007189c0 ====


/* public: static void __cdecl NonSphericalRadii__CopyUntypedTuple(void *,void *) */

void __cdecl NonSphericalRadii__CopyUntypedTuple(void *param_1,void *param_2)

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
  *(undefined8 *)((int)param_1 + 0x10) = *(undefined8 *)((int)param_2 + 0x10);
  return;
}





//==== 007189e0 DememoizeAll_007189e0 ====


/* public: virtual void __thiscall CelestialBody__DememoizeAll(void)const  */

void __thiscall CelestialBody__DememoizeAll(CelestialBody *this)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  undefined4 *puVar2;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iStack_c = 0;
  iVar1 = (**(code **)(*(int *)((int)&(this->Radii_km).X_km + 4) + 0xc))();
  if (iStack_c < iVar1) {
    do {
      puVar2 = (undefined4 *)
               (*(code *)**(undefined4 **)((int)&(this->Radii_km).X_km + 4))(&iStack_c);
      (*(code *)*puVar2)();
      iStack_c = iStack_c + 1;
      iVar1 = (**(code **)(*(int *)((int)&(this->Radii_km).X_km + 4) + 0xc))();
    } while (iStack_c < iVar1);
  }
  (**(code **)(*(int *)((int)&(this->Radii_km).X_km + 4) + 0x10))();
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00718a50 EnsureGenerated ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall CelestialBody__EnsureGenerated(void) */

void __thiscall CelestialBody__EnsureGenerated(CelestialBody *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  VertexBufferObject *pVVar2;
  TransformStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  GenerateModels(this);
  pVVar2 = (VertexBufferObject *)(uintptr_t)(GetPlanetModel());
  bVar1 = VertexBufferObjectInterface__IsGenerated((VertexBufferObjectInterface *)pVVar2);
  if (!bVar1) {
    Graphics__TransformStack__TransformStack(&local_9,GraphicsTransformFlag__ClearToIdentity);
    FillTessellatedSphere(1.0,3,pVVar2);
    VertexBufferObjectInterface__Generate((VertexBufferObjectInterface *)pVVar2);
    Graphics__TransformStack___TransformStack(&local_9);
  }
  pVVar2 = (VertexBufferObject *)(uintptr_t)(GetHighResPlanetModel());
  bVar1 = VertexBufferObjectInterface__IsGenerated((VertexBufferObjectInterface *)pVVar2);
  if (!bVar1) {
    Graphics__TransformStack__TransformStack(&local_9,GraphicsTransformFlag__ClearToIdentity);
    FillTessellatedSphere(1.0,4,pVVar2);
    VertexBufferObjectInterface__Generate((VertexBufferObjectInterface *)pVVar2);
    Graphics__TransformStack___TransformStack(&local_9);
  }
  if ((char)this[1].Atmosphere.Data.Composition._pad_0x0_0 == '\0') {
    GenerateModels(this);
  }
  return;
}

//==== 007192b0 GetAbsoluteAxialTilt_radians ====


/* public: double __thiscall CelestialBody__GetAbsoluteAxialTilt_radians(void)const  */

double __thiscall CelestialBody__GetAbsoluteAxialTilt_radians(CelestialBody *this)

{
  double dVar1;
  
  if ((char)((this->RingSystem).Data.Radius_km != '\0')){
    dVar1 = GetAbsoluteAxialTilt_radians
                      (*(CelestialBody **)
                        &(this->Orbit).Data.Elements.LongitudeOfAscendingNode_degrees);
    return *(double *)&(this->RingSystem).Data.DiffuseTexture.Type * 0.017453292519943295 + dVar1;
  }
  return (double)((this->RingSystem).Data.DiffuseTexture.Type * 0.017453292519943295 + 0.0);
}





//==== 007193f0 GetAverageDistanceToIlluminator_km ====


/* public: double __thiscall CelestialBody__GetAverageDistanceToIlluminator_km(void)const  */

double __thiscall CelestialBody__GetAverageDistanceToIlluminator_km(CelestialBody *this)

{
  int iVar1;
  bool bVar2;
  double dVar3;
  void *pvStack_d8;
  void *pvStack_c0;
  void *pvStack_70;
  void *pvStack_58;
  
  bVar2 = false;
  iVar1 = GetOrbitAroundIlluminator(this);
  if (*(char *)(iVar1 + 0x60) == '\0') {
    dVar3 = 0.0;
  }
  else {
    iVar1 = GetOrbitAroundIlluminator(this);
    if (*(char *)(iVar1 + 0x60) == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar3 = *(double *)(iVar1 + 0x30);
    bVar2 = true;
  }
  if (bVar2) {
    if (pvStack_58 != (void *)0x0) {
      port_op_delete(pvStack_58);
    }
    if (pvStack_70 != (void *)0x0) {
      port_op_delete(pvStack_70);
    }
  }
  if (pvStack_c0 != (void *)0x0) {
    port_op_delete(pvStack_c0);
  }
  if (pvStack_d8 != (void *)0x0) {
    port_op_delete(pvStack_d8);
  }
  return dVar3;
}





//==== 007194f0 GetAverageIrradianceFromIlluminator_W__m2 ====

/* public: double __thiscall CelestialBody__GetAverageIrradianceFromIlluminator_W__m2(void)const  */

double __thiscall CelestialBody__GetAverageIrradianceFromIlluminator_W__m2(CelestialBody *this)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  CelestialBody *pCVar6;
  double dVar7;
  double dVar8;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  double local_3c;
  double local_34;
  undefined8 local_2c;
  undefined8 local_1c;
  undefined8 uStack_14;
  undefined8 local_c;
  
  pCVar6 = (CelestialBody *)(uintptr_t)(GetIlluminatorBody(this));
  if (pCVar6 == (CelestialBody *)0x0) {
    return 0.0;
  }
  pCVar6 = (CelestialBody *)(uintptr_t)(GetIlluminatorBody(this));
  if ((char)pCVar6[1].RingSystem.Data.DiffuseTexture.TextureSize.Y != '\0') goto LAB_007196e9;
  iVar2 = *(int *)((int)&(pCVar6->Radii_km).Y_km + 4);
  local_2c = (double)CONCAT44(iVar2 + 1,(undefined4)local_2c);
  util__Darray_L_util__Reflectable_P_G___SetSize
            ((Darray_L_util__Reflectable_P_G_ *)((int)&(pCVar6->Radii_km).X_km + 4),
             (int *)((int)&local_2c + 4));
  bVar4 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)((int)&(pCVar6->Radii_km).X_km + 4),iVar2);
  if (bVar4) {
    *(code **)((int)((pCVar6->Radii_km).Y_km + -4 +
              *(int *)((int)&(pCVar6->Radii_km).Y_km + 4) * 4) )= (long long int (*)())(GetLuminosity_W_Clear);
  }
  (uint32_t)(local_34 = *(double *)&(pCVar6->Orbit).Data.Elements._pad_0x8_2);
  if (local_34 <= 0.0) {
    dVar7 = GetAverageDistanceToIlluminator_km(pCVar6);
    *(uint32_t *)&local_34 = GetSurfaceTemperature_K(pCVar6,dVar7);
  }
  local_3c = pCVar6->Albedo;
  if (((local_3c <= *(double *)&pCVar6->SpectralType) ||
      (local_3c < *(double *)&(pCVar6->Orbit).Data || local_3c == *(double *)&(pCVar6->Orbit).Data))
     || (piVar1 = &(pCVar6->Orbit).Data._pad_0x8_2, local_1c = local_3c, uStack_14 = local_3c,
        local_3c < *(double *)piVar1 || local_3c == *(double *)piVar1)) {
    uStack_14 = *(double *)&(pCVar6->Orbit).Data._pad_0x8_2;
    local_3c = *(double *)&(pCVar6->Orbit).Data;
    *(uint32_t *)&local_1c = *(double *)&pCVar6->SpectralType;
  }
  *(uint32_t *)&local_4c = (undefined4)local_1c;
  uStack_48 = (*(uint32_t*)((char*)&(local_1c)+4));
  uStack_44 = (int)uStack_14;
  uStack_40 = (*(uint32_t*)((char*)&(uStack_14)+4));
  *(uint32_t *)&local_c = local_3c;
  dVar7 = util__Abs((double *)&uStack_44);
  *(uint32_t *)&local_c = util__Abs((double *)&local_4c);
  local_2c = util__Abs(&local_3c);
  if (dVar7 <= local_c) {
    *(uint32_t *)&local_c = util__Abs((double *)&local_4c);
    cVar5 = '\0';
    if (local_c < local_2c) {
      cVar5 = '\x02';
    }
  }
  else {
    *(uint32_t *)&local_c = util__Abs((double *)&uStack_44);
    cVar5 = (local_c < local_2c) + '\x01';
  }
  if (cVar5 == '\0') {
LAB_00719670:
    dVar7 = (double)CONCAT44(uStack_48,local_4c);
  }
  else if (cVar5 == '\x01') {
    dVar7 = (double)CONCAT44(uStack_40,uStack_44);
  }
  else {
    dVar7 = local_3c;
    if (cVar5 != '\x02') goto LAB_00719670;
  }
  dVar8 = Physics__GetBlackbodyRadiation_W
                    (dVar7 * 1000.0 * dVar7 * 1000.0 * 12.566370614359172,1.0,local_34);
  dVar7 = local_c;
  *(uint64_t *)&local_c = (double)CONCAT71((*(uint56_t*)((char*)&(local_c)+1)),1);
  uVar3 = local_c;
  (*(uint32_t*)&(uStack_14)) = SUB84(dVar8,0);
  (*(uint32_t*)((char*)&(uStack_14)+4)) = (int)((ulonglong)dVar8 >> 0x20);
  (*(uint32_t*)((char*)&(local_c)+4)) = SUB84(dVar7,4);
  pCVar6[1].RingSystem.Data.DiffuseTexture._pad_0x0_0 = (int)uStack_14;
  pCVar6[1].RingSystem.Data.DiffuseTexture.TextureSize.X = (*(uint32_t*)((char*)&(uStack_14)+4));
  pCVar6[1].RingSystem.Data.DiffuseTexture.TextureSize.Y = (int)local_c;
  pCVar6[1].RingSystem.Data.DiffuseTexture.Texture = (*(uint32_t*)((char*)&(local_c)+4));
  uStack_14 = dVar8;
  *(uint64_t *)&local_c = (double)uVar3;
  if ((char)pCVar6[1].RingSystem.Data.DiffuseTexture.TextureSize.Y == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
LAB_007196e9:
  dVar7 = GetAverageDistanceToIlluminator_km(this);
  return *(double *)&pCVar6[1].RingSystem.Data.DiffuseTexture /
         (dVar7 * 1000.0 * dVar7 * 1000.0 * 12.566370614359172);
}

//==== 00719740 GetCelestialBodyListing ====


/* public: static class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ __cdecl CelestialBody__GetCelestialBodyListing(class
   util__Darray_L_structCelestialBody_P_G_ const &,bool) */

void __cdecl
CelestialBody__GetCelestialBodyListing(Darray_L_struct_CelestialBody_P_G_ *param_1,bool param_2)

{
  undefined8 stack0x0000000c;
  undefined8 stack0xfffffffc;
  bool bVar1;
  Darray_L_bool_P_G_ *pDVar2;
  int iVar3;
  int *piVar4;
  undefined3 in_stack_00000009;
  int iStack_48;
  undefined **ppuStack_44;
  undefined8 uStack_40;
  undefined ***pppuStack_38;
  undefined **ppuStack_34;
  void *pvStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined **ppuStack_24;
  void *pvStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined1 uStack_11;
  int iStack_10;
  undefined1 auStack_c [4];
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable________Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable
            ((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G___G_
              *)param_1,200);
  auStack_c[0] = 0;
  ppuStack_34 = (undefined **)0x0;
  pvStack_30 = (void *)0x0;
  uStack_2c = 0;
  uStack_28 = 0;
  pDVar2 = (Darray_L_bool_P_G_ *)FUN_00716f50(&ppuStack_44,_param_2,auStack_c);
  util__Darray_bool____Darray_bool((Darray_L_bool_P_G_ *)&ppuStack_34,pDVar2);
  ppuStack_44 = (undefined **)(&vftable_2);
  if ((void *)uStack_40 != (void *)0x0) {
    port_op_delete((void *)uStack_40);
  }
  auStack_c[0] = 0;
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
      piVar4 = (int *)(*(code *)*ppuStack_34)(&iStack_10);
      iVar3 = iStack_1c;
      if (*(char *)(*piVar4 + 0xf8) == '\0') {
        iStack_48 = iStack_1c + 1;
        util__Darray_class_util__Reflectable____SetSize
                  ((Darray_L_class_util__Reflectable_P_G_ *)&ppuStack_24,&iStack_48);
        bVar1 = util__Darray_enum_GraphicsResource__Type___CheckSize
                          ((Darray_L_enum_GraphicsResource__Type_G_ *)&ppuStack_24,iVar3);
        if (bVar1) {
          *(int *)((int)pvStack_20 + iStack_1c * 4 + -4) = *piVar4;
        }
      }
      iStack_10 = iStack_10 + 1;
      iVar3 = (*(code *)ppuStack_34[3])();
    } while (iStack_10 < iVar3);
  }
  uStack_40 = CONCAT44(&stack0x0000000c,&ppuStack_34);
  FUN_00716ba0(&ppuStack_24,uStack_40,param_1);
  uStack_40 = CONCAT44(param_1,&uStack_11);
  pppuStack_38 = &ppuStack_34;
  uStack_11 = 1 < iStack_1c;
  iStack_10 = 0;
  iVar3 = (*(code *)ppuStack_24[3])();
  if (iStack_10 < iVar3) {
    do {
      (*(code *)*ppuStack_24)(&iStack_10);
      FUN_00717e80();
      iStack_10 = iStack_10 + 1;
      iVar3 = (*(code *)ppuStack_24[3])();
    } while (iStack_10 < iVar3);
  }
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
  return;
}





//==== 00719910 GetCustomModelFileNames_00719910 ====

/* public: virtual class util__Darray_L_classutil__Str_L_char_G__G_ __thiscall
   CelestialBody__GetCustomModelFileNames(void)const  */

Darray_L_util__Str_L_char_G___G_ * __thiscall
CelestialBody__GetCustomModelFileNames
          (CelestialBody *this,Darray_L_util__Str_L_char_G___G_ *__return_storage_ptr__)

{
  bool bVar1;
  int iVar2;
  Str_L_char_G_ local_14;
  int local_8;
  
  iVar2 = 4;
  local_14.Length = 0;
  if ((this->Orbit).Data.Elements._pad_0x0_0 != 0) {
    iVar2 = 0x70;
  }
  local_14.Data = (char *)0x0;
  local_14.Capacity = 0;
  util__Str_char___Str_char(&local_14,(Str_L_char_G_ *)((int)&this->_pad_0x0_0 + iVar2));
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (Str_L_char_G_ *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  util__Darray_L_util__Str_L_char_G___G___Darray_L_util__Str_L_char_G___G_(__return_storage_ptr__,1);
  iVar2 = __return_storage_ptr__->Size;
  local_8 = iVar2 + 1;
  util__Darray_L_util__Str_L_char_G___G___SetSize(__return_storage_ptr__,&local_8);
  bVar1 = util__Darray_L_util__Str_L_char_G___G___CheckSize(__return_storage_ptr__,iVar2);
  if (bVar1) {
    util__Str_char___operator__o8
              (__return_storage_ptr__->Data + __return_storage_ptr__->Size + -1,&local_14);
  }
  if (local_14.Data != (char *)0x0) {
    port_op_delete(local_14.Data);
  }
  return __return_storage_ptr__;
}

//==== 007199b0 GetCustomTextureFileNames ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual class util__Darray_L_classutil__Str_L_char_G__G_ __thiscall
   CelestialBody__GetCustomTextureFileNames(void)const  */

Darray_L_util__Str_L_char_G___G_ * __thiscall
CelestialBody__GetCustomTextureFileNames
          (CelestialBody *this,Darray_L_util__Str_L_char_G___G_ *__return_storage_ptr__)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  int iVar2;
  Str_L_char_G_ local_3c;
  Str_L_char_G_ local_30;
  Str_L_char_G_ local_24;
  int local_18;
  Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_3c.Length = 0;
  iVar2 = 4;
  if ((this->Orbit).Data.Elements._pad_0x0_0 != 0) {
    iVar2 = 0x70;
  }
  local_3c.Data = (char *)0x0;
  local_3c.Capacity = 0;
  util__Str_char___Str_char(&local_3c,(Str_L_char_G_ *)((int)&this->_pad_0x0_0 + iVar2));
  local_18 = 1;
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (Str_L_char_G_ *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_4;
  __return_storage_ptr__->Data = (Str_L_char_G_ *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  util__Darray_L_util__Str_L_char_G___G___SetSize(__return_storage_ptr__,&local_18);
  bVar1 = util__Darray_L_util__Str_L_char_G___G___CheckSize(__return_storage_ptr__,0);
  if (bVar1) {
    util__Str_char___operator__o8
              (__return_storage_ptr__->Data + __return_storage_ptr__->Size + -1,&local_3c);
  }
  util__Str_char___Str_char(&local_30,"_height");
  local_14.Length = 0;
  local_14.Data = (char *)0x0;
  local_14.Capacity = 0;
  util__Str_char___Str_char(&local_14,&local_3c);
  util__Str_char___operator__o10(&local_14,&local_30);
  util__Str_char___Str_char(&local_24,&local_14);
  if (local_14.Data != (char *)0x0) {
    port_op_delete(local_14.Data);
    (*(uint64_t*)&(local_14)) = (*(uint64_t*)&(local_14)) & 0xffffffff00000000;
  }
  iVar2 = __return_storage_ptr__->Size;
  local_18 = iVar2 + 1;
  util__Darray_L_util__Str_L_char_G___G___SetSize(__return_storage_ptr__,&local_18);
  bVar1 = util__Darray_L_util__Str_L_char_G___G___CheckSize(__return_storage_ptr__,iVar2);
  if (bVar1) {
    util__Str_char___operator__o8
              (__return_storage_ptr__->Data + __return_storage_ptr__->Size + -1,&local_24);
  }
  if (local_24.Data != (char *)0x0) {
    port_op_delete(local_24.Data);
  }
  if (local_30.Data != (char *)0x0) {
    port_op_delete(local_30.Data);
  }
  util__Str_char___Str_char(&local_24,"_normal");
  local_14.Length = 0;
  local_14.Data = (char *)0x0;
  local_14.Capacity = 0;
  util__Str_char___Str_char(&local_14,&local_3c);
  util__Str_char___operator__o10(&local_14,&local_24);
  util__Str_char___Str_char(&local_30,&local_14);
  if (local_14.Data != (char *)0x0) {
    port_op_delete(local_14.Data);
    (*(uint64_t*)&(local_14)) = (*(uint64_t*)&(local_14)) & 0xffffffff00000000;
  }
  iVar2 = __return_storage_ptr__->Size;
  local_18 = iVar2 + 1;
  util__Darray_L_util__Str_L_char_G___G___SetSize(__return_storage_ptr__,&local_18);
  bVar1 = util__Darray_L_util__Str_L_char_G___G___CheckSize(__return_storage_ptr__,iVar2);
  if (bVar1) {
    util__Str_char___operator__o8
              (__return_storage_ptr__->Data + __return_storage_ptr__->Size + -1,&local_30);
  }
  if (local_30.Data != (char *)0x0) {
    port_op_delete(local_30.Data);
  }
  if (local_24.Data != (char *)0x0) {
    port_op_delete(local_24.Data);
  }
  util__Str_char___Str_char(&local_24,"_specular");
  local_14.Length = 0;
  local_14.Data = (char *)0x0;
  local_14.Capacity = 0;
  util__Str_char___Str_char(&local_14,&local_3c);
  util__Str_char___operator__o10(&local_14,&local_24);
  util__Str_char___Str_char(&local_30,&local_14);
  if (local_14.Data != (char *)0x0) {
    port_op_delete(local_14.Data);
    (*(uint64_t*)&(local_14)) = (*(uint64_t*)&(local_14)) & 0xffffffff00000000;
  }
  iVar2 = __return_storage_ptr__->Size;
  local_18 = iVar2 + 1;
  util__Darray_L_util__Str_L_char_G___G___SetSize(__return_storage_ptr__,&local_18);
  bVar1 = util__Darray_L_util__Str_L_char_G___G___CheckSize(__return_storage_ptr__,iVar2);
  if (bVar1) {
    util__Str_char___operator__o8
              (__return_storage_ptr__->Data + __return_storage_ptr__->Size + -1,&local_30);
  }
  if (local_30.Data != (char *)0x0) {
    port_op_delete(local_30.Data);
  }
  if (local_24.Data != (char *)0x0) {
    port_op_delete(local_24.Data);
  }
  if ((char)(this->Model)._pad_0x0_0 != '\0') {
    util__Str_char___Str_char(&local_24,"_rings");
    local_14.Length = 0;
    local_14.Data = (char *)0x0;
    local_14.Capacity = 0;
    util__Str_char___Str_char(&local_14,&local_3c);
    util__Str_char___operator__o10(&local_14,&local_24);
    util__Str_char___Str_char(&local_30,&local_14);
    if (local_14.Data != (char *)0x0) {
      port_op_delete(local_14.Data);
      (*(uint64_t*)&(local_14)) = (*(uint64_t*)&(local_14)) & 0xffffffff00000000;
    }
    iVar2 = __return_storage_ptr__->Size;
    local_18 = iVar2 + 1;
    util__Darray_L_util__Str_L_char_G___G___SetSize(__return_storage_ptr__,&local_18);
    bVar1 = util__Darray_L_util__Str_L_char_G___G___CheckSize(__return_storage_ptr__,iVar2);
    if (bVar1) {
      util__Str_char___operator__o8
                (__return_storage_ptr__->Data + __return_storage_ptr__->Size + -1,&local_30);
    }
    if (local_30.Data != (char *)0x0) {
      port_op_delete(local_30.Data);
    }
    if (local_24.Data != (char *)0x0) {
      port_op_delete(local_24.Data);
    }
    util__Str_char___Str_char(&local_24,"_rings_alpha");
    local_14.Length = 0;
    local_14.Data = (char *)0x0;
    local_14.Capacity = 0;
    util__Str_char___Str_char(&local_14,&local_3c);
    util__Str_char___operator__o10(&local_14,&local_24);
    util__Str_char___Str_char(&local_30,&local_14);
    if (local_14.Data != (char *)0x0) {
      port_op_delete(local_14.Data);
      (*(uint64_t*)&(local_14)) = (*(uint64_t*)&(local_14)) & 0xffffffff00000000;
    }
    iVar2 = __return_storage_ptr__->Size;
    local_18 = iVar2 + 1;
    util__Darray_L_util__Str_L_char_G___G___SetSize(__return_storage_ptr__,&local_18);
    bVar1 = util__Darray_L_util__Str_L_char_G___G___CheckSize(__return_storage_ptr__,iVar2);
    if (bVar1) {
      util__Str_char___operator__o8
                (__return_storage_ptr__->Data + __return_storage_ptr__->Size + -1,&local_30);
    }
    if (local_30.Data != (char *)0x0) {
      port_op_delete(local_30.Data);
    }
    if (local_24.Data != (char *)0x0) {
      port_op_delete(local_24.Data);
    }
  }
  if (local_3c.Data != (char *)0x0) {
    port_op_delete(local_3c.Data);
  }
  return __return_storage_ptr__;
}

//==== 00719df0 GetData ====


/* public: double & __thiscall util__Maybe_double___GetData(void) */

double * __thiscall util__Maybe_double___GetData(Maybe_L_double_G_ *this)

{
  if (this->IsValidData == false) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,"IsValid()",
              (char *)0x0);
    DebugBreak();
  }
  return &this->Data;
}





//==== 00719f80 GetHighResPlanetModel ====


/* public: static class VertexBufferObject * __cdecl CelestialBody__GetHighResPlanetModel(void) */

VertexBufferObject * __cdecl CelestialBody__GetHighResPlanetModel(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_00981050) {
    _Init_thread_header(&DAT_00981050);
    if (DAT_00981050 == -1) {
      VertexBufferObject__VertexBufferObject((VertexBufferObject *)&DAT_00980fb0);
      atexit(FUN_009021f0);
      _Init_thread_footer(&DAT_00981050);
    }
  }
  return (VertexBufferObject *)&DAT_00980fb0;
}





//==== 00719fe0 GetHillSphereRadius_km ====

/* public: class util__Maybe_L_double_G_ __thiscall CelestialBody__GetHillSphereRadius_km(void)const  */

Maybe_L_double_G_ * __thiscall
CelestialBody__GetHillSphereRadius_km(CelestialBody *this,Maybe_L_double_G_ *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if ((char)((this->RingSystem).Data.Radius_km != '\0')){
    dVar3 = this->SurfaceTemperature_K /
            (*(double *)
              (*(int *)&(this->Orbit).Data.Elements.LongitudeOfAscendingNode_degrees + 0x48) * 3.0);
    libm_sse2_pow_precise(0.0,0.0);
    dVar1 = *(double *)&(this->Rotation)._pad_0x8_2;
    dVar2 = *(double *)&this->Rotation;
    __return_storage_ptr__->IsValidData = true;
    __return_storage_ptr__->Data = dVar3 * (1.0 - dVar1) * dVar2;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->IsValidData = false;
  __return_storage_ptr__->Data = 0.0;
  return __return_storage_ptr__;
}

//==== 0071a060 GetHumanHabitabilityScore_Clear ====

/* public: void __thiscall CelestialBody__GetHumanHabitabilityScore_Clear(void)const  */

void __thiscall CelestialBody__GetHumanHabitabilityScore_Clear(CelestialBody *this)

{
  *(undefined1 *)&this[1].Atmosphere.Data.SurfacePressure_Pa = 0;
  *(undefined8 *)&this[1].Atmosphere.Data._pad_0x8_2 = 0;
  return;
}

//==== 0071a080 GetHumanHabitabilityScore_MemoizedFunction ====

/* private: double __thiscall CelestialBody__GetHumanHabitabilityScore_MemoizedFunction(void)const
    */

double __thiscall CelestialBody__GetHumanHabitabilityScore_MemoizedFunction(CelestialBody *this)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double local_58;
  double dStack_50;
  
  if ((*(char *)((int)&(this->Orbit).Data.Elements.SemiMajorAxis_km + 4) == 0) &&
     (*(double *)&(this->Orbit).Data.Elements._pad_0x8_2 <= 798.0)) {
    dVar4 = this->Albedo;
    if ((dVar4 <= *(double *)&this->SpectralType) ||
       ((dVar4 < *(double *)&(this->Orbit).Data || dVar4 == *(double *)&(this->Orbit).Data ||
        (piVar1 = &(this->Orbit).Data._pad_0x8_2, local_58 = dVar4, dStack_50 = dVar4,
        dVar4 < *(double *)piVar1 || dVar4 == *(double *)piVar1)))) {
      dVar4 = *(double *)&(this->Orbit).Data;
      local_58 = *(double *)&this->SpectralType;
      dStack_50 = *(double *)&(this->Orbit.Data._pad_0x8_2);
    }
    dVar3 = local_58 * dStack_50;
    libm_sse2_pow_precise(0.0,0.0);
    local_58 = local_58 * dVar4;
    libm_sse2_pow_precise(0.0,0.0);
    dStack_50 = dStack_50 * dVar4;
    libm_sse2_pow_precise(0.0,0.0);
    dVar4 = (dStack_50 + dVar3 + local_58) / 3.0;
    libm_sse2_pow_precise(0.0,0.0);
    if (5.0 <= dVar4 * 12.566370614359172) {
      dVar4 = GetSurfaceGravity_m__s2(this);
      if (dVar4 <= 9.80665) {
        libm_sse2_log_precise(0.0);
        dVar3 = 9.80665;
        libm_sse2_log_precise(0.0);
        dVar5 = 0.2;
        if (0.2 <= dVar4 / dVar3) {
          dVar5 = dVar4 / dVar3;
        }
      }
      else {
        dVar5 = (12.258312499999999 - dVar4) / 2.4516624999999994;
      }
      dVar4 = *(double *)&(this->Orbit).Data.Elements._pad_0x8_2;
      if (dVar5 <= 0.0) {
        dVar5 = 0.0;
      }
      if (1.0 <= dVar5) {
        dVar5 = 1.0;
      }
      if (dVar4 <= 0.0) {
        dVar4 = GetAverageDistanceToIlluminator_km(this);
        dVar4 = GetSurfaceTemperature_K(this,dVar4);
      }
      if (dVar4 <= 293.15) {
        libm_sse2_log_precise(0.0);
        dVar3 = 293.15;
        libm_sse2_log_precise(0.0);
        dVar2 = 0.9;
        if (0.9 <= dVar4 / dVar3) {
          dVar2 = dVar4 / dVar3;
        }
      }
      else {
        dVar2 = (373.0 - dVar4) / 79.85000000000002;
      }
      if (dVar2 <= 0.0) {
        dVar2 = 0.0;
      }
      if (1.0 <= dVar2) {
        dVar2 = 1.0;
      }
      dVar4 = GetAverageIrradianceFromIlluminator_W__m2(this);
      dVar4 = 1362.0 / dVar4;
      if (1.0 < dVar4) {
        libm_sse2_log_precise(0.0);
        dVar4 = 1.0 / (dVar4 + 1.0);
      }
      else {
        dVar4 = 1.0;
      }
      return ((1.0 - dVar4) * 0.5 + dVar4) * dVar2 * dVar5;
    }
  }
  return 0.0;
}

//==== 0071a350 GetIlluminatorBody ====


/* public: struct CelestialBody * __thiscall CelestialBody__GetIlluminatorBody(void)const  */

CelestialBody * __thiscall CelestialBody__GetIlluminatorBody(CelestialBody *this)

{
  int iVar1;
  bool bVar2;
  CelestialBody *pCVar3;
  void *pvStack_d4;
  void *pvStack_bc;
  void *pvStack_6c;
  void *pvStack_54;
  
  bVar2 = false;
  iVar1 = GetOrbitAroundIlluminator(this);
  if (*(char *)(iVar1 + 0x60) == '\0') {
    pCVar3 = (CelestialBody *)0x0;
  }
  else {
    iVar1 = GetOrbitAroundIlluminator(this);
    if (*(char *)(iVar1 + 0x60) == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    pCVar3 = *(CelestialBody **)(iVar1 + 0x10);
    bVar2 = true;
  }
  if (bVar2) {
    if (pvStack_54 != (void *)0x0) {
      port_op_delete(pvStack_54);
    }
    if (pvStack_6c != (void *)0x0) {
      port_op_delete(pvStack_6c);
    }
  }
  if (pvStack_bc != (void *)0x0) {
    port_op_delete(pvStack_bc);
  }
  if (pvStack_d4 != (void *)0x0) {
    port_op_delete(pvStack_d4);
  }
  return pCVar3;
}





//==== 0071a440 GetLuminantIrradiance_W__m2 ====

/* public: double __thiscall CelestialBody__GetLuminantIrradiance_W__m2(void)const  */

double __thiscall CelestialBody__GetLuminantIrradiance_W__m2(CelestialBody *this)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  double dVar6;
  double dVar7;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  double local_54;
  double local_4c;
  undefined8 local_44;
  undefined8 uStack_3c;
  double local_34;
  double local_2c;
  undefined8 uStack_24;
  undefined8 uStack_1c;
  double local_14;
  undefined8 local_c;
  
  if ((double)((this->Orbit).Data.Elements._pad_0x8_2 <= 798.0)){
    return 0.0;
  }
  if ((char)this[1].RingSystem.Data.DiffuseTexture.TextureSize.Y != '\0') goto LAB_0071a639;
  iVar2 = *(int *)((int)&(this->Radii_km).Y_km + 4);
  *(uint32_t *)&local_c = (double)CONCAT44(iVar2 + 1,(undefined4)local_c);
  util__Darray_L_util__Reflectable_P_G___SetSize
            ((Darray_L_util__Reflectable_P_G_ *)((int)&(this->Radii_km).X_km + 4),
             (int *)((int)&local_c + 4));
  bVar4 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)((int)&(this->Radii_km).X_km + 4),iVar2);
  if (bVar4) {
    *(code **)((int)((this->Radii_km).Y_km + -4 + *(int *)((int)&(this->Radii_km).Y_km + 4) * 4)
         )= (long long int (*)())(GetLuminosity_W_Clear);
  }
  local_14 = *(double *)&(this->Orbit).Data.Elements._pad_0x8_2;
  if (local_14 <= 0.0) {
    dVar6 = GetAverageDistanceToIlluminator_km(this);
    local_14 = GetSurfaceTemperature_K(this,dVar6);
  }
  *(uint32_t *)&local_54 = this->Albedo;
  if (((local_54 <= *(double *)&this->SpectralType) ||
      (local_54 < *(double *)&(this->Orbit).Data || local_54 == *(double *)&(this->Orbit).Data)) ||
     (piVar1 = &(this->Orbit).Data._pad_0x8_2, local_44 = local_54, uStack_3c = local_54,
     local_54 < *(double *)piVar1 || local_54 == *(double *)piVar1)) {
    uStack_3c = *(double *)&(this->Orbit).Data._pad_0x8_2;
    (uint32_t)(local_54 = *(double *)&(this->Orbit).Data);
    local_44 = *(double *)&this->SpectralType;
  }
  local_64 = (undefined4)local_44;
  uStack_60 = (*(uint32_t*)((char*)&(local_44)+4));
  uStack_5c = (undefined4)uStack_3c;
  uStack_58 = (*(uint32_t*)((char*)&(uStack_3c)+4));
  memcpy(&local_34, &local_54, 16);
  *(uint32_t *)&local_4c = util__Abs((double *)&uStack_5c);
  uStack_1c = util__Abs((double *)&local_64);
  *(uint32_t *)&local_c = util__Abs(&local_54);
  if (local_4c <= uStack_1c) {
    uStack_1c = util__Abs((double *)&local_64);
    cVar5 = '\0';
    if (uStack_1c < local_c) {
      cVar5 = '\x02';
    }
  }
  else {
    uStack_1c = util__Abs((double *)&uStack_5c);
    cVar5 = (uStack_1c < local_c) + '\x01';
  }
  if (cVar5 == '\0') {
LAB_0071a5c0:
    dVar6 = (double)CONCAT44(uStack_60,local_64);
  }
  else if (cVar5 == '\x01') {
    dVar6 = (double)CONCAT44(uStack_58,uStack_5c);
  }
  else {
    dVar6 = local_54;
    if (cVar5 != '\x02') goto LAB_0071a5c0;
  }
  dVar7 = Physics__GetBlackbodyRadiation_W
                    (dVar6 * 1000.0 * dVar6 * 1000.0 * 12.566370614359172,1.0,local_14);
  dVar6 = uStack_1c;
  uStack_1c = (double)CONCAT71((*(uint56_t*)((char*)&(uStack_1c)+1)),1);
  uVar3 = uStack_1c;
  (*(uint32_t*)&(uStack_24)) = SUB84(dVar7,0);
  (*(uint32_t*)((char*)&(uStack_24)+4)) = (int)((ulonglong)dVar7 >> 0x20);
  (*(uint32_t*)((char*)&(uStack_1c)+4)) = SUB84(dVar6,4);
  this[1].RingSystem.Data.DiffuseTexture._pad_0x0_0 = (int)uStack_24;
  this[1].RingSystem.Data.DiffuseTexture.TextureSize.X = (*(uint32_t*)((char*)&(uStack_24)+4));
  this[1].RingSystem.Data.DiffuseTexture.TextureSize.Y = (int)uStack_1c;
  this[1].RingSystem.Data.DiffuseTexture.Texture = (*(uint32_t*)((char*)&(uStack_1c)+4));
  if ((char)this[1].RingSystem.Data.DiffuseTexture.TextureSize.Y == '\0') {
    uStack_24 = dVar7;
    uStack_1c = (double)uVar3;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
LAB_0071a639:
  *(uint32_t *)&local_34 = this->Albedo;
  if (((local_34 <= *(double *)&this->SpectralType) ||
      (local_34 < *(double *)&(this->Orbit).Data || local_34 == *(double *)&(this->Orbit).Data)) ||
     (piVar1 = &(this->Orbit).Data._pad_0x8_2, local_2c = local_34, uStack_24 = local_34,
     local_34 < *(double *)piVar1 || local_34 == *(double *)piVar1)) {
    uStack_24 = *(double *)&(this->Orbit).Data._pad_0x8_2;
    (uint32_t)(local_34 = *(double *)&(this->Orbit).Data);
    local_2c = *(double *)&this->SpectralType;
  }
  local_44 = local_2c;
  uStack_3c = uStack_24;
  uStack_1c = local_34;
  uStack_1c = util__Abs((double *)&uStack_3c);
  *(uint32_t *)&local_4c = util__Abs((double *)&local_44);
  local_14 = util__Abs(&local_34);
  if (uStack_1c <= local_4c) {
    dVar6 = util__Abs((double *)&local_44);
    cVar5 = '\0';
    if (dVar6 < local_14) {
      cVar5 = '\x02';
    }
  }
  else {
    dVar6 = util__Abs((double *)&uStack_3c);
    cVar5 = (dVar6 < local_14) + '\x01';
  }
  if ((cVar5 == '\0') || ((cVar5 != '\x01' && (uStack_3c = local_34, cVar5 != '\x02')))) {
    uStack_3c = local_44;
  }
  return *(double *)&this[1].RingSystem.Data.DiffuseTexture /
         (uStack_3c * 1000.0 * uStack_3c * 1000.0 * 12.566370614359172);
}

//==== 0071a760 GetLuminosity_W_Clear ====

/* public: void __thiscall CelestialBody__GetLuminosity_W_Clear(void)const  */

void __thiscall CelestialBody__GetLuminosity_W_Clear(CelestialBody *this)

{
  *(undefined1 *)&this[1].RingSystem.Data.DiffuseTexture.TextureSize.Y = 0;
  this[1].RingSystem.Data.DiffuseTexture._pad_0x0_0 = 0;
  this[1].RingSystem.Data.DiffuseTexture.TextureSize.X = 0;
  return;
}

//==== 0071a780 GetLuminosity_W_Memoize ====

/* public: void __thiscall CelestialBody__GetLuminosity_W_Memoize(void)const  */

void __thiscall CelestialBody__GetLuminosity_W_Memoize(CelestialBody *this)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  double dVar5;
  double dVar6;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  double local_34;
  double local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 uStack_14;
  undefined8 local_c;
  
  if ((char)this[1].RingSystem.Data.DiffuseTexture.TextureSize.Y != '\0') {
    return;
  }
  iVar2 = *(int *)((int)&(this->Radii_km).Y_km + 4);
  local_24 = (double)CONCAT44(iVar2 + 1,(undefined4)local_24);
  util__Darray_L_util__Reflectable_P_G___SetSize
            ((Darray_L_util__Reflectable_P_G_ *)((int)&(this->Radii_km).X_km + 4),
             (int *)((int)&local_24 + 4));
  bVar3 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)((int)&(this->Radii_km).X_km + 4),iVar2);
  if (bVar3) {
    *(code **)((int)((this->Radii_km).Y_km + -4 + *(int *)((int)&(this->Radii_km).Y_km + 4) * 4)
         )= (long long int (*)())(GetLuminosity_W_Clear);
  }
  local_2c = *(double *)&(this->Orbit).Data.Elements._pad_0x8_2;
  if (local_2c <= 0.0) {
    dVar5 = GetAverageDistanceToIlluminator_km(this);
    local_2c = GetSurfaceTemperature_K(this,dVar5);
  }
  *(uint32_t *)&local_34 = this->Albedo;
  if (((local_34 <= *(double *)&this->SpectralType) ||
      (local_34 < *(double *)&(this->Orbit).Data || local_34 == *(double *)&(this->Orbit).Data)) ||
     (piVar1 = &(this->Orbit).Data._pad_0x8_2, local_1c = local_34, uStack_14 = local_34,
     local_34 < *(double *)piVar1 || local_34 == *(double *)piVar1)) {
    uStack_14 = *(double *)&(this->Orbit).Data._pad_0x8_2;
    (uint32_t)(local_34 = *(double *)&(this->Orbit).Data);
    *(uint32_t *)&local_1c = *(double *)&this->SpectralType;
  }
  local_44 = (undefined4)local_1c;
  uStack_40 = (*(uint32_t*)((char*)&(local_1c)+4));
  uStack_3c = (int)uStack_14;
  uStack_38 = (*(uint32_t*)((char*)&(uStack_14)+4));
  memcpy(&local_c, &local_34, 24);
  dVar5 = util__Abs((double *)&uStack_3c);
  *(uint32_t *)&local_c = util__Abs((double *)&local_44);
  local_24 = util__Abs(&local_34);
  if (dVar5 <= local_c) {
    *(uint32_t *)&local_c = util__Abs((double *)&local_44);
    cVar4 = '\0';
    if (local_c < local_24) {
      cVar4 = '\x02';
    }
  }
  else {
    *(uint32_t *)&local_c = util__Abs((double *)&uStack_3c);
    cVar4 = (local_c < local_24) + '\x01';
  }
  if (cVar4 != '\0') {
    if (cVar4 == '\x01') {
      dVar5 = (double)CONCAT44(uStack_38,uStack_3c);
      goto LAB_0071a8f0;
    }
    dVar5 = local_34;
    if (cVar4 == '\x02') goto LAB_0071a8f0;
  }
  dVar5 = (double)CONCAT44(uStack_40,local_44);
LAB_0071a8f0:
  dVar6 = Physics__GetBlackbodyRadiation_W
                    (dVar5 * 1000.0 * dVar5 * 1000.0 * 12.566370614359172,1.0,local_2c);
  dVar5 = local_c;
  *(uint64_t *)&local_c = (double)CONCAT71((*(uint56_t*)((char*)&(local_c)+1)),1);
  (*(uint32_t*)&(uStack_14)) = SUB84(dVar6,0);
  (*(uint32_t*)((char*)&(uStack_14)+4)) = (int)((ulonglong)dVar6 >> 0x20);
  (*(uint32_t*)((char*)&(local_c)+4)) = SUB84(dVar5,4);
  this[1].RingSystem.Data.DiffuseTexture._pad_0x0_0 = (int)uStack_14;
  this[1].RingSystem.Data.DiffuseTexture.TextureSize.X = (*(uint32_t*)((char*)&(uStack_14)+4));
  this[1].RingSystem.Data.DiffuseTexture.TextureSize.Y = (int)local_c;
  this[1].RingSystem.Data.DiffuseTexture.Texture = (*(uint32_t*)((char*)&(local_c)+4));
  return;
}

//==== 0071a950 GetOrbitAroundIlluminator ====

/* public: class util__Maybe_L_structCelestialOrbit_G_ __thiscall
   CelestialBody__GetOrbitAroundIlluminator(void)const  */

Maybe_L_CelestialOrbit_G_ * __thiscall
CelestialBody__GetOrbitAroundIlluminator
          (CelestialBody *this,Maybe_L_CelestialOrbit_G_ *__return_storage_ptr__)

{
  bool bVar1;
  CelestialBody *pCVar2;
  
  (__return_storage_ptr__->Data)._pad_0x0_0 = (int)&vftable_5;
  util__Str_char___Str_char
            ((Str_L_char_G_ *)&(__return_storage_ptr__->Data)._pad_0x4_1,
             (Str_L_char_G_ *)((int)&(this->Orbit).Data.Elements.Eccentricity + 4));
  (__return_storage_ptr__->Data)._pad_0x0_0 = (int)&vftable_403;
  (__return_storage_ptr__->Data).ParentBody =
       *(CelestialBody * *)&(this->Orbit).Data.Elements.LongitudeOfAscendingNode_degrees;
  (__return_storage_ptr__->Data).Elements._pad_0x0_0 = (int)&vftable_5;
  util__Str_char___Str_char
            ((Str_L_char_G_ *)&(__return_storage_ptr__->Data).Elements._pad_0x4_1,
             (Str_L_char_G_ *)((int)&(this->Orbit).Data.Elements.ArgumentOfPeriapsis_degrees + 4));
  (__return_storage_ptr__->Data).Elements._pad_0x0_0 = (int)&vftable_396;
  (__return_storage_ptr__->Data).Elements.Epoch_JulianYears = *(double *)&(this->Orbit).IsValidData;
  (__return_storage_ptr__->Data).Elements.SemiMajorAxis_km = *(double *)&this->Rotation;
  (__return_storage_ptr__->Data).Elements.Eccentricity = *(double *)&(this->Rotation)._pad_0x8_2;
  (__return_storage_ptr__->Data).Elements.InclinationToRelativePlane_degrees =
       (this->Rotation).AxialTilt_degrees;
  (__return_storage_ptr__->Data).Elements.LongitudeOfAscendingNode_degrees =
       (this->Rotation).SiderealRotationPeriod_s;
  (__return_storage_ptr__->Data).Elements.ArgumentOfPeriapsis_degrees =
       *(double *)&(this->RingSystem).Data;
  (__return_storage_ptr__->Data).Elements.MeanAnomaly_degrees =
       *(double *)&(this->RingSystem).Data._pad_0x8_2;
  bVar1 = *(bool *)&(this->RingSystem).Data.Radius_km;
  __return_storage_ptr__->IsValidData = bVar1;
  if (bVar1 == false) {
    return __return_storage_ptr__;
  }
  do {
    pCVar2 = (__return_storage_ptr__->Data).ParentBody;
    if (798.0 < (double)((pCVar2->Orbit).Data.Elements._pad_0x8_2)){
      return __return_storage_ptr__;
    }
    if (__return_storage_ptr__->IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
      pCVar2 = (__return_storage_ptr__->Data).ParentBody;
    }
    util__Str_char___operator__o8
              ((Str_L_char_G_ *)&(__return_storage_ptr__->Data)._pad_0x4_1,
               (Str_L_char_G_ *)((int)&(pCVar2->Orbit).Data.Elements.Eccentricity + 4));
    (__return_storage_ptr__->Data).ParentBody =
         *(CelestialBody * *)&(pCVar2->Orbit).Data.Elements.LongitudeOfAscendingNode_degrees;
    util__Str_char___operator__o8
              ((Str_L_char_G_ *)&(__return_storage_ptr__->Data).Elements._pad_0x4_1,
               (Str_L_char_G_ *)((int)&(pCVar2->Orbit).Data.Elements.ArgumentOfPeriapsis_degrees + 4));
    (__return_storage_ptr__->Data).Elements.Epoch_JulianYears =
         *(double *)&(pCVar2->Orbit).IsValidData;
    (__return_storage_ptr__->Data).Elements.SemiMajorAxis_km = *(double *)&pCVar2->Rotation;
    (__return_storage_ptr__->Data).Elements.Eccentricity = *(double *)&(pCVar2->Rotation)._pad_0x8_2
    ;
    (__return_storage_ptr__->Data).Elements.InclinationToRelativePlane_degrees =
         (pCVar2->Rotation).AxialTilt_degrees;
    (__return_storage_ptr__->Data).Elements.LongitudeOfAscendingNode_degrees =
         (pCVar2->Rotation).SiderealRotationPeriod_s;
    (__return_storage_ptr__->Data).Elements.ArgumentOfPeriapsis_degrees =
         *(double *)&(pCVar2->RingSystem).Data;
    (__return_storage_ptr__->Data).Elements.MeanAnomaly_degrees =
         *(double *)&(pCVar2->RingSystem).Data._pad_0x8_2;
    bVar1 = *(bool *)&(pCVar2->RingSystem).Data.Radius_km;
    __return_storage_ptr__->IsValidData = bVar1;
  } while (bVar1 != false);
  return __return_storage_ptr__;
}

//==== 0071aaf0 GetOrbitalPopulation ====

/* public: double __thiscall CelestialBody__GetOrbitalPopulation(void)const  */

double __thiscall CelestialBody__GetOrbitalPopulation(CelestialBody *this)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double local_48;
  double dStack_40;
  
  dVar3 = this->Albedo;
  if (((dVar3 <= *(double *)&this->SpectralType) ||
      (dVar3 < *(double *)&(this->Orbit).Data || dVar3 == *(double *)&(this->Orbit).Data)) ||
     (piVar1 = &(this->Orbit).Data._pad_0x8_2, local_48 = dVar3, dStack_40 = dVar3,
     dVar3 < *(double *)piVar1 || dVar3 == *(double *)piVar1)) {
    dVar3 = *(double *)&(this->Orbit).Data;
    local_48 = *(double *)&this->SpectralType;
    dStack_40 = *(double *)&(this->Orbit).Data._pad_0x8_2;
  }
  dVar2 = local_48 * dStack_40;
  libm_sse2_pow_precise(0.0,0.0);
  local_48 = local_48 * dVar3;
  libm_sse2_pow_precise(0.0,0.0);
  dStack_40 = dStack_40 * dVar3;
  libm_sse2_pow_precise(0.0,0.0);
  dVar2 = (dStack_40 + dVar2 + local_48) / 3.0;
  libm_sse2_pow_precise(0.0,0.0);
  dVar3 = GetOrbitalPopulationDensity__km2(this);
  dVar3 = dVar3 * dVar2 * 12.566370614359172;
  if (dVar3 < 50.0) {
    dVar3 = 0.0;
  }
  return dVar3;
}

//==== 0071ac20 GetOrbitalPopulationDensity__km2 ====

/* public: double __thiscall CelestialBody__GetOrbitalPopulationDensity__km2(void)const  */

double __thiscall CelestialBody__GetOrbitalPopulationDensity__km2(CelestialBody *this)

{
  uint uVar1;
  double dVar2;
  uint local_c;
  undefined4 uStack_8;
  
  if (*(char *)((int)&(this->Orbit).Data.Elements.SemiMajorAxis_km + 4) != '\0') {
    return 0.0;
  }
  if ((char)((this->RingSystem).Data.Radius_km != '\0')){
    GetStabilityRegionRadius_km_Memoize(this);
    if ((char)this[1].Atmosphere.Data._pad_0x0_0 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if (this[1].RingSystem.IsValidData == false) {
      return 0.0;
    }
  }
  dVar2 = this->SurfaceTemperature_K;
  *(uint32_t *)&local_c = SUB84(dVar2,0);
  uVar1 = (local_c & 0xff) * 0x401;
  uVar1 = ((uVar1 >> 6 ^ uVar1) + (local_c >> 8 & 0xff)) * 0x401;
  uVar1 = ((uVar1 >> 6 ^ uVar1) + (local_c >> 0x10 & 0xff)) * 0x401;
  uStack_8 = (uint)((ulonglong)dVar2 >> 0x20);
  uVar1 = ((uVar1 >> 6 ^ uVar1) + (local_c >> 0x18)) * 0x401;
  uVar1 = ((uVar1 >> 6 ^ uVar1) + (uStack_8 & 0xff)) * 0x401;
  uVar1 = ((uVar1 >> 6 ^ uVar1) + (uStack_8 >> 8 & 0xff)) * 0x401;
  (*(uint8_t*)((char*)&(uStack_8)+2)) = (byte)((ulonglong)dVar2 >> 0x30);
  uVar1 = ((uVar1 >> 6 ^ uVar1) + (uint)(*(uint8_t*)((char*)&(uStack_8)+2))) * 0x401;
  (*(uint8_t*)((char*)&(uStack_8)+3)) = (byte)((ulonglong)dVar2 >> 0x38);
  uVar1 = ((uVar1 >> 6 ^ uVar1) + (uint)(*(uint8_t*)((char*)&(uStack_8)+3))) * 0x401;
  uVar1 = (uVar1 ^ uVar1 >> 6) * 9;
  dVar2 = ((double)(((uVar1 >> 0xb ^ uVar1) * 0x8001) % 0x7fffffff) + 0.0) / 2147483647.0;
  return ((1.0 - dVar2) * 0.5 + dVar2 + dVar2) * 0.1;
}

//==== 0071adc0 GetPlanetModel ====


/* public: static class VertexBufferObject * __cdecl CelestialBody__GetPlanetModel(void) */

VertexBufferObject * __cdecl CelestialBody__GetPlanetModel(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_00980fa8) {
    _Init_thread_header(&DAT_00980fa8);
    if (DAT_00980fa8 == -1) {
      VertexBufferObject__VertexBufferObject((VertexBufferObject *)&DAT_00980f08);
      atexit(FUN_00902230);
      _Init_thread_footer(&DAT_00980fa8);
    }
  }
  return (VertexBufferObject *)&DAT_00980f08;
}





//==== 0071ae20 GetPointerPropertyChoices_0071ae20 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   CelestialAtmosphere__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

ClassMember * 
CelestialAtmosphere__GetPointerPropertyChoices
          (CelestialAtmosphere *this,ClassMember *param_1,SerializationManagerInterface *param_2)

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





//==== 0071aea0 GetPointerPropertyChoices_0071aea0 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   CelestialBody__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

void 
CelestialBody__GetPointerPropertyChoices
          (CelestialBody *this,ClassMember *param_1,SerializationManagerInterface *param_2)

{
  undefined8 stack0xfffffffc;
  char *pcVar1;
  tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *ptVar2;
  SerializationManagerInterface SVar3;
  int *in_stack_0000000c;
  undefined4 uStack_6c;
  undefined ***pppuStack_68;
  Str_L_char_G_ *pSStack_64;
  void *apvStack_54 [3];
  undefined **ppuStack_48;
  void *pvStack_44;
  undefined **ppuStack_38;
  void *pvStack_34;
  Str_L_char_G_ SStack_28;
  undefined **ppuStack_1c;
  void *pvStack_18;
  undefined1 uStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (*(int *)&param_2[1] < 1) {
    SVar3 = *(SerializationManagerInterface *)&cde_l2_0b2b1c9f_NullString;
  }
  else {
    SVar3 = *param_2;
  }
  for (pcVar1 = "SpectralType"; (pcVar1[(int)(*(int *)&SVar3 + -0x938188)] != '\0' || (*pcVar1 != '\0'))
      ; pcVar1 = pcVar1 + 1) {
    if (pcVar1[(int)(*(int *)&SVar3 + -0x938188)] != *pcVar1) {
      (param_1->Name).Data =
           (char *)&vftable_85;
      (param_1->Name).Capacity = 0;
      (param_1->Name).Length = 0;
      *(undefined4 *)&param_1->Type = 0;
LAB_0071b023:
      __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  pSStack_64 = (Str_L_char_G_ *)0x71aefc;
  util__Str_char___Str_char(&SStack_28,"AsteroidSpectralType");
  pSStack_64 = &SStack_28;
  pppuStack_68 = &ppuStack_38;
  uStack_6c = 0x71af0d;
  (**(code **)(uintptr_t)(*in_stack_0000000c + 4))();
  if (SStack_28.Data != (char *)0x0) {
    pSStack_64 = (Str_L_char_G_ *)0x71af1a;
    port_op_delete(SStack_28.Data);
    SStack_28.Data = (char *)0x0;
  }
  uStack_c = 0;
  pSStack_64 = (Str_L_char_G_ *)&ppuStack_38;
  pppuStack_68 = &ppuStack_1c;
  uStack_6c = 0x71af39;
  FUN_004f1250();
  util__Darray_class_util__Reflectable____Darray_class_util__Reflectable
            ((Darray_L_class_util__Reflectable_P_G_ *)&uStack_6c,
             (Darray_L_class_util__Reflectable_P_G_ *)&ppuStack_1c);
  ptVar2 = (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *)
           util__MakeTuple_class_util__Str_char__class_util__Darray_class_util__Reflectable__o2
                     (apvStack_54,0,0,0);
  (param_1->Name).Data = (char *)0x0;
  (param_1->Name).Capacity = 0;
  (param_1->Name).Length = 0;
  *(undefined4 *)&param_1->Type = 0;
  pSStack_64 = (Str_L_char_G_ *)0x71af7b;
  util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable________Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable
            ((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G___G_
              *)param_1,1);
  pSStack_64 = (Str_L_char_G_ *)0x71af83;
  util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable________Add((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G___G_
         *)param_1,ptVar2);
  ppuStack_48 = (undefined **)(&vftable_6);
  if (pvStack_44 != (void *)0x0) {
    pSStack_64 = (Str_L_char_G_ *)0x71af97;
    port_op_delete(pvStack_44);
  }
  pvStack_44 = (void *)0x0;
  ppuStack_48 = (undefined **)(&vftable);
  if (apvStack_54[0] != (void *)0x0) {
    pSStack_64 = (Str_L_char_G_ *)0x71afb5;
    port_op_delete(apvStack_54[0]);
  }
  ppuStack_1c = (undefined **)(&vftable_6);
  if (pvStack_18 != (void *)0x0) {
    pSStack_64 = (Str_L_char_G_ *)0x71afcc;
    port_op_delete(pvStack_18);
  }
  pvStack_18 = (void *)0x0;
  ppuStack_1c = (undefined **)(&vftable);
  ppuStack_38 = (undefined **)(&vftable_6);
  if (pvStack_34 != (void *)0x0) {
    pSStack_64 = (Str_L_char_G_ *)0x71aff1;
    port_op_delete(pvStack_34);
    __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  goto LAB_0071b023;
}





//==== 0071b040 GetPointerPropertyChoices_0071b040 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   CelestialOrbit__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

void 
CelestialOrbit__GetPointerPropertyChoices
          (CelestialOrbit *this,ClassMember *param_1,SerializationManagerInterface *param_2)

{
  undefined8 stack0xfffffffc;
  undefined4 uVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  SerializationManagerInterface SVar6;
  int *in_stack_0000000c;
  Str_L_char_G_ SStack_3c;
  int iStack_30;
  undefined **ppuStack_2c;
  void *pvStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined **ppuStack_1c;
  void *pvStack_18;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (*(int *)&param_2[1] < 1) {
    SVar6 = *(SerializationManagerInterface *)&cde_l2_0b2b1c9f_NullString;
  }
  else {
    SVar6 = *param_2;
  }
  for (pcVar3 = "ParentBody"; (pcVar3[(int)(*(int *)&SVar6 + -0x936f08)] != '\0' || (*pcVar3 != '\0'));
      pcVar3 = pcVar3 + 1) {
    if (pcVar3[(int)(*(int *)&SVar6 + -0x936f08)] != *pcVar3) {
      (param_1->Name).Data =
           (char *)&vftable_85;
      (param_1->Name).Capacity = 0;
      (param_1->Name).Length = 0;
      *(undefined4 *)&param_1->Type = 0;
LAB_0071b1b7:
      __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  util__Str_char___Str_char(&SStack_3c,"CelestialBody");
  (**(code **)(uintptr_t)(*in_stack_0000000c + 4))(&ppuStack_1c,&SStack_3c,0);
  if (SStack_3c.Data != (char *)0x0) {
    port_op_delete(SStack_3c.Data);
    SStack_3c.Data = (char *)0x0;
  }
  ppuStack_2c = (undefined **)0x0;
  pvStack_28 = (void *)0x0;
  iStack_24 = 0;
  uStack_20 = 0;
  iVar4 = (*(code *)ppuStack_1c[3])();
  util__Darray_class_Manager____Darray_class_Manager((Darray_L_class_Manager_P_G_ *)&ppuStack_2c,iVar4)
  ;
  iStack_c = 0;
  iVar4 = (*(code *)ppuStack_1c[3])();
  if (iStack_c < iVar4) {
    do {
      puVar5 = (undefined4 *)(*(code *)*ppuStack_1c)(&iStack_c);
      iVar4 = iStack_24;
      uVar1 = *puVar5;
      iStack_30 = iStack_24 + 1;
      util__Darray_class_util__Reflectable____SetSize
                ((Darray_L_class_util__Reflectable_P_G_ *)&ppuStack_2c,&iStack_30);
      bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                        ((Darray_L_enum_GraphicsResource__Type_G_ *)&ppuStack_2c,iVar4);
      if (bVar2) {
        *(undefined4 *)((int)pvStack_28 + iStack_24 * 4 + -4) = uVar1;
      }
      iStack_c = iStack_c + 1;
      iVar4 = (*(code *)ppuStack_1c[3])();
    } while (iStack_c < iVar4);
  }
  ppuStack_1c = (undefined **)(&vftable_6);
  if (pvStack_18 != (void *)0x0) {
    port_op_delete(pvStack_18);
  }
  pvStack_18 = (void *)0x0;
  ppuStack_1c = (undefined **)(&vftable);
  CelestialBody__GetSortedListing((Darray_L_struct_CelestialBody_P_G_ *)param_1);
  ppuStack_2c = (undefined **)(&vftable_2);
  if (pvStack_28 != (void *)0x0) {
    port_op_delete(pvStack_28);
    __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  goto LAB_0071b1b7;
}





//==== 0071b1d0 GetPopulation ====

/* public: double __thiscall CelestialBody__GetPopulation(void)const  */

double __thiscall CelestialBody__GetPopulation(CelestialBody *this)

{
  undefined8 stack0xffffffe1;
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  char *pcVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  double local_58;
  double dStack_50;
  int local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  uVar3 = _uStack_20;
  if (*(char *)&this[1].Atmosphere.Data.SurfacePressure_Pa == '\0') {
    iVar2 = *(int *)((int)&(this->Radii_km).Y_km + 4);
    local_18 = (double)CONCAT44(iVar2 + 1,(undefined4)local_18);
    util__Darray_L_util__Reflectable_P_G___SetSize
              ((Darray_L_util__Reflectable_P_G_ *)((int)&(this->Radii_km).X_km + 4),
               (int *)((int)&local_18 + 4));
    bVar4 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)((int)&(this->Radii_km).X_km + 4),iVar2);
    if (bVar4) {
      *(code **)((int)((this->Radii_km).Y_km + -4 + *(int *)((int)&(this->Radii_km).Y_km + 4) * 4
                ) )= (long long int (*)())(GetHumanHabitabilityScore_Clear);
    }
    dVar8 = GetHumanHabitabilityScore_MemoizedFunction(this);
    _uStack_20 = CONCAT71(stack0xffffffe1,1);
    local_28 = SUB84(dVar8,0);
    uStack_24 = (undefined4)((ulonglong)dVar8 >> 0x20);
    uStack_1c = SUB84(uVar3,4);
    this[1].Atmosphere.Data._pad_0x8_2 = local_28;
    *(undefined4 *)&((*(undefined4 *)((char *)&(this[1].Atmosphere.Data) + 0xc))) = uStack_24;
    *(undefined4 *)&this[1].Atmosphere.Data.SurfacePressure_Pa = uStack_20;
    *(undefined4 *)((int)&this[1].Atmosphere.Data.SurfacePressure_Pa + 4) = uStack_1c;
    if (*(char *)&this[1].Atmosphere.Data.SurfacePressure_Pa == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  dVar8 = this->Albedo;
  if (((dVar8 <= *(double *)&this->SpectralType) ||
      (dVar8 < *(double *)&(this->Orbit).Data || dVar8 == *(double *)&(this->Orbit).Data)) ||
     (piVar1 = &(this->Orbit).Data._pad_0x8_2, local_58 = dVar8, dStack_50 = dVar8,
     dVar8 < *(double *)piVar1 || dVar8 == *(double *)piVar1)) {
    dVar8 = *(double *)&(this->Orbit).Data;
    local_58 = *(double *)&this->SpectralType;
    dStack_50 = *(double *)&(this->Orbit).Data._pad_0x8_2;
  }
  dVar7 = local_58 * dStack_50;
  libm_sse2_pow_precise(0.0,0.0);
  local_58 = local_58 * dVar8;
  local_18 = dVar7;
  libm_sse2_pow_precise(0.0,0.0);
  local_18 = local_18 + local_58;
  dStack_50 = dStack_50 * dVar8;
  libm_sse2_pow_precise(0.0,0.0);
  dVar8 = (dStack_50 + local_18) / 3.0;
  libm_sse2_pow_precise(0.0,0.0);
  if (*(char *)((int)&(this->Orbit).Data.Elements.SemiMajorAxis_km + 4) == '\0') {
    if (this->_pad_0x8_2 < 1) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)this->_pad_0x4_1;
    }
    uVar6 = util__GetHash(pcVar5);
    dVar7 = ((double)(int)((ulonglong)uVar6 % 0x7fffffff) + 0.0) / 2147483647.0;
    dVar7 = ((1.0 - dVar7) * 0.5 + dVar7 + dVar7) * 10.0;
  }
  else {
    dVar7 = 0.0;
  }
  dVar7 = *(double *)&this[1].Atmosphere.Data._pad_0x8_2 * dVar8 * 12.566370614359172 * dVar7;
  if (dVar7 < 50.0) {
    return 0.0;
  }
  return dVar7;
}

//==== 0071b3f0 GetRadius_km ====

/* public: double __thiscall CelestialBody__GetRadius_km(void)const  */

double __thiscall CelestialBody__GetRadius_km(CelestialBody *this)

{
  int *piVar1;
  char cVar2;
  double dVar3;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  double local_24;
  double local_1c;
  double local_14;
  double local_c;
  
  local_24 = this->Albedo;
  if (((local_24 <= *(double *)&this->SpectralType) ||
      (local_24 < *(double *)&(this->Orbit).Data || local_24 == *(double *)&(this->Orbit).Data)) ||
     (piVar1 = &(this->Orbit).Data._pad_0x8_2, local_4c = local_24, uStack_44 = local_24,
     local_24 < *(double *)piVar1 || local_24 == *(double *)piVar1)) {
    local_24 = *(double *)&(this->Orbit).Data;
    *(uint32_t *)&local_4c = *(double *)&this->SpectralType;
    uStack_44 = *(double *)&(this->Orbit).Data._pad_0x8_2;
  }
  *(uint32_t *)&local_34 = (undefined4)local_4c;
  uStack_30 = (*(uint32_t*)((char*)&(local_4c)+4));
  uStack_2c = (undefined4)uStack_44;
  uStack_28 = (*(uint32_t*)((char*)&(uStack_44)+4));
  local_14 = util__Abs((double *)&uStack_2c);
  *(uint32_t *)&local_1c = util__Abs((double *)&local_34);
  *(uint32_t *)&local_c = util__Abs(&local_24);
  if (local_14 <= local_1c) {
    dVar3 = util__Abs((double *)&local_34);
    cVar2 = '\0';
    if (dVar3 < local_c) {
      cVar2 = '\x02';
    }
  }
  else {
    dVar3 = util__Abs((double *)&uStack_2c);
    cVar2 = (dVar3 < local_c) + '\x01';
  }
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      return (double)CONCAT44(uStack_28,uStack_2c);
    }
    if (cVar2 == '\x02') {
      return local_24;
    }
  }
  return (double)CONCAT44(uStack_30,local_34);
}

//==== 0071b510 GetReflectionDependencies_0071b510 ====


/* public: virtual class util__Darray_L_classutil__Reflectable_P_G_ __thiscall
   CelestialBody__GetReflectionDependencies(void)const  */

Darray_L_class_util__Reflectable_P_G_ * __thiscall
CelestialBody__GetReflectionDependencies(CelestialBody *this)

{
  undefined8 stack0x00000004;
  undefined4 uVar1;
  Darray_L_class_util__Reflectable_P_G_ *this_00;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  Darray_L_class_util__Reflectable_P_G_ *in_stack_00000004;
  
  this_00 = in_stack_00000004;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = (undefined **)(&vftable_6);
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 1;
  puVar3 = (undefined4 *)port_op_new(4);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 0;
  }
  iVar4 = 0;
  *(undefined4 **)(in_stack_00000004 + 4) = puVar3;
  if (0 < *(int *)(in_stack_00000004 + 0xc)) {
    do {
      *(undefined4 *)(*(int *)(in_stack_00000004 + 4) + iVar4 * 4) = 0;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(in_stack_00000004 + 0xc));
  }
  if ((char)((this->RingSystem).Data.Radius_km != '\0')){
    uVar1 = *(undefined4 *)&(this->Orbit).Data.Elements.LongitudeOfAscendingNode_degrees;
    iVar4 = *(int *)(in_stack_00000004 + 8);
    in_stack_00000004 = (Darray_L_class_util__Reflectable_P_G_ *)(iVar4 + 1);
    util__Darray_class_util__Reflectable____SetSize(this_00,(int *)&stack0x00000004);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)this_00,iVar4);
    if (bVar2) {
      *(undefined4 *)(*(int *)(this_00 + 4) + -4 + *(int *)(this_00 + 8) * 4) = uVar1;
    }
    return this_00;
  }
  return in_stack_00000004;
}





//==== 0071b5c0 GetReflectionInfo_0071b5c0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   CelestialAtmosphere__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall CelestialAtmosphere__GetReflectionInfo(CelestialAtmosphere *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_7f6c1549__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_7f6c1549__thread_safe_static_guard_0__);
    if ( cde_l2_7f6c1549__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_e07b1ed3_ReflectionInfo) = &vftable_428;
      _Init_thread_footer(& cde_l2_7f6c1549__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_e07b1ed3_ReflectionInfo;
}





//==== 0071b5d0 GetReflectionInfo_0071b5d0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   CelestialBody__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall CelestialBody__GetReflectionInfo(CelestialBody *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_d4e07a50__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_d4e07a50__thread_safe_static_guard_0__);
    if ( cde_l2_d4e07a50__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_435dde65_ReflectionInfo) = &vftable_431;
      _Init_thread_footer(& cde_l2_d4e07a50__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_435dde65_ReflectionInfo;
}





//==== 0071b5e0 GetReflectionInfo_0071b5e0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   CelestialRing__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall CelestialRing__GetReflectionInfo(CelestialRing *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_8e0a1deb__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_8e0a1deb__thread_safe_static_guard_0__);
    if ( cde_l2_8e0a1deb__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_0e68a6d2_ReflectionInfo) = &vftable_426;
      _Init_thread_footer(& cde_l2_8e0a1deb__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_0e68a6d2_ReflectionInfo;
}





//==== 0071b5f0 GetReflectionInfo_0071b5f0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   CelestialRotation__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall CelestialRotation__GetReflectionInfo(CelestialRotation *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_cc0fc0a5__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_cc0fc0a5__thread_safe_static_guard_0__);
    if ( cde_l2_cc0fc0a5__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_02b4fcfd_ReflectionInfo) = &vftable_427;
      _Init_thread_footer(& cde_l2_cc0fc0a5__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_02b4fcfd_ReflectionInfo;
}





//==== 0071b600 GetRingSize_km ====

/* public: struct util__Range_L_double_G_ __thiscall CelestialBody__GetRingSize_km(void)const  */

Range_L_double_G_ * __thiscall
CelestialBody__GetRingSize_km(CelestialBody *this,Range_L_double_G_ *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  if ((char)(this->Model)._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                    "IsValid()",(char *)0x0);
    DebugBreak();
    if ((char)(this->Model)._pad_0x0_0 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  dVar1 = *(double *)&(this->Atmosphere).Data;
  dVar2 = *(double *)&(this->RingSystem).IsValidData;
  __return_storage_ptr__->Lower = dVar2;
  __return_storage_ptr__->Upper = dVar1;
  if (dVar1 < dVar2) {
    __return_storage_ptr__->Lower = dVar1;
    __return_storage_ptr__->Upper = dVar2;
  }
  return __return_storage_ptr__;
}

//==== 0071b690 GetSolarIrradiance_W__m2 ====

/* public: double __thiscall CelestialBody__GetSolarIrradiance_W__m2(double)const  */

double __thiscall CelestialBody__GetSolarIrradiance_W__m2(CelestialBody *this,double param_1)

{
  int *piVar1;
  char cVar2;
  double *pdVar3;
  double dVar4;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  double local_1c;
  double local_14;
  double local_c;
  
  *(uint32_t *)&local_1c = this->Albedo;
  if (((local_1c <= *(double *)&this->SpectralType) ||
      (local_1c < *(double *)&(this->Orbit).Data || local_1c == *(double *)&(this->Orbit).Data)) ||
     (piVar1 = &(this->Orbit).Data._pad_0x8_2, local_44 = local_1c, uStack_3c = local_1c,
     local_1c < *(double *)piVar1 || local_1c == *(double *)piVar1)) {
    (uint32_t)(local_1c = *(double *)&(this->Orbit).Data);
    local_44 = *(double *)&this->SpectralType;
    uStack_3c = *(double *)&(this->Orbit).Data._pad_0x8_2;
  }
  local_2c = (undefined4)local_44;
  uStack_28 = (*(uint32_t*)((char*)&(local_44)+4));
  uStack_24 = (undefined4)uStack_3c;
  uStack_20 = (*(uint32_t*)((char*)&(uStack_3c)+4));
  dVar4 = util__Abs((double *)&uStack_24);
  local_14 = util__Abs((double *)&local_2c);
  *(uint32_t *)&local_c = util__Abs(&local_1c);
  if (dVar4 <= local_14) {
    local_14 = util__Abs((double *)&local_2c);
    cVar2 = '\0';
    if (local_14 < local_c) {
      cVar2 = '\x02';
    }
  }
  else {
    local_14 = util__Abs((double *)&uStack_24);
    cVar2 = (local_14 < local_c) + '\x01';
  }
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      *(uint64_t *)&local_c = (double)CONCAT44(uStack_20,uStack_24);
      goto LAB_0071b787;
    }
    memcpy(&local_c, &local_1c, 17);
    if (cVar2 == '\x02') goto LAB_0071b787;
  }
  *(uint64_t *)&local_c = (double)CONCAT44(uStack_28,local_2c);
LAB_0071b787:
  GetLuminosity_W_Memoize(this);
  pdVar3 = util__Maybe_double___GetData((Maybe_L_double_G_ *)&this[1].RingSystem.Data.DiffuseTexture);
  if (local_c <= param_1) {
    *(uint32_t *)&local_c = param_1;
  }
  return *pdVar3 / (local_c * 1000.0 * local_c * 1000.0 * 12.566370614359172);
}

//==== 0071c780 GetSphericalCutoffRadius_km ====

/* public: double __thiscall CelestialBody__GetSphericalCutoffRadius_km(void)const  */

double __thiscall CelestialBody__GetSphericalCutoffRadius_km(CelestialBody *this)

{
  int *piVar1;
  char cVar2;
  Maybe_L_double_G_ *pMVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double local_4c;
  double local_44;
  double local_3c;
  double dStack_34;
  double local_2c;
  double local_24;
  undefined1 auStack_1c [16];
  double local_c;
  
  dVar6 = *(double *)&(this->Orbit).Data.Elements._pad_0x8_2;
  if (dVar6 <= 0.0) {
    dVar6 = GetAverageDistanceToIlluminator_km(this);
    dVar6 = GetSurfaceTemperature_K(this,dVar6);
  }
  (*(uint64_t*)((char*)&(auStack_1c)+8)) = this->SurfaceTemperature_K * Physics__BoltzmannConstant_J__K * dVar6 * 0.1;
  dVar7 = GetAverageAtomicMass_amu(this);
  dVar6 = this->SurfaceTemperature_K;
  local_44 = (double)(*(uint64_t*)((char*)&(auStack_1c)+8)) / (dVar7 * Physics__MassOfAProton_kg);
  local_2c = this->Albedo;
  if (((local_2c <= *(double *)&this->SpectralType) ||
      (local_2c < *(double *)&(this->Orbit).Data || local_2c == *(double *)&(this->Orbit).Data)) ||
     (piVar1 = &(this->Orbit).Data._pad_0x8_2, local_24 = local_2c, (*(uint64_t*)&(auStack_1c)) = local_2c,
     local_2c < *(double *)piVar1 || local_2c == *(double *)piVar1)) {
    (*(uint64_t*)&(auStack_1c)) = *(undefined8 *)&(this->Orbit).Data._pad_0x8_2;
    local_2c = *(double *)&(this->Orbit).Data;
    local_24 = *(double *)&this->SpectralType;
  }
  local_3c = local_24;
  dStack_34 = (double)(*(uint64_t*)&(auStack_1c));
  (*(uint64_t*)((char*)&(auStack_1c)+8)) = local_2c;
  *(uint32_t *)&local_c = util__Abs(&dStack_34);
  *(uint32_t *)&local_4c = util__Abs(&local_3c);
  (*(uint64_t*)((char*)&(auStack_1c)+8)) = util__Abs(&local_2c);
  if (local_4c <= local_c) {
    *(uint32_t *)&local_c = util__Abs(&local_3c);
    cVar2 = '\0';
    if ((double)(*(uint64_t*)((char*)&(auStack_1c)+8)) < local_c) {
      cVar2 = '\x02';
    }
  }
  else {
    *(uint32_t *)&local_c = util__Abs(&dStack_34);
    cVar2 = ((double)(*(uint64_t*)((char*)&(auStack_1c)+8)) < local_c) + '\x01';
  }
  if ((cVar2 == '\0') ||
     ((dVar7 = dStack_34, cVar2 != '\x01' && (dVar7 = local_2c, cVar2 != '\x02')))) {
    dVar7 = local_3c;
  }
  if ((dVar6 * dVar6 * 6.674e-11) / (dVar7 * 1000.0) < local_44) {
    dVar6 = *(double *)&(this->Orbit).Data.Elements._pad_0x8_2;
    if (dVar6 <= 0.0) {
      dVar6 = GetAverageDistanceToIlluminator_km(this);
      dVar6 = GetSurfaceTemperature_K(this,dVar6);
      local_44 = dVar6;
    }
    local_2c = this->Albedo;
    if (((local_2c <= *(double *)&this->SpectralType) ||
        (local_2c < *(double *)&(this->Orbit).Data || local_2c == *(double *)&(this->Orbit).Data))
       || (piVar1 = &(this->Orbit).Data._pad_0x8_2, local_3c = local_2c, dStack_34 = local_2c,
          local_2c < *(double *)piVar1 || local_2c == *(double *)piVar1)) {
      local_2c = *(double *)&(this->Orbit).Data;
      local_3c = *(double *)&this->SpectralType;
      dStack_34 = *(double *)&(this->Orbit).Data._pad_0x8_2;
    }
    dVar5 = local_2c * 1000.0;
    dVar7 = local_3c * 1000.0;
    dVar4 = dStack_34 * 1000.0;
    *(uint32_t *)&local_c = Physics__BoltzmannConstant_J__K * dVar6 * 0.1 * 3.0;
    dVar6 = this->SurfaceTemperature_K;
    local_44 = GetAverageAtomicMass_amu(this);
    local_4c = local_c / (local_44 *
                          (dVar6 / (dVar7 * 4.1887902047863905 * dVar4 * dVar5)) *
                          8.386795748023311e-10 * Physics__MassOfAProton_kg);
    pMVar3 = util__Sqrt((Maybe_L_double_G_ *)auStack_1c,&local_4c);
    if (pMVar3->IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    return pMVar3->Data / 1000.0;
  }
  return 0.0;
}

//==== 0071ca80 GetStabilityRegionRadius_km_Clear ====

/* public: void __thiscall CelestialBody__GetStabilityRegionRadius_km_Clear(void)const  */

void __thiscall CelestialBody__GetStabilityRegionRadius_km_Clear(CelestialBody *this)

{
  uint uStack_c;
  undefined4 uStack_8;
  
  uStack_c = uStack_c & 0xffffff00;
  *(undefined1 *)&this[1].Atmosphere.Data._pad_0x0_0 = 0;
  this[1].RingSystem.Data.AlphaTexture.Type = Type__TwoDimensional;
  *(undefined4 *)&this[1].RingSystem.Data.AlphaTexture.IsTextureMipmapped = 0;
  *(uint *)&this[1].RingSystem.IsValidData = uStack_c;
  *(undefined4 *)((char *)&this[1].RingSystem + 0x4c) = uStack_8;
  return;
}

//==== 0071cab0 GetStabilityRegionRadius_km_Memoize ====

/* public: void __thiscall CelestialBody__GetStabilityRegionRadius_km_Memoize(void)const  */

void __thiscall CelestialBody__GetStabilityRegionRadius_km_Memoize(CelestialBody *this)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  double dVar8;
  int TVar9;
  undefined4 uVar10;
  undefined1 local_54 [16];
  double local_44;
  double local_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  double local_2c;
  double local_24;
  double local_1c;
  double local_14;
  undefined8 local_c;
  
  if ((char)this[1].Atmosphere.Data._pad_0x0_0 != '\0') {
    return;
  }
  iVar4 = *(int *)((int)&(this->Radii_km).Y_km + 4);
  *(uint32_t *)&local_c = (double)CONCAT44(iVar4 + 1,(undefined4)local_c);
  util__Darray_L_util__Reflectable_P_G___SetSize
            ((Darray_L_util__Reflectable_P_G_ *)((int)&(this->Radii_km).X_km + 4),
             (int *)((int)&local_c + 4));
  bVar5 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)((int)&(this->Radii_km).X_km + 4),iVar4);
  if (bVar5) {
    *(code **)((int)((this->Radii_km).Y_km + -4 + *(int *)((int)&(this->Radii_km).Y_km + 4) * 4)
         )= (long long int (*)())(GetStabilityRegionRadius_km_Clear);
  }
  if ((char)((this->RingSystem).Data.Radius_km != '\0')){
    dVar8 = this->SurfaceTemperature_K /
            (*(double *)
              (*(int *)&(this->Orbit).Data.Elements.LongitudeOfAscendingNode_degrees + 0x48) * 3.0);
    libm_sse2_pow_precise(0.0,0.0);
    local_44 = this->Albedo;
    local_24 = dVar8 * (1.0 - *(double *)&(this->Rotation)._pad_0x8_2) * *(double *)&this->Rotation
               * 0.5;
    if (((local_44 <= *(double *)&this->SpectralType) ||
        (local_44 < *(double *)&(this->Orbit).Data || local_44 == *(double *)&(this->Orbit).Data))
       || (piVar1 = &(this->Orbit).Data._pad_0x8_2,
          local_44 < *(double *)piVar1 || local_44 == *(double *)piVar1)) {
      uVar2 = (this->Orbit).Data._pad_0x8_2;
      uVar3 = (this->Orbit).Data._pad_0xc_3;
      (*(uint32_t *)((char *)&(local_54) + 12)) = uVar3;
      (*(uint32_t*)((char*)&(local_54)+8)) = uVar2;
      (*(uint64_t*)&(local_54)) = *(double *)&this->SpectralType;
      local_44 = *(double *)&(this->Orbit).Data;
    }
    else {
      (*(uint32_t*)((char*)&(local_54)+8)) = SUB84(local_44,0);
      (*(uint64_t*)&(local_54)) = local_44;
      (*(uint32_t *)((char *)&(local_54) + 12)) = (int)((ulonglong)local_44 >> 0x20);
    }
    local_3c = (*(uint64_t*)&(local_54));
    uStack_34 = (*(uint32_t*)((char*)&(local_54)+8));
    uStack_30 = (*(uint32_t *)((char *)&(local_54) + 12));
    local_2c = local_44;
    local_14 = util__Abs((double *)&uStack_34);
    *(uint32_t *)&local_1c = util__Abs(&local_3c);
    *(uint32_t *)&local_c = util__Abs(&local_2c);
    if (local_14 <= local_1c) {
      dVar8 = util__Abs(&local_3c);
      cVar6 = '\0';
      if (dVar8 < local_c) {
        cVar6 = '\x02';
      }
    }
    else {
      dVar8 = util__Abs((double *)&uStack_34);
      cVar6 = (dVar8 < local_c) + '\x01';
    }
    if (cVar6 != '\0') {
      if (cVar6 == '\x01') {
        local_3c = (double)CONCAT44(uStack_30,uStack_34);
      }
      else if (cVar6 == '\x02') {
        local_3c = local_2c;
      }
    }
    TVar9 = SUB84(local_24,0);
    uVar10 = (undefined4)((ulonglong)local_24 >> 0x20);
    if (local_3c < local_24) {
      uVar7 = 1;
      goto LAB_0071cc61;
    }
  }
  uVar7 = 0;
  TVar9 = Type__TwoDimensional;
  uVar10 = 0;
LAB_0071cc61:
  uStack_34 = CONCAT31((*(uint24_t*)((char*)&(uStack_34)+1)),uVar7);
  local_2c = (double)CONCAT71((*(uint56_t*)((char*)&(local_2c)+1)),1);
  this[1].RingSystem.Data.AlphaTexture.Type = TVar9;
  *(undefined4 *)&this[1].RingSystem.Data.AlphaTexture.IsTextureMipmapped = uVar10;
  *(undefined4 *)&this[1].RingSystem.IsValidData = uStack_34;
  *(undefined4 *)((char *)&this[1].RingSystem + 0x4c) = uStack_30;
  *(double *)&this[1].Atmosphere.Data = local_2c;
  return;
}

//==== 0071cc90 GetStandardGravitationalParameter_km3__s2 ====


/* public: double __thiscall CelestialBody__GetStandardGravitationalParameter_km3__s2(void)const  */

double __thiscall CelestialBody__GetStandardGravitationalParameter_km3__s2(CelestialBody *this)

{
  return (((this->SurfaceTemperature_K * 6.674e-11) / 1000.0) / 1000.0) / 1000.0;
}





//==== 0071ccd0 GetSurfaceGravity_m__s2 ====

/* public: double __thiscall CelestialBody__GetSurfaceGravity_m__s2(void)const  */

double __thiscall CelestialBody__GetSurfaceGravity_m__s2(CelestialBody *this)

{
  int *piVar1;
  char cVar2;
  double dVar3;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  double local_24;
  double local_1c;
  double local_14;
  double local_c;
  
  local_24 = this->Albedo;
  if (((local_24 <= *(double *)&this->SpectralType) ||
      (local_24 < *(double *)&(this->Orbit).Data || local_24 == *(double *)&(this->Orbit).Data)) ||
     (piVar1 = &(this->Orbit).Data._pad_0x8_2, local_4c = local_24, uStack_44 = local_24,
     local_24 < *(double *)piVar1 || local_24 == *(double *)piVar1)) {
    local_24 = *(double *)&(this->Orbit).Data;
    *(uint32_t *)&local_4c = *(double *)&this->SpectralType;
    uStack_44 = *(double *)&(this->Orbit).Data._pad_0x8_2;
  }
  *(uint32_t *)&local_34 = (undefined4)local_4c;
  uStack_30 = (*(uint32_t*)((char*)&(local_4c)+4));
  uStack_2c = (undefined4)uStack_44;
  uStack_28 = (*(uint32_t*)((char*)&(uStack_44)+4));
  local_14 = util__Abs((double *)&uStack_2c);
  *(uint32_t *)&local_1c = util__Abs((double *)&local_34);
  *(uint32_t *)&local_c = util__Abs(&local_24);
  if (local_14 <= local_1c) {
    dVar3 = util__Abs((double *)&local_34);
    cVar2 = '\0';
    if (dVar3 < local_c) {
      cVar2 = '\x02';
    }
  }
  else {
    dVar3 = util__Abs((double *)&uStack_2c);
    cVar2 = (dVar3 < local_c) + '\x01';
  }
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      local_24 = (double)CONCAT44(uStack_28,uStack_2c);
      goto LAB_0071cdc7;
    }
    if (cVar2 == '\x02') goto LAB_0071cdc7;
  }
  local_24 = (double)CONCAT44(uStack_30,local_34);
LAB_0071cdc7:
  return (this->SurfaceTemperature_K * 6.674e-11) / (local_24 * 1000.0 * local_24 * 1000.0);
}

//==== 0071d0e0 GetUIPixelRadius ====

/* public: double __thiscall CelestialBody__GetUIPixelRadius(void)const  */

double __thiscall CelestialBody__GetUIPixelRadius(CelestialBody *this)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  code *pcVar6;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  double local_24;
  double local_1c;
  double local_14;
  undefined8 local_c;
  
  pcVar6 = DebugBreak_exref;
  if ((char)((this->RingSystem).Data.Radius_km != '\0')){
    GetStabilityRegionRadius_km_Memoize(this);
    if ((char)this[1].Atmosphere.Data._pad_0x0_0 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if (this[1].RingSystem.IsValidData == false) goto LAB_0071d2f2;
  }
  if (this->SurfaceTemperature_K < 1e+18) goto LAB_0071d2f2;
  if (*(byte *)((int)&this[1].RingSystem.Data.DiffuseTexture.Type + 1) == 0) {
    iVar2 = *(int *)((int)&(this->Radii_km).Y_km + 4);
    *(uint32_t *)&local_c = (double)CONCAT44(iVar2 + 1,(undefined4)local_c);
    util__Darray_L_util__Reflectable_P_G___SetSize
              ((Darray_L_util__Reflectable_P_G_ *)((int)&(this->Radii_km).X_km + 4),
               (int *)((int)&local_c + 4));
    bVar3 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)((int)&(this->Radii_km).X_km + 4),iVar2);
    if (bVar3) {
      *(code **)((int)((this->Radii_km).Y_km + -4 + *(int *)((int)&(this->Radii_km).Y_km + 4) * 4
                ) )= (long long int (*)())(IsInHydrostaticEquilibrium_Clear);
    }
    if ((int)((this->Orbit).Data.Elements.SemiMajorAxis_km == 0)){
LAB_0071d298:
      uVar5 = 1;
    }
    else {
      local_24 = this->Albedo;
      if (((local_24 <= *(double *)&this->SpectralType) ||
          (local_24 < *(double *)&(this->Orbit).Data || local_24 == *(double *)&(this->Orbit).Data))
         || (piVar1 = &(this->Orbit).Data._pad_0x8_2, local_4c = local_24, uStack_44 = local_24,
            local_24 < *(double *)piVar1 || local_24 == *(double *)piVar1)) {
        local_24 = *(double *)&(this->Orbit).Data;
        *(uint32_t *)&local_4c = *(double *)&this->SpectralType;
        uStack_44 = *(double *)&(this->Orbit).Data._pad_0x8_2;
      }
      *(uint32_t *)&local_34 = (undefined4)local_4c;
      uStack_30 = (*(uint32_t*)((char*)&(local_4c)+4));
      uStack_2c = (undefined4)uStack_44;
      uStack_28 = (*(uint32_t*)((char*)&(uStack_44)+4));
      *(uint32_t *)&local_1c = util__Abs((double *)&uStack_2c);
      local_14 = util__Abs((double *)&local_34);
      *(uint32_t *)&local_c = util__Abs(&local_24);
      if (local_14 <= local_1c) {
        *(uint32_t *)&local_1c = util__Abs((double *)&local_34);
        cVar4 = '\0';
        if (local_c < local_1c) {
          cVar4 = '\x02';
        }
      }
      else {
        *(uint32_t *)&local_1c = util__Abs((double *)&uStack_2c);
        cVar4 = (local_c < local_1c) + '\x01';
      }
      if (cVar4 == '\0') {
LAB_0071d274:
        *(uint64_t *)&local_c = (double)CONCAT44(uStack_30,local_34);
      }
      else if (cVar4 == '\x01') {
        *(uint64_t *)&local_c = (double)CONCAT44(uStack_28,uStack_2c);
      }
      else {
        *(uint32_t *)&local_c = local_24;
        if (cVar4 != '\x02') goto LAB_0071d274;
      }
      *(uint32_t *)&local_1c = GetSphericalCutoffRadius_km(this);
      if (local_1c <= local_c) goto LAB_0071d298;
      uVar5 = 0;
    }
    pcVar6 = DebugBreak_exref;
    *(uint64_t *)&local_c = (double)CONCAT17(1,CONCAT16(uVar5,(undefined6)local_c));
    *(undefined2 *)&(this[1].RingSystem.Data.DiffuseTexture.Type) = (*(uint16_t*)((char*)&(local_c)+6));
    if (*(byte *)((int)&this[1].RingSystem.Data.DiffuseTexture.Type + 1) == 0) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  if ((char)this[1].RingSystem.Data.DiffuseTexture.Type != Type__TwoDimensional) {
    return 4.0;
  }
LAB_0071d2f2:
  if ((char)((this->RingSystem).Data.Radius_km != '\0')){
    GetStabilityRegionRadius_km_Memoize(this);
    if ((char)this[1].Atmosphere.Data._pad_0x0_0 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      (*pcVar6)();
    }
    if (this[1].RingSystem.IsValidData == false) {
      return 3.0;
    }
  }
  if (this->SurfaceTemperature_K < 1e+17) {
    return 3.0;
  }
  return 3.5;
}

//==== 0071d370 GetUnitRadiiAndPerturbation ====

/* public: class util__Maybe_L_structutil__tuple2_L_structutil__Vec3_L_double_G__Cdouble_G__G_ __thiscall
   CelestialBody__GetUnitRadiiAndPerturbation(void)const  */

Maybe_L_util__tuple2_L_util__Vec3_L_double_G__Cdouble_G___G_ * __thiscall
CelestialBody__GetUnitRadiiAndPerturbation
          (CelestialBody *this,
          Maybe_L_util__tuple2_L_util__Vec3_L_double_G__Cdouble_G___G_ *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  double dVar7;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  double local_7c;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  double local_64;
  double local_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  double local_44;
  undefined8 local_3c;
  undefined8 uStack_34;
  double local_2c;
  undefined8 local_24;
  double local_1c;
  double local_14;
  double local_c;
  
  if (*(int *)&(this->Orbit).Data.Elements.SemiMajorAxis_km == 0) goto LAB_0071dde6;
  if (*(byte *)((int)&this[1].RingSystem.Data.DiffuseTexture.Type + 1) == 0) {
    iVar2 = *(int *)((int)&(this->Radii_km).Y_km + 4);
    local_24 = (double)CONCAT44(iVar2 + 1,(undefined4)local_24);
    util__Darray_L_util__Reflectable_P_G___SetSize
              ((Darray_L_util__Reflectable_P_G_ *)((int)&(this->Radii_km).X_km + 4),
               (int *)((int)&local_24 + 4));
    bVar4 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)((int)&(this->Radii_km).X_km + 4),iVar2);
    if (bVar4) {
      *(code **)((int)((this->Radii_km).Y_km + -4 + *(int *)((int)&(this->Radii_km).Y_km + 4) * 4
                ) )= (long long int (*)())(IsInHydrostaticEquilibrium_Clear);
    }
    if ((int)((this->Orbit).Data.Elements.SemiMajorAxis_km == 0)){
LAB_0071d4e5:
      uVar6 = 1;
    }
    else {
      local_64 = this->Albedo;
      if (((local_64 <= *(double *)&this->SpectralType) ||
          (local_64 < *(double *)&(this->Orbit).Data || local_64 == *(double *)&(this->Orbit).Data))
         || (piVar1 = &(this->Orbit).Data._pad_0x8_2, local_3c = local_64, uStack_34 = local_64,
            local_64 < *(double *)piVar1 || local_64 == *(double *)piVar1)) {
        uStack_34 = *(double *)&(this->Orbit).Data._pad_0x8_2;
        local_64 = *(double *)&(this->Orbit).Data;
        local_3c = *(double *)&this->SpectralType;
      }
      local_74 = (undefined4)local_3c;
      uStack_70 = (*(uint32_t*)((char*)&(local_3c)+4));
      uStack_6c = (undefined4)uStack_34;
      uStack_68 = (*(uint32_t*)((char*)&(uStack_34)+4));
      local_2c = local_64;
      local_24 = util__Abs((double *)&uStack_6c);
      local_14 = util__Abs((double *)&local_74);
      *(uint32_t *)&local_1c = util__Abs(&local_64);
      if (local_14 <= local_24) {
        local_14 = util__Abs((double *)&local_74);
        cVar5 = '\0';
        if (local_1c < local_14) {
          cVar5 = '\x02';
        }
      }
      else {
        local_14 = util__Abs((double *)&uStack_6c);
        cVar5 = (local_1c < local_14) + '\x01';
      }
      if (cVar5 == '\0') {
LAB_0071d4c1:
        local_24 = (double)CONCAT44(uStack_70,local_74);
      }
      else if (cVar5 == '\x01') {
        local_24 = (double)CONCAT44(uStack_68,uStack_6c);
      }
      else {
        local_24 = local_64;
        if (cVar5 != '\x02') goto LAB_0071d4c1;
      }
      local_14 = GetSphericalCutoffRadius_km(this);
      if (local_14 <= local_24) goto LAB_0071d4e5;
      uVar6 = 0;
    }
    local_24 = (double)CONCAT17(1,CONCAT16(uVar6,(undefined6)local_24));
    *(undefined2 *)&(this[1].RingSystem.Data.DiffuseTexture.Type) = (*(uint16_t*)((char*)&(local_24)+6));
    if (*(byte *)((int)&this[1].RingSystem.Data.DiffuseTexture.Type + 1) == 0) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  if ((char)this[1].RingSystem.Data.DiffuseTexture.Type != Type__TwoDimensional) {
    local_64 = this->Albedo;
    if (((local_64 <= *(double *)&this->SpectralType) ||
        (local_64 < *(double *)&(this->Orbit).Data || local_64 == *(double *)&(this->Orbit).Data))
       || (piVar1 = &(this->Orbit).Data._pad_0x8_2, local_3c = local_64, uStack_34 = local_64,
          local_64 < *(double *)piVar1 || local_64 == *(double *)piVar1)) {
      uStack_34 = *(double *)&(this->Orbit).Data._pad_0x8_2;
      local_64 = *(double *)&(this->Orbit).Data;
      local_3c = *(double *)&this->SpectralType;
    }
    local_74 = (undefined4)local_3c;
    uStack_70 = (*(uint32_t*)((char*)&(local_3c)+4));
    uStack_6c = (undefined4)uStack_34;
    uStack_68 = (*(uint32_t*)((char*)&(uStack_34)+4));
    local_2c = local_64;
    local_14 = util__Abs((double *)&uStack_6c);
    local_24 = util__Abs((double *)&local_74);
    *(uint32_t *)&local_1c = util__Abs(&local_64);
    if (local_14 <= local_24) {
      local_14 = util__Abs((double *)&local_74);
      cVar5 = '\0';
      if (local_14 < local_1c) {
        cVar5 = '\x02';
      }
    }
    else {
      local_14 = util__Abs((double *)&uStack_6c);
      cVar5 = (local_14 < local_1c) + '\x01';
    }
    if (cVar5 == '\0') {
LAB_0071d60f:
      local_24 = (double)CONCAT44(uStack_70,local_74);
    }
    else if (cVar5 == '\x01') {
      local_24 = (double)CONCAT44(uStack_68,uStack_6c);
    }
    else {
      local_24 = local_64;
      if (cVar5 != '\x02') goto LAB_0071d60f;
    }
    local_7c = this->Albedo;
    if (((local_7c <= *(double *)&this->SpectralType) ||
        (local_7c < *(double *)&(this->Orbit).Data || local_7c == *(double *)&(this->Orbit).Data))
       || (piVar1 = &(this->Orbit).Data._pad_0x8_2, local_3c = local_7c, uStack_34 = local_7c,
          local_7c < *(double *)piVar1 || local_7c == *(double *)piVar1)) {
      uStack_34 = *(double *)&(this->Orbit).Data._pad_0x8_2;
      local_7c = *(double *)&(this->Orbit).Data;
      local_3c = *(double *)&this->SpectralType;
    }
    local_8c = (undefined4)local_3c;
    uStack_88 = (*(uint32_t*)((char*)&(local_3c)+4));
    uStack_84 = (undefined4)uStack_34;
    uStack_80 = (*(uint32_t*)((char*)&(uStack_34)+4));
    local_2c = local_7c;
    local_5c = util__Abs((double *)&uStack_84);
    local_14 = util__Abs((double *)&local_8c);
    *(uint32_t *)&local_1c = util__Abs(&local_7c);
    if (local_14 <= local_5c) {
      local_5c = util__Abs((double *)&local_8c);
      cVar5 = '\0';
      if (local_1c < local_5c) {
        cVar5 = '\x02';
      }
    }
    else {
      local_5c = util__Abs((double *)&uStack_84);
      cVar5 = (local_1c < local_5c) + '\x01';
    }
    if (cVar5 == '\0') {
      *(uint64_t *)&local_1c = (double)CONCAT44(uStack_88,local_8c);
    }
    else if (cVar5 == '\x01') {
      *(uint64_t *)&local_1c = (double)CONCAT44(uStack_80,uStack_84);
    }
    else if (cVar5 == '\x02') {
      *(uint32_t *)&local_1c = local_7c;
    }
    else {
      *(uint64_t *)&local_1c = (double)CONCAT44(uStack_88,local_8c);
    }
    local_44 = this->Albedo;
    if (((local_44 <= *(double *)&this->SpectralType) ||
        (local_44 < *(double *)&(this->Orbit).Data || local_44 == *(double *)&(this->Orbit).Data))
       || (piVar1 = &(this->Orbit).Data._pad_0x8_2, local_54 = local_44, uStack_4c = local_44,
          local_44 < *(double *)piVar1 || local_44 == *(double *)piVar1)) {
      local_44 = *(double *)&(this->Orbit).Data;
      *(uint32_t *)&local_54 = *(double *)&this->SpectralType;
      uStack_4c = *(double *)&(this->Orbit).Data._pad_0x8_2;
    }
    local_3c = local_54;
    uStack_34 = uStack_4c;
    local_2c = local_44;
    local_5c = util__Abs((double *)&uStack_34);
    *(uint32_t *)&local_c = util__Abs((double *)&local_3c);
    local_14 = util__Abs(&local_2c);
    if (local_5c <= local_c) {
      *(uint32_t *)&local_c = util__Abs((double *)&local_3c);
      cVar5 = '\0';
      if (local_c < local_14) {
        cVar5 = '\x02';
      }
    }
    else {
      *(uint32_t *)&local_c = util__Abs((double *)&uStack_34);
      cVar5 = (local_c < local_14) + '\x01';
    }
    dVar7 = local_3c;
    if (((cVar5 != '\0') && (dVar7 = uStack_34, cVar5 != '\x01')) &&
       (dVar7 = local_3c, cVar5 == '\x02')) {
      dVar7 = local_2c;
    }
    if ((local_24 - local_1c) / dVar7 <= 0.1) {
LAB_0071dde6:
      *(undefined4 *)&(__return_storage_ptr__->Data).Value1.X = 0;
      *(undefined4 *)((int)&(__return_storage_ptr__->Data).Value1.X + 4) = 0;
      *(undefined4 *)&(__return_storage_ptr__->Data).Value1.Y = 0;
      *(undefined4 *)((int)&(__return_storage_ptr__->Data).Value1.Y + 4) = 0;
      *(undefined4 *)&(__return_storage_ptr__->Data).Value1.Z = 0;
      *(undefined4 *)((int)&(__return_storage_ptr__->Data).Value1.Z + 4) = 0;
      *(undefined4 *)&(__return_storage_ptr__->Data).Value2 = 0;
      *(undefined4 *)((int)&(__return_storage_ptr__->Data).Value2 + 4) = 0;
      __return_storage_ptr__->IsValidData = false;
      return __return_storage_ptr__;
    }
  }
  local_44 = this->Albedo;
  if (((local_44 <= *(double *)&this->SpectralType) ||
      (local_44 < *(double *)&(this->Orbit).Data || local_44 == *(double *)&(this->Orbit).Data)) ||
     (piVar1 = &(this->Orbit).Data._pad_0x8_2, local_54 = local_44, uStack_4c = local_44,
     local_44 < *(double *)piVar1 || local_44 == *(double *)piVar1)) {
    local_44 = *(double *)&(this->Orbit).Data;
    *(uint32_t *)&local_54 = *(double *)&this->SpectralType;
    uStack_4c = *(double *)&(this->Orbit).Data._pad_0x8_2;
  }
  local_3c = local_54;
  uStack_34 = uStack_4c;
  local_2c = local_44;
  local_5c = util__Abs((double *)&uStack_34);
  *(uint32_t *)&local_c = util__Abs((double *)&local_3c);
  local_14 = util__Abs(&local_2c);
  if (local_c <= local_5c) {
    *(uint32_t *)&local_c = util__Abs((double *)&local_3c);
    cVar5 = '\0';
    if (local_14 < local_c) {
      cVar5 = '\x02';
    }
  }
  else {
    *(uint32_t *)&local_c = util__Abs((double *)&uStack_34);
    cVar5 = (local_14 < local_c) + '\x01';
  }
  *(uint32_t *)&local_1c = local_3c;
  if (((cVar5 != '\0') && (local_1c = uStack_34, cVar5 != '\x01')) &&
     (local_1c = local_3c, cVar5 == '\x02')) {
    *(uint32_t *)&local_1c = local_2c;
  }
  *(uint32_t *)&local_c = GetSphericalCutoffRadius_km(this);
  *(uint32_t *)&local_c = local_1c / local_c;
  dVar7 = local_c;
  if (local_c <= 0.0) {
    dVar7 = 0.0;
  }
  if (1.0 <= dVar7) {
    dVar7 = 1.0;
  }
  dVar7 = (1.0 - dVar7) * (1.0 - dVar7);
  if (0.0 < dVar7) goto LAB_0071dc5a;
  local_44 = this->Albedo;
  if (((local_44 <= *(double *)&this->SpectralType) ||
      (local_44 < *(double *)&(this->Orbit).Data || local_44 == *(double *)&(this->Orbit).Data)) ||
     (piVar1 = &(this->Orbit).Data._pad_0x8_2, local_54 = local_44, uStack_4c = local_44,
     local_44 < *(double *)piVar1 || local_44 == *(double *)piVar1)) {
    local_44 = *(double *)&(this->Orbit).Data;
    *(uint32_t *)&local_54 = *(double *)&this->SpectralType;
    uStack_4c = *(double *)&(this->Orbit).Data._pad_0x8_2;
  }
  local_3c = local_54;
  uStack_34 = uStack_4c;
  local_2c = local_44;
  *(uint32_t *)&local_c = util__Abs((double *)&uStack_34);
  local_5c = util__Abs((double *)&local_3c);
  local_14 = util__Abs(&local_2c);
  if (local_c <= local_5c) {
    *(uint32_t *)&local_c = util__Abs((double *)&local_3c);
    cVar5 = '\0';
    if (local_c < local_14) {
      cVar5 = '\x02';
    }
  }
  else {
    *(uint32_t *)&local_c = util__Abs((double *)&uStack_34);
    cVar5 = (local_c < local_14) + '\x01';
  }
  *(uint32_t *)&local_1c = local_3c;
  if (((cVar5 != '\0') && (local_1c = uStack_34, cVar5 != '\x01')) &&
     (local_1c = local_3c, cVar5 == '\x02')) {
    *(uint32_t *)&local_1c = local_2c;
  }
  local_7c = this->Albedo;
  if (((local_7c <= *(double *)&this->SpectralType) ||
      (local_7c < *(double *)&(this->Orbit).Data || local_7c == *(double *)&(this->Orbit).Data)) ||
     (piVar1 = &(this->Orbit).Data._pad_0x8_2, local_54 = local_7c, uStack_4c = local_7c,
     local_7c < *(double *)piVar1 || local_7c == *(double *)piVar1)) {
    uStack_4c = *(double *)&(this->Orbit).Data._pad_0x8_2;
    local_7c = *(double *)&(this->Orbit).Data;
    *(uint32_t *)&local_54 = *(double *)&this->SpectralType;
  }
  local_8c = (undefined4)local_54;
  uStack_88 = (*(uint32_t*)((char*)&(local_54)+4));
  uStack_84 = (undefined4)uStack_4c;
  uStack_80 = (*(uint32_t*)((char*)&(uStack_4c)+4));
  local_44 = local_7c;
  local_5c = util__Abs((double *)&uStack_84);
  *(uint32_t *)&local_c = util__Abs((double *)&local_8c);
  local_14 = util__Abs(&local_7c);
  if (local_c <= local_5c) {
    *(uint32_t *)&local_c = util__Abs((double *)&local_8c);
    cVar5 = '\0';
    if (local_14 < local_c) {
      cVar5 = '\x02';
    }
  }
  else {
    *(uint32_t *)&local_c = util__Abs((double *)&uStack_84);
    cVar5 = (local_14 < local_c) + '\x01';
  }
  if (cVar5 == '\0') {
    local_24 = (double)CONCAT44(uStack_88,local_8c);
  }
  else if (cVar5 == '\x01') {
    local_24 = (double)CONCAT44(uStack_80,uStack_84);
  }
  else if (cVar5 == '\x02') {
    local_24 = local_7c;
  }
  else {
    local_24 = (double)CONCAT44(uStack_88,local_8c);
  }
  local_64 = this->Albedo;
  if (((local_64 <= *(double *)&this->SpectralType) ||
      (local_64 < *(double *)&(this->Orbit).Data || local_64 == *(double *)&(this->Orbit).Data)) ||
     (piVar1 = &(this->Orbit).Data._pad_0x8_2, local_54 = local_64, uStack_4c = local_64,
     local_64 < *(double *)piVar1 || local_64 == *(double *)piVar1)) {
    uStack_4c = *(double *)&(this->Orbit).Data._pad_0x8_2;
    local_64 = *(double *)&(this->Orbit).Data;
    *(uint32_t *)&local_54 = *(double *)&this->SpectralType;
  }
  local_74 = (undefined4)local_54;
  uStack_70 = (*(uint32_t*)((char*)&(local_54)+4));
  uStack_6c = (undefined4)uStack_4c;
  uStack_68 = (*(uint32_t*)((char*)&(uStack_4c)+4));
  local_44 = local_64;
  *(uint32_t *)&local_c = util__Abs((double *)&uStack_6c);
  local_5c = util__Abs((double *)&local_74);
  local_14 = util__Abs(&local_64);
  if (local_c <= local_5c) {
    *(uint32_t *)&local_c = util__Abs((double *)&local_74);
    cVar5 = '\0';
    if (local_c < local_14) {
      cVar5 = '\x02';
    }
  }
  else {
    *(uint32_t *)&local_c = util__Abs((double *)&uStack_6c);
    cVar5 = (local_c < local_14) + '\x01';
  }
  if (cVar5 == '\0') {
LAB_0071dc3f:
    dVar7 = (double)CONCAT44(uStack_70,local_74);
  }
  else if (cVar5 == '\x01') {
    dVar7 = (double)CONCAT44(uStack_68,uStack_6c);
  }
  else {
    dVar7 = local_64;
    if (cVar5 != '\x02') goto LAB_0071dc3f;
  }
  dVar7 = ((local_1c - local_24) / dVar7) * 0.5;
LAB_0071dc5a:
  *(uint32_t *)&local_1c = 0.6;
  if (dVar7 <= 0.6) {
    *(uint32_t *)&local_1c = dVar7;
  }
  local_44 = this->Albedo;
  if (((local_44 <= *(double *)&this->SpectralType) ||
      (local_44 < *(double *)&(this->Orbit).Data || local_44 == *(double *)&(this->Orbit).Data)) ||
     (piVar1 = &(this->Orbit).Data._pad_0x8_2, local_54 = local_44, uStack_4c = local_44,
     local_44 < *(double *)piVar1 || local_44 == *(double *)piVar1)) {
    local_44 = *(double *)&(this->Orbit).Data;
    *(uint32_t *)&local_54 = *(double *)&this->SpectralType;
    uStack_4c = *(double *)&(this->Orbit).Data._pad_0x8_2;
  }
  local_3c = local_54;
  uStack_34 = uStack_4c;
  local_2c = local_44;
  *(uint32_t *)&local_c = util__Abs((double *)&uStack_34);
  local_5c = util__Abs((double *)&local_3c);
  local_14 = util__Abs(&local_2c);
  if (local_c <= local_5c) {
    dVar7 = util__Abs((double *)&local_3c);
    cVar5 = '\0';
    if (dVar7 < local_14) {
      cVar5 = '\x02';
    }
  }
  else {
    dVar7 = util__Abs((double *)&uStack_34);
    cVar5 = (dVar7 < local_14) + '\x01';
  }
  if ((cVar5 == '\0') || ((cVar5 != '\x01' && (uStack_34 = local_2c, cVar5 != '\x02')))) {
    uStack_34 = local_3c;
  }
  dVar7 = this->Albedo;
  if (((dVar7 <= *(double *)&this->SpectralType) ||
      (dVar7 < *(double *)&(this->Orbit).Data || dVar7 == *(double *)&(this->Orbit).Data)) ||
     (piVar1 = &(this->Orbit).Data._pad_0x8_2, local_54 = dVar7, uStack_4c = dVar7,
     dVar7 < *(double *)piVar1 || dVar7 == *(double *)piVar1)) {
    dVar7 = *(double *)&(this->Orbit).Data;
    *(uint32_t *)&local_54 = *(double *)&this->SpectralType;
    uStack_4c = *(double *)&(this->Orbit).Data._pad_0x8_2;
  }
  __return_storage_ptr__->IsValidData = true;
  if (local_1c <= 0.0) {
    *(uint32_t *)&local_1c = 0.0;
  }
  (*(uint32_t*)((char*)&(auVar3)+8)) = SUB84(uStack_4c / uStack_34,0);
  (*(uint64_t*)&(auVar3)) = local_54 / uStack_34;
  (*(uint32_t *)((char *)&(auVar3) + 12)) = (int)((ulonglong)(uStack_4c / uStack_34) >> 0x20);
  (__return_storage_ptr__->Data).Value1.X = local_54 / uStack_34;
  (__return_storage_ptr__->Data).Value1.Y = (double)(*(uint64_t*)((char*)&(auVar3)+8));
  if (1.0 <= local_1c) {
    *(uint32_t *)&local_1c = 1.0;
  }
  (__return_storage_ptr__->Data).Value1.Z = dVar7 / uStack_34;
  (__return_storage_ptr__->Data).Value2 = local_1c;
  return __return_storage_ptr__;
}

//==== 0071de00 GetVisualRadius_km ====

/* public: double __thiscall CelestialBody__GetVisualRadius_km(void)const  */

double __thiscall CelestialBody__GetVisualRadius_km(CelestialBody *this)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  Range_L_double_G_ *pRVar4;
  double dVar5;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  double local_3c;
  undefined8 local_34;
  Range_L_double_G_ RStack_2c;
  double local_1c;
  double local_14;
  double local_c;
  
  local_3c = this->Albedo;
  if (((local_3c <= *(double *)&this->SpectralType) ||
      (local_3c < *(double *)&(this->Orbit).Data || local_3c == *(double *)&(this->Orbit).Data)) ||
     (piVar1 = &(this->Orbit).Data._pad_0x8_2, local_34 = local_3c, RStack_2c.Lower = local_3c,
     local_3c < *(double *)piVar1 || local_3c == *(double *)piVar1)) {
    RStack_2c.Lower = *(double *)&(this->Orbit).Data._pad_0x8_2;
    local_3c = *(double *)&(this->Orbit).Data;
    *(uint32_t *)&local_34 = *(double *)&this->SpectralType;
  }
  *(uint32_t *)&local_4c = (undefined4)local_34;
  uStack_48 = (*(uint32_t*)((char*)&(local_34)+4));
  uStack_44 = RStack_2c.Lower;
  uStack_40 = (*(uint32_t *)((char *)&(RStack_2c.Lower) + 4));
  RStack_2c.Upper = local_3c;
  local_14 = util__Abs((double *)&uStack_44);
  *(uint32_t *)&local_1c = util__Abs((double *)&local_4c);
  *(uint32_t *)&local_c = util__Abs(&local_3c);
  if (local_14 <= local_1c) {
    *(uint32_t *)&local_1c = util__Abs((double *)&local_4c);
    cVar2 = '\0';
    if (local_1c < local_c) {
      cVar2 = '\x02';
    }
  }
  else {
    *(uint32_t *)&local_1c = util__Abs((double *)&uStack_44);
    cVar2 = (local_1c < local_c) + '\x01';
  }
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      *(uint64_t *)&local_c = (double)CONCAT44(uStack_40,uStack_44);
      goto LAB_0071def7;
    }
    *(uint32_t *)&local_c = local_3c;
    if (cVar2 == '\x02') goto LAB_0071def7;
  }
  *(uint64_t *)&local_c = (double)CONCAT44(uStack_48,local_4c);
LAB_0071def7:
  bVar3 = AreRingsVisible(this);
  if (!bVar3) {
    dVar5 = 0.0;
    if (0.0 <= local_c) {
      dVar5 = local_c;
    }
    return dVar5;
  }
  pRVar4 = (Range_L_double_G_ *)(uintptr_t)(GetRingSize_km(this,&RStack_2c));
  dVar5 = pRVar4->Upper;
  if (pRVar4->Upper <= local_c) {
    dVar5 = local_c;
  }
  return dVar5;
}

//==== 0071e380 HasInfiniteStabilityRegion ====


/* public: bool __thiscall CelestialBody__HasInfiniteStabilityRegion(void)const  */

bool __thiscall CelestialBody__HasInfiniteStabilityRegion(CelestialBody *this)

{
  return (char)((this->RingSystem).Data.Radius_km == '\0');
}





//==== 0071e390 IsAMoon ====


/* public: bool __thiscall CelestialBody__IsAMoon(void)const  */

bool __thiscall CelestialBody__IsAMoon(CelestialBody *this)

{
  if (((char)((this->RingSystem).Data.Radius_km != '\0') &&
     (*(char *)((int)((this->Orbit).Data.Elements.LongitudeOfAscendingNode_degrees + 0xf8) !=
      '\0')) )){
    return true;
  }
  return false;
}





//==== 0071e3b0 IsAsteroid ====


/* public: bool __thiscall CelestialBody__IsAsteroid(void)const  */

bool __thiscall CelestialBody__IsAsteroid(CelestialBody *this)

{
  bool bVar1;
  
  if (((char)((this->RingSystem).Data.Radius_km == '\0') ||
     (*(char *)((int)((this->Orbit).Data.Elements.LongitudeOfAscendingNode_degrees + 0xf8) ==
      '\0')) )){
    bVar1 = IsMajorPlanet(this);
    if (!bVar1) {
      bVar1 = IsDwarfPlanet(this);
      if (!bVar1) {
        return true;
      }
    }
  }
  return false;
}





//==== 0071e3f0 IsBodyAParent ====


/* public: bool __thiscall CelestialBody__IsBodyAParent(struct CelestialBody *)const  */

bool __thiscall CelestialBody__IsBodyAParent(CelestialBody *this,CelestialBody *param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((char)((this->RingSystem).Data.Radius_km == '\0')){
    return false;
  }
  do {
    if (bVar1 != false) {
      return bVar1;
    }
    if ((char)((this->RingSystem).Data.Radius_km == '\0')){
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    this = *(CelestialBody * *)&(this->Orbit).Data.Elements.LongitudeOfAscendingNode_degrees;
    if (this == param_1) {
      bVar1 = true;
    }
  } while ((char)((this->RingSystem).Data.Radius_km != '\0'));
  return bVar1;
}





//==== 0071e470 IsDwarfPlanet ====

/* public: bool __thiscall CelestialBody__IsDwarfPlanet(void)const  */

bool __thiscall CelestialBody__IsDwarfPlanet(CelestialBody *this)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  double local_24;
  double local_1c;
  double local_14;
  undefined8 local_c;
  
  if ((char)((this->RingSystem).Data.Radius_km != '\0')){
    GetStabilityRegionRadius_km_Memoize(this);
    if ((char)this[1].Atmosphere.Data._pad_0x0_0 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if (this[1].RingSystem.IsValidData == false) {
      return false;
    }
  }
  if (this->SurfaceTemperature_K < 1e+18) {
    return false;
  }
  if (*(byte *)((int)&this[1].RingSystem.Data.DiffuseTexture.Type + 1) != 0) goto LAB_0071e663;
  iVar2 = *(int *)((int)&(this->Radii_km).Y_km + 4);
  *(uint32_t *)&local_c = (double)CONCAT44(iVar2 + 1,(undefined4)local_c);
  util__Darray_L_util__Reflectable_P_G___SetSize
            ((Darray_L_util__Reflectable_P_G_ *)((int)&(this->Radii_km).X_km + 4),
             (int *)((int)&local_c + 4));
  bVar3 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)((int)&(this->Radii_km).X_km + 4),iVar2);
  if (bVar3) {
    *(code **)((int)((this->Radii_km).Y_km + -4 + *(int *)((int)&(this->Radii_km).Y_km + 4) * 4)
         )= (long long int (*)())(IsInHydrostaticEquilibrium_Clear);
  }
  if ((int)((this->Orbit).Data.Elements.SemiMajorAxis_km == 0)){
LAB_0071e628:
    uVar5 = 1;
  }
  else {
    local_24 = this->Albedo;
    if (((local_24 <= *(double *)&this->SpectralType) ||
        (local_24 < *(double *)&(this->Orbit).Data || local_24 == *(double *)&(this->Orbit).Data))
       || (piVar1 = &(this->Orbit).Data._pad_0x8_2, local_4c = local_24, uStack_44 = local_24,
          local_24 < *(double *)piVar1 || local_24 == *(double *)piVar1)) {
      local_24 = *(double *)&(this->Orbit).Data;
      *(uint32_t *)&local_4c = *(double *)&this->SpectralType;
      uStack_44 = *(double *)&(this->Orbit).Data._pad_0x8_2;
    }
    *(uint32_t *)&local_34 = (undefined4)local_4c;
    uStack_30 = (*(uint32_t*)((char*)&(local_4c)+4));
    uStack_2c = (undefined4)uStack_44;
    uStack_28 = (*(uint32_t*)((char*)&(uStack_44)+4));
    *(uint32_t *)&local_1c = util__Abs((double *)&uStack_2c);
    local_14 = util__Abs((double *)&local_34);
    *(uint32_t *)&local_c = util__Abs(&local_24);
    if (local_14 <= local_1c) {
      *(uint32_t *)&local_1c = util__Abs((double *)&local_34);
      cVar4 = '\0';
      if (local_c < local_1c) {
        cVar4 = '\x02';
      }
    }
    else {
      *(uint32_t *)&local_1c = util__Abs((double *)&uStack_2c);
      cVar4 = (local_c < local_1c) + '\x01';
    }
    if (cVar4 == '\0') {
LAB_0071e604:
      *(uint64_t *)&local_c = (double)CONCAT44(uStack_30,local_34);
    }
    else if (cVar4 == '\x01') {
      *(uint64_t *)&local_c = (double)CONCAT44(uStack_28,uStack_2c);
    }
    else {
      *(uint32_t *)&local_c = local_24;
      if (cVar4 != '\x02') goto LAB_0071e604;
    }
    *(uint32_t *)&local_1c = GetSphericalCutoffRadius_km(this);
    if (local_1c <= local_c) goto LAB_0071e628;
    uVar5 = 0;
  }
  *(uint64_t *)&local_c = (double)CONCAT17(1,CONCAT16(uVar5,(undefined6)local_c));
  *(undefined2 *)&(this[1].RingSystem.Data.DiffuseTexture.Type) = (*(uint16_t*)((char*)&(local_c)+6));
  if (*(byte *)((int)&this[1].RingSystem.Data.DiffuseTexture.Type + 1) == 0) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
LAB_0071e663:
  if (((((char)this[1].RingSystem.Data.DiffuseTexture.Type != Type__TwoDimensional) &&
       (((char)((this->RingSystem).Data.Radius_km == '\0' ||
        (*(char *)((int)((this->Orbit).Data.Elements.LongitudeOfAscendingNode_degrees + 0xf8) ==
         '\0')))) && (5e+20 < this->SurfaceTemperature_K)) && (bVar3 = IsMajorPlanet(this), !bVar3))
  )){
    return true;
  }
  return false;
}

//==== 0071e6b0 IsGenerated_0071e6b0 ====

/* public: bool __thiscall CelestialBody__IsGenerated(void)const  */

bool __thiscall CelestialBody__IsGenerated(CelestialBody *this)

{
  return (bool)(char)this[1].Atmosphere.Data.Composition._pad_0x0_0;
}

//==== 0071e6c0 IsInHydrostaticEquilibrium_Clear ====


/* public: void __thiscall CelestialBody__IsInHydrostaticEquilibrium_Clear(void)const  */

void __thiscall CelestialBody__IsInHydrostaticEquilibrium_Clear(CelestialBody *this)

{
  *(undefined2 *)&this[1].RingSystem.Data.DiffuseTexture.Type = Type__TwoDimensional;
  return;
}





//==== 0071e6d0 IsLuminousBody ====

/* public: bool __thiscall CelestialBody__IsLuminousBody(void)const  */

bool __thiscall CelestialBody__IsLuminousBody(CelestialBody *this)

{
  return 798.0 < (double)((this->Orbit).Data.Elements._pad_0x8_2);
}

//==== 0071e6f0 IsMajorObject ====

/* public: bool __thiscall CelestialBody__IsMajorObject(void)const  */

bool __thiscall CelestialBody__IsMajorObject(CelestialBody *this)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  double local_24;
  double local_1c;
  double local_14;
  undefined8 local_c;
  
  if ((char)((this->RingSystem).Data.Radius_km != '\0')){
    GetStabilityRegionRadius_km_Memoize(this);
    if ((char)this[1].Atmosphere.Data._pad_0x0_0 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if (this[1].RingSystem.IsValidData == false) {
      return false;
    }
  }
  if (this->SurfaceTemperature_K < 1e+18) {
    return false;
  }
  if (*(byte *)((int)&this[1].RingSystem.Data.DiffuseTexture.Type + 1) != 0) goto LAB_0071e8e3;
  iVar2 = *(int *)((int)&(this->Radii_km).Y_km + 4);
  *(uint32_t *)&local_c = (double)CONCAT44(iVar2 + 1,(undefined4)local_c);
  util__Darray_L_util__Reflectable_P_G___SetSize
            ((Darray_L_util__Reflectable_P_G_ *)((int)&(this->Radii_km).X_km + 4),
             (int *)((int)&local_c + 4));
  bVar3 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)((int)&(this->Radii_km).X_km + 4),iVar2);
  if (bVar3) {
    *(code **)((int)((this->Radii_km).Y_km + -4 + *(int *)((int)&(this->Radii_km).Y_km + 4) * 4)
         )= (long long int (*)())(IsInHydrostaticEquilibrium_Clear);
  }
  if ((int)((this->Orbit).Data.Elements.SemiMajorAxis_km == 0)){
LAB_0071e8a8:
    uVar5 = 1;
  }
  else {
    local_24 = this->Albedo;
    if (((local_24 <= *(double *)&this->SpectralType) ||
        (local_24 < *(double *)&(this->Orbit).Data || local_24 == *(double *)&(this->Orbit).Data))
       || (piVar1 = &(this->Orbit).Data._pad_0x8_2, local_4c = local_24, uStack_44 = local_24,
          local_24 < *(double *)piVar1 || local_24 == *(double *)piVar1)) {
      local_24 = *(double *)&(this->Orbit).Data;
      *(uint32_t *)&local_4c = *(double *)&this->SpectralType;
      uStack_44 = *(double *)&(this->Orbit).Data._pad_0x8_2;
    }
    *(uint32_t *)&local_34 = (undefined4)local_4c;
    uStack_30 = (*(uint32_t*)((char*)&(local_4c)+4));
    uStack_2c = (undefined4)uStack_44;
    uStack_28 = (*(uint32_t*)((char*)&(uStack_44)+4));
    *(uint32_t *)&local_1c = util__Abs((double *)&uStack_2c);
    local_14 = util__Abs((double *)&local_34);
    *(uint32_t *)&local_c = util__Abs(&local_24);
    if (local_14 <= local_1c) {
      *(uint32_t *)&local_1c = util__Abs((double *)&local_34);
      cVar4 = '\0';
      if (local_c < local_1c) {
        cVar4 = '\x02';
      }
    }
    else {
      *(uint32_t *)&local_1c = util__Abs((double *)&uStack_2c);
      cVar4 = (local_c < local_1c) + '\x01';
    }
    if (cVar4 == '\0') {
LAB_0071e884:
      *(uint64_t *)&local_c = (double)CONCAT44(uStack_30,local_34);
    }
    else if (cVar4 == '\x01') {
      *(uint64_t *)&local_c = (double)CONCAT44(uStack_28,uStack_2c);
    }
    else {
      *(uint32_t *)&local_c = local_24;
      if (cVar4 != '\x02') goto LAB_0071e884;
    }
    *(uint32_t *)&local_1c = GetSphericalCutoffRadius_km(this);
    if (local_1c <= local_c) goto LAB_0071e8a8;
    uVar5 = 0;
  }
  *(uint64_t *)&local_c = (double)CONCAT17(1,CONCAT16(uVar5,(undefined6)local_c));
  *(undefined2 *)&(this[1].RingSystem.Data.DiffuseTexture.Type) = (*(uint16_t*)((char*)&(local_c)+6));
  if (*(byte *)((int)&this[1].RingSystem.Data.DiffuseTexture.Type + 1) == 0) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
LAB_0071e8e3:
  if ((char)this[1].RingSystem.Data.DiffuseTexture.Type == Type__TwoDimensional) {
    return false;
  }
  return true;
}

