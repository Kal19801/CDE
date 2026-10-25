// pilot_sweep_sweep06.c - assembled by scripts/sweep_assemble.py (r19)
// reuses fam8_assemble fix passes (zip oracle/in-batch protos/vft channel/data closure)
/* ---- r20 incomplete-type forward decls (pointer-position only) ---- */
typedef struct Astrogation__AstrogateResult Astrogation__AstrogateResult;
typedef struct util__PhysicalState_L_struct_util__Vec3_L_double_G___G util__PhysicalState_L_struct_util__Vec3_L_double_G___G;
typedef struct util__WeakPtr_L_class_Fleet_G util__WeakPtr_L_class_Fleet_G;
#include "port_prelude.h"
#include "cde_win32_compat.h"
#include "cde_types_r20.h"
typedef union {
  struct {
    undefined8 _0_8_;
    undefined8 _8_8_;
  };
  struct {
    undefined4 _0_4_;
    undefined4 _4_4_;
    undefined4 _8_4_;
    undefined4 _12_4_;
  };
  undefined1 raw[32];
} slice_view;
/* ---- r21 hdr-conflict renames (decl stays OLD for game TUs; pilot impl+calls = NEW; linker aliases OLD -> NEW) ---- */
#undef BriefingsHandler__GetLevelIcon
#define BriefingsHandler__GetLevelIcon BriefingsHandler__GetLevelIcon__r20
#undef BriefingsHandler__PlaySelectedLevel
#define BriefingsHandler__PlaySelectedLevel BriefingsHandler__PlaySelectedLevel__r20
#undef CapitalShipComponent__HasBeenDamaged
#define CapitalShipComponent__HasBeenDamaged CapitalShipComponent__HasBeenDamaged__r20
#undef ScenarioEditor__RebuildCurrentLevel
#define ScenarioEditor__RebuildCurrentLevel ScenarioEditor__RebuildCurrentLevel__r20
/* ---- externs: stub-oracle names (K&R; ret types by call site) ---- */
extern int FixedOrbit__dtor(); /* K&R stub; ret by call site */
extern int Icons_Lock(); /* K&R stub; ret by call site */
extern int Icons_LockWithSmallUnlock(); /* K&R stub; ret by call site */
extern int NodeMouseOver__dtor(); /* K&R stub; ret by call site */

//==== 006cb590 6cb590_BriefingsHandler__GetLevelIcon ====
// decompiled by BatchDecomp @ 6cb590 name=GetLevelIcon conv=__thiscall body=153

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: void (__cdecl*__thiscall BriefingsHandler__GetLevelIcon(class util__Reflectable *)const
   )(void) */

_func_void * __thiscall BriefingsHandler__GetLevelIcon(BriefingsHandler *this,Reflectable *param_1)

{
  bool bVar1;
  bool bVar2;
  GameManager *this_00;
  DataParser *pDVar3;
  Campaign *this_01;
  LevelRecord *this_02;
  Type TVar4;
  _func_void *p_Var5;
  code *pcVar6;
  HWND unaff_EDI;
  
  this_00 = (GameManager *)Manager__GetParent(unaff_EDI);
  pDVar3 = GameManager__GetDataManager(this_00);
  this_01 = GetCurrentCampaign(pDVar3);
  bVar1 = DoesLevelUnlockContent(this,(Level *)param_1);
  bVar2 = Campaign__IsAllowedToPlayLevel(this_01,pDVar3,(Level *)param_1);
  if (!bVar2) {
    pcVar6 = Icons_Lock;
    if (bVar1) {
      pcVar6 = Icons_LockWithSmallUnlock;
    }
    return pcVar6;
  }
  this_02 = LevelRecord__GetLevelRecord((Level *)param_1,pDVar3,false);
  bVar1 = CapitalShipComponent__HasBeenDamaged((CapitalShipComponent *)this_02);
  if (bVar1) {
    TVar4 = LevelRecord__GetRatingForLevel(pDVar3,(Level *)param_1);
    p_Var5 = LevelRecord__GetRatingIcon(TVar4);
    return p_Var5;
  }
  return _guard_check_icall_nop;
}


