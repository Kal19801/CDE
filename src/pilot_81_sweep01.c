// pilot_sweep_sweep01.c - assembled by scripts/sweep_assemble.py (r19)
// reuses fam8_assemble fix passes (zip oracle/in-batch protos/vft channel/data closure)
/* ---- r20 incomplete-type forward decls (pointer-position only) ---- */
typedef struct Astrogation__AstrogateResult Astrogation__AstrogateResult;
typedef struct Darray_L_GraphicsResource__Type_G_ Darray_L_GraphicsResource__Type_G_;
typedef struct Max_L_double_G_ Max_L_double_G_;
typedef struct util__Darray_L_class_util__WeakPtr_L_struct_RadiatorCompartment_G___G util__Darray_L_class_util__WeakPtr_L_struct_RadiatorCompartment_G___G;
typedef struct util__PhysicalState_L_struct_util__Vec3_L_double_G___G util__PhysicalState_L_struct_util__Vec3_L_double_G___G;
typedef struct util__WeakPtr_L_class_Body_G util__WeakPtr_L_class_Body_G;
typedef struct util__WeakPtr_L_class_CelestialObject_G util__WeakPtr_L_class_CelestialObject_G;
typedef struct util__WeakPtr_L_class_Fleet_G util__WeakPtr_L_class_Fleet_G;
typedef struct util__WeakPtr_L_class_LevelEditorBody_G util__WeakPtr_L_class_LevelEditorBody_G;
typedef struct util__WeakPtr_L_class_SpacecraftComponent_G util__WeakPtr_L_class_SpacecraftComponent_G;
typedef struct util__WeakPtr_L_struct_UIWidget_G util__WeakPtr_L_struct_UIWidget_G;
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
#undef AmmoBaySubModule__GetAmmoMass_kg
#define AmmoBaySubModule__GetAmmoMass_kg AmmoBaySubModule__GetAmmoMass_kg__r20
#undef BriefingsHandler__PlaySelectedLevel
#define BriefingsHandler__PlaySelectedLevel BriefingsHandler__PlaySelectedLevel__r20
#undef CapitalShipComponent__GetID
#define CapitalShipComponent__GetID CapitalShipComponent__GetID__r20
#undef CombatNotifier__TickPopups
#define CombatNotifier__TickPopups CombatNotifier__TickPopups__r20
#undef CraftBlueprintArmor__GetPolygonalArmorScaling
#define CraftBlueprintArmor__GetPolygonalArmorScaling CraftBlueprintArmor__GetPolygonalArmorScaling__r20
#undef CraftBlueprintArmor__GetTotalArmorHeight_m
#define CraftBlueprintArmor__GetTotalArmorHeight_m CraftBlueprintArmor__GetTotalArmorHeight_m__r20
#undef CraftBlueprint__GetPeakHeatSignature_W
#define CraftBlueprint__GetPeakHeatSignature_W CraftBlueprint__GetPeakHeatSignature_W__r20
#undef CraftBlueprint__GetRadiatorInterreflectionEfficiency_Percent
#define CraftBlueprint__GetRadiatorInterreflectionEfficiency_Percent CraftBlueprint__GetRadiatorInterreflectionEfficiency_Percent__r20
#undef DrawAntialiasedRect
#define DrawAntialiasedRect DrawAntialiasedRect__r20
#undef FUN_0048faf0
#define FUN_0048faf0 FUN_0048faf0__r20
#undef FUN_0059d050
#define FUN_0059d050 FUN_0059d050__r20
#undef FUN_005ab410
#define FUN_005ab410 FUN_005ab410__r20
#undef FUN_005d9910
#define FUN_005d9910 FUN_005d9910__r20
#undef FUN_006c2b50
#define FUN_006c2b50 FUN_006c2b50__r20
#undef FUN_00855e80
#define FUN_00855e80 FUN_00855e80__r20
#undef FUN_00897210
#define FUN_00897210 FUN_00897210__r20
#undef FUN_008975c0
#define FUN_008975c0 FUN_008975c0__r20
#undef FUN_008bc910
#define FUN_008bc910 FUN_008bc910__r20
#undef FillArc
#define FillArc FillArc__r20
#undef GameModel__RenderSimple
#define GameModel__RenderSimple GameModel__RenderSimple__r20
#undef LevelEditor__IsAFleetSelected
#define LevelEditor__IsAFleetSelected LevelEditor__IsAFleetSelected__r20
#undef LevelRecordSlotUI__GetRecordInfo
#define LevelRecordSlotUI__GetRecordInfo LevelRecordSlotUI__GetRecordInfo__r20
#undef MatterComponent__MatterComponent
#define MatterComponent__MatterComponent MatterComponent__MatterComponent__r20
#undef ModuleDesignManager__RefreshCurrentModule
#define ModuleDesignManager__RefreshCurrentModule ModuleDesignManager__RefreshCurrentModule__r20
#undef Module__GetBoundingSphereRadius_m
#define Module__GetBoundingSphereRadius_m Module__GetBoundingSphereRadius_m__r20
#undef Module__GetTotalRadiation_W
#define Module__GetTotalRadiation_W Module__GetTotalRadiation_W__r20
#undef Module__InnerSortFunction
#define Module__InnerSortFunction Module__InnerSortFunction__r20
#undef NuclearReactorSubModule__GetTemperatureJump_K
#define NuclearReactorSubModule__GetTemperatureJump_K NuclearReactorSubModule__GetTemperatureJump_K__r20
#undef PauseMenuHandler__Clear
#define PauseMenuHandler__Clear PauseMenuHandler__Clear__r20
#undef PauseMenuHandler__Open
#define PauseMenuHandler__Open PauseMenuHandler__Open__r20
#undef PrintLength
#define PrintLength PrintLength__r20
#undef RefractiveIndexSpectrum__GetReflectanceCoefficient
#define RefractiveIndexSpectrum__GetReflectanceCoefficient RefractiveIndexSpectrum__GetReflectanceCoefficient__r20
#undef RefractiveIndexSpectrum__GetTransmittance
#define RefractiveIndexSpectrum__GetTransmittance RefractiveIndexSpectrum__GetTransmittance__r20
#undef RefuelerCompartment__GetReactionMassLeft_kg
#define RefuelerCompartment__GetReactionMassLeft_kg RefuelerCompartment__GetReactionMassLeft_kg__r20
#undef ScenarioEditor__RebuildCurrentLevel
#define ScenarioEditor__RebuildCurrentLevel ScenarioEditor__RebuildCurrentLevel__r20
#undef ShipGroupUI__AreShipsNonStationary
#define ShipGroupUI__AreShipsNonStationary ShipGroupUI__AreShipsNonStationary__r20
#undef ShipGroupUI__CanUnsplitUnits
#define ShipGroupUI__CanUnsplitUnits ShipGroupUI__CanUnsplitUnits__r20
#undef ShipGroupUI__IsGroupAllied
#define ShipGroupUI__IsGroupAllied ShipGroupUI__IsGroupAllied__r20
#undef ShipListUI__RequestRebuild
#define ShipListUI__RequestRebuild ShipListUI__RequestRebuild__r20
#undef SpacecraftTargeting__UntargetAllCompartments
#define SpacecraftTargeting__UntargetAllCompartments SpacecraftTargeting__UntargetAllCompartments__r20
#undef TacticalManager__GetNotifications
#define TacticalManager__GetNotifications TacticalManager__GetNotifications__r20
#undef UICompartmentInfo__GetRadiationHazardInfo
#define UICompartmentInfo__GetRadiationHazardInfo UICompartmentInfo__GetRadiationHazardInfo__r20
#undef UICompartmentInfo__GetRadiatorInterreflectionInfo
#define UICompartmentInfo__GetRadiatorInterreflectionInfo UICompartmentInfo__GetRadiatorInterreflectionInfo__r20
#undef UIWidget__GetCustomTheme
#define UIWidget__GetCustomTheme UIWidget__GetCustomTheme__r20
#undef UIWidget__GetForegroundColor
#define UIWidget__GetForegroundColor UIWidget__GetForegroundColor__r20
#undef UIWidget__GetRootParent
#define UIWidget__GetRootParent UIWidget__GetRootParent__r20
#undef UIWidget__GetTheme
#define UIWidget__GetTheme UIWidget__GetTheme__r20
#undef WorldObject__AsLevelEditorBody
#define WorldObject__AsLevelEditorBody WorldObject__AsLevelEditorBody__r20
#undef WorldObject__IsValid
#define WorldObject__IsValid WorldObject__IsValid__r20
#undef _SOIL_direct_load_DDS
#define _SOIL_direct_load_DDS _SOIL_direct_load_DDS__r20
#undef __glfwInputWindowCloseRequest
#define __glfwInputWindowCloseRequest __glfwInputWindowCloseRequest__r20
#undef _ftol3_except
#define _ftol3_except _ftol3_except__r20
/* ---- externs: stub-oracle names (K&R; ret types by call site) ---- */
extern int TacticalManager_GetStrategicGame_Memoize(); /* K&R stub; ret by call site */
extern int TacticalManager__GetAllBodies_Clear(); /* K&R stub; ret by call site */
extern int util__Attribute_struct_util__Color___Get(); /* K&R stub; ret by call site */
extern int util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2(); /* K&R stub; ret by call site */
extern int util__Darray_struct_CombatNotification___operator(); /* K&R stub; ret by call site */
extern int util__Darray_struct_CraftSplinePoint___Darray_struct_CraftSplinePoint(); /* K&R stub; ret by call site */

//==== 0000488170 00488170__SOIL_direct_load_DDS ====
// decompiled by BatchDecomp @ 00488170 name=_SOIL_direct_load_DDS conv=unknown body=209

undefined4 __fastcall _SOIL_direct_load_DDS(char *param_1,undefined4 param_2,undefined4 param_3)

{
  FILE *_File;
  size_t _Size;
  void *_DstBuf;
  undefined4 uVar1;
  
  if (param_1 == (char *)0x0) {
    _result_string_pointer = s_NULL_filename;
    return 0;
  }
  _File = fopen(param_1,"rb");
  if (_File == (FILE *)0x0) {
    _result_string_pointer = s_Can_not_find_DDS_file;
    return 0;
  }
  fseek(_File,0,2);
  _Size = ftell(_File);
  fseek(_File,0,0);
  _DstBuf = malloc(_Size);
  if (_DstBuf == (void *)0x0) {
    _result_string_pointer = s_malloc_failed;
    fclose(_File);
    return 0;
  }
  fread(_DstBuf,1,_Size,_File);
  fclose(_File);
  uVar1 = _SOIL_direct_load_DDS_from_memory(param_2,param_3);
  free(_DstBuf);
  return uVar1;
}


