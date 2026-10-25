// pilot_sweep_sweep02.c - assembled by scripts/sweep_assemble.py (r19)
// reuses fam8_assemble fix passes (zip oracle/in-batch protos/vft channel/data closure)
/* ---- r20 incomplete-type forward decls (pointer-position only) ---- */
typedef struct Darray Darray;
typedef struct Darray_L_GraphicsResource__Type_G_ Darray_L_GraphicsResource__Type_G_;
typedef struct Maybe Maybe;
typedef struct SharedPtr SharedPtr;
typedef struct Str Str;
typedef struct Vec2 Vec2;
typedef struct Vec3 Vec3;
typedef struct WeakPtr WeakPtr;
typedef struct WeakThis_L_class_SpacecraftComponent_G_ WeakThis_L_class_SpacecraftComponent_G_;
typedef struct tuple2 tuple2;
typedef struct Darray_L_bool_P_G_ Darray_L_bool_P__G_;
typedef struct Darray_L_bool__P_G_ Darray_L_bool__P__G_;
#include "port_prelude.h"
#include "cde_win32_compat.h"
#include "cde_types_r20.h"
typedef union {
  struct {
    undefined8 _0_8_;
    undefined8 _4_8_;
    undefined8 _8_8_;
    undefined8 _12_8_;
    undefined8 _20_8_;
  };
  struct {
    undefined1 _1_7_[7];
  };
  struct {
    undefined4 _0_4_;
    undefined4 _4_4_;
    undefined4 _8_4_;
    undefined4 _12_4_;
    undefined4 _16_4_;
    undefined4 _24_4_;
  };
  struct {
    undefined1 _1_3_[3];
  };
  struct {
    undefined1 _0_1_;
    undefined1 _1_1_;
    undefined1 _2_1_;
    undefined1 _3_1_;
    undefined1 _4_1_;
  };
  undefined1 raw[32];
} slice_view;
/* ---- externs: stub-oracle names (K&R; ret types by call site) ---- */
extern int Body_GetSpacecraftComponent_Memoize(); /* K&R stub; ret by call site */
extern int Body__GetBulletComponent_Clear(); /* K&R stub; ret by call site */
extern int Body__GetControllableComponent_Clear(); /* K&R stub; ret by call site */
extern int Body__GetDebrisComponent_Clear(); /* K&R stub; ret by call site */
extern int Body__GetShotComponent_Clear(); /* K&R stub; ret by call site */
extern int Body__GetUntrackComponent_Clear(); /* K&R stub; ret by call site */
extern int CompartmentButton_GetDimensionScreenBounds_Memoize(); /* K&R stub; ret by call site */
extern int CraftInstance__GetTotalMass_kg_Clear(); /* K&R stub; ret by call site */
extern int ItineraryNode__dtor(); /* K&R stub; ret by call site */
extern int ItineraryNode__operator_(); /* K&R stub; ret by call site */
extern int ModuleCompartment_ModuleCompartment__o2(); /* K&R stub; ret by call site */
extern int WorldObject__operator_(); /* K&R stub; ret by call site */
extern int util_Darray_struct_ItineraryNode_Darray_struct_ItineraryNode__o2(); /* K&R stub; ret by call site */
extern int util_Darray_struct_ItineraryNode_FindIndex(); /* K&R stub; ret by call site */
extern int util_Quaternion_double_Quaternion_double(); /* K&R stub; ret by call site */
extern int util__Attribute_struct_util__Color___Get(); /* K&R stub; ret by call site */
extern int util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent(); /* K&R stub; ret by call site */
extern int util__Darray_struct_CraftSplinePoint___Darray_struct_CraftSplinePoint(); /* K&R stub; ret by call site */
extern int util__Darray_struct_ItineraryNode___CheckSize(); /* K&R stub; ret by call site */
extern int util__Darray_struct_ItineraryNode___SetSize(); /* K&R stub; ret by call site */
/* ---- r20 exref direct-bind (IAT slot reads -> direct refs) ---- */
#define feof_exref feof
#define fwrite_exref fwrite

//==== 000048a5c0 0048a5c0_FUN_0048a5c0 ====
extern undefined4 FUN_00489c30(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_0048a1e0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
undefined4 __fastcall FUN_0048a5c0(int param_1,int param_2);

// decompiled by BatchDecomp @ 0048a5c0 name=FUN_0048a5c0 conv=unknown body=191

undefined4 __fastcall FUN_0048a5c0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  *(undefined1 *)(param_1 + 0x369c) = 0xff;
  cVar1 = FUN_004896f0();
  if (cVar1 != -0x28) {
LAB_0048a66f:
    DAT_009936c8 = "Corrupt JPEG";
    return 0;
  }
  if (param_2 != 1) {
    cVar1 = FUN_004896f0();
    while ((cVar1 != -0x40 && (cVar1 != -0x3f))) {
      iVar2 = FUN_00489c30();
      if (iVar2 == 0) {
        return 0;
      }
      cVar1 = FUN_004896f0();
      while (cVar1 == -1) {
        if (*(FILE **)(param_1 + 0x10) == (FILE *)0x0) {
          uVar3 = (uint)(*(uint *)(param_1 + 0x18) <= *(uint *)(param_1 + 0x14));
        }
        else {
          uVar3 = feof(*(FILE **)(param_1 + 0x10));
        }
        if (uVar3 != 0) goto LAB_0048a66f;
        cVar1 = FUN_004896f0();
      }
    }
    iVar2 = FUN_0048a1e0();
    if (iVar2 == 0) {
      return 0;
    }
  }
  return 1;
}


//==== 000048d530 0048d530_FUN_0048d530 ====
extern undefined4 FUN_00488610(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
undefined4 __fastcall FUN_0048d530(int param_1);

// decompiled by BatchDecomp @ 0048d530 name=FUN_0048d530 conv=unknown body=204

undefined4 __fastcall FUN_0048d530(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (*(FILE **)(param_1 + 0x10) == (FILE *)0x0) {
    pbVar2 = *(byte **)(param_1 + 0x14);
    if (*(byte **)(param_1 + 0x18) <= pbVar2) {
      return 0;
    }
    bVar1 = *pbVar2;
    *(byte **)(param_1 + 0x14) = pbVar2 + 1;
    uVar3 = (uint)bVar1;
  }
  else {
    uVar3 = fgetc(*(FILE **)(param_1 + 0x10));
    if (uVar3 == 0xffffffff) {
      uVar3 = 0;
    }
  }
  if (uVar3 == 0x42) {
    if (*(FILE **)(param_1 + 0x10) == (FILE *)0x0) {
      pbVar2 = *(byte **)(param_1 + 0x14);
      if (*(byte **)(param_1 + 0x18) <= pbVar2) {
        return 0;
      }
      bVar1 = *pbVar2;
      *(byte **)(param_1 + 0x14) = pbVar2 + 1;
      uVar3 = (uint)bVar1;
    }
    else {
      uVar3 = fgetc(*(FILE **)(param_1 + 0x10));
      if (uVar3 == 0xffffffff) {
        uVar3 = 0;
      }
    }
    if (uVar3 == 0x4d) {
      FUN_00488610();
      FUN_00488610();
      FUN_00488610();
      FUN_00488610();
      FUN_00488610();
      FUN_00488610();
      iVar4 = FUN_00488610();
      iVar5 = FUN_00488610();
      iVar4 = iVar5 * 0x10000 + iVar4;
      if ((((iVar4 == 0xc) || (iVar4 == 0x28)) || (iVar4 == 0x38)) || (iVar4 == 0x6c)) {
        return 1;
      }
    }
  }
  return 0;
}


//==== 000048ee70 0048ee70_FUN_0048ee70 ====
void __fastcall FUN_0048ee70(int param_1,int param_2);

// decompiled by BatchDecomp @ 0048ee70 name=FUN_0048ee70 conv=unknown body=291

void __fastcall FUN_0048ee70(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  
  iVar6 = 0;
  if (*(FILE **)(param_1 + 0x10) == (FILE *)0x0) {
    pbVar2 = *(byte **)(param_1 + 0x14);
    if (pbVar2 < *(byte **)(param_1 + 0x18)) {
      bVar1 = *pbVar2;
      *(byte **)(param_1 + 0x14) = pbVar2 + 1;
      uVar3 = (uint)bVar1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = fgetc(*(FILE **)(param_1 + 0x10));
    if (uVar3 == 0xffffffff) {
      uVar3 = 0;
    }
  }
  while( true ) {
    if (*(FILE **)(param_1 + 0x10) == (FILE *)0x0) {
      uVar4 = (uint)(*(uint *)(param_1 + 0x18) <= *(uint *)(param_1 + 0x14));
    }
    else {
      uVar4 = feof(*(FILE **)(param_1 + 0x10));
    }
    pcVar5 = feof_exref;
    if ((uVar4 != 0) || ((char)uVar3 == '\n')) goto LAB_0048ef8c;
    *(char *)(iVar6 + param_2) = (char)uVar3;
    iVar6 = iVar6 + 1;
    if (iVar6 == 0x3ff) break;
    if (*(FILE **)(param_1 + 0x10) == (FILE *)0x0) {
      pbVar2 = *(byte **)(param_1 + 0x14);
      if (pbVar2 < *(byte **)(param_1 + 0x18)) {
        bVar1 = *pbVar2;
        *(byte **)(param_1 + 0x14) = pbVar2 + 1;
        uVar3 = (uint)bVar1;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = fgetc(*(FILE **)(param_1 + 0x10));
      if (uVar3 == 0xffffffff) {
        uVar3 = 0;
      }
      uVar3 = uVar3 & 0xff;
    }
  }
LAB_0048ef30:
  do {
    if (*(int *)(param_1 + 0x10) == 0) {
      uVar3 = (uint)(*(uint *)(param_1 + 0x18) <= *(uint *)(param_1 + 0x14));
    }
    else {
      uVar3 = (*pcVar5)(*(int *)(param_1 + 0x10));
    }
    if (uVar3 != 0) goto LAB_0048ef8c;
    if (*(FILE **)(param_1 + 0x10) == (FILE *)0x0) {
      pbVar2 = *(byte **)(param_1 + 0x14);
      pcVar5 = feof_exref;
      if (*(byte **)(param_1 + 0x18) <= pbVar2) goto LAB_0048ef30;
      bVar1 = *pbVar2;
      *(byte **)(param_1 + 0x14) = pbVar2 + 1;
      uVar3 = (uint)bVar1;
    }
    else {
      uVar3 = fgetc(*(FILE **)(param_1 + 0x10));
      if (uVar3 == 0xffffffff) {
        uVar3 = 0;
      }
    }
    pcVar5 = feof_exref;
    if (uVar3 == 10) {
LAB_0048ef8c:
      *(undefined1 *)(iVar6 + param_2) = 0;
      return;
    }
  } while( true );
}


//==== 000048f780 0048f780_FUN_0048f780 ====
void __fastcall FUN_0048f780(FILE *param_1,char *param_2,int param_3);

// decompiled by BatchDecomp @ 0048f780 name=FUN_0048f780 conv=unknown body=275

void __fastcall FUN_0048f780(FILE *param_1,char *param_2,int param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  char cVar3;
  code *pcVar4;
  undefined1 local_5;
  
  cVar3 = *param_2;
  if (cVar3 != '\0') {
    param_3 = param_3 + -4;
    pcVar4 = fwrite_exref;
    do {
      param_2 = param_2 + 1;
      switch(cVar3) {
      case ' ':
        goto switchD_0048f7bd_caseD_20;
      default:
        goto switchD_0048f7bd_caseD_21;
      case '1':
        local_5 = *(undefined1 *)(param_3 + 4);
        (*pcVar4)(&local_5,1,1,param_1);
        break;
      case '2':
        uVar1 = *(undefined2 *)(param_3 + 4);
        local_5 = (undefined1)uVar1;
        fwrite(&local_5,1,1,param_1);
        pcVar4 = fwrite_exref;
        local_5 = (undefined1)((ushort)uVar1 >> 8);
        fwrite(&local_5,1,1,param_1);
        break;
      case '4':
        uVar2 = *(undefined4 *)(param_3 + 4);
        local_5 = (undefined1)uVar2;
        fwrite(&local_5,1,1,param_1);
        local_5 = (undefined1)((uint)uVar2 >> 8);
        fwrite(&local_5,1,1,param_1);
        local_5 = (undefined1)((uint)uVar2 >> 0x10);
        fwrite(&local_5,1,1,param_1);
        pcVar4 = fwrite_exref;
        local_5 = (undefined1)((uint)uVar2 >> 0x18);
        fwrite(&local_5,1,1,param_1);
      }
      param_3 = param_3 + 4;
switchD_0048f7bd_caseD_20:
      cVar3 = *param_2;
    } while (cVar3 != '\0');
switchD_0048f7bd_caseD_21:
  }
  return;
}


//==== 000048fb50 0048fb50_FUN_0048fb50 ====
extern undefined4 FUN_00488610(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
undefined4 __fastcall FUN_0048fb50(int param_1);

// decompiled by BatchDecomp @ 0048fb50 name=FUN_0048fb50 conv=unknown body=241

undefined4 __fastcall FUN_0048fb50(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (*(FILE **)(param_1 + 0x10) == (FILE *)0x0) {
    pbVar2 = *(byte **)(param_1 + 0x14);
    if (*(byte **)(param_1 + 0x18) <= pbVar2) {
      return 0;
    }
    bVar1 = *pbVar2;
    *(byte **)(param_1 + 0x14) = pbVar2 + 1;
    uVar3 = (uint)bVar1;
  }
  else {
    uVar3 = fgetc(*(FILE **)(param_1 + 0x10));
    if (uVar3 == 0xffffffff) {
      uVar3 = 0;
    }
  }
  if (uVar3 == 0x44) {
    if (*(FILE **)(param_1 + 0x10) == (FILE *)0x0) {
      pbVar2 = *(byte **)(param_1 + 0x14);
      if (*(byte **)(param_1 + 0x18) <= pbVar2) {
        return 0;
      }
      bVar1 = *pbVar2;
      *(byte **)(param_1 + 0x14) = pbVar2 + 1;
      uVar3 = (uint)bVar1;
    }
    else {
      uVar3 = fgetc(*(FILE **)(param_1 + 0x10));
      if (uVar3 == 0xffffffff) {
        uVar3 = 0;
      }
    }
    if (uVar3 == 0x44) {
      if (*(FILE **)(param_1 + 0x10) == (FILE *)0x0) {
        pbVar2 = *(byte **)(param_1 + 0x14);
        if (*(byte **)(param_1 + 0x18) <= pbVar2) {
          return 0;
        }
        bVar1 = *pbVar2;
        *(byte **)(param_1 + 0x14) = pbVar2 + 1;
        uVar3 = (uint)bVar1;
      }
      else {
        uVar3 = fgetc(*(FILE **)(param_1 + 0x10));
        if (uVar3 == 0xffffffff) {
          uVar3 = 0;
        }
      }
      if (uVar3 == 0x53) {
        if (*(FILE **)(param_1 + 0x10) == (FILE *)0x0) {
          pbVar2 = *(byte **)(param_1 + 0x14);
          if (*(byte **)(param_1 + 0x18) <= pbVar2) {
            return 0;
          }
          bVar1 = *pbVar2;
          *(byte **)(param_1 + 0x14) = pbVar2 + 1;
          uVar3 = (uint)bVar1;
        }
        else {
          uVar3 = fgetc(*(FILE **)(param_1 + 0x10));
          if (uVar3 == 0xffffffff) {
            uVar3 = 0;
          }
        }
        if (uVar3 == 0x20) {
          iVar4 = FUN_00488610();
          iVar5 = FUN_00488610();
          if (iVar5 * 0x10000 + iVar4 == 0x7c) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}


//==== 000049a930 0049a930__NodeMouseOver ====
// decompiled by BatchDecomp @ 0049a930 name=~NodeMouseOver conv=__thiscall body=151

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: __thiscall NodeMouseOver__dtor(void) */

void __thiscall NodeMouseOver__dtor(NodeMouseOver *this)

{
  int *piVar1;
  ReferenceController *pRVar2;
  
  pRVar2 = (this->NextNode).CachedNearestOrbiter.Controller;
  if (pRVar2 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar2);
  }
  pRVar2 = (this->NextNode).CachedNearestFleet.Controller;
  if (pRVar2 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar2);
  }
  pRVar2 = (this->NextNode).CachedNearestBody.Controller;
  if (pRVar2 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar2);
  }
  pRVar2 = (this->NextNode).CachedGravityBody.Controller;
  if (pRVar2 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar2);
  }
  pRVar2 = (this->NextNode).Parent.Controller;
  if (pRVar2 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar2);
  }
  pRVar2 = (this->LastNode).CachedNearestOrbiter.Controller;
  if (pRVar2 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar2);
  }
  pRVar2 = (this->LastNode).CachedNearestFleet.Controller;
  if (pRVar2 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar2);
  }
  pRVar2 = (this->LastNode).CachedNearestBody.Controller;
  if (pRVar2 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar2);
  }
  pRVar2 = (this->LastNode).CachedGravityBody.Controller;
  if (pRVar2 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar2);
  }
  pRVar2 = (this->LastNode).Parent.Controller;
  if (pRVar2 == (ReferenceController *)0x0) {
    return;
  }
  piVar1 = &pRVar2->WeakReferenceCount;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.cpp"
                    ,0x15,"WeakReferenceCount >= 0",(char *)0x0);
    DebugBreak();
  }
  util__ReferenceController__CheckForWeakRelease(pRVar2);
  return;
}


//==== 000049b160 0049b160__vector_deleting_destructor_ ====
// decompiled by BatchDecomp @ 0049b160 name=`vector_deleting_destructor' conv=__thiscall body=156

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void * __thiscall PendingBattle::`vector deleting destructor'(unsigned int) */

void * __thiscall PendingBattle___vector_deleting_destructor_(PendingBattle *this,uint param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  ReferenceController *pRVar3;
  ReferenceController **ppRVar4;
  int iVar5;
  
  if ((param_1 & 2) == 0) {
    pRVar3 = (this->Defender).Controller;
    if (pRVar3 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(pRVar3);
    }
    pRVar3 = (this->Attacker).Controller;
    if (pRVar3 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(pRVar3);
    }
    if ((param_1 & 1) != 0) {
      operator_delete(this,0x18);
    }
    return this;
  }
  piVar1 = (int *)((int)&this[-1].TimeSinceJ2000_s + 4);
  iVar5 = *piVar1;
  if (iVar5 != 0) {
    ppRVar4 = &this[iVar5].Attacker.Controller;
    do {
      puVar2 = ppRVar4 + -4;
      ppRVar4 = ppRVar4 + -6;
      iVar5 = iVar5 + -1;
      if ((ReferenceController *)*puVar2 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference((ReferenceController *)*puVar2);
      }
      if (*ppRVar4 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(*ppRVar4);
      }
    } while (iVar5 != 0);
  }
  if ((param_1 & 1) != 0) {
    operator_delete__(piVar1,*piVar1 * 0x18 + 4);
  }
  return piVar1;
}


//==== 000052e8b0 0052e8b0_GetDryMass_kg ====

// decompiled by BatchDecomp @ 0052e8b0 name=GetDryMass_kg conv=__thiscall body=302

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall CraftInstance__GetDryMass_kg(bool)const  */

double __thiscall CraftInstance__GetDryMass_kg(CraftInstance *this,bool param_1)

{
  int iVar1;
  bool bVar2;
  Darray_L_bool_P__G_ *pDVar3;
  float10 fVar4;
  undefined **local_28;
  void *local_24;
  bool local_18;
  undefined **local_14;
  void *local_10;
  undefined8 local_c;
  
  if ((this->GetAllMainEnginePropellantsUsed_MemoizedValue).IsValidData == false) {
    iVar1 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_c = (double)CONCAT44(iVar1 + 1,(undefined4)local_c);
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               (int *)((int)&local_c + 4));
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar1);
    if (bVar2) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, GetAllMainEnginePropellantsUsed_Clear);
    }
    pDVar3 = (Darray_L_bool_P_G_ *)GetAllMainEnginePropellantsUsed_MemoizedFunction(this);
    util__Darray_bool____Darray_bool((Darray_L_bool_P_G_ *)&local_28,pDVar3);
    local_18 = true;
    util__Darray_class_Module____operator
              ((Darray_L_class_Module_P_G_ *)&this->GetAllMainEnginePropellantsUsed_MemoizedValue,
               (Darray_L_class_Module_P_G_ *)&local_28);
    (this->GetAllMainEnginePropellantsUsed_MemoizedValue).IsValidData = local_18;
    local_28 = ((void *)(0x009194a4u));
    if (local_24 != (void *)0x0) {
      operator_delete__(local_24);
    }
    local_24 = (void *)0x0;
    local_28 = ((void *)(0x00919488u));
    local_14 = ((void *)(0x009194a4u));
    if (local_10 != (void *)0x0) {
      operator_delete__(local_10);
    }
    local_10 = (void *)0x0;
    local_14 = ((void *)(0x00919488u));
  }
  if ((this->GetAllMainEnginePropellantsUsed_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  bVar2 = ArmorMatrix__HasArmor((this->Armor).Pointer);
  if (bVar2) {
    local_c = ArmorMatrix__GetTotalMass_kg((this->Armor).Pointer);
  }
  else {
    local_c = 0.0;
  }
  fVar4 = (float10)FUN_00527160(&this->Compartments,&param_1,
                                &this->GetAllMainEnginePropellantsUsed_MemoizedValue);
  return (double)(fVar4 + (float10)local_c);
}


//==== 000052f680 0052f680_GetInverseMomentOfInertiaTensor_kg_m2_Memoize ====
// decompiled by BatchDecomp @ 0052f680 name=GetInverseMomentOfInertiaTensor_kg_m2_Memoize conv=__thiscall body=158

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetInverseMomentOfInertiaTensor_kg_m2_Memoize(void)const
    */

void __thiscall CraftInstance__GetInverseMomentOfInertiaTensor_kg_m2_Memoize(CraftInstance *this)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  bool bVar18;
  Matrix3x3_L_double_G_ *pMVar19;
  Matrix3x3_L_double_G_ local_50;
  int local_8;
  
  if (*(char *)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 7) == '\0')
  {
    iVar2 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_8 = iVar2 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_8);
    bVar18 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                        &this->CraftInstanceMemoizationHandlerInstance,iVar2);
    if (bVar18) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, GetInverseMomentOfInertiaTensor_kg_m2_Clear);
    }
    pMVar19 = GetInverseMomentOfInertiaTensor_kg_m2_MemoizedFunction(this,&local_50);
    uVar3 = *(undefined4 *)((int)pMVar19->Data + 4);
    uVar4 = *(undefined4 *)(pMVar19->Data + 1);
    uVar5 = *(undefined4 *)((int)pMVar19->Data + 0xc);
    dVar1 = pMVar19->Data[8];
    uVar6 = *(undefined4 *)(pMVar19->Data + 2);
    uVar7 = *(undefined4 *)((int)pMVar19->Data + 0x14);
    uVar8 = *(undefined4 *)(pMVar19->Data + 3);
    uVar9 = *(undefined4 *)((int)pMVar19->Data + 0x1c);
    uVar10 = *(undefined4 *)(pMVar19->Data + 4);
    uVar11 = *(undefined4 *)((int)pMVar19->Data + 0x24);
    uVar12 = *(undefined4 *)(pMVar19->Data + 5);
    uVar13 = *(undefined4 *)((int)pMVar19->Data + 0x2c);
    uVar14 = *(undefined4 *)(pMVar19->Data + 6);
    uVar15 = *(undefined4 *)((int)pMVar19->Data + 0x34);
    uVar16 = *(undefined4 *)(pMVar19->Data + 7);
    uVar17 = *(undefined4 *)((int)pMVar19->Data + 0x3c);
    ((slice_view *)&local_50.Data[8])->_0_4_ = CONCAT31(((slice_view *)&local_50.Data[8])->_1_3_,1);
    *(undefined4 *)((this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 8) =
         *(undefined4 *)pMVar19->Data;
    *(undefined4 *)((int)(this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x44) =
         uVar3;
    *(undefined4 *)&(this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).IsValidData = uVar4;
    *(undefined4 *)((char *)&(this->GetMomentOfInertiaTensor_kg_m2_MemoizedValue) + 0x4c) = uVar5;
    ((slice_view *)&local_50.Data[7])->_0_4_ = *(undefined4 *)&dVar1;
    ((slice_view *)&local_50.Data[7])->_4_4_ = *(undefined4 *)((char *)&dVar1 + 4);
    *(undefined4 *)(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data = uVar6;
    *(undefined4 *)((int)(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 4)
         = uVar7;
    *(undefined4 *)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 1) =
         uVar8;
    *(undefined4 *)
     ((int)(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0xc) = uVar9;
    *(undefined4 *)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 2) =
         uVar10;
    *(undefined4 *)
     ((int)(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x14) = uVar11;
    *(undefined4 *)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 3) =
         uVar12;
    *(undefined4 *)
     ((int)(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x1c) = uVar13;
    *(undefined4 *)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 4) =
         uVar14;
    *(undefined4 *)
     ((int)(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x24) = uVar15;
    *(undefined4 *)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 5) =
         uVar16;
    *(undefined4 *)
     ((int)(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x2c) = uVar17;
    *(undefined4 *)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 6) =
         ((slice_view *)&local_50.Data[7])->_0_4_;
    *(undefined4 *)
     ((int)(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x34) =
         ((slice_view *)&local_50.Data[7])->_4_4_;
    *(undefined4 *)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 7) =
         ((slice_view *)&local_50.Data[8])->_0_4_;
    *(undefined4 *)
     ((int)(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x3c) =
         ((slice_view *)&local_50.Data[8])->_4_4_;
  }
  return;
}


//==== 0000530310 00530310_GetMaxAcceleration_m__s2 ====
// decompiled by BatchDecomp @ 00530310 name=GetMaxAcceleration_m__s2 conv=__thiscall body=343

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall CraftInstance__GetMaxAcceleration_m__s2(void)const  */

double __thiscall CraftInstance__GetMaxAcceleration_m__s2(CraftInstance *this)

{
  undefined4 stack0xffffffed;
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  double dVar6;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined8 local_c;
  
  uVar2 = _uStack_14;
  pcVar5 = DebugBreak_exref;
  if ((this->GetTotalReactionMass_kg_MemoizedValue).IsValidData == false) {
    iVar1 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_c = (double)CONCAT44(iVar1 + 1,(undefined4)local_c);
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               (int *)((int)&local_c + 4));
    bVar4 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar1);
    if (bVar4) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, CraftInstance__GetTotalMass_kg_Clear);
    }
    bVar4 = (this->GetStagingWetMass_kg_MemoizedValue).IsValidData == false;
    if (bVar4) {
      iVar1 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
      local_c = (double)CONCAT44(iVar1 + 1,(undefined4)local_c);
      util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
                 (int *)((int)&local_c + 4));
      bVar4 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                         &this->CraftInstanceMemoizationHandlerInstance,iVar1);
      if (bVar4) {
        (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
        [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
             CDE_PMF(pmf_57e8e8d5, GetStagingWetMass_kg_Clear);
      }
      dVar6 = GetWetMass_kg(this,true);
      _uStack_14 = CONCAT71(stack0xffffffed,1);
      uVar3 = _uStack_14;
      local_1c = *(undefined4 *)&dVar6;
      uStack_18 = *(undefined4 *)((char *)&dVar6 + 4);
      uStack_10 = SUB84(uVar2,4);
      *(undefined4 *)&(this->GetStagingWetMass_kg_MemoizedValue).Data = local_1c;
      *(undefined4 *)((int)&(this->GetStagingWetMass_kg_MemoizedValue).Data + 4) = uStack_18;
      *(undefined4 *)&(this->GetStagingWetMass_kg_MemoizedValue).IsValidData = uStack_14;
      *(undefined4 *)((char *)&(this->GetStagingWetMass_kg_MemoizedValue) + 0xc) = uStack_10;
      bVar4 = (this->GetStagingWetMass_kg_MemoizedValue).IsValidData == false;
      _uStack_14 = uVar3;
    }
    uVar2 = _uStack_14;
    pcVar5 = DebugBreak_exref;
    if (bVar4) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      pcVar5 = DebugBreak_exref;
      DebugBreak();
    }
    dVar6 = (this->GetStagingWetMass_kg_MemoizedValue).Data;
    _uStack_14 = CONCAT71(stack0xffffffed,1);
    local_1c = *(undefined4 *)&dVar6;
    uStack_18 = *(undefined4 *)((char *)&dVar6 + 4);
    uStack_10 = SUB84(uVar2,4);
    *(undefined4 *)&(this->GetTotalReactionMass_kg_MemoizedValue).Data = local_1c;
    *(undefined4 *)((int)&(this->GetTotalReactionMass_kg_MemoizedValue).Data + 4) = uStack_18;
    *(undefined4 *)&(this->GetTotalReactionMass_kg_MemoizedValue).IsValidData = uStack_14;
    *(undefined4 *)((char *)&(this->GetTotalReactionMass_kg_MemoizedValue) + 0xc) = uStack_10;
    if ((this->GetTotalReactionMass_kg_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      (*pcVar5)();
    }
  }
  dVar6 = GetMaxThrust_N(this);
  dVar6 = dVar6 / (this->GetTotalReactionMass_kg_MemoizedValue).Data;
  if (dVar6 < /*0000000000000000*/0.0) {
    local_c = dVar6;
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\crafts\\craftblueprintinstances.cpp"
                    ,0x138,"MaxAcceleration_m__s2 >= 0.",(char *)0x0);
    (*pcVar5)();
  }
  return dVar6;
}


//==== 0000539130 00539130_FUN_00539130 ====
extern undefined4 FUN_00538890(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void FUN_00539130(Darray_L_bool_P__G_ *param_1,Darray_L_bool_P__G_ *param_2,undefined4 param_3);

// decompiled by BatchDecomp @ 00539130 name=FUN_00539130 conv=unknown body=407

void FUN_00539130(Darray_L_bool_P__G_ *param_1,Darray_L_bool_P__G_ *param_2,undefined4 param_3)

{
  undefined4 stack0xfffffffc;
  int iVar1;
  Darray_L_bool_P__G_ *pDVar2;
  int iVar3;
  int iVar4;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  Darray_L_bool_P__G_ *local_34;
  Darray_L_bool_P__G_ *local_30;
  undefined **local_2c;
  void *pvStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined **local_1c;
  void *pvStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar1 = (**(code **)(*(int *)param_2 + 0xc))();
  if (iVar1 == 0) {
    util__Darray_bool____Darray_bool(param_1,param_2);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_2c = (undefined **)0x0;
  pvStack_28 = (void *)0x0;
  uStack_24 = 0;
  uStack_20 = 0;
  util__Darray_bool____Darray_bool((Darray_L_bool_P_G_ *)&local_2c,param_2);
  local_1c = (undefined **)0x0;
  pvStack_18 = (void *)0x0;
  iStack_14 = 0;
  uStack_10 = 0;
  util__Darray_class_Manager____Darray_class_Manager((Darray_L_class_Manager_P_G_ *)&local_1c,iVar1);
  iVar3 = iStack_14;
  local_c = iVar1;
  util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&local_1c,&local_c);
  util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&local_1c,iVar3);
  iVar3 = 1;
  pDVar2 = (Darray_L_bool_P_G_ *)&local_2c;
  local_34 = (Darray_L_bool_P_G_ *)&local_1c;
  if (1 < iVar1) {
    do {
      local_c = 0;
      local_38 = 0;
      iVar4 = iVar3;
      local_30 = pDVar2;
      if (0 < iVar1) {
        do {
          local_44 = iVar1;
          if (iVar4 < iVar1) {
            local_44 = iVar4;
          }
          local_3c = iVar1;
          if (local_44 + iVar3 < iVar1) {
            local_3c = local_44 + iVar3;
          }
          local_48 = local_38;
          local_40 = local_44;
          FUN_00538890(local_30,local_34,&local_48,&local_44,&local_40,&local_3c,&local_c,param_3);
          local_38 = local_38 + iVar3 * 2;
          iVar4 = iVar4 + iVar3 * 2;
        } while (local_38 < iVar1);
      }
      pDVar2 = local_34;
      if (local_c != iVar1) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\sort.inl",0x3e,
                        "OutIndex == Size",(char *)0x0);
        DebugBreak();
      }
      iVar3 = iVar3 * 2;
      local_34 = local_30;
    } while (iVar3 < iVar1);
  }
  local_30 = pDVar2;
  util__Darray_bool____Darray_bool(param_1,pDVar2);
  local_1c = ((void *)(0x009194a4u));
  if (pvStack_18 != (void *)0x0) {
    operator_delete__(pvStack_18);
  }
  pvStack_18 = (void *)0x0;
  local_1c = ((void *)(0x00919488u));
  local_2c = ((void *)(0x009194a4u));
  if (pvStack_28 != (void *)0x0) {
    operator_delete__(pvStack_28);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00005392d0 005392d0_FUN_005392d0 ====
extern undefined4 FUN_00538a40(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void FUN_005392d0(Darray_L_bool_P__G_ *param_1,Darray_L_bool_P__G_ *param_2,undefined4 param_3);

// decompiled by BatchDecomp @ 005392d0 name=FUN_005392d0 conv=unknown body=407

void FUN_005392d0(Darray_L_bool_P__G_ *param_1,Darray_L_bool_P__G_ *param_2,undefined4 param_3)

{
  undefined4 stack0xfffffffc;
  int iVar1;
  Darray_L_bool_P__G_ *pDVar2;
  int iVar3;
  int iVar4;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  Darray_L_bool_P__G_ *local_34;
  Darray_L_bool_P__G_ *local_30;
  undefined **local_2c;
  void *pvStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined **local_1c;
  void *pvStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar1 = (**(code **)(*(int *)param_2 + 0xc))();
  if (iVar1 == 0) {
    util__Darray_bool____Darray_bool(param_1,param_2);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_2c = (undefined **)0x0;
  pvStack_28 = (void *)0x0;
  uStack_24 = 0;
  uStack_20 = 0;
  util__Darray_bool____Darray_bool((Darray_L_bool_P_G_ *)&local_2c,param_2);
  local_1c = (undefined **)0x0;
  pvStack_18 = (void *)0x0;
  iStack_14 = 0;
  uStack_10 = 0;
  util__Darray_class_Manager____Darray_class_Manager((Darray_L_class_Manager_P_G_ *)&local_1c,iVar1);
  iVar3 = iStack_14;
  local_c = iVar1;
  util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&local_1c,&local_c);
  util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&local_1c,iVar3);
  iVar3 = 1;
  pDVar2 = (Darray_L_bool_P_G_ *)&local_2c;
  local_34 = (Darray_L_bool_P_G_ *)&local_1c;
  if (1 < iVar1) {
    do {
      local_c = 0;
      local_38 = 0;
      iVar4 = iVar3;
      local_30 = pDVar2;
      if (0 < iVar1) {
        do {
          local_44 = iVar1;
          if (iVar4 < iVar1) {
            local_44 = iVar4;
          }
          local_3c = iVar1;
          if (local_44 + iVar3 < iVar1) {
            local_3c = local_44 + iVar3;
          }
          local_48 = local_38;
          local_40 = local_44;
          FUN_00538a40(local_30,local_34,&local_48,&local_44,&local_40,&local_3c,&local_c,param_3);
          local_38 = local_38 + iVar3 * 2;
          iVar4 = iVar4 + iVar3 * 2;
        } while (local_38 < iVar1);
      }
      pDVar2 = local_34;
      if (local_c != iVar1) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\sort.inl",0x3e,
                        "OutIndex == Size",(char *)0x0);
        DebugBreak();
      }
      iVar3 = iVar3 * 2;
      local_34 = local_30;
    } while (iVar3 < iVar1);
  }
  local_30 = pDVar2;
  util__Darray_bool____Darray_bool(param_1,pDVar2);
  local_1c = ((void *)(0x009194a4u));
  if (pvStack_18 != (void *)0x0) {
    operator_delete__(pvStack_18);
  }
  pvStack_18 = (void *)0x0;
  local_1c = ((void *)(0x00919488u));
  local_2c = ((void *)(0x009194a4u));
  if (pvStack_28 != (void *)0x0) {
    operator_delete__(pvStack_28);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000539470 00539470_FUN_00539470 ====
extern undefined4 FUN_00538be0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void FUN_00539470(Darray_L_bool_P__G_ *param_1,Darray_L_bool_P__G_ *param_2,undefined4 param_3);

// decompiled by BatchDecomp @ 00539470 name=FUN_00539470 conv=unknown body=407

void FUN_00539470(Darray_L_bool_P__G_ *param_1,Darray_L_bool_P__G_ *param_2,undefined4 param_3)

{
  undefined4 stack0xfffffffc;
  int iVar1;
  Darray_L_bool_P__G_ *pDVar2;
  int iVar3;
  int iVar4;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  Darray_L_bool_P__G_ *local_34;
  Darray_L_bool_P__G_ *local_30;
  undefined **local_2c;
  void *pvStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined **local_1c;
  void *pvStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar1 = (**(code **)(*(int *)param_2 + 0xc))();
  if (iVar1 == 0) {
    util__Darray_bool____Darray_bool(param_1,param_2);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_2c = (undefined **)0x0;
  pvStack_28 = (void *)0x0;
  uStack_24 = 0;
  uStack_20 = 0;
  util__Darray_bool____Darray_bool((Darray_L_bool_P_G_ *)&local_2c,param_2);
  local_1c = (undefined **)0x0;
  pvStack_18 = (void *)0x0;
  iStack_14 = 0;
  uStack_10 = 0;
  util__Darray_class_Manager____Darray_class_Manager((Darray_L_class_Manager_P_G_ *)&local_1c,iVar1);
  iVar3 = iStack_14;
  local_c = iVar1;
  util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&local_1c,&local_c);
  util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&local_1c,iVar3);
  iVar3 = 1;
  pDVar2 = (Darray_L_bool_P_G_ *)&local_2c;
  local_34 = (Darray_L_bool_P_G_ *)&local_1c;
  if (1 < iVar1) {
    do {
      local_c = 0;
      local_38 = 0;
      iVar4 = iVar3;
      local_30 = pDVar2;
      if (0 < iVar1) {
        do {
          local_44 = iVar1;
          if (iVar4 < iVar1) {
            local_44 = iVar4;
          }
          local_3c = iVar1;
          if (local_44 + iVar3 < iVar1) {
            local_3c = local_44 + iVar3;
          }
          local_48 = local_38;
          local_40 = local_44;
          FUN_00538be0(local_30,local_34,&local_48,&local_44,&local_40,&local_3c,&local_c,param_3);
          local_38 = local_38 + iVar3 * 2;
          iVar4 = iVar4 + iVar3 * 2;
        } while (local_38 < iVar1);
      }
      pDVar2 = local_34;
      if (local_c != iVar1) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\sort.inl",0x3e,
                        "OutIndex == Size",(char *)0x0);
        DebugBreak();
      }
      iVar3 = iVar3 * 2;
      local_34 = local_30;
    } while (iVar3 < iVar1);
  }
  local_30 = pDVar2;
  util__Darray_bool____Darray_bool(param_1,pDVar2);
  local_1c = ((void *)(0x009194a4u));
  if (pvStack_18 != (void *)0x0) {
    operator_delete__(pvStack_18);
  }
  pvStack_18 = (void *)0x0;
  local_1c = ((void *)(0x00919488u));
  local_2c = ((void *)(0x009194a4u));
  if (pvStack_28 != (void *)0x0) {
    operator_delete__(pvStack_28);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000539610 00539610_FUN_00539610 ====
extern undefined4 FUN_00538db0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void FUN_00539610(Darray_L_bool_P__G_ *param_1,Darray_L_bool_P__G_ *param_2,undefined4 param_3);

// decompiled by BatchDecomp @ 00539610 name=FUN_00539610 conv=unknown body=407

void FUN_00539610(Darray_L_bool_P__G_ *param_1,Darray_L_bool_P__G_ *param_2,undefined4 param_3)

{
  undefined4 stack0xfffffffc;
  int iVar1;
  Darray_L_bool_P__G_ *pDVar2;
  int iVar3;
  int iVar4;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  Darray_L_bool_P__G_ *local_34;
  Darray_L_bool_P__G_ *local_30;
  undefined **local_2c;
  void *pvStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined **local_1c;
  void *pvStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar1 = (**(code **)(*(int *)param_2 + 0xc))();
  if (iVar1 == 0) {
    util__Darray_bool____Darray_bool(param_1,param_2);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_2c = (undefined **)0x0;
  pvStack_28 = (void *)0x0;
  uStack_24 = 0;
  uStack_20 = 0;
  util__Darray_bool____Darray_bool((Darray_L_bool_P_G_ *)&local_2c,param_2);
  local_1c = (undefined **)0x0;
  pvStack_18 = (void *)0x0;
  iStack_14 = 0;
  uStack_10 = 0;
  util__Darray_class_Manager____Darray_class_Manager((Darray_L_class_Manager_P_G_ *)&local_1c,iVar1);
  iVar3 = iStack_14;
  local_c = iVar1;
  util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&local_1c,&local_c);
  util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&local_1c,iVar3);
  iVar3 = 1;
  pDVar2 = (Darray_L_bool_P_G_ *)&local_2c;
  local_34 = (Darray_L_bool_P_G_ *)&local_1c;
  if (1 < iVar1) {
    do {
      local_c = 0;
      local_38 = 0;
      iVar4 = iVar3;
      local_30 = pDVar2;
      if (0 < iVar1) {
        do {
          local_44 = iVar1;
          if (iVar4 < iVar1) {
            local_44 = iVar4;
          }
          local_3c = iVar1;
          if (local_44 + iVar3 < iVar1) {
            local_3c = local_44 + iVar3;
          }
          local_48 = local_38;
          local_40 = local_44;
          FUN_00538db0(local_30,local_34,&local_48,&local_44,&local_40,&local_3c,&local_c,param_3);
          local_38 = local_38 + iVar3 * 2;
          iVar4 = iVar4 + iVar3 * 2;
        } while (local_38 < iVar1);
      }
      pDVar2 = local_34;
      if (local_c != iVar1) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\sort.inl",0x3e,
                        "OutIndex == Size",(char *)0x0);
        DebugBreak();
      }
      iVar3 = iVar3 * 2;
      local_34 = local_30;
    } while (iVar3 < iVar1);
  }
  local_30 = pDVar2;
  util__Darray_bool____Darray_bool(param_1,pDVar2);
  local_1c = ((void *)(0x009194a4u));
  if (pvStack_18 != (void *)0x0) {
    operator_delete__(pvStack_18);
  }
  pvStack_18 = (void *)0x0;
  local_1c = ((void *)(0x00919488u));
  local_2c = ((void *)(0x009194a4u));
  if (pvStack_28 != (void *)0x0) {
    operator_delete__(pvStack_28);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00005397b0 005397b0_FUN_005397b0 ====
extern undefined4 FUN_00538f50(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void FUN_005397b0(Darray_L_struct_CraftSplinePoint_G_ *param_1,Darray_L_struct_CraftSplinePoint_G_ *param_2, undefined4 param_3);

// decompiled by BatchDecomp @ 005397b0 name=FUN_005397b0 conv=unknown body=403

void FUN_005397b0(Darray_L_struct_CraftSplinePoint_G_ *param_1,Darray_L_struct_CraftSplinePoint_G_ *param_2,
                 undefined4 param_3)

{
  undefined4 stack0xfffffffc;
  int iVar1;
  Darray_L_struct_CraftSplinePoint_G_ *pDVar2;
  int iVar3;
  int iVar4;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  Darray_L_struct_CraftSplinePoint_G_ *local_34;
  Darray_L_struct_CraftSplinePoint_G_ *local_30;
  undefined **local_2c;
  CraftSplinePoint *pCStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined **local_1c;
  CraftSplinePoint *pCStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar1 = (**(code **)(*(int *)param_2 + 0xc))();
  if (iVar1 == 0) {
    util__Darray_struct_CraftSplinePoint___Darray_struct_CraftSplinePoint(param_1,param_2);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_2c = (undefined **)0x0;
  pCStack_28 = (CraftSplinePoint *)0x0;
  uStack_24 = 0;
  uStack_20 = 0;
  util__Darray_struct_CraftSplinePoint___Darray_struct_CraftSplinePoint((Darray_L_struct_CraftSplinePoint_G_ *)&local_2c,param_2);
  local_1c = (undefined **)0x0;
  pCStack_18 = (CraftSplinePoint *)0x0;
  iStack_14 = 0;
  uStack_10 = 0;
  util__Darray_struct_CraftSplinePoint___Darray_struct_CraftSplinePoint__o2((Darray_L_struct_CraftSplinePoint_G_ *)&local_1c,iVar1);
  iVar3 = iStack_14;
  local_c = iVar1;
  util__Darray_struct_CraftSplinePoint___SetSize((Darray_L_struct_CraftSplinePoint_G_ *)&local_1c,&local_c);
  util__Darray_struct_CraftSplinePoint___CheckSize((Darray_L_struct_CraftSplinePoint_G_ *)&local_1c,iVar3);
  iVar3 = 1;
  pDVar2 = (Darray_L_struct_CraftSplinePoint_G_ *)&local_2c;
  local_34 = (Darray_L_struct_CraftSplinePoint_G_ *)&local_1c;
  if (1 < iVar1) {
    do {
      local_c = 0;
      local_38 = 0;
      iVar4 = iVar3;
      local_30 = pDVar2;
      if (0 < iVar1) {
        do {
          local_44 = iVar1;
          if (iVar4 < iVar1) {
            local_44 = iVar4;
          }
          local_3c = iVar1;
          if (local_44 + iVar3 < iVar1) {
            local_3c = local_44 + iVar3;
          }
          local_48 = local_38;
          local_40 = local_44;
          FUN_00538f50(local_30,local_34,&local_48,&local_44,&local_40,&local_3c,&local_c,param_3);
          local_38 = local_38 + iVar3 * 2;
          iVar4 = iVar4 + iVar3 * 2;
        } while (local_38 < iVar1);
      }
      pDVar2 = local_34;
      if (local_c != iVar1) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\sort.inl",0x3e,
                        "OutIndex == Size",(char *)0x0);
        DebugBreak();
      }
      iVar3 = iVar3 * 2;
      local_34 = local_30;
    } while (iVar3 < iVar1);
  }
  local_30 = pDVar2;
  util__Darray_struct_CraftSplinePoint___Darray_struct_CraftSplinePoint(param_1,pDVar2);
  local_1c = ((void *)(0x00919b0cu));
  if (pCStack_18 != (CraftSplinePoint *)0x0) {
    CraftSplinePoint___vector_deleting_destructor_(pCStack_18,3);
  }
  pCStack_18 = (CraftSplinePoint *)0x0;
  local_1c = ((void *)(0x00919488u));
  local_2c = ((void *)(0x00919b0cu));
  if (pCStack_28 != (CraftSplinePoint *)0x0) {
    CraftSplinePoint___vector_deleting_destructor_(pCStack_28,3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000555470 00555470_GetModuleTypeMassPercent ====
// decompiled by BatchDecomp @ 00555470 name=GetModuleTypeMassPercent conv=__thiscall body=355

/* public: double __thiscall CraftBlueprint__GetModuleTypeMassPercent(enum Module::Type)const  */

double __thiscall CraftBlueprint__GetModuleTypeMassPercent(CraftBlueprint *this,Type param_1)

{
  undefined4 stack0xfffffffc;
  float10 fVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  float10 fVar8;
  float10 extraout_ST0;
  undefined **local_34;
  void *local_30;
  double local_24;
  undefined8 uStack_1c;
  double local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar5 = (int *)GetModulesOfType(this,(Type)&local_34);
  local_c = 0;
  local_14 = 0.0;
  uStack_1c = 0.0;
  iVar6 = (**(code **)(*(int *)(uintptr_t)piVar5 + 0xc))();
  if (local_c < iVar6) {
    local_14 = uStack_1c;
    do {
      puVar7 = (undefined4 *)(**(code **)*piVar5)(&local_c);
      fVar8 = (float10)(**(code **)(*(int *)*puVar7 + 0x90))();
      fVar1 = (float10)local_14;
      local_c = local_c + 1;
      local_14 = (double)(fVar8 + fVar1);
      uStack_1c = (double)(fVar8 + fVar1);
      iVar6 = (**(code **)(*(int *)(uintptr_t)piVar5 + 0xc))();
    } while (local_c < iVar6);
    local_14 = uStack_1c;
  }
  if (*(char *)&(this->GetCrossSection_m2_MemoizedValue).Data == '\0') {
    iVar6 = (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity;
    uStack_1c = (double)CONCAT44(iVar6 + 1,(undefined4)uStack_1c);
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)
               &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,
               (int *)((int)&uStack_1c + 4));
    bVar4 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &(this->GetAllModulesNeedingCooling_MemoizedValue).Data.Data,iVar6);
    if (bVar4) {
      *(code **)((this->GetAllModulesNeedingCooling_MemoizedValue).Data.Size + -4 +
                (this->GetAllModulesNeedingCooling_MemoizedValue).Data.Capacity * 4) =
           GetStagingWetMass_kg_Clear;
    }
    uStack_1c = GetDryMass_kg(this,true);
    local_24 = GetReactionMass_kg(this,true);
    dVar2 = uStack_1c;
    local_24 = local_24 + uStack_1c;
    uStack_1c = (double)CONCAT71(((slice_view *)&uStack_1c)->_1_7_,1);
    dVar3 = uStack_1c;
    ((slice_view *)&uStack_1c)->_4_4_ = SUB84(dVar2,4);
    *(double *)&(this->GetBoundingCylinder_m_MemoizedValue).IsValidData = local_24;
    *(undefined4 *)&(this->GetCrossSection_m2_MemoizedValue).Data = (undefined4)uStack_1c;
    *(undefined4 *)((int)&(this->GetCrossSection_m2_MemoizedValue).Data + 4) = ((slice_view *)&uStack_1c)->_4_4_;
    uStack_1c = dVar3;
    if (*(char *)&(this->GetCrossSection_m2_MemoizedValue).Data == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  local_14 = local_14 / *(double *)&(this->GetBoundingCylinder_m_MemoizedValue).IsValidData;
  local_34 = ((void *)(0x009199e4u));
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 0000594fa0 00594fa0_Instantiate ====
// decompiled by BatchDecomp @ 00594fa0 name=Instantiate conv=__thiscall body=186

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::SharedPtr<struct ModuleCompartment> __thiscall
   RemoteControlModule__Instantiate(void)const  */

undefined4 * __thiscall RemoteControlModule__Instantiate(RemoteControlModule *this)

{
  bool bVar1;
  ModuleCompartment *this_00;
  ReferenceControllerRegistry *pRVar2;
  ReferenceController *this_01;
  undefined4 *in_stack_00000004;
  ModuleCompartment *pMVar3;
  
  this_00 = (ModuleCompartment *)operator_new(0x118);
  if (this_00 == (ModuleCompartment *)0x0) {
    this_00 = (ModuleCompartment *)0x0;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
  }
  else {
    ModuleCompartment__ModuleCompartment(this_00);
    this_00->_pad_0x0_0 = (int)((void *)(0x00924df8u));
    *(undefined1 *)&this_00[1]._pad_0x0_0 = 0;
    this_00[1]._pad_0x0_0 = 0;
    *(undefined1 *)&this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions._pad_0x0_0
         = 1;
  }
  pMVar3 = this_00;
  pRVar2 = util__ReferenceControllerRegistry__Get();
  this_01 = util__ReferenceControllerRegistry__Register(pRVar2,pMVar3);
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
  }
  *in_stack_00000004 = this_00;
  in_stack_00000004[1] = this_01;
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
    bVar1 = util__ReferenceController__ReleaseStrongReference(this_01);
    if (bVar1) {
      if (this_00 != (ModuleCompartment *)0x0) {
        (**(code **)*(int *)this_00)(1);
      }
      pRVar2 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar2,this_00);
    }
  }
  return in_stack_00000004;
}


//==== 00005956a0 005956a0_Instantiate ====
// decompiled by BatchDecomp @ 005956a0 name=Instantiate conv=__thiscall body=180

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::SharedPtr<struct ModuleCompartment> __thiscall
   FuseModule__Instantiate(void)const  */

undefined4 * __thiscall FuseModule__Instantiate(FuseModule *this)

{
  bool bVar1;
  ModuleCompartment *this_00;
  ReferenceControllerRegistry *pRVar2;
  ReferenceController *this_01;
  undefined4 *in_stack_00000004;
  ModuleCompartment *pMVar3;
  
  this_00 = (ModuleCompartment *)operator_new(0x118);
  if (this_00 == (ModuleCompartment *)0x0) {
    this_00 = (ModuleCompartment *)0x0;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
  }
  else {
    ModuleCompartment__ModuleCompartment(this_00);
    this_00->_pad_0x0_0 = (int)((void *)(0x00924e9cu));
    *(undefined1 *)&this_00[1]._pad_0x0_0 = 0;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 = 0;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions.Data = (pmf_6def6ee4 *)0x0
    ;
  }
  pMVar3 = this_00;
  pRVar2 = util__ReferenceControllerRegistry__Get();
  this_01 = util__ReferenceControllerRegistry__Register(pRVar2,pMVar3);
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
  }
  *in_stack_00000004 = this_00;
  in_stack_00000004[1] = this_01;
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
    bVar1 = util__ReferenceController__ReleaseStrongReference(this_01);
    if (bVar1) {
      if (this_00 != (ModuleCompartment *)0x0) {
        (**(code **)*(int *)this_00)(1);
      }
      pRVar2 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar2,this_00);
    }
  }
  return in_stack_00000004;
}


//==== 0000599b40 00599b40_Instantiate ====
// decompiled by BatchDecomp @ 00599b40 name=Instantiate conv=__thiscall body=236

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::SharedPtr<struct ModuleCompartment> __thiscall
   CrewModule__Instantiate(void)const  */

undefined4 * __thiscall CrewModule__Instantiate(CrewModule *this)

{
  bool bVar1;
  ModuleCompartment *this_00;
  ReferenceControllerRegistry *pRVar2;
  ReferenceController *this_01;
  undefined4 *in_stack_00000004;
  ModuleCompartment *pMVar3;
  
  this_00 = (ModuleCompartment *)operator_new(0x130);
  if (this_00 == (ModuleCompartment *)0x0) {
    this_00 = (ModuleCompartment *)0x0;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
  }
  else {
    ModuleCompartment__ModuleCompartment(this_00);
    this_00->_pad_0x0_0 = (int)((void *)(0x00925318u));
    this_00[1]._pad_0x0_0 = 0;
    this_00[1]._pad_0x0_0 = 0;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 = 0;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions.Data = (pmf_6def6ee4 *)0x0
    ;
    this_00[1]._pad_0x0_0 = (int)((void *)(0x009194a4u));
    this_00[1]._pad_0x0_0 = 0;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 = 0;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions.Data = (pmf_6def6ee4 *)0x0
    ;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions.Size = 0;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    this_00[1].IsCompartmentDamagedFromPieceDamage_MemoizedValue.Data = false;
    *(undefined2 *)&this_00[1].GetBoundingSphereRadius_m_MemoizedValue.Data = 1;
  }
  pMVar3 = this_00;
  pRVar2 = util__ReferenceControllerRegistry__Get();
  this_01 = util__ReferenceControllerRegistry__Register(pRVar2,pMVar3);
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
  }
  *in_stack_00000004 = this_00;
  in_stack_00000004[1] = this_01;
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
    bVar1 = util__ReferenceController__ReleaseStrongReference(this_01);
    if (bVar1) {
      if (this_00 != (ModuleCompartment *)0x0) {
        (**(code **)*(int *)this_00)(1);
      }
      pRVar2 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar2,this_00);
    }
  }
  return in_stack_00000004;
}


//==== 000059b050 0059b050_WeakThis_SpacecraftComponent_ ====
// decompiled by BatchDecomp @ 0059b050 name=WeakThis_L_class_SpacecraftComponent_G_ conv=__cdecl body=120

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* class util::WeakPtr<class SpacecraftComponent> __cdecl util__GetLayoutOffsetFromParent(class SpacecraftComponent const * const) */

SpacecraftComponent * __cdeclutil__GetLayoutOffsetFromParent(SpacecraftComponent *param_1)

{
  bool bVar1;
  ReferenceControllerRegistry *this;
  SpacecraftComponent *this_00;
  SpacecraftComponent *this_01;
  void *in_stack_00000008;
  void *pvVar2;
  
  pvVar2 = in_stack_00000008;
  this = ReferenceControllerRegistry__Get();
  this_00 = (SpacecraftComponent *)ReferenceControllerRegistry__GetController(this,pvVar2);
  if ((this_00 == (SpacecraftComponent *)0x0) || (in_stack_00000008 == (void *)0x0)) {
    in_stack_00000008 = (void *)0x0;
    bVar1 = false;
    this_00 = (SpacecraftComponent *)0x0;
    this_01 = param_1;
  }
  else {
    ReferenceController__AddWeakReference((ReferenceController *)this_00);
    bVar1 = true;
    this_01 = this_00;
  }
  param_1->_pad_0x0_0 = (int)in_stack_00000008;
  param_1->_pad_0x0_0 = (int)this_00;
  if (this_00 != (SpacecraftComponent *)0x0) {
    ReferenceController__AddWeakReference((ReferenceController *)this_00);
  }
  if ((this_01 != (SpacecraftComponent *)0x0) && (bVar1)) {
    ReferenceController__ReleaseWeakReference((ReferenceController *)this_01);
  }
  return param_1;
}


//==== 000059b880 0059b880_OnDamage ====
// decompiled by BatchDecomp @ 0059b880 name=OnDamage conv=__thiscall body=383

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual struct DamagerContainer __thiscall CrewCompartment__OnDamage(struct
   util::PhysicalState<struct util::Vec3<double> >,struct util::Quaternion<double>,struct
   util::PhysicalState<struct util::Vec3<double> >,struct DamagerContainer,struct CompartmentPiece
   *,int,double) */

DamagerContainer * __thiscall
CrewCompartment__OnDamage(CrewCompartment *this,DamagerContainer *__return_storage_ptr__,undefined4 param_3,
          undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,
          undefined4 param_8,undefined4 param_9,undefined4 param_10,undefined4 param_11,
          undefined4 param_12,undefined4 param_13,undefined4 param_14,undefined4 param_15,
          undefined4 param_16,undefined4 param_17,undefined4 param_18,undefined4 param_19,
          undefined4 param_20,undefined4 param_21,undefined4 param_22,undefined4 param_23,
          undefined4 param_24,undefined4 param_25,undefined4 param_26,undefined4 param_27,
          undefined4 param_28,undefined4 param_29,undefined4 param_30,undefined4 param_31,
          undefined4 param_32,undefined4 param_33,undefined4 param_34,undefined8 param_35,
          undefined8 param_36,undefined8 param_37,undefined8 param_38,undefined1 param_39)

{
  char cVar1;
  
  ModuleCompartment__OnDamage((ModuleCompartment *)this,__return_storage_ptr__,param_3,param_4,param_5,param_6,
             param_7,param_8,param_9,param_10,param_11,param_12,param_13,param_14,param_15,param_16,
             param_17,param_18,param_19,param_20,param_21,param_22,param_23,param_24,param_25,
             param_26,param_27,param_28,param_29,param_30,param_31,param_32,param_33,param_34,
             param_35,param_36,param_37,param_38,param_39);
  cVar1 = (**(code **)(*(int *)this + 0x1c))();
  if ((cVar1 != '\0') && (this->CrewIsAlive != false)) {
    this->CrewIsAlive = false;
    SendCrewKilledMessage(this,false);
    return __return_storage_ptr__;
  }
  this->AudioImpact = true;
  return __return_storage_ptr__;
}


//==== 000059f0e0 0059f0e0_FUN_0059f0e0 ====
Vec3_L_double_G_ * __thiscall FUN_0059f0e0(int *param_1,Vec3_L_double_G_ *param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,undefined8 param_7);

// decompiled by BatchDecomp @ 0059f0e0 name=FUN_0059f0e0 conv=unknown body=154

Vec3_L_double_G_ * __thiscall
FUN_0059f0e0(int *param_1,Vec3_L_double_G_ *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  double *pdVar1;
  Quaternion_L_double_G_ QVar2;
  Quaternion_L_double_G_ QVar3;
  Vec3_L_double_G_ VVar4;
  Vec3_L_double_G_ VVar5;
  Vec3_L_double_G_ *pVVar6;
  undefined4 unaff_EDI;
  double dVar7;
  double dVar8;
  Vec3_L_double_G_ local_1c;
  
  pdVar1 = (double *)param_1[2];
  ((slice_view *)&QVar2.W)->_4_4_ = param_3;
  memcpy((void *)((slice_view *)&QVar2)->raw + 0, (const void *)(param_1[1] + 4), 28);
  ((slice_view *)&VVar4.X)->_4_4_ = param_5;
  ((slice_view *)&VVar4.X)->_0_4_ = param_4;
  ((slice_view *)&VVar4.Y)->_0_4_ = param_6;
  ((slice_view *)&VVar4)->_12_8_ = param_7;
  ((slice_view *)&VVar4.Z)->_4_4_ = unaff_EDI;
  pVVar6 = util__FUN_007caeb0(&local_1c,QVar2,VVar4);
  dVar7 = pdVar1[1] + pVVar6->Y;
  dVar8 = *pdVar1 + pVVar6->X;
  ((slice_view *)&QVar3.W)->_4_4_ = *(undefined4 *)&dVar8;
  memcpy((void *)((slice_view *)&QVar3)->raw + 0, (const void *)(*param_1 + 4), 28);
  ((slice_view *)&VVar5.X)->_4_4_ = *(undefined4 *)&dVar7;
  ((slice_view *)&VVar5.X)->_0_4_ = (int)((ulonglong)dVar8 >> 0x20);
  ((slice_view *)&VVar5.Y)->_0_4_ = (int)((ulonglong)dVar7 >> 0x20);
  ((slice_view *)&VVar5)->_12_8_ = pdVar1[2] + pVVar6->Z;
  ((slice_view *)&VVar5.Z)->_4_4_ = unaff_EDI;
util__FUN_007caeb0(param_2,QVar3,VVar5);
  return param_2;
}


//==== 000059f180 0059f180_FUN_0059f180 ====
void __thiscall FUN_0059f180(int *param_1,Vec3_L_double_G_ *param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,double param_7,double param_8,double param_9, double param_10,char param_11);

// decompiled by BatchDecomp @ 0059f180 name=FUN_0059f180 conv=unknown body=329

void __thiscall
FUN_0059f180(int *param_1,Vec3_L_double_G_ *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,double param_7,double param_8,double param_9,
            double param_10,char param_11)

{
  undefined4 stack0xfffffffc;
  double *pdVar1;
  Quaternion_L_double_G_ QVar2;
  Quaternion_L_double_G_ QVar3;
  Quaternion_L_double_G_ QVar4;
  Vec3_L_double_G_ VVar5;
  Vec3_L_double_G_ VVar6;
  Vec3_L_double_G_ VVar7;
  Vec3_L_double_G_ *pVVar8;
  undefined4 unaff_EDI;
  double dVar9;
  double dVar10;
  Vec3_L_double_G_ local_38;
  undefined8 local_20;
  undefined8 uStack_18;
  double local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (param_11 == '\0') {
    local_20 = (double)CONCAT44(param_4,param_3);
    uStack_18 = (double)CONCAT44(param_6,param_5);
    local_10 = param_7;
  }
  else {
    dVar9 = (double)CONCAT44(param_6,param_5) - param_9;
    dVar10 = (double)CONCAT44(param_4,param_3) - param_8;
    ((slice_view *)&QVar2.W)->_4_4_ = *(undefined4 *)&dVar10;
    memcpy((void *)((slice_view *)&QVar2)->raw + 0, (const void *)(*param_1 + 4), 28);
    ((slice_view *)&VVar5.X)->_4_4_ = *(undefined4 *)&dVar9;
    ((slice_view *)&VVar5.X)->_0_4_ = (int)((ulonglong)dVar10 >> 0x20);
    ((slice_view *)&VVar5.Y)->_0_4_ = (int)((ulonglong)dVar9 >> 0x20);
    ((slice_view *)&VVar5)->_12_8_ = param_7 - param_10;
    ((slice_view *)&VVar5.Z)->_4_4_ = unaff_EDI;
    pVVar8 = util__FUN_007caeb0(&local_38,QVar2,VVar5);
    local_20 = pVVar8->X + param_8;
    uStack_18 = pVVar8->Y + param_9;
    local_10 = pVVar8->Z + param_10;
  }
  pdVar1 = (double *)param_1[3];
  ((slice_view *)&QVar3.W)->_4_4_ = (undefined4)local_20;
  memcpy((void *)((slice_view *)&QVar3)->raw + 0, (const void *)(param_1[2] + 4), 28);
  ((slice_view *)&VVar6.X)->_4_4_ = (undefined4)uStack_18;
  ((slice_view *)&VVar6.X)->_0_4_ = ((slice_view *)&local_20)->_4_4_;
  ((slice_view *)&VVar6.Y)->_0_4_ = ((slice_view *)&uStack_18)->_4_4_;
  ((slice_view *)&VVar6)->_12_8_ = local_10;
  ((slice_view *)&VVar6.Z)->_4_4_ = unaff_EDI;
  pVVar8 = util__FUN_007caeb0(&local_38,QVar3,VVar6);
  dVar9 = pdVar1[1] + pVVar8->Y;
  dVar10 = *pdVar1 + pVVar8->X;
  ((slice_view *)&QVar4.W)->_4_4_ = *(undefined4 *)&dVar10;
  memcpy((void *)((slice_view *)&QVar4)->raw + 0, (const void *)(param_1[1] + 4), 28);
  ((slice_view *)&VVar7.X)->_4_4_ = *(undefined4 *)&dVar9;
  ((slice_view *)&VVar7.X)->_0_4_ = (int)((ulonglong)dVar10 >> 0x20);
  ((slice_view *)&VVar7.Y)->_0_4_ = (int)((ulonglong)dVar9 >> 0x20);
  ((slice_view *)&VVar7)->_12_8_ = pdVar1[2] + pVVar8->Z;
  ((slice_view *)&VVar7.Z)->_4_4_ = unaff_EDI;
util__FUN_007caeb0(param_2,QVar4,VVar7);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00005a1c10 005a1c10_RunRadiatorCooling ====
extern undefined4 FUN_0059e5f0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 005a1c10 name=RunRadiatorCooling conv=__thiscall body=252

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall ModuleCompartment__RunRadiatorCooling(double) */

void __thiscall ModuleCompartment__RunRadiatorCooling(ModuleCompartment *this,double param_1)

{
  undefined4 stack0xfffffffc;
  bool bVar1;
  int iVar2;
  int *piVar3;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_30[8];
  double local_28;
  undefined4 *local_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  uint local_10;
  undefined1 local_c[4];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (/*0000000000000000*/0.0 < *(double *)&(this->DamageTextures).Size) {
    local_10 = local_10 & 0xffffff00;
    local_c[0] = 0;
    local_20 = (undefined4 *)0x0;
    uStack_1c = 0;
    iStack_18 = 0;
    uStack_14 = 0;
    FUN_0059d050(local_30,&this->TargetingCompartments,local_10);
    FUN_0059e5f0(&local_20,local_30,local_c);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_30);
    if (0 < iStack_18) {
      local_10 = 0;
      local_28 = *(double *)&(this->DamageTextures).Size / (double)iStack_18;
      iVar2 = (*(code *)local_20[3])();
      if ((int)local_10 < iVar2) {
        do {
          piVar3 = (int *)(*(code *)*local_20)(&local_10);
          if (((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) &&
             (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]),
             !bVar1)) {
            *piVar3 = 0;
          }
          *(double *)(*(int *)(uintptr_t)piVar3 + 0x60) = *(double *)(*(int *)(uintptr_t)piVar3 + 0x60) + local_28;
          local_10 = local_10 + 1;
          iVar2 = (*(code *)local_20[3])();
        } while ((int)local_10 < iVar2);
      }
      (this->DamageTextures).Size = 0;
      (this->DamageTextures).Capacity = 0;
    }
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_20);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00005afe80 005afe80_GetVoltageTitle ====
// decompiled by BatchDecomp @ 005afe80 name=GetVoltageTitle conv=__thiscall body=306

/* public: class util::Str<char> __thiscall
   MagnetoplasmadynamicThrusterModule__GetVoltageTitle(void)const  */

Str_L_char_G_ * __thiscall
MagnetoplasmadynamicThrusterModule__GetVoltageTitle(MagnetoplasmadynamicThrusterModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xffffffa4;
  Str_L_char_G_ SVar1;
  LocStr *this_00;
  Str_L_char_G_ *pSVar2;
  int unaff_ESI;
  double dVar3;
  char *in_stack_ffffffa4;
  int iVar4;
  char *pcVar5;
  void *local_4c[3];
  void *local_40;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_34,"GetTotalVoltage_V()");
  pcVar5 = "MPDThrusterChart Title";
  iVar4 = 0x5afea3;
  util__Str_char___Str_char__o5(&local_1c,"MPDThrusterChart Title");
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffffa4,&local_34);
  dVar3 = GetTotalVoltage_V(this);
  SVar1.Capacity = (int)pcVar5;
  SVar1.Data = (char *)iVar4;
  SVar1.Length = unaff_ESI;
  Print(&local_28,(double)CONCAT44(in_stack_ffffffa4,(int)((ulonglong)dVar3 >> 0x20)),SVar1);
  local_10.Data = (char *)0x0;
  local_10.Capacity = 0;
  local_10.Length = 0;
  this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)local_4c,&local_1c,&local_10);
  pSVar2 = util__LocStr__operator__o3(this_00);
  if (pSVar2->Capacity < 1) {
    pcVar5 = "";
  }
  else {
    pcVar5 = pSVar2->Data;
  }
  util__Printf(__return_storage_ptr__,pcVar5);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_40 = (void *)0x0;
  }
  if (local_4c[0] != (void *)0x0) {
    operator_delete__(local_4c[0]);
    local_4c[0] = (void *)0x0;
  }
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
    local_10.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    operator_delete__(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_1c.Data != (char *)0x0) {
    operator_delete__(local_1c.Data);
    local_1c.Data = (char *)0x0;
  }
  if (local_34.Data != (char *)0x0) {
    operator_delete__(local_34.Data);
  }
  return __return_storage_ptr__;
}


//==== 00005b32b0 005b32b0_GetGimbalLocation_m ====
// decompiled by BatchDecomp @ 005b32b0 name=GetGimbalLocation_m conv=__thiscall body=187

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct Vec3_L_double_G_ __thiscall EngineCompartment__GetGimbalLocation_m(struct
   util::Quaternion<double>)const  */

Vec3_L_double_G_ * __thiscall
EngineCompartment__GetGimbalLocation_m(EngineCompartment *this,Vec3_L_double_G_ *__return_storage_ptr__,Quaternion_L_double_G_ param_1)

{
  Quaternion_L_double_G_ QVar1;
  Quaternion_L_double_G_ QVar2;
  Vec3_L_double_G_ VVar3;
  Vec3_L_double_G_ VVar4;
  Vec3_L_double_G_ *pVVar5;
  Quaternion_L_double_G_ *pQVar6;
  Vec3_L_double_G_ *pVVar7;
  undefined4 unaff_EDI;
  double dVar8;
  double dVar9;
  double dVar10;
  Quaternion_L_double_G_ local_6c;
  Vec3_L_double_G_ local_4c;
  Vec3_L_double_G_ local_34;
  Vec3_L_double_G_ local_1c;
  
  pVVar5 = EngineModule__GetGimbalCenter_m((EngineModule *)this->_pad_0x0_0,&local_1c);
  pQVar6 = ModuleCompartment__GetOrientation((ModuleCompartment *)this,&local_6c);
  ((slice_view *)&QVar1.W)->_4_4_ = *(undefined4 *)&pVVar5->X;
  memcpy((void *)((slice_view *)&QVar1)->raw + 0, (const void *)((int)&pQVar6->X + 4), 28);
  ((slice_view *)&VVar3.Z)->_0_4_ = (int)((ulonglong)pVVar5->Z >> 0x20);
  memcpy((void *)((slice_view *)&VVar3)->raw + 0, (const void *)((int)&pVVar5->X + 4), 16);
  ((slice_view *)&VVar3.Z)->_4_4_ = unaff_EDI;
  pVVar5 = util__FUN_007caeb0(&local_34,QVar1,VVar3);
  pVVar7 = ModuleCompartment__GetTrueOffset_m((ModuleCompartment *)this,&local_4c);
  dVar8 = pVVar5->Y + pVVar7->Y;
  dVar10 = pVVar5->X + pVVar7->X;
  dVar9 = pVVar5->Z + pVVar7->Z;
  ((slice_view *)&QVar2.W)->_4_4_ = *(undefined4 *)&dVar10;
  memcpy((void *)((slice_view *)&QVar2)->raw + 0, (const void *)((slice_view *)&param_1)->raw + 0, 28);
  ((slice_view *)&VVar4.X)->_4_4_ = *(undefined4 *)&dVar8;
  ((slice_view *)&VVar4.X)->_0_4_ = (int)((ulonglong)dVar10 >> 0x20);
  ((slice_view *)&VVar4.Y)->_0_4_ = (int)((ulonglong)dVar8 >> 0x20);
  ((slice_view *)&VVar4.Y)->_4_4_ = *(undefined4 *)&dVar9;
  ((slice_view *)&VVar4.Z)->_0_4_ = (int)((ulonglong)dVar9 >> 0x20);
  ((slice_view *)&VVar4.Z)->_4_4_ = unaff_EDI;
util__FUN_007caeb0(__return_storage_ptr__,QVar2,VVar4);
  return __return_storage_ptr__;
}


//==== 00005b9100 005b9100_Instantiate ====
// decompiled by BatchDecomp @ 005b9100 name=Instantiate conv=__thiscall body=179

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::SharedPtr<struct ModuleCompartment> __thiscall
   PropellantTankModule__Instantiate(void)const  */

undefined4 * __thiscall PropellantTankModule__Instantiate(PropellantTankModule *this)

{
  bool bVar1;
  ModuleCompartment *this_00;
  ReferenceControllerRegistry *pRVar2;
  ReferenceController *this_01;
  undefined4 *in_stack_00000004;
  ModuleCompartment *pMVar3;
  
  this_00 = (ModuleCompartment *)operator_new(0x120);
  if (this_00 == (ModuleCompartment *)0x0) {
    this_00 = (ModuleCompartment *)0x0;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
  }
  else {
    ModuleCompartment__ModuleCompartment(this_00);
    this_00->_pad_0x0_0 = (int)((void *)(0x009274b8u));
    this_00[1]._pad_0x0_0 = 0;
    this_00[1]._pad_0x0_0 = 0;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 = 0;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions.Data = (pmf_6def6ee4 *)0x0
    ;
    *(undefined1 *)&this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions.Size = 1;
  }
  pMVar3 = this_00;
  pRVar2 = util__ReferenceControllerRegistry__Get();
  this_01 = util__ReferenceControllerRegistry__Register(pRVar2,pMVar3);
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
  }
  *in_stack_00000004 = this_00;
  in_stack_00000004[1] = this_01;
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
    bVar1 = util__ReferenceController__ReleaseStrongReference(this_01);
    if (bVar1) {
      if (this_00 != (ModuleCompartment *)0x0) {
        (**(code **)*(int *)this_00)(1);
      }
      pRVar2 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar2,this_00);
    }
  }
  return in_stack_00000004;
}


//==== 00005bbea0 005bbea0_GetDetachInfo ====
// decompiled by BatchDecomp @ 005bbea0 name=GetDetachInfo conv=__thiscall body=317

/* public: class util::Str<char> __thiscall PropellantTankModule__GetDetachInfo(void)const  */

Str_L_char_G_ * __thiscall
PropellantTankModule__GetDetachInfo(PropellantTankModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xffffff9c;
  Str_L_char_G_ SVar1;
  LocStr *this_00;
  Str_L_char_G_ *pSVar2;
  int unaff_ESI;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  void *local_54[3];
  void *local_48;
  Str_L_char_G_ local_3c;
  Str_L_char_G_ local_30;
  Str_L_char_G_ local_24;
  Str_L_char_G_ local_18;
  double local_c;
  
  pcVar3 = (char *)0x5bbeb7;
  local_c = GetEjectionSpeed_km__s(this,0.0);
  util__Str_char___Str_char__o5(&local_3c,"Speed_km__s");
  pcVar5 = "InfoBox PropellantEjection";
  iVar4 = 0x5bbed4;
  util__Str_char___Str_char__o5(&local_24,"InfoBox PropellantEjection");
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff9c,&local_3c);
  SVar1.Capacity = (int)pcVar5;
  SVar1.Data = (char *)iVar4;
  SVar1.Length = unaff_ESI;
  Print(&local_30,(double)CONCAT44(pcVar3,(int)((ulonglong)local_c >> 0x20)),SVar1);
  local_18.Data = (char *)0x0;
  local_18.Capacity = 0;
  local_18.Length = 0;
  this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)local_54,&local_24,&local_18);
  pSVar2 = util__LocStr__operator__o3(this_00);
  if (pSVar2->Capacity < 1) {
    pcVar3 = "";
  }
  else {
    pcVar3 = pSVar2->Data;
  }
  util__Printf(__return_storage_ptr__,pcVar3);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
    local_48 = (void *)0x0;
  }
  if (local_54[0] != (void *)0x0) {
    operator_delete__(local_54[0]);
    local_54[0] = (void *)0x0;
  }
  if (local_18.Data != (char *)0x0) {
    operator_delete__(local_18.Data);
    local_18.Data = (char *)0x0;
  }
  if (local_30.Data != (char *)0x0) {
    operator_delete__(local_30.Data);
    local_30.Data = (char *)0x0;
  }
  if (local_24.Data != (char *)0x0) {
    operator_delete__(local_24.Data);
    local_24.Data = (char *)0x0;
  }
  if (local_3c.Data != (char *)0x0) {
    operator_delete__(local_3c.Data);
  }
  return __return_storage_ptr__;
}


//==== 00005bc240 005bc240_GetMassRatio ====
// decompiled by BatchDecomp @ 005bc240 name=GetMassRatio conv=__thiscall body=285

/* public: class util::Str<char> __thiscall PropellantTankModule__GetMassRatio(void)const  */

Str_L_char_G_ * __thiscall
PropellantTankModule__GetMassRatio(PropellantTankModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  Str_L_char_G_ *pSVar1;
  LocStr *this_00;
  char *pcVar2;
  int unaff_ESI;
  char *pcVar3;
  float10 fVar4;
  void *local_48[3];
  void *local_3c;
  Str_L_char_G_ local_30;
  Str_L_char_G_ local_24;
  Str_L_char_G_ local_18;
  double local_c;
  
  fVar4 = (float10)(**(code **)(*(int *)this + 0x90))();
  local_c = (double)fVar4;
  fVar4 = (float10)(**(code **)(*(int *)this + 0x88))();
  local_c = (double)((float10)local_c / fVar4);
  util__Str_char___Str_char__o5(&local_30,"InfoBox PropellantMassRatio");
  pSVar1 = PrintSigFigures(&local_24,(double)CONCAT44(2,(int)((ulonglong)local_c >> 0x20)),unaff_ESI
                          );
  if (pSVar1->Capacity < 1) {
    pcVar3 = "";
  }
  else {
    pcVar3 = pSVar1->Data;
  }
  local_18.Data = (char *)0x0;
  local_18.Capacity = 0;
  local_18.Length = 0;
  this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)local_48,&local_30,&local_18);
  pSVar1 = util__LocStr__operator__o3(this_00);
  if (pSVar1->Capacity < 1) {
    pcVar2 = "";
  }
  else {
    pcVar2 = pSVar1->Data;
  }
  util__Printf(__return_storage_ptr__,pcVar2,pcVar3);
  if (local_3c != (void *)0x0) {
    operator_delete__(local_3c);
    local_3c = (void *)0x0;
  }
  if (local_48[0] != (void *)0x0) {
    operator_delete__(local_48[0]);
    local_48[0] = (void *)0x0;
  }
  if (local_18.Data != (char *)0x0) {
    operator_delete__(local_18.Data);
    local_18.Data = (char *)0x0;
  }
  if (local_24.Data != (char *)0x0) {
    operator_delete__(local_24.Data);
    local_24.Data = (char *)0x0;
  }
  if (local_30.Data != (char *)0x0) {
    operator_delete__(local_30.Data);
  }
  return __return_storage_ptr__;
}


//==== 00005bc370 005bc370_GetPropellantTanksMassLessThanFull_kg ====
// decompiled by BatchDecomp @ 005bc370 name=GetPropellantTanksMassLessThanFull_kg conv=__cdecl body=180

/* public: static double __cdecl
   PropellantTankCompartment__GetPropellantTanksMassLessThanFull_kg(class util::Darray<class
   util::WeakPtr<struct PropellantTankCompartment> > const &) */

double __cdecl
PropellantTankCompartment__GetPropellantTanksMassLessThanFull_kg(Darray_L_class_util__WeakPtr_L_struct_PropellantTankCompartment_G___G_ *param_1)

{
  undefined4 stack0xfffffffc;
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 extraout_ST0;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar2 = (**(code **)(*(int *)param_1 + 0xc))();
  if (local_c < iVar2) {
    do {
      puVar3 = (undefined4 *)(*(code *)**(undefined4 **)param_1)(&local_c);
      if (((ReferenceController *)puVar3[1] != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar3[1]),
         !bVar1)) {
        *puVar3 = 0;
      }
      if (((ReferenceController *)puVar3[1] != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar3[1]),
         !bVar1)) {
        *puVar3 = 0;
      }
      local_c = local_c + 1;
      iVar2 = (**(code **)(*(int *)param_1 + 0xc))();
    } while (local_c < iVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00005bc430 005bc430_GetPropellantTanksMass_kg ====
// decompiled by BatchDecomp @ 005bc430 name=GetPropellantTanksMass_kg conv=__cdecl body=146

/* public: static double __cdecl PropellantTankCompartment__GetPropellantTanksMass_kg(class
   util::Darray<class util::WeakPtr<struct PropellantTankCompartment> > const &) */

double __cdecl
PropellantTankCompartment__GetPropellantTanksMass_kg(Darray_L_class_util__WeakPtr_L_struct_PropellantTankCompartment_G___G_ *param_1)

{
  undefined4 stack0xfffffffc;
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 extraout_ST0;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar2 = (**(code **)(*(int *)param_1 + 0xc))();
  if (local_c < iVar2) {
    do {
      puVar3 = (undefined4 *)(*(code *)**(undefined4 **)param_1)(&local_c);
      if (((ReferenceController *)puVar3[1] != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar3[1]),
         !bVar1)) {
        *puVar3 = 0;
      }
      local_c = local_c + 1;
      iVar2 = (**(code **)(*(int *)param_1 + 0xc))();
    } while (local_c < iVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00005cab80 005cab80_FUN_005cab80 ====
void FUN_005cab80(int *param_1,int *param_2);

// decompiled by BatchDecomp @ 005cab80 name=FUN_005cab80 conv=unknown body=362

void FUN_005cab80(int *param_1,int *param_2)

{
  undefined4 stack0xfffffffc;
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  Maybe_L_int_G_ MVar6;
  bool local_24;
  TextureStack local_1c;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar2 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
  if (local_c < iVar2) {
    do {
      puVar3 = (undefined4 *)(**(code **)*param_1)(&local_c);
      MVar6 = GameModel__GetTextureID((GameModel *)*puVar3);
      if (*(char *)(MVar6.Data + 4) == '\0') {
LAB_005cac96:
        local_24 = false;
        uVar5 = 0xffffffff;
      }
      else {
        MVar6 = GameModel__GetTextureID((GameModel *)*puVar3);
        if ((char)((int *)MVar6.Data)[1] == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        iVar2 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
        if (iVar2 <= *(int *)MVar6.Data) goto LAB_005cac96;
        MVar6 = GameModel__GetTextureID((GameModel *)*puVar3);
        if (*(char *)(MVar6.Data + 4) == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        puVar4 = (undefined4 *)(**(code **)*param_2)(MVar6.Data);
        bVar1 = ArmorTextureHandler__IsGenerated((ArmorTextureHandler *)*puVar4);
        if (!bVar1) goto LAB_005cac96;
        local_24 = true;
        MVar6 = GameModel__GetTextureID((GameModel *)*puVar3);
        if (*(char *)(MVar6.Data + 4) == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        puVar4 = (undefined4 *)(**(code **)*param_2)(MVar6.Data);
        uVar5 = ArmorTextureHandler__GetTexture((ArmorTextureHandler *)*puVar4);
      }
      Graphics__TextureStack__TextureStack(&local_1c,uVar5,TwoDimensional,2);
      GameModel__Render((GameModel *)*puVar3,0.0,0.0,local_24);
      Graphics__TextureStack___TextureStack(&local_1c);
      local_c = local_c + 1;
      iVar2 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
    } while (local_c < iVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00005d6000 005d6000_Instantiate ====
// decompiled by BatchDecomp @ 005d6000 name=Instantiate conv=__thiscall body=178

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::SharedPtr<struct ModuleCompartment> __thiscall
   CargoModule__Instantiate(void)const  */

undefined4 * __thiscall CargoModule__Instantiate(CargoModule *this)

{
  bool bVar1;
  ModuleCompartment *this_00;
  ReferenceControllerRegistry *pRVar2;
  ReferenceController *this_01;
  undefined4 *in_stack_00000004;
  ModuleCompartment *pMVar3;
  
  this_00 = (ModuleCompartment *)operator_new(0x108);
  if (this_00 == (ModuleCompartment *)0x0) {
    this_00 = (ModuleCompartment *)0x0;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
  }
  else {
    memset(this_00,0,0x108);
    ModuleCompartment__ModuleCompartment(this_00);
    this_00->_pad_0x0_0 = (int)((void *)(0x00928d58u));
  }
  pMVar3 = this_00;
  pRVar2 = util__ReferenceControllerRegistry__Get();
  this_01 = util__ReferenceControllerRegistry__Register(pRVar2,pMVar3);
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
  }
  *in_stack_00000004 = this_00;
  in_stack_00000004[1] = this_01;
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
    bVar1 = util__ReferenceController__ReleaseStrongReference(this_01);
    if (bVar1) {
      if (this_00 != (ModuleCompartment *)0x0) {
        (**(code **)*(int *)this_00)(1);
      }
      pRVar2 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar2,this_00);
    }
  }
  return in_stack_00000004;
}


//==== 00005d6e60 005d6e60_Instantiate ====
// decompiled by BatchDecomp @ 005d6e60 name=Instantiate conv=__thiscall body=173

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::SharedPtr<struct ModuleCompartment> __thiscall
   RadiationShieldModule__Instantiate(void)const  */

undefined4 * __thiscall RadiationShieldModule__Instantiate(RadiationShieldModule *this)

{
  bool bVar1;
  ModuleCompartment *this_00;
  ReferenceControllerRegistry *pRVar2;
  ReferenceController *this_01;
  undefined4 *in_stack_00000004;
  ModuleCompartment *pMVar3;
  
  this_00 = (ModuleCompartment *)operator_new(0x110);
  if (this_00 == (ModuleCompartment *)0x0) {
    this_00 = (ModuleCompartment *)0x0;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
  }
  else {
    ModuleCompartment__ModuleCompartment(this_00);
    this_00->_pad_0x0_0 = (int)((void *)(0x00928dfcu));
    this_00[1]._pad_0x0_0 = 0;
    this_00[1]._pad_0x0_0 = 0;
  }
  pMVar3 = this_00;
  pRVar2 = util__ReferenceControllerRegistry__Get();
  this_01 = util__ReferenceControllerRegistry__Register(pRVar2,pMVar3);
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
  }
  *in_stack_00000004 = this_00;
  in_stack_00000004[1] = this_01;
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
    bVar1 = util__ReferenceController__ReleaseStrongReference(this_01);
    if (bVar1) {
      if (this_00 != (ModuleCompartment *)0x0) {
        (**(code **)*(int *)this_00)(1);
      }
      pRVar2 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar2,this_00);
    }
  }
  return in_stack_00000004;
}


//==== 00005d8470 005d8470_OnScarTexture ====
// decompiled by BatchDecomp @ 005d8470 name=OnScarTexture conv=__thiscall body=181

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall RadiationShieldCompartment__OnScarTexture(struct
   util::Quaternion<double>,struct CompartmentCollisionShell,int,struct Vec3_L_double_G_,double)
    */

void __thiscall
RadiationShieldCompartment__OnScarTexture(RadiationShieldCompartment *this,Quaternion_L_double_G_ param_1,
          CompartmentCollisionShell param_2,int param_3,Vec3_L_double_G_ param_4,double param_5)

{
  undefined4 stack0xfffffebc;
  Vec3_L_double_G_ VVar1;
  bool bVar2;
  int *piVar3;
  undefined4 unaff_ESI;
  CompartmentCollisionShell in_stack_fffffebc;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar4 = ((slice_view *)&param_4.Z)->_4_4_;
  uVar5 = ((slice_view *)&param_5)->_0_4_;
  CompartmentCollisionShell__CompartmentCollisionShell((CompartmentCollisionShell *)&stack0xfffffebc,&param_2);
  ((slice_view *)&VVar1.X)->_4_4_ = ((slice_view *)&param_4.X)->_4_4_;
  ((slice_view *)&VVar1.X)->_0_4_ = ((slice_view *)&param_4.X)->_0_4_;
  ((slice_view *)&VVar1.Y)->_0_4_ = ((slice_view *)&param_4.Y)->_0_4_;
  ((slice_view *)&VVar1)->_12_8_ = ((slice_view *)&param_4)->_12_8_;
  ((slice_view *)&VVar1.Z)->_4_4_ = uVar4;
  ModuleCompartment__OnScarTexture((ModuleCompartment *)this,param_1,in_stack_fffffebc,param_3,VVar1,
             (double)CONCAT44(unaff_ESI,uVar5));
  piVar3 = (int *)(**(code **)(*(int *)this + 0x20))();
  bVar2 = ArmorPlate__IsDestroyed((ArmorPlate *)(*(int *)(uintptr_t)piVar3 + 0x150));
  if (bVar2) {
    this->TotalPierceArea_m2 =
         (double)CONCAT44(((slice_view *)&param_5)->_0_4_,((slice_view *)&param_4.Z)->_4_4_) * /*400921fb54442d18*/3.141592653589793 *
         (double)CONCAT44(((slice_view *)&param_5)->_0_4_,((slice_view *)&param_4.Z)->_4_4_) + this->TotalPierceArea_m2;
  }
  if (param_2.Compartment.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_2.Compartment.Controller);
  }
  return;
}


//==== 00005de830 005de830_Instantiate ====
// decompiled by BatchDecomp @ 005de830 name=Instantiate conv=__thiscall body=309

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::SharedPtr<struct ModuleCompartment> __thiscall
   RadiatorModule__Instantiate(void)const  */

undefined4 * __thiscall RadiatorModule__Instantiate(RadiatorModule *this)

{
  double dVar1;
  bool bVar2;
  ModuleCompartment *this_00;
  ReferenceControllerRegistry *pRVar3;
  ReferenceController *this_01;
  undefined4 *in_stack_00000004;
  ModuleCompartment *pMVar4;
  
  this_00 = (ModuleCompartment *)operator_new(0x158);
  if (this_00 == (ModuleCompartment *)0x0) {
    this_00 = (ModuleCompartment *)0x0;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
  }
  else {
    ModuleCompartment__ModuleCompartment(this_00);
    this_00->_pad_0x0_0 = (int)((void *)(0x0092956cu));
    this_00[1]._pad_0x0_0 = 0;
    this_00[1]._pad_0x0_0 = 0;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 = 0;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions.Data = (pmf_6def6ee4 *)0x0
    ;
    this_00[1]._pad_0x0_0 = (int)((void *)(0x009194a4u));
    this_00[1]._pad_0x0_0 = 0;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 = 0;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions.Data = (pmf_6def6ee4 *)0x0
    ;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions.Size = 0;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    this_00[1].IsCompartmentDamagedFromPieceDamage_MemoizedValue.Data = false;
    this_00[1].GetBoundingSphereRadius_m_MemoizedValue.Data = 0.0;
    dVar1 = /*3ff0000000000000*/1.0;
    this_00[1].GetBoundingSphereRadius_m_MemoizedValue.IsValidData = false;
    this_00[1].HeatStored_J = dVar1;
    this_00[1].LostPower = true;
    this_00[1].Parent.Pointer = (Body *)((void *)(0x00929548u));
    this_00[1].Parent.Controller = (ReferenceController *)0x0;
    this_00[1].Blueprint = (Module *)0x0;
    *(undefined4 *)&this_00[1].Pieces = 0;
  }
  pMVar4 = this_00;
  pRVar3 = util__ReferenceControllerRegistry__Get();
  this_01 = util__ReferenceControllerRegistry__Register(pRVar3,pMVar4);
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
  }
  *in_stack_00000004 = this_00;
  in_stack_00000004[1] = this_01;
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
    bVar2 = util__ReferenceController__ReleaseStrongReference(this_01);
    if (bVar2) {
      if (this_00 != (ModuleCompartment *)0x0) {
        (**(code **)*(int *)this_00)(1);
      }
      pRVar3 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar3,this_00);
    }
  }
  return in_stack_00000004;
}


//==== 00005e2380 005e2380__scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 005e2380 name=`scalar_deleting_destructor' conv=__thiscall body=138

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall RadiatorCompartment::`scalar deleting destructor'(unsigned int)
    */

void * __thiscall
RadiatorCompartment___scalar_deleting_destructor_(RadiatorCompartment *this,uint param_1)

{
  ArmorPlate *pAVar1;
  pmf_44b0aa42 *ppVar2;
  
  pAVar1 = (this->RadiatorArmor).Data;
  (this->RadiatorArmor)._pad_0x0_0 = (int)((void *)(0x00929548u));
  if (pAVar1 != (ArmorPlate *)0x0) {
    operator_delete__(pAVar1);
  }
  (this->RadiatorArmor).Data = (ArmorPlate *)0x0;
  (this->RadiatorArmor)._pad_0x0_0 = (int)((void *)(0x00919488u));
  ppVar2 = (this->RadiatorCompartmentMemoizationHandlerInstance).ResetFunctions.Data;
  (this->RadiatorCompartmentMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 =
       (int)((void *)(0x009194a4u));
  if (ppVar2 != (pmf_44b0aa42 *)0x0) {
    operator_delete__(ppVar2);
  }
  (this->RadiatorCompartmentMemoizationHandlerInstance).ResetFunctions.Data = (pmf_44b0aa42 *)0x0;
  (this->RadiatorCompartmentMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 =
       (int)((void *)(0x00919488u));
  ModuleCompartment_ModuleCompartment__o2((ModuleCompartment *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,0x158);
  }
  return this;
}


//==== 00005e6210 005e6210_InitialSetup ====
// decompiled by BatchDecomp @ 005e6210 name=InitialSetup conv=__thiscall body=194

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall RadiatorCompartment__InitialSetup(class CraftBlueprint const
   *,struct ModulePlacer const &,class Module const *,int,int,struct Vec3_L_double_G_,struct
   util::Quaternion<double>) */

void __thiscall
RadiatorCompartment__InitialSetup(RadiatorCompartment *this,CraftBlueprint *param_1,ModulePlacer *param_2,Module *param_3,
          int param_4,int param_5,Vec3_L_double_G_ param_6,Quaternion_L_double_G_ param_7)

{
  Quaternion_L_double_G_ QVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_EDI;
  
  ((slice_view *)&QVar1.W)->_4_4_ = unaff_EDI;
  memcpy((void *)((slice_view *)&QVar1)->raw + 0, (const void *)((slice_view *)&param_7)->raw + 0, 28);
  ModuleCompartment__InitialSetup((ModuleCompartment *)this,param_1,param_2,param_3,param_4,param_5,param_6,QVar1);
  iVar3 = this->_pad_0x0_0;
  iVar4 = 0;
  if (0 < *(int *)(iVar3 + 0xf8)) {
    do {
      param_4 = ArmorPlate__ArmorPlate((ArmorPlate *)&param_3,*(double *)(iVar3 + 0xf0));
      iVar3 = (this->RadiatorArmor).Size;
      param_5 = iVar3 + 1;
      util__Darray_struct_ArmorPlate___SetSize((Darray_L_struct_ArmorPlate_G_ *)&this->RadiatorArmor,&param_5);
      bVar2 = util__Darray_struct_ArmorPlate___CheckSize((Darray_L_struct_ArmorPlate_G_ *)&this->RadiatorArmor,iVar3);
      if (bVar2) {
        (this->RadiatorArmor).Data[(this->RadiatorArmor).Size + -1].Thickness_m = *(float *)param_4;
      }
      iVar4 = iVar4 + 1;
      iVar3 = this->_pad_0x0_0;
    } while (iVar4 < *(int *)(iVar3 + 0xf8));
  }
  return;
}


//==== 00005e9280 005e9280_Instantiate ====
// decompiled by BatchDecomp @ 005e9280 name=Instantiate conv=__thiscall body=325

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::SharedPtr<struct ModuleCompartment> __thiscall
   RefuelerModule__Instantiate(void)const  */

undefined4 * __thiscall RefuelerModule__Instantiate(RefuelerModule *this)

{
  int iVar1;
  bool bVar2;
  ModuleCompartment *this_00;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ReferenceControllerRegistry *pRVar5;
  ReferenceController *pRVar6;
  int iVar7;
  undefined4 *in_stack_00000004;
  ModuleCompartment *pMVar8;
  
  this_00 = (ModuleCompartment *)operator_new(0x128);
  if (this_00 == (ModuleCompartment *)0x0) {
    this_00 = (ModuleCompartment *)0x0;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
  }
  else {
    ModuleCompartment__ModuleCompartment(this_00);
    this_00->_pad_0x0_0 = (int)((void *)(0x00929c54u));
    *(undefined2 *)&this_00[1]._pad_0x0_0 = 0;
    this_00[1]._pad_0x0_0 =
         (int)((void *)(0x0091db14u));
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 = 0;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions.Data = (pmf_6def6ee4 *)0x0
    ;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions.Size = 1;
    puVar3 = (undefined4 *)operator_new__(0xc);
    if (puVar3 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = 1;
      puVar4 = puVar3 + 1;
      *puVar4 = 0;
      puVar3[2] = 0;
    }
    iVar7 = 0;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 = (int)puVar4;
    if (0 < this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions.Size) {
      do {
        iVar1 = this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions._pad_0x0_0;
        pRVar6 = *(ReferenceController **)(iVar1 + 4 + iVar7 * 8);
        *(undefined4 *)(iVar1 + iVar7 * 8) = 0;
        *(undefined4 *)(iVar1 + 4 + iVar7 * 8) = 0;
        if (pRVar6 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar6);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions.Size);
    }
    *(undefined8 *)&this_00[1].IsCompartmentDamagedFromPieceDamage_MemoizedValue = 0;
  }
  pMVar8 = this_00;
  pRVar5 = util__ReferenceControllerRegistry__Get();
  pRVar6 = util__ReferenceControllerRegistry__Register(pRVar5,pMVar8);
  if (pRVar6 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(pRVar6);
  }
  *in_stack_00000004 = this_00;
  in_stack_00000004[1] = pRVar6;
  if (pRVar6 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(pRVar6);
    bVar2 = util__ReferenceController__ReleaseStrongReference(pRVar6);
    if (bVar2) {
      if (this_00 != (ModuleCompartment *)0x0) {
        (**(code **)*(int *)this_00)(1);
      }
      pRVar5 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar5,this_00);
    }
  }
  return in_stack_00000004;
}


//==== 00005f16d0 005f16d0_CompartmentPiece ====
// decompiled by BatchDecomp @ 005f16d0 name=CompartmentPiece conv=__thiscall body=128

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: __thiscall CompartmentPiece__CompartmentPiece(class Material const *,double,struct
   CompartmentCollisionShell,class util::Maybe<struct util::Vec3<double> >,bool,bool) */

CompartmentPiece * __thiscall
CompartmentPiece__CompartmentPiece(CompartmentPiece *this,Material *param_1,double param_3_00,undefined4 param_4,
          ReferenceController *param_3)

{
  ModuleCompartment *in_stack_00000128;
  ReferenceController *in_stack_0000012c;
  int in_stack_00000130;
  undefined4 in_stack_00000134;
  double in_stack_00000138;
  undefined1 in_stack_00000140;
  undefined1 in_stack_00000148;
  undefined1 in_stack_0000014c;
  
  this->StructuralComposition = param_1;
  (this->Shell).Compartment.Pointer = in_stack_00000128;
  (this->Shell).Compartment.Controller = in_stack_0000012c;
  (this->Shell).ID = in_stack_00000130;
  *(undefined4 *)((char *)&(this->Shell) + 0xc) = in_stack_00000134;
  *(undefined1 *)&(this->Shell).Pillar.Data.Tube_km.A.Y = in_stack_00000140;
  (this->Shell).Pillar.Data.Tube_km.A.X = in_stack_00000138;
  *(undefined1 *)&(this->Shell).Pillar.Data.Tube_km.A.Z = in_stack_00000148;
  *(undefined1 *)((int)&(this->Shell).Pillar.Data.Tube_km.A.Z + 1) = in_stack_0000014c;
  CompartmentCollisionShell__CompartmentCollisionShell((CompartmentCollisionShell *)&(this->Shell).Pillar.Data.Tube_km.B,
             (CompartmentCollisionShell *)&param_4);
  this[1].Shell.Pillar.Data.Tube_km.A.X = param_3_00;
  ArmorPlate__ArmorPlate((ArmorPlate *)&this[1].Shell.Pillar.Data.Tube_km.A.Y,param_3_00);
  *(CompartmentPiece **)&(this->Shell).Pillar.Data.Tube_km.B.Y = this;
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  return this;
}


//==== 00005f61a0 005f61a0_Instantiate ====
// decompiled by BatchDecomp @ 005f61a0 name=Instantiate conv=__thiscall body=187

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::SharedPtr<struct ModuleCompartment> __thiscall
   ExplosiveModule__Instantiate(void)const  */

undefined4 * __thiscall ExplosiveModule__Instantiate(ExplosiveModule *this)

{
  bool bVar1;
  ModuleCompartment *this_00;
  ReferenceControllerRegistry *pRVar2;
  ReferenceController *this_01;
  undefined4 *in_stack_00000004;
  ModuleCompartment *pMVar3;
  
  this_00 = (ModuleCompartment *)operator_new(0x120);
  if (this_00 == (ModuleCompartment *)0x0) {
    this_00 = (ModuleCompartment *)0x0;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
  }
  else {
    ModuleCompartment__ModuleCompartment(this_00);
    *(undefined1 *)&this_00[1]._pad_0x0_0 = 0;
    this_00->_pad_0x0_0 = (int)((void *)(0x0092a70cu));
    *(undefined1 *)&this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions._pad_0x0_0
         = 0;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions.Size = 0;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
  }
  pMVar3 = this_00;
  pRVar2 = util__ReferenceControllerRegistry__Get();
  this_01 = util__ReferenceControllerRegistry__Register(pRVar2,pMVar3);
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
  }
  *in_stack_00000004 = this_00;
  in_stack_00000004[1] = this_01;
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
    bVar1 = util__ReferenceController__ReleaseStrongReference(this_01);
    if (bVar1) {
      if (this_00 != (ModuleCompartment *)0x0) {
        (**(code **)*(int *)this_00)(1);
      }
      pRVar2 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar2,this_00);
    }
  }
  return in_stack_00000004;
}


//==== 00005f8630 005f8630_GetShrapnelInfo ====
// decompiled by BatchDecomp @ 005f8630 name=GetShrapnelInfo conv=__thiscall body=388

/* public: class util::Str<char> __thiscall ExplosiveModule__GetShrapnelInfo(void)const  */

Str_L_char_G_ * __thiscall
ExplosiveModule__GetShrapnelInfo(ExplosiveModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xffffff98;
  Str_L_char_G_ SVar1;
  int iVar2;
  LocStr *this_00;
  Str_L_char_G_ *pSVar3;
  char *pcVar4;
  int unaff_EDI;
  char *in_stack_ffffff98;
  int iVar5;
  int iVar6;
  void *local_54[3];
  void *local_48;
  Str_L_char_G_ local_3c;
  Str_L_char_G_ local_30;
  Str_L_char_G_ local_24;
  Str_L_char_G_ local_18;
  double local_c;
  
  util__Str_char___Str_char__o5(&local_3c,"GetAverageShrapnelMass_kg()");
  iVar2 = GetShrapnelCount(this);
  if (0 < iVar2) {
    GetShrapnelCount(this);
  }
  iVar5 = 0x5f866c;
  util__Str_char___Str_char__o5(&local_24,"InfoBox ExplosiveInfo");
  iVar6 = 0x5f8673;
  iVar2 = GetShrapnelCount(this);
  local_c = 0.0;
  if (0.0 < (double)iVar2) {
    iVar6 = 0x5f8690;
    iVar2 = GetShrapnelCount(this);
    local_c = (this->Detonator).HardRange_km / (double)iVar2;
  }
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff98,&local_3c);
  SVar1.Capacity = iVar6;
  SVar1.Data = (char *)iVar5;
  SVar1.Length = unaff_EDI;
  Print(&local_30,(double)CONCAT44(in_stack_ffffff98,(int)((ulonglong)local_c >> 0x20)),SVar1);
  local_18.Data = (char *)0x0;
  local_18.Capacity = 0;
  local_18.Length = 0;
  this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)local_54,&local_24,&local_18);
  pSVar3 = util__LocStr__operator__o3(this_00);
  if (pSVar3->Capacity < 1) {
    pcVar4 = "";
  }
  else {
    pcVar4 = pSVar3->Data;
  }
  util__Printf(__return_storage_ptr__,pcVar4);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
    local_48 = (void *)0x0;
  }
  if (local_54[0] != (void *)0x0) {
    operator_delete__(local_54[0]);
    local_54[0] = (void *)0x0;
  }
  if (local_18.Data != (char *)0x0) {
    operator_delete__(local_18.Data);
    local_18.Data = (char *)0x0;
  }
  if (local_30.Data != (char *)0x0) {
    operator_delete__(local_30.Data);
    local_30.Data = (char *)0x0;
  }
  if (local_24.Data != (char *)0x0) {
    operator_delete__(local_24.Data);
    local_24.Data = (char *)0x0;
  }
  if (local_3c.Data != (char *)0x0) {
    operator_delete__(local_3c.Data);
  }
  return __return_storage_ptr__;
}


//==== 00005fa870 005fa870_Instantiate ====
// decompiled by BatchDecomp @ 005fa870 name=Instantiate conv=__thiscall body=187

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::SharedPtr<struct ModuleCompartment> __thiscall
   FlareModule__Instantiate(void)const  */

undefined4 * __thiscall FlareModule__Instantiate(FlareModule *this)

{
  bool bVar1;
  ModuleCompartment *this_00;
  ReferenceControllerRegistry *pRVar2;
  ReferenceController *this_01;
  undefined4 *in_stack_00000004;
  ModuleCompartment *pMVar3;
  
  this_00 = (ModuleCompartment *)operator_new(0x120);
  if (this_00 == (ModuleCompartment *)0x0) {
    this_00 = (ModuleCompartment *)0x0;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
  }
  else {
    ModuleCompartment__ModuleCompartment(this_00);
    *(undefined1 *)&this_00[1]._pad_0x0_0 = 0;
    this_00->_pad_0x0_0 = (int)((void *)(0x0092ac50u));
    *(undefined1 *)&this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions._pad_0x0_0
         = 0;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions.Size = 0;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
  }
  pMVar3 = this_00;
  pRVar2 = util__ReferenceControllerRegistry__Get();
  this_01 = util__ReferenceControllerRegistry__Register(pRVar2,pMVar3);
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
  }
  *in_stack_00000004 = this_00;
  in_stack_00000004[1] = this_01;
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
    bVar1 = util__ReferenceController__ReleaseStrongReference(this_01);
    if (bVar1) {
      if (this_00 != (ModuleCompartment *)0x0) {
        (**(code **)*(int *)this_00)(1);
      }
      pRVar2 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar2,this_00);
    }
  }
  return in_stack_00000004;
}


//==== 00005fe960 005fe960_Instantiate ====
// decompiled by BatchDecomp @ 005fe960 name=Instantiate conv=__thiscall body=190

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::SharedPtr<struct ModuleCompartment> __thiscall
   NuclearPayloadModule__Instantiate(void)const  */

undefined4 * __thiscall NuclearPayloadModule__Instantiate(NuclearPayloadModule *this)

{
  bool bVar1;
  ModuleCompartment *this_00;
  ReferenceControllerRegistry *pRVar2;
  ReferenceController *this_01;
  undefined4 *in_stack_00000004;
  ModuleCompartment *pMVar3;
  
  this_00 = (ModuleCompartment *)operator_new(0x120);
  if (this_00 == (ModuleCompartment *)0x0) {
    this_00 = (ModuleCompartment *)0x0;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
  }
  else {
    ModuleCompartment__ModuleCompartment(this_00);
    *(undefined1 *)&this_00[1]._pad_0x0_0 = 0;
    this_00->_pad_0x0_0 = (int)((void *)(0x0092b044u));
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 = 0;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions.Size = 0;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
  }
  pMVar3 = this_00;
  pRVar2 = util__ReferenceControllerRegistry__Get();
  this_01 = util__ReferenceControllerRegistry__Register(pRVar2,pMVar3);
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
  }
  *in_stack_00000004 = this_00;
  in_stack_00000004[1] = this_01;
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
    bVar1 = util__ReferenceController__ReleaseStrongReference(this_01);
    if (bVar1) {
      if (this_00 != (ModuleCompartment *)0x0) {
        (**(code **)*(int *)this_00)(1);
      }
      pRVar2 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar2,this_00);
    }
  }
  return in_stack_00000004;
}


//==== 000060a7d0 0060a7d0_Instantiate ====
// decompiled by BatchDecomp @ 0060a7d0 name=Instantiate conv=__thiscall body=249

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::SharedPtr<struct ModuleCompartment> __thiscall
   BlackBoxPowerModule__Instantiate(void)const  */

undefined4 * __thiscall BlackBoxPowerModule__Instantiate(BlackBoxPowerModule *this)

{
  bool bVar1;
  ModuleCompartment *this_00;
  ReferenceControllerRegistry *pRVar2;
  ReferenceController *this_01;
  undefined4 *in_stack_00000004;
  ModuleCompartment *pMVar3;
  
  this_00 = (ModuleCompartment *)operator_new(0x140);
  if (this_00 == (ModuleCompartment *)0x0) {
    this_00 = (ModuleCompartment *)0x0;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
  }
  else {
    ModuleCompartment__ModuleCompartment(this_00);
    this_00[1]._pad_0x0_0 = 0;
    this_00[1]._pad_0x0_0 = 0;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 = 0;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions.Data = (pmf_6def6ee4 *)0x0
    ;
    this_00[1]._pad_0x0_0 =
         (int)((void *)(0x009234fcu));
    this_00[1]._pad_0x0_0 = 0;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 = 0;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions.Data = (pmf_6def6ee4 *)0x0
    ;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions.Size = 0;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    this_00[1].IsCompartmentDamagedFromPieceDamage_MemoizedValue.Data = false;
    this_00[1].GetBoundingSphereRadius_m_MemoizedValue.Data = 0.0;
    this_00[1].GetBoundingSphereRadius_m_MemoizedValue.IsValidData = false;
    *(undefined1 *)&this_00[1].HeatStored_J = 0;
    this_00->_pad_0x0_0 = (int)((void *)(0x0092b918u));
  }
  pMVar3 = this_00;
  pRVar2 = util__ReferenceControllerRegistry__Get();
  this_01 = util__ReferenceControllerRegistry__Register(pRVar2,pMVar3);
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
  }
  *in_stack_00000004 = this_00;
  in_stack_00000004[1] = this_01;
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
    bVar1 = util__ReferenceController__ReleaseStrongReference(this_01);
    if (bVar1) {
      if (this_00 != (ModuleCompartment *)0x0) {
        (**(code **)*(int *)this_00)(1);
      }
      pRVar2 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar2,this_00);
    }
  }
  return in_stack_00000004;
}


//==== 000060e640 0060e640_Instantiate ====
// decompiled by BatchDecomp @ 0060e640 name=Instantiate conv=__thiscall body=265

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::SharedPtr<struct ModuleCompartment> __thiscall
   TurboelectricFissionReactorModule__Instantiate(void)const  */

undefined4 * __thiscall
TurboelectricFissionReactorModule__Instantiate(TurboelectricFissionReactorModule *this)

{
  bool bVar1;
  ModuleCompartment *this_00;
  ReferenceControllerRegistry *pRVar2;
  ReferenceController *this_01;
  undefined4 *in_stack_00000004;
  ModuleCompartment *pMVar3;
  
  this_00 = (ModuleCompartment *)operator_new(0x140);
  if (this_00 == (ModuleCompartment *)0x0) {
    this_00 = (ModuleCompartment *)0x0;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
  }
  else {
    memset(this_00,0,0x140);
    ModuleCompartment__ModuleCompartment(this_00);
    this_00[1]._pad_0x0_0 = 0;
    this_00[1]._pad_0x0_0 = 0;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 = 0;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions.Data = (pmf_6def6ee4 *)0x0
    ;
    this_00[1]._pad_0x0_0 =
         (int)((void *)(0x009234fcu));
    this_00[1]._pad_0x0_0 = 0;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 = 0;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions.Data = (pmf_6def6ee4 *)0x0
    ;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions.Size = 0;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    this_00[1].IsCompartmentDamagedFromPieceDamage_MemoizedValue.Data = false;
    this_00[1].GetBoundingSphereRadius_m_MemoizedValue.Data = 0.0;
    this_00[1].GetBoundingSphereRadius_m_MemoizedValue.IsValidData = false;
    *(undefined1 *)&this_00[1].HeatStored_J = 0;
    this_00->_pad_0x0_0 = (int)((void *)(0x0092b918u));
  }
  pMVar3 = this_00;
  pRVar2 = util__ReferenceControllerRegistry__Get();
  this_01 = util__ReferenceControllerRegistry__Register(pRVar2,pMVar3);
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
  }
  *in_stack_00000004 = this_00;
  in_stack_00000004[1] = this_01;
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
    bVar1 = util__ReferenceController__ReleaseStrongReference(this_01);
    if (bVar1) {
      if (this_00 != (ModuleCompartment *)0x0) {
        (**(code **)*(int *)this_00)(1);
      }
      pRVar2 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar2,this_00);
    }
  }
  return in_stack_00000004;
}


//==== 0000614aa0 00614aa0_GetCoolantProperties ====
// decompiled by BatchDecomp @ 00614aa0 name=GetCoolantProperties conv=__thiscall body=318

/* public: virtual class util::Maybe<struct ModuleCoolantProperties> __thiscall
   TurboelectricFissionReactorModule__GetCoolantProperties(void)const  */

void __thiscall
TurboelectricFissionReactorModule__GetCoolantProperties(TurboelectricFissionReactorModule *this)

{
  int iVar1;
  CompressibleFlowPoint *pCVar2;
  undefined4 unaff_EDI;
  float10 fVar3;
  double dVar4;
  undefined4 *in_stack_00000004;
  CompressibleFlowPoint *pCVar5;
  undefined4 uVar6;
  CompressibleFlowPoint local_fc;
  CompressibleFlowPoint local_c4;
  CompressibleFlowPoint local_8c;
  CompressibleFlowPoint local_54;
  double local_1c;
  double local_14;
  double local_c;
  
  iVar1 = *(int *)&(this->NuclearReactor).ControlRodMass_kg;
  dVar4 = TurbopumpSubModule__GetTotalCrossSectionalArea_m2((TurbopumpSubModule *)&(this->Turbopump).CachedFluidDensity_kg__m3);
  pCVar5 = &local_54;
  uVar6 = *(undefined4 *)((char *)&dVar4 + 4);
  pCVar2 = GetTurbineExitFlowPoint(this,&local_c4);
  CompressibleFlowPoint__GetAreaChangedExitFlow(pCVar2,pCVar5,(double)CONCAT44(unaff_EDI,uVar6));
  local_c = local_54.Temperature_K - *(double *)&this[1]._pad_0x0_0;
  local_14 = TurbopumpSubModule__GetMassFlowRate_kg__s((TurbopumpSubModule *)&(this->Turbopump).CachedFluidDensity_kg__m3);
  local_c = *(double *)(iVar1 + 0x90) * local_c;
  local_14 = local_14 * local_c;
  fVar3 = (float10)(**(code **)(*(int *)this + 0x158))();
  local_c = (double)fVar3;
  local_1c = local_c;
  if (local_14 <= local_c) {
    local_1c = local_14;
  }
  dVar4 = TurbopumpSubModule__GetTotalCrossSectionalArea_m2((TurbopumpSubModule *)&(this->Turbopump).CachedFluidDensity_kg__m3);
  pCVar5 = &local_8c;
  uVar6 = *(undefined4 *)((char *)&dVar4 + 4);
  pCVar2 = GetTurbineExitFlowPoint(this,&local_fc);
  CompressibleFlowPoint__GetAreaChangedExitFlow(pCVar2,pCVar5,(double)CONCAT44(unaff_EDI,uVar6));
  local_14 = NuclearReactorSubModule__GetCoreCoolantVolume_m3((NuclearReactorSubModule *)
                        &(this->NuclearReactor).GetEmittedRadiation_MemoizedValue,false);
  dVar4 = TurbopumpSubModule__GetFluidVolume_m3((TurbopumpSubModule *)&(this->Turbopump).CachedFluidDensity_kg__m3);
  local_14 = dVar4 + local_14;
  dVar4 = TurbineSubModule__GetFluidVolume_m3((TurbineSubModule *)&(this->Turbine).StageCount);
  local_14 = dVar4 + local_14;
  uVar6 = *(undefined4 *)&(this->NuclearReactor).ControlRodMass_kg;
  dVar4 = TurbopumpSubModule__GetMassFlowRate_kg__s((TurbopumpSubModule *)&(this->Turbopump).CachedFluidDensity_kg__m3);
  *(double *)(in_stack_00000004 + 2) = local_14;
  *(double *)(in_stack_00000004 + 4) = dVar4;
  *(double *)(in_stack_00000004 + 6) = local_8c.Temperature_K;
  *in_stack_00000004 = uVar6;
  *(double *)(in_stack_00000004 + 8) = local_1c;
  *(undefined1 *)(in_stack_00000004 + 10) = 1;
  return;
}


//==== 00006180d0 006180d0_Instantiate ====
// decompiled by BatchDecomp @ 006180d0 name=Instantiate conv=__thiscall body=237

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::SharedPtr<struct ModuleCompartment> __thiscall
   AmmoModule__Instantiate(void)const  */

undefined4 * __thiscall AmmoModule__Instantiate(AmmoModule *this)

{
  bool bVar1;
  ModuleCompartment *this_00;
  ReferenceControllerRegistry *pRVar2;
  ReferenceController *this_01;
  undefined4 *in_stack_00000004;
  ModuleCompartment *pMVar3;
  
  this_00 = (ModuleCompartment *)operator_new(0x130);
  if (this_00 == (ModuleCompartment *)0x0) {
    this_00 = (ModuleCompartment *)0x0;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
  }
  else {
    ModuleCompartment__ModuleCompartment(this_00);
    this_00->_pad_0x0_0 = (int)((void *)(0x0092cab4u));
    this_00[1]._pad_0x0_0 = 0;
    this_00[1]._pad_0x0_0 = 0;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 = 0;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions.Data = (pmf_6def6ee4 *)0x0
    ;
    this_00[1]._pad_0x0_0 = (int)((void *)(0x009194a4u));
    this_00[1]._pad_0x0_0 = 0;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 = 0;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions.Data = (pmf_6def6ee4 *)0x0
    ;
    this_00[1].ModuleCompartmentMemoizationHandlerInstance.ResetFunctions.Size = 0;
    *(undefined8 *)&this_00[1].IsCompartmentDamagedFromPieceDamage_MemoizedValue = 0;
    *(undefined1 *)&this_00[1].GetBoundingSphereRadius_m_MemoizedValue.Data = 0;
  }
  pMVar3 = this_00;
  pRVar2 = util__ReferenceControllerRegistry__Get();
  this_01 = util__ReferenceControllerRegistry__Register(pRVar2,pMVar3);
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
  }
  *in_stack_00000004 = this_00;
  in_stack_00000004[1] = this_01;
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
    bVar1 = util__ReferenceController__ReleaseStrongReference(this_01);
    if (bVar1) {
      if (this_00 != (ModuleCompartment *)0x0) {
        (**(code **)*(int *)this_00)(1);
      }
      pRVar2 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar2,this_00);
    }
  }
  return in_stack_00000004;
}


//==== 000061a2b0 0061a2b0_Instantiate ====
// decompiled by BatchDecomp @ 0061a2b0 name=Instantiate conv=__thiscall body=162

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::SharedPtr<struct ModuleCompartment> __thiscall
   BlackBoxWeaponModule__Instantiate(void)const  */

undefined4 * __thiscall BlackBoxWeaponModule__Instantiate(BlackBoxWeaponModule *this)

{
  bool bVar1;
  WeaponCompartment *this_00;
  ReferenceControllerRegistry *pRVar2;
  ReferenceController *this_01;
  undefined4 *in_stack_00000004;
  WeaponCompartment *pWVar3;
  
  this_00 = (WeaponCompartment *)operator_new(0x200);
  if (this_00 == (WeaponCompartment *)0x0) {
    this_00 = (WeaponCompartment *)0x0;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
  }
  else {
    WeaponCompartment__WeaponCompartment(this_00);
    this_00->_pad_0x0_0 = (int)((void *)(0x0092d150u));
  }
  pWVar3 = this_00;
  pRVar2 = util__ReferenceControllerRegistry__Get();
  this_01 = util__ReferenceControllerRegistry__Register(pRVar2,pWVar3);
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
  }
  *in_stack_00000004 = this_00;
  in_stack_00000004[1] = this_01;
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
    bVar1 = util__ReferenceController__ReleaseStrongReference(this_01);
    if (bVar1) {
      if (this_00 != (WeaponCompartment *)0x0) {
        (**(code **)*(int *)this_00)(1);
      }
      pRVar2 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar2,this_00);
    }
  }
  return in_stack_00000004;
}


//==== 000061e100 0061e100_Instantiate ====
// decompiled by BatchDecomp @ 0061e100 name=Instantiate conv=__thiscall body=174

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::SharedPtr<struct ModuleCompartment> __thiscall
   BlastLauncherModule__Instantiate(void)const  */

undefined4 * __thiscall BlastLauncherModule__Instantiate(BlastLauncherModule *this)

{
  bool bVar1;
  WeaponCompartment *this_00;
  ReferenceControllerRegistry *pRVar2;
  ReferenceController *this_01;
  undefined4 *in_stack_00000004;
  WeaponCompartment *pWVar3;
  
  this_00 = (WeaponCompartment *)operator_new(0x208);
  if (this_00 == (WeaponCompartment *)0x0) {
    this_00 = (WeaponCompartment *)0x0;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
  }
  else {
    WeaponCompartment__WeaponCompartment(this_00);
    this_00->_pad_0x0_0 = (int)((void *)(0x0092d4d0u));
    LauncherSubCompartment__LauncherSubCompartment((LauncherSubCompartment *)&this_00[1]._pad_0x0_0,this_00);
  }
  pWVar3 = this_00;
  pRVar2 = util__ReferenceControllerRegistry__Get();
  this_01 = util__ReferenceControllerRegistry__Register(pRVar2,pWVar3);
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
  }
  *in_stack_00000004 = this_00;
  in_stack_00000004[1] = this_01;
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
    bVar1 = util__ReferenceController__ReleaseStrongReference(this_01);
    if (bVar1) {
      if (this_00 != (WeaponCompartment *)0x0) {
        (**(code **)*(int *)this_00)(1);
      }
      pRVar2 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar2,this_00);
    }
  }
  return in_stack_00000004;
}


//==== 0000622910 00622910_Instantiate ====
// decompiled by BatchDecomp @ 00622910 name=Instantiate conv=__thiscall body=174

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::SharedPtr<struct ModuleCompartment> __thiscall
   CarrierModule__Instantiate(void)const  */

undefined4 * __thiscall CarrierModule__Instantiate(CarrierModule *this)

{
  bool bVar1;
  WeaponCompartment *this_00;
  ReferenceControllerRegistry *pRVar2;
  ReferenceController *this_01;
  undefined4 *in_stack_00000004;
  WeaponCompartment *pWVar3;
  
  this_00 = (WeaponCompartment *)operator_new(0x208);
  if (this_00 == (WeaponCompartment *)0x0) {
    this_00 = (WeaponCompartment *)0x0;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
  }
  else {
    WeaponCompartment__WeaponCompartment(this_00);
    this_00->_pad_0x0_0 = (int)((void *)(0x0092d7e8u));
    LauncherSubCompartment__LauncherSubCompartment((LauncherSubCompartment *)&this_00[1]._pad_0x0_0,this_00);
  }
  pWVar3 = this_00;
  pRVar2 = util__ReferenceControllerRegistry__Get();
  this_01 = util__ReferenceControllerRegistry__Register(pRVar2,pWVar3);
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
  }
  *in_stack_00000004 = this_00;
  in_stack_00000004[1] = this_01;
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
    bVar1 = util__ReferenceController__ReleaseStrongReference(this_01);
    if (bVar1) {
      if (this_00 != (WeaponCompartment *)0x0) {
        (**(code **)*(int *)this_00)(1);
      }
      pRVar2 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar2,this_00);
    }
  }
  return in_stack_00000004;
}


//==== 00006282e0 006282e0_FireWeapon ====
// decompiled by BatchDecomp @ 006282e0 name=FireWeapon conv=__thiscall body=177

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall CoilgunCompartment__FireWeapon(class util::SharedPtr<class
   Body>,class util::WeakPtr<class Body>,double,struct util::PhysicalState<struct util::Vec3<double>
   >) */

void __thiscall
CoilgunCompartment__FireWeapon(CoilgunCompartment *this,int *param_2,ReferenceController *param_3,undefined4 param_4,
          ReferenceController *param_5)

{
  bool bVar1;
  ReferenceControllerRegistry *this_00;
  int *piVar2;
  ReferenceController *pRVar3;
  int iVar4;
  ReferenceController *this_01;
  ReferenceController *pRVar5;
  
  if (*(int *)(this->_pad_0x0_0 + 0x254) == 0) {
    pRVar5 = param_5;
    if (param_5 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(param_5);
    }
    iVar4 = this->_pad_0x0_0;
    this_01 = (ReferenceController *)this->_pad_0x0_0;
    if (this_01 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_01);
    }
    piVar2 = param_2;
    pRVar3 = param_3;
    if (param_3 != (ReferenceController *)0x0) {
      util__ReferenceController__AddStrongReference(param_3);
    }
    MassProjectileSubModule__LaunchBullet((MassProjectileSubModule *)(this->_pad_0x0_0 + 0x228),piVar2,pRVar3,iVar4,this_01,
               param_4,pRVar5);
  }
  if (param_3 != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__ReleaseStrongReference(param_3);
    if (bVar1) {
      if (param_2 != (int *)0x0) {
        (**(code **)(*param_2 + 4))(1);
      }
      this_00 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(this_00,param_2);
    }
  }
  if (param_5 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_5);
  }
  return;
}


//==== 000062cc60 0062cc60_Instantiate ====
// decompiled by BatchDecomp @ 0062cc60 name=Instantiate conv=__thiscall body=174

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::SharedPtr<struct ModuleCompartment> __thiscall
   CoilgunModule__Instantiate(void)const  */

undefined4 * __thiscall CoilgunModule__Instantiate(CoilgunModule *this)

{
  bool bVar1;
  WeaponCompartment *this_00;
  ReferenceControllerRegistry *pRVar2;
  ReferenceController *this_01;
  undefined4 *in_stack_00000004;
  WeaponCompartment *pWVar3;
  
  this_00 = (WeaponCompartment *)operator_new(0x208);
  if (this_00 == (WeaponCompartment *)0x0) {
    this_00 = (WeaponCompartment *)0x0;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
  }
  else {
    WeaponCompartment__WeaponCompartment(this_00);
    this_00->_pad_0x0_0 = (int)((void *)(0x0092dcbcu));
    LauncherSubCompartment__LauncherSubCompartment((LauncherSubCompartment *)&this_00[1]._pad_0x0_0,this_00);
  }
  pWVar3 = this_00;
  pRVar2 = util__ReferenceControllerRegistry__Get();
  this_01 = util__ReferenceControllerRegistry__Register(pRVar2,pWVar3);
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
  }
  *in_stack_00000004 = this_00;
  in_stack_00000004[1] = this_01;
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
    bVar1 = util__ReferenceController__ReleaseStrongReference(this_01);
    if (bVar1) {
      if (this_00 != (WeaponCompartment *)0x0) {
        (**(code **)*(int *)this_00)(1);
      }
      pRVar2 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar2,this_00);
    }
  }
  return in_stack_00000004;
}


//==== 000062cfa0 0062cfa0_OnScarTexture ====
// decompiled by BatchDecomp @ 0062cfa0 name=OnScarTexture conv=__thiscall body=254

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall CoilgunCompartment__OnScarTexture(struct
   util::Quaternion<double>,struct CompartmentCollisionShell,int,struct Vec3_L_double_G_,double)
    */

void __thiscall
CoilgunCompartment__OnScarTexture(CoilgunCompartment *this,Quaternion_L_double_G_ param_1,CompartmentCollisionShell param_2,
          int param_3,Vec3_L_double_G_ param_4,double param_5)

{
  int iVar1;
  Vec3_L_double_G_ *pVVar2;
  undefined4 *puVar3;
  undefined4 in_stack_00000140;
  undefined4 uVar4;
  ReferenceController *this_00;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  Vec3_L_double_G_ local_20;
  undefined4 local_8;
  
  if (param_2.Sphere.IsValidData != false) {
    uVar11 = CONCAT44(((slice_view *)&param_5)->_0_4_,((slice_view *)&param_4.Z)->_4_4_);
    local_8 = 0;
    pVVar2 = WeaponCompartment__GetRawCurrentDirection((WeaponCompartment *)this,&local_20);
    uVar5 = *(undefined4 *)&pVVar2->X;
    uVar6 = *(undefined4 *)((int)&pVVar2->X + 4);
    uVar7 = *(undefined4 *)&pVVar2->Y;
    uVar8 = *(undefined4 *)((int)&pVVar2->Y + 4);
    dVar9 = pVVar2->Z;
    puVar3 = (undefined4 *)
             (**(code **)*(int *)this)
                       (&local_8,((slice_view *)&param_1.X)->_0_4_,((slice_view *)&param_1.X)->_4_4_,((slice_view *)&param_1.Y)->_0_4_,((slice_view *)&param_1.Y)->_4_4_,
                        ((slice_view *)&param_1.Z)->_0_4_,((slice_view *)&param_1.Z)->_4_4_,((slice_view *)&param_1.W)->_0_4_,((slice_view *)&param_1.W)->_4_4_,uVar5,uVar6,
                        uVar7,uVar8,dVar9,((slice_view *)&param_2.Sphere.Data.Center_km.X)->_0_4_,
                        ((slice_view *)&param_2.Sphere.Data.Center_km.X)->_4_4_,((slice_view *)&param_2.Sphere.Data.Center_km.Y)->_0_4_,
                        ((slice_view *)&param_2.Sphere.Data.Center_km.Y)->_4_4_,param_2.Sphere.Data.Center_km.Z);
    uVar4 = *puVar3;
    this_00 = (ReferenceController *)puVar3[1];
    uVar10 = in_stack_00000140;
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_00);
      uVar10 = in_stack_00000140;
    }
    iVar1 = this->_pad_0x0_0;
    if (*(char *)(iVar1 + 0x3b8) == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    TurretSubModule__OnScarTexture((TurretSubModule *)(iVar1 + 0x2b8),uVar4,this_00,((slice_view *)&param_1.X)->_0_4_,((slice_view *)&param_1.X)->_4_4_,
               ((slice_view *)&param_1.Y)->_0_4_,((slice_view *)&param_1.Y)->_4_4_,((slice_view *)&param_1.Z)->_0_4_,((slice_view *)&param_1.Z)->_4_4_,((slice_view *)&param_1.W)->_0_4_,
               ((slice_view *)&param_1.W)->_4_4_,uVar5,uVar6,uVar7,uVar8,dVar9,((slice_view *)&param_2.Sphere.Data.Center_km.X)->_0_4_,
               ((slice_view *)&param_2.Sphere.Data.Center_km.X)->_4_4_,((slice_view *)&param_2.Sphere.Data.Center_km.Y)->_0_4_,
               ((slice_view *)&param_2.Sphere.Data.Center_km.Y)->_4_4_,param_2.Sphere.Data.Center_km.Z,uVar10,
               ((slice_view *)&param_4.X)->_0_4_,((slice_view *)&param_4.X)->_4_4_,((slice_view *)&param_4.Y)->_0_4_,((slice_view *)&param_4)->_12_8_,uVar11);
  }
  if (param_2.Compartment.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_2.Compartment.Controller);
  }
  return;
}


//==== 000062d100 0062d100_Render ====
// decompiled by BatchDecomp @ 0062d100 name=Render conv=__thiscall body=195

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall CoilgunCompartment__Render(void)const  */

void __thiscall CoilgunCompartment__Render(CoilgunCompartment *this)

{
  undefined4 stack0xfffffffc;
  CoilgunModule *this_00;
  Vec3_L_double_G_ VVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  Vec3_L_double_G_ *pVVar6;
  float10 fVar7;
  Vec3_L_double_G_ local_38;
  CoilgunCompartment *local_20;
  undefined8 local_1c;
  TextureStack local_18;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_20 = this;
  iVar3 = (**(code **)(*(int *)this + 0xc))();
  if (0 < iVar3) {
    local_1c = 0;
    puVar4 = (undefined4 *)(**(code **)*(int *)this)(&local_1c);
    bVar2 = ArmorTextureHandler__IsGenerated((ArmorTextureHandler *)*puVar4);
    if (bVar2) {
      ((slice_view *)&local_1c)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&local_1c)->_1_3_[0] | (((slice_view *)&local_1c)->_1_3_[1] << 8) | (((slice_view *)&local_1c)->_1_3_[2] << 16)) << 8));
      puVar4 = (undefined4 *)(**(code **)(*(int *)this + 0x1c))();
      uVar5 = ArmorTextureHandler__GetTexture((ArmorTextureHandler *)*puVar4);
      goto LAB_0062d160;
    }
  }
  local_1c = local_1c & 0xffffff00;
  uVar5 = 0xffffffff;
LAB_0062d160:
  Graphics__TextureStack__TextureStack(&local_18,uVar5,TwoDimensional,2);
  this_00 = (CoilgunModule *)this->_pad_0x0_0;
  iVar3 = this->_pad_0x0_0;
  pVVar6 = WeaponCompartment__GetRawCurrentDirection((WeaponCompartment *)this,&local_38);
  uVar5 = local_1c;
  fVar7 = (float10)(**(code **)(iVar3 + 0x28))();
  ((slice_view *)&VVar1.Z)->_4_4_ = (int)((ulonglong)pVVar6->Z >> 0x20);
  memcpy((void *)((slice_view *)&VVar1)->raw + 0, (const void *)pVVar6, 20);
  CoilgunModule__Render(this_00,VVar1,(double)fVar7,SUB41(uVar5,0));
  Graphics__TextureStack___TextureStack(&local_18);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000636590 00636590_Instantiate ====
// decompiled by BatchDecomp @ 00636590 name=Instantiate conv=__thiscall body=174

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::SharedPtr<struct ModuleCompartment> __thiscall
   ConventionalGunModule__Instantiate(void)const  */

undefined4 * __thiscall ConventionalGunModule__Instantiate(ConventionalGunModule *this)

{
  bool bVar1;
  WeaponCompartment *this_00;
  ReferenceControllerRegistry *pRVar2;
  ReferenceController *this_01;
  undefined4 *in_stack_00000004;
  WeaponCompartment *pWVar3;
  
  this_00 = (WeaponCompartment *)operator_new(0x208);
  if (this_00 == (WeaponCompartment *)0x0) {
    this_00 = (WeaponCompartment *)0x0;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
  }
  else {
    WeaponCompartment__WeaponCompartment(this_00);
    this_00->_pad_0x0_0 = (int)((void *)(0x0092e434u));
    LauncherSubCompartment__LauncherSubCompartment((LauncherSubCompartment *)&this_00[1]._pad_0x0_0,this_00);
  }
  pWVar3 = this_00;
  pRVar2 = util__ReferenceControllerRegistry__Get();
  this_01 = util__ReferenceControllerRegistry__Register(pRVar2,pWVar3);
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
  }
  *in_stack_00000004 = this_00;
  in_stack_00000004[1] = this_01;
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
    bVar1 = util__ReferenceController__ReleaseStrongReference(this_01);
    if (bVar1) {
      if (this_00 != (WeaponCompartment *)0x0) {
        (**(code **)*(int *)this_00)(1);
      }
      pRVar2 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar2,this_00);
    }
  }
  return in_stack_00000004;
}


//==== 00006368b0 006368b0_OnScarTexture ====
// decompiled by BatchDecomp @ 006368b0 name=OnScarTexture conv=__thiscall body=254

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall ConventionalGunCompartment__OnScarTexture(struct
   util::Quaternion<double>,struct CompartmentCollisionShell,int,struct Vec3_L_double_G_,double)
    */

void __thiscall
ConventionalGunCompartment__OnScarTexture(ConventionalGunCompartment *this,Quaternion_L_double_G_ param_1,
          CompartmentCollisionShell param_2,int param_3,Vec3_L_double_G_ param_4,double param_5)

{
  int iVar1;
  Vec3_L_double_G_ *pVVar2;
  undefined4 *puVar3;
  undefined4 in_stack_00000140;
  undefined4 uVar4;
  ReferenceController *this_00;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  Vec3_L_double_G_ local_20;
  undefined4 local_8;
  
  if (param_2.Sphere.IsValidData != false) {
    uVar11 = CONCAT44(((slice_view *)&param_5)->_0_4_,((slice_view *)&param_4.Z)->_4_4_);
    local_8 = 0;
    pVVar2 = WeaponCompartment__GetRawCurrentDirection((WeaponCompartment *)this,&local_20);
    uVar5 = *(undefined4 *)&pVVar2->X;
    uVar6 = *(undefined4 *)((int)&pVVar2->X + 4);
    uVar7 = *(undefined4 *)&pVVar2->Y;
    uVar8 = *(undefined4 *)((int)&pVVar2->Y + 4);
    dVar9 = pVVar2->Z;
    puVar3 = (undefined4 *)
             (**(code **)*(int *)this)
                       (&local_8,((slice_view *)&param_1.X)->_0_4_,((slice_view *)&param_1.X)->_4_4_,((slice_view *)&param_1.Y)->_0_4_,((slice_view *)&param_1.Y)->_4_4_,
                        ((slice_view *)&param_1.Z)->_0_4_,((slice_view *)&param_1.Z)->_4_4_,((slice_view *)&param_1.W)->_0_4_,((slice_view *)&param_1.W)->_4_4_,uVar5,uVar6,
                        uVar7,uVar8,dVar9,((slice_view *)&param_2.Sphere.Data.Center_km.X)->_0_4_,
                        ((slice_view *)&param_2.Sphere.Data.Center_km.X)->_4_4_,((slice_view *)&param_2.Sphere.Data.Center_km.Y)->_0_4_,
                        ((slice_view *)&param_2.Sphere.Data.Center_km.Y)->_4_4_,param_2.Sphere.Data.Center_km.Z);
    uVar4 = *puVar3;
    this_00 = (ReferenceController *)puVar3[1];
    uVar10 = in_stack_00000140;
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_00);
      uVar10 = in_stack_00000140;
    }
    iVar1 = this->_pad_0x0_0;
    if (*(char *)(iVar1 + 0x3e0) == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    TurretSubModule__OnScarTexture((TurretSubModule *)(iVar1 + 0x2e0),uVar4,this_00,((slice_view *)&param_1.X)->_0_4_,((slice_view *)&param_1.X)->_4_4_,
               ((slice_view *)&param_1.Y)->_0_4_,((slice_view *)&param_1.Y)->_4_4_,((slice_view *)&param_1.Z)->_0_4_,((slice_view *)&param_1.Z)->_4_4_,((slice_view *)&param_1.W)->_0_4_,
               ((slice_view *)&param_1.W)->_4_4_,uVar5,uVar6,uVar7,uVar8,dVar9,((slice_view *)&param_2.Sphere.Data.Center_km.X)->_0_4_,
               ((slice_view *)&param_2.Sphere.Data.Center_km.X)->_4_4_,((slice_view *)&param_2.Sphere.Data.Center_km.Y)->_0_4_,
               ((slice_view *)&param_2.Sphere.Data.Center_km.Y)->_4_4_,param_2.Sphere.Data.Center_km.Z,uVar10,
               ((slice_view *)&param_4.X)->_0_4_,((slice_view *)&param_4.X)->_4_4_,((slice_view *)&param_4.Y)->_0_4_,((slice_view *)&param_4)->_12_8_,uVar11);
  }
  if (param_2.Compartment.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_2.Compartment.Controller);
  }
  return;
}


//==== 000063c560 0063c560_Instantiate ====
// decompiled by BatchDecomp @ 0063c560 name=Instantiate conv=__thiscall body=182

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::SharedPtr<struct ModuleCompartment> __thiscall
   LaserModule__Instantiate(void)const  */

undefined4 * __thiscall LaserModule__Instantiate(LaserModule *this)

{
  bool bVar1;
  WeaponCompartment *this_00;
  ReferenceControllerRegistry *pRVar2;
  ReferenceController *this_01;
  undefined4 *in_stack_00000004;
  WeaponCompartment *pWVar3;
  
  this_00 = (WeaponCompartment *)operator_new(0x208);
  if (this_00 == (WeaponCompartment *)0x0) {
    this_00 = (WeaponCompartment *)0x0;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
  }
  else {
    WeaponCompartment__WeaponCompartment(this_00);
    this_00->_pad_0x0_0 = (int)((void *)(0x0092eea0u));
    this_00[1]._pad_0x0_0 = 0;
    this_00[1]._pad_0x0_0 = 0;
  }
  pWVar3 = this_00;
  pRVar2 = util__ReferenceControllerRegistry__Get();
  this_01 = util__ReferenceControllerRegistry__Register(pRVar2,pWVar3);
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
  }
  *in_stack_00000004 = this_00;
  in_stack_00000004[1] = this_01;
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
    bVar1 = util__ReferenceController__ReleaseStrongReference(this_01);
    if (bVar1) {
      if (this_00 != (WeaponCompartment *)0x0) {
        (**(code **)*(int *)this_00)(1);
      }
      pRVar2 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar2,this_00);
    }
  }
  return in_stack_00000004;
}


//==== 00006488c0 006488c0_OnDamage ====
// decompiled by BatchDecomp @ 006488c0 name=OnDamage conv=__thiscall body=353

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual struct DamagerContainer __thiscall LaserCompartment__OnDamage(struct
   util::PhysicalState<struct util::Vec3<double> >,struct util::Quaternion<double>,struct
   util::PhysicalState<struct util::Vec3<double> >,struct DamagerContainer,struct CompartmentPiece
   *,int,double) */

DamagerContainer * __thiscall
LaserCompartment__OnDamage(LaserCompartment *this,DamagerContainer *__return_storage_ptr__,undefined4 param_3,
          undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,
          undefined4 param_8,undefined4 param_9,undefined4 param_10,undefined4 param_11,
          undefined4 param_12,undefined4 param_13,undefined4 param_14,undefined4 param_15,
          undefined4 param_16,undefined4 param_17,undefined4 param_18,undefined4 param_19,
          undefined4 param_20,undefined4 param_21,undefined4 param_22,undefined4 param_23,
          undefined4 param_24,undefined4 param_25,undefined4 param_26,undefined4 param_27,
          undefined4 param_28,undefined4 param_29,undefined4 param_30,undefined4 param_31,
          undefined4 param_32,undefined4 param_33,undefined4 param_34,undefined8 param_35,
          undefined8 param_36,undefined8 param_37,undefined8 param_38,undefined1 param_39)

{
  ModuleCompartment__OnDamage((ModuleCompartment *)this,__return_storage_ptr__,param_3,param_4,param_5,param_6,
             param_7,param_8,param_9,param_10,param_11,param_12,param_13,param_14,param_15,param_16,
             param_17,param_18,param_19,param_20,param_21,param_22,param_23,param_24,param_25,
             param_26,param_27,param_28,param_29,param_30,param_31,param_32,param_33,param_34,
             param_35,param_36,param_37,param_38,param_39);
  return __return_storage_ptr__;
}


//==== 0000648a30 00648a30_OnScarTexture ====
// decompiled by BatchDecomp @ 00648a30 name=OnScarTexture conv=__thiscall body=261

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall LaserCompartment__OnScarTexture(struct
   util::Quaternion<double>,struct CompartmentCollisionShell,int,struct Vec3_L_double_G_,double)
    */

void __thiscall
LaserCompartment__OnScarTexture(LaserCompartment *this,Quaternion_L_double_G_ param_1,CompartmentCollisionShell param_2,
          int param_3,Vec3_L_double_G_ param_4,double param_5)

{
  int iVar1;
  Vec3_L_double_G_ *pVVar2;
  undefined4 *puVar3;
  undefined4 in_stack_00000140;
  undefined4 uVar4;
  ReferenceController *this_00;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  Vec3_L_double_G_ local_1c;
  
  if ((param_2.Sphere.IsValidData != false) &&
     (*(char *)(*(int *)&this->field_0x38 + 0x4c8) != '\0')) {
    uVar11 = CONCAT44(((slice_view *)&param_5)->_0_4_,((slice_view *)&param_4.Z)->_4_4_);
    pVVar2 = WeaponCompartment__GetRawCurrentDirection((WeaponCompartment *)this,&local_1c);
    uVar5 = *(undefined4 *)&pVVar2->X;
    uVar6 = *(undefined4 *)((int)&pVVar2->X + 4);
    uVar7 = *(undefined4 *)&pVVar2->Y;
    uVar8 = *(undefined4 *)((int)&pVVar2->Y + 4);
    dVar9 = pVVar2->Z;
    puVar3 = (undefined4 *)
             (**(code **)(*(int *)&this->field_0x4c + 0x20))
                       (((slice_view *)&param_1.X)->_0_4_,((slice_view *)&param_1.X)->_4_4_,((slice_view *)&param_1.Y)->_0_4_,((slice_view *)&param_1.Y)->_4_4_,
                        ((slice_view *)&param_1.Z)->_0_4_,((slice_view *)&param_1.Z)->_4_4_,((slice_view *)&param_1.W)->_0_4_,((slice_view *)&param_1.W)->_4_4_,uVar5,uVar6,
                        uVar7,uVar8,dVar9,((slice_view *)&param_2.Sphere.Data.Center_km.X)->_0_4_,
                        ((slice_view *)&param_2.Sphere.Data.Center_km.X)->_4_4_,((slice_view *)&param_2.Sphere.Data.Center_km.Y)->_0_4_,
                        ((slice_view *)&param_2.Sphere.Data.Center_km.Y)->_4_4_,param_2.Sphere.Data.Center_km.Z);
    uVar4 = *puVar3;
    this_00 = (ReferenceController *)puVar3[1];
    uVar10 = in_stack_00000140;
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_00);
      uVar10 = in_stack_00000140;
    }
    iVar1 = *(int *)&this->field_0x38;
    if (*(char *)(iVar1 + 0x4c8) == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    TurretSubModule__OnScarTexture((TurretSubModule *)(iVar1 + 0x3c8),uVar4,this_00,((slice_view *)&param_1.X)->_0_4_,((slice_view *)&param_1.X)->_4_4_,
               ((slice_view *)&param_1.Y)->_0_4_,((slice_view *)&param_1.Y)->_4_4_,((slice_view *)&param_1.Z)->_0_4_,((slice_view *)&param_1.Z)->_4_4_,((slice_view *)&param_1.W)->_0_4_,
               ((slice_view *)&param_1.W)->_4_4_,uVar5,uVar6,uVar7,uVar8,dVar9,((slice_view *)&param_2.Sphere.Data.Center_km.X)->_0_4_,
               ((slice_view *)&param_2.Sphere.Data.Center_km.X)->_4_4_,((slice_view *)&param_2.Sphere.Data.Center_km.Y)->_0_4_,
               ((slice_view *)&param_2.Sphere.Data.Center_km.Y)->_4_4_,param_2.Sphere.Data.Center_km.Z,uVar10,
               ((slice_view *)&param_4.X)->_0_4_,((slice_view *)&param_4.X)->_4_4_,((slice_view *)&param_4.Y)->_0_4_,((slice_view *)&param_4)->_12_8_,uVar11);
  }
  if (param_2.Compartment.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_2.Compartment.Controller);
  }
  return;
}


//==== 000064d8b0 0064d8b0_LaunchAndReturnBodies ====
// decompiled by BatchDecomp @ 0064d8b0 name=LaunchAndReturnBodies conv=__thiscall body=321

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Darray<class util::SharedPtr<class Body> > __thiscall
   LauncherSubCompartment__LaunchAndReturnBodies(int) */

int __thiscall
LauncherSubCompartment__LaunchAndReturnBodies(LauncherSubCompartment *this,int param_1)

{
  int iVar1;
  ReferenceController *this_00;
  bool bVar2;
  char cVar3;
  uint *puVar4;
  uint *puVar5;
  ReferenceControllerRegistry *this_01;
  uint uVar6;
  int iVar7;
  uint in_stack_00000008;
  int *piVar8;
  
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined ***)param_1 = ((void *)(0x0091d1bcu));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = in_stack_00000008;
  if (((int)in_stack_00000008 < 0) || (0x3fffffff < (int)in_stack_00000008)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)in_stack_00000008) {
    uVar6 = -(uint)((int)((ulonglong)in_stack_00000008 * 8 >> 0x20) != 0) |
            (uint)((ulonglong)in_stack_00000008 * 8);
    puVar4 = (uint *)operator_new__(-(uint)(0xfffffffb < uVar6) | uVar6 + 4);
    if (puVar4 == (uint *)0x0) {
      puVar4 = (uint *)0x0;
    }
    else {
      *puVar4 = in_stack_00000008;
      puVar4 = puVar4 + 1;
      puVar5 = puVar4;
      uVar6 = in_stack_00000008;
      if (in_stack_00000008 != 0) {
        do {
          *puVar5 = 0;
          puVar5[1] = 0;
          uVar6 = uVar6 - 1;
          puVar5 = puVar5 + 2;
        } while (uVar6 != 0);
      }
    }
    iVar7 = 0;
    *(uint **)(param_1 + 4) = puVar4;
    if (0 < *(int *)(param_1 + 0xc)) {
      do {
        iVar1 = *(int *)(param_1 + 4);
        this_00 = *(ReferenceController **)(iVar1 + 4 + iVar7 * 8);
        piVar8 = *(int **)(iVar1 + iVar7 * 8);
        *(undefined4 *)(iVar1 + iVar7 * 8) = 0;
        *(undefined4 *)(iVar1 + 4 + iVar7 * 8) = 0;
        if ((this_00 != (ReferenceController *)0x0) &&
           (bVar2 = util__ReferenceController__ReleaseStrongReference(this_00), bVar2)) {
          if (piVar8 != (int *)0x0) {
            (**(code **)(*piVar8 + 4))(1);
          }
          this_01 = util__ReferenceControllerRegistry__Get();
          util__ReferenceControllerRegistry__PointerWasDestroyed(this_01,piVar8);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(param_1 + 0xc));
    }
  }
  cVar3 = (**(code **)(*(int *)this->Parent + 0x18))();
  if (cVar3 == '\0') {
    Launch(this,in_stack_00000008);
    do {
      bVar2 = LaunchOnce(this,0.0,true,(Darray_L_class_util__SharedPtr_L_class_Body_G___G_ *)param_1);
    } while (bVar2);
  }
  return param_1;
}


//==== 0000655040 00655040_Instantiate ====
// decompiled by BatchDecomp @ 00655040 name=Instantiate conv=__thiscall body=174

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::SharedPtr<struct ModuleCompartment> __thiscall
   RailgunModule__Instantiate(void)const  */

undefined4 * __thiscall RailgunModule__Instantiate(RailgunModule *this)

{
  bool bVar1;
  WeaponCompartment *this_00;
  ReferenceControllerRegistry *pRVar2;
  ReferenceController *this_01;
  undefined4 *in_stack_00000004;
  WeaponCompartment *pWVar3;
  
  this_00 = (WeaponCompartment *)operator_new(0x208);
  if (this_00 == (WeaponCompartment *)0x0) {
    this_00 = (WeaponCompartment *)0x0;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
  }
  else {
    WeaponCompartment__WeaponCompartment(this_00);
    this_00->_pad_0x0_0 = (int)((void *)(0x0092fcc4u));
    LauncherSubCompartment__LauncherSubCompartment((LauncherSubCompartment *)&this_00[1]._pad_0x0_0,this_00);
  }
  pWVar3 = this_00;
  pRVar2 = util__ReferenceControllerRegistry__Get();
  this_01 = util__ReferenceControllerRegistry__Register(pRVar2,pWVar3);
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
  }
  *in_stack_00000004 = this_00;
  in_stack_00000004[1] = this_01;
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
    bVar1 = util__ReferenceController__ReleaseStrongReference(this_01);
    if (bVar1) {
      if (this_00 != (WeaponCompartment *)0x0) {
        (**(code **)*(int *)this_00)(1);
      }
      pRVar2 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar2,this_00);
    }
  }
  return in_stack_00000004;
}


//==== 0000655360 00655360_OnScarTexture ====
// decompiled by BatchDecomp @ 00655360 name=OnScarTexture conv=__thiscall body=254

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall RailgunCompartment__OnScarTexture(struct
   util::Quaternion<double>,struct CompartmentCollisionShell,int,struct Vec3_L_double_G_,double)
    */

void __thiscall
RailgunCompartment__OnScarTexture(RailgunCompartment *this,Quaternion_L_double_G_ param_1,CompartmentCollisionShell param_2,
          int param_3,Vec3_L_double_G_ param_4,double param_5)

{
  int iVar1;
  Vec3_L_double_G_ *pVVar2;
  undefined4 *puVar3;
  undefined4 in_stack_00000140;
  undefined4 uVar4;
  ReferenceController *this_00;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  Vec3_L_double_G_ local_20;
  undefined4 local_8;
  
  if (param_2.Sphere.IsValidData != false) {
    uVar11 = CONCAT44(((slice_view *)&param_5)->_0_4_,((slice_view *)&param_4.Z)->_4_4_);
    local_8 = 0;
    pVVar2 = WeaponCompartment__GetRawCurrentDirection((WeaponCompartment *)this,&local_20);
    uVar5 = *(undefined4 *)&pVVar2->X;
    uVar6 = *(undefined4 *)((int)&pVVar2->X + 4);
    uVar7 = *(undefined4 *)&pVVar2->Y;
    uVar8 = *(undefined4 *)((int)&pVVar2->Y + 4);
    dVar9 = pVVar2->Z;
    puVar3 = (undefined4 *)
             (**(code **)*(int *)this)
                       (&local_8,((slice_view *)&param_1.X)->_0_4_,((slice_view *)&param_1.X)->_4_4_,((slice_view *)&param_1.Y)->_0_4_,((slice_view *)&param_1.Y)->_4_4_,
                        ((slice_view *)&param_1.Z)->_0_4_,((slice_view *)&param_1.Z)->_4_4_,((slice_view *)&param_1.W)->_0_4_,((slice_view *)&param_1.W)->_4_4_,uVar5,uVar6,
                        uVar7,uVar8,dVar9,((slice_view *)&param_2.Sphere.Data.Center_km.X)->_0_4_,
                        ((slice_view *)&param_2.Sphere.Data.Center_km.X)->_4_4_,((slice_view *)&param_2.Sphere.Data.Center_km.Y)->_0_4_,
                        ((slice_view *)&param_2.Sphere.Data.Center_km.Y)->_4_4_,param_2.Sphere.Data.Center_km.Z);
    uVar4 = *puVar3;
    this_00 = (ReferenceController *)puVar3[1];
    uVar10 = in_stack_00000140;
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_00);
      uVar10 = in_stack_00000140;
    }
    iVar1 = this->_pad_0x0_0;
    if (*(char *)(iVar1 + 0x3c8) == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    TurretSubModule__OnScarTexture((TurretSubModule *)(iVar1 + 0x2c8),uVar4,this_00,((slice_view *)&param_1.X)->_0_4_,((slice_view *)&param_1.X)->_4_4_,
               ((slice_view *)&param_1.Y)->_0_4_,((slice_view *)&param_1.Y)->_4_4_,((slice_view *)&param_1.Z)->_0_4_,((slice_view *)&param_1.Z)->_4_4_,((slice_view *)&param_1.W)->_0_4_,
               ((slice_view *)&param_1.W)->_4_4_,uVar5,uVar6,uVar7,uVar8,dVar9,((slice_view *)&param_2.Sphere.Data.Center_km.X)->_0_4_,
               ((slice_view *)&param_2.Sphere.Data.Center_km.X)->_4_4_,((slice_view *)&param_2.Sphere.Data.Center_km.Y)->_0_4_,
               ((slice_view *)&param_2.Sphere.Data.Center_km.Y)->_4_4_,param_2.Sphere.Data.Center_km.Z,uVar10,
               ((slice_view *)&param_4.X)->_0_4_,((slice_view *)&param_4.X)->_4_4_,((slice_view *)&param_4.Y)->_0_4_,((slice_view *)&param_4)->_12_8_,uVar11);
  }
  if (param_2.Compartment.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_2.Compartment.Controller);
  }
  return;
}


//==== 0000658d20 00658d20_Instantiate ====
// decompiled by BatchDecomp @ 00658d20 name=Instantiate conv=__thiscall body=347

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::SharedPtr<struct ModuleCompartment> __thiscall
   StandaloneLaserMountModule__Instantiate(void)const  */

undefined4 * __thiscall StandaloneLaserMountModule__Instantiate(StandaloneLaserMountModule *this)

{
  int iVar1;
  bool bVar2;
  WeaponCompartment *this_00;
  undefined4 *puVar3;
  ReferenceControllerRegistry *pRVar4;
  ReferenceController *pRVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *in_stack_00000004;
  WeaponCompartment *pWVar8;
  
  this_00 = (WeaponCompartment *)operator_new(0x218);
  if (this_00 == (WeaponCompartment *)0x0) {
    this_00 = (WeaponCompartment *)0x0;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
  }
  else {
    WeaponCompartment__WeaponCompartment(this_00);
    this_00->_pad_0x0_0 = (int)((void *)(0x0093030cu));
    this_00[1]._pad_0x0_0 =
         (int)((void *)(0x0091db14u));
    this_00[1]._pad_0x0_0 = 0;
    this_00[1]._pad_0x0_0 = 0;
    this_00[1]._pad_0x0_0 = 5;
    puVar3 = (undefined4 *)operator_new__(0x2c);
    if (puVar3 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7 = puVar3 + 1;
      *puVar3 = 5;
      iVar6 = 5;
      puVar3 = puVar7;
      do {
        *puVar3 = 0;
        puVar3[1] = 0;
        iVar6 = iVar6 + -1;
        puVar3 = puVar3 + 2;
      } while (iVar6 != 0);
    }
    iVar6 = 0;
    this_00[1]._pad_0x0_0 = (int)puVar7;
    if (0 < this_00[1]._pad_0x0_0) {
      do {
        iVar1 = this_00[1]._pad_0x0_0;
        pRVar5 = *(ReferenceController **)(iVar1 + 4 + iVar6 * 8);
        *(undefined4 *)(iVar1 + iVar6 * 8) = 0;
        *(undefined4 *)(iVar1 + 4 + iVar6 * 8) = 0;
        if (pRVar5 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar5);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < this_00[1]._pad_0x0_0);
    }
    this_00[1]._pad_0x0_0 = 0;
    this_00[1]._pad_0x0_0 = 0;
  }
  pWVar8 = this_00;
  pRVar4 = util__ReferenceControllerRegistry__Get();
  pRVar5 = util__ReferenceControllerRegistry__Register(pRVar4,pWVar8);
  if (pRVar5 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(pRVar5);
  }
  *in_stack_00000004 = this_00;
  in_stack_00000004[1] = pRVar5;
  if (pRVar5 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(pRVar5);
    bVar2 = util__ReferenceController__ReleaseStrongReference(pRVar5);
    if (bVar2) {
      if (this_00 != (WeaponCompartment *)0x0) {
        (**(code **)*(int *)this_00)(1);
      }
      pRVar4 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar4,this_00);
    }
  }
  return in_stack_00000004;
}


//==== 000065c3f0 0065c3f0_OnDamage ====
// decompiled by BatchDecomp @ 0065c3f0 name=OnDamage conv=__thiscall body=353

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual struct DamagerContainer __thiscall
   StandaloneLaserMountCompartment__OnDamage(struct util::PhysicalState<struct util::Vec3<double>
   >,struct util::Quaternion<double>,struct util::PhysicalState<struct util::Vec3<double> >,struct
   DamagerContainer,struct CompartmentPiece *,int,double) */

DamagerContainer * __thiscall
StandaloneLaserMountCompartment__OnDamage(StandaloneLaserMountCompartment *this,DamagerContainer *__return_storage_ptr__,
          undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,
          undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,
          undefined4 param_11,undefined4 param_12,undefined4 param_13,undefined4 param_14,
          undefined4 param_15,undefined4 param_16,undefined4 param_17,undefined4 param_18,
          undefined4 param_19,undefined4 param_20,undefined4 param_21,undefined4 param_22,
          undefined4 param_23,undefined4 param_24,undefined4 param_25,undefined4 param_26,
          undefined4 param_27,undefined4 param_28,undefined4 param_29,undefined4 param_30,
          undefined4 param_31,undefined4 param_32,undefined4 param_33,undefined4 param_34,
          undefined8 param_35,undefined8 param_36,undefined8 param_37,undefined8 param_38,
          undefined1 param_39)

{
  ModuleCompartment__OnDamage((ModuleCompartment *)this,__return_storage_ptr__,param_3,param_4,param_5,param_6,
             param_7,param_8,param_9,param_10,param_11,param_12,param_13,param_14,param_15,param_16,
             param_17,param_18,param_19,param_20,param_21,param_22,param_23,param_24,param_25,
             param_26,param_27,param_28,param_29,param_30,param_31,param_32,param_33,param_34,
             param_35,param_36,param_37,param_38,param_39);
  return __return_storage_ptr__;
}


//==== 000065c560 0065c560_OnScarTexture ====
// decompiled by BatchDecomp @ 0065c560 name=OnScarTexture conv=__thiscall body=261

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall StandaloneLaserMountCompartment__OnScarTexture(struct
   util::Quaternion<double>,struct CompartmentCollisionShell,int,struct Vec3_L_double_G_,double)
    */

void __thiscall
StandaloneLaserMountCompartment__OnScarTexture(StandaloneLaserMountCompartment *this,Quaternion_L_double_G_ param_1,
          CompartmentCollisionShell param_2,int param_3,Vec3_L_double_G_ param_4,double param_5)

{
  int iVar1;
  Vec3_L_double_G_ *pVVar2;
  undefined4 *puVar3;
  undefined4 in_stack_00000140;
  undefined4 uVar4;
  ReferenceController *this_00;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  Vec3_L_double_G_ local_1c;
  
  if ((param_2.Sphere.IsValidData != false) && (*(char *)(this->_pad_0x0_0 + 0x1c0) != '\0')) {
    uVar11 = CONCAT44(((slice_view *)&param_5)->_0_4_,((slice_view *)&param_4.Z)->_4_4_);
    pVVar2 = WeaponCompartment__GetRawCurrentDirection((WeaponCompartment *)this,&local_1c);
    uVar5 = *(undefined4 *)&pVVar2->X;
    uVar6 = *(undefined4 *)((int)&pVVar2->X + 4);
    uVar7 = *(undefined4 *)&pVVar2->Y;
    uVar8 = *(undefined4 *)((int)&pVVar2->Y + 4);
    dVar9 = pVVar2->Z;
    puVar3 = (undefined4 *)
             (**(code **)(*(int *)this + 0x20))
                       (((slice_view *)&param_1.X)->_0_4_,((slice_view *)&param_1.X)->_4_4_,((slice_view *)&param_1.Y)->_0_4_,((slice_view *)&param_1.Y)->_4_4_,
                        ((slice_view *)&param_1.Z)->_0_4_,((slice_view *)&param_1.Z)->_4_4_,((slice_view *)&param_1.W)->_0_4_,((slice_view *)&param_1.W)->_4_4_,uVar5,uVar6,
                        uVar7,uVar8,dVar9,((slice_view *)&param_2.Sphere.Data.Center_km.X)->_0_4_,
                        ((slice_view *)&param_2.Sphere.Data.Center_km.X)->_4_4_,((slice_view *)&param_2.Sphere.Data.Center_km.Y)->_0_4_,
                        ((slice_view *)&param_2.Sphere.Data.Center_km.Y)->_4_4_,param_2.Sphere.Data.Center_km.Z);
    uVar4 = *puVar3;
    this_00 = (ReferenceController *)puVar3[1];
    uVar10 = in_stack_00000140;
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_00);
      uVar10 = in_stack_00000140;
    }
    iVar1 = this->_pad_0x0_0;
    if (*(char *)(iVar1 + 0x1c0) == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    TurretSubModule__OnScarTexture((TurretSubModule *)(iVar1 + 0xc0),uVar4,this_00,((slice_view *)&param_1.X)->_0_4_,((slice_view *)&param_1.X)->_4_4_,
               ((slice_view *)&param_1.Y)->_0_4_,((slice_view *)&param_1.Y)->_4_4_,((slice_view *)&param_1.Z)->_0_4_,((slice_view *)&param_1.Z)->_4_4_,((slice_view *)&param_1.W)->_0_4_,
               ((slice_view *)&param_1.W)->_4_4_,uVar5,uVar6,uVar7,uVar8,dVar9,((slice_view *)&param_2.Sphere.Data.Center_km.X)->_0_4_,
               ((slice_view *)&param_2.Sphere.Data.Center_km.X)->_4_4_,((slice_view *)&param_2.Sphere.Data.Center_km.Y)->_0_4_,
               ((slice_view *)&param_2.Sphere.Data.Center_km.Y)->_4_4_,param_2.Sphere.Data.Center_km.Z,uVar10,
               ((slice_view *)&param_4.X)->_0_4_,((slice_view *)&param_4.X)->_4_4_,((slice_view *)&param_4.Y)->_0_4_,((slice_view *)&param_4)->_12_8_,uVar11);
  }
  if (param_2.Compartment.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_2.Compartment.Controller);
  }
  return;
}


//==== 0000662290 00662290_GetCurrentDirection ====
// decompiled by BatchDecomp @ 00662290 name=GetCurrentDirection conv=__thiscall body=305

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct Vec3_L_double_G_ __thiscall WeaponCompartment__GetCurrentDirection(struct
   util::Quaternion<double>)const  */

Vec3_L_double_G_ * __thiscall
WeaponCompartment__GetCurrentDirection(WeaponCompartment *this,Vec3_L_double_G_ *__return_storage_ptr__,Quaternion_L_double_G_ param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  Quaternion_L_double_G_ QVar5;
  Vec3_L_double_G_ VVar6;
  Quaternion_L_double_G_ *pQVar7;
  undefined4 unaff_EDI;
  undefined4 in_stack_00000008;
  Quaternion_L_double_G_ local_3c;
  undefined1 local_1c[16];
  double local_c;
  
  pQVar7 = ModuleCompartment__GetOrientation((ModuleCompartment *)this,&local_3c);
  dVar4 = (double)CONCAT44(((slice_view *)&param_1.X)->_0_4_,in_stack_00000008);
  dVar2 = pQVar7->W;
  dVar3 = pQVar7->Y;
  dVar1 = ((dVar4 * dVar2 + (double)((slice_view *)&param_1)->_4_8_ * pQVar7->Z) - (double)((slice_view *)&param_1)->_12_8_ * dVar3) +
          (double)((slice_view *)&param_1)->_20_8_ * pQVar7->X;
  ((slice_view *)&local_1c)->_8_8_ = 0;
  ((slice_view *)&local_1c)->_0_8_ = dVar1;
  local_c = (double)((slice_view *)&param_1)->_20_8_ * dVar2 -
            ((double)((slice_view *)&param_1)->_4_8_ * dVar3 + dVar4 * pQVar7->X + (double)((slice_view *)&param_1)->_12_8_ * pQVar7->Z)
  ;
  ((slice_view *)&QVar5.Z)->_4_4_ = *(undefined4 *)&local_c;
  ((slice_view *)&QVar5)->_12_8_ = (dVar4 * dVar3 - (double)((slice_view *)&param_1)->_4_8_ * pQVar7->X) +
                 (double)((slice_view *)&param_1)->_12_8_ * dVar2 + (double)((slice_view *)&param_1)->_20_8_ * pQVar7->Z;
  ((slice_view *)&QVar5.W)->_0_4_ = (int)((ulonglong)local_c >> 0x20);
  ((slice_view *)&QVar5)->_4_8_ = ((double)((slice_view *)&param_1)->_4_8_ * dVar2 - dVar4 * pQVar7->Z) +
                (double)((slice_view *)&param_1)->_12_8_ * pQVar7->X + (double)((slice_view *)&param_1)->_20_8_ * dVar3;
  ((slice_view *)&QVar5.X)->_0_4_ = (int)((ulonglong)dVar1 >> 0x20);
  ((slice_view *)&QVar5.W)->_4_4_ = *(undefined4 *)&(this->CurrentDirection).X;
  ((slice_view *)&VVar6.Z)->_0_4_ = (int)((ulonglong)(this->CurrentDirection).Z >> 0x20);
  memcpy((void *)((slice_view *)&VVar6)->raw + 0, (const void *)((int)&(this->CurrentDirection).X + 4), 16);
  ((slice_view *)&VVar6.Z)->_4_4_ = unaff_EDI;
util__FUN_007caeb0(__return_storage_ptr__,QVar5,VVar6);
  return __return_storage_ptr__;
}


//==== 0000665ce0 00665ce0_GetTurretInfo ====
// decompiled by BatchDecomp @ 00665ce0 name=GetTurretInfo conv=__thiscall body=370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: class util::Str<char> __thiscall WeaponModule__GetTurretInfo(void)const  */

Str_L_char_G_ * __thiscall
WeaponModule__GetTurretInfo(WeaponModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  Str_L_char_G_ *pSVar1;
  LocStr *this_00;
  char *pcVar2;
  char *pcVar3;
  int unaff_EDI;
  char *pcVar4;
  float10 fVar5;
  void *local_5c[3];
  void *local_50;
  Str_L_char_G_ local_44;
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  double local_14;
  double local_c;
  
  fVar5 = (float10)(**(code **)(*(int *)this + 0x198))();
  local_c = (double)fVar5;
  fVar5 = (float10)(**(code **)(*(int *)this + 0x19c))();
  local_14 = (double)fVar5;
  util__Str_char___Str_char__o5(&local_44,"InfoBox WeaponTurret");
  pSVar1 = PrintSigFigures(&local_38,
                           (double)CONCAT44(2,(int)((ulonglong)(local_c * /*404ca5dc1a63c1f8*/57.29577951308232)
                                                   >> 0x20)),unaff_EDI);
  if (pSVar1->Capacity < 1) {
    pcVar4 = "";
  }
  else {
    pcVar4 = pSVar1->Data;
  }
  pSVar1 = PrintSigFigures(&local_2c,
                           (double)CONCAT44(GlobalSignificantFigures,
                                            (int)((ulonglong)(local_14 * /*404ca5dc1a63c1f8*/57.29577951308232)
                                                 >> 0x20)),unaff_EDI);
  if (pSVar1->Capacity < 1) {
    pcVar3 = "";
  }
  else {
    pcVar3 = pSVar1->Data;
  }
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  local_20.Length = 0;
  this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)local_5c,&local_44,&local_20);
  pSVar1 = util__LocStr__operator__o3(this_00);
  if (pSVar1->Capacity < 1) {
    pcVar2 = "";
  }
  else {
    pcVar2 = pSVar1->Data;
  }
  util__Printf(__return_storage_ptr__,pcVar2,pcVar3,pcVar4);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_50 = (void *)0x0;
  }
  if (local_5c[0] != (void *)0x0) {
    operator_delete__(local_5c[0]);
    local_5c[0] = (void *)0x0;
  }
  if (local_20.Data != (char *)0x0) {
    operator_delete__(local_20.Data);
    local_20.Data = (char *)0x0;
  }
  if (local_2c.Data != (char *)0x0) {
    operator_delete__(local_2c.Data);
    local_2c.Data = (char *)0x0;
  }
  if (local_38.Data != (char *)0x0) {
    operator_delete__(local_38.Data);
    local_38.Data = (char *)0x0;
  }
  if (local_44.Data != (char *)0x0) {
    operator_delete__(local_44.Data);
  }
  return __return_storage_ptr__;
}


//==== 00006904f0 006904f0_PrintDegrees ====
// decompiled by BatchDecomp @ 006904f0 name=PrintDegrees conv=__cdecl body=408

/* class util::Str<char> __cdecl PrintDegrees(double) */

Str_L_char_G_ * __cdecl PrintDegrees(Str_L_char_G_ *__return_storage_ptr__,double param_1)

{
  bool bVar1;
  bool bVar2;
  Str_L_char_G_ *pSVar3;
  LocStr *this;
  char *pcVar4;
  char *pcVar5;
  int unaff_EDI;
  double dVar6;
  undefined4 in_stack_00000008;
  void *local_58[3];
  void *local_4c;
  Str_L_char_G_ local_40;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  double local_1c;
  undefined4 local_14;
  Str_L_char_G_ local_10;
  
  local_1c = (double)CONCAT44(((slice_view *)&param_1)->_0_4_,in_stack_00000008);
  local_14 = 0;
  util__Str_char___Str_char__o5(&local_40,"Degrees");
  if (local_1c <= /*3ff0000000000000*/1.0) {
    pSVar3 = PrintSigFigures(&local_28,(double)CONCAT44(1,(int)((ulonglong)local_1c >> 0x20)),
                             unaff_EDI);
    if (pSVar3->Capacity < 1) {
      pcVar5 = "";
    }
    else {
      pcVar5 = pSVar3->Data;
    }
    bVar2 = false;
    bVar1 = true;
  }
  else {
    dVar6 = /*bfe0000000000000*/-0.5;
    if (/*0000000000000000*/0.0 <= local_1c) {
      dVar6 = /*3fe0000000000000*/0.5;
    }
    pSVar3 = util__Printf(&local_34,"%i",(int)(dVar6 + local_1c));
    if (pSVar3->Capacity < 1) {
      pcVar5 = "";
      bVar2 = true;
      bVar1 = false;
    }
    else {
      pcVar5 = pSVar3->Data;
      bVar2 = true;
      bVar1 = false;
    }
  }
  local_10.Data = (char *)0x0;
  local_10.Capacity = 0;
  local_10.Length = 0;
  this = (LocStr *)util__LocStr__LocStr((LocStr *)local_58,&local_40,&local_10);
  pSVar3 = util__LocStr__operator__o3(this);
  if (pSVar3->Capacity < 1) {
    pcVar4 = "";
  }
  else {
    pcVar4 = pSVar3->Data;
  }
  util__Printf(__return_storage_ptr__,"%s%s",pcVar5,pcVar4);
  if (local_4c != (void *)0x0) {
    operator_delete__(local_4c);
    local_4c = (void *)0x0;
  }
  if (local_58[0] != (void *)0x0) {
    operator_delete__(local_58[0]);
    local_58[0] = (void *)0x0;
  }
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
    local_10.Data = (char *)0x0;
  }
  if ((bVar1) && (local_28.Data != (char *)0x0)) {
    operator_delete__(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if ((local_34.Data != (char *)0x0) && (bVar2)) {
    operator_delete__(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_40.Data != (char *)0x0) {
    operator_delete__(local_40.Data);
  }
  return __return_storage_ptr__;
}


//==== 00006908d0 006908d0_PrintMass ====
// decompiled by BatchDecomp @ 006908d0 name=PrintMass conv=__cdecl body=196

/* class util::Str<char> __cdecl PrintMass(double) */

Str_L_char_G_ * __cdecl PrintMass(Str_L_char_G_ *__return_storage_ptr__,double param_1)

{
  double dVar1;
  Str_L_char_G_ *pSVar2;
  int unaff_ESI;
  undefined4 uVar3;
  undefined4 in_stack_00000008;
  char *pcVar4;
  Str_L_char_G_ local_10;
  
  dVar1 = (double)CONCAT44(((slice_view *)&param_1)->_0_4_,in_stack_00000008);
  if (((dVar1 <= /*408f400000000000*/1000.0) && (/*426d1a94a2000000*/1000000000000.0 <= dVar1)) ||
     ((dVar1 <= /*426d1a94a2000000*/1000000000000.0 && (/*408f400000000000*/1000.0 <= dVar1)))) {
    pcVar4 = "t";
    uVar3 = (undefined4)((ulonglong)(dVar1 / /*408f400000000000*/1000.0) >> 0x20);
  }
  else {
    if (/*3ff0000000000000*/1.0 <= dVar1) {
      pSVar2 = PrintSigFigures(&local_10,(double)CONCAT44(GlobalSignificantFigures,((slice_view *)&param_1)->_0_4_),
                               unaff_ESI);
      if (pSVar2->Capacity < 1) {
        pcVar4 = "";
      }
      else {
        pcVar4 = pSVar2->Data;
      }
      util__Printf(__return_storage_ptr__,"%s kg",pcVar4);
      if (local_10.Data != (char *)0x0) {
        operator_delete__(local_10.Data);
      }
      return __return_storage_ptr__;
    }
    pcVar4 = "g";
    uVar3 = (undefined4)((ulonglong)(dVar1 * /*408f400000000000*/1000.0) >> 0x20);
  }
  PrintUnits(__return_storage_ptr__,(double)CONCAT44(pcVar4,uVar3),(char *)0x1,unaff_ESI);
  return __return_storage_ptr__;
}


//==== 0000690f90 00690f90_PrintWavelength ====
// decompiled by BatchDecomp @ 00690f90 name=PrintWavelength conv=__cdecl body=158

/* class util::Str<char> __cdecl PrintWavelength(double) */

Str_L_char_G_ * __cdecl PrintWavelength(Str_L_char_G_ *__return_storage_ptr__,double param_1)

{
  Str_L_char_G_ *pSVar1;
  char *pcVar2;
  int unaff_ESI;
  char *pcVar3;
  Str_L_char_G_ local_1c;
  Str_L_char_G_ local_10;
  
  pSVar1 = PrintWavelengthName(&local_1c,(double)CONCAT44(unaff_ESI,((slice_view *)&param_1)->_0_4_));
  if (pSVar1->Capacity < 1) {
    pcVar3 = "";
  }
  else {
    pcVar3 = pSVar1->Data;
  }
  pSVar1 = PrintSigFigures(&local_10,(double)CONCAT44(GlobalSignificantFigures,((slice_view *)&param_1)->_0_4_),
                           unaff_ESI);
  if (pSVar1->Capacity < 1) {
    pcVar2 = "";
  }
  else {
    pcVar2 = pSVar1->Data;
  }
  util__Printf(__return_storage_ptr__,"%s nm (%s)",pcVar2,pcVar3);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
    local_10.Data = (char *)0x0;
  }
  if (local_1c.Data != (char *)0x0) {
    operator_delete__(local_1c.Data);
  }
  return __return_storage_ptr__;
}


//==== 00006ec4d0 006ec4d0_FixedOrbit ====
// decompiled by BatchDecomp @ 006ec4d0 name=FixedOrbit conv=__thiscall body=220

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: __thiscall FixedOrbit__FixedOrbit(void) */

FixedOrbit * __thiscall FixedOrbit__FixedOrbit(FixedOrbit *this)

{
  undefined8 uVar1;
  
  this->_pad_0x0_0 = (int)((void *)(0x009369e4u));
  (this->OrbitedBody).Pointer = (CelestialObject *)0x0;
  (this->OrbitedBody).Controller = (ReferenceController *)0x0;
  (this->Elements)._pad_0x0_0 = 0;
  *(undefined4 *)((char *)&(this->Elements) + 0xc) = 0;
  *(undefined4 *)&(this->Elements).Epoch_JulianYears = 0;
  *(undefined4 *)((int)&(this->Elements).Epoch_JulianYears + 4) = 0;
  (this->Elements)._pad_0x0_0 = (int)((void *)(0x00936958u));
  *(undefined4 *)&(this->Elements).SemiMajorAxis_km = 0;
  *(undefined4 *)((int)&(this->Elements).SemiMajorAxis_km + 4) = 0;
  *(undefined4 *)&(this->Elements).Eccentricity = 0;
  *(undefined4 *)((int)&(this->Elements).Eccentricity + 4) = 0;
  *(undefined4 *)&(this->Elements).InclinationToRelativePlane_degrees = 0;
  *(undefined4 *)((int)&(this->Elements).InclinationToRelativePlane_degrees + 4) = 0;
  *(undefined4 *)&(this->Elements).LongitudeOfAscendingNode_degrees = 0;
  *(undefined4 *)((int)&(this->Elements).LongitudeOfAscendingNode_degrees + 4) = 0;
  *(undefined4 *)&(this->Elements).ArgumentOfPeriapsis_degrees = 0;
  *(undefined4 *)((int)&(this->Elements).ArgumentOfPeriapsis_degrees + 4) = 0;
  *(undefined4 *)&(this->Elements).MeanAnomaly_degrees = 0;
  *(undefined4 *)((int)&(this->Elements).MeanAnomaly_degrees + 4) = 0;
  (this->FixedOrbitMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 = 0;
  (this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Data = (pmf_e345282a *)0x0;
  (this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Size = 0;
  (this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Capacity = 0;
  *(undefined4 *)&(this->GetOrbitalPeriod_s_MemoizedValue).Data = 0;
  *(undefined4 *)((int)&(this->GetOrbitalPeriod_s_MemoizedValue).Data + 4) = 0;
  (this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Size =
       (int)((void *)(0x009194a4u));
  uVar1 = /*3ff0000000000000*/1.0;
  (this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Capacity = 0;
  *(undefined4 *)&(this->GetOrbitalPeriod_s_MemoizedValue).Data = 0;
  *(undefined4 *)((int)&(this->GetOrbitalPeriod_s_MemoizedValue).Data + 4) = 0;
  *(undefined8 *)&(this->GetOrbitalPeriod_s_MemoizedValue).IsValidData = 0;
  *(undefined1 *)&(this->GetFullRotator_MemoizedValue).Data.X = 0;
  *(undefined4 *)&(this->GetFullRotator_MemoizedValue).Data.Y = 0;
  *(undefined4 *)((int)&(this->GetFullRotator_MemoizedValue).Data.Y + 4) = 0;
  *(undefined4 *)&(this->GetFullRotator_MemoizedValue).Data.Z = 0;
  *(undefined4 *)((int)&(this->GetFullRotator_MemoizedValue).Data.Z + 4) = 0;
  (this->GetFullRotator_MemoizedValue).Data.W = 0.0;
  *(undefined8 *)&(this->GetFullRotator_MemoizedValue).IsValidData = uVar1;
  *(undefined1 *)&(this->GetVelocityStateConstant_km__s_MemoizedValue).Data = 0;
  *(undefined8 *)&(this->GetVelocityStateConstant_km__s_MemoizedValue).IsValidData = 0;
  *(undefined1 *)&(this->GetEccentricityComplement_MemoizedValue).Data = 0;
  *(undefined8 *)&(this->GetEccentricityComplement_MemoizedValue).IsValidData = 0;
  *(undefined1 *)&(this->GetEccentricityPeriapsisRoot_MemoizedValue).Data = 0;
  *(undefined8 *)&(this->GetEccentricityPeriapsisRoot_MemoizedValue).IsValidData = 0;
  *(undefined1 *)&(this->GetEccentricityApoapsisRoot_MemoizedValue).Data = 0;
  *(undefined8 *)&(this->GetEccentricityApoapsisRoot_MemoizedValue).IsValidData = 0;
  *(undefined1 *)&this[1]._pad_0x0_0 = 0;
  return this;
}


//==== 00006f2b50 006f2b50_DeselectAll ====
#undef t /* auto(v2): compat 僵尸宏撞成员名 */

// decompiled by BatchDecomp @ 006f2b50 name=DeselectAll conv=__thiscall body=128

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall LevelEditor__DeselectAll(void) */

void __thiscall LevelEditor__DeselectAll(LevelEditor *this)

{
  WorldObject local_2bc;
  
  local_2bc.Object.Pointer = (Actor *)0x0;
  local_2bc.Object.Controller = (ReferenceController *)0x0;
  local_2bc.LPointID = 0;
  ItineraryNode__ItineraryNode(&local_2bc.Node.LastNode);
  ItineraryNode__ItineraryNode(&local_2bc.Node.NextNode);
  local_2bc.Node.t = 0.0;
  WorldObject__operator_((WorldObject *)(this + 0x80),&local_2bc);
  NodeMouseOver__dtor(&local_2bc.Node);
  if (local_2bc.Object.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_2bc.Object.Controller);
  }
  GenerateUI(this);
  return;
}


//==== 00006f5660 006f5660_GetDecimalPrinting ====
// decompiled by BatchDecomp @ 006f5660 name=GetDecimalPrinting conv=__thiscall body=287

/* private: class util::Str<char> __thiscall ScenarioEditor__GetDecimalPrinting(double,class
   util::Str<char>)const  */

Str_L_char_G_ * __thiscall
ScenarioEditor__GetDecimalPrinting(ScenarioEditor *this,Str_L_char_G_ *__return_storage_ptr__,double param_1,Str_L_char_G_ param_2)

{
  bool bVar1;
  bool bVar2;
  double dVar3;
  bool bVar4;
  char *pcVar5;
  Str_L_char_G_ *pSVar6;
  undefined1 *puVar7;
  int unaff_EBX;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = ((slice_view *)&param_1)->_0_4_;
  pcVar5 = "Date_JulianYears";
  puVar7 = &cde_l2_0091985b_NullString;
  if (0 < (int)param_2.Data) {
    puVar7 = ((slice_view *)&param_1)->_4_4_;
  }
  local_8 = 0;
  for (; (pcVar5[(int)(puVar7 + -0x936ef4)] != '\0' || (*pcVar5 != '\0')); pcVar5 = pcVar5 + 1) {
    if (pcVar5[(int)(puVar7 + -0x936ef4)] != *pcVar5) {
      pSVar6 = GetUnitsOfType(&local_28,(Str_L_char_G_ *)((int)&param_1 + 4));
      if (pSVar6->Capacity < 1) {
        pcVar5 = "";
      }
      else {
        pcVar5 = pSVar6->Data;
      }
      pSVar6 = PrintUnits(&local_1c,(double)CONCAT44(pcVar5,uStack_c),(char *)0x1,unaff_EBX);
      bVar4 = false;
      bVar2 = true;
      bVar1 = true;
LAB_006f5703:
      util__Str_char___Str_char(__return_storage_ptr__,pSVar6);
      if ((bVar1) && (local_1c.Data != (char *)0x0)) {
        operator_delete__(local_1c.Data);
        local_1c.Data = (char *)0x0;
      }
      if ((bVar2) && (local_28.Data != (char *)0x0)) {
        operator_delete__(local_28.Data);
        local_28.Data = (char *)0x0;
      }
      dVar3 = param_1;
      if ((local_34.Data != (char *)0x0) && (bVar4)) {
        operator_delete__(local_34.Data);
        local_34.Data = (char *)0x0;
        dVar3 = param_1;
      }
      ((slice_view *)&param_1)->_4_4_ = (undefined1 *)((ulonglong)dVar3 >> 0x20);
      if (((slice_view *)&param_1)->_4_4_ != (undefined1 *)0x0) {
        operator_delete__(((slice_view *)&param_1)->_4_4_);
        param_1 = dVar3;
      }
      return __return_storage_ptr__;
    }
  }
  pSVar6 = PrintSigFigures(&local_34,(double)CONCAT44(6,((slice_view *)&param_1)->_0_4_),unaff_EBX);
  bVar4 = true;
  bVar2 = false;
  bVar1 = false;
  goto LAB_006f5703;
}


//==== 00006f74a0 006f74a0_GetSelectedFleetAlliance ====
// decompiled by BatchDecomp @ 006f74a0 name=GetSelectedFleetAlliance conv=__thiscall body=178

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: class util::Reflectable * * __thiscall LevelEditor__GetSelectedFleetAlliance(void) */

Reflectable ** __thiscall LevelEditor__GetSelectedFleetAlliance(LevelEditor *this)

{
  WorldObject *this_00;
  int iVar1;
  bool bVar2;
  bool bVar3;
  Actor *pAVar4;
  ReferenceController *pRVar5;
  Actor *local_c;
  
  this_00 = (WorldObject *)(this + 0x80);
  bVar3 = false;
  bVar2 = WorldObject__IsLevelEditorBody(this_00);
  if (bVar2) {
    pRVar5 = *(ReferenceController **)(this + 0x84);
    local_c = (this_00->Object).Pointer;
    if (pRVar5 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar5);
      bVar2 = util__ReferenceController__IsDataStillValid(pRVar5);
      if (!bVar2) {
        local_c = (Actor *)0x0;
      }
    }
    bVar3 = true;
    if (local_c[3]._pad_0x0_0 != 0) {
      bVar2 = true;
      goto LAB_006f74fd;
    }
  }
  else {
    pRVar5 = (ReferenceController *)0x0;
  }
  bVar2 = false;
LAB_006f74fd:
  if ((pRVar5 != (ReferenceController *)0x0) && (bVar3)) {
    util__ReferenceController__ReleaseWeakReference(pRVar5);
  }
  if (!bVar2) {
    return (Reflectable **)0x0;
  }
  pRVar5 = *(ReferenceController **)(this + 0x84);
  pAVar4 = (this_00->Object).Pointer;
  if (pRVar5 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar5);
    bVar2 = util__ReferenceController__IsDataStillValid(pRVar5);
    if (!bVar2) {
      pAVar4 = (Actor *)0x0;
    }
  }
  iVar1 = pAVar4[3]._pad_0x0_0;
  if (pRVar5 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar5);
  }
  return (Reflectable **)(iVar1 + 8);
}


//==== 00006f75e0 006f75e0_GetSelectedFleetStartBody ====
// decompiled by BatchDecomp @ 006f75e0 name=GetSelectedFleetStartBody conv=__thiscall body=177

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: class util::Reflectable * * __thiscall LevelEditor__GetSelectedFleetStartBody(void) */

Reflectable ** __thiscall LevelEditor__GetSelectedFleetStartBody(LevelEditor *this)

{
  WorldObject *this_00;
  Reflectable **ppRVar1;
  bool bVar2;
  bool bVar3;
  Actor *pAVar4;
  ReferenceController *pRVar5;
  Actor *local_c;
  
  this_00 = (WorldObject *)(this + 0x80);
  bVar3 = false;
  bVar2 = WorldObject__IsLevelEditorBody(this_00);
  if (bVar2) {
    pRVar5 = *(ReferenceController **)(this + 0x84);
    local_c = (this_00->Object).Pointer;
    if (pRVar5 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar5);
      bVar2 = util__ReferenceController__IsDataStillValid(pRVar5);
      if (!bVar2) {
        local_c = (Actor *)0x0;
      }
    }
    bVar3 = true;
    if (local_c[3]._pad_0x0_0 != 0) {
      bVar2 = true;
      goto LAB_006f763d;
    }
  }
  else {
    pRVar5 = (ReferenceController *)0x0;
  }
  bVar2 = false;
LAB_006f763d:
  if ((pRVar5 != (ReferenceController *)0x0) && (bVar3)) {
    util__ReferenceController__ReleaseWeakReference(pRVar5);
  }
  if (!bVar2) {
    return (Reflectable **)0x0;
  }
  pRVar5 = *(ReferenceController **)(this + 0x84);
  pAVar4 = (this_00->Object).Pointer;
  if (pRVar5 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar5);
    bVar2 = util__ReferenceController__IsDataStillValid(pRVar5);
    if (!bVar2) {
      pAVar4 = (Actor *)0x0;
    }
  }
  ppRVar1 = (Reflectable **)pAVar4[3]._pad_0x0_0;
  if (pRVar5 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar5);
  }
  return ppRVar1;
}


//==== 000070cbb0 0070cbb0_LibrationOrbit ====
// decompiled by BatchDecomp @ 0070cbb0 name=LibrationOrbit conv=__thiscall body=357

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: __thiscall LibrationOrbit__LibrationOrbit(class util::WeakPtr<class CelestialObject>,int)
    */

LibrationOrbit * __thiscall
LibrationOrbit__LibrationOrbit(LibrationOrbit *this,CelestialObject *param_2,ReferenceController *param_3,int param_4)

{
  int iVar1;
  ReferenceController *pRVar2;
  StrategicManager *this_00;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined4 *puVar7;
  double dVar8;
  undefined1 local_44[56];
  double local_c;
  
  this->_pad_0x0_0 = (int)((void *)(0x0091f404u));
  (this->LibrationOrbitMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 = 0;
  (this->LibrationOrbitMemoizationHandlerInstance).ResetFunctions.Data = (pmf_8600ff96 *)0x0;
  (this->LibrationOrbitMemoizationHandlerInstance).ResetFunctions.Size = 0;
  (this->LibrationOrbitMemoizationHandlerInstance).ResetFunctions.Capacity = 0;
  (this->LibrationOrbitMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 =
       (int)((void *)(0x009234fcu));
  (this->LibrationOrbitMemoizationHandlerInstance).ResetFunctions.Data = (pmf_8600ff96 *)0x0;
  (this->LibrationOrbitMemoizationHandlerInstance).ResetFunctions.Size = 0;
  (this->LibrationOrbitMemoizationHandlerInstance).ResetFunctions.Capacity = 0;
  (this->MainBody).Pointer = param_2;
  (this->MainBody).Controller = param_3;
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_3);
  }
  this->LagrangePointID = param_4;
  *(undefined4 *)&this->Epoch_s = 0;
  *(undefined4 *)((int)&this->Epoch_s + 4) = 0;
  *(undefined4 *)&(this->StateAtEpoch).Position.X = 0;
  *(undefined4 *)((int)&(this->StateAtEpoch).Position.X + 4) = 0;
  *(undefined4 *)&(this->StateAtEpoch).Position.Y = 0;
  *(undefined4 *)((int)&(this->StateAtEpoch).Position.Y + 4) = 0;
  *(undefined4 *)&(this->StateAtEpoch).Position.Z = 0;
  *(undefined4 *)((int)&(this->StateAtEpoch).Position.Z + 4) = 0;
  *(undefined4 *)&(this->StateAtEpoch).Velocity.X = 0;
  *(undefined4 *)((int)&(this->StateAtEpoch).Velocity.X + 4) = 0;
  *(undefined4 *)&(this->StateAtEpoch).Velocity.Y = 0;
  *(undefined4 *)((int)&(this->StateAtEpoch).Velocity.Y + 4) = 0;
  (this->StateAtEpoch).Velocity.Z = 0.0;
  FixedOrbit__FixedOrbit(&(this->GetActualOrbit_MemoizedValue).Data);
  *(undefined1 *)&this[1]._pad_0x0_0 = 0;
  iVar1 = this->LagrangePointID;
  if (((1 < iVar1) || (iVar1 < 5)) && ((5 < iVar1 || (iVar1 < 1)))) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\strategic\\astrodynamics.cpp",0x49d,
                    "Between(LagrangePointID, 1, 5)",(char *)0x0);
    DebugBreak();
  }
  pRVar2 = (this->MainBody).Controller;
  if (pRVar2 != (ReferenceController *)0x0) {
    bVar6 = util__ReferenceController__IsDataStillValid(pRVar2);
    if (!bVar6) {
      (this->MainBody).Pointer = (CelestialObject *)0x0;
    }
  }
  this_00 = ((this->MainBody).Pointer)->ParentStrategic;
  local_c = GetPeriod_s(this);
  local_c = local_c * /*3fe0000000000000*/0.5;
  dVar8 = StrategicManager__GetTimeSinceJ2000_s(this_00);
  this->Epoch_s = dVar8 + local_c;
  pRVar2 = (this->MainBody).Controller;
  if (pRVar2 != (ReferenceController *)0x0) {
    bVar6 = util__ReferenceController__IsDataStillValid(pRVar2);
    if (!bVar6) {
      (this->MainBody).Pointer = (CelestialObject *)0x0;
    }
  }
  puVar7 = (undefined4 *)
           CelestialObject__GetLagrangePoint((this->MainBody).Pointer,(double)CONCAT44(SUB84(this->Epoch_s,0),local_44),
                      (int)((ulonglong)this->Epoch_s >> 0x20));
  if (*(char *)(puVar7 + 0xc) == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  uVar3 = puVar7[1];
  uVar4 = puVar7[2];
  uVar5 = puVar7[3];
  *(undefined4 *)&(this->StateAtEpoch).Position.X = *puVar7;
  *(undefined4 *)((int)&(this->StateAtEpoch).Position.X + 4) = uVar3;
  *(undefined4 *)&(this->StateAtEpoch).Position.Y = uVar4;
  *(undefined4 *)((int)&(this->StateAtEpoch).Position.Y + 4) = uVar5;
  uVar3 = puVar7[5];
  uVar4 = puVar7[6];
  uVar5 = puVar7[7];
  *(undefined4 *)&(this->StateAtEpoch).Position.Z = puVar7[4];
  *(undefined4 *)((int)&(this->StateAtEpoch).Position.Z + 4) = uVar3;
  *(undefined4 *)&(this->StateAtEpoch).Velocity.X = uVar4;
  *(undefined4 *)((int)&(this->StateAtEpoch).Velocity.X + 4) = uVar5;
  uVar3 = puVar7[9];
  uVar4 = puVar7[10];
  uVar5 = puVar7[0xb];
  *(undefined4 *)&(this->StateAtEpoch).Velocity.Y = puVar7[8];
  *(undefined4 *)((int)&(this->StateAtEpoch).Velocity.Y + 4) = uVar3;
  *(undefined4 *)&(this->StateAtEpoch).Velocity.Z = uVar4;
  *(undefined4 *)((int)&(this->StateAtEpoch).Velocity.Z + 4) = uVar5;
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  return this;
}


//==== 0000710570 00710570_GetMeanAnomalyFromProjectingStateOnToOrbit_radians ====
// decompiled by BatchDecomp @ 00710570 name=GetMeanAnomalyFromProjectingStateOnToOrbit_radians conv=__thiscall body=199

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall FixedOrbit__GetMeanAnomalyFromProjectingStateOnToOrbit_radians(struct
   util::PhysicalState<struct util::Vec3<double> >)const  */

double __thiscall
FixedOrbit__GetMeanAnomalyFromProjectingStateOnToOrbit_radians(FixedOrbit *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
          undefined4 param_13)

{
  undefined4 stack0xfffffffc;
  double dVar1;
  float10 extraout_ST0;
  double local_18;
  double local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_18 = GetTrueAnomalyFromProjectingStateOnToOrbit_radians
                       (this,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                        param_10,param_11,param_12,param_13);
  local_10 = util__Cos(&local_18);
  dVar1 = (this->Elements).InclinationToRelativePlane_degrees;
  local_10 = util__GetRelativePeriapsisState((dVar1 + local_10) / (dVar1 * local_10 + /*3ff0000000000000*/1.0));
  if (/*400921fb54442d18*/3.141592653589793 < local_18) {
    local_10 = /*401921fb54442d18*/6.283185307179586 - local_10;
  }
  local_18 = (this->Elements).InclinationToRelativePlane_degrees;
  util__Sin(&local_10);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 0000711630 00711630_GetRelativeOrbitalState ====

// decompiled by BatchDecomp @ 00711630 name=GetRelativeOrbitalState conv=__thiscall body=341

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct util::PhysicalState<struct util::Vec3<double> > __thiscall
   FixedOrbit__GetRelativeOrbitalState(double)const  */

void __thiscall FixedOrbit__GetRelativeOrbitalState(FixedOrbit *this,double param_1)

{
  undefined4 stack0xfffffffc;
  double *pdVar1;
  float10 fVar2;
  double dVar3;
  double dVar4;
  undefined4 in_stack_0000000c;
  double local_20;
  double local_18;
  double local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pdVar1 = &(this->Elements).InclinationToRelativePlane_degrees;
  dVar3 = util__Abs(pdVar1);
  if (/*3ff0000000000000*/1.0 <= dVar3) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\strategic\\astrodynamics.cpp",0x9c,
                    "Abs(Elements.Eccentricity) < 1.",(char *)0x0);
    DebugBreak();
  }
  local_10 = GetMeanAnomaly_radians(this,(double)CONCAT44(in_stack_0000000c,((slice_view *)&param_1)->_4_4_));
  local_18 = *pdVar1;
  fVar2 = (float10)FUN_0070c5d0(&local_18,&local_10,&local_18,SUB84(local_10,0),
                                (int)((ulonglong)local_10 >> 0x20),0x14,(int)/*3e45798ee2308c3a*/1e-08
                                ,(int)((ulonglong)/*3e45798ee2308c3a*/1e-08 >> 0x20));
  dVar4 = GetTrueAnomalyFromEccentricAnomaly_radians(this,(double)fVar2);
  local_20 = dVar4;
  dVar3 = util__Cos(&local_20);
  dVar3 = util__GetRelativePeriapsisState((*pdVar1 + dVar3) / (*pdVar1 * dVar3 + /*3ff0000000000000*/1.0));
  if (/*400921fb54442d18*/3.141592653589793 < local_20) {
    dVar3 = /*401921fb54442d18*/6.283185307179586 - dVar3;
  }
  GetStateFromEccentricAndTrueAnomaly
            (this,(double)CONCAT44(SUB84(dVar4,0),((slice_view *)&param_1)->_0_4_),
             (double)CONCAT44(SUB84(dVar3,0),(int)((ulonglong)dVar4 >> 0x20)));
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000711790 00711790_GetRelativePeriapsisState ====
// decompiled by BatchDecomp @ 00711790 name=GetRelativePeriapsisState conv=__thiscall body=170

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct util::PhysicalState<struct util::Vec3<double> > __thiscall
   FixedOrbit__GetRelativePeriapsisState(void)const  */

void __thiscall FixedOrbit__GetRelativePeriapsisState(FixedOrbit *this)

{
  undefined4 stack0xfffffffc;
  double dVar1;
  double dVar2;
  uint in_stack_00000004;
  double local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = 0.0;
  dVar1 = util__Cos(&local_10);
  dVar2 = (this->Elements).InclinationToRelativePlane_degrees;
  dVar2 = util__GetRelativePeriapsisState((dVar2 + dVar1) / (dVar2 * dVar1 + /*3ff0000000000000*/1.0));
  if (/*400921fb54442d18*/3.141592653589793 < local_10) {
    dVar2 = /*401921fb54442d18*/6.283185307179586 - dVar2;
  }
  GetStateFromEccentricAndTrueAnomaly
            (this,(double)(ulonglong)in_stack_00000004,(double)((longlong)dVar2 << 0x20));
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000712db0 00712db0_GetVelocityNeededToTransferOrbitalPlanes_km__s ====
// decompiled by BatchDecomp @ 00712db0 name=GetVelocityNeededToTransferOrbitalPlanes_km__s conv=__thiscall body=269

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct Vec3_L_double_G_ __thiscall
   FixedOrbit__GetVelocityNeededToTransferOrbitalPlanes_km__s(struct util::PhysicalState<struct
   util::Vec3<double> >,struct FixedOrbit const &)const  */

Vec3_L_double_G_ * __thiscall
FixedOrbit__GetVelocityNeededToTransferOrbitalPlanes_km__s(FixedOrbit *this,Vec3_L_double_G_ *__return_storage_ptr__)

{
  undefined4 stack0xfffffffc;
  Quaternion_L_double_G_ QVar1;
  Vec3_L_double_G_ VVar2;
  Vec3_L_double_G_ VVar3;
  Vec3_L_double_G_ VVar4;
  Vec3_L_double_G_ *pVVar5;
  Vec3_L_double_G_ *pVVar6;
  undefined4 unaff_EDI;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  double in_stack_00000030;
  FixedOrbit *in_stack_00000038;
  Vec3_L_double_G_ local_58;
  Vec3_L_double_G_ local_40;
  undefined1 local_28[12];
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (((this->Elements)._pad_0x0_0 != (in_stack_00000038->Elements)._pad_0x0_0) ||
     ((this->OrbitedBody).Controller != (in_stack_00000038->OrbitedBody).Controller)) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\strategic\\astrodynamics.cpp",0x343,
                    "FromOtherOrbit.OrbitedBody == OrbitedBody",(char *)0x0);
    DebugBreak();
  }
  pVVar5 = GetUpVector(this,&local_40);
  pVVar6 = GetUpVector(in_stack_00000038,&local_58);
  ((slice_view *)&VVar2.Z)->_4_4_ = (int)((ulonglong)pVVar6->Z >> 0x20);
  memcpy((void *)((slice_view *)&VVar2)->raw + 0, (const void *)pVVar6, 20);
  ((slice_view *)&VVar3.Z)->_4_4_ = (int)((ulonglong)pVVar5->Z >> 0x20);
  memcpy((void *)((slice_view *)&VVar3)->raw + 0, (const void *)pVVar5, 20);
  util_Quaternion_double_Quaternion_double((Quaternion_L_double_G_ *)local_28,VVar2,VVar3);
  ((slice_view *)&QVar1.X)->_4_4_ = ((slice_view *)&local_28)->_8_4_;
  ((slice_view *)&QVar1.X)->_0_4_ = ((slice_view *)&local_28)->_4_4_;
  ((slice_view *)&QVar1.Y)->_0_4_ = uStack_1c;
  ((slice_view *)&QVar1.Y)->_4_4_ = local_18;
  ((slice_view *)&QVar1.Z)->_0_4_ = uStack_14;
  ((slice_view *)&QVar1.Z)->_4_4_ = uStack_10;
  ((slice_view *)&QVar1.W)->_0_4_ = uStack_c;
  ((slice_view *)&QVar1.W)->_4_4_ = in_stack_00000020;
  ((slice_view *)&VVar4.X)->_4_4_ = in_stack_00000028;
  ((slice_view *)&VVar4.X)->_0_4_ = in_stack_00000024;
  ((slice_view *)&VVar4.Y)->_0_4_ = in_stack_0000002c;
  ((slice_view *)&VVar4.Y)->_4_4_ = *(undefined4 *)&in_stack_00000030;
  ((slice_view *)&VVar4.Z)->_0_4_ = (int)((ulonglong)in_stack_00000030 >> 0x20);
  ((slice_view *)&VVar4.Z)->_4_4_ = unaff_EDI;
util__FUN_007caeb0((Vec3_L_double_G_ *)(local_28 + 8),QVar1,VVar4);
  __return_storage_ptr__->X =
       (double)CONCAT44(uStack_1c,((slice_view *)&local_28)->_8_4_) -
       (double)CONCAT44(in_stack_00000024,in_stack_00000020);
  __return_storage_ptr__->Y =
       (double)CONCAT44(uStack_14,local_18) - (double)CONCAT44(in_stack_0000002c,in_stack_00000028);
  __return_storage_ptr__->Z = (double)CONCAT44(uStack_c,uStack_10) - in_stack_00000030;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 0000714230 00714230_CorrectBurn_km__s ====
// decompiled by BatchDecomp @ 00714230 name=CorrectBurn_km__s conv=__cdecl body=399

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* struct Astrogation::AstrogateResult __cdecl Astrogation__CorrectBurn_km__s(struct
   Vec3_L_double_G_,double,class util::WeakPtr<class Fleet>) */

AstrogateResult * __cdecl
Astrogation__CorrectBurn_km__s(AstrogateResult *__return_storage_ptr__,double param_2,double param_3,double param_4,
          double param_5,Fleet *param_6,ReferenceController *param_7)

{
  double dVar1;
  double dVar2;
  Fleet *pFVar3;
  bool bVar4;
  Maybe_L_double_G_ *pMVar5;
  Vec3_L_double_G_ *pVVar6;
  Vec3_L_double_G_ local_64;
  Maybe_L_double_G_ local_4c;
  Maybe_L_double_G_ local_3c;
  double local_2c;
  double local_24;
  double local_1c;
  double local_14;
  double local_c;
  
  if ((param_7 != (ReferenceController *)0x0) &&
     (bVar4 = util__ReferenceController__IsDataStillValid(param_7), !bVar4)) {
    param_6 = (Fleet *)0x0;
  }
  pFVar3 = param_6;
  Fleet__GetMaxAcceleration_m__s2_Memoize(param_6);
  if ((pFVar3->GetMaxAcceleration_m__s2_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_c = ((pFVar3->GetMaxAcceleration_m__s2_MemoizedValue).Data * param_5) /
            /*408f400000000000*/1000.0;
  local_14 = param_3 * param_3 + param_2 * param_2 + param_4 * param_4;
  pMVar5 = util__Sqrt(&local_3c,&local_14);
  if (pMVar5->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_2c = pMVar5->Data;
  local_1c = param_3 * param_3 + param_2 * param_2 + param_4 * param_4;
  pMVar5 = util__Sqrt(&local_4c,&local_1c);
  if (pMVar5->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_24 = pMVar5->Data;
  if (local_c <= pMVar5->Data) {
    local_24 = local_c;
  }
  pVVar6 = util__Vec3_double___SafeNormalized((Vec3_L_double_G_ *)&param_2,&local_64);
  dVar1 = pVVar6->Y;
  dVar2 = pVVar6->Z;
  (__return_storage_ptr__->DeltaV_km__s).X = pVVar6->X * local_24;
  (__return_storage_ptr__->DeltaV_km__s).Y = dVar1 * local_24;
  (__return_storage_ptr__->DeltaV_km__s).Z = dVar2 * local_24;
  __return_storage_ptr__->Finished = local_2c <= local_c;
  if (param_7 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_7);
  }
  return __return_storage_ptr__;
}


//==== 0000715d30 00715d30_OrbitalCircularInjection_km__s ====
// decompiled by BatchDecomp @ 00715d30 name=OrbitalCircularInjection_km__s conv=__cdecl body=171

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* struct Vec3_L_double_G_ __cdecl Astrogation__OrbitalCircularInjection_km__s(class
   StrategicManager *,double,struct util::PhysicalState<struct util::Vec3<double> >,class
   util::WeakPtr<class CelestialObject>) */

Vec3_L_double_G_ * __cdecl
Astrogation__OrbitalCircularInjection_km__s(Vec3_L_double_G_ *__return_storage_ptr__,undefined4 param_1,undefined8 param_2,
          undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,
          undefined4 param_8,undefined4 param_9,undefined4 param_10,undefined4 param_11,
          undefined4 param_12,undefined4 param_13,undefined4 param_14,undefined4 param_15,
          CelestialObject *param_16,ReferenceController *param_17)

{
  undefined4 stack0xfffffffc;
  bool bVar1;
  double local_20;
  double local_18;
  double local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((param_17 != (ReferenceController *)0x0) &&
     (bVar1 = util__ReferenceController__IsDataStillValid(param_17), !bVar1)) {
    param_16 = (CelestialObject *)0x0;
  }
  CelestialObject__GetAbsoluteVelocityToOrbit_km__s(param_16,&local_20,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
             param_12,param_13,param_14,param_15,param_2);
  __return_storage_ptr__->X = local_20 - (double)CONCAT44(param_11,param_10);
  __return_storage_ptr__->Y = local_18 - (double)CONCAT44(param_13,param_12);
  __return_storage_ptr__->Z = local_10 - (double)CONCAT44(param_15,param_14);
  if (param_17 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_17);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 0000715ee0 00715ee0_Strafe_km__s ====
// decompiled by BatchDecomp @ 00715ee0 name=Strafe_km__s conv=__cdecl body=399

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* struct Astrogation::AstrogateResult __cdecl Astrogation__Strafe_km__s(class StrategicManager
   *,double,double,class util::WeakPtr<class Fleet>,struct util::PhysicalState<struct
   util::Vec3<double> >,struct util::PhysicalState<struct util::Vec3<double> >,double) */

AstrogateResult * __cdecl Astrogation__Strafe_km__s(AstrogateResult *__return_storage_ptr__)

{
  undefined4 stack0xfffffffc;
  Vec3_L_double_G_ VVar1;
  Vec3_L_double_G_ VVar2;
  bool bVar3;
  double param_3;
  Fleet *in_stack_0000001c;
  ReferenceController *in_stack_00000020;
  double in_stack_00000024;
  double in_stack_0000002c;
  double in_stack_00000034;
  double in_stack_0000003c;
  double in_stack_00000044;
  double in_stack_0000004c;
  double in_stack_00000054;
  double in_stack_0000005c;
  double in_stack_00000064;
  double in_stack_0000006c;
  double in_stack_00000074;
  double in_stack_0000007c;
  double in_stack_00000084;
  ReferenceController *pRVar4;
  double local_50;
  double local_48;
  double local_40;
  char local_18;
  double local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((in_stack_00000020 != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__IsDataStillValid(in_stack_00000020), !bVar3)) {
    in_stack_0000001c = (Fleet *)0x0;
  }
  Fleet__GetMaxAcceleration_m__s2_Memoize(in_stack_0000001c);
  if ((in_stack_0000001c->GetMaxAcceleration_m__s2_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_10 = ((in_stack_0000001c->GetMaxAcceleration_m__s2_MemoizedValue).Data * param_3) /
             /*408f400000000000*/1000.0;
  if (in_stack_00000084 <= local_10) {
    local_10 = in_stack_00000084;
  }
  if ((local_10 <= /*3f50624dd2f1a9fc*/0.001) ||
     (((slice_view *)&VVar1)->_4_8_ = in_stack_00000054 - in_stack_00000024, ((slice_view *)&VVar1.X)->_0_4_ = &local_50,
     ((slice_view *)&VVar1.Y)->_4_4_ = SUB84(in_stack_0000005c - in_stack_0000002c,0),
     ((slice_view *)&VVar1.Z)->_0_4_ = (int)((ulonglong)(in_stack_0000005c - in_stack_0000002c) >> 0x20),
     ((slice_view *)&VVar1.Z)->_4_4_ = SUB84(in_stack_00000064 - in_stack_00000034,0),
     ((slice_view *)&VVar2)->_4_8_ = in_stack_0000006c - in_stack_0000003c,
     ((slice_view *)&VVar2.X)->_0_4_ = (int)((ulonglong)(in_stack_00000064 - in_stack_00000034) >> 0x20),
     ((slice_view *)&VVar2.Y)->_4_4_ = SUB84(in_stack_00000074 - in_stack_00000044,0),
     ((slice_view *)&VVar2.Z)->_0_4_ = (int)((ulonglong)(in_stack_00000074 - in_stack_00000044) >> 0x20),
     ((slice_view *)&VVar2.Z)->_4_4_ = SUB84(in_stack_0000007c - in_stack_0000004c,0),
util__Strafe_km__s(VVar1,VVar2,
                (double)CONCAT44(SUB84(local_10,0),
                                 (int)((ulonglong)(in_stack_0000007c - in_stack_0000004c) >> 0x20)))
     , local_18 == '\0')) {
    *(undefined4 *)&(__return_storage_ptr__->DeltaV_km__s).X = 0;
    *(undefined4 *)((int)&(__return_storage_ptr__->DeltaV_km__s).X + 4) = 0;
    *(undefined4 *)&(__return_storage_ptr__->DeltaV_km__s).Y = 0;
    *(undefined4 *)((int)&(__return_storage_ptr__->DeltaV_km__s).Y + 4) = 0;
    (__return_storage_ptr__->DeltaV_km__s).Z = 0.0;
    __return_storage_ptr__->Finished = false;
  }
  else {
    pRVar4 = in_stack_00000020;
    if (in_stack_00000020 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(in_stack_00000020);
    }
    CorrectBurn_km__s(__return_storage_ptr__,local_50 * local_10,local_48 * local_10,
                      local_40 * local_10,SUB84(param_3,0),(int)((ulonglong)param_3 >> 0x20),
                      in_stack_0000001c,pRVar4);
  }
  if (in_stack_00000020 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(in_stack_00000020);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 0000716f50 00716f50_FUN_00716f50 ====
extern undefined4 FUN_00716d90(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void FUN_00716f50(Darray_L_bool_P__G_ *param_1,Darray_L_bool_P__G_ *param_2,undefined4 param_3);

// decompiled by BatchDecomp @ 00716f50 name=FUN_00716f50 conv=unknown body=407

void FUN_00716f50(Darray_L_bool_P__G_ *param_1,Darray_L_bool_P__G_ *param_2,undefined4 param_3)

{
  undefined4 stack0xfffffffc;
  int iVar1;
  Darray_L_bool_P__G_ *pDVar2;
  int iVar3;
  int iVar4;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  Darray_L_bool_P__G_ *local_34;
  Darray_L_bool_P__G_ *local_30;
  undefined **local_2c;
  void *pvStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined **local_1c;
  void *pvStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar1 = (**(code **)(*(int *)param_2 + 0xc))();
  if (iVar1 == 0) {
    util__Darray_bool____Darray_bool(param_1,param_2);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_2c = (undefined **)0x0;
  pvStack_28 = (void *)0x0;
  uStack_24 = 0;
  uStack_20 = 0;
  util__Darray_bool____Darray_bool((Darray_L_bool_P_G_ *)&local_2c,param_2);
  local_1c = (undefined **)0x0;
  pvStack_18 = (void *)0x0;
  iStack_14 = 0;
  uStack_10 = 0;
  util__Darray_class_Manager____Darray_class_Manager((Darray_L_class_Manager_P_G_ *)&local_1c,iVar1);
  iVar3 = iStack_14;
  local_c = iVar1;
  util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&local_1c,&local_c);
  util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&local_1c,iVar3);
  iVar3 = 1;
  pDVar2 = (Darray_L_bool_P_G_ *)&local_2c;
  local_34 = (Darray_L_bool_P_G_ *)&local_1c;
  if (1 < iVar1) {
    do {
      local_c = 0;
      local_38 = 0;
      iVar4 = iVar3;
      local_30 = pDVar2;
      if (0 < iVar1) {
        do {
          local_44 = iVar1;
          if (iVar4 < iVar1) {
            local_44 = iVar4;
          }
          local_3c = iVar1;
          if (local_44 + iVar3 < iVar1) {
            local_3c = local_44 + iVar3;
          }
          local_48 = local_38;
          local_40 = local_44;
          FUN_00716d90(local_30,local_34,&local_48,&local_44,&local_40,&local_3c,&local_c,param_3);
          local_38 = local_38 + iVar3 * 2;
          iVar4 = iVar4 + iVar3 * 2;
        } while (local_38 < iVar1);
      }
      pDVar2 = local_34;
      if (local_c != iVar1) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\sort.inl",0x3e,
                        "OutIndex == Size",(char *)0x0);
        DebugBreak();
      }
      iVar3 = iVar3 * 2;
      local_34 = local_30;
    } while (iVar3 < iVar1);
  }
  local_30 = pDVar2;
  util__Darray_bool____Darray_bool(param_1,pDVar2);
  local_1c = ((void *)(0x009194a4u));
  if (pvStack_18 != (void *)0x0) {
    operator_delete__(pvStack_18);
  }
  pvStack_18 = (void *)0x0;
  local_1c = ((void *)(0x00919488u));
  local_2c = ((void *)(0x009194a4u));
  if (pvStack_28 != (void *)0x0) {
    operator_delete__(pvStack_28);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000723310 00723310_FUN_00723310 ====
void FUN_00723310(int *param_1,undefined4 *param_2,Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_3);

// decompiled by BatchDecomp @ 00723310 name=FUN_00723310 conv=unknown body=394

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_00723310(int *param_1,undefined4 *param_2,Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_3)

{
  undefined4 stack0xffffffe0;
  undefined4 stack0xfffffffc;
  int iVar1;
  ReferenceController *this;
  ReferenceController *this_00;
  Maybe_L_double_G_ MVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  FixedOrbit *pFVar7;
  undefined4 uVar8;
  SpacecraftComponent *pSVar9;
  uint uVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined1 local_108[28];
  void *local_ec;
  undefined **local_a8;
  void *local_a4;
  ReferenceController *local_1c;
  int *local_18;
  undefined4 *local_14;
  pmf_1fb4a0e4 *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_18 = param_1;
  local_c = 0;
  iVar4 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
  if (local_c < iVar4) {
    do {
      piVar12 = &local_c;
      puVar5 = (undefined4 *)(**(code **)*param_1)();
      pSVar9 = (SpacecraftComponent *)&stack0xffffffe0;
      uVar11 = *param_2;
      local_14 = puVar5;
      piVar6 = (int *)util__GetLayoutOffsetFromParent(pSVar9);
      uVar8 = 0;
      uVar10 = (uint)pSVar9 & 0xffffff00;
      if ((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) {
        bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]);
        if (!bVar3) {
          *puVar5 = 0;
        }
      }
      ((slice_view *)&MVar2.Data)->_4_4_ = uVar10;
      ((slice_view *)&MVar2.Data)->_0_4_ = uVar8;
      ((slice_view *)&MVar2)->_8_4_ = uVar11;
      ((slice_view *)&MVar2)->_12_4_ = piVar12;
      pFVar7 = Fleet__GetEstimatedOrbit((Fleet *)*puVar5,(FixedOrbit *)local_108,MVar2);
      if ((piVar6[1] == (pFVar7->Elements)._pad_0x0_0) &&
         ((ReferenceController *)*piVar6 == (pFVar7->OrbitedBody).Controller)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      local_a8 = ((void *)(0x009194a4u));
      if (local_a4 != (void *)0x0) {
        operator_delete__(local_a4);
      }
      local_a4 = (void *)0x0;
      local_a8 = ((void *)(0x00919488u));
      ((slice_view *)&local_108)->_24_4_ = ((void *)(0x00919980u));
      if (local_ec != (void *)0x0) {
        operator_delete__(local_ec);
        local_ec = (void *)0x0;
      }
      if ((ReferenceController *)((slice_view *)&local_108)->_16_4_ != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference((ReferenceController *)((slice_view *)&local_108)->_16_4_);
      }
      if (local_1c != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_1c);
      }
      if (bVar3) {
        iVar4 = *(int *)(param_3 + 8);
        local_10 = (pmf_1fb4a0e4 *)(iVar4 + 1);
        util__Darray_class_util__WeakPtr_class_Body_____SetSize(param_3,(int *)&local_10);
        bVar3 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(param_3,iVar4);
        if (bVar3) {
          iVar4 = *(int *)(param_3 + 8);
          iVar1 = *(int *)(param_3 + 4);
          this = *(ReferenceController **)(iVar1 + -4 + iVar4 * 8);
          *(undefined4 *)(iVar1 + -8 + iVar4 * 8) = *local_14;
          this_00 = (ReferenceController *)local_14[1];
          *(ReferenceController **)(iVar1 + -4 + iVar4 * 8) = this_00;
          if (this_00 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this_00);
          }
          if (this != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(this);
          }
        }
      }
      param_1 = local_18;
      local_c = local_c + 1;
      iVar4 = (**(code **)(*(int *)(uintptr_t)local_18 + 0xc))();
    } while (local_c < iVar4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007260c0 007260c0_GetLPointName ====
#undef GetMass_kg /* auto(v2): compat 僵尸宏撞成员名 */

// decompiled by BatchDecomp @ 007260c0 name=GetLPointName conv=__thiscall body=367

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Str<char> __thiscall CelestialObject__GetLPointName(int)const  */

Str_L_char_G_ * __thiscall
CelestialObject__GetLPointName(CelestialObject *this,Str_L_char_G_ *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  void *local_24[4];
  ReferenceController *local_14;
  void *local_10[2];
  ReferenceController *local_8;
  
  local_8 = (ReferenceController *)0x0;
  piVar6 = (int *)GetOrbitedObject(this);
  if ((*piVar6 == 0) || ((ReferenceController *)piVar6[1] == (ReferenceController *)0x0)) {
LAB_00726130:
    bVar5 = false;
  }
  else {
    bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar6[1]);
    if (!bVar5) goto LAB_00726130;
    piVar6 = (int *)GetOrbitedObject(this);
    if ((ReferenceController *)piVar6[1] != (ReferenceController *)0x0) {
      bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar6[1]);
      if (!bVar5) {
        *piVar6 = 0;
      }
    }
    bVar5 = true;
    dVar2 = *(double *)(*(int *)(*(int *)(uintptr_t)piVar6 + 0x4c) + 0x48);
    pdVar1 = &this->BodyTemplate->SurfaceTemperature_K;
    if (*pdVar1 <= dVar2 && dVar2 != *pdVar1) {
      bVar4 = false;
      goto LAB_00726137;
    }
  }
  bVar4 = true;
LAB_00726137:
  if ((local_8 != (ReferenceController *)0x0) && (bVar5)) {
    util__ReferenceController__ReleaseWeakReference(local_8);
  }
  if (local_14 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_14);
  }
  if (bVar4) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\strategic\\celestialobjects.cpp",0x14f,
                    "GetOrbitedObject() && GetOrbitedObject()->GetMass_kg() > GetMass_kg()",
                    (char *)0x0);
    DebugBreak();
  }
  piVar6 = (int *)GetOrbitedObject(this);
  if ((ReferenceController *)piVar6[1] != (ReferenceController *)0x0) {
    bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar6[1]);
    if (!bVar5) {
      *piVar6 = 0;
    }
  }
  iVar3 = *piVar6;
  puVar7 = (undefined4 *)(**(code **)(this->_pad_0x0_0 + 8))(local_24);
  if ((int)puVar7[1] < 1) {
    puVar9 = &cde_l2_0091985b_NullString;
  }
  else {
    puVar9 = (undefined1 *)*puVar7;
  }
  puVar7 = (undefined4 *)(**(code **)(*(int *)(iVar3 + 8) + 8))(local_10);
  if ((int)puVar7[1] < 1) {
    puVar8 = &cde_l2_0091985b_NullString;
  }
  else {
    puVar8 = (undefined1 *)*puVar7;
  }
  util__Printf(__return_storage_ptr__,"%s-%s L_%i",puVar8,puVar9,param_1);
  if (local_10[0] != (void *)0x0) {
    operator_delete__(local_10[0]);
    local_10[0] = (void *)0x0;
  }
  if (local_24[0] != (void *)0x0) {
    operator_delete__(local_24[0]);
    local_24[0] = (void *)0x0;
  }
  if (local_14 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_14);
  }
  return __return_storage_ptr__;
}


//==== 0000726d30 00726d30_GetPerpendicularUpDirection ====
// decompiled by BatchDecomp @ 00726d30 name=GetPerpendicularUpDirection conv=__thiscall body=186

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct Vec3_L_double_G_ __thiscall CelestialObject__GetPerpendicularUpDirection(struct
   Vec3_L_double_G_,struct Vec3_L_double_G_,double)const  */

Vec3_L_double_G_ * __thiscall
CelestialObject__GetPerpendicularUpDirection(CelestialObject *this,Vec3_L_double_G_ *__return_storage_ptr__,Vec3_L_double_G_ param_1,
          Vec3_L_double_G_ param_2,double param_3)

{
  Vec3_L_double_G_ VVar1;
  Vec3_L_double_G_ VVar2;
  double *pdVar3;
  Vec3_L_double_G_ *this_00;
  undefined4 in_stack_00000008;
  Vec3_L_double_G_ *__return_storage_ptr___00;
  undefined1 local_6c[48];
  Vec3_L_double_G_ local_3c;
  Vec3_L_double_G_ local_24;
  double local_c;
  
  local_24.Y = (double)CONCAT44(((slice_view *)&param_1.X)->_0_4_,in_stack_00000008);
  local_24.Z = ((slice_view *)&param_1)->_4_8_;
  local_c = (double)((slice_view *)&param_1)->_12_8_;
  pdVar3 = (double *)GetStateAt(this,(double)CONCAT44(((slice_view *)&param_2.Z)->_4_4_,local_6c));
  local_24.X = local_24.Y - *pdVar3;
  local_24.Y = local_24.Z - pdVar3[1];
  local_24.Z = local_c - pdVar3[2];
  util__Vec3_double___SafeNormalized(&local_24,&local_3c);
  ((slice_view *)&VVar1.X)->_4_4_ = ((slice_view *)&local_3c.Y)->_0_4_;
  ((slice_view *)&VVar1.X)->_0_4_ = ((slice_view *)&local_3c.X)->_4_4_;
  ((slice_view *)&VVar1.Y)->_0_4_ = ((slice_view *)&local_3c.Y)->_4_4_;
  ((slice_view *)&VVar1)->_12_8_ = local_3c.Z;
  ((slice_view *)&VVar1.Z)->_4_4_ = ((slice_view *)&param_1.Z)->_4_4_;
  ((slice_view *)&VVar2.Z)->_4_4_ = __return_storage_ptr__;
  memcpy((void *)((slice_view *)&VVar2)->raw + 0, (const void *)((slice_view *)&param_2)->raw + 0, 20);
  __return_storage_ptr___00 = __return_storage_ptr__;
  this_00 = util__GetPerpendicularUpDirection(&local_3c,VVar1,VVar2);
  util__Vec3_double___Normalized(this_00,__return_storage_ptr___00);
  return __return_storage_ptr__;
}


//==== 0000727f80 00727f80_GetWorldLight ====
// decompiled by BatchDecomp @ 00727f80 name=GetWorldLight conv=__thiscall body=229

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct WorldLight __thiscall CelestialObject__GetWorldLight(double,struct
   Vec3_L_double_G_,bool)const  */

WorldLight * __thiscall
CelestialObject__GetWorldLight(CelestialObject *this,WorldLight *__return_storage_ptr__,double param_1,
          Vec3_L_double_G_ param_2,bool param_3)

{
  Vec3_L_double_G_ VVar1;
  Vec3_L_double_G_ VVar2;
  bool bVar3;
  undefined4 *puVar4;
  Vec3_L_double_G_ *pVVar5;
  undefined4 unaff_EDI;
  double dVar6;
  double dVar7;
  undefined4 in_stack_00000008;
  undefined1 local_54[48];
  Vec3_L_double_G_ local_24;
  undefined8 local_c;
  
  local_c = CONCAT44(((slice_view *)&param_1)->_0_4_,in_stack_00000008);
  bVar3 = CelestialBody__IsLuminousBody(this->BodyTemplate);
  if (!bVar3) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\strategic\\celestialobjects.cpp",0x2d4,
                    "IsLuminousBody()",(char *)0x0);
    DebugBreak();
  }
  puVar4 = (undefined4 *)GetStateAt(this,(double)CONCAT44((int)local_c,local_54));
  if (((slice_view *)&param_2.Z)->_4_1_ == '\0') {
    pVVar5 = &local_24;
    ((slice_view *)&local_24.X)->_0_4_ = *puVar4;
    ((slice_view *)&local_24.X)->_4_4_ = puVar4[1];
    ((slice_view *)&local_24.Y)->_0_4_ = puVar4[2];
    ((slice_view *)&local_24.Y)->_4_4_ = puVar4[3];
    local_24.Z = *(double *)(puVar4 + 4);
  }
  else {
    ((slice_view *)&VVar1.Z)->_0_4_ = (int)((ulonglong)*(undefined8 *)(puVar4 + 4) >> 0x20);
    memcpy((void *)((slice_view *)&VVar1)->raw + 0, (const void *)(puVar4 + 1), 16);
    ((slice_view *)&VVar1.Z)->_4_4_ = (int)local_c;
    pVVar5 = StrategicManager__GetReferenceShiftedPosition_km(this->ParentStrategic,&local_24,VVar1,
                        (double)CONCAT44(unaff_EDI,(int)((ulonglong)local_c >> 0x20)));
  }
  dVar6 = pVVar5->Y + (double)((slice_view *)&param_2)->_4_8_;
  dVar7 = pVVar5->Z + (double)((slice_view *)&param_2)->_12_8_;
  ((slice_view *)&VVar2.X)->_4_4_ = *(undefined4 *)&dVar6;
  ((slice_view *)&VVar2.X)->_0_4_ =
       (int)((ulonglong)(pVVar5->X + (double)CONCAT44(((slice_view *)&param_2.X)->_0_4_,((slice_view *)&param_1)->_4_4_)) >> 0x20);
  ((slice_view *)&VVar2.Y)->_0_4_ = (int)((ulonglong)dVar6 >> 0x20);
  ((slice_view *)&VVar2.Y)->_4_4_ = *(undefined4 *)&dVar7;
  ((slice_view *)&VVar2.Z)->_0_4_ = (int)((ulonglong)dVar7 >> 0x20);
  ((slice_view *)&VVar2.Z)->_4_4_ = unaff_EDI;
  CelestialBody__GetWorldLight(this->BodyTemplate,__return_storage_ptr__,VVar2);
  return __return_storage_ptr__;
}


//==== 000072c900 0072c900_operator_ ====
// decompiled by BatchDecomp @ 0072c900 name=operator= conv=__thiscall body=134

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Darray<struct ItineraryNode> & __thiscall util::Darray<struct
   ItineraryNode>::operator=(class util::Darray<struct ItineraryNode> const &) */

Darray_L_struct_ItineraryNode_G_ * __thiscall
util__Darray_struct_ItineraryNode___operator_(Darray_L_struct_ItineraryNode_G_ *this,Darray_L_struct_ItineraryNode_G_ *param_1)

{
  Darray_L_struct_ItineraryNode_G_ *pDVar1;
  int iVar2;
  ItineraryNode *pIVar3;
  ItineraryNode *this_00;
  
  pDVar1 = param_1;
  param_1 = (Darray_L_struct_ItineraryNode_G_ *)(**(code **)(*(int *)param_1 + 0xc))();
  SetSize(this,(int *)&param_1);
  iVar2 = (**(code **)(*(int *)pDVar1 + 0xc))();
  if (iVar2 == 0) {
    (**(code **)(*(int *)this + 0x10))();
    return this;
  }
  CheckSizeDestructive(this);
  this_00 = *(ItineraryNode **)(this + 4);
  pIVar3 = *(ItineraryNode **)(pDVar1 + 4);
  if (pIVar3 != pIVar3 + *(int *)(pDVar1 + 8)) {
    do {
      ItineraryNode__operator_(this_00,pIVar3);
      pIVar3 = pIVar3 + 1;
      this_00 = this_00 + 1;
    } while (pIVar3 != (ItineraryNode *)(*(int *)(pDVar1 + 8) * 0x150 + *(int *)(pDVar1 + 4)));
  }
  return this;
}


//==== 000072d6b0 0072d6b0__vector_deleting_destructor_ ====
// decompiled by BatchDecomp @ 0072d6b0 name=`vector_deleting_destructor' conv=__thiscall body=190

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void * __thiscall ItineraryNode::`vector deleting destructor'(unsigned int) */

void * __thiscall ItineraryNode___vector_deleting_destructor_(ItineraryNode *this,uint param_1)

{
  undefined1 *puVar1;
  ReferenceController *this_00;
  ReferenceController **ppRVar2;
  int iVar3;
  
  if ((param_1 & 2) != 0) {
    puVar1 = &this[-1].CachedNearestOrbitParametricCoord.field_0xc;
    iVar3 = *(int *)puVar1;
    if (iVar3 != 0) {
      ppRVar2 = &this[iVar3].CachedNearestFleet.Controller;
      do {
        iVar3 = iVar3 + -1;
        if (ppRVar2[-0x4a] != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(ppRVar2[-0x4a]);
        }
        this_00 = ppRVar2[-0x54];
        if (this_00 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this_00);
        }
        if (ppRVar2[-0x56] != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(ppRVar2[-0x56]);
        }
        if (ppRVar2[-0x58] != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(ppRVar2[-0x58]);
        }
        if (ppRVar2[-0x94] != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(ppRVar2[-0x94]);
        }
        ppRVar2 = ppRVar2 + -0x54;
      } while (iVar3 != 0);
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(puVar1,*(int *)puVar1 * 0x150 + 4);
    }
    return puVar1;
  }
  ItineraryNode__dtor(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,0x150);
  }
  return this;
}


//==== 000072d910 0072d910_BurnDeltaV ====
// decompiled by BatchDecomp @ 0072d910 name=BurnDeltaV conv=__thiscall body=285

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Fleet__BurnDeltaV(double) */

void __thiscall Fleet__BurnDeltaV(Fleet *this,double param_1)

{
  undefined4 stack0xffffffc0;
  undefined4 stack0xfffffffc;
  StrategicManager *pSVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_24[20];
  ReferenceController *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (param_1 < /*0000000000000000*/0.0) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\strategic\\fleet.cpp",0xe0,
                    "DeltaV_km__s >= 0.",(char *)0x0);
    DebugBreak();
  }
  piVar3 = (int *)GetSpacecrafts(this);
  local_c = 0;
  iVar4 = (**(code **)(*(int *)(uintptr_t)piVar3 + 0xc))();
  if (local_c < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)*piVar3)();
      if ((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]);
        if (!bVar2) {
          *puVar5 = 0;
        }
      }
      puVar5 = (undefined4 *)SpacecraftComponent__GetCraft((SpacecraftComponent *)*puVar5);
      if ((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]);
        if (!bVar2) {
          *puVar5 = 0;
        }
      }
      CraftInstance__ExpendReactionMass((CraftInstance *)*puVar5,param_1);
      if (local_10 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_10);
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(*(int *)(uintptr_t)piVar3 + 0xc))();
    } while (local_c < iVar4);
  }
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_24);
  pSVar1 = this->ParentStrategic;
util__GetLayoutOffsetFromParent((SpacecraftComponent *)&stack0xffffffc0);
  StrategicManager__OnFleetSpentDeltaV(pSVar1);
  (**(code **)(*(int *)this + 0x40))();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000072e3e0 0072e3e0_ClearBurnOnItinerary ====
// decompiled by BatchDecomp @ 0072e3e0 name=ClearBurnOnItinerary conv=__thiscall body=222

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Fleet__ClearBurnOnItinerary(struct ItineraryNode) */

void __thiscall Fleet__ClearBurnOnItinerary(Fleet *this,ItineraryNode param_1)

{
  undefined4 stack0xfffffe9c;
  bool bVar1;
  ItineraryNode local_154;
  
  if (*(char *)&this[1].Location.OrbitParameters.Data.GetEccentricityPeriapsisRoot_MemoizedValue.
                Data != '\0') {
    Itinerary__ClearBurns((Itinerary *)&(this->Location).MissionItinerary.Data.ItineraryNodes.Size,&local_154,
               &param_1);
    if (local_154.CachedNearestOrbiter.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_154.CachedNearestOrbiter.Controller);
    }
    if ((ArmorCollisionShell *)local_154.CachedNearestFleet.Controller != (ArmorCollisionShell *)0x0
       ) {
      util__ReferenceController__ReleaseWeakReference(local_154.CachedNearestFleet.Controller);
    }
    if (local_154.CachedNearestBody.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_154.CachedNearestBody.Controller);
    }
    if (local_154.CachedGravityBody.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_154.CachedGravityBody.Controller);
    }
    if (local_154.Parent.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_154.Parent.Controller);
    }
    bVar1 = Manager__IsCurrentlyTheActiveManager((Manager *)this->ParentStrategic);
    if (bVar1) {
util__GetLayoutOffsetFromParent((SpacecraftComponent *)&stack0xfffffe9c);
      StrategicManager__OnFleetChanged(this->ParentStrategic);
    }
  }
  if (param_1.CachedNearestOrbiter.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_1.CachedNearestOrbiter.Controller);
  }
  if (param_1.CachedNearestFleet.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_1.CachedNearestFleet.Controller);
  }
  if (param_1.CachedNearestBody.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_1.CachedNearestBody.Controller);
  }
  if (param_1.CachedGravityBody.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_1.CachedGravityBody.Controller);
  }
  if (param_1.Parent.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_1.Parent.Controller);
  }
  return;
}


//==== 00007330d0 007330d0_GetSpacecrafts ====
extern undefined4 FUN_0072b230(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007330d0 name=GetSpacecrafts conv=__thiscall body=289

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Darray<class util::WeakPtr<class SpacecraftComponent> > __thiscall
   Fleet__GetSpacecrafts(void)const  */

void __thiscall Fleet__GetSpacecrafts(Fleet *this)

{
  undefined4 stack0xfffffffc;
  bool *pbVar1;
  int iVar2;
  ReferenceController *this_00;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 *in_stack_00000004;
  undefined1 local_c[4];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pbVar1 = &this[1].Location.OrbitParameters.Data.GetEccentricityPeriapsisRoot_MemoizedValue.
            IsValidData;
  local_c[0] = 0;
  *in_stack_00000004 = 0;
  in_stack_00000004[1] = 0;
  in_stack_00000004[2] = 0;
  in_stack_00000004[3] = 0;
  uVar4 = (**(code **)(*(int *)pbVar1 + 0xc))();
  *in_stack_00000004 = ((void *)(0x0091db14u));
  in_stack_00000004[1] = 0;
  in_stack_00000004[2] = 0;
  in_stack_00000004[3] = uVar4;
  if (((int)uVar4 < 0) || (0x3fffffff < (int)uVar4)) {
    in_stack_00000004[3] = 0;
  }
  else if (0 < (int)uVar4) {
    uVar6 = -(uint)((int)((ulonglong)uVar4 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 8);
    puVar5 = (uint *)operator_new__(-(uint)(0xfffffffb < uVar6) | uVar6 + 4);
    if (puVar5 == (uint *)0x0) {
      puVar5 = (uint *)0x0;
    }
    else {
      *puVar5 = uVar4;
      puVar5 = puVar5 + 1;
      puVar3 = puVar5;
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3 = puVar3 + 2;
      }
    }
    iVar7 = 0;
    in_stack_00000004[1] = puVar5;
    if (0 < (int)in_stack_00000004[3]) {
      do {
        iVar2 = in_stack_00000004[1];
        this_00 = *(ReferenceController **)(iVar2 + 4 + iVar7 * 8);
        *(undefined4 *)(iVar2 + iVar7 * 8) = 0;
        *(undefined4 *)(iVar2 + 4 + iVar7 * 8) = 0;
        if (this_00 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this_00);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)in_stack_00000004[3]);
    }
  }
  FUN_0072b230(pbVar1,local_c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000733360 00733360_GetTagName ====
// decompiled by BatchDecomp @ 00733360 name=GetTagName conv=__thiscall body=221

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::Str<char> __thiscall Fleet__GetTagName(void)const  */

Str_L_char_G_ * __thiscall Fleet__GetTagName(Fleet *this,Str_L_char_G_ *__return_storage_ptr__)

{
  Body *this_00;
  ReferenceController *this_01;
  bool bVar1;
  char *pcVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  CraftBlueprint *pCVar6;
  Str_L_char_G_ *pSVar7;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  undefined4 local_8;
  
  local_8 = 0;
  iVar4 = (**(code **)(*(int *)&this[1].Location.OrbitParameters.Data.
                                GetEccentricityPeriapsisRoot_MemoizedValue.Data + 0xc))();
  if (iVar4 < 1) {
    pSVar7 = &local_14;
    local_14.Data = (char *)0x0;
    local_14.Capacity = 0;
    local_14.Length = 0;
    bVar1 = false;
    bVar3 = true;
  }
  else {
    puVar5 = (undefined4 *)
             (**(code **)(*(int *)&this[1].Location.OrbitParameters.Data.
                                   GetEccentricityPeriapsisRoot_MemoizedValue.Data + 0x1c))();
    this_00 = (Body *)*puVar5;
    Body__GetSpacecraftComponent_Memoize(this_00);
    if ((this_00->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    this_01 = (this_00->GetSpacecraftComponent_MemoizedValue).Data.Controller;
    if (this_01 != (ReferenceController *)0x0) {
      bVar3 = util__ReferenceController__IsDataStillValid(this_01);
      if (!bVar3) {
        (this_00->GetSpacecraftComponent_MemoizedValue).Data.Pointer = (SpacecraftComponent *)0x0;
      }
    }
    pCVar6 = SpacecraftComponent__GetCraftDesign((this_00->GetSpacecraftComponent_MemoizedValue).Data.Pointer);
    pSVar7 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_20,(Str_L_char_G_ *)&pCVar6->_pad_0x0_0);
    bVar1 = true;
    bVar3 = false;
  }
  pcVar2 = local_14.Data;
  util__Str_char___Str_char(__return_storage_ptr__,pSVar7);
  if ((bVar3) && (pcVar2 != (char *)0x0)) {
    operator_delete__(pcVar2);
  }
  if ((local_20.Data != (char *)0x0) && (bVar1)) {
    operator_delete__(local_20.Data);
  }
  return __return_storage_ptr__;
}


//==== 0000734150 00734150_MergeFleetIntoThis ====
// decompiled by BatchDecomp @ 00734150 name=MergeFleetIntoThis conv=__thiscall body=323

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Fleet__MergeFleetIntoThis(class util::WeakPtr<class Fleet>) */

void __thiscall Fleet__MergeFleetIntoThis(Fleet *this,int param_2,ReferenceController *param_3)

{
  undefined4 stack0xffffffdc;
  undefined4 stack0xfffffff0;
  undefined4 stack0xfffffffc;
  bool bVar1;
  int *piVar2;
  int iVar3;
  SharedPtr_L_struct_UIWidget_G_ *pSVar4;
  ReferenceController *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar2 = (int *)util__GetLayoutOffsetFromParent((SpacecraftComponent *)&stack0xfffffff0)
  ;
  if (((ReferenceController *)piVar2[1] == param_3) && (*piVar2 == param_2)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (local_c != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_c);
  }
  if (bVar1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\strategic\\fleet.cpp",0x17f,
                    "MergingFleet != WeakThis(this)",(char *)0x0);
    DebugBreak();
  }
  if ((param_3 != (ReferenceController *)0x0) &&
     (bVar1 = util__ReferenceController__IsDataStillValid(param_3), !bVar1)) {
    param_2 = 0;
  }
  piVar2 = (int *)(param_2 + 0x558);
  local_c = (ReferenceController *)0x0;
  iVar3 = (**(code **)(*(int *)(uintptr_t)piVar2 + 0xc))();
  if ((int)local_c < iVar3) {
    do {
      pSVar4 = (SharedPtr_L_struct_UIWidget_G_ *)(**(code **)*piVar2)();
      util__Darray_class_util__SharedPtr_struct_UIWidget_____Add((Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *)
                 &this[1].Location.OrbitParameters.Data.GetEccentricityPeriapsisRoot_MemoizedValue.
                  IsValidData,pSVar4);
      local_c = (ReferenceController *)((int)local_c + 1);
      iVar3 = (**(code **)(*(int *)(uintptr_t)piVar2 + 0xc))();
    } while ((int)local_c < iVar3);
  }
  if ((param_3 != (ReferenceController *)0x0) &&
     (bVar1 = util__ReferenceController__IsDataStillValid(param_3), !bVar1)) {
    param_2 = 0;
  }
util__GetLayoutOffsetFromParent((SpacecraftComponent *)&stack0xffffffdc);
  StrategicManager__KillFleet(*(StrategicManager **)(param_2 + 0x74));
  (**(code **)(*(int *)this + 0x40))();
  bVar1 = Manager__IsCurrentlyTheActiveManager((Manager *)this->ParentStrategic);
  if (bVar1) {
util__GetLayoutOffsetFromParent((SpacecraftComponent *)&stack0xffffffdc);
    StrategicManager__OnFleetChanged(this->ParentStrategic);
  }
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000736c40 00736c40_operator_ ====
// decompiled by BatchDecomp @ 00736c40 name=operator= conv=__thiscall body=263

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct FixedOrbit & __thiscall FixedOrbit__operator_(struct FixedOrbit const &) */

FixedOrbit * __thiscall FixedOrbit__operator_(FixedOrbit *this,FixedOrbit *param_1)

{
  ReferenceController *this_00;
  ReferenceController *this_01;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  pmf_e345282a *ppVar6;
  undefined3 uVar7;
  bool bVar8;
  
  (this->OrbitedBody).Pointer = (param_1->OrbitedBody).Pointer;
  this_00 = (ReferenceController *)(this->Elements)._pad_0x0_0;
  (this->OrbitedBody).Controller = (param_1->OrbitedBody).Controller;
  this_01 = (ReferenceController *)(param_1->Elements)._pad_0x0_0;
  (this->Elements)._pad_0x0_0 = (int)this_01;
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_01);
  }
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  util__Str_char___operator__o8
            ((Str_L_char_G_ *)(char *)&(this->Elements) + 0xc,(Str_L_char_G_ *)(char *)&(param_1->Elements) + 0xc);
  (this->Elements).SemiMajorAxis_km = (param_1->Elements).SemiMajorAxis_km;
  (this->Elements).Eccentricity = (param_1->Elements).Eccentricity;
  (this->Elements).InclinationToRelativePlane_degrees =
       (param_1->Elements).InclinationToRelativePlane_degrees;
  (this->Elements).LongitudeOfAscendingNode_degrees =
       (param_1->Elements).LongitudeOfAscendingNode_degrees;
  (this->Elements).ArgumentOfPeriapsis_degrees = (param_1->Elements).ArgumentOfPeriapsis_degrees;
  (this->Elements).MeanAnomaly_degrees = (param_1->Elements).MeanAnomaly_degrees;
  ppVar6 = (param_1->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Data;
  (this->FixedOrbitMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 =
       (param_1->FixedOrbitMemoizationHandlerInstance).ResetFunctions._pad_0x0_0;
  (this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Data = ppVar6;
  util__Darray_class_Module____operator
            ((Darray_L_class_Module_P_G_ *)
             &(this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Size,
             (Darray_L_class_Module_P_G_ *)
             &(param_1->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Size);
  uVar7 = *(undefined3 *)((char *)&(param_1->GetOrbitalPeriod_s_MemoizedValue) + 0x9);
  uVar1 = *(undefined4 *)((char *)&(param_1->GetOrbitalPeriod_s_MemoizedValue) + 0xc);
  uVar2 = *(undefined4 *)&(param_1->GetFullRotator_MemoizedValue).Data.X;
  uVar3 = *(undefined4 *)((int)&(param_1->GetFullRotator_MemoizedValue).Data.X + 4);
  (this->GetOrbitalPeriod_s_MemoizedValue).IsValidData =
       (param_1->GetOrbitalPeriod_s_MemoizedValue).IsValidData;
  *(undefined3 *)((char *)&(this->GetOrbitalPeriod_s_MemoizedValue) + 0x9) = uVar7;
  *(undefined4 *)((char *)&(this->GetOrbitalPeriod_s_MemoizedValue) + 0xc) = uVar1;
  *(undefined4 *)&(this->GetFullRotator_MemoizedValue).Data.X = uVar2;
  *(undefined4 *)((int)&(this->GetFullRotator_MemoizedValue).Data.X + 4) = uVar3;
  uVar1 = *(undefined4 *)((int)&(param_1->GetFullRotator_MemoizedValue).Data.Y + 4);
  uVar2 = *(undefined4 *)&(param_1->GetFullRotator_MemoizedValue).Data.Z;
  uVar3 = *(undefined4 *)((int)&(param_1->GetFullRotator_MemoizedValue).Data.Z + 4);
  *(undefined4 *)&(this->GetFullRotator_MemoizedValue).Data.Y =
       *(undefined4 *)&(param_1->GetFullRotator_MemoizedValue).Data.Y;
  *(undefined4 *)((int)&(this->GetFullRotator_MemoizedValue).Data.Y + 4) = uVar1;
  *(undefined4 *)&(this->GetFullRotator_MemoizedValue).Data.Z = uVar2;
  *(undefined4 *)((int)&(this->GetFullRotator_MemoizedValue).Data.Z + 4) = uVar3;
  uVar1 = *(undefined4 *)((int)&(param_1->GetFullRotator_MemoizedValue).Data.W + 4);
  bVar8 = (param_1->GetFullRotator_MemoizedValue).IsValidData;
  uVar7 = *(undefined3 *)((char *)&(param_1->GetFullRotator_MemoizedValue) + 0x21);
  uVar2 = *(undefined4 *)((char *)&(param_1->GetFullRotator_MemoizedValue) + 0x24);
  *(undefined4 *)&(this->GetFullRotator_MemoizedValue).Data.W =
       *(undefined4 *)&(param_1->GetFullRotator_MemoizedValue).Data.W;
  *(undefined4 *)((int)&(this->GetFullRotator_MemoizedValue).Data.W + 4) = uVar1;
  (this->GetFullRotator_MemoizedValue).IsValidData = bVar8;
  *(undefined3 *)((char *)&(this->GetFullRotator_MemoizedValue) + 0x21) = uVar7;
  *(undefined4 *)((char *)&(this->GetFullRotator_MemoizedValue) + 0x24) = uVar2;
  (this->GetVelocityStateConstant_km__s_MemoizedValue).Data =
       (param_1->GetVelocityStateConstant_km__s_MemoizedValue).Data;
  uVar7 = *(undefined3 *)((char *)&(param_1->GetVelocityStateConstant_km__s_MemoizedValue) + 0x9);
  uVar1 = *(undefined4 *)((char *)&(param_1->GetVelocityStateConstant_km__s_MemoizedValue) + 0xc);
  uVar2 = *(undefined4 *)&(param_1->GetEccentricityComplement_MemoizedValue).Data;
  uVar3 = *(undefined4 *)((int)&(param_1->GetEccentricityComplement_MemoizedValue).Data + 4);
  (this->GetVelocityStateConstant_km__s_MemoizedValue).IsValidData =
       (param_1->GetVelocityStateConstant_km__s_MemoizedValue).IsValidData;
  *(undefined3 *)((char *)&(this->GetVelocityStateConstant_km__s_MemoizedValue) + 0x9) = uVar7;
  *(undefined4 *)((char *)&(this->GetVelocityStateConstant_km__s_MemoizedValue) + 0xc) = uVar1;
  *(undefined4 *)&(this->GetEccentricityComplement_MemoizedValue).Data = uVar2;
  *(undefined4 *)((int)&(this->GetEccentricityComplement_MemoizedValue).Data + 4) = uVar3;
  uVar7 = *(undefined3 *)((char *)&(param_1->GetEccentricityComplement_MemoizedValue) + 0x9);
  uVar1 = *(undefined4 *)((char *)&(param_1->GetEccentricityComplement_MemoizedValue) + 0xc);
  uVar2 = *(undefined4 *)&(param_1->GetEccentricityPeriapsisRoot_MemoizedValue).Data;
  uVar3 = *(undefined4 *)((int)&(param_1->GetEccentricityPeriapsisRoot_MemoizedValue).Data + 4);
  (this->GetEccentricityComplement_MemoizedValue).IsValidData =
       (param_1->GetEccentricityComplement_MemoizedValue).IsValidData;
  *(undefined3 *)((char *)&(this->GetEccentricityComplement_MemoizedValue) + 0x9) = uVar7;
  *(undefined4 *)((char *)&(this->GetEccentricityComplement_MemoizedValue) + 0xc) = uVar1;
  *(undefined4 *)&(this->GetEccentricityPeriapsisRoot_MemoizedValue).Data = uVar2;
  *(undefined4 *)((int)&(this->GetEccentricityPeriapsisRoot_MemoizedValue).Data + 4) = uVar3;
  uVar7 = *(undefined3 *)((char *)&(param_1->GetEccentricityPeriapsisRoot_MemoizedValue) + 0x9);
  uVar1 = *(undefined4 *)((char *)&(param_1->GetEccentricityPeriapsisRoot_MemoizedValue) + 0xc);
  uVar2 = *(undefined4 *)&(param_1->GetEccentricityApoapsisRoot_MemoizedValue).Data;
  uVar3 = *(undefined4 *)((int)&(param_1->GetEccentricityApoapsisRoot_MemoizedValue).Data + 4);
  (this->GetEccentricityPeriapsisRoot_MemoizedValue).IsValidData =
       (param_1->GetEccentricityPeriapsisRoot_MemoizedValue).IsValidData;
  *(undefined3 *)((char *)&(this->GetEccentricityPeriapsisRoot_MemoizedValue) + 0x9) = uVar7;
  *(undefined4 *)((char *)&(this->GetEccentricityPeriapsisRoot_MemoizedValue) + 0xc) = uVar1;
  *(undefined4 *)&(this->GetEccentricityApoapsisRoot_MemoizedValue).Data = uVar2;
  *(undefined4 *)((int)&(this->GetEccentricityApoapsisRoot_MemoizedValue).Data + 4) = uVar3;
  uVar7 = *(undefined3 *)((char *)&(param_1->GetEccentricityApoapsisRoot_MemoizedValue) + 0x9);
  uVar1 = *(undefined4 *)((char *)&(param_1->GetEccentricityApoapsisRoot_MemoizedValue) + 0xc);
  iVar4 = param_1[1]._pad_0x0_0;
  iVar5 = param_1[1]._pad_0x0_0;
  (this->GetEccentricityApoapsisRoot_MemoizedValue).IsValidData =
       (param_1->GetEccentricityApoapsisRoot_MemoizedValue).IsValidData;
  *(undefined3 *)((char *)&(this->GetEccentricityApoapsisRoot_MemoizedValue) + 0x9) = uVar7;
  *(undefined4 *)((char *)&(this->GetEccentricityApoapsisRoot_MemoizedValue) + 0xc) = uVar1;
  this[1]._pad_0x0_0 = iVar4;
  this[1]._pad_0x0_0 = iVar5;
  return this;
}


//==== 000073ed40 0073ed40_GetAllNodes ====
// decompiled by BatchDecomp @ 0073ed40 name=GetAllNodes conv=__thiscall body=218

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Darray<struct ItineraryNode> __thiscall Itinerary__GetAllNodes(void)const  */

void __thiscall Itinerary__GetAllNodes(Itinerary *this)

{
  undefined4 stack0xfffffffc;
  Darray_L_ItineraryNode_G_ *pDVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  ItineraryNode *pIVar5;
  Darray_L_struct_ItineraryNode_G_ *in_stack_00000004;
  int local_14;
  Itinerary *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pDVar1 = &this->ItineraryNodes;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  local_10 = this;
  iVar4 = (**(code **)(*(int *)pDVar1 + 0xc))();
  util_Darray_struct_ItineraryNode_Darray_struct_ItineraryNode__o2(in_stack_00000004,iVar4);
  local_c = 0;
  iVar4 = (**(code **)(*(int *)pDVar1 + 0xc))();
  if (local_c < iVar4) {
    do {
      iVar4 = (**(code **)*(int *)pDVar1)(&local_c);
      dVar2 = *(double *)(iVar4 + 0x70);
      if ((this->TimeRange_s).Upper <= dVar2) {
        if (this->ActiveLowerTime_s <= dVar2 && dVar2 != this->ActiveLowerTime_s) break;
        pIVar5 = (ItineraryNode *)(**(code **)*(int *)pDVar1)(&local_c);
        iVar4 = *(int *)(in_stack_00000004 + 8);
        local_14 = iVar4 + 1;
        util__Darray_struct_ItineraryNode___SetSize(in_stack_00000004,&local_14);
        bVar3 = util__Darray_struct_ItineraryNode___CheckSize(in_stack_00000004,iVar4);
        this = local_10;
        if (bVar3) {
          ItineraryNode__operator_((ItineraryNode *)
                     (*(int *)(in_stack_00000004 + 8) * 0x150 +
                     *(int *)(in_stack_00000004 + 4) + -0x150),pIVar5);
          this = local_10;
        }
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(*(int *)pDVar1 + 0xc))();
    } while (local_c < iVar4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000073ee20 0073ee20_GetAllNodesIncludingPastNode ====
// decompiled by BatchDecomp @ 0073ee20 name=GetAllNodesIncludingPastNode conv=__thiscall body=271

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Darray<struct ItineraryNode> __thiscall
   Itinerary__GetAllNodesIncludingPastNode(void)const  */

void __thiscall Itinerary__GetAllNodesIncludingPastNode(Itinerary *this)

{
  undefined4 stack0xfffffffc;
  Darray_L_ItineraryNode_G_ *pDVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  ItineraryNode *pIVar5;
  Darray_L_struct_ItineraryNode_G_ *in_stack_00000004;
  int local_18;
  Itinerary *local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pDVar1 = &this->ItineraryNodes;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  local_14 = this;
  iVar4 = (**(code **)(*(int *)pDVar1 + 0xc))();
  util_Darray_struct_ItineraryNode_Darray_struct_ItineraryNode__o2(in_stack_00000004,iVar4);
  local_c = 0;
  iVar4 = (**(code **)(*(int *)pDVar1 + 0xc))();
  if (local_c < iVar4) {
    do {
      local_10 = (**(code **)*(int *)pDVar1)(&local_c);
      iVar4 = (**(code **)(*(int *)pDVar1 + 0xc))();
      local_18 = local_c + 1;
      if (iVar4 + -1 <= local_c + 1) {
        local_18 = iVar4 + -1;
      }
      iVar4 = (**(code **)*(int *)pDVar1)(&local_18);
      dVar2 = (this->TimeRange_s).Upper;
      if (dVar2 < *(double *)(iVar4 + 0x70) || dVar2 == *(double *)(iVar4 + 0x70)) {
        if (this->ActiveLowerTime_s <= *(double *)(local_10 + 0x70) &&
            *(double *)(local_10 + 0x70) != this->ActiveLowerTime_s) break;
        pIVar5 = (ItineraryNode *)(**(code **)*(int *)pDVar1)(&local_c);
        iVar4 = *(int *)(in_stack_00000004 + 8);
        local_10 = iVar4 + 1;
        util__Darray_struct_ItineraryNode___SetSize(in_stack_00000004,&local_10);
        bVar3 = util__Darray_struct_ItineraryNode___CheckSize(in_stack_00000004,iVar4);
        this = local_14;
        if (bVar3) {
          ItineraryNode__operator_((ItineraryNode *)
                     (*(int *)(in_stack_00000004 + 8) * 0x150 +
                     *(int *)(in_stack_00000004 + 4) + -0x150),pIVar5);
          this = local_14;
        }
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(*(int *)pDVar1 + 0xc))();
    } while (local_c < iVar4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000073fca0 0073fca0_GetConsolidatedNodesWithBurns ====
// decompiled by BatchDecomp @ 0073fca0 name=GetConsolidatedNodesWithBurns conv=__thiscall body=350

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Darray<struct ItineraryNode> __thiscall
   Itinerary__GetConsolidatedNodesWithBurns(void)const  */

void __thiscall Itinerary__GetConsolidatedNodesWithBurns(Itinerary *this)

{
  undefined4 stack0xfffffffc;
  Darray_L_ItineraryNode_G_ *pDVar1;
  ReferenceController *this_00;
  int iVar2;
  bool bVar3;
  int iVar4;
  ItineraryNode *pIVar5;
  double dVar6;
  Darray_L_struct_ItineraryNode_G_ *in_stack_00000004;
  int local_14;
  Itinerary *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pDVar1 = &this->ItineraryNodes;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  local_10 = this;
  iVar4 = (**(code **)(*(int *)pDVar1 + 0xc))();
  util_Darray_struct_ItineraryNode_Darray_struct_ItineraryNode__o2(in_stack_00000004,iVar4);
  local_14 = 0;
  local_c = 0;
  iVar4 = (**(code **)(*(int *)pDVar1 + 0xc))();
  if (local_c < iVar4) {
    do {
      iVar4 = (**(code **)*(int *)pDVar1)(&local_c);
      this_00 = (local_10->ParentFleet).Controller;
      if ((this_00 != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid(this_00), !bVar3)) {
        (local_10->ParentFleet).Pointer = (Fleet *)0x0;
      }
      dVar6 = StrategicManager__GetTimeSinceJ2000_s(((local_10->ParentFleet).Pointer)->ParentStrategic);
      if (((dVar6 < *(double *)(iVar4 + 0x70) || dVar6 == *(double *)(iVar4 + 0x70)) &&
          (((NAN(*(double *)(iVar4 + 0x78)) == (*(double *)(iVar4 + 0x78) == 0.0) ||
            (NAN(*(double *)(iVar4 + 0x80)) == (*(double *)(iVar4 + 0x80) == 0.0))) ||
           (NAN(*(double *)(iVar4 + 0x88)) == (*(double *)(iVar4 + 0x88) == 0.0))))) &&
         ((*(int *)(iVar4 + 0xa8) == 0 || (*(int *)(iVar4 + 0xa8) != local_14)))) {
        pIVar5 = (ItineraryNode *)(**(code **)*(int *)pDVar1)(&local_c);
        iVar2 = *(int *)(in_stack_00000004 + 8);
        local_14 = iVar2 + 1;
        util__Darray_struct_ItineraryNode___SetSize(in_stack_00000004,&local_14);
        bVar3 = util__Darray_struct_ItineraryNode___CheckSize(in_stack_00000004,iVar2);
        if (bVar3) {
          ItineraryNode__operator_((ItineraryNode *)
                     (*(int *)(in_stack_00000004 + 8) * 0x150 +
                     *(int *)(in_stack_00000004 + 4) + -0x150),pIVar5);
        }
        local_14 = *(int *)(iVar4 + 0xa8);
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(*(int *)pDVar1 + 0xc))();
    } while (local_c < iVar4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000741d80 00741d80_GetInterpolatedNodeRefStateAndTime ====
// decompiled by BatchDecomp @ 00741d80 name=GetInterpolatedNodeRefStateAndTime conv=__thiscall body=164

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct util::tuple2<struct util::Vec3<double>,double> __thiscall
   Itinerary__GetInterpolatedNodeRefStateAndTime(struct ItineraryNode const &,struct ItineraryNode
   const &,double)const  */

void __thiscall
Itinerary__GetInterpolatedNodeRefStateAndTime(Itinerary *this,ItineraryNode *param_1,ItineraryNode *param_2,double param_3)

{
  undefined4 stack0xffffffc0;
  undefined4 stack0xfffffffc;
  ReferenceController *pRVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Vec3_L_double_G_ VVar4;
  bool bVar5;
  Vec3_L_double_G_ *pVVar6;
  undefined4 unaff_ESI;
  Vec3_L_double_G_ local_58;
  ReferenceController *pRStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  double local_30;
  double local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  GetInterpolatedNodeActualStateAndTime(this,(ItineraryNode *)&stack0xffffffc0,param_2,param_3);
  pRVar1 = (this->ParentFleet).Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    bVar5 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (!bVar5) {
      (this->ParentFleet).Pointer = (Fleet *)0x0;
    }
  }
  ((slice_view *)&VVar4.X)->_4_4_ = uStack_38;
  ((slice_view *)&VVar4.X)->_0_4_ = pRStack_3c;
  ((slice_view *)&VVar4.Y)->_0_4_ = uStack_34;
  ((slice_view *)&VVar4.Y)->_4_4_ = *(undefined4 *)&local_30;
  ((slice_view *)&VVar4.Z)->_0_4_ = (int)((ulonglong)local_30 >> 0x20);
  ((slice_view *)&VVar4.Z)->_4_4_ = *(undefined4 *)&local_10;
  pVVar6 = StrategicManager__GetReferenceShiftedPosition_km(((this->ParentFleet).Pointer)->ParentStrategic,&local_58,VVar4,
                      (double)CONCAT44(unaff_ESI,(int)((ulonglong)local_10 >> 0x20)));
  pRVar1 = *(ReferenceController **)((int)&pVVar6->X + 4);
  uVar2 = *(undefined4 *)&pVVar6->Y;
  uVar3 = *(undefined4 *)((int)&pVVar6->Y + 4);
  (param_1->Parent).Pointer = *(Fleet **)&pVVar6->X;
  (param_1->Parent).Controller = pRVar1;
  *(undefined4 *)&(param_1->LastState).Position.X = uVar2;
  *(undefined4 *)((int)&(param_1->LastState).Position.X + 4) = uVar3;
  (param_1->LastState).Position.Y = pVVar6->Z;
  (param_1->LastState).Position.Z = local_10;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000742fa0 00742fa0_GetRelativeSweepLine ====
// decompiled by BatchDecomp @ 00742fa0 name=GetRelativeSweepLine conv=__thiscall body=211

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct util__Line3_L_double_G_ __thiscall ItineraryNode__GetRelativeSweepLine(class
   util::WeakPtr<class CelestialObject> const &)const  */

Line3_L_double_G_ * __thiscall
ItineraryNode__GetRelativeSweepLine(ItineraryNode *this,Line3_L_double_G_ *__return_storage_ptr__,
          WeakPtr_L_class_CelestialObject_G_ *param_1)

{
  CelestialObject *pCVar1;
  CelestialObject *pCVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 local_64[48];
  undefined1 local_34[48];
  
  if (*(ReferenceController **)(param_1 + 4) != (ReferenceController *)0x0) {
    bVar6 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(param_1 + 4));
    if (!bVar6) {
      *(undefined4 *)param_1 = 0;
    }
  }
  pCVar1 = *(CelestialObject **)param_1;
  if (*(ReferenceController **)(param_1 + 4) != (ReferenceController *)0x0) {
    bVar6 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(param_1 + 4));
    if (!bVar6) {
      *(undefined4 *)param_1 = 0;
    }
  }
  pCVar2 = *(CelestialObject **)param_1;
  puVar7 = (undefined4 *)
           CelestialObject__GetStateRelativeToThis(pCVar1,local_34,*(undefined4 *)&(this->State).Position.X,
                      *(undefined4 *)((int)&(this->State).Position.X + 4),
                      *(undefined4 *)&(this->State).Position.Y,
                      *(undefined4 *)((int)&(this->State).Position.Y + 4),
                      *(undefined4 *)&(this->State).Position.Z,
                      *(undefined4 *)((int)&(this->State).Position.Z + 4),
                      *(undefined4 *)&(this->State).Velocity.X,
                      *(undefined4 *)((int)&(this->State).Velocity.X + 4),
                      *(undefined4 *)&(this->State).Velocity.Y,
                      *(undefined4 *)((int)&(this->State).Velocity.Y + 4),
                      *(undefined4 *)&(this->State).Velocity.Z,
                      *(undefined4 *)((int)&(this->State).Velocity.Z + 4),this->TimeSinceJ2000_s);
  puVar8 = (undefined4 *)
           CelestialObject__GetStateRelativeToThis(pCVar2,local_64,*(undefined4 *)&(this->LastState).Position.X,
                      *(undefined4 *)((int)&(this->LastState).Position.X + 4),
                      *(undefined4 *)&(this->LastState).Position.Y,
                      *(undefined4 *)((int)&(this->LastState).Position.Y + 4),
                      *(undefined4 *)&(this->LastState).Position.Z,
                      *(undefined4 *)((int)&(this->LastState).Position.Z + 4),
                      *(undefined4 *)&(this->LastState).Velocity.X,
                      *(undefined4 *)((int)&(this->LastState).Velocity.X + 4),
                      *(undefined4 *)&(this->LastState).Velocity.Y,
                      *(undefined4 *)((int)&(this->LastState).Velocity.Y + 4),
                      *(undefined4 *)&(this->LastState).Velocity.Z,
                      *(undefined4 *)((int)&(this->LastState).Velocity.Z + 4),
                      this->LastTimeSinceJ2000_s);
  uVar3 = puVar8[1];
  uVar4 = puVar8[2];
  uVar5 = puVar8[3];
  *(undefined4 *)&(__return_storage_ptr__->A).X = *puVar8;
  *(undefined4 *)((int)&(__return_storage_ptr__->A).X + 4) = uVar3;
  *(undefined4 *)&(__return_storage_ptr__->A).Y = uVar4;
  *(undefined4 *)((int)&(__return_storage_ptr__->A).Y + 4) = uVar5;
  (__return_storage_ptr__->A).Z = *(double *)(puVar8 + 4);
  uVar3 = puVar7[1];
  uVar4 = puVar7[2];
  uVar5 = puVar7[3];
  *(undefined4 *)&(__return_storage_ptr__->B).X = *puVar7;
  *(undefined4 *)((int)&(__return_storage_ptr__->B).X + 4) = uVar3;
  *(undefined4 *)&(__return_storage_ptr__->B).Y = uVar4;
  *(undefined4 *)((int)&(__return_storage_ptr__->B).Y + 4) = uVar5;
  (__return_storage_ptr__->B).Z = *(double *)(puVar7 + 4);
  return __return_storage_ptr__;
}


//==== 0000743d60 00743d60_GetTimeRangeTilConsolidatedBurnNode_s ====
// decompiled by BatchDecomp @ 00743d60 name=GetTimeRangeTilConsolidatedBurnNode_s conv=__thiscall body=377

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct Range_L_double_G_ __thiscall
   Itinerary__GetTimeRangeTilConsolidatedBurnNode_s(struct ItineraryNode const &)const  */

Range_L_double_G_ * __thiscall
Itinerary__GetTimeRangeTilConsolidatedBurnNode_s(Itinerary *this,Range_L_double_G_ *__return_storage_ptr__,ItineraryNode *param_1)

{
  undefined4 stack0xfffffffc;
  ReferenceController *pRVar1;
  bool bVar2;
  int iVar3;
  ItineraryNode *pIVar4;
  ItineraryNode local_174;
  double local_24;
  undefined8 local_1c;
  Fleet *local_10;
  Fleet *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pRVar1 = (this->ParentFleet).Controller;
  local_1c = (double)CONCAT44(__return_storage_ptr__,(undefined4)local_1c);
  if ((pRVar1 != (ReferenceController *)0x0) &&
     (bVar2 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar2)) {
    (this->ParentFleet).Pointer = (Fleet *)0x0;
  }
  local_24 = StrategicManager__GetTimeSinceJ2000_s(((this->ParentFleet).Pointer)->ParentStrategic);
  local_24 = param_1->TimeSinceJ2000_s - local_24;
  if (param_1->NodeType != Default) {
    util_Darray_struct_ItineraryNode_FindIndex((Darray_L_struct_ItineraryNode_G_ *)&this->ItineraryNodes,(ItineraryNode *)&local_10);
    if ((char)local_c != '\0') {
      ItineraryNode__ItineraryNode(&local_174,param_1);
      local_c = local_10;
      iVar3 = (**(code **)(*(int *)&this->ItineraryNodes + 0xc))();
      if ((int)local_c < iVar3) {
        do {
          pIVar4 = (ItineraryNode *)(**(code **)*(int *)&this->ItineraryNodes)(&local_c);
          if (pIVar4->NodeType != param_1->NodeType) break;
          ItineraryNode__operator_(&local_174,pIVar4);
          local_c = (Fleet *)((int)&local_c->_pad_0x0_0 + 1);
          iVar3 = (**(code **)(*(int *)&this->ItineraryNodes + 0xc))();
        } while ((int)local_c < iVar3);
        __return_storage_ptr__ = ((slice_view *)&local_1c)->_4_4_;
      }
      pRVar1 = (this->ParentFleet).Controller;
      if ((pRVar1 != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar2)) {
        (this->ParentFleet).Pointer = (Fleet *)0x0;
      }
      local_1c = StrategicManager__GetTimeSinceJ2000_s(((this->ParentFleet).Pointer)->ParentStrategic);
      local_1c = local_174.TimeSinceJ2000_s - local_1c;
      __return_storage_ptr__->Lower = local_24;
      __return_storage_ptr__->Upper = local_1c;
      if (local_1c < local_24) {
        __return_storage_ptr__->Lower = local_1c;
        __return_storage_ptr__->Upper = local_24;
      }
      if (local_174.CachedNearestOrbiter.Controller != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_174.CachedNearestOrbiter.Controller);
      }
      if (local_174.CachedNearestFleet.Controller != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_174.CachedNearestFleet.Controller);
      }
      if (local_174.CachedNearestBody.Controller != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_174.CachedNearestBody.Controller);
      }
      if (local_174.CachedGravityBody.Controller != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_174.CachedGravityBody.Controller);
      }
      if (local_174.Parent.Controller != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_174.Parent.Controller);
      }
      goto LAB_00743ec4;
    }
  }
  __return_storage_ptr__->Lower = local_24;
  __return_storage_ptr__->Upper = local_24;
LAB_00743ec4:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 000074ed50 0074ed50_AttemptRecircularize ====
// decompiled by BatchDecomp @ 0074ed50 name=AttemptRecircularize conv=__thiscall body=259

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: struct FutureBurn __thiscall StrategicAI__AttemptRecircularize(class util::WeakPtr<class
   Fleet>,double)const  */

FutureBurn * __thiscall
StrategicAI__AttemptRecircularize(StrategicAI *this,FutureBurn *__return_storage_ptr__,Fleet *param_3,
          ReferenceController *param_4,undefined8 param_5)

{
  undefined4 stack0xfffffffc;
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  ReferenceController *pRVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = 0;
  if ((param_4 != (ReferenceController *)0x0) &&
     (bVar1 = util__ReferenceController__IsDataStillValid(param_4), !bVar1)) {
    param_3 = (Fleet *)0x0;
  }
  Fleet__GetBodyWeAreInHillSphereOf(param_3);
  uVar3 = (undefined4)local_10;
  pRVar4 = ((slice_view *)&local_10)->_4_4_;
  if (((slice_view *)&local_10)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(((slice_view *)&local_10)->_4_4_);
  }
  if ((param_4 != (ReferenceController *)0x0) &&
     (bVar1 = util__ReferenceController__IsDataStillValid(param_4), !bVar1)) {
    param_3 = (Fleet *)0x0;
  }
  puVar2 = (undefined4 *)Fleet__GetCurrentState(param_3);
  Astrogation__OrbitalCircularInjection_km__s(&local_28,this->Parent,param_5,*puVar2,puVar2[1],puVar2[2],puVar2[3],puVar2[4],
             puVar2[5],puVar2[6],puVar2[7],puVar2[8],puVar2[9],puVar2[10],puVar2[0xb],uVar3,pRVar4);
  *(undefined4 *)&(__return_storage_ptr__->Burn_km__s).X = local_28;
  *(undefined4 *)((int)&(__return_storage_ptr__->Burn_km__s).X + 4) = uStack_24;
  *(undefined4 *)&(__return_storage_ptr__->Burn_km__s).Y = uStack_20;
  *(undefined4 *)((int)&(__return_storage_ptr__->Burn_km__s).Y + 4) = uStack_1c;
  (__return_storage_ptr__->Burn_km__s).Z = local_18;
  __return_storage_ptr__->TimeParametricCoordinate = 0.0;
  if (((slice_view *)&local_10)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_10)->_4_4_);
  }
  if (param_4 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 0000750040 00750040_GetAlliedDroneFleets ====
// decompiled by BatchDecomp @ 00750040 name=GetAlliedDroneFleets conv=__thiscall body=294

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: class util::Darray<class util::WeakPtr<class Fleet> > __thiscall
   StrategicAI__GetAlliedDroneFleets(void)const  */

void __thiscall StrategicAI__GetAlliedDroneFleets(StrategicAI *this)

{
  undefined4 stack0xfffffffc;
  Fleet *this_00;
  ReferenceController *this_01;
  ReferenceController *this_02;
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *in_stack_00000004;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_28[16];
  int *local_18;
  int local_14;
  undefined1 local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = 0;
  piVar2 = (int *)GetAlliedFleets(this);
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  local_18 = piVar2;
  iVar3 = (**(code **)(*(int *)(uintptr_t)piVar2 + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body(in_stack_00000004,iVar3);
  local_c = 0;
  iVar3 = (**(code **)(*(int *)(uintptr_t)piVar2 + 0xc))();
  if (local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)*piVar2)(&local_c);
      if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
         !bVar1)) {
        *puVar4 = 0;
      }
      this_00 = (Fleet *)*puVar4;
      Fleet__IsDroneFleet_Memoize(this_00);
      if ((this_00->IsDroneFleet_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      if ((this_00->IsDroneFleet_MemoizedValue).Data != false) {
        iVar3 = *(int *)(in_stack_00000004 + 8);
        local_14 = iVar3 + 1;
        util__Darray_class_util__WeakPtr_class_Body_____SetSize(in_stack_00000004,&local_14);
        bVar1 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(in_stack_00000004,iVar3);
        if (bVar1) {
          this_01 = *(ReferenceController **)
                     (*(int *)(in_stack_00000004 + 4) + -4 + *(int *)(in_stack_00000004 + 8) * 8);
          iVar3 = *(int *)(in_stack_00000004 + 4) + *(int *)(in_stack_00000004 + 8) * 8;
          *(undefined4 *)(iVar3 + -8) = *puVar4;
          this_02 = (ReferenceController *)puVar4[1];
          *(ReferenceController **)(iVar3 + -4) = this_02;
          if (this_02 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this_02);
          }
          if (this_01 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(this_01);
          }
        }
      }
      piVar2 = local_18;
      local_c = local_c + 1;
      iVar3 = (**(code **)(*(int *)(uintptr_t)local_18 + 0xc))();
    } while (local_c < iVar3);
  }
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_28);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000750170 00750170_GetAlliedFleets ====
// decompiled by BatchDecomp @ 00750170 name=GetAlliedFleets conv=__thiscall body=296

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: class util::Darray<class util::WeakPtr<class Fleet> > __thiscall
   StrategicAI__GetAlliedFleets(void)const  */

void __thiscall StrategicAI__GetAlliedFleets(StrategicAI *this)

{
  undefined4 stack0xfffffffc;
  ReferenceController *this_00;
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  Faction *pFVar5;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *in_stack_00000004;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_2c[16];
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *local_1c;
  Faction *local_18;
  Fleet *local_14;
  StrategicAI *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_1c = in_stack_00000004;
  local_10 = this;
  piVar2 = (int *)StrategicManager__GetRelevantFleets(this->Parent);
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  iVar3 = (**(code **)(*(int *)(uintptr_t)piVar2 + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body(in_stack_00000004,iVar3);
  local_c = 0;
  iVar3 = (**(code **)(*(int *)(uintptr_t)piVar2 + 0xc))();
  if (local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)*piVar2)(&local_c);
      if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
         !bVar1)) {
        *puVar4 = 0;
      }
      local_14 = (Fleet *)*puVar4;
      if (local_10->ControlsAllies == false) {
        local_18 = StrategicManager__GetEnemyAlliance(local_10->Parent);
      }
      else {
        local_18 = StrategicManager__GetPlayerAlliance(local_10->Parent);
      }
      pFVar5 = Fleet__GetAlliance(local_14);
      if (pFVar5 == local_18) {
        iVar3 = *(int *)(in_stack_00000004 + 8);
        local_14 = (Fleet *)(iVar3 + 1);
        util__Darray_class_util__WeakPtr_class_Body_____SetSize(local_1c,(int *)&local_14);
        in_stack_00000004 = local_1c;
        bVar1 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(local_1c,iVar3);
        if (bVar1) {
          iVar3 = *(int *)(in_stack_00000004 + 4) + *(int *)(in_stack_00000004 + 8) * 8;
          local_14 = *(Fleet **)(iVar3 + -4);
          *(undefined4 *)(iVar3 + -8) = *puVar4;
          this_00 = (ReferenceController *)puVar4[1];
          *(ReferenceController **)(iVar3 + -4) = this_00;
          if (this_00 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this_00);
          }
          if (local_14 != (Fleet *)0x0) {
            util__ReferenceController__ReleaseWeakReference((ReferenceController *)local_14);
          }
        }
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*(int *)(uintptr_t)piVar2 + 0xc))();
    } while (local_c < iVar3);
  }
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_2c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007502a0 007502a0_GetAlliedPayloadFleets ====
// decompiled by BatchDecomp @ 007502a0 name=GetAlliedPayloadFleets conv=__thiscall body=294

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: class util::Darray<class util::WeakPtr<class Fleet> > __thiscall
   StrategicAI__GetAlliedPayloadFleets(void)const  */

void __thiscall StrategicAI__GetAlliedPayloadFleets(StrategicAI *this)

{
  undefined4 stack0xfffffffc;
  Fleet *this_00;
  ReferenceController *this_01;
  ReferenceController *this_02;
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *in_stack_00000004;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_28[16];
  int *local_18;
  int local_14;
  undefined1 local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = 0;
  piVar2 = (int *)GetAlliedFleets(this);
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  local_18 = piVar2;
  iVar3 = (**(code **)(*(int *)(uintptr_t)piVar2 + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body(in_stack_00000004,iVar3);
  local_c = 0;
  iVar3 = (**(code **)(*(int *)(uintptr_t)piVar2 + 0xc))();
  if (local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)*piVar2)(&local_c);
      if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
         !bVar1)) {
        *puVar4 = 0;
      }
      this_00 = (Fleet *)*puVar4;
      Fleet__IsMissileFleet_Memoize(this_00);
      if ((this_00->IsMissileFleet_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      if ((this_00->IsMissileFleet_MemoizedValue).Data != false) {
        iVar3 = *(int *)(in_stack_00000004 + 8);
        local_14 = iVar3 + 1;
        util__Darray_class_util__WeakPtr_class_Body_____SetSize(in_stack_00000004,&local_14);
        bVar1 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(in_stack_00000004,iVar3);
        if (bVar1) {
          this_01 = *(ReferenceController **)
                     (*(int *)(in_stack_00000004 + 4) + -4 + *(int *)(in_stack_00000004 + 8) * 8);
          iVar3 = *(int *)(in_stack_00000004 + 4) + *(int *)(in_stack_00000004 + 8) * 8;
          *(undefined4 *)(iVar3 + -8) = *puVar4;
          this_02 = (ReferenceController *)puVar4[1];
          *(ReferenceController **)(iVar3 + -4) = this_02;
          if (this_02 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this_02);
          }
          if (this_01 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(this_01);
          }
        }
      }
      piVar2 = local_18;
      local_c = local_c + 1;
      iVar3 = (**(code **)(*(int *)(uintptr_t)local_18 + 0xc))();
    } while (local_c < iVar3);
  }
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_28);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000750fd0 00750fd0_GetOurRelativeState ====
// decompiled by BatchDecomp @ 00750fd0 name=GetOurRelativeState conv=__thiscall body=191

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct util::PhysicalState<struct util::Vec3<double> > __thiscall
   OrbitalInterception__GetOurRelativeState(void)const  */

undefined4 __thiscall OrbitalInterception__GetOurRelativeState(OrbitalInterception *this)

{
  ReferenceController *pRVar1;
  bool bVar2;
  undefined4 in_stack_00000004;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  CelestialObject *local_c;
  ReferenceController *local_8;
  
  pRVar1 = (this->OurFleet).Controller;
  if ((pRVar1 != (ReferenceController *)0x0) &&
     (bVar2 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar2)) {
    (this->OurFleet).Pointer = (Fleet *)0x0;
  }
  Fleet__GetStateAt((this->OurFleet).Pointer,
                    (double)CONCAT44(SUB84(this->TimeSinceJ2000_s,0),&local_3c));
  pRVar1 = (this->OurFleet).Controller;
  if ((pRVar1 != (ReferenceController *)0x0) &&
     (bVar2 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar2)) {
    (this->OurFleet).Pointer = (Fleet *)0x0;
  }
  Fleet__GetBodyWeAreInHillSphereOf((this->OurFleet).Pointer);
  if ((local_8 != (ReferenceController *)0x0) &&
     (bVar2 = util__ReferenceController__IsDataStillValid(local_8), !bVar2)) {
    local_c = (CelestialObject *)0x0;
  }
  CelestialObject__GetStateRelativeToThis(local_c,in_stack_00000004,local_3c,uStack_38,uStack_34,uStack_30,local_2c,uStack_28,
             uStack_24,uStack_20,local_1c,uStack_18,uStack_14,uStack_10,
             SUB84(this->TimeSinceJ2000_s,0),(int)((ulonglong)this->TimeSinceJ2000_s >> 0x20));
  if (local_8 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_8);
  }
  return in_stack_00000004;
}


//==== 00007513f0 007513f0_GetTargetRelativeState ====
// decompiled by BatchDecomp @ 007513f0 name=GetTargetRelativeState conv=__thiscall body=191

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct util::PhysicalState<struct util::Vec3<double> > __thiscall
   OrbitalInterception__GetTargetRelativeState(void)const  */

undefined4 __thiscall OrbitalInterception__GetTargetRelativeState(OrbitalInterception *this)

{
  ReferenceController *pRVar1;
  bool bVar2;
  undefined4 in_stack_00000004;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  CelestialObject *local_c;
  ReferenceController *local_8;
  
  pRVar1 = (this->TargetFleet).Controller;
  if ((pRVar1 != (ReferenceController *)0x0) &&
     (bVar2 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar2)) {
    (this->TargetFleet).Pointer = (Fleet *)0x0;
  }
  Fleet__GetStateAt((this->TargetFleet).Pointer,
                    (double)CONCAT44(SUB84(this->TimeSinceJ2000_s,0),&local_3c));
  pRVar1 = (this->OurFleet).Controller;
  if ((pRVar1 != (ReferenceController *)0x0) &&
     (bVar2 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar2)) {
    (this->OurFleet).Pointer = (Fleet *)0x0;
  }
  Fleet__GetBodyWeAreInHillSphereOf((this->OurFleet).Pointer);
  if ((local_8 != (ReferenceController *)0x0) &&
     (bVar2 = util__ReferenceController__IsDataStillValid(local_8), !bVar2)) {
    local_c = (CelestialObject *)0x0;
  }
  CelestialObject__GetStateRelativeToThis(local_c,in_stack_00000004,local_3c,uStack_38,uStack_34,uStack_30,local_2c,uStack_28,
             uStack_24,uStack_20,local_1c,uStack_18,uStack_14,uStack_10,
             SUB84(this->TimeSinceJ2000_s,0),(int)((ulonglong)this->TimeSinceJ2000_s >> 0x20));
  if (local_8 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_8);
  }
  return in_stack_00000004;
}


//==== 0000751920 00751920_IsCollisionImminent ====
// decompiled by BatchDecomp @ 00751920 name=IsCollisionImminent conv=__thiscall body=394

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall StrategicAI__IsCollisionImminent(class util::WeakPtr<class Fleet>,struct
   FixedOrbit const &,double,double)const  */

bool __thiscall
StrategicAI__IsCollisionImminent(undefined4 param_1,Fleet *param_2,ReferenceController *param_3,FixedOrbit *param_4,
          double param_5,double param_6)

{
  undefined4 stack0xfffffffc;
  Maybe_L_double_G_ MVar1;
  Range_L_double_G_ RVar2;
  Range_L_double_G_ RVar3;
  bool bVar4;
  bool bVar5;
  CelestialObject *this;
  undefined1 uVar6;
  undefined4 unaff_ESI;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  undefined8 local_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = 0;
  if ((param_3 != (ReferenceController *)0x0) &&
     (bVar4 = util__ReferenceController__IsDataStillValid(param_3), !bVar4)) {
    param_2 = (Fleet *)0x0;
  }
  puVar12 = &local_10;
  uVar11 = 0x751964;
  Fleet__GetBodyWeAreInHillSphereOf(param_2);
  uVar9 = *(undefined4 *)&param_5;
  uVar10 = *(undefined4 *)((char *)&param_5 + 4);
  uVar11 = CONCAT31((int3)((uint)uVar11 >> 8),1);
  if ((param_3 != (ReferenceController *)0x0) &&
     (bVar4 = util__ReferenceController__IsDataStillValid(param_3), !bVar4)) {
    param_2 = (Fleet *)0x0;
  }
  ((slice_view *)&MVar1.Data)->_4_4_ = uVar10;
  ((slice_view *)&MVar1.Data)->_0_4_ = uVar9;
  ((slice_view *)&MVar1)->_8_4_ = uVar11;
  ((slice_view *)&MVar1)->_12_4_ = puVar12;
  dVar8 = Fleet__GetOrbitalHeight_km(param_2,MVar1);
  if (((ReferenceController *)(param_4->Elements)._pad_0x0_0 == ((slice_view *)&local_10)->_4_4_) &&
     ((CelestialObject *)(param_4->OrbitedBody).Controller == (CelestialObject *)local_10)) {
    bVar4 = false;
    FixedOrbit__GetOrbitalPeriod_s_Memoize(param_4);
    if (*(char *)&(param_4->GetFullRotator_MemoizedValue).Data.X == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar8 = *(double *)&(param_4->GetOrbitalPeriod_s_MemoizedValue).IsValidData;
  }
  else {
    bVar4 = true;
    this = (CelestialObject *)local_10;
    if (((slice_view *)&local_10)->_4_4_ != (ReferenceController *)0x0) {
      bVar5 = util__ReferenceController__IsDataStillValid(((slice_view *)&local_10)->_4_4_);
      this = (CelestialObject *)local_10;
      if (!bVar5) {
        this = (CelestialObject *)0x0;
      }
      local_10 = CONCAT44(((slice_view *)&local_10)->_4_4_,this);
    }
    dVar8 = CelestialObject__GetCircularOrbitalPeriod_s(this,dVar8);
  }
  local_20 = param_5;
  param_6 = param_5 + param_6;
  dVar7 = param_6;
  if (param_6 < param_5) {
    dVar7 = param_5;
    local_20 = param_6;
  }
  dVar7 = dVar8 * /*3fb999999999999a*/0.1 + dVar7;
  uStack_18 = *(undefined4 *)&dVar7;
  uStack_14 = *(undefined4 *)((char *)&dVar7 + 4);
  ((slice_view *)&RVar2.Upper)->_0_4_ = uStack_18;
  RVar2.Lower = local_20;
  ((slice_view *)&RVar2.Upper)->_4_4_ = uStack_14;
  bVar5 = FixedOrbit__IsCollisionImminent(param_4,RVar2);
  if ((bVar5) ||
     ((bVar4 && (((slice_view *)&RVar3.Lower)->_4_4_ = uStack_18, ((slice_view *)&RVar3.Lower)->_0_4_ = ((slice_view *)&local_20)->_4_4_,
                ((slice_view *)&RVar3.Upper)->_0_4_ = uStack_14, ((slice_view *)&RVar3.Upper)->_4_4_ = unaff_ESI,
                bVar4 = FixedOrbit__IsCollisionImminentForOtherBody(param_4,(WeakPtr_L_class_CelestialObject_G_ *)&local_10,RVar3), bVar4
                )))) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  if (((slice_view *)&local_10)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_10)->_4_4_);
  }
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar6;
}


//==== 000075fc70 0075fc70_CheckSizeDestructive ====
// decompiled by BatchDecomp @ 0075fc70 name=CheckSizeDestructive conv=__thiscall body=353

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall util::Darray<struct WorldObject>::CheckSizeDestructive(void) */

bool __thiscall
util__Darray_struct_WorldObject___CheckSizeDestructive(Darray_L_struct_WorldObject_G_ *this)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  bool bVar6;
  uint *local_c;
  bool local_5;
  
  local_5 = true;
  uVar3 = *(uint *)(this + 8);
  bVar6 = -1 < (int)uVar3;
  bVar1 = !bVar6;
  if (bVar1) {
    local_c = (uint *)0x0;
    SetSize(this,(int *)&local_c);
    uVar3 = *(uint *)(this + 8);
  }
  local_5 = !bVar1;
  bVar1 = (int)uVar3 < 0x40000000;
  if (!bVar1) {
    local_c = (uint *)0x3fffffff;
    SetSize(this,(int *)&local_c);
    uVar3 = *(uint *)(this + 8);
    local_5 = false;
  }
  uVar5 = *(uint *)(this + 0xc);
  if ((int)uVar5 < (int)uVar3) {
    if (uVar5 == 0) {
      *(uint *)(this + 0xc) = uVar3;
      uVar5 = uVar3;
    }
    if ((int)uVar5 < (int)uVar3) {
      do {
        uVar5 = uVar5 * 2;
      } while ((int)uVar5 < (int)uVar3);
      *(uint *)(this + 0xc) = uVar5;
    }
    if (0x3fffffff < (int)uVar5) {
      *(undefined4 *)(this + 0xc) = 0x3fffffff;
      uVar5 = 0x3fffffff;
    }
    if (*(WorldObject **)(this + 4) != (WorldObject *)0x0) {
      WorldObject___vector_deleting_destructor_(*(WorldObject **)(this + 4),3);
      uVar5 = *(uint *)(this + 0xc);
    }
    *(undefined4 *)(this + 4) = 0;
    uVar3 = -(uint)((int)((ulonglong)uVar5 * 0x2b8 >> 0x20) != 0) | (uint)((ulonglong)uVar5 * 0x2b8)
    ;
    puVar2 = (uint *)operator_new__(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
    if (puVar2 == (uint *)0x0) {
      puVar4 = (uint *)0x0;
    }
    else {
      *puVar2 = uVar5;
      puVar4 = puVar2 + 1;
      if (uVar5 != 0) {
        puVar2 = puVar2 + 0xad;
        local_c = puVar4;
        do {
          *puVar4 = 0;
          puVar2[-0xab] = 0;
          puVar2[-0xaa] = 0;
          ItineraryNode__ItineraryNode((ItineraryNode *)(puVar2 + -0xa8));
          ItineraryNode__ItineraryNode((ItineraryNode *)(puVar2 + -0x54));
          puVar4 = puVar4 + 0xae;
          puVar2[0] = 0;
          puVar2[1] = 0;
          puVar2 = puVar2 + 0xae;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
        *(uint **)(this + 4) = local_c;
        return local_5;
      }
    }
    *(uint **)(this + 4) = puVar4;
    return local_5;
  }
  return bVar1 && bVar6;
}


//==== 000076bbe0 0076bbe0_SetAll ====
#undef t /* auto(v2): compat 僵尸宏撞成员名 */

// decompiled by BatchDecomp @ 0076bbe0 name=SetAll conv=__thiscall body=149

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall util::Darray<struct WorldObject>::SetAll(struct WorldObject const
   &) */

void __thiscall
util__Darray_struct_WorldObject___SetAll(Darray_L_struct_WorldObject_G_ *this,WorldObject *param_1)

{
  ReferenceController *this_00;
  ReferenceController *this_01;
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this + 4);
  if (puVar1 != puVar1 + *(int *)(this + 8) * 0xae) {
    do {
      this_00 = (ReferenceController *)puVar1[1];
      *puVar1 = (param_1->Object).Pointer;
      this_01 = (param_1->Object).Controller;
      puVar1[1] = this_01;
      if (this_01 != (ReferenceController *)0x0) {
        ReferenceController__AddWeakReference(this_01);
      }
      if (this_00 != (ReferenceController *)0x0) {
        ReferenceController__ReleaseWeakReference(this_00);
      }
      puVar1[2] = param_1->LPointID;
      ItineraryNode__operator_((ItineraryNode *)(puVar1 + 4),&(param_1->Node).LastNode);
      ItineraryNode__operator_((ItineraryNode *)(puVar1 + 0x58),&(param_1->Node).NextNode);
      *(double *)(puVar1 + 0xac) = (param_1->Node).t;
      puVar1 = puVar1 + 0xae;
    } while (puVar1 != (undefined4 *)(*(int *)(this + 8) * 0x2b8 + *(int *)(this + 4)));
  }
  return;
}


//==== 000076c840 0076c840_SetSize ====
#undef t /* auto(v2): compat 僵尸宏撞成员名 */

// decompiled by BatchDecomp @ 0076c840 name=SetSize conv=__thiscall body=391

/* WARNING: Removing unreachable block (ram,0x0076c934) */
/* WARNING: Removing unreachable block (ram,0x0076c990) */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: void __thiscall util::Darray<struct WorldObject>::SetSize(int const &) */

void __thiscall
util__Darray_struct_WorldObject___SetSize(Darray_L_struct_WorldObject_G_ *this,int *param_1)

{
  ReferenceController *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  NodeMouseOver local_2ac;
  
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
     (puVar4 = (undefined4 *)(iVar3 * 0x2b8 + iVar2),
     puVar4 != (undefined4 *)(*(int *)(this + 8) * 0x2b8 + iVar2))) {
    do {
      ItineraryNode__ItineraryNode(&local_2ac.LastNode);
      ItineraryNode__ItineraryNode(&local_2ac.NextNode);
      this_00 = (ReferenceController *)puVar4[1];
      *puVar4 = 0;
      puVar4[1] = 0;
      local_2ac.t = 0.0;
      if (this_00 != (ReferenceController *)0x0) {
        ReferenceController__ReleaseWeakReference(this_00);
      }
      puVar4[2] = 0;
      ItineraryNode__operator_((ItineraryNode *)(puVar4 + 4),&local_2ac.LastNode);
      ItineraryNode__operator_((ItineraryNode *)(puVar4 + 0x58),&local_2ac.NextNode);
      *(double *)(puVar4 + 0xac) = local_2ac.t;
      NodeMouseOver__dtor(&local_2ac);
      puVar4 = puVar4 + 0xae;
    } while (puVar4 != (undefined4 *)(*(int *)(this + 8) * 0x2b8 + *(int *)(this + 4)));
    *(int *)(this + 8) = iVar3;
    return;
  }
  *(int *)(this + 8) = iVar3;
  return;
}


//==== 0000770b20 00770b20_ActorDropdownAction ====
#undef t /* auto(v2): compat 僵尸宏撞成员名 */

// decompiled by BatchDecomp @ 00770b20 name=ActorDropdownAction conv=__thiscall body=138

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: __thiscall ActorDropdownAction__ActorDropdownAction(struct ActorDropdownAction const &)
    */

ActorDropdownAction * __thiscall
ActorDropdownAction__ActorDropdownAction(ActorDropdownAction *this,ActorDropdownAction *param_1)

{
  ReferenceController *pRVar1;
  
  (this->Data).Object.Pointer = (param_1->Data).Object.Pointer;
  pRVar1 = (param_1->Data).Object.Controller;
  (this->Data).Object.Controller = pRVar1;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar1);
  }
  (this->Data).LPointID = (param_1->Data).LPointID;
  ItineraryNode__ItineraryNode(&(this->Data).Node.LastNode,&(param_1->Data).Node.LastNode);
  ItineraryNode__ItineraryNode(&(this->Data).Node.NextNode,&(param_1->Data).Node.NextNode);
  (this->Data).Node.t = (param_1->Data).Node.t;
  this->ItineraryAction = param_1->ItineraryAction;
  (this->AdditionalFleet).Pointer = (param_1->AdditionalFleet).Pointer;
  pRVar1 = (param_1->AdditionalFleet).Controller;
  (this->AdditionalFleet).Controller = pRVar1;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar1);
  }
  return this;
}


//==== 0000771700 00771700_operator_ ====
// decompiled by BatchDecomp @ 00771700 name=operator= conv=__thiscall body=205

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Darray<struct ActorDropdownAction> & __thiscall util::Darray<struct
   ActorDropdownAction>::operator=(class util::Darray<struct ActorDropdownAction> const &) */

Darray_L_struct_ActorDropdownAction_G_ * __thiscall
util__Darray_struct_ActorDropdownAction___operator_(Darray_L_struct_ActorDropdownAction_G_ *this,Darray_L_struct_ActorDropdownAction_G_ *param_1)

{
  ReferenceController *this_00;
  int iVar1;
  WorldObject *this_01;
  WorldObject *pWVar2;
  int *piVar3;
  ReferenceController *local_c;
  Darray_L_struct_ActorDropdownAction_G_ *local_8;
  
  local_8 = this;
  local_c = (ReferenceController *)(**(code **)(*(int *)param_1 + 0xc))();
  SetSize(this,(int *)&local_c);
  iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
  if (iVar1 == 0) {
    (**(code **)(*(int *)this + 0x10))();
    return this;
  }
  CheckSizeDestructive(this);
  pWVar2 = *(WorldObject **)(param_1 + 4);
  this_01 = *(WorldObject **)(this + 4);
  if (pWVar2 != (WorldObject *)(*(int *)(param_1 + 8) * 0x2c8 + (int)pWVar2)) {
    piVar3 = &this_01[1].LPointID;
    do {
      WorldObject__operator_(this_01,pWVar2);
      (((WorldObject *)(piVar3 + -2))->Object).Pointer = pWVar2[1].Object.Pointer;
      local_c = (ReferenceController *)*piVar3;
      piVar3[-1] = (int)pWVar2[1].Object.Controller;
      this_00 = (ReferenceController *)pWVar2[1].LPointID;
      *piVar3 = (int)this_00;
      if (this_00 != (ReferenceController *)0x0) {
        ReferenceController__AddWeakReference(this_00);
      }
      if (local_c != (ReferenceController *)0x0) {
        ReferenceController__ReleaseWeakReference(local_c);
      }
      pWVar2 = (WorldObject *)&pWVar2[1].Node;
      this_01 = (WorldObject *)&this_01[1].Node;
      piVar3 = piVar3 + 0xb2;
    } while (pWVar2 != (WorldObject *)(*(int *)(param_1 + 8) * 0x2c8 + *(int *)(param_1 + 4)));
  }
  return local_8;
}


//==== 0000783280 00783280_GetSelectedFleet ====
// decompiled by BatchDecomp @ 00783280 name=GetSelectedFleet conv=__thiscall body=128

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::WeakPtr<class Fleet> __thiscall
   HUDItineraryInfoPanel__GetSelectedFleet(void)const  */

undefined4 * __thiscall HUDItineraryInfoPanel__GetSelectedFleet(HUDItineraryInfoPanel *this)

{
  ReferenceController *this_00;
  ReferenceController *this_01;
  undefined4 *puVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 *in_stack_00000004;
  undefined4 local_c;
  ReferenceController *local_8;
  
  local_8 = (ReferenceController *)0x0;
  puVar1 = &local_c;
  bVar3 = (StrategicManager *)this->_pad_0x0_0 == (StrategicManager *)0x0;
  if (bVar3) {
    local_c = 0;
    local_8 = (ReferenceController *)0x0;
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined4 *)StrategicManager__GetSelectedFleet((StrategicManager *)this->_pad_0x0_0);
    uVar2 = *puVar1;
  }
  this_01 = local_8;
  *in_stack_00000004 = uVar2;
  this_00 = (ReferenceController *)puVar1[1];
  in_stack_00000004[1] = this_00;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
  }
  if ((bVar3) && (this_01 != (ReferenceController *)0x0)) {
    util__ReferenceController__ReleaseWeakReference(this_01);
  }
  if ((local_8 != (ReferenceController *)0x0) && (!bVar3)) {
    util__ReferenceController__ReleaseWeakReference(local_8);
  }
  return in_stack_00000004;
}


//==== 0000787d50 00787d50_GetWorldDirection ====
// decompiled by BatchDecomp @ 00787d50 name=GetWorldDirection conv=__thiscall body=207

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: struct Vec3_L_double_G_ __thiscall HUDItineraryNodeDragger__GetWorldDirection(struct
   Vec3_L_double_G_)const  */

Vec3_L_double_G_ * __thiscall
HUDItineraryNodeDragger__GetWorldDirection(HUDItineraryNodeDragger *this,Vec3_L_double_G_ *__return_storage_ptr__,Vec3_L_double_G_ param_1)

{
  undefined4 stack0xfffffffc;
  Quaternion_L_double_G_ QVar1;
  Vec3_L_double_G_ VVar2;
  Quaternion_L_double_G_ *pQVar3;
  undefined4 unaff_EDI;
  undefined4 in_stack_00000008;
  Quaternion_L_double_G_ local_178;
  ItineraryNode local_158;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  StrategicManager__GetSelectedItineraryNode((StrategicManager *)this->_pad_0x0_0,&local_158);
  pQVar3 = StrategicManager__GetReferenceShiftedOrientation((StrategicManager *)this->_pad_0x0_0,&local_178,
                      (double)CONCAT44(unaff_EDI,((slice_view *)&local_158.TimeSinceJ2000_s)->_4_4_));
  ((slice_view *)&QVar1.W)->_4_4_ = in_stack_00000008;
  memcpy((void *)((slice_view *)&QVar1)->raw + 0, (const void *)((int)&pQVar3->X + 4), 28);
  ((slice_view *)&VVar2.Z)->_4_4_ = unaff_EDI;
  memcpy((void *)((slice_view *)&VVar2)->raw + 0, (const void *)((slice_view *)&param_1)->raw + 0, 20);
util__FUN_007caeb0(__return_storage_ptr__,QVar1,VVar2);
  if (local_158.CachedNearestOrbiter.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_158.CachedNearestOrbiter.Controller);
  }
  if (local_158.CachedNearestFleet.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_158.CachedNearestFleet.Controller);
  }
  if (local_158.CachedNearestBody.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_158.CachedNearestBody.Controller);
  }
  if (local_158.CachedGravityBody.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_158.CachedGravityBody.Controller);
  }
  if (local_158.Parent.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_158.Parent.Controller);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 00007a0a00 007a0a00_GetLocation ====
// decompiled by BatchDecomp @ 007a0a00 name=GetLocation conv=__thiscall body=176

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::Maybe<struct util::Vec3<double> > __thiscall
   BalloonPopupNodePayload__GetLocation(void)const  */

void __thiscall BalloonPopupNodePayload__GetLocation(BalloonPopupNodePayload *this)

{
  double dVar1;
  ReferenceController *pRVar2;
  Vec3_L_double_G_ VVar3;
  bool bVar4;
  Vec3_L_double_G_ *pVVar5;
  undefined4 unaff_ESI;
  undefined4 *in_stack_00000004;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  double local_2c;
  undefined1 local_24;
  Vec3_L_double_G_ local_1c;
  
  if (((this->Node).Parent.Pointer != (Fleet *)0x0) &&
     (pRVar2 = (this->Node).Parent.Controller, pRVar2 != (ReferenceController *)0x0)) {
    bVar4 = util__ReferenceController__IsDataStillValid(pRVar2);
    if (bVar4) {
      pRVar2 = (this->Node).Parent.Controller;
      if (pRVar2 != (ReferenceController *)0x0) {
        bVar4 = util__ReferenceController__IsDataStillValid(pRVar2);
        if (!bVar4) {
          (this->Node).Parent.Pointer = (Fleet *)0x0;
        }
      }
      dVar1 = (this->Node).TimeSinceJ2000_s;
      ((slice_view *)&VVar3.Z)->_4_4_ = *(undefined4 *)&dVar1;
      memcpy((void *)((slice_view *)&VVar3)->raw + 0, (const void *)((int)&(this->Node).State.Position.X + 4), 20);
      pVVar5 = StrategicManager__GetReferenceShiftedPosition_km(((this->Node).Parent.Pointer)->ParentStrategic,&local_1c,VVar3,
                          (double)CONCAT44(unaff_ESI,(int)((ulonglong)dVar1 >> 0x20)));
      local_24 = 1;
      local_3c = *(undefined4 *)&pVVar5->X;
      uStack_38 = *(undefined4 *)((int)&pVVar5->X + 4);
      uStack_34 = *(undefined4 *)&pVVar5->Y;
      uStack_30 = *(undefined4 *)((int)&pVVar5->Y + 4);
      local_2c = pVVar5->Z;
      goto LAB_007a0a8d;
    }
  }
  local_24 = 0;
  local_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  local_2c = 0.0;
LAB_007a0a8d:
  *in_stack_00000004 = local_3c;
  in_stack_00000004[1] = uStack_38;
  in_stack_00000004[2] = uStack_34;
  in_stack_00000004[3] = uStack_30;
  *(double *)(in_stack_00000004 + 4) = local_2c;
  *(undefined1 *)(in_stack_00000004 + 6) = local_24;
  return;
}


//==== 00007a0e80 007a0e80_Tick ====
// decompiled by BatchDecomp @ 007a0e80 name=Tick conv=__thiscall body=209

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall FrameOfReferenceMarker__Tick(double) */

void __thiscall FrameOfReferenceMarker__Tick(FrameOfReferenceMarker *this,double param_1)

{
  undefined4 stack0xfffffffc;
  bool bVar1;
  bool bVar2;
  WorldObject local_2c0;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  StrategicManager__GetReferenceObject((StrategicManager *)this->_pad_0x0_0,&local_2c0);
  if ((((this->LastReference).Object.Controller == local_2c0.Object.Controller) &&
      ((this->LastReference).Object.Pointer == local_2c0.Object.Pointer)) &&
     (local_2c0.LPointID == (this->LastReference).LPointID)) {
    bVar1 = ItineraryNode__IsValid(&(this->LastReference).Node.LastNode);
    bVar2 = ItineraryNode__IsValid(&local_2c0.Node.LastNode);
    if (bVar2 == bVar1) {
      UIZoomCrosshairs__Tick(&this->Zoom,param_1);
      goto LAB_007a0f25;
    }
  }
  UIZoomCrosshairs__Reset(&this->Zoom);
  WorldObject__operator_(&this->LastReference,&local_2c0);
LAB_007a0f25:
  NodeMouseOver__dtor(&local_2c0.Node);
  if (local_2c0.Object.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_2c0.Object.Controller);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007a8930 007a8930_HandleKeyInput ====
// decompiled by BatchDecomp @ 007a8930 name=HandleKeyInput conv=__thiscall body=239

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual bool __thiscall HUDStrategic__HandleKeyInput(int,enum KeyInput::Type,struct
   InputModifiers const &) */

bool __thiscall
HUDStrategic__HandleKeyInput(HUDStrategic *this,int param_1,Type param_2,InputModifiers *param_3)

{
  bool bVar1;
  Interface *this_00;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  bVar1 = StrategicManager__IsInCutscene((StrategicManager *)this->_pad_0x0_0);
  if (bVar1) {
    return false;
  }
  if (((param_2 == Pressed) || (param_2 == Repeated)) && ((param_1 == 0x101 || (param_1 == 0x20))))
  {
    util__Str_char___Str_char__o5(&local_10,"RunTurn");
    pSVar2 = &local_10;
    this_00 = UIWidget__GetInterfacer((UIWidget *)this);
    Interface__TriggerTutorialTagActioned(this_00,pSVar2);
    if (local_10.Data != (char *)0x0) {
      operator_delete__(local_10.Data);
    }
    StrategicManager__RunTurn((StrategicManager *)this->_pad_0x0_0);
    return true;
  }
  if ((param_2 == Pressed) && (param_1 - 0x30U < 10)) {
    param_2 = 0x100;
    bVar1 = InputModifiers__operator(param_3,(InputModifiers *)&param_2);
    if (bVar1) {
      HandleHotKeys(this,true,param_1);
      return true;
    }
    param_2 = Repeated;
    bVar1 = InputModifiers__operator(param_3,(InputModifiers *)&param_2);
    if (bVar1) {
      HandleHotKeys(this,false,param_1);
      return true;
    }
  }
  return false;
}


//==== 00007a9ad0 007a9ad0_GetLocation ====
// decompiled by BatchDecomp @ 007a9ad0 name=GetLocation conv=__thiscall body=390

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::Maybe<struct util::Vec2<int> > __thiscall
   GhostedUIButton__GetLocation(void)const  */

void __thiscall GhostedUIButton__GetLocation(GhostedUIButton *this)

{
  undefined4 stack0xfffffffc;
  double dVar1;
  int iVar2;
  StrategicManager *this_00;
  Vec3_L_double_G_ VVar3;
  Vec3_L_double_G_ VVar4;
  bool bVar5;
  CameraManager *this_01;
  undefined4 unaff_EDI;
  float10 fVar6;
  int *in_stack_00000004;
  double *pdVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 uVar13;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 uStack_5c;
  Vec3_L_double_G_ local_58;
  undefined1 local_40[4];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  int local_24;
  double local_20;
  undefined4 local_18;
  int iStack_14;
  int local_10;
  bool local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((this->GetLocation_km_MemoizedValue).IsValidData == false) {
    iVar2 = (this->GhostedUIButtonMemoizationHandlerInstance).ResetFunctions.Size;
    local_24 = iVar2 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->GhostedUIButtonMemoizationHandlerInstance,
               &local_24);
    bVar5 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->GhostedUIButtonMemoizationHandlerInstance,iVar2);
    if (bVar5) {
      (this->GhostedUIButtonMemoizationHandlerInstance).ResetFunctions.Data
      [(this->GhostedUIButtonMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_55606f16, GhostedUIButton__GetLocation_km_Clear);
    }
    iVar2 = this->_pad_0x0_0;
    fVar6 = (float10)(**(code **)(iVar2 + 0xdc))();
    (**(code **)(iVar2 + 0xd8))(local_40,(double)fVar6);
    this_00 = (StrategicManager *)this->_pad_0x0_0;
    fVar6 = (float10)(**(code **)(*(int *)this + 0xdc))();
    ((slice_view *)&VVar4.X)->_4_4_ = uStack_38;
    ((slice_view *)&VVar4.X)->_0_4_ = uStack_3c;
    ((slice_view *)&VVar4.Y)->_0_4_ = uStack_34;
    ((slice_view *)&VVar4.Y)->_4_4_ = (int)local_30;
    ((slice_view *)&VVar4.Z)->_0_4_ = (int)((ulonglong)local_30 >> 0x20);
    ((slice_view *)&VVar4.Z)->_4_4_ = SUB84((double)fVar6,0);
    StrategicManager__GetReferenceShiftedPosition_km(this_00,&local_58,VVar4,
               (double)CONCAT44(unaff_EDI,(int)((ulonglong)(double)fVar6 >> 0x20)));
    ((slice_view *)&uStack_60)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_60)->_1_3_[0] | (((slice_view *)&uStack_60)->_1_3_[1] << 8) | (((slice_view *)&uStack_60)->_1_3_[2] << 16)) << 8));
    local_68 = *(undefined4 *)&local_58.Z;
    uStack_64 = (undefined4)((ulonglong)local_58.Z >> 0x20);
    *(undefined4 *)&(this->GetLocation_km_MemoizedValue).Data.X = ((slice_view *)&local_58.X)->_0_4_;
    *(undefined4 *)((int)&(this->GetLocation_km_MemoizedValue).Data.X + 4) = ((slice_view *)&local_58.X)->_4_4_;
    *(undefined4 *)&(this->GetLocation_km_MemoizedValue).Data.Y = ((slice_view *)&local_58.Y)->_0_4_;
    *(undefined4 *)((int)&(this->GetLocation_km_MemoizedValue).Data.Y + 4) = ((slice_view *)&local_58.Y)->_4_4_;
    *(undefined4 *)&(this->GetLocation_km_MemoizedValue).Data.Z = local_68;
    *(undefined4 *)((int)&(this->GetLocation_km_MemoizedValue).Data.Z + 4) = uStack_64;
    *(undefined4 *)&(this->GetLocation_km_MemoizedValue).IsValidData = uStack_60;
    *(undefined4 *)((char *)&(this->GetLocation_km_MemoizedValue) + 0x1c) = uStack_5c;
    if ((this->GetLocation_km_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  uVar8 = *(undefined4 *)&(this->GetLocation_km_MemoizedValue).Data.X;
  uVar9 = *(undefined4 *)((int)&(this->GetLocation_km_MemoizedValue).Data.X + 4);
  uVar10 = *(undefined4 *)&(this->GetLocation_km_MemoizedValue).Data.Y;
  uVar11 = *(undefined4 *)((int)&(this->GetLocation_km_MemoizedValue).Data.Y + 4);
  dVar1 = (this->GetLocation_km_MemoizedValue).Data.Z;
  uVar12 = *(undefined4 *)&dVar1;
  uVar13 = (undefined1)((ulonglong)dVar1 >> 0x20);
  pdVar7 = &local_20;
  this_01 = Manager__GetCameras((Manager *)this->_pad_0x0_0);
  ((slice_view *)&VVar3.X)->_4_4_ = uVar8;
  ((slice_view *)&VVar3.X)->_0_4_ = pdVar7;
  ((slice_view *)&VVar3.Y)->_0_4_ = uVar9;
  ((slice_view *)&VVar3.Y)->_4_4_ = uVar10;
  ((slice_view *)&VVar3.Z)->_0_4_ = uVar11;
  ((slice_view *)&VVar3.Z)->_4_4_ = uVar12;
  CameraManager__GetScreenPosition(this_01,VVar3,(bool)uVar13);
  local_c = (char)local_10 == '\0';
  if (local_c) {
    iStack_14 = 0;
    local_10 = 0;
  }
  else {
    local_10 = (int)(double)CONCAT44(iStack_14,local_18);
    iStack_14 = (int)local_20;
  }
  local_c = !local_c;
  *in_stack_00000004 = iStack_14;
  in_stack_00000004[1] = local_10;
  *(bool *)(in_stack_00000004 + 2) = local_c;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007b1e40 007b1e40_Destroy ====
// decompiled by BatchDecomp @ 007b1e40 name=Destroy conv=__thiscall body=336

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__Destroy(void) */

void __thiscall Body__Destroy(Body *this)

{
  undefined4 stack0xffffffe0;
  undefined4 stack0xfffffffc;
  TacticalManager *pTVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  ReferenceController *local_c;
  
  uVar3 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = (ReferenceController *)0x0;
  iVar4 = (**(code **)(*(int *)&this->Components + 0xc))();
  if (0 < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)*(int *)&this->Components)();
      (**(code **)(*(int *)*puVar5 + 0x28))();
      local_c = (ReferenceController *)((int)&local_c->StrongReferenceCount + 1);
      iVar4 = (**(code **)(*(int *)&this->Components + 0xc))();
    } while ((int)local_c < iVar4);
  }
  pTVar1 = this->ParentTactical;
util__GetLayoutOffsetFromParent((SpacecraftComponent *)&stack0xffffffe0);
  bVar2 = TacticalManager__IsBodySelected(pTVar1);
  if (bVar2) {
    puVar5 = (undefined4 *)TacticalManager__GetTacticalUI(this->ParentTactical);
    if ((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) {
      bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]);
      if (!bVar2) {
        *puVar5 = 0;
      }
    }
    HUDTactical__RequestRebuildOfModules((HUDTactical *)*puVar5);
    if (local_c != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_c);
    }
  }
  if (this->Alliance != (Faction *)0x0) {
    Body_GetSpacecraftComponent_Memoize(this);
    if ((this->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if ((this->GetSpacecraftComponent_MemoizedValue).Data.Pointer != (SpacecraftComponent *)0x0) {
      puVar5 = (undefined4 *)TacticalManager__GetTacticalUI(this->ParentTactical);
      if ((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]);
        if (!bVar2) {
          *puVar5 = 0;
        }
      }
      HUDTactical__RequestRebuildOfShips((HUDTactical *)*puVar5);
      if (local_c != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_c);
      }
    }
  }
util__GetLayoutOffsetFromParent((SpacecraftComponent *)&stack0xffffffe0);
  TacticalManager__KillBody(this->ParentTactical);
  (this->IsAlive_MemoizedValue).Data = false;
  (this->IsAlive_MemoizedValue).IsValidData = false;
  __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007b24c0 007b24c0_GetBulletComponent_Memoize ====
extern undefined4 FUN_007ac660(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007b24c0 name=GetBulletComponent_Memoize conv=__thiscall body=405

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__GetBulletComponent_Memoize(void)const  */

void __thiscall Body__GetBulletComponent_Memoize(Body *this)

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
  MatterComponent *local_1c;
  undefined4 local_18;
  undefined4 *puStack_14;
  int iStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_20 = (ReferenceController *)0x0;
  if ((this->GetBulletComponent_MemoizedValue).IsValidData == false) {
    iVar1 = (this->BodyMemoizationHandlerInstance).ResetFunctions.Size;
    local_1c = (MatterComponent *)(iVar1 + 1);
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->BodyMemoizationHandlerInstance,
               (int *)&local_1c);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&this->BodyMemoizationHandlerInstance,
                       iVar1);
    if (bVar2) {
      (this->BodyMemoizationHandlerInstance).ResetFunctions.Data
      [(this->BodyMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_eabaeed5, Body__GetBulletComponent_Clear);
    }
    pDVar6 = &this->Components;
    pDVar5 = local_40;
    local_18 = 0;
    puStack_14 = (undefined4 *)0x0;
    iStack_10 = 0;
    uStack_c = 0;
    uVar3 = util__GetUntrackComponent_Memoize(pDVar5);
    local_1c = (MatterComponent *)((uint)local_1c & 0xffffff00);
    uVar3 = FUN_007ac660(local_30,uVar3,local_1c,pDVar5,pDVar6);
    local_1c = (MatterComponent *)((uint)local_1c & 0xffffff00);
    FUN_00526b80(&local_18,uVar3,local_1c);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_30);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_40);
    iVar1 = iStack_10;
    if (1 < iStack_10) {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\tactical\\body.cpp",0x1f8,
                      "Bullet.Num() <= 1",(char *)0x0);
      DebugBreak();
    }
    if (iVar1 == 1) {
      this_00 = (ReferenceController *)puStack_14[1];
      local_1c = (MatterComponent *)*puStack_14;
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
      local_1c = (MatterComponent *)0x0;
      this_00 = (ReferenceController *)0x0;
      this_01 = local_20;
    }
    if ((((uint)pRVar4 & 2) != 0) &&
       (local_20 = (ReferenceController *)((uint)pRVar4 & 0xfffffffd), pRVar4 = local_20,
       local_1c != (MatterComponent *)0x0)) {
      util__ReferenceController__ReleaseWeakReference((ReferenceController *)local_1c);
      pRVar4 = local_20;
    }
    if ((this_01 != (ReferenceController *)0x0) && (((uint)pRVar4 & 1) != 0)) {
      util__ReferenceController__ReleaseWeakReference(this_01);
    }
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_18);
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_00);
    }
    pRVar4 = (this->GetBulletComponent_MemoizedValue).Data.Controller;
    (this->GetBulletComponent_MemoizedValue).Data.Pointer = local_1c;
    (this->GetBulletComponent_MemoizedValue).Data.Controller = this_00;
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_00);
    }
    if (pRVar4 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(pRVar4);
    }
    (this->GetBulletComponent_MemoizedValue).IsValidData = true;
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(this_00);
      util__ReferenceController__ReleaseWeakReference(this_00);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007b3280 007b3280_GetControllableComponent_Memoize ====
extern undefined4 FUN_007ac980(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007b3280 name=GetControllableComponent_Memoize conv=__thiscall body=405

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__GetControllableComponent_Memoize(void)const  */

void __thiscall Body__GetControllableComponent_Memoize(Body *this)

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
  ControllableComponent *local_1c;
  undefined4 local_18;
  undefined4 *puStack_14;
  int iStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_20 = (ReferenceController *)0x0;
  if ((this->GetControllableComponent_MemoizedValue).IsValidData == false) {
    iVar1 = (this->BodyMemoizationHandlerInstance).ResetFunctions.Size;
    local_1c = (ControllableComponent *)(iVar1 + 1);
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->BodyMemoizationHandlerInstance,
               (int *)&local_1c);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&this->BodyMemoizationHandlerInstance,
                       iVar1);
    if (bVar2) {
      (this->BodyMemoizationHandlerInstance).ResetFunctions.Data
      [(this->BodyMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_eabaeed5, Body__GetControllableComponent_Clear);
    }
    pDVar6 = &this->Components;
    pDVar5 = local_40;
    local_18 = 0;
    puStack_14 = (undefined4 *)0x0;
    iStack_10 = 0;
    uStack_c = 0;
    uVar3 = util__GetUntrackComponent_Memoize(pDVar5);
    local_1c = (ControllableComponent *)((uint)local_1c & 0xffffff00);
    uVar3 = FUN_007ac980(local_30,uVar3,local_1c,pDVar5,pDVar6);
    local_1c = (ControllableComponent *)((uint)local_1c & 0xffffff00);
    FUN_00526b80(&local_18,uVar3,local_1c);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_30);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_40);
    iVar1 = iStack_10;
    if (1 < iStack_10) {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\tactical\\body.cpp",0x1fe,
                      "Bullet.Num() <= 1",(char *)0x0);
      DebugBreak();
    }
    if (iVar1 == 1) {
      this_00 = (ReferenceController *)puStack_14[1];
      local_1c = (ControllableComponent *)*puStack_14;
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
      local_1c = (ControllableComponent *)0x0;
      this_00 = (ReferenceController *)0x0;
      this_01 = local_20;
    }
    if ((((uint)pRVar4 & 2) != 0) &&
       (local_20 = (ReferenceController *)((uint)pRVar4 & 0xfffffffd), pRVar4 = local_20,
       local_1c != (ControllableComponent *)0x0)) {
      util__ReferenceController__ReleaseWeakReference((ReferenceController *)local_1c);
      pRVar4 = local_20;
    }
    if ((this_01 != (ReferenceController *)0x0) && (((uint)pRVar4 & 1) != 0)) {
      util__ReferenceController__ReleaseWeakReference(this_01);
    }
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_18);
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_00);
    }
    pRVar4 = (this->GetControllableComponent_MemoizedValue).Data.Controller;
    (this->GetControllableComponent_MemoizedValue).Data.Pointer = local_1c;
    (this->GetControllableComponent_MemoizedValue).Data.Controller = this_00;
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_00);
    }
    if (pRVar4 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(pRVar4);
    }
    (this->GetControllableComponent_MemoizedValue).IsValidData = true;
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(this_00);
      util__ReferenceController__ReleaseWeakReference(this_00);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007b35f0 007b35f0_GetDebrisComponent_Memoize ====
extern undefined4 FUN_007acca0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007b35f0 name=GetDebrisComponent_Memoize conv=__thiscall body=405

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__GetDebrisComponent_Memoize(void)const  */

void __thiscall Body__GetDebrisComponent_Memoize(Body *this)

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
  DebrisComponent *local_1c;
  undefined4 local_18;
  undefined4 *puStack_14;
  int iStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_20 = (ReferenceController *)0x0;
  if ((this->GetDebrisComponent_MemoizedValue).IsValidData == false) {
    iVar1 = (this->BodyMemoizationHandlerInstance).ResetFunctions.Size;
    local_1c = (DebrisComponent *)(iVar1 + 1);
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->BodyMemoizationHandlerInstance,
               (int *)&local_1c);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&this->BodyMemoizationHandlerInstance,
                       iVar1);
    if (bVar2) {
      (this->BodyMemoizationHandlerInstance).ResetFunctions.Data
      [(this->BodyMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_eabaeed5, Body__GetDebrisComponent_Clear);
    }
    pDVar6 = &this->Components;
    pDVar5 = local_40;
    local_18 = 0;
    puStack_14 = (undefined4 *)0x0;
    iStack_10 = 0;
    uStack_c = 0;
    uVar3 = util__GetUntrackComponent_Memoize(pDVar5);
    local_1c = (DebrisComponent *)((uint)local_1c & 0xffffff00);
    uVar3 = FUN_007acca0(local_30,uVar3,local_1c,pDVar5,pDVar6);
    local_1c = (DebrisComponent *)((uint)local_1c & 0xffffff00);
    FUN_00526b80(&local_18,uVar3,local_1c);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_30);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_40);
    iVar1 = iStack_10;
    if (1 < iStack_10) {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\tactical\\body.cpp",0x1f2,
                      "DebrisComps.Num() <= 1",(char *)0x0);
      DebugBreak();
    }
    if (iVar1 == 1) {
      this_00 = (ReferenceController *)puStack_14[1];
      local_1c = (DebrisComponent *)*puStack_14;
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
      local_1c = (DebrisComponent *)0x0;
      this_00 = (ReferenceController *)0x0;
      this_01 = local_20;
    }
    if ((((uint)pRVar4 & 2) != 0) &&
       (local_20 = (ReferenceController *)((uint)pRVar4 & 0xfffffffd), pRVar4 = local_20,
       local_1c != (DebrisComponent *)0x0)) {
      util__ReferenceController__ReleaseWeakReference((ReferenceController *)local_1c);
      pRVar4 = local_20;
    }
    if ((this_01 != (ReferenceController *)0x0) && (((uint)pRVar4 & 1) != 0)) {
      util__ReferenceController__ReleaseWeakReference(this_01);
    }
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_18);
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_00);
    }
    pRVar4 = (this->GetDebrisComponent_MemoizedValue).Data.Controller;
    (this->GetDebrisComponent_MemoizedValue).Data.Pointer = local_1c;
    (this->GetDebrisComponent_MemoizedValue).Data.Controller = this_00;
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_00);
    }
    if (pRVar4 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(pRVar4);
    }
    (this->GetDebrisComponent_MemoizedValue).IsValidData = true;
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(this_00);
      util__ReferenceController__ReleaseWeakReference(this_00);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007b45b0 007b45b0_GetShotComponent_Memoize ====
extern undefined4 FUN_007ac7f0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007b45b0 name=GetShotComponent_Memoize conv=__thiscall body=405

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__GetShotComponent_Memoize(void)const  */

void __thiscall Body__GetShotComponent_Memoize(Body *this)

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
  ShotComponent *local_1c;
  undefined4 local_18;
  undefined4 *puStack_14;
  int iStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_20 = (ReferenceController *)0x0;
  if ((this->GetShotComponent_MemoizedValue).IsValidData == false) {
    iVar1 = (this->BodyMemoizationHandlerInstance).ResetFunctions.Size;
    local_1c = (ShotComponent *)(iVar1 + 1);
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->BodyMemoizationHandlerInstance,
               (int *)&local_1c);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&this->BodyMemoizationHandlerInstance,
                       iVar1);
    if (bVar2) {
      (this->BodyMemoizationHandlerInstance).ResetFunctions.Data
      [(this->BodyMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_eabaeed5, Body__GetShotComponent_Clear);
    }
    pDVar6 = &this->Components;
    pDVar5 = local_40;
    local_18 = 0;
    puStack_14 = (undefined4 *)0x0;
    iStack_10 = 0;
    uStack_c = 0;
    uVar3 = util__GetUntrackComponent_Memoize(pDVar5);
    local_1c = (ShotComponent *)((uint)local_1c & 0xffffff00);
    uVar3 = FUN_007ac7f0(local_30,uVar3,local_1c,pDVar5,pDVar6);
    local_1c = (ShotComponent *)((uint)local_1c & 0xffffff00);
    FUN_00526b80(&local_18,uVar3,local_1c);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_30);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_40);
    iVar1 = iStack_10;
    if (1 < iStack_10) {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\tactical\\body.cpp",0x1de,
                      "ShotComps.Num() <= 1",(char *)0x0);
      DebugBreak();
    }
    if (iVar1 == 1) {
      this_00 = (ReferenceController *)puStack_14[1];
      local_1c = (ShotComponent *)*puStack_14;
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
      local_1c = (ShotComponent *)0x0;
      this_00 = (ReferenceController *)0x0;
      this_01 = local_20;
    }
    if ((((uint)pRVar4 & 2) != 0) &&
       (local_20 = (ReferenceController *)((uint)pRVar4 & 0xfffffffd), pRVar4 = local_20,
       local_1c != (ShotComponent *)0x0)) {
      util__ReferenceController__ReleaseWeakReference((ReferenceController *)local_1c);
      pRVar4 = local_20;
    }
    if ((this_01 != (ReferenceController *)0x0) && (((uint)pRVar4 & 1) != 0)) {
      util__ReferenceController__ReleaseWeakReference(this_01);
    }
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_18);
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_00);
    }
    pRVar4 = (this->GetShotComponent_MemoizedValue).Data.Controller;
    (this->GetShotComponent_MemoizedValue).Data.Pointer = local_1c;
    (this->GetShotComponent_MemoizedValue).Data.Controller = this_00;
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_00);
    }
    if (pRVar4 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(pRVar4);
    }
    (this->GetShotComponent_MemoizedValue).IsValidData = true;
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(this_00);
      util__ReferenceController__ReleaseWeakReference(this_00);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007b4e20 007b4e20_GetUntrackComponent_Memoize ====
extern undefined4 FUN_007ace30(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007b4e20 name=GetUntrackComponent_Memoize conv=__thiscall body=405

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__GetUntrackComponent_Memoize(void)const  */

void __thiscall Body__GetUntrackComponent_Memoize(Body *this)

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
  UntrackComponent *local_1c;
  undefined4 local_18;
  undefined4 *puStack_14;
  int iStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_20 = (ReferenceController *)0x0;
  if ((this->GetUntrackComponent_MemoizedValue).IsValidData == false) {
    iVar1 = (this->BodyMemoizationHandlerInstance).ResetFunctions.Size;
    local_1c = (UntrackComponent *)(iVar1 + 1);
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->BodyMemoizationHandlerInstance,
               (int *)&local_1c);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&this->BodyMemoizationHandlerInstance,
                       iVar1);
    if (bVar2) {
      (this->BodyMemoizationHandlerInstance).ResetFunctions.Data
      [(this->BodyMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_eabaeed5, Body__GetUntrackComponent_Clear);
    }
    pDVar6 = &this->Components;
    pDVar5 = local_40;
    local_18 = 0;
    puStack_14 = (undefined4 *)0x0;
    iStack_10 = 0;
    uStack_c = 0;
    uVar3 = util__GetUntrackComponent_Memoize(pDVar5);
    local_1c = (UntrackComponent *)((uint)local_1c & 0xffffff00);
    uVar3 = FUN_007ace30(local_30,uVar3,local_1c,pDVar5,pDVar6);
    local_1c = (UntrackComponent *)((uint)local_1c & 0xffffff00);
    FUN_00526b80(&local_18,uVar3,local_1c);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_30);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_40);
    iVar1 = iStack_10;
    if (1 < iStack_10) {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\tactical\\body.cpp",0x1e5,
                      "UntrackComps.Num() <= 1",(char *)0x0);
      DebugBreak();
    }
    if (iVar1 == 1) {
      this_00 = (ReferenceController *)puStack_14[1];
      local_1c = (UntrackComponent *)*puStack_14;
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
      local_1c = (UntrackComponent *)0x0;
      this_00 = (ReferenceController *)0x0;
      this_01 = local_20;
    }
    if ((((uint)pRVar4 & 2) != 0) &&
       (local_20 = (ReferenceController *)((uint)pRVar4 & 0xfffffffd), pRVar4 = local_20,
       local_1c != (UntrackComponent *)0x0)) {
      util__ReferenceController__ReleaseWeakReference((ReferenceController *)local_1c);
      pRVar4 = local_20;
    }
    if ((this_01 != (ReferenceController *)0x0) && (((uint)pRVar4 & 1) != 0)) {
      util__ReferenceController__ReleaseWeakReference(this_01);
    }
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_18);
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_00);
    }
    pRVar4 = (this->GetUntrackComponent_MemoizedValue).Data.Controller;
    (this->GetUntrackComponent_MemoizedValue).Data.Pointer = local_1c;
    (this->GetUntrackComponent_MemoizedValue).Data.Controller = this_00;
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_00);
    }
    if (pRVar4 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(pRVar4);
    }
    (this->GetUntrackComponent_MemoizedValue).IsValidData = true;
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(this_00);
      util__ReferenceController__ReleaseWeakReference(this_00);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007bcf10 007bcf10_GetExternalExplosionTargetArea_m2 ====
// decompiled by BatchDecomp @ 007bcf10 name=GetExternalExplosionTargetArea_m2 conv=__cdecl body=274

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* double __cdecl Collision__GetExternalExplosionTargetArea_m2(class util::WeakPtr<class
   SpacecraftComponent>) */

double __cdecl
Collision__GetExternalExplosionTargetArea_m2(int param_1,ReferenceController *param_2)

{
  Body *this;
  Body *this_00;
  bool bVar1;
  double dVar2;
  double dVar3;
  
  if ((param_2 != (ReferenceController *)0x0) &&
     (bVar1 = util__ReferenceController__IsDataStillValid(param_2), !bVar1)) {
    param_1 = 0;
  }
  if ((*(ReferenceController **)(param_1 + 8) != (ReferenceController *)0x0) &&
     (bVar1 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(param_1 + 8)),
     !bVar1)) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  this = *(Body **)(param_1 + 4);
  Body__GetBoundingCylinder_km_Memoize(this);
  if ((this->GetBoundingCylinder_km_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if ((param_2 != (ReferenceController *)0x0) &&
     (bVar1 = util__ReferenceController__IsDataStillValid(param_2), !bVar1)) {
    param_1 = 0;
  }
  if ((*(ReferenceController **)(param_1 + 8) != (ReferenceController *)0x0) &&
     (bVar1 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(param_1 + 8)),
     !bVar1)) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  this_00 = *(Body **)(param_1 + 4);
  Body__GetTargetableRadius_km_Memoize(this_00);
  if ((this_00->GetTargetableRadius_km_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar3 = (this_00->GetTargetableRadius_km_MemoizedValue).Data;
  dVar2 = (this->GetBoundingCylinder_km_MemoizedValue).Data.Height * /*408f400000000000*/1000.0;
  dVar3 = (dVar3 + dVar3) * /*408f400000000000*/1000.0;
  if (param_2 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_2);
  }
  return dVar3 * dVar2;
}


//==== 00007c1290 007c1290_AppendCollider ====
// decompiled by BatchDecomp @ 007c1290 name=AppendCollider conv=__thiscall body=234

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Collision__RTreeNode__AppendCollider(class util::WeakPtr<class Body> &)
    */

void __thiscall Collision__RTreeNode__AppendCollider(RTreeNode *this,WeakPtr_L_class_Body_G_ *param_1)

{
  undefined4 stack0xfffffffc;
  Body *this_00;
  RTreeNode *pRVar1;
  bool bVar2;
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
  pRVar1 = this->Left;
  while ((pRVar1 != (RTreeNode *)0x0 && (this->Right != (RTreeNode *)0x0))) {
    if ((*(ReferenceController **)(param_1 + 4) != (ReferenceController *)0x0) &&
       (bVar2 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(param_1 + 4)),
       !bVar2)) {
      *(undefined4 *)param_1 = 0;
    }
    this_00 = *(Body **)param_1;
    Body__GetCollisionAABB_Memoize(this_00);
    if ((this_00->GetCollisionAABB_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    local_38 = *(undefined4 *)&(this_00->GetCollisionAABB_MemoizedValue).Data.Lower.X;
    uStack_34 = *(undefined4 *)((int)&(this_00->GetCollisionAABB_MemoizedValue).Data.Lower.X + 4);
    uStack_30 = *(undefined4 *)&(this_00->GetCollisionAABB_MemoizedValue).Data.Lower.Y;
    uStack_2c = *(undefined4 *)((int)&(this_00->GetCollisionAABB_MemoizedValue).Data.Lower.Y + 4);
    pRVar1 = this->Left;
    local_28 = *(undefined4 *)&(this_00->GetCollisionAABB_MemoizedValue).Data.Lower.Z;
    uStack_24 = *(undefined4 *)((int)&(this_00->GetCollisionAABB_MemoizedValue).Data.Lower.Z + 4);
    uStack_20 = *(undefined4 *)&(this_00->GetCollisionAABB_MemoizedValue).Data.Upper.X;
    uStack_1c = *(undefined4 *)((int)&(this_00->GetCollisionAABB_MemoizedValue).Data.Upper.X + 4);
    local_18 = *(undefined4 *)&(this_00->GetCollisionAABB_MemoizedValue).Data.Upper.Y;
    uStack_14 = *(undefined4 *)((int)&(this_00->GetCollisionAABB_MemoizedValue).Data.Upper.Y + 4);
    uStack_10 = *(undefined4 *)&(this_00->GetCollisionAABB_MemoizedValue).Data.Upper.Z;
    uStack_c = *(undefined4 *)((int)&(this_00->GetCollisionAABB_MemoizedValue).Data.Upper.Z + 4);
    bVar2 = util__AABB_struct_util__Vec3_double_____Intersects((AABB_L_struct_util__Vec3_L_double_G___G_ *)&pRVar1->Bounds,
                       (AABB_L_struct_util__Vec3_L_double_G___G_ *)&local_38);
    if (bVar2) {
      AppendCollider(pRVar1,param_1);
    }
    this = this->Right;
    bVar2 = util__AABB_struct_util__Vec3_double_____Intersects((AABB_L_struct_util__Vec3_L_double_G___G_ *)&this->Bounds,
                       (AABB_L_struct_util__Vec3_L_double_G___G_ *)&local_38);
    if (!bVar2) goto LAB_007c1367;
    pRVar1 = this->Left;
  }
  util__Darray_class_util__WeakPtr_class_Body_____Add((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&this->LeafColliders,param_1);
LAB_007c1367:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007c1b40 007c1b40_InstantiateCopy ====
// decompiled by BatchDecomp @ 007c1b40 name=InstantiateCopy conv=__thiscall body=308

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::SharedPtr<class Component> __thiscall
   CapitalShipComponent__InstantiateCopy(class util::WeakPtr<class Body>) */

undefined4 * __thiscall
CapitalShipComponent__InstantiateCopy(CapitalShipComponent *this,undefined4 *param_2,undefined4 param_3,
          ReferenceController *param_4)

{
  Body *pBVar1;
  bool bVar2;
  Component *pCVar3;
  ReferenceControllerRegistry *pRVar4;
  ReferenceController *pRVar5;
  Component *pCVar6;
  
  pCVar3 = (Component *)operator_new(0x2c);
  if (pCVar3 == (Component *)0x0) {
    pCVar3 = (Component *)0x0;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
  }
  else {
    memset(pCVar3,0,0x2c);
    if (param_4 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(param_4);
    }
    pBVar1 = (Body *)this->UniqueID;
    pRVar5 = param_4;
    if (param_4 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(param_4);
    }
    Component__Component(pCVar3,param_3,pRVar5);
    pCVar3->_pad_0x0_0 = (int)((void *)(0x0093c9acu));
    util__Str_char___Str_char((Str_L_char_G_ *)(pCVar3 + 1),&this->ShipName);
    *(undefined1 *)&pCVar3[2]._pad_0x0_0 = 0;
    pCVar3[2].Parent.Pointer = pBVar1;
    *(undefined1 *)&pCVar3[2].Parent.Controller = 1;
    pCVar3[3]._pad_0x0_0 = 0;
    pCVar3[3].Parent.Pointer = (Body *)0x0;
    if (param_4 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(param_4);
    }
  }
  pCVar6 = pCVar3;
  pRVar4 = util__ReferenceControllerRegistry__Get();
  pRVar5 = util__ReferenceControllerRegistry__Register(pRVar4,pCVar6);
  if (pRVar5 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(pRVar5);
  }
  *param_2 = pCVar3;
  param_2[1] = pRVar5;
  if (pRVar5 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(pRVar5);
    bVar2 = util__ReferenceController__ReleaseStrongReference(pRVar5);
    if (bVar2) {
      if (pCVar3 != (Component *)0x0) {
        (**(code **)(pCVar3->_pad_0x0_0 + 4))(1);
      }
      pRVar4 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar4,pCVar3);
    }
  }
  if (param_4 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_4);
  }
  return param_2;
}


//==== 00007c3910 007c3910_MatterCloudComponent ====
// decompiled by BatchDecomp @ 007c3910 name=MatterCloudComponent conv=__thiscall body=181

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: __thiscall MatterCloudComponent__MatterCloudComponent(class util::WeakPtr<class
   Body>,class Material *,double,int,struct util::Cylinder<double>,double,double) */

MatterCloudComponent * __thiscall
MatterCloudComponent__MatterCloudComponent(MatterCloudComponent *this,undefined4 param_2,ReferenceController *param_3,
          Material *param_4,double param_5,int param_6,undefined4 param_7,undefined4 param_8,
          undefined4 param_9,undefined4 param_10,double param_11,double param_12)

{
  int iVar1;
  ReferenceController *pRVar2;
  
  pRVar2 = param_3;
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_3);
  }
  Component__Component((Component *)this,param_2,pRVar2);
  this->PacketCount = param_6;
  this->_pad_0x0_0 = (int)((void *)(0x0093cb80u));
  this->Composition = param_4;
  this->ParticlesPerPacket = 1;
  this->Temperature_K = param_12;
  this->ParticleMass_kg = param_5 / (double)param_6;
  *(undefined4 *)&(this->InitialSize_m).Radius = param_7;
  *(undefined4 *)((int)&(this->InitialSize_m).Radius + 4) = param_8;
  *(undefined4 *)&(this->InitialSize_m).Height = param_9;
  *(undefined4 *)((int)&(this->InitialSize_m).Height + 4) = param_10;
  this->TimeSinceExpansion_s = 0.0;
  this->ExpansionVelocity_km__s = param_11;
  if (0x1e < this->PacketCount) {
    iVar1 = (param_6 + 0x1d) / 0x1e;
    this->ParticlesPerPacket = iVar1;
    this->PacketCount = param_6 / iVar1;
  }
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  return this;
}


//==== 00007c3e70 007c3e70_GetHitsOnTarget ====
// decompiled by BatchDecomp @ 007c3e70 name=GetHitsOnTarget conv=__thiscall body=390

/* public: class util::Darray<struct util::Vec3<double> > __thiscall
   MatterCloudComponent__GetHitsOnTarget(struct Vec3_L_double_G_,double,double)const  */

Darray_L_struct_util__Vec3_L_double_G___G_ * __thiscall
MatterCloudComponent__GetHitsOnTarget(MatterCloudComponent *this,Vec3_L_double_G_ param_1,double param_2,double param_3)

{
  undefined4 *puVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  void *pvVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 unaff_EDI;
  double dVar11;
  undefined4 in_stack_0000002c;
  Vec3_L_double_G_ local_24;
  int local_c;
  MatterCloudComponent *local_8;
  
  *(undefined4 *)((slice_view *)&param_1.X)->_0_4_ = 0;
  *(undefined4 *)(((slice_view *)&param_1.X)->_0_4_ + 4) = 0;
  *(undefined4 *)(((slice_view *)&param_1.X)->_0_4_ + 8) = 0;
  *(undefined4 *)(((slice_view *)&param_1.X)->_0_4_ + 0xc) = 0;
  uVar10 = this->PacketCount;
  *(undefined ***)((slice_view *)&param_1.X)->_0_4_ = ((void *)(0x0091a900u));
  *(undefined4 *)(((slice_view *)&param_1.X)->_0_4_ + 4) = 0;
  *(undefined4 *)(((slice_view *)&param_1.X)->_0_4_ + 8) = 0;
  *(uint *)(((slice_view *)&param_1.X)->_0_4_ + 0xc) = uVar10;
  local_8 = this;
  if (((int)uVar10 < 0) || (0x3fffffff < (int)uVar10)) {
    *(undefined4 *)(((slice_view *)&param_1.X)->_0_4_ + 0xc) = 0;
  }
  else if (0 < (int)uVar10) {
    pvVar6 = operator_new__(-(uint)((int)((ulonglong)uVar10 * 0x18 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar10 * 0x18));
    if (pvVar6 == (void *)0x0) {
      pvVar6 = (void *)0x0;
    }
    else if (uVar10 != 0) {
      puVar7 = (undefined8 *)((int)pvVar6 + 0x10);
      do {
        *puVar7 = 0;
        *(undefined4 *)(puVar7 + -2) = 0;
        *(undefined4 *)((int)puVar7 + -0xc) = 0;
        *(undefined4 *)(puVar7 + -1) = 0;
        *(undefined4 *)((int)puVar7 + -4) = 0;
        uVar10 = uVar10 - 1;
        puVar7 = puVar7 + 3;
      } while (uVar10 != 0);
    }
    iVar9 = 0;
    *(void **)(((slice_view *)&param_1.X)->_0_4_ + 4) = pvVar6;
    if (0 < *(int *)(((slice_view *)&param_1.X)->_0_4_ + 0xc)) {
      iVar8 = 0;
      do {
        iVar2 = *(int *)(((slice_view *)&param_1.X)->_0_4_ + 4);
        iVar8 = iVar8 + 0x18;
        iVar9 = iVar9 + 1;
        puVar1 = (undefined4 *)(iVar2 + -0x18 + iVar8);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        *(undefined8 *)(iVar2 + -8 + iVar8) = 0;
      } while (iVar9 < *(int *)(((slice_view *)&param_1.X)->_0_4_ + 0xc));
    }
  }
  iVar9 = 0;
  if (0 < local_8->PacketCount) {
    do {
      GetRandomParticlePosition_km(local_8,&local_24,(double)CONCAT44(unaff_EDI,in_stack_0000002c));
      dVar11 = (double)CONCAT44(((slice_view *)&local_24.Y)->_4_4_,((slice_view *)&local_24.Y)->_0_4_) - (double)((slice_view *)&param_1)->_12_8_;
      dVar4 = (double)CONCAT44(((slice_view *)&local_24.X)->_4_4_,((slice_view *)&local_24.X)->_0_4_) - (double)((slice_view *)&param_1)->_4_8_;
      dVar3 = local_24.Z - (double)CONCAT44(((slice_view *)&param_2)->_0_4_,((slice_view *)&param_1.Z)->_4_4_);
      if (dVar11 * dVar11 + dVar4 * dVar4 + dVar3 * dVar3 <=
          (double)CONCAT44(((slice_view *)&param_3)->_0_4_,((slice_view *)&param_2)->_4_4_) *
          (double)CONCAT44(((slice_view *)&param_3)->_0_4_,((slice_view *)&param_2)->_4_4_)) {
        iVar8 = *(int *)(((slice_view *)&param_1.X)->_0_4_ + 8);
        local_c = iVar8 + 1;
        util__Darray_struct_util__Vec3_double_____SetSize(((slice_view *)&param_1.X)->_0_4_,&local_c);
        bVar5 = util__Darray_struct_util__Vec3_double_____CheckSize(((slice_view *)&param_1.X)->_0_4_,iVar8);
        if (bVar5) {
          iVar8 = *(int *)(((slice_view *)&param_1.X)->_0_4_ + 8);
          iVar2 = *(int *)(((slice_view *)&param_1.X)->_0_4_ + 4);
          puVar1 = (undefined4 *)(iVar2 + -0x18 + iVar8 * 0x18);
          *puVar1 = ((slice_view *)&local_24.X)->_0_4_;
          puVar1[1] = ((slice_view *)&local_24.X)->_4_4_;
          puVar1[2] = ((slice_view *)&local_24.Y)->_0_4_;
          puVar1[3] = ((slice_view *)&local_24.Y)->_4_4_;
          *(double *)(iVar2 + -8 + iVar8 * 0x18) = local_24.Z;
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < local_8->PacketCount);
  }
  return ((slice_view *)&param_1.X)->_0_4_;
}


//==== 00007c5380 007c5380_ExplosionComponent ====
// decompiled by BatchDecomp @ 007c5380 name=ExplosionComponent conv=__thiscall body=283

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: __thiscall ExplosionComponent__ExplosionComponent(class util::WeakPtr<class
   Body>,double,double,double,double,class util::Darray<struct MaterialConstituent> const
   &,double,double,double) */

ExplosionComponent * __thiscall
ExplosionComponent__ExplosionComponent(ExplosionComponent *this,undefined4 param_2,ReferenceController *param_3,double param_4,
          double param_5,double param_6,double param_7,Darray_L_struct_MaterialConstituent_G_ *param_8,
          double param_9,double param_10,double param_11)

{
  int iVar1;
  ReferenceController *pRVar2;
  
  pRVar2 = param_3;
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_3);
  }
  Component__Component((Component *)this,param_2,pRVar2);
  this->ReductionFraction = param_5;
  this->Radius_m = param_4;
  this->PhotonEnergy_J = param_6;
  this->_pad_0x0_0 = (int)((void *)(0x0093cd60u));
  this->PhotonWavelength_nm = param_7;
  util__Darray_struct_MaterialConstituent___Darray_struct_MaterialConstituent((Darray_L_struct_MaterialConstituent_G_ *)&this->GasComposition,param_8);
  iVar1 = (this->GasComposition)._pad_0x0_0;
  this->GasMass_kg = param_9;
  this->GasTemperature_K = param_10;
  this->Duration_s = param_11;
  iVar1 = (**(code **)(iVar1 + 0xc))();
  if ((((iVar1 < 1) || (this->GasMass_kg <= 0.0)) || (this->GasTemperature_K <= 0.0)) &&
     ((this->PhotonEnergy_J <= 0.0 || (this->PhotonWavelength_nm <= 0.0)))) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\tactical\\components\\shot.cpp",0x8d,
                    "IsGasExplosion() || IsPhotonExplosion()",(char *)0x0);
    DebugBreak();
  }
  if (this->Duration_s <= 0.0) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\tactical\\components\\shot.cpp",0x8e,
                    "Duration_s > 0",(char *)0x0);
    DebugBreak();
  }
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  return this;
}


//==== 00007c6070 007c6070_InstantiateCopy ====
// decompiled by BatchDecomp @ 007c6070 name=InstantiateCopy conv=__thiscall body=275

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::SharedPtr<class Component> __thiscall
   ShotComponent__InstantiateCopy(class util::WeakPtr<class Body>) */

undefined4 * __thiscall
ShotComponent__InstantiateCopy(ShotComponent *this,undefined4 *param_2,undefined4 param_3,ReferenceController *param_4)

{
  bool bVar1;
  Component *pCVar2;
  ReferenceControllerRegistry *pRVar3;
  ReferenceController *pRVar4;
  Component *pCVar5;
  
  pCVar2 = (Component *)operator_new(0x18);
  if (pCVar2 == (Component *)0x0) {
    pCVar2 = (Component *)0x0;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
  }
  else {
    pCVar2->_pad_0x0_0 = 0;
    (pCVar2->Parent).Pointer = (Body *)0x0;
    (pCVar2->Parent).Controller = (ReferenceController *)0x0;
    pCVar2[1]._pad_0x0_0 = 0;
    pCVar2[1].Parent.Pointer = (Body *)0x0;
    pCVar2[1].Parent.Controller = (ReferenceController *)0x0;
    if (param_4 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(param_4);
    }
    bVar1 = this->IsBullet;
    pRVar4 = param_4;
    if (param_4 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(param_4);
    }
    Component__Component(pCVar2,param_3,pRVar4);
    pCVar2->_pad_0x0_0 = (int)((void *)(0x0093cc78u));
    pCVar2[1]._pad_0x0_0 = 0;
    pCVar2[1].Parent.Pointer = (Body *)0x0;
    *(bool *)&pCVar2[1].Parent.Controller = bVar1;
    if (param_4 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(param_4);
    }
  }
  pCVar5 = pCVar2;
  pRVar3 = util__ReferenceControllerRegistry__Get();
  pRVar4 = util__ReferenceControllerRegistry__Register(pRVar3,pCVar5);
  if (pRVar4 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(pRVar4);
  }
  *param_2 = pCVar2;
  param_2[1] = pRVar4;
  if (pRVar4 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(pRVar4);
    bVar1 = util__ReferenceController__ReleaseStrongReference(pRVar4);
    if (bVar1) {
      if (pCVar2 != (Component *)0x0) {
        (**(code **)(pCVar2->_pad_0x0_0 + 4))(1);
      }
      pRVar3 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar3,pCVar2);
    }
  }
  if (param_4 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_4);
  }
  return param_2;
}


//==== 00007c6190 007c6190_InstantiateCopy ====
// decompiled by BatchDecomp @ 007c6190 name=InstantiateCopy conv=__thiscall body=322

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::SharedPtr<class Component> __thiscall
   UntrackComponent__InstantiateCopy(class util::WeakPtr<class Body>) */

undefined4 * __thiscall
UntrackComponent__InstantiateCopy(UntrackComponent *this,undefined4 *param_2,undefined4 param_3,
          ReferenceController *param_4)

{
  Body *pBVar1;
  bool bVar2;
  Component *pCVar3;
  ReferenceControllerRegistry *pRVar4;
  ReferenceController *pRVar5;
  ReferenceController *pRVar6;
  Component *pCVar7;
  
  pCVar3 = (Component *)operator_new(0x28);
  if (pCVar3 == (Component *)0x0) {
    pCVar3 = (Component *)0x0;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
  }
  else {
    pCVar3->_pad_0x0_0 = 0;
    (pCVar3->Parent).Pointer = (Body *)0x0;
    (pCVar3->Parent).Controller = (ReferenceController *)0x0;
    pCVar3[1]._pad_0x0_0 = 0;
    pCVar3[1].Parent.Pointer = (Body *)0x0;
    pCVar3[1].Parent.Controller = (ReferenceController *)0x0;
    pCVar3[2]._pad_0x0_0 = 0;
    pCVar3[2].Parent.Pointer = (Body *)0x0;
    *(undefined8 *)&pCVar3[2].Parent.Controller = 0;
    pRVar5 = (this->Target).Controller;
    pBVar1 = (this->Target).Pointer;
    if (pRVar5 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar5);
    }
    pRVar6 = param_4;
    if (param_4 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(param_4);
      util__ReferenceController__AddWeakReference(param_4);
    }
    Component__Component(pCVar3,param_3,pRVar6);
    pCVar3->_pad_0x0_0 = (int)((void *)(0x0093ccecu));
    pCVar3[1].Parent.Pointer = (Body *)0x0;
    pCVar3[1].Parent.Controller = (ReferenceController *)0x0;
    *(undefined1 *)&pCVar3[2]._pad_0x0_0 = 0;
    pCVar3[2].Parent.Controller = (ReferenceController *)pBVar1;
    pCVar3[3]._pad_0x0_0 = (int)pRVar5;
    if (pRVar5 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar5);
    }
    if (param_4 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(param_4);
    }
    if (pRVar5 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(pRVar5);
    }
  }
  pCVar7 = pCVar3;
  pRVar4 = util__ReferenceControllerRegistry__Get();
  pRVar5 = util__ReferenceControllerRegistry__Register(pRVar4,pCVar7);
  if (pRVar5 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(pRVar5);
  }
  *param_2 = pCVar3;
  param_2[1] = pRVar5;
  if (pRVar5 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(pRVar5);
    bVar2 = util__ReferenceController__ReleaseStrongReference(pRVar5);
    if (bVar2) {
      if (pCVar3 != (Component *)0x0) {
        (**(code **)(pCVar3->_pad_0x0_0 + 4))(1);
      }
      pRVar4 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar4,pCVar3);
    }
  }
  if (param_4 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_4);
  }
  return param_2;
}


//==== 00007caeb0 007caeb0_FUN_007caeb0 ====
void __thiscall FUN_007caeb0(undefined4 *param_1,double param_2,double param_3,double param_4);

// decompiled by BatchDecomp @ 007caeb0 name=FUN_007caeb0 conv=unknown body=230

void __thiscall FUN_007caeb0(undefined4 *param_1,double param_2,double param_3,double param_4)

{
  undefined4 stack0xfffffffc;
  double *pdVar1;
  double *pdVar2;
  Quaternion_L_double_G_ QVar3;
  Vec3_L_double_G_ VVar4;
  undefined4 unaff_ESI;
  double dVar5;
  Vec3_L_double_G_ local_38;
  Vec3_L_double_G_ local_20;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pdVar1 = (double *)*param_1;
  pdVar2 = (double *)param_1[1];
  dVar5 = pdVar2[1] * (param_3 - pdVar1[1]) + *pdVar2 * (param_2 - *pdVar1) +
          pdVar2[2] * (param_4 - pdVar1[2]);
  local_38.X = (param_2 - *pdVar1) - dVar5 * *pdVar2;
  local_38.Y = (param_3 - pdVar1[1]) - dVar5 * pdVar2[1];
  local_38.Z = (param_4 - pdVar1[2]) - dVar5 * pdVar2[2];
  util__Vec3_double___SafeNormalized(&local_38,&local_20);
  ((slice_view *)&QVar3.W)->_4_4_ = ((slice_view *)&local_20.X)->_0_4_;
  memcpy((void *)((slice_view *)&QVar3)->raw + 0, (const void *)(param_1[2] + 4), 28);
  ((slice_view *)&VVar4.X)->_4_4_ = ((slice_view *)&local_20.Y)->_0_4_;
  ((slice_view *)&VVar4.X)->_0_4_ = ((slice_view *)&local_20.X)->_4_4_;
  ((slice_view *)&VVar4.Y)->_0_4_ = ((slice_view *)&local_20.Y)->_4_4_;
  ((slice_view *)&VVar4.Y)->_4_4_ = *(undefined4 *)&local_20.Z;
  ((slice_view *)&VVar4.Z)->_0_4_ = (int)((ulonglong)local_20.Z >> 0x20);
  ((slice_view *)&VVar4.Z)->_4_4_ = unaff_ESI;
util__FUN_007caeb0(&local_20,QVar3,VVar4);
  __CIatan2();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007e0f50 007e0f50_FUN_007e0f50 ====
undefined1 __thiscall FUN_007e0f50(int param_1,undefined4 *param_2);
extern undefined4 FUN_007e1280(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_007e3cf0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007e0f50 name=FUN_007e0f50 conv=unknown body=145

undefined1 __thiscall FUN_007e0f50(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  ReferenceController *this;
  char cVar3;
  ReferenceController *local_8;
  
  iVar1 = *(int *)(param_1 + 8);
  local_8 = (ReferenceController *)(iVar1 + 1);
  FUN_007e3cf0(&local_8);
  cVar3 = FUN_007e1280(iVar1);
  if (cVar3 == '\0') {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 4);
  local_8 = *(ReferenceController **)(iVar2 + -0x14 + iVar1 * 0x18);
  *(undefined4 *)(iVar2 + -0x18 + iVar1 * 0x18) = *param_2;
  this = (ReferenceController *)param_2[1];
  *(ReferenceController **)(iVar2 + -0x14 + iVar1 * 0x18) = this;
  if (this != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this);
  }
  if (local_8 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_8);
  }
  *(undefined8 *)(iVar2 + -0x10 + iVar1 * 0x18) = *(undefined8 *)(param_2 + 2);
  *(undefined1 *)(iVar2 + -8 + iVar1 * 0x18) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)(iVar2 + -7 + iVar1 * 0x18) = *(undefined1 *)((int)param_2 + 0x11);
  *(undefined1 *)(iVar2 + -6 + iVar1 * 0x18) = *(undefined1 *)((int)param_2 + 0x12);
  return 1;
}


//==== 00007f0e70 007f0e70_GetAlliedCapitalCrafts ====
extern undefined4 FUN_007ee7a0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007f0e70 name=GetAlliedCapitalCrafts conv=__thiscall body=178

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: class util::Darray<class util::WeakPtr<class SpacecraftComponent> > __thiscall
   TacticalAI__GetAlliedCapitalCrafts(void)const  */

void __thiscall TacticalAI__GetAlliedCapitalCrafts(TacticalAI *this)

{
  undefined4 stack0xfffffffc;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *pDVar1;
  int iVar2;
  bool bVar3;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *in_stack_00000004;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_3c[16];
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_2c[16];
  int local_1c[4];
  undefined1 local_c[4];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar3 = this->ControlsAllies == false;
  local_c[0] = 0;
  if (bVar3) {
    pDVar1 = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             TacticalManager__GetAISpacecraftComponents(this->Parent);
  }
  else {
    pDVar1 = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             TacticalManager__GetPlayerSpacecraftComponents(this->Parent);
  }
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_1c,pDVar1);
  if (bVar3) {
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_2c);
  }
  else {
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_3c);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  iVar2 = (**(code **)(local_1c[0] + 0xc))();
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent(in_stack_00000004,iVar2);
  FUN_007ee7a0(local_1c,local_c);
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_1c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007f0fa0 007f0fa0_GetAlliedShotCrafts ====
extern undefined4 FUN_007ee0a0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007f0fa0 name=GetAlliedShotCrafts conv=__thiscall body=178

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: class util::Darray<class util::WeakPtr<class SpacecraftComponent> > __thiscall
   TacticalAI__GetAlliedShotCrafts(void)const  */

void __thiscall TacticalAI__GetAlliedShotCrafts(TacticalAI *this)

{
  undefined4 stack0xfffffffc;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *pDVar1;
  int iVar2;
  bool bVar3;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *in_stack_00000004;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_3c[16];
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_2c[16];
  int local_1c[4];
  undefined1 local_c[4];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar3 = this->ControlsAllies == false;
  local_c[0] = 0;
  if (bVar3) {
    pDVar1 = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             TacticalManager__GetAISpacecraftComponents(this->Parent);
  }
  else {
    pDVar1 = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             TacticalManager__GetPlayerSpacecraftComponents(this->Parent);
  }
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_1c,pDVar1);
  if (bVar3) {
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_2c);
  }
  else {
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_3c);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  iVar2 = (**(code **)(local_1c[0] + 0xc))();
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent(in_stack_00000004,iVar2);
  FUN_007ee0a0(local_1c,local_c);
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_1c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007f12d0 007f12d0_GetNonAlliedShips ====
// decompiled by BatchDecomp @ 007f12d0 name=GetNonAlliedShips conv=__thiscall body=318

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: class util::Darray<class util::WeakPtr<class SpacecraftComponent> > __thiscall
   TacticalAI__GetNonAlliedShips(void)const  */

void __thiscall TacticalAI__GetNonAlliedShips(TacticalAI *this)

{
  undefined4 stack0xfffffffc;
  Faction *pFVar1;
  ReferenceController *this_00;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *pDVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  Faction *pFVar7;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *in_stack_00000004;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_28[16];
  ReferenceController *local_18;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *local_14;
  TacticalAI *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_14 = in_stack_00000004;
  local_10 = this;
  piVar4 = (int *)TacticalManager__GetSpacecraftComponents(this->Parent);
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  iVar5 = (**(code **)(*(int *)(uintptr_t)piVar4 + 0xc))();
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent(in_stack_00000004,iVar5);
  local_c = 0;
  iVar5 = (**(code **)(*(int *)(uintptr_t)piVar4 + 0xc))();
  if (local_c < iVar5) {
    do {
      piVar6 = (int *)(**(code **)*piVar4)(&local_c);
      if (((ReferenceController *)piVar6[1] != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar6[1]),
         !bVar3)) {
        *piVar6 = 0;
      }
      iVar5 = *piVar6;
      if ((*(ReferenceController **)(iVar5 + 8) != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar5 + 8)),
         !bVar3)) {
        *(undefined4 *)(iVar5 + 4) = 0;
      }
      pFVar1 = *(Faction **)(*(int *)(iVar5 + 4) + 0x1e0);
      if (local_10->ControlsAllies == false) {
        pFVar7 = TacticalManager__GetEnemyAlliance(local_10->Parent);
      }
      else {
        pFVar7 = TacticalManager__GetPlayerAlliance(local_10->Parent);
      }
      if (pFVar1 != pFVar7) {
        iVar5 = *(int *)(local_14 + 8);
        local_18 = (ReferenceController *)(iVar5 + 1);
        util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_14,(int *)&local_18);
        pDVar2 = local_14;
        bVar3 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_14,iVar5);
        if (bVar3) {
          iVar5 = *(int *)(pDVar2 + 4) + *(int *)(pDVar2 + 8) * 8;
          local_18 = *(ReferenceController **)(iVar5 + -4);
          *(int *)(iVar5 + -8) = *piVar6;
          this_00 = (ReferenceController *)piVar6[1];
          *(ReferenceController **)(iVar5 + -4) = this_00;
          if (this_00 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this_00);
          }
          if (local_18 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(local_18);
          }
        }
      }
      local_c = local_c + 1;
      iVar5 = (**(code **)(*(int *)(uintptr_t)piVar4 + 0xc))();
    } while (local_c < iVar5);
  }
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_28);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007f1470 007f1470_GetThreateningEnemyShips ====
extern undefined4 FUN_007ee630(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007f1470 name=GetThreateningEnemyShips conv=__thiscall body=178

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: class util::Darray<class util::WeakPtr<class SpacecraftComponent> > __thiscall
   TacticalAI__GetThreateningEnemyShips(void)const  */

void __thiscall TacticalAI__GetThreateningEnemyShips(TacticalAI *this)

{
  undefined4 stack0xfffffffc;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *pDVar1;
  int iVar2;
  bool bVar3;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *in_stack_00000004;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_3c[16];
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_2c[16];
  int local_1c[4];
  undefined1 local_c[4];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar3 = this->ControlsAllies == false;
  local_c[0] = 0;
  if (bVar3) {
    pDVar1 = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             TacticalManager__GetPlayerSpacecraftComponents(this->Parent);
  }
  else {
    pDVar1 = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             TacticalManager__GetAISpacecraftComponents(this->Parent);
  }
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_1c,pDVar1);
  if (bVar3) {
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_2c);
  }
  else {
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_3c);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  iVar2 = (**(code **)(local_1c[0] + 0xc))();
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent(in_stack_00000004,iVar2);
  FUN_007ee630(local_1c,local_c);
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_1c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007fe370 007fe370_GetDebrisComponents ====
// decompiled by BatchDecomp @ 007fe370 name=GetDebrisComponents conv=__thiscall body=269

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Darray<class util::WeakPtr<class DebrisComponent> > __thiscall
   TacticalManager__GetDebrisComponents(void)const  */

Darray_L_class_util__WeakPtr_L_class_Body_G___G_ * __thiscall
TacticalManager__GetDebrisComponents(TacticalManager *this)

{
  ReferenceController *this_00;
  ReferenceController *this_01;
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *in_stack_00000004;
  int local_8;
  
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = ((void *)(0x0091e0b8u));
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(WeakPtr_L_SpacecraftComponent_G_ **)(in_stack_00000004 + 0xc) =
       (this->Optimizers).SpacecraftComponents.Data;
  local_8 = (**(code **)((this->Optimizers).DebrisComponents.Size + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____SetSize(in_stack_00000004,&local_8);
  uVar3 = *(uint *)(in_stack_00000004 + 0xc);
  uVar2 = -(uint)((int)((ulonglong)uVar3 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar3 * 8);
  puVar1 = (uint *)operator_new__(-(uint)(0xfffffffb < uVar2) | uVar2 + 4);
  if (puVar1 == (uint *)0x0) {
    puVar1 = (uint *)0x0;
  }
  else {
    *puVar1 = uVar3;
    puVar1 = puVar1 + 1;
    puVar4 = puVar1;
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4 = puVar4 + 2;
    }
  }
  *(uint **)(in_stack_00000004 + 4) = puVar1;
  puVar4 = (uint *)(this->Optimizers).DebrisComponents.Capacity;
  if (puVar4 != puVar4 + (this->Optimizers).SpacecraftComponents._pad_0x0_0 * 2) {
    puVar1 = puVar1 + 1;
    do {
      this_00 = (ReferenceController *)*puVar1;
      puVar1[-1] = *puVar4;
      this_01 = (ReferenceController *)puVar4[1];
      *puVar1 = (uint)this_01;
      if (this_01 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(this_01);
      }
      if (this_00 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(this_00);
      }
      puVar4 = puVar4 + 2;
      puVar1 = puVar1 + 2;
    } while (puVar4 != (uint *)((this->Optimizers).DebrisComponents.Capacity +
                               (this->Optimizers).SpacecraftComponents._pad_0x0_0 * 8));
    return in_stack_00000004;
  }
  return in_stack_00000004;
}


//==== 0000807a80 00807a80_GetIconShape ====
// decompiled by BatchDecomp @ 00807a80 name=GetIconShape conv=__thiscall body=198

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: enum WidgetShape::Type __thiscall MinimapWidget__GetIconShape(void)const  */

Type __thiscall MinimapWidget__GetIconShape(MinimapWidget *this)

{
  ReferenceController *pRVar1;
  Component *pCVar2;
  Body *this_00;
  bool bVar3;
  CraftBlueprint *this_01;
  Type TVar4;
  
  pRVar1 = (this->ItemComponent).Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    bVar3 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (!bVar3) {
      (this->ItemComponent).Pointer = (Component *)0x0;
    }
  }
  pCVar2 = (this->ItemComponent).Pointer;
  pRVar1 = (pCVar2->Parent).Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    bVar3 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (!bVar3) {
      (pCVar2->Parent).Pointer = (Body *)0x0;
    }
  }
  this_00 = (pCVar2->Parent).Pointer;
  Body__GetSpacecraftComponent_Memoize(this_00);
  if ((this_00->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pRVar1 = (this_00->GetSpacecraftComponent_MemoizedValue).Data.Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    bVar3 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (!bVar3) {
      (this_00->GetSpacecraftComponent_MemoizedValue).Data.Pointer = (SpacecraftComponent *)0x0;
    }
  }
  this_01 = SpacecraftComponent__GetCraftDesign((this_00->GetSpacecraftComponent_MemoizedValue).Data.Pointer);
  CraftBlueprint__GetShipClass_Memoize(this_01);
  if ((char)(this_01->GetMainEngineModules_MemoizedValue).Data._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  TVar4 = CraftBlueprint__GetShapeFromClass(*(Type *)&(this_01->GetMainEngineModulePlacers_MemoizedValue).IsValidData);
  return TVar4;
}


//==== 0000807d80 00807d80_GetTooltip ====
// decompiled by BatchDecomp @ 00807d80 name=GetTooltip conv=__thiscall body=215

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::Str<char> __thiscall SpacecraftButton__GetTooltip(void)const  */

Str_L_char_G_ * __thiscall
SpacecraftButton__GetTooltip(SpacecraftButton *this,Str_L_char_G_ *__return_storage_ptr__)

{
  TacticalManager *this_00;
  ReferenceController *this_01;
  bool bVar1;
  char *pcVar2;
  bool bVar3;
  Str_L_char_G_ *pSVar4;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  undefined4 local_8;
  
  local_8 = 0;
  this_00 = (TacticalManager *)this->_pad_0x0_0;
  TacticalManager__GetStrategicGame_Memoize(this_00);
  if (*(char *)&(this_00->Effects).Controller == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  bVar3 = StrategicManager__IsNotInScreenshotMode((StrategicManager *)(this_00->Effects).Pointer);
  if (bVar3) {
    this_01 = (this->Spacecraft).Controller;
    if (this_01 != (ReferenceController *)0x0) {
      bVar3 = util__ReferenceController__IsDataStillValid(this_01);
      if (!bVar3) {
        (this->Spacecraft).Pointer = (SpacecraftComponent *)0x0;
      }
    }
    pSVar4 = SpacecraftComponent__GetName((this->Spacecraft).Pointer,&local_20);
    bVar1 = true;
    bVar3 = false;
  }
  else {
    pSVar4 = &local_14;
    local_14.Data = (char *)0x0;
    local_14.Capacity = 0;
    local_14.Length = 0;
    bVar1 = false;
    bVar3 = true;
  }
  pcVar2 = local_14.Data;
  util__Str_char___Str_char(__return_storage_ptr__,pSVar4);
  if ((bVar3) && (pcVar2 != (char *)0x0)) {
    operator_delete__(pcVar2);
  }
  if ((local_20.Data != (char *)0x0) && (bVar1)) {
    operator_delete__(local_20.Data);
  }
  return __return_storage_ptr__;
}


//==== 0000809f40 00809f40_FUN_00809f40 ====
void __thiscall FUN_00809f40(undefined4 *param_1,int *param_2);

// decompiled by BatchDecomp @ 00809f40 name=FUN_00809f40 conv=unknown body=372

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FUN_00809f40(undefined4 *param_1,int *param_2)

{
  double dVar1;
  int *piVar2;
  Vec3_L_double_G_ VVar3;
  bool bVar4;
  Vec3_L_double_G_ *pVVar5;
  CraftBlueprint *this;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 unaff_EDI;
  double dVar9;
  Vec3_L_double_G_ local_34;
  Vec2_L_double_G_ local_1c;
  
  if (((ReferenceController *)param_2[1] != (ReferenceController *)0x0) &&
     (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]), !bVar4
     )) {
    *param_2 = 0;
  }
  iVar7 = *param_2;
  if ((*(ReferenceController **)(iVar7 + 8) != (ReferenceController *)0x0) &&
     (bVar4 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar7 + 8)),
     !bVar4)) {
    *(undefined4 *)(iVar7 + 4) = 0;
  }
  pVVar5 = Body__GetPosition_km(*(Body **)(iVar7 + 4),&local_34);
  ((slice_view *)&VVar3.Z)->_0_4_ = (int)((ulonglong)pVVar5->Z >> 0x20);
  memcpy((void *)((slice_view *)&VVar3)->raw + 0, (const void *)((int)&pVVar5->X + 4), 16);
  ((slice_view *)&VVar3.Z)->_4_4_ = unaff_EDI;
  Minimap__GetMinimapLocation((Minimap *)*param_1,&local_1c,VVar3);
  if (((ReferenceController *)param_2[1] != (ReferenceController *)0x0) &&
     (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]), !bVar4
     )) {
    *param_2 = 0;
  }
  this = SpacecraftComponent__GetCraftDesign((SpacecraftComponent *)*param_2);
  CraftBlueprint__GetShipClass_Memoize(this);
  if ((char)(this->GetMainEngineModules_MemoizedValue).Data._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar9 = CraftBlueprint__GetIconSizeFromClass(*(Type *)&(this->GetMainEngineModulePlacers_MemoizedValue).IsValidData);
  piVar2 = (int *)param_1[1];
  iVar8 = (int)dVar9;
  bVar4 = true;
  iVar7 = 0;
  do {
    if (bVar4) {
      if ((iVar7 == 0) || (iVar6 = piVar2[3], iVar7 != 1)) {
        iVar6 = piVar2[2];
      }
      dVar9 = (double)(iVar8 + iVar6) + /*3e45798ee2308c3a*/1e-08;
      if ((iVar7 == 0) || (iVar6 = piVar2[1] - iVar8, iVar7 != 1)) {
        iVar6 = *piVar2 - iVar8;
      }
      dVar1 = local_1c.X;
      if ((iVar7 != 0) && (iVar7 == 1)) {
        dVar1 = local_1c.Y;
      }
      if ((((double)iVar6 - /*3e45798ee2308c3a*/1e-08 < dVar1) || (dVar1 < dVar9)) &&
         ((dVar9 < dVar1 || (dVar1 < (double)iVar6 - /*3e45798ee2308c3a*/1e-08)))) goto LAB_0080a0a3;
      bVar4 = true;
    }
    else {
LAB_0080a0a3:
      bVar4 = false;
    }
    iVar7 = iVar7 + 1;
    if (1 < iVar7) {
      return;
    }
  } while( true );
}


//==== 000080b290 0080b290_GetInfo ====
// decompiled by BatchDecomp @ 0080b290 name=GetInfo conv=__thiscall body=152

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: class util::Str<char> __thiscall MinimapWidget__GetInfo(void)const  */

Str_L_char_G_ * __thiscall MinimapWidget__GetInfo(MinimapWidget *this,Str_L_char_G_ *__return_storage_ptr__)

{
  ReferenceController *pRVar1;
  Component *pCVar2;
  Body *this_00;
  bool bVar3;
  
  pRVar1 = (this->ItemComponent).Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    bVar3 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (!bVar3) {
      (this->ItemComponent).Pointer = (Component *)0x0;
    }
  }
  pCVar2 = (this->ItemComponent).Pointer;
  pRVar1 = (pCVar2->Parent).Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    bVar3 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (!bVar3) {
      (pCVar2->Parent).Pointer = (Body *)0x0;
    }
  }
  this_00 = (pCVar2->Parent).Pointer;
  Body__GetSpacecraftComponent_Memoize(this_00);
  if ((this_00->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pRVar1 = (this_00->GetSpacecraftComponent_MemoizedValue).Data.Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    bVar3 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (!bVar3) {
      (this_00->GetSpacecraftComponent_MemoizedValue).Data.Pointer = (SpacecraftComponent *)0x0;
    }
  }
  SpacecraftComponent__GetName((this_00->GetSpacecraftComponent_MemoizedValue).Data.Pointer,__return_storage_ptr__);
  return __return_storage_ptr__;
}


//==== 0000813d90 00813d90__scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 00813d90 name=`scalar_deleting_destructor' conv=__thiscall body=184

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall CompartmentButton::`scalar deleting destructor'(unsigned int)
    */

void * __thiscall
CompartmentButton___scalar_deleting_destructor_(CompartmentButton *this,uint param_1)

{
  ReferenceController *pRVar1;
  pmf_d89bf606 *ppVar2;
  bool bVar3;
  ReferenceControllerRegistry *this_00;
  UIWidget *pUVar4;
  
  pRVar1 = (this->ModuleUIPanel).Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    bVar3 = util__ReferenceController__ReleaseStrongReference(pRVar1);
    if (bVar3) {
      pUVar4 = (this->ModuleUIPanel).Pointer;
      if (pUVar4 != (UIWidget *)0x0) {
        (**(code **)(pUVar4->_pad_0x0_0 + 4))(1);
        pUVar4 = (this->ModuleUIPanel).Pointer;
      }
      this_00 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(this_00,pUVar4);
      (this->ModuleUIPanel).Pointer = (UIWidget *)0x0;
    }
  }
  pRVar1 = (this->Compartment).Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  pRVar1 = (this->Ship).Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  ppVar2 = (this->CompartmentButtonMemoizationHandlerInstance).ResetFunctions.Data;
  (this->CompartmentButtonMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 =
       (int)((void *)(0x009194a4u));
  if (ppVar2 != (pmf_d89bf606 *)0x0) {
    operator_delete__(ppVar2);
  }
  (this->CompartmentButtonMemoizationHandlerInstance).ResetFunctions.Data = (pmf_d89bf606 *)0x0;
  (this->CompartmentButtonMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 =
       (int)((void *)(0x00919488u));
  UIButton___UIButton((UIButton *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,0x218);
  }
  return this;
}


//==== 00008149b0 008149b0_Click ====
// decompiled by BatchDecomp @ 008149b0 name=Click conv=__thiscall body=257

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: void __thiscall ModuleToggleActionButton__Click(void) */

void __thiscall ModuleToggleActionButton__Click(ModuleToggleActionButton *this)

{
  undefined4 stack0xfffffffc;
  Darray_L_bool__P__G_ *pDVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  ReferenceController *local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = IsToggled(this);
  pDVar1 = &this->Toggles;
  local_c = 0;
  iVar3 = (**(code **)(*(int *)pDVar1 + 0xc))();
  if (local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)*(int *)pDVar1)(&local_c);
      *(bool *)*puVar4 = !bVar2;
      local_c = local_c + 1;
      iVar3 = (**(code **)(*(int *)pDVar1 + 0xc))();
    } while (local_c < iVar3);
  }
  local_c = 0;
  iVar3 = (**(code **)(*(int *)&this->Ships + 0xc))();
  if (local_c < iVar3) {
    do {
      piVar5 = (int *)(**(code **)*(int *)&this->Ships)(&local_c);
      if ((*piVar5 != 0) && ((ReferenceController *)piVar5[1] != (ReferenceController *)0x0)) {
        bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]);
        if (bVar2) {
          if ((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) {
            bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]);
            if (!bVar2) {
              *piVar5 = 0;
            }
          }
          puVar4 = (undefined4 *)SpacecraftComponent__GetCraft((SpacecraftComponent *)*piVar5);
          if ((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) {
            bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]);
            if (!bVar2) {
              *puVar4 = 0;
            }
          }
          (*(code *)**(undefined4 **)*puVar4)();
          if (local_14 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(local_14);
          }
        }
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*(int *)&this->Ships + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000818080 00818080_GetLocation ====
// decompiled by BatchDecomp @ 00818080 name=GetLocation conv=__thiscall body=240

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::Maybe<struct util::Vec2<int> > __thiscall
   CompartmentButton__GetLocation(void)const  */

void __thiscall CompartmentButton__GetLocation(CompartmentButton *this)

{
  SpacecraftComponent *pSVar1;
  bool bVar2;
  int *in_stack_00000004;
  int iVar3;
  ReferenceController *pRVar4;
  int local_10;
  int local_c;
  undefined1 local_8;
  
  pRVar4 = (this->Ship).Controller;
  if (pRVar4 != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__IsDataStillValid(pRVar4);
    if (!bVar2) {
      (this->Ship).Pointer = (SpacecraftComponent *)0x0;
    }
  }
  pSVar1 = (this->Ship).Pointer;
  iVar3 = pSVar1->_pad_0x0_0;
  pRVar4 = (ReferenceController *)pSVar1->_pad_0x0_0;
  if (pRVar4 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar4);
  }
  bVar2 = TacticalManager__IsBodySelected((TacticalManager *)this->_pad_0x0_0,iVar3,pRVar4);
  if (bVar2) {
    CompartmentButton_GetDimensionScreenBounds_Memoize(this);
    if ((this->GetDimensionScreenBounds_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    local_8 = 1;
    local_10 = (int)(((this->GetDimensionScreenBounds_MemoizedValue).Data.Lower.X +
                     (this->GetDimensionScreenBounds_MemoizedValue).Data.Upper.X) *
                    /*3fe0000000000000*/0.5);
    local_c = (int)(((this->GetDimensionScreenBounds_MemoizedValue).Data.Lower.Y +
                    (this->GetDimensionScreenBounds_MemoizedValue).Data.Upper.Y) *
                   /*3fe0000000000000*/0.5);
  }
  else {
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
  }
  *in_stack_00000004 = local_10;
  in_stack_00000004[1] = local_c;
  *(undefined1 *)(in_stack_00000004 + 2) = local_8;
  return;
}


//==== 0000818170 00818170_GetLocation ====
// decompiled by BatchDecomp @ 00818170 name=GetLocation conv=__thiscall body=304

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::Maybe<struct util::Vec2<int> > __thiscall
   ShipArmorButton__GetLocation(void)const  */

void __thiscall ShipArmorButton__GetLocation(ShipArmorButton *this)

{
  undefined4 stack0xfffffffc;
  SpacecraftComponent *pSVar1;
  Manager *this_00;
  Vec3_L_double_G_ VVar2;
  bool bVar3;
  Vec3_L_double_G_ *pVVar4;
  CameraManager *this_01;
  int *in_stack_00000004;
  double *pdVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 uVar11;
  int iVar12;
  ReferenceController *pRVar13;
  Vec3_L_double_G_ local_3c;
  int *local_24;
  double local_20;
  undefined4 local_18;
  int iStack_14;
  int local_10;
  undefined1 local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_24 = in_stack_00000004;
  pRVar13 = (this->Ship).Controller;
  if (pRVar13 != (ReferenceController *)0x0) {
    bVar3 = util__ReferenceController__IsDataStillValid(pRVar13);
    if (!bVar3) {
      (this->Ship).Pointer = (SpacecraftComponent *)0x0;
    }
  }
  pSVar1 = (this->Ship).Pointer;
  if ((ReferenceController *)pSVar1->_pad_0x0_0 != (ReferenceController *)0x0) {
    bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)pSVar1->_pad_0x0_0);
    if (!bVar3) {
      pSVar1->_pad_0x0_0 = 0;
    }
  }
  this_00 = (Manager *)this->_pad_0x0_0;
  pVVar4 = Body__GetPosition_km((Body *)pSVar1->_pad_0x0_0,&local_3c);
  uVar6 = *(undefined4 *)&pVVar4->X;
  uVar7 = *(undefined4 *)((int)&pVVar4->X + 4);
  uVar8 = *(undefined4 *)&pVVar4->Y;
  uVar9 = *(undefined4 *)((int)&pVVar4->Y + 4);
  uVar10 = *(undefined4 *)&pVVar4->Z;
  uVar11 = (undefined1)((ulonglong)pVVar4->Z >> 0x20);
  pdVar5 = &local_20;
  this_01 = Manager__GetCameras(this_00);
  ((slice_view *)&VVar2.X)->_4_4_ = uVar6;
  ((slice_view *)&VVar2.X)->_0_4_ = pdVar5;
  ((slice_view *)&VVar2.Y)->_0_4_ = uVar7;
  ((slice_view *)&VVar2.Y)->_4_4_ = uVar8;
  ((slice_view *)&VVar2.Z)->_0_4_ = uVar9;
  ((slice_view *)&VVar2.Z)->_4_4_ = uVar10;
  CameraManager__GetScreenPosition(this_01,VVar2,(bool)uVar11);
  pRVar13 = (this->Ship).Controller;
  if (pRVar13 != (ReferenceController *)0x0) {
    bVar3 = util__ReferenceController__IsDataStillValid(pRVar13);
    if (!bVar3) {
      (this->Ship).Pointer = (SpacecraftComponent *)0x0;
    }
  }
  pSVar1 = (this->Ship).Pointer;
  iVar12 = pSVar1->_pad_0x0_0;
  pRVar13 = (ReferenceController *)pSVar1->_pad_0x0_0;
  if (pRVar13 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar13);
  }
  bVar3 = TacticalManager__IsBodySelected((TacticalManager *)this->_pad_0x0_0,iVar12,pRVar13);
  if ((bVar3) && ((char)local_10 != '\0')) {
    local_10 = (int)(double)CONCAT44(iStack_14,local_18);
    local_c = 1;
    iStack_14 = (int)local_20;
  }
  else {
    iStack_14 = 0;
    local_10 = 0;
    local_c = 0;
  }
  *local_24 = iStack_14;
  local_24[1] = local_10;
  *(undefined1 *)(local_24 + 2) = local_c;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00008196d0 008196d0_GetStatusString ====
// decompiled by BatchDecomp @ 008196d0 name=GetStatusString conv=__thiscall body=196

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: class util::Str<char> __thiscall ModuleUI__GetStatusString(void)const  */

Str_L_char_G_ * __thiscall ModuleUI__GetStatusString(ModuleUI *this,Str_L_char_G_ *__return_storage_ptr__)

{
  ReferenceController *pRVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  Str_L_char_G_ *pSVar5;
  Str_L_char_G_ *pSVar6;
  Module *pMVar7;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_30[16];
  void *local_20[4];
  Str_L_char_G_ local_10;
  
  pMVar7 = this->ModuleType;
  if (pMVar7 == (Module *)0x0) {
    if (((this->TargetCompartment).Pointer != (ModuleCompartment *)0x0) &&
       (pRVar1 = (this->TargetCompartment).Controller, pRVar1 != (ReferenceController *)0x0)) {
      bVar3 = util__ReferenceController__IsDataStillValid(pRVar1);
      if (bVar3) {
        pRVar1 = (this->TargetCompartment).Controller;
        if (pRVar1 != (ReferenceController *)0x0) {
          bVar3 = util__ReferenceController__IsDataStillValid(pRVar1);
          if (!bVar3) {
            (this->TargetCompartment).Pointer = (ModuleCompartment *)0x0;
          }
        }
        pMVar7 = *(Module **)&((this->TargetCompartment).Pointer)->LostPower;
        goto LAB_00819726;
      }
    }
    pMVar7 = (Module *)0x0;
  }
LAB_00819726:
  iVar2 = pMVar7->_pad_0x0_0;
  local_10.Data = (char *)0x0;
  local_10.Capacity = 0;
  local_10.Length = 0;
  uVar4 = GetCompartments(this);
  pSVar5 = (Str_L_char_G_ *)(**(code **)(iVar2 + 0x110))(local_20,uVar4);
  pSVar6 = &local_10;
  if (*(char *)&pSVar5[1].Data != '\0') {
    pSVar6 = pSVar5;
  }
  util__Str_char___Str_char(__return_storage_ptr__,pSVar6);
  if (local_20[0] != (void *)0x0) {
    operator_delete__(local_20[0]);
    local_20[0] = (void *)0x0;
  }
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_30);
  return __return_storage_ptr__;
}


//==== 0000821ad0 00821ad0_GetAdditionalMessage ====
// decompiled by BatchDecomp @ 00821ad0 name=GetAdditionalMessage conv=__thiscall body=325

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::Str<char> __thiscall
   BalloonPopupCombatPayload__GetAdditionalMessage(void)const  */

Str_L_char_G_ * __thiscall
BalloonPopupCombatPayload__GetAdditionalMessage(BalloonPopupCombatPayload *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xfffffffc;
  Type TVar1;
  bool bVar2;
  bool bVar3;
  char *pcVar4;
  Str_L_char_G_ *pSVar5;
  int iVar6;
  Str_L_char_G_ *pSVar7;
  CombatNotification *pCVar8;
  CombatNotification *pCVar9;
  Str_L_char_G_ local_28;
  Str_L_char_G_ *local_1c;
  CombatNotifier *local_18;
  Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_1c = __return_storage_ptr__;
  local_14.Capacity = 0;
  local_18 = this->Parent;
  pCVar9 = (local_18->PopupNotifiers).Data;
  pCVar8 = pCVar9 + (local_18->PopupNotifiers).Size;
  if (pCVar9 != pCVar8) {
    TVar1 = (this->Info).Type;
    do {
      if (((((TVar1 == ArmorDamaged) || (TVar1 == OutOfFuel)) || (TVar1 == OutOfPower)) ||
          ((TVar1 == Disarmed || (TVar1 == CrewKilled)))) ||
         ((TVar1 == SpacecraftDestroyed || (TVar1 == ModuleDestroyed)))) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (((TVar1 == WeaponFiring) || (TVar1 == CarrierLaunching)) || (TVar1 == ModuleDestroyed)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if ((((TVar1 == pCVar9->Type) && (((this->Info).ShipType == pCVar9->ShipType || (!bVar2)))) &&
          (((this->Info).ModuleType == pCVar9->ModuleType || (!bVar3)))) &&
         ((this->Info).FactionType == pCVar9->FactionType)) {
        local_14.Length = CONCAT31((int3)((uint)pCVar8 >> 8),1);
        iVar6 = (**(code **)*(int *)&local_18->PopupNotifiers)(&local_14.Capacity);
        if (1 < *(int *)(iVar6 + 0x18)) {
          pSVar7 = util__Printf(&local_28," (x%i)",*(int *)(iVar6 + 0x18));
          bVar3 = true;
          bVar2 = false;
          goto LAB_00821b8f;
        }
        break;
      }
      pCVar9 = pCVar9 + 1;
      local_14.Capacity = local_14.Capacity + 1;
    } while (pCVar9 != pCVar8);
  }
  pSVar7 = &local_14;
  local_14.Data = (char *)0x0;
  local_14.Capacity = 0;
  local_14.Length = 0;
  bVar3 = false;
  bVar2 = true;
LAB_00821b8f:
  pcVar4 = local_14.Data;
  pSVar5 = local_1c;
  util__Str_char___Str_char(local_1c,pSVar7);
  if ((bVar2) && (pcVar4 != (char *)0x0)) {
    operator_delete__(pcVar4);
  }
  if ((local_28.Data != (char *)0x0) && (bVar3)) {
    operator_delete__(local_28.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pSVar5;
}


//==== 0000889c20 00889c20_GetBackgroundColor ====
// decompiled by BatchDecomp @ 00889c20 name=GetBackgroundColor conv=__thiscall body=200

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual struct util::Color __thiscall UIWidget__GetBackgroundColor(void)const  */

Color * __thiscall UIWidget__GetBackgroundColor(UIWidget *this,Color *__return_storage_ptr__)

{
  CapitalShipComponent *this_00;
  int *piVar1;
  int iVar2;
  Maybe_L_util__Attribute_L_util__Color_G___G_ *pMVar3;
  HWND unaff_EDI;
  undefined1 local_54[24];
  float local_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  void *local_2c;
  _func___cdecl_Color_void_ptr *local_28;
  undefined **local_24;
  Str_L_char_G_ local_20;
  float local_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  this_00 = (CapitalShipComponent *)Manager__GetParent(unaff_EDI);
  piVar1 = (int *)CapitalShipComponent__GetID(this_00);
  iVar2 = (**(code **)(*(int *)(uintptr_t)piVar1 + 0x68))();
  ((slice_view *)&local_54)->_0_4_ = (void *)0x0;
  ((slice_view *)&local_54)->_4_4_ = (_func___cdecl_Color_void_ptr *)0x0;
  ((slice_view *)&local_54)->_8_4_ = ((void *)(0x00919980u));
  util__Str_char___Str_char((Str_L_char_G_ *)(local_54 + 0xc),(Str_L_char_G_ *)(iVar2 + 0x34));
  ((slice_view *)&local_54)->_8_4_ = ((void *)(0x0091d980u));
  pMVar3 = (Maybe_L_util__Attribute_L_util__Color_G___G_ *)local_54;
  if ((this->Attributes).BackgroundColor.IsValidData != false) {
    pMVar3 = &(this->Attributes).BackgroundColor;
  }
  local_24 = ((void *)(0x00919980u));
  local_3c = *(float *)(iVar2 + 0x40);
  fStack_38 = *(float *)(iVar2 + 0x44);
  fStack_34 = *(float *)(iVar2 + 0x48);
  fStack_30 = *(float *)(iVar2 + 0x4c);
  local_2c = (pMVar3->Data).Getter.Callee;
  local_28 = (pMVar3->Data).Getter.CallbackFunction;
  util__Str_char___Str_char(&local_20,(Str_L_char_G_ *)&(pMVar3->Data).Value._pad_0x0_0);
  local_14 = (pMVar3->Data).Value.Hue_degrees;
  fStack_10 = (pMVar3->Data).Value.Saturation;
  fStack_c = (pMVar3->Data).Value.Value;
  fStack_8 = (pMVar3->Data).Value.Alpha;
  local_24 = ((void *)(0x0091d980u));
  util__Attribute_struct_util__Color___Get((Attribute_L_struct_util__Color_G_ *)&local_2c,__return_storage_ptr__);
  if (local_20.Data != (char *)0x0) {
    operator_delete__(local_20.Data);
  }
  if ((void *)((slice_view *)&local_54)->_12_4_ != (void *)0x0) {
    operator_delete__((void *)((slice_view *)&local_54)->_12_4_);
  }
  return __return_storage_ptr__;
}


//==== 0000889f60 00889f60_GetLayoutOffsetFromParent ====
// decompiled by BatchDecomp @ 00889f60 name=GetLayoutOffsetFromParent conv=__thiscall body=154

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Maybe<struct util::Vec2<int> > __thiscall
   UIWidget__GetLayoutOffsetFromParent(void)const  */

void __thiscall UIWidget__GetLayoutOffsetFromParent(UIWidget *this)

{
  undefined4 stack0xffffffd4;
  ReferenceController *pRVar1;
  UIWidget *pUVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *in_stack_00000004;
  int iStack_28;
  undefined1 local_1c[12];
  undefined8 local_10;
  undefined8 local_c;
  undefined1 local_8;
  
  if (((this->ParentWidget).Pointer != (UIWidget *)0x0) &&
     (pRVar1 = (this->ParentWidget).Controller, pRVar1 != (ReferenceController *)0x0)) {
    iStack_28 = 0x889f82;
    bVar3 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (bVar3) {
      pRVar1 = (this->ParentWidget).Controller;
      if (pRVar1 != (ReferenceController *)0x0) {
        iStack_28 = 0x889f95;
        bVar3 = util__ReferenceController__IsDataStillValid(pRVar1);
        if (!bVar3) {
          (this->ParentWidget).Pointer = (UIWidget *)0x0;
        }
      }
      pUVar2 = (this->ParentWidget).Pointer;
util__GetLayoutOffsetFromParent((SpacecraftComponent *)&stack0xffffffd4);
      puVar4 = (undefined4 *)(**(code **)(*(int *)pUVar2 + 0xb4))(local_1c);
      goto LAB_00889fdf;
    }
  }
  ((slice_view *)&local_10)->_0_1_ = false;
  ((slice_view *)&local_10)->_1_1_ = false;
  ((slice_view *)&local_10)->_2_1_ = false;
  ((slice_view *)&local_10)->_3_1_ = false;
  puVar4 = &local_10;
  ((slice_view *)&local_c)->_0_1_ = false;
  ((slice_view *)&local_c)->_1_1_ = false;
  ((slice_view *)&local_c)->_2_1_ = false;
  ((slice_view *)&local_c)->_3_1_ = false;
  local_8 = 1;
LAB_00889fdf:
  *in_stack_00000004 = *puVar4;
  in_stack_00000004[1] = puVar4[1];
  *(undefined1 *)(in_stack_00000004 + 2) = *(undefined1 *)(puVar4 + 2);
  return;
}


//==== 00008c6970 008c6970_GetRawText ====
// decompiled by BatchDecomp @ 008c6970 name=GetRawText conv=__thiscall body=171

/* public: virtual class util::Str<char> __thiscall UIDecimalSlider__GetRawText(void)const  */

Str_L_char_G_ * __thiscall
UIDecimalSlider__GetRawText(UIDecimalSlider *this,Str_L_char_G_ *__return_storage_ptr__)

{
  int unaff_ESI;
  float10 fVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  
  if ((this[1]._pad_0x0_0 == 0) || ((code *)this[1]._pad_0x0_0 == (code *)0x0)) {
    dVar3 = *(double *)&this[1]._pad_0x0_0;
  }
  else {
    fVar1 = (float10)(*(code *)this[1]._pad_0x0_0)(this[1]._pad_0x0_0);
    dVar3 = (double)fVar1;
  }
  dVar2 = /*3ff0000000000000*/1.0;
  if (/*0000000000000000*/0.0 < dVar3) {
    if ((this[1]._pad_0x0_0 != 0) && ((code *)this[1]._pad_0x0_0 != (code *)0x0)) {
      fVar1 = (float10)(*(code *)this[1]._pad_0x0_0)(this[1]._pad_0x0_0);
      goto LAB_008c69ed;
    }
    dVar2 = *(double *)&this[1]._pad_0x0_0;
  }
  fVar1 = (float10)dVar2;
LAB_008c69ed:
  iVar4 = GlobalSignificantFigures;
  dVar3 = GetValue(this);
  PrintSigFigures(__return_storage_ptr__,
                  (double)CONCAT44(iVar4,(int)((ulonglong)(dVar3 / (double)fVar1) >> 0x20)),
                  unaff_ESI);
  return __return_storage_ptr__;
}


//==== 00008c96f0 008c96f0_GetDecimalPrint ====
// decompiled by BatchDecomp @ 008c96f0 name=GetDecimalPrint conv=__thiscall body=154

/* public: class util::Str<char> __thiscall PropertyWidgetData__GetDecimalPrint(double)const  */

Str_L_char_G_ * __thiscall
PropertyWidgetData__GetDecimalPrint(PropertyWidgetData *this,Str_L_char_G_ *__return_storage_ptr__,double param_1)

{
  undefined4 stack0xffffffc8;
  undefined4 stack0xfffffffc;
  Str_L_char_G_ SVar1;
  Str_L_char_G_ *pSVar2;
  int unaff_ESI;
  undefined4 in_stack_00000008;
  char *pcVar3;
  Str_L_char_G_ *__return_storage_ptr___00;
  Str_L_char_G_ local_28;
  undefined8 local_1c;
  Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_1c = CONCAT44(((slice_view *)&param_1)->_0_4_,in_stack_00000008);
  local_14.Data = (char *)0x0;
  local_14.Capacity = 0;
  local_14.Length = 0;
  pSVar2 = GetFullName(this,&local_28);
  __return_storage_ptr___00 = &local_14;
  pcVar3 = (char *)0x8c9730;
  GetUnitsOfType(__return_storage_ptr___00,pSVar2);
  if ((Str_L_char_G_ *)local_28.Data != (Str_L_char_G_ *)0x0) {
    __return_storage_ptr___00 = (Str_L_char_G_ *)0x8c9740;
    operator_delete__(local_28.Data);
    pSVar2 = (Str_L_char_G_ *)local_28.Data;
  }
  util__Str_char___Str_char((Str_L_char_G_ *)&stack0xffffffc8,&local_14);
  SVar1.Capacity = (int)pSVar2;
  SVar1.Data = (char *)__return_storage_ptr___00;
  SVar1.Length = unaff_ESI;
  Print(__return_storage_ptr__,(double)CONCAT44(pcVar3,(int)((ulonglong)local_1c >> 0x20)),SVar1);
  if (local_14.Data != (char *)0x0) {
    operator_delete__(local_14.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 00008de9e0 008de9e0___glfwPlatformCreateWindow ====
extern undefined4 FUN_008df460(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_008df650(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_008df900(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 008de9e0 name=__glfwPlatformCreateWindow conv=unknown body=188

undefined4
__glfwPlatformCreateWindow(int param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_008df900(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  if (*param_3 != 0) {
    if (param_3[1] == 0x36001) {
      iVar1 = __glfwInitWGL();
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = __glfwCreateContextWGL(param_1,param_3,param_4);
    }
    else {
      iVar1 = __glfwInitEGL();
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = __glfwCreateContextEGL(param_1,param_3,param_4);
    }
    if (iVar1 == 0) {
      return 0;
    }
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    ShowWindow(*(HWND *)(param_1 + 0x280),5);
    BringWindowToTop(*(HWND *)(param_1 + 0x280));
    SetForegroundWindow(*(HWND *)(param_1 + 0x280));
    SetFocus(*(HWND *)(param_1 + 0x280));
    iVar1 = FUN_008df460(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_008df650(param_1);
  }
  return 1;
}


//==== 00008deac0 008deac0___glfwPlatformDestroyWindow ====
// decompiled by BatchDecomp @ 008deac0 name=__glfwPlatformDestroyWindow conv=unknown body=149

void __glfwPlatformDestroyWindow(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x34);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0xc) == param_1)) {
    __glfwInputMonitorWindowChange(iVar1,0);
    __glfwRestoreVideoModeWin32(*(undefined4 *)(param_1 + 0x34));
  }
  if (*(code **)(param_1 + 0x224) != (code *)0x0) {
    (**(code **)(param_1 + 0x224))(param_1);
  }
  if (DAT_00994800 == param_1) {
    DAT_00994800 = 0;
  }
  if (*(HWND *)(param_1 + 0x280) != (HWND)0x0) {
    RemovePropW(*(HWND *)(param_1 + 0x280),L"GLFW");
    DestroyWindow(*(HWND *)(param_1 + 0x280));
    *(undefined4 *)(param_1 + 0x280) = 0;
  }
  if (*(HICON *)(param_1 + 0x284) != (HICON)0x0) {
    DestroyIcon(*(HICON *)(param_1 + 0x284));
  }
  if (*(HICON *)(param_1 + 0x288) != (HICON)0x0) {
    DestroyIcon(*(HICON *)(param_1 + 0x288));
  }
  return;
}