//==== 006cebe0 6cebe0_BriefingsHandler__PlaySelectedLevel ====
// decompiled by BatchDecomp @ 6cebe0 name=PlaySelectedLevel conv=__thiscall body=104

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall BriefingsHandler__PlaySelectedLevel(void) */

void __thiscall BriefingsHandler__PlaySelectedLevel(BriefingsHandler *this)

{
  Delegate_L_void_G_ DVar1;
  Delegate_L_void_G_ DVar2;
  Interface *this_00;
  GameManager *pGVar3;
  StrategicManager *this_01;
  HWND unaff_EDI;
  void *pvVar4;
  _func___cdecl_void_void_ptr *p_Var5;
  void *pvVar6;
  StrategicManager *pSVar7;
  bool bVar8;
  _func___cdecl_void_void_ptr *p_Var9;
  
  p_Var9 = (_func___cdecl_void_void_ptr *)0x0;
  pvVar6 = (void *)0x0;
  p_Var5 = (_func___cdecl_void_void_ptr *)0x0;
  pvVar4 = (void *)0x0;
  this_00 = Manager__GetInterfacer((Manager *)this->Parent);
  DVar1.CallbackFunction = p_Var5;
  DVar1.Callee = pvVar4;
  DVar2.CallbackFunction = p_Var9;
  DVar2.Callee = pvVar6;
  Interface__NewScreen(this_00,DVar1,DVar2);
  pGVar3 = (GameManager *)Manager__GetParent(unaff_EDI);
  this_01 = GameManager__PlaySelectedLevel(pGVar3);
  bVar8 = true;
  pSVar7 = this_01;
  pGVar3 = (GameManager *)Manager__GetParent((HWND)this_01);
  GameManager__SwitchToSession(pGVar3,(Manager *)pSVar7,bVar8);
  StrategicManager__StartLevel(this_01,this->SelectedLevel);
  this->CanAffectCamera = false;
  this->SelectedSubject = ~LevelPresets;
  this->SelectedData = (Reflectable *)0x0;
  this->SelectedCraft = (CraftBlueprint *)0x0;
  this->SelectedLevel = (Level *)0x0;
  return;
}