//==== 000048f8c0 0048f8c0_FUN_0048f8c0 ====
extern undefined4 FUN_0048f780(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void FUN_0048f8c0(void);

// decompiled by BatchDecomp @ 0048f8c0 name=FUN_0048f8c0 conv=unknown body=23

void FUN_0048f8c0(void)

{
  undefined4 stack0x0000000c;
  FUN_0048f780(&stack0x0000000c);
  return;
}


//==== 000048faf0 0048faf0_FUN_0048faf0 ====
extern undefined4 FUN_0048f780(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_0048f8e0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
bool FUN_0048faf0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8, undefined4 param_9);

// decompiled by BatchDecomp @ 0048faf0 name=FUN_0048faf0 conv=unknown body=92

bool FUN_0048faf0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  undefined4 stack0x0000002c;
  FILE *_File;
  
  _File = fopen(param_1,"wb");
  if (_File != (FILE *)0x0) {
    FUN_0048f780(&stack0x0000002c);
    FUN_0048f8e0(param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    fclose(_File);
  }
  return _File != (FILE *)0x0;
}


//==== 0000496ce0 00496ce0_RenderSimple ====
// decompiled by BatchDecomp @ 00496ce0 name=RenderSimple conv=__thiscall body=31

/* public: void __thiscall GameModel__RenderSimple(void)const  */

void __thiscall GameModel__RenderSimple(GameModel *this)

{
  bool bVar1;
  
  bVar1 = VertexBufferObjectInterface__IsGenerated((VertexBufferObjectInterface *)this);
  if ((bVar1) && (this->StructureComposition != (Material *)0x0)) {
    VertexBufferObjectInterface__Render((VertexBufferObjectInterface *)this);
    return;
  }
  return;
}


//==== 00004d7410 004d7410_Max_double_ ====
// decompiled by BatchDecomp @ 004d7410 name=Max_L_double_G_ conv=__cdecl body=148

/* double __cdecl util__GetFormationForwardSeparation_km(class util__Darray_L_double_G_ const &) */

double __cdeclutil__GetFormationForwardSeparation_km(Darray_L_double_G_ *param_1)

{
  undefined4 stack0xfffffffc;
  int iVar1;
  double *pdVar2;
  float10 extraout_ST0;
  undefined4 local_18;
  double local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
  if (iVar1 == 0) {
    local_14 = 0.0;
  }
  else {
    local_18 = 0;
    pdVar2 = (double *)(**(code **)*(int *)param_1)(&local_18);
    local_c = 0;
    local_14 = *pdVar2;
    iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
    if (local_c < iVar1) {
      do {
        pdVar2 = (double *)(**(code **)*(int *)param_1)(&local_c);
        if (local_14 <= *pdVar2) {
          local_14 = *pdVar2;
        }
        local_c = local_c + 1;
        iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
      } while (local_c < iVar1);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00004d74d0 004d74d0_MethodCaller__public__void___thiscall_StrategicManager__NextMission_void__ ====
// decompiled by BatchDecomp @ 004d74d0 name=MethodCaller<&public:_void___thiscall_StrategicManager__NextMission(void)> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_class_StrategicManager_void___MethodCaller__public__void___thiscall_StrategicManager__NextMission_void__(void *) */

void __cdecl
util__DelegateFactory_class_StrategicManager_void___MethodCaller__public__void___thiscall_StrategicManager__NextMission_void__(void *param_1)

{
  StrategicManager__NextMission((StrategicManager *)param_1);
  return;
}


//==== 00004e3870 004e3870_GetRecordInfo ====
// decompiled by BatchDecomp @ 004e3870 name=GetRecordInfo conv=__thiscall body=87

/* public: class Str_L_char_G_ __thiscall LevelRecordSlotUI__GetRecordInfo(void)const  */

Str_L_char_G_ * __thiscall
LevelRecordSlotUI__GetRecordInfo(LevelRecordSlotUI *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xffffffd4;
  undefined4 stack0xfffffffc;
  Str_L_char_G_ SVar1;
  int unaff_EDI;
  Maybe_L_double_G_ *__return_storage_ptr___00;
  Attribute_L_LevelRecord_G_ *pAVar2;
  LevelRecordMetadata *pLVar3;
  Maybe_L_double_G_ local_18;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pLVar3 = &this->Metadata;
  pAVar2 = &this->Record;
  __return_storage_ptr___00 = &local_18;
  LevelRecord__GetValue(__return_storage_ptr___00,(Attribute_L_struct_LevelRecord_G_ *)pAVar2,pLVar3);
  if (local_18.IsValidData == false) {
    util__Str_char___Str_char__o5(__return_storage_ptr__,"-");
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return __return_storage_ptr__;
  }
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffffd4,&(this->Metadata).Name);
  SVar1.Capacity = (int)pLVar3;
  SVar1.Data = (char *)pAVar2;
  SVar1.Length = unaff_EDI;
  Print(__return_storage_ptr__,(double)CONCAT44(__return_storage_ptr___00,((slice_view *)&local_18.Data)->_4_4_),SVar1
       );
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 00004fb600 004fb600_MethodCaller__public__void___thiscall_PauseMenuHandler__NextMission_void__ ====
// decompiled by BatchDecomp @ 004fb600 name=MethodCaller<&public:_void___thiscall_PauseMenuHandler__NextMission(void)> conv=__cdecl body=27

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_struct_PauseMenuHandler_void___MethodCaller__public__void___thiscall_PauseMenuHandler__NextMission_void__(void *) */

void __cdecl
util__DelegateFactory_struct_PauseMenuHandler_void___MethodCaller__public__void___thiscall_PauseMenuHandler__NextMission_void__(void *param_1)

{
  PauseMenuHandler__Clear((PauseMenuHandler *)param_1);
  StrategicManager__NextMission(*(StrategicManager **)((int)param_1 + 0x168));
  return;
}


//==== 00004fb640 004fb640_MethodCaller__public__void___thiscall_PauseMenuHandler__Open_void__ ====
// decompiled by BatchDecomp @ 004fb640 name=MethodCaller<&public:_void___thiscall_PauseMenuHandler__Open(void)> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_struct_PauseMenuHandler_void___MethodCaller__public__void___thiscall_PauseMenuHandler__Open_void__(void
   *) */

void __cdecl
util__DelegateFactory_struct_PauseMenuHandler_void___MethodCaller__public__void___thiscall_PauseMenuHandler__Open_void__(void *param_1)

{
  PauseMenuHandler__Open((PauseMenuHandler *)param_1);
  return;
}


//==== 0000515c30 00515c30_GetPolygonalArmorScaling ====
// decompiled by BatchDecomp @ 00515c30 name=GetPolygonalArmorScaling conv=__thiscall body=131

/* public: double __thiscall CraftBlueprintArmor__GetPolygonalArmorScaling(double)const  */

double __thiscall
CraftBlueprintArmor__GetPolygonalArmorScaling(CraftBlueprintArmor *this,double param_1)

{
  Maybe_L_double_G_ *pMVar1;
  undefined4 unaff_ESI;
  undefined1 local_14[16];
  
  if ((this->ArmorLayers)._pad_0x0_0 == 0) {
    return 1.0;
  }
  GetSurfacePointFromAngle
            (this,(Vec2_L_double_G_ *)local_14,
             (double)CONCAT44(unaff_ESI,(int)((ulonglong)param_1 >> 0x20)));
  param_1 = (double)((slice_view *)&local_14)->_8_8_ * (double)((slice_view *)&local_14)->_8_8_ +
            (double)((slice_view *)&local_14)->_0_8_ * (double)((slice_view *)&local_14)->_0_8_;
  pMVar1 = util__Sqrt((Maybe_L_double_G_ *)local_14,&param_1);
  if (pMVar1->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return pMVar1->Data;
}


//==== 0000518620 00518620_GetTotalArmorHeight_m ====
// decompiled by BatchDecomp @ 00518620 name=GetTotalArmorHeight_m conv=__thiscall body=143

/* public: double __thiscall CraftBlueprintArmor__GetTotalArmorHeight_m(void)const  */

double __thiscall CraftBlueprintArmor__GetTotalArmorHeight_m(CraftBlueprintArmor *this)

{
  undefined4 stack0xfffffffc;
  float10 extraout_ST0;
  undefined4 local_18;
  CraftSplinePoint *pCStack_14;
  double dStack_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_18 = 0;
  pCStack_14 = (CraftSplinePoint *)0x0;
  dStack_10 = 0.0;
  CraftBlueprintArmor__GetOuterArmorSpline_m_Memoize(this);
  if ((char)(this->GetArmorPlatesPerSegment_MemoizedValue).Data._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  util__Darray_struct_CraftSplinePoint___Darray_struct_CraftSplinePoint((Darray_L_struct_CraftSplinePoint_G_ *)&local_18,
             (Darray_L_struct_CraftSplinePoint_G_ *)
             &(this->GetUnrolledDimensionsOfAllLayers_m_MemoizedValue).Data.Data);
  if (((slice_view *)&dStack_10)->_0_4_ < 1) {
    dStack_10 = 0.0;
  }
  else {
    dStack_10 = *(double *)(pCStack_14 + ((slice_view *)&dStack_10)->_0_4_ * 0x18 + -8) -
                *(double *)(pCStack_14 + 0x10);
  }
  if (pCStack_14 != (CraftSplinePoint *)0x0) {
    CraftSplinePoint___vector_deleting_destructor_(pCStack_14,3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00005568d0 005568d0_GetPeakHeatSignature_W ====
// decompiled by BatchDecomp @ 005568d0 name=GetPeakHeatSignature_W conv=__thiscall body=175

/* public: double __thiscall CraftBlueprint__GetPeakHeatSignature_W(void)const  */

double __thiscall CraftBlueprint__GetPeakHeatSignature_W(CraftBlueprint *this)

{
  undefined4 stack0xfffffffc;
  int iVar1;
  undefined4 *puVar2;
  float10 extraout_ST0;
  double dVar3;
  undefined **local_24;
  void *pvStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  double local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_24 = (undefined **)0x0;
  pvStack_20 = (void *)0x0;
  uStack_1c = 0;
  uStack_18 = 0;
  GetModules(this);
  util__Darray_class_WeaponModule____RemoveDuplicates((Darray_L_class_WeaponModule_P_G_ *)&local_24);
  local_c = 0;
  local_14 = 0.0;
  iVar1 = (*(code *)local_24[3])();
  if (local_c < iVar1) {
    do {
      puVar2 = (undefined4 *)(*(code *)*local_24)(&local_c);
      dVar3 = GetPeakHeatTransferRateForModule_W(this,(Module *)*puVar2);
      local_14 = dVar3 + local_14;
      local_c = local_c + 1;
      iVar1 = (*(code *)local_24[3])();
    } while (local_c < iVar1);
  }
  local_24 = ((void *)(0x009199e4u));
  if (pvStack_20 != (void *)0x0) {
    operator_delete__(pvStack_20);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 0000577dc0 00577dc0_MethodCaller__private__void___thiscall_ModuleDesignManager__RefreshAndRename_void__ ====
// decompiled by BatchDecomp @ 00577dc0 name=MethodCaller<&private:_void___thiscall_ModuleDesignManager__RefreshAndRename(void)> conv=__cdecl body=52

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_class_ModuleDesignManager_void___MethodCaller__private__void___thiscall_ModuleDesignManager__RefreshAndRename_void__(void *) */

void __cdecl
util__DelegateFactory_class_ModuleDesignManager_void___MethodCaller__private__void___thiscall_ModuleDesignManager__RefreshAndRename_void__(void *param_1)

{
  GameManager *this;
  SimpleSerializationManager *this_00;
  Reflectable *hWnd;
  Str_L_char_G_ *pSVar1;
  
  hWnd = *(Reflectable **)((int)param_1 + 0x10);
  pSVar1 = &hWnd->Name;
  this = (GameManager *)Manager__GetParent((HWND)hWnd);
  this_00 = (SimpleSerializationManager *)GameManager__GetDataManager(this);
  SimpleSerializationManager__RenameDatum(this_00,hWnd,pSVar1);
  *(undefined1 *)(*(int *)((int)param_1 + 0x10) + 0x68) = 1;
  ModuleDesignManager__RefreshCurrentModule((ModuleDesignManager *)param_1);
  return;
}


//==== 00005a0c00 005a0c00_GetRadiatorsCoolingThis ====
extern undefined4 FUN_0059e5f0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 005a0c00 name=GetRadiatorsCoolingThis conv=__thiscall body=64

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util__Darray_L_class_util__WeakPtr_L_struct_RadiatorCompartment_G___G __thiscall
   ModuleCompartment__GetRadiatorsCoolingThis(bool)const  */

undefined4 __thiscall
ModuleCompartment__GetRadiatorsCoolingThis(ModuleCompartment *this,bool param_1)

{
  undefined4 stack0x00000008;
  undefined3 in_stack_00000005;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_18[16];
  uint local_8;
  
  local_8 = local_8 & 0xffffff00;
  FUN_0059d050(local_18,&this->TargetingCompartments,local_8);
  FUN_0059e5f0(_param_1,local_18,&stack0x00000008);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_18);
  return _param_1;
}


//==== 00005ab410 005ab410_FUN_005ab410 ====
void __thiscall FUN_005ab410(int *param_1,int *param_2);

// decompiled by BatchDecomp @ 005ab410 name=FUN_005ab410 conv=unknown body=269

void __thiscall FUN_005ab410(int *param_1,int *param_2)

{
  undefined4 stack0xfffffffc;
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  uint unaff_EDI;
  longlong lVar9;
  int local_20;
  undefined **local_1c;
  void *pvStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int local_c;
  uint local_8;
  undefined4 uVar10;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar5 = *param_1;
  local_1c = (undefined **)0x0;
  pvStack_18 = (void *)0x0;
  iStack_14 = 0;
  uStack_10 = 0;
  iVar7 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  util__Darray_struct_util__Vec2_double_____Darray_struct_util__Vec2_double((Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_1c,iVar7);
  local_c = 0;
  iVar7 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  if (local_c < iVar7) {
    lVar9 = (ulonglong)unaff_EDI << 0x20;
    do {
      uVar10 = *(undefined4 *)((char *)&lVar9 + 4);
      lVar9 = CONCAT44(uVar10,&local_c);
      puVar8 = (undefined8 *)(**(code **)*param_2)(&local_c,uVar10);
      iVar7 = iStack_14;
      dVar1 = *(double *)(iVar5 + 0x1c0);
      dVar2 = *(double *)(iVar5 + 0x1c8);
      dVar3 = (double)puVar8[1];
      uVar4 = *puVar8;
      local_20 = iStack_14 + 1;
      util__Darray_struct_util__Vec2_double_____SetSize((Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_1c,&local_20);
      bVar6 = util__Darray_struct_util__Vec2_double_____CheckSize((Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_1c,iVar7);
      if (bVar6) {
        *(double *)((int)pvStack_18 + iStack_14 * 0x10 + -0x10) = (dVar1 + dVar2) - dVar3;
        *(undefined8 *)((int)pvStack_18 + iStack_14 * 0x10 + -8) = uVar4;
      }
      local_c = local_c + 1;
      iVar7 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
    } while (local_c < iVar7);
  }
  OutlineAntialiasedSpline((Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_1c,0,*(double *)param_1[1]);
  local_1c = ((void *)(0x00919ac4u));
  if (pvStack_18 != (void *)0x0) {
    operator_delete__(pvStack_18);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00005bb040 005bb040_MethodCaller__public__void___thiscall_PropellantTankCompartment__Detach_void__ ====
// decompiled by BatchDecomp @ 005bb040 name=MethodCaller<&public:_void___thiscall_PropellantTankCompartment__Detach(void)> conv=__cdecl body=12

/* public: static void __cdecl util__DelegateFactory_struct_PropellantTankCompartment_void___MethodCaller__public__void___thiscall_PropellantTankCompartment__Detach_void__(void *) */

void __cdecl
util__DelegateFactory_struct_PropellantTankCompartment_void___MethodCaller__public__void___thiscall_PropellantTankCompartment__Detach_void__(void *param_1)

{
  PropellantTankCompartment__Detach((PropellantTankCompartment *)param_1);
  return;
}


//==== 00005cc450 005cc450_GetBoundingSphereRadius_m ====
// decompiled by BatchDecomp @ 005cc450 name=GetBoundingSphereRadius_m conv=__thiscall body=254

/* public: double __thiscall Module__GetBoundingSphereRadius_m(void)const  */

double __thiscall Module__GetBoundingSphereRadius_m(Module *this)

{
  undefined4 stack0xfffffffc;
  Maybe_L_double_G_ *pMVar1;
  float10 extraout_ST0;
  double dVar2;
  Maybe_L_double_G_ local_60;
  undefined1 local_50[16];
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  (**(code **)(*(int *)this + 0xac))(&local_38);
  local_40 = local_18 * local_18 + local_20 * local_20 + local_10 * local_10;
  pMVar1 = util__Sqrt((Maybe_L_double_G_ *)local_50,&local_40);
  if (pMVar1->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  ((slice_view *)&local_50)->_8_8_ = pMVar1->Data;
  local_40 = local_30 * local_30 + local_38 * local_38 + local_28 * local_28;
  pMVar1 = util__Sqrt(&local_60,&local_40);
  if (pMVar1->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar2 = pMVar1->Data;
  if (pMVar1->Data <= (double)((slice_view *)&local_50)->_8_8_) {
    dVar2 = (double)((slice_view *)&local_50)->_8_8_;
  }
  ((slice_view *)&local_50)->_8_8_ = dVar2;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00005ced50 005ced50_GetTotalRadiation_W ====
// decompiled by BatchDecomp @ 005ced50 name=GetTotalRadiation_W conv=__thiscall body=51

/* public: double __thiscall Module__GetTotalRadiation_W(void)const  */

double __thiscall Module__GetTotalRadiation_W(Module *this)

{
  undefined4 stack0xfffffffc;
  float10 extraout_ST0;
  undefined1 local_20[24];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  (**(code **)(*(int *)this + 0xcc))(local_20);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00005cee70 005cee70_InnerSortFunction ====
// decompiled by BatchDecomp @ 005cee70 name=InnerSortFunction conv=__thiscall body=79

/* public: virtual bool __thiscall Module__InnerSortFunction(class Module const *,class Module const
   *)const  */

bool __thiscall Module__InnerSortFunction(Module *this,Module *param_1,Module *param_2)

{
  Type TVar1;
  char *pcVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  
  if (param_2->_pad_0x0_0 < 1) {
    pcVar2 = "";
  }
  else {
    pcVar2 = (char *)param_2->_pad_0x0_0;
  }
  if (0 < param_1->_pad_0x0_0) {
    TVar1 = util__InnerSortFunction((char *)param_1->_pad_0x0_0,pcVar2);
    return CONCAT31(extraout_var,TVar1) == 2;
  }
  TVar1 = util__InnerSortFunction("",pcVar2);
  return CONCAT31(extraout_var_00,TVar1) == 2;
}


//==== 00005d9910 005d9910_FUN_005d9910 ====
void __thiscall FUN_005d9910(undefined4 *param_1,double param_2,double param_3,bool param_4);

// decompiled by BatchDecomp @ 005d9910 name=FUN_005d9910 conv=unknown body=265

void __thiscall FUN_005d9910(undefined4 *param_1,double param_2,double param_3,bool param_4)

{
  double dVar1;
  int *piVar2;
  Vec2_L_double_G_ VVar3;
  Vec2_L_double_G_ VVar4;
  double dVar5;
  
  if (/*3ff0000000000000*/1.0 <= param_3) {
    dVar5 = *(double *)*param_1;
    dVar5 = /*3ff0000000000000*/1.0 -
            ((dVar5 - param_3) / (dVar5 - /*3ff0000000000000*/1.0)) * /*3fe0000000000000*/0.5;
  }
  else {
    dVar5 = param_3 * /*3fe0000000000000*/0.5;
  }
  piVar2 = (int *)param_1[1];
  if (/*3ff0000000000000*/1.0 <= param_2) {
    dVar1 = *(double *)*param_1;
    param_2 = /*3ff0000000000000*/1.0 -
              ((dVar1 - param_3) / (dVar1 - /*3ff0000000000000*/1.0)) * /*3fe0000000000000*/0.5;
  }
  else {
    param_2 = param_2 * /*3fe0000000000000*/0.5;
  }
  VVar3.Y = (double)piVar2[1];
  VVar3.X = (double)((int)((double)*(int *)param_1[2] * param_2) + *piVar2);
  VVar4.Y = (double)(piVar2[1] + 10);
  VVar4.X = (double)((int)((double)*(int *)param_1[2] * dVar5) + *piVar2);
  DrawAntialiasedRect(VVar3,VVar4,0.0,/*3ff0000000000000*/1.0,param_4);
  return;
}


//==== 00005dc8a0 005dc8a0_GetTemperatureJump_K ====
// decompiled by BatchDecomp @ 005dc8a0 name=GetTemperatureJump_K conv=__thiscall body=126

/* public: double __thiscall NuclearReactorSubModule__GetTemperatureJump_K(void)const  */

double __thiscall NuclearReactorSubModule__GetTemperatureJump_K(NuclearReactorSubModule *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 unaff_ESI;
  double dVar4;
  double dVar5;
  
  dVar4 = Material__GetMacroscopicNeutronFissionCrossSection__m(*(Material **)&this->FuelEnrichment_Percent,Thermal,
                     (double)CONCAT44(unaff_ESI,(int)((ulonglong)this->ControlRodMass_kg >> 0x20)));
  dVar1 = *(double *)&this->ControlRodComposition;
  dVar3 = (this->CachedDimensions_m).Radius;
  dVar2 = (*(Material **)&this->FuelEnrichment_Percent)->Density_kg__m3;
  dVar5 = Material__GetFissionEnergy_MeV(*(Material **)&this->FuelEnrichment_Percent);
  dVar5 = eV_to_J(dVar5 * /*412e848000000000*/1000000.0);
  return (dVar5 * (dVar1 / dVar2) * dVar4 * dVar3) /
         (this->Fuel->BoilingPoint_K * *(double *)&this[1]._pad_0x0_0);
}


//==== 00005eb0f0 005eb0f0_GetReactionMassLeft_kg ====
// decompiled by BatchDecomp @ 005eb0f0 name=GetReactionMassLeft_kg conv=__thiscall body=169

/* public: double __thiscall RefuelerCompartment__GetReactionMassLeft_kg(void)const  */

double __thiscall RefuelerCompartment__GetReactionMassLeft_kg(RefuelerCompartment *this)

{
  undefined4 stack0xfffffffc;
  bool bVar1;
  int iVar2;
  int *piVar3;
  float10 extraout_ST0;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar2 = (**(code **)(*(int *)&this->CachedReactionMassCompartments + 0xc))();
  if (local_c < iVar2) {
    do {
      piVar3 = (int *)(**(code **)*(int *)&this->CachedReactionMassCompartments)(&local_c);
      if ((((*piVar3 != 0) && ((ReferenceController *)piVar3[1] != (ReferenceController *)0x0)) &&
          (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]),
          bVar1)) &&
         (((ReferenceController *)piVar3[1] != (ReferenceController *)0x0 &&
          (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]),
          !bVar1)))) {
        *piVar3 = 0;
      }
      local_c = local_c + 1;
      iVar2 = (**(code **)(*(int *)&this->CachedReactionMassCompartments + 0xc))();
    } while (local_c < iVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 000066a500 0066a500_GetAmmoMass_kg ====
// decompiled by BatchDecomp @ 0066a500 name=GetAmmoMass_kg conv=__thiscall body=116

/* public: double __thiscall AmmoBaySubModule__GetAmmoMass_kg(void)const  */

double __thiscall AmmoBaySubModule__GetAmmoMass_kg(AmmoBaySubModule *this)

{
  undefined4 stack0xfffffffc;
  Darray_L_MaterialComposition_G_ *pDVar1;
  int iVar2;
  float10 extraout_ST0;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pDVar1 = &(this->CachedInfo).Composition;
  local_c = 0;
  iVar2 = (**(code **)((this->CachedInfo).Composition._pad_0x0_0 + 0xc))();
  if (local_c < iVar2) {
    do {
      (**(code **)*(int *)pDVar1)(&local_c);
      local_c = local_c + 1;
      iVar2 = (**(code **)(*(int *)pDVar1 + 0xc))();
    } while (local_c < iVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 000068e610 0068e610_GetReflectanceCoefficient ====
// decompiled by BatchDecomp @ 0068e610 name=GetReflectanceCoefficient conv=__thiscall body=210

/* public: double __thiscall RefractiveIndexSpectrum__GetReflectanceCoefficient(double)const  */

double __thiscall
RefractiveIndexSpectrum__GetReflectanceCoefficient(RefractiveIndexSpectrum *this,double param_1)

{
  IndexOfRefraction *pIVar1;
  undefined4 unaff_ESI;
  undefined4 uVar2;
  IndexOfRefraction local_5c;
  IndexOfRefraction local_4c;
  IndexOfRefraction local_3c;
  IndexOfRefraction local_2c;
  double local_1c;
  double local_14;
  double local_c;
  
  uVar2 = *(undefined4 *)((char *)&param_1 + 4);
  pIVar1 = GetIndexOfRefraction(this,&local_2c,(double)CONCAT44(unaff_ESI,uVar2));
  local_14 = /*3ff0000000000000*/1.0 - pIVar1->RefractionIndex;
  pIVar1 = GetIndexOfRefraction(this,&local_3c,(double)CONCAT44(unaff_ESI,uVar2));
  local_1c = pIVar1->RefractionIndex + /*3ff0000000000000*/1.0;
  pIVar1 = GetIndexOfRefraction(this,&local_4c,(double)CONCAT44(unaff_ESI,uVar2));
  local_c = pIVar1->ExtinctionCoefficient;
  pIVar1 = GetIndexOfRefraction(this,&local_5c,(double)CONCAT44(unaff_ESI,uVar2));
  return (local_c * local_c + local_14 * local_14) /
         (local_1c * local_1c + pIVar1->ExtinctionCoefficient * pIVar1->ExtinctionCoefficient);
}


//==== 000068e700 0068e700_GetTransmittance ====
// decompiled by BatchDecomp @ 0068e700 name=GetTransmittance conv=__thiscall body=222

/* public: double __thiscall RefractiveIndexSpectrum__GetTransmittance(double)const  */

double __thiscall
RefractiveIndexSpectrum__GetTransmittance(RefractiveIndexSpectrum *this,double param_1)

{
  IndexOfRefraction *pIVar1;
  undefined4 unaff_ESI;
  undefined4 uVar2;
  IndexOfRefraction local_5c;
  IndexOfRefraction local_4c;
  IndexOfRefraction local_3c;
  IndexOfRefraction local_2c;
  double local_1c;
  double local_14;
  double local_c;
  
  uVar2 = *(undefined4 *)((char *)&param_1 + 4);
  pIVar1 = GetIndexOfRefraction(this,&local_2c,(double)CONCAT44(unaff_ESI,uVar2));
  local_14 = /*3ff0000000000000*/1.0 - pIVar1->RefractionIndex;
  pIVar1 = GetIndexOfRefraction(this,&local_3c,(double)CONCAT44(unaff_ESI,uVar2));
  local_1c = pIVar1->RefractionIndex + /*3ff0000000000000*/1.0;
  pIVar1 = GetIndexOfRefraction(this,&local_4c,(double)CONCAT44(unaff_ESI,uVar2));
  local_c = pIVar1->ExtinctionCoefficient;
  pIVar1 = GetIndexOfRefraction(this,&local_5c,(double)CONCAT44(unaff_ESI,uVar2));
  return /*3ff0000000000000*/1.0 -
         (local_c * local_c + local_14 * local_14) /
         (local_1c * local_1c + pIVar1->ExtinctionCoefficient * pIVar1->ExtinctionCoefficient);
}


//==== 0000690820 00690820_PrintLength ====
// decompiled by BatchDecomp @ 00690820 name=PrintLength conv=__cdecl body=173

/* class Str_L_char_G_ __cdecl PrintLength(double) */

Str_L_char_G_ * __cdecl PrintLength(Str_L_char_G_ *__return_storage_ptr__,double param_1)

{
  double dVar1;
  Str_L_char_G_ *pSVar2;
  char *pcVar3;
  int unaff_ESI;
  undefined4 in_stack_00000008;
  Str_L_char_G_ local_10;
  
  dVar1 = (double)CONCAT44(((slice_view *)&param_1)->_0_4_,in_stack_00000008);
  if (((dVar1 <= /*3f847ae147ae147b*/0.01) && (/*3ff0000000000000*/1.0 <= dVar1)) ||
     ((dVar1 <= /*3ff0000000000000*/1.0 && (/*3f847ae147ae147b*/0.01 <= dVar1)))) {
    pSVar2 = PrintSigFigures(&local_10,
                             (double)CONCAT44(GlobalSignificantFigures,
                                              (int)((ulonglong)(dVar1 * /*4059000000000000*/100.0) >>
                                                   0x20)),unaff_ESI);
    if (pSVar2->Capacity < 1) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pSVar2->Data;
    }
    util__Printf(__return_storage_ptr__,"%s cm",pcVar3);
    if (local_10.Data != (char *)0x0) {
      operator_delete__(local_10.Data);
      return __return_storage_ptr__;
    }
  }
  else {
    PrintUnits(__return_storage_ptr__,(double)CONCAT44("m",((slice_view *)&param_1)->_0_4_),(char *)0x1,unaff_ESI);
  }
  return __return_storage_ptr__;
}


//==== 0000693c70 00693c70_MethodCaller__private__void___thiscall_UICompartmentInfo__MoveModuleDown_void__ ====
// decompiled by BatchDecomp @ 00693c70 name=MethodCaller<&private:_void___thiscall_UICompartmentInfo__MoveModuleDown(void)> conv=__cdecl body=69

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_struct_UICompartmentInfo_void___MethodCaller__private__void___thiscall_UICompartmentInfo__MoveModuleDown_void__(void *) */

void __cdecl
util__DelegateFactory_struct_UICompartmentInfo_void___MethodCaller__private__void___thiscall_UICompartmentInfo__MoveModuleDown_void__(void *param_1)

{
  CraftBlueprint *this;
  
  this = (CraftBlueprint *)
         MainManager__GetMetagame(*(MainManager **)(*(int *)((int)param_1 + 0x1e0) + 0x168));
  CraftBlueprint__MoveModule(this,1,*(ModulePlacer **)((int)param_1 + 0x1e4));
  ShipDesignManager__Refresh(*(ShipDesignManager **)(*(int *)((int)param_1 + 0x1e0) + 0x168));
  UICompartmentButtonManager__QuickRefresh(*(UICompartmentButtonManager **)((int)param_1 + 0x1e0));
  return;
}


//==== 0000693cc0 00693cc0_MethodCaller__private__void___thiscall_UICompartmentInfo__MoveModuleInwards_void__ ====
// decompiled by BatchDecomp @ 00693cc0 name=MethodCaller<&private:_void___thiscall_UICompartmentInfo__MoveModuleInwards(void)> conv=__cdecl body=69

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_struct_UICompartmentInfo_void___MethodCaller__private__void___thiscall_UICompartmentInfo__MoveModuleInwards_void__(void *) */

void __cdecl
util__DelegateFactory_struct_UICompartmentInfo_void___MethodCaller__private__void___thiscall_UICompartmentInfo__MoveModuleInwards_void__(void *param_1)

{
  CraftBlueprint *this;
  
  this = (CraftBlueprint *)
         MainManager__GetMetagame(*(MainManager **)(*(int *)((int)param_1 + 0x1e0) + 0x168));
  CraftBlueprint__MoveModule(this,3,*(ModulePlacer **)((int)param_1 + 0x1e4));
  ShipDesignManager__Refresh(*(ShipDesignManager **)(*(int *)((int)param_1 + 0x1e0) + 0x168));
  UICompartmentButtonManager__QuickRefresh(*(UICompartmentButtonManager **)((int)param_1 + 0x1e0));
  return;
}


//==== 0000693d10 00693d10_MethodCaller__private__void___thiscall_UICompartmentInfo__MoveModuleOutwards_void__ ====
// decompiled by BatchDecomp @ 00693d10 name=MethodCaller<&private:_void___thiscall_UICompartmentInfo__MoveModuleOutwards(void)> conv=__cdecl body=69

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_struct_UICompartmentInfo_void___MethodCaller__private__void___thiscall_UICompartmentInfo__MoveModuleOutwards_void__(void *) */

void __cdecl
util__DelegateFactory_struct_UICompartmentInfo_void___MethodCaller__private__void___thiscall_UICompartmentInfo__MoveModuleOutwards_void__(void *param_1)

{
  CraftBlueprint *this;
  
  this = (CraftBlueprint *)
         MainManager__GetMetagame(*(MainManager **)(*(int *)((int)param_1 + 0x1e0) + 0x168));
  CraftBlueprint__MoveModule(this,2,*(ModulePlacer **)((int)param_1 + 0x1e4));
  ShipDesignManager__Refresh(*(ShipDesignManager **)(*(int *)((int)param_1 + 0x1e0) + 0x168));
  UICompartmentButtonManager__QuickRefresh(*(UICompartmentButtonManager **)((int)param_1 + 0x1e0));
  return;
}


//==== 0000693d60 00693d60_MethodCaller__private__void___thiscall_UICompartmentInfo__MoveModuleUp_void__ ====
// decompiled by BatchDecomp @ 00693d60 name=MethodCaller<&private:_void___thiscall_UICompartmentInfo__MoveModuleUp(void)> conv=__cdecl body=69

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_struct_UICompartmentInfo_void___MethodCaller__private__void___thiscall_UICompartmentInfo__MoveModuleUp_void__(void *) */

void __cdecl
util__DelegateFactory_struct_UICompartmentInfo_void___MethodCaller__private__void___thiscall_UICompartmentInfo__MoveModuleUp_void__(void *param_1)

{
  CraftBlueprint *this;
  
  this = (CraftBlueprint *)
         MainManager__GetMetagame(*(MainManager **)(*(int *)((int)param_1 + 0x1e0) + 0x168));
  CraftBlueprint__MoveModule(this,0,*(ModulePlacer **)((int)param_1 + 0x1e4));
  ShipDesignManager__Refresh(*(ShipDesignManager **)(*(int *)((int)param_1 + 0x1e0) + 0x168));
  UICompartmentButtonManager__QuickRefresh(*(UICompartmentButtonManager **)((int)param_1 + 0x1e0));
  return;
}


//==== 0000693dc0 00693dc0_MethodCaller__private__void___thiscall_UICompartmentInfo__QuickRefresh_void__ ====
// decompiled by BatchDecomp @ 00693dc0 name=MethodCaller<&private:_void___thiscall_UICompartmentInfo__QuickRefresh(void)> conv=__cdecl body=37

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_struct_UICompartmentInfo_void___MethodCaller__private__void___thiscall_UICompartmentInfo__QuickRefresh_void__(void *) */

void __cdecl
util__DelegateFactory_struct_UICompartmentInfo_void___MethodCaller__private__void___thiscall_UICompartmentInfo__QuickRefresh_void__(void *param_1)

{
  ShipDesignManager__Refresh(*(ShipDesignManager **)(*(int *)((int)param_1 + 0x1e0) + 0x168));
  UICompartmentButtonManager__QuickRefresh(*(UICompartmentButtonManager **)((int)param_1 + 0x1e0));
  return;
}


//==== 0000693e50 00693e50_MethodCaller__public__void___thiscall_UICompartmentInfo__Select_void__ ====
// decompiled by BatchDecomp @ 00693e50 name=MethodCaller<&public:_void___thiscall_UICompartmentInfo__Select(void)> conv=__cdecl body=43

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_struct_UICompartmentInfo_void___MethodCaller__public__void___thiscall_UICompartmentInfo__Select_void__(void *) */

void __cdecl
util__DelegateFactory_struct_UICompartmentInfo_void___MethodCaller__public__void___thiscall_UICompartmentInfo__Select_void__(void *param_1)

{
  ShipDesignManager__SelectModule(*(ShipDesignManager **)(*(int *)((int)param_1 + 0x1e0) + 0x168),
             *(ModulePlacer **)((int)param_1 + 0x1e4));
  UICompartmentButtonManager__QuickRefresh(*(UICompartmentButtonManager **)((int)param_1 + 0x1e0));
  return;
}


//==== 000069f2d0 0069f2d0_GetRadiationHazardInfo ====
// decompiled by BatchDecomp @ 0069f2d0 name=GetRadiationHazardInfo conv=__thiscall body=123

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class Str_L_char_G_ __thiscall UICompartmentInfo__GetRadiationHazardInfo(void)const  */

Str_L_char_G_ * __thiscall
UICompartmentInfo__GetRadiationHazardInfo(UICompartmentInfo *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xffffffd8;
  Str_L_char_G_ SVar1;
  int unaff_ESI;
  char *in_stack_ffffffd8;
  int iVar2;
  char *pcVar3;
  Str_L_char_G_ local_18;
  double local_c;
  
  local_c = Module__GetTotalRadiation_W(this->EditedModule->ModuleType);
  pcVar3 = "Radiation_W";
  local_c = local_c * (double)this->EditedModule->Multiplier;
  iVar2 = 0x69f30d;
  util__Str_char___Str_char__o5(&local_18,"Radiation_W");
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffffd8,&local_18);
  SVar1.Capacity = (int)pcVar3;
  SVar1.Data = (char *)iVar2;
  SVar1.Length = unaff_ESI;
  Print(__return_storage_ptr__,(double)CONCAT44(in_stack_ffffffd8,(int)((ulonglong)local_c >> 0x20))
        ,SVar1);
  if (local_18.Data != (char *)0x0) {
    operator_delete__(local_18.Data);
  }
  return __return_storage_ptr__;
}


//==== 000069f400 0069f400_GetRadiatorInterreflectionInfo ====
// decompiled by BatchDecomp @ 0069f400 name=GetRadiatorInterreflectionInfo conv=__thiscall body=121

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class Str_L_char_G_ __thiscall
   UICompartmentInfo__GetRadiatorInterreflectionInfo(void)const  */

Str_L_char_G_ * __thiscall
UICompartmentInfo__GetRadiatorInterreflectionInfo(UICompartmentInfo *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xffffffd8;
  Str_L_char_G_ SVar1;
  CraftBlueprint *this_00;
  int unaff_ESI;
  char *in_stack_ffffffd8;
  int iVar2;
  char *pcVar3;
  Str_L_char_G_ local_18;
  double local_c;
  
  this_00 = (CraftBlueprint *)
            MainManager__GetMetagame((MainManager *)this->ButtonManager->ParentManager);
  local_c = CraftBlueprint__GetRadiatorInterreflectionEfficiency_Percent(this_00,this->EditedModule)
  ;
  local_c = 1.0 - local_c;
  pcVar3 = "InterreflectionInefficiency_Percent";
  iVar2 = 0x69f43b;
  util__Str_char___Str_char__o5(&local_18,"InterreflectionInefficiency_Percent");
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffffd8,&local_18);
  SVar1.Capacity = (int)pcVar3;
  SVar1.Data = (char *)iVar2;
  SVar1.Length = unaff_ESI;
  Print(__return_storage_ptr__,(double)CONCAT44(in_stack_ffffffd8,(int)((ulonglong)local_c >> 0x20))
        ,SVar1);
  if (local_18.Data != (char *)0x0) {
    operator_delete__(local_18.Data);
  }
  return __return_storage_ptr__;
}


//==== 00006a2160 006a2160_MethodCaller__private__void___thiscall_ShipDesignManager__BuildCraftList_void__ ====
// decompiled by BatchDecomp @ 006a2160 name=MethodCaller<&private:_void___thiscall_ShipDesignManager__BuildCraftList(void)> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_class_ShipDesignManager_void___MethodCaller__private__void___thiscall_ShipDesignManager__BuildCraftList_void__(void *) */

void __cdecl
util__DelegateFactory_class_ShipDesignManager_void___MethodCaller__private__void___thiscall_ShipDesignManager__BuildCraftList_void__(void *param_1)

{
  ShipDesignManager__BuildCraftList((ShipDesignManager *)param_1);
  return;
}


//==== 00006a2300 006a2300_MethodCaller__public__void___thiscall_ShipDesignManager__RefreshAndRename_void__ ====
// decompiled by BatchDecomp @ 006a2300 name=MethodCaller<&public:_void___thiscall_ShipDesignManager__RefreshAndRename(void)> conv=__cdecl body=45

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_class_ShipDesignManager_void___MethodCaller__public__void___thiscall_ShipDesignManager__RefreshAndRename_void__(void *) */

void __cdecl
util__DelegateFactory_class_ShipDesignManager_void___MethodCaller__public__void___thiscall_ShipDesignManager__RefreshAndRename_void__(void *param_1)

{
  GameManager *this;
  SimpleSerializationManager *this_00;
  Reflectable *hWnd;
  Str_L_char_G_ *pSVar1;
  
  hWnd = *(Reflectable **)((int)param_1 + 0xc);
  pSVar1 = &hWnd->Name;
  this = (GameManager *)Manager__GetParent((HWND)hWnd);
  this_00 = (SimpleSerializationManager *)GameManager__GetDataManager(this);
  SimpleSerializationManager__RenameDatum(this_00,hWnd,pSVar1);
  ShipDesignManager__Refresh((ShipDesignManager *)param_1);
  return;
}


//==== 00006b0de0 006b0de0_MethodCaller__public__void___thiscall_UIArmorLayerPanel__OnChanged_void__ ====
// decompiled by BatchDecomp @ 006b0de0 name=MethodCaller<&public:_void___thiscall_UIArmorLayerPanel__OnChanged(void)> conv=__cdecl body=24

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_struct_UIArmorLayerPanel_void___MethodCaller__public__void___thiscall_UIArmorLayerPanel__OnChanged_void__(void *) */

void __cdecl
util__DelegateFactory_struct_UIArmorLayerPanel_void___MethodCaller__public__void___thiscall_UIArmorLayerPanel__OnChanged_void__(void *param_1)

{
  ShipDesignManager__Refresh(*(ShipDesignManager **)(*(int *)((int)param_1 + 0x1b0) + 0x168));
  return;
}


//==== 00006bda70 006bda70_MethodCaller__public__void___thiscall_BriefingsHandler__PlaySelectedLevel_void__ ====
// decompiled by BatchDecomp @ 006bda70 name=MethodCaller<&public:_void___thiscall_BriefingsHandler__PlaySelectedLevel(void)> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_class_BriefingsHandler_void___MethodCaller__public__void___thiscall_BriefingsHandler__PlaySelectedLevel_void__(void *) */

void __cdecl
util__DelegateFactory_class_BriefingsHandler_void___MethodCaller__public__void___thiscall_BriefingsHandler__PlaySelectedLevel_void__(void *param_1)

{
  BriefingsHandler__PlaySelectedLevel((BriefingsHandler *)param_1);
  return;
}


//==== 00006bdb10 006bdb10_MethodCaller__public__void___thiscall_BriefingsHandler__WatchEnding_void__ ====
// decompiled by BatchDecomp @ 006bdb10 name=MethodCaller<&public:_void___thiscall_BriefingsHandler__WatchEnding(void)> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_class_BriefingsHandler_void___MethodCaller__public__void___thiscall_BriefingsHandler__WatchEnding_void__(void *) */

void __cdecl
util__DelegateFactory_class_BriefingsHandler_void___MethodCaller__public__void___thiscall_BriefingsHandler__WatchEnding_void__(void *param_1)

{
  BriefingsHandler__WatchEnding((BriefingsHandler *)param_1);
  return;
}


//==== 00006c2b50 006c2b50_FUN_006c2b50 ====
UIAttributes * __thiscall FUN_006c2b50(undefined4 *param_1,UIAttributes *param_2);

// decompiled by BatchDecomp @ 006c2b50 name=FUN_006c2b50 conv=unknown body=85

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

UIAttributes * __thiscall FUN_006c2b50(undefined4 *param_1,UIAttributes *param_2)

{
  UIAttributes *pUVar1;
  UIAttributes local_15c;
  void *local_14;
  _func___cdecl_Vec2_L_int_G__void_ptr *p_Stack_10;
  int iStack_c;
  int iStack_8;
  
  local_14 = (void *)0x0;
  p_Stack_10 = (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0;
  iStack_c = *(int *)param_1[1];
  iStack_8 = iStack_c;
  pUVar1 = UIWidget__Attr((UIWidget *)*param_1,&local_15c);
  (pUVar1->DesiredSize).Getter.Callee = local_14;
  (pUVar1->DesiredSize).Getter.CallbackFunction = p_Stack_10;
  (pUVar1->DesiredSize).Value.X = iStack_c;
  (pUVar1->DesiredSize).Value.Y = iStack_8;
  UIAttributes__UIAttributes(param_2,pUVar1);
  UIAttributes___UIAttributes(&local_15c);
  return param_2;
}


//==== 00006eb5b0 006eb5b0_MethodCaller__private__void___thiscall_LevelEditor__AddFleet_void__ ====
// decompiled by BatchDecomp @ 006eb5b0 name=MethodCaller<&private:_void___thiscall_LevelEditor__AddFleet(void)> conv=__cdecl body=12

/* public: static void __cdecl util__DelegateFactory_class_LevelEditor_void___MethodCaller__private__void___thiscall_LevelEditor__AddFleet_void__(void *) */

void __cdecl
util__DelegateFactory_class_LevelEditor_void___MethodCaller__private__void___thiscall_LevelEditor__AddFleet_void__(void *param_1)

{
  LevelEditor__AddFleet((LevelEditor *)param_1);
  return;
}


//==== 00006eb5c0 006eb5c0_MethodCaller__private__void___thiscall_LevelEditor__BuildLevelEditorScreen_void__ ====
// decompiled by BatchDecomp @ 006eb5c0 name=MethodCaller<&private:_void___thiscall_LevelEditor__BuildLevelEditorScreen(void)> conv=__cdecl body=12

/* public: static void __cdecl util__DelegateFactory_class_LevelEditor_void___MethodCaller__private__void___thiscall_LevelEditor__BuildLevelEditorScreen_void__(void *) */

void __cdecl
util__DelegateFactory_class_LevelEditor_void___MethodCaller__private__void___thiscall_LevelEditor__BuildLevelEditorScreen_void__(void *param_1)

{
  LevelEditor__BuildLevelEditorScreen((LevelEditor *)param_1);
  return;
}


//==== 00006eb610 006eb610_MethodCaller__public__void___thiscall_LevelEditor__DeselectAll_void__ ====
// decompiled by BatchDecomp @ 006eb610 name=MethodCaller<&public:_void___thiscall_LevelEditor__DeselectAll(void)> conv=__cdecl body=12

/* public: static void __cdecl util__DelegateFactory_class_LevelEditor_void___MethodCaller__public__void___thiscall_LevelEditor__DeselectAll_void__(void *) */

void __cdecl
util__DelegateFactory_class_LevelEditor_void___MethodCaller__public__void___thiscall_LevelEditor__DeselectAll_void__(void *param_1)

{
  LevelEditor__DeselectAll((LevelEditor *)param_1);
  return;
}


//==== 00006eb7c0 006eb7c0_MethodCaller__private__void___thiscall_ScenarioEditor__RebuildCurrentLevel_void__ ====
// decompiled by BatchDecomp @ 006eb7c0 name=MethodCaller<&private:_void___thiscall_ScenarioEditor__RebuildCurrentLevel(void)> conv=__cdecl body=12

/* public: static void __cdecl util__DelegateFactory_class_ScenarioEditor_void___MethodCaller__private__void___thiscall_ScenarioEditor__RebuildCurrentLevel_void__(void *) */

void __cdecl
util__DelegateFactory_class_ScenarioEditor_void___MethodCaller__private__void___thiscall_ScenarioEditor__RebuildCurrentLevel_void__(void *param_1)

{
  ScenarioEditor__RebuildCurrentLevel((ScenarioEditor *)param_1);
  return;
}


//==== 00006eb950 006eb950_MethodCallerConst__private__bool___thiscall_LevelEditor__CanAddFleet_void_const__ ====
// decompiled by BatchDecomp @ 006eb950 name=MethodCallerConst<&private:_bool___thiscall_LevelEditor__CanAddFleet(void)const_> conv=__cdecl body=12

/* public: static bool __cdecl util__DelegateFactory_class_LevelEditor_bool___MethodCallerConst__private__bool___thiscall_LevelEditor__CanAddFleet_void_const__(void const * const) */

bool __cdecl
util__DelegateFactory_class_LevelEditor_bool___MethodCallerConst__private__bool___thiscall_LevelEditor__CanAddFleet_void_const__(void *param_1)

{
  bool bVar1;
  
  bVar1 = LevelEditor__CanAddFleet((LevelEditor *)param_1);
  return bVar1;
}


//==== 00006eb960 006eb960_MethodCallerConst__private__bool___thiscall_LevelEditor__CanAddNewBody_void_const__ ====
// decompiled by BatchDecomp @ 006eb960 name=MethodCallerConst<&private:_bool___thiscall_LevelEditor__CanAddNewBody(void)const_> conv=__cdecl body=12

/* public: static bool __cdecl util__DelegateFactory_class_LevelEditor_bool___MethodCallerConst__private__bool___thiscall_LevelEditor__CanAddNewBody_void_const__(void const * const) */

bool __cdecl
util__DelegateFactory_class_LevelEditor_bool___MethodCallerConst__private__bool___thiscall_LevelEditor__CanAddNewBody_void_const__(void *param_1)

{
  bool bVar1;
  
  bVar1 = LevelEditor__CanAddNewBody((LevelEditor *)param_1);
  return bVar1;
}


//==== 00006f7b70 006f7b70_IsAFleetSelected ====
// decompiled by BatchDecomp @ 006f7b70 name=IsAFleetSelected conv=__thiscall body=119

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall LevelEditor__IsAFleetSelected(void)const  */

bool __thiscall LevelEditor__IsAFleetSelected(LevelEditor *this)

{
  WorldObject *this_00;
  bool bVar1;
  bool bVar2;
  Actor *pAVar3;
  ReferenceController *local_8;
  
  this_00 = (WorldObject *)(this + 0x80);
  local_8 = (ReferenceController *)0x0;
  bVar1 = WorldObject__IsValid(this_00);
  if (bVar1) {
    bVar1 = WorldObject__IsLevelEditorBody(this_00);
    if (!bVar1) goto LAB_006f7bc8;
    pAVar3 = (this_00->Object).Pointer;
    local_8 = *(ReferenceController **)(this + 0x84);
    if (local_8 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(local_8);
      bVar1 = util__ReferenceController__IsDataStillValid(local_8);
      if (!bVar1) {
        pAVar3 = (Actor *)0x0;
      }
    }
    bVar1 = true;
    if (pAVar3[3]._pad_0x0_0 != 0) {
      bVar2 = true;
      goto LAB_006f7bd0;
    }
  }
  else {
LAB_006f7bc8:
    bVar1 = false;
  }
  bVar2 = false;
LAB_006f7bd0:
  if ((local_8 != (ReferenceController *)0x0) && (bVar1)) {
    util__ReferenceController__ReleaseWeakReference(local_8);
  }
  return bVar2;
}


//==== 0000709040 00709040_MethodCaller__private__void___thiscall_MainManager__BuildOptionsMenu_void__ ====
// decompiled by BatchDecomp @ 00709040 name=MethodCaller<&private:_void___thiscall_MainManager__BuildOptionsMenu(void)> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_class_MainManager_void___MethodCaller__private__void___thiscall_MainManager__BuildOptionsMenu_void__(void *) */

void __cdecl
util__DelegateFactory_class_MainManager_void___MethodCaller__private__void___thiscall_MainManager__BuildOptionsMenu_void__(void *param_1)

{
  MainManager__BuildOptionsMenu((MainManager *)param_1);
  return;
}


//==== 000070cd20 0070cd20_LibrationOrbit ====
// decompiled by BatchDecomp @ 0070cd20 name=LibrationOrbit conv=__thiscall body=103

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: __thiscall LibrationOrbit__LibrationOrbit(void) */

LibrationOrbit * __thiscall LibrationOrbit__LibrationOrbit(LibrationOrbit *this)

{
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
  (this->MainBody).Pointer = (CelestialObject *)0x0;
  (this->MainBody).Controller = (ReferenceController *)0x0;
  this->LagrangePointID = 0;
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
  return this;
}


//==== 0000715de0 00715de0_OrbitalCircularInjection_km__s ====
// decompiled by BatchDecomp @ 00715de0 name=OrbitalCircularInjection_km__s conv=__cdecl body=251

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* struct Astrogation__AstrogateResult __cdecl Astrogation__OrbitalCircularInjection_km__s(class
   StrategicManager *,double,double,struct util__PhysicalState_L_struct_util__Vec3_L_double_G___G,class
   util__WeakPtr_L_class_Fleet_G,class util__WeakPtr_L_class_CelestialObject_G) */

AstrogateResult * __cdecl
Astrogation__OrbitalCircularInjection_km__s(AstrogateResult *__return_storage_ptr__,undefined4 param_1,undefined8 param_2,
          undefined8 param_3,undefined4 param_5,undefined4 param_6,undefined4 param_7,
          undefined4 param_8,undefined4 param_9,undefined4 param_10,undefined4 param_11,
          undefined4 param_12,undefined4 param_13,undefined4 param_14,undefined4 param_15,
          undefined4 param_16,undefined4 param_17,ReferenceController *param_18,
          CelestialObject *param_19,ReferenceController *param_20)

{
  undefined4 stack0xfffffffc;
  bool bVar1;
  undefined8 uVar2;
  double local_20;
  double local_18;
  double local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((param_20 != (ReferenceController *)0x0) &&
     (bVar1 = util__ReferenceController__IsDataStillValid(param_20), !bVar1)) {
    param_19 = (CelestialObject *)0x0;
  }
  CelestialObject__GetAbsoluteVelocityToOrbit_km__s(param_19,&local_20,param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,
             param_13,param_14,param_15,param_16,param_2);
  uVar2 = CONCAT44(param_18,param_17);
  if (param_18 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_18);
  }
  CorrectBurn_km__s(__return_storage_ptr__,local_20 - (double)CONCAT44(param_12,param_11),
                    local_18 - (double)CONCAT44(param_14,param_13),
                    local_10 - (double)CONCAT44(param_16,param_15),param_3,uVar2);
  if (param_18 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_18);
  }
  if (param_20 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_20);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 0000730e20 00730e20_GetFormationForwardSeparation_km ====
extern undefined4 FUN_0072b6d0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 00730e20 name=GetFormationForwardSeparation_km conv=__thiscall body=181

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall Fleet__GetFormationForwardSeparation_km(void)const  */

double __thiscall Fleet__GetFormationForwardSeparation_km(Fleet *this)

{
  undefined4 stack0xfffffffc;
  Darray_L_double_G_ *pDVar1;
  float10 extraout_ST0;
  undefined **local_40;
  void *local_3c;
  undefined **local_30;
  SharedPtr_L_struct_UIWidget_G_ *local_2c;
  double local_20;
  undefined8 local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = /*4010000000000000*/4.0;
  local_18 = /*4000000000000000*/2.0;
  util__Darray_class_util__SharedPtr_class_Body_____Darray_class_util__SharedPtr_class_Body((Darray_L_class_util__SharedPtr_L_class_Body_G___G_ *)&local_30,
             (Darray_L_class_util__SharedPtr_L_class_Body_G___G_ *)
             &this[1].Location.OrbitParameters.Data.GetEccentricityPeriapsisRoot_MemoizedValue.
              IsValidData);
  pDVar1 = (Darray_L_double_G_ *)FUN_0072b6d0(&local_40,&local_30,&local_10,&local_18);
  local_20 = util__GetFormationForwardSeparation_km(pDVar1);
  local_40 = ((void *)(0x0091da54u));
  if (local_3c != (void *)0x0) {
    operator_delete__(local_3c);
  }
  if (local_20 <= /*3fa999999999999a*/0.05) {
    local_20 = /*3fa999999999999a*/0.05;
  }
  local_30 = ((void *)(0x0091d1bcu));
  if (/*3ff0000000000000*/1.0 <= local_20) {
    local_20 = /*3ff0000000000000*/1.0;
  }
  if (local_2c != (SharedPtr_L_struct_UIWidget_G_ *)0x0) {
    util__SharedPtr_struct_UIWidget____vector_deleting_destructor(local_2c,3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00007590a0 007590a0_MethodCaller__private__void___thiscall_StrategicManager__DeselectAll_void__ ====
// decompiled by BatchDecomp @ 007590a0 name=MethodCaller<&private:_void___thiscall_StrategicManager__DeselectAll(void)> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_class_StrategicManager_void___MethodCaller__private__void___thiscall_StrategicManager__DeselectAll_void__(void *) */

void __cdecl
util__DelegateFactory_class_StrategicManager_void___MethodCaller__private__void___thiscall_StrategicManager__DeselectAll_void__(void *param_1)

{
  StrategicManager__DeselectAll((StrategicManager *)param_1);
  return;
}


//==== 000076f7e0 0076f7e0_MethodCaller__private__void___thiscall_ActorDropButton__SelectButton_void__ ====
// decompiled by BatchDecomp @ 0076f7e0 name=MethodCaller<&private:_void___thiscall_ActorDropButton__SelectButton(void)> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_struct_ActorDropButton_void___MethodCaller__private__void___thiscall_ActorDropButton__SelectButton_void__(void *) */

void __cdecl
util__DelegateFactory_struct_ActorDropButton_void___MethodCaller__private__void___thiscall_ActorDropButton__SelectButton_void__(void *param_1)

{
  ActorDropButton__SelectButton((ActorDropButton *)param_1);
  return;
}


//==== 0000770bb0 00770bb0_ActorDropdownAction ====
#undef t /* auto(v2): compat 僵尸宏撞成员名 */

// decompiled by BatchDecomp @ 00770bb0 name=ActorDropdownAction conv=__thiscall body=121

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: __thiscall ActorDropdownAction__ActorDropdownAction(struct WorldObject const &) */

ActorDropdownAction * __thiscall
ActorDropdownAction__ActorDropdownAction(ActorDropdownAction *this,WorldObject *param_1)

{
  ReferenceController *this_00;
  
  (this->Data).Object.Pointer = (param_1->Object).Pointer;
  this_00 = (param_1->Object).Controller;
  (this->Data).Object.Controller = this_00;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
  }
  (this->Data).LPointID = param_1->LPointID;
  ItineraryNode__ItineraryNode(&(this->Data).Node.LastNode,&(param_1->Node).LastNode);
  ItineraryNode__ItineraryNode(&(this->Data).Node.NextNode,&(param_1->Node).NextNode);
  (this->Data).Node.t = (param_1->Node).t;
  this->ItineraryAction = None;
  (this->AdditionalFleet).Pointer = (Fleet *)0x0;
  (this->AdditionalFleet).Controller = (ReferenceController *)0x0;
  return this;
}


//==== 0000772b70 00772b70_AsLevelEditorBody ====
// decompiled by BatchDecomp @ 00772b70 name=AsLevelEditorBody conv=__thiscall body=74

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util__WeakPtr_L_class_LevelEditorBody_G __thiscall
   WorldObject__AsLevelEditorBody(void)const  */

undefined4 * __thiscall WorldObject__AsLevelEditorBody(WorldObject *this)

{
  ReferenceController *this_00;
  bool bVar1;
  undefined4 *in_stack_00000004;
  
  bVar1 = IsLevelEditorBody(this);
  if (!bVar1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\strategic\\ui\\dropdownui.cpp",0x38,
                    "IsLevelEditorBody()",(char *)0x0);
    DebugBreak();
  }
  *in_stack_00000004 = (this->Object).Pointer;
  this_00 = (this->Object).Controller;
  in_stack_00000004[1] = this_00;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
  }
  return in_stack_00000004;
}


//==== 000077a090 0077a090_MethodCaller__public__void___thiscall_BurnInfoCustomWidget__Clear_void__ ====
// decompiled by BatchDecomp @ 0077a090 name=MethodCaller<&public:_void___thiscall_BurnInfoCustomWidget__Clear(void)> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_struct_BurnInfoCustomWidget_void___MethodCaller__public__void___thiscall_BurnInfoCustomWidget__Clear_void__(void *) */

void __cdecl
util__DelegateFactory_struct_BurnInfoCustomWidget_void___MethodCaller__public__void___thiscall_BurnInfoCustomWidget__Clear_void__(void *param_1)

{
  BurnInfoCustomWidget__Clear((BurnInfoCustomWidget *)param_1);
  return;
}


//==== 000077a0a0 0077a0a0_MethodCaller__private__void___thiscall_HUDFleetInfoPanel__InspectFleet_void__ ====
// decompiled by BatchDecomp @ 0077a0a0 name=MethodCaller<&private:_void___thiscall_HUDFleetInfoPanel__InspectFleet(void)> conv=__cdecl body=12

/* public: static void __cdecl util__DelegateFactory_struct_HUDFleetInfoPanel_void___MethodCaller__private__void___thiscall_HUDFleetInfoPanel__InspectFleet_void__(void *) */

void __cdecl
util__DelegateFactory_struct_HUDFleetInfoPanel_void___MethodCaller__private__void___thiscall_HUDFleetInfoPanel__InspectFleet_void__(void *param_1)

{
  HUDFleetInfoPanel__InspectFleet((HUDFleetInfoPanel *)param_1);
  return;
}


//==== 000078c400 0078c400_MethodCaller__private__void___thiscall_ItineraryMarker__Select_void__ ====
// decompiled by BatchDecomp @ 0078c400 name=MethodCaller<&private:_void___thiscall_ItineraryMarker__Select(void)> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_struct_ItineraryMarker_void___MethodCaller__private__void___thiscall_ItineraryMarker__Select_void__(void
   *) */

void __cdecl
util__DelegateFactory_struct_ItineraryMarker_void___MethodCaller__private__void___thiscall_ItineraryMarker__Select_void__(void *param_1)

{
  ItineraryMarker__Select((ItineraryMarker *)param_1);
  return;
}


//==== 000078c410 0078c410_MethodCaller__public__void___thiscall_ItineraryNodeUI__Select_void__ ====
// decompiled by BatchDecomp @ 0078c410 name=MethodCaller<&public:_void___thiscall_ItineraryNodeUI__Select(void)> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_struct_ItineraryNodeUI_void___MethodCaller__public__void___thiscall_ItineraryNodeUI__Select_void__(void
   *) */

void __cdecl
util__DelegateFactory_struct_ItineraryNodeUI_void___MethodCaller__public__void___thiscall_ItineraryNodeUI__Select_void__(void *param_1)

{
  ItineraryNodeUI__Select((ItineraryNodeUI *)param_1);
  return;
}


//==== 000078c560 0078c560_MethodCallerConst__private__bool___thiscall_ItineraryMarker__IsOnScreen_void_const__ ====
// decompiled by BatchDecomp @ 0078c560 name=MethodCallerConst<&private:_bool___thiscall_ItineraryMarker__IsOnScreen(void)const_> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static bool __cdecl util__DelegateFactory_struct_ItineraryMarker_bool___MethodCallerConst__private__bool___thiscall_ItineraryMarker__IsOnScreen_void_const__(void const * const) */

bool __cdecl
util__DelegateFactory_struct_ItineraryMarker_bool___MethodCallerConst__private__bool___thiscall_ItineraryMarker__IsOnScreen_void_const__(void *param_1)

{
  bool bVar1;
  
  bVar1 = ItineraryMarker__IsOnScreen((ItineraryMarker *)param_1);
  return bVar1;
}


//==== 000078cf00 0078cf00_NodeMouseOver ====
#undef t /* auto(v2): compat 僵尸宏撞成员名 */

// decompiled by BatchDecomp @ 0078cf00 name=NodeMouseOver conv=__thiscall body=203

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: __thiscall NodeMouseOver__NodeMouseOver(struct ItineraryNode,struct ItineraryNode,double)
    */

NodeMouseOver * __thiscall
NodeMouseOver__NodeMouseOver(NodeMouseOver *this,undefined4 param_1,ReferenceController *param_3)

{
  undefined4 stack0x00000154;
  ReferenceController *in_stack_000000f8;
  ReferenceController *in_stack_00000100;
  ReferenceController *in_stack_00000108;
  ReferenceController *in_stack_00000130;
  ReferenceController *in_stack_00000158;
  ReferenceController *in_stack_00000248;
  ReferenceController *in_stack_00000250;
  ReferenceController *in_stack_00000258;
  ReferenceController *in_stack_00000280;
  double in_stack_000002a4;
  
  ItineraryNode__ItineraryNode(&this->LastNode,(ItineraryNode *)&param_1);
  ItineraryNode__ItineraryNode(&this->NextNode,(ItineraryNode *)&stack0x00000154);
  this->t = in_stack_000002a4;
  if (in_stack_00000130 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(in_stack_00000130);
  }
  if (in_stack_00000108 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(in_stack_00000108);
  }
  if (in_stack_00000100 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(in_stack_00000100);
  }
  if (in_stack_000000f8 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(in_stack_000000f8);
  }
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  if (in_stack_00000280 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(in_stack_00000280);
  }
  if (in_stack_00000258 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(in_stack_00000258);
  }
  if (in_stack_00000250 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(in_stack_00000250);
  }
  if (in_stack_00000248 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(in_stack_00000248);
  }
  if (in_stack_00000158 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(in_stack_00000158);
  }
  return this;
}


//==== 00007a1040 007a1040_MethodCaller__private__void___thiscall_HUDStrategic__RunTurn_void__ ====
// decompiled by BatchDecomp @ 007a1040 name=MethodCaller<&private:_void___thiscall_HUDStrategic__RunTurn(void)> conv=__cdecl body=15

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_struct_HUDStrategic_void___MethodCaller__private__void___thiscall_HUDStrategic__RunTurn_void__(void *)
    */

void __cdecl
util__DelegateFactory_struct_HUDStrategic_void___MethodCaller__private__void___thiscall_HUDStrategic__RunTurn_void__(void *param_1)

{
  StrategicManager__RunTurn(*(StrategicManager **)((int)param_1 + 8));
  return;
}


//==== 00007a8c90 007a8c90_MethodCaller__public__void___thiscall_GhostedUIButton__Select_void__ ====
// decompiled by BatchDecomp @ 007a8c90 name=MethodCaller<&public:_void___thiscall_GhostedUIButton__Select(void)> conv=__cdecl body=12

/* public: static void __cdecl util__DelegateFactory_struct_GhostedUIButton_void___MethodCaller__public__void___thiscall_GhostedUIButton__Select_void__(void
   *) */

void __cdecl
util__DelegateFactory_struct_GhostedUIButton_void___MethodCaller__public__void___thiscall_GhostedUIButton__Select_void__(void *param_1)

{
  GhostedUIButton__Select((GhostedUIButton *)param_1);
  return;
}


//==== 00007a90e0 007a90e0_WorldObject ====
#undef t /* auto(v2): compat 僵尸宏撞成员名 */

// decompiled by BatchDecomp @ 007a90e0 name=WorldObject conv=__thiscall body=84

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: __thiscall WorldObject__WorldObject(class util__WeakPtr_L_class_Fleet_G) */

WorldObject * __thiscall
WorldObject__WorldObject(WorldObject *this,Actor *param_2,ReferenceController *param_3)

{
  (this->Object).Pointer = param_2;
  (this->Object).Controller = param_3;
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_3);
  }
  this->LPointID = 0;
  ItineraryNode__ItineraryNode(&(this->Node).LastNode);
  ItineraryNode__ItineraryNode(&(this->Node).NextNode);
  (this->Node).t = 0.0;
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  return this;
}


//==== 00007c1a70 007c1a70_GetID ====
// decompiled by BatchDecomp @ 007c1a70 name=GetID conv=__thiscall body=4

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: unsigned int __thiscall CapitalShipComponent__GetID(void)const  */

uint __thiscall CapitalShipComponent__GetID(CapitalShipComponent *this)

{
  return this->UniqueID;
}


//==== 00007c2160 007c2160_Component ====
// decompiled by BatchDecomp @ 007c2160 name=Component conv=__thiscall body=52

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: __thiscall Component__Component(class util__WeakPtr_L_class_Body_G) */

Component * __thiscall
Component__Component(Component *this,Body *param_2,ReferenceController *param_3)

{
  this->_pad_0x0_0 = (int)((void *)(0x0093c8e4u));
  (this->Parent).Pointer = param_2;
  (this->Parent).Controller = param_3;
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_3);
    if (param_3 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(param_3);
    }
  }
  return this;
}


//==== 00007c39d0 007c39d0_MatterComponent ====
// decompiled by BatchDecomp @ 007c39d0 name=MatterComponent conv=__thiscall body=179

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: __thiscall MatterComponent__MatterComponent(class util__WeakPtr_L_class_Body_G,class
   Material const *,struct util__Cylinder_L_double_G_,class Material const *,class util__Maybe_L_double_G_)
    */

MatterComponent * __thiscall
MatterComponent__MatterComponent(MatterComponent *this,undefined4 param_2,ReferenceController *param_3,Material *param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          Material *param_9,double param_10,char param_11)

{
  double dVar1;
  ReferenceController *pRVar2;
  
  pRVar2 = param_3;
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_3);
  }
  Component__Component((Component *)this,param_2,pRVar2);
  this->_pad_0x0_0 = (int)((void *)(0x0093cb08u));
  *(undefined4 *)&(this->GetBeamColor_MemoizedValue).Data.X = 0;
  *(undefined4 *)((int)&(this->GetBeamColor_MemoizedValue).Data.X + 4) = 0;
  *(undefined4 *)&(this->GetBeamColor_MemoizedValue).Data.Y = 0;
  *(undefined4 *)((int)&(this->GetBeamColor_MemoizedValue).Data.Y + 4) = 0;
  (this->GetBeamColor_MemoizedValue).Data.Z = 0.0;
  (this->GetBeamColor_MemoizedValue).IsValidData = false;
  (this->MatterComponentMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 = 0;
  (this->MatterComponentMemoizationHandlerInstance).ResetFunctions.Data = (pmf_fbbda43d *)0x0;
  (this->MatterComponentMemoizationHandlerInstance).ResetFunctions.Size = 0;
  (this->MatterComponentMemoizationHandlerInstance).ResetFunctions.Capacity = 0;
  (this->MatterComponentMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 =
       (int)((void *)(0x009194a4u));
  (this->MatterComponentMemoizationHandlerInstance).ResetFunctions.Data = (pmf_fbbda43d *)0x0;
  (this->MatterComponentMemoizationHandlerInstance).ResetFunctions.Size = 0;
  (this->MatterComponentMemoizationHandlerInstance).ResetFunctions.Capacity = 0;
  this->Composition = param_4;
  *(undefined4 *)&(this->Dimensions_m).Radius = param_5;
  *(undefined4 *)((int)&(this->Dimensions_m).Radius + 4) = param_6;
  *(undefined4 *)&(this->Dimensions_m).Height = param_7;
  *(undefined4 *)((int)&(this->Dimensions_m).Height + 4) = param_8;
  this->TracerComposition = param_9;
  dVar1 = (this->Dimensions_m).Radius;
  if (param_11 == '\0') {
    param_10 = dVar1 * dVar1 * /*400921fb54442d18*/3.141592653589793 * (this->Dimensions_m).Height *
               this->Composition->Density_kg__m3;
  }
  this->Mass_kg = param_10;
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  return this;
}


//==== 00007d6e90 007d6e90_PurgeCompartmentsOutsideOfArmorRange ====
// decompiled by BatchDecomp @ 007d6e90 name=PurgeCompartmentsOutsideOfArmorRange conv=__thiscall body=191

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: void __thiscall SpacecraftComponent__PurgeCompartmentsOutsideOfArmorRange(struct
   util__Range_L_int_G_) */

void __thiscall
SpacecraftComponent__PurgeCompartmentsOutsideOfArmorRange(SpacecraftComponent *this,Range_L_int_G_ param_1)

{
  ReferenceController *this_00;
  Range_L_int_G_ RVar1;
  bool bVar2;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar3;
  CraftInstance *this_01;
  undefined **local_34;
  SharedPtr_L_struct_ModuleCompartment_G_ *local_30;
  undefined **local_24;
  SharedPtr_L_struct_ModuleCompartment_G_ *local_20;
  Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ local_14[16];
  
  this_00 = (ReferenceController *)(this->GetArmorCollisionShells_MemoizedValue).Data.Capacity;
  this_01 = (CraftInstance *)(this->GetArmorCollisionShells_MemoizedValue).Data.Size;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
    bVar2 = util__ReferenceController__IsDataStillValid(this_00);
    if (!bVar2) {
      this_01 = (CraftInstance *)0x0;
    }
  }
  RVar1.Upper = param_1.Lower;
  RVar1.Lower = (int)&local_34;
  CraftInstance__GetCompartmentsWithinArmorRange(this_01,RVar1);
  pDVar3 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
util__PurgeCompartmentsOutsideOfArmorRange(local_14);
  util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&this->ShipPaint,pDVar3);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_14);
  local_24 = ((void *)(0x009207b4u));
  if (local_20 != (SharedPtr_L_struct_ModuleCompartment_G_ *)0x0) {
    util__SharedPtr_struct_ModuleCompartment____vector_deleting_destructor(local_20,3);
  }
  local_20 = (SharedPtr_L_struct_ModuleCompartment_G_ *)0x0;
  local_24 = ((void *)(0x00919488u));
  local_34 = ((void *)(0x009207b4u));
  if (local_30 != (SharedPtr_L_struct_ModuleCompartment_G_ *)0x0) {
    util__SharedPtr_struct_ModuleCompartment____vector_deleting_destructor(local_30,3);
  }
  local_30 = (SharedPtr_L_struct_ModuleCompartment_G_ *)0x0;
  local_34 = ((void *)(0x00919488u));
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  return;
}


//==== 00007e3f10 007e3f10_UntargetAllCompartments ====
// decompiled by BatchDecomp @ 007e3f10 name=UntargetAllCompartments conv=__thiscall body=15

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftTargeting__UntargetAllCompartments(void) */

void __thiscall SpacecraftTargeting__UntargetAllCompartments(SpacecraftTargeting *this)

{
                    /* WARNING: Could not recover jumptable at 0x007e3f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(this->EnemyTargetedCompartments).Data[2].Pointer)();
  return;
}


//==== 00007f1bc0 007f1bc0_NewCombat ====
extern undefined4 FUN_007ede30(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007f1bc0 name=NewCombat conv=__thiscall body=261

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall TacticalAI__NewCombat(class util__WeakPtr_L_class_Fleet_G) */

void __thiscall TacticalAI__NewCombat(TacticalAI *this,Fleet *param_2,ReferenceController *param_3)

{
  undefined4 stack0xfffffffc;
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  SpacecraftTargeting *this_00;
  TacticalAI *pTVar6;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_1c[16];
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar1 = IsActive(this);
  if ((((bVar1) && (param_2 != (Fleet *)0x0)) && (param_3 != (ReferenceController *)0x0)) &&
     (bVar1 = util__ReferenceController__IsDataStillValid(param_3), bVar1)) {
    if ((param_3 != (ReferenceController *)0x0) &&
       (bVar1 = util__ReferenceController__IsDataStillValid(param_3), !bVar1)) {
      param_2 = (Fleet *)0x0;
    }
    pTVar6 = this;
    uVar2 = Fleet__GetSpacecrafts(param_2);
    FUN_007ede30(uVar2,pTVar6);
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_1c);
    piVar3 = (int *)GetThreateningEnemyShips(this);
    local_c = 0;
    iVar4 = (**(code **)(*(int *)(uintptr_t)piVar3 + 0xc))();
    if (local_c < iVar4) {
      do {
        puVar5 = (undefined4 *)(**(code **)*piVar3)(&local_c);
        if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
           !bVar1)) {
          *puVar5 = 0;
        }
        this_00 = SpacecraftComponent__GetTargeting((SpacecraftComponent *)*puVar5);
        SpacecraftTargeting__UntargetAllCompartments(this_00);
        local_c = local_c + 1;
        iVar4 = (**(code **)(*(int *)(uintptr_t)piVar3 + 0xc))();
      } while (local_c < iVar4);
    }
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_1c);
  }
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007f6c60 007f6c60_MethodCaller__private__void___thiscall_TacticalManager__DeselectCompartment_void__ ====
// decompiled by BatchDecomp @ 007f6c60 name=MethodCaller<&private:_void___thiscall_TacticalManager__DeselectCompartment(void)> conv=__cdecl body=31

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_class_TacticalManager_void___MethodCaller__private__void___thiscall_TacticalManager__DeselectCompartment_void__(void *) */

void __cdecl
util__DelegateFactory_class_TacticalManager_void___MethodCaller__private__void___thiscall_TacticalManager__DeselectCompartment_void__(void *param_1)

{
  TacticalManager__SelectCompartment((TacticalManager *)param_1,0,0);
  return;
}


//==== 00007fc380 007fc380_GetAllBodies_Memoize ====
extern undefined4 FUN_007f5060(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007fc380 name=GetAllBodies_Memoize conv=__thiscall body=241

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall TacticalManager__GetAllBodies_Memoize(void)const  */

void __thiscall TacticalManager__GetAllBodies_Memoize(TacticalManager *this)

{
  undefined4 stack0xfffffffc;
  bool bVar1;
  ActorHandler *this_00;
  int iVar2;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_40[16];
  bool local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int local_1c;
  undefined **local_18;
  SharedPtr_L_struct_UIWidget_G_ *local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((this->GetAllBodies_MemoizedValue).IsValidData == false) {
    iVar2 = (this->TacticalManagerMemoizationHandlerInstance).ResetFunctions.Size;
    local_1c = iVar2 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->TacticalManagerMemoizationHandlerInstance,
               &local_1c);
    bVar1 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->TacticalManagerMemoizationHandlerInstance,iVar2);
    if (bVar1) {
      (this->TacticalManagerMemoizationHandlerInstance).ResetFunctions.Data
      [(this->TacticalManagerMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_f910390b, TacticalManager__GetAllBodies_Clear);
    }
    this_00 = (ActorHandler *)
              util__Darray_enum_CrewDepartment__Type___Num((Darray_L_enum_CrewDepartment__Type_G_ *)this);
    ActorHandler__GetAllActors(this_00);
    local_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    iVar2 = (*(code *)local_18[3])();
    util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_2c,iVar2);
    FUN_007f5060(&local_18,this,&local_2c);
    local_18 = ((void *)(0x0091d1bcu));
    if (local_14 != (SharedPtr_L_struct_UIWidget_G_ *)0x0) {
      util__SharedPtr_struct_UIWidget____vector_deleting_destructor(local_14,3);
    }
    local_14 = (SharedPtr_L_struct_UIWidget_G_ *)0x0;
    local_18 = ((void *)(0x00919488u));
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_40,(Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_2c);
    local_30 = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetAllBodies_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_40);
    (this->GetAllBodies_MemoizedValue).IsValidData = local_30;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_40);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_2c);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007fea70 007fea70_GetNearestOppositionCraftOfType ====
extern undefined4 FUN_007f4eb0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007fea70 name=GetNearestOppositionCraftOfType conv=__thiscall body=242

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util__WeakPtr_L_class_SpacecraftComponent_G __thiscall
   TacticalManager__GetNearestOppositionCraftOfType(struct Vec3_L_double_G_,class Faction *,class
   CraftBlueprint const *)const  */

void __thiscall
TacticalManager__GetNearestOppositionCraftOfType(TacticalManager *this,Vec3_L_double_G_ param_1,Faction *param_2,CraftBlueprint *param_3)

{
  undefined4 stack0x00000024;
  undefined4 stack0xfffffffc;
  bool bVar1;
  ReferenceController *this_00;
  ReferenceController *this_01;
  undefined4 local_38;
  ReferenceController *local_34;
  char local_28;
  ReferenceController *local_20;
  undefined4 *local_1c;
  int local_18[4];
  char *local_8;
  
  local_8 = (char *)(__security_cookie ^ (uint)&stack0xfffffffc);
  local_1c = ((slice_view *)&param_1.X)->_0_4_;
  local_20 = (ReferenceController *)0x0;
  if (param_3 == (CraftBlueprint *)0x0) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\tactical\\tacticalmanager.cpp",0x64a,
                    "TargetAlliance != nullptr",(char *)0x0);
    DebugBreak();
  }
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  GetSpacecraftComponentsOfAlliance(this,(Faction *)local_18);
  FUN_007f4eb0(&local_38,local_18,&stack0x00000024,(undefined1 *)((int)&param_1.X + 4));
  if (local_28 == '\0') {
    local_38 = 0;
    bVar1 = false;
    this_00 = (ReferenceController *)0x0;
    this_01 = local_20;
  }
  else {
    if (local_34 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(local_34);
    }
    bVar1 = true;
    this_00 = local_34;
    this_01 = local_34;
  }
  *local_1c = local_38;
  local_1c[1] = this_00;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
  }
  if ((this_01 != (ReferenceController *)0x0) && (bVar1)) {
    util__ReferenceController__ReleaseWeakReference(this_01);
  }
  if (local_34 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_34);
  }
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_18);
  __security_check_cookie((uint)local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007feb70 007feb70_GetNotifications ====
// decompiled by BatchDecomp @ 007feb70 name=GetNotifications conv=__thiscall body=57

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class NotificationManager * __thiscall TacticalManager__GetNotifications(void) */

NotificationManager * __thiscall TacticalManager__GetNotifications(TacticalManager *this)

{
  NotificationManager *pNVar1;
  
  TacticalManager_GetStrategicGame_Memoize(this);
  if (*(char *)&(this->Effects).Controller == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pNVar1 = StrategicManager__GetNotifications((StrategicManager *)(this->Effects).Pointer);
  return pNVar1;
}


//==== 000080eee0 0080eee0_MethodCaller__private__void___thiscall_ModuleActionButton__Click_void__ ====
// decompiled by BatchDecomp @ 0080eee0 name=MethodCaller<&private:_void___thiscall_ModuleActionButton__Click(void)> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_struct_ModuleActionButton_void___MethodCaller__private__void___thiscall_ModuleActionButton__Click_void__(void *) */

void __cdecl
util__DelegateFactory_struct_ModuleActionButton_void___MethodCaller__private__void___thiscall_ModuleActionButton__Click_void__(void *param_1)

{
  ModuleActionButton__Click((ModuleActionButton *)param_1);
  return;
}


//==== 000080eef0 0080eef0_MethodCaller__private__void___thiscall_ModuleRadioActionButton__Click_void__ ====
// decompiled by BatchDecomp @ 0080eef0 name=MethodCaller<&private:_void___thiscall_ModuleRadioActionButton__Click(void)> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_struct_ModuleRadioActionButton_void___MethodCaller__private__void___thiscall_ModuleRadioActionButton__Click_void__(void *) */

void __cdecl
util__DelegateFactory_struct_ModuleRadioActionButton_void___MethodCaller__private__void___thiscall_ModuleRadioActionButton__Click_void__(void *param_1)

{
  ModuleRadioActionButton__Click((ModuleRadioActionButton *)param_1);
  return;
}


//==== 000080ef00 0080ef00_MethodCaller__private__void___thiscall_ModuleToggleActionButton__Click_void__ ====
// decompiled by BatchDecomp @ 0080ef00 name=MethodCaller<&private:_void___thiscall_ModuleToggleActionButton__Click(void)> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_struct_ModuleToggleActionButton_void___MethodCaller__private__void___thiscall_ModuleToggleActionButton__Click_void__(void *) */

void __cdecl
util__DelegateFactory_struct_ModuleToggleActionButton_void___MethodCaller__private__void___thiscall_ModuleToggleActionButton__Click_void__(void *param_1)

{
  ModuleToggleActionButton__Click((ModuleToggleActionButton *)param_1);
  return;
}


//==== 000080f090 0080f090_MethodCaller__public__void___thiscall_CompartmentButton__SelectCompartment_void__ ====
// decompiled by BatchDecomp @ 0080f090 name=MethodCaller<&public:_void___thiscall_CompartmentButton__SelectCompartment(void)> conv=__cdecl body=49

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_struct_CompartmentButton_void___MethodCaller__public__void___thiscall_CompartmentButton__SelectCompartment_void__(void *) */

void __cdecl
util__DelegateFactory_struct_CompartmentButton_void___MethodCaller__public__void___thiscall_CompartmentButton__SelectCompartment_void__(void *param_1)

{
  undefined4 uVar1;
  ReferenceController *this;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x1f0);
  this = *(ReferenceController **)((int)param_1 + 500);
  if (this != (ReferenceController *)0x0) {
    ReferenceController__AddWeakReference(this);
  }
  TacticalManager__SelectCompartment(*(TacticalManager **)((int)param_1 + 8),uVar1,this);
  return;
}


//==== 000080f0d0 0080f0d0_MethodCallerConst__private__bool___thiscall_ModuleUI__AreActionsEnabled_void_const__ ====
// decompiled by BatchDecomp @ 0080f0d0 name=MethodCallerConst<&private:_bool___thiscall_ModuleUI__AreActionsEnabled(void)const_> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static bool __cdecl util__DelegateFactory_struct_ModuleUI_bool___MethodCallerConst__private__bool___thiscall_ModuleUI__AreActionsEnabled_void_const__(void const * const) */

bool __cdecl
util__DelegateFactory_struct_ModuleUI_bool___MethodCallerConst__private__bool___thiscall_ModuleUI__AreActionsEnabled_void_const__(void *param_1)

{
  bool bVar1;
  
  bVar1 = ModuleUI__AreActionsEnabled((ModuleUI *)param_1);
  return bVar1;
}


//==== 000080f640 0080f640_MethodCallerConst__private__void___thiscall_ModuleUI__RenderModuleIcon_void_const__ ====
// decompiled by BatchDecomp @ 0080f640 name=MethodCallerConst<&private:_void___thiscall_ModuleUI__RenderModuleIcon(void)const_> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_struct_ModuleUI_void___MethodCallerConst__private__void___thiscall_ModuleUI__RenderModuleIcon_void_const__(void const * const) */

void __cdecl
util__DelegateFactory_struct_ModuleUI_void___MethodCallerConst__private__void___thiscall_ModuleUI__RenderModuleIcon_void_const__(void *param_1)

{
  ModuleUI__RenderModuleIcon((ModuleUI *)param_1);
  return;
}


//==== 0000822330 00822330_TickPopups ====

// decompiled by BatchDecomp @ 00822330 name=TickPopups conv=__thiscall body=148

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CombatNotifier__TickPopups(double) */

void __thiscall CombatNotifier__TickPopups(CombatNotifier *this,double param_1)

{
  undefined4 stack0xfffffffc;
  Darray_L_CombatNotification_G_ *this_00;
  int iVar1;
  Darray_L_struct_CombatNotification_G_ *pDVar2;
  undefined **local_1c;
  void *local_18;
  uint local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  this_00 = &this->PopupNotifiers;
  local_c = 0;
  iVar1 = (**(code **)(*(int *)&this->PopupNotifiers + 0xc))();
  if ((int)local_c < iVar1) {
    do {
      iVar1 = (**(code **)*(int *)this_00)(&local_c);
      *(double *)(iVar1 + 0x10) = *(double *)(iVar1 + 0x10) - param_1;
      local_c = local_c + 1;
      iVar1 = (**(code **)(*(int *)this_00 + 0xc))();
    } while ((int)local_c < iVar1);
  }
  local_c = local_c & 0xffffff00;
  pDVar2 = (Darray_L_struct_CombatNotification_G_ *)FUN_00821520(&local_1c,this_00,local_c);
  util__Darray_struct_CombatNotification___operator
            ((Darray_L_struct_CombatNotification_G_ *)this_00,pDVar2);
  local_1c = ((void *)(0x0093f088u));
  if (local_18 != (void *)0x0) {
    operator_delete__(local_18);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000822ab0 00822ab0_MethodCallerConst__private__bool___thiscall_OrderButton__CanUse_void_const__ ====
// decompiled by BatchDecomp @ 00822ab0 name=MethodCallerConst<&private:_bool___thiscall_OrderButton__CanUse(void)const_> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static bool __cdecl util__DelegateFactory_struct_OrderButton_bool___MethodCallerConst__private__bool___thiscall_OrderButton__CanUse_void_const__(void const * const) */

bool __cdecl
util__DelegateFactory_struct_OrderButton_bool___MethodCallerConst__private__bool___thiscall_OrderButton__CanUse_void_const__(void *param_1)

{
  bool bVar1;
  
  bVar1 = OrderButton__CanUse((OrderButton *)param_1);
  return bVar1;
}


//==== 0000822b70 00822b70_MethodCallerConst__public__bool___thiscall_OrderButton__GetToggleState_void_const__ ====
// decompiled by BatchDecomp @ 00822b70 name=MethodCallerConst<&public:_bool___thiscall_OrderButton__GetToggleState(void)const_> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static bool __cdecl util__DelegateFactory_struct_OrderButton_bool___MethodCallerConst__public__bool___thiscall_OrderButton__GetToggleState_void_const__(void const * const) */

bool __cdecl
util__DelegateFactory_struct_OrderButton_bool___MethodCallerConst__public__bool___thiscall_OrderButton__GetToggleState_void_const__(void *param_1)

{
  bool bVar1;
  
  bVar1 = OrderButton__GetToggleState((OrderButton *)param_1);
  return bVar1;
}


//==== 0000825720 00825720_MethodCaller__private__void___thiscall_ShipGroupUI__SplitUnits_void__ ====
// decompiled by BatchDecomp @ 00825720 name=MethodCaller<&private:_void___thiscall_ShipGroupUI__SplitUnits(void)> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_struct_ShipGroupUI_void___MethodCaller__private__void___thiscall_ShipGroupUI__SplitUnits_void__(void *)
    */

void __cdecl
util__DelegateFactory_struct_ShipGroupUI_void___MethodCaller__private__void___thiscall_ShipGroupUI__SplitUnits_void__(void *param_1)

{
  ShipGroupUI__SplitUnits((ShipGroupUI *)param_1);
  return;
}


//==== 0000825730 00825730_MethodCaller__private__void___thiscall_ShipGroupUI__ToggleTargetShip_void__ ====
// decompiled by BatchDecomp @ 00825730 name=MethodCaller<&private:_void___thiscall_ShipGroupUI__ToggleTargetShip(void)> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_struct_ShipGroupUI_void___MethodCaller__private__void___thiscall_ShipGroupUI__ToggleTargetShip_void__(void *) */

void __cdecl
util__DelegateFactory_struct_ShipGroupUI_void___MethodCaller__private__void___thiscall_ShipGroupUI__ToggleTargetShip_void__(void *param_1)

{
  ShipGroupUI__ToggleTargetShip((ShipGroupUI *)param_1);
  return;
}


//==== 0000825770 00825770_MethodCallerConst__private__bool___thiscall_ShipGroupUI__CanUnsplitUnits_void_const__ ====
// decompiled by BatchDecomp @ 00825770 name=MethodCallerConst<&private:_bool___thiscall_ShipGroupUI__CanUnsplitUnits(void)const_> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static bool __cdecl util__DelegateFactory_struct_ShipGroupUI_bool___MethodCallerConst__private__bool___thiscall_ShipGroupUI__CanUnsplitUnits_void_const__(void const * const) */

bool __cdecl
util__DelegateFactory_struct_ShipGroupUI_bool___MethodCallerConst__private__bool___thiscall_ShipGroupUI__CanUnsplitUnits_void_const__(void *param_1)

{
  bool bVar1;
  
  bVar1 = ShipGroupUI__CanUnsplitUnits((ShipGroupUI *)param_1);
  return bVar1;
}


//==== 0000825b00 00825b00_MethodCallerConst__private__bool___thiscall_ShipGroupUI__IsGroupAllied_void_const__ ====
// decompiled by BatchDecomp @ 00825b00 name=MethodCallerConst<&private:_bool___thiscall_ShipGroupUI__IsGroupAllied(void)const_> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static bool __cdecl util__DelegateFactory_struct_ShipGroupUI_bool___MethodCallerConst__private__bool___thiscall_ShipGroupUI__IsGroupAllied_void_const__(void const * const) */

bool __cdecl
util__DelegateFactory_struct_ShipGroupUI_bool___MethodCallerConst__private__bool___thiscall_ShipGroupUI__IsGroupAllied_void_const__(void *param_1)

{
  bool bVar1;
  
  bVar1 = ShipGroupUI__IsGroupAllied((ShipGroupUI *)param_1);
  return bVar1;
}


//==== 0000825b10 00825b10_MethodCallerConst__public__bool___thiscall_ShipGroupUI__IsSelected_void_const__ ====
// decompiled by BatchDecomp @ 00825b10 name=MethodCallerConst<&public:_bool___thiscall_ShipGroupUI__IsSelected(void)const_> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static bool __cdecl util__DelegateFactory_struct_ShipGroupUI_bool___MethodCallerConst__public__bool___thiscall_ShipGroupUI__IsSelected_void_const__(void const * const) */

bool __cdecl
util__DelegateFactory_struct_ShipGroupUI_bool___MethodCallerConst__public__bool___thiscall_ShipGroupUI__IsSelected_void_const__(void *param_1)

{
  bool bVar1;
  
  bVar1 = ShipGroupUI__IsSelected((ShipGroupUI *)param_1);
  return bVar1;
}


//==== 0000827a10 00827a10_AreShipsNonStationary ====
// decompiled by BatchDecomp @ 00827a10 name=AreShipsNonStationary conv=__thiscall body=208

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall ShipGroupUI__AreShipsNonStationary(void)const  */

bool __thiscall ShipGroupUI__AreShipsNonStationary(ShipGroupUI *this)

{
  undefined4 stack0xfffffffc;
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  CraftBlueprint *this_00;
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
  GetShipsInGroup(this);
  local_c = 0;
  iVar3 = (*(code *)local_1c[3])();
  if (local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(*(code *)*local_1c)(&local_c);
      if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
         !bVar1)) {
        *puVar4 = 0;
      }
      this_00 = SpacecraftComponent__GetCraftDesign((SpacecraftComponent *)*puVar4);
      CraftBlueprint__CanMove_Memoize(this_00);
      if (*(char *)((int)&(this_00->GetMainEngineModulePlacers_MemoizedValue).Data._pad_0x0_0 + 1) ==
          '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      if ((char)(this_00->GetMainEngineModulePlacers_MemoizedValue).Data._pad_0x0_0 == '\0') {
        uVar2 = 0;
        goto LAB_00827ac1;
      }
      local_c = local_c + 1;
      iVar3 = (*(code *)local_1c[3])();
    } while (local_c < iVar3);
  }
  uVar2 = 1;
LAB_00827ac1:
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_1c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}


//==== 000082a9c0 0082a9c0_RequestRebuild ====
// decompiled by BatchDecomp @ 0082a9c0 name=RequestRebuild conv=__thiscall body=8

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall ShipListUI__RequestRebuild(void) */

void __thiscall ShipListUI__RequestRebuild(ShipListUI *this)

{
  this->RebuildPending = true;
  return;
}


//==== 000082b030 0082b030_MethodCaller__private__void___thiscall_HUDTactical__Exit_void__ ====
// decompiled by BatchDecomp @ 0082b030 name=MethodCaller<&private:_void___thiscall_HUDTactical__Exit(void)> conv=__cdecl body=15

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_struct_HUDTactical_void___MethodCaller__private__void___thiscall_HUDTactical__Exit_void__(void *) */

void __cdecl
util__DelegateFactory_struct_HUDTactical_void___MethodCaller__private__void___thiscall_HUDTactical__Exit_void__(void *param_1)

{
  TacticalManager__EndTacticalSession(*(TacticalManager **)((int)param_1 + 8));
  return;
}


//==== 000082b090 0082b090_MethodCaller__private__void___thiscall_HUDTactical__OnMarqueeClick_void__ ====
// decompiled by BatchDecomp @ 0082b090 name=MethodCaller<&private:_void___thiscall_HUDTactical__OnMarqueeClick(void)> conv=__cdecl body=34

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_struct_HUDTactical_void___MethodCaller__private__void___thiscall_HUDTactical__OnMarqueeClick_void__(void
   *) */

void __cdecl
util__DelegateFactory_struct_HUDTactical_void___MethodCaller__private__void___thiscall_HUDTactical__OnMarqueeClick_void__(void *param_1)

{
  TacticalManager__SelectCompartment(*(TacticalManager **)((int)param_1 + 8),0,0);
  return;
}


//==== 000082b0f0 0082b0f0_MethodCaller__private__void___thiscall_HUDTactical__SelectAllAllies_void__ ====
// decompiled by BatchDecomp @ 0082b0f0 name=MethodCaller<&private:_void___thiscall_HUDTactical__SelectAllAllies(void)> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_struct_HUDTactical_void___MethodCaller__private__void___thiscall_HUDTactical__SelectAllAllies_void__(void *) */

void __cdecl
util__DelegateFactory_struct_HUDTactical_void___MethodCaller__private__void___thiscall_HUDTactical__SelectAllAllies_void__(void *param_1)

{
  HUDTactical__SelectAllAllies((HUDTactical *)param_1);
  return;
}


//==== 000082b340 0082b340_MethodCallerConst__private__bool___thiscall_HUDTactical__HasAnyShips_void_const__ ====
// decompiled by BatchDecomp @ 0082b340 name=MethodCallerConst<&private:_bool___thiscall_HUDTactical__HasAnyShips(void)const_> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static bool __cdecl util__DelegateFactory_struct_HUDTactical_bool___MethodCallerConst__private__bool___thiscall_HUDTactical__HasAnyShips_void_const__(void const * const) */

bool __cdecl
util__DelegateFactory_struct_HUDTactical_bool___MethodCallerConst__private__bool___thiscall_HUDTactical__HasAnyShips_void_const__(void *param_1)

{
  bool bVar1;
  
  bVar1 = HUDTactical__HasAnyShips((HUDTactical *)param_1);
  return bVar1;
}


//==== 0000855e80 00855e80_FUN_00855e80 ====
void FUN_00855e80(char *param_1);

// decompiled by BatchDecomp @ 00855e80 name=FUN_00855e80 conv=unknown body=27

void FUN_00855e80(char *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1 != (char *)0x0) {
    cVar1 = *param_1;
    while (cVar1 != '\0') {
      iVar2 = iVar2 + 1;
      cVar1 = param_1[iVar2];
    }
    return;
  }
  return;
}


//==== 0000882030 00882030_FillArc ====
// decompiled by BatchDecomp @ 00882030 name=FillArc conv=__cdecl body=79

/* void __cdecl FillArc(double,double,int,double,double,bool) */

void __cdecl
FillArc(double param_1,double param_2,int param_3,double param_4,double param_5,bool param_6)

{
  bool unaff_BP;
  
  FillEllipticalArc(param_1,param_2,param_1,param_2,param_3,param_4,param_5,unaff_BP);
  return;
}


//==== 0000889d70 00889d70_GetCustomTheme ====
// decompiled by BatchDecomp @ 00889d70 name=GetCustomTheme conv=__thiscall body=22

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* protected: struct CustomUIThemeInterface const * __thiscall UIWidget__GetCustomTheme(void)const
    */

CustomUIThemeInterface * __thiscall UIWidget__GetCustomTheme(UIWidget *this)

{
  CapitalShipComponent *this_00;
  int *piVar1;
  CustomUIThemeInterface *pCVar2;
  HWND unaff_retaddr;
  
  this_00 = (CapitalShipComponent *)Manager__GetParent(unaff_retaddr);
  piVar1 = (int *)CapitalShipComponent__GetID(this_00);
                    /* WARNING: Could not recover jumptable at 0x00889d83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar2 = (CustomUIThemeInterface *)(**(code **)(*(int *)(uintptr_t)piVar1 + 0x6c))();
  return pCVar2;
}


//==== 0000889e50 00889e50_GetForegroundColor ====
// decompiled by BatchDecomp @ 00889e50 name=GetForegroundColor conv=__thiscall body=200

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual struct util__Color __thiscall UIWidget__GetForegroundColor(void)const  */

Color * __thiscall UIWidget__GetForegroundColor(UIWidget *this,Color *__return_storage_ptr__)

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
  util__Str_char___Str_char((Str_L_char_G_ *)(local_54 + 0xc),(Str_L_char_G_ *)(iVar2 + 0x14));
  ((slice_view *)&local_54)->_8_4_ = ((void *)(0x0091d980u));
  pMVar3 = (Maybe_L_util__Attribute_L_util__Color_G___G_ *)local_54;
  if ((this->Attributes).ForegroundColor.IsValidData != false) {
    pMVar3 = &(this->Attributes).ForegroundColor;
  }
  local_24 = ((void *)(0x00919980u));
  local_3c = *(float *)(iVar2 + 0x20);
  fStack_38 = *(float *)(iVar2 + 0x24);
  fStack_34 = *(float *)(iVar2 + 0x28);
  fStack_30 = *(float *)(iVar2 + 0x2c);
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


//==== 000088a1c0 0088a1c0_GetRootParent ====
// decompiled by BatchDecomp @ 0088a1c0 name=GetRootParent conv=__thiscall body=185

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util__WeakPtr_L_struct_UIWidget_G __thiscall UIWidget__GetRootParent(void)const  */

undefined4 * __thiscall UIWidget__GetRootParent(UIWidget *this)

{
  undefined4 stack0xfffffff4;
  ReferenceController *pRVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *in_stack_00000004;
  ReferenceController *local_10;
  ReferenceController *local_8;
  
  local_8 = (ReferenceController *)0x0;
  if (((this->ParentWidget).Pointer != (UIWidget *)0x0) &&
     (pRVar1 = (this->ParentWidget).Controller, pRVar1 != (ReferenceController *)0x0)) {
    bVar3 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (bVar3) {
      pRVar1 = (this->ParentWidget).Controller;
      if (pRVar1 != (ReferenceController *)0x0) {
        bVar3 = util__ReferenceController__IsDataStillValid(pRVar1);
        if (!bVar3) {
          (this->ParentWidget).Pointer = (UIWidget *)0x0;
        }
      }
      puVar4 = (undefined4 *)GetRootParent((this->ParentWidget).Pointer);
      bVar2 = true;
      bVar3 = false;
      goto LAB_0088a232;
    }
  }
  puVar4 = (undefined4 *)
util__GetRootParent((SpacecraftComponent *)&stack0xfffffff4);
  bVar2 = false;
  bVar3 = true;
LAB_0088a232:
  pRVar1 = (ReferenceController *)puVar4[1];
  *in_stack_00000004 = *puVar4;
  in_stack_00000004[1] = pRVar1;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar1);
  }
  if (bVar3) {
    if (local_8 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_8);
    }
  }
  if ((local_10 != (ReferenceController *)0x0) && (bVar2)) {
    util__ReferenceController__ReleaseWeakReference(local_10);
  }
  return in_stack_00000004;
}