//==== 006ed630 6ed630_SelectionMarker___scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 6ed630 name=`scalar_deleting_destructor' conv=__thiscall body=135

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall SelectionMarker::`scalar deleting destructor'(unsigned int) */

void * __thiscall SelectionMarker___scalar_deleting_destructor_(SelectionMarker *this,uint param_1)

{
  ReferenceController *this_00;
  
  NodeMouseOver__dtor(&(this->LastSelection).Node);
  this_00 = (this->LastSelection).Object.Controller;
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
    operator_delete(this,0x448);
  }
  return this;
}


//==== 006f8620 6f8620_ScenarioEditor__RebuildCurrentLevel ====
// decompiled by BatchDecomp @ 6f8620 name=RebuildCurrentLevel conv=__thiscall body=109

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: void __thiscall ScenarioEditor__RebuildCurrentLevel(void) */

void __thiscall ScenarioEditor__RebuildCurrentLevel(ScenarioEditor *this)

{
  Reflectable *this_00;
  Level *this_01;
  bool bVar1;
  MetagameManager *this_02;
  Reflectable *pRVar2;
  Level *this_03;
  
  CorrectCurrentLevelValidity(this);
  RegeneratePropertyUI(this);
  this_02 = MainManager__GetMetagame(*(MainManager **)this);
  MetagameManager__SaveAllDesigns(this_02);
  MainManager__PlayTitleMusic(*(MainManager **)this);
  UpdateListBoxUI(this);
  this_00 = *(Reflectable **)(this + 100);
  if (this_00 != (Reflectable *)0x0) {
    bVar1 = Reflectable__RebuildCurrentLevel(this_00);
    pRVar2 = (Reflectable *)0x0;
    if (bVar1) {
      pRVar2 = this_00;
    }
    if (pRVar2 != (Reflectable *)0x0) {
      this_01 = *(Level **)(this + 100);
      if (this_01 != (Level *)0x0) {
        bVar1 = Reflectable__RebuildCurrentLevel((Reflectable *)this_01);
        this_03 = (Level *)0x0;
        if (bVar1) {
          this_03 = this_01;
        }
        Level__CacheNecessaryLimits(this_03);
        return;
      }
      Level__CacheNecessaryLimits((Level *)0x0);
      return;
    }
  }
  return;
}


//==== 00715540 715540_Astrogation__InterceptOrbit_km__s ====
// decompiled by BatchDecomp @ 715540 name=InterceptOrbit_km__s conv=__cdecl body=1338

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* struct Astrogation__AstrogateResult __cdecl Astrogation__InterceptOrbit_km__s(class
   StrategicManager *,double,double,struct util__PhysicalState_L_struct_util__Vec3_L_double_G___G,class
   util__WeakPtr_L_class_Fleet_G,struct FixedOrbit,double) */

AstrogateResult * __cdecl
Astrogation__InterceptOrbit_km__s(AstrogateResult *__return_storage_ptr__,StrategicManager *param_1,double param_2,
          double param_3,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
          undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
          Fleet *param_17,ReferenceController *param_18)

{
  undefined4 stack0x00000054;
  undefined4 stack0xfffffffc;
  undefined1 auVar1[16];
  Line3_L_double_G_ LVar2;
  Line3_L_double_G_ LVar3;
  ReferenceController *this;
  undefined8 uVar4;
  bool bVar5;
  Vec3_L_double_G_ *pVVar6;
  Maybe_L_double_G_ *pMVar7;
  double dVar8;
  ReferenceController *in_stack_00000060;
  ReferenceController *in_stack_00000064;
  double in_stack_00000084;
  undefined8 in_stack_0000013c;
  ReferenceController *pRVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined8 local_144;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined8 uStack_12c;
  undefined1 local_124[8];
  double dStack_11c;
  undefined1 local_114[16];
  StrategicManager *local_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  ((slice_view *)&local_114)->_8_8_ = param_3;
  local_104 = param_1;
  uVar11 = *(undefined4 *)((char *)&param_2 + 4);
  FixedOrbit__GetStateRelativeToOrbit((FixedOrbit *)&stack0x00000054,&local_c8,param_5,param_6,param_7,param_8,param_9,
             param_10,param_11,param_12,param_13,param_14,param_15,param_16,SUB84(param_2,0),uVar11)
  ;
  StrategicManager__NumericallyIntegrate(param_1,&local_38,param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,
             param_13,param_14,param_15,param_16,SUB84(param_2,0),uVar11,(int)((slice_view *)&local_114)->_8_8_,
             SUB84(((slice_view *)&local_114)->_8_8_,4),0,0,0,0,0,0);
  FixedOrbit__GetStateRelativeToOrbit((FixedOrbit *)&stack0x00000054,&local_98,local_38,uStack_34,uStack_30,uStack_2c,
             local_28,uStack_24,uStack_20,uStack_1c,local_18,uStack_14,uStack_10,uStack_c,
             (double)((slice_view *)&local_114)->_8_8_ + param_2);
  FixedOrbit__ProjectStateOnToOrbit((FixedOrbit *)&stack0x00000054,&local_f8,local_c8,uStack_c4,uStack_c0,uStack_bc,
             local_b8,uStack_b4,uStack_b0,uStack_ac,local_a8,uStack_a4,uStack_a0,uStack_9c,0,0);
  FixedOrbit__ProjectStateOnToOrbit((FixedOrbit *)&stack0x00000054,&local_68,local_c8,uStack_c4,uStack_c0,uStack_bc,
             local_b8,uStack_b4,uStack_b0,uStack_ac,local_a8,uStack_a4,uStack_a0,uStack_9c,
             (int)((slice_view *)&local_114)->_8_8_,SUB84(((slice_view *)&local_114)->_8_8_,4));
  local_144 = (double)CONCAT44(uStack_e4,local_e8);
  uStack_13c = local_68;
  uStack_138 = uStack_64;
  uStack_134 = uStack_60;
  uStack_130 = uStack_5c;
  uStack_12c = local_58;
  uVar4 = uStack_12c;
  ((slice_view *)&uStack_12c)->_0_4_ = (undefined4)local_58;
  ((slice_view *)&uStack_12c)->_4_4_ = *(undefined4 *)((char *)&local_58 + 4);
  uStack_15c = (undefined4)local_88;
  uStack_158 = *(undefined4 *)((char *)&local_88 + 4);
  ((slice_view *)&LVar2.A.X)->_4_4_ = uStack_c4;
  ((slice_view *)&LVar2.A.X)->_0_4_ = local_c8;
  ((slice_view *)&LVar2.A.Y)->_0_4_ = uStack_c0;
  ((slice_view *)&LVar2.A.Y)->_4_4_ = uStack_bc;
  ((slice_view *)&LVar2.A.Z)->_0_4_ = local_b8;
  ((slice_view *)&LVar2.A.Z)->_4_4_ = uStack_b4;
  ((slice_view *)&LVar2.B.X)->_0_4_ = local_98;
  ((slice_view *)&LVar2.B.X)->_4_4_ = uStack_94;
  ((slice_view *)&LVar2.B.Y)->_0_4_ = uStack_90;
  ((slice_view *)&LVar2.B.Y)->_4_4_ = uStack_8c;
  ((slice_view *)&LVar2.B.Z)->_0_4_ = uStack_15c;
  ((slice_view *)&LVar2.B.Z)->_4_4_ = uStack_158;
  ((slice_view *)&LVar3.A.X)->_4_4_ = uStack_f4;
  ((slice_view *)&LVar3.A.X)->_0_4_ = local_f8;
  ((slice_view *)&LVar3.A.Y)->_0_4_ = uStack_f0;
  ((slice_view *)&LVar3.A.Y)->_4_4_ = uStack_ec;
  ((slice_view *)&LVar3.A.Z)->_0_4_ = local_e8;
  ((slice_view *)&LVar3.A.Z)->_4_4_ = uStack_e4;
  ((slice_view *)&LVar3.B.X)->_0_4_ = local_68;
  ((slice_view *)&LVar3.B.X)->_4_4_ = uStack_64;
  ((slice_view *)&LVar3.B.Y)->_0_4_ = uStack_60;
  ((slice_view *)&LVar3.B.Y)->_4_4_ = uStack_5c;
  ((slice_view *)&LVar3.B.Z)->_0_4_ = (undefined4)uStack_12c;
  ((slice_view *)&LVar3.B.Z)->_4_4_ = ((slice_view *)&uStack_12c)->_4_4_;
  uStack_12c = uVar4;
  local_100 = util__InterceptOrbit_km__s(LVar2,LVar3);
  this = in_stack_00000064;
  if (in_stack_00000084 * /*3f1a36e2eb1c432d*/0.0001 < local_100) {
    local_100 = (double)CONCAT44(in_stack_00000060,SUB84(local_100,0));
    if (in_stack_00000064 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(in_stack_00000064);
    }
    if ((param_18 != (ReferenceController *)0x0) &&
       (bVar5 = util__ReferenceController__IsDataStillValid(param_18), !bVar5)) {
      param_17 = (Fleet *)0x0;
    }
    Fleet__GetMaxAcceleration_m__s2_Memoize(param_17);
    if ((param_17->GetMaxAcceleration_m__s2_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dStack_11c = (param_17->GetMaxAcceleration_m__s2_MemoizedValue).Data;
    uVar10 = (undefined4)in_stack_0000013c;
    uVar12 = *(undefined4 *)((char *)&in_stack_0000013c + 4);
    uVar11 = ((slice_view *)&local_100)->_4_4_;
    pRVar9 = this;
    if (this != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this);
    }
    GetCoastVelocityRange_km__s
              (local_124,local_104,param_2,((slice_view *)&local_114)->_8_8_,local_c8,uStack_c4,uStack_c0,uStack_bc,
               local_b8,uStack_b4,uStack_b0,uStack_ac,local_a8,uStack_a4,uStack_a0,uStack_9c,
               SUB84(dStack_11c,0),(int)((ulonglong)dStack_11c >> 0x20),local_f8,uStack_f4,uStack_f0
               ,uStack_ec,local_e8,uStack_e4,uStack_e0,uStack_dc,local_d8,uStack_d4,uStack_d0,
               uStack_cc,uVar11,pRVar9,uVar10,uVar12);
    pRVar9 = param_18;
    if (param_18 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(param_18);
    }
    pVVar6 = GetCoastVelocity_km__s();
    CorrectBurn_km__s(&local_144,*(undefined4 *)&pVVar6->X,*(undefined4 *)((int)&pVVar6->X + 4),
                      *(undefined4 *)&pVVar6->Y,*(undefined4 *)((int)&pVVar6->Y + 4),
                      SUB84(pVVar6->Z,0),(int)((ulonglong)pVVar6->Z >> 0x20),(int)((slice_view *)&local_114)->_8_8_,
                      SUB84(((slice_view *)&local_114)->_8_8_,4),param_17,pRVar9);
    dStack_11c = local_144 * local_144 +
                 (double)CONCAT44(uStack_138,uStack_13c) * (double)CONCAT44(uStack_138,uStack_13c) +
                 (double)CONCAT44(uStack_130,uStack_134) * (double)CONCAT44(uStack_130,uStack_134);
    pMVar7 = util__Sqrt((Maybe_L_double_G_ *)local_114,&dStack_11c);
    if (pMVar7->IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if (pMVar7->Data <= /*3f50624dd2f1a9fc*/0.001) {
      if (this != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(this);
      }
      *(undefined4 *)&(__return_storage_ptr__->DeltaV_km__s).X = 0;
      *(undefined4 *)((int)&(__return_storage_ptr__->DeltaV_km__s).X + 4) = 0;
      *(undefined4 *)&(__return_storage_ptr__->DeltaV_km__s).Y = 0;
      *(undefined4 *)((int)&(__return_storage_ptr__->DeltaV_km__s).Y + 4) = 0;
      (__return_storage_ptr__->DeltaV_km__s).Z = 0.0;
      __return_storage_ptr__->Finished = false;
    }
    else {
      __return_storage_ptr__->Finished = false;
      *(undefined4 *)&(__return_storage_ptr__->DeltaV_km__s).X = (undefined4)local_144;
      *(undefined4 *)((int)&(__return_storage_ptr__->DeltaV_km__s).X + 4) = ((slice_view *)&local_144)->_4_4_;
      *(undefined4 *)&(__return_storage_ptr__->DeltaV_km__s).Y = uStack_13c;
      *(undefined4 *)((int)&(__return_storage_ptr__->DeltaV_km__s).Y + 4) = uStack_138;
      (__return_storage_ptr__->DeltaV_km__s).Z = (double)CONCAT44(uStack_130,uStack_134);
      if (this != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(this);
      }
    }
  }
  else {
    dVar8 = (double)CONCAT44(uStack_d4,local_d8) - (double)CONCAT44(uStack_a4,local_a8);
    __return_storage_ptr__->Finished = true;
    ((slice_view *)&auVar1)->_8_4_ = *(undefined4 *)&dVar8;
    ((slice_view *)&auVar1)->_0_8_ = (double)CONCAT44(uStack_dc,uStack_e0) - (double)CONCAT44(uStack_ac,uStack_b0);
    ((slice_view *)&auVar1)->_12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    (__return_storage_ptr__->DeltaV_km__s).X = (double)((slice_view *)&auVar1)->_0_8_;
    (__return_storage_ptr__->DeltaV_km__s).Y = (double)((slice_view *)&auVar1)->_8_8_;
    (__return_storage_ptr__->DeltaV_km__s).Z =
         (double)CONCAT44(uStack_cc,uStack_d0) - (double)CONCAT44(uStack_9c,uStack_a0);
  }
  if (param_18 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_18);
  }
  FixedOrbit__dtor((FixedOrbit *)&stack0x00000054);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 007340d0 7340d0_util__Darray_struct_ItineraryNode___Last ====
// decompiled by BatchDecomp @ 7340d0 name=Last conv=__thiscall body=59

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual struct ItineraryNode & __thiscall util__Darray_L_struct_ItineraryNode_G___Last(void)
    */

ItineraryNode * __thiscall
util__Darray_L_struct_ItineraryNode_G___Last(Darray_L_struct_ItineraryNode_G_ *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3c,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = *(int *)(this + 8);
  }
  return (ItineraryNode *)(*(int *)(this + 4) + -0x150 + iVar1 * 0x150);
}


//==== 007343a0 7343a0_util__Darray_struct_ItineraryNode___SetAll ====
// decompiled by BatchDecomp @ 7343a0 name=SetAll conv=__thiscall body=549

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall util_Darray_struct_ItineraryNode_SetAll(struct ItineraryNode
   const &) */

void __thiscall
util_Darray_struct_ItineraryNode_SetAll(Darray_L_struct_ItineraryNode_G_ *this,ItineraryNode *param_1)

{
  ReferenceController *pRVar1;
  ReferenceController *pRVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar6 = *(undefined4 **)(this + 4);
  if (puVar6 != puVar6 + *(int *)(this + 8) * 0x54) {
    puVar7 = puVar6 + 0x3f;
    do {
      pRVar1 = (ReferenceController *)puVar7[-0x3e];
      *puVar6 = (param_1->Parent).Pointer;
      pRVar2 = (param_1->Parent).Controller;
      puVar7[-0x3e] = pRVar2;
      if (pRVar2 != (ReferenceController *)0x0) {
        ReferenceController__AddWeakReference(pRVar2);
      }
      if (pRVar1 != (ReferenceController *)0x0) {
        ReferenceController__ReleaseWeakReference(pRVar1);
      }
      uVar3 = *(undefined4 *)((int)&(param_1->LastState).Position.X + 4);
      uVar4 = *(undefined4 *)&(param_1->LastState).Position.Y;
      uVar5 = *(undefined4 *)((int)&(param_1->LastState).Position.Y + 4);
      puVar7[-0x3d] = *(undefined4 *)&(param_1->LastState).Position.X;
      puVar7[-0x3c] = uVar3;
      puVar7[-0x3b] = uVar4;
      puVar7[-0x3a] = uVar5;
      uVar3 = *(undefined4 *)((int)&(param_1->LastState).Position.Z + 4);
      uVar4 = *(undefined4 *)&(param_1->LastState).Velocity.X;
      uVar5 = *(undefined4 *)((int)&(param_1->LastState).Velocity.X + 4);
      puVar7[-0x39] = *(undefined4 *)&(param_1->LastState).Position.Z;
      puVar7[-0x38] = uVar3;
      puVar7[-0x37] = uVar4;
      puVar7[-0x36] = uVar5;
      uVar3 = *(undefined4 *)((int)&(param_1->LastState).Velocity.Y + 4);
      uVar4 = *(undefined4 *)&(param_1->LastState).Velocity.Z;
      uVar5 = *(undefined4 *)((int)&(param_1->LastState).Velocity.Z + 4);
      puVar7[-0x35] = *(undefined4 *)&(param_1->LastState).Velocity.Y;
      puVar7[-0x34] = uVar3;
      puVar7[-0x33] = uVar4;
      puVar7[-0x32] = uVar5;
      *(double *)(puVar7 + -0x31) = param_1->LastTimeSinceJ2000_s;
      uVar3 = *(undefined4 *)((int)&(param_1->State).Position.X + 4);
      uVar4 = *(undefined4 *)&(param_1->State).Position.Y;
      uVar5 = *(undefined4 *)((int)&(param_1->State).Position.Y + 4);
      puVar7[-0x2f] = *(undefined4 *)&(param_1->State).Position.X;
      puVar7[-0x2e] = uVar3;
      puVar7[-0x2d] = uVar4;
      puVar7[-0x2c] = uVar5;
      uVar3 = *(undefined4 *)((int)&(param_1->State).Position.Z + 4);
      uVar4 = *(undefined4 *)&(param_1->State).Velocity.X;
      uVar5 = *(undefined4 *)((int)&(param_1->State).Velocity.X + 4);
      puVar7[-0x2b] = *(undefined4 *)&(param_1->State).Position.Z;
      puVar7[-0x2a] = uVar3;
      puVar7[-0x29] = uVar4;
      puVar7[-0x28] = uVar5;
      uVar3 = *(undefined4 *)((int)&(param_1->State).Velocity.Y + 4);
      uVar4 = *(undefined4 *)&(param_1->State).Velocity.Z;
      uVar5 = *(undefined4 *)((int)&(param_1->State).Velocity.Z + 4);
      puVar7[-0x27] = *(undefined4 *)&(param_1->State).Velocity.Y;
      puVar7[-0x26] = uVar3;
      puVar7[-0x25] = uVar4;
      puVar7[-0x24] = uVar5;
      *(double *)(puVar7 + -0x23) = param_1->TimeSinceJ2000_s;
      uVar3 = *(undefined4 *)((int)&(param_1->ThrusterBurn_km__s).X + 4);
      uVar4 = *(undefined4 *)&(param_1->ThrusterBurn_km__s).Y;
      uVar5 = *(undefined4 *)((int)&(param_1->ThrusterBurn_km__s).Y + 4);
      puVar7[-0x21] = *(undefined4 *)&(param_1->ThrusterBurn_km__s).X;
      puVar7[-0x20] = uVar3;
      puVar7[-0x1f] = uVar4;
      puVar7[-0x1e] = uVar5;
      *(double *)(puVar7 + -0x1d) = (param_1->ThrusterBurn_km__s).Z;
      uVar3 = *(undefined4 *)((int)&(param_1->ResidualThrusterBurn_km__s).X + 4);
      uVar4 = *(undefined4 *)&(param_1->ResidualThrusterBurn_km__s).Y;
      uVar5 = *(undefined4 *)((int)&(param_1->ResidualThrusterBurn_km__s).Y + 4);
      puVar7[-0x1b] = *(undefined4 *)&(param_1->ResidualThrusterBurn_km__s).X;
      puVar7[-0x1a] = uVar3;
      puVar7[-0x19] = uVar4;
      puVar7[-0x18] = uVar5;
      *(double *)(puVar7 + -0x17) = (param_1->ResidualThrusterBurn_km__s).Z;
      puVar7[-0x15] = param_1->NodeType;
      uVar3 = *(undefined4 *)((int)&(param_1->CachedReferenceShiftedPosition_km).X + 4);
      uVar4 = *(undefined4 *)&(param_1->CachedReferenceShiftedPosition_km).Y;
      uVar5 = *(undefined4 *)((int)&(param_1->CachedReferenceShiftedPosition_km).Y + 4);
      puVar7[-0x13] = *(undefined4 *)&(param_1->CachedReferenceShiftedPosition_km).X;
      puVar7[-0x12] = uVar3;
      puVar7[-0x11] = uVar4;
      puVar7[-0x10] = uVar5;
      *(double *)(puVar7 + -0xf) = (param_1->CachedReferenceShiftedPosition_km).Z;
      uVar3 = *(undefined4 *)
               ((int)&(param_1->CachedGravityBodyReferenceShiftedPosition_km).Data.X + 4);
      uVar4 = *(undefined4 *)&(param_1->CachedGravityBodyReferenceShiftedPosition_km).Data.Y;
      uVar5 = *(undefined4 *)
               ((int)&(param_1->CachedGravityBodyReferenceShiftedPosition_km).Data.Y + 4);
      puVar7[-0xd] = *(undefined4 *)&(param_1->CachedGravityBodyReferenceShiftedPosition_km).Data.X;
      puVar7[-0xc] = uVar3;
      puVar7[-0xb] = uVar4;
      puVar7[-10] = uVar5;
      uVar3 = *(undefined4 *)
               ((int)&(param_1->CachedGravityBodyReferenceShiftedPosition_km).Data.Z + 4);
      uVar4 = *(undefined4 *)&(param_1->CachedGravityBodyReferenceShiftedPosition_km).IsValidData;
      uVar5 = *(undefined4 *)((char *)&(param_1->CachedGravityBodyReferenceShiftedPosition_km) + 0x1c);
      puVar7[-9] = *(undefined4 *)&(param_1->CachedGravityBodyReferenceShiftedPosition_km).Data.Z;
      puVar7[-8] = uVar3;
      puVar7[-7] = uVar4;
      puVar7[-6] = uVar5;
      *(double *)(puVar7 + -5) = param_1->CachedTotalSpentDeltaV_km__s;
      pRVar1 = (ReferenceController *)puVar7[-2];
      puVar7[-3] = (param_1->CachedGravityBody).Pointer;
      pRVar2 = (param_1->CachedGravityBody).Controller;
      puVar7[-2] = pRVar2;
      if (pRVar2 != (ReferenceController *)0x0) {
        ReferenceController__AddWeakReference(pRVar2);
      }
      if (pRVar1 != (ReferenceController *)0x0) {
        ReferenceController__ReleaseWeakReference(pRVar1);
      }
      pRVar1 = (ReferenceController *)*puVar7;
      puVar7[-1] = (param_1->CachedNearestBody).Pointer;
      pRVar2 = (param_1->CachedNearestBody).Controller;
      *puVar7 = pRVar2;
      if (pRVar2 != (ReferenceController *)0x0) {
        ReferenceController__AddWeakReference(pRVar2);
      }
      if (pRVar1 != (ReferenceController *)0x0) {
        ReferenceController__ReleaseWeakReference(pRVar1);
      }
      pRVar1 = (ReferenceController *)puVar7[2];
      puVar7[1] = (param_1->CachedNearestFleet).Pointer;
      pRVar2 = (param_1->CachedNearestFleet).Controller;
      puVar7[2] = pRVar2;
      if (pRVar2 != (ReferenceController *)0x0) {
        ReferenceController__AddWeakReference(pRVar2);
      }
      if (pRVar1 != (ReferenceController *)0x0) {
        ReferenceController__ReleaseWeakReference(pRVar1);
      }
      uVar3 = *(undefined4 *)((int)&(param_1->CachedNearestFleetDistance_km).Data + 4);
      uVar4 = *(undefined4 *)&(param_1->CachedNearestFleetDistance_km).IsValidData;
      uVar5 = *(undefined4 *)((char *)&(param_1->CachedNearestFleetDistance_km) + 0xc);
      puVar7[3] = *(undefined4 *)&(param_1->CachedNearestFleetDistance_km).Data;
      puVar7[4] = uVar3;
      puVar7[5] = uVar4;
      puVar7[6] = uVar5;
      uVar3 = *(undefined4 *)((int)&(param_1->CachedNearestFleetParametricCoord).Data + 4);
      uVar4 = *(undefined4 *)&(param_1->CachedNearestFleetParametricCoord).IsValidData;
      uVar5 = *(undefined4 *)((char *)&(param_1->CachedNearestFleetParametricCoord) + 0xc);
      puVar7[7] = *(undefined4 *)&(param_1->CachedNearestFleetParametricCoord).Data;
      puVar7[8] = uVar3;
      puVar7[9] = uVar4;
      puVar7[10] = uVar5;
      pRVar1 = (ReferenceController *)puVar7[0xc];
      puVar7[0xb] = (param_1->CachedNearestOrbiter).Pointer;
      pRVar2 = (param_1->CachedNearestOrbiter).Controller;
      puVar7[0xc] = pRVar2;
      if (pRVar2 != (ReferenceController *)0x0) {
        ReferenceController__AddWeakReference(pRVar2);
      }
      if (pRVar1 != (ReferenceController *)0x0) {
        ReferenceController__ReleaseWeakReference(pRVar1);
      }
      uVar3 = *(undefined4 *)((int)&(param_1->CachedNearestOrbitDistance_km).Data + 4);
      uVar4 = *(undefined4 *)&(param_1->CachedNearestOrbitDistance_km).IsValidData;
      uVar5 = *(undefined4 *)((char *)&(param_1->CachedNearestOrbitDistance_km) + 0xc);
      puVar7[0xd] = *(undefined4 *)&(param_1->CachedNearestOrbitDistance_km).Data;
      puVar7[0xe] = uVar3;
      puVar7[0xf] = uVar4;
      puVar7[0x10] = uVar5;
      puVar6 = puVar6 + 0x54;
      uVar3 = *(undefined4 *)((int)&(param_1->CachedNearestOrbitParametricCoord).Data + 4);
      uVar4 = *(undefined4 *)&(param_1->CachedNearestOrbitParametricCoord).IsValidData;
      uVar5 = *(undefined4 *)((char *)&(param_1->CachedNearestOrbitParametricCoord) + 0xc);
      puVar7[0x11] = *(undefined4 *)&(param_1->CachedNearestOrbitParametricCoord).Data;
      puVar7[0x12] = uVar3;
      puVar7[0x13] = uVar4;
      puVar7[0x14] = uVar5;
      puVar7 = puVar7 + 0x54;
    } while (puVar6 != (undefined4 *)(*(int *)(this + 8) * 0x150 + *(int *)(this + 4)));
  }
  return;
}