//==== 000088a5d0 0088a5d0_GetTheme ====
// decompiled by BatchDecomp @ 0088a5d0 name=GetTheme conv=__thiscall body=22

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* protected: struct CoreUITheme const * __thiscall UIWidget__GetTheme(void)const  */

CoreUITheme * __thiscall UIWidget__GetTheme(UIWidget *this)

{
  CapitalShipComponent *this_00;
  int *piVar1;
  CoreUITheme *pCVar2;
  HWND unaff_retaddr;
  
  this_00 = (CapitalShipComponent *)Manager__GetParent(unaff_retaddr);
  piVar1 = (int *)CapitalShipComponent__GetID(this_00);
                    /* WARNING: Could not recover jumptable at 0x0088a5e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar2 = (CoreUITheme *)(**(code **)(*(int *)(uintptr_t)piVar1 + 0x68))();
  return pCVar2;
}


//==== 0000897210 00897210_FUN_00897210 ====
char __thiscall FUN_00897210(undefined4 *param_1,char param_2,undefined4 *param_3);

// decompiled by BatchDecomp @ 00897210 name=FUN_00897210 conv=unknown body=150

char __thiscall FUN_00897210(undefined4 *param_1,char param_2,undefined4 *param_3)

{
  int iVar1;
  char *pcVar2;
  Str_L_char_G_ *pSVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  Str_L_char_G_ local_10;
  
  if (param_2 != '\0') {
    iVar1 = *(int *)param_1[3];
    if (iVar1 == 0) {
      pcVar2 = "";
    }
    else if (*(int *)(iVar1 + 8) < 1) {
      pcVar2 = "";
    }
    else {
      pcVar2 = *(char **)(iVar1 + 4);
    }
    if ((int)param_3[1] < 1) {
      puVar5 = &cde_l2_0091985b_NullString;
    }
    else {
      puVar5 = (undefined1 *)*param_3;
    }
    if ((int)((undefined4 *)param_1[2])[1] < 1) {
      puVar4 = &cde_l2_0091985b_NullString;
    }
    else {
      puVar4 = *(undefined1 **)param_1[2];
    }
    pSVar3 = util__Printf(&local_10,"Error at line %i (%s) for \'%s\': %s!\n",
                          *(undefined4 *)param_1[1],puVar4,pcVar2,puVar5);
    util__Str_char___operator__o10((Str_L_char_G_ *)*param_1,pSVar3);
    if (local_10.Data != (char *)0x0) {
      operator_delete__(local_10.Data);
    }
    *(undefined1 *)param_1[4] = 0;
  }
  return param_2;
}


//==== 00008975c0 008975c0_FUN_008975c0 ====
void __fastcall FUN_008975c0(int *param_1);

// decompiled by BatchDecomp @ 008975c0 name=FUN_008975c0 conv=unknown body=106

void __fastcall FUN_008975c0(int *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ local_24;
  Str_L_char_G_ local_14;
  char *local_8;
  
  param_1 = (int *)*param_1;
  if (param_1[1] != 0) {
    pSVar1 = (Str_L_char_G_ *)(*param_1 + -0x10 + param_1[1] * 0x10);
    util__Str_char___Str_char(&local_14,pSVar1);
    local_8 = pSVar1[1].Data;
    param_1[1] = param_1[1] + -1;
    param_1[3] = param_1[1] * 0x10 + *param_1;
    util__Str_char___Str_char(&local_24,&local_14);
    if (local_14.Data != (char *)0x0) {
      operator_delete__(local_14.Data);
    }
    if (local_24.Data != (char *)0x0) {
      operator_delete__(local_24.Data);
    }
  }
  return;
}


//==== 00008bc910 008bc910_FUN_008bc910 ====
uint __thiscall FUN_008bc910(undefined4 *param_1,uint param_2,Str_L_char_G_ *param_3);
extern undefined4 FUN_008bccd0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 008bc910 name=FUN_008bc910 conv=unknown body=172

uint __thiscall FUN_008bc910(undefined4 *param_1,uint param_2,Str_L_char_G_ *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  Darray_L_struct_FileIO__Error_G_ *pDVar3;
  char cVar4;
  int iVar5;
  Str_L_char_G_ local_24;
  undefined4 local_18;
  Str_L_char_G_ local_14;
  undefined4 local_8;
  
  uVar2 = param_2;
  if ((char)param_2 != '\0') {
    util__Str_char___Str_char(&local_14,param_3);
    uVar1 = *(undefined4 *)param_1[1];
    local_8 = uVar1;
    util__Str_char___Str_char(&local_24,&local_14);
    local_18 = uVar1;
    if (local_14.Data != (char *)0x0) {
      operator_delete__(local_14.Data);
    }
    param_3 = (Str_L_char_G_ *)*param_1;
    iVar5 = *(int *)((int)param_3 + 8);
    param_2 = iVar5 + 1;
    util__Darray_struct_FileIO__Error___SetSize((Darray_L_struct_FileIO__Error_G_ *)param_3,(int *)&param_2);
    pDVar3 = (Darray_L_struct_FileIO__Error_G_ *)param_3;
    cVar4 = FUN_008bccd0(iVar5);
    if (cVar4 != '\0') {
      iVar5 = *(int *)(pDVar3 + 4) + *(int *)(pDVar3 + 8) * 0x10;
      util__Str_char___operator__o8((Str_L_char_G_ *)(iVar5 + -0x10),&local_24);
      *(undefined4 *)(iVar5 + -4) = local_8;
    }
    if (local_24.Data != (char *)0x0) {
      operator_delete__(local_24.Data);
    }
    *(undefined1 *)param_1[2] = 0;
  }
  return uVar2 & 0xff;
}


//==== 00008d7cc0 008d7cc0_MethodCaller__private__void___thiscall_BalloonPopup__Action_void__ ====
// decompiled by BatchDecomp @ 008d7cc0 name=MethodCaller<&private:_void___thiscall_BalloonPopup__Action(void)> conv=__cdecl body=36

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_struct_BalloonPopup_void___MethodCaller__private__void___thiscall_BalloonPopup__Action_void__(void *) */

void __cdecl
util__DelegateFactory_struct_BalloonPopup_void___MethodCaller__private__void___thiscall_BalloonPopup__Action_void__(void *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(int **)((int)param_1 + 0x1f0) + 0x14))();
  if (cVar1 != '\0') {
    BalloonPopup__Close((BalloonPopup *)param_1);
    return;
  }
  return;
}


//==== 00008d7cf0 008d7cf0_MethodCaller__private__void___thiscall_BalloonPopup__Close_void__ ====
// decompiled by BatchDecomp @ 008d7cf0 name=MethodCaller<&private:_void___thiscall_BalloonPopup__Close(void)> conv=__cdecl body=12

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_struct_BalloonPopup_void___MethodCaller__private__void___thiscall_BalloonPopup__Close_void__(void *) */

void __cdecl
util__DelegateFactory_struct_BalloonPopup_void___MethodCaller__private__void___thiscall_BalloonPopup__Close_void__(void *param_1)

{
  BalloonPopup__Close((BalloonPopup *)param_1);
  return;
}


//==== 00008dc530 008dc530___glfwInputWindowCloseRequest ====
// decompiled by BatchDecomp @ 008dc530 name=__glfwInputWindowCloseRequest conv=unknown body=28

void __glfwInputWindowCloseRequest(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 1;
  if (*(code **)(param_1 + 0x24c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008dc549. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x24c))();
    return;
  }
  return;
}


//==== 00008e1880 008e1880___glfwInitWGL ====
// decompiled by BatchDecomp @ 008e1880 name=__glfwInitWGL conv=unknown body=171

undefined4 __glfwInitWGL(void)

{
  if (DAT_00994848 == (HMODULE)0x0) {
    DAT_00994848 = LoadLibraryA("opengl32.dll");
    if (DAT_00994848 == (HMODULE)0x0) {
      __glfwInputError(0x10008,"WGL: Failed to load opengl32.dll");
      return 0;
    }
    DAT_0099484c = GetProcAddress(DAT_00994848,"wglCreateContext");
    DAT_00994850 = GetProcAddress(DAT_00994848,"wglDeleteContext");
    DAT_00994854 = GetProcAddress(DAT_00994848,"wglGetProcAddress");
    DAT_00994858 = GetProcAddress(DAT_00994848,"wglGetCurrentDC");
    DAT_0099485c = GetProcAddress(DAT_00994848,"wglMakeCurrent");
    DAT_00994860 = GetProcAddress(DAT_00994848,"wglShareLists");
  }
  return 1;
}


//==== 00008e3cbd 008e3cbd__ftol3_except ====
// decompiled by BatchDecomp @ 008e3cbd name=_ftol3_except conv=__cdecl body=68

void __cdecl _ftol3_except(void)

{
  int in_EDX;
  byte in_FPUControlWord;
  
  if ((in_EDX == 8) || ((*(byte *)((int)&_MinSubInexact + in_EDX + 7) & in_FPUControlWord) == 0)) {
    except1();
  }
  return;
}


//==== 00008e41b0 008e41b0___SEH_prolog4 ====
// decompiled by BatchDecomp @ 008e41b0 name=__SEH_prolog4 conv=__cdecl body=70

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */

void __cdecl __SEH_prolog4(void)

{
  undefined4 stack0x00000008;
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  int in_stack_00000008;
  uint auStack_1c[5];
  undefined1 local_8[8];
  
  iVar1 = -in_stack_00000008;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + iVar1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + iVar1 + 4) = __security_cookie ^ (uint)&stack0x00000008;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}

